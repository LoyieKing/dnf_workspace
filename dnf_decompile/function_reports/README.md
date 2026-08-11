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
│   └── <函数>.md × 60   # 每个非 identical 项目函数一份
├── bridge/
│   ├── README.md          # 服务级统计与口径
│   ├── manifest.tsv       # 全函数分类清单（含 md_file）
│   ├── decompiled.txt     # Ghidra 反编译原始输出
│   ├── targets.txt        # 反编译地址清单
│   ├── scope.txt          # md 范围过滤统计
│   ├── import.log / decompile.log
│   └── <函数>.md × 6   # 每个非 identical 项目函数一份
├── channel/
│   ├── README.md          # 服务级统计与口径
│   ├── manifest.tsv       # 全函数分类清单（含 md_file）
│   ├── decompiled.txt     # Ghidra 反编译原始输出
│   ├── targets.txt        # 反编译地址清单
│   ├── scope.txt          # md 范围过滤统计
│   ├── import.log / decompile.log
│   └── <函数>.md × 3   # 每个非 identical 项目函数一份
├── community/
│   ├── README.md          # 服务级统计与口径
│   ├── manifest.tsv       # 全函数分类清单（含 md_file）
│   ├── decompiled.txt     # Ghidra 反编译原始输出
│   ├── targets.txt        # 反编译地址清单
│   ├── scope.txt          # md 范围过滤统计
│   ├── import.log / decompile.log
│   └── <函数>.md × 11   # 每个非 identical 项目函数一份
├── coserver/
│   ├── README.md          # 服务级统计与口径
│   ├── manifest.tsv       # 全函数分类清单（含 md_file）
│   ├── decompiled.txt     # Ghidra 反编译原始输出
│   ├── targets.txt        # 反编译地址清单
│   ├── scope.txt          # md 范围过滤统计
│   ├── import.log / decompile.log
│   └── <函数>.md × 22   # 每个非 identical 项目函数一份
├── dbmw/
│   ├── README.md          # 服务级统计与口径
│   ├── manifest.tsv       # 全函数分类清单（含 md_file）
│   ├── decompiled.txt     # Ghidra 反编译原始输出
│   ├── targets.txt        # 反编译地址清单
│   ├── scope.txt          # md 范围过滤统计
│   ├── import.log / decompile.log
│   └── <函数>.md × 433   # 每个非 identical 项目函数一份
├── guild/
│   ├── README.md          # 服务级统计与口径
│   ├── manifest.tsv       # 全函数分类清单（含 md_file）
│   ├── decompiled.txt     # Ghidra 反编译原始输出
│   ├── targets.txt        # 反编译地址清单
│   ├── scope.txt          # md 范围过滤统计
│   ├── import.log / decompile.log
│   └── <函数>.md × 676   # 每个非 identical 项目函数一份
├── manager/
│   ├── README.md          # 服务级统计与口径
│   ├── manifest.tsv       # 全函数分类清单（含 md_file）
│   ├── decompiled.txt     # Ghidra 反编译原始输出
│   ├── targets.txt        # 反编译地址清单
│   ├── scope.txt          # md 范围过滤统计
│   ├── import.log / decompile.log
│   └── <函数>.md × 142   # 每个非 identical 项目函数一份
├── monitor/
│   ├── README.md          # 服务级统计与口径
│   ├── manifest.tsv       # 全函数分类清单（含 md_file）
│   ├── decompiled.txt     # Ghidra 反编译原始输出
│   ├── targets.txt        # 反编译地址清单
│   ├── scope.txt          # md 范围过滤统计
│   ├── import.log / decompile.log
│   └── <函数>.md × 506   # 每个非 identical 项目函数一份
├── point/
│   ├── README.md          # 服务级统计与口径
│   ├── manifest.tsv       # 全函数分类清单（含 md_file）
│   ├── decompiled.txt     # Ghidra 反编译原始输出
│   ├── targets.txt        # 反编译地址清单
│   ├── scope.txt          # md 范围过滤统计
│   ├── import.log / decompile.log
│   └── <函数>.md × 59   # 每个非 identical 项目函数一份
├── relay/
│   ├── README.md          # 服务级统计与口径
│   ├── manifest.tsv       # 全函数分类清单（含 md_file）
│   ├── decompiled.txt     # Ghidra 反编译原始输出
│   ├── targets.txt        # 反编译地址清单
│   ├── scope.txt          # md 范围过滤统计
│   ├── import.log / decompile.log
│   └── <函数>.md × 16   # 每个非 identical 项目函数一份
├── statics/
│   ├── README.md          # 服务级统计与口径
│   ├── manifest.tsv       # 全函数分类清单（含 md_file）
│   ├── decompiled.txt     # Ghidra 反编译原始输出
│   ├── targets.txt        # 反编译地址清单
│   ├── scope.txt          # md 范围过滤统计
│   ├── import.log / decompile.log
│   └── <函数>.md × 137   # 每个非 identical 项目函数一份
├── stun/
│   ├── README.md          # 服务级统计与口径
│   ├── manifest.tsv       # 全函数分类清单（含 md_file）
│   ├── decompiled.txt     # Ghidra 反编译原始输出
│   ├── targets.txt        # 反编译地址清单
│   ├── scope.txt          # md 范围过滤统计
│   ├── import.log / decompile.log
│   └── <函数>.md × 0   # 每个非 identical 项目函数一份
└── README.md             # 本文件（总览）
```

## 总览

| 服务 | NEAR | DIFF | MISSING | 已生成 md |
|---|---:|---:|---:|---:|
| auction | 6 | 54 | 641 | 60 |
| bridge | 0 | 6 | 673 | 6 |
| channel | 0 | 3 | 0 | 3 |
| community | 1 | 10 | 0 | 11 |
| coserver | 0 | 22 | 0 | 22 |
| dbmw | 281 | 624 | 6 | 433 |
| guild | 38 | 652 | 0 | 676 |
| manager | 266 | 348 | 6 | 142 |
| monitor | 10 | 496 | 0 | 506 |
| point | 7 | 52 | 641 | 59 |
| relay | 1 | 15 | 0 | 16 |
| statics | 4 | 133 | 0 | 137 |
| stun | 0 | 0 | 0 | 0 |
| **合计** | | | | **2071** |

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
