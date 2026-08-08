# df_statics_r 还原进度

更新：2026-08-08（框架 + 统计数据结构 + 40+ 方法完成，符号命中 71.0%，StatisticManager 方法实现进行中）

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
- [ ] statics 独有类实现（StatisticManager 其余 ~45 方法、statistc_proxy、FrameLagCollector、UdpCharacteristic、CHWSpecResearcher、WongWork）
- [ ] CPacketTranslater 49 个处理函数实现（当前为桩）
- [ ] 编译比对、逐函数修复、验收

## 当前水位

- 符号命中 4389/6184 = **71.0%**（框架 + 数据结构 + 40+ 方法，std 容器实例化持续解锁）
- 缺失主要集中：std 容器实例化（2345，随 StatisticManager map/set 成员实现而解决）、
  FrameLagCollector 内部结构（16）、statistc_proxy 细节。

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
| StaticsStatistic.{h,cpp} | CScheduler + CCubeStatistic + WongWork::CGMAccounts + StatisticManager 全签名骨架 + get_rand_int/SetNonBlock/getStatisticProxy/Check*Schedule |
| StaticsProxy.{h,cpp} | statistc_proxy(Field/Table/StatisticProxy) 骨架 |

## 下一步

1. 按反编译实现 StatisticManager 的 Add*/Write*/SendDB*（剩余 ~60 方法，含 map operator[]/insert 调用，解锁 std 符号）。
2. 实现 DBSaveProcess（汇总各 SendDB*）。
3. 实现 statistc_proxy/FrameLagCollector/UdpCharacteristic/CHWSpecResearcher。
4. 实现 CPacketTranslater 49 个处理函数（每个 ~487B，调用 StatisticManager）。
5. 全量比对、逐函数修复、验收。
