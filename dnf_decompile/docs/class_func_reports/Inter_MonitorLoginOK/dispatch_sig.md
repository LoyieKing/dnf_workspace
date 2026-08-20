# dispatch_sig

`_ZN20Inter_MonitorLoginOK12dispatch_sigEP5CUserPci`

`Inter_MonitorLoginOK::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_MonitorLoginOK` | `0x084c7e0c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084c7e0c  _ZN20Inter_MonitorLoginOK12dispatch_sigEP5CUserPci
#           Inter_MonitorLoginOK::dispatch_sig(CUser*, char*, int)
# range [0x084c7e0c, 0x084c89b1]
084c7e0c +0x000:  push   %ebp
084c7e0d +0x001:  mov    %esp,%ebp
084c7e0f +0x003:  push   %edi
084c7e10 +0x004:  push   %esi
084c7e11 +0x005:  push   %ebx
084c7e12 +0x006:  sub    $0x12c,%esp
084c7e18 +0x00c:  mov    0xc(%ebp),%eax
084c7e1b +0x00f:  mov    %eax,(%esp)
084c7e1e +0x012:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084c7e23 +0x017:  test   %eax,%eax
084c7e25 +0x019:  sete   %al
084c7e28 +0x01c:  test   %al,%al
084c7e2a +0x01e:  je     084c7e36 <+0x2a>
084c7e2c +0x020:  mov    $0x206a,%ebx
084c7e31 +0x025:  jmp    084c89a4 <+0xb98>
084c7e36 +0x02a:  mov    0x10(%ebp),%eax
084c7e39 +0x02d:  mov    %eax,-0x30(%ebp)
084c7e3c +0x030:  movl   $0x0,0x4(%esp)
084c7e44 +0x038:  mov    0xc(%ebp),%eax
084c7e47 +0x03b:  mov    %eax,(%esp)
084c7e4a +0x03e:  call   0822fd5c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5406>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5406
084c7e4f +0x043:  movl   $0x0,0x4(%esp)
084c7e57 +0x04b:  mov    0xc(%ebp),%eax
084c7e5a +0x04e:  mov    %eax,(%esp)
084c7e5d +0x051:  call   0822fd6e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5418>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5418
084c7e62 +0x056:  movl   $0x0,0x4(%esp)
084c7e6a +0x05e:  mov    0xc(%ebp),%eax
084c7e6d +0x061:  mov    %eax,(%esp)
084c7e70 +0x064:  call   0822fd80 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x542a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x542a
084c7e75 +0x069:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084c7e7a +0x06e:  mov    %eax,(%esp)
084c7e7d +0x071:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
084c7e82 +0x076:  cmp    $0x8,%eax
084c7e85 +0x079:  sete   %al
084c7e88 +0x07c:  test   %al,%al
084c7e8a +0x07e:  je     084c7f1e <+0x112>
084c7e90 +0x084:  mov    -0x30(%ebp),%eax
084c7e93 +0x087:  mov    0x24(%eax),%eax
084c7e96 +0x08a:  test   %eax,%eax
084c7e98 +0x08c:  jne    084c7f1e <+0x112>
084c7e9e +0x092:  mov    -0x30(%ebp),%eax
084c7ea1 +0x095:  mov    0x28(%eax),%eax
084c7ea4 +0x098:  test   %eax,%eax
084c7ea6 +0x09a:  jne    084c7f1e <+0x112>
084c7ea8 +0x09c:  mov    -0x30(%ebp),%eax
084c7eab +0x09f:  mov    0x28(%eax),%edi
084c7eae +0x0a2:  mov    -0x30(%ebp),%eax
084c7eb1 +0x0a5:  mov    0x24(%eax),%esi
084c7eb4 +0x0a8:  mov    -0x30(%ebp),%eax
084c7eb7 +0x0ab:  mov    0xe(%eax),%eax
084c7eba +0x0ae:  movl   $0x0,0x4(%esp)
084c7ec2 +0x0b6:  mov    %eax,(%esp)
084c7ec5 +0x0b9:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
084c7eca +0x0be:  mov    %eax,%ebx
084c7ecc +0x0c0:  movl   $0x0,0xc(%esp)
084c7ed4 +0x0c8:  movl   $0x2075,0x8(%esp)
084c7edc +0x0d0:  movl   $&_ZZN20Inter_MonitorLoginOK12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084c7ee4 +0x0d8:  lea    -0xa0(%ebp),%eax
084c7eea +0x0de:  mov    %eax,(%esp)
084c7eed +0x0e1:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084c7ef2 +0x0e6:  mov    %edi,0x10(%esp)
084c7ef6 +0x0ea:  mov    %esi,0xc(%esp)
084c7efa +0x0ee:  mov    %ebx,0x8(%esp)
084c7efe +0x0f2:  movl   $"Inter_MonitorLoginOK() mid(%s), charac_no(%d), channel_no(%d)",0x4(%esp)
084c7f06 +0x0fa:  lea    -0xa0(%ebp),%eax
084c7f0c +0x100:  mov    %eax,(%esp)
084c7f0f +0x103:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084c7f14 +0x108:  mov    $0x2076,%ebx
084c7f19 +0x10d:  jmp    084c89a4 <+0xb98>
084c7f1e +0x112:  mov    -0x30(%ebp),%eax
084c7f21 +0x115:  mov    0x28(%eax),%edi
084c7f24 +0x118:  mov    -0x30(%ebp),%eax
084c7f27 +0x11b:  mov    0x24(%eax),%esi
084c7f2a +0x11e:  mov    -0x30(%ebp),%eax
084c7f2d +0x121:  mov    0xe(%eax),%eax
084c7f30 +0x124:  movl   $0x0,0x4(%esp)
084c7f38 +0x12c:  mov    %eax,(%esp)
084c7f3b +0x12f:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
084c7f40 +0x134:  mov    %eax,%ebx
084c7f42 +0x136:  movl   $0x0,0xc(%esp)
084c7f4a +0x13e:  movl   $0x207a,0x8(%esp)
084c7f52 +0x146:  movl   $&_ZZN20Inter_MonitorLoginOK12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084c7f5a +0x14e:  lea    -0x90(%ebp),%eax
084c7f60 +0x154:  mov    %eax,(%esp)
084c7f63 +0x157:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084c7f68 +0x15c:  mov    %edi,0x10(%esp)
084c7f6c +0x160:  mov    %esi,0xc(%esp)
084c7f70 +0x164:  mov    %ebx,0x8(%esp)
084c7f74 +0x168:  movl   $"Inter_MonitorLoginOK() mid(%s), charac_no(%d), channel_no(%d)",0x4(%esp)
084c7f7c +0x170:  lea    -0x90(%ebp),%eax
084c7f82 +0x176:  mov    %eax,(%esp)
084c7f85 +0x179:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084c7f8a +0x17e:  lea    -0xac(%ebp),%eax
084c7f90 +0x184:  mov    %eax,(%esp)
084c7f93 +0x187:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084c7f98 +0x18c:  movl   $0x1,0x8(%esp)
084c7fa0 +0x194:  movl   $0x1,0x4(%esp)
084c7fa8 +0x19c:  lea    -0xac(%ebp),%eax
084c7fae +0x1a2:  mov    %eax,(%esp)
084c7fb1 +0x1a5:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084c7fb6 +0x1aa:  mov    -0x30(%ebp),%eax
084c7fb9 +0x1ad:  movzbl 0x23(%eax),%eax
084c7fbd +0x1b1:  cmp    $0x2,%al
084c7fbf +0x1b3:  jne    084c807f <+0x273>
084c7fc5 +0x1b9:  movl   $0x0,0x4(%esp)
084c7fcd +0x1c1:  lea    -0xac(%ebp),%eax
084c7fd3 +0x1c7:  mov    %eax,(%esp)
084c7fd6 +0x1ca:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084c7fdb +0x1cf:  movl   $0x12,0x4(%esp)
084c7fe3 +0x1d7:  lea    -0xac(%ebp),%eax
084c7fe9 +0x1dd:  mov    %eax,(%esp)
084c7fec +0x1e0:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084c7ff1 +0x1e5:  movl   $0x1,0x4(%esp)
084c7ff9 +0x1ed:  lea    -0xac(%ebp),%eax
084c7fff +0x1f3:  mov    %eax,(%esp)
084c8002 +0x1f6:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084c8007 +0x1fb:  lea    -0xac(%ebp),%eax
084c800d +0x201:  mov    %eax,0x4(%esp)
084c8011 +0x205:  mov    0xc(%ebp),%eax
084c8014 +0x208:  mov    %eax,(%esp)
084c8017 +0x20b:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084c801c +0x210:  movl   $0x0,0xc(%esp)
084c8024 +0x218:  movl   $0x1,0x8(%esp)
084c802c +0x220:  movl   $0xc,0x4(%esp)
084c8034 +0x228:  mov    0xc(%ebp),%eax
084c8037 +0x22b:  mov    %eax,(%esp)
084c803a +0x22e:  call   086489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>  ; CUser::DisConnSig(DISCONN_SIG, bool, int)
084c803f +0x233:  movl   $0x0,0xc(%esp)
084c8047 +0x23b:  movl   $0x2088,0x8(%esp)
084c804f +0x243:  movl   $&_ZZN20Inter_MonitorLoginOK12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084c8057 +0x24b:  lea    -0x80(%ebp),%eax
084c805a +0x24e:  mov    %eax,(%esp)
084c805d +0x251:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084c8062 +0x256:  movl   $"info.err_code == SIG_LOGIN_DATA::ERROR_ALREADY",0x4(%esp)
084c806a +0x25e:  lea    -0x80(%ebp),%eax
084c806d +0x261:  mov    %eax,(%esp)
084c8070 +0x264:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084c8075 +0x269:  mov    $0x0,%ebx
084c807a +0x26e:  jmp    084c8996 <+0xb8a>
084c807f +0x273:  mov    -0x30(%ebp),%eax
084c8082 +0x276:  movzbl 0x23(%eax),%eax
084c8086 +0x27a:  cmp    $0x3,%al
084c8088 +0x27c:  jne    084c8148 <+0x33c>
084c808e +0x282:  movl   $0x0,0x4(%esp)
084c8096 +0x28a:  lea    -0xac(%ebp),%eax
084c809c +0x290:  mov    %eax,(%esp)
084c809f +0x293:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084c80a4 +0x298:  movl   $0x41,0x4(%esp)
084c80ac +0x2a0:  lea    -0xac(%ebp),%eax
084c80b2 +0x2a6:  mov    %eax,(%esp)
084c80b5 +0x2a9:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084c80ba +0x2ae:  movl   $0x1,0x4(%esp)
084c80c2 +0x2b6:  lea    -0xac(%ebp),%eax
084c80c8 +0x2bc:  mov    %eax,(%esp)
084c80cb +0x2bf:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084c80d0 +0x2c4:  lea    -0xac(%ebp),%eax
084c80d6 +0x2ca:  mov    %eax,0x4(%esp)
084c80da +0x2ce:  mov    0xc(%ebp),%eax
084c80dd +0x2d1:  mov    %eax,(%esp)
084c80e0 +0x2d4:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084c80e5 +0x2d9:  movl   $0x0,0xc(%esp)
084c80ed +0x2e1:  movl   $0x1,0x8(%esp)
084c80f5 +0x2e9:  movl   $0x15,0x4(%esp)
084c80fd +0x2f1:  mov    0xc(%ebp),%eax
084c8100 +0x2f4:  mov    %eax,(%esp)
084c8103 +0x2f7:  call   086489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>  ; CUser::DisConnSig(DISCONN_SIG, bool, int)
084c8108 +0x2fc:  movl   $0x0,0xc(%esp)
084c8110 +0x304:  movl   $0x2095,0x8(%esp)
084c8118 +0x30c:  movl   $&_ZZN20Inter_MonitorLoginOK12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084c8120 +0x314:  lea    -0x70(%ebp),%eax
084c8123 +0x317:  mov    %eax,(%esp)
084c8126 +0x31a:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084c812b +0x31f:  movl   $"info.err_code == SIG_LOGIN_DATA::ERROR_ALREADY",0x4(%esp)
084c8133 +0x327:  lea    -0x70(%ebp),%eax
084c8136 +0x32a:  mov    %eax,(%esp)
084c8139 +0x32d:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084c813e +0x332:  mov    $0x0,%ebx
084c8143 +0x337:  jmp    084c8996 <+0xb8a>
084c8148 +0x33c:  mov    -0x30(%ebp),%eax
084c814b +0x33f:  movzbl 0x23(%eax),%eax
084c814f +0x343:  cmp    $0x1,%al
084c8151 +0x345:  jne    084c892b <+0xb1f>
084c8157 +0x34b:  movl   $0x1,0x4(%esp)
084c815f +0x353:  lea    -0xac(%ebp),%eax
084c8165 +0x359:  mov    %eax,(%esp)
084c8168 +0x35c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084c816d +0x361:  mov    0xc(%ebp),%eax
084c8170 +0x364:  mov    %eax,(%esp)
084c8173 +0x367:  call   08101072 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x94>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x94
084c8178 +0x36c:  movl   $0x14,0x4(%esp)
084c8180 +0x374:  mov    %eax,(%esp)
084c8183 +0x377:  call   0807e8a0 <_init+0x1198>
084c8188 +0x37c:  mov    %eax,-0x2c(%ebp)
084c818b +0x37f:  mov    0xc(%ebp),%eax
084c818e +0x382:  mov    %eax,(%esp)
084c8191 +0x385:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
084c8196 +0x38a:  mov    %eax,(%esp)
084c8199 +0x38d:  call   0822efda <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4684>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4684
084c819e +0x392:  test   %al,%al
084c81a0 +0x394:  je     084c81a9 <+0x39d>
084c81a2 +0x396:  mov    $0x1,%eax
084c81a7 +0x39b:  jmp    084c81ae <+0x3a2>
084c81a9 +0x39d:  mov    $0x0,%eax
084c81ae +0x3a2:  mov    %al,-0x26(%ebp)
084c81b1 +0x3a5:  movb   $0x0,-0x25(%ebp)
084c81b5 +0x3a9:  mov    -0x2c(%ebp),%eax
084c81b8 +0x3ac:  mov    %eax,0x4(%esp)
084c81bc +0x3b0:  lea    -0xac(%ebp),%eax
084c81c2 +0x3b6:  mov    %eax,(%esp)
084c81c5 +0x3b9:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084c81ca +0x3be:  mov    0xc(%ebp),%eax
084c81cd +0x3c1:  mov    %eax,(%esp)
084c81d0 +0x3c4:  call   08101072 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x94>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x94
084c81d5 +0x3c9:  mov    -0x2c(%ebp),%edx
084c81d8 +0x3cc:  mov    %edx,0x8(%esp)
084c81dc +0x3d0:  mov    %eax,0x4(%esp)
084c81e0 +0x3d4:  lea    -0xac(%ebp),%eax
084c81e6 +0x3da:  mov    %eax,(%esp)
084c81e9 +0x3dd:  call   0822b770 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xe1a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xe1a
084c81ee +0x3e2:  movsbl -0x26(%ebp),%eax
084c81f2 +0x3e6:  mov    %eax,0x4(%esp)
084c81f6 +0x3ea:  lea    -0xac(%ebp),%eax
084c81fc +0x3f0:  mov    %eax,(%esp)
084c81ff +0x3f3:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084c8204 +0x3f8:  movsbl -0x25(%ebp),%eax
084c8208 +0x3fc:  mov    %eax,0x4(%esp)
084c820c +0x400:  lea    -0xac(%ebp),%eax
084c8212 +0x406:  mov    %eax,(%esp)
084c8215 +0x409:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084c821a +0x40e:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
084c821f +0x413:  mov    %eax,(%esp)
084c8222 +0x416:  call   08106ce0 <_GLOBAL__I__ZN15CmmChannelProxyC2ESsi+0x162>  ; global constructors keyed to CmmChannelProxy::CmmChannelProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int)+0x162
084c8227 +0x41b:  mov    %eax,-0x24(%ebp)
084c822a +0x41e:  cmpl   $0x3,-0x24(%ebp)
084c822e +0x422:  jne    084c8248 <+0x43c>
084c8230 +0x424:  movl   $0x1,0x4(%esp)
084c8238 +0x42c:  lea    -0xac(%ebp),%eax
084c823e +0x432:  mov    %eax,(%esp)
084c8241 +0x435:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084c8246 +0x43a:  jmp    084c827d <+0x471>
084c8248 +0x43c:  mov    0xc(%ebp),%eax
084c824b +0x43f:  mov    %eax,(%esp)
084c824e +0x442:  call   0816ee1e <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0x10c>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0x10c
084c8253 +0x447:  mov    %eax,(%esp)
084c8256 +0x44a:  call   08173022 <_ZN6Taiwan14GarenaAuthData13getMobileAuthEv>  ; Taiwan::GarenaAuthData::getMobileAuth()
084c825b +0x44f:  test   %al,%al
084c825d +0x451:  je     084c8266 <+0x45a>
084c825f +0x453:  mov    $0x1,%eax
084c8264 +0x458:  jmp    084c826b <+0x45f>
084c8266 +0x45a:  mov    $0x0,%eax
084c826b +0x45f:  mov    %eax,0x4(%esp)
084c826f +0x463:  lea    -0xac(%ebp),%eax
084c8275 +0x469:  mov    %eax,(%esp)
084c8278 +0x46c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084c827d +0x471:  mov    0xc(%ebp),%eax
084c8280 +0x474:  mov    %eax,(%esp)
084c8283 +0x477:  call   080fdf88 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x2b4>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x2b4
084c8288 +0x47c:  mov    %eax,0x4(%esp)
084c828c +0x480:  lea    -0xac(%ebp),%eax
084c8292 +0x486:  mov    %eax,(%esp)
084c8295 +0x489:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084c829a +0x48e:  mov    0xc(%ebp),%eax
084c829d +0x491:  mov    %eax,(%esp)
084c82a0 +0x494:  call   084ecb00 <_GLOBAL__I__Z7getUserj+0x3ab2>  ; global constructors keyed to getUser(unsigned int)+0x3ab2
084c82a5 +0x499:  movzbl %al,%eax
084c82a8 +0x49c:  mov    %eax,0x4(%esp)
084c82ac +0x4a0:  lea    -0xac(%ebp),%eax
084c82b2 +0x4a6:  mov    %eax,(%esp)
084c82b5 +0x4a9:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084c82ba +0x4ae:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084c82bf +0x4b3:  mov    %eax,(%esp)
084c82c2 +0x4b6:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
084c82c7 +0x4bb:  movzbl %al,%eax
084c82ca +0x4be:  mov    %eax,0x4(%esp)
084c82ce +0x4c2:  lea    -0xac(%ebp),%eax
084c82d4 +0x4c8:  mov    %eax,(%esp)
084c82d7 +0x4cb:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084c82dc +0x4d0:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084c82e1 +0x4d5:  mov    %eax,(%esp)
084c82e4 +0x4d8:  call   084e930a <_GLOBAL__I__Z7getUserj+0x2bc>  ; global constructors keyed to getUser(unsigned int)+0x2bc
084c82e9 +0x4dd:  mov    %eax,0x4(%esp)
084c82ed +0x4e1:  lea    -0xac(%ebp),%eax
084c82f3 +0x4e7:  mov    %eax,(%esp)
084c82f6 +0x4ea:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084c82fb +0x4ef:  mov    0xc(%ebp),%eax
084c82fe +0x4f2:  mov    %eax,(%esp)
084c8301 +0x4f5:  call   084ec712 <_GLOBAL__I__Z7getUserj+0x36c4>  ; global constructors keyed to getUser(unsigned int)+0x36c4
084c8306 +0x4fa:  movzbl %al,%eax
084c8309 +0x4fd:  mov    %eax,0x4(%esp)
084c830d +0x501:  lea    -0xac(%ebp),%eax
084c8313 +0x507:  mov    %eax,(%esp)
084c8316 +0x50a:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084c831b +0x50f:  mov    0xc(%ebp),%eax
084c831e +0x512:  mov    %eax,(%esp)
084c8321 +0x515:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
084c8326 +0x51a:  mov    %eax,0x4(%esp)
084c832a +0x51e:  lea    -0xac(%ebp),%eax
084c8330 +0x524:  mov    %eax,(%esp)
084c8333 +0x527:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084c8338 +0x52c:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
084c833d +0x531:  add    $0x345,%eax
084c8342 +0x536:  mov    %eax,(%esp)
084c8345 +0x539:  call   0807e3b0 <_init+0xca8>
084c834a +0x53e:  mov    %eax,0x4(%esp)
084c834e +0x542:  lea    -0xac(%ebp),%eax
084c8354 +0x548:  mov    %eax,(%esp)
084c8357 +0x54b:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084c835c +0x550:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
084c8361 +0x555:  add    $0x345,%eax
084c8366 +0x55a:  movl   $0x10,0x8(%esp)
084c836e +0x562:  mov    %eax,0x4(%esp)
084c8372 +0x566:  lea    -0xac(%ebp),%eax
084c8378 +0x56c:  mov    %eax,(%esp)
084c837b +0x56f:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084c8380 +0x574:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
084c8385 +0x579:  mov    0x358(%eax),%eax
084c838b +0x57f:  mov    %eax,0x4(%esp)
084c838f +0x583:  lea    -0xac(%ebp),%eax
084c8395 +0x589:  mov    %eax,(%esp)
084c8398 +0x58c:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084c839d +0x591:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
084c83a2 +0x596:  mov    0x35c(%eax),%eax
084c83a8 +0x59c:  mov    %eax,0x4(%esp)
084c83ac +0x5a0:  lea    -0xac(%ebp),%eax
084c83b2 +0x5a6:  mov    %eax,(%esp)
084c83b5 +0x5a9:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084c83ba +0x5ae:  mov    0xc(%ebp),%eax
084c83bd +0x5b1:  mov    %eax,(%esp)
084c83c0 +0x5b4:  call   0867ec12 <_ZN5CUser6getSexEv>  ; CUser::getSex()
084c83c5 +0x5b9:  mov    %eax,-0x20(%ebp)
084c83c8 +0x5bc:  cmpl   $0xffffffff,-0x20(%ebp)
084c83cc +0x5c0:  jne    084c83d5 <+0x5c9>
084c83ce +0x5c2:  movl   $0x1,-0x20(%ebp)
084c83d5 +0x5c9:  mov    -0x20(%ebp),%eax
084c83d8 +0x5cc:  movsbl %al,%eax
084c83db +0x5cf:  mov    %eax,0x4(%esp)
084c83df +0x5d3:  lea    -0xac(%ebp),%eax
084c83e5 +0x5d9:  mov    %eax,(%esp)
084c83e8 +0x5dc:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084c83ed +0x5e1:  mov    0xc(%ebp),%eax
084c83f0 +0x5e4:  mov    %eax,(%esp)
084c83f3 +0x5e7:  call   0822f380 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4a2a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4a2a
084c83f8 +0x5ec:  movzbl %al,%eax
084c83fb +0x5ef:  mov    %eax,0x4(%esp)
084c83ff +0x5f3:  lea    -0xac(%ebp),%eax
084c8405 +0x5f9:  mov    %eax,(%esp)
084c8408 +0x5fc:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084c840d +0x601:  mov    0xc(%ebp),%eax
084c8410 +0x604:  mov    %eax,(%esp)
084c8413 +0x607:  call   0822fd20 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53ca>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53ca
084c8418 +0x60c:  mov    %eax,(%esp)
084c841b +0x60f:  call   0822ef0e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x45b8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x45b8
084c8420 +0x614:  test   %al,%al
084c8422 +0x616:  je     084c842b <+0x61f>
084c8424 +0x618:  mov    $0x1,%eax
084c8429 +0x61d:  jmp    084c8430 <+0x624>
084c842b +0x61f:  mov    $0x0,%eax
084c8430 +0x624:  mov    %eax,0x4(%esp)
084c8434 +0x628:  lea    -0xac(%ebp),%eax
084c843a +0x62e:  mov    %eax,(%esp)
084c843d +0x631:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084c8442 +0x636:  mov    0xc(%ebp),%eax
084c8445 +0x639:  mov    %eax,(%esp)
084c8448 +0x63c:  call   0822fd20 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53ca>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53ca
084c844d +0x641:  mov    %eax,(%esp)
084c8450 +0x644:  call   0822ef1a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x45c4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x45c4
084c8455 +0x649:  test   %al,%al
084c8457 +0x64b:  je     084c8460 <+0x654>
084c8459 +0x64d:  mov    $0x1,%eax
084c845e +0x652:  jmp    084c8465 <+0x659>
084c8460 +0x654:  mov    $0x0,%eax
084c8465 +0x659:  mov    %eax,0x4(%esp)
084c8469 +0x65d:  lea    -0xac(%ebp),%eax
084c846f +0x663:  mov    %eax,(%esp)
084c8472 +0x666:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084c8477 +0x66b:  mov    0xc(%ebp),%eax
084c847a +0x66e:  mov    %eax,(%esp)
084c847d +0x671:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
084c8482 +0x676:  mov    %eax,(%esp)
084c8485 +0x679:  call   084ebdee <_GLOBAL__I__Z7getUserj+0x2da0>  ; global constructors keyed to getUser(unsigned int)+0x2da0
084c848a +0x67e:  movsbl %al,%eax
084c848d +0x681:  mov    %eax,0x4(%esp)
084c8491 +0x685:  lea    -0xac(%ebp),%eax
084c8497 +0x68b:  mov    %eax,(%esp)
084c849a +0x68e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084c849f +0x693:  mov    0xc(%ebp),%eax
084c84a2 +0x696:  mov    %eax,(%esp)
084c84a5 +0x699:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
084c84aa +0x69e:  mov    %eax,(%esp)
084c84ad +0x6a1:  call   0822efe6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4690>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4690
084c84b2 +0x6a6:  movzbl %al,%eax
084c84b5 +0x6a9:  mov    %eax,0x4(%esp)
084c84b9 +0x6ad:  lea    -0xac(%ebp),%eax
084c84bf +0x6b3:  mov    %eax,(%esp)
084c84c2 +0x6b6:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084c84c7 +0x6bb:  mov    0xc(%ebp),%eax
084c84ca +0x6be:  mov    %eax,(%esp)
084c84cd +0x6c1:  call   08288e7e <_GLOBAL__I__Z23ExceptionProtectionTypei23SECURITY_PROTCTION_TYPES_S_S_S_S_S_S_S_+0x1d>  ; global constructors keyed to ExceptionProtectionType(int, SECURITY_PROTCTION_TYPE, SECURITY_PROTCTION_TYPE, SECURITY_PROTCTION_TYPE, SECURITY_PROTCTION_TYPE, SECURITY_PROTCTION_TYPE, SECURITY_PROTCTION_TYPE, SECURITY_PROTCTION_TYPE, SECURITY_PROTCTION_TYPE, SECURITY_PROTCTION_TYPE)+0x1d
084c84d2 +0x6c6:  movzbl %al,%eax
084c84d5 +0x6c9:  mov    %eax,0x4(%esp)
084c84d9 +0x6cd:  lea    -0xac(%ebp),%eax
084c84df +0x6d3:  mov    %eax,(%esp)
084c84e2 +0x6d6:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084c84e7 +0x6db:  movl   $0x4c,0x8(%esp)
084c84ef +0x6e3:  movl   $0x0,0x4(%esp)
084c84f7 +0x6eb:  lea    -0x10c(%ebp),%eax
084c84fd +0x6f1:  mov    %eax,(%esp)
084c8500 +0x6f4:  call   0807dcc0 <_init+0x5b8>
084c8505 +0x6f9:  movl   $0x10,-0xb0(%ebp)
084c850f +0x703:  lea    -0xc0(%ebp),%ebx
084c8515 +0x709:  mov    0xc(%ebp),%eax
084c8518 +0x70c:  add    $0xe0,%eax
084c851d +0x711:  mov    %eax,(%esp)
084c8520 +0x714:  call   082b2cb8 <_GLOBAL__I__ZN4CLog5this_E+0xf0df>  ; global constructors keyed to CLog::this_+0xf0df
084c8525 +0x719:  lea    -0xb0(%ebp),%edx
084c852b +0x71f:  mov    %edx,0x8(%esp)
084c852f +0x723:  mov    %ebx,0x4(%esp)
084c8533 +0x727:  mov    %eax,(%esp)
084c8536 +0x72a:  call   0807e690 <_init+0xf88>
084c853b +0x72f:  test   %eax,%eax
084c853d +0x731:  sete   %al
084c8540 +0x734:  test   %al,%al
084c8542 +0x736:  je     084c8587 <+0x77b>
084c8544 +0x738:  mov    -0xbc(%ebp),%eax
084c854a +0x73e:  mov    %eax,-0xc4(%ebp)
084c8550 +0x744:  movl   $0xffffffff,-0xcc(%ebp)
084c855a +0x74e:  mov    &_ZN10GlobalData17s_antibotChecker_E,%eax
084c855f +0x753:  mov    (%eax),%eax
084c8561 +0x755:  add    $0x4,%eax
084c8564 +0x758:  mov    (%eax),%edi
084c8566 +0x75a:  mov    0xc(%ebp),%eax
084c8569 +0x75d:  mov    %eax,(%esp)
084c856c +0x760:  call   084ec88c <_GLOBAL__I__Z7getUserj+0x383e>  ; global constructors keyed to getUser(unsigned int)+0x383e
084c8571 +0x765:  mov    %eax,%esi
084c8573 +0x767:  mov    0xc(%ebp),%eax
084c8576 +0x76a:  mov    %eax,(%esp)
084c8579 +0x76d:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
084c857e +0x772:  mov    %eax,%ebx
084c8580 +0x774:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
084c8585 +0x779:  jmp    084c8591 <+0x785>
084c8587 +0x77b:  mov    $0x2114,%ebx
084c858c +0x780:  jmp    084c8996 <+0xb8a>
084c8591 +0x785:  mov    %eax,(%esp)
084c8594 +0x788:  call   08234516 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9bc0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9bc0
084c8599 +0x78d:  mov    &_ZN10GlobalData17s_antibotChecker_E,%edx
084c859f +0x793:  lea    -0x10c(%ebp),%ecx
084c85a5 +0x799:  mov    %ecx,0x14(%esp)
084c85a9 +0x79d:  mov    %esi,0x10(%esp)
084c85ad +0x7a1:  mov    %ebx,0xc(%esp)
084c85b1 +0x7a5:  movl   $0x0,0x8(%esp)
084c85b9 +0x7ad:  mov    %eax,0x4(%esp)
084c85bd +0x7b1:  mov    %edx,(%esp)
084c85c0 +0x7b4:  call   *%edi
084c85c2 +0x7b6:  mov    %eax,-0x1c(%ebp)
084c85c5 +0x7b9:  cmpl   $0x0,-0x1c(%ebp)
084c85c9 +0x7bd:  jns    084c8651 <+0x845>
084c85cf +0x7c3:  mov    0xc(%ebp),%eax
084c85d2 +0x7c6:  mov    %eax,(%esp)
084c85d5 +0x7c9:  call   084ec88c <_GLOBAL__I__Z7getUserj+0x383e>  ; global constructors keyed to getUser(unsigned int)+0x383e
084c85da +0x7ce:  mov    %eax,%edi
084c85dc +0x7d0:  mov    0xc(%ebp),%eax
084c85df +0x7d3:  mov    %eax,(%esp)
084c85e2 +0x7d6:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
084c85e7 +0x7db:  movl   $0x0,0x4(%esp)
084c85ef +0x7e3:  mov    %eax,(%esp)
084c85f2 +0x7e6:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
084c85f7 +0x7eb:  mov    %eax,%esi
084c85f9 +0x7ed:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
084c85fe +0x7f2:  mov    %eax,(%esp)
084c8601 +0x7f5:  call   08234516 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9bc0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9bc0
084c8606 +0x7fa:  mov    %eax,%ebx
084c8608 +0x7fc:  movl   $0x0,0xc(%esp)
084c8610 +0x804:  movl   $0x211b,0x8(%esp)
084c8618 +0x80c:  movl   $&_ZZN20Inter_MonitorLoginOK12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084c8620 +0x814:  lea    -0x60(%ebp),%eax
084c8623 +0x817:  mov    %eax,(%esp)
084c8626 +0x81a:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084c862b +0x81f:  mov    -0x1c(%ebp),%eax
084c862e +0x822:  mov    %eax,0x14(%esp)
084c8632 +0x826:  mov    %edi,0x10(%esp)
084c8636 +0x82a:  mov    %esi,0xc(%esp)
084c863a +0x82e:  mov    %ebx,0x8(%esp)
084c863e +0x832:  movl   $"AddClient ProcessSequence : %d, qq_id : %s, ClientVersion : %d, return : %d",0x4(%esp)
084c8646 +0x83a:  lea    -0x60(%ebp),%eax
084c8649 +0x83d:  mov    %eax,(%esp)
084c864c +0x840:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084c8651 +0x845:  mov    0xc(%ebp),%eax
084c8654 +0x848:  movl   $0x0,0x8cf00(%eax)
084c865e +0x852:  mov    0xc(%ebp),%eax
084c8661 +0x855:  movb   $0x0,0x8d251(%eax)
084c8668 +0x85c:  mov    0xc(%ebp),%eax
084c866b +0x85f:  movb   $0x0,0x8d252(%eax)
084c8672 +0x866:  mov    &_ZN10GlobalData17s_antibotChecker_E,%eax
084c8677 +0x86b:  mov    (%eax),%eax
084c8679 +0x86d:  add    $0x20,%eax
084c867c +0x870:  mov    (%eax),%esi
084c867e +0x872:  mov    0xc(%ebp),%eax
084c8681 +0x875:  mov    %eax,(%esp)
084c8684 +0x878:  call   084ec88c <_GLOBAL__I__Z7getUserj+0x383e>  ; global constructors keyed to getUser(unsigned int)+0x383e
084c8689 +0x87d:  mov    %eax,%ebx
084c868b +0x87f:  mov    0xc(%ebp),%eax
084c868e +0x882:  mov    %eax,(%esp)
084c8691 +0x885:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
084c8696 +0x88a:  mov    &_ZN10GlobalData17s_antibotChecker_E,%edx
084c869c +0x890:  mov    %ebx,0xc(%esp)
084c86a0 +0x894:  movl   $0xffffffff,0x8(%esp)
084c86a8 +0x89c:  mov    %eax,0x4(%esp)
084c86ac +0x8a0:  mov    %edx,(%esp)
084c86af +0x8a3:  call   *%esi
084c86b1 +0x8a5:  cmp    $0xffffffff,%eax
084c86b4 +0x8a8:  sete   %al
084c86b7 +0x8ab:  test   %al,%al
084c86b9 +0x8ad:  je     084c8736 <+0x92a>
084c86bb +0x8af:  mov    0xc(%ebp),%eax
084c86be +0x8b2:  mov    %eax,(%esp)
084c86c1 +0x8b5:  call   084ec88c <_GLOBAL__I__Z7getUserj+0x383e>  ; global constructors keyed to getUser(unsigned int)+0x383e
084c86c6 +0x8ba:  mov    %eax,%edi
084c86c8 +0x8bc:  mov    0xc(%ebp),%eax
084c86cb +0x8bf:  mov    %eax,(%esp)
084c86ce +0x8c2:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
084c86d3 +0x8c7:  movl   $0x0,0x4(%esp)
084c86db +0x8cf:  mov    %eax,(%esp)
084c86de +0x8d2:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
084c86e3 +0x8d7:  mov    %eax,%esi
084c86e5 +0x8d9:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
084c86ea +0x8de:  mov    %eax,(%esp)
084c86ed +0x8e1:  call   08234516 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9bc0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9bc0
084c86f2 +0x8e6:  mov    %eax,%ebx
084c86f4 +0x8e8:  movl   $0x0,0xc(%esp)
084c86fc +0x8f0:  movl   $0x212c,0x8(%esp)
084c8704 +0x8f8:  movl   $&_ZZN20Inter_MonitorLoginOK12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084c870c +0x900:  lea    -0x50(%ebp),%eax
084c870f +0x903:  mov    %eax,(%esp)
084c8712 +0x906:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084c8717 +0x90b:  mov    %edi,0x10(%esp)
084c871b +0x90f:  mov    %esi,0xc(%esp)
084c871f +0x913:  mov    %ebx,0x8(%esp)
084c8723 +0x917:  movl   $"P2PAddClient ProcessSequence : %d, qq_id : %s, ClientVersion : %d, return : -1",0x4(%esp)
084c872b +0x91f:  lea    -0x50(%ebp),%eax
084c872e +0x922:  mov    %eax,(%esp)
084c8731 +0x925:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084c8736 +0x92a:  mov    -0x1c(%ebp),%eax
084c8739 +0x92d:  mov    %eax,0x4(%esp)
084c873d +0x931:  mov    0xc(%ebp),%eax
084c8740 +0x934:  mov    %eax,(%esp)
084c8743 +0x937:  call   084ec87a <_GLOBAL__I__Z7getUserj+0x382c>  ; global constructors keyed to getUser(unsigned int)+0x382c
084c8748 +0x93c:  mov    0xc(%ebp),%eax
084c874b +0x93f:  mov    %eax,(%esp)
084c874e +0x942:  call   0822f2f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49a2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49a2
084c8753 +0x947:  movzbl %al,%eax
084c8756 +0x94a:  mov    %eax,0x4(%esp)
084c875a +0x94e:  lea    -0xac(%ebp),%eax
084c8760 +0x954:  mov    %eax,(%esp)
084c8763 +0x957:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084c8768 +0x95c:  mov    0xc(%ebp),%eax
084c876b +0x95f:  mov    %eax,(%esp)
084c876e +0x962:  call   084ec758 <_GLOBAL__I__Z7getUserj+0x370a>  ; global constructors keyed to getUser(unsigned int)+0x370a
084c8773 +0x967:  mov    %eax,0x4(%esp)
084c8777 +0x96b:  lea    -0xac(%ebp),%eax
084c877d +0x971:  mov    %eax,(%esp)
084c8780 +0x974:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084c8785 +0x979:  call   0855fee8 <_ZN18online_preliminary18COnlinePreliminary22GetPlayCountPerOneTeamEv>  ; online_preliminary::COnlinePreliminary::GetPlayCountPerOneTeam()
084c878a +0x97e:  movzbl %al,%eax
084c878d +0x981:  mov    %eax,0x4(%esp)
084c8791 +0x985:  lea    -0xac(%ebp),%eax
084c8797 +0x98b:  mov    %eax,(%esp)
084c879a +0x98e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084c879f +0x993:  mov    0xc(%ebp),%eax
084c87a2 +0x996:  mov    %eax,(%esp)
084c87a5 +0x999:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
084c87aa +0x99e:  mov    &_ZN10GlobalData14s_pGMAccounts_E,%edx
084c87b0 +0x9a4:  mov    %eax,0x4(%esp)
084c87b4 +0x9a8:  mov    %edx,(%esp)
084c87b7 +0x9ab:  call   08109346 <_ZN8WongWork11CGMAccounts4isGMEj>  ; WongWork::CGMAccounts::isGM(unsigned int)
084c87bc +0x9b0:  test   %al,%al
084c87be +0x9b2:  je     084c87c7 <+0x9bb>
084c87c0 +0x9b4:  mov    $0x1,%eax
084c87c5 +0x9b9:  jmp    084c87cc <+0x9c0>
084c87c7 +0x9bb:  mov    $0x0,%eax
084c87cc +0x9c0:  mov    %eax,0x4(%esp)
084c87d0 +0x9c4:  lea    -0xac(%ebp),%eax
084c87d6 +0x9ca:  mov    %eax,(%esp)
084c87d9 +0x9cd:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084c87de +0x9d2:  mov    &_ZN10GlobalData11s_timeGate_E,%eax
084c87e3 +0x9d7:  mov    %eax,(%esp)
084c87e6 +0x9da:  call   08234e1c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa4c6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa4c6
084c87eb +0x9df:  test   %al,%al
084c87ed +0x9e1:  je     084c8810 <+0xa04>
084c87ef +0x9e3:  mov    &_ZN10GlobalData11s_timeGate_E,%eax
084c87f4 +0x9e8:  mov    %eax,(%esp)
084c87f7 +0x9eb:  call   084ed498 <_GLOBAL__I__Z7getUserj+0x444a>  ; global constructors keyed to getUser(unsigned int)+0x444a
084c87fc +0x9f0:  mov    %eax,0x4(%esp)
084c8800 +0x9f4:  lea    -0xac(%ebp),%eax
084c8806 +0x9fa:  mov    %eax,(%esp)
084c8809 +0x9fd:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084c880e +0xa02:  jmp    084c8826 <+0xa1a>
084c8810 +0xa04:  movl   $0x0,0x4(%esp)
084c8818 +0xa0c:  lea    -0xac(%ebp),%eax
084c881e +0xa12:  mov    %eax,(%esp)
084c8821 +0xa15:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084c8826 +0xa1a:  movl   $0x1,0x4(%esp)
084c882e +0xa22:  lea    -0xac(%ebp),%eax
084c8834 +0xa28:  mov    %eax,(%esp)
084c8837 +0xa2b:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084c883c +0xa30:  lea    -0xac(%ebp),%eax
084c8842 +0xa36:  mov    %eax,0x4(%esp)
084c8846 +0xa3a:  mov    0xc(%ebp),%eax
084c8849 +0xa3d:  mov    %eax,(%esp)
084c884c +0xa40:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084c8851 +0xa45:  mov    0xc(%ebp),%eax
084c8854 +0xa48:  movl   $0x0,0x796f8(%eax)
084c885e +0xa52:  mov    0xc(%ebp),%eax
084c8861 +0xa55:  mov    %eax,(%esp)
084c8864 +0xa58:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
084c8869 +0xa5d:  movzwl %ax,%esi
084c886c +0xa60:  mov    0xc(%ebp),%eax
084c886f +0xa63:  mov    %eax,(%esp)
084c8872 +0xa66:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
084c8877 +0xa6b:  mov    %eax,%ebx
084c8879 +0xa6d:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
084c887e +0xa72:  movl   $0x0,0x18(%esp)
084c8886 +0xa7a:  mov    %esi,0x14(%esp)
084c888a +0xa7e:  movl   $0x12c,0x10(%esp)
084c8892 +0xa86:  movl   $0x0,0xc(%esp)
084c889a +0xa8e:  mov    %ebx,0x8(%esp)
084c889e +0xa92:  movl   $0x0,0x4(%esp)
084c88a6 +0xa9a:  mov    %eax,(%esp)
084c88a9 +0xa9d:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
084c88ae +0xaa2:  mov    0xc(%ebp),%eax
084c88b1 +0xaa5:  mov    %eax,(%esp)
084c88b4 +0xaa8:  call   08274bc5 <_Z21_NS_NonClient_RequestP5CUser>  ; _NS_NonClient_Request(CUser*)
084c88b9 +0xaad:  mov    &_ZN10GlobalData12s_pIPGHelperE,%eax
084c88be +0xab2:  mov    (%eax),%eax
084c88c0 +0xab4:  add    $0x2c,%eax
084c88c3 +0xab7:  mov    (%eax),%ecx
084c88c5 +0xab9:  mov    &_ZN10GlobalData12s_pIPGHelperE,%eax
084c88ca +0xabe:  mov    0xc(%ebp),%edx
084c88cd +0xac1:  mov    %edx,0x4(%esp)
084c88d1 +0xac5:  mov    %eax,(%esp)
084c88d4 +0xac8:  call   *%ecx
084c88d6 +0xaca:  mov    -0x30(%ebp),%eax
084c88d9 +0xacd:  mov    0x24(%eax),%eax
084c88dc +0xad0:  mov    %eax,0x4(%esp)
084c88e0 +0xad4:  mov    0xc(%ebp),%eax
084c88e3 +0xad7:  mov    %eax,(%esp)
084c88e6 +0xada:  call   0822fd5c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5406>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5406
084c88eb +0xadf:  mov    -0x30(%ebp),%eax
084c88ee +0xae2:  mov    0x28(%eax),%eax
084c88f1 +0xae5:  mov    %eax,0x4(%esp)
084c88f5 +0xae9:  mov    0xc(%ebp),%eax
084c88f8 +0xaec:  mov    %eax,(%esp)
084c88fb +0xaef:  call   0822fd6e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5418>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5418
084c8900 +0xaf4:  mov    0xc(%ebp),%eax
084c8903 +0xaf7:  mov    %eax,(%esp)
084c8906 +0xafa:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
084c890b +0xaff:  mov    %eax,%ebx
084c890d +0xb01:  mov    0xc(%ebp),%eax
084c8910 +0xb04:  mov    %eax,(%esp)
084c8913 +0xb07:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
084c8918 +0xb0c:  mov    %ebx,0x4(%esp)
084c891c +0xb10:  mov    %eax,(%esp)
084c891f +0xb13:  call   084224ce <_ZN17DB_LoadDnfHackLog11makeRequestEij>  ; DB_LoadDnfHackLog::makeRequest(int, unsigned int)
084c8924 +0xb18:  mov    $0x0,%ebx
084c8929 +0xb1d:  jmp    084c8996 <+0xb8a>
084c892b +0xb1f:  movl   $0x5,0xc(%esp)
084c8933 +0xb27:  movl   $0x2209,0x8(%esp)
084c893b +0xb2f:  movl   $&_ZZN20Inter_MonitorLoginOK12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084c8943 +0xb37:  lea    -0x40(%ebp),%eax
084c8946 +0xb3a:  mov    %eax,(%esp)
084c8949 +0xb3d:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084c894e +0xb42:  movl   $0x2209,0xc(%esp)
084c8956 +0xb4a:  movl   $&_ZZN20Inter_MonitorLoginOK12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
084c895e +0xb52:  movl   $"[%s][%d]",0x4(%esp)
084c8966 +0xb5a:  lea    -0x40(%ebp),%eax
084c8969 +0xb5d:  mov    %eax,(%esp)
084c896c +0xb60:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084c8971 +0xb65:  mov    $0x220d,%ebx
084c8976 +0xb6a:  jmp    084c8996 <+0xb8a>
084c8978 +0xb6c:  mov    %edx,%ebx
084c897a +0xb6e:  mov    %eax,%esi
084c897c +0xb70:  lea    -0xac(%ebp),%eax
084c8982 +0xb76:  mov    %eax,(%esp)
084c8985 +0xb79:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084c898a +0xb7e:  mov    %esi,%eax
084c898c +0xb80:  mov    %ebx,%edx
084c898e +0xb82:  mov    %eax,(%esp)
084c8991 +0xb85:  call   08ae3750 <_Unwind_Resume>
084c8996 +0xb8a:  lea    -0xac(%ebp),%eax
084c899c +0xb90:  mov    %eax,(%esp)
084c899f +0xb93:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084c89a4 +0xb98:  mov    %ebx,%eax
084c89a6 +0xb9a:  add    $0x12c,%esp
084c89ac +0xba0:  pop    %ebx
084c89ad +0xba1:  pop    %esi
084c89ae +0xba2:  pop    %edi
084c89af +0xba3:  pop    %ebp
084c89b0 +0xba4:  ret
084c89b1 +0xba5:  nop
```

