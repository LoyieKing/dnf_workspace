#!/usr/bin/env python3
"""DWARF multi-binary validation toolkit.

Scopes (only binaries with full DWARF):
  stun, channel, bridge, auction, point

Ignores in-progress no-DWARF work (relay/coserver).

Subcommands:
  topology   - print source-tree dependency topology for parallel work
  compare    - symbol + mnemonic compare (IDENTICAL/NEAR/DIFF/MISSING)
  layout     - DWARF class member names/offsets vs reconstructed headers (text dump)
  neardiff   - dump NEAR/DIFF function details (mnemonics + call targets)
"""
from __future__ import annotations

import argparse
import os
import re
import subprocess
import sys
from collections import defaultdict
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
from compare_common import (
    demangle_batch,
    disasm_slice,
    load_disasm,
    norm_identical,
)

ROOT = Path(__file__).resolve().parents[1]  # source/
REPO = ROOT.parent  # dnf_decompile/
INSTALLER = REPO.parent / "dnf_installer/build/dnf_data/home/template/neople"

SERVICES = {
    "stun": {
        "orig": INSTALLER / "stun/df_stun_r",
        "new": ROOT / "build-stun/df_stun_r",
        "src": ROOT / "DNFServer/StunServer/stun_server",
        "build": ROOT / "toolchain/build-stun.sh",
        "tree": "DNFServer/StunServer (independent, 64-bit)",
        "shares_with": [],
        "filter": "all_text",  # small binary: all text symbols
    },
    "channel": {
        "orig": INSTALLER / "channel/df_channel_r",
        "new": ROOT / "build-channel/df_channel_r",
        "src": ROOT / "ChannelOld/DNFChannelServer",
        "build": ROOT / "toolchain/build-channel.sh",
        "tree": "ChannelOld/DNFChannelServer (independent copy)",
        "shares_with": [],  # NOT shared source with bridge (duplicate tree)
        "filter": "all_text",
        "proj_glob": None,
    },
    "bridge": {
        "orig": INSTALLER / "bridge/df_bridge_r",
        "new": ROOT / "build-bridge/df_bridge_r",
        "src": ROOT / "ChannelOld/DNFChannelBridge",
        "build": ROOT / "toolchain/build-bridge.sh",
        "tree": "ChannelOld/DNFChannelBridge (independent copy)",
        "shares_with": [],
        "filter": "proj_glob",
        "proj_glob": "/tmp/br_*_fns.txt",
    },
    "auction": {
        "orig": INSTALLER / "auction/df_auction_r",
        "new": ROOT / "build-auction/df_auction_r",
        "src": ROOT / "DNFServer/GameServer/ServerLab",
        "build": ROOT / "toolchain/build-auction.sh",
        "tree": "DNFServer/GameServer + ServerCommon + DNFShared (shared with point)",
        "shares_with": ["point"],
        "filter": "proj_glob",
        "proj_glob": "/tmp/auc_*_fns.txt",
    },
    "point": {
        "orig": INSTALLER / "point/df_point_r",
        "new": ROOT / "build-point/df_point_r",
        "src": ROOT / "DNFServer/GameServer/ServerLab",
        "build": ROOT / "toolchain/build-point.sh",
        "tree": "same as auction (-DPOINT_SERVER)",
        "shares_with": ["auction"],
        "filter": "proj_glob",
        "proj_glob": "/tmp/auc_*_fns.txt",  # same symbol set
    },
}

SKIP_NAMES = {
    "_init", "_fini", "_start", "_dl_relocate_static_pie",
    "__libc_csu_init", "__libc_csu_fini", "deregister_tm_clones",
    "register_tm_clones", "__do_global_dtors_aux", "frame_dummy",
    "_Z41__static_initialization_and_destruction_0ii",
}


def run(cmd, **kw):
    return subprocess.check_output(cmd, shell=isinstance(cmd, str), text=True,
                                   stderr=subprocess.DEVNULL, **kw)


def demangle(name: str) -> str:
    try:
        return subprocess.run(
            ["c++filt", "-n"], input=name, text=True,
            capture_output=True, check=True).stdout.strip()
    except Exception:
        return name


_DIS_CACHE: dict = {}


def text_symbols(bin_path: Path):
    out = run(["nm", "-S", "--defined-only", str(bin_path)])
    result = {}
    for line in out.splitlines():
        p = line.split(None, 3)
        if len(p) < 4:
            continue
        addr, size, typ, name = p[0], p[1], p[2], p[3]
        if typ not in {"T", "t", "W", "w"}:
            continue
        if name.startswith(".L"):
            continue
        result[name] = (typ, int(size, 16), int(addr, 16))
    return result


