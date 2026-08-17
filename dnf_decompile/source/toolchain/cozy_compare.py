#!/usr/bin/env python3
"""ORIG vs rebuild comparative symbolic execution via cozy-re.

Must run under the isolated cozy venv (angr 9.2.130 + pycparser 2.x):

  source/toolchain/install_cozy.sh
  dnf_decompile/.venv-cozy/bin/python source/toolchain/cozy_compare.py \\
      monitor _ZN10CIPCounter13setMinIPCountEh

This is not the official IDENTICAL bar. SEMANTIC_EQ means cozy found no
observable difference on compatible terminal states (annotated this-object
memory + return value + hooked call side-effects).

PATH_EQ / PATH_DIFF are a static fallback: no symbolic invoke. Paths are
identified by the ordered call sequence from entry to each ret (or tail
jmp). Used for unbounded string/table loops that would otherwise TIMEOUT.
"""
from __future__ import annotations

import argparse
import csv
import logging
import re
import subprocess
import sys
import time
from collections import defaultdict
from pathlib import Path

import angr
import claripy
import cozy
from angr import SimProcedure
from cozy.analysis import Comparison, ComparisonOptions
from cozy.side_effect import perform

_DECOMP = Path(__file__).resolve().parent.parent.parent         # .../dnf_decompile
ROOT = _DECOMP.parent                                          # 工作区根：<workspace>/（含 dnf_decompile 与 dnf_installer）
ORIG_DIR = ROOT / "dnf_installer/build/dnf_data/home/template/neople"
NEW_DIR = _DECOMP / "build"
REPORT_DIR = _DECOMP / "function_reports"

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

THIS_SIZE = 0x400
PKT_SIZE = 0x200
CALL_RE = re.compile(r"call\s+(?:[0-9a-f]+|\*)\s*(?:<([^>+]+)(?:\+[^>]*)?>)?", re.I)
INSN_RE = re.compile(r"^\s*([0-9a-f]+):\s+(.*)$")
EBP_ARG_RE = re.compile(r"(-?0x[0-9a-f]+|-?[0-9]+)\(%ebp\)")
GETTER_RE = re.compile(
    r"(4is[A-Z]|3is[A-Z]|3Get|6Get|7Get|8Get|9Get|\dGet[A-Z]|Has[A-Z]|has[A-Z]|Check[A-Z]|check[A-Z])"
)
JMP_TGT_RE = re.compile(r"\b([0-9a-f]+)\b", re.I)
# Unbounded string/table loops that hang sess.run(); skip invoke and use call/ret paths.
LOOPY_RE = re.compile(
    r"(strnncoll|strnxfrm|strcasecmp|caseup_|casedn_|well_formed|"
    r"numcells|numchars|hash_sort|hash_password|wildcmp|"
    r"instr_|dirname_length|directory_file|octet2hex|"
    r"create_random|fill_uchar|long10_to_str|l10tostr|"
    r"my_malloc|my_once_alloc|my_net_write|ssl_do|"
    r"init_state_maps|my_load_path|cli_flush|flush_one_result|"
    r"get_salt_from_password|my_xml_error|my_coll_init|"
    r"report_errors|my_instr|GetConnLowerMemberCnt|"
    r"GetMemberExpLevel|NoticeLevelUpToLowers|"
    r"getUnconnectedGuildMemberName|ChangeUnconnectedGuildMemberGrade|"
    r"ChangeGuildMemberCharName|SetSubGuildMaster|SecedeProxyMember|"
    r"9LoadGuildE|SendTcpPacket|SaveUsedMemory|is_valid_statistic_packet)",
    re.I,
)
JCC = {
    "je", "jne", "jz", "jnz", "ja", "jae", "jb", "jbe", "jg", "jge", "jl", "jle",
    "js", "jns", "jo", "jno", "jp", "jnp", "jc", "jnc", "loop", "loope", "loopne",
}


def disable_logs():
    for name in ("angr", "cle", "claripy", "pyvex", "cozy", "cozy-log"):
        logging.getLogger(name).setLevel(logging.ERROR)


