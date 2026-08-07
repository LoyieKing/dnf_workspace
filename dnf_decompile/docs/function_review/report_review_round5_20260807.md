# df_community_r 第五轮复核：数据段补齐 + 函数级微调（2026-08-07）

## 本轮目标

第四轮后文件大小 960,864/967,844（差 7KB）。本轮：

1. 分析剩余 .rodata 差距（12KB）——确认大部分是指针地址/布局差异而非内容缺失；
2. 补齐剩余命名数据（数组/类成员/常量）；
3. 微调若干函数源码结构（checkTimeToday/GetCurrentResetBaseTime/Hex2Char/Trim/WriteLog）。

## .rodata 差距分析结论

- 原始 .rodata 51,104 vs 我们 39,156（差 12KB）时，4 字节词对比显示大量"仅原始有"的词
  实为**二进制内部地址指针**（如 0x080de968），是布局差异而非缺失内容；
- 命名符号缺口仅 1,359 字节（27 个符号），主要是 18 个副本/7 个副本常量组之外的数组与
  类成员。

## 本轮数据补齐（副本数与原始一致）

用 kURLLength（18 副本常量）的地址块定位各 TU 的 .rodata 区域，确定数组归属与副本数：

| 数组 | 副本数 | 归属 |
|---|---|---|
| `TITLE_BOOK_MAX`（70,200,120,60） | 18 | CommonConstants.h |
| `elixir_item_id`（1039..1046） | 18 | CommonConstants.h |
| `_S_CHARAC_JOB_MASTARY`（55 int） | 18 | CommonConstants.h |
| `guild_att_phase`（5,10,20,35,60,100,150,220,300） | 7 | GuildConstants.h |
| `guild_att_exp`（153 int 经验阈值表） | 7 | GuildConstants.h |
| `LINE_SIZE`（0x1000） | 1 | ArchiveLog.cpp（并用于缓冲大小） |

实测副本数全部一致（7/7、18/18、1/1）。

## 函数级微调（对齐语义，受编译器布局限制无法完全消除助记符差异）

| 函数 | 结果 |
|---|---|
| `checkTimeToday` | 35==35 条，分支结构完全一致（localtime_r 结果存储、result 初始化、|| 合并） |
| `GetCurrentResetBaseTime` | 52 vs 51（原 52 vs 49） |
| `Hex2Char` | 84 vs 81（原 84 vs 87；数字分支在前 + 显式减法匹配 lea） |
| `CArchiveLog::WriteLog` | 84 vs 87（原 84 vs 91；DiffDay 结果不再经 bool 变量） |
| `ConfigFileReader::Trim` | 88 vs 79（循环改为直接递进 start/end） |

残留差异均为 gcc 4.4.4 vs 原始编译器的 -O0 代码生成（xor/setcc 惯用法、寄存器 vs 栈、
分支块布局），无法源码消除。

## 本轮结束指标

| 指标 | 第四轮后 | 本轮后 |
|---|---|---|
| 文件大小 | 960,864（差 7KB） | **974,376 / 967,844（+6.5KB，99.3%）** |
| 符号 MISSING | 2 | 2（仅 CRT） |
| 符号 EXTRA | 7 | 7（工具链产物） |
| .rodata 命名符号缺口 | 27 个/1,359B | **21 个/439B** |
| 项目函数 | 490/490 | 490/490 |

## 剩余差异定性（不可源码消除）

1. 文件 +6.5KB 超量：链接器结构差异——原始用旧 ld（RHEL5 binutils）生成 `.ctors`
   （104B）与 8 字节空 `.eh_frame_hdr`、5 个程序头；Ubuntu ld 2.42 生成 `.init_array`
   （96B）、21.5KB `.eh_frame_hdr`、8 个程序头。环境无旧 binutils 可用。
2. `.symtab` 差 12KB：原始更多本地符号（元数据）。
3. `.rodata` 命名缺口 439B：EmoticonType/InformNotice/nexon_packet 等类成员
   （需类定义）与 CSWTCH.106（libstdc++ locale 表）。
4. 项目函数助记符级 400/490（81.6%）：编译器 -O0 代码生成差异（第三/四轮报告已述）。

