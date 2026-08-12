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
_VERSION = 26
_SECTION_RE = re.compile(
    r'^\s*\[\s*\d+\]\s+(\S+)\s+(\S+)\s+([0-9a-fA-F]+)\s+([0-9a-fA-F]+)\s+'
    r'([0-9a-fA-F]+)')
_HEX_RE = re.compile(r'0x([0-9a-fA-F]+)')
_MIN_IMAGE_ADDR = 0x10000  # ELF 映像地址下限，避免替换栈偏移/小常量

STRING_SECTIONS = ('.rodata', '.rodata.str1.1', '.rodata.str1.2',
                   '.rodata.str1.4', '.rodata.str1.8', '.data.rel.ro',
                   '.data', '.rdata')


def _decode_run(raw):
    """原始字符串运行字节 → 显示文本（cp949 + 转义，与登记口径一致）。"""
    return raw.decode('cp949', errors='replace') \
        .replace('\\', '\\\\') \
        .replace('\t', '\\t').replace('\n', '\\n') \
        .replace('\r', '\\r').replace('"', '\\"')


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

    2026-08-11 修正：运行起点扩展为「可打印 ASCII / TAB / LF / CR / 高位字节」。
    原实现只允许 0x20-0x7e 作起点，导致两类真实字符串起点丢失：
      - 以换行/制表开头的字符串（如 StatisticsCollector::StData::toString
        的 "\n" 前缀串，ORIG 引用 0x815ce26，是 "\n\0"）；
      - 纯韩文（EUC-KR）字符串（首个字节 ≥0x80，如 IState 的
        "╜¡╞≤...┤┘." 系列，ORIG 引用 0x815e3b/0x815e31 等）。
    这两类串此前落到「匿名数据 64 字节窗口哈希」兜底，两侧内容相同但
    窗口内相邻布局不同 → 哈希不同 → 误判 NEAR/DIFF。起点放宽后按字符串
    内容解析，符合 2026-08-11「地址不同但指向内容相同视为等价」口径。
    """
    secs = _section_addrs(bin_path)
    out = {}
    with open(bin_path, 'rb') as fh:
        data = fh.read()
    lo, hi = _image_range(secs)
    for sec, (base, off, size, stype) in secs.items():
        if stype == 'NOBITS':
            continue  # .bss 等无文件字节，不能按字节解析字符串
        # 代码段绝不登记字符串：指令字节可能恰好构成「可打印 NUL 结尾」片段
        # （如 stun signal_handler 跳转表项 0x402608 处的 8b 75 fc bf ...），
        # 之前靠 in_sym_range 遮蔽，2026-08-12 relay 放宽符号遮蔽后 .text 内
        # 片段被登记 → 跳转表项解析成字符串而非 &fn+off → 伪 NEAR。
        if (sec == '.text' or sec.startswith('.text')
                or sec in ('.init', '.fini', '.plt')):
            continue
        blob = data[off:off + size]
        i = 0
        n = len(blob)
        while i < n:
            b = blob[i]
            if 0x20 <= b <= 0x7e or b >= 0x80 or b in (0x09, 0x0a, 0x0d):
                # 运行起点：可打印 ASCII / 高位字节（韩文 EUC-KR 等）/
                # TAB/LF/CR（"\n"-前缀串）
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
                    # 跳转表/指针表防误判：run 前 4/8 字节按小端解释落在 ELF
                    # 映像内（0x40xxxx 等代码/数据地址）时视为指针数据而非字符串
                    # （2026-08-11：signal_handler 跳转表 "@&@" 案例）。
                    if _looks_like_pointer(run, lo, hi):
                        i = j + 1
                        continue
                    text = _decode_run(run)
                    out[base + i] = (text, len(run), bytes(run))
                i = j + 1 if j < n else j
            elif b == 0x00:
                # NUL 字节登记为空字符串 ""（仅精确命中时解析）。空串字面量
                # （如 CServerXml::getAuctionString 的 std::string("")）在二进制
                # 中落在前一字符串末尾的 NUL/填充处，两侧地址不同但内容同为 ""；
                # 此前落入匿名数据窗口哈希 → 相邻布局不同导致误判。
                out[base + i] = ('', 0, b'')
                i += 1
            else:
                i += 1
    return out


def _image_range(secs):
    """ELF 映像地址范围 [min vaddr, max vaddr+size)。"""
    addrs = [(base, base + size) for base, _off, size, _t in secs.values()]
    if not addrs:
        return 0, 0
    return min(a for a, _b in addrs), max(b for _a, b in addrs)


def _looks_like_pointer(run, lo, hi):
    """run 前 8/4 字节小端解释落在映像内 => 指针数据（非字符串）。"""
    if lo >= hi:
        return False
    b = run.ljust(8, b'\x00')[:8]
    v64 = int.from_bytes(b, 'little')
    v32 = int.from_bytes(b[:4], 'little')
    return (lo <= v64 < hi) or (lo <= v32 < hi)


_SECTION_MARKERS = frozenset((
    '__bss_start', '__data_start', '_edata', '_end',
    '__init_array_start', '__init_array_end',
    '__fini_array_start', '__fini_array_end',
))


def _data_symbols(bin_path):
    """{abs_addr: (name, size)}：已命名数据符号（D/B/R/V）+ 函数符号（T/t/W/w）。

    函数符号也登记：指令中出现的函数地址立即数（如取函数指针）按 &函数名 解析。
    """
    out = {}
    nm = _run(['nm', '-S', '--defined-only', str(bin_path)])

    def better(cand, cur):
        """同地址多符号时，优先有 size、非区段标记符号（_ZSt4clog vs __bss_start）。"""
        if cur is None:
            return True

        def score(c):
            _n, _s = c
            return (1 if _s > 0 else 0, 0 if _n in _SECTION_MARKERS else 1)
        return score(cand) > score(cur)

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
                            a = int(addr, 16)
                            cand = (name.split('@')[0], 0)
                            if better(cand, out.get(a)):
                                out[a] = cand
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
            a = int(p[0], 16)
            cand = (p[3].split('@')[0], int(p[1], 16))
            if better(cand, out.get(a)):
                out[a] = cand
        except ValueError:
            continue
    return out


def _plt_syms(bin_path, secs):
    """ELF64：.plt 表项地址 -> 动态符号名。

    非 PIE 可执行里对动态函数取地址（&std::endl 等）时，链接器把引用解析为
    该函数的 PLT 项地址；两侧 PLT 项地址随布局漂移，.plt 字节哈希无法对齐。
    按 .rela.plt JUMP_SLOT 顺序（与 .plt 表项一一对应）映射为符号名。
    """
    plt = secs.get('.plt')
    if not plt:
        return {}
    base, _off, size, _t = plt
    n = (size - 16) // 16
    if n <= 0:
        return {}
    out = {}
    rel = _run(['readelf', '-rW', str(bin_path)])
    names = []
    for line in rel.splitlines():
        if 'R_X86_64_JUMP_SLOT' in line:
            parts = line.split()
            if parts:
                names.append(parts[-1].split('@')[0])
    for i in range(min(n, len(names))):
        out[base + 16 + 16 * i] = ('sym', names[i])
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
    secs0 = _section_addrs(bin_path)
    syms = _data_symbols(bin_path)
    strs = _strings(bin_path)
    m = _plt_syms(bin_path, secs0)
    ranges = []
    for a, (n, size) in syms.items():
        m[a] = ('sym', n)
        ranges.append((a, size, n, 'sym'))
    sym_ranges = sorted((a, size) for a, (n, size) in syms.items() if size > 0)
    sym_starts = [a for a, _ in sym_ranges]

    def in_sym_range(a):
        """a 是否落在任一非零尺寸数据符号区间内部（不含起点本身）。"""
        i = bisect.bisect_right(sym_starts, a) - 1
        return i >= 0 and sym_ranges[i][0] < a < sym_ranges[i][0] + sym_ranges[i][1]

    for a, (t, raw_len, raw_run) in strs.items():
        # 命名数据符号优先于字符串：同一地址若已是符号（如 __dso_handle 恰在
        # .rodata 起始处、其后紧跟文本），应解析为 &符号名，不得被字符串遮蔽
        # （2026-08-11：全局变量地址一律伪代码化为 &符号名）。
        # 注意：符号只遮蔽「精确起始地址」（a in m）；落在符号区间内部
        # （如 __stl_prime_list 尾部紧邻的字符串池，2026-08-12 relay：
        # "title" 与 Thread 析构消息因合并运行起点落入 __stl_prime_list
        # 区间被整条遮蔽 → 引用落入匿名数据哈希 → 同内容字符串误判 NEAR）
        # 的字符串必须登记：符号区间覆盖的是表数据本身，内部偏移引用
        # 应按字符串内容解析；同址时 ranges 排序保证 sym 优先于 str。
        if a in m:
            continue
        # NUL 空串兜底（raw_len==0）不得遮蔽符号区间内部地址：vtable 等数据
        # 符号内部的 0x00 字节会被 _strings 登记为空串，使 vtable+8 之类引用
        # 解析成 "" 而非 &符号+0x8（2026-08-12 bridge TMsgCell 回归）。
        # 非空字符串（relay title/Thread 消息等合并运行）仍允许登记——
        # 解析“引用落在区间内部”时 nz_str 会按原始字节切片命中。
        if raw_len == 0 and in_sym_range(a):
            continue
        m[a] = ('str', t)
        if raw_len >= 2:
            # 保存原始字节（第 5 元）：解码文本是字符序列，多字节字符（EUC-KR
            # 韩文）下字符数 != 字节数，解析「区间内部偏移」必须按字节切片原始
            # 运行再解码（2026-08-12 relay："title"/Thread 析构消息前紧邻韩文，
            # 合并运行的偏移按 val[off:] 错位 1 个字符 → 伪 NEAR）。
            ranges.append((a, raw_len, t, 'str', raw_run))
    # 排序：start 升序；同 start 时 sym 优先于 str（bisect 取最后命中）
    ranges.sort(key=lambda r: (r[0], {'sec': 0, 'sym': 1, 'str': 2}[r[3]], r[1]))
    # 非零尺寸区间索引（按 kind 分组，start 升序）：解析“引用落在区间内部”
    # 时用二分 + 回退，避免被成千上万个零尺寸空串区间挤出 64 项回退窗口
    # （2026-08-11 relay：Thread 字符串紧跟 __stl_prime_list 结尾时，
    # 0x8071790 引用此前落入匿名数据哈希，导致同内容字符串误判 DIFF）。
    nz_ranges = sorted((r for r in ranges if r[1] > 0),
                       key=lambda r: (r[0], r[1]))
    nz_sym = [r for r in nz_ranges if r[3] == 'sym']
    nz_str = [r for r in nz_ranges if r[3] == 'str']
    # 匿名数据/文本区段兜底：&.rodata+0xN / &.text+0xN —— 区段基址随链接布局漂移，
    # 若两侧相对偏移一致则等价（2026-08-11 用户口径：匿名表等无符号数据）
    secs = []
    for s, (base, foff, size, stype) in secs0.items():
        secs.append((base, size, s, foff, stype))
    secs.sort()
    with open(bin_path, 'rb') as fh:
        blob = fh.read()
    try:
        with open(cache, 'wb') as f:
            pickle.dump((key, _VERSION, (m, ranges, secs, blob, (nz_sym, nz_str))), f)
    except Exception:
        pass
    return m, ranges, secs, blob, (nz_sym, nz_str)


def _finite_double_at(a, secs, blob):
    """a 是否指向 8 字节对齐、内容为正常有限 double 的常量（fldl 常量池）。

    两侧 rodata 布局不同导致同一个 double 常量落在不同地址，且一侧被字符串
    解析吞并（如 1.05 常量字节 >=0x80 被按 EUC-KR 字符串登记）时，按 8 字节
    值哈希归一化（2026-08-12 point Bidding；与 2026-08-11 空串 / 2026-08-12
    可打印字节串兜底的 8 字节对齐门槛同源）。调用方负责已排除 is_imm 指针值。
    """
    j = bisect.bisect_right(secs, (a, 1 << 62, '')) - 1
    if j < 0:
        return False
    _st, _sz, _nm, _fo, _ty = secs[j]
    if _ty == 'NOBITS' or a % 8 != 0 or not (_st <= a and a + 8 <= _st + _sz):
        return False
    raw = blob[_fo + (a - _st):_fo + (a - _st) + 8]
    if len(raw) != 8:
        return False
    u = int.from_bytes(raw, 'little')
    return 0 < ((u >> 52) & 0x7ff) < 0x7ff


def pseudo_lines(insns, addr_info, fn_base=None):
    """指令序列伪代码化：数据地址 -> 字符串内容 / &符号名。

    输入应已做过 norm_identical 归一化（分支/调用目标 -> <T>），
    因此剩下的 0x 地址均为数据引用。
    """
    addr_map, ranges, secs, blob = addr_info[:4]
    nz_sym, nz_str = addr_info[4] if len(addr_info) > 4 else (None, None)
    psize = 8 if (len(blob) > 4 and blob[4] == 2) else 4
    # 与 _strings 相同的「指针数据非字符串」判定（跳转表/函数指针表）：
    # 数据起点前 4/8 字节按小端解释落在 ELF 映像内 => 指针数据，不得按
    # 字符串字面量解析（2026-08-11 signal_handler 跳转表 "@&@" 案例）。
    img_lo = secs[0][0] if secs else 0
    img_hi = max(s + sz for s, sz, _n, _fo, _t in secs) if secs else 0
    # 当前函数入口地址：匿名跳转表/函数指针表内的代码指针按「函数相对偏移」
    # 归一化（同一函数两侧布局一致 => 相对偏移一致），而不是 .text 区段相对
    # 偏移（函数在 .text 内位置随链接布局漂移，2026-08-11 point 回归）。
    # 调用方（gen_function_md / gen_report_manifest）已知函数入口地址，
    # 显式传入；历史调用不传时保持 .text 区段相对偏移的旧行为。

    def resolve(a, depth=0, is_imm=False):
        """把数据地址解析为伪代码；None 表示无法解析。"""
        if a < _MIN_IMAGE_ADDR:
            return None
        hit = addr_map.get(a)
        if hit is not None:
            if hit[0] == 'str' and hit[1] == '':
                # 空串登记覆盖了 .rodata 每个 NUL 字节；fldl 常量池起始地址
                # 首字节为 0x00 时会被误解析为 ""（两侧相邻字节布局不同导致
                # 一侧命中空串、一侧落到常量哈希 → 误判 DIFF）。8 字节对齐且
                # 内容为正常有限 double 时按常量池哈希解析（2026-08-11 point）。
                jj = bisect.bisect_right(secs, (a, 1 << 62, '')) - 1
                if jj >= 0:
                    _st, _sz, _nm, _fo, _ty = secs[jj]
                    # 真正的 double 常量 8 字节对齐；NUL 空串可落在任意地址
                    # （如 getCharacterName 失败分支返回的 "" 指针 0x80cc741
                    # 未对齐，其后紧跟 "%llu:..."，双精度解释恰好呈有限指数 →
                    # 误判常量池哈希 vs 空串 → 两侧窗口不同 → 伪 DIFF）。
                    # 2026-08-11 auction 回归修正：加 8 字节对齐门槛。
                    if (not is_imm and _ty != 'NOBITS' and a % 8 == 0
                            and _st <= a and a + 8 <= _st + _sz):
                        raw = blob[_fo + (a - _st):_fo + (a - _st) + 8]
                        if len(raw) == 8:
                            u = int.from_bytes(raw, 'little')
                            exp = (u >> 52) & 0x7ff
                            if 0 < exp < 0x7ff:
                                hit = None
            if hit is not None:
                # 2026-08-12 point Bidding：非空串命中（double 常量被字符串解析
                # 吞并成 "蠱儆儆�?" 等）同样按 8 字节值哈希，避免两侧一侧命中
                # 字符串、另一侧命中常量池 → 伪 NEAR。is_imm 指针值除外。
                if hit[0] == 'str' and not is_imm \
                        and _finite_double_at(a, secs, blob):
                    hit = None
            if hit is not None and hit[0] == 'str' and not is_imm:
                # 符号区间内部的数据读取优先按符号解析：_strings 会把表数据中
                # 恰好可打印的字节（如 tRealConfigE+0x18 的值 0x3c='<'）登记成
                # 字符串，而相邻布局不同导致两侧一侧命中字符串、另一侧被
                # double 检测吞掉走符号 → 伪 NEAR（2026-08-12 monitor
                # village_attacked::SetRealConfig）。数据表成员的读取指令是
                # 非立即数内存引用，应解析为 &符号+off；字符串字面量作参数
                # 是立即数（is_imm=True，如 relay title），不受影响。
                if nz_sym is not None:
                    jj = bisect.bisect_right([r[0] for r in nz_sym], a) - 1
                    if jj >= 0:
                        st0, sz0, _val0, _k0 = nz_sym[jj][:4]
                        if sz0 > 0 and st0 < a < st0 + sz0:
                            hit = None
            if hit is not None:
                return '"{}"'.format(hit[1]) if hit[0] == 'str' else '&{}'.format(hit[1])
        # 引用地址本身是「可打印 NUL 结尾字符串」起点但未登记（如紧跟数据符号
        # 结尾的字符串：relay 的 Thread 串紧邻 __stl_prime_list 之后，串起点
        # 因 in_sym_range 未登记）→ 按字符串内容解析，两侧内容相同即等价
        # （2026-08-11 relay：此前落入匿名数据窗口哈希 → 同内容误判 DIFF）。
        j = bisect.bisect_right(secs, (a, 1 << 62, '', '')) - 1
        if j >= 0:
            _st, _sz, _nm, _fo, _ty = secs[j]
            if _ty != 'NOBITS' and _st <= a < _st + _sz:
                run = blob[_fo + (a - _st):_fo + _sz]
                k = 0
                while k < len(run) and (
                        0x20 <= run[k] <= 0x7e or 0x80 <= run[k] <= 0xff
                        or run[k] in (0x09, 0x0a, 0x0d)):
                    k += 1
                # 2026-08-12 auction makeSuccessfulBid：8 字节对齐且内容为有限
                # double 的 rodata 地址不得按可打印字节串兜底——fldl 常量池
                # 1.6/1.7/1.8 等首字节 >=0x80 时，字符串窗口会卷进相邻常量池
                # （两侧合并布局不同 → 字符串长度不同 → 伪 DIFF），实际 8 字节
                # double 值一致。跳过字符串解释后落到下方按 8 字节值哈希。
                # （与上方 addr_map 空串分支的 8 字节对齐门槛同源。）
                is_finite_double = (
                    a % 8 == 0 and len(run) >= 8
                    and 0 < ((int.from_bytes(run[:8], 'little') >> 52) & 0x7ff)
                    < 0x7ff)
                if (not is_finite_double and k >= 2 and k < len(run)
                        and run[k] == 0):
                    # 两类防误判（2026-08-11 signal_handler 跳转表回归）：
                    # 1) 代码段（.text 等）内的地址不按字符串兜底——跳转表项指向
                    #    本函数代码时，指令字节（如 8b 75 fc ...）可能恰好构成
                    #    可打印 NUL 结尾片段，两侧解析出的“字符串”随布局漂移
                    #    → 伪 NEAR。代码地址一律交给下方 &符号名/&fn+偏移。
                    # 2) run 前 4/8 字节按小端解释落在 ELF 映像内时视为指针
                    #    数据而非字符串（与 _strings 登记口径一致）——匿名
                    #    跳转表基址把表项低字节当字符串字面量，两侧目标地址
                    #    不同 → 伪 NEAR；跳过后落到匿名指针表哈希（逐项按
                    #    函数相对偏移归一化，两侧等价）。
                    code_sec = (_nm == '.text' or _nm.startswith('.text')
                                or _nm in ('.init', '.fini', '.plt'))
                    if not code_sec and not _looks_like_pointer(run, img_lo, img_hi):
                        return '"{}"'.format(_decode_run(run[:k]))
        # 符号优先于字符串（2026-08-11：全局变量一律解析为 &符号名；字符串
        # 只兜底匿名地址）。两趟扫描：先符号，后字符串。
        for nz, kinds in ((nz_sym, ('sym',)), (nz_str, ('str',))):
            if not nz:
                continue
            j = bisect.bisect_right([r[0] for r in nz], a) - 1
            guard = 0
            while j >= 0 and guard < 1024:
                start, size, val, kind = nz[j][:4]
                if kind not in kinds:
                    j -= 1
                    guard += 1
                    continue
                if size > 0 and start <= a < start + size:
                    off = a - start
                    if kind == 'str':
                        if not is_imm and _finite_double_at(a, secs, blob):
                            break  # 落到区段兜底按 8 字节 double 值哈希
                        if len(nz[j]) >= 5:
                            raw = nz[j][4][off:]
                            if raw:
                                return '"{}"'.format(_decode_run(raw))
                            return '"{}"'.format(val)
                        return '"{}"'.format(val[off:] if off else val)
                    return '&{}+0x{:x}'.format(val, off)
                if size == 0 and start == a:
                    return '&{}'.format(val)
                j -= 1
                guard += 1
        j = bisect.bisect_right(secs, (a, 1 << 62, '')) - 1
        if j >= 0:
            start, size, name, foff, stype = secs[j]
            if start <= a < start + size:
                off = a - start
                if stype == 'NOBITS':
                    # .bss/.got 等无文件字节：直接按区段相对偏移（布局等价即相同）
                    return '&{}+0x{:x}'.format(name, off)
                if depth > 0 and name == '.text':
                    # 跳转表/函数指针表内的匿名代码指针：优先按当前函数相对偏移
                    # 归一化；拿不到函数入口时退回区段相对偏移。
                    if fn_base is not None:
                        return '&fn+0x{:x}'.format(a - fn_base)
                    return '&{}+0x{:x}'.format(name, off)
                snap = blob[foff + off:foff + off + 64]
                if snap and depth < 3:
                    import hashlib
                    first = int.from_bytes(snap[:psize], 'little')
                    # 2026-08-11 point 回归：匿名指针表（跳转表/函数指针表）只哈希
                    # 「连续可解析指针前缀」——64 字节窗口会把表尾相邻布局（其它
                    # 常量/字符串）卷进哈希，两侧布局不同 → 误判 DIFF。逐项解析到
                    # 首个非指针即停（等价表两侧前缀一致 → 哈希一致）。
                    if first >= _MIN_IMAGE_ADDR and first < 1 << (psize * 8):
                        items = []
                        k = 0
                        while k + psize <= len(snap):
                            v = int.from_bytes(snap[k:k + psize], 'little')
                            if not (v >= _MIN_IMAGE_ADDR and v < 1 << (psize * 8)):
                                break
                            r = resolve(v, depth + 1)
                            if r is None:
                                # 超出 ELF 映像范围（如表尾紧邻的字符串字节
                                # "Acti"=0x74756341 等恰好 ≥0x10000 但不是
                                # 真实地址）：前缀到此为止，否则把相邻字符串
                                # 卷进哈希 → 两侧布局不同 → 伪 DIFF
                                # （2026-08-11 auction isValidEmblemAvatar）。
                                break
                            items.append(r)
                            k += psize
                        if items:
                            h = hashlib.sha1('|'.join(items).encode()).hexdigest()[:8]
                            return '&data#{}({})'.format(h, name)
                    # 8 字节对齐且内容为正常有限 double 的常量：按 8 字节值哈希，
                    # 避免 64 字节窗口把相邻常量池布局差异卷进哈希（fldl 常量类）。
                    if a % 8 == 0 and len(snap) >= 8:
                        u = int.from_bytes(snap[:8], 'little')
                        exp = (u >> 52) & 0x7ff
                        if 0 < exp < 0x7ff:
                            h = hashlib.sha1(snap[:8]).hexdigest()[:8]
                            return '&data#{}({})'.format(h, name)
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
        line = _rip_and_ann(line)
        # 指令注解里的 @plt / @版本 后缀（call <foo@plt> 等）归一化剥离
        line = re.sub(r'@[A-Za-z0-9_.]+', '', line)

        def repl(m):
            a = int(m.group(1), 16)
            # 立即数操作数（$0x...）是「指针值」而非内存常量：空串字面量地址
            # （std::string("") 等）即使 8 字节对齐且后随字节恰好构成有限
            # double，也不能按 fldl 常量池解释（2026-08-11 monitor 回归：
            # CAppConfig 空串引用两侧窗口哈希不同 → 伪 NEAR）。
            r = resolve(a, is_imm=(m.string[m.start()-1:m.start()] == '$'))
            return r if r is not None else m.group(0)
        out.append(_HEX_RE.sub(repl, line))
    return out


_ANN_SYM_RE = re.compile(r'#\s+[0-9a-fA-F]+\s+<([^>]+)>')
_RIP_OPERAND_RE = re.compile(r'\b0x[0-9a-fA-F]+\(%rip\)')


def _rip_and_ann(line):
    """RIP-relative 数据引用 + objdump 注解归一化。

    全局变量访问在非 PIE 里是 `mov disp(%rip),%reg # addr <sym>`，disp 与注解
    地址随链接布局漂移，但指向同一符号（2026-08-11 用户口径：地址不同但指向
    相同内容视为等价）。按注解符号把操作数与注解统一为 `&sym(%rip) # <sym>`。
    间接分支（jmp/call *...）的操作数是 GOT 槽等数据地址，保持原样。
    """
    m = _ANN_SYM_RE.search(line)
    if not m:
        return line
    sym = m.group(1).split('@')[0]
    if not re.match(r'^(j[a-z]*|callq?|loop[a-z]*)\s+\*', line):
        line = _RIP_OPERAND_RE.sub(lambda _mm: '&{}(%rip)'.format(sym), line)
    return _ANN_SYM_RE.sub(lambda _mm: '# <{}>'.format(sym), line)


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
