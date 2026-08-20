# dispatch_sig

`_ZN27Dispatcher_UpgradeChronicle12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_UpgradeChronicle::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_UpgradeChronicle` | `0x08223330` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08223330  _ZN27Dispatcher_UpgradeChronicle12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_UpgradeChronicle::dispatch_sig(CUser*, PacketBuf&)
# range [0x08223330, 0x08223bb5]
08223330 +0x000:  push   %ebp
08223331 +0x001:  mov    %esp,%ebp
08223333 +0x003:  push   %edi
08223334 +0x004:  push   %esi
08223335 +0x005:  push   %ebx
08223336 +0x006:  sub    $0x17c,%esp
0822333c +0x00c:  mov    0xc(%ebp),%eax
0822333f +0x00f:  mov    %eax,(%esp)
08223342 +0x012:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08223347 +0x017:  cmp    $0x2,%eax
0822334a +0x01a:  setle  %al
0822334d +0x01d:  test   %al,%al
0822334f +0x01f:  je     0822335b <+0x2b>
08223351 +0x021:  mov    $0x0,%ebx
08223356 +0x026:  jmp    08223ba8 <+0x878>
0822335b +0x02b:  movw   $0x0,-0x4e(%ebp)
08223361 +0x031:  movl   $0x0,-0x54(%ebp)
08223368 +0x038:  movw   $0x0,-0x56(%ebp)
0822336e +0x03e:  movl   $0x0,-0x5c(%ebp)
08223375 +0x045:  movb   $0x0,-0x5d(%ebp)
08223379 +0x049:  lea    -0x4e(%ebp),%eax
0822337c +0x04c:  mov    %eax,0x4(%esp)
08223380 +0x050:  mov    0x10(%ebp),%eax
08223383 +0x053:  mov    %eax,(%esp)
08223386 +0x056:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
0822338b +0x05b:  xor    $0x1,%eax
0822338e +0x05e:  test   %al,%al
08223390 +0x060:  je     082233bd <+0x8d>
08223392 +0x062:  movl   $0x0,0xc(%esp)
0822339a +0x06a:  movl   $0x0,0x8(%esp)
082233a2 +0x072:  movl   $&_ZZN27Dispatcher_UpgradeChronicle12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082233aa +0x07a:  movl   $0xdda4,(%esp)
082233b1 +0x081:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082233b6 +0x086:  mov    %eax,%ebx
082233b8 +0x088:  jmp    08223ba8 <+0x878>
082233bd +0x08d:  lea    -0x54(%ebp),%eax
082233c0 +0x090:  mov    %eax,0x4(%esp)
082233c4 +0x094:  mov    0x10(%ebp),%eax
082233c7 +0x097:  mov    %eax,(%esp)
082233ca +0x09a:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
082233cf +0x09f:  xor    $0x1,%eax
082233d2 +0x0a2:  test   %al,%al
082233d4 +0x0a4:  je     08223401 <+0xd1>
082233d6 +0x0a6:  movl   $0x0,0xc(%esp)
082233de +0x0ae:  movl   $0x0,0x8(%esp)
082233e6 +0x0b6:  movl   $&_ZZN27Dispatcher_UpgradeChronicle12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082233ee +0x0be:  movl   $0xdda5,(%esp)
082233f5 +0x0c5:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082233fa +0x0ca:  mov    %eax,%ebx
082233fc +0x0cc:  jmp    08223ba8 <+0x878>
08223401 +0x0d1:  lea    -0x56(%ebp),%eax
08223404 +0x0d4:  mov    %eax,0x4(%esp)
08223408 +0x0d8:  mov    0x10(%ebp),%eax
0822340b +0x0db:  mov    %eax,(%esp)
0822340e +0x0de:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
08223413 +0x0e3:  xor    $0x1,%eax
08223416 +0x0e6:  test   %al,%al
08223418 +0x0e8:  je     08223445 <+0x115>
0822341a +0x0ea:  movl   $0x0,0xc(%esp)
08223422 +0x0f2:  movl   $0x0,0x8(%esp)
0822342a +0x0fa:  movl   $&_ZZN27Dispatcher_UpgradeChronicle12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08223432 +0x102:  movl   $0xdda6,(%esp)
08223439 +0x109:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0822343e +0x10e:  mov    %eax,%ebx
08223440 +0x110:  jmp    08223ba8 <+0x878>
08223445 +0x115:  lea    -0x5c(%ebp),%eax
08223448 +0x118:  mov    %eax,0x4(%esp)
0822344c +0x11c:  mov    0x10(%ebp),%eax
0822344f +0x11f:  mov    %eax,(%esp)
08223452 +0x122:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
08223457 +0x127:  xor    $0x1,%eax
0822345a +0x12a:  test   %al,%al
0822345c +0x12c:  je     08223489 <+0x159>
0822345e +0x12e:  movl   $0x0,0xc(%esp)
08223466 +0x136:  movl   $0x0,0x8(%esp)
0822346e +0x13e:  movl   $&_ZZN27Dispatcher_UpgradeChronicle12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08223476 +0x146:  movl   $0xdda7,(%esp)
0822347d +0x14d:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08223482 +0x152:  mov    %eax,%ebx
08223484 +0x154:  jmp    08223ba8 <+0x878>
08223489 +0x159:  lea    -0x5d(%ebp),%eax
0822348c +0x15c:  mov    %eax,0x4(%esp)
08223490 +0x160:  mov    0x10(%ebp),%eax
08223493 +0x163:  mov    %eax,(%esp)
08223496 +0x166:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
0822349b +0x16b:  xor    $0x1,%eax
0822349e +0x16e:  test   %al,%al
082234a0 +0x170:  je     082234cd <+0x19d>
082234a2 +0x172:  movl   $0x0,0xc(%esp)
082234aa +0x17a:  movl   $0x0,0x8(%esp)
082234b2 +0x182:  movl   $&_ZZN27Dispatcher_UpgradeChronicle12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082234ba +0x18a:  movl   $0xdda8,(%esp)
082234c1 +0x191:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082234c6 +0x196:  mov    %eax,%ebx
082234c8 +0x198:  jmp    08223ba8 <+0x878>
082234cd +0x19d:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%eax
082234d2 +0x1a2:  movl   $0x1a,0x8(%esp)
082234da +0x1aa:  mov    0xc(%ebp),%edx
082234dd +0x1ad:  mov    %edx,0x4(%esp)
082234e1 +0x1b1:  mov    %eax,(%esp)
082234e4 +0x1b4:  call   08288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>  ; CSecu_ProtectionField::Check(CUser*, SECURITY_PROTCTION)
082234e9 +0x1b9:  mov    %eax,-0x38(%ebp)
082234ec +0x1bc:  cmpl   $0x0,-0x38(%ebp)
082234f0 +0x1c0:  je     08223519 <+0x1e9>
082234f2 +0x1c2:  mov    -0x38(%ebp),%eax
082234f5 +0x1c5:  movzbl %al,%eax
082234f8 +0x1c8:  mov    %eax,0x8(%esp)
082234fc +0x1cc:  movl   $0x112,0x4(%esp)
08223504 +0x1d4:  mov    0xc(%ebp),%eax
08223507 +0x1d7:  mov    %eax,(%esp)
0822350a +0x1da:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0822350f +0x1df:  mov    $0x0,%ebx
08223514 +0x1e4:  jmp    08223ba8 <+0x878>
08223519 +0x1e9:  movzwl -0x56(%ebp),%eax
0822351d +0x1ed:  cwtl
0822351e +0x1ee:  mov    %eax,0x8(%esp)
08223522 +0x1f2:  movl   $0x1,0x4(%esp)
0822352a +0x1fa:  mov    0xc(%ebp),%eax
0822352d +0x1fd:  mov    %eax,(%esp)
08223530 +0x200:  call   08646942 <_ZNK5CUser13CheckItemLockEii>  ; CUser::CheckItemLock(int, int) const
08223535 +0x205:  test   %al,%al
08223537 +0x207:  je     0822355e <+0x22e>
08223539 +0x209:  movl   $0xd5,0x8(%esp)
08223541 +0x211:  movl   $0x112,0x4(%esp)
08223549 +0x219:  mov    0xc(%ebp),%eax
0822354c +0x21c:  mov    %eax,(%esp)
0822354f +0x21f:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08223554 +0x224:  mov    $0x0,%ebx
08223559 +0x229:  jmp    08223ba8 <+0x878>
0822355e +0x22e:  mov    0xc(%ebp),%eax
08223561 +0x231:  mov    %eax,(%esp)
08223564 +0x234:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08223569 +0x239:  mov    %eax,-0x34(%ebp)
0822356c +0x23c:  movzwl -0x4e(%ebp),%eax
08223570 +0x240:  movswl %ax,%edx
08223573 +0x243:  lea    -0xc1(%ebp),%eax
08223579 +0x249:  mov    %edx,0xc(%esp)
0822357d +0x24d:  movl   $0x1,0x8(%esp)
08223585 +0x255:  mov    -0x34(%ebp),%edx
08223588 +0x258:  mov    %edx,0x4(%esp)
0822358c +0x25c:  mov    %eax,(%esp)
0822358f +0x25f:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
08223594 +0x264:  sub    $0x4,%esp
08223597 +0x267:  movzwl -0x56(%ebp),%eax
0822359b +0x26b:  movswl %ax,%edx
0822359e +0x26e:  lea    -0xfe(%ebp),%eax
082235a4 +0x274:  mov    %edx,0xc(%esp)
082235a8 +0x278:  movl   $0x1,0x8(%esp)
082235b0 +0x280:  mov    -0x34(%ebp),%edx
082235b3 +0x283:  mov    %edx,0x4(%esp)
082235b7 +0x287:  mov    %eax,(%esp)
082235ba +0x28a:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
082235bf +0x28f:  sub    $0x4,%esp
082235c2 +0x292:  mov    -0xbf(%ebp),%eax
082235c8 +0x298:  mov    %eax,%ebx
082235ca +0x29a:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
082235cf +0x29f:  mov    %ebx,0x4(%esp)
082235d3 +0x2a3:  mov    %eax,(%esp)
082235d6 +0x2a6:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
082235db +0x2ab:  mov    %eax,-0x30(%ebp)
082235de +0x2ae:  mov    -0xfc(%ebp),%eax
082235e4 +0x2b4:  mov    %eax,%ebx
082235e6 +0x2b6:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
082235eb +0x2bb:  mov    %ebx,0x4(%esp)
082235ef +0x2bf:  mov    %eax,(%esp)
082235f2 +0x2c2:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
082235f7 +0x2c7:  mov    %eax,-0x2c(%ebp)
082235fa +0x2ca:  cmpl   $0x0,-0x30(%ebp)
082235fe +0x2ce:  je     08223606 <+0x2d6>
08223600 +0x2d0:  cmpl   $0x0,-0x2c(%ebp)
08223604 +0x2d4:  jne    0822362b <+0x2fb>
08223606 +0x2d6:  movl   $0x1,0x8(%esp)
0822360e +0x2de:  movl   $0x112,0x4(%esp)
08223616 +0x2e6:  mov    0xc(%ebp),%eax
08223619 +0x2e9:  mov    %eax,(%esp)
0822361c +0x2ec:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08223621 +0x2f1:  mov    $0x0,%ebx
08223626 +0x2f6:  jmp    08223ba8 <+0x878>
0822362b +0x2fb:  mov    -0xbf(%ebp),%eax
08223631 +0x301:  test   %eax,%eax
08223633 +0x303:  je     0822363f <+0x30f>
08223635 +0x305:  mov    -0xfc(%ebp),%eax
0822363b +0x30b:  test   %eax,%eax
0822363d +0x30d:  jne    08223664 <+0x334>
0822363f +0x30f:  movl   $0x4,0x8(%esp)
08223647 +0x317:  movl   $0x112,0x4(%esp)
0822364f +0x31f:  mov    0xc(%ebp),%eax
08223652 +0x322:  mov    %eax,(%esp)
08223655 +0x325:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0822365a +0x32a:  mov    $0x0,%ebx
0822365f +0x32f:  jmp    08223ba8 <+0x878>
08223664 +0x334:  mov    -0xbf(%ebp),%edx
0822366a +0x33a:  mov    -0x54(%ebp),%eax
0822366d +0x33d:  cmp    %eax,%edx
0822366f +0x33f:  jne    0822367e <+0x34e>
08223671 +0x341:  mov    -0xfc(%ebp),%edx
08223677 +0x347:  mov    -0x5c(%ebp),%eax
0822367a +0x34a:  cmp    %eax,%edx
0822367c +0x34c:  je     082236a3 <+0x373>
0822367e +0x34e:  movl   $0x1,0x8(%esp)
08223686 +0x356:  movl   $0x112,0x4(%esp)
0822368e +0x35e:  mov    0xc(%ebp),%eax
08223691 +0x361:  mov    %eax,(%esp)
08223694 +0x364:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08223699 +0x369:  mov    $0x0,%ebx
0822369e +0x36e:  jmp    08223ba8 <+0x878>
082236a3 +0x373:  mov    -0x30(%ebp),%eax
082236a6 +0x376:  mov    %eax,(%esp)
082236a9 +0x379:  call   0822ca38 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x20e2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x20e2
082236ae +0x37e:  xor    $0x1,%eax
082236b1 +0x381:  test   %al,%al
082236b3 +0x383:  je     082236da <+0x3aa>
082236b5 +0x385:  movl   $0x11,0x8(%esp)
082236bd +0x38d:  movl   $0x112,0x4(%esp)
082236c5 +0x395:  mov    0xc(%ebp),%eax
082236c8 +0x398:  mov    %eax,(%esp)
082236cb +0x39b:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
082236d0 +0x3a0:  mov    $0x0,%ebx
082236d5 +0x3a5:  jmp    08223ba8 <+0x878>
082236da +0x3aa:  mov    -0x2c(%ebp),%eax
082236dd +0x3ad:  mov    %eax,(%esp)
082236e0 +0x3b0:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
082236e5 +0x3b5:  test   %al,%al
082236e7 +0x3b7:  je     0822370e <+0x3de>
082236e9 +0x3b9:  movl   $0x1,0x8(%esp)
082236f1 +0x3c1:  movl   $0x112,0x4(%esp)
082236f9 +0x3c9:  mov    0xc(%ebp),%eax
082236fc +0x3cc:  mov    %eax,(%esp)
082236ff +0x3cf:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08223704 +0x3d4:  mov    $0x0,%ebx
08223709 +0x3d9:  jmp    08223ba8 <+0x878>
0822370e +0x3de:  mov    -0x2c(%ebp),%eax
08223711 +0x3e1:  mov    %eax,-0x28(%ebp)
08223714 +0x3e4:  cmpl   $0x0,-0x28(%ebp)
08223718 +0x3e8:  jne    08223724 <+0x3f4>
0822371a +0x3ea:  mov    $0x0,%ebx
0822371f +0x3ef:  jmp    08223ba8 <+0x878>
08223724 +0x3f4:  mov    -0x28(%ebp),%eax
08223727 +0x3f7:  mov    %eax,(%esp)
0822372a +0x3fa:  call   0822ca70 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x211a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x211a
0822372f +0x3ff:  xor    $0x1,%eax
08223732 +0x402:  test   %al,%al
08223734 +0x404:  je     0822375b <+0x42b>
08223736 +0x406:  movl   $0x11,0x8(%esp)
0822373e +0x40e:  movl   $0x112,0x4(%esp)
08223746 +0x416:  mov    0xc(%ebp),%eax
08223749 +0x419:  mov    %eax,(%esp)
0822374c +0x41c:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08223751 +0x421:  mov    $0x0,%ebx
08223756 +0x426:  jmp    08223ba8 <+0x878>
0822375b +0x42b:  movl   $0x0,-0x64(%ebp)
08223762 +0x432:  movl   $0x0,-0x68(%ebp)
08223769 +0x439:  lea    -0x68(%ebp),%eax
0822376c +0x43c:  mov    %eax,0xc(%esp)
08223770 +0x440:  lea    -0x64(%ebp),%eax
08223773 +0x443:  mov    %eax,0x8(%esp)
08223777 +0x447:  movl   $0x0,0x4(%esp)
0822377f +0x44f:  mov    -0x34(%ebp),%eax
08223782 +0x452:  mov    %eax,(%esp)
08223785 +0x455:  call   0850185e <_ZNK10CInventory14getStartEndPosEN10Inven_Item9ITEM_TYPEERiS2_>  ; CInventory::getStartEndPos(Inven_Item::ITEM_TYPE, int&, int&) const
0822378a +0x45a:  movzwl -0x56(%ebp),%eax
0822378e +0x45e:  movswl %ax,%edx
08223791 +0x461:  mov    -0x64(%ebp),%eax
08223794 +0x464:  cmp    %eax,%edx
08223796 +0x466:  jl     082237cb <+0x49b>
08223798 +0x468:  movzwl -0x56(%ebp),%eax
0822379c +0x46c:  movswl %ax,%edx
0822379f +0x46f:  mov    -0x68(%ebp),%eax
082237a2 +0x472:  cmp    %eax,%edx
082237a4 +0x474:  jg     082237cb <+0x49b>
082237a6 +0x476:  movl   $0x13,0x8(%esp)
082237ae +0x47e:  movl   $0x112,0x4(%esp)
082237b6 +0x486:  mov    0xc(%ebp),%eax
082237b9 +0x489:  mov    %eax,(%esp)
082237bc +0x48c:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
082237c1 +0x491:  mov    $0x0,%ebx
082237c6 +0x496:  jmp    08223ba8 <+0x878>
082237cb +0x49b:  mov    -0x28(%ebp),%eax
082237ce +0x49e:  mov    %eax,(%esp)
082237d1 +0x4a1:  call   0811ed98 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x93>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x93
082237d6 +0x4a6:  mov    %eax,-0x24(%ebp)
082237d9 +0x4a9:  movzwl -0xf3(%ebp),%eax
082237e0 +0x4b0:  movzwl %ax,%eax
082237e3 +0x4b3:  cmp    -0x24(%ebp),%eax
082237e6 +0x4b6:  jge    0822380d <+0x4dd>
082237e8 +0x4b8:  movl   $0x7,0x8(%esp)
082237f0 +0x4c0:  movl   $0x112,0x4(%esp)
082237f8 +0x4c8:  mov    0xc(%ebp),%eax
082237fb +0x4cb:  mov    %eax,(%esp)
082237fe +0x4ce:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08223803 +0x4d3:  mov    $0x0,%ebx
08223808 +0x4d8:  jmp    08223ba8 <+0x878>
0822380d +0x4dd:  lea    -0xfe(%ebp),%eax
08223813 +0x4e3:  add    $0x11,%eax
08223816 +0x4e6:  mov    %eax,(%esp)
08223819 +0x4e9:  call   08150732 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x67>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x67
0822381e +0x4ee:  mov    %al,-0x1d(%ebp)
08223821 +0x4f1:  lea    -0xfe(%ebp),%eax
08223827 +0x4f7:  add    $0x11,%eax
0822382a +0x4fa:  mov    %eax,(%esp)
0822382d +0x4fd:  call   081507bc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xf1>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xf1
08223832 +0x502:  xor    $0x1,%eax
08223835 +0x505:  test   %al,%al
08223837 +0x507:  je     0822385e <+0x52e>
08223839 +0x509:  movl   $0xae,0x8(%esp)
08223841 +0x511:  movl   $0x112,0x4(%esp)
08223849 +0x519:  mov    0xc(%ebp),%eax
0822384c +0x51c:  mov    %eax,(%esp)
0822384f +0x51f:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08223854 +0x524:  mov    $0x0,%ebx
08223859 +0x529:  jmp    08223ba8 <+0x878>
0822385e +0x52e:  movl   $0x0,-0x1c(%ebp)
08223865 +0x535:  lea    -0x74(%ebp),%eax
08223868 +0x538:  mov    %eax,(%esp)
0822386b +0x53b:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
08223870 +0x540:  movzbl -0x5d(%ebp),%eax
08223874 +0x544:  movsbl %al,%eax
08223877 +0x547:  mov    %eax,-0x150(%ebp)
0822387d +0x54d:  mov    -0x5c(%ebp),%eax
08223880 +0x550:  mov    %eax,-0x14c(%ebp)
08223886 +0x556:  movzwl -0x56(%ebp),%eax
0822388a +0x55a:  movswl %ax,%edi
0822388d +0x55d:  mov    -0x54(%ebp),%esi
08223890 +0x560:  movzwl -0x4e(%ebp),%eax
08223894 +0x564:  movswl %ax,%ebx
08223897 +0x567:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0822389c +0x56c:  mov    0x20(%eax),%edx
0822389f +0x56f:  lea    -0x74(%ebp),%eax
082238a2 +0x572:  mov    %eax,0x1c(%esp)
082238a6 +0x576:  mov    -0x150(%ebp),%eax
082238ac +0x57c:  mov    %eax,0x18(%esp)
082238b0 +0x580:  mov    -0x14c(%ebp),%eax
082238b6 +0x586:  mov    %eax,0x14(%esp)
082238ba +0x58a:  mov    %edi,0x10(%esp)
082238be +0x58e:  mov    %esi,0xc(%esp)
082238c2 +0x592:  mov    %ebx,0x8(%esp)
082238c6 +0x596:  mov    0xc(%ebp),%eax
082238c9 +0x599:  mov    %eax,0x4(%esp)
082238cd +0x59d:  mov    %edx,(%esp)
082238d0 +0x5a0:  call   085491d6 <_ZN8WongWork12CItemUpgrade20ProcUpgradeChronicleEP5CUsersjsjcRSt6vectorIiSaIiEE>  ; WongWork::CItemUpgrade::ProcUpgradeChronicle(CUser*, short, unsigned int, short, unsigned int, char, std::vector<int, std::allocator<int> >&)
082238d5 +0x5a5:  mov    %eax,-0x1c(%ebp)
082238d8 +0x5a8:  cmpl   $0x0,-0x1c(%ebp)
082238dc +0x5ac:  setne  %al
082238df +0x5af:  test   %al,%al
082238e1 +0x5b1:  je     08223908 <+0x5d8>
082238e3 +0x5b3:  movl   $0xae,0x8(%esp)
082238eb +0x5bb:  movl   $0x112,0x4(%esp)
082238f3 +0x5c3:  mov    0xc(%ebp),%eax
082238f6 +0x5c6:  mov    %eax,(%esp)
082238f9 +0x5c9:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
082238fe +0x5ce:  mov    $0x0,%ebx
08223903 +0x5d3:  jmp    08223b9d <+0x86d>
08223908 +0x5d8:  lea    -0x74(%ebp),%eax
0822390b +0x5db:  mov    %eax,(%esp)
0822390e +0x5de:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
08223913 +0x5e3:  mov    %eax,%ecx
08223915 +0x5e5:  mov    $0xaaaaaaab,%edx
0822391a +0x5ea:  mov    %ecx,%eax
0822391c +0x5ec:  mul    %edx
0822391e +0x5ee:  shr    %edx
08223920 +0x5f0:  mov    %edx,%eax
08223922 +0x5f2:  add    %eax,%eax
08223924 +0x5f4:  add    %edx,%eax
08223926 +0x5f6:  mov    %ecx,%edx
08223928 +0x5f8:  sub    %eax,%edx
0822392a +0x5fa:  test   %edx,%edx
0822392c +0x5fc:  setne  %al
0822392f +0x5ff:  test   %al,%al
08223931 +0x601:  je     0822393d <+0x60d>
08223933 +0x603:  mov    $0x0,%ebx
08223938 +0x608:  jmp    08223b9d <+0x86d>
0822393d +0x60d:  lea    -0x80(%ebp),%eax
08223940 +0x610:  mov    %eax,(%esp)
08223943 +0x613:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08223948 +0x618:  movl   $0x112,0x8(%esp)
08223950 +0x620:  movl   $0x1,0x4(%esp)
08223958 +0x628:  lea    -0x80(%ebp),%eax
0822395b +0x62b:  mov    %eax,(%esp)
0822395e +0x62e:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08223963 +0x633:  movl   $0x1,0x4(%esp)
0822396b +0x63b:  lea    -0x80(%ebp),%eax
0822396e +0x63e:  mov    %eax,(%esp)
08223971 +0x641:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08223976 +0x646:  lea    -0x74(%ebp),%eax
08223979 +0x649:  mov    %eax,(%esp)
0822397c +0x64c:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
08223981 +0x651:  mov    %eax,-0x15c(%ebp)
08223987 +0x657:  mov    $0xaaaaaaab,%edx
0822398c +0x65c:  mov    -0x15c(%ebp),%eax
08223992 +0x662:  mul    %edx
08223994 +0x664:  mov    %edx,%eax
08223996 +0x666:  shr    %eax
08223998 +0x668:  add    $0x1,%eax
0822399b +0x66b:  movsbl %al,%eax
0822399e +0x66e:  mov    %eax,0x4(%esp)
082239a2 +0x672:  lea    -0x80(%ebp),%eax
082239a5 +0x675:  mov    %eax,(%esp)
082239a8 +0x678:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
082239ad +0x67d:  movzwl -0x4e(%ebp),%eax
082239b1 +0x681:  movswl %ax,%edx
082239b4 +0x684:  lea    -0x13b(%ebp),%eax
082239ba +0x68a:  mov    %edx,0xc(%esp)
082239be +0x68e:  movl   $0x1,0x8(%esp)
082239c6 +0x696:  mov    -0x34(%ebp),%edx
082239c9 +0x699:  mov    %edx,0x4(%esp)
082239cd +0x69d:  mov    %eax,(%esp)
082239d0 +0x6a0:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
082239d5 +0x6a5:  sub    $0x4,%esp
082239d8 +0x6a8:  movl   $0x0,0x4(%esp)
082239e0 +0x6b0:  lea    -0x80(%ebp),%eax
082239e3 +0x6b3:  mov    %eax,(%esp)
082239e6 +0x6b6:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
082239eb +0x6bb:  movzwl -0x4e(%ebp),%eax
082239ef +0x6bf:  cwtl
082239f0 +0x6c0:  mov    %eax,0x4(%esp)
082239f4 +0x6c4:  lea    -0x80(%ebp),%eax
082239f7 +0x6c7:  mov    %eax,(%esp)
082239fa +0x6ca:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
082239ff +0x6cf:  movl   $0x1,0x4(%esp)
08223a07 +0x6d7:  lea    -0x80(%ebp),%eax
08223a0a +0x6da:  mov    %eax,(%esp)
08223a0d +0x6dd:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08223a12 +0x6e2:  lea    -0x4c(%ebp),%eax
08223a15 +0x6e5:  lea    -0x74(%ebp),%edx
08223a18 +0x6e8:  mov    %edx,0x4(%esp)
08223a1c +0x6ec:  mov    %eax,(%esp)
08223a1f +0x6ef:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
08223a24 +0x6f4:  sub    $0x4,%esp
08223a27 +0x6f7:  lea    -0x4c(%ebp),%eax
08223a2a +0x6fa:  mov    %eax,0x4(%esp)
08223a2e +0x6fe:  lea    -0x84(%ebp),%eax
08223a34 +0x704:  mov    %eax,(%esp)
08223a37 +0x707:  call   080f99ec <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x1f8>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x1f8
08223a3c +0x70c:  jmp    08223b02 <+0x7d2>
08223a41 +0x711:  lea    -0x84(%ebp),%eax
08223a47 +0x717:  mov    %eax,(%esp)
08223a4a +0x71a:  call   080f9a1c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x228>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x228
08223a4f +0x71f:  mov    (%eax),%eax
08223a51 +0x721:  movsbl %al,%eax
08223a54 +0x724:  mov    %eax,0x4(%esp)
08223a58 +0x728:  lea    -0x80(%ebp),%eax
08223a5b +0x72b:  mov    %eax,(%esp)
08223a5e +0x72e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08223a63 +0x733:  lea    -0x44(%ebp),%eax
08223a66 +0x736:  movl   $0x0,0x8(%esp)
08223a6e +0x73e:  lea    -0x84(%ebp),%edx
08223a74 +0x744:  mov    %edx,0x4(%esp)
08223a78 +0x748:  mov    %eax,(%esp)
08223a7b +0x74b:  call   081938b2 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x51a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x51a
08223a80 +0x750:  sub    $0x4,%esp
08223a83 +0x753:  lea    -0x84(%ebp),%eax
08223a89 +0x759:  mov    %eax,(%esp)
08223a8c +0x75c:  call   080f9a1c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x228>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x228
08223a91 +0x761:  mov    (%eax),%eax
08223a93 +0x763:  cwtl
08223a94 +0x764:  mov    %eax,0x4(%esp)
08223a98 +0x768:  lea    -0x80(%ebp),%eax
08223a9b +0x76b:  mov    %eax,(%esp)
08223a9e +0x76e:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08223aa3 +0x773:  lea    -0x40(%ebp),%eax
08223aa6 +0x776:  movl   $0x0,0x8(%esp)
08223aae +0x77e:  lea    -0x84(%ebp),%edx
08223ab4 +0x784:  mov    %edx,0x4(%esp)
08223ab8 +0x788:  mov    %eax,(%esp)
08223abb +0x78b:  call   081938b2 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x51a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x51a
08223ac0 +0x790:  sub    $0x4,%esp
08223ac3 +0x793:  lea    -0x84(%ebp),%eax
08223ac9 +0x799:  mov    %eax,(%esp)
08223acc +0x79c:  call   080f9a1c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x228>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x228
08223ad1 +0x7a1:  mov    (%eax),%eax
08223ad3 +0x7a3:  mov    %eax,0x4(%esp)
08223ad7 +0x7a7:  lea    -0x80(%ebp),%eax
08223ada +0x7aa:  mov    %eax,(%esp)
08223add +0x7ad:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08223ae2 +0x7b2:  lea    -0x3c(%ebp),%eax
08223ae5 +0x7b5:  movl   $0x0,0x8(%esp)
08223aed +0x7bd:  lea    -0x84(%ebp),%edx
08223af3 +0x7c3:  mov    %edx,0x4(%esp)
08223af7 +0x7c7:  mov    %eax,(%esp)
08223afa +0x7ca:  call   081938b2 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x51a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x51a
08223aff +0x7cf:  sub    $0x4,%esp
08223b02 +0x7d2:  lea    -0x48(%ebp),%eax
08223b05 +0x7d5:  lea    -0x74(%ebp),%edx
08223b08 +0x7d8:  mov    %edx,0x4(%esp)
08223b0c +0x7dc:  mov    %eax,(%esp)
08223b0f +0x7df:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
08223b14 +0x7e4:  sub    $0x4,%esp
08223b17 +0x7e7:  lea    -0x48(%ebp),%eax
08223b1a +0x7ea:  mov    %eax,0x4(%esp)
08223b1e +0x7ee:  lea    -0x84(%ebp),%eax
08223b24 +0x7f4:  mov    %eax,(%esp)
08223b27 +0x7f7:  call   08193428 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x90>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x90
08223b2c +0x7fc:  test   %al,%al
08223b2e +0x7fe:  jne    08223a41 <+0x711>
08223b34 +0x804:  movl   $0x1,0x4(%esp)
08223b3c +0x80c:  lea    -0x80(%ebp),%eax
08223b3f +0x80f:  mov    %eax,(%esp)
08223b42 +0x812:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08223b47 +0x817:  lea    -0x80(%ebp),%eax
08223b4a +0x81a:  mov    %eax,0x4(%esp)
08223b4e +0x81e:  mov    0xc(%ebp),%eax
08223b51 +0x821:  mov    %eax,(%esp)
08223b54 +0x824:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08223b59 +0x829:  jmp    08223b70 <+0x840>
08223b5b +0x82b:  mov    %edx,%ebx
08223b5d +0x82d:  mov    %eax,%esi
08223b5f +0x82f:  lea    -0x80(%ebp),%eax
08223b62 +0x832:  mov    %eax,(%esp)
08223b65 +0x835:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08223b6a +0x83a:  mov    %esi,%eax
08223b6c +0x83c:  mov    %ebx,%edx
08223b6e +0x83e:  jmp    08223b82 <+0x852>
08223b70 +0x840:  lea    -0x80(%ebp),%eax
08223b73 +0x843:  mov    %eax,(%esp)
08223b76 +0x846:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08223b7b +0x84b:  mov    $0x0,%ebx
08223b80 +0x850:  jmp    08223b9d <+0x86d>
08223b82 +0x852:  mov    %edx,%ebx
08223b84 +0x854:  mov    %eax,%esi
08223b86 +0x856:  lea    -0x74(%ebp),%eax
08223b89 +0x859:  mov    %eax,(%esp)
08223b8c +0x85c:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
08223b91 +0x861:  mov    %esi,%eax
08223b93 +0x863:  mov    %ebx,%edx
08223b95 +0x865:  mov    %eax,(%esp)
08223b98 +0x868:  call   08ae3750 <_Unwind_Resume>
08223b9d +0x86d:  lea    -0x74(%ebp),%eax
08223ba0 +0x870:  mov    %eax,(%esp)
08223ba3 +0x873:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
08223ba8 +0x878:  mov    %ebx,%eax
08223baa +0x87a:  lea    -0xc(%ebp),%esp
08223bad +0x87d:  add    $0x0,%esp
08223bb0 +0x880:  pop    %ebx
08223bb1 +0x881:  pop    %esi
08223bb2 +0x882:  pop    %edi
08223bb3 +0x883:  pop    %ebp
08223bb4 +0x884:  ret
08223bb5 +0x885:  nop
```

## 反编译 C

```c
// Dispatcher_UpgradeChronicle::dispatch_sig @ 0x8223330

