# _ZN14CPacketDecoderC2Ev

`CPacketDecoder::CPacketDecoder()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x8090f54` | `0x691` | `0x8079928` | `0x692` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,270 +1,271 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x10,%esp
 mov    0x8(%ebp),%eax
 movl   $0x0,(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x4(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x8(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0xc(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x10(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x14(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x18(%eax)
 movl   $0x3e8,-0x4(%ebp)
 jmp    <T> <_ZN14CPacketDecoderC1Ev+0x69>
 mov    -0x4(%ebp),%edx
 mov    0x8(%ebp),%eax
 add    $0x4,%edx
 movl   $0x0,0xc(%eax,%edx,4)
 addl   $0x1,-0x4(%ebp)
 cmpl   $0x27ff,-0x4(%ebp)
 setle  %al
 test   %al,%al
 jne    <T> <_ZN14CPacketDecoderC1Ev+0x54>
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater12OnQueryGuildEP12PacketHeader,0x102c(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater18OnQueryGuildMemberEP12PacketHeader,0x1024(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater11OnSaveGuildEP12PacketHeader,0x1040(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater13OnQueryMemberEP12PacketHeader,0x12e4(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater12OnSaveMemberEP12PacketHeader,0x12ec(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater26OnSaveMemberUpdateCharInfoEP12PacketHeader,0x12f0(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater26OnMemberDeleteAsCharDeleteEP12PacketHeader,0x1328(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater17OnSaveGuildMemberEP12PacketHeader,0x1058(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater21OnSavePowerSecedeTimeEP12PacketHeader,0x113c(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater21OnDBMWConnectionCheckEP12PacketHeader,0x1068(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater18OnSaveGuildWarInfoEP12PacketHeader,0x107c(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater13OnEndGuildWarEP12PacketHeader,0x1064(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader,0x1794(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader,0x1798(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater25OnRequestBlackListOnLoginEP12PacketHeader,0x17a0(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater15OnSaveMemberExpEP12PacketHeader,0x1920(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater10OnAddBuddyEP12PacketHeader,0x19e8(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater10OnDelBuddyEP12PacketHeader,0x19f0(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater16OnQueryBuddyInfoEP12PacketHeader,0x19f4(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater27OnQueryGuildAllMembersProxyEP12PacketHeader,0x10b0(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater29OnQueryUnconnGuildMemberProxyEP12PacketHeader,0x10b8(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater24OnSendMailCoinGuildEventEP12PacketHeader,0x10c4(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater35OnChangeUnconnectedGuildMemberGradeEP12PacketHeader,0x10c8(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater26OnChangeGuildNotifyMessageEP12PacketHeader,0x10d0(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater17OnSendGuildLetterEP12PacketHeader,0x10e4(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater11OnGuildJoinEP12PacketHeader,0x10fc(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater13OnGuildSecedeEP12PacketHeader,0x1100(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater20onQueryTowerFullRankEP12PacketHeader,0x134c(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater21OnGuildMasterDelegateEP12PacketHeader,0x1108(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader,0x1118(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater12OnSendHWspecEP12PacketHeader,0x2758(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater19OnQueryGuildBootingEP12PacketHeader,0x19f8(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater19OnSavePowerWarPointEP12PacketHeader,0x1ad0(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater26OnSaveUnchangableGuildInfoEP12PacketHeader,0x1164(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater18OnChangeCharacNameEP12PacketHeader,0x1160(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater15OnErrorLineSaveEP12PacketHeader,0x2760(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater20OnPartyStatisticSaveEP12PacketHeader,0x30f4(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater23OnPartyJobStatisticSaveEP12PacketHeader,0x30fc(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater26OnPartyCharacStatisticSaveEP12PacketHeader,0x3104(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater30OnDeathTowerValueStatisticSaveEP12PacketHeader,0x310c(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater36OnDeathTowerPlayDataJobStatisticSaveEP12PacketHeader,0x3114(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater38OnDeathTowerPlayDataPartyStatisticSaveEP12PacketHeader,0x311c(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater28OnHellPartyStatisticItemSaveEP12PacketHeader,0x30e4(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater23OnCubeStatisticDataSaveEP12PacketHeader,0x30ec(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater22OnQueryFirstLoadSpecDbEP12PacketHeader,0x30b8(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater19OnQueryReloadSpecDbEP12PacketHeader,0x30c0(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater26OnInsertFrameLagStatisticsEP12PacketHeader,0x30c8(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater22OnWriteQueryStatisticsEP12PacketHeader,0x30d0(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater30OnInsertDailyBadSpecStatisticsEP12PacketHeader,0x30cc(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater27OnInsertUsedMemoryStatisticEP12PacketHeader,0x30dc(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater25OnInsertUdpCharacteristicEP12PacketHeader,0x3ec4(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader,0x3e9c(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader,0x3ea0(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater16OnTcpServerLoginEP12PacketHeader,0x41bc(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater17OnTcpServerLogoutEP12PacketHeader,0x41c0(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater20OnTcpServerHeartbeatEP12PacketHeader,0x41c4(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater22OnSavePowerWarUserRankEP12PacketHeader,0x1b78(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater23OnSavePowerWarGuildRankEP12PacketHeader,0x1b74(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater25OnSavePowerWarPointRewardEP12PacketHeader,0x1b80(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater26OnSavePowerWarStatueRankerEP12PacketHeader,0x1b84(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater17OnCreateGuildAgitEP12PacketHeader,0x1b90(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater17OnDeleteGuildAgitEP12PacketHeader,0x1b98(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater15OnLoadGuildAgitEP12PacketHeader,0x1ba0(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater18OnUpgradeGuildAgitEP12PacketHeader,0x1bac(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater23OnSaveAssertManagerInfoEP12PacketHeader,0x3124(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater29OnSavePacketOverflowStatisticEP12PacketHeader,0x312c(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater22OnWriteGuildMemberMemoEP12PacketHeader,0x1368(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater24OnWriteUserTingTimeCheckEP12PacketHeader,0x3134(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater17OnTingUserCollectEP12PacketHeader,0x3138(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater23OnRecvLoadingTimeReportEP12PacketHeader,0x3ee0(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater27OnRecvPowerwarLoadingReportEP12PacketHeader,0x3ee4(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater23OnRecvPowerwarLagReportEP12PacketHeader,0x3ee8(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater29OnSaveFatigueBatteryStatisticEP12PacketHeader,0x3144(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater18OnUpdateGuildCargoEP12PacketHeader,0x1c5c(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater25OnInsertGuildCargoHistoryEP12PacketHeader,0x1c60(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater19OnUpgradeGuildCargoEP12PacketHeader,0x1c6c(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater29onItemLimitEditionLoadDataReqEP12PacketHeader,0x4038(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater28onItemLimitEditionUpdateDataEP12PacketHeader,0x4034(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater25OnServeQueueLoadStatisticEP12PacketHeader,0x2764(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater23OnBloodDungeonStatisticEP12PacketHeader,0x40f8(%eax)
-mov    0x8(%ebp),%eax
-movl   $&_ZN17CPacketTranslater22OnRequestIPCounterListEP12PacketHeader,0x40fc(%eax)
+mov    $&_ZN17CPacketTranslater22OnRequestIPCounterListEP12PacketHeader,%edx
+mov    0x8(%ebp),%eax
+mov    %edx,0x40fc(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater22OnReasonCrashDownQueryEP12PacketHeader,0x3140(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater16OnDBMWInsertMailEP12PacketHeader,0x5e0c(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater14OnDBMWQueryMsgEP12PacketHeader,0x5e10(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater23OnDBMWVillageAttackRankEP12PacketHeader,0x5e08(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater26OnDBMWDisjointAvatarStaticEP12PacketHeader,0x5ea8(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater24OnDBMWCreateEmblemStaticEP12PacketHeader,0x5eb0(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater21OnDBMWRandomboxStaticEP12PacketHeader,0x5ef8(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater27OnDBMWLoginLogoutStatisticsEP12PacketHeader,0x5efc(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater16OnRequestARSInfoEP12PacketHeader,0x2da4(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater24OnSavePowerWarBonusPointEP12PacketHeader,0x1bec(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater32OnDBMWTechnicalReportCommonQueryEP12PacketHeader,0x5f30(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater17OnServerMatchDataEP12PacketHeader,0x6dbc(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater21OnSecretShopStatisticEP12PacketHeader,0x6dc0(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater24OnQueryTodayGuildMemeberEP12PacketHeader,0x6f18(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater24OnManagerEventTriggerAckEP12PacketHeader,0x6dc8(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater24OnGoldcardEventStatisticEP12PacketHeader,0x7d38(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater29OnDBLoadRequestGuildBoardOpenEP12PacketHeader,0x8cc8(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater30OnDBLoadRequestGuildBoardWriteEP12PacketHeader,0x8cd8(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater31OnDBLoadRequestGuildBoardDeleteEP12PacketHeader,0x8ce8(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater33OnDBLoadRequestWebGuildBoardWriteEP12PacketHeader,0x8d14(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater21OnLoadPeriodicMessageEP12PacketHeader,0x7d3c(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater25OnRequestApproveJoinGuildEP12PacketHeader,0x6f2c(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater15OnRenew_GM_ListEP12PacketHeader,0x7d50(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater19OnReqOntimeEventIdxEP12PacketHeader,0x8d1c(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater20OnReqOntimeEventItemEP12PacketHeader,0x8d30(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater25OnReqOntimeEventIdxUpdateEP12PacketHeader,0x8d38(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater31OnUpdateTowerOfDespairStatisticEP12PacketHeader,0x9c90(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater21OnUpdateChannelOccNumEP12PacketHeader,0x5ed0(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater14OnInsertUpdateEP12PacketHeader,0x9ca0(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater25onLoadLimitNpcBuyItemInfoEP12PacketHeader,0x9f7c(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater27onUpdateLimitNpcBuyItemInfoEP12PacketHeader,0x9f90(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater20onCompatibilityIndexEP12PacketHeader,0x9f9c(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater15OnP2PStatisticsEP12PacketHeader,0x9fa0(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater20onCollectItemsUpdateEP12PacketHeader,0x9fc4(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater16onCollectItemsGmEP12PacketHeader,0x9fc8(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader,0x9fcc(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater26onStartGameEventFromServerEP12PacketHeader,0xa008(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater24onEndGameEventFromServerEP12PacketHeader,0xa00c(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater26onInsertHolePunchingResultEP12PacketHeader,0xa010(%eax)
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketDecoder::CPacketDecoder() */

void __thiscall CPacketDecoder::_ZN14CPacketDecoderC2Ev(CPacketDecoder *this)

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
  *(code **)(this + 0x102c) = CPacketTranslater::OnQueryGuild;
  *(code **)(this + 0x1024) = CPacketTranslater::OnQueryGuildMember;
  *(code **)(this + 0x1040) = CPacketTranslater::OnSaveGuild;
  *(code **)(this + 0x12e4) = CPacketTranslater::OnQueryMember;
  *(code **)(this + 0x12ec) = CPacketTranslater::OnSaveMember;
  *(code **)(this + 0x12f0) = CPacketTranslater::OnSaveMemberUpdateCharInfo;
  *(code **)(this + 0x1328) = CPacketTranslater::OnMemberDeleteAsCharDelete;
  *(code **)(this + 0x1058) = CPacketTranslater::OnSaveGuildMember;
  *(code **)(this + 0x113c) = CPacketTranslater::OnSavePowerSecedeTime;
  *(code **)(this + 0x1068) = CPacketTranslater::OnDBMWConnectionCheck;
  *(code **)(this + 0x107c) = CPacketTranslater::OnSaveGuildWarInfo;
  *(code **)(this + 0x1064) = CPacketTranslater::OnEndGuildWar;
  *(code **)(this + 0x1794) = CPacketTranslater::OnRegisterToBlackList;
  *(code **)(this + 0x1798) = CPacketTranslater::OnDeleteToBlackList;
  *(code **)(this + 0x17a0) = CPacketTranslater::OnRequestBlackListOnLogin;
  *(code **)(this + 0x1920) = CPacketTranslater::OnSaveMemberExp;
  *(code **)(this + 0x19e8) = CPacketTranslater::OnAddBuddy;
  *(code **)(this + 0x19f0) = CPacketTranslater::OnDelBuddy;
  *(code **)(this + 0x19f4) = CPacketTranslater::OnQueryBuddyInfo;
  *(code **)(this + 0x10b0) = CPacketTranslater::OnQueryGuildAllMembersProxy;
  *(code **)(this + 0x10b8) = CPacketTranslater::OnQueryUnconnGuildMemberProxy;
  *(code **)(this + 0x10c4) = CPacketTranslater::OnSendMailCoinGuildEvent;
  *(code **)(this + 0x10c8) = CPacketTranslater::OnChangeUnconnectedGuildMemberGrade;
  *(code **)(this + 0x10d0) = CPacketTranslater::OnChangeGuildNotifyMessage;
  *(code **)(this + 0x10e4) = CPacketTranslater::OnSendGuildLetter;
  *(code **)(this + 0x10fc) = CPacketTranslater::OnGuildJoin;
  *(code **)(this + 0x1100) = CPacketTranslater::OnGuildSecede;
  *(code **)(this + 0x134c) = CPacketTranslater::onQueryTowerFullRank;
  *(code **)(this + 0x1108) = CPacketTranslater::OnGuildMasterDelegate;
  *(code **)(this + 0x1118) = CPacketTranslater::OnRequestGuildCreate;
  *(code **)(this + 0x2758) = CPacketTranslater::OnSendHWspec;
  *(code **)(this + 0x19f8) = CPacketTranslater::OnQueryGuildBooting;
  *(code **)(this + 0x1ad0) = CPacketTranslater::OnSavePowerWarPoint;
  *(code **)(this + 0x1164) = CPacketTranslater::OnSaveUnchangableGuildInfo;
  *(code **)(this + 0x1160) = CPacketTranslater::OnChangeCharacName;
  *(code **)(this + 0x2760) = CPacketTranslater::OnErrorLineSave;
  *(code **)(this + 0x30f4) = CPacketTranslater::OnPartyStatisticSave;
  *(code **)(this + 0x30fc) = CPacketTranslater::OnPartyJobStatisticSave;
  *(code **)(this + 0x3104) = CPacketTranslater::OnPartyCharacStatisticSave;
  *(code **)(this + 0x310c) = CPacketTranslater::OnDeathTowerValueStatisticSave;
  *(code **)(this + 0x3114) = CPacketTranslater::OnDeathTowerPlayDataJobStatisticSave;
  *(code **)(this + 0x311c) = CPacketTranslater::OnDeathTowerPlayDataPartyStatisticSave;
  *(code **)(this + 0x30e4) = CPacketTranslater::OnHellPartyStatisticItemSave;
  *(code **)(this + 0x30ec) = CPacketTranslater::OnCubeStatisticDataSave;
  *(code **)(this + 0x30b8) = CPacketTranslater::OnQueryFirstLoadSpecDb;
  *(code **)(this + 0x30c0) = CPacketTranslater::OnQueryReloadSpecDb;
  *(code **)(this + 0x30c8) = CPacketTranslater::OnInsertFrameLagStatistics;
  *(code **)(this + 0x30d0) = CPacketTranslater::OnWriteQueryStatistics;
  *(code **)(this + 0x30cc) = CPacketTranslater::OnInsertDailyBadSpecStatistics;
  *(code **)(this + 0x30dc) = CPacketTranslater::OnInsertUsedMemoryStatistic;
  *(code **)(this + 0x3ec4) = CPacketTranslater::OnInsertUdpCharacteristic;
  *(code **)(this + 0x3e9c) = CPacketTranslater::OnInnerPacketLogin;
  *(code **)(this + 0x3ea0) = CPacketTranslater::OnInnerPacketLogout;
  *(code **)(this + 0x41bc) = CPacketTranslater::OnTcpServerLogin;
  *(code **)(this + 0x41c0) = CPacketTranslater::OnTcpServerLogout;
  *(code **)(this + 0x41c4) = CPacketTranslater::OnTcpServerHeartbeat;
  *(code **)(this + 0x1b78) = CPacketTranslater::OnSavePowerWarUserRank;
  *(code **)(this + 0x1b74) = CPacketTranslater::OnSavePowerWarGuildRank;
  *(code **)(this + 0x1b80) = CPacketTranslater::OnSavePowerWarPointReward;
  *(code **)(this + 0x1b84) = CPacketTranslater::OnSavePowerWarStatueRanker;
  *(code **)(this + 0x1b90) = CPacketTranslater::OnCreateGuildAgit;
  *(code **)(this + 0x1b98) = CPacketTranslater::OnDeleteGuildAgit;
  *(code **)(this + 0x1ba0) = CPacketTranslater::OnLoadGuildAgit;
  *(code **)(this + 0x1bac) = CPacketTranslater::OnUpgradeGuildAgit;
  *(code **)(this + 0x3124) = CPacketTranslater::OnSaveAssertManagerInfo;
  *(code **)(this + 0x312c) = CPacketTranslater::OnSavePacketOverflowStatistic;
  *(code **)(this + 0x1368) = CPacketTranslater::OnWriteGuildMemberMemo;
  *(code **)(this + 0x3134) = CPacketTranslater::OnWriteUserTingTimeCheck;
  *(code **)(this + 0x3138) = CPacketTranslater::OnTingUserCollect;
  *(code **)(this + 0x3ee0) = CPacketTranslater::OnRecvLoadingTimeReport;
  *(code **)(this + 0x3ee4) = CPacketTranslater::OnRecvPowerwarLoadingReport;
  *(code **)(this + 0x3ee8) = CPacketTranslater::OnRecvPowerwarLagReport;
  *(code **)(this + 0x3144) = CPacketTranslater::OnSaveFatigueBatteryStatistic;
  *(code **)(this + 0x1c5c) = CPacketTranslater::OnUpdateGuildCargo;
  *(code **)(this + 0x1c60) = CPacketTranslater::OnInsertGuildCargoHistory;
  *(code **)(this + 0x1c6c) = CPacketTranslater::OnUpgradeGuildCargo;
  *(code **)(this + 0x4038) = CPacketTranslater::onItemLimitEditionLoadDataReq;
  *(code **)(this + 0x4034) = CPacketTranslater::onItemLimitEditionUpdateData;
  *(code **)(this + 0x2764) = CPacketTranslater::OnServeQueueLoadStatistic;
  *(code **)(this + 0x40f8) = CPacketTranslater::OnBloodDungeonStatistic;
  *(code **)(this + 0x40fc) = CPacketTranslater::OnRequestIPCounterList;
  *(code **)(this + 0x3140) = CPacketTranslater::OnReasonCrashDownQuery;
  *(code **)(this + 0x5e0c) = CPacketTranslater::OnDBMWInsertMail;
  *(code **)(this + 0x5e10) = CPacketTranslater::OnDBMWQueryMsg;
  *(code **)(this + 0x5e08) = CPacketTranslater::OnDBMWVillageAttackRank;
  *(code **)(this + 0x5ea8) = CPacketTranslater::OnDBMWDisjointAvatarStatic;
  *(code **)(this + 0x5eb0) = CPacketTranslater::OnDBMWCreateEmblemStatic;
  *(code **)(this + 0x5ef8) = CPacketTranslater::OnDBMWRandomboxStatic;
  *(code **)(this + 0x5efc) = CPacketTranslater::OnDBMWLoginLogoutStatistics;
  *(code **)(this + 0x2da4) = CPacketTranslater::OnRequestARSInfo;
  *(code **)(this + 0x1bec) = CPacketTranslater::OnSavePowerWarBonusPoint;
  *(code **)(this + 0x5f30) = CPacketTranslater::OnDBMWTechnicalReportCommonQuery;
  *(code **)(this + 0x6dbc) = CPacketTranslater::OnServerMatchData;
  *(code **)(this + 0x6dc0) = CPacketTranslater::OnSecretShopStatistic;
  *(code **)(this + 0x6f18) = CPacketTranslater::OnQueryTodayGuildMemeber;
  *(code **)(this + 0x6dc8) = CPacketTranslater::OnManagerEventTriggerAck;
  *(code **)(this + 0x7d38) = CPacketTranslater::OnGoldcardEventStatistic;
  *(code **)(this + 0x8cc8) = CPacketTranslater::OnDBLoadRequestGuildBoardOpen;
  *(code **)(this + 0x8cd8) = CPacketTranslater::OnDBLoadRequestGuildBoardWrite;
  *(code **)(this + 0x8ce8) = CPacketTranslater::OnDBLoadRequestGuildBoardDelete;
  *(code **)(this + 0x8d14) = CPacketTranslater::OnDBLoadRequestWebGuildBoardWrite;
  *(code **)(this + 0x7d3c) = CPacketTranslater::OnLoadPeriodicMessage;
  *(code **)(this + 0x6f2c) = CPacketTranslater::OnRequestApproveJoinGuild;
  *(code **)(this + 0x7d50) = CPacketTranslater::OnRenew_GM_List;
  *(code **)(this + 0x8d1c) = CPacketTranslater::OnReqOntimeEventIdx;
  *(code **)(this + 0x8d30) = CPacketTranslater::OnReqOntimeEventItem;
  *(code **)(this + 0x8d38) = CPacketTranslater::OnReqOntimeEventIdxUpdate;
  *(code **)(this + 0x9c90) = CPacketTranslater::OnUpdateTowerOfDespairStatistic;
  *(code **)(this + 0x5ed0) = CPacketTranslater::OnUpdateChannelOccNum;
  *(code **)(this + 0x9ca0) = CPacketTranslater::OnInsertUpdate;
  *(code **)(this + 0x9f7c) = CPacketTranslater::onLoadLimitNpcBuyItemInfo;
  *(code **)(this + 0x9f90) = CPacketTranslater::onUpdateLimitNpcBuyItemInfo;
  *(code **)(this + 0x9f9c) = CPacketTranslater::onCompatibilityIndex;
  *(code **)(this + 0x9fa0) = CPacketTranslater::OnP2PStatistics;
  *(code **)(this + 0x9fc4) = CPacketTranslater::onCollectItemsUpdate;
  *(code **)(this + 0x9fc8) = CPacketTranslater::onCollectItemsGm;
  *(code **)(this + 0x9fcc) = CPacketTranslater::OnPcRoomPlayTimeReward;
  *(code **)(this + 0xa008) = CPacketTranslater::onStartGameEventFromServer;
  *(code **)(this + 0xa00c) = CPacketTranslater::onEndGameEventFromServer;
  *(code **)(this + 0xa010) = CPacketTranslater::onInsertHolePunchingResult;
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
