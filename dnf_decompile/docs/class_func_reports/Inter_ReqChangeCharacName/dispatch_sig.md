# dispatch_sig

`_ZN25Inter_ReqChangeCharacName12dispatch_sigEP5CUserPci`

`Inter_ReqChangeCharacName::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_ReqChangeCharacName` | `0x084d1c8a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084d1c8a  _ZN25Inter_ReqChangeCharacName12dispatch_sigEP5CUserPci
#           Inter_ReqChangeCharacName::dispatch_sig(CUser*, char*, int)
# range [0x084d1c8a, 0x084d22fb]
084d1c8a +0x000:  push   %ebp
084d1c8b +0x001:  mov    %esp,%ebp
084d1c8d +0x003:  push   %edi
084d1c8e +0x004:  push   %esi
084d1c8f +0x005:  push   %ebx
084d1c90 +0x006:  sub    $0x12c,%esp
084d1c96 +0x00c:  mov    0xc(%ebp),%eax
084d1c99 +0x00f:  mov    %eax,(%esp)
084d1c9c +0x012:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084d1ca1 +0x017:  cmp    $0x1,%eax
084d1ca4 +0x01a:  setle  %al
084d1ca7 +0x01d:  test   %al,%al
084d1ca9 +0x01f:  je     084d1cb5 <+0x2b>
084d1cab +0x021:  mov    $0x0,%eax
084d1cb0 +0x026:  jmp    084d22f1 <+0x667>
084d1cb5 +0x02b:  mov    0x10(%ebp),%eax
084d1cb8 +0x02e:  mov    %eax,-0x20(%ebp)
084d1cbb +0x031:  mov    -0x20(%ebp),%eax
084d1cbe +0x034:  mov    0x24(%eax),%eax
084d1cc1 +0x037:  test   %eax,%eax
084d1cc3 +0x039:  je     084d1d16 <+0x8c>
084d1cc5 +0x03b:  mov    -0x20(%ebp),%eax
084d1cc8 +0x03e:  mov    0x24(%eax),%eax
084d1ccb +0x041:  movzbl %al,%eax
084d1cce +0x044:  mov    %eax,0x8(%esp)
084d1cd2 +0x048:  movl   $0x8a,0x4(%esp)
084d1cda +0x050:  mov    0xc(%ebp),%eax
084d1cdd +0x053:  mov    %eax,(%esp)
084d1ce0 +0x056:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
084d1ce5 +0x05b:  mov    -0x20(%ebp),%eax
084d1ce8 +0x05e:  mov    (%eax),%eax
084d1cea +0x060:  movl   $0xff,0x8(%esp)
084d1cf2 +0x068:  mov    %eax,0x4(%esp)
084d1cf6 +0x06c:  mov    0xc(%ebp),%eax
084d1cf9 +0x06f:  mov    %eax,(%esp)
084d1cfc +0x072:  call   084ecb36 <_GLOBAL__I__Z7getUserj+0x3ae8>  ; global constructors keyed to getUser(unsigned int)+0x3ae8
084d1d01 +0x077:  mov    0xc(%ebp),%eax
084d1d04 +0x07a:  mov    %eax,(%esp)
084d1d07 +0x07d:  call   08651740 <_ZN5CUser16UpdateCharacViewEv>  ; CUser::UpdateCharacView()
084d1d0c +0x082:  mov    $0x0,%eax
084d1d11 +0x087:  jmp    084d22f1 <+0x667>
084d1d16 +0x08c:  mov    -0x20(%ebp),%eax
084d1d19 +0x08f:  add    $0x4,%eax
084d1d1c +0x092:  mov    %eax,%edx
084d1d1e +0x094:  mov    -0x20(%ebp),%eax
084d1d21 +0x097:  mov    (%eax),%eax
084d1d23 +0x099:  mov    %edx,0x8(%esp)
084d1d27 +0x09d:  mov    %eax,0x4(%esp)
084d1d2b +0x0a1:  mov    0xc(%ebp),%eax
084d1d2e +0x0a4:  mov    %eax,(%esp)
084d1d31 +0x0a7:  call   084ecc7c <_GLOBAL__I__Z7getUserj+0x3c2e>  ; global constructors keyed to getUser(unsigned int)+0x3c2e
084d1d36 +0x0ac:  test   %al,%al
084d1d38 +0x0ae:  je     084d201b <+0x391>
084d1d3e +0x0b4:  lea    -0x34(%ebp),%eax
084d1d41 +0x0b7:  mov    %eax,(%esp)
084d1d44 +0x0ba:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084d1d49 +0x0bf:  movl   $0x8a,0x8(%esp)
084d1d51 +0x0c7:  movl   $0x1,0x4(%esp)
084d1d59 +0x0cf:  lea    -0x34(%ebp),%eax
084d1d5c +0x0d2:  mov    %eax,(%esp)
084d1d5f +0x0d5:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084d1d64 +0x0da:  movl   $0x1,0x4(%esp)
084d1d6c +0x0e2:  lea    -0x34(%ebp),%eax
084d1d6f +0x0e5:  mov    %eax,(%esp)
084d1d72 +0x0e8:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d1d77 +0x0ed:  movl   $0x1,0x4(%esp)
084d1d7f +0x0f5:  lea    -0x34(%ebp),%eax
084d1d82 +0x0f8:  mov    %eax,(%esp)
084d1d85 +0x0fb:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084d1d8a +0x100:  lea    -0x34(%ebp),%eax
084d1d8d +0x103:  mov    %eax,0x4(%esp)
084d1d91 +0x107:  mov    0xc(%ebp),%eax
084d1d94 +0x10a:  mov    %eax,(%esp)
084d1d97 +0x10d:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084d1d9c +0x112:  mov    -0x20(%ebp),%eax
084d1d9f +0x115:  mov    (%eax),%eax
084d1da1 +0x117:  movl   $0x1,0x8(%esp)
084d1da9 +0x11f:  mov    %eax,0x4(%esp)
084d1dad +0x123:  mov    0xc(%ebp),%eax
084d1db0 +0x126:  mov    %eax,(%esp)
084d1db3 +0x129:  call   084ecb36 <_GLOBAL__I__Z7getUserj+0x3ae8>  ; global constructors keyed to getUser(unsigned int)+0x3ae8
084d1db8 +0x12e:  lea    -0x21(%ebp),%eax
084d1dbb +0x131:  mov    %eax,(%esp)
084d1dbe +0x134:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
084d1dc3 +0x139:  mov    -0x20(%ebp),%eax
084d1dc6 +0x13c:  add    $0x4,%eax
084d1dc9 +0x13f:  lea    -0x21(%ebp),%edx
084d1dcc +0x142:  mov    %edx,0x8(%esp)
084d1dd0 +0x146:  mov    %eax,0x4(%esp)
084d1dd4 +0x14a:  lea    -0x28(%ebp),%eax
084d1dd7 +0x14d:  mov    %eax,(%esp)
084d1dda +0x150:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
084d1ddf +0x155:  mov    -0x20(%ebp),%eax
084d1de2 +0x158:  mov    (%eax),%eax
084d1de4 +0x15a:  lea    -0x28(%ebp),%edx
084d1de7 +0x15d:  mov    %edx,0x8(%esp)
084d1deb +0x161:  mov    %eax,0x4(%esp)
084d1def +0x165:  mov    0xc(%ebp),%eax
084d1df2 +0x168:  mov    %eax,(%esp)
084d1df5 +0x16b:  call   084ec5e6 <_GLOBAL__I__Z7getUserj+0x3598>  ; global constructors keyed to getUser(unsigned int)+0x3598
084d1dfa +0x170:  jmp    084d1e11 <+0x187>
084d1dfc +0x172:  mov    %edx,%ebx
084d1dfe +0x174:  mov    %eax,%esi
084d1e00 +0x176:  lea    -0x28(%ebp),%eax
084d1e03 +0x179:  mov    %eax,(%esp)
084d1e06 +0x17c:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
084d1e0b +0x181:  mov    %esi,%eax
084d1e0d +0x183:  mov    %ebx,%edx
084d1e0f +0x185:  jmp    084d1e1e <+0x194>
084d1e11 +0x187:  lea    -0x28(%ebp),%eax
084d1e14 +0x18a:  mov    %eax,(%esp)
084d1e17 +0x18d:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
084d1e1c +0x192:  jmp    084d1e36 <+0x1ac>
084d1e1e +0x194:  mov    %edx,%ebx
084d1e20 +0x196:  mov    %eax,%esi
084d1e22 +0x198:  lea    -0x21(%ebp),%eax
084d1e25 +0x19b:  mov    %eax,(%esp)
084d1e28 +0x19e:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
084d1e2d +0x1a3:  mov    %esi,%eax
084d1e2f +0x1a5:  mov    %ebx,%edx
084d1e31 +0x1a7:  jmp    084d1fe6 <+0x35c>
084d1e36 +0x1ac:  lea    -0x21(%ebp),%eax
084d1e39 +0x1af:  mov    %eax,(%esp)
084d1e3c +0x1b2:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
084d1e41 +0x1b7:  mov    0xc(%ebp),%eax
084d1e44 +0x1ba:  mov    %eax,(%esp)
084d1e47 +0x1bd:  call   08651740 <_ZN5CUser16UpdateCharacViewEv>  ; CUser::UpdateCharacView()
084d1e4c +0x1c2:  mov    -0x20(%ebp),%eax
084d1e4f +0x1c5:  mov    0x2c(%eax),%eax
084d1e52 +0x1c8:  test   %eax,%eax
084d1e54 +0x1ca:  je     084d1eb7 <+0x22d>
084d1e56 +0x1cc:  mov    -0x20(%ebp),%eax
084d1e59 +0x1cf:  add    $0x4,%eax
084d1e5c +0x1d2:  mov    %eax,-0x108(%ebp)
084d1e62 +0x1d8:  mov    -0x20(%ebp),%eax
084d1e65 +0x1db:  mov    0x2c(%eax),%edi
084d1e68 +0x1de:  mov    -0x20(%ebp),%eax
084d1e6b +0x1e1:  mov    (%eax),%eax
084d1e6d +0x1e3:  mov    %eax,%esi
084d1e6f +0x1e5:  mov    0xc(%ebp),%eax
084d1e72 +0x1e8:  mov    %eax,(%esp)
084d1e75 +0x1eb:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
084d1e7a +0x1f0:  mov    %eax,%ebx
084d1e7c +0x1f2:  mov    0xc(%ebp),%eax
084d1e7f +0x1f5:  mov    %eax,(%esp)
084d1e82 +0x1f8:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
084d1e87 +0x1fd:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%edx
084d1e8d +0x203:  mov    %eax,0x4(%esp)
084d1e91 +0x207:  mov    %edx,(%esp)
084d1e94 +0x20a:  call   0811d3b8 <_GLOBAL__I__ZN14CGuildWarEventC2Ev+0x1c>  ; global constructors keyed to CGuildWarEvent::CGuildWarEvent()+0x1c
084d1e99 +0x20f:  mov    -0x108(%ebp),%edx
084d1e9f +0x215:  mov    %edx,0x10(%esp)
084d1ea3 +0x219:  mov    %edi,0xc(%esp)
084d1ea7 +0x21d:  mov    %esi,0x8(%esp)
084d1eab +0x221:  mov    %ebx,0x4(%esp)
084d1eaf +0x225:  mov    %eax,(%esp)
084d1eb2 +0x228:  call   0846e3c8 <_ZN17CGuildServerProxy18SendChangeCharNameEjjjPc>  ; CGuildServerProxy::SendChangeCharName(unsigned int, unsigned int, unsigned int, char*)
084d1eb7 +0x22d:  mov    -0x20(%ebp),%eax
084d1eba +0x230:  add    $0x4,%eax
084d1ebd +0x233:  mov    %eax,-0x104(%ebp)
084d1ec3 +0x239:  mov    -0x20(%ebp),%eax
084d1ec6 +0x23c:  mov    0x2c(%eax),%edi
084d1ec9 +0x23f:  mov    -0x20(%ebp),%eax
084d1ecc +0x242:  mov    (%eax),%eax
084d1ece +0x244:  mov    %eax,%esi
084d1ed0 +0x246:  mov    0xc(%ebp),%eax
084d1ed3 +0x249:  mov    %eax,(%esp)
084d1ed6 +0x24c:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
084d1edb +0x251:  mov    %eax,%ebx
084d1edd +0x253:  mov    0xc(%ebp),%eax
084d1ee0 +0x256:  mov    %eax,(%esp)
084d1ee3 +0x259:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
084d1ee8 +0x25e:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%edx
084d1eee +0x264:  mov    %eax,0x4(%esp)
084d1ef2 +0x268:  mov    %edx,(%esp)
084d1ef5 +0x26b:  call   0811208a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x159c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x159c
084d1efa +0x270:  mov    -0x104(%ebp),%edx
084d1f00 +0x276:  mov    %edx,0x10(%esp)
084d1f04 +0x27a:  mov    %edi,0xc(%esp)
084d1f08 +0x27e:  mov    %esi,0x8(%esp)
084d1f0c +0x282:  mov    %ebx,0x4(%esp)
084d1f10 +0x286:  mov    %eax,(%esp)
084d1f13 +0x289:  call   08471288 <_ZN19CMonitorServerProxy18SendChangeCharNameEjjjPc>  ; CMonitorServerProxy::SendChangeCharName(unsigned int, unsigned int, unsigned int, char*)
084d1f18 +0x28e:  mov    -0x20(%ebp),%eax
084d1f1b +0x291:  mov    0x2c(%eax),%eax
084d1f1e +0x294:  test   %eax,%eax
084d1f20 +0x296:  je     084d1f83 <+0x2f9>
084d1f22 +0x298:  mov    -0x20(%ebp),%eax
084d1f25 +0x29b:  add    $0x4,%eax
084d1f28 +0x29e:  mov    %eax,-0x100(%ebp)
084d1f2e +0x2a4:  mov    -0x20(%ebp),%eax
084d1f31 +0x2a7:  mov    0x2c(%eax),%edi
084d1f34 +0x2aa:  mov    -0x20(%ebp),%eax
084d1f37 +0x2ad:  mov    (%eax),%eax
084d1f39 +0x2af:  mov    %eax,%esi
084d1f3b +0x2b1:  mov    0xc(%ebp),%eax
084d1f3e +0x2b4:  mov    %eax,(%esp)
084d1f41 +0x2b7:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
084d1f46 +0x2bc:  mov    %eax,%ebx
084d1f48 +0x2be:  mov    0xc(%ebp),%eax
084d1f4b +0x2c1:  mov    %eax,(%esp)
084d1f4e +0x2c4:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
084d1f53 +0x2c9:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%edx
084d1f59 +0x2cf:  mov    %eax,0x4(%esp)
084d1f5d +0x2d3:  mov    %edx,(%esp)
084d1f60 +0x2d6:  call   0811d3b8 <_GLOBAL__I__ZN14CGuildWarEventC2Ev+0x1c>  ; global constructors keyed to CGuildWarEvent::CGuildWarEvent()+0x1c
084d1f65 +0x2db:  mov    -0x100(%ebp),%edx
084d1f6b +0x2e1:  mov    %edx,0x10(%esp)
084d1f6f +0x2e5:  mov    %edi,0xc(%esp)
084d1f73 +0x2e9:  mov    %esi,0x8(%esp)
084d1f77 +0x2ed:  mov    %ebx,0x4(%esp)
084d1f7b +0x2f1:  mov    %eax,(%esp)
084d1f7e +0x2f4:  call   0846e3c8 <_ZN17CGuildServerProxy18SendChangeCharNameEjjjPc>  ; CGuildServerProxy::SendChangeCharName(unsigned int, unsigned int, unsigned int, char*)
084d1f83 +0x2f9:  mov    -0x20(%ebp),%eax
084d1f86 +0x2fc:  add    $0x4,%eax
084d1f89 +0x2ff:  mov    %eax,-0xfc(%ebp)
084d1f8f +0x305:  mov    -0x20(%ebp),%eax
084d1f92 +0x308:  mov    0x2c(%eax),%edi
084d1f95 +0x30b:  mov    -0x20(%ebp),%eax
084d1f98 +0x30e:  mov    (%eax),%eax
084d1f9a +0x310:  mov    %eax,%esi
084d1f9c +0x312:  mov    0xc(%ebp),%eax
084d1f9f +0x315:  mov    %eax,(%esp)
084d1fa2 +0x318:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
084d1fa7 +0x31d:  mov    %eax,%ebx
084d1fa9 +0x31f:  mov    0xc(%ebp),%eax
084d1fac +0x322:  mov    %eax,(%esp)
084d1faf +0x325:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
084d1fb4 +0x32a:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%edx
084d1fba +0x330:  mov    %eax,0x4(%esp)
084d1fbe +0x334:  mov    %edx,(%esp)
084d1fc1 +0x337:  call   0811208a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x159c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x159c
084d1fc6 +0x33c:  mov    -0xfc(%ebp),%edx
084d1fcc +0x342:  mov    %edx,0x10(%esp)
084d1fd0 +0x346:  mov    %edi,0xc(%esp)
084d1fd4 +0x34a:  mov    %esi,0x8(%esp)
084d1fd8 +0x34e:  mov    %ebx,0x4(%esp)
084d1fdc +0x352:  mov    %eax,(%esp)
084d1fdf +0x355:  call   08471288 <_ZN19CMonitorServerProxy18SendChangeCharNameEjjjPc>  ; CMonitorServerProxy::SendChangeCharName(unsigned int, unsigned int, unsigned int, char*)
084d1fe4 +0x35a:  jmp    084d2001 <+0x377>
084d1fe6 +0x35c:  mov    %edx,%ebx
084d1fe8 +0x35e:  mov    %eax,%esi
084d1fea +0x360:  lea    -0x34(%ebp),%eax
084d1fed +0x363:  mov    %eax,(%esp)
084d1ff0 +0x366:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d1ff5 +0x36b:  mov    %esi,%eax
084d1ff7 +0x36d:  mov    %ebx,%edx
084d1ff9 +0x36f:  mov    %eax,(%esp)
084d1ffc +0x372:  call   08ae3750 <_Unwind_Resume>
084d2001 +0x377:  lea    -0x34(%ebp),%eax
084d2004 +0x37a:  mov    %eax,(%esp)
084d2007 +0x37d:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d200c +0x382:  mov    -0x20(%ebp),%eax
084d200f +0x385:  mov    0x28(%eax),%eax
084d2012 +0x388:  test   %eax,%eax
084d2014 +0x38a:  je     084d2025 <+0x39b>
084d2016 +0x38c:  jmp    084d22b7 <+0x62d>
084d201b +0x391:  mov    $0x31ae,%eax
084d2020 +0x396:  jmp    084d22f1 <+0x667>
084d2025 +0x39b:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
084d202c +0x3a2:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
084d2031 +0x3a7:  cmp    $0x464a1f50,%eax
084d2036 +0x3ac:  setg   %al
084d2039 +0x3af:  test   %al,%al
084d203b +0x3b1:  je     084d2047 <+0x3bd>
084d203d +0x3b3:  mov    $0x0,%eax
084d2042 +0x3b8:  jmp    084d22f1 <+0x667>
084d2047 +0x3bd:  mov    -0x20(%ebp),%eax
084d204a +0x3c0:  mov    (%eax),%eax
084d204c +0x3c2:  mov    %eax,0x4(%esp)
084d2050 +0x3c6:  mov    0xc(%ebp),%eax
084d2053 +0x3c9:  mov    %eax,(%esp)
084d2056 +0x3cc:  call   084ecbe0 <_GLOBAL__I__Z7getUserj+0x3b92>  ; global constructors keyed to getUser(unsigned int)+0x3b92
084d205b +0x3d1:  mov    %ax,-0x1a(%ebp)
084d205f +0x3d5:  cmpw   $0x0,-0x1a(%ebp)
084d2064 +0x3da:  jg     084d2070 <+0x3e6>
084d2066 +0x3dc:  mov    $0x31b7,%eax
084d206b +0x3e1:  jmp    084d22f1 <+0x667>
084d2070 +0x3e6:  cmpw   $0x31,-0x1a(%ebp)
084d2075 +0x3eb:  jle    084d2128 <+0x49e>
084d207b +0x3f1:  lea    -0x71(%ebp),%eax
084d207e +0x3f4:  mov    %eax,(%esp)
084d2081 +0x3f7:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
084d2086 +0x3fc:  movl   $0x24,-0x6f(%ebp)
084d208d +0x403:  movb   $0x2,-0x70(%ebp)
084d2091 +0x407:  movl   $0x5,-0x6a(%ebp)
084d2098 +0x40e:  movw   $0x0,-0x66(%ebp)
084d209e +0x414:  lea    -0x71(%ebp),%eax
084d20a1 +0x417:  mov    %eax,(%esp)
084d20a4 +0x41a:  call   080cb892 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6df>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6df
084d20a9 +0x41f:  mov    0xc(%ebp),%eax
084d20ac +0x422:  mov    %eax,(%esp)
084d20af +0x425:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
084d20b4 +0x42a:  mov    %eax,%ebx
084d20b6 +0x42c:  mov    -0x20(%ebp),%eax
084d20b9 +0x42f:  mov    (%eax),%eax
084d20bb +0x431:  mov    %eax,%esi
084d20bd +0x433:  movl   $0x0,0xc(%esp)
084d20c5 +0x43b:  movl   $"game_server_msg_01",0x8(%esp)
084d20cd +0x443:  movl   $0x4,0x4(%esp)
084d20d5 +0x44b:  movl   $&g_scriptStringManager_,(%esp)
084d20dc +0x452:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
084d20e1 +0x457:  movl   $0x0,0x24(%esp)
084d20e9 +0x45f:  movl   $0x0,0x20(%esp)
084d20f1 +0x467:  mov    %ebx,0x1c(%esp)
084d20f5 +0x46b:  movl   $0x0,0x18(%esp)
084d20fd +0x473:  movl   $0x0,0x14(%esp)
084d2105 +0x47b:  movl   $0x0,0x10(%esp)
084d210d +0x483:  mov    %esi,0xc(%esp)
084d2111 +0x487:  movl   $0x0,0x8(%esp)
084d2119 +0x48f:  lea    -0x71(%ebp),%edx
084d211c +0x492:  mov    %edx,0x4(%esp)
084d2120 +0x496:  mov    %eax,(%esp)
084d2123 +0x499:  call   085555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>  ; WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(char const*, Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool, bool)
084d2128 +0x49e:  cmpw   $0x27,-0x1a(%ebp)
084d212d +0x4a3:  jle    084d21f5 <+0x56b>
084d2133 +0x4a9:  lea    -0xae(%ebp),%eax
084d2139 +0x4af:  mov    %eax,(%esp)
084d213c +0x4b2:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
084d2141 +0x4b7:  movl   $0x10,-0xac(%ebp)
084d214b +0x4c1:  movb   $0x2,-0xad(%ebp)
084d2152 +0x4c8:  movl   $0x1,-0xa7(%ebp)
084d215c +0x4d2:  movw   $0x0,-0xa3(%ebp)
084d2165 +0x4db:  lea    -0xae(%ebp),%eax
084d216b +0x4e1:  mov    %eax,(%esp)
084d216e +0x4e4:  call   080cb892 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6df>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6df
084d2173 +0x4e9:  mov    0xc(%ebp),%eax
084d2176 +0x4ec:  mov    %eax,(%esp)
084d2179 +0x4ef:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
084d217e +0x4f4:  mov    %eax,%ebx
084d2180 +0x4f6:  mov    -0x20(%ebp),%eax
084d2183 +0x4f9:  mov    (%eax),%eax
084d2185 +0x4fb:  mov    %eax,%esi
084d2187 +0x4fd:  movl   $0x0,0xc(%esp)
084d218f +0x505:  movl   $"game_server_msg_01",0x8(%esp)
084d2197 +0x50d:  movl   $0x4,0x4(%esp)
084d219f +0x515:  movl   $&g_scriptStringManager_,(%esp)
084d21a6 +0x51c:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
084d21ab +0x521:  movl   $0x0,0x24(%esp)
084d21b3 +0x529:  movl   $0x0,0x20(%esp)
084d21bb +0x531:  mov    %ebx,0x1c(%esp)
084d21bf +0x535:  movl   $0x0,0x18(%esp)
084d21c7 +0x53d:  movl   $0x0,0x14(%esp)
084d21cf +0x545:  movl   $0x0,0x10(%esp)
084d21d7 +0x54d:  mov    %esi,0xc(%esp)
084d21db +0x551:  movl   $0x0,0x8(%esp)
084d21e3 +0x559:  lea    -0xae(%ebp),%edx
084d21e9 +0x55f:  mov    %edx,0x4(%esp)
084d21ed +0x563:  mov    %eax,(%esp)
084d21f0 +0x566:  call   085555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>  ; WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(char const*, Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool, bool)
084d21f5 +0x56b:  lea    -0xeb(%ebp),%eax
084d21fb +0x571:  mov    %eax,(%esp)
084d21fe +0x574:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
084d2203 +0x579:  movl   $0x1,-0xe9(%ebp)
084d220d +0x583:  movb   $0x2,-0xea(%ebp)
084d2214 +0x58a:  movl   $0xa,-0xe4(%ebp)
084d221e +0x594:  movw   $0x0,-0xe0(%ebp)
084d2227 +0x59d:  lea    -0xeb(%ebp),%eax
084d222d +0x5a3:  mov    %eax,(%esp)
084d2230 +0x5a6:  call   080cb892 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6df>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6df
084d2235 +0x5ab:  mov    0xc(%ebp),%eax
084d2238 +0x5ae:  mov    %eax,(%esp)
084d223b +0x5b1:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
084d2240 +0x5b6:  mov    %eax,%ebx
084d2242 +0x5b8:  mov    -0x20(%ebp),%eax
084d2245 +0x5bb:  mov    (%eax),%eax
084d2247 +0x5bd:  mov    %eax,%esi
084d2249 +0x5bf:  movl   $0x0,0xc(%esp)
084d2251 +0x5c7:  movl   $"game_server_msg_01",0x8(%esp)
084d2259 +0x5cf:  movl   $0x4,0x4(%esp)
084d2261 +0x5d7:  movl   $&g_scriptStringManager_,(%esp)
084d2268 +0x5de:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
084d226d +0x5e3:  movl   $0x0,0x24(%esp)
084d2275 +0x5eb:  movl   $0x0,0x20(%esp)
084d227d +0x5f3:  mov    %ebx,0x1c(%esp)
084d2281 +0x5f7:  movl   $0x0,0x18(%esp)
084d2289 +0x5ff:  movl   $0x0,0x14(%esp)
084d2291 +0x607:  movl   $0x0,0x10(%esp)
084d2299 +0x60f:  mov    %esi,0xc(%esp)
084d229d +0x613:  movl   $0x0,0x8(%esp)
084d22a5 +0x61b:  lea    -0xeb(%ebp),%edx
084d22ab +0x621:  mov    %edx,0x4(%esp)
084d22af +0x625:  mov    %eax,(%esp)
084d22b2 +0x628:  call   085555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>  ; WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(char const*, Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool, bool)
084d22b7 +0x62d:  mov    -0x20(%ebp),%eax
084d22ba +0x630:  mov    0x28(%eax),%eax
084d22bd +0x633:  mov    %eax,%ebx
084d22bf +0x635:  mov    -0x20(%ebp),%eax
084d22c2 +0x638:  add    $0x4,%eax
084d22c5 +0x63b:  mov    %eax,%ecx
084d22c7 +0x63d:  mov    -0x20(%ebp),%eax
084d22ca +0x640:  mov    (%eax),%edx
084d22cc +0x642:  mov    &_ZN10GlobalData15s_event_managerE,%eax
084d22d1 +0x647:  mov    %ebx,0x10(%esp)
084d22d5 +0x64b:  mov    %ecx,0xc(%esp)
084d22d9 +0x64f:  mov    %edx,0x8(%esp)
084d22dd +0x653:  mov    0xc(%ebp),%edx
084d22e0 +0x656:  mov    %edx,0x4(%esp)
084d22e4 +0x65a:  mov    %eax,(%esp)
084d22e7 +0x65d:  call   08116276 <_ZN13CEventManager16changeCharacNameEP5CUseriPci>  ; CEventManager::changeCharacName(CUser*, int, char*, int)
084d22ec +0x662:  mov    $0x0,%eax
084d22f1 +0x667:  add    $0x12c,%esp
084d22f7 +0x66d:  pop    %ebx
084d22f8 +0x66e:  pop    %esi
084d22f9 +0x66f:  pop    %edi
084d22fa +0x670:  pop    %ebp
084d22fb +0x671:  ret
```

