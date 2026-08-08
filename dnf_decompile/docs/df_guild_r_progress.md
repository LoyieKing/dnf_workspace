# df_guild_r 还原进度

更新：2026-08-08（骨架 + 框架类 + 核心域类，符号命中 54.1%）

## 二进制概况

- `df_guild_r`：2.3 MB，32 位 ELF，**无 DWARF**（纯 Ghidra 逆向）。
- 命名函数 7174（去 `_GLOBAL__I_` 后 7103）；类约 60 个：CGuild(114)/CUser(68)/
  CGuildManager(40)/CPowerManager(36)/CTcpNetSystem(27)/CPacketTranslater(114) 等。
- 与 coserver/statics 同服务器框架族，但 guild 为 TCP+UDP 双通道架构。

## 已完成

### 框架层（复用/适配 statics）
- CAppBase/CApplication：完整 guild 布局（CUserManager@0x10 / CFrameCountHandler@0x6c /
  CSwapQueue@0xa0 / CTcpNetSystem@0x130 / CGuildManager@0x290 / CPowerManager@0x370 /
  CMemoryCashManager*@0x510）
- CServerHandler：双 map（CGameServer/CTcpGameServer）+ CDBServer/CManagerServer/
  CMonitorServer + CTcpDBServer@0x44；Load/Attach/Process/SendToDB 族
- CAppConfig（multimap<stServerInfo>）/CServerConfig（255×ST_ServerInfo）/CTableBase/CDNFException
- CFrameCountHandler/CNetworkThread/CUdpNetworkThread（dispatch UDP 接收循环）/CTcpNetworkThread
- CSignal 族/CSignalTranslator、CUdpHandler/CUdpRecvBuffer、CPacketTracer/CInnerMsgHandler
- CPacketDecoder：handler 表 117 项（0xfbc-0x9c7c）+ MsgDecode/TcpProcess/UdpProcess
- CApplication::Load/Free/Process 主流程（可运行完整生命周期）

### 域层
- CUser（0x8c 布局）+ 27 方法（Set/Get/黑名单/公会成员）
- CUserManager（三 map）+ CreateUser/Insert/Delete/Find 全实现
- CGuildManager：GuildMemLogin/GuildMemLogout/GuildEnter/CreateGuild/DeleteGuild/
  FindGuild/InsertGuild/LoadGuild/AttendGuild
- CGuild（0x6718 布局）：STGuildDBInfo(0x4cf8)+STGuildAgitDBInfo+CGuildCargo@0x4db4+
  CGuildBoard@0x66c4；43 方法（成员管理/资金/经验/权力/Agit/简单 getter）
- CPacketTranslater：OnLogin/OnLogout/OnReplyQueryGuild/OnCharLogin/OnHeartBeat 已实现，
  其余 109 个为桩（待实现）

## 当前水位

- 符号命中 **54.1%**（3839/7103）
- 二进制可运行：logo → Init → Load → Process → SIGTERM → Stop 全流程
- 剩余大头：CGuild 40 方法、CPacketTranslater 109 处理器、CPowerManager/CGuildCargo/
  CGuildBoard/CTcpNetSystem 域逻辑

## 下一步

1. CGuild 剩余方法（ReplyGuildMembers/ReplyGuildAllMembers/GuildLevelUp/成员通知族）
2. CPacketTranslater 处理器逐个实现
3. CPowerManager/CPowerWar/CGuildCargo/CGuildBoard/CTcpNetSystem
4. 全量比对验收、更新本文档
