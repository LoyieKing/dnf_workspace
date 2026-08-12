#!/usr/bin/env python3
"""monitor 子 agent scratch 二进制逐函数分类（闭环复检用）。

用法:
  python3 source/toolchain/monitor_scratch_check.py <scratch-binary> <mangled> [--diff]
  python3 source/toolchain/monitor_scratch_check.py <scratch-binary> --file <list.txt> [--diff]

输出: <name>\t<status>（IDENTICAL / IDENTICAL_AE / NEAR / DIFF / MISSING），
与 gen_function_md 判定口径一致。--diff 打印 ORIG vs SCRATCH 归一化逐条 diff。
只读 ORIG 与 scratch 二进制，不写任何报告目录。
"""
import argparse
import difflib
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
from compare_common import load_disasm, norm_identical  # noqa: E402
from gen_function_md import classify_one  # noqa: E402
from report_resolve import build_addr_map  # noqa: E402

ORIG = ('/home/loyieking/dnf_workspace/dnf_installer/build/dnf_data/'
        'home/template/neople/monitor/df_monitor_r')


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('scratch')
    ap.add_argument('names', nargs='*')
    ap.add_argument('--file', default=None)
    ap.add_argument('--diff', action='store_true')
    args = ap.parse_args()
    names = list(args.names)
    if args.file:
        for line in Path(args.file).read_text().splitlines():
            line = line.strip()
            if line and not line.startswith('#'):
                names.append(line)
    o_loaded = load_disasm(ORIG)
    n_loaded = load_disasm(args.scratch)
    o_map = build_addr_map(ORIG)
    n_map = build_addr_map(args.scratch)
    for name in names:
        status, oaddr, osize, naddr, nsize = classify_one(
            ORIG, args.scratch, o_loaded, n_loaded, o_map, n_map, name)
        print('{}\t{}'.format(name, status), flush=True)
        if status in ('IDENTICAL', 'IDENTICAL_AE'):
            continue
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
