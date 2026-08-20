# cancel_quick_party

`_ZN10QuickParty24CQuickPartySystemManager18cancel_quick_partyEP6CPartybP5CUser`

`QuickParty::CQuickPartySystemManager::cancel_quick_party(CParty*, bool, CUser*)`

| 类 | 地址 |
|---|---|
| `QuickParty::CQuickPartySystemManager` | `0x0826a386` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0826a386  _ZN10QuickParty24CQuickPartySystemManager18cancel_quick_partyEP6CPartybP5CUser
#           QuickParty::CQuickPartySystemManager::cancel_quick_party(CParty*, bool, CUser*)
# range [0x0826a386, 0x0826a761]
0826a386 +0x000:  push   %ebp
0826a387 +0x001:  mov    %esp,%ebp
0826a389 +0x003:  push   %ebx
0826a38a +0x004:  sub    $0x54,%esp
0826a38d +0x007:  mov    0x10(%ebp),%eax
0826a390 +0x00a:  mov    %al,-0x2c(%ebp)
0826a393 +0x00d:  cmpl   $0x0,0xc(%ebp)
0826a397 +0x011:  je     0826a3a9 <+0x23>
0826a399 +0x013:  mov    0xc(%ebp),%eax
0826a39c +0x016:  mov    %eax,(%esp)
0826a39f +0x019:  call   0822d928 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2fd2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2fd2
0826a3a4 +0x01e:  cmp    $0xffffffff,%eax
0826a3a7 +0x021:  jne    0826a3b0 <+0x2a>
0826a3a9 +0x023:  mov    $0x1,%eax
0826a3ae +0x028:  jmp    0826a3b5 <+0x2f>
0826a3b0 +0x02a:  mov    $0x0,%eax
0826a3b5 +0x02f:  test   %al,%al
0826a3b7 +0x031:  je     0826a44b <+0xc5>
0826a3bd +0x037:  cmpl   $0x0,0xc(%ebp)
0826a3c1 +0x03b:  jne    0826a406 <+0x80>
0826a3c3 +0x03d:  cmpl   $0x0,0x14(%ebp)
0826a3c7 +0x041:  je     0826a406 <+0x80>
0826a3c9 +0x043:  mov    0x14(%ebp),%eax
0826a3cc +0x046:  mov    %eax,(%esp)
0826a3cf +0x049:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0826a3d4 +0x04e:  mov    %eax,0x14(%esp)
0826a3d8 +0x052:  movl   $"QUICK_PARTY_LOG : PARTY IS NULL!! (%d)",0x10(%esp)
0826a3e0 +0x05a:  movl   $0x1e3,0xc(%esp)
0826a3e8 +0x062:  movl   $&_ZZN10QuickParty24CQuickPartySystemManager18cancel_quick_partyEP6CPartybP5CUserE19__PRETTY_FUNCTION__,0x8(%esp)
0826a3f0 +0x06a:  movl   $"QuickParty.cpp",0x4(%esp)
0826a3f8 +0x072:  movl   $0x1,(%esp)
0826a3ff +0x079:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0826a404 +0x07e:  jmp    0826a441 <+0xbb>
0826a406 +0x080:  mov    0xc(%ebp),%eax
0826a409 +0x083:  mov    %eax,(%esp)
0826a40c +0x086:  call   0822d928 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2fd2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2fd2
0826a411 +0x08b:  mov    %eax,0x14(%esp)
0826a415 +0x08f:  movl   $"QUICK_PARTY_LOG : ABNOMAL QUICK PARTY INDEX (%d)!!",0x10(%esp)
0826a41d +0x097:  movl   $0x1e5,0xc(%esp)
0826a425 +0x09f:  movl   $&_ZZN10QuickParty24CQuickPartySystemManager18cancel_quick_partyEP6CPartybP5CUserE19__PRETTY_FUNCTION__,0x8(%esp)
0826a42d +0x0a7:  movl   $"QuickParty.cpp",0x4(%esp)
0826a435 +0x0af:  movl   $0x1,(%esp)
0826a43c +0x0b6:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0826a441 +0x0bb:  mov    $0x0,%eax
0826a446 +0x0c0:  jmp    0826a75c <+0x3d6>
0826a44b +0x0c5:  mov    0xc(%ebp),%eax
0826a44e +0x0c8:  mov    %eax,(%esp)
0826a451 +0x0cb:  call   0822d928 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2fd2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2fd2
0826a456 +0x0d0:  mov    %eax,%ebx
0826a458 +0x0d2:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
0826a45d +0x0d7:  mov    %ebx,0x4(%esp)
0826a461 +0x0db:  mov    %eax,(%esp)
0826a464 +0x0de:  call   08295572 <_ZN12CGameManager13GetQuickPartyEi>  ; CGameManager::GetQuickParty(int)
0826a469 +0x0e3:  mov    %eax,-0x10(%ebp)
0826a46c +0x0e6:  cmpl   $0x0,-0x10(%ebp)
0826a470 +0x0ea:  jne    0826a4a8 <+0x122>
0826a472 +0x0ec:  movl   $"QUICK_PARTY_LOG : NO EXIST QUICK PARTY!!",0x10(%esp)
0826a47a +0x0f4:  movl   $0x1ec,0xc(%esp)
0826a482 +0x0fc:  movl   $&_ZZN10QuickParty24CQuickPartySystemManager18cancel_quick_partyEP6CPartybP5CUserE19__PRETTY_FUNCTION__,0x8(%esp)
0826a48a +0x104:  movl   $"QuickParty.cpp",0x4(%esp)
0826a492 +0x10c:  movl   $0x1,(%esp)
0826a499 +0x113:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0826a49e +0x118:  mov    $0x0,%eax
0826a4a3 +0x11d:  jmp    0826a75c <+0x3d6>
0826a4a8 +0x122:  mov    0xc(%ebp),%eax
0826a4ab +0x125:  mov    %eax,(%esp)
0826a4ae +0x128:  call   0814581c <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x29f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x29f
0826a4b3 +0x12d:  cmp    $0x1,%al
0826a4b5 +0x12f:  jle    0826a4c4 <+0x13e>
0826a4b7 +0x131:  cmpb   $0x0,-0x2c(%ebp)
0826a4bb +0x135:  je     0826a4c4 <+0x13e>
0826a4bd +0x137:  mov    $0x1,%eax
0826a4c2 +0x13c:  jmp    0826a4c9 <+0x143>
0826a4c4 +0x13e:  mov    $0x0,%eax
0826a4c9 +0x143:  test   %al,%al
0826a4cb +0x145:  je     0826a516 <+0x190>
0826a4cd +0x147:  movl   $0xffffffff,0x4(%esp)
0826a4d5 +0x14f:  mov    0xc(%ebp),%eax
0826a4d8 +0x152:  mov    %eax,(%esp)
0826a4db +0x155:  call   08145828 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2ab>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2ab
0826a4e0 +0x15a:  mov    -0x10(%ebp),%eax
0826a4e3 +0x15d:  mov    %eax,(%esp)
0826a4e6 +0x160:  call   0826b798 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x66>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x66
0826a4eb +0x165:  cwtl
0826a4ec +0x166:  mov    0xc(%ebp),%edx
0826a4ef +0x169:  add    $0xb24,%edx
0826a4f5 +0x16f:  mov    %eax,0x4(%esp)
0826a4f9 +0x173:  mov    %edx,(%esp)
0826a4fc +0x176:  call   0830aaa4 <_ZN13CBattle_Field24getRandomBuffDungeonTypeEi>  ; CBattle_Field::getRandomBuffDungeonType(int)
0826a501 +0x17b:  mov    0xc(%ebp),%edx
0826a504 +0x17e:  add    $0xb24,%edx
0826a50a +0x184:  mov    %eax,0x4(%esp)
0826a50e +0x188:  mov    %edx,(%esp)
0826a511 +0x18b:  call   0830ac7a <_ZN13CBattle_Field19setEplpWaitingTimerEN10QuickParty17RandomBuffDungeonE>  ; CBattle_Field::setEplpWaitingTimer(QuickParty::RandomBuffDungeon)
0826a516 +0x190:  lea    -0x18(%ebp),%eax
0826a519 +0x193:  mov    %eax,(%esp)
0826a51c +0x196:  call   082344ca <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9b74>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9b74
0826a521 +0x19b:  mov    -0x10(%ebp),%eax
0826a524 +0x19e:  mov    %eax,(%esp)
0826a527 +0x1a1:  call   0826b798 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x66>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x66
0826a52c +0x1a6:  mov    %ax,-0x18(%ebp)
0826a530 +0x1aa:  mov    -0x10(%ebp),%eax
0826a533 +0x1ad:  mov    %eax,(%esp)
0826a536 +0x1b0:  call   0826b7b4 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x82>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x82
0826a53b +0x1b5:  mov    %al,-0x16(%ebp)
0826a53e +0x1b8:  lea    -0x18(%ebp),%eax
0826a541 +0x1bb:  mov    %eax,0x8(%esp)
0826a545 +0x1bf:  mov    -0x10(%ebp),%eax
0826a548 +0x1c2:  mov    %eax,0x4(%esp)
0826a54c +0x1c6:  mov    0x8(%ebp),%eax
0826a54f +0x1c9:  mov    %eax,(%esp)
0826a552 +0x1cc:  call   0826aa9a <_ZN10QuickParty24CQuickPartySystemManager26remove_quick_party_in_poolEPNS_11CQuickPartyERKNS_23STQuickPartyPoolMap_KeyE>  ; QuickParty::CQuickPartySystemManager::remove_quick_party_in_pool(QuickParty::CQuickParty*, QuickParty::STQuickPartyPoolMap_Key const&)
0826a557 +0x1d1:  xor    $0x1,%eax
0826a55a +0x1d4:  test   %al,%al
0826a55c +0x1d6:  je     0826a568 <+0x1e2>
0826a55e +0x1d8:  mov    $0x0,%eax
0826a563 +0x1dd:  jmp    0826a75c <+0x3d6>
0826a568 +0x1e2:  movzbl -0x2c(%ebp),%eax
0826a56c +0x1e6:  xor    $0x1,%eax
0826a56f +0x1e9:  test   %al,%al
0826a571 +0x1eb:  je     0826a586 <+0x200>
0826a573 +0x1ed:  movl   $0x1,0x4(%esp)
0826a57b +0x1f5:  mov    -0x10(%ebp),%eax
0826a57e +0x1f8:  mov    %eax,(%esp)
0826a581 +0x1fb:  call   0826b7f0 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0xbe>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0xbe
0826a586 +0x200:  movl   $0x0,-0xc(%ebp)
0826a58d +0x207:  mov    0xc(%ebp),%eax
0826a590 +0x20a:  mov    %eax,(%esp)
0826a593 +0x20d:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
0826a598 +0x212:  cmp    $0x1,%eax
0826a59b +0x215:  je     0826a5a3 <+0x21d>
0826a59d +0x217:  cmpb   $0x0,-0x2c(%ebp)
0826a5a1 +0x21b:  je     0826a5aa <+0x224>
0826a5a3 +0x21d:  mov    $0x1,%eax
0826a5a8 +0x222:  jmp    0826a5af <+0x229>
0826a5aa +0x224:  mov    $0x0,%eax
0826a5af +0x229:  test   %al,%al
0826a5b1 +0x22b:  je     0826a605 <+0x27f>
0826a5b3 +0x22d:  mov    0xc(%ebp),%eax
0826a5b6 +0x230:  mov    %eax,(%esp)
0826a5b9 +0x233:  call   0822d846 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2ef0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2ef0
0826a5be +0x238:  mov    %eax,0x4(%esp)
0826a5c2 +0x23c:  mov    -0x10(%ebp),%eax
0826a5c5 +0x23f:  mov    %eax,(%esp)
0826a5c8 +0x242:  call   0826980e <_ZN10QuickParty11CQuickParty18delete_party_indexEi>  ; QuickParty::CQuickParty::delete_party_index(int)
0826a5cd +0x247:  mov    -0x10(%ebp),%eax
0826a5d0 +0x24a:  mov    %eax,(%esp)
0826a5d3 +0x24d:  call   082698be <_ZN10QuickParty11CQuickParty21get_quick_party_countEv>  ; QuickParty::CQuickParty::get_quick_party_count()
0826a5d8 +0x252:  mov    %eax,-0xc(%ebp)
0826a5db +0x255:  mov    0xc(%ebp),%eax
0826a5de +0x258:  mov    %eax,(%esp)
0826a5e1 +0x25b:  call   0859b3e4 <_ZN6CParty21init_quick_party_dataEv>  ; CParty::init_quick_party_data()
0826a5e6 +0x260:  cmpl   $0x0,-0xc(%ebp)
0826a5ea +0x264:  jg     0826a689 <+0x303>
0826a5f0 +0x26a:  mov    -0x10(%ebp),%eax
0826a5f3 +0x26d:  mov    %eax,(%esp)
0826a5f6 +0x270:  call   082695ca <_ZN10QuickParty11CQuickParty7destroyEv>  ; QuickParty::CQuickParty::destroy()
0826a5fb +0x275:  mov    $0x1,%eax
0826a600 +0x27a:  jmp    0826a75c <+0x3d6>
0826a605 +0x27f:  mov    -0x10(%ebp),%eax
0826a608 +0x282:  mov    %eax,(%esp)
0826a60b +0x285:  call   082698be <_ZN10QuickParty11CQuickParty21get_quick_party_countEv>  ; QuickParty::CQuickParty::get_quick_party_count()
0826a610 +0x28a:  sub    $0x1,%eax
0826a613 +0x28d:  mov    %eax,-0xc(%ebp)
0826a616 +0x290:  cmpl   $0x0,-0xc(%ebp)
0826a61a +0x294:  jg     0826a689 <+0x303>
0826a61c +0x296:  mov    -0xc(%ebp),%eax
0826a61f +0x299:  mov    %eax,0x14(%esp)
0826a623 +0x29d:  movl   $"QUICK_PARTY_LOG : QUICK PARTY COUNT ERROR!! (%d)",0x10(%esp)
0826a62b +0x2a5:  movl   $0x216,0xc(%esp)
0826a633 +0x2ad:  movl   $&_ZZN10QuickParty24CQuickPartySystemManager18cancel_quick_partyEP6CPartybP5CUserE19__PRETTY_FUNCTION__,0x8(%esp)
0826a63b +0x2b5:  movl   $"QuickParty.cpp",0x4(%esp)
0826a643 +0x2bd:  movl   $0x1,(%esp)
0826a64a +0x2c4:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0826a64f +0x2c9:  mov    0xc(%ebp),%eax
0826a652 +0x2cc:  mov    %eax,(%esp)
0826a655 +0x2cf:  call   0822d846 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2ef0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2ef0
0826a65a +0x2d4:  mov    %eax,0x4(%esp)
0826a65e +0x2d8:  mov    -0x10(%ebp),%eax
0826a661 +0x2db:  mov    %eax,(%esp)
0826a664 +0x2de:  call   0826980e <_ZN10QuickParty11CQuickParty18delete_party_indexEi>  ; QuickParty::CQuickParty::delete_party_index(int)
0826a669 +0x2e3:  mov    0xc(%ebp),%eax
0826a66c +0x2e6:  mov    %eax,(%esp)
0826a66f +0x2e9:  call   0859b3e4 <_ZN6CParty21init_quick_party_dataEv>  ; CParty::init_quick_party_data()
0826a674 +0x2ee:  mov    -0x10(%ebp),%eax
0826a677 +0x2f1:  mov    %eax,(%esp)
0826a67a +0x2f4:  call   082695ca <_ZN10QuickParty11CQuickParty7destroyEv>  ; QuickParty::CQuickParty::destroy()
0826a67f +0x2f9:  mov    $0x0,%eax
0826a684 +0x2fe:  jmp    0826a75c <+0x3d6>
0826a689 +0x303:  mov    0x8(%ebp),%edx
0826a68c +0x306:  lea    -0x1c(%ebp),%eax
0826a68f +0x309:  lea    -0x18(%ebp),%ecx
0826a692 +0x30c:  mov    %ecx,0x8(%esp)
0826a696 +0x310:  mov    %edx,0x4(%esp)
0826a69a +0x314:  mov    %eax,(%esp)
0826a69d +0x317:  call   0826bc2c <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x4fa>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x4fa
0826a6a2 +0x31c:  sub    $0x4,%esp
0826a6a5 +0x31f:  mov    0x8(%ebp),%edx
0826a6a8 +0x322:  lea    -0x14(%ebp),%eax
0826a6ab +0x325:  mov    %edx,0x4(%esp)
0826a6af +0x329:  mov    %eax,(%esp)
0826a6b2 +0x32c:  call   0826bc58 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x526>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x526
0826a6b7 +0x331:  sub    $0x4,%esp
0826a6ba +0x334:  lea    -0x14(%ebp),%eax
0826a6bd +0x337:  mov    %eax,0x4(%esp)
0826a6c1 +0x33b:  lea    -0x1c(%ebp),%eax
0826a6c4 +0x33e:  mov    %eax,(%esp)
0826a6c7 +0x341:  call   0826bc7e <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x54c>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x54c
0826a6cc +0x346:  test   %al,%al
0826a6ce +0x348:  je     0826a757 <+0x3d1>
0826a6d4 +0x34e:  lea    -0x1c(%ebp),%eax
0826a6d7 +0x351:  mov    %eax,(%esp)
0826a6da +0x354:  call   0826bc92 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x560>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x560
0826a6df +0x359:  lea    0x4(%eax),%edx
0826a6e2 +0x35c:  movl   $0x1,0x18(%esp)
0826a6ea +0x364:  mov    -0x10(%ebp),%eax
0826a6ed +0x367:  mov    %eax,0x14(%esp)
0826a6f1 +0x36b:  mov    -0xc(%ebp),%eax
0826a6f4 +0x36e:  mov    %eax,0x10(%esp)
0826a6f8 +0x372:  movl   $0x0,0xc(%esp)
0826a700 +0x37a:  mov    %edx,0x8(%esp)
0826a704 +0x37e:  lea    -0x18(%ebp),%eax
0826a707 +0x381:  mov    %eax,0x4(%esp)
0826a70b +0x385:  mov    0x8(%ebp),%eax
0826a70e +0x388:  mov    %eax,(%esp)
0826a711 +0x38b:  call   0826afb4 <_ZN10QuickParty24CQuickPartySystemManager24push_quick_party_in_poolERKNS_23STQuickPartyPoolMap_KeyERNS_24STQuickPartyPoolMap_DataEP6CPartyiPNS_11CQuickPartyEb>  ; QuickParty::CQuickPartySystemManager::push_quick_party_in_pool(QuickParty::STQuickPartyPoolMap_Key const&, QuickParty::STQuickPartyPoolMap_Data&, CParty*, int, QuickParty::CQuickParty*, bool)
0826a716 +0x390:  xor    $0x1,%eax
0826a719 +0x393:  test   %al,%al
0826a71b +0x395:  je     0826a757 <+0x3d1>
0826a71d +0x397:  mov    -0xc(%ebp),%eax
0826a720 +0x39a:  mov    %eax,0x14(%esp)
0826a724 +0x39e:  movl   $"QUICK_PARTY_LOG : PUSH ERROR!! (%d)",0x10(%esp)
0826a72c +0x3a6:  movl   $0x229,0xc(%esp)
0826a734 +0x3ae:  movl   $&_ZZN10QuickParty24CQuickPartySystemManager18cancel_quick_partyEP6CPartybP5CUserE19__PRETTY_FUNCTION__,0x8(%esp)
0826a73c +0x3b6:  movl   $"QuickParty.cpp",0x4(%esp)
0826a744 +0x3be:  movl   $0x1,(%esp)
0826a74b +0x3c5:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0826a750 +0x3ca:  mov    $0x0,%eax
0826a755 +0x3cf:  jmp    0826a75c <+0x3d6>
0826a757 +0x3d1:  mov    $0x1,%eax
0826a75c +0x3d6:  mov    -0x4(%ebp),%ebx
0826a75f +0x3d9:  leave
0826a760 +0x3da:  ret
0826a761 +0x3db:  nop
```

## 反编译 C

```c
// QuickParty::CQuickPartySystemManager::cancel_quick_party @ 0x826a386

