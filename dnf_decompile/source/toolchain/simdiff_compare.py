#!/usr/bin/env python3
"""Pairwise angr comparative symbolic execution (simdiff-style).

There is no PyPI package named "simdiff". This driver does the same job:
run ORIG and rebuild of one function on identical symbolic inputs, hook
callees, and compare observable effects (eax, this-object memory, call
sequence). If no difference is found the function is SEMANTIC_EQ even
when the official syntactic compare is NEAR/DIFF.

Official IDENTICAL / IDENTICAL_AE is unchanged.
"""
from __future__ import annotations

import argparse
import csv
import logging
import os
import re
import sys
import time
from collections import defaultdict
from pathlib import Path

import angr
import claripy
from angr.calling_conventions import SimCCCdecl

ROOT = Path("/home/loyieking/dnf_workspace")
ORIG_DIR = ROOT / "dnf_installer/build/dnf_data/home/template/neople"
NEW_DIR = ROOT / "dnf_decompile/build"
REPORT_DIR = ROOT / "dnf_decompile/function_reports"

SERVICE_ORIG = {
    "statics": ORIG_DIR / "statics/df_statics_r",
    "guild": ORIG_DIR / "guild/df_guild_r",
    "monitor": ORIG_DIR / "monitor/df_monitor_r",
    "manager": ORIG_DIR / "manager/df_manager_r",
    "dbmw": ORIG_DIR / "dbmw_guild/df_dbmw_r",
    "coserver": ORIG_DIR / "coserver/df_coserver_r",
}
SERVICE_NEW = {
    "statics": NEW_DIR / "statics/df_statics_r",
    "guild": NEW_DIR / "guild/df_guild_r",
    "monitor": NEW_DIR / "monitor/df_monitor_r",
    "manager": NEW_DIR / "manager/df_manager_r",
    "dbmw": NEW_DIR / "dbmw/df_dbmw_r",
    "coserver": NEW_DIR / "coserver/df_coserver_r",
}

THIS_BASE = 0x20000000
ARGBUF_BASE = 0x21000000
RET_ADDR = 0x40414141
DEFAULT_THIS_SIZE = 0x1000
DEFAULT_ARGBUF_SIZE = 0x200
MAX_STEPS = 800
MAX_ACTIVE = 64
MAX_DEADENDED = 48

CALL_RE = re.compile(r"call\s+(?:[0-9a-f]+|\*)\s*(?:<([^>+]+)(?:\+[^>]*)?>)?", re.I)
EBP_ARG_RE = re.compile(r"(-?0x[0-9a-f]+|-?[0-9]+)\(%ebp\)")
INSN_RE = re.compile(r"^\s*([0-9a-f]+):\s+(.*)$")


def disable_angr_log():
    logging.getLogger("angr").setLevel(logging.ERROR)
    logging.getLogger("cle").setLevel(logging.ERROR)
    logging.getLogger("claripy").setLevel(logging.ERROR)
    logging.getLogger("pyvex").setLevel(logging.ERROR)


def load_manifest(svc: str):
    path = REPORT_DIR / svc / "manifest.tsv"
    rows = []
    with path.open() as f:
        for row in csv.DictReader(f, delimiter="\t"):
            rows.append(row)
    return rows


def disasm_func(bin_path: Path, name: str):
    import subprocess

    out = subprocess.check_output(
        ["objdump", "-d", "--no-show-raw-insn", f"--disassemble={name}", str(bin_path)],
        text=True,
        stderr=subprocess.DEVNULL,
    )
    insns = []
    for line in out.splitlines():
        m = INSN_RE.match(line)
        if m:
            insns.append((int(m.group(1), 16), m.group(2).strip()))
    return insns


def infer_n_args(insns):
    max_off = 4  # retaddr only
    for _, txt in insns:
        for m in EBP_ARG_RE.finditer(txt):
            raw = m.group(1)
            off = int(raw, 16) if raw.startswith(("-0x", "0x")) else int(raw)
            if off >= 8:
                max_off = max(max_off, off)
    if max_off < 8:
        return 1  # this only, or no-frame leaf
    return (max_off - 4) // 4


def collect_callees(insns):
    names = []
    for _, txt in insns:
        if not txt.startswith("call"):
            continue
        m = CALL_RE.search(txt)
        if m and m.group(1):
            names.append(m.group(1))
        else:
            names.append("<indirect>")
    return names


def demangle(name):
    import subprocess

    try:
        return subprocess.check_output(["c++filt", "-n", name], text=True).strip()
    except Exception:
        return name


