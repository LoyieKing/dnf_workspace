# PrintPowerWarAssultReport

`_ZN12CPowerWarLog25PrintPowerWarAssultReportEv`

`CPowerWarLog::PrintPowerWarAssultReport()`

| 类 | 地址 |
|---|---|
| `CPowerWarLog` | `0x084802cc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084802cc  _ZN12CPowerWarLog25PrintPowerWarAssultReportEv
#           CPowerWarLog::PrintPowerWarAssultReport()
# range [0x084802cc, 0x08480859]
084802cc +0x000:  push   %ebp
084802cd +0x001:  mov    %esp,%ebp
084802cf +0x003:  push   %ebx
084802d0 +0x004:  sub    $0x174,%esp
084802d6 +0x00a:  movl   $0x0,0xc(%esp)
084802de +0x012:  movl   $0x32f,0x8(%esp)
084802e6 +0x01a:  movl   $&_ZZN12CPowerWarLog25PrintPowerWarAssultReportEvE19__PRETTY_FUNCTION__,0x4(%esp)
084802ee +0x022:  lea    -0x158(%ebp),%eax
084802f4 +0x028:  mov    %eax,(%esp)
084802f7 +0x02b:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084802fc +0x030:  movl   $"-------------------------------------------------------------------------------------------------------------",0x4(%esp)
08480304 +0x038:  lea    -0x158(%ebp),%eax
0848030a +0x03e:  mov    %eax,(%esp)
0848030d +0x041:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08480312 +0x046:  movl   $0x0,0xc(%esp)
0848031a +0x04e:  movl   $0x330,0x8(%esp)
08480322 +0x056:  movl   $&_ZZN12CPowerWarLog25PrintPowerWarAssultReportEvE19__PRETTY_FUNCTION__,0x4(%esp)
0848032a +0x05e:  lea    -0x148(%ebp),%eax
08480330 +0x064:  mov    %eax,(%esp)
08480333 +0x067:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08480338 +0x06c:  movl   $"|                                  POWAR WAR ASSAULT RESULT REPORT                                          |",0x4(%esp)
08480340 +0x074:  lea    -0x148(%ebp),%eax
08480346 +0x07a:  mov    %eax,(%esp)
08480349 +0x07d:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0848034e +0x082:  movl   $0x0,0xc(%esp)
08480356 +0x08a:  movl   $0x331,0x8(%esp)
0848035e +0x092:  movl   $&_ZZN12CPowerWarLog25PrintPowerWarAssultReportEvE19__PRETTY_FUNCTION__,0x4(%esp)
08480366 +0x09a:  lea    -0x138(%ebp),%eax
0848036c +0x0a0:  mov    %eax,(%esp)
0848036f +0x0a3:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08480374 +0x0a8:  movl   $"-------------------------------------------------------------------------------------------------------------",0x4(%esp)
0848037c +0x0b0:  lea    -0x138(%ebp),%eax
08480382 +0x0b6:  mov    %eax,(%esp)
08480385 +0x0b9:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0848038a +0x0be:  movl   $0x0,0xc(%esp)
08480392 +0x0c6:  movl   $0x334,0x8(%esp)
0848039a +0x0ce:  movl   $&_ZZN12CPowerWarLog25PrintPowerWarAssultReportEvE19__PRETTY_FUNCTION__,0x4(%esp)
084803a2 +0x0d6:  lea    -0x128(%ebp),%eax
084803a8 +0x0dc:  mov    %eax,(%esp)
084803ab +0x0df:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084803b0 +0x0e4:  movl   $"1. POWER WAR ATTEMPT REPORT",0x4(%esp)
084803b8 +0x0ec:  lea    -0x128(%ebp),%eax
084803be +0x0f2:  mov    %eax,(%esp)
084803c1 +0x0f5:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084803c6 +0x0fa:  mov    0x8(%ebp),%eax
084803c9 +0x0fd:  mov    (%eax),%ebx
084803cb +0x0ff:  movl   $0x0,0xc(%esp)
084803d3 +0x107:  movl   $0x335,0x8(%esp)
084803db +0x10f:  movl   $&_ZZN12CPowerWarLog25PrintPowerWarAssultReportEvE19__PRETTY_FUNCTION__,0x4(%esp)
084803e3 +0x117:  lea    -0x118(%ebp),%eax
084803e9 +0x11d:  mov    %eax,(%esp)
084803ec +0x120:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084803f1 +0x125:  mov    %ebx,0x8(%esp)
084803f5 +0x129:  movl   $"- POWER WAR ATTEMPT                : %d",0x4(%esp)
084803fd +0x131:  lea    -0x118(%ebp),%eax
08480403 +0x137:  mov    %eax,(%esp)
08480406 +0x13a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0848040b +0x13f:  mov    0x8(%ebp),%eax
0848040e +0x142:  mov    0x4(%eax),%ebx
08480411 +0x145:  movl   $0x0,0xc(%esp)
08480419 +0x14d:  movl   $0x336,0x8(%esp)
08480421 +0x155:  movl   $&_ZZN12CPowerWarLog25PrintPowerWarAssultReportEvE19__PRETTY_FUNCTION__,0x4(%esp)
08480429 +0x15d:  lea    -0x108(%ebp),%eax
0848042f +0x163:  mov    %eax,(%esp)
08480432 +0x166:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08480437 +0x16b:  mov    %ebx,0x8(%esp)
0848043b +0x16f:  movl   $"- POWER WAR ATTEMPT SUCCESS        : %d",0x4(%esp)
08480443 +0x177:  lea    -0x108(%ebp),%eax
08480449 +0x17d:  mov    %eax,(%esp)
0848044c +0x180:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08480451 +0x185:  mov    0x8(%ebp),%eax
08480454 +0x188:  mov    0x8(%eax),%ebx
08480457 +0x18b:  movl   $0x0,0xc(%esp)
0848045f +0x193:  movl   $0x337,0x8(%esp)
08480467 +0x19b:  movl   $&_ZZN12CPowerWarLog25PrintPowerWarAssultReportEvE19__PRETTY_FUNCTION__,0x4(%esp)
0848046f +0x1a3:  lea    -0xf8(%ebp),%eax
08480475 +0x1a9:  mov    %eax,(%esp)
08480478 +0x1ac:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0848047d +0x1b1:  mov    %ebx,0x8(%esp)
08480481 +0x1b5:  movl   $"- POWER WAR ATTEMPT FAILURE        : %d",0x4(%esp)
08480489 +0x1bd:  lea    -0xf8(%ebp),%eax
0848048f +0x1c3:  mov    %eax,(%esp)
08480492 +0x1c6:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08480497 +0x1cb:  fldz
08480499 +0x1cd:  fstpl  -0x18(%ebp)
0848049c +0x1d0:  mov    0x8(%ebp),%eax
0848049f +0x1d3:  mov    (%eax),%eax
084804a1 +0x1d5:  test   %eax,%eax
084804a3 +0x1d7:  je     084804d5 <+0x209>
084804a5 +0x1d9:  mov    0x8(%ebp),%eax
084804a8 +0x1dc:  mov    0x8(%eax),%eax
084804ab +0x1df:  mov    %eax,-0x15c(%ebp)
084804b1 +0x1e5:  fildl  -0x15c(%ebp)
084804b7 +0x1eb:  mov    0x8(%ebp),%eax
084804ba +0x1ee:  mov    (%eax),%eax
084804bc +0x1f0:  mov    %eax,-0x15c(%ebp)
084804c2 +0x1f6:  fildl  -0x15c(%ebp)
084804c8 +0x1fc:  fdivrp %st,%st(1)
084804ca +0x1fe:  fldl   &data#69d7849f(.rodata)
084804d0 +0x204:  fmulp  %st,%st(1)
084804d2 +0x206:  fstpl  -0x18(%ebp)
084804d5 +0x209:  movl   $0x0,0xc(%esp)
084804dd +0x211:  movl   $0x340,0x8(%esp)
084804e5 +0x219:  movl   $&_ZZN12CPowerWarLog25PrintPowerWarAssultReportEvE19__PRETTY_FUNCTION__,0x4(%esp)
084804ed +0x221:  lea    -0xe8(%ebp),%eax
084804f3 +0x227:  mov    %eax,(%esp)
084804f6 +0x22a:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084804fb +0x22f:  fldl   -0x18(%ebp)
084804fe +0x232:  fstpl  0x8(%esp)
08480502 +0x236:  movl   $"- POWER WAR ATTEMPT FAILURE RATIO  : %.2f%%",0x4(%esp)
0848050a +0x23e:  lea    -0xe8(%ebp),%eax
08480510 +0x244:  mov    %eax,(%esp)
08480513 +0x247:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08480518 +0x24c:  movl   $0x0,0xc(%esp)
08480520 +0x254:  movl   $0x343,0x8(%esp)
08480528 +0x25c:  movl   $&_ZZN12CPowerWarLog25PrintPowerWarAssultReportEvE19__PRETTY_FUNCTION__,0x4(%esp)
08480530 +0x264:  lea    -0xd8(%ebp),%eax
08480536 +0x26a:  mov    %eax,(%esp)
08480539 +0x26d:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0848053e +0x272:  movl   $"2. POWER WAR LOADING & P2P FAILURE REPORT",0x4(%esp)
08480546 +0x27a:  lea    -0xd8(%ebp),%eax
0848054c +0x280:  mov    %eax,(%esp)
0848054f +0x283:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08480554 +0x288:  mov    0x8(%ebp),%eax
08480557 +0x28b:  mov    0xc(%eax),%ebx
0848055a +0x28e:  movl   $0x0,0xc(%esp)
08480562 +0x296:  movl   $0x344,0x8(%esp)
0848056a +0x29e:  movl   $&_ZZN12CPowerWarLog25PrintPowerWarAssultReportEvE19__PRETTY_FUNCTION__,0x4(%esp)
08480572 +0x2a6:  lea    -0xc8(%ebp),%eax
08480578 +0x2ac:  mov    %eax,(%esp)
0848057b +0x2af:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08480580 +0x2b4:  mov    %ebx,0x8(%esp)
08480584 +0x2b8:  movl   $"- POWER WAR LOADING TIMEOUT        : %d",0x4(%esp)
0848058c +0x2c0:  lea    -0xc8(%ebp),%eax
08480592 +0x2c6:  mov    %eax,(%esp)
08480595 +0x2c9:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0848059a +0x2ce:  mov    0x8(%ebp),%eax
0848059d +0x2d1:  mov    0x14(%eax),%ebx
084805a0 +0x2d4:  movl   $0x0,0xc(%esp)
084805a8 +0x2dc:  movl   $0x345,0x8(%esp)
084805b0 +0x2e4:  movl   $&_ZZN12CPowerWarLog25PrintPowerWarAssultReportEvE19__PRETTY_FUNCTION__,0x4(%esp)
084805b8 +0x2ec:  lea    -0xb8(%ebp),%eax
084805be +0x2f2:  mov    %eax,(%esp)
084805c1 +0x2f5:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084805c6 +0x2fa:  mov    %ebx,0x8(%esp)
084805ca +0x2fe:  movl   $"- POWER WAR P2P TIMEOUT            : %d",0x4(%esp)
084805d2 +0x306:  lea    -0xb8(%ebp),%eax
084805d8 +0x30c:  mov    %eax,(%esp)
084805db +0x30f:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084805e0 +0x314:  mov    0x8(%ebp),%eax
084805e3 +0x317:  mov    0x1c(%eax),%ebx
084805e6 +0x31a:  movl   $0x0,0xc(%esp)
084805ee +0x322:  movl   $0x346,0x8(%esp)
084805f6 +0x32a:  movl   $&_ZZN12CPowerWarLog25PrintPowerWarAssultReportEvE19__PRETTY_FUNCTION__,0x4(%esp)
084805fe +0x332:  lea    -0xa8(%ebp),%eax
08480604 +0x338:  mov    %eax,(%esp)
08480607 +0x33b:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0848060c +0x340:  mov    %ebx,0x8(%esp)
08480610 +0x344:  movl   $"- POWER WAR P2P BAD                : %d",0x4(%esp)
08480618 +0x34c:  lea    -0xa8(%ebp),%eax
0848061e +0x352:  mov    %eax,(%esp)
08480621 +0x355:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08480626 +0x35a:  fldz
08480628 +0x35c:  fstpl  -0x10(%ebp)
0848062b +0x35f:  mov    0x8(%ebp),%eax
0848062e +0x362:  mov    0x4(%eax),%eax
08480631 +0x365:  test   %eax,%eax
08480633 +0x367:  je     08480666 <+0x39a>
08480635 +0x369:  mov    0x8(%ebp),%eax
08480638 +0x36c:  mov    0x28(%eax),%eax
0848063b +0x36f:  mov    %eax,-0x15c(%ebp)
08480641 +0x375:  fildl  -0x15c(%ebp)
08480647 +0x37b:  mov    0x8(%ebp),%eax
0848064a +0x37e:  mov    0x4(%eax),%eax
0848064d +0x381:  mov    %eax,-0x15c(%ebp)
08480653 +0x387:  fildl  -0x15c(%ebp)
08480659 +0x38d:  fdivrp %st,%st(1)
0848065b +0x38f:  fldl   &data#69d7849f(.rodata)
08480661 +0x395:  fmulp  %st,%st(1)
08480663 +0x397:  fstpl  -0x10(%ebp)
08480666 +0x39a:  movl   $0x0,0xc(%esp)
0848066e +0x3a2:  movl   $0x34f,0x8(%esp)
08480676 +0x3aa:  movl   $&_ZZN12CPowerWarLog25PrintPowerWarAssultReportEvE19__PRETTY_FUNCTION__,0x4(%esp)
0848067e +0x3b2:  lea    -0x98(%ebp),%eax
08480684 +0x3b8:  mov    %eax,(%esp)
08480687 +0x3bb:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0848068c +0x3c0:  fldl   -0x10(%ebp)
0848068f +0x3c3:  fstpl  0x8(%esp)
08480693 +0x3c7:  movl   $"- POWER WAR FAILURE RATIO         : %.2f%%",0x4(%esp)
0848069b +0x3cf:  lea    -0x98(%ebp),%eax
084806a1 +0x3d5:  mov    %eax,(%esp)
084806a4 +0x3d8:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084806a9 +0x3dd:  movl   $0x0,0xc(%esp)
084806b1 +0x3e5:  movl   $0x352,0x8(%esp)
084806b9 +0x3ed:  movl   $&_ZZN12CPowerWarLog25PrintPowerWarAssultReportEvE19__PRETTY_FUNCTION__,0x4(%esp)
084806c1 +0x3f5:  lea    -0x88(%ebp),%eax
084806c7 +0x3fb:  mov    %eax,(%esp)
084806ca +0x3fe:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084806cf +0x403:  movl   $"3. POWER WAR START SECEDE REPORT",0x4(%esp)
084806d7 +0x40b:  lea    -0x88(%ebp),%eax
084806dd +0x411:  mov    %eax,(%esp)
084806e0 +0x414:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084806e5 +0x419:  mov    0x8(%ebp),%eax
084806e8 +0x41c:  mov    0x10(%eax),%ebx
084806eb +0x41f:  movl   $0x0,0xc(%esp)
084806f3 +0x427:  movl   $0x353,0x8(%esp)
084806fb +0x42f:  movl   $&_ZZN12CPowerWarLog25PrintPowerWarAssultReportEvE19__PRETTY_FUNCTION__,0x4(%esp)
08480703 +0x437:  lea    -0x78(%ebp),%eax
08480706 +0x43a:  mov    %eax,(%esp)
08480709 +0x43d:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0848070e +0x442:  mov    %ebx,0x8(%esp)
08480712 +0x446:  movl   $"- POWER WAR LOADING SECEDE        : %d",0x4(%esp)
0848071a +0x44e:  lea    -0x78(%ebp),%eax
0848071d +0x451:  mov    %eax,(%esp)
08480720 +0x454:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08480725 +0x459:  mov    0x8(%ebp),%eax
08480728 +0x45c:  mov    0x18(%eax),%ebx
0848072b +0x45f:  movl   $0x0,0xc(%esp)
08480733 +0x467:  movl   $0x354,0x8(%esp)
0848073b +0x46f:  movl   $&_ZZN12CPowerWarLog25PrintPowerWarAssultReportEvE19__PRETTY_FUNCTION__,0x4(%esp)
08480743 +0x477:  lea    -0x68(%ebp),%eax
08480746 +0x47a:  mov    %eax,(%esp)
08480749 +0x47d:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0848074e +0x482:  mov    %ebx,0x8(%esp)
08480752 +0x486:  movl   $"- POWER WAR P2P SECEDE            : %d",0x4(%esp)
0848075a +0x48e:  lea    -0x68(%ebp),%eax
0848075d +0x491:  mov    %eax,(%esp)
08480760 +0x494:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08480765 +0x499:  mov    0x8(%ebp),%eax
08480768 +0x49c:  mov    0x20(%eax),%ebx
0848076b +0x49f:  movl   $0x0,0xc(%esp)
08480773 +0x4a7:  movl   $0x355,0x8(%esp)
0848077b +0x4af:  movl   $&_ZZN12CPowerWarLog25PrintPowerWarAssultReportEvE19__PRETTY_FUNCTION__,0x4(%esp)
08480783 +0x4b7:  lea    -0x58(%ebp),%eax
08480786 +0x4ba:  mov    %eax,(%esp)
08480789 +0x4bd:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0848078e +0x4c2:  mov    %ebx,0x8(%esp)
08480792 +0x4c6:  movl   $"- POWER WAR P2P Bad               : %d",0x4(%esp)
0848079a +0x4ce:  lea    -0x58(%ebp),%eax
0848079d +0x4d1:  mov    %eax,(%esp)
084807a0 +0x4d4:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084807a5 +0x4d9:  movl   $0x0,0xc(%esp)
084807ad +0x4e1:  movl   $0x357,0x8(%esp)
084807b5 +0x4e9:  movl   $&_ZZN12CPowerWarLog25PrintPowerWarAssultReportEvE19__PRETTY_FUNCTION__,0x4(%esp)
084807bd +0x4f1:  lea    -0x48(%ebp),%eax
084807c0 +0x4f4:  mov    %eax,(%esp)
084807c3 +0x4f7:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084807c8 +0x4fc:  movl   $"4. POWER WAR SUCCESS/FAILURE INFOMATION",0x4(%esp)
084807d0 +0x504:  lea    -0x48(%ebp),%eax
084807d3 +0x507:  mov    %eax,(%esp)
084807d6 +0x50a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084807db +0x50f:  mov    0x8(%ebp),%eax
084807de +0x512:  mov    0x2c(%eax),%ebx
084807e1 +0x515:  movl   $0x0,0xc(%esp)
084807e9 +0x51d:  movl   $0x358,0x8(%esp)
084807f1 +0x525:  movl   $&_ZZN12CPowerWarLog25PrintPowerWarAssultReportEvE19__PRETTY_FUNCTION__,0x4(%esp)
084807f9 +0x52d:  lea    -0x38(%ebp),%eax
084807fc +0x530:  mov    %eax,(%esp)
084807ff +0x533:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08480804 +0x538:  mov    %ebx,0x8(%esp)
08480808 +0x53c:  movl   $"- SUCCESS COUNT                   : %d",0x4(%esp)
08480810 +0x544:  lea    -0x38(%ebp),%eax
08480813 +0x547:  mov    %eax,(%esp)
08480816 +0x54a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0848081b +0x54f:  movl   $0x0,0xc(%esp)
08480823 +0x557:  movl   $0x359,0x8(%esp)
0848082b +0x55f:  movl   $&_ZZN12CPowerWarLog25PrintPowerWarAssultReportEvE19__PRETTY_FUNCTION__,0x4(%esp)
08480833 +0x567:  lea    -0x28(%ebp),%eax
08480836 +0x56a:  mov    %eax,(%esp)
08480839 +0x56d:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0848083e +0x572:  movl   $"-------------------------------------------------------------------------------------------------------------",0x4(%esp)
08480846 +0x57a:  lea    -0x28(%ebp),%eax
08480849 +0x57d:  mov    %eax,(%esp)
0848084c +0x580:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08480851 +0x585:  add    $0x174,%esp
08480857 +0x58b:  pop    %ebx
08480858 +0x58c:  pop    %ebp
08480859 +0x58d:  ret
```

