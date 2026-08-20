# checkMoveMapHackCnt

`_ZN6CParty19checkMoveMapHackCntER12MSG_MOVE_MAP`

`CParty::checkMoveMapHackCnt(MSG_MOVE_MAP&)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085a83a2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085a83a2  _ZN6CParty19checkMoveMapHackCntER12MSG_MOVE_MAP
#           CParty::checkMoveMapHackCnt(MSG_MOVE_MAP&)
# range [0x085a83a2, 0x085a8c87]
085a83a2 +0x000:  push   %ebp
085a83a3 +0x001:  mov    %esp,%ebp
085a83a5 +0x003:  push   %edi
085a83a6 +0x004:  push   %esi
085a83a7 +0x005:  push   %ebx
085a83a8 +0x006:  sub    $0x6c,%esp
085a83ab +0x009:  mov    0x8(%ebp),%eax
085a83ae +0x00c:  mov    0x378(%eax),%eax
085a83b4 +0x012:  mov    %eax,-0x38(%ebp)
085a83b7 +0x015:  mov    0x8(%ebp),%eax
085a83ba +0x018:  mov    0x1ab8(%eax),%eax
085a83c0 +0x01e:  mov    %eax,-0x38(%ebp)
085a83c3 +0x021:  mov    0x8(%ebp),%eax
085a83c6 +0x024:  movl   $0x0,0x1ab8(%eax)
085a83d0 +0x02e:  mov    0x8(%ebp),%eax
085a83d3 +0x031:  movl   $0x0,0x378(%eax)
085a83dd +0x03b:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
085a83e4 +0x042:  call   081458ac <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x32f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x32f
085a83e9 +0x047:  mov    $0x0,%edx
085a83ee +0x04c:  mov    0x8(%ebp),%ecx
085a83f1 +0x04f:  mov    0x348(%ecx),%ebx
085a83f7 +0x055:  mov    0x344(%ecx),%ecx
085a83fd +0x05b:  sub    %ecx,%eax
085a83ff +0x05d:  sbb    %ebx,%edx
085a8401 +0x05f:  mov    0x8(%ebp),%ecx
085a8404 +0x062:  mov    0x340(%ecx),%ebx
085a840a +0x068:  mov    0x33c(%ecx),%ecx
085a8410 +0x06e:  sub    %ecx,%eax
085a8412 +0x070:  sbb    %ebx,%edx
085a8414 +0x072:  mov    0x8(%ebp),%ecx
085a8417 +0x075:  mov    %eax,0x334(%ecx)
085a841d +0x07b:  mov    %edx,0x338(%ecx)
085a8423 +0x081:  mov    0x8(%ebp),%eax
085a8426 +0x084:  add    $0xb24,%eax
085a842b +0x089:  mov    %eax,(%esp)
085a842e +0x08c:  call   085bf2e8 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x846>  ; global constructors keyed to CParty::cMember::cMember()+0x846
085a8433 +0x091:  xor    $0x1,%eax
085a8436 +0x094:  test   %al,%al
085a8438 +0x096:  je     085a8c80 <+0x8de>
085a843e +0x09c:  movl   $0x0,-0x34(%ebp)
085a8445 +0x0a3:  cmpl   $0x0,-0x38(%ebp)
085a8449 +0x0a7:  je     085a851b <+0x179>
085a844f +0x0ad:  mov    0x8(%ebp),%eax
085a8452 +0x0b0:  mov    0x1874(%eax),%edx
085a8458 +0x0b6:  mov    0x8(%ebp),%eax
085a845b +0x0b9:  add    $0x678,%edx
085a8461 +0x0bf:  mov    0xc(%eax,%edx,4),%eax
085a8465 +0x0c3:  mov    %eax,-0x30(%ebp)
085a8468 +0x0c6:  mov    0x8(%ebp),%eax
085a846b +0x0c9:  mov    0x1874(%eax),%ecx
085a8471 +0x0cf:  mov    -0x30(%ebp),%eax
085a8474 +0x0d2:  mov    %eax,%edx
085a8476 +0x0d4:  sar    $0x1f,%edx
085a8479 +0x0d7:  idivl  -0x38(%ebp)
085a847c +0x0da:  mov    %eax,%edx
085a847e +0x0dc:  mov    0x8(%ebp),%eax
085a8481 +0x0df:  add    $0x678,%ecx
085a8487 +0x0e5:  mov    %edx,0xc(%eax,%ecx,4)
085a848b +0x0e9:  mov    0x8(%ebp),%eax
085a848e +0x0ec:  mov    0x19e8(%eax),%edx
085a8494 +0x0f2:  mov    0x8(%ebp),%eax
085a8497 +0x0f5:  mov    0x1874(%eax),%ecx
085a849d +0x0fb:  mov    0x8(%ebp),%eax
085a84a0 +0x0fe:  add    $0x678,%ecx
085a84a6 +0x104:  mov    0xc(%eax,%ecx,4),%eax
085a84aa +0x108:  add    %eax,%edx
085a84ac +0x10a:  mov    0x8(%ebp),%eax
085a84af +0x10d:  mov    %edx,0x19e8(%eax)
085a84b5 +0x113:  mov    0x8(%ebp),%eax
085a84b8 +0x116:  mov    0x1874(%eax),%edx
085a84be +0x11c:  mov    0x8(%ebp),%eax
085a84c1 +0x11f:  add    $0x64c,%edx
085a84c7 +0x125:  mov    0x4(%eax,%edx,4),%eax
085a84cb +0x129:  mov    %eax,-0x2c(%ebp)
085a84ce +0x12c:  mov    0x8(%ebp),%eax
085a84d1 +0x12f:  mov    0x1874(%eax),%ecx
085a84d7 +0x135:  mov    -0x2c(%ebp),%eax
085a84da +0x138:  mov    %eax,%edx
085a84dc +0x13a:  sar    $0x1f,%edx
085a84df +0x13d:  idivl  -0x38(%ebp)
085a84e2 +0x140:  mov    %eax,%edx
085a84e4 +0x142:  mov    0x8(%ebp),%eax
085a84e7 +0x145:  add    $0x64c,%ecx
085a84ed +0x14b:  mov    %edx,0x4(%eax,%ecx,4)
085a84f1 +0x14f:  mov    0x8(%ebp),%eax
085a84f4 +0x152:  mov    0x1930(%eax),%edx
085a84fa +0x158:  mov    0x8(%ebp),%eax
085a84fd +0x15b:  mov    0x1874(%eax),%ecx
085a8503 +0x161:  mov    0x8(%ebp),%eax
085a8506 +0x164:  add    $0x64c,%ecx
085a850c +0x16a:  mov    0x4(%eax,%ecx,4),%eax
085a8510 +0x16e:  add    %eax,%edx
085a8512 +0x170:  mov    0x8(%ebp),%eax
085a8515 +0x173:  mov    %edx,0x1930(%eax)
085a851b +0x179:  movl   $0x0,-0x28(%ebp)
085a8522 +0x180:  jmp    085a8c1e <+0x87c>
085a8527 +0x185:  mov    -0x28(%ebp),%edx
085a852a +0x188:  mov    0xc(%ebp),%eax
085a852d +0x18b:  add    $0x8,%edx
085a8530 +0x18e:  movzwl 0xb(%eax,%edx,2),%eax
085a8535 +0x193:  cmp    $0xffff,%ax
085a8539 +0x197:  je     085a8c1a <+0x878>
085a853f +0x19d:  mov    -0x28(%ebp),%eax
085a8542 +0x1a0:  mov    %eax,0x4(%esp)
085a8546 +0x1a4:  mov    0x8(%ebp),%eax
085a8549 +0x1a7:  mov    %eax,(%esp)
085a854c +0x1aa:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
085a8551 +0x1af:  test   %al,%al
085a8553 +0x1b1:  je     085a8c1a <+0x878>
085a8559 +0x1b7:  mov    0x8(%ebp),%eax
085a855c +0x1ba:  mov    0xcac(%eax),%eax
085a8562 +0x1c0:  mov    %eax,(%esp)
085a8565 +0x1c3:  call   08365278 <_ZNK8CDungeon14IsEnterEachMapEv>  ; CDungeon::IsEnterEachMap() const
085a856a +0x1c8:  test   %al,%al
085a856c +0x1ca:  je     085a8581 <+0x1df>
085a856e +0x1cc:  mov    0xc(%ebp),%eax
085a8571 +0x1cf:  movzbl 0x39(%eax),%eax
085a8575 +0x1d3:  movsbl %al,%eax
085a8578 +0x1d6:  cmp    -0x28(%ebp),%eax
085a857b +0x1d9:  jne    085a8c19 <+0x877>
085a8581 +0x1df:  mov    0x8(%ebp),%eax
085a8584 +0x1e2:  add    $0xb24,%eax
085a8589 +0x1e7:  mov    %eax,(%esp)
085a858c +0x1ea:  call   0830eac8 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x6ad>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x6ad
085a8591 +0x1ef:  mov    0x4(%eax),%esi
085a8594 +0x1f2:  mov    0x8(%ebp),%eax
085a8597 +0x1f5:  mov    0x338(%eax),%edx
085a859d +0x1fb:  mov    0x334(%eax),%eax
085a85a3 +0x201:  mov    %eax,-0x4c(%ebp)
085a85a6 +0x204:  mov    $0x10624dd3,%edx
085a85ab +0x209:  mov    -0x4c(%ebp),%eax
085a85ae +0x20c:  mul    %edx
085a85b0 +0x20e:  mov    %edx,%eax
085a85b2 +0x210:  shr    $0x6,%eax
085a85b5 +0x213:  mov    %eax,%ebx
085a85b7 +0x215:  mov    -0x28(%ebp),%edx
085a85ba +0x218:  mov    0xc(%ebp),%eax
085a85bd +0x21b:  add    $0x8,%edx
085a85c0 +0x21e:  movzwl 0xb(%eax,%edx,2),%eax
085a85c5 +0x223:  movzwl %ax,%ecx
085a85c8 +0x226:  mov    -0x28(%ebp),%edx
085a85cb +0x229:  mov    0x8(%ebp),%edi
085a85ce +0x22c:  mov    %edx,%eax
085a85d0 +0x22e:  add    %eax,%eax
085a85d2 +0x230:  add    %edx,%eax
085a85d4 +0x232:  shl    $0x3,%eax
085a85d7 +0x235:  lea    (%edi,%eax,1),%eax
085a85da +0x238:  add    $0x78,%eax
085a85dd +0x23b:  mov    (%eax),%eax
085a85df +0x23d:  add    $0x79700,%eax
085a85e4 +0x242:  mov    %esi,0xc(%esp)
085a85e8 +0x246:  mov    %ebx,0x8(%esp)
085a85ec +0x24a:  mov    %ecx,0x4(%esp)
085a85f0 +0x24e:  mov    %eax,(%esp)
085a85f3 +0x251:  call   08684b22 <_ZN15cUserHistoryLog8MapClearEtii>  ; cUserHistoryLog::MapClear(unsigned short, int, int)
085a85f8 +0x256:  mov    -0x28(%ebp),%edx
085a85fb +0x259:  mov    0xc(%ebp),%eax
085a85fe +0x25c:  add    $0x8,%edx
085a8601 +0x25f:  movzwl 0xb(%eax,%edx,2),%eax
085a8606 +0x264:  test   %ax,%ax
085a8609 +0x267:  jne    085a866d <+0x2cb>
085a860b +0x269:  mov    -0x28(%ebp),%edx
085a860e +0x26c:  mov    0x8(%ebp),%ecx
085a8611 +0x26f:  mov    %edx,%eax
085a8613 +0x271:  add    %eax,%eax
085a8615 +0x273:  add    %edx,%eax
085a8617 +0x275:  shl    $0x3,%eax
085a861a +0x278:  lea    (%ecx,%eax,1),%eax
085a861d +0x27b:  add    $0x78,%eax
085a8620 +0x27e:  mov    (%eax),%ebx
085a8622 +0x280:  mov    -0x28(%ebp),%edx
085a8625 +0x283:  mov    0x8(%ebp),%ecx
085a8628 +0x286:  mov    %edx,%eax
085a862a +0x288:  add    %eax,%eax
085a862c +0x28a:  add    %edx,%eax
085a862e +0x28c:  shl    $0x3,%eax
085a8631 +0x28f:  lea    (%ecx,%eax,1),%eax
085a8634 +0x292:  add    $0x78,%eax
085a8637 +0x295:  mov    (%eax),%eax
085a8639 +0x297:  mov    %eax,(%esp)
085a863c +0x29a:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
085a8641 +0x29f:  movl   $0x0,0x14(%esp)
085a8649 +0x2a7:  movl   $0x0,0x10(%esp)
085a8651 +0x2af:  movl   $0x1,0xc(%esp)
085a8659 +0x2b7:  movl   $0x19b,0x8(%esp)
085a8661 +0x2bf:  mov    %ebx,0x4(%esp)
085a8665 +0x2c3:  mov    %eax,(%esp)
085a8668 +0x2c6:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
085a866d +0x2cb:  mov    0x8(%ebp),%eax
085a8670 +0x2ce:  mov    0x338(%eax),%edx
085a8676 +0x2d4:  mov    0x334(%eax),%eax
085a867c +0x2da:  mov    %eax,-0x4c(%ebp)
085a867f +0x2dd:  mov    $0x10624dd3,%edx
085a8684 +0x2e2:  mov    -0x4c(%ebp),%eax
085a8687 +0x2e5:  mul    %edx
085a8689 +0x2e7:  mov    %edx,%eax
085a868b +0x2e9:  shr    $0x6,%eax
085a868e +0x2ec:  mov    %eax,-0x24(%ebp)
085a8691 +0x2ef:  cmpl   $0x0,-0x24(%ebp)
085a8695 +0x2f3:  je     085a8743 <+0x3a1>
085a869b +0x2f9:  mov    -0x28(%ebp),%edx
085a869e +0x2fc:  mov    0xc(%ebp),%eax
085a86a1 +0x2ff:  add    $0x8,%edx
085a86a4 +0x302:  movzwl 0xb(%eax,%edx,2),%eax
085a86a9 +0x307:  movzwl %ax,%eax
085a86ac +0x30a:  mov    $0x0,%edx
085a86b1 +0x30f:  divl   -0x24(%ebp)
085a86b4 +0x312:  mov    %eax,-0x1c(%ebp)
085a86b7 +0x315:  cmpl   $0x4,-0x1c(%ebp)
085a86bb +0x319:  jbe    085a8743 <+0x3a1>
085a86c1 +0x31f:  movl   $0x64,-0x40(%ebp)
085a86c8 +0x326:  mov    -0x1c(%ebp),%eax
085a86cb +0x329:  sub    $0x4,%eax
085a86ce +0x32c:  mov    %eax,-0x3c(%ebp)
085a86d1 +0x32f:  lea    -0x40(%ebp),%eax
085a86d4 +0x332:  mov    %eax,0x4(%esp)
085a86d8 +0x336:  lea    -0x3c(%ebp),%eax
085a86db +0x339:  mov    %eax,(%esp)
085a86de +0x33c:  call   08236091 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb73b>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb73b
085a86e3 +0x341:  mov    (%eax),%esi
085a86e5 +0x343:  mov    -0x28(%ebp),%edx
085a86e8 +0x346:  mov    0x8(%ebp),%ecx
085a86eb +0x349:  mov    %edx,%eax
085a86ed +0x34b:  add    %eax,%eax
085a86ef +0x34d:  add    %edx,%eax
085a86f1 +0x34f:  shl    $0x3,%eax
085a86f4 +0x352:  lea    (%ecx,%eax,1),%eax
085a86f7 +0x355:  add    $0x78,%eax
085a86fa +0x358:  mov    (%eax),%ebx
085a86fc +0x35a:  mov    -0x28(%ebp),%edx
085a86ff +0x35d:  mov    0x8(%ebp),%ecx
085a8702 +0x360:  mov    %edx,%eax
085a8704 +0x362:  add    %eax,%eax
085a8706 +0x364:  add    %edx,%eax
085a8708 +0x366:  shl    $0x3,%eax
085a870b +0x369:  lea    (%ecx,%eax,1),%eax
085a870e +0x36c:  add    $0x78,%eax
085a8711 +0x36f:  mov    (%eax),%eax
085a8713 +0x371:  mov    %eax,(%esp)
085a8716 +0x374:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
085a871b +0x379:  movl   $0x0,0x14(%esp)
085a8723 +0x381:  movl   $0x0,0x10(%esp)
085a872b +0x389:  mov    %esi,0xc(%esp)
085a872f +0x38d:  movl   $0x340,0x8(%esp)
085a8737 +0x395:  mov    %ebx,0x4(%esp)
085a873b +0x399:  mov    %eax,(%esp)
085a873e +0x39c:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
085a8743 +0x3a1:  mov    -0x28(%ebp),%edx
085a8746 +0x3a4:  mov    0xc(%ebp),%eax
085a8749 +0x3a7:  add    $0x8,%edx
085a874c +0x3aa:  movzwl 0xb(%eax,%edx,2),%eax
085a8751 +0x3af:  movzwl %ax,%eax
085a8754 +0x3b2:  add    %eax,-0x34(%ebp)
085a8757 +0x3b5:  mov    0x8(%ebp),%eax
085a875a +0x3b8:  mov    0xcac(%eax),%eax
085a8760 +0x3be:  test   %eax,%eax
085a8762 +0x3c0:  je     085a87ae <+0x40c>
085a8764 +0x3c2:  mov    0x8(%ebp),%eax
085a8767 +0x3c5:  mov    0xcac(%eax),%eax
085a876d +0x3cb:  movzbl 0x89c(%eax),%eax
085a8774 +0x3d2:  xor    $0x1,%eax
085a8777 +0x3d5:  test   %al,%al
085a8779 +0x3d7:  je     085a87ae <+0x40c>
085a877b +0x3d9:  mov    0x8(%ebp),%eax
085a877e +0x3dc:  mov    0xcac(%eax),%eax
085a8784 +0x3e2:  mov    %eax,(%esp)
085a8787 +0x3e5:  call   0826b938 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x206>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x206
085a878c +0x3ea:  test   %al,%al
085a878e +0x3ec:  jne    085a87ae <+0x40c>
085a8790 +0x3ee:  cmpl   $0x0,-0x38(%ebp)
085a8794 +0x3f2:  je     085a87ae <+0x40c>
085a8796 +0x3f4:  mov    0x8(%ebp),%eax
085a8799 +0x3f7:  movzbl 0x1aa0(%eax),%eax
085a87a0 +0x3fe:  xor    $0x1,%eax
085a87a3 +0x401:  test   %al,%al
085a87a5 +0x403:  je     085a87ae <+0x40c>
085a87a7 +0x405:  mov    $0x1,%eax
085a87ac +0x40a:  jmp    085a87b3 <+0x411>
085a87ae +0x40c:  mov    $0x0,%eax
085a87b3 +0x411:  test   %al,%al
085a87b5 +0x413:  je     085a888a <+0x4e8>
085a87bb +0x419:  mov    -0x28(%ebp),%edx
085a87be +0x41c:  mov    0x8(%ebp),%ecx
085a87c1 +0x41f:  mov    %edx,%eax
085a87c3 +0x421:  add    %eax,%eax
085a87c5 +0x423:  add    %edx,%eax
085a87c7 +0x425:  shl    $0x3,%eax
085a87ca +0x428:  lea    (%ecx,%eax,1),%eax
085a87cd +0x42b:  add    $0x78,%eax
085a87d0 +0x42e:  mov    (%eax),%eax
085a87d2 +0x430:  mov    0x8eb48(%eax),%edx
085a87d8 +0x436:  add    $0x1,%edx
085a87db +0x439:  mov    %edx,0x8eb48(%eax)
085a87e1 +0x43f:  mov    -0x28(%ebp),%edx
085a87e4 +0x442:  mov    0x8(%ebp),%ecx
085a87e7 +0x445:  mov    %edx,%eax
085a87e9 +0x447:  add    %eax,%eax
085a87eb +0x449:  add    %edx,%eax
085a87ed +0x44b:  shl    $0x3,%eax
085a87f0 +0x44e:  lea    (%ecx,%eax,1),%eax
085a87f3 +0x451:  add    $0x78,%eax
085a87f6 +0x454:  mov    (%eax),%eax
085a87f8 +0x456:  mov    0x8eb48(%eax),%eax
085a87fe +0x45c:  cmp    $0x9,%eax
085a8801 +0x45f:  jle    085a888a <+0x4e8>
085a8807 +0x465:  mov    -0x28(%ebp),%edx
085a880a +0x468:  mov    0x8(%ebp),%ecx
085a880d +0x46b:  mov    %edx,%eax
085a880f +0x46d:  add    %eax,%eax
085a8811 +0x46f:  add    %edx,%eax
085a8813 +0x471:  shl    $0x3,%eax
085a8816 +0x474:  lea    (%ecx,%eax,1),%eax
085a8819 +0x477:  add    $0x78,%eax
085a881c +0x47a:  mov    (%eax),%eax
085a881e +0x47c:  movl   $0x0,0x8eb48(%eax)
085a8828 +0x486:  mov    -0x28(%ebp),%edx
085a882b +0x489:  mov    0x8(%ebp),%ecx
085a882e +0x48c:  mov    %edx,%eax
085a8830 +0x48e:  add    %eax,%eax
085a8832 +0x490:  add    %edx,%eax
085a8834 +0x492:  shl    $0x3,%eax
085a8837 +0x495:  lea    (%ecx,%eax,1),%eax
085a883a +0x498:  add    $0x78,%eax
085a883d +0x49b:  mov    (%eax),%ebx
085a883f +0x49d:  mov    -0x28(%ebp),%edx
085a8842 +0x4a0:  mov    0x8(%ebp),%ecx
085a8845 +0x4a3:  mov    %edx,%eax
085a8847 +0x4a5:  add    %eax,%eax
085a8849 +0x4a7:  add    %edx,%eax
085a884b +0x4a9:  shl    $0x3,%eax
085a884e +0x4ac:  lea    (%ecx,%eax,1),%eax
085a8851 +0x4af:  add    $0x78,%eax
085a8854 +0x4b2:  mov    (%eax),%eax
085a8856 +0x4b4:  mov    %eax,(%esp)
085a8859 +0x4b7:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
085a885e +0x4bc:  movl   $0x0,0x14(%esp)
085a8866 +0x4c4:  movl   $0x0,0x10(%esp)
085a886e +0x4cc:  movl   $0x1,0xc(%esp)
085a8876 +0x4d4:  movl   $0xdc,0x8(%esp)
085a887e +0x4dc:  mov    %ebx,0x4(%esp)
085a8882 +0x4e0:  mov    %eax,(%esp)
085a8885 +0x4e3:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
085a888a +0x4e8:  mov    0x8(%ebp),%eax
085a888d +0x4eb:  movb   $0x0,0x1aa0(%eax)
085a8894 +0x4f2:  mov    0x8(%ebp),%eax
085a8897 +0x4f5:  mov    0x338(%eax),%edx
085a889d +0x4fb:  mov    0x334(%eax),%eax
085a88a3 +0x501:  mov    %eax,-0x4c(%ebp)
085a88a6 +0x504:  mov    $0x10624dd3,%edx
085a88ab +0x509:  mov    -0x4c(%ebp),%eax
085a88ae +0x50c:  mul    %edx
085a88b0 +0x50e:  mov    %edx,%eax
085a88b2 +0x510:  shr    $0x6,%eax
085a88b5 +0x513:  mov    %eax,-0x20(%ebp)
085a88b8 +0x516:  mov    -0x28(%ebp),%edx
085a88bb +0x519:  mov    0x8(%ebp),%ecx
085a88be +0x51c:  mov    %edx,%eax
085a88c0 +0x51e:  add    %eax,%eax
085a88c2 +0x520:  add    %edx,%eax
085a88c4 +0x522:  shl    $0x3,%eax
085a88c7 +0x525:  lea    (%ecx,%eax,1),%eax
085a88ca +0x528:  add    $0x78,%eax
085a88cd +0x52b:  mov    (%eax),%eax
085a88cf +0x52d:  mov    %eax,(%esp)
085a88d2 +0x530:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
085a88d7 +0x535:  cmp    $0x13,%eax
085a88da +0x538:  jle    085a8ace <+0x72c>
085a88e0 +0x53e:  mov    -0x28(%ebp),%eax
085a88e3 +0x541:  mov    0x8(%ebp),%edx
085a88e6 +0x544:  movzbl 0x380(%edx,%eax,1),%eax
085a88ee +0x54c:  test   %al,%al
085a88f0 +0x54e:  je     085a8ace <+0x72c>
085a88f6 +0x554:  mov    -0x28(%ebp),%edx
085a88f9 +0x557:  mov    0x8(%ebp),%eax
085a88fc +0x55a:  add    $0x6a8,%edx
085a8902 +0x560:  mov    0x4(%eax,%edx,4),%eax
085a8906 +0x564:  test   %eax,%eax
085a8908 +0x566:  je     085a89a4 <+0x602>
085a890e +0x56c:  mov    -0x20(%ebp),%ecx
085a8911 +0x56f:  mov    $0xcccccccd,%edx
085a8916 +0x574:  mov    %ecx,%eax
085a8918 +0x576:  mul    %edx
085a891a +0x578:  shr    $0x2,%edx
085a891d +0x57b:  mov    %edx,%eax
085a891f +0x57d:  shl    $0x2,%eax
085a8922 +0x580:  add    %edx,%eax
085a8924 +0x582:  mov    %ecx,%edx
085a8926 +0x584:  sub    %eax,%edx
085a8928 +0x586:  test   %edx,%edx
085a892a +0x588:  jne    085a8955 <+0x5b3>
085a892c +0x58a:  mov    -0x28(%ebp),%edx
085a892f +0x58d:  mov    0x8(%ebp),%eax
085a8932 +0x590:  add    $0x6a8,%edx
085a8938 +0x596:  mov    0x4(%eax,%edx,4),%ecx
085a893c +0x59a:  mov    -0x20(%ebp),%eax
085a893f +0x59d:  mov    %eax,-0x4c(%ebp)
085a8942 +0x5a0:  mov    $0xcccccccd,%edx
085a8947 +0x5a5:  mov    -0x4c(%ebp),%eax
085a894a +0x5a8:  mul    %edx
085a894c +0x5aa:  mov    %edx,%eax
085a894e +0x5ac:  shr    $0x2,%eax
085a8951 +0x5af:  cmp    %eax,%ecx
085a8953 +0x5b1:  jbe    085a89a4 <+0x602>
085a8955 +0x5b3:  mov    -0x20(%ebp),%ecx
085a8958 +0x5b6:  mov    $0xcccccccd,%edx
085a895d +0x5bb:  mov    %ecx,%eax
085a895f +0x5bd:  mul    %edx
085a8961 +0x5bf:  shr    $0x2,%edx
085a8964 +0x5c2:  mov    %edx,%eax
085a8966 +0x5c4:  shl    $0x2,%eax
085a8969 +0x5c7:  add    %edx,%eax
085a896b +0x5c9:  mov    %ecx,%edx
085a896d +0x5cb:  sub    %eax,%edx
085a896f +0x5cd:  test   %edx,%edx
085a8971 +0x5cf:  je     085a8ace <+0x72c>
085a8977 +0x5d5:  mov    -0x28(%ebp),%edx
085a897a +0x5d8:  mov    0x8(%ebp),%eax
085a897d +0x5db:  add    $0x6a8,%edx
085a8983 +0x5e1:  mov    0x4(%eax,%edx,4),%ecx
085a8987 +0x5e5:  mov    -0x20(%ebp),%eax
085a898a +0x5e8:  mov    %eax,-0x4c(%ebp)
085a898d +0x5eb:  mov    $0xcccccccd,%edx
085a8992 +0x5f0:  mov    -0x4c(%ebp),%eax
085a8995 +0x5f3:  mul    %edx
085a8997 +0x5f5:  mov    %edx,%eax
085a8999 +0x5f7:  shr    $0x2,%eax
085a899c +0x5fa:  cmp    %eax,%ecx
085a899e +0x5fc:  jae    085a8ace <+0x72c>
085a89a4 +0x602:  mov    -0x28(%ebp),%edx
085a89a7 +0x605:  mov    0x8(%ebp),%ecx
085a89aa +0x608:  mov    %edx,%eax
085a89ac +0x60a:  add    %eax,%eax
085a89ae +0x60c:  add    %edx,%eax
085a89b0 +0x60e:  shl    $0x3,%eax
085a89b3 +0x611:  lea    (%ecx,%eax,1),%eax
085a89b6 +0x614:  add    $0x78,%eax
085a89b9 +0x617:  mov    (%eax),%eax
085a89bb +0x619:  mov    %eax,(%esp)
085a89be +0x61c:  call   0819a8a6 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x58c>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x58c
085a89c3 +0x621:  movl   $0x10d3,0x4(%esp)
085a89cb +0x629:  mov    %eax,(%esp)
085a89ce +0x62c:  call   086acffe <_ZNK9UserQuest12IsDoingQuestEi>  ; UserQuest::IsDoingQuest(int) const
085a89d3 +0x631:  xor    $0x1,%eax
085a89d6 +0x634:  test   %al,%al
085a89d8 +0x636:  jne    085a8a08 <+0x666>
085a89da +0x638:  mov    0x8(%ebp),%eax
085a89dd +0x63b:  add    $0xb24,%eax
085a89e2 +0x640:  mov    %eax,(%esp)
085a89e5 +0x643:  call   0822d0d8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2782>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2782
085a89ea +0x648:  cmp    $0xb,%eax
085a89ed +0x64b:  jne    085a8a08 <+0x666>
085a89ef +0x64d:  mov    0x8(%ebp),%eax
085a89f2 +0x650:  add    $0xb24,%eax
085a89f7 +0x655:  mov    %eax,(%esp)
085a89fa +0x658:  call   080f981c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x28>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x28
085a89ff +0x65d:  cmp    $0x2,%eax
085a8a02 +0x660:  je     085a8ace <+0x72c>
085a8a08 +0x666:  mov    -0x28(%ebp),%edx
085a8a0b +0x669:  mov    0x8(%ebp),%ecx
085a8a0e +0x66c:  mov    %edx,%eax
085a8a10 +0x66e:  add    %eax,%eax
085a8a12 +0x670:  add    %edx,%eax
085a8a14 +0x672:  shl    $0x3,%eax
085a8a17 +0x675:  lea    (%ecx,%eax,1),%eax
085a8a1a +0x678:  add    $0x78,%eax
085a8a1d +0x67b:  mov    (%eax),%eax
085a8a1f +0x67d:  mov    %eax,(%esp)
085a8a22 +0x680:  call   0819a8a6 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x58c>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x58c
085a8a27 +0x685:  movl   $0x10d4,0x4(%esp)
085a8a2f +0x68d:  mov    %eax,(%esp)
085a8a32 +0x690:  call   086acffe <_ZNK9UserQuest12IsDoingQuestEi>  ; UserQuest::IsDoingQuest(int) const
085a8a37 +0x695:  xor    $0x1,%eax
085a8a3a +0x698:  test   %al,%al
085a8a3c +0x69a:  jne    085a8a68 <+0x6c6>
085a8a3e +0x69c:  mov    0x8(%ebp),%eax
085a8a41 +0x69f:  add    $0xb24,%eax
085a8a46 +0x6a4:  mov    %eax,(%esp)
085a8a49 +0x6a7:  call   0822d0d8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2782>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2782
085a8a4e +0x6ac:  cmp    $0xc,%eax
085a8a51 +0x6af:  jne    085a8a68 <+0x6c6>
085a8a53 +0x6b1:  mov    0x8(%ebp),%eax
085a8a56 +0x6b4:  add    $0xb24,%eax
085a8a5b +0x6b9:  mov    %eax,(%esp)
085a8a5e +0x6bc:  call   080f981c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x28>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x28
085a8a63 +0x6c1:  cmp    $0x2,%eax
085a8a66 +0x6c4:  je     085a8ace <+0x72c>
085a8a68 +0x6c6:  mov    -0x28(%ebp),%edx
085a8a6b +0x6c9:  mov    0x8(%ebp),%ecx
085a8a6e +0x6cc:  mov    %edx,%eax
085a8a70 +0x6ce:  add    %eax,%eax
085a8a72 +0x6d0:  add    %edx,%eax
085a8a74 +0x6d2:  shl    $0x3,%eax
085a8a77 +0x6d5:  lea    (%ecx,%eax,1),%eax
085a8a7a +0x6d8:  add    $0x78,%eax
085a8a7d +0x6db:  mov    (%eax),%eax
085a8a7f +0x6dd:  mov    %eax,(%esp)
085a8a82 +0x6e0:  call   0819a8a6 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x58c>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x58c
085a8a87 +0x6e5:  movl   $0x10d8,0x4(%esp)
085a8a8f +0x6ed:  mov    %eax,(%esp)
085a8a92 +0x6f0:  call   086acffe <_ZNK9UserQuest12IsDoingQuestEi>  ; UserQuest::IsDoingQuest(int) const
085a8a97 +0x6f5:  xor    $0x1,%eax
085a8a9a +0x6f8:  test   %al,%al
085a8a9c +0x6fa:  jne    085a8ac7 <+0x725>
085a8a9e +0x6fc:  mov    0x8(%ebp),%eax
085a8aa1 +0x6ff:  add    $0xb24,%eax
085a8aa6 +0x704:  mov    %eax,(%esp)
085a8aa9 +0x707:  call   0822d0d8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2782>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2782
085a8aae +0x70c:  cmp    $0xf,%eax
085a8ab1 +0x70f:  jne    085a8ac7 <+0x725>
085a8ab3 +0x711:  mov    0x8(%ebp),%eax
085a8ab6 +0x714:  add    $0xb24,%eax
085a8abb +0x719:  mov    %eax,(%esp)
085a8abe +0x71c:  call   080f981c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x28>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x28
085a8ac3 +0x721:  test   %eax,%eax
085a8ac5 +0x723:  jg     085a8ace <+0x72c>
085a8ac7 +0x725:  mov    $0x1,%eax
085a8acc +0x72a:  jmp    085a8ad3 <+0x731>
085a8ace +0x72c:  mov    $0x0,%eax
085a8ad3 +0x731:  test   %al,%al
085a8ad5 +0x733:  je     085a8b78 <+0x7d6>
085a8adb +0x739:  mov    -0x28(%ebp),%edx
085a8ade +0x73c:  mov    0x8(%ebp),%eax
085a8ae1 +0x73f:  add    $0x6a8,%edx
085a8ae7 +0x745:  mov    0x4(%eax,%edx,4),%eax
085a8aeb +0x749:  mov    %eax,%ecx
085a8aed +0x74b:  mov    -0x28(%ebp),%edx
085a8af0 +0x74e:  mov    0x8(%ebp),%ebx
085a8af3 +0x751:  mov    %edx,%eax
085a8af5 +0x753:  add    %eax,%eax
085a8af7 +0x755:  add    %edx,%eax
085a8af9 +0x757:  shl    $0x3,%eax
085a8afc +0x75a:  lea    (%ebx,%eax,1),%eax
085a8aff +0x75d:  add    $0x78,%eax
085a8b02 +0x760:  mov    (%eax),%eax
085a8b04 +0x762:  mov    %ecx,0x8(%esp)
085a8b08 +0x766:  movl   $0x84,0x4(%esp)
085a8b10 +0x76e:  mov    %eax,(%esp)
085a8b13 +0x771:  call   080f9968 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x174>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x174
085a8b18 +0x776:  mov    %eax,%esi
085a8b1a +0x778:  mov    -0x28(%ebp),%edx
085a8b1d +0x77b:  mov    0x8(%ebp),%ecx
085a8b20 +0x77e:  mov    %edx,%eax
085a8b22 +0x780:  add    %eax,%eax
085a8b24 +0x782:  add    %edx,%eax
085a8b26 +0x784:  shl    $0x3,%eax
085a8b29 +0x787:  lea    (%ecx,%eax,1),%eax
085a8b2c +0x78a:  add    $0x78,%eax
085a8b2f +0x78d:  mov    (%eax),%ebx
085a8b31 +0x78f:  mov    -0x28(%ebp),%edx
085a8b34 +0x792:  mov    0x8(%ebp),%ecx
085a8b37 +0x795:  mov    %edx,%eax
085a8b39 +0x797:  add    %eax,%eax
085a8b3b +0x799:  add    %edx,%eax
085a8b3d +0x79b:  shl    $0x3,%eax
085a8b40 +0x79e:  lea    (%ecx,%eax,1),%eax
085a8b43 +0x7a1:  add    $0x78,%eax
085a8b46 +0x7a4:  mov    (%eax),%eax
085a8b48 +0x7a6:  mov    %eax,(%esp)
085a8b4b +0x7a9:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
085a8b50 +0x7ae:  movl   $0x0,0x14(%esp)
085a8b58 +0x7b6:  mov    %esi,0x10(%esp)
085a8b5c +0x7ba:  movl   $0x1,0xc(%esp)
085a8b64 +0x7c2:  movl   $0x84,0x8(%esp)
085a8b6c +0x7ca:  mov    %ebx,0x4(%esp)
085a8b70 +0x7ce:  mov    %eax,(%esp)
085a8b73 +0x7d1:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
085a8b78 +0x7d6:  mov    -0x28(%ebp),%edx
085a8b7b +0x7d9:  mov    0x8(%ebp),%eax
085a8b7e +0x7dc:  add    $0x6a8,%edx
085a8b84 +0x7e2:  movl   $0x0,0x4(%eax,%edx,4)
085a8b8c +0x7ea:  mov    0xc(%ebp),%eax
085a8b8f +0x7ed:  mov    0x35(%eax),%eax
085a8b92 +0x7f0:  test   %eax,%eax
085a8b94 +0x7f2:  jne    085a8bac <+0x80a>
085a8b96 +0x7f4:  mov    0x8(%ebp),%eax
085a8b99 +0x7f7:  mov    %eax,(%esp)
085a8b9c +0x7fa:  call   0822d812 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2ebc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2ebc
085a8ba1 +0x7ff:  test   %al,%al
085a8ba3 +0x801:  je     085a8bac <+0x80a>
085a8ba5 +0x803:  mov    $0x1,%eax
085a8baa +0x808:  jmp    085a8bb1 <+0x80f>
085a8bac +0x80a:  mov    $0x0,%eax
085a8bb1 +0x80f:  test   %al,%al
085a8bb3 +0x811:  je     085a8c1a <+0x878>
085a8bb5 +0x813:  mov    -0x28(%ebp),%edx
085a8bb8 +0x816:  mov    0x8(%ebp),%ecx
085a8bbb +0x819:  mov    %edx,%eax
085a8bbd +0x81b:  add    %eax,%eax
085a8bbf +0x81d:  add    %edx,%eax
085a8bc1 +0x81f:  shl    $0x3,%eax
085a8bc4 +0x822:  lea    (%ecx,%eax,1),%eax
085a8bc7 +0x825:  add    $0x78,%eax
085a8bca +0x828:  mov    (%eax),%ebx
085a8bcc +0x82a:  mov    -0x28(%ebp),%edx
085a8bcf +0x82d:  mov    0x8(%ebp),%ecx
085a8bd2 +0x830:  mov    %edx,%eax
085a8bd4 +0x832:  add    %eax,%eax
085a8bd6 +0x834:  add    %edx,%eax
085a8bd8 +0x836:  shl    $0x3,%eax
085a8bdb +0x839:  lea    (%ecx,%eax,1),%eax
085a8bde +0x83c:  add    $0x78,%eax
085a8be1 +0x83f:  mov    (%eax),%eax
085a8be3 +0x841:  mov    %eax,(%esp)
085a8be6 +0x844:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
085a8beb +0x849:  movl   $0x0,0x14(%esp)
085a8bf3 +0x851:  movl   $0x0,0x10(%esp)
085a8bfb +0x859:  movl   $0x1,0xc(%esp)
085a8c03 +0x861:  movl   $0x1a0,0x8(%esp)
085a8c0b +0x869:  mov    %ebx,0x4(%esp)
085a8c0f +0x86d:  mov    %eax,(%esp)
085a8c12 +0x870:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
085a8c17 +0x875:  jmp    085a8c1a <+0x878>
085a8c19 +0x877:  nop
085a8c1a +0x878:  addl   $0x1,-0x28(%ebp)
085a8c1e +0x87c:  cmpl   $0x3,-0x28(%ebp)
085a8c22 +0x880:  setle  %al
085a8c25 +0x883:  test   %al,%al
085a8c27 +0x885:  jne    085a8527 <+0x185>
085a8c2d +0x88b:  mov    0x8(%ebp),%eax
085a8c30 +0x88e:  mov    0x1874(%eax),%edx
085a8c36 +0x894:  mov    0x8(%ebp),%eax
085a8c39 +0x897:  lea    0x61c(%edx),%ecx
085a8c3f +0x89d:  mov    -0x34(%ebp),%edx
085a8c42 +0x8a0:  mov    %edx,0xc(%eax,%ecx,4)
085a8c46 +0x8a4:  mov    0x8(%ebp),%eax
085a8c49 +0x8a7:  mov    0x1878(%eax),%eax
085a8c4f +0x8ad:  mov    %eax,%edx
085a8c51 +0x8af:  add    -0x34(%ebp),%edx
085a8c54 +0x8b2:  mov    0x8(%ebp),%eax
085a8c57 +0x8b5:  mov    %edx,0x1878(%eax)
085a8c5d +0x8bb:  mov    0x8(%ebp),%eax
085a8c60 +0x8be:  mov    0x1874(%eax),%eax
085a8c66 +0x8c4:  cmp    $0x2b,%eax
085a8c69 +0x8c7:  jg     085a8c80 <+0x8de>
085a8c6b +0x8c9:  mov    0x8(%ebp),%eax
085a8c6e +0x8cc:  mov    0x1874(%eax),%eax
085a8c74 +0x8d2:  lea    0x1(%eax),%edx
085a8c77 +0x8d5:  mov    0x8(%ebp),%eax
085a8c7a +0x8d8:  mov    %edx,0x1874(%eax)
085a8c80 +0x8de:  add    $0x6c,%esp
085a8c83 +0x8e1:  pop    %ebx
085a8c84 +0x8e2:  pop    %esi
085a8c85 +0x8e3:  pop    %edi
085a8c86 +0x8e4:  pop    %ebp
085a8c87 +0x8e5:  ret
```

