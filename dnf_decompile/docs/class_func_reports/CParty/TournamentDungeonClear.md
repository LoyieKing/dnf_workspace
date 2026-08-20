# TournamentDungeonClear

`_ZN6CParty22TournamentDungeonClearEb`

`CParty::TournamentDungeonClear(bool)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085bd236` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085bd236  _ZN6CParty22TournamentDungeonClearEb
#           CParty::TournamentDungeonClear(bool)
# range [0x085bd236, 0x085bd6ab]
085bd236 +0x000:  push   %ebp
085bd237 +0x001:  mov    %esp,%ebp
085bd239 +0x003:  push   %esi
085bd23a +0x004:  push   %ebx
085bd23b +0x005:  sub    $0xd0,%esp
085bd241 +0x00b:  mov    0xc(%ebp),%eax
085bd244 +0x00e:  mov    %al,-0xac(%ebp)
085bd24a +0x014:  mov    0x8(%ebp),%eax
085bd24d +0x017:  mov    0xcac(%eax),%eax
085bd253 +0x01d:  mov    %eax,-0x1c(%ebp)
085bd256 +0x020:  cmpl   $0x0,-0x1c(%ebp)
085bd25a +0x024:  jne    085bd28d <+0x57>
085bd25c +0x026:  movl   $"Tournament Dungeon is NULL",0x10(%esp)
085bd264 +0x02e:  movl   $0x45bc,0xc(%esp)
085bd26c +0x036:  movl   $&_ZZN6CParty22TournamentDungeonClearEbE19__PRETTY_FUNCTION__,0x8(%esp)
085bd274 +0x03e:  movl   $"party.cpp",0x4(%esp)
085bd27c +0x046:  movl   $0x1,(%esp)
085bd283 +0x04d:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
085bd288 +0x052:  jmp    085bd6a1 <+0x46b>
085bd28d +0x057:  mov    -0x1c(%ebp),%eax
085bd290 +0x05a:  mov    %eax,(%esp)
085bd293 +0x05d:  call   0836520a <_ZNK8CDungeon19isTournamentDungeonEv>  ; CDungeon::isTournamentDungeon() const
085bd298 +0x062:  xor    $0x1,%eax
085bd29b +0x065:  test   %al,%al
085bd29d +0x067:  je     085bd2e4 <+0xae>
085bd29f +0x069:  mov    0x8(%ebp),%eax
085bd2a2 +0x06c:  add    $0xb24,%eax
085bd2a7 +0x071:  mov    %eax,(%esp)
085bd2aa +0x074:  call   0822d0d8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2782>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2782
085bd2af +0x079:  mov    %eax,0x14(%esp)
085bd2b3 +0x07d:  movl   $"Dungeon(%d) is can not call function",0x10(%esp)
085bd2bb +0x085:  movl   $0x45c2,0xc(%esp)
085bd2c3 +0x08d:  movl   $&_ZZN6CParty22TournamentDungeonClearEbE19__PRETTY_FUNCTION__,0x8(%esp)
085bd2cb +0x095:  movl   $"party.cpp",0x4(%esp)
085bd2d3 +0x09d:  movl   $0x1,(%esp)
085bd2da +0x0a4:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
085bd2df +0x0a9:  jmp    085bd6a1 <+0x46b>
085bd2e4 +0x0ae:  cmpb   $0x0,-0xac(%ebp)
085bd2eb +0x0b5:  je     085bd302 <+0xcc>
085bd2ed +0x0b7:  movl   $0x1,0x4(%esp)
085bd2f5 +0x0bf:  mov    0x8(%ebp),%eax
085bd2f8 +0x0c2:  mov    %eax,(%esp)
085bd2fb +0x0c5:  call   085b3520 <_ZN6CParty8SaveCoinE14eCoinSubReason>  ; CParty::SaveCoin(eCoinSubReason)
085bd300 +0x0ca:  jmp    085bd315 <+0xdf>
085bd302 +0x0cc:  movl   $0x2,0x4(%esp)
085bd30a +0x0d4:  mov    0x8(%ebp),%eax
085bd30d +0x0d7:  mov    %eax,(%esp)
085bd310 +0x0da:  call   085b3520 <_ZN6CParty8SaveCoinE14eCoinSubReason>  ; CParty::SaveCoin(eCoinSubReason)
085bd315 +0x0df:  lea    -0x28(%ebp),%eax
085bd318 +0x0e2:  mov    %eax,(%esp)
085bd31b +0x0e5:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
085bd320 +0x0ea:  movl   $0x0,-0x14(%ebp)
085bd327 +0x0f1:  jmp    085bd577 <+0x341>
085bd32c +0x0f6:  mov    -0x14(%ebp),%eax
085bd32f +0x0f9:  mov    %eax,0x4(%esp)
085bd333 +0x0fd:  mov    0x8(%ebp),%eax
085bd336 +0x100:  mov    %eax,(%esp)
085bd339 +0x103:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
085bd33e +0x108:  xor    $0x1,%eax
085bd341 +0x10b:  test   %al,%al
085bd343 +0x10d:  jne    085bd572 <+0x33c>
085bd349 +0x113:  lea    -0xa2(%ebp),%eax
085bd34f +0x119:  mov    %eax,%ebx
085bd351 +0x11b:  mov    $0x1,%esi
085bd356 +0x120:  jmp    085bd366 <+0x130>
085bd358 +0x122:  mov    %ebx,(%esp)
085bd35b +0x125:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
085bd360 +0x12a:  add    $0x3d,%ebx
085bd363 +0x12d:  sub    $0x1,%esi
085bd366 +0x130:  cmp    $0xffffffff,%esi
085bd369 +0x133:  setne  %al
085bd36c +0x136:  test   %al,%al
085bd36e +0x138:  jne    085bd358 <+0x122>
085bd370 +0x13a:  mov    0x8(%ebp),%eax
085bd373 +0x13d:  lea    0x17bc(%eax),%edx
085bd379 +0x143:  movl   $0x2,0x10(%esp)
085bd381 +0x14b:  lea    -0xa2(%ebp),%eax
085bd387 +0x151:  mov    %eax,0xc(%esp)
085bd38b +0x155:  mov    -0x14(%ebp),%eax
085bd38e +0x158:  mov    %eax,0x8(%esp)
085bd392 +0x15c:  movl   $0x0,0x4(%esp)
085bd39a +0x164:  mov    %edx,(%esp)
085bd39d +0x167:  call   0828502e <_ZN24CTournamentDungeonReward15GetItemFromCardE32ENUM_TOURNAMENT_REWARD_CARD_TYPEiP10Inven_Itemj>  ; CTournamentDungeonReward::GetItemFromCard(ENUM_TOURNAMENT_REWARD_CARD_TYPE, int, Inven_Item*, unsigned int)
085bd3a2 +0x16c:  mov    %al,-0xd(%ebp)
085bd3a5 +0x16f:  cmpb   $0x0,-0xd(%ebp)
085bd3a9 +0x173:  je     085bd3e2 <+0x1ac>
085bd3ab +0x175:  mov    -0x14(%ebp),%edx
085bd3ae +0x178:  mov    0x8(%ebp),%ecx
085bd3b1 +0x17b:  mov    %edx,%eax
085bd3b3 +0x17d:  add    %eax,%eax
085bd3b5 +0x17f:  add    %edx,%eax
085bd3b7 +0x181:  shl    $0x3,%eax
085bd3ba +0x184:  lea    (%ecx,%eax,1),%eax
085bd3bd +0x187:  add    $0x78,%eax
085bd3c0 +0x18a:  mov    (%eax),%eax
085bd3c2 +0x18c:  lea    -0x28(%ebp),%edx
085bd3c5 +0x18f:  mov    %edx,0xc(%esp)
085bd3c9 +0x193:  lea    -0xa2(%ebp),%edx
085bd3cf +0x199:  mov    %edx,0x8(%esp)
085bd3d3 +0x19d:  mov    %eax,0x4(%esp)
085bd3d7 +0x1a1:  mov    0x8(%ebp),%eax
085bd3da +0x1a4:  mov    %eax,(%esp)
085bd3dd +0x1a7:  call   085aab84 <_ZN6CParty16_putItemIntoUserEP5CUserP10Inven_ItemR11PacketGuard>  ; CParty::_putItemIntoUser(CUser*, Inven_Item*, PacketGuard&)
085bd3e2 +0x1ac:  cmpb   $0x0,-0xac(%ebp)
085bd3e9 +0x1b3:  je     085bd54a <+0x314>
085bd3ef +0x1b9:  movl   $0x0,-0xc(%ebp)
085bd3f6 +0x1c0:  jmp    085bd413 <+0x1dd>
085bd3f8 +0x1c2:  mov    -0xc(%ebp),%eax
085bd3fb +0x1c5:  lea    -0xa2(%ebp),%edx
085bd401 +0x1cb:  imul   $0x3d,%eax,%eax
085bd404 +0x1ce:  lea    (%edx,%eax,1),%eax
085bd407 +0x1d1:  mov    %eax,(%esp)
085bd40a +0x1d4:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
085bd40f +0x1d9:  addl   $0x1,-0xc(%ebp)
085bd413 +0x1dd:  cmpl   $0x1,-0xc(%ebp)
085bd417 +0x1e1:  setle  %al
085bd41a +0x1e4:  test   %al,%al
085bd41c +0x1e6:  jne    085bd3f8 <+0x1c2>
085bd41e +0x1e8:  mov    0x8(%ebp),%eax
085bd421 +0x1eb:  lea    0x17bc(%eax),%edx
085bd427 +0x1f1:  movl   $0x2,0x10(%esp)
085bd42f +0x1f9:  lea    -0xa2(%ebp),%eax
085bd435 +0x1ff:  mov    %eax,0xc(%esp)
085bd439 +0x203:  mov    -0x14(%ebp),%eax
085bd43c +0x206:  mov    %eax,0x8(%esp)
085bd440 +0x20a:  movl   $0x1,0x4(%esp)
085bd448 +0x212:  mov    %edx,(%esp)
085bd44b +0x215:  call   0828502e <_ZN24CTournamentDungeonReward15GetItemFromCardE32ENUM_TOURNAMENT_REWARD_CARD_TYPEiP10Inven_Itemj>  ; CTournamentDungeonReward::GetItemFromCard(ENUM_TOURNAMENT_REWARD_CARD_TYPE, int, Inven_Item*, unsigned int)
085bd450 +0x21a:  mov    %al,-0xd(%ebp)
085bd453 +0x21d:  cmpb   $0x0,-0xd(%ebp)
085bd457 +0x221:  je     085bd490 <+0x25a>
085bd459 +0x223:  mov    -0x14(%ebp),%edx
085bd45c +0x226:  mov    0x8(%ebp),%ecx
085bd45f +0x229:  mov    %edx,%eax
085bd461 +0x22b:  add    %eax,%eax
085bd463 +0x22d:  add    %edx,%eax
085bd465 +0x22f:  shl    $0x3,%eax
085bd468 +0x232:  lea    (%ecx,%eax,1),%eax
085bd46b +0x235:  add    $0x78,%eax
085bd46e +0x238:  mov    (%eax),%eax
085bd470 +0x23a:  lea    -0x28(%ebp),%edx
085bd473 +0x23d:  mov    %edx,0xc(%esp)
085bd477 +0x241:  lea    -0xa2(%ebp),%edx
085bd47d +0x247:  mov    %edx,0x8(%esp)
085bd481 +0x24b:  mov    %eax,0x4(%esp)
085bd485 +0x24f:  mov    0x8(%ebp),%eax
085bd488 +0x252:  mov    %eax,(%esp)
085bd48b +0x255:  call   085aab84 <_ZN6CParty16_putItemIntoUserEP5CUserP10Inven_ItemR11PacketGuard>  ; CParty::_putItemIntoUser(CUser*, Inven_Item*, PacketGuard&)
085bd490 +0x25a:  mov    -0x14(%ebp),%edx
085bd493 +0x25d:  mov    0x8(%ebp),%ecx
085bd496 +0x260:  mov    %edx,%eax
085bd498 +0x262:  add    %eax,%eax
085bd49a +0x264:  add    %edx,%eax
085bd49c +0x266:  shl    $0x3,%eax
085bd49f +0x269:  lea    (%ecx,%eax,1),%eax
085bd4a2 +0x26c:  add    $0x78,%eax
085bd4a5 +0x26f:  mov    (%eax),%eax
085bd4a7 +0x271:  mov    0x796f8(%eax),%eax
085bd4ad +0x277:  mov    %eax,(%esp)
085bd4b0 +0x27a:  call   084ba0b0 <_ZN10HistoryLog13WriteDunClearEP8_IO_FILE>  ; HistoryLog::WriteDunClear(_IO_FILE*)
085bd4b5 +0x27f:  mov    -0x14(%ebp),%edx
085bd4b8 +0x282:  mov    0x8(%ebp),%ecx
085bd4bb +0x285:  mov    %edx,%eax
085bd4bd +0x287:  add    %eax,%eax
085bd4bf +0x289:  add    %edx,%eax
085bd4c1 +0x28b:  shl    $0x3,%eax
085bd4c4 +0x28e:  lea    (%ecx,%eax,1),%eax
085bd4c7 +0x291:  add    $0x78,%eax
085bd4ca +0x294:  mov    (%eax),%eax
085bd4cc +0x296:  mov    %eax,0x4(%esp)
085bd4d0 +0x29a:  mov    0x8(%ebp),%eax
085bd4d3 +0x29d:  mov    %eax,(%esp)
085bd4d6 +0x2a0:  call   085bf7fc <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0xd5a>  ; global constructors keyed to CParty::cMember::cMember()+0xd5a
085bd4db +0x2a5:  mov    -0x14(%ebp),%edx
085bd4de +0x2a8:  mov    0x8(%ebp),%ecx
085bd4e1 +0x2ab:  mov    %edx,%eax
085bd4e3 +0x2ad:  add    %eax,%eax
085bd4e5 +0x2af:  add    %edx,%eax
085bd4e7 +0x2b1:  shl    $0x3,%eax
085bd4ea +0x2b4:  lea    (%ecx,%eax,1),%eax
085bd4ed +0x2b7:  add    $0x78,%eax
085bd4f0 +0x2ba:  mov    (%eax),%eax
085bd4f2 +0x2bc:  test   %eax,%eax
085bd4f4 +0x2be:  je     085bd520 <+0x2ea>
085bd4f6 +0x2c0:  mov    -0x14(%ebp),%edx
085bd4f9 +0x2c3:  mov    0x8(%ebp),%ecx
085bd4fc +0x2c6:  mov    %edx,%eax
085bd4fe +0x2c8:  add    %eax,%eax
085bd500 +0x2ca:  add    %edx,%eax
085bd502 +0x2cc:  shl    $0x3,%eax
085bd505 +0x2cf:  lea    (%ecx,%eax,1),%eax
085bd508 +0x2d2:  add    $0x78,%eax
085bd50b +0x2d5:  mov    (%eax),%eax
085bd50d +0x2d7:  mov    %eax,(%esp)
085bd510 +0x2da:  call   0868f5ea <_ZN5CUser24IsProperLevelDungeonUserEv>  ; CUser::IsProperLevelDungeonUser()
085bd515 +0x2df:  test   %al,%al
085bd517 +0x2e1:  je     085bd520 <+0x2ea>
085bd519 +0x2e3:  mov    $0x1,%eax
085bd51e +0x2e8:  jmp    085bd525 <+0x2ef>
085bd520 +0x2ea:  mov    $0x0,%eax
085bd525 +0x2ef:  test   %al,%al
085bd527 +0x2f1:  je     085bd573 <+0x33d>
085bd529 +0x2f3:  mov    -0x14(%ebp),%edx
085bd52c +0x2f6:  mov    0x8(%ebp),%ecx
085bd52f +0x2f9:  mov    %edx,%eax
085bd531 +0x2fb:  add    %eax,%eax
085bd533 +0x2fd:  add    %edx,%eax
085bd535 +0x2ff:  shl    $0x3,%eax
085bd538 +0x302:  lea    (%ecx,%eax,1),%eax
085bd53b +0x305:  add    $0x78,%eax
085bd53e +0x308:  mov    (%eax),%eax
085bd540 +0x30a:  mov    %eax,(%esp)
085bd543 +0x30d:  call   0868f5fa <_ZN5CUser27ProcProperLevelDungeonClearEv>  ; CUser::ProcProperLevelDungeonClear()
085bd548 +0x312:  jmp    085bd573 <+0x33d>
085bd54a +0x314:  mov    -0x14(%ebp),%edx
085bd54d +0x317:  mov    0x8(%ebp),%ecx
085bd550 +0x31a:  mov    %edx,%eax
085bd552 +0x31c:  add    %eax,%eax
085bd554 +0x31e:  add    %edx,%eax
085bd556 +0x320:  shl    $0x3,%eax
085bd559 +0x323:  lea    (%ecx,%eax,1),%eax
085bd55c +0x326:  add    $0x78,%eax
085bd55f +0x329:  mov    (%eax),%eax
085bd561 +0x32b:  mov    %eax,0x4(%esp)
085bd565 +0x32f:  mov    0x8(%ebp),%eax
085bd568 +0x332:  mov    %eax,(%esp)
085bd56b +0x335:  call   085bf7da <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0xd38>  ; global constructors keyed to CParty::cMember::cMember()+0xd38
085bd570 +0x33a:  jmp    085bd573 <+0x33d>
085bd572 +0x33c:  nop
085bd573 +0x33d:  addl   $0x1,-0x14(%ebp)
085bd577 +0x341:  cmpl   $0x3,-0x14(%ebp)
085bd57b +0x345:  setle  %al
085bd57e +0x348:  test   %al,%al
085bd580 +0x34a:  jne    085bd32c <+0xf6>
085bd586 +0x350:  movl   $0x2,0x4(%esp)
085bd58e +0x358:  mov    0x8(%ebp),%eax
085bd591 +0x35b:  mov    %eax,(%esp)
085bd594 +0x35e:  call   0814578c <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x20f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x20f
085bd599 +0x363:  movl   $0x3c,-0x18(%ebp)
085bd5a0 +0x36a:  mov    0x8(%ebp),%eax
085bd5a3 +0x36d:  add    $0x2a4,%eax
085bd5a8 +0x372:  mov    %eax,(%esp)
085bd5ab +0x375:  call   08ab150c <_ZN10secretshop16SECRET_SHOP_DATA6IsOpenEv>  ; secretshop::SECRET_SHOP_DATA::IsOpen()
085bd5b0 +0x37a:  test   %al,%al
085bd5b2 +0x37c:  je     085bd5d0 <+0x39a>
085bd5b4 +0x37e:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085bd5b9 +0x383:  mov    0xa784(%eax),%eax
085bd5bf +0x389:  shl    $0x2,%eax
085bd5c2 +0x38c:  mov    %eax,%edx
085bd5c4 +0x38e:  shl    $0x4,%edx
085bd5c7 +0x391:  mov    %edx,%ecx
085bd5c9 +0x393:  sub    %eax,%ecx
085bd5cb +0x395:  mov    %ecx,%eax
085bd5cd +0x397:  mov    %eax,-0x18(%ebp)
085bd5d0 +0x39a:  movl   $0x15,0x4(%esp)
085bd5d8 +0x3a2:  mov    0x8(%ebp),%eax
085bd5db +0x3a5:  mov    %eax,(%esp)
085bd5de +0x3a8:  call   0859ae76 <_ZN6CParty13gen_timer_keyE13TIMER_MESSAGE>  ; CParty::gen_timer_key(TIMER_MESSAGE)
085bd5e3 +0x3ad:  mov    %eax,%esi
085bd5e5 +0x3af:  mov    0x8(%ebp),%eax
085bd5e8 +0x3b2:  mov    %eax,(%esp)
085bd5eb +0x3b5:  call   0822d846 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2ef0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2ef0
085bd5f0 +0x3ba:  mov    %eax,%ebx
085bd5f2 +0x3bc:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
085bd5f7 +0x3c1:  movl   $0x0,0x18(%esp)
085bd5ff +0x3c9:  mov    %esi,0x14(%esp)
085bd603 +0x3cd:  mov    -0x18(%ebp),%edx
085bd606 +0x3d0:  mov    %edx,0x10(%esp)
085bd60a +0x3d4:  movl   $0x15,0xc(%esp)
085bd612 +0x3dc:  mov    %ebx,0x8(%esp)
085bd616 +0x3e0:  movl   $0x1,0x4(%esp)
085bd61e +0x3e8:  mov    %eax,(%esp)
085bd621 +0x3eb:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
085bd626 +0x3f0:  movl   $0x1,0x4(%esp)
085bd62e +0x3f8:  mov    0x8(%ebp),%eax
085bd631 +0x3fb:  mov    %eax,(%esp)
085bd634 +0x3fe:  call   0826b978 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x246>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x246
085bd639 +0x403:  mov    0x8(%ebp),%eax
085bd63c +0x406:  mov    %eax,(%esp)
085bd63f +0x409:  call   085ac59c <_ZN6CParty26checkInoutConditionDungeonEv>  ; CParty::checkInoutConditionDungeon()
085bd644 +0x40e:  mov    %eax,0x4(%esp)
085bd648 +0x412:  mov    0x8(%ebp),%eax
085bd64b +0x415:  mov    %eax,(%esp)
085bd64e +0x418:  call   085ac95e <_ZN6CParty25sendInoutConditionDungeonEN15RetryFailReason1TE>  ; CParty::sendInoutConditionDungeon(RetryFailReason::T)
085bd653 +0x41d:  mov    0x8(%ebp),%eax
085bd656 +0x420:  mov    %eax,(%esp)
085bd659 +0x423:  call   085bb0ac <_ZN6CParty24CheckHackAverageHitCountEv>  ; CParty::CheckHackAverageHitCount()
085bd65e +0x428:  mov    0x8(%ebp),%eax
085bd661 +0x42b:  mov    %eax,(%esp)
085bd664 +0x42e:  call   085bf850 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0xdae>  ; global constructors keyed to CParty::cMember::cMember()+0xdae
085bd669 +0x433:  mov    0x8(%ebp),%eax
085bd66c +0x436:  add    $0x1abc,%eax
085bd671 +0x43b:  mov    %eax,(%esp)
085bd674 +0x43e:  call   0827aab6 <_ZN24Secu_HackLogCheckByParty12dungeonClearEv>  ; Secu_HackLogCheckByParty::dungeonClear()
085bd679 +0x443:  jmp    085bd696 <+0x460>
085bd67b +0x445:  mov    %edx,%ebx
085bd67d +0x447:  mov    %eax,%esi
085bd67f +0x449:  lea    -0x28(%ebp),%eax
085bd682 +0x44c:  mov    %eax,(%esp)
085bd685 +0x44f:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085bd68a +0x454:  mov    %esi,%eax
085bd68c +0x456:  mov    %ebx,%edx
085bd68e +0x458:  mov    %eax,(%esp)
085bd691 +0x45b:  call   08ae3750 <_Unwind_Resume>
085bd696 +0x460:  lea    -0x28(%ebp),%eax
085bd699 +0x463:  mov    %eax,(%esp)
085bd69c +0x466:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085bd6a1 +0x46b:  add    $0xd0,%esp
085bd6a7 +0x471:  pop    %ebx
085bd6a8 +0x472:  pop    %esi
085bd6a9 +0x473:  pop    %ebp
085bd6aa +0x474:  ret
085bd6ab +0x475:  nop
```

## 反编译 C

```c
// CParty::TournamentDungeonClear @ 0x85bd236

