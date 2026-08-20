# process

`_ZN29Dispatcher_ChangeRandomOption7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_ChangeRandomOption::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_ChangeRandomOption` | `0x081dc9ba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081dc9ba  _ZN29Dispatcher_ChangeRandomOption7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_ChangeRandomOption::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081dc9ba, 0x081dd1e1]
081dc9ba +0x000:  push   %ebp
081dc9bb +0x001:  mov    %esp,%ebp
081dc9bd +0x003:  push   %edi
081dc9be +0x004:  push   %esi
081dc9bf +0x005:  push   %ebx
081dc9c0 +0x006:  sub    $0xac,%esp
081dc9c6 +0x00c:  mov    0x10(%ebp),%eax
081dc9c9 +0x00f:  mov    %eax,-0x34(%ebp)
081dc9cc +0x012:  mov    0xc(%ebp),%eax
081dc9cf +0x015:  mov    %eax,(%esp)
081dc9d2 +0x018:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081dc9d7 +0x01d:  cmp    $0x2,%eax
081dc9da +0x020:  jle    081dc9eb <+0x31>
081dc9dc +0x022:  mov    0xc(%ebp),%eax
081dc9df +0x025:  mov    %eax,(%esp)
081dc9e2 +0x028:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
081dc9e7 +0x02d:  test   %eax,%eax
081dc9e9 +0x02f:  jne    081dc9f2 <+0x38>
081dc9eb +0x031:  mov    $0x1,%eax
081dc9f0 +0x036:  jmp    081dc9f7 <+0x3d>
081dc9f2 +0x038:  mov    $0x0,%eax
081dc9f7 +0x03d:  test   %al,%al
081dc9f9 +0x03f:  je     081dca05 <+0x4b>
081dc9fb +0x041:  mov    $0x0,%ebx
081dca00 +0x046:  jmp    081dd1d4 <+0x81a>
081dca05 +0x04b:  mov    0xc(%ebp),%eax
081dca08 +0x04e:  mov    %eax,(%esp)
081dca0b +0x051:  call   080da2fe <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x49b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x49b
081dca10 +0x056:  test   %al,%al
081dca12 +0x058:  je     081dca1e <+0x64>
081dca14 +0x05a:  mov    $0x0,%ebx
081dca19 +0x05f:  jmp    081dd1d4 <+0x81a>
081dca1e +0x064:  mov    -0x34(%ebp),%eax
081dca21 +0x067:  movzwl 0xe(%eax),%eax
081dca25 +0x06b:  movzwl %ax,%eax
081dca28 +0x06e:  mov    %eax,0x8(%esp)
081dca2c +0x072:  movl   $0x1,0x4(%esp)
081dca34 +0x07a:  mov    0xc(%ebp),%eax
081dca37 +0x07d:  mov    %eax,(%esp)
081dca3a +0x080:  call   08646942 <_ZNK5CUser13CheckItemLockEii>  ; CUser::CheckItemLock(int, int) const
081dca3f +0x085:  test   %al,%al
081dca41 +0x087:  je     081dca68 <+0xae>
081dca43 +0x089:  movl   $0xd5,0x8(%esp)
081dca4b +0x091:  movl   $0x1b6,0x4(%esp)
081dca53 +0x099:  mov    0xc(%ebp),%eax
081dca56 +0x09c:  mov    %eax,(%esp)
081dca59 +0x09f:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081dca5e +0x0a4:  mov    $0x0,%ebx
081dca63 +0x0a9:  jmp    081dd1d4 <+0x81a>
081dca68 +0x0ae:  mov    -0x34(%ebp),%eax
081dca6b +0x0b1:  movzwl 0xe(%eax),%eax
081dca6f +0x0b5:  movzwl %ax,%ebx
081dca72 +0x0b8:  mov    0xc(%ebp),%eax
081dca75 +0x0bb:  mov    %eax,(%esp)
081dca78 +0x0be:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
081dca7d +0x0c3:  mov    %ebx,0x8(%esp)
081dca81 +0x0c7:  movl   $0x1,0x4(%esp)
081dca89 +0x0cf:  mov    %eax,(%esp)
081dca8c +0x0d2:  call   084fc2ae <_ZN10CInventory11GetInvenRefEii>  ; CInventory::GetInvenRef(int, int)
081dca91 +0x0d7:  mov    %eax,-0x30(%ebp)
081dca94 +0x0da:  cmpl   $0x0,-0x30(%ebp)
081dca98 +0x0de:  sete   %al
081dca9b +0x0e1:  test   %al,%al
081dca9d +0x0e3:  je     081dcac4 <+0x10a>
081dca9f +0x0e5:  movl   $0x11,0x8(%esp)
081dcaa7 +0x0ed:  movl   $0x1b6,0x4(%esp)
081dcaaf +0x0f5:  mov    0xc(%ebp),%eax
081dcab2 +0x0f8:  mov    %eax,(%esp)
081dcab5 +0x0fb:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081dcaba +0x100:  mov    $0x0,%ebx
081dcabf +0x105:  jmp    081dd1d4 <+0x81a>
081dcac4 +0x10a:  mov    -0x30(%ebp),%eax
081dcac7 +0x10d:  mov    0x2(%eax),%eax
081dcaca +0x110:  mov    %eax,%ebx
081dcacc +0x112:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081dcad1 +0x117:  mov    %ebx,0x4(%esp)
081dcad5 +0x11b:  mov    %eax,(%esp)
081dcad8 +0x11e:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
081dcadd +0x123:  mov    %eax,-0x2c(%ebp)
081dcae0 +0x126:  cmpl   $0x0,-0x2c(%ebp)
081dcae4 +0x12a:  jne    081dcb0b <+0x151>
081dcae6 +0x12c:  movl   $0x11,0x8(%esp)
081dcaee +0x134:  movl   $0x1b6,0x4(%esp)
081dcaf6 +0x13c:  mov    0xc(%ebp),%eax
081dcaf9 +0x13f:  mov    %eax,(%esp)
081dcafc +0x142:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081dcb01 +0x147:  mov    $0x0,%ebx
081dcb06 +0x14c:  jmp    081dd1d4 <+0x81a>
081dcb0b +0x151:  mov    -0x34(%ebp),%eax
081dcb0e +0x154:  movzbl 0x12(%eax),%eax
081dcb12 +0x158:  mov    %al,-0x25(%ebp)
081dcb15 +0x15b:  movzbl -0x25(%ebp),%edx
081dcb19 +0x15f:  mov    -0x30(%ebp),%ecx
081dcb1c +0x162:  mov    %edx,%eax
081dcb1e +0x164:  add    %eax,%eax
081dcb20 +0x166:  add    %edx,%eax
081dcb22 +0x168:  lea    (%ecx,%eax,1),%eax
081dcb25 +0x16b:  add    $0x25,%eax
081dcb28 +0x16e:  movzbl (%eax),%eax
081dcb2b +0x171:  test   %al,%al
081dcb2d +0x173:  jne    081dcb54 <+0x19a>
081dcb2f +0x175:  movl   $0x11,0x8(%esp)
081dcb37 +0x17d:  movl   $0x1b6,0x4(%esp)
081dcb3f +0x185:  mov    0xc(%ebp),%eax
081dcb42 +0x188:  mov    %eax,(%esp)
081dcb45 +0x18b:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081dcb4a +0x190:  mov    $0x0,%ebx
081dcb4f +0x195:  jmp    081dd1d4 <+0x81a>
081dcb54 +0x19a:  call   081625e6 <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0x854>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0x854
081dcb59 +0x19f:  movl   $0xf,0xc(%esp)
081dcb61 +0x1a7:  movl   $0x1,0x8(%esp)
081dcb69 +0x1af:  mov    0xc(%ebp),%edx
081dcb6c +0x1b2:  mov    %edx,0x4(%esp)
081dcb70 +0x1b6:  mov    %eax,(%esp)
081dcb73 +0x1b9:  call   0816e6b8 <_ZN22ServiceRestrictManager12isRestrictedEP5CUserN16RestrictCategory4EnumEi>  ; ServiceRestrictManager::isRestricted(CUser*, RestrictCategory::Enum, int)
081dcb78 +0x1be:  test   %al,%al
081dcb7a +0x1c0:  je     081dcba1 <+0x1e7>
081dcb7c +0x1c2:  movl   $0xd1,0x8(%esp)
081dcb84 +0x1ca:  movl   $0x1b6,0x4(%esp)
081dcb8c +0x1d2:  mov    0xc(%ebp),%eax
081dcb8f +0x1d5:  mov    %eax,(%esp)
081dcb92 +0x1d8:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081dcb97 +0x1dd:  mov    $0x0,%ebx
081dcb9c +0x1e2:  jmp    081dd1d4 <+0x81a>
081dcba1 +0x1e7:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%eax
081dcba6 +0x1ec:  movl   $0x25,0x8(%esp)
081dcbae +0x1f4:  mov    0xc(%ebp),%edx
081dcbb1 +0x1f7:  mov    %edx,0x4(%esp)
081dcbb5 +0x1fb:  mov    %eax,(%esp)
081dcbb8 +0x1fe:  call   08288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>  ; CSecu_ProtectionField::Check(CUser*, SECURITY_PROTCTION)
081dcbbd +0x203:  mov    %eax,-0x1c(%ebp)
081dcbc0 +0x206:  cmpl   $0x0,-0x1c(%ebp)
081dcbc4 +0x20a:  je     081dcbed <+0x233>
081dcbc6 +0x20c:  mov    -0x1c(%ebp),%eax
081dcbc9 +0x20f:  movzbl %al,%eax
081dcbcc +0x212:  mov    %eax,0x8(%esp)
081dcbd0 +0x216:  movl   $0x1b6,0x4(%esp)
081dcbd8 +0x21e:  mov    0xc(%ebp),%eax
081dcbdb +0x221:  mov    %eax,(%esp)
081dcbde +0x224:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081dcbe3 +0x229:  mov    $0x0,%ebx
081dcbe8 +0x22e:  jmp    081dd1d4 <+0x81a>
081dcbed +0x233:  mov    -0x30(%ebp),%eax
081dcbf0 +0x236:  add    $0x25,%eax
081dcbf3 +0x239:  mov    %eax,(%esp)
081dcbf6 +0x23c:  call   0822abd0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x27a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x27a
081dcbfb +0x241:  test   %al,%al
081dcbfd +0x243:  je     081dcc24 <+0x26a>
081dcbff +0x245:  movl   $0x13,0x8(%esp)
081dcc07 +0x24d:  movl   $0x1b6,0x4(%esp)
081dcc0f +0x255:  mov    0xc(%ebp),%eax
081dcc12 +0x258:  mov    %eax,(%esp)
081dcc15 +0x25b:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081dcc1a +0x260:  mov    $0x0,%ebx
081dcc1f +0x265:  jmp    081dd1d4 <+0x81a>
081dcc24 +0x26a:  mov    -0x34(%ebp),%eax
081dcc27 +0x26d:  movzbl 0x12(%eax),%eax
081dcc2b +0x271:  movzbl %al,%eax
081dcc2e +0x274:  mov    %eax,-0x24(%ebp)
081dcc31 +0x277:  cmpl   $0x0,-0x24(%ebp)
081dcc35 +0x27b:  js     081dcc3d <+0x283>
081dcc37 +0x27d:  cmpl   $0x2,-0x24(%ebp)
081dcc3b +0x281:  jle    081dcc62 <+0x2a8>
081dcc3d +0x283:  movl   $0x13,0x8(%esp)
081dcc45 +0x28b:  movl   $0x1b6,0x4(%esp)
081dcc4d +0x293:  mov    0xc(%ebp),%eax
081dcc50 +0x296:  mov    %eax,(%esp)
081dcc53 +0x299:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081dcc58 +0x29e:  mov    $0x0,%ebx
081dcc5d +0x2a3:  jmp    081dd1d4 <+0x81a>
081dcc62 +0x2a8:  mov    -0x30(%ebp),%eax
081dcc65 +0x2ab:  add    $0x2f,%eax
081dcc68 +0x2ae:  mov    %eax,(%esp)
081dcc6b +0x2b1:  call   0811ed22 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x1d>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x1d
081dcc70 +0x2b6:  xor    $0x1,%eax
081dcc73 +0x2b9:  test   %al,%al
081dcc75 +0x2bb:  je     081dcc95 <+0x2db>
081dcc77 +0x2bd:  mov    -0x30(%ebp),%eax
081dcc7a +0x2c0:  movzbl 0x32(%eax),%eax
081dcc7e +0x2c4:  and    $0x3,%eax
081dcc81 +0x2c7:  movzbl %al,%edx
081dcc84 +0x2ca:  mov    -0x24(%ebp),%eax
081dcc87 +0x2cd:  movzbl %al,%eax
081dcc8a +0x2d0:  cmp    %eax,%edx
081dcc8c +0x2d2:  je     081dcc95 <+0x2db>
081dcc8e +0x2d4:  mov    $0x1,%eax
081dcc93 +0x2d9:  jmp    081dcc9a <+0x2e0>
081dcc95 +0x2db:  mov    $0x0,%eax
081dcc9a +0x2e0:  test   %al,%al
081dcc9c +0x2e2:  je     081dccc3 <+0x309>
081dcc9e +0x2e4:  movl   $0x4,0x8(%esp)
081dcca6 +0x2ec:  movl   $0x1b6,0x4(%esp)
081dccae +0x2f4:  mov    0xc(%ebp),%eax
081dccb1 +0x2f7:  mov    %eax,(%esp)
081dccb4 +0x2fa:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081dccb9 +0x2ff:  mov    $0x0,%ebx
081dccbe +0x304:  jmp    081dd1d4 <+0x81a>
081dccc3 +0x309:  mov    -0x2c(%ebp),%eax
081dccc6 +0x30c:  mov    %eax,(%esp)
081dccc9 +0x30f:  call   080f12d6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x358>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x358
081dccce +0x314:  mov    %eax,%ebx
081dccd0 +0x316:  mov    -0x2c(%ebp),%eax
081dccd3 +0x319:  mov    %eax,(%esp)
081dccd6 +0x31c:  call   080f12ee <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x370>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x370
081dccdb +0x321:  movswl %ax,%esi
081dccde +0x324:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081dcce3 +0x329:  add    $0x4e10,%eax
081dcce8 +0x32e:  mov    %ebx,0x8(%esp)
081dccec +0x332:  mov    %esi,0x4(%esp)
081dccf0 +0x336:  mov    %eax,(%esp)
081dccf3 +0x339:  call   08a738a0 <_ZNK18RandomOptionScript25getOptionModificationCostEs11ENUM_RARITY>  ; RandomOptionScript::getOptionModificationCost(short, ENUM_RARITY) const
081dccf8 +0x33e:  mov    %eax,-0x20(%ebp)
081dccfb +0x341:  cmpl   $0xffffffff,-0x20(%ebp)
081dccff +0x345:  jne    081dcd26 <+0x36c>
081dcd01 +0x347:  movl   $0x11,0x8(%esp)
081dcd09 +0x34f:  movl   $0x1b6,0x4(%esp)
081dcd11 +0x357:  mov    0xc(%ebp),%eax
081dcd14 +0x35a:  mov    %eax,(%esp)
081dcd17 +0x35d:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081dcd1c +0x362:  mov    $0x0,%ebx
081dcd21 +0x367:  jmp    081dd1d4 <+0x81a>
081dcd26 +0x36c:  mov    -0x34(%ebp),%eax
081dcd29 +0x36f:  movw   $0xffff,0x10(%eax)
081dcd2f +0x375:  mov    -0x34(%ebp),%eax
081dcd32 +0x378:  movzwl 0x10(%eax),%eax
081dcd36 +0x37c:  cmp    $0xffff,%ax
081dcd3a +0x380:  je     081dcd9b <+0x3e1>
081dcd3c +0x382:  mov    -0x34(%ebp),%eax
081dcd3f +0x385:  movzwl 0x10(%eax),%eax
081dcd43 +0x389:  movzwl %ax,%ebx
081dcd46 +0x38c:  mov    0xc(%ebp),%eax
081dcd49 +0x38f:  mov    %eax,(%esp)
081dcd4c +0x392:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
081dcd51 +0x397:  lea    -0x7d(%ebp),%edx
081dcd54 +0x39a:  mov    %ebx,0xc(%esp)
081dcd58 +0x39e:  movl   $0x1,0x8(%esp)
081dcd60 +0x3a6:  mov    %eax,0x4(%esp)
081dcd64 +0x3aa:  mov    %edx,(%esp)
081dcd67 +0x3ad:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
081dcd6c +0x3b2:  sub    $0x4,%esp
081dcd6f +0x3b5:  mov    -0x76(%ebp),%eax
081dcd72 +0x3b8:  test   %eax,%eax
081dcd74 +0x3ba:  jg     081dcddd <+0x423>
081dcd76 +0x3bc:  movl   $0x16,0x8(%esp)
081dcd7e +0x3c4:  movl   $0x1b6,0x4(%esp)
081dcd86 +0x3cc:  mov    0xc(%ebp),%eax
081dcd89 +0x3cf:  mov    %eax,(%esp)
081dcd8c +0x3d2:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081dcd91 +0x3d7:  mov    $0x0,%ebx
081dcd96 +0x3dc:  jmp    081dd1d4 <+0x81a>
081dcd9b +0x3e1:  mov    0xc(%ebp),%eax
081dcd9e +0x3e4:  mov    %eax,(%esp)
081dcda1 +0x3e7:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
081dcda6 +0x3ec:  mov    %eax,(%esp)
081dcda9 +0x3ef:  call   081347d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x3dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x3dd
081dcdae +0x3f4:  cmp    -0x20(%ebp),%eax
081dcdb1 +0x3f7:  setl   %al
081dcdb4 +0x3fa:  test   %al,%al
081dcdb6 +0x3fc:  je     081dcddd <+0x423>
081dcdb8 +0x3fe:  movl   $0xa,0x8(%esp)
081dcdc0 +0x406:  movl   $0x1b6,0x4(%esp)
081dcdc8 +0x40e:  mov    0xc(%ebp),%eax
081dcdcb +0x411:  mov    %eax,(%esp)
081dcdce +0x414:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081dcdd3 +0x419:  mov    $0x0,%ebx
081dcdd8 +0x41e:  jmp    081dd1d4 <+0x81a>
081dcddd +0x423:  mov    $&_ZGVZN29Dispatcher_ChangeRandomOption7processEP5CUserR8MSG_BASER9ParamBaseE6handle,%eax
081dcde2 +0x428:  movzbl (%eax),%eax
081dcde5 +0x42b:  test   %al,%al
081dcde7 +0x42d:  jne    081dce5a <+0x4a0>
081dcde9 +0x42f:  movl   $&_ZGVZN29Dispatcher_ChangeRandomOption7processEP5CUserR8MSG_BASER9ParamBaseE6handle,(%esp)
081dcdf0 +0x436:  call   08725330 <__cxa_guard_acquire>
081dcdf5 +0x43b:  test   %eax,%eax
081dcdf7 +0x43d:  setne  %al
081dcdfa +0x440:  test   %al,%al
081dcdfc +0x442:  je     081dce5a <+0x4a0>
081dcdfe +0x444:  mov    $0x0,%ebx
081dce03 +0x449:  movl   $&_ZZN29Dispatcher_ChangeRandomOption7processEP5CUserR8MSG_BASER9ParamBaseE6handle,(%esp)
081dce0a +0x450:  call   085f0d64 <_ZN13random_option23CRandomOptionItemHandleC1Ev>  ; random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()
081dce0f +0x455:  movl   $&_ZGVZN29Dispatcher_ChangeRandomOption7processEP5CUserR8MSG_BASER9ParamBaseE6handle,(%esp)
081dce16 +0x45c:  call   08725250 <__cxa_guard_release>
081dce1b +0x461:  mov    $&_ZN13random_option23CRandomOptionItemHandleD1Ev,%eax
081dce20 +0x466:  movl   $&__dso_handle,0x8(%esp)
081dce28 +0x46e:  movl   $&_ZZN29Dispatcher_ChangeRandomOption7processEP5CUserR8MSG_BASER9ParamBaseE6handle,0x4(%esp)
081dce30 +0x476:  mov    %eax,(%esp)
081dce33 +0x479:  call   0807ddd0 <_init+0x6c8>
081dce38 +0x47e:  jmp    081dce5a <+0x4a0>
081dce3a +0x480:  mov    %edx,%esi
081dce3c +0x482:  mov    %eax,%edi
081dce3e +0x484:  test   %bl,%bl
081dce40 +0x486:  jne    081dce4e <+0x494>
081dce42 +0x488:  movl   $&_ZGVZN29Dispatcher_ChangeRandomOption7processEP5CUserR8MSG_BASER9ParamBaseE6handle,(%esp)
081dce49 +0x48f:  call   087252c0 <__cxa_guard_abort>
081dce4e +0x494:  mov    %edi,%eax
081dce50 +0x496:  mov    %esi,%edx
081dce52 +0x498:  mov    %eax,(%esp)
081dce55 +0x49b:  call   08ae3750 <_Unwind_Resume>
081dce5a +0x4a0:  call   085f0eb0 <_ZN13random_option15GetRandomOptionEv>  ; random_option::GetRandomOption()
081dce5f +0x4a5:  add    $0x154,%eax
081dce64 +0x4aa:  mov    %eax,0x4(%esp)
081dce68 +0x4ae:  movl   $&_ZZN29Dispatcher_ChangeRandomOption7processEP5CUserR8MSG_BASER9ParamBaseE6handle,(%esp)
081dce6f +0x4b5:  call   085f0ea2 <_ZN13random_option23CRandomOptionItemHandle22set_random_option_giveEP17CRandomOptionGive>  ; random_option::CRandomOptionItemHandle::set_random_option_give(CRandomOptionGive*)
081dce74 +0x4ba:  mov    -0x30(%ebp),%eax
081dce77 +0x4bd:  add    $0x25,%eax
081dce7a +0x4c0:  mov    %eax,-0x8c(%ebp)
081dce80 +0x4c6:  mov    -0x2c(%ebp),%eax
081dce83 +0x4c9:  mov    (%eax),%eax
081dce85 +0x4cb:  add    $0x50,%eax
081dce88 +0x4ce:  mov    (%eax),%edx
081dce8a +0x4d0:  mov    -0x2c(%ebp),%eax
081dce8d +0x4d3:  mov    %eax,(%esp)
081dce90 +0x4d6:  call   *%edx
081dce92 +0x4d8:  mov    %eax,%edi
081dce94 +0x4da:  mov    -0x2c(%ebp),%eax
081dce97 +0x4dd:  mov    %eax,(%esp)
081dce9a +0x4e0:  call   080f1312 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x394>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x394
081dce9f +0x4e5:  mov    %eax,%esi
081dcea1 +0x4e7:  mov    -0x2c(%ebp),%eax
081dcea4 +0x4ea:  mov    %eax,(%esp)
081dcea7 +0x4ed:  call   080f12ee <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x370>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x370
081dceac +0x4f2:  mov    %eax,%ebx
081dceae +0x4f4:  mov    -0x2c(%ebp),%eax
081dceb1 +0x4f7:  mov    %eax,(%esp)
081dceb4 +0x4fa:  call   080f12d6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x358>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x358
081dceb9 +0x4ff:  mov    -0x30(%ebp),%edx
081dcebc +0x502:  mov    0x2(%edx),%edx
081dcebf +0x505:  mov    -0x8c(%ebp),%ecx
081dcec5 +0x50b:  mov    %ecx,0x1c(%esp)
081dcec9 +0x50f:  mov    -0x24(%ebp),%ecx
081dcecc +0x512:  mov    %ecx,0x18(%esp)
081dced0 +0x516:  mov    %edi,0x14(%esp)
081dced4 +0x51a:  mov    %esi,0x10(%esp)
081dced8 +0x51e:  mov    %ebx,0xc(%esp)
081dcedc +0x522:  mov    %eax,0x8(%esp)
081dcee0 +0x526:  mov    %edx,0x4(%esp)
081dcee4 +0x52a:  movl   $&_ZZN29Dispatcher_ChangeRandomOption7processEP5CUserR8MSG_BASER9ParamBaseE6handle,(%esp)
081dceeb +0x531:  call   085f3340 <_ZN13random_option23CRandomOptionItemHandle13change_optionEm11ENUM_RARITYiiiiP12RandomOption>  ; random_option::CRandomOptionItemHandle::change_option(unsigned long, ENUM_RARITY, int, int, int, int, RandomOption*)
081dcef0 +0x536:  xor    $0x1,%eax
081dcef3 +0x539:  test   %al,%al
081dcef5 +0x53b:  je     081dcf1c <+0x562>
081dcef7 +0x53d:  movl   $0x13,0x8(%esp)
081dceff +0x545:  movl   $0x1b6,0x4(%esp)
081dcf07 +0x54d:  mov    0xc(%ebp),%eax
081dcf0a +0x550:  mov    %eax,(%esp)
081dcf0d +0x553:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081dcf12 +0x558:  mov    $0x0,%ebx
081dcf17 +0x55d:  jmp    081dd1d4 <+0x81a>
081dcf1c +0x562:  mov    0xc(%ebp),%eax
081dcf1f +0x565:  lea    0x79700(%eax),%edx
081dcf25 +0x56b:  movl   $0x2,0x8(%esp)
081dcf2d +0x573:  mov    -0x30(%ebp),%eax
081dcf30 +0x576:  mov    %eax,0x4(%esp)
081dcf34 +0x57a:  mov    %edx,(%esp)
081dcf37 +0x57d:  call   08682d3a <_ZN15cUserHistoryLog12RandomOptionERK10Inven_ItemN18randomOptionReason1TE>  ; cUserHistoryLog::RandomOption(Inven_Item const&, randomOptionReason::T)
081dcf3c +0x582:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
081dcf43 +0x589:  call   0823445e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9b08>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9b08
081dcf48 +0x58e:  mov    %eax,%ebx
081dcf4a +0x590:  mov    0xc(%ebp),%eax
081dcf4d +0x593:  mov    %eax,(%esp)
081dcf50 +0x596:  call   0822f3a0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4a4a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4a4a
081dcf55 +0x59b:  mov    %ebx,0x18(%esp)
081dcf59 +0x59f:  mov    %eax,0x14(%esp)
081dcf5d +0x5a3:  movl   $"%d,'%s'",0x10(%esp)
081dcf65 +0x5ab:  movl   $0x1,0xc(%esp)
081dcf6d +0x5b3:  movl   $"change_cnt",0x8(%esp)
081dcf75 +0x5bb:  movl   $"log_random_option",0x4(%esp)
081dcf7d +0x5c3:  mov    0xc(%ebp),%eax
081dcf80 +0x5c6:  mov    %eax,(%esp)
081dcf83 +0x5c9:  call   0860fdd2 <_ZN14statistc_proxy3addEP5CUserPKcS3_jS3_z>  ; statistc_proxy::add(CUser*, char const*, char const*, unsigned int, char const*, ...)
081dcf88 +0x5ce:  mov    -0x34(%ebp),%eax
081dcf8b +0x5d1:  movw   $0xffff,0x10(%eax)
081dcf91 +0x5d7:  mov    -0x34(%ebp),%eax
081dcf94 +0x5da:  movzwl 0x10(%eax),%eax
081dcf98 +0x5de:  cmp    $0xffff,%ax
081dcf9c +0x5e2:  je     081dd02f <+0x675>
081dcfa2 +0x5e8:  mov    -0x34(%ebp),%eax
081dcfa5 +0x5eb:  movzwl 0x10(%eax),%eax
081dcfa9 +0x5ef:  movzwl %ax,%ebx
081dcfac +0x5f2:  mov    0xc(%ebp),%eax
081dcfaf +0x5f5:  mov    %eax,(%esp)
081dcfb2 +0x5f8:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
081dcfb7 +0x5fd:  movl   $0x1,0xc(%esp)
081dcfbf +0x605:  movl   $0x1,0x8(%esp)
081dcfc7 +0x60d:  mov    %ebx,0x4(%esp)
081dcfcb +0x611:  mov    %eax,(%esp)
081dcfce +0x614:  call   084ff8de <_ZN10CInventory8use_itemEiii>  ; CInventory::use_item(int, int, int)
081dcfd3 +0x619:  test   %eax,%eax
081dcfd5 +0x61b:  setne  %al
081dcfd8 +0x61e:  test   %al,%al
081dcfda +0x620:  je     081dd001 <+0x647>
081dcfdc +0x622:  movl   $0x16,0x8(%esp)
081dcfe4 +0x62a:  movl   $0x1b6,0x4(%esp)
081dcfec +0x632:  mov    0xc(%ebp),%eax
081dcfef +0x635:  mov    %eax,(%esp)
081dcff2 +0x638:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081dcff7 +0x63d:  mov    $0x0,%ebx
081dcffc +0x642:  jmp    081dd1d4 <+0x81a>
081dd001 +0x647:  mov    -0x34(%ebp),%eax
081dd004 +0x64a:  movzwl 0x10(%eax),%eax
081dd008 +0x64e:  movzwl %ax,%eax
081dd00b +0x651:  mov    %eax,0xc(%esp)
081dd00f +0x655:  movl   $0x0,0x8(%esp)
081dd017 +0x65d:  movl   $0x1,0x4(%esp)
081dd01f +0x665:  mov    0xc(%ebp),%eax
081dd022 +0x668:  mov    %eax,(%esp)
081dd025 +0x66b:  call   0867c2d8 <_ZN5CUser14SendUpdateItemENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItem(CUser::eSendTarget, ENUM_ITEMSPACE, int)
081dd02a +0x670:  jmp    081dd0d0 <+0x716>
081dd02f +0x675:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
081dd036 +0x67c:  call   0823445e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9b08>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9b08
081dd03b +0x681:  mov    %eax,%ebx
081dd03d +0x683:  mov    0xc(%ebp),%eax
081dd040 +0x686:  mov    %eax,(%esp)
081dd043 +0x689:  call   0822f3a0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4a4a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4a4a
081dd048 +0x68e:  mov    -0x20(%ebp),%edx
081dd04b +0x691:  mov    %ebx,0x18(%esp)
081dd04f +0x695:  mov    %eax,0x14(%esp)
081dd053 +0x699:  movl   $"%d,'%s'",0x10(%esp)
081dd05b +0x6a1:  mov    %edx,0xc(%esp)
081dd05f +0x6a5:  movl   $"change_gold",0x8(%esp)
081dd067 +0x6ad:  movl   $"log_random_option",0x4(%esp)
081dd06f +0x6b5:  mov    0xc(%ebp),%eax
081dd072 +0x6b8:  mov    %eax,(%esp)
081dd075 +0x6bb:  call   0860fdd2 <_ZN14statistc_proxy3addEP5CUserPKcS3_jS3_z>  ; statistc_proxy::add(CUser*, char const*, char const*, unsigned int, char const*, ...)
081dd07a +0x6c0:  mov    0xc(%ebp),%eax
081dd07d +0x6c3:  mov    %eax,(%esp)
081dd080 +0x6c6:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
081dd085 +0x6cb:  movl   $0x1,0xc(%esp)
081dd08d +0x6d3:  movl   $0x2c,0x8(%esp)
081dd095 +0x6db:  mov    -0x20(%ebp),%edx
081dd098 +0x6de:  mov    %edx,0x4(%esp)
081dd09c +0x6e2:  mov    %eax,(%esp)
081dd09f +0x6e5:  call   084ff54c <_ZN10CInventory9use_moneyEi15eMoneySubReasonb>  ; CInventory::use_money(int, eMoneySubReason, bool)
081dd0a4 +0x6ea:  xor    $0x1,%eax
081dd0a7 +0x6ed:  test   %al,%al
081dd0a9 +0x6ef:  je     081dd0d0 <+0x716>
081dd0ab +0x6f1:  movl   $0xa,0x8(%esp)
081dd0b3 +0x6f9:  movl   $0x1b6,0x4(%esp)
081dd0bb +0x701:  mov    0xc(%ebp),%eax
081dd0be +0x704:  mov    %eax,(%esp)
081dd0c1 +0x707:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081dd0c6 +0x70c:  mov    $0x0,%ebx
081dd0cb +0x711:  jmp    081dd1d4 <+0x81a>
081dd0d0 +0x716:  movl   $0x0,0xc(%esp)
081dd0d8 +0x71e:  movl   $0x0,0x8(%esp)
081dd0e0 +0x726:  movl   $0x1,0x4(%esp)
081dd0e8 +0x72e:  mov    0xc(%ebp),%eax
081dd0eb +0x731:  mov    %eax,(%esp)
081dd0ee +0x734:  call   0867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItemList(CUser::eSendTarget, ENUM_ITEMSPACE, int)
081dd0f3 +0x739:  lea    -0x40(%ebp),%eax
081dd0f6 +0x73c:  mov    %eax,(%esp)
081dd0f9 +0x73f:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081dd0fe +0x744:  movl   $0xe,0x8(%esp)
081dd106 +0x74c:  movl   $0x0,0x4(%esp)
081dd10e +0x754:  lea    -0x40(%ebp),%eax
081dd111 +0x757:  mov    %eax,(%esp)
081dd114 +0x75a:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081dd119 +0x75f:  movl   $0x0,0x4(%esp)
081dd121 +0x767:  lea    -0x40(%ebp),%eax
081dd124 +0x76a:  mov    %eax,(%esp)
081dd127 +0x76d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081dd12c +0x772:  movl   $0x1,0x4(%esp)
081dd134 +0x77a:  lea    -0x40(%ebp),%eax
081dd137 +0x77d:  mov    %eax,(%esp)
081dd13a +0x780:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
081dd13f +0x785:  mov    -0x34(%ebp),%eax
081dd142 +0x788:  movzwl 0xe(%eax),%eax
081dd146 +0x78c:  movzwl %ax,%ebx
081dd149 +0x78f:  mov    0xc(%ebp),%eax
081dd14c +0x792:  mov    %eax,(%esp)
081dd14f +0x795:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
081dd154 +0x79a:  lea    -0x40(%ebp),%edx
081dd157 +0x79d:  mov    %edx,0xc(%esp)
081dd15b +0x7a1:  mov    %ebx,0x8(%esp)
081dd15f +0x7a5:  movl   $0x1,0x4(%esp)
081dd167 +0x7ad:  mov    %eax,(%esp)
081dd16a +0x7b0:  call   084fc6bc <_ZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuard>  ; CInventory::MakeItemPacket(INVEN_TYPE, int, PacketGuard&) const
081dd16f +0x7b5:  movl   $0x1,0x4(%esp)
081dd177 +0x7bd:  lea    -0x40(%ebp),%eax
081dd17a +0x7c0:  mov    %eax,(%esp)
081dd17d +0x7c3:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081dd182 +0x7c8:  lea    -0x40(%ebp),%eax
081dd185 +0x7cb:  mov    %eax,0x4(%esp)
081dd189 +0x7cf:  mov    0xc(%ebp),%eax
081dd18c +0x7d2:  mov    %eax,(%esp)
081dd18f +0x7d5:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081dd194 +0x7da:  movl   $0x1b6,0x4(%esp)
081dd19c +0x7e2:  mov    0xc(%ebp),%eax
081dd19f +0x7e5:  mov    %eax,(%esp)
081dd1a2 +0x7e8:  call   0867bea0 <_ZN5CUser15SendCmdOkPacketE14ENUM_CMDPACKET>  ; CUser::SendCmdOkPacket(ENUM_CMDPACKET)
081dd1a7 +0x7ed:  mov    $0x0,%ebx
081dd1ac +0x7f2:  lea    -0x40(%ebp),%eax
081dd1af +0x7f5:  mov    %eax,(%esp)
081dd1b2 +0x7f8:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081dd1b7 +0x7fd:  jmp    081dd1d4 <+0x81a>
081dd1b9 +0x7ff:  mov    %edx,%ebx
081dd1bb +0x801:  mov    %eax,%esi
081dd1bd +0x803:  lea    -0x40(%ebp),%eax
081dd1c0 +0x806:  mov    %eax,(%esp)
081dd1c3 +0x809:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081dd1c8 +0x80e:  mov    %esi,%eax
081dd1ca +0x810:  mov    %ebx,%edx
081dd1cc +0x812:  mov    %eax,(%esp)
081dd1cf +0x815:  call   08ae3750 <_Unwind_Resume>
081dd1d4 +0x81a:  mov    %ebx,%eax
081dd1d6 +0x81c:  lea    -0xc(%ebp),%esp
081dd1d9 +0x81f:  add    $0x0,%esp
081dd1dc +0x822:  pop    %ebx
081dd1dd +0x823:  pop    %esi
081dd1de +0x824:  pop    %edi
081dd1df +0x825:  pop    %ebp
081dd1e0 +0x826:  ret
081dd1e1 +0x827:  nop
```