## 反编译 C

```c
// CParty::checkMoveMapHackCnt @ 0x85a83a2

/* CParty::checkMoveMapHackCnt(MSG_MOVE_MAP&) */

void __thiscall CParty::checkMoveMapHackCnt(CParty *this,MSG_MOVE_MAP *param_1)

{
  undefined4 uVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  CHackAnalyzer *pCVar7;
  uint *puVar8;
  UserQuest *pUVar9;
  undefined4 uVar10;
  uint local_44;
  uint local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  
  local_3c = *(int *)(this + 0x1ab8);
  *(undefined4 *)(this + 0x1ab8) = 0;
  *(undefined4 *)(this + 0x378) = 0;
  uVar4 = CSystemTime::getCurTickCount((CSystemTime *)GlobalData::s_systemTime_);
  uVar5 = uVar4 - *(uint *)(this + 0x344);
  *(uint *)(this + 0x334) = uVar5 - *(uint *)(this + 0x33c);
  *(uint *)(this + 0x338) =
       ((-(uint)(uVar4 < *(uint *)(this + 0x344)) - *(int *)(this + 0x348)) - *(int *)(this + 0x340)
       ) - (uint)(uVar5 < *(uint *)(this + 0x33c));
  cVar3 = CBattle_Field::IsVisitedCurrentMap((CBattle_Field *)(this + 0xb24));
  if (cVar3 != '\x01') {
    local_38 = 0;
    if (local_3c != 0) {
      local_34 = *(int *)(this + (*(int *)(this + 0x1874) + 0x678) * 4 + 0xc);
      *(int *)(this + (*(int *)(this + 0x1874) + 0x678) * 4 + 0xc) = local_34 / local_3c;
      *(int *)(this + 0x19e8) =
           *(int *)(this + 0x19e8) + *(int *)(this + (*(int *)(this + 0x1874) + 0x678) * 4 + 0xc);
      local_30 = *(int *)(this + (*(int *)(this + 0x1874) + 0x64c) * 4 + 4);
      *(int *)(this + (*(int *)(this + 0x1874) + 0x64c) * 4 + 4) = local_30 / local_3c;
      *(int *)(this + 0x1930) =
           *(int *)(this + 0x1930) + *(int *)(this + (*(int *)(this + 0x1874) + 0x64c) * 4 + 4);
    }
    for (local_2c = 0; local_2c < 4; local_2c = local_2c + 1) {
      if (*(short *)(param_1 + (local_2c + 8) * 2 + 0xb) != -1) {
        cVar3 = checkValidUser(this,local_2c);
        if (cVar3 != '\0') {
          cVar3 = CDungeon::IsEnterEachMap(*(CDungeon **)(this + 0xcac));
          if ((cVar3 == '\0') || ((char)param_1[0x39] == local_2c)) {
            iVar6 = CBattle_Field::GetLastMapInfo((CBattle_Field *)(this + 0xb24));
            cUserHistoryLog::MapClear
                      ((cUserHistoryLog *)(*(int *)(this + local_2c * 0x18 + 0x78) + 0x79700),
                       *(ushort *)(param_1 + (local_2c + 8) * 2 + 0xb),
                       *(uint *)(this + 0x334) / 1000,*(int *)(iVar6 + 4));
            if (*(short *)(param_1 + (local_2c + 8) * 2 + 0xb) == 0) {
              uVar1 = *(undefined4 *)(this + local_2c * 0x18 + 0x78);
              pCVar7 = (CHackAnalyzer *)
                       CUser::getHackAnalyzer(*(CUser **)(this + local_2c * 0x18 + 0x78));
              WongWork::CHackAnalyzer::addServerHackCnt(pCVar7,uVar1,0x19b,1,0,0);
            }
            local_28 = *(uint *)(this + 0x334) / 1000;
            if ((local_28 != 0) &&
               (local_20 = *(ushort *)(param_1 + (local_2c + 8) * 2 + 0xb) / local_28, 4 < local_20)
               ) {
              local_44 = 100;
              local_40 = local_20 - 4;
              puVar8 = std::min<unsigned_int>(&local_40,&local_44);
              uVar4 = *puVar8;
              uVar1 = *(undefined4 *)(this + local_2c * 0x18 + 0x78);
              pCVar7 = (CHackAnalyzer *)
                       CUser::getHackAnalyzer(*(CUser **)(this + local_2c * 0x18 + 0x78));
              WongWork::CHackAnalyzer::addServerHackCnt(pCVar7,uVar1,0x340,uVar4,0,0);
            }
            local_38 = local_38 + (uint)*(ushort *)(param_1 + (local_2c + 8) * 2 + 0xb);
            if ((*(int *)(this + 0xcac) == 0) ||
               (*(char *)(*(int *)(this + 0xcac) + 0x89c) == '\x01')) {
LAB_085a87ae:
              bVar2 = false;
            }
            else {
              cVar3 = CDungeon::get_dimension_possible(*(CDungeon **)(this + 0xcac));
              if ((cVar3 != '\0') || ((local_3c == 0 || (this[0x1aa0] == (CParty)0x1))))
              goto LAB_085a87ae;
              bVar2 = true;
            }
            if ((bVar2) &&
               (*(int *)(*(int *)(this + local_2c * 0x18 + 0x78) + 0x8eb48) =
                     *(int *)(*(int *)(this + local_2c * 0x18 + 0x78) + 0x8eb48) + 1,
               9 < *(int *)(*(int *)(this + local_2c * 0x18 + 0x78) + 0x8eb48))) {
              *(undefined4 *)(*(int *)(this + local_2c * 0x18 + 0x78) + 0x8eb48) = 0;
              uVar1 = *(undefined4 *)(this + local_2c * 0x18 + 0x78);
              pCVar7 = (CHackAnalyzer *)
                       CUser::getHackAnalyzer(*(CUser **)(this + local_2c * 0x18 + 0x78));
              WongWork::CHackAnalyzer::addServerHackCnt(pCVar7,uVar1,0xdc,1,0,0);
            }
            this[0x1aa0] = (CParty)0x0;
            local_24 = *(uint *)(this + 0x334) / 1000;
            iVar6 = CUserCharacInfo::get_charac_level
                              (*(CUserCharacInfo **)(this + local_2c * 0x18 + 0x78));
            if (((iVar6 < 0x14) || (this[local_2c + 0x380] == (CParty)0x0)) ||
               (((*(int *)(this + (local_2c + 0x6a8) * 4 + 4) != 0 &&
                 ((local_24 != (local_24 / 5) * 5 ||
                  (local_24 / 5 < *(uint *)(this + (local_2c + 0x6a8) * 4 + 4))))) &&
                ((local_24 == (local_24 / 5) * 5 ||
                 (local_24 / 5 <= *(uint *)(this + (local_2c + 0x6a8) * 4 + 4))))))) {
LAB_085a8ace:
              bVar2 = false;
            }
            else {
              pUVar9 = (UserQuest *)
                       CUser::getCurCharacQuestR(*(CUser **)(this + local_2c * 0x18 + 0x78));
              cVar3 = UserQuest::IsDoingQuest(pUVar9,0x10d3);
              if (cVar3 == '\x01') {
                iVar6 = CBattle_Field::get_dungeon_index((CBattle_Field *)(this + 0xb24));
                if (iVar6 == 0xb) {
                  iVar6 = CBattle_Field::get_dungeon_diff((CBattle_Field *)(this + 0xb24));
                  if (iVar6 == 2) goto LAB_085a8ace;
                }
              }
              pUVar9 = (UserQuest *)
                       CUser::getCurCharacQuestR(*(CUser **)(this + local_2c * 0x18 + 0x78));
              cVar3 = UserQuest::IsDoingQuest(pUVar9,0x10d4);
              if (cVar3 == '\x01') {
                iVar6 = CBattle_Field::get_dungeon_index((CBattle_Field *)(this + 0xb24));
                if (iVar6 == 0xc) {
                  iVar6 = CBattle_Field::get_dungeon_diff((CBattle_Field *)(this + 0xb24));
                  if (iVar6 == 2) goto LAB_085a8ace;
                }
              }
              pUVar9 = (UserQuest *)
                       CUser::getCurCharacQuestR(*(CUser **)(this + local_2c * 0x18 + 0x78));
              cVar3 = UserQuest::IsDoingQuest(pUVar9,0x10d8);
              if (cVar3 == '\x01') {
                iVar6 = CBattle_Field::get_dungeon_index((CBattle_Field *)(this + 0xb24));
                if (iVar6 == 0xf) {
                  iVar6 = CBattle_Field::get_dungeon_diff((CBattle_Field *)(this + 0xb24));
                  if (0 < iVar6) goto LAB_085a8ace;
                }
              }
              bVar2 = true;
            }
            if (bVar2) {
              uVar10 = CUser::SetETC(*(CUser **)(this + local_2c * 0x18 + 0x78),0x84,
                                     *(int *)(this + (local_2c + 0x6a8) * 4 + 4));
              uVar1 = *(undefined4 *)(this + local_2c * 0x18 + 0x78);
              pCVar7 = (CHackAnalyzer *)
                       CUser::getHackAnalyzer(*(CUser **)(this + local_2c * 0x18 + 0x78));
              WongWork::CHackAnalyzer::addServerHackCnt(pCVar7,uVar1,0x84,1,uVar10,0);
            }
            *(undefined4 *)(this + (local_2c + 0x6a8) * 4 + 4) = 0;
            if (*(int *)(param_1 + 0x35) == 0) {
              cVar3 = IsSinglePlay(this);
              if (cVar3 == '\0') goto LAB_085a8bac;
              bVar2 = true;
            }
            else {
LAB_085a8bac:
              bVar2 = false;
            }
            if (bVar2) {
              uVar1 = *(undefined4 *)(this + local_2c * 0x18 + 0x78);
              pCVar7 = (CHackAnalyzer *)
                       CUser::getHackAnalyzer(*(CUser **)(this + local_2c * 0x18 + 0x78));
              WongWork::CHackAnalyzer::addServerHackCnt(pCVar7,uVar1,0x1a0,1,0,0);
            }
          }
        }
      }
    }
    *(int *)(this + (*(int *)(this + 0x1874) + 0x61c) * 4 + 0xc) = local_38;
    *(int *)(this + 0x1878) = *(int *)(this + 0x1878) + local_38;
    if (*(int *)(this + 0x1874) < 0x2c) {
      *(int *)(this + 0x1874) = *(int *)(this + 0x1874) + 1;
    }
  }
  return;
}
```
