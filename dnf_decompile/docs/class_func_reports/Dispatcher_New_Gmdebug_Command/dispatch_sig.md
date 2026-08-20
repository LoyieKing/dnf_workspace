# dispatch_sig

`_ZN30Dispatcher_New_Gmdebug_Command12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_New_Gmdebug_Command::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_New_Gmdebug_Command` | `0x0820bbde` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0820bbde  _ZN30Dispatcher_New_Gmdebug_Command12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_New_Gmdebug_Command::dispatch_sig(CUser*, PacketBuf&)
# range [0x0820bbde, 0x0820bf2b]
0820bbde +0x000:  push   %ebp
0820bbdf +0x001:  mov    %esp,%ebp
0820bbe1 +0x003:  push   %esi
0820bbe2 +0x004:  push   %ebx
0820bbe3 +0x005:  sub    $0x190,%esp
0820bbe9 +0x00b:  movb   $0x1,-0x1a(%ebp)
0820bbed +0x00f:  movb   $0x1,-0x19(%ebp)
0820bbf1 +0x013:  movl   $0x0,0x4(%esp)
0820bbf9 +0x01b:  mov    0x10(%ebp),%eax
0820bbfc +0x01e:  mov    %eax,(%esp)
0820bbff +0x021:  call   0822b702 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xdac>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xdac
0820bc04 +0x026:  mov    %eax,-0x18(%ebp)
0820bc07 +0x029:  mov    0xc(%ebp),%eax
0820bc0a +0x02c:  mov    %eax,(%esp)
0820bc0d +0x02f:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0820bc12 +0x034:  test   %eax,%eax
0820bc14 +0x036:  sete   %al
0820bc17 +0x039:  test   %al,%al
0820bc19 +0x03b:  je     0820bc46 <+0x68>
0820bc1b +0x03d:  movl   $0x0,0xc(%esp)
0820bc23 +0x045:  movl   $0x0,0x8(%esp)
0820bc2b +0x04d:  movl   $&_ZZN30Dispatcher_New_Gmdebug_Command12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0820bc33 +0x055:  movl   $0xa9bc,(%esp)
0820bc3a +0x05c:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0820bc3f +0x061:  mov    %eax,%ebx
0820bc41 +0x063:  jmp    0820bf1f <+0x341>
0820bc46 +0x068:  mov    0xc(%ebp),%eax
0820bc49 +0x06b:  mov    %eax,(%esp)
0820bc4c +0x06e:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0820bc51 +0x073:  mov    &_ZN10GlobalData14s_pGMAccounts_E,%edx
0820bc57 +0x079:  mov    %eax,0x4(%esp)
0820bc5b +0x07d:  mov    %edx,(%esp)
0820bc5e +0x080:  call   08109346 <_ZN8WongWork11CGMAccounts4isGMEj>  ; WongWork::CGMAccounts::isGM(unsigned int)
0820bc63 +0x085:  xor    $0x1,%eax
0820bc66 +0x088:  test   %al,%al
0820bc68 +0x08a:  je     0820bc6e <+0x90>
0820bc6a +0x08c:  movb   $0x0,-0x19(%ebp)
0820bc6e +0x090:  movzbl -0x19(%ebp),%eax
0820bc72 +0x094:  xor    $0x1,%eax
0820bc75 +0x097:  test   %al,%al
0820bc77 +0x099:  je     0820bc83 <+0xa5>
0820bc79 +0x09b:  mov    $0x0,%ebx
0820bc7e +0x0a0:  jmp    0820bf1f <+0x341>
0820bc83 +0x0a5:  movl   $0x0,0xc(%esp)
0820bc8b +0x0ad:  movl   $0xa9c4,0x8(%esp)
0820bc93 +0x0b5:  movl   $&_ZZN30Dispatcher_New_Gmdebug_Command12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0820bc9b +0x0bd:  lea    -0x30(%ebp),%eax
0820bc9e +0x0c0:  mov    %eax,(%esp)
0820bca1 +0x0c3:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0820bca6 +0x0c8:  movl   $"GM Pass Complete!",0x4(%esp)
0820bcae +0x0d0:  lea    -0x30(%ebp),%eax
0820bcb1 +0x0d3:  mov    %eax,(%esp)
0820bcb4 +0x0d6:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0820bcb9 +0x0db:  lea    -0x3c(%ebp),%eax
0820bcbc +0x0de:  mov    %eax,(%esp)
0820bcbf +0x0e1:  call   080ccf60 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1dad>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1dad
0820bcc4 +0x0e6:  mov    -0x18(%ebp),%eax
0820bcc7 +0x0e9:  add    $0xd,%eax
0820bcca +0x0ec:  mov    (%eax),%eax
0820bccc +0x0ee:  mov    %eax,-0x14(%ebp)
0820bccf +0x0f1:  mov    -0x14(%ebp),%eax
0820bcd2 +0x0f4:  lea    0x4(%eax),%edx
0820bcd5 +0x0f7:  mov    -0x18(%ebp),%eax
0820bcd8 +0x0fa:  movb   $0x0,0xd(%eax,%edx,1)
0820bcdd +0x0ff:  mov    -0x18(%ebp),%eax
0820bce0 +0x102:  lea    0xd(%eax),%edx
0820bce3 +0x105:  mov    0xc(%ebp),%eax
0820bce6 +0x108:  movl   $0x0,0x10(%esp)
0820bcee +0x110:  movl   $" ",0xc(%esp)
0820bcf6 +0x118:  mov    %edx,0x8(%esp)
0820bcfa +0x11c:  lea    -0x3c(%ebp),%edx
0820bcfd +0x11f:  mov    %edx,0x4(%esp)
0820bd01 +0x123:  mov    %eax,(%esp)
0820bd04 +0x126:  call   0864607e <_ZN15CUserCharacInfo21getSeparatedTextUnitsERSt6vectorISsSaISsEEPKcS5_i>  ; CUserCharacInfo::getSeparatedTextUnits(std::vector<std::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > >&, char const*, char const*, int)
0820bd09 +0x12b:  lea    -0x3c(%ebp),%eax
0820bd0c +0x12e:  mov    %eax,(%esp)
0820bd0f +0x131:  call   08237a90 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd13a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd13a
0820bd14 +0x136:  mov    %eax,-0x10(%ebp)
0820bd17 +0x139:  jmp    0820bd97 <+0x1b9>
0820bd19 +0x13b:  lea    -0x1b(%ebp),%eax
0820bd1c +0x13e:  mov    %eax,(%esp)
0820bd1f +0x141:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
0820bd24 +0x146:  lea    -0x1b(%ebp),%eax
0820bd27 +0x149:  mov    %eax,0x8(%esp)
0820bd2b +0x14d:  movl   $"",0x4(%esp)
0820bd33 +0x155:  lea    -0x20(%ebp),%eax
0820bd36 +0x158:  mov    %eax,(%esp)
0820bd39 +0x15b:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
0820bd3e +0x160:  lea    -0x20(%ebp),%eax
0820bd41 +0x163:  mov    %eax,0x4(%esp)
0820bd45 +0x167:  lea    -0x3c(%ebp),%eax
0820bd48 +0x16a:  mov    %eax,(%esp)
0820bd4b +0x16d:  call   08237aac <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd156>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd156
0820bd50 +0x172:  jmp    0820bd67 <+0x189>
0820bd52 +0x174:  mov    %edx,%ebx
0820bd54 +0x176:  mov    %eax,%esi
0820bd56 +0x178:  lea    -0x20(%ebp),%eax
0820bd59 +0x17b:  mov    %eax,(%esp)
0820bd5c +0x17e:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0820bd61 +0x183:  mov    %esi,%eax
0820bd63 +0x185:  mov    %ebx,%edx
0820bd65 +0x187:  jmp    0820bd74 <+0x196>
0820bd67 +0x189:  lea    -0x20(%ebp),%eax
0820bd6a +0x18c:  mov    %eax,(%esp)
0820bd6d +0x18f:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0820bd72 +0x194:  jmp    0820bd8c <+0x1ae>
0820bd74 +0x196:  mov    %edx,%ebx
0820bd76 +0x198:  mov    %eax,%esi
0820bd78 +0x19a:  lea    -0x1b(%ebp),%eax
0820bd7b +0x19d:  mov    %eax,(%esp)
0820bd7e +0x1a0:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0820bd83 +0x1a5:  mov    %esi,%eax
0820bd85 +0x1a7:  mov    %ebx,%edx
0820bd87 +0x1a9:  jmp    0820bef9 <+0x31b>
0820bd8c +0x1ae:  lea    -0x1b(%ebp),%eax
0820bd8f +0x1b1:  mov    %eax,(%esp)
0820bd92 +0x1b4:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0820bd97 +0x1b9:  lea    -0x3c(%ebp),%eax
0820bd9a +0x1bc:  mov    %eax,(%esp)
0820bd9d +0x1bf:  call   08237a90 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd13a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd13a
0820bda2 +0x1c4:  cmp    $0x9,%eax
0820bda5 +0x1c7:  setbe  %al
0820bda8 +0x1ca:  test   %al,%al
0820bdaa +0x1cc:  jne    0820bd19 <+0x13b>
0820bdb0 +0x1d2:  lea    -0x48(%ebp),%eax
0820bdb3 +0x1d5:  mov    %eax,(%esp)
0820bdb6 +0x1d8:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0820bdbb +0x1dd:  lea    -0x4c(%ebp),%eax
0820bdbe +0x1e0:  mov    %eax,(%esp)
0820bdc1 +0x1e3:  call   08233412 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x8abc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x8abc
0820bdc6 +0x1e8:  mov    0xc(%ebp),%eax
0820bdc9 +0x1eb:  mov    %eax,(%esp)
0820bdcc +0x1ee:  call   0814589c <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x31f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x31f
0820bdd1 +0x1f3:  xor    $0x1,%eax
0820bdd4 +0x1f6:  test   %al,%al
0820bdd6 +0x1f8:  je     0820bde2 <+0x204>
0820bdd8 +0x1fa:  mov    $0x0,%ebx
0820bddd +0x1ff:  jmp    0820bee1 <+0x303>
0820bde2 +0x204:  lea    -0x174(%ebp),%eax
0820bde8 +0x20a:  mov    %eax,(%esp)
0820bdeb +0x20d:  call   082353a4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xaa4e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xaa4e
0820bdf0 +0x212:  mov    0xc(%ebp),%eax
0820bdf3 +0x215:  mov    %eax,-0x170(%ebp)
0820bdf9 +0x21b:  lea    -0x3c(%ebp),%eax
0820bdfc +0x21e:  mov    %eax,0x4(%esp)
0820be00 +0x222:  lea    -0x174(%ebp),%eax
0820be06 +0x228:  add    $0x11c,%eax
0820be0b +0x22d:  mov    %eax,(%esp)
0820be0e +0x230:  call   08235550 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xabfa>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xabfa
0820be13 +0x235:  movl   $0x0,0x4(%esp)
0820be1b +0x23d:  lea    -0x3c(%ebp),%eax
0820be1e +0x240:  mov    %eax,(%esp)
0820be21 +0x243:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
0820be26 +0x248:  mov    &_ZN10GlobalData15s_GameMasterMgrE,%edx
0820be2c +0x24e:  mov    %eax,0x4(%esp)
0820be30 +0x252:  mov    %edx,(%esp)
0820be33 +0x255:  call   084a8cb0 <_ZN11game_master14CGameMasterMgr10GetCommandERSs>  ; game_master::CGameMasterMgr::GetCommand(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)
0820be38 +0x25a:  mov    %eax,-0xc(%ebp)
0820be3b +0x25d:  cmpl   $0x0,-0xc(%ebp)
0820be3f +0x261:  je     0820be6c <+0x28e>
0820be41 +0x263:  lea    -0x174(%ebp),%eax
0820be47 +0x269:  mov    %eax,0x4(%esp)
0820be4b +0x26d:  mov    -0xc(%ebp),%eax
0820be4e +0x270:  mov    %eax,(%esp)
0820be51 +0x273:  call   08234972 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa01c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa01c
0820be56 +0x278:  mov    &_ZN10GlobalData15s_GameMasterMgrE,%eax
0820be5b +0x27d:  mov    -0xc(%ebp),%edx
0820be5e +0x280:  mov    %edx,0x4(%esp)
0820be62 +0x284:  mov    %eax,(%esp)
0820be65 +0x287:  call   084a8c6e <_ZN11game_master14CGameMasterMgr13HandleRequestEPNS_8CCommandE>  ; game_master::CGameMasterMgr::HandleRequest(game_master::CCommand*)
0820be6a +0x28c:  jmp    0820be8c <+0x2ae>
0820be6c +0x28e:  lea    -0x3c(%ebp),%eax
0820be6f +0x291:  mov    %eax,0xc(%esp)
0820be73 +0x295:  mov    0x10(%ebp),%eax
0820be76 +0x298:  mov    %eax,0x8(%esp)
0820be7a +0x29c:  mov    0xc(%ebp),%eax
0820be7d +0x29f:  mov    %eax,0x4(%esp)
0820be81 +0x2a3:  mov    0x8(%ebp),%eax
0820be84 +0x2a6:  mov    %eax,(%esp)
0820be87 +0x2a9:  call   0820bf2c <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE>  ; Dispatcher_New_Gmdebug_Command::oldGmRoutine(CUser*, PacketBuf&, std::vector<std::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > >&)
0820be8c +0x2ae:  mov    $0x0,%ebx
0820be91 +0x2b3:  lea    -0x174(%ebp),%eax
0820be97 +0x2b9:  mov    %eax,(%esp)
0820be9a +0x2bc:  call   08235446 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xaaf0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xaaf0
0820be9f +0x2c1:  jmp    0820bee1 <+0x303>
0820bea1 +0x2c3:  mov    %edx,%ebx
0820bea3 +0x2c5:  mov    %eax,%esi
0820bea5 +0x2c7:  lea    -0x174(%ebp),%eax
0820beab +0x2cd:  mov    %eax,(%esp)
0820beae +0x2d0:  call   08235446 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xaaf0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xaaf0
0820beb3 +0x2d5:  mov    %esi,%eax
0820beb5 +0x2d7:  mov    %ebx,%edx
0820beb7 +0x2d9:  jmp    0820beb9 <+0x2db>
0820beb9 +0x2db:  mov    %edx,%ebx
0820bebb +0x2dd:  mov    %eax,%esi
0820bebd +0x2df:  lea    -0x4c(%ebp),%eax
0820bec0 +0x2e2:  mov    %eax,(%esp)
0820bec3 +0x2e5:  call   0823342e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x8ad8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x8ad8
0820bec8 +0x2ea:  mov    %esi,%eax
0820beca +0x2ec:  mov    %ebx,%edx
0820becc +0x2ee:  mov    %edx,%ebx
0820bece +0x2f0:  mov    %eax,%esi
0820bed0 +0x2f2:  lea    -0x48(%ebp),%eax
0820bed3 +0x2f5:  mov    %eax,(%esp)
0820bed6 +0x2f8:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0820bedb +0x2fd:  mov    %esi,%eax
0820bedd +0x2ff:  mov    %ebx,%edx
0820bedf +0x301:  jmp    0820bef9 <+0x31b>
0820bee1 +0x303:  lea    -0x4c(%ebp),%eax
0820bee4 +0x306:  mov    %eax,(%esp)
0820bee7 +0x309:  call   0823342e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x8ad8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x8ad8
0820beec +0x30e:  lea    -0x48(%ebp),%eax
0820beef +0x311:  mov    %eax,(%esp)
0820bef2 +0x314:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0820bef7 +0x319:  jmp    0820bf14 <+0x336>
0820bef9 +0x31b:  mov    %edx,%ebx
0820befb +0x31d:  mov    %eax,%esi
0820befd +0x31f:  lea    -0x3c(%ebp),%eax
0820bf00 +0x322:  mov    %eax,(%esp)
0820bf03 +0x325:  call   080ccf74 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1dc1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1dc1
0820bf08 +0x32a:  mov    %esi,%eax
0820bf0a +0x32c:  mov    %ebx,%edx
0820bf0c +0x32e:  mov    %eax,(%esp)
0820bf0f +0x331:  call   08ae3750 <_Unwind_Resume>
0820bf14 +0x336:  lea    -0x3c(%ebp),%eax
0820bf17 +0x339:  mov    %eax,(%esp)
0820bf1a +0x33c:  call   080ccf74 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1dc1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1dc1
0820bf1f +0x341:  mov    %ebx,%eax
0820bf21 +0x343:  add    $0x190,%esp
0820bf27 +0x349:  pop    %ebx
0820bf28 +0x34a:  pop    %esi
0820bf29 +0x34b:  pop    %ebp
0820bf2a +0x34c:  ret
0820bf2b +0x34d:  nop
```

## 反编译 C

```c
// Dispatcher_New_Gmdebug_Command::dispatch_sig @ 0x820bbde

