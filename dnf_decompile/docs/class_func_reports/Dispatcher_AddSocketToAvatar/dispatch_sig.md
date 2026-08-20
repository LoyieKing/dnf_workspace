# dispatch_sig

`_ZN28Dispatcher_AddSocketToAvatar12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_AddSocketToAvatar::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_AddSocketToAvatar` | `0x0821a412` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0821a412  _ZN28Dispatcher_AddSocketToAvatar12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_AddSocketToAvatar::dispatch_sig(CUser*, PacketBuf&)
# range [0x0821a412, 0x0821abdf]
0821a412 +0x000:  push   %ebp
0821a413 +0x001:  mov    %esp,%ebp
0821a415 +0x003:  push   %esi
0821a416 +0x004:  push   %ebx
0821a417 +0x005:  sub    $0x140,%esp
0821a41d +0x00b:  lea    -0x3d(%ebp),%eax
0821a420 +0x00e:  mov    %eax,(%esp)
0821a423 +0x011:  call   0822dd2c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x33d6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x33d6
0821a428 +0x016:  movl   $0x0,-0x28(%ebp)
0821a42f +0x01d:  lea    -0x3d(%ebp),%eax
0821a432 +0x020:  add    $0xd,%eax
0821a435 +0x023:  mov    %eax,0x4(%esp)
0821a439 +0x027:  mov    0x10(%ebp),%eax
0821a43c +0x02a:  mov    %eax,(%esp)
0821a43f +0x02d:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
0821a444 +0x032:  xor    $0x1,%eax
0821a447 +0x035:  test   %al,%al
0821a449 +0x037:  je     0821a476 <+0x64>
0821a44b +0x039:  movl   $0x0,0xc(%esp)
0821a453 +0x041:  movl   $0x0,0x8(%esp)
0821a45b +0x049:  movl   $&_ZZN28Dispatcher_AddSocketToAvatar12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821a463 +0x051:  movl   $0xcd60,(%esp)
0821a46a +0x058:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821a46f +0x05d:  mov    %eax,%ebx
0821a471 +0x05f:  jmp    0821abd4 <+0x7c2>
0821a476 +0x064:  lea    -0x3d(%ebp),%eax
0821a479 +0x067:  add    $0xf,%eax
0821a47c +0x06a:  mov    %eax,0x4(%esp)
0821a480 +0x06e:  mov    0x10(%ebp),%eax
0821a483 +0x071:  mov    %eax,(%esp)
0821a486 +0x074:  call   0858d27e <_ZN9PacketBuf7get_intERm>  ; PacketBuf::get_int(unsigned long&)
0821a48b +0x079:  xor    $0x1,%eax
0821a48e +0x07c:  test   %al,%al
0821a490 +0x07e:  je     0821a4bd <+0xab>
0821a492 +0x080:  movl   $0x0,0xc(%esp)
0821a49a +0x088:  movl   $0x0,0x8(%esp)
0821a4a2 +0x090:  movl   $&_ZZN28Dispatcher_AddSocketToAvatar12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821a4aa +0x098:  movl   $0xcd62,(%esp)
0821a4b1 +0x09f:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821a4b6 +0x0a4:  mov    %eax,%ebx
0821a4b8 +0x0a6:  jmp    0821abd4 <+0x7c2>
0821a4bd +0x0ab:  lea    -0x3d(%ebp),%eax
0821a4c0 +0x0ae:  add    $0x13,%eax
0821a4c3 +0x0b1:  mov    %eax,0x4(%esp)
0821a4c7 +0x0b5:  mov    0x10(%ebp),%eax
0821a4ca +0x0b8:  mov    %eax,(%esp)
0821a4cd +0x0bb:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
0821a4d2 +0x0c0:  xor    $0x1,%eax
0821a4d5 +0x0c3:  test   %al,%al
0821a4d7 +0x0c5:  je     0821a504 <+0xf2>
0821a4d9 +0x0c7:  movl   $0x0,0xc(%esp)
0821a4e1 +0x0cf:  movl   $0x0,0x8(%esp)
0821a4e9 +0x0d7:  movl   $&_ZZN28Dispatcher_AddSocketToAvatar12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821a4f1 +0x0df:  movl   $0xcd64,(%esp)
0821a4f8 +0x0e6:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821a4fd +0x0eb:  mov    %eax,%ebx
0821a4ff +0x0ed:  jmp    0821abd4 <+0x7c2>
0821a504 +0x0f2:  mov    0xc(%ebp),%eax
0821a507 +0x0f5:  mov    %eax,(%esp)
0821a50a +0x0f8:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0821a50f +0x0fd:  mov    %eax,-0x24(%ebp)
0821a512 +0x100:  movzwl -0x30(%ebp),%eax
0821a516 +0x104:  movzwl %ax,%edx
0821a519 +0x107:  lea    -0xa5(%ebp),%eax
0821a51f +0x10d:  mov    %edx,0xc(%esp)
0821a523 +0x111:  movl   $0x2,0x8(%esp)
0821a52b +0x119:  mov    -0x24(%ebp),%edx
0821a52e +0x11c:  mov    %edx,0x4(%esp)
0821a532 +0x120:  mov    %eax,(%esp)
0821a535 +0x123:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
0821a53a +0x128:  sub    $0x4,%esp
0821a53d +0x12b:  lea    -0xa5(%ebp),%eax
0821a543 +0x131:  mov    %eax,(%esp)
0821a546 +0x134:  call   0811ed66 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x61>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x61
0821a54b +0x139:  test   %al,%al
0821a54d +0x13b:  je     0821a574 <+0x162>
0821a54f +0x13d:  movl   $0x4,0x8(%esp)
0821a557 +0x145:  movl   $0xd1,0x4(%esp)
0821a55f +0x14d:  mov    0xc(%ebp),%eax
0821a562 +0x150:  mov    %eax,(%esp)
0821a565 +0x153:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0821a56a +0x158:  mov    $0x0,%ebx
0821a56f +0x15d:  jmp    0821abd4 <+0x7c2>
0821a574 +0x162:  mov    -0xa3(%ebp),%edx
0821a57a +0x168:  mov    -0x2e(%ebp),%eax
0821a57d +0x16b:  cmp    %eax,%edx
0821a57f +0x16d:  je     0821a5a6 <+0x194>
0821a581 +0x16f:  movl   $0x4,0x8(%esp)
0821a589 +0x177:  movl   $0xd1,0x4(%esp)
0821a591 +0x17f:  mov    0xc(%ebp),%eax
0821a594 +0x182:  mov    %eax,(%esp)
0821a597 +0x185:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0821a59c +0x18a:  mov    $0x0,%ebx
0821a5a1 +0x18f:  jmp    0821abd4 <+0x7c2>
0821a5a6 +0x194:  lea    -0xe2(%ebp),%eax
0821a5ac +0x19a:  mov    %eax,(%esp)
0821a5af +0x19d:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
0821a5b4 +0x1a2:  movzwl -0x2a(%ebp),%eax
0821a5b8 +0x1a6:  movzwl %ax,%edx
0821a5bb +0x1a9:  lea    -0x128(%ebp),%eax
0821a5c1 +0x1af:  mov    %edx,0xc(%esp)
0821a5c5 +0x1b3:  movl   $0x1,0x8(%esp)
0821a5cd +0x1bb:  mov    -0x24(%ebp),%edx
0821a5d0 +0x1be:  mov    %edx,0x4(%esp)
0821a5d4 +0x1c2:  mov    %eax,(%esp)
0821a5d7 +0x1c5:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
0821a5dc +0x1ca:  sub    $0x4,%esp
0821a5df +0x1cd:  mov    -0x128(%ebp),%eax
0821a5e5 +0x1d3:  mov    %eax,-0xe2(%ebp)
0821a5eb +0x1d9:  mov    -0x124(%ebp),%eax
0821a5f1 +0x1df:  mov    %eax,-0xde(%ebp)
0821a5f7 +0x1e5:  mov    -0x120(%ebp),%eax
0821a5fd +0x1eb:  mov    %eax,-0xda(%ebp)
0821a603 +0x1f1:  mov    -0x11c(%ebp),%eax
0821a609 +0x1f7:  mov    %eax,-0xd6(%ebp)
0821a60f +0x1fd:  mov    -0x118(%ebp),%eax
0821a615 +0x203:  mov    %eax,-0xd2(%ebp)
0821a61b +0x209:  mov    -0x114(%ebp),%eax
0821a621 +0x20f:  mov    %eax,-0xce(%ebp)
0821a627 +0x215:  mov    -0x110(%ebp),%eax
0821a62d +0x21b:  mov    %eax,-0xca(%ebp)
0821a633 +0x221:  mov    -0x10c(%ebp),%eax
0821a639 +0x227:  mov    %eax,-0xc6(%ebp)
0821a63f +0x22d:  mov    -0x108(%ebp),%eax
0821a645 +0x233:  mov    %eax,-0xc2(%ebp)
0821a64b +0x239:  mov    -0x104(%ebp),%eax
0821a651 +0x23f:  mov    %eax,-0xbe(%ebp)
0821a657 +0x245:  mov    -0x100(%ebp),%eax
0821a65d +0x24b:  mov    %eax,-0xba(%ebp)
0821a663 +0x251:  mov    -0xfc(%ebp),%eax
0821a669 +0x257:  mov    %eax,-0xb6(%ebp)
0821a66f +0x25d:  mov    -0xf8(%ebp),%eax
0821a675 +0x263:  mov    %eax,-0xb2(%ebp)
0821a67b +0x269:  mov    -0xf4(%ebp),%eax
0821a681 +0x26f:  mov    %eax,-0xae(%ebp)
0821a687 +0x275:  mov    -0xf0(%ebp),%eax
0821a68d +0x27b:  mov    %eax,-0xaa(%ebp)
0821a693 +0x281:  movzbl -0xec(%ebp),%eax
0821a69a +0x288:  mov    %al,-0xa6(%ebp)
0821a6a0 +0x28e:  lea    -0xe2(%ebp),%eax
0821a6a6 +0x294:  mov    %eax,(%esp)
0821a6a9 +0x297:  call   0811ed66 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x61>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x61
0821a6ae +0x29c:  test   %al,%al
0821a6b0 +0x29e:  je     0821a6d7 <+0x2c5>
0821a6b2 +0x2a0:  movl   $0x16,0x8(%esp)
0821a6ba +0x2a8:  movl   $0xd1,0x4(%esp)
0821a6c2 +0x2b0:  mov    0xc(%ebp),%eax
0821a6c5 +0x2b3:  mov    %eax,(%esp)
0821a6c8 +0x2b6:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0821a6cd +0x2bb:  mov    $0x0,%ebx
0821a6d2 +0x2c0:  jmp    0821abd4 <+0x7c2>
0821a6d7 +0x2c5:  mov    -0xe0(%ebp),%eax
0821a6dd +0x2cb:  mov    %eax,%ebx
0821a6df +0x2cd:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0821a6e4 +0x2d2:  mov    %ebx,0x4(%esp)
0821a6e8 +0x2d6:  mov    %eax,(%esp)
0821a6eb +0x2d9:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0821a6f0 +0x2de:  mov    %eax,-0x20(%ebp)
0821a6f3 +0x2e1:  cmpl   $0x0,-0x20(%ebp)
0821a6f7 +0x2e5:  je     0821a70b <+0x2f9>
0821a6f9 +0x2e7:  mov    -0x20(%ebp),%eax
0821a6fc +0x2ea:  mov    %eax,(%esp)
0821a6ff +0x2ed:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
0821a704 +0x2f2:  xor    $0x1,%eax
0821a707 +0x2f5:  test   %al,%al
0821a709 +0x2f7:  je     0821a712 <+0x300>
0821a70b +0x2f9:  mov    $0x1,%eax
0821a710 +0x2fe:  jmp    0821a717 <+0x305>
0821a712 +0x300:  mov    $0x0,%eax
0821a717 +0x305:  test   %al,%al
0821a719 +0x307:  je     0821a740 <+0x32e>
0821a71b +0x309:  movl   $0x11,0x8(%esp)
0821a723 +0x311:  movl   $0xd1,0x4(%esp)
0821a72b +0x319:  mov    0xc(%ebp),%eax
0821a72e +0x31c:  mov    %eax,(%esp)
0821a731 +0x31f:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0821a736 +0x324:  mov    $0x0,%ebx
0821a73b +0x329:  jmp    0821abd4 <+0x7c2>
0821a740 +0x32e:  mov    -0x20(%ebp),%eax
0821a743 +0x331:  mov    %eax,-0x1c(%ebp)
0821a746 +0x334:  movl   $0x20,0x4(%esp)
0821a74e +0x33c:  mov    -0x1c(%ebp),%eax
0821a751 +0x33f:  mov    %eax,(%esp)
0821a754 +0x342:  call   0822ca58 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2102>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2102
0821a759 +0x347:  xor    $0x1,%eax
0821a75c +0x34a:  test   %al,%al
0821a75e +0x34c:  je     0821a785 <+0x373>
0821a760 +0x34e:  movl   $0x4,0x8(%esp)
0821a768 +0x356:  movl   $0xd1,0x4(%esp)
0821a770 +0x35e:  mov    0xc(%ebp),%eax
0821a773 +0x361:  mov    %eax,(%esp)
0821a776 +0x364:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0821a77b +0x369:  mov    $0x0,%ebx
0821a780 +0x36e:  jmp    0821abd4 <+0x7c2>
0821a785 +0x373:  lea    -0xa5(%ebp),%eax
0821a78b +0x379:  mov    %eax,(%esp)
0821a78e +0x37c:  call   08150800 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x135>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x135
0821a793 +0x381:  xor    $0x1,%eax
0821a796 +0x384:  test   %al,%al
0821a798 +0x386:  je     0821a7bf <+0x3ad>
0821a79a +0x388:  movl   $0x11,0x8(%esp)
0821a7a2 +0x390:  movl   $0xd1,0x4(%esp)
0821a7aa +0x398:  mov    0xc(%ebp),%eax
0821a7ad +0x39b:  mov    %eax,(%esp)
0821a7b0 +0x39e:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0821a7b5 +0x3a3:  mov    $0x0,%ebx
0821a7ba +0x3a8:  jmp    0821abd4 <+0x7c2>
0821a7bf +0x3ad:  mov    -0x2e(%ebp),%eax
0821a7c2 +0x3b0:  mov    %eax,%ebx
0821a7c4 +0x3b2:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0821a7c9 +0x3b7:  mov    %ebx,0x4(%esp)
0821a7cd +0x3bb:  mov    %eax,(%esp)
0821a7d0 +0x3be:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0821a7d5 +0x3c3:  mov    %eax,-0x18(%ebp)
0821a7d8 +0x3c6:  cmpl   $0x0,-0x18(%ebp)
0821a7dc +0x3ca:  je     0821a813 <+0x401>
0821a7de +0x3cc:  mov    -0x18(%ebp),%eax
0821a7e1 +0x3cf:  mov    %eax,(%esp)
0821a7e4 +0x3d2:  call   08110c54 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x166>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x166
0821a7e9 +0x3d7:  mov    %eax,%ebx
0821a7eb +0x3d9:  mov    -0x20(%ebp),%eax
0821a7ee +0x3dc:  mov    %eax,(%esp)
0821a7f1 +0x3df:  call   08110c54 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x166>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x166
0821a7f6 +0x3e4:  cmp    %eax,%ebx
0821a7f8 +0x3e6:  jne    0821a813 <+0x401>
0821a7fa +0x3e8:  mov    -0x18(%ebp),%eax
0821a7fd +0x3eb:  mov    (%eax),%eax
0821a7ff +0x3ed:  add    $0x10,%eax
0821a802 +0x3f0:  mov    (%eax),%edx
0821a804 +0x3f2:  mov    -0x18(%ebp),%eax
0821a807 +0x3f5:  mov    %eax,(%esp)
0821a80a +0x3f8:  call   *%edx
0821a80c +0x3fa:  xor    $0x1,%eax
0821a80f +0x3fd:  test   %al,%al
0821a811 +0x3ff:  je     0821a81a <+0x408>
0821a813 +0x401:  mov    $0x1,%eax
0821a818 +0x406:  jmp    0821a81f <+0x40d>
0821a81a +0x408:  mov    $0x0,%eax
0821a81f +0x40d:  test   %al,%al
0821a821 +0x40f:  je     0821a848 <+0x436>
0821a823 +0x411:  movl   $0x11,0x8(%esp)
0821a82b +0x419:  movl   $0xd1,0x4(%esp)
0821a833 +0x421:  mov    0xc(%ebp),%eax
0821a836 +0x424:  mov    %eax,(%esp)
0821a839 +0x427:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0821a83e +0x42c:  mov    $0x0,%ebx
0821a843 +0x431:  jmp    0821abd4 <+0x7c2>
0821a848 +0x436:  mov    -0x18(%ebp),%eax
0821a84b +0x439:  mov    %eax,-0x14(%ebp)
0821a84e +0x43c:  movl   $0x8,0x4(%esp)
0821a856 +0x444:  mov    -0x14(%ebp),%eax
0821a859 +0x447:  mov    %eax,(%esp)
0821a85c +0x44a:  call   085108c6 <_ZNK10CEquipItem11check_eTypeEc>  ; CEquipItem::check_eType(char) const
0821a861 +0x44f:  test   %al,%al
0821a863 +0x451:  je     0821a88a <+0x478>
0821a865 +0x453:  movl   $0x11,0x8(%esp)
0821a86d +0x45b:  movl   $0xd1,0x4(%esp)
0821a875 +0x463:  mov    0xc(%ebp),%eax
0821a878 +0x466:  mov    %eax,(%esp)
0821a87b +0x469:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0821a880 +0x46e:  mov    $0x0,%ebx
0821a885 +0x473:  jmp    0821abd4 <+0x7c2>
0821a88a +0x478:  mov    -0x1c(%ebp),%eax
0821a88d +0x47b:  add    $0x3a0,%eax
0821a892 +0x480:  mov    %eax,(%esp)
0821a895 +0x483:  call   0811c960 <_GLOBAL__I_events+0x1003>  ; global constructors keyed to events+0x1003
0821a89a +0x488:  test   %al,%al
0821a89c +0x48a:  je     0821a8c3 <+0x4b1>
0821a89e +0x48c:  movl   $0x16,0x8(%esp)
0821a8a6 +0x494:  movl   $0xd1,0x4(%esp)
0821a8ae +0x49c:  mov    0xc(%ebp),%eax
0821a8b1 +0x49f:  mov    %eax,(%esp)
0821a8b4 +0x4a2:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0821a8b9 +0x4a7:  mov    $0x0,%ebx
0821a8be +0x4ac:  jmp    0821abd4 <+0x7c2>
0821a8c3 +0x4b1:  mov    -0x1c(%ebp),%eax
0821a8c6 +0x4b4:  add    $0x3a0,%eax
0821a8cb +0x4b9:  movl   $0x0,0x4(%esp)
0821a8d3 +0x4c1:  mov    %eax,(%esp)
0821a8d6 +0x4c4:  call   080ea574 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x1ad>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x1ad
0821a8db +0x4c9:  mov    (%eax),%eax
0821a8dd +0x4cb:  mov    %eax,-0x10(%ebp)
0821a8e0 +0x4ce:  movb   $0x0,-0x9(%ebp)
0821a8e4 +0x4d2:  cmpl   $0x0,-0x10(%ebp)
0821a8e8 +0x4d6:  jne    0821a90a <+0x4f8>
0821a8ea +0x4d8:  mov    -0x14(%ebp),%eax
0821a8ed +0x4db:  mov    (%eax),%eax
0821a8ef +0x4dd:  add    $0x18,%eax
0821a8f2 +0x4e0:  mov    (%eax),%edx
0821a8f4 +0x4e2:  mov    -0x14(%ebp),%eax
0821a8f7 +0x4e5:  mov    %eax,(%esp)
0821a8fa +0x4e8:  call   *%edx
0821a8fc +0x4ea:  xor    $0x1,%eax
0821a8ff +0x4ed:  test   %al,%al
0821a901 +0x4ef:  je     0821a90a <+0x4f8>
0821a903 +0x4f1:  mov    $0x1,%eax
0821a908 +0x4f6:  jmp    0821a90f <+0x4fd>
0821a90a +0x4f8:  mov    $0x0,%eax
0821a90f +0x4fd:  test   %al,%al
0821a911 +0x4ff:  je     0821a919 <+0x507>
0821a913 +0x501:  movb   $0x1,-0x9(%ebp)
0821a917 +0x505:  jmp    0821a955 <+0x543>
0821a919 +0x507:  cmpl   $0x1,-0x10(%ebp)
0821a91d +0x50b:  jne    0821a93c <+0x52a>
0821a91f +0x50d:  mov    -0x14(%ebp),%eax
0821a922 +0x510:  mov    (%eax),%eax
0821a924 +0x512:  add    $0x18,%eax
0821a927 +0x515:  mov    (%eax),%edx
0821a929 +0x517:  mov    -0x14(%ebp),%eax
0821a92c +0x51a:  mov    %eax,(%esp)
0821a92f +0x51d:  call   *%edx
0821a931 +0x51f:  test   %al,%al
0821a933 +0x521:  je     0821a93c <+0x52a>
0821a935 +0x523:  mov    $0x1,%eax
0821a93a +0x528:  jmp    0821a941 <+0x52f>
0821a93c +0x52a:  mov    $0x0,%eax
0821a941 +0x52f:  test   %al,%al
0821a943 +0x531:  je     0821a94b <+0x539>
0821a945 +0x533:  movb   $0x1,-0x9(%ebp)
0821a949 +0x537:  jmp    0821a955 <+0x543>
0821a94b +0x539:  cmpl   $0x2,-0x10(%ebp)
0821a94f +0x53d:  jne    0821a955 <+0x543>
0821a951 +0x53f:  movb   $0x1,-0x9(%ebp)
0821a955 +0x543:  movzbl -0x9(%ebp),%eax
0821a959 +0x547:  xor    $0x1,%eax
0821a95c +0x54a:  test   %al,%al
0821a95e +0x54c:  je     0821a985 <+0x573>
0821a960 +0x54e:  movl   $0x11,0x8(%esp)
0821a968 +0x556:  movl   $0xd1,0x4(%esp)
0821a970 +0x55e:  mov    0xc(%ebp),%eax
0821a973 +0x561:  mov    %eax,(%esp)
0821a976 +0x564:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0821a97b +0x569:  mov    $0x0,%ebx
0821a980 +0x56e:  jmp    0821abd4 <+0x7c2>
0821a985 +0x573:  mov    -0x24(%ebp),%eax
0821a988 +0x576:  mov    %eax,(%esp)
0821a98b +0x579:  call   08110c6c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x17e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x17e
0821a990 +0x57e:  mov    -0x9e(%ebp),%eax
0821a996 +0x584:  mov    %eax,(%esp)
0821a999 +0x587:  call   0822d20d <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x28b7>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x28b7
0821a99e +0x58c:  test   %al,%al
0821a9a0 +0x58e:  je     0821a9c7 <+0x5b5>
0821a9a2 +0x590:  movl   $0x11,0x8(%esp)
0821a9aa +0x598:  movl   $0xd1,0x4(%esp)
0821a9b2 +0x5a0:  mov    0xc(%ebp),%eax
0821a9b5 +0x5a3:  mov    %eax,(%esp)
0821a9b8 +0x5a6:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0821a9bd +0x5ab:  mov    $0x0,%ebx
0821a9c2 +0x5b0:  jmp    0821abd4 <+0x7c2>
0821a9c7 +0x5b5:  mov    -0x9e(%ebp),%ebx
0821a9cd +0x5bb:  mov    -0x24(%ebp),%eax
0821a9d0 +0x5be:  mov    %eax,(%esp)
0821a9d3 +0x5c1:  call   08110c6c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x17e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x17e
0821a9d8 +0x5c6:  mov    %ebx,0x4(%esp)
0821a9dc +0x5ca:  mov    %eax,(%esp)
0821a9df +0x5cd:  call   082f9228 <_ZN8WongWork14CAvatarItemMgr14isSocketAvatarEi>  ; WongWork::CAvatarItemMgr::isSocketAvatar(int)
0821a9e4 +0x5d2:  test   %al,%al
0821a9e6 +0x5d4:  je     0821aa0d <+0x5fb>
0821a9e8 +0x5d6:  movl   $0x13,0x8(%esp)
0821a9f0 +0x5de:  movl   $0xd1,0x4(%esp)
0821a9f8 +0x5e6:  mov    0xc(%ebp),%eax
0821a9fb +0x5e9:  mov    %eax,(%esp)
0821a9fe +0x5ec:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0821aa03 +0x5f1:  mov    $0x0,%ebx
0821aa08 +0x5f6:  jmp    0821abd4 <+0x7c2>
0821aa0d +0x5fb:  lea    -0x5b(%ebp),%eax
0821aa10 +0x5fe:  mov    %eax,(%esp)
0821aa13 +0x601:  call   081506e8 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1d>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1d
0821aa18 +0x606:  cmpl   $0x0,-0x18(%ebp)
0821aa1c +0x60a:  je     0821aa3b <+0x629>
0821aa1e +0x60c:  mov    -0x18(%ebp),%eax
0821aa21 +0x60f:  mov    (%eax),%eax
0821aa23 +0x611:  add    $0x10,%eax
0821aa26 +0x614:  mov    (%eax),%edx
0821aa28 +0x616:  mov    -0x18(%ebp),%eax
0821aa2b +0x619:  mov    %eax,(%esp)
0821aa2e +0x61c:  call   *%edx
0821aa30 +0x61e:  test   %al,%al
0821aa32 +0x620:  je     0821aa3b <+0x629>
0821aa34 +0x622:  mov    $0x1,%eax
0821aa39 +0x627:  jmp    0821aa40 <+0x62e>
0821aa3b +0x629:  mov    $0x0,%eax
0821aa40 +0x62e:  test   %al,%al
0821aa42 +0x630:  je     0821aa5e <+0x64c>
0821aa44 +0x632:  mov    -0x18(%ebp),%eax
0821aa47 +0x635:  lea    -0x5b(%ebp),%edx
0821aa4a +0x638:  mov    %edx,0x8(%esp)
0821aa4e +0x63c:  movl   $0xffffffff,0x4(%esp)
0821aa56 +0x644:  mov    %eax,(%esp)
0821aa59 +0x647:  call   08150f36 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x86b>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x86b
0821aa5e +0x64c:  mov    -0x9e(%ebp),%ebx
0821aa64 +0x652:  mov    -0x24(%ebp),%eax
0821aa67 +0x655:  mov    %eax,(%esp)
0821aa6a +0x658:  call   08110c6c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x17e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x17e
0821aa6f +0x65d:  lea    -0x5b(%ebp),%edx
0821aa72 +0x660:  mov    %edx,0x8(%esp)
0821aa76 +0x664:  mov    %ebx,0x4(%esp)
0821aa7a +0x668:  mov    %eax,(%esp)
0821aa7d +0x66b:  call   082f91ce <_ZN8WongWork14CAvatarItemMgr19setEmblemSocketDataEiRK20stAvatarEmblemInfo_t>  ; WongWork::CAvatarItemMgr::setEmblemSocketData(int, stAvatarEmblemInfo_t const&)
0821aa82 +0x670:  movzwl -0x2a(%ebp),%eax
0821aa86 +0x674:  movzwl %ax,%ebx
0821aa89 +0x677:  mov    0xc(%ebp),%eax
0821aa8c +0x67a:  mov    %eax,(%esp)
0821aa8f +0x67d:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0821aa94 +0x682:  movl   $0x1,0x14(%esp)
0821aa9c +0x68a:  movl   $0x1b,0x10(%esp)
0821aaa4 +0x692:  movl   $0x1,0xc(%esp)
0821aaac +0x69a:  mov    %ebx,0x8(%esp)
0821aab0 +0x69e:  movl   $0x1,0x4(%esp)
0821aab8 +0x6a6:  mov    %eax,(%esp)
0821aabb +0x6a9:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
0821aac0 +0x6ae:  xor    $0x1,%eax
0821aac3 +0x6b1:  test   %al,%al
0821aac5 +0x6b3:  je     0821aad1 <+0x6bf>
0821aac7 +0x6b5:  mov    $0x11,%ebx
0821aacc +0x6ba:  jmp    0821abd4 <+0x7c2>
0821aad1 +0x6bf:  mov    -0x9e(%ebp),%eax
0821aad7 +0x6c5:  mov    %eax,%ebx
0821aad9 +0x6c7:  mov    0xc(%ebp),%eax
0821aadc +0x6ca:  mov    %eax,(%esp)
0821aadf +0x6cd:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0821aae4 +0x6d2:  lea    -0x5b(%ebp),%edx
0821aae7 +0x6d5:  mov    %edx,0x8(%esp)
0821aaeb +0x6d9:  mov    %ebx,0x4(%esp)
0821aaef +0x6dd:  mov    %eax,(%esp)
0821aaf2 +0x6e0:  call   0843081c <_ZN24DB_UpdateAvatarJewelSlot11makeRequestEjjPK20stAvatarEmblemInfo_t>  ; DB_UpdateAvatarJewelSlot::makeRequest(unsigned int, unsigned int, stAvatarEmblemInfo_t const*)
0821aaf7 +0x6e5:  movzwl -0x30(%ebp),%eax
0821aafb +0x6e9:  movzwl %ax,%eax
0821aafe +0x6ec:  mov    %eax,0xc(%esp)
0821ab02 +0x6f0:  movl   $0x1,0x8(%esp)
0821ab0a +0x6f8:  movl   $0x1,0x4(%esp)
0821ab12 +0x700:  mov    0xc(%ebp),%eax
0821ab15 +0x703:  mov    %eax,(%esp)
0821ab18 +0x706:  call   0867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItemList(CUser::eSendTarget, ENUM_ITEMSPACE, int)
0821ab1d +0x70b:  lea    -0x68(%ebp),%eax
0821ab20 +0x70e:  mov    %eax,(%esp)
0821ab23 +0x711:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0821ab28 +0x716:  movl   $0xd1,0x8(%esp)
0821ab30 +0x71e:  movl   $0x1,0x4(%esp)
0821ab38 +0x726:  lea    -0x68(%ebp),%eax
0821ab3b +0x729:  mov    %eax,(%esp)
0821ab3e +0x72c:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0821ab43 +0x731:  movl   $0x1,0x4(%esp)
0821ab4b +0x739:  lea    -0x68(%ebp),%eax
0821ab4e +0x73c:  mov    %eax,(%esp)
0821ab51 +0x73f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0821ab56 +0x744:  movzwl -0x30(%ebp),%eax
0821ab5a +0x748:  movzwl %ax,%eax
0821ab5d +0x74b:  mov    %eax,0x4(%esp)
0821ab61 +0x74f:  lea    -0x68(%ebp),%eax
0821ab64 +0x752:  mov    %eax,(%esp)
0821ab67 +0x755:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0821ab6c +0x75a:  movzwl -0x2a(%ebp),%eax
0821ab70 +0x75e:  movzwl %ax,%eax
0821ab73 +0x761:  mov    %eax,0x4(%esp)
0821ab77 +0x765:  lea    -0x68(%ebp),%eax
0821ab7a +0x768:  mov    %eax,(%esp)
0821ab7d +0x76b:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0821ab82 +0x770:  movl   $0x1,0x4(%esp)
0821ab8a +0x778:  lea    -0x68(%ebp),%eax
0821ab8d +0x77b:  mov    %eax,(%esp)
0821ab90 +0x77e:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0821ab95 +0x783:  lea    -0x68(%ebp),%eax
0821ab98 +0x786:  mov    %eax,0x4(%esp)
0821ab9c +0x78a:  mov    0xc(%ebp),%eax
0821ab9f +0x78d:  mov    %eax,(%esp)
0821aba2 +0x790:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0821aba7 +0x795:  mov    $0x0,%ebx
0821abac +0x79a:  lea    -0x68(%ebp),%eax
0821abaf +0x79d:  mov    %eax,(%esp)
0821abb2 +0x7a0:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0821abb7 +0x7a5:  jmp    0821abd4 <+0x7c2>
0821abb9 +0x7a7:  mov    %edx,%ebx
0821abbb +0x7a9:  mov    %eax,%esi
0821abbd +0x7ab:  lea    -0x68(%ebp),%eax
0821abc0 +0x7ae:  mov    %eax,(%esp)
0821abc3 +0x7b1:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0821abc8 +0x7b6:  mov    %esi,%eax
0821abca +0x7b8:  mov    %ebx,%edx
0821abcc +0x7ba:  mov    %eax,(%esp)
0821abcf +0x7bd:  call   08ae3750 <_Unwind_Resume>
0821abd4 +0x7c2:  mov    %ebx,%eax
0821abd6 +0x7c4:  lea    -0x8(%ebp),%esp
0821abd9 +0x7c7:  add    $0x0,%esp
0821abdc +0x7ca:  pop    %ebx
0821abdd +0x7cb:  pop    %esi
0821abde +0x7cc:  pop    %ebp
0821abdf +0x7cd:  ret
```

## 反编译 C

```c
// Dispatcher_AddSocketToAvatar::dispatch_sig @ 0x821a412

