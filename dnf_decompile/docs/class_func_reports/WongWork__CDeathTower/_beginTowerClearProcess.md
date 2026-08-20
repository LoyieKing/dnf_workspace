# _beginTowerClearProcess

`_ZN8WongWork11CDeathTower23_beginTowerClearProcessEb`

`WongWork::CDeathTower::_beginTowerClearProcess(bool)`

| 类 | 地址 |
|---|---|
| `WongWork::CDeathTower` | `0x08467208` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08467208  _ZN8WongWork11CDeathTower23_beginTowerClearProcessEb
#           WongWork::CDeathTower::_beginTowerClearProcess(bool)
# range [0x08467208, 0x08467b1f]
08467208 +0x000:  push   %ebp
08467209 +0x001:  mov    %esp,%ebp
0846720b +0x003:  push   %edi
0846720c +0x004:  push   %esi
0846720d +0x005:  push   %ebx
0846720e +0x006:  sub    $0xcc,%esp
08467214 +0x00c:  mov    0xc(%ebp),%eax
08467217 +0x00f:  mov    %al,-0xac(%ebp)
0846721d +0x015:  mov    0x8(%ebp),%eax
08467220 +0x018:  mov    %eax,(%esp)
08467223 +0x01b:  call   08469c5c <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x33f>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x33f
08467228 +0x020:  cmp    $0x2,%eax
0846722b +0x023:  setg   %al
0846722e +0x026:  test   %al,%al
08467230 +0x028:  jne    08467b13 <+0x90b>
08467236 +0x02e:  movl   $0x0,-0x40(%ebp)
0846723d +0x035:  mov    0x8(%ebp),%eax
08467240 +0x038:  add    $0x110,%eax
08467245 +0x03d:  mov    %eax,(%esp)
08467248 +0x040:  call   08469b26 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x209>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x209
0846724d +0x045:  mov    %eax,-0x3c(%ebp)
08467250 +0x048:  mov    -0x3c(%ebp),%eax
08467253 +0x04b:  mov    %eax,(%esp)
08467256 +0x04e:  call   082a774c <_GLOBAL__I__ZN4CLog5this_E+0x3b73>  ; global constructors keyed to CLog::this_+0x3b73
0846725b +0x053:  mov    %eax,-0x38(%ebp)
0846725e +0x056:  movzbl -0xac(%ebp),%eax
08467265 +0x05d:  mov    %eax,0x4(%esp)
08467269 +0x061:  mov    0x8(%ebp),%eax
0846726c +0x064:  mov    %eax,(%esp)
0846726f +0x067:  call   08467e60 <_ZN8WongWork11CDeathTower8_onClearEb>  ; WongWork::CDeathTower::_onClear(bool)
08467274 +0x06c:  mov    0x8(%ebp),%eax
08467277 +0x06f:  mov    (%eax),%eax
08467279 +0x071:  mov    0xcd8(%eax),%eax
0846727f +0x077:  cmp    $0x1,%eax
08467282 +0x07a:  jne    0846737a <+0x172>
08467288 +0x080:  movl   $0x5,0x4(%esp)
08467290 +0x088:  mov    0x8(%ebp),%eax
08467293 +0x08b:  mov    %eax,(%esp)
08467296 +0x08e:  call   08469c34 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x317>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x317
0846729b +0x093:  mov    0x8(%ebp),%eax
0846729e +0x096:  mov    (%eax),%eax
084672a0 +0x098:  movl   $0x2,0x4(%esp)
084672a8 +0x0a0:  mov    %eax,(%esp)
084672ab +0x0a3:  call   0814578c <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x20f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x20f
084672b0 +0x0a8:  movl   $0x4d,0x4(%esp)
084672b8 +0x0b0:  mov    0x8(%ebp),%eax
084672bb +0x0b3:  mov    %eax,(%esp)
084672be +0x0b6:  call   0830edec <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x9d1>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x9d1
084672c3 +0x0bb:  mov    %eax,%ebx
084672c5 +0x0bd:  mov    0x8(%ebp),%eax
084672c8 +0x0c0:  mov    0x4(%eax),%esi
084672cb +0x0c3:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
084672d0 +0x0c8:  movl   $0x4d,0x18(%esp)
084672d8 +0x0d0:  mov    %ebx,0x14(%esp)
084672dc +0x0d4:  movl   $0x3c,0x10(%esp)
084672e4 +0x0dc:  movl   $0x4d,0xc(%esp)
084672ec +0x0e4:  mov    %esi,0x8(%esp)
084672f0 +0x0e8:  movl   $0x6,0x4(%esp)
084672f8 +0x0f0:  mov    %eax,(%esp)
084672fb +0x0f3:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
08467300 +0x0f8:  lea    -0x68(%ebp),%eax
08467303 +0x0fb:  mov    %eax,(%esp)
08467306 +0x0fe:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0846730b +0x103:  movl   $0xfe,0x8(%esp)
08467313 +0x10b:  movl   $0x0,0x4(%esp)
0846731b +0x113:  lea    -0x68(%ebp),%eax
0846731e +0x116:  mov    %eax,(%esp)
08467321 +0x119:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08467326 +0x11e:  movl   $0x1,0x4(%esp)
0846732e +0x126:  lea    -0x68(%ebp),%eax
08467331 +0x129:  mov    %eax,(%esp)
08467334 +0x12c:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08467339 +0x131:  mov    0x8(%ebp),%eax
0846733c +0x134:  mov    (%eax),%eax
0846733e +0x136:  lea    -0x68(%ebp),%edx
08467341 +0x139:  mov    %edx,0x4(%esp)
08467345 +0x13d:  mov    %eax,(%esp)
08467348 +0x140:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
0846734d +0x145:  jmp    0846736a <+0x162>
0846734f +0x147:  mov    %edx,%ebx
08467351 +0x149:  mov    %eax,%esi
08467353 +0x14b:  lea    -0x68(%ebp),%eax
08467356 +0x14e:  mov    %eax,(%esp)
08467359 +0x151:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0846735e +0x156:  mov    %esi,%eax
08467360 +0x158:  mov    %ebx,%edx
08467362 +0x15a:  mov    %eax,(%esp)
08467365 +0x15d:  call   08ae3750 <_Unwind_Resume>
0846736a +0x162:  lea    -0x68(%ebp),%eax
0846736d +0x165:  mov    %eax,(%esp)
08467370 +0x168:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08467375 +0x16d:  jmp    08467b14 <+0x90c>
0846737a +0x172:  movl   $0x3,0x4(%esp)
08467382 +0x17a:  mov    0x8(%ebp),%eax
08467385 +0x17d:  mov    %eax,(%esp)
08467388 +0x180:  call   08469c34 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x317>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x317
0846738d +0x185:  movl   $0x4b,0x4(%esp)
08467395 +0x18d:  mov    0x8(%ebp),%eax
08467398 +0x190:  mov    %eax,(%esp)
0846739b +0x193:  call   0830edec <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x9d1>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x9d1
084673a0 +0x198:  mov    %eax,%ebx
084673a2 +0x19a:  mov    0x8(%ebp),%eax
084673a5 +0x19d:  mov    0x4(%eax),%esi
084673a8 +0x1a0:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
084673ad +0x1a5:  movl   $0x4b,0x18(%esp)
084673b5 +0x1ad:  mov    %ebx,0x14(%esp)
084673b9 +0x1b1:  movl   $0x1,0x10(%esp)
084673c1 +0x1b9:  movl   $0x4b,0xc(%esp)
084673c9 +0x1c1:  mov    %esi,0x8(%esp)
084673cd +0x1c5:  movl   $0x6,0x4(%esp)
084673d5 +0x1cd:  mov    %eax,(%esp)
084673d8 +0x1d0:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
084673dd +0x1d5:  mov    0x8(%ebp),%eax
084673e0 +0x1d8:  add    $0x14,%eax
084673e3 +0x1db:  mov    %eax,(%esp)
084673e6 +0x1de:  call   08469b02 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x1e5>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x1e5
084673eb +0x1e3:  mov    %eax,-0x5c(%ebp)
084673ee +0x1e6:  cmpb   $0x0,-0xac(%ebp)
084673f5 +0x1ed:  je     0846740c <+0x204>
084673f7 +0x1ef:  mov    0x8(%ebp),%eax
084673fa +0x1f2:  add    $0x110,%eax
084673ff +0x1f7:  mov    %eax,(%esp)
08467402 +0x1fa:  call   08469bd4 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x2b7>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x2b7
08467407 +0x1ff:  mov    %eax,-0x40(%ebp)
0846740a +0x202:  jmp    08467446 <+0x23e>
0846740c +0x204:  mov    0x8(%ebp),%eax
0846740f +0x207:  add    $0x110,%eax
08467414 +0x20c:  mov    %eax,(%esp)
08467417 +0x20f:  call   08469be0 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x2c3>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x2c3
0846741c +0x214:  mov    %eax,-0x40(%ebp)
0846741f +0x217:  mov    -0x5c(%ebp),%eax
08467422 +0x21a:  sub    $0x1,%eax
08467425 +0x21d:  mov    %eax,-0x58(%ebp)
08467428 +0x220:  movl   $0x1,-0x54(%ebp)
0846742f +0x227:  lea    -0x58(%ebp),%eax
08467432 +0x22a:  mov    %eax,0x4(%esp)
08467436 +0x22e:  lea    -0x54(%ebp),%eax
08467439 +0x231:  mov    %eax,(%esp)
0846743c +0x234:  call   0808e218 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x88>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x88
08467441 +0x239:  mov    (%eax),%eax
08467443 +0x23b:  mov    %eax,-0x5c(%ebp)
08467446 +0x23e:  movl   $0x0,-0x34(%ebp)
0846744d +0x245:  jmp    08467b02 <+0x8fa>
08467452 +0x24a:  movl   $0x0,-0x30(%ebp)
08467459 +0x251:  mov    0x8(%ebp),%eax
0846745c +0x254:  mov    (%eax),%eax
0846745e +0x256:  mov    -0x34(%ebp),%edx
08467461 +0x259:  mov    %edx,0x4(%esp)
08467465 +0x25d:  mov    %eax,(%esp)
08467468 +0x260:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
0846746d +0x265:  mov    %eax,-0x30(%ebp)
08467470 +0x268:  cmpl   $0x0,-0x30(%ebp)
08467474 +0x26c:  je     08467491 <+0x289>
08467476 +0x26e:  mov    0x8(%ebp),%eax
08467479 +0x271:  mov    (%eax),%eax
0846747b +0x273:  mov    -0x34(%ebp),%edx
0846747e +0x276:  mov    %edx,0x4(%esp)
08467482 +0x27a:  mov    %eax,(%esp)
08467485 +0x27d:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
0846748a +0x282:  xor    $0x1,%eax
0846748d +0x285:  test   %al,%al
0846748f +0x287:  je     08467498 <+0x290>
08467491 +0x289:  mov    $0x1,%eax
08467496 +0x28e:  jmp    0846749d <+0x295>
08467498 +0x290:  mov    $0x0,%eax
0846749d +0x295:  test   %al,%al
0846749f +0x297:  jne    08467afd <+0x8f5>
084674a5 +0x29d:  mov    -0x30(%ebp),%eax
084674a8 +0x2a0:  movl   $0x0,0x4(%esp)
084674b0 +0x2a8:  mov    %eax,(%esp)
084674b3 +0x2ab:  call   084699e6 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0xc9>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0xc9
084674b8 +0x2b0:  mov    -0x30(%ebp),%eax
084674bb +0x2b3:  movl   $0x0,0x4(%esp)
084674c3 +0x2bb:  mov    %eax,(%esp)
084674c6 +0x2be:  call   08469a20 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x103>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x103
084674cb +0x2c3:  mov    -0x30(%ebp),%eax
084674ce +0x2c6:  movl   $0x0,0x4(%esp)
084674d6 +0x2ce:  mov    %eax,(%esp)
084674d9 +0x2d1:  call   08469a02 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0xe5>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0xe5
084674de +0x2d6:  mov    -0x30(%ebp),%eax
084674e1 +0x2d9:  movl   $0x0,0x4(%esp)
084674e9 +0x2e1:  mov    %eax,(%esp)
084674ec +0x2e4:  call   08469a3e <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x121>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x121
084674f1 +0x2e9:  movl   $0x0,-0x2c(%ebp)
084674f8 +0x2f0:  mov    -0x5c(%ebp),%esi
084674fb +0x2f3:  mov    -0x30(%ebp),%eax
084674fe +0x2f6:  mov    %eax,(%esp)
08467501 +0x2f9:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08467506 +0x2fe:  mov    %eax,%ebx
08467508 +0x300:  mov    0x8(%ebp),%eax
0846750b +0x303:  add    $0xc,%eax
0846750e +0x306:  mov    %eax,(%esp)
08467511 +0x309:  call   082345f0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9c9a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9c9a
08467516 +0x30e:  mov    %eax,(%esp)
08467519 +0x311:  call   080fdcf0 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1c
0846751e +0x316:  mov    -0x40(%ebp),%edx
08467521 +0x319:  mov    %edx,0x14(%esp)
08467525 +0x31d:  mov    %esi,0x10(%esp)
08467529 +0x321:  mov    %ebx,0xc(%esp)
0846752d +0x325:  mov    -0x3c(%ebp),%edx
08467530 +0x328:  mov    %edx,0x8(%esp)
08467534 +0x32c:  mov    %eax,0x4(%esp)
08467538 +0x330:  mov    0x8(%ebp),%eax
0846753b +0x333:  mov    %eax,(%esp)
0846753e +0x336:  call   0846805e <_ZN8WongWork11CDeathTower19_checkRenewMyRecordEjjjjj>  ; WongWork::CDeathTower::_checkRenewMyRecord(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int)
08467543 +0x33b:  mov    %eax,-0x28(%ebp)
08467546 +0x33e:  cmpb   $0x0,-0xac(%ebp)
0846754d +0x345:  je     084675bf <+0x3b7>
0846754f +0x347:  cmpl   $0x1,-0x28(%ebp)
08467553 +0x34b:  jne    0846755c <+0x354>
08467555 +0x34d:  mov    $0x1,%eax
0846755a +0x352:  jmp    08467561 <+0x359>
0846755c +0x354:  mov    $0x0,%eax
08467561 +0x359:  mov    %eax,-0x2c(%ebp)
08467564 +0x35c:  mov    -0x5c(%ebp),%ebx
08467567 +0x35f:  mov    0x8(%ebp),%eax
0846756a +0x362:  add    $0xc,%eax
0846756d +0x365:  mov    %eax,(%esp)
08467570 +0x368:  call   082345f0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9c9a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9c9a
08467575 +0x36d:  mov    %eax,(%esp)
08467578 +0x370:  call   080fdcf0 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1c
0846757d +0x375:  mov    -0x40(%ebp),%edx
08467580 +0x378:  mov    %edx,0x10(%esp)
08467584 +0x37c:  mov    %ebx,0xc(%esp)
08467588 +0x380:  mov    -0x3c(%ebp),%edx
0846758b +0x383:  mov    %edx,0x8(%esp)
0846758f +0x387:  mov    %eax,0x4(%esp)
08467593 +0x38b:  mov    0x8(%ebp),%eax
08467596 +0x38e:  mov    %eax,(%esp)
08467599 +0x391:  call   0846801e <_ZN8WongWork11CDeathTower20_checkRenewTopRecordEjjjj>  ; WongWork::CDeathTower::_checkRenewTopRecord(unsigned int, unsigned int, unsigned int, unsigned int)
0846759e +0x396:  test   %al,%al
084675a0 +0x398:  je     084675b2 <+0x3aa>
084675a2 +0x39a:  cmpb   $0x0,-0xac(%ebp)
084675a9 +0x3a1:  je     084675b2 <+0x3aa>
084675ab +0x3a3:  mov    $0x1,%eax
084675b0 +0x3a8:  jmp    084675b7 <+0x3af>
084675b2 +0x3aa:  mov    $0x0,%eax
084675b7 +0x3af:  test   %al,%al
084675b9 +0x3b1:  je     084675bf <+0x3b7>
084675bb +0x3b3:  addl   $0x2,-0x2c(%ebp)
084675bf +0x3b7:  mov    -0x5c(%ebp),%ebx
084675c2 +0x3ba:  mov    0x8(%ebp),%eax
084675c5 +0x3bd:  add    $0xc,%eax
084675c8 +0x3c0:  mov    %eax,(%esp)
084675cb +0x3c3:  call   082345f0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9c9a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9c9a
084675d0 +0x3c8:  mov    %eax,(%esp)
084675d3 +0x3cb:  call   080fdcf0 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1c
084675d8 +0x3d0:  mov    %eax,(%esp)
084675db +0x3d3:  call   08469d69 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x44c>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x44c
084675e0 +0x3d8:  mov    -0x40(%ebp),%edx
084675e3 +0x3db:  mov    %edx,0xc(%esp)
084675e7 +0x3df:  mov    %ebx,0x8(%esp)
084675eb +0x3e3:  mov    %eax,0x4(%esp)
084675ef +0x3e7:  mov    -0x38(%ebp),%eax
084675f2 +0x3ea:  mov    %eax,(%esp)
084675f5 +0x3ed:  call   08468de0 <_ZN8WongWork18CDeathTowerRanking14getVirtualRankEjjj>  ; WongWork::CDeathTowerRanking::getVirtualRank(unsigned int, unsigned int, unsigned int)
084675fa +0x3f2:  mov    %eax,-0x24(%ebp)
084675fd +0x3f5:  mov    0x8(%ebp),%eax
08467600 +0x3f8:  add    $0xc,%eax
08467603 +0x3fb:  mov    %eax,(%esp)
08467606 +0x3fe:  call   082345f0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9c9a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9c9a
0846760b +0x403:  mov    %eax,(%esp)
0846760e +0x406:  call   080fdcf0 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1c
08467613 +0x40b:  cmp    $0x2af8,%eax
08467618 +0x410:  sete   %al
0846761b +0x413:  test   %al,%al
0846761d +0x415:  je     08467625 <+0x41d>
0846761f +0x417:  movb   $0x0,-0x1d(%ebp)
08467623 +0x41b:  jmp    08467629 <+0x421>
08467625 +0x41d:  movb   $0x1,-0x1d(%ebp)
08467629 +0x421:  mov    0x8(%ebp),%eax
0846762c +0x424:  add    $0x110,%eax
08467631 +0x429:  mov    %eax,(%esp)
08467634 +0x42c:  call   08469b26 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x209>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x209
08467639 +0x431:  mov    %eax,%esi
0846763b +0x433:  mov    -0x5c(%ebp),%eax
0846763e +0x436:  mov    %eax,-0xb4(%ebp)
08467644 +0x43c:  mov    0x8(%ebp),%eax
08467647 +0x43f:  add    $0x110,%eax
0846764c +0x444:  mov    %eax,(%esp)
0846764f +0x447:  call   08469b34 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x217>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x217
08467654 +0x44c:  mov    %eax,%ebx
08467656 +0x44e:  movsbl -0x1d(%ebp),%edi
0846765a +0x452:  call   0860f451 <_Z38GetInstanceDeathTowerPlaydataStatisticv>  ; GetInstanceDeathTowerPlaydataStatistic()
0846765f +0x457:  mov    %esi,0x14(%esp)
08467663 +0x45b:  mov    -0xb4(%ebp),%edx
08467669 +0x461:  mov    %edx,0x10(%esp)
0846766d +0x465:  mov    %ebx,0xc(%esp)
08467671 +0x469:  mov    %edi,0x8(%esp)
08467675 +0x46d:  mov    -0x34(%ebp),%edx
08467678 +0x470:  mov    %edx,0x4(%esp)
0846767c +0x474:  mov    %eax,(%esp)
0846767f +0x477:  call   0860f45c <_ZN28CDeathTowerPlayDataStatistic22SendDeathTowerPlayInfoEicPK30stDeathTowerRecordMemberInfo_tjj>  ; CDeathTowerPlayDataStatistic::SendDeathTowerPlayInfo(int, char, stDeathTowerRecordMemberInfo_t const*, unsigned int, unsigned int)
08467684 +0x47c:  mov    -0x5c(%ebp),%edi
08467687 +0x47f:  mov    -0x30(%ebp),%eax
0846768a +0x482:  mov    %eax,(%esp)
0846768d +0x485:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
08467692 +0x48a:  movsbl %al,%esi
08467695 +0x48d:  movsbl -0x1d(%ebp),%ebx
08467699 +0x491:  call   0860f337 <_Z35GetInstanceDeathTowerValueStatisticv>  ; GetInstanceDeathTowerValueStatistic()
0846769e +0x496:  mov    %edi,0x10(%esp)
084676a2 +0x49a:  mov    %esi,0xc(%esp)
084676a6 +0x49e:  mov    %ebx,0x8(%esp)
084676aa +0x4a2:  movl   $0x1,0x4(%esp)
084676b2 +0x4aa:  mov    %eax,(%esp)
084676b5 +0x4ad:  call   0860f342 <_ZN25CDeathTowerValueStatistic28SendDeathTowerValueStatisticE32DEATHTOWER_VALUE_STATISTIC_FIELDccj>  ; CDeathTowerValueStatistic::SendDeathTowerValueStatistic(DEATHTOWER_VALUE_STATISTIC_FIELD, char, char, unsigned int)
084676ba +0x4b2:  mov    -0x30(%ebp),%eax
084676bd +0x4b5:  mov    %eax,(%esp)
084676c0 +0x4b8:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
084676c5 +0x4bd:  movsbl %al,%esi
084676c8 +0x4c0:  movsbl -0x1d(%ebp),%ebx
084676cc +0x4c4:  call   0860f337 <_Z35GetInstanceDeathTowerValueStatisticv>  ; GetInstanceDeathTowerValueStatistic()
084676d1 +0x4c9:  movl   $0x1,0x10(%esp)
084676d9 +0x4d1:  mov    %esi,0xc(%esp)
084676dd +0x4d5:  mov    %ebx,0x8(%esp)
084676e1 +0x4d9:  movl   $0x0,0x4(%esp)
084676e9 +0x4e1:  mov    %eax,(%esp)
084676ec +0x4e4:  call   0860f342 <_ZN25CDeathTowerValueStatistic28SendDeathTowerValueStatisticE32DEATHTOWER_VALUE_STATISTIC_FIELDccj>  ; CDeathTowerValueStatistic::SendDeathTowerValueStatistic(DEATHTOWER_VALUE_STATISTIC_FIELD, char, char, unsigned int)
084676f1 +0x4e9:  cmpl   $0x0,-0x28(%ebp)
084676f5 +0x4ed:  je     0846786e <+0x666>
084676fb +0x4f3:  mov    -0x5c(%ebp),%edi
084676fe +0x4f6:  mov    0x8(%ebp),%eax
08467701 +0x4f9:  add    $0x110,%eax
08467706 +0x4fe:  mov    %eax,(%esp)
08467709 +0x501:  call   08469b34 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x217>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x217
0846770e +0x506:  mov    %eax,%esi
08467710 +0x508:  mov    -0x30(%ebp),%eax
08467713 +0x50b:  mov    %eax,(%esp)
08467716 +0x50e:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0846771b +0x513:  mov    %eax,%ebx
0846771d +0x515:  mov    0x8(%ebp),%eax
08467720 +0x518:  add    $0xc,%eax
08467723 +0x51b:  mov    %eax,(%esp)
08467726 +0x51e:  call   082345f0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9c9a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9c9a
0846772b +0x523:  mov    %eax,(%esp)
0846772e +0x526:  call   080fdcf0 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1c
08467733 +0x52b:  mov    %eax,(%esp)
08467736 +0x52e:  call   08469d69 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x44c>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x44c
0846773b +0x533:  mov    -0x40(%ebp),%edx
0846773e +0x536:  mov    %edx,0x14(%esp)
08467742 +0x53a:  mov    %edi,0x10(%esp)
08467746 +0x53e:  mov    %esi,0xc(%esp)
0846774a +0x542:  mov    -0x3c(%ebp),%edx
0846774d +0x545:  mov    %edx,0x8(%esp)
08467751 +0x549:  mov    %ebx,0x4(%esp)
08467755 +0x54d:  mov    %eax,(%esp)
08467758 +0x550:  call   0842a35e <_ZN29DB_UpdateDeathTowerBestRecord11makeRequestEjjjPK30stDeathTowerRecordMemberInfo_tjj>  ; DB_UpdateDeathTowerBestRecord::makeRequest(unsigned int, unsigned int, unsigned int, stDeathTowerRecordMemberInfo_t const*, unsigned int, unsigned int)
0846775d +0x555:  cmpl   $0x0,-0x24(%ebp)
08467761 +0x559:  jle    0846780c <+0x604>
08467767 +0x55f:  mov    -0x24(%ebp),%edi
0846776a +0x562:  mov    0x8(%ebp),%eax
0846776d +0x565:  add    $0xc,%eax
08467770 +0x568:  mov    %eax,(%esp)
08467773 +0x56b:  call   082345f0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9c9a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9c9a
08467778 +0x570:  mov    %eax,(%esp)
0846777b +0x573:  call   080fdcf0 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1c
08467780 +0x578:  mov    %eax,(%esp)
08467783 +0x57b:  call   08469d69 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x44c>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x44c
08467788 +0x580:  mov    %eax,%esi
0846778a +0x582:  mov    -0x30(%ebp),%eax
0846778d +0x585:  mov    %eax,(%esp)
08467790 +0x588:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08467795 +0x58d:  mov    %eax,%ebx
08467797 +0x58f:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%eax
0846779c +0x594:  movl   $0x0,0x4(%esp)
084677a4 +0x59c:  mov    %eax,(%esp)
084677a7 +0x59f:  call   0811208a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x159c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x159c
084677ac +0x5a4:  mov    %edi,0x10(%esp)
084677b0 +0x5a8:  mov    -0x3c(%ebp),%edx
084677b3 +0x5ab:  mov    %edx,0xc(%esp)
084677b7 +0x5af:  mov    %esi,0x8(%esp)
084677bb +0x5b3:  mov    %ebx,0x4(%esp)
084677bf +0x5b7:  mov    %eax,(%esp)
084677c2 +0x5ba:  call   08471240 <_ZN19CMonitorServerProxy15updateTowerRankEjjjj>  ; CMonitorServerProxy::updateTowerRank(unsigned int, unsigned int, unsigned int, unsigned int)
084677c7 +0x5bf:  mov    -0x24(%ebp),%esi
084677ca +0x5c2:  mov    -0x30(%ebp),%eax
084677cd +0x5c5:  mov    %eax,(%esp)
084677d0 +0x5c8:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084677d5 +0x5cd:  mov    %eax,%ebx
084677d7 +0x5cf:  mov    0x8(%ebp),%eax
084677da +0x5d2:  add    $0xc,%eax
084677dd +0x5d5:  mov    %eax,(%esp)
084677e0 +0x5d8:  call   082345f0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9c9a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9c9a
084677e5 +0x5dd:  mov    %eax,(%esp)
084677e8 +0x5e0:  call   080fdcf0 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1c
084677ed +0x5e5:  mov    %eax,(%esp)
084677f0 +0x5e8:  call   08469d69 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x44c>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x44c
084677f5 +0x5ed:  mov    %esi,0xc(%esp)
084677f9 +0x5f1:  mov    %ebx,0x8(%esp)
084677fd +0x5f5:  mov    %eax,0x4(%esp)
08467801 +0x5f9:  mov    -0x38(%ebp),%eax
08467804 +0x5fc:  mov    %eax,(%esp)
08467807 +0x5ff:  call   084684ce <_ZN8WongWork18CDeathTowerRanking13updateRankingEjjj>  ; WongWork::CDeathTowerRanking::updateRanking(unsigned int, unsigned int, unsigned int)
0846780c +0x604:  mov    -0x5c(%ebp),%edi
0846780f +0x607:  mov    0x8(%ebp),%eax
08467812 +0x60a:  add    $0x110,%eax
08467817 +0x60f:  mov    %eax,(%esp)
0846781a +0x612:  call   08469b34 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x217>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x217
0846781f +0x617:  mov    %eax,%esi
08467821 +0x619:  mov    -0x30(%ebp),%eax
08467824 +0x61c:  mov    %eax,(%esp)
08467827 +0x61f:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0846782c +0x624:  mov    %eax,%ebx
0846782e +0x626:  mov    0x8(%ebp),%eax
08467831 +0x629:  add    $0xc,%eax
08467834 +0x62c:  mov    %eax,(%esp)
08467837 +0x62f:  call   082345f0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9c9a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9c9a
0846783c +0x634:  mov    %eax,(%esp)
0846783f +0x637:  call   080fdcf0 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1c
08467844 +0x63c:  mov    %eax,(%esp)
08467847 +0x63f:  call   08469d69 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x44c>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x44c
0846784c +0x644:  mov    -0x40(%ebp),%edx
0846784f +0x647:  mov    %edx,0x14(%esp)
08467853 +0x64b:  mov    %edi,0x10(%esp)
08467857 +0x64f:  mov    %esi,0xc(%esp)
0846785b +0x653:  mov    %ebx,0x8(%esp)
0846785f +0x657:  mov    %eax,0x4(%esp)
08467863 +0x65b:  mov    -0x38(%ebp),%eax
08467866 +0x65e:  mov    %eax,(%esp)
08467869 +0x661:  call   08468914 <_ZN8WongWork18CDeathTowerRanking16registBestRecordEjjPK30stDeathTowerRecordMemberInfo_tjj>  ; WongWork::CDeathTowerRanking::registBestRecord(unsigned int, unsigned int, stDeathTowerRecordMemberInfo_t const*, unsigned int, unsigned int)
0846786e +0x666:  lea    -0x74(%ebp),%eax
08467871 +0x669:  mov    %eax,(%esp)
08467874 +0x66c:  call   08469a8c <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x16f>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x16f
08467879 +0x671:  mov    -0x24(%ebp),%eax
0846787c +0x674:  mov    %eax,-0xb0(%ebp)
08467882 +0x67a:  mov    0x8(%ebp),%eax
08467885 +0x67d:  add    $0xc,%eax
08467888 +0x680:  mov    %eax,(%esp)
0846788b +0x683:  call   082345f0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9c9a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9c9a
08467890 +0x688:  mov    %eax,(%esp)
08467893 +0x68b:  call   080fdcf0 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1c
08467898 +0x690:  mov    %eax,%edi
0846789a +0x692:  cmpl   $0x1,-0x28(%ebp)
0846789e +0x696:  sete   %al
084678a1 +0x699:  movzbl %al,%esi
084678a4 +0x69c:  mov    -0x5c(%ebp),%ebx
084678a7 +0x69f:  mov    -0x30(%ebp),%eax
084678aa +0x6a2:  mov    %eax,(%esp)
084678ad +0x6a5:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084678b2 +0x6aa:  mov    -0xb0(%ebp),%edx
084678b8 +0x6b0:  mov    %edx,0x1c(%esp)
084678bc +0x6b4:  mov    %edi,0x18(%esp)
084678c0 +0x6b8:  mov    %esi,0x14(%esp)
084678c4 +0x6bc:  mov    -0x40(%ebp),%edx
084678c7 +0x6bf:  mov    %edx,0x10(%esp)
084678cb +0x6c3:  mov    %ebx,0xc(%esp)
084678cf +0x6c7:  mov    %eax,0x8(%esp)
084678d3 +0x6cb:  mov    -0x3c(%ebp),%eax
084678d6 +0x6ce:  mov    %eax,0x4(%esp)
084678da +0x6d2:  lea    -0x74(%ebp),%eax
084678dd +0x6d5:  mov    %eax,(%esp)
084678e0 +0x6d8:  call   084601da <_ZN8WongWork11CDeathTower14CPacketHandler19makeDisplayRangkingEjjjjbjj>  ; WongWork::CDeathTower::CPacketHandler::makeDisplayRangking(unsigned int, unsigned int, unsigned int, unsigned int, bool, unsigned int, unsigned int)
084678e5 +0x6dd:  lea    -0x74(%ebp),%eax
084678e8 +0x6e0:  mov    %eax,0x4(%esp)
084678ec +0x6e4:  mov    -0x30(%ebp),%eax
084678ef +0x6e7:  mov    %eax,(%esp)
084678f2 +0x6ea:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084678f7 +0x6ef:  movl   $0x0,-0x1c(%ebp)
084678fe +0x6f6:  movl   $0x0,-0x78(%ebp)
08467905 +0x6fd:  mov    0x8(%ebp),%eax
08467908 +0x700:  add    $0xc,%eax
0846790b +0x703:  mov    %eax,(%esp)
0846790e +0x706:  call   082345f0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9c9a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9c9a
08467913 +0x70b:  mov    %eax,(%esp)
08467916 +0x70e:  call   0822b4ce <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb78>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb78
0846791b +0x713:  test   %al,%al
0846791d +0x715:  je     08467936 <+0x72e>
0846791f +0x717:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08467924 +0x71c:  mov    -0x5c(%ebp),%edx
08467927 +0x71f:  add    $0x152c,%edx
0846792d +0x725:  mov    0xc(%eax,%edx,4),%eax
08467931 +0x729:  mov    %eax,-0x1c(%ebp)
08467934 +0x72c:  jmp    0846794b <+0x743>
08467936 +0x72e:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0846793b +0x733:  mov    -0x5c(%ebp),%edx
0846793e +0x736:  add    $0x16bc,%edx
08467944 +0x73c:  mov    0xc(%eax,%edx,4),%eax
08467948 +0x740:  mov    %eax,-0x1c(%ebp)
0846794b +0x743:  mov    -0x2c(%ebp),%eax
0846794e +0x746:  mov    -0x1c(%ebp),%edx
08467951 +0x749:  lea    (%edx,%eax,1),%eax
08467954 +0x74c:  mov    %eax,-0x50(%ebp)
08467957 +0x74f:  mov    0x8(%ebp),%eax
0846795a +0x752:  add    $0xc,%eax
0846795d +0x755:  mov    %eax,(%esp)
08467960 +0x758:  call   082345f0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9c9a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9c9a
08467965 +0x75d:  mov    %eax,(%esp)
08467968 +0x760:  call   081455ca <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x4d>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x4d
0846796d +0x765:  mov    %eax,-0x4c(%ebp)
08467970 +0x768:  lea    -0x50(%ebp),%eax
08467973 +0x76b:  mov    %eax,0x4(%esp)
08467977 +0x76f:  lea    -0x4c(%ebp),%eax
0846797a +0x772:  mov    %eax,(%esp)
0846797d +0x775:  call   08236091 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb73b>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb73b
08467982 +0x77a:  mov    (%eax),%eax
08467984 +0x77c:  mov    %eax,-0x78(%ebp)
08467987 +0x77f:  movl   $0xa,-0x48(%ebp)
0846798e +0x786:  lea    -0x78(%ebp),%eax
08467991 +0x789:  mov    %eax,0x4(%esp)
08467995 +0x78d:  lea    -0x48(%ebp),%eax
08467998 +0x790:  mov    %eax,(%esp)
0846799b +0x793:  call   080df90e <_GLOBAL__I__ZN10CaptchaGenC2Ev+0x12a>  ; global constructors keyed to CaptchaGen::CaptchaGen()+0x12a
084679a0 +0x798:  mov    (%eax),%eax
084679a2 +0x79a:  mov    %eax,-0x78(%ebp)
084679a5 +0x79d:  mov    0x8(%ebp),%eax
084679a8 +0x7a0:  mov    (%eax),%esi
084679aa +0x7a2:  movl   $0xa,-0x44(%ebp)
084679b1 +0x7a9:  lea    -0x5c(%ebp),%eax
084679b4 +0x7ac:  mov    %eax,0x4(%esp)
084679b8 +0x7b0:  lea    -0x44(%ebp),%eax
084679bb +0x7b3:  mov    %eax,(%esp)
084679be +0x7b6:  call   08236091 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb73b>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb73b
084679c3 +0x7bb:  mov    (%eax),%ebx
084679c5 +0x7bd:  mov    -0x30(%ebp),%eax
084679c8 +0x7c0:  mov    %eax,(%esp)
084679cb +0x7c3:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
084679d0 +0x7c8:  mov    %eax,%edx
084679d2 +0x7ca:  mov    0x8(%ebp),%eax
084679d5 +0x7cd:  lea    0xc(%eax),%edi
084679d8 +0x7d0:  mov    -0x78(%ebp),%eax
084679db +0x7d3:  mov    0x8(%ebp),%ecx
084679de +0x7d6:  add    $0x110,%ecx
084679e4 +0x7dc:  mov    %esi,0x18(%esp)
084679e8 +0x7e0:  mov    %ebx,0x14(%esp)
084679ec +0x7e4:  mov    %edx,0x10(%esp)
084679f0 +0x7e8:  mov    %edi,0xc(%esp)
084679f4 +0x7ec:  mov    %eax,0x8(%esp)
084679f8 +0x7f0:  mov    -0x34(%ebp),%eax
084679fb +0x7f3:  mov    %eax,0x4(%esp)
084679ff +0x7f7:  mov    %ecx,(%esp)
08467a02 +0x7fa:  call   08461fc0 <_ZN8WongWork11CDeathTower9CPlayData18generateRewardItemEiiRKNS0_11CDungeonMgrEjjP6CParty>  ; WongWork::CDeathTower::CPlayData::generateRewardItem(int, int, WongWork::CDeathTower::CDungeonMgr const&, unsigned int, unsigned int, CParty*)
08467a07 +0x7ff:  movl   $0x0,-0x7c(%ebp)
08467a0e +0x806:  mov    -0x30(%ebp),%eax
08467a11 +0x809:  mov    %eax,(%esp)
08467a14 +0x80c:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
08467a19 +0x811:  mov    %eax,%ebx
08467a1b +0x813:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08467a20 +0x818:  lea    -0x7c(%ebp),%edx
08467a23 +0x81b:  mov    %edx,0x8(%esp)
08467a27 +0x81f:  mov    %ebx,0x4(%esp)
08467a2b +0x823:  mov    %eax,(%esp)
08467a2e +0x826:  call   08360a6e <_ZNK12CDataManager14get_mob_rewardEiRj>  ; CDataManager::get_mob_reward(int, unsigned int&) const
08467a33 +0x82b:  mov    0x8(%ebp),%eax
08467a36 +0x82e:  mov    (%eax),%eax
08467a38 +0x830:  mov    %eax,0x4(%esp)
08467a3c +0x834:  lea    -0x84(%ebp),%eax
08467a42 +0x83a:  mov    %eax,(%esp)
08467a45 +0x83d:  call   08469976 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x59>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x59
08467a4a +0x842:  lea    -0xa0(%ebp),%eax
08467a50 +0x848:  mov    %eax,(%esp)
08467a53 +0x84b:  call   084699c6 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0xa9>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0xa9
08467a58 +0x850:  mov    -0x7c(%ebp),%eax
08467a5b +0x853:  mov    %eax,-0xa0(%ebp)
08467a61 +0x859:  mov    0x8(%ebp),%eax
08467a64 +0x85c:  mov    (%eax),%ecx
08467a66 +0x85e:  lea    -0xa0(%ebp),%eax
08467a6c +0x864:  mov    %eax,0x10(%esp)
08467a70 +0x868:  mov    -0x84(%ebp),%eax
08467a76 +0x86e:  mov    -0x80(%ebp),%edx
08467a79 +0x871:  mov    %eax,0x8(%esp)
08467a7d +0x875:  mov    %edx,0xc(%esp)
08467a81 +0x879:  movl   $0x0,0x4(%esp)
08467a89 +0x881:  mov    %ecx,(%esp)
08467a8c +0x884:  call   0859b8fa <_ZN6CParty17set_random_rewardEN10QuickParty14RandomBuffTypeENS0_16RewardData_ParamERNS0_17RewardData_ResultE>  ; CParty::set_random_reward(QuickParty::RandomBuffType, QuickParty::RewardData_Param, QuickParty::RewardData_Result&)
08467a91 +0x889:  mov    -0xa0(%ebp),%eax
08467a97 +0x88f:  mov    %eax,-0x7c(%ebp)
08467a9a +0x892:  mov    0x8(%ebp),%eax
08467a9d +0x895:  lea    0xc(%eax),%esi
08467aa0 +0x898:  mov    0x8(%ebp),%eax
08467aa3 +0x89b:  mov    (%eax),%ecx
08467aa5 +0x89d:  mov    -0x7c(%ebp),%edx
08467aa8 +0x8a0:  mov    -0x5c(%ebp),%eax
08467aab +0x8a3:  mov    0x8(%ebp),%ebx
08467aae +0x8a6:  add    $0x110,%ebx
08467ab4 +0x8ac:  mov    %esi,0x14(%esp)
08467ab8 +0x8b0:  mov    %ecx,0x10(%esp)
08467abc +0x8b4:  mov    %edx,0xc(%esp)
08467ac0 +0x8b8:  mov    %eax,0x8(%esp)
08467ac4 +0x8bc:  mov    -0x34(%ebp),%eax
08467ac7 +0x8bf:  mov    %eax,0x4(%esp)
08467acb +0x8c3:  mov    %ebx,(%esp)
08467ace +0x8c6:  call   08462538 <_ZN8WongWork11CDeathTower9CPlayData17generateRewardExpEiijP6CPartyRNS0_11CDungeonMgrE>  ; WongWork::CDeathTower::CPlayData::generateRewardExp(int, int, unsigned int, CParty*, WongWork::CDeathTower::CDungeonMgr&)
08467ad3 +0x8cb:  jmp    08467af0 <+0x8e8>
08467ad5 +0x8cd:  mov    %edx,%ebx
08467ad7 +0x8cf:  mov    %eax,%esi
08467ad9 +0x8d1:  lea    -0x74(%ebp),%eax
08467adc +0x8d4:  mov    %eax,(%esp)
08467adf +0x8d7:  call   08469aa0 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x183>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x183
08467ae4 +0x8dc:  mov    %esi,%eax
08467ae6 +0x8de:  mov    %ebx,%edx
08467ae8 +0x8e0:  mov    %eax,(%esp)
08467aeb +0x8e3:  call   08ae3750 <_Unwind_Resume>
08467af0 +0x8e8:  lea    -0x74(%ebp),%eax
08467af3 +0x8eb:  mov    %eax,(%esp)
08467af6 +0x8ee:  call   08469aa0 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x183>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x183
08467afb +0x8f3:  jmp    08467afe <+0x8f6>
08467afd +0x8f5:  nop
08467afe +0x8f6:  addl   $0x1,-0x34(%ebp)
08467b02 +0x8fa:  cmpl   $0x3,-0x34(%ebp)
08467b06 +0x8fe:  setle  %al
08467b09 +0x901:  test   %al,%al
08467b0b +0x903:  jne    08467452 <+0x24a>
08467b11 +0x909:  jmp    08467b14 <+0x90c>
08467b13 +0x90b:  nop
08467b14 +0x90c:  add    $0xcc,%esp
08467b1a +0x912:  pop    %ebx
08467b1b +0x913:  pop    %esi
08467b1c +0x914:  pop    %edi
08467b1d +0x915:  pop    %ebp
08467b1e +0x916:  ret
08467b1f +0x917:  nop
```

## 反编译 C

```c
// WongWork::CDeathTower::_beginTowerClearProcess @ 0x8467208

