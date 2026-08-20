# dispatch_sig

`_ZN23Inter_GuildCargoPopItem12dispatch_sigEP5CUserPci`

`Inter_GuildCargoPopItem::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_GuildCargoPopItem` | `0x084de330` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084de330  _ZN23Inter_GuildCargoPopItem12dispatch_sigEP5CUserPci
#           Inter_GuildCargoPopItem::dispatch_sig(CUser*, char*, int)
# range [0x084de330, 0x084debb3]
084de330 +0x000:  push   %ebp
084de331 +0x001:  mov    %esp,%ebp
084de333 +0x003:  push   %edi
084de334 +0x004:  push   %esi
084de335 +0x005:  push   %ebx
084de336 +0x006:  sub    $0xec,%esp
084de33c +0x00c:  mov    0x10(%ebp),%eax
084de33f +0x00f:  mov    %eax,-0x2c(%ebp)
084de342 +0x012:  mov    0xc(%ebp),%eax
084de345 +0x015:  mov    %eax,(%esp)
084de348 +0x018:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084de34d +0x01d:  cmp    $0x2,%eax
084de350 +0x020:  setle  %al
084de353 +0x023:  test   %al,%al
084de355 +0x025:  je     084de361 <+0x31>
084de357 +0x027:  mov    $0x0,%ebx
084de35c +0x02c:  jmp    084deba7 <+0x877>
084de361 +0x031:  movl   $0xffffffff,0x4(%esp)
084de369 +0x039:  mov    0xc(%ebp),%eax
084de36c +0x03c:  mov    %eax,(%esp)
084de36f +0x03f:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084de374 +0x044:  mov    %eax,%edx
084de376 +0x046:  mov    -0x2c(%ebp),%eax
084de379 +0x049:  mov    0xe(%eax),%eax
084de37c +0x04c:  cmp    %eax,%edx
084de37e +0x04e:  setne  %al
084de381 +0x051:  test   %al,%al
084de383 +0x053:  je     084de38f <+0x5f>
084de385 +0x055:  mov    $0x0,%ebx
084de38a +0x05a:  jmp    084deba7 <+0x877>
084de38f +0x05f:  mov    -0x2c(%ebp),%eax
084de392 +0x062:  mov    0x22(%eax),%eax
084de395 +0x065:  mov    %eax,-0x94(%ebp)
084de39b +0x06b:  mov    -0x2c(%ebp),%eax
084de39e +0x06e:  movzwl 0x20(%eax),%eax
084de3a2 +0x072:  movzwl %ax,%edi
084de3a5 +0x075:  mov    -0x2c(%ebp),%eax
084de3a8 +0x078:  mov    0x1c(%eax),%esi
084de3ab +0x07b:  mov    -0x2c(%ebp),%eax
084de3ae +0x07e:  mov    0x17(%eax),%eax
084de3b1 +0x081:  mov    %eax,%ebx
084de3b3 +0x083:  mov    -0x2c(%ebp),%eax
084de3b6 +0x086:  mov    0x4c(%eax),%ecx
084de3b9 +0x089:  mov    -0x2c(%ebp),%eax
084de3bc +0x08c:  movzbl 0x4b(%eax),%eax
084de3c0 +0x090:  movzbl %al,%edx
084de3c3 +0x093:  mov    0xc(%ebp),%eax
084de3c6 +0x096:  add    $0x79700,%eax
084de3cb +0x09b:  mov    %eax,-0x9c(%ebp)
084de3d1 +0x0a1:  mov    -0x94(%ebp),%eax
084de3d7 +0x0a7:  mov    %eax,0x1c(%esp)
084de3db +0x0ab:  mov    %edi,0x18(%esp)
084de3df +0x0af:  mov    %esi,0x14(%esp)
084de3e3 +0x0b3:  mov    %ebx,0x10(%esp)
084de3e7 +0x0b7:  mov    %ecx,0xc(%esp)
084de3eb +0x0bb:  mov    %edx,0x8(%esp)
084de3ef +0x0bf:  movl   $0xb,0x4(%esp)
084de3f7 +0x0c7:  mov    -0x9c(%ebp),%eax
084de3fd +0x0cd:  mov    %eax,(%esp)
084de400 +0x0d0:  call   08686780 <_ZN15cUserHistoryLog23GuildCargoPopItemResultE31ENUM_GUILD_CARGO_HISTORY_REASONiiiiii>  ; cUserHistoryLog::GuildCargoPopItemResult(ENUM_GUILD_CARGO_HISTORY_REASON, int, int, int, int, int, int)
084de405 +0x0d5:  mov    -0x2c(%ebp),%eax
084de408 +0x0d8:  movzbl 0x4b(%eax),%eax
084de40c +0x0dc:  cmp    $0xc1,%al
084de40e +0x0de:  je     084de43b <+0x10b>
084de410 +0x0e0:  mov    -0x2c(%ebp),%eax
084de413 +0x0e3:  movzbl 0x4b(%eax),%eax
084de417 +0x0e7:  movzbl %al,%eax
084de41a +0x0ea:  mov    %eax,0x8(%esp)
084de41e +0x0ee:  movl   $0xfc,0x4(%esp)
084de426 +0x0f6:  mov    0xc(%ebp),%eax
084de429 +0x0f9:  mov    %eax,(%esp)
084de42c +0x0fc:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
084de431 +0x101:  mov    $0x0,%ebx
084de436 +0x106:  jmp    084deba7 <+0x877>
084de43b +0x10b:  mov    0xc(%ebp),%eax
084de43e +0x10e:  mov    %eax,(%esp)
084de441 +0x111:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
084de446 +0x116:  mov    %eax,-0x28(%ebp)
084de449 +0x119:  mov    -0x2c(%ebp),%eax
084de44c +0x11c:  mov    0x17(%eax),%eax
084de44f +0x11f:  mov    %eax,%ebx
084de451 +0x121:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084de456 +0x126:  mov    %ebx,0x4(%esp)
084de45a +0x12a:  mov    %eax,(%esp)
084de45d +0x12d:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
084de462 +0x132:  mov    %eax,-0x24(%ebp)
084de465 +0x135:  lea    -0x85(%ebp),%eax
084de46b +0x13b:  mov    %eax,(%esp)
084de46e +0x13e:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
084de473 +0x143:  cmpl   $0x0,-0x24(%ebp)
084de477 +0x147:  jne    084de4ef <+0x1bf>
084de479 +0x149:  mov    0xc(%ebp),%eax
084de47c +0x14c:  mov    %eax,(%esp)
084de47f +0x14f:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084de484 +0x154:  mov    %eax,%ebx
084de486 +0x156:  mov    -0x2c(%ebp),%eax
084de489 +0x159:  mov    0x17(%eax),%esi
084de48c +0x15c:  movl   $0x0,0xc(%esp)
084de494 +0x164:  movl   $0x4a6e,0x8(%esp)
084de49c +0x16c:  movl   $&_ZZN23Inter_GuildCargoPopItem12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084de4a4 +0x174:  lea    -0x3c(%ebp),%eax
084de4a7 +0x177:  mov    %eax,(%esp)
084de4aa +0x17a:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084de4af +0x17f:  mov    %ebx,0xc(%esp)
084de4b3 +0x183:  mov    %esi,0x8(%esp)
084de4b7 +0x187:  movl   $"ERROR OCCURRED! GUILD CARGO POP ITEM - fail find item(%d), User(%d)",0x4(%esp)
084de4bf +0x18f:  lea    -0x3c(%ebp),%eax
084de4c2 +0x192:  mov    %eax,(%esp)
084de4c5 +0x195:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084de4ca +0x19a:  movl   $0xc5,0x8(%esp)
084de4d2 +0x1a2:  movl   $0xfc,0x4(%esp)
084de4da +0x1aa:  mov    0xc(%ebp),%eax
084de4dd +0x1ad:  mov    %eax,(%esp)
084de4e0 +0x1b0:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
084de4e5 +0x1b5:  mov    $0x0,%ebx
084de4ea +0x1ba:  jmp    084deba7 <+0x877>
084de4ef +0x1bf:  mov    -0x24(%ebp),%eax
084de4f2 +0x1c2:  mov    (%eax),%eax
084de4f4 +0x1c4:  add    $0x8,%eax
084de4f7 +0x1c7:  mov    (%eax),%edx
084de4f9 +0x1c9:  lea    -0x85(%ebp),%eax
084de4ff +0x1cf:  mov    %eax,0x4(%esp)
084de503 +0x1d3:  mov    -0x24(%ebp),%eax
084de506 +0x1d6:  mov    %eax,(%esp)
084de509 +0x1d9:  call   *%edx
084de50b +0x1db:  mov    -0x2c(%ebp),%eax
084de50e +0x1de:  mov    0x17(%eax),%eax
084de511 +0x1e1:  mov    %eax,-0x83(%ebp)
084de517 +0x1e7:  mov    -0x2c(%ebp),%eax
084de51a +0x1ea:  mov    0x1c(%eax),%eax
084de51d +0x1ed:  mov    %eax,-0x7e(%ebp)
084de520 +0x1f0:  mov    -0x2c(%ebp),%eax
084de523 +0x1f3:  movzwl 0x20(%eax),%eax
084de527 +0x1f7:  mov    %ax,-0x7a(%ebp)
084de52b +0x1fb:  mov    -0x2c(%ebp),%eax
084de52e +0x1fe:  mov    0x22(%eax),%eax
084de531 +0x201:  mov    %eax,-0x78(%ebp)
084de534 +0x204:  mov    -0x2c(%ebp),%eax
084de537 +0x207:  movzbl 0x1b(%eax),%eax
084de53b +0x20b:  movzbl %al,%eax
084de53e +0x20e:  mov    %eax,0x4(%esp)
084de542 +0x212:  lea    -0x85(%ebp),%eax
084de548 +0x218:  mov    %eax,(%esp)
084de54b +0x21b:  call   081507e8 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x11d>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x11d
084de550 +0x220:  mov    -0x2c(%ebp),%eax
084de553 +0x223:  movzwl 0x27(%eax),%eax
084de557 +0x227:  movzwl %ax,%edx
084de55a +0x22a:  mov    -0x2c(%ebp),%eax
084de55d +0x22d:  movzbl 0x26(%eax),%eax
084de561 +0x231:  movzbl %al,%eax
084de564 +0x234:  mov    %edx,0x8(%esp)
084de568 +0x238:  mov    %eax,0x4(%esp)
084de56c +0x23c:  lea    -0x85(%ebp),%eax
084de572 +0x242:  add    $0x11,%eax
084de575 +0x245:  mov    %eax,(%esp)
084de578 +0x248:  call   084b40e4 <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x197>  ; global constructors keyed to game_master::CMacro::Reset()+0x197
084de57d +0x24d:  mov    -0x2c(%ebp),%eax
084de580 +0x250:  mov    0x33(%eax),%edx
084de583 +0x253:  mov    %edx,-0x60(%ebp)
084de586 +0x256:  mov    0x37(%eax),%edx
084de589 +0x259:  mov    %edx,-0x5c(%ebp)
084de58c +0x25c:  mov    0x3b(%eax),%edx
084de58f +0x25f:  mov    %edx,-0x58(%ebp)
084de592 +0x262:  movzwl 0x3f(%eax),%eax
084de596 +0x266:  mov    %ax,-0x54(%ebp)
084de59a +0x26a:  mov    -0x2c(%ebp),%eax
084de59d +0x26d:  movzbl 0x41(%eax),%eax
084de5a1 +0x271:  mov    %al,-0x52(%ebp)
084de5a4 +0x274:  movl   $0x0,-0x20(%ebp)
084de5ab +0x27b:  mov    -0x24(%ebp),%eax
084de5ae +0x27e:  mov    (%eax),%eax
084de5b0 +0x280:  add    $0x14,%eax
084de5b3 +0x283:  mov    (%eax),%edx
084de5b5 +0x285:  mov    -0x24(%ebp),%eax
084de5b8 +0x288:  mov    %eax,(%esp)
084de5bb +0x28b:  call   *%edx
084de5bd +0x28d:  test   %al,%al
084de5bf +0x28f:  je     084de5de <+0x2ae>
084de5c1 +0x291:  lea    -0x85(%ebp),%eax
084de5c7 +0x297:  mov    %eax,0x4(%esp)
084de5cb +0x29b:  mov    -0x28(%ebp),%eax
084de5ce +0x29e:  mov    %eax,(%esp)
084de5d1 +0x2a1:  call   0850aaa4 <_ZNK10CInventory25tryInsertItemIntoCreatureER10Inven_Item>  ; CInventory::tryInsertItemIntoCreature(Inven_Item&) const
084de5d6 +0x2a6:  mov    %eax,-0x20(%ebp)
084de5d9 +0x2a9:  jmp    084de707 <+0x3d7>
084de5de +0x2ae:  mov    -0x24(%ebp),%eax
084de5e1 +0x2b1:  mov    (%eax),%eax
084de5e3 +0x2b3:  add    $0x10,%eax
084de5e6 +0x2b6:  mov    (%eax),%edx
084de5e8 +0x2b8:  mov    -0x24(%ebp),%eax
084de5eb +0x2bb:  mov    %eax,(%esp)
084de5ee +0x2be:  call   *%edx
084de5f0 +0x2c0:  test   %al,%al
084de5f2 +0x2c2:  je     084de682 <+0x352>
084de5f8 +0x2c8:  mov    -0x85(%ebp),%eax
084de5fe +0x2ce:  mov    %eax,0x4(%esp)
084de602 +0x2d2:  mov    -0x81(%ebp),%eax
084de608 +0x2d8:  mov    %eax,0x8(%esp)
084de60c +0x2dc:  mov    -0x7d(%ebp),%eax
084de60f +0x2df:  mov    %eax,0xc(%esp)
084de613 +0x2e3:  mov    -0x79(%ebp),%eax
084de616 +0x2e6:  mov    %eax,0x10(%esp)
084de61a +0x2ea:  mov    -0x75(%ebp),%eax
084de61d +0x2ed:  mov    %eax,0x14(%esp)
084de621 +0x2f1:  mov    -0x71(%ebp),%eax
084de624 +0x2f4:  mov    %eax,0x18(%esp)
084de628 +0x2f8:  mov    -0x6d(%ebp),%eax
084de62b +0x2fb:  mov    %eax,0x1c(%esp)
084de62f +0x2ff:  mov    -0x69(%ebp),%eax
084de632 +0x302:  mov    %eax,0x20(%esp)
084de636 +0x306:  mov    -0x65(%ebp),%eax
084de639 +0x309:  mov    %eax,0x24(%esp)
084de63d +0x30d:  mov    -0x61(%ebp),%eax
084de640 +0x310:  mov    %eax,0x28(%esp)
084de644 +0x314:  mov    -0x5d(%ebp),%eax
084de647 +0x317:  mov    %eax,0x2c(%esp)
084de64b +0x31b:  mov    -0x59(%ebp),%eax
084de64e +0x31e:  mov    %eax,0x30(%esp)
084de652 +0x322:  mov    -0x55(%ebp),%eax
084de655 +0x325:  mov    %eax,0x34(%esp)
084de659 +0x329:  mov    -0x51(%ebp),%eax
084de65c +0x32c:  mov    %eax,0x38(%esp)
084de660 +0x330:  mov    -0x4d(%ebp),%eax
084de663 +0x333:  mov    %eax,0x3c(%esp)
084de667 +0x337:  movzbl -0x49(%ebp),%eax
084de66b +0x33b:  mov    %al,0x40(%esp)
084de66f +0x33f:  mov    -0x28(%ebp),%eax
084de672 +0x342:  mov    %eax,(%esp)
084de675 +0x345:  call   085035f4 <_ZNK10CInventory28tryInsertAvatarIntoInventoryE10Inven_Item>  ; CInventory::tryInsertAvatarIntoInventory(Inven_Item) const
084de67a +0x34a:  mov    %eax,-0x20(%ebp)
084de67d +0x34d:  jmp    084de707 <+0x3d7>
084de682 +0x352:  mov    -0x85(%ebp),%eax
084de688 +0x358:  mov    %eax,0x4(%esp)
084de68c +0x35c:  mov    -0x81(%ebp),%eax
084de692 +0x362:  mov    %eax,0x8(%esp)
084de696 +0x366:  mov    -0x7d(%ebp),%eax
084de699 +0x369:  mov    %eax,0xc(%esp)
084de69d +0x36d:  mov    -0x79(%ebp),%eax
084de6a0 +0x370:  mov    %eax,0x10(%esp)
084de6a4 +0x374:  mov    -0x75(%ebp),%eax
084de6a7 +0x377:  mov    %eax,0x14(%esp)
084de6ab +0x37b:  mov    -0x71(%ebp),%eax
084de6ae +0x37e:  mov    %eax,0x18(%esp)
084de6b2 +0x382:  mov    -0x6d(%ebp),%eax
084de6b5 +0x385:  mov    %eax,0x1c(%esp)
084de6b9 +0x389:  mov    -0x69(%ebp),%eax
084de6bc +0x38c:  mov    %eax,0x20(%esp)
084de6c0 +0x390:  mov    -0x65(%ebp),%eax
084de6c3 +0x393:  mov    %eax,0x24(%esp)
084de6c7 +0x397:  mov    -0x61(%ebp),%eax
084de6ca +0x39a:  mov    %eax,0x28(%esp)
084de6ce +0x39e:  mov    -0x5d(%ebp),%eax
084de6d1 +0x3a1:  mov    %eax,0x2c(%esp)
084de6d5 +0x3a5:  mov    -0x59(%ebp),%eax
084de6d8 +0x3a8:  mov    %eax,0x30(%esp)
084de6dc +0x3ac:  mov    -0x55(%ebp),%eax
084de6df +0x3af:  mov    %eax,0x34(%esp)
084de6e3 +0x3b3:  mov    -0x51(%ebp),%eax
084de6e6 +0x3b6:  mov    %eax,0x38(%esp)
084de6ea +0x3ba:  mov    -0x4d(%ebp),%eax
084de6ed +0x3bd:  mov    %eax,0x3c(%esp)
084de6f1 +0x3c1:  movzbl -0x49(%ebp),%eax
084de6f5 +0x3c5:  mov    %al,0x40(%esp)
084de6f9 +0x3c9:  mov    -0x28(%ebp),%eax
084de6fc +0x3cc:  mov    %eax,(%esp)
084de6ff +0x3cf:  call   08501eca <_ZNK10CInventory26tryInsertItemIntoInventoryE10Inven_Item>  ; CInventory::tryInsertItemIntoInventory(Inven_Item) const
084de704 +0x3d4:  mov    %eax,-0x20(%ebp)
084de707 +0x3d7:  cmpl   $0x0,-0x20(%ebp)
084de70b +0x3db:  jns    084de81a <+0x4ea>
084de711 +0x3e1:  mov    0xc(%ebp),%eax
084de714 +0x3e4:  mov    %eax,(%esp)
084de717 +0x3e7:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
084de71c +0x3ec:  mov    %eax,%ebx
084de71e +0x3ee:  mov    -0x2c(%ebp),%eax
084de721 +0x3f1:  mov    0xe(%eax),%esi
084de724 +0x3f4:  movl   $0x0,0xc(%esp)
084de72c +0x3fc:  movl   $"game_server_msg_114",0x8(%esp)
084de734 +0x404:  movl   $0x4,0x4(%esp)
084de73c +0x40c:  movl   $&g_scriptStringManager_,(%esp)
084de743 +0x413:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
084de748 +0x418:  movl   $0x0,0x24(%esp)
084de750 +0x420:  movl   $0x0,0x20(%esp)
084de758 +0x428:  mov    %ebx,0x1c(%esp)
084de75c +0x42c:  movl   $0x0,0x18(%esp)
084de764 +0x434:  movl   $0x0,0x14(%esp)
084de76c +0x43c:  movl   $0x0,0x10(%esp)
084de774 +0x444:  mov    %esi,0xc(%esp)
084de778 +0x448:  movl   $0x0,0x8(%esp)
084de780 +0x450:  lea    -0x85(%ebp),%edx
084de786 +0x456:  mov    %edx,0x4(%esp)
084de78a +0x45a:  mov    %eax,(%esp)
084de78d +0x45d:  call   085555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>  ; WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(char const*, Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool, bool)
084de792 +0x462:  mov    -0x2c(%ebp),%eax
084de795 +0x465:  add    $0x41,%eax
084de798 +0x468:  mov    %eax,(%esp)
084de79b +0x46b:  call   0811ed58 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x53>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x53
084de7a0 +0x470:  movzbl %al,%eax
084de7a3 +0x473:  mov    %eax,-0x90(%ebp)
084de7a9 +0x479:  mov    -0x2c(%ebp),%eax
084de7ac +0x47c:  movzbl 0x1b(%eax),%eax
084de7b0 +0x480:  movzbl %al,%edi
084de7b3 +0x483:  mov    -0x2c(%ebp),%eax
084de7b6 +0x486:  mov    0x22(%eax),%eax
084de7b9 +0x489:  mov    %eax,%esi
084de7bb +0x48b:  mov    -0x2c(%ebp),%eax
084de7be +0x48e:  movzwl 0x20(%eax),%eax
084de7c2 +0x492:  movzwl %ax,%ebx
084de7c5 +0x495:  mov    -0x2c(%ebp),%eax
084de7c8 +0x498:  mov    0x1c(%eax),%ecx
084de7cb +0x49b:  mov    -0x2c(%ebp),%eax
084de7ce +0x49e:  mov    0x17(%eax),%eax
084de7d1 +0x4a1:  mov    %eax,%edx
084de7d3 +0x4a3:  mov    0xc(%ebp),%eax
084de7d6 +0x4a6:  add    $0x79700,%eax
084de7db +0x4ab:  mov    %eax,-0x9c(%ebp)
084de7e1 +0x4b1:  mov    -0x90(%ebp),%eax
084de7e7 +0x4b7:  mov    %eax,0x1c(%esp)
084de7eb +0x4bb:  mov    %edi,0x18(%esp)
084de7ef +0x4bf:  mov    %esi,0x14(%esp)
084de7f3 +0x4c3:  mov    %ebx,0x10(%esp)
084de7f7 +0x4c7:  mov    %ecx,0xc(%esp)
084de7fb +0x4cb:  mov    %edx,0x8(%esp)
084de7ff +0x4cf:  movl   $0xc,0x4(%esp)
084de807 +0x4d7:  mov    -0x9c(%ebp),%eax
084de80d +0x4dd:  mov    %eax,(%esp)
084de810 +0x4e0:  call   08686694 <_ZN15cUserHistoryLog22GuildCargoItemRecoveryE31ENUM_GUILD_CARGO_HISTORY_REASONiiiiih>  ; cUserHistoryLog::GuildCargoItemRecovery(ENUM_GUILD_CARGO_HISTORY_REASON, int, int, int, int, int, unsigned char)
084de815 +0x4e5:  jmp    084deacb <+0x79b>
084de81a +0x4ea:  movl   $0x0,-0x1c(%ebp)
084de821 +0x4f1:  mov    -0x24(%ebp),%eax
084de824 +0x4f4:  mov    (%eax),%eax
084de826 +0x4f6:  add    $0x14,%eax
084de829 +0x4f9:  mov    (%eax),%edx
084de82b +0x4fb:  mov    -0x24(%ebp),%eax
084de82e +0x4fe:  mov    %eax,(%esp)
084de831 +0x501:  call   *%edx
084de833 +0x503:  test   %al,%al
084de835 +0x505:  je     084de86c <+0x53c>
084de837 +0x507:  movl   $0x0,0x10(%esp)
084de83f +0x50f:  movl   $0x1,0xc(%esp)
084de847 +0x517:  movl   $0x28,0x8(%esp)
084de84f +0x51f:  lea    -0x85(%ebp),%eax
084de855 +0x525:  mov    %eax,0x4(%esp)
084de859 +0x529:  mov    -0x28(%ebp),%eax
084de85c +0x52c:  mov    %eax,(%esp)
084de85f +0x52f:  call   0850a86a <_ZN10CInventory22insertItemIntoCreatureER10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoCreature(Inven_Item&, eItemAddReason, bool, bool)
084de864 +0x534:  mov    %eax,-0x1c(%ebp)
084de867 +0x537:  jmp    084de9bd <+0x68d>
084de86c +0x53c:  mov    -0x24(%ebp),%eax
084de86f +0x53f:  mov    (%eax),%eax
084de871 +0x541:  add    $0x10,%eax
084de874 +0x544:  mov    (%eax),%edx
084de876 +0x546:  mov    -0x24(%ebp),%eax
084de879 +0x549:  mov    %eax,(%esp)
084de87c +0x54c:  call   *%edx
084de87e +0x54e:  test   %al,%al
084de880 +0x550:  je     084de920 <+0x5f0>
084de886 +0x556:  movl   $0x1,0x48(%esp)
084de88e +0x55e:  movl   $0x12,0x44(%esp)
084de896 +0x566:  mov    -0x85(%ebp),%eax
084de89c +0x56c:  mov    %eax,0x4(%esp)
084de8a0 +0x570:  mov    -0x81(%ebp),%eax
084de8a6 +0x576:  mov    %eax,0x8(%esp)
084de8aa +0x57a:  mov    -0x7d(%ebp),%eax
084de8ad +0x57d:  mov    %eax,0xc(%esp)
084de8b1 +0x581:  mov    -0x79(%ebp),%eax
084de8b4 +0x584:  mov    %eax,0x10(%esp)
084de8b8 +0x588:  mov    -0x75(%ebp),%eax
084de8bb +0x58b:  mov    %eax,0x14(%esp)
084de8bf +0x58f:  mov    -0x71(%ebp),%eax
084de8c2 +0x592:  mov    %eax,0x18(%esp)
084de8c6 +0x596:  mov    -0x6d(%ebp),%eax
084de8c9 +0x599:  mov    %eax,0x1c(%esp)
084de8cd +0x59d:  mov    -0x69(%ebp),%eax
084de8d0 +0x5a0:  mov    %eax,0x20(%esp)
084de8d4 +0x5a4:  mov    -0x65(%ebp),%eax
084de8d7 +0x5a7:  mov    %eax,0x24(%esp)
084de8db +0x5ab:  mov    -0x61(%ebp),%eax
084de8de +0x5ae:  mov    %eax,0x28(%esp)
084de8e2 +0x5b2:  mov    -0x5d(%ebp),%eax
084de8e5 +0x5b5:  mov    %eax,0x2c(%esp)
084de8e9 +0x5b9:  mov    -0x59(%ebp),%eax
084de8ec +0x5bc:  mov    %eax,0x30(%esp)
084de8f0 +0x5c0:  mov    -0x55(%ebp),%eax
084de8f3 +0x5c3:  mov    %eax,0x34(%esp)
084de8f7 +0x5c7:  mov    -0x51(%ebp),%eax
084de8fa +0x5ca:  mov    %eax,0x38(%esp)
084de8fe +0x5ce:  mov    -0x4d(%ebp),%eax
084de901 +0x5d1:  mov    %eax,0x3c(%esp)
084de905 +0x5d5:  movzbl -0x49(%ebp),%eax
084de909 +0x5d9:  mov    %al,0x40(%esp)
084de90d +0x5dd:  mov    -0x28(%ebp),%eax
084de910 +0x5e0:  mov    %eax,(%esp)
084de913 +0x5e3:  call   0850367c <_ZN10CInventory25insertAvatarIntoInventoryE10Inven_Item20eAvatarItemAddReasonb>  ; CInventory::insertAvatarIntoInventory(Inven_Item, eAvatarItemAddReason, bool)
084de918 +0x5e8:  mov    %eax,-0x1c(%ebp)
084de91b +0x5eb:  jmp    084de9bd <+0x68d>
084de920 +0x5f0:  movl   $0x0,0x4c(%esp)
084de928 +0x5f8:  movl   $0x1,0x48(%esp)
084de930 +0x600:  movl   $0x28,0x44(%esp)
084de938 +0x608:  mov    -0x85(%ebp),%eax
084de93e +0x60e:  mov    %eax,0x4(%esp)
084de942 +0x612:  mov    -0x81(%ebp),%eax
084de948 +0x618:  mov    %eax,0x8(%esp)
084de94c +0x61c:  mov    -0x7d(%ebp),%eax
084de94f +0x61f:  mov    %eax,0xc(%esp)
084de953 +0x623:  mov    -0x79(%ebp),%eax
084de956 +0x626:  mov    %eax,0x10(%esp)
084de95a +0x62a:  mov    -0x75(%ebp),%eax
084de95d +0x62d:  mov    %eax,0x14(%esp)
084de961 +0x631:  mov    -0x71(%ebp),%eax
084de964 +0x634:  mov    %eax,0x18(%esp)
084de968 +0x638:  mov    -0x6d(%ebp),%eax
084de96b +0x63b:  mov    %eax,0x1c(%esp)
084de96f +0x63f:  mov    -0x69(%ebp),%eax
084de972 +0x642:  mov    %eax,0x20(%esp)
084de976 +0x646:  mov    -0x65(%ebp),%eax
084de979 +0x649:  mov    %eax,0x24(%esp)
084de97d +0x64d:  mov    -0x61(%ebp),%eax
084de980 +0x650:  mov    %eax,0x28(%esp)
084de984 +0x654:  mov    -0x5d(%ebp),%eax
084de987 +0x657:  mov    %eax,0x2c(%esp)
084de98b +0x65b:  mov    -0x59(%ebp),%eax
084de98e +0x65e:  mov    %eax,0x30(%esp)
084de992 +0x662:  mov    -0x55(%ebp),%eax
084de995 +0x665:  mov    %eax,0x34(%esp)
084de999 +0x669:  mov    -0x51(%ebp),%eax
084de99c +0x66c:  mov    %eax,0x38(%esp)
084de9a0 +0x670:  mov    -0x4d(%ebp),%eax
084de9a3 +0x673:  mov    %eax,0x3c(%esp)
084de9a7 +0x677:  movzbl -0x49(%ebp),%eax
084de9ab +0x67b:  mov    %al,0x40(%esp)
084de9af +0x67f:  mov    -0x28(%ebp),%eax
084de9b2 +0x682:  mov    %eax,(%esp)
084de9b5 +0x685:  call   08502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoInventory(Inven_Item, eItemAddReason, bool, bool)
084de9ba +0x68a:  mov    %eax,-0x1c(%ebp)
084de9bd +0x68d:  cmpl   $0x0,-0x1c(%ebp)
084de9c1 +0x691:  jns    084deacb <+0x79b>
084de9c7 +0x697:  mov    0xc(%ebp),%eax
084de9ca +0x69a:  mov    %eax,(%esp)
084de9cd +0x69d:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
084de9d2 +0x6a2:  mov    %eax,%ebx
084de9d4 +0x6a4:  mov    -0x2c(%ebp),%eax
084de9d7 +0x6a7:  mov    0xe(%eax),%esi
084de9da +0x6aa:  movl   $0x0,0xc(%esp)
084de9e2 +0x6b2:  movl   $"game_server_msg_114",0x8(%esp)
084de9ea +0x6ba:  movl   $0x4,0x4(%esp)
084de9f2 +0x6c2:  movl   $&g_scriptStringManager_,(%esp)
084de9f9 +0x6c9:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
084de9fe +0x6ce:  movl   $0x0,0x24(%esp)
084dea06 +0x6d6:  movl   $0x0,0x20(%esp)
084dea0e +0x6de:  mov    %ebx,0x1c(%esp)
084dea12 +0x6e2:  movl   $0x0,0x18(%esp)
084dea1a +0x6ea:  movl   $0x0,0x14(%esp)
084dea22 +0x6f2:  movl   $0x0,0x10(%esp)
084dea2a +0x6fa:  mov    %esi,0xc(%esp)
084dea2e +0x6fe:  movl   $0x0,0x8(%esp)
084dea36 +0x706:  lea    -0x85(%ebp),%edx
084dea3c +0x70c:  mov    %edx,0x4(%esp)
084dea40 +0x710:  mov    %eax,(%esp)
084dea43 +0x713:  call   085555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>  ; WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(char const*, Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool, bool)
084dea48 +0x718:  mov    -0x2c(%ebp),%eax
084dea4b +0x71b:  add    $0x41,%eax
084dea4e +0x71e:  mov    %eax,(%esp)
084dea51 +0x721:  call   0811ed58 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x53>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x53
084dea56 +0x726:  movzbl %al,%eax
084dea59 +0x729:  mov    %eax,-0x8c(%ebp)
084dea5f +0x72f:  mov    -0x2c(%ebp),%eax
084dea62 +0x732:  movzbl 0x1b(%eax),%eax
084dea66 +0x736:  movzbl %al,%edi
084dea69 +0x739:  mov    -0x2c(%ebp),%eax
084dea6c +0x73c:  mov    0x22(%eax),%eax
084dea6f +0x73f:  mov    %eax,%esi
084dea71 +0x741:  mov    -0x2c(%ebp),%eax
084dea74 +0x744:  movzwl 0x20(%eax),%eax
084dea78 +0x748:  movzwl %ax,%ebx
084dea7b +0x74b:  mov    -0x2c(%ebp),%eax
084dea7e +0x74e:  mov    0x1c(%eax),%ecx
084dea81 +0x751:  mov    -0x2c(%ebp),%eax
084dea84 +0x754:  mov    0x17(%eax),%eax
084dea87 +0x757:  mov    %eax,%edx
084dea89 +0x759:  mov    0xc(%ebp),%eax
084dea8c +0x75c:  add    $0x79700,%eax
084dea91 +0x761:  mov    %eax,-0x9c(%ebp)
084dea97 +0x767:  mov    -0x8c(%ebp),%eax
084dea9d +0x76d:  mov    %eax,0x1c(%esp)
084deaa1 +0x771:  mov    %edi,0x18(%esp)
084deaa5 +0x775:  mov    %esi,0x14(%esp)
084deaa9 +0x779:  mov    %ebx,0x10(%esp)
084deaad +0x77d:  mov    %ecx,0xc(%esp)
084deab1 +0x781:  mov    %edx,0x8(%esp)
084deab5 +0x785:  movl   $0xc,0x4(%esp)
084deabd +0x78d:  mov    -0x9c(%ebp),%eax
084deac3 +0x793:  mov    %eax,(%esp)
084deac6 +0x796:  call   08686694 <_ZN15cUserHistoryLog22GuildCargoItemRecoveryE31ENUM_GUILD_CARGO_HISTORY_REASONiiiiih>  ; cUserHistoryLog::GuildCargoItemRecovery(ENUM_GUILD_CARGO_HISTORY_REASON, int, int, int, int, int, unsigned char)
084deacb +0x79b:  lea    -0x48(%ebp),%eax
084deace +0x79e:  mov    %eax,(%esp)
084dead1 +0x7a1:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084dead6 +0x7a6:  movl   $0xfc,0x8(%esp)
084deade +0x7ae:  movl   $0x1,0x4(%esp)
084deae6 +0x7b6:  lea    -0x48(%ebp),%eax
084deae9 +0x7b9:  mov    %eax,(%esp)
084deaec +0x7bc:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084deaf1 +0x7c1:  movl   $0x1,0x4(%esp)
084deaf9 +0x7c9:  lea    -0x48(%ebp),%eax
084deafc +0x7cc:  mov    %eax,(%esp)
084deaff +0x7cf:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084deb04 +0x7d4:  mov    -0x2c(%ebp),%eax
084deb07 +0x7d7:  mov    0x4c(%eax),%eax
084deb0a +0x7da:  mov    %eax,0x4(%esp)
084deb0e +0x7de:  lea    -0x48(%ebp),%eax
084deb11 +0x7e1:  mov    %eax,(%esp)
084deb14 +0x7e4:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084deb19 +0x7e9:  mov    -0x2c(%ebp),%eax
084deb1c +0x7ec:  mov    0x12(%eax),%eax
084deb1f +0x7ef:  mov    %eax,0x4(%esp)
084deb23 +0x7f3:  lea    -0x48(%ebp),%eax
084deb26 +0x7f6:  mov    %eax,(%esp)
084deb29 +0x7f9:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084deb2e +0x7fe:  mov    -0x20(%ebp),%eax
084deb31 +0x801:  mov    %eax,0x4(%esp)
084deb35 +0x805:  lea    -0x48(%ebp),%eax
084deb38 +0x808:  mov    %eax,(%esp)
084deb3b +0x80b:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084deb40 +0x810:  mov    -0x2c(%ebp),%eax
084deb43 +0x813:  mov    0x1c(%eax),%eax
084deb46 +0x816:  mov    %eax,0x4(%esp)
084deb4a +0x81a:  lea    -0x48(%ebp),%eax
084deb4d +0x81d:  mov    %eax,(%esp)
084deb50 +0x820:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084deb55 +0x825:  movl   $0x1,0x4(%esp)
084deb5d +0x82d:  lea    -0x48(%ebp),%eax
084deb60 +0x830:  mov    %eax,(%esp)
084deb63 +0x833:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084deb68 +0x838:  lea    -0x48(%ebp),%eax
084deb6b +0x83b:  mov    %eax,0x4(%esp)
084deb6f +0x83f:  mov    0xc(%ebp),%eax
084deb72 +0x842:  mov    %eax,(%esp)
084deb75 +0x845:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084deb7a +0x84a:  mov    $0x0,%ebx
084deb7f +0x84f:  lea    -0x48(%ebp),%eax
084deb82 +0x852:  mov    %eax,(%esp)
084deb85 +0x855:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084deb8a +0x85a:  jmp    084deba7 <+0x877>
084deb8c +0x85c:  mov    %edx,%ebx
084deb8e +0x85e:  mov    %eax,%esi
084deb90 +0x860:  lea    -0x48(%ebp),%eax
084deb93 +0x863:  mov    %eax,(%esp)
084deb96 +0x866:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084deb9b +0x86b:  mov    %esi,%eax
084deb9d +0x86d:  mov    %ebx,%edx
084deb9f +0x86f:  mov    %eax,(%esp)
084deba2 +0x872:  call   08ae3750 <_Unwind_Resume>
084deba7 +0x877:  mov    %ebx,%eax
084deba9 +0x879:  add    $0xec,%esp
084debaf +0x87f:  pop    %ebx
084debb0 +0x880:  pop    %esi
084debb1 +0x881:  pop    %edi
084debb2 +0x882:  pop    %ebp
084debb3 +0x883:  ret
```

## 反编译 C

```c
// Inter_GuildCargoPopItem::dispatch_sig @ 0x84de330

