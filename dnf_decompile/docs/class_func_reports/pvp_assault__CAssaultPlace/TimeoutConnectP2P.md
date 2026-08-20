# TimeoutConnectP2P

`_ZN11pvp_assault13CAssaultPlace17TimeoutConnectP2PEv`

`pvp_assault::CAssaultPlace::TimeoutConnectP2P()`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultPlace` | `0x082ea716` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082ea716  _ZN11pvp_assault13CAssaultPlace17TimeoutConnectP2PEv
#           pvp_assault::CAssaultPlace::TimeoutConnectP2P()
# range [0x082ea716, 0x082eab19]
082ea716 +0x000:  push   %ebp
082ea717 +0x001:  mov    %esp,%ebp
082ea719 +0x003:  push   %esi
082ea71a +0x004:  push   %ebx
082ea71b +0x005:  sub    $0x70,%esp
082ea71e +0x008:  mov    0x8(%ebp),%eax
082ea721 +0x00b:  mov    0x10c(%eax),%eax
082ea727 +0x011:  cmp    $0x3,%eax
082ea72a +0x014:  je     082ea758 <+0x42>
082ea72c +0x016:  movl   $0x4,(%esp)
082ea733 +0x01d:  call   08725800 <__cxa_allocate_exception>
082ea738 +0x022:  mov    %eax,%edx
082ea73a +0x024:  movl   $0x13,(%edx)
082ea740 +0x02a:  movl   $0x0,0x8(%esp)
082ea748 +0x032:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
082ea750 +0x03a:  mov    %eax,(%esp)
082ea753 +0x03d:  call   08724c50 <__cxa_throw>
082ea758 +0x042:  movl   $0x0,-0x18(%ebp)
082ea75f +0x049:  jmp    082eaa1f <+0x309>
082ea764 +0x04e:  mov    -0x18(%ebp),%eax
082ea767 +0x051:  shl    $0x5,%eax
082ea76a +0x054:  add    0x8(%ebp),%eax
082ea76d +0x057:  mov    %eax,(%esp)
082ea770 +0x05a:  call   082f055c <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2e0>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2e0
082ea775 +0x05f:  test   %al,%al
082ea777 +0x061:  jne    082eaa1a <+0x304>
082ea77d +0x067:  mov    -0x18(%ebp),%eax
082ea780 +0x06a:  shl    $0x5,%eax
082ea783 +0x06d:  add    0x8(%ebp),%eax
082ea786 +0x070:  mov    %eax,(%esp)
082ea789 +0x073:  call   082f058a <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x30e>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x30e
082ea78e +0x078:  cmp    $0x4,%eax
082ea791 +0x07b:  setne  %al
082ea794 +0x07e:  test   %al,%al
082ea796 +0x080:  je     082eaa1b <+0x305>
082ea79c +0x086:  mov    &_ZN10GlobalData15s_power_managerE,%eax
082ea7a1 +0x08b:  mov    %eax,(%esp)
082ea7a4 +0x08e:  call   0847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>  ; CPowerManager::IsPowerWarEventOn()
082ea7a9 +0x093:  test   %al,%al
082ea7ab +0x095:  je     082ea94a <+0x234>
082ea7b1 +0x09b:  mov    &_ZN10GlobalData15s_power_managerE,%eax
082ea7b6 +0x0a0:  mov    %eax,(%esp)
082ea7b9 +0x0a3:  call   082f0906 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x68a>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x68a
082ea7be +0x0a8:  mov    %eax,(%esp)
082ea7c1 +0x0ab:  call   082f0878 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x5fc>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x5fc
082ea7c6 +0x0b0:  movl   $0x0,0xc(%esp)
082ea7ce +0x0b8:  movl   $0xa80,0x8(%esp)
082ea7d6 +0x0c0:  movl   $&_ZZN11pvp_assault13CAssaultPlace17TimeoutConnectP2PEvE19__PRETTY_FUNCTION__,0x4(%esp)
082ea7de +0x0c8:  lea    -0x5c(%ebp),%eax
082ea7e1 +0x0cb:  mov    %eax,(%esp)
082ea7e4 +0x0ce:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
082ea7e9 +0x0d3:  movl   $"POWER WAR P2P SECEDE",0x4(%esp)
082ea7f1 +0x0db:  lea    -0x5c(%ebp),%eax
082ea7f4 +0x0de:  mov    %eax,(%esp)
082ea7f7 +0x0e1:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
082ea7fc +0x0e6:  movl   $0x0,-0x10(%ebp)
082ea803 +0x0ed:  jmp    082ea8ee <+0x1d8>
082ea808 +0x0f2:  mov    -0x10(%ebp),%eax
082ea80b +0x0f5:  shl    $0x5,%eax
082ea80e +0x0f8:  add    0x8(%ebp),%eax
082ea811 +0x0fb:  mov    %eax,(%esp)
082ea814 +0x0fe:  call   082f055c <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2e0>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2e0
082ea819 +0x103:  test   %al,%al
082ea81b +0x105:  jne    082ea8e9 <+0x1d3>
082ea821 +0x10b:  mov    -0x10(%ebp),%eax
082ea824 +0x10e:  shl    $0x5,%eax
082ea827 +0x111:  add    0x8(%ebp),%eax
082ea82a +0x114:  mov    %eax,(%esp)
082ea82d +0x117:  call   082f0570 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2f4>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2f4
082ea832 +0x11c:  test   %eax,%eax
082ea834 +0x11e:  sete   %al
082ea837 +0x121:  test   %al,%al
082ea839 +0x123:  je     082ea892 <+0x17c>
082ea83b +0x125:  mov    -0x10(%ebp),%eax
082ea83e +0x128:  shl    $0x5,%eax
082ea841 +0x12b:  add    0x8(%ebp),%eax
082ea844 +0x12e:  mov    %eax,(%esp)
082ea847 +0x131:  call   082f0542 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2c6>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2c6
082ea84c +0x136:  mov    %eax,(%esp)
082ea84f +0x139:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
082ea854 +0x13e:  mov    %eax,%ebx
082ea856 +0x140:  movl   $0x0,0xc(%esp)
082ea85e +0x148:  movl   $0xa88,0x8(%esp)
082ea866 +0x150:  movl   $&_ZZN11pvp_assault13CAssaultPlace17TimeoutConnectP2PEvE19__PRETTY_FUNCTION__,0x4(%esp)
082ea86e +0x158:  lea    -0x4c(%ebp),%eax
082ea871 +0x15b:  mov    %eax,(%esp)
082ea874 +0x15e:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
082ea879 +0x163:  mov    %ebx,0x8(%esp)
082ea87d +0x167:  movl   $"BLUE TEAM : %s",0x4(%esp)
082ea885 +0x16f:  lea    -0x4c(%ebp),%eax
082ea888 +0x172:  mov    %eax,(%esp)
082ea88b +0x175:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
082ea890 +0x17a:  jmp    082ea8ea <+0x1d4>
082ea892 +0x17c:  mov    -0x10(%ebp),%eax
082ea895 +0x17f:  shl    $0x5,%eax
082ea898 +0x182:  add    0x8(%ebp),%eax
082ea89b +0x185:  mov    %eax,(%esp)
082ea89e +0x188:  call   082f0542 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2c6>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2c6
082ea8a3 +0x18d:  mov    %eax,(%esp)
082ea8a6 +0x190:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
082ea8ab +0x195:  mov    %eax,%ebx
082ea8ad +0x197:  movl   $0x0,0xc(%esp)
082ea8b5 +0x19f:  movl   $0xa8a,0x8(%esp)
082ea8bd +0x1a7:  movl   $&_ZZN11pvp_assault13CAssaultPlace17TimeoutConnectP2PEvE19__PRETTY_FUNCTION__,0x4(%esp)
082ea8c5 +0x1af:  lea    -0x3c(%ebp),%eax
082ea8c8 +0x1b2:  mov    %eax,(%esp)
082ea8cb +0x1b5:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
082ea8d0 +0x1ba:  mov    %ebx,0x8(%esp)
082ea8d4 +0x1be:  movl   $"RED TEAM : %s",0x4(%esp)
082ea8dc +0x1c6:  lea    -0x3c(%ebp),%eax
082ea8df +0x1c9:  mov    %eax,(%esp)
082ea8e2 +0x1cc:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
082ea8e7 +0x1d1:  jmp    082ea8ea <+0x1d4>
082ea8e9 +0x1d3:  nop
082ea8ea +0x1d4:  addl   $0x1,-0x10(%ebp)
082ea8ee +0x1d8:  cmpl   $0x7,-0x10(%ebp)
082ea8f2 +0x1dc:  setle  %al
082ea8f5 +0x1df:  test   %al,%al
082ea8f7 +0x1e1:  jne    082ea808 <+0xf2>
082ea8fd +0x1e7:  mov    -0x18(%ebp),%eax
082ea900 +0x1ea:  shl    $0x5,%eax
082ea903 +0x1ed:  add    0x8(%ebp),%eax
082ea906 +0x1f0:  mov    %eax,(%esp)
082ea909 +0x1f3:  call   082f0542 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2c6>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2c6
082ea90e +0x1f8:  mov    %eax,%ebx
082ea910 +0x1fa:  movl   $0x0,0xc(%esp)
082ea918 +0x202:  movl   $0xa8d,0x8(%esp)
082ea920 +0x20a:  movl   $&_ZZN11pvp_assault13CAssaultPlace17TimeoutConnectP2PEvE19__PRETTY_FUNCTION__,0x4(%esp)
082ea928 +0x212:  lea    -0x2c(%ebp),%eax
082ea92b +0x215:  mov    %eax,(%esp)
082ea92e +0x218:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
082ea933 +0x21d:  mov    %ebx,0x8(%esp)
082ea937 +0x221:  movl   $"SECEDE : %s",0x4(%esp)
082ea93f +0x229:  lea    -0x2c(%ebp),%eax
082ea942 +0x22c:  mov    %eax,(%esp)
082ea945 +0x22f:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
082ea94a +0x234:  mov    -0x18(%ebp),%eax
082ea94d +0x237:  shl    $0x5,%eax
082ea950 +0x23a:  add    0x8(%ebp),%eax
082ea953 +0x23d:  mov    %eax,(%esp)
082ea956 +0x240:  call   082f0542 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2c6>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2c6
082ea95b +0x245:  mov    %eax,-0x14(%ebp)
082ea95e +0x248:  mov    &_ZN10GlobalData15s_power_managerE,%eax
082ea963 +0x24d:  mov    %eax,(%esp)
082ea966 +0x250:  call   0847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>  ; CPowerManager::IsPowerWarEventOn()
082ea96b +0x255:  test   %al,%al
082ea96d +0x257:  je     082ea985 <+0x26f>
082ea96f +0x259:  mov    -0x14(%ebp),%eax
082ea972 +0x25c:  mov    %eax,(%esp)
082ea975 +0x25f:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
082ea97a +0x264:  cmp    $0x7,%al
082ea97c +0x266:  jne    082ea985 <+0x26f>
082ea97e +0x268:  mov    $0x1,%eax
082ea983 +0x26d:  jmp    082ea98a <+0x274>
082ea985 +0x26f:  mov    $0x0,%eax
082ea98a +0x274:  test   %al,%al
082ea98c +0x276:  je     082eaa1b <+0x305>
082ea992 +0x27c:  lea    -0x68(%ebp),%eax
082ea995 +0x27f:  mov    %eax,(%esp)
082ea998 +0x282:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
082ea99d +0x287:  movl   $0xe6,0x8(%esp)
082ea9a5 +0x28f:  movl   $0x0,0x4(%esp)
082ea9ad +0x297:  lea    -0x68(%ebp),%eax
082ea9b0 +0x29a:  mov    %eax,(%esp)
082ea9b3 +0x29d:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
082ea9b8 +0x2a2:  movl   $0x2,0x4(%esp)
082ea9c0 +0x2aa:  lea    -0x68(%ebp),%eax
082ea9c3 +0x2ad:  mov    %eax,(%esp)
082ea9c6 +0x2b0:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
082ea9cb +0x2b5:  movl   $0x1,0x4(%esp)
082ea9d3 +0x2bd:  lea    -0x68(%ebp),%eax
082ea9d6 +0x2c0:  mov    %eax,(%esp)
082ea9d9 +0x2c3:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
082ea9de +0x2c8:  lea    -0x68(%ebp),%eax
082ea9e1 +0x2cb:  mov    %eax,0x4(%esp)
082ea9e5 +0x2cf:  mov    -0x14(%ebp),%eax
082ea9e8 +0x2d2:  mov    %eax,(%esp)
082ea9eb +0x2d5:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
082ea9f0 +0x2da:  jmp    082eaa0d <+0x2f7>
082ea9f2 +0x2dc:  mov    %edx,%ebx
082ea9f4 +0x2de:  mov    %eax,%esi
082ea9f6 +0x2e0:  lea    -0x68(%ebp),%eax
082ea9f9 +0x2e3:  mov    %eax,(%esp)
082ea9fc +0x2e6:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082eaa01 +0x2eb:  mov    %esi,%eax
082eaa03 +0x2ed:  mov    %ebx,%edx
082eaa05 +0x2ef:  mov    %eax,(%esp)
082eaa08 +0x2f2:  call   08ae3750 <_Unwind_Resume>
082eaa0d +0x2f7:  lea    -0x68(%ebp),%eax
082eaa10 +0x2fa:  mov    %eax,(%esp)
082eaa13 +0x2fd:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082eaa18 +0x302:  jmp    082eaa1b <+0x305>
082eaa1a +0x304:  nop
082eaa1b +0x305:  addl   $0x1,-0x18(%ebp)
082eaa1f +0x309:  cmpl   $0x7,-0x18(%ebp)
082eaa23 +0x30d:  setle  %al
082eaa26 +0x310:  test   %al,%al
082eaa28 +0x312:  jne    082ea764 <+0x4e>
082eaa2e +0x318:  movl   $0x0,-0xc(%ebp)
082eaa35 +0x31f:  jmp    082eaaa3 <+0x38d>
082eaa37 +0x321:  mov    -0xc(%ebp),%eax
082eaa3a +0x324:  shl    $0x5,%eax
082eaa3d +0x327:  add    0x8(%ebp),%eax
082eaa40 +0x32a:  mov    %eax,(%esp)
082eaa43 +0x32d:  call   082f055c <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2e0>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2e0
082eaa48 +0x332:  test   %al,%al
082eaa4a +0x334:  jne    082eaa9e <+0x388>
082eaa4c +0x336:  mov    -0xc(%ebp),%eax
082eaa4f +0x339:  shl    $0x5,%eax
082eaa52 +0x33c:  add    0x8(%ebp),%eax
082eaa55 +0x33f:  mov    %eax,(%esp)
082eaa58 +0x342:  call   082f058a <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x30e>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x30e
082eaa5d +0x347:  cmp    $0x4,%eax
082eaa60 +0x34a:  setne  %al
082eaa63 +0x34d:  test   %al,%al
082eaa65 +0x34f:  je     082eaa9f <+0x389>
082eaa67 +0x351:  movl   $0x0,0xc(%esp)
082eaa6f +0x359:  movl   $0x1,0x8(%esp)
082eaa77 +0x361:  mov    -0xc(%ebp),%eax
082eaa7a +0x364:  mov    %eax,0x4(%esp)
082eaa7e +0x368:  mov    0x8(%ebp),%eax
082eaa81 +0x36b:  mov    %eax,(%esp)
082eaa84 +0x36e:  call   082ead6a <_ZN11pvp_assault13CAssaultPlace17LeaveAssaultPlaceEibb>  ; pvp_assault::CAssaultPlace::LeaveAssaultPlace(int, bool, bool)
082eaa89 +0x373:  mov    0x8(%ebp),%eax
082eaa8c +0x376:  mov    0x10c(%eax),%eax
082eaa92 +0x37c:  cmp    $0x6,%eax
082eaa95 +0x37f:  jne    082eaa9f <+0x389>
082eaa97 +0x381:  mov    $0x0,%eax
082eaa9c +0x386:  jmp    082eab12 <+0x3fc>
082eaa9e +0x388:  nop
082eaa9f +0x389:  addl   $0x1,-0xc(%ebp)
082eaaa3 +0x38d:  cmpl   $0x7,-0xc(%ebp)
082eaaa7 +0x391:  setle  %al
082eaaaa +0x394:  test   %al,%al
082eaaac +0x396:  jne    082eaa37 <+0x321>
082eaaae +0x398:  mov    0x8(%ebp),%eax
082eaab1 +0x39b:  mov    %eax,(%esp)
082eaab4 +0x39e:  call   082e9502 <_ZN11pvp_assault13CAssaultPlace12StartAssaultEv>  ; pvp_assault::CAssaultPlace::StartAssault()
082eaab9 +0x3a3:  mov    %al,-0x19(%ebp)
082eaabc +0x3a6:  cmpb   $0x0,-0x19(%ebp)
082eaac0 +0x3aa:  je     082eab0e <+0x3f8>
082eaac2 +0x3ac:  mov    0x8(%ebp),%eax
082eaac5 +0x3af:  mov    0x12c(%eax),%eax
082eaacb +0x3b5:  test   %eax,%eax
082eaacd +0x3b7:  je     082eaae8 <+0x3d2>
082eaacf +0x3b9:  mov    0x8(%ebp),%eax
082eaad2 +0x3bc:  mov    0x12c(%eax),%eax
082eaad8 +0x3c2:  movl   $0x4,0x4(%esp)
082eaae0 +0x3ca:  mov    %eax,(%esp)
082eaae3 +0x3cd:  call   082a5a34 <_GLOBAL__I__ZN4CLog5this_E+0x1e5b>  ; global constructors keyed to CLog::this_+0x1e5b
082eaae8 +0x3d2:  mov    0x8(%ebp),%eax
082eaaeb +0x3d5:  mov    0x130(%eax),%eax
082eaaf1 +0x3db:  test   %eax,%eax
082eaaf3 +0x3dd:  je     082eab0e <+0x3f8>
082eaaf5 +0x3df:  mov    0x8(%ebp),%eax
082eaaf8 +0x3e2:  mov    0x130(%eax),%eax
082eaafe +0x3e8:  movl   $0x4,0x4(%esp)
082eab06 +0x3f0:  mov    %eax,(%esp)
082eab09 +0x3f3:  call   082a5a34 <_GLOBAL__I__ZN4CLog5this_E+0x1e5b>  ; global constructors keyed to CLog::this_+0x1e5b
082eab0e +0x3f8:  movzbl -0x19(%ebp),%eax
082eab12 +0x3fc:  add    $0x70,%esp
082eab15 +0x3ff:  pop    %ebx
082eab16 +0x400:  pop    %esi
082eab17 +0x401:  pop    %ebp
082eab18 +0x402:  ret
082eab19 +0x403:  nop
```

