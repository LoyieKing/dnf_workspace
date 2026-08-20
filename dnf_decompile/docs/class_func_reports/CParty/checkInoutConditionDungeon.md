# checkInoutConditionDungeon

`_ZN6CParty26checkInoutConditionDungeonEPK8CDungeon17ENUM_DUNGEON_MODE14ENUM_CMDPACKET`

`CParty::checkInoutConditionDungeon(CDungeon const*, ENUM_DUNGEON_MODE, ENUM_CMDPACKET)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085abc80` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085abc80  _ZN6CParty26checkInoutConditionDungeonEPK8CDungeon17ENUM_DUNGEON_MODE14ENUM_CMDPACKET
#           CParty::checkInoutConditionDungeon(CDungeon const*, ENUM_DUNGEON_MODE, ENUM_CMDPACKET)
# range [0x085abc80, 0x085ac59b]
085abc80 +0x000:  push   %ebp
085abc81 +0x001:  mov    %esp,%ebp
085abc83 +0x003:  push   %esi
085abc84 +0x004:  push   %ebx
085abc85 +0x005:  sub    $0x160,%esp
085abc8b +0x00b:  cmpl   $0x0,0xc(%ebp)
085abc8f +0x00f:  jne    085abc9b <+0x1b>
085abc91 +0x011:  mov    $0x1,%ebx
085abc96 +0x016:  jmp    085ac590 <+0x910>
085abc9b +0x01b:  lea    -0x28(%ebp),%eax
085abc9e +0x01e:  mov    %eax,(%esp)
085abca1 +0x021:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
085abca6 +0x026:  movb   $0x0,-0x29(%ebp)
085abcaa +0x02a:  lea    -0x140(%ebp),%eax
085abcb0 +0x030:  mov    %eax,%ebx
085abcb2 +0x032:  mov    $0x3,%esi
085abcb7 +0x037:  jmp    085abcc7 <+0x47>
085abcb9 +0x039:  mov    %ebx,(%esp)
085abcbc +0x03c:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
085abcc1 +0x041:  add    $0x3d,%ebx
085abcc4 +0x044:  sub    $0x1,%esi
085abcc7 +0x047:  cmp    $0xffffffff,%esi
085abcca +0x04a:  setne  %al
085abccd +0x04d:  test   %al,%al
085abccf +0x04f:  jne    085abcb9 <+0x39>
085abcd1 +0x051:  movl   $0xf4,0x8(%esp)
085abcd9 +0x059:  movl   $0x0,0x4(%esp)
085abce1 +0x061:  lea    -0x140(%ebp),%eax
085abce7 +0x067:  mov    %eax,(%esp)
085abcea +0x06a:  call   0807dcc0 <_init+0x5b8>
085abcef +0x06f:  movl   $0x10,0x8(%esp)
085abcf7 +0x077:  movl   $0x0,0x4(%esp)
085abcff +0x07f:  lea    -0x3c(%ebp),%eax
085abd02 +0x082:  mov    %eax,(%esp)
085abd05 +0x085:  call   0807dcc0 <_init+0x5b8>
085abd0a +0x08a:  cmpl   $0x1bc,0x14(%ebp)
085abd11 +0x091:  jne    085abe3f <+0x1bf>
085abd17 +0x097:  movl   $0x0,-0x18(%ebp)
085abd1e +0x09e:  jmp    085abd3b <+0xbb>
085abd20 +0x0a0:  mov    -0x18(%ebp),%eax
085abd23 +0x0a3:  mov    %eax,0x4(%esp)
085abd27 +0x0a7:  mov    0x8(%ebp),%eax
085abd2a +0x0aa:  mov    %eax,(%esp)
085abd2d +0x0ad:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
085abd32 +0x0b2:  xor    $0x1,%eax
085abd35 +0x0b5:  test   %al,%al
085abd37 +0x0b7:  addl   $0x1,-0x18(%ebp)
085abd3b +0x0bb:  cmpl   $0x3,-0x18(%ebp)
085abd3f +0x0bf:  setle  %al
085abd42 +0x0c2:  test   %al,%al
085abd44 +0x0c4:  jne    085abd20 <+0xa0>
085abd46 +0x0c6:  movl   $0x0,-0x14(%ebp)
085abd4d +0x0cd:  jmp    085abe30 <+0x1b0>
085abd52 +0x0d2:  mov    -0x14(%ebp),%eax
085abd55 +0x0d5:  mov    %eax,0x4(%esp)
085abd59 +0x0d9:  mov    0x8(%ebp),%eax
085abd5c +0x0dc:  mov    %eax,(%esp)
085abd5f +0x0df:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
085abd64 +0x0e4:  xor    $0x1,%eax
085abd67 +0x0e7:  test   %al,%al
085abd69 +0x0e9:  jne    085abe2b <+0x1ab>
085abd6f +0x0ef:  mov    -0x14(%ebp),%edx
085abd72 +0x0f2:  mov    0x8(%ebp),%ecx
085abd75 +0x0f5:  mov    %edx,%eax
085abd77 +0x0f7:  add    %eax,%eax
085abd79 +0x0f9:  add    %edx,%eax
085abd7b +0x0fb:  shl    $0x3,%eax
085abd7e +0x0fe:  lea    (%ecx,%eax,1),%eax
085abd81 +0x101:  add    $0x78,%eax
085abd84 +0x104:  mov    (%eax),%eax
085abd86 +0x106:  mov    %eax,(%esp)
085abd89 +0x109:  call   0822f390 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4a3a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4a3a
085abd8e +0x10e:  cmp    $0x64,%al
085abd90 +0x110:  setne  %al
085abd93 +0x113:  test   %al,%al
085abd95 +0x115:  je     085abe2c <+0x1ac>
085abd9b +0x11b:  lea    -0x28(%ebp),%eax
085abd9e +0x11e:  mov    %eax,(%esp)
085abda1 +0x121:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
085abda6 +0x126:  mov    0x14(%ebp),%eax
085abda9 +0x129:  mov    %eax,0x8(%esp)
085abdad +0x12d:  movl   $0x1,0x4(%esp)
085abdb5 +0x135:  lea    -0x28(%ebp),%eax
085abdb8 +0x138:  mov    %eax,(%esp)
085abdbb +0x13b:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085abdc0 +0x140:  movl   $0x0,0x4(%esp)
085abdc8 +0x148:  lea    -0x28(%ebp),%eax
085abdcb +0x14b:  mov    %eax,(%esp)
085abdce +0x14e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085abdd3 +0x153:  movl   $0xea,0x4(%esp)
085abddb +0x15b:  lea    -0x28(%ebp),%eax
085abdde +0x15e:  mov    %eax,(%esp)
085abde1 +0x161:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085abde6 +0x166:  movzbl -0x29(%ebp),%eax
085abdea +0x16a:  movzbl %al,%eax
085abded +0x16d:  mov    %eax,0x4(%esp)
085abdf1 +0x171:  lea    -0x28(%ebp),%eax
085abdf4 +0x174:  mov    %eax,(%esp)
085abdf7 +0x177:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085abdfc +0x17c:  movl   $0x1,0x4(%esp)
085abe04 +0x184:  lea    -0x28(%ebp),%eax
085abe07 +0x187:  mov    %eax,(%esp)
085abe0a +0x18a:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085abe0f +0x18f:  lea    -0x28(%ebp),%eax
085abe12 +0x192:  mov    %eax,0x4(%esp)
085abe16 +0x196:  mov    0x8(%ebp),%eax
085abe19 +0x199:  mov    %eax,(%esp)
085abe1c +0x19c:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
085abe21 +0x1a1:  mov    $0xea,%ebx
085abe26 +0x1a6:  jmp    085ac585 <+0x905>
085abe2b +0x1ab:  nop
085abe2c +0x1ac:  addl   $0x1,-0x14(%ebp)
085abe30 +0x1b0:  cmpl   $0x3,-0x14(%ebp)
085abe34 +0x1b4:  setle  %al
085abe37 +0x1b7:  test   %al,%al
085abe39 +0x1b9:  jne    085abd52 <+0xd2>
085abe3f +0x1bf:  lea    -0x3c(%ebp),%eax
085abe42 +0x1c2:  mov    %eax,0x10(%esp)
085abe46 +0x1c6:  lea    -0x140(%ebp),%eax
085abe4c +0x1cc:  mov    %eax,0xc(%esp)
085abe50 +0x1d0:  lea    -0x29(%ebp),%eax
085abe53 +0x1d3:  mov    %eax,0x8(%esp)
085abe57 +0x1d7:  mov    0xc(%ebp),%eax
085abe5a +0x1da:  mov    %eax,0x4(%esp)
085abe5e +0x1de:  mov    0x8(%ebp),%eax
085abe61 +0x1e1:  mov    %eax,(%esp)
085abe64 +0x1e4:  call   0859e528 <_ZN6CParty24CheckEnterAncientDungeonEPK8CDungeonRhP10Inven_ItemPi>  ; CParty::CheckEnterAncientDungeon(CDungeon const*, unsigned char&, Inven_Item*, int*)
085abe69 +0x1e9:  xor    $0x1,%eax
085abe6c +0x1ec:  test   %al,%al
085abe6e +0x1ee:  je     085abf04 <+0x284>
085abe74 +0x1f4:  lea    -0x28(%ebp),%eax
085abe77 +0x1f7:  mov    %eax,(%esp)
085abe7a +0x1fa:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
085abe7f +0x1ff:  mov    0x14(%ebp),%eax
085abe82 +0x202:  mov    %eax,0x8(%esp)
085abe86 +0x206:  movl   $0x1,0x4(%esp)
085abe8e +0x20e:  lea    -0x28(%ebp),%eax
085abe91 +0x211:  mov    %eax,(%esp)
085abe94 +0x214:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085abe99 +0x219:  movl   $0x0,0x4(%esp)
085abea1 +0x221:  lea    -0x28(%ebp),%eax
085abea4 +0x224:  mov    %eax,(%esp)
085abea7 +0x227:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085abeac +0x22c:  movl   $0x11,0x4(%esp)
085abeb4 +0x234:  lea    -0x28(%ebp),%eax
085abeb7 +0x237:  mov    %eax,(%esp)
085abeba +0x23a:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085abebf +0x23f:  movzbl -0x29(%ebp),%eax
085abec3 +0x243:  movzbl %al,%eax
085abec6 +0x246:  mov    %eax,0x4(%esp)
085abeca +0x24a:  lea    -0x28(%ebp),%eax
085abecd +0x24d:  mov    %eax,(%esp)
085abed0 +0x250:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085abed5 +0x255:  movl   $0x1,0x4(%esp)
085abedd +0x25d:  lea    -0x28(%ebp),%eax
085abee0 +0x260:  mov    %eax,(%esp)
085abee3 +0x263:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085abee8 +0x268:  lea    -0x28(%ebp),%eax
085abeeb +0x26b:  mov    %eax,0x4(%esp)
085abeef +0x26f:  mov    0x8(%ebp),%eax
085abef2 +0x272:  mov    %eax,(%esp)
085abef5 +0x275:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
085abefa +0x27a:  mov    $0x11,%ebx
085abeff +0x27f:  jmp    085ac585 <+0x905>
085abf04 +0x284:  mov    0xc(%ebp),%eax
085abf07 +0x287:  mov    %eax,(%esp)
085abf0a +0x28a:  call   080fdcf0 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1c
085abf0f +0x28f:  cmp    $0x0,%eax
085abf12 +0x292:  sete   %al
085abf15 +0x295:  test   %al,%al
085abf17 +0x297:  jne    085abfe9 <+0x369>
085abf1d +0x29d:  lea    -0x3c(%ebp),%eax
085abf20 +0x2a0:  mov    %eax,0xc(%esp)
085abf24 +0x2a4:  lea    -0x140(%ebp),%eax
085abf2a +0x2aa:  mov    %eax,0x8(%esp)
085abf2e +0x2ae:  mov    0xc(%ebp),%eax
085abf31 +0x2b1:  mov    %eax,0x4(%esp)
085abf35 +0x2b5:  mov    0x8(%ebp),%eax
085abf38 +0x2b8:  mov    %eax,(%esp)
085abf3b +0x2bb:  call   0859eac2 <_ZN6CParty22UseAncientDungeonItemsEPK8CDungeonP10Inven_ItemPi>  ; CParty::UseAncientDungeonItems(CDungeon const*, Inven_Item*, int*)
085abf40 +0x2c0:  xor    $0x1,%eax
085abf43 +0x2c3:  test   %al,%al
085abf45 +0x2c5:  je     085abfe9 <+0x369>
085abf4b +0x2cb:  lea    -0x4c(%ebp),%eax
085abf4e +0x2ce:  mov    %eax,(%esp)
085abf51 +0x2d1:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
085abf56 +0x2d6:  movl   $0x10,0x8(%esp)
085abf5e +0x2de:  movl   $0x1,0x4(%esp)
085abf66 +0x2e6:  lea    -0x4c(%ebp),%eax
085abf69 +0x2e9:  mov    %eax,(%esp)
085abf6c +0x2ec:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085abf71 +0x2f1:  movl   $0x0,0x4(%esp)
085abf79 +0x2f9:  lea    -0x4c(%ebp),%eax
085abf7c +0x2fc:  mov    %eax,(%esp)
085abf7f +0x2ff:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085abf84 +0x304:  movl   $0x1,0x4(%esp)
085abf8c +0x30c:  lea    -0x4c(%ebp),%eax
085abf8f +0x30f:  mov    %eax,(%esp)
085abf92 +0x312:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085abf97 +0x317:  movl   $0x1,0x4(%esp)
085abf9f +0x31f:  lea    -0x4c(%ebp),%eax
085abfa2 +0x322:  mov    %eax,(%esp)
085abfa5 +0x325:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085abfaa +0x32a:  lea    -0x4c(%ebp),%eax
085abfad +0x32d:  mov    %eax,0x4(%esp)
085abfb1 +0x331:  mov    0x8(%ebp),%eax
085abfb4 +0x334:  mov    %eax,(%esp)
085abfb7 +0x337:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
085abfbc +0x33c:  mov    $0x11,%ebx
085abfc1 +0x341:  lea    -0x4c(%ebp),%eax
085abfc4 +0x344:  mov    %eax,(%esp)
085abfc7 +0x347:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085abfcc +0x34c:  jmp    085ac585 <+0x905>
085abfd1 +0x351:  mov    %edx,%ebx
085abfd3 +0x353:  mov    %eax,%esi
085abfd5 +0x355:  lea    -0x4c(%ebp),%eax
085abfd8 +0x358:  mov    %eax,(%esp)
085abfdb +0x35b:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085abfe0 +0x360:  mov    %esi,%eax
085abfe2 +0x362:  mov    %ebx,%edx
085abfe4 +0x364:  jmp    085ac56a <+0x8ea>
085abfe9 +0x369:  mov    0xc(%ebp),%eax
085abfec +0x36c:  mov    %eax,(%esp)
085abfef +0x36f:  call   0826b938 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x206>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x206
085abff4 +0x374:  test   %al,%al
085abff6 +0x376:  setg   %al
085abff9 +0x379:  test   %al,%al
085abffb +0x37b:  je     085ac27a <+0x5fa>
085ac001 +0x381:  movb   $0x0,-0x29(%ebp)
085ac005 +0x385:  movl   $0x1,0xc(%esp)
085ac00d +0x38d:  lea    -0x29(%ebp),%eax
085ac010 +0x390:  mov    %eax,0x8(%esp)
085ac014 +0x394:  mov    0xc(%ebp),%eax
085ac017 +0x397:  mov    %eax,0x4(%esp)
085ac01b +0x39b:  mov    0x8(%ebp),%eax
085ac01e +0x39e:  mov    %eax,(%esp)
085ac021 +0x3a1:  call   0859f1ce <_ZN6CParty26CheckEnterDimensionDungeonEPK8CDungeonRhb>  ; CParty::CheckEnterDimensionDungeon(CDungeon const*, unsigned char&, bool)
085ac026 +0x3a6:  mov    %eax,-0x10(%ebp)
085ac029 +0x3a9:  mov    -0x10(%ebp),%eax
085ac02c +0x3ac:  cmp    $0xac,%eax
085ac031 +0x3b1:  je     085ac0c7 <+0x447>
085ac037 +0x3b7:  cmp    $0xad,%eax
085ac03c +0x3bc:  je     085ac157 <+0x4d7>
085ac042 +0x3c2:  cmp    $0xab,%eax
085ac047 +0x3c7:  jne    085ac1e7 <+0x567>
085ac04d +0x3cd:  lea    -0x28(%ebp),%eax
085ac050 +0x3d0:  mov    %eax,(%esp)
085ac053 +0x3d3:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
085ac058 +0x3d8:  mov    0x14(%ebp),%eax
085ac05b +0x3db:  mov    %eax,0x8(%esp)
085ac05f +0x3df:  movl   $0x1,0x4(%esp)
085ac067 +0x3e7:  lea    -0x28(%ebp),%eax
085ac06a +0x3ea:  mov    %eax,(%esp)
085ac06d +0x3ed:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085ac072 +0x3f2:  movl   $0x0,0x4(%esp)
085ac07a +0x3fa:  lea    -0x28(%ebp),%eax
085ac07d +0x3fd:  mov    %eax,(%esp)
085ac080 +0x400:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085ac085 +0x405:  movl   $0xab,0x4(%esp)
085ac08d +0x40d:  lea    -0x28(%ebp),%eax
085ac090 +0x410:  mov    %eax,(%esp)
085ac093 +0x413:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085ac098 +0x418:  movl   $0x1,0x4(%esp)
085ac0a0 +0x420:  lea    -0x28(%ebp),%eax
085ac0a3 +0x423:  mov    %eax,(%esp)
085ac0a6 +0x426:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085ac0ab +0x42b:  lea    -0x28(%ebp),%eax
085ac0ae +0x42e:  mov    %eax,0x4(%esp)
085ac0b2 +0x432:  mov    0x8(%ebp),%eax
085ac0b5 +0x435:  mov    %eax,(%esp)
085ac0b8 +0x438:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
085ac0bd +0x43d:  mov    $0xab,%ebx
085ac0c2 +0x442:  jmp    085ac585 <+0x905>
085ac0c7 +0x447:  lea    -0x28(%ebp),%eax
085ac0ca +0x44a:  mov    %eax,(%esp)
085ac0cd +0x44d:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
085ac0d2 +0x452:  mov    0x14(%ebp),%eax
085ac0d5 +0x455:  mov    %eax,0x8(%esp)
085ac0d9 +0x459:  movl   $0x1,0x4(%esp)
085ac0e1 +0x461:  lea    -0x28(%ebp),%eax
085ac0e4 +0x464:  mov    %eax,(%esp)
085ac0e7 +0x467:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085ac0ec +0x46c:  movl   $0x0,0x4(%esp)
085ac0f4 +0x474:  lea    -0x28(%ebp),%eax
085ac0f7 +0x477:  mov    %eax,(%esp)
085ac0fa +0x47a:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085ac0ff +0x47f:  movl   $0xac,0x4(%esp)
085ac107 +0x487:  lea    -0x28(%ebp),%eax
085ac10a +0x48a:  mov    %eax,(%esp)
085ac10d +0x48d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085ac112 +0x492:  movzbl -0x29(%ebp),%eax
085ac116 +0x496:  movzbl %al,%eax
085ac119 +0x499:  mov    %eax,0x4(%esp)
085ac11d +0x49d:  lea    -0x28(%ebp),%eax
085ac120 +0x4a0:  mov    %eax,(%esp)
085ac123 +0x4a3:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085ac128 +0x4a8:  movl   $0x1,0x4(%esp)
085ac130 +0x4b0:  lea    -0x28(%ebp),%eax
085ac133 +0x4b3:  mov    %eax,(%esp)
085ac136 +0x4b6:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085ac13b +0x4bb:  lea    -0x28(%ebp),%eax
085ac13e +0x4be:  mov    %eax,0x4(%esp)
085ac142 +0x4c2:  mov    0x8(%ebp),%eax
085ac145 +0x4c5:  mov    %eax,(%esp)
085ac148 +0x4c8:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
085ac14d +0x4cd:  mov    $0xac,%ebx
085ac152 +0x4d2:  jmp    085ac585 <+0x905>
085ac157 +0x4d7:  lea    -0x28(%ebp),%eax
085ac15a +0x4da:  mov    %eax,(%esp)
085ac15d +0x4dd:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
085ac162 +0x4e2:  mov    0x14(%ebp),%eax
085ac165 +0x4e5:  mov    %eax,0x8(%esp)
085ac169 +0x4e9:  movl   $0x1,0x4(%esp)
085ac171 +0x4f1:  lea    -0x28(%ebp),%eax
085ac174 +0x4f4:  mov    %eax,(%esp)
085ac177 +0x4f7:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085ac17c +0x4fc:  movl   $0x0,0x4(%esp)
085ac184 +0x504:  lea    -0x28(%ebp),%eax
085ac187 +0x507:  mov    %eax,(%esp)
085ac18a +0x50a:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085ac18f +0x50f:  movl   $0xad,0x4(%esp)
085ac197 +0x517:  lea    -0x28(%ebp),%eax
085ac19a +0x51a:  mov    %eax,(%esp)
085ac19d +0x51d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085ac1a2 +0x522:  movzbl -0x29(%ebp),%eax
085ac1a6 +0x526:  movzbl %al,%eax
085ac1a9 +0x529:  mov    %eax,0x4(%esp)
085ac1ad +0x52d:  lea    -0x28(%ebp),%eax
085ac1b0 +0x530:  mov    %eax,(%esp)
085ac1b3 +0x533:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085ac1b8 +0x538:  movl   $0x1,0x4(%esp)
085ac1c0 +0x540:  lea    -0x28(%ebp),%eax
085ac1c3 +0x543:  mov    %eax,(%esp)
085ac1c6 +0x546:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085ac1cb +0x54b:  lea    -0x28(%ebp),%eax
085ac1ce +0x54e:  mov    %eax,0x4(%esp)
085ac1d2 +0x552:  mov    0x8(%ebp),%eax
085ac1d5 +0x555:  mov    %eax,(%esp)
085ac1d8 +0x558:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
085ac1dd +0x55d:  mov    $0xad,%ebx
085ac1e2 +0x562:  jmp    085ac585 <+0x905>
085ac1e7 +0x567:  mov    0xc(%ebp),%eax
085ac1ea +0x56a:  mov    %eax,0x4(%esp)
085ac1ee +0x56e:  mov    0x8(%ebp),%eax
085ac1f1 +0x571:  mov    %eax,(%esp)
085ac1f4 +0x574:  call   0859f612 <_ZN6CParty25setStandardDimensionLevelEPK8CDungeon>  ; CParty::setStandardDimensionLevel(CDungeon const*)
085ac1f9 +0x579:  xor    $0x1,%eax
085ac1fc +0x57c:  test   %al,%al
085ac1fe +0x57e:  je     085ac27a <+0x5fa>
085ac200 +0x580:  lea    -0x28(%ebp),%eax
085ac203 +0x583:  mov    %eax,(%esp)
085ac206 +0x586:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
085ac20b +0x58b:  mov    0x14(%ebp),%eax
085ac20e +0x58e:  mov    %eax,0x8(%esp)
085ac212 +0x592:  movl   $0x1,0x4(%esp)
085ac21a +0x59a:  lea    -0x28(%ebp),%eax
085ac21d +0x59d:  mov    %eax,(%esp)
085ac220 +0x5a0:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085ac225 +0x5a5:  movl   $0x0,0x4(%esp)
085ac22d +0x5ad:  lea    -0x28(%ebp),%eax
085ac230 +0x5b0:  mov    %eax,(%esp)
085ac233 +0x5b3:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085ac238 +0x5b8:  movl   $0xab,0x4(%esp)
085ac240 +0x5c0:  lea    -0x28(%ebp),%eax
085ac243 +0x5c3:  mov    %eax,(%esp)
085ac246 +0x5c6:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085ac24b +0x5cb:  movl   $0x1,0x4(%esp)
085ac253 +0x5d3:  lea    -0x28(%ebp),%eax
085ac256 +0x5d6:  mov    %eax,(%esp)
085ac259 +0x5d9:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085ac25e +0x5de:  lea    -0x28(%ebp),%eax
085ac261 +0x5e1:  mov    %eax,0x4(%esp)
085ac265 +0x5e5:  mov    0x8(%ebp),%eax
085ac268 +0x5e8:  mov    %eax,(%esp)
085ac26b +0x5eb:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
085ac270 +0x5f0:  mov    $0xab,%ebx
085ac275 +0x5f5:  jmp    085ac585 <+0x905>
085ac27a +0x5fa:  movl   $0x0,-0x1c(%ebp)
085ac281 +0x601:  movl   $0x0,-0x40(%ebp)
085ac288 +0x608:  cmpl   $0x1,0x10(%ebp)
085ac28c +0x60c:  je     085ac400 <+0x780>
085ac292 +0x612:  lea    -0x40(%ebp),%eax
085ac295 +0x615:  mov    %eax,0x8(%esp)
085ac299 +0x619:  mov    0xc(%ebp),%eax
085ac29c +0x61c:  mov    %eax,0x4(%esp)
085ac2a0 +0x620:  mov    0x8(%ebp),%eax
085ac2a3 +0x623:  mov    %eax,(%esp)
085ac2a6 +0x626:  call   0859f7fa <_ZN6CParty19check_dungeon_startEPK8CDungeonRi>  ; CParty::check_dungeon_start(CDungeon const*, int&)
085ac2ab +0x62b:  mov    %eax,-0x1c(%ebp)
085ac2ae +0x62e:  cmpl   $0x0,-0x1c(%ebp)
085ac2b2 +0x632:  setne  %al
085ac2b5 +0x635:  test   %al,%al
085ac2b7 +0x637:  je     085ac400 <+0x780>
085ac2bd +0x63d:  mov    -0x1c(%ebp),%eax
085ac2c0 +0x640:  cmp    $0xf4,%eax
085ac2c5 +0x645:  jg     085ac2e1 <+0x661>
085ac2c7 +0x647:  cmp    $0xf3,%eax
085ac2cc +0x64c:  jge    085ac389 <+0x709>
085ac2d2 +0x652:  cmp    $0xa,%eax
085ac2d5 +0x655:  je     085ac300 <+0x680>
085ac2d7 +0x657:  cmp    $0x5f,%eax
085ac2da +0x65a:  je     085ac300 <+0x680>
085ac2dc +0x65c:  jmp    085ac400 <+0x780>
085ac2e1 +0x661:  cmp    $0xf7,%eax
085ac2e6 +0x666:  jg     085ac2f5 <+0x675>
085ac2e8 +0x668:  cmp    $0xf6,%eax
085ac2ed +0x66d:  jge    085ac389 <+0x709>
085ac2f3 +0x673:  jmp    085ac300 <+0x680>
085ac2f5 +0x675:  cmp    $0xf8,%eax
085ac2fa +0x67a:  jne    085ac400 <+0x780>
085ac300 +0x680:  lea    -0x28(%ebp),%eax
085ac303 +0x683:  mov    %eax,(%esp)
085ac306 +0x686:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
085ac30b +0x68b:  mov    0x14(%ebp),%eax
085ac30e +0x68e:  mov    %eax,0x8(%esp)
085ac312 +0x692:  movl   $0x1,0x4(%esp)
085ac31a +0x69a:  lea    -0x28(%ebp),%eax
085ac31d +0x69d:  mov    %eax,(%esp)
085ac320 +0x6a0:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085ac325 +0x6a5:  movl   $0x0,0x4(%esp)
085ac32d +0x6ad:  lea    -0x28(%ebp),%eax
085ac330 +0x6b0:  mov    %eax,(%esp)
085ac333 +0x6b3:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085ac338 +0x6b8:  mov    -0x1c(%ebp),%eax
085ac33b +0x6bb:  mov    %eax,0x4(%esp)
085ac33f +0x6bf:  lea    -0x28(%ebp),%eax
085ac342 +0x6c2:  mov    %eax,(%esp)
085ac345 +0x6c5:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085ac34a +0x6ca:  mov    -0x40(%ebp),%eax
085ac34d +0x6cd:  mov    %eax,0x4(%esp)
085ac351 +0x6d1:  lea    -0x28(%ebp),%eax
085ac354 +0x6d4:  mov    %eax,(%esp)
085ac357 +0x6d7:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085ac35c +0x6dc:  movl   $0x1,0x4(%esp)
085ac364 +0x6e4:  lea    -0x28(%ebp),%eax
085ac367 +0x6e7:  mov    %eax,(%esp)
085ac36a +0x6ea:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085ac36f +0x6ef:  lea    -0x28(%ebp),%eax
085ac372 +0x6f2:  mov    %eax,0x4(%esp)
085ac376 +0x6f6:  mov    0x8(%ebp),%eax
085ac379 +0x6f9:  mov    %eax,(%esp)
085ac37c +0x6fc:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
085ac381 +0x701:  mov    -0x1c(%ebp),%ebx
085ac384 +0x704:  jmp    085ac585 <+0x905>
085ac389 +0x709:  lea    -0x28(%ebp),%eax
085ac38c +0x70c:  mov    %eax,(%esp)
085ac38f +0x70f:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
085ac394 +0x714:  mov    0x14(%ebp),%eax
085ac397 +0x717:  mov    %eax,0x8(%esp)
085ac39b +0x71b:  movl   $0x1,0x4(%esp)
085ac3a3 +0x723:  lea    -0x28(%ebp),%eax
085ac3a6 +0x726:  mov    %eax,(%esp)
085ac3a9 +0x729:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085ac3ae +0x72e:  movl   $0x0,0x4(%esp)
085ac3b6 +0x736:  lea    -0x28(%ebp),%eax
085ac3b9 +0x739:  mov    %eax,(%esp)
085ac3bc +0x73c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085ac3c1 +0x741:  mov    -0x1c(%ebp),%eax
085ac3c4 +0x744:  mov    %eax,0x4(%esp)
085ac3c8 +0x748:  lea    -0x28(%ebp),%eax
085ac3cb +0x74b:  mov    %eax,(%esp)
085ac3ce +0x74e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085ac3d3 +0x753:  movl   $0x1,0x4(%esp)
085ac3db +0x75b:  lea    -0x28(%ebp),%eax
085ac3de +0x75e:  mov    %eax,(%esp)
085ac3e1 +0x761:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085ac3e6 +0x766:  lea    -0x28(%ebp),%eax
085ac3e9 +0x769:  mov    %eax,0x4(%esp)
085ac3ed +0x76d:  mov    0x8(%ebp),%eax
085ac3f0 +0x770:  mov    %eax,(%esp)
085ac3f3 +0x773:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
085ac3f8 +0x778:  mov    -0x1c(%ebp),%ebx
085ac3fb +0x77b:  jmp    085ac585 <+0x905>
085ac400 +0x780:  mov    0xc(%ebp),%eax
085ac403 +0x783:  mov    %eax,(%esp)
085ac406 +0x786:  call   080fdcf0 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1c
085ac40b +0x78b:  cmp    $0x78,%eax
085ac40e +0x78e:  je     085ac420 <+0x7a0>
085ac410 +0x790:  mov    0xc(%ebp),%eax
085ac413 +0x793:  mov    %eax,(%esp)
085ac416 +0x796:  call   080fdcf0 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1c
085ac41b +0x79b:  cmp    $0x79,%eax
085ac41e +0x79e:  jne    085ac427 <+0x7a7>
085ac420 +0x7a0:  mov    $0x1,%eax
085ac425 +0x7a5:  jmp    085ac42c <+0x7ac>
085ac427 +0x7a7:  mov    $0x0,%eax
085ac42c +0x7ac:  test   %al,%al
085ac42e +0x7ae:  je     085ac563 <+0x8e3>
085ac434 +0x7b4:  mov    0x8(%ebp),%eax
085ac437 +0x7b7:  mov    %eax,(%esp)
085ac43a +0x7ba:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
085ac43f +0x7bf:  cmp    $0x1,%eax
085ac442 +0x7c2:  jg     085ac44a <+0x7ca>
085ac444 +0x7c4:  cmpl   $0x1,0x10(%ebp)
085ac448 +0x7c8:  jne    085ac451 <+0x7d1>
085ac44a +0x7ca:  mov    $0x1,%eax
085ac44f +0x7cf:  jmp    085ac456 <+0x7d6>
085ac451 +0x7d1:  mov    $0x0,%eax
085ac456 +0x7d6:  test   %al,%al
085ac458 +0x7d8:  je     085ac563 <+0x8e3>
085ac45e +0x7de:  movl   $0x0,-0xc(%ebp)
085ac465 +0x7e5:  jmp    085ac4dd <+0x85d>
085ac467 +0x7e7:  mov    -0xc(%ebp),%eax
085ac46a +0x7ea:  mov    %eax,0x4(%esp)
085ac46e +0x7ee:  mov    0x8(%ebp),%eax
085ac471 +0x7f1:  mov    %eax,(%esp)
085ac474 +0x7f4:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
085ac479 +0x7f9:  xor    $0x1,%eax
085ac47c +0x7fc:  test   %al,%al
085ac47e +0x7fe:  jne    085ac4d8 <+0x858>
085ac480 +0x800:  mov    0x10(%ebp),%ebx
085ac483 +0x803:  mov    -0xc(%ebp),%edx
085ac486 +0x806:  mov    0x8(%ebp),%ecx
085ac489 +0x809:  mov    %edx,%eax
085ac48b +0x80b:  add    %eax,%eax
085ac48d +0x80d:  add    %edx,%eax
085ac48f +0x80f:  shl    $0x3,%eax
085ac492 +0x812:  lea    (%ecx,%eax,1),%eax
085ac495 +0x815:  add    $0x78,%eax
085ac498 +0x818:  mov    (%eax),%eax
085ac49a +0x81a:  mov    %eax,(%esp)
085ac49d +0x81d:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
085ac4a2 +0x822:  mov    %ebx,0x18(%esp)
085ac4a6 +0x826:  mov    %eax,0x14(%esp)
085ac4aa +0x82a:  movl   $"TOURNAMENT_DUNGEON_ERROR_LOG : CHARAC_NO (%d) MODE (%d)",0x10(%esp)
085ac4b2 +0x832:  movl   $0x25eb,0xc(%esp)
085ac4ba +0x83a:  movl   $&_ZZN6CParty26checkInoutConditionDungeonEPK8CDungeon17ENUM_DUNGEON_MODE14ENUM_CMDPACKETE19__PRETTY_FUNCTION__,0x8(%esp)
085ac4c2 +0x842:  movl   $"party.cpp",0x4(%esp)
085ac4ca +0x84a:  movl   $0x1,(%esp)
085ac4d1 +0x851:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
085ac4d6 +0x856:  jmp    085ac4d9 <+0x859>
085ac4d8 +0x858:  nop
085ac4d9 +0x859:  addl   $0x1,-0xc(%ebp)
085ac4dd +0x85d:  cmpl   $0x3,-0xc(%ebp)
085ac4e1 +0x861:  setle  %al
085ac4e4 +0x864:  test   %al,%al
085ac4e6 +0x866:  jne    085ac467 <+0x7e7>
085ac4ec +0x86c:  lea    -0x28(%ebp),%eax
085ac4ef +0x86f:  mov    %eax,(%esp)
085ac4f2 +0x872:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
085ac4f7 +0x877:  mov    0x14(%ebp),%eax
085ac4fa +0x87a:  mov    %eax,0x8(%esp)
085ac4fe +0x87e:  movl   $0x1,0x4(%esp)
085ac506 +0x886:  lea    -0x28(%ebp),%eax
085ac509 +0x889:  mov    %eax,(%esp)
085ac50c +0x88c:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085ac511 +0x891:  movl   $0x0,0x4(%esp)
085ac519 +0x899:  lea    -0x28(%ebp),%eax
085ac51c +0x89c:  mov    %eax,(%esp)
085ac51f +0x89f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085ac524 +0x8a4:  movl   $0xf3,0x4(%esp)
085ac52c +0x8ac:  lea    -0x28(%ebp),%eax
085ac52f +0x8af:  mov    %eax,(%esp)
085ac532 +0x8b2:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085ac537 +0x8b7:  movl   $0x1,0x4(%esp)
085ac53f +0x8bf:  lea    -0x28(%ebp),%eax
085ac542 +0x8c2:  mov    %eax,(%esp)
085ac545 +0x8c5:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085ac54a +0x8ca:  lea    -0x28(%ebp),%eax
085ac54d +0x8cd:  mov    %eax,0x4(%esp)
085ac551 +0x8d1:  mov    0x8(%ebp),%eax
085ac554 +0x8d4:  mov    %eax,(%esp)
085ac557 +0x8d7:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
085ac55c +0x8dc:  mov    $0x1,%ebx
085ac561 +0x8e1:  jmp    085ac585 <+0x905>
085ac563 +0x8e3:  mov    $0x0,%ebx
085ac568 +0x8e8:  jmp    085ac585 <+0x905>
085ac56a +0x8ea:  mov    %edx,%ebx
085ac56c +0x8ec:  mov    %eax,%esi
085ac56e +0x8ee:  lea    -0x28(%ebp),%eax
085ac571 +0x8f1:  mov    %eax,(%esp)
085ac574 +0x8f4:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085ac579 +0x8f9:  mov    %esi,%eax
085ac57b +0x8fb:  mov    %ebx,%edx
085ac57d +0x8fd:  mov    %eax,(%esp)
085ac580 +0x900:  call   08ae3750 <_Unwind_Resume>
085ac585 +0x905:  lea    -0x28(%ebp),%eax
085ac588 +0x908:  mov    %eax,(%esp)
085ac58b +0x90b:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085ac590 +0x910:  mov    %ebx,%eax
085ac592 +0x912:  add    $0x160,%esp
085ac598 +0x918:  pop    %ebx
085ac599 +0x919:  pop    %esi
085ac59a +0x91a:  pop    %ebp
085ac59b +0x91b:  ret
```

## 反编译 C

```c
// CParty::checkInoutConditionDungeon @ 0x85abc80