def load_proj(glob_pat: str | None):
    if not glob_pat:
        return None
    from glob import glob
    proj = set()
    for path in glob(glob_pat):
        for line in Path(path).read_text(errors="replace").splitlines():
            m = re.match(
                r"\s*\d+\s+0x[0-9a-f]+\s+line=\s*\d+\s+.*\[(_Z[^]]*|main)\]",
                line)
            if m:
                proj.add(m.group(1))
    return proj


def disasm(bin_path: Path, addr: int, size: int):
    loaded = _DIS_CACHE.get(bin_path)
    if loaded is None:
        loaded = _DIS_CACHE[bin_path] = load_disasm(bin_path)
    return disasm_slice(loaded, addr, addr + size)


def mnemonics(lines):
    return [x.split()[0] for x in lines if x.split()]


def call_targets(lines):
    ts = []
    for x in lines:
        if x.startswith("call"):
            m = re.search(r"<([^>]+)>", x)
            if m:
                ts.append(m.group(1).split("+")[0])
            else:
                ts.append(x)
    return ts


def compare_service(name: str, limit_diff: int = 50):
    cfg = SERVICES[name]
    orig_p, new_p = cfg["orig"], cfg["new"]
    if not orig_p.exists():
        print(f"[{name}] ORIG missing: {orig_p}")
        return None
    if not new_p.exists():
        print(f"[{name}] NEW missing: {new_p}")
        return None

    orig = text_symbols(orig_p)
    new = text_symbols(new_p)
    proj = load_proj(cfg.get("proj_glob")) if cfg["filter"] == "proj_glob" else None

    if proj is not None:
        names = sorted(n for n in proj if n in orig and not n.startswith("_GLOBAL__I_"))
        print(f"[{name}] project symbols (DWARF lists ∩ orig): {len(names)}")
    else:
        names = sorted(
            n for n in orig
            if n not in SKIP_NAMES and not n.startswith("_GLOBAL__I_")
            and not n.startswith("_Z41__static"))
        print(f"[{name}] text symbols checked: {len(names)}")

    dem = demangle_batch(names)
    stats = defaultdict(int)
    rows = []  # (cls, name, demangled, o_sz, n_sz, call_mismatch)
    for n in names:
        if n in SKIP_NAMES:
            continue
        dname = dem.get(n, n)
        if n not in new:
            stats["MISSING"] += 1
            rows.append(("MISSING", n, dname, orig[n][1], 0, True))
            continue
        oa, osz = orig[n][2], orig[n][1]
        na, nsz = new[n][2], new[n][1]
        a = disasm(orig_p, oa, osz)
        b = disasm(new_p, na, nsz)
        if not a or not b:
            stats["EMPTY"] += 1
            rows.append(("EMPTY", n, dname, osz, nsz, True))
            continue
        if norm_identical(a) == norm_identical(b):
            cls = "IDENTICAL"
        elif mnemonics(a) == mnemonics(b):
            cls = "NEAR"
        else:
            cls = "DIFF"
        stats[cls] += 1
        c_mis = call_targets(a) != call_targets(b)
        if cls in ("NEAR", "DIFF", "MISSING", "EMPTY"):
            rows.append((cls, n, dname, osz, nsz, c_mis))

    total = sum(stats[k] for k in ("IDENTICAL", "NEAR", "DIFF", "MISSING", "EMPTY"))
    idn = stats["IDENTICAL"]
    near = stats["NEAR"]
    print(f"[{name}] IDENTICAL={idn} NEAR={near} DIFF={stats['DIFF']} "
          f"MISSING={stats['MISSING']} EMPTY={stats.get('EMPTY',0)} "
          f"checked={total}")
    if total:
        print(f"[{name}] exact+near rate: {(idn+near)/total*100:.1f}%  "
              f"identical: {idn/total*100:.1f}%")
    # call-set mismatches among DIFF (semantic risk flag)
    risk = [r for r in rows if r[0] == "DIFF" and r[5]]
    print(f"[{name}] DIFF with call-target set mismatch (semantic risk): {len(risk)}")
    out_dir = Path("/tmp/dwarf_validate")
    out_dir.mkdir(exist_ok=True)
    out_path = out_dir / f"{name}_neardiff.tsv"
    with out_path.open("w") as f:
        f.write("cls\tsize_o\tsize_n\tcall_mis\tmangled\tdemangled\n")
        for cls, n, d, osz, nsz, c_mis in rows:
            f.write(f"{cls}\t{osz}\t{nsz}\t{int(c_mis)}\t{n}\t{d}\n")
    print(f"[{name}] wrote {out_path} ({len(rows)} non-identical rows)")
    # print sample
    shown = 0
    for cls, n, d, osz, nsz, c_mis in rows:
        if cls not in ("DIFF", "NEAR", "MISSING"):
            continue
        if shown >= limit_diff:
            break
        flag = " CALLSET!" if c_mis and cls == "DIFF" else ""
        print(f"  {cls:8} o={osz:5} n={nsz:5}{flag}  {d[:100]}")
        shown += 1
    return dict(stats), rows


