# dispatch_sig

`_ZN30Inter_ResposncePCRoomPlyerList12dispatch_sigEP5CUserPci`

`Inter_ResposncePCRoomPlyerList::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_ResposncePCRoomPlyerList` | `0x084d9cbe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084d9cbe  _ZN30Inter_ResposncePCRoomPlyerList12dispatch_sigEP5CUserPci
#           Inter_ResposncePCRoomPlyerList::dispatch_sig(CUser*, char*, int)
# range [0x084d9cbe, 0x084da0a9]
084d9cbe +0x000:  push   %ebp
084d9cbf +0x001:  mov    %esp,%ebp
084d9cc1 +0x003:  push   %esi
084d9cc2 +0x004:  push   %ebx
084d9cc3 +0x005:  sub    $0x40,%esp
084d9cc6 +0x008:  mov    0xc(%ebp),%eax
084d9cc9 +0x00b:  mov    %eax,(%esp)
084d9ccc +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084d9cd1 +0x013:  test   %eax,%eax
084d9cd3 +0x015:  sete   %al
084d9cd6 +0x018:  test   %al,%al
084d9cd8 +0x01a:  je     084d9ce4 <+0x26>
084d9cda +0x01c:  mov    $0x0,%ebx
084d9cdf +0x021:  jmp    084da0a0 <+0x3e2>
084d9ce4 +0x026:  lea    -0x20(%ebp),%eax
084d9ce7 +0x029:  mov    %eax,(%esp)
084d9cea +0x02c:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084d9cef +0x031:  mov    0xc(%ebp),%eax
084d9cf2 +0x034:  mov    %eax,(%esp)
084d9cf5 +0x037:  call   08110dc2 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x2d4>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x2d4
084d9cfa +0x03c:  test   %eax,%eax
084d9cfc +0x03e:  sete   %al
084d9cff +0x041:  test   %al,%al
084d9d01 +0x043:  je     084d9d73 <+0xb5>
084d9d03 +0x045:  movl   $0xd8,0x8(%esp)
084d9d0b +0x04d:  movl   $0x1,0x4(%esp)
084d9d13 +0x055:  lea    -0x20(%ebp),%eax
084d9d16 +0x058:  mov    %eax,(%esp)
084d9d19 +0x05b:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084d9d1e +0x060:  movl   $0x0,0x4(%esp)
084d9d26 +0x068:  lea    -0x20(%ebp),%eax
084d9d29 +0x06b:  mov    %eax,(%esp)
084d9d2c +0x06e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d9d31 +0x073:  movl   $0x3,0x4(%esp)
084d9d39 +0x07b:  lea    -0x20(%ebp),%eax
084d9d3c +0x07e:  mov    %eax,(%esp)
084d9d3f +0x081:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d9d44 +0x086:  movl   $0x1,0x4(%esp)
084d9d4c +0x08e:  lea    -0x20(%ebp),%eax
084d9d4f +0x091:  mov    %eax,(%esp)
084d9d52 +0x094:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084d9d57 +0x099:  lea    -0x20(%ebp),%eax
084d9d5a +0x09c:  mov    %eax,0x4(%esp)
084d9d5e +0x0a0:  mov    0xc(%ebp),%eax
084d9d61 +0x0a3:  mov    %eax,(%esp)
084d9d64 +0x0a6:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084d9d69 +0x0ab:  mov    $0x0,%ebx
084d9d6e +0x0b0:  jmp    084da095 <+0x3d7>
084d9d73 +0x0b5:  mov    0x10(%ebp),%eax
084d9d76 +0x0b8:  mov    %eax,-0x14(%ebp)
084d9d79 +0x0bb:  movl   $0xffffffff,0x4(%esp)
084d9d81 +0x0c3:  mov    0xc(%ebp),%eax
084d9d84 +0x0c6:  mov    %eax,(%esp)
084d9d87 +0x0c9:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084d9d8c +0x0ce:  mov    %eax,%edx
084d9d8e +0x0d0:  mov    -0x14(%ebp),%eax
084d9d91 +0x0d3:  mov    0xe(%eax),%eax
084d9d94 +0x0d6:  cmp    %eax,%edx
084d9d96 +0x0d8:  setne  %al
084d9d99 +0x0db:  test   %al,%al
084d9d9b +0x0dd:  je     084d9df4 <+0x136>
084d9d9d +0x0df:  mov    -0x14(%ebp),%eax
084d9da0 +0x0e2:  mov    0xe(%eax),%ebx
084d9da3 +0x0e5:  movl   $0xffffffff,0x4(%esp)
084d9dab +0x0ed:  mov    0xc(%ebp),%eax
084d9dae +0x0f0:  mov    %eax,(%esp)
084d9db1 +0x0f3:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084d9db6 +0x0f8:  mov    %ebx,0x18(%esp)
084d9dba +0x0fc:  mov    %eax,0x14(%esp)
084d9dbe +0x100:  movl   $"Inter_ResposncePCRoomPlyerList::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)",0x10(%esp)
084d9dc6 +0x108:  movl   $0x4192,0xc(%esp)
084d9dce +0x110:  movl   $&_ZZN30Inter_ResposncePCRoomPlyerList12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
084d9dd6 +0x118:  movl   $"InterDispatcher.cpp",0x4(%esp)
084d9dde +0x120:  movl   $0x1,(%esp)
084d9de5 +0x127:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084d9dea +0x12c:  mov    $0x0,%ebx
084d9def +0x131:  jmp    084da095 <+0x3d7>
084d9df4 +0x136:  mov    -0x14(%ebp),%eax
084d9df7 +0x139:  movzbl 0x12(%eax),%eax
084d9dfb +0x13d:  cmp    $0x28,%al
084d9dfd +0x13f:  jbe    084d9e6f <+0x1b1>
084d9dff +0x141:  movl   $0xd8,0x8(%esp)
084d9e07 +0x149:  movl   $0x1,0x4(%esp)
084d9e0f +0x151:  lea    -0x20(%ebp),%eax
084d9e12 +0x154:  mov    %eax,(%esp)
084d9e15 +0x157:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084d9e1a +0x15c:  movl   $0x0,0x4(%esp)
084d9e22 +0x164:  lea    -0x20(%ebp),%eax
084d9e25 +0x167:  mov    %eax,(%esp)
084d9e28 +0x16a:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d9e2d +0x16f:  movl   $0x3,0x4(%esp)
084d9e35 +0x177:  lea    -0x20(%ebp),%eax
084d9e38 +0x17a:  mov    %eax,(%esp)
084d9e3b +0x17d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d9e40 +0x182:  movl   $0x1,0x4(%esp)
084d9e48 +0x18a:  lea    -0x20(%ebp),%eax
084d9e4b +0x18d:  mov    %eax,(%esp)
084d9e4e +0x190:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084d9e53 +0x195:  lea    -0x20(%ebp),%eax
084d9e56 +0x198:  mov    %eax,0x4(%esp)
084d9e5a +0x19c:  mov    0xc(%ebp),%eax
084d9e5d +0x19f:  mov    %eax,(%esp)
084d9e60 +0x1a2:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084d9e65 +0x1a7:  mov    $0x0,%ebx
084d9e6a +0x1ac:  jmp    084da095 <+0x3d7>
084d9e6f +0x1b1:  movl   $0xd8,0x8(%esp)
084d9e77 +0x1b9:  movl   $0x1,0x4(%esp)
084d9e7f +0x1c1:  lea    -0x20(%ebp),%eax
084d9e82 +0x1c4:  mov    %eax,(%esp)
084d9e85 +0x1c7:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084d9e8a +0x1cc:  movl   $0x1,0x4(%esp)
084d9e92 +0x1d4:  lea    -0x20(%ebp),%eax
084d9e95 +0x1d7:  mov    %eax,(%esp)
084d9e98 +0x1da:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d9e9d +0x1df:  mov    -0x14(%ebp),%eax
084d9ea0 +0x1e2:  movzbl 0x12(%eax),%eax
084d9ea4 +0x1e6:  movzbl %al,%eax
084d9ea7 +0x1e9:  mov    %eax,0x4(%esp)
084d9eab +0x1ed:  lea    -0x20(%ebp),%eax
084d9eae +0x1f0:  mov    %eax,(%esp)
084d9eb1 +0x1f3:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d9eb6 +0x1f8:  movl   $0x0,-0x10(%ebp)
084d9ebd +0x1ff:  jmp    084da036 <+0x378>
084d9ec2 +0x204:  mov    -0x10(%ebp),%edx
084d9ec5 +0x207:  mov    %edx,%eax
084d9ec7 +0x209:  shl    $0x3,%eax
084d9eca +0x20c:  add    %edx,%eax
084d9ecc +0x20e:  shl    $0x2,%eax
084d9ecf +0x211:  add    %edx,%eax
084d9ed1 +0x213:  add    $0x10,%eax
084d9ed4 +0x216:  add    -0x14(%ebp),%eax
084d9ed7 +0x219:  add    $0x7,%eax
084d9eda +0x21c:  mov    %eax,(%esp)
084d9edd +0x21f:  call   0807e3b0 <_init+0xca8>
084d9ee2 +0x224:  mov    %eax,-0xc(%ebp)
084d9ee5 +0x227:  mov    -0xc(%ebp),%eax
084d9ee8 +0x22a:  mov    %eax,0x4(%esp)
084d9eec +0x22e:  lea    -0x20(%ebp),%eax
084d9eef +0x231:  mov    %eax,(%esp)
084d9ef2 +0x234:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084d9ef7 +0x239:  mov    -0x10(%ebp),%edx
084d9efa +0x23c:  mov    %edx,%eax
084d9efc +0x23e:  shl    $0x3,%eax
084d9eff +0x241:  add    %edx,%eax
084d9f01 +0x243:  shl    $0x2,%eax
084d9f04 +0x246:  add    %edx,%eax
084d9f06 +0x248:  add    $0x10,%eax
084d9f09 +0x24b:  add    -0x14(%ebp),%eax
084d9f0c +0x24e:  lea    0x7(%eax),%edx
084d9f0f +0x251:  mov    -0xc(%ebp),%eax
084d9f12 +0x254:  mov    %eax,0x8(%esp)
084d9f16 +0x258:  mov    %edx,0x4(%esp)
084d9f1a +0x25c:  lea    -0x20(%ebp),%eax
084d9f1d +0x25f:  mov    %eax,(%esp)
084d9f20 +0x262:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084d9f25 +0x267:  mov    -0x10(%ebp),%edx
084d9f28 +0x26a:  mov    -0x14(%ebp),%ecx
084d9f2b +0x26d:  mov    %edx,%eax
084d9f2d +0x26f:  shl    $0x3,%eax
084d9f30 +0x272:  add    %edx,%eax
084d9f32 +0x274:  shl    $0x2,%eax
084d9f35 +0x277:  add    %edx,%eax
084d9f37 +0x279:  lea    (%ecx,%eax,1),%eax
084d9f3a +0x27c:  add    $0x10,%eax
084d9f3d +0x27f:  movzwl 0x5(%eax),%eax
084d9f41 +0x283:  cwtl
084d9f42 +0x284:  mov    %eax,0x4(%esp)
084d9f46 +0x288:  lea    -0x20(%ebp),%eax
084d9f49 +0x28b:  mov    %eax,(%esp)
084d9f4c +0x28e:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084d9f51 +0x293:  mov    -0x10(%ebp),%edx
084d9f54 +0x296:  mov    -0x14(%ebp),%ecx
084d9f57 +0x299:  mov    %edx,%eax
084d9f59 +0x29b:  shl    $0x3,%eax
084d9f5c +0x29e:  add    %edx,%eax
084d9f5e +0x2a0:  shl    $0x2,%eax
084d9f61 +0x2a3:  add    %edx,%eax
084d9f63 +0x2a5:  lea    (%ecx,%eax,1),%eax
084d9f66 +0x2a8:  add    $0x13,%eax
084d9f69 +0x2ab:  movzbl (%eax),%eax
084d9f6c +0x2ae:  movsbl %al,%eax
084d9f6f +0x2b1:  mov    %eax,0x4(%esp)
084d9f73 +0x2b5:  lea    -0x20(%ebp),%eax
084d9f76 +0x2b8:  mov    %eax,(%esp)
084d9f79 +0x2bb:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d9f7e +0x2c0:  mov    -0x10(%ebp),%edx
084d9f81 +0x2c3:  mov    -0x14(%ebp),%ecx
084d9f84 +0x2c6:  mov    %edx,%eax
084d9f86 +0x2c8:  shl    $0x3,%eax
084d9f89 +0x2cb:  add    %edx,%eax
084d9f8b +0x2cd:  shl    $0x2,%eax
084d9f8e +0x2d0:  add    %edx,%eax
084d9f90 +0x2d2:  lea    (%ecx,%eax,1),%eax
084d9f93 +0x2d5:  add    $0x14,%eax
084d9f96 +0x2d8:  movzbl (%eax),%eax
084d9f99 +0x2db:  movsbl %al,%eax
084d9f9c +0x2de:  mov    %eax,0x4(%esp)
084d9fa0 +0x2e2:  lea    -0x20(%ebp),%eax
084d9fa3 +0x2e5:  mov    %eax,(%esp)
084d9fa6 +0x2e8:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d9fab +0x2ed:  mov    -0x10(%ebp),%edx
084d9fae +0x2f0:  mov    -0x14(%ebp),%ecx
084d9fb1 +0x2f3:  mov    %edx,%eax
084d9fb3 +0x2f5:  shl    $0x3,%eax
084d9fb6 +0x2f8:  add    %edx,%eax
084d9fb8 +0x2fa:  shl    $0x2,%eax
084d9fbb +0x2fd:  add    %edx,%eax
084d9fbd +0x2ff:  lea    (%ecx,%eax,1),%eax
084d9fc0 +0x302:  add    $0x35,%eax
084d9fc3 +0x305:  movzbl (%eax),%eax
084d9fc6 +0x308:  movzbl %al,%eax
084d9fc9 +0x30b:  mov    %eax,0x4(%esp)
084d9fcd +0x30f:  lea    -0x20(%ebp),%eax
084d9fd0 +0x312:  mov    %eax,(%esp)
084d9fd3 +0x315:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d9fd8 +0x31a:  mov    -0x10(%ebp),%edx
084d9fdb +0x31d:  mov    -0x14(%ebp),%ecx
084d9fde +0x320:  mov    %edx,%eax
084d9fe0 +0x322:  shl    $0x3,%eax
084d9fe3 +0x325:  add    %edx,%eax
084d9fe5 +0x327:  shl    $0x2,%eax
084d9fe8 +0x32a:  add    %edx,%eax
084d9fea +0x32c:  lea    (%ecx,%eax,1),%eax
084d9fed +0x32f:  add    $0x36,%eax
084d9ff0 +0x332:  movzbl (%eax),%eax
084d9ff3 +0x335:  movsbl %al,%eax
084d9ff6 +0x338:  mov    %eax,0x4(%esp)
084d9ffa +0x33c:  lea    -0x20(%ebp),%eax
084d9ffd +0x33f:  mov    %eax,(%esp)
084da000 +0x342:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084da005 +0x347:  mov    -0x10(%ebp),%edx
084da008 +0x34a:  mov    -0x14(%ebp),%ecx
084da00b +0x34d:  mov    %edx,%eax
084da00d +0x34f:  shl    $0x3,%eax
084da010 +0x352:  add    %edx,%eax
084da012 +0x354:  shl    $0x2,%eax
084da015 +0x357:  add    %edx,%eax
084da017 +0x359:  lea    (%ecx,%eax,1),%eax
084da01a +0x35c:  add    $0x37,%eax
084da01d +0x35f:  movzbl (%eax),%eax
084da020 +0x362:  movsbl %al,%eax
084da023 +0x365:  mov    %eax,0x4(%esp)
084da027 +0x369:  lea    -0x20(%ebp),%eax
084da02a +0x36c:  mov    %eax,(%esp)
084da02d +0x36f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084da032 +0x374:  addl   $0x1,-0x10(%ebp)
084da036 +0x378:  mov    -0x14(%ebp),%eax
084da039 +0x37b:  movzbl 0x12(%eax),%eax
084da03d +0x37f:  movzbl %al,%eax
084da040 +0x382:  cmp    -0x10(%ebp),%eax
084da043 +0x385:  setg   %al
084da046 +0x388:  test   %al,%al
084da048 +0x38a:  jne    084d9ec2 <+0x204>
084da04e +0x390:  movl   $0x1,0x4(%esp)
084da056 +0x398:  lea    -0x20(%ebp),%eax
084da059 +0x39b:  mov    %eax,(%esp)
084da05c +0x39e:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084da061 +0x3a3:  lea    -0x20(%ebp),%eax
084da064 +0x3a6:  mov    %eax,0x4(%esp)
084da068 +0x3aa:  mov    0xc(%ebp),%eax
084da06b +0x3ad:  mov    %eax,(%esp)
084da06e +0x3b0:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084da073 +0x3b5:  mov    $0x0,%ebx
084da078 +0x3ba:  jmp    084da095 <+0x3d7>
084da07a +0x3bc:  mov    %edx,%ebx
084da07c +0x3be:  mov    %eax,%esi
084da07e +0x3c0:  lea    -0x20(%ebp),%eax
084da081 +0x3c3:  mov    %eax,(%esp)
084da084 +0x3c6:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084da089 +0x3cb:  mov    %esi,%eax
084da08b +0x3cd:  mov    %ebx,%edx
084da08d +0x3cf:  mov    %eax,(%esp)
084da090 +0x3d2:  call   08ae3750 <_Unwind_Resume>
084da095 +0x3d7:  lea    -0x20(%ebp),%eax
084da098 +0x3da:  mov    %eax,(%esp)
084da09b +0x3dd:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084da0a0 +0x3e2:  mov    %ebx,%eax
084da0a2 +0x3e4:  add    $0x40,%esp
084da0a5 +0x3e7:  pop    %ebx
084da0a6 +0x3e8:  pop    %esi
084da0a7 +0x3e9:  pop    %ebp
084da0a8 +0x3ea:  ret
084da0a9 +0x3eb:  nop
```