## 反编译 C

```c
// CPowerWarLog::PrintPowerWarAssultReport @ 0x84802cc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CPowerWarLog::PrintPowerWarAssultReport() */

void __thiscall CPowerWarLog::PrintPowerWarAssultReport(CPowerWarLog *this)

{
  undefined4 uVar1;
  cMyTrace local_15c [16];
  cMyTrace local_14c [16];
  cMyTrace local_13c [16];
  cMyTrace local_12c [16];
  cMyTrace local_11c [16];
  cMyTrace local_10c [16];
  cMyTrace local_fc [16];
  cMyTrace local_ec [16];
  cMyTrace local_dc [16];
  cMyTrace local_cc [16];
  cMyTrace local_bc [16];
  cMyTrace local_ac [16];
  cMyTrace local_9c [16];
  cMyTrace local_8c [16];
  cMyTrace local_7c [16];
  cMyTrace local_6c [16];
  cMyTrace local_5c [16];
  cMyTrace local_4c [16];
  cMyTrace local_3c [16];
  cMyTrace local_2c [16];
  double local_1c;
  double local_14;
  
  cMyTrace::cMyTrace(local_15c,"void CPowerWarLog::PrintPowerWarAssultReport()",0x32f,0);
  cMyTrace::operator()
            (local_15c,
             "-------------------------------------------------------------------------------------------------------------"
            );
  cMyTrace::cMyTrace(local_14c,"void CPowerWarLog::PrintPowerWarAssultReport()",0x330,0);
  cMyTrace::operator()
            (local_14c,
             "|                                  POWAR WAR ASSAULT RESULT REPORT                                          |"
            );
  cMyTrace::cMyTrace(local_13c,"void CPowerWarLog::PrintPowerWarAssultReport()",0x331,0);
  cMyTrace::operator()
            (local_13c,
             "-------------------------------------------------------------------------------------------------------------"
            );
  cMyTrace::cMyTrace(local_12c,"void CPowerWarLog::PrintPowerWarAssultReport()",0x334,0);
  cMyTrace::operator()(local_12c,"1. POWER WAR ATTEMPT REPORT");
  uVar1 = *(undefined4 *)this;
  cMyTrace::cMyTrace(local_11c,"void CPowerWarLog::PrintPowerWarAssultReport()",0x335,0);
  cMyTrace::operator()(local_11c,"- POWER WAR ATTEMPT                : %d",uVar1);
  uVar1 = *(undefined4 *)(this + 4);
  cMyTrace::cMyTrace(local_10c,"void CPowerWarLog::PrintPowerWarAssultReport()",0x336,0);
  cMyTrace::operator()(local_10c,"- POWER WAR ATTEMPT SUCCESS        : %d",uVar1);
  uVar1 = *(undefined4 *)(this + 8);
  cMyTrace::cMyTrace(local_fc,"void CPowerWarLog::PrintPowerWarAssultReport()",0x337,0);
  cMyTrace::operator()(local_fc,"- POWER WAR ATTEMPT FAILURE        : %d",uVar1);
  local_1c = 0.0;
  if (*(int *)this != 0) {
    local_1c = _DAT_08c72fd8 * ((double)*(int *)(this + 8) / (double)*(int *)this);
  }
  cMyTrace::cMyTrace(local_ec,"void CPowerWarLog::PrintPowerWarAssultReport()",0x340,0);
  cMyTrace::operator()(local_ec,"- POWER WAR ATTEMPT FAILURE RATIO  : %.2f%%",local_1c);
  cMyTrace::cMyTrace(local_dc,"void CPowerWarLog::PrintPowerWarAssultReport()",0x343,0);
  cMyTrace::operator()(local_dc,"2. POWER WAR LOADING & P2P FAILURE REPORT");
  uVar1 = *(undefined4 *)(this + 0xc);
  cMyTrace::cMyTrace(local_cc,"void CPowerWarLog::PrintPowerWarAssultReport()",0x344,0);
  cMyTrace::operator()(local_cc,"- POWER WAR LOADING TIMEOUT        : %d",uVar1);
  uVar1 = *(undefined4 *)(this + 0x14);
  cMyTrace::cMyTrace(local_bc,"void CPowerWarLog::PrintPowerWarAssultReport()",0x345,0);
  cMyTrace::operator()(local_bc,"- POWER WAR P2P TIMEOUT            : %d",uVar1);
  uVar1 = *(undefined4 *)(this + 0x1c);
  cMyTrace::cMyTrace(local_ac,"void CPowerWarLog::PrintPowerWarAssultReport()",0x346,0);
  cMyTrace::operator()(local_ac,"- POWER WAR P2P BAD                : %d",uVar1);
  local_14 = 0.0;
  if (*(int *)(this + 4) != 0) {
    local_14 = _DAT_08c72fd8 * ((double)*(int *)(this + 0x28) / (double)*(int *)(this + 4));
  }
  cMyTrace::cMyTrace(local_9c,"void CPowerWarLog::PrintPowerWarAssultReport()",0x34f,0);
  cMyTrace::operator()(local_9c,"- POWER WAR FAILURE RATIO         : %.2f%%",local_14);
  cMyTrace::cMyTrace(local_8c,"void CPowerWarLog::PrintPowerWarAssultReport()",0x352,0);
  cMyTrace::operator()(local_8c,"3. POWER WAR START SECEDE REPORT");
  uVar1 = *(undefined4 *)(this + 0x10);
  cMyTrace::cMyTrace(local_7c,"void CPowerWarLog::PrintPowerWarAssultReport()",0x353,0);
  cMyTrace::operator()(local_7c,"- POWER WAR LOADING SECEDE        : %d",uVar1);
  uVar1 = *(undefined4 *)(this + 0x18);
  cMyTrace::cMyTrace(local_6c,"void CPowerWarLog::PrintPowerWarAssultReport()",0x354,0);
  cMyTrace::operator()(local_6c,"- POWER WAR P2P SECEDE            : %d",uVar1);
  uVar1 = *(undefined4 *)(this + 0x20);
  cMyTrace::cMyTrace(local_5c,"void CPowerWarLog::PrintPowerWarAssultReport()",0x355,0);
  cMyTrace::operator()(local_5c,"- POWER WAR P2P Bad               : %d",uVar1);
  cMyTrace::cMyTrace(local_4c,"void CPowerWarLog::PrintPowerWarAssultReport()",0x357,0);
  cMyTrace::operator()(local_4c,"4. POWER WAR SUCCESS/FAILURE INFOMATION");
  uVar1 = *(undefined4 *)(this + 0x2c);
  cMyTrace::cMyTrace(local_3c,"void CPowerWarLog::PrintPowerWarAssultReport()",0x358,0);
  cMyTrace::operator()(local_3c,"- SUCCESS COUNT                   : %d",uVar1);
  cMyTrace::cMyTrace(local_2c,"void CPowerWarLog::PrintPowerWarAssultReport()",0x359,0);
  cMyTrace::operator()
            (local_2c,
             "-------------------------------------------------------------------------------------------------------------"
            );
  return;
}
```
