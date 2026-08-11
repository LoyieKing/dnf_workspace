# _ZN14CPacketDecoderC1Ev

`CPacketDecoder::CPacketDecoder()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x807c42c` | `0x684` | `0x8067628` | `0x690` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,268 +1,274 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x10,%esp
 mov    0x8(%ebp),%eax
 movl   $0x0,(%eax)
 mov    0x8(%ebp),%eax
-movl   $0x0,0x4(%eax)
-mov    0x8(%ebp),%eax
-movl   $0x0,0x8(%eax)
-mov    0x8(%ebp),%eax
-movl   $0x0,0xc(%eax)
-mov    0x8(%ebp),%eax
-movl   $0x0,0x10(%eax)
-mov    0x8(%ebp),%eax
-movl   $0x0,0x14(%eax)
-mov    0x8(%ebp),%eax
-movl   $0x0,0x18(%eax)
+add    $0x4,%eax
+movl   $0x0,(%eax)
+mov    0x8(%ebp),%eax
+add    $0x8,%eax
+movl   $0x0,(%eax)
+mov    0x8(%ebp),%eax
+add    $0xc,%eax
+movl   $0x0,(%eax)
+mov    0x8(%ebp),%eax
+add    $0x10,%eax
+movl   $0x0,(%eax)
+mov    0x8(%ebp),%eax
+add    $0x14,%eax
+movl   $0x0,(%eax)
+mov    0x8(%ebp),%eax
+add    $0x18,%eax
+movl   $0x0,(%eax)
 movl   $0x3e8,-0x4(%ebp)
-jmp    <T> <_ZN14CPacketDecoderC1Ev+0x69>
+jmp    <T> <_ZN14CPacketDecoderC1Ev+0x75>
 mov    -0x4(%ebp),%edx
 mov    0x8(%ebp),%eax
 add    $0x4,%edx
 movl   $0x0,0xc(%eax,%edx,4)
 addl   $0x1,-0x4(%ebp)
 cmpl   $0x27ff,-0x4(%ebp)
 setle  %al
 test   %al,%al
