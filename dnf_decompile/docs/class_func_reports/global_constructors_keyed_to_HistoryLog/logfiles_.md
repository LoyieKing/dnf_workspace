# logfiles_

`_GLOBAL__I__ZN10HistoryLog9logfiles_E`

`global constructors keyed to HistoryLog::logfiles_`

| 类 | 地址 |
|---|---|
| `global constructors keyed to HistoryLog` | `0x084ba2e9` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084ba2e9  _GLOBAL__I__ZN10HistoryLog9logfiles_E
#           global constructors keyed to HistoryLog::logfiles_
# range [0x084ba2e9, 0x084bb917]
084ba2e9 +0x0000:  push   %ebp
084ba2ea +0x0001:  mov    %esp,%ebp
084ba2ec +0x0003:  sub    $0x18,%esp
084ba2ef +0x0006:  movl   $0xffff,0x4(%esp)
084ba2f7 +0x000e:  movl   $0x1,(%esp)
084ba2fe +0x0015:  call   084ba280 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
084ba303 +0x001a:  leave
084ba304 +0x001b:  ret
084ba305 +0x001c:  nop
084ba306 +0x001d:  push   %ebp
084ba307 +0x001e:  mov    %esp,%ebp
084ba309 +0x0020:  sub    $0x18,%esp
084ba30c +0x0023:  mov    0x8(%ebp),%eax
084ba30f +0x0026:  mov    %eax,(%esp)
084ba312 +0x0029:  call   084ba700 <+0x417>
084ba317 +0x002e:  leave
084ba318 +0x002f:  ret
084ba319 +0x0030:  nop
084ba31a +0x0031:  push   %ebp
084ba31b +0x0032:  mov    %esp,%ebp
084ba31d +0x0034:  push   %edi
084ba31e +0x0035:  push   %esi
084ba31f +0x0036:  push   %ebx
084ba320 +0x0037:  sub    $0x5c,%esp
084ba323 +0x003a:  lea    -0x58(%ebp),%eax
084ba326 +0x003d:  mov    %eax,(%esp)
084ba329 +0x0040:  call   084ba6ec <+0x403>
084ba32e +0x0045:  mov    0x8(%ebp),%eax
084ba331 +0x0048:  lea    0x4(%eax),%edx
084ba334 +0x004b:  lea    -0x58(%ebp),%eax
084ba337 +0x004e:  mov    %eax,0x4(%esp)
084ba33b +0x0052:  mov    %edx,(%esp)
084ba33e +0x0055:  call   084ba78e <+0x4a5>
084ba343 +0x005a:  jmp    084ba360 <+0x77>
084ba345 +0x005c:  mov    %edx,%ebx
084ba347 +0x005e:  mov    %eax,%esi
084ba349 +0x0060:  lea    -0x58(%ebp),%eax
084ba34c +0x0063:  mov    %eax,(%esp)
084ba34f +0x0066:  call   084ba700 <+0x417>
084ba354 +0x006b:  mov    %esi,%eax
084ba356 +0x006d:  mov    %ebx,%edx
084ba358 +0x006f:  mov    %eax,(%esp)
084ba35b +0x0072:  call   08ae3750 <_Unwind_Resume>
084ba360 +0x0077:  lea    -0x58(%ebp),%eax
084ba363 +0x007a:  mov    %eax,(%esp)
084ba366 +0x007d:  call   084ba700 <+0x417>
084ba36b +0x0082:  movl   $0x1e78,(%esp)
084ba372 +0x0089:  call   08722dc0 <_Znaj>  ; operator new[](unsigned int)
084ba377 +0x008e:  mov    %eax,%edi
084ba379 +0x0090:  mov    %edi,%eax
084ba37b +0x0092:  mov    %eax,%ebx
084ba37d +0x0094:  mov    $0x31,%esi
084ba382 +0x0099:  jmp    084ba395 <+0xac>
084ba384 +0x009b:  mov    %ebx,(%esp)
084ba387 +0x009e:  call   084ba7b0 <+0x4c7>
084ba38c +0x00a3:  add    $0x9c,%ebx
084ba392 +0x00a9:  sub    $0x1,%esi
084ba395 +0x00ac:  cmp    $0xffffffff,%esi
084ba398 +0x00af:  setne  %al
084ba39b +0x00b2:  test   %al,%al
084ba39d +0x00b4:  jne    084ba384 <+0x9b>
084ba39f +0x00b6:  mov    %edi,%edx
084ba3a1 +0x00b8:  mov    0x8(%ebp),%eax
084ba3a4 +0x00bb:  mov    %edx,(%eax)
084ba3a6 +0x00bd:  mov    0x8(%ebp),%eax
084ba3a9 +0x00c0:  mov    (%eax),%eax
084ba3ab +0x00c2:  test   %eax,%eax
084ba3ad +0x00c4:  jne    084ba3f5 <+0x10c>
084ba3af +0x00c6:  movl   $0x5,0xc(%esp)
084ba3b7 +0x00ce:  movl   $0x6c,0x8(%esp)
084ba3bf +0x00d6:  movl   $&_ZZN10StaticPoolI8_IO_FILELi50EEC1EvE12__FUNCTION__,0x4(%esp)
084ba3c7 +0x00de:  lea    -0x30(%ebp),%eax
084ba3ca +0x00e1:  mov    %eax,(%esp)
084ba3cd +0x00e4:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084ba3d2 +0x00e9:  movl   $0x6c,0xc(%esp)
084ba3da +0x00f1:  movl   $&_ZZN10StaticPoolI8_IO_FILELi50EEC1EvE12__FUNCTION__,0x8(%esp)
084ba3e2 +0x00f9:  movl   $"[%s][%d]",0x4(%esp)
084ba3ea +0x0101:  lea    -0x30(%ebp),%eax
084ba3ed +0x0104:  mov    %eax,(%esp)
084ba3f0 +0x0107:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084ba3f5 +0x010c:  movl   $0x0,-0x1c(%ebp)
084ba3fc +0x0113:  jmp    084ba42b <+0x142>
084ba3fe +0x0115:  mov    0x8(%ebp),%eax
084ba401 +0x0118:  mov    (%eax),%edx
084ba403 +0x011a:  mov    -0x1c(%ebp),%eax
084ba406 +0x011d:  imul   $0x9c,%eax,%eax
084ba40c +0x0123:  lea    (%edx,%eax,1),%eax
084ba40f +0x0126:  mov    %eax,-0x20(%ebp)
084ba412 +0x0129:  mov    0x8(%ebp),%eax
084ba415 +0x012c:  lea    0x4(%eax),%edx
084ba418 +0x012f:  lea    -0x20(%ebp),%eax
084ba41b +0x0132:  mov    %eax,0x4(%esp)
084ba41f +0x0136:  mov    %edx,(%esp)
084ba422 +0x0139:  call   084ba7e6 <+0x4fd>
084ba427 +0x013e:  addl   $0x1,-0x1c(%ebp)
084ba42b +0x0142:  cmpl   $0x31,-0x1c(%ebp)
084ba42f +0x0146:  setle  %al
084ba432 +0x0149:  test   %al,%al
084ba434 +0x014b:  jne    084ba3fe <+0x115>
084ba436 +0x014d:  mov    0x8(%ebp),%eax
084ba439 +0x0150:  movl   $0x0,0x2c(%eax)
084ba440 +0x0157:  add    $0x5c,%esp
084ba443 +0x015a:  pop    %ebx
084ba444 +0x015b:  pop    %esi
084ba445 +0x015c:  pop    %edi
084ba446 +0x015d:  pop    %ebp
084ba447 +0x015e:  ret
084ba448 +0x015f:  mov    %edx,%ebx
084ba44a +0x0161:  mov    %eax,%esi
084ba44c +0x0163:  mov    0x8(%ebp),%eax
084ba44f +0x0166:  add    $0x4,%eax
084ba452 +0x0169:  mov    %eax,(%esp)
084ba455 +0x016c:  call   084ba306 <+0x1d>
084ba45a +0x0171:  mov    %esi,%eax
084ba45c +0x0173:  mov    %ebx,%edx
084ba45e +0x0175:  mov    %eax,(%esp)
084ba461 +0x0178:  call   08ae3750 <_Unwind_Resume>
084ba466 +0x017d:  push   %ebp
084ba467 +0x017e:  mov    %esp,%ebp
084ba469 +0x0180:  push   %ebx
084ba46a +0x0181:  sub    $0x44,%esp
084ba46d +0x0184:  mov    0x8(%ebp),%eax
084ba470 +0x0187:  add    $0x4,%eax
084ba473 +0x018a:  mov    %eax,(%esp)
084ba476 +0x018d:  call   084ba810 <+0x527>
084ba47b +0x0192:  test   %al,%al
084ba47d +0x0194:  je     084ba489 <+0x1a0>
084ba47f +0x0196:  mov    $0x0,%eax
084ba484 +0x019b:  jmp    084ba58d <+0x2a4>
084ba489 +0x01a0:  mov    0x8(%ebp),%eax
084ba48c +0x01a3:  add    $0x4,%eax
084ba48f +0x01a6:  mov    %eax,(%esp)
084ba492 +0x01a9:  call   084ba824 <+0x53b>
084ba497 +0x01ae:  mov    (%eax),%eax
084ba499 +0x01b0:  mov    %eax,-0xc(%ebp)
084ba49c +0x01b3:  mov    0x8(%ebp),%eax
084ba49f +0x01b6:  add    $0x4,%eax
084ba4a2 +0x01b9:  mov    %eax,(%esp)
084ba4a5 +0x01bc:  call   084ba838 <+0x54f>
084ba4aa +0x01c1:  mov    -0xc(%ebp),%eax
084ba4ad +0x01c4:  mov    0x94(%eax),%eax
084ba4b3 +0x01ca:  cmp    $0x8f21,%eax
084ba4b8 +0x01cf:  je     084ba50e <+0x225>
084ba4ba +0x01d1:  mov    -0xc(%ebp),%eax
084ba4bd +0x01d4:  mov    0x94(%eax),%ebx
084ba4c3 +0x01da:  movl   $0x0,0xc(%esp)
084ba4cb +0x01e2:  movl   $0x89,0x8(%esp)
084ba4d3 +0x01ea:  movl   $&_ZZN10StaticPoolI8_IO_FILELi50EE7AcquireEvE12__FUNCTION__,0x4(%esp)
084ba4db +0x01f2:  lea    -0x2c(%ebp),%eax
084ba4de +0x01f5:  mov    %eax,(%esp)
084ba4e1 +0x01f8:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084ba4e6 +0x01fd:  mov    -0xc(%ebp),%eax
084ba4e9 +0x0200:  mov    %eax,0xc(%esp)
084ba4ed +0x0204:  mov    %ebx,0x8(%esp)
084ba4f1 +0x0208:  movl   $"STATIC MEMORY_POOL Acquire error dummy(%x), node(%x)",0x4(%esp)
084ba4f9 +0x0210:  lea    -0x2c(%ebp),%eax
084ba4fc +0x0213:  mov    %eax,(%esp)
084ba4ff +0x0216:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084ba504 +0x021b:  mov    0x8(%ebp),%eax
084ba507 +0x021e:  movl   $0x3,0x2c(%eax)
084ba50e +0x0225:  mov    -0xc(%ebp),%eax
084ba511 +0x0228:  movzbl 0x98(%eax),%eax
084ba518 +0x022f:  test   %al,%al
084ba51a +0x0231:  je     084ba574 <+0x28b>
084ba51c +0x0233:  mov    -0xc(%ebp),%eax
084ba51f +0x0236:  movzbl 0x98(%eax),%eax
084ba526 +0x023d:  movsbl %al,%ebx
084ba529 +0x0240:  movl   $0x0,0xc(%esp)
084ba531 +0x0248:  movl   $0x8f,0x8(%esp)
084ba539 +0x0250:  movl   $&_ZZN10StaticPoolI8_IO_FILELi50EE7AcquireEvE12__FUNCTION__,0x4(%esp)
084ba541 +0x0258:  lea    -0x1c(%ebp),%eax
084ba544 +0x025b:  mov    %eax,(%esp)
084ba547 +0x025e:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084ba54c +0x0263:  mov    -0xc(%ebp),%eax
084ba54f +0x0266:  mov    %eax,0xc(%esp)
084ba553 +0x026a:  mov    %ebx,0x8(%esp)
084ba557 +0x026e:  movl   $"STATIC MEMORY_POOL Acquire error reference count(%d), node(%x)",0x4(%esp)
084ba55f +0x0276:  lea    -0x1c(%ebp),%eax
084ba562 +0x0279:  mov    %eax,(%esp)
084ba565 +0x027c:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084ba56a +0x0281:  mov    0x8(%ebp),%eax
084ba56d +0x0284:  movl   $0x4,0x2c(%eax)
084ba574 +0x028b:  mov    -0xc(%ebp),%eax
084ba577 +0x028e:  movzbl 0x98(%eax),%eax
084ba57e +0x0295:  lea    0x1(%eax),%edx
084ba581 +0x0298:  mov    -0xc(%ebp),%eax
084ba584 +0x029b:  mov    %dl,0x98(%eax)
084ba58a +0x02a1:  mov    -0xc(%ebp),%eax
084ba58d +0x02a4:  add    $0x44,%esp
084ba590 +0x02a7:  pop    %ebx
084ba591 +0x02a8:  pop    %ebp
084ba592 +0x02a9:  ret
084ba593 +0x02aa:  nop
084ba594 +0x02ab:  push   %ebp
084ba595 +0x02ac:  mov    %esp,%ebp
084ba597 +0x02ae:  push   %esi
084ba598 +0x02af:  push   %ebx
084ba599 +0x02b0:  sub    $0x50,%esp
084ba59c +0x02b3:  cmpl   $0x0,0xc(%ebp)
084ba5a0 +0x02b7:  jne    084ba5e8 <+0x2ff>
084ba5a2 +0x02b9:  movl   $0x5,0xc(%esp)
084ba5aa +0x02c1:  movl   $0xa0,0x8(%esp)
084ba5b2 +0x02c9:  movl   $&_ZZN10StaticPoolI8_IO_FILELi50EE4FreeEPS0_E12__FUNCTION__,0x4(%esp)
084ba5ba +0x02d1:  lea    -0x38(%ebp),%eax
084ba5bd +0x02d4:  mov    %eax,(%esp)
084ba5c0 +0x02d7:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084ba5c5 +0x02dc:  movl   $0xa0,0xc(%esp)
084ba5cd +0x02e4:  movl   $&_ZZN10StaticPoolI8_IO_FILELi50EE4FreeEPS0_E12__FUNCTION__,0x8(%esp)
084ba5d5 +0x02ec:  movl   $"[%s][%d]",0x4(%esp)
084ba5dd +0x02f4:  lea    -0x38(%ebp),%eax
084ba5e0 +0x02f7:  mov    %eax,(%esp)
084ba5e3 +0x02fa:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084ba5e8 +0x02ff:  mov    0xc(%ebp),%eax
084ba5eb +0x0302:  mov    %eax,-0x3c(%ebp)
084ba5ee +0x0305:  mov    0x8(%ebp),%eax
084ba5f1 +0x0308:  lea    0x4(%eax),%edx
084ba5f4 +0x030b:  lea    -0x3c(%ebp),%eax
084ba5f7 +0x030e:  mov    %eax,0x4(%esp)
084ba5fb +0x0312:  mov    %edx,(%esp)
084ba5fe +0x0315:  call   084ba84c <+0x563>
084ba603 +0x031a:  mov    -0x3c(%ebp),%eax
084ba606 +0x031d:  mov    0x94(%eax),%eax
084ba60c +0x0323:  cmp    $0x8f21,%eax
084ba611 +0x0328:  je     084ba667 <+0x37e>
084ba613 +0x032a:  mov    -0x3c(%ebp),%esi
084ba616 +0x032d:  mov    -0x3c(%ebp),%eax
084ba619 +0x0330:  mov    0x94(%eax),%ebx
084ba61f +0x0336:  movl   $0x0,0xc(%esp)
084ba627 +0x033e:  movl   $0xaa,0x8(%esp)
084ba62f +0x0346:  movl   $&_ZZN10StaticPoolI8_IO_FILELi50EE4FreeEPS0_E12__FUNCTION__,0x4(%esp)
084ba637 +0x034e:  lea    -0x28(%ebp),%eax
084ba63a +0x0351:  mov    %eax,(%esp)
084ba63d +0x0354:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084ba642 +0x0359:  mov    %esi,0xc(%esp)
084ba646 +0x035d:  mov    %ebx,0x8(%esp)
084ba64a +0x0361:  movl   $"STATIC MEMORY_POOL Free error dummy(%x), node(%x)",0x4(%esp)
084ba652 +0x0369:  lea    -0x28(%ebp),%eax
084ba655 +0x036c:  mov    %eax,(%esp)
084ba658 +0x036f:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084ba65d +0x0374:  mov    0x8(%ebp),%eax
084ba660 +0x0377:  movl   $0x5,0x2c(%eax)
084ba667 +0x037e:  mov    -0x3c(%ebp),%eax
084ba66a +0x0381:  movzbl 0x98(%eax),%eax
084ba671 +0x0388:  cmp    $0x1,%al
084ba673 +0x038a:  je     084ba6d2 <+0x3e9>
084ba675 +0x038c:  mov    -0x3c(%ebp),%esi
084ba678 +0x038f:  mov    -0x3c(%ebp),%eax
084ba67b +0x0392:  movzbl 0x98(%eax),%eax
084ba682 +0x0399:  movsbl %al,%ebx
084ba685 +0x039c:  movl   $0x0,0xc(%esp)
084ba68d +0x03a4:  movl   $0xb0,0x8(%esp)
084ba695 +0x03ac:  movl   $&_ZZN10StaticPoolI8_IO_FILELi50EE4FreeEPS0_E12__FUNCTION__,0x4(%esp)
084ba69d +0x03b4:  lea    -0x18(%ebp),%eax
084ba6a0 +0x03b7:  mov    %eax,(%esp)
084ba6a3 +0x03ba:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084ba6a8 +0x03bf:  mov    %esi,0xc(%esp)
084ba6ac +0x03c3:  mov    %ebx,0x8(%esp)
084ba6b0 +0x03c7:  movl   $"STATIC MEMORY_POOL Free error reference count(%d), node(%x)",0x4(%esp)
084ba6b8 +0x03cf:  lea    -0x18(%ebp),%eax
084ba6bb +0x03d2:  mov    %eax,(%esp)
084ba6be +0x03d5:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084ba6c3 +0x03da:  mov    0x8(%ebp),%eax
084ba6c6 +0x03dd:  movl   $0x6,0x2c(%eax)
084ba6cd +0x03e4:  call   08108f9c <_Z14PrintBackTracev>  ; PrintBackTrace()
084ba6d2 +0x03e9:  mov    -0x3c(%ebp),%eax
084ba6d5 +0x03ec:  movzbl 0x98(%eax),%edx
084ba6dc +0x03f3:  sub    $0x1,%edx
084ba6df +0x03f6:  mov    %dl,0x98(%eax)
084ba6e5 +0x03fc:  add    $0x50,%esp
084ba6e8 +0x03ff:  pop    %ebx
084ba6e9 +0x0400:  pop    %esi
084ba6ea +0x0401:  pop    %ebp
084ba6eb +0x0402:  ret
084ba6ec +0x0403:  push   %ebp
084ba6ed +0x0404:  mov    %esp,%ebp
084ba6ef +0x0406:  sub    $0x18,%esp
084ba6f2 +0x0409:  mov    0x8(%ebp),%eax
084ba6f5 +0x040c:  mov    %eax,(%esp)
084ba6f8 +0x040f:  call   084ba87a <+0x591>
084ba6fd +0x0414:  leave
084ba6fe +0x0415:  ret
084ba6ff +0x0416:  nop
084ba700 +0x0417:  push   %ebp
084ba701 +0x0418:  mov    %esp,%ebp
084ba703 +0x041a:  push   %esi
084ba704 +0x041b:  push   %ebx
084ba705 +0x041c:  sub    $0x30,%esp
084ba708 +0x041f:  mov    0x8(%ebp),%eax
084ba70b +0x0422:  mov    %eax,(%esp)
084ba70e +0x0425:  call   084ba998 <+0x6af>
084ba713 +0x042a:  mov    %eax,%ebx
084ba715 +0x042c:  lea    -0x28(%ebp),%eax
084ba718 +0x042f:  mov    0x8(%ebp),%edx
084ba71b +0x0432:  mov    %edx,0x4(%esp)
084ba71f +0x0436:  mov    %eax,(%esp)
084ba722 +0x0439:  call   084ba96e <+0x685>
084ba727 +0x043e:  sub    $0x4,%esp
084ba72a +0x0441:  lea    -0x18(%ebp),%eax
084ba72d +0x0444:  mov    0x8(%ebp),%edx
084ba730 +0x0447:  mov    %edx,0x4(%esp)
084ba734 +0x044b:  mov    %eax,(%esp)
084ba737 +0x044e:  call   084ba944 <+0x65b>
084ba73c +0x0453:  sub    $0x4,%esp
084ba73f +0x0456:  mov    %ebx,0xc(%esp)
084ba743 +0x045a:  lea    -0x28(%ebp),%eax
084ba746 +0x045d:  mov    %eax,0x8(%esp)
084ba74a +0x0461:  lea    -0x18(%ebp),%eax
084ba74d +0x0464:  mov    %eax,0x4(%esp)
084ba751 +0x0468:  mov    0x8(%ebp),%eax
084ba754 +0x046b:  mov    %eax,(%esp)
084ba757 +0x046e:  call   084ba9d4 <+0x6eb>
084ba75c +0x0473:  jmp    084ba779 <+0x490>
084ba75e +0x0475:  mov    %edx,%ebx
084ba760 +0x0477:  mov    %eax,%esi
084ba762 +0x0479:  mov    0x8(%ebp),%eax
084ba765 +0x047c:  mov    %eax,(%esp)
084ba768 +0x047f:  call   084ba8c4 <+0x5db>
084ba76d +0x0484:  mov    %esi,%eax
084ba76f +0x0486:  mov    %ebx,%edx
084ba771 +0x0488:  mov    %eax,(%esp)
084ba774 +0x048b:  call   08ae3750 <_Unwind_Resume>
084ba779 +0x0490:  mov    0x8(%ebp),%eax
084ba77c +0x0493:  mov    %eax,(%esp)
084ba77f +0x0496:  call   084ba8c4 <+0x5db>
084ba784 +0x049b:  lea    -0x8(%ebp),%esp
084ba787 +0x049e:  add    $0x0,%esp
084ba78a +0x04a1:  pop    %ebx
084ba78b +0x04a2:  pop    %esi
084ba78c +0x04a3:  pop    %ebp
084ba78d +0x04a4:  ret
084ba78e +0x04a5:  push   %ebp
084ba78f +0x04a6:  mov    %esp,%ebp
084ba791 +0x04a8:  sub    $0x18,%esp
084ba794 +0x04ab:  mov    0xc(%ebp),%eax
084ba797 +0x04ae:  mov    %eax,(%esp)
084ba79a +0x04b1:  call   084ba9dc <+0x6f3>
084ba79f +0x04b6:  mov    0x8(%ebp),%edx
084ba7a2 +0x04b9:  mov    %eax,0x4(%esp)
084ba7a6 +0x04bd:  mov    %edx,(%esp)
084ba7a9 +0x04c0:  call   084ba9e4 <+0x6fb>
084ba7ae +0x04c5:  leave
084ba7af +0x04c6:  ret
084ba7b0 +0x04c7:  push   %ebp
084ba7b1 +0x04c8:  mov    %esp,%ebp
084ba7b3 +0x04ca:  push   %edi
084ba7b4 +0x04cb:  push   %ebx
084ba7b5 +0x04cc:  mov    0x8(%ebp),%eax
084ba7b8 +0x04cf:  mov    %eax,%ebx
084ba7ba +0x04d1:  mov    $0x0,%eax
084ba7bf +0x04d6:  mov    $0x25,%edx
084ba7c4 +0x04db:  mov    %ebx,%edi
084ba7c6 +0x04dd:  mov    %edx,%ecx
084ba7c8 +0x04df:  rep stos %eax,%es:(%edi)
084ba7ca +0x04e1:  mov    0x8(%ebp),%eax
084ba7cd +0x04e4:  movl   $0x8f21,0x94(%eax)
084ba7d7 +0x04ee:  mov    0x8(%ebp),%eax
084ba7da +0x04f1:  movb   $0x0,0x98(%eax)
084ba7e1 +0x04f8:  pop    %ebx
084ba7e2 +0x04f9:  pop    %edi
084ba7e3 +0x04fa:  pop    %ebp
084ba7e4 +0x04fb:  ret
084ba7e5 +0x04fc:  nop
084ba7e6 +0x04fd:  push   %ebp
084ba7e7 +0x04fe:  mov    %esp,%ebp
084ba7e9 +0x0500:  sub    $0x28,%esp
084ba7ec +0x0503:  mov    0xc(%ebp),%eax
084ba7ef +0x0506:  mov    %eax,(%esp)
084ba7f2 +0x0509:  call   084baa06 <+0x71d>
084ba7f7 +0x050e:  mov    (%eax),%eax
084ba7f9 +0x0510:  mov    %eax,-0xc(%ebp)
084ba7fc +0x0513:  mov    0x8(%ebp),%eax
084ba7ff +0x0516:  lea    -0xc(%ebp),%edx
084ba802 +0x0519:  mov    %edx,0x4(%esp)
084ba806 +0x051d:  mov    %eax,(%esp)
084ba809 +0x0520:  call   084baa0e <+0x725>
084ba80e +0x0525:  leave
084ba80f +0x0526:  ret
084ba810 +0x0527:  push   %ebp
084ba811 +0x0528:  mov    %esp,%ebp
084ba813 +0x052a:  sub    $0x18,%esp
084ba816 +0x052d:  mov    0x8(%ebp),%eax
084ba819 +0x0530:  mov    %eax,(%esp)
084ba81c +0x0533:  call   084baa38 <+0x74f>
084ba821 +0x0538:  leave
084ba822 +0x0539:  ret
084ba823 +0x053a:  nop
084ba824 +0x053b:  push   %ebp
084ba825 +0x053c:  mov    %esp,%ebp
084ba827 +0x053e:  sub    $0x18,%esp
084ba82a +0x0541:  mov    0x8(%ebp),%eax
084ba82d +0x0544:  mov    %eax,(%esp)
084ba830 +0x0547:  call   084baa58 <+0x76f>
084ba835 +0x054c:  leave
084ba836 +0x054d:  ret
084ba837 +0x054e:  nop
084ba838 +0x054f:  push   %ebp
084ba839 +0x0550:  mov    %esp,%ebp
084ba83b +0x0552:  sub    $0x18,%esp
084ba83e +0x0555:  mov    0x8(%ebp),%eax
084ba841 +0x0558:  mov    %eax,(%esp)
084ba844 +0x055b:  call   084baa80 <+0x797>
084ba849 +0x0560:  leave
084ba84a +0x0561:  ret
084ba84b +0x0562:  nop
084ba84c +0x0563:  push   %ebp
084ba84d +0x0564:  mov    %esp,%ebp
084ba84f +0x0566:  sub    $0x18,%esp
084ba852 +0x0569:  mov    0x8(%ebp),%eax
084ba855 +0x056c:  mov    0xc(%ebp),%edx
084ba858 +0x056f:  mov    %edx,0x4(%esp)
084ba85c +0x0573:  mov    %eax,(%esp)
084ba85f +0x0576:  call   084baacc <+0x7e3>
084ba864 +0x057b:  leave
084ba865 +0x057c:  ret
084ba866 +0x057d:  push   %ebp
084ba867 +0x057e:  mov    %esp,%ebp
084ba869 +0x0580:  sub    $0x18,%esp
084ba86c +0x0583:  mov    0x8(%ebp),%eax
084ba86f +0x0586:  mov    %eax,(%esp)
084ba872 +0x0589:  call   084bab68 <+0x87f>
084ba877 +0x058e:  leave
084ba878 +0x058f:  ret
084ba879 +0x0590:  nop
084ba87a +0x0591:  push   %ebp
084ba87b +0x0592:  mov    %esp,%ebp
084ba87d +0x0594:  push   %esi
084ba87e +0x0595:  push   %ebx
084ba87f +0x0596:  sub    $0x10,%esp
084ba882 +0x0599:  mov    0x8(%ebp),%eax
084ba885 +0x059c:  mov    %eax,(%esp)
084ba888 +0x059f:  call   084bab26 <+0x83d>
084ba88d +0x05a4:  movl   $0x0,0x4(%esp)
084ba895 +0x05ac:  mov    0x8(%ebp),%eax
084ba898 +0x05af:  mov    %eax,(%esp)
084ba89b +0x05b2:  call   084bab7c <+0x893>
084ba8a0 +0x05b7:  jmp    084ba8bd <+0x5d4>
084ba8a2 +0x05b9:  mov    %edx,%ebx
084ba8a4 +0x05bb:  mov    %eax,%esi
084ba8a6 +0x05bd:  mov    0x8(%ebp),%eax
084ba8a9 +0x05c0:  mov    %eax,(%esp)
084ba8ac +0x05c3:  call   084ba866 <+0x57d>
084ba8b1 +0x05c8:  mov    %esi,%eax
084ba8b3 +0x05ca:  mov    %ebx,%edx
084ba8b5 +0x05cc:  mov    %eax,(%esp)
084ba8b8 +0x05cf:  call   08ae3750 <_Unwind_Resume>
084ba8bd +0x05d4:  add    $0x10,%esp
084ba8c0 +0x05d7:  pop    %ebx
084ba8c1 +0x05d8:  pop    %esi
084ba8c2 +0x05d9:  pop    %ebp
084ba8c3 +0x05da:  ret
084ba8c4 +0x05db:  push   %ebp
084ba8c5 +0x05dc:  mov    %esp,%ebp
084ba8c7 +0x05de:  push   %esi
084ba8c8 +0x05df:  push   %ebx
084ba8c9 +0x05e0:  sub    $0x10,%esp
084ba8cc +0x05e3:  mov    0x8(%ebp),%eax
084ba8cf +0x05e6:  mov    (%eax),%eax
084ba8d1 +0x05e8:  test   %eax,%eax
084ba8d3 +0x05ea:  je     084ba932 <+0x649>
084ba8d5 +0x05ec:  mov    0x8(%ebp),%eax
084ba8d8 +0x05ef:  mov    0x24(%eax),%eax
084ba8db +0x05f2:  lea    0x4(%eax),%edx
084ba8de +0x05f5:  mov    0x8(%ebp),%eax
084ba8e1 +0x05f8:  mov    0x14(%eax),%eax
084ba8e4 +0x05fb:  mov    %edx,0x8(%esp)
084ba8e8 +0x05ff:  mov    %eax,0x4(%esp)
084ba8ec +0x0603:  mov    0x8(%ebp),%eax
084ba8ef +0x0606:  mov    %eax,(%esp)
084ba8f2 +0x0609:  call   084bacec <+0xa03>
084ba8f7 +0x060e:  mov    0x8(%ebp),%eax
084ba8fa +0x0611:  mov    0x4(%eax),%edx
084ba8fd +0x0614:  mov    0x8(%ebp),%eax
084ba900 +0x0617:  mov    (%eax),%eax
084ba902 +0x0619:  mov    %edx,0x8(%esp)
084ba906 +0x061d:  mov    %eax,0x4(%esp)
084ba90a +0x0621:  mov    0x8(%ebp),%eax
084ba90d +0x0624:  mov    %eax,(%esp)
084ba910 +0x0627:  call   084bad22 <+0xa39>
084ba915 +0x062c:  jmp    084ba932 <+0x649>
084ba917 +0x062e:  mov    %edx,%ebx
084ba919 +0x0630:  mov    %eax,%esi
084ba91b +0x0632:  mov    0x8(%ebp),%eax
084ba91e +0x0635:  mov    %eax,(%esp)
084ba921 +0x0638:  call   084ba866 <+0x57d>
084ba926 +0x063d:  mov    %esi,%eax
084ba928 +0x063f:  mov    %ebx,%edx
084ba92a +0x0641:  mov    %eax,(%esp)
084ba92d +0x0644:  call   08ae3750 <_Unwind_Resume>
084ba932 +0x0649:  mov    0x8(%ebp),%eax
084ba935 +0x064c:  mov    %eax,(%esp)
084ba938 +0x064f:  call   084ba866 <+0x57d>
084ba93d +0x0654:  add    $0x10,%esp
084ba940 +0x0657:  pop    %ebx
084ba941 +0x0658:  pop    %esi
084ba942 +0x0659:  pop    %ebp
084ba943 +0x065a:  ret
084ba944 +0x065b:  push   %ebp
084ba945 +0x065c:  mov    %esp,%ebp
084ba947 +0x065e:  push   %ebx
084ba948 +0x065f:  sub    $0x14,%esp
084ba94b +0x0662:  mov    0x8(%ebp),%ebx
084ba94e +0x0665:  mov    %ebx,%eax
084ba950 +0x0667:  mov    0xc(%ebp),%edx
084ba953 +0x066a:  add    $0x8,%edx
084ba956 +0x066d:  mov    %edx,0x4(%esp)
084ba95a +0x0671:  mov    %eax,(%esp)
084ba95d +0x0674:  call   084ba9a0 <+0x6b7>
084ba962 +0x0679:  mov    %ebx,%eax
084ba964 +0x067b:  mov    %ebx,%eax
084ba966 +0x067d:  add    $0x14,%esp
084ba969 +0x0680:  pop    %ebx
084ba96a +0x0681:  pop    %ebp
084ba96b +0x0682:  ret    $0x4
084ba96e +0x0685:  push   %ebp
084ba96f +0x0686:  mov    %esp,%ebp
084ba971 +0x0688:  push   %ebx
084ba972 +0x0689:  sub    $0x14,%esp
084ba975 +0x068c:  mov    0x8(%ebp),%ebx
084ba978 +0x068f:  mov    %ebx,%eax
084ba97a +0x0691:  mov    0xc(%ebp),%edx
084ba97d +0x0694:  add    $0x18,%edx
084ba980 +0x0697:  mov    %edx,0x4(%esp)
084ba984 +0x069b:  mov    %eax,(%esp)
084ba987 +0x069e:  call   084ba9a0 <+0x6b7>
084ba98c +0x06a3:  mov    %ebx,%eax
084ba98e +0x06a5:  mov    %ebx,%eax
084ba990 +0x06a7:  add    $0x14,%esp
084ba993 +0x06aa:  pop    %ebx
084ba994 +0x06ab:  pop    %ebp
084ba995 +0x06ac:  ret    $0x4
084ba998 +0x06af:  push   %ebp
084ba999 +0x06b0:  mov    %esp,%ebp
084ba99b +0x06b2:  mov    0x8(%ebp),%eax
084ba99e +0x06b5:  pop    %ebp
084ba99f +0x06b6:  ret
084ba9a0 +0x06b7:  push   %ebp
084ba9a1 +0x06b8:  mov    %esp,%ebp
084ba9a3 +0x06ba:  mov    0xc(%ebp),%eax
084ba9a6 +0x06bd:  mov    (%eax),%edx
084ba9a8 +0x06bf:  mov    0x8(%ebp),%eax
084ba9ab +0x06c2:  mov    %edx,(%eax)
084ba9ad +0x06c4:  mov    0xc(%ebp),%eax
084ba9b0 +0x06c7:  mov    0x4(%eax),%edx
084ba9b3 +0x06ca:  mov    0x8(%ebp),%eax
084ba9b6 +0x06cd:  mov    %edx,0x4(%eax)
084ba9b9 +0x06d0:  mov    0xc(%ebp),%eax
084ba9bc +0x06d3:  mov    0x8(%eax),%edx
084ba9bf +0x06d6:  mov    0x8(%ebp),%eax
084ba9c2 +0x06d9:  mov    %edx,0x8(%eax)
084ba9c5 +0x06dc:  mov    0xc(%ebp),%eax
084ba9c8 +0x06df:  mov    0xc(%eax),%edx
084ba9cb +0x06e2:  mov    0x8(%ebp),%eax
084ba9ce +0x06e5:  mov    %edx,0xc(%eax)
084ba9d1 +0x06e8:  pop    %ebp
084ba9d2 +0x06e9:  ret
084ba9d3 +0x06ea:  nop
084ba9d4 +0x06eb:  push   %ebp
084ba9d5 +0x06ec:  mov    %esp,%ebp
084ba9d7 +0x06ee:  sub    $0x20,%esp
084ba9da +0x06f1:  leave
084ba9db +0x06f2:  ret
084ba9dc +0x06f3:  push   %ebp
084ba9dd +0x06f4:  mov    %esp,%ebp
084ba9df +0x06f6:  mov    0x8(%ebp),%eax
084ba9e2 +0x06f9:  pop    %ebp
084ba9e3 +0x06fa:  ret
084ba9e4 +0x06fb:  push   %ebp
084ba9e5 +0x06fc:  mov    %esp,%ebp
084ba9e7 +0x06fe:  sub    $0x18,%esp
084ba9ea +0x0701:  mov    0xc(%ebp),%eax
084ba9ed +0x0704:  mov    %eax,(%esp)
084ba9f0 +0x0707:  call   084bad63 <+0xa7a>
084ba9f5 +0x070c:  mov    0x8(%ebp),%edx
084ba9f8 +0x070f:  mov    %eax,0x4(%esp)
084ba9fc +0x0713:  mov    %edx,(%esp)
084ba9ff +0x0716:  call   084bad6c <+0xa83>
084baa04 +0x071b:  leave
084baa05 +0x071c:  ret
084baa06 +0x071d:  push   %ebp
084baa07 +0x071e:  mov    %esp,%ebp
084baa09 +0x0720:  mov    0x8(%ebp),%eax
084baa0c +0x0723:  pop    %ebp
084baa0d +0x0724:  ret
084baa0e +0x0725:  push   %ebp
084baa0f +0x0726:  mov    %esp,%ebp
084baa11 +0x0728:  sub    $0x28,%esp
084baa14 +0x072b:  mov    0xc(%ebp),%eax
084baa17 +0x072e:  mov    %eax,(%esp)
084baa1a +0x0731:  call   084baa06 <+0x71d>
084baa1f +0x0736:  mov    (%eax),%eax
084baa21 +0x0738:  mov    %eax,-0xc(%ebp)
084baa24 +0x073b:  lea    -0xc(%ebp),%eax
084baa27 +0x073e:  mov    %eax,0x4(%esp)
084baa2b +0x0742:  mov    0x8(%ebp),%eax
084baa2e +0x0745:  mov    %eax,(%esp)
084baa31 +0x0748:  call   084bae28 <+0xb3f>
084baa36 +0x074d:  leave
084baa37 +0x074e:  ret
084baa38 +0x074f:  push   %ebp
084baa39 +0x0750:  mov    %esp,%ebp
084baa3b +0x0752:  sub    $0x18,%esp
084baa3e +0x0755:  mov    0x8(%ebp),%eax
084baa41 +0x0758:  lea    0x8(%eax),%edx
084baa44 +0x075b:  mov    0x8(%ebp),%eax
084baa47 +0x075e:  add    $0x18,%eax
084baa4a +0x0761:  mov    %edx,0x4(%esp)
084baa4e +0x0765:  mov    %eax,(%esp)
084baa51 +0x0768:  call   084baea2 <+0xbb9>
084baa56 +0x076d:  leave
084baa57 +0x076e:  ret
084baa58 +0x076f:  push   %ebp
084baa59 +0x0770:  mov    %esp,%ebp
084baa5b +0x0772:  sub    $0x28,%esp
084baa5e +0x0775:  lea    -0x18(%ebp),%eax
084baa61 +0x0778:  mov    0x8(%ebp),%edx
084baa64 +0x077b:  mov    %edx,0x4(%esp)
084baa68 +0x077f:  mov    %eax,(%esp)
084baa6b +0x0782:  call   084ba944 <+0x65b>
084baa70 +0x0787:  sub    $0x4,%esp
084baa73 +0x078a:  lea    -0x18(%ebp),%eax
084baa76 +0x078d:  mov    %eax,(%esp)
084baa79 +0x0790:  call   084baeb6 <+0xbcd>
084baa7e +0x0795:  leave
084baa7f +0x0796:  ret
084baa80 +0x0797:  push   %ebp
084baa81 +0x0798:  mov    %esp,%ebp
084baa83 +0x079a:  sub    $0x18,%esp
084baa86 +0x079d:  mov    0x8(%ebp),%eax
084baa89 +0x07a0:  mov    0x8(%eax),%edx
084baa8c +0x07a3:  mov    0x8(%ebp),%eax
084baa8f +0x07a6:  mov    0x10(%eax),%eax
084baa92 +0x07a9:  sub    $0x4,%eax
084baa95 +0x07ac:  cmp    %eax,%edx
084baa97 +0x07ae:  je     084baabf <+0x7d6>
084baa99 +0x07b0:  mov    0x8(%ebp),%eax
084baa9c +0x07b3:  mov    0x8(%eax),%edx
084baa9f +0x07b6:  mov    0x8(%ebp),%eax
084baaa2 +0x07b9:  mov    %edx,0x4(%esp)
084baaa6 +0x07bd:  mov    %eax,(%esp)
084baaa9 +0x07c0:  call   084baec0 <+0xbd7>
084baaae +0x07c5:  mov    0x8(%ebp),%eax
084baab1 +0x07c8:  mov    0x8(%eax),%eax
084baab4 +0x07cb:  lea    0x4(%eax),%edx
084baab7 +0x07ce:  mov    0x8(%ebp),%eax
084baaba +0x07d1:  mov    %edx,0x8(%eax)
084baabd +0x07d4:  jmp    084baaca <+0x7e1>
084baabf +0x07d6:  mov    0x8(%ebp),%eax
084baac2 +0x07d9:  mov    %eax,(%esp)
084baac5 +0x07dc:  call   084baec6 <+0xbdd>
084baaca +0x07e1:  leave
084baacb +0x07e2:  ret
084baacc +0x07e3:  push   %ebp
084baacd +0x07e4:  mov    %esp,%ebp
084baacf +0x07e6:  sub    $0x18,%esp
084baad2 +0x07e9:  mov    0x8(%ebp),%eax
084baad5 +0x07ec:  mov    0x18(%eax),%edx
084baad8 +0x07ef:  mov    0x8(%ebp),%eax
084baadb +0x07f2:  mov    0x20(%eax),%eax
084baade +0x07f5:  sub    $0x4,%eax
084baae1 +0x07f8:  cmp    %eax,%edx
084baae3 +0x07fa:  je     084bab12 <+0x829>
084baae5 +0x07fc:  mov    0x8(%ebp),%eax
084baae8 +0x07ff:  mov    0x18(%eax),%edx
084baaeb +0x0802:  mov    0x8(%ebp),%eax
084baaee +0x0805:  mov    0xc(%ebp),%ecx
084baaf1 +0x0808:  mov    %ecx,0x8(%esp)
084baaf5 +0x080c:  mov    %edx,0x4(%esp)
084baaf9 +0x0810:  mov    %eax,(%esp)
084baafc +0x0813:  call   084baf20 <+0xc37>
084bab01 +0x0818:  mov    0x8(%ebp),%eax
084bab04 +0x081b:  mov    0x18(%eax),%eax
084bab07 +0x081e:  lea    0x4(%eax),%edx
084bab0a +0x0821:  mov    0x8(%ebp),%eax
084bab0d +0x0824:  mov    %edx,0x18(%eax)
084bab10 +0x0827:  jmp    084bab24 <+0x83b>
084bab12 +0x0829:  mov    0xc(%ebp),%eax
084bab15 +0x082c:  mov    %eax,0x4(%esp)
084bab19 +0x0830:  mov    0x8(%ebp),%eax
084bab1c +0x0833:  mov    %eax,(%esp)
084bab1f +0x0836:  call   084baf48 <+0xc5f>
084bab24 +0x083b:  leave
084bab25 +0x083c:  ret
084bab26 +0x083d:  push   %ebp
084bab27 +0x083e:  mov    %esp,%ebp
084bab29 +0x0840:  sub    $0x18,%esp
084bab2c +0x0843:  mov    0x8(%ebp),%eax
084bab2f +0x0846:  mov    %eax,(%esp)
084bab32 +0x0849:  call   084bb008 <+0xd1f>
084bab37 +0x084e:  mov    0x8(%ebp),%eax
084bab3a +0x0851:  movl   $0x0,(%eax)
084bab40 +0x0857:  mov    0x8(%ebp),%eax
084bab43 +0x085a:  movl   $0x0,0x4(%eax)
084bab4a +0x0861:  mov    0x8(%ebp),%eax
084bab4d +0x0864:  add    $0x8,%eax
084bab50 +0x0867:  mov    %eax,(%esp)
084bab53 +0x086a:  call   084bb01c <+0xd33>
084bab58 +0x086f:  mov    0x8(%ebp),%eax
084bab5b +0x0872:  add    $0x18,%eax
084bab5e +0x0875:  mov    %eax,(%esp)
084bab61 +0x0878:  call   084bb01c <+0xd33>
084bab66 +0x087d:  leave
084bab67 +0x087e:  ret
084bab68 +0x087f:  push   %ebp
084bab69 +0x0880:  mov    %esp,%ebp
084bab6b +0x0882:  sub    $0x18,%esp
084bab6e +0x0885:  mov    0x8(%ebp),%eax
084bab71 +0x0888:  mov    %eax,(%esp)
084bab74 +0x088b:  call   084bb048 <+0xd5f>
084bab79 +0x0890:  leave
084bab7a +0x0891:  ret
084bab7b +0x0892:  nop
084bab7c +0x0893:  push   %ebp
084bab7d +0x0894:  mov    %esp,%ebp
084bab7f +0x0896:  push   %esi
084bab80 +0x0897:  push   %ebx
084bab81 +0x0898:  sub    $0x40,%esp
084bab84 +0x089b:  movl   $0x4,(%esp)
084bab8b +0x08a2:  call   080ee3bb <_GLOBAL__I__Z26ProcessAntiBotInputWrapperv+0x1c>  ; global constructors keyed to ProcessAntiBotInputWrapper()+0x1c
084bab90 +0x08a7:  mov    %eax,-0x2c(%ebp)
084bab93 +0x08aa:  mov    0xc(%ebp),%eax
084bab96 +0x08ad:  mov    $0x0,%edx
084bab9b +0x08b2:  divl   -0x2c(%ebp)
084bab9e +0x08b5:  add    $0x1,%eax
084baba1 +0x08b8:  mov    %eax,-0x14(%ebp)
084baba4 +0x08bb:  mov    -0x14(%ebp),%eax
084baba7 +0x08be:  add    $0x2,%eax
084babaa +0x08c1:  mov    %eax,-0x1c(%ebp)
084babad +0x08c4:  movl   $0x8,-0x18(%ebp)
084babb4 +0x08cb:  lea    -0x1c(%ebp),%eax
084babb7 +0x08ce:  mov    %eax,0x4(%esp)
084babbb +0x08d2:  lea    -0x18(%ebp),%eax
084babbe +0x08d5:  mov    %eax,(%esp)
084babc1 +0x08d8:  call   0807f531 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x601>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x601
084babc6 +0x08dd:  mov    (%eax),%edx
084babc8 +0x08df:  mov    0x8(%ebp),%eax
084babcb +0x08e2:  mov    %edx,0x4(%eax)
084babce +0x08e5:  mov    0x8(%ebp),%eax
084babd1 +0x08e8:  mov    0x4(%eax),%eax
084babd4 +0x08eb:  mov    %eax,0x4(%esp)
084babd8 +0x08ef:  mov    0x8(%ebp),%eax
084babdb +0x08f2:  mov    %eax,(%esp)
084babde +0x08f5:  call   084bb04e <+0xd65>
084babe3 +0x08fa:  mov    0x8(%ebp),%edx
084babe6 +0x08fd:  mov    %eax,(%edx)
084babe8 +0x08ff:  mov    0x8(%ebp),%eax
084babeb +0x0902:  mov    (%eax),%edx
084babed +0x0904:  mov    0x8(%ebp),%eax
084babf0 +0x0907:  mov    0x4(%eax),%eax
084babf3 +0x090a:  sub    -0x14(%ebp),%eax
084babf6 +0x090d:  shr    %eax
084babf8 +0x090f:  shl    $0x2,%eax
084babfb +0x0912:  lea    (%edx,%eax,1),%eax
084babfe +0x0915:  mov    %eax,-0x10(%ebp)
084bac01 +0x0918:  mov    -0x14(%ebp),%eax
084bac04 +0x091b:  shl    $0x2,%eax
084bac07 +0x091e:  add    -0x10(%ebp),%eax
084bac0a +0x0921:  mov    %eax,-0xc(%ebp)
084bac0d +0x0924:  mov    -0xc(%ebp),%eax
084bac10 +0x0927:  mov    %eax,0x8(%esp)
084bac14 +0x092b:  mov    -0x10(%ebp),%eax
084bac17 +0x092e:  mov    %eax,0x4(%esp)
084bac1b +0x0932:  mov    0x8(%ebp),%eax
084bac1e +0x0935:  mov    %eax,(%esp)
084bac21 +0x0938:  call   084bb0ba <+0xdd1>
084bac26 +0x093d:  jmp    084bac7b <+0x992>
084bac28 +0x093f:  mov    %eax,(%esp)
084bac2b +0x0942:  call   08725ce0 <__cxa_begin_catch>
084bac30 +0x0947:  mov    0x8(%ebp),%eax
084bac33 +0x094a:  mov    0x4(%eax),%edx
084bac36 +0x094d:  mov    0x8(%ebp),%eax
084bac39 +0x0950:  mov    (%eax),%eax
084bac3b +0x0952:  mov    %edx,0x8(%esp)
084bac3f +0x0956:  mov    %eax,0x4(%esp)
084bac43 +0x095a:  mov    0x8(%ebp),%eax
084bac46 +0x095d:  mov    %eax,(%esp)
084bac49 +0x0960:  call   084bad22 <+0xa39>
084bac4e +0x0965:  mov    0x8(%ebp),%eax
084bac51 +0x0968:  movl   $0x0,(%eax)
084bac57 +0x096e:  mov    0x8(%ebp),%eax
084bac5a +0x0971:  movl   $0x0,0x4(%eax)
084bac61 +0x0978:  call   08724be0 <__cxa_rethrow>
084bac66 +0x097d:  mov    %edx,%ebx
084bac68 +0x097f:  mov    %eax,%esi
084bac6a +0x0981:  call   08725c30 <__cxa_end_catch>
084bac6f +0x0986:  mov    %esi,%eax
084bac71 +0x0988:  mov    %ebx,%edx
084bac73 +0x098a:  mov    %eax,(%esp)
084bac76 +0x098d:  call   08ae3750 <_Unwind_Resume>
084bac7b +0x0992:  mov    0x8(%ebp),%eax
084bac7e +0x0995:  lea    0x8(%eax),%edx
084bac81 +0x0998:  mov    -0x10(%ebp),%eax
084bac84 +0x099b:  mov    %eax,0x4(%esp)
084bac88 +0x099f:  mov    %edx,(%esp)
084bac8b +0x09a2:  call   084bb130 <+0xe47>
084bac90 +0x09a7:  mov    -0xc(%ebp),%eax
084bac93 +0x09aa:  lea    -0x4(%eax),%edx
084bac96 +0x09ad:  mov    0x8(%ebp),%eax
084bac99 +0x09b0:  add    $0x18,%eax
084bac9c +0x09b3:  mov    %edx,0x4(%esp)
084baca0 +0x09b7:  mov    %eax,(%esp)
084baca3 +0x09ba:  call   084bb130 <+0xe47>
084baca8 +0x09bf:  mov    0x8(%ebp),%eax
084bacab +0x09c2:  mov    0xc(%eax),%edx
084bacae +0x09c5:  mov    0x8(%ebp),%eax
084bacb1 +0x09c8:  mov    %edx,0x8(%eax)
084bacb4 +0x09cb:  mov    0x8(%ebp),%eax
084bacb7 +0x09ce:  mov    0x1c(%eax),%ebx
084bacba +0x09d1:  movl   $0x4,(%esp)
084bacc1 +0x09d8:  call   080ee3bb <_GLOBAL__I__Z26ProcessAntiBotInputWrapperv+0x1c>  ; global constructors keyed to ProcessAntiBotInputWrapper()+0x1c
084bacc6 +0x09dd:  mov    %eax,-0x2c(%ebp)
084bacc9 +0x09e0:  mov    0xc(%ebp),%eax
084baccc +0x09e3:  mov    $0x0,%edx
084bacd1 +0x09e8:  divl   -0x2c(%ebp)
084bacd4 +0x09eb:  mov    %edx,%ecx
084bacd6 +0x09ed:  mov    %ecx,%eax
084bacd8 +0x09ef:  shl    $0x2,%eax
084bacdb +0x09f2:  lea    (%ebx,%eax,1),%edx
084bacde +0x09f5:  mov    0x8(%ebp),%eax
084bace1 +0x09f8:  mov    %edx,0x18(%eax)
084bace4 +0x09fb:  add    $0x40,%esp
084bace7 +0x09fe:  pop    %ebx
084bace8 +0x09ff:  pop    %esi
084bace9 +0x0a00:  pop    %ebp
084bacea +0x0a01:  ret
084baceb +0x0a02:  nop
084bacec +0x0a03:  push   %ebp
084baced +0x0a04:  mov    %esp,%ebp
084bacef +0x0a06:  sub    $0x28,%esp
084bacf2 +0x0a09:  mov    0xc(%ebp),%eax
084bacf5 +0x0a0c:  mov    %eax,-0xc(%ebp)
084bacf8 +0x0a0f:  jmp    084bad12 <+0xa29>
084bacfa +0x0a11:  mov    -0xc(%ebp),%eax
084bacfd +0x0a14:  mov    (%eax),%eax
084bacff +0x0a16:  mov    %eax,0x4(%esp)
084bad03 +0x0a1a:  mov    0x8(%ebp),%eax
084bad06 +0x0a1d:  mov    %eax,(%esp)
084bad09 +0x0a20:  call   084bb168 <+0xe7f>
084bad0e +0x0a25:  addl   $0x4,-0xc(%ebp)
084bad12 +0x0a29:  mov    -0xc(%ebp),%eax
084bad15 +0x0a2c:  cmp    0x10(%ebp),%eax
084bad18 +0x0a2f:  setb   %al
084bad1b +0x0a32:  test   %al,%al
084bad1d +0x0a34:  jne    084bacfa <+0xa11>
084bad1f +0x0a36:  leave
084bad20 +0x0a37:  ret
084bad21 +0x0a38:  nop
084bad22 +0x0a39:  push   %ebp
084bad23 +0x0a3a:  mov    %esp,%ebp
084bad25 +0x0a3c:  sub    $0x28,%esp
084bad28 +0x0a3f:  lea    -0x9(%ebp),%eax
084bad2b +0x0a42:  mov    0x8(%ebp),%edx
084bad2e +0x0a45:  mov    %edx,0x4(%esp)
084bad32 +0x0a49:  mov    %eax,(%esp)
084bad35 +0x0a4c:  call   084bb192 <+0xea9>
084bad3a +0x0a51:  sub    $0x4,%esp
084bad3d +0x0a54:  lea    -0x9(%ebp),%eax
084bad40 +0x0a57:  mov    0x10(%ebp),%edx
084bad43 +0x0a5a:  mov    %edx,0x8(%esp)
084bad47 +0x0a5e:  mov    0xc(%ebp),%edx
084bad4a +0x0a61:  mov    %edx,0x4(%esp)
084bad4e +0x0a65:  mov    %eax,(%esp)
084bad51 +0x0a68:  call   084bb1d8 <+0xeef>
084bad56 +0x0a6d:  lea    -0x9(%ebp),%eax
084bad59 +0x0a70:  mov    %eax,(%esp)
084bad5c +0x0a73:  call   084bb1c4 <+0xedb>
084bad61 +0x0a78:  leave
084bad62 +0x0a79:  ret
084bad63 +0x0a7a:  push   %ebp
084bad64 +0x0a7b:  mov    %esp,%ebp
084bad66 +0x0a7d:  mov    0x8(%ebp),%eax
084bad69 +0x0a80:  pop    %ebp
084bad6a +0x0a81:  ret
084bad6b +0x0a82:  nop
084bad6c +0x0a83:  push   %ebp
084bad6d +0x0a84:  mov    %esp,%ebp
084bad6f +0x0a86:  push   %esi
084bad70 +0x0a87:  push   %ebx
084bad71 +0x0a88:  sub    $0x10,%esp
084bad74 +0x0a8b:  mov    0xc(%ebp),%eax
084bad77 +0x0a8e:  mov    %eax,(%esp)
084bad7a +0x0a91:  call   084ba998 <+0x6af>
084bad7f +0x0a96:  mov    0x8(%ebp),%edx
084bad82 +0x0a99:  mov    %eax,0x4(%esp)
084bad86 +0x0a9d:  mov    %edx,(%esp)
084bad89 +0x0aa0:  call   084bb1ec <+0xf03>
084bad8e +0x0aa5:  movl   $0x0,0x4(%esp)
084bad96 +0x0aad:  mov    0x8(%ebp),%eax
084bad99 +0x0ab0:  mov    %eax,(%esp)
084bad9c +0x0ab3:  call   084bab7c <+0x893>
084bada1 +0x0ab8:  mov    0xc(%ebp),%eax
084bada4 +0x0abb:  mov    (%eax),%eax
084bada6 +0x0abd:  test   %eax,%eax
084bada8 +0x0abf:  je     084bae21 <+0xb38>
084badaa +0x0ac1:  mov    0xc(%ebp),%eax
084badad +0x0ac4:  lea    0x8(%eax),%edx
084badb0 +0x0ac7:  mov    0x8(%ebp),%eax
084badb3 +0x0aca:  add    $0x8,%eax
084badb6 +0x0acd:  mov    %edx,0x4(%esp)
084badba +0x0ad1:  mov    %eax,(%esp)
084badbd +0x0ad4:  call   084bb235 <+0xf4c>
084badc2 +0x0ad9:  mov    0xc(%ebp),%eax
084badc5 +0x0adc:  lea    0x18(%eax),%edx
084badc8 +0x0adf:  mov    0x8(%ebp),%eax
084badcb +0x0ae2:  add    $0x18,%eax
084badce +0x0ae5:  mov    %edx,0x4(%esp)
084badd2 +0x0ae9:  mov    %eax,(%esp)
084badd5 +0x0aec:  call   084bb235 <+0xf4c>
084badda +0x0af1:  mov    0xc(%ebp),%edx
084baddd +0x0af4:  mov    0x8(%ebp),%eax
084bade0 +0x0af7:  mov    %edx,0x4(%esp)
084bade4 +0x0afb:  mov    %eax,(%esp)
084bade7 +0x0afe:  call   084bb29f <+0xfb6>
084badec +0x0b03:  mov    0xc(%ebp),%eax
084badef +0x0b06:  lea    0x4(%eax),%edx
084badf2 +0x0b09:  mov    0x8(%ebp),%eax
084badf5 +0x0b0c:  add    $0x4,%eax
084badf8 +0x0b0f:  mov    %edx,0x4(%esp)
084badfc +0x0b13:  mov    %eax,(%esp)
084badff +0x0b16:  call   081026b9 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x16db>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x16db
084bae04 +0x0b1b:  jmp    084bae21 <+0xb38>
084bae06 +0x0b1d:  mov    %edx,%ebx
084bae08 +0x0b1f:  mov    %eax,%esi
084bae0a +0x0b21:  mov    0x8(%ebp),%eax
084bae0d +0x0b24:  mov    %eax,(%esp)
084bae10 +0x0b27:  call   084ba866 <+0x57d>
084bae15 +0x0b2c:  mov    %esi,%eax
084bae17 +0x0b2e:  mov    %ebx,%edx
084bae19 +0x0b30:  mov    %eax,(%esp)
084bae1c +0x0b33:  call   08ae3750 <_Unwind_Resume>
084bae21 +0x0b38:  add    $0x10,%esp
084bae24 +0x0b3b:  pop    %ebx
084bae25 +0x0b3c:  pop    %esi
084bae26 +0x0b3d:  pop    %ebp
084bae27 +0x0b3e:  ret
084bae28 +0x0b3f:  push   %ebp
084bae29 +0x0b40:  mov    %esp,%ebp
084bae2b +0x0b42:  sub    $0x28,%esp
084bae2e +0x0b45:  mov    0x8(%ebp),%eax
084bae31 +0x0b48:  mov    0x18(%eax),%edx
084bae34 +0x0b4b:  mov    0x8(%ebp),%eax
084bae37 +0x0b4e:  mov    0x20(%eax),%eax
084bae3a +0x0b51:  sub    $0x4,%eax
084bae3d +0x0b54:  cmp    %eax,%edx
084bae3f +0x0b56:  je     084bae7e <+0xb95>
084bae41 +0x0b58:  mov    0xc(%ebp),%eax
084bae44 +0x0b5b:  mov    %eax,(%esp)
084bae47 +0x0b5e:  call   084bb2db <+0xff2>
084bae4c +0x0b63:  mov    (%eax),%eax
084bae4e +0x0b65:  mov    %eax,-0x10(%ebp)
084bae51 +0x0b68:  mov    0x8(%ebp),%eax
084bae54 +0x0b6b:  mov    0x18(%eax),%edx
084bae57 +0x0b6e:  mov    0x8(%ebp),%eax
084bae5a +0x0b71:  lea    -0x10(%ebp),%ecx
084bae5d +0x0b74:  mov    %ecx,0x8(%esp)
084bae61 +0x0b78:  mov    %edx,0x4(%esp)
084bae65 +0x0b7c:  mov    %eax,(%esp)
084bae68 +0x0b7f:  call   084bb2e4 <+0xffb>
084bae6d +0x0b84:  mov    0x8(%ebp),%eax
084bae70 +0x0b87:  mov    0x18(%eax),%eax
084bae73 +0x0b8a:  lea    0x4(%eax),%edx
084bae76 +0x0b8d:  mov    0x8(%ebp),%eax
084bae79 +0x0b90:  mov    %edx,0x18(%eax)
084bae7c +0x0b93:  jmp    084baea0 <+0xbb7>
084bae7e +0x0b95:  mov    0xc(%ebp),%eax
084bae81 +0x0b98:  mov    %eax,(%esp)
084bae84 +0x0b9b:  call   084bb2db <+0xff2>
084bae89 +0x0ba0:  mov    (%eax),%eax
084bae8b +0x0ba2:  mov    %eax,-0xc(%ebp)
084bae8e +0x0ba5:  lea    -0xc(%ebp),%eax
084bae91 +0x0ba8:  mov    %eax,0x4(%esp)
084bae95 +0x0bac:  mov    0x8(%ebp),%eax
084bae98 +0x0baf:  mov    %eax,(%esp)
084bae9b +0x0bb2:  call   084bb31a <+0x1031>
084baea0 +0x0bb7:  leave
084baea1 +0x0bb8:  ret
084baea2 +0x0bb9:  push   %ebp
084baea3 +0x0bba:  mov    %esp,%ebp
084baea5 +0x0bbc:  mov    0x8(%ebp),%eax
084baea8 +0x0bbf:  mov    (%eax),%edx
084baeaa +0x0bc1:  mov    0xc(%ebp),%eax
084baead +0x0bc4:  mov    (%eax),%eax
084baeaf +0x0bc6:  cmp    %eax,%edx
084baeb1 +0x0bc8:  sete   %al
084baeb4 +0x0bcb:  pop    %ebp
084baeb5 +0x0bcc:  ret
084baeb6 +0x0bcd:  push   %ebp
084baeb7 +0x0bce:  mov    %esp,%ebp
084baeb9 +0x0bd0:  mov    0x8(%ebp),%eax
084baebc +0x0bd3:  mov    (%eax),%eax
084baebe +0x0bd5:  pop    %ebp
084baebf +0x0bd6:  ret
084baec0 +0x0bd7:  push   %ebp
084baec1 +0x0bd8:  mov    %esp,%ebp
084baec3 +0x0bda:  pop    %ebp
084baec4 +0x0bdb:  ret
084baec5 +0x0bdc:  nop
084baec6 +0x0bdd:  push   %ebp
084baec7 +0x0bde:  mov    %esp,%ebp
084baec9 +0x0be0:  sub    $0x18,%esp
084baecc +0x0be3:  mov    0x8(%ebp),%eax
084baecf +0x0be6:  mov    0x8(%eax),%edx
084baed2 +0x0be9:  mov    0x8(%ebp),%eax
084baed5 +0x0bec:  mov    %edx,0x4(%esp)
084baed9 +0x0bf0:  mov    %eax,(%esp)
084baedc +0x0bf3:  call   084baec0 <+0xbd7>
084baee1 +0x0bf8:  mov    0x8(%ebp),%eax
084baee4 +0x0bfb:  mov    0xc(%eax),%edx
084baee7 +0x0bfe:  mov    0x8(%ebp),%eax
084baeea +0x0c01:  mov    %edx,0x4(%esp)
084baeee +0x0c05:  mov    %eax,(%esp)
084baef1 +0x0c08:  call   084bb168 <+0xe7f>
084baef6 +0x0c0d:  mov    0x8(%ebp),%eax
084baef9 +0x0c10:  mov    0x14(%eax),%eax
084baefc +0x0c13:  lea    0x4(%eax),%edx
084baeff +0x0c16:  mov    0x8(%ebp),%eax
084baf02 +0x0c19:  add    $0x8,%eax
084baf05 +0x0c1c:  mov    %edx,0x4(%esp)
084baf09 +0x0c20:  mov    %eax,(%esp)
084baf0c +0x0c23:  call   084bb130 <+0xe47>
084baf11 +0x0c28:  mov    0x8(%ebp),%eax
084baf14 +0x0c2b:  mov    0xc(%eax),%edx
084baf17 +0x0c2e:  mov    0x8(%ebp),%eax
084baf1a +0x0c31:  mov    %edx,0x8(%eax)
084baf1d +0x0c34:  leave
084baf1e +0x0c35:  ret
084baf1f +0x0c36:  nop
084baf20 +0x0c37:  push   %ebp
084baf21 +0x0c38:  mov    %esp,%ebp
084baf23 +0x0c3a:  sub    $0x18,%esp
084baf26 +0x0c3d:  mov    0xc(%ebp),%eax
084baf29 +0x0c40:  mov    %eax,0x4(%esp)
084baf2d +0x0c44:  movl   $0x4,(%esp)
084baf34 +0x0c4b:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
084baf39 +0x0c50:  mov    %eax,%edx
084baf3b +0x0c52:  test   %edx,%edx
084baf3d +0x0c54:  je     084baf46 <+0xc5d>
084baf3f +0x0c56:  mov    0x10(%ebp),%edx
084baf42 +0x0c59:  mov    (%edx),%edx
084baf44 +0x0c5b:  mov    %edx,(%eax)
084baf46 +0x0c5d:  leave
084baf47 +0x0c5e:  ret
084baf48 +0x0c5f:  push   %ebp
084baf49 +0x0c60:  mov    %esp,%ebp
084baf4b +0x0c62:  push   %esi
084baf4c +0x0c63:  push   %ebx
084baf4d +0x0c64:  sub    $0x10,%esp
084baf50 +0x0c67:  movl   $0x1,0x4(%esp)
084baf58 +0x0c6f:  mov    0x8(%ebp),%eax
084baf5b +0x0c72:  mov    %eax,(%esp)
084baf5e +0x0c75:  call   084bb3a4 <+0x10bb>
084baf63 +0x0c7a:  mov    0x8(%ebp),%eax
084baf66 +0x0c7d:  mov    0x24(%eax),%eax
084baf69 +0x0c80:  lea    0x4(%eax),%ebx
084baf6c +0x0c83:  mov    0x8(%ebp),%eax
084baf6f +0x0c86:  mov    %eax,(%esp)
084baf72 +0x0c89:  call   084bb3fa <+0x1111>
084baf77 +0x0c8e:  mov    %eax,(%ebx)
084baf79 +0x0c90:  mov    0xc(%ebp),%eax
084baf7c +0x0c93:  mov    %eax,(%esp)
084baf7f +0x0c96:  call   084bb425 <+0x113c>
084baf84 +0x0c9b:  mov    0x8(%ebp),%edx
084baf87 +0x0c9e:  mov    0x18(%edx),%ecx
084baf8a +0x0ca1:  mov    0x8(%ebp),%edx
084baf8d +0x0ca4:  mov    %eax,0x8(%esp)
084baf91 +0x0ca8:  mov    %ecx,0x4(%esp)
084baf95 +0x0cac:  mov    %edx,(%esp)
084baf98 +0x0caf:  call   084baf20 <+0xc37>
084baf9d +0x0cb4:  mov    0x8(%ebp),%eax
084bafa0 +0x0cb7:  mov    0x24(%eax),%eax
084bafa3 +0x0cba:  lea    0x4(%eax),%edx
084bafa6 +0x0cbd:  mov    0x8(%ebp),%eax
084bafa9 +0x0cc0:  add    $0x18,%eax
084bafac +0x0cc3:  mov    %edx,0x4(%esp)
084bafb0 +0x0cc7:  mov    %eax,(%esp)
084bafb3 +0x0cca:  call   084bb130 <+0xe47>
084bafb8 +0x0ccf:  mov    0x8(%ebp),%eax
084bafbb +0x0cd2:  mov    0x1c(%eax),%edx
084bafbe +0x0cd5:  mov    0x8(%ebp),%eax
084bafc1 +0x0cd8:  mov    %edx,0x18(%eax)
084bafc4 +0x0cdb:  add    $0x10,%esp
084bafc7 +0x0cde:  pop    %ebx
084bafc8 +0x0cdf:  pop    %esi
084bafc9 +0x0ce0:  pop    %ebp
084bafca +0x0ce1:  ret
084bafcb +0x0ce2:  mov    %eax,(%esp)
084bafce +0x0ce5:  call   08725ce0 <__cxa_begin_catch>
084bafd3 +0x0cea:  mov    0x8(%ebp),%eax
084bafd6 +0x0ced:  mov    0x24(%eax),%eax
084bafd9 +0x0cf0:  add    $0x4,%eax
084bafdc +0x0cf3:  mov    (%eax),%edx
084bafde +0x0cf5:  mov    0x8(%ebp),%eax
084bafe1 +0x0cf8:  mov    %edx,0x4(%esp)
084bafe5 +0x0cfc:  mov    %eax,(%esp)
084bafe8 +0x0cff:  call   084bb168 <+0xe7f>
084bafed +0x0d04:  call   08724be0 <__cxa_rethrow>
084baff2 +0x0d09:  mov    %edx,%ebx
084baff4 +0x0d0b:  mov    %eax,%esi
084baff6 +0x0d0d:  call   08725c30 <__cxa_end_catch>
084baffb +0x0d12:  mov    %esi,%eax
084baffd +0x0d14:  mov    %ebx,%edx
084bafff +0x0d16:  mov    %eax,(%esp)
084bb002 +0x0d19:  call   08ae3750 <_Unwind_Resume>
084bb007 +0x0d1e:  nop
084bb008 +0x0d1f:  push   %ebp
084bb009 +0x0d20:  mov    %esp,%ebp
084bb00b +0x0d22:  sub    $0x18,%esp
084bb00e +0x0d25:  mov    0x8(%ebp),%eax
084bb011 +0x0d28:  mov    %eax,(%esp)
084bb014 +0x0d2b:  call   084bb42e <+0x1145>
084bb019 +0x0d30:  leave
084bb01a +0x0d31:  ret
084bb01b +0x0d32:  nop
084bb01c +0x0d33:  push   %ebp
084bb01d +0x0d34:  mov    %esp,%ebp
084bb01f +0x0d36:  mov    0x8(%ebp),%eax
084bb022 +0x0d39:  movl   $0x0,(%eax)
084bb028 +0x0d3f:  mov    0x8(%ebp),%eax
084bb02b +0x0d42:  movl   $0x0,0x4(%eax)
084bb032 +0x0d49:  mov    0x8(%ebp),%eax
084bb035 +0x0d4c:  movl   $0x0,0x8(%eax)
084bb03c +0x0d53:  mov    0x8(%ebp),%eax
084bb03f +0x0d56:  movl   $0x0,0xc(%eax)
084bb046 +0x0d5d:  pop    %ebp
084bb047 +0x0d5e:  ret
084bb048 +0x0d5f:  push   %ebp
084bb049 +0x0d60:  mov    %esp,%ebp
084bb04b +0x0d62:  pop    %ebp
084bb04c +0x0d63:  ret
084bb04d +0x0d64:  nop
084bb04e +0x0d65:  push   %ebp
084bb04f +0x0d66:  mov    %esp,%ebp
084bb051 +0x0d68:  push   %esi
084bb052 +0x0d69:  push   %ebx
084bb053 +0x0d6a:  sub    $0x20,%esp
084bb056 +0x0d6d:  lea    -0x9(%ebp),%eax
084bb059 +0x0d70:  mov    0x8(%ebp),%edx
084bb05c +0x0d73:  mov    %edx,0x4(%esp)
084bb060 +0x0d77:  mov    %eax,(%esp)
084bb063 +0x0d7a:  call   084bb192 <+0xea9>
084bb068 +0x0d7f:  sub    $0x4,%esp
084bb06b +0x0d82:  lea    -0x9(%ebp),%eax
084bb06e +0x0d85:  movl   $0x0,0x8(%esp)
084bb076 +0x0d8d:  mov    0xc(%ebp),%edx
084bb079 +0x0d90:  mov    %edx,0x4(%esp)
084bb07d +0x0d94:  mov    %eax,(%esp)
084bb080 +0x0d97:  call   084bb434 <+0x114b>
084bb085 +0x0d9c:  mov    %eax,%ebx
084bb087 +0x0d9e:  lea    -0x9(%ebp),%eax
084bb08a +0x0da1:  mov    %eax,(%esp)
084bb08d +0x0da4:  call   084bb1c4 <+0xedb>
084bb092 +0x0da9:  mov    %ebx,%eax
084bb094 +0x0dab:  lea    -0x8(%ebp),%esp
084bb097 +0x0dae:  add    $0x0,%esp
084bb09a +0x0db1:  pop    %ebx
084bb09b +0x0db2:  pop    %esi
084bb09c +0x0db3:  pop    %ebp
084bb09d +0x0db4:  ret
084bb09e +0x0db5:  mov    %edx,%ebx
084bb0a0 +0x0db7:  mov    %eax,%esi
084bb0a2 +0x0db9:  lea    -0x9(%ebp),%eax
084bb0a5 +0x0dbc:  mov    %eax,(%esp)
084bb0a8 +0x0dbf:  call   084bb1c4 <+0xedb>
084bb0ad +0x0dc4:  mov    %esi,%eax
084bb0af +0x0dc6:  mov    %ebx,%edx
084bb0b1 +0x0dc8:  mov    %eax,(%esp)
084bb0b4 +0x0dcb:  call   08ae3750 <_Unwind_Resume>
084bb0b9 +0x0dd0:  nop
084bb0ba +0x0dd1:  push   %ebp
084bb0bb +0x0dd2:  mov    %esp,%ebp
084bb0bd +0x0dd4:  push   %esi
084bb0be +0x0dd5:  push   %ebx
084bb0bf +0x0dd6:  sub    $0x20,%esp
084bb0c2 +0x0dd9:  mov    0xc(%ebp),%eax
084bb0c5 +0x0ddc:  mov    %eax,-0xc(%ebp)
084bb0c8 +0x0ddf:  jmp    084bb0de <+0xdf5>
084bb0ca +0x0de1:  mov    0x8(%ebp),%eax
084bb0cd +0x0de4:  mov    %eax,(%esp)
084bb0d0 +0x0de7:  call   084bb3fa <+0x1111>
084bb0d5 +0x0dec:  mov    -0xc(%ebp),%edx
084bb0d8 +0x0def:  mov    %eax,(%edx)
084bb0da +0x0df1:  addl   $0x4,-0xc(%ebp)
084bb0de +0x0df5:  mov    -0xc(%ebp),%eax
084bb0e1 +0x0df8:  cmp    0x10(%ebp),%eax
084bb0e4 +0x0dfb:  setb   %al
084bb0e7 +0x0dfe:  test   %al,%al
084bb0e9 +0x0e00:  jne    084bb0ca <+0xde1>
084bb0eb +0x0e02:  jmp    084bb128 <+0xe3f>
084bb0ed +0x0e04:  mov    %eax,(%esp)
084bb0f0 +0x0e07:  call   08725ce0 <__cxa_begin_catch>
084bb0f5 +0x0e0c:  mov    -0xc(%ebp),%eax
084bb0f8 +0x0e0f:  mov    %eax,0x8(%esp)
084bb0fc +0x0e13:  mov    0xc(%ebp),%eax
084bb0ff +0x0e16:  mov    %eax,0x4(%esp)
084bb103 +0x0e1a:  mov    0x8(%ebp),%eax
084bb106 +0x0e1d:  mov    %eax,(%esp)
084bb109 +0x0e20:  call   084bacec <+0xa03>
084bb10e +0x0e25:  call   08724be0 <__cxa_rethrow>
084bb113 +0x0e2a:  mov    %edx,%ebx
084bb115 +0x0e2c:  mov    %eax,%esi
084bb117 +0x0e2e:  call   08725c30 <__cxa_end_catch>
084bb11c +0x0e33:  mov    %esi,%eax
084bb11e +0x0e35:  mov    %ebx,%edx
084bb120 +0x0e37:  mov    %eax,(%esp)
084bb123 +0x0e3a:  call   08ae3750 <_Unwind_Resume>
084bb128 +0x0e3f:  add    $0x20,%esp
084bb12b +0x0e42:  pop    %ebx
084bb12c +0x0e43:  pop    %esi
084bb12d +0x0e44:  pop    %ebp
084bb12e +0x0e45:  ret
084bb12f +0x0e46:  nop
084bb130 +0x0e47:  push   %ebp
084bb131 +0x0e48:  mov    %esp,%ebp
084bb133 +0x0e4a:  push   %ebx
084bb134 +0x0e4b:  sub    $0x4,%esp
084bb137 +0x0e4e:  mov    0x8(%ebp),%eax
084bb13a +0x0e51:  mov    0xc(%ebp),%edx
084bb13d +0x0e54:  mov    %edx,0xc(%eax)
084bb140 +0x0e57:  mov    0xc(%ebp),%eax
084bb143 +0x0e5a:  mov    (%eax),%edx
084bb145 +0x0e5c:  mov    0x8(%ebp),%eax
084bb148 +0x0e5f:  mov    %edx,0x4(%eax)
084bb14b +0x0e62:  mov    0x8(%ebp),%eax
084bb14e +0x0e65:  mov    0x4(%eax),%ebx
084bb151 +0x0e68:  call   084bb46c <+0x1183>
084bb156 +0x0e6d:  shl    $0x2,%eax
084bb159 +0x0e70:  lea    (%ebx,%eax,1),%edx
084bb15c +0x0e73:  mov    0x8(%ebp),%eax
084bb15f +0x0e76:  mov    %edx,0x8(%eax)
084bb162 +0x0e79:  add    $0x4,%esp
084bb165 +0x0e7c:  pop    %ebx
084bb166 +0x0e7d:  pop    %ebp
084bb167 +0x0e7e:  ret
084bb168 +0x0e7f:  push   %ebp
084bb169 +0x0e80:  mov    %esp,%ebp
084bb16b +0x0e82:  sub    $0x18,%esp
084bb16e +0x0e85:  movl   $0x4,(%esp)
084bb175 +0x0e8c:  call   080ee3bb <_GLOBAL__I__Z26ProcessAntiBotInputWrapperv+0x1c>  ; global constructors keyed to ProcessAntiBotInputWrapper()+0x1c
084bb17a +0x0e91:  mov    0x8(%ebp),%edx
084bb17d +0x0e94:  mov    %eax,0x8(%esp)
084bb181 +0x0e98:  mov    0xc(%ebp),%eax
084bb184 +0x0e9b:  mov    %eax,0x4(%esp)
084bb188 +0x0e9f:  mov    %edx,(%esp)
084bb18b +0x0ea2:  call   084bb480 <+0x1197>
084bb190 +0x0ea7:  leave
084bb191 +0x0ea8:  ret
084bb192 +0x0ea9:  push   %ebp
084bb193 +0x0eaa:  mov    %esp,%ebp
084bb195 +0x0eac:  push   %esi
084bb196 +0x0ead:  push   %ebx
084bb197 +0x0eae:  sub    $0x10,%esp
084bb19a +0x0eb1:  mov    0x8(%ebp),%ebx
084bb19d +0x0eb4:  mov    %ebx,%esi
084bb19f +0x0eb6:  mov    0xc(%ebp),%eax
084bb1a2 +0x0eb9:  mov    %eax,(%esp)
084bb1a5 +0x0ebc:  call   084bb494 <+0x11ab>
084bb1aa +0x0ec1:  mov    %eax,0x4(%esp)
084bb1ae +0x0ec5:  mov    %esi,(%esp)
084bb1b1 +0x0ec8:  call   084bb49c <+0x11b3>
084bb1b6 +0x0ecd:  mov    %ebx,%eax
084bb1b8 +0x0ecf:  mov    %ebx,%eax
084bb1ba +0x0ed1:  add    $0x10,%esp
084bb1bd +0x0ed4:  pop    %ebx
084bb1be +0x0ed5:  pop    %esi
084bb1bf +0x0ed6:  pop    %ebp
084bb1c0 +0x0ed7:  ret    $0x4
084bb1c3 +0x0eda:  nop
084bb1c4 +0x0edb:  push   %ebp
084bb1c5 +0x0edc:  mov    %esp,%ebp
084bb1c7 +0x0ede:  sub    $0x18,%esp
084bb1ca +0x0ee1:  mov    0x8(%ebp),%eax
084bb1cd +0x0ee4:  mov    %eax,(%esp)
084bb1d0 +0x0ee7:  call   084bb4b0 <+0x11c7>
084bb1d5 +0x0eec:  leave
084bb1d6 +0x0eed:  ret
084bb1d7 +0x0eee:  nop
084bb1d8 +0x0eef:  push   %ebp
084bb1d9 +0x0ef0:  mov    %esp,%ebp
084bb1db +0x0ef2:  sub    $0x18,%esp
084bb1de +0x0ef5:  mov    0xc(%ebp),%eax
084bb1e1 +0x0ef8:  mov    %eax,(%esp)
084bb1e4 +0x0efb:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
084bb1e9 +0x0f00:  leave
084bb1ea +0x0f01:  ret
084bb1eb +0x0f02:  nop
084bb1ec +0x0f03:  push   %ebp
084bb1ed +0x0f04:  mov    %esp,%ebp
084bb1ef +0x0f06:  sub    $0x18,%esp
084bb1f2 +0x0f09:  mov    0x8(%ebp),%eax
084bb1f5 +0x0f0c:  mov    0xc(%ebp),%edx
084bb1f8 +0x0f0f:  mov    %edx,0x4(%esp)
084bb1fc +0x0f13:  mov    %eax,(%esp)
084bb1ff +0x0f16:  call   084bb4b6 <+0x11cd>
084bb204 +0x0f1b:  mov    0x8(%ebp),%eax
084bb207 +0x0f1e:  movl   $0x0,(%eax)
084bb20d +0x0f24:  mov    0x8(%ebp),%eax
084bb210 +0x0f27:  movl   $0x0,0x4(%eax)
084bb217 +0x0f2e:  mov    0x8(%ebp),%eax
084bb21a +0x0f31:  add    $0x8,%eax
084bb21d +0x0f34:  mov    %eax,(%esp)
084bb220 +0x0f37:  call   084bb01c <+0xd33>
084bb225 +0x0f3c:  mov    0x8(%ebp),%eax
084bb228 +0x0f3f:  add    $0x18,%eax
084bb22b +0x0f42:  mov    %eax,(%esp)
084bb22e +0x0f45:  call   084bb01c <+0xd33>
084bb233 +0x0f4a:  leave
084bb234 +0x0f4b:  ret
084bb235 +0x0f4c:  push   %ebp
084bb236 +0x0f4d:  mov    %esp,%ebp
084bb238 +0x0f4f:  sub    $0x28,%esp
084bb23b +0x0f52:  mov    0x8(%ebp),%eax
084bb23e +0x0f55:  mov    %eax,(%esp)
084bb241 +0x0f58:  call   084bb4d0 <+0x11e7>
084bb246 +0x0f5d:  mov    %eax,0x4(%esp)
084bb24a +0x0f61:  lea    -0x18(%ebp),%eax
084bb24d +0x0f64:  mov    %eax,(%esp)
084bb250 +0x0f67:  call   084ba9a0 <+0x6b7>
084bb255 +0x0f6c:  mov    0xc(%ebp),%eax
084bb258 +0x0f6f:  mov    %eax,(%esp)
084bb25b +0x0f72:  call   084bb4d0 <+0x11e7>
084bb260 +0x0f77:  mov    0x8(%ebp),%edx
084bb263 +0x0f7a:  mov    (%eax),%ecx
084bb265 +0x0f7c:  mov    %ecx,(%edx)
084bb267 +0x0f7e:  mov    0x4(%eax),%ecx
084bb26a +0x0f81:  mov    %ecx,0x4(%edx)
084bb26d +0x0f84:  mov    0x8(%eax),%ecx
084bb270 +0x0f87:  mov    %ecx,0x8(%edx)
084bb273 +0x0f8a:  mov    0xc(%eax),%eax
084bb276 +0x0f8d:  mov    %eax,0xc(%edx)
084bb279 +0x0f90:  lea    -0x18(%ebp),%eax
084bb27c +0x0f93:  mov    %eax,(%esp)
084bb27f +0x0f96:  call   084bb4d0 <+0x11e7>
084bb284 +0x0f9b:  mov    0xc(%ebp),%edx
084bb287 +0x0f9e:  mov    (%eax),%ecx
084bb289 +0x0fa0:  mov    %ecx,(%edx)
084bb28b +0x0fa2:  mov    0x4(%eax),%ecx
084bb28e +0x0fa5:  mov    %ecx,0x4(%edx)
084bb291 +0x0fa8:  mov    0x8(%eax),%ecx
084bb294 +0x0fab:  mov    %ecx,0x8(%edx)
084bb297 +0x0fae:  mov    0xc(%eax),%eax
084bb29a +0x0fb1:  mov    %eax,0xc(%edx)
084bb29d +0x0fb4:  leave
084bb29e +0x0fb5:  ret
084bb29f +0x0fb6:  push   %ebp
084bb2a0 +0x0fb7:  mov    %esp,%ebp
084bb2a2 +0x0fb9:  sub    $0x28,%esp
084bb2a5 +0x0fbc:  mov    0x8(%ebp),%eax
084bb2a8 +0x0fbf:  mov    %eax,(%esp)
084bb2ab +0x0fc2:  call   084bb4d8 <+0x11ef>
084bb2b0 +0x0fc7:  mov    (%eax),%eax
084bb2b2 +0x0fc9:  mov    %eax,-0xc(%ebp)
084bb2b5 +0x0fcc:  mov    0xc(%ebp),%eax
084bb2b8 +0x0fcf:  mov    %eax,(%esp)
084bb2bb +0x0fd2:  call   084bb4d8 <+0x11ef>
084bb2c0 +0x0fd7:  mov    (%eax),%edx
084bb2c2 +0x0fd9:  mov    0x8(%ebp),%eax
084bb2c5 +0x0fdc:  mov    %edx,(%eax)
084bb2c7 +0x0fde:  lea    -0xc(%ebp),%eax
084bb2ca +0x0fe1:  mov    %eax,(%esp)
084bb2cd +0x0fe4:  call   084bb4d8 <+0x11ef>
084bb2d2 +0x0fe9:  mov    (%eax),%edx
084bb2d4 +0x0feb:  mov    0xc(%ebp),%eax
084bb2d7 +0x0fee:  mov    %edx,(%eax)
084bb2d9 +0x0ff0:  leave
084bb2da +0x0ff1:  ret
084bb2db +0x0ff2:  push   %ebp
084bb2dc +0x0ff3:  mov    %esp,%ebp
084bb2de +0x0ff5:  mov    0x8(%ebp),%eax
084bb2e1 +0x0ff8:  pop    %ebp
084bb2e2 +0x0ff9:  ret
084bb2e3 +0x0ffa:  nop
084bb2e4 +0x0ffb:  push   %ebp
084bb2e5 +0x0ffc:  mov    %esp,%ebp
084bb2e7 +0x0ffe:  push   %ebx
084bb2e8 +0x0fff:  sub    $0x14,%esp
084bb2eb +0x1002:  mov    0x10(%ebp),%eax
084bb2ee +0x1005:  mov    %eax,(%esp)
084bb2f1 +0x1008:  call   084bb2db <+0xff2>
084bb2f6 +0x100d:  mov    (%eax),%ebx
084bb2f8 +0x100f:  mov    0xc(%ebp),%eax
084bb2fb +0x1012:  mov    %eax,0x4(%esp)
084bb2ff +0x1016:  movl   $0x4,(%esp)
084bb306 +0x101d:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
084bb30b +0x1022:  mov    %eax,%edx
084bb30d +0x1024:  test   %edx,%edx
084bb30f +0x1026:  je     084bb313 <+0x102a>
084bb311 +0x1028:  mov    %ebx,(%eax)
084bb313 +0x102a:  add    $0x14,%esp
084bb316 +0x102d:  pop    %ebx
084bb317 +0x102e:  pop    %ebp
084bb318 +0x102f:  ret
084bb319 +0x1030:  nop
084bb31a +0x1031:  push   %ebp
084bb31b +0x1032:  mov    %esp,%ebp
084bb31d +0x1034:  push   %ebx
084bb31e +0x1035:  sub    $0x24,%esp
084bb321 +0x1038:  movl   $0x1,0x4(%esp)
084bb329 +0x1040:  mov    0x8(%ebp),%eax
084bb32c +0x1043:  mov    %eax,(%esp)
084bb32f +0x1046:  call   084bb3a4 <+0x10bb>
084bb334 +0x104b:  mov    0x8(%ebp),%eax
084bb337 +0x104e:  mov    0x24(%eax),%eax
084bb33a +0x1051:  lea    0x4(%eax),%ebx
084bb33d +0x1054:  mov    0x8(%ebp),%eax
084bb340 +0x1057:  mov    %eax,(%esp)
084bb343 +0x105a:  call   084bb3fa <+0x1111>
084bb348 +0x105f:  mov    %eax,(%ebx)
084bb34a +0x1061:  mov    0xc(%ebp),%eax
084bb34d +0x1064:  mov    %eax,(%esp)
084bb350 +0x1067:  call   084bb2db <+0xff2>
084bb355 +0x106c:  mov    (%eax),%eax
084bb357 +0x106e:  mov    %eax,-0xc(%ebp)
084bb35a +0x1071:  mov    0x8(%ebp),%eax
084bb35d +0x1074:  mov    0x18(%eax),%edx
084bb360 +0x1077:  mov    0x8(%ebp),%eax
084bb363 +0x107a:  lea    -0xc(%ebp),%ecx
084bb366 +0x107d:  mov    %ecx,0x8(%esp)
084bb36a +0x1081:  mov    %edx,0x4(%esp)
084bb36e +0x1085:  mov    %eax,(%esp)
084bb371 +0x1088:  call   084bb2e4 <+0xffb>
084bb376 +0x108d:  mov    0x8(%ebp),%eax
084bb379 +0x1090:  mov    0x24(%eax),%eax
084bb37c +0x1093:  lea    0x4(%eax),%edx
084bb37f +0x1096:  mov    0x8(%ebp),%eax
084bb382 +0x1099:  add    $0x18,%eax
084bb385 +0x109c:  mov    %edx,0x4(%esp)
084bb389 +0x10a0:  mov    %eax,(%esp)
084bb38c +0x10a3:  call   084bb130 <+0xe47>
084bb391 +0x10a8:  mov    0x8(%ebp),%eax
084bb394 +0x10ab:  mov    0x1c(%eax),%edx
084bb397 +0x10ae:  mov    0x8(%ebp),%eax
084bb39a +0x10b1:  mov    %edx,0x18(%eax)
084bb39d +0x10b4:  add    $0x24,%esp
084bb3a0 +0x10b7:  pop    %ebx
084bb3a1 +0x10b8:  pop    %ebp
084bb3a2 +0x10b9:  ret
084bb3a3 +0x10ba:  nop
084bb3a4 +0x10bb:  push   %ebp
084bb3a5 +0x10bc:  mov    %esp,%ebp
084bb3a7 +0x10be:  push   %esi
084bb3a8 +0x10bf:  push   %ebx
084bb3a9 +0x10c0:  sub    $0x10,%esp
084bb3ac +0x10c3:  mov    0xc(%ebp),%eax
084bb3af +0x10c6:  lea    0x1(%eax),%ebx
084bb3b2 +0x10c9:  mov    0x8(%ebp),%eax
084bb3b5 +0x10cc:  mov    0x4(%eax),%edx
084bb3b8 +0x10cf:  mov    0x8(%ebp),%eax
084bb3bb +0x10d2:  mov    0x24(%eax),%eax
084bb3be +0x10d5:  mov    %eax,%ecx
084bb3c0 +0x10d7:  mov    0x8(%ebp),%eax
084bb3c3 +0x10da:  mov    (%eax),%eax
084bb3c5 +0x10dc:  mov    %ecx,%esi
084bb3c7 +0x10de:  sub    %eax,%esi
084bb3c9 +0x10e0:  mov    %esi,%eax
084bb3cb +0x10e2:  sar    $0x2,%eax
084bb3ce +0x10e5:  mov    %edx,%ecx
084bb3d0 +0x10e7:  sub    %eax,%ecx
084bb3d2 +0x10e9:  mov    %ecx,%eax
084bb3d4 +0x10eb:  cmp    %eax,%ebx
084bb3d6 +0x10ed:  jbe    084bb3f2 <+0x1109>
084bb3d8 +0x10ef:  movl   $0x0,0x8(%esp)
084bb3e0 +0x10f7:  mov    0xc(%ebp),%eax
084bb3e3 +0x10fa:  mov    %eax,0x4(%esp)
084bb3e7 +0x10fe:  mov    0x8(%ebp),%eax
084bb3ea +0x1101:  mov    %eax,(%esp)
084bb3ed +0x1104:  call   084bb4e0 <+0x11f7>
084bb3f2 +0x1109:  add    $0x10,%esp
084bb3f5 +0x110c:  pop    %ebx
084bb3f6 +0x110d:  pop    %esi
084bb3f7 +0x110e:  pop    %ebp
084bb3f8 +0x110f:  ret
084bb3f9 +0x1110:  nop
084bb3fa +0x1111:  push   %ebp
084bb3fb +0x1112:  mov    %esp,%ebp
084bb3fd +0x1114:  sub    $0x18,%esp
084bb400 +0x1117:  movl   $0x4,(%esp)
084bb407 +0x111e:  call   080ee3bb <_GLOBAL__I__Z26ProcessAntiBotInputWrapperv+0x1c>  ; global constructors keyed to ProcessAntiBotInputWrapper()+0x1c
084bb40c +0x1123:  mov    0x8(%ebp),%edx
084bb40f +0x1126:  movl   $0x0,0x8(%esp)
084bb417 +0x112e:  mov    %eax,0x4(%esp)
084bb41b +0x1132:  mov    %edx,(%esp)
084bb41e +0x1135:  call   084bb6b0 <+0x13c7>
084bb423 +0x113a:  leave
084bb424 +0x113b:  ret
084bb425 +0x113c:  push   %ebp
084bb426 +0x113d:  mov    %esp,%ebp
084bb428 +0x113f:  mov    0x8(%ebp),%eax
084bb42b +0x1142:  pop    %ebp
084bb42c +0x1143:  ret
084bb42d +0x1144:  nop
084bb42e +0x1145:  push   %ebp
084bb42f +0x1146:  mov    %esp,%ebp
084bb431 +0x1148:  pop    %ebp
084bb432 +0x1149:  ret
084bb433 +0x114a:  nop
084bb434 +0x114b:  push   %ebp
084bb435 +0x114c:  mov    %esp,%ebp
084bb437 +0x114e:  sub    $0x18,%esp
084bb43a +0x1151:  mov    0x8(%ebp),%eax
084bb43d +0x1154:  mov    %eax,(%esp)
084bb440 +0x1157:  call   084bb6e8 <+0x13ff>
084bb445 +0x115c:  cmp    0xc(%ebp),%eax
084bb448 +0x115f:  setb   %al
084bb44b +0x1162:  movzbl %al,%eax
084bb44e +0x1165:  test   %eax,%eax
084bb450 +0x1167:  setne  %al
084bb453 +0x116a:  test   %al,%al
084bb455 +0x116c:  je     084bb45c <+0x1173>
084bb457 +0x116e:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
084bb45c +0x1173:  mov    0xc(%ebp),%eax
084bb45f +0x1176:  shl    $0x2,%eax
084bb462 +0x1179:  mov    %eax,(%esp)
084bb465 +0x117c:  call   08724450 <_Znwj>  ; operator new(unsigned int)
084bb46a +0x1181:  leave
084bb46b +0x1182:  ret
084bb46c +0x1183:  push   %ebp
084bb46d +0x1184:  mov    %esp,%ebp
084bb46f +0x1186:  sub    $0x18,%esp
084bb472 +0x1189:  movl   $0x4,(%esp)
084bb479 +0x1190:  call   080ee3bb <_GLOBAL__I__Z26ProcessAntiBotInputWrapperv+0x1c>  ; global constructors keyed to ProcessAntiBotInputWrapper()+0x1c
084bb47e +0x1195:  leave
084bb47f +0x1196:  ret
084bb480 +0x1197:  push   %ebp
084bb481 +0x1198:  mov    %esp,%ebp
084bb483 +0x119a:  sub    $0x18,%esp
084bb486 +0x119d:  mov    0xc(%ebp),%eax
084bb489 +0x11a0:  mov    %eax,(%esp)
084bb48c +0x11a3:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
084bb491 +0x11a8:  leave
084bb492 +0x11a9:  ret
084bb493 +0x11aa:  nop
084bb494 +0x11ab:  push   %ebp
084bb495 +0x11ac:  mov    %esp,%ebp
084bb497 +0x11ae:  mov    0x8(%ebp),%eax
084bb49a +0x11b1:  pop    %ebp
084bb49b +0x11b2:  ret
084bb49c +0x11b3:  push   %ebp
084bb49d +0x11b4:  mov    %esp,%ebp
084bb49f +0x11b6:  sub    $0x18,%esp
084bb4a2 +0x11b9:  mov    0x8(%ebp),%eax
084bb4a5 +0x11bc:  mov    %eax,(%esp)
084bb4a8 +0x11bf:  call   084bb6f2 <+0x1409>
084bb4ad +0x11c4:  leave
084bb4ae +0x11c5:  ret
084bb4af +0x11c6:  nop
084bb4b0 +0x11c7:  push   %ebp
084bb4b1 +0x11c8:  mov    %esp,%ebp
084bb4b3 +0x11ca:  pop    %ebp
084bb4b4 +0x11cb:  ret
084bb4b5 +0x11cc:  nop
084bb4b6 +0x11cd:  push   %ebp
084bb4b7 +0x11ce:  mov    %esp,%ebp
084bb4b9 +0x11d0:  sub    $0x18,%esp
084bb4bc +0x11d3:  mov    0xc(%ebp),%edx
084bb4bf +0x11d6:  mov    0x8(%ebp),%eax
084bb4c2 +0x11d9:  mov    %edx,0x4(%esp)
084bb4c6 +0x11dd:  mov    %eax,(%esp)
084bb4c9 +0x11e0:  call   084bb6f8 <+0x140f>
084bb4ce +0x11e5:  leave
084bb4cf +0x11e6:  ret
084bb4d0 +0x11e7:  push   %ebp
084bb4d1 +0x11e8:  mov    %esp,%ebp
084bb4d3 +0x11ea:  mov    0x8(%ebp),%eax
084bb4d6 +0x11ed:  pop    %ebp
084bb4d7 +0x11ee:  ret
084bb4d8 +0x11ef:  push   %ebp
084bb4d9 +0x11f0:  mov    %esp,%ebp
084bb4db +0x11f2:  mov    0x8(%ebp),%eax
084bb4de +0x11f5:  pop    %ebp
084bb4df +0x11f6:  ret
084bb4e0 +0x11f7:  push   %ebp
084bb4e1 +0x11f8:  mov    %esp,%ebp
084bb4e3 +0x11fa:  push   %ebx
084bb4e4 +0x11fb:  sub    $0x44,%esp
084bb4e7 +0x11fe:  mov    0x10(%ebp),%eax
084bb4ea +0x1201:  mov    %al,-0x2c(%ebp)
084bb4ed +0x1204:  mov    0x8(%ebp),%eax
084bb4f0 +0x1207:  mov    0x24(%eax),%eax
084bb4f3 +0x120a:  mov    %eax,%edx
084bb4f5 +0x120c:  mov    0x8(%ebp),%eax
084bb4f8 +0x120f:  mov    0x14(%eax),%eax
084bb4fb +0x1212:  mov    %edx,%ecx
084bb4fd +0x1214:  sub    %eax,%ecx
084bb4ff +0x1216:  mov    %ecx,%eax
084bb501 +0x1218:  sar    $0x2,%eax
084bb504 +0x121b:  add    $0x1,%eax
084bb507 +0x121e:  mov    %eax,-0x1c(%ebp)
084bb50a +0x1221:  mov    0xc(%ebp),%eax
084bb50d +0x1224:  add    -0x1c(%ebp),%eax
084bb510 +0x1227:  mov    %eax,-0x18(%ebp)
084bb513 +0x122a:  mov    0x8(%ebp),%eax
084bb516 +0x122d:  mov    0x4(%eax),%eax
084bb519 +0x1230:  mov    -0x18(%ebp),%edx
084bb51c +0x1233:  add    %edx,%edx
084bb51e +0x1235:  cmp    %edx,%eax
084bb520 +0x1237:  jbe    084bb5ba <+0x12d1>
084bb526 +0x123d:  mov    0x8(%ebp),%eax
084bb529 +0x1240:  mov    (%eax),%edx
084bb52b +0x1242:  mov    0x8(%ebp),%eax
084bb52e +0x1245:  mov    0x4(%eax),%eax
084bb531 +0x1248:  sub    -0x18(%ebp),%eax
084bb534 +0x124b:  shr    %eax
084bb536 +0x124d:  lea    0x0(,%eax,4),%ecx
084bb53d +0x1254:  cmpb   $0x0,-0x2c(%ebp)
084bb541 +0x1258:  je     084bb54b <+0x1262>
084bb543 +0x125a:  mov    0xc(%ebp),%eax
084bb546 +0x125d:  shl    $0x2,%eax
084bb549 +0x1260:  jmp    084bb550 <+0x1267>
084bb54b +0x1262:  mov    $0x0,%eax
084bb550 +0x1267:  lea    (%ecx,%eax,1),%eax
084bb553 +0x126a:  lea    (%edx,%eax,1),%eax
084bb556 +0x126d:  mov    %eax,-0x14(%ebp)
084bb559 +0x1270:  mov    0x8(%ebp),%eax
084bb55c +0x1273:  mov    0x14(%eax),%eax
084bb55f +0x1276:  cmp    -0x14(%ebp),%eax
084bb562 +0x1279:  jbe    084bb58b <+0x12a2>
084bb564 +0x127b:  mov    0x8(%ebp),%eax
084bb567 +0x127e:  mov    0x24(%eax),%eax
084bb56a +0x1281:  lea    0x4(%eax),%ecx
084bb56d +0x1284:  mov    0x8(%ebp),%eax
084bb570 +0x1287:  mov    0x14(%eax),%eax
084bb573 +0x128a:  mov    -0x14(%ebp),%edx
084bb576 +0x128d:  mov    %edx,0x8(%esp)
084bb57a +0x1291:  mov    %ecx,0x4(%esp)
084bb57e +0x1295:  mov    %eax,(%esp)
084bb581 +0x1298:  call   084bb6fd <+0x1414>
084bb586 +0x129d:  jmp    084bb677 <+0x138e>
084bb58b +0x12a2:  mov    -0x1c(%ebp),%eax
084bb58e +0x12a5:  shl    $0x2,%eax
084bb591 +0x12a8:  mov    %eax,%edx
084bb593 +0x12aa:  add    -0x14(%ebp),%edx
084bb596 +0x12ad:  mov    0x8(%ebp),%eax
084bb599 +0x12b0:  mov    0x24(%eax),%eax
084bb59c +0x12b3:  lea    0x4(%eax),%ecx
084bb59f +0x12b6:  mov    0x8(%ebp),%eax
084bb5a2 +0x12b9:  mov    0x14(%eax),%eax
084bb5a5 +0x12bc:  mov    %edx,0x8(%esp)
084bb5a9 +0x12c0:  mov    %ecx,0x4(%esp)
084bb5ad +0x12c4:  mov    %eax,(%esp)
084bb5b0 +0x12c7:  call   084bb735 <+0x144c>
084bb5b5 +0x12cc:  jmp    084bb677 <+0x138e>
084bb5ba +0x12d1:  mov    0x8(%ebp),%eax
084bb5bd +0x12d4:  mov    0x4(%eax),%ebx
084bb5c0 +0x12d7:  mov    0x8(%ebp),%eax
084bb5c3 +0x12da:  lea    0x4(%eax),%edx
084bb5c6 +0x12dd:  lea    0xc(%ebp),%eax
084bb5c9 +0x12e0:  mov    %eax,0x4(%esp)
084bb5cd +0x12e4:  mov    %edx,(%esp)
084bb5d0 +0x12e7:  call   0807f531 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x601>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x601
084bb5d5 +0x12ec:  mov    (%eax),%eax
084bb5d7 +0x12ee:  lea    (%ebx,%eax,1),%eax
084bb5da +0x12f1:  add    $0x2,%eax
084bb5dd +0x12f4:  mov    %eax,-0x10(%ebp)
084bb5e0 +0x12f7:  mov    0x8(%ebp),%eax
084bb5e3 +0x12fa:  mov    -0x10(%ebp),%edx
084bb5e6 +0x12fd:  mov    %edx,0x4(%esp)
084bb5ea +0x1301:  mov    %eax,(%esp)
084bb5ed +0x1304:  call   084bb04e <+0xd65>
084bb5f2 +0x1309:  mov    %eax,-0xc(%ebp)
084bb5f5 +0x130c:  mov    -0x18(%ebp),%eax
084bb5f8 +0x130f:  mov    -0x10(%ebp),%edx
084bb5fb +0x1312:  mov    %edx,%ecx
084bb5fd +0x1314:  sub    %eax,%ecx
084bb5ff +0x1316:  mov    %ecx,%eax
084bb601 +0x1318:  shr    %eax
084bb603 +0x131a:  lea    0x0(,%eax,4),%edx
084bb60a +0x1321:  cmpb   $0x0,-0x2c(%ebp)
084bb60e +0x1325:  je     084bb618 <+0x132f>
084bb610 +0x1327:  mov    0xc(%ebp),%eax
084bb613 +0x132a:  shl    $0x2,%eax
084bb616 +0x132d:  jmp    084bb61d <+0x1334>
084bb618 +0x132f:  mov    $0x0,%eax
084bb61d +0x1334:  lea    (%edx,%eax,1),%eax
084bb620 +0x1337:  add    -0xc(%ebp),%eax
084bb623 +0x133a:  mov    %eax,-0x14(%ebp)
084bb626 +0x133d:  mov    0x8(%ebp),%eax
084bb629 +0x1340:  mov    0x24(%eax),%eax
084bb62c +0x1343:  lea    0x4(%eax),%ecx
084bb62f +0x1346:  mov    0x8(%ebp),%eax
084bb632 +0x1349:  mov    0x14(%eax),%eax
084bb635 +0x134c:  mov    -0x14(%ebp),%edx
084bb638 +0x134f:  mov    %edx,0x8(%esp)
084bb63c +0x1353:  mov    %ecx,0x4(%esp)
084bb640 +0x1357:  mov    %eax,(%esp)
084bb643 +0x135a:  call   084bb6fd <+0x1414>
084bb648 +0x135f:  mov    0x8(%ebp),%eax
084bb64b +0x1362:  mov    0x4(%eax),%ecx
084bb64e +0x1365:  mov    0x8(%ebp),%eax
084bb651 +0x1368:  mov    (%eax),%edx
084bb653 +0x136a:  mov    0x8(%ebp),%eax
084bb656 +0x136d:  mov    %ecx,0x8(%esp)
084bb65a +0x1371:  mov    %edx,0x4(%esp)
084bb65e +0x1375:  mov    %eax,(%esp)
084bb661 +0x1378:  call   084bad22 <+0xa39>
084bb666 +0x137d:  mov    0x8(%ebp),%eax
084bb669 +0x1380:  mov    -0xc(%ebp),%edx
084bb66c +0x1383:  mov    %edx,(%eax)
084bb66e +0x1385:  mov    0x8(%ebp),%eax
084bb671 +0x1388:  mov    -0x10(%ebp),%edx
084bb674 +0x138b:  mov    %edx,0x4(%eax)
084bb677 +0x138e:  mov    0x8(%ebp),%eax
084bb67a +0x1391:  lea    0x8(%eax),%edx
084bb67d +0x1394:  mov    -0x14(%ebp),%eax
084bb680 +0x1397:  mov    %eax,0x4(%esp)
084bb684 +0x139b:  mov    %edx,(%esp)
084bb687 +0x139e:  call   084bb130 <+0xe47>
084bb68c +0x13a3:  mov    -0x1c(%ebp),%eax
084bb68f +0x13a6:  sub    $0x1,%eax
084bb692 +0x13a9:  shl    $0x2,%eax
084bb695 +0x13ac:  add    -0x14(%ebp),%eax
084bb698 +0x13af:  mov    0x8(%ebp),%edx
084bb69b +0x13b2:  add    $0x18,%edx
084bb69e +0x13b5:  mov    %eax,0x4(%esp)
084bb6a2 +0x13b9:  mov    %edx,(%esp)
084bb6a5 +0x13bc:  call   084bb130 <+0xe47>
084bb6aa +0x13c1:  add    $0x44,%esp
084bb6ad +0x13c4:  pop    %ebx
084bb6ae +0x13c5:  pop    %ebp
084bb6af +0x13c6:  ret
084bb6b0 +0x13c7:  push   %ebp
084bb6b1 +0x13c8:  mov    %esp,%ebp
084bb6b3 +0x13ca:  sub    $0x18,%esp
084bb6b6 +0x13cd:  mov    0x8(%ebp),%eax
084bb6b9 +0x13d0:  mov    %eax,(%esp)
084bb6bc +0x13d3:  call   084bb76e <+0x1485>
084bb6c1 +0x13d8:  cmp    0xc(%ebp),%eax
084bb6c4 +0x13db:  setb   %al
084bb6c7 +0x13de:  movzbl %al,%eax
084bb6ca +0x13e1:  test   %eax,%eax
084bb6cc +0x13e3:  setne  %al
084bb6cf +0x13e6:  test   %al,%al
084bb6d1 +0x13e8:  je     084bb6d8 <+0x13ef>
084bb6d3 +0x13ea:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
084bb6d8 +0x13ef:  mov    0xc(%ebp),%eax
084bb6db +0x13f2:  shl    $0x2,%eax
084bb6de +0x13f5:  mov    %eax,(%esp)
084bb6e1 +0x13f8:  call   08724450 <_Znwj>  ; operator new(unsigned int)
084bb6e6 +0x13fd:  leave
084bb6e7 +0x13fe:  ret
084bb6e8 +0x13ff:  push   %ebp
084bb6e9 +0x1400:  mov    %esp,%ebp
084bb6eb +0x1402:  mov    $0x3fffffff,%eax
084bb6f0 +0x1407:  pop    %ebp
084bb6f1 +0x1408:  ret
084bb6f2 +0x1409:  push   %ebp
084bb6f3 +0x140a:  mov    %esp,%ebp
084bb6f5 +0x140c:  pop    %ebp
084bb6f6 +0x140d:  ret
084bb6f7 +0x140e:  nop
084bb6f8 +0x140f:  push   %ebp
084bb6f9 +0x1410:  mov    %esp,%ebp
084bb6fb +0x1412:  pop    %ebp
084bb6fc +0x1413:  ret
084bb6fd +0x1414:  push   %ebp
084bb6fe +0x1415:  mov    %esp,%ebp
084bb700 +0x1417:  push   %ebx
084bb701 +0x1418:  sub    $0x14,%esp
084bb704 +0x141b:  mov    0xc(%ebp),%eax
084bb707 +0x141e:  mov    %eax,(%esp)
084bb70a +0x1421:  call   084bb778 <+0x148f>
084bb70f +0x1426:  mov    %eax,%ebx
084bb711 +0x1428:  mov    0x8(%ebp),%eax
084bb714 +0x142b:  mov    %eax,(%esp)
084bb717 +0x142e:  call   084bb778 <+0x148f>
084bb71c +0x1433:  mov    0x10(%ebp),%edx
084bb71f +0x1436:  mov    %edx,0x8(%esp)
084bb723 +0x143a:  mov    %ebx,0x4(%esp)
084bb727 +0x143e:  mov    %eax,(%esp)
084bb72a +0x1441:  call   084bb780 <+0x1497>
084bb72f +0x1446:  add    $0x14,%esp
084bb732 +0x1449:  pop    %ebx
084bb733 +0x144a:  pop    %ebp
084bb734 +0x144b:  ret
084bb735 +0x144c:  push   %ebp
084bb736 +0x144d:  mov    %esp,%ebp
084bb738 +0x144f:  push   %ebx
084bb739 +0x1450:  sub    $0x14,%esp
084bb73c +0x1453:  mov    0xc(%ebp),%eax
084bb73f +0x1456:  mov    %eax,(%esp)
084bb742 +0x1459:  call   084bb778 <+0x148f>
084bb747 +0x145e:  mov    %eax,%ebx
084bb749 +0x1460:  mov    0x8(%ebp),%eax
084bb74c +0x1463:  mov    %eax,(%esp)
084bb74f +0x1466:  call   084bb778 <+0x148f>
084bb754 +0x146b:  mov    0x10(%ebp),%edx
084bb757 +0x146e:  mov    %edx,0x8(%esp)
084bb75b +0x1472:  mov    %ebx,0x4(%esp)
084bb75f +0x1476:  mov    %eax,(%esp)
084bb762 +0x1479:  call   084bb7c4 <+0x14db>
084bb767 +0x147e:  add    $0x14,%esp
084bb76a +0x1481:  pop    %ebx
084bb76b +0x1482:  pop    %ebp
084bb76c +0x1483:  ret
084bb76d +0x1484:  nop
084bb76e +0x1485:  push   %ebp
084bb76f +0x1486:  mov    %esp,%ebp
084bb771 +0x1488:  mov    $0x3fffffff,%eax
084bb776 +0x148d:  pop    %ebp
084bb777 +0x148e:  ret
084bb778 +0x148f:  push   %ebp
084bb779 +0x1490:  mov    %esp,%ebp
084bb77b +0x1492:  mov    0x8(%ebp),%eax
084bb77e +0x1495:  pop    %ebp
084bb77f +0x1496:  ret
084bb780 +0x1497:  push   %ebp
084bb781 +0x1498:  mov    %esp,%ebp
084bb783 +0x149a:  push   %esi
084bb784 +0x149b:  push   %ebx
084bb785 +0x149c:  sub    $0x10,%esp
084bb788 +0x149f:  mov    0x10(%ebp),%eax
084bb78b +0x14a2:  mov    %eax,(%esp)
084bb78e +0x14a5:  call   084bb808 <+0x151f>
084bb793 +0x14aa:  mov    %eax,%esi
084bb795 +0x14ac:  mov    0xc(%ebp),%eax
084bb798 +0x14af:  mov    %eax,(%esp)
084bb79b +0x14b2:  call   084bb808 <+0x151f>
084bb7a0 +0x14b7:  mov    %eax,%ebx
084bb7a2 +0x14b9:  mov    0x8(%ebp),%eax
084bb7a5 +0x14bc:  mov    %eax,(%esp)
084bb7a8 +0x14bf:  call   084bb808 <+0x151f>
084bb7ad +0x14c4:  mov    %esi,0x8(%esp)
084bb7b1 +0x14c8:  mov    %ebx,0x4(%esp)
084bb7b5 +0x14cc:  mov    %eax,(%esp)
084bb7b8 +0x14cf:  call   084bb810 <+0x1527>
084bb7bd +0x14d4:  add    $0x10,%esp
084bb7c0 +0x14d7:  pop    %ebx
084bb7c1 +0x14d8:  pop    %esi
084bb7c2 +0x14d9:  pop    %ebp
084bb7c3 +0x14da:  ret
084bb7c4 +0x14db:  push   %ebp
084bb7c5 +0x14dc:  mov    %esp,%ebp
084bb7c7 +0x14de:  push   %esi
084bb7c8 +0x14df:  push   %ebx
084bb7c9 +0x14e0:  sub    $0x10,%esp
084bb7cc +0x14e3:  mov    0x10(%ebp),%eax
084bb7cf +0x14e6:  mov    %eax,(%esp)
084bb7d2 +0x14e9:  call   084bb808 <+0x151f>
084bb7d7 +0x14ee:  mov    %eax,%esi
084bb7d9 +0x14f0:  mov    0xc(%ebp),%eax
084bb7dc +0x14f3:  mov    %eax,(%esp)
084bb7df +0x14f6:  call   084bb808 <+0x151f>
084bb7e4 +0x14fb:  mov    %eax,%ebx
084bb7e6 +0x14fd:  mov    0x8(%ebp),%eax
084bb7e9 +0x1500:  mov    %eax,(%esp)
084bb7ec +0x1503:  call   084bb808 <+0x151f>
084bb7f1 +0x1508:  mov    %esi,0x8(%esp)
084bb7f5 +0x150c:  mov    %ebx,0x4(%esp)
084bb7f9 +0x1510:  mov    %eax,(%esp)
084bb7fc +0x1513:  call   084bb835 <+0x154c>
084bb801 +0x1518:  add    $0x10,%esp
084bb804 +0x151b:  pop    %ebx
084bb805 +0x151c:  pop    %esi
084bb806 +0x151d:  pop    %ebp
084bb807 +0x151e:  ret
084bb808 +0x151f:  push   %ebp
084bb809 +0x1520:  mov    %esp,%ebp
084bb80b +0x1522:  mov    0x8(%ebp),%eax
084bb80e +0x1525:  pop    %ebp
084bb80f +0x1526:  ret
084bb810 +0x1527:  push   %ebp
084bb811 +0x1528:  mov    %esp,%ebp
084bb813 +0x152a:  sub    $0x28,%esp
084bb816 +0x152d:  movb   $0x1,-0x9(%ebp)
084bb81a +0x1531:  mov    0x10(%ebp),%eax
084bb81d +0x1534:  mov    %eax,0x8(%esp)
084bb821 +0x1538:  mov    0xc(%ebp),%eax
084bb824 +0x153b:  mov    %eax,0x4(%esp)
084bb828 +0x153f:  mov    0x8(%ebp),%eax
084bb82b +0x1542:  mov    %eax,(%esp)
084bb82e +0x1545:  call   084bb85a <+0x1571>
084bb833 +0x154a:  leave
084bb834 +0x154b:  ret
084bb835 +0x154c:  push   %ebp
084bb836 +0x154d:  mov    %esp,%ebp
084bb838 +0x154f:  sub    $0x28,%esp
084bb83b +0x1552:  movb   $0x1,-0x9(%ebp)
084bb83f +0x1556:  mov    0x10(%ebp),%eax
084bb842 +0x1559:  mov    %eax,0x8(%esp)
084bb846 +0x155d:  mov    0xc(%ebp),%eax
084bb849 +0x1560:  mov    %eax,0x4(%esp)
084bb84d +0x1564:  mov    0x8(%ebp),%eax
084bb850 +0x1567:  mov    %eax,(%esp)
084bb853 +0x156a:  call   084bb89f <+0x15b6>
084bb858 +0x156f:  leave
084bb859 +0x1570:  ret
084bb85a +0x1571:  push   %ebp
084bb85b +0x1572:  mov    %esp,%ebp
084bb85d +0x1574:  sub    $0x18,%esp
084bb860 +0x1577:  mov    0xc(%ebp),%edx
084bb863 +0x157a:  mov    0x8(%ebp),%eax
084bb866 +0x157d:  mov    %edx,%ecx
084bb868 +0x157f:  sub    %eax,%ecx
084bb86a +0x1581:  mov    %ecx,%eax
084bb86c +0x1583:  sar    $0x2,%eax
084bb86f +0x1586:  shl    $0x2,%eax
084bb872 +0x1589:  mov    %eax,0x8(%esp)
084bb876 +0x158d:  mov    0x8(%ebp),%eax
084bb879 +0x1590:  mov    %eax,0x4(%esp)
084bb87d +0x1594:  mov    0x10(%ebp),%eax
084bb880 +0x1597:  mov    %eax,(%esp)
084bb883 +0x159a:  call   0807d880 <_init+0x178>
084bb888 +0x159f:  mov    0xc(%ebp),%edx
084bb88b +0x15a2:  mov    0x8(%ebp),%eax
084bb88e +0x15a5:  mov    %edx,%ecx
084bb890 +0x15a7:  sub    %eax,%ecx
084bb892 +0x15a9:  mov    %ecx,%eax
084bb894 +0x15ab:  sar    $0x2,%eax
084bb897 +0x15ae:  shl    $0x2,%eax
084bb89a +0x15b1:  add    0x10(%ebp),%eax
084bb89d +0x15b4:  leave
084bb89e +0x15b5:  ret
084bb89f +0x15b6:  push   %ebp
084bb8a0 +0x15b7:  mov    %esp,%ebp
084bb8a2 +0x15b9:  sub    $0x28,%esp
084bb8a5 +0x15bc:  mov    0xc(%ebp),%edx
084bb8a8 +0x15bf:  mov    0x8(%ebp),%eax
084bb8ab +0x15c2:  mov    %edx,%ecx
084bb8ad +0x15c4:  sub    %eax,%ecx
084bb8af +0x15c6:  mov    %ecx,%eax
084bb8b1 +0x15c8:  sar    $0x2,%eax
084bb8b4 +0x15cb:  mov    %eax,-0xc(%ebp)
084bb8b7 +0x15ce:  mov    -0xc(%ebp),%eax
084bb8ba +0x15d1:  lea    0x0(,%eax,4),%edx
084bb8c1 +0x15d8:  mov    -0xc(%ebp),%eax
084bb8c4 +0x15db:  shl    $0x2,%eax
084bb8c7 +0x15de:  neg    %eax
084bb8c9 +0x15e0:  add    0x10(%ebp),%eax
084bb8cc +0x15e3:  mov    %edx,0x8(%esp)
084bb8d0 +0x15e7:  mov    0x8(%ebp),%edx
084bb8d3 +0x15ea:  mov    %edx,0x4(%esp)
084bb8d7 +0x15ee:  mov    %eax,(%esp)
084bb8da +0x15f1:  call   0807d880 <_init+0x178>
084bb8df +0x15f6:  mov    -0xc(%ebp),%eax
084bb8e2 +0x15f9:  shl    $0x2,%eax
084bb8e5 +0x15fc:  neg    %eax
084bb8e7 +0x15fe:  add    0x10(%ebp),%eax
084bb8ea +0x1601:  leave
084bb8eb +0x1602:  ret
084bb8ec +0x1603:  push   %ebp
084bb8ed +0x1604:  mov    %esp,%ebp
084bb8ef +0x1606:  sub    $0x18,%esp
084bb8f2 +0x1609:  mov    0x8(%ebp),%eax
084bb8f5 +0x160c:  mov    (%eax),%eax
084bb8f7 +0x160e:  test   %eax,%eax
084bb8f9 +0x1610:  je     084bb908 <+0x161f>
084bb8fb +0x1612:  mov    0x8(%ebp),%eax
084bb8fe +0x1615:  mov    (%eax),%eax
084bb900 +0x1617:  mov    %eax,(%esp)
084bb903 +0x161a:  call   08724bb0 <_ZdaPv>  ; operator delete[](void*)
084bb908 +0x161f:  mov    0x8(%ebp),%eax
084bb90b +0x1622:  add    $0x4,%eax
084bb90e +0x1625:  mov    %eax,(%esp)
084bb911 +0x1628:  call   084ba306 <+0x1d>
084bb916 +0x162d:  leave
084bb917 +0x162e:  ret
```

## 反编译 C

```c
// <global>::global @ 0x84ba2e9

/* HistoryLog::logfiles_ */

void HistoryLog::_GLOBAL__I_logfiles_(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
