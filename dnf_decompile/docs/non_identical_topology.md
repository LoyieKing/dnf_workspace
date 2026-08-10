# 非 identical 源文件拓扑关系（2026-08-10 豁免口径版）

## 0. 口径与方法

- **identical 豁免（用户规则 2026-08-10）**：tinyxml、通用加密/哈希算法（CRijndael/CSHA/CTEA/IMethod、yaSSL/TaoCrypt）、Boost、STL/std 内部实例化、工具链运行时（_Unwind_/__cxa_/operator new-delete/__libc_csu_）移出统计口径（`source/toolchain/compare_common.py::is_exempt_symbol`，见 `docs/compare_caliber.md`）。本报告全部数字均为豁免后口径。
- **非 identical 源文件**：某 TU（.cpp）内存在 ≥1 个被分类为 `NEAR` / `DIFF` / `MISSING` 且**非豁免**的函数（严格口径 CALIBER_VERSION=3）。
- **拓扑边**：源码 `#include` 依赖。`A -> B` 表示 A 包含 B；节点 = 非 identical TU + 其传递依赖的本地头文件。
- **共享头**：被 ≥2 个非 identical TU 直接/传递包含的头文件（修它可一次影响多个 TU）。
- **分层**：Kahn 拓扑排序（SCC 压缩后）。Layer 0 = 最底层被依赖根头文件；最大编号层 = 顶层非 identical TU。
- **环**：include 环（SCC），是耦合热点；本次全部服务均为 0 环。
- 生成工具：`source/toolchain/topology_map.py`；原始数据：`docs/data/topology/<svc>/`。

## 1. 全局总览（豁免后）

| 服务 | 非 identical TU | 依赖头文件 | 共享头(≥2 TU) | include 边 | 层数 | include 环 |
|---|---:|---:|---:|---:|---:|---:|
| stun | 4 | 4 | 3 | 9 | 2 | 0 |
| channel | 15 | 22 | 15 | 77 | 6 | 0 |
| bridge | 20 | 27 | 18 | 79 | 6 | 0 |
| auction | 53 | 89 | 81 | 487 | 9 | 0 |
| point | 53 | 89 | 81 | 487 | 9 | 0 |
| community | 22 | 44 | 24 | 143 | 6 | 0 |
| manager | 11 | 41 | 33 | 72 | 6 | 0 |
| dbmw | 29 | 25 | 24 | 162 | 6 | 0 |
| monitor | 7 | 16 | 9 | 42 | 5 | 0 |
| guild | 16 | 23 | 17 | 100 | 5 | 0 |
| statics | 16 | 21 | 18 | 85 | 5 | 0 |
| relay | 13 | 12 | 12 | 37 | 5 | 0 |
| coserver | 14 | 15 | 15 | 71 | 4 | 0 |

> 豁免后统计面大幅收窄（如 auction 4737→1556 项目函数、manager 1879→504、channel 745→323），剩余全部为项目自有代码。所有服务 include 环均为 0，依赖树为健康 DAG。

## 2. 跨服务共享根（豁免后仍非 identical 的物理共享文件）

| 路径 | 参与服务 | 性质 |
|---|---|---|
| `source/DNFServer/ServerCommon/Thread.cpp|.h` | community, coserver, guild, manager, monitor, dbmw, statics, auction/point | 共享基础线程库（豁免后仍非 identical） |
| `source/DNFServer/ServerCommon/DNFFunctionLib.cpp|.h` | 同上 | 共享工具函数库 |
| `source/DNFServer/ServerCommon/DNFFileLog.cpp|.h` + `CFileLogWriterBase.cpp` | 同上 | 共享日志框架 |
| `source/DNFServer/GameServer/ServerLab/...` | auction = point（同一物理树） | 53 个非 identical TU 完全同源，改一处须同步重建两边 |
| `source/shared/packet/src/PacketHeader.cpp` 等 | community（+ 其余服务共享头文件） | 报文布局库 |

> tinyxml/Boost/yaSSL/TaoCrypt/STL 等基础内容已豁免，不再出现在本拓扑中。

## 3. 逐服务拓扑

### 3.1 stun

- 非 identical TU：**4**；依赖头：4；共享头(≥2 TU)：3；include 边：9；层数：2；include 环：0

非 identical 源文件（DIFF/NEAR/MISSING 函数数，均为豁免后）：

| 源文件 | DIFF | NEAR | MISSING |
|---|---:|---:|---:|
| `DNFServer/StunServer/stun_server/global_func.cpp` | 1 | 9 | 0 |
| `DNFServer/StunServer/stun_server/stun.cpp` | 0 | 4 | 0 |
| `DNFServer/StunServer/stun_server/server.cpp` | 0 | 3 | 0 |
| `DNFServer/StunServer/stun_server/udp.cpp` | 0 | 3 | 0 |

耦合最重的共享头（被非 identical TU 依赖数）：

| 头文件 | 依赖它的非 identical TU 数 |
|---|---:|
| `DNFServer/StunServer/stun_server/global_func.h` | 3 |
| `DNFServer/StunServer/stun_server/udp.h` | 3 |
| `DNFServer/StunServer/stun_server/stun.h` | 2 |

分层摘要（共 2 层）：

- 底层根（Layer 0，4 个）：`DNFServer/StunServer/stun_server/global_func.h`、`DNFServer/StunServer/stun_server/server.h`、`DNFServer/StunServer/stun_server/stun.h`、`DNFServer/StunServer/stun_server/udp.h`
- 顶层（Layer 1，4 个）：`DNFServer/StunServer/stun_server/global_func.cpp`、`DNFServer/StunServer/stun_server/server.cpp`、`DNFServer/StunServer/stun_server/stun.cpp`、`DNFServer/StunServer/stun_server/udp.cpp`

完整分层见 `docs/data/topology/stun/layers.txt`，逐文件依赖见 `edges.tsv`，DOT 图见 `graph.dot`。

### 3.2 channel

- 非 identical TU：**15**；依赖头：22；共享头(≥2 TU)：15；include 边：77；层数：6；include 环：0

非 identical 源文件（DIFF/NEAR/MISSING 函数数，均为豁免后）：

| 源文件 | DIFF | NEAR | MISSING |
|---|---:|---:|---:|
| `ChannelOld/DNFChannelServer/ChannelService.cpp` | 8 | 40 | 0 |
| `ChannelOld/DNFChannelServer/Service.cpp` | 0 | 13 | 0 |
| `ChannelOld/DNFChannelServer/Socket.cpp` | 1 | 10 | 0 |
| `ChannelOld/DNFChannelServer/DNFChannelServer.cpp` | 0 | 9 | 0 |
| `ChannelOld/DNFChannelServer/TCPUser.cpp` | 0 | 9 | 0 |
| `ChannelOld/DNFChannelServer/CheckThread.cpp` | 0 | 8 | 0 |
| `ChannelOld/DNFChannelServer/TCPThread.cpp` | 2 | 5 | 0 |
| `ChannelOld/DNFChannelServer/Script.cpp` | 0 | 5 | 0 |
| `ChannelOld/DNFChannelServer/ScriptRawData.cpp` | 0 | 2 | 0 |
| `ChannelOld/DNFChannelServer/Token.cpp` | 0 | 2 | 0 |
| `ChannelOld/DNFChannelServer/ScriptData.cpp` | 0 | 1 | 0 |
| `ChannelOld/DNFChannelServer/TCPAcceptThread.cpp` | 0 | 1 | 0 |
| `ChannelOld/DNFChannelServer/Thread.cpp` | 0 | 1 | 0 |
| `ChannelOld/DNFChannelServer/UDPHandler.cpp` | 0 | 1 | 0 |
| `ChannelOld/DNFChannelServer/UDPThread.cpp` | 1 | 0 | 0 |

