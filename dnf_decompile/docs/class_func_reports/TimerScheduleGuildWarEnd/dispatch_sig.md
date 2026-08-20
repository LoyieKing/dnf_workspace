# dispatch_sig

`_ZN24TimerScheduleGuildWarEnd12dispatch_sigEiij`

`TimerScheduleGuildWarEnd::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerScheduleGuildWarEnd` | `0x086331d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086331d0  _ZN24TimerScheduleGuildWarEnd12dispatch_sigEiij
#           TimerScheduleGuildWarEnd::dispatch_sig(int, int, unsigned int)
# range [0x086331d0, 0x0863374f]
086331d0 +0x000:  push   %ebp
086331d1 +0x001:  mov    %esp,%ebp
086331d3 +0x003:  push   %esi
086331d4 +0x004:  push   %ebx
086331d5 +0x005:  sub    $0x70,%esp
086331d8 +0x008:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
086331dd +0x00d:  mov    %eax,(%esp)
086331e0 +0x010:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
086331e5 +0x015:  cmp    $0x6,%eax
086331e8 +0x018:  setne  %al
086331eb +0x01b:  test   %al,%al
086331ed +0x01d:  je     086331f9 <+0x29>
086331ef +0x01f:  mov    $0x1,%eax
086331f4 +0x024:  jmp    08633748 <+0x578>
086331f9 +0x029:  mov    &_ZN10GlobalData15s_event_managerE,%eax
086331fe +0x02e:  movl   $0x21,0x4(%esp)
08633206 +0x036:  mov    %eax,(%esp)
08633209 +0x039:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
0863320e +0x03e:  mov    (%eax),%edx
08633210 +0x040:  add    $0x34,%edx
08633213 +0x043:  mov    (%edx),%edx
08633215 +0x045:  movl   $0x0,0x4(%esp)
0863321d +0x04d:  mov    %eax,(%esp)
08633220 +0x050:  call   *%edx
08633222 +0x052:  xor    $0x1,%eax
08633225 +0x055:  test   %al,%al
08633227 +0x057:  je     08633233 <+0x63>
08633229 +0x059:  mov    $0x1,%eax
0863322e +0x05e:  jmp    08633748 <+0x578>
08633233 +0x063:  cmpl   $0xa,0x10(%ebp)
08633237 +0x067:  jne    08633307 <+0x137>
0863323d +0x06d:  lea    -0x14(%ebp),%eax
08633240 +0x070:  mov    %eax,(%esp)
08633243 +0x073:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08633248 +0x078:  movl   $0x6d,0x8(%esp)
08633250 +0x080:  movl   $0x0,0x4(%esp)
08633258 +0x088:  lea    -0x14(%ebp),%eax
0863325b +0x08b:  mov    %eax,(%esp)
0863325e +0x08e:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08633263 +0x093:  movl   $0xa,0x4(%esp)
0863326b +0x09b:  lea    -0x14(%ebp),%eax
0863326e +0x09e:  mov    %eax,(%esp)
08633271 +0x0a1:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08633276 +0x0a6:  movl   $0x1,0x4(%esp)
0863327e +0x0ae:  lea    -0x14(%ebp),%eax
08633281 +0x0b1:  mov    %eax,(%esp)
08633284 +0x0b4:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08633289 +0x0b9:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0863328e +0x0be:  lea    -0x14(%ebp),%edx
08633291 +0x0c1:  mov    %edx,0x4(%esp)
08633295 +0x0c5:  mov    %eax,(%esp)
08633298 +0x0c8:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
0863329d +0x0cd:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
086332a2 +0x0d2:  movl   $0x0,0x18(%esp)
086332aa +0x0da:  movl   $0x5,0x14(%esp)
086332b2 +0x0e2:  movl   $0x12c,0x10(%esp)
086332ba +0x0ea:  movl   $0x62,0xc(%esp)
086332c2 +0x0f2:  movl   $0x0,0x8(%esp)
086332ca +0x0fa:  movl   $0x2,0x4(%esp)
086332d2 +0x102:  mov    %eax,(%esp)
086332d5 +0x105:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
086332da +0x10a:  jmp    086332f7 <+0x127>
086332dc +0x10c:  mov    %edx,%ebx
086332de +0x10e:  mov    %eax,%esi
086332e0 +0x110:  lea    -0x14(%ebp),%eax
086332e3 +0x113:  mov    %eax,(%esp)
086332e6 +0x116:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086332eb +0x11b:  mov    %esi,%eax
086332ed +0x11d:  mov    %ebx,%edx
086332ef +0x11f:  mov    %eax,(%esp)
086332f2 +0x122:  call   08ae3750 <_Unwind_Resume>
086332f7 +0x127:  lea    -0x14(%ebp),%eax
086332fa +0x12a:  mov    %eax,(%esp)
086332fd +0x12d:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08633302 +0x132:  jmp    08633743 <+0x573>
08633307 +0x137:  cmpl   $0x5,0x10(%ebp)
0863330b +0x13b:  jne    086333db <+0x20b>
08633311 +0x141:  lea    -0x20(%ebp),%eax
08633314 +0x144:  mov    %eax,(%esp)
08633317 +0x147:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0863331c +0x14c:  movl   $0x6d,0x8(%esp)
08633324 +0x154:  movl   $0x0,0x4(%esp)
0863332c +0x15c:  lea    -0x20(%ebp),%eax
0863332f +0x15f:  mov    %eax,(%esp)
08633332 +0x162:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08633337 +0x167:  movl   $0x5,0x4(%esp)
0863333f +0x16f:  lea    -0x20(%ebp),%eax
08633342 +0x172:  mov    %eax,(%esp)
08633345 +0x175:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0863334a +0x17a:  movl   $0x1,0x4(%esp)
08633352 +0x182:  lea    -0x20(%ebp),%eax
08633355 +0x185:  mov    %eax,(%esp)
08633358 +0x188:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0863335d +0x18d:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08633362 +0x192:  lea    -0x20(%ebp),%edx
08633365 +0x195:  mov    %edx,0x4(%esp)
08633369 +0x199:  mov    %eax,(%esp)
0863336c +0x19c:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
08633371 +0x1a1:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
08633376 +0x1a6:  movl   $0x0,0x18(%esp)
0863337e +0x1ae:  movl   $0x4,0x14(%esp)
08633386 +0x1b6:  movl   $0x3c,0x10(%esp)
0863338e +0x1be:  movl   $0x62,0xc(%esp)
08633396 +0x1c6:  movl   $0x0,0x8(%esp)
0863339e +0x1ce:  movl   $0x2,0x4(%esp)
086333a6 +0x1d6:  mov    %eax,(%esp)
086333a9 +0x1d9:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
086333ae +0x1de:  jmp    086333cb <+0x1fb>
086333b0 +0x1e0:  mov    %edx,%ebx
086333b2 +0x1e2:  mov    %eax,%esi
086333b4 +0x1e4:  lea    -0x20(%ebp),%eax
086333b7 +0x1e7:  mov    %eax,(%esp)
086333ba +0x1ea:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086333bf +0x1ef:  mov    %esi,%eax
086333c1 +0x1f1:  mov    %ebx,%edx
086333c3 +0x1f3:  mov    %eax,(%esp)
086333c6 +0x1f6:  call   08ae3750 <_Unwind_Resume>
086333cb +0x1fb:  lea    -0x20(%ebp),%eax
086333ce +0x1fe:  mov    %eax,(%esp)
086333d1 +0x201:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086333d6 +0x206:  jmp    08633743 <+0x573>
086333db +0x20b:  cmpl   $0x4,0x10(%ebp)
086333df +0x20f:  jne    086334af <+0x2df>
086333e5 +0x215:  lea    -0x2c(%ebp),%eax
086333e8 +0x218:  mov    %eax,(%esp)
086333eb +0x21b:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
086333f0 +0x220:  movl   $0x6d,0x8(%esp)
086333f8 +0x228:  movl   $0x0,0x4(%esp)
08633400 +0x230:  lea    -0x2c(%ebp),%eax
08633403 +0x233:  mov    %eax,(%esp)
08633406 +0x236:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0863340b +0x23b:  movl   $0x4,0x4(%esp)
08633413 +0x243:  lea    -0x2c(%ebp),%eax
08633416 +0x246:  mov    %eax,(%esp)
08633419 +0x249:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0863341e +0x24e:  movl   $0x1,0x4(%esp)
08633426 +0x256:  lea    -0x2c(%ebp),%eax
08633429 +0x259:  mov    %eax,(%esp)
0863342c +0x25c:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08633431 +0x261:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08633436 +0x266:  lea    -0x2c(%ebp),%edx
08633439 +0x269:  mov    %edx,0x4(%esp)
0863343d +0x26d:  mov    %eax,(%esp)
08633440 +0x270:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
08633445 +0x275:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
0863344a +0x27a:  movl   $0x0,0x18(%esp)
08633452 +0x282:  movl   $0x3,0x14(%esp)
0863345a +0x28a:  movl   $0x3c,0x10(%esp)
08633462 +0x292:  movl   $0x62,0xc(%esp)
0863346a +0x29a:  movl   $0x0,0x8(%esp)
08633472 +0x2a2:  movl   $0x2,0x4(%esp)
0863347a +0x2aa:  mov    %eax,(%esp)
0863347d +0x2ad:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
08633482 +0x2b2:  jmp    0863349f <+0x2cf>
08633484 +0x2b4:  mov    %edx,%ebx
08633486 +0x2b6:  mov    %eax,%esi
08633488 +0x2b8:  lea    -0x2c(%ebp),%eax
0863348b +0x2bb:  mov    %eax,(%esp)
0863348e +0x2be:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08633493 +0x2c3:  mov    %esi,%eax
08633495 +0x2c5:  mov    %ebx,%edx
08633497 +0x2c7:  mov    %eax,(%esp)
0863349a +0x2ca:  call   08ae3750 <_Unwind_Resume>
0863349f +0x2cf:  lea    -0x2c(%ebp),%eax
086334a2 +0x2d2:  mov    %eax,(%esp)
086334a5 +0x2d5:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086334aa +0x2da:  jmp    08633743 <+0x573>
086334af +0x2df:  cmpl   $0x3,0x10(%ebp)
086334b3 +0x2e3:  jne    08633583 <+0x3b3>
086334b9 +0x2e9:  lea    -0x38(%ebp),%eax
086334bc +0x2ec:  mov    %eax,(%esp)
086334bf +0x2ef:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
086334c4 +0x2f4:  movl   $0x6d,0x8(%esp)
086334cc +0x2fc:  movl   $0x0,0x4(%esp)
086334d4 +0x304:  lea    -0x38(%ebp),%eax
086334d7 +0x307:  mov    %eax,(%esp)
086334da +0x30a:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086334df +0x30f:  movl   $0x3,0x4(%esp)
086334e7 +0x317:  lea    -0x38(%ebp),%eax
086334ea +0x31a:  mov    %eax,(%esp)
086334ed +0x31d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086334f2 +0x322:  movl   $0x1,0x4(%esp)
086334fa +0x32a:  lea    -0x38(%ebp),%eax
086334fd +0x32d:  mov    %eax,(%esp)
08633500 +0x330:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08633505 +0x335:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0863350a +0x33a:  lea    -0x38(%ebp),%edx
0863350d +0x33d:  mov    %edx,0x4(%esp)
08633511 +0x341:  mov    %eax,(%esp)
08633514 +0x344:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
08633519 +0x349:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
0863351e +0x34e:  movl   $0x0,0x18(%esp)
08633526 +0x356:  movl   $0x2,0x14(%esp)
0863352e +0x35e:  movl   $0x3c,0x10(%esp)
08633536 +0x366:  movl   $0x62,0xc(%esp)
0863353e +0x36e:  movl   $0x0,0x8(%esp)
08633546 +0x376:  movl   $0x2,0x4(%esp)
0863354e +0x37e:  mov    %eax,(%esp)
08633551 +0x381:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
08633556 +0x386:  jmp    08633573 <+0x3a3>
08633558 +0x388:  mov    %edx,%ebx
0863355a +0x38a:  mov    %eax,%esi
0863355c +0x38c:  lea    -0x38(%ebp),%eax
0863355f +0x38f:  mov    %eax,(%esp)
08633562 +0x392:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08633567 +0x397:  mov    %esi,%eax
08633569 +0x399:  mov    %ebx,%edx
0863356b +0x39b:  mov    %eax,(%esp)
0863356e +0x39e:  call   08ae3750 <_Unwind_Resume>
08633573 +0x3a3:  lea    -0x38(%ebp),%eax
08633576 +0x3a6:  mov    %eax,(%esp)
08633579 +0x3a9:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0863357e +0x3ae:  jmp    08633743 <+0x573>
08633583 +0x3b3:  cmpl   $0x2,0x10(%ebp)
08633587 +0x3b7:  jne    08633657 <+0x487>
0863358d +0x3bd:  lea    -0x44(%ebp),%eax
08633590 +0x3c0:  mov    %eax,(%esp)
08633593 +0x3c3:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08633598 +0x3c8:  movl   $0x6d,0x8(%esp)
086335a0 +0x3d0:  movl   $0x0,0x4(%esp)
086335a8 +0x3d8:  lea    -0x44(%ebp),%eax
086335ab +0x3db:  mov    %eax,(%esp)
086335ae +0x3de:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086335b3 +0x3e3:  movl   $0x2,0x4(%esp)
086335bb +0x3eb:  lea    -0x44(%ebp),%eax
086335be +0x3ee:  mov    %eax,(%esp)
086335c1 +0x3f1:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086335c6 +0x3f6:  movl   $0x1,0x4(%esp)
086335ce +0x3fe:  lea    -0x44(%ebp),%eax
086335d1 +0x401:  mov    %eax,(%esp)
086335d4 +0x404:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086335d9 +0x409:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
086335de +0x40e:  lea    -0x44(%ebp),%edx
086335e1 +0x411:  mov    %edx,0x4(%esp)
086335e5 +0x415:  mov    %eax,(%esp)
086335e8 +0x418:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
086335ed +0x41d:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
086335f2 +0x422:  movl   $0x0,0x18(%esp)
086335fa +0x42a:  movl   $0x1,0x14(%esp)
08633602 +0x432:  movl   $0x3c,0x10(%esp)
0863360a +0x43a:  movl   $0x62,0xc(%esp)
08633612 +0x442:  movl   $0x0,0x8(%esp)
0863361a +0x44a:  movl   $0x2,0x4(%esp)
08633622 +0x452:  mov    %eax,(%esp)
08633625 +0x455:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
0863362a +0x45a:  jmp    08633647 <+0x477>
0863362c +0x45c:  mov    %edx,%ebx
0863362e +0x45e:  mov    %eax,%esi
08633630 +0x460:  lea    -0x44(%ebp),%eax
08633633 +0x463:  mov    %eax,(%esp)
08633636 +0x466:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0863363b +0x46b:  mov    %esi,%eax
0863363d +0x46d:  mov    %ebx,%edx
0863363f +0x46f:  mov    %eax,(%esp)
08633642 +0x472:  call   08ae3750 <_Unwind_Resume>
08633647 +0x477:  lea    -0x44(%ebp),%eax
0863364a +0x47a:  mov    %eax,(%esp)
0863364d +0x47d:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08633652 +0x482:  jmp    08633743 <+0x573>
08633657 +0x487:  cmpl   $0x1,0x10(%ebp)
0863365b +0x48b:  jne    08633728 <+0x558>
08633661 +0x491:  lea    -0x50(%ebp),%eax
08633664 +0x494:  mov    %eax,(%esp)
08633667 +0x497:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0863366c +0x49c:  movl   $0x6d,0x8(%esp)
08633674 +0x4a4:  movl   $0x0,0x4(%esp)
0863367c +0x4ac:  lea    -0x50(%ebp),%eax
0863367f +0x4af:  mov    %eax,(%esp)
08633682 +0x4b2:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08633687 +0x4b7:  movl   $0x1,0x4(%esp)
0863368f +0x4bf:  lea    -0x50(%ebp),%eax
08633692 +0x4c2:  mov    %eax,(%esp)
08633695 +0x4c5:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0863369a +0x4ca:  movl   $0x1,0x4(%esp)
086336a2 +0x4d2:  lea    -0x50(%ebp),%eax
086336a5 +0x4d5:  mov    %eax,(%esp)
086336a8 +0x4d8:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086336ad +0x4dd:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
086336b2 +0x4e2:  lea    -0x50(%ebp),%edx
086336b5 +0x4e5:  mov    %edx,0x4(%esp)
086336b9 +0x4e9:  mov    %eax,(%esp)
086336bc +0x4ec:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
086336c1 +0x4f1:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
086336c6 +0x4f6:  movl   $0x0,0x18(%esp)
086336ce +0x4fe:  movl   $0x0,0x14(%esp)
086336d6 +0x506:  movl   $0x3c,0x10(%esp)
086336de +0x50e:  movl   $0x62,0xc(%esp)
086336e6 +0x516:  movl   $0x0,0x8(%esp)
086336ee +0x51e:  movl   $0x2,0x4(%esp)
086336f6 +0x526:  mov    %eax,(%esp)
086336f9 +0x529:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
086336fe +0x52e:  jmp    0863371b <+0x54b>
08633700 +0x530:  mov    %edx,%ebx
08633702 +0x532:  mov    %eax,%esi
08633704 +0x534:  lea    -0x50(%ebp),%eax
08633707 +0x537:  mov    %eax,(%esp)
0863370a +0x53a:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0863370f +0x53f:  mov    %esi,%eax
08633711 +0x541:  mov    %ebx,%edx
08633713 +0x543:  mov    %eax,(%esp)
08633716 +0x546:  call   08ae3750 <_Unwind_Resume>
0863371b +0x54b:  lea    -0x50(%ebp),%eax
0863371e +0x54e:  mov    %eax,(%esp)
08633721 +0x551:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08633726 +0x556:  jmp    08633743 <+0x573>
08633728 +0x558:  cmpl   $0x0,0x10(%ebp)
0863372c +0x55c:  jne    08633743 <+0x573>
0863372e +0x55e:  mov    &_ZN10GlobalData15s_event_managerE,%eax
08633733 +0x563:  movl   $0x21,0x4(%esp)
0863373b +0x56b:  mov    %eax,(%esp)
0863373e +0x56e:  call   08115d60 <_ZN13CEventManager15TriggerEventEndEi>  ; CEventManager::TriggerEventEnd(int)
08633743 +0x573:  mov    $0x1,%eax
08633748 +0x578:  add    $0x70,%esp
0863374b +0x57b:  pop    %ebx
0863374c +0x57c:  pop    %esi
0863374d +0x57d:  pop    %ebp
0863374e +0x57e:  ret
0863374f +0x57f:  nop
```