def demangle(name: str) -> str:
    try:
        return subprocess.check_output(["c++filt", "-n", name], text=True).strip()
    except Exception:
        return name


def parse_arg_is_ptr(name: str, n_args: int) -> list[bool]:
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
        idx = i + 1
        if idx >= n_args:
            break
        flags[idx] = "*" in p or "&" in p
    return flags


def infer_n_args(insns) -> int:
    max_off = 4
    for _, txt in insns:
        for m in EBP_ARG_RE.finditer(txt):
            raw = m.group(1)
            off = int(raw, 16) if raw.startswith(("-0x", "0x")) else int(raw)
            if off >= 8:
                max_off = max(max_off, off)
    if max_off < 8:
        return 1
    return (max_off - 4) // 4


def disasm_func(bin_path: Path, name: str):
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


def collect_callees(insns):
    names = []
    for _, txt in insns:
        if not txt.startswith("call"):
            continue
        m = CALL_RE.search(txt)
        names.append(m.group(1) if m and m.group(1) else "<indirect>")
    return names


def _callee_name(txt: str) -> str:
    m = CALL_RE.search(txt)
    return m.group(1) if m and m.group(1) else "<indirect>"


def _parse_cfg(insns):
    """addr -> (kind, extra, fallthrough_addr). extra is callee or jmp target."""
    addrs = [a for a, _ in insns]
    nxt = {addrs[i]: addrs[i + 1] for i in range(len(addrs) - 1)}
    nodes = {}
    for addr, txt in insns:
        mn = txt.split(None, 1)[0]
        rest = txt.split(None, 1)[1] if " " in txt else ""
        if mn.startswith("ret"):
            nodes[addr] = ("ret", None, None)
        elif mn == "call":
            nodes[addr] = ("call", _callee_name(txt), nxt.get(addr))
        elif mn == "jmp":
            if rest.startswith("*"):
                nodes[addr] = ("ijmp", None, None)
            else:
                m = JMP_TGT_RE.search(rest)
                tgt = int(m.group(1), 16) if m else None
                nodes[addr] = ("jmp", tgt, None)
        elif mn in JCC:
            m = JMP_TGT_RE.search(rest)
            tgt = int(m.group(1), 16) if m else None
            nodes[addr] = ("jcc", tgt, nxt.get(addr))
        else:
            nodes[addr] = ("other", None, nxt.get(addr))
    return nodes, addrs[0] if addrs else None


def path_traces(insns, max_paths=24, max_visit=2):
    """Acyclic-ish call sequences from entry to each ret.

    Back-edges are taken at most once (max_visit=2). Paths are identified by
    the ordered callee names plus which ret site they end at. Does not execute.
    """
    nodes, entry = _parse_cfg(insns)
    if entry is None:
        return []
    paths = []

    def dfs(addr, calls, visits):
        if len(paths) >= max_paths or addr is None or addr not in nodes:
            return
        n = visits.get(addr, 0)
        if n >= max_visit:
            return
        visits = dict(visits)
        visits[addr] = n + 1
        kind, extra, fall = nodes[addr]
        if kind == "ret":
            paths.append((tuple(calls), addr))
            return
        if kind == "call":
            calls = calls + [extra]
            dfs(fall, calls, visits)
            return
        if kind == "jmp":
            if extra in nodes:
                dfs(extra, calls, visits)
            else:
                # tail-call / jump out of the function
                paths.append((tuple(calls + ["<tail>"]), addr))
            return
        if kind == "ijmp":
            paths.append((tuple(calls + ["<ijmp>"]), addr))
            return
        if kind == "jcc":
            dfs(fall, calls, visits)
            if extra in nodes:
                dfs(extra, calls, visits)
            return
        dfs(fall, calls, visits)

    dfs(entry, [], {})
    return paths


