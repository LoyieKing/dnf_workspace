# 调研报告索引

本目录保存 DNF 服务端逆向重建（df_community_r / df_channel_r / df_stun_r）的全部调研报告与验证数据，生成于 2026-08-06 ~ 2026-08-07。

- `data/`：对比脚本产出的原始数据（TSV / 明细），多数可由 gitignored 的 `source/build-verify-community/` 或重新运行生成脚本复现；此处保留可追踪副本。
- `function_review/`：df_community_r 全量逐函数复核的迭代报告（第二轮 + 第 3~11 轮 + 主 agent 组）。

## 报告（docs/ 根目录）

| 文件 | 内容 | 类型 |
|---|---|---|
| `decompile_order.md` | 全部 13 个服务端二进制的反编译还原顺序（从易到难）与策略 | 报告 |
| `df_community_r_reverification.md` | 深度复核报告：构建参数/ABI 差异（PIE、静态链接、编译器版本）、符号/函数覆盖、数据段差异、包构造函数缺陷、修复清单 | 报告 |
| `df_community_r_missing_functions.md` | 缺失函数补齐记录（2026-08-06 完成，项目级缺失 0） | 报告 |
| `df_community_r_function_divergences.md` | 全量逐函数比对报告（2026-08-07，463 个原始函数；修正 15 处不一致） | 报告 |
| `df_community_r_semantic_equivalence_proof.md` | **语义等价证明**：全部 490 个项目函数与原始二进制语义完全等价（用户确认的验收标准）；30 个助记符 DIFF 的分支拓扑/反编译对照证据，以及审计中修复的 4 处真实差异 | 证明 |
| `df_channel_r_progress.md` | **df_channel_r（channel 服务）还原进度**：25 TU 全部编译链接通过；ChannelService 578/590、TCPThread 312/320、CheckThread 102/111 逐字节一致；全部真实 MISSING 清零；关键对齐开关（namespace 结构、-fno-enforce-eh-specs、pack(1)、类布局、-static-libgcc 等）与最终水位表 | 报告 |
| `df_stun_r_restoration_report.md` | **df_stun_r（STUN 服务器）还原报告**：26 个唯一项目函数全部语义等价，助记符级 25/26（96.2%）；4.1.2 工具链构建、可运行验证、唯一 DIFF（write_log 单指令寄存器产物）说明 | 报告 |
| `df_community_r_validation.md` | 逐文件符号/字符串命中率验证（`compare_df_community_functions.py` 产物副本） | 验证报告 |
| `df_community_r_function_validation.md` | 逐函数助记符重叠验证摘要（产物副本） | 验证报告 |

## 逐函数复核轮次（docs/function_review/）

