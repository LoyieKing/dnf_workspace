#!/usr/bin/env python3
"""relay 子 agent scratch 构建复检助手（round-9 并行集成用）。

用法：
  python3 source/toolchain/relay_scratch_check.py <scratch_bin> <mangled> [--diff]

对 scratch 二进制与 ORIG 的单个函数做与 gen_function_md 完全一致的分类
（strict 口径：IDENTICAL / IDENTICAL_AE / NEAR / DIFF / MISSING），
并可打印归一化后的逐条 diff（--diff），便于子 agent 定位残余差异。
只读：不写 function_reports/、不写 build/<svc>/。
"""
import argparse
import difflib
import re
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
from compare_common import load_disasm, norm_identical  # noqa: E402
from gen_function_md import classify_one  # noqa: E402
from report_resolve import build_addr_map  # noqa: E402

ORIG = Path('/home/loyieking/dnf_workspace/dnf_installer/build/dnf_data/'
            'home/template/neople/relay/df_relay_r')


def norm(line):
    return norm_identical([line])[0]


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('scratch_bin')
    ap.add_argument('function')
    ap.add_argument('--diff', action='store_true')
    args = ap.parse_args()

    scratch = Path(args.scratch_bin)
    o_loaded = load_disasm(str(ORIG))
    n_loaded = load_disasm(str(scratch))
    o_map = build_addr_map(str(ORIG))
    n_map = build_addr_map(str(scratch))
    status, oaddr, osize, naddr, nsize = classify_one(
        str(ORIG), str(scratch), o_loaded, n_loaded, o_map, n_map,
        args.function)
    print('CLASSIFY: {}  ORIG=0x{:x}+0x{:x}  NEW=0x{:x}+0x{:x}'.format(
        status, oaddr, osize, naddr, nsize))
    if status in ('IDENTICAL', 'IDENTICAL_AE'):
        return 0
    if args.diff:
        from report_resolve import pseudo_lines, trim_trailing_nops
        osym = oaddr, oaddr + osize
        nsym = naddr, naddr + nsize
        o_ins = [ins for a, ins in sorted(o_loaded[0].items())
                 if osym[0] <= a < osym[1]]
        n_ins = [ins for a, ins in sorted(n_loaded[0].items())
                 if nsym[0] <= a < nsym[1]]
        o_norm = norm_identical(o_ins)
        n_norm = norm_identical(n_ins)
        o_ps = trim_trailing_nops(pseudo_lines(o_norm, o_map, fn_base=oaddr))
        n_ps = trim_trailing_nops(pseudo_lines(n_norm, n_map, fn_base=naddr))
        for ln in difflib.unified_diff(o_ps, n_ps, 'ORIG', 'SCRATCH', lineterm=''):
            print(ln)
    return 0


if __name__ == '__main__':
    sys.exit(main())
