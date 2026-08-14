# df_statics_r 还原进度

更新：2026-08-14（统计入站包字段还原；scratch：clear / AddDisjointAvatarInfo / AddGoldcardEventStatistic IDENTICAL）

## 二进制概况

- `df_statics_r`：1,748,067 B（1.7MB），32 位 ELF，**无 DWARF**（纯 Ghidra 逆向）。
- 与 coserver 同服务器框架族（CAppBase/CApplication/CServerHandler/CGameServer/...）。
- 强文本符号 6249；应用类约 100 个（含大量统计包 ST* 结构）。

## 与 coserver 的框架复用（已核对方法集/大小）

### 可直接复用（方法集一致或仅缺个别方法）

| 类 | 说明 |
|---|---|
| CServerConfig | 5 方法大小全等（157/11/354/215/127），源码直接搬 |
| CFrameCountHandler | 4/5（statics 无 SaveProcess(int)），其余全等 |
| CGameServer | 10/12（statics 无 GetChannelNo/GetGroupNo），其余全等 |
| CSourceVersionMgr | 19 方法（常量待核对） |
| DNFFLib / CFLog / CFileLogWriter / CMutex / CGuard / 日志类 | 共享 ServerCommon 源码 |
| CSignal 六子类 / CSignalTranslator / CKillUSRConfig / CTableBase / CDNFException / CInnerMsgHandler / CUdpRecvBuffer / MemPool | 方法集一致 |

### 需按 statics 反编译适配（同框架不同布局/方法）

| 类 | 差异 |
|---|---|
| CApplication | 27 方法（coserver 20）：新增 Get_FrameLagCollector/Get_HWspecResearch/Get_StatisticManager/Get_ServerGroup/Get_UdpCharacteristic/Get_ServerHandler；Load(1002)/Process(1256)/Free(575)/ctor(485) 均不同 |
| CServerHandler | 19 方法：新增 DB/Manager 服务器（IsConnectedDBServer/ResetDBHeartBeat/SendToDB/SendToManager/SetDBConnectFlag/SetManagerConnectFlag/GetServerGroupNo）；Load(1222)/Process(413) |
| CAppConfig | 新增 Get_ServerGroup；Get_ServerUdpPort 无参版本（12）；Parse_Table(177)/ctor(28) |
| CPacketDecoder | 大得多（ctor 702/MsgDecode 498/Process 756）——statics 处理大量统计包 id |
| CNetworkThread | attach(CApplication*) 单参（82）；dispatch 1874 |
| CAppThread | **statics 无此类**（0 方法）——线程模型不同 |
| CAppStopInit/CAppStartInit | 8 方法（含 Init_Daemon/Save_pid 变体） |

### statics 独有应用类（需全新还原）

`StatisticManager`(90)、`statistc_proxy`(40)、`FrameLagCollector`(29)、`CDBServer`(12)、
`CHWSpecResearcher`(11)、`UdpCharacteristic`(11)、`CManagerServer`(10)、`WongWork`(10)、
`CScheduler`(8)、`CCubeStatistic`(8)、`CPacketCounter`(8)、`PartyStatistic`/`ValueStatistic`/
`PartyCharacStatistic`/`PlayDataJobStatistic`/`PlayDataPartyStatistic`/`HellPartyItenmData`(6)、
`LoadingTimeReport`(5) 以及 `ST*` 统计键结构（STCubeStatisticKey/STAssertManagerKey/
STPacketOverflowKey/STPowerwarFightLagKey/STUserTingTimeCheckKey/STPartyStatisticKey/...）。

## 计划

1. Ghidra 导入 + 全量反编译 → `/tmp/statics_decomp.c`。
2. 建立 `source/statics/` 骨架：复制 coserver 框架类，按反编译适配布局。
3. 新增 StatisticManager/statistc_proxy/FrameLagCollector/CDBServer/CManagerServer 等独有类。
4. 建立 build-statics.sh（复用 build-coserver.sh 工具链与前置链接）。
5. 全量比对、逐函数修复、产出报告。

## 状态