/* CParty::TournamentDungeonClear(bool) */

void __thiscall CParty::TournamentDungeonClear(CParty *this,bool param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  TimerQueue *pTVar6;
  Inven_Item *this_00;
  Inven_Item local_a6 [122];
  PacketGuard local_2c [12];
  CDungeon *local_20;
  int local_1c;
  int local_18;
  char local_11;
  int local_10;
  
  local_20 = *(CDungeon **)(this + 0xcac);
  if (local_20 == (CDungeon *)0x0) {
    LogManager::logFormat
              (1,"party.cpp","void CParty::TournamentDungeonClear(bool)",0x45bc,
               "Tournament Dungeon is NULL");
  }
  else {
    cVar2 = CDungeon::isTournamentDungeon(local_20);
    if (cVar2 == '\x01') {
      if (param_1) {
        SaveCoin(this,1);
      }
      else {
        SaveCoin(this,2);
      }
      PacketGuard::PacketGuard(local_2c);
      for (local_18 = 0; local_18 < 4; local_18 = local_18 + 1) {
                    /* try { // try from 085bd339 to 085bd678 has its CatchHandler @ 085bd67b */
        cVar2 = _checkValidUser(this,local_18);
        if (cVar2 == '\x01') {
          this_00 = local_a6;
          for (iVar4 = 1; iVar4 != -1; iVar4 = iVar4 + -1) {
            Inven_Item::Inven_Item(this_00);
            this_00 = this_00 + 0x3d;
          }
          local_11 = CTournamentDungeonReward::GetItemFromCard
                               ((CTournamentDungeonReward *)(this + 0x17bc),0,local_18,local_a6,2);
          if (local_11 != '\0') {
            _putItemIntoUser(this,*(CUser **)(this + local_18 * 0x18 + 0x78),local_a6,local_2c);
          }
          if (param_1) {
            for (local_10 = 0; local_10 < 2; local_10 = local_10 + 1) {
              Inven_Item::reset(local_a6 + local_10 * 0x3d);
            }
            local_11 = CTournamentDungeonReward::GetItemFromCard
                                 ((CTournamentDungeonReward *)(this + 0x17bc),1,local_18,local_a6,2)
            ;
            if (local_11 != '\0') {
              _putItemIntoUser(this,*(CUser **)(this + local_18 * 0x18 + 0x78),local_a6,local_2c);
            }
            HistoryLog::WriteDunClear
                      (*(_IO_FILE **)(*(int *)(this + local_18 * 0x18 + 0x78) + 0x796f8));
            OnSuccessedDungeonClear(this,*(CUser **)(this + local_18 * 0x18 + 0x78));
            if (*(int *)(this + local_18 * 0x18 + 0x78) == 0) {
LAB_085bd520:
              bVar1 = false;
            }
            else {
              cVar2 = CUser::IsProperLevelDungeonUser(*(CUser **)(this + local_18 * 0x18 + 0x78));
              if (cVar2 == '\0') goto LAB_085bd520;
              bVar1 = true;
            }
            if (bVar1) {
              CUser::ProcProperLevelDungeonClear(*(CUser **)(this + local_18 * 0x18 + 0x78));
            }
          }
          else {
            OnFailedDungeonClear(this,*(CUser **)(this + local_18 * 0x18 + 0x78));
          }
        }
      }
      SetEPLPState(this,'\x02');
      local_1c = 0x3c;
      cVar2 = secretshop::SECRET_SHOP_DATA::IsOpen((SECRET_SHOP_DATA *)(this + 0x2a4));
      if (cVar2 != '\0') {
        iVar4 = G_CDataManager();
        local_1c = *(int *)(iVar4 + 0xa784) * 0x3c;
      }
      uVar3 = gen_timer_key(this,0x15);
      uVar5 = GetPartyIndex(this);
      pTVar6 = (TimerQueue *)G_TimerQueue();
      TimerQueue::InsertTimer(pTVar6,1,uVar5,0x15,local_1c,uVar3,0);
      set_state(this,'\x01');
      uVar3 = checkInoutConditionDungeon(this);
      sendInoutConditionDungeon(this,uVar3);
      CheckHackAverageHitCount(this);
      ClearMapHitCount(this);
      Secu_HackLogCheckByParty::dungeonClear((Secu_HackLogCheckByParty *)(this + 0x1abc));
      PacketGuard::~PacketGuard(local_2c);
    }
    else {
      uVar3 = CBattle_Field::get_dungeon_index((CBattle_Field *)(this + 0xb24));
      LogManager::logFormat
                (1,"party.cpp","void CParty::TournamentDungeonClear(bool)",0x45c2,
                 "Dungeon(%d) is can not call function",uVar3);
    }
  }
  return;
}
```
