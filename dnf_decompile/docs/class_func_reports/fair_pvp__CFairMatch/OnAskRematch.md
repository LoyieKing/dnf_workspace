# OnAskRematch

`_ZN8fair_pvp10CFairMatch12OnAskRematchEP5CUseri`

`fair_pvp::CFairMatch::OnAskRematch(CUser*, int)`

| 类 | 地址 |
|---|---|
| `fair_pvp::CFairMatch` | `0x085664a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085664a0  _ZN8fair_pvp10CFairMatch12OnAskRematchEP5CUseri
#           fair_pvp::CFairMatch::OnAskRematch(CUser*, int)
# range [0x085664a0, 0x0856694b]
085664a0 +0x000:  push   %ebp
085664a1 +0x001:  mov    %esp,%ebp
085664a3 +0x003:  push   %edi
085664a4 +0x004:  push   %esi
085664a5 +0x005:  push   %ebx
085664a6 +0x006:  sub    $0x6c,%esp
085664a9 +0x009:  mov    0xc(%ebp),%eax
085664ac +0x00c:  mov    %eax,(%esp)
085664af +0x00f:  call   0865518e <_ZN5CUser10GetPVPRoomEv>  ; CUser::GetPVPRoom()
085664b4 +0x014:  mov    %eax,-0x24(%ebp)
085664b7 +0x017:  cmpl   $0x0,-0x24(%ebp)
085664bb +0x01b:  jne    085664ee <+0x4e>
085664bd +0x01d:  movl   $"error GetPVPRoom",0x10(%esp)
085664c5 +0x025:  movl   $0x1058,0xc(%esp)
085664cd +0x02d:  movl   $&_ZZN8fair_pvp10CFairMatch12OnAskRematchEP5CUseriE19__PRETTY_FUNCTION__,0x8(%esp)
085664d5 +0x035:  movl   $"MatchingSystem.cpp",0x4(%esp)
085664dd +0x03d:  movl   $0x1,(%esp)
085664e4 +0x044:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
085664e9 +0x049:  jmp    08566943 <+0x4a3>
085664ee +0x04e:  mov    -0x24(%ebp),%eax
085664f1 +0x051:  mov    %eax,(%esp)
085664f4 +0x054:  call   0822d9cc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x3076>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x3076
085664f9 +0x059:  mov    %eax,-0x4c(%ebp)
085664fc +0x05c:  mov    -0x24(%ebp),%eax
085664ff +0x05f:  mov    %eax,(%esp)
08566502 +0x062:  call   0822d994 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x303e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x303e
08566507 +0x067:  mov    %eax,%edi
08566509 +0x069:  mov    0xc(%ebp),%eax
0856650c +0x06c:  mov    %eax,(%esp)
0856650f +0x06f:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
08566514 +0x074:  mov    %eax,%esi
08566516 +0x076:  mov    0xc(%ebp),%eax
08566519 +0x079:  mov    %eax,(%esp)
0856651c +0x07c:  call   08101072 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x94>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x94
08566521 +0x081:  mov    %eax,%ebx
08566523 +0x083:  movl   $0x0,0x10(%esp)
0856652b +0x08b:  movl   $0x0,0xc(%esp)
08566533 +0x093:  movl   $0x105c,0x8(%esp)
0856653b +0x09b:  movl   $&_ZZN8fair_pvp10CFairMatch12OnAskRematchEP5CUseriE19__PRETTY_FUNCTION__,0x4(%esp)
08566543 +0x0a3:  lea    -0x34(%ebp),%eax
08566546 +0x0a6:  mov    %eax,(%esp)
08566549 +0x0a9:  call   0854fd3c <_ZN10CSwitchLogC1EPKciii>  ; CSwitchLog::CSwitchLog(char const*, int, int, int)
0856654e +0x0ae:  mov    0x10(%ebp),%eax
08566551 +0x0b1:  mov    %eax,0x18(%esp)
08566555 +0x0b5:  mov    -0x4c(%ebp),%eax
08566558 +0x0b8:  mov    %eax,0x14(%esp)
0856655c +0x0bc:  mov    %edi,0x10(%esp)
08566560 +0x0c0:  mov    %esi,0xc(%esp)
08566564 +0x0c4:  mov    %ebx,0x8(%esp)
08566568 +0x0c8:  movl   $"pvp@log %s,%s,room(%d),%d,%d",0x4(%esp)
08566570 +0x0d0:  lea    -0x34(%ebp),%eax
08566573 +0x0d3:  mov    %eax,(%esp)
08566576 +0x0d6:  call   0854fd64 <_ZN10CSwitchLogclEPKcz>  ; CSwitchLog::operator()(char const*, ...)
0856657b +0x0db:  mov    0xc(%ebp),%eax
0856657e +0x0de:  mov    %eax,0x4(%esp)
08566582 +0x0e2:  mov    0x8(%ebp),%eax
08566585 +0x0e5:  mov    %eax,(%esp)
08566588 +0x0e8:  call   085663a8 <_ZN8fair_pvp10CFairMatch9_FindTeamEP5CUser>  ; fair_pvp::CFairMatch::_FindTeam(CUser*)
0856658d +0x0ed:  mov    %eax,-0x20(%ebp)
08566590 +0x0f0:  cmpl   $0x2,-0x20(%ebp)
08566594 +0x0f4:  jne    085665c7 <+0x127>
08566596 +0x0f6:  movl   $"error _FindTeam",0x10(%esp)
0856659e +0x0fe:  movl   $0x1062,0xc(%esp)
085665a6 +0x106:  movl   $&_ZZN8fair_pvp10CFairMatch12OnAskRematchEP5CUseriE19__PRETTY_FUNCTION__,0x8(%esp)
085665ae +0x10e:  movl   $"MatchingSystem.cpp",0x4(%esp)
085665b6 +0x116:  movl   $0x1,(%esp)
085665bd +0x11d:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
085665c2 +0x122:  jmp    08566943 <+0x4a3>
085665c7 +0x127:  mov    -0x20(%ebp),%eax
085665ca +0x12a:  mov    %eax,0x4(%esp)
085665ce +0x12e:  mov    0x8(%ebp),%eax
085665d1 +0x131:  mov    %eax,(%esp)
085665d4 +0x134:  call   08566476 <_ZN8fair_pvp10CFairMatch13_GetOtherTeamE22ENUM_SCHOOL_MATCH_TEAM>  ; fair_pvp::CFairMatch::_GetOtherTeam(ENUM_SCHOOL_MATCH_TEAM)
085665d9 +0x139:  mov    %eax,-0x1c(%ebp)
085665dc +0x13c:  cmpl   $0x2,-0x1c(%ebp)
085665e0 +0x140:  jne    08566613 <+0x173>
085665e2 +0x142:  movl   $"error _GetOtherTeam",0x10(%esp)
085665ea +0x14a:  movl   $0x1069,0xc(%esp)
085665f2 +0x152:  movl   $&_ZZN8fair_pvp10CFairMatch12OnAskRematchEP5CUseriE19__PRETTY_FUNCTION__,0x8(%esp)
085665fa +0x15a:  movl   $"MatchingSystem.cpp",0x4(%esp)
08566602 +0x162:  movl   $0x1,(%esp)
08566609 +0x169:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0856660e +0x16e:  jmp    08566943 <+0x4a3>
08566613 +0x173:  lea    -0x40(%ebp),%eax
08566616 +0x176:  mov    %eax,(%esp)
08566619 +0x179:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0856661e +0x17e:  mov    0x10(%ebp),%eax
08566621 +0x181:  test   %eax,%eax
08566623 +0x183:  js     0856689d <+0x3fd>
08566629 +0x189:  cmp    $0x1,%eax
0856662c +0x18c:  jle    0856663c <+0x19c>
0856662e +0x18e:  cmp    $0x2,%eax
08566631 +0x191:  je     08566723 <+0x283>
08566637 +0x197:  jmp    0856689d <+0x3fd>
0856663c +0x19c:  lea    -0x40(%ebp),%eax
0856663f +0x19f:  mov    %eax,(%esp)
08566642 +0x1a2:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
08566647 +0x1a7:  movl   $0x13a,0x8(%esp)
0856664f +0x1af:  movl   $0x0,0x4(%esp)
08566657 +0x1b7:  lea    -0x40(%ebp),%eax
0856665a +0x1ba:  mov    %eax,(%esp)
0856665d +0x1bd:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08566662 +0x1c2:  movl   $0x1,0x4(%esp)
0856666a +0x1ca:  lea    -0x40(%ebp),%eax
0856666d +0x1cd:  mov    %eax,(%esp)
08566670 +0x1d0:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08566675 +0x1d5:  mov    -0x20(%ebp),%edx
08566678 +0x1d8:  mov    %edx,%eax
0856667a +0x1da:  shl    $0x3,%eax
0856667d +0x1dd:  add    %edx,%eax
0856667f +0x1df:  shl    $0x3,%eax
08566682 +0x1e2:  add    $0x10,%eax
08566685 +0x1e5:  add    0x8(%ebp),%eax
08566688 +0x1e8:  lea    0xc(%eax),%edx
0856668b +0x1eb:  lea    -0x40(%ebp),%eax
0856668e +0x1ee:  mov    %eax,0x4(%esp)
08566692 +0x1f2:  mov    %edx,(%esp)
08566695 +0x1f5:  call   0856274c <_ZN8fair_pvp13TeamInfoThird10SendToTeamER11PacketGuard>  ; fair_pvp::TeamInfoThird::SendToTeam(PacketGuard&)
0856669a +0x1fa:  mov    -0x20(%ebp),%edx
0856669d +0x1fd:  mov    0x10(%ebp),%ecx
085666a0 +0x200:  mov    0x8(%ebp),%ebx
085666a3 +0x203:  mov    %edx,%eax
085666a5 +0x205:  shl    $0x3,%eax
085666a8 +0x208:  add    %edx,%eax
085666aa +0x20a:  shl    $0x3,%eax
085666ad +0x20d:  lea    (%ebx,%eax,1),%eax
085666b0 +0x210:  add    $0x20,%eax
085666b3 +0x213:  mov    %ecx,(%eax)
085666b5 +0x215:  mov    -0x1c(%ebp),%edx
085666b8 +0x218:  mov    0x8(%ebp),%ecx
085666bb +0x21b:  mov    %edx,%eax
085666bd +0x21d:  shl    $0x3,%eax
085666c0 +0x220:  add    %edx,%eax
085666c2 +0x222:  shl    $0x3,%eax
085666c5 +0x225:  lea    (%ecx,%eax,1),%eax
085666c8 +0x228:  add    $0x10,%eax
085666cb +0x22b:  movzbl 0xc(%eax),%eax
085666cf +0x22f:  test   %al,%al
085666d1 +0x231:  je     0856670b <+0x26b>
085666d3 +0x233:  mov    -0x1c(%ebp),%edx
085666d6 +0x236:  mov    %edx,%eax
085666d8 +0x238:  shl    $0x3,%eax
085666db +0x23b:  add    %edx,%eax
085666dd +0x23d:  shl    $0x3,%eax
085666e0 +0x240:  add    $0x10,%eax
085666e3 +0x243:  add    0x8(%ebp),%eax
085666e6 +0x246:  lea    0xc(%eax),%edx
085666e9 +0x249:  lea    -0x40(%ebp),%eax
085666ec +0x24c:  mov    %eax,0x4(%esp)
085666f0 +0x250:  mov    %edx,(%esp)
085666f3 +0x253:  call   0856274c <_ZN8fair_pvp13TeamInfoThird10SendToTeamER11PacketGuard>  ; fair_pvp::TeamInfoThird::SendToTeam(PacketGuard&)
085666f8 +0x258:  movl   $0x0,0x4(%esp)
08566700 +0x260:  mov    -0x24(%ebp),%eax
08566703 +0x263:  mov    %eax,(%esp)
08566706 +0x266:  call   08568d62 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x72c>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x72c
0856670b +0x26b:  movl   $0x0,0x4(%esp)
08566713 +0x273:  mov    -0x24(%ebp),%eax
08566716 +0x276:  mov    %eax,(%esp)
08566719 +0x279:  call   085ddf36 <_ZN8PvP_Room14revengeMissionEb>  ; PvP_Room::revengeMission(bool)
0856671e +0x27e:  jmp    0856689d <+0x3fd>
08566723 +0x283:  mov    -0x20(%ebp),%edx
08566726 +0x286:  mov    0x8(%ebp),%ecx
08566729 +0x289:  mov    %edx,%eax
0856672b +0x28b:  shl    $0x3,%eax
0856672e +0x28e:  add    %edx,%eax
08566730 +0x290:  shl    $0x3,%eax
08566733 +0x293:  lea    (%ecx,%eax,1),%eax
08566736 +0x296:  add    $0x10,%eax
08566739 +0x299:  movb   $0x1,0xc(%eax)
0856673d +0x29d:  mov    -0x1c(%ebp),%edx
08566740 +0x2a0:  mov    0x8(%ebp),%ecx
08566743 +0x2a3:  mov    %edx,%eax
08566745 +0x2a5:  shl    $0x3,%eax
08566748 +0x2a8:  add    %edx,%eax
0856674a +0x2aa:  shl    $0x3,%eax
0856674d +0x2ad:  lea    (%ecx,%eax,1),%eax
08566750 +0x2b0:  add    $0x20,%eax
08566753 +0x2b3:  mov    (%eax),%eax
08566755 +0x2b5:  cmp    $0x2,%eax
08566758 +0x2b8:  jne    08566795 <+0x2f5>
0856675a +0x2ba:  mov    -0x1c(%ebp),%edx
0856675d +0x2bd:  mov    %edx,%eax
0856675f +0x2bf:  shl    $0x3,%eax
08566762 +0x2c2:  add    %edx,%eax
08566764 +0x2c4:  shl    $0x3,%eax
08566767 +0x2c7:  add    $0x10,%eax
0856676a +0x2ca:  add    0x8(%ebp),%eax
0856676d +0x2cd:  add    $0xc,%eax
08566770 +0x2d0:  mov    %eax,(%esp)
08566773 +0x2d3:  call   0856270c <_ZNK8fair_pvp13TeamInfoThird4sizeEv>  ; fair_pvp::TeamInfoThird::size() const
08566778 +0x2d8:  test   %eax,%eax
0856677a +0x2da:  je     08566795 <+0x2f5>
0856677c +0x2dc:  mov    -0x24(%ebp),%eax
0856677f +0x2df:  mov    %eax,0x4(%esp)
08566783 +0x2e3:  mov    0x8(%ebp),%eax
08566786 +0x2e6:  mov    %eax,(%esp)
08566789 +0x2e9:  call   08563b16 <_ZNK8fair_pvp10CFairMatch17_CheckRematchableEP8PvP_Room>  ; fair_pvp::CFairMatch::_CheckRematchable(PvP_Room*) const
0856678e +0x2ee:  xor    $0x1,%eax
08566791 +0x2f1:  test   %al,%al
08566793 +0x2f3:  je     0856679c <+0x2fc>
08566795 +0x2f5:  mov    $0x1,%eax
0856679a +0x2fa:  jmp    085667a1 <+0x301>
0856679c +0x2fc:  mov    $0x0,%eax
085667a1 +0x301:  test   %al,%al
085667a3 +0x303:  je     08566821 <+0x381>
085667a5 +0x305:  lea    -0x40(%ebp),%eax
085667a8 +0x308:  mov    %eax,(%esp)
085667ab +0x30b:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
085667b0 +0x310:  movl   $0x13a,0x8(%esp)
085667b8 +0x318:  movl   $0x0,0x4(%esp)
085667c0 +0x320:  lea    -0x40(%ebp),%eax
085667c3 +0x323:  mov    %eax,(%esp)
085667c6 +0x326:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085667cb +0x32b:  movl   $0x1,0x4(%esp)
085667d3 +0x333:  lea    -0x40(%ebp),%eax
085667d6 +0x336:  mov    %eax,(%esp)
085667d9 +0x339:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085667de +0x33e:  mov    -0x20(%ebp),%edx
085667e1 +0x341:  mov    %edx,%eax
085667e3 +0x343:  shl    $0x3,%eax
085667e6 +0x346:  add    %edx,%eax
085667e8 +0x348:  shl    $0x3,%eax
085667eb +0x34b:  add    $0x10,%eax
085667ee +0x34e:  add    0x8(%ebp),%eax
085667f1 +0x351:  lea    0xc(%eax),%edx
085667f4 +0x354:  lea    -0x40(%ebp),%eax
085667f7 +0x357:  mov    %eax,0x4(%esp)
085667fb +0x35b:  mov    %edx,(%esp)
085667fe +0x35e:  call   0856274c <_ZN8fair_pvp13TeamInfoThird10SendToTeamER11PacketGuard>  ; fair_pvp::TeamInfoThird::SendToTeam(PacketGuard&)
08566803 +0x363:  mov    -0x20(%ebp),%edx
08566806 +0x366:  mov    0x8(%ebp),%ecx
08566809 +0x369:  mov    %edx,%eax
0856680b +0x36b:  shl    $0x3,%eax
0856680e +0x36e:  add    %edx,%eax
08566810 +0x370:  shl    $0x3,%eax
08566813 +0x373:  lea    (%ecx,%eax,1),%eax
08566816 +0x376:  add    $0x20,%eax
08566819 +0x379:  movl   $0x1,(%eax)
0856681f +0x37f:  jmp    0856689d <+0x3fd>
08566821 +0x381:  mov    -0x1c(%ebp),%edx
08566824 +0x384:  mov    0x8(%ebp),%ecx
08566827 +0x387:  mov    %edx,%eax
08566829 +0x389:  shl    $0x3,%eax
0856682c +0x38c:  add    %edx,%eax
0856682e +0x38e:  shl    $0x3,%eax
08566831 +0x391:  lea    (%ecx,%eax,1),%eax
08566834 +0x394:  add    $0x10,%eax
08566837 +0x397:  movzbl 0xc(%eax),%eax
0856683b +0x39b:  test   %al,%al
0856683d +0x39d:  je     0856689d <+0x3fd>
0856683f +0x39f:  lea    -0x40(%ebp),%eax
08566842 +0x3a2:  mov    %eax,(%esp)
08566845 +0x3a5:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
0856684a +0x3aa:  movl   $0x13a,0x8(%esp)
08566852 +0x3b2:  movl   $0x0,0x4(%esp)
0856685a +0x3ba:  lea    -0x40(%ebp),%eax
0856685d +0x3bd:  mov    %eax,(%esp)
08566860 +0x3c0:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08566865 +0x3c5:  movl   $0x1,0x4(%esp)
0856686d +0x3cd:  lea    -0x40(%ebp),%eax
08566870 +0x3d0:  mov    %eax,(%esp)
08566873 +0x3d3:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08566878 +0x3d8:  lea    -0x40(%ebp),%eax
0856687b +0x3db:  mov    %eax,0x4(%esp)
0856687f +0x3df:  mov    -0x24(%ebp),%eax
08566882 +0x3e2:  mov    %eax,(%esp)
08566885 +0x3e5:  call   085dbe18 <_ZN8PvP_Room11send_to_pvpER11PacketGuard>  ; PvP_Room::send_to_pvp(PacketGuard&)
0856688a +0x3ea:  movl   $0x1,0x4(%esp)
08566892 +0x3f2:  mov    -0x24(%ebp),%eax
08566895 +0x3f5:  mov    %eax,(%esp)
08566898 +0x3f8:  call   085ddf36 <_ZN8PvP_Room14revengeMissionEb>  ; PvP_Room::revengeMission(bool)
0856689d +0x3fd:  lea    -0x40(%ebp),%eax
085668a0 +0x400:  mov    %eax,(%esp)
085668a3 +0x403:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
085668a8 +0x408:  movl   $0x137,0x8(%esp)
085668b0 +0x410:  movl   $0x0,0x4(%esp)
085668b8 +0x418:  lea    -0x40(%ebp),%eax
085668bb +0x41b:  mov    %eax,(%esp)
085668be +0x41e:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085668c3 +0x423:  mov    0x10(%ebp),%eax
085668c6 +0x426:  mov    %eax,0x4(%esp)
085668ca +0x42a:  lea    -0x40(%ebp),%eax
085668cd +0x42d:  mov    %eax,(%esp)
085668d0 +0x430:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085668d5 +0x435:  mov    0xc(%ebp),%eax
085668d8 +0x438:  mov    %eax,0x4(%esp)
085668dc +0x43c:  mov    -0x24(%ebp),%eax
085668df +0x43f:  mov    %eax,(%esp)
085668e2 +0x442:  call   085d91e2 <_ZN8PvP_Room13get_user_seatEP5CUser>  ; PvP_Room::get_user_seat(CUser*)
085668e7 +0x447:  mov    %eax,0x4(%esp)
085668eb +0x44b:  lea    -0x40(%ebp),%eax
085668ee +0x44e:  mov    %eax,(%esp)
085668f1 +0x451:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085668f6 +0x456:  movl   $0x1,0x4(%esp)
085668fe +0x45e:  lea    -0x40(%ebp),%eax
08566901 +0x461:  mov    %eax,(%esp)
08566904 +0x464:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08566909 +0x469:  lea    -0x40(%ebp),%eax
0856690c +0x46c:  mov    %eax,0x4(%esp)
08566910 +0x470:  mov    -0x24(%ebp),%eax
08566913 +0x473:  mov    %eax,(%esp)
08566916 +0x476:  call   085dbe18 <_ZN8PvP_Room11send_to_pvpER11PacketGuard>  ; PvP_Room::send_to_pvp(PacketGuard&)
0856691b +0x47b:  jmp    08566938 <+0x498>
0856691d +0x47d:  mov    %edx,%ebx
0856691f +0x47f:  mov    %eax,%esi
08566921 +0x481:  lea    -0x40(%ebp),%eax
08566924 +0x484:  mov    %eax,(%esp)
08566927 +0x487:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0856692c +0x48c:  mov    %esi,%eax
0856692e +0x48e:  mov    %ebx,%edx
08566930 +0x490:  mov    %eax,(%esp)
08566933 +0x493:  call   08ae3750 <_Unwind_Resume>
08566938 +0x498:  lea    -0x40(%ebp),%eax
0856693b +0x49b:  mov    %eax,(%esp)
0856693e +0x49e:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08566943 +0x4a3:  add    $0x6c,%esp
08566946 +0x4a6:  pop    %ebx
08566947 +0x4a7:  pop    %esi
08566948 +0x4a8:  pop    %edi
08566949 +0x4a9:  pop    %ebp
0856694a +0x4aa:  ret
0856694b +0x4ab:  nop
```

