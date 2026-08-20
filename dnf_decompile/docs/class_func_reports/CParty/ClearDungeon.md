# ClearDungeon

`_ZN6CParty12ClearDungeonEv`

`CParty::ClearDungeon()`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085a9330` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085a9330  _ZN6CParty12ClearDungeonEv
#           CParty::ClearDungeon()
# range [0x085a9330, 0x085aa399]
085a9330 +0x0000:  push   %ebp
085a9331 +0x0001:  mov    %esp,%ebp
085a9333 +0x0003:  push   %esi
085a9334 +0x0004:  push   %ebx
085a9335 +0x0005:  sub    $0x170,%esp
085a933b +0x000b:  mov    0x8(%ebp),%eax
085a933e +0x000e:  movzbl 0x11a(%eax),%eax
085a9345 +0x0015:  test   %al,%al
085a9347 +0x0017:  jne    085aa38e <+0x105e>
085a934d +0x001d:  mov    0x8(%ebp),%eax
085a9350 +0x0020:  mov    0xcd8(%eax),%eax
085a9356 +0x0026:  cmp    $0x1,%eax
085a9359 +0x0029:  jne    085a94e0 <+0x1b0>
085a935f +0x002f:  movl   $0x0,-0x40(%ebp)
085a9366 +0x0036:  jmp    085a93ae <+0x7e>
085a9368 +0x0038:  mov    -0x40(%ebp),%eax
085a936b +0x003b:  mov    %eax,0x4(%esp)
085a936f +0x003f:  mov    0x8(%ebp),%eax
085a9372 +0x0042:  mov    %eax,(%esp)
085a9375 +0x0045:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
085a937a +0x004a:  xor    $0x1,%eax
085a937d +0x004d:  test   %al,%al
085a937f +0x004f:  jne    085a93a9 <+0x79>
085a9381 +0x0051:  mov    -0x40(%ebp),%edx
085a9384 +0x0054:  mov    0x8(%ebp),%ecx
085a9387 +0x0057:  mov    %edx,%eax
085a9389 +0x0059:  add    %eax,%eax
085a938b +0x005b:  add    %edx,%eax
085a938d +0x005d:  shl    $0x3,%eax
085a9390 +0x0060:  lea    (%ecx,%eax,1),%eax
085a9393 +0x0063:  add    $0x78,%eax
085a9396 +0x0066:  mov    (%eax),%eax
085a9398 +0x0068:  mov    %eax,0x4(%esp)
085a939c +0x006c:  mov    0x8(%ebp),%eax
085a939f +0x006f:  mov    %eax,(%esp)
085a93a2 +0x0072:  call   085bf7fc <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0xd5a>  ; global constructors keyed to CParty::cMember::cMember()+0xd5a
085a93a7 +0x0077:  jmp    085a93aa <+0x7a>
085a93a9 +0x0079:  nop
085a93aa +0x007a:  addl   $0x1,-0x40(%ebp)
085a93ae +0x007e:  cmpl   $0x3,-0x40(%ebp)
085a93b2 +0x0082:  setle  %al
085a93b5 +0x0085:  test   %al,%al
085a93b7 +0x0087:  jne    085a9368 <+0x38>
085a93b9 +0x0089:  movl   $0x2,0x4(%esp)
085a93c1 +0x0091:  mov    0x8(%ebp),%eax
085a93c4 +0x0094:  mov    %eax,(%esp)
085a93c7 +0x0097:  call   0814578c <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x20f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x20f
085a93cc +0x009c:  movl   $0x15,0x4(%esp)
085a93d4 +0x00a4:  mov    0x8(%ebp),%eax
085a93d7 +0x00a7:  mov    %eax,(%esp)
085a93da +0x00aa:  call   0859ae76 <_ZN6CParty13gen_timer_keyE13TIMER_MESSAGE>  ; CParty::gen_timer_key(TIMER_MESSAGE)
085a93df +0x00af:  mov    %eax,%esi
085a93e1 +0x00b1:  mov    0x8(%ebp),%eax
085a93e4 +0x00b4:  mov    %eax,(%esp)
085a93e7 +0x00b7:  call   0822d846 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2ef0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2ef0
085a93ec +0x00bc:  mov    %eax,%ebx
085a93ee +0x00be:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
085a93f3 +0x00c3:  movl   $0x0,0x18(%esp)
085a93fb +0x00cb:  mov    %esi,0x14(%esp)
085a93ff +0x00cf:  movl   $0x3c,0x10(%esp)
085a9407 +0x00d7:  movl   $0x15,0xc(%esp)
085a940f +0x00df:  mov    %ebx,0x8(%esp)
085a9413 +0x00e3:  movl   $0x1,0x4(%esp)
085a941b +0x00eb:  mov    %eax,(%esp)
085a941e +0x00ee:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
085a9423 +0x00f3:  movl   $0x1,0x4(%esp)
085a942b +0x00fb:  mov    0x8(%ebp),%eax
085a942e +0x00fe:  mov    %eax,(%esp)
085a9431 +0x0101:  call   0826b978 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x246>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x246
085a9436 +0x0106:  lea    -0x98(%ebp),%eax
085a943c +0x010c:  mov    %eax,(%esp)
085a943f +0x010f:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
085a9444 +0x0114:  movl   $0xfe,0x8(%esp)
085a944c +0x011c:  movl   $0x0,0x4(%esp)
085a9454 +0x0124:  lea    -0x98(%ebp),%eax
085a945a +0x012a:  mov    %eax,(%esp)
085a945d +0x012d:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085a9462 +0x0132:  movl   $0x1,0x4(%esp)
085a946a +0x013a:  lea    -0x98(%ebp),%eax
085a9470 +0x0140:  mov    %eax,(%esp)
085a9473 +0x0143:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085a9478 +0x0148:  lea    -0x98(%ebp),%eax
085a947e +0x014e:  mov    %eax,0x4(%esp)
085a9482 +0x0152:  mov    0x8(%ebp),%eax
085a9485 +0x0155:  mov    %eax,(%esp)
085a9488 +0x0158:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
085a948d +0x015d:  mov    0x8(%ebp),%eax
085a9490 +0x0160:  add    $0xc7c,%eax
085a9495 +0x0165:  movl   $&_ZZN6CParty12ClearDungeonEvE19__PRETTY_FUNCTION__,0x4(%esp)
085a949d +0x016d:  mov    %eax,(%esp)
085a94a0 +0x0170:  call   082fed32 <_ZN19CDungeonClearTracer5TraceEPKc>  ; CDungeonClearTracer::Trace(char const*)
085a94a5 +0x0175:  mov    0x8(%ebp),%eax
085a94a8 +0x0178:  movb   $0x1,0x11a(%eax)
085a94af +0x017f:  lea    -0x98(%ebp),%eax
085a94b5 +0x0185:  mov    %eax,(%esp)
085a94b8 +0x0188:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085a94bd +0x018d:  jmp    085aa38f <+0x105f>
085a94c2 +0x0192:  mov    %edx,%ebx
085a94c4 +0x0194:  mov    %eax,%esi
085a94c6 +0x0196:  lea    -0x98(%ebp),%eax
085a94cc +0x019c:  mov    %eax,(%esp)
085a94cf +0x019f:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085a94d4 +0x01a4:  mov    %esi,%eax
085a94d6 +0x01a6:  mov    %ebx,%edx
085a94d8 +0x01a8:  mov    %eax,(%esp)
085a94db +0x01ab:  call   08ae3750 <_Unwind_Resume>
085a94e0 +0x01b0:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
085a94e7 +0x01b7:  call   081458ac <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x32f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x32f
085a94ec +0x01bc:  mov    $0x0,%edx
085a94f1 +0x01c1:  mov    0x8(%ebp),%ecx
085a94f4 +0x01c4:  mov    0x350(%ecx),%ebx
085a94fa +0x01ca:  mov    0x34c(%ecx),%ecx
085a9500 +0x01d0:  sub    %ecx,%eax
085a9502 +0x01d2:  sbb    %ebx,%edx
085a9504 +0x01d4:  mov    0x8(%ebp),%ecx
085a9507 +0x01d7:  mov    0x35c(%ecx),%ebx
085a950d +0x01dd:  mov    0x358(%ecx),%ecx
085a9513 +0x01e3:  sub    %ecx,%eax
085a9515 +0x01e5:  sbb    %ebx,%edx
085a9517 +0x01e7:  mov    0x8(%ebp),%ecx
085a951a +0x01ea:  mov    %eax,0x32c(%ecx)
085a9520 +0x01f0:  mov    %edx,0x330(%ecx)
085a9526 +0x01f6:  mov    0x8(%ebp),%eax
085a9529 +0x01f9:  mov    %eax,(%esp)
085a952c +0x01fc:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
085a9531 +0x0201:  mov    %eax,-0x48(%ebp)
085a9534 +0x0204:  mov    0x8(%ebp),%eax
085a9537 +0x0207:  mov    0xcac(%eax),%eax
085a953d +0x020d:  test   %eax,%eax
085a953f +0x020f:  je     085a972d <+0x3fd>
085a9545 +0x0215:  movl   $0x64,-0x3c(%ebp)
085a954c +0x021c:  movl   $0x0,-0x38(%ebp)
085a9553 +0x0223:  jmp    085a971e <+0x3ee>
085a9558 +0x0228:  mov    -0x38(%ebp),%eax
085a955b +0x022b:  mov    %eax,0x4(%esp)
085a955f +0x022f:  mov    0x8(%ebp),%eax
085a9562 +0x0232:  mov    %eax,(%esp)
085a9565 +0x0235:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
085a956a +0x023a:  xor    $0x1,%eax
085a956d +0x023d:  test   %al,%al
085a956f +0x023f:  jne    085a9719 <+0x3e9>
085a9575 +0x0245:  mov    0x8(%ebp),%eax
085a9578 +0x0248:  mov    0xcac(%eax),%eax
085a957e +0x024e:  movzbl 0x87a(%eax),%eax
085a9585 +0x0255:  test   %al,%al
085a9587 +0x0257:  je     085a95c5 <+0x295>
085a9589 +0x0259:  mov    -0x38(%ebp),%edx
085a958c +0x025c:  mov    0x8(%ebp),%ecx
085a958f +0x025f:  mov    %edx,%eax
085a9591 +0x0261:  add    %eax,%eax
085a9593 +0x0263:  add    %edx,%eax
085a9595 +0x0265:  shl    $0x3,%eax
085a9598 +0x0268:  lea    (%ecx,%eax,1),%eax
085a959b +0x026b:  add    $0x78,%eax
085a959e +0x026e:  mov    (%eax),%eax
085a95a0 +0x0270:  movl   $0x0,0xc(%esp)
085a95a8 +0x0278:  movl   $0x0,0x8(%esp)
085a95b0 +0x0280:  movl   $0x18,0x4(%esp)
085a95b8 +0x0288:  mov    %eax,(%esp)
085a95bb +0x028b:  call   08122390 <_ZN8APSystem9CUserProc24ClearActionAndSendtoUserEP5CUserNS_17_ActionGroupIndexEi16ENUM_PACKETCLASS>  ; APSystem::CUserProc::ClearActionAndSendtoUser(CUser*, APSystem::_ActionGroupIndex, int, ENUM_PACKETCLASS)
085a95c0 +0x0290:  jmp    085a96ba <+0x38a>
085a95c5 +0x0295:  mov    0x8(%ebp),%eax
085a95c8 +0x0298:  mov    0xcac(%eax),%eax
085a95ce +0x029e:  mov    %eax,(%esp)
085a95d1 +0x02a1:  call   080fdcf0 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1c
085a95d6 +0x02a6:  cmp    $0x64,%eax
085a95d9 +0x02a9:  sete   %al
085a95dc +0x02ac:  test   %al,%al
085a95de +0x02ae:  je     085a961c <+0x2ec>
085a95e0 +0x02b0:  mov    -0x38(%ebp),%edx
085a95e3 +0x02b3:  mov    0x8(%ebp),%ecx
085a95e6 +0x02b6:  mov    %edx,%eax
085a95e8 +0x02b8:  add    %eax,%eax
085a95ea +0x02ba:  add    %edx,%eax
085a95ec +0x02bc:  shl    $0x3,%eax
085a95ef +0x02bf:  lea    (%ecx,%eax,1),%eax
085a95f2 +0x02c2:  add    $0x78,%eax
085a95f5 +0x02c5:  mov    (%eax),%eax
085a95f7 +0x02c7:  movl   $0x0,0xc(%esp)
085a95ff +0x02cf:  movl   $0x0,0x8(%esp)
085a9607 +0x02d7:  movl   $0x19,0x4(%esp)
085a960f +0x02df:  mov    %eax,(%esp)
085a9612 +0x02e2:  call   08122390 <_ZN8APSystem9CUserProc24ClearActionAndSendtoUserEP5CUserNS_17_ActionGroupIndexEi16ENUM_PACKETCLASS>  ; APSystem::CUserProc::ClearActionAndSendtoUser(CUser*, APSystem::_ActionGroupIndex, int, ENUM_PACKETCLASS)
085a9617 +0x02e7:  jmp    085a96ba <+0x38a>
085a961c +0x02ec:  mov    0x8(%ebp),%eax
085a961f +0x02ef:  mov    0xcac(%eax),%eax
085a9625 +0x02f5:  movzbl 0x89c(%eax),%eax
085a962c +0x02fc:  test   %al,%al
085a962e +0x02fe:  je     085a9669 <+0x339>
085a9630 +0x0300:  mov    -0x38(%ebp),%edx
085a9633 +0x0303:  mov    0x8(%ebp),%ecx
085a9636 +0x0306:  mov    %edx,%eax
085a9638 +0x0308:  add    %eax,%eax
085a963a +0x030a:  add    %edx,%eax
085a963c +0x030c:  shl    $0x3,%eax
085a963f +0x030f:  lea    (%ecx,%eax,1),%eax
085a9642 +0x0312:  add    $0x78,%eax
085a9645 +0x0315:  mov    (%eax),%eax
085a9647 +0x0317:  movl   $0x0,0xc(%esp)
085a964f +0x031f:  movl   $0x0,0x8(%esp)
085a9657 +0x0327:  movl   $0x1b,0x4(%esp)
085a965f +0x032f:  mov    %eax,(%esp)
085a9662 +0x0332:  call   08122390 <_ZN8APSystem9CUserProc24ClearActionAndSendtoUserEP5CUserNS_17_ActionGroupIndexEi16ENUM_PACKETCLASS>  ; APSystem::CUserProc::ClearActionAndSendtoUser(CUser*, APSystem::_ActionGroupIndex, int, ENUM_PACKETCLASS)
085a9667 +0x0337:  jmp    085a96ba <+0x38a>
085a9669 +0x0339:  mov    0x8(%ebp),%eax
085a966c +0x033c:  mov    0xcac(%eax),%eax
085a9672 +0x0342:  mov    %eax,(%esp)
085a9675 +0x0345:  call   0826b938 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x206>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x206
085a967a +0x034a:  test   %al,%al
085a967c +0x034c:  setg   %al
085a967f +0x034f:  test   %al,%al
085a9681 +0x0351:  je     085a96ba <+0x38a>
085a9683 +0x0353:  mov    -0x38(%ebp),%edx
085a9686 +0x0356:  mov    0x8(%ebp),%ecx
085a9689 +0x0359:  mov    %edx,%eax
085a968b +0x035b:  add    %eax,%eax
085a968d +0x035d:  add    %edx,%eax
085a968f +0x035f:  shl    $0x3,%eax
085a9692 +0x0362:  lea    (%ecx,%eax,1),%eax
085a9695 +0x0365:  add    $0x78,%eax
085a9698 +0x0368:  mov    (%eax),%eax
085a969a +0x036a:  movl   $0x0,0xc(%esp)
085a96a2 +0x0372:  movl   $0x0,0x8(%esp)
085a96aa +0x037a:  movl   $0x1c,0x4(%esp)
085a96b2 +0x0382:  mov    %eax,(%esp)
085a96b5 +0x0385:  call   08122390 <_ZN8APSystem9CUserProc24ClearActionAndSendtoUserEP5CUserNS_17_ActionGroupIndexEi16ENUM_PACKETCLASS>  ; APSystem::CUserProc::ClearActionAndSendtoUser(CUser*, APSystem::_ActionGroupIndex, int, ENUM_PACKETCLASS)
085a96ba +0x038a:  mov    -0x38(%ebp),%edx
085a96bd +0x038d:  mov    0x8(%ebp),%ecx
085a96c0 +0x0390:  mov    %edx,%eax
085a96c2 +0x0392:  add    %eax,%eax
085a96c4 +0x0394:  add    %edx,%eax
085a96c6 +0x0396:  shl    $0x3,%eax
085a96c9 +0x0399:  lea    (%ecx,%eax,1),%eax
085a96cc +0x039c:  add    $0x78,%eax
085a96cf +0x039f:  mov    (%eax),%eax
085a96d1 +0x03a1:  mov    %eax,(%esp)
085a96d4 +0x03a4:  call   085bfdea <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x1348>  ; global constructors keyed to CParty::cMember::cMember()+0x1348
085a96d9 +0x03a9:  xor    $0x1,%eax
085a96dc +0x03ac:  test   %al,%al
085a96de +0x03ae:  je     085a971a <+0x3ea>
085a96e0 +0x03b0:  mov    -0x38(%ebp),%edx
085a96e3 +0x03b3:  mov    0x8(%ebp),%ecx
085a96e6 +0x03b6:  mov    %edx,%eax
085a96e8 +0x03b8:  add    %eax,%eax
085a96ea +0x03ba:  add    %edx,%eax
085a96ec +0x03bc:  shl    $0x3,%eax
085a96ef +0x03bf:  lea    (%ecx,%eax,1),%eax
085a96f2 +0x03c2:  add    $0x78,%eax
085a96f5 +0x03c5:  mov    (%eax),%eax
085a96f7 +0x03c7:  movl   $0x0,0xc(%esp)
085a96ff +0x03cf:  movl   $0x0,0x8(%esp)
085a9707 +0x03d7:  movl   $0xf,0x4(%esp)
085a970f +0x03df:  mov    %eax,(%esp)
085a9712 +0x03e2:  call   08122390 <_ZN8APSystem9CUserProc24ClearActionAndSendtoUserEP5CUserNS_17_ActionGroupIndexEi16ENUM_PACKETCLASS>  ; APSystem::CUserProc::ClearActionAndSendtoUser(CUser*, APSystem::_ActionGroupIndex, int, ENUM_PACKETCLASS)
085a9717 +0x03e7:  jmp    085a971a <+0x3ea>
085a9719 +0x03e9:  nop
085a971a +0x03ea:  addl   $0x1,-0x38(%ebp)
085a971e +0x03ee:  cmpl   $0x3,-0x38(%ebp)
085a9722 +0x03f2:  setle  %al
085a9725 +0x03f5:  test   %al,%al
085a9727 +0x03f7:  jne    085a9558 <+0x228>
085a972d +0x03fd:  lea    -0x68(%ebp),%eax
085a9730 +0x0400:  mov    %eax,(%esp)
085a9733 +0x0403:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
085a9738 +0x0408:  mov    0x8(%ebp),%eax
085a973b +0x040b:  mov    0xcac(%eax),%eax
085a9741 +0x0411:  movzbl 0x89f(%eax),%eax
085a9748 +0x0418:  test   %al,%al
085a974a +0x041a:  jle    085a97ee <+0x4be>
085a9750 +0x0420:  mov    0x8(%ebp),%eax
085a9753 +0x0423:  mov    0xcac(%eax),%ebx
085a9759 +0x0429:  mov    0x8(%ebp),%eax
085a975c +0x042c:  add    $0xdd0,%eax
085a9761 +0x0431:  mov    %eax,(%esp)
085a9764 +0x0434:  call   0830ebc2 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x7a7>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x7a7
085a9769 +0x0439:  cwtl
085a976a +0x043a:  mov    0x8(%ebp),%edx
085a976d +0x043d:  lea    0xddc(%edx),%ecx
085a9773 +0x0443:  mov    %ebx,0x10(%esp)
085a9777 +0x0447:  mov    0x8(%ebp),%edx
085a977a +0x044a:  mov    %edx,0xc(%esp)
085a977e +0x044e:  mov    %eax,0x8(%esp)
085a9782 +0x0452:  movl   $0x1,0x4(%esp)
085a978a +0x045a:  mov    %ecx,(%esp)
085a978d +0x045d:  call   08306fc4 <_ZN13CBattle_Field21CBloodClearRewardData18onFinishBloodRoundEbsP6CPartyPK8CDungeon>  ; CBattle_Field::CBloodClearRewardData::onFinishBloodRound(bool, short, CParty*, CDungeon const*)
085a9792 +0x0462:  movl   $0x22,0x4(%esp)
085a979a +0x046a:  mov    0x8(%ebp),%eax
085a979d +0x046d:  mov    %eax,(%esp)
085a97a0 +0x0470:  call   0859ae76 <_ZN6CParty13gen_timer_keyE13TIMER_MESSAGE>  ; CParty::gen_timer_key(TIMER_MESSAGE)
085a97a5 +0x0475:  mov    %eax,%esi
085a97a7 +0x0477:  mov    0x8(%ebp),%eax
085a97aa +0x047a:  mov    %eax,(%esp)
085a97ad +0x047d:  call   0822d846 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2ef0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2ef0
085a97b2 +0x0482:  mov    %eax,%ebx
085a97b4 +0x0484:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
085a97b9 +0x0489:  movl   $0x22,0x18(%esp)
085a97c1 +0x0491:  mov    %esi,0x14(%esp)
085a97c5 +0x0495:  movl   $0x5,0x10(%esp)
085a97cd +0x049d:  movl   $0x22,0xc(%esp)
085a97d5 +0x04a5:  mov    %ebx,0x8(%esp)
085a97d9 +0x04a9:  movl   $0x1,0x4(%esp)
085a97e1 +0x04b1:  mov    %eax,(%esp)
085a97e4 +0x04b4:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
085a97e9 +0x04b9:  jmp    085a9fbd <+0xc8d>
085a97ee +0x04be:  mov    0x8(%ebp),%eax
085a97f1 +0x04c1:  mov    0xcac(%eax),%eax
085a97f7 +0x04c7:  mov    %eax,(%esp)
085a97fa +0x04ca:  call   0822b4fa <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xba4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xba4
085a97ff +0x04cf:  test   %al,%al
085a9801 +0x04d1:  je     085a9f47 <+0xc17>
085a9807 +0x04d7:  mov    0x8(%ebp),%eax
085a980a +0x04da:  movb   $0x1,0x11a(%eax)
085a9811 +0x04e1:  mov    0x8(%ebp),%eax
085a9814 +0x04e4:  mov    %eax,(%esp)
085a9817 +0x04e7:  call   08145780 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x203>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x203
085a981c +0x04ec:  movl   $0xd,0x4(%esp)
085a9824 +0x04f4:  mov    %eax,(%esp)
085a9827 +0x04f7:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
085a982c +0x04fc:  mov    %eax,-0x34(%ebp)
085a982f +0x04ff:  mov    -0x34(%ebp),%eax
085a9832 +0x0502:  mov    %eax,(%esp)
085a9835 +0x0505:  call   0864390e <_ZN13TOD_UserState10ClearLayerEv>  ; TOD_UserState::ClearLayer()
085a983a +0x050a:  movl   $0x5,-0x30(%ebp)
085a9841 +0x0511:  mov    0x8(%ebp),%eax
085a9844 +0x0514:  movl   $0xffffffff,0x17b4(%eax)
085a984e +0x051e:  mov    0x8(%ebp),%eax
085a9851 +0x0521:  movl   $0x0,0x17b8(%eax)
085a985b +0x052b:  lea    -0x5c(%ebp),%eax
085a985e +0x052e:  mov    -0x34(%ebp),%edx
085a9861 +0x0531:  mov    %edx,0x4(%esp)
085a9865 +0x0535:  mov    %eax,(%esp)
085a9868 +0x0538:  call   08643942 <_ZNK13TOD_UserState17getLastEnterLayerEv>  ; TOD_UserState::getLastEnterLayer() const
085a986d +0x053d:  sub    $0x4,%esp
085a9870 +0x0540:  lea    -0x5c(%ebp),%eax
085a9873 +0x0543:  mov    %eax,(%esp)
085a9876 +0x0546:  call   0822ec40 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x42ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x42ea
085a987b +0x054b:  movzwl %ax,%edx
085a987e +0x054e:  mov    &_ZN10GlobalData20s_pTowerOfDespairMgrE,%eax
085a9883 +0x0553:  mov    %edx,0x4(%esp)
085a9887 +0x0557:  mov    %eax,(%esp)
085a988a +0x055a:  call   08643d9c <_ZN17TowerOfDespairMgr19Get_APCIndexByLayerEj>  ; TowerOfDespairMgr::Get_APCIndexByLayer(unsigned int)
085a988f +0x055f:  cmp    $0xffffffff,%eax
085a9892 +0x0562:  setne  %al
085a9895 +0x0565:  test   %al,%al
085a9897 +0x0567:  je     085a9aa5 <+0x775>
085a989d +0x056d:  lea    -0x5a(%ebp),%eax
085a98a0 +0x0570:  mov    -0x34(%ebp),%edx
085a98a3 +0x0573:  mov    %edx,0x4(%esp)
085a98a7 +0x0577:  mov    %eax,(%esp)
085a98aa +0x057a:  call   08643942 <_ZNK13TOD_UserState17getLastEnterLayerEv>  ; TOD_UserState::getLastEnterLayer() const
085a98af +0x057f:  sub    $0x4,%esp
085a98b2 +0x0582:  mov    &_ZN10GlobalData20s_pTowerOfDespairMgrE,%eax
085a98b7 +0x0587:  lea    -0x5a(%ebp),%edx
085a98ba +0x058a:  mov    %edx,0x4(%esp)
085a98be +0x058e:  mov    %eax,(%esp)
085a98c1 +0x0591:  call   08643e4a <_ZN17TowerOfDespairMgr18Get_APCNameByLayerERK9TOD_Layer>  ; TowerOfDespairMgr::Get_APCNameByLayer(TOD_Layer const&)
085a98c6 +0x0596:  mov    %eax,-0x28(%ebp)
085a98c9 +0x0599:  cmpl   $0x0,-0x28(%ebp)
085a98cd +0x059d:  je     085a9a84 <+0x754>
085a98d3 +0x05a3:  mov    -0x28(%ebp),%eax
085a98d6 +0x05a6:  movzbl (%eax),%eax
085a98d9 +0x05a9:  test   %al,%al
085a98db +0x05ab:  je     085a9a84 <+0x754>
085a98e1 +0x05b1:  lea    -0xd4(%ebp),%eax
085a98e7 +0x05b7:  mov    %eax,(%esp)
085a98ea +0x05ba:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
085a98ef +0x05bf:  movl   $0x56,0x8(%esp)
085a98f7 +0x05c7:  movl   $0x0,0x4(%esp)
085a98ff +0x05cf:  lea    -0xd4(%ebp),%eax
085a9905 +0x05d5:  mov    %eax,(%esp)
085a9908 +0x05d8:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085a990d +0x05dd:  movl   $0x8,0x4(%esp)
085a9915 +0x05e5:  lea    -0xd4(%ebp),%eax
085a991b +0x05eb:  mov    %eax,(%esp)
085a991e +0x05ee:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085a9923 +0x05f3:  lea    -0x58(%ebp),%eax
085a9926 +0x05f6:  mov    -0x34(%ebp),%edx
085a9929 +0x05f9:  mov    %edx,0x4(%esp)
085a992d +0x05fd:  mov    %eax,(%esp)
085a9930 +0x0600:  call   08643942 <_ZNK13TOD_UserState17getLastEnterLayerEv>  ; TOD_UserState::getLastEnterLayer() const
085a9935 +0x0605:  sub    $0x4,%esp
085a9938 +0x0608:  lea    -0x58(%ebp),%eax
085a993b +0x060b:  mov    %eax,(%esp)
085a993e +0x060e:  call   0822ec40 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x42ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x42ea
085a9943 +0x0613:  movzwl %ax,%eax
085a9946 +0x0616:  mov    %eax,0x4(%esp)
085a994a +0x061a:  lea    -0xd4(%ebp),%eax
085a9950 +0x0620:  mov    %eax,(%esp)
085a9953 +0x0623:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085a9958 +0x0628:  mov    -0x28(%ebp),%eax
085a995b +0x062b:  mov    %eax,(%esp)
085a995e +0x062e:  call   0807e3b0 <_init+0xca8>
085a9963 +0x0633:  mov    %eax,0x4(%esp)
085a9967 +0x0637:  lea    -0xd4(%ebp),%eax
085a996d +0x063d:  mov    %eax,(%esp)
085a9970 +0x0640:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085a9975 +0x0645:  mov    -0x28(%ebp),%eax
085a9978 +0x0648:  mov    %eax,(%esp)
085a997b +0x064b:  call   0807e3b0 <_init+0xca8>
085a9980 +0x0650:  mov    %eax,0x8(%esp)
085a9984 +0x0654:  mov    -0x28(%ebp),%eax
085a9987 +0x0657:  mov    %eax,0x4(%esp)
085a998b +0x065b:  lea    -0xd4(%ebp),%eax
085a9991 +0x0661:  mov    %eax,(%esp)
085a9994 +0x0664:  call   0822b770 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xe1a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xe1a
085a9999 +0x0669:  mov    0x8(%ebp),%eax
085a999c +0x066c:  mov    %eax,(%esp)
085a999f +0x066f:  call   08145780 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x203>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x203
085a99a4 +0x0674:  mov    %eax,(%esp)
085a99a7 +0x0677:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
085a99ac +0x067c:  mov    %eax,-0x28(%ebp)
085a99af +0x067f:  cmpl   $0x0,-0x28(%ebp)
085a99b3 +0x0683:  jne    085a99eb <+0x6bb>
085a99b5 +0x0685:  movl   $0x5,0x4(%esp)
085a99bd +0x068d:  lea    -0xd4(%ebp),%eax
085a99c3 +0x0693:  mov    %eax,(%esp)
085a99c6 +0x0696:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085a99cb +0x069b:  movl   $0x6,0x8(%esp)
085a99d3 +0x06a3:  movl   $"Neople",0x4(%esp)
085a99db +0x06ab:  lea    -0xd4(%ebp),%eax
085a99e1 +0x06b1:  mov    %eax,(%esp)
085a99e4 +0x06b4:  call   0822b770 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xe1a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xe1a
085a99e9 +0x06b9:  jmp    085a9a2c <+0x6fc>
085a99eb +0x06bb:  mov    -0x28(%ebp),%eax
085a99ee +0x06be:  mov    %eax,(%esp)
085a99f1 +0x06c1:  call   0807e3b0 <_init+0xca8>
085a99f6 +0x06c6:  mov    %eax,0x4(%esp)
085a99fa +0x06ca:  lea    -0xd4(%ebp),%eax
085a9a00 +0x06d0:  mov    %eax,(%esp)
085a9a03 +0x06d3:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085a9a08 +0x06d8:  mov    -0x28(%ebp),%eax
085a9a0b +0x06db:  mov    %eax,(%esp)
085a9a0e +0x06de:  call   0807e3b0 <_init+0xca8>
085a9a13 +0x06e3:  mov    %eax,0x8(%esp)
085a9a17 +0x06e7:  mov    -0x28(%ebp),%eax
085a9a1a +0x06ea:  mov    %eax,0x4(%esp)
085a9a1e +0x06ee:  lea    -0xd4(%ebp),%eax
085a9a24 +0x06f4:  mov    %eax,(%esp)
085a9a27 +0x06f7:  call   0822b770 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xe1a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xe1a
085a9a2c +0x06fc:  movl   $0x1,0x4(%esp)
085a9a34 +0x0704:  lea    -0xd4(%ebp),%eax
085a9a3a +0x070a:  mov    %eax,(%esp)
085a9a3d +0x070d:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085a9a42 +0x0712:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085a9a47 +0x0717:  lea    -0xd4(%ebp),%edx
085a9a4d +0x071d:  mov    %edx,0x4(%esp)
085a9a51 +0x0721:  mov    %eax,(%esp)
085a9a54 +0x0724:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
085a9a59 +0x0729:  jmp    085a9a76 <+0x746>
085a9a5b +0x072b:  mov    %edx,%ebx
085a9a5d +0x072d:  mov    %eax,%esi
085a9a5f +0x072f:  lea    -0xd4(%ebp),%eax
085a9a65 +0x0735:  mov    %eax,(%esp)
085a9a68 +0x0738:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085a9a6d +0x073d:  mov    %esi,%eax
085a9a6f +0x073f:  mov    %ebx,%edx
085a9a71 +0x0741:  jmp    085aa373 <+0x1043>
085a9a76 +0x0746:  lea    -0xd4(%ebp),%eax
085a9a7c +0x074c:  mov    %eax,(%esp)
085a9a7f +0x074f:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085a9a84 +0x0754:  movl   $0x9,-0x30(%ebp)
085a9a8b +0x075b:  mov    0x8(%ebp),%eax
085a9a8e +0x075e:  movl   $0x4e4,0x17b4(%eax)
085a9a98 +0x0768:  mov    0x8(%ebp),%eax
085a9a9b +0x076b:  movl   $0x1,0x17b8(%eax)
085a9aa5 +0x0775:  lea    -0x56(%ebp),%eax
085a9aa8 +0x0778:  mov    -0x34(%ebp),%edx
085a9aab +0x077b:  mov    %edx,0x4(%esp)
085a9aaf +0x077f:  mov    %eax,(%esp)
085a9ab2 +0x0782:  call   08643942 <_ZNK13TOD_UserState17getLastEnterLayerEv>  ; TOD_UserState::getLastEnterLayer() const
085a9ab7 +0x0787:  sub    $0x4,%esp
085a9aba +0x078a:  lea    -0x56(%ebp),%eax
085a9abd +0x078d:  mov    %eax,(%esp)
085a9ac0 +0x0790:  call   0822ec40 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x42ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x42ea
085a9ac5 +0x0795:  cmp    $0x64,%ax
085a9ac9 +0x0799:  sete   %al
085a9acc +0x079c:  test   %al,%al
085a9ace +0x079e:  je     085a9aea <+0x7ba>
085a9ad0 +0x07a0:  mov    0x8(%ebp),%eax
085a9ad3 +0x07a3:  movl   $0xcf2,0x17b4(%eax)
085a9add +0x07ad:  mov    0x8(%ebp),%eax
085a9ae0 +0x07b0:  movl   $0x1,0x17b8(%eax)
085a9aea +0x07ba:  lea    -0x14c(%ebp),%eax
085a9af0 +0x07c0:  mov    %eax,(%esp)
085a9af3 +0x07c3:  call   0814a706 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x4a5>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x4a5
085a9af8 +0x07c8:  lea    -0x104(%ebp),%eax
085a9afe +0x07ce:  mov    %eax,(%esp)
085a9b01 +0x07d1:  call   0814ab06 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x8a5>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x8a5
085a9b06 +0x07d6:  lea    -0xa4(%ebp),%eax
085a9b0c +0x07dc:  mov    %eax,(%esp)
085a9b0f +0x07df:  call   081349d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5dd
085a9b14 +0x07e4:  movb   $0x0,-0x117(%ebp)
085a9b1b +0x07eb:  movb   $0x46,-0x118(%ebp)
085a9b22 +0x07f2:  mov    $0x3f800000,%eax
085a9b27 +0x07f7:  mov    %eax,-0x114(%ebp)
085a9b2d +0x07fd:  mov    0x8(%ebp),%eax
085a9b30 +0x0800:  mov    0xcac(%eax),%eax
085a9b36 +0x0806:  mov    %eax,-0x10c(%ebp)
085a9b3c +0x080c:  movl   $0x0,-0x110(%ebp)
085a9b46 +0x0816:  movl   $0x0,-0x24(%ebp)
085a9b4d +0x081d:  jmp    085a9b90 <+0x860>
085a9b4f +0x081f:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085a9b54 +0x0824:  mov    %eax,(%esp)
085a9b57 +0x0827:  call   0814a6ea <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x489>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x489
085a9b5c +0x082c:  movl   $0x2,0x4(%esp)
085a9b64 +0x0834:  mov    %eax,(%esp)
085a9b67 +0x0837:  call   0814a7d0 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x56f>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x56f
085a9b6c +0x083c:  mov    (%eax),%edx
085a9b6e +0x083e:  add    $0x8,%edx
085a9b71 +0x0841:  mov    (%edx),%ecx
085a9b73 +0x0843:  lea    -0x104(%ebp),%edx
085a9b79 +0x0849:  mov    %edx,0x8(%esp)
085a9b7d +0x084d:  lea    -0x14c(%ebp),%edx
085a9b83 +0x0853:  mov    %edx,0x4(%esp)
085a9b87 +0x0857:  mov    %eax,(%esp)
085a9b8a +0x085a:  call   *%ecx
085a9b8c +0x085c:  addl   $0x1,-0x24(%ebp)
085a9b90 +0x0860:  mov    -0x24(%ebp),%eax
085a9b93 +0x0863:  cmp    -0x30(%ebp),%eax
085a9b96 +0x0866:  setl   %al
085a9b99 +0x0869:  test   %al,%al
085a9b9b +0x086b:  jne    085a9b4f <+0x81f>
085a9b9d +0x086d:  lea    -0x54(%ebp),%eax
085a9ba0 +0x0870:  mov    %eax,(%esp)
085a9ba3 +0x0873:  call   081b5c8e <_GLOBAL__I__ZN23NeedMaterialDataManagerC2Ev+0x31>  ; global constructors keyed to NeedMaterialDataManager::NeedMaterialDataManager()+0x31
085a9ba8 +0x0878:  lea    -0x104(%ebp),%eax
085a9bae +0x087e:  mov    %eax,(%esp)
085a9bb1 +0x0881:  call   0817a65e <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x6dc>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x6dc
085a9bb6 +0x0886:  mov    %eax,%ecx
085a9bb8 +0x0888:  mov    -0x54(%ebp),%eax
085a9bbb +0x088b:  mov    -0x50(%ebp),%edx
085a9bbe +0x088e:  mov    %eax,0x8(%esp)
085a9bc2 +0x0892:  mov    %edx,0xc(%esp)
085a9bc6 +0x0896:  mov    %ecx,0x4(%esp)
085a9bca +0x089a:  lea    -0xa4(%ebp),%eax
085a9bd0 +0x08a0:  mov    %eax,(%esp)
085a9bd3 +0x08a3:  call   085c02e0 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x183e>  ; global constructors keyed to CParty::cMember::cMember()+0x183e
085a9bd8 +0x08a8:  movl   $0x0,-0x20(%ebp)
085a9bdf +0x08af:  jmp    085a9c84 <+0x954>
085a9be4 +0x08b4:  mov    -0x20(%ebp),%eax
085a9be7 +0x08b7:  mov    %eax,0x4(%esp)
085a9beb +0x08bb:  lea    -0x104(%ebp),%eax
085a9bf1 +0x08c1:  mov    %eax,(%esp)
085a9bf4 +0x08c4:  call   08328422 <_GLOBAL__I__ZN8WongWork9CCeraShopC2Ev+0x37b>  ; global constructors keyed to WongWork::CCeraShop::CCeraShop()+0x37b
085a9bf9 +0x08c9:  mov    %eax,-0x1c(%ebp)
085a9bfc +0x08cc:  mov    -0x1c(%ebp),%eax
085a9bff +0x08cf:  mov    0x2(%eax),%eax
085a9c02 +0x08d2:  mov    %eax,%ebx
085a9c04 +0x08d4:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085a9c09 +0x08d9:  mov    %ebx,0x4(%esp)
085a9c0d +0x08dd:  mov    %eax,(%esp)
085a9c10 +0x08e0:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
085a9c15 +0x08e5:  mov    %eax,-0x18(%ebp)
085a9c18 +0x08e8:  mov    -0x20(%ebp),%eax
085a9c1b +0x08eb:  mov    %eax,0x4(%esp)
085a9c1f +0x08ef:  lea    -0xa4(%ebp),%eax
085a9c25 +0x08f5:  mov    %eax,(%esp)
085a9c28 +0x08f8:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
085a9c2d +0x08fd:  mov    -0x1c(%ebp),%edx
085a9c30 +0x0900:  mov    0x2(%edx),%edx
085a9c33 +0x0903:  mov    %edx,(%eax)
085a9c35 +0x0905:  mov    -0x18(%ebp),%eax
085a9c38 +0x0908:  mov    %eax,(%esp)
085a9c3b +0x090b:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
085a9c40 +0x0910:  test   %al,%al
085a9c42 +0x0912:  je     085a9c64 <+0x934>
085a9c44 +0x0914:  mov    -0x20(%ebp),%eax
085a9c47 +0x0917:  mov    %eax,0x4(%esp)
085a9c4b +0x091b:  lea    -0xa4(%ebp),%eax
085a9c51 +0x0921:  mov    %eax,(%esp)
085a9c54 +0x0924:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
085a9c59 +0x0929:  mov    -0x1c(%ebp),%edx
085a9c5c +0x092c:  mov    0x7(%edx),%edx
085a9c5f +0x092f:  mov    %edx,0x4(%eax)
085a9c62 +0x0932:  jmp    085a9c80 <+0x950>
085a9c64 +0x0934:  mov    -0x20(%ebp),%eax
085a9c67 +0x0937:  mov    %eax,0x4(%esp)
085a9c6b +0x093b:  lea    -0xa4(%ebp),%eax
085a9c71 +0x0941:  mov    %eax,(%esp)
085a9c74 +0x0944:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
085a9c79 +0x0949:  movl   $0x1,0x4(%eax)
085a9c80 +0x0950:  addl   $0x1,-0x20(%ebp)
085a9c84 +0x0954:  lea    -0x104(%ebp),%eax
085a9c8a +0x095a:  mov    %eax,(%esp)
085a9c8d +0x095d:  call   0817a65e <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x6dc>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x6dc
085a9c92 +0x0962:  cmp    -0x20(%ebp),%eax
085a9c95 +0x0965:  seta   %al
085a9c98 +0x0968:  test   %al,%al
085a9c9a +0x096a:  jne    085a9be4 <+0x8b4>
085a9ca0 +0x0970:  mov    0x8(%ebp),%eax
085a9ca3 +0x0973:  lea    0x17a8(%eax),%edx
085a9ca9 +0x0979:  lea    -0xa4(%ebp),%eax
085a9caf +0x097f:  mov    %eax,0x4(%esp)
085a9cb3 +0x0983:  mov    %edx,(%esp)
085a9cb6 +0x0986:  call   0830f08c <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0xc71>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0xc71
085a9cbb +0x098b:  mov    0x8(%ebp),%eax
085a9cbe +0x098e:  mov    0x17b4(%eax),%eax
085a9cc4 +0x0994:  cmp    $0xffffffff,%eax
085a9cc7 +0x0997:  je     085a9ce3 <+0x9b3>
085a9cc9 +0x0999:  mov    0x8(%ebp),%eax
085a9ccc +0x099c:  add    $0x17b4,%eax
085a9cd1 +0x09a1:  mov    %eax,0x4(%esp)
085a9cd5 +0x09a5:  lea    -0xa4(%ebp),%eax
085a9cdb +0x09ab:  mov    %eax,(%esp)
085a9cde +0x09ae:  call   0830fa70 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1655>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1655
085a9ce3 +0x09b3:  lea    -0xb0(%ebp),%eax
085a9ce9 +0x09b9:  mov    %eax,(%esp)
085a9cec +0x09bc:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
085a9cf1 +0x09c1:  movl   $0x0,-0x2c(%ebp)
085a9cf8 +0x09c8:  mov    0x8(%ebp),%eax
085a9cfb +0x09cb:  mov    %eax,(%esp)
085a9cfe +0x09ce:  call   08145780 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x203>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x203
085a9d03 +0x09d3:  mov    %eax,(%esp)
085a9d06 +0x09d6:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
085a9d0b +0x09db:  movl   $"game_server_msg_192",0x1c(%esp)
085a9d13 +0x09e3:  movl   $"game_server_msg_191",0x18(%esp)
085a9d1b +0x09eb:  movl   $0x1,0x14(%esp)
085a9d23 +0x09f3:  movl   $0x37,0x10(%esp)
085a9d2b +0x09fb:  movl   $0x1f,0xc(%esp)
085a9d33 +0x0a03:  lea    -0xb0(%ebp),%edx
085a9d39 +0x0a09:  mov    %edx,0x8(%esp)
085a9d3d +0x0a0d:  lea    -0xa4(%ebp),%edx
085a9d43 +0x0a13:  mov    %edx,0x4(%esp)
085a9d47 +0x0a17:  mov    %eax,(%esp)
085a9d4a +0x0a1a:  call   08506bb2 <_ZN10CInventory18insert_event_itemsERKSt6vectorISt4pairIiiESaIS2_EERS0_IiSaIiEE15eMoneyAddReason14eItemAddReasonbPKcSD_>  ; CInventory::insert_event_items(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&, std::vector<int, std::allocator<int> >&, eMoneyAddReason, eItemAddReason, bool, char const*, char const*)
085a9d4f +0x0a1f:  mov    %eax,-0x2c(%ebp)
085a9d52 +0x0a22:  cmpl   $0x0,-0x2c(%ebp)
085a9d56 +0x0a26:  jle    085a9d72 <+0xa42>
085a9d58 +0x0a28:  lea    -0xb0(%ebp),%eax
085a9d5e +0x0a2e:  mov    %eax,(%esp)
085a9d61 +0x0a31:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
085a9d66 +0x0a36:  cmp    $0x2,%eax
085a9d69 +0x0a39:  jbe    085a9d72 <+0xa42>
085a9d6b +0x0a3b:  mov    $0x1,%eax
085a9d70 +0x0a40:  jmp    085a9d77 <+0xa47>
085a9d72 +0x0a42:  mov    $0x0,%eax
085a9d77 +0x0a47:  test   %al,%al
085a9d79 +0x0a49:  je     085a9dde <+0xaae>
085a9d7b +0x0a4b:  movl   $0x0,-0x14(%ebp)
085a9d82 +0x0a52:  movl   $0x0,-0x10(%ebp)
085a9d89 +0x0a59:  jmp    085a9dd1 <+0xaa1>
085a9d8b +0x0a5b:  mov    -0x10(%ebp),%eax
085a9d8e +0x0a5e:  mov    %eax,0x4(%esp)
085a9d92 +0x0a62:  lea    -0xb0(%ebp),%eax
085a9d98 +0x0a68:  mov    %eax,(%esp)
085a9d9b +0x0a6b:  call   0808e1dc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x4c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x4c
085a9da0 +0x0a70:  mov    (%eax),%ebx
085a9da2 +0x0a72:  mov    0x8(%ebp),%eax
085a9da5 +0x0a75:  mov    %eax,(%esp)
085a9da8 +0x0a78:  call   08145780 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x203>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x203
085a9dad +0x0a7d:  mov    %ebx,0xc(%esp)
085a9db1 +0x0a81:  movl   $0x0,0x8(%esp)
085a9db9 +0x0a89:  movl   $0x1,0x4(%esp)
085a9dc1 +0x0a91:  mov    %eax,(%esp)
085a9dc4 +0x0a94:  call   0867c2d8 <_ZN5CUser14SendUpdateItemENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItem(CUser::eSendTarget, ENUM_ITEMSPACE, int)
085a9dc9 +0x0a99:  addl   $0x1,-0x14(%ebp)
085a9dcd +0x0a9d:  addl   $0x3,-0x10(%ebp)
085a9dd1 +0x0aa1:  mov    -0x2c(%ebp),%eax
085a9dd4 +0x0aa4:  cmp    -0x14(%ebp),%eax
085a9dd7 +0x0aa7:  seta   %al
085a9dda +0x0aaa:  test   %al,%al
085a9ddc +0x0aac:  jne    085a9d8b <+0xa5b>
085a9dde +0x0aae:  movl   $0x2c,0x4(%esp)
085a9de6 +0x0ab6:  mov    0x8(%ebp),%eax
085a9de9 +0x0ab9:  mov    %eax,(%esp)
085a9dec +0x0abc:  call   0859ae76 <_ZN6CParty13gen_timer_keyE13TIMER_MESSAGE>  ; CParty::gen_timer_key(TIMER_MESSAGE)
085a9df1 +0x0ac1:  mov    %eax,%esi
085a9df3 +0x0ac3:  mov    0x8(%ebp),%eax
085a9df6 +0x0ac6:  mov    %eax,(%esp)
085a9df9 +0x0ac9:  call   0822d846 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2ef0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2ef0
085a9dfe +0x0ace:  mov    %eax,%ebx
085a9e00 +0x0ad0:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
085a9e05 +0x0ad5:  movl   $0x2c,0x18(%esp)
085a9e0d +0x0add:  mov    %esi,0x14(%esp)
085a9e11 +0x0ae1:  movl   $0x2,0x10(%esp)
085a9e19 +0x0ae9:  movl   $0x2c,0xc(%esp)
085a9e21 +0x0af1:  mov    %ebx,0x8(%esp)
085a9e25 +0x0af5:  movl   $0x1,0x4(%esp)
085a9e2d +0x0afd:  mov    %eax,(%esp)
085a9e30 +0x0b00:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
085a9e35 +0x0b05:  lea    -0xc7(%ebp),%eax
085a9e3b +0x0b0b:  mov    %eax,(%esp)
085a9e3e +0x0b0e:  call   08374cba <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xec86>  ; global constructors keyed to CServerEvent::m_nExpRate+0xec86
085a9e43 +0x0b13:  lea    -0x4a(%ebp),%eax
085a9e46 +0x0b16:  mov    -0x34(%ebp),%edx
085a9e49 +0x0b19:  mov    %edx,0x4(%esp)
085a9e4d +0x0b1d:  mov    %eax,(%esp)
085a9e50 +0x0b20:  call   08643942 <_ZNK13TOD_UserState17getLastEnterLayerEv>  ; TOD_UserState::getLastEnterLayer() const
085a9e55 +0x0b25:  sub    $0x4,%esp
085a9e58 +0x0b28:  lea    -0x4a(%ebp),%eax
085a9e5b +0x0b2b:  mov    %eax,(%esp)
085a9e5e +0x0b2e:  call   0822ec40 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x42ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x42ea
085a9e63 +0x0b33:  movzwl %ax,%eax
085a9e66 +0x0b36:  mov    %eax,-0xb9(%ebp)
085a9e6c +0x0b3c:  movb   $0x0,-0xb5(%ebp)
085a9e73 +0x0b43:  lea    -0xc7(%ebp),%ebx
085a9e79 +0x0b49:  mov    &_ZN10GlobalData21s_statistic_proxy_mgrE,%eax
085a9e7e +0x0b4e:  movl   $0x0,0x4(%esp)
085a9e86 +0x0b56:  mov    %eax,(%esp)
085a9e89 +0x0b59:  call   08111cf8 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x120a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x120a
085a9e8e +0x0b5e:  movl   $0x17,0x8(%esp)
085a9e96 +0x0b66:  mov    %ebx,0x4(%esp)
085a9e9a +0x0b6a:  mov    %eax,(%esp)
085a9e9d +0x0b6d:  call   08472044 <_ZN21CStatisticServerProxy10SendPacketEPci>  ; CStatisticServerProxy::SendPacket(char*, int)
085a9ea2 +0x0b72:  jmp    085a9ebc <+0xb8c>
085a9ea4 +0x0b74:  mov    %edx,%ebx
085a9ea6 +0x0b76:  mov    %eax,%esi
085a9ea8 +0x0b78:  lea    -0xb0(%ebp),%eax
085a9eae +0x0b7e:  mov    %eax,(%esp)
085a9eb1 +0x0b81:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
085a9eb6 +0x0b86:  mov    %esi,%eax
085a9eb8 +0x0b88:  mov    %ebx,%edx
085a9eba +0x0b8a:  jmp    085a9ecc <+0xb9c>
085a9ebc +0x0b8c:  lea    -0xb0(%ebp),%eax
085a9ec2 +0x0b92:  mov    %eax,(%esp)
085a9ec5 +0x0b95:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
085a9eca +0x0b9a:  jmp    085a9ee4 <+0xbb4>
085a9ecc +0x0b9c:  mov    %edx,%ebx
085a9ece +0x0b9e:  mov    %eax,%esi
085a9ed0 +0x0ba0:  lea    -0xa4(%ebp),%eax
085a9ed6 +0x0ba6:  mov    %eax,(%esp)
085a9ed9 +0x0ba9:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
085a9ede +0x0bae:  mov    %esi,%eax
085a9ee0 +0x0bb0:  mov    %ebx,%edx
085a9ee2 +0x0bb2:  jmp    085a9ef4 <+0xbc4>
085a9ee4 +0x0bb4:  lea    -0xa4(%ebp),%eax
085a9eea +0x0bba:  mov    %eax,(%esp)
085a9eed +0x0bbd:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
085a9ef2 +0x0bc2:  jmp    085a9f0c <+0xbdc>
085a9ef4 +0x0bc4:  mov    %edx,%ebx
085a9ef6 +0x0bc6:  mov    %eax,%esi
085a9ef8 +0x0bc8:  lea    -0x104(%ebp),%eax
085a9efe +0x0bce:  mov    %eax,(%esp)
085a9f01 +0x0bd1:  call   0814ab4c <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x8eb>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x8eb
085a9f06 +0x0bd6:  mov    %esi,%eax
085a9f08 +0x0bd8:  mov    %ebx,%edx
085a9f0a +0x0bda:  jmp    085a9f1c <+0xbec>
085a9f0c +0x0bdc:  lea    -0x104(%ebp),%eax
085a9f12 +0x0be2:  mov    %eax,(%esp)
085a9f15 +0x0be5:  call   0814ab4c <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x8eb>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x8eb
085a9f1a +0x0bea:  jmp    085a9f37 <+0xc07>
085a9f1c +0x0bec:  mov    %edx,%ebx
085a9f1e +0x0bee:  mov    %eax,%esi
085a9f20 +0x0bf0:  lea    -0x14c(%ebp),%eax
085a9f26 +0x0bf6:  mov    %eax,(%esp)
085a9f29 +0x0bf9:  call   0814aaf0 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x88f>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x88f
085a9f2e +0x0bfe:  mov    %esi,%eax
085a9f30 +0x0c00:  mov    %ebx,%edx
085a9f32 +0x0c02:  jmp    085aa373 <+0x1043>
085a9f37 +0x0c07:  lea    -0x14c(%ebp),%eax
085a9f3d +0x0c0d:  mov    %eax,(%esp)
085a9f40 +0x0c10:  call   0814aaf0 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x88f>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x88f
085a9f45 +0x0c15:  jmp    085a9fbd <+0xc8d>
085a9f47 +0x0c17:  mov    0x8(%ebp),%eax
085a9f4a +0x0c1a:  mov    0xcac(%eax),%eax
085a9f50 +0x0c20:  mov    %eax,(%esp)
085a9f53 +0x0c23:  call   0836520a <_ZNK8CDungeon19isTournamentDungeonEv>  ; CDungeon::isTournamentDungeon() const
085a9f58 +0x0c28:  test   %al,%al
085a9f5a +0x0c2a:  je     085a9f8f <+0xc5f>
085a9f5c +0x0c2c:  mov    0x8(%ebp),%eax
085a9f5f +0x0c2f:  movb   $0x1,0x11a(%eax)
085a9f66 +0x0c36:  mov    0x8(%ebp),%eax
085a9f69 +0x0c39:  add    $0x17bc,%eax
085a9f6e +0x0c3e:  mov    %eax,(%esp)
085a9f71 +0x0c41:  call   08284820 <_ZN24CTournamentDungeonReward11ResetRewardEv>  ; CTournamentDungeonReward::ResetReward()
085a9f76 +0x0c46:  mov    0x8(%ebp),%eax
085a9f79 +0x0c49:  add    $0x17bc,%eax
085a9f7e +0x0c4e:  mov    %eax,0x4(%esp)
085a9f82 +0x0c52:  mov    0x8(%ebp),%eax
085a9f85 +0x0c55:  mov    %eax,(%esp)
085a9f88 +0x0c58:  call   085bcb40 <_ZN6CParty20MakeTournamentRewardER24CTournamentDungeonReward>  ; CParty::MakeTournamentReward(CTournamentDungeonReward&)
085a9f8d +0x0c5d:  jmp    085a9fbd <+0xc8d>
085a9f8f +0x0c5f:  movl   $0x1f,0x8(%esp)
085a9f97 +0x0c67:  movl   $0x0,0x4(%esp)
085a9f9f +0x0c6f:  lea    -0x68(%ebp),%eax
085a9fa2 +0x0c72:  mov    %eax,(%esp)
085a9fa5 +0x0c75:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085a9faa +0x0c7a:  movl   $0x1,0x4(%esp)
085a9fb2 +0x0c82:  lea    -0x68(%ebp),%eax
085a9fb5 +0x0c85:  mov    %eax,(%esp)
085a9fb8 +0x0c88:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085a9fbd +0x0c8d:  movl   $0x0,-0xc(%ebp)
085a9fc4 +0x0c94:  jmp    085aa230 <+0xf00>
085a9fc9 +0x0c99:  mov    -0xc(%ebp),%eax
085a9fcc +0x0c9c:  mov    %eax,0x4(%esp)
085a9fd0 +0x0ca0:  mov    0x8(%ebp),%eax
085a9fd3 +0x0ca3:  mov    %eax,(%esp)
085a9fd6 +0x0ca6:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
085a9fdb +0x0cab:  xor    $0x1,%eax
085a9fde +0x0cae:  test   %al,%al
085a9fe0 +0x0cb0:  jne    085aa22b <+0xefb>
085a9fe6 +0x0cb6:  mov    -0xc(%ebp),%edx
085a9fe9 +0x0cb9:  mov    0x8(%ebp),%ecx
085a9fec +0x0cbc:  mov    %edx,%eax
085a9fee +0x0cbe:  add    %eax,%eax
085a9ff0 +0x0cc0:  add    %edx,%eax
085a9ff2 +0x0cc2:  shl    $0x3,%eax
085a9ff5 +0x0cc5:  lea    (%ecx,%eax,1),%eax
085a9ff8 +0x0cc8:  add    $0x78,%eax
085a9ffb +0x0ccb:  mov    (%eax),%eax
085a9ffd +0x0ccd:  mov    %eax,(%esp)
085aa000 +0x0cd0:  call   0814aa5e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x7fd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x7fd
085aa005 +0x0cd5:  movl   $0x0,0xc(%esp)
085aa00d +0x0cdd:  mov    -0x48(%ebp),%edx
085aa010 +0x0ce0:  mov    %edx,0x8(%esp)
085aa014 +0x0ce4:  movl   $0x4,0x4(%esp)
085aa01c +0x0cec:  mov    %eax,(%esp)
085aa01f +0x0cef:  call   086abdb0 <_ZN9UserQuest15set_authen_dataE15QUEST_CONDITIONii>  ; UserQuest::set_authen_data(QUEST_CONDITION, int, int)
085aa024 +0x0cf4:  mov    0x8(%ebp),%eax
085aa027 +0x0cf7:  mov    0x330(%eax),%edx
085aa02d +0x0cfd:  mov    0x32c(%eax),%eax
085aa033 +0x0d03:  movl   $0x3e8,0x8(%esp)
085aa03b +0x0d0b:  movl   $0x0,0xc(%esp)
085aa043 +0x0d13:  mov    %eax,(%esp)
085aa046 +0x0d16:  mov    %edx,0x4(%esp)
085aa04a +0x0d1a:  call   08ae03b0 <__divdi3>
085aa04f +0x0d1f:  mov    %eax,%ebx
085aa051 +0x0d21:  mov    -0xc(%ebp),%edx
085aa054 +0x0d24:  mov    0x8(%ebp),%ecx
085aa057 +0x0d27:  mov    %edx,%eax
085aa059 +0x0d29:  add    %eax,%eax
085aa05b +0x0d2b:  add    %edx,%eax
085aa05d +0x0d2d:  shl    $0x3,%eax
085aa060 +0x0d30:  lea    (%ecx,%eax,1),%eax
085aa063 +0x0d33:  add    $0x78,%eax
085aa066 +0x0d36:  mov    (%eax),%eax
085aa068 +0x0d38:  mov    %eax,(%esp)
085aa06b +0x0d3b:  call   0814aa5e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x7fd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x7fd
085aa070 +0x0d40:  movl   $0x0,0xc(%esp)
085aa078 +0x0d48:  mov    %ebx,0x8(%esp)
085aa07c +0x0d4c:  movl   $0x2,0x4(%esp)
085aa084 +0x0d54:  mov    %eax,(%esp)
085aa087 +0x0d57:  call   086abdb0 <_ZN9UserQuest15set_authen_dataE15QUEST_CONDITIONii>  ; UserQuest::set_authen_data(QUEST_CONDITION, int, int)
085aa08c +0x0d5c:  mov    0x8(%ebp),%eax
085aa08f +0x0d5f:  mov    0xcac(%eax),%eax
085aa095 +0x0d65:  movzbl 0x89f(%eax),%eax
085aa09c +0x0d6c:  test   %al,%al
085aa09e +0x0d6e:  jne    085aa0d7 <+0xda7>
085aa0a0 +0x0d70:  mov    0x8(%ebp),%eax
085aa0a3 +0x0d73:  mov    0xcac(%eax),%eax
085aa0a9 +0x0d79:  mov    %eax,(%esp)
085aa0ac +0x0d7c:  call   0822b4fa <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xba4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xba4
085aa0b1 +0x0d81:  xor    $0x1,%eax
085aa0b4 +0x0d84:  test   %al,%al
085aa0b6 +0x0d86:  je     085aa0d7 <+0xda7>
085aa0b8 +0x0d88:  mov    0x8(%ebp),%eax
085aa0bb +0x0d8b:  mov    0xcac(%eax),%eax
085aa0c1 +0x0d91:  mov    %eax,(%esp)
085aa0c4 +0x0d94:  call   0836520a <_ZNK8CDungeon19isTournamentDungeonEv>  ; CDungeon::isTournamentDungeon() const
085aa0c9 +0x0d99:  xor    $0x1,%eax
085aa0cc +0x0d9c:  test   %al,%al
085aa0ce +0x0d9e:  je     085aa0d7 <+0xda7>
085aa0d0 +0x0da0:  mov    $0x1,%eax
085aa0d5 +0x0da5:  jmp    085aa0dc <+0xdac>
085aa0d7 +0x0da7:  mov    $0x0,%eax
085aa0dc +0x0dac:  test   %al,%al
085aa0de +0x0dae:  je     085aa106 <+0xdd6>
085aa0e0 +0x0db0:  mov    -0xc(%ebp),%edx
085aa0e3 +0x0db3:  mov    0x8(%ebp),%ecx
085aa0e6 +0x0db6:  mov    %edx,%eax
085aa0e8 +0x0db8:  add    %eax,%eax
085aa0ea +0x0dba:  add    %edx,%eax
085aa0ec +0x0dbc:  shl    $0x3,%eax
085aa0ef +0x0dbf:  lea    (%ecx,%eax,1),%eax
085aa0f2 +0x0dc2:  add    $0x78,%eax
085aa0f5 +0x0dc5:  mov    (%eax),%eax
085aa0f7 +0x0dc7:  lea    -0x68(%ebp),%edx
085aa0fa +0x0dca:  mov    %edx,0x4(%esp)
085aa0fe +0x0dce:  mov    %eax,(%esp)
085aa101 +0x0dd1:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
085aa106 +0x0dd6:  mov    0x8(%ebp),%eax
085aa109 +0x0dd9:  add    $0x2a4,%eax
085aa10e +0x0dde:  mov    %eax,(%esp)
085aa111 +0x0de1:  call   08ab150c <_ZN10secretshop16SECRET_SHOP_DATA6IsOpenEv>  ; secretshop::SECRET_SHOP_DATA::IsOpen()
085aa116 +0x0de6:  test   %al,%al
085aa118 +0x0de8:  je     085aa1e2 <+0xeb2>
085aa11e +0x0dee:  mov    0x8(%ebp),%eax
085aa121 +0x0df1:  mov    0xcac(%eax),%eax
085aa127 +0x0df7:  mov    %eax,(%esp)
085aa12a +0x0dfa:  call   080f9810 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x1c>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x1c
085aa12f +0x0dff:  mov    %eax,%ebx
085aa131 +0x0e01:  mov    0x8(%ebp),%eax
085aa134 +0x0e04:  mov    0xcac(%eax),%eax
085aa13a +0x0e0a:  mov    %eax,(%esp)
085aa13d +0x0e0d:  call   080fdcf0 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1c
085aa142 +0x0e12:  mov    %eax,%ecx
085aa144 +0x0e14:  mov    0x8(%ebp),%eax
085aa147 +0x0e17:  mov    0x2a4(%eax),%esi
085aa14d +0x0e1d:  mov    -0xc(%ebp),%eax
085aa150 +0x0e20:  shl    $0x2,%eax
085aa153 +0x0e23:  lea    0x0(,%eax,8),%edx
085aa15a +0x0e2a:  sub    %eax,%edx
085aa15c +0x0e2c:  lea    0x2a0(%edx),%eax
085aa162 +0x0e32:  add    0x8(%ebp),%eax
085aa165 +0x0e35:  lea    0x8(%eax),%edx
085aa168 +0x0e38:  mov    &_ZN10GlobalData13s_secret_shopE,%eax
085aa16d +0x0e3d:  mov    %ebx,0x10(%esp)
085aa171 +0x0e41:  mov    %ecx,0xc(%esp)
085aa175 +0x0e45:  mov    %esi,0x8(%esp)
085aa179 +0x0e49:  mov    %edx,0x4(%esp)
085aa17d +0x0e4d:  mov    %eax,(%esp)
085aa180 +0x0e50:  call   085fac68 <_ZN10secretshop11CSecretShop12LotteryItemsERSt6vectorINS_9SALE_INFOESaIS2_EEiii>  ; secretshop::CSecretShop::LotteryItems(std::vector<secretshop::SALE_INFO, std::allocator<secretshop::SALE_INFO> >&, int, int, int)
085aa185 +0x0e55:  mov    -0xc(%ebp),%edx
085aa188 +0x0e58:  mov    0x8(%ebp),%ecx
085aa18b +0x0e5b:  mov    %edx,%eax
085aa18d +0x0e5d:  add    %eax,%eax
085aa18f +0x0e5f:  add    %edx,%eax
085aa191 +0x0e61:  shl    $0x3,%eax
085aa194 +0x0e64:  lea    (%ecx,%eax,1),%eax
085aa197 +0x0e67:  add    $0x78,%eax
085aa19a +0x0e6a:  mov    (%eax),%eax
085aa19c +0x0e6c:  mov    %eax,0x4(%esp)
085aa1a0 +0x0e70:  mov    0x8(%ebp),%eax
085aa1a3 +0x0e73:  mov    %eax,(%esp)
085aa1a6 +0x0e76:  call   085b9ecc <_ZN6CParty22SendSecretShopItemListEP5CUser>  ; CParty::SendSecretShopItemList(CUser*)
085aa1ab +0x0e7b:  mov    -0xc(%ebp),%edx
085aa1ae +0x0e7e:  mov    0x8(%ebp),%ecx
085aa1b1 +0x0e81:  mov    %edx,%eax
085aa1b3 +0x0e83:  add    %eax,%eax
085aa1b5 +0x0e85:  add    %edx,%eax
085aa1b7 +0x0e87:  shl    $0x3,%eax
085aa1ba +0x0e8a:  lea    (%ecx,%eax,1),%eax
085aa1bd +0x0e8d:  add    $0x78,%eax
085aa1c0 +0x0e90:  mov    (%eax),%eax
085aa1c2 +0x0e92:  movl   $0x0,0xc(%esp)
085aa1ca +0x0e9a:  movl   $0x0,0x8(%esp)
085aa1d2 +0x0ea2:  movl   $0xd,0x4(%esp)
085aa1da +0x0eaa:  mov    %eax,(%esp)
085aa1dd +0x0ead:  call   08122390 <_ZN8APSystem9CUserProc24ClearActionAndSendtoUserEP5CUserNS_17_ActionGroupIndexEi16ENUM_PACKETCLASS>  ; APSystem::CUserProc::ClearActionAndSendtoUser(CUser*, APSystem::_ActionGroupIndex, int, ENUM_PACKETCLASS)
085aa1e2 +0x0eb2:  mov    -0xc(%ebp),%edx
085aa1e5 +0x0eb5:  mov    0x8(%ebp),%ecx
085aa1e8 +0x0eb8:  mov    %edx,%eax
085aa1ea +0x0eba:  add    %eax,%eax
085aa1ec +0x0ebc:  add    %edx,%eax
085aa1ee +0x0ebe:  shl    $0x3,%eax
085aa1f1 +0x0ec1:  lea    (%ecx,%eax,1),%eax
085aa1f4 +0x0ec4:  add    $0x78,%eax
085aa1f7 +0x0ec7:  mov    (%eax),%eax
085aa1f9 +0x0ec9:  mov    %eax,(%esp)
085aa1fc +0x0ecc:  call   0822fc6e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5318>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5318
085aa201 +0x0ed1:  test   %eax,%eax
085aa203 +0x0ed3:  setg   %al
085aa206 +0x0ed6:  test   %al,%al
085aa208 +0x0ed8:  je     085aa22c <+0xefc>
085aa20a +0x0eda:  mov    -0xc(%ebp),%edx
085aa20d +0x0edd:  mov    0x8(%ebp),%ecx
085aa210 +0x0ee0:  mov    %edx,%eax
085aa212 +0x0ee2:  add    %eax,%eax
085aa214 +0x0ee4:  add    %edx,%eax
085aa216 +0x0ee6:  shl    $0x3,%eax
085aa219 +0x0ee9:  lea    (%ecx,%eax,1),%eax
085aa21c +0x0eec:  add    $0x78,%eax
085aa21f +0x0eef:  mov    (%eax),%eax
085aa221 +0x0ef1:  mov    %eax,(%esp)
085aa224 +0x0ef4:  call   085bfd36 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x1294>  ; global constructors keyed to CParty::cMember::cMember()+0x1294
085aa229 +0x0ef9:  jmp    085aa22c <+0xefc>
085aa22b +0x0efb:  nop
085aa22c +0x0efc:  addl   $0x1,-0xc(%ebp)
085aa230 +0x0f00:  cmpl   $0x3,-0xc(%ebp)
085aa234 +0x0f04:  setle  %al
085aa237 +0x0f07:  test   %al,%al
085aa239 +0x0f09:  jne    085a9fc9 <+0xc99>
085aa23f +0x0f0f:  mov    0x8(%ebp),%eax
085aa242 +0x0f12:  mov    %eax,(%esp)
085aa245 +0x0f15:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
085aa24a +0x0f1a:  mov    %eax,-0x44(%ebp)
085aa24d +0x0f1d:  cmpl   $0x1,-0x44(%ebp)
085aa251 +0x0f21:  jne    085aa278 <+0xf48>
085aa253 +0x0f23:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085aa258 +0x0f28:  mov    %eax,(%esp)
085aa25b +0x0f2b:  call   0836378c <_ZN12CDataManager27get_hellparty_script_valuesEv>  ; CDataManager::get_hellparty_script_values()
085aa260 +0x0f30:  mov    0x8(%eax),%eax
085aa263 +0x0f33:  mov    0x8(%ebp),%edx
085aa266 +0x0f36:  add    $0x32c,%edx
085aa26c +0x0f3c:  mov    %eax,0x4(%esp)
085aa270 +0x0f40:  mov    %edx,(%esp)
085aa273 +0x0f43:  call   0822d7b2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2e5c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2e5c
085aa278 +0x0f48:  cmpl   $0x1,-0x44(%ebp)
085aa27c +0x0f4c:  je     085aa2eb <+0xfbb>
085aa27e +0x0f4e:  mov    0x8(%ebp),%eax
085aa281 +0x0f51:  movzbl 0xcee(%eax),%eax
085aa288 +0x0f58:  xor    $0x1,%eax
085aa28b +0x0f5b:  test   %al,%al
085aa28d +0x0f5d:  je     085aa2eb <+0xfbb>
085aa28f +0x0f5f:  mov    0x8(%ebp),%eax
085aa292 +0x0f62:  movzbl 0xcef(%eax),%eax
085aa299 +0x0f69:  xor    $0x1,%eax
085aa29c +0x0f6c:  test   %al,%al
085aa29e +0x0f6e:  je     085aa2eb <+0xfbb>
085aa2a0 +0x0f70:  mov    0x8(%ebp),%eax
085aa2a3 +0x0f73:  movzbl 0xcdc(%eax),%eax
085aa2aa +0x0f7a:  xor    $0x1,%eax
085aa2ad +0x0f7d:  test   %al,%al
085aa2af +0x0f7f:  je     085aa2eb <+0xfbb>
085aa2b1 +0x0f81:  mov    -0x44(%ebp),%eax
085aa2b4 +0x0f84:  lea    -0x1(%eax),%esi
085aa2b7 +0x0f87:  mov    0x8(%ebp),%eax
085aa2ba +0x0f8a:  mov    %eax,(%esp)
085aa2bd +0x0f8d:  call   085b59ca <_ZN6CParty25get_rate_level_differenceEv>  ; CParty::get_rate_level_difference()
085aa2c2 +0x0f92:  mov    %eax,%ebx
085aa2c4 +0x0f94:  mov    0x8(%ebp),%eax
085aa2c7 +0x0f97:  add    $0xb24,%eax
085aa2cc +0x0f9c:  mov    %eax,(%esp)
085aa2cf +0x0f9f:  call   080f981c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x28>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x28
085aa2d4 +0x0fa4:  mov    %esi,0xc(%esp)
085aa2d8 +0x0fa8:  mov    %ebx,0x8(%esp)
085aa2dc +0x0fac:  mov    %eax,0x4(%esp)
085aa2e0 +0x0fb0:  mov    0x8(%ebp),%eax
085aa2e3 +0x0fb3:  mov    %eax,(%esp)
085aa2e6 +0x0fb6:  call   085b58ac <_ZN6CParty19cal_hellparty_valueEiii>  ; CParty::cal_hellparty_value(int, int, int)
085aa2eb +0x0fbb:  mov    0x8(%ebp),%eax
085aa2ee +0x0fbe:  add    $0xc7c,%eax
085aa2f3 +0x0fc3:  movl   $&_ZZN6CParty12ClearDungeonEvE19__PRETTY_FUNCTION__,0x4(%esp)
085aa2fb +0x0fcb:  mov    %eax,(%esp)
085aa2fe +0x0fce:  call   082fed32 <_ZN19CDungeonClearTracer5TraceEPKc>  ; CDungeonClearTracer::Trace(char const*)
085aa303 +0x0fd3:  mov    0x8(%ebp),%eax
085aa306 +0x0fd6:  movb   $0x1,0x11a(%eax)
085aa30d +0x0fdd:  mov    0x8(%ebp),%eax
085aa310 +0x0fe0:  mov    %eax,0x4(%esp)
085aa314 +0x0fe4:  lea    -0x70(%ebp),%eax
085aa317 +0x0fe7:  mov    %eax,(%esp)
085aa31a +0x0fea:  call   08469976 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x59>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x59
085aa31f +0x0fef:  lea    -0x8c(%ebp),%eax
085aa325 +0x0ff5:  mov    %eax,(%esp)
085aa328 +0x0ff8:  call   084699c6 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0xa9>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0xa9
085aa32d +0x0ffd:  lea    -0x8c(%ebp),%eax
085aa333 +0x1003:  mov    %eax,0x10(%esp)
085aa337 +0x1007:  mov    -0x70(%ebp),%eax
085aa33a +0x100a:  mov    -0x6c(%ebp),%edx
085aa33d +0x100d:  mov    %eax,0x8(%esp)
085aa341 +0x1011:  mov    %edx,0xc(%esp)
085aa345 +0x1015:  movl   $0xa,0x4(%esp)
085aa34d +0x101d:  mov    0x8(%ebp),%eax
085aa350 +0x1020:  mov    %eax,(%esp)
085aa353 +0x1023:  call   0859b8fa <_ZN6CParty17set_random_rewardEN10QuickParty14RandomBuffTypeENS0_16RewardData_ParamERNS0_17RewardData_ResultE>  ; CParty::set_random_reward(QuickParty::RandomBuffType, QuickParty::RewardData_Param, QuickParty::RewardData_Result&)
085aa358 +0x1028:  lea    -0x8c(%ebp),%eax
085aa35e +0x102e:  mov    %eax,(%esp)
085aa361 +0x1031:  call   0846998e <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x71>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x71
085aa366 +0x1036:  lea    -0x68(%ebp),%eax
085aa369 +0x1039:  mov    %eax,(%esp)
085aa36c +0x103c:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085aa371 +0x1041:  jmp    085aa38f <+0x105f>
085aa373 +0x1043:  mov    %edx,%ebx
085aa375 +0x1045:  mov    %eax,%esi
085aa377 +0x1047:  lea    -0x68(%ebp),%eax
085aa37a +0x104a:  mov    %eax,(%esp)
085aa37d +0x104d:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085aa382 +0x1052:  mov    %esi,%eax
085aa384 +0x1054:  mov    %ebx,%edx
085aa386 +0x1056:  mov    %eax,(%esp)
085aa389 +0x1059:  call   08ae3750 <_Unwind_Resume>
085aa38e +0x105e:  nop
085aa38f +0x105f:  lea    -0x8(%ebp),%esp
085aa392 +0x1062:  add    $0x0,%esp
085aa395 +0x1065:  pop    %ebx
085aa396 +0x1066:  pop    %esi
085aa397 +0x1067:  pop    %ebp
085aa398 +0x1068:  ret
085aa399 +0x1069:  nop
```

