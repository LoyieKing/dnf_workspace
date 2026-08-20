# TimeoutCompleteLoad

`_ZN11pvp_assault13CAssaultPlace19TimeoutCompleteLoadEv`

`pvp_assault::CAssaultPlace::TimeoutCompleteLoad()`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultPlace` | `0x082ea31a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082ea31a  _ZN11pvp_assault13CAssaultPlace19TimeoutCompleteLoadEv
#           pvp_assault::CAssaultPlace::TimeoutCompleteLoad()
# range [0x082ea31a, 0x082ea715]
082ea31a +0x000:  push   %ebp
082ea31b +0x001:  mov    %esp,%ebp
082ea31d +0x003:  push   %esi
082ea31e +0x004:  push   %ebx
082ea31f +0x005:  sub    $0x70,%esp
082ea322 +0x008:  mov    0x8(%ebp),%eax
082ea325 +0x00b:  mov    0x10c(%eax),%eax
082ea32b +0x011:  cmp    $0x2,%eax
082ea32e +0x014:  je     082ea35c <+0x42>
082ea330 +0x016:  movl   $0x4,(%esp)
082ea337 +0x01d:  call   08725800 <__cxa_allocate_exception>
082ea33c +0x022:  mov    %eax,%edx
082ea33e +0x024:  movl   $0x13,(%edx)
082ea344 +0x02a:  movl   $0x0,0x8(%esp)
082ea34c +0x032:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
082ea354 +0x03a:  mov    %eax,(%esp)
082ea357 +0x03d:  call   08724c50 <__cxa_throw>
082ea35c +0x042:  movl   $0x0,-0x18(%ebp)
082ea363 +0x049:  jmp    082ea623 <+0x309>
082ea368 +0x04e:  mov    -0x18(%ebp),%eax
082ea36b +0x051:  shl    $0x5,%eax
082ea36e +0x054:  add    0x8(%ebp),%eax
082ea371 +0x057:  mov    %eax,(%esp)
082ea374 +0x05a:  call   082f055c <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2e0>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2e0
082ea379 +0x05f:  test   %al,%al
082ea37b +0x061:  jne    082ea61e <+0x304>
082ea381 +0x067:  mov    -0x18(%ebp),%eax
082ea384 +0x06a:  shl    $0x5,%eax
082ea387 +0x06d:  add    0x8(%ebp),%eax
082ea38a +0x070:  mov    %eax,(%esp)
082ea38d +0x073:  call   082f058a <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x30e>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x30e
082ea392 +0x078:  cmp    $0x2,%eax
082ea395 +0x07b:  setne  %al
082ea398 +0x07e:  test   %al,%al
082ea39a +0x080:  je     082ea61f <+0x305>
082ea3a0 +0x086:  mov    &_ZN10GlobalData15s_power_managerE,%eax
082ea3a5 +0x08b:  mov    %eax,(%esp)
082ea3a8 +0x08e:  call   0847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>  ; CPowerManager::IsPowerWarEventOn()
082ea3ad +0x093:  test   %al,%al
082ea3af +0x095:  je     082ea54e <+0x234>
082ea3b5 +0x09b:  mov    &_ZN10GlobalData15s_power_managerE,%eax
082ea3ba +0x0a0:  mov    %eax,(%esp)
082ea3bd +0x0a3:  call   082f0906 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x68a>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x68a
082ea3c2 +0x0a8:  mov    %eax,(%esp)
082ea3c5 +0x0ab:  call   082f0864 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x5e8>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x5e8
082ea3ca +0x0b0:  movl   $0x0,0xc(%esp)
082ea3d2 +0x0b8:  movl   $0xa18,0x8(%esp)
082ea3da +0x0c0:  movl   $&_ZZN11pvp_assault13CAssaultPlace19TimeoutCompleteLoadEvE19__PRETTY_FUNCTION__,0x4(%esp)
082ea3e2 +0x0c8:  lea    -0x58(%ebp),%eax
082ea3e5 +0x0cb:  mov    %eax,(%esp)
082ea3e8 +0x0ce:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
082ea3ed +0x0d3:  movl   $"POWER WAR LOADING SECEDE",0x4(%esp)
082ea3f5 +0x0db:  lea    -0x58(%ebp),%eax
082ea3f8 +0x0de:  mov    %eax,(%esp)
082ea3fb +0x0e1:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
082ea400 +0x0e6:  movl   $0x0,-0x10(%ebp)
082ea407 +0x0ed:  jmp    082ea4f2 <+0x1d8>
082ea40c +0x0f2:  mov    -0x10(%ebp),%eax
082ea40f +0x0f5:  shl    $0x5,%eax
082ea412 +0x0f8:  add    0x8(%ebp),%eax
082ea415 +0x0fb:  mov    %eax,(%esp)
082ea418 +0x0fe:  call   082f055c <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2e0>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2e0
082ea41d +0x103:  test   %al,%al
082ea41f +0x105:  jne    082ea4ed <+0x1d3>
082ea425 +0x10b:  mov    -0x10(%ebp),%eax
082ea428 +0x10e:  shl    $0x5,%eax
082ea42b +0x111:  add    0x8(%ebp),%eax
082ea42e +0x114:  mov    %eax,(%esp)
082ea431 +0x117:  call   082f0570 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2f4>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2f4
082ea436 +0x11c:  test   %eax,%eax
082ea438 +0x11e:  sete   %al
082ea43b +0x121:  test   %al,%al
082ea43d +0x123:  je     082ea496 <+0x17c>
082ea43f +0x125:  mov    -0x10(%ebp),%eax
082ea442 +0x128:  shl    $0x5,%eax
082ea445 +0x12b:  add    0x8(%ebp),%eax
082ea448 +0x12e:  mov    %eax,(%esp)
082ea44b +0x131:  call   082f0542 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2c6>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2c6
082ea450 +0x136:  mov    %eax,(%esp)
082ea453 +0x139:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
082ea458 +0x13e:  mov    %eax,%ebx
082ea45a +0x140:  movl   $0x0,0xc(%esp)
082ea462 +0x148:  movl   $0xa20,0x8(%esp)
082ea46a +0x150:  movl   $&_ZZN11pvp_assault13CAssaultPlace19TimeoutCompleteLoadEvE19__PRETTY_FUNCTION__,0x4(%esp)
082ea472 +0x158:  lea    -0x48(%ebp),%eax
082ea475 +0x15b:  mov    %eax,(%esp)
082ea478 +0x15e:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
082ea47d +0x163:  mov    %ebx,0x8(%esp)
082ea481 +0x167:  movl   $"BLUE TEAM : %s",0x4(%esp)
082ea489 +0x16f:  lea    -0x48(%ebp),%eax
082ea48c +0x172:  mov    %eax,(%esp)
082ea48f +0x175:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
082ea494 +0x17a:  jmp    082ea4ee <+0x1d4>
082ea496 +0x17c:  mov    -0x10(%ebp),%eax
082ea499 +0x17f:  shl    $0x5,%eax
082ea49c +0x182:  add    0x8(%ebp),%eax
082ea49f +0x185:  mov    %eax,(%esp)
082ea4a2 +0x188:  call   082f0542 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2c6>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2c6
082ea4a7 +0x18d:  mov    %eax,(%esp)
082ea4aa +0x190:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
082ea4af +0x195:  mov    %eax,%ebx
082ea4b1 +0x197:  movl   $0x0,0xc(%esp)
082ea4b9 +0x19f:  movl   $0xa22,0x8(%esp)
082ea4c1 +0x1a7:  movl   $&_ZZN11pvp_assault13CAssaultPlace19TimeoutCompleteLoadEvE19__PRETTY_FUNCTION__,0x4(%esp)
082ea4c9 +0x1af:  lea    -0x38(%ebp),%eax
082ea4cc +0x1b2:  mov    %eax,(%esp)
082ea4cf +0x1b5:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
082ea4d4 +0x1ba:  mov    %ebx,0x8(%esp)
082ea4d8 +0x1be:  movl   $"RED TEAM : %s",0x4(%esp)
082ea4e0 +0x1c6:  lea    -0x38(%ebp),%eax
082ea4e3 +0x1c9:  mov    %eax,(%esp)
082ea4e6 +0x1cc:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
082ea4eb +0x1d1:  jmp    082ea4ee <+0x1d4>
082ea4ed +0x1d3:  nop
082ea4ee +0x1d4:  addl   $0x1,-0x10(%ebp)
082ea4f2 +0x1d8:  cmpl   $0x7,-0x10(%ebp)
082ea4f6 +0x1dc:  setle  %al
082ea4f9 +0x1df:  test   %al,%al
082ea4fb +0x1e1:  jne    082ea40c <+0xf2>
082ea501 +0x1e7:  mov    -0x18(%ebp),%eax
082ea504 +0x1ea:  shl    $0x5,%eax
082ea507 +0x1ed:  add    0x8(%ebp),%eax
082ea50a +0x1f0:  mov    %eax,(%esp)
082ea50d +0x1f3:  call   082f0542 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2c6>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2c6
082ea512 +0x1f8:  mov    %eax,%ebx
082ea514 +0x1fa:  movl   $0x0,0xc(%esp)
082ea51c +0x202:  movl   $0xa25,0x8(%esp)
082ea524 +0x20a:  movl   $&_ZZN11pvp_assault13CAssaultPlace19TimeoutCompleteLoadEvE19__PRETTY_FUNCTION__,0x4(%esp)
082ea52c +0x212:  lea    -0x28(%ebp),%eax
082ea52f +0x215:  mov    %eax,(%esp)
082ea532 +0x218:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
082ea537 +0x21d:  mov    %ebx,0x8(%esp)
082ea53b +0x221:  movl   $"SECEDE : %s",0x4(%esp)
082ea543 +0x229:  lea    -0x28(%ebp),%eax
082ea546 +0x22c:  mov    %eax,(%esp)
082ea549 +0x22f:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
082ea54e +0x234:  mov    -0x18(%ebp),%eax
082ea551 +0x237:  shl    $0x5,%eax
082ea554 +0x23a:  add    0x8(%ebp),%eax
082ea557 +0x23d:  mov    %eax,(%esp)
082ea55a +0x240:  call   082f0542 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2c6>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2c6
082ea55f +0x245:  mov    %eax,-0x14(%ebp)
082ea562 +0x248:  mov    &_ZN10GlobalData15s_power_managerE,%eax
082ea567 +0x24d:  mov    %eax,(%esp)
082ea56a +0x250:  call   0847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>  ; CPowerManager::IsPowerWarEventOn()
082ea56f +0x255:  test   %al,%al
082ea571 +0x257:  je     082ea589 <+0x26f>
082ea573 +0x259:  mov    -0x14(%ebp),%eax
082ea576 +0x25c:  mov    %eax,(%esp)
082ea579 +0x25f:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
082ea57e +0x264:  cmp    $0x7,%al
082ea580 +0x266:  jne    082ea589 <+0x26f>
082ea582 +0x268:  mov    $0x1,%eax
082ea587 +0x26d:  jmp    082ea58e <+0x274>
082ea589 +0x26f:  mov    $0x0,%eax
082ea58e +0x274:  test   %al,%al
082ea590 +0x276:  je     082ea61f <+0x305>
082ea596 +0x27c:  lea    -0x64(%ebp),%eax
082ea599 +0x27f:  mov    %eax,(%esp)
082ea59c +0x282:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
082ea5a1 +0x287:  movl   $0xe6,0x8(%esp)
082ea5a9 +0x28f:  movl   $0x0,0x4(%esp)
082ea5b1 +0x297:  lea    -0x64(%ebp),%eax
082ea5b4 +0x29a:  mov    %eax,(%esp)
082ea5b7 +0x29d:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
082ea5bc +0x2a2:  movl   $0x1,0x4(%esp)
082ea5c4 +0x2aa:  lea    -0x64(%ebp),%eax
082ea5c7 +0x2ad:  mov    %eax,(%esp)
082ea5ca +0x2b0:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
082ea5cf +0x2b5:  movl   $0x1,0x4(%esp)
082ea5d7 +0x2bd:  lea    -0x64(%ebp),%eax
082ea5da +0x2c0:  mov    %eax,(%esp)
082ea5dd +0x2c3:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
082ea5e2 +0x2c8:  lea    -0x64(%ebp),%eax
082ea5e5 +0x2cb:  mov    %eax,0x4(%esp)
082ea5e9 +0x2cf:  mov    -0x14(%ebp),%eax
082ea5ec +0x2d2:  mov    %eax,(%esp)
082ea5ef +0x2d5:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
082ea5f4 +0x2da:  jmp    082ea611 <+0x2f7>
082ea5f6 +0x2dc:  mov    %edx,%ebx
082ea5f8 +0x2de:  mov    %eax,%esi
082ea5fa +0x2e0:  lea    -0x64(%ebp),%eax
082ea5fd +0x2e3:  mov    %eax,(%esp)
082ea600 +0x2e6:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082ea605 +0x2eb:  mov    %esi,%eax
082ea607 +0x2ed:  mov    %ebx,%edx
082ea609 +0x2ef:  mov    %eax,(%esp)
082ea60c +0x2f2:  call   08ae3750 <_Unwind_Resume>
082ea611 +0x2f7:  lea    -0x64(%ebp),%eax
082ea614 +0x2fa:  mov    %eax,(%esp)
082ea617 +0x2fd:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082ea61c +0x302:  jmp    082ea61f <+0x305>
082ea61e +0x304:  nop
082ea61f +0x305:  addl   $0x1,-0x18(%ebp)
082ea623 +0x309:  cmpl   $0x7,-0x18(%ebp)
082ea627 +0x30d:  setle  %al
082ea62a +0x310:  test   %al,%al
082ea62c +0x312:  jne    082ea368 <+0x4e>
082ea632 +0x318:  movl   $0x0,-0xc(%ebp)
082ea639 +0x31f:  jmp    082ea6a7 <+0x38d>
082ea63b +0x321:  mov    -0xc(%ebp),%eax
082ea63e +0x324:  shl    $0x5,%eax
082ea641 +0x327:  add    0x8(%ebp),%eax
082ea644 +0x32a:  mov    %eax,(%esp)
082ea647 +0x32d:  call   082f055c <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2e0>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2e0
082ea64c +0x332:  test   %al,%al
082ea64e +0x334:  jne    082ea6a2 <+0x388>
082ea650 +0x336:  mov    -0xc(%ebp),%eax
082ea653 +0x339:  shl    $0x5,%eax
082ea656 +0x33c:  add    0x8(%ebp),%eax
082ea659 +0x33f:  mov    %eax,(%esp)
082ea65c +0x342:  call   082f058a <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x30e>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x30e
082ea661 +0x347:  cmp    $0x2,%eax
082ea664 +0x34a:  setne  %al
082ea667 +0x34d:  test   %al,%al
082ea669 +0x34f:  je     082ea6a3 <+0x389>
082ea66b +0x351:  movl   $0x0,0xc(%esp)
082ea673 +0x359:  movl   $0x1,0x8(%esp)
082ea67b +0x361:  mov    -0xc(%ebp),%eax
082ea67e +0x364:  mov    %eax,0x4(%esp)
082ea682 +0x368:  mov    0x8(%ebp),%eax
082ea685 +0x36b:  mov    %eax,(%esp)
082ea688 +0x36e:  call   082ead6a <_ZN11pvp_assault13CAssaultPlace17LeaveAssaultPlaceEibb>  ; pvp_assault::CAssaultPlace::LeaveAssaultPlace(int, bool, bool)
082ea68d +0x373:  mov    0x8(%ebp),%eax
082ea690 +0x376:  mov    0x10c(%eax),%eax
082ea696 +0x37c:  cmp    $0x6,%eax
082ea699 +0x37f:  jne    082ea6a3 <+0x389>
082ea69b +0x381:  mov    $0x0,%eax
082ea6a0 +0x386:  jmp    082ea70e <+0x3f4>
082ea6a2 +0x388:  nop
082ea6a3 +0x389:  addl   $0x1,-0xc(%ebp)
082ea6a7 +0x38d:  cmpl   $0x7,-0xc(%ebp)
082ea6ab +0x391:  setle  %al
082ea6ae +0x394:  test   %al,%al
082ea6b0 +0x396:  jne    082ea63b <+0x321>
082ea6b2 +0x398:  mov    0x8(%ebp),%eax
082ea6b5 +0x39b:  mov    %eax,(%esp)
082ea6b8 +0x39e:  call   082e91fa <_ZN11pvp_assault13CAssaultPlace12DoConnectP2PEv>  ; pvp_assault::CAssaultPlace::DoConnectP2P()
082ea6bd +0x3a3:  mov    0x8(%ebp),%eax
082ea6c0 +0x3a6:  mov    0x12c(%eax),%eax
082ea6c6 +0x3ac:  test   %eax,%eax
082ea6c8 +0x3ae:  je     082ea6e3 <+0x3c9>
082ea6ca +0x3b0:  mov    0x8(%ebp),%eax
082ea6cd +0x3b3:  mov    0x12c(%eax),%eax
082ea6d3 +0x3b9:  movl   $0x3,0x4(%esp)
082ea6db +0x3c1:  mov    %eax,(%esp)
082ea6de +0x3c4:  call   082a5a34 <_GLOBAL__I__ZN4CLog5this_E+0x1e5b>  ; global constructors keyed to CLog::this_+0x1e5b
082ea6e3 +0x3c9:  mov    0x8(%ebp),%eax
082ea6e6 +0x3cc:  mov    0x130(%eax),%eax
082ea6ec +0x3d2:  test   %eax,%eax
082ea6ee +0x3d4:  je     082ea709 <+0x3ef>
082ea6f0 +0x3d6:  mov    0x8(%ebp),%eax
082ea6f3 +0x3d9:  mov    0x130(%eax),%eax
082ea6f9 +0x3df:  movl   $0x3,0x4(%esp)
082ea701 +0x3e7:  mov    %eax,(%esp)
082ea704 +0x3ea:  call   082a5a34 <_GLOBAL__I__ZN4CLog5this_E+0x1e5b>  ; global constructors keyed to CLog::this_+0x1e5b
082ea709 +0x3ef:  mov    $0x1,%eax
082ea70e +0x3f4:  add    $0x70,%esp
082ea711 +0x3f7:  pop    %ebx
082ea712 +0x3f8:  pop    %esi
082ea713 +0x3f9:  pop    %ebp
082ea714 +0x3fa:  ret
082ea715 +0x3fb:  nop
```

## 反编译 C

```c
// pvp_assault::CAssaultPlace::TimeoutCompleteLoad @ 0x82ea31a