def compare_call_ret_paths(o_insns, n_insns, why=""):
    o_paths = path_traces(o_insns)
    n_paths = path_traces(n_insns)
    o_keys = sorted({p[0] for p in o_paths})
    n_keys = sorted({p[0] for p in n_paths})
    o_rets = len({p[1] for p in o_paths})
    n_rets = len({p[1] for p in n_paths})
    exploded = len(o_paths) >= 24 or len(n_paths) >= 24
    detail = (
        "%so_paths=%d n_paths=%d o_uniq=%d n_uniq=%d o_ret=%d n_ret=%d"
        % (why, len(o_paths), len(n_paths), len(o_keys), len(n_keys), o_rets, n_rets)
    )
    if exploded and o_keys != n_keys:
        return "PATH_INCONCLUSIVE", detail + " path cap"
    if not o_paths and not n_paths:
        return "PATH_INCONCLUSIVE", detail + " no ret"
    if o_keys == n_keys and o_rets == n_rets:
        return "PATH_EQ", detail
    return "PATH_DIFF", detail


def looks_loopy(name: str) -> bool:
    return bool(LOOPY_RE.search(name))


def probably_returns(name: str, insns) -> bool:
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


def c_prototype(n_args: int, arg_is_ptr, returns: bool) -> str:
    # cozy/angr prototype parser wants a C signature. this* is arg0.
    parts = ["void*"]  # this
    for i in range(1, n_args):
        parts.append("void*" if i < len(arg_is_ptr) and arg_is_ptr[i] else "unsigned int")
    ret = "unsigned int" if returns else "void"
    return "{} f({})".format(ret, ", ".join(parts))


# Shared hook-return symbols so ORIG and rebuild see the same callee results.
HOOK_RETS: dict[tuple, claripy.ast.BV] = {}


def hook_ret(name: str, idx: int, bits: int = 32):
    key = (name, idx, bits)
    if key not in HOOK_RETS:
        safe = re.sub(r"[^A-Za-z0-9_]", "_", name)
        HOOK_RETS[key] = claripy.BVS("hook_%s_%d" % (safe, idx), bits)
    return HOOK_RETS[key]


class RecordCall(SimProcedure):
    """Hook a callee: log it as a cozy side-effect and return a shared symbol."""

    def run(self):
        name = self.display_name or "hooked"
        seq = self.state.globals.get("call_seq")
        if seq is None:
            seq = []
            self.state.globals["call_seq"] = seq
        idx = len(seq)
        seq.append(name)
        args = []
        for i in range(4):
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
        perform(self.state, "calls", {"name": name, "idx": idx, "args": args}, label=name)
        return hook_ret(name, idx)


def hook_callees(proj: cozy.project.Project, names):
    hooked = []
    for name in sorted(set(names)):
        if not name or name == "<indirect>":
            continue
        try:
            if proj.try_find_symbol_addr(name) is None:
                continue
            # hook_symbol wants the class, not an instance; display_name comes from the symbol
            class _Hook(RecordCall):
                display_name = name

            proj.hook_symbol(name, _Hook, replace=True)
            hooked.append(name)
        except Exception:
            continue
    return hooked


def load_manifest(svc: str):
    path = REPORT_DIR / svc / "manifest.tsv"
    with path.open() as f:
        return list(csv.DictReader(f, delimiter="\t"))


def make_project(path: Path, fun: str, proto: str) -> cozy.project.Project:
    proj = cozy.project.Project(str(path), auto_load_libs=False)
    proj.add_prototype(fun, proto)
    return proj


def run_side(path: Path, fun: str, proto: str, callees, args, this_addr, this_sym, extra_stores, loop_bound):
    proj = make_project(path, fun, proto)
    hook_callees(proj, callees)
    sess = proj.session(fun)
    sess.store(this_addr, this_sym)
    for addr, blob in extra_stores:
        sess.store(addr, blob)
    sess.state.globals["call_seq"] = []
    # dword-granularity this-object so Comparison ignores stack/heap layout
    for off in range(0, THIS_SIZE, 4):
        sess.annotate_memory(("this", off), sess.mem[this_addr + off].uint32_t)
    for i, (addr, blob) in enumerate(extra_stores):
        for off in range(0, min(PKT_SIZE, 64), 4):
            sess.annotate_memory(("arg", i, off), sess.mem[addr + off].uint32_t)
    kwargs = {"cache_intermediate_info": False}
    if loop_bound:
        kwargs["loop_bound"] = loop_bound
    result = sess.run(args, **kwargs)
    return sess, result


