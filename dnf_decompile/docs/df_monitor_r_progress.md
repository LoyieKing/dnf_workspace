# df_monitor_r 还原进度

更新：2026-08-14（OnCheckOverlappedAccusation 走 PacketHeader::m_connNo；IncConn IDENTICAL_AE）

## 第五批（大函数核验 + 真实语义问题修复，2026-08-09 晚）

### 当前水位（严格口径，compare_monitor.py 全量）

| 指标 | 数值 |
|---|---:|
| 应用函数 | 1,827 |
| IDENTICAL（严格：保留常量/偏移/rodata，仅归一化跳转目标） | **296** |
| NEAR（助记符同、操作数异） | **198** |
| DIFF（助记符/结构异） | **868** |
| EMPTY/MISSING（原版有、重建完全无） | **465** |

另有 **126 个应用函数以空壳形式存在**（函数体仅 prologue+ret，原版 ≥16B），
其中 24 个为 CPacketTranslater handler，其余为 CTcpNetSystem/CPeer/
表加载/定时任务等基础设施（见下节列表思路）。MISSING 474→465 为本批
新增 CMemberConfig 家族符号所致。

### 大函数逐个核验结论（对照 Ghidra 反编译 + 调用集多重集比对）

| 函数 | 结论 |
|---|---|
| TiXmlDeclaration/Element/Attribute/Document::Parse、TiXmlElement::StreamIn、TiXmlBase::ReadText | **语义完全等价**；DIFF 仅对齐填充 nop（orig nop vs 新 xchg/lea）与 rodata 地址 |
| CFileLogWriter::writeLog/writeRawLog | 语义逐条一致（昨日句柄回收、inserted.second 分支、va_list 传递）；DIFF 为栈布局/临时对象代码生成 |
| CApplication::Load、CSignalTranslator::init_signal、CUdpNetworkThread::dispatch、CServerHandler::Load/Process、CPeer::parsing、CApplication::Free | 与上批结论一致：语义等价，残留 rodata 地址/-O0 块序 |
| OnMemberEnterReply 等已核验 handler | 调用集仅剩 CMyFileLog 计数/自身偏移/EH 伪影 |

### 本批确认并修复的真实语义/类型问题

1. **CUserManager 布局更正**：原版 `m_users` 是 **非 const 键** `map<unsigned int, CUser*>`
   （+0x18，mangled `Ij`），此前误声明为 const 键。已改。
2. **CUserManager::~CUserManager 空析构**：原版逐元素 delete m_users /
   m_prohibitUsers 中的对象再 clear；我们为空（泄漏）。已按反编译实现，
   重建后调用集完全一致（188/188）。
3. **CMemberManager::GetLowerMemberEnterLimit**：原版签名 `(unsigned int)`（Ej），
   我们是 `(int)`（Ei）且实现为 `return 0`。已改签名并实现
   （level/10 < 0xb 时取 memberConfig->GetMemberInfo()[level/10].m_c）。
   配套实现 CMemberConfig：改继承 CTableBase、m_table[10]@+4、
   Parse_Table（3 token）/Load_Table（rc∈(0,11) 否则日志+抛异常）/
   GetMemberInfo；CMemberManager::Init 四指针写入（+0/+4/+0x20/+0x24）。
4. **OnPayTaxToUpper 缺 catch 分支**：原版整体 try/catch(CDNFException&)（printf
   "Exception Break : %s" + CMyFileLog 0x880）与 catch(...)（puts + CMyFileLog
   0x886）；我们只有 throw 无 catch。已补全，并通过 Get_MemberManager() 调
   GetLowerMemberEnterLimit（与原版调用集一致）。
5. **CApplication::AddAccusationCharac 容器类型**：原版 `m_set338` 是
   `set<pair<const string,int>>`（mangled IKSsi），我们为 set<pair<string,int>>。
   已改。
6. **CApplication::TranslateSignal**：原版经 `CKillUSRConfig::GetInfo() const`
   得到 const 迭代（const_iterator，_ZNK 调用），我们是非 const 迭代且
   GetServerInfoMap 调两次。已改 GetInfo 为 const、TranslateSignal 用
   const_iterator、branch4 只调一次 GetServerInfoMap。
7. **village_attacked::stUserHuntingPoint 命名空间**：原版在**全局作用域**
   （mangled 无 namespace），我们放在 village_attacked 内。已移出；
   stHuntingPoint 等其余类型仍留在命名空间内。

### 0x46 / 0x55 语义（DWARF 核实，更正上批备忘）

- `0x46` = 70 = `AUCTION_ITEM_LV_MAX`，枚举 `AUCTION_CONST`（DWARF
  const_value 70）；point 构建 `-DPOINT_SERVER` 下 Search.cpp 4 处以 0x46
  作为物品等级搜索上限。
- `0x55` = 85：auction（非 point）构建下 Search.cpp 4 处以硬编码 85 为
  等级上限（该处 DWARF 无命名常量）；DWARF 中 85 另有命名枚举
  `TEN_MINUTE_EVENT`（`ENUM_REPEAT_EVENT_CODE`）与
  `ENUM_ERROR_SET_GUILD_MEMBER_GRADE_MYSELF`（公会错误码），与等级无关。
- monitor 反编译中 0x46/0x55 出现在 std::money_get 字符分类 switch，
  为 ASCII 'F'/'U' 大小写分支，与上述拍卖常量无关。

### 跨二进制复用结论（monitor 原版 vs guild 原版）

- **可直接复用**（monitor 与 guild 原版逐函数比对）：CMyFileLog ctor
  IDENTICAL、CGuard<CMutex> ctor/dtor IDENTICAL、PacketHeader ctor
  IDENTICAL；CMyFileLog::operator()、CFileLogWriter writeLog/ctor、
  CDNFException ctor 均为 NEAR（仅 rodata 地址）。ServerCommon 共享源码
  （DNFFileLog/DNFFunctionLib/Thread/tinyxml/PacketHeader）照搬即可。
- **不可直接搬**：CUserManager 等应用类同名方法逻辑按服务分化——
  DeleteUsersOnTcpGameServerDown（guild 203B vs monitor 223B）：guild 走
  Call_DeleteGuildMember/GetGuildKey，monitor 走 Call_DeleteMember/
  Call_ResetBlackList/Call_ResetBuddyList；ProcessByMinute（51B vs 98B）：
  guild 为 GuildInviteProcess，monitor 为封禁超时清理。布局以各二进制
  nm/反编译为准。

### 工作流优化（已落地 source/toolchain/）

- `compare_common.py` 新增 `load_disasm_cached`：整二进制 objdump 一次、
  按符号分片、按 mtime+size 落盘缓存；`diff_func.py` 单函数/`--batch` 批量
  审查不再每次起 objdump（60 个函数批量 diff 0.55s，缓存命中单函数 ~0.15s）。
- `compare_monitor.py` 签名缓存 key 加入二进制 mtime+size，重建后自动失效，
  杜绝陈旧数字。
- `classify_monitor.py`：is_app 过滤与 compare_monitor 对齐（排除 std/运行时）；
  callset 取最后一个符号（修复 `<T>` 噪声）；过滤自身+偏移/_Unwind/__cxa_
  /打印类；输出 O:/N: 方向与调用计数差异；`--bysize`/`--out` 支持。

