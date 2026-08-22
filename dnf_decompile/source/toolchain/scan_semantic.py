#!/usr/bin/env python3
"""scan_semantic.py : 检测"签名/参数语义不匹配"候选。
信号：
  A. ORIG 与 NEW 的 `ret $N`（清理参数字节）不同 → 参数个数/调用约定不一致。
  B. ORIG 读取 0xc/0x10/0x14(%ebp) 作为基址解引用（用参数指针），但 NEW 只用 this(0x8) 或反之。
用法：scan_semantic.py [类前缀过滤]"""
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
    # A: ret $N 差异
    ret_re = re.compile(r'ret\s+\$0x([0-9a-f]+)')
    arg_re = re.compile(r'^(?:mov|movzbl|movzwl|movsbl|movswl|lea)\s+0x([0-9a-f]+)\(%ebp\)')
    hits = []
    for name in common:
        if filt and filt not in name: continue
        ol = [t for a, t in gd.get(name, [])]; nl = [t for a, t in nd.get(name, [])]
        if not ol or not nl: continue
        def retn(lines):
            return [int(m.group(1),16) for t in lines for m in [ret_re.search(t)] if m]
        orr, nrr = retn(ol), retn(nl)
        if orr != nrr:
            hits.append((name, 'RETCLEAN', orr, nrr))
            continue
        # B: 用参数(0xc..)解引用差异
        def arguses(lines):
            # 收集解引用基址里的 ebp 参数偏移
            s = set()
            for t in lines:
                m = re.search(r'0x([0-9a-f]{1,2})\(%ebp\)', t)
                if m:
                    off = int(m.group(1),16)
                    if off >= 0xc:  # 非 this 参数
                        s.add(off)
            return s
        oa, na = arguses(ol), arguses(nl)
        # 一方解引用参数、另一方没有（或不同）
        if oa != na:
            hits.append((name, 'ARGUSE', sorted(oa), sorted(na)))
    print(f"== 签名/参数语义不匹配候选（{filt or 'ALL'}）: {len(hits)} ==")
    for name, kind, a, b in hits:
        print(f"  [{kind}] {name}  ORIG={a} NEW={b}")
    return 0

if __name__ == '__main__':
    sys.exit(main())
