# dispatch_sig

`_ZN29Dispatcher_CreatePrivateStore12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_CreatePrivateStore::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_CreatePrivateStore` | `0x0820271c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0820271c  _ZN29Dispatcher_CreatePrivateStore12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_CreatePrivateStore::dispatch_sig(CUser*, PacketBuf&)
# range [0x0820271c, 0x08202bb5]
0820271c +0x000:  push   %ebp
0820271d +0x001:  mov    %esp,%ebp
0820271f +0x003:  push   %edi
08202720 +0x004:  push   %esi
08202721 +0x005:  push   %ebx
08202722 +0x006:  sub    $0x5c,%esp
08202725 +0x009:  mov    0xc(%ebp),%eax
08202728 +0x00c:  mov    %eax,(%esp)
0820272b +0x00f:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08202730 +0x014:  cmp    $0x3,%eax
08202733 +0x017:  jne    08202744 <+0x28>
08202735 +0x019:  mov    0xc(%ebp),%eax
08202738 +0x01c:  mov    %eax,(%esp)
0820273b +0x01f:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08202740 +0x024:  test   %eax,%eax
08202742 +0x026:  jne    0820274b <+0x2f>
08202744 +0x028:  mov    $0x1,%eax
08202749 +0x02d:  jmp    08202750 <+0x34>
0820274b +0x02f:  mov    $0x0,%eax
08202750 +0x034:  test   %al,%al
08202752 +0x036:  je     0820277d <+0x61>
08202754 +0x038:  movl   $0x0,0xc(%esp)
0820275c +0x040:  movl   $0x0,0x8(%esp)
08202764 +0x048:  movl   $&_ZZN29Dispatcher_CreatePrivateStore12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0820276c +0x050:  movl   $0x98f1,(%esp)
08202773 +0x057:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08202778 +0x05c:  jmp    08202bad <+0x491>
0820277d +0x061:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08202782 +0x066:  mov    %eax,(%esp)
08202785 +0x069:  call   080f131e <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x3a0>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3a0
0820278a +0x06e:  test   %al,%al
0820278c +0x070:  jne    082027a0 <+0x84>
0820278e +0x072:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08202793 +0x077:  mov    %eax,(%esp)
08202796 +0x07a:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
0820279b +0x07f:  cmp    $0x7,%eax
0820279e +0x082:  jne    082027a7 <+0x8b>
082027a0 +0x084:  mov    $0x1,%eax
082027a5 +0x089:  jmp    082027ac <+0x90>
082027a7 +0x08b:  mov    $0x0,%eax
082027ac +0x090:  test   %al,%al
082027ae +0x092:  je     082027d5 <+0xb9>
082027b0 +0x094:  movl   $0x3e,0x8(%esp)
082027b8 +0x09c:  movl   $0x58,0x4(%esp)
082027c0 +0x0a4:  mov    0xc(%ebp),%eax
082027c3 +0x0a7:  mov    %eax,(%esp)
082027c6 +0x0aa:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
082027cb +0x0af:  mov    $0x0,%eax
082027d0 +0x0b4:  jmp    08202bad <+0x491>
082027d5 +0x0b9:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
082027da +0x0be:  mov    0xc(%ebp),%edx
082027dd +0x0c1:  mov    %edx,0x4(%esp)
082027e1 +0x0c5:  mov    %eax,(%esp)
082027e4 +0x0c8:  call   086cd038 <_ZN9GameWorld14getUserVillageEP5CUser>  ; GameWorld::getUserVillage(CUser*)
082027e9 +0x0cd:  mov    %eax,-0x20(%ebp)
082027ec +0x0d0:  cmpl   $0x0,-0x20(%ebp)
082027f0 +0x0d4:  jne    0820281b <+0xff>
082027f2 +0x0d6:  movl   $0x0,0xc(%esp)
082027fa +0x0de:  movl   $0x0,0x8(%esp)
08202802 +0x0e6:  movl   $&_ZZN29Dispatcher_CreatePrivateStore12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0820280a +0x0ee:  movl   $0x9905,(%esp)
08202811 +0x0f5:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08202816 +0x0fa:  jmp    08202bad <+0x491>
0820281b +0x0ff:  movl   $0x0,0x4(%esp)
08202823 +0x107:  mov    0xc(%ebp),%eax
08202826 +0x10a:  mov    %eax,(%esp)
08202829 +0x10d:  call   086813be <_ZN5CUser8get_areaEb>  ; CUser::get_area(bool)
0820282e +0x112:  mov    %eax,%ebx
08202830 +0x114:  mov    -0x20(%ebp),%eax
08202833 +0x117:  mov    %eax,(%esp)
08202836 +0x11a:  call   086c3b58 <_ZN7Village13get_gate_areaEv>  ; Village::get_gate_area()
0820283b +0x11f:  cmp    %eax,%ebx
0820283d +0x121:  sete   %al
08202840 +0x124:  test   %al,%al
08202842 +0x126:  je     08202869 <+0x14d>
08202844 +0x128:  movl   $0x3e,0x8(%esp)
0820284c +0x130:  movl   $0x58,0x4(%esp)
08202854 +0x138:  mov    0xc(%ebp),%eax
08202857 +0x13b:  mov    %eax,(%esp)
0820285a +0x13e:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0820285f +0x143:  mov    $0x0,%eax
08202864 +0x148:  jmp    08202bad <+0x491>
08202869 +0x14d:  call   081625e6 <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0x854>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0x854
0820286e +0x152:  movl   $0xb,0xc(%esp)
08202876 +0x15a:  movl   $0x1,0x8(%esp)
0820287e +0x162:  mov    0xc(%ebp),%edx
08202881 +0x165:  mov    %edx,0x4(%esp)
08202885 +0x169:  mov    %eax,(%esp)
08202888 +0x16c:  call   0816e6b8 <_ZN22ServiceRestrictManager12isRestrictedEP5CUserN16RestrictCategory4EnumEi>  ; ServiceRestrictManager::isRestricted(CUser*, RestrictCategory::Enum, int)
0820288d +0x171:  test   %al,%al
0820288f +0x173:  je     082028b6 <+0x19a>
08202891 +0x175:  movl   $0xd1,0x8(%esp)
08202899 +0x17d:  movl   $0x58,0x4(%esp)
082028a1 +0x185:  mov    0xc(%ebp),%eax
082028a4 +0x188:  mov    %eax,(%esp)
082028a7 +0x18b:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
082028ac +0x190:  mov    $0x0,%eax
082028b1 +0x195:  jmp    08202bad <+0x491>
082028b6 +0x19a:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%eax
082028bb +0x19f:  movl   $0x3c,0x8(%esp)
082028c3 +0x1a7:  mov    0xc(%ebp),%edx
082028c6 +0x1aa:  mov    %edx,0x4(%esp)
082028ca +0x1ae:  mov    %eax,(%esp)
082028cd +0x1b1:  call   08288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>  ; CSecu_ProtectionField::Check(CUser*, SECURITY_PROTCTION)
082028d2 +0x1b6:  mov    %eax,-0x1c(%ebp)
082028d5 +0x1b9:  cmpl   $0x0,-0x1c(%ebp)
082028d9 +0x1bd:  je     08202902 <+0x1e6>
082028db +0x1bf:  mov    -0x1c(%ebp),%eax
082028de +0x1c2:  movzbl %al,%eax
082028e1 +0x1c5:  mov    %eax,0x8(%esp)
082028e5 +0x1c9:  movl   $0x58,0x4(%esp)
082028ed +0x1d1:  mov    0xc(%ebp),%eax
082028f0 +0x1d4:  mov    %eax,(%esp)
082028f3 +0x1d7:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
082028f8 +0x1dc:  mov    $0x0,%eax
082028fd +0x1e1:  jmp    08202bad <+0x491>
08202902 +0x1e6:  movl   $0x0,-0x2c(%ebp)
08202909 +0x1ed:  lea    -0x21(%ebp),%eax
0820290c +0x1f0:  mov    %eax,0x4(%esp)
08202910 +0x1f4:  mov    0x10(%ebp),%eax
08202913 +0x1f7:  mov    %eax,(%esp)
08202916 +0x1fa:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
0820291b +0x1ff:  xor    $0x1,%eax
0820291e +0x202:  test   %al,%al
08202920 +0x204:  je     0820294b <+0x22f>
08202922 +0x206:  movl   $0x0,0xc(%esp)
0820292a +0x20e:  movl   $0x0,0x8(%esp)
08202932 +0x216:  movl   $&_ZZN29Dispatcher_CreatePrivateStore12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0820293a +0x21e:  movl   $0x9944,(%esp)
08202941 +0x225:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08202946 +0x22a:  jmp    08202bad <+0x491>
0820294b +0x22f:  lea    -0x22(%ebp),%eax
0820294e +0x232:  mov    %eax,0x4(%esp)
08202952 +0x236:  mov    0x10(%ebp),%eax
08202955 +0x239:  mov    %eax,(%esp)
08202958 +0x23c:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
0820295d +0x241:  xor    $0x1,%eax
08202960 +0x244:  test   %al,%al
08202962 +0x246:  je     0820298d <+0x271>
08202964 +0x248:  movl   $0x0,0xc(%esp)
0820296c +0x250:  movl   $0x0,0x8(%esp)
08202974 +0x258:  movl   $&_ZZN29Dispatcher_CreatePrivateStore12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0820297c +0x260:  movl   $0x9945,(%esp)
08202983 +0x267:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08202988 +0x26c:  jmp    08202bad <+0x491>
0820298d +0x271:  lea    -0x24(%ebp),%eax
08202990 +0x274:  mov    %eax,0x4(%esp)
08202994 +0x278:  mov    0x10(%ebp),%eax
08202997 +0x27b:  mov    %eax,(%esp)
0820299a +0x27e:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
0820299f +0x283:  xor    $0x1,%eax
082029a2 +0x286:  test   %al,%al
082029a4 +0x288:  je     082029cf <+0x2b3>
082029a6 +0x28a:  movl   $0x0,0xc(%esp)
082029ae +0x292:  movl   $0x0,0x8(%esp)
082029b6 +0x29a:  movl   $&_ZZN29Dispatcher_CreatePrivateStore12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082029be +0x2a2:  movl   $0x9946,(%esp)
082029c5 +0x2a9:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082029ca +0x2ae:  jmp    08202bad <+0x491>
082029cf +0x2b3:  lea    -0x26(%ebp),%eax
082029d2 +0x2b6:  mov    %eax,0x4(%esp)
082029d6 +0x2ba:  mov    0x10(%ebp),%eax
082029d9 +0x2bd:  mov    %eax,(%esp)
082029dc +0x2c0:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
082029e1 +0x2c5:  xor    $0x1,%eax
082029e4 +0x2c8:  test   %al,%al
082029e6 +0x2ca:  je     08202a11 <+0x2f5>
082029e8 +0x2cc:  movl   $0x0,0xc(%esp)
082029f0 +0x2d4:  movl   $0x0,0x8(%esp)
082029f8 +0x2dc:  movl   $&_ZZN29Dispatcher_CreatePrivateStore12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08202a00 +0x2e4:  movl   $0x9947,(%esp)
08202a07 +0x2eb:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08202a0c +0x2f0:  jmp    08202bad <+0x491>
08202a11 +0x2f5:  lea    -0x2e(%ebp),%eax
08202a14 +0x2f8:  mov    %eax,0x4(%esp)
08202a18 +0x2fc:  mov    0x10(%ebp),%eax
08202a1b +0x2ff:  mov    %eax,(%esp)
08202a1e +0x302:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
08202a23 +0x307:  xor    $0x1,%eax
08202a26 +0x30a:  test   %al,%al
08202a28 +0x30c:  je     08202a53 <+0x337>
08202a2a +0x30e:  movl   $0x0,0xc(%esp)
08202a32 +0x316:  movl   $0x0,0x8(%esp)
08202a3a +0x31e:  movl   $&_ZZN29Dispatcher_CreatePrivateStore12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08202a42 +0x326:  movl   $0x994b,(%esp)
08202a49 +0x32d:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08202a4e +0x332:  jmp    08202bad <+0x491>
08202a53 +0x337:  mov    0xc(%ebp),%eax
08202a56 +0x33a:  mov    %eax,(%esp)
08202a59 +0x33d:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
08202a5e +0x342:  movsbl %al,%edx
08202a61 +0x345:  movzbl -0x21(%ebp),%eax
08202a65 +0x349:  movzbl %al,%eax
08202a68 +0x34c:  cmp    %eax,%edx
08202a6a +0x34e:  jne    08202a8a <+0x36e>
08202a6c +0x350:  movl   $0x0,0x4(%esp)
08202a74 +0x358:  mov    0xc(%ebp),%eax
08202a77 +0x35b:  mov    %eax,(%esp)
08202a7a +0x35e:  call   086813be <_ZN5CUser8get_areaEb>  ; CUser::get_area(bool)
08202a7f +0x363:  movzbl -0x22(%ebp),%edx
08202a83 +0x367:  movzbl %dl,%edx
08202a86 +0x36a:  cmp    %edx,%eax
08202a88 +0x36c:  je     08202a91 <+0x375>
08202a8a +0x36e:  mov    $0x1,%eax
08202a8f +0x373:  jmp    08202a96 <+0x37a>
08202a91 +0x375:  mov    $0x0,%eax
08202a96 +0x37a:  test   %al,%al
08202a98 +0x37c:  je     08202abf <+0x3a3>
08202a9a +0x37e:  movl   $0x3e,0x8(%esp)
08202aa2 +0x386:  movl   $0x58,0x4(%esp)
08202aaa +0x38e:  mov    0xc(%ebp),%eax
08202aad +0x391:  mov    %eax,(%esp)
08202ab0 +0x394:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08202ab5 +0x399:  mov    $0x0,%eax
08202aba +0x39e:  jmp    08202bad <+0x491>
08202abf +0x3a3:  call   085c4be8 <_ZN13private_store26GetInstancePrivateStoreMgrEv>  ; private_store::GetInstancePrivateStoreMgr()
08202ac4 +0x3a8:  mov    0xc(%ebp),%edx
08202ac7 +0x3ab:  mov    %edx,0x8(%esp)
08202acb +0x3af:  lea    -0x2c(%ebp),%edx
08202ace +0x3b2:  mov    %edx,0x4(%esp)
08202ad2 +0x3b6:  mov    %eax,(%esp)
08202ad5 +0x3b9:  call   085ca698 <_ZN13private_store16CPrivateStoreMgr14GetStoreSellerEPPNS_7ISellerEP5CUser>  ; private_store::CPrivateStoreMgr::GetStoreSeller(private_store::ISeller**, CUser*)
08202ada +0x3be:  mov    -0x2c(%ebp),%eax
08202add +0x3c1:  mov    (%eax),%eax
08202adf +0x3c3:  mov    (%eax),%eax
08202ae1 +0x3c5:  mov    %eax,-0x3c(%ebp)
08202ae4 +0x3c8:  movzwl -0x2e(%ebp),%eax
08202ae8 +0x3cc:  movzwl %ax,%edi
08202aeb +0x3cf:  movzwl -0x26(%ebp),%eax
08202aef +0x3d3:  movswl %ax,%esi
08202af2 +0x3d6:  movzwl -0x24(%ebp),%eax
08202af6 +0x3da:  movswl %ax,%ebx
08202af9 +0x3dd:  movzbl -0x22(%ebp),%eax
08202afd +0x3e1:  movzbl %al,%ecx
08202b00 +0x3e4:  movzbl -0x21(%ebp),%eax
08202b04 +0x3e8:  movzbl %al,%edx
08202b07 +0x3eb:  mov    -0x2c(%ebp),%eax
08202b0a +0x3ee:  mov    %edi,0x14(%esp)
08202b0e +0x3f2:  mov    %esi,0x10(%esp)
08202b12 +0x3f6:  mov    %ebx,0xc(%esp)
08202b16 +0x3fa:  mov    %ecx,0x8(%esp)
08202b1a +0x3fe:  mov    %edx,0x4(%esp)
08202b1e +0x402:  mov    %eax,(%esp)
08202b21 +0x405:  call   *-0x3c(%ebp)
08202b24 +0x408:  xor    $0x1,%eax
08202b27 +0x40b:  test   %al,%al
08202b29 +0x40d:  je     08202ba8 <+0x48c>
08202b2b +0x40f:  mov    -0x2c(%ebp),%eax
08202b2e +0x412:  mov    %eax,(%esp)
08202b31 +0x415:  call   082345d8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9c82>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9c82
08202b36 +0x41a:  test   %al,%al
08202b38 +0x41c:  setne  %al
08202b3b +0x41f:  test   %al,%al
08202b3d +0x421:  je     08202b79 <+0x45d>
08202b3f +0x423:  mov    0xc(%ebp),%eax
08202b42 +0x426:  mov    %eax,(%esp)
08202b45 +0x429:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
08202b4a +0x42e:  movl   $0x0,0x14(%esp)
08202b52 +0x436:  movl   $0x0,0x10(%esp)
08202b5a +0x43e:  movl   $0x1,0xc(%esp)
08202b62 +0x446:  movl   $0x32d,0x8(%esp)
08202b6a +0x44e:  mov    0xc(%ebp),%edx
08202b6d +0x451:  mov    %edx,0x4(%esp)
08202b71 +0x455:  mov    %eax,(%esp)
08202b74 +0x458:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
08202b79 +0x45d:  mov    -0x2c(%ebp),%eax
08202b7c +0x460:  mov    %eax,(%esp)
08202b7f +0x463:  call   082345d8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9c82>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9c82
08202b84 +0x468:  test   %al,%al
08202b86 +0x46a:  setne  %al
08202b89 +0x46d:  test   %al,%al
08202b8b +0x46f:  je     08202b94 <+0x478>
08202b8d +0x471:  mov    $0x0,%eax
08202b92 +0x476:  jmp    08202bad <+0x491>
08202b94 +0x478:  call   085c4be8 <_ZN13private_store26GetInstancePrivateStoreMgrEv>  ; private_store::GetInstancePrivateStoreMgr()
08202b99 +0x47d:  mov    0xc(%ebp),%edx
08202b9c +0x480:  mov    %edx,0x4(%esp)
08202ba0 +0x484:  mov    %eax,(%esp)
08202ba3 +0x487:  call   085ca874 <_ZN13private_store16CPrivateStoreMgr15FreeStoreSellerEP5CUser>  ; private_store::CPrivateStoreMgr::FreeStoreSeller(CUser*)
08202ba8 +0x48c:  mov    $0x0,%eax
08202bad +0x491:  add    $0x5c,%esp
08202bb0 +0x494:  pop    %ebx
08202bb1 +0x495:  pop    %esi
08202bb2 +0x496:  pop    %edi
08202bb3 +0x497:  pop    %ebp
08202bb4 +0x498:  ret
08202bb5 +0x499:  nop
```