耦合最重的共享头（被非 identical TU 依赖数）：

| 头文件 | 依赖它的非 identical TU 数 |
|---|---:|
| `ChannelOld/DNFChannelServer/stdafx.h` | 15 |
| `ChannelOld/DNFChannelServer/ThreadLock.h` | 12 |
| `ChannelOld/DNFChannelServer/GlobalInstance.h` | 11 |
| `ChannelOld/DNFChannelServer/Exception.h` | 10 |
| `ChannelOld/DNFChannelServer/System.h` | 10 |
| `ChannelOld/DNFChannelServer/Thread.h` | 10 |
| `ChannelOld/DNFChannelServer/ChannelServiceApp.h` | 9 |
| `ChannelOld/DNFChannelServer/DebugLog.h` | 9 |

分层摘要（共 6 层）：

- 底层根（Layer 0，1 个）：`ChannelOld/DNFChannelServer/stdafx.h`
- 顶层（Layer 5，15 个）：`ChannelOld/DNFChannelServer/ChannelService.cpp`、`ChannelOld/DNFChannelServer/CheckThread.cpp`、`ChannelOld/DNFChannelServer/DNFChannelServer.cpp`、`ChannelOld/DNFChannelServer/Script.cpp`、`ChannelOld/DNFChannelServer/ScriptData.cpp`、`ChannelOld/DNFChannelServer/ScriptRawData.cpp` …

完整分层见 `docs/data/topology/channel/layers.txt`，逐文件依赖见 `edges.tsv`，DOT 图见 `graph.dot`。

### 3.3 bridge

- 非 identical TU：**20**；依赖头：27；共享头(≥2 TU)：18；include 边：79；层数：6；include 环：0

非 identical 源文件（DIFF/NEAR/MISSING 函数数，均为豁免后）：

| 源文件 | DIFF | NEAR | MISSING |
|---|---:|---:|---:|
| `ChannelOld/DNFChannelBridge/ChannelService.cpp` | 7 | 54 | 0 |
| `ChannelOld/DNFChannelBridge/Service.cpp` | 0 | 16 | 0 |
| `ChannelOld/DNFChannelBridge/DNFChannelBridge.cpp` | 0 | 15 | 0 |
| `ChannelOld/DNFChannelBridge/CheckThread.cpp` | 1 | 9 | 0 |
| `ChannelOld/DNFChannelBridge/Socket.cpp` | 1 | 9 | 0 |
| `ChannelOld/DNFChannelBridge/TCPUser.cpp` | 2 | 7 | 0 |
| `ChannelOld/DNFChannelBridge/Script.cpp` | 0 | 6 | 0 |
| `ChannelOld/DNFChannelBridge/TCPThread.cpp` | 2 | 4 | 0 |
| `ChannelOld/DNFChannelBridge/TCPAcceptThread.cpp` | 1 | 4 | 0 |
| `ChannelOld/DNFChannelBridge/DBMgr.cpp` | 1 | 3 | 0 |
| `ChannelOld/DNFChannelBridge/DNFServerCommon/DNFFunctionLib.cpp` | 2 | 1 | 0 |
| `ChannelOld/DNFChannelBridge/ScriptRawData.cpp` | 0 | 3 | 0 |
| `ChannelOld/DNFChannelBridge/ScriptThread.cpp` | 1 | 2 | 0 |
| `ChannelOld/DNFChannelBridge/TCPHandler.cpp` | 0 | 3 | 0 |
| `ChannelOld/DNFChannelBridge/Thread.cpp` | 0 | 3 | 0 |
| `ChannelOld/DNFChannelBridge/UDPThread.cpp` | 1 | 2 | 0 |
| `ChannelOld/DNFChannelBridge/Token.cpp` | 0 | 2 | 0 |
| `ChannelOld/DNFChannelBridge/UDPHandler.cpp` | 0 | 2 | 0 |
| `ChannelOld/DNFChannelBridge/Globals.cpp` | 0 | 1 | 0 |
| `ChannelOld/DNFChannelBridge/ScriptData.cpp` | 0 | 1 | 0 |

耦合最重的共享头（被非 identical TU 依赖数）：

| 头文件 | 依赖它的非 identical TU 数 |
|---|---:|
| `ChannelOld/DNFChannelBridge/stdafx.h` | 18 |
| `ChannelOld/DNFChannelBridge/Exception.h` | 14 |
| `ChannelOld/DNFChannelBridge/GlobalInstance.h` | 14 |
| `ChannelOld/DNFChannelBridge/System.h` | 14 |
| `ChannelOld/DNFChannelBridge/Thread.h` | 14 |
| `ChannelOld/DNFChannelBridge/ThreadLock.h` | 14 |
| `ChannelOld/DNFChannelBridge/ChannelServiceApp.h` | 13 |
| `ChannelOld/DNFChannelBridge/DebugLog.h` | 13 |

分层摘要（共 6 层）：

- 底层根（Layer 0，1 个）：`ChannelOld/DNFChannelBridge/stdafx.h`
- 顶层（Layer 5，20 个）：`ChannelOld/DNFChannelBridge/ChannelService.cpp`、`ChannelOld/DNFChannelBridge/CheckThread.cpp`、`ChannelOld/DNFChannelBridge/DBMgr.cpp`、`ChannelOld/DNFChannelBridge/DNFChannelBridge.cpp`、`ChannelOld/DNFChannelBridge/DNFServerCommon/DNFFunctionLib.cpp`、`ChannelOld/DNFChannelBridge/Globals.cpp` …

完整分层见 `docs/data/topology/bridge/layers.txt`，逐文件依赖见 `edges.tsv`，DOT 图见 `graph.dot`。

### 3.4 auction

- 非 identical TU：**53**；依赖头：89；共享头(≥2 TU)：81；include 边：487；层数：9；include 环：0

非 identical 源文件（DIFF/NEAR/MISSING 函数数，均为豁免后）：

