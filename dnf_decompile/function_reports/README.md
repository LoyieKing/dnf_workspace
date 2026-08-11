# 非 identical 函数对比报告总览

## 目录

```
function_reports/
├── auction/
│   ├── README.md          # 服务级统计与口径
│   ├── manifest.tsv       # 全函数分类清单（含 md_file）
│   ├── decompiled.txt     # Ghidra 反编译原始输出
│   ├── targets.txt        # 反编译地址清单
│   ├── scope.txt          # md 范围过滤统计
│   ├── import.log / decompile.log
│   └── <函数>.md × 193   # 每个非 identical 项目函数一份
├── bridge/
│   ├── README.md          # 服务级统计与口径
│   ├── manifest.tsv       # 全函数分类清单（含 md_file）
│   ├── decompiled.txt     # Ghidra 反编译原始输出
│   ├── targets.txt        # 反编译地址清单
│   ├── scope.txt          # md 范围过滤统计
│   ├── import.log / decompile.log
│   └── <函数>.md × 30   # 每个非 identical 项目函数一份
├── channel/
│   ├── README.md          # 服务级统计与口径
│   ├── manifest.tsv       # 全函数分类清单（含 md_file）
│   ├── decompiled.txt     # Ghidra 反编译原始输出
│   ├── targets.txt        # 反编译地址清单
│   ├── scope.txt          # md 范围过滤统计
│   ├── import.log / decompile.log
│   └── <函数>.md × 30   # 每个非 identical 项目函数一份
├── community/
│   ├── README.md          # 服务级统计与口径
│   ├── manifest.tsv       # 全函数分类清单（含 md_file）
│   ├── decompiled.txt     # Ghidra 反编译原始输出
│   ├── targets.txt        # 反编译地址清单
│   ├── scope.txt          # md 范围过滤统计
│   ├── import.log / decompile.log
│   └── <函数>.md × 265   # 每个非 identical 项目函数一份
├── coserver/
│   ├── README.md          # 服务级统计与口径
│   ├── manifest.tsv       # 全函数分类清单（含 md_file）
│   ├── decompiled.txt     # Ghidra 反编译原始输出
│   ├── targets.txt        # 反编译地址清单
│   ├── scope.txt          # md 范围过滤统计
│   ├── import.log / decompile.log
│   └── <函数>.md × 86   # 每个非 identical 项目函数一份
├── dbmw/
│   ├── README.md          # 服务级统计与口径
│   ├── manifest.tsv       # 全函数分类清单（含 md_file）
│   ├── decompiled.txt     # Ghidra 反编译原始输出
│   ├── targets.txt        # 反编译地址清单
│   ├── scope.txt          # md 范围过滤统计
│   ├── import.log / decompile.log
│   └── <函数>.md × 624   # 每个非 identical 项目函数一份
├── guild/
│   ├── README.md          # 服务级统计与口径
│   ├── manifest.tsv       # 全函数分类清单（含 md_file）
│   ├── decompiled.txt     # Ghidra 反编译原始输出
│   ├── targets.txt        # 反编译地址清单
│   ├── scope.txt          # md 范围过滤统计
│   ├── import.log / decompile.log
│   └── <函数>.md × 976   # 每个非 identical 项目函数一份
├── manager/
│   ├── README.md          # 服务级统计与口径
│   ├── manifest.tsv       # 全函数分类清单（含 md_file）
│   ├── decompiled.txt     # Ghidra 反编译原始输出
│   ├── targets.txt        # 反编译地址清单
│   ├── scope.txt          # md 范围过滤统计
│   ├── import.log / decompile.log
│   └── <函数>.md × 238   # 每个非 identical 项目函数一份
├── monitor/
│   ├── README.md          # 服务级统计与口径
│   ├── manifest.tsv       # 全函数分类清单（含 md_file）
│   ├── decompiled.txt     # Ghidra 反编译原始输出
│   ├── targets.txt        # 反编译地址清单
│   ├── scope.txt          # md 范围过滤统计
│   ├── import.log / decompile.log
│   └── <函数>.md × 826   # 每个非 identical 项目函数一份
├── point/
│   ├── README.md          # 服务级统计与口径
│   ├── manifest.tsv       # 全函数分类清单（含 md_file）
│   ├── decompiled.txt     # Ghidra 反编译原始输出
│   ├── targets.txt        # 反编译地址清单
│   ├── scope.txt          # md 范围过滤统计
│   ├── import.log / decompile.log
│   └── <函数>.md × 190   # 每个非 identical 项目函数一份
├── relay/
│   ├── README.md          # 服务级统计与口径
│   ├── manifest.tsv       # 全函数分类清单（含 md_file）
│   ├── decompiled.txt     # Ghidra 反编译原始输出
│   ├── targets.txt        # 反编译地址清单
│   ├── scope.txt          # md 范围过滤统计
│   ├── import.log / decompile.log
│   └── <函数>.md × 92   # 每个非 identical 项目函数一份
├── statics/
│   ├── README.md          # 服务级统计与口径
│   ├── manifest.tsv       # 全函数分类清单（含 md_file）
│   ├── decompiled.txt     # Ghidra 反编译原始输出
│   ├── targets.txt        # 反编译地址清单
│   ├── scope.txt          # md 范围过滤统计
│   ├── import.log / decompile.log
│   └── <函数>.md × 256   # 每个非 identical 项目函数一份
├── stun/
│   ├── README.md          # 服务级统计与口径
│   ├── manifest.tsv       # 全函数分类清单（含 md_file）
│   ├── decompiled.txt     # Ghidra 反编译原始输出
│   ├── targets.txt        # 反编译地址清单
│   ├── scope.txt          # md 范围过滤统计
│   ├── import.log / decompile.log
│   └── <函数>.md × 10   # 每个非 identical 项目函数一份
└── README.md             # 本文件（总览）
```