/* pvp_assault::CAssaultPlace::TimeoutCompleteLoad() */

undefined4 __thiscall pvp_assault::CAssaultPlace::TimeoutCompleteLoad(CAssaultPlace *this)

{
  bool bVar1;
  char cVar2;
  undefined4 *puVar3;
  CPowerWarLog *this_00;
  CUserCharacInfo *pCVar4;
  undefined4 uVar5;
  int iVar6;
  PacketGuard local_68 [12];
  cMyTrace local_5c [16];
  cMyTrace local_4c [16];
  cMyTrace local_3c [16];
  cMyTrace local_2c [16];
  int local_1c;
  CUserCharacInfo *local_18;
  int local_14;
  int local_10;
  
  if (*(int *)(this + 0x10c) != 2) {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x13;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&ENUM_ERROR::typeinfo,0);
  }
  for (local_1c = 0; local_1c < 8; local_1c = local_1c + 1) {
    cVar2 = CAssaulter::Empty((CAssaulter *)(this + local_1c * 0x20));
    if ((cVar2 == '\0') &&
       (iVar6 = CAssaulter::GetState((CAssaulter *)(this + local_1c * 0x20)), iVar6 != 2)) {
      cVar2 = CPowerManager::IsPowerWarEventOn();
      if (cVar2 != '\0') {
        this_00 = (CPowerWarLog *)CPowerManager::GetPowerWarLog(GlobalData::s_power_manager);
        CPowerWarLog::IncLoadingTimeOutCountSecede(this_00);
        cMyTrace::cMyTrace(local_5c,"bool pvp_assault::CAssaultPlace::TimeoutCompleteLoad()",0xa18,0
                          );
        cMyTrace::operator()(local_5c,"POWER WAR LOADING SECEDE");
        for (local_14 = 0; local_14 < 8; local_14 = local_14 + 1) {
          cVar2 = CAssaulter::Empty((CAssaulter *)(this + local_14 * 0x20));
          if (cVar2 == '\0') {
            iVar6 = CAssaulter::GetTeam((CAssaulter *)(this + local_14 * 0x20));
            if (iVar6 == 0) {
              pCVar4 = (CUserCharacInfo *)
                       CAssaulter::GetUser((CAssaulter *)(this + local_14 * 0x20));
              uVar5 = CUserCharacInfo::getCurCharacName(pCVar4);
              cMyTrace::cMyTrace(local_4c,"bool pvp_assault::CAssaultPlace::TimeoutCompleteLoad()",
                                 0xa20,0);
              cMyTrace::operator()(local_4c,"BLUE TEAM : %s",uVar5);
            }
            else {
              pCVar4 = (CUserCharacInfo *)
                       CAssaulter::GetUser((CAssaulter *)(this + local_14 * 0x20));
              uVar5 = CUserCharacInfo::getCurCharacName(pCVar4);
              cMyTrace::cMyTrace(local_3c,"bool pvp_assault::CAssaultPlace::TimeoutCompleteLoad()",
                                 0xa22,0);
              cMyTrace::operator()(local_3c,"RED TEAM : %s",uVar5);
            }
          }
        }
        uVar5 = CAssaulter::GetUser((CAssaulter *)(this + local_1c * 0x20));
        cMyTrace::cMyTrace(local_2c,"bool pvp_assault::CAssaultPlace::TimeoutCompleteLoad()",0xa25,0
                          );
        cMyTrace::operator()(local_2c,"SECEDE : %s",uVar5);
      }
      local_18 = (CUserCharacInfo *)CAssaulter::GetUser((CAssaulter *)(this + local_1c * 0x20));
      cVar2 = CPowerManager::IsPowerWarEventOn();
      if ((cVar2 == '\0') || (cVar2 = CUserCharacInfo::getCurCharacVill(local_18), cVar2 != '\a')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        PacketGuard::PacketGuard(local_68);
                    /* try { // try from 082ea5b7 to 082ea5f3 has its CatchHandler @ 082ea5f6 */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_68,0,0xe6);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_68,1);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_68,true);
        CUser::Send((CUser *)local_18,local_68);
        PacketGuard::~PacketGuard(local_68);
      }
    }
  }
  local_10 = 0;
  while( true ) {
    if (7 < local_10) {
      DoConnectP2P(this);
      if (*(int *)(this + 300) != 0) {
        CParty::SetAssaultState(*(CParty **)(this + 300),'\x03');
      }
      if (*(int *)(this + 0x130) != 0) {
        CParty::SetAssaultState(*(CParty **)(this + 0x130),'\x03');
      }
      return 1;
    }
    cVar2 = CAssaulter::Empty((CAssaulter *)(this + local_10 * 0x20));
    if (((cVar2 == '\0') &&
        (iVar6 = CAssaulter::GetState((CAssaulter *)(this + local_10 * 0x20)), iVar6 != 2)) &&
       (LeaveAssaultPlace(this,local_10,true,false), *(int *)(this + 0x10c) == 6)) break;
    local_10 = local_10 + 1;
  }
  return 0;
}
```