| 源文件 | DIFF | NEAR | MISSING |
|---|---:|---:|---:|
| `DNFServer/GameServer/ServerLab/ServerLib/basic_source/WorkThread.cpp` | 3 | 35 | 0 |
| `DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/ServerLibrary2.0.cpp` | 4 | 28 | 0 |
| `DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/auction/Auction.cpp` | 2 | 25 | 0 |
| `DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/auction/dictionary/Search.cpp` | 6 | 21 | 0 |
| `DNFServer/GameServer/ServerLab/Auction/AuctionServer/auction_source/HandlerFor_DB_.cpp` | 5 | 19 | 0 |
| `DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/auction/dictionary/AuctionDictionary.cpp` | 8 | 14 | 0 |
| `DNFServer/GameServer/ServerLab/Auction/AuctionServer/auction_source/HandlerFor_GA_.cpp` | 11 | 8 | 0 |
| `DNFServer/GameServer/ServerLab/ServerLib/basic_source/LinuxService.cpp` | 0 | 19 | 0 |
| `DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/Character.cpp` | 0 | 18 | 0 |
| `DNFServer/ServerCommon/DNFFunctionLib.cpp` | 3 | 14 | 0 |
| `DNFServer/GameServer/ServerLab/Auction/AuctionServer/auction_source/HandlerFor_GP_JPN.cpp` | 8 | 7 | 0 |
| `DNFServer/GameServer/ServerLab/ServerLib/basic_source/Socket.cpp` | 2 | 10 | 0 |
| `DNFServer/GameServer/ServerLab/ServerLib/common_source/TimeManager.cpp` | 2 | 8 | 0 |
| `DNFServer/ServerCommon/DNFFileLog.cpp` | 5 | 5 | 0 |
| `DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/GameDataPool.cpp` | 0 | 9 | 0 |
| `DNFServer/GameServer/ServerLab/ServerLib/basic_source/TraceLog.cpp` | 2 | 7 | 0 |
| `DNFServer/GameServer/ServerLab/ServerLib/common_source/ActiveNetClose.cpp` | 0 | 9 | 0 |
| `DNFServer/GameServer/ServerLab/ServerLib/common_source/TCPThread.cpp` | 3 | 6 | 0 |
| `DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/StatisticsCollector.cpp` | 0 | 8 | 0 |
| `DNFServer/GameServer/ServerLab/Auction/AuctionServer/auction_source/HandlerFor_TE_.cpp` | 1 | 7 | 0 |
| `DNFServer/GameServer/ServerLab/ServerLib/basic_source/TCPUser.cpp` | 3 | 5 | 0 |
| `DNFServer/GameServer/ServerLab/ServerLib/common_source/DBConnection.cpp` | 2 | 6 | 0 |
| `DNFServer/GameServer/ServerLab/ServerLib/common_source/TCPSendThread.cpp` | 1 | 7 | 0 |
| `DNFServer/GameServer/ServerLab/ServerLib/common_source/CommonDataPool.cpp` | 0 | 7 | 0 |
| `DNFServer/GameServer/ServerLab/ServerLib/common_source/ServiceFactory.cpp` | 2 | 5 | 0 |
| `DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/auction/dictionary/AveragePriceDictionary.cpp` | 1 | 5 | 0 |
| `DNFServer/ServerCommon/ServerXml.cpp` | 1 | 5 | 0 |
| `DNFServer/GameServer/ServerLab/Auction/AuctionServer/auction_source/TeaInitialize.cpp` | 0 | 5 | 0 |
| `DNFServer/GameServer/ServerLab/ServerLib/common_source/LogSendThread.cpp` | 2 | 3 | 0 |
| `DNFServer/GameServer/ServerLab/ServerLib/common_source/TimerThread.cpp` | 2 | 3 | 0 |
| `DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/Zone.cpp` | 0 | 4 | 0 |
| `DNFServer/GameServer/ServerLab/ServerLib/basic_source/RecvBuffer.cpp` | 2 | 2 | 0 |
| `DNFServer/GameServer/ServerLab/ServerLib/common_source/IArea.cpp` | 1 | 3 | 0 |
| `DNFServer/GameServer/ServerLab/AppCommon/AuctionCommon/ServiceError.cpp` | 0 | 3 | 0 |
| `DNFServer/GameServer/ServerLab/Auction/AuctionServer/auction_source/InterHandler.cpp` | 0 | 3 | 0 |
| `DNFServer/GameServer/ServerLab/ServerLib/basic_source/Script.cpp` | 0 | 3 | 0 |
| `DNFServer/GameServer/ServerLab/ServerLib/basic_source/Thread.cpp` | 0 | 3 | 0 |
| `DNFServer/GameServer/ServerLab/ServerLib/basic_source/Token.cpp` | 0 | 3 | 0 |
| `DNFServer/GameServer/ServerLab/ServerLib/common_source/NSLDBThread.cpp` | 1 | 2 | 0 |
| `DNFServer/GameServer/ServerLab/ServerLib/common_source/TActiveConnect.cpp` | 2 | 1 | 0 |
| `DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/DNFFunctionLibWrapper.cpp` | 2 | 0 | 0 |
| `DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/auction/dictionary/CharacterDictionary.cpp` | 0 | 2 | 0 |
| `DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/auction/dictionary/ExpireTimeDictionary.cpp` | 0 | 2 | 0 |
| `DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/auction/dictionary/ReliabilityDictionary.cpp` | 0 | 2 | 0 |
| `DNFServer/GameServer/ServerLab/ServerLib/basic_source/DataPool.cpp` | 0 | 2 | 0 |
| `DNFServer/GameServer/ServerLab/ServerLib/common_source/IHandler.cpp` | 0 | 2 | 0 |
| `DNFServer/ServerCommon/CFileLogWriterBase.cpp` | 0 | 2 | 0 |
| `DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/AuctionString.cpp` | 1 | 0 | 0 |
| `DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/version.cpp` | 0 | 1 | 0 |
| `DNFServer/GameServer/ServerLab/ServerLib/basic_source/System.cpp` | 1 | 0 | 0 |
| `DNFServer/GameServer/ServerLab/ServerLib/common_source/DBDispatcher.cpp` | 1 | 0 | 0 |
| `DNFServer/GameServer/ServerLab/ServerLib/common_source/InterDispatcher.cpp` | 1 | 0 | 0 |
| `DNFServer/GameServer/ServerLab/ServerLib/common_source/TCPDispatcher.cpp` | 1 | 0 | 0 |

耦合最重的共享头（被非 identical TU 依赖数）：

| 头文件 | 依赖它的非 identical TU 数 |
|---|---:|
| `DNFServer/GameServer/ServerLab/ServerLib/basic_source/ThreadLock.h` | 41 |
| `DNFServer/GameServer/ServerLab/ServerLib/basic_source/GlobalInstance.h` | 38 |
| `DNFServer/GameServer/ServerLab/ServerLib/basic_source/System.h` | 36 |
| `DNFServer/GameServer/ServerLab/ServerLib/basic_source/TraceLog.h` | 36 |
| `DNFServer/GameServer/ServerLab/ServerLib/basic_source/Thread.h` | 35 |
| `DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/auction/AuctionItem.h` | 34 |
| `shared/common/include/DBTransactionDesign.h` | 32 |
| `DNFServer/GameServer/ServerLab/ServerLib/basic_source/Token.h` | 31 |

