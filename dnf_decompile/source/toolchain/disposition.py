#!/usr/bin/env python3
"""剩余差异自动归档定性工具（2026-08-10）。

用法:
    python3 disposition.py <svc> [<svc>...]
    python3 disposition.py --pair <orig> <new> <tag>

对每个「两侧都有、非豁免」的项目函数，按统一口径（compare_common）计算
strict/ext/full 三档判定，并把 strict 非 IDENTICAL 的函数定性分类：

  归档类（编译器伪影，A_*）：
    A_DATA_ADDR   strict 不同但 ext 相同（仅大地址/数据引用差异；
                  64 位二进制额外归一化 RIP 位移、0x4x/0x6x 地址与 objdump 注释）
    A_ASSERT_LINE ext 不同但 full 相同（assert 行号元信息）
    A_PADDING     仅尾部对齐填充差异（nm size 含函数间 nop pad）
    A_REGALLOC    条数相同、逐位置助记符相同，差异仅为寄存器名（坑点 §81）
    A_BLOCK_ORDER 助记符多重集相同但顺序不同，且 call 符号集合相同（坑点 §3.3）
  复核类（潜在真实语义差异，R_*）：
    R_CALLSET     两侧 call 指令的目标符号集合不同（强语义信号）
    R_CONST       full 归一化后差异行含立即数常量差异（$0x…）
    R_OFFSET      差异行含栈/字段偏移差异（0x18(%eax)、-0x4(%ebp) 的数字）
    R_CODEGEN     其余（助记符序列/长度不同等）

特征分析基于 full 口径归一化后的指令序列。
MISSING（ORIG 有 NEW 无，非豁免）单独计数并列出。

符号规范化去重：C1Ev→C2Ev、D1Ev→D2Ev（同一规范名只算一次，
取 ORIG 中 size 更大的那个符号）。

输出:
    /tmp/disposition/<svc>.tsv           逐函数明细
    /tmp/disposition/<svc>.summary.txt   类别计数 + 总数 + MISSING
stdout 打印 summary。
"""
import os
import re
import subprocess
import sys
from collections import Counter
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
from compare_common import (
    norm_identical, norm_identical_ext, norm_identical_full,
    load_disasm_cached, demangle_batch, is_exempt_symbol,
)

DECOMP = Path('/mnt/d/Docs/my_sources/dnf_workspace/dnf_decompile')
NEOPLE = Path('/mnt/d/Docs/my_sources/dnf_workspace/dnf_installer/build/dnf_data/home/template/neople')

SVC = {
    'stun':      ('stun/df_stun_r',           'stun/df_stun_r'),
    'channel':   ('channel/df_channel_r',     'channel/df_channel_r'),
    'bridge':    ('bridge/df_bridge_r',       'bridge/df_bridge_r'),
    'auction':   ('auction/df_auction_r',     'auction/df_auction_r'),
    'point':     ('point/df_point_r',         'point/df_point_r'),
    'community': ('community/df_community_r', 'community/df_community_r'),
    'manager':   ('manager/df_manager_r',     'manager/df_manager_r'),
    'dbmw':      ('dbmw_guild/df_dbmw_r',     'dbmw/df_dbmw_r'),
    'monitor':   ('monitor/df_monitor_r',     'monitor/df_monitor_r'),
    'guild':     ('guild/df_guild_r',         'guild/df_guild_r'),
    'statics':   ('statics/df_statics_r',     'statics/df_statics_r'),
    'relay':     ('relay/df_relay_r',         'relay/df_relay_r'),
    'coserver':  ('coserver/df_coserver_r',   'coserver/df_coserver_r'),
}

OUT_DIR = Path('/tmp/disposition')

_IMM_RE = re.compile(r'\$0x[0-9a-f]+')          # 立即数常量（<T>/<A>/$L 归一化后无 $ 前缀残留）
_DISP_RE = re.compile(r'(-?0x[0-9a-f]+|-?[0-9]+)?\(')  # 内存操作数位移（含空位移）
_REG_RE = re.compile(r'%[a-z0-9]+')             # 寄存器名（%eax/%xmm0/%st 等）
_CALL_RE = re.compile(r'^callq?\b')
_SYMB_RE = re.compile(r'<([^>]+)>')


def canon(name):
    """C1Ev→C2Ev、D1Ev→D2Ev 规范名（构造/析构变体去重）。"""
    return name.replace('C1Ev', 'C2Ev').replace('D1Ev', 'D2Ev')