/* WongWork::CDeathTower::_beginTowerClearProcess(bool) */

void __thiscall WongWork::CDeathTower::_beginTowerClearProcess(CDeathTower *this,bool param_1)

{
  undefined4 uVar1;
  CParty *pCVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  TimerQueue *pTVar7;
  uint uVar8;
  CDungeon *pCVar9;
  uint uVar10;
  stDeathTowerRecordMemberInfo_t *psVar11;
  CDeathTowerPlayDataStatistic *this_00;
  CDeathTowerValueStatistic *pCVar12;
  CMonitorServerProxy *this_01;
  uint uVar13;
  uint *puVar14;
  CDataManager *this_02;
  bool bVar15;
  uint local_a4 [7];
  undefined4 local_88;
  undefined4 local_84;
  uint local_80;
  uint local_7c;
  CPacketHandler local_78 [12];
  PacketGuard local_6c [12];
  uint local_60;
  int local_5c [3];
  uint local_50 [5];
  CDeathTowerRanking *local_3c;
  int local_38;
  CUserCharacInfo *local_34;
  uint local_30;
  int local_2c;
  uint local_28;
  char local_21;
  int local_20;
  
  iVar5 = getTowerState(this);
  if (iVar5 < 3) {
    local_50[3] = 0;
    local_50[4] = CPlayData::getStartMemberCnt((CPlayData *)(this + 0x110));
    local_3c = (CDeathTowerRanking *)CDeathTowerRanking::getRankTable(local_50[4]);
    _onClear(this,param_1);
    if (*(int *)(*(int *)this + 0xcd8) == 1) {
      setTowerState(this,5);
      CParty::SetEPLPState(*(CParty **)this,'\x02');
      uVar6 = _genTimerKey(this,0x4d);
      uVar1 = *(undefined4 *)(this + 4);
      pTVar7 = (TimerQueue *)G_TimerQueue();
      TimerQueue::InsertTimer(pTVar7,6,uVar1,0x4d,0x3c,uVar6,0x4d);
      PacketGuard::PacketGuard(local_6c);
                    /* try { // try from 08467321 to 0846734c has its CatchHandler @ 0846734f */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_6c,0,0xfe);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_6c,true);
      CParty::send_to_party(*(CParty **)this,local_6c);
      PacketGuard::~PacketGuard(local_6c);
    }
    else {
      setTowerState(this,3);
      uVar6 = _genTimerKey(this,0x4b);
      uVar1 = *(undefined4 *)(this + 4);
      pTVar7 = (TimerQueue *)G_TimerQueue();
      TimerQueue::InsertTimer(pTVar7,6,uVar1,0x4b,1,uVar6,0x4b);
      local_60 = CStage::getCurrentStage((CStage *)(this + 0x14));
      if (param_1) {
        local_50[3] = CPlayData::getPlayTime((CPlayData *)(this + 0x110));
      }
      else {
        local_50[3] = CPlayData::getLastPlayTime((CPlayData *)(this + 0x110));
        local_5c[0] = local_60 - 1;
        local_5c[1] = 1;
        puVar14 = (uint *)std::max<int>(local_5c + 1,local_5c);
        local_60 = *puVar14;
      }
      for (local_38 = 0; local_38 < 4; local_38 = local_38 + 1) {
        local_34 = (CUserCharacInfo *)0x0;
        local_34 = (CUserCharacInfo *)CParty::get_user(*(CParty **)this,local_38);
        if ((local_34 == (CUserCharacInfo *)0x0) ||
           (cVar4 = CParty::checkValidUser(*(CParty **)this,local_38), cVar4 != '\x01')) {
          bVar15 = true;
        }
        else {
          bVar15 = false;
        }
        if (!bVar15) {
          CUserCharacInfo::set_charac_party_bonus_exp(local_34,0);
          CUserCharacInfo::set_charac_member_bonus_exp(local_34,0);
          CUserCharacInfo::set_charac_fatigue_buf_bonus_exp(local_34,0);
          CUserCharacInfo::set_charac_seria_buf_bonus_exp(local_34,0);
          uVar3 = local_60;
          local_30 = 0;
          uVar8 = CUserCharacInfo::getCurCharacNo(local_34);
          pCVar9 = (CDungeon *)CDungeonMgr::getDungeon((CDungeonMgr *)(this + 0xc));
          uVar10 = CDungeon::get_index(pCVar9);
          local_2c = _checkRenewMyRecord(this,uVar10,local_50[4],uVar8,uVar3,local_50[3]);
          uVar3 = local_60;
          if (param_1) {
            local_30 = (uint)(local_2c == 1);
            pCVar9 = (CDungeon *)CDungeonMgr::getDungeon((CDungeonMgr *)(this + 0xc));
            uVar8 = CDungeon::get_index(pCVar9);
            cVar4 = _checkRenewTopRecord(this,uVar8,local_50[4],uVar3,local_50[3]);
            if (cVar4 != '\0') {
              local_30 = local_30 + 2;
            }
          }
          uVar3 = local_60;
          pCVar9 = (CDungeon *)CDungeonMgr::getDungeon((CDungeonMgr *)(this + 0xc));
          uVar8 = CDungeon::get_index(pCVar9);
          uVar8 = CDeathTowerRanking::makeDungeonIdx2TowerIdx(uVar8);
          local_28 = CDeathTowerRanking::getVirtualRank(local_3c,uVar8,uVar3,local_50[3]);
          pCVar9 = (CDungeon *)CDungeonMgr::getDungeon((CDungeonMgr *)(this + 0xc));
          iVar5 = CDungeon::get_index(pCVar9);
          local_21 = iVar5 != 11000;
          uVar8 = CPlayData::getStartMemberCnt((CPlayData *)(this + 0x110));
          uVar3 = local_60;
          psVar11 = (stDeathTowerRecordMemberInfo_t *)
                    CPlayData::getStartMemberInfo((CPlayData *)(this + 0x110));
          cVar4 = local_21;
          this_00 = (CDeathTowerPlayDataStatistic *)GetInstanceDeathTowerPlaydataStatistic();
          CDeathTowerPlayDataStatistic::SendDeathTowerPlayInfo
                    (this_00,local_38,cVar4,psVar11,uVar3,uVar8);
          uVar3 = local_60;
          cVar4 = CUserCharacInfo::get_charac_level(local_34);
          iVar5 = (int)local_21;
          pCVar12 = (CDeathTowerValueStatistic *)GetInstanceDeathTowerValueStatistic();
          CDeathTowerValueStatistic::SendDeathTowerValueStatistic(pCVar12,1,iVar5,(int)cVar4,uVar3);
          cVar4 = CUserCharacInfo::get_charac_level(local_34);
          iVar5 = (int)local_21;
          pCVar12 = (CDeathTowerValueStatistic *)GetInstanceDeathTowerValueStatistic();
          CDeathTowerValueStatistic::SendDeathTowerValueStatistic(pCVar12,0,iVar5,(int)cVar4,1);
          uVar3 = local_60;
          if (local_2c != 0) {
            psVar11 = (stDeathTowerRecordMemberInfo_t *)
                      CPlayData::getStartMemberInfo((CPlayData *)(this + 0x110));
            uVar8 = CUserCharacInfo::getCurCharacNo(local_34);
            pCVar9 = (CDungeon *)CDungeonMgr::getDungeon((CDungeonMgr *)(this + 0xc));
            uVar10 = CDungeon::get_index(pCVar9);
            uVar10 = CDeathTowerRanking::makeDungeonIdx2TowerIdx(uVar10);
            DB_UpdateDeathTowerBestRecord::makeRequest
                      (uVar10,uVar8,local_50[4],psVar11,uVar3,local_50[3]);
            uVar3 = local_28;
            if (0 < (int)local_28) {
              pCVar9 = (CDungeon *)CDungeonMgr::getDungeon((CDungeonMgr *)(this + 0xc));
              uVar8 = CDungeon::get_index(pCVar9);
              uVar8 = CDeathTowerRanking::makeDungeonIdx2TowerIdx(uVar8);
              uVar10 = CUserCharacInfo::getCurCharacNo(local_34);
              this_01 = (CMonitorServerProxy *)
                        CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                                  (GlobalData::s_monitor_proxy_mgr,0);
              CMonitorServerProxy::updateTowerRank(this_01,uVar10,uVar8,local_50[4],uVar3);
              uVar3 = local_28;
              uVar8 = CUserCharacInfo::getCurCharacNo(local_34);
              pCVar9 = (CDungeon *)CDungeonMgr::getDungeon((CDungeonMgr *)(this + 0xc));
              uVar10 = CDungeon::get_index(pCVar9);
              uVar10 = CDeathTowerRanking::makeDungeonIdx2TowerIdx(uVar10);
              CDeathTowerRanking::updateRanking(local_3c,uVar10,uVar8,uVar3);
            }
            uVar3 = local_60;
            psVar11 = (stDeathTowerRecordMemberInfo_t *)
                      CPlayData::getStartMemberInfo((CPlayData *)(this + 0x110));
            uVar8 = CUserCharacInfo::getCurCharacNo(local_34);
            pCVar9 = (CDungeon *)CDungeonMgr::getDungeon((CDungeonMgr *)(this + 0xc));
            uVar10 = CDungeon::get_index(pCVar9);
            uVar10 = CDeathTowerRanking::makeDungeonIdx2TowerIdx(uVar10);
            CDeathTowerRanking::registBestRecord(local_3c,uVar10,uVar8,psVar11,uVar3,local_50[3]);
          }
          CPacketHandler::CPacketHandler(local_78);
          uVar8 = local_28;
          pCVar9 = (CDungeon *)CDungeonMgr::getDungeon((CDungeonMgr *)(this + 0xc));
          uVar10 = CDungeon::get_index(pCVar9);
          uVar3 = local_60;
          bVar15 = local_2c == 1;
          uVar13 = CUserCharacInfo::getCurCharacNo(local_34);
                    /* try { // try from 084678e0 to 08467ad2 has its CatchHandler @ 08467ad5 */
          CPacketHandler::makeDisplayRangking
                    (local_78,local_50[4],uVar13,uVar3,local_50[3],bVar15,uVar10,uVar8);
          CUser::Send((CUser *)local_34,(PacketGuard *)local_78);
          local_20 = 0;
          local_7c = 0;
          pCVar9 = (CDungeon *)CDungeonMgr::getDungeon((CDungeonMgr *)(this + 0xc));
          cVar4 = CDungeon::limitOfStackableItemInTower(pCVar9);
          if (cVar4 == '\0') {
            iVar5 = G_CDataManager();
            local_20 = *(int *)(iVar5 + 0xc + (local_60 + 0x16bc) * 4);
          }
          else {
            iVar5 = G_CDataManager();
            local_20 = *(int *)(iVar5 + 0xc + (local_60 + 0x152c) * 4);
          }
          local_5c[2] = local_20 + local_30;
          pCVar9 = (CDungeon *)CDungeonMgr::getDungeon((CDungeonMgr *)(this + 0xc));
          local_50[0] = CDungeon::getTowerMaxClearRewardItemNum(pCVar9);
          puVar14 = std::min<unsigned_int>(local_50,(uint *)(local_5c + 2));
          local_7c = *puVar14;
          local_50[1] = 10;
          puVar14 = (uint *)std::min<int>((int *)(local_50 + 1),(int *)&local_7c);
          local_7c = *puVar14;
          pCVar2 = *(CParty **)this;
          local_50[2] = 10;
          puVar14 = std::min<unsigned_int>(local_50 + 2,&local_60);
          uVar3 = *puVar14;
          uVar8 = CUserCharacInfo::get_charac_level(local_34);
          CPlayData::generateRewardItem
                    ((CPlayData *)(this + 0x110),local_38,local_7c,(CDungeonMgr *)(this + 0xc),uVar8
                     ,uVar3,pCVar2);
          local_80 = 0;
          iVar5 = CUserCharacInfo::get_charac_level(local_34);
          this_02 = (CDataManager *)G_CDataManager();
          CDataManager::get_mob_reward(this_02,iVar5,&local_80);
          QuickParty::RewardData_Param::RewardData_Param
                    ((RewardData_Param *)&local_88,*(CParty **)this);
          QuickParty::RewardData_Result::RewardData_Result((RewardData_Result *)local_a4);
          local_a4[0] = local_80;
          CParty::set_random_reward(*(undefined4 *)this,0,local_88,local_84,local_a4);
          local_80 = local_a4[0];
          CPlayData::generateRewardExp
                    ((CPlayData *)(this + 0x110),local_38,local_60,local_a4[0],*(CParty **)this,
                     (CDungeonMgr *)(this + 0xc));
          CPacketHandler::~CPacketHandler(local_78);
        }
      }
    }
  }
  return;
}
```