## 反编译 C

```c
// Inter_MonitorLoginOK::dispatch_sig @ 0x84c7e0c

/* Inter_MonitorLoginOK::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_MonitorLoginOK::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  code *pcVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  GameWorld *pGVar5;
  undefined4 uVar6;
  char *pcVar7;
  CPad *pCVar8;
  CEnvironment *pCVar9;
  GarenaAuthData *this;
  uint uVar10;
  CDataManager *this_00;
  size_t sVar11;
  CSecurityCard *pCVar12;
  undefined4 uVar13;
  TimerQueue *pTVar14;
  undefined4 uVar15;
  undefined1 local_110 [64];
  undefined4 local_d0;
  char local_c8 [4];
  sockaddr local_c4;
  socklen_t local_b4;
  PacketGuard local_b0 [12];
  cMyTrace local_a4 [16];
  cMyTrace local_94 [16];
  cMyTrace local_84 [16];
  cMyTrace local_74 [16];
  cMyTrace local_64 [16];
  cMyTrace local_54 [16];
  cMyTrace local_44 [16];
  int local_34;
  size_t local_30;
  char local_2a;
  char local_29;
  int local_28;
  int local_24;
  int local_20;
  
  iVar4 = CUser::get_state((CUser *)param_2);
  if (iVar4 == 0) {
    uVar15 = 0x206a;
  }
  else {
    local_34 = param_3;
    CUser::SetLastLoginCharacNo((CUser *)param_2,0);
    CUser::SetLastLoginChannelNo((CUser *)param_2,0);
    CUser::SetValidLastLoginCharac((CUser *)param_2,false);
    pGVar5 = (GameWorld *)G_GameWorld();
    iVar4 = GameWorld::GetChannelType(pGVar5);
    if (((iVar4 == 8) && (*(int *)(local_34 + 0x24) == 0)) && (*(int *)(local_34 + 0x28) == 0)) {
      uVar15 = *(undefined4 *)(local_34 + 0x28);
      uVar13 = *(undefined4 *)(local_34 + 0x24);
      uVar6 = NumberToString(*(uint *)(local_34 + 0xe),0);
      cMyTrace::cMyTrace(local_a4,
                         "virtual int Inter_MonitorLoginOK::dispatch_sig(CUser*, char*, int)",0x2075
                         ,0);
      cMyTrace::operator()
                (local_a4,"Inter_MonitorLoginOK() mid(%s), charac_no(%d), channel_no(%d)",uVar6,
                 uVar13,uVar15);
      uVar15 = 0x2076;
    }
    else {
      uVar15 = *(undefined4 *)(local_34 + 0x28);
      uVar13 = *(undefined4 *)(local_34 + 0x24);
      uVar6 = NumberToString(*(uint *)(local_34 + 0xe),0);
      cMyTrace::cMyTrace(local_94,
                         "virtual int Inter_MonitorLoginOK::dispatch_sig(CUser*, char*, int)",0x207a
                         ,0);
      cMyTrace::operator()
                (local_94,"Inter_MonitorLoginOK() mid(%s), charac_no(%d), channel_no(%d)",uVar6,
                 uVar13,uVar15);
      PacketGuard::PacketGuard(local_b0);
                    /* try { // try from 084c7fb1 to 084c8970 has its CatchHandler @ 084c8978 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_b0,1,1);
      if (*(char *)(local_34 + 0x23) == '\x02') {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,0);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,0x12);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_b0,true);
        CUser::Send((CUser *)param_2,local_b0);
        CUser::DisConnSig((CUser *)param_2,0xc,1,0);
        cMyTrace::cMyTrace(local_84,
                           "virtual int Inter_MonitorLoginOK::dispatch_sig(CUser*, char*, int)",
                           0x2088,0);
        cMyTrace::operator()(local_84,"info.err_code == SIG_LOGIN_DATA::ERROR_ALREADY");
        uVar15 = 0;
      }
      else if (*(char *)(local_34 + 0x23) == '\x03') {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,0);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,0x41);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_b0,true);
        CUser::Send((CUser *)param_2,local_b0);
        CUser::DisConnSig((CUser *)param_2,0x15,1,0);
        cMyTrace::cMyTrace(local_74,
                           "virtual int Inter_MonitorLoginOK::dispatch_sig(CUser*, char*, int)",
                           0x2095,0);
        cMyTrace::operator()(local_74,"info.err_code == SIG_LOGIN_DATA::ERROR_ALREADY");
        uVar15 = 0;
      }
      else if (*(char *)(local_34 + 0x23) == '\x01') {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,1);
        pcVar7 = (char *)CUser::get_acc_name((CUser *)param_2);
        local_30 = strnlen(pcVar7,0x14);
        pCVar8 = (CPad *)CUser::getPad((CUser *)param_2);
        cVar2 = Sanicova::CPad::isActivate(pCVar8);
        local_2a = cVar2 != '\0';
        local_29 = '\0';
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_b0,local_30);
        pcVar7 = (char *)CUser::get_acc_name((CUser *)param_2);
        InterfacePacketBuf::put_str((InterfacePacketBuf *)local_b0,pcVar7,local_30);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,(int)local_2a);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,(int)local_29);
        pCVar9 = (CEnvironment *)G_CEnvironment();
        local_28 = CEnvironment::get_server_group(pCVar9);
        if (local_28 == 3) {
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,1);
        }
        else {
          this = (GarenaAuthData *)CUser::getGarenaAuthData((CUser *)param_2);
          cVar2 = Taiwan::GarenaAuthData::getMobileAuth(this);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,(uint)(cVar2 != '\0'));
        }
        iVar4 = CUser::GetAge((CUser *)param_2);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,iVar4);
        uVar10 = CUser::IsPCRoomUser();
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,uVar10 & 0xff);
        pGVar5 = (GameWorld *)G_GameWorld();
        uVar10 = GameWorld::GetChannelType(pGVar5);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,uVar10 & 0xff);
        this_00 = (CDataManager *)G_CDataManager();
        iVar4 = CDataManager::GetUpgradeRevisionPvPChannel(this_00);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,iVar4);
        uVar10 = CUser::isTournamentAccount((CUser *)param_2);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,uVar10 & 0xff);
        iVar4 = CUser::get_acc_id((CUser *)param_2);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_b0,iVar4);
        iVar4 = G_CEnvironment();
        sVar11 = strlen((char *)(iVar4 + 0x345));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_b0,sVar11);
        iVar4 = G_CEnvironment();
        InterfacePacketBuf::put_str((InterfacePacketBuf *)local_b0,(char *)(iVar4 + 0x345),0x10);
        iVar4 = G_CEnvironment();
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_b0,*(int *)(iVar4 + 0x358));
        iVar4 = G_CEnvironment();
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_b0,*(int *)(iVar4 + 0x35c));
        local_24 = CUser::getSex((CUser *)param_2);
        if (local_24 == -1) {
          local_24 = 1;
        }
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,(int)(char)local_24);
        uVar10 = CUserCharacInfo::GetReliablePerson((CUserCharacInfo *)param_2);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,uVar10 & 0xff);
        pCVar12 = (CSecurityCard *)CUser::getSecurityCard((CUser *)param_2);
        cVar2 = WongWork::CSecurityCard::isActivate(pCVar12);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,(uint)(cVar2 != '\0'));
        pCVar12 = (CSecurityCard *)CUser::getSecurityCard((CUser *)param_2);
        cVar2 = WongWork::CSecurityCard::isCertified(pCVar12);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,(uint)(cVar2 != '\0'));
        pCVar8 = (CPad *)CUser::getPad((CUser *)param_2);
        cVar2 = Sanicova::CPad::getVersionInfo(pCVar8);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,(int)cVar2);
        pCVar8 = (CPad *)CUser::getPad((CUser *)param_2);
        uVar10 = Sanicova::CPad::isCertified(pCVar8);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,uVar10 & 0xff);
        uVar10 = CUser::isRestingUser((CUser *)param_2);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,uVar10 & 0xff);
        memset(local_110,0,0x4c);
        local_b4 = 0x10;
        iVar4 = CNetwork<4096,450000>::get_socket((CNetwork<4096,450000> *)(param_2 + 0xe0));
        iVar4 = getpeername(iVar4,&local_c4,&local_b4);
        if (iVar4 == 0) {
          local_c8[0] = local_c4.sa_data[2];
          local_c8[1] = local_c4.sa_data[3];
          local_c8[2] = local_c4.sa_data[4];
          local_c8[3] = local_c4.sa_data[5];
          local_d0 = 0xffffffff;
          pcVar1 = *(code **)(*GlobalData::s_antibotChecker_ + 4);
          uVar15 = CUser::getClientVersion((CUser *)param_2);
          uVar13 = CUser::get_acc_id((CUser *)param_2);
          pCVar9 = (CEnvironment *)G_CEnvironment();
          uVar6 = CEnvironment::getProcessSequence(pCVar9);
          local_20 = (*pcVar1)(GlobalData::s_antibotChecker_,uVar6,0,uVar13,uVar15,local_110);
          if (local_20 < 0) {
            uVar15 = CUser::getClientVersion((CUser *)param_2);
            uVar10 = CUser::get_acc_id((CUser *)param_2);
            uVar13 = NumberToString(uVar10,0);
            pCVar9 = (CEnvironment *)G_CEnvironment();
            uVar6 = CEnvironment::getProcessSequence(pCVar9);
            cMyTrace::cMyTrace(local_64,
                               "virtual int Inter_MonitorLoginOK::dispatch_sig(CUser*, char*, int)",
                               0x211b,0);
            cMyTrace::operator()
                      (local_64,
                       "AddClient ProcessSequence : %d, qq_id : %s, ClientVersion : %d, return : %d"
                       ,uVar6,uVar13,uVar15,local_20);
          }
          param_2[0x8cf00] = '\0';
          param_2[0x8cf01] = '\0';
          param_2[0x8cf02] = '\0';
          param_2[0x8cf03] = '\0';
          param_2[0x8d251] = '\0';
          param_2[0x8d252] = '\0';
          pcVar1 = *(code **)(*GlobalData::s_antibotChecker_ + 0x20);
          uVar15 = CUser::getClientVersion((CUser *)param_2);
          uVar13 = CUser::get_acc_id((CUser *)param_2);
          iVar4 = (*pcVar1)(GlobalData::s_antibotChecker_,uVar13,0xffffffff,uVar15);
          if (iVar4 == -1) {
            uVar15 = CUser::getClientVersion((CUser *)param_2);
            uVar10 = CUser::get_acc_id((CUser *)param_2);
            uVar13 = NumberToString(uVar10,0);
            pCVar9 = (CEnvironment *)G_CEnvironment();
            uVar6 = CEnvironment::getProcessSequence(pCVar9);
            cMyTrace::cMyTrace(local_54,
                               "virtual int Inter_MonitorLoginOK::dispatch_sig(CUser*, char*, int)",
                               0x212c,0);
            cMyTrace::operator()
                      (local_54,
                       "P2PAddClient ProcessSequence : %d, qq_id : %s, ClientVersion : %d, return : -1"
                       ,uVar6,uVar13,uVar15);
          }
          CUser::setAntibotKey((CUser *)param_2,local_20);
          uVar10 = CUserCharacInfo::getUserEventCharacterFlag((CUserCharacInfo *)param_2);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,uVar10 & 0xff);
          iVar4 = CUser::getOnlinePreliminaryPlayType((CUser *)param_2);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,iVar4);
          uVar10 = online_preliminary::COnlinePreliminary::GetPlayCountPerOneTeam();
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,uVar10 & 0xff);
          uVar10 = CUser::get_acc_id((CUser *)param_2);
          cVar2 = WongWork::CGMAccounts::isGM(GlobalData::s_pGMAccounts_,uVar10);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,(uint)(cVar2 != '\0'));
          cVar2 = CTimeGate::isOpen(GlobalData::s_timeGate_);
          if (cVar2 == '\0') {
            InterfacePacketBuf::put_short((InterfacePacketBuf *)local_b0,0);
          }
          else {
            iVar4 = CTimeGate::getNpcIndex(GlobalData::s_timeGate_);
            InterfacePacketBuf::put_short((InterfacePacketBuf *)local_b0,iVar4);
          }
          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_b0,true);
          CUser::Send((CUser *)param_2,local_b0);
          param_2[0x796f8] = '\0';
          param_2[0x796f9] = '\0';
          param_2[0x796fa] = '\0';
          param_2[0x796fb] = '\0';
          uVar3 = CUser::get_unique_id((CUser *)param_2);
          uVar15 = CUser::GetUID((CUser *)param_2);
          pTVar14 = (TimerQueue *)G_TimerQueue();
          TimerQueue::InsertTimer(pTVar14,0,uVar15,0,300,uVar3,0);
          _NS_NonClient_Request((CUser *)param_2);
          (**(code **)(*GlobalData::s_pIPGHelper + 0x2c))(GlobalData::s_pIPGHelper,param_2);
          CUser::SetLastLoginCharacNo((CUser *)param_2,*(int *)(local_34 + 0x24));
          CUser::SetLastLoginChannelNo((CUser *)param_2,*(int *)(local_34 + 0x28));
          uVar10 = CUser::get_acc_id((CUser *)param_2);
          iVar4 = CUser::GetUID((CUser *)param_2);
          DB_LoadDnfHackLog::makeRequest(iVar4,uVar10);
          uVar15 = 0;
        }
        else {
          uVar15 = 0x2114;
        }
      }
      else {
        cMyTrace::cMyTrace(local_44,
                           "virtual int Inter_MonitorLoginOK::dispatch_sig(CUser*, char*, int)",
                           0x2209,5);
        cMyTrace::operator()
                  (local_44,"[%s][%d]",
                   "virtual int Inter_MonitorLoginOK::dispatch_sig(CUser*, char*, int)",0x2209,
                   uVar15);
        uVar15 = 0x220d;
      }
      PacketGuard::~PacketGuard(local_b0);
    }
  }
  return uVar15;
}
```