### 剩余主要块

- 24 个 CPacketTranslater handler（OnChangeCharName、item-limit×4、
  social-event×4、OnNoticeCharLiveOnTenMin、OnInnerPacketLogin/Logout、
  OnWebEmergencyPatchMessage、OnGameServerRegist、OnEventStart/End、
  OnRegisterEventItem、OnExchangeServerInfo、OnPvPChannelInfo/UserCount、
  onRequestCharacInfoByCharacName）；分类器 CALLDIFF O: 列表即各 handler
  的依赖调用清单。
- 基础设施空壳：CTcpNetSystem SendPacket/SetEpollAcceptedPeers/DeletePeer/
  CreatePeer/InsertAcceptedPeer、CPeer send_packet/RecvPacket、CUserManager
  ProcessByMinute/SendConnectedBuddysList/MemberEnterProcess、CMemberManager
  MemberRegisterFlagProcess/LoadMemberFromCash、CMemoryCashManager
  ProcessLifeTimeOut/ProcessCashDataPrint、CTaskScheduler、CPeriodicMessageMgr
  OnProcess、COnTimeEventManager 家族、TCPSocket connect/bind、表加载
  CMemberExpTbl/CKillUSRConfig Load_Table 等。

## 第六批（handler 大批量补齐，2026-08-09 深夜）

### 当前水位（严格口径）

| 指标 | 数值 |
|---|---:|
| IDENTICAL | **337** |
| NEAR | **218** |
| DIFF | **903** |
| EMPTY/MISSING | **369**（本批从 474 降 105） |

### 本批完成（调用集全部对齐，含依赖链）

- **PvP 频道**：OnPvPChannelInfo/OnPvPChannelUserCount；CUser
  Reset/Set/IsComplete/GetChannelUserCount + ChannelInfo（map<int,ChannelInfo>@+0x90）、
  CUser ctor/dtor 按反编译补齐、STPvPChannelInfo、Packet_PvPChannelInfo/
  Packet_PvPChannelUserCount、CServerHandler::SendAllTcpGameServer(PacketHeader*,int)
  （含 IsValidServer/GetChannelType/GetChannelNo 的 GetChannelNo、CGameServer::SetSocket）。
- **OnGameServerRegist**：stServerInfo 填充 + GetTcpGameServer(sock)/
  RegistGameServer/SetSocket/miniCraneSeed 发包链；CTcpGameServer::Init。
- **OnInnerPacketLogin/Logout**：CTcpDBServer/CTcpManagerServer 全家
  （GetSock/GetSockRef/Connected/DisConnected/SendLogin/SendLogout/SendHeartbeat/
  makePacketHeader/SendToServer）、CServerHandler Create/Delete/UnregistTcpGameServer、
  CApplication::OnTcpGameServerDown、GetTcpGameServerByCh。
- **OnExchangeServerInfo**：CExchangeServer getter 三件 + GetInstanceExchangeServer。
- **OnWebEmergencyPatchMessage**：GetTcpGameServerByCh + 0x27f2/0x10a 发包。
- **onRequestCharacInfoByCharacName**：Packet_Monitor_Reply_Charac_Info；
  CUser::FindUser_CharName 改按值签名（ESs，原版如此）；GetJob/GetGrowthType。
- **OnChangeCharName**：Packet_DBMW_Change_Char_Name、
  CUserManager::ChangeBlackListCharName、CUser::SetBuddyCharName/
  ChangeCharNameToBlackList、CBlackUser::ChangeCharName（补 memset）、
  CMemoryCashManager::InsertUpdatedCharacName/QueryUpdatedCharacName。
- **事件子系统**：OnEventStart/End/OnRegisterEventItem；
  CEventActionManager（非多态，m_actions[0xa6]，init/destroy/OnStartAction/
  OnEndAction/GetEventAction）；CBaseEventAction（onStart/onEnd/SetEventID/
  sendEventAckUpdate/OnStartEvent/OnEndEvent）+ CNullEventAction +
  COnTimeEventAction + momiji_event::EventAction（含 EventManager::EndEvent/
  sendDeleteEffect/Packet_Arad_DeleteEffect）；COnTimeEventManager 核心
  （ctor/dtor/AttachApp/Clear/IsCurState/ChangeState/SetEventItem/StartEvent×2/
  EndEvent/GetCurEventItemByDBMW/UpdateEventIdx/SendEventIdxToDBMW，成员按
  +0x1c/+0x24/+0x2c 补齐；IsCurState/ChangeState 用 ENUM_ONTIME_EVENT_STATE）；
  三个新包类（Trigger_Ack 0x1b6b、Req_Ontime_Item 0x2345、RewardEnd 0x17c2）。
- **类型修正**：CUser::FindUser_CharName 改按值；CUserManager::m_users 非 const 键
  （上批）；ENUM_ONTIME_EVENT_STATE 枚举签名。

### 剩余

- item-limit 家族 4 个 handler（onItemLimitEditionLoadDataRpy/SellEnd/LoadDataReq/
  BuyableRequest）：CItemLimitEditionMgr removeItem/updateItem/clear/getItemInfo/
  isEmpty/updateSellNum/makeItemLimitEditionUpdatePacket 真实实现 + CItemLimitEdition
  getSellEndTime/getIPGNO/getSellNum/isSellComplete/updateSellNum（getter 已按
  +0x1c/+0x28/+0x48 修正，updateSellNum 未实现）。
- social-event 家族 4 个 handler + LimitNpcBuyItemManager。
- OnNoticeCharLiveOnTenMin + CMemberExpTbl/CMemberManager 经验方法族。
- 基础设施空壳（CTcpNetSystem/CPeer/CTaskScheduler/表加载等）。

## 第七批（item-limit 家族 + 水位更新，2026-08-09 深夜续）

| 指标 | 数值 |
|---|---:|
| IDENTICAL | **339** |
| NEAR | **218** |
| DIFF | **908** |
| EMPTY/MISSING | **362**（累计 474→362） |

- 完成：onItemLimitEditionLoadDataRpy（含 0x48 步长条目校验/registItem/回包
  组装）/onItemLimitEditionSellEnd（ServerType 过滤 + removeItem 循环）/
  onItemLimitEditionBuyableRequest（0x100a/0x1e1 回包 + updateItem/
  processScheduledJob）/onItemLimitEditionLoadDataReq（Ignore 过滤 + SendToDB +
  27 参数日志）；CItemLimitEditionMgr removeItem/updateItem/getItemInfo/isEmpty/
  clear/makeItemLimitEditionUpdatePacket（+0x12/+0x16/+0x1a 每 9 字节条目）、
  CItemLimitEdition::updateSellNum。原版 4 个 handler 的 catch 均复用
  BuyableRequest 异常串，已按原样复刻。
- 剩余 handler：social-event 家族 4 个（onSocialEventRewardItemInfo/InfoAll/
  Response/Update）+ OnNoticeCharLiveOnTenMin；随后基础设施空壳
  （CTcpNetSystem/CPeer/CTaskScheduler/表加载）、MISSING 收口、冒烟、
  进展文档定稿、decompile_order 队列移 manager。

