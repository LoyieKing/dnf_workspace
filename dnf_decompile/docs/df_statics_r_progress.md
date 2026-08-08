# df_statics_r 还原进度

更新：2026-08-08（范围分析完成，Ghidra 导入/反编译进行中）

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
- [ ] Ghidra 导入 + 反编译（进行中）
- [ ] 框架类适配（CApplication/CServerHandler/CAppConfig/CPacketDecoder/CNetworkThread）
- [ ] statics 独有类还原
- [ ] 编译比对、验收
