#!/usr/bin/env python3
"""临时：单 TU .o 与 df_game_r ORIG 同名符号逐指令差异（AE 口径归一化）。"""
import re, subprocess, sys, difflib
sys.path.insert(0, '/home/loyieking/dnf_workspace/dnf_decompile/source/toolchain')
from compare_common import load_disasm_cached, norm_line
import importlib.util
spec = importlib.util.spec_from_file_location(
    'ctu', '/home/loyieking/dnf_workspace/dnf_decompile/source/toolchain/compare_tu_game_orig.py')
ctu = importlib.util.module_from_spec(spec); spec.loader.exec_module(ctu)

obj = sys.argv[1]
name = sys.argv[2]
gd = load_disasm_cached(ctu.GAME_ORIG)
gl = [t for a, t in gd.get(name, [])]
od = ctu.disasm_obj(obj)
ol_raw = od.get(name, [])
ol = [t for a, t, _ in ol_raw]
rel = [bool(rr) for a, t, rr in ol_raw]
pe = ctu.clean(gl)
ge = ctu.clean(ol, reloc_flags=rel)
print(f"orig={len(pe)} insns, ours={len(ge)} insns")
sm = difflib.SequenceMatcher(a=pe, b=ge, autojunk=False)
for tag, i1, i2, j1, j2 in sm.get_opcodes():
    if tag == 'equal':
        for k in range(i1, i2):
            print(f"  same  | {pe[k]}")
        continue
    o = pe[i1:i2]; n = ge[j1:j2]
    oi = ni = 0
    while oi < len(o) or ni < len(n):
        if oi < len(o) and ni < len(n) and o[oi].split()[0] == n[ni].split()[0]:
            print(f"! opnd  | orig: {o[oi]}")
            print(f"!       | new : {n[ni]}")
            oi += 1; ni += 1
        elif oi < len(o) and (ni >= len(n) or o[oi].split()[0] != n[ni].split()[0]):
            print(f"! only  | orig: {o[oi]}")
            oi += 1
        else:
            print(f"! only  | new : {n[ni]}")
            ni += 1