## 第八批（social-event 家族完成，2026-08-09 深夜续二）

| 指标 | 数值 |
|---|---:|
| IDENTICAL | **339** |
| NEAR | **219** |
| DIFF | **913** |
| EMPTY/MISSING | **356**（累计 474→356） |

- 完成：onSocialEventRewardItemResponse（registItemClear + 0x1e 条注册循环 +
  转发）/Info（FindUser(pkt+0xe) + sellNpcLimitBuyItem + 双回包 + 日志）/
  InfoAll（getNpcLimitBuyItemInfoAll 填充 + 回包）/Update（0x16==0 走
  getNpcLimitBuyItemCount + ChangeInfo 0x27db 包广播 + SendToDB，否则 undo）；
  LimitNpcBuyItemManager registItem/registItemClear/getNpcLimitBuyItemInfoAll/
  getNpcLimitBuyItemCount、LimitNpcBuyItemChangeInfo 包类、
  CApplication::getLimitNpcBuyItemManager；NpcBuyLimitItem 改 12 字节
  （m_itemId/m_maxCount/m_sellCount，原 16 字节布局错误已修正）。

- 剩余 handler：**OnNoticeCharLiveOnTenMin**（依赖 CMemberExpTbl::GetMaxMemberExp、
  CMember::IncConnUpperMemberExp/IncConnLowerMemberExp、CMemberManager
  GetMemberExpTable/SaveMemberExp/IsMemberExpLevelUp/NoticeLevelUpToLowers）；
  随后基础设施空壳（CTcpNetSystem/CPeer/CTaskScheduler/表加载）、MISSING
  收口、冒烟、文档定稿、decompile_order 队列移 manager。

## 第九批（24 个 handler 全部完成 + 基础设施收口开始，2026-08-09 深夜续三）

| 指标 | 数值 |
|---|---:|
| IDENTICAL | **354** |
| NEAR | **220** |
| DIFF | **945** |
| EMPTY/MISSING | **308**（累计 474→308） |

- **OnNoticeCharLiveOnTenMin 完成**（最后一个 handler）：含会员经验子系统
  CMemberExpTbl::GetMaxMemberExp/IsMemberExpLevelUp、CMember
  IncConnUpperMemberExp/IncConnLowerMemberExp×2/NoticeLevelUpToLowers/
  GetLowerMember_Proxy、CMemberManager GetMemberExpTable/SaveMemberExp/
  IsMemberExpLevelUp/NoticeLevelUpToLowers/FindMemberUser 真实实现、
  Packet_DB_Save_Member_Exp(0x641)/Packet_Monitor_Notice_MemberExp_LevelUp(0x642)。
- **基础设施批**：TCPSocket 全家（open/connect/setOptNonBlock/bind/listen/
  pollRead/Write/ErrorEvent/accept&/send/recv/close/shutdown/
  setOptReuseAdrs/setOptLinger/getPeerAdrs/getPeerPort/ctor/dtor，签名按
  原版修正：pollReadEvent const、accept 引用参数）；全局 GetNextSchedule
  （原版 mangled `_Z15GetNextSchedule2tmiii` = GetNextSchedule(tm,int,int,int)，
  长度前缀 15 + 参数 2tm 开头）；CheckDailyScheduleTimeOver/
  CheckDayHourScheduleTimeOver；CFrameCountHandler::SaveProcess(int)；
  CUser::RegisterToCashBlackList/CCashObject::SetBlackUsersObject 改引用签名
  + 真实实现；CMemberManager::IsEmptyMember；CRewardUserList（Insert/isExist/
  Clear，COnTimeEventManager 改真实 map 成员）；CGMAccounts::getGMInfo；
  CommonTime::SetCurTime；Packet_DB_InsertMail(0x177c)/Packet_DBMW_Statistic_
  Login_Logout(0x17b8)；CMember::InsertUpperMember/InsertLowerMember 改
  const char*；CMember::Check* 委派全局函数。

- 剩余：网络层（CPeer::recv_packet/CTcpNetSystem CleanTcpSendPacketQ/
  PopDeleteTcpSendPacketQ/GetPeer）、village_attacked 大函数（194B 等）、
  CBuddyHandle/np_server_xml/CPacketTracer/CTaskScheduler 任务族、
  exchange_server CollectGarbage、EpollHandler 等；之后 MISSING 收口、
  冒烟、文档定稿、decompile_order 队列移 manager。

## 第十批（网络层 CPeer + 收尾批次，2026-08-09 深夜续四）

| 指标 | 数值 |
|---|---:|
| IDENTICAL | **354** |
| NEAR | **220** |
| DIFF | **945** |
| EMPTY/MISSING | **308** |

- 完成：CPeer::recv_packet（0x1800 环形收包缓冲 + errno 分类）/
  send_packet()（0x96000 发包缓冲 + 部分发送 memmove 回卷）；
  方法名按原版修正 RecvPacket→recv_packet。
- 剩余：CTcpNetSystem CleanTcpSendPacketQ/PopDeleteTcpSendPacketQ/GetPeer、
  village_attacked 大函数（OnServerGroupRewardVillageAttacked 194B）、
  CBuddyHandle 打印/查找族、np_server_xml、CPacketTracer、任务族
  （CTask_ChristmasEvent/TowerOfDespair）、exchange_server CollectGarbage、
  EpollHandler/CProtocol、momiji EndEffectTask::_DoExecute 等；随后
  MISSING 收口、冒烟、文档定稿、decompile_order 队列移 manager。

## 第十一批（CTcpNetSystem 网络批 + 事件收尾，2026-08-09 深夜续五）

| 指标 | 数值 |
|---|---:|
| IDENTICAL | **357** |
| NEAR | **222** |
| DIFF | **949** |
| EMPTY/MISSING | **299**（累计 474→299） |

- 完成：CTcpNetSystem CreatePeer（含 CPeer::operator new 符号对齐）/
  DeletePeer/InsertAcceptedPeer/GetPeer/PopDeleteTcpSendPacketQ/
  CleanTcpSendPacketQ/SendPacket（208B 完整语义：队首取包→按 fd 查 peer→
  校验→send_packet→成功弹队列）/SetEpollAcceptedPeers/WaitForEvent +
  CTcpHandler::WaitForEvent（epoll 指针为 0 时返回 -1，EpollHandler 本体待补）；
  momiji EndEffectTask::_DoExecute（interval-duration 计算下一个开始任务）
  + EventManager::GetIntervalTime；COnTimeEventManager::GetCurIdxByDBMW
  （+ Packet_Req_Ontime_Event_Idx 0x2346）。
- 备注：CPeer/CTcpSendBuffer 的 operator new 原版走 MemPool 池分配
  （MemPool::alloc 内联），本实现先用 ::operator new 等价分配，池语义
  待后续 MemPool 子系统时对齐。
