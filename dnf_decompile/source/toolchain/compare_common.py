#!/usr/bin/env python3
"""IDENTICAL 统一判定口径 —— 所有比对脚本共用（2026-08-08 起）。

统一口径定义
============
IDENTICAL（精准）要求：单个函数内，除「直接跳转/调用指令的目标地址」外，
指令文本（助记符 + 全部操作数）逐条完全一致。

保留（必须严格一致，任何差异都不得判 IDENTICAL）
--------------------------------------------------
  - 立即数常量：`cmp $0x7f,%eax` 与 `cmp $0x7,%eax` 视为不同
  - 字段 / 栈偏移：`mov 0x18(%eax),%ecx` 与 `mov 0x1c(%eax),%ecx` 视为不同；
    `mov 0x8(%ebp),%eax` 与 `mov -0x4(%ebp),%eax` 视为不同
  - 全局数据地址（rodata / 表基址等内存操作数）
  - 寄存器分配、寻址形态、操作数结构

仅归一化
--------
直接跳转 / 调用指令（j* / call / loop*）里的绝对目标地址
（0x 前缀或裸十六进制）→ `<T>`；随附的目标符号名保留。
目的：消除链接布局 / 重定位造成的目标地址漂移，不放松任何其它局部差异。

历史口径（已废弃，仅供追溯）
----------------------------
  - 助记符级：把所有 0x 十六进制数抹成 0xX，忽略常量与字段偏移
    （compare_auc_obj / compare_stun / compare_channel / dwarf_validate 旧版）
  - community 全量：仅归一化行尾 0x token，分支/调用目标实际未被归一化
    （compare_all_functions.py 旧版）
"""
import bisect
import os
import pickle
import re
import subprocess

# 统一口径版本号：归一化规则变更时必须 +1，用于失效签名缓存
CALIBER_VERSION = 4

# 扩展口径（CALIBER_VERSION=4）：在严格口径基础上，把「大绝对地址」
# （>=0x40000000，即 rodata/数据/全局引用等跨二进制布局产物）也归一化为 <A>。
# 保留：立即数小常量、字段/栈偏移、寄存器、寻址形态。
# 用于「全部 identical」可达性度量：数据地址差异不是函数局部语义差异。
EXT_CALIBER_VERSION = 4

# ============================================================
# identical 豁免口径（2026-08-10 用户规则）
# ------------------------------------------------------------
# 以下“基础内容/第三方内容”获得 identical 豁免，移出统计口径
# （不计入 IDENTICAL/NEAR/DIFF/MISSING 计数，语义正确性另行验证）：
#   1. tinyxml（TiXml*）
#   2. 加密/哈希通用算法：CRijndael(AES)、CSHA、CTEA、IMethod 基类，
#      yaSSL/TaoCrypt 全族（MD2/MD4/MD5/SHA/DES/3DES/AES/RSA/RIPEMD160…）
#   3. Boost（boost:: 及项目包装 object_pool_by_boost_pool）
#   4. STL/std/__gnu_cxx/libstdc++ 内部实例化
#   5. 工具链/运行时：_Unwind_*、__cxa_*、__gxx_personality、operator new/delete、
#      __libc_csu_*
# 判定同时支持 mangled 与 demangled 匹配。
# ============================================================

