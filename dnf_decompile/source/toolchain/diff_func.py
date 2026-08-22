#!/usr/bin/env python3
"""diff_func.py <mangled-name> : 逐行对比 ORIG 与 NEW 反汇编。"""
import re, subprocess, sys
from pathlib import Path

_DECOMP = Path('/home/wangyilei/dnf_workspace/dnf_decompile')
ROOT = _DECOMP.parent
GAME_NEW = _DECOMP / 'build/game/df_game_r'
GAME_ORIG = ROOT / 'dnf_installer/build/dnf_data/home/template/init/df_game_r'
sys.path.insert(0, str(_DECOMP / 'source/toolchain'))
from compare_common import load_disasm_cached

def main():
    name = sys.argv[1]
    gd = load_disasm_cached(str(GAME_ORIG)); nd = load_disasm_cached(str(GAME_NEW))
    ol = [t for a, t in gd.get(name, [])]
    nl = [t for a, t in nd.get(name, [])]
    print(f"=== {name}  (orig={len(ol)} ours={len(nl)}) ===")
    for i in range(max(len(ol), len(nl))):
        o = ol[i] if i < len(ol) else ''
        n = nl[i] if i < len(nl) else ''
        mark = '  ' if o == n else '>>'
        print(f"{mark} ORIG: {o}")
        if o != n:
            print(f"     NEW : {n}")
    return 0

if __name__ == '__main__':
    sys.exit(main())