- 剩余：village_attacked 大函数（194B 等）、CBuddyHandle 打印/查找族
  （依赖 CBuddy/STBuddyDBInfo 真实实现）、np_server_xml、CPacketTracer、
  任务族（CTask_ChristmasEvent/TowerOfDespair）、exchange_server
  CollectGarbage、EpollHandler/CProtocol、CTaskScheduler 等；随后
  MISSING 收口、冒烟、文档定稿、decompile_order 队列移 manager。

## 第十二批（好友/杂项批，2026-08-09 深夜续六）

| 指标 | 数值 |
|---|---:|
| IDENTICAL | **363** |
| NEAR | **224** |
| DIFF | **968** |
| EMPTY/MISSING | **272**（累计 474→272） |

- 完成：CBuddyHandle addFromCash/insert/del(按值)/findBuddy/findBuddyByCharNo/
  printBuddys + CBuddy::getBuddyDBInfo(返回自身)/operator delete/
  CBlackUser::operator delete；CPacketTracer 全家（AddLog/WriteLog/
  AbsoluteWriteLog/ResetLog/Instance/ctor）；CUser::GetBuddiesCharNo；
  CBuddyRegisterManager::printBuddyRegister；Packet_Monitor_Reply_Buddy_List
  (0x3f2/0x54f)+BuddyList(0x2a)；CUserManager::SendConnectedBuddysList（回包
  组装 + 按 idx*0x2a+0xf 定长发送）；CCashObject::DeleteBlackUsers；
  CPeriodicMessageMgr::OnTimerSendData + Packet_Send_Periodic_Message(0x1f4a)；
  CMemberExpTbl/CKillUSRConfig 改继承 CTableBase + Parse_Table（kill 表
  4 token→new ST_KillUSRConfig 入 m_vec，exp 表 1 token 入 +8 表）；
  TCPSocket::getPeerIP/setOptResizeSendBuf；CSystemTime。
- 剩余：village_attacked 大函数（OnServerGroupRewardVillageAttacked 194B 等，
  依赖 HuntingPointMultiplier 数据表）、np_server_xml（EventLoad/CharsetInit/
  StrLoading）、exchange_server CollectGarbage（priority_queue 时间桶）、
  EpollHandler/CProtocol、CTask_ChristmasEvent/TowerOfDespair 任务族、
  CSourceVersionMgr、CTaskScheduler 等；随后 MISSING 收口、冒烟、文档定稿、
  decompile_order 队列移 manager。

## 第十三批（village_attacked + 成员结构批，2026-08-09 深夜续七）

| 指标 | 数值 |
|---|---:|
| IDENTICAL | **366** |
| NEAR | **225** |
| DIFF | **985** |
| EMPTY/MISSING | **251**（累计 474→251） |

- 完成：village_attacked GetMaxHuntingPoint（HuntingPointMultiplier 表
  [0,4,4,0...] + HUNTING_POINT_WEIGTH_CONST 全局，50/50 CLEAN）/
  OnStartVillageAttacked（0x1773 包 + GetRemainTime 填充）/OnCountdownVillageAttacked
  （time==600 时刷新上限 + 0x1776 包）/SetRewardCloseTime（全局枚举
  ENUM_VILLAGE_ATTACKED_REWARD 签名 + BUFF/PENALTY 时间）/RequestEventEnd/
  SendFirstRankerReward（Packet_DB_InsertMail + CP949 韩文标题/正文逐字节
  复刻，0x1dfe 邮件）；ST_MemberProxy/ST_MemberInfo/STMemberDBInfo/
  STMemberListInfo ctor（0x27/0x2a 步长数组初始化）；
  TCPSocket::setOptResizeRecvBuf；CUser::MemberEnterProcess（+0x1a/+0x1c
  递减倒计时）；CServerHandler::queryReloadTowerRank（0x4cc 包 ×5）；
  CCashObject::IsLifeTimeOut；CSystemTimeHandler + Instance。
- 剩余：OnServerGroupRewardVillageAttacked（194B，调度时间排序 + DBMW 上报）、
  np_server_xml、CPeer::RecvPacket（100B 旧名重载）、exchange_server
  CollectGarbage、CTask_ChristmasEvent/TowerOfDespair 任务族、
  EpollHandler/CProtocol、CSourceVersionMgr、CTaskScheduler 等；随后
  MISSING 收口、冒烟、文档定稿、decompile_order 队列移 manager。

## 第十四批（CPeer 重载 + XML + 圣诞任务，2026-08-09 深夜续八）

| 指标 | 数值 |
|---|---:|
| IDENTICAL | **368** |
| NEAR | **227** |
| DIFF | **989** |
| EMPTY/MISSING | **243**（累计 474→243） |

- 完成：CPeer::RecvPacket（旧名重载：recv_packet→parsing 分发 + 断开日志族，
  100/98 CLEAN）与 CPeer::InitPeer（队列/锁三指针 + 收发缓冲复位，签名按
  原版 queue<CTcpRecvBuffer*>*+CMutex*×2 修正，28/28 CLEAN）；
  CTask_ChristmasEvent::_DoExecute（0x44e 包广播 + MakeEventStartTick 下一
  档期重排 + 起止时间判断，70/87 CLEAN）；np_server_xml::CServerXml 五函数
  （StrLoading()/StrLoading(Ss)/InitString/CharsetInit 100/100/EventLoad，
  + m_charset@+0x50 成员 + 调用点改 g_ServerString_.StrLoading()）。
- 剩余：OnServerGroupRewardVillageAttacked（194B）、exchange_server
  CollectGarbage、TowerOfDespair 任务族、EpollHandler/CProtocol、
  CSourceVersionMgr、CTaskScheduler、CPeriodicMessageMgr 其余等；随后
  MISSING 收口、冒烟、文档定稿、decompile_order 队列移 manager。

## 第十五批（杂项小件批，2026-08-09 深夜续九）

| 指标 | 数值 |
|---|---:|
| IDENTICAL | **373** |
| NEAR | **228** |
| DIFF | **1003** |
| EMPTY/MISSING | **223**（累计 474→223） |

- 完成：GetPrevSchedule（tm_wday 反推前档期，24/23）；CMember::
  GetUpperMember_Proxy const（flag&4 + IsThereUpper 门控）；CServerHandler
  SendToManager（m_managerServer 直发）/SendDBMWRequestIPCounter（0x1038 包
  + 双字节参数）/getfirstLinkedServer（map 首键）；CApplication::
  SendTestPacket_1（Event_End/Start 9/4/0 测试包）；CTcpHandler::ResetEpoll；
  CScheduler::IsOnTimeSpecialDayHour（3 字节时段比较）；CSourceVersionMgr
  全家（ctor 双 svn 路径 + InsertSourceVersion + SourceVersion(char*,int)，
  触发 vector 分配器符号）；momiji StartEffectTask/EndEffectTask ctor 修正为
  (uint,uint) 并补齐 CTaskScheduler::CTask(Ejj) 基类（tick/flag 存储）+
  SetStart/EndEffectTask 注册；Packet_Request_IPCounterList。
- 剩余：OnServerGroupRewardVillageAttacked（194B）、exchange_server
  CollectGarbage、TowerOfDespair 任务族、EpollHandler/CProtocol 本体、
  CTaskScheduler 其余、IQueue::SwitchQueue 等；随后 MISSING 收口、冒烟、
  文档定稿、decompile_order 队列移 manager。