def analyze_one(
    svc: str,
    name: str,
    timeout_s: int = 40,
    loop_bound: int = 8,
    path_only: bool = False,
):
    global HOOK_RETS
    HOOK_RETS = {}
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

    skip_invoke = path_only or looks_loopy(name)
    if skip_invoke:
        why = "path-only " if path_only else "loopy skip-invoke "
        verdict, detail = compare_call_ret_paths(o_insns, n_insns, why)
        return {
            "svc": svc,
            "name": name,
            "verdict": verdict,
            "detail": detail + " t=%.1fs" % (time.time() - t0),
        }

    n_args = max(infer_n_args(o_insns), infer_n_args(n_insns), 1)
    arg_is_ptr = parse_arg_is_ptr(name, n_args)
    returns = probably_returns(name, o_insns) or probably_returns(name, n_insns)
    proto = c_prototype(n_args, arg_is_ptr, returns)
    o_calls = collect_callees(o_insns)
    n_calls = collect_callees(n_insns)
    callees = o_calls + n_calls

    this_sym = claripy.BVS("this_mem", THIS_SIZE * 8)
    extra_stores = []
    call_args = []

    # We need a session just to malloc; allocate from ORIG session then reuse
    # concrete addresses on both sides so annotated memory lines up.
    scratch = make_project(orig_path, name, proto)
    scratch_sess = scratch.session(name)
    this_addr = scratch_sess.malloc(THIS_SIZE, name="this")
    call_args.append(this_addr)
    for i in range(1, n_args):
        if i < len(arg_is_ptr) and arg_is_ptr[i]:
            blob = claripy.BVS("argbuf_%d" % i, PKT_SIZE * 8)
            addr = scratch_sess.malloc(PKT_SIZE, name="arg%d" % i)
            extra_stores.append((addr, blob))
            call_args.append(addr)
        else:
            call_args.append(claripy.BVS("arg_%d" % i, 32))
    del scratch_sess
    del scratch

    try:
        o_sess, o_res = run_side(
            orig_path, name, proto, callees, call_args, this_addr, this_sym, extra_stores, loop_bound
        )
        if time.time() - t0 > timeout_s:
            verdict, detail = compare_call_ret_paths(
                o_insns, n_insns, "fallback after ORIG %.1fs " % (time.time() - t0)
            )
            return {"svc": svc, "name": name, "verdict": verdict, "detail": detail}
        n_sess, n_res = run_side(
            new_path, name, proto, callees, call_args, this_addr, this_sym, extra_stores, loop_bound
        )
    except Exception as e:
        return {
            "svc": svc,
            "name": name,
            "verdict": "ERROR",
            "detail": "%s: %s" % (type(e).__name__, e),
        }

    def annotate_ret(state, ret_val, typ):
        if ret_val is None:
            return {}
        return {"eax": ret_val}

    if returns:
        try:
            o_res.annotate_return(annotate_ret)
            n_res.annotate_return(annotate_ret)
        except Exception:
            pass

    if len(o_res.deadended) > 16 or len(n_res.deadended) > 16:
        return {
            "svc": svc,
            "name": name,
            "verdict": "INCONCLUSIVE",
            "detail": "path explosion o_dead=%d n_dead=%d t=%.1fs"
            % (len(o_res.deadended), len(n_res.deadended), time.time() - t0),
        }

    opts = (
        ComparisonOptions.COMPARE_ANNOTATED_MEMORY
        | ComparisonOptions.COMPARE_SIDE_EFFECTS
        | ComparisonOptions.COMPARE_ANNOTATED_RETURN
    )
    # skip whole-memory / register dumps: stack slots and eax garbage dominate
    try:
        cmp = Comparison(
            o_res,
            n_res,
            ignore_invalid_stack=True,
            comparisons=opts,
            use_unsat_core=True,
        )
    except Exception as e:
        return {
            "svc": svc,
            "name": name,
            "verdict": "ERROR",
            "detail": "Comparison %s: %s" % (type(e).__name__, e),
        }

    n_pairs = len(cmp.pairs)
    n_eq = sum(1 for p in cmp if p.equal())
    n_diff = n_pairs - n_eq
    n_orph_l = len(cmp.orphans_left)
    n_orph_r = len(cmp.orphans_right)
    extra = " proto=%r o_dead=%d n_dead=%d o_err=%d n_err=%d pairs=%d eq=%d diff=%d orph=%d/%d t=%.1fs" % (
        proto,
        len(o_res.deadended),
        len(n_res.deadended),
        len(o_res.errored),
        len(n_res.errored),
        n_pairs,
        n_eq,
        n_diff,
        n_orph_l,
        n_orph_r,
        time.time() - t0,
    )

    if not o_res.deadended and not n_res.deadended:
        return {"svc": svc, "name": name, "verdict": "INCONCLUSIVE", "detail": "no deadended" + extra}
    if n_pairs == 0:
        return {
            "svc": svc,
            "name": name,
            "verdict": "INCONCLUSIVE",
            "detail": "no compatible pairs" + extra,
        }
    if n_diff == 0 and n_orph_l == 0 and n_orph_r == 0:
        return {"svc": svc, "name": name, "verdict": "SEMANTIC_EQ", "detail": extra.strip()}
    if n_diff > 0:
        why = []
        for p in cmp:
            if p.equal():
                continue
            if p.mem_diff:
                why.append("mem")
            if p.reg_diff:
                why.append("reg")
            if not p.equal_annotations():
                why.append("this")
            if not p.equal_ret_annotations():
                why.append("ret")
            if not p.equal_side_effects():
                why.append("calls")
            break
        return {
            "svc": svc,
            "name": name,
            "verdict": "SEMANTIC_DIFF",
            "detail": ",".join(why) + extra,
        }
    return {
        "svc": svc,
        "name": name,
        "verdict": "INCONCLUSIVE",
        "detail": "orphans without mem/ret/call diffs" + extra,
    }