_EXEMPT_MANGLE_SUBSTR = (
    'TiXml',                      # tinyxml
    'CRijndael', 'CSHA', 'CTEA', 'IMethod',   # 通用加密/哈希算法（DWARF 服务）
    'TaoCrypt', 'yaSSL',          # yaSSL/taocrypt 第三方 crypto
    # yaSSL 的 OpenSSL 兼容 C API（ssl.cpp 经 prefix_*.h 宏改名导出，
    # 符号为 yaX509_*/yaERR_*/yaDES_* 等，mangled 名不含 'yaSSL' 字样）
    'yaSSLeay', 'yaSSLv2', 'yaX509', 'yaASN1_', 'yaBN_', 'yaDES_',
    'yaDH_', 'yaERR_', 'yaEVP_', 'yaGENERAL_', 'yaMD4_', 'yaMD5_',
    'yaOpenSSL', 'yaRAND_', 'yaRSA_', 'yaTLSv1', 'yask_GENERAL', 'err_helper',
    'boost', 'object_pool_by_boost_pool',     # Boost + 项目包装
    '_ZNSt', '_ZNKSt', '_ZSt', '__gnu_cxx', '__cxxabiv',  # std/STL 内部
    '_Unwind_', '__cxa_', '__gxx_personality',
    '_ZdlPv', '_Znwj', '_Znwm',   # operator delete / new
    '__libc_csu_',
    # ---- 2026-08-10 扩充：其余第三方基础库（用户豁免规则“等基础内容”）----
    # zlib 压缩库（避免 'compress'/'zError'/'ARIA' 等会误伤项目符号的裸串）
    '_tr_', 'inflate', 'deflate', 'zcalloc', 'zcfree', 'zlib', 'crc32',
    'adler32', 'fill_window', 'flush_pending', 'get_crc_table',
    'my_compress', 'my_uncompress', 'uncompr', 'compress2', 'compressBound',
    # SHA1 C 实现
    'SHA1ProcessMessageBlock', 'SHA1PadMessage', 'SHA1Reset', 'SHA1Result',
    'SHA1Input',
    # MySQL 客户端库（ORIG 静态链接真实 libmysqlclient，重建提供 weak 桩）
    'mysql', 'escape_quotes_for_mysql', 'escape_string_for_mysql',
    # NCrypto / tomcrypt 第三方加密库（ORIG 静态链接，重建不含此库）
    'CNCrypto', 'CNChecksum', 'ICryptoGraph', 'IChecksum', 'CBlowFish',
    'NCrypto', 'CryptoGraph', 'CreateCrypto', 'DestroyCrypto', 'GenerateRandom',
    '_ZN4ARIA', '_ZNK4ARIA', '_ZN6SBlock', '_ZNK6SBlock',
    'xtea', 'cast5', 'anubis', 'kasumi', 'khazad', 'multi2', 'noekeon',
    'skipjack', 'twofish', 'rc6_', 'RIJNDAEL', 'symmetric_key', 'ALG_INFO',
    'md5', 'burn_stack', 'zeromem', 'Balloc', 'Bfree', 'TIME_to_ulonglong',
    'gf_mult', 'rs_mult', 'mds_mult', 'PaddSet', 'PaddCheck', 'gen_tabs',
    'g_func', '_ZL6h_func', '_Z11Seed', '_Z15Seed',
    # libgcc 栈展开运行时（工具链）
    'uw_', 'execute_cfa', 'sleb128', 'uleb128', 'add_fdes', 'frame_heapsort',
    'base_from_', 'size_of_encoded_value', 'search_object', 'frame_state_for',
    'read_encoded_value',
    '__register_frame', '__deregister_frame', 'classify_object_over_fdes',
    'execute_stack_op', 'fde_mixed_encoding_compare',
    'fde_single_encoding_compare', 'fde_unencoded_compare', 'frame_downheap',
    'get_cie_encoding', 'init_dwarf_reg_size_table', 'linear_search_fdes',
)

_EXEMPT_EXACT = {
    # ---- 2026-08-11：静态链入 libstdc++/libiberty/libgcc 的运行时内部符号 ----
    # （ORIG 与重建各自静态/动态链接版本不同，逐字对齐无意义；按用户豁免规则
    #   STL/std/libstdc++、工具链运行时不计入统计。以精确名匹配，避免误伤项目符号。）
    '_ZL15get_ttype_entryP16lsda_header_infom',
    '_ZN12_GLOBAL__N_116get_locale_mutexEv',
    '_ZN12_GLOBAL__N_121system_error_categoryD0Ev',
    '_ZN12_GLOBAL__N_121system_error_categoryD1Ev',
    '_ZN12_GLOBAL__N_121system_error_categoryD2Ev',
    '_ZN12_GLOBAL__N_122generic_error_categoryD0Ev',
    '_ZN12_GLOBAL__N_122generic_error_categoryD1Ev',
    '_ZN12_GLOBAL__N_122generic_error_categoryD2Ev',
    '_ZN12_GLOBAL__N_1L6xwriteEiPKci',
    '_ZNK12_GLOBAL__N_121system_error_category4nameEv',
    '_ZNK12_GLOBAL__N_121system_error_category7messageEi',
    '_ZNK12_GLOBAL__N_122generic_error_category4nameEv',
    '_ZNK12_GLOBAL__N_122generic_error_category7messageEi',
    '__dynamic_cast',
    '__gcclibcxx_demangle_callback',
    'd_append_buffer',
    'd_append_char',
    'd_append_string',
    'd_bare_function_type',
    'd_call_offset',
    'd_cv_qualifiers',
    'd_demangle_callback',
    'd_encoding',
    'd_expr_primary',
    'd_expression',
    'd_exprlist',
    'd_find_pack',
    'd_growable_string_callback_adapter',
    'd_make_comp',
    'd_make_name',
    'd_name',
    'd_number',
    'd_operator_name',
    'd_print_array_type',
    'd_print_cast',
    'd_print_comp',
    'd_print_expr_op',
    'd_print_function_type',
    'd_print_mod',
    'd_print_mod_list',
    'd_print_subexpr',
    'd_source_name',
    'd_substitution',
    'd_template_args',
    'd_template_param',
    'd_type',
    'd_unqualified_name',
    # 2026-08-11（relay round-5）：pthread_equal 为旧 glibc/libpthread 链入的
    # 弱符号（ORIG W 弱定义@0x805ea90），重建链宿主 libc 后该符号不再落入
    # 二进制（由 libc.so.6 解析）——系统头/链接器版本伪影，按运行时符号豁免。
    'pthread_equal',
}

