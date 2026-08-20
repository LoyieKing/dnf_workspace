# handleStartGame

`_ZN8WongWork11CDeathTower15handleStartGameEic17ENUM_DUNGEON_TYPE`

`WongWork::CDeathTower::handleStartGame(int, char, ENUM_DUNGEON_TYPE)`

| 类 | 地址 |
|---|---|
| `WongWork::CDeathTower` | `0x0846398e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0846398e  _ZN8WongWork11CDeathTower15handleStartGameEic17ENUM_DUNGEON_TYPE
#           WongWork::CDeathTower::handleStartGame(int, char, ENUM_DUNGEON_TYPE)
# range [0x0846398e, 0x08464035]
0846398e +0x000:  push   %ebp
0846398f +0x001:  mov    %esp,%ebp
08463991 +0x003:  push   %esi
08463992 +0x004:  push   %ebx
08463993 +0x005:  sub    $0x60,%esp
08463996 +0x008:  mov    0x10(%ebp),%eax
08463999 +0x00b:  mov    %al,-0x4c(%ebp)
0846399c +0x00e:  movb   $0x0,-0x21(%ebp)
084639a0 +0x012:  cmpl   $0x1,0x14(%ebp)
084639a4 +0x016:  jne    084639d2 <+0x44>
084639a6 +0x018:  movl   $0x4,(%esp)
084639ad +0x01f:  call   08725800 <__cxa_allocate_exception>
084639b2 +0x024:  mov    %eax,%edx
084639b4 +0x026:  movl   $0x8,(%edx)
084639ba +0x02c:  movl   $0x0,0x8(%esp)
084639c2 +0x034:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
084639ca +0x03c:  mov    %eax,(%esp)
084639cd +0x03f:  call   08724c50 <__cxa_throw>
084639d2 +0x044:  mov    0x8(%ebp),%eax
084639d5 +0x047:  add    $0xc,%eax
084639d8 +0x04a:  mov    %eax,(%esp)
084639db +0x04d:  call   082a7498 <_GLOBAL__I__ZN4CLog5this_E+0x38bf>  ; global constructors keyed to CLog::this_+0x38bf
084639e0 +0x052:  mov    0x8(%ebp),%eax
084639e3 +0x055:  lea    0xc(%eax),%edx
084639e6 +0x058:  mov    0xc(%ebp),%eax
084639e9 +0x05b:  mov    %eax,0x4(%esp)
084639ed +0x05f:  mov    %edx,(%esp)
084639f0 +0x062:  call   084605a2 <_ZN8WongWork11CDeathTower11CDungeonMgr14initDungeonMgrEi>  ; WongWork::CDeathTower::CDungeonMgr::initDungeonMgr(int)
084639f5 +0x067:  xor    $0x1,%eax
084639f8 +0x06a:  test   %al,%al
084639fa +0x06c:  je     08463a28 <+0x9a>
084639fc +0x06e:  movl   $0x4,(%esp)
08463a03 +0x075:  call   08725800 <__cxa_allocate_exception>
08463a08 +0x07a:  mov    %eax,%edx
08463a0a +0x07c:  movl   $0x16,(%edx)
08463a10 +0x082:  movl   $0x0,0x8(%esp)
08463a18 +0x08a:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
08463a20 +0x092:  mov    %eax,(%esp)
08463a23 +0x095:  call   08724c50 <__cxa_throw>
08463a28 +0x09a:  movl   $0x0,-0x20(%ebp)
08463a2f +0x0a1:  lea    -0x21(%ebp),%eax
08463a32 +0x0a4:  mov    %eax,0x4(%esp)
08463a36 +0x0a8:  mov    0x8(%ebp),%eax
08463a39 +0x0ab:  mov    %eax,(%esp)
08463a3c +0x0ae:  call   08463890 <_ZN8WongWork11CDeathTower24_checkStartGameConditionERh>  ; WongWork::CDeathTower::_checkStartGameCondition(unsigned char&)
08463a41 +0x0b3:  mov    %eax,-0x20(%ebp)
08463a44 +0x0b6:  cmpl   $0x0,-0x20(%ebp)
08463a48 +0x0ba:  setne  %al
08463a4b +0x0bd:  test   %al,%al
08463a4d +0x0bf:  je     08463a7a <+0xec>
08463a4f +0x0c1:  movl   $0x4,(%esp)
08463a56 +0x0c8:  call   08725800 <__cxa_allocate_exception>
08463a5b +0x0cd:  mov    %eax,%edx
08463a5d +0x0cf:  mov    -0x20(%ebp),%ecx
08463a60 +0x0d2:  mov    %ecx,(%edx)
08463a62 +0x0d4:  movl   $0x0,0x8(%esp)
08463a6a +0x0dc:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
08463a72 +0x0e4:  mov    %eax,(%esp)
08463a75 +0x0e7:  call   08724c50 <__cxa_throw>
08463a7a +0x0ec:  mov    0x8(%ebp),%eax
08463a7d +0x0ef:  add    $0x14,%eax
08463a80 +0x0f2:  mov    %eax,(%esp)
08463a83 +0x0f5:  call   084614ec <_ZN8WongWork11CDeathTower6CStage5resetEv>  ; WongWork::CDeathTower::CStage::reset()
08463a88 +0x0fa:  mov    0x8(%ebp),%eax
08463a8b +0x0fd:  add    $0x14,%eax
08463a8e +0x100:  mov    %eax,(%esp)
08463a91 +0x103:  call   082a74bc <_GLOBAL__I__ZN4CLog5this_E+0x38e3>  ; global constructors keyed to CLog::this_+0x38e3
08463a96 +0x108:  mov    0x8(%ebp),%eax
08463a99 +0x10b:  add    $0x14,%eax
08463a9c +0x10e:  mov    %eax,(%esp)
08463a9f +0x111:  call   08469b02 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x1e5>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x1e5
08463aa4 +0x116:  mov    0x8(%ebp),%edx
08463aa7 +0x119:  add    $0xc,%edx
08463aaa +0x11c:  mov    %eax,0x4(%esp)
08463aae +0x120:  mov    %edx,(%esp)
08463ab1 +0x123:  call   084605ee <_ZN8WongWork11CDeathTower11CDungeonMgr11getStageMapEj>  ; WongWork::CDeathTower::CDungeonMgr::getStageMap(unsigned int)
08463ab6 +0x128:  mov    %eax,-0x1c(%ebp)
08463ab9 +0x12b:  cmpl   $0x0,-0x1c(%ebp)
08463abd +0x12f:  jne    08463aeb <+0x15d>
08463abf +0x131:  movl   $0x4,(%esp)
08463ac6 +0x138:  call   08725800 <__cxa_allocate_exception>
08463acb +0x13d:  mov    %eax,%edx
08463acd +0x13f:  movl   $0x15,(%edx)
08463ad3 +0x145:  movl   $0x0,0x8(%esp)
08463adb +0x14d:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
08463ae3 +0x155:  mov    %eax,(%esp)
08463ae6 +0x158:  call   08724c50 <__cxa_throw>
08463aeb +0x15d:  mov    0x8(%ebp),%eax
08463aee +0x160:  lea    0xc(%eax),%ecx
08463af1 +0x163:  mov    0x8(%ebp),%eax
08463af4 +0x166:  lea    0x14(%eax),%edx
08463af7 +0x169:  mov    0x8(%ebp),%eax
08463afa +0x16c:  mov    %eax,0xc(%esp)
08463afe +0x170:  mov    -0x1c(%ebp),%eax
08463b01 +0x173:  mov    %eax,0x8(%esp)
08463b05 +0x177:  mov    %ecx,0x4(%esp)
08463b09 +0x17b:  mov    %edx,(%esp)
08463b0c +0x17e:  call   08460634 <_ZN8WongWork11CDeathTower6CStage10consistMapERKNS0_11CDungeonMgrEPK4CMapPS0_>  ; WongWork::CDeathTower::CStage::consistMap(WongWork::CDeathTower::CDungeonMgr const&, CMap const*, WongWork::CDeathTower*)
08463b11 +0x183:  xor    $0x1,%eax
08463b14 +0x186:  test   %al,%al
08463b16 +0x188:  je     08463b44 <+0x1b6>
08463b18 +0x18a:  movl   $0x4,(%esp)
08463b1f +0x191:  call   08725800 <__cxa_allocate_exception>
08463b24 +0x196:  mov    %eax,%edx
08463b26 +0x198:  movl   $0x1,(%edx)
08463b2c +0x19e:  movl   $0x0,0x8(%esp)
08463b34 +0x1a6:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
08463b3c +0x1ae:  mov    %eax,(%esp)
08463b3f +0x1b1:  call   08724c50 <__cxa_throw>
08463b44 +0x1b6:  mov    0x8(%ebp),%eax
08463b47 +0x1b9:  add    $0x110,%eax
08463b4c +0x1be:  mov    %eax,(%esp)
08463b4f +0x1c1:  call   08461f18 <_ZN8WongWork11CDeathTower9CPlayData5resetEv>  ; WongWork::CDeathTower::CPlayData::reset()
08463b54 +0x1c6:  mov    0x8(%ebp),%eax
08463b57 +0x1c9:  mov    (%eax),%eax
08463b59 +0x1cb:  mov    0x8(%ebp),%edx
08463b5c +0x1ce:  add    $0x110,%edx
08463b62 +0x1d4:  mov    %eax,0x4(%esp)
08463b66 +0x1d8:  mov    %edx,(%esp)
08463b69 +0x1db:  call   08461d02 <_ZN8WongWork11CDeathTower9CPlayData19makeStartMemberInfoEP6CParty>  ; WongWork::CDeathTower::CPlayData::makeStartMemberInfo(CParty*)
08463b6e +0x1e0:  movl   $0x0,-0x18(%ebp)
08463b75 +0x1e7:  jmp    08463cab <+0x31d>
08463b7a +0x1ec:  movl   $0x0,-0x14(%ebp)
08463b81 +0x1f3:  mov    0x8(%ebp),%eax
08463b84 +0x1f6:  mov    (%eax),%eax
08463b86 +0x1f8:  mov    -0x18(%ebp),%edx
08463b89 +0x1fb:  mov    %edx,0x4(%esp)
08463b8d +0x1ff:  mov    %eax,(%esp)
08463b90 +0x202:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
08463b95 +0x207:  mov    %eax,-0x14(%ebp)
08463b98 +0x20a:  cmpl   $0x0,-0x14(%ebp)
08463b9c +0x20e:  je     08463bb9 <+0x22b>
08463b9e +0x210:  mov    0x8(%ebp),%eax
08463ba1 +0x213:  mov    (%eax),%eax
08463ba3 +0x215:  mov    -0x18(%ebp),%edx
08463ba6 +0x218:  mov    %edx,0x4(%esp)
08463baa +0x21c:  mov    %eax,(%esp)
08463bad +0x21f:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
08463bb2 +0x224:  xor    $0x1,%eax
08463bb5 +0x227:  test   %al,%al
08463bb7 +0x229:  je     08463bc0 <+0x232>
08463bb9 +0x22b:  mov    $0x1,%eax
08463bbe +0x230:  jmp    08463bc5 <+0x237>
08463bc0 +0x232:  mov    $0x0,%eax
08463bc5 +0x237:  test   %al,%al
08463bc7 +0x239:  jne    08463ca6 <+0x318>
08463bcd +0x23f:  mov    0x8(%ebp),%eax
08463bd0 +0x242:  add    $0xc,%eax
08463bd3 +0x245:  mov    %eax,(%esp)
08463bd6 +0x248:  call   082345f0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9c9a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9c9a
08463bdb +0x24d:  mov    %eax,(%esp)
08463bde +0x250:  call   0814559a <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1d>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1d
08463be3 +0x255:  mov    %eax,-0x10(%ebp)
08463be6 +0x258:  mov    -0x14(%ebp),%eax
08463be9 +0x25b:  mov    %eax,(%esp)
08463bec +0x25e:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
08463bf1 +0x263:  cmp    -0x10(%ebp),%eax
08463bf4 +0x266:  setl   %al
08463bf7 +0x269:  test   %al,%al
08463bf9 +0x26b:  je     08463c27 <+0x299>
08463bfb +0x26d:  movl   $0x4,(%esp)
08463c02 +0x274:  call   08725800 <__cxa_allocate_exception>
08463c07 +0x279:  mov    %eax,%edx
08463c09 +0x27b:  movl   $0xe,(%edx)
08463c0f +0x281:  movl   $0x0,0x8(%esp)
08463c17 +0x289:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
08463c1f +0x291:  mov    %eax,(%esp)
08463c22 +0x294:  call   08724c50 <__cxa_throw>
08463c27 +0x299:  movl   $0xa,0x4(%esp)
08463c2f +0x2a1:  mov    -0x14(%ebp),%eax
08463c32 +0x2a4:  mov    %eax,(%esp)
08463c35 +0x2a7:  call   0867edb2 <_ZN5CUser9set_stateE8ch_state>  ; CUser::set_state(ch_state)
08463c3a +0x2ac:  mov    0x8(%ebp),%eax
08463c3d +0x2af:  lea    0x110(%eax),%edx
08463c43 +0x2b5:  movl   $0x1,0x8(%esp)
08463c4b +0x2bd:  mov    -0x18(%ebp),%eax
08463c4e +0x2c0:  mov    %eax,0x4(%esp)
08463c52 +0x2c4:  mov    %edx,(%esp)
08463c55 +0x2c7:  call   08469b5a <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x23d>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x23d
08463c5a +0x2cc:  mov    0x8(%ebp),%eax
08463c5d +0x2cf:  mov    (%eax),%eax
08463c5f +0x2d1:  mov    0xcd8(%eax),%eax
08463c65 +0x2d7:  cmp    $0x1,%eax
08463c68 +0x2da:  je     08463c88 <+0x2fa>
08463c6a +0x2dc:  call   0860e15b <_Z29GetInstanceDungeonEntranceLogv>  ; GetInstanceDungeonEntranceLog()
08463c6f +0x2e1:  movl   $0x0,0x8(%esp)
08463c77 +0x2e9:  mov    0xc(%ebp),%edx
08463c7a +0x2ec:  mov    %edx,0x4(%esp)
08463c7e +0x2f0:  mov    %eax,(%esp)
08463c81 +0x2f3:  call   0860e1ee <_ZN19CDungeonEntranceLog24IncrementDungeonEntranceEib>  ; CDungeonEntranceLog::IncrementDungeonEntrance(int, bool)
08463c86 +0x2f8:  jmp    08463ca7 <+0x319>
08463c88 +0x2fa:  call   0860e15b <_Z29GetInstanceDungeonEntranceLogv>  ; GetInstanceDungeonEntranceLog()
08463c8d +0x2ff:  movl   $0x1,0x8(%esp)
08463c95 +0x307:  mov    0xc(%ebp),%edx
08463c98 +0x30a:  mov    %edx,0x4(%esp)
08463c9c +0x30e:  mov    %eax,(%esp)
08463c9f +0x311:  call   0860e1ee <_ZN19CDungeonEntranceLog24IncrementDungeonEntranceEib>  ; CDungeonEntranceLog::IncrementDungeonEntrance(int, bool)
08463ca4 +0x316:  jmp    08463ca7 <+0x319>
08463ca6 +0x318:  nop
08463ca7 +0x319:  addl   $0x1,-0x18(%ebp)
08463cab +0x31d:  cmpl   $0x3,-0x18(%ebp)
08463caf +0x321:  setle  %al
08463cb2 +0x324:  test   %al,%al
08463cb4 +0x326:  jne    08463b7a <+0x1ec>
08463cba +0x32c:  mov    0x8(%ebp),%eax
08463cbd +0x32f:  mov    (%eax),%eax
08463cbf +0x331:  movl   $0x2d,0x4(%esp)
08463cc7 +0x339:  mov    %eax,(%esp)
08463cca +0x33c:  call   0859ae76 <_ZN6CParty13gen_timer_keyE13TIMER_MESSAGE>  ; CParty::gen_timer_key(TIMER_MESSAGE)
08463ccf +0x341:  mov    0x8(%ebp),%eax
08463cd2 +0x344:  mov    (%eax),%eax
08463cd4 +0x346:  movl   $0xffffffff,0x4(%esp)
08463cdc +0x34e:  mov    %eax,(%esp)
08463cdf +0x351:  call   08145828 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2ab>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2ab
08463ce4 +0x356:  mov    0x8(%ebp),%eax
08463ce7 +0x359:  mov    (%eax),%eax
08463ce9 +0x35b:  add    $0xb24,%eax
08463cee +0x360:  movl   $0x0,0x4(%esp)
08463cf6 +0x368:  mov    %eax,(%esp)
08463cf9 +0x36b:  call   0830aaa4 <_ZN13CBattle_Field24getRandomBuffDungeonTypeEi>  ; CBattle_Field::getRandomBuffDungeonType(int)
08463cfe +0x370:  mov    0x8(%ebp),%edx
08463d01 +0x373:  mov    (%edx),%edx
08463d03 +0x375:  mov    %eax,0x4(%esp)
08463d07 +0x379:  mov    %edx,(%esp)
08463d0a +0x37c:  call   0859b814 <_ZN6CParty18choose_random_buffEN10QuickParty17RandomBuffDungeonE>  ; CParty::choose_random_buff(QuickParty::RandomBuffDungeon)
08463d0f +0x381:  lea    -0x30(%ebp),%eax
08463d12 +0x384:  mov    %eax,(%esp)
08463d15 +0x387:  call   08469a8c <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x16f>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x16f
08463d1a +0x38c:  movl   $0x8e,0x8(%esp)
08463d22 +0x394:  movl   $0x0,0x4(%esp)
08463d2a +0x39c:  lea    -0x30(%ebp),%eax
08463d2d +0x39f:  mov    %eax,(%esp)
08463d30 +0x3a2:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08463d35 +0x3a7:  mov    0xc(%ebp),%eax
08463d38 +0x3aa:  mov    %eax,0x4(%esp)
08463d3c +0x3ae:  lea    -0x30(%ebp),%eax
08463d3f +0x3b1:  mov    %eax,(%esp)
08463d42 +0x3b4:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08463d47 +0x3b9:  mov    0x8(%ebp),%eax
08463d4a +0x3bc:  add    $0xc,%eax
08463d4d +0x3bf:  mov    %eax,(%esp)
08463d50 +0x3c2:  call   08469ab4 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x197>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x197
08463d55 +0x3c7:  mov    %eax,0x4(%esp)
08463d59 +0x3cb:  lea    -0x30(%ebp),%eax
08463d5c +0x3ce:  mov    %eax,(%esp)
08463d5f +0x3d1:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08463d64 +0x3d6:  mov    0x8(%ebp),%eax
08463d67 +0x3d9:  mov    (%eax),%eax
08463d69 +0x3db:  mov    0xcd8(%eax),%eax
08463d6f +0x3e1:  mov    %eax,0x4(%esp)
08463d73 +0x3e5:  lea    -0x30(%ebp),%eax
08463d76 +0x3e8:  mov    %eax,(%esp)
08463d79 +0x3eb:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08463d7e +0x3f0:  mov    0x8(%ebp),%eax
08463d81 +0x3f3:  mov    (%eax),%eax
08463d83 +0x3f5:  test   %eax,%eax
08463d85 +0x3f7:  je     08463da5 <+0x417>
08463d87 +0x3f9:  mov    0x8(%ebp),%eax
08463d8a +0x3fc:  mov    (%eax),%eax
08463d8c +0x3fe:  mov    %eax,(%esp)
08463d8f +0x401:  call   0830ed3a <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x91f>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x91f
08463d94 +0x406:  mov    %eax,0x4(%esp)
08463d98 +0x40a:  lea    -0x30(%ebp),%eax
08463d9b +0x40d:  mov    %eax,(%esp)
08463d9e +0x410:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08463da3 +0x415:  jmp    08463db8 <+0x42a>
08463da5 +0x417:  movl   $0xb,0x4(%esp)
08463dad +0x41f:  lea    -0x30(%ebp),%eax
08463db0 +0x422:  mov    %eax,(%esp)
08463db3 +0x425:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08463db8 +0x42a:  movl   $0x1,0x4(%esp)
08463dc0 +0x432:  lea    -0x30(%ebp),%eax
08463dc3 +0x435:  mov    %eax,(%esp)
08463dc6 +0x438:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08463dcb +0x43d:  mov    0x8(%ebp),%eax
08463dce +0x440:  mov    (%eax),%eax
08463dd0 +0x442:  lea    -0x30(%ebp),%edx
08463dd3 +0x445:  mov    %edx,0x4(%esp)
08463dd7 +0x449:  mov    %eax,(%esp)
08463dda +0x44c:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
08463ddf +0x451:  lea    -0x30(%ebp),%eax
08463de2 +0x454:  mov    %eax,(%esp)
08463de5 +0x457:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
08463dea +0x45c:  movl   $0x8f,0x8(%esp)
08463df2 +0x464:  movl   $0x0,0x4(%esp)
08463dfa +0x46c:  lea    -0x30(%ebp),%eax
08463dfd +0x46f:  mov    %eax,(%esp)
08463e00 +0x472:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08463e05 +0x477:  mov    0x8(%ebp),%eax
08463e08 +0x47a:  lea    0x14(%eax),%edx
08463e0b +0x47d:  lea    -0x30(%ebp),%eax
08463e0e +0x480:  mov    %eax,0x4(%esp)
08463e12 +0x484:  mov    %edx,(%esp)
08463e15 +0x487:  call   08461828 <_ZN8WongWork11CDeathTower6CStage15makeStagePacketER11PacketGuard>  ; WongWork::CDeathTower::CStage::makeStagePacket(PacketGuard&)
08463e1a +0x48c:  movl   $0x1,0x4(%esp)
08463e22 +0x494:  lea    -0x30(%ebp),%eax
08463e25 +0x497:  mov    %eax,(%esp)
08463e28 +0x49a:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08463e2d +0x49f:  mov    0x8(%ebp),%eax
08463e30 +0x4a2:  mov    (%eax),%eax
08463e32 +0x4a4:  lea    -0x30(%ebp),%edx
08463e35 +0x4a7:  mov    %edx,0x4(%esp)
08463e39 +0x4ab:  mov    %eax,(%esp)
08463e3c +0x4ae:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
08463e41 +0x4b3:  mov    0x8(%ebp),%eax
08463e44 +0x4b6:  mov    %eax,(%esp)
08463e47 +0x4b9:  call   084670f8 <_ZN8WongWork11CDeathTower17_checkMemberReadyEv>  ; WongWork::CDeathTower::_checkMemberReady()
08463e4c +0x4be:  movl   $0x2,0x4(%esp)
08463e54 +0x4c6:  mov    0x8(%ebp),%eax
08463e57 +0x4c9:  mov    %eax,(%esp)
08463e5a +0x4cc:  call   08469c34 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x317>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x317
08463e5f +0x4d1:  mov    0x8(%ebp),%eax
08463e62 +0x4d4:  mov    %eax,(%esp)
08463e65 +0x4d7:  call   08467b50 <_ZN8WongWork11CDeathTower18_onStartDeathTowerEv>  ; WongWork::CDeathTower::_onStartDeathTower()
08463e6a +0x4dc:  jmp    08463e81 <+0x4f3>
08463e6c +0x4de:  mov    %edx,%ebx
08463e6e +0x4e0:  mov    %eax,%esi
08463e70 +0x4e2:  lea    -0x30(%ebp),%eax
08463e73 +0x4e5:  mov    %eax,(%esp)
08463e76 +0x4e8:  call   08469aa0 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x183>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x183
08463e7b +0x4ed:  mov    %esi,%eax
08463e7d +0x4ef:  mov    %ebx,%edx
08463e7f +0x4f1:  jmp    08463e91 <+0x503>
08463e81 +0x4f3:  lea    -0x30(%ebp),%eax
08463e84 +0x4f6:  mov    %eax,(%esp)
08463e87 +0x4f9:  call   08469aa0 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x183>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x183
08463e8c +0x4fe:  jmp    08464028 <+0x69a>
08463e91 +0x503:  cmp    $0x1,%edx
08463e94 +0x506:  je     08463e9e <+0x510>
08463e96 +0x508:  mov    %eax,(%esp)
08463e99 +0x50b:  call   08ae3750 <_Unwind_Resume>
08463e9e +0x510:  mov    %eax,(%esp)
08463ea1 +0x513:  call   08725ce0 <__cxa_begin_catch>
08463ea6 +0x518:  mov    (%eax),%eax
08463ea8 +0x51a:  mov    %eax,-0xc(%ebp)
08463eab +0x51d:  cmpl   $0x11,-0xc(%ebp)
08463eaf +0x521:  jne    08463f68 <+0x5da>
08463eb5 +0x527:  lea    -0x3c(%ebp),%eax
08463eb8 +0x52a:  mov    %eax,(%esp)
08463ebb +0x52d:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08463ec0 +0x532:  movl   $0x10,0x8(%esp)
08463ec8 +0x53a:  movl   $0x1,0x4(%esp)
08463ed0 +0x542:  lea    -0x3c(%ebp),%eax
08463ed3 +0x545:  mov    %eax,(%esp)
08463ed6 +0x548:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08463edb +0x54d:  movl   $0x0,0x4(%esp)
08463ee3 +0x555:  lea    -0x3c(%ebp),%eax
08463ee6 +0x558:  mov    %eax,(%esp)
08463ee9 +0x55b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08463eee +0x560:  movl   $0x11,0x4(%esp)
08463ef6 +0x568:  lea    -0x3c(%ebp),%eax
08463ef9 +0x56b:  mov    %eax,(%esp)
08463efc +0x56e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08463f01 +0x573:  movzbl -0x21(%ebp),%eax
08463f05 +0x577:  movzbl %al,%eax
08463f08 +0x57a:  mov    %eax,0x4(%esp)
08463f0c +0x57e:  lea    -0x3c(%ebp),%eax
08463f0f +0x581:  mov    %eax,(%esp)
08463f12 +0x584:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08463f17 +0x589:  movl   $0x1,0x4(%esp)
08463f1f +0x591:  lea    -0x3c(%ebp),%eax
08463f22 +0x594:  mov    %eax,(%esp)
08463f25 +0x597:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08463f2a +0x59c:  mov    0x8(%ebp),%eax
08463f2d +0x59f:  mov    (%eax),%eax
08463f2f +0x5a1:  lea    -0x3c(%ebp),%edx
08463f32 +0x5a4:  mov    %edx,0x4(%esp)
08463f36 +0x5a8:  mov    %eax,(%esp)
08463f39 +0x5ab:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
08463f3e +0x5b0:  jmp    08463f58 <+0x5ca>
08463f40 +0x5b2:  mov    %edx,%ebx
08463f42 +0x5b4:  mov    %eax,%esi
08463f44 +0x5b6:  lea    -0x3c(%ebp),%eax
08463f47 +0x5b9:  mov    %eax,(%esp)
08463f4a +0x5bc:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08463f4f +0x5c1:  mov    %esi,%eax
08463f51 +0x5c3:  mov    %ebx,%edx
08463f53 +0x5c5:  jmp    08464013 <+0x685>
08463f58 +0x5ca:  lea    -0x3c(%ebp),%eax
08463f5b +0x5cd:  mov    %eax,(%esp)
08463f5e +0x5d0:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08463f63 +0x5d5:  jmp    08463ffc <+0x66e>
08463f68 +0x5da:  lea    -0x48(%ebp),%eax
08463f6b +0x5dd:  mov    %eax,(%esp)
08463f6e +0x5e0:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08463f73 +0x5e5:  movl   $0x10,0x8(%esp)
08463f7b +0x5ed:  movl   $0x1,0x4(%esp)
08463f83 +0x5f5:  lea    -0x48(%ebp),%eax
08463f86 +0x5f8:  mov    %eax,(%esp)
08463f89 +0x5fb:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08463f8e +0x600:  movl   $0x0,0x4(%esp)
08463f96 +0x608:  lea    -0x48(%ebp),%eax
08463f99 +0x60b:  mov    %eax,(%esp)
08463f9c +0x60e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08463fa1 +0x613:  mov    -0xc(%ebp),%eax
08463fa4 +0x616:  mov    %eax,0x4(%esp)
08463fa8 +0x61a:  lea    -0x48(%ebp),%eax
08463fab +0x61d:  mov    %eax,(%esp)
08463fae +0x620:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08463fb3 +0x625:  movl   $0x1,0x4(%esp)
08463fbb +0x62d:  lea    -0x48(%ebp),%eax
08463fbe +0x630:  mov    %eax,(%esp)
08463fc1 +0x633:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08463fc6 +0x638:  mov    0x8(%ebp),%eax
08463fc9 +0x63b:  mov    (%eax),%eax
08463fcb +0x63d:  lea    -0x48(%ebp),%edx
08463fce +0x640:  mov    %edx,0x4(%esp)
08463fd2 +0x644:  mov    %eax,(%esp)
08463fd5 +0x647:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
08463fda +0x64c:  jmp    08463ff1 <+0x663>
08463fdc +0x64e:  mov    %edx,%ebx
08463fde +0x650:  mov    %eax,%esi
08463fe0 +0x652:  lea    -0x48(%ebp),%eax
08463fe3 +0x655:  mov    %eax,(%esp)
08463fe6 +0x658:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08463feb +0x65d:  mov    %esi,%eax
08463fed +0x65f:  mov    %ebx,%edx
08463fef +0x661:  jmp    08464013 <+0x685>
08463ff1 +0x663:  lea    -0x48(%ebp),%eax
08463ff4 +0x666:  mov    %eax,(%esp)
08463ff7 +0x669:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08463ffc +0x66e:  mov    0x8(%ebp),%eax
08463fff +0x671:  mov    %eax,(%esp)
08464002 +0x674:  call   08467b20 <_ZN8WongWork11CDeathTower8_destroyEv>  ; WongWork::CDeathTower::_destroy()
08464007 +0x679:  mov    $0x0,%ebx
0846400c +0x67e:  call   08725c30 <__cxa_end_catch>
08464011 +0x683:  jmp    0846402d <+0x69f>
08464013 +0x685:  mov    %edx,%ebx
08464015 +0x687:  mov    %eax,%esi
08464017 +0x689:  call   08725c30 <__cxa_end_catch>
0846401c +0x68e:  mov    %esi,%eax
0846401e +0x690:  mov    %ebx,%edx
08464020 +0x692:  mov    %eax,(%esp)
08464023 +0x695:  call   08ae3750 <_Unwind_Resume>
08464028 +0x69a:  mov    $0x1,%ebx
0846402d +0x69f:  mov    %ebx,%eax
0846402f +0x6a1:  add    $0x60,%esp
08464032 +0x6a4:  pop    %ebx
08464033 +0x6a5:  pop    %esi
08464034 +0x6a6:  pop    %ebp
08464035 +0x6a7:  ret
```

