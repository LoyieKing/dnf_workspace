# dispatch_sig

`_ZN35Inter_MonitorNoticeOtherChannelChat12dispatch_sigEP5CUserPci`

`Inter_MonitorNoticeOtherChannelChat::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_MonitorNoticeOtherChannelChat` | `0x084cb1ac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084cb1ac  _ZN35Inter_MonitorNoticeOtherChannelChat12dispatch_sigEP5CUserPci
#           Inter_MonitorNoticeOtherChannelChat::dispatch_sig(CUser*, char*, int)
# range [0x084cb1ac, 0x084cb725]
084cb1ac +0x000:  push   %ebp
084cb1ad +0x001:  mov    %esp,%ebp
084cb1af +0x003:  push   %esi
084cb1b0 +0x004:  push   %ebx
084cb1b1 +0x005:  sub    $0x70,%esp
084cb1b4 +0x008:  mov    0xc(%ebp),%eax
084cb1b7 +0x00b:  mov    %eax,(%esp)
084cb1ba +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084cb1bf +0x013:  test   %eax,%eax
084cb1c1 +0x015:  sete   %al
084cb1c4 +0x018:  test   %al,%al
084cb1c6 +0x01a:  je     084cb1d2 <+0x26>
084cb1c8 +0x01c:  mov    $0x0,%ebx
084cb1cd +0x021:  jmp    084cb71d <+0x571>
084cb1d2 +0x026:  mov    0x10(%ebp),%eax
084cb1d5 +0x029:  mov    %eax,-0x1c(%ebp)
084cb1d8 +0x02c:  mov    -0x1c(%ebp),%eax
084cb1db +0x02f:  movzbl 0x35(%eax),%eax
084cb1df +0x033:  cmp    $0x1,%al
084cb1e1 +0x035:  jne    084cb30a <+0x15e>
084cb1e7 +0x03b:  lea    -0x34(%ebp),%eax
084cb1ea +0x03e:  mov    %eax,(%esp)
084cb1ed +0x041:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084cb1f2 +0x046:  movl   $0x41,0x8(%esp)
084cb1fa +0x04e:  movl   $0x0,0x4(%esp)
084cb202 +0x056:  lea    -0x34(%ebp),%eax
084cb205 +0x059:  mov    %eax,(%esp)
084cb208 +0x05c:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084cb20d +0x061:  mov    -0x1c(%ebp),%eax
084cb210 +0x064:  mov    0xa(%eax),%eax
084cb213 +0x067:  mov    %eax,0x4(%esp)
084cb217 +0x06b:  lea    -0x34(%ebp),%eax
084cb21a +0x06e:  mov    %eax,(%esp)
084cb21d +0x071:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084cb222 +0x076:  movl   $0x15,0x4(%esp)
084cb22a +0x07e:  lea    -0x34(%ebp),%eax
084cb22d +0x081:  mov    %eax,(%esp)
084cb230 +0x084:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084cb235 +0x089:  mov    -0x1c(%ebp),%eax
084cb238 +0x08c:  add    $0x17,%eax
084cb23b +0x08f:  mov    %eax,(%esp)
084cb23e +0x092:  call   0807e3b0 <_init+0xca8>
084cb243 +0x097:  mov    %eax,-0x14(%ebp)
084cb246 +0x09a:  mov    -0x14(%ebp),%eax
084cb249 +0x09d:  mov    %eax,0x4(%esp)
084cb24d +0x0a1:  lea    -0x34(%ebp),%eax
084cb250 +0x0a4:  mov    %eax,(%esp)
084cb253 +0x0a7:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084cb258 +0x0ac:  mov    -0x1c(%ebp),%eax
084cb25b +0x0af:  lea    0x17(%eax),%edx
084cb25e +0x0b2:  mov    -0x14(%ebp),%eax
084cb261 +0x0b5:  mov    %eax,0x8(%esp)
084cb265 +0x0b9:  mov    %edx,0x4(%esp)
084cb269 +0x0bd:  lea    -0x34(%ebp),%eax
084cb26c +0x0c0:  mov    %eax,(%esp)
084cb26f +0x0c3:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084cb274 +0x0c8:  movl   $0x0,0x4(%esp)
084cb27c +0x0d0:  lea    -0x34(%ebp),%eax
084cb27f +0x0d3:  mov    %eax,(%esp)
084cb282 +0x0d6:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084cb287 +0x0db:  movl   $0x0,0x4(%esp)
084cb28f +0x0e3:  lea    -0x34(%ebp),%eax
084cb292 +0x0e6:  mov    %eax,(%esp)
084cb295 +0x0e9:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084cb29a +0x0ee:  movl   $0x0,0x8(%esp)
084cb2a2 +0x0f6:  movl   $"",0x4(%esp)
084cb2aa +0x0fe:  lea    -0x34(%ebp),%eax
084cb2ad +0x101:  mov    %eax,(%esp)
084cb2b0 +0x104:  call   0822b770 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xe1a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xe1a
084cb2b5 +0x109:  movl   $0x1,0x4(%esp)
084cb2bd +0x111:  lea    -0x34(%ebp),%eax
084cb2c0 +0x114:  mov    %eax,(%esp)
084cb2c3 +0x117:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084cb2c8 +0x11c:  lea    -0x34(%ebp),%eax
084cb2cb +0x11f:  mov    %eax,0x4(%esp)
084cb2cf +0x123:  mov    0xc(%ebp),%eax
084cb2d2 +0x126:  mov    %eax,(%esp)
084cb2d5 +0x129:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084cb2da +0x12e:  mov    $0x0,%ebx
084cb2df +0x133:  lea    -0x34(%ebp),%eax
084cb2e2 +0x136:  mov    %eax,(%esp)
084cb2e5 +0x139:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084cb2ea +0x13e:  jmp    084cb71d <+0x571>
084cb2ef +0x143:  mov    %edx,%ebx
084cb2f1 +0x145:  mov    %eax,%esi
084cb2f3 +0x147:  lea    -0x34(%ebp),%eax
084cb2f6 +0x14a:  mov    %eax,(%esp)
084cb2f9 +0x14d:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084cb2fe +0x152:  mov    %esi,%eax
084cb300 +0x154:  mov    %ebx,%edx
084cb302 +0x156:  mov    %eax,(%esp)
084cb305 +0x159:  call   08ae3750 <_Unwind_Resume>
084cb30a +0x15e:  mov    -0x1c(%ebp),%eax
084cb30d +0x161:  movzbl 0x35(%eax),%eax
084cb311 +0x165:  cmp    $0x2,%al
084cb313 +0x167:  jne    084cb43c <+0x290>
084cb319 +0x16d:  lea    -0x40(%ebp),%eax
084cb31c +0x170:  mov    %eax,(%esp)
084cb31f +0x173:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084cb324 +0x178:  movl   $0x41,0x8(%esp)
084cb32c +0x180:  movl   $0x0,0x4(%esp)
084cb334 +0x188:  lea    -0x40(%ebp),%eax
084cb337 +0x18b:  mov    %eax,(%esp)
084cb33a +0x18e:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084cb33f +0x193:  mov    -0x1c(%ebp),%eax
084cb342 +0x196:  mov    0xa(%eax),%eax
084cb345 +0x199:  mov    %eax,0x4(%esp)
084cb349 +0x19d:  lea    -0x40(%ebp),%eax
084cb34c +0x1a0:  mov    %eax,(%esp)
084cb34f +0x1a3:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084cb354 +0x1a8:  movl   $0x4d,0x4(%esp)
084cb35c +0x1b0:  lea    -0x40(%ebp),%eax
084cb35f +0x1b3:  mov    %eax,(%esp)
084cb362 +0x1b6:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084cb367 +0x1bb:  mov    -0x1c(%ebp),%eax
084cb36a +0x1be:  add    $0x17,%eax
084cb36d +0x1c1:  mov    %eax,(%esp)
084cb370 +0x1c4:  call   0807e3b0 <_init+0xca8>
084cb375 +0x1c9:  mov    %eax,-0x10(%ebp)
084cb378 +0x1cc:  mov    -0x10(%ebp),%eax
084cb37b +0x1cf:  mov    %eax,0x4(%esp)
084cb37f +0x1d3:  lea    -0x40(%ebp),%eax
084cb382 +0x1d6:  mov    %eax,(%esp)
084cb385 +0x1d9:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084cb38a +0x1de:  mov    -0x1c(%ebp),%eax
084cb38d +0x1e1:  lea    0x17(%eax),%edx
084cb390 +0x1e4:  mov    -0x10(%ebp),%eax
084cb393 +0x1e7:  mov    %eax,0x8(%esp)
084cb397 +0x1eb:  mov    %edx,0x4(%esp)
084cb39b +0x1ef:  lea    -0x40(%ebp),%eax
084cb39e +0x1f2:  mov    %eax,(%esp)
084cb3a1 +0x1f5:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084cb3a6 +0x1fa:  movl   $0x0,0x4(%esp)
084cb3ae +0x202:  lea    -0x40(%ebp),%eax
084cb3b1 +0x205:  mov    %eax,(%esp)
084cb3b4 +0x208:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084cb3b9 +0x20d:  movl   $0x0,0x4(%esp)
084cb3c1 +0x215:  lea    -0x40(%ebp),%eax
084cb3c4 +0x218:  mov    %eax,(%esp)
084cb3c7 +0x21b:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084cb3cc +0x220:  movl   $0x0,0x8(%esp)
084cb3d4 +0x228:  movl   $"",0x4(%esp)
084cb3dc +0x230:  lea    -0x40(%ebp),%eax
084cb3df +0x233:  mov    %eax,(%esp)
084cb3e2 +0x236:  call   0822b770 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xe1a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xe1a
084cb3e7 +0x23b:  movl   $0x1,0x4(%esp)
084cb3ef +0x243:  lea    -0x40(%ebp),%eax
084cb3f2 +0x246:  mov    %eax,(%esp)
084cb3f5 +0x249:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084cb3fa +0x24e:  lea    -0x40(%ebp),%eax
084cb3fd +0x251:  mov    %eax,0x4(%esp)
084cb401 +0x255:  mov    0xc(%ebp),%eax
084cb404 +0x258:  mov    %eax,(%esp)
084cb407 +0x25b:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084cb40c +0x260:  mov    $0x0,%ebx
084cb411 +0x265:  lea    -0x40(%ebp),%eax
084cb414 +0x268:  mov    %eax,(%esp)
084cb417 +0x26b:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084cb41c +0x270:  jmp    084cb71d <+0x571>
084cb421 +0x275:  mov    %edx,%ebx
084cb423 +0x277:  mov    %eax,%esi
084cb425 +0x279:  lea    -0x40(%ebp),%eax
084cb428 +0x27c:  mov    %eax,(%esp)
084cb42b +0x27f:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084cb430 +0x284:  mov    %esi,%eax
084cb432 +0x286:  mov    %ebx,%edx
084cb434 +0x288:  mov    %eax,(%esp)
084cb437 +0x28b:  call   08ae3750 <_Unwind_Resume>
084cb43c +0x290:  mov    -0x1c(%ebp),%eax
084cb43f +0x293:  movzbl 0x35(%eax),%eax
084cb443 +0x297:  cmp    $0x3,%al
084cb445 +0x299:  jne    084cb56e <+0x3c2>
084cb44b +0x29f:  lea    -0x4c(%ebp),%eax
084cb44e +0x2a2:  mov    %eax,(%esp)
084cb451 +0x2a5:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084cb456 +0x2aa:  movl   $0x41,0x8(%esp)
084cb45e +0x2b2:  movl   $0x0,0x4(%esp)
084cb466 +0x2ba:  lea    -0x4c(%ebp),%eax
084cb469 +0x2bd:  mov    %eax,(%esp)
084cb46c +0x2c0:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084cb471 +0x2c5:  mov    -0x1c(%ebp),%eax
084cb474 +0x2c8:  mov    0xa(%eax),%eax
084cb477 +0x2cb:  mov    %eax,0x4(%esp)
084cb47b +0x2cf:  lea    -0x4c(%ebp),%eax
084cb47e +0x2d2:  mov    %eax,(%esp)
084cb481 +0x2d5:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084cb486 +0x2da:  movl   $0x5a,0x4(%esp)
084cb48e +0x2e2:  lea    -0x4c(%ebp),%eax
084cb491 +0x2e5:  mov    %eax,(%esp)
084cb494 +0x2e8:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084cb499 +0x2ed:  mov    -0x1c(%ebp),%eax
084cb49c +0x2f0:  add    $0x17,%eax
084cb49f +0x2f3:  mov    %eax,(%esp)
084cb4a2 +0x2f6:  call   0807e3b0 <_init+0xca8>
084cb4a7 +0x2fb:  mov    %eax,-0xc(%ebp)
084cb4aa +0x2fe:  mov    -0xc(%ebp),%eax
084cb4ad +0x301:  mov    %eax,0x4(%esp)
084cb4b1 +0x305:  lea    -0x4c(%ebp),%eax
084cb4b4 +0x308:  mov    %eax,(%esp)
084cb4b7 +0x30b:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084cb4bc +0x310:  mov    -0x1c(%ebp),%eax
084cb4bf +0x313:  lea    0x17(%eax),%edx
084cb4c2 +0x316:  mov    -0xc(%ebp),%eax
084cb4c5 +0x319:  mov    %eax,0x8(%esp)
084cb4c9 +0x31d:  mov    %edx,0x4(%esp)
084cb4cd +0x321:  lea    -0x4c(%ebp),%eax
084cb4d0 +0x324:  mov    %eax,(%esp)
084cb4d3 +0x327:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084cb4d8 +0x32c:  movl   $0x0,0x4(%esp)
084cb4e0 +0x334:  lea    -0x4c(%ebp),%eax
084cb4e3 +0x337:  mov    %eax,(%esp)
084cb4e6 +0x33a:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084cb4eb +0x33f:  movl   $0x0,0x4(%esp)
084cb4f3 +0x347:  lea    -0x4c(%ebp),%eax
084cb4f6 +0x34a:  mov    %eax,(%esp)
084cb4f9 +0x34d:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084cb4fe +0x352:  movl   $0x0,0x8(%esp)
084cb506 +0x35a:  movl   $"",0x4(%esp)
084cb50e +0x362:  lea    -0x4c(%ebp),%eax
084cb511 +0x365:  mov    %eax,(%esp)
084cb514 +0x368:  call   0822b770 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xe1a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xe1a
084cb519 +0x36d:  movl   $0x1,0x4(%esp)
084cb521 +0x375:  lea    -0x4c(%ebp),%eax
084cb524 +0x378:  mov    %eax,(%esp)
084cb527 +0x37b:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084cb52c +0x380:  lea    -0x4c(%ebp),%eax
084cb52f +0x383:  mov    %eax,0x4(%esp)
084cb533 +0x387:  mov    0xc(%ebp),%eax
084cb536 +0x38a:  mov    %eax,(%esp)
084cb539 +0x38d:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084cb53e +0x392:  mov    $0x0,%ebx
084cb543 +0x397:  lea    -0x4c(%ebp),%eax
084cb546 +0x39a:  mov    %eax,(%esp)
084cb549 +0x39d:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084cb54e +0x3a2:  jmp    084cb71d <+0x571>
084cb553 +0x3a7:  mov    %edx,%ebx
084cb555 +0x3a9:  mov    %eax,%esi
084cb557 +0x3ab:  lea    -0x4c(%ebp),%eax
084cb55a +0x3ae:  mov    %eax,(%esp)
084cb55d +0x3b1:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084cb562 +0x3b6:  mov    %esi,%eax
084cb564 +0x3b8:  mov    %ebx,%edx
084cb566 +0x3ba:  mov    %eax,(%esp)
084cb569 +0x3bd:  call   08ae3750 <_Unwind_Resume>
084cb56e +0x3c2:  movl   $0xffffffff,0x4(%esp)
084cb576 +0x3ca:  mov    0xc(%ebp),%eax
084cb579 +0x3cd:  mov    %eax,(%esp)
084cb57c +0x3d0:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084cb581 +0x3d5:  mov    %eax,%edx
084cb583 +0x3d7:  mov    -0x1c(%ebp),%eax
084cb586 +0x3da:  mov    0x13(%eax),%eax
084cb589 +0x3dd:  cmp    %eax,%edx
084cb58b +0x3df:  setne  %al
084cb58e +0x3e2:  test   %al,%al
084cb590 +0x3e4:  je     084cb5e9 <+0x43d>
084cb592 +0x3e6:  mov    -0x1c(%ebp),%eax
084cb595 +0x3e9:  mov    0x13(%eax),%ebx
084cb598 +0x3ec:  movl   $0xffffffff,0x4(%esp)
084cb5a0 +0x3f4:  mov    0xc(%ebp),%eax
084cb5a3 +0x3f7:  mov    %eax,(%esp)
084cb5a6 +0x3fa:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084cb5ab +0x3ff:  mov    %ebx,0x18(%esp)
084cb5af +0x403:  mov    %eax,0x14(%esp)
084cb5b3 +0x407:  movl   $"Inter_MonitorNoticeBuddyChat::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)",0x10(%esp)
084cb5bb +0x40f:  movl   $0x25ee,0xc(%esp)
084cb5c3 +0x417:  movl   $&_ZZN35Inter_MonitorNoticeOtherChannelChat12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
084cb5cb +0x41f:  movl   $"InterDispatcher.cpp",0x4(%esp)
084cb5d3 +0x427:  movl   $0x1,(%esp)
084cb5da +0x42e:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084cb5df +0x433:  mov    $0x0,%ebx
084cb5e4 +0x438:  jmp    084cb71d <+0x571>
084cb5e9 +0x43d:  lea    -0x28(%ebp),%eax
084cb5ec +0x440:  mov    %eax,(%esp)
084cb5ef +0x443:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084cb5f4 +0x448:  movl   $0x41,0x8(%esp)
084cb5fc +0x450:  movl   $0x0,0x4(%esp)
084cb604 +0x458:  lea    -0x28(%ebp),%eax
084cb607 +0x45b:  mov    %eax,(%esp)
084cb60a +0x45e:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084cb60f +0x463:  mov    -0x1c(%ebp),%eax
084cb612 +0x466:  mov    0xa(%eax),%eax
084cb615 +0x469:  mov    %eax,0x4(%esp)
084cb619 +0x46d:  lea    -0x28(%ebp),%eax
084cb61c +0x470:  mov    %eax,(%esp)
084cb61f +0x473:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084cb624 +0x478:  movl   $0x0,0x4(%esp)
084cb62c +0x480:  lea    -0x28(%ebp),%eax
084cb62f +0x483:  mov    %eax,(%esp)
084cb632 +0x486:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084cb637 +0x48b:  mov    -0x1c(%ebp),%eax
084cb63a +0x48e:  add    $0x17,%eax
084cb63d +0x491:  mov    %eax,(%esp)
084cb640 +0x494:  call   0807e3b0 <_init+0xca8>
084cb645 +0x499:  mov    %eax,-0x18(%ebp)
084cb648 +0x49c:  mov    -0x18(%ebp),%eax
084cb64b +0x49f:  mov    %eax,0x4(%esp)
084cb64f +0x4a3:  lea    -0x28(%ebp),%eax
084cb652 +0x4a6:  mov    %eax,(%esp)
084cb655 +0x4a9:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084cb65a +0x4ae:  mov    -0x1c(%ebp),%eax
084cb65d +0x4b1:  lea    0x17(%eax),%edx
084cb660 +0x4b4:  mov    -0x18(%ebp),%eax
084cb663 +0x4b7:  mov    %eax,0x8(%esp)
084cb667 +0x4bb:  mov    %edx,0x4(%esp)
084cb66b +0x4bf:  lea    -0x28(%ebp),%eax
084cb66e +0x4c2:  mov    %eax,(%esp)
084cb671 +0x4c5:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084cb676 +0x4ca:  mov    -0x1c(%ebp),%eax
084cb679 +0x4cd:  movzbl 0xe(%eax),%eax
084cb67d +0x4d1:  movsbl %al,%eax
084cb680 +0x4d4:  mov    %eax,0x4(%esp)
084cb684 +0x4d8:  lea    -0x28(%ebp),%eax
084cb687 +0x4db:  mov    %eax,(%esp)
084cb68a +0x4de:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084cb68f +0x4e3:  mov    -0x1c(%ebp),%eax
084cb692 +0x4e6:  movzbl 0x36(%eax),%eax
084cb696 +0x4ea:  movzbl %al,%eax
084cb699 +0x4ed:  mov    %eax,0x4(%esp)
084cb69d +0x4f1:  lea    -0x28(%ebp),%eax
084cb6a0 +0x4f4:  mov    %eax,(%esp)
084cb6a3 +0x4f7:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084cb6a8 +0x4fc:  mov    -0x1c(%ebp),%eax
084cb6ab +0x4ff:  movzbl 0x36(%eax),%eax
084cb6af +0x503:  movzbl %al,%eax
084cb6b2 +0x506:  mov    -0x1c(%ebp),%edx
084cb6b5 +0x509:  add    $0x37,%edx
084cb6b8 +0x50c:  mov    %eax,0x8(%esp)
084cb6bc +0x510:  mov    %edx,0x4(%esp)
084cb6c0 +0x514:  lea    -0x28(%ebp),%eax
084cb6c3 +0x517:  mov    %eax,(%esp)
084cb6c6 +0x51a:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084cb6cb +0x51f:  movl   $0x1,0x4(%esp)
084cb6d3 +0x527:  lea    -0x28(%ebp),%eax
084cb6d6 +0x52a:  mov    %eax,(%esp)
084cb6d9 +0x52d:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084cb6de +0x532:  lea    -0x28(%ebp),%eax
084cb6e1 +0x535:  mov    %eax,0x4(%esp)
084cb6e5 +0x539:  mov    0xc(%ebp),%eax
084cb6e8 +0x53c:  mov    %eax,(%esp)
084cb6eb +0x53f:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084cb6f0 +0x544:  mov    $0x0,%ebx
084cb6f5 +0x549:  lea    -0x28(%ebp),%eax
084cb6f8 +0x54c:  mov    %eax,(%esp)
084cb6fb +0x54f:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084cb700 +0x554:  jmp    084cb71d <+0x571>
084cb702 +0x556:  mov    %edx,%ebx
084cb704 +0x558:  mov    %eax,%esi
084cb706 +0x55a:  lea    -0x28(%ebp),%eax
084cb709 +0x55d:  mov    %eax,(%esp)
084cb70c +0x560:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084cb711 +0x565:  mov    %esi,%eax
084cb713 +0x567:  mov    %ebx,%edx
084cb715 +0x569:  mov    %eax,(%esp)
084cb718 +0x56c:  call   08ae3750 <_Unwind_Resume>
084cb71d +0x571:  mov    %ebx,%eax
084cb71f +0x573:  add    $0x70,%esp
084cb722 +0x576:  pop    %ebx
084cb723 +0x577:  pop    %esi
084cb724 +0x578:  pop    %ebp
084cb725 +0x579:  ret
```