分层摘要（共 9 层）：

- 底层根（Layer 0，2 个）：`DNFServer/GameServer/ServerLab/ServerLib/basic_source/System.h`、`DNFServer/GameServer/ServerLab/ServerLib/basic_source/ThreadLock.h`
- 顶层（Layer 8，53 个）：`DNFServer/GameServer/ServerLab/AppCommon/AuctionCommon/ServiceError.cpp`、`DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/AuctionString.cpp`、`DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/Character.cpp`、`DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/DNFFunctionLibWrapper.cpp`、`DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/GameDataPool.cpp`、`DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/ServerLibrary2.0.cpp` …

完整分层见 `docs/data/topology/auction/layers.txt`，逐文件依赖见 `edges.tsv`，DOT 图见 `graph.dot`。

### 3.5 point

- 非 identical TU：**53**；依赖头：89；共享头(≥2 TU)：81；include 边：487；层数：9；include 环：0

非 identical 源文件（DIFF/NEAR/MISSING 函数数，均为豁免后）：

| 源文件 | DIFF | NEAR | MISSING |
|---|---:|---:|---:|
| `DNFServer/GameServer/ServerLab/ServerLib/basic_source/WorkThread.cpp` | 3 | 35 | 0 |
| `DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/ServerLibrary2.0.cpp` | 4 | 28 | 0 |
| `DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/auction/Auction.cpp` | 2 | 25 | 0 |
| `DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/auction/dictionary/Search.cpp` | 5 | 21 | 0 |
| `DNFServer/GameServer/ServerLab/Auction/AuctionServer/auction_source/HandlerFor_DB_.cpp` | 5 | 19 | 0 |
| `DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/auction/dictionary/AuctionDictionary.cpp` | 8 | 14 | 0 |
| `DNFServer/GameServer/ServerLab/Auction/AuctionServer/auction_source/HandlerFor_GA_.cpp` | 11 | 8 | 0 |
| `DNFServer/GameServer/ServerLab/ServerLib/basic_source/LinuxService.cpp` | 0 | 19 | 0 |
| `DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/Character.cpp` | 0 | 18 | 0 |
| `DNFServer/ServerCommon/DNFFunctionLib.cpp` | 3 | 14 | 0 |
| `DNFServer/GameServer/ServerLab/Auction/AuctionServer/auction_source/HandlerFor_GP_JPN.cpp` | 8 | 7 | 0 |
| `DNFServer/GameServer/ServerLab/ServerLib/basic_source/Socket.cpp` | 2 | 10 | 0 |
| `DNFServer/GameServer/ServerLab/ServerLib/common_source/TimeManager.cpp` | 2 | 8 | 0 |
| `DNFServer/ServerCommon/DNFFileLog.cpp` | 5 | 5 | 0 |
| `DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/GameDataPool.cpp` | 0 | 9 | 0 |
| `DNFServer/GameServer/ServerLab/ServerLib/basic_source/TraceLog.cpp` | 2 | 7 | 0 |
| `DNFServer/GameServer/ServerLab/ServerLib/common_source/ActiveNetClose.cpp` | 0 | 9 | 0 |
| `DNFServer/GameServer/ServerLab/ServerLib/common_source/TCPThread.cpp` | 3 | 6 | 0 |
| `DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/StatisticsCollector.cpp` | 0 | 8 | 0 |
| `DNFServer/GameServer/ServerLab/Auction/AuctionServer/auction_source/HandlerFor_TE_.cpp` | 1 | 7 | 0 |
| `DNFServer/GameServer/ServerLab/ServerLib/basic_source/TCPUser.cpp` | 3 | 5 | 0 |
| `DNFServer/GameServer/ServerLab/ServerLib/common_source/DBConnection.cpp` | 2 | 6 | 0 |
| `DNFServer/GameServer/ServerLab/ServerLib/common_source/TCPSendThread.cpp` | 1 | 7 | 0 |
| `DNFServer/GameServer/ServerLab/ServerLib/common_source/CommonDataPool.cpp` | 0 | 7 | 0 |
| `DNFServer/GameServer/ServerLab/ServerLib/common_source/ServiceFactory.cpp` | 2 | 5 | 0 |
| `DNFServer/ServerCommon/ServerXml.cpp` | 1 | 5 | 0 |
| `DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/auction/dictionary/AveragePriceDictionary.cpp` | 0 | 5 | 0 |
| `DNFServer/GameServer/ServerLab/Auction/AuctionServer/auction_source/TeaInitialize.cpp` | 0 | 5 | 0 |
| `DNFServer/GameServer/ServerLab/ServerLib/common_source/LogSendThread.cpp` | 2 | 3 | 0 |
| `DNFServer/GameServer/ServerLab/ServerLib/common_source/TimerThread.cpp` | 2 | 3 | 0 |
| `DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/Zone.cpp` | 0 | 4 | 0 |
| `DNFServer/GameServer/ServerLab/ServerLib/basic_source/RecvBuffer.cpp` | 2 | 2 | 0 |
| `DNFServer/GameServer/ServerLab/ServerLib/common_source/IArea.cpp` | 1 | 3 | 0 |
| `DNFServer/GameServer/ServerLab/AppCommon/AuctionCommon/ServiceError.cpp` | 0 | 3 | 0 |
| `DNFServer/GameServer/ServerLab/Auction/AuctionServer/auction_source/InterHandler.cpp` | 0 | 3 | 0 |
| `DNFServer/GameServer/ServerLab/ServerLib/basic_source/Script.cpp` | 0 | 3 | 0 |
| `DNFServer/GameServer/ServerLab/ServerLib/basic_source/Thread.cpp` | 0 | 3 | 0 |
| `DNFServer/GameServer/ServerLab/ServerLib/basic_source/Token.cpp` | 0 | 3 | 0 |
| `DNFServer/GameServer/ServerLab/ServerLib/common_source/NSLDBThread.cpp` | 1 | 2 | 0 |
| `DNFServer/GameServer/ServerLab/ServerLib/common_source/TActiveConnect.cpp` | 2 | 1 | 0 |
| `DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/DNFFunctionLibWrapper.cpp` | 2 | 0 | 0 |
| `DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/auction/dictionary/CharacterDictionary.cpp` | 0 | 2 | 0 |
| `DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/auction/dictionary/ExpireTimeDictionary.cpp` | 0 | 2 | 0 |
| `DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/auction/dictionary/ReliabilityDictionary.cpp` | 0 | 2 | 0 |
| `DNFServer/GameServer/ServerLab/ServerLib/basic_source/DataPool.cpp` | 0 | 2 | 0 |
| `DNFServer/GameServer/ServerLab/ServerLib/common_source/IHandler.cpp` | 0 | 2 | 0 |
| `DNFServer/ServerCommon/CFileLogWriterBase.cpp` | 0 | 2 | 0 |
| `DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/AuctionString.cpp` | 1 | 0 | 0 |
| `DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/version.cpp` | 0 | 1 | 0 |
| `DNFServer/GameServer/ServerLab/ServerLib/basic_source/System.cpp` | 1 | 0 | 0 |
| `DNFServer/GameServer/ServerLab/ServerLib/common_source/DBDispatcher.cpp` | 1 | 0 | 0 |
| `DNFServer/GameServer/ServerLab/ServerLib/common_source/InterDispatcher.cpp` | 1 | 0 | 0 |
| `DNFServer/GameServer/ServerLab/ServerLib/common_source/TCPDispatcher.cpp` | 1 | 0 | 0 |

