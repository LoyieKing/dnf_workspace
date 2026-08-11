#!/usr/bin/env python3
"""dbmw 子代理单函数/整组复检：ORIG vs 任意候选二进制（scratch 产物）。

用法:
  python3 source/toolchain/sub_dbmw_check.py <bin> <mangled>      # 单函数
  python3 source/toolchain/sub_dbmw_check.py <bin> --list <file>  # 文件内每行一个符号
  python3 source/toolchain/sub_dbmw_check.py <bin> --list <file> --diff <mangled>

分类口径与 gen_function_md.classify_one 一致（strict + IDENTICAL_AE）。
"""
import argparse
import difflib
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
sys.path.insert(0, '/tmp')
from compare_common import norm_identical
from gen_function_md import _cached_load_disasm, _cached_syms, classify_one, slice_by_range
from report_resolve import build_addr_map, pseudo_lines, trim_trailing_nops

ROOT = Path('/home/loyieking/dnf_workspace/dnf_decompile')
ORIG = Path('/home/loyieking/dnf_workspace/dnf_installer/build/dnf_data/home/template/neople/dbmw_guild/df_dbmw_r')


def _norm_sym(k):
    return k.replace('C1Ev', 'C2Ev').replace('D1Ev', 'D2Ev')


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('bin')
    ap.add_argument('--list')
    ap.add_argument('--diff', help='打印该符号的逐行 diff')
    args = ap.parse_args()

    o_loaded = _cached_load_disasm(str(ORIG))
    n_loaded = _cached_load_disasm(args.bin)
    o_map = build_addr_map(str(ORIG))
    n_map = build_addr_map(args.bin)

    if args.list:
        syms = [l.strip() for l in open(args.list) if l.strip()]
    elif args.diff:
        syms = [args.diff]
    else:
        ap.error('need --list <file> or --diff <mangled>')

    cnt = {}
    for name in syms:
        status, oaddr, osize, naddr, nsize = classify_one(
            str(ORIG), args.bin, o_loaded, n_loaded, o_map, n_map, name)
        cnt[status] = cnt.get(status, 0) + 1
        print('%-14s %s (%d vs %d)' % (status, name, osize, nsize))
    print('== summary:', cnt)

    if args.diff:
        name = args.diff
        osym = _cached_syms(str(ORIG))
        nsym = _cached_syms(args.bin)
        if name not in osym or name not in nsym:
            print('(cannot diff: missing side)')
            return
        oaddr, osize = osym[name]
        naddr, nsize = nsym[name]
        a = slice_by_range(o_loaded, oaddr, oaddr + osize)
        b = slice_by_range(n_loaded, naddr, naddr + nsize)
        if not a or not b:
            print('(empty side)')
            return
        an = [norm_identical([x])[0] for x in a]
        bn = [norm_identical([x])[0] for x in b]
        pa = trim_trailing_nops(pseudo_lines(an, o_map, fn_base=oaddr))
        pb = trim_trailing_nops(pseudo_lines(bn, n_map, fn_base=naddr))
        for l in difflib.unified_diff(pa, pb, 'ORIG', 'OURS', n=2):
            print(l)


if __name__ == '__main__':
    main()