## 反编译 C

```c
// Dispatcher_ChangeRandomOption::process @ 0x81dc9ba

/* Dispatcher_ChangeRandomOption::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4
Dispatcher_ChangeRandomOption::process(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  ushort uVar1;
  undefined2 uVar2;
  bool bVar3;
  char cVar4;
  short sVar5;
  int iVar6;
  CInventory *pCVar7;
  CDataManager *this;
  ServiceRestrictManager *pSVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  uint uVar14;
  undefined1 local_81 [7];
  int local_7a;
  PacketGuard local_44 [12];
  ParamBase *local_38;
  int local_34;
  CItem *local_30;
  ParamBase local_29;
  uint local_28;
  uint local_24;
  uint local_20;
  
  local_38 = param_3;
  iVar6 = CUser::get_state((CUser *)param_2);
  if ((iVar6 < 3) ||
     (iVar6 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2), iVar6 == 0)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if ((!bVar3) && (cVar4 = CUser::CheckInTrade((CUser *)param_2), cVar4 == '\0')) {
    cVar4 = CUser::CheckItemLock((CUser *)param_2,1,(uint)*(ushort *)(local_38 + 0xe));
    if (cVar4 == '\0') {
      uVar1 = *(ushort *)(local_38 + 0xe);
      pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
      local_34 = CInventory::GetInvenRef(pCVar7,1,(uint)uVar1);
      if (local_34 == 0) {
        CUser::SendCmdErrorPacket((CUser *)param_2,0x1b6,0x11);
      }
      else {
        iVar6 = *(int *)(local_34 + 2);
        this = (CDataManager *)G_CDataManager();
        local_30 = (CItem *)CDataManager::find_item(this,iVar6);
        if (local_30 == (CItem *)0x0) {
          CUser::SendCmdErrorPacket((CUser *)param_2,0x1b6,0x11);
        }
        else {
          local_29 = local_38[0x12];
          if (*(char *)(local_34 + (uint)(byte)local_29 * 3 + 0x25) == '\0') {
            CUser::SendCmdErrorPacket((CUser *)param_2,0x1b6,0x11);
          }
          else {
            pSVar8 = (ServiceRestrictManager *)ARAD::Singleton<ServiceRestrictManager>::Get();
            uVar14 = 0xf;
            cVar4 = ServiceRestrictManager::isRestricted(pSVar8,param_2,1,0xf);
            if (cVar4 == '\0') {
              local_20 = CSecu_ProtectionField::Check
                                   (GlobalData::s_pSecuProtectionField,param_2,0x25);
              if (local_20 == 0) {
                cVar4 = RandomOption::empty((RandomOption *)(local_34 + 0x25));
                if (cVar4 == '\0') {
                  local_28 = (uint)(byte)local_38[0x12];
                  if (local_28 < 3) {
                    cVar4 = RandomOptionField::empty((RandomOptionField *)(local_34 + 0x2f));
                    if ((cVar4 == '\x01') ||
                       ((uint)(*(byte *)(local_34 + 0x32) & 3) == (local_28 & 0xff))) {
                      bVar3 = false;
                    }
                    else {
                      bVar3 = true;
                    }
                    if (bVar3) {
                      CUser::SendCmdErrorPacket((CUser *)param_2,0x1b6,4);
                    }
                    else {
                      uVar9 = CItem::get_rarity(local_30);
                      sVar5 = CItem::getUsableLevel(local_30);
                      iVar13 = (int)sVar5;
                      iVar6 = G_CDataManager();
                      local_24 = RandomOptionScript::getOptionModificationCost
                                           ((RandomOptionScript *)(iVar6 + 0x4e10),iVar13,uVar9);
                      if (local_24 == 0xffffffff) {
                        CUser::SendCmdErrorPacket((CUser *)param_2,0x1b6,0x11);
                      }
                      else {
                        *(undefined2 *)(local_38 + 0x10) = 0xffff;
                        if (*(short *)(local_38 + 0x10) == -1) {
                          pCVar7 = (CInventory *)
                                   CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_2);
                          iVar6 = CInventory::get_money(pCVar7);
                          if (iVar6 < (int)local_24) {
                            CUser::SendCmdErrorPacket((CUser *)param_2,0x1b6,10);
                            return 0;
                          }
                        }
                        else {
                          uVar14 = (uint)*(ushort *)(local_38 + 0x10);
                          iVar13 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_2);
                          uVar9 = 1;
                          CInventory::GetInvenSlot((int)local_81,iVar13);
                          if (local_7a < 1) {
                            CUser::SendCmdErrorPacket((CUser *)param_2,0x1b6,0x16);
                            return 0;
                          }
                        }
                        if ((process(CUser*,MSG_BASE&,ParamBase&)::handle == '\0') &&
                           (iVar6 = __cxa_guard_acquire(&process(CUser*,MSG_BASE&,ParamBase&)::
                                                         handle,iVar13,uVar9,uVar14), iVar6 != 0)) {
                    /* try { // try from 081dce0a to 081dce0e has its CatchHandler @ 081dce3a */
                          random_option::CRandomOptionItemHandle::CRandomOptionItemHandle
                                    ((CRandomOptionItemHandle *)
                                     process(CUser*,MSG_BASE&,ParamBase&)::handle);
                          __cxa_guard_release(&process(CUser*,MSG_BASE&,ParamBase&)::handle);
                          __cxa_atexit(random_option::CRandomOptionItemHandle::
                                       ~CRandomOptionItemHandle,
                                       process(CUser*,MSG_BASE&,ParamBase&)::handle,&__dso_handle);
                        }
                        iVar6 = random_option::GetRandomOption();
                        random_option::CRandomOptionItemHandle::set_random_option_give
                                  ((CRandomOptionItemHandle *)
                                   process(CUser*,MSG_BASE&,ParamBase&)::handle,
                                   (CRandomOptionGive *)(iVar6 + 0x154));
                        iVar6 = local_34 + 0x25;
                        uVar9 = (**(code **)(*(int *)local_30 + 0x50))(local_30);
                        uVar10 = CItem::getItemGroupName(local_30);
                        uVar11 = CItem::getUsableLevel(local_30);
                        uVar12 = CItem::get_rarity(local_30);
                        cVar4 = random_option::CRandomOptionItemHandle::change_option
                                          ((CRandomOptionItemHandle *)
                                           process(CUser*,MSG_BASE&,ParamBase&)::handle,
                                           *(undefined4 *)(local_34 + 2),uVar12,uVar11,uVar10,uVar9,
                                           local_28,iVar6);
                        if (cVar4 == '\x01') {
                          cUserHistoryLog::RandomOption
                                    ((cUserHistoryLog *)(param_2 + 0x79700),local_34,2);
                          uVar9 = CSystemTime::getCurDate((CSystemTime *)GlobalData::s_systemTime_);
                          uVar10 = CUserCharacInfo::get_charac_10_level_section
                                             ((CUserCharacInfo *)param_2);
                          statistc_proxy::add((CUser *)param_2,"log_random_option","change_cnt",1,
                                              "%d,\'%s\'",uVar10,uVar9);
                          *(undefined2 *)(local_38 + 0x10) = 0xffff;
                          if (*(short *)(local_38 + 0x10) == -1) {
                            uVar9 = CSystemTime::getCurDate
                                              ((CSystemTime *)GlobalData::s_systemTime_);
                            uVar10 = CUserCharacInfo::get_charac_10_level_section
                                               ((CUserCharacInfo *)param_2);
                            statistc_proxy::add((CUser *)param_2,"log_random_option","change_gold",
                                                local_24,"%d,\'%s\'",uVar10,uVar9);
                            pCVar7 = (CInventory *)
                                     CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2)
                            ;
                            cVar4 = CInventory::use_money(pCVar7,local_24,0x2c,1);
                            if (cVar4 != '\x01') {
                              CUser::SendCmdErrorPacket((CUser *)param_2,0x1b6,10);
                              return 0;
                            }
                          }
                          else {
                            uVar1 = *(ushort *)(local_38 + 0x10);
                            pCVar7 = (CInventory *)
                                     CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2)
                            ;
                            iVar6 = CInventory::use_item(pCVar7,(uint)uVar1,1,1);
                            if (iVar6 != 0) {
                              CUser::SendCmdErrorPacket((CUser *)param_2,0x1b6,0x16);
                              return 0;
                            }
                            CUser::SendUpdateItem
                                      ((CUser *)param_2,1,0,*(undefined2 *)(local_38 + 0x10));
                          }
                          CUser::SendUpdateItemList((CUser *)param_2,1,0,0);
                          PacketGuard::PacketGuard(local_44);
                    /* try { // try from 081dd114 to 081dd1a6 has its CatchHandler @ 081dd1b9 */
                          InterfacePacketBuf::put_header((InterfacePacketBuf *)local_44,0,0xe);
                          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_44,0);
                          InterfacePacketBuf::put_short((InterfacePacketBuf *)local_44,1);
                          uVar2 = *(undefined2 *)(local_38 + 0xe);
                          pCVar7 = (CInventory *)
                                   CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_2);
                          CInventory::MakeItemPacket(pCVar7,1,uVar2,local_44);
                          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_44,true);
                          CUser::Send((CUser *)param_2,local_44);
                          CUser::SendCmdOkPacket((CUser *)param_2,0x1b6);
                          PacketGuard::~PacketGuard(local_44);
                        }
                        else {
                          CUser::SendCmdErrorPacket((CUser *)param_2,0x1b6,0x13);
                        }
                      }
                    }
                  }
                  else {
                    CUser::SendCmdErrorPacket((CUser *)param_2,0x1b6,0x13);
                  }
                }
                else {
                  CUser::SendCmdErrorPacket((CUser *)param_2,0x1b6,0x13);
                }
              }
              else {
                CUser::SendCmdErrorPacket((CUser *)param_2,0x1b6,local_20 & 0xff);
              }
            }
            else {
              CUser::SendCmdErrorPacket((CUser *)param_2,0x1b6,0xd1);
            }
          }
        }
      }
    }
    else {
      CUser::SendCmdErrorPacket((CUser *)param_2,0x1b6,0xd5);
    }
  }
  return 0;
}
```
