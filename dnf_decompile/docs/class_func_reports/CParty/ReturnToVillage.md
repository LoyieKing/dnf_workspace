# ReturnToVillage

`_ZN6CParty15ReturnToVillageEv`

`CParty::ReturnToVillage()`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085aca60` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085aca60  _ZN6CParty15ReturnToVillageEv
#           CParty::ReturnToVillage()
# range [0x085aca60, 0x085acfdd]
085aca60 +0x000:  push   %ebp
085aca61 +0x001:  mov    %esp,%ebp
085aca63 +0x003:  push   %edi
085aca64 +0x004:  push   %esi
085aca65 +0x005:  push   %ebx
085aca66 +0x006:  sub    $0x14c,%esp
085aca6c +0x00c:  mov    0x8(%ebp),%eax
085aca6f +0x00f:  add    $0xb24,%eax
085aca74 +0x014:  movl   $0x0,0x4(%esp)
085aca7c +0x01c:  mov    %eax,(%esp)
085aca7f +0x01f:  call   085bf0b8 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x616>  ; global constructors keyed to CParty::cMember::cMember()+0x616
085aca84 +0x024:  lea    -0x38(%ebp),%eax
085aca87 +0x027:  mov    %eax,(%esp)
085aca8a +0x02a:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
085aca8f +0x02f:  movl   $0x2,0x8(%esp)
085aca97 +0x037:  movl   $0x0,0x4(%esp)
085aca9f +0x03f:  lea    -0x38(%ebp),%eax
085acaa2 +0x042:  mov    %eax,(%esp)
085acaa5 +0x045:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085acaaa +0x04a:  mov    0x8(%ebp),%eax
085acaad +0x04d:  movzbl 0x13c(%eax),%eax
085acab4 +0x054:  test   %al,%al
085acab6 +0x056:  je     085acd53 <+0x2f3>
085acabc +0x05c:  mov    0x8(%ebp),%eax
085acabf +0x05f:  mov    0xcac(%eax),%eax
085acac5 +0x065:  test   %eax,%eax
085acac7 +0x067:  je     085acbbd <+0x15d>
085acacd +0x06d:  lea    -0x138(%ebp),%ebx
085acad3 +0x073:  mov    $0x0,%eax
085acad8 +0x078:  mov    $0x40,%edx
085acadd +0x07d:  mov    %ebx,%edi
085acadf +0x07f:  mov    %edx,%ecx
085acae1 +0x081:  rep stos %eax,%es:(%edi)
085acae3 +0x083:  mov    0x8(%ebp),%eax
085acae6 +0x086:  mov    0xcd8(%eax),%eax
085acaec +0x08c:  mov    %eax,%edi
085acaee +0x08e:  lea    -0x138(%ebp),%eax
085acaf4 +0x094:  mov    %eax,0x4(%esp)
085acaf8 +0x098:  mov    0x8(%ebp),%eax
085acafb +0x09b:  mov    %eax,(%esp)
085acafe +0x09e:  call   085b4bde <_ZN6CParty15_getMemberNamesEPc>  ; CParty::_getMemberNames(char*)
085acb03 +0x0a3:  mov    %eax,%esi
085acb05 +0x0a5:  mov    0x8(%ebp),%eax
085acb08 +0x0a8:  add    $0xb24,%eax
085acb0d +0x0ad:  mov    %eax,(%esp)
085acb10 +0x0b0:  call   080f981c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x28>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x28
085acb15 +0x0b5:  mov    %eax,%ebx
085acb17 +0x0b7:  mov    0x8(%ebp),%eax
085acb1a +0x0ba:  mov    0xcac(%eax),%eax
085acb20 +0x0c0:  mov    %eax,(%esp)
085acb23 +0x0c3:  call   081455a6 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x29>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x29
085acb28 +0x0c8:  mov    0x8(%ebp),%edx
085acb2b +0x0cb:  mov    0x74(%edx),%edx
085acb2e +0x0ce:  add    $0x79700,%edx
085acb34 +0x0d4:  mov    %edi,0x10(%esp)
085acb38 +0x0d8:  mov    %esi,0xc(%esp)
085acb3c +0x0dc:  mov    %ebx,0x8(%esp)
085acb40 +0x0e0:  mov    %eax,0x4(%esp)
085acb44 +0x0e4:  mov    %edx,(%esp)
085acb47 +0x0e7:  call   086849dc <_ZN15cUserHistoryLog12LeaveDungeonEPKciS1_i>  ; cUserHistoryLog::LeaveDungeon(char const*, int, char const*, int)
085acb4c +0x0ec:  mov    0x8(%ebp),%eax
085acb4f +0x0ef:  mov    %eax,(%esp)
085acb52 +0x0f2:  call   0822d812 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2ebc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2ebc
085acb57 +0x0f7:  test   %al,%al
085acb59 +0x0f9:  je     085acb74 <+0x114>
085acb5b +0x0fb:  mov    0x8(%ebp),%eax
085acb5e +0x0fe:  mov    0x74(%eax),%eax
085acb61 +0x101:  mov    %eax,(%esp)
085acb64 +0x104:  call   08649bdc <_ZN5CUser23isDungeonClearHackCheckEv>  ; CUser::isDungeonClearHackCheck()
085acb69 +0x109:  test   %al,%al
085acb6b +0x10b:  je     085acb74 <+0x114>
085acb6d +0x10d:  mov    $0x1,%eax
085acb72 +0x112:  jmp    085acb79 <+0x119>
085acb74 +0x114:  mov    $0x0,%eax
085acb79 +0x119:  test   %al,%al
085acb7b +0x11b:  je     085acbbd <+0x15d>
085acb7d +0x11d:  mov    0x8(%ebp),%eax
085acb80 +0x120:  mov    0x74(%eax),%ebx
085acb83 +0x123:  mov    0x8(%ebp),%eax
085acb86 +0x126:  mov    0x74(%eax),%eax
085acb89 +0x129:  mov    %eax,(%esp)
085acb8c +0x12c:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
085acb91 +0x131:  movl   $0x0,0x14(%esp)
085acb99 +0x139:  movl   $0x0,0x10(%esp)
085acba1 +0x141:  movl   $0x1,0xc(%esp)
085acba9 +0x149:  movl   $0x19c,0x8(%esp)
085acbb1 +0x151:  mov    %ebx,0x4(%esp)
085acbb5 +0x155:  mov    %eax,(%esp)
085acbb8 +0x158:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
085acbbd +0x15d:  mov    0x8(%ebp),%eax
085acbc0 +0x160:  mov    0x74(%eax),%ebx
085acbc3 +0x163:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085acbc8 +0x168:  mov    %ebx,0x4(%esp)
085acbcc +0x16c:  mov    %eax,(%esp)
085acbcf +0x16f:  call   086c6a16 <_ZN9GameWorld16out_from_dungeonEP5CUser>  ; GameWorld::out_from_dungeon(CUser*)
085acbd4 +0x174:  movl   $0x0,0x4(%esp)
085acbdc +0x17c:  lea    -0x38(%ebp),%eax
085acbdf +0x17f:  mov    %eax,(%esp)
085acbe2 +0x182:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085acbe7 +0x187:  movl   $0x1,0x4(%esp)
085acbef +0x18f:  lea    -0x38(%ebp),%eax
085acbf2 +0x192:  mov    %eax,(%esp)
085acbf5 +0x195:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085acbfa +0x19a:  mov    0x8(%ebp),%eax
085acbfd +0x19d:  mov    0x74(%eax),%eax
085acc00 +0x1a0:  mov    %eax,(%esp)
085acc03 +0x1a3:  call   0822fe4e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x54f8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x54f8
085acc08 +0x1a8:  movswl %ax,%edi
085acc0b +0x1ab:  mov    0x8(%ebp),%eax
085acc0e +0x1ae:  mov    0x74(%eax),%eax
085acc11 +0x1b1:  mov    %eax,(%esp)
085acc14 +0x1b4:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
085acc19 +0x1b9:  mov    %eax,%esi
085acc1b +0x1bb:  mov    0x8(%ebp),%eax
085acc1e +0x1be:  mov    0x74(%eax),%eax
085acc21 +0x1c1:  mov    %eax,(%esp)
085acc24 +0x1c4:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
085acc29 +0x1c9:  movl   $0x0,0x4(%esp)
085acc31 +0x1d1:  mov    %eax,(%esp)
085acc34 +0x1d4:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
085acc39 +0x1d9:  mov    %eax,%ebx
085acc3b +0x1db:  movl   $0x0,0xc(%esp)
085acc43 +0x1e3:  movl   $0x2714,0x8(%esp)
085acc4b +0x1eb:  movl   $&_ZZN6CParty15ReturnToVillageEvE19__PRETTY_FUNCTION__,0x4(%esp)
085acc53 +0x1f3:  lea    -0x2c(%ebp),%eax
085acc56 +0x1f6:  mov    %eax,(%esp)
085acc59 +0x1f9:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085acc5e +0x1fe:  mov    %edi,0x10(%esp)
085acc62 +0x202:  mov    %esi,0xc(%esp)
085acc66 +0x206:  mov    %ebx,0x8(%esp)
085acc6a +0x20a:  movl   $"<IN_DUNGEON_NULL_PARTY> m_id(%s), user_state(%d), PartyIndex(%d)",0x4(%esp)
085acc72 +0x212:  lea    -0x2c(%ebp),%eax
085acc75 +0x215:  mov    %eax,(%esp)
085acc78 +0x218:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085acc7d +0x21d:  mov    0x8(%ebp),%eax
085acc80 +0x220:  mov    0x74(%eax),%eax
085acc83 +0x223:  movl   $0xffffffff,0x4(%esp)
085acc8b +0x22b:  mov    %eax,(%esp)
085acc8e +0x22e:  call   085bfd96 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x12f4>  ; global constructors keyed to CParty::cMember::cMember()+0x12f4
085acc93 +0x233:  mov    0x8(%ebp),%eax
085acc96 +0x236:  mov    0x74(%eax),%eax
085acc99 +0x239:  mov    %eax,(%esp)
085acc9c +0x23c:  call   08690eca <_ZNK5CUser12getMoveSpaceEv>  ; CUser::getMoveSpace() const
085acca1 +0x241:  cmp    $0x1,%eax
085acca4 +0x244:  setne  %al
085acca7 +0x247:  test   %al,%al
085acca9 +0x249:  je     085accc1 <+0x261>
085accab +0x24b:  mov    0x8(%ebp),%eax
085accae +0x24e:  mov    0x74(%eax),%eax
085accb1 +0x251:  movl   $0x3,0x4(%esp)
085accb9 +0x259:  mov    %eax,(%esp)
085accbc +0x25c:  call   0867edb2 <_ZN5CUser9set_stateE8ch_state>  ; CUser::set_state(ch_state)
085accc1 +0x261:  lea    -0x38(%ebp),%edx
085accc4 +0x264:  mov    0x8(%ebp),%eax
085accc7 +0x267:  mov    0x74(%eax),%eax
085accca +0x26a:  movl   $0x0,0x8(%esp)
085accd2 +0x272:  mov    %edx,0x4(%esp)
085accd6 +0x276:  mov    %eax,(%esp)
085accd9 +0x279:  call   0865a44e <_ZN5CUser15make_basic_infoEPcc>  ; CUser::make_basic_info(char*, char)
085accde +0x27e:  mov    0x8(%ebp),%eax
085acce1 +0x281:  mov    %eax,(%esp)
085acce4 +0x284:  call   0859ad4c <_ZN6CParty7destroyEv>  ; CParty::destroy()
085acce9 +0x289:  movl   $0x1,0x4(%esp)
085accf1 +0x291:  lea    -0x38(%ebp),%eax
085accf4 +0x294:  mov    %eax,(%esp)
085accf7 +0x297:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085accfc +0x29c:  mov    0x8(%ebp),%eax
085accff +0x29f:  mov    %eax,(%esp)
085acd02 +0x2a2:  call   08145780 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x203>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x203
085acd07 +0x2a7:  mov    %eax,(%esp)
085acd0a +0x2aa:  call   08690eca <_ZNK5CUser12getMoveSpaceEv>  ; CUser::getMoveSpace() const
085acd0f +0x2af:  cmp    $0x1,%eax
085acd12 +0x2b2:  setne  %al
085acd15 +0x2b5:  test   %al,%al
085acd17 +0x2b7:  je     085acd3c <+0x2dc>
085acd19 +0x2b9:  mov    0x8(%ebp),%eax
085acd1c +0x2bc:  mov    0x74(%eax),%ebx
085acd1f +0x2bf:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085acd24 +0x2c4:  mov    %ebx,0x8(%esp)
085acd28 +0x2c8:  lea    -0x38(%ebp),%edx
085acd2b +0x2cb:  mov    %edx,0x4(%esp)
085acd2f +0x2cf:  mov    %eax,(%esp)
085acd32 +0x2d2:  call   0813495c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x563>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x563
085acd37 +0x2d7:  jmp    085acf98 <+0x538>
085acd3c +0x2dc:  lea    -0x38(%ebp),%eax
085acd3f +0x2df:  mov    %eax,0x4(%esp)
085acd43 +0x2e3:  mov    0x8(%ebp),%eax
085acd46 +0x2e6:  mov    %eax,(%esp)
085acd49 +0x2e9:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
085acd4e +0x2ee:  jmp    085acf98 <+0x538>
085acd53 +0x2f3:  movl   $0x0,0x4(%esp)
085acd5b +0x2fb:  lea    -0x38(%ebp),%eax
085acd5e +0x2fe:  mov    %eax,(%esp)
085acd61 +0x301:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085acd66 +0x306:  mov    0x8(%ebp),%eax
085acd69 +0x309:  mov    %eax,(%esp)
085acd6c +0x30c:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
085acd71 +0x311:  mov    %eax,0x4(%esp)
085acd75 +0x315:  lea    -0x38(%ebp),%eax
085acd78 +0x318:  mov    %eax,(%esp)
085acd7b +0x31b:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085acd80 +0x320:  lea    -0x138(%ebp),%ebx
085acd86 +0x326:  mov    $0x0,%eax
085acd8b +0x32b:  mov    $0x40,%edx
085acd90 +0x330:  mov    %ebx,%edi
085acd92 +0x332:  mov    %edx,%ecx
085acd94 +0x334:  rep stos %eax,%es:(%edi)
085acd96 +0x336:  lea    -0x138(%ebp),%eax
085acd9c +0x33c:  mov    %eax,0x4(%esp)
085acda0 +0x340:  mov    0x8(%ebp),%eax
085acda3 +0x343:  mov    %eax,(%esp)
085acda6 +0x346:  call   085b4bde <_ZN6CParty15_getMemberNamesEPc>  ; CParty::_getMemberNames(char*)
085acdab +0x34b:  movl   $0x0,-0x1c(%ebp)
085acdb2 +0x352:  jmp    085acf21 <+0x4c1>
085acdb7 +0x357:  mov    -0x1c(%ebp),%eax
085acdba +0x35a:  mov    %eax,0x4(%esp)
085acdbe +0x35e:  mov    0x8(%ebp),%eax
085acdc1 +0x361:  mov    %eax,(%esp)
085acdc4 +0x364:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
085acdc9 +0x369:  test   %al,%al
085acdcb +0x36b:  je     085acf1d <+0x4bd>
085acdd1 +0x371:  mov    0x8(%ebp),%eax
085acdd4 +0x374:  mov    0xcac(%eax),%eax
085acdda +0x37a:  test   %eax,%eax
085acddc +0x37c:  je     085ace49 <+0x3e9>
085acdde +0x37e:  mov    0x8(%ebp),%eax
085acde1 +0x381:  mov    0xcd8(%eax),%eax
085acde7 +0x387:  mov    %eax,%esi
085acde9 +0x389:  mov    0x8(%ebp),%eax
085acdec +0x38c:  add    $0xb24,%eax
085acdf1 +0x391:  mov    %eax,(%esp)
085acdf4 +0x394:  call   080f981c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x28>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x28
085acdf9 +0x399:  mov    %eax,%ebx
085acdfb +0x39b:  mov    0x8(%ebp),%eax
085acdfe +0x39e:  mov    0xcac(%eax),%eax
085ace04 +0x3a4:  mov    %eax,(%esp)
085ace07 +0x3a7:  call   081455a6 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x29>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x29
085ace0c +0x3ac:  mov    %eax,%ecx
085ace0e +0x3ae:  mov    -0x1c(%ebp),%edx
085ace11 +0x3b1:  mov    0x8(%ebp),%edi
085ace14 +0x3b4:  mov    %edx,%eax
085ace16 +0x3b6:  add    %eax,%eax
085ace18 +0x3b8:  add    %edx,%eax
085ace1a +0x3ba:  shl    $0x3,%eax
085ace1d +0x3bd:  lea    (%edi,%eax,1),%eax
085ace20 +0x3c0:  add    $0x78,%eax
085ace23 +0x3c3:  mov    (%eax),%eax
085ace25 +0x3c5:  lea    0x79700(%eax),%edx
085ace2b +0x3cb:  mov    %esi,0x10(%esp)
085ace2f +0x3cf:  lea    -0x138(%ebp),%eax
085ace35 +0x3d5:  mov    %eax,0xc(%esp)
085ace39 +0x3d9:  mov    %ebx,0x8(%esp)
085ace3d +0x3dd:  mov    %ecx,0x4(%esp)
085ace41 +0x3e1:  mov    %edx,(%esp)
085ace44 +0x3e4:  call   086849dc <_ZN15cUserHistoryLog12LeaveDungeonEPKciS1_i>  ; cUserHistoryLog::LeaveDungeon(char const*, int, char const*, int)
085ace49 +0x3e9:  mov    0x8(%ebp),%eax
085ace4c +0x3ec:  mov    0xcac(%eax),%eax
085ace52 +0x3f2:  test   %eax,%eax
085ace54 +0x3f4:  je     085acec7 <+0x467>
085ace56 +0x3f6:  mov    0x8(%ebp),%eax
085ace59 +0x3f9:  mov    %eax,(%esp)
085ace5c +0x3fc:  call   0822d812 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2ebc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2ebc
085ace61 +0x401:  test   %al,%al
085ace63 +0x403:  je     085ace7e <+0x41e>
085ace65 +0x405:  mov    0x8(%ebp),%eax
085ace68 +0x408:  mov    0x74(%eax),%eax
085ace6b +0x40b:  mov    %eax,(%esp)
085ace6e +0x40e:  call   08649bdc <_ZN5CUser23isDungeonClearHackCheckEv>  ; CUser::isDungeonClearHackCheck()
085ace73 +0x413:  test   %al,%al
085ace75 +0x415:  je     085ace7e <+0x41e>
085ace77 +0x417:  mov    $0x1,%eax
085ace7c +0x41c:  jmp    085ace83 <+0x423>
085ace7e +0x41e:  mov    $0x0,%eax
085ace83 +0x423:  test   %al,%al
085ace85 +0x425:  je     085acec7 <+0x467>
085ace87 +0x427:  mov    0x8(%ebp),%eax
085ace8a +0x42a:  mov    0x74(%eax),%ebx
085ace8d +0x42d:  mov    0x8(%ebp),%eax
085ace90 +0x430:  mov    0x74(%eax),%eax
085ace93 +0x433:  mov    %eax,(%esp)
085ace96 +0x436:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
085ace9b +0x43b:  movl   $0x0,0x14(%esp)
085acea3 +0x443:  movl   $0x0,0x10(%esp)
085aceab +0x44b:  movl   $0x1,0xc(%esp)
085aceb3 +0x453:  movl   $0x19c,0x8(%esp)
085acebb +0x45b:  mov    %ebx,0x4(%esp)
085acebf +0x45f:  mov    %eax,(%esp)
085acec2 +0x462:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
085acec7 +0x467:  mov    -0x1c(%ebp),%edx
085aceca +0x46a:  mov    0x8(%ebp),%ecx
085acecd +0x46d:  mov    %edx,%eax
085acecf +0x46f:  add    %eax,%eax
085aced1 +0x471:  add    %edx,%eax
085aced3 +0x473:  shl    $0x3,%eax
085aced6 +0x476:  lea    (%ecx,%eax,1),%eax
085aced9 +0x479:  add    $0x78,%eax
085acedc +0x47c:  mov    (%eax),%ebx
085acede +0x47e:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085acee3 +0x483:  mov    %ebx,0x4(%esp)
085acee7 +0x487:  mov    %eax,(%esp)
085aceea +0x48a:  call   086c6a16 <_ZN9GameWorld16out_from_dungeonEP5CUser>  ; GameWorld::out_from_dungeon(CUser*)
085aceef +0x48f:  lea    -0x38(%ebp),%ecx
085acef2 +0x492:  mov    -0x1c(%ebp),%edx
085acef5 +0x495:  mov    0x8(%ebp),%ebx
085acef8 +0x498:  mov    %edx,%eax
085acefa +0x49a:  add    %eax,%eax
085acefc +0x49c:  add    %edx,%eax
085acefe +0x49e:  shl    $0x3,%eax
085acf01 +0x4a1:  lea    (%ebx,%eax,1),%eax
085acf04 +0x4a4:  add    $0x78,%eax
085acf07 +0x4a7:  mov    (%eax),%eax
085acf09 +0x4a9:  movl   $0x0,0x8(%esp)
085acf11 +0x4b1:  mov    %ecx,0x4(%esp)
085acf15 +0x4b5:  mov    %eax,(%esp)
085acf18 +0x4b8:  call   0865a44e <_ZN5CUser15make_basic_infoEPcc>  ; CUser::make_basic_info(char*, char)
085acf1d +0x4bd:  addl   $0x1,-0x1c(%ebp)
085acf21 +0x4c1:  cmpl   $0x3,-0x1c(%ebp)
085acf25 +0x4c5:  setle  %al
085acf28 +0x4c8:  test   %al,%al
085acf2a +0x4ca:  jne    085acdb7 <+0x357>
085acf30 +0x4d0:  movl   $0x1,0x4(%esp)
085acf38 +0x4d8:  mov    0x8(%ebp),%eax
085acf3b +0x4db:  mov    %eax,(%esp)
085acf3e +0x4de:  call   0826b978 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x246>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x246
085acf43 +0x4e3:  mov    0x8(%ebp),%eax
085acf46 +0x4e6:  mov    %eax,(%esp)
085acf49 +0x4e9:  call   0859aec2 <_ZN6CParty17battle_data_resetEv>  ; CParty::battle_data_reset()
085acf4e +0x4ee:  movl   $0x1,0x4(%esp)
085acf56 +0x4f6:  lea    -0x38(%ebp),%eax
085acf59 +0x4f9:  mov    %eax,(%esp)
085acf5c +0x4fc:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085acf61 +0x501:  mov    0x8(%ebp),%eax
085acf64 +0x504:  mov    %eax,(%esp)
085acf67 +0x507:  call   085b6410 <_ZN6CParty16IsExistInvisibleEv>  ; CParty::IsExistInvisible()
085acf6c +0x50c:  test   %al,%al
085acf6e +0x50e:  je     085acf84 <+0x524>
085acf70 +0x510:  lea    -0x38(%ebp),%eax
085acf73 +0x513:  mov    %eax,0x4(%esp)
085acf77 +0x517:  mov    0x8(%ebp),%eax
085acf7a +0x51a:  mov    %eax,(%esp)
085acf7d +0x51d:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
085acf82 +0x522:  jmp    085acf98 <+0x538>
085acf84 +0x524:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085acf89 +0x529:  lea    -0x38(%ebp),%edx
085acf8c +0x52c:  mov    %edx,0x4(%esp)
085acf90 +0x530:  mov    %eax,(%esp)
085acf93 +0x533:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
085acf98 +0x538:  movl   $0x0,0x4(%esp)
085acfa0 +0x540:  mov    0x8(%ebp),%eax
085acfa3 +0x543:  mov    %eax,(%esp)
085acfa6 +0x546:  call   0814578c <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x20f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x20f
085acfab +0x54b:  jmp    085acfc8 <+0x568>
085acfad +0x54d:  mov    %edx,%ebx
085acfaf +0x54f:  mov    %eax,%esi
085acfb1 +0x551:  lea    -0x38(%ebp),%eax
085acfb4 +0x554:  mov    %eax,(%esp)
085acfb7 +0x557:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085acfbc +0x55c:  mov    %esi,%eax
085acfbe +0x55e:  mov    %ebx,%edx
085acfc0 +0x560:  mov    %eax,(%esp)
085acfc3 +0x563:  call   08ae3750 <_Unwind_Resume>
085acfc8 +0x568:  lea    -0x38(%ebp),%eax
085acfcb +0x56b:  mov    %eax,(%esp)
085acfce +0x56e:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085acfd3 +0x573:  add    $0x14c,%esp
085acfd9 +0x579:  pop    %ebx
085acfda +0x57a:  pop    %esi
085acfdb +0x57b:  pop    %edi
085acfdc +0x57c:  pop    %ebp
085acfdd +0x57d:  ret
```