## 反编译 C

```c
// Inter_MonitorNoticeOtherChannelChat::dispatch_sig @ 0x84cb1ac

/* Inter_MonitorNoticeOtherChannelChat::dispatch_sig(CUser*, char*, int) */

undefined4
Inter_MonitorNoticeOtherChannelChat::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  PacketGuard local_50 [12];
  PacketGuard local_44 [12];
  PacketGuard local_38 [12];
  PacketGuard local_2c [12];
  int local_20;
  size_t local_1c;
  size_t local_18;
  size_t local_14;
  size_t local_10;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (iVar2 != 0) {
    local_20 = param_3;
    if (*(char *)(param_3 + 0x35) == '\x01') {
      PacketGuard::PacketGuard(local_38);
                    /* try { // try from 084cb208 to 084cb2d9 has its CatchHandler @ 084cb2ef */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_38,0,0x41);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_38,*(int *)(local_20 + 10));
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_38,0x15);
      local_18 = strlen((char *)(local_20 + 0x17));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_38,local_18);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_38,(char *)(local_20 + 0x17),local_18)
      ;
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_38,0);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_38,0);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_38,"",0);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_38,true);
      CUser::Send((CUser *)param_2,local_38);
      PacketGuard::~PacketGuard(local_38);
    }
    else if (*(char *)(param_3 + 0x35) == '\x02') {
      PacketGuard::PacketGuard(local_44);
                    /* try { // try from 084cb33a to 084cb40b has its CatchHandler @ 084cb421 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_44,0,0x41);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_44,*(int *)(local_20 + 10));
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_44,0x4d);
      local_14 = strlen((char *)(local_20 + 0x17));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_44,local_14);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_44,(char *)(local_20 + 0x17),local_14)
      ;
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_44,0);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_44,0);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_44,"",0);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_44,true);
      CUser::Send((CUser *)param_2,local_44);
      PacketGuard::~PacketGuard(local_44);
    }
    else if (*(char *)(param_3 + 0x35) == '\x03') {
      PacketGuard::PacketGuard(local_50);
                    /* try { // try from 084cb46c to 084cb53d has its CatchHandler @ 084cb553 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_50,0,0x41);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,*(int *)(local_20 + 10));
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,0x5a);
      local_10 = strlen((char *)(local_20 + 0x17));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_50,local_10);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_50,(char *)(local_20 + 0x17),local_10)
      ;
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,0);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_50,0);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_50,"",0);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_50,true);
      CUser::Send((CUser *)param_2,local_50);
      PacketGuard::~PacketGuard(local_50);
    }
    else {
      iVar2 = CUser::get_charac_no((CUser *)param_2,-1);
      if (iVar2 == *(int *)(local_20 + 0x13)) {
        PacketGuard::PacketGuard(local_2c);
                    /* try { // try from 084cb60a to 084cb6ef has its CatchHandler @ 084cb702 */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_2c,0,0x41);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,*(int *)(local_20 + 10));
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,0);
        local_1c = strlen((char *)(local_20 + 0x17));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,local_1c);
        InterfacePacketBuf::put_str
                  ((InterfacePacketBuf *)local_2c,(char *)(local_20 + 0x17),local_1c);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,(int)*(char *)(local_20 + 0xe));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,(uint)*(byte *)(local_20 + 0x36))
        ;
        InterfacePacketBuf::put_str
                  ((InterfacePacketBuf *)local_2c,(char *)(local_20 + 0x37),
                   (uint)*(byte *)(local_20 + 0x36));
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_2c,true);
        CUser::Send((CUser *)param_2,local_2c);
        PacketGuard::~PacketGuard(local_2c);
      }
      else {
        uVar1 = *(undefined4 *)(local_20 + 0x13);
        uVar3 = CUser::get_charac_no((CUser *)param_2,-1);
        LogManager::logFormat
                  (1,"InterDispatcher.cpp",
                   "virtual int Inter_MonitorNoticeOtherChannelChat::dispatch_sig(CUser*, char*, int)"
                   ,0x25ee,
                   "Inter_MonitorNoticeBuddyChat::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)"
                   ,uVar3,uVar1);
      }
    }
  }
  return 0;
}
```
