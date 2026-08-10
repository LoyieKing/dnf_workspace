# df_community_r 逐函数验证报告

## 已从文件/日志验证（Verified from files/logs）

- 总函数数（按重建对象文件导出符号统计）：`1043`
- 原始 ELF 可匹配函数数：`656`
- IDENTICAL（统一严格口径，仅归一化跳转/调用目标地址）函数数：`113`
- 原始可匹配函数平均助记符重叠率：`69.07%`
- 逐函数明细：`dnf_decompile/build/community/df_community_r_function_compare.tsv`

## 每文件函数级摘要

| File | Func Total | In Original | Exact Match | Avg Mnemonic Overlap |
|---|---:|---:|---:|---:|
| `Community/ArchiveLog.cpp.o` | 15 | 15 | 2 | 70.59% |
| `Community/BuddyManager.cpp.o` | 129 | 76 | 16 | 68.57% |
| `Community/CommunityServer.cpp.o` | 43 | 29 | 5 | 59.86% |
| `Community/ConfigFileReader.cpp.o` | 162 | 80 | 19 | 70.68% |
| `Community/CoreDump.cpp.o` | 9 | 9 | 2 | 72.26% |
| `Community/GlobalFunction.cpp.o` | 2 | 2 | 1 | 83.33% |
| `Community/GlobalInstance.cpp.o` | 1 | 1 | 1 | 100.00% |
| `Community/NetworkSession.cpp.o` | 92 | 89 | 15 | 73.33% |
| `Community/PacketDispatcher.cpp.o` | 83 | 29 | 8 | 70.12% |
| `Community/PacketParser.cpp.o` | 5 | 5 | 1 | 84.00% |
| `Community/PacketProc.cpp.o` | 53 | 34 | 5 | 66.27% |
| `Community/ProcessManager.cpp.o` | 10 | 10 | 1 | 69.25% |
| `Community/SessionManager.cpp.o` | 89 | 62 | 10 | 64.85% |
| `Community/User.cpp.o` | 57 | 57 | 6 | 71.42% |
| `Community/UserManager.cpp.o` | 104 | 44 | 8 | 69.47% |
| `Community/rand_r.cpp.o` | 3 | 3 | 2 | 91.98% |
| `DNFServer/ServerCommon/CFileLogWriterBase.cpp.o` | 39 | 22 | 3 | 63.07% |
| `DNFServer/ServerCommon/DNFFileLog.cpp.o` | 99 | 43 | 7 | 66.71% |
| `DNFServer/ServerCommon/DNFFunctionLib.cpp.o` | 31 | 29 | 1 | 64.67% |
| `DNFServer/ServerCommon/Thread.cpp.o` | 11 | 11 | 0 | 67.55% |
| `shared/packet/src/PacketHeader.cpp.o` | 2 | 2 | 0 | 95.00% |
| `shared/packet/src/STGameUserInfo.cpp.o` | 2 | 2 | 0 | 81.25% |
| `shared/packet/src/STPvPBuddyDBInfo.cpp.o` | 2 | 2 | 0 | 78.57% |

## 低重叠优先复核（按文件）

- `Community/CommunityServer.cpp.o`: 59.86%
- `DNFServer/ServerCommon/CFileLogWriterBase.cpp.o`: 63.07%
- `DNFServer/ServerCommon/DNFFunctionLib.cpp.o`: 64.67%
- `Community/SessionManager.cpp.o`: 64.85%
- `Community/PacketProc.cpp.o`: 66.27%
- `DNFServer/ServerCommon/DNFFileLog.cpp.o`: 66.71%
- `DNFServer/ServerCommon/Thread.cpp.o`: 67.55%
- `Community/BuddyManager.cpp.o`: 68.57%
- `Community/ProcessManager.cpp.o`: 69.25%
- `Community/UserManager.cpp.o`: 69.47%

## 来自反编译/DWARF 的推断（Inferred from decompile/DWARF）

- 助记符重叠率高通常表示函数控制流骨架接近，但不等价于完全语义一致。
- 重叠率低的文件建议回到 Ghidra 逐函数核对条件分支、异常路径、容器操作与字符串构造逻辑。
