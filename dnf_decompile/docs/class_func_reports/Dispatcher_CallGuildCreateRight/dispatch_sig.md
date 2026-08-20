# dispatch_sig

`_ZN31Dispatcher_CallGuildCreateRight12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_CallGuildCreateRight::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_CallGuildCreateRight` | `0x081ffcc2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ffcc2  _ZN31Dispatcher_CallGuildCreateRight12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_CallGuildCreateRight::dispatch_sig(CUser*, PacketBuf&)
# range [0x081ffcc2, 0x08200125]
081ffcc2 +0x000:  push   %ebp
081ffcc3 +0x001:  mov    %esp,%ebp
081ffcc5 +0x003:  push   %edi
081ffcc6 +0x004:  push   %esi
081ffcc7 +0x005:  push   %ebx
081ffcc8 +0x006:  sub    $0x3c,%esp
081ffccb +0x009:  mov    0xc(%ebp),%eax
081ffcce +0x00c:  mov    %eax,(%esp)
081ffcd1 +0x00f:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081ffcd6 +0x014:  cmp    $0x2,%eax
081ffcd9 +0x017:  jle    081ffcea <+0x28>
081ffcdb +0x019:  mov    0xc(%ebp),%eax
081ffcde +0x01c:  mov    %eax,(%esp)
081ffce1 +0x01f:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
081ffce6 +0x024:  test   %eax,%eax
081ffce8 +0x026:  jne    081ffcf1 <+0x2f>
081ffcea +0x028:  mov    $0x1,%eax
081ffcef +0x02d:  jmp    081ffcf6 <+0x34>
081ffcf1 +0x02f:  mov    $0x0,%eax
081ffcf6 +0x034:  test   %al,%al
081ffcf8 +0x036:  je     081ffd25 <+0x63>
081ffcfa +0x038:  movl   $0x0,0xc(%esp)
081ffd02 +0x040:  movl   $0x0,0x8(%esp)
081ffd0a +0x048:  movl   $&_ZZN31Dispatcher_CallGuildCreateRight12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081ffd12 +0x050:  movl   $0x93f4,(%esp)
081ffd19 +0x057:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081ffd1e +0x05c:  mov    %eax,%ebx
081ffd20 +0x05e:  jmp    0820011c <+0x45a>
081ffd25 +0x063:  call   081625e6 <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0x854>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0x854
081ffd2a +0x068:  movl   $0x1c,0xc(%esp)
081ffd32 +0x070:  movl   $0x1,0x8(%esp)
081ffd3a +0x078:  mov    0xc(%ebp),%edx
081ffd3d +0x07b:  mov    %edx,0x4(%esp)
081ffd41 +0x07f:  mov    %eax,(%esp)
081ffd44 +0x082:  call   0816e6b8 <_ZN22ServiceRestrictManager12isRestrictedEP5CUserN16RestrictCategory4EnumEi>  ; ServiceRestrictManager::isRestricted(CUser*, RestrictCategory::Enum, int)
081ffd49 +0x087:  test   %al,%al
081ffd4b +0x089:  je     081ffd72 <+0xb0>
081ffd4d +0x08b:  movl   $0xd1,0x8(%esp)
081ffd55 +0x093:  movl   $0x47,0x4(%esp)
081ffd5d +0x09b:  mov    0xc(%ebp),%eax
081ffd60 +0x09e:  mov    %eax,(%esp)
081ffd63 +0x0a1:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081ffd68 +0x0a6:  mov    $0x0,%ebx
081ffd6d +0x0ab:  jmp    0820011c <+0x45a>
081ffd72 +0x0b0:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%eax
081ffd77 +0x0b5:  movl   $0x6,0x8(%esp)
081ffd7f +0x0bd:  mov    0xc(%ebp),%edx
081ffd82 +0x0c0:  mov    %edx,0x4(%esp)
081ffd86 +0x0c4:  mov    %eax,(%esp)
081ffd89 +0x0c7:  call   08288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>  ; CSecu_ProtectionField::Check(CUser*, SECURITY_PROTCTION)
081ffd8e +0x0cc:  mov    %eax,-0x24(%ebp)
081ffd91 +0x0cf:  cmpl   $0x0,-0x24(%ebp)
081ffd95 +0x0d3:  je     081ffdbe <+0xfc>
081ffd97 +0x0d5:  mov    -0x24(%ebp),%eax
081ffd9a +0x0d8:  movzbl %al,%eax
081ffd9d +0x0db:  mov    %eax,0x8(%esp)
081ffda1 +0x0df:  movl   $0x47,0x4(%esp)
081ffda9 +0x0e7:  mov    0xc(%ebp),%eax
081ffdac +0x0ea:  mov    %eax,(%esp)
081ffdaf +0x0ed:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081ffdb4 +0x0f2:  mov    $0x0,%ebx
081ffdb9 +0x0f7:  jmp    0820011c <+0x45a>
081ffdbe +0x0fc:  lea    -0x25(%ebp),%eax
081ffdc1 +0x0ff:  mov    %eax,(%esp)
081ffdc4 +0x102:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
081ffdc9 +0x107:  mov    0xc(%ebp),%eax
081ffdcc +0x10a:  mov    %eax,(%esp)
081ffdcf +0x10d:  call   0822f504 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4bae>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4bae
081ffdd4 +0x112:  lea    -0x25(%ebp),%edx
081ffdd7 +0x115:  mov    %edx,0x8(%esp)
081ffddb +0x119:  mov    %eax,0x4(%esp)
081ffddf +0x11d:  lea    -0x2c(%ebp),%eax
081ffde2 +0x120:  mov    %eax,(%esp)
081ffde5 +0x123:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
081ffdea +0x128:  jmp    081ffe07 <+0x145>
081ffdec +0x12a:  mov    %edx,%ebx
081ffdee +0x12c:  mov    %eax,%esi
081ffdf0 +0x12e:  lea    -0x25(%ebp),%eax
081ffdf3 +0x131:  mov    %eax,(%esp)
081ffdf6 +0x134:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
081ffdfb +0x139:  mov    %esi,%eax
081ffdfd +0x13b:  mov    %ebx,%edx
081ffdff +0x13d:  mov    %eax,(%esp)
081ffe02 +0x140:  call   08ae3750 <_Unwind_Resume>
081ffe07 +0x145:  lea    -0x25(%ebp),%eax
081ffe0a +0x148:  mov    %eax,(%esp)
081ffe0d +0x14b:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
081ffe12 +0x150:  lea    -0x2c(%ebp),%eax
081ffe15 +0x153:  mov    %eax,(%esp)
081ffe18 +0x156:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
081ffe1d +0x15b:  mov    %eax,(%esp)
081ffe20 +0x15e:  call   08ac2d6c <_ZN23restrict_inputting_name23isUtf8StrInUnicodeRangeEPKc>  ; restrict_inputting_name::isUtf8StrInUnicodeRange(char const*)
081ffe25 +0x163:  xor    $0x1,%eax
081ffe28 +0x166:  test   %al,%al
081ffe2a +0x168:  je     081ffe51 <+0x18f>
081ffe2c +0x16a:  movl   $0x9f,0x8(%esp)
081ffe34 +0x172:  movl   $0x47,0x4(%esp)
081ffe3c +0x17a:  mov    0xc(%ebp),%eax
081ffe3f +0x17d:  mov    %eax,(%esp)
081ffe42 +0x180:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081ffe47 +0x185:  mov    $0x0,%ebx
081ffe4c +0x18a:  jmp    08200111 <+0x44f>
081ffe51 +0x18f:  call   08235001 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa6ab>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa6ab
081ffe56 +0x194:  lea    -0x2c(%ebp),%edx
081ffe59 +0x197:  mov    %edx,0x4(%esp)
081ffe5d +0x19b:  mov    %eax,(%esp)
081ffe60 +0x19e:  call   0862e16e <_ZN16CSyncSlangFilter12HasSlangNameERKSs>  ; CSyncSlangFilter::HasSlangName(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
081ffe65 +0x1a3:  test   %al,%al
081ffe67 +0x1a5:  je     081ffe8e <+0x1cc>
081ffe69 +0x1a7:  movl   $0x9f,0x8(%esp)
081ffe71 +0x1af:  movl   $0x47,0x4(%esp)
081ffe79 +0x1b7:  mov    0xc(%ebp),%eax
081ffe7c +0x1ba:  mov    %eax,(%esp)
081ffe7f +0x1bd:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081ffe84 +0x1c2:  mov    $0x0,%ebx
081ffe89 +0x1c7:  jmp    08200111 <+0x44f>
081ffe8e +0x1cc:  call   08235001 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa6ab>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa6ab
081ffe93 +0x1d1:  lea    -0x2c(%ebp),%edx
081ffe96 +0x1d4:  mov    %edx,0x4(%esp)
081ffe9a +0x1d8:  mov    %eax,(%esp)
081ffe9d +0x1db:  call   0862e622 <_ZN16CSyncSlangFilter8HasSlangERKSs>  ; CSyncSlangFilter::HasSlang(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
081ffea2 +0x1e0:  test   %al,%al
081ffea4 +0x1e2:  jne    081ffec8 <+0x206>
081ffea6 +0x1e4:  mov    0xc(%ebp),%eax
081ffea9 +0x1e7:  mov    %eax,(%esp)
081ffeac +0x1ea:  call   0822f504 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4bae>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4bae
081ffeb1 +0x1ef:  mov    %eax,%ebx
081ffeb3 +0x1f1:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081ffeb8 +0x1f6:  mov    %ebx,0x4(%esp)
081ffebc +0x1fa:  mov    %eax,(%esp)
081ffebf +0x1fd:  call   08363140 <_ZN12CDataManager19hasSpecialCharacterEPKc>  ; CDataManager::hasSpecialCharacter(char const*)
081ffec4 +0x202:  test   %al,%al
081ffec6 +0x204:  je     081ffecf <+0x20d>
081ffec8 +0x206:  mov    $0x1,%eax
081ffecd +0x20b:  jmp    081ffed4 <+0x212>
081ffecf +0x20d:  mov    $0x0,%eax
081ffed4 +0x212:  test   %al,%al
081ffed6 +0x214:  je     081ffefd <+0x23b>
081ffed8 +0x216:  movl   $0x9f,0x8(%esp)
081ffee0 +0x21e:  movl   $0x47,0x4(%esp)
081ffee8 +0x226:  mov    0xc(%ebp),%eax
081ffeeb +0x229:  mov    %eax,(%esp)
081ffeee +0x22c:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081ffef3 +0x231:  mov    $0x0,%ebx
081ffef8 +0x236:  jmp    08200111 <+0x44f>
081ffefd +0x23b:  mov    0xc(%ebp),%eax
081fff00 +0x23e:  mov    %eax,(%esp)
081fff03 +0x241:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
081fff08 +0x246:  test   %eax,%eax
081fff0a +0x248:  jne    081fff1b <+0x259>
081fff0c +0x24a:  mov    0xc(%ebp),%eax
081fff0f +0x24d:  mov    %eax,(%esp)
081fff12 +0x250:  call   0822f56c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4c16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4c16
081fff17 +0x255:  cmp    $0x2,%al
081fff19 +0x257:  jne    081fff22 <+0x260>
081fff1b +0x259:  mov    $0x1,%eax
081fff20 +0x25e:  jmp    081fff27 <+0x265>
081fff22 +0x260:  mov    $0x0,%eax
081fff27 +0x265:  test   %al,%al
081fff29 +0x267:  je     081fff50 <+0x28e>
081fff2b +0x269:  movl   $0x20,0x8(%esp)
081fff33 +0x271:  movl   $0x47,0x4(%esp)
081fff3b +0x279:  mov    0xc(%ebp),%eax
081fff3e +0x27c:  mov    %eax,(%esp)
081fff41 +0x27f:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081fff46 +0x284:  mov    $0x0,%ebx
081fff4b +0x289:  jmp    08200111 <+0x44f>
081fff50 +0x28e:  mov    0xc(%ebp),%eax
081fff53 +0x291:  movl   $0x2,0x4(%esp)
081fff5b +0x299:  mov    %eax,(%esp)
081fff5e +0x29c:  call   0866c0da <_ZN15CUserCharacInfo20isSetGuildCreateFlagEt>  ; CUserCharacInfo::isSetGuildCreateFlag(unsigned short)
081fff63 +0x2a1:  xor    $0x1,%eax
081fff66 +0x2a4:  test   %al,%al
081fff68 +0x2a6:  je     081fff8f <+0x2cd>
081fff6a +0x2a8:  movl   $0x6d,0x8(%esp)
081fff72 +0x2b0:  movl   $0x47,0x4(%esp)
081fff7a +0x2b8:  mov    0xc(%ebp),%eax
081fff7d +0x2bb:  mov    %eax,(%esp)
081fff80 +0x2be:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081fff85 +0x2c3:  mov    $0x0,%ebx
081fff8a +0x2c8:  jmp    08200111 <+0x44f>
081fff8f +0x2cd:  mov    0xc(%ebp),%eax
081fff92 +0x2d0:  movl   $0x4,0x4(%esp)
081fff9a +0x2d8:  mov    %eax,(%esp)
081fff9d +0x2db:  call   0866c0da <_ZN15CUserCharacInfo20isSetGuildCreateFlagEt>  ; CUserCharacInfo::isSetGuildCreateFlag(unsigned short)
081fffa2 +0x2e0:  xor    $0x1,%eax
081fffa5 +0x2e3:  test   %al,%al
081fffa7 +0x2e5:  je     081fffce <+0x30c>
081fffa9 +0x2e7:  movl   $0x71,0x8(%esp)
081fffb1 +0x2ef:  movl   $0x47,0x4(%esp)
081fffb9 +0x2f7:  mov    0xc(%ebp),%eax
081fffbc +0x2fa:  mov    %eax,(%esp)
081fffbf +0x2fd:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081fffc4 +0x302:  mov    $0x0,%ebx
081fffc9 +0x307:  jmp    08200111 <+0x44f>
081fffce +0x30c:  mov    0xc(%ebp),%eax
081fffd1 +0x30f:  mov    %eax,(%esp)
081fffd4 +0x312:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
081fffd9 +0x317:  mov    %eax,(%esp)
081fffdc +0x31a:  call   081347d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x3dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x3dd
081fffe1 +0x31f:  mov    %eax,-0x20(%ebp)
081fffe4 +0x322:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081fffe9 +0x327:  mov    0xa50c(%eax),%eax
081fffef +0x32d:  mov    %eax,-0x1c(%ebp)
081ffff2 +0x330:  mov    -0x1c(%ebp),%eax
081ffff5 +0x333:  cmp    -0x20(%ebp),%eax
081ffff8 +0x336:  jle    0820001f <+0x35d>
081ffffa +0x338:  movl   $0x1f,0x8(%esp)
08200002 +0x340:  movl   $0x47,0x4(%esp)
0820000a +0x348:  mov    0xc(%ebp),%eax
0820000d +0x34b:  mov    %eax,(%esp)
08200010 +0x34e:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08200015 +0x353:  mov    $0x0,%ebx
0820001a +0x358:  jmp    08200111 <+0x44f>
0820001f +0x35d:  mov    0xc(%ebp),%eax
08200022 +0x360:  mov    %eax,(%esp)
08200025 +0x363:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0820002a +0x368:  movl   $0x1,0xc(%esp)
08200032 +0x370:  movl   $0xb,0x8(%esp)
0820003a +0x378:  mov    -0x1c(%ebp),%edx
0820003d +0x37b:  mov    %edx,0x4(%esp)
08200041 +0x37f:  mov    %eax,(%esp)
08200044 +0x382:  call   084ff54c <_ZN10CInventory9use_moneyEi15eMoneySubReasonb>  ; CInventory::use_money(int, eMoneySubReason, bool)
08200049 +0x387:  movl   $0x1,0x8(%esp)
08200051 +0x38f:  mov    0xc(%ebp),%eax
08200054 +0x392:  mov    %eax,0x4(%esp)
08200058 +0x396:  mov    0x8(%ebp),%eax
0820005b +0x399:  mov    %eax,(%esp)
0820005e +0x39c:  call   081ffbde <_ZN31Dispatcher_CallGuildCreateRight28send_packet_guildcreaterightEP5CUserh>  ; Dispatcher_CallGuildCreateRight::send_packet_guildcreateright(CUser*, unsigned char)
08200063 +0x3a1:  mov    0xc(%ebp),%eax
08200066 +0x3a4:  movl   $0x1,0x4(%esp)
0820006e +0x3ac:  mov    %eax,(%esp)
08200071 +0x3af:  call   0822f590 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4c3a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4c3a
08200076 +0x3b4:  mov    0xc(%ebp),%eax
08200079 +0x3b7:  mov    %eax,(%esp)
0820007c +0x3ba:  call   08653270 <_ZN5CUser10UpdateDataEv>  ; CUser::UpdateData()
08200081 +0x3bf:  mov    0xc(%ebp),%eax
08200084 +0x3c2:  mov    %eax,(%esp)
08200087 +0x3c5:  call   0822f526 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4bd0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4bd0
0820008c +0x3ca:  mov    %eax,%edi
0820008e +0x3cc:  mov    0xc(%ebp),%eax
08200091 +0x3cf:  mov    %eax,(%esp)
08200094 +0x3d2:  call   0822f504 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4bae>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4bae
08200099 +0x3d7:  mov    %eax,%esi
0820009b +0x3d9:  mov    0xc(%ebp),%eax
0820009e +0x3dc:  mov    %eax,(%esp)
082000a1 +0x3df:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
082000a6 +0x3e4:  mov    %eax,%ebx
082000a8 +0x3e6:  mov    0xc(%ebp),%eax
082000ab +0x3e9:  mov    %eax,(%esp)
082000ae +0x3ec:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
082000b3 +0x3f1:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%edx
082000b9 +0x3f7:  mov    %eax,0x4(%esp)
082000bd +0x3fb:  mov    %edx,(%esp)
082000c0 +0x3fe:  call   0811d3b8 <_GLOBAL__I__ZN14CGuildWarEventC2Ev+0x1c>  ; global constructors keyed to CGuildWarEvent::CGuildWarEvent()+0x1c
082000c5 +0x403:  mov    %edi,0xc(%esp)
082000c9 +0x407:  mov    %esi,0x8(%esp)
082000cd +0x40b:  mov    %ebx,0x4(%esp)
082000d1 +0x40f:  mov    %eax,(%esp)
082000d4 +0x412:  call   0846e304 <_ZN17CGuildServerProxy15SendGuildCreateEjPcS0_>  ; CGuildServerProxy::SendGuildCreate(unsigned int, char*, char*)
082000d9 +0x417:  mov    0xc(%ebp),%eax
082000dc +0x41a:  mov    %eax,(%esp)
082000df +0x41d:  call   0822f48e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b38>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b38
082000e4 +0x422:  mov    0xc(%ebp),%eax
082000e7 +0x425:  mov    %eax,(%esp)
082000ea +0x428:  call   0822f4ac <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b56>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b56
082000ef +0x42d:  mov    $0x0,%ebx
082000f4 +0x432:  jmp    08200111 <+0x44f>
082000f6 +0x434:  mov    %edx,%ebx
082000f8 +0x436:  mov    %eax,%esi
082000fa +0x438:  lea    -0x2c(%ebp),%eax
082000fd +0x43b:  mov    %eax,(%esp)
08200100 +0x43e:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08200105 +0x443:  mov    %esi,%eax
08200107 +0x445:  mov    %ebx,%edx
08200109 +0x447:  mov    %eax,(%esp)
0820010c +0x44a:  call   08ae3750 <_Unwind_Resume>
08200111 +0x44f:  lea    -0x2c(%ebp),%eax
08200114 +0x452:  mov    %eax,(%esp)
08200117 +0x455:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0820011c +0x45a:  mov    %ebx,%eax
0820011e +0x45c:  add    $0x3c,%esp
08200121 +0x45f:  pop    %ebx
08200122 +0x460:  pop    %esi
08200123 +0x461:  pop    %edi
08200124 +0x462:  pop    %ebp
08200125 +0x463:  ret
```

