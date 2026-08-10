#!/usr/bin/env python3
"""单函数快速 diff：dbmw 原版 vs 我们构建（严格口径归一化后逐行 diff）。

用法:
  python3 diffone_dbmw.py QueryConnInfo     # 按符号名子串匹配，逐一打印
  python3 diffone_dbmw.py -x _ZN12CApplication6InitDBEv   # 精确符号名

比全量 compare_dbmw.py 更快：只对匹配到的函数做 objdump 读取（依赖 monitorlib
的整二进制缓存，首次仍快），适合逐函数核验工作流。
"""
import re
import sys
import difflib
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
sys.path.insert(0, '/tmp')
import monitorlib
from compare_common import norm_identical

ROOT = Path('/mnt/d/Docs/my_sources/dnf_workspace')
ORIG = ROOT / 'dnf_installer/build/dnf_data/home/template/neople/dbmw_guild/df_dbmw_r'
NEW = ROOT / 'dnf_decompile/build/dbmw/df_dbmw_r'


def main():
    args = sys.argv[1:]
    exact = False
    if args and args[0] == '-x':
        exact = True
        args = args[1:]
    if not args:
        print(__doc__)
        return 1
    pat = args[0]

    onames = monitorlib.load_symbols(str(ORIG))
    nnames = monitorlib.load_symbols(str(NEW))
    names = sorted(onames)
    if exact:
        names = [n for n in names if n == pat or n.replace('C1Ev', 'C2Ev') == pat]
    else:
        rx = re.compile(pat)
        names = [n for n in names if rx.search(n)]
    if not names:
        print('no symbol matched')
        return 1

    for sym in names:
        nn = sym if sym in nnames else sym.replace('C1Ev', 'C2Ev').replace('D1Ev', 'D2Ev')
        a = monitorlib.disasm(str(ORIG), sym)
        b = monitorlib.disasm(str(NEW), nn)
        if not a or not b:
            print('==== %s  MISSING in new (orig %d insns)' % (sym, len(a)))
            continue
        an = [norm_identical([x])[0] for x in a]
        bn = [norm_identical([x])[0] for x in b]
        cls = 'IDENTICAL' if an == bn else (
            'NEAR' if [x.split()[0] for x in an] == [x.split()[0] for x in bn] else 'DIFF')
        print('==== %s  %s  %d vs %d' % (sym, cls, len(an), len(bn)))
        if cls != 'IDENTICAL':
            for l in difflib.unified_diff(an, bn, lineterm='', n=0):
                print(l)


if __name__ == '__main__':
    main()