## 反编译 C

```c
// CParty::ClearDungeon @ 0x85a9330

/* CParty::ClearDungeon() */

void __thiscall CParty::ClearDungeon(CParty *this)

{
  CDungeon *pCVar1;
  bool bVar2;
  char cVar3;
  short sVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  TimerQueue *pTVar7;
  uint uVar8;
  uint uVar9;
  CUser *pCVar10;
  size_t sVar11;
  CUserCharacInfo *pCVar12;
  GameWorld *this_00;
  CItemGeneratorMgr *pCVar13;
  int *piVar14;
  CDataManager *pCVar15;
  CInventory *pCVar16;
  undefined4 *puVar17;
  CStatisticServerProxy *this_01;
  UserQuest *pUVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  stGenerateRefData_t local_150 [52];
  undefined1 local_11c;
  undefined1 local_11b;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  stGenerateResult_t local_108 [48];
  PacketGuard local_d8 [13];
  Packet_TowerOfDespair_Statistic_GTS local_cb [14];
  uint local_bd;
  undefined1 local_b9;
  vector<int,std::allocator<int>> local_b4 [12];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_a8 [12];
  PacketGuard local_9c [12];
  RewardData_Result local_90 [28];
  undefined4 local_74;
  undefined4 local_70;
  PacketGuard local_6c [12];
  TOD_Layer local_60 [4];
  TOD_Layer local_5c [2];
  TOD_Layer local_5a [2];
  undefined4 local_58;
  undefined4 local_54;
  TOD_Layer local_4e [2];
  undefined4 local_4c;
  int local_48;
  int local_44;
  undefined4 local_40;
  int local_3c;
  TOD_UserState *local_38;
  int local_34;
  uint local_30;
  char *local_2c;
  int local_28;
  uint local_24;
  int local_20;
  CItem *local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  
  if (this[0x11a] != (CParty)0x0) {
    return;
  }
  if (*(int *)(this + 0xcd8) != 1) {
    uVar8 = CSystemTime::getCurTickCount((CSystemTime *)GlobalData::s_systemTime_);
    uVar9 = uVar8 - *(uint *)(this + 0x34c);
    *(uint *)(this + 0x32c) = uVar9 - *(uint *)(this + 0x358);
    *(uint *)(this + 0x330) =
         ((-(uint)(uVar8 < *(uint *)(this + 0x34c)) - *(int *)(this + 0x350)) -
         *(int *)(this + 0x35c)) - (uint)(uVar9 < *(uint *)(this + 0x358));
    local_4c = get_member_count(this);
    if (*(int *)(this + 0xcac) != 0) {
      local_40 = 100;
      for (local_3c = 0; local_3c < 4; local_3c = local_3c + 1) {
        cVar3 = _checkValidUser(this,local_3c);
        if (cVar3 == '\x01') {
          if (*(char *)(*(int *)(this + 0xcac) + 0x87a) == '\0') {
            iVar19 = CDungeon::get_index(*(CDungeon **)(this + 0xcac));
            if (iVar19 == 100) {
              APSystem::CUserProc::ClearActionAndSendtoUser
                        (*(undefined4 *)(this + local_3c * 0x18 + 0x78),0x19,0,0);
            }
            else if (*(char *)(*(int *)(this + 0xcac) + 0x89c) == '\0') {
              cVar3 = CDungeon::get_dimension_possible(*(CDungeon **)(this + 0xcac));
              if ('\0' < cVar3) {
                APSystem::CUserProc::ClearActionAndSendtoUser
                          (*(undefined4 *)(this + local_3c * 0x18 + 0x78),0x1c,0,0);
              }
            }
            else {
              APSystem::CUserProc::ClearActionAndSendtoUser
                        (*(undefined4 *)(this + local_3c * 0x18 + 0x78),0x1b,0,0);
            }
          }
          else {
            APSystem::CUserProc::ClearActionAndSendtoUser
                      (*(undefined4 *)(this + local_3c * 0x18 + 0x78),0x18,0,0);
          }
          cVar3 = CUser::IsUsedCoinInDungeon(*(CUser **)(this + local_3c * 0x18 + 0x78));
          if (cVar3 != '\x01') {
            APSystem::CUserProc::ClearActionAndSendtoUser
                      (*(undefined4 *)(this + local_3c * 0x18 + 0x78),0xf,0,0);
          }
        }
      }
    }
    PacketGuard::PacketGuard(local_6c);
    if (*(char *)(*(int *)(this + 0xcac) + 0x89f) < '\x01') {
      cVar3 = CDungeon::isTowerOfDespairDungeon(*(CDungeon **)(this + 0xcac));
      if (cVar3 == '\0') {
        cVar3 = CDungeon::isTournamentDungeon(*(CDungeon **)(this + 0xcac));
        if (cVar3 == '\0') {
          InterfacePacketBuf::put_header((InterfacePacketBuf *)local_6c,0,0x1f);
          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_6c,true);
        }
        else {
          this[0x11a] = (CParty)0x1;
          CTournamentDungeonReward::ResetReward((CTournamentDungeonReward *)(this + 0x17bc));
          MakeTournamentReward(this,(CTournamentDungeonReward *)(this + 0x17bc));
        }
      }
      else {
        this[0x11a] = (CParty)0x1;
        pCVar10 = (CUser *)getManager(this);
        local_38 = (TOD_UserState *)CUser::GetCharacExpandData(pCVar10,0xd);
        TOD_UserState::ClearLayer(local_38);
        local_34 = 5;
        *(undefined4 *)(this + 0x17b4) = 0xffffffff;
        *(undefined4 *)(this + 0x17b8) = 0;
        TOD_UserState::getLastEnterLayer();
        uVar8 = TOD_Layer::GetLayer(local_60);
        iVar19 = TowerOfDespairMgr::Get_APCIndexByLayer
                           (GlobalData::s_pTowerOfDespairMgr,uVar8 & 0xffff);
        if (iVar19 != -1) {
          TOD_UserState::getLastEnterLayer();
          local_2c = (char *)TowerOfDespairMgr::Get_APCNameByLayer
                                       ((TOD_Layer *)GlobalData::s_pTowerOfDespairMgr);
          if ((local_2c != (char *)0x0) && (*local_2c != '\0')) {
            PacketGuard::PacketGuard(local_d8);
                    /* try { // try from 085a9908 to 085a9a58 has its CatchHandler @ 085a9a5b */
            InterfacePacketBuf::put_header((InterfacePacketBuf *)local_d8,0,0x56);
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_d8,8);
            TOD_UserState::getLastEnterLayer();
            uVar8 = TOD_Layer::GetLayer(local_5c);
            InterfacePacketBuf::put_short((InterfacePacketBuf *)local_d8,uVar8 & 0xffff);
            sVar11 = strlen(local_2c);
            InterfacePacketBuf::put_int((InterfacePacketBuf *)local_d8,sVar11);
            sVar11 = strlen(local_2c);
            InterfacePacketBuf::put_str((InterfacePacketBuf *)local_d8,local_2c,sVar11);
            pCVar12 = (CUserCharacInfo *)getManager(this);
            local_2c = (char *)CUserCharacInfo::getCurCharacName(pCVar12);
            if (local_2c == (char *)0x0) {
              InterfacePacketBuf::put_int((InterfacePacketBuf *)local_d8,5);
              InterfacePacketBuf::put_str((InterfacePacketBuf *)local_d8,"Neople",6);
            }
            else {
              sVar11 = strlen(local_2c);
              InterfacePacketBuf::put_int((InterfacePacketBuf *)local_d8,sVar11);
              sVar11 = strlen(local_2c);
              InterfacePacketBuf::put_str((InterfacePacketBuf *)local_d8,local_2c,sVar11);
            }
            InterfacePacketBuf::finalize((InterfacePacketBuf *)local_d8,true);
            this_00 = (GameWorld *)G_GameWorld();
            GameWorld::send_all(this_00,local_d8);
                    /* try { // try from 085a9a7f to 085a9af7 has its CatchHandler @ 085aa373 */
            PacketGuard::~PacketGuard(local_d8);
          }
          local_34 = 9;
          *(undefined4 *)(this + 0x17b4) = 0x4e4;
          *(undefined4 *)(this + 0x17b8) = 1;
        }
        TOD_UserState::getLastEnterLayer();
        sVar4 = TOD_Layer::GetLayer(local_5a);
        if (sVar4 == 100) {
          *(undefined4 *)(this + 0x17b4) = 0xcf2;
          *(undefined4 *)(this + 0x17b8) = 1;
        }
        WongWork::stGenerateRefData_t::stGenerateRefData_t(local_150);
                    /* try { // try from 085a9b01 to 085a9b05 has its CatchHandler @ 085a9f1c */
        WongWork::stGenerateResult_t::stGenerateResult_t(local_108);
                    /* try { // try from 085a9b0f to 085a9b13 has its CatchHandler @ 085a9ef4 */
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_a8);
        local_11b = 0;
        local_11c = 0x46;
        local_118 = 0x3f800000;
        local_110 = *(undefined4 *)(this + 0xcac);
        local_114 = 0;
        for (local_28 = 0; local_28 < local_34; local_28 = local_28 + 1) {
                    /* try { // try from 085a9b4f to 085a9cf0 has its CatchHandler @ 085a9ecc */
          pCVar15 = (CDataManager *)G_CDataManager();
          pCVar13 = (CItemGeneratorMgr *)CDataManager::getItemGenerator(pCVar15);
          piVar14 = (int *)WongWork::CItemGeneratorMgr::getGenerator(pCVar13,2);
          (**(code **)(*piVar14 + 8))(piVar14,local_150,local_108);
        }
        std::pair<int,int>::pair((pair<int,int> *)&local_58);
        uVar5 = std::vector<Inven_Item,std::allocator<Inven_Item>>::size
                          ((vector<Inven_Item,std::allocator<Inven_Item>> *)local_108);
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::resize
                  (local_a8,uVar5,local_58,local_54);
        local_24 = 0;
        while (uVar8 = std::vector<Inven_Item,std::allocator<Inven_Item>>::size
                                 ((vector<Inven_Item,std::allocator<Inven_Item>> *)local_108),
              local_24 < uVar8) {
          local_20 = std::vector<Inven_Item,std::allocator<Inven_Item>>::operator[]
                               ((vector<Inven_Item,std::allocator<Inven_Item>> *)local_108,local_24)
          ;
          iVar19 = *(int *)(local_20 + 2);
          pCVar15 = (CDataManager *)G_CDataManager();
          local_1c = (CItem *)CDataManager::find_item(pCVar15,iVar19);
          puVar17 = (undefined4 *)
                    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                              (local_a8,local_24);
          *puVar17 = *(undefined4 *)(local_20 + 2);
          cVar3 = CItem::is_stackable(local_1c);
          if (cVar3 == '\0') {
            iVar19 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                               (local_a8,local_24);
            *(undefined4 *)(iVar19 + 4) = 1;
          }
          else {
            iVar19 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                               (local_a8,local_24);
            *(undefined4 *)(iVar19 + 4) = *(undefined4 *)(local_20 + 7);
          }
          local_24 = local_24 + 1;
        }
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator=
                  ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x17a8),
                   (vector *)local_a8);
        if (*(int *)(this + 0x17b4) != -1) {
          std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                    (local_a8,this + 0x17b4);
        }
        std::vector<int,std::allocator<int>>::vector(local_b4);
        local_30 = 0;
        pCVar12 = (CUserCharacInfo *)getManager(this);
        pCVar16 = (CInventory *)CUserCharacInfo::getCurCharacInvenW(pCVar12);
                    /* try { // try from 085a9d4a to 085a9ea1 has its CatchHandler @ 085a9ea4 */
        local_30 = CInventory::insert_event_items
                             (pCVar16,local_a8,local_b4,0x1f,0x37,1,"game_server_msg_191",
                              "game_server_msg_192");
        if (((int)local_30 < 1) ||
           (uVar8 = std::vector<int,std::allocator<int>>::size(local_b4), uVar8 < 3)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          local_14 = 0;
          for (local_18 = 0; local_18 < local_30; local_18 = local_18 + 1) {
            puVar17 = (undefined4 *)
                      std::vector<int,std::allocator<int>>::operator[](local_b4,local_14);
            uVar5 = *puVar17;
            pCVar10 = (CUser *)getManager(this);
            CUser::SendUpdateItem(pCVar10,1,0,uVar5);
            local_14 = local_14 + 3;
          }
        }
        uVar5 = gen_timer_key(this,0x2c);
        uVar6 = GetPartyIndex(this);
        pTVar7 = (TimerQueue *)G_TimerQueue();
        TimerQueue::InsertTimer(pTVar7,1,uVar6,0x2c,2,uVar5,0x2c);
        Packet_TowerOfDespair_Statistic_GTS::Packet_TowerOfDespair_Statistic_GTS(local_cb);
        TOD_UserState::getLastEnterLayer();
        local_bd = TOD_Layer::GetLayer(local_4e);
        local_bd = local_bd & 0xffff;
        local_b9 = 0;
        this_01 = (CStatisticServerProxy *)
                  CServerProxyMgr<CStatisticServerProxy>::GetServerProxy
                            (GlobalData::s_statistic_proxy_mgr,0);
        CStatisticServerProxy::SendPacket(this_01,(char *)local_cb,0x17);
                    /* try { // try from 085a9ec5 to 085a9ec9 has its CatchHandler @ 085a9ecc */
        std::vector<int,std::allocator<int>>::~vector(local_b4);
                    /* try { // try from 085a9eed to 085a9ef1 has its CatchHandler @ 085a9ef4 */
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_a8);
                    /* try { // try from 085a9f15 to 085a9f19 has its CatchHandler @ 085a9f1c */
        WongWork::stGenerateResult_t::~stGenerateResult_t(local_108);
                    /* try { // try from 085a9f40 to 085aa357 has its CatchHandler @ 085aa373 */
        WongWork::stGenerateRefData_t::~stGenerateRefData_t(local_150);
      }
    }
    else {
      pCVar1 = *(CDungeon **)(this + 0xcac);
      sVar4 = CBattle_Field::CBloodRound::getBloodRoundOrder((CBloodRound *)(this + 0xdd0));
                    /* try { // try from 085a978d to 085a98ee has its CatchHandler @ 085aa373 */
      CBattle_Field::CBloodClearRewardData::onFinishBloodRound
                ((CBloodClearRewardData *)(this + 0xddc),true,sVar4,this,pCVar1);
      uVar5 = gen_timer_key(this,0x22);
      uVar6 = GetPartyIndex(this);
      pTVar7 = (TimerQueue *)G_TimerQueue();
      TimerQueue::InsertTimer(pTVar7,1,uVar6,0x22,5,uVar5,0x22);
    }
    for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
      cVar3 = _checkValidUser(this,local_10);
      if (cVar3 == '\x01') {
        pUVar18 = (UserQuest *)CUser::getCurCharacQuestW(*(CUser **)(this + local_10 * 0x18 + 0x78))
        ;
        UserQuest::set_authen_data(pUVar18,4,local_4c,0);
        uVar5 = __divdi3(*(undefined4 *)(this + 0x32c),*(undefined4 *)(this + 0x330),1000,0);
        pUVar18 = (UserQuest *)CUser::getCurCharacQuestW(*(CUser **)(this + local_10 * 0x18 + 0x78))
        ;
        UserQuest::set_authen_data(pUVar18,2,uVar5,0);
        if (((*(char *)(*(int *)(this + 0xcac) + 0x89f) == '\0') &&
            (cVar3 = CDungeon::isTowerOfDespairDungeon(*(CDungeon **)(this + 0xcac)),
            cVar3 != '\x01')) &&
           (cVar3 = CDungeon::isTournamentDungeon(*(CDungeon **)(this + 0xcac)), cVar3 != '\x01')) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if (bVar2) {
          CUser::Send(*(CUser **)(this + local_10 * 0x18 + 0x78),local_6c);
        }
        cVar3 = secretshop::SECRET_SHOP_DATA::IsOpen((SECRET_SHOP_DATA *)(this + 0x2a4));
        if (cVar3 != '\0') {
          iVar19 = CDungeon::get_standard_level(*(CDungeon **)(this + 0xcac));
          iVar20 = CDungeon::get_index(*(CDungeon **)(this + 0xcac));
          secretshop::CSecretShop::LotteryItems
                    (GlobalData::s_secret_shop,(vector *)(this + local_10 * 0x1c + 0x2a8),
                     *(int *)(this + 0x2a4),iVar20,iVar19);
          SendSecretShopItemList(this,*(CUser **)(this + local_10 * 0x18 + 0x78));
          APSystem::CUserProc::ClearActionAndSendtoUser
                    (*(undefined4 *)(this + local_10 * 0x18 + 0x78),0xd,0,0);
        }
        iVar19 = CUser::getBreakAwayDungeonClearCnt(*(CUser **)(this + local_10 * 0x18 + 0x78));
        if (0 < iVar19) {
          CUser::subBreakAwayDungeonClearCnt(*(CUser **)(this + local_10 * 0x18 + 0x78));
        }
      }
    }
    local_48 = get_member_count(this);
    if (local_48 == 1) {
      G_CDataManager();
      iVar19 = CDataManager::get_hellparty_script_values();
      BattleData::SetHellPartyValueTotal((BattleData *)(this + 0x32c),*(int *)(iVar19 + 8));
    }
    if (((local_48 != 1) && (this[0xcee] != (CParty)0x1)) &&
       ((this[0xcef] != (CParty)0x1 && (this[0xcdc] != (CParty)0x1)))) {
      iVar19 = local_48 + -1;
      iVar20 = get_rate_level_difference(this);
      iVar21 = CBattle_Field::get_dungeon_diff((CBattle_Field *)(this + 0xb24));
      cal_hellparty_value(this,iVar21,iVar20,iVar19);
    }
    CDungeonClearTracer::Trace((CDungeonClearTracer *)(this + 0xc7c),"void CParty::ClearDungeon()");
    this[0x11a] = (CParty)0x1;
    QuickParty::RewardData_Param::RewardData_Param((RewardData_Param *)&local_74,this);
    QuickParty::RewardData_Result::RewardData_Result(local_90);
    set_random_reward(this,10,local_74,local_70,local_90);
    QuickParty::RewardData_Result::clear(local_90);
    PacketGuard::~PacketGuard(local_6c);
    return;
  }
  for (local_44 = 0; local_44 < 4; local_44 = local_44 + 1) {
    cVar3 = _checkValidUser(this,local_44);
    if (cVar3 == '\x01') {
      OnSuccessedDungeonClear(this,*(CUser **)(this + local_44 * 0x18 + 0x78));
    }
  }
  SetEPLPState(this,'\x02');
  uVar5 = gen_timer_key(this,0x15);
  uVar6 = GetPartyIndex(this);
  pTVar7 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar7,1,uVar6,0x15,0x3c,uVar5,0);
  set_state(this,'\x01');
  PacketGuard::PacketGuard(local_9c);
                    /* try { // try from 085a945d to 085a94a4 has its CatchHandler @ 085a94c2 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_9c,0,0xfe);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_9c,true);
  send_to_party(this,local_9c);
  CDungeonClearTracer::Trace((CDungeonClearTracer *)(this + 0xc7c),"void CParty::ClearDungeon()");
  this[0x11a] = (CParty)0x1;
  PacketGuard::~PacketGuard(local_9c);
  return;
}
```
