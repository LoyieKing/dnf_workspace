# df_community_r 重建验证报告（2026-08-07 最终混合方案）
## 已从文件/日志验证（Verified from files/logs）
- 工具链：gcc-4.4.7 编译项目代码 + CentOS 5.11 4.1.2 静态 libstdc++ + 4.4.7 libgcc（build-c6-mix2）。
- ELF32/EXEC，NEEDED 与原始完全一致；文件 863,088（原始 967,844）。
- 可靠逐函数审计：项目函数精确 452/916、std 精确 644/1649。
- 符号匹配 2693、字符串交集 3811。

## 逐文件对比表
| File | Defined Symbols | Symbol Hits In Original | Symbol Hit Rate | String Hits In Original |
|---|---:|---:|---:|---:|
| `Community/src/AbstractSocket.cpp.o` | 21 | 21 | 100.0% | 57 |
| `Community/src/ArchiveLog.cpp.o` | 11 | 11 | 100.0% | 43 |
| `Community/src/BuddyManager.cpp.o` | 104 | 89 | 85.6% | 114 |
| `Community/src/CPacketParser.cpp.o` | 4 | 4 | 100.0% | 12 |
| `Community/src/ConfigFileReader.cpp.o` | 105 | 70 | 66.7% | 112 |
| `Community/src/CoreDump.cpp.o` | 8 | 8 | 100.0% | 27 |
| `Community/src/DateTime.cpp.o` | 3 | 3 | 100.0% | 11 |
| `Community/src/Epoll.cpp.o` | 7 | 7 | 100.0% | 40 |
| `Community/src/FindBuddy.cpp.o` | 3 | 3 | 100.0% | 11 |
| `Community/src/FindUser.cpp.o` | 3 | 3 | 100.0% | 11 |
| `Community/src/ISessionManager.cpp.o` | 0 | 0 | 0.0% | 7 |
| `Community/src/NetworkSession.cpp.o` | 19 | 19 | 100.0% | 60 |
| `Community/src/PacketDispatcher.cpp.o` | 51 | 32 | 62.7% | 52 |
| `Community/src/ProcessManager.cpp.o` | 9 | 9 | 100.0% | 38 |
| `Community/src/SessionManager.cpp.o` | 107 | 78 | 72.9% | 124 |
| `Community/src/SessionProxy.cpp.o` | 8 | 8 | 100.0% | 35 |
| `Community/src/User.cpp.o` | 61 | 56 | 91.8% | 91 |
| `Community/src/UserManager.cpp.o` | 104 | 85 | 81.7% | 116 |
| `Community/src/global.cpp.o` | 11 | 11 | 100.0% | 50 |
| `Community/src/main.cpp.o` | 76 | 64 | 84.2% | 134 |
| `DNFServer/ServerCommon/DNFFileLog.cpp.o` | 116 | 83 | 71.6% | 152 |
| `DNFServer/ServerCommon/DNFFunctionLib.cpp.o` | 32 | 32 | 100.0% | 85 |
| `DNFServer/ServerCommon/Thread.cpp.o` | 10 | 10 | 100.0% | 21 |
| `shared/packet/src/PacketHeader.cpp.o` | 2 | 2 | 100.0% | 10 |
| `shared/packet/src/STGameUserInfo.cpp.o` | 2 | 2 | 100.0% | 9 |
| `shared/packet/src/STPvPBuddyDBInfo.cpp.o` | 4 | 4 | 100.0% | 11 |

## 汇总指标
- 简单平均命中率：89.12%
- 加权命中率（按符号数）：81.04% (714/881)