def parse_arg_is_ptr(name, n_args):
    """this is always a pointer. Remaining args from the demangled C++ signature."""
    flags = [True] + [False] * max(0, n_args - 1)
    dem = demangle(name)
    m = re.search(r"\((.*)\)\s*(const)?\s*$", dem)
    if not m:
        return flags
    inner = m.group(1).strip()
    if not inner or inner == "void":
        return flags
    parts = []
    depth = 0
    cur = []
    for ch in inner:
        if ch == "<":
            depth += 1
            cur.append(ch)
        elif ch == ">":
            depth = max(0, depth - 1)
            cur.append(ch)
        elif ch == "," and depth == 0:
            parts.append("".join(cur).strip())
            cur = []
        else:
            cur.append(ch)
    if cur:
        parts.append("".join(cur).strip())
    for i, p in enumerate(parts):
        idx = i + 1  # skip this
        if idx >= n_args:
            break
        flags[idx] = "*" in p or "&" in p
    return flags


# Shared across ORIG/rebuild so both sides see the same callee result symbols.
HOOK_RETS = {}
HOOK_ARG_WIDTH = 4  # cdecl dwords captured at each call


def hook_ret(name, idx, bits=32):
    key = (name, idx, bits)
    if key not in HOOK_RETS:
        HOOK_RETS[key] = claripy.BVS("hook_%s_%d" % (name.replace("%", "_"), idx), bits)
    return HOOK_RETS[key]


class RecordCall(angr.SimProcedure):
    def run(self):
        name = self.display_name or "hooked"
        seq = self.state.globals.get("call_seq")
        args = []
        for i in range(HOOK_ARG_WIDTH):
            try:
                args.append(
                    self.state.memory.load(
                        self.state.regs.esp + 4 + 4 * i,
                        4,
                        endness=self.state.arch.memory_endness,
                    )
                )
            except Exception:
                break
        if seq is not None:
            seq.append(name)
            ca = self.state.globals.get("call_args")
            if ca is None:
                ca = []
                self.state.globals["call_args"] = ca
            ca.append(args)
        idx = len(seq) - 1 if seq is not None else 0
        return hook_ret(name, idx)


def make_project(path: Path):
    return angr.Project(
        str(path),
        auto_load_libs=False,
        load_options={"auto_load_libs": False},
    )


def hook_callees(proj, callee_names):
    hooked = []
    for name in sorted(set(callee_names)):
        if name in ("<indirect>",):
            continue
        try:
            addr = proj.loader.find_symbol(name)
            if addr is None:
                # PLT-local name sometimes has @plt stripped already
                continue
            target = addr.rebased_addr
            proj.hook(target, RecordCall(display_name=name), replace=True)
            hooked.append((name, hex(target)))
        except Exception:
            continue
    return hooked


def setup_state(proj, addr, n_args, this_sym, arg_syms, arg_is_ptr, this_size):
    cc = SimCCCdecl(proj.arch)
    concrete_args = []
    # this
    concrete_args.append(THIS_BASE)
    extra_stores = []  # (addr, bv)
    extra_stores.append((THIS_BASE, this_sym))

    ptr_i = 0
    for i, sym in enumerate(arg_syms):
        if arg_is_ptr[i + 1] if i + 1 < len(arg_is_ptr) else False:
            base = ARGBUF_BASE + ptr_i * 0x10000
            concrete_args.append(base)
            extra_stores.append((base, arg_syms[i]))  # shared BVS already sized
            ptr_i += 1
        else:
            concrete_args.append(sym)

    st = proj.factory.call_state(
        addr,
        *concrete_args,
        cc=cc,
        ret_addr=RET_ADDR,
        add_options={
            angr.options.ZERO_FILL_UNCONSTRAINED_MEMORY,
            angr.options.ZERO_FILL_UNCONSTRAINED_REGISTERS,
        },
        remove_options={
            angr.options.LAZY_SOLVES,
        },
    )
    st.globals["call_seq"] = []
    st.globals["call_args"] = []
    for a, bv in extra_stores:
        st.memory.store(a, bv, endness=st.arch.memory_endness)
    # call_state already wrote concrete this pointer; re-store symbolic object body
    st.memory.store(THIS_BASE, this_sym, endness="Iend_BE")  # raw bitstream, byte 0 first
    return st