def main():
    disable_logs()
    # refuse to run under the wrong angr
    if not getattr(angr, "__version__", "").startswith("9.2.130"):
        sys.stderr.write(
            "cozy_compare.py needs angr 9.2.130 from the cozy venv "
            "(got %s). Run source/toolchain/install_cozy.sh\n" % angr.__version__
        )
        sys.exit(2)

    ap = argparse.ArgumentParser()
    ap.add_argument("service", nargs="?", help="statics|guild|monitor|manager|dbmw")
    ap.add_argument("symbol", nargs="?", help="mangled symbol")
    ap.add_argument("--max-size", type=lambda x: int(x, 0), default=0x100)
    ap.add_argument("--limit", type=int, default=10)
    ap.add_argument("--timeout", type=int, default=40)
    ap.add_argument("--loop-bound", type=int, default=0,
                    help="LocalLoopSeer bound; 0 disables (needed for nested constant loops)")
    ap.add_argument(
        "--path-only",
        action="store_true",
        help="skip symbolic execution; compare static call/ret paths only",
    )
    ap.add_argument("--status", default="NEAR,DIFF")
    ap.add_argument("--out", default="")
    args = ap.parse_args()

    jobs = []
    if args.service and args.symbol:
        jobs.append((args.service, args.symbol, "?"))
    elif args.service:
        want = set(args.status.split(","))
        picked = []
        for row in load_manifest(args.service):
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
        jobs = [
            ("monitor", "_ZN10CIPCounter13setMinIPCountEh", "DIFF"),
            ("monitor", "_ZN10CIPCounter11setLoadTermEh", "DIFF"),
            ("guild", "_ZN5CUser19AddGuildMemberPointEj", "DIFF"),
            ("statics", "_ZN25stDisjointAvatarInfoTotal5clearEv", "DIFF"),
        ]

    results = []
    for svc, name, st in jobs:
        print("== %s %s (%s) ==" % (svc, name, st), flush=True)
        r = analyze_one(
            svc,
            name,
            timeout_s=args.timeout,
            loop_bound=args.loop_bound,
            path_only=args.path_only,
        )
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