## 第十六批（重置换/加载检查/交换队列批，2026-08-09 深夜续十）

| 指标 | 数值 |
|---|---:|
| IDENTICAL | **377** |
| NEAR | **228** |
| DIFF | **1007** |
| EMPTY/MISSING | **215**（累计 474→215） |

- 完成：CUserManager::ResetBlackList/ResetBuddyList（20/17，FindUser 后
  委托用户方法）；CUser::ResetBuddyList(bool)（14/14，m_buddyHandle.reset(0,
  flag)）；CCashObject::ClearBuddys（20/15，0x20 槽清零）；
  CAppLoadChecker::CheckTcpRecvQ/CheckUdpRecvQ/CheckTcpSendQ + 三个 set*Queue
  （load 判定 → 记 last → 返回）；CSwapQueue<T,N> 模板真实实现
  （Init 0/1 槽、GetRecvQ/GetParseQ 按 idx*0x28 定位、SwapQ 互换、
  Push/Pop 走 recvQ）；IQueue<T> InitQueue/SwitchQueue/GetParseQueue
  （recvQ 空则 0、否则互换指针返回 1）。
- 备注：IQueue TCP 实例在重建中无引用点故符号未实例化（模板惰性实例化
  伪影），UDP 实例同理；不影响运行时语义。
- 剩余：OnServerGroupRewardVillageAttacked（194B）、exchange_server
  CollectGarbage、TowerOfDespair 任务族、EpollHandler/CProtocol 本体、
  CTaskScheduler priority_queue 内核等；随后 MISSING 收口、冒烟、文档定稿、
  decompile_order 队列移 manager。

## 第十七批（缓存回收 + 绝望塔任务批，2026-08-09 深夜续十一）

| 指标 | 数值 |
|---|---:|
| IDENTICAL | **386** |
| NEAR | **229** |
| DIFF | **1011** |
| EMPTY/MISSING | **201**（累计 474→201） |

- 完成：exchange_server::CCacheCharacterMgr::CollectGarbage（priority_queue
  时间桶回收：top 超 30s → 查 map → 超 29s 擦除，82/99 CLEAN）；
  CCacheCharacterTime（ctor + operator< 为 `>=` 实现最小堆，10/10）；
  CacheCharacter 改为插入成功后 size>49999 时触发 CollectGarbage + 时间桶
  压入；Reset 清空时间桶；TowerOfDespairReloadAPC_Task
  SendRequest_DoRandomSelectUserAPC（0x2712 包发主 GameServer，51/52）
  + isReturnedMessage/returnUpdateMessageFromGameServer 静态标志；
  TowerOfDespairWaitGameServerResponse_Task::_DoExecute（未回包则重发 +
  60 秒后重试任务，45/44）；Packet_TOD_DoRandomSelect。
- 剩余：OnServerGroupRewardVillageAttacked（194B）、EpollHandler/CProtocol
  本体、CTaskScheduler priority_queue 内核等；随后 MISSING 收口、冒烟、
  文档定稿、decompile_order 队列移 manager。

## 第十八批（CTaskScheduler 内核，2026-08-09 深夜续十二）

| 指标 | 数值 |
|---|---:|
| IDENTICAL | **394** |
| NEAR | **229** |
| DIFF | **1015** |
| EMPTY/MISSING | **189**（累计 474→189） |

- 完成：CTaskScheduler 改真实 `priority_queue<CTaskProxy>` 成员（替换
  m_data[0xc]）；CTask 基类补虚拟 `_DoExecute()` + GetDeliveryTime(+4)/
  GetTaskID(+0xc)；CTaskProxy（CTask* 包装 + 拷贝构造/赋值/GetDeliveryTime/
  operator< 最小堆 + DoExcute/Destroy）；AddTask 17/17 CLEAN、
  CTaskProxy 系列 8/8、16/16、20/19；ProcessTask（top 到期 → pop →
  计数日志 → DoExcute → Destroy）。
- 剩余：OnServerGroupRewardVillageAttacked（194B）、EpollHandler/CProtocol
  本体等；随后 MISSING 收口、冒烟、文档定稿、decompile_order 队列移 manager。

## 第十九批（EpollHandler/CProtocol，2026-08-09 深夜续十三）

| 指标 | 数值 |
|---|---:|
| IDENTICAL | **397** |
| NEAR | **234** |
| DIFF | **1024** |
| EMPTY/MISSING | **172**（累计 474→172） |

- 完成：CProtocol 基类（7 虚函数，vtable 序对齐——ResetEpoll@+0x10、
  WaitForEvent@+0x18、IsSetErrEvent@+0x1c）；EpollHandler
  （ctor=base+mutex+Init、dtor=Destroy+base、Destroy 释放事件缓冲、
  Init=epoll_create(1000)+12000 字节事件区、SetEpoll 47/49（flag 决定
  0x8000001d/0x1d + epoll_ctl ADD）、ResetEpoll 44/47（ctl DEL）、
  WaitForEvent 20/17（epoll_wait 1000 事件/100ms）、IsSetIn/Out/ErrEvent、
  GetEventPtr、GetEpollFD/GetEpollEvents 7/7）；CTcpHandler ctor 改创建
  EpollHandler 并让 WaitForEvent/ResetEpoll 委派。
- 剩余：OnServerGroupRewardVillageAttacked（194B）、若干 20B 级小件与
  模板实例化伪影；随后 MISSING 收口、冒烟、文档定稿、decompile_order
  队列移 manager。

## 第二十批（village 收尾 + 水位，2026-08-09 深夜续十四）

| 指标 | 数值 |
|---|---:|
| IDENTICAL | **398** |
| NEAR | **234** |
| DIFF | **1025** |
| EMPTY/MISSING | **170**（累计 474→170） |

- 完成：OnServerGroupRewardVillageAttacked（194B，最后一个大函数）：
  各调度器 GetPrevSchedule 反推前档 → std::sort(compareTime 降序) →
  Packet_DB_VillageAttackedRank(0x177b) 填 group + 前两名时间 →
  SendToDB；compareTime 改 bool 返回（对齐 std::sort 模板参数类型）。
- 剩余：约 170 个缺失符号（多为 20B 级小件与模板实例化伪影）；随后
  MISSING 收口、冒烟、文档定稿、decompile_order 队列移 manager。

## 当前水位（统一严格口径，compare_monitor.py）

| 指标 | 数值 |
|---|---:|
| 应用函数 | 1,827 |
| IDENTICAL（严格：保留常量/偏移/rodata，仅归一化跳转目标） | 252 |
| NEAR（助记符同、操作数异） | 163 |
| DIFF（助记符/结构异） | 787 |
| EMPTY/MISSING | 625 |

更新（同日第二批）：IDENTICAL 269 / NEAR 175 / DIFF 809 / MISSING **574**。

## 第三批（handler 大规模填充，空桩 113 -> 49）