def explore(proj, state, func_size):
    # avoid falling into hooked-miss callees: also hook RET_ADDR as success
    proj.hook(RET_ADDR, angr.SIM_PROCEDURES["stubs"]["ReturnUnconstrained"](), replace=True)

    sm = proj.factory.simulation_manager(state)
    steps = 0
    while sm.active and steps < MAX_STEPS:
        if len(sm.active) > MAX_ACTIVE:
            sm.move(from_stash="active", to_stash="spilled", filter_func=lambda s: True)
            break
        sm.step()
        steps += 1
        # anything that reached our fake return
        moved = []
        for s in list(sm.active):
            try:
                ip = s.solver.eval(s.regs.eip)
            except Exception:
                continue
            if ip == RET_ADDR:
                moved.append(s)
        if moved:
            sm.move(from_stash="active", to_stash="deadended", filter_func=lambda s: s in moved)
        if len(sm.deadended) >= MAX_DEADENDED:
            break
    return sm, steps


def snapshot(state, this_size, n_ptr_args):
    eax = state.regs.eax
    this_mem = state.memory.load(THIS_BASE, this_size, endness="Iend_BE")
    ptr_bufs = []
    for i in range(n_ptr_args):
        ptr_bufs.append(
            state.memory.load(ARGBUF_BASE + i * 0x10000, DEFAULT_ARGBUF_SIZE, endness="Iend_BE")
        )
    seq = tuple(state.globals.get("call_seq") or [])
    cargs = list(state.globals.get("call_args") or [])
    return {
        "eax": eax,
        "this": this_mem,
        "ptr_bufs": ptr_bufs,
        "seq": seq,
        "cargs": cargs,
        "state": state,
    }


GETTER_RE = re.compile(
    r"(4is[A-Z]|3is[A-Z]|3Get|6Get|7Get|8Get|9Get|"
    r"\dGet[A-Z]|Has[A-Z]|has[A-Z]|Check[A-Z]|check[A-Z])"
)


def probably_returns(name, insns):
    """eax is an observable return, not leftover garbage from a void setter."""
    if GETTER_RE.search(name):
        return True
    texts = [t for _, t in insns]
    body = [
        t
        for t in texts
        if t
        not in (
            "leave",
            "ret",
            "pop %ebp",
            "pop %ebx",
            "pop %esi",
            "pop %edi",
            "pop %ecx",
            "pop %edx",
        )
        and not t.startswith("add    $")
    ]
    if not body:
        return False
    last = body[-1]
    if last.startswith("movzbl") and last.endswith("%eax"):
        return True
    if re.match(r"mov\s+\$(0x)?[01],%eax", last):
        return True
    return False


def _joint_solver(o, n):
    s = claripy.Solver()
    for c in o["state"].solver.constraints:
        s.add(c)
    for c in n["state"].solver.constraints:
        s.add(c)
    return s


def _can_differ(o, n, ea, eb):
    s = _joint_solver(o, n)
    s.add(ea != eb)
    return s.satisfiable()


def _is_stackish(snap, expr):
    """True if expr is a concrete pointer into this state's stack or redzone."""
    st = snap["state"]
    try:
        if st.solver.symbolic(expr):
            return False
        val = st.solver.eval(expr)
    except Exception:
        return False
    try:
        sp = st.solver.max(st.regs.esp)
        bp = st.solver.max(st.regs.ebp)
    except Exception:
        return False
    # 32-bit cdecl frames live in a few pages around ebp/esp
    lo = min(sp, bp) - 0x2000
    hi = max(sp, bp) + 0x200
    return lo <= val <= hi


