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
import re
import subprocess

# 统一口径版本号：归一化规则变更时必须 +1，用于失效签名缓存
CALIBER_VERSION = 3

# 扩展口径（CALIBER_VERSION=4）：在严格口径基础上，把「大绝对地址」
# （>=0x40000000，即 rodata/数据/全局引用等跨二进制布局产物）也归一化为 <A>。
# 保留：立即数小常量、字段/栈偏移、寄存器、寻址形态。
# 用于「全部 identical」可达性度量：数据地址差异不是函数局部语义差异。
EXT_CALIBER_VERSION = 4
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