耦合最重的共享头（被非 identical TU 依赖数）：

| 头文件 | 依赖它的非 identical TU 数 |
|---|---:|
| `DNFServer/GameServer/ServerLab/ServerLib/basic_source/ThreadLock.h` | 41 |
| `DNFServer/GameServer/ServerLab/ServerLib/basic_source/GlobalInstance.h` | 38 |
| `DNFServer/GameServer/ServerLab/ServerLib/basic_source/System.h` | 36 |
| `DNFServer/GameServer/ServerLab/ServerLib/basic_source/TraceLog.h` | 36 |
| `DNFServer/GameServer/ServerLab/ServerLib/basic_source/Thread.h` | 35 |
| `DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/auction/AuctionItem.h` | 34 |
| `shared/common/include/DBTransactionDesign.h` | 32 |
| `DNFServer/GameServer/ServerLab/ServerLib/basic_source/Token.h` | 31 |

分层摘要（共 9 层）：

- 底层根（Layer 0，2 个）：`DNFServer/GameServer/ServerLab/ServerLib/basic_source/System.h`、`DNFServer/GameServer/ServerLab/ServerLib/basic_source/ThreadLock.h`
- 顶层（Layer 8，53 个）：`DNFServer/GameServer/ServerLab/AppCommon/AuctionCommon/ServiceError.cpp`、`DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/AuctionString.cpp`、`DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/Character.cpp`、`DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/DNFFunctionLibWrapper.cpp`、`DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/GameDataPool.cpp`、`DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/ServerLibrary2.0.cpp` …

完整分层见 `docs/data/topology/point/layers.txt`，逐文件依赖见 `edges.tsv`，DOT 图见 `graph.dot`。

### 3.6 community

- 目录结构已按 ORIG 二进制 STT_FILE 布局重构（2026-08-10）：`source/Community/` 平铺，
  一个主类一个文件（ArchiveLog 含 DateTime、BuddyManager 含 CFindBuddy、CommunityServer、
  ConfigFileReader、CoreDump、GlobalFunction、GlobalInstance、NetworkSession 含 CAbstractSocket、
  PacketDispatcher、PacketParser、PacketProc 含 g_user_manager、ProcessManager、SessionManager
  含 ISessionManager/CEpoll/CSessionProxy、User、UserManager 含 CFindUser、rand_r；
  DNFFileLog/DNFFunctionLib 复用 DNFServer/ServerCommon 同源文件）。
- 非 identical TU：**22**；依赖头：44；共享头(≥2 TU)：24；include 边：143；层数：6；include 环：0

非 identical 源文件（DIFF/NEAR/MISSING 函数数，均为豁免后）：

| 源文件 | DIFF | NEAR | MISSING |
|---|---:|---:|---:|
| `Community/User.cpp` | 46 | 0 | 0 |
| `Community/NetworkSession.cpp` | 36 | 1 | 2 |
| `DNFServer/ServerCommon/DNFFunctionLib.cpp` | 28 | 0 | 1 |
| `Community/SessionManager.cpp` | 32 | 0 | 0 |
| `DNFServer/ServerCommon/DNFFileLog.cpp` | 17 | 0 | 0 |
| `Community/PacketProc.cpp` | 14 | 1 | 1 |
| `Community/ArchiveLog.cpp` | 13 | 0 | 0 |
| `Community/BuddyManager.cpp` | 13 | 0 | 0 |
| `DNFServer/ServerCommon/Thread.cpp` | 11 | 0 | 0 |
| `Community/ConfigFileReader.cpp` | 9 | 0 | 0 |
| `Community/ProcessManager.cpp` | 9 | 0 | 0 |
| `Community/UserManager.cpp` | 8 | 0 | 0 |
| `Community/CoreDump.cpp` | 7 | 0 | 0 |
| `DNFServer/ServerCommon/CFileLogWriterBase.cpp` | 5 | 0 | 0 |
| `Community/CommunityServer.cpp` | 4 | 0 | 0 |
| `Community/PacketDispatcher.cpp` | 4 | 0 | 0 |
| `Community/PacketParser.cpp` | 4 | 0 | 0 |
| `shared/packet/src/PacketHeader.cpp` | 2 | 0 | 0 |
| `shared/packet/src/STGameUserInfo.cpp` | 2 | 0 | 0 |
| `shared/packet/src/STPvPBuddyDBInfo.cpp` | 2 | 0 | 0 |
| `Community/GlobalFunction.cpp` | 1 | 0 | 0 |
| `Community/rand_r.cpp` | 1 | 0 | 0 |

耦合最重的共享头（被非 identical TU 依赖数）：

| 头文件 | 依赖它的非 identical TU 数 |
|---|---:|
| `DNFServer/ServerCommon/DNFFunctionLib.h` | 17 |
| `Community/CommonConstants.h` | 13 |
| `shared/common/include/ReverseEngineerLib.h` | 12 |
| `Community/GuildConstants.h` | 7 |
| `shared/packet/include/PacketHeader.h` | 7 |
| `Community/ArchiveLog.h` | 6 |
| `Community/NetworkSession.h` | 6 |
| `shared/packet/include/STPvPBuddyDBInfo.h` | 6 |
| `Community/BuddyManager.h` | 5 |
| `Community/PacketDispatcher.h` | 5 |
| `Community/PacketProc.h` | 5 |
| `shared/packet/include/STGameUserInfo.h` | 5 |
| `Community/User.h` | 4 |
| `Community/UserManager.h` | 4 |

分层摘要（共 6 层）：

- 底层根（Layer 0，1 个）：`shared/common/include/ReverseEngineerLib.h`
- 顶层（Layer 5，22 个）：`Community/ArchiveLog.cpp`、`Community/BuddyManager.cpp`、`Community/CommunityServer.cpp`、`Community/ConfigFileReader.cpp`、`Community/CoreDump.cpp`、`Community/GlobalFunction.cpp` …

完整分层见 `docs/data/topology/community/layers.txt`，逐文件依赖见 `edges.tsv`，DOT 图见 `graph.dot`。

### 3.7 manager

- 非 identical TU：**11**；依赖头：41；共享头(≥2 TU)：33；include 边：72；层数：6；include 环：0

非 identical 源文件（DIFF/NEAR/MISSING 函数数，均为豁免后）：

