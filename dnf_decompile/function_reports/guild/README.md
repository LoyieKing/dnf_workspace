# guild 函数对比报告

| 项 | 值 |
|---|---|
| 原始 ELF | `/mnt/d/Docs/my_sources/dnf_workspace/dnf_installer/build/dnf_data/home/template/neople/guild/df_guild_r` |
| 重建 ELF | `/mnt/d/Docs/my_sources/dnf_workspace/dnf_decompile/build/guild/df_guild_r` |
| 统计口径 | `compare_common` strict（仅归一化直接跳转/调用目标地址） |
| 地址等价口径 | 数据地址（字符串/全局变量）伪代码化为内容/`&符号` 后逐条相等者判为 `IDENTICAL_AE`（视为相同，不生成 md） |
| 豁免 | 第三方基础库（tinyxml/加密哈希/Boost/STL/工具链运行时等，见 `compare_common.is_exempt_symbol`） |
| 符号范围 | symtab 已定义命名函数 T/t/W/w（跳过 `.L*`、初始化守卫、libgcc/libc 运行时） |
| md 范围 | 仅两侧都存在且非 identical 的 **NEAR/DIFF** 函数，且能在重建源码中定位到定义（排除 vendored `Library3rd`） |

## 统计

| 类别 | 数量 |
|---|---|
| IDENTICAL | 127 |
| NEAR | 41 |
| DIFF | 864 |
| MISSING | 0 |
| EMPTY | 0 |
| EXEMPT_SKIP | 0 |
| IDENTICAL_AE（地址等价） | 148 |
| 已生成 md | 851 |

## 范围过滤（scope.txt）

```
targets=905
ours=851
skip_no_source=54
skip_vendored=0
```

## 回归修补（2026-08-11）

- 单函数口径：`gen_function_md.py --services guild --function <mangled>`，相同（IDENTICAL/IDENTICAL_AE）即删除 md。
- 本轮源码修复 125 个函数达成 IDENTICAL（md 已删除）：
  - 手工语义修复：`main`、`CUser::IsSubGuildMaster`、`CTcpDBServer` 构造（C1/C2）、
    `CGuild::InsertGuildMemberChanglableInfo`、`CGuildManager::InsertTodayMember`、
    `CGuild::DeleteGuildMember`、`Packet_DB_Create_Guild_Agit`（C1/C2）。
  - Packet/结构体构造函数批量修复（`#pragma pack(1)` 布局结构体 + 成员赋值，修正偏移并复现
    ORIG 直接偏移存储）：61 个 C1/C2 对（含 ST_* 结构体补 `m0` 零初始化）。
- 剩余 851 个非 identical 函数的完整原因记录于 `caliber_issues.csv`
  （类别：codegen_diff 459 / caliber_issue 185 / other 178 / template_macro 29）。

## 文件结构

- `manifest.tsv`：全部命名函数分类清单（含 md_file 列）
- `targets.txt`：反编译目标（地址清单）
- `decompiled.txt`：Ghidra 反编译原始输出
- `*.md`：每个非 identical 项目函数的报告
