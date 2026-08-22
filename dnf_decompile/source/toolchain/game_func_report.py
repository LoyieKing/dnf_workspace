#!/usr/bin/env python3
"""game 单函数快速对比报告：单 TU 编译(不链接) + 读 docs/class_func_reports oracle + 生成合并报告。

快速原则（子代理验证只允许此脚本，避免慢脚本阻塞）：
  - 我们的汇编：用 compare_common.load_disasm_cached(build/game/df_game_r)（整二进制一次 objdump 落盘缓存，
    之后按符号分片 O(1)），而非每次 objdump。
  - ORIG oracle：直接读 docs/class_func_reports/<类>/<方法>.md 已生成的文本（无解析耗时）。
  - 归一化：compare_common.norm_identical / norm_identical_ext（纯内存）。

核心要求（用户规则，详见 source/toolchain/game_verify_guide.md）：
  1) 验证只用本脚本（--no-compile <1.5s）；禁慢的 gen_function_md.py --function。
  2) 汇编/Ghidra C 只用 docs/class_func_reports/（权威逐函数报告）。
  3) 不允许编造导出符号不存在的函数（发明符号按 ORIG 真名修正调用）。
  4) 函数参数/返回值类型可改（二进制无法推导时）；保持 ORIG mangled 一致。
  5) padding/data 等无语义字段的偏移访问 → 按语义建真实字段，getter/setter 函数名为权威。

用法:
  game_func_report.py <源文件.cpp> <mangled符号> [--out md路径] [--no-compile] [--no-orig-report]
                       [--class-override CN] [--method M]
  （--no-compile 用已有 build/game/df_game_r 切片，秒出。ORIG 项目函数 mangled 前缀正确、
   c++filt 可 demangle，报告按 demangled 自动定位；仅第三方模板(boost)等 c++filt 无法
   demangle 时才需 --class-override/--method 显式指定。）

  - 单 TU 编译：复用 check_tu_game_orig.sh（内部 -c，仅几秒）。给 --no-compile 跳过（用当前 build/game 二进制分片）。

用法:
  game_func_report.py <源文件.cpp> <mangled符号> [--out md路径] [--no-compile] [--no-orig-report]
  （--no-orig-report 表示不读 class_func_reports，仅 ORIG 用二进制切片对比）

输出: /tmp/game_func_report_<base>.md（含 ORIG 汇编/Ghidra C/我们汇编/diff/分类）
"""
import difflib
import re
import subprocess
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
from compare_common import load_disasm_cached, norm_identical, norm_identical_ext

_DECOMP = Path(__file__).resolve().parent.parent.parent
ROOT = _DECOMP.parent
ORIG = ROOT / 'dnf_installer/build/dnf_data/home/template/init/df_game_r'
NEW = _DECOMP / 'build/game/df_game_r'
CLS_REPORTS = _DECOMP / 'docs/class_func_reports'


def run(cmd, **kw):
    return subprocess.run(cmd, capture_output=True, text=True, **kw)


def demangle(name):
    # ORIG 项目函数 mangled 全部前缀正确（已全量 c++filt 验证），c++filt 应成功；
    # 若返回原样（仅第三方模板如 boost），原样返回并由 find_report 兜底。
    return run(['c++filt', name]).stdout.strip()


def method(dem):
    m = re.search(r'::([^:(]*)\(', dem)
    return m.group(1) if m else (dem.split('(')[0].strip())


def cls_folders(dem):
    """可能的类报告文件夹候选（命名空间:: 转 __ 的多种形态）。"""
    cls = dem.split('(')[0]
    parts = [p for p in cls.split('::') if p]
    # 类 = 去最后一组(方法/operator)的前缀；对 '::CUserPremium::CUserPremium()' -> WongWork::CUserPremium
    # 最后组是方法；若倒数第二组是类名，则类=除最后一组外全部
    if len(parts) >= 2:
        c = '__'.join(parts[:-1])
    else:
        c = parts[0] if parts else dem
    return [c, c.replace('__', '_')]


def find_report(dem, mangled=None):
    """按 demangled 定位 class_func_reports/<类>/<方法>.md。
    类名/方法名来自 c++filt 的 demangled（ORIG 前缀正确，demangle 可靠），
    method(dem)/cls_folders(dem) 即可定位；mangled 参数保留只作类名拼装辅助。"""
    m = method(dem) if dem else ''
    if not m:
        return None
    folders = cls_folders(dem or mangled or '')
    # 去除方法名的 mangled 参数尾缀候选（如 'MakeItemListE' -> 'MakeItemList'）
    meth_cands = [m]
    if 'E' in m and mangled:
        # dem 里方法名可能带尾缀残留（如错 mangle 无法 c++filt 时），剥 E... 备选
        meth_cands.append(re.sub(r'E[0-9A-Za-z_]*$', '', m))
    seen = set()
    for mc in meth_cands:
        if not mc or mc in seen:
            continue
        seen.add(mc)
        for c in folders:
            p = CLS_REPORTS / c / (mc + '.md')
            if p.exists():
                return p
        hits = list(CLS_REPORTS.rglob(mc + '.md'))
        if hits:
            return hits[0]
    return None


def extract_asm(md):
    m = re.search(r'```asm\n(.*?)```', md, re.S)
    return m.group(1) if m else ''


