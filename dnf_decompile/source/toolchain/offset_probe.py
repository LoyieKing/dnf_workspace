#!/usr/bin/env python3
"""offset_probe.py <name>... : 提取每个函数 ORIG/NEW 中 (基址+常偏移) 数据访问的偏移，报告差异。
适用于 getter/简单函数，识别布局偏移。"""
import re, sys
from pathlib import Path
_DECOMP = Path('/home/wangyilei/dnf_workspace/dnf_decompile')
ROOT = _DECOMP.parent
GAME_NEW = _DECOMP / 'build/game/df_game_r'
GAME_ORIG = ROOT / 'dnf_installer/build/dnf_data/home/template/init/df_game_r'
sys.path.insert(0, str(_DECOMP / 'source/toolchain'))
from compare_common import load_disasm_cached

OFS = re.compile(r'^(?:mov|movzbl|movzwl|movsbl|movswl|lea|add)\s+(?:0x([0-9a-f]+)|-?(0x[0-9a-f]+))\s*\(%[a-z0-9]+\),%')

def extract(lines):
    offs = []
    for t in lines:
        m = OFS.match(t)
        if m:
            v = int(m.group(1) or m.group(2), 16)
            # keep positive and within struct range
            offs.append(v)
    return offs

def main():
    gd = load_disasm_cached(str(GAME_ORIG)); nd = load_disasm_cached(str(GAME_NEW))
    for name in sys.argv[1:]:
        ol = [t for a, t in gd.get(name, [])]
        nl = [t for a, t in nd.get(name, [])]
        oo = extract(ol); no = extract(nl)
        if not oo and not no:
            print(f"##### {name}: (no offsets)")
            continue
        diffs = [o - n for o, n in zip(oo, no)]
        print(f"##### {name}  ORIG={oo[:6]} NEW={no[:6]}  diff={diffs[:6]}")
    return 0

if __name__ == '__main__':
    sys.exit(main())