| 源文件 | DIFF | NEAR | MISSING |
|---|---:|---:|---:|
| `manager/ManagerTypes.cpp` | 243 | 88 | 0 |
| `manager/ManagerApp.cpp` | 13 | 7 | 0 |
| `DNFServer/ServerCommon/DNFFunctionLib.cpp` | 12 | 7 | 0 |
| `DNFServer/ServerCommon/DNFFileLog.cpp` | 6 | 5 | 0 |
| `Library3rd/MySQL/extlib/zlib/trees.h` | 4 | 1 | 0 |
| `Library3rd/MySQL/include/my_time.h` | 3 | 0 | 0 |
| `DNFServer/ServerCommon/CFileLogWriterBase.cpp` | 0 | 2 | 0 |
| `Library3rd/MySQL/strings/dtoa.c` | 0 | 2 | 0 |
| `DNFServer/ServerCommon/Thread.cpp` | 1 | 0 | 0 |
| `Library3rd/MySQL/include/sha1.h` | 1 | 0 | 0 |
| `Library3rd/MySQL/mysys/my_thr_init.c` | 1 | 0 | 0 |

耦合最重的共享头（被非 identical TU 依赖数）：

| 头文件 | 依赖它的非 identical TU 数 |
|---|---:|
| `DNFServer/ServerCommon/Thread.h` | 8 |
| `DNFServer/ServerCommon/DNFFileLog.h` | 5 |
| `DNFServer/ServerCommon/DNFFunctionLib.h` | 4 |
| `Library3rd/MySQL/include/my_alloc.h` | 4 |
| `Library3rd/MySQL/include/typelib.h` | 4 |
| `Library3rd/MySQL/include/config-win.h` | 3 |
| `Library3rd/MySQL/include/my_attribute.h` | 3 |
| `Library3rd/MySQL/include/my_charsets.h` | 3 |

分层摘要（共 6 层）：

- 底层根（Layer 0，2 个）：`Library3rd/MySQL/include/my_alloc.h`、`shared/common/include/ReverseEngineerLib.h`
- 顶层（Layer 5，11 个）：`DNFServer/ServerCommon/CFileLogWriterBase.cpp`、`DNFServer/ServerCommon/DNFFileLog.cpp`、`DNFServer/ServerCommon/DNFFunctionLib.cpp`、`DNFServer/ServerCommon/Thread.cpp`、`Library3rd/MySQL/extlib/zlib/trees.h`、`Library3rd/MySQL/include/my_time.h` …

完整分层见 `docs/data/topology/manager/layers.txt`，逐文件依赖见 `edges.tsv`，DOT 图见 `graph.dot`。

### 3.8 dbmw

- 非 identical TU：**29**；依赖头：25；共享头(≥2 TU)：24；include 边：162；层数：6；include 环：0

非 identical 源文件（DIFF/NEAR/MISSING 函数数，均为豁免后）：

| 源文件 | DIFF | NEAR | MISSING |
|---|---:|---:|---:|
| `dbmw/CDBManager.cpp` | 200 | 10 | 0 |
| `dbmw/CPacketTranslater.cpp` | 120 | 1 | 0 |
| `dbmw/MemPool.cpp` | 22 | 19 | 0 |
| `dbmw/CAppConfig.cpp` | 22 | 13 | 0 |
| `dbmw/CMySql.cpp` | 24 | 7 | 0 |
| `dbmw/CSignal.cpp` | 13 | 18 | 0 |
| `dbmw/TCPSocket.cpp` | 20 | 4 | 0 |
| `dbmw/ManagerApp.cpp` | 18 | 5 | 0 |
| `DNFServer/ServerCommon/DNFFunctionLib.cpp` | 12 | 7 | 0 |
| `dbmw/CPacketTracer.cpp` | 13 | 3 | 0 |
| `dbmw/CTcpNetSystem.cpp` | 15 | 1 | 0 |
| `dbmw/EpollHandler.cpp` | 11 | 3 | 0 |
| `dbmw/CNetworkThread.cpp` | 10 | 2 | 0 |
| `dbmw/CPeer.cpp` | 9 | 2 | 0 |
| `DNFServer/ServerCommon/DNFFileLog.cpp` | 5 | 5 | 0 |
| `dbmw/CTcpHandler.cpp` | 8 | 1 | 0 |
| `dbmw/CMisc.cpp` | 7 | 1 | 0 |
| `dbmw/CServer.cpp` | 8 | 0 | 0 |
| `dbmw/CServerHandler.cpp` | 7 | 1 | 0 |
| `dbmw/TimeTimer.cpp` | 4 | 4 | 0 |
| `dbmw/CQueryCounter.cpp` | 7 | 0 | 0 |
| `dbmw/CUdpHandler.cpp` | 7 | 0 | 0 |
| `dbmw/CFrameCountHandler.cpp` | 5 | 0 | 0 |
| `dbmw/CPacketCounter.cpp` | 5 | 0 | 0 |
| `dbmw/ServerXmlDbmw.cpp` | 1 | 4 | 0 |
| `dbmw/StackBuffer.cpp` | 5 | 0 | 0 |
| `dbmw/CThreadInterface.cpp` | 1 | 3 | 0 |
| `dbmw/CTcpServer.cpp` | 2 | 1 | 0 |
| `DNFServer/ServerCommon/CFileLogWriterBase.cpp` | 0 | 2 | 0 |

耦合最重的共享头（被非 identical TU 依赖数）：

| 头文件 | 依赖它的非 identical TU 数 |
|---|---:|
| `DNFServer/ServerCommon/DNFFileLog.h` | 28 |
| `DNFServer/ServerCommon/DNFFunctionLib.h` | 28 |
| `DNFServer/ServerCommon/Thread.h` | 28 |
| `DNFServer/ServerCommon/tinyxml.h` | 25 |
| `Library3rd/MySQL/include/my_alloc.h` | 25 |
| `Library3rd/MySQL/include/my_list.h` | 25 |
| `Library3rd/MySQL/include/mysql.h` | 25 |
| `Library3rd/MySQL/include/mysql_com.h` | 25 |

分层摘要（共 6 层）：

- 底层根（Layer 0，2 个）：`Library3rd/MySQL/include/my_alloc.h`、`shared/common/include/ReverseEngineerLib.h`
- 顶层（Layer 5，29 个）：`DNFServer/ServerCommon/CFileLogWriterBase.cpp`、`DNFServer/ServerCommon/DNFFileLog.cpp`、`DNFServer/ServerCommon/DNFFunctionLib.cpp`、`dbmw/CAppConfig.cpp`、`dbmw/CDBManager.cpp`、`dbmw/CFrameCountHandler.cpp` …

完整分层见 `docs/data/topology/dbmw/layers.txt`，逐文件依赖见 `edges.tsv`，DOT 图见 `graph.dot`。

### 3.9 monitor

- 非 identical TU：**7**；依赖头：16；共享头(≥2 TU)：9；include 边：42；层数：5；include 环：0

非 identical 源文件（DIFF/NEAR/MISSING 函数数，均为豁免后）：

