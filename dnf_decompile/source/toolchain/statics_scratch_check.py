#!/usr/bin/env python3
"""statics scratch 二进制逐函数分类/查看 diff（子 Agent 闭环复检用，2026-08-12）。

用法:
  python3 source/toolchain/statics_scratch_check.py <scratch-binary> <mangled> [mangled ...]
  python3 source/toolchain/statics_scratch_check.py <scratch-binary> --file <list.txt>
  python3 source/toolchain/statics_scratch_check.py <scratch-binary> --diff <mangled>

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
    _cached_syms,
    classify_one,
    norm_identical,
    pseudo_lines,
    slice_by_range,
    trim_trailing_nops,
    unified_full_diff,
)
from report_resolve import build_addr_map

ORIG = '/home/loyieking/dnf_workspace/dnf_installer/build/dnf_data/home/template/neople/statics/df_statics_r'


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('scratch')
    ap.add_argument('names', nargs='*')
    ap.add_argument('--file', default=None)
    ap.add_argument('--diff', default=None,
                    help='打印该 mangled 名称的完整伪代码 diff 后退出')
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

    if args.diff:
        name = args.diff
        osym = _cached_syms(ORIG)
        nsym = _cached_syms(args.scratch)
        oaddr, osize = osym[name]
        naddr, nsize = nsym[name]
        o_norm = norm_identical(slice_by_range(o_loaded, oaddr, oaddr + osize))
        n_norm = norm_identical(slice_by_range(n_loaded, naddr, naddr + nsize))
        o_ps = trim_trailing_nops(pseudo_lines(o_norm, o_map, fn_base=oaddr))
        n_ps = trim_trailing_nops(pseudo_lines(n_norm, n_map, fn_base=naddr))
        print(unified_full_diff(o_ps, n_ps, 'ORIG（伪代码化）', 'OURS（伪代码化）'))
        return

    for name in names:
        status, oaddr, osize, naddr, nsize = classify_one(
            ORIG, args.scratch, o_loaded, n_loaded, o_map, n_map, name)
        print('{}\t{}'.format(name, status), flush=True)


if __name__ == '__main__':
    main()