## 总览

| 服务 | NEAR | DIFF | MISSING | 已生成 md |
|---|---:|---:|---:|---:|
| auction | 64 | 144 | 812 | 193 |
| bridge | 12 | 35 | 851 | 30 |
| channel | 20 | 25 | 0 | 30 |
| community | 2 | 316 | 11 | 265 |
| coserver | 36 | 104 | 0 | 86 |
| dbmw | 381 | 868 | 6 | 624 |
| guild | 37 | 993 | 0 | 976 |
| manager | 352 | 511 | 6 | 238 |
| monitor | 131 | 749 | 0 | 826 |
| point | 64 | 142 | 812 | 190 |
| relay | 24 | 119 | 3 | 92 |
| statics | 73 | 237 | 0 | 256 |
| stun | 9 | 1 | 0 | 10 |
| **合计** | | | | **3816** |

## 口径与范围

- 统计口径：`compare_common` strict 归一化（仅直接跳转/调用目标地址→`<T>`），其余指令逐条严格比较。
- 地址等价口径（2026-08-11）：数据地址（字符串/全局变量）伪代码化为内容或 `&符号` 后逐条相等者判为 `IDENTICAL_AE`，与 identical 同等对待（不生成 md）；地址不同但指向相同字符串/变量视为相同。
- 符号范围：symtab 已定义命名函数（T/t/W/w），排除 `.L*`、初始化守卫、libgcc/libc 运行时。
- 第三方豁免（2026-08-10 用户规则）：tinyxml、加密/哈希、yaSSL/TaoCrypt、Boost、STL、工具链运行时及 MySQL/zlib 等，不计入统计。
- 每个 md 仅覆盖**非 identical 且能定位到我们源码定义的函数**（NEAR/DIFF）；MISSING 函数全部为第三方 C 库符号，仅在服务 README 中列出。
- 每个 md 含三部分：① 完整函数汇编 diff（伪代码化，含两侧全部行）；② Ghidra 反编译 C；③ 我们源码中的函数定义。

## 生成方式

1. `source/toolchain/gen_report_manifest.py` —— 全量分类生成 manifest.tsv
2. `source/toolchain/run_service_report.sh <svc>` —— 每服务独立 Ghidra 工程，按地址反编译非 identical 函数
3. `source/toolchain/gen_function_md.py` —— 生成每个函数的 md 与服务 README
4. `source/toolchain/gen_report_readme.py` —— 生成本总览
