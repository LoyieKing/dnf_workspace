#!/usr/bin/env python3
"""Per-TU A/B sweep for monitor: compile each TU with each candidate compiler
and count how many of that TU's currently non-identical functions match ORIG
under strict normalization (and with trailing-nop trimmed AE proxy)."""
import bisect
import json
import os
import re
import subprocess
import sys
from collections import Counter, defaultdict
from pathlib import Path

ROOT = Path('/home/loyieking/dnf_workspace/dnf_decompile')
TOOL = ROOT / 'source/toolchain'
ORIG = Path('/home/loyieking/dnf_workspace/dnf_installer/build/dnf_data/home/template/neople/monitor/df_monitor_r')
MON = ROOT / 'source/DNFServer/GameServer/Monitor'
COMMON = ROOT / 'source/DNFServer/ServerCommon'
PACKET = ROOT / 'source/shared/packet'
OUT = Path('/tmp/mon_tu_sweep2')

sys.path.insert(0, str(TOOL))
from compare_common import load_disasm, norm_identical

_BRANCH_RE = re.compile(r'^(j[a-z]*|callq?|loop[a-z]*)\b')

COMMON_FLAGS = ('-m32 -O0 -std=gnu++0x -fno-enforce-eh-specs -nostdinc '
                '-DTIXML_USE_STL -DBOOST_DISABLE_ASSERTS -DDNF_SVC_MONITOR '
                '-isystem /tmp/c6root/usr/lib/gcc/x86_64-redhat-linux/4.4.7/include '
                '-isystem /tmp/c6root/usr/lib/gcc/x86_64-redhat-linux/4.4.7/include-fixed '
                '-isystem /tmp/lsd44/v4.4.4/usr/include/c++/4.4.4 '
                '-isystem /tmp/lsd44/v4.4.4/usr/include/c++/4.4.4/i686-redhat-linux '
                '-isystem /tmp/lsd44/v4.4.4/usr/include/c++/4.4.4/backward '
                '-isystem /tmp/c6root/usr/include '
                f'-I{COMMON} -I{MON} -I{PACKET}/include '
                f'-I{ROOT}/source/shared -I{ROOT}/source/shared/common/include')

C5_FLAGS = ('-m32 -O0 -fno-enforce-eh-specs -nostdinc '
            '-DTIXML_USE_STL -DBOOST_DISABLE_ASSERTS -DDNF_SVC_MONITOR '
            '-isystem /tmp/c5r52tool/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include '
            '-isystem /tmp/c5r52tool/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include-fixed '
            '-isystem /tmp/c5r52tool/usr/include/c++/4.1.2 '
            '-isystem /tmp/c5r52tool/usr/include/c++/4.1.2/x86_64-redhat-linux '
            '-isystem /tmp/c5r52tool/usr/include/c++/4.1.2/backward '
            '-isystem /tmp/c5r52tool/usr/include '
            f'-I{COMMON} -I{MON} -I{PACKET}/include '
            f'-I{ROOT}/source/shared -I{ROOT}/source/shared/common/include')

VARIANTS = {
    'c6444r': ('dnf_c6444r_gxx.sh', COMMON_FLAGS),
    'c6446r': ('dnf_c6446r_gxx.sh', COMMON_FLAGS),
    'c6':     ('dnf_c6_gxx.sh', COMMON_FLAGS),
    'c5r52':  ('dnf_c5r52_gxx.sh', C5_FLAGS),
}


def run(cmd):
    r = subprocess.run(cmd, shell=True, text=True,
                       stdout=subprocess.PIPE, stderr=subprocess.STDOUT)
    if r.returncode != 0:
        raise RuntimeError(r.stdout[:400])
    return r.stdout


def syms(bin_path):
    out = run("nm -S --defined-only '{}'".format(bin_path))
    rows = {}
    for line in out.splitlines():
        p = line.split(None, 3)
        if len(p) < 4 or p[2] not in ('T', 't', 'W', 'w'):
            continue
        rows[p[3]] = (int(p[0], 16), int(p[1], 16))
    return rows