def nm_syms(bin_path):
    """nm -S --defined-only，取 T/t/W/w 符号，返回 {name: (addr, size)}。"""
    out = subprocess.run(
        ['nm', '-S', '--defined-only', str(bin_path)],
        text=True, capture_output=True, check=True).stdout
    res = {}
    for line in out.splitlines():
        p = line.split(None, 3)
        if len(p) < 4 or p[2] not in 'TtWw' or p[3].startswith('.L'):
            continue
        try:
            res[p[3]] = (int(p[0], 16), int(p[1], 16))
        except ValueError:
            continue
    return res


def pick_canon(syms):
    """按规范名分组，返回 {canon: (组内 size 最大的 name, addr, size)}。"""
    groups = {}
    for name, (addr, size) in syms.items():
        c = canon(name)
        if c not in groups or size > groups[c][2]:
            groups[c] = (name, addr, size)
    return groups


def build_lookup(funcs):
    """load_disasm_cached 结果 -> (按符号名, 按起始地址) 两种指令序列索引。"""
    by_name = {}
    by_addr = {}
    for name, entries in funcs.items():
        text = [t for _, t in entries]
        by_name[name] = text
        if entries:
            try:
                by_addr.setdefault(int(entries[0][0], 16), text)
            except ValueError:
                pass
    return by_name, by_addr


def get_insns(name, addr, by_name, by_addr):
    """优先按符号名取；取不到（objdump 标签别名）则按起始地址兜底。"""
    text = by_name.get(name)
    if text is None:
        text = by_addr.get(addr)
    return text


def call_syms(insns):
    """call 指令的目标符号集合（<符号>）。

    去掉 @plt 后缀（PLT 经转属链接布局，不算目标差异），
    并滤掉归一化占位符 <T>/<A>。
    """
    s = set()
    for line in insns:
        if _CALL_RE.match(line):
            for t in _SYMB_RE.findall(line):
                t = t.split('@')[0]
                if t not in ('T', 'A'):
                    s.add(t)
    return s


def first_diff(oa, na):
    """首对差异行证据（full 归一化序列上）。"""
    for i, (x, y) in enumerate(zip(oa, na)):
        if x != y:
            return 'L{}: {} || {}'.format(i, x, y)[:240]
    if len(oa) != len(na):
        return 'len {} vs {}; tail: {} || {}'.format(
            len(oa), len(na),
            (oa[len(na):len(na) + 2] or ['<eof>'])[0] if len(oa) > len(na) else '<eof>',
            (na[len(oa):len(oa) + 2] or ['<eof>'])[0] if len(na) > len(oa) else '<eof>')[:240]
    return ''


def diff_pairs(oa, na):
    return [(x, y) for x, y in zip(oa, na) if x != y]


def classify(oa, na):
    """对 strict 非 IDENTICAL 的函数定性分类。

    oa/na 为 full 口径归一化后的指令文本列表。返回 (category, evidence)。
    """
    # R_CALLSET：call 目标符号集合不同（强语义信号）
    co, cn = call_syms(oa), call_syms(na)
    if co != cn:
        only_o = ';'.join(sorted(co - cn))[:100] or '-'
        only_n = ';'.join(sorted(cn - co))[:100] or '-'
        return 'R_CALLSET', 'call 目标不同: 仅ORIG[{}] 仅NEW[{}]'.format(only_o, only_n)

    pairs = diff_pairs(oa, na)

    # R_CONST：差异行的立即数常量集合不同
    for x, y in pairs:
        if _IMM_RE.findall(x) != _IMM_RE.findall(y):
            return 'R_CONST', '{} || {}'.format(x, y)[:240]

    # R_OFFSET：差异行的内存位移（栈/字段偏移）数字不同
    for x, y in pairs:
        if _DISP_RE.findall(x) != _DISP_RE.findall(y):
            return 'R_OFFSET', '{} || {}'.format(x, y)[:240]

    # A_REGALLOC：条数相同、逐位置助记符相同，差异仅为寄存器名
    if len(oa) == len(na) and all(x.split()[0] == y.split()[0] for x, y in pairs):
        if all(_REG_RE.sub('%R', x) == _REG_RE.sub('%R', y) for x, y in pairs):
            return 'A_REGALLOC', first_diff(oa, na)

    # A_BLOCK_ORDER：助记符多重集相同但顺序不同，且 call 集合相同（前面已排除不同）
    mo = Counter(x.split()[0] for x in oa if x.split())
    mn = Counter(x.split()[0] for x in na if x.split())
    if mo == mn:
        return 'A_BLOCK_ORDER', first_diff(oa, na)

    return 'R_CODEGEN', first_diff(oa, na)