## 反编译 C

```c
// fair_pvp::CFairMatch::OnAskRematch @ 0x85664a0

/* fair_pvp::CFairMatch::OnAskRematch(CUser*, int) */

void __thiscall fair_pvp::CFairMatch::OnAskRematch(CFairMatch *this,CUser *param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  PacketGuard local_44 [12];
  CSwitchLog local_38 [16];
  PvP_Room *local_28;
  int local_24;
  int local_20;
  
  local_28 = (PvP_Room *)CUser::GetPVPRoom(param_1);
  if (local_28 == (PvP_Room *)0x0) {
    LogManager::logFormat
              (1,"MatchingSystem.cpp","virtual void fair_pvp::CFairMatch::OnAskRematch(CUser*, int)"
               ,0x1058,"error GetPVPRoom");
  }
  else {
    uVar3 = PvP_Room::get_pvp_battle_mode(local_28);
    uVar4 = PvP_Room::get_index(local_28);
    uVar5 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
    uVar6 = CUser::get_acc_name(param_1);
    CSwitchLog::CSwitchLog
              (local_38,"virtual void fair_pvp::CFairMatch::OnAskRematch(CUser*, int)",0x105c,0,0);
    CSwitchLog::operator()(local_38,"pvp@log %s,%s,room(%d),%d,%d",uVar6,uVar5,uVar4,uVar3,param_2);
    local_24 = _FindTeam(this,param_1);
    if (local_24 == 2) {
      LogManager::logFormat
                (1,"MatchingSystem.cpp",
                 "virtual void fair_pvp::CFairMatch::OnAskRematch(CUser*, int)",0x1062,
                 "error _FindTeam");
    }
    else {
      local_20 = _GetOtherTeam(this,local_24);
      if (local_20 == 2) {
        LogManager::logFormat
                  (1,"MatchingSystem.cpp",
                   "virtual void fair_pvp::CFairMatch::OnAskRematch(CUser*, int)",0x1069,
                   "error _GetOtherTeam");
      }
      else {
        PacketGuard::PacketGuard(local_44);
        if (-1 < param_2) {
          if (param_2 < 2) {
                    /* try { // try from 08566642 to 0856691a has its CatchHandler @ 0856691d */
            InterfacePacketBuf::clear((InterfacePacketBuf *)local_44);
            InterfacePacketBuf::put_header((InterfacePacketBuf *)local_44,0,0x13a);
            InterfacePacketBuf::finalize((InterfacePacketBuf *)local_44,true);
            TeamInfoThird::SendToTeam((TeamInfoThird *)(this + local_24 * 0x48 + 0x1c),local_44);
            *(int *)(this + local_24 * 0x48 + 0x20) = param_2;
            if (this[local_20 * 0x48 + 0x1c] != (CFairMatch)0x0) {
              TeamInfoThird::SendToTeam((TeamInfoThird *)(this + local_20 * 0x48 + 0x1c),local_44);
              PvP_Room::setReamtchable(local_28,false);
            }
            PvP_Room::revengeMission(local_28,false);
          }
          else if (param_2 == 2) {
            this[local_24 * 0x48 + 0x1c] = (CFairMatch)0x1;
            if (((*(int *)(this + local_20 * 0x48 + 0x20) == 2) &&
                (iVar7 = TeamInfoThird::size((TeamInfoThird *)(this + local_20 * 0x48 + 0x1c)),
                iVar7 != 0)) && (cVar2 = _CheckRematchable(this,local_28), cVar2 == '\x01')) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if (bVar1) {
              InterfacePacketBuf::clear((InterfacePacketBuf *)local_44);
              InterfacePacketBuf::put_header((InterfacePacketBuf *)local_44,0,0x13a);
              InterfacePacketBuf::finalize((InterfacePacketBuf *)local_44,true);
              TeamInfoThird::SendToTeam((TeamInfoThird *)(this + local_24 * 0x48 + 0x1c),local_44);
              *(undefined4 *)(this + local_24 * 0x48 + 0x20) = 1;
            }
            else if (this[local_20 * 0x48 + 0x1c] != (CFairMatch)0x0) {
              InterfacePacketBuf::clear((InterfacePacketBuf *)local_44);
              InterfacePacketBuf::put_header((InterfacePacketBuf *)local_44,0,0x13a);
              InterfacePacketBuf::finalize((InterfacePacketBuf *)local_44,true);
              PvP_Room::send_to_pvp(local_28,local_44);
              PvP_Room::revengeMission(local_28,true);
            }
          }
        }
        InterfacePacketBuf::clear((InterfacePacketBuf *)local_44);
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_44,0,0x137);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_44,param_2);
        iVar7 = PvP_Room::get_user_seat(local_28,param_1);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_44,iVar7);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_44,true);
        PvP_Room::send_to_pvp(local_28,local_44);
        PacketGuard::~PacketGuard(local_44);
      }
    }
  }
  return;
}
```