/* QuickParty::CQuickPartySystemManager::cancel_quick_party(CParty*, bool, CUser*) */

undefined4 __thiscall
QuickParty::CQuickPartySystemManager::cancel_quick_party
          (CQuickPartySystemManager *this,CParty *param_1,bool param_2,CUser *param_3)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  STQuickPartyPoolMap_Key local_20 [4];
  undefined2 local_1c;
  undefined1 local_1a;
  map<QuickParty::STQuickPartyPoolMap_Key,QuickParty::STQuickPartyPoolMap_Data,std::less<QuickParty::STQuickPartyPoolMap_Key>,std::allocator<std::pair<QuickParty::STQuickPartyPoolMap_Key_const,QuickParty::STQuickPartyPoolMap_Data>>>
  local_18 [4];
  CQuickParty *local_14;
  int local_10;
  
  if ((param_1 == (CParty *)0x0) || (iVar4 = CParty::get_quick_party_index(param_1), iVar4 == -1)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    if ((param_1 == (CParty *)0x0) && (param_3 != (CUser *)0x0)) {
      uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_3);
      LogManager::logFormat
                (1,"QuickParty.cpp",
                 "bool QuickParty::CQuickPartySystemManager::cancel_quick_party(CParty*, bool, CUser*)"
                 ,0x1e3,"QUICK_PARTY_LOG : PARTY IS NULL!! (%d)",uVar5);
    }
    else {
      uVar5 = CParty::get_quick_party_index(param_1);
      LogManager::logFormat
                (1,"QuickParty.cpp",
                 "bool QuickParty::CQuickPartySystemManager::cancel_quick_party(CParty*, bool, CUser*)"
                 ,0x1e5,"QUICK_PARTY_LOG : ABNOMAL QUICK PARTY INDEX (%d)!!",uVar5);
    }
    uVar5 = 0;
  }
  else {
    CParty::get_quick_party_index(param_1);
    iVar4 = G_CGameManager();
    local_14 = (CQuickParty *)CGameManager::GetQuickParty(iVar4);
    if (local_14 == (CQuickParty *)0x0) {
      LogManager::logFormat
                (1,"QuickParty.cpp",
                 "bool QuickParty::CQuickPartySystemManager::cancel_quick_party(CParty*, bool, CUser*)"
                 ,0x1ec,"QUICK_PARTY_LOG : NO EXIST QUICK PARTY!!");
      uVar5 = 0;
    }
    else {
      cVar2 = CParty::GetEPLPState(param_1);
      if ((cVar2 < '\x02') || (!param_2)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        CParty::SetSelectedEPLPCmd(param_1,-1);
        sVar3 = CQuickParty::get_dungeon_index(local_14);
        uVar5 = CBattle_Field::getRandomBuffDungeonType
                          ((CBattle_Field *)(param_1 + 0xb24),(int)sVar3);
        CBattle_Field::setEplpWaitingTimer((CBattle_Field *)(param_1 + 0xb24),uVar5);
      }
      STQuickPartyPoolMap_Key::STQuickPartyPoolMap_Key((STQuickPartyPoolMap_Key *)&local_1c);
      local_1c = CQuickParty::get_dungeon_index(local_14);
      local_1a = CQuickParty::get_dungeon_diff(local_14);
      cVar2 = remove_quick_party_in_pool((CQuickParty *)this,(STQuickPartyPoolMap_Key *)local_14);
      if (cVar2 == '\x01') {
        if (!param_2) {
          CQuickParty::set_change_quick_party_count(local_14,true);
        }
        local_10 = 0;
        iVar4 = CParty::get_member_count(param_1);
        if ((iVar4 == 1) || (param_2)) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (bVar1) {
          iVar4 = CParty::GetPartyIndex(param_1);
          CQuickParty::delete_party_index(local_14,iVar4);
          local_10 = CQuickParty::get_quick_party_count(local_14);
          CParty::init_quick_party_data(param_1);
          if (local_10 < 1) {
            CQuickParty::destroy(local_14);
            return 1;
          }
        }
        else {
          local_10 = CQuickParty::get_quick_party_count(local_14);
          local_10 = local_10 + -1;
          if (local_10 < 1) {
            LogManager::logFormat
                      (1,"QuickParty.cpp",
                       "bool QuickParty::CQuickPartySystemManager::cancel_quick_party(CParty*, bool, CUser*)"
                       ,0x216,"QUICK_PARTY_LOG : QUICK PARTY COUNT ERROR!! (%d)",local_10);
            iVar4 = CParty::GetPartyIndex(param_1);
            CQuickParty::delete_party_index(local_14,iVar4);
            CParty::init_quick_party_data(param_1);
            CQuickParty::destroy(local_14);
            return 0;
          }
        }
        std::
        map<QuickParty::STQuickPartyPoolMap_Key,QuickParty::STQuickPartyPoolMap_Data,std::less<QuickParty::STQuickPartyPoolMap_Key>,std::allocator<std::pair<QuickParty::STQuickPartyPoolMap_Key_const,QuickParty::STQuickPartyPoolMap_Data>>>
        ::find(local_20);
        std::
        map<QuickParty::STQuickPartyPoolMap_Key,QuickParty::STQuickPartyPoolMap_Data,std::less<QuickParty::STQuickPartyPoolMap_Key>,std::allocator<std::pair<QuickParty::STQuickPartyPoolMap_Key_const,QuickParty::STQuickPartyPoolMap_Data>>>
        ::end(local_18);
        cVar2 = std::
                _Rb_tree_iterator<std::pair<QuickParty::STQuickPartyPoolMap_Key_const,QuickParty::STQuickPartyPoolMap_Data>>
                ::operator!=((_Rb_tree_iterator<std::pair<QuickParty::STQuickPartyPoolMap_Key_const,QuickParty::STQuickPartyPoolMap_Data>>
                              *)local_20,(_Rb_tree_iterator *)local_18);
        if (cVar2 != '\0') {
          iVar4 = std::
                  _Rb_tree_iterator<std::pair<QuickParty::STQuickPartyPoolMap_Key_const,QuickParty::STQuickPartyPoolMap_Data>>
                  ::operator->((_Rb_tree_iterator<std::pair<QuickParty::STQuickPartyPoolMap_Key_const,QuickParty::STQuickPartyPoolMap_Data>>
                                *)local_20);
          cVar2 = push_quick_party_in_pool
                            (this,(STQuickPartyPoolMap_Key *)&local_1c,
                             (STQuickPartyPoolMap_Data *)(iVar4 + 4),(CParty *)0x0,local_10,local_14
                             ,true);
          if (cVar2 != '\x01') {
            LogManager::logFormat
                      (1,"QuickParty.cpp",
                       "bool QuickParty::CQuickPartySystemManager::cancel_quick_party(CParty*, bool, CUser*)"
                       ,0x229,"QUICK_PARTY_LOG : PUSH ERROR!! (%d)",local_10);
            return 0;
          }
        }
        uVar5 = 1;
      }
      else {
        uVar5 = 0;
      }
    }
  }
  return uVar5;
}
```
