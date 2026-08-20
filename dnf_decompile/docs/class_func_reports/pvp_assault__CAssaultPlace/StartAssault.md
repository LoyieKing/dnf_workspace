# StartAssault

`_ZN11pvp_assault13CAssaultPlace12StartAssaultEv`

`pvp_assault::CAssaultPlace::StartAssault()`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultPlace` | `0x082e9502` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082e9502  _ZN11pvp_assault13CAssaultPlace12StartAssaultEv
#           pvp_assault::CAssaultPlace::StartAssault()
# range [0x082e9502, 0x082e99a1]
082e9502 +0x000:  push   %ebp
082e9503 +0x001:  mov    %esp,%ebp
082e9505 +0x003:  push   %esi
082e9506 +0x004:  push   %ebx
082e9507 +0x005:  sub    $0x60,%esp
082e950a +0x008:  mov    0x8(%ebp),%eax
082e950d +0x00b:  mov    %eax,(%esp)
082e9510 +0x00e:  call   082e949c <_ZN11pvp_assault13CAssaultPlace15ClearBadP2PUserEv>  ; pvp_assault::CAssaultPlace::ClearBadP2PUser()
082e9515 +0x013:  mov    0x8(%ebp),%eax
082e9518 +0x016:  mov    0x100(%eax),%eax
082e951e +0x01c:  test   %eax,%eax
082e9520 +0x01e:  jne    082e95cf <+0xcd>
082e9526 +0x024:  mov    0x8(%ebp),%eax
082e9529 +0x027:  mov    0x12c(%eax),%eax
082e952f +0x02d:  test   %eax,%eax
082e9531 +0x02f:  je     082e954c <+0x4a>
082e9533 +0x031:  mov    0x8(%ebp),%eax
082e9536 +0x034:  mov    0x12c(%eax),%eax
082e953c +0x03a:  movl   $0x7,0x4(%esp)
082e9544 +0x042:  mov    %eax,(%esp)
082e9547 +0x045:  call   082a5a34 <_GLOBAL__I__ZN4CLog5this_E+0x1e5b>  ; global constructors keyed to CLog::this_+0x1e5b
082e954c +0x04a:  mov    0x8(%ebp),%eax
082e954f +0x04d:  mov    0x130(%eax),%eax
082e9555 +0x053:  test   %eax,%eax
082e9557 +0x055:  je     082e9572 <+0x70>
082e9559 +0x057:  mov    0x8(%ebp),%eax
082e955c +0x05a:  mov    0x130(%eax),%eax
082e9562 +0x060:  movl   $0x7,0x4(%esp)
082e956a +0x068:  mov    %eax,(%esp)
082e956d +0x06b:  call   082a5a34 <_GLOBAL__I__ZN4CLog5this_E+0x1e5b>  ; global constructors keyed to CLog::this_+0x1e5b
082e9572 +0x070:  mov    &_ZN10GlobalData15s_power_managerE,%eax
082e9577 +0x075:  mov    %eax,(%esp)
082e957a +0x078:  call   0847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>  ; CPowerManager::IsPowerWarEventOn()
082e957f +0x07d:  test   %al,%al
082e9581 +0x07f:  je     082e95ad <+0xab>
082e9583 +0x081:  mov    &_ZN10GlobalData15s_power_managerE,%eax
082e9588 +0x086:  mov    %eax,(%esp)
082e958b +0x089:  call   082f0906 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x68a>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x68a
082e9590 +0x08e:  mov    %eax,(%esp)
082e9593 +0x091:  call   082f08b4 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x638>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x638
082e9598 +0x096:  mov    &_ZN10GlobalData15s_power_managerE,%eax
082e959d +0x09b:  mov    %eax,(%esp)
082e95a0 +0x09e:  call   082f0906 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x68a>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x68a
082e95a5 +0x0a3:  mov    %eax,(%esp)
082e95a8 +0x0a6:  call   082f088c <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x610>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x610
082e95ad +0x0ab:  mov    0x8(%ebp),%eax
082e95b0 +0x0ae:  movl   $0x7,0x10c(%eax)
082e95ba +0x0b8:  mov    0x8(%ebp),%eax
082e95bd +0x0bb:  mov    %eax,(%esp)
082e95c0 +0x0be:  call   082e9ad6 <_ZN11pvp_assault13CAssaultPlace12CloseAssaultEv>  ; pvp_assault::CAssaultPlace::CloseAssault()
082e95c5 +0x0c3:  mov    $0x0,%ebx
082e95ca +0x0c8:  jmp    082e9999 <+0x497>
082e95cf +0x0cd:  mov    0x8(%ebp),%eax
082e95d2 +0x0d0:  mov    %eax,(%esp)
082e95d5 +0x0d3:  call   082e9142 <_ZN11pvp_assault13CAssaultPlace14_CheckPlayableEv>  ; pvp_assault::CAssaultPlace::_CheckPlayable()
082e95da +0x0d8:  xor    $0x1,%eax
082e95dd +0x0db:  test   %al,%al
082e95df +0x0dd:  je     082e968e <+0x18c>
082e95e5 +0x0e3:  mov    0x8(%ebp),%eax
082e95e8 +0x0e6:  movl   $0x6,0x10c(%eax)
082e95f2 +0x0f0:  mov    0x8(%ebp),%eax
082e95f5 +0x0f3:  mov    0x12c(%eax),%eax
082e95fb +0x0f9:  test   %eax,%eax
082e95fd +0x0fb:  je     082e9618 <+0x116>
082e95ff +0x0fd:  mov    0x8(%ebp),%eax
082e9602 +0x100:  mov    0x12c(%eax),%eax
082e9608 +0x106:  movl   $0x6,0x4(%esp)
082e9610 +0x10e:  mov    %eax,(%esp)
082e9613 +0x111:  call   082a5a34 <_GLOBAL__I__ZN4CLog5this_E+0x1e5b>  ; global constructors keyed to CLog::this_+0x1e5b
082e9618 +0x116:  mov    0x8(%ebp),%eax
082e961b +0x119:  mov    0x130(%eax),%eax
082e9621 +0x11f:  test   %eax,%eax
082e9623 +0x121:  je     082e963e <+0x13c>
082e9625 +0x123:  mov    0x8(%ebp),%eax
082e9628 +0x126:  mov    0x130(%eax),%eax
082e962e +0x12c:  movl   $0x6,0x4(%esp)
082e9636 +0x134:  mov    %eax,(%esp)
082e9639 +0x137:  call   082a5a34 <_GLOBAL__I__ZN4CLog5this_E+0x1e5b>  ; global constructors keyed to CLog::this_+0x1e5b
082e963e +0x13c:  mov    &_ZN10GlobalData15s_power_managerE,%eax
082e9643 +0x141:  mov    %eax,(%esp)
082e9646 +0x144:  call   0847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>  ; CPowerManager::IsPowerWarEventOn()
082e964b +0x149:  test   %al,%al
082e964d +0x14b:  je     082e9679 <+0x177>
082e964f +0x14d:  mov    &_ZN10GlobalData15s_power_managerE,%eax
082e9654 +0x152:  mov    %eax,(%esp)
082e9657 +0x155:  call   082f0906 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x68a>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x68a
082e965c +0x15a:  mov    %eax,(%esp)
082e965f +0x15d:  call   082f08b4 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x638>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x638
082e9664 +0x162:  mov    &_ZN10GlobalData15s_power_managerE,%eax
082e9669 +0x167:  mov    %eax,(%esp)
082e966c +0x16a:  call   082f0906 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x68a>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x68a
082e9671 +0x16f:  mov    %eax,(%esp)
082e9674 +0x172:  call   082f088c <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x610>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x610
082e9679 +0x177:  mov    0x8(%ebp),%eax
082e967c +0x17a:  mov    %eax,(%esp)
082e967f +0x17d:  call   082e99a2 <_ZN11pvp_assault13CAssaultPlace10EndAssaultEv>  ; pvp_assault::CAssaultPlace::EndAssault()
082e9684 +0x182:  mov    $0x0,%ebx
082e9689 +0x187:  jmp    082e9999 <+0x497>
082e968e +0x18c:  mov    0x8(%ebp),%eax
082e9691 +0x18f:  movl   $0x4,0x10c(%eax)
082e969b +0x199:  movl   $0x0,-0x10(%ebp)
082e96a2 +0x1a0:  jmp    082e96fd <+0x1fb>
082e96a4 +0x1a2:  mov    -0x10(%ebp),%eax
082e96a7 +0x1a5:  shl    $0x5,%eax
082e96aa +0x1a8:  add    0x8(%ebp),%eax
082e96ad +0x1ab:  mov    %eax,(%esp)
082e96b0 +0x1ae:  call   082f055c <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2e0>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2e0
082e96b5 +0x1b3:  test   %al,%al
082e96b7 +0x1b5:  jne    082e96f8 <+0x1f6>
082e96b9 +0x1b7:  mov    -0x10(%ebp),%eax
082e96bc +0x1ba:  shl    $0x5,%eax
082e96bf +0x1bd:  add    0x8(%ebp),%eax
082e96c2 +0x1c0:  movl   $0x5,0x4(%esp)
082e96ca +0x1c8:  mov    %eax,(%esp)
082e96cd +0x1cb:  call   082f057c <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x300>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x300
082e96d2 +0x1d0:  mov    -0x10(%ebp),%eax
082e96d5 +0x1d3:  shl    $0x5,%eax
082e96d8 +0x1d6:  add    0x8(%ebp),%eax
082e96db +0x1d9:  mov    %eax,(%esp)
082e96de +0x1dc:  call   082f0542 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2c6>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2c6
082e96e3 +0x1e1:  mov    %eax,%ebx
082e96e5 +0x1e3:  call   082348df <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9f89>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9f89
082e96ea +0x1e8:  mov    %ebx,0x4(%esp)
082e96ee +0x1ec:  mov    %eax,(%esp)
082e96f1 +0x1ef:  call   08472272 <_ZN19disconnect_detecter19CDisconnectDetecter12RegisterUserEP5CUser>  ; disconnect_detecter::CDisconnectDetecter::RegisterUser(CUser*)
082e96f6 +0x1f4:  jmp    082e96f9 <+0x1f7>
082e96f8 +0x1f6:  nop
082e96f9 +0x1f7:  addl   $0x1,-0x10(%ebp)
082e96fd +0x1fb:  cmpl   $0x7,-0x10(%ebp)
082e9701 +0x1ff:  setle  %al
082e9704 +0x202:  test   %al,%al
082e9706 +0x204:  jne    082e96a4 <+0x1a2>
082e9708 +0x206:  mov    0x8(%ebp),%eax
082e970b +0x209:  mov    0x12c(%eax),%eax
082e9711 +0x20f:  test   %eax,%eax
082e9713 +0x211:  je     082e972e <+0x22c>
082e9715 +0x213:  mov    0x8(%ebp),%eax
082e9718 +0x216:  mov    0x12c(%eax),%eax
082e971e +0x21c:  movl   $0x4,0x4(%esp)
082e9726 +0x224:  mov    %eax,(%esp)
082e9729 +0x227:  call   082a5a34 <_GLOBAL__I__ZN4CLog5this_E+0x1e5b>  ; global constructors keyed to CLog::this_+0x1e5b
082e972e +0x22c:  mov    0x8(%ebp),%eax
082e9731 +0x22f:  mov    0x130(%eax),%eax
082e9737 +0x235:  test   %eax,%eax
082e9739 +0x237:  je     082e9754 <+0x252>
082e973b +0x239:  mov    0x8(%ebp),%eax
082e973e +0x23c:  mov    0x130(%eax),%eax
082e9744 +0x242:  movl   $0x4,0x4(%esp)
082e974c +0x24a:  mov    %eax,(%esp)
082e974f +0x24d:  call   082a5a34 <_GLOBAL__I__ZN4CLog5this_E+0x1e5b>  ; global constructors keyed to CLog::this_+0x1e5b
082e9754 +0x252:  lea    -0x4c(%ebp),%eax
082e9757 +0x255:  mov    %eax,(%esp)
082e975a +0x258:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
082e975f +0x25d:  lea    -0x4c(%ebp),%eax
082e9762 +0x260:  mov    %eax,0x4(%esp)
082e9766 +0x264:  mov    0x8(%ebp),%eax
082e9769 +0x267:  mov    %eax,(%esp)
082e976c +0x26a:  call   082e886a <_ZN11pvp_assault13CAssaultPlace17_MakeStartAssaultEP11PacketGuard>  ; pvp_assault::CAssaultPlace::_MakeStartAssault(PacketGuard*)
082e9771 +0x26f:  lea    -0x4c(%ebp),%eax
082e9774 +0x272:  mov    %eax,0x4(%esp)
082e9778 +0x276:  mov    0x8(%ebp),%eax
082e977b +0x279:  mov    %eax,(%esp)
082e977e +0x27c:  call   082e6bf6 <_ZN11pvp_assault13CAssaultPlace10SendPacketER11PacketGuard>  ; pvp_assault::CAssaultPlace::SendPacket(PacketGuard&)
082e9783 +0x281:  lea    -0x4c(%ebp),%eax
082e9786 +0x284:  mov    %eax,(%esp)
082e9789 +0x287:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
082e978e +0x28c:  movl   $0x1,0x8(%esp)
082e9796 +0x294:  lea    -0x4c(%ebp),%eax
082e9799 +0x297:  mov    %eax,0x4(%esp)
082e979d +0x29b:  mov    0x8(%ebp),%eax
082e97a0 +0x29e:  mov    %eax,(%esp)
082e97a3 +0x2a1:  call   082e8afc <_ZN11pvp_assault13CAssaultPlace26_MakeViewAssaultIconPlayerEP11PacketGuardb>  ; pvp_assault::CAssaultPlace::_MakeViewAssaultIconPlayer(PacketGuard*, bool)
082e97a8 +0x2a6:  lea    -0x4c(%ebp),%eax
082e97ab +0x2a9:  mov    %eax,0x4(%esp)
082e97af +0x2ad:  mov    0x8(%ebp),%eax
082e97b2 +0x2b0:  mov    %eax,(%esp)
082e97b5 +0x2b3:  call   082e6d3a <_ZN11pvp_assault13CAssaultPlace17_SendPacketToAreaER11PacketGuard>  ; pvp_assault::CAssaultPlace::_SendPacketToArea(PacketGuard&)
082e97ba +0x2b8:  mov    0x8(%ebp),%eax
082e97bd +0x2bb:  mov    %eax,(%esp)
082e97c0 +0x2be:  call   082e79f6 <_ZN11pvp_assault13CAssaultPlace14_SendUserStateEv>  ; pvp_assault::CAssaultPlace::_SendUserState()
082e97c5 +0x2c3:  mov    0x8(%ebp),%eax
082e97c8 +0x2c6:  mov    0x108(%eax),%edx
082e97ce +0x2cc:  mov    0x8(%ebp),%eax
082e97d1 +0x2cf:  mov    0x104(%eax),%eax
082e97d7 +0x2d5:  mov    %edx,0x8(%esp)
082e97db +0x2d9:  mov    %eax,0x4(%esp)
082e97df +0x2dd:  movl   $0xb4,(%esp)
082e97e6 +0x2e4:  call   0863763a <_ZN15TimerEndAssault15registNextTimerElii>  ; TimerEndAssault::registNextTimer(long, int, int)
082e97eb +0x2e9:  mov    &_ZN10GlobalData15s_power_managerE,%eax
082e97f0 +0x2ee:  mov    %eax,(%esp)
082e97f3 +0x2f1:  call   0847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>  ; CPowerManager::IsPowerWarEventOn()
082e97f8 +0x2f6:  test   %al,%al
082e97fa +0x2f8:  je     082e994c <+0x44a>
082e9800 +0x2fe:  mov    &_ZN10GlobalData15s_power_managerE,%eax
082e9805 +0x303:  mov    %eax,(%esp)
082e9808 +0x306:  call   082f0906 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x68a>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x68a
082e980d +0x30b:  mov    %eax,(%esp)
082e9810 +0x30e:  call   082f08c8 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x64c>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x64c
082e9815 +0x313:  movl   $0x0,0xc(%esp)
082e981d +0x31b:  movl   $0x897,0x8(%esp)
082e9825 +0x323:  movl   $&_ZZN11pvp_assault13CAssaultPlace12StartAssaultEvE19__PRETTY_FUNCTION__,0x4(%esp)
082e982d +0x32b:  lea    -0x40(%ebp),%eax
082e9830 +0x32e:  mov    %eax,(%esp)
082e9833 +0x331:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
082e9838 +0x336:  movl   $"POWER WAR START SUCCESS",0x4(%esp)
082e9840 +0x33e:  lea    -0x40(%ebp),%eax
082e9843 +0x341:  mov    %eax,(%esp)
082e9846 +0x344:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
082e984b +0x349:  movl   $0x0,-0xc(%ebp)
082e9852 +0x350:  jmp    082e993d <+0x43b>
082e9857 +0x355:  mov    -0xc(%ebp),%eax
082e985a +0x358:  shl    $0x5,%eax
082e985d +0x35b:  add    0x8(%ebp),%eax
082e9860 +0x35e:  mov    %eax,(%esp)
082e9863 +0x361:  call   082f055c <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2e0>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2e0
082e9868 +0x366:  test   %al,%al
082e986a +0x368:  jne    082e9938 <+0x436>
082e9870 +0x36e:  mov    -0xc(%ebp),%eax
082e9873 +0x371:  shl    $0x5,%eax
082e9876 +0x374:  add    0x8(%ebp),%eax
082e9879 +0x377:  mov    %eax,(%esp)
082e987c +0x37a:  call   082f0570 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2f4>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2f4
082e9881 +0x37f:  test   %eax,%eax
082e9883 +0x381:  sete   %al
082e9886 +0x384:  test   %al,%al
082e9888 +0x386:  je     082e98e1 <+0x3df>
082e988a +0x388:  mov    -0xc(%ebp),%eax
082e988d +0x38b:  shl    $0x5,%eax
082e9890 +0x38e:  add    0x8(%ebp),%eax
082e9893 +0x391:  mov    %eax,(%esp)
082e9896 +0x394:  call   082f0542 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2c6>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2c6
082e989b +0x399:  mov    %eax,(%esp)
082e989e +0x39c:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
082e98a3 +0x3a1:  mov    %eax,%ebx
082e98a5 +0x3a3:  movl   $0x0,0xc(%esp)
082e98ad +0x3ab:  movl   $0x89f,0x8(%esp)
082e98b5 +0x3b3:  movl   $&_ZZN11pvp_assault13CAssaultPlace12StartAssaultEvE19__PRETTY_FUNCTION__,0x4(%esp)
082e98bd +0x3bb:  lea    -0x30(%ebp),%eax
082e98c0 +0x3be:  mov    %eax,(%esp)
082e98c3 +0x3c1:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
082e98c8 +0x3c6:  mov    %ebx,0x8(%esp)
082e98cc +0x3ca:  movl   $"BLUE TEAM : %s",0x4(%esp)
082e98d4 +0x3d2:  lea    -0x30(%ebp),%eax
082e98d7 +0x3d5:  mov    %eax,(%esp)
082e98da +0x3d8:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
082e98df +0x3dd:  jmp    082e9939 <+0x437>
082e98e1 +0x3df:  mov    -0xc(%ebp),%eax
082e98e4 +0x3e2:  shl    $0x5,%eax
082e98e7 +0x3e5:  add    0x8(%ebp),%eax
082e98ea +0x3e8:  mov    %eax,(%esp)
082e98ed +0x3eb:  call   082f0542 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2c6>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2c6
082e98f2 +0x3f0:  mov    %eax,(%esp)
082e98f5 +0x3f3:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
082e98fa +0x3f8:  mov    %eax,%ebx
082e98fc +0x3fa:  movl   $0x0,0xc(%esp)
082e9904 +0x402:  movl   $0x8a1,0x8(%esp)
082e990c +0x40a:  movl   $&_ZZN11pvp_assault13CAssaultPlace12StartAssaultEvE19__PRETTY_FUNCTION__,0x4(%esp)
082e9914 +0x412:  lea    -0x20(%ebp),%eax
082e9917 +0x415:  mov    %eax,(%esp)
082e991a +0x418:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
082e991f +0x41d:  mov    %ebx,0x8(%esp)
082e9923 +0x421:  movl   $"RED TEAM : %s",0x4(%esp)
082e992b +0x429:  lea    -0x20(%ebp),%eax
082e992e +0x42c:  mov    %eax,(%esp)
082e9931 +0x42f:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
082e9936 +0x434:  jmp    082e9939 <+0x437>
082e9938 +0x436:  nop
082e9939 +0x437:  addl   $0x1,-0xc(%ebp)
082e993d +0x43b:  cmpl   $0x7,-0xc(%ebp)
082e9941 +0x43f:  setle  %al
082e9944 +0x442:  test   %al,%al
082e9946 +0x444:  jne    082e9857 <+0x355>
082e994c +0x44a:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
082e9953 +0x451:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
082e9958 +0x456:  mov    0x8(%ebp),%edx
082e995b +0x459:  mov    %eax,0x13c(%edx)
082e9961 +0x45f:  mov    0x8(%ebp),%eax
082e9964 +0x462:  mov    %eax,(%esp)
082e9967 +0x465:  call   082e72fa <_ZN11pvp_assault13CAssaultPlace23_PowerWarAssaultCheckInEv>  ; pvp_assault::CAssaultPlace::_PowerWarAssaultCheckIn()
082e996c +0x46a:  mov    $0x1,%ebx
082e9971 +0x46f:  lea    -0x4c(%ebp),%eax
082e9974 +0x472:  mov    %eax,(%esp)
082e9977 +0x475:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082e997c +0x47a:  jmp    082e9999 <+0x497>
082e997e +0x47c:  mov    %edx,%ebx
082e9980 +0x47e:  mov    %eax,%esi
082e9982 +0x480:  lea    -0x4c(%ebp),%eax
082e9985 +0x483:  mov    %eax,(%esp)
082e9988 +0x486:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082e998d +0x48b:  mov    %esi,%eax
082e998f +0x48d:  mov    %ebx,%edx
082e9991 +0x48f:  mov    %eax,(%esp)
082e9994 +0x492:  call   08ae3750 <_Unwind_Resume>
082e9999 +0x497:  mov    %ebx,%eax
082e999b +0x499:  add    $0x60,%esp
082e999e +0x49c:  pop    %ebx
082e999f +0x49d:  pop    %esi
082e99a0 +0x49e:  pop    %ebp
082e99a1 +0x49f:  ret
```