## 反编译 C

```c
// WongWork::CDeathTower::handleStartGame @ 0x846398e

/* WongWork::CDeathTower::handleStartGame(int, char, ENUM_DUNGEON_TYPE) */

undefined4 __thiscall
WongWork::CDeathTower::handleStartGame(CDeathTower *this,int param_1,undefined4 param_2,int param_4)

{
  bool bVar1;
  char cVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint uVar5;
  CDungeon *this_00;
  CDungeonEntranceLog *pCVar6;
  undefined4 uVar7;
  int iVar8;
  CPacketHandler local_34 [15];
  uchar local_25;
  int local_24;
  CMap *local_20;
  int local_1c;
  CUserCharacInfo *local_18;
  int local_14;
  
  local_25 = '\0';
  if (param_4 == 1) {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 8;
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 084639cd to 08463d19 has its CatchHandler @ 08463e91 */
    __cxa_throw(puVar3,&ENUM_ERROR::typeinfo,0);
  }
  CDungeonMgr::reset((CDungeonMgr *)(this + 0xc));
  iVar8 = param_1;
  cVar2 = CDungeonMgr::initDungeonMgr((int)(this + 0xc));
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4,iVar8);
    *puVar3 = 0x16;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&ENUM_ERROR::typeinfo,0);
  }
  local_24 = 0;
  local_24 = _checkStartGameCondition(this,&local_25);
  if (local_24 != 0) {
    piVar4 = (int *)__cxa_allocate_exception(4);
    *piVar4 = local_24;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(piVar4,&ENUM_ERROR::typeinfo,0);
  }
  CStage::reset((CStage *)(this + 0x14));
  CStage::resetCurrentStage((CStage *)(this + 0x14));
  uVar5 = CStage::getCurrentStage((CStage *)(this + 0x14));
  local_20 = (CMap *)CDungeonMgr::getStageMap((CDungeonMgr *)(this + 0xc),uVar5);
  if (local_20 == (CMap *)0x0) {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x15;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&ENUM_ERROR::typeinfo,0);
  }
  cVar2 = CStage::consistMap((CStage *)(this + 0x14),(CDungeonMgr *)(this + 0xc),local_20,this);
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 1;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&ENUM_ERROR::typeinfo,0);
  }
  CPlayData::reset((CPlayData *)(this + 0x110));
  CPlayData::makeStartMemberInfo((CPlayData *)(this + 0x110),*(CParty **)this);
  local_1c = 0;
  do {
    if (3 < local_1c) {
      CParty::gen_timer_key(*(CParty **)this,0x2d);
      CParty::SetSelectedEPLPCmd(*(CParty **)this,-1);
      uVar7 = CBattle_Field::getRandomBuffDungeonType((CBattle_Field *)(*(int *)this + 0xb24),0);
      CParty::choose_random_buff(*(CParty **)this,uVar7);
      CPacketHandler::CPacketHandler(local_34);
                    /* try { // try from 08463d30 to 08463e69 has its CatchHandler @ 08463e6c */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_34,0,0x8e);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_34,param_1);
      iVar8 = CDungeonMgr::getEndStage((CDungeonMgr *)(this + 0xc));
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_34,iVar8);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,*(int *)(*(int *)this + 0xcd8));
      if (*(int *)this == 0) {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,0xb);
      }
      else {
        iVar8 = CParty::get_random_buff_type(*(CParty **)this);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,iVar8);
      }
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_34,true);
      CParty::send_to_party(*(CParty **)this,(PacketGuard *)local_34);
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_34);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_34,0,0x8f);
      CStage::makeStagePacket((CStage *)(this + 0x14),(PacketGuard *)local_34);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_34,true);
      CParty::send_to_party(*(CParty **)this,(PacketGuard *)local_34);
      _checkMemberReady(this);
      setTowerState(this,2);
      _onStartDeathTower(this);
                    /* try { // try from 08463e87 to 08463e8b has its CatchHandler @ 08463e91 */
      CPacketHandler::~CPacketHandler(local_34);
      return 1;
    }
    local_18 = (CUserCharacInfo *)0x0;
    local_18 = (CUserCharacInfo *)CParty::get_user(*(CParty **)this,local_1c);
    if (local_18 == (CUserCharacInfo *)0x0) {
LAB_08463bb9:
      bVar1 = true;
    }
    else {
      cVar2 = CParty::checkValidUser(*(CParty **)this,local_1c);
      if (cVar2 != '\x01') goto LAB_08463bb9;
      bVar1 = false;
    }
    if (!bVar1) {
      this_00 = (CDungeon *)CDungeonMgr::getDungeon((CDungeonMgr *)(this + 0xc));
      local_14 = CDungeon::get_min_level(this_00);
      iVar8 = CUserCharacInfo::get_charac_level(local_18);
      if (iVar8 < local_14) {
        puVar3 = (undefined4 *)__cxa_allocate_exception(4);
        *puVar3 = 0xe;
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar3,&ENUM_ERROR::typeinfo,0);
      }
      CUser::set_state((CUser *)local_18,10);
      CPlayData::setMemberAlive((CPlayData *)(this + 0x110),local_1c,true);
      if (*(int *)(*(int *)this + 0xcd8) == 1) {
        pCVar6 = (CDungeonEntranceLog *)GetInstanceDungeonEntranceLog();
        CDungeonEntranceLog::IncrementDungeonEntrance(pCVar6,param_1,true);
      }
      else {
        pCVar6 = (CDungeonEntranceLog *)GetInstanceDungeonEntranceLog();
        CDungeonEntranceLog::IncrementDungeonEntrance(pCVar6,param_1,false);
      }
    }
    local_1c = local_1c + 1;
  } while( true );
}
```