| 文件 | 内容 |
|---|---|
| `report_review_full_20260807.md` | 第二轮全量逐函数复核 + boost::object_pool 复刻 + gnu++0x 编译模式确认（项目函数符号精确 **490/490**、助记符级 394/490） |
| `report_review_main_group.md` | 主 agent 组逐函数复核（BuddyManager / ConfigFileReader / SessionManager / global / main，5 处 MISALIGN 全部修复） |
| `report_review_round3_20260807.md` | 第三轮全量复核（单 agent）：修正 C1/C2 别名 NOCODE 误报；修复 8 处真实源码差异（find_user/leave_user 的 `ne`/`eq`、enter_user 的 make_pair 右值、OnReqAddBuddy 容量阈值 bug、OnResAddBuddy 双端 fail、req_remove_buddy 布局等）；助记符级精确 **400/490（81.6%）**、DIFF 93→90 |
| `report_review_round4_20260807.md` | 第四轮复核：修正 libstdc++ 链接版本（4.1.2→4.4.4，符号 MISSING 207→2）；复刻 24/24 个 `_GLOBAL__I__` 初始化桩与 18/18 comp_by_time 副本；补齐 Rand_r/pthread_equal/TLS 布局；新增 CommonConstants/GuildConstants 常量头（.rodata 28KB 缺口基本清零）；**文件大小 960,864/967,844（99.28%）** |
| `report_review_round5_20260807.md` | 第五轮复核：.rodata 差距定性（指针地址/布局而非内容）；补齐 5 组数组（副本数 7/18 与原始一致）+ LINE_SIZE；微调 5 个函数源码结构；**文件大小 974,376/967,844（99.3%，+6.5KB 为链接器结构差异）** |
| `report_review_round6_20260807.md` | 第六轮复核：定位 xor 惯用法根因（`== false` 提前返回）；修正 channel_no 为 unsigned char、CreateLogFile 为 bool、regist_signals 前 3 直接检查、OnRecv 主路径在前等 8 处源码；**项目函数 DIFF 92→88、助记符级精确 402/490（82.0%）** |
| `report_review_round7_20260807.md` | 第七轮复核：bool 返回类型系统化（Hex2Char/CreateListenSocket）+ 指针局部变量模式（Binary2Hex/Hex2Binary）；**项目函数 DIFF 83、助记符级精确 407/490（83.1%）**；SetSocket/GetCurrentResetBaseTime ALIGNED |
| `report_review_round8_20260807.md` | 第八轮复核：`-1 < ret` vs if/else 返回形态辨析（Send/SetNonblock ALIGNED，regist_signal 等 shr 形态不可复现）；**项目函数 DIFF 81、助记符级精确 409/490（83.5%）** |
| `report_review_round9_20260807.md` | 第九轮复核：穷尽环境内 8 个编译器版本（4.1.1/4.1.2/4.4.4~7/4.8.2）测试原始全部惯用法，确认无单一版本可复现（`shr+test+je`、setcc 循环物化、rep-stos 展开均无匹配）；剩余差异定性为原始编译器特有 -O0 生成 |
| `report_review_round10_20260807.md` | 第十轮复核：`get_size()` 改为 unsigned 返回（`seta` 无符号比较与原始一致）；OnReq/OnResAddBuddy 的 bool 物化实验确认 AL vs 栈差异不可源码消除；**项目函数 DIFF 81、助记符级精确 409/490（83.5%）稳定** |
| `report_review_round11_20260807.md` | 第十一轮复核（单 agent 全量逐函数）：混合编译器实验（4.1.2/4.4.6/4.4.7 按 TU 分配均不优于 4.4.4-13，最终排除）、60 处源码对齐（shr+test+je 直接条件、xor+test+je `== false`、赋值在条件内、sockaddr_in 命名字段、单累加器 LCG、可移植移位、CFileLogWriter 拆分 -fno-exceptions、CFLog writeLog 非虚、main 显式 return 等）；**项目函数 DIFF 81→33、助记符级精确 457/490（93.3%）** |

## 数据（docs/data/）

| 文件 | 内容 | 生成脚本 |
|---|---|---|
| `df_community_r_all_function_compare.tsv` | 全量符号级对比（3112 行，含 libstdcxx/system 符号）：符号、原始/重建尺寸、分类、助记符重叠率、来源 | `source/compare_all_functions.py` |
| `df_community_r_function_compare_full.tsv` | 按地址去重后的全量审计明细（793 行）：地址、尺寸、指令数、助记符精确/重叠、call 目标与立即数 mismatch | `source/toolchain/audit_full_compare.py` |
| `df_community_r_function_compare.tsv` | 逐函数对比明细（553 行）：文件、符号、尺寸、指令数、助记符重叠率 | `source/compare_df_community_functions.py` |
| `df_community_r_compare.tsv` | 逐文件符号命中/字符串命中汇总（23 行） | `source/compare_df_community_functions.py` |
| `df_stun_r_all_function_compare.tsv` | df_stun_r 逐函数对比明细：符号、地址、尺寸、指令数、分类（IDENTICAL/NEAR/DIFF） | `source/toolchain/compare_stun.py` |
| `misalign_details.txt` | 项目 MISALIGN 函数的逐项语义复核明细（语义分析输出） | `source/toolchain/misalign_report.py` |

## 其他相关文档

- `../README.md`：工程总览、组件架构、重建状态矩阵、反编译还原顺序
- `../.github/copilot-instructions.md`：协作规则（事实/推断分离、源码对比模式）
