#!/usr/bin/env python3
"""ELF 数据地址 -> 内容/符号 解析，用于汇编伪代码化与 identical 判定。

规则（2026-08-11 用户口径）：
  - 指令中的绝对地址如果落在字符串区（.rodata/.data 等）且指向一个字符串，
    伪代码化时替换为 "字符串内容"；
  - 如果落在已命名数据符号（全局变量/数组/常量）上，替换为 &符号名；
  - 两侧伪代码化后的指令序列相等 => 视为完全相同（IDENTICAL_AE），
    即“地址不同但指向的字符串/全局变量相同”。

映射按二进制 mtime+size 缓存到 /tmp。
"""
import os
import bisect
import pickle
import re
import subprocess

_CACHE_DIR = '/tmp/df_report_resolve'
_VERSION = 16
_SECTION_RE = re.compile(
    r'^\s*\[\s*\d+\]\s+(\S+)\s+(\S+)\s+([0-9a-fA-F]+)\s+([0-9a-fA-F]+)\s+'
    r'([0-9a-fA-F]+)')
_HEX_RE = re.compile(r'0x([0-9a-fA-F]+)')
_MIN_IMAGE_ADDR = 0x10000  # ELF 映像地址下限，避免替换栈偏移/小常量

STRING_SECTIONS = ('.rodata', '.rodata.str1.1', '.rodata.str1.2',
                   '.rodata.str1.4', '.rodata.str1.8', '.data.rel.ro',
                   '.data', '.rdata')


def _run(cmd):
    raw = subprocess.check_output(cmd, stderr=subprocess.DEVNULL)
    return raw.decode('utf-8', errors='replace')


def _section_addrs(bin_path):
    """{section_name: (vaddr, file_offset, size, type)}（全部有地址的区段）。"""
    out = _run(['readelf', '-SW', str(bin_path)])
    secs = {}
    for line in out.splitlines():
        m = _SECTION_RE.match(line)
        if m:
            name, stype = m.group(1), m.group(2)
            vaddr = int(m.group(3), 16)
            if vaddr != 0:
                secs[name] = (vaddr, int(m.group(4), 16),
                              int(m.group(5), 16), stype)
    return secs


def _strings(bin_path):
    """{abs_addr: (text, raw_len)}：从 ELF 字节精确解析 NUL 分隔的可打印字符串。

    直接用 readelf -p 会把“二进制数据 + 紧随其后的字符串”合并成一条，
    导致真正的字符串起始地址丢失（如 __FUNCTION__）。改为逐字节解析：
    运行起点必须是可打印 ASCII，遇到 NUL 结束；TAB/LF/CR 保留并转义。
    """
    secs = _section_addrs(bin_path)
    out = {}
    with open(bin_path, 'rb') as fh:
        data = fh.read()
    for sec, (base, off, size, stype) in secs.items():
        if stype == 'NOBITS':
            continue  # .bss 等无文件字节，不能按字节解析字符串
        blob = data[off:off + size]
        i = 0
        n = len(blob)
        while i < n:
            b = blob[i]
            if 0x20 <= b <= 0x7e:  # 可打印 ASCII，作为运行起点
                j = i
                while j < n:
                    c = blob[j]
                    if 0x20 <= c <= 0x7e or 0x80 <= c <= 0xff or \
                            c in (0x09, 0x0a, 0x0d):
                        j += 1
                    else:
                        break
                run = blob[i:j]
                # 真 C 字符串必须紧跟 NUL；指针/表数据里的“可打印片段”后面不是
                # NUL（如 0xb9），不能误判为字符串（2026-08-11 用户口径回归）
                if len(run) >= 1 and j < n and blob[j] == 0:
                    text = run.decode('cp949', errors='replace') \
                        .replace('\\', '\\\\') \
                        .replace('\t', '\\t').replace('\n', '\\n') \
                        .replace('\r', '\\r').replace('"', '\\"')
                    out[base + i] = (text, len(run))
                i = j + 1 if j < n else j
            else:
                i += 1
    return out


