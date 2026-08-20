# dispatch_sig

`_ZN26Dispatcher_ChangeGuildName12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_ChangeGuildName::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_ChangeGuildName` | `0x082134a8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082134a8  _ZN26Dispatcher_ChangeGuildName12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_ChangeGuildName::dispatch_sig(CUser*, PacketBuf&)
# range [0x082134a8, 0x082138f1]
082134a8 +0x000:  push   %ebp
082134a9 +0x001:  mov    %esp,%ebp
082134ab +0x003:  push   %edi
082134ac +0x004:  push   %esi
082134ad +0x005:  push   %ebx
082134ae +0x006:  sub    $0x8c,%esp
082134b4 +0x00c:  mov    0xc(%ebp),%eax
082134b7 +0x00f:  mov    %eax,(%esp)
082134ba +0x012:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
082134bf +0x017:  cmp    $0x2,%eax
082134c2 +0x01a:  jle    082134d3 <+0x2b>
082134c4 +0x01c:  mov    0xc(%ebp),%eax
082134c7 +0x01f:  mov    %eax,(%esp)
082134ca +0x022:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
082134cf +0x027:  test   %eax,%eax
082134d1 +0x029:  jne    082134da <+0x32>
082134d3 +0x02b:  mov    $0x1,%eax
082134d8 +0x030:  jmp    082134df <+0x37>
082134da +0x032:  mov    $0x0,%eax
082134df +0x037:  test   %al,%al
082134e1 +0x039:  je     0821350e <+0x66>
082134e3 +0x03b:  movl   $0x0,0xc(%esp)
082134eb +0x043:  movl   $0x0,0x8(%esp)
082134f3 +0x04b:  movl   $&_ZZN26Dispatcher_ChangeGuildName12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082134fb +0x053:  movl   $0xc15f,(%esp)
08213502 +0x05a:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08213507 +0x05f:  mov    %eax,%ebx
08213509 +0x061:  jmp    082138e5 <+0x43d>
0821350e +0x066:  lea    -0x1e(%ebp),%eax
08213511 +0x069:  mov    %eax,0x4(%esp)
08213515 +0x06d:  mov    0x10(%ebp),%eax
08213518 +0x070:  mov    %eax,(%esp)
0821351b +0x073:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
08213520 +0x078:  xor    $0x1,%eax
08213523 +0x07b:  test   %al,%al
08213525 +0x07d:  je     08213552 <+0xaa>
08213527 +0x07f:  movl   $0x0,0xc(%esp)
0821352f +0x087:  movl   $0x0,0x8(%esp)
08213537 +0x08f:  movl   $&_ZZN26Dispatcher_ChangeGuildName12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821353f +0x097:  movl   $0xc163,(%esp)
08213546 +0x09e:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821354b +0x0a3:  mov    %eax,%ebx
0821354d +0x0a5:  jmp    082138e5 <+0x43d>
08213552 +0x0aa:  lea    -0x1f(%ebp),%eax
08213555 +0x0ad:  mov    %eax,0x4(%esp)
08213559 +0x0b1:  mov    0x10(%ebp),%eax
0821355c +0x0b4:  mov    %eax,(%esp)
0821355f +0x0b7:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
08213564 +0x0bc:  xor    $0x1,%eax
08213567 +0x0bf:  test   %al,%al
08213569 +0x0c1:  je     08213596 <+0xee>
0821356b +0x0c3:  movl   $0x0,0xc(%esp)
08213573 +0x0cb:  movl   $0x0,0x8(%esp)
0821357b +0x0d3:  movl   $&_ZZN26Dispatcher_ChangeGuildName12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08213583 +0x0db:  movl   $0xc166,(%esp)
0821358a +0x0e2:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821358f +0x0e7:  mov    %eax,%ebx
08213591 +0x0e9:  jmp    082138e5 <+0x43d>
08213596 +0x0ee:  mov    0xc(%ebp),%eax
08213599 +0x0f1:  mov    %eax,(%esp)
0821359c +0x0f4:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
082135a1 +0x0f9:  test   %eax,%eax
082135a3 +0x0fb:  sete   %al
082135a6 +0x0fe:  test   %al,%al
082135a8 +0x100:  je     082135cf <+0x127>
082135aa +0x102:  movl   $0x64,0x8(%esp)
082135b2 +0x10a:  movl   $0xb6,0x4(%esp)
082135ba +0x112:  mov    0xc(%ebp),%eax
082135bd +0x115:  mov    %eax,(%esp)
082135c0 +0x118:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
082135c5 +0x11d:  mov    $0x0,%ebx
082135ca +0x122:  jmp    082138e5 <+0x43d>
082135cf +0x127:  mov    0xc(%ebp),%eax
082135d2 +0x12a:  movl   $0x2,0x4(%esp)
082135da +0x132:  mov    %eax,(%esp)
082135dd +0x135:  call   0866c0da <_ZN15CUserCharacInfo20isSetGuildCreateFlagEt>  ; CUserCharacInfo::isSetGuildCreateFlag(unsigned short)
082135e2 +0x13a:  xor    $0x1,%eax
082135e5 +0x13d:  test   %al,%al
082135e7 +0x13f:  je     0821360e <+0x166>
082135e9 +0x141:  movl   $0x6d,0x8(%esp)
082135f1 +0x149:  movl   $0xb6,0x4(%esp)
082135f9 +0x151:  mov    0xc(%ebp),%eax
082135fc +0x154:  mov    %eax,(%esp)
082135ff +0x157:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08213604 +0x15c:  mov    $0x0,%ebx
08213609 +0x161:  jmp    082138e5 <+0x43d>
0821360e +0x166:  mov    0xc(%ebp),%eax
08213611 +0x169:  mov    %eax,(%esp)
08213614 +0x16c:  call   08230172 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x581c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x581c
08213619 +0x171:  xor    $0x1,%eax
0821361c +0x174:  test   %al,%al
0821361e +0x176:  je     08213645 <+0x19d>
08213620 +0x178:  movl   $0x56,0x8(%esp)
08213628 +0x180:  movl   $0xb6,0x4(%esp)
08213630 +0x188:  mov    0xc(%ebp),%eax
08213633 +0x18b:  mov    %eax,(%esp)
08213636 +0x18e:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0821363b +0x193:  mov    $0x0,%ebx
08213640 +0x198:  jmp    082138e5 <+0x43d>
08213645 +0x19d:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%eax
0821364a +0x1a2:  movl   $0xf,0x8(%esp)
08213652 +0x1aa:  mov    0xc(%ebp),%edx
08213655 +0x1ad:  mov    %edx,0x4(%esp)
08213659 +0x1b1:  mov    %eax,(%esp)
0821365c +0x1b4:  call   08288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>  ; CSecu_ProtectionField::Check(CUser*, SECURITY_PROTCTION)
08213661 +0x1b9:  mov    %eax,-0x1c(%ebp)
08213664 +0x1bc:  cmpl   $0x0,-0x1c(%ebp)
08213668 +0x1c0:  je     08213691 <+0x1e9>
0821366a +0x1c2:  mov    -0x1c(%ebp),%eax
0821366d +0x1c5:  movzbl %al,%eax
08213670 +0x1c8:  mov    %eax,0x8(%esp)
08213674 +0x1cc:  movl   $0xb6,0x4(%esp)
0821367c +0x1d4:  mov    0xc(%ebp),%eax
0821367f +0x1d7:  mov    %eax,(%esp)
08213682 +0x1da:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08213687 +0x1df:  mov    $0x0,%ebx
0821368c +0x1e4:  jmp    082138e5 <+0x43d>
08213691 +0x1e9:  movzwl -0x1e(%ebp),%eax
08213695 +0x1ed:  movzwl %ax,%ebx
08213698 +0x1f0:  movzbl -0x1f(%ebp),%eax
0821369c +0x1f4:  movzbl %al,%eax
0821369f +0x1f7:  mov    %eax,(%esp)
082136a2 +0x1fa:  call   080f7845 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x42>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x42
082136a7 +0x1ff:  mov    %ebx,0x8(%esp)
082136ab +0x203:  mov    %eax,0x4(%esp)
082136af +0x207:  mov    0xc(%ebp),%eax
082136b2 +0x20a:  mov    %eax,(%esp)
082136b5 +0x20d:  call   08646942 <_ZNK5CUser13CheckItemLockEii>  ; CUser::CheckItemLock(int, int) const
082136ba +0x212:  test   %al,%al
082136bc +0x214:  je     082136e3 <+0x23b>
082136be +0x216:  movl   $0xd5,0x8(%esp)
082136c6 +0x21e:  movl   $0xb6,0x4(%esp)
082136ce +0x226:  mov    0xc(%ebp),%eax
082136d1 +0x229:  mov    %eax,(%esp)
082136d4 +0x22c:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
082136d9 +0x231:  mov    $0x0,%ebx
082136de +0x236:  jmp    082138e5 <+0x43d>
082136e3 +0x23b:  movzwl -0x1e(%ebp),%eax
082136e7 +0x23f:  movzwl %ax,%ebx
082136ea +0x242:  mov    0xc(%ebp),%eax
082136ed +0x245:  mov    %eax,(%esp)
082136f0 +0x248:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
082136f5 +0x24d:  lea    -0x69(%ebp),%edx
082136f8 +0x250:  mov    %ebx,0xc(%esp)
082136fc +0x254:  movl   $0x1,0x8(%esp)
08213704 +0x25c:  mov    %eax,0x4(%esp)
08213708 +0x260:  mov    %edx,(%esp)
0821370b +0x263:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
08213710 +0x268:  sub    $0x4,%esp
08213713 +0x26b:  mov    -0x67(%ebp),%eax
08213716 +0x26e:  cmp    $0x2e9,%eax
0821371b +0x273:  je     08213742 <+0x29a>
0821371d +0x275:  movl   $0x11,0x8(%esp)
08213725 +0x27d:  movl   $0xb6,0x4(%esp)
0821372d +0x285:  mov    0xc(%ebp),%eax
08213730 +0x288:  mov    %eax,(%esp)
08213733 +0x28b:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08213738 +0x290:  mov    $0x0,%ebx
0821373d +0x295:  jmp    082138e5 <+0x43d>
08213742 +0x29a:  movzwl -0x1e(%ebp),%eax
08213746 +0x29e:  movzwl %ax,%ebx
08213749 +0x2a1:  mov    0xc(%ebp),%eax
0821374c +0x2a4:  mov    %eax,(%esp)
0821374f +0x2a7:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08213754 +0x2ac:  movl   $0x1,0x14(%esp)
0821375c +0x2b4:  movl   $0x3,0x10(%esp)
08213764 +0x2bc:  movl   $0x1,0xc(%esp)
0821376c +0x2c4:  mov    %ebx,0x8(%esp)
08213770 +0x2c8:  movl   $0x1,0x4(%esp)
08213778 +0x2d0:  mov    %eax,(%esp)
0821377b +0x2d3:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
08213780 +0x2d8:  xor    $0x1,%eax
08213783 +0x2db:  test   %al,%al
08213785 +0x2dd:  je     082137ac <+0x304>
08213787 +0x2df:  movl   $0x11,0x8(%esp)
0821378f +0x2e7:  movl   $0xb6,0x4(%esp)
08213797 +0x2ef:  mov    0xc(%ebp),%eax
0821379a +0x2f2:  mov    %eax,(%esp)
0821379d +0x2f5:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
082137a2 +0x2fa:  mov    $0x0,%ebx
082137a7 +0x2ff:  jmp    082138e5 <+0x43d>
082137ac +0x304:  lea    -0x2c(%ebp),%eax
082137af +0x307:  mov    %eax,(%esp)
082137b2 +0x30a:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
082137b7 +0x30f:  movl   $0xe,0x8(%esp)
082137bf +0x317:  movl   $0x0,0x4(%esp)
082137c7 +0x31f:  lea    -0x2c(%ebp),%eax
082137ca +0x322:  mov    %eax,(%esp)
082137cd +0x325:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
082137d2 +0x32a:  movl   $0x0,0x4(%esp)
082137da +0x332:  lea    -0x2c(%ebp),%eax
082137dd +0x335:  mov    %eax,(%esp)
082137e0 +0x338:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
082137e5 +0x33d:  movl   $0x1,0x4(%esp)
082137ed +0x345:  lea    -0x2c(%ebp),%eax
082137f0 +0x348:  mov    %eax,(%esp)
082137f3 +0x34b:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
082137f8 +0x350:  movzwl -0x1e(%ebp),%eax
082137fc +0x354:  movzwl %ax,%ebx
082137ff +0x357:  mov    0xc(%ebp),%eax
08213802 +0x35a:  mov    %eax,(%esp)
08213805 +0x35d:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0821380a +0x362:  lea    -0x2c(%ebp),%edx
0821380d +0x365:  mov    %edx,0xc(%esp)
08213811 +0x369:  mov    %ebx,0x8(%esp)
08213815 +0x36d:  movl   $0x1,0x4(%esp)
0821381d +0x375:  mov    %eax,(%esp)
08213820 +0x378:  call   084fc6bc <_ZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuard>  ; CInventory::MakeItemPacket(INVEN_TYPE, int, PacketGuard&) const
08213825 +0x37d:  movl   $0x1,0x4(%esp)
0821382d +0x385:  lea    -0x2c(%ebp),%eax
08213830 +0x388:  mov    %eax,(%esp)
08213833 +0x38b:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08213838 +0x390:  lea    -0x2c(%ebp),%eax
0821383b +0x393:  mov    %eax,0x4(%esp)
0821383f +0x397:  mov    0xc(%ebp),%eax
08213842 +0x39a:  mov    %eax,(%esp)
08213845 +0x39d:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0821384a +0x3a2:  mov    0xc(%ebp),%eax
0821384d +0x3a5:  mov    %eax,(%esp)
08213850 +0x3a8:  call   0822f504 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4bae>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4bae
08213855 +0x3ad:  mov    %eax,%edi
08213857 +0x3af:  mov    0xc(%ebp),%eax
0821385a +0x3b2:  mov    %eax,(%esp)
0821385d +0x3b5:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
08213862 +0x3ba:  mov    %eax,%esi
08213864 +0x3bc:  mov    0xc(%ebp),%eax
08213867 +0x3bf:  mov    %eax,(%esp)
0821386a +0x3c2:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0821386f +0x3c7:  mov    %eax,%ebx
08213871 +0x3c9:  mov    0xc(%ebp),%eax
08213874 +0x3cc:  mov    %eax,(%esp)
08213877 +0x3cf:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
0821387c +0x3d4:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%edx
08213882 +0x3da:  mov    %eax,0x4(%esp)
08213886 +0x3de:  mov    %edx,(%esp)
08213889 +0x3e1:  call   0811d3b8 <_GLOBAL__I__ZN14CGuildWarEventC2Ev+0x1c>  ; global constructors keyed to CGuildWarEvent::CGuildWarEvent()+0x1c
0821388e +0x3e6:  mov    %edi,0xc(%esp)
08213892 +0x3ea:  mov    %esi,0x8(%esp)
08213896 +0x3ee:  mov    %ebx,0x4(%esp)
0821389a +0x3f2:  mov    %eax,(%esp)
0821389d +0x3f5:  call   0846e376 <_ZN17CGuildServerProxy19SendGuildNameChangeEjjPc>  ; CGuildServerProxy::SendGuildNameChange(unsigned int, unsigned int, char*)
082138a2 +0x3fa:  mov    0xc(%ebp),%eax
082138a5 +0x3fd:  mov    %eax,(%esp)
082138a8 +0x400:  call   0822f48e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b38>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b38
082138ad +0x405:  mov    0xc(%ebp),%eax
082138b0 +0x408:  mov    %eax,(%esp)
082138b3 +0x40b:  call   0822f4ac <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b56>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b56
082138b8 +0x410:  mov    $0x0,%ebx
082138bd +0x415:  lea    -0x2c(%ebp),%eax
082138c0 +0x418:  mov    %eax,(%esp)
082138c3 +0x41b:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082138c8 +0x420:  jmp    082138e5 <+0x43d>
082138ca +0x422:  mov    %edx,%ebx
082138cc +0x424:  mov    %eax,%esi
082138ce +0x426:  lea    -0x2c(%ebp),%eax
082138d1 +0x429:  mov    %eax,(%esp)
082138d4 +0x42c:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082138d9 +0x431:  mov    %esi,%eax
082138db +0x433:  mov    %ebx,%edx
082138dd +0x435:  mov    %eax,(%esp)
082138e0 +0x438:  call   08ae3750 <_Unwind_Resume>
082138e5 +0x43d:  mov    %ebx,%eax
082138e7 +0x43f:  lea    -0xc(%ebp),%esp
082138ea +0x442:  add    $0x0,%esp
082138ed +0x445:  pop    %ebx
082138ee +0x446:  pop    %esi
082138ef +0x447:  pop    %edi
082138f0 +0x448:  pop    %ebp
082138f1 +0x449:  ret
```

