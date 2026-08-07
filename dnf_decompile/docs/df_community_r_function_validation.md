# df_community_r 逐函数验证报告

## 已从文件/日志验证（Verified from files/logs）

- 总函数数（按重建对象文件导出符号统计）：`552`
- 原始 ELF 可匹配函数数：`552`
- 助记符序列完全一致函数数：`351`
- 原始可匹配函数平均助记符重叠率：`77.80%`
- 逐函数明细：`dnf_decompile/source/build-verify-community/df_community_r_function_compare.tsv`

## 每文件函数级摘要

| File | Func Total | In Original | Exact Match | Avg Mnemonic Overlap |
|---|---:|---:|---:|---:|
| `Community/src/AbstractSocket.cpp.o` | 21 | 21 | 9 | 85.66% |
| `Community/src/ArchiveLog.cpp.o` | 11 | 11 | 6 | 70.53% |
| `Community/src/BuddyManager.cpp.o` | 57 | 57 | 45 | 78.95% |
| `Community/src/CPacketParser.cpp.o` | 4 | 4 | 2 | 50.00% |
| `Community/src/ConfigFileReader.cpp.o` | 52 | 52 | 43 | 93.25% |
| `Community/src/CoreDump.cpp.o` | 8 | 8 | 2 | 69.87% |
| `Community/src/DateTime.cpp.o` | 3 | 3 | 2 | 66.67% |
| `Community/src/Epoll.cpp.o` | 7 | 7 | 3 | 81.89% |
| `Community/src/FindBuddy.cpp.o` | 3 | 3 | 2 | 66.67% |
| `Community/src/FindUser.cpp.o` | 3 | 3 | 2 | 66.67% |
| `Community/src/NetworkSession.cpp.o` | 19 | 19 | 8 | 83.72% |
| `Community/src/PacketDispatcher.cpp.o` | 3 | 3 | 3 | 100.00% |
| `Community/src/ProcessManager.cpp.o` | 9 | 9 | 5 | 74.54% |
| `Community/src/SessionManager.cpp.o` | 23 | 23 | 15 | 69.33% |
| `Community/src/SessionProxy.cpp.o` | 8 | 8 | 6 | 85.42% |
| `Community/src/User.cpp.o` | 80 | 80 | 48 | 75.84% |
| `Community/src/UserManager.cpp.o` | 75 | 75 | 52 | 75.66% |
| `Community/src/global.cpp.o` | 11 | 11 | 4 | 96.75% |
| `Community/src/main.cpp.o` | 44 | 44 | 27 | 65.50% |
| `DNFServer/ServerCommon/DNFFileLog.cpp.o` | 63 | 63 | 41 | 75.65% |
| `DNFServer/ServerCommon/DNFFunctionLib.cpp.o` | 30 | 30 | 16 | 93.16% |
| `DNFServer/ServerCommon/Thread.cpp.o` | 10 | 10 | 6 | 60.00% |
| `shared/packet/src/PacketHeader.cpp.o` | 2 | 2 | 1 | 50.00% |
| `shared/packet/src/STGameUserInfo.cpp.o` | 2 | 2 | 1 | 50.00% |
| `shared/packet/src/STPvPBuddyDBInfo.cpp.o` | 4 | 4 | 2 | 50.00% |

## 低重叠优先复核（按文件）

- `Community/src/CPacketParser.cpp.o`: 50.00%
- `shared/packet/src/PacketHeader.cpp.o`: 50.00%
- `shared/packet/src/STGameUserInfo.cpp.o`: 50.00%
- `shared/packet/src/STPvPBuddyDBInfo.cpp.o`: 50.00%
- `DNFServer/ServerCommon/Thread.cpp.o`: 60.00%
- `Community/src/main.cpp.o`: 65.50%
- `Community/src/DateTime.cpp.o`: 66.67%
- `Community/src/FindBuddy.cpp.o`: 66.67%
- `Community/src/FindUser.cpp.o`: 66.67%
- `Community/src/SessionManager.cpp.o`: 69.33%

## 来自反编译/DWARF 的推断（Inferred from decompile/DWARF）

- 助记符重叠率高通常表示函数控制流骨架接近，但不等价于完全语义一致。
- 重叠率低的文件建议回到 Ghidra 逐函数核对条件分支、异常路径、容器操作与字符串构造逻辑。
