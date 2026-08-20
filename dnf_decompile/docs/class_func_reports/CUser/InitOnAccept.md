# InitOnAccept

`_ZN5CUser12InitOnAcceptEi`

`CUser::InitOnAccept(int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x086493c8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086493c8  _ZN5CUser12InitOnAcceptEi
#           CUser::InitOnAccept(int)
# range [0x086493c8, 0x08649abf]
086493c8 +0x000:  push   %ebp
086493c9 +0x001:  mov    %esp,%ebp
086493cb +0x003:  push   %esi
086493cc +0x004:  push   %ebx
086493cd +0x005:  sub    $0x430,%esp
086493d3 +0x00b:  mov    0x8(%ebp),%eax
086493d6 +0x00e:  lea    0xe0(%eax),%edx
086493dc +0x014:  movl   $0x0,0x8(%esp)
086493e4 +0x01c:  mov    0xc(%ebp),%eax
086493e7 +0x01f:  mov    %eax,0x4(%esp)
086493eb +0x023:  mov    %edx,(%esp)
086493ee +0x026:  call   08698976 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x51cb>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x51cb
086493f3 +0x02b:  mov    0x8(%ebp),%eax
086493f6 +0x02e:  movl   $0x1,0x8cfc4(%eax)
08649400 +0x038:  mov    0x8(%ebp),%eax
08649403 +0x03b:  movl   $0x0,0x796fc(%eax)
0864940d +0x045:  mov    0x8(%ebp),%eax
08649410 +0x048:  add    $0x711f4,%eax
08649415 +0x04d:  mov    %eax,(%esp)
08649418 +0x050:  call   08696de4 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3639>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3639
0864941d +0x055:  mov    0x8(%ebp),%eax
08649420 +0x058:  add    $0xe0,%eax
08649425 +0x05d:  mov    %eax,(%esp)
08649428 +0x060:  call   086989ca <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x521f>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x521f
0864942d +0x065:  mov    0x8(%ebp),%eax
08649430 +0x068:  movl   $0x0,0x8d10c(%eax)
0864943a +0x072:  mov    0x8(%ebp),%eax
0864943d +0x075:  movl   $0x0,0x703a4(%eax)
08649447 +0x07f:  mov    0x8(%ebp),%eax
0864944a +0x082:  movb   $0x0,0x70390(%eax)
08649451 +0x089:  mov    0x8(%ebp),%eax
08649454 +0x08c:  movb   $0x0,0x703a8(%eax)
0864945b +0x093:  mov    0x8(%ebp),%eax
0864945e +0x096:  movl   $0x0,0x703ac(%eax)
08649468 +0x0a0:  mov    0x8(%ebp),%eax
0864946b +0x0a3:  movl   $0x0,0x703b0(%eax)
08649475 +0x0ad:  mov    0x8(%ebp),%eax
08649478 +0x0b0:  movl   $0x0,0x703b4(%eax)
08649482 +0x0ba:  mov    0x8(%ebp),%eax
08649485 +0x0bd:  movl   $0x0,0x703b8(%eax)
0864948f +0x0c7:  mov    0x8(%ebp),%eax
08649492 +0x0ca:  movb   $0x0,0x703c0(%eax)
08649499 +0x0d1:  mov    0x8(%ebp),%eax
0864949c +0x0d4:  movb   $0x0,0x703c1(%eax)
086494a3 +0x0db:  mov    0x8(%ebp),%eax
086494a6 +0x0de:  add    $0x703c4,%eax
086494ab +0x0e3:  mov    %eax,(%esp)
086494ae +0x0e6:  call   0831d454 <_GLOBAL__I__ZN18break_away_prevent23CBreakAwayPreventSystemC2Ev+0x20d>  ; global constructors keyed to break_away_prevent::CBreakAwayPreventSystem::CBreakAwayPreventSystem()+0x20d
086494b3 +0x0eb:  mov    0x8(%ebp),%eax
086494b6 +0x0ee:  movl   $0x0,0x703bc(%eax)
086494c0 +0x0f8:  mov    0x8(%ebp),%eax
086494c3 +0x0fb:  movb   $0x0,0x703d8(%eax)
086494ca +0x102:  mov    0x8(%ebp),%eax
086494cd +0x105:  movb   $0x0,0x703d9(%eax)
086494d4 +0x10c:  mov    0x8(%ebp),%eax
086494d7 +0x10f:  movb   $0xff,0x703da(%eax)
086494de +0x116:  mov    0x8(%ebp),%eax
086494e1 +0x119:  add    $0x703db,%eax
086494e6 +0x11e:  movl   $0xc8,0x8(%esp)
086494ee +0x126:  movl   $0x0,0x4(%esp)
086494f6 +0x12e:  mov    %eax,(%esp)
086494f9 +0x131:  call   0807dcc0 <_init+0x5b8>
086494fe +0x136:  mov    0x8(%ebp),%eax
08649501 +0x139:  movl   $0x0,0x71b98(%eax)
0864950b +0x143:  call   08697838 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x408d>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x408d
08649510 +0x148:  mov    0x8(%ebp),%edx
08649513 +0x14b:  mov    %eax,0x71b98(%edx)
08649519 +0x151:  mov    0x8(%ebp),%eax
0864951c +0x154:  mov    0x71b98(%eax),%eax
08649522 +0x15a:  mov    %eax,(%esp)
08649525 +0x15d:  call   08551d98 <_ZN8WongWork8CMailBox4InitEv>  ; WongWork::CMailBox::Init()
0864952a +0x162:  lea    -0x20(%ebp),%eax
0864952d +0x165:  mov    %eax,(%esp)
08649530 +0x168:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08649535 +0x16d:  movl   $0x1,0x8(%esp)
0864953d +0x175:  movl   $0x0,0x4(%esp)
08649545 +0x17d:  lea    -0x20(%ebp),%eax
08649548 +0x180:  mov    %eax,(%esp)
0864954b +0x183:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08649550 +0x188:  lea    -0x420(%ebp),%ebx
08649556 +0x18e:  call   082a713a <_GLOBAL__I__ZN4CLog5this_E+0x3561>  ; global constructors keyed to CLog::this_+0x3561
0864955b +0x193:  mov    %ebx,0x4(%esp)
0864955f +0x197:  mov    %eax,(%esp)
08649562 +0x19a:  call   080975de <_ZN6Cipher14GetOriginalKeyEPh>  ; Cipher::GetOriginalKey(unsigned char*)
08649567 +0x19f:  call   082a713a <_GLOBAL__I__ZN4CLog5this_E+0x3561>  ; global constructors keyed to CLog::this_+0x3561
0864956c +0x1a4:  mov    %eax,(%esp)
0864956f +0x1a7:  call   080975d4 <_ZNK6Cipher17GetTotalKeyLengthEv>  ; Cipher::GetTotalKeyLength() const
08649574 +0x1ac:  mov    %eax,-0x14(%ebp)
08649577 +0x1af:  mov    -0x14(%ebp),%eax
0864957a +0x1b2:  mov    %eax,0x8(%esp)
0864957e +0x1b6:  lea    -0x420(%ebp),%eax
08649584 +0x1bc:  mov    %eax,0x4(%esp)
08649588 +0x1c0:  lea    -0x20(%ebp),%eax
0864958b +0x1c3:  mov    %eax,(%esp)
0864958e +0x1c6:  call   0811df08 <_GLOBAL__I__ZN15CItemDictionaryC2Ev+0x48>  ; global constructors keyed to CItemDictionary::CItemDictionary()+0x48
08649593 +0x1cb:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08649598 +0x1d0:  mov    %eax,(%esp)
0864959b +0x1d3:  call   082a6d5c <_GLOBAL__I__ZN4CLog5this_E+0x3183>  ; global constructors keyed to CLog::this_+0x3183
086495a0 +0x1d8:  mov    %eax,(%esp)
086495a3 +0x1db:  call   0807e3b0 <_init+0xca8>
086495a8 +0x1e0:  mov    %eax,0x4(%esp)
086495ac +0x1e4:  lea    -0x20(%ebp),%eax
086495af +0x1e7:  mov    %eax,(%esp)
086495b2 +0x1ea:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
086495b7 +0x1ef:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
086495bc +0x1f4:  mov    %eax,(%esp)
086495bf +0x1f7:  call   082a6d5c <_GLOBAL__I__ZN4CLog5this_E+0x3183>  ; global constructors keyed to CLog::this_+0x3183
086495c4 +0x1fc:  mov    %eax,(%esp)
086495c7 +0x1ff:  call   0807e3b0 <_init+0xca8>
086495cc +0x204:  mov    %eax,%ebx
086495ce +0x206:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
086495d3 +0x20b:  mov    %eax,(%esp)
086495d6 +0x20e:  call   082a6d5c <_GLOBAL__I__ZN4CLog5this_E+0x3183>  ; global constructors keyed to CLog::this_+0x3183
086495db +0x213:  mov    %ebx,0x8(%esp)
086495df +0x217:  mov    %eax,0x4(%esp)
086495e3 +0x21b:  lea    -0x20(%ebp),%eax
086495e6 +0x21e:  mov    %eax,(%esp)
086495e9 +0x221:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
086495ee +0x226:  call   086b1d25 <_Z18get_seed_from_datev>  ; get_seed_from_date()
086495f3 +0x22b:  mov    0x8(%ebp),%edx
086495f6 +0x22e:  mov    %eax,0x711e8(%edx)
086495fc +0x234:  mov    0x8(%ebp),%eax
086495ff +0x237:  mov    0x711e8(%eax),%eax
08649605 +0x23d:  mov    %eax,0x4(%esp)
08649609 +0x241:  lea    -0x20(%ebp),%eax
0864960c +0x244:  mov    %eax,(%esp)
0864960f +0x247:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08649614 +0x24c:  movl   $0x0,(%esp)
0864961b +0x253:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
08649620 +0x258:  mov    %eax,%edx
08649622 +0x25a:  mov    0x8(%ebp),%eax
08649625 +0x25d:  mov    %edx,0x796e0(%eax)
0864962b +0x263:  mov    0x8(%ebp),%eax
0864962e +0x266:  mov    0x796e0(%eax),%eax
08649634 +0x26c:  mov    %eax,0x4(%esp)
08649638 +0x270:  lea    -0x20(%ebp),%eax
0864963b +0x273:  mov    %eax,(%esp)
0864963e +0x276:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08649643 +0x27b:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08649648 +0x280:  mov    0x378(%eax),%eax
0864964e +0x286:  mov    %eax,0x4(%esp)
08649652 +0x28a:  lea    -0x20(%ebp),%eax
08649655 +0x28d:  mov    %eax,(%esp)
08649658 +0x290:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0864965d +0x295:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08649662 +0x29a:  mov    0x1b0(%eax),%eax
08649668 +0x2a0:  mov    %eax,0x4(%esp)
0864966c +0x2a4:  lea    -0x20(%ebp),%eax
0864966f +0x2a7:  mov    %eax,(%esp)
08649672 +0x2aa:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08649677 +0x2af:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0864967c +0x2b4:  mov    0x1a8(%eax),%eax
08649682 +0x2ba:  mov    %eax,0x4(%esp)
08649686 +0x2be:  lea    -0x20(%ebp),%eax
08649689 +0x2c1:  mov    %eax,(%esp)
0864968c +0x2c4:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08649691 +0x2c9:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08649698 +0x2d0:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0864969d +0x2d5:  mov    %eax,0x4(%esp)
086496a1 +0x2d9:  lea    -0x20(%ebp),%eax
086496a4 +0x2dc:  mov    %eax,(%esp)
086496a7 +0x2df:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
086496ac +0x2e4:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
086496b1 +0x2e9:  add    $0x360,%eax
086496b6 +0x2ee:  mov    %eax,(%esp)
086496b9 +0x2f1:  call   082cbdc2 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x1dcbd>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x1dcbd
086496be +0x2f6:  mov    %eax,-0x10(%ebp)
086496c1 +0x2f9:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
086496c6 +0x2fe:  add    $0x360,%eax
086496cb +0x303:  mov    %eax,(%esp)
086496ce +0x306:  call   082cbdc2 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x1dcbd>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x1dcbd
086496d3 +0x30b:  mov    %eax,0x4(%esp)
086496d7 +0x30f:  lea    -0x20(%ebp),%eax
086496da +0x312:  mov    %eax,(%esp)
086496dd +0x315:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
086496e2 +0x31a:  cmpl   $0x0,-0x10(%ebp)
086496e6 +0x31e:  je     086497bc <+0x3f4>
086496ec +0x324:  movl   $0x0,-0xc(%ebp)
086496f3 +0x32b:  jmp    08649759 <+0x391>
086496f5 +0x32d:  mov    -0xc(%ebp),%ebx
086496f8 +0x330:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
086496fd +0x335:  add    $0x360,%eax
08649702 +0x33a:  mov    %ebx,0x4(%esp)
08649706 +0x33e:  mov    %eax,(%esp)
08649709 +0x341:  call   08698a46 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x529b>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x529b
0864970e +0x346:  mov    %eax,(%esp)
08649711 +0x349:  call   0807e3b0 <_init+0xca8>
08649716 +0x34e:  mov    %eax,0x4(%esp)
0864971a +0x352:  lea    -0x20(%ebp),%eax
0864971d +0x355:  mov    %eax,(%esp)
08649720 +0x358:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08649725 +0x35d:  mov    -0xc(%ebp),%ebx
08649728 +0x360:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0864972d +0x365:  add    $0x360,%eax
08649732 +0x36a:  mov    %ebx,0x4(%esp)
08649736 +0x36e:  mov    %eax,(%esp)
08649739 +0x371:  call   08698a46 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x529b>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x529b
0864973e +0x376:  movl   $0x10,0x8(%esp)
08649746 +0x37e:  mov    %eax,0x4(%esp)
0864974a +0x382:  lea    -0x20(%ebp),%eax
0864974d +0x385:  mov    %eax,(%esp)
08649750 +0x388:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
08649755 +0x38d:  addl   $0x1,-0xc(%ebp)
08649759 +0x391:  mov    -0xc(%ebp),%eax
0864975c +0x394:  cmp    -0x10(%ebp),%eax
0864975f +0x397:  setl   %al
08649762 +0x39a:  test   %al,%al
08649764 +0x39c:  jne    086496f5 <+0x32d>
08649766 +0x39e:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0864976b +0x3a3:  add    $0x36c,%eax
08649770 +0x3a8:  movl   $0x0,0x4(%esp)
08649778 +0x3b0:  mov    %eax,(%esp)
0864977b +0x3b3:  call   0808e1dc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x4c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x4c
08649780 +0x3b8:  mov    (%eax),%eax
08649782 +0x3ba:  mov    %eax,0x4(%esp)
08649786 +0x3be:  lea    -0x20(%ebp),%eax
08649789 +0x3c1:  mov    %eax,(%esp)
0864978c +0x3c4:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08649791 +0x3c9:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08649796 +0x3ce:  add    $0x36c,%eax
0864979b +0x3d3:  movl   $0x1,0x4(%esp)
086497a3 +0x3db:  mov    %eax,(%esp)
086497a6 +0x3de:  call   0808e1dc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x4c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x4c
086497ab +0x3e3:  mov    (%eax),%eax
086497ad +0x3e5:  mov    %eax,0x4(%esp)
086497b1 +0x3e9:  lea    -0x20(%ebp),%eax
086497b4 +0x3ec:  mov    %eax,(%esp)
086497b7 +0x3ef:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
086497bc +0x3f4:  movl   $0x25e,0x4(%esp)
086497c4 +0x3fc:  lea    -0x20(%ebp),%eax
086497c7 +0x3ff:  mov    %eax,(%esp)
086497ca +0x402:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
086497cf +0x407:  movl   $0x232,0x4(%esp)
086497d7 +0x40f:  lea    -0x20(%ebp),%eax
086497da +0x412:  mov    %eax,(%esp)
086497dd +0x415:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
086497e2 +0x41a:  movl   $0x1,0x4(%esp)
086497ea +0x422:  lea    -0x20(%ebp),%eax
086497ed +0x425:  mov    %eax,(%esp)
086497f0 +0x428:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086497f5 +0x42d:  lea    -0x20(%ebp),%eax
086497f8 +0x430:  mov    %eax,0x4(%esp)
086497fc +0x434:  mov    0x8(%ebp),%eax
086497ff +0x437:  mov    %eax,(%esp)
08649802 +0x43a:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08649807 +0x43f:  mov    0x8(%ebp),%eax
0864980a +0x442:  mov    %eax,(%esp)
0864980d +0x445:  call   0867f1fe <_ZN5CUser21StartRecvEventWaitingEv>  ; CUser::StartRecvEventWaiting()
08649812 +0x44a:  movl   $0x64,0x4(%esp)
0864981a +0x452:  mov    0x8(%ebp),%eax
0864981d +0x455:  mov    %eax,(%esp)
08649820 +0x458:  call   0828715c <_GLOBAL__I__ZN16Secu_DataControl14SetControlDataEP5CUserhtt+0x9a>  ; global constructors keyed to Secu_DataControl::SetControlData(CUser*, unsigned char, unsigned short, unsigned short)+0x9a
08649825 +0x45d:  mov    0x8(%ebp),%eax
08649828 +0x460:  movl   $0x0,0x79628(%eax)
08649832 +0x46a:  mov    0x8(%ebp),%eax
08649835 +0x46d:  movl   $0x0,0x8e0f8(%eax)
0864983f +0x477:  mov    0x8(%ebp),%eax
08649842 +0x47a:  movl   $0xffffffff,0x8e0fc(%eax)
0864984c +0x484:  mov    0x8(%ebp),%eax
0864984f +0x487:  movb   $0x0,0x8e100(%eax)
08649856 +0x48e:  movl   $0x4,(%esp)
0864985d +0x495:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08649862 +0x49a:  mov    %eax,%ebx
08649864 +0x49c:  mov    %ebx,%eax
08649866 +0x49e:  mov    %eax,(%esp)
08649869 +0x4a1:  call   086978ba <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x410f>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x410f
0864986e +0x4a6:  mov    %ebx,%edx
08649870 +0x4a8:  mov    0x8(%ebp),%eax
08649873 +0x4ab:  mov    %edx,0x8e948(%eax)
08649879 +0x4b1:  mov    0x8(%ebp),%eax
0864987c +0x4b4:  mov    0x8e948(%eax),%eax
08649882 +0x4ba:  mov    %eax,(%esp)
08649885 +0x4bd:  call   0827b3f4 <_ZN15cSecuUserAction4InitEv>  ; cSecuUserAction::Init()
0864988a +0x4c2:  mov    0x8(%ebp),%eax
0864988d +0x4c5:  movb   $0x0,0x8e3ec(%eax)
08649894 +0x4cc:  mov    0x8(%ebp),%eax
08649897 +0x4cf:  movb   $0x1,0x8e3ed(%eax)
0864989e +0x4d6:  mov    0x8(%ebp),%eax
086498a1 +0x4d9:  add    $0x8e101,%eax
086498a6 +0x4de:  movl   $0x145,0x8(%esp)
086498ae +0x4e6:  movl   $0x0,0x4(%esp)
086498b6 +0x4ee:  mov    %eax,(%esp)
086498b9 +0x4f1:  call   0807dcc0 <_init+0x5b8>
086498be +0x4f6:  mov    0x8(%ebp),%eax
086498c1 +0x4f9:  add    $0x8e246,%eax
086498c6 +0x4fe:  movl   $0x1a6,0x8(%esp)
086498ce +0x506:  movl   $0x0,0x4(%esp)
086498d6 +0x50e:  mov    %eax,(%esp)
086498d9 +0x511:  call   0807dcc0 <_init+0x5b8>
086498de +0x516:  mov    0x8(%ebp),%eax
086498e1 +0x519:  add    $0x8e3f0,%eax
086498e6 +0x51e:  mov    %eax,(%esp)
086498e9 +0x521:  call   08694fa0 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x17f5>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x17f5
086498ee +0x526:  mov    0x8(%ebp),%eax
086498f1 +0x529:  movb   $0x0,0x7962d(%eax)
086498f8 +0x530:  mov    0x8(%ebp),%eax
086498fb +0x533:  mov    %eax,(%esp)
086498fe +0x536:  call   0822fd20 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53ca>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53ca
08649903 +0x53b:  mov    %eax,(%esp)
08649906 +0x53e:  call   085fdd68 <_ZN8WongWork13CSecurityCard4initEv>  ; WongWork::CSecurityCard::init()
0864990b +0x543:  mov    0x8(%ebp),%eax
0864990e +0x546:  mov    %eax,(%esp)
08649911 +0x549:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
08649916 +0x54e:  mov    %eax,(%esp)
08649919 +0x551:  call   0859957c <_ZN8Sanicova4CPad4initEv>  ; Sanicova::CPad::init()
0864991e +0x556:  mov    0x8(%ebp),%eax
08649921 +0x559:  movl   $0x0,0x8e40c(%eax)
0864992b +0x563:  mov    $&_ZGVZN5CUser12InitOnAcceptEiE19gameMasterCharacter,%eax
08649930 +0x568:  movzbl (%eax),%eax
08649933 +0x56b:  test   %al,%al
08649935 +0x56d:  jne    08649964 <+0x59c>
08649937 +0x56f:  movl   $&_ZGVZN5CUser12InitOnAcceptEiE19gameMasterCharacter,(%esp)
0864993e +0x576:  call   08725330 <__cxa_guard_acquire>
08649943 +0x57b:  test   %eax,%eax
08649945 +0x57d:  setne  %al
08649948 +0x580:  test   %al,%al
0864994a +0x582:  je     08649964 <+0x59c>
0864994c +0x584:  movl   $&_ZZN5CUser12InitOnAcceptEiE19gameMasterCharacter,(%esp)
08649953 +0x58b:  call   084b4426 <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x4d9>  ; global constructors keyed to game_master::CMacro::Reset()+0x4d9
08649958 +0x590:  movl   $&_ZGVZN5CUser12InitOnAcceptEiE19gameMasterCharacter,(%esp)
0864995f +0x597:  call   08725250 <__cxa_guard_release>
08649964 +0x59c:  mov    0x8(%ebp),%eax
08649967 +0x59f:  movl   $&_ZZN5CUser12InitOnAcceptEiE19gameMasterCharacter,0x7964c(%eax)
08649971 +0x5a9:  mov    0x8(%ebp),%eax
08649974 +0x5ac:  movl   $0x0,0x8e94c(%eax)
0864997e +0x5b6:  mov    0x8(%ebp),%eax
08649981 +0x5b9:  movb   $0x0,0x8e934(%eax)
08649988 +0x5c0:  mov    0x8(%ebp),%eax
0864998b +0x5c3:  movb   $0x0,0x8e950(%eax)
08649992 +0x5ca:  mov    0x8(%ebp),%eax
08649995 +0x5cd:  movb   $0x0,0x8e951(%eax)
0864999c +0x5d4:  mov    0x8(%ebp),%eax
0864999f +0x5d7:  movb   $0x0,0x8e97c(%eax)
086499a6 +0x5de:  mov    0x8(%ebp),%eax
086499a9 +0x5e1:  movb   $0x0,0x8e97d(%eax)
086499b0 +0x5e8:  mov    0x8(%ebp),%eax
086499b3 +0x5eb:  mov    %eax,(%esp)
086499b6 +0x5ee:  call   08230800 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5eaa>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5eaa
086499bb +0x5f3:  mov    0x8(%ebp),%edx
086499be +0x5f6:  mov    %edx,0x4(%esp)
086499c2 +0x5fa:  mov    %eax,(%esp)
086499c5 +0x5fd:  call   084b91e8 <_ZN8XNuclear6CHades4InitEP5CUser>  ; XNuclear::CHades::Init(CUser*)
086499ca +0x602:  mov    0x8(%ebp),%eax
086499cd +0x605:  lea    0x8e980(%eax),%edx
086499d3 +0x60b:  mov    0x8(%ebp),%eax
086499d6 +0x60e:  mov    %eax,0x4(%esp)
086499da +0x612:  mov    %edx,(%esp)
086499dd +0x615:  call   08287230 <_ZN16Secu_GoldControl4InitEP5CUser>  ; Secu_GoldControl::Init(CUser*)
086499e2 +0x61a:  mov    0x8(%ebp),%eax
086499e5 +0x61d:  lea    0x8ea68(%eax),%edx
086499eb +0x623:  mov    0x8(%ebp),%eax
086499ee +0x626:  mov    %eax,0x4(%esp)
086499f2 +0x62a:  mov    %edx,(%esp)
086499f5 +0x62d:  call   0827a7d0 <_ZN17Secu_HackLogCheck4InitEP5CUser>  ; Secu_HackLogCheck::Init(CUser*)
086499fa +0x632:  mov    0x8(%ebp),%eax
086499fd +0x635:  movw   $0x0,0x8e936(%eax)
08649a06 +0x63e:  mov    0x8(%ebp),%eax
08649a09 +0x641:  movl   $0x0,0x8e938(%eax)
08649a13 +0x64b:  mov    0x8(%ebp),%eax
08649a16 +0x64e:  movb   $0x0,0x8e944(%eax)
08649a1d +0x655:  mov    0x8(%ebp),%eax
08649a20 +0x658:  movb   $0x0,0x8eaf4(%eax)
08649a27 +0x65f:  mov    0x8(%ebp),%eax
08649a2a +0x662:  movl   $0x0,0x8eaf8(%eax)
08649a34 +0x66c:  mov    0x8(%ebp),%eax
08649a37 +0x66f:  movl   $0x0,0x8e090(%eax)
08649a41 +0x679:  mov    0x8(%ebp),%eax
08649a44 +0x67c:  movb   $0x0,0x8d24c(%eax)
08649a4b +0x683:  mov    0x8(%ebp),%eax
08649a4e +0x686:  lea    0x795e8(%eax),%edx
08649a54 +0x68c:  mov    0x8(%ebp),%eax
08649a57 +0x68f:  mov    %eax,0x4(%esp)
08649a5b +0x693:  mov    %edx,(%esp)
08649a5e +0x696:  call   08278a98 <_ZN19Secu_AccountHacking4initEP5CUser>  ; Secu_AccountHacking::init(CUser*)
08649a63 +0x69b:  mov    0x8(%ebp),%eax
08649a66 +0x69e:  movb   $0x0,0x70391(%eax)
08649a6d +0x6a5:  mov    0x8(%ebp),%eax
08649a70 +0x6a8:  add    $0x6ef92,%eax
08649a75 +0x6ad:  movl   $0x68,0x8(%esp)
08649a7d +0x6b5:  movl   $0x0,0x4(%esp)
08649a85 +0x6bd:  mov    %eax,(%esp)
08649a88 +0x6c0:  call   0807dcc0 <_init+0x5b8>
08649a8d +0x6c5:  mov    $0x1,%ebx
08649a92 +0x6ca:  lea    -0x20(%ebp),%eax
08649a95 +0x6cd:  mov    %eax,(%esp)
08649a98 +0x6d0:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08649a9d +0x6d5:  mov    %ebx,%eax
08649a9f +0x6d7:  add    $0x430,%esp
08649aa5 +0x6dd:  pop    %ebx
08649aa6 +0x6de:  pop    %esi
08649aa7 +0x6df:  pop    %ebp
08649aa8 +0x6e0:  ret
08649aa9 +0x6e1:  mov    %edx,%ebx
08649aab +0x6e3:  mov    %eax,%esi
08649aad +0x6e5:  lea    -0x20(%ebp),%eax
08649ab0 +0x6e8:  mov    %eax,(%esp)
08649ab3 +0x6eb:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08649ab8 +0x6f0:  mov    %esi,%eax
08649aba +0x6f2:  mov    %ebx,%edx
08649abc +0x6f4:  mov    %eax,(%esp)
08649abf +0x6f7:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// CUser::InitOnAccept @ 0x86493c8

/* CUser::InitOnAccept(int) */

undefined4 __thiscall CUser::InitOnAccept(CUser *this,int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  Cipher *pCVar3;
  CEnvironment *pCVar4;
  char *pcVar5;
  size_t sVar6;
  int iVar7;
  int *piVar8;
  cSecuUserAction *this_00;
  CSecurityCard *this_01;
  CPad *this_02;
  CHades *this_03;
  uchar local_424 [1024];
  PacketGuard local_24 [12];
  int local_18;
  int local_14;
  uint local_10;
  
  CNetwork<4096,450000>::set_socket((CNetwork<4096,450000> *)(this + 0xe0),param_1,false);
  *(undefined4 *)(this + 0x8cfc4) = 1;
  *(undefined4 *)(this + 0x796fc) = 0;
  CPacketVerifier::Init((CPacketVerifier *)(this + 0x711f4));
  CNetwork<4096,450000>::initNetworkBuffer((CNetwork<4096,450000> *)(this + 0xe0));
  *(undefined4 *)(this + 0x8d10c) = 0;
  *(undefined4 *)(this + 0x703a4) = 0;
  this[0x70390] = (CUser)0x0;
  this[0x703a8] = (CUser)0x0;
  *(undefined4 *)(this + 0x703ac) = 0;
  *(undefined4 *)(this + 0x703b0) = 0;
  *(undefined4 *)(this + 0x703b4) = 0;
  *(undefined4 *)(this + 0x703b8) = 0;
  this[0x703c0] = (CUser)0x0;
  this[0x703c1] = (CUser)0x0;
  STBreakAwayRewards::clear((STBreakAwayRewards *)(this + 0x703c4));
  *(undefined4 *)(this + 0x703bc) = 0;
  this[0x703d8] = (CUser)0x0;
  this[0x703d9] = (CUser)0x0;
  this[0x703da] = (CUser)0xff;
  memset(this + 0x703db,0,200);
  *(undefined4 *)(this + 0x71b98) = 0;
  uVar2 = WongWork::CMailBoxHelper::AssignMailBox();
  *(undefined4 *)(this + 0x71b98) = uVar2;
  WongWork::CMailBox::Init(*(CMailBox **)(this + 0x71b98));
  PacketGuard::PacketGuard(local_24);
                    /* try { // try from 0864954b to 08649a62 has its CatchHandler @ 08649aa9 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,0,1);
  pCVar3 = (Cipher *)G_Cipher();
  Cipher::GetOriginalKey(pCVar3,local_424);
  pCVar3 = (Cipher *)G_Cipher();
  local_18 = Cipher::GetTotalKeyLength(pCVar3);
  InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_24,(char *)local_424,local_18);
  pCVar4 = (CEnvironment *)G_CEnvironment();
  pcVar5 = (char *)CEnvironment::get_channel_name(pCVar4);
  sVar6 = strlen(pcVar5);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,sVar6);
  pCVar4 = (CEnvironment *)G_CEnvironment();
  pcVar5 = (char *)CEnvironment::get_channel_name(pCVar4);
  sVar6 = strlen(pcVar5);
  pCVar4 = (CEnvironment *)G_CEnvironment();
  pcVar5 = (char *)CEnvironment::get_channel_name(pCVar4);
  InterfacePacketBuf::put_str((InterfacePacketBuf *)local_24,pcVar5,sVar6);
  uVar2 = get_seed_from_date();
  *(undefined4 *)(this + 0x711e8) = uVar2;
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,*(int *)(this + 0x711e8));
  uVar2 = get_rand_int(0);
  *(undefined4 *)(this + 0x796e0) = uVar2;
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,*(int *)(this + 0x796e0));
  iVar7 = G_CEnvironment();
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,*(int *)(iVar7 + 0x378));
  iVar7 = G_CEnvironment();
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,*(int *)(iVar7 + 0x1b0));
  iVar7 = G_CEnvironment();
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,*(int *)(iVar7 + 0x1a8));
  iVar7 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,iVar7);
  iVar7 = G_CEnvironment();
  local_14 = std::vector<SK_IP,std::allocator<SK_IP>>::size
                       ((vector<SK_IP,std::allocator<SK_IP>> *)(iVar7 + 0x360));
  iVar7 = G_CEnvironment();
  iVar7 = std::vector<SK_IP,std::allocator<SK_IP>>::size
                    ((vector<SK_IP,std::allocator<SK_IP>> *)(iVar7 + 0x360));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,iVar7);
  if (local_14 != 0) {
    for (local_10 = 0; uVar1 = local_10, (int)local_10 < local_14; local_10 = local_10 + 1) {
      iVar7 = G_CEnvironment();
      pcVar5 = (char *)std::vector<SK_IP,std::allocator<SK_IP>>::operator[]
                                 ((vector<SK_IP,std::allocator<SK_IP>> *)(iVar7 + 0x360),uVar1);
      sVar6 = strlen(pcVar5);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,sVar6);
      uVar1 = local_10;
      iVar7 = G_CEnvironment();
      pcVar5 = (char *)std::vector<SK_IP,std::allocator<SK_IP>>::operator[]
                                 ((vector<SK_IP,std::allocator<SK_IP>> *)(iVar7 + 0x360),uVar1);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_24,pcVar5,0x10);
    }
    iVar7 = G_CEnvironment();
    piVar8 = (int *)std::vector<int,std::allocator<int>>::operator[]
                              ((vector<int,std::allocator<int>> *)(iVar7 + 0x36c),0);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,*piVar8);
    iVar7 = G_CEnvironment();
    piVar8 = (int *)std::vector<int,std::allocator<int>>::operator[]
                              ((vector<int,std::allocator<int>> *)(iVar7 + 0x36c),1);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,*piVar8);
  }
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,0x25e);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,0x232);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
  Send(this,local_24);
  StartRecvEventWaiting(this);
  setStdDropRate(this,100);
  *(undefined4 *)(this + 0x79628) = 0;
  *(undefined4 *)(this + 0x8e0f8) = 0;
  *(undefined4 *)(this + 0x8e0fc) = 0xffffffff;
  this[0x8e100] = (CUser)0x0;
  this_00 = operator_new(4);
  cSecuUserAction::cSecuUserAction(this_00);
  *(cSecuUserAction **)(this + 0x8e948) = this_00;
  cSecuUserAction::Init(*(cSecuUserAction **)(this + 0x8e948));
  this[0x8e3ec] = (CUser)0x0;
  this[0x8e3ed] = (CUser)0x1;
  memset(this + 0x8e101,0,0x145);
  memset(this + 0x8e246,0,0x1a6);
  WongWork::CMCAPManager::reset((CMCAPManager *)(this + 0x8e3f0));
  this[0x7962d] = (CUser)0x0;
  this_01 = (CSecurityCard *)getSecurityCard(this);
  WongWork::CSecurityCard::init(this_01);
  this_02 = (CPad *)getPad(this);
  Sanicova::CPad::init(this_02);
  *(undefined4 *)(this + 0x8e40c) = 0;
  if (InitOnAccept(int)::gameMasterCharacter == '\0') {
    iVar7 = __cxa_guard_acquire(&InitOnAccept(int)::gameMasterCharacter);
    if (iVar7 != 0) {
      CGameMasterCharacter::CGameMasterCharacter
                ((CGameMasterCharacter *)&InitOnAccept(int)::gameMasterCharacter);
      __cxa_guard_release(&InitOnAccept(int)::gameMasterCharacter);
    }
  }
  *(undefined4 **)(this + 0x7964c) = &InitOnAccept(int)::gameMasterCharacter;
  *(undefined4 *)(this + 0x8e94c) = 0;
  this[0x8e934] = (CUser)0x0;
  this[0x8e950] = (CUser)0x0;
  this[0x8e951] = (CUser)0x0;
  this[0x8e97c] = (CUser)0x0;
  this[0x8e97d] = (CUser)0x0;
  this_03 = (CHades *)getHades(this);
  XNuclear::CHades::Init(this_03,this);
  Secu_GoldControl::Init((Secu_GoldControl *)(this + 0x8e980),this);
  Secu_HackLogCheck::Init((Secu_HackLogCheck *)(this + 0x8ea68),this);
  *(undefined2 *)(this + 0x8e936) = 0;
  *(undefined4 *)(this + 0x8e938) = 0;
  this[0x8e944] = (CUser)0x0;
  this[0x8eaf4] = (CUser)0x0;
  *(undefined4 *)(this + 0x8eaf8) = 0;
  *(undefined4 *)(this + 0x8e090) = 0;
  this[0x8d24c] = (CUser)0x0;
  Secu_AccountHacking::init((Secu_AccountHacking *)(this + 0x795e8),this);
  this[0x70391] = (CUser)0x0;
  memset(this + 0x6ef92,0,0x68);
  PacketGuard::~PacketGuard(local_24);
  return 1;
}
```
