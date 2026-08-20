# checkStartGameCondition

`_ZN8WongWork10CBossTower23checkStartGameConditionERhb`

`WongWork::CBossTower::checkStartGameCondition(unsigned char&, bool)`

| 类 | 地址 |
|---|---|
| `WongWork::CBossTower` | `0x08142fa6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08142fa6  _ZN8WongWork10CBossTower23checkStartGameConditionERhb
#           WongWork::CBossTower::checkStartGameCondition(unsigned char&, bool)
# range [0x08142fa6, 0x081434f3]
08142fa6 +0x000:  push   %ebp
08142fa7 +0x001:  mov    %esp,%ebp
08142fa9 +0x003:  push   %esi
08142faa +0x004:  push   %ebx
08142fab +0x005:  sub    $0x190,%esp
08142fb1 +0x00b:  mov    0x10(%ebp),%eax
08142fb4 +0x00e:  mov    %al,-0x16c(%ebp)
08142fba +0x014:  lea    -0x168(%ebp),%eax
08142fc0 +0x01a:  mov    %eax,%ebx
08142fc2 +0x01c:  mov    $0x3,%esi
08142fc7 +0x021:  jmp    08142fd7 <+0x31>
08142fc9 +0x023:  mov    %ebx,(%esp)
08142fcc +0x026:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08142fd1 +0x02b:  add    $0x3d,%ebx
08142fd4 +0x02e:  sub    $0x1,%esi
08142fd7 +0x031:  cmp    $0xffffffff,%esi
08142fda +0x034:  setne  %al
08142fdd +0x037:  test   %al,%al
08142fdf +0x039:  jne    08142fc9 <+0x23>
08142fe1 +0x03b:  movl   $0xf4,0x8(%esp)
08142fe9 +0x043:  movl   $0x0,0x4(%esp)
08142ff1 +0x04b:  lea    -0x168(%ebp),%eax
08142ff7 +0x051:  mov    %eax,(%esp)
08142ffa +0x054:  call   0807dcc0 <_init+0x5b8>
08142fff +0x059:  movl   $0x10,0x8(%esp)
08143007 +0x061:  movl   $0x0,0x4(%esp)
0814300f +0x069:  lea    -0x44(%ebp),%eax
08143012 +0x06c:  mov    %eax,(%esp)
08143015 +0x06f:  call   0807dcc0 <_init+0x5b8>
0814301a +0x074:  mov    0x8(%ebp),%eax
0814301d +0x077:  mov    0x9f0(%eax),%eax
08143023 +0x07d:  test   %eax,%eax
08143025 +0x07f:  je     0814303f <+0x99>
08143027 +0x081:  mov    0x8(%ebp),%eax
0814302a +0x084:  mov    0x9f0(%eax),%eax
08143030 +0x08a:  mov    %eax,(%esp)
08143033 +0x08d:  call   0834d2d4 <_ZNK8CDungeon21IsOpenScheduleDungeonEv>  ; CDungeon::IsOpenScheduleDungeon() const
08143038 +0x092:  xor    $0x1,%eax
0814303b +0x095:  test   %al,%al
0814303d +0x097:  je     08143046 <+0xa0>
0814303f +0x099:  mov    $0x1,%eax
08143044 +0x09e:  jmp    0814304b <+0xa5>
08143046 +0x0a0:  mov    $0x0,%eax
0814304b +0x0a5:  test   %al,%al
0814304d +0x0a7:  je     08143138 <+0x192>
08143053 +0x0ad:  movl   $0x5,0xc(%esp)
0814305b +0x0b5:  movl   $0xdb,0x8(%esp)
08143063 +0x0bd:  movl   $&_ZZN8WongWork10CBossTower23checkStartGameConditionERhbE19__PRETTY_FUNCTION__,0x4(%esp)
0814306b +0x0c5:  lea    -0x34(%ebp),%eax
0814306e +0x0c8:  mov    %eax,(%esp)
08143071 +0x0cb:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08143076 +0x0d0:  movl   $"boss Tower dungeon is not open",0x4(%esp)
0814307e +0x0d8:  lea    -0x34(%ebp),%eax
08143081 +0x0db:  mov    %eax,(%esp)
08143084 +0x0de:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08143089 +0x0e3:  lea    -0x50(%ebp),%eax
0814308c +0x0e6:  mov    %eax,(%esp)
0814308f +0x0e9:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08143094 +0x0ee:  lea    -0x50(%ebp),%eax
08143097 +0x0f1:  mov    %eax,(%esp)
0814309a +0x0f4:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
0814309f +0x0f9:  movl   $0x10,0x8(%esp)
081430a7 +0x101:  movl   $0x1,0x4(%esp)
081430af +0x109:  lea    -0x50(%ebp),%eax
081430b2 +0x10c:  mov    %eax,(%esp)
081430b5 +0x10f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081430ba +0x114:  movl   $0x0,0x4(%esp)
081430c2 +0x11c:  lea    -0x50(%ebp),%eax
081430c5 +0x11f:  mov    %eax,(%esp)
081430c8 +0x122:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081430cd +0x127:  movl   $0x15,0x4(%esp)
081430d5 +0x12f:  lea    -0x50(%ebp),%eax
081430d8 +0x132:  mov    %eax,(%esp)
081430db +0x135:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081430e0 +0x13a:  movl   $0x1,0x4(%esp)
081430e8 +0x142:  lea    -0x50(%ebp),%eax
081430eb +0x145:  mov    %eax,(%esp)
081430ee +0x148:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081430f3 +0x14d:  mov    0x8(%ebp),%eax
081430f6 +0x150:  mov    0x4(%eax),%eax
081430f9 +0x153:  lea    -0x50(%ebp),%edx
081430fc +0x156:  mov    %edx,0x4(%esp)
08143100 +0x15a:  mov    %eax,(%esp)
08143103 +0x15d:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
08143108 +0x162:  mov    $0x0,%ebx
0814310d +0x167:  lea    -0x50(%ebp),%eax
08143110 +0x16a:  mov    %eax,(%esp)
08143113 +0x16d:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08143118 +0x172:  jmp    081434e7 <+0x541>
0814311d +0x177:  mov    %edx,%ebx
0814311f +0x179:  mov    %eax,%esi
08143121 +0x17b:  lea    -0x50(%ebp),%eax
08143124 +0x17e:  mov    %eax,(%esp)
08143127 +0x181:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0814312c +0x186:  mov    %esi,%eax
0814312e +0x188:  mov    %ebx,%edx
08143130 +0x18a:  mov    %eax,(%esp)
08143133 +0x18d:  call   08ae3750 <_Unwind_Resume>
08143138 +0x192:  movl   $0x0,-0x10(%ebp)
0814313f +0x199:  jmp    081432cb <+0x325>
08143144 +0x19e:  mov    0x8(%ebp),%eax
08143147 +0x1a1:  mov    0x4(%eax),%eax
0814314a +0x1a4:  mov    -0x10(%ebp),%edx
0814314d +0x1a7:  mov    %edx,0x4(%esp)
08143151 +0x1ab:  mov    %eax,(%esp)
08143154 +0x1ae:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
08143159 +0x1b3:  mov    %eax,-0xc(%ebp)
0814315c +0x1b6:  cmpl   $0x0,-0xc(%ebp)
08143160 +0x1ba:  je     08143182 <+0x1dc>
08143162 +0x1bc:  mov    0x8(%ebp),%eax
08143165 +0x1bf:  mov    0x4(%eax),%eax
08143168 +0x1c2:  mov    -0x10(%ebp),%edx
0814316b +0x1c5:  mov    %edx,0x4(%esp)
0814316f +0x1c9:  mov    %eax,(%esp)
08143172 +0x1cc:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
08143177 +0x1d1:  test   %al,%al
08143179 +0x1d3:  je     08143182 <+0x1dc>
0814317b +0x1d5:  mov    $0x1,%eax
08143180 +0x1da:  jmp    08143187 <+0x1e1>
08143182 +0x1dc:  mov    $0x0,%eax
08143187 +0x1e1:  test   %al,%al
08143189 +0x1e3:  je     081432c7 <+0x321>
0814318f +0x1e9:  mov    -0xc(%ebp),%eax
08143192 +0x1ec:  mov    %eax,(%esp)
08143195 +0x1ef:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0814319a +0x1f4:  mov    %eax,%ebx
0814319c +0x1f6:  mov    0x8(%ebp),%eax
0814319f +0x1f9:  mov    0x9f0(%eax),%eax
081431a5 +0x1ff:  mov    %eax,(%esp)
081431a8 +0x202:  call   0814559a <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1d>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1d
081431ad +0x207:  cmp    %eax,%ebx
081431af +0x209:  setl   %al
081431b2 +0x20c:  test   %al,%al
081431b4 +0x20e:  je     081432c7 <+0x321>
081431ba +0x214:  mov    0x8(%ebp),%eax
081431bd +0x217:  mov    0x9f0(%eax),%eax
081431c3 +0x21d:  mov    %eax,(%esp)
081431c6 +0x220:  call   0814559a <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1d>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1d
081431cb +0x225:  mov    %eax,%esi
081431cd +0x227:  mov    -0xc(%ebp),%eax
081431d0 +0x22a:  mov    %eax,(%esp)
081431d3 +0x22d:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
081431d8 +0x232:  mov    %eax,%ebx
081431da +0x234:  movl   $0x5,0xc(%esp)
081431e2 +0x23c:  movl   $0xf0,0x8(%esp)
081431ea +0x244:  movl   $&_ZZN8WongWork10CBossTower23checkStartGameConditionERhbE19__PRETTY_FUNCTION__,0x4(%esp)
081431f2 +0x24c:  lea    -0x24(%ebp),%eax
081431f5 +0x24f:  mov    %eax,(%esp)
081431f8 +0x252:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081431fd +0x257:  mov    %esi,0xc(%esp)
08143201 +0x25b:  mov    %ebx,0x8(%esp)
08143205 +0x25f:  movl   $"dungeon level check charac_level : %d, dungeon_min_level : %d",0x4(%esp)
0814320d +0x267:  lea    -0x24(%ebp),%eax
08143210 +0x26a:  mov    %eax,(%esp)
08143213 +0x26d:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08143218 +0x272:  lea    -0x5c(%ebp),%eax
0814321b +0x275:  mov    %eax,(%esp)
0814321e +0x278:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08143223 +0x27d:  lea    -0x5c(%ebp),%eax
08143226 +0x280:  mov    %eax,(%esp)
08143229 +0x283:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
0814322e +0x288:  movl   $0x10,0x8(%esp)
08143236 +0x290:  movl   $0x1,0x4(%esp)
0814323e +0x298:  lea    -0x5c(%ebp),%eax
08143241 +0x29b:  mov    %eax,(%esp)
08143244 +0x29e:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08143249 +0x2a3:  movl   $0x0,0x4(%esp)
08143251 +0x2ab:  lea    -0x5c(%ebp),%eax
08143254 +0x2ae:  mov    %eax,(%esp)
08143257 +0x2b1:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0814325c +0x2b6:  movl   $0xe,0x4(%esp)
08143264 +0x2be:  lea    -0x5c(%ebp),%eax
08143267 +0x2c1:  mov    %eax,(%esp)
0814326a +0x2c4:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0814326f +0x2c9:  movl   $0x1,0x4(%esp)
08143277 +0x2d1:  lea    -0x5c(%ebp),%eax
0814327a +0x2d4:  mov    %eax,(%esp)
0814327d +0x2d7:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08143282 +0x2dc:  mov    0x8(%ebp),%eax
08143285 +0x2df:  mov    0x4(%eax),%eax
08143288 +0x2e2:  lea    -0x5c(%ebp),%edx
0814328b +0x2e5:  mov    %edx,0x4(%esp)
0814328f +0x2e9:  mov    %eax,(%esp)
08143292 +0x2ec:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
08143297 +0x2f1:  mov    $0x0,%ebx
0814329c +0x2f6:  lea    -0x5c(%ebp),%eax
0814329f +0x2f9:  mov    %eax,(%esp)
081432a2 +0x2fc:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081432a7 +0x301:  jmp    081434e7 <+0x541>
081432ac +0x306:  mov    %edx,%ebx
081432ae +0x308:  mov    %eax,%esi
081432b0 +0x30a:  lea    -0x5c(%ebp),%eax
081432b3 +0x30d:  mov    %eax,(%esp)
081432b6 +0x310:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081432bb +0x315:  mov    %esi,%eax
081432bd +0x317:  mov    %ebx,%edx
081432bf +0x319:  mov    %eax,(%esp)
081432c2 +0x31c:  call   08ae3750 <_Unwind_Resume>
081432c7 +0x321:  addl   $0x1,-0x10(%ebp)
081432cb +0x325:  cmpl   $0x3,-0x10(%ebp)
081432cf +0x329:  setle  %al
081432d2 +0x32c:  test   %al,%al
081432d4 +0x32e:  jne    08143144 <+0x19e>
081432da +0x334:  mov    0x8(%ebp),%eax
081432dd +0x337:  mov    0x4(%eax),%eax
081432e0 +0x33a:  mov    0xcd8(%eax),%eax
081432e6 +0x340:  cmp    $0x1,%eax
081432e9 +0x343:  jne    081432f5 <+0x34f>
081432eb +0x345:  mov    $0x1,%ebx
081432f0 +0x34a:  jmp    081434e7 <+0x541>
081432f5 +0x34f:  mov    0x8(%ebp),%eax
081432f8 +0x352:  mov    0x9f0(%eax),%edx
081432fe +0x358:  mov    0x8(%ebp),%eax
08143301 +0x35b:  mov    0x4(%eax),%eax
08143304 +0x35e:  lea    -0x44(%ebp),%ecx
08143307 +0x361:  mov    %ecx,0x10(%esp)
0814330b +0x365:  lea    -0x168(%ebp),%ecx
08143311 +0x36b:  mov    %ecx,0xc(%esp)
08143315 +0x36f:  mov    0xc(%ebp),%ecx
08143318 +0x372:  mov    %ecx,0x8(%esp)
0814331c +0x376:  mov    %edx,0x4(%esp)
08143320 +0x37a:  mov    %eax,(%esp)
08143323 +0x37d:  call   0859e528 <_ZN6CParty24CheckEnterAncientDungeonEPK8CDungeonRhP10Inven_ItemPi>  ; CParty::CheckEnterAncientDungeon(CDungeon const*, unsigned char&, Inven_Item*, int*)
08143328 +0x382:  mov    %al,-0x11(%ebp)
0814332b +0x385:  movzbl -0x11(%ebp),%eax
0814332f +0x389:  xor    $0x1,%eax
08143332 +0x38c:  test   %al,%al
08143334 +0x38e:  je     081433f6 <+0x450>
0814333a +0x394:  lea    -0x68(%ebp),%eax
0814333d +0x397:  mov    %eax,(%esp)
08143340 +0x39a:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08143345 +0x39f:  movl   $0x10,0x8(%esp)
0814334d +0x3a7:  movl   $0x1,0x4(%esp)
08143355 +0x3af:  lea    -0x68(%ebp),%eax
08143358 +0x3b2:  mov    %eax,(%esp)
0814335b +0x3b5:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08143360 +0x3ba:  movl   $0x0,0x4(%esp)
08143368 +0x3c2:  lea    -0x68(%ebp),%eax
0814336b +0x3c5:  mov    %eax,(%esp)
0814336e +0x3c8:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08143373 +0x3cd:  movl   $0x11,0x4(%esp)
0814337b +0x3d5:  lea    -0x68(%ebp),%eax
0814337e +0x3d8:  mov    %eax,(%esp)
08143381 +0x3db:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08143386 +0x3e0:  mov    0xc(%ebp),%eax
08143389 +0x3e3:  movzbl (%eax),%eax
0814338c +0x3e6:  movzbl %al,%eax
0814338f +0x3e9:  mov    %eax,0x4(%esp)
08143393 +0x3ed:  lea    -0x68(%ebp),%eax
08143396 +0x3f0:  mov    %eax,(%esp)
08143399 +0x3f3:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0814339e +0x3f8:  movl   $0x1,0x4(%esp)
081433a6 +0x400:  lea    -0x68(%ebp),%eax
081433a9 +0x403:  mov    %eax,(%esp)
081433ac +0x406:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081433b1 +0x40b:  mov    0x8(%ebp),%eax
081433b4 +0x40e:  mov    0x4(%eax),%eax
081433b7 +0x411:  lea    -0x68(%ebp),%edx
081433ba +0x414:  mov    %edx,0x4(%esp)
081433be +0x418:  mov    %eax,(%esp)
081433c1 +0x41b:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
081433c6 +0x420:  mov    $0x0,%ebx
081433cb +0x425:  lea    -0x68(%ebp),%eax
081433ce +0x428:  mov    %eax,(%esp)
081433d1 +0x42b:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081433d6 +0x430:  jmp    081434e7 <+0x541>
081433db +0x435:  mov    %edx,%ebx
081433dd +0x437:  mov    %eax,%esi
081433df +0x439:  lea    -0x68(%ebp),%eax
081433e2 +0x43c:  mov    %eax,(%esp)
081433e5 +0x43f:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081433ea +0x444:  mov    %esi,%eax
081433ec +0x446:  mov    %ebx,%edx
081433ee +0x448:  mov    %eax,(%esp)
081433f1 +0x44b:  call   08ae3750 <_Unwind_Resume>
081433f6 +0x450:  cmpb   $0x0,-0x16c(%ebp)
081433fd +0x457:  je     081434e2 <+0x53c>
08143403 +0x45d:  mov    0x8(%ebp),%eax
08143406 +0x460:  mov    0x9f0(%eax),%edx
0814340c +0x466:  mov    0x8(%ebp),%eax
0814340f +0x469:  mov    0x4(%eax),%eax
08143412 +0x46c:  lea    -0x44(%ebp),%ecx
08143415 +0x46f:  mov    %ecx,0xc(%esp)
08143419 +0x473:  lea    -0x168(%ebp),%ecx
0814341f +0x479:  mov    %ecx,0x8(%esp)
08143423 +0x47d:  mov    %edx,0x4(%esp)
08143427 +0x481:  mov    %eax,(%esp)
0814342a +0x484:  call   0859eac2 <_ZN6CParty22UseAncientDungeonItemsEPK8CDungeonP10Inven_ItemPi>  ; CParty::UseAncientDungeonItems(CDungeon const*, Inven_Item*, int*)
0814342f +0x489:  mov    %al,-0x11(%ebp)
08143432 +0x48c:  movzbl -0x11(%ebp),%eax
08143436 +0x490:  xor    $0x1,%eax
08143439 +0x493:  test   %al,%al
0814343b +0x495:  je     081434e2 <+0x53c>
08143441 +0x49b:  lea    -0x74(%ebp),%eax
08143444 +0x49e:  mov    %eax,(%esp)
08143447 +0x4a1:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0814344c +0x4a6:  movl   $0x10,0x8(%esp)
08143454 +0x4ae:  movl   $0x1,0x4(%esp)
0814345c +0x4b6:  lea    -0x74(%ebp),%eax
0814345f +0x4b9:  mov    %eax,(%esp)
08143462 +0x4bc:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08143467 +0x4c1:  movl   $0x0,0x4(%esp)
0814346f +0x4c9:  lea    -0x74(%ebp),%eax
08143472 +0x4cc:  mov    %eax,(%esp)
08143475 +0x4cf:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0814347a +0x4d4:  movl   $0x1,0x4(%esp)
08143482 +0x4dc:  lea    -0x74(%ebp),%eax
08143485 +0x4df:  mov    %eax,(%esp)
08143488 +0x4e2:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0814348d +0x4e7:  movl   $0x1,0x4(%esp)
08143495 +0x4ef:  lea    -0x74(%ebp),%eax
08143498 +0x4f2:  mov    %eax,(%esp)
0814349b +0x4f5:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081434a0 +0x4fa:  mov    0x8(%ebp),%eax
081434a3 +0x4fd:  mov    0x4(%eax),%eax
081434a6 +0x500:  lea    -0x74(%ebp),%edx
081434a9 +0x503:  mov    %edx,0x4(%esp)
081434ad +0x507:  mov    %eax,(%esp)
081434b0 +0x50a:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
081434b5 +0x50f:  mov    $0x0,%ebx
081434ba +0x514:  lea    -0x74(%ebp),%eax
081434bd +0x517:  mov    %eax,(%esp)
081434c0 +0x51a:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081434c5 +0x51f:  jmp    081434e7 <+0x541>
081434c7 +0x521:  mov    %edx,%ebx
081434c9 +0x523:  mov    %eax,%esi
081434cb +0x525:  lea    -0x74(%ebp),%eax
081434ce +0x528:  mov    %eax,(%esp)
081434d1 +0x52b:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081434d6 +0x530:  mov    %esi,%eax
081434d8 +0x532:  mov    %ebx,%edx
081434da +0x534:  mov    %eax,(%esp)
081434dd +0x537:  call   08ae3750 <_Unwind_Resume>
081434e2 +0x53c:  mov    $0x1,%ebx
081434e7 +0x541:  mov    %ebx,%eax
081434e9 +0x543:  add    $0x190,%esp
081434ef +0x549:  pop    %ebx
081434f0 +0x54a:  pop    %esi
081434f1 +0x54b:  pop    %ebp
081434f2 +0x54c:  ret
081434f3 +0x54d:  nop
```

