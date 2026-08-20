# CCompoundAvatar

`_GLOBAL__I__ZN8WongWork15CCompoundAvatarC2Ev`

`global constructors keyed to WongWork::CCompoundAvatar::CCompoundAvatar()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to WongWork::CCompoundAvatar` | `0x08334202` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08334202  _GLOBAL__I__ZN8WongWork15CCompoundAvatarC2Ev
#           global constructors keyed to WongWork::CCompoundAvatar::CCompoundAvatar()
# range [0x08334202, 0x0833482f]
08334202 +0x000:  push   %ebp
08334203 +0x001:  mov    %esp,%ebp
08334205 +0x003:  sub    $0x18,%esp
08334208 +0x006:  movl   $0xffff,0x4(%esp)
08334210 +0x00e:  movl   $0x1,(%esp)
08334217 +0x015:  call   083341c2 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
0833421c +0x01a:  leave
0833421d +0x01b:  ret
0833421e +0x01c:  push   %ebp
0833421f +0x01d:  mov    %esp,%ebp
08334221 +0x01f:  sub    $0x10,%esp
08334224 +0x022:  movl   $0x0,-0x4(%ebp)
0833422b +0x029:  jmp    0833423d <+0x3b>
0833422d +0x02b:  mov    -0x4(%ebp),%edx
08334230 +0x02e:  mov    0x8(%ebp),%eax
08334233 +0x031:  movw   $0x0,(%eax,%edx,2)
08334239 +0x037:  addl   $0x1,-0x4(%ebp)
0833423d +0x03b:  cmpl   $0x1,-0x4(%ebp)
08334241 +0x03f:  setle  %al
08334244 +0x042:  test   %al,%al
08334246 +0x044:  jne    0833422d <+0x2b>
08334248 +0x046:  leave
08334249 +0x047:  ret
0833424a +0x048:  push   %ebp
0833424b +0x049:  mov    %esp,%ebp
0833424d +0x04b:  sub    $0x18,%esp
08334250 +0x04e:  mov    0x8(%ebp),%eax
08334253 +0x051:  movl   $0xb,(%eax)
08334259 +0x057:  mov    0x8(%ebp),%eax
0833425c +0x05a:  movl   $0x0,0x4(%eax)
08334263 +0x061:  mov    0x8(%ebp),%eax
08334266 +0x064:  movw   $0x0,0x8(%eax)
0833426c +0x06a:  mov    0x8(%ebp),%eax
0833426f +0x06d:  add    $0xa,%eax
08334272 +0x070:  mov    %eax,(%esp)
08334275 +0x073:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
0833427a +0x078:  mov    0x8(%ebp),%eax
0833427d +0x07b:  movw   $0x0,0x48(%eax)
08334283 +0x081:  mov    0x8(%ebp),%eax
08334286 +0x084:  add    $0x4a,%eax
08334289 +0x087:  mov    %eax,(%esp)
0833428c +0x08a:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
08334291 +0x08f:  mov    0x8(%ebp),%eax
08334294 +0x092:  movl   $0x0,0x88(%eax)
0833429e +0x09c:  mov    0x8(%ebp),%eax
083342a1 +0x09f:  movl   $0x0,0x8c(%eax)
083342ab +0x0a9:  mov    0x8(%ebp),%eax
083342ae +0x0ac:  movw   $0x0,0x90(%eax)
083342b7 +0x0b5:  mov    0x8(%ebp),%eax
083342ba +0x0b8:  add    $0x92,%eax
083342bf +0x0bd:  mov    %eax,(%esp)
083342c2 +0x0c0:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
083342c7 +0x0c5:  mov    0x8(%ebp),%eax
083342ca +0x0c8:  movl   $0x0,0xd0(%eax)
083342d4 +0x0d2:  mov    0x8(%ebp),%eax
083342d7 +0x0d5:  movw   $0x64,0xd4(%eax)
083342e0 +0x0de:  mov    0x8(%ebp),%eax
083342e3 +0x0e1:  movb   $0x0,0xd7(%eax)
083342ea +0x0e8:  mov    0x8(%ebp),%eax
083342ed +0x0eb:  movb   $0x0,0xd6(%eax)
083342f4 +0x0f2:  mov    0x8(%ebp),%eax
083342f7 +0x0f5:  movb   $0x0,0xe8(%eax)
083342fe +0x0fc:  mov    0x8(%ebp),%eax
08334301 +0x0ff:  movw   $0xffff,0xd8(%eax)
0833430a +0x108:  mov    0x8(%ebp),%eax
0833430d +0x10b:  add    $0xdc,%eax
08334312 +0x110:  mov    %eax,(%esp)
08334315 +0x113:  call   08096b6e <_GLOBAL__I_g_maxTotalDefenseRate+0x15e>  ; global constructors keyed to g_maxTotalDefenseRate+0x15e
0833431a +0x118:  leave
0833431b +0x119:  ret
0833431c +0x11a:  push   %ebp
0833431d +0x11b:  mov    %esp,%ebp
0833431f +0x11d:  sub    $0x18,%esp
08334322 +0x120:  mov    0x8(%ebp),%eax
08334325 +0x123:  mov    %eax,(%esp)
08334328 +0x126:  call   083343a0 <+0x19e>
0833432d +0x12b:  leave
0833432e +0x12c:  ret
0833432f +0x12d:  nop
08334330 +0x12e:  push   %ebp
08334331 +0x12f:  mov    %esp,%ebp
08334333 +0x131:  sub    $0x18,%esp
08334336 +0x134:  mov    0x8(%ebp),%eax
08334339 +0x137:  mov    %eax,(%esp)
0833433c +0x13a:  call   083343b4 <+0x1b2>
08334341 +0x13f:  leave
08334342 +0x140:  ret
08334343 +0x141:  nop
08334344 +0x142:  push   %ebp
08334345 +0x143:  mov    %esp,%ebp
08334347 +0x145:  sub    $0x18,%esp
0833434a +0x148:  mov    0x8(%ebp),%eax
0833434d +0x14b:  add    $0xa,%eax
08334350 +0x14e:  mov    %eax,(%esp)
08334353 +0x151:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08334358 +0x156:  mov    0x8(%ebp),%eax
0833435b +0x159:  add    $0x4a,%eax
0833435e +0x15c:  mov    %eax,(%esp)
08334361 +0x15f:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08334366 +0x164:  mov    0x8(%ebp),%eax
08334369 +0x167:  add    $0x92,%eax
0833436e +0x16c:  mov    %eax,(%esp)
08334371 +0x16f:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08334376 +0x174:  mov    0x8(%ebp),%eax
08334379 +0x177:  add    $0xdc,%eax
0833437e +0x17c:  mov    %eax,(%esp)
08334381 +0x17f:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
08334386 +0x184:  leave
08334387 +0x185:  ret
08334388 +0x186:  push   %ebp
08334389 +0x187:  mov    %esp,%ebp
0833438b +0x189:  sub    $0x18,%esp
0833438e +0x18c:  mov    0x8(%ebp),%eax
08334391 +0x18f:  add    $0xdc,%eax
08334396 +0x194:  mov    %eax,(%esp)
08334399 +0x197:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0833439e +0x19c:  leave
0833439f +0x19d:  ret
083343a0 +0x19e:  push   %ebp
083343a1 +0x19f:  mov    %esp,%ebp
083343a3 +0x1a1:  sub    $0x18,%esp
083343a6 +0x1a4:  mov    0x8(%ebp),%eax
083343a9 +0x1a7:  mov    %eax,(%esp)
083343ac +0x1aa:  call   08334456 <+0x254>
083343b1 +0x1af:  leave
083343b2 +0x1b0:  ret
083343b3 +0x1b1:  nop
083343b4 +0x1b2:  push   %ebp
083343b5 +0x1b3:  mov    %esp,%ebp
083343b7 +0x1b5:  push   %esi
083343b8 +0x1b6:  push   %ebx
083343b9 +0x1b7:  sub    $0x10,%esp
083343bc +0x1ba:  mov    0x8(%ebp),%eax
083343bf +0x1bd:  mov    %eax,(%esp)
083343c2 +0x1c0:  call   083344d8 <+0x2d6>
083343c7 +0x1c5:  mov    0x8(%ebp),%edx
083343ca +0x1c8:  mov    0x4(%edx),%ecx
083343cd +0x1cb:  mov    0x8(%ebp),%edx
083343d0 +0x1ce:  mov    (%edx),%edx
083343d2 +0x1d0:  mov    %eax,0x8(%esp)
083343d6 +0x1d4:  mov    %ecx,0x4(%esp)
083343da +0x1d8:  mov    %edx,(%esp)
083343dd +0x1db:  call   083344e0 <+0x2de>
083343e2 +0x1e0:  jmp    083343ff <+0x1fd>
083343e4 +0x1e2:  mov    %edx,%ebx
083343e6 +0x1e4:  mov    %eax,%esi
083343e8 +0x1e6:  mov    0x8(%ebp),%eax
083343eb +0x1e9:  mov    %eax,(%esp)
083343ee +0x1ec:  call   0833446a <+0x268>
083343f3 +0x1f1:  mov    %esi,%eax
083343f5 +0x1f3:  mov    %ebx,%edx
083343f7 +0x1f5:  mov    %eax,(%esp)
083343fa +0x1f8:  call   08ae3750 <_Unwind_Resume>
083343ff +0x1fd:  mov    0x8(%ebp),%eax
08334402 +0x200:  mov    %eax,(%esp)
08334405 +0x203:  call   0833446a <+0x268>
0833440a +0x208:  add    $0x10,%esp
0833440d +0x20b:  pop    %ebx
0833440e +0x20c:  pop    %esi
0833440f +0x20d:  pop    %ebp
08334410 +0x20e:  ret
08334411 +0x20f:  nop
08334412 +0x210:  push   %ebp
08334413 +0x211:  mov    %esp,%ebp
08334415 +0x213:  mov    0x8(%ebp),%eax
08334418 +0x216:  mov    0x4(%eax),%eax
0833441b +0x219:  mov    %eax,%edx
0833441d +0x21b:  mov    0x8(%ebp),%eax
08334420 +0x21e:  mov    (%eax),%eax
08334422 +0x220:  mov    %edx,%ecx
08334424 +0x222:  sub    %eax,%ecx
08334426 +0x224:  mov    %ecx,%eax
08334428 +0x226:  sar    $0x3,%eax
0833442b +0x229:  imul   $0x5f02a3a1,%eax,%eax
08334431 +0x22f:  pop    %ebp
08334432 +0x230:  ret
08334433 +0x231:  nop
08334434 +0x232:  push   %ebp
08334435 +0x233:  mov    %esp,%ebp
08334437 +0x235:  mov    0x8(%ebp),%eax
0833443a +0x238:  movl   $0x0,(%eax)
08334440 +0x23e:  pop    %ebp
08334441 +0x23f:  ret
08334442 +0x240:  push   %ebp
08334443 +0x241:  mov    %esp,%ebp
08334445 +0x243:  sub    $0x18,%esp
08334448 +0x246:  mov    0x8(%ebp),%eax
0833444b +0x249:  mov    %eax,(%esp)
0833444e +0x24c:  call   0833452a <+0x328>
08334453 +0x251:  leave
08334454 +0x252:  ret
08334455 +0x253:  nop
08334456 +0x254:  push   %ebp
08334457 +0x255:  mov    %esp,%ebp
08334459 +0x257:  sub    $0x18,%esp
0833445c +0x25a:  mov    0x8(%ebp),%eax
0833445f +0x25d:  mov    %eax,(%esp)
08334462 +0x260:  call   083344fa <+0x2f8>
08334467 +0x265:  leave
08334468 +0x266:  ret
08334469 +0x267:  nop
0833446a +0x268:  push   %ebp
0833446b +0x269:  mov    %esp,%ebp
0833446d +0x26b:  push   %esi
0833446e +0x26c:  push   %ebx
0833446f +0x26d:  sub    $0x10,%esp
08334472 +0x270:  mov    0x8(%ebp),%eax
08334475 +0x273:  mov    0x8(%eax),%eax
08334478 +0x276:  mov    %eax,%edx
0833447a +0x278:  mov    0x8(%ebp),%eax
0833447d +0x27b:  mov    (%eax),%eax
0833447f +0x27d:  mov    %edx,%ecx
08334481 +0x27f:  sub    %eax,%ecx
08334483 +0x281:  mov    %ecx,%eax
08334485 +0x283:  sar    $0x3,%eax
08334488 +0x286:  imul   $0x5f02a3a1,%eax,%eax
0833448e +0x28c:  mov    %eax,%edx
08334490 +0x28e:  mov    0x8(%ebp),%eax
08334493 +0x291:  mov    (%eax),%eax
08334495 +0x293:  mov    %edx,0x8(%esp)
08334499 +0x297:  mov    %eax,0x4(%esp)
0833449d +0x29b:  mov    0x8(%ebp),%eax
083344a0 +0x29e:  mov    %eax,(%esp)
083344a3 +0x2a1:  call   0833453e <+0x33c>
083344a8 +0x2a6:  jmp    083344c5 <+0x2c3>
083344aa +0x2a8:  mov    %edx,%ebx
083344ac +0x2aa:  mov    %eax,%esi
083344ae +0x2ac:  mov    0x8(%ebp),%eax
083344b1 +0x2af:  mov    %eax,(%esp)
083344b4 +0x2b2:  call   08334442 <+0x240>
083344b9 +0x2b7:  mov    %esi,%eax
083344bb +0x2b9:  mov    %ebx,%edx
083344bd +0x2bb:  mov    %eax,(%esp)
083344c0 +0x2be:  call   08ae3750 <_Unwind_Resume>
083344c5 +0x2c3:  mov    0x8(%ebp),%eax
083344c8 +0x2c6:  mov    %eax,(%esp)
083344cb +0x2c9:  call   08334442 <+0x240>
083344d0 +0x2ce:  add    $0x10,%esp
083344d3 +0x2d1:  pop    %ebx
083344d4 +0x2d2:  pop    %esi
083344d5 +0x2d3:  pop    %ebp
083344d6 +0x2d4:  ret
083344d7 +0x2d5:  nop
083344d8 +0x2d6:  push   %ebp
083344d9 +0x2d7:  mov    %esp,%ebp
083344db +0x2d9:  mov    0x8(%ebp),%eax
083344de +0x2dc:  pop    %ebp
083344df +0x2dd:  ret
083344e0 +0x2de:  push   %ebp
083344e1 +0x2df:  mov    %esp,%ebp
083344e3 +0x2e1:  sub    $0x18,%esp
083344e6 +0x2e4:  mov    0xc(%ebp),%eax
083344e9 +0x2e7:  mov    %eax,0x4(%esp)
083344ed +0x2eb:  mov    0x8(%ebp),%eax
083344f0 +0x2ee:  mov    %eax,(%esp)
083344f3 +0x2f1:  call   08334565 <+0x363>
083344f8 +0x2f6:  leave
083344f9 +0x2f7:  ret
083344fa +0x2f8:  push   %ebp
083344fb +0x2f9:  mov    %esp,%ebp
083344fd +0x2fb:  sub    $0x18,%esp
08334500 +0x2fe:  mov    0x8(%ebp),%eax
08334503 +0x301:  mov    %eax,(%esp)
08334506 +0x304:  call   08334580 <+0x37e>
0833450b +0x309:  mov    0x8(%ebp),%eax
0833450e +0x30c:  movl   $0x0,(%eax)
08334514 +0x312:  mov    0x8(%ebp),%eax
08334517 +0x315:  movl   $0x0,0x4(%eax)
0833451e +0x31c:  mov    0x8(%ebp),%eax
08334521 +0x31f:  movl   $0x0,0x8(%eax)
08334528 +0x326:  leave
08334529 +0x327:  ret
0833452a +0x328:  push   %ebp
0833452b +0x329:  mov    %esp,%ebp
0833452d +0x32b:  sub    $0x18,%esp
08334530 +0x32e:  mov    0x8(%ebp),%eax
08334533 +0x331:  mov    %eax,(%esp)
08334536 +0x334:  call   08334594 <+0x392>
0833453b +0x339:  leave
0833453c +0x33a:  ret
0833453d +0x33b:  nop
0833453e +0x33c:  push   %ebp
0833453f +0x33d:  mov    %esp,%ebp
08334541 +0x33f:  sub    $0x18,%esp
08334544 +0x342:  cmpl   $0x0,0xc(%ebp)
08334548 +0x346:  je     08334563 <+0x361>
0833454a +0x348:  mov    0x8(%ebp),%eax
0833454d +0x34b:  mov    0x10(%ebp),%edx
08334550 +0x34e:  mov    %edx,0x8(%esp)
08334554 +0x352:  mov    0xc(%ebp),%edx
08334557 +0x355:  mov    %edx,0x4(%esp)
0833455b +0x359:  mov    %eax,(%esp)
0833455e +0x35c:  call   0833459a <+0x398>
08334563 +0x361:  leave
08334564 +0x362:  ret
08334565 +0x363:  push   %ebp
08334566 +0x364:  mov    %esp,%ebp
08334568 +0x366:  sub    $0x18,%esp
0833456b +0x369:  mov    0xc(%ebp),%eax
0833456e +0x36c:  mov    %eax,0x4(%esp)
08334572 +0x370:  mov    0x8(%ebp),%eax
08334575 +0x373:  mov    %eax,(%esp)
08334578 +0x376:  call   083345ad <+0x3ab>
0833457d +0x37b:  leave
0833457e +0x37c:  ret
0833457f +0x37d:  nop
08334580 +0x37e:  push   %ebp
08334581 +0x37f:  mov    %esp,%ebp
08334583 +0x381:  sub    $0x18,%esp
08334586 +0x384:  mov    0x8(%ebp),%eax
08334589 +0x387:  mov    %eax,(%esp)
0833458c +0x38a:  call   083345d6 <+0x3d4>
08334591 +0x38f:  leave
08334592 +0x390:  ret
08334593 +0x391:  nop
08334594 +0x392:  push   %ebp
08334595 +0x393:  mov    %esp,%ebp
08334597 +0x395:  pop    %ebp
08334598 +0x396:  ret
08334599 +0x397:  nop
0833459a +0x398:  push   %ebp
0833459b +0x399:  mov    %esp,%ebp
0833459d +0x39b:  sub    $0x18,%esp
083345a0 +0x39e:  mov    0xc(%ebp),%eax
083345a3 +0x3a1:  mov    %eax,(%esp)
083345a6 +0x3a4:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
083345ab +0x3a9:  leave
083345ac +0x3aa:  ret
083345ad +0x3ab:  push   %ebp
083345ae +0x3ac:  mov    %esp,%ebp
083345b0 +0x3ae:  sub    $0x18,%esp
083345b3 +0x3b1:  jmp    083345c7 <+0x3c5>
083345b5 +0x3b3:  mov    0x8(%ebp),%eax
083345b8 +0x3b6:  mov    %eax,(%esp)
083345bb +0x3b9:  call   0833481b <+0x619>
083345c0 +0x3be:  addl   $0x308,0x8(%ebp)
083345c7 +0x3c5:  mov    0x8(%ebp),%eax
083345ca +0x3c8:  cmp    0xc(%ebp),%eax
083345cd +0x3cb:  setne  %al
083345d0 +0x3ce:  test   %al,%al
083345d2 +0x3d0:  jne    083345b5 <+0x3b3>
083345d4 +0x3d2:  leave
083345d5 +0x3d3:  ret
083345d6 +0x3d4:  push   %ebp
083345d7 +0x3d5:  mov    %esp,%ebp
083345d9 +0x3d7:  pop    %ebp
083345da +0x3d8:  ret
083345db +0x3d9:  nop
083345dc +0x3da:  push   %ebp
083345dd +0x3db:  mov    %esp,%ebp
083345df +0x3dd:  push   %esi
083345e0 +0x3de:  push   %ebx
083345e1 +0x3df:  sub    $0x10,%esp
083345e4 +0x3e2:  mov    0x8(%ebp),%eax
083345e7 +0x3e5:  add    $0x34,%eax
083345ea +0x3e8:  test   %eax,%eax
083345ec +0x3ea:  je     08334629 <+0x427>
083345ee +0x3ec:  mov    0x8(%ebp),%eax
083345f1 +0x3ef:  add    $0x34,%eax
083345f4 +0x3f2:  lea    0x78(%eax),%ebx
083345f7 +0x3f5:  mov    0x8(%ebp),%eax
083345fa +0x3f8:  add    $0x34,%eax
083345fd +0x3fb:  cmp    %eax,%ebx
083345ff +0x3fd:  je     08334629 <+0x427>
08334601 +0x3ff:  sub    $0xc,%ebx
08334604 +0x402:  mov    %ebx,(%esp)
08334607 +0x405:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
0833460c +0x40a:  jmp    083345f7 <+0x3f5>
0833460e +0x40c:  mov    %edx,%ebx
08334610 +0x40e:  mov    %eax,%esi
08334612 +0x410:  mov    0x8(%ebp),%eax
08334615 +0x413:  mov    %eax,(%esp)
08334618 +0x416:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
0833461d +0x41b:  mov    %esi,%eax
0833461f +0x41d:  mov    %ebx,%edx
08334621 +0x41f:  mov    %eax,(%esp)
08334624 +0x422:  call   08ae3750 <_Unwind_Resume>
08334629 +0x427:  mov    0x8(%ebp),%eax
0833462c +0x42a:  mov    %eax,(%esp)
0833462f +0x42d:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
08334634 +0x432:  add    $0x10,%esp
08334637 +0x435:  pop    %ebx
08334638 +0x436:  pop    %esi
08334639 +0x437:  pop    %ebp
0833463a +0x438:  ret
0833463b +0x439:  nop
0833463c +0x43a:  push   %ebp
0833463d +0x43b:  mov    %esp,%ebp
0833463f +0x43d:  push   %edi
08334640 +0x43e:  push   %esi
08334641 +0x43f:  push   %ebx
08334642 +0x440:  sub    $0x1c,%esp
08334645 +0x443:  mov    0x8(%ebp),%eax
08334648 +0x446:  add    $0x2d0,%eax
0833464d +0x44b:  mov    %eax,(%esp)
08334650 +0x44e:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
08334655 +0x453:  jmp    08334671 <+0x46f>
08334657 +0x455:  mov    %edx,%ebx
08334659 +0x457:  mov    %eax,%esi
0833465b +0x459:  mov    0x8(%ebp),%eax
0833465e +0x45c:  add    $0x2c4,%eax
08334663 +0x461:  mov    %eax,(%esp)
08334666 +0x464:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
0833466b +0x469:  mov    %esi,%eax
0833466d +0x46b:  mov    %ebx,%edx
0833466f +0x46d:  jmp    08334683 <+0x481>
08334671 +0x46f:  mov    0x8(%ebp),%eax
08334674 +0x472:  add    $0x2c4,%eax
08334679 +0x477:  mov    %eax,(%esp)
0833467c +0x47a:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
08334681 +0x47f:  jmp    0833469d <+0x49b>
08334683 +0x481:  mov    %edx,%ebx
08334685 +0x483:  mov    %eax,%esi
08334687 +0x485:  mov    0x8(%ebp),%eax
0833468a +0x488:  add    $0x2b8,%eax
0833468f +0x48d:  mov    %eax,(%esp)
08334692 +0x490:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
08334697 +0x495:  mov    %esi,%eax
08334699 +0x497:  mov    %ebx,%edx
0833469b +0x499:  jmp    083346af <+0x4ad>
0833469d +0x49b:  mov    0x8(%ebp),%eax
083346a0 +0x49e:  add    $0x2b8,%eax
083346a5 +0x4a3:  mov    %eax,(%esp)
083346a8 +0x4a6:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
083346ad +0x4ab:  jmp    083346c9 <+0x4c7>
083346af +0x4ad:  mov    %edx,%ebx
083346b1 +0x4af:  mov    %eax,%esi
083346b3 +0x4b1:  mov    0x8(%ebp),%eax
083346b6 +0x4b4:  add    $0x20c,%eax
083346bb +0x4b9:  mov    %eax,(%esp)
083346be +0x4bc:  call   083345dc <+0x3da>
083346c3 +0x4c1:  mov    %esi,%eax
083346c5 +0x4c3:  mov    %ebx,%edx
083346c7 +0x4c5:  jmp    083346db <+0x4d9>
083346c9 +0x4c7:  mov    0x8(%ebp),%eax
083346cc +0x4ca:  add    $0x20c,%eax
083346d1 +0x4cf:  mov    %eax,(%esp)
083346d4 +0x4d2:  call   083345dc <+0x3da>
083346d9 +0x4d7:  jmp    08334715 <+0x513>
083346db +0x4d9:  mov    %edx,%esi
083346dd +0x4db:  mov    %eax,%edi
083346df +0x4dd:  mov    0x8(%ebp),%eax
083346e2 +0x4e0:  add    $0x194,%eax
083346e7 +0x4e5:  test   %eax,%eax
083346e9 +0x4e7:  je     0833470f <+0x50d>
083346eb +0x4e9:  mov    0x8(%ebp),%eax
083346ee +0x4ec:  add    $0x194,%eax
083346f3 +0x4f1:  lea    0x78(%eax),%ebx
083346f6 +0x4f4:  mov    0x8(%ebp),%eax
083346f9 +0x4f7:  add    $0x194,%eax
083346fe +0x4fc:  cmp    %eax,%ebx
08334700 +0x4fe:  je     0833470f <+0x50d>
08334702 +0x500:  sub    $0xc,%ebx
08334705 +0x503:  mov    %ebx,(%esp)
08334708 +0x506:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
0833470d +0x50b:  jmp    083346f6 <+0x4f4>
0833470f +0x50d:  mov    %edi,%eax
08334711 +0x50f:  mov    %esi,%edx
08334713 +0x511:  jmp    08334745 <+0x543>
08334715 +0x513:  mov    0x8(%ebp),%eax
08334718 +0x516:  add    $0x194,%eax
0833471d +0x51b:  test   %eax,%eax
0833471f +0x51d:  je     0833477f <+0x57d>
08334721 +0x51f:  mov    0x8(%ebp),%eax
08334724 +0x522:  add    $0x194,%eax
08334729 +0x527:  lea    0x78(%eax),%ebx
0833472c +0x52a:  mov    0x8(%ebp),%eax
0833472f +0x52d:  add    $0x194,%eax
08334734 +0x532:  cmp    %eax,%ebx
08334736 +0x534:  je     0833477f <+0x57d>
08334738 +0x536:  sub    $0xc,%ebx
0833473b +0x539:  mov    %ebx,(%esp)
0833473e +0x53c:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
08334743 +0x541:  jmp    0833472c <+0x52a>
08334745 +0x543:  mov    %edx,%esi
08334747 +0x545:  mov    %eax,%edi
08334749 +0x547:  mov    0x8(%ebp),%eax
0833474c +0x54a:  add    $0xf4,%eax
08334751 +0x54f:  test   %eax,%eax
08334753 +0x551:  je     08334779 <+0x577>
08334755 +0x553:  mov    0x8(%ebp),%eax
08334758 +0x556:  add    $0xf4,%eax
0833475d +0x55b:  lea    0x78(%eax),%ebx
08334760 +0x55e:  mov    0x8(%ebp),%eax
08334763 +0x561:  add    $0xf4,%eax
08334768 +0x566:  cmp    %eax,%ebx
0833476a +0x568:  je     08334779 <+0x577>
0833476c +0x56a:  sub    $0xc,%ebx
0833476f +0x56d:  mov    %ebx,(%esp)
08334772 +0x570:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
08334777 +0x575:  jmp    08334760 <+0x55e>
08334779 +0x577:  mov    %edi,%eax
0833477b +0x579:  mov    %esi,%edx
0833477d +0x57b:  jmp    083347af <+0x5ad>
0833477f +0x57d:  mov    0x8(%ebp),%eax
08334782 +0x580:  add    $0xf4,%eax
08334787 +0x585:  test   %eax,%eax
08334789 +0x587:  je     083347e9 <+0x5e7>
0833478b +0x589:  mov    0x8(%ebp),%eax
0833478e +0x58c:  add    $0xf4,%eax
08334793 +0x591:  lea    0x78(%eax),%ebx
08334796 +0x594:  mov    0x8(%ebp),%eax
08334799 +0x597:  add    $0xf4,%eax
0833479e +0x59c:  cmp    %eax,%ebx
083347a0 +0x59e:  je     083347e9 <+0x5e7>
083347a2 +0x5a0:  sub    $0xc,%ebx
083347a5 +0x5a3:  mov    %ebx,(%esp)
083347a8 +0x5a6:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
083347ad +0x5ab:  jmp    08334796 <+0x594>
083347af +0x5ad:  mov    %edx,%esi
083347b1 +0x5af:  mov    %eax,%edi
083347b3 +0x5b1:  mov    0x8(%ebp),%eax
083347b6 +0x5b4:  add    $0x7c,%eax
083347b9 +0x5b7:  test   %eax,%eax
083347bb +0x5b9:  je     083347dd <+0x5db>
083347bd +0x5bb:  mov    0x8(%ebp),%eax
083347c0 +0x5be:  add    $0x7c,%eax
083347c3 +0x5c1:  lea    0x78(%eax),%ebx
083347c6 +0x5c4:  mov    0x8(%ebp),%eax
083347c9 +0x5c7:  add    $0x7c,%eax
083347cc +0x5ca:  cmp    %eax,%ebx
083347ce +0x5cc:  je     083347dd <+0x5db>
083347d0 +0x5ce:  sub    $0xc,%ebx
083347d3 +0x5d1:  mov    %ebx,(%esp)
083347d6 +0x5d4:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
083347db +0x5d9:  jmp    083347c6 <+0x5c4>
083347dd +0x5db:  mov    %edi,%eax
083347df +0x5dd:  mov    %esi,%edx
083347e1 +0x5df:  mov    %eax,(%esp)
083347e4 +0x5e2:  call   08ae3750 <_Unwind_Resume>
083347e9 +0x5e7:  mov    0x8(%ebp),%eax
083347ec +0x5ea:  add    $0x7c,%eax
083347ef +0x5ed:  test   %eax,%eax
083347f1 +0x5ef:  je     08334813 <+0x611>
083347f3 +0x5f1:  mov    0x8(%ebp),%eax
083347f6 +0x5f4:  add    $0x7c,%eax
083347f9 +0x5f7:  lea    0x78(%eax),%ebx
083347fc +0x5fa:  mov    0x8(%ebp),%eax
083347ff +0x5fd:  add    $0x7c,%eax
08334802 +0x600:  cmp    %eax,%ebx
08334804 +0x602:  je     08334813 <+0x611>
08334806 +0x604:  sub    $0xc,%ebx
08334809 +0x607:  mov    %ebx,(%esp)
0833480c +0x60a:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
08334811 +0x60f:  jmp    083347fc <+0x5fa>
08334813 +0x611:  add    $0x1c,%esp
08334816 +0x614:  pop    %ebx
08334817 +0x615:  pop    %esi
08334818 +0x616:  pop    %edi
08334819 +0x617:  pop    %ebp
0833481a +0x618:  ret
0833481b +0x619:  push   %ebp
0833481c +0x61a:  mov    %esp,%ebp
0833481e +0x61c:  sub    $0x18,%esp
08334821 +0x61f:  mov    0x8(%ebp),%eax
08334824 +0x622:  mov    %eax,(%esp)
08334827 +0x625:  call   0833463c <+0x43a>
0833482c +0x62a:  leave
0833482d +0x62b:  ret
0833482e +0x62c:  nop
0833482f +0x62d:  nop
```

## 反编译 C

```c
// <global>::global @ 0x8334202

/* WongWork::CCompoundAvatar::CCompoundAvatar() */

void WongWork::CCompoundAvatar::_GLOBAL__I_CCompoundAvatar(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