- 会员/聊天：OnNoticeMemberChatMsg(+HyperLink)、OnNoticeOtherChannelChatMsg
  (+HyperLink，含 GM 聊天控制)、OnUserRepel(+ByCharName)、OnLogoutComplete、
  OnReplyQueryMember、OnForbidChat、OnNoticeMessage/OnNoticeSlang、
  OnPayTaxToUpper、OnMemberSecede/OnMemberEnterReply/OnRequestMemberEnter
  （前批已列）、OnCallMemberList、OnUpdateChangableCharInfo、OnCeraUpdate、
  OnEventItemUpdate 依赖的 CEventActionManager 待补。
- 黑名单：OnRegister/DeleteToBlackList、OnRequestBlackList、
  OnDBMWResister/DeleteToBlackList、OnDBMWResponseBlackListOnLogin、
  RequestBlackListToDBMW；CUser 黑名单方法族 + 5 个 0x5dc-0x5e2 包类。
- 广播/事件/IP：OnBroadcastMsg、OnWebNoticeSingle、OnMonitorMegaPhoneMsg(×2)、
  OnSetARSInfo、OnWebRequestARSInfo、OnResponse(Full)IPCounterList、
  onIPCounterControl、onStart/EndGameEventFromServer、onReloadCountryCode/
  SecurityRestrictPolicy、onLoadCleanPadPoint/BlackIPMonitor(PartLoad/DeleteIP)/
  PunishUserReq、OnVillageMonsterFightResult、OnGameMonitorGMVillageAttacked、
  OnRequestReloadPowerWarRanker、OnServerMessageInfo、OnLoadPeriodicMessage、
  OnWebNoticeInGameAD、onCollectItemsGm/Result、onSocialEventRewardItemRequest、
  OnPcRoomPlayTimeReward、OnSetCleanPadPoint、OnMonitorPunishCancel、
  OnMonitorSecuServiceConnWeb、OnMonitorFindFactoryHubUser、OnGMRequestMid、
  onRequestReloadTowerRanker/CharacTowerUpdateRank、OnRegisterEventIdx、
  OnWebChangeUserHandicap、OnCharacterDelete、OnRelayServerUserCheck、
  OnDisableUserOneToOneChat_GM、OnRenew_GM_List、OnNotifyNewMail/
  OnNotifyAuctionMail、OnRegisterGM_mid、OnMonitorFullLevelBroadCast。
- 基础设施：CIPCounter setOption/setLoadTerm/setMinIPCount（去虚化）、
  CGMAccounts clearGmList/AppendGM_Sys、CServerInterface::SendToServer、
  CApplication getTowerRank/getIPCounter/getCollectItems/FindGameServer +
  isGM_regFromChannel/isAbleUserChatWithGM/AddChattableUserWithGM/
  DisableChatUserWithGM、CUserManager::DeleteBlackUserOnCharacDelete、
  CServerHandler::GetGameServer/SendDBMWRequestARSInfo、
  CMemberExpTbl::GetMemberExpLevel、COnTimeEventManager::SetEventIdx。

## 剩余主要块（49 个 handler，约 9.8KB）

- OnLogout(612B)/OnCharLogin(563B)/OnReplyUserInfo(432B)/OnLogin(395B)：
  依赖 CLoginLogoutStatistics、CTcpGameServer、CUser::QueryBuddyInfo、
  CMemoryCashManager::InsertCashMemorySetCharacterObject 等子系统。
- OnNoticeProhibitConnectUser(456B)：依赖 exchange_server CCacheCharacterMgr。
- onItemLimitEdition*（340/271/252/194B）：依赖 CItemLimitEditionMgr 字典方法。
- onSocialEventRewardItem*(294/256/203/187B)：依赖 LimitNpcBuyItemManager。
- 好友家族（OnAddBuddy 等 5 个）：依赖 CUser::AddBuddyDB/DelBuddyDB 等。
- 事件子系统（OnEventStart/End、OnRegisterEventItem/Idx 等）：
  依赖 CEventActionManager/CBaseEventAction 类层次。

## 第四批（大 handler + 依赖链补齐，空桩 49 -> 24，约 4.4KB）

- 五大 handler 全部完成（调用集逐函数核验一致）：
  OnLogout(612B)/OnCharLogin(563B)/OnReplyUserInfo(432B)/OnLogin(395B)/
  OnNoticeProhibitConnectUser(456B)。
- 依赖链：CLoginLogoutStatistics（7×map 布局）、CBuddyRegisterManager
  （multimap）、CMemoryCashManager IsRightObject/InsertCashMemorySetCharacterObject/
  SetUserObject/DeleteCashObjecct、CCashObject 全布局、CTcpGameServer/
  CTcpManagerServer makePacketHeader/SendToServer/SendTcpPacket、exchange_server
  CCacheCharacterMgr、CUser 登出/好友/黑名单方法族、CTowerRank reset/registRank、
  CPeriodicMessageMgr::SetMessageData、CServerHandler 心跳方法族等。
- 其余完成：OnHeartBeat、OnNoCache、onCollectItems+SendColletItemsReward、
  OnRegisterEventUserIdx/OnResultRegisterEventIdx、OnTakeScreenShot、
  OnFindCharacName_useUID、OnChannelType、OnEventItemUpdate、
  OnResultLoadPeriodicMessage、OnCheckOverlappedAccusation、
  OnMonitorManagerConnectOK、OnUpdateMiniCraneSeed、onReplyLoadTowerFullRank、
  好友家族 5 个。

剩余 24 个 handler：item-limit 家族（4）、social-event 家族（4）、
OnNoticeCharLiveOnTenMin/OnChangeCharName/onRequestCharacInfoByCharacName、
OnInnerPacketLogin/Logout、OnWebEmergencyPatchMessage、OnGameServerRegist、
OnEventStart/End、OnRegisterEventItem、OnExchangeServerInfo、
OnPvPChannelInfo/Count、3 个空函数。

工作流已优化：全量比对 0.5s（签名缓存），单函数 diff 0.2s
（diff_func.py）；批量疑似差异分类器 /tmp/mon_classify.py 秒级排序全部 DIFF。

## 本批次完成（会员进出家族）

- CUserManager：DelSchoolNo（417B）、FindUser_CharNo/FindUser_CharName 实现；
  5 个 map 成员改 const-key（mangled IKj/IKSs 与原版一致）。
- CMember：补 m_key@+0 字段（原版 GetMemberKey 读 +0）；ctor/dtor 按反编译；
  GetMemberKey/IsAbleToRegisterMember/SetMemberRegisterFlag/
  GetUpperMemberExpLevel/GetConnLowerMemberCnt/InsertUpperMember/
  InsertLowerMember/IsAlreadyMemberMember/DeleteUpper(Lower)Member/
  GetUpperMember_CharId/FindLowerMember 实现；m_registerTime/m_dayHourTime 改 uint。
- CUser：字段 getter（GetUniqCharNo/GetDBID/GetLevel/GetIdByChannel/
  GetCharName/GetGameServer）+ 会员判定方法族。
- CMemberManager：InsertMember 改 int；RegisterMember/SaveMemberOnConnect/
  SaveMemberOnUnConnect/CreateMemberInJoin/CheckMemberEnter/CheckEmptyMember/
  IsAlreadyMemberMember/GetMemberExpLevel。