## 反编译 C

```c
// Dispatcher_CreatePrivateStore::dispatch_sig @ 0x820271c

/* Dispatcher_CreatePrivateStore::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_CreatePrivateStore::dispatch_sig
          (Dispatcher_CreatePrivateStore *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  GameWorld *pGVar5;
  int iVar6;
  ServiceRestrictManager *pSVar7;
  uint uVar8;
  CPrivateStoreMgr *this_00;
  CHackAnalyzer *pCVar9;
  CUser *pCVar10;
  ushort local_32;
  ISeller *local_30;
  short local_2a;
  short local_28;
  byte local_26;
  byte local_25;
  Village *local_24;
  uint local_20;
  
  iVar3 = CUser::get_state(param_1);
  if ((iVar3 == 3) &&
     (iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1), iVar3 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    uVar4 = LineFunc(0x98f1,
                     "virtual int Dispatcher_CreatePrivateStore::dispatch_sig(CUser*, PacketBuf&)",0
                     ,0);
    return uVar4;
  }
  pGVar5 = (GameWorld *)G_GameWorld();
  cVar2 = GameWorld::IsIntegratedPvPBaseChannel(pGVar5);
  if (cVar2 == '\0') {
    pGVar5 = (GameWorld *)G_GameWorld();
    iVar3 = GameWorld::GetChannelType(pGVar5);
    if (iVar3 != 7) {
      bVar1 = false;
      goto LAB_082027ac;
    }
  }
  bVar1 = true;
LAB_082027ac:
  if (bVar1) {
    CUser::SendCmdErrorPacket(param_1,0x58,0x3e);
    return 0;
  }
  pGVar5 = (GameWorld *)G_GameWorld();
  local_24 = (Village *)GameWorld::getUserVillage(pGVar5,param_1);
  if (local_24 == (Village *)0x0) {
    uVar4 = LineFunc(0x9905,
                     "virtual int Dispatcher_CreatePrivateStore::dispatch_sig(CUser*, PacketBuf&)",0
                     ,0);
    return uVar4;
  }
  iVar3 = CUser::get_area(param_1,false);
  iVar6 = Village::get_gate_area(local_24);
  if (iVar3 == iVar6) {
    CUser::SendCmdErrorPacket(param_1,0x58,0x3e);
    return 0;
  }
  pSVar7 = (ServiceRestrictManager *)ARAD::Singleton<ServiceRestrictManager>::Get();
  cVar2 = ServiceRestrictManager::isRestricted(pSVar7,param_1,1,0xb);
  if (cVar2 != '\0') {
    CUser::SendCmdErrorPacket(param_1,0x58,0xd1);
    return 0;
  }
  local_20 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_1,0x3c);
  if (local_20 != 0) {
    CUser::SendCmdErrorPacket(param_1,0x58,local_20 & 0xff);
    return 0;
  }
  local_30 = (ISeller *)0x0;
  cVar2 = PacketBuf::get_byte(param_2,&local_25);
  if (cVar2 != '\x01') {
    uVar4 = LineFunc(0x9944,
                     "virtual int Dispatcher_CreatePrivateStore::dispatch_sig(CUser*, PacketBuf&)",0
                     ,0);
    return uVar4;
  }
  cVar2 = PacketBuf::get_byte(param_2,&local_26);
  if (cVar2 != '\x01') {
    uVar4 = LineFunc(0x9945,
                     "virtual int Dispatcher_CreatePrivateStore::dispatch_sig(CUser*, PacketBuf&)",0
                     ,0);
    return uVar4;
  }
  cVar2 = PacketBuf::get_short(param_2,&local_28);
  if (cVar2 != '\x01') {
    uVar4 = LineFunc(0x9946,
                     "virtual int Dispatcher_CreatePrivateStore::dispatch_sig(CUser*, PacketBuf&)",0
                     ,0);
    return uVar4;
  }
  cVar2 = PacketBuf::get_short(param_2,&local_2a);
  if (cVar2 != '\x01') {
    uVar4 = LineFunc(0x9947,
                     "virtual int Dispatcher_CreatePrivateStore::dispatch_sig(CUser*, PacketBuf&)",0
                     ,0);
    return uVar4;
  }
  cVar2 = PacketBuf::get_short(param_2,&local_32);
  if (cVar2 != '\x01') {
    uVar4 = LineFunc(0x994b,
                     "virtual int Dispatcher_CreatePrivateStore::dispatch_sig(CUser*, PacketBuf&)",0
                     ,0);
    return uVar4;
  }
  cVar2 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
  if (((int)cVar2 == (uint)local_25) && (uVar8 = CUser::get_area(param_1,false), uVar8 == local_26))
  {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    CUser::SendCmdErrorPacket(param_1,0x58,0x3e);
  }
  else {
    this_00 = (CPrivateStoreMgr *)private_store::GetInstancePrivateStoreMgr();
    private_store::CPrivateStoreMgr::GetStoreSeller(this_00,&local_30,param_1);
    cVar2 = (*(code *)**(undefined4 **)local_30)
                      (local_30,local_25,local_26,(int)local_28,(int)local_2a,local_32);
    if (cVar2 != '\x01') {
      cVar2 = private_store::CPrivateStore::GetState((CPrivateStore *)local_30);
      if (cVar2 != '\0') {
        pCVar9 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
        WongWork::CHackAnalyzer::addServerHackCnt(pCVar9,param_1,0x32d,1,0,0);
      }
      cVar2 = private_store::CPrivateStore::GetState((CPrivateStore *)local_30);
      if (cVar2 != '\0') {
        return 0;
      }
      pCVar10 = (CUser *)private_store::GetInstancePrivateStoreMgr();
      private_store::CPrivateStoreMgr::FreeStoreSeller(pCVar10);
    }
  }
  return 0;
}
```