def trim_nops(insns):
    while insns and insns[-1].strip() in ('nop', 'xchg %ax,%ax', 'lea 0x0(%esi),%esi',
                                           'lea 0x0(%edi),%edi', 'nopw 0x0(%eax,%eax,1)'):
        insns = insns[:-1]
    return insns


_ORIG = None


def orig_insns(name):
    global _ORIG
    if _ORIG is None:
        _ORIG = (load_disasm(str(ORIG)), syms(str(ORIG)))
    loaded, s = _ORIG
    if name not in s:
        return None
    addr, size = s[name]
    insn, addrs = loaded
    lo = bisect.bisect_left(addrs, addr)
    hi = bisect.bisect_left(addrs, addr + size)
    return [insn[addrs[i]] for i in range(lo, hi)]


def obj_insns(obj, name):
    loaded = load_disasm(str(obj))
    s = syms(str(obj))
    if name not in s:
        return None
    addr, size = s[name]
    insn, addrs = loaded
    lo = bisect.bisect_left(addrs, addr)
    hi = bisect.bisect_left(addrs, addr + size)
    return [insn[addrs[i]] for i in range(lo, hi)]


def strict_match(a, b):
    if a is None or b is None:
        return False
    return trim_nops(norm_identical(a)) == trim_nops(norm_identical(b))


def main():
    md_syms = [l.strip() for l in open('/tmp/mon_md_list.txt') if l.strip() != 'README']
    # map symbol -> TU from current build objects
    s2o = {}
    for obj in (ROOT / 'build/monitor').glob('*.o'):
        base = obj.name[:-2]
        if base == 'stub_main':
            continue
        for line in run("nm '{}'".format(obj)).splitlines():
            p = line.split()
            if len(p) == 3 and p[1] in ('T', 't', 'W', 'w'):
                s2o.setdefault(p[2], base)
    md_by_tu = defaultdict(list)
    for s in md_syms:
        md_by_tu[s2o.get(s, '?')].append(s)

    results = {}
    for variant, (wrapper, flags) in VARIANTS.items():
        vdir = OUT / variant
        vdir.mkdir(parents=True, exist_ok=True)
        wrapper_path = TOOL / 'cmake' / wrapper
        match = 0
        per_tu = Counter()
        for tu in sorted(md_by_tu):
            if tu == '?':
                continue
            # locate source file: TU name is basename of cpp
            src = MON / (tu + '.cpp')
            if not src.exists():
                for d in (COMMON, PACKET / 'src'):
                    if (d / (tu + '.cpp')).exists():
                        src = d / (tu + '.cpp')
                        break
            if not src.exists():
                continue
            obj = vdir / (tu + '.o')
            if not obj.exists() or src.stat().st_mtime_ns > obj.stat().st_mtime_ns:
                cmd = f"'{wrapper_path}' {flags} -c '{src}' -o '{obj}'"
                try:
                    run(cmd)
                except RuntimeError as e:
                    print('compile fail', tu, variant, e)
                    continue
            for s in md_by_tu[tu]:
                oi = orig_insns(s)
                ni = obj_insns(obj, s)
                if strict_match(oi, ni):
                    per_tu[tu] += 1
                    match += 1
        results[variant] = {'match': match, 'per_tu': dict(per_tu)}
        print(variant, 'matches', match)
        for tu, c in per_tu.most_common(10):
            print('   ', tu, c)
    with (OUT / 'results.json').open('w') as f:
        json.dump(results, f, indent=1)
    # per-TU best
    print()
    for tu in sorted(md_by_tu):
        row = []
        for v in VARIANTS:
            row.append(results[v]['per_tu'].get(tu, 0))
        if max(row) > 0:
            best = sorted(VARIANTS)[row.index(max(row))]
            print(f'{tu:30s} n={len(md_by_tu[tu]):3d} ' +
                  ' '.join(f'{v}={c}' for v, c in zip(VARIANTS, row)))


if __name__ == '__main__':
    main()