## 反编译 C

```c
// Inter_ReqChangeCharacName::dispatch_sig @ 0x84d1c8a

/* Inter_ReqChangeCharacName::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_ReqChangeCharacName::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  uint *puVar6;
  uint uVar7;
  CGuildServerProxy *pCVar8;
  CMonitorServerProxy *pCVar9;
  undefined4 uVar10;
  Inven_Item local_ef;
  undefined1 local_ee;
  undefined4 local_ed;
  undefined4 local_e8;
  undefined2 local_e4;
  Inven_Item local_b2;
  undefined1 local_b1;
  undefined4 local_b0;
  undefined4 local_ab;
  undefined2 local_a7;
  Inven_Item local_75;
  undefined1 local_74;
  undefined4 local_73;
  undefined4 local_6e;
  undefined2 local_6a;
  PacketGuard local_38 [12];
  string local_2c;
  allocator<char> local_25;
  uint *local_24;
  short local_1e;
  
  iVar4 = CUser::get_state((CUser *)param_2);
  if (iVar4 < 2) {
    uVar5 = 0;
  }
  else {
    local_24 = (uint *)param_3;
    if (*(int *)(param_3 + 0x24) == 0) {
      cVar3 = CUser::setCharacName((CUser *)param_2,*(int *)param_3,(char *)(param_3 + 4));
      if (cVar3 == '\0') {
        uVar5 = 0x31ae;
      }
      else {
        PacketGuard::PacketGuard(local_38);
                    /* try { // try from 084d1d5f to 084d1db7 has its CatchHandler @ 084d1fe6 */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_38,1,0x8a);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_38,1);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_38,true);
        CUser::Send((CUser *)param_2,local_38);
        CUser::SetCharacViewStateByCharacNo((CUser *)param_2,*local_24,1);
        std::allocator<char>::allocator();
                    /* try { // try from 084d1dda to 084d1dde has its CatchHandler @ 084d1e1e */
        std::string::string((string *)&local_2c,(char *)(local_24 + 1),(allocator *)&local_25);
                    /* try { // try from 084d1df5 to 084d1df9 has its CatchHandler @ 084d1dfc */
        CUser::UpdateCharacNameInMercenary((CUser *)param_2,*local_24,&local_2c);
                    /* try { // try from 084d1e17 to 084d1e1b has its CatchHandler @ 084d1e1e */
        std::string::~string((string *)&local_2c);
        std::allocator<char>::~allocator(&local_25);
                    /* try { // try from 084d1e47 to 084d1fe3 has its CatchHandler @ 084d1fe6 */
        CUser::UpdateCharacView((CUser *)param_2);
        if (local_24[0xb] != 0) {
          puVar6 = local_24 + 1;
          uVar1 = local_24[0xb];
          uVar2 = *local_24;
          uVar7 = CUser::get_acc_id((CUser *)param_2);
          uVar5 = CUser::GetServerGroup((CUser *)param_2);
          pCVar8 = (CGuildServerProxy *)
                   CServerProxyMgr<CGuildServerProxy>::GetServerProxy
                             (GlobalData::s_guild_proxy_mgr,uVar5);
          CGuildServerProxy::SendChangeCharName(pCVar8,uVar7,uVar2,uVar1,(char *)puVar6);
        }
        puVar6 = local_24 + 1;
        uVar1 = local_24[0xb];
        uVar2 = *local_24;
        uVar7 = CUser::get_acc_id((CUser *)param_2);
        uVar5 = CUser::GetServerGroup((CUser *)param_2);
        pCVar9 = (CMonitorServerProxy *)
                 CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                           (GlobalData::s_monitor_proxy_mgr,uVar5);
        CMonitorServerProxy::SendChangeCharName(pCVar9,uVar7,uVar2,uVar1,(char *)puVar6);
        if (local_24[0xb] != 0) {
          puVar6 = local_24 + 1;
          uVar1 = local_24[0xb];
          uVar2 = *local_24;
          uVar7 = CUser::get_acc_id((CUser *)param_2);
          uVar5 = CUser::GetServerGroup((CUser *)param_2);
          pCVar8 = (CGuildServerProxy *)
                   CServerProxyMgr<CGuildServerProxy>::GetServerProxy
                             (GlobalData::s_guild_proxy_mgr,uVar5);
          CGuildServerProxy::SendChangeCharName(pCVar8,uVar7,uVar2,uVar1,(char *)puVar6);
        }
        puVar6 = local_24 + 1;
        uVar1 = local_24[0xb];
        uVar2 = *local_24;
        uVar7 = CUser::get_acc_id((CUser *)param_2);
        uVar5 = CUser::GetServerGroup((CUser *)param_2);
        pCVar9 = (CMonitorServerProxy *)
                 CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                           (GlobalData::s_monitor_proxy_mgr,uVar5);
        CMonitorServerProxy::SendChangeCharName(pCVar9,uVar7,uVar2,uVar1,(char *)puVar6);
        PacketGuard::~PacketGuard(local_38);
        if (local_24[10] == 0) {
          iVar4 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
          if (0x464a1f50 < iVar4) {
            return 0;
          }
          local_1e = CUser::getCharacLevelByCharacNo((CUser *)param_2,*local_24);
          if (local_1e < 1) {
            return 0x31b7;
          }
          if (0x31 < local_1e) {
            Inven_Item::Inven_Item(&local_75);
            local_73 = 0x24;
            local_74 = 2;
            local_6e = 5;
            local_6a = 0;
            Inven_Item::ResetItemAttr(&local_75);
            uVar5 = CUser::GetServerGroup((CUser *)param_2);
            uVar1 = *local_24;
            uVar10 = RDARScriptStringManager::findString
                               ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                "game_server_msg_01",(bool *)0x0);
            WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                      (uVar10,&local_75,0,uVar1,0,0,0,uVar5,0,0);
          }
          if (0x27 < local_1e) {
            Inven_Item::Inven_Item(&local_b2);
            local_b0 = 0x10;
            local_b1 = 2;
            local_ab = 1;
            local_a7 = 0;
            Inven_Item::ResetItemAttr(&local_b2);
            uVar5 = CUser::GetServerGroup((CUser *)param_2);
            uVar1 = *local_24;
            uVar10 = RDARScriptStringManager::findString
                               ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                "game_server_msg_01",(bool *)0x0);
            WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                      (uVar10,&local_b2,0,uVar1,0,0,0,uVar5,0,0);
          }
          Inven_Item::Inven_Item(&local_ef);
          local_ed = 1;
          local_ee = 2;
          local_e8 = 10;
          local_e4 = 0;
          Inven_Item::ResetItemAttr(&local_ef);
          uVar5 = CUser::GetServerGroup((CUser *)param_2);
          uVar1 = *local_24;
          uVar10 = RDARScriptStringManager::findString
                             ((RDARScriptStringManager *)g_scriptStringManager_,4,
                              "game_server_msg_01",(bool *)0x0);
          WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(uVar10,&local_ef,0,uVar1,0,0,0,uVar5,0,0)
          ;
        }
        CEventManager::changeCharacName
                  (GlobalData::s_event_manager,(CUser *)param_2,*local_24,(char *)(local_24 + 1),
                   local_24[10]);
        uVar5 = 0;
      }
    }
    else {
      CUser::SendCmdErrorPacket((CUser *)param_2,0x8a,*(uint *)(param_3 + 0x24) & 0xff);
      CUser::SetCharacViewStateByCharacNo((CUser *)param_2,*local_24,0xff);
      CUser::UpdateCharacView((CUser *)param_2);
      uVar5 = 0;
    }
  }
  return uVar5;
}
```
