# community 函数对比报告

| 项 | 值 |
|---|---|
| 原始 ELF | `/mnt/d/Docs/my_sources/dnf_workspace/dnf_installer/build/dnf_data/home/template/neople/community/df_community_r` |
| 重建 ELF | `/mnt/d/Docs/my_sources/dnf_workspace/dnf_decompile/build/community/df_community_r` |
| 统计口径 | `compare_common` strict（仅归一化直接跳转/调用目标地址） |
| 地址等价口径 | 数据地址（字符串/全局变量）伪代码化为内容/`&符号` 后逐条相等者判为 `IDENTICAL_AE`（视为相同，不生成 md） |
| 豁免 | 第三方基础库（tinyxml/加密哈希/Boost/STL/工具链运行时等，见 `compare_common.is_exempt_symbol`） |
| 符号范围 | symtab 已定义命名函数 T/t/W/w（跳过 `.L*`、初始化守卫、libgcc/libc 运行时） |
| md 范围 | 仅两侧都存在且非 identical 的 **NEAR/DIFF** 函数，且能在重建源码中定位到定义（排除 vendored `Library3rd`） |

## 统计

| 类别 | 数量 |
|---|---|
| IDENTICAL | 0 |
| NEAR | 2 |
| DIFF | 316 |
| MISSING | 11 |
| EMPTY | 0 |
| EXEMPT_SKIP | 0 |
| IDENTICAL_AE（地址等价） | 0 |
| 已生成 md | 265 |

## 范围过滤（scope.txt）

```
targets=318
ours=265
skip_no_source=53
skip_vendored=0
```

## 文件结构

- `manifest.tsv`：全部命名函数分类清单（含 md_file 列）
- `targets.txt`：反编译目标（地址清单）
- `decompiled.txt`：Ghidra 反编译原始输出
- `*.md`：每个非 identical 项目函数的报告

## 缺失函数（原始有、重建无；均为第三方 C 库符号，未生成 md）

共 11 个：

```
_ZN12_GLOBAL__N_1L6xwriteEiPKci	_ZN12_GLOBAL__N_1L6xwriteEiPKci
_ZN16STPvPBuddyDBInfoD1Ev	_ZN16STPvPBuddyDBInfoD1Ev
_ZN16STPvPBuddyDBInfoD2Ev	_ZN16STPvPBuddyDBInfoD2Ev
_ZNK12_GLOBAL__N_121system_error_category7messageEi	_ZNK12_GLOBAL__N_121system_error_category7messageEi
_ZNK12_GLOBAL__N_122generic_error_category7messageEi	_ZNK12_GLOBAL__N_122generic_error_category7messageEi
d_append_buffer	d_append_buffer
d_demangle_callback	d_demangle_callback
d_encoding	d_encoding
d_expression	d_expression
d_print_cast	d_print_cast
d_template_args	d_template_args
```
