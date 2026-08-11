#!/usr/bin/env python3
"""Fast per-function A/B harness for monitor.

Given a function symbol, locate its TU, compile that single TU with the same
flags as build-monitor.sh (c6444r), then compare the function's normalized
disassembly against ORIG at the object level (trailing nops trimmed).

Usage:
  mon_ab.py <symbol> [--full] [--variant c6444r|c6446r|c6|c5r52]
"""
import argparse
import os
import re
import subprocess
import sys
import difflib
from pathlib import Path

ROOT = Path('/home/loyieking/dnf_workspace/dnf_decompile')
TOOL = ROOT / 'source/toolchain'
ORIG = Path('/home/loyieking/dnf_workspace/dnf_installer/build/dnf_data/home/template/neople/monitor/df_monitor_r')
MON = ROOT / 'source/DNFServer/GameServer/Monitor'
COMMON = ROOT / 'source/DNFServer/ServerCommon'
PACKET = ROOT / 'source/shared/packet'
BUILD = ROOT / 'build/monitor'

sys.path.insert(0, str(TOOL))
from compare_common import load_disasm_cached, norm_line

_TARGET_WITH_LABEL = re.compile(r'<T>\s*<[^>]*>')
_BIG_IMM = re.compile(r'\$0x[0-9a-f]{4,8}')
_BIG_MEM = re.compile(r'0x[0-9a-f]{5,8}\(')


def quick_norm(line):
    line = norm_line(line)
    line = _TARGET_WITH_LABEL.sub('<T>', line)
    line = _BIG_IMM.sub('$<A>', line)
    line = _BIG_MEM.sub('0x<A>(', line)
    return line

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

WRAPPERS = {
    'c6444r': (TOOL / 'cmake/dnf_c6444r_gxx.sh', COMMON_FLAGS),
    'c6446r': (TOOL / 'cmake/dnf_c6446r_gxx.sh', COMMON_FLAGS),
    'c6':     (TOOL / 'cmake/dnf_c6_gxx.sh', COMMON_FLAGS),
    'c5r52':  (TOOL / 'cmake/dnf_c5r52_gxx.sh', C5_FLAGS),
}


def run(cmd):
    r = subprocess.run(cmd, shell=True, text=True,
                       stdout=subprocess.PIPE, stderr=subprocess.STDOUT)
    if r.returncode != 0:
        raise RuntimeError(r.stdout[-3000:])
    return r.stdout


def tu_of(symbol):
    for obj in BUILD.glob('*.o'):
        base = obj.name[:-2]
        if base == 'stub_main':
            continue
        out = run("nm '{}'".format(obj))
        for line in out.splitlines():
            p = line.split()
            if len(p) == 3 and p[1] in ('T', 't', 'W', 'w') and p[2] == symbol:
                return base, obj
    return None, None


def src_of(tu):
    for d in (MON, COMMON, PACKET / 'src'):
        p = d / (tu + '.cpp')
        if p.exists():
            return p
    return None


def trim(insns):
    drop = ('nop', 'xchg %ax,%ax', 'lea 0x0(%esi),%esi', 'lea 0x0(%edi),%edi',
            'nopw 0x0(%eax,%eax,1)')
    while insns and (insns[-1] in drop or insns[-1].startswith('lea 0x0(')):
        insns = insns[:-1]
    return insns


def insns_of(bin_path, symbol):
    f = load_disasm_cached(str(bin_path))
    return [t for _, t in f.get(symbol, [])]


def compare(symbol, obj):
    o = trim([quick_norm(x) for x in insns_of(ORIG, symbol)])
    n = trim([quick_norm(x) for x in insns_of(obj, symbol)])
    if not o and not n:
        return 'NO DISASM', None
    if o == n:
        return 'IDENTICAL(o)', None
    om = [x.split()[0] for x in o]
    nm = [x.split()[0] for x in n]
    kind = 'NEAR' if om == nm else 'DIFF'
    lines = []
    sm = difflib.SequenceMatcher(a=o, b=n, autojunk=False)
    for tag, i1, i2, j1, j2 in sm.get_opcodes():
        if tag == 'equal':
            continue
        for k in range(min(i2 - i1, j2 - j1)):
            lines.append('- ' + o[i1 + k])
            lines.append('+ ' + n[j1 + k])
        for k in range(i1 + min(i2 - i1, j2 - j1), i2):
            lines.append('- ' + o[k])
        for k in range(j1 + min(i2 - i1, j2 - j1), j2):
            lines.append('+ ' + n[k])
    return '{} (o={} n={})'.format(kind, len(o), len(n)), lines


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('symbol')
    ap.add_argument('--full', action='store_true', help='also rebuild binary + md check')
    ap.add_argument('--variant', default='c6444r')
    args = ap.parse_args()

    tu, _ = tu_of(args.symbol)
    if not tu:
        print('TU not found for', args.symbol)
        return
    src = src_of(tu)
    if not src:
        print('source not found for TU', tu)
        return
    wrapper, flags = WRAPPERS[args.variant]
    obj = BUILD / (tu + '.o')
    cmd = "'{}' {} -c '{}' -o '{}'".format(wrapper, flags, src, obj)
    print('CC', tu, '(' + args.variant + ')')
    try:
        run(cmd)
    except RuntimeError as e:
        print('COMPILE FAIL:', e)
        return
    status, lines = compare(args.symbol, obj)
    print(status)
    if lines:
        print('\n'.join(lines[:120]))
    if args.full and status.startswith('IDENTICAL'):
        run("bash '{}'".format(TOOL / 'build-monitor.sh'))
        out = run("python3 '{}' --services monitor --function '{}'".format(
            TOOL / 'gen_function_md.py', args.symbol))
        print(out[-500:])


if __name__ == '__main__':
    main()