/* Dispatcher_AddSocketToAvatar::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_AddSocketToAvatar::dispatch_sig
          (Dispatcher_AddSocketToAvatar *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  ushort uVar2;
  char cVar3;
  undefined4 uVar4;
  CDataManager *pCVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  CAvatarItemMgr *pCVar9;
  CInventory *pCVar10;
  uint uVar11;
  undefined1 local_12c [8];
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined1 local_f0;
  undefined2 local_e6;
  undefined2 uStack_e4;
  undefined2 local_e2;
  undefined2 uStack_e0;
  undefined4 local_de;
  undefined4 local_da;
  undefined4 local_d6;
  undefined4 local_d2;
  undefined4 local_ce;
  undefined4 local_ca;
  undefined4 local_c6;
  undefined4 local_c2;
  undefined4 local_be;
  undefined4 local_ba;
  undefined4 local_b6;
  undefined4 local_b2;
  undefined4 local_ae;
  undefined1 local_aa;
  Inven_Item local_a9 [2];
  ulong local_a7;
  uint local_a2;
  PacketGuard local_6c [13];
  stAvatarEmblemInfo_t local_5f [30];
  MSG_ADD_SOCKET_TO_AVATAR local_41 [13];
  ushort local_34;
  ulong local_32;
  ushort local_2e [3];
  CInventory *local_28;
  CItem *local_24;
  CStackableItem *local_20;
  CItem *local_1c;
  CEquipItem *local_18;
  int local_14;
  char local_d;
  
  MSG_ADD_SOCKET_TO_AVATAR::MSG_ADD_SOCKET_TO_AVATAR(local_41);
  local_2e[1] = 0;
  local_2e[2] = 0;
  cVar3 = PacketBuf::get_short(param_2,&local_34);
  if (cVar3 != '\x01') {
    uVar4 = LineFunc(0xcd60,
                     "virtual int Dispatcher_AddSocketToAvatar::dispatch_sig(CUser*, PacketBuf&)",0,
                     0);
    return uVar4;
  }
  cVar3 = PacketBuf::get_int(param_2,&local_32);
  if (cVar3 != '\x01') {
    uVar4 = LineFunc(0xcd62,
                     "virtual int Dispatcher_AddSocketToAvatar::dispatch_sig(CUser*, PacketBuf&)",0,
                     0);
    return uVar4;
  }
  cVar3 = PacketBuf::get_short(param_2,local_2e);
  if (cVar3 != '\x01') {
    uVar4 = LineFunc(0xcd64,
                     "virtual int Dispatcher_AddSocketToAvatar::dispatch_sig(CUser*, PacketBuf&)",0,
                     0);
    return uVar4;
  }
  local_28 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
  uVar11 = (uint)local_34;
  CInventory::GetInvenSlot((int)local_a9,(int)local_28);
  cVar3 = Inven_Item::isEmpty(local_a9);
  if (cVar3 != '\0') {
    CUser::SendCmdErrorPacket(param_1,0xd1,4,uVar11);
    return 0;
  }
  if (local_a7 != local_32) {
    CUser::SendCmdErrorPacket(param_1,0xd1,4,uVar11);
    return 0;
  }
  Inven_Item::Inven_Item((Inven_Item *)&local_e6);
  uVar11 = (uint)local_2e[0];
  CInventory::GetInvenSlot((int)local_12c,(int)local_28);
  local_e6 = (undefined2)local_12c._0_4_;
  uStack_e4 = SUB42(local_12c._0_4_,2);
  local_e2 = (undefined2)local_12c._4_4_;
  uStack_e0 = SUB42(local_12c._4_4_,2);
  local_de = local_124;
  local_da = local_120;
  local_d6 = local_11c;
  local_d2 = local_118;
  local_ce = local_114;
  local_ca = local_110;
  local_c6 = local_10c;
  local_c2 = local_108;
  local_be = local_104;
  local_ba = local_100;
  local_b6 = local_fc;
  local_b2 = local_f8;
  local_ae = local_f4;
  local_aa = local_f0;
  cVar3 = Inven_Item::isEmpty((Inven_Item *)&local_e6);
  if (cVar3 != '\0') {
    CUser::SendCmdErrorPacket(param_1,0xd1,0x16,uVar11);
    return 0;
  }
  iVar6 = CONCAT22(local_e2,uStack_e4);
  pCVar5 = (CDataManager *)G_CDataManager();
  local_24 = (CItem *)CDataManager::find_item(pCVar5,iVar6);
  if ((local_24 == (CItem *)0x0) || (cVar3 = CItem::is_stackable(local_24), cVar3 != '\x01')) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    CUser::SendCmdErrorPacket(param_1,0xd1,0x11);
    return 0;
  }
  local_20 = (CStackableItem *)local_24;
  cVar3 = CStackableItem::verifyStackableAction((CStackableItem *)local_24,0x20);
  if (cVar3 != '\x01') {
    CUser::SendCmdErrorPacket(param_1,0xd1,4);
    return 0;
  }
  cVar3 = Inven_Item::isAvatarItemType(local_a9);
  if (cVar3 != '\x01') {
    CUser::SendCmdErrorPacket(param_1,0xd1,0x11);
    return 0;
  }
  pCVar5 = (CDataManager *)G_CDataManager();
  local_1c = (CItem *)CDataManager::find_item(pCVar5,local_32);
  if (local_1c != (CItem *)0x0) {
    iVar6 = CItem::get_grade(local_1c);
    iVar7 = CItem::get_grade(local_24);
    if ((iVar6 == iVar7) &&
       (cVar3 = (**(code **)(*(int *)local_1c + 0x10))(local_1c), cVar3 == '\x01')) {
      bVar1 = false;
      goto LAB_0821a81f;
    }
  }
  bVar1 = true;
LAB_0821a81f:
  if (bVar1) {
    CUser::SendCmdErrorPacket(param_1,0xd1,0x11);
    return 0;
  }
  local_18 = (CEquipItem *)local_1c;
  cVar3 = CEquipItem::check_eType((CEquipItem *)local_1c,'\b');
  if (cVar3 != '\0') {
    CUser::SendCmdErrorPacket(param_1,0xd1,0x11);
    return 0;
  }
  cVar3 = std::vector<int,std::allocator<int>>::empty();
  if (cVar3 != '\0') {
    CUser::SendCmdErrorPacket(param_1,0xd1,0x16);
    return 0;
  }
  piVar8 = (int *)std::vector<int,std::allocator<int>>::operator[]
                            ((vector<int,std::allocator<int>> *)(local_20 + 0x3a0),0);
  local_14 = *piVar8;
  local_d = '\0';
  if ((local_14 == 0) && (cVar3 = (**(code **)(*(int *)local_18 + 0x18))(local_18), cVar3 != '\x01')
     ) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    local_d = '\x01';
  }
  else {
    if ((local_14 == 1) && (cVar3 = (**(code **)(*(int *)local_18 + 0x18))(local_18), cVar3 != '\0')
       ) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      local_d = '\x01';
    }
    else if (local_14 == 2) {
      local_d = '\x01';
    }
  }
  if (local_d == '\x01') {
    CInventory::GetAvatarItemMgrW(local_28);
    cVar3 = WongWork::CAvatarItemMgr::IsTempKey(local_a2);
    uVar11 = local_a2;
    if (cVar3 != '\0') {
      CUser::SendCmdErrorPacket(param_1,0xd1,0x11);
      return 0;
    }
    pCVar9 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrW(local_28);
    cVar3 = WongWork::CAvatarItemMgr::isSocketAvatar(pCVar9,uVar11);
    if (cVar3 == '\0') {
      stAvatarEmblemInfo_t::init(local_5f);
      if ((local_1c == (CItem *)0x0) ||
         (cVar3 = (**(code **)(*(int *)local_1c + 0x10))(local_1c), cVar3 == '\0')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        CEquipItem::getAvatarSocket((CEquipItem *)local_1c,-1,local_5f);
      }
      uVar11 = local_a2;
      pCVar9 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrW(local_28);
      WongWork::CAvatarItemMgr::setEmblemSocketData(pCVar9,uVar11,local_5f);
      uVar2 = local_2e[0];
      pCVar10 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      cVar3 = CInventory::delete_item(pCVar10,1,uVar2,1,0x1b,1);
      if (cVar3 == '\x01') {
        uVar11 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
        DB_UpdateAvatarJewelSlot::makeRequest(uVar11,local_a2,local_5f);
        CUser::SendUpdateItemList(param_1,1,1,local_34);
        PacketGuard::PacketGuard(local_6c);
                    /* try { // try from 0821ab3e to 0821aba6 has its CatchHandler @ 0821abb9 */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_6c,1,0xd1);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_6c,1);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_6c,(uint)local_34);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_6c,(uint)local_2e[0]);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_6c,true);
        CUser::Send(param_1,local_6c);
        uVar4 = 0;
        PacketGuard::~PacketGuard(local_6c);
      }
      else {
        uVar4 = 0x11;
      }
      return uVar4;
    }
    CUser::SendCmdErrorPacket(param_1,0xd1,0x13);
    return 0;
  }
  CUser::SendCmdErrorPacket(param_1,0xd1,0x11);
  return 0;
}
```
