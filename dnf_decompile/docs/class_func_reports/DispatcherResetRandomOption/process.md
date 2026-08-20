# process

`_ZN27DispatcherResetRandomOption7processEP5CUserR8MSG_BASER9ParamBase`

`DispatcherResetRandomOption::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `DispatcherResetRandomOption` | `0x081dd2be` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081dd2be  _ZN27DispatcherResetRandomOption7processEP5CUserR8MSG_BASER9ParamBase
#           DispatcherResetRandomOption::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081dd2be, 0x081dd7e9]
081dd2be +0x000:  push   %ebp
081dd2bf +0x001:  mov    %esp,%ebp
081dd2c1 +0x003:  push   %edi
081dd2c2 +0x004:  push   %esi
081dd2c3 +0x005:  push   %ebx
081dd2c4 +0x006:  sub    $0x8c,%esp
081dd2ca +0x00c:  mov    0x10(%ebp),%eax
081dd2cd +0x00f:  mov    %eax,-0x30(%ebp)
081dd2d0 +0x012:  mov    0xc(%ebp),%eax
081dd2d3 +0x015:  mov    %eax,(%esp)
081dd2d6 +0x018:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081dd2db +0x01d:  cmp    $0x3,%eax
081dd2de +0x020:  jne    081dd2ef <+0x31>
081dd2e0 +0x022:  mov    0xc(%ebp),%eax
081dd2e3 +0x025:  mov    %eax,(%esp)
081dd2e6 +0x028:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
081dd2eb +0x02d:  test   %eax,%eax
081dd2ed +0x02f:  jne    081dd2f6 <+0x38>
081dd2ef +0x031:  mov    $0x1,%eax
081dd2f4 +0x036:  jmp    081dd2fb <+0x3d>
081dd2f6 +0x038:  mov    $0x0,%eax
081dd2fb +0x03d:  test   %al,%al
081dd2fd +0x03f:  je     081dd309 <+0x4b>
081dd2ff +0x041:  mov    $0x0,%eax
081dd304 +0x046:  jmp    081dd7de <+0x520>
081dd309 +0x04b:  mov    0xc(%ebp),%eax
081dd30c +0x04e:  mov    %eax,(%esp)
081dd30f +0x051:  call   080da2fe <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x49b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x49b
081dd314 +0x056:  test   %al,%al
081dd316 +0x058:  je     081dd322 <+0x64>
081dd318 +0x05a:  mov    $0x0,%eax
081dd31d +0x05f:  jmp    081dd7de <+0x520>
081dd322 +0x064:  mov    -0x30(%ebp),%eax
081dd325 +0x067:  movzwl 0xe(%eax),%eax
081dd329 +0x06b:  movzwl %ax,%eax
081dd32c +0x06e:  mov    %eax,0x8(%esp)
081dd330 +0x072:  movl   $0x1,0x4(%esp)
081dd338 +0x07a:  mov    0xc(%ebp),%eax
081dd33b +0x07d:  mov    %eax,(%esp)
081dd33e +0x080:  call   08646942 <_ZNK5CUser13CheckItemLockEii>  ; CUser::CheckItemLock(int, int) const
081dd343 +0x085:  test   %al,%al
081dd345 +0x087:  je     081dd36c <+0xae>
081dd347 +0x089:  movl   $0xd5,0x8(%esp)
081dd34f +0x091:  movl   $0x1c8,0x4(%esp)
081dd357 +0x099:  mov    0xc(%ebp),%eax
081dd35a +0x09c:  mov    %eax,(%esp)
081dd35d +0x09f:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081dd362 +0x0a4:  mov    $0x0,%eax
081dd367 +0x0a9:  jmp    081dd7de <+0x520>
081dd36c +0x0ae:  mov    -0x30(%ebp),%eax
081dd36f +0x0b1:  movzwl 0xe(%eax),%eax
081dd373 +0x0b5:  movzwl %ax,%ebx
081dd376 +0x0b8:  mov    0xc(%ebp),%eax
081dd379 +0x0bb:  mov    %eax,(%esp)
081dd37c +0x0be:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
081dd381 +0x0c3:  mov    %ebx,0x8(%esp)
081dd385 +0x0c7:  movl   $0x1,0x4(%esp)
081dd38d +0x0cf:  mov    %eax,(%esp)
081dd390 +0x0d2:  call   084fc2ae <_ZN10CInventory11GetInvenRefEii>  ; CInventory::GetInvenRef(int, int)
081dd395 +0x0d7:  mov    %eax,-0x2c(%ebp)
081dd398 +0x0da:  cmpl   $0x0,-0x2c(%ebp)
081dd39c +0x0de:  sete   %al
081dd39f +0x0e1:  test   %al,%al
081dd3a1 +0x0e3:  je     081dd3c8 <+0x10a>
081dd3a3 +0x0e5:  movl   $0x11,0x8(%esp)
081dd3ab +0x0ed:  movl   $0x1c8,0x4(%esp)
081dd3b3 +0x0f5:  mov    0xc(%ebp),%eax
081dd3b6 +0x0f8:  mov    %eax,(%esp)
081dd3b9 +0x0fb:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081dd3be +0x100:  mov    $0x0,%eax
081dd3c3 +0x105:  jmp    081dd7de <+0x520>
081dd3c8 +0x10a:  mov    -0x2c(%ebp),%eax
081dd3cb +0x10d:  mov    0x2(%eax),%eax
081dd3ce +0x110:  mov    %eax,%ebx
081dd3d0 +0x112:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081dd3d5 +0x117:  mov    %ebx,0x4(%esp)
081dd3d9 +0x11b:  mov    %eax,(%esp)
081dd3dc +0x11e:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
081dd3e1 +0x123:  mov    %eax,-0x28(%ebp)
081dd3e4 +0x126:  cmpl   $0x0,-0x28(%ebp)
081dd3e8 +0x12a:  jne    081dd40f <+0x151>
081dd3ea +0x12c:  movl   $0x11,0x8(%esp)
081dd3f2 +0x134:  movl   $0x1c8,0x4(%esp)
081dd3fa +0x13c:  mov    0xc(%ebp),%eax
081dd3fd +0x13f:  mov    %eax,(%esp)
081dd400 +0x142:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081dd405 +0x147:  mov    $0x0,%eax
081dd40a +0x14c:  jmp    081dd7de <+0x520>
081dd40f +0x151:  call   081625e6 <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0x854>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0x854
081dd414 +0x156:  movl   $0xf,0xc(%esp)
081dd41c +0x15e:  movl   $0x1,0x8(%esp)
081dd424 +0x166:  mov    0xc(%ebp),%edx
081dd427 +0x169:  mov    %edx,0x4(%esp)
081dd42b +0x16d:  mov    %eax,(%esp)
081dd42e +0x170:  call   0816e6b8 <_ZN22ServiceRestrictManager12isRestrictedEP5CUserN16RestrictCategory4EnumEi>  ; ServiceRestrictManager::isRestricted(CUser*, RestrictCategory::Enum, int)
081dd433 +0x175:  test   %al,%al
081dd435 +0x177:  je     081dd45c <+0x19e>
081dd437 +0x179:  movl   $0xd1,0x8(%esp)
081dd43f +0x181:  movl   $0x1c8,0x4(%esp)
081dd447 +0x189:  mov    0xc(%ebp),%eax
081dd44a +0x18c:  mov    %eax,(%esp)
081dd44d +0x18f:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081dd452 +0x194:  mov    $0x0,%eax
081dd457 +0x199:  jmp    081dd7de <+0x520>
081dd45c +0x19e:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%eax
081dd461 +0x1a3:  movl   $0x26,0x8(%esp)
081dd469 +0x1ab:  mov    0xc(%ebp),%edx
081dd46c +0x1ae:  mov    %edx,0x4(%esp)
081dd470 +0x1b2:  mov    %eax,(%esp)
081dd473 +0x1b5:  call   08288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>  ; CSecu_ProtectionField::Check(CUser*, SECURITY_PROTCTION)
081dd478 +0x1ba:  mov    %eax,-0x24(%ebp)
081dd47b +0x1bd:  cmpl   $0x0,-0x24(%ebp)
081dd47f +0x1c1:  je     081dd4a8 <+0x1ea>
081dd481 +0x1c3:  mov    -0x24(%ebp),%eax
081dd484 +0x1c6:  movzbl %al,%eax
081dd487 +0x1c9:  mov    %eax,0x8(%esp)
081dd48b +0x1cd:  movl   $0x1c8,0x4(%esp)
081dd493 +0x1d5:  mov    0xc(%ebp),%eax
081dd496 +0x1d8:  mov    %eax,(%esp)
081dd499 +0x1db:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081dd49e +0x1e0:  mov    $0x0,%eax
081dd4a3 +0x1e5:  jmp    081dd7de <+0x520>
081dd4a8 +0x1ea:  mov    -0x2c(%ebp),%eax
081dd4ab +0x1ed:  add    $0x25,%eax
081dd4ae +0x1f0:  mov    %eax,(%esp)
081dd4b1 +0x1f3:  call   0822abd0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x27a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x27a
081dd4b6 +0x1f8:  test   %al,%al
081dd4b8 +0x1fa:  je     081dd4df <+0x221>
081dd4ba +0x1fc:  movl   $0x13,0x8(%esp)
081dd4c2 +0x204:  movl   $0x1c8,0x4(%esp)
081dd4ca +0x20c:  mov    0xc(%ebp),%eax
081dd4cd +0x20f:  mov    %eax,(%esp)
081dd4d0 +0x212:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081dd4d5 +0x217:  mov    $0x0,%eax
081dd4da +0x21c:  jmp    081dd7de <+0x520>
081dd4df +0x221:  mov    -0x30(%ebp),%eax
081dd4e2 +0x224:  movzbl 0x12(%eax),%eax
081dd4e6 +0x228:  movzbl %al,%eax
081dd4e9 +0x22b:  mov    %eax,-0x20(%ebp)
081dd4ec +0x22e:  cmpl   $0x0,-0x20(%ebp)
081dd4f0 +0x232:  js     081dd4f8 <+0x23a>
081dd4f2 +0x234:  cmpl   $0x2,-0x20(%ebp)
081dd4f6 +0x238:  jle    081dd51d <+0x25f>
081dd4f8 +0x23a:  movl   $0x13,0x8(%esp)
081dd500 +0x242:  movl   $0x1c8,0x4(%esp)
081dd508 +0x24a:  mov    0xc(%ebp),%eax
081dd50b +0x24d:  mov    %eax,(%esp)
081dd50e +0x250:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081dd513 +0x255:  mov    $0x0,%eax
081dd518 +0x25a:  jmp    081dd7de <+0x520>
081dd51d +0x25f:  mov    -0x30(%ebp),%eax
081dd520 +0x262:  movzwl 0x10(%eax),%eax
081dd524 +0x266:  movzwl %ax,%ebx
081dd527 +0x269:  mov    0xc(%ebp),%eax
081dd52a +0x26c:  mov    %eax,(%esp)
081dd52d +0x26f:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
081dd532 +0x274:  lea    -0x6d(%ebp),%edx
081dd535 +0x277:  mov    %ebx,0xc(%esp)
081dd539 +0x27b:  movl   $0x1,0x8(%esp)
081dd541 +0x283:  mov    %eax,0x4(%esp)
081dd545 +0x287:  mov    %edx,(%esp)
081dd548 +0x28a:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
081dd54d +0x28f:  sub    $0x4,%esp
081dd550 +0x292:  mov    -0x66(%ebp),%eax
081dd553 +0x295:  test   %eax,%eax
081dd555 +0x297:  jg     081dd57c <+0x2be>
081dd557 +0x299:  movl   $0x15,0x8(%esp)
081dd55f +0x2a1:  movl   $0x1c8,0x4(%esp)
081dd567 +0x2a9:  mov    0xc(%ebp),%eax
081dd56a +0x2ac:  mov    %eax,(%esp)
081dd56d +0x2af:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081dd572 +0x2b4:  mov    $0x0,%eax
081dd577 +0x2b9:  jmp    081dd7de <+0x520>
081dd57c +0x2be:  mov    -0x6b(%ebp),%eax
081dd57f +0x2c1:  cmp    $0xf,%eax
081dd582 +0x2c4:  je     081dd5bd <+0x2ff>
081dd584 +0x2c6:  mov    -0x6b(%ebp),%eax
081dd587 +0x2c9:  cmp    $0x381,%eax
081dd58c +0x2ce:  je     081dd5bd <+0x2ff>
081dd58e +0x2d0:  mov    -0x6b(%ebp),%eax
081dd591 +0x2d3:  cmp    $0x292090f2,%eax
081dd596 +0x2d8:  je     081dd5bd <+0x2ff>
081dd598 +0x2da:  movl   $0x15,0x8(%esp)
081dd5a0 +0x2e2:  movl   $0x1c8,0x4(%esp)
081dd5a8 +0x2ea:  mov    0xc(%ebp),%eax
081dd5ab +0x2ed:  mov    %eax,(%esp)
081dd5ae +0x2f0:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081dd5b3 +0x2f5:  mov    $0x0,%eax
081dd5b8 +0x2fa:  jmp    081dd7de <+0x520>
081dd5bd +0x2ff:  movl   $0x0,-0x1c(%ebp)
081dd5c4 +0x306:  mov    $&_ZGVZN27DispatcherResetRandomOption7processEP5CUserR8MSG_BASER9ParamBaseE6handle,%eax
081dd5c9 +0x30b:  movzbl (%eax),%eax
081dd5cc +0x30e:  test   %al,%al
081dd5ce +0x310:  jne    081dd641 <+0x383>
081dd5d0 +0x312:  movl   $&_ZGVZN27DispatcherResetRandomOption7processEP5CUserR8MSG_BASER9ParamBaseE6handle,(%esp)
081dd5d7 +0x319:  call   08725330 <__cxa_guard_acquire>
081dd5dc +0x31e:  test   %eax,%eax
081dd5de +0x320:  setne  %al
081dd5e1 +0x323:  test   %al,%al
081dd5e3 +0x325:  je     081dd641 <+0x383>
081dd5e5 +0x327:  mov    $0x0,%ebx
081dd5ea +0x32c:  movl   $&_ZZN27DispatcherResetRandomOption7processEP5CUserR8MSG_BASER9ParamBaseE6handle,(%esp)
081dd5f1 +0x333:  call   085f0d64 <_ZN13random_option23CRandomOptionItemHandleC1Ev>  ; random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()
081dd5f6 +0x338:  movl   $&_ZGVZN27DispatcherResetRandomOption7processEP5CUserR8MSG_BASER9ParamBaseE6handle,(%esp)
081dd5fd +0x33f:  call   08725250 <__cxa_guard_release>
081dd602 +0x344:  mov    $&_ZN13random_option23CRandomOptionItemHandleD1Ev,%eax
081dd607 +0x349:  movl   $&__dso_handle,0x8(%esp)
081dd60f +0x351:  movl   $&_ZZN27DispatcherResetRandomOption7processEP5CUserR8MSG_BASER9ParamBaseE6handle,0x4(%esp)
081dd617 +0x359:  mov    %eax,(%esp)
081dd61a +0x35c:  call   0807ddd0 <_init+0x6c8>
081dd61f +0x361:  jmp    081dd641 <+0x383>
081dd621 +0x363:  mov    %edx,%esi
081dd623 +0x365:  mov    %eax,%edi
081dd625 +0x367:  test   %bl,%bl
081dd627 +0x369:  jne    081dd635 <+0x377>
081dd629 +0x36b:  movl   $&_ZGVZN27DispatcherResetRandomOption7processEP5CUserR8MSG_BASER9ParamBaseE6handle,(%esp)
081dd630 +0x372:  call   087252c0 <__cxa_guard_abort>
081dd635 +0x377:  mov    %edi,%eax
081dd637 +0x379:  mov    %esi,%edx
081dd639 +0x37b:  mov    %eax,(%esp)
081dd63c +0x37e:  call   08ae3750 <_Unwind_Resume>
081dd641 +0x383:  mov    -0x2c(%ebp),%eax
081dd644 +0x386:  lea    0x25(%eax),%ebx
081dd647 +0x389:  mov    -0x28(%ebp),%eax
081dd64a +0x38c:  mov    %eax,(%esp)
081dd64d +0x38f:  call   080f12d6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x358>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x358
081dd652 +0x394:  mov    -0x2c(%ebp),%edx
081dd655 +0x397:  mov    0x2(%edx),%edx
081dd658 +0x39a:  mov    %ebx,0x10(%esp)
081dd65c +0x39e:  mov    -0x20(%ebp),%ecx
081dd65f +0x3a1:  mov    %ecx,0xc(%esp)
081dd663 +0x3a5:  mov    %eax,0x8(%esp)
081dd667 +0x3a9:  mov    %edx,0x4(%esp)
081dd66b +0x3ad:  movl   $&_ZZN27DispatcherResetRandomOption7processEP5CUserR8MSG_BASER9ParamBaseE6handle,(%esp)
081dd672 +0x3b4:  call   085f39d2 <_ZN13random_option23CRandomOptionItemHandle12reset_optionEm11ENUM_RARITYiP12RandomOption>  ; random_option::CRandomOptionItemHandle::reset_option(unsigned long, ENUM_RARITY, int, RandomOption*)
081dd677 +0x3b9:  mov    %eax,-0x1c(%ebp)
081dd67a +0x3bc:  cmpl   $0x0,-0x1c(%ebp)
081dd67e +0x3c0:  setne  %al
081dd681 +0x3c3:  test   %al,%al
081dd683 +0x3c5:  je     081dd6ac <+0x3ee>
081dd685 +0x3c7:  mov    -0x1c(%ebp),%eax
081dd688 +0x3ca:  movzbl %al,%eax
081dd68b +0x3cd:  mov    %eax,0x8(%esp)
081dd68f +0x3d1:  movl   $0x1c8,0x4(%esp)
081dd697 +0x3d9:  mov    0xc(%ebp),%eax
081dd69a +0x3dc:  mov    %eax,(%esp)
081dd69d +0x3df:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081dd6a2 +0x3e4:  mov    $0x0,%eax
081dd6a7 +0x3e9:  jmp    081dd7de <+0x520>
081dd6ac +0x3ee:  mov    0xc(%ebp),%eax
081dd6af +0x3f1:  lea    0x79700(%eax),%edx
081dd6b5 +0x3f7:  movl   $0x3,0x8(%esp)
081dd6bd +0x3ff:  mov    -0x2c(%ebp),%eax
081dd6c0 +0x402:  mov    %eax,0x4(%esp)
081dd6c4 +0x406:  mov    %edx,(%esp)
081dd6c7 +0x409:  call   08682d3a <_ZN15cUserHistoryLog12RandomOptionERK10Inven_ItemN18randomOptionReason1TE>  ; cUserHistoryLog::RandomOption(Inven_Item const&, randomOptionReason::T)
081dd6cc +0x40e:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
081dd6d3 +0x415:  call   0823445e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9b08>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9b08
081dd6d8 +0x41a:  mov    %eax,%ebx
081dd6da +0x41c:  mov    0xc(%ebp),%eax
081dd6dd +0x41f:  mov    %eax,(%esp)
081dd6e0 +0x422:  call   0822f3a0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4a4a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4a4a
081dd6e5 +0x427:  mov    %ebx,0x18(%esp)
081dd6e9 +0x42b:  mov    %eax,0x14(%esp)
081dd6ed +0x42f:  movl   $"%d,'%s'",0x10(%esp)
081dd6f5 +0x437:  movl   $0x1,0xc(%esp)
081dd6fd +0x43f:  movl   $"reset_cnt",0x8(%esp)
081dd705 +0x447:  movl   $"log_random_option",0x4(%esp)
081dd70d +0x44f:  mov    0xc(%ebp),%eax
081dd710 +0x452:  mov    %eax,(%esp)
081dd713 +0x455:  call   0860fdd2 <_ZN14statistc_proxy3addEP5CUserPKcS3_jS3_z>  ; statistc_proxy::add(CUser*, char const*, char const*, unsigned int, char const*, ...)
081dd718 +0x45a:  mov    -0x30(%ebp),%eax
081dd71b +0x45d:  movzwl 0x10(%eax),%eax
081dd71f +0x461:  movzwl %ax,%ebx
081dd722 +0x464:  mov    0xc(%ebp),%eax
081dd725 +0x467:  mov    %eax,(%esp)
081dd728 +0x46a:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
081dd72d +0x46f:  movl   $0x1,0xc(%esp)
081dd735 +0x477:  movl   $0x1,0x8(%esp)
081dd73d +0x47f:  mov    %ebx,0x4(%esp)
081dd741 +0x483:  mov    %eax,(%esp)
081dd744 +0x486:  call   084ff8de <_ZN10CInventory8use_itemEiii>  ; CInventory::use_item(int, int, int)
081dd749 +0x48b:  test   %eax,%eax
081dd74b +0x48d:  setne  %al
081dd74e +0x490:  test   %al,%al
081dd750 +0x492:  je     081dd774 <+0x4b6>
081dd752 +0x494:  movl   $0x16,0x8(%esp)
081dd75a +0x49c:  movl   $0x1c8,0x4(%esp)
081dd762 +0x4a4:  mov    0xc(%ebp),%eax
081dd765 +0x4a7:  mov    %eax,(%esp)
081dd768 +0x4aa:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081dd76d +0x4af:  mov    $0x0,%eax
081dd772 +0x4b4:  jmp    081dd7de <+0x520>
081dd774 +0x4b6:  mov    -0x30(%ebp),%eax
081dd777 +0x4b9:  movzwl 0xe(%eax),%eax
081dd77b +0x4bd:  movzwl %ax,%eax
081dd77e +0x4c0:  mov    %eax,0xc(%esp)
081dd782 +0x4c4:  movl   $0x0,0x8(%esp)
081dd78a +0x4cc:  movl   $0x1,0x4(%esp)
081dd792 +0x4d4:  mov    0xc(%ebp),%eax
081dd795 +0x4d7:  mov    %eax,(%esp)
081dd798 +0x4da:  call   0867c2d8 <_ZN5CUser14SendUpdateItemENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItem(CUser::eSendTarget, ENUM_ITEMSPACE, int)
081dd79d +0x4df:  mov    -0x30(%ebp),%eax
081dd7a0 +0x4e2:  movzwl 0x10(%eax),%eax
081dd7a4 +0x4e6:  movzwl %ax,%eax
081dd7a7 +0x4e9:  mov    %eax,0xc(%esp)
081dd7ab +0x4ed:  movl   $0x0,0x8(%esp)
081dd7b3 +0x4f5:  movl   $0x1,0x4(%esp)
081dd7bb +0x4fd:  mov    0xc(%ebp),%eax
081dd7be +0x500:  mov    %eax,(%esp)
081dd7c1 +0x503:  call   0867c2d8 <_ZN5CUser14SendUpdateItemENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItem(CUser::eSendTarget, ENUM_ITEMSPACE, int)
081dd7c6 +0x508:  movl   $0x1c8,0x4(%esp)
081dd7ce +0x510:  mov    0xc(%ebp),%eax
081dd7d1 +0x513:  mov    %eax,(%esp)
081dd7d4 +0x516:  call   0867bea0 <_ZN5CUser15SendCmdOkPacketE14ENUM_CMDPACKET>  ; CUser::SendCmdOkPacket(ENUM_CMDPACKET)
081dd7d9 +0x51b:  mov    $0x0,%eax
081dd7de +0x520:  lea    -0xc(%ebp),%esp
081dd7e1 +0x523:  add    $0x0,%esp
081dd7e4 +0x526:  pop    %ebx
081dd7e5 +0x527:  pop    %esi
081dd7e6 +0x528:  pop    %edi
081dd7e7 +0x529:  pop    %ebp
081dd7e8 +0x52a:  ret
081dd7e9 +0x52b:  nop
```

