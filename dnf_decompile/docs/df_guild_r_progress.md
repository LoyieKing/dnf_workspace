# df_guild_r 还原进度

更新：2026-08-08（Load 全流程 + 网络系统真实构造，缺失 396，严格口径 IDENTICAL 18.4%）

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
- **CApplication::Load 全流程按反编译实现**：InitFrameCountInfo / CInnerMsgHandler /
  CUdpNetworkThread（创建+attach+begin）/ CTcpNetSystem::Init（CTcpHandler+
  CTcpAcceptThread+CTcpNetworkThread）/ DBMW TCP 连接（OpenTcpService）/ 启动
  查询包 / SetPowerDBFlag(2) / IQueue 双队列接线；冒烟：TCP 30403 监听、UDP
  线程运行、DBMW 连接失败按预期处理、SIGTERM 干净退出
- AttachAppInitor + CAppStartInit/CAppStopInit（Init/Init_Daemon/Save_pid）
- CServerHandler：双 map（CGameServer/CTcpGameServer）+ CDBServer/CManagerServer/
  CMonitorServer + CTcpDBServer@0x44；Load/Attach/Process/SendToDB 族
- CAppConfig（0x2c：udpPort@6/tcpPort@8/group@0xa/name@0xc/dbmwPort@0x10/
  multimap@0x14）/CServerConfig（255×ST_ServerInfo）/CTableBase/CDNFException
- CFrameCountHandler/CUdpNetworkThread（dispatch UDP 接收循环）/CTcpAcceptThread
  （open/bind/listen/poll→accept→InsertAcceptedPeer）/CTcpNetworkThread（dispatch 待补）
- CSignal 族/CSignalTranslator、CUdpHandler/CUdpRecvBuffer、CPacketTracer/CInnerMsgHandler
- CPacketDecoder：handler 表 117 项（0xfbc-0x9c7c）+ MsgDecode/TcpProcess/UdpProcess
- CApplication::Load/Free/Process 主流程（可运行完整生命周期）

### 关键布局修正（反编译/MemPool chunk 验证）
- TCPSocket 0x1c（原 0x1824 错误）、CPeer 0x97840、CTcpRecvBuffer/CTcpSendBuffer 0x1804
- CTcpNetSystem：queue@0xc0/0x11c + map@0x144 真实构造；InsertAcceptedPeer/GetPeer/
  CleanPeers 容器化；OpenTcpService/SetEpollConnectedPeer/SetEpollAcceptedPeers 实现
- CServerXml placement-new TiXmlDocument@+8；全局 g_ServerString_
- TCPSocket::bind 修正（SO_REUSEADDR + 成功返回 1）
- CUserManager::Find 族仅 const 重载、CGameServer 虚方法继承基类（-18 extra）

### 域层
- CUser（0x8c 布局）+ 27 方法（Set/Get/黑名单/公会成员）
- CUserManager（三 map）+ CreateUser/Insert/Delete/Find 全实现
- CGuildManager：GuildMemLogin/GuildMemLogout/GuildEnter/CreateGuild/DeleteGuild/
  FindGuild/InsertGuild/LoadGuild/AttendGuild
- CGuild（0x6718 布局）：STGuildDBInfo(0x4cf8)+STGuildAgitDBInfo+CGuildCargo@0x4db4+
  CGuildBoard@0x66c4；**107 方法全部实现**（成员管理/资金/经验/技能/权力/Agit/
  ReplyGuildMembers/ReplyGuildAllMembers/DB 保存族）
- CUser 66/73、CGuildManager 35/40（今日成员/出勤）、CPowerManager 25/36、
  CTcpNetSystem 9/23、CGuildCargo 18/24、CGuildBoard 14/16
- CPacketTranslater：OnLogin/OnLogout/OnReplyQueryGuild/OnCharLogin/OnHeartBeat 已实现，
  OnNoticeGuildEnter/Secede/Dismiss、OnDBReplyQueryGuildMember、OnIncreaseGuildExp、
  OnChangeGuildName、OnCallGuildMembers/AllMembers/Info、OnSetGuildMemberGrade、
  OnNoticeGuildChatMsg/MarkChange 等已实现，其余为桩（待实现）

## 当前水位

- 应用层缺失 **396**（原 7174 符号；extra 79→约 61）
- 严格口径（compare_common v3）：1304 双端函数 IDENTICAL 240（18.4%）+ NEAR 110
- 二进制可运行完整生命周期：logo → Init（StrLoading/配置）→ Load（UDP/TCP 线程、
  DBMW 连接、启动查询）→ Process → SIGTERM → Stop
- 核验工具链：compare_guild.py（严格口径全量）、diff_func.py（difflib 对齐）、
  verify_diffs.py（自动分类：字符串地址/符号地址/代码形态 vs real）
- 已核验良性：GuildEnter/GuildMemLogin/init_signal（差异均为布局/代码形态）

## 下一步

1. CUdpNetworkThread::dispatch 完整实现（orig 524 vs 274，477 real）
2. CTcpNetworkThread::dispatch（当前空桩，TCP 收包侧未启动）
3. CGuild::ReplyGuildMembers/ReplyGuildAllMembers（664/394 real）
4. CPacketTranslater 处理器族 + TiXml Parse（StreamIn/ReadText/TiXmlPrinter）
5. CCashObject/CMemoryCashManager + MemPool<CUser/CGuild/CPeer> 实例化
6. verify_diffs 队列 900+ 按 real 数降序逐函数核验/修复