-jne    <T> <_ZN14CPacketDecoderC1Ev+0x54>
+jne    <T> <_ZN14CPacketDecoderC1Ev+0x60>
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater7OnLoginEP12PacketHeader,0xfbc(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater8OnLogoutEP12PacketHeader,0xfc0(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater15OnReplyUserInfoEP12PacketHeader,0xfc4(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader,0xfcc(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater11OnCharLoginEP12PacketHeader,0xfd8(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater27OnNoticeOtherChannelChatMsgEP12PacketHeader,0xfe8(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater12OnCeraUpdateEP12PacketHeader,0x114c(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater17OnEventItemUpdateEP12PacketHeader,0x1150(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater18OnReplyQueryMemberEP12PacketHeader,0x12e8(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater20OnRequestMemberEnterEP12PacketHeader,0x12f8(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater18OnMemberEnterReplyEP12PacketHeader,0x1300(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader,0x1308(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater16OnCallMemberListEP12PacketHeader,0x1314(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader,0x1318(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater15OnPayTaxToUpperEP12PacketHeader,0x131c(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater25OnUpdateChangableCharInfoEP12PacketHeader,0xff0(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater16OnLogoutCompleteEP12PacketHeader,0xfec(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater11OnUserRepelEP12PacketHeader,0x1320(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader,0x1324(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater12OnEventStartEP12PacketHeader,0x1158(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater10OnEventEndEP12PacketHeader,0x115c(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater15OnNotifyNewMailEP12PacketHeader,0x146c(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader,0x1f5c(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater15OnNoticeMessageEP12PacketHeader,0x278c(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater22OnRelayServerUserCheckEP12PacketHeader,0x272c(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater12OnForbidChatEP12PacketHeader,0x2790(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater27OnNoticeProhibitConnectUserEP12PacketHeader,0x133c(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater25OnMonitorManagerConnectOKEP12PacketHeader,0x15fc(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater21OnMonitorMegaPhoneMsgEP12PacketHeader,0x1534(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader,0x178c(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader,0x1790(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater18OnRequestBlackListEP12PacketHeader,0x179c(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater25OnDBMWResisterToBlackListEP12PacketHeader,0x1794(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeader,0x1798(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader,0x17a0(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater20OnExchangeServerInfoEP12PacketHeader,0x2794(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader,0x191c(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater17OnWebNoticeSingleEP12PacketHeader,0x279c(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater10OnAddBuddyEP12PacketHeader,0x19e4(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater17OnAddBuddyDBReplyEP12PacketHeader,0x19e8(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater10OnDelBuddyEP12PacketHeader,0x19ec(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater17OnDelBuddyDBReplyEP12PacketHeader,0x19f0(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater23OnQueryBuddyInfoDBReplyEP12PacketHeader,0x19f4(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater23OnWebChangeUserHandicapEP12PacketHeader,0xff4(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater14OnGMRequestMidEP12PacketHeader,0x1dcc(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater21OnUserRepelByCharNameEP12PacketHeader,0x135c(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater24onReplyLoadTowerFullRankEP12PacketHeader,0x1350(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater30onRequestCharacTowerUpdateRankEP12PacketHeader,0x1354(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater26onRequestReloadTowerRankerEP12PacketHeader,0x1358(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater28onWebReqReloadAutoPunishRuleEP12PacketHeader,0x2d6c(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader,0x3e9c(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader,0x3ea0(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater13OnNoticeSlangEP12PacketHeader,0x2a4c(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater19onLoadCleanPadPointEP12PacketHeader,0x2d70(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater20onLoadBlackIPMonitorEP12PacketHeader,0x2d74(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater28onLoadBlackIPMonitorPartLoadEP12PacketHeader,0x2d78(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater28onLoadBlackIPMonitorDeleteIPEP12PacketHeader,0x2d7c(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater16OnChangeCharNameEP12PacketHeader,0x1160(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater19OnNotifyAuctionMailEP12PacketHeader,0x308c(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater16OnPvPChannelInfoEP12PacketHeader,0x3ea4(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater21OnPvPChannelUserCountEP12PacketHeader,0x3ea8(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater13OnChannelTypeEP12PacketHeader,0x3eac(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater19OnServerMessageInfoEP12PacketHeader,0x3ed4(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater29OnRequestReloadPowerWarRankerEP12PacketHeader,0x1bc4(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater19onLoadPunishUserReqEP12PacketHeader,0x2d94(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater18onIPCounterControlEP12PacketHeader,0x2d98(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater29onItemLimitEditionLoadDataReqEP12PacketHeader,0x4038(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader,0x403c(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater25onItemLimitEditionSellEndEP12PacketHeader,0x4030(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater32onItemLimitEditionBuyableRequestEP12PacketHeader,0x4040(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader,0x4054(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater18OnSetCleanPadPointEP12PacketHeader,0x2d9c(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater23OnResponseIPCounterListEP12PacketHeader,0x4100(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater27OnResponseFullIPCounterListEP12PacketHeader,0x4104(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater16OnTakeScreenShotEP12PacketHeader,0x2768(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater27OnVillageMonsterFightResultEP12PacketHeader,0x5de4(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater26OnVillageAttackedGMCommandEP12PacketHeader,0x5e00(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater21OnVillageAttackedRankEP12PacketHeader,0x5e08(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater27OnMonitorFullLevelBroadCastEP12PacketHeader,0x5e14(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater12OnSetARSInfoEP12PacketHeader,0x2da0(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater19OnWebRequestARSInfoEP12PacketHeader,0x2da4(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater27OnCheckOverlappedAccusationEP12PacketHeader,0x6db4(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater18OnGameServerRegistEP12PacketHeader,0x7d20(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater9OnNoCacheEP12PacketHeader,0x6dd0(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater28OnDisableUserOneToOneChat_GMEP12PacketHeader,0x7d28(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater16OnRegisterGM_midEP12PacketHeader,0x7d2c(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater23OnFindCharacName_useUIDEP12PacketHeader,0x7d30(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater15OnRenew_GM_ListEP12PacketHeader,0x7d50(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater21OnLoadPeriodicMessageEP12PacketHeader,0x7d3c(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater27OnResultLoadPeriodicMessageEP12PacketHeader,0x7d40(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater18OnRegisterEventIdxEP12PacketHeader,0x8d20(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater22OnRegisterEventUserIdxEP12PacketHeader,0x8d28(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater19OnRegisterEventItemEP12PacketHeader,0x8d34(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater24OnResultRegisterEventIdxEP12PacketHeader,0x8d3c(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater30OnGameMonitorGMVillageAttackedEP12PacketHeader,0x8d44(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater21OnMonitorPunishCancelEP12PacketHeader,0x2dac(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater14OnBroadcastMsgEP12PacketHeader,0x9c60(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater27OnMonitorSecuServiceConnWebEP12PacketHeader,0x2db0(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater17OnResetTODAPCInfoEP12PacketHeader,0x9c64(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader,0x9c84(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater36OnNoticeOtherChannelChatMsgHyperLinkEP12PacketHeader,0x9c80(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater30OnMonitorMegaPhoneMsgHyperLinkEP12PacketHeader,0x9c88(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater30onSocialEventRewardItemRequestEP12PacketHeader,0x9f7c(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater31onSocialEventRewardItemResponseEP12PacketHeader,0x9f8c(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader,0x9f80(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater30onSocialEventRewardItemInfoAllEP12PacketHeader,0x9f84(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater29onSocialEventRewardItemUpdateEP12PacketHeader,0x9f90(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater31onRequestCharacInfoByCharacNameEP12PacketHeader,0x9f94(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater19OnWebNoticeInGameADEP12PacketHeader,0x9fa4(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater14onCollectItemsEP12PacketHeader,0x9fb4(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater20onCollectItemsResultEP12PacketHeader,0x9fb8(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater16onCollectItemsGmEP12PacketHeader,0x9fc8(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader,0x9fcc(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater26OnWebEmergencyPatchMessageEP12PacketHeader,0x9fe0(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater21OnUpdateMiniCraneSeedEP12PacketHeader,0x9ffc(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater26onStartGameEventFromServerEP12PacketHeader,0xa008(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater24onEndGameEventFromServerEP12PacketHeader,0xa00c(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater19onReloadCountryCodeEP12PacketHeader,0xa014(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater30onReloadSecurityRestrictPolicyEP12PacketHeader,0xa018(%eax)
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketDecoder::CPacketDecoder() */

void __thiscall CPacketDecoder::_ZN14CPacketDecoderC1Ev(CPacketDecoder *this)

{
  int local_8;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  for (local_8 = 1000; local_8 < 0x2800; local_8 = local_8 + 1) {
    *(undefined4 *)(this + (local_8 + 4) * 4 + 0xc) = 0;
  }
  *(code **)(this + 0xfbc) = CPacketTranslater::OnLogin;
  *(code **)(this + 0xfc0) = CPacketTranslater::OnLogout;
  *(code **)(this + 0xfc4) = CPacketTranslater::OnReplyUserInfo;
  *(code **)(this + 0xfcc) = CPacketTranslater::OnHeartBeat;
  *(code **)(this + 0xfd8) = CPacketTranslater::OnCharLogin;
  *(code **)(this + 0xfe8) = CPacketTranslater::OnNoticeOtherChannelChatMsg;
  *(code **)(this + 0x114c) = CPacketTranslater::OnCeraUpdate;
  *(code **)(this + 0x1150) = CPacketTranslater::OnEventItemUpdate;
  *(code **)(this + 0x12e8) = CPacketTranslater::OnReplyQueryMember;
  *(code **)(this + 0x12f8) = CPacketTranslater::OnRequestMemberEnter;
  *(code **)(this + 0x1300) = CPacketTranslater::OnMemberEnterReply;
  *(code **)(this + 0x1308) = CPacketTranslater::OnMemberSecede;
  *(code **)(this + 0x1314) = CPacketTranslater::OnCallMemberList;
  *(code **)(this + 0x1318) = CPacketTranslater::OnNoticeMemberChatMsg;
  *(code **)(this + 0x131c) = CPacketTranslater::OnPayTaxToUpper;
  *(code **)(this + 0xff0) = CPacketTranslater::OnUpdateChangableCharInfo;
  *(code **)(this + 0xfec) = CPacketTranslater::OnLogoutComplete;
  *(code **)(this + 0x1320) = CPacketTranslater::OnUserRepel;
  *(code **)(this + 0x1324) = CPacketTranslater::OnCharacterDelete;
  *(code **)(this + 0x1158) = CPacketTranslater::OnEventStart;
  *(code **)(this + 0x115c) = CPacketTranslater::OnEventEnd;
  *(code **)(this + 0x146c) = CPacketTranslater::OnNotifyNewMail;
  *(code **)(this + 0x1f5c) = CPacketTranslater::OnWebQueryUserState;
  *(code **)(this + 0x278c) = CPacketTranslater::OnNoticeMessage;
  *(code **)(this + 0x272c) = CPacketTranslater::OnRelayServerUserCheck;
  *(code **)(this + 0x2790) = CPacketTranslater::OnForbidChat;
  *(code **)(this + 0x133c) = CPacketTranslater::OnNoticeProhibitConnectUser;
  *(code **)(this + 0x15fc) = CPacketTranslater::OnMonitorManagerConnectOK;
  *(code **)(this + 0x1534) = CPacketTranslater::OnMonitorMegaPhoneMsg;
  *(code **)(this + 0x178c) = CPacketTranslater::OnRegisterToBlackList;
  *(code **)(this + 0x1790) = CPacketTranslater::OnDeleteToBlackList;
  *(code **)(this + 0x179c) = CPacketTranslater::OnRequestBlackList;
  *(code **)(this + 0x1794) = CPacketTranslater::OnDBMWResisterToBlackList;
  *(code **)(this + 0x1798) = CPacketTranslater::OnDBMWDeleteToBlackList;
  *(code **)(this + 0x17a0) = CPacketTranslater::OnDBMWResponseBlackListOnLogin;
  *(code **)(this + 0x2794) = CPacketTranslater::OnExchangeServerInfo;
  *(code **)(this + 0x191c) = CPacketTranslater::OnNoticeCharLiveOnTenMin;
  *(code **)(this + 0x279c) = CPacketTranslater::OnWebNoticeSingle;
  *(code **)(this + 0x19e4) = CPacketTranslater::OnAddBuddy;
  *(code **)(this + 0x19e8) = CPacketTranslater::OnAddBuddyDBReply;
  *(code **)(this + 0x19ec) = CPacketTranslater::OnDelBuddy;
  *(code **)(this + 0x19f0) = CPacketTranslater::OnDelBuddyDBReply;
  *(code **)(this + 0x19f4) = CPacketTranslater::OnQueryBuddyInfoDBReply;
  *(code **)(this + 0xff4) = CPacketTranslater::OnWebChangeUserHandicap;
  *(code **)(this + 0x1dcc) = CPacketTranslater::OnGMRequestMid;
  *(code **)(this + 0x135c) = CPacketTranslater::OnUserRepelByCharName;
  *(code **)(this + 0x1350) = CPacketTranslater::onReplyLoadTowerFullRank;
  *(code **)(this + 0x1354) = CPacketTranslater::onRequestCharacTowerUpdateRank;
  *(code **)(this + 0x1358) = CPacketTranslater::onRequestReloadTowerRanker;
  *(code **)(this + 0x2d6c) = CPacketTranslater::onWebReqReloadAutoPunishRule;
  *(code **)(this + 0x3e9c) = CPacketTranslater::OnInnerPacketLogin;
  *(code **)(this + 0x3ea0) = CPacketTranslater::OnInnerPacketLogout;
  *(code **)(this + 0x2a4c) = CPacketTranslater::OnNoticeSlang;
  *(code **)(this + 0x2d70) = CPacketTranslater::onLoadCleanPadPoint;
  *(code **)(this + 0x2d74) = CPacketTranslater::onLoadBlackIPMonitor;
  *(code **)(this + 0x2d78) = CPacketTranslater::onLoadBlackIPMonitorPartLoad;
  *(code **)(this + 0x2d7c) = CPacketTranslater::onLoadBlackIPMonitorDeleteIP;
  *(code **)(this + 0x1160) = CPacketTranslater::OnChangeCharName;
  *(code **)(this + 0x308c) = CPacketTranslater::OnNotifyAuctionMail;
  *(code **)(this + 0x3ea4) = CPacketTranslater::OnPvPChannelInfo;
  *(code **)(this + 0x3ea8) = CPacketTranslater::OnPvPChannelUserCount;
  *(code **)(this + 0x3eac) = CPacketTranslater::OnChannelType;
  *(code **)(this + 0x3ed4) = CPacketTranslater::OnServerMessageInfo;
  *(code **)(this + 0x1bc4) = CPacketTranslater::OnRequestReloadPowerWarRanker;
  *(code **)(this + 0x2d94) = CPacketTranslater::onLoadPunishUserReq;
  *(code **)(this + 0x2d98) = CPacketTranslater::onIPCounterControl;
  *(code **)(this + 0x4038) = CPacketTranslater::onItemLimitEditionLoadDataReq;
  *(code **)(this + 0x403c) = CPacketTranslater::onItemLimitEditionLoadDataRpy;
  *(code **)(this + 0x4030) = CPacketTranslater::onItemLimitEditionSellEnd;
  *(code **)(this + 0x4040) = CPacketTranslater::onItemLimitEditionBuyableRequest;
  *(code **)(this + 0x4054) = CPacketTranslater::OnMonitorFindFactoryHubUser;
  *(code **)(this + 0x2d9c) = CPacketTranslater::OnSetCleanPadPoint;
  *(code **)(this + 0x4100) = CPacketTranslater::OnResponseIPCounterList;
  *(code **)(this + 0x4104) = CPacketTranslater::OnResponseFullIPCounterList;
  *(code **)(this + 0x2768) = CPacketTranslater::OnTakeScreenShot;
  *(code **)(this + 0x5de4) = CPacketTranslater::OnVillageMonsterFightResult;
  *(code **)(this + 0x5e00) = CPacketTranslater::OnVillageAttackedGMCommand;
  *(code **)(this + 0x5e08) = CPacketTranslater::OnVillageAttackedRank;
  *(code **)(this + 0x5e14) = CPacketTranslater::OnMonitorFullLevelBroadCast;
  *(code **)(this + 0x2da0) = CPacketTranslater::OnSetARSInfo;
  *(code **)(this + 0x2da4) = CPacketTranslater::OnWebRequestARSInfo;
  *(code **)(this + 0x6db4) = CPacketTranslater::OnCheckOverlappedAccusation;
  *(code **)(this + 0x7d20) = CPacketTranslater::OnGameServerRegist;
  *(code **)(this + 0x6dd0) = CPacketTranslater::OnNoCache;
  *(code **)(this + 0x7d28) = CPacketTranslater::OnDisableUserOneToOneChat_GM;
  *(code **)(this + 0x7d2c) = CPacketTranslater::OnRegisterGM_mid;
  *(code **)(this + 0x7d30) = CPacketTranslater::OnFindCharacName_useUID;
  *(code **)(this + 0x7d50) = CPacketTranslater::OnRenew_GM_List;
  *(code **)(this + 0x7d3c) = CPacketTranslater::OnLoadPeriodicMessage;
  *(code **)(this + 0x7d40) = CPacketTranslater::OnResultLoadPeriodicMessage;
  *(code **)(this + 0x8d20) = CPacketTranslater::OnRegisterEventIdx;
  *(code **)(this + 0x8d28) = CPacketTranslater::OnRegisterEventUserIdx;
  *(code **)(this + 0x8d34) = CPacketTranslater::OnRegisterEventItem;
  *(code **)(this + 0x8d3c) = CPacketTranslater::OnResultRegisterEventIdx;
  *(code **)(this + 0x8d44) = CPacketTranslater::OnGameMonitorGMVillageAttacked;
  *(code **)(this + 0x2dac) = CPacketTranslater::OnMonitorPunishCancel;
  *(code **)(this + 0x9c60) = CPacketTranslater::OnBroadcastMsg;
  *(code **)(this + 0x2db0) = CPacketTranslater::OnMonitorSecuServiceConnWeb;
  *(code **)(this + 0x9c64) = CPacketTranslater::OnResetTODAPCInfo;
  *(code **)(this + 0x9c84) = CPacketTranslater::OnNoticeMemberChatMsgHyperLink;
  *(code **)(this + 0x9c80) = CPacketTranslater::OnNoticeOtherChannelChatMsgHyperLink;
  *(code **)(this + 0x9c88) = CPacketTranslater::OnMonitorMegaPhoneMsgHyperLink;
  *(code **)(this + 0x9f7c) = CPacketTranslater::onSocialEventRewardItemRequest;
  *(code **)(this + 0x9f8c) = CPacketTranslater::onSocialEventRewardItemResponse;
  *(code **)(this + 0x9f80) = CPacketTranslater::onSocialEventRewardItemInfo;
  *(code **)(this + 0x9f84) = CPacketTranslater::onSocialEventRewardItemInfoAll;
  *(code **)(this + 0x9f90) = CPacketTranslater::onSocialEventRewardItemUpdate;
  *(code **)(this + 0x9f94) = CPacketTranslater::onRequestCharacInfoByCharacName;
  *(code **)(this + 0x9fa4) = CPacketTranslater::OnWebNoticeInGameAD;
  *(code **)(this + 0x9fb4) = CPacketTranslater::onCollectItems;
  *(code **)(this + 0x9fb8) = CPacketTranslater::onCollectItemsResult;
  *(code **)(this + 0x9fc8) = CPacketTranslater::onCollectItemsGm;
  *(code **)(this + 0x9fcc) = CPacketTranslater::OnPcRoomPlayTimeReward;
  *(code **)(this + 0x9fe0) = CPacketTranslater::OnWebEmergencyPatchMessage;
  *(code **)(this + 0x9ffc) = CPacketTranslater::OnUpdateMiniCraneSeed;
  *(code **)(this + 0xa008) = CPacketTranslater::onStartGameEventFromServer;
  *(code **)(this + 0xa00c) = CPacketTranslater::onEndGameEventFromServer;
  *(code **)(this + 0xa014) = CPacketTranslater::onReloadCountryCode;
  *(code **)(this + 0xa018) = CPacketTranslater::onReloadSecurityRestrictPolicy;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/COServer/DNFPacketDecoder.cpp](source/DNFServer/GameServer/COServer/DNFPacketDecoder.cpp)（约第 26 行）：

```cpp
CPacketDecoder::CPacketDecoder()
{
    m_poolLock = 0;
    for (int i = 1000; i < 0x27fd; i++)
    {
        m_handlers[i] = 0;
    }
    m_handlers[0xbb8] = (void*)&CPacketTranslater::OnLogin;
    m_handlers[0xbb9] = (void*)&CPacketTranslater::OnLogout;
    m_handlers[0x3f9] = (void*)&CPacketTranslater::OnReplyUserInfo;
    m_handlers[0xbba] = (void*)&CPacketTranslater::OnHeartBeat;
}
```
