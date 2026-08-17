#!/usr/bin/env python3
"""df_game_r nsl 部分 identical 判定（权威口径，2026-08-16 定稿）：
- 参照：point ORIG（df_game_r 的 nsl 符号被 strip，三方验证 point 同库同编译器）
- 归一化：分支/调用目标 → <T>；大绝对地址(数据引用) → <A>；去掉 @plt 后缀；
  剥离两侧尾部 nop（链接对齐伪影）
- 输出：strict / ae / near / diff 统计 + 真实差异函数清单
用法：compare_game_nsl.py [--detail]
"""
import re, subprocess, sys
from pathlib import Path
sys.path.insert(0, str(Path(__file__).resolve().parent))
from compare_common import load_disasm_cached, norm_line, norm_identical_ext

ROOT = Path('/home/loyieking/dnf_workspace')
GAME_NEW = ROOT / 'dnf_decompile/build/game/df_game_r'
POINT_ORIG = ROOT / 'dnf_installer/build/dnf_data/home/template/neople/point/df_point_r'

PLT_RE = re.compile(r'@plt')


def text_syms(binp, prefix='_ZN3nsl'):
    out = subprocess.check_output(f"nm -S --defined-only '{binp}'", shell=True, text=True, stderr=subprocess.DEVNULL)
    r = {}
    for line in out.splitlines():
        p = line.split(None, 3)
        if len(p) < 4:
            continue
        if p[2] not in 'tTwW' or p[3].startswith('.L'):
            continue
        if not p[3].startswith(prefix):
            continue
        r[p[3]] = (int(p[1], 16), int(p[0], 16))
    return r


def clean(lines):
    """AE 归一化 + 去 @plt + 剥离尾部 nop。"""
    out = [PLT_RE.sub('', norm_identical_ext([x])[0]) for x in lines]
    while out and out[-1] == 'nop':
        out.pop()
    return out


def main():
    detail = '--detail' in sys.argv
    po = text_syms(POINT_ORIG)
    gn = text_syms(GAME_NEW)
    pd = load_disasm_cached(str(POINT_ORIG))
    gd = load_disasm_cached(str(GAME_NEW))
    common = sorted(set(gn) & set(po))
    strict = ae = near = diff = 0
    real = []
    for name in common:
        pl = [t for a, t in pd.get(name, [])]
        gl = [t for a, t in gd.get(name, [])]
        ps = [norm_line(x) for x in pl]
        gs = [norm_line(x) for x in gl]
        pe = clean(pl)
        ge = clean(gl)
        if ps == gs:
            strict += 1
        elif pe == ge:
            ae += 1
        elif len(pe) == len(ge) and all(a.split()[0] == b.split()[0] for a, b in zip(pe, ge)):
            near += 1
            if detail:
                real.append((name, 'NEAR', pe, ge))
        else:
            diff += 1
            if detail:
                real.append((name, 'DIFF', pe, ge))
    print(f"共同 nsl {len(common)}: strict={strict} ae={ae} (合计 identical={strict+ae}) "
          f"near={near} diff={diff} 非identical={len(common)-strict-ae}")
    if detail:
        for name, kind, pe, ge in real:
            print(f"  {kind} {name}  (point={len(pe)} ours={len(ge)})")
    return 0


if __name__ == '__main__':
    sys.exit(main())

# 口径说明（2026-08-16 用户规则）：
# SHA/MD5 等通用算法类（CSHA/CSHA1/CNChecksum*/CNCrypto*/CRijndael/CTEA/
# CBlowFish/XorRand/Cipher/Encryption/IMethod/Token 等）只要求算法实现正确，
# 不要求 identical；剩余 3 个 nsl 残余（CSHA::AddData/Transform、IMethod::Xor）
# 均属此列 → nsl 基础库 729/729 达标。
