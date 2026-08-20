# dispatch_sig

`_ZN14TimerCheckConn12dispatch_sigEiij`

`TimerCheckConn::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerCheckConn` | `0x08632bbc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08632bbc  _ZN14TimerCheckConn12dispatch_sigEiij
#           TimerCheckConn::dispatch_sig(int, int, unsigned int)
# range [0x08632bbc, 0x08632f59]
08632bbc +0x000:  push   %ebp
08632bbd +0x001:  mov    %esp,%ebp
08632bbf +0x003:  push   %edi
08632bc0 +0x004:  push   %esi
08632bc1 +0x005:  push   %ebx
08632bc2 +0x006:  sub    $0x7c,%esp
08632bc5 +0x009:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
08632bca +0x00e:  movl   $0x2,0x8(%esp)
08632bd2 +0x016:  mov    0xc(%ebp),%edx
08632bd5 +0x019:  mov    %edx,0x4(%esp)
08632bd9 +0x01d:  mov    %eax,(%esp)
08632bdc +0x020:  call   082947a4 <_ZN12CGameManager7getUserEii>  ; CGameManager::getUser(int, int)
08632be1 +0x025:  mov    %eax,-0x24(%ebp)
08632be4 +0x028:  cmpl   $0x0,-0x24(%ebp)
08632be8 +0x02c:  jne    08632bf4 <+0x38>
08632bea +0x02e:  mov    $0x0,%ebx
08632bef +0x033:  jmp    08632f4f <+0x393>
08632bf4 +0x038:  mov    -0x24(%ebp),%eax
08632bf7 +0x03b:  mov    %eax,(%esp)
08632bfa +0x03e:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
08632bff +0x043:  movzwl %ax,%eax
08632c02 +0x046:  cmp    0x10(%ebp),%eax
08632c05 +0x049:  setne  %al
08632c08 +0x04c:  test   %al,%al
08632c0a +0x04e:  je     08632c16 <+0x5a>
08632c0c +0x050:  mov    $0x0,%ebx
08632c11 +0x055:  jmp    08632f4f <+0x393>
08632c16 +0x05a:  lea    -0x45(%ebp),%eax
08632c19 +0x05d:  mov    %eax,(%esp)
08632c1c +0x060:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
08632c21 +0x065:  mov    -0x24(%ebp),%eax
08632c24 +0x068:  mov    %eax,(%esp)
08632c27 +0x06b:  call   08101072 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x94>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x94
08632c2c +0x070:  lea    -0x45(%ebp),%edx
08632c2f +0x073:  mov    %edx,0x8(%esp)
08632c33 +0x077:  mov    %eax,0x4(%esp)
08632c37 +0x07b:  lea    -0x4c(%ebp),%eax
08632c3a +0x07e:  mov    %eax,(%esp)
08632c3d +0x081:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
08632c42 +0x086:  jmp    08632c5f <+0xa3>
08632c44 +0x088:  mov    %edx,%ebx
08632c46 +0x08a:  mov    %eax,%esi
08632c48 +0x08c:  lea    -0x45(%ebp),%eax
08632c4b +0x08f:  mov    %eax,(%esp)
08632c4e +0x092:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
08632c53 +0x097:  mov    %esi,%eax
08632c55 +0x099:  mov    %ebx,%edx
08632c57 +0x09b:  mov    %eax,(%esp)
08632c5a +0x09e:  call   08ae3750 <_Unwind_Resume>
08632c5f +0x0a3:  lea    -0x45(%ebp),%eax
08632c62 +0x0a6:  mov    %eax,(%esp)
08632c65 +0x0a9:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
08632c6a +0x0ae:  movl   $0x0,-0x5c(%ebp)
08632c71 +0x0b5:  movl   $0x0,-0x58(%ebp)
08632c78 +0x0bc:  movl   $0x0,-0x54(%ebp)
08632c7f +0x0c3:  movl   $0x0,-0x50(%ebp)
08632c86 +0x0ca:  mov    -0x24(%ebp),%eax
08632c89 +0x0cd:  lea    0xe0(%eax),%edx
08632c8f +0x0d3:  movl   $0x10,0x8(%esp)
08632c97 +0x0db:  lea    -0x5c(%ebp),%eax
08632c9a +0x0de:  mov    %eax,0x4(%esp)
08632c9e +0x0e2:  mov    %edx,(%esp)
08632ca1 +0x0e5:  call   0816282e <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0xa9c>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0xa9c
08632ca6 +0x0ea:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
08632cab +0x0ef:  lea    -0x5c(%ebp),%edx
08632cae +0x0f2:  mov    %edx,0x8(%esp)
08632cb2 +0x0f6:  lea    -0x4c(%ebp),%edx
08632cb5 +0x0f9:  mov    %edx,0x4(%esp)
08632cb9 +0x0fd:  mov    %eax,(%esp)
08632cbc +0x100:  call   082a3544 <_ZN12CGameManager24IsNoGameGuardApplingUserERSsPc>  ; CGameManager::IsNoGameGuardApplingUser(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, char*)
08632cc1 +0x105:  mov    %al,-0x1d(%ebp)
08632cc4 +0x108:  cmpb   $0x0,-0x1d(%ebp)
08632cc8 +0x10c:  je     08632d1b <+0x15f>
08632cca +0x10e:  lea    -0x4c(%ebp),%eax
08632ccd +0x111:  mov    %eax,(%esp)
08632cd0 +0x114:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08632cd5 +0x119:  mov    %eax,%ebx
08632cd7 +0x11b:  movl   $0x0,0xc(%esp)
08632cdf +0x123:  movl   $0x3a4,0x8(%esp)
08632ce7 +0x12b:  movl   $&_ZZN14TimerCheckConn12dispatch_sigEiijE19__PRETTY_FUNCTION__,0x4(%esp)
08632cef +0x133:  lea    -0x44(%ebp),%eax
08632cf2 +0x136:  mov    %eax,(%esp)
08632cf5 +0x139:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08632cfa +0x13e:  mov    %ebx,0x8(%esp)
08632cfe +0x142:  movl   $"Try To Login By No Game Guard : %s",0x4(%esp)
08632d06 +0x14a:  lea    -0x44(%ebp),%eax
08632d09 +0x14d:  mov    %eax,(%esp)
08632d0c +0x150:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08632d11 +0x155:  mov    $0x1,%ebx
08632d16 +0x15a:  jmp    08632f44 <+0x388>
08632d1b +0x15f:  mov    -0x24(%ebp),%eax
08632d1e +0x162:  mov    %eax,(%esp)
08632d21 +0x165:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08632d26 +0x16a:  test   %eax,%eax
08632d28 +0x16c:  setne  %al
08632d2b +0x16f:  test   %al,%al
08632d2d +0x171:  je     08632f22 <+0x366>
08632d33 +0x177:  mov    -0x24(%ebp),%eax
08632d36 +0x17a:  mov    %eax,(%esp)
08632d39 +0x17d:  call   0863bf62 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x473>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x473
08632d3e +0x182:  cmp    $0x2,%ax
08632d42 +0x186:  setle  %al
08632d45 +0x189:  test   %al,%al
08632d47 +0x18b:  je     08632ec4 <+0x308>
08632d4d +0x191:  mov    -0x24(%ebp),%eax
08632d50 +0x194:  mov    %eax,(%esp)
08632d53 +0x197:  call   0863bf62 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x473>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x473
08632d58 +0x19c:  cmp    $0x1,%ax
08632d5c +0x1a0:  setg   %al
08632d5f +0x1a3:  test   %al,%al
08632d61 +0x1a5:  je     08632df1 <+0x235>
08632d67 +0x1ab:  mov    -0x24(%ebp),%eax
08632d6a +0x1ae:  mov    %eax,(%esp)
08632d6d +0x1b1:  call   0863bf62 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x473>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x473
08632d72 +0x1b6:  movswl %ax,%esi
08632d75 +0x1b9:  mov    -0x24(%ebp),%eax
08632d78 +0x1bc:  mov    %eax,(%esp)
08632d7b +0x1bf:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
08632d80 +0x1c4:  mov    %eax,%ebx
08632d82 +0x1c6:  movl   $0x0,0xc(%esp)
08632d8a +0x1ce:  movl   $0x3bc,0x8(%esp)
08632d92 +0x1d6:  movl   $&_ZZN14TimerCheckConn12dispatch_sigEiijE19__PRETTY_FUNCTION__,0x4(%esp)
08632d9a +0x1de:  lea    -0x34(%ebp),%eax
08632d9d +0x1e1:  mov    %eax,(%esp)
08632da0 +0x1e4:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08632da5 +0x1e9:  mov    %esi,0xc(%esp)
08632da9 +0x1ed:  mov    %ebx,0x8(%esp)
08632dad +0x1f1:  movl   $"User %s - no response %dth ping",0x4(%esp)
08632db5 +0x1f9:  lea    -0x34(%ebp),%eax
08632db8 +0x1fc:  mov    %eax,(%esp)
08632dbb +0x1ff:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08632dc0 +0x204:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08632dc7 +0x20b:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08632dcc +0x210:  mov    %eax,%ebx
08632dce +0x212:  mov    -0x24(%ebp),%eax
08632dd1 +0x215:  mov    %eax,(%esp)
08632dd4 +0x218:  call   0863be74 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x385>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x385
08632dd9 +0x21d:  lea    (%ebx,%eax,1),%eax
08632ddc +0x220:  mov    %eax,-0x1c(%ebp)
08632ddf +0x223:  mov    -0x1c(%ebp),%eax
08632de2 +0x226:  mov    %eax,0x4(%esp)
08632de6 +0x22a:  mov    -0x24(%ebp),%eax
08632de9 +0x22d:  mov    %eax,(%esp)
08632dec +0x230:  call   0863be82 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x393>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x393
08632df1 +0x235:  mov    -0x24(%ebp),%eax
08632df4 +0x238:  mov    %eax,(%esp)
08632df7 +0x23b:  call   0863bf46 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x457>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x457
08632dfc +0x240:  lea    -0x68(%ebp),%eax
08632dff +0x243:  mov    %eax,(%esp)
08632e02 +0x246:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08632e07 +0x24b:  movl   $0x0,0x8(%esp)
08632e0f +0x253:  movl   $0x0,0x4(%esp)
08632e17 +0x25b:  lea    -0x68(%ebp),%eax
08632e1a +0x25e:  mov    %eax,(%esp)
08632e1d +0x261:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08632e22 +0x266:  movl   $0x1,0x4(%esp)
08632e2a +0x26e:  lea    -0x68(%ebp),%eax
08632e2d +0x271:  mov    %eax,(%esp)
08632e30 +0x274:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08632e35 +0x279:  lea    -0x68(%ebp),%eax
08632e38 +0x27c:  mov    %eax,0x4(%esp)
08632e3c +0x280:  mov    -0x24(%ebp),%eax
08632e3f +0x283:  mov    %eax,(%esp)
08632e42 +0x286:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08632e47 +0x28b:  mov    -0x24(%ebp),%eax
08632e4a +0x28e:  mov    %eax,(%esp)
08632e4d +0x291:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
08632e52 +0x296:  movzwl %ax,%edi
08632e55 +0x299:  mov    -0x24(%ebp),%eax
08632e58 +0x29c:  mov    %eax,(%esp)
08632e5b +0x29f:  call   0863be74 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x385>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x385
08632e60 +0x2a4:  mov    %eax,%esi
08632e62 +0x2a6:  mov    -0x24(%ebp),%eax
08632e65 +0x2a9:  mov    %eax,(%esp)
08632e68 +0x2ac:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
08632e6d +0x2b1:  mov    %eax,%ebx
08632e6f +0x2b3:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
08632e74 +0x2b8:  movl   $0x0,0x18(%esp)
08632e7c +0x2c0:  mov    %edi,0x14(%esp)
08632e80 +0x2c4:  mov    %esi,0x10(%esp)
08632e84 +0x2c8:  movl   $0x0,0xc(%esp)
08632e8c +0x2d0:  mov    %ebx,0x8(%esp)
08632e90 +0x2d4:  movl   $0x0,0x4(%esp)
08632e98 +0x2dc:  mov    %eax,(%esp)
08632e9b +0x2df:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
08632ea0 +0x2e4:  jmp    08632eb7 <+0x2fb>
08632ea2 +0x2e6:  mov    %edx,%ebx
08632ea4 +0x2e8:  mov    %eax,%esi
08632ea6 +0x2ea:  lea    -0x68(%ebp),%eax
08632ea9 +0x2ed:  mov    %eax,(%esp)
08632eac +0x2f0:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08632eb1 +0x2f5:  mov    %esi,%eax
08632eb3 +0x2f7:  mov    %ebx,%edx
08632eb5 +0x2f9:  jmp    08632f29 <+0x36d>
08632eb7 +0x2fb:  lea    -0x68(%ebp),%eax
08632eba +0x2fe:  mov    %eax,(%esp)
08632ebd +0x301:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08632ec2 +0x306:  jmp    08632f22 <+0x366>
08632ec4 +0x308:  mov    -0x24(%ebp),%eax
08632ec7 +0x30b:  mov    %eax,(%esp)
08632eca +0x30e:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
08632ecf +0x313:  mov    %eax,0x14(%esp)
08632ed3 +0x317:  movl   $"User %s - no response during 3 times ping",0x10(%esp)
08632edb +0x31f:  movl   $0x40a,0xc(%esp)
08632ee3 +0x327:  movl   $&_ZZN14TimerCheckConn12dispatch_sigEiijE19__PRETTY_FUNCTION__,0x8(%esp)
08632eeb +0x32f:  movl   $"TimerDispatcher.cpp",0x4(%esp)
08632ef3 +0x337:  movl   $0x1,(%esp)
08632efa +0x33e:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08632eff +0x343:  movl   $0x0,0xc(%esp)
08632f07 +0x34b:  movl   $0x0,0x8(%esp)
08632f0f +0x353:  movl   $0x8,0x4(%esp)
08632f17 +0x35b:  mov    -0x24(%ebp),%eax
08632f1a +0x35e:  mov    %eax,(%esp)
08632f1d +0x361:  call   086489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>  ; CUser::DisConnSig(DISCONN_SIG, bool, int)
08632f22 +0x366:  mov    $0x1,%ebx
08632f27 +0x36b:  jmp    08632f44 <+0x388>
08632f29 +0x36d:  mov    %edx,%ebx
08632f2b +0x36f:  mov    %eax,%esi
08632f2d +0x371:  lea    -0x4c(%ebp),%eax
08632f30 +0x374:  mov    %eax,(%esp)
08632f33 +0x377:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08632f38 +0x37c:  mov    %esi,%eax
08632f3a +0x37e:  mov    %ebx,%edx
08632f3c +0x380:  mov    %eax,(%esp)
08632f3f +0x383:  call   08ae3750 <_Unwind_Resume>
08632f44 +0x388:  lea    -0x4c(%ebp),%eax
08632f47 +0x38b:  mov    %eax,(%esp)
08632f4a +0x38e:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08632f4f +0x393:  mov    %ebx,%eax
08632f51 +0x395:  add    $0x7c,%esp
08632f54 +0x398:  pop    %ebx
08632f55 +0x399:  pop    %esi
08632f56 +0x39a:  pop    %edi
08632f57 +0x39b:  pop    %ebp
08632f58 +0x39c:  ret
08632f59 +0x39d:  nop
```