/* Dispatcher_New_Gmdebug_Command::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_New_Gmdebug_Command::dispatch_sig
          (Dispatcher_New_Gmdebug_Command *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  CParser local_178 [4];
  CUser *local_174;
  vector<std::string,std::allocator<std::string>> avStack_5c [12];
  DisPatcher_DebugCommand local_50 [4];
  PacketGuard local_4c [12];
  vector<std::string,std::allocator<std::string>> local_40 [12];
  cMyTrace local_34 [16];
  string local_24;
  allocator<char> local_1f;
  undefined1 local_1e;
  char local_1d;
  int local_1c;
  int local_18;
  undefined4 local_14;
  CCommand *local_10;
  
  local_1e = 1;
  local_1d = '\x01';
  local_1c = PacketBuf::get_packet(param_2,0);
  iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
  if (iVar2 == 0) {
    uVar3 = LineFunc(0xa9bc,
                     "virtual int Dispatcher_New_Gmdebug_Command::dispatch_sig(CUser*, PacketBuf&)",
                     0,0);
  }
  else {
    uVar4 = CUser::get_acc_id(param_1);
    cVar1 = WongWork::CGMAccounts::isGM(GlobalData::s_pGMAccounts_,uVar4);
    if (cVar1 != '\x01') {
      local_1d = '\0';
    }
    if (local_1d == '\x01') {
      cMyTrace::cMyTrace(local_34,
                         "virtual int Dispatcher_New_Gmdebug_Command::dispatch_sig(CUser*, PacketBuf&)"
                         ,0xa9c4,0);
      cMyTrace::operator()(local_34,"GM Pass Complete!");
      std::vector<std::string,std::allocator<std::string>>::vector(local_40);
      local_18 = *(int *)(local_1c + 0xd);
      *(undefined1 *)(local_1c + local_18 + 0x11) = 0;
                    /* try { // try from 0820bd04 to 0820bd08 has its CatchHandler @ 0820bef9 */
      CUserCharacInfo::getSeparatedTextUnits
                ((CUserCharacInfo *)param_1,(vector *)local_40,(char *)(local_1c + 0xd)," ",0);
      local_14 = std::vector<std::string,std::allocator<std::string>>::size(local_40);
      while (uVar4 = std::vector<std::string,std::allocator<std::string>>::size(local_40),
            uVar4 < 10) {
        std::allocator<char>::allocator();
                    /* try { // try from 0820bd39 to 0820bd3d has its CatchHandler @ 0820bd74 */
        std::string::string((string *)&local_24,"",(allocator *)&local_1f);
                    /* try { // try from 0820bd4b to 0820bd4f has its CatchHandler @ 0820bd52 */
        std::vector<std::string,std::allocator<std::string>>::push_back(local_40,&local_24);
                    /* try { // try from 0820bd6d to 0820bd71 has its CatchHandler @ 0820bd74 */
        std::string::~string((string *)&local_24);
        std::allocator<char>::~allocator(&local_1f);
      }
                    /* try { // try from 0820bdb6 to 0820bdba has its CatchHandler @ 0820bef9 */
      PacketGuard::PacketGuard(local_4c);
      DisPatcher_DebugCommand::DisPatcher_DebugCommand(local_50);
      cVar1 = CUser::isGMUser(param_1);
      if (cVar1 == '\x01') {
                    /* try { // try from 0820bdeb to 0820bdef has its CatchHandler @ 0820beb9 */
        game_master::CParser::CParser(local_178);
        local_174 = param_1;
                    /* try { // try from 0820be0e to 0820be8b has its CatchHandler @ 0820bea1 */
        std::vector<std::string,std::allocator<std::string>>::operator=
                  (avStack_5c,(vector *)local_40);
        std::vector<std::string,std::allocator<std::string>>::operator[](local_40,0);
        local_10 = (CCommand *)
                   game_master::CGameMasterMgr::GetCommand((string *)GlobalData::s_GameMasterMgr);
        if (local_10 == (CCommand *)0x0) {
          oldGmRoutine(this,param_1,param_2,(vector *)local_40);
        }
        else {
          game_master::CCommand::SetParser(local_10,local_178);
          game_master::CGameMasterMgr::HandleRequest(GlobalData::s_GameMasterMgr,local_10);
        }
                    /* try { // try from 0820be9a to 0820be9e has its CatchHandler @ 0820beb9 */
        game_master::CParser::~CParser(local_178);
      }
      uVar3 = 0;
      DisPatcher_DebugCommand::~DisPatcher_DebugCommand(local_50);
                    /* try { // try from 0820bef2 to 0820bef6 has its CatchHandler @ 0820bef9 */
      PacketGuard::~PacketGuard(local_4c);
      std::vector<std::string,std::allocator<std::string>>::~vector(local_40);
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}
```