## 反编译 C

```c
// WongWork::CBossTower::checkStartGameCondition @ 0x8142fa6

/* WongWork::CBossTower::checkStartGameCondition(unsigned char&, bool) */

undefined4 __thiscall
WongWork::CBossTower::checkStartGameCondition(CBossTower *this,uchar *param_1,bool param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  Inven_Item *this_00;
  undefined4 uVar5;
  int iVar6;
  Inven_Item local_16c [244];
  PacketGuard local_78 [12];
  PacketGuard local_6c [12];
  PacketGuard local_60 [12];
  PacketGuard local_54 [12];
  int local_48 [4];
  cMyTrace local_38 [16];
  cMyTrace local_28 [19];
  char local_15;
  int local_14;
  CUserCharacInfo *local_10;
  
  this_00 = local_16c;
  for (iVar6 = 3; iVar6 != -1; iVar6 = iVar6 + -1) {
    Inven_Item::Inven_Item(this_00);
    this_00 = this_00 + 0x3d;
  }
  memset(local_16c,0,0xf4);
  memset(local_48,0,0x10);
  if ((*(int *)(this + 0x9f0) == 0) ||
     (cVar2 = CDungeon::IsOpenScheduleDungeon(*(CDungeon **)(this + 0x9f0)), cVar2 != '\x01')) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    cMyTrace::cMyTrace(local_38,
                       "bool WongWork::CBossTower::checkStartGameCondition(unsigned char&, bool)",
                       0xdb,5);
    cMyTrace::operator()(local_38,"boss Tower dungeon is not open");
    PacketGuard::PacketGuard(local_54);
                    /* try { // try from 0814309a to 08143107 has its CatchHandler @ 0814311d */
    InterfacePacketBuf::clear((InterfacePacketBuf *)local_54);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_54,1,0x10);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_54,0);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_54,0x15);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_54,true);
    CParty::send_to_party(*(CParty **)(this + 4),local_54);
    uVar5 = 0;
    PacketGuard::~PacketGuard(local_54);
  }
  else {
    for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
      local_10 = (CUserCharacInfo *)CParty::get_user(*(CParty **)(this + 4),local_14);
      if ((local_10 == (CUserCharacInfo *)0x0) ||
         (cVar2 = CParty::checkValidUser(*(CParty **)(this + 4),local_14), cVar2 == '\0')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        iVar6 = CUserCharacInfo::get_charac_level(local_10);
        iVar3 = CDungeon::get_min_level(*(CDungeon **)(this + 0x9f0));
        if (iVar6 < iVar3) {
          uVar5 = CDungeon::get_min_level(*(CDungeon **)(this + 0x9f0));
          uVar4 = CUserCharacInfo::get_charac_level(local_10);
          cMyTrace::cMyTrace(local_28,
                             "bool WongWork::CBossTower::checkStartGameCondition(unsigned char&, bool)"
                             ,0xf0,5);
          cMyTrace::operator()
                    (local_28,"dungeon level check charac_level : %d, dungeon_min_level : %d",uVar4,
                     uVar5);
          PacketGuard::PacketGuard(local_60);
                    /* try { // try from 08143229 to 08143296 has its CatchHandler @ 081432ac */
          InterfacePacketBuf::clear((InterfacePacketBuf *)local_60);
          InterfacePacketBuf::put_header((InterfacePacketBuf *)local_60,1,0x10);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_60,0);
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_60,0xe);
          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_60,true);
          CParty::send_to_party(*(CParty **)(this + 4),local_60);
          PacketGuard::~PacketGuard(local_60);
          return 0;
        }
      }
    }
    if (*(int *)(*(int *)(this + 4) + 0xcd8) == 1) {
      uVar5 = 1;
    }
    else {
      local_15 = CParty::CheckEnterAncientDungeon
                           (*(CParty **)(this + 4),*(CDungeon **)(this + 0x9f0),param_1,local_16c,
                            local_48);
      if (local_15 == '\x01') {
        if ((param_2) &&
           (local_15 = CParty::UseAncientDungeonItems
                                 (*(CParty **)(this + 4),*(CDungeon **)(this + 0x9f0),local_16c,
                                  local_48), local_15 != '\x01')) {
          PacketGuard::PacketGuard(local_78);
                    /* try { // try from 08143462 to 081434b4 has its CatchHandler @ 081434c7 */
          InterfacePacketBuf::put_header((InterfacePacketBuf *)local_78,1,0x10);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_78,0);
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_78,1);
          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_78,true);
          CParty::send_to_party(*(CParty **)(this + 4),local_78);
          PacketGuard::~PacketGuard(local_78);
          return 0;
        }
        uVar5 = 1;
      }
      else {
        PacketGuard::PacketGuard(local_6c);
                    /* try { // try from 0814335b to 081433c5 has its CatchHandler @ 081433db */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_6c,1,0x10);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_6c,0);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_6c,0x11);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_6c,(uint)*param_1);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_6c,true);
        CParty::send_to_party(*(CParty **)(this + 4),local_6c);
        uVar5 = 0;
        PacketGuard::~PacketGuard(local_6c);
      }
    }
  }
  return uVar5;
}
```
