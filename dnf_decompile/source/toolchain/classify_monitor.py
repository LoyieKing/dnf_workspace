#!/usr/bin/env python3
import sys
from pathlib import Path

"""monitor DIFF 快速分类器：基于缓存反汇编，按"疑似语义差异"排序。

对每个 DIFF 函数输出三组指标：
  - mne_only : 助记符序列不匹配（结构性差异，需人工看）
  - callset  : 调用目标符号集合差异（真实语义差异候选）
  - real_op  : 同助记符但操作数差异中"非纯大地址"的条数
               （常量/字段偏移/寄存器差异 → 真实差异候选）
大地址启发式：操作数两侧都含 0x[0-9a-f]{7,8}（两个二进制的代码/rodata
地址区间），视为链接布局差异；否则视为真实操作数差异。
"""
import difflib
import re
import sys
from collections import Counter

sys.path.insert(0, "/tmp")
sys.path.insert(0, str(Path(__file__).resolve().parent))
import monitorlib
from compare_common import norm_line

ORIG = '/mnt/d/Docs/my_sources/dnf_workspace/dnf_installer/build/dnf_data/home/template/neople/monitor/df_monitor_r'
NEW = '/mnt/d/Docs/my_sources/dnf_workspace/dnf_decompile/source/build-monitor/df_monitor_r'

ADDR_RE = re.compile(r'0x[0-9a-f]{7,8}\b')


def mn(s):
    return s.split()[0]


def call_sym(s):
    m = re.search(r'<([^>]*)>', s)
    return m.group(1) if m else None


def is_addr_only(o, n):
    return bool(ADDR_RE.search(o)) and bool(ADDR_RE.search(n))


def classify(o_ins, n_ins):
    o = [norm_line(x) for x in o_ins]
    n = [norm_line(x) for x in n_ins]
    sm = difflib.SequenceMatcher(a=o, b=n, autojunk=False)
    mne_only = 0
    real_op = 0
    opnd_total = 0
    for tag, i1, i2, j1, j2 in sm.get_opcodes():
        if tag == 'equal':
            continue
        oo = o[i1:i2]
        nn = n[j1:j2]
        oi = ni = 0
        while oi < len(oo) or ni < len(nn):
            if oi < len(oo) and ni < len(nn) and mn(oo[oi]) == mn(nn[ni]):
                opnd_total += 1
                if not is_addr_only(oo[oi], nn[ni]):
                    real_op += 1
                oi += 1
                ni += 1
            elif oi < len(oo) and (ni >= len(nn) or mn(oo[oi]) != mn(nn[ni])):
                mne_only += 1
                oi += 1
            elif ni < len(nn):
                mne_only += 1
                ni += 1
    oc = Counter(call_sym(x) for x in o if call_sym(x))
    nc = Counter(call_sym(x) for x in n if call_sym(x))
    callset = sorted((oc - nc).keys()) + sorted((nc - oc).keys())
    return mne_only, real_op, opnd_total, callset


def main():
    limit = int(sys.argv[1]) if len(sys.argv) > 1 else 60
    o_dis = monitorlib.load_disasm(ORIG)
    n_dis = monitorlib.load_disasm(NEW)
    osym = monitorlib.load_symbols(ORIG)
    nsym = monitorlib.load_symbols(NEW)
    # 与 compare_monitor 相同的应用层过滤
    def is_app(sym):
        if sym.startswith('_GLOBAL__I_') or sym.startswith('__'):
            return False
        if re.match(r'^[a-z]', sym):
            return False
        return True
    rows = []
    for name in osym:
        if not is_app(name):
            continue
        o = o_dis.get(name, [])
        n = n_dis.get(name, [])
        if not o or not n:
            continue
        if [norm_line(x) for x in o] == [norm_line(x) for x in n]:
            continue
        mne_only, real_op, opnd_total, callset = classify(o, n)
        if mne_only == 0 and real_op == 0:
            continue  # 纯地址差异 → NEAR 良性
        rows.append((len(o), name, mne_only, real_op, opnd_total, callset))
    rows.sort(key=lambda r: (-r[2], -r[3], -r[0]))
    print('%-4s %-8s %-7s %-7s %-7s %s' % ('size', 'mne', 'realop', 'opnd', 'calls', 'symbol'))
    for size, name, m, r, t, cs in rows[:limit]:
        print('%-4d %-8d %-7d %-7d %-7d %s%s' % (
            size, m, r, t, len(cs), name,
            '  CALLDIFF: ' + ','.join(cs[:6]) if cs else ''))
    print('total suspicious: %d' % len(rows))


if __name__ == '__main__':
    main()