def cmd_topology(_args):
    print("=" * 72)
    print("DWARF binary source topology (for parallel validation)")
    print("=" * 72)
    print("""
Parallel safety rules
---------------------
1. stun / channel / bridge / auction  → four fully independent source trees.
   Safe to rebuild, edit, and compare in parallel.
2. point shares auction's source tree (macro -DPOINT_SERVER only).
   → After any auction source fix, rebuild BOTH auction and point.
   → Do not edit auction headers while a point rebuild is mid-flight
     without a barrier.
3. channel and bridge look similar (Socket/Thread/Service...) but live in
   SEPARATE directories:
     ChannelOld/DNFChannelServer  vs  ChannelOld/DNFChannelBridge
   Content may intentionally differ (DWARF layouts diverge). Never copy
   one tree over the other without per-member DWARF check.
4. ServerCommon (DNFServer/ServerCommon) is linked by auction/point AND
   also compiled by in-progress coserver. Coserver work must not mutate
   ServerCommon without re-validating auction/point.
5. IGNORE in-progress trees: source/relay/, source/coserver/, Community/
   (no-DWARF path). Do not 'fix' their dirty files into this audit.

Suggested parallel waves
------------------------
Wave A (leaf / independent, max parallelism):
  - stun:  global_func, udp, stun, server
  - channel leaf TUs: Exception, System, ThreadLock, Token, SocketSystem,
    Method, SHA, Rijndael, stdafx
  - bridge leaf TUs: same basenames under DNFChannelBridge + DNFFunctionLib
  - auction leaf TUs: ThreadLock, Token, System, SocketSystem, Exception,
    Method, SHA, TEA, SecureStdio, Strings, StackBuffer, StringFormat

Wave B (mid framework, still per-tree parallel):
  - channel/bridge: Thread, Socket, Globals, Script*, Service/LinuxService
  - auction: Socket, RecvBuffer, TCPUser, Thread, TraceLog, WorkThread

Wave C (app layer, still per-tree parallel):
  - channel: TCP*/UDP*/CheckThread/ChannelService/DNFChannelServer
  - bridge: TCP*/UDP*/DBMgr/MysqlClient/ChannelService/DNFChannelBridge
  - auction: Auction*, Search, Handlers, ServiceFactory, ServerLibrary2.0

Wave D (barrier then point):
  - rebuild point from same sources with -DPOINT_SERVER
  - re-compare point; only 3 intentional constant diffs vs auction

Shared-class conflict checklist
-------------------------------
| Area              | Owners              | Action if conflict              |
|-------------------|---------------------|---------------------------------|
| ServerCommon/*    | auction, point,     | Prefer semantic align; if two   |
|                   | (coserver ignore)   | binaries need different bodies, |
|                   |                     | guard with macros               |
| ChannelOld trees  | channel XOR bridge  | Separate files; rename by DWARF |
| Auction tree      | auction + point     | POINT_SERVER macro (already)    |
| StunServer        | stun only           | free                            |
""")
    for name, cfg in SERVICES.items():
        print(f"- {name}: {cfg['tree']}")
        print(f"    src={cfg['src']}")
        print(f"    build={cfg['build']}")
        print(f"    shares_with={cfg['shares_with']}")


def cmd_compare(args):
    services = args.services or list(SERVICES.keys())
    for s in services:
        if s not in SERVICES:
            print(f"unknown service {s}", file=sys.stderr)
            continue
        print("\n" + "=" * 72)
        compare_service(s, limit_diff=args.limit)


def cmd_neardiff(args):
    """Deeper dump of one NEAR/DIFF symbol."""
    name = args.service
    sym = args.symbol
    cfg = SERVICES[name]
    orig = text_symbols(cfg["orig"])
    new = text_symbols(cfg["new"])
    if sym not in orig:
        # try demangled match
        hits = [n for n in orig if sym in n or sym in demangle(n)]
        if not hits:
            print("symbol not in orig")
            return
        print("candidates:", *hits[:10], sep="\n  ")
        sym = hits[0]
    if sym not in new:
        print("MISSING in new:", demangle(sym))
        return
    a = disasm(cfg["orig"], orig[sym][2], orig[sym][1])
    b = disasm(cfg["new"], new[sym][2], new[sym][1])
    print("=== ORIG", demangle(sym), f"({len(a)} insn)")
    for i, x in enumerate(a):
        print(f"  {i:4d} {x}")
    print("=== NEW", f"({len(b)} insn)")
    for i, x in enumerate(b):
        print(f"  {i:4d} {x}")
    print("=== calls orig:", call_targets(a))
    print("=== calls new :", call_targets(b))
    ma, mb = mnemonics(a), mnemonics(b)
    if ma != mb:
        # first mismatch
        for i, (x, y) in enumerate(zip(ma, mb)):
            if x != y:
                print(f"first mnemonic mismatch @ {i}: {x} vs {y}")
                break
        if len(ma) != len(mb):
            print(f"len mismatch {len(ma)} vs {len(mb)}")


