# MsgQueueMgr

`_GLOBAL__I__ZN11MsgQueueMgrC2Ev`

`global constructors keyed to MsgQueueMgr::MsgQueueMgr()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to MsgQueueMgr` | `0x08571298` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08571298  _GLOBAL__I__ZN11MsgQueueMgrC2Ev
#           global constructors keyed to MsgQueueMgr::MsgQueueMgr()
# range [0x08571298, 0x0857238b]
08571298 +0x0000:  push   %ebp
08571299 +0x0001:  mov    %esp,%ebp
0857129b +0x0003:  sub    $0x18,%esp
0857129e +0x0006:  movl   $0xffff,0x4(%esp)
085712a6 +0x000e:  movl   $0x1,(%esp)
085712ad +0x0015:  call   08571258 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
085712b2 +0x001a:  leave
085712b3 +0x001b:  ret
085712b4 +0x001c:  push   %ebp
085712b5 +0x001d:  mov    %esp,%ebp
085712b7 +0x001f:  sub    $0x18,%esp
085712ba +0x0022:  mov    0x8(%ebp),%eax
085712bd +0x0025:  mov    %eax,(%esp)
085712c0 +0x0028:  call   085712dc <+0x44>
085712c5 +0x002d:  leave
085712c6 +0x002e:  ret
085712c7 +0x002f:  nop
085712c8 +0x0030:  push   %ebp
085712c9 +0x0031:  mov    %esp,%ebp
085712cb +0x0033:  sub    $0x18,%esp
085712ce +0x0036:  mov    0x8(%ebp),%eax
085712d1 +0x0039:  mov    %eax,(%esp)
085712d4 +0x003c:  call   0857140a <+0x172>
085712d9 +0x0041:  leave
085712da +0x0042:  ret
085712db +0x0043:  nop
085712dc +0x0044:  push   %ebp
085712dd +0x0045:  mov    %esp,%ebp
085712df +0x0047:  push   %esi
085712e0 +0x0048:  push   %ebx
085712e1 +0x0049:  sub    $0x30,%esp
085712e4 +0x004c:  mov    0x8(%ebp),%eax
085712e7 +0x004f:  mov    %eax,(%esp)
085712ea +0x0052:  call   08571528 <+0x290>
085712ef +0x0057:  mov    %eax,%ebx
085712f1 +0x0059:  lea    -0x28(%ebp),%eax
085712f4 +0x005c:  mov    0x8(%ebp),%edx
085712f7 +0x005f:  mov    %edx,0x4(%esp)
085712fb +0x0063:  mov    %eax,(%esp)
085712fe +0x0066:  call   085714fe <+0x266>
08571303 +0x006b:  sub    $0x4,%esp
08571306 +0x006e:  lea    -0x18(%ebp),%eax
08571309 +0x0071:  mov    0x8(%ebp),%edx
0857130c +0x0074:  mov    %edx,0x4(%esp)
08571310 +0x0078:  mov    %eax,(%esp)
08571313 +0x007b:  call   085714d4 <+0x23c>
08571318 +0x0080:  sub    $0x4,%esp
0857131b +0x0083:  mov    %ebx,0xc(%esp)
0857131f +0x0087:  lea    -0x28(%ebp),%eax
08571322 +0x008a:  mov    %eax,0x8(%esp)
08571326 +0x008e:  lea    -0x18(%ebp),%eax
08571329 +0x0091:  mov    %eax,0x4(%esp)
0857132d +0x0095:  mov    0x8(%ebp),%eax
08571330 +0x0098:  mov    %eax,(%esp)
08571333 +0x009b:  call   08571564 <+0x2cc>
08571338 +0x00a0:  jmp    08571355 <+0xbd>
0857133a +0x00a2:  mov    %edx,%ebx
0857133c +0x00a4:  mov    %eax,%esi
0857133e +0x00a6:  mov    0x8(%ebp),%eax
08571341 +0x00a9:  mov    %eax,(%esp)
08571344 +0x00ac:  call   08571454 <+0x1bc>
08571349 +0x00b1:  mov    %esi,%eax
0857134b +0x00b3:  mov    %ebx,%edx
0857134d +0x00b5:  mov    %eax,(%esp)
08571350 +0x00b8:  call   08ae3750 <_Unwind_Resume>
08571355 +0x00bd:  mov    0x8(%ebp),%eax
08571358 +0x00c0:  mov    %eax,(%esp)
0857135b +0x00c3:  call   08571454 <+0x1bc>
08571360 +0x00c8:  lea    -0x8(%ebp),%esp
08571363 +0x00cb:  add    $0x0,%esp
08571366 +0x00ce:  pop    %ebx
08571367 +0x00cf:  pop    %esi
08571368 +0x00d0:  pop    %ebp
08571369 +0x00d1:  ret
0857136a +0x00d2:  push   %ebp
0857136b +0x00d3:  mov    %esp,%ebp
0857136d +0x00d5:  sub    $0x18,%esp
08571370 +0x00d8:  mov    0xc(%ebp),%eax
08571373 +0x00db:  mov    %eax,(%esp)
08571376 +0x00de:  call   0857156c <+0x2d4>
0857137b +0x00e3:  mov    0x8(%ebp),%edx
0857137e +0x00e6:  mov    %eax,0x4(%esp)
08571382 +0x00ea:  mov    %edx,(%esp)
08571385 +0x00ed:  call   08571574 <+0x2dc>
0857138a +0x00f2:  leave
0857138b +0x00f3:  ret
0857138c +0x00f4:  push   %ebp
0857138d +0x00f5:  mov    %esp,%ebp
0857138f +0x00f7:  sub    $0x18,%esp
08571392 +0x00fa:  mov    0x8(%ebp),%eax
08571395 +0x00fd:  mov    0xc(%ebp),%edx
08571398 +0x0100:  mov    %edx,0x4(%esp)
0857139c +0x0104:  mov    %eax,(%esp)
0857139f +0x0107:  call   08571596 <+0x2fe>
085713a4 +0x010c:  leave
085713a5 +0x010d:  ret
085713a6 +0x010e:  push   %ebp
085713a7 +0x010f:  mov    %esp,%ebp
085713a9 +0x0111:  sub    $0x18,%esp
085713ac +0x0114:  mov    0x8(%ebp),%eax
085713af +0x0117:  mov    %eax,(%esp)
085713b2 +0x011a:  call   085715f0 <+0x358>
085713b7 +0x011f:  leave
085713b8 +0x0120:  ret
085713b9 +0x0121:  nop
085713ba +0x0122:  push   %ebp
085713bb +0x0123:  mov    %esp,%ebp
085713bd +0x0125:  sub    $0x18,%esp
085713c0 +0x0128:  mov    0x8(%ebp),%eax
085713c3 +0x012b:  mov    %eax,(%esp)
085713c6 +0x012e:  call   08571610 <+0x378>
085713cb +0x0133:  leave
085713cc +0x0134:  ret
085713cd +0x0135:  nop
085713ce +0x0136:  push   %ebp
085713cf +0x0137:  mov    %esp,%ebp
085713d1 +0x0139:  sub    $0x18,%esp
085713d4 +0x013c:  mov    0x8(%ebp),%eax
085713d7 +0x013f:  mov    %eax,(%esp)
085713da +0x0142:  call   08571638 <+0x3a0>
085713df +0x0147:  leave
085713e0 +0x0148:  ret
085713e1 +0x0149:  nop
085713e2 +0x014a:  push   %ebp
085713e3 +0x014b:  mov    %esp,%ebp
085713e5 +0x014d:  sub    $0x18,%esp
085713e8 +0x0150:  mov    0x8(%ebp),%eax
085713eb +0x0153:  mov    %eax,(%esp)
085713ee +0x0156:  call   08571684 <+0x3ec>
085713f3 +0x015b:  leave
085713f4 +0x015c:  ret
085713f5 +0x015d:  nop
085713f6 +0x015e:  push   %ebp
085713f7 +0x015f:  mov    %esp,%ebp
085713f9 +0x0161:  sub    $0x18,%esp
085713fc +0x0164:  mov    0x8(%ebp),%eax
085713ff +0x0167:  mov    %eax,(%esp)
08571402 +0x016a:  call   085716e6 <+0x44e>
08571407 +0x016f:  leave
08571408 +0x0170:  ret
08571409 +0x0171:  nop
0857140a +0x0172:  push   %ebp
0857140b +0x0173:  mov    %esp,%ebp
0857140d +0x0175:  push   %esi
0857140e +0x0176:  push   %ebx
0857140f +0x0177:  sub    $0x10,%esp
08571412 +0x017a:  mov    0x8(%ebp),%eax
08571415 +0x017d:  mov    %eax,(%esp)
08571418 +0x0180:  call   085716a4 <+0x40c>
0857141d +0x0185:  movl   $0x0,0x4(%esp)
08571425 +0x018d:  mov    0x8(%ebp),%eax
08571428 +0x0190:  mov    %eax,(%esp)
0857142b +0x0193:  call   085716fa <+0x462>
08571430 +0x0198:  jmp    0857144d <+0x1b5>
08571432 +0x019a:  mov    %edx,%ebx
08571434 +0x019c:  mov    %eax,%esi
08571436 +0x019e:  mov    0x8(%ebp),%eax
08571439 +0x01a1:  mov    %eax,(%esp)
0857143c +0x01a4:  call   085713f6 <+0x15e>
08571441 +0x01a9:  mov    %esi,%eax
08571443 +0x01ab:  mov    %ebx,%edx
08571445 +0x01ad:  mov    %eax,(%esp)
08571448 +0x01b0:  call   08ae3750 <_Unwind_Resume>
0857144d +0x01b5:  add    $0x10,%esp
08571450 +0x01b8:  pop    %ebx
08571451 +0x01b9:  pop    %esi
08571452 +0x01ba:  pop    %ebp
08571453 +0x01bb:  ret
08571454 +0x01bc:  push   %ebp
08571455 +0x01bd:  mov    %esp,%ebp
08571457 +0x01bf:  push   %esi
08571458 +0x01c0:  push   %ebx
08571459 +0x01c1:  sub    $0x10,%esp
0857145c +0x01c4:  mov    0x8(%ebp),%eax
0857145f +0x01c7:  mov    (%eax),%eax
08571461 +0x01c9:  test   %eax,%eax
08571463 +0x01cb:  je     085714c2 <+0x22a>
08571465 +0x01cd:  mov    0x8(%ebp),%eax
08571468 +0x01d0:  mov    0x24(%eax),%eax
0857146b +0x01d3:  lea    0x4(%eax),%edx
0857146e +0x01d6:  mov    0x8(%ebp),%eax
08571471 +0x01d9:  mov    0x14(%eax),%eax
08571474 +0x01dc:  mov    %edx,0x8(%esp)
08571478 +0x01e0:  mov    %eax,0x4(%esp)
0857147c +0x01e4:  mov    0x8(%ebp),%eax
0857147f +0x01e7:  mov    %eax,(%esp)
08571482 +0x01ea:  call   0857186a <+0x5d2>
08571487 +0x01ef:  mov    0x8(%ebp),%eax
0857148a +0x01f2:  mov    0x4(%eax),%edx
0857148d +0x01f5:  mov    0x8(%ebp),%eax
08571490 +0x01f8:  mov    (%eax),%eax
08571492 +0x01fa:  mov    %edx,0x8(%esp)
08571496 +0x01fe:  mov    %eax,0x4(%esp)
0857149a +0x0202:  mov    0x8(%ebp),%eax
0857149d +0x0205:  mov    %eax,(%esp)
085714a0 +0x0208:  call   085718a0 <+0x608>
085714a5 +0x020d:  jmp    085714c2 <+0x22a>
085714a7 +0x020f:  mov    %edx,%ebx
085714a9 +0x0211:  mov    %eax,%esi
085714ab +0x0213:  mov    0x8(%ebp),%eax
085714ae +0x0216:  mov    %eax,(%esp)
085714b1 +0x0219:  call   085713f6 <+0x15e>
085714b6 +0x021e:  mov    %esi,%eax
085714b8 +0x0220:  mov    %ebx,%edx
085714ba +0x0222:  mov    %eax,(%esp)
085714bd +0x0225:  call   08ae3750 <_Unwind_Resume>
085714c2 +0x022a:  mov    0x8(%ebp),%eax
085714c5 +0x022d:  mov    %eax,(%esp)
085714c8 +0x0230:  call   085713f6 <+0x15e>
085714cd +0x0235:  add    $0x10,%esp
085714d0 +0x0238:  pop    %ebx
085714d1 +0x0239:  pop    %esi
085714d2 +0x023a:  pop    %ebp
085714d3 +0x023b:  ret
085714d4 +0x023c:  push   %ebp
085714d5 +0x023d:  mov    %esp,%ebp
085714d7 +0x023f:  push   %ebx
085714d8 +0x0240:  sub    $0x14,%esp
085714db +0x0243:  mov    0x8(%ebp),%ebx
085714de +0x0246:  mov    %ebx,%eax
085714e0 +0x0248:  mov    0xc(%ebp),%edx
085714e3 +0x024b:  add    $0x8,%edx
085714e6 +0x024e:  mov    %edx,0x4(%esp)
085714ea +0x0252:  mov    %eax,(%esp)
085714ed +0x0255:  call   08571530 <+0x298>
085714f2 +0x025a:  mov    %ebx,%eax
085714f4 +0x025c:  mov    %ebx,%eax
085714f6 +0x025e:  add    $0x14,%esp
085714f9 +0x0261:  pop    %ebx
085714fa +0x0262:  pop    %ebp
085714fb +0x0263:  ret    $0x4
085714fe +0x0266:  push   %ebp
085714ff +0x0267:  mov    %esp,%ebp
08571501 +0x0269:  push   %ebx
08571502 +0x026a:  sub    $0x14,%esp
08571505 +0x026d:  mov    0x8(%ebp),%ebx
08571508 +0x0270:  mov    %ebx,%eax
0857150a +0x0272:  mov    0xc(%ebp),%edx
0857150d +0x0275:  add    $0x18,%edx
08571510 +0x0278:  mov    %edx,0x4(%esp)
08571514 +0x027c:  mov    %eax,(%esp)
08571517 +0x027f:  call   08571530 <+0x298>
0857151c +0x0284:  mov    %ebx,%eax
0857151e +0x0286:  mov    %ebx,%eax
08571520 +0x0288:  add    $0x14,%esp
08571523 +0x028b:  pop    %ebx
08571524 +0x028c:  pop    %ebp
08571525 +0x028d:  ret    $0x4
08571528 +0x0290:  push   %ebp
08571529 +0x0291:  mov    %esp,%ebp
0857152b +0x0293:  mov    0x8(%ebp),%eax
0857152e +0x0296:  pop    %ebp
0857152f +0x0297:  ret
08571530 +0x0298:  push   %ebp
08571531 +0x0299:  mov    %esp,%ebp
08571533 +0x029b:  mov    0xc(%ebp),%eax
08571536 +0x029e:  mov    (%eax),%edx
08571538 +0x02a0:  mov    0x8(%ebp),%eax
0857153b +0x02a3:  mov    %edx,(%eax)
0857153d +0x02a5:  mov    0xc(%ebp),%eax
08571540 +0x02a8:  mov    0x4(%eax),%edx
08571543 +0x02ab:  mov    0x8(%ebp),%eax
08571546 +0x02ae:  mov    %edx,0x4(%eax)
08571549 +0x02b1:  mov    0xc(%ebp),%eax
0857154c +0x02b4:  mov    0x8(%eax),%edx
0857154f +0x02b7:  mov    0x8(%ebp),%eax
08571552 +0x02ba:  mov    %edx,0x8(%eax)
08571555 +0x02bd:  mov    0xc(%ebp),%eax
08571558 +0x02c0:  mov    0xc(%eax),%edx
0857155b +0x02c3:  mov    0x8(%ebp),%eax
0857155e +0x02c6:  mov    %edx,0xc(%eax)
08571561 +0x02c9:  pop    %ebp
08571562 +0x02ca:  ret
08571563 +0x02cb:  nop
08571564 +0x02cc:  push   %ebp
08571565 +0x02cd:  mov    %esp,%ebp
08571567 +0x02cf:  sub    $0x20,%esp
0857156a +0x02d2:  leave
0857156b +0x02d3:  ret
0857156c +0x02d4:  push   %ebp
0857156d +0x02d5:  mov    %esp,%ebp
0857156f +0x02d7:  mov    0x8(%ebp),%eax
08571572 +0x02da:  pop    %ebp
08571573 +0x02db:  ret
08571574 +0x02dc:  push   %ebp
08571575 +0x02dd:  mov    %esp,%ebp
08571577 +0x02df:  sub    $0x18,%esp
0857157a +0x02e2:  mov    0xc(%ebp),%eax
0857157d +0x02e5:  mov    %eax,(%esp)
08571580 +0x02e8:  call   085718e1 <+0x649>
08571585 +0x02ed:  mov    0x8(%ebp),%edx
08571588 +0x02f0:  mov    %eax,0x4(%esp)
0857158c +0x02f4:  mov    %edx,(%esp)
0857158f +0x02f7:  call   085718ea <+0x652>
08571594 +0x02fc:  leave
08571595 +0x02fd:  ret
08571596 +0x02fe:  push   %ebp
08571597 +0x02ff:  mov    %esp,%ebp
08571599 +0x0301:  sub    $0x18,%esp
0857159c +0x0304:  mov    0x8(%ebp),%eax
0857159f +0x0307:  mov    0x18(%eax),%edx
085715a2 +0x030a:  mov    0x8(%ebp),%eax
085715a5 +0x030d:  mov    0x20(%eax),%eax
085715a8 +0x0310:  sub    $0x4,%eax
085715ab +0x0313:  cmp    %eax,%edx
085715ad +0x0315:  je     085715dc <+0x344>
085715af +0x0317:  mov    0x8(%ebp),%eax
085715b2 +0x031a:  mov    0x18(%eax),%edx
085715b5 +0x031d:  mov    0x8(%ebp),%eax
085715b8 +0x0320:  mov    0xc(%ebp),%ecx
085715bb +0x0323:  mov    %ecx,0x8(%esp)
085715bf +0x0327:  mov    %edx,0x4(%esp)
085715c3 +0x032b:  mov    %eax,(%esp)
085715c6 +0x032e:  call   085719a6 <+0x70e>
085715cb +0x0333:  mov    0x8(%ebp),%eax
085715ce +0x0336:  mov    0x18(%eax),%eax
085715d1 +0x0339:  lea    0x4(%eax),%edx
085715d4 +0x033c:  mov    0x8(%ebp),%eax
085715d7 +0x033f:  mov    %edx,0x18(%eax)
085715da +0x0342:  jmp    085715ee <+0x356>
085715dc +0x0344:  mov    0xc(%ebp),%eax
085715df +0x0347:  mov    %eax,0x4(%esp)
085715e3 +0x034b:  mov    0x8(%ebp),%eax
085715e6 +0x034e:  mov    %eax,(%esp)
085715e9 +0x0351:  call   085719ce <+0x736>
085715ee +0x0356:  leave
085715ef +0x0357:  ret
085715f0 +0x0358:  push   %ebp
085715f1 +0x0359:  mov    %esp,%ebp
085715f3 +0x035b:  sub    $0x18,%esp
085715f6 +0x035e:  mov    0x8(%ebp),%eax
085715f9 +0x0361:  lea    0x8(%eax),%edx
085715fc +0x0364:  mov    0x8(%ebp),%eax
085715ff +0x0367:  add    $0x18,%eax
08571602 +0x036a:  mov    %edx,0x4(%esp)
08571606 +0x036e:  mov    %eax,(%esp)
08571609 +0x0371:  call   08571a8d <+0x7f5>
0857160e +0x0376:  leave
0857160f +0x0377:  ret
08571610 +0x0378:  push   %ebp
08571611 +0x0379:  mov    %esp,%ebp
08571613 +0x037b:  sub    $0x28,%esp
08571616 +0x037e:  lea    -0x18(%ebp),%eax
08571619 +0x0381:  mov    0x8(%ebp),%edx
0857161c +0x0384:  mov    %edx,0x4(%esp)
08571620 +0x0388:  mov    %eax,(%esp)
08571623 +0x038b:  call   085714d4 <+0x23c>
08571628 +0x0390:  sub    $0x4,%esp
0857162b +0x0393:  lea    -0x18(%ebp),%eax
0857162e +0x0396:  mov    %eax,(%esp)
08571631 +0x0399:  call   08571aa2 <+0x80a>
08571636 +0x039e:  leave
08571637 +0x039f:  ret
08571638 +0x03a0:  push   %ebp
08571639 +0x03a1:  mov    %esp,%ebp
0857163b +0x03a3:  sub    $0x18,%esp
0857163e +0x03a6:  mov    0x8(%ebp),%eax
08571641 +0x03a9:  mov    0x8(%eax),%edx
08571644 +0x03ac:  mov    0x8(%ebp),%eax
08571647 +0x03af:  mov    0x10(%eax),%eax
0857164a +0x03b2:  sub    $0x4,%eax
0857164d +0x03b5:  cmp    %eax,%edx
0857164f +0x03b7:  je     08571677 <+0x3df>
08571651 +0x03b9:  mov    0x8(%ebp),%eax
08571654 +0x03bc:  mov    0x8(%eax),%edx
08571657 +0x03bf:  mov    0x8(%ebp),%eax
0857165a +0x03c2:  mov    %edx,0x4(%esp)
0857165e +0x03c6:  mov    %eax,(%esp)
08571661 +0x03c9:  call   08571aac <+0x814>
08571666 +0x03ce:  mov    0x8(%ebp),%eax
08571669 +0x03d1:  mov    0x8(%eax),%eax
0857166c +0x03d4:  lea    0x4(%eax),%edx
0857166f +0x03d7:  mov    0x8(%ebp),%eax
08571672 +0x03da:  mov    %edx,0x8(%eax)
08571675 +0x03dd:  jmp    08571682 <+0x3ea>
08571677 +0x03df:  mov    0x8(%ebp),%eax
0857167a +0x03e2:  mov    %eax,(%esp)
0857167d +0x03e5:  call   08571ab2 <+0x81a>
08571682 +0x03ea:  leave
08571683 +0x03eb:  ret
08571684 +0x03ec:  push   %ebp
08571685 +0x03ed:  mov    %esp,%ebp
08571687 +0x03ef:  sub    $0x18,%esp
0857168a +0x03f2:  mov    0x8(%ebp),%eax
0857168d +0x03f5:  lea    0x8(%eax),%edx
08571690 +0x03f8:  mov    0x8(%ebp),%eax
08571693 +0x03fb:  add    $0x18,%eax
08571696 +0x03fe:  mov    %edx,0x4(%esp)
0857169a +0x0402:  mov    %eax,(%esp)
0857169d +0x0405:  call   08571b0b <+0x873>
085716a2 +0x040a:  leave
085716a3 +0x040b:  ret
085716a4 +0x040c:  push   %ebp
085716a5 +0x040d:  mov    %esp,%ebp
085716a7 +0x040f:  sub    $0x18,%esp
085716aa +0x0412:  mov    0x8(%ebp),%eax
085716ad +0x0415:  mov    %eax,(%esp)
085716b0 +0x0418:  call   08571b6e <+0x8d6>
085716b5 +0x041d:  mov    0x8(%ebp),%eax
085716b8 +0x0420:  movl   $0x0,(%eax)
085716be +0x0426:  mov    0x8(%ebp),%eax
085716c1 +0x0429:  movl   $0x0,0x4(%eax)
085716c8 +0x0430:  mov    0x8(%ebp),%eax
085716cb +0x0433:  add    $0x8,%eax
085716ce +0x0436:  mov    %eax,(%esp)
085716d1 +0x0439:  call   08571b82 <+0x8ea>
085716d6 +0x043e:  mov    0x8(%ebp),%eax
085716d9 +0x0441:  add    $0x18,%eax
085716dc +0x0444:  mov    %eax,(%esp)
085716df +0x0447:  call   08571b82 <+0x8ea>
085716e4 +0x044c:  leave
085716e5 +0x044d:  ret
085716e6 +0x044e:  push   %ebp
085716e7 +0x044f:  mov    %esp,%ebp
085716e9 +0x0451:  sub    $0x18,%esp
085716ec +0x0454:  mov    0x8(%ebp),%eax
085716ef +0x0457:  mov    %eax,(%esp)
085716f2 +0x045a:  call   08571bae <+0x916>
085716f7 +0x045f:  leave
085716f8 +0x0460:  ret
085716f9 +0x0461:  nop
085716fa +0x0462:  push   %ebp
085716fb +0x0463:  mov    %esp,%ebp
085716fd +0x0465:  push   %esi
085716fe +0x0466:  push   %ebx
085716ff +0x0467:  sub    $0x40,%esp
08571702 +0x046a:  movl   $0x4,(%esp)
08571709 +0x0471:  call   080ee3bb <_GLOBAL__I__Z26ProcessAntiBotInputWrapperv+0x1c>  ; global constructors keyed to ProcessAntiBotInputWrapper()+0x1c
0857170e +0x0476:  mov    %eax,-0x2c(%ebp)
08571711 +0x0479:  mov    0xc(%ebp),%eax
08571714 +0x047c:  mov    $0x0,%edx
08571719 +0x0481:  divl   -0x2c(%ebp)
0857171c +0x0484:  add    $0x1,%eax
0857171f +0x0487:  mov    %eax,-0x14(%ebp)
08571722 +0x048a:  mov    -0x14(%ebp),%eax
08571725 +0x048d:  add    $0x2,%eax
08571728 +0x0490:  mov    %eax,-0x1c(%ebp)
0857172b +0x0493:  movl   $0x8,-0x18(%ebp)
08571732 +0x049a:  lea    -0x1c(%ebp),%eax
08571735 +0x049d:  mov    %eax,0x4(%esp)
08571739 +0x04a1:  lea    -0x18(%ebp),%eax
0857173c +0x04a4:  mov    %eax,(%esp)
0857173f +0x04a7:  call   0807f531 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x601>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x601
08571744 +0x04ac:  mov    (%eax),%edx
08571746 +0x04ae:  mov    0x8(%ebp),%eax
08571749 +0x04b1:  mov    %edx,0x4(%eax)
0857174c +0x04b4:  mov    0x8(%ebp),%eax
0857174f +0x04b7:  mov    0x4(%eax),%eax
08571752 +0x04ba:  mov    %eax,0x4(%esp)
08571756 +0x04be:  mov    0x8(%ebp),%eax
08571759 +0x04c1:  mov    %eax,(%esp)
0857175c +0x04c4:  call   08571bb4 <+0x91c>
08571761 +0x04c9:  mov    0x8(%ebp),%edx
08571764 +0x04cc:  mov    %eax,(%edx)
08571766 +0x04ce:  mov    0x8(%ebp),%eax
08571769 +0x04d1:  mov    (%eax),%edx
0857176b +0x04d3:  mov    0x8(%ebp),%eax
0857176e +0x04d6:  mov    0x4(%eax),%eax
08571771 +0x04d9:  sub    -0x14(%ebp),%eax
08571774 +0x04dc:  shr    %eax
08571776 +0x04de:  shl    $0x2,%eax
08571779 +0x04e1:  lea    (%edx,%eax,1),%eax
0857177c +0x04e4:  mov    %eax,-0x10(%ebp)
0857177f +0x04e7:  mov    -0x14(%ebp),%eax
08571782 +0x04ea:  shl    $0x2,%eax
08571785 +0x04ed:  add    -0x10(%ebp),%eax
08571788 +0x04f0:  mov    %eax,-0xc(%ebp)
0857178b +0x04f3:  mov    -0xc(%ebp),%eax
0857178e +0x04f6:  mov    %eax,0x8(%esp)
08571792 +0x04fa:  mov    -0x10(%ebp),%eax
08571795 +0x04fd:  mov    %eax,0x4(%esp)
08571799 +0x0501:  mov    0x8(%ebp),%eax
0857179c +0x0504:  mov    %eax,(%esp)
0857179f +0x0507:  call   08571c20 <+0x988>
085717a4 +0x050c:  jmp    085717f9 <+0x561>
085717a6 +0x050e:  mov    %eax,(%esp)
085717a9 +0x0511:  call   08725ce0 <__cxa_begin_catch>
085717ae +0x0516:  mov    0x8(%ebp),%eax
085717b1 +0x0519:  mov    0x4(%eax),%edx
085717b4 +0x051c:  mov    0x8(%ebp),%eax
085717b7 +0x051f:  mov    (%eax),%eax
085717b9 +0x0521:  mov    %edx,0x8(%esp)
085717bd +0x0525:  mov    %eax,0x4(%esp)
085717c1 +0x0529:  mov    0x8(%ebp),%eax
085717c4 +0x052c:  mov    %eax,(%esp)
085717c7 +0x052f:  call   085718a0 <+0x608>
085717cc +0x0534:  mov    0x8(%ebp),%eax
085717cf +0x0537:  movl   $0x0,(%eax)
085717d5 +0x053d:  mov    0x8(%ebp),%eax
085717d8 +0x0540:  movl   $0x0,0x4(%eax)
085717df +0x0547:  call   08724be0 <__cxa_rethrow>
085717e4 +0x054c:  mov    %edx,%ebx
085717e6 +0x054e:  mov    %eax,%esi
085717e8 +0x0550:  call   08725c30 <__cxa_end_catch>
085717ed +0x0555:  mov    %esi,%eax
085717ef +0x0557:  mov    %ebx,%edx
085717f1 +0x0559:  mov    %eax,(%esp)
085717f4 +0x055c:  call   08ae3750 <_Unwind_Resume>
085717f9 +0x0561:  mov    0x8(%ebp),%eax
085717fc +0x0564:  lea    0x8(%eax),%edx
085717ff +0x0567:  mov    -0x10(%ebp),%eax
08571802 +0x056a:  mov    %eax,0x4(%esp)
08571806 +0x056e:  mov    %edx,(%esp)
08571809 +0x0571:  call   08571c96 <+0x9fe>
0857180e +0x0576:  mov    -0xc(%ebp),%eax
08571811 +0x0579:  lea    -0x4(%eax),%edx
08571814 +0x057c:  mov    0x8(%ebp),%eax
08571817 +0x057f:  add    $0x18,%eax
0857181a +0x0582:  mov    %edx,0x4(%esp)
0857181e +0x0586:  mov    %eax,(%esp)
08571821 +0x0589:  call   08571c96 <+0x9fe>
08571826 +0x058e:  mov    0x8(%ebp),%eax
08571829 +0x0591:  mov    0xc(%eax),%edx
0857182c +0x0594:  mov    0x8(%ebp),%eax
0857182f +0x0597:  mov    %edx,0x8(%eax)
08571832 +0x059a:  mov    0x8(%ebp),%eax
08571835 +0x059d:  mov    0x1c(%eax),%ebx
08571838 +0x05a0:  movl   $0x4,(%esp)
0857183f +0x05a7:  call   080ee3bb <_GLOBAL__I__Z26ProcessAntiBotInputWrapperv+0x1c>  ; global constructors keyed to ProcessAntiBotInputWrapper()+0x1c
08571844 +0x05ac:  mov    %eax,-0x2c(%ebp)
08571847 +0x05af:  mov    0xc(%ebp),%eax
0857184a +0x05b2:  mov    $0x0,%edx
0857184f +0x05b7:  divl   -0x2c(%ebp)
08571852 +0x05ba:  mov    %edx,%ecx
08571854 +0x05bc:  mov    %ecx,%eax
08571856 +0x05be:  shl    $0x2,%eax
08571859 +0x05c1:  lea    (%ebx,%eax,1),%edx
0857185c +0x05c4:  mov    0x8(%ebp),%eax
0857185f +0x05c7:  mov    %edx,0x18(%eax)
08571862 +0x05ca:  add    $0x40,%esp
08571865 +0x05cd:  pop    %ebx
08571866 +0x05ce:  pop    %esi
08571867 +0x05cf:  pop    %ebp
08571868 +0x05d0:  ret
08571869 +0x05d1:  nop
0857186a +0x05d2:  push   %ebp
0857186b +0x05d3:  mov    %esp,%ebp
0857186d +0x05d5:  sub    $0x28,%esp
08571870 +0x05d8:  mov    0xc(%ebp),%eax
08571873 +0x05db:  mov    %eax,-0xc(%ebp)
08571876 +0x05de:  jmp    08571890 <+0x5f8>
08571878 +0x05e0:  mov    -0xc(%ebp),%eax
0857187b +0x05e3:  mov    (%eax),%eax
0857187d +0x05e5:  mov    %eax,0x4(%esp)
08571881 +0x05e9:  mov    0x8(%ebp),%eax
08571884 +0x05ec:  mov    %eax,(%esp)
08571887 +0x05ef:  call   08571cce <+0xa36>
0857188c +0x05f4:  addl   $0x4,-0xc(%ebp)
08571890 +0x05f8:  mov    -0xc(%ebp),%eax
08571893 +0x05fb:  cmp    0x10(%ebp),%eax
08571896 +0x05fe:  setb   %al
08571899 +0x0601:  test   %al,%al
0857189b +0x0603:  jne    08571878 <+0x5e0>
0857189d +0x0605:  leave
0857189e +0x0606:  ret
0857189f +0x0607:  nop
085718a0 +0x0608:  push   %ebp
085718a1 +0x0609:  mov    %esp,%ebp
085718a3 +0x060b:  sub    $0x28,%esp
085718a6 +0x060e:  lea    -0x9(%ebp),%eax
085718a9 +0x0611:  mov    0x8(%ebp),%edx
085718ac +0x0614:  mov    %edx,0x4(%esp)
085718b0 +0x0618:  mov    %eax,(%esp)
085718b3 +0x061b:  call   08571cf8 <+0xa60>
085718b8 +0x0620:  sub    $0x4,%esp
085718bb +0x0623:  lea    -0x9(%ebp),%eax
085718be +0x0626:  mov    0x10(%ebp),%edx
085718c1 +0x0629:  mov    %edx,0x8(%esp)
085718c5 +0x062d:  mov    0xc(%ebp),%edx
085718c8 +0x0630:  mov    %edx,0x4(%esp)
085718cc +0x0634:  mov    %eax,(%esp)
085718cf +0x0637:  call   08571d3e <+0xaa6>
085718d4 +0x063c:  lea    -0x9(%ebp),%eax
085718d7 +0x063f:  mov    %eax,(%esp)
085718da +0x0642:  call   08571d2a <+0xa92>
085718df +0x0647:  leave
085718e0 +0x0648:  ret
085718e1 +0x0649:  push   %ebp
085718e2 +0x064a:  mov    %esp,%ebp
085718e4 +0x064c:  mov    0x8(%ebp),%eax
085718e7 +0x064f:  pop    %ebp
085718e8 +0x0650:  ret
085718e9 +0x0651:  nop
085718ea +0x0652:  push   %ebp
085718eb +0x0653:  mov    %esp,%ebp
085718ed +0x0655:  push   %esi
085718ee +0x0656:  push   %ebx
085718ef +0x0657:  sub    $0x10,%esp
085718f2 +0x065a:  mov    0xc(%ebp),%eax
085718f5 +0x065d:  mov    %eax,(%esp)
085718f8 +0x0660:  call   08571528 <+0x290>
085718fd +0x0665:  mov    0x8(%ebp),%edx
08571900 +0x0668:  mov    %eax,0x4(%esp)
08571904 +0x066c:  mov    %edx,(%esp)
08571907 +0x066f:  call   08571d52 <+0xaba>
0857190c +0x0674:  movl   $0x0,0x4(%esp)
08571914 +0x067c:  mov    0x8(%ebp),%eax
08571917 +0x067f:  mov    %eax,(%esp)
0857191a +0x0682:  call   085716fa <+0x462>
0857191f +0x0687:  mov    0xc(%ebp),%eax
08571922 +0x068a:  mov    (%eax),%eax
08571924 +0x068c:  test   %eax,%eax
08571926 +0x068e:  je     0857199f <+0x707>
08571928 +0x0690:  mov    0xc(%ebp),%eax
0857192b +0x0693:  lea    0x8(%eax),%edx
0857192e +0x0696:  mov    0x8(%ebp),%eax
08571931 +0x0699:  add    $0x8,%eax
08571934 +0x069c:  mov    %edx,0x4(%esp)
08571938 +0x06a0:  mov    %eax,(%esp)
0857193b +0x06a3:  call   08571d9b <+0xb03>
08571940 +0x06a8:  mov    0xc(%ebp),%eax
08571943 +0x06ab:  lea    0x18(%eax),%edx
08571946 +0x06ae:  mov    0x8(%ebp),%eax
08571949 +0x06b1:  add    $0x18,%eax
0857194c +0x06b4:  mov    %edx,0x4(%esp)
08571950 +0x06b8:  mov    %eax,(%esp)
08571953 +0x06bb:  call   08571d9b <+0xb03>
08571958 +0x06c0:  mov    0xc(%ebp),%edx
0857195b +0x06c3:  mov    0x8(%ebp),%eax
0857195e +0x06c6:  mov    %edx,0x4(%esp)
08571962 +0x06ca:  mov    %eax,(%esp)
08571965 +0x06cd:  call   08571e05 <+0xb6d>
0857196a +0x06d2:  mov    0xc(%ebp),%eax
0857196d +0x06d5:  lea    0x4(%eax),%edx
08571970 +0x06d8:  mov    0x8(%ebp),%eax
08571973 +0x06db:  add    $0x4,%eax
08571976 +0x06de:  mov    %edx,0x4(%esp)
0857197a +0x06e2:  mov    %eax,(%esp)
0857197d +0x06e5:  call   081026b9 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x16db>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x16db
08571982 +0x06ea:  jmp    0857199f <+0x707>
08571984 +0x06ec:  mov    %edx,%ebx
08571986 +0x06ee:  mov    %eax,%esi
08571988 +0x06f0:  mov    0x8(%ebp),%eax
0857198b +0x06f3:  mov    %eax,(%esp)
0857198e +0x06f6:  call   085713f6 <+0x15e>
08571993 +0x06fb:  mov    %esi,%eax
08571995 +0x06fd:  mov    %ebx,%edx
08571997 +0x06ff:  mov    %eax,(%esp)
0857199a +0x0702:  call   08ae3750 <_Unwind_Resume>
0857199f +0x0707:  add    $0x10,%esp
085719a2 +0x070a:  pop    %ebx
085719a3 +0x070b:  pop    %esi
085719a4 +0x070c:  pop    %ebp
085719a5 +0x070d:  ret
085719a6 +0x070e:  push   %ebp
085719a7 +0x070f:  mov    %esp,%ebp
085719a9 +0x0711:  sub    $0x18,%esp
085719ac +0x0714:  mov    0xc(%ebp),%eax
085719af +0x0717:  mov    %eax,0x4(%esp)
085719b3 +0x071b:  movl   $0x4,(%esp)
085719ba +0x0722:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
085719bf +0x0727:  mov    %eax,%edx
085719c1 +0x0729:  test   %edx,%edx
085719c3 +0x072b:  je     085719cc <+0x734>
085719c5 +0x072d:  mov    0x10(%ebp),%edx
085719c8 +0x0730:  mov    (%edx),%edx
085719ca +0x0732:  mov    %edx,(%eax)
085719cc +0x0734:  leave
085719cd +0x0735:  ret
085719ce +0x0736:  push   %ebp
085719cf +0x0737:  mov    %esp,%ebp
085719d1 +0x0739:  push   %esi
085719d2 +0x073a:  push   %ebx
085719d3 +0x073b:  sub    $0x10,%esp
085719d6 +0x073e:  movl   $0x1,0x4(%esp)
085719de +0x0746:  mov    0x8(%ebp),%eax
085719e1 +0x0749:  mov    %eax,(%esp)
085719e4 +0x074c:  call   08571e42 <+0xbaa>
085719e9 +0x0751:  mov    0x8(%ebp),%eax
085719ec +0x0754:  mov    0x24(%eax),%eax
085719ef +0x0757:  lea    0x4(%eax),%ebx
085719f2 +0x075a:  mov    0x8(%ebp),%eax
085719f5 +0x075d:  mov    %eax,(%esp)
085719f8 +0x0760:  call   08571e98 <+0xc00>
085719fd +0x0765:  mov    %eax,(%ebx)
085719ff +0x0767:  mov    0xc(%ebp),%eax
08571a02 +0x076a:  mov    %eax,(%esp)
08571a05 +0x076d:  call   08571ec3 <+0xc2b>
08571a0a +0x0772:  mov    0x8(%ebp),%edx
08571a0d +0x0775:  mov    0x18(%edx),%ecx
08571a10 +0x0778:  mov    0x8(%ebp),%edx
08571a13 +0x077b:  mov    %eax,0x8(%esp)
08571a17 +0x077f:  mov    %ecx,0x4(%esp)
08571a1b +0x0783:  mov    %edx,(%esp)
08571a1e +0x0786:  call   085719a6 <+0x70e>
08571a23 +0x078b:  mov    0x8(%ebp),%eax
08571a26 +0x078e:  mov    0x24(%eax),%eax
08571a29 +0x0791:  lea    0x4(%eax),%edx
08571a2c +0x0794:  mov    0x8(%ebp),%eax
08571a2f +0x0797:  add    $0x18,%eax
08571a32 +0x079a:  mov    %edx,0x4(%esp)
08571a36 +0x079e:  mov    %eax,(%esp)
08571a39 +0x07a1:  call   08571c96 <+0x9fe>
08571a3e +0x07a6:  mov    0x8(%ebp),%eax
08571a41 +0x07a9:  mov    0x1c(%eax),%edx
08571a44 +0x07ac:  mov    0x8(%ebp),%eax
08571a47 +0x07af:  mov    %edx,0x18(%eax)
08571a4a +0x07b2:  add    $0x10,%esp
08571a4d +0x07b5:  pop    %ebx
08571a4e +0x07b6:  pop    %esi
08571a4f +0x07b7:  pop    %ebp
08571a50 +0x07b8:  ret
08571a51 +0x07b9:  mov    %eax,(%esp)
08571a54 +0x07bc:  call   08725ce0 <__cxa_begin_catch>
08571a59 +0x07c1:  mov    0x8(%ebp),%eax
08571a5c +0x07c4:  mov    0x24(%eax),%eax
08571a5f +0x07c7:  add    $0x4,%eax
08571a62 +0x07ca:  mov    (%eax),%edx
08571a64 +0x07cc:  mov    0x8(%ebp),%eax
08571a67 +0x07cf:  mov    %edx,0x4(%esp)
08571a6b +0x07d3:  mov    %eax,(%esp)
08571a6e +0x07d6:  call   08571cce <+0xa36>
08571a73 +0x07db:  call   08724be0 <__cxa_rethrow>
08571a78 +0x07e0:  mov    %edx,%ebx
08571a7a +0x07e2:  mov    %eax,%esi
08571a7c +0x07e4:  call   08725c30 <__cxa_end_catch>
08571a81 +0x07e9:  mov    %esi,%eax
08571a83 +0x07eb:  mov    %ebx,%edx
08571a85 +0x07ed:  mov    %eax,(%esp)
08571a88 +0x07f0:  call   08ae3750 <_Unwind_Resume>
08571a8d +0x07f5:  push   %ebp
08571a8e +0x07f6:  mov    %esp,%ebp
08571a90 +0x07f8:  mov    0x8(%ebp),%eax
08571a93 +0x07fb:  mov    (%eax),%edx
08571a95 +0x07fd:  mov    0xc(%ebp),%eax
08571a98 +0x0800:  mov    (%eax),%eax
08571a9a +0x0802:  cmp    %eax,%edx
08571a9c +0x0804:  sete   %al
08571a9f +0x0807:  pop    %ebp
08571aa0 +0x0808:  ret
08571aa1 +0x0809:  nop
08571aa2 +0x080a:  push   %ebp
08571aa3 +0x080b:  mov    %esp,%ebp
08571aa5 +0x080d:  mov    0x8(%ebp),%eax
08571aa8 +0x0810:  mov    (%eax),%eax
08571aaa +0x0812:  pop    %ebp
08571aab +0x0813:  ret
08571aac +0x0814:  push   %ebp
08571aad +0x0815:  mov    %esp,%ebp
08571aaf +0x0817:  pop    %ebp
08571ab0 +0x0818:  ret
08571ab1 +0x0819:  nop
08571ab2 +0x081a:  push   %ebp
08571ab3 +0x081b:  mov    %esp,%ebp
08571ab5 +0x081d:  sub    $0x18,%esp
08571ab8 +0x0820:  mov    0x8(%ebp),%eax
08571abb +0x0823:  mov    0x8(%eax),%edx
08571abe +0x0826:  mov    0x8(%ebp),%eax
08571ac1 +0x0829:  mov    %edx,0x4(%esp)
08571ac5 +0x082d:  mov    %eax,(%esp)
08571ac8 +0x0830:  call   08571aac <+0x814>
08571acd +0x0835:  mov    0x8(%ebp),%eax
08571ad0 +0x0838:  mov    0xc(%eax),%edx
08571ad3 +0x083b:  mov    0x8(%ebp),%eax
08571ad6 +0x083e:  mov    %edx,0x4(%esp)
08571ada +0x0842:  mov    %eax,(%esp)
08571add +0x0845:  call   08571cce <+0xa36>
08571ae2 +0x084a:  mov    0x8(%ebp),%eax
08571ae5 +0x084d:  mov    0x14(%eax),%eax
08571ae8 +0x0850:  lea    0x4(%eax),%edx
08571aeb +0x0853:  mov    0x8(%ebp),%eax
08571aee +0x0856:  add    $0x8,%eax
08571af1 +0x0859:  mov    %edx,0x4(%esp)
08571af5 +0x085d:  mov    %eax,(%esp)
08571af8 +0x0860:  call   08571c96 <+0x9fe>
08571afd +0x0865:  mov    0x8(%ebp),%eax
08571b00 +0x0868:  mov    0xc(%eax),%edx
08571b03 +0x086b:  mov    0x8(%ebp),%eax
08571b06 +0x086e:  mov    %edx,0x8(%eax)
08571b09 +0x0871:  leave
08571b0a +0x0872:  ret
08571b0b +0x0873:  push   %ebp
08571b0c +0x0874:  mov    %esp,%ebp
08571b0e +0x0876:  push   %ebx
08571b0f +0x0877:  sub    $0x4,%esp
08571b12 +0x087a:  call   08571ecb <+0xc33>
08571b17 +0x087f:  mov    %eax,%edx
08571b19 +0x0881:  mov    0x8(%ebp),%eax
08571b1c +0x0884:  mov    0xc(%eax),%eax
08571b1f +0x0887:  mov    %eax,%ecx
08571b21 +0x0889:  mov    0xc(%ebp),%eax
08571b24 +0x088c:  mov    0xc(%eax),%eax
08571b27 +0x088f:  mov    %ecx,%ebx
08571b29 +0x0891:  sub    %eax,%ebx
08571b2b +0x0893:  mov    %ebx,%eax
08571b2d +0x0895:  sar    $0x2,%eax
08571b30 +0x0898:  sub    $0x1,%eax
08571b33 +0x089b:  imul   %eax,%edx
08571b36 +0x089e:  mov    0x8(%ebp),%eax
08571b39 +0x08a1:  mov    (%eax),%eax
08571b3b +0x08a3:  mov    %eax,%ecx
08571b3d +0x08a5:  mov    0x8(%ebp),%eax
08571b40 +0x08a8:  mov    0x4(%eax),%eax
08571b43 +0x08ab:  mov    %ecx,%ebx
08571b45 +0x08ad:  sub    %eax,%ebx
08571b47 +0x08af:  mov    %ebx,%eax
08571b49 +0x08b1:  sar    $0x2,%eax
08571b4c +0x08b4:  lea    (%edx,%eax,1),%ecx
08571b4f +0x08b7:  mov    0xc(%ebp),%eax
08571b52 +0x08ba:  mov    0x8(%eax),%eax
08571b55 +0x08bd:  mov    %eax,%edx
08571b57 +0x08bf:  mov    0xc(%ebp),%eax
08571b5a +0x08c2:  mov    (%eax),%eax
08571b5c +0x08c4:  mov    %edx,%ebx
08571b5e +0x08c6:  sub    %eax,%ebx
08571b60 +0x08c8:  mov    %ebx,%eax
08571b62 +0x08ca:  sar    $0x2,%eax
08571b65 +0x08cd:  lea    (%ecx,%eax,1),%eax
08571b68 +0x08d0:  add    $0x4,%esp
08571b6b +0x08d3:  pop    %ebx
08571b6c +0x08d4:  pop    %ebp
08571b6d +0x08d5:  ret
08571b6e +0x08d6:  push   %ebp
08571b6f +0x08d7:  mov    %esp,%ebp
08571b71 +0x08d9:  sub    $0x18,%esp
08571b74 +0x08dc:  mov    0x8(%ebp),%eax
08571b77 +0x08df:  mov    %eax,(%esp)
08571b7a +0x08e2:  call   08571ee0 <+0xc48>
08571b7f +0x08e7:  leave
08571b80 +0x08e8:  ret
08571b81 +0x08e9:  nop
08571b82 +0x08ea:  push   %ebp
08571b83 +0x08eb:  mov    %esp,%ebp
08571b85 +0x08ed:  mov    0x8(%ebp),%eax
08571b88 +0x08f0:  movl   $0x0,(%eax)
08571b8e +0x08f6:  mov    0x8(%ebp),%eax
08571b91 +0x08f9:  movl   $0x0,0x4(%eax)
08571b98 +0x0900:  mov    0x8(%ebp),%eax
08571b9b +0x0903:  movl   $0x0,0x8(%eax)
08571ba2 +0x090a:  mov    0x8(%ebp),%eax
08571ba5 +0x090d:  movl   $0x0,0xc(%eax)
08571bac +0x0914:  pop    %ebp
08571bad +0x0915:  ret
08571bae +0x0916:  push   %ebp
08571baf +0x0917:  mov    %esp,%ebp
08571bb1 +0x0919:  pop    %ebp
08571bb2 +0x091a:  ret
08571bb3 +0x091b:  nop
08571bb4 +0x091c:  push   %ebp
08571bb5 +0x091d:  mov    %esp,%ebp
08571bb7 +0x091f:  push   %esi
08571bb8 +0x0920:  push   %ebx
08571bb9 +0x0921:  sub    $0x20,%esp
08571bbc +0x0924:  lea    -0x9(%ebp),%eax
08571bbf +0x0927:  mov    0x8(%ebp),%edx
08571bc2 +0x092a:  mov    %edx,0x4(%esp)
08571bc6 +0x092e:  mov    %eax,(%esp)
08571bc9 +0x0931:  call   08571cf8 <+0xa60>
08571bce +0x0936:  sub    $0x4,%esp
08571bd1 +0x0939:  lea    -0x9(%ebp),%eax
08571bd4 +0x093c:  movl   $0x0,0x8(%esp)
08571bdc +0x0944:  mov    0xc(%ebp),%edx
08571bdf +0x0947:  mov    %edx,0x4(%esp)
08571be3 +0x094b:  mov    %eax,(%esp)
08571be6 +0x094e:  call   08571ee6 <+0xc4e>
08571beb +0x0953:  mov    %eax,%ebx
08571bed +0x0955:  lea    -0x9(%ebp),%eax
08571bf0 +0x0958:  mov    %eax,(%esp)
08571bf3 +0x095b:  call   08571d2a <+0xa92>
08571bf8 +0x0960:  mov    %ebx,%eax
08571bfa +0x0962:  lea    -0x8(%ebp),%esp
08571bfd +0x0965:  add    $0x0,%esp
08571c00 +0x0968:  pop    %ebx
08571c01 +0x0969:  pop    %esi
08571c02 +0x096a:  pop    %ebp
08571c03 +0x096b:  ret
08571c04 +0x096c:  mov    %edx,%ebx
08571c06 +0x096e:  mov    %eax,%esi
08571c08 +0x0970:  lea    -0x9(%ebp),%eax
08571c0b +0x0973:  mov    %eax,(%esp)
08571c0e +0x0976:  call   08571d2a <+0xa92>
08571c13 +0x097b:  mov    %esi,%eax
08571c15 +0x097d:  mov    %ebx,%edx
08571c17 +0x097f:  mov    %eax,(%esp)
08571c1a +0x0982:  call   08ae3750 <_Unwind_Resume>
08571c1f +0x0987:  nop
08571c20 +0x0988:  push   %ebp
08571c21 +0x0989:  mov    %esp,%ebp
08571c23 +0x098b:  push   %esi
08571c24 +0x098c:  push   %ebx
08571c25 +0x098d:  sub    $0x20,%esp
08571c28 +0x0990:  mov    0xc(%ebp),%eax
08571c2b +0x0993:  mov    %eax,-0xc(%ebp)
08571c2e +0x0996:  jmp    08571c44 <+0x9ac>
08571c30 +0x0998:  mov    0x8(%ebp),%eax
08571c33 +0x099b:  mov    %eax,(%esp)
08571c36 +0x099e:  call   08571e98 <+0xc00>
08571c3b +0x09a3:  mov    -0xc(%ebp),%edx
08571c3e +0x09a6:  mov    %eax,(%edx)
08571c40 +0x09a8:  addl   $0x4,-0xc(%ebp)
08571c44 +0x09ac:  mov    -0xc(%ebp),%eax
08571c47 +0x09af:  cmp    0x10(%ebp),%eax
08571c4a +0x09b2:  setb   %al
08571c4d +0x09b5:  test   %al,%al
08571c4f +0x09b7:  jne    08571c30 <+0x998>
08571c51 +0x09b9:  jmp    08571c8e <+0x9f6>
08571c53 +0x09bb:  mov    %eax,(%esp)
08571c56 +0x09be:  call   08725ce0 <__cxa_begin_catch>
08571c5b +0x09c3:  mov    -0xc(%ebp),%eax
08571c5e +0x09c6:  mov    %eax,0x8(%esp)
08571c62 +0x09ca:  mov    0xc(%ebp),%eax
08571c65 +0x09cd:  mov    %eax,0x4(%esp)
08571c69 +0x09d1:  mov    0x8(%ebp),%eax
08571c6c +0x09d4:  mov    %eax,(%esp)
08571c6f +0x09d7:  call   0857186a <+0x5d2>
08571c74 +0x09dc:  call   08724be0 <__cxa_rethrow>
08571c79 +0x09e1:  mov    %edx,%ebx
08571c7b +0x09e3:  mov    %eax,%esi
08571c7d +0x09e5:  call   08725c30 <__cxa_end_catch>
08571c82 +0x09ea:  mov    %esi,%eax
08571c84 +0x09ec:  mov    %ebx,%edx
08571c86 +0x09ee:  mov    %eax,(%esp)
08571c89 +0x09f1:  call   08ae3750 <_Unwind_Resume>
08571c8e +0x09f6:  add    $0x20,%esp
08571c91 +0x09f9:  pop    %ebx
08571c92 +0x09fa:  pop    %esi
08571c93 +0x09fb:  pop    %ebp
08571c94 +0x09fc:  ret
08571c95 +0x09fd:  nop
08571c96 +0x09fe:  push   %ebp
08571c97 +0x09ff:  mov    %esp,%ebp
08571c99 +0x0a01:  push   %ebx
08571c9a +0x0a02:  sub    $0x4,%esp
08571c9d +0x0a05:  mov    0x8(%ebp),%eax
08571ca0 +0x0a08:  mov    0xc(%ebp),%edx
08571ca3 +0x0a0b:  mov    %edx,0xc(%eax)
08571ca6 +0x0a0e:  mov    0xc(%ebp),%eax
08571ca9 +0x0a11:  mov    (%eax),%edx
08571cab +0x0a13:  mov    0x8(%ebp),%eax
08571cae +0x0a16:  mov    %edx,0x4(%eax)
08571cb1 +0x0a19:  mov    0x8(%ebp),%eax
08571cb4 +0x0a1c:  mov    0x4(%eax),%ebx
08571cb7 +0x0a1f:  call   08571ecb <+0xc33>
08571cbc +0x0a24:  shl    $0x2,%eax
08571cbf +0x0a27:  lea    (%ebx,%eax,1),%edx
08571cc2 +0x0a2a:  mov    0x8(%ebp),%eax
08571cc5 +0x0a2d:  mov    %edx,0x8(%eax)
08571cc8 +0x0a30:  add    $0x4,%esp
08571ccb +0x0a33:  pop    %ebx
08571ccc +0x0a34:  pop    %ebp
08571ccd +0x0a35:  ret
08571cce +0x0a36:  push   %ebp
08571ccf +0x0a37:  mov    %esp,%ebp
08571cd1 +0x0a39:  sub    $0x18,%esp
08571cd4 +0x0a3c:  movl   $0x4,(%esp)
08571cdb +0x0a43:  call   080ee3bb <_GLOBAL__I__Z26ProcessAntiBotInputWrapperv+0x1c>  ; global constructors keyed to ProcessAntiBotInputWrapper()+0x1c
08571ce0 +0x0a48:  mov    0x8(%ebp),%edx
08571ce3 +0x0a4b:  mov    %eax,0x8(%esp)
08571ce7 +0x0a4f:  mov    0xc(%ebp),%eax
08571cea +0x0a52:  mov    %eax,0x4(%esp)
08571cee +0x0a56:  mov    %edx,(%esp)
08571cf1 +0x0a59:  call   08571f1e <+0xc86>
08571cf6 +0x0a5e:  leave
08571cf7 +0x0a5f:  ret
08571cf8 +0x0a60:  push   %ebp
08571cf9 +0x0a61:  mov    %esp,%ebp
08571cfb +0x0a63:  push   %esi
08571cfc +0x0a64:  push   %ebx
08571cfd +0x0a65:  sub    $0x10,%esp
08571d00 +0x0a68:  mov    0x8(%ebp),%ebx
08571d03 +0x0a6b:  mov    %ebx,%esi
08571d05 +0x0a6d:  mov    0xc(%ebp),%eax
08571d08 +0x0a70:  mov    %eax,(%esp)
08571d0b +0x0a73:  call   08571f32 <+0xc9a>
08571d10 +0x0a78:  mov    %eax,0x4(%esp)
08571d14 +0x0a7c:  mov    %esi,(%esp)
08571d17 +0x0a7f:  call   08571f3a <+0xca2>
08571d1c +0x0a84:  mov    %ebx,%eax
08571d1e +0x0a86:  mov    %ebx,%eax
08571d20 +0x0a88:  add    $0x10,%esp
08571d23 +0x0a8b:  pop    %ebx
08571d24 +0x0a8c:  pop    %esi
08571d25 +0x0a8d:  pop    %ebp
08571d26 +0x0a8e:  ret    $0x4
08571d29 +0x0a91:  nop
08571d2a +0x0a92:  push   %ebp
08571d2b +0x0a93:  mov    %esp,%ebp
08571d2d +0x0a95:  sub    $0x18,%esp
08571d30 +0x0a98:  mov    0x8(%ebp),%eax
08571d33 +0x0a9b:  mov    %eax,(%esp)
08571d36 +0x0a9e:  call   08571f4e <+0xcb6>
08571d3b +0x0aa3:  leave
08571d3c +0x0aa4:  ret
08571d3d +0x0aa5:  nop
08571d3e +0x0aa6:  push   %ebp
08571d3f +0x0aa7:  mov    %esp,%ebp
08571d41 +0x0aa9:  sub    $0x18,%esp
08571d44 +0x0aac:  mov    0xc(%ebp),%eax
08571d47 +0x0aaf:  mov    %eax,(%esp)
08571d4a +0x0ab2:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08571d4f +0x0ab7:  leave
08571d50 +0x0ab8:  ret
08571d51 +0x0ab9:  nop
08571d52 +0x0aba:  push   %ebp
08571d53 +0x0abb:  mov    %esp,%ebp
08571d55 +0x0abd:  sub    $0x18,%esp
08571d58 +0x0ac0:  mov    0x8(%ebp),%eax
08571d5b +0x0ac3:  mov    0xc(%ebp),%edx
08571d5e +0x0ac6:  mov    %edx,0x4(%esp)
08571d62 +0x0aca:  mov    %eax,(%esp)
08571d65 +0x0acd:  call   08571f54 <+0xcbc>
08571d6a +0x0ad2:  mov    0x8(%ebp),%eax
08571d6d +0x0ad5:  movl   $0x0,(%eax)
08571d73 +0x0adb:  mov    0x8(%ebp),%eax
08571d76 +0x0ade:  movl   $0x0,0x4(%eax)
08571d7d +0x0ae5:  mov    0x8(%ebp),%eax
08571d80 +0x0ae8:  add    $0x8,%eax
08571d83 +0x0aeb:  mov    %eax,(%esp)
08571d86 +0x0aee:  call   08571b82 <+0x8ea>
08571d8b +0x0af3:  mov    0x8(%ebp),%eax
08571d8e +0x0af6:  add    $0x18,%eax
08571d91 +0x0af9:  mov    %eax,(%esp)
08571d94 +0x0afc:  call   08571b82 <+0x8ea>
08571d99 +0x0b01:  leave
08571d9a +0x0b02:  ret
08571d9b +0x0b03:  push   %ebp
08571d9c +0x0b04:  mov    %esp,%ebp
08571d9e +0x0b06:  sub    $0x28,%esp
08571da1 +0x0b09:  mov    0x8(%ebp),%eax
08571da4 +0x0b0c:  mov    %eax,(%esp)
08571da7 +0x0b0f:  call   08571f6e <+0xcd6>
08571dac +0x0b14:  mov    %eax,0x4(%esp)
08571db0 +0x0b18:  lea    -0x18(%ebp),%eax
08571db3 +0x0b1b:  mov    %eax,(%esp)
08571db6 +0x0b1e:  call   08571530 <+0x298>
08571dbb +0x0b23:  mov    0xc(%ebp),%eax
08571dbe +0x0b26:  mov    %eax,(%esp)
08571dc1 +0x0b29:  call   08571f6e <+0xcd6>
08571dc6 +0x0b2e:  mov    0x8(%ebp),%edx
08571dc9 +0x0b31:  mov    (%eax),%ecx
08571dcb +0x0b33:  mov    %ecx,(%edx)
08571dcd +0x0b35:  mov    0x4(%eax),%ecx
08571dd0 +0x0b38:  mov    %ecx,0x4(%edx)
08571dd3 +0x0b3b:  mov    0x8(%eax),%ecx
08571dd6 +0x0b3e:  mov    %ecx,0x8(%edx)
08571dd9 +0x0b41:  mov    0xc(%eax),%eax
08571ddc +0x0b44:  mov    %eax,0xc(%edx)
08571ddf +0x0b47:  lea    -0x18(%ebp),%eax
08571de2 +0x0b4a:  mov    %eax,(%esp)
08571de5 +0x0b4d:  call   08571f6e <+0xcd6>
08571dea +0x0b52:  mov    0xc(%ebp),%edx
08571ded +0x0b55:  mov    (%eax),%ecx
08571def +0x0b57:  mov    %ecx,(%edx)
08571df1 +0x0b59:  mov    0x4(%eax),%ecx
08571df4 +0x0b5c:  mov    %ecx,0x4(%edx)
08571df7 +0x0b5f:  mov    0x8(%eax),%ecx
08571dfa +0x0b62:  mov    %ecx,0x8(%edx)
08571dfd +0x0b65:  mov    0xc(%eax),%eax
08571e00 +0x0b68:  mov    %eax,0xc(%edx)
08571e03 +0x0b6b:  leave
08571e04 +0x0b6c:  ret
08571e05 +0x0b6d:  push   %ebp
08571e06 +0x0b6e:  mov    %esp,%ebp
08571e08 +0x0b70:  sub    $0x28,%esp
08571e0b +0x0b73:  mov    0x8(%ebp),%eax
08571e0e +0x0b76:  mov    %eax,(%esp)
08571e11 +0x0b79:  call   08571f76 <+0xcde>
08571e16 +0x0b7e:  mov    (%eax),%eax
08571e18 +0x0b80:  mov    %eax,-0xc(%ebp)
08571e1b +0x0b83:  mov    0xc(%ebp),%eax
08571e1e +0x0b86:  mov    %eax,(%esp)
08571e21 +0x0b89:  call   08571f76 <+0xcde>
08571e26 +0x0b8e:  mov    (%eax),%edx
08571e28 +0x0b90:  mov    0x8(%ebp),%eax
08571e2b +0x0b93:  mov    %edx,(%eax)
08571e2d +0x0b95:  lea    -0xc(%ebp),%eax
08571e30 +0x0b98:  mov    %eax,(%esp)
08571e33 +0x0b9b:  call   08571f76 <+0xcde>
08571e38 +0x0ba0:  mov    (%eax),%edx
08571e3a +0x0ba2:  mov    0xc(%ebp),%eax
08571e3d +0x0ba5:  mov    %edx,(%eax)
08571e3f +0x0ba7:  leave
08571e40 +0x0ba8:  ret
08571e41 +0x0ba9:  nop
08571e42 +0x0baa:  push   %ebp
08571e43 +0x0bab:  mov    %esp,%ebp
08571e45 +0x0bad:  push   %esi
08571e46 +0x0bae:  push   %ebx
08571e47 +0x0baf:  sub    $0x10,%esp
08571e4a +0x0bb2:  mov    0xc(%ebp),%eax
08571e4d +0x0bb5:  lea    0x1(%eax),%ebx
08571e50 +0x0bb8:  mov    0x8(%ebp),%eax
08571e53 +0x0bbb:  mov    0x4(%eax),%edx
08571e56 +0x0bbe:  mov    0x8(%ebp),%eax
08571e59 +0x0bc1:  mov    0x24(%eax),%eax
08571e5c +0x0bc4:  mov    %eax,%ecx
08571e5e +0x0bc6:  mov    0x8(%ebp),%eax
08571e61 +0x0bc9:  mov    (%eax),%eax
08571e63 +0x0bcb:  mov    %ecx,%esi
08571e65 +0x0bcd:  sub    %eax,%esi
08571e67 +0x0bcf:  mov    %esi,%eax
08571e69 +0x0bd1:  sar    $0x2,%eax
08571e6c +0x0bd4:  mov    %edx,%ecx
08571e6e +0x0bd6:  sub    %eax,%ecx
08571e70 +0x0bd8:  mov    %ecx,%eax
08571e72 +0x0bda:  cmp    %eax,%ebx
08571e74 +0x0bdc:  jbe    08571e90 <+0xbf8>
08571e76 +0x0bde:  movl   $0x0,0x8(%esp)
08571e7e +0x0be6:  mov    0xc(%ebp),%eax
08571e81 +0x0be9:  mov    %eax,0x4(%esp)
08571e85 +0x0bed:  mov    0x8(%ebp),%eax
08571e88 +0x0bf0:  mov    %eax,(%esp)
08571e8b +0x0bf3:  call   08571f7e <+0xce6>
08571e90 +0x0bf8:  add    $0x10,%esp
08571e93 +0x0bfb:  pop    %ebx
08571e94 +0x0bfc:  pop    %esi
08571e95 +0x0bfd:  pop    %ebp
08571e96 +0x0bfe:  ret
08571e97 +0x0bff:  nop
08571e98 +0x0c00:  push   %ebp
08571e99 +0x0c01:  mov    %esp,%ebp
08571e9b +0x0c03:  sub    $0x18,%esp
08571e9e +0x0c06:  movl   $0x4,(%esp)
08571ea5 +0x0c0d:  call   080ee3bb <_GLOBAL__I__Z26ProcessAntiBotInputWrapperv+0x1c>  ; global constructors keyed to ProcessAntiBotInputWrapper()+0x1c
08571eaa +0x0c12:  mov    0x8(%ebp),%edx
08571ead +0x0c15:  movl   $0x0,0x8(%esp)
08571eb5 +0x0c1d:  mov    %eax,0x4(%esp)
08571eb9 +0x0c21:  mov    %edx,(%esp)
08571ebc +0x0c24:  call   0857214e <+0xeb6>
08571ec1 +0x0c29:  leave
08571ec2 +0x0c2a:  ret
08571ec3 +0x0c2b:  push   %ebp
08571ec4 +0x0c2c:  mov    %esp,%ebp
08571ec6 +0x0c2e:  mov    0x8(%ebp),%eax
08571ec9 +0x0c31:  pop    %ebp
08571eca +0x0c32:  ret
08571ecb +0x0c33:  push   %ebp
08571ecc +0x0c34:  mov    %esp,%ebp
08571ece +0x0c36:  sub    $0x18,%esp
08571ed1 +0x0c39:  movl   $0x4,(%esp)
08571ed8 +0x0c40:  call   080ee3bb <_GLOBAL__I__Z26ProcessAntiBotInputWrapperv+0x1c>  ; global constructors keyed to ProcessAntiBotInputWrapper()+0x1c
08571edd +0x0c45:  leave
08571ede +0x0c46:  ret
08571edf +0x0c47:  nop
08571ee0 +0x0c48:  push   %ebp
08571ee1 +0x0c49:  mov    %esp,%ebp
08571ee3 +0x0c4b:  pop    %ebp
08571ee4 +0x0c4c:  ret
08571ee5 +0x0c4d:  nop
08571ee6 +0x0c4e:  push   %ebp
08571ee7 +0x0c4f:  mov    %esp,%ebp
08571ee9 +0x0c51:  sub    $0x18,%esp
08571eec +0x0c54:  mov    0x8(%ebp),%eax
08571eef +0x0c57:  mov    %eax,(%esp)
08571ef2 +0x0c5a:  call   08572186 <+0xeee>
08571ef7 +0x0c5f:  cmp    0xc(%ebp),%eax
08571efa +0x0c62:  setb   %al
08571efd +0x0c65:  movzbl %al,%eax
08571f00 +0x0c68:  test   %eax,%eax
08571f02 +0x0c6a:  setne  %al
08571f05 +0x0c6d:  test   %al,%al
08571f07 +0x0c6f:  je     08571f0e <+0xc76>
08571f09 +0x0c71:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
08571f0e +0x0c76:  mov    0xc(%ebp),%eax
08571f11 +0x0c79:  shl    $0x2,%eax
08571f14 +0x0c7c:  mov    %eax,(%esp)
08571f17 +0x0c7f:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08571f1c +0x0c84:  leave
08571f1d +0x0c85:  ret
08571f1e +0x0c86:  push   %ebp
08571f1f +0x0c87:  mov    %esp,%ebp
08571f21 +0x0c89:  sub    $0x18,%esp
08571f24 +0x0c8c:  mov    0xc(%ebp),%eax
08571f27 +0x0c8f:  mov    %eax,(%esp)
08571f2a +0x0c92:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08571f2f +0x0c97:  leave
08571f30 +0x0c98:  ret
08571f31 +0x0c99:  nop
08571f32 +0x0c9a:  push   %ebp
08571f33 +0x0c9b:  mov    %esp,%ebp
08571f35 +0x0c9d:  mov    0x8(%ebp),%eax
08571f38 +0x0ca0:  pop    %ebp
08571f39 +0x0ca1:  ret
08571f3a +0x0ca2:  push   %ebp
08571f3b +0x0ca3:  mov    %esp,%ebp
08571f3d +0x0ca5:  sub    $0x18,%esp
08571f40 +0x0ca8:  mov    0x8(%ebp),%eax
08571f43 +0x0cab:  mov    %eax,(%esp)
08571f46 +0x0cae:  call   08572190 <+0xef8>
08571f4b +0x0cb3:  leave
08571f4c +0x0cb4:  ret
08571f4d +0x0cb5:  nop
08571f4e +0x0cb6:  push   %ebp
08571f4f +0x0cb7:  mov    %esp,%ebp
08571f51 +0x0cb9:  pop    %ebp
08571f52 +0x0cba:  ret
08571f53 +0x0cbb:  nop
08571f54 +0x0cbc:  push   %ebp
08571f55 +0x0cbd:  mov    %esp,%ebp
08571f57 +0x0cbf:  sub    $0x18,%esp
08571f5a +0x0cc2:  mov    0xc(%ebp),%edx
08571f5d +0x0cc5:  mov    0x8(%ebp),%eax
08571f60 +0x0cc8:  mov    %edx,0x4(%esp)
08571f64 +0x0ccc:  mov    %eax,(%esp)
08571f67 +0x0ccf:  call   08572196 <+0xefe>
08571f6c +0x0cd4:  leave
08571f6d +0x0cd5:  ret
08571f6e +0x0cd6:  push   %ebp
08571f6f +0x0cd7:  mov    %esp,%ebp
08571f71 +0x0cd9:  mov    0x8(%ebp),%eax
08571f74 +0x0cdc:  pop    %ebp
08571f75 +0x0cdd:  ret
08571f76 +0x0cde:  push   %ebp
08571f77 +0x0cdf:  mov    %esp,%ebp
08571f79 +0x0ce1:  mov    0x8(%ebp),%eax
08571f7c +0x0ce4:  pop    %ebp
08571f7d +0x0ce5:  ret
08571f7e +0x0ce6:  push   %ebp
08571f7f +0x0ce7:  mov    %esp,%ebp
08571f81 +0x0ce9:  push   %ebx
08571f82 +0x0cea:  sub    $0x44,%esp
08571f85 +0x0ced:  mov    0x10(%ebp),%eax
08571f88 +0x0cf0:  mov    %al,-0x2c(%ebp)
08571f8b +0x0cf3:  mov    0x8(%ebp),%eax
08571f8e +0x0cf6:  mov    0x24(%eax),%eax
08571f91 +0x0cf9:  mov    %eax,%edx
08571f93 +0x0cfb:  mov    0x8(%ebp),%eax
08571f96 +0x0cfe:  mov    0x14(%eax),%eax
08571f99 +0x0d01:  mov    %edx,%ecx
08571f9b +0x0d03:  sub    %eax,%ecx
08571f9d +0x0d05:  mov    %ecx,%eax
08571f9f +0x0d07:  sar    $0x2,%eax
08571fa2 +0x0d0a:  add    $0x1,%eax
08571fa5 +0x0d0d:  mov    %eax,-0x1c(%ebp)
08571fa8 +0x0d10:  mov    0xc(%ebp),%eax
08571fab +0x0d13:  add    -0x1c(%ebp),%eax
08571fae +0x0d16:  mov    %eax,-0x18(%ebp)
08571fb1 +0x0d19:  mov    0x8(%ebp),%eax
08571fb4 +0x0d1c:  mov    0x4(%eax),%eax
08571fb7 +0x0d1f:  mov    -0x18(%ebp),%edx
08571fba +0x0d22:  add    %edx,%edx
08571fbc +0x0d24:  cmp    %edx,%eax
08571fbe +0x0d26:  jbe    08572058 <+0xdc0>
08571fc4 +0x0d2c:  mov    0x8(%ebp),%eax
08571fc7 +0x0d2f:  mov    (%eax),%edx
08571fc9 +0x0d31:  mov    0x8(%ebp),%eax
08571fcc +0x0d34:  mov    0x4(%eax),%eax
08571fcf +0x0d37:  sub    -0x18(%ebp),%eax
08571fd2 +0x0d3a:  shr    %eax
08571fd4 +0x0d3c:  lea    0x0(,%eax,4),%ecx
08571fdb +0x0d43:  cmpb   $0x0,-0x2c(%ebp)
08571fdf +0x0d47:  je     08571fe9 <+0xd51>
08571fe1 +0x0d49:  mov    0xc(%ebp),%eax
08571fe4 +0x0d4c:  shl    $0x2,%eax
08571fe7 +0x0d4f:  jmp    08571fee <+0xd56>
08571fe9 +0x0d51:  mov    $0x0,%eax
08571fee +0x0d56:  lea    (%ecx,%eax,1),%eax
08571ff1 +0x0d59:  lea    (%edx,%eax,1),%eax
08571ff4 +0x0d5c:  mov    %eax,-0x14(%ebp)
08571ff7 +0x0d5f:  mov    0x8(%ebp),%eax
08571ffa +0x0d62:  mov    0x14(%eax),%eax
08571ffd +0x0d65:  cmp    -0x14(%ebp),%eax
08572000 +0x0d68:  jbe    08572029 <+0xd91>
08572002 +0x0d6a:  mov    0x8(%ebp),%eax
08572005 +0x0d6d:  mov    0x24(%eax),%eax
08572008 +0x0d70:  lea    0x4(%eax),%ecx
0857200b +0x0d73:  mov    0x8(%ebp),%eax
0857200e +0x0d76:  mov    0x14(%eax),%eax
08572011 +0x0d79:  mov    -0x14(%ebp),%edx
08572014 +0x0d7c:  mov    %edx,0x8(%esp)
08572018 +0x0d80:  mov    %ecx,0x4(%esp)
0857201c +0x0d84:  mov    %eax,(%esp)
0857201f +0x0d87:  call   0857219b <+0xf03>
08572024 +0x0d8c:  jmp    08572115 <+0xe7d>
08572029 +0x0d91:  mov    -0x1c(%ebp),%eax
0857202c +0x0d94:  shl    $0x2,%eax
0857202f +0x0d97:  mov    %eax,%edx
08572031 +0x0d99:  add    -0x14(%ebp),%edx
08572034 +0x0d9c:  mov    0x8(%ebp),%eax
08572037 +0x0d9f:  mov    0x24(%eax),%eax
0857203a +0x0da2:  lea    0x4(%eax),%ecx
0857203d +0x0da5:  mov    0x8(%ebp),%eax
08572040 +0x0da8:  mov    0x14(%eax),%eax
08572043 +0x0dab:  mov    %edx,0x8(%esp)
08572047 +0x0daf:  mov    %ecx,0x4(%esp)
0857204b +0x0db3:  mov    %eax,(%esp)
0857204e +0x0db6:  call   085721d3 <+0xf3b>
08572053 +0x0dbb:  jmp    08572115 <+0xe7d>
08572058 +0x0dc0:  mov    0x8(%ebp),%eax
0857205b +0x0dc3:  mov    0x4(%eax),%ebx
0857205e +0x0dc6:  mov    0x8(%ebp),%eax
08572061 +0x0dc9:  lea    0x4(%eax),%edx
08572064 +0x0dcc:  lea    0xc(%ebp),%eax
08572067 +0x0dcf:  mov    %eax,0x4(%esp)
0857206b +0x0dd3:  mov    %edx,(%esp)
0857206e +0x0dd6:  call   0807f531 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x601>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x601
08572073 +0x0ddb:  mov    (%eax),%eax
08572075 +0x0ddd:  lea    (%ebx,%eax,1),%eax
08572078 +0x0de0:  add    $0x2,%eax
0857207b +0x0de3:  mov    %eax,-0x10(%ebp)
0857207e +0x0de6:  mov    0x8(%ebp),%eax
08572081 +0x0de9:  mov    -0x10(%ebp),%edx
08572084 +0x0dec:  mov    %edx,0x4(%esp)
08572088 +0x0df0:  mov    %eax,(%esp)
0857208b +0x0df3:  call   08571bb4 <+0x91c>
08572090 +0x0df8:  mov    %eax,-0xc(%ebp)
08572093 +0x0dfb:  mov    -0x18(%ebp),%eax
08572096 +0x0dfe:  mov    -0x10(%ebp),%edx
08572099 +0x0e01:  mov    %edx,%ecx
0857209b +0x0e03:  sub    %eax,%ecx
0857209d +0x0e05:  mov    %ecx,%eax
0857209f +0x0e07:  shr    %eax
085720a1 +0x0e09:  lea    0x0(,%eax,4),%edx
085720a8 +0x0e10:  cmpb   $0x0,-0x2c(%ebp)
085720ac +0x0e14:  je     085720b6 <+0xe1e>
085720ae +0x0e16:  mov    0xc(%ebp),%eax
085720b1 +0x0e19:  shl    $0x2,%eax
085720b4 +0x0e1c:  jmp    085720bb <+0xe23>
085720b6 +0x0e1e:  mov    $0x0,%eax
085720bb +0x0e23:  lea    (%edx,%eax,1),%eax
085720be +0x0e26:  add    -0xc(%ebp),%eax
085720c1 +0x0e29:  mov    %eax,-0x14(%ebp)
085720c4 +0x0e2c:  mov    0x8(%ebp),%eax
085720c7 +0x0e2f:  mov    0x24(%eax),%eax
085720ca +0x0e32:  lea    0x4(%eax),%ecx
085720cd +0x0e35:  mov    0x8(%ebp),%eax
085720d0 +0x0e38:  mov    0x14(%eax),%eax
085720d3 +0x0e3b:  mov    -0x14(%ebp),%edx
085720d6 +0x0e3e:  mov    %edx,0x8(%esp)
085720da +0x0e42:  mov    %ecx,0x4(%esp)
085720de +0x0e46:  mov    %eax,(%esp)
085720e1 +0x0e49:  call   0857219b <+0xf03>
085720e6 +0x0e4e:  mov    0x8(%ebp),%eax
085720e9 +0x0e51:  mov    0x4(%eax),%ecx
085720ec +0x0e54:  mov    0x8(%ebp),%eax
085720ef +0x0e57:  mov    (%eax),%edx
085720f1 +0x0e59:  mov    0x8(%ebp),%eax
085720f4 +0x0e5c:  mov    %ecx,0x8(%esp)
085720f8 +0x0e60:  mov    %edx,0x4(%esp)
085720fc +0x0e64:  mov    %eax,(%esp)
085720ff +0x0e67:  call   085718a0 <+0x608>
08572104 +0x0e6c:  mov    0x8(%ebp),%eax
08572107 +0x0e6f:  mov    -0xc(%ebp),%edx
0857210a +0x0e72:  mov    %edx,(%eax)
0857210c +0x0e74:  mov    0x8(%ebp),%eax
0857210f +0x0e77:  mov    -0x10(%ebp),%edx
08572112 +0x0e7a:  mov    %edx,0x4(%eax)
08572115 +0x0e7d:  mov    0x8(%ebp),%eax
08572118 +0x0e80:  lea    0x8(%eax),%edx
0857211b +0x0e83:  mov    -0x14(%ebp),%eax
0857211e +0x0e86:  mov    %eax,0x4(%esp)
08572122 +0x0e8a:  mov    %edx,(%esp)
08572125 +0x0e8d:  call   08571c96 <+0x9fe>
0857212a +0x0e92:  mov    -0x1c(%ebp),%eax
0857212d +0x0e95:  sub    $0x1,%eax
08572130 +0x0e98:  shl    $0x2,%eax
08572133 +0x0e9b:  add    -0x14(%ebp),%eax
08572136 +0x0e9e:  mov    0x8(%ebp),%edx
08572139 +0x0ea1:  add    $0x18,%edx
0857213c +0x0ea4:  mov    %eax,0x4(%esp)
08572140 +0x0ea8:  mov    %edx,(%esp)
08572143 +0x0eab:  call   08571c96 <+0x9fe>
08572148 +0x0eb0:  add    $0x44,%esp
0857214b +0x0eb3:  pop    %ebx
0857214c +0x0eb4:  pop    %ebp
0857214d +0x0eb5:  ret
0857214e +0x0eb6:  push   %ebp
0857214f +0x0eb7:  mov    %esp,%ebp
08572151 +0x0eb9:  sub    $0x18,%esp
08572154 +0x0ebc:  mov    0x8(%ebp),%eax
08572157 +0x0ebf:  mov    %eax,(%esp)
0857215a +0x0ec2:  call   0857220c <+0xf74>
0857215f +0x0ec7:  cmp    0xc(%ebp),%eax
08572162 +0x0eca:  setb   %al
08572165 +0x0ecd:  movzbl %al,%eax
08572168 +0x0ed0:  test   %eax,%eax
0857216a +0x0ed2:  setne  %al
0857216d +0x0ed5:  test   %al,%al
0857216f +0x0ed7:  je     08572176 <+0xede>
08572171 +0x0ed9:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
08572176 +0x0ede:  mov    0xc(%ebp),%eax
08572179 +0x0ee1:  shl    $0x2,%eax
0857217c +0x0ee4:  mov    %eax,(%esp)
0857217f +0x0ee7:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08572184 +0x0eec:  leave
08572185 +0x0eed:  ret
08572186 +0x0eee:  push   %ebp
08572187 +0x0eef:  mov    %esp,%ebp
08572189 +0x0ef1:  mov    $0x3fffffff,%eax
0857218e +0x0ef6:  pop    %ebp
0857218f +0x0ef7:  ret
08572190 +0x0ef8:  push   %ebp
08572191 +0x0ef9:  mov    %esp,%ebp
08572193 +0x0efb:  pop    %ebp
08572194 +0x0efc:  ret
08572195 +0x0efd:  nop
08572196 +0x0efe:  push   %ebp
08572197 +0x0eff:  mov    %esp,%ebp
08572199 +0x0f01:  pop    %ebp
0857219a +0x0f02:  ret
0857219b +0x0f03:  push   %ebp
0857219c +0x0f04:  mov    %esp,%ebp
0857219e +0x0f06:  push   %ebx
0857219f +0x0f07:  sub    $0x14,%esp
085721a2 +0x0f0a:  mov    0xc(%ebp),%eax
085721a5 +0x0f0d:  mov    %eax,(%esp)
085721a8 +0x0f10:  call   08572216 <+0xf7e>
085721ad +0x0f15:  mov    %eax,%ebx
085721af +0x0f17:  mov    0x8(%ebp),%eax
085721b2 +0x0f1a:  mov    %eax,(%esp)
085721b5 +0x0f1d:  call   08572216 <+0xf7e>
085721ba +0x0f22:  mov    0x10(%ebp),%edx
085721bd +0x0f25:  mov    %edx,0x8(%esp)
085721c1 +0x0f29:  mov    %ebx,0x4(%esp)
085721c5 +0x0f2d:  mov    %eax,(%esp)
085721c8 +0x0f30:  call   0857221e <+0xf86>
085721cd +0x0f35:  add    $0x14,%esp
085721d0 +0x0f38:  pop    %ebx
085721d1 +0x0f39:  pop    %ebp
085721d2 +0x0f3a:  ret
085721d3 +0x0f3b:  push   %ebp
085721d4 +0x0f3c:  mov    %esp,%ebp
085721d6 +0x0f3e:  push   %ebx
085721d7 +0x0f3f:  sub    $0x14,%esp
085721da +0x0f42:  mov    0xc(%ebp),%eax
085721dd +0x0f45:  mov    %eax,(%esp)
085721e0 +0x0f48:  call   08572216 <+0xf7e>
085721e5 +0x0f4d:  mov    %eax,%ebx
085721e7 +0x0f4f:  mov    0x8(%ebp),%eax
085721ea +0x0f52:  mov    %eax,(%esp)
085721ed +0x0f55:  call   08572216 <+0xf7e>
085721f2 +0x0f5a:  mov    0x10(%ebp),%edx
085721f5 +0x0f5d:  mov    %edx,0x8(%esp)
085721f9 +0x0f61:  mov    %ebx,0x4(%esp)
085721fd +0x0f65:  mov    %eax,(%esp)
08572200 +0x0f68:  call   08572262 <+0xfca>
08572205 +0x0f6d:  add    $0x14,%esp
08572208 +0x0f70:  pop    %ebx
08572209 +0x0f71:  pop    %ebp
0857220a +0x0f72:  ret
0857220b +0x0f73:  nop
0857220c +0x0f74:  push   %ebp
0857220d +0x0f75:  mov    %esp,%ebp
0857220f +0x0f77:  mov    $0x3fffffff,%eax
08572214 +0x0f7c:  pop    %ebp
08572215 +0x0f7d:  ret
08572216 +0x0f7e:  push   %ebp
08572217 +0x0f7f:  mov    %esp,%ebp
08572219 +0x0f81:  mov    0x8(%ebp),%eax
0857221c +0x0f84:  pop    %ebp
0857221d +0x0f85:  ret
0857221e +0x0f86:  push   %ebp
0857221f +0x0f87:  mov    %esp,%ebp
08572221 +0x0f89:  push   %esi
08572222 +0x0f8a:  push   %ebx
08572223 +0x0f8b:  sub    $0x10,%esp
08572226 +0x0f8e:  mov    0x10(%ebp),%eax
08572229 +0x0f91:  mov    %eax,(%esp)
0857222c +0x0f94:  call   085722a6 <+0x100e>
08572231 +0x0f99:  mov    %eax,%esi
08572233 +0x0f9b:  mov    0xc(%ebp),%eax
08572236 +0x0f9e:  mov    %eax,(%esp)
08572239 +0x0fa1:  call   085722a6 <+0x100e>
0857223e +0x0fa6:  mov    %eax,%ebx
08572240 +0x0fa8:  mov    0x8(%ebp),%eax
08572243 +0x0fab:  mov    %eax,(%esp)
08572246 +0x0fae:  call   085722a6 <+0x100e>
0857224b +0x0fb3:  mov    %esi,0x8(%esp)
0857224f +0x0fb7:  mov    %ebx,0x4(%esp)
08572253 +0x0fbb:  mov    %eax,(%esp)
08572256 +0x0fbe:  call   085722ae <+0x1016>
0857225b +0x0fc3:  add    $0x10,%esp
0857225e +0x0fc6:  pop    %ebx
0857225f +0x0fc7:  pop    %esi
08572260 +0x0fc8:  pop    %ebp
08572261 +0x0fc9:  ret
08572262 +0x0fca:  push   %ebp
08572263 +0x0fcb:  mov    %esp,%ebp
08572265 +0x0fcd:  push   %esi
08572266 +0x0fce:  push   %ebx
08572267 +0x0fcf:  sub    $0x10,%esp
0857226a +0x0fd2:  mov    0x10(%ebp),%eax
0857226d +0x0fd5:  mov    %eax,(%esp)
08572270 +0x0fd8:  call   085722a6 <+0x100e>
08572275 +0x0fdd:  mov    %eax,%esi
08572277 +0x0fdf:  mov    0xc(%ebp),%eax
0857227a +0x0fe2:  mov    %eax,(%esp)
0857227d +0x0fe5:  call   085722a6 <+0x100e>
08572282 +0x0fea:  mov    %eax,%ebx
08572284 +0x0fec:  mov    0x8(%ebp),%eax
08572287 +0x0fef:  mov    %eax,(%esp)
0857228a +0x0ff2:  call   085722a6 <+0x100e>
0857228f +0x0ff7:  mov    %esi,0x8(%esp)
08572293 +0x0ffb:  mov    %ebx,0x4(%esp)
08572297 +0x0fff:  mov    %eax,(%esp)
0857229a +0x1002:  call   085722d3 <+0x103b>
0857229f +0x1007:  add    $0x10,%esp
085722a2 +0x100a:  pop    %ebx
085722a3 +0x100b:  pop    %esi
085722a4 +0x100c:  pop    %ebp
085722a5 +0x100d:  ret
085722a6 +0x100e:  push   %ebp
085722a7 +0x100f:  mov    %esp,%ebp
085722a9 +0x1011:  mov    0x8(%ebp),%eax
085722ac +0x1014:  pop    %ebp
085722ad +0x1015:  ret
085722ae +0x1016:  push   %ebp
085722af +0x1017:  mov    %esp,%ebp
085722b1 +0x1019:  sub    $0x28,%esp
085722b4 +0x101c:  movb   $0x1,-0x9(%ebp)
085722b8 +0x1020:  mov    0x10(%ebp),%eax
085722bb +0x1023:  mov    %eax,0x8(%esp)
085722bf +0x1027:  mov    0xc(%ebp),%eax
085722c2 +0x102a:  mov    %eax,0x4(%esp)
085722c6 +0x102e:  mov    0x8(%ebp),%eax
085722c9 +0x1031:  mov    %eax,(%esp)
085722cc +0x1034:  call   085722f8 <+0x1060>
085722d1 +0x1039:  leave
085722d2 +0x103a:  ret
085722d3 +0x103b:  push   %ebp
085722d4 +0x103c:  mov    %esp,%ebp
085722d6 +0x103e:  sub    $0x28,%esp
085722d9 +0x1041:  movb   $0x1,-0x9(%ebp)
085722dd +0x1045:  mov    0x10(%ebp),%eax
085722e0 +0x1048:  mov    %eax,0x8(%esp)
085722e4 +0x104c:  mov    0xc(%ebp),%eax
085722e7 +0x104f:  mov    %eax,0x4(%esp)
085722eb +0x1053:  mov    0x8(%ebp),%eax
085722ee +0x1056:  mov    %eax,(%esp)
085722f1 +0x1059:  call   0857233d <+0x10a5>
085722f6 +0x105e:  leave
085722f7 +0x105f:  ret
085722f8 +0x1060:  push   %ebp
085722f9 +0x1061:  mov    %esp,%ebp
085722fb +0x1063:  sub    $0x18,%esp
085722fe +0x1066:  mov    0xc(%ebp),%edx
08572301 +0x1069:  mov    0x8(%ebp),%eax
08572304 +0x106c:  mov    %edx,%ecx
08572306 +0x106e:  sub    %eax,%ecx
08572308 +0x1070:  mov    %ecx,%eax
0857230a +0x1072:  sar    $0x2,%eax
0857230d +0x1075:  shl    $0x2,%eax
08572310 +0x1078:  mov    %eax,0x8(%esp)
08572314 +0x107c:  mov    0x8(%ebp),%eax
08572317 +0x107f:  mov    %eax,0x4(%esp)
0857231b +0x1083:  mov    0x10(%ebp),%eax
0857231e +0x1086:  mov    %eax,(%esp)
08572321 +0x1089:  call   0807d880 <_init+0x178>
08572326 +0x108e:  mov    0xc(%ebp),%edx
08572329 +0x1091:  mov    0x8(%ebp),%eax
0857232c +0x1094:  mov    %edx,%ecx
0857232e +0x1096:  sub    %eax,%ecx
08572330 +0x1098:  mov    %ecx,%eax
08572332 +0x109a:  sar    $0x2,%eax
08572335 +0x109d:  shl    $0x2,%eax
08572338 +0x10a0:  add    0x10(%ebp),%eax
0857233b +0x10a3:  leave
0857233c +0x10a4:  ret
0857233d +0x10a5:  push   %ebp
0857233e +0x10a6:  mov    %esp,%ebp
08572340 +0x10a8:  sub    $0x28,%esp
08572343 +0x10ab:  mov    0xc(%ebp),%edx
08572346 +0x10ae:  mov    0x8(%ebp),%eax
08572349 +0x10b1:  mov    %edx,%ecx
0857234b +0x10b3:  sub    %eax,%ecx
0857234d +0x10b5:  mov    %ecx,%eax
0857234f +0x10b7:  sar    $0x2,%eax
08572352 +0x10ba:  mov    %eax,-0xc(%ebp)
08572355 +0x10bd:  mov    -0xc(%ebp),%eax
08572358 +0x10c0:  lea    0x0(,%eax,4),%edx
0857235f +0x10c7:  mov    -0xc(%ebp),%eax
08572362 +0x10ca:  shl    $0x2,%eax
08572365 +0x10cd:  neg    %eax
08572367 +0x10cf:  add    0x10(%ebp),%eax
0857236a +0x10d2:  mov    %edx,0x8(%esp)
0857236e +0x10d6:  mov    0x8(%ebp),%edx
08572371 +0x10d9:  mov    %edx,0x4(%esp)
08572375 +0x10dd:  mov    %eax,(%esp)
08572378 +0x10e0:  call   0807d880 <_init+0x178>
0857237d +0x10e5:  mov    -0xc(%ebp),%eax
08572380 +0x10e8:  shl    $0x2,%eax
08572383 +0x10eb:  neg    %eax
08572385 +0x10ed:  add    0x10(%ebp),%eax
08572388 +0x10f0:  leave
08572389 +0x10f1:  ret
0857238a +0x10f2:  nop
0857238b +0x10f3:  nop
```

## 反编译 C

```c
// <global>::global @ 0x8571298

/* MsgQueueMgr::MsgQueueMgr() */

void MsgQueueMgr::_GLOBAL__I_MsgQueueMgr(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
