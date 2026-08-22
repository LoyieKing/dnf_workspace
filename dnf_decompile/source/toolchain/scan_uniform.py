#!/usr/bin/env python3
"""scan_uniform.py : 扫描大量 getter/setter，按类聚合数据偏移差异。
若某类多个函数偏移差异为同一常量 → 干净"缺块"候选（可在类中补/删对齐）。"""
import re, subprocess, sys
from pathlib import Path
_DECOMP = Path('/home/wangyilei/dnf_workspace/dnf_decompile')
ROOT = _DECOMP.parent
GAME_NEW = _DECOMP / 'build/game/df_game_r'
GAME_ORIG = ROOT / 'dnf_installer/build/dnf_data/home/template/init/df_game_r'
sys.path.insert(0, str(_DECOMP / 'source/toolchain'))
from compare_common import load_disasm_cached

OFS = re.compile(r'^(?:mov|movzbl|movzwl|movsbl|movswl|lea|add)\s+(0x[0-9a-f]+)\s*\(%[a-z0-9]+\)')

def extract(lines):
    return [int(m.group(1), 16) for t in lines for m in [OFS.match(t)] if m]

def cls_of(name):
    m = re.match(r'_Z[A-Za-z0-9]*(\d+)([A-Za-z_][A-Za-z0-9_]*)', name)
    return m.group(2) if m else '?'

def main():
    gd = load_disasm_cached(str(GAME_ORIG)); nd = load_disasm_cached(str(GAME_NEW))
    # 收集所有共同符号的简单访问器（≤40 条指令）
    names = sorted(set(gd) & set(nd))
    per_cls = {}
    for name in names:
        ol = [t for a, t in gd.get(name, [])]
        nl = [t for a, t in nd.get(name, [])]
        if len(ol) > 40 or len(ol) < 2: continue
        oo, no = extract(ol), extract(nl)
        if len(oo) < 2 or len(oo) != len(no): continue
        diffs = set(o - n for o, n in zip(oo, no) if o != n)
        if len(diffs) == 1 and next(iter(diffs)) != 0:
            d = next(iter(diffs))
            per_cls.setdefault(cls_of(name), []).append((name, d))
    # 报告：同类至少 2 个函数且同一差异
    print("== 同类多函数统一偏移差异（缺块候选）==")
    for cls, items in sorted(per_cls.items(), key=lambda x: -len(x[1])):
        diffs = set(d for _, d in items)
        if len(items) >= 2 and len(diffs) == 1:
            d = diffs.pop()
            print(f"  {cls}: diff={d:+#x}  ({len(items)} 函数)")
            for n, _ in items[:3]:
                print(f"      {n}")
    return 0

if __name__ == '__main__':
    sys.exit(main())