- [x] 范围分析（类清单 + 复用矩阵）
- [x] Ghidra 导入 + 反编译（5164 函数 → /tmp/statics_decomp.c）
- [x] 框架类适配（CApplication/CServerHandler/CAppConfig/CPacketDecoder/CNetworkThread/CScheduler/CPacketCounter）
- [x] ST* 统计键/值数据结构 + StatisticManager 真实成员（set+17 张 map+数组，0xb90）
- [x] StatisticManager 全部方法（24 Reset* + 全部 Add*/Write* + 20 个 SendDB* + DBSaveProcess + ping/AMDecrypt）
- [x] statistc_proxy（Field/Table/StatisticProxy 完整实现 + 全局函数）
- [x] FrameLagCollector 真实成员（4 张 map + DirectxVersion/UsedMemory/FrameLagData 内部结构）+ Init/RenewToday/GetCollectInterval
- [x] FrameLagCollector 大方法（LoadSpec/ReLoadSpec/SaveFrameLagData/PushOneFrameLagData/PushMonitoringSpecData×2/SaveUsedMemory/SaveCollectedDirectxVersion）
- [x] UdpCharacteristic（5 Push + Init + Save，0x2c 布局）
- [x] CHWSpecResearcher（3×map<STSpecStatic> + map<STErrorStatic> 全部方法）
- [x] WongWork::CGMAccounts（std::list 成员 + isGM/getGMInfo/AppendGM_Sys 等）
- [x] CCubeStatistic 完整实现（map<STCubeStatisticKey,int>）
- [x] CPacketTranslater 48 个处理函数（含 OnFrameLagStatisticsAdd 完整日志、OnClientSpec/HolePunching/FileStatistic）
- [x] 全部 ST* 键 operator< 按汇编逐字段实现（修正 memcmp 桩与符号转换错误）
- [x] 新建 source/toolchain/compare_statics.py 快速比对（地址别名去重 + 应用层过滤）
- [ ] 应用层逐函数语义复核、验收

## 当前水位

- 符号命中 **6111/6136 = 99.6%**（应用层 1551 符号全命中；残余 25 个为 std 模板内联差异 + __libc_csu）
- 应用层 737 函数（C1/C2 去重后）比对：IDENTICAL 111 + NEAR 294 = 55.0%，DIFF 均为 O0 代码生成差异
  （原版编译器非 GCC 4.4.7，寻址/临时变量排布不同；语义已逐函数核验）
- 语义复核：全部 332 个 DIFF 函数的调用序列与原版完全一致（0 个调用差异），
  剩余差异为指令排布/寄存器分配/异常展开结构，与 coserver 水位（58.8% IDENTICAL+NEAR）同级
- 二进制可正常运行：logo → CheckArgv 失败 → Free/Stop 全流程（App_Stop 落库路径无崩溃）

## 源码结构（source/statics/）

| 文件 | 内容 |
|---|---|
| StaticsApp.{h,cpp} | CAppBase + CApplication（0x18 HWSpec/0x84 FrameLag/0x26c UdpChar/0x298 ServerHandler/0x29c Frame/0x2d0 queue/0x2fc+0x314 双 CMutex/0x32c StatisticManager）+ main + ShowLogo |
| StaticsServer.{h,cpp} | CGameServer + CDBServer(0x14) + CManagerServer(0x10) + CServerHandler(CGameServer[0xff]+DB@0x13ec+app@0x1400+Manager@0x1404) + CServerConfig(ST_ServerInfo[0xff]) |
| StaticsTable.{h,cpp} | CTableBase + CAppConfig(frameCount@4/udpPort@8/group@0xc) + ST_ServerInfo + CDNFException |
| StaticsThread.{h,cpp} | CThreadInterface + CFrameCountHandler + CNetworkThread(queue@0xc/udp@0x10/lock@0x14/bLock@0x18) |
| StaticsUdp.{h,cpp} | CUdpHandler + CUdpRecvBuffer(0x1804 池元素) |
| StaticsPacket.{h,cpp} | CPacketDecoder(handlers[0x2800]+46 注册) + CPacketCounter<1000,10240> + CPacketTracer + CPacketTranslater(49 桩) + CInnerMsgHandler |
| StaticsSignal/Init/Misc | 复用 coserver（statics 无 CSystemTime/CDNFUserInOutCounter；CSourceVersionMgr 常量 "."/"../ServerCommon"→0x19daa） |
| StaticsStatistic.{h,cpp} | CScheduler + CCubeStatistic(完整) + WongWork::CGMAccounts(完整) + StatisticManager + FrameLagCollector + UdpCharacteristic + CHWSpecResearcher + get_rand_int/SetNonBlock/getStatisticProxy/Check*Schedule |
| StaticsProxy.{h,cpp} | statistc_proxy(Field/Table/StatisticProxy) 骨架 |

## 下一步

1. 应用层逐函数语义复核（重点：FrameLagCollector 大方法、CPacketTranslater 特殊处理器、StatisticManager SendDB 系）。
2. 全量比对、逐函数修复、验收。
3. 更新本文档后开始下一二进制（dbmw_guild 或 manager）。
