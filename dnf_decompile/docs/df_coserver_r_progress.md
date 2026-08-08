# df_coserver_r 还原进度

更新：2026-08-08

## 二进制概况

- `df_coserver_r`：1,073,816 B（1.07MB），32 位 ELF，**无 DWARF**（纯 Ghidra 逆向）。
- 编译器：混合——.comment 含 **GCC 4.1.2-52 与 GCC 4.4.6-3**（与 relay 同族，
  待逐 TU 确认哪些是 4.4.6+c++0x）。
- 符号总数 14049；强文本函数 606；应用类约 55 个/350 个类符号。

## 类分布（nm 提取）

### 与 df_community_r 共享（已有还原源码，可直接复用）

`CFLog`、`CFileLogWriter`、`CToolFileLog`、`CMyFileLog`、`CMyRawFileLog`、`CMutex`、
`CGuard<CMutex>`、`CUser`、`CUserManager`、`DNFFLib`、`PacketHeader`。

对应还原源码：`source/Community/src/`（User/UserManager/global 等）+ 
`source/DNFServer/ServerCommon/`（CFileLogWriterBase/DNFFileLog/DNFFunctionLib/Thread）。
df_community_r 已按"gcc-4.4.7 + CentOS5.11 4.1.2 静态 libstdc++"方案验证
（符号命中 81%，字符串 3811）。

### coserver 独有应用层（需 Ghidra 全新还原）

`CApplication`(23)、`CSourceVersionMgr`(19)、`CServerHandler`(14)、`CGameServer`(14)、
`CSignalTranslator`(10)、`CAppConfig`(10)、`CUdpHandler`(9)、`CThreadInterface`(9)、
`CKillUSRConfig`(9)、`CDNFUserInOutCounter`(9)、`CUserManager`(8 追加)、`CServerConfig`(8)、
`CPacketTracer`(8)、`CAppStartInit`(8)、`CAppBase`(8)、`CSignal`(7)、`CPacketDecoder`(7)、
`CNetworkThread`(7)、`CAppThread`(7)、`MemPool<CUdpRecvBuffer>`(7)、`CUdpRecvBuffer`(3)、
`CAppInit`/`CAppStopInit`、`CTableBase`、`CDNFException`、`CFrameCountHandler`、
`CSystemTime(Handler)`、`CInnerMsgHandler`、`CSegmentationFaultSig`/`CSystemFailSig`/
`CFloatingPointExceptSig`/`CTerminateSig`/`CUser1Sig`/`CUser2Sig`、`CVersionMgr`、
`CommonTime`、`CPacketTranslater`、packet 结构（`Packet_Monitor_UDP_User_Getout`、
`Packet_Monitor_Event_Start/End`、`Packet_CutOff_UDP_Call_UserInfo`）、`ST_ServerInfo`、
`ST_KillUSRConfig`。

## 计划

1. 建立 coserver 比对工具（coserverlib，复用 relaylib 思路）。
2. 复用 df_community_r 的共享类源码，按 coserver 布局核对。
3. Ghidra 反编译 coserver 独有类（CApplication/CGameServer/CServerHandler 主线）。
4. 确认 4.1.2/4.4.6 混合工具链并建立构建脚本。
5. 全量比对、修复、产出报告。
