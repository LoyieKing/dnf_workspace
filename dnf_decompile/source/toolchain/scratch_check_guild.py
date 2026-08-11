#!/usr/bin/env python3
"""guild scratch 二进制逐函数分类（子 Agent 闭环复检用）。

用法:
  python3 scratch_check_guild.py <scratch-binary> <mangled-name> [name2 ...]
  python3 scratch_check_guild.py <scratch-binary> --file <list.txt>

输出每行: <name> <status>（IDENTICAL/IDENTICAL_AE/NEAR/DIFF/MISSING/EMPTY）
与 function_reports 判定口径一致（compare_common strict + report_resolve AE）。
只读 ORIG 与 scratch 二进制，不写任何报告目录。
"""
import argparse
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))

from gen_function_md import (
    _cached_load_disasm,
    classify_one,
)
from report_resolve import build_addr_map

ORIG = '/home/loyieking/dnf_workspace/dnf_installer/build/dnf_data/home/template/neople/guild/df_guild_r'


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('scratch')
    ap.add_argument('names', nargs='*')
    ap.add_argument('--file', default=None)
    args = ap.parse_args()
    names = list(args.names)
    if args.file:
        for line in Path(args.file).read_text().splitlines():
            line = line.strip()
            if line and not line.startswith('#'):
                names.append(line)
    o_loaded = _cached_load_disasm(ORIG)
    n_loaded = _cached_load_disasm(args.scratch)
    o_map = build_addr_map(ORIG)
    n_map = build_addr_map(args.scratch)
    for name in names:
        status, oaddr, osize, naddr, nsize = classify_one(
            ORIG, args.scratch, o_loaded, n_loaded, o_map, n_map, name)
        print('{}\t{}'.format(name, status), flush=True)


if __name__ == '__main__':
    main()