- CPacketTranslater：m_pclApp 静态 + attach；OnRequestMemberEnter（496B）、
  OnMemberEnterReply（746B）、OnMemberSecede（359B）；4 个 Send 辅助；
  6 个 Packet_Monitor_* 包类（0x4b7/0x4b8/0x4b9/0x4ba/0x4bb/0x4bc）。
- 其它：CMemberExpTbl::GetMemberExpLevel 双版本、CGMAccounts::isGM、
  CApplication::GetGMAccounts、village_attacked::ClearDungeonCloseTime。
- 构建脚本：增量编译增加头文件依赖检查（.h 变更触发重编）。

## 大函数核验结论（逐个对照 Ghidra 反编译，语义等价）

| 函数 | 状态 | 结论 |
|---|---|---|
| CApplication::Load (1111B) | DIFF | 语义/日志行号/分支一致；残留 rodata 地址 + -O0 块序 |
| CSignalTranslator::init_signal (1063B) | NEAR | 操作数差异全部为链接地址，结构逐条一致 |
| CUdpNetworkThread::dispatch (524B) | DIFF | 消息/行号/三级错误分支一致；Not-Ready 抛异常位置不同 |
| CServerHandler::Load (354B) | DIFF | 0xff/0xc8/0xca 校验、0x5d/0x6f 重载日志一致 |
| CServerHandler::Process (330B) | DIFF | 心跳计数、掉线清理、DBMW 重连 0xdc/0x124/0x13d 一致 |
| CApplication::Free (317B) | DIFF | 析构/释放序列一致，虚析构调用形态差异 |
| CPeer::parsing (290B) | DIFF | 全部分支/日志一致；原版 0x10e 段 try/catch+printf 为死代码 |
| CMemberManager::MemerMemLogin (289B) | DIFF | 三段抛异常 + 日志 0x20c/0x21a 一致 |
| CUserManager::GetSchoolCount/AddSchoolNo/DelSchoolNo | NEAR/DIFF | 逻辑一致，栈布局差异 |

## 关键事实备忘

- 0x46/0x55 语义（auction/point）：0x46=70=AUCTION_ITEM_LV_MAX（AUCTION_CONST）；
  0x55=85 为 auction 构建 Search.cpp 硬编码等级上限（该处 DWARF 无命名常量），
  DWARF 中 85 另为 TEN_MINUTE_EVENT / ENUM_ERROR_SET_GUILD_MEMBER_GRADE_MYSELF。
- 其它二进制类复用：guild 的 CUserManager 同名方法逻辑按服务分化（公会清理链
  vs 黑名单/好友清理链），不能直接搬；共享库（CMyFileLog/CGuard/CDNFException/
  PacketHeader/DNFFunctionLib）monitor 与 guild 原版逐字节/近一致，可直接复用；
  monitor 布局一律以 nm/反编译为准（m_users 为 map<uint,CUser*> 非 const 键）。
- CPacketTranslater 剩余 123 个 handler 仍为空桩（累计约 2.2 万字节）；
  OnLogout/OnCharLogin/OnReplyUserInfo/OnLogin/OnNoticeOtherChannelChatMsg
  依赖 CLoginLogoutStatistics/CBuddyRegisterManager/exchange_server 等
  辅助函数，需分批实现。

## 第二十一批（MISSING 收口 170→0，2026-08-09 续十五）

### 当前水位（严格口径，compare_monitor.py 全量，MISSING = 0）

| 指标 | 数值 |
|---|---:|
| 应用函数 | 1,827（全部有符号） |
| IDENTICAL | **551**（会话初 398，+153） |
| NEAR | **245**（会话初 234，+11） |
| DIFF | **1,031**（会话初 1,025，+6） |
| EMPTY/MISSING | **0**（会话初 170） |

170 个缺失符号全部落地：净增 ID+153 / NEAR+11 / DIFF+6（大量既有
DIFF 因包类 packed 修正/签名修正升为 ID，抵消了新增 DIFF）。

### 本批完成内容

1. **包类 ctor（10 个新类 + 既有包类整体修正）**：
   Packet_CollectItemsUpdate(0x27ea/0x14)、Packet_CollectItemsResult(0x27e7/0x16)、
   Packet_Server_Queue_Load_Statistic(0x9d2/0xe)、Packet_InnerPakcet_Login(0xfa0/0xa)、
   Packet_InnerPakcet_Logout(0xfa1/0xa)、Packet_Monitor_UDP_HeartBeat(0x3ec/0xb+0xff)、
   Packet_MiniCraneSeed(0x27f8/0xe)、Packet_DB_Query_Member(0x4b2/0xe)、
   Packet_DB_Query_Member_Member(0x4b0/0xe)、Packet_Send_Time_Sync(0x1f4b/0xe)。
   **全部 271 个 packet 派生类加 `__attribute__((packed))`**（含 shared/packet/include），
   修正成员偏移（此前派生类成员落在 +0xc 起，原版在 +0xa 起），大批 ctor 由 DIFF→ID。
2. **结构体 ctor/Reset**：STBlackUserDBType（+0/+0x24=0、memset@4 0x1e）、
   ST_MemberProxy ctor+Reset（packed 布局，@0/@4/@0x23 命中位移寻址）、stLoginLogout、
   ST_MemberConfig、ST_KillUSRConfig、village_attacked::stHuntingPoint、CBlackUser
   （+0x20=0、memset 0x1e；补 m_occurTime 命名成员）、CCashObject::SetLifeTime。
3. **CScheduler 家族**：ctor 8 字节全 0xff、dtor、SetSpecialHour/SetSpecialDayHour/
   IsOnTimeSpecialHour（@1=min/小时、@2=小时/天、@3=天）；布局拆 m_data[4]+ushort+[2]。
4. **CDNFProhibitUser**：类缩为 0xc（原 m_data[0x20] 过大，池元素尺寸 0xc 为准）、
   GetDBID/GetProhibitRemainTime/IsTimeOutConnectable。
5. **CAppLoadChecker**：ctor + RequestDB（改签 CServerHandler*；Packet_Server_Queue_Load_
   Statistic @+0xa=0xc9/@+0xb=flag/@+0xc(ushort)=size → SendToDB，18/18 ID）。
6. **服务器/网络 getter 与 Clear**：CServerInterface 无参 ctor+GetServerInfo/GetUdpHandler/
   GetGroupNo/SetServerInfo；CGameServer/CDBServer/CManagerServer 无参 ctor+Initialize/Destroy
   （`if (!base()) return 0; else return 1;` 匹配 xor 形态）+GetSocket；CTcpManagerServer/
   CTcpDBServer::Clear；CServerHandler GetDBServer/GetManagerServer/SetGameServerIpPort/
   QueryMember/QueryMemberMember/SendDBMWRequest_D_IPCounter；CTcpNetSystem Get_TcpHandler/
   Get_TcpSendBLock/Get_TcpSendQLock/Get_TcpSendQPacket + 修正 RecvBLock/RecvQLock/
   Get_TcpSwapQPacket（此前 return 0）。