## 反编译 C

```c
// CParty::ReturnToVillage @ 0x85aca60

/* CParty::ReturnToVillage() */

void __thiscall CParty::ReturnToVillage(CParty *this)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  CHackAnalyzer *pCVar7;
  GameWorld *pGVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 uVar11;
  CUser *pCVar12;
  int iVar13;
  byte bVar14;
  char local_13c [256];
  PacketGuard local_3c [12];
  cMyTrace local_30 [16];
  int local_20;
  
  bVar14 = 0;
  CBattle_Field::setBloodState((CBattle_Field *)(this + 0xb24),0);
  PacketGuard::PacketGuard(local_3c);
                    /* try { // try from 085acaa5 to 085acfaa has its CatchHandler @ 085acfad */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_3c,0,2);
  if (this[0x13c] == (CParty)0x0) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,0);
    iVar13 = get_member_count(this);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_3c,iVar13);
    pcVar4 = local_13c;
    for (iVar13 = 0x40; iVar13 != 0; iVar13 = iVar13 + -1) {
      pcVar4[0] = '\0';
      pcVar4[1] = '\0';
      pcVar4[2] = '\0';
      pcVar4[3] = '\0';
      pcVar4 = pcVar4 + ((uint)bVar14 * -2 + 1) * 4;
    }
    _getMemberNames(this,local_13c);
    for (local_20 = 0; local_20 < 4; local_20 = local_20 + 1) {
      cVar2 = _checkValidUser(this,local_20);
      if (cVar2 != '\0') {
        if (*(int *)(this + 0xcac) != 0) {
          iVar13 = *(int *)(this + 0xcd8);
          iVar5 = CBattle_Field::get_dungeon_diff((CBattle_Field *)(this + 0xb24));
          pcVar4 = (char *)CDungeon::GetDungeonName(*(CDungeon **)(this + 0xcac));
          cUserHistoryLog::LeaveDungeon
                    ((cUserHistoryLog *)(*(int *)(this + local_20 * 0x18 + 0x78) + 0x79700),pcVar4,
                     iVar5,local_13c,iVar13);
        }
        if (*(int *)(this + 0xcac) != 0) {
          cVar2 = IsSinglePlay(this);
          if (cVar2 == '\0') {
LAB_085ace7e:
            bVar1 = false;
          }
          else {
            cVar2 = CUser::isDungeonClearHackCheck(*(CUser **)(this + 0x74));
            if (cVar2 == '\0') goto LAB_085ace7e;
            bVar1 = true;
          }
          if (bVar1) {
            uVar9 = *(undefined4 *)(this + 0x74);
            pCVar7 = (CHackAnalyzer *)CUser::getHackAnalyzer(*(CUser **)(this + 0x74));
            WongWork::CHackAnalyzer::addServerHackCnt(pCVar7,uVar9,0x19c,1,0,0);
          }
        }
        pCVar12 = *(CUser **)(this + local_20 * 0x18 + 0x78);
        pGVar8 = (GameWorld *)G_GameWorld();
        GameWorld::out_from_dungeon(pGVar8,pCVar12);
        CUser::make_basic_info(*(CUser **)(this + local_20 * 0x18 + 0x78),(char *)local_3c,'\0');
      }
    }
    set_state(this,'\x01');
    battle_data_reset(this);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_3c,true);
    cVar2 = IsExistInvisible(this);
    if (cVar2 == '\0') {
      pGVar8 = (GameWorld *)G_GameWorld();
      GameWorld::send_all(pGVar8,local_3c);
    }
    else {
      send_to_party(this,local_3c);
    }
    goto LAB_085acf98;
  }
  if (*(int *)(this + 0xcac) != 0) {
    pcVar4 = local_13c;
    for (iVar13 = 0x40; iVar13 != 0; iVar13 = iVar13 + -1) {
      pcVar4[0] = '\0';
      pcVar4[1] = '\0';
      pcVar4[2] = '\0';
      pcVar4[3] = '\0';
      pcVar4 = pcVar4 + ((uint)bVar14 * -2 + 1) * 4;
    }
    iVar13 = *(int *)(this + 0xcd8);
    pcVar4 = (char *)_getMemberNames(this,local_13c);
    iVar5 = CBattle_Field::get_dungeon_diff((CBattle_Field *)(this + 0xb24));
    pcVar6 = (char *)CDungeon::GetDungeonName(*(CDungeon **)(this + 0xcac));
    cUserHistoryLog::LeaveDungeon
              ((cUserHistoryLog *)(*(int *)(this + 0x74) + 0x79700),pcVar6,iVar5,pcVar4,iVar13);
    cVar2 = IsSinglePlay(this);
    if (cVar2 == '\0') {
LAB_085acb74:
      bVar1 = false;
    }
    else {
      cVar2 = CUser::isDungeonClearHackCheck(*(CUser **)(this + 0x74));
      if (cVar2 == '\0') goto LAB_085acb74;
      bVar1 = true;
    }
    if (bVar1) {
      uVar9 = *(undefined4 *)(this + 0x74);
      pCVar7 = (CHackAnalyzer *)CUser::getHackAnalyzer(*(CUser **)(this + 0x74));
      WongWork::CHackAnalyzer::addServerHackCnt(pCVar7,uVar9,0x19c,1,0,0);
    }
  }
  pCVar12 = *(CUser **)(this + 0x74);
  pGVar8 = (GameWorld *)G_GameWorld();
  GameWorld::out_from_dungeon(pGVar8,pCVar12);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,0);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_3c,1);
  sVar3 = CUser::GetPartyIndex(*(CUser **)(this + 0x74));
  uVar9 = CUser::get_state(*(CUser **)(this + 0x74));
  uVar10 = CUser::get_acc_id(*(CUser **)(this + 0x74));
  uVar11 = NumberToString(uVar10,0);
  cMyTrace::cMyTrace(local_30,"void CParty::ReturnToVillage()",0x2714,0);
  cMyTrace::operator()
            (local_30,"<IN_DUNGEON_NULL_PARTY> m_id(%s), user_state(%d), PartyIndex(%d)",uVar11,
             uVar9,(int)sVar3);
  CUser::SetPartyIndex(*(CUser **)(this + 0x74),-1);
  iVar13 = CUser::getMoveSpace(*(CUser **)(this + 0x74));
  if (iVar13 != 1) {
    CUser::set_state(*(CUser **)(this + 0x74),3);
  }
  CUser::make_basic_info(*(CUser **)(this + 0x74),(char *)local_3c,'\0');
  destroy(this);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_3c,true);
  pCVar12 = (CUser *)getManager(this);
  iVar13 = CUser::getMoveSpace(pCVar12);
  if (iVar13 == 1) {
    send_to_party(this,local_3c);
  }
  else {
    pCVar12 = *(CUser **)(this + 0x74);
    pGVar8 = (GameWorld *)G_GameWorld();
    GameWorld::send_all(pGVar8,local_3c,pCVar12);
  }
LAB_085acf98:
  SetEPLPState(this,'\0');
  PacketGuard::~PacketGuard(local_3c);
  return;
}
```