## 反编译 C

```c
// Dispatcher_CallGuildCreateRight::dispatch_sig @ 0x81ffcc2

/* Dispatcher_CallGuildCreateRight::dispatch_sig(CUser*, PacketBuf&) */

undefined4 Dispatcher_CallGuildCreateRight::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  ServiceRestrictManager *pSVar5;
  char *pcVar6;
  CSyncSlangFilter *pCVar7;
  CDataManager *this;
  CInventory *pCVar8;
  char *pcVar9;
  uint uVar10;
  string local_30;
  allocator<char> local_29;
  uint local_28;
  int local_24;
  int local_20;
  
  iVar3 = CUser::get_state((CUser *)param_2);
  if ((iVar3 < 3) ||
     (iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2), iVar3 == 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    uVar4 = LineFunc(0x93f4,
                     "virtual int Dispatcher_CallGuildCreateRight::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
    return uVar4;
  }
  pSVar5 = (ServiceRestrictManager *)ARAD::Singleton<ServiceRestrictManager>::Get();
  cVar2 = ServiceRestrictManager::isRestricted(pSVar5,param_2,1,0x1c);
  if (cVar2 != '\0') {
    CUser::SendCmdErrorPacket((CUser *)param_2,0x47,0xd1);
    return 0;
  }
  local_28 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_2,6);
  if (local_28 != 0) {
    CUser::SendCmdErrorPacket((CUser *)param_2,0x47,local_28 & 0xff);
    return 0;
  }
  std::allocator<char>::allocator();
  pcVar6 = (char *)CUserCharacInfo::getCreateGuildName((CUserCharacInfo *)param_2);
                    /* try { // try from 081ffde5 to 081ffde9 has its CatchHandler @ 081ffdec */
  std::string::string((string *)&local_30,pcVar6,(allocator *)&local_29);
  std::allocator<char>::~allocator(&local_29);
                    /* try { // try from 081ffe18 to 082000d8 has its CatchHandler @ 082000f6 */
  pcVar6 = (char *)std::string::c_str((string *)&local_30);
  cVar2 = restrict_inputting_name::isUtf8StrInUnicodeRange(pcVar6);
  if (cVar2 != '\x01') {
    CUser::SendCmdErrorPacket((CUser *)param_2,0x47,0x9f);
    goto LAB_08200111;
  }
  pCVar7 = (CSyncSlangFilter *)CSyncSlangFilter::GetInstance();
  cVar2 = CSyncSlangFilter::HasSlangName(pCVar7,&local_30);
  if (cVar2 != '\0') {
    CUser::SendCmdErrorPacket((CUser *)param_2,0x47,0x9f);
    goto LAB_08200111;
  }
  pCVar7 = (CSyncSlangFilter *)CSyncSlangFilter::GetInstance();
  cVar2 = CSyncSlangFilter::HasSlang(pCVar7,&local_30);
  if (cVar2 == '\0') {
    pcVar6 = (char *)CUserCharacInfo::getCreateGuildName((CUserCharacInfo *)param_2);
    this = (CDataManager *)G_CDataManager();
    cVar2 = CDataManager::hasSpecialCharacter(this,pcVar6);
    if (cVar2 != '\0') goto LAB_081ffec8;
    bVar1 = false;
  }
  else {
LAB_081ffec8:
    bVar1 = true;
  }
  if (bVar1) {
    CUser::SendCmdErrorPacket((CUser *)param_2,0x47,0x9f);
  }
  else {
    iVar3 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_2);
    if ((iVar3 == 0) &&
       (cVar2 = CUserCharacInfo::get_guild_create_right((CUserCharacInfo *)param_2), cVar2 != '\x02'
       )) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      CUser::SendCmdErrorPacket((CUser *)param_2,0x47,0x20);
    }
    else {
      cVar2 = CUserCharacInfo::isSetGuildCreateFlag((CUserCharacInfo *)param_2,2);
      if (cVar2 == '\x01') {
        cVar2 = CUserCharacInfo::isSetGuildCreateFlag((CUserCharacInfo *)param_2,4);
        if (cVar2 == '\x01') {
          pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_2);
          local_24 = CInventory::get_money(pCVar8);
          iVar3 = G_CDataManager();
          local_20 = *(int *)(iVar3 + 0xa50c);
          if (local_24 < local_20) {
            CUser::SendCmdErrorPacket((CUser *)param_2,0x47,0x1f);
          }
          else {
            pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
            CInventory::use_money(pCVar8,local_20,0xb,1);
            send_packet_guildcreateright(param_1,(uchar)param_2);
            CUserCharacInfo::set_guild_create_right((CUserCharacInfo *)param_2,'\x01');
            CUser::UpdateData((CUser *)param_2);
            CUserCharacInfo::getCreateGuildAddr((CUserCharacInfo *)param_2);
            pcVar6 = (char *)CUserCharacInfo::getCreateGuildName((CUserCharacInfo *)param_2);
            pcVar9 = (char *)CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
            uVar4 = CUser::GetServerGroup((CUser *)param_2);
            uVar10 = CServerProxyMgr<CGuildServerProxy>::GetServerProxy
                               (GlobalData::s_guild_proxy_mgr,uVar4);
            CGuildServerProxy::SendGuildCreate(uVar10,pcVar9,pcVar6);
            CUserCharacInfo::resetGuildCreateFlag((CUserCharacInfo *)param_2);
            CUserCharacInfo::resetTempGuildNameAddr((CUserCharacInfo *)param_2);
          }
        }
        else {
          CUser::SendCmdErrorPacket((CUser *)param_2,0x47,0x71);
        }
      }
      else {
        CUser::SendCmdErrorPacket((CUser *)param_2,0x47,0x6d);
      }
    }
  }
LAB_08200111:
  std::string::~string((string *)&local_30);
  return 0;
}
```