def compare_snaps(orig_snaps, new_snaps, cmp_eax):
    if not orig_snaps and not new_snaps:
        return "INCONCLUSIVE", "no terminal states on either side"
    if not orig_snaps or not new_snaps:
        return "INCONCLUSIVE", "only one side reached a return (o=%d n=%d)" % (
            len(orig_snaps),
            len(new_snaps),
        )

    orig_seqs = {s["seq"] for s in orig_snaps}
    new_seqs = {s["seq"] for s in new_snaps}
    seq_note = ""
    if orig_seqs != new_seqs:
        seq_note = "call-seq o=%s n=%s" % (sorted(orig_seqs), sorted(new_seqs))

    diffs = []
    paired = 0
    for o in orig_snaps:
        candidates = [n for n in new_snaps if n["seq"] == o["seq"]] or new_snaps
        found_compat = False
        for n in candidates:
            try:
                s = _joint_solver(o, n)
            except Exception:
                continue
            if not s.satisfiable():
                continue
            found_compat = True
            paired += 1
            if cmp_eax and _can_differ(o, n, o["eax"], n["eax"]):
                diffs.append("eax differs (seq=%s)" % (o["seq"],))
                break
            if _can_differ(o, n, o["this"], n["this"]):
                diffs.append("this-memory differs (seq=%s)" % (o["seq"],))
                break
            for i, (ob, nb) in enumerate(zip(o["ptr_bufs"], n["ptr_bufs"])):
                if _can_differ(o, n, ob, nb):
                    diffs.append("ptr-arg[%d] memory differs (seq=%s)" % (i, o["seq"]))
                    break
            if diffs:
                break
            # same-length call-arg vectors: each dword must be equal, but
            # skip stack-slot pointers (frame layout is allowed to differ).
            if len(o["cargs"]) == len(n["cargs"]):
                for ci, (oa, na) in enumerate(zip(o["cargs"], n["cargs"])):
                    for ai, (x, y) in enumerate(zip(oa, na)):
                        if _is_stackish(o, x) or _is_stackish(n, y):
                            continue
                        if _can_differ(o, n, x, y):
                            diffs.append(
                                "call[%d].arg[%d] differs (seq=%s)" % (ci, ai, o["seq"])
                            )
                            break
                    if diffs:
                        break
            if diffs:
                break
        if diffs:
            break
        if not found_compat:
            pass

    if diffs:
        extra = ("; " + seq_note) if seq_note else ""
        return "SEMANTIC_DIFF", diffs[0] + extra

    if orig_seqs != new_seqs:
        return "INCONCLUSIVE", "no mem/eax diff on paired paths; " + seq_note

    what = "this-mem+calls"
    if cmp_eax:
        what += "+eax"
    return "SEMANTIC_EQ", "%s match on compatible paths (o=%d n=%d pairs~%d)" % (
        what,
        len(orig_snaps),
        len(new_snaps),
        paired,
    )


_PROJ_CACHE = {}


def get_proj(path: Path):
    key = str(path)
    if key not in _PROJ_CACHE:
        _PROJ_CACHE[key] = make_project(path)
    return _PROJ_CACHE[key]


def analyze_one(svc, name, timeout_s=20, this_size=DEFAULT_THIS_SIZE):
    orig_path = SERVICE_ORIG[svc]
    new_path = SERVICE_NEW[svc]
    t0 = time.time()
    try:
        o_insns = disasm_func(orig_path, name)
        n_insns = disasm_func(new_path, name)
    except Exception as e:
        return {"svc": svc, "name": name, "verdict": "ERROR", "detail": "disasm %s" % e}

    if not o_insns or not n_insns:
        return {
            "svc": svc,
            "name": name,
            "verdict": "MISSING",
            "detail": "insns o=%d n=%d" % (len(o_insns), len(n_insns)),
        }

    n_args = max(infer_n_args(o_insns), infer_n_args(n_insns), 1)
    o_calls = collect_callees(o_insns)
    n_calls = collect_callees(n_insns)
    arg_is_ptr = parse_arg_is_ptr(name, n_args)
    # ebp-based count can exceed the C++ signature (compiler temps). Extra slots stay scalars.
    this_sym = claripy.BVS("this_mem", this_size * 8)
    arg_syms = []
    for i in range(1, n_args):
        if i < len(arg_is_ptr) and arg_is_ptr[i]:
            arg_syms.append(claripy.BVS("argbuf_%d" % i, DEFAULT_ARGBUF_SIZE * 8))
        else:
            arg_syms.append(claripy.BVS("arg_%d" % i, 32))
    n_ptr_args = sum(1 for i, p in enumerate(arg_is_ptr) if i > 0 and p)
    cmp_eax = probably_returns(name, o_insns) or probably_returns(name, n_insns)
    HOOK_RETS.clear()

    def run_side(path, insns, calls):
        # fresh project per function so hooks do not leak across symbols
        proj = make_project(path)
        sym = proj.loader.find_symbol(name)
        if sym is None:
            raise RuntimeError("symbol not in %s" % path)
        addr = sym.rebased_addr
        hook_callees(proj, calls)
        # also hook anything the other side calls, in case names match
        st = setup_state(proj, addr, n_args, this_sym, arg_syms, arg_is_ptr, this_size)
        sm, steps = explore(proj, st, len(insns))
        snaps = [snapshot(s, this_size, n_ptr_args) for s in sm.deadended]
        return {
            "proj": proj,
            "sm": sm,
            "steps": steps,
            "snaps": snaps,
            "errored": len(getattr(sm, "errored", []) or []),
            "active": len(sm.active),
            "addr": addr,
        }

    try:
        # per-function timeout via alarm is messy with z3; just run and check clock
        o = run_side(orig_path, o_insns, o_calls + n_calls)
        if time.time() - t0 > timeout_s:
            return {
                "svc": svc,
                "name": name,
                "verdict": "TIMEOUT",
                "detail": "after ORIG explore %.1fs" % (time.time() - t0),
                "n_args": n_args,
            }
        n = run_side(new_path, n_insns, o_calls + n_calls)
    except Exception as e:
        return {
            "svc": svc,
            "name": name,
            "verdict": "ERROR",
            "detail": "%s: %s" % (type(e).__name__, e),
            "n_args": n_args,
        }

    verdict, detail = compare_snaps(o["snaps"], n["snaps"], cmp_eax)
    extra = " args=%d eax=%s o_dead=%d n_dead=%d o_err=%d n_err=%d o_act=%d n_act=%d calls_o=%s calls_n=%s t=%.1fs" % (
        n_args,
        cmp_eax,
        len(o["snaps"]),
        len(n["snaps"]),
        o["errored"],
        n["errored"],
        o["active"],
        n["active"],
        o_calls,
        n_calls,
        time.time() - t0,
    )
    if time.time() - t0 > timeout_s and verdict == "SEMANTIC_EQ":
        pass
    return {
        "svc": svc,
        "name": name,
        "verdict": verdict,
        "detail": detail + extra,
        "n_args": n_args,
        "orig_calls": o_calls,
        "new_calls": n_calls,
    }


