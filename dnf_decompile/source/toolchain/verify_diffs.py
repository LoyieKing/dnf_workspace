#!/usr/bin/env python3
"""DIFF 函数自动分类：区分「良性差异」与「需人工核验的真实差异」。

对 compare_guild.py 列出的每个 DIFF 函数：
  1. 用严格口径归一化文本 + difflib 序列对齐逐行比较；
  2. 对每对差异行分类：
     - str    : `movl $0xADDR` 两侧 rodata 字符串内容一致（仅布局漂移）
     - off    : 分支目标 `<sym+0xA>` vs `<sym+0xB>`（代码形态导致的整体偏移）
     - codegen: 常见等价形态（sete/test/je vs jne、xor $1 vs cmp/sete、
                寄存器重排 mov/lea 互换等）
     - real   : 其余 —— 常量不同、字段偏移不同、调用目标不同等真实差异
  3. 输出每函数分类统计；real>0 的函数进入人工核验队列。

用法:
  python3 verify_diffs.py [符号名过滤正则] [--all]
"""
import re
import subprocess
import sys
import difflib
from collections import Counter
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
from compare_common import norm_identical, norm_line, load_disasm, disasm_slice

sys.path.insert(0, '/tmp')
import guildlib


def run(cmd):
    return subprocess.check_output(cmd, shell=True, text=True, stderr=subprocess.DEVNULL)


def disasm(bin_path, symbol):
    try:
        out = run("objdump -d --no-show-raw-insn --disassemble='{}' '{}'".format(symbol, bin_path))
    except Exception:
        return []
    insns = []
    for line in out.splitlines():
        m = re.match(r'^\s*([0-9a-fA-F]+):\s+(.*)$', line)
        if not m:
            continue
        txt = m.group(2).strip()
        if txt:
            insns.append((m.group(1), norm_line(txt)))
    return insns


# ---------------- 整二进制一次解析（避免逐函数 objdump） ----------------
_loaded = {}


def _load_bin(bin_path):
    """缓存 (指令文本 dict, 排序地址表, {符号: (addr,size,type)}, 相邻符号地址表)。"""
    if bin_path not in _loaded:
        sys.path.insert(0, '/tmp')
        import guildlib
        insn, addrs = load_disasm(bin_path)
        syms = guildlib.load_symbols(bin_path)
        _loaded[bin_path] = (insn, addrs, syms)
    return _loaded[bin_path]


def _func_slice(bin_path, symbol):
    """按「符号起始地址 → 下一符号起始地址」区间切片取指令文本列表。"""
    insn, addrs, syms = _load_bin(bin_path)
    info = syms.get(symbol)
    if not info:
        return None
    start, size, _ = info
    stop = start + size
    for name, (a, _sz, _t) in syms.items():
        if a > start and a < stop:
            stop = a
    return [norm_line(x) for x in disasm_slice((insn, addrs), start, stop)]


def disasm(bin_path, symbol):
    txt = _func_slice(bin_path, symbol)
    if txt is None:
        return []
    return [(hex(a), x) for a, x in zip(range(len(txt)), txt)]


# ---------------- rodata 字符串解析 ----------------
_rodata = {}
_symmaps = {}


def load_rodata(bin_path):
    if bin_path in _rodata:
        return _rodata[bin_path]
    base = vaddr = offset = size = None
    out = run("readelf -S '{}'".format(bin_path))
    for line in out.splitlines():
        m = re.search(r'\[\s*\d+\]\s+\.rodata\s+PROGBITS\s+([0-9a-f]+)\s+([0-9a-f]+)\s+([0-9a-f]+)',
                      line)
        if m:
            vaddr, offset, size = (int(m.group(i), 16) for i in (1, 2, 3))
            break
    if vaddr is None:
        _rodata[bin_path] = {}
        return {}
    with open(bin_path, 'rb') as f:
        f.seek(offset)
        data = f.read(size)
    _rodata[bin_path] = (vaddr, data)
    return _rodata[bin_path]


def rodata_str(bin_path, addr):
    tbl = load_rodata(bin_path)
    if not tbl:
        return None
    vaddr, data = tbl
    off = addr - vaddr
    if off < 0 or off >= len(data):
        return None
    end = data.find(b'\x00', off)
    if end < 0:
        end = len(data)
    raw = data[off:end]
    try:
        s = raw.decode('utf-8', 'replace')
    except Exception:
        s = repr(raw)
    # 可打印字符串才参与比较
    if len(s) < 2 or any(ord(c) < 32 and c not in ('\t', '\n') for c in s):
        return None
    return s


