#!/usr/bin/env python3
"""dbmw 单函数 diff 查看器（round 12 调试用，不写 md）。

用法：
  python3 source/toolchain/dbmw_show_diff.py <mangled> [new_bin]
new_bin 缺省为 build/dbmw/df_dbmw_r；scratch 验证时传
/tmp/sub_dbmw_<group>/df_dbmw_r。
"""
import difflib
import sys
from pathlib import Path

ROOT = Path('/home/loyieking/dnf_workspace/dnf_decompile')
sys.path.insert(0, str(ROOT / 'source' / 'toolchain'))
from compare_common import load_disasm, norm_identical
from report_resolve import build_addr_map, pseudo_lines, trim_trailing_nops

INSTALLER = Path('/home/loyieking/dnf_workspace/dnf_installer/build/dnf_data/home/template/neople')
ORIG = INSTALLER / 'dbmw_guild/df_dbmw_r'


def main():
    name = sys.argv[1]
    new_bin = Path(sys.argv[2]) if len(sys.argv) > 2 else ROOT / 'build/dbmw/df_dbmw_r'
    from gen_report_manifest import syms as _syms
    from gen_function_md import slice_by_range
    osym = _syms(str(ORIG))
    nsym = _syms(str(new_bin))
    if name not in osym:
        print('MISSING_ORIG'); return
    oaddr, osize = osym[name]
    if name not in nsym:
        print('MISSING_NEW'); return
    naddr, nsize = nsym[name]
    o_loaded = load_disasm(str(ORIG))
    n_loaded = load_disasm(str(new_bin))
    o_map = build_addr_map(str(ORIG))
    n_map = build_addr_map(str(new_bin))
    a = slice_by_range(o_loaded, oaddr, oaddr + osize)
    b = slice_by_range(n_loaded, naddr, naddr + nsize)
    o_norm = norm_identical(a)
    n_norm = norm_identical(b)
    if o_norm == n_norm:
        print('IDENTICAL'); return
    o_p = trim_trailing_nops(pseudo_lines(o_norm, o_map, fn_base=oaddr))
    n_p = trim_trailing_nops(pseudo_lines(n_norm, n_map, fn_base=naddr))
    if o_p == n_p:
        print('IDENTICAL_AE'); return
    from gen_report_manifest import mnemonic
    if mnemonic(a) == mnemonic(b):
        print('NEAR')
    else:
        print('DIFF')
    print()
    diff = difflib.unified_diff(o_p, n_p, fromfile='ORIG', tofile='OURS',
                                lineterm='', n=3)
    sys.stdout.write('\n'.join(diff))
    print()


if __name__ == '__main__':
    main()