## 反编译 C

```c
// TimerScheduleGuildWarEnd::dispatch_sig @ 0x86331d0

/* TimerScheduleGuildWarEnd::dispatch_sig(int, int, unsigned int) */

undefined4 TimerScheduleGuildWarEnd::dispatch_sig(int param_1,int param_2,uint param_3)

{
  char cVar1;
  GameWorld *pGVar2;
  int iVar3;
  int *piVar4;
  TimerQueue *pTVar5;
  PacketGuard local_54 [12];
  PacketGuard local_48 [12];
  PacketGuard local_3c [12];
  PacketGuard local_30 [12];
  PacketGuard local_24 [12];
  PacketGuard local_18 [12];
  
  pGVar2 = (GameWorld *)G_GameWorld();
  iVar3 = GameWorld::GetChannelType(pGVar2);
  if (iVar3 == 6) {
    piVar4 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x21);
    cVar1 = (**(code **)(*piVar4 + 0x34))(piVar4,0);
    if (cVar1 == '\x01') {
      if (param_3 == 10) {
        PacketGuard::PacketGuard(local_18);
                    /* try { // try from 0863325e to 086332d9 has its CatchHandler @ 086332dc */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x6d);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,10);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
        pGVar2 = (GameWorld *)G_GameWorld();
        GameWorld::send_all(pGVar2,local_18);
        pTVar5 = (TimerQueue *)G_TimerQueue();
        TimerQueue::InsertTimer(pTVar5,2,0,0x62,300,5,0);
        PacketGuard::~PacketGuard(local_18);
      }
      else if (param_3 == 5) {
        PacketGuard::PacketGuard(local_24);
                    /* try { // try from 08633332 to 086333ad has its CatchHandler @ 086333b0 */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,0,0x6d);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,5);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
        pGVar2 = (GameWorld *)G_GameWorld();
        GameWorld::send_all(pGVar2,local_24);
        pTVar5 = (TimerQueue *)G_TimerQueue();
        TimerQueue::InsertTimer(pTVar5,2,0,0x62,0x3c,4,0);
        PacketGuard::~PacketGuard(local_24);
      }
      else if (param_3 == 4) {
        PacketGuard::PacketGuard(local_30);
                    /* try { // try from 08633406 to 08633481 has its CatchHandler @ 08633484 */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,0,0x6d);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,4);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
        pGVar2 = (GameWorld *)G_GameWorld();
        GameWorld::send_all(pGVar2,local_30);
        pTVar5 = (TimerQueue *)G_TimerQueue();
        TimerQueue::InsertTimer(pTVar5,2,0,0x62,0x3c,3,0);
        PacketGuard::~PacketGuard(local_30);
      }
      else if (param_3 == 3) {
        PacketGuard::PacketGuard(local_3c);
                    /* try { // try from 086334da to 08633555 has its CatchHandler @ 08633558 */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_3c,0,0x6d);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,3);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_3c,true);
        pGVar2 = (GameWorld *)G_GameWorld();
        GameWorld::send_all(pGVar2,local_3c);
        pTVar5 = (TimerQueue *)G_TimerQueue();
        TimerQueue::InsertTimer(pTVar5,2,0,0x62,0x3c,2,0);
        PacketGuard::~PacketGuard(local_3c);
      }
      else if (param_3 == 2) {
        PacketGuard::PacketGuard(local_48);
                    /* try { // try from 086335ae to 08633629 has its CatchHandler @ 0863362c */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_48,0,0x6d);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_48,2);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_48,true);
        pGVar2 = (GameWorld *)G_GameWorld();
        GameWorld::send_all(pGVar2,local_48);
        pTVar5 = (TimerQueue *)G_TimerQueue();
        TimerQueue::InsertTimer(pTVar5,2,0,0x62,0x3c,1,0);
        PacketGuard::~PacketGuard(local_48);
      }
      else if (param_3 == 1) {
        PacketGuard::PacketGuard(local_54);
                    /* try { // try from 08633682 to 086336fd has its CatchHandler @ 08633700 */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_54,0,0x6d);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_54,1);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_54,true);
        pGVar2 = (GameWorld *)G_GameWorld();
        GameWorld::send_all(pGVar2,local_54);
        pTVar5 = (TimerQueue *)G_TimerQueue();
        TimerQueue::InsertTimer(pTVar5,2,0,0x62,0x3c,0,0);
        PacketGuard::~PacketGuard(local_54);
      }
      else if (param_3 == 0) {
        CEventManager::TriggerEventEnd(GlobalData::s_event_manager,0x21);
      }
    }
  }
  return 1;
}
```