def sym_at(bin_path, addr):
    """addr 所属符号名（nm 地址区间）。"""
    if bin_path not in _symmaps:
        _, _, syms = _load_bin(bin_path)
        addrs = []
        names = {}
        for name, (a, _sz, typ) in syms.items():
            if typ in ('T', 't', 'W', 'w'):
                addrs.append(a)
                names[a] = name
        _symmaps[bin_path] = (sorted(addrs), names)
    addrs, names = _symmaps[bin_path]
    lo, hi = 0, len(addrs)
    while lo < hi:
        mid = (lo + hi) // 2
        if addrs[mid] <= addr:
            lo = mid + 1
        else:
            hi = mid
    return names.get(addrs[lo - 1]) if lo > 0 else None


# ---------------- 差异行分类 ----------------
_ADDR_RE = re.compile(r'\$0x([0-9a-f]+)')
_SYMOFF_RE = re.compile(r'<([^>]*)\+0x([0-9a-f]+)>$')
_RO_DISP_RE = re.compile(r'0x([0-9a-f]+)\(%[a-z]{2,3}\)')
_REG_RE = re.compile(r'%[a-z]{2,3}')
_STACK_DISP_RE = re.compile(r'(-?0x[0-9a-f]+)\(%ebp\)')


def _semantic_opnd(line):
    """判定一条指令的操作数里是否含「语义级」量（常量/字段偏移/全局地址）。
    栈槽（%ebp 偏移）与寄存器名视为布局噪声。"""
    # 先去掉 %ebp 栈槽位移
    x = _STACK_DISP_RE.sub('S', line)
    x = _REG_RE.sub('%R', x)
    return x


def classify_pair_semantic(o, n):
    """成对差异是否语义级：去掉栈槽/寄存器噪声后仍不同 -> True。"""
    return _semantic_opnd(o) != _semantic_opnd(n)


def classify_pair(o, n, bin_o, bin_n):
    """返回分类标签。o/n 为两条差异指令（未归一化的原始文本）。"""
    om = _ADDR_RE.findall(o)
    nm = _ADDR_RE.findall(n)
    if om and nm and len(om) == len(nm):
        same = True
        for a, b in zip(om, nm):
            sa, sb = rodata_str(bin_o, int(a, 16)), rodata_str(bin_n, int(b, 16))
            if sa is not None and sb is not None and sa == sb:
                continue
            # 同一符号地址（如 __cxa_throw 的析构指针）
            ya, yb = sym_at(bin_o, int(a, 16)), sym_at(bin_n, int(b, 16))
            if ya is not None and ya == yb:
                continue
            if sa is None and sb is None and ya is not None and yb is not None and ya == yb:
                continue
            same = False
            break
        if same:
            return 'sym'
    if om and nm and len(om) == len(nm):
        same = True
        for a, b in zip(om, nm):
            sa, sb = rodata_str(bin_o, int(a, 16)), rodata_str(bin_n, int(b, 16))
            if sa is None or sb is None or sa != sb:
                same = False
                break
        if same:
            return 'str'
    # 分支目标符号偏移：<sym+0xA> vs <sym+0xB>
    mo, mn = _SYMOFF_RE.search(o), _SYMOFF_RE.search(n)
    if mo and mn and mo.group(1) == mn.group(1):
        return 'off'
    # rodata 位移操作数（跳转表/表基址）
    mo, mn = _RO_DISP_RE.search(o), _RO_DISP_RE.search(n)
    if mo and mn:
        sa = rodata_str(bin_o, int(mo.group(1), 16))
        sb = rodata_str(bin_n, int(mn.group(1), 16))
        if sa is not None and sa == sb:
            return 'str'
    # 等价代码形态
    mo, mn = re.sub(r'\s+', ' ', o).strip(), re.sub(r'\s+', ' ', n).strip()
    codegen = (
        (mo.startswith('sete') and mn.startswith('jne')) or
        (mn.startswith('sete') and mo.startswith('jne')) or
        ('xor' in mo and '$0x1' in mo and 'sete' in mn) or
        ('xor' in mo and '$0x1' in mo and 'cmp' in mn and '$0x1' in mn) or
        (mo.startswith('test') and mn.startswith('cmp')) or
        (mn.startswith('test') and mo.startswith('cmp')) or
        # 仅寄存器名不同：-O0 寄存器分配噪声（常量/偏移/目标不变则视为等价）
        (mo.split()[0] == mn.split()[0] and
         _REG_RE.sub('%R', mo) == _REG_RE.sub('%R', mn))
    )
    if codegen:
        return 'codegen'
    return 'real'