/* CParty::checkInoutConditionDungeon(CDungeon const*, ENUM_DUNGEON_MODE, ENUM_CMDPACKET) */

int __thiscall
CParty::checkInoutConditionDungeon(CParty *this,CDungeon *param_1,int param_3,int param_4)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  Inven_Item *this_00;
  int iVar4;
  Inven_Item local_144 [244];
  PacketGuard local_50 [12];
  int local_44;
  int local_40 [4];
  byte local_2d;
  PacketGuard local_2c [12];
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  if (param_1 == (CDungeon *)0x0) {
    return 1;
  }
  PacketGuard::PacketGuard(local_2c);
  local_2d = 0;
  this_00 = local_144;
  for (iVar4 = 3; iVar4 != -1; iVar4 = iVar4 + -1) {
    Inven_Item::Inven_Item(this_00);
    this_00 = this_00 + 0x3d;
  }
  memset(local_144,0,0xf4);
  memset(local_40,0,0x10);
  if (param_4 == 0x1bc) {
    for (local_1c = 0; local_1c < 4; local_1c = local_1c + 1) {
                    /* try { // try from 085abd2d to 085abf55 has its CatchHandler @ 085ac56a */
      checkValidUser(this,local_1c);
    }
    for (local_18 = 0; local_18 < 4; local_18 = local_18 + 1) {
      cVar2 = checkValidUser(this,local_18);
      if ((cVar2 == '\x01') &&
         (cVar2 = CUserCharacInfo::getCurCharacStamina
                            (*(CUserCharacInfo **)(this + local_18 * 0x18 + 0x78)), cVar2 != 'd')) {
        InterfacePacketBuf::clear((InterfacePacketBuf *)local_2c);
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_2c,1,0x1bc);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,0);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,0xea);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,(uint)local_2d);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_2c,true);
        send_to_party(this,local_2c);
        iVar4 = 0xea;
        goto LAB_085ac585;
      }
    }
  }
  cVar2 = CheckEnterAncientDungeon(this,param_1,&local_2d,local_144,local_40);
  if (cVar2 != '\x01') {
    InterfacePacketBuf::clear((InterfacePacketBuf *)local_2c);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_2c,1,param_4);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,0x11);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,(uint)local_2d);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_2c,true);
    send_to_party(this,local_2c);
    iVar4 = 0x11;
    goto LAB_085ac585;
  }
  iVar4 = CDungeon::get_index(param_1);
  if ((iVar4 != 0) &&
     (cVar2 = UseAncientDungeonItems(this,param_1,local_144,local_40), cVar2 != '\x01')) {
    PacketGuard::PacketGuard(local_50);
                    /* try { // try from 085abf6c to 085abfbb has its CatchHandler @ 085abfd1 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_50,1,0x10);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,0);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_50,1);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_50,true);
    send_to_party(this,local_50);
                    /* try { // try from 085abfc7 to 085abfcb has its CatchHandler @ 085ac56a */
    PacketGuard::~PacketGuard(local_50);
    iVar4 = 0x11;
    goto LAB_085ac585;
  }
  cVar2 = CDungeon::get_dimension_possible(param_1);
  if ('\0' < cVar2) {
    local_2d = 0;
                    /* try { // try from 085ac021 to 085ac55b has its CatchHandler @ 085ac56a */
    local_14 = CheckEnterDimensionDungeon(this,param_1,&local_2d,true);
    if (local_14 == 0xac) {
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_2c);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_2c,1,param_4);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,0xac);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,(uint)local_2d);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_2c,true);
      send_to_party(this,local_2c);
      iVar4 = 0xac;
      goto LAB_085ac585;
    }
    if (local_14 == 0xad) {
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_2c);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_2c,1,param_4);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,0xad);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,(uint)local_2d);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_2c,true);
      send_to_party(this,local_2c);
      iVar4 = 0xad;
      goto LAB_085ac585;
    }
    if (local_14 == 0xab) {
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_2c);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_2c,1,param_4);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,0xab);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_2c,true);
      send_to_party(this,local_2c);
      iVar4 = 0xab;
      goto LAB_085ac585;
    }
    cVar2 = setStandardDimensionLevel((CDungeon *)this);
    if (cVar2 != '\x01') {
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_2c);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_2c,1,param_4);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,0xab);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_2c,true);
      send_to_party(this,local_2c);
      iVar4 = 0xab;
      goto LAB_085ac585;
    }
  }
  local_20 = 0;
  local_44 = 0;
  if ((param_3 != 1) && (local_20 = check_dungeon_start(this,param_1,&local_44), local_20 != 0)) {
    if (0xf4 < local_20) {
      if (local_20 < 0xf8) {
        if (0xf5 < local_20) goto LAB_085ac389;
      }
      else if (local_20 != 0xf8) goto LAB_085ac400;
LAB_085ac300:
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_2c);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_2c,1,param_4);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,local_20);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,local_44);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_2c,true);
      send_to_party(this,local_2c);
      iVar4 = local_20;
      goto LAB_085ac585;
    }
    if (0xf2 < local_20) {
LAB_085ac389:
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_2c);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_2c,1,param_4);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,local_20);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_2c,true);
      send_to_party(this,local_2c);
      iVar4 = local_20;
      goto LAB_085ac585;
    }
    if ((local_20 == 10) || (local_20 == 0x5f)) goto LAB_085ac300;
  }