# ---- 尾部对齐填充（A_PADDING）与 64 位布局归一化 ------------------------

_PAD_RE = re.compile(r'^(nop|nopw|nopl|xchg\s+%ax,%ax|lea\s+0x0\(%e[sd]i\),%e[sd]i)(\s|$)')

# objdump 对 RIP 相对寻址行追加 '# 4063fc <sym>' 注释：布局产物
_COMMENT_RE = re.compile(r'\s+#\s.*$')
# 64 位非 PIE 的 RIP 相对位移：0x20296b(%rip)，长度随布局变化
_RIP_RE = re.compile(r'0x[0-9a-f]+\(%rip\)')
# 64 位非 PIE 的绝对数据/代码地址：0x40xxxx-0x4xxxxx 与 0x6xxxxx（bss）
# 32 位不可放宽到 6 位（0x4c4d58 等常量），故仅 64 位二进制使用
_ADDR64_RE = re.compile(r'(?<![0-9a-zA-Z$*.])0x[46][0-9a-f]{5}(?![0-9a-f])')


def strip_tail_pad(insns):
    out = list(insns)
    while out and _PAD_RE.match(out[-1]):
        out.pop()
    return out


def is_elf64(path):
    with open(path, 'rb') as fh:
        return fh.read(5)[4] == 2


def norm64(insns):
    """64 位二进制（stun）的布局归一化：去注释 + RIP 位移 + 0x4x/0x6x 地址。"""
    out = []
    for x in insns:
        x = _COMMENT_RE.sub('', x)
        x = _RIP_RE.sub('<A>(%rip)', x)
        out.append(_ADDR64_RE.sub('<A>', x))
    return out


def verdict(a, b, norm):
    return 'IDENTICAL' if norm(a) == norm(b) else 'DIFF'


def run_pair(tag, orig_p, new_p):
    osyms, nsyms = nm_syms(orig_p), nm_syms(new_p)
    og, ng = pick_canon(osyms), pick_canon(nsyms)

    # 批量还原符号名用于豁免判定
    all_names = {n for n, _, _ in og.values()} | {n for n, _, _ in ng.values()}
    dem = demangle_batch(sorted(all_names))

    def exempt(name):
        return is_exempt_symbol(name, dem.get(name, name))

    odis = build_lookup(load_disasm_cached(orig_p))
    ndis = build_lookup(load_disasm_cached(new_p))
    elf64 = is_elf64(orig_p) and is_elf64(new_p)

    rows = []      # (category, strict, ext, full, mangled, demangled, size_o, size_n, evidence)
    missing = []   # (mangled, demangled, size)
    stats = Counter()

    for c in sorted(og):
        oname, oaddr, osize = og[c]
        if exempt(oname):
            continue
        if c not in ng:
            missing.append((oname, dem.get(oname, oname), osize))
            continue
        nname, naddr, nsize = ng[c]
        oi = get_insns(oname, oaddr, *odis)
        ni = get_insns(nname, naddr, *ndis)
        dname = dem.get(oname, oname)
        if oi is None or ni is None:
            which = 'orig' if oi is None else 'new'
            rows.append(('NO_DISASM', '-', '-', '-', oname, dname,
                         str(osize), str(nsize), '{} 侧无反汇编片段'.format(which)))
            stats['NO_DISASM'] += 1
            continue
        s = verdict(oi, ni, norm_identical)
        e = verdict(oi, ni, norm_identical_ext)
        f = verdict(oi, ni, norm_identical_full)
        fo, fn = norm_identical_full(oi), norm_identical_full(ni)
        if s == 'IDENTICAL':
            cat, ev = 'IDENTICAL', ''
        elif e == 'IDENTICAL':
            cat, ev = 'A_DATA_ADDR', first_diff(norm_identical(oi), norm_identical(ni))
        elif f == 'IDENTICAL':
            cat, ev = 'A_ASSERT_LINE', first_diff(norm_identical_ext(oi), norm_identical_ext(ni))
        elif elf64 and norm64(fo) == norm64(fn):
            # 64 位布局产物：RIP 位移 / 0x4x/0x6x 绝对地址 / objdump 注释
            cat, ev = 'A_DATA_ADDR', first_diff(fo, fn)
        elif strip_tail_pad(fo) == strip_tail_pad(fn) and (
                elf64 and norm64(strip_tail_pad(fo)) == norm64(strip_tail_pad(fn)) or not elf64):
            # 仅尾部对齐填充差异（nm size 含函数间 pad）
            cat, ev = 'A_PADDING', 'len {} vs {}'.format(len(fo), len(fn))
        else:
            cat, ev = classify(fo, fn)
        rows.append((cat, s, e, f, oname, dname, str(osize), str(nsize), ev))
        stats[cat] += 1

    total = sum(stats.values())
    OUT_DIR.mkdir(parents=True, exist_ok=True)
    tsv = OUT_DIR / '{}.tsv'.format(tag)
    with tsv.open('w') as fh:
        fh.write('category\tstrict\text\tfull\tmangled\tdemangled\tsize_orig\tsize_new\tevidence\n')
        for r in rows:
            fh.write('\t'.join(x.replace('\t', ' ').replace('\n', ' ') for x in r) + '\n')
        for m, d, sz in missing:
            fh.write('\t'.join(['MISSING', '-', '-', '-', m, d.replace('\t', ' '),
                                str(sz), '-', 'ORIG 有 NEW 无']) + '\n')

    order = ['IDENTICAL', 'A_DATA_ADDR', 'A_ASSERT_LINE', 'A_PADDING', 'A_REGALLOC',
             'A_BLOCK_ORDER', 'R_CALLSET', 'R_CONST', 'R_OFFSET', 'R_CODEGEN',
             'NO_DISASM']
    lines = ['== {} =='.format(tag),
             'total functions (两侧都有/非豁免/去重后): {}'.format(total)]
    archived = sum(stats[k] for k in ('A_DATA_ADDR', 'A_ASSERT_LINE', 'A_PADDING',
                                      'A_REGALLOC', 'A_BLOCK_ORDER'))
    review = sum(stats[k] for k in ('R_CALLSET', 'R_CONST', 'R_OFFSET', 'R_CODEGEN'))
    for k in order:
        if stats.get(k):
            lines.append('  {:<14} {}'.format(k, stats[k]))
    lines.append('  archived(A_*)    {}'.format(archived))
    lines.append('  review(R_*)      {}'.format(review))
    lines.append('MISSING (ORIG 有 NEW 无, 非豁免): {}'.format(len(missing)))
    for m, d, sz in missing:
        lines.append('  MISSING\t{}\t{}\tsize={}'.format(m, d, sz))
    lines.append('tsv: {}'.format(tsv))
    summary = '\n'.join(lines)
    (OUT_DIR / '{}.summary.txt'.format(tag)).write_text(summary + '\n')
    print(summary)
    print()