## 反编译 C

```c
// Inter_ResposncePCRoomPlyerList::dispatch_sig @ 0x84d9cbe

/* Inter_ResposncePCRoomPlyerList::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_ResposncePCRoomPlyerList::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  PacketGuard local_24 [12];
  int local_18;
  int local_14;
  size_t local_10;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (iVar2 != 0) {
    PacketGuard::PacketGuard(local_24);
    iVar2 = CUser::GetPCRoomNo((CUser *)param_2);
    if (iVar2 == 0) {
                    /* try { // try from 084d9d19 to 084da072 has its CatchHandler @ 084da07a */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,1,0xd8);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,3);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
      CUser::Send((CUser *)param_2,local_24);
    }
    else {
      local_18 = param_3;
      iVar2 = CUser::get_charac_no((CUser *)param_2,-1);
      if (iVar2 == *(int *)(local_18 + 0xe)) {
        if (*(byte *)(local_18 + 0x12) < 0x29) {
          InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,1,0xd8);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,1);
          InterfacePacketBuf::put_byte
                    ((InterfacePacketBuf *)local_24,(uint)*(byte *)(local_18 + 0x12));
          for (local_14 = 0; local_14 < (int)(uint)*(byte *)(local_18 + 0x12);
              local_14 = local_14 + 1) {
            local_10 = strlen((char *)(local_14 * 0x25 + local_18 + 0x17));
            InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,local_10);
            InterfacePacketBuf::put_str
                      ((InterfacePacketBuf *)local_24,(char *)(local_14 * 0x25 + local_18 + 0x17),
                       local_10);
            InterfacePacketBuf::put_short
                      ((InterfacePacketBuf *)local_24,
                       (int)*(short *)(local_18 + local_14 * 0x25 + 0x15));
            InterfacePacketBuf::put_byte
                      ((InterfacePacketBuf *)local_24,
                       (int)*(char *)(local_18 + local_14 * 0x25 + 0x13));
            InterfacePacketBuf::put_byte
                      ((InterfacePacketBuf *)local_24,
                       (int)*(char *)(local_18 + local_14 * 0x25 + 0x14));
            InterfacePacketBuf::put_byte
                      ((InterfacePacketBuf *)local_24,
                       (uint)*(byte *)(local_18 + local_14 * 0x25 + 0x35));
            InterfacePacketBuf::put_byte
                      ((InterfacePacketBuf *)local_24,
                       (int)*(char *)(local_18 + local_14 * 0x25 + 0x36));
            InterfacePacketBuf::put_byte
                      ((InterfacePacketBuf *)local_24,
                       (int)*(char *)(local_18 + local_14 * 0x25 + 0x37));
          }
          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
          CUser::Send((CUser *)param_2,local_24);
        }
        else {
          InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,1,0xd8);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,0);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,3);
          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
          CUser::Send((CUser *)param_2,local_24);
        }
      }
      else {
        uVar1 = *(undefined4 *)(local_18 + 0xe);
        uVar3 = CUser::get_charac_no((CUser *)param_2,-1);
        LogManager::logFormat
                  (1,"InterDispatcher.cpp",
                   "virtual int Inter_ResposncePCRoomPlyerList::dispatch_sig(CUser*, char*, int)",
                   0x4192,
                   "Inter_ResposncePCRoomPlyerList::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)"
                   ,uVar3,uVar1);
      }
    }
    PacketGuard::~PacketGuard(local_24);
  }
  return 0;
}
```