def extract_dwarf_classes(elf: Path, want_names: set[str] | None = None, max_types: int = 2000):
    """Use pyelftools to extract class/struct member (offset, name)."""
    from elftools.elf.elffile import ELFFile

    results = defaultdict(list)  # name -> [(offset, member_name)]
    with open(elf, "rb") as f:
        elffile = ELFFile(f)
        if not elffile.has_dwarf_info():
            return results
        dwarf = elffile.get_dwarf_info()
        count = 0
        for cu in dwarf.iter_CUs():
            for die in cu.iter_DIEs():
                if die.tag not in ("DW_TAG_class_type", "DW_TAG_structure_type"):
                    continue
                name_attr = die.attributes.get("DW_AT_name")
                if not name_attr:
                    continue
                name = name_attr.value
                if isinstance(name, bytes):
                    name = name.decode("utf-8", "replace")
                if want_names is not None and name not in want_names:
                    continue
                members = []
                for child in die.iter_children():
                    if child.tag != "DW_TAG_member":
                        continue
                    mn = child.attributes.get("DW_AT_name")
                    if not mn:
                        continue
                    mname = mn.value
                    if isinstance(mname, bytes):
                        mname = mname.decode("utf-8", "replace")
                    if mname.startswith("_vptr"):
                        continue
                    off = None
                    loc = child.attributes.get("DW_AT_data_member_location")
                    if loc is not None:
                        v = loc.value
                        if isinstance(v, int):
                            off = v
                        elif isinstance(v, list):
                            # location expression
                            for op in v:
                                if hasattr(op, "args") and op.args:
                                    off = op.args[0]
                    members.append((off, mname))
                if members:
                    results[name] = members
                    count += 1
                    if count >= max_types:
                        return results
    return results


def cmd_layout(args):
    name = args.service
    cfg = SERVICES[name]
    want = set(args.types.split(",")) if args.types else None
    print(f"[{name}] extracting DWARF class members from {cfg['orig']} ...")
    classes = extract_dwarf_classes(cfg["orig"], want_names=want, max_types=args.max_types)
    out = Path("/tmp/dwarf_validate") / f"{name}_layout.txt"
    out.parent.mkdir(exist_ok=True)
    with out.open("w") as f:
        for cname in sorted(classes):
            f.write(f"CLASS {cname}\n")
            for off, mname in sorted(classes[cname], key=lambda x: (x[0] is None, x[0] or 0, x[1])):
                f.write(f"  +{off}: {mname}\n")
            f.write("\n")
    print(f"[{name}] {len(classes)} types -> {out}")
    # if types specified, also grep headers for member names
    if want and cfg["src"].exists():
        for t in sorted(want):
            mems = [m for _, m in classes.get(t, [])]
            print(f"\n## {t} DWARF members ({len(mems)}): {', '.join(mems[:40])}")
            # search headers
            hits = []
            for p in cfg["src"].rglob("*.h"):
                text = p.read_text(errors="replace")
                if re.search(rf"\b(class|struct)\s+{re.escape(t)}\b", text):
                    hits.append(p)
            for p in hits[:5]:
                print(f"  header: {p.relative_to(ROOT)}")
                for m in mems:
                    if m not in p.read_text(errors="replace"):
                        # also check cpp
                        print(f"    MISSING member name in header: {m}")


def main():
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    sp = ap.add_subparsers(dest="cmd", required=True)

    p = sp.add_parser("topology", help="print parallel work topology")
    p.set_defaults(func=cmd_topology)

    p = sp.add_parser("compare", help="run IDENTICAL/NEAR/DIFF compare")
    p.add_argument("services", nargs="*", help="subset of stun channel bridge auction point")
    p.add_argument("--limit", type=int, default=40)
    p.set_defaults(func=cmd_compare)

    p = sp.add_parser("neardiff", help="dump one symbol disasm O vs N")
    p.add_argument("service")
    p.add_argument("symbol")
    p.set_defaults(func=cmd_neardiff)

    p = sp.add_parser("layout", help="extract DWARF class layouts")
    p.add_argument("service")
    p.add_argument("--types", default="", help="comma-separated type names")
    p.add_argument("--max-types", type=int, default=500)
    p.set_defaults(func=cmd_layout)

    args = ap.parse_args()
    args.func(args)


if __name__ == "__main__":
    main()