/* Inter_GuildCargoPopItem::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_GuildCargoPopItem::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  CDataManager *this;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined2 local_89;
  undefined2 uStack_87;
  undefined2 uStack_85;
  undefined1 uStack_83;
  undefined4 uStack_82;
  undefined1 local_7e;
  undefined4 uStack_7d;
  undefined4 uStack_79;
  undefined4 local_75;
  undefined4 local_71;
  undefined4 local_6d;
  undefined4 local_69;
  undefined4 uStack_65;
  undefined4 uStack_61;
  undefined4 uStack_5d;
  undefined1 uStack_59;
  undefined2 local_58;
  undefined1 local_56;
  undefined4 local_55;
  undefined4 local_51;
  undefined1 local_4d;
  PacketGuard local_4c [12];
  cMyTrace local_40 [16];
  int local_30;
  CInventory *local_2c;
  int *local_28;
  int local_24;
  int local_20;
  
  local_30 = param_3;
  iVar4 = CUser::get_state((CUser *)param_2);
  if ((2 < iVar4) &&
     (iVar4 = CUser::get_charac_no((CUser *)param_2,-1), iVar4 == *(int *)(local_30 + 0xe))) {
    cUserHistoryLog::GuildCargoPopItemResult
              ((cUserHistoryLog *)(param_2 + 0x79700),0xb,*(undefined1 *)(local_30 + 0x4b),
               *(undefined4 *)(local_30 + 0x4c),*(undefined4 *)(local_30 + 0x17),
               *(undefined4 *)(local_30 + 0x1c),*(undefined2 *)(local_30 + 0x20),
               *(undefined4 *)(local_30 + 0x22));
    if (*(char *)(local_30 + 0x4b) == -0x3f) {
      local_2c = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
      iVar4 = *(int *)(local_30 + 0x17);
      this = (CDataManager *)G_CDataManager();
      local_28 = (int *)CDataManager::find_item(this,iVar4);
      Inven_Item::Inven_Item((Inven_Item *)&local_89);
      if (local_28 == (int *)0x0) {
        uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
        uVar1 = *(undefined4 *)(local_30 + 0x17);
        cMyTrace::cMyTrace(local_40,
                           "virtual int Inter_GuildCargoPopItem::dispatch_sig(CUser*, char*, int)",
                           0x4a6e,0);
        cMyTrace::operator()
                  (local_40,"ERROR OCCURRED! GUILD CARGO POP ITEM - fail find item(%d), User(%d)",
                   uVar1,uVar5);
        CUser::SendCmdErrorPacket((CUser *)param_2,0xfc,0xc5);
      }
      else {
        (**(code **)(*local_28 + 8))(local_28,&local_89);
        uStack_87 = (undefined2)*(undefined4 *)(local_30 + 0x17);
        uStack_85 = (undefined2)((uint)*(undefined4 *)(local_30 + 0x17) >> 0x10);
        uStack_82 = *(undefined4 *)(local_30 + 0x1c);
        local_7e = (undefined1)*(undefined2 *)(local_30 + 0x20);
        uStack_7d._0_1_ = (undefined1)((ushort)*(undefined2 *)(local_30 + 0x20) >> 8);
        uStack_7d._1_3_ = (undefined3)*(undefined4 *)(local_30 + 0x22);
        uStack_79._0_1_ = (undefined1)((uint)*(undefined4 *)(local_30 + 0x22) >> 0x18);
        Inven_Item::SetItemAttr((Inven_Item *)&local_89,*(uchar *)(local_30 + 0x1b));
        stAmplifyOption_t::assign
                  ((stAmplifyOption_t *)((int)&uStack_79 + 1),*(uchar *)(local_30 + 0x26),
                   *(ushort *)(local_30 + 0x27));
        uStack_65._1_3_ = (undefined3)*(undefined4 *)(local_30 + 0x33);
        uStack_61._1_3_ = (undefined3)*(undefined4 *)(local_30 + 0x37);
        uStack_61 = CONCAT31(uStack_61._1_3_,(char)((uint)*(undefined4 *)(local_30 + 0x33) >> 0x18))
        ;
        uStack_5d._1_3_ = (undefined3)*(undefined4 *)(local_30 + 0x3b);
        uStack_5d = CONCAT31(uStack_5d._1_3_,(char)((uint)*(undefined4 *)(local_30 + 0x37) >> 0x18))
        ;
        uStack_59 = (undefined1)((uint)*(undefined4 *)(local_30 + 0x3b) >> 0x18);
        local_58 = *(undefined2 *)(local_30 + 0x3f);
        local_56 = *(undefined1 *)(local_30 + 0x41);
        local_24 = 0;
        cVar2 = (**(code **)(*local_28 + 0x14))(local_28);
        if (cVar2 == '\0') {
          cVar2 = (**(code **)(*local_28 + 0x10))(local_28);
          if (cVar2 == '\0') {
            local_24 = CInventory::tryInsertItemIntoInventory
                                 (local_2c,CONCAT22(uStack_87,local_89),
                                  CONCAT13((undefined1)uStack_82,CONCAT12(uStack_83,uStack_85)),
                                  CONCAT13(local_7e,uStack_82._1_3_),uStack_7d,uStack_79,local_75,
                                  local_71,local_6d,local_69,uStack_65,uStack_61,uStack_5d,
                                  CONCAT13(local_56,CONCAT21(local_58,uStack_59)),local_55,local_51,
                                  local_4d);
          }
          else {
            local_24 = CInventory::tryInsertAvatarIntoInventory
                                 (local_2c,CONCAT22(uStack_87,local_89),
                                  CONCAT13((undefined1)uStack_82,CONCAT12(uStack_83,uStack_85)),
                                  CONCAT13(local_7e,uStack_82._1_3_),uStack_7d,uStack_79,local_75,
                                  local_71,local_6d,local_69,uStack_65,uStack_61,uStack_5d,
                                  CONCAT13(local_56,CONCAT21(local_58,uStack_59)),local_55,local_51,
                                  local_4d);
          }
        }
        else {
          local_24 = CInventory::tryInsertItemIntoCreature(local_2c,(Inven_Item *)&local_89);
        }
        if (local_24 < 0) {
          uVar5 = CUser::GetServerGroup((CUser *)param_2);
          uVar1 = *(undefined4 *)(local_30 + 0xe);
          uVar6 = RDARScriptStringManager::findString
                            ((RDARScriptStringManager *)g_scriptStringManager_,4,
                             "game_server_msg_114",(bool *)0x0);
          WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(uVar6,&local_89,0,uVar1,0,0,0,uVar5,0,0);
          uVar3 = UpgradeSeparateInfo::GetUpgradeSeparate((UpgradeSeparateInfo *)(local_30 + 0x41));
          cUserHistoryLog::GuildCargoItemRecovery
                    ((cUserHistoryLog *)(param_2 + 0x79700),0xc,*(undefined4 *)(local_30 + 0x17),
                     *(undefined4 *)(local_30 + 0x1c),*(undefined2 *)(local_30 + 0x20),
                     *(undefined4 *)(local_30 + 0x22),*(undefined1 *)(local_30 + 0x1b),uVar3);
        }
        else {
          local_20 = 0;
          cVar2 = (**(code **)(*local_28 + 0x14))(local_28);
          if (cVar2 == '\0') {
            cVar2 = (**(code **)(*local_28 + 0x10))(local_28);
            if (cVar2 == '\0') {
              local_20 = CInventory::insertItemIntoInventory
                                   (local_2c,CONCAT22(uStack_87,local_89),
                                    CONCAT13((undefined1)uStack_82,CONCAT12(uStack_83,uStack_85)),
                                    CONCAT13(local_7e,uStack_82._1_3_),uStack_7d,uStack_79,local_75,
                                    local_71,local_6d,local_69,uStack_65,uStack_61,uStack_5d,
                                    CONCAT13(local_56,CONCAT21(local_58,uStack_59)),local_55,
                                    local_51,local_4d,0x28,1,0);
            }
            else {
              local_20 = CInventory::insertAvatarIntoInventory
                                   (local_2c,CONCAT22(uStack_87,local_89),
                                    CONCAT13((undefined1)uStack_82,CONCAT12(uStack_83,uStack_85)),
                                    CONCAT13(local_7e,uStack_82._1_3_),uStack_7d,uStack_79,local_75,
                                    local_71,local_6d,local_69,uStack_65,uStack_61,uStack_5d,
                                    CONCAT13(local_56,CONCAT21(local_58,uStack_59)),local_55,
                                    local_51,local_4d,0x12,1);
            }
          }
          else {
            local_20 = CInventory::insertItemIntoCreature(local_2c,&local_89,0x28,1,0);
          }
          if (local_20 < 0) {
            uVar5 = CUser::GetServerGroup((CUser *)param_2);
            uVar1 = *(undefined4 *)(local_30 + 0xe);
            uVar6 = RDARScriptStringManager::findString
                              ((RDARScriptStringManager *)g_scriptStringManager_,4,
                               "game_server_msg_114",(bool *)0x0);
            WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                      (uVar6,&local_89,0,uVar1,0,0,0,uVar5,0,0);
            uVar3 = UpgradeSeparateInfo::GetUpgradeSeparate
                              ((UpgradeSeparateInfo *)(local_30 + 0x41));
            cUserHistoryLog::GuildCargoItemRecovery
                      ((cUserHistoryLog *)(param_2 + 0x79700),0xc,*(undefined4 *)(local_30 + 0x17),
                       *(undefined4 *)(local_30 + 0x1c),*(undefined2 *)(local_30 + 0x20),
                       *(undefined4 *)(local_30 + 0x22),*(undefined1 *)(local_30 + 0x1b),uVar3);
          }
        }
        PacketGuard::PacketGuard(local_4c);
                    /* try { // try from 084deaec to 084deb79 has its CatchHandler @ 084deb8c */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_4c,1,0xfc);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_4c,1);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_4c,*(int *)(local_30 + 0x4c));
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_4c,*(int *)(local_30 + 0x12));
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_4c,local_24);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_4c,*(int *)(local_30 + 0x1c));
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_4c,true);
        CUser::Send((CUser *)param_2,local_4c);
        PacketGuard::~PacketGuard(local_4c);
      }
    }
    else {
      CUser::SendCmdErrorPacket((CUser *)param_2,0xfc,*(undefined1 *)(local_30 + 0x4b));
    }
  }
  return 0;
}
```
