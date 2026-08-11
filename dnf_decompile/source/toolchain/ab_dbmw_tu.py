#!/usr/bin/env python3
"""dbmw 逐 TU 编译器 A/B 实验。

对指定 TU 用不同后端编译器各编译一次，把其中在 function_reports/dbmw 有 md
（即当前非 identical）的函数逐一与 ORIG 二进制对比，输出每个候选编译器的
IDENTICAL / NEAR / DIFF 计数，用于决定该 TU 的逐文件编译器指定。

用法:
  python3 ab_dbmw_tu.py QueryCounter.cpp [--ccs 447,446r,444r]
"""
import argparse
import os
import pickle
import re
import subprocess
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
sys.path.insert(0, '/tmp')
from compare_common import norm_identical
from report_resolve import build_addr_map, pseudo_lines, trim_trailing_nops
import monitorlib

ROOT = Path('/home/loyieking/dnf_workspace/dnf_decompile')
ORIG = Path('/home/loyieking/dnf_workspace/dnf_installer/build/dnf_data/home/template/neople/dbmw_guild/df_dbmw_r')
DBMW = ROOT / 'source/DNFServer/GameServer/DBMW'
COMMON = ROOT / 'source/DNFServer/ServerCommon'
PACKET = ROOT / 'source/shared/packet'
MYSQL = ROOT / 'source/Library3rd/MySQL'
YASSL = MYSQL / 'extlib/yassl'

CXX = {
    '447': '/tmp/c6root/usr/bin/g++',
    '446r': '/tmp/c6-g++-446r',
    '444r': '/tmp/c6-g++-444r',
    '412': '/tmp/c5-g++',
}

BASE_FLAGS = (
    '-m32 -O0 -std=gnu++0x -fno-enforce-eh-specs -nostdinc '
    '-DTIXML_USE_STL -DBOOST_DISABLE_ASSERTS '
    '-isystem /tmp/c6root/usr/lib/gcc/x86_64-redhat-linux/4.4.7/include '
    '-isystem /tmp/c6root/usr/lib/gcc/x86_64-redhat-linux/4.4.7/include-fixed '
    '-isystem /tmp/c6root/usr/include/c++/4.4.7 '
    '-isystem /tmp/c6root/usr/include/c++/4.4.7/x86_64-redhat-linux '
    '-isystem /tmp/c6root/usr/include/c++/4.4.7/backward '
    '-isystem /tmp/c6root/usr/include '
    '-I' + str(COMMON) + ' -I' + str(DBMW) + ' -I' + str(PACKET / 'include')
    + ' -I' + str(ROOT / 'source/shared')
    + ' -I' + str(ROOT / 'source/shared/common/include')
    + ' -I' + str(MYSQL / 'include') + ' -I' + str(MYSQL / 'mysys')
    + ' -I' + str(MYSQL / 'strings')
)


def load_disasm_reloc(path):
    """objdump -dr 解析 .o：把每条指令紧随其后的 R_386_* 重定位注解为符号。"""
    out = subprocess.check_output(
        ['objdump', '-dr', '--no-show-raw-insn', str(path)], text=True)
    lines = out.splitlines()
    funcs = {}
    cur = None
    for ln in lines:
        m = re.match(r'^([0-9a-f]+) <(.*)>:', ln)
        if m:
            name = m.group(2)
            if name.startswith('.L') or '+' in name:
                continue
            cur = name
            funcs[cur] = []
            continue
        m = re.match(r'^\s*([0-9a-f]+):\s+([^\t]+)', ln)
        if cur is not None and m:
            ins = m.group(2).strip()
            funcs[cur].append(ins)
            continue
        # relocation line: "  a: R_386_32  _ZGVZ..."
        rm = re.match(r'^\s+[0-9a-f]+:\s+R_386_\S+\s+(.*)', ln)
        if cur is not None and rm:
            sym = rm.group(1).strip().split()[0]
            if sym.startswith('.L'):
                continue
            # previous instruction's raw displacement -> annotated symbol
            if funcs[cur]:
                prev = funcs[cur][-1]
                mraw = re.search(r'([$-]?0x[0-9a-f]+)$', prev)
                if mraw:
                    funcs[cur][-1] = prev[:mraw.start()] + '<' + sym + '>'
    return funcs


def norm_sym(k):
    return k.replace('C1Ev', 'C2Ev').replace('D1Ev', 'D2Ev')


def mnemonics(l):
    return [x.split()[0] for x in l if x.split()]


def classify(a, b, o_map, n_map, oaddr, naddr):
    an = [norm_identical([x])[0] for x in a]
    bn = [norm_identical([x])[0] for x in b]
    if an == bn:
        return 'IDENTICAL'
    if trim_trailing_nops(pseudo_lines(an, o_map, fn_base=oaddr)) == \
       trim_trailing_nops(pseudo_lines(bn, n_map, fn_base=naddr)):
        return 'IDENTICAL_AE'
    if mnemonics(an) == mnemonics(bn):
        return 'NEAR'
    return 'DIFF'


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('tu')
    ap.add_argument('--ccs', default='447,446r,444r')
    ap.add_argument('--keep', action='store_true')
    args = ap.parse_args()

    src = Path(args.tu)
    if not src.is_absolute():
        cand = DBMW / src
        if cand.exists():
            src = cand
        else:
            cand = COMMON / src
            if cand.exists():
                src = cand
            else:
                cand = PACKET / 'src' / src.name
                src = cand
    assert src.exists(), src

    md = Path('function_reports/dbmw')
    md_syms = set()
    if md.exists():
        for f in os.listdir(md):
            if f.endswith('.md') and f != 'README.md':
                md_syms.add(f[:-3])

    orig_syms = monitorlib.load_symbols(str(ORIG))
    orig_dis = monitorlib.load_disasm(str(ORIG))
    o_map = build_addr_map(str(ORIG))

    # map symbol -> md status first
    env = dict(os.environ)
    env['LD_LIBRARY_PATH'] = '/tmp/c6root/usr/lib64:/tmp/c6root/usr/lib'

    for cc in args.ccs.split(','):
        obj = '/tmp/ab_dbmw_{}_{}.o'.format(src.stem, cc)
        cmd = CXX[cc] + ' ' + BASE_FLAGS + ' -c ' + str(src) + ' -o ' + obj
        print('== CC', cc, src.name)
        r = subprocess.run(cmd, shell=True, env=env, capture_output=True, text=True)
        if r.returncode != 0:
            print(r.stderr[-3000:])
            continue
        obj_syms = monitorlib.load_symbols(obj)
        obj_dis = monitorlib.load_disasm(obj)
        n_map = build_addr_map(obj)
        cnt = {'IDENTICAL': 0, 'NEAR': 0, 'DIFF': 0}
        detail = []
        for sym, (addr, size, typ) in obj_syms.items():
            if sym not in md_syms:
                continue
            oname = sym if sym in orig_syms else norm_sym(sym)
            a = orig_dis.get(oname)
            b = obj_dis.get(sym)
            if not a or not b:
                cnt.setdefault('MISSING_OBJ', 0)
                cnt['MISSING_OBJ'] += 1
                detail.append((sym, 'MISSING_OBJ', len(a or []), len(b or [])))
                continue
            cls = classify(a, b, o_map, n_map, addr, 0)
            cnt[cls] += 1
            detail.append((sym, cls, len(a), len(b)))
        print('   counts:', cnt)
        for sym, cls, la, lb in sorted(detail, key=lambda x: x[1]):
            print('     %-9s %s (%d vs %d)' % (cls, sym, la, lb))
        if not args.keep:
            os.unlink(obj)


if __name__ == '__main__':
    main()