def run_list(tag, orig_p, new_p, list_path):
    """对官方口径 worklist 中的函数做归档定性。

    list_path 每行: <mangled>\t<verdict>（verdict 可为 DIFF/NEAR/任意，仅用于备注；
    分类仍按 disposition 的 A_*/R_* 规则）。仅处理 ORIG 中存在的符号；
    不在 NEW 中的记 MISSING。输出格式与 run_pair 相同。
    """
    osyms, nsyms = nm_syms(orig_p), nm_syms(new_p)
    og_all, ng_all = pick_canon(osyms), pick_canon(nsyms)

    want = {}   # canon -> 原始 mangled
    with open(list_path) as fh:
        for ln in fh:
            ln = ln.strip()
            if not ln:
                continue
            parts = ln.split('\t')
            m = parts[0].strip()
            if not m:
                continue
            want.setdefault(canon(m), m)

    all_names = {og_all.get(c, (want.get(c), 0, 0))[0] for c in want if c in og_all}
    all_names |= {n for n, _, _ in ng_all.values() if canon(n) in want}
    dem = demangle_batch(sorted(all_names))

    def exempt(name):
        return is_exempt_symbol(name, dem.get(name, name))

    odis = build_lookup(load_disasm_cached(orig_p))
    ndis = build_lookup(load_disasm_cached(new_p))
    elf64 = is_elf64(orig_p) and is_elf64(new_p)

    rows = []
    missing = []
    stats = Counter()

    for c in sorted(want):
        if c not in og_all:
            continue
        oname, oaddr, osize = og_all[c]
        if exempt(oname):
            continue
        if c not in ng_all:
            missing.append((oname, dem.get(oname, oname), osize))
            continue
        nname, naddr, nsize = ng_all[c]
        oi = get_insns(oname, oaddr, *odis)
        ni = get_insns(nname, naddr, *ndis)
        dname = dem.get(oname, oname)
        if oi is None or ni is None:
            which = 'orig' if oi is None else 'new'
            rows.append(('NO_DISASM', '-', '-', '-', oname, dname,
                         str(osize), str(nsize), '{} 侧无反汇编片段'.format(which)))
            stats['NO_DISASM'] += 1
            continue
        s = verdict(oi, ni, norm_identical)
        e = verdict(oi, ni, norm_identical_ext)
        f = verdict(oi, ni, norm_identical_full)
        fo, fn = norm_identical_full(oi), norm_identical_full(ni)
        if s == 'IDENTICAL':
            cat, ev = 'IDENTICAL', ''
        elif e == 'IDENTICAL':
            cat, ev = 'A_DATA_ADDR', first_diff(norm_identical(oi), norm_identical(ni))
        elif f == 'IDENTICAL':
            cat, ev = 'A_ASSERT_LINE', first_diff(norm_identical_ext(oi), norm_identical_ext(ni))
        elif elf64 and norm64(fo) == norm64(fn):
            cat, ev = 'A_DATA_ADDR', first_diff(fo, fn)
        elif strip_tail_pad(fo) == strip_tail_pad(fn) and (
                elf64 and norm64(strip_tail_pad(fo)) == norm64(strip_tail_pad(fn)) or not elf64):
            cat, ev = 'A_PADDING', 'len {} vs {}'.format(len(fo), len(fn))
        else:
            cat, ev = classify(fo, fn)
        rows.append((cat, s, e, f, oname, dname, str(osize), str(nsize), ev))
        stats[cat] += 1

    total = sum(stats.values())
    OUT_DIR.mkdir(parents=True, exist_ok=True)
    tsv = OUT_DIR / '{}.tsv'.format(tag)
    with tsv.open('w') as fh:
        fh.write('category\tstrict\text\tfull\tmangled\tdemangled\tsize_orig\tsize_new\tevidence\n')
        for r in rows:
            fh.write('\t'.join(x.replace('\t', ' ').replace('\n', ' ') for x in r) + '\n')
        for m, d, sz in missing:
            fh.write('\t'.join(['MISSING', '-', '-', '-', m, d.replace('\t', ' '),
                                str(sz), '-', 'ORIG 有 NEW 无']) + '\n')

    order = ['IDENTICAL', 'A_DATA_ADDR', 'A_ASSERT_LINE', 'A_PADDING', 'A_REGALLOC',
             'A_BLOCK_ORDER', 'R_CALLSET', 'R_CONST', 'R_OFFSET', 'R_CODEGEN',
             'NO_DISASM']
    lines = ['== {} (official-caliber worklist) =='.format(tag),
             'worklist total (both sides/去重后): {}'.format(total)]
    archived = sum(stats[k] for k in ('A_DATA_ADDR', 'A_ASSERT_LINE', 'A_PADDING',
                                      'A_REGALLOC', 'A_BLOCK_ORDER'))
    review = sum(stats[k] for k in ('R_CALLSET', 'R_CONST', 'R_OFFSET', 'R_CODEGEN'))
    for k in order:
        if stats.get(k):
            lines.append('  {:<14} {}'.format(k, stats[k]))
    lines.append('  archived(A_*)    {}'.format(archived))
    lines.append('  review(R_*)      {}'.format(review))
    lines.append('MISSING (ORIG 有 NEW 无): {}'.format(len(missing)))
    for m, d, sz in missing:
        lines.append('  MISSING\t{}\t{}\tsize={}'.format(m, d, sz))
    lines.append('tsv: {}'.format(tsv))
    summary = '\n'.join(lines)
    (OUT_DIR / '{}.summary.txt'.format(tag)).write_text(summary + '\n')
    print(summary)
    print()


def main():
    args = sys.argv[1:]
    if not args:
        print(__doc__)
        sys.exit(2)
    if args[0] == '--pair':
        if len(args) != 4:
            print('用法: python3 disposition.py --pair <orig> <new> <tag>')
            sys.exit(2)
        run_pair(args[3], args[1], args[2])
        return
    if args[0] == '--list':
        if len(args) != 5:
            print('用法: python3 disposition.py --list <orig> <new> <worklist> <tag>')
            sys.exit(2)
        run_list(args[4], args[1], args[2], args[3])
        return
    for svc in args:
        if svc not in SVC:
            print('未知服务: {} （可选: {}）'.format(svc, ' '.join(sorted(SVC))))
            sys.exit(2)
    for svc in args:
        o_rel, n_rel = SVC[svc]
        run_pair(svc, NEOPLE / o_rel, DECOMP / 'build' / n_rel)


if __name__ == '__main__':
    main()
