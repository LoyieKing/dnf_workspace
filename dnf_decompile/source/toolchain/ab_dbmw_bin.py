#!/usr/bin/env python3
"""整二进制 A/B：对当前 md 清单中的每个函数，用 gen_function_md 的
classify_one 口径比较 ORIG 与候选重建二进制，输出每档编译器下的
IDENTICAL / IDENTICAL_AE / NEAR / DIFF / MISSING 计数。

用法:
  python3 ab_dbmw_bin.py /tmp/ab_dbmw_444/df_dbmw_r [--out /tmp/ab_dbmw_444.tsv]
"""
import argparse
import os
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
from compare_common import load_disasm
from gen_function_md import classify_one
from gen_report_manifest import syms as syms_fn

ROOT = Path('/home/loyieking/dnf_workspace/dnf_decompile')
ORIG = Path('/home/loyieking/dnf_workspace/dnf_installer/build/dnf_data/home/template/neople/dbmw_guild/df_dbmw_r')


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('new_bin')
    ap.add_argument('--out')
    args = ap.parse_args()

    md_dir = ROOT / 'function_reports/dbmw'
    md_syms = sorted(
        f[:-3] for f in os.listdir(md_dir)
        if f.endswith('.md') and f != 'README.md')

    o_loaded = load_disasm(str(ORIG))
    n_loaded = load_disasm(args.new_bin)
    o_map = None
    n_map = None
    from report_resolve import build_addr_map
    o_map = build_addr_map(str(ORIG))
    n_map = build_addr_map(args.new_bin)

    cnt = {'IDENTICAL': 0, 'IDENTICAL_AE': 0, 'NEAR': 0, 'DIFF': 0,
           'MISSING': 0, 'MISSING_ORIG': 0, 'EMPTY': 0}
    rows = []
    for name in md_syms:
        status, oaddr, osize, naddr, nsize = classify_one(
            str(ORIG), args.new_bin, o_loaded, n_loaded, o_map, n_map, name)
        cnt[status] = cnt.get(status, 0) + 1
        rows.append((status, name, oaddr, osize, naddr, nsize))
    print('== {}'.format(args.new_bin))
    print(cnt)
    if args.out:
        with open(args.out, 'w') as f:
            for r in rows:
                f.write('\t'.join(str(x) for x in r) + '\n')
    # 明细：哪些 IDENTICAL 了，哪些还 DIFF
    for status, name, oaddr, osize, naddr, nsize in rows:
        if status in ('IDENTICAL', 'IDENTICAL_AE'):
            print('  {} {}'.format(status, name))


if __name__ == '__main__':
    main()
