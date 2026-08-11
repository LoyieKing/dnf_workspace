#!/usr/bin/env python3
"""relay 逐 TU A/B 试编译：同一 TU 分别用 C5(4.1.2-52) 与 C6(4.4.6-3) 编译，
按符号与 ORIG 逐条比对（strict 口径），输出每个函数两侧匹配的行数差。

用法:
  python3 source/toolchain/relay_ab_tu.py [--tu Helper Service ...] [--all]
"""
import argparse
import bisect
import difflib
import os
import re
import subprocess
import sys
from pathlib import Path

ROOT = Path('/home/loyieking/dnf_workspace/dnf_decompile')
RELAY = ROOT / 'source/DNFServer/GameServer/Relay'
ORIG = Path('/home/loyieking/dnf_workspace/dnf_installer/build/dnf_data/home/template/neople/relay/df_relay_r')
OUT = Path('/tmp/relay_ab_tu')

sys.path.insert(0, str(ROOT / 'source/toolchain'))
from compare_common import load_disasm, disasm_slice, norm_identical


def mnemonic(insns):
    out = []
    for x in insns:
        x = re.sub(r'\s+.*$', '', x.strip())
        out.append(x)
    return out


def obj_norm(insns):
    """对象文件（未链接）归一化：分支/调用行中任意位宽数字目标 -> <T>。"""
    out = []
    for x in insns:
        if re.match(r'^(j[a-z]*|callq?|loop[a-z]*)\b', x):
            x = re.sub(r'\b[0-9a-f]{1,16}(\s*<[^>]*>)?', '<T>', x)
        out.append(x)
    return out


C5_CXX = '/tmp/c5r52tool/usr/bin/g++'
C5_FLAGS = [
    '-m32', '-O0', '-D_GNU_SOURCE', '-fno-enforce-eh-specs',
    '-fno-builtin-memset', '-fno-builtin-strlen', '-fno-builtin-strcmp', '-nostdinc',
    '-isystem', '/tmp/c5r52tool/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include',
    '-isystem', '/tmp/c5r52tool/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include-fixed',
    '-isystem', '/tmp/c5r52tool/usr/include/c++/4.1.2',
    '-isystem', '/tmp/c5r52tool/usr/include/c++/4.1.2/x86_64-redhat-linux',
    '-isystem', '/tmp/c5r52tool/usr/include/c++/4.1.2/backward',
    '-isystem', '/tmp/c5r52tool/usr/include',
    '-I', str(RELAY),
]
C6_FLAGS = [
    '-m32', '-O0', '-fno-enforce-eh-specs', '-nostdinc',
    '-isystem/tmp/c6root/usr/lib/gcc/x86_64-redhat-linux/4.4.7/include',
    '-isystem/tmp/c6root/usr/lib/gcc/x86_64-redhat-linux/4.4.7/include-fixed',
    '-isystem/tmp/lsd44/v4.4.6/usr/include/c++/4.4.6',
    '-isystem/tmp/lsd44/v4.4.6/usr/include/c++/4.4.6/x86_64-redhat-linux',
    '-isystem/tmp/lsd44/v4.4.6/usr/include/c++/4.4.6/backward',
    '-isystem/tmp/c6root/usr/include',
    '-isystem/tmp/c5root/usr/include/c++/4.1.2',
    '-isystem/tmp/c5root/usr/include/c++/4.1.2/x86_64-redhat-linux',
    '-isystem/tmp/c5root/usr/include/c++/4.1.2/backward',
    '-isystem/tmp/c5root/usr/include',
    '-isystem', str(ROOT / 'source/cmake/relay'),
    '-m32', '-I', str(RELAY),
    '-B', '/tmp/cc1plus446bin/',
    '-std=gnu++0x', '-DRELAY_USERPOOL_C6',
]


def compile_tu(tu, tag):
    OUT.mkdir(parents=True, exist_ok=True)
    obj = OUT / '{}_{}.o'.format(tu, tag)
    if tu == 'Helper':
        src = RELAY / 'Helper.cpp'
    else:
        src = RELAY / '{}.cpp'.format(tu)
    if tag == 'c5':
        cmd = [C5_CXX] + C5_FLAGS
    else:
        cmd = ['env', 'LD_LIBRARY_PATH=/tmp/c6root/usr/lib64:/tmp/c6root/usr/lib',
               '/tmp/c6root/usr/bin/g++'] + C6_FLAGS
    r = subprocess.run(cmd + ['-c', str(src), '-o', str(obj)],
                       capture_output=True, text=True)
    if r.returncode != 0:
        print('COMPILE FAIL {} {}: {}'.format(tu, tag, r.stderr[-2000:]))
        return None
    return obj


def sym_map(obj):
    out = subprocess.check_output(['nm', '--defined-only', '-S', str(obj)], text=True)
    m = {}
    for line in out.splitlines():
        p = line.split(None, 4)
        if len(p) >= 4 and p[2] in 'TtWw':
            addr = int(p[0], 16)
            try:
                size = int(p[1], 16)
            except ValueError:
                size = 0
            m[p[3]] = (addr, size)
        elif len(p) >= 3 and p[1] in 'TtWw':
            m[p[2]] = (int(p[0], 16), 0)
    return m


def compare(orig_loaded, o_syms, cand_loaded, c_syms, name, osize, csize):
    oaddr, _ = o_syms[name]
    caddr, _ = c_syms[name]
    oins = disasm_slice(orig_loaded, oaddr, oaddr + osize)
    on = obj_norm(oins)
    cins = disasm_slice(cand_loaded, caddr, caddr + csize)
    cn = obj_norm(cins)
    if on == cn:
        return 'IDENTICAL', len(on), len(cn)
    if mnemonic(on) == mnemonic(cn):
        return 'NEAR', len(on), len(cn)
    return 'DIFF', len(on), len(cn)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--tu', nargs='*', default=['Helper', 'Service', 'LinuxService', 'PIDHelper', 'SignalHandler'])
    args = ap.parse_args()
    orig_loaded = load_disasm(str(ORIG))
    orig_syms = sym_map(ORIG)
    o_all = set(orig_syms)
    for tu in args.tu:
        o5 = compile_tu(tu, 'c5')
        o6 = compile_tu(tu, 'c6')
        if o5 is None or o6 is None:
            continue
        sm5 = sym_map(o5)
        sm6 = sym_map(o6)
        l5 = load_disasm(str(o5))
        l6 = load_disasm(str(o6))
        names = sorted(set(sm5) | set(sm6))
        print('==== TU {} ({} syms) ===='.format(tu, len(names)))
        for n in names:
            if n not in o_all:
                continue
            oa = orig_syms[n]
            osize = oa[1]
            row = {}
            for tag, sm, ld in (('c5', sm5, l5), ('c6', sm6, l6)):
                if n in sm:
                    csize = sm[n][1]
                    cls, ol, cl = compare(orig_loaded, orig_syms, ld, sm, n, osize, csize)
                    row[tag] = (cls, ol, cl)
                else:
                    row[tag] = ('ABSENT', 0, 0)
            c5 = row['c5'][0]
            c6 = row['c6'][0]
            rank = {'IDENTICAL': 3, 'NEAR': 2, 'DIFF': 1, 'ABSENT': 0}
            if rank[c6] > rank[c5]:
                verdict = 'C6-BETTER'
            elif rank[c5] > rank[c6]:
                verdict = 'C5-BETTER'
            else:
                verdict = 'TIE'
            print('{:<10} {:>3}B {:<48} c5:{:<10} c6:{}'.format(
                verdict, osize, n, row['c5'][0], row['c6'][0]))


if __name__ == '__main__':
    main()
