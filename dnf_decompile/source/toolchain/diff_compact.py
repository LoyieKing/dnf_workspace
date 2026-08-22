#!/usr/bin/env python3
"""diff_compact.py <name>... : 只打印 ORIG/NEW 不一致的反汇编行（紧凑）。"""
import re, sys
from pathlib import Path
_DECOMP = Path('/home/wangyilei/dnf_workspace/dnf_decompile')
ROOT = _DECOMP.parent
GAME_NEW = _DECOMP / 'build/game/df_game_r'
GAME_ORIG = ROOT / 'dnf_installer/build/dnf_data/home/template/init/df_game_r'
sys.path.insert(0, str(_DECOMP / 'source/toolchain'))
from compare_common import load_disasm_cached

def main():
    gd = load_disasm_cached(str(GAME_ORIG)); nd = load_disasm_cached(str(GAME_NEW))
    for name in sys.argv[1:]:
        ol = [t for a, t in gd.get(name, [])]
        nl = [t for a, t in nd.get(name, [])]
        print(f"##### {name}  (orig={len(ol)} ours={len(nl)})")
        for i in range(max(len(ol), len(nl))):
            o = ol[i] if i < len(ol) else '<none>'
            n = nl[i] if i < len(nl) else '<none>'
            if o != n:
                print(f"  O: {o}")
                print(f"  N: {n}")
    return 0

if __name__ == '__main__':
    sys.exit(main())
