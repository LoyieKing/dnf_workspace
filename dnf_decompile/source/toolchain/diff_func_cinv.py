#!/usr/bin/env python3
"""CInventory 辅助：打印某函数 OUR .o 与 ORIG 的逐行 diff（AE 归一后）。"""
import re, subprocess, sys
from pathlib import Path
sys.path.insert(0, str(Path(__file__).resolve().parent))
from compare_common import load_disasm_cached, norm_line
from compare_tu_game_orig import clean, disasm_obj, obj_syms

_DECOMP = Path(__file__).resolve().parent.parent.parent            # .../dnf_decompile
ROOT = _DECOMP.parent                                              # 工作区根：<workspace>/
GAME_ORIG = str(ROOT / 'dnf_installer/build/dnf_data/home/template/init/df_game_r')

def main():
    obj = sys.argv[1]
    name = sys.argv[2]
    gd = load_disasm_cached(GAME_ORIG)
    od = disasm_obj(obj)
    gl = [t for a, t in gd.get(name, [])]
    ol_raw = od.get(name, [])
    ol = [t for a, t, _ in ol_raw]
    rel_flags = [bool(rr) for a, t, rr in ol_raw]
    pe = clean(gl)
    ge = clean(ol, reloc_flags=rel_flags)
    print(f"== {name}  ORIG len={len(pe)} OURS len={len(ge)}")
    n = max(len(pe), len(ge))
    for i in range(n):
        a = pe[i] if i < len(pe) else '<MISSING>'
        b = ge[i] if i < len(ge) else '<MISSING>'
        mark = ' ' if a == b else '!'
        print(f"{mark} O {a}")
        if a != b:
            print(f"  ! G {b}")

if __name__ == '__main__':
    main()
