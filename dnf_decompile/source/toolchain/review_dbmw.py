#!/usr/bin/env python3
"""dbmw DIFF 函数自动分类：只把「真实差异」列入人工核验，良性差异自动跳过。

复用 verify_diffs.classify_function（rodata 字符串等价 / 符号地址等价 /
代码生成形态等价判定），把二进制路径指到 dbmw。

用法:
  python3 review_dbmw.py [符号名正则] [--real-only] [--top N]

输出:
  /tmp/dbmw_review.tsv —— 每函数一行（分类计数 + real 明细）
  stdout —— 真实差异函数清单（按 pair_real/体量排序）
"""
import re
import sys
import time
import types
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
sys.path.insert(0, '/tmp')

ROOT = Path('/mnt/d/Docs/my_sources/dnf_workspace')
ORIG = ROOT / 'dnf_installer/build/dnf_data/home/template/neople/dbmw_guild/df_dbmw_r'
NEW = ROOT / 'dnf_decompile/build/dbmw/df_dbmw_r'

# 让 verify_diffs 的 disasm/classify 使用 dbmw 路径
guildlib = types.ModuleType('guildlib')
guildlib.ORIG = str(ORIG)
guildlib.NEW = str(NEW)
sys.modules['guildlib'] = guildlib

import monitorlib
import guildlib as _gl
from compare_dbmw import is_app, dedup_aliases, norm_sym
import verify_diffs

# verify_diffs 内部 `import guildlib` 会拿到我们注入的模块，补上符号加载接口
guildlib.load_symbols = monitorlib.load_symbols


# ---------------- 真实差异二次过滤 ----------------
# verify_diffs 的 classify_pair 会把「帧大小/栈槽布局」这类纯代码生成噪声
# 判为 real（如 sub $0xdc,%esp vs sub $0xc4,%esp）。这里做一次语义级复核：
# 去除 %esp/%ebp 栈槽、寄存器名与 esp 目的立即数后仍不同才保留。
import re as _re
_FRAME_IMM_RE = _re.compile(r'\$0x[0-9a-f]+')
_REG_RE2 = _re.compile(r'%[a-z]{2,3}')
_STACK_RE = _re.compile(r'(-?0x[0-9a-f]+)?\(%(?:esp|ebp)\)')


def _semantic_core(txt):
    x = _STACK_RE.sub('S', txt)
    x = _REG_RE2.sub('%R', x)
    return x


def _pair_is_layout_noise(o, n):
    """成对差异是否只是帧/栈布局噪声。"""
    om, nm = o.split()[0], n.split()[0]
    if om != nm:
        return False
    # esp 目的立即数（帧大小）差异 → 布局噪声
    if om in ('sub', 'add') and ',%esp' in o and ',%esp' in n:
        return _semantic_core(_FRAME_IMM_RE.sub('I', o)) == \
               _semantic_core(_FRAME_IMM_RE.sub('I', n))
    # 其余：去栈槽/寄存器后一致 → 布局噪声
    return _semantic_core(o) == _semantic_core(n)


def _only_is_layout_noise(line):
    x = _STACK_RE.sub('S', line)
    x = _REG_RE2.sub('%R', x)
    # 纯 %ebp 槽位读写 / mov 寄存器 / sete/test/cmp 系 → 布局或代码生成噪声
    if _re.match(r'^(push|pop)\s+%[a-z]{2,3}$', x):
        return True
    if _re.match(r'^(sub|add)\s+[^,]+,%esp$', x):
        return True
    if x.startswith('mov') and '%R,%R' in x:
        return True
    if '(%ebp)' in line or '(%esp)' in line:
        return True
    if _re.match(r'^(mov|movl|movzbl|movb|cmpb|cmpl|test|set[a-z]+|xor|cmp)\b', line) and '(%ebp)' in line:
        return True
    return False


def main():
    args = sys.argv[1:]
    pat = None
    real_only = False
    top = None
    i = 0
    while i < len(args):
        a = args[i]
        if a == '--real-only':
            real_only = True
        elif a.startswith('--top'):
            if '=' in a:
                top = int(a.split('=')[1])
            else:
                i += 1
                top = int(args[i])
        else:
            pat = a
        i += 1

    orig = monitorlib.load_symbols(str(ORIG))
    new = monitorlib.load_symbols(str(NEW))
    orig_names = sorted(dedup_aliases(orig))
    orig_names = [n for n in orig_names if is_app(n)]
    if pat:
        rx = re.compile(pat)
        orig_names = [n for n in orig_names if rx.search(n)]

    # 先拿全量分类（只差 DIFF 的），快路径复用 compare_dbmw 的签名缓存
    sys.path.insert(0, str(Path(__file__).resolve().parent))
    from compare_common import norm_identical, CALIBER_VERSION
    import pickle
    sig_cache = '/tmp/dbmw_sig_cache.pkl'
    try:
        with open(sig_cache, 'rb') as f:
            ck, cached = pickle.load(f)
    except Exception:
        cached = {}
    ok = {}
    for n in orig_names:
        ins = monitorlib.disasm(str(ORIG), n)
        if not ins:
            continue
        nn = n if n in new else norm_sym(n)
        b = monitorlib.disasm(str(NEW), nn)
        if not b:
            continue
        a = [norm_identical([x])[0] for x in ins]
        c = [norm_identical([x])[0] for x in b]
        if a == c:
            continue
        if [x.split()[0] for x in a] == [x.split()[0] for x in c]:
            continue  # NEAR：助记符序列一致，跳过
        ok[n] = len(a)

    print('DIFF 候选 %d 个' % len(ok))
    rows = []
    t0 = time.time()
    for i, name in enumerate(sorted(ok, key=lambda n: -ok[n])):
        r = verify_diffs.classify_function(name)
        if r is None:
            continue
        if r.get('identical'):
            continue
        real = []
        for kind, o, nn in r.get('real', []):
            if kind == 'opnd':
                if _pair_is_layout_noise(o, nn):
                    continue
            else:  # only-o / only-n
                if _only_is_layout_noise(o or nn):
                    continue
            real.append((kind, o, nn))
        rows.append((name, ok[name], r.get('counts', {}), len(real), real))
        if (i + 1) % 200 == 0:
            print('... %d/%d (%.1fs)' % (i + 1, len(ok), time.time() - t0), file=sys.stderr)

    rows.sort(key=lambda x: (-x[3], -x[1]))
    with open('/tmp/dbmw_review.tsv', 'w') as f:
        f.write('symbol\torig_insns\tpair_real\tcounts\treal_samples\n')
        for name, n, cnt, pr, real in rows:
            f.write('%s\t%d\t%d\t%s\t%s\n' % (name, n, pr, cnt, real))

    n_real = sum(1 for r in rows if r[3] > 0)
    print('DIFF 检查 %d 个，其中真实差异 %d 个（pair_real>0），其余为良性形态差异'
          % (len(rows), n_real))
    shown = rows if top is None else rows[:top]
    for name, n, cnt, pr, real in shown:
        print('%s  [%d insns, pair_real=%d] %s' % (name, n, pr, cnt))
        for kind, o, nn in real[:6]:
            print('    %s: %s | %s' % (kind, o, nn))


if __name__ == '__main__':
    main()
