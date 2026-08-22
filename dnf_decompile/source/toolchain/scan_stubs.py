#!/usr/bin/env python3
"""scan_stubs.py : 检测"NEW 是极短桩/空实现，而 ORIG 有真实逻辑"的函数。
这些是语义 bug 强信号（桩覆盖真实实现）。
规则：NEW 指令数 ≤ 12 且 ORIG 指令数 ≥ 20 且 ORIG ≥ 2×NEW。
用法：scan_stubs.py [类前缀过滤]"""
import re, sys
from pathlib import Path
sys.path.insert(0, str(Path(__file__).resolve().parent))
from compare_common import load_disasm_cached

_DECOMP = Path('/home/wangyilei/dnf_workspace/dnf_decompile')
ROOT = _DECOMP.parent
GAME_NEW = _DECOMP / 'build/game/df_game_r'
GAME_ORIG = ROOT / 'dnf_installer/build/dnf_data/home/template/init/df_game_r'

def main():
    filt = sys.argv[1] if len(sys.argv) > 1 else ''
    gd = load_disasm_cached(str(GAME_ORIG)); nd = load_disasm_cached(str(GAME_NEW))
    common = sorted(set(gd) & set(nd))
    hits = []
    for name in common:
        if filt and filt not in name: continue
        ol = [t for a, t in gd.get(name, [])]
        nl = [t for a, t in nd.get(name, [])]
        # 去除尾部 nop 再计
        def strip(lines):
            l = lines[:]
            while l and 'nop' in l[-1]: l.pop()
            return l
        os_ = strip(ol); ns_ = strip(nl)
        if len(os_) >= 20 and len(ns_) <= 12 and len(os_) >= 2 * len(ns_):
            hits.append((name, len(os_), len(ns_)))
    print(f"== NEW 桩 vs ORIG 真实逻辑（{filt or 'ALL'}）: {len(hits)} ==")
    for name, o, n in sorted(hits, key=lambda x: -x[1]):
        print(f"  [{o}->{n}] {name}")
    return 0

if __name__ == '__main__':
    sys.exit(main())
