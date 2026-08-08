# df_guild_r 还原进度

更新：2026-08-08（应用层缺失归零——仅剩 2 个编译器局部 clone，缺失 416→2）

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

### TiXml（tinyxml.cpp/h，缺失 112 → 2）
- TiXmlBase：IsAlphaNum/IsAlpha/StringEqual/ConvertUTF32ToUTF8/SkipWhiteSpace/
  StreamWhiteSpace/StreamTo/ReadName/ReadText/GetEntity/EncodeString + TiXmlFOpen
- TiXmlNode：NextSibling/GetDocument/InsertEndChild/InsertBeforeChild/InsertAfterChild/
  RemoveChild/ReplaceChild/Identify/FirstChildElement×4/NextSiblingElement×4/
  PreviousSibling/LastChild/IterateChildren×2/CopyTo
- TiXmlDocument：LoadFile(std::string)/LoadFile(TiXmlEncoding)/SaveFile()/SaveFile(FILE*)/
  拷贝构造/operator=/CopyTo
- TiXmlAttribute：IntValue/DoubleValue/QueryIntValue/QueryDoubleValue/Print×2/Previous；
  TiXmlAttributeSet：Find(string)/FindOrCreate×2/Remove
- TiXmlElement：拷贝构造/operator=/Query×6/GetText/ClearThis/ReadValue/CopyTo/
  Attribute(string)×3/Attribute(const char*,double*)
- 叶子类：Comment/Unknown/Text/Declaration 拷贝+CopyTo+Blank+Print+三参构造
- TiXmlVisitor/TiXmlPrinter/TiXmlHandle 全方法 + 自由运算符
- 签名修正（反编译验证）：StreamIn istream&→istream*、Parse bool→const char*（解析位置）
- 剩余仅 2 个编译器 clone 伪影（ReadText/Text ctor clone）；server_str.xml 解析冒烟通过

### PowerWar 配置层
- CPowerWarConfig（CTableBase 派生，m_info@+4）：Load_Table（100 行上限 + 异常）/
  Parse_Table（5 字段：day/hour/min/field4/schedule push）/Clear_Table/GetInfo
- ST_PowerWarEventStartTimeConfig（day/hour/min/field4@+4/vector@+8）；STPowerWarScheduleTime 补析构
- 冒烟：全流程通过（缺失 81→69）

## 当前水位

- 应用层缺失 **2**（均为编译器局部 clone 符号：TiXmlBase::ReadText / TiXmlText ctor，
  非导出 ABI，实际 0 缺失；compare_guild.py 报 2）
- 严格口径（compare_common v3）：双端函数 IDENTICAL 332 + NEAR 141（DIFF 1225，
  其中大量为寄存器分配/循环形态差异，需逐函数语义核验）
- 二进制可运行完整生命周期：logo → Init（StrLoading/配置）→ Load（UDP/TCP 线程、
  DBMW 连接、启动查询）→ Process → SIGTERM → Stop
- 核验工具链：compare_guild.py（严格口径全量）、diff_func.py（difflib 对齐）、
  verify_diffs.py（自动分类：字符串地址/符号地址/代码形态 vs real）
- 已核验良性：GuildEnter/GuildMemLogin/init_signal（差异均为布局/代码形态）
- 批量生成（gen_packet_ctors.py）：111 个 Packet 构造器 + 21 个 ST 构造器 +
  reset 族（GuildPackets.h/GuildPacketCtor.cpp/GuildStCtor.cpp，离线定义符号必现）
- MemPool<T> 通用化（sizeof(T)/classSize-4 空闲链）+ 9 类型 operator new/delete
  （CBlackUser 100000/CUser 28000/CGuild 10000/CCashObject 5000/CPeer 1000 等）
- CCashObject 0x24 + CMemoryCashManager 全方法（map@+0/app@+0x18，黑名单联动）
- DnfItemInfo 尺寸修正 0x35；STGuildCargoLog 并入 DNFFunctionLib.h
- 收尾批次：CServerHandler Process/IsConnectedGameServer（心跳计数真实现）、
  CGuildWar 容器构造+Insert/GetGuildWarInfo、CGuild 成员代理/变更信息/超链接广播、
  CPacketTranslater GuildJoin×2/邮件/黑名单、CPowerWarGuildInfo 容器+MakePacket、
  CPacketCounter 扩容 AfterProcess(int)、27 个 allocator 显式实例化

## 下一步

1. verify_diffs 队列按 real 数降序逐函数核验/修复（DIFF 1225 中大量为
   代码形态差异，需逐函数确认语义等价）
2. 剩余 2 个局部 clone 符号（编译器伪影，随工具链升级可能自动消除）
3. 全量语义核验 + 运行压力测试后进入下一二进制（monitor）
   （GuildJoin×2/SendPacketGuildMail/RequestBlackListToDBMW）
2. TiXml 函数体补全：Element/Declaration/Comment/Unknown/Text 的 Parse 仍为 8B 桩、
   StreamIn/ReadText 未达原版指令量
3. 域类余量：CGuild（LoadGuildAllMembersProxy/NoticeChatMsgToGuildMembersHyperLink/
   PopGuildMemberChanglableInfo）、CGuildWar（Insert/GetGuildWarInfo）、PowerWar 数据结构
   （Compare/MakePacketDBPowerWarPoint）、CServerHandler（Process/SetGameServerIpPort/
   IsConnectedGameServer）、4 个 Packet_* 构造器 + CPacketCounter::AfterProcess
4. STL allocator 模板实例化符号（_ZNSaI*）随容器使用方式对齐
5. verify_diffs 队列按 real 数降序逐函数核验/修复