## 反编译 C

```c
// pvp_assault::CAssaultPlace::TimeoutConnectP2P @ 0x82ea716

/* pvp_assault::CAssaultPlace::TimeoutConnectP2P() */

char __thiscall pvp_assault::CAssaultPlace::TimeoutConnectP2P(CAssaultPlace *this)

{
  bool bVar1;
  char cVar2;
  undefined4 *puVar3;
  CPowerWarLog *this_00;
  CUserCharacInfo *pCVar4;
  undefined4 uVar5;
  int iVar6;
  PacketGuard local_6c [12];
  cMyTrace local_60 [16];
  cMyTrace local_50 [16];
  cMyTrace local_40 [16];
  cMyTrace local_30 [19];
  char local_1d;
  int local_1c;
  CUserCharacInfo *local_18;
  int local_14;
  int local_10;
  
  if (*(int *)(this + 0x10c) != 3) {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x13;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&ENUM_ERROR::typeinfo,0);
  }
  for (local_1c = 0; local_1c < 8; local_1c = local_1c + 1) {
    cVar2 = CAssaulter::Empty((CAssaulter *)(this + local_1c * 0x20));
    if ((cVar2 == '\0') &&
       (iVar6 = CAssaulter::GetState((CAssaulter *)(this + local_1c * 0x20)), iVar6 != 4)) {
      cVar2 = CPowerManager::IsPowerWarEventOn();
      if (cVar2 != '\0') {
        this_00 = (CPowerWarLog *)CPowerManager::GetPowerWarLog(GlobalData::s_power_manager);
        CPowerWarLog::IncP2PTimeOutCountSecede(this_00);
        cMyTrace::cMyTrace(local_60,"bool pvp_assault::CAssaultPlace::TimeoutConnectP2P()",0xa80,0);
        cMyTrace::operator()(local_60,"POWER WAR P2P SECEDE");
        for (local_14 = 0; local_14 < 8; local_14 = local_14 + 1) {
          cVar2 = CAssaulter::Empty((CAssaulter *)(this + local_14 * 0x20));
          if (cVar2 == '\0') {
            iVar6 = CAssaulter::GetTeam((CAssaulter *)(this + local_14 * 0x20));
            if (iVar6 == 0) {
              pCVar4 = (CUserCharacInfo *)
                       CAssaulter::GetUser((CAssaulter *)(this + local_14 * 0x20));
              uVar5 = CUserCharacInfo::getCurCharacName(pCVar4);
              cMyTrace::cMyTrace(local_50,"bool pvp_assault::CAssaultPlace::TimeoutConnectP2P()",
                                 0xa88,0);
              cMyTrace::operator()(local_50,"BLUE TEAM : %s",uVar5);
            }
            else {
              pCVar4 = (CUserCharacInfo *)
                       CAssaulter::GetUser((CAssaulter *)(this + local_14 * 0x20));
              uVar5 = CUserCharacInfo::getCurCharacName(pCVar4);
              cMyTrace::cMyTrace(local_40,"bool pvp_assault::CAssaultPlace::TimeoutConnectP2P()",
                                 0xa8a,0);
              cMyTrace::operator()(local_40,"RED TEAM : %s",uVar5);
            }
          }
        }
        uVar5 = CAssaulter::GetUser((CAssaulter *)(this + local_1c * 0x20));
        cMyTrace::cMyTrace(local_30,"bool pvp_assault::CAssaultPlace::TimeoutConnectP2P()",0xa8d,0);
        cMyTrace::operator()(local_30,"SECEDE : %s",uVar5);
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
        PacketGuard::PacketGuard(local_6c);
                    /* try { // try from 082ea9b3 to 082ea9ef has its CatchHandler @ 082ea9f2 */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_6c,0,0xe6);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_6c,2);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_6c,true);
        CUser::Send((CUser *)local_18,local_6c);
        PacketGuard::~PacketGuard(local_6c);
      }
    }
  }
  local_10 = 0;
  while( true ) {
    if (7 < local_10) {
      local_1d = StartAssault(this);
      if (local_1d != '\0') {
        if (*(int *)(this + 300) != 0) {
          CParty::SetAssaultState(*(CParty **)(this + 300),'\x04');
        }
        if (*(int *)(this + 0x130) != 0) {
          CParty::SetAssaultState(*(CParty **)(this + 0x130),'\x04');
        }
      }
      return local_1d;
    }
    cVar2 = CAssaulter::Empty((CAssaulter *)(this + local_10 * 0x20));
    if (((cVar2 == '\0') &&
        (iVar6 = CAssaulter::GetState((CAssaulter *)(this + local_10 * 0x20)), iVar6 != 4)) &&
       (LeaveAssaultPlace(this,local_10,true,false), *(int *)(this + 0x10c) == 6)) break;
    local_10 = local_10 + 1;
  }
  return '\0';
}
```
