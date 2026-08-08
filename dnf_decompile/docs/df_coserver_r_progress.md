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

## 已完成

- **Ghidra 工程**：`/tmp/coserver_proj`（导入+分析成功）；
  全量反编译 2707 个函数 → `/tmp/coserver_decomp.c`
  （`DecompileAllFunctions.java`，注意 Python 脚本需 PyGhidra，用 Java 版代替）。
- **比对工具**：`/tmp/coserverlib.py` + `/tmp/compare_coserver.py`。
- **共享类复用验证**：CFLog/CFileLogWriter/CMutex/DNFFLib 与 df_community_r 构建
  指令数高度一致（SAMECNT），源码可直接复用。
- **构建脚本**：`source/toolchain/build-coserver.sh`
  （Community/src + ServerCommon 4.4.7 编译 + 应用层 source/coserver）。

## CApplication 布局（ctor 反编译，待写类）

- CAppBase 基类（vptr@0）；@4..0x1c 六个 int；
- CFrameCountHandler@0x20（0x30B）；@0x50 int；
- 10 × std::queue<CUdpRecvBuffer*>@0x54（0x28 步长）→ 0x1e4；
- 10 × CMutex@0x1e4（0x18 步长）→ 0x2d4；
- int[101]@0x2d4、int[101]@0x468；CMutex@0x624（0x18）→ 0x63c；
- CUserManager@0x63c。

## 下一步

1. 写 CApplication/CAppBase/CAppConfig/CGameServer/CServerHandler 头文件与实现。
2. 复用 Community 的 CUser/CUserManager/CFLog 等共享类源码核对布局。
3. 编译比对、逐类修复。