/* Dispatcher_UpgradeChronicle::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_UpgradeChronicle::dispatch_sig
          (Dispatcher_UpgradeChronicle *this,CUser *param_1,PacketBuf *param_2)

{
  short sVar1;
  uint uVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  CDataManager *pCVar7;
  uint uVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined4 uVar11;
  undefined1 local_13f [61];
  undefined1 local_102 [2];
  uint local_100;
  ushort local_f7;
  stAmplifyOption_t asStack_f1 [44];
  undefined1 local_c5 [2];
  uint local_c3;
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_88 [4];
  PacketGuard local_84 [12];
  vector<int,std::allocator<int>> local_78 [12];
  int local_6c;
  int local_68;
  char local_61;
  uint local_60;
  short local_5a;
  uint local_58;
  short local_52;
  __normal_iterator local_50 [4];
  __normal_iterator local_4c [4];
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_48 [4];
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_44 [4];
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_40 [4];
  uint local_3c;
  CInventory *local_38;
  CStackableItem *local_34;
  CItem *local_30;
  CEquipItem *local_2c;
  int local_28;
  undefined1 local_21;
  int local_20;
  
  iVar6 = CUser::get_state(param_1);
  if (iVar6 < 3) {
    uVar11 = 0;
  }
  else {
    local_52 = 0;
    local_58 = 0;
    local_5a = 0;
    local_60 = 0;
    local_61 = '\0';
    cVar4 = PacketBuf::get_short(param_2,&local_52);
    if (cVar4 == '\x01') {
      cVar4 = PacketBuf::get_int(param_2,&local_58);
      if (cVar4 == '\x01') {
        cVar4 = PacketBuf::get_short(param_2,&local_5a);
        if (cVar4 == '\x01') {
          cVar4 = PacketBuf::get_int(param_2,&local_60);
          if (cVar4 == '\x01') {
            cVar4 = PacketBuf::get_byte(param_2,&local_61);
            if (cVar4 == '\x01') {
              local_3c = CSecu_ProtectionField::Check
                                   (GlobalData::s_pSecuProtectionField,param_1,0x1a);
              if (local_3c == 0) {
                cVar4 = CUser::CheckItemLock(param_1,1,(int)local_5a);
                if (cVar4 == '\0') {
                  local_38 = (CInventory *)
                             CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                  CInventory::GetInvenSlot((int)local_c5,(int)local_38);
                  CInventory::GetInvenSlot((int)local_102,(int)local_38);
                  uVar8 = local_c3;
                  pCVar7 = (CDataManager *)G_CDataManager();
                  local_34 = (CStackableItem *)CDataManager::find_item(pCVar7,uVar8);
                  uVar8 = local_100;
                  pCVar7 = (CDataManager *)G_CDataManager();
                  local_30 = (CItem *)CDataManager::find_item(pCVar7,uVar8);
                  if ((local_34 == (CStackableItem *)0x0) || (local_30 == (CItem *)0x0)) {
                    CUser::SendCmdErrorPacket(param_1,0x112,1);
                    uVar11 = 0;
                  }
                  else if ((local_c3 == 0) || (local_100 == 0)) {
                    CUser::SendCmdErrorPacket(param_1,0x112,4);
                    uVar11 = 0;
                  }
                  else if ((local_c3 == local_58) && (local_100 == local_60)) {
                    cVar4 = CStackableItem::IsEmancipate(local_34);
                    if (cVar4 == '\x01') {
                      cVar4 = CItem::is_stackable(local_30);
                      if (cVar4 == '\0') {
                        local_2c = (CEquipItem *)local_30;
                        if (local_30 == (CItem *)0x0) {
                          uVar11 = 0;
                        }
                        else {
                          cVar4 = CEquipItem::IsEmancipate((CEquipItem *)local_30);
                          if (cVar4 == '\x01') {
                            local_68 = 0;
                            local_6c = 0;
                            CInventory::getStartEndPos(local_38,0,&local_68,&local_6c);
                            if ((local_5a < local_68) || (local_6c < local_5a)) {
                              local_28 = CEquipItem::get_endurance(local_2c);
                              if ((int)(uint)local_f7 < local_28) {
                                CUser::SendCmdErrorPacket(param_1,0x112,7);
                                uVar11 = 0;
                              }
                              else {
                                local_21 = stAmplifyOption_t::getAbilityType(asStack_f1);
                                cVar4 = stAmplifyOption_t::isIdentified(asStack_f1);
                                if (cVar4 == '\x01') {
                                  local_20 = 0;
                                  std::vector<int,std::allocator<int>>::vector(local_78);
                                  sVar3 = local_52;
                                  uVar2 = local_58;
                                  sVar1 = local_5a;
                                  uVar8 = local_60;
                                  cVar4 = local_61;
                    /* try { // try from 08223897 to 08223947 has its CatchHandler @ 08223b82 */
                                  iVar6 = G_CDataManager();
                                  local_20 = WongWork::CItemUpgrade::ProcUpgradeChronicle
                                                       (*(CItemUpgrade **)(iVar6 + 0x20),param_1,
                                                        sVar3,uVar2,sVar1,uVar8,cVar4,
                                                        (vector *)local_78);
                                  if (local_20 == 0) {
                                    uVar8 = std::vector<int,std::allocator<int>>::size(local_78);
                                    if (uVar8 % 3 == 0) {
                                      PacketGuard::PacketGuard(local_84);
                    /* try { // try from 0822395e to 08223b58 has its CatchHandler @ 08223b5b */
                                      InterfacePacketBuf::put_header
                                                ((InterfacePacketBuf *)local_84,1,0x112);
                                      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_84,1)
                                      ;
                                      uVar8 = std::vector<int,std::allocator<int>>::size(local_78);
                                      InterfacePacketBuf::put_byte
                                                ((InterfacePacketBuf *)local_84,
                                                 (int)(char)((char)(uVar8 / 3) + '\x01'));
                                      CInventory::GetInvenSlot((int)local_13f,(int)local_38);
                                      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_84,0)
                                      ;
                                      InterfacePacketBuf::put_short
                                                ((InterfacePacketBuf *)local_84,(int)local_52);
                                      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_84,1);
                                      std::vector<int,std::allocator<int>>::begin();
                                      __gnu_cxx::
                                      __normal_iterator<int_const*,std::vector<int,std::allocator<int>>>
                                      ::__normal_iterator<int*>(local_88,local_50);
                                      while( true ) {
                                        std::vector<int,std::allocator<int>>::end();
                                        bVar5 = __gnu_cxx::operator!=(local_88,local_4c);
                                        if (!bVar5) break;
                                        puVar9 = (undefined4 *)
                                                 __gnu_cxx::
                                                 __normal_iterator<int_const*,std::vector<int,std::allocator<int>>>
                                                 ::operator*(local_88);
                                        InterfacePacketBuf::put_byte
                                                  ((InterfacePacketBuf *)local_84,(int)(char)*puVar9
                                                  );
                                        __gnu_cxx::
                                        __normal_iterator<int_const*,std::vector<int,std::allocator<int>>>
                                        ::operator++(local_48,(int)local_88);
                                        puVar9 = (undefined4 *)
                                                 __gnu_cxx::
                                                 __normal_iterator<int_const*,std::vector<int,std::allocator<int>>>
                                                 ::operator*(local_88);
                                        InterfacePacketBuf::put_short
                                                  ((InterfacePacketBuf *)local_84,
                                                   (int)(short)*puVar9);
                                        __gnu_cxx::
                                        __normal_iterator<int_const*,std::vector<int,std::allocator<int>>>
                                        ::operator++(local_44,(int)local_88);
                                        piVar10 = (int *)__gnu_cxx::
                                                                                                                  
                                                  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>>
                                                  ::operator*(local_88);
                                        InterfacePacketBuf::put_int
                                                  ((InterfacePacketBuf *)local_84,*piVar10);
                                        __gnu_cxx::
                                        __normal_iterator<int_const*,std::vector<int,std::allocator<int>>>
                                        ::operator++(local_40,(int)local_88);
                                      }
                                      InterfacePacketBuf::finalize
                                                ((InterfacePacketBuf *)local_84,true);
                                      CUser::Send(param_1,local_84);
                    /* try { // try from 08223b76 to 08223b7a has its CatchHandler @ 08223b82 */
                                      PacketGuard::~PacketGuard(local_84);
                                    }
                                  }
                                  else {
                                    CUser::SendCmdErrorPacket(param_1,0x112,0xae);
                                  }
                                  uVar11 = 0;
                                  std::vector<int,std::allocator<int>>::~vector(local_78);
                                }
                                else {
                                  CUser::SendCmdErrorPacket(param_1,0x112,0xae);
                                  uVar11 = 0;
                                }
                              }
                            }
                            else {
                              CUser::SendCmdErrorPacket(param_1,0x112,0x13);
                              uVar11 = 0;
                            }
                          }
                          else {
                            CUser::SendCmdErrorPacket(param_1,0x112,0x11);
                            uVar11 = 0;
                          }
                        }
                      }
                      else {
                        CUser::SendCmdErrorPacket(param_1,0x112,1);
                        uVar11 = 0;
                      }
                    }
                    else {
                      CUser::SendCmdErrorPacket(param_1,0x112,0x11);
                      uVar11 = 0;
                    }
                  }
                  else {
                    CUser::SendCmdErrorPacket(param_1,0x112,1);
                    uVar11 = 0;
                  }
                }
                else {
                  CUser::SendCmdErrorPacket(param_1,0x112,0xd5);
                  uVar11 = 0;
                }
              }
              else {
                CUser::SendCmdErrorPacket(param_1,0x112,local_3c & 0xff);
                uVar11 = 0;
              }
            }
            else {
              uVar11 = LineFunc(0xdda8,
                                "virtual int Dispatcher_UpgradeChronicle::dispatch_sig(CUser*, PacketBuf&)"
                                ,0,0);
            }
          }
          else {
            uVar11 = LineFunc(0xdda7,
                              "virtual int Dispatcher_UpgradeChronicle::dispatch_sig(CUser*, PacketBuf&)"
                              ,0,0);
          }
        }
        else {
          uVar11 = LineFunc(0xdda6,
                            "virtual int Dispatcher_UpgradeChronicle::dispatch_sig(CUser*, PacketBuf&)"
                            ,0,0);
        }
      }
      else {
        uVar11 = LineFunc(0xdda5,
                          "virtual int Dispatcher_UpgradeChronicle::dispatch_sig(CUser*, PacketBuf&)"
                          ,0,0);
      }
    }
    else {
      uVar11 = LineFunc(0xdda4,
                        "virtual int Dispatcher_UpgradeChronicle::dispatch_sig(CUser*, PacketBuf&)",
                        0,0);
    }
  }
  return uVar11;
}
```
