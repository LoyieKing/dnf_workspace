# monitor 残留函数语义验证（2026-08-16，分批）

判定口径与 statics 一致：大块汇编不同→判不同；小块不同→详判原因，属
编译器形态且语义等价→SEMANTIC_EQ。编译器形态包括：CSE、栈槽/帧尺寸、
寄存器分配、分支方向镜像、跳转目标偏移、异常 landing pad、__FUNCTION__
槽 vs 字面量、memset 内联 vs call、`{0}` 只清 N/4、浮点比较指令形态、
`test+sete` vs `cmpl+jne`、同地址不同写法、日志行号两侧均有、复制粘贴
错误串复刻。

## 第 1 批（30 个）：26 SEMANTIC_EQ / 4 REAL_DIFF（均已修）

### REAL_DIFF（真实语义 bug，已修复）
- `OnDBMWDeleteToBlackList`：`m_charNo2 == -1` 分支发 result=3 后 ORIG 跳到
  函数尾；OURS 两个独立 if，-1 时继续 DeleteToBlackList(-1) 并多发 result=2/1
  两个包。修复：后续块包进 else。
- `OnLogout`：buddy 循环 SendNoticeBuddyInOut 的 channel 参数 ORIG 用登出者
  `user->GetGameServer()`，OURS 误用 `other->GetGameServer()`。已修。
- `OnRequestMemberEnter`：log 0x5a2 第 4 参 ORIG `target->IsAbleToRegisterMember()`，
  OURS 重复传 requester。已修。
- `OnMemberEnterReply`：log 0x681 首参 ORIG `responser->GetUniqCharNo()`，
  OURS 用 requester。已修。

### 其余 26 个 SEMANTIC_EQ
OnCharLogin、OnReplyUserInfo、OnCallMemberList、OnAddBuddyDBReply、
OnDelBuddyDBReply、OnGameServerRegist、OnInnerPacketLogin/Logout、
OnExchangeServerInfo、OnNoticeMemberChatMsg、OnPvPChannelUserCount、
OnRegisterToBlackList、OnQueryBuddyInfoDBReply、OnNoticeCharLiveOnTenMin、
onReplyLoadTowerFullRank、onItemLimitEditionSellEnd、OnWebEmergencyPatchMessage、
OnNoticeOtherChannelChatMsg(+HyperLink)、OnNoticeProhibitConnectUser、
onSocialEventRewardItemInfo、onItemLimitEditionLoadDataReq/Rpy、
onSocialEventRewardItemUpdate、onRequestCharacTowerUpdateRank、
onRequestCharacInfoByCharacName。

## 第 2 批（42 个）：41 SEMANTIC_EQ / 0 REAL_DIFF / 1 已 identical

Parse_Table、setLoadTerm、setMinIPCount、setOption、GetBuddysObject、
InitServerSocket、CAppStopInit::Init、TranslateSignal、CApplication::Load、
addFromCash、printBuddys、addDB、AddSchoolNo、GetSchoolCount、
ProcessByMinute、InsertUser_CharNo/CharName、SendConnectedBuddysList、
DeleteUsersOnGameServerDown、DeleteUsersOnTcpGameServerDown、
EndEffectTask::_DoExecute、CAppStartInit::Init、CMemberExpTbl::Parse_Table/
GetMemberExpLevel、CTcpNetSystem 系列、StrPunish、CMemberManager 系列、
CPacketCounter AfterProcess、TcpProcess 等全部 SEMANTIC_EQ
（CPacketCounter BeforeProcess 字节级 identical）。

## 第 3 批（42 个）：41 SEMANTIC_EQ / 0 REAL_DIFF / 1 已 identical

UdpProcess、MsgDecode、CServerHandler::Process、setSchedule、
CDNFProhibitUser 系列、IsHeartBeatTimeOver、CTcpAcceptThread::dispatch、
VillageAttackedManager 系列、OnGMRequestMid、OnMemberSecede、onCollectItems、
OnPayTaxToUpper（浮点常量 0.01/0.05 与 ORIG rodata 一致）、OnChangeCharName、
OnLogoutComplete、OnPvPChannelInfo、OnTakeScreenShot、OnEventItemUpdate、
OnSetCleanPadPoint、OnDeleteToBlackList、OnRegisterEventItem、
OnWebRequestARSInfo、OnMonitorPunishCancel、OnUpdateMiniCraneSeed、
OnUserRepelByCharName、OnCheckOverlappedAccusation、OnWebChangeUserHandicap、
OnDBMWResisterToBlackList、OnMonitorFindFactoryHubUser、
OnMonitorSecuServiceConnWeb、OnVillageMonsterFightResult、
OnDBMWResponseBlackListOnLogin、OnNoticeMemberChatMsgHyperLink、
onSocialEventRewardItemResponse、onItemLimitEditionBuyableRequest。

## 第 4 批（42 个）：42 SEMANTIC_EQ / 0 REAL_DIFF / 0 跳过

OnVillageMonsterFightResult、OnDBMWResponseBlackListOnLogin、
OnNoticeMemberChatMsgHyperLink、onSocialEventRewardItemInfoAll/Response、
onItemLimitEditionBuyableRequest、OnLogin、CTcpNetworkThread/CUdpNetworkThread::
dispatch、GetFrameCountInfo、CMemoryCashManager 系列（含
InsertCashMemorySetCharacterObject 用重建二进制实证 insert 判定一致）、
CEventActionManager、COnTimeEventManager、CItemLimitEditionMgr、
CTask_ChristmasEvent、LimitNpcBuyItemManager、TowerOfDespairWaitGameServerResponse_Task、
CPeer 系列、CUser::MemberEnterProcess、CMember 系列、CUdpHandler 系列、
makeItemInfo 全部 SEMANTIC_EQ。

## 汇总

monitor 156 个非 identical 全部完成逐函数语义验证：
**149 SEMANTIC_EQ / 4 REAL_DIFF（已修）/ 2 已 identical / 1 无需判定**
（b1 30 + b2 42 + b3 42 + b4 42，含少量重复与已翻越项）。
核心结论：4 个 REAL_DIFF 均为日志参数取错对象/控制流穿透类，已修复；
其余全部为编译器形态（栈槽/帧、寄存器分配、分支镜像、CSE、异常 landing
pad、`{0}`/movzbl 形态、浮点指令形态等），语义与 ORIG 等价。
