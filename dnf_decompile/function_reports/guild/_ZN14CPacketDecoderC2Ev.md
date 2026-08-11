# _ZN14CPacketDecoderC2Ev

`CPacketDecoder::CPacketDecoder()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x806f934` | `0x60f` | `0x806614a` | `0x60f` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,250 +1,250 @@
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
-mov    -0x4(%ebp),%edx
-mov    0x8(%ebp),%eax
-add    $0x4,%edx
+mov    -0x4(%ebp),%eax
+lea    0x4(%eax),%edx
+mov    0x8(%ebp),%eax
 movl   $0x0,0xc(%eax,%edx,4)
 addl   $0x1,-0x4(%ebp)
 cmpl   $0x27ff,-0x4(%ebp)
 setle  %al
 test   %al,%al
 jne    <T> <_ZN14CPacketDecoderC1Ev+0x54>
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
 movl   $&_ZN17CPacketTranslater17OnReplyQueryGuildEP12PacketHeader,0x1030(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater25OnDBReplyQueryGuildMemberEP12PacketHeader,0x1028(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater18OnNoticeGuildEnterEP12PacketHeader,0x1010(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater19OnNoticeGuildSecedeEP12PacketHeader,0x1014(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater23OnNoticeGuildMarkChangeEP12PacketHeader,0x1018(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater20OnNoticeGuildDismissEP12PacketHeader,0x100c(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater20OnNoticeGuildChatMsgEP12PacketHeader,0x101c(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater21OnSetGuildMemberGradeEP12PacketHeader,0x10dc(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater18OnCallGuildMembersEP12PacketHeader,0x1020(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater21OnCallGuildAllMembersEP12PacketHeader,0x10ac(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater24OnDBReplyGuildAllMembersEP12PacketHeader,0x10b4(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater26OnDBReplyUnconnGuildMemberEP12PacketHeader,0x10b8(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader,0x103c(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeader,0x1050(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater19OnNoticeGuildCreateEP12PacketHeader,0x104c(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader,0x1324(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater25OnUpdateChangableCharInfoEP12PacketHeader,0xff0(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater12OnEventStartEP12PacketHeader,0x1158(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater10OnEventEndEP12PacketHeader,0x115c(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater29OnLoadGuildWarEnterableGuildsEP12PacketHeader,0x1060(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader,0x1064(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater23OnNoticeGuildMailArriveEP12PacketHeader,0x1070(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater21OnNoticeGuildWarStartEP12PacketHeader,0x1074(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater27OnNoticeGuildWarPointChangeEP12PacketHeader,0x1078(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater21OnRequestGuildWarInfoEP12PacketHeader,0x106c(%eax)
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
 movl   $&_ZN17CPacketTranslater18OnIncreaseGuildExpEP12PacketHeader,0x1054(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater15OnBuyGuildSkillEP12PacketHeader,0x10c0(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader,0x10c8(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater22OnNotifyMessageToGuildEP12PacketHeader,0x10d0(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater25OnMonitorManagerConnectOKEP12PacketHeader,0x15fc(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater24OnMonitorSendGuildLetterEP12PacketHeader,0x10e4(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater26OnDBMWReplySendGuildLetterEP12PacketHeader,0x10e8(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader,0x10ec(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater18OnReplyGuildInviteEP12PacketHeader,0x10f4(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater15OnDBMWGuildJoinEP12PacketHeader,0x10fc(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater20OnRequestGuildSecedeEP12PacketHeader,0x1100(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader,0x1104(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater28OnRequestGuildMasterDelegateEP12PacketHeader,0x1108(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater28OnDBReplyGuildMasterDelegateEP12PacketHeader,0x110c(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader,0x1118(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader,0x111c(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeader,0x1120(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater28OnGuildMasterDelegateFromWebEP12PacketHeader,0x1124(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater35OnCheckGuildMemberConnectionFromWebEP12PacketHeader,0x1128(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader,0x3e9c(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader,0x3ea0(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater17OnChangeGuildNameEP12PacketHeader,0x112c(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater19OnPowerWarStartInfoEP12PacketHeader,0x1ae0(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader,0x1aac(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater17OnPacketJoinPowerEP12PacketHeader,0x1abc(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater19OnPacketSecedePowerEP12PacketHeader,0x1ac0(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater16OnSetPowerWarCfgEP12PacketHeader,0x1ac4(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater26OnLoadFromDBOnGuildBootingEP12PacketHeader,0x19f8(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater17OnGMPowerWarStartEP12PacketHeader,0x1ab4(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater15OnGMPowerWarEndEP12PacketHeader,0x1ab8(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater16OnChangeCharNameEP12PacketHeader,0x1160(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater24OnChangeGuildNameFromWebEP12PacketHeader,0x1168(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater20OnNotifyNewGroupMailEP12PacketHeader,0x1470(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater31OnInCreaseDecreasePowerWarPointEP12PacketHeader,0x1b88(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater17OnCreateGuildAgitEP12PacketHeader,0x1b8c(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater17OnDeleteGuildAgitEP12PacketHeader,0x1b94(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater19OnDBCreateGuildAgitEP12PacketHeader,0x1b90(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater19OnDBDeleteGuildAgitEP12PacketHeader,0x1b98(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater21OnPowerWarProcessInfoEP12PacketHeader,0x1b9c(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater17OnDBLoadGuildAgitEP12PacketHeader,0x1ba0(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater18OnUpgradeGuildAgitEP12PacketHeader,0x1ba8(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater20OnDBUpgradeGuildAgitEP12PacketHeader,0x1bac(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater15OnGuildExpLimitEP12PacketHeader,0x1bb0(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater22OnWriteGuildMemberMemoEP12PacketHeader,0x1360(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater16OnLoadGuildCargoEP12PacketHeader,0x1c3c(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater23OnLoadGuildCargoHistoryEP12PacketHeader,0x1c40(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater12OnGuildCargoEP12PacketHeader,0x1c44(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeader,0x1c48(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader,0x1c4c(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader,0x1c50(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater19OnGuildCargoPopItemEP12PacketHeader,0x1c54(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater20OnGuildCargoMoveItemEP12PacketHeader,0x1c58(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater19OnGuildCargoUpgradeEP12PacketHeader,0x1c68(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater28OnGuildRequestGuildBoardOpenEP12PacketHeader,0x8cc0(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater27OnDBLoadReplyGuildBoardOpenEP12PacketHeader,0x8ccc(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater29OnGuildRequestGuildBoardWriteEP12PacketHeader,0x8cd0(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater28OnDBLoadReplyGuildBoardWriteEP12PacketHeader,0x8cdc(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater30OnGuildRequestGuildBoardDeleteEP12PacketHeader,0x8ce0(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater29OnDBLoadReplyGuildBoardDeleteEP12PacketHeader,0x8cec(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater20OnWebGuildBoardWriteEP12PacketHeader,0x8d0c(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater21OnWebGuildBoardDeleteEP12PacketHeader,0x8d10(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater31OnDBLoadReplyWebGuildBoardWriteEP12PacketHeader,0x8d18(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater29OnGuildApplyOriginalPowerSideEP12PacketHeader,0x1ae4(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater20OnNotifyNewGroupMailEP12PacketHeader,0x1470(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater18OnGameServerRegistEP12PacketHeader,0x7d20(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater14OnAddGuildFundEP12PacketHeader,0x6f0c(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater18OnRefreshGuildInfoEP12PacketHeader,0x6f14(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater23OnReplyTodayGuildMemberEP12PacketHeader,0x6f1c(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater18OnApproveJoinGuildEP12PacketHeader,0x6f24(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater28OnDBResponseApproveJoinGuildEP12PacketHeader,0x6f30(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater21OnGuildAttendanceInfoEP12PacketHeader,0x6f34(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater12OnGuildDebugEP12PacketHeader,0x6f40(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater15OnRenew_GM_ListEP12PacketHeader,0x7d50(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater29OnNoticeGuildChatMsgHyperLinkEP12PacketHeader,0x9c7c(%eax)
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
  *(code **)(this + 0xfbc) = CPacketTranslater::OnLogin;
  *(code **)(this + 0xfc0) = CPacketTranslater::OnLogout;
  *(code **)(this + 0xfc4) = CPacketTranslater::OnReplyUserInfo;
  *(code **)(this + 0xfcc) = CPacketTranslater::OnHeartBeat;
  *(code **)(this + 0xfd8) = CPacketTranslater::OnCharLogin;
  *(code **)(this + 0x1030) = CPacketTranslater::OnReplyQueryGuild;
  *(code **)(this + 0x1028) = CPacketTranslater::OnDBReplyQueryGuildMember;
  *(code **)(this + 0x1010) = CPacketTranslater::OnNoticeGuildEnter;
  *(code **)(this + 0x1014) = CPacketTranslater::OnNoticeGuildSecede;
  *(code **)(this + 0x1018) = CPacketTranslater::OnNoticeGuildMarkChange;
  *(code **)(this + 0x100c) = CPacketTranslater::OnNoticeGuildDismiss;
  *(code **)(this + 0x101c) = CPacketTranslater::OnNoticeGuildChatMsg;
  *(code **)(this + 0x10dc) = CPacketTranslater::OnSetGuildMemberGrade;
  *(code **)(this + 0x1020) = CPacketTranslater::OnCallGuildMembers;
  *(code **)(this + 0x10ac) = CPacketTranslater::OnCallGuildAllMembers;
  *(code **)(this + 0x10b4) = CPacketTranslater::OnDBReplyGuildAllMembers;
  *(code **)(this + 0x10b8) = CPacketTranslater::OnDBReplyUnconnGuildMember;
  *(code **)(this + 0x103c) = CPacketTranslater::OnCallGuildLevelUp;
  *(code **)(this + 0x1050) = CPacketTranslater::OnCallGuildInfo;
  *(code **)(this + 0x104c) = CPacketTranslater::OnNoticeGuildCreate;
  *(code **)(this + 0x1324) = CPacketTranslater::OnCharacterDelete;
  *(code **)(this + 0xff0) = CPacketTranslater::OnUpdateChangableCharInfo;
  *(code **)(this + 0x1158) = CPacketTranslater::OnEventStart;
  *(code **)(this + 0x115c) = CPacketTranslater::OnEventEnd;
  *(code **)(this + 0x1060) = CPacketTranslater::OnLoadGuildWarEnterableGuilds;
  *(code **)(this + 0x1064) = CPacketTranslater::OnNoticeGuildWarEnd;
  *(code **)(this + 0x1070) = CPacketTranslater::OnNoticeGuildMailArrive;
  *(code **)(this + 0x1074) = CPacketTranslater::OnNoticeGuildWarStart;
  *(code **)(this + 0x1078) = CPacketTranslater::OnNoticeGuildWarPointChange;
  *(code **)(this + 0x106c) = CPacketTranslater::OnRequestGuildWarInfo;
  *(code **)(this + 0x178c) = CPacketTranslater::OnRegisterToBlackList;
  *(code **)(this + 0x1790) = CPacketTranslater::OnDeleteToBlackList;
  *(code **)(this + 0x179c) = CPacketTranslater::OnRequestBlackList;
  *(code **)(this + 0x1794) = CPacketTranslater::OnDBMWResisterToBlackList;
  *(code **)(this + 0x1798) = CPacketTranslater::OnDBMWDeleteToBlackList;
  *(code **)(this + 0x17a0) = CPacketTranslater::OnDBMWResponseBlackListOnLogin;
  *(code **)(this + 0x1054) = CPacketTranslater::OnIncreaseGuildExp;
  *(code **)(this + 0x10c0) = CPacketTranslater::OnBuyGuildSkill;
  *(code **)(this + 0x10c8) = CPacketTranslater::OnDBMWChangeUnconnectedGuildMemberGrade;
  *(code **)(this + 0x10d0) = CPacketTranslater::OnNotifyMessageToGuild;
  *(code **)(this + 0x15fc) = CPacketTranslater::OnMonitorManagerConnectOK;
  *(code **)(this + 0x10e4) = CPacketTranslater::OnMonitorSendGuildLetter;
  *(code **)(this + 0x10e8) = CPacketTranslater::OnDBMWReplySendGuildLetter;
  *(code **)(this + 0x10ec) = CPacketTranslater::OnCallGuildInvite;
  *(code **)(this + 0x10f4) = CPacketTranslater::OnReplyGuildInvite;
  *(code **)(this + 0x10fc) = CPacketTranslater::OnDBMWGuildJoin;
  *(code **)(this + 0x1100) = CPacketTranslater::OnRequestGuildSecede;
  *(code **)(this + 0x1104) = CPacketTranslater::OnDBReplyGuildSecede;
  *(code **)(this + 0x1108) = CPacketTranslater::OnRequestGuildMasterDelegate;
  *(code **)(this + 0x110c) = CPacketTranslater::OnDBReplyGuildMasterDelegate;
  *(code **)(this + 0x1118) = CPacketTranslater::OnRequestGuildCreate;
  *(code **)(this + 0x111c) = CPacketTranslater::OnDBReplyGuildCreate;
  *(code **)(this + 0x1120) = CPacketTranslater::OnSetGuildMemberGradeFromWeb;
  *(code **)(this + 0x1124) = CPacketTranslater::OnGuildMasterDelegateFromWeb;
  *(code **)(this + 0x1128) = CPacketTranslater::OnCheckGuildMemberConnectionFromWeb;
  *(code **)(this + 0x3e9c) = CPacketTranslater::OnInnerPacketLogin;
  *(code **)(this + 0x3ea0) = CPacketTranslater::OnInnerPacketLogout;
  *(code **)(this + 0x112c) = CPacketTranslater::OnChangeGuildName;
  *(code **)(this + 0x1ae0) = CPacketTranslater::OnPowerWarStartInfo;
  *(code **)(this + 0x1aac) = CPacketTranslater::OnChangePowerWarPoint;
  *(code **)(this + 0x1abc) = CPacketTranslater::OnPacketJoinPower;
  *(code **)(this + 0x1ac0) = CPacketTranslater::OnPacketSecedePower;
  *(code **)(this + 0x1ac4) = CPacketTranslater::OnSetPowerWarCfg;
  *(code **)(this + 0x19f8) = CPacketTranslater::OnLoadFromDBOnGuildBooting;
  *(code **)(this + 0x1ab4) = CPacketTranslater::OnGMPowerWarStart;
  *(code **)(this + 0x1ab8) = CPacketTranslater::OnGMPowerWarEnd;
  *(code **)(this + 0x1160) = CPacketTranslater::OnChangeCharName;
  *(code **)(this + 0x1168) = CPacketTranslater::OnChangeGuildNameFromWeb;
  *(code **)(this + 0x1470) = CPacketTranslater::OnNotifyNewGroupMail;
  *(code **)(this + 0x1b88) = CPacketTranslater::OnInCreaseDecreasePowerWarPoint;
  *(code **)(this + 0x1b8c) = CPacketTranslater::OnCreateGuildAgit;
  *(code **)(this + 0x1b94) = CPacketTranslater::OnDeleteGuildAgit;
  *(code **)(this + 0x1b90) = CPacketTranslater::OnDBCreateGuildAgit;
  *(code **)(this + 0x1b98) = CPacketTranslater::OnDBDeleteGuildAgit;
  *(code **)(this + 0x1b9c) = CPacketTranslater::OnPowerWarProcessInfo;
  *(code **)(this + 0x1ba0) = CPacketTranslater::OnDBLoadGuildAgit;
  *(code **)(this + 0x1ba8) = CPacketTranslater::OnUpgradeGuildAgit;
  *(code **)(this + 0x1bac) = CPacketTranslater::OnDBUpgradeGuildAgit;
  *(code **)(this + 0x1bb0) = CPacketTranslater::OnGuildExpLimit;
  *(code **)(this + 0x1360) = CPacketTranslater::OnWriteGuildMemberMemo;
  *(code **)(this + 0x1c3c) = CPacketTranslater::OnLoadGuildCargo;
  *(code **)(this + 0x1c40) = CPacketTranslater::OnLoadGuildCargoHistory;
  *(code **)(this + 0x1c44) = CPacketTranslater::OnGuildCargo;
  *(code **)(this + 0x1c48) = CPacketTranslater::OnGuildCargoHistory;
  *(code **)(this + 0x1c4c) = CPacketTranslater::OnGuildCargoCheckPushItem;
  *(code **)(this + 0x1c50) = CPacketTranslater::OnGuildCargoPushItem;
  *(code **)(this + 0x1c54) = CPacketTranslater::OnGuildCargoPopItem;
  *(code **)(this + 0x1c58) = CPacketTranslater::OnGuildCargoMoveItem;
  *(code **)(this + 0x1c68) = CPacketTranslater::OnGuildCargoUpgrade;
  *(code **)(this + 0x8cc0) = CPacketTranslater::OnGuildRequestGuildBoardOpen;
  *(code **)(this + 0x8ccc) = CPacketTranslater::OnDBLoadReplyGuildBoardOpen;
  *(code **)(this + 0x8cd0) = CPacketTranslater::OnGuildRequestGuildBoardWrite;
  *(code **)(this + 0x8cdc) = CPacketTranslater::OnDBLoadReplyGuildBoardWrite;
  *(code **)(this + 0x8ce0) = CPacketTranslater::OnGuildRequestGuildBoardDelete;
  *(code **)(this + 0x8cec) = CPacketTranslater::OnDBLoadReplyGuildBoardDelete;
  *(code **)(this + 0x8d0c) = CPacketTranslater::OnWebGuildBoardWrite;
  *(code **)(this + 0x8d10) = CPacketTranslater::OnWebGuildBoardDelete;
  *(code **)(this + 0x8d18) = CPacketTranslater::OnDBLoadReplyWebGuildBoardWrite;
  *(code **)(this + 0x1ae4) = CPacketTranslater::OnGuildApplyOriginalPowerSide;
  *(code **)(this + 0x1470) = CPacketTranslater::OnNotifyNewGroupMail;
  *(code **)(this + 0x7d20) = CPacketTranslater::OnGameServerRegist;
  *(code **)(this + 0x6f0c) = CPacketTranslater::OnAddGuildFund;
  *(code **)(this + 0x6f14) = CPacketTranslater::OnRefreshGuildInfo;
  *(code **)(this + 0x6f1c) = CPacketTranslater::OnReplyTodayGuildMember;
  *(code **)(this + 0x6f24) = CPacketTranslater::OnApproveJoinGuild;
  *(code **)(this + 0x6f30) = CPacketTranslater::OnDBResponseApproveJoinGuild;
  *(code **)(this + 0x6f34) = CPacketTranslater::OnGuildAttendanceInfo;
  *(code **)(this + 0x6f40) = CPacketTranslater::OnGuildDebug;
  *(code **)(this + 0x7d50) = CPacketTranslater::OnRenew_GM_List;
  *(code **)(this + 0x9c7c) = CPacketTranslater::OnNoticeGuildChatMsgHyperLink;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketDecoder.cpp](source/DNFServer/GameServer/Guild/DNFPacketDecoder.cpp)（约第 76 行）：

```cpp
CPacketDecoder::CPacketDecoder()
{
    m_udpParseQ = 0;
    m_udpQLock = 0;
    m_udpBLock = 0;
    m_tcpParseQ = 0;
    m_tcpRecvQLock = 0;
    m_tcpRecvBLock = 0;
    m_serverHandler = 0;
    for (int i = 1000; i < 0x2800; i++)
    {
        m_table[i + 4] = 0;
    }
    m_table[1004] = &CPacketTranslater::OnLogin;
    m_table[1005] = &CPacketTranslater::OnLogout;
    m_table[1006] = &CPacketTranslater::OnReplyUserInfo;
    m_table[1008] = &CPacketTranslater::OnHeartBeat;
    m_table[1011] = &CPacketTranslater::OnCharLogin;
    m_table[1033] = &CPacketTranslater::OnReplyQueryGuild;
    m_table[1031] = &CPacketTranslater::OnDBReplyQueryGuildMember;
    m_table[1025] = &CPacketTranslater::OnNoticeGuildEnter;
    m_table[1026] = &CPacketTranslater::OnNoticeGuildSecede;
    m_table[1027] = &CPacketTranslater::OnNoticeGuildMarkChange;
    m_table[1024] = &CPacketTranslater::OnNoticeGuildDismiss;
    m_table[1028] = &CPacketTranslater::OnNoticeGuildChatMsg;
    m_table[1076] = &CPacketTranslater::OnSetGuildMemberGrade;
    m_table[1029] = &CPacketTranslater::OnCallGuildMembers;
    m_table[1064] = &CPacketTranslater::OnCallGuildAllMembers;
    m_table[1066] = &CPacketTranslater::OnDBReplyGuildAllMembers;
    m_table[1067] = &CPacketTranslater::OnDBReplyUnconnGuildMember;
    m_table[1036] = &CPacketTranslater::OnCallGuildLevelUp;
    m_table[1041] = &CPacketTranslater::OnCallGuildInfo;
    m_table[1040] = &CPacketTranslater::OnNoticeGuildCreate;
    m_table[1222] = &CPacketTranslater::OnCharacterDelete;
    m_table[1017] = &CPacketTranslater::OnUpdateChangableCharInfo;
    m_table[1107] = &CPacketTranslater::OnEventStart;
    m_table[1108] = &CPacketTranslater::OnEventEnd;
    m_table[1045] = &CPacketTranslater::OnLoadGuildWarEnterableGuilds;
    m_table[1046] = &CPacketTranslater::OnNoticeGuildWarEnd;
    m_table[1049] = &CPacketTranslater::OnNoticeGuildMailArrive;
    m_table[1050] = &CPacketTranslater::OnNoticeGuildWarStart;
    m_table[1051] = &CPacketTranslater::OnNoticeGuildWarPointChange;
    m_table[1048] = &CPacketTranslater::OnRequestGuildWarInfo;
    m_table[1504] = &CPacketTranslater::OnRegisterToBlackList;
    m_table[1505] = &CPacketTranslater::OnDeleteToBlackList;
    m_table[1508] = &CPacketTranslater::OnRequestBlackList;
    m_table[1506] = &CPacketTranslater::OnDBMWResisterToBlackList;
    m_table[1507] = &CPacketTranslater::OnDBMWDeleteToBlackList;
    m_table[1509] = &CPacketTranslater::OnDBMWResponseBlackListOnLogin;
    m_table[1042] = &CPacketTranslater::OnIncreaseGuildExp;
    m_table[1069] = &CPacketTranslater::OnBuyGuildSkill;
    m_table[1071] = &CPacketTranslater::OnDBMWChangeUnconnectedGuildMemberGrade;
    m_table[1073] = &CPacketTranslater::OnNotifyMessageToGuild;
    m_table[1404] = &CPacketTranslater::OnMonitorManagerConnectOK;
    m_table[1078] = &CPacketTranslater::OnMonitorSendGuildLetter;
    m_table[1079] = &CPacketTranslater::OnDBMWReplySendGuildLetter;
    m_table[1080] = &CPacketTranslater::OnCallGuildInvite;
    m_table[1082] = &CPacketTranslater::OnReplyGuildInvite;
    m_table[1084] = &CPacketTranslater::OnDBMWGuildJoin;
    m_table[1085] = &CPacketTranslater::OnRequestGuildSecede;
    m_table[1086] = &CPacketTranslater::OnDBReplyGuildSecede;
    m_table[1087] = &CPacketTranslater::OnRequestGuildMasterDelegate;
    m_table[1088] = &CPacketTranslater::OnDBReplyGuildMasterDelegate;
    m_table[1091] = &CPacketTranslater::OnRequestGuildCreate;
    m_table[1092] = &CPacketTranslater::OnDBReplyGuildCreate;
    m_table[1093] = &CPacketTranslater::OnSetGuildMemberGradeFromWeb;
    m_table[1094] = &CPacketTranslater::OnGuildMasterDelegateFromWeb;
    m_table[1095] = &CPacketTranslater::OnCheckGuildMemberConnectionFromWeb;
    m_table[4004] = &CPacketTranslater::OnInnerPacketLogin;
    m_table[4005] = &CPacketTranslater::OnInnerPacketLogout;
    m_table[1096] = &CPacketTranslater::OnChangeGuildName;
    m_table[1717] = &CPacketTranslater::OnPowerWarStartInfo;
    m_table[1704] = &CPacketTranslater::OnChangePowerWarPoint;
    m_table[1708] = &CPacketTranslater::OnPacketJoinPower;
    m_table[1709] = &CPacketTranslater::OnPacketSecedePower;
    m_table[1710] = &CPacketTranslater::OnSetPowerWarCfg;
    m_table[1659] = &CPacketTranslater::OnLoadFromDBOnGuildBooting;
    m_table[1706] = &CPacketTranslater::OnGMPowerWarStart;
    m_table[1707] = &CPacketTranslater::OnGMPowerWarEnd;
    m_table[1109] = &CPacketTranslater::OnChangeCharName;
    m_table[1111] = &CPacketTranslater::OnChangeGuildNameFromWeb;
    m_table[1305] = &CPacketTranslater::OnNotifyNewGroupMail;
    m_table[1759] = &CPacketTranslater::OnInCreaseDecreasePowerWarPoint;
    m_table[1760] = &CPacketTranslater::OnCreateGuildAgit;
    m_table[1762] = &CPacketTranslater::OnDeleteGuildAgit;
    m_table[1761] = &CPacketTranslater::OnDBCreateGuildAgit;
    m_table[1763] = &CPacketTranslater::OnDBDeleteGuildAgit;
    m_table[1764] = &CPacketTranslater::OnPowerWarProcessInfo;
    m_table[1765] = &CPacketTranslater::OnDBLoadGuildAgit;
    m_table[1767] = &CPacketTranslater::OnUpgradeGuildAgit;
    m_table[1768] = &CPacketTranslater::OnDBUpgradeGuildAgit;
    m_table[1769] = &CPacketTranslater::OnGuildExpLimit;
    m_table[1237] = &CPacketTranslater::OnWriteGuildMemberMemo;
    m_table[1804] = &CPacketTranslater::OnLoadGuildCargo;
    m_table[1805] = &CPacketTranslater::OnLoadGuildCargoHistory;
    m_table[1806] = &CPacketTranslater::OnGuildCargo;
    m_table[1807] = &CPacketTranslater::OnGuildCargoHistory;
    m_table[1808] = &CPacketTranslater::OnGuildCargoCheckPushItem;
    m_table[1809] = &CPacketTranslater::OnGuildCargoPushItem;
    m_table[1810] = &CPacketTranslater::OnGuildCargoPopItem;
    m_table[1811] = &CPacketTranslater::OnGuildCargoMoveItem;
    m_table[1815] = &CPacketTranslater::OnGuildCargoUpgrade;
    m_table[9005] = &CPacketTranslater::OnGuildRequestGuildBoardOpen;
    m_table[9008] = &CPacketTranslater::OnDBLoadReplyGuildBoardOpen;
    m_table[9009] = &CPacketTranslater::OnGuildRequestGuildBoardWrite;
    m_table[9012] = &CPacketTranslater::OnDBLoadReplyGuildBoardWrite;
    m_table[9013] = &CPacketTranslater::OnGuildRequestGuildBoardDelete;
    m_table[9016] = &CPacketTranslater::OnDBLoadReplyGuildBoardDelete;
    m_table[9024] = &CPacketTranslater::OnWebGuildBoardWrite;
    m_table[9025] = &CPacketTranslater::OnWebGuildBoardDelete;
    m_table[9027] = &CPacketTranslater::OnDBLoadReplyWebGuildBoardWrite;
    m_table[1718] = &CPacketTranslater::OnGuildApplyOriginalPowerSide;
    m_table[1305] = &CPacketTranslater::OnNotifyNewGroupMail;
    m_table[8005] = &CPacketTranslater::OnGameServerRegist;
    m_table[7104] = &CPacketTranslater::OnAddGuildFund;
    m_table[7106] = &CPacketTranslater::OnRefreshGuildInfo;
    m_table[7108] = &CPacketTranslater::OnReplyTodayGuildMember;
    m_table[7110] = &CPacketTranslater::OnApproveJoinGuild;
    m_table[7113] = &CPacketTranslater::OnDBResponseApproveJoinGuild;
    m_table[7114] = &CPacketTranslater::OnGuildAttendanceInfo;
    m_table[7117] = &CPacketTranslater::OnGuildDebug;
    m_table[8017] = &CPacketTranslater::OnRenew_GM_List;
    m_table[10012] = &CPacketTranslater::OnNoticeGuildChatMsgHyperLink;
}
```
