# monitor 函数对比报告

| 项 | 值 |
|---|---|
| 原始 ELF | `/home/loyieking/dnf_workspace/dnf_installer/build/dnf_data/home/template/neople/monitor/df_monitor_r` |
| 重建 ELF | `/home/loyieking/dnf_workspace/dnf_decompile/build/monitor/df_monitor_r` |
| 统计口径 | `compare_common` strict（仅归一化直接跳转/调用目标地址） |
| 地址等价口径 | 数据地址（字符串/全局变量）伪代码化为内容/`&符号` 后逐条相等者判为 `IDENTICAL_AE`（视为相同，不生成 md） |
| 豁免 | 第三方基础库（tinyxml/加密哈希/Boost/STL/工具链运行时等，见 `compare_common.is_exempt_symbol`） |
| 符号范围 | symtab 已定义命名函数 T/t/W/w（跳过 `.L*`、初始化守卫、libgcc/libc 运行时） |
| md 范围 | 仅两侧都存在且非 identical 的 **NEAR/DIFF** 函数，且能在重建源码中定位到定义（排除 vendored `Library3rd`） |

## 统计

| 类别 | 数量 |
|---|---|
| IDENTICAL | 0 |
| NEAR | 12 |
| DIFF | 210 |
| MISSING | 0 |
| EMPTY | 0 |
| EXEMPT_SKIP | 0 |
| IDENTICAL_AE（地址等价） | 0 |
| 已生成 md | 222 |

## 范围过滤（scope.txt）

```
targets=222
ours=222
skip_no_source=0
skip_vendored=0
```

## 文件结构

- `manifest.tsv`：全部命名函数分类清单（含 md_file 列）
- `targets.txt`：反编译目标（地址清单）
- `decompiled.txt`：Ghidra 反编译原始输出
- `*.md`：每个非 identical 项目函数的报告

