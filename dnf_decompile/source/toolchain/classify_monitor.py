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
from compare_common import norm_line, load_disasm_cached

ORIG = '/mnt/d/Docs/my_sources/dnf_workspace/dnf_installer/build/dnf_data/home/template/neople/monitor/df_monitor_r'
NEW = '/mnt/d/Docs/my_sources/dnf_workspace/dnf_decompile/build/monitor/df_monitor_r'

ADDR_RE = re.compile(r'0x[0-9a-f]{7,8}\b')


def mn(s):
    return s.split()[0]


def call_sym(s):
    # 归一化后直接调用形如 `call <T> <_ZN...>`：取最后一个 <> 里的符号名
    m = re.findall(r'<([^>]*)>', s)
    return m[-1] if m else None


def is_addr_only(o, n):
    return bool(ADDR_RE.search(o)) and bool(ADDR_RE.search(n))


def classify(o_ins, n_ins):
    o = [norm_line(x[1]) for x in o_ins]
    n = [norm_line(x[1]) for x in n_ins]
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
    orig_only = sorted((oc - nc).keys())
    new_only = sorted((nc - oc).keys())
    return mne_only, real_op, opnd_total, orig_only, new_only


def real_calls(name, calls):
    """过滤布局/EH/打印噪声，只留真实调用差异。"""
    base = name.split('(')[0]
    out = []
    for c in calls:
        if c is None:
            continue
        if base + '+' in c:
            continue
        if c.startswith('_Unwind_') or c.startswith('__cxa_') or c.startswith('_ZSt'):
            continue
        if c in ('printf', 'puts', 'fprintf', 'fwrite', 'sprintf', 'vsprintf',
                 'vprintf', 'snprintf', 'strlen', 'strcmp', 'strcpy', 'memcpy',
                 'memset', 'malloc', 'free', 'realloc', 'calloc', 'abort',
                 'exit', '_exit', 'time', 'localtime', 'localtime_r', 'strftime'):
            continue
        out.append(c)
    return out


def is_app(sym):
    """与 compare_monitor.py 相同的应用层过滤（排除 std/运行时/全局构造）。"""
    if sym.startswith('_GLOBAL__I_'):
        return False
    if sym.startswith('__') and not sym.startswith('_ZN'):
        return False
    if re.match(r'^[a-z]', sym):
        return False
    if re.match(r'^_Z[NK]*(St|So|Si|Sb|Ss)', sym):
        return False
    if sym.startswith('_ZNSt') or sym.startswith('_ZNKSt') or sym.startswith('_ZSt'):
        return False
    if '_ZN10__cxxabiv' in sym or '_ZNK10__cxxabiv' in sym:
        return False
    if sym.startswith('_Z'):
        m = re.match(r'_Z(T|N|NK|K|KT)?(\d+)([A-Za-z_~]+)', sym)
        if m and (m.group(3).startswith('St') or m.group(3).startswith('__gnu_cxx')):
            return False
    return True


def main():
    args = sys.argv[1:]
    limit = 60
    bysize = False
    out_file = None
    i = 0
    while i < len(args):
        if args[i] == '--bysize':
            bysize = True
        elif args[i] == '--out' and i + 1 < len(args):
            out_file = args[i + 1]
            i += 1
        else:
            try:
                limit = int(args[i])
            except ValueError:
                pass
        i += 1
    o_dis = load_disasm_cached(ORIG)
    n_dis = load_disasm_cached(NEW)
    osym = monitorlib.load_symbols(ORIG)
    nsym = monitorlib.load_symbols(NEW)
    rows = []
    for name in osym:
        if not is_app(name):
            continue
        o = o_dis.get(name, [])
        n = n_dis.get(name, [])
        if not o or not n:
            continue
        if [norm_line(x[1]) for x in o] == [norm_line(x[1]) for x in n]:
            continue
        mne_only, real_op, opnd_total, orig_only, new_only = classify(o, n)
        if mne_only == 0 and real_op == 0:
            continue  # 纯地址差异 → NEAR 良性
        r_o = real_calls(name, orig_only)
        r_n = real_calls(name, new_only)
        rows.append((len(o), name, mne_only, real_op, opnd_total, r_o, r_n))
    if bysize:
        rows.sort(key=lambda r: (-r[0], -r[2], -r[3]))
    else:
        rows.sort(key=lambda r: (-(len(r[5]) + len(r[6])), -r[2], -r[3], -r[0]))
    lines = ['%-4s %-8s %-7s %-7s %-7s %s' % ('size', 'mne', 'realop', 'opnd', 'rcalls', 'symbol')]
    for size, name, m, r, t, r_o, r_n in rows[:limit]:
        parts = []
        if r_o:
            parts.append('O:' + ','.join(r_o[:8]))
        if r_n:
            parts.append('N:' + ','.join(r_n[:8]))
        lines.append('%-4d %-8d %-7d %-7d %-7d %s%s' % (
            size, m, r, t, len(r_o) + len(r_n), name,
            '  ' + ' | '.join(parts) if parts else ''))
    lines.append('total suspicious: %d' % len(rows))
    text = '\n'.join(lines)
    if out_file:
        with open(out_file, 'w', encoding='utf-8') as f:
            f.write(text + '\n')
    else:
        print(text)


if __name__ == '__main__':
    main()