7. **CUser/CBuddyHandle/CMember/CCashObject 小件**：SetGameServer(CGameServer*)/PrintBuddys/
   SetBlackListDBFlag(ushort)、CBuddyHandle Get/SetBuddyDBFlag、CMember DebugPrintMemberMember/
   SetMemberDeleteTime(uint)、CUserManager::ResetMemberInfo、CMemoryCashManager::resetCashCnt。
8. **CSwapQueue/IQueue 模板重构**：真实成员（m_recvIdx/m_parseIdx + T m_queues[N]），
   ctor 自动构造 2 个 queue + Init()（与原版 68 条一致）；IQueue<T> Get() 真静态单例 +
   SwitchQueue/GetParseQueue；CApplication::SwitchQueueTCP/UDP/Get_UdpPacketParseQ/
   SendTestPacket_2；CPacketDecoder SetUdpQueue/SetTCPQueue；CUdpNetworkThread::SetUDPQueue
   改真实队列指针签名（mangled 对齐）。
9. **CTask 布局修正**：基类 0x10（vptr@0/tick@4/flag@8/taskID@0xc，命名成员），
   派生任务类（village_attacked ×7、COnTimeEvent ×3、CInitAccusationList）改
   `m_mgr@+0x10`（sizeof 0x14，new 分配 0x14 与原版一致）；补全部 ctor+_DoExecute+dtor；
   EndEffectTask ctor 补 @0x10=1 与 SetEndEffectTask。
10. **管理器小件**：CVillageAttackedManager RequestEventStart/RequestEventPenaltyEnd/
    SendRequestRevengeDungeon/ProcessByMinute；COnTimeEventManager::EventRewardOff
    （IsCurState 改 bool 返回，`!x` 走 xor 形态）；init_accusation getApp+CInitAccusationList；
    momiji_event EventManager::Init、EventAction::isRunning 去 const；CMemberManager::
    IsThereUpperMember；CTaskScheduler RemoveTask×2/GetTaskID；CPeriodicMessageMgr::init；
    CInnerMsgHandler::SendStopNetworkThread；CUdpHandler::InetAddr；TowerOfDespairReloadAPC_Task::
    _DoExecute（0x40 帧）；CVersionMgr ctor+全局实例；CSignal 虚析构+非静态 dump_core_file
    （getrlimit/setrlimit/abort 全链）+CFloatingPointExceptSig D1/D0/handle。
11. **MemPool/operator new-delete 补齐**：MemPool(unsigned) ctor（m_size=sizeof(T)，
    显式实例化 11 个 C1Ej）；CBlackUser/CCashObject 的 operator new、11 类 sized
    `operator delete(void*,unsigned)`、CCashObject/CMember 单参 delete。
12. **CGMAccounts 命名修正**：原版方法名 appendGM/removeGM（各 8 字符，非 appendGME）——
    已按 mangled 对齐；补 loadGMAccounts/appendGM/removeGM/LoadGmList/stGMInfo_t::operator==。
13. **ST_ServerInfo**：0xc 结构（int+std::string+int），CServerConfig 挂 0xff 表项数组，
    dtor 循环销毁 255 项（与原版 CServerConfigD1Ev 一致）。
14. **compareTime 移出 village_attacked 命名空间**（全局 `_Z11compareTimeRKiS0_`，
    `return a > b` → setg）。

### 剩余 DIFF 归类（本批新增部分，语义均等价）

- **池语义**：operator new/delete 系列走 `::operator new/delete`（原版走全局
  MemPool<T> 实例 alloc/free）→ 调用目标符号不同判 DIFF；MemPool 子系统
  alloc/free/dtor 本体为既存 DIFF（语义等价，待池对齐）。结论维持
  “池语义待 MemPool 子系统对齐”。
- **工具链代码生成差异**：IsTimeOutConnectable（原版 `setle/test/je` vs 本工具链
  `jne`）、SendRequestRevengeDungeon（原版指针位移寻址 vs 本工具链 lea 形态）、
  SendDBMWRequest_D_IPCounter（帧布局 0x38 vs 0x38 内局部排布差异）、
  SetGameServerIpPort（原版无参数 shadow 溢出，本工具链会溢出）、
  dump_core_file/CFloatingPointExceptSig::handle（差异仅尾对齐 nop 或指令序）。
- **静态单例/guard 形态**：_ZnwjRKSt9nothrow_t（工具链版本差异）、
  IQueue::Get（guard 变量布局）。
- **对齐 nop**：CAppLoadChecker ctor、CBlackUser ctor 等仅差尾随 nop（布局产物）。

### 关键修正备忘

- IsCurState 原版为 **bool** 返回（`!x` 走 `xor $1` 而非 `sete`），已改。
- CGameServer/CDBServer/CManagerServer/CServerInterface 原版**同时存在**
  无参与带参两套 ctor（C1Ev 与 C1EP12stServerInfo），本批补无参版。
- SetGameServerIpPort 原版参数序 (uchar,uint,ushort)（mangled Ehjt），
  appendGM/removeGM 为 8 字符名（mangled 8appendGMEjj 中 E 是参数分隔符）。
- CScheduler 布局 8 字节：@0..3 字节、@4 ushort、@6..7 字节；
  IsOnTimeSpecialHour 判 @2==day && @1==hour。
- ST_MemberProxy 为 packed 0x27（m_field23 非对齐），STMemberDBInfo 数组步长 0x27。

### 下一步

- 大函数核验（OnMemberEnterReply/OnLogout/OnCharLogin/OnLogin 等既有 DIFF 语义等价
  结论维持，无回归）；冒烟构建通过。
- 按 decompile_order.md 将 monitor 标记完成，更新队列状态，开始 **manager**
  （3.2MB/5948 函数/无 DWARF，策略同 monitor）。

## 第十四批（2026-08-12 第 14 轮进行中，父 Agent 直修）
- TCPSocket::setOptResizeSendBuf：optlen/opt 声明+赋值顺序对齐栈槽与写入序（NEAR→IDENTICAL）
- CPeriodicMessageMgr::OnTimerSendData：size_t len → int len 对齐参数装载顺序（NEAR→IDENTICAL）
- momiji_event::EventManager::sendDeleteEffect：+stack_pad[8] 对齐 pkt 栈槽 -0x22（NEAR→IDENTICAL_AE）
- COnTimeEventManager::SendContinueTimeToGS：成员赋值顺序按 ORIG 实测重排（m_field38→m_field12 等，NEAR→IDENTICAL）
- CLoginLogoutStatistics::ProcessByMinute：v0..v3 死局部 → 直接写 pkt.m_field608..614（真实语义修复）；+pad/dummy 对齐栈槽（NEAR→IDENTICAL）
- CIPCounter 三函数（setLoadTerm/setMinIPCount/setOption）：已穷举源码变体（局部 char/int、register、三元、if/else 分支、pad 栈槽、c5r52/c6444r A/B）无法复现 ORIG 的寄存器常驻形态（ORIG `movzbl; cmp $0xc8,%al` vs 各编译器 `cmpb -0x4(%ebp)` 内存比较；ORIG 帧 0x4 参数槽 -0x4 vs 我们 0x14/-0x14）；源码保留语义还原版，交 misc2 组继续/到头上报。