_EXEMPT_DEMANGLE_SUBSTR = (
    'TiXml', 'tinyxml',
    'CRijndael', 'CSHA', 'CTEA', 'IMethod',
    'TaoCrypt::', 'yaSSL::',
    'boost::', 'object_pool_by_boost_pool',
    'std::', '__gnu_cxx::', '__cxxabiv::',
    '_Unwind_', '__cxa_', '__gxx_personality',
    'operator new', 'operator delete',
    # ---- 2026-08-10 扩充：其余第三方基础库 ----
    'zlib', 'inflate', 'deflate', 'crc32', 'adler32',
    'CNCrypto', 'CNChecksum', 'ICryptoGraph', 'IChecksum', 'CBlowFish',
    'ARIA::', 'SBlock::', 'symmetric_key', 'md5_context', 'ALG_INFO',
    'NCrypto', 'CryptoGraph',
)


def is_exempt_symbol(mangled, demangled=None):
    """返回 True 表示该符号属于豁免范围（不计入 identical 统计）。"""
    if mangled in _EXEMPT_EXACT:
        return True
    if any(s in mangled for s in _EXEMPT_MANGLE_SUBSTR):
        return True
    if demangled and any(s in demangled for s in _EXEMPT_DEMANGLE_SUBSTR):
        return True
    return False


_LARGE_ADDR_RE = re.compile(r'0x[0-9a-f]{7,8}')
# 64 位 ET_EXEC（stun 等）的代码/数据地址在 0x40xxxx 区间（0x400000-0x40ffffff）
# 注意：不能放宽到 0x4xxxxxxx，否则 32 位的 0x4c4d58（"XML" 魔数）等常量会被误归一化
_LARGE_ADDR_RE64 = re.compile(r'0x40[0-9a-f]{4,6}')
_ASSERT_LINE_RE = re.compile(r'^movl\s+\$0x[0-9a-f]+,0x8\(%esp\)$')

# 直接跳转/调用：j*/call/callq/loop*；callq 为 64 位 AT&T 后缀
_BRANCH_RE = re.compile(r"^(j[a-z]*|callq?|loop[a-z]*)\b")
_TARGET_RE = re.compile(
    # 仅直接绝对目标：排除 * 前缀（间接 jmp/call 的操作数是数据地址，必须保留）
    r"(?<![0-9a-zA-Z$*])0x[0-9a-f]{4,16}(?=\s*<[^>]*>|\s*$)"
    r"|(?<![0-9a-zA-F$#*])[0-9a-f]{4,16}(?=\s*<[^>]*>|\s*$)"
)


def norm_line(line):
    """归一化单条指令文本；非直接跳转/调用行原样返回。"""
    if not _BRANCH_RE.match(line):
        return line
    return _TARGET_RE.sub("<T>", line)


def norm_identical(insns):
    """对指令文本列表做统一归一化。"""
    return [norm_line(x) for x in insns]


def norm_identical_ext(insns):
    """扩展口径：严格口径 + 大绝对地址（数据引用）归一化为 <A>。"""
    return [_LARGE_ADDR_RE64.sub('<A>', _LARGE_ADDR_RE.sub('<A>', norm_line(x))) for x in insns]