def _data_symbols(bin_path):
    """{abs_addr: (name, size)}：已命名数据符号（D/B/R/V）+ 函数符号（T/t/W/w）。

    函数符号也登记：指令中出现的函数地址立即数（如取函数指针）按 &函数名 解析。
    """
    out = {}
    nm = _run(['nm', '-S', '--defined-only', str(bin_path)])
    for line in nm.splitlines():
        p = line.split(None, 3)
        # size=0 的符号（如 __dso_handle）nm -S 不输出 size 列，行为 3 列：
        # "addr type name"；有 size 时为 "addr size type name"。
        if len(p) == 3:
            try:
                # 第二列若是 1 字符类型字母且第三列非十六进制数 => 3 列格式
                if len(p[1]) == 1:
                    addr, typ, name = p
                    if typ in 'DdBbRrVvTtWwu':
                        try:
                            out[int(addr, 16)] = (name.split('@')[0], 0)
                        except ValueError:
                            pass
                        continue
            except ValueError:
                pass
        # 'u' = GNU unique 全局对象（模板静态成员等；ORIG 侧常为 V/v）
        if len(p) < 4 or p[2] not in 'DdBbRrVvTtWwu':
            continue
        try:
            # 符号版本后缀（@VER / @@VER，如 _ZTIPKc@@CXXABI_1.3）属于链接布局产物，
            # 归一化为基础符号名（2026-08-11 用户口径：@/@@ 差异豁免）
            out[int(p[0], 16)] = (p[3].split('@')[0], int(p[1], 16))
        except ValueError:
            continue
    return out


def build_addr_map(bin_path):
    """(exact, ranges) 地址解析表。

    exact : {addr: ('str', text) | ('sym', name)}，字符串优先于同名数据符号
    ranges: [(start, size, value, kind), ...] 按 start 排序，
            用于解析落在符号/字符串内部的引用（如 vptr = _ZTV+8）。
    """
    key = (os.stat(bin_path).st_mtime_ns, os.stat(bin_path).st_size)
    os.makedirs(_CACHE_DIR, exist_ok=True)
    cache = os.path.join(_CACHE_DIR,
                         re.sub(r'[^A-Za-z0-9]', '_', str(bin_path)) + '.pkl')
    try:
        with open(cache, 'rb') as f:
            saved, ver, m = pickle.load(f)
        if saved == key and ver == _VERSION:
            return m
    except Exception:
        pass
    syms = _data_symbols(bin_path)
    strs = _strings(bin_path)
    m = {}
    ranges = []
    for a, (n, size) in syms.items():
        m[a] = ('sym', n)
        ranges.append((a, size, n, 'sym'))
    sym_ranges = [(a, size) for a, (n, size) in syms.items() if size > 0]
    for a, (t, raw_len) in strs.items():
        # 命名数据符号优先于字符串：同一地址若已是符号（如 __dso_handle 恰在
        # .rodata 起始处、其后紧跟文本），应解析为 &符号名，不得被字符串遮蔽
        # （2026-08-11：全局变量地址一律伪代码化为 &符号名）。
        if a in m or any(s <= a < s + sz for s, sz in sym_ranges):
            continue
        m[a] = ('str', t)
        if raw_len >= 2:
            ranges.append((a, raw_len, t, 'str'))
    # 排序：start 升序；同 start 时 sym 优先于 str（bisect 取最后命中）
    ranges.sort(key=lambda r: (r[0], {'sec': 0, 'sym': 1, 'str': 2}[r[3]], r[1]))
    # 匿名数据/文本区段兜底：&.rodata+0xN / &.text+0xN —— 区段基址随链接布局漂移，
    # 若两侧相对偏移一致则等价（2026-08-11 用户口径：匿名表等无符号数据）
    secs = []
    for s, (base, foff, size, stype) in _section_addrs(bin_path).items():
        secs.append((base, size, s, foff, stype))
    secs.sort()
    with open(bin_path, 'rb') as fh:
        blob = fh.read()
    try:
        with open(cache, 'wb') as f:
            pickle.dump((key, _VERSION, (m, ranges, secs, blob)), f)
    except Exception:
        pass
    return m, ranges, secs, blob