# 单侧差异行的等价形态判定（代码生成形态噪声）
_CODEGEN_ONLY_RE = [
    re.compile(r'^(sete|setne|setz|setnz|seta|setae|setb|setbe|setg|setge|setl|setle)\s+%al$'),
    re.compile(r'^(test|cmp|cmpb|cmpw|cmpl|movzbl)\s+%?al'),
    re.compile(r'^mov\s+%al,-0x[0-9a-f]+\(%ebp\)$'),
    re.compile(r'^cmpb\s+\$0x0,-0x[0-9a-f]+\(%ebp\)$'),
    re.compile(r'^mov\s+%[a-z]{2,3},%[a-z]{2,3}$'),
    re.compile(r'^(mov|movl)\s+0x[0-9a-f]+\(%ebp\),%eax$'),
    re.compile(r'^mov\s+0x8\(%eax\),%[a-z]{2,3}$'),
    re.compile(r'^add\s+\$0x8,%eax$'),
    re.compile(r'^mov\s+\(%eax\),%[a-z]{2,3}$'),
    re.compile(r'^(xor|cmp)\s+\$0x1,%eax$'),
    re.compile(r'^(j[a-z]*|jmp)\s+<T> <[^>]*\+0x[0-9a-f]+>$'),
]


def classify_only(line):
    """单侧差异行：常见代码形态噪声 -> codegen，否则 real。"""
    for rx in _CODEGEN_ONLY_RE:
        if rx.match(line):
            return 'codegen'
    return 'real'


def classify_function(name):
    o_all = disasm(guildlib.ORIG, name)
    n_all = disasm(guildlib.NEW, name)
    if not o_all or not n_all:
        return None
    o_txt = [x[1] for x in o_all]
    n_txt = [x[1] for x in n_all]
    if o_txt == n_txt:
        return {'identical': True}
    sm = difflib.SequenceMatcher(a=o_txt, b=n_txt, autojunk=False)
    counts = Counter()
    real = []
    for tag, i1, i2, j1, j2 in sm.get_opcodes():
        if tag == 'equal':
            continue
        o = o_all[i1:i2]
        n = n_all[j1:j2]
        oi = ni = 0
        while oi < len(o) or ni < len(n):
            if oi < len(o) and ni < len(n) and \
                    o[oi][1].split()[0] == n[ni][1].split()[0]:
                cls = classify_pair(o[oi][1], n[ni][1], guildlib.ORIG, guildlib.NEW)
                counts[cls] += 1
                if cls == 'real':
                    real.append(('opnd', o[oi][1], n[ni][1]))
                oi += 1
                ni += 1
            elif oi < len(o) and (ni >= len(n) or
                                  o[oi][1].split()[0] != n[ni][1].split()[0]):
                cls = classify_only(o[oi][1])
                counts[cls] += 1
                if cls == 'real':
                    real.append(('only-o', o[oi][1], None))
                oi += 1
            elif ni < len(n):
                cls = classify_only(n[ni][1])
                counts[cls] += 1
                if cls == 'real':
                    real.append(('only-n', None, n[ni][1]))
                ni += 1
            else:
                break
    # 额外统计「同助记符成对差异」数量：这类差异可直接逐条对照，
    # 比单侧增减行更能暴露真实语义偏差。
    pair_real = 0
    for tag, i1, i2, j1, j2 in sm.get_opcodes():
        if tag == 'equal':
            continue
        o = o_all[i1:i2]
        n = n_all[j1:j2]
        oi = ni = 0
        while oi < len(o) and ni < len(n) and \
                o[oi][1].split()[0] == n[ni][1].split()[0]:
            cls = classify_pair(o[oi][1], n[ni][1], guildlib.ORIG, guildlib.NEW)
            if cls == 'real':
                pair_real += 1
            oi += 1
            ni += 1
    return {'identical': False, 'counts': dict(counts), 'real': real[:10],
            'pair_real': pair_real}


def main():
    pat = None
    for a in sys.argv[1:]:
        if a != '--all':
            pat = a
    # 取 compare_guild 的 DIFF 集合：应用层、双端都有代码、非 IDENTICAL
    sys.path.insert(0, str(Path(__file__).resolve().parent))
    from compare_guild import is_app, dedup_aliases, norm_sym
    orig = guildlib.load_symbols(guildlib.ORIG)
    new = guildlib.load_symbols(guildlib.NEW)
    on = dedup_aliases(orig)
    nn = dedup_aliases(new)
    newset = nn | set(norm_sym(k) for k in nn)
    names = [k for k in on if is_app(k)]
    if pat:
        rx = re.compile(pat)
        names = [k for k in names if rx.search(k)]
    summary = Counter()
    real_list = []
    for i, name in enumerate(sorted(names)):
        if name not in newset:
            continue
        r = classify_function(name)
        if r is None:
            continue
        if r['identical']:
            summary['IDENTICAL'] += 1
            continue
        summary['DIFF_BENIGN'] += 1
        counts = r['counts']
        if counts.get('real', 0):
            summary['DIFF_REAL'] += 1
            real_list.append((name, counts, r['pair_real']))
    print('total with both sides:',
          summary['IDENTICAL'] + summary['DIFF_BENIGN'])
    print('summary:', dict(summary))
    print('--- functions with real diffs (review queue) ---')
    for name, counts, pair_real in sorted(real_list, key=lambda x: -x[2]):
        print('%-65s %s' % (name[:65], dict(counts)))


if __name__ == '__main__':
    main()
