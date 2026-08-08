# df_monitor_r 还原进度

更新：2026-08-09

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

- 0x46/0x55 语义（auction/point）：0x46=70=AUCTION_ITEM_LV_MAX（DWARF 枚举
  const_value 70）；0x55=85 是 auction 构建硬编码字面量（DWARF 无命名常量）。
  -DPOINT_SERVER 走 70（4 处），auction 走 85。
- 其它二进制类复用：guild 的 CUserManager（0x4c）等布局与 monitor 不同，不能
  直接搬；共享库（CMyFileLog/CGuard/CDNFException/PacketHeader/
  DNFFunctionLib）与写法惯例可复用；monitor 布局一律以 nm/反编译为准。
- CPacketTranslater 剩余 123 个 handler 仍为空桩（累计约 2.2 万字节）；
  OnLogout/OnCharLogin/OnReplyUserInfo/OnLogin/OnNoticeOtherChannelChatMsg
  依赖 CLoginLogoutStatistics/CBuddyRegisterManager/exchange_server 等
  辅助函数，需分批实现。