## 反编译 C

```c
// Dispatcher_ChangeGuildName::dispatch_sig @ 0x82134a8

/* Dispatcher_ChangeGuildName::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_ChangeGuildName::dispatch_sig
          (Dispatcher_ChangeGuildName *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  ushort uVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  CInventory *pCVar6;
  char *pcVar7;
  uint uVar8;
  CGuildServerProxy *this_00;
  uint uVar9;
  undefined1 local_6d [2];
  int local_6b;
  PacketGuard local_30 [13];
  uchar local_23;
  ushort local_22;
  uint local_20;
  
  iVar4 = CUser::get_state(param_1);
  if (2 < iVar4) {
    iVar4 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
    if (iVar4 != 0) {
      bVar1 = false;
      goto LAB_082134df;
    }
  }
  bVar1 = true;
LAB_082134df:
  if (bVar1) {
    uVar5 = LineFunc(0xc15f,
                     "virtual int Dispatcher_ChangeGuildName::dispatch_sig(CUser*, PacketBuf&)",0,0)
    ;
  }
  else {
    cVar3 = PacketBuf::get_short(param_2,&local_22);
    if (cVar3 == '\x01') {
      cVar3 = PacketBuf::get_byte(param_2,&local_23);
      if (cVar3 == '\x01') {
        iVar4 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_1);
        if (iVar4 == 0) {
          CUser::SendCmdErrorPacket(param_1,0xb6,100);
          uVar5 = 0;
        }
        else {
          cVar3 = CUserCharacInfo::isSetGuildCreateFlag((CUserCharacInfo *)param_1,2);
          if (cVar3 == '\x01') {
            cVar3 = CUser::IsGuildMaster(param_1);
            if (cVar3 == '\x01') {
              local_20 = CSecu_ProtectionField::Check
                                   (GlobalData::s_pSecuProtectionField,param_1,0xf);
              if (local_20 == 0) {
                uVar9 = (uint)local_22;
                iVar4 = GetInvenTypeFromItemSpace(local_23);
                cVar3 = CUser::CheckItemLock(param_1,iVar4,uVar9);
                if (cVar3 == '\0') {
                  uVar9 = (uint)local_22;
                  iVar4 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
                  CInventory::GetInvenSlot((int)local_6d,iVar4);
                  uVar2 = local_22;
                  if (local_6b == 0x2e9) {
                    pCVar6 = (CInventory *)
                             CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                    cVar3 = CInventory::delete_item(pCVar6,1,uVar2,1,3,1);
                    if (cVar3 == '\x01') {
                      PacketGuard::PacketGuard(local_30);
                    /* try { // try from 082137cd to 082138a1 has its CatchHandler @ 082138ca */
                      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,0,0xe);
                      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,0);
                      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_30,1);
                      pCVar6 = (CInventory *)
                               CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
                      CInventory::MakeItemPacket(pCVar6,1,local_22,local_30);
                      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
                      CUser::Send(param_1,local_30);
                      pcVar7 = (char *)CUserCharacInfo::getCreateGuildName
                                                 ((CUserCharacInfo *)param_1);
                      uVar9 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_1);
                      uVar8 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
                      uVar5 = CUser::GetServerGroup(param_1);
                      this_00 = (CGuildServerProxy *)
                                CServerProxyMgr<CGuildServerProxy>::GetServerProxy
                                          (GlobalData::s_guild_proxy_mgr,uVar5);
                      CGuildServerProxy::SendGuildNameChange(this_00,uVar8,uVar9,pcVar7);
                      CUserCharacInfo::resetGuildCreateFlag((CUserCharacInfo *)param_1);
                      CUserCharacInfo::resetTempGuildNameAddr((CUserCharacInfo *)param_1);
                      uVar5 = 0;
                      PacketGuard::~PacketGuard(local_30);
                    }
                    else {
                      CUser::SendCmdErrorPacket(param_1,0xb6,0x11);
                      uVar5 = 0;
                    }
                  }
                  else {
                    CUser::SendCmdErrorPacket(param_1,0xb6,0x11,uVar9);
                    uVar5 = 0;
                  }
                }
                else {
                  CUser::SendCmdErrorPacket(param_1,0xb6,0xd5);
                  uVar5 = 0;
                }
              }
              else {
                CUser::SendCmdErrorPacket(param_1,0xb6,local_20 & 0xff);
                uVar5 = 0;
              }
            }
            else {
              CUser::SendCmdErrorPacket(param_1,0xb6,0x56);
              uVar5 = 0;
            }
          }
          else {
            CUser::SendCmdErrorPacket(param_1,0xb6,0x6d);
            uVar5 = 0;
          }
        }
      }
      else {
        uVar5 = LineFunc(0xc166,
                         "virtual int Dispatcher_ChangeGuildName::dispatch_sig(CUser*, PacketBuf&)",
                         0,0);
      }
    }
    else {
      uVar5 = LineFunc(0xc163,
                       "virtual int Dispatcher_ChangeGuildName::dispatch_sig(CUser*, PacketBuf&)",0,
                       0);
    }
  }
  return uVar5;
}
```