LAB_085ac400:
  iVar4 = CDungeon::get_index(param_1);
  if ((iVar4 == 0x78) || (iVar4 = CDungeon::get_index(param_1), iVar4 == 0x79)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    iVar4 = get_member_count(this);
    if ((iVar4 < 2) && (param_3 != 1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
        cVar2 = _checkValidUser(this,local_10);
        if (cVar2 == '\x01') {
          uVar3 = CUserCharacInfo::getCurCharacNo
                            (*(CUserCharacInfo **)(this + local_10 * 0x18 + 0x78));
          LogManager::logFormat
                    (1,"party.cpp",
                     "ENUM_ERROR CParty::checkInoutConditionDungeon(const CDungeon*, ENUM_DUNGEON_MODE, ENUM_CMDPACKET)"
                     ,0x25eb,"TOURNAMENT_DUNGEON_ERROR_LOG : CHARAC_NO (%d) MODE (%d)",uVar3,param_3
                    );
        }
      }
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_2c);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_2c,1,param_4);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,0xf3);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_2c,true);
      send_to_party(this,local_2c);
      iVar4 = 1;
      goto LAB_085ac585;
    }
  }
  iVar4 = 0;
LAB_085ac585:
  PacketGuard::~PacketGuard(local_2c);
  return iVar4;
}
```