def norm_identical_full(insns):
    """元信息豁免口径（CALIBER_VERSION=5）：
    扩展口径 + __assert_fail 的行号实参（movl $line,0x8(%esp)）归一化为 $L。
    依据：用户规则「行号只当元信息，不追求一致」。"""
    out = []
    for i, x in enumerate(insns):
        y = norm_identical_ext([x])[0]
        if _ASSERT_LINE_RE.match(y):
            for j in range(i + 1, min(i + 5, len(insns))):
                if '__assert_fail' in insns[j]:
                    y = re.sub(r'\$0x[0-9a-f]+,0x8\(%esp\)', '$L,0x8(%esp)', y)
                    break
                if re.match(r'call\s', insns[j]):
                    break
        out.append(y)
    return out


def demangle_batch(names):
    """用单次 c++filt 调用批量还原符号名（避免逐符号起子进程）。

    返回 {mangled: demangled}；空输入返回空 dict。
    """
    names = list(names)
    if not names:
        return {}
    out = subprocess.run(
        ["c++filt", "-n"], input="\n".join(names) + "\n",
        text=True, capture_output=True, check=True).stdout.splitlines()
    return dict(zip(names, out))


def load_disasm(bin_path, intel=False):
    """对整个二进制/目标文件做一次 objdump -d，返回 (addr->text, sorted_addrs)。

    避免逐函数重复解析整个文件；纯内存结构，不落盘。
    """
    cmd = ["objdump", "-d", "--no-show-raw-insn"]
    if intel:
        cmd.append("-M")
        cmd.append("intel")
    cmd.append(str(bin_path))
    out = subprocess.check_output(cmd, text=True, stderr=subprocess.DEVNULL)
    insn = {}
    line_re = re.compile(r"^\s*([0-9a-fA-F]+):\s+(.*)$")
    for line in out.splitlines():
        m = line_re.match(line)
        if m:
            insn[int(m.group(1), 16)] = m.group(2).strip()
    return insn, sorted(insn)


def disasm_slice(loaded, start, stop):
    """取出 [start, stop) 地址范围内的指令文本列表。"""
    insn, addrs = loaded
    lo = bisect.bisect_left(addrs, start)
    hi = bisect.bisect_left(addrs, stop)
    return [insn[addrs[i]] for i in range(lo, hi)]


# 逐符号审查用反汇编磁盘缓存目录（按二进制 mtime+size 失效）。
DIS_CACHE_DIR = '/tmp/df_disasm_cache'


def load_disasm_cached(bin_path):
    """整二进制一次 objdump -d，按符号分片并落盘缓存（mtime+size 失效）。

    返回 {symbol: [(addr_hex, 指令文本)...]}。供 diff_func / classify 等
    逐符号审查复用，避免每个函数重复起 objdump 子进程（/mnt/d 上子进程开销大）。
    """
    bin_path = str(bin_path)
    st = os.stat(bin_path)
    key = (st.st_mtime_ns, st.st_size)
    os.makedirs(DIS_CACHE_DIR, exist_ok=True)
    cache_file = os.path.join(DIS_CACHE_DIR, re.sub(r'[^A-Za-z0-9]', '_', bin_path) + '.pkl')
    try:
        with open(cache_file, 'rb') as f:
            saved_key, funcs = pickle.load(f)
        if saved_key == key:
            return funcs
    except Exception:
        pass
    out = subprocess.check_output(
        ["objdump", "-d", "--no-show-raw-insn", bin_path],
        text=True, stderr=subprocess.DEVNULL)
    funcs = {}
    cur = None
    for ln in out.splitlines():
        m = re.match(r'^([0-9a-f]+) <(.*)>:', ln)
        if m:
            name = m.group(2)
            # 局部标签（.Lxxx / 符号+偏移）不是函数边界，跳过以免截断当前函数。
            if name.startswith('.L') or '+' in name:
                continue
            cur = name
            funcs[cur] = []
            continue
        m = re.match(r'^\s*([0-9a-f]+):\s+([^\t]+)', ln)
        if cur is not None and m:
            funcs[cur].append((m.group(1), m.group(2).strip()))
    try:
        with open(cache_file, 'wb') as f:
            pickle.dump((key, funcs), f)
    except Exception:
        pass
    return funcs