| 源文件 | DIFF | NEAR | MISSING |
|---|---:|---:|---:|
| `monitor/MonitorTypes.cpp` | 809 | 128 | 0 |
| `monitor/MonitorApp.cpp` | 38 | 17 | 0 |
| `DNFServer/ServerCommon/DNFFunctionLib.cpp` | 12 | 7 | 0 |
| `monitor/MonitorTable.cpp` | 6 | 7 | 0 |
| `DNFServer/ServerCommon/DNFFileLog.cpp` | 6 | 5 | 0 |
| `DNFServer/ServerCommon/CFileLogWriterBase.cpp` | 0 | 2 | 0 |
| `DNFServer/ServerCommon/Thread.cpp` | 1 | 0 | 0 |

耦合最重的共享头（被非 identical TU 依赖数）：

| 头文件 | 依赖它的非 identical TU 数 |
|---|---:|
| `DNFServer/ServerCommon/Thread.h` | 7 |
| `DNFServer/ServerCommon/DNFFileLog.h` | 6 |
| `DNFServer/ServerCommon/DNFFunctionLib.h` | 5 |
| `DNFServer/ServerCommon/tinyxml.h` | 3 |
| `monitor/MonitorApp.h` | 3 |
| `monitor/MonitorTable.h` | 3 |
| `monitor/MonitorTypes.h` | 3 |
| `shared/common/include/ReverseEngineerLib.h` | 3 |

分层摘要（共 5 层）：

- 底层根（Layer 0，1 个）：`shared/common/include/ReverseEngineerLib.h`
- 顶层（Layer 4，7 个）：`DNFServer/ServerCommon/CFileLogWriterBase.cpp`、`DNFServer/ServerCommon/DNFFileLog.cpp`、`DNFServer/ServerCommon/DNFFunctionLib.cpp`、`DNFServer/ServerCommon/Thread.cpp`、`monitor/MonitorApp.cpp`、`monitor/MonitorTable.cpp` …

完整分层见 `docs/data/topology/monitor/layers.txt`，逐文件依赖见 `edges.tsv`，DOT 图见 `graph.dot`。

### 3.10 guild

- 非 identical TU：**16**；依赖头：23；共享头(≥2 TU)：17；include 边：100；层数：5；include 环：0

非 identical 源文件（DIFF/NEAR/MISSING 函数数，均为豁免后）：

| 源文件 | DIFF | NEAR | MISSING |
|---|---:|---:|---:|
| `guild/GuildDomain.cpp` | 459 | 33 | 0 |
| `guild/GuildPacket.cpp` | 133 | 1 | 0 |
| `guild/GuildMisc.cpp` | 64 | 22 | 0 |
| `guild/GuildServer.cpp` | 73 | 13 | 0 |
| `guild/GuildPacketCtor.cpp` | 77 | 1 | 0 |
| `guild/GuildThread.cpp` | 32 | 6 | 0 |
| `guild/GuildTable.cpp` | 29 | 6 | 0 |
| `guild/GuildSignal.cpp` | 13 | 17 | 0 |
| `guild/GuildApp.cpp` | 22 | 6 | 0 |
| `guild/GuildStCtor.cpp` | 19 | 3 | 0 |
| `DNFServer/ServerCommon/DNFFunctionLib.cpp` | 12 | 7 | 0 |
| `DNFServer/ServerCommon/DNFFileLog.cpp` | 6 | 5 | 0 |
| `guild/GuildInit.cpp` | 5 | 6 | 0 |
| `guild/GuildUdp.cpp` | 8 | 0 | 0 |
| `DNFServer/ServerCommon/CFileLogWriterBase.cpp` | 0 | 2 | 0 |
| `DNFServer/ServerCommon/Thread.cpp` | 1 | 0 | 0 |

耦合最重的共享头（被非 identical TU 依赖数）：

| 头文件 | 依赖它的非 identical TU 数 |
|---|---:|
| `DNFServer/ServerCommon/Thread.h` | 16 |
| `DNFServer/ServerCommon/DNFFileLog.h` | 12 |
| `DNFServer/ServerCommon/DNFFunctionLib.h` | 11 |
| `guild/GuildTable.h` | 11 |
| `guild/GuildDomain.h` | 10 |
| `shared/common/include/ReverseEngineerLib.h` | 8 |
| `shared/packet/include/PacketHeader.h` | 8 |
| `guild/GuildApp.h` | 7 |

分层摘要（共 5 层）：

- 底层根（Layer 0，1 个）：`shared/common/include/ReverseEngineerLib.h`
- 顶层（Layer 4，16 个）：`DNFServer/ServerCommon/CFileLogWriterBase.cpp`、`DNFServer/ServerCommon/DNFFileLog.cpp`、`DNFServer/ServerCommon/DNFFunctionLib.cpp`、`DNFServer/ServerCommon/Thread.cpp`、`guild/GuildApp.cpp`、`guild/GuildDomain.cpp` …

完整分层见 `docs/data/topology/guild/layers.txt`，逐文件依赖见 `edges.tsv`，DOT 图见 `graph.dot`。

### 3.11 statics

- 非 identical TU：**16**；依赖头：21；共享头(≥2 TU)：18；include 边：85；层数：5；include 环：0

非 identical 源文件（DIFF/NEAR/MISSING 函数数，均为豁免后）：

| 源文件 | DIFF | NEAR | MISSING |
|---|---:|---:|---:|
| `statics/StaticsPacket.cpp` | 89 | 3 | 0 |
| `statics/StaticsStatistic.cpp` | 49 | 4 | 0 |
| `statics/StaticsServer.cpp` | 31 | 6 | 0 |
| `statics/StaticsData.cpp` | 29 | 3 | 0 |
| `statics/StaticsSignal.cpp` | 13 | 17 | 0 |
| `statics/StaticsProxy.cpp` | 14 | 7 | 0 |
| `statics/StaticsApp.cpp` | 11 | 9 | 0 |
| `DNFServer/ServerCommon/DNFFunctionLib.cpp` | 12 | 7 | 0 |
| `statics/StaticsMisc.cpp` | 10 | 3 | 0 |
| `statics/StaticsTable.cpp` | 8 | 5 | 0 |
| `DNFServer/ServerCommon/DNFFileLog.cpp` | 5 | 6 | 0 |
| `statics/StaticsInit.cpp` | 4 | 6 | 0 |
| `statics/StaticsThread.cpp` | 6 | 4 | 0 |
| `statics/StaticsUdp.cpp` | 8 | 0 | 0 |
| `DNFServer/ServerCommon/CFileLogWriterBase.cpp` | 0 | 2 | 0 |
| `DNFServer/ServerCommon/Thread.cpp` | 1 | 0 | 0 |

耦合最重的共享头（被非 identical TU 依赖数）：

| 头文件 | 依赖它的非 identical TU 数 |
|---|---:|
| `DNFServer/ServerCommon/Thread.h` | 15 |
| `DNFServer/ServerCommon/DNFFileLog.h` | 12 |
| `statics/StaticsTable.h` | 9 |
| `DNFServer/ServerCommon/DNFFunctionLib.h` | 8 |
| `statics/StaticsData.h` | 8 |
| `shared/common/include/ReverseEngineerLib.h` | 7 |
| `shared/packet/include/PacketHeader.h` | 7 |
| `statics/StaticsStatistic.h` | 7 |