def main():
    disable_angr_log()
    ap = argparse.ArgumentParser()
    ap.add_argument("service", nargs="?", help="statics|guild|monitor|manager|dbmw")
    ap.add_argument("symbol", nargs="?", help="mangled symbol; omit to batch")
    ap.add_argument("--max-size", type=lambda x: int(x, 0), default=0x180)
    ap.add_argument("--limit", type=int, default=30)
    ap.add_argument("--timeout", type=int, default=25)
    ap.add_argument("--status", default="NEAR,DIFF", help="comma statuses to include")
    ap.add_argument("--out", default="")
    args = ap.parse_args()

    jobs = []
    if args.service and args.symbol:
        jobs.append((args.service, args.symbol, "?"))
    elif args.service:
        want = set(args.status.split(","))
        rows = load_manifest(args.service)
        picked = []
        for row in rows:
            if row["status"] not in want:
                continue
            try:
                sz = int(row["orig_size"], 16)
            except Exception:
                continue
            if sz > args.max_size:
                continue
            picked.append((sz, row["status"], row["name"]))
        picked.sort()
        for sz, st, name in picked[: args.limit]:
            jobs.append((args.service, name, st))
    else:
        # default smoke: known-small candidates
        jobs = [
            ("monitor", "_ZN10CIPCounter13setMinIPCountEh", "DIFF"),
            ("monitor", "_ZN10CIPCounter11setLoadTermEh", "DIFF"),
            ("guild", "_ZN5CUser19AddGuildMemberPointEj", "DIFF"),
            ("statics", "_ZN25stDisjointAvatarInfoTotal5clearEv", "DIFF"),
            ("statics", "_ZN25stDisjointAvatarInfoTotal8incCountEiiii", "DIFF"),
            ("guild", "_ZN6CGuild31InsertGuildMemberChanglableInfoEj", "NEAR"),
            ("guild", "_ZN8WongWork11CGMAccounts4isGMEj", "NEAR"),
        ]

    results = []
    for svc, name, st in jobs:
        print("== %s %s (%s) ==" % (svc, name, st), flush=True)
        r = analyze_one(svc, name, timeout_s=args.timeout)
        r["status"] = st
        results.append(r)
        print("  %s  %s" % (r["verdict"], r["detail"]), flush=True)

    counts = defaultdict(int)
    for r in results:
        counts[r["verdict"]] += 1
    print("SUMMARY", dict(counts), "n=%d" % len(results))
    if args.out:
        with open(args.out, "w") as f:
            f.write("svc\tstatus\tname\tverdict\tdetail\n")
            for r in results:
                f.write(
                    "%s\t%s\t%s\t%s\t%s\n"
                    % (
                        r["svc"],
                        r.get("status", ""),
                        r["name"],
                        r["verdict"],
                        r["detail"].replace("\t", " ").replace("\n", " "),
                    )
                )
        print("WROTE", args.out)


if __name__ == "__main__":
    main()