## 反编译 C

```c
// pvp_assault::CAssaultPlace::StartAssault @ 0x82e9502

/* pvp_assault::CAssaultPlace::StartAssault() */

undefined4 __thiscall pvp_assault::CAssaultPlace::StartAssault(CAssaultPlace *this)

{
  char cVar1;
  CPowerWarLog *pCVar2;
  CUser *pCVar3;
  CDisconnectDetecter *this_00;
  int iVar4;
  CUserCharacInfo *pCVar5;
  undefined4 uVar6;
  PacketGuard local_50 [12];
  cMyTrace local_44 [16];
  cMyTrace local_34 [16];
  cMyTrace local_24 [16];
  int local_14;
  int local_10;
  
  ClearBadP2PUser(this);
  if (*(int *)(this + 0x100) == 0) {
    if (*(int *)(this + 300) != 0) {
      CParty::SetAssaultState(*(CParty **)(this + 300),'\a');
    }
    if (*(int *)(this + 0x130) != 0) {
      CParty::SetAssaultState(*(CParty **)(this + 0x130),'\a');
    }
    cVar1 = CPowerManager::IsPowerWarEventOn();
    if (cVar1 != '\0') {
      pCVar2 = (CPowerWarLog *)CPowerManager::GetPowerWarLog(GlobalData::s_power_manager);
      CPowerWarLog::IncStartFailureCount(pCVar2);
      pCVar2 = (CPowerWarLog *)CPowerManager::GetPowerWarLog(GlobalData::s_power_manager);
      CPowerWarLog::IncP2PBadCountFailure(pCVar2);
    }
    *(undefined4 *)(this + 0x10c) = 7;
    CloseAssault(this);
    uVar6 = 0;
  }
  else {
    cVar1 = _CheckPlayable(this);
    if (cVar1 == '\x01') {
      *(undefined4 *)(this + 0x10c) = 4;
      for (local_14 = 0; local_14 < 8; local_14 = local_14 + 1) {
        cVar1 = CAssaulter::Empty((CAssaulter *)(this + local_14 * 0x20));
        if (cVar1 == '\0') {
          CAssaulter::SetState((CAssaulter *)(this + local_14 * 0x20),5);
          pCVar3 = (CUser *)CAssaulter::GetUser((CAssaulter *)(this + local_14 * 0x20));
          this_00 = (CDisconnectDetecter *)disconnect_detecter::GetInstanceDisconnectDetecter();
          disconnect_detecter::CDisconnectDetecter::RegisterUser(this_00,pCVar3);
        }
      }
      if (*(int *)(this + 300) != 0) {
        CParty::SetAssaultState(*(CParty **)(this + 300),'\x04');
      }
      if (*(int *)(this + 0x130) != 0) {
        CParty::SetAssaultState(*(CParty **)(this + 0x130),'\x04');
      }
      PacketGuard::PacketGuard(local_50);
                    /* try { // try from 082e976c to 082e9935 has its CatchHandler @ 082e997e */
      _MakeStartAssault(this,local_50);
      SendPacket(this,local_50);
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_50);
      _MakeViewAssaultIconPlayer(this,local_50,true);
      _SendPacketToArea(this,local_50);
      _SendUserState(this);
      TimerEndAssault::registNextTimer(0xb4,*(int *)(this + 0x104),*(int *)(this + 0x108));
      cVar1 = CPowerManager::IsPowerWarEventOn();
      if (cVar1 != '\0') {
        pCVar2 = (CPowerWarLog *)CPowerManager::GetPowerWarLog(GlobalData::s_power_manager);
        CPowerWarLog::IncStartSuccessCount(pCVar2);
        cMyTrace::cMyTrace(local_44,"bool pvp_assault::CAssaultPlace::StartAssault()",0x897,0);
        cMyTrace::operator()(local_44,"POWER WAR START SUCCESS");
        for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
          cVar1 = CAssaulter::Empty((CAssaulter *)(this + local_10 * 0x20));
          if (cVar1 == '\0') {
            iVar4 = CAssaulter::GetTeam((CAssaulter *)(this + local_10 * 0x20));
            if (iVar4 == 0) {
              pCVar5 = (CUserCharacInfo *)
                       CAssaulter::GetUser((CAssaulter *)(this + local_10 * 0x20));
              uVar6 = CUserCharacInfo::getCurCharacName(pCVar5);
              cMyTrace::cMyTrace(local_34,"bool pvp_assault::CAssaultPlace::StartAssault()",0x89f,0)
              ;
              cMyTrace::operator()(local_34,"BLUE TEAM : %s",uVar6);
            }
            else {
              pCVar5 = (CUserCharacInfo *)
                       CAssaulter::GetUser((CAssaulter *)(this + local_10 * 0x20));
              uVar6 = CUserCharacInfo::getCurCharacName(pCVar5);
              cMyTrace::cMyTrace(local_24,"bool pvp_assault::CAssaultPlace::StartAssault()",0x8a1,0)
              ;
              cMyTrace::operator()(local_24,"RED TEAM : %s",uVar6);
            }
          }
        }
      }
      uVar6 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      *(undefined4 *)(this + 0x13c) = uVar6;
      _PowerWarAssaultCheckIn(this);
      uVar6 = 1;
      PacketGuard::~PacketGuard(local_50);
    }
    else {
      *(undefined4 *)(this + 0x10c) = 6;
      if (*(int *)(this + 300) != 0) {
        CParty::SetAssaultState(*(CParty **)(this + 300),'\x06');
      }
      if (*(int *)(this + 0x130) != 0) {
        CParty::SetAssaultState(*(CParty **)(this + 0x130),'\x06');
      }
      cVar1 = CPowerManager::IsPowerWarEventOn();
      if (cVar1 != '\0') {
        pCVar2 = (CPowerWarLog *)CPowerManager::GetPowerWarLog(GlobalData::s_power_manager);
        CPowerWarLog::IncStartFailureCount(pCVar2);
        pCVar2 = (CPowerWarLog *)CPowerManager::GetPowerWarLog(GlobalData::s_power_manager);
        CPowerWarLog::IncP2PBadCountFailure(pCVar2);
      }
      EndAssault(this);
      uVar6 = 0;
    }
  }
  return uVar6;
}
```