def pseudo_lines(insns, addr_info):
    """指令序列伪代码化：数据地址 -> 字符串内容 / &符号名。

    输入应已做过 norm_identical 归一化（分支/调用目标 -> <T>），
    因此剩下的 0x 地址均为数据引用。
    """
    addr_map, ranges, secs, blob = addr_info
    psize = 8 if (len(blob) > 4 and blob[4] == 2) else 4

    def resolve(a, depth=0):
        """把数据地址解析为伪代码；None 表示无法解析。"""
        if a < _MIN_IMAGE_ADDR:
            return None
        hit = addr_map.get(a)
        if hit is not None:
            return '"{}"'.format(hit[1]) if hit[0] == 'str' else '&{}'.format(hit[1])
        i = bisect.bisect_right(ranges, (a, 1 << 62, '', '')) - 1
        # 符号优先于字符串（2026-08-11：全局变量一律解析为 &符号名；字符串
        # 只兜底匿名地址）。两趟扫描：先符号，后字符串。
        for kinds in (('sym',), ('str',)):
            for k in range(i, max(-1, i - 64), -1):
                start, size, val, kind = ranges[k]
                if kind not in kinds:
                    continue
                if size > 0 and start <= a < start + size:
                    off = a - start
                    if kind == 'str':
                        return '"{}"'.format(val[off:] if off else val)
                    return '&{}+0x{:x}'.format(val, off)
                if size == 0 and start == a:
                    return '&{}'.format(val)
                if start < a:
                    break  # 已越过当前类的更早区间
        j = bisect.bisect_right(secs, (a, 1 << 62, '')) - 1
        if j >= 0:
            start, size, name, foff, stype = secs[j]
            if start <= a < start + size:
                off = a - start
                if stype == 'NOBITS':
                    # .bss/.got 等无文件字节：直接按区段相对偏移（布局等价即相同）
                    return '&{}+0x{:x}'.format(name, off)
                snap = blob[foff + off:foff + off + 64]
                if snap and depth < 3:
                    import hashlib
                    items = []
                    for k in range(0, len(snap) - psize + 1, psize):
                        v = int.from_bytes(snap[k:k + psize], 'little')
                        if v >= _MIN_IMAGE_ADDR and v < 1 << (psize * 8):
                            r = resolve(v, depth + 1)
                            items.append(r if r else '0x{:x}'.format(v))
                        else:
                            items.append(snap[k:k + psize].hex())
                    h = hashlib.sha1('|'.join(items).encode()).hexdigest()[:8]
                    return '&data#{}({})'.format(h, name)
                return '&{}+0x{:x}'.format(name, off)
        return None

    out = []
    for line in insns:
        # 指令注解里的 @plt / @版本 后缀（call <foo@plt> 等）归一化剥离
        line = re.sub(r'@[A-Za-z0-9_.]+', '', line)

        def repl(m):
            a = int(m.group(1), 16)
            r = resolve(a)
            return r if r is not None else m.group(0)
        out.append(_HEX_RE.sub(repl, line))
    return out


def trim_trailing_nops(lines):
    """裁掉尾部 nop（函数对齐填充，布局产物，2026-08-11 用户口径豁免）。"""
    while lines and lines[-1].strip() == 'nop':
        lines = lines[:-1]
    return lines


def norm_assert_lines(lines):
    """__assert_fail 行号实参归一化（项目 norm_identical_full 同款元信息豁免）：
    `movl $line,0x8(%esp)` 且随后调用 __assert_fail 时，行号 -> $L。"""
    out = []
    i = 0
    n = len(lines)
    while i < n:
        ln = lines[i]
        m = re.match(r'^movl\s+\$0x[0-9a-f]+,0x8\(%esp\)$', ln)
        if m:
            hit = False
            for j in range(i + 1, min(i + 5, n)):
                if '__assert_fail' in lines[j]:
                    out.append('movl $L,0x8(%esp)')
                    hit = True
                    break
                if re.match(r'call\s', lines[j]):
                    break
            if not hit:
                out.append(ln)
        else:
            out.append(ln)
        i += 1
    return out