分层摘要（共 5 层）：

- 底层根（Layer 0，1 个）：`shared/common/include/ReverseEngineerLib.h`
- 顶层（Layer 4，16 个）：`DNFServer/ServerCommon/CFileLogWriterBase.cpp`、`DNFServer/ServerCommon/DNFFileLog.cpp`、`DNFServer/ServerCommon/DNFFunctionLib.cpp`、`DNFServer/ServerCommon/Thread.cpp`、`statics/StaticsApp.cpp`、`statics/StaticsData.cpp` …

完整分层见 `docs/data/topology/statics/layers.txt`，逐文件依赖见 `edges.tsv`，DOT 图见 `graph.dot`。

### 3.12 relay

- 非 identical TU：**13**；依赖头：12；共享头(≥2 TU)：12；include 边：37；层数：5；include 环：0

非 identical 源文件（DIFF/NEAR/MISSING 函数数，均为豁免后）：

| 源文件 | DIFF | NEAR | MISSING |
|---|---:|---:|---:|
| `relay/RelayApp.cpp` | 75 | 40 | 0 |
| `relay/RelaySocket.cpp` | 33 | 0 | 0 |
| `relay/RelayService.cpp` | 16 | 3 | 0 |
| `relay/RelayUtil.cpp` | 11 | 5 | 0 |
| `relay/RelayScript.cpp` | 11 | 1 | 0 |
| `relay/RelayLog.cpp` | 6 | 4 | 0 |
| `relay/RelayUserPool.cpp` | 10 | 0 | 0 |
| `relay/RelaySignal.cpp` | 8 | 0 | 0 |
| `relay/RelayReactor.cpp` | 7 | 0 | 0 |
| `relay/RelayThread.cpp` | 0 | 3 | 0 |
| `relay/RelayScriptRawData.cpp` | 2 | 0 | 0 |
| `relay/RelayToken.cpp` | 2 | 0 | 0 |
| `relay/RelayException.cpp` | 1 | 0 | 0 |

耦合最重的共享头（被非 identical TU 依赖数）：

| 头文件 | 依赖它的非 identical TU 数 |
|---|---:|
| `relay/RelayCommon.h` | 8 |
| `relay/RelayException.h` | 7 |
| `relay/RelayService.h` | 6 |
| `relay/RelayThread.h` | 6 |
| `relay/RelaySocket.h` | 5 |
| `relay/RelayToken.h` | 5 |
| `relay/RelayApp.h` | 4 |
| `relay/RelayBuffer.h` | 4 |

分层摘要（共 5 层）：

- 底层根（Layer 0，1 个）：`relay/RelayException.h`
- 顶层（Layer 4，13 个）：`relay/RelayApp.cpp`、`relay/RelayException.cpp`、`relay/RelayLog.cpp`、`relay/RelayReactor.cpp`、`relay/RelayScript.cpp`、`relay/RelayScriptRawData.cpp` …

完整分层见 `docs/data/topology/relay/layers.txt`，逐文件依赖见 `edges.tsv`，DOT 图见 `graph.dot`。

### 3.13 coserver

- 非 identical TU：**14**；依赖头：15；共享头(≥2 TU)：15；include 边：71；层数：4；include 环：0

非 identical 源文件（DIFF/NEAR/MISSING 函数数，均为豁免后）：

| 源文件 | DIFF | NEAR | MISSING |
|---|---:|---:|---:|
| `coserver/CoserverSignal.cpp` | 13 | 17 | 0 |
| `coserver/CoserverMisc.cpp` | 18 | 6 | 0 |
| `coserver/CoserverApp.cpp` | 12 | 8 | 0 |
| `coserver/CoserverServer.cpp` | 14 | 3 | 0 |
| `coserver/CoserverPacket.cpp` | 13 | 3 | 0 |
| `coserver/CoserverThread.cpp` | 10 | 5 | 0 |
| `coserver/CoserverTable.cpp` | 7 | 6 | 0 |
| `DNFServer/ServerCommon/DNFFileLog.cpp` | 5 | 5 | 0 |
| `coserver/CoserverInit.cpp` | 4 | 6 | 0 |
| `DNFServer/ServerCommon/DNFFunctionLib.cpp` | 6 | 2 | 0 |
| `coserver/CoserverUdp.cpp` | 8 | 0 | 0 |
| `coserver/CoserverUser.cpp` | 3 | 0 | 0 |
| `DNFServer/ServerCommon/CFileLogWriterBase.cpp` | 0 | 2 | 0 |
| `DNFServer/ServerCommon/Thread.cpp` | 1 | 0 | 0 |

耦合最重的共享头（被非 identical TU 依赖数）：

| 头文件 | 依赖它的非 identical TU 数 |
|---|---:|
| `DNFServer/ServerCommon/Thread.h` | 14 |
| `DNFServer/ServerCommon/DNFFileLog.h` | 12 |
| `DNFServer/ServerCommon/DNFFunctionLib.h` | 9 |
| `coserver/CoserverTable.h` | 9 |
| `coserver/CoserverUser.h` | 7 |
| `coserver/CoserverApp.h` | 6 |
| `coserver/CoserverThread.h` | 6 |
| `coserver/CoserverUdp.h` | 6 |

分层摘要（共 4 层）：

- 底层根（Layer 0，1 个）：`shared/common/include/ReverseEngineerLib.h`
- 顶层（Layer 3，14 个）：`DNFServer/ServerCommon/CFileLogWriterBase.cpp`、`DNFServer/ServerCommon/DNFFileLog.cpp`、`DNFServer/ServerCommon/DNFFunctionLib.cpp`、`DNFServer/ServerCommon/Thread.cpp`、`coserver/CoserverApp.cpp`、`coserver/CoserverInit.cpp` …

完整分层见 `docs/data/topology/coserver/layers.txt`，逐文件依赖见 `edges.tsv`，DOT 图见 `graph.dot`。

## 4. 结论与修复次序建议（豁免后）

1. **底层共享根优先**：`DNFServer/ServerCommon` 的 Thread / DNFFunctionLib / DNFFileLog / CFileLogWriterBase 在豁免后仍是全工程最大耦合面，先对齐这 4 个文件。
2. **auction/point 是同一棵树**：53 TU / 81 共享头 / 9 层，任何修改必须同步重建两边。
3. **channel/bridge 拓扑同构但物理分叉**：15/20 TU、6/6 层；已验证的 -O0 修复模式按“镜像而非覆盖”迁移。
4. **无环 DAG，可安全并行**：13 个服务全部 0 include 环，按层从根头向 TU 逐层推进。
5. **统计面已净化**：豁免后 DIFF 大头为项目自有代码（auction 118、dbmw 578、monitor 775、guild 906、manager 245），不再被第三方/STL 噪声稀释。