## 反编译 C

```c
// TimerCheckConn::dispatch_sig @ 0x8632bbc

/* TimerCheckConn::dispatch_sig(int, int, unsigned int) */

undefined4 TimerCheckConn::dispatch_sig(int param_1,int param_2,uint param_3)

{
  short sVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  string *psVar6;
  undefined4 uVar7;
  TimerQueue *pTVar8;
  undefined4 uVar9;
  PacketGuard local_6c [12];
  char local_60 [16];
  string local_50 [7];
  allocator<char> local_49;
  cMyTrace local_48 [16];
  cMyTrace local_38 [16];
  CUser *local_28;
  char local_21;
  int local_20;
  
  iVar3 = G_CGameManager();
  local_28 = (CUser *)CGameManager::getUser(iVar3,param_2);
  if (local_28 == (CUser *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar4 = CUser::get_unique_id(local_28);
    if ((uVar4 & 0xffff) == param_3) {
      std::allocator<char>::allocator();
      pcVar5 = (char *)CUser::get_acc_name(local_28);
                    /* try { // try from 08632c3d to 08632c41 has its CatchHandler @ 08632c44 */
      std::string::string(local_50,pcVar5,(allocator *)&local_49);
      std::allocator<char>::~allocator(&local_49);
      local_60[0] = '\0';
      local_60[1] = '\0';
      local_60[2] = '\0';
      local_60[3] = '\0';
      local_60[4] = '\0';
      local_60[5] = '\0';
      local_60[6] = '\0';
      local_60[7] = '\0';
      local_60[8] = '\0';
      local_60[9] = '\0';
      local_60[10] = '\0';
      local_60[0xb] = '\0';
      local_60[0xc] = '\0';
      local_60[0xd] = '\0';
      local_60[0xe] = '\0';
      local_60[0xf] = '\0';
      CNetwork<4096,450000>::GetPeerIP2((CNetwork<4096,450000> *)(local_28 + 0xe0),local_60,0x10);
                    /* try { // try from 08632ca6 to 08632e06 has its CatchHandler @ 08632f29 */
      psVar6 = (string *)G_CGameManager();
      local_21 = CGameManager::IsNoGameGuardApplingUser(psVar6,(char *)local_50);
      if (local_21 == '\0') {
        iVar3 = CUser::get_state(local_28);
        if (iVar3 != 0) {
          sVar1 = CUser::get_connect_count(local_28);
          if (sVar1 < 3) {
            sVar1 = CUser::get_connect_count(local_28);
            if (1 < sVar1) {
              sVar1 = CUser::get_connect_count(local_28);
              uVar9 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)local_28);
              cMyTrace::cMyTrace(local_38,
                                 "virtual bool TimerCheckConn::dispatch_sig(int, int, memberIdentificationNumber_t)"
                                 ,0x3bc,0);
              cMyTrace::operator()(local_38,"User %s - no response %dth ping",uVar9,(int)sVar1);
              iVar3 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
              local_20 = CUser::GetCheckConnInterval(local_28);
              local_20 = iVar3 + local_20;
              CUser::SetResumeChecksumTime(local_28,local_20);
            }
            CUser::incre_check_count(local_28);
            PacketGuard::PacketGuard(local_6c);
                    /* try { // try from 08632e1d to 08632e9f has its CatchHandler @ 08632ea2 */
            InterfacePacketBuf::put_header((InterfacePacketBuf *)local_6c,0,0);
            InterfacePacketBuf::finalize((InterfacePacketBuf *)local_6c,true);
            CUser::Send(local_28,local_6c);
            uVar2 = CUser::get_unique_id(local_28);
            uVar9 = CUser::GetCheckConnInterval(local_28);
            uVar7 = CUser::GetUID(local_28);
            pTVar8 = (TimerQueue *)G_TimerQueue();
            TimerQueue::InsertTimer(pTVar8,0,uVar7,0,uVar9,uVar2,0);
                    /* try { // try from 08632ebd to 08632f21 has its CatchHandler @ 08632f29 */
            PacketGuard::~PacketGuard(local_6c);
          }
          else {
            uVar9 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)local_28);
            LogManager::logFormat
                      (1,"TimerDispatcher.cpp",
                       "virtual bool TimerCheckConn::dispatch_sig(int, int, memberIdentificationNumber_t)"
                       ,0x40a,"User %s - no response during 3 times ping",uVar9);
            CUser::DisConnSig(local_28,8,0,0);
          }
        }
      }
      else {
        uVar9 = std::string::c_str(local_50);
        cMyTrace::cMyTrace(local_48,
                           "virtual bool TimerCheckConn::dispatch_sig(int, int, memberIdentificationNumber_t)"
                           ,0x3a4,0);
        cMyTrace::operator()(local_48,"Try To Login By No Game Guard : %s",uVar9);
      }
      uVar9 = 1;
      std::string::~string(local_50);
    }
    else {
      uVar9 = 0;
    }
  }
  return uVar9;
}
```