## 反编译 C

```c
// DispatcherResetRandomOption::process @ 0x81dd2be

/* DispatcherResetRandomOption::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 DispatcherResetRandomOption::process(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  ushort uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  CInventory *pCVar5;
  CDataManager *this;
  ServiceRestrictManager *pSVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined1 local_71 [2];
  int local_6f;
  int local_6a;
  ParamBase *local_34;
  int local_30;
  CItem *local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  
  local_34 = param_3;
  iVar4 = CUser::get_state((CUser *)param_2);
  if ((iVar4 == 3) &&
     (iVar4 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2), iVar4 != 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((!bVar2) && (cVar3 = CUser::CheckInTrade((CUser *)param_2), cVar3 == '\0')) {
    cVar3 = CUser::CheckItemLock((CUser *)param_2,1,(uint)*(ushort *)(local_34 + 0xe));
    if (cVar3 == '\0') {
      uVar1 = *(ushort *)(local_34 + 0xe);
      pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
      local_30 = CInventory::GetInvenRef(pCVar5,1,(uint)uVar1);
      if (local_30 == 0) {
        CUser::SendCmdErrorPacket((CUser *)param_2,0x1c8,0x11);
      }
      else {
        iVar4 = *(int *)(local_30 + 2);
        this = (CDataManager *)G_CDataManager();
        local_2c = (CItem *)CDataManager::find_item(this,iVar4);
        if (local_2c == (CItem *)0x0) {
          CUser::SendCmdErrorPacket((CUser *)param_2,0x1c8,0x11);
        }
        else {
          pSVar6 = (ServiceRestrictManager *)ARAD::Singleton<ServiceRestrictManager>::Get();
          cVar3 = ServiceRestrictManager::isRestricted(pSVar6,param_2,1,0xf);
          if (cVar3 == '\0') {
            local_28 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_2,0x26)
            ;
            if (local_28 == 0) {
              cVar3 = RandomOption::empty((RandomOption *)(local_30 + 0x25));
              if (cVar3 == '\0') {
                local_24 = (uint)(byte)local_34[0x12];
                if (local_24 < 3) {
                  uVar8 = (uint)*(ushort *)(local_34 + 0x10);
                  iVar4 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_2);
                  uVar9 = 1;
                  CInventory::GetInvenSlot((int)local_71,iVar4);
                  if (local_6a < 1) {
                    CUser::SendCmdErrorPacket((CUser *)param_2,0x1c8,0x15);
                  }
                  else if (((local_6f == 0xf) || (local_6f == 0x381)) || (local_6f == 0x292090f2)) {
                    local_20 = 0;
                    if ((process(CUser*,MSG_BASE&,ParamBase&)::handle == '\0') &&
                       (iVar4 = __cxa_guard_acquire(&process(CUser*,MSG_BASE&,ParamBase&)::handle,
                                                    iVar4,uVar9,uVar8), iVar4 != 0)) {
                    /* try { // try from 081dd5f1 to 081dd5f5 has its CatchHandler @ 081dd621 */
                      random_option::CRandomOptionItemHandle::CRandomOptionItemHandle
                                ((CRandomOptionItemHandle *)
                                 process(CUser*,MSG_BASE&,ParamBase&)::handle);
                      __cxa_guard_release(&process(CUser*,MSG_BASE&,ParamBase&)::handle);
                      __cxa_atexit(random_option::CRandomOptionItemHandle::~CRandomOptionItemHandle,
                                   process(CUser*,MSG_BASE&,ParamBase&)::handle,&__dso_handle);
                    }
                    iVar4 = local_30 + 0x25;
                    uVar9 = CItem::get_rarity(local_2c);
                    local_20 = random_option::CRandomOptionItemHandle::reset_option
                                         ((CRandomOptionItemHandle *)
                                          process(CUser*,MSG_BASE&,ParamBase&)::handle,
                                          *(undefined4 *)(local_30 + 2),uVar9,local_24,iVar4);
                    if (local_20 == 0) {
                      cUserHistoryLog::RandomOption
                                ((cUserHistoryLog *)(param_2 + 0x79700),local_30,3);
                      uVar9 = CSystemTime::getCurDate((CSystemTime *)GlobalData::s_systemTime_);
                      uVar7 = CUserCharacInfo::get_charac_10_level_section
                                        ((CUserCharacInfo *)param_2);
                      statistc_proxy::add((CUser *)param_2,"log_random_option","reset_cnt",1,
                                          "%d,\'%s\'",uVar7,uVar9);
                      uVar1 = *(ushort *)(local_34 + 0x10);
                      pCVar5 = (CInventory *)
                               CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
                      iVar4 = CInventory::use_item(pCVar5,(uint)uVar1,1,1);
                      if (iVar4 == 0) {
                        CUser::SendUpdateItem((CUser *)param_2,1,0,*(undefined2 *)(local_34 + 0xe));
                        CUser::SendUpdateItem((CUser *)param_2,1,0,*(undefined2 *)(local_34 + 0x10))
                        ;
                        CUser::SendCmdOkPacket((CUser *)param_2,0x1c8);
                      }
                      else {
                        CUser::SendCmdErrorPacket((CUser *)param_2,0x1c8,0x16);
                      }
                    }
                    else {
                      CUser::SendCmdErrorPacket((CUser *)param_2,0x1c8,local_20 & 0xff);
                    }
                  }
                  else {
                    CUser::SendCmdErrorPacket((CUser *)param_2,0x1c8,0x15);
                  }
                }
                else {
                  CUser::SendCmdErrorPacket((CUser *)param_2,0x1c8,0x13);
                }
              }
              else {
                CUser::SendCmdErrorPacket((CUser *)param_2,0x1c8,0x13);
              }
            }
            else {
              CUser::SendCmdErrorPacket((CUser *)param_2,0x1c8,local_28 & 0xff);
            }
          }
          else {
            CUser::SendCmdErrorPacket((CUser *)param_2,0x1c8,0xd1);
          }
        }
      }
    }
    else {
      CUser::SendCmdErrorPacket((CUser *)param_2,0x1c8,0xd5);
    }
  }
  return 0;
}
```
