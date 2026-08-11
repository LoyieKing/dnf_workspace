#!/usr/bin/env python3
"""生成 function_reports/ 顶层 README：总览表 + 目录树 + 口径说明。"""
import csv
import re
from pathlib import Path

ROOT = Path('/home/loyieking/dnf_workspace/dnf_decompile')
OUT = ROOT / 'function_reports'


def read_counts(svc):
    mf = OUT / svc / 'manifest.tsv'
    counts = {}
    if mf.exists():
        with mf.open() as fh:
            for r in csv.DictReader(fh, delimiter='\t'):
                counts[r['status']] = counts.get(r['status'], 0) + 1
    md = 0
    if (OUT / svc).exists():
        md = len([p for p in (OUT / svc).glob('*.md') if p.name != 'README.md'])
    return counts, md


def tree_text():
    lines = []
    lines.append('function_reports/')
    for svc in sorted(p.name for p in OUT.iterdir()
                      if p.is_dir() and (p / 'manifest.tsv').exists()):
        lines.append('├── {}/'.format(svc))
        lines.append('│   ├── README.md          # 服务级统计与口径')
        lines.append('│   ├── manifest.tsv       # 全函数分类清单（含 md_file）')
        lines.append('│   ├── decompiled.txt     # Ghidra 反编译原始输出')
        lines.append('│   ├── targets.txt        # 反编译地址清单')
        lines.append('│   ├── scope.txt          # md 范围过滤统计')
        lines.append('│   ├── import.log / decompile.log')
        n = len([p for p in (OUT / svc).glob('*.md') if p.name != 'README.md'])
        lines.append('│   └── <函数>.md × {}   # 每个非 identical 项目函数一份'.format(n))
    lines.append('└── README.md             # 本文件（总览）')
    return '\n'.join(lines)


def main():
    svcs = sorted(p.name for p in OUT.iterdir()
                  if p.is_dir() and (p / 'manifest.tsv').exists())
    lines = []
    lines.append('# 非 identical 函数对比报告总览\n')
    lines.append('## 目录\n')
    lines.append('```')
    lines.append(tree_text())
    lines.append('```')
    lines.append('\n## 总览\n')
    lines.append('| 服务 | NEAR | DIFF | MISSING | 已生成 md |')
    lines.append('|---|---:|---:|---:|---:|')
    total_md = 0
    for svc in svcs:
        c, md = read_counts(svc)
        lines.append('| {} | {} | {} | {} | {} |'.format(
            svc, c.get('NEAR', 0), c.get('DIFF', 0),
            c.get('MISSING', 0), md))
        total_md += md
    lines.append('| **合计** | | | | **{}** |'.format(total_md))
    lines.append('')
    lines.append('## 口径与范围\n')
    lines.append('- 统计口径：`compare_common` strict 归一化（仅直接跳转/调用目标地址→`<T>`），'
                 '其余指令逐条严格比较。')
    lines.append('- 地址等价口径（2026-08-11）：数据地址（字符串/全局变量）伪代码化为'
                 '内容或 `&符号` 后逐条相等者判为 `IDENTICAL_AE`，与 identical 同等对待'
                 '（不生成 md）；地址不同但指向相同字符串/变量视为相同。')
    lines.append('- 符号范围：symtab 已定义命名函数（T/t/W/w），排除 `.L*`、初始化守卫、'
                 'libgcc/libc 运行时。')
    lines.append('- 第三方豁免（2026-08-10 用户规则）：tinyxml、加密/哈希、yaSSL/TaoCrypt、'
                 'Boost、STL、工具链运行时及 MySQL/zlib 等，不计入统计。')
    lines.append('- 每个 md 仅覆盖**非 identical 且能定位到我们源码定义的函数**（NEAR/DIFF）；'
                 'MISSING 函数全部为第三方 C 库符号，仅在服务 README 中列出。')
    lines.append('- 每个 md 含三部分：① 完整函数汇编 diff（伪代码化，含两侧全部行）；'
                 '② Ghidra 反编译 C；③ 我们源码中的函数定义。')
    lines.append('')
    lines.append('## 生成方式\n')
    lines.append('1. `source/toolchain/gen_report_manifest.py` —— 全量分类生成 manifest.tsv')
    lines.append('2. `source/toolchain/run_service_report.sh <svc>` —— 每服务独立 Ghidra 工程，'
                 '按地址反编译非 identical 函数')
    lines.append('3. `source/toolchain/gen_function_md.py` —— 生成每个函数的 md 与服务 README')
    lines.append('4. `source/toolchain/gen_report_readme.py` —— 生成本总览')
    (OUT / 'README.md').write_text('\n'.join(lines) + '\n', encoding='utf-8')
    print('written', OUT / 'README.md')


if __name__ == '__main__':
    main()