def extract_c(md):
    m = re.search(r'```c\n(.*?)```', md, re.S)
    return m.group(1) if m else ''


def insn_texts(block):
    """asm 块 -> 指令文本列表（跳过注释/标签/空行）。"""
    out = []
    for ln in block.strip().splitlines():
        ln = ln.strip()
        if not ln or ln.startswith('#'):
            continue
        m = re.match(r'^[0-9a-fA-F]+\s*(\+0x[0-9a-f]+)?:\s*(.*)$', ln)
        if m and m.group(2):
            out.append(m.group(2).strip())
        elif not re.match(r'^[0-9a-fA-F]+ <', ln):
            out.append(ln)
    return out


def our_asm_cached(symbol):
    """从 build/game/df_game_r 的 load_disasm_cached（{sym:[(addr,text)]}）取该函数体文本。"""
    if not NEW.exists():
        return []
    try:
        funcs = load_disasm_cached(str(NEW))
    except FileNotFoundError:
        return []
    if symbol not in funcs:
        return []
    return [t for _a, t in funcs[symbol]]


def main():
    ap = __import__('argparse').ArgumentParser()
    ap.add_argument('src', help='源文件 .cpp（仅用于单TU编译；--no-compile 可占位）')
    ap.add_argument('symbol', help='mangled 符号')
    ap.add_argument('--out', default=None)
    ap.add_argument('--no-compile', action='store_true')
    ap.add_argument('--no-orig-report', action='store_true',
                    help='不读 class_func_reports（仅用二进制切片做 ORIG）')
    ap.add_argument('--class-override', default=None,
                    help='显式指定类报告文件夹名（c++filt 无法 demangle 的第三方模板时）')
    ap.add_argument('--method', default=None,
                    help='显式指定方法名（c++filt 无法 demangle 的第三方模板时）')
    args = ap.parse_args()

    # 1) 单 TU 编译（复用 check_tu_game_orig.sh；内部 -c 输出 /tmp/tu_<base>.o）
    if not args.no_compile:
        r = run(['bash', str(_DECOMP / 'source/toolchain/check_tu_game_orig.sh'), str(args.src)])
        if r.returncode != 0:
            print('COMPILE FAILED')
            print(r.stdout[-1500:], r.stderr[-1500:])
            return 1

    dem = demangle(args.symbol)
    rep = None
    md_text = ''
    if not args.no_orig_report:
        rep = find_report(dem, args.symbol)
        if args.class_override:
            # 显式类文件夹 + 方法名
            mo = args.method or method(dem)
            mc = args.class_override.replace('_', '__')  # user 可能传 CUser 或 CUser
            cand = CLS_REPORTS / mc / (mo + '.md')
            if cand.exists():
                rep = cand
            else:
                cand2 = CLS_REPORTS / args.class_override / (mo + '.md')
                if cand2.exists():
                    rep = cand2
        if rep and rep.exists():
            md_text = rep.read_text(encoding='utf-8', errors='replace')

    o_txt = insn_texts(extract_asm(md_text)) if md_text else []
    o_c = extract_c(md_text) if md_text else ''
    our = our_asm_cached(args.symbol)

    try:
        o_norm = norm_identical(o_txt)
    except Exception:
        o_norm = []
    try:
        n_norm = norm_identical(our)
    except Exception:
        n_norm = []

    o_ext = [] if not md_text else (norm_identical_ext(o_txt) if o_txt else [])
    # AE 判定：两者去尾部 nop 后伪代码化相等（近似：用 norm_identical_ext 对齐结果简易判断）
    identical = (o_norm == n_norm) if o_norm else False
    verdict = 'IDENTICAL' if identical else ('IDENTICAL_AE' if o_norm == n_norm and o_norm else 'DIFF')

    diff = list(difflib.unified_diff(o_txt, our, fromfile='ORIG', tofile='OURS',
                                     lineterm='', n=2))

    lines = ['# %s' % args.symbol,
             '',
             '`%s`' % dem, '',
             '| 项 | 值 |',
             '|---|---|',
             '| 源文件 | `%s` |' % args.src,
             '| ORIG 报告 | `%s` |' % (rep if rep else ('(未用报告，二进制切片)' if args.no_orig_report else '未找到')),
             '| 分类 | %s |' % verdict,
             '| ORIG insns | %d |' % len(o_txt),
             '| ours insns | %d |' % len(our),
             '',
             '## ORIG 汇编（oracle）', '',
             '```asm', o_asm_txt if (o_asm_txt := (extract_asm(md_text) if md_text else '')) else '（无）',
             '```', '']
    if o_c.strip():
        lines += ['## Ghidra 反编译 C', '', '```c', o_c.strip(), '```', '']
    lines += ['## 我们的汇编（重建）', '', '```asm']
    lines += our or ['（未找到函数体）']
    lines += ['```', '']
    if diff:
        lines += ['## 汇编 diff（行级）', '', '```diff'] + diff + ['```', '']

    out_path = Path(args.out) if args.out else Path('/tmp/game_func_report_%s.md' % Path(args.src).stem)
    out_path.write_text('\n'.join(lines) + '\n', encoding='utf-8')
    print('WROTE', out_path)
    print('verdict=%s orig_insns=%d our_insns=%d report=%s' % (
        verdict, len(o_txt), len(our), rep or 'NO'))
    return 0


if __name__ == '__main__':
    sys.exit(main())
