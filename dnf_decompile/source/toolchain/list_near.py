#!/usr/bin/env python3
"""列出 near/diff 函数，便于挑选可修复目标。用法：list_near.py [prefix_filter]"""
import re, subprocess, sys
from pathlib import Path

_DECOMP = Path('/home/wangyilei/dnf_workspace/dnf_decompile')
ROOT = _DECOMP.parent
GAME_NEW = _DECOMP / 'build/game/df_game_r'
GAME_ORIG = ROOT / 'dnf_installer/build/dnf_data/home/template/init/df_game_r'
sys.path.insert(0, str(_DECOMP / 'source/toolchain'))
from compare_common import load_disasm_cached, norm_line, norm_identical_ext

PLT_RE = re.compile(r'@plt')

def text_syms(binp):
    out = subprocess.check_output(f"nm -S --defined-only '{binp}'", shell=True, text=True,
                                  stderr=subprocess.DEVNULL)
    r = {}
    for line in out.splitlines():
        p = line.split(None, 3)
        if len(p) < 4: continue
        if p[2] not in 'tTwW' or p[3].startswith('.L'): continue
        r[p[3]] = (int(p[1], 16), int(p[0], 16))
    return r

def clean(lines):
    out = [PLT_RE.sub('', norm_identical_ext([x])[0]) for x in lines]
    while out and out[-1] == 'nop': out.pop()
    return out

def main():
    filt = sys.argv[1] if len(sys.argv) > 1 else ''
    go = text_syms(GAME_ORIG); gn = text_syms(GAME_NEW)
    gd = load_disasm_cached(str(GAME_ORIG)); nd = load_disasm_cached(str(GAME_NEW))
    common = sorted(set(gn) & set(go))
    near = []; diff = []
    for name in common:
        ol = [t for a, t in gd.get(name, [])]; nl = [t for a, t in nd.get(name, [])]
        oe = clean(ol); ne = clean(nl)
        if oe == ne: continue
        if len(oe) == len(ne) and all(a.split()[0] == b.split()[0] for a, b in zip(oe, ne)):
            near.append(name)
        else:
            diff.append(name)
    near = [n for n in near if filt in n]
    diff = [n for n in diff if filt in n]
    print(f"[{filt or 'ALL'}] near={len(near)} diff={len(diff)}")
    for n in near: print("NEAR ", n)
    for n in diff: print("DIFF ", n)
    return 0

if __name__ == '__main__':
    sys.exit(main())
