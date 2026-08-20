# IncrementBossStageStart

`_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh`

`global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CBossDungeonEntranceLog` | `0x081573a1` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081573a1  _GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh
#           global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)
# range [0x081573a1, 0x0815a0af]
081573a1 +0x0000:  push   %ebp
081573a2 +0x0001:  mov    %esp,%ebp
081573a4 +0x0003:  sub    $0x18,%esp
081573a7 +0x0006:  movl   $0xffff,0x4(%esp)
081573af +0x000e:  movl   $0x1,(%esp)
081573b6 +0x0015:  call   08157361 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
081573bb +0x001a:  leave
081573bc +0x001b:  ret
081573bd +0x001c:  nop
081573be +0x001d:  push   %ebp
081573bf +0x001e:  mov    %esp,%ebp
081573c1 +0x0020:  mov    0x8(%ebp),%eax
081573c4 +0x0023:  movl   $0x0,(%eax)
081573ca +0x0029:  mov    0x8(%ebp),%eax
081573cd +0x002c:  movl   $0x0,0x4(%eax)
081573d4 +0x0033:  mov    0x8(%ebp),%eax
081573d7 +0x0036:  movl   $0x0,0x8(%eax)
081573de +0x003d:  mov    0x8(%ebp),%eax
081573e1 +0x0040:  movl   $0x0,0xc(%eax)
081573e8 +0x0047:  pop    %ebp
081573e9 +0x0048:  ret
081573ea +0x0049:  push   %ebp
081573eb +0x004a:  mov    %esp,%ebp
081573ed +0x004c:  mov    0x8(%ebp),%eax
081573f0 +0x004f:  movw   $0x0,(%eax)
081573f5 +0x0054:  mov    0x8(%ebp),%eax
081573f8 +0x0057:  movl   $0x0,0x4(%eax)
081573ff +0x005e:  mov    0x8(%ebp),%eax
08157402 +0x0061:  movw   $0x0,0x8(%eax)
08157408 +0x0067:  mov    0x8(%ebp),%eax
0815740b +0x006a:  movw   $0x0,0xa(%eax)
08157411 +0x0070:  mov    0x8(%ebp),%eax
08157414 +0x0073:  movw   $0x0,0xc(%eax)
0815741a +0x0079:  pop    %ebp
0815741b +0x007a:  ret
0815741c +0x007b:  push   %ebp
0815741d +0x007c:  mov    %esp,%ebp
0815741f +0x007e:  mov    0x8(%ebp),%eax
08157422 +0x0081:  mov    0x10(%eax),%eax
08157425 +0x0084:  test   %eax,%eax
08157427 +0x0086:  je     08157435 <+0x94>
08157429 +0x0088:  mov    0x8(%ebp),%eax
0815742c +0x008b:  mov    0x10(%eax),%eax
0815742f +0x008e:  movzbl 0x29(%eax),%eax
08157433 +0x0092:  jmp    0815743a <+0x99>
08157435 +0x0094:  mov    $0x0,%eax
0815743a +0x0099:  pop    %ebp
0815743b +0x009a:  ret
0815743c +0x009b:  push   %ebp
0815743d +0x009c:  mov    %esp,%ebp
0815743f +0x009e:  sub    $0x18,%esp
08157442 +0x00a1:  mov    0x8(%ebp),%eax
08157445 +0x00a4:  mov    %eax,(%esp)
08157448 +0x00a7:  call   0815762e <+0x28d>
0815744d +0x00ac:  leave
0815744e +0x00ad:  ret
0815744f +0x00ae:  nop
08157450 +0x00af:  push   %ebp
08157451 +0x00b0:  mov    %esp,%ebp
08157453 +0x00b2:  sub    $0x18,%esp
08157456 +0x00b5:  mov    0x8(%ebp),%eax
08157459 +0x00b8:  mov    %eax,(%esp)
0815745c +0x00bb:  call   081576a8 <+0x307>
08157461 +0x00c0:  leave
08157462 +0x00c1:  ret
08157463 +0x00c2:  nop
08157464 +0x00c3:  push   %ebp
08157465 +0x00c4:  mov    %esp,%ebp
08157467 +0x00c6:  push   %ebx
08157468 +0x00c7:  sub    $0x14,%esp
0815746b +0x00ca:  mov    0x8(%ebp),%ebx
0815746e +0x00cd:  mov    0xc(%ebp),%eax
08157471 +0x00d0:  mov    0x10(%ebp),%edx
08157474 +0x00d3:  mov    %edx,0x8(%esp)
08157478 +0x00d7:  mov    %eax,0x4(%esp)
0815747c +0x00db:  mov    %ebx,(%esp)
0815747f +0x00de:  call   08157b02 <+0x761>
08157484 +0x00e3:  sub    $0x4,%esp
08157487 +0x00e6:  mov    %ebx,%eax
08157489 +0x00e8:  mov    -0x4(%ebp),%ebx
0815748c +0x00eb:  leave
0815748d +0x00ec:  ret    $0x4
08157490 +0x00ef:  push   %ebp
08157491 +0x00f0:  mov    %esp,%ebp
08157493 +0x00f2:  push   %ebx
08157494 +0x00f3:  sub    $0x14,%esp
08157497 +0x00f6:  mov    0x8(%ebp),%ebx
0815749a +0x00f9:  mov    0xc(%ebp),%eax
0815749d +0x00fc:  mov    %eax,0x4(%esp)
081574a1 +0x0100:  mov    %ebx,(%esp)
081574a4 +0x0103:  call   08157bc0 <+0x81f>
081574a9 +0x0108:  sub    $0x4,%esp
081574ac +0x010b:  mov    %ebx,%eax
081574ae +0x010d:  mov    -0x4(%ebp),%ebx
081574b1 +0x0110:  leave
081574b2 +0x0111:  ret    $0x4
081574b5 +0x0114:  nop
081574b6 +0x0115:  push   %ebp
081574b7 +0x0116:  mov    %esp,%ebp
081574b9 +0x0118:  mov    0x8(%ebp),%eax
081574bc +0x011b:  mov    (%eax),%edx
081574be +0x011d:  mov    0xc(%ebp),%eax
081574c1 +0x0120:  mov    (%eax),%eax
081574c3 +0x0122:  cmp    %eax,%edx
081574c5 +0x0124:  sete   %al
081574c8 +0x0127:  pop    %ebp
081574c9 +0x0128:  ret
081574ca +0x0129:  push   %ebp
081574cb +0x012a:  mov    %esp,%ebp
081574cd +0x012c:  push   %esi
081574ce +0x012d:  push   %ebx
081574cf +0x012e:  sub    $0x10,%esp
081574d2 +0x0131:  mov    0x8(%ebp),%esi
081574d5 +0x0134:  mov    0x10(%ebp),%eax
081574d8 +0x0137:  mov    %eax,(%esp)
081574db +0x013a:  call   08157be6 <+0x845>
081574e0 +0x013f:  mov    %eax,%ebx
081574e2 +0x0141:  mov    0xc(%ebp),%eax
081574e5 +0x0144:  mov    %eax,(%esp)
081574e8 +0x0147:  call   080e2d79 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0xb1f>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0xb1f
081574ed +0x014c:  mov    %ebx,0x8(%esp)
081574f1 +0x0150:  mov    %eax,0x4(%esp)
081574f5 +0x0154:  mov    %esi,(%esp)
081574f8 +0x0157:  call   08157bee <+0x84d>
081574fd +0x015c:  mov    %esi,%eax
081574ff +0x015e:  add    $0x10,%esp
08157502 +0x0161:  pop    %ebx
08157503 +0x0162:  pop    %esi
08157504 +0x0163:  pop    %ebp
08157505 +0x0164:  ret    $0x4
08157508 +0x0167:  push   %ebp
08157509 +0x0168:  mov    %esp,%ebp
0815750b +0x016a:  sub    $0x18,%esp
0815750e +0x016d:  mov    0xc(%ebp),%eax
08157511 +0x0170:  mov    %eax,(%esp)
08157514 +0x0173:  call   080e2d71 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0xb17>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0xb17
08157519 +0x0178:  mov    (%eax),%edx
0815751b +0x017a:  mov    0x8(%ebp),%eax
0815751e +0x017d:  mov    %edx,(%eax)
08157520 +0x017f:  mov    0xc(%ebp),%eax
08157523 +0x0182:  add    $0x4,%eax
08157526 +0x0185:  mov    %eax,(%esp)
08157529 +0x0188:  call   08157c2d <+0x88c>
0815752e +0x018d:  mov    0x8(%ebp),%edx
08157531 +0x0190:  mov    (%eax),%ecx
08157533 +0x0192:  mov    %ecx,0x4(%edx)
08157536 +0x0195:  mov    0x4(%eax),%ecx
08157539 +0x0198:  mov    %ecx,0x8(%edx)
0815753c +0x019b:  mov    0x8(%eax),%ecx
0815753f +0x019e:  mov    %ecx,0xc(%edx)
08157542 +0x01a1:  mov    0xc(%eax),%eax
08157545 +0x01a4:  mov    %eax,0x10(%edx)
08157548 +0x01a7:  leave
08157549 +0x01a8:  ret
0815754a +0x01a9:  push   %ebp
0815754b +0x01aa:  mov    %esp,%ebp
0815754d +0x01ac:  push   %ebx
0815754e +0x01ad:  sub    $0x14,%esp
08157551 +0x01b0:  mov    0x8(%ebp),%ebx
08157554 +0x01b3:  mov    0xc(%ebp),%eax
08157557 +0x01b6:  mov    0x10(%ebp),%edx
0815755a +0x01b9:  mov    %edx,0x8(%esp)
0815755e +0x01bd:  mov    %eax,0x4(%esp)
08157562 +0x01c1:  mov    %ebx,(%esp)
08157565 +0x01c4:  call   08157c36 <+0x895>
0815756a +0x01c9:  sub    $0x4,%esp
0815756d +0x01cc:  mov    %ebx,%eax
0815756f +0x01ce:  mov    -0x4(%ebp),%ebx
08157572 +0x01d1:  leave
08157573 +0x01d2:  ret    $0x4
08157576 +0x01d5:  push   %ebp
08157577 +0x01d6:  mov    %esp,%ebp
08157579 +0x01d8:  mov    0x8(%ebp),%eax
0815757c +0x01db:  mov    (%eax),%eax
0815757e +0x01dd:  add    $0x10,%eax
08157581 +0x01e0:  pop    %ebp
08157582 +0x01e1:  ret
08157583 +0x01e2:  nop
08157584 +0x01e3:  push   %ebp
08157585 +0x01e4:  mov    %esp,%ebp
08157587 +0x01e6:  push   %ebx
08157588 +0x01e7:  sub    $0x14,%esp
0815758b +0x01ea:  mov    0x8(%ebp),%ebx
0815758e +0x01ed:  mov    0xc(%ebp),%eax
08157591 +0x01f0:  mov    %eax,0x4(%esp)
08157595 +0x01f4:  mov    %ebx,(%esp)
08157598 +0x01f7:  call   08157e06 <+0xa65>
0815759d +0x01fc:  sub    $0x4,%esp
081575a0 +0x01ff:  mov    %ebx,%eax
081575a2 +0x0201:  mov    -0x4(%ebp),%ebx
081575a5 +0x0204:  leave
081575a6 +0x0205:  ret    $0x4
081575a9 +0x0208:  nop
081575aa +0x0209:  push   %ebp
081575ab +0x020a:  mov    %esp,%ebp
081575ad +0x020c:  sub    $0x18,%esp
081575b0 +0x020f:  mov    0x8(%ebp),%eax
081575b3 +0x0212:  mov    %eax,(%esp)
081575b6 +0x0215:  call   08157e2c <+0xa8b>
081575bb +0x021a:  leave
081575bc +0x021b:  ret
081575bd +0x021c:  nop
081575be +0x021d:  push   %ebp
081575bf +0x021e:  mov    %esp,%ebp
081575c1 +0x0220:  mov    0x8(%ebp),%eax
081575c4 +0x0223:  mov    (%eax),%edx
081575c6 +0x0225:  mov    0xc(%ebp),%eax
081575c9 +0x0228:  mov    (%eax),%eax
081575cb +0x022a:  cmp    %eax,%edx
081575cd +0x022c:  setne  %al
081575d0 +0x022f:  pop    %ebp
081575d1 +0x0230:  ret
081575d2 +0x0231:  push   %ebp
081575d3 +0x0232:  mov    %esp,%ebp
081575d5 +0x0234:  sub    $0x18,%esp
081575d8 +0x0237:  mov    0x8(%ebp),%eax
081575db +0x023a:  mov    (%eax),%eax
081575dd +0x023c:  mov    %eax,(%esp)
081575e0 +0x023f:  call   086df800 <_ZSt18_Rb_tree_incrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_increment(std::_Rb_tree_node_base*)
081575e5 +0x0244:  mov    0x8(%ebp),%edx
081575e8 +0x0247:  mov    %eax,(%edx)
081575ea +0x0249:  mov    0x8(%ebp),%eax
081575ed +0x024c:  leave
081575ee +0x024d:  ret
081575ef +0x024e:  nop
081575f0 +0x024f:  push   %ebp
081575f1 +0x0250:  mov    %esp,%ebp
081575f3 +0x0252:  sub    $0x18,%esp
081575f6 +0x0255:  mov    0x8(%ebp),%eax
081575f9 +0x0258:  mov    (%eax),%eax
081575fb +0x025a:  mov    %eax,(%esp)
081575fe +0x025d:  call   08157e38 <+0xa97>
08157603 +0x0262:  leave
08157604 +0x0263:  ret
08157605 +0x0264:  nop
08157606 +0x0265:  push   %ebp
08157607 +0x0266:  mov    %esp,%ebp
08157609 +0x0268:  sub    $0x18,%esp
0815760c +0x026b:  mov    0x8(%ebp),%eax
0815760f +0x026e:  mov    %eax,(%esp)
08157612 +0x0271:  call   08157ea2 <+0xb01>
08157617 +0x0276:  leave
08157618 +0x0277:  ret
08157619 +0x0278:  nop
0815761a +0x0279:  push   %ebp
0815761b +0x027a:  mov    %esp,%ebp
0815761d +0x027c:  sub    $0x18,%esp
08157620 +0x027f:  mov    0x8(%ebp),%eax
08157623 +0x0282:  mov    %eax,(%esp)
08157626 +0x0285:  call   08157eb6 <+0xb15>
0815762b +0x028a:  leave
0815762c +0x028b:  ret
0815762d +0x028c:  nop
0815762e +0x028d:  push   %ebp
0815762f +0x028e:  mov    %esp,%ebp
08157631 +0x0290:  push   %esi
08157632 +0x0291:  push   %ebx
08157633 +0x0292:  sub    $0x10,%esp
08157636 +0x0295:  mov    0x8(%ebp),%eax
08157639 +0x0298:  mov    %eax,(%esp)
0815763c +0x029b:  call   08157f20 <+0xb7f>
08157641 +0x02a0:  mov    %eax,0x4(%esp)
08157645 +0x02a4:  mov    0x8(%ebp),%eax
08157648 +0x02a7:  mov    %eax,(%esp)
0815764b +0x02aa:  call   08157eca <+0xb29>
08157650 +0x02af:  jmp    0815766d <+0x2cc>
08157652 +0x02b1:  mov    %edx,%ebx
08157654 +0x02b3:  mov    %eax,%esi
08157656 +0x02b5:  mov    0x8(%ebp),%eax
08157659 +0x02b8:  mov    %eax,(%esp)
0815765c +0x02bb:  call   0815761a <+0x279>
08157661 +0x02c0:  mov    %esi,%eax
08157663 +0x02c2:  mov    %ebx,%edx
08157665 +0x02c4:  mov    %eax,(%esp)
08157668 +0x02c7:  call   08ae3750 <_Unwind_Resume>
0815766d +0x02cc:  mov    0x8(%ebp),%eax
08157670 +0x02cf:  mov    %eax,(%esp)
08157673 +0x02d2:  call   0815761a <+0x279>
08157678 +0x02d7:  add    $0x10,%esp
0815767b +0x02da:  pop    %ebx
0815767c +0x02db:  pop    %esi
0815767d +0x02dc:  pop    %ebp
0815767e +0x02dd:  ret
0815767f +0x02de:  nop
08157680 +0x02df:  push   %ebp
08157681 +0x02e0:  mov    %esp,%ebp
08157683 +0x02e2:  sub    $0x18,%esp
08157686 +0x02e5:  mov    0x8(%ebp),%eax
08157689 +0x02e8:  mov    %eax,(%esp)
0815768c +0x02eb:  call   08157f2c <+0xb8b>
08157691 +0x02f0:  leave
08157692 +0x02f1:  ret
08157693 +0x02f2:  nop
08157694 +0x02f3:  push   %ebp
08157695 +0x02f4:  mov    %esp,%ebp
08157697 +0x02f6:  sub    $0x18,%esp
0815769a +0x02f9:  mov    0x8(%ebp),%eax
0815769d +0x02fc:  mov    %eax,(%esp)
081576a0 +0x02ff:  call   08157f40 <+0xb9f>
081576a5 +0x0304:  leave
081576a6 +0x0305:  ret
081576a7 +0x0306:  nop
081576a8 +0x0307:  push   %ebp
081576a9 +0x0308:  mov    %esp,%ebp
081576ab +0x030a:  push   %esi
081576ac +0x030b:  push   %ebx
081576ad +0x030c:  sub    $0x10,%esp
081576b0 +0x030f:  mov    0x8(%ebp),%eax
081576b3 +0x0312:  mov    %eax,(%esp)
081576b6 +0x0315:  call   08157faa <+0xc09>
081576bb +0x031a:  mov    %eax,0x4(%esp)
081576bf +0x031e:  mov    0x8(%ebp),%eax
081576c2 +0x0321:  mov    %eax,(%esp)
081576c5 +0x0324:  call   08157f54 <+0xbb3>
081576ca +0x0329:  jmp    081576e7 <+0x346>
081576cc +0x032b:  mov    %edx,%ebx
081576ce +0x032d:  mov    %eax,%esi
081576d0 +0x032f:  mov    0x8(%ebp),%eax
081576d3 +0x0332:  mov    %eax,(%esp)
081576d6 +0x0335:  call   08157694 <+0x2f3>
081576db +0x033a:  mov    %esi,%eax
081576dd +0x033c:  mov    %ebx,%edx
081576df +0x033e:  mov    %eax,(%esp)
081576e2 +0x0341:  call   08ae3750 <_Unwind_Resume>
081576e7 +0x0346:  mov    0x8(%ebp),%eax
081576ea +0x0349:  mov    %eax,(%esp)
081576ed +0x034c:  call   08157694 <+0x2f3>
081576f2 +0x0351:  add    $0x10,%esp
081576f5 +0x0354:  pop    %ebx
081576f6 +0x0355:  pop    %esi
081576f7 +0x0356:  pop    %ebp
081576f8 +0x0357:  ret
081576f9 +0x0358:  nop
081576fa +0x0359:  push   %ebp
081576fb +0x035a:  mov    %esp,%ebp
081576fd +0x035c:  sub    $0x18,%esp
08157700 +0x035f:  mov    0x8(%ebp),%eax
08157703 +0x0362:  mov    %eax,(%esp)
08157706 +0x0365:  call   08157fb6 <+0xc15>
0815770b +0x036a:  leave
0815770c +0x036b:  ret
0815770d +0x036c:  nop
0815770e +0x036d:  push   %ebp
0815770f +0x036e:  mov    %esp,%ebp
08157711 +0x0370:  sub    $0x18,%esp
08157714 +0x0373:  mov    0x8(%ebp),%eax
08157717 +0x0376:  mov    %eax,(%esp)
0815771a +0x0379:  call   0815802c <+0xc8b>
0815771f +0x037e:  leave
08157720 +0x037f:  ret
08157721 +0x0380:  nop
08157722 +0x0381:  push   %ebp
08157723 +0x0382:  mov    %esp,%ebp
08157725 +0x0384:  push   %ebx
08157726 +0x0385:  sub    $0x14,%esp
08157729 +0x0388:  mov    0x8(%ebp),%ebx
0815772c +0x038b:  mov    0xc(%ebp),%eax
0815772f +0x038e:  mov    0x10(%ebp),%edx
08157732 +0x0391:  mov    %edx,0x8(%esp)
08157736 +0x0395:  mov    %eax,0x4(%esp)
0815773a +0x0399:  mov    %ebx,(%esp)
0815773d +0x039c:  call   081580a2 <+0xd01>
08157742 +0x03a1:  sub    $0x4,%esp
08157745 +0x03a4:  mov    %ebx,%eax
08157747 +0x03a6:  mov    -0x4(%ebp),%ebx
0815774a +0x03a9:  leave
0815774b +0x03aa:  ret    $0x4
0815774e +0x03ad:  push   %ebp
0815774f +0x03ae:  mov    %esp,%ebp
08157751 +0x03b0:  push   %ebx
08157752 +0x03b1:  sub    $0x14,%esp
08157755 +0x03b4:  mov    0x8(%ebp),%ebx
08157758 +0x03b7:  mov    0xc(%ebp),%eax
0815775b +0x03ba:  mov    %eax,0x4(%esp)
0815775f +0x03be:  mov    %ebx,(%esp)
08157762 +0x03c1:  call   08158160 <+0xdbf>
08157767 +0x03c6:  sub    $0x4,%esp
0815776a +0x03c9:  mov    %ebx,%eax
0815776c +0x03cb:  mov    -0x4(%ebp),%ebx
0815776f +0x03ce:  leave
08157770 +0x03cf:  ret    $0x4
08157773 +0x03d2:  nop
08157774 +0x03d3:  push   %ebp
08157775 +0x03d4:  mov    %esp,%ebp
08157777 +0x03d6:  mov    0x8(%ebp),%eax
0815777a +0x03d9:  mov    (%eax),%edx
0815777c +0x03db:  mov    0xc(%ebp),%eax
0815777f +0x03de:  mov    (%eax),%eax
08157781 +0x03e0:  cmp    %eax,%edx
08157783 +0x03e2:  sete   %al
08157786 +0x03e5:  pop    %ebp
08157787 +0x03e6:  ret
08157788 +0x03e7:  push   %ebp
08157789 +0x03e8:  mov    %esp,%ebp
0815778b +0x03ea:  push   %ebx
0815778c +0x03eb:  sub    $0x54,%esp
0815778f +0x03ee:  lea    -0x38(%ebp),%eax
08157792 +0x03f1:  mov    0xc(%ebp),%edx
08157795 +0x03f4:  mov    %edx,0x8(%esp)
08157799 +0x03f8:  mov    0x8(%ebp),%edx
0815779c +0x03fb:  mov    %edx,0x4(%esp)
081577a0 +0x03ff:  mov    %eax,(%esp)
081577a3 +0x0402:  call   08158186 <+0xde5>
081577a8 +0x0407:  sub    $0x4,%esp
081577ab +0x040a:  lea    -0x34(%ebp),%eax
081577ae +0x040d:  mov    0x8(%ebp),%edx
081577b1 +0x0410:  mov    %edx,0x4(%esp)
081577b5 +0x0414:  mov    %eax,(%esp)
081577b8 +0x0417:  call   0815774e <+0x3ad>
081577bd +0x041c:  sub    $0x4,%esp
081577c0 +0x041f:  lea    -0x34(%ebp),%eax
081577c3 +0x0422:  mov    %eax,0x4(%esp)
081577c7 +0x0426:  lea    -0x38(%ebp),%eax
081577ca +0x0429:  mov    %eax,(%esp)
081577cd +0x042c:  call   08157774 <+0x3d3>
081577d2 +0x0431:  test   %al,%al
081577d4 +0x0433:  jne    08157812 <+0x471>
081577d6 +0x0435:  lea    -0x38(%ebp),%eax
081577d9 +0x0438:  mov    %eax,(%esp)
081577dc +0x043b:  call   081581d8 <+0xe37>
081577e1 +0x0440:  mov    %eax,%ebx
081577e3 +0x0442:  lea    -0x2d(%ebp),%eax
081577e6 +0x0445:  mov    0x8(%ebp),%edx
081577e9 +0x0448:  mov    %edx,0x4(%esp)
081577ed +0x044c:  mov    %eax,(%esp)
081577f0 +0x044f:  call   081581b2 <+0xe11>
081577f5 +0x0454:  sub    $0x4,%esp
081577f8 +0x0457:  mov    %ebx,0x8(%esp)
081577fc +0x045b:  mov    0xc(%ebp),%eax
081577ff +0x045e:  mov    %eax,0x4(%esp)
08157803 +0x0462:  lea    -0x2d(%ebp),%eax
08157806 +0x0465:  mov    %eax,(%esp)
08157809 +0x0468:  call   080e36fc <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x14a2>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x14a2
0815780e +0x046d:  test   %al,%al
08157810 +0x046f:  je     08157819 <+0x478>
08157812 +0x0471:  mov    $0x1,%eax
08157817 +0x0476:  jmp    0815781e <+0x47d>
08157819 +0x0478:  mov    $0x0,%eax
0815781e +0x047d:  test   %al,%al
08157820 +0x047f:  je     0815786f <+0x4ce>
08157822 +0x0481:  lea    -0x18(%ebp),%eax
08157825 +0x0484:  mov    %eax,(%esp)
08157828 +0x0487:  call   081573be <+0x1d>
0815782d +0x048c:  lea    -0x18(%ebp),%eax
08157830 +0x048f:  mov    %eax,0x8(%esp)
08157834 +0x0493:  mov    0xc(%ebp),%eax
08157837 +0x0496:  mov    %eax,0x4(%esp)
0815783b +0x049a:  lea    -0x2c(%ebp),%eax
0815783e +0x049d:  mov    %eax,(%esp)
08157841 +0x04a0:  call   081581e6 <+0xe45>
08157846 +0x04a5:  lea    -0x3c(%ebp),%eax
08157849 +0x04a8:  lea    -0x2c(%ebp),%edx
0815784c +0x04ab:  mov    %edx,0xc(%esp)
08157850 +0x04af:  mov    -0x38(%ebp),%edx
08157853 +0x04b2:  mov    %edx,0x8(%esp)
08157857 +0x04b6:  mov    0x8(%ebp),%edx
0815785a +0x04b9:  mov    %edx,0x4(%esp)
0815785e +0x04bd:  mov    %eax,(%esp)
08157861 +0x04c0:  call   08158226 <+0xe85>
08157866 +0x04c5:  sub    $0x4,%esp
08157869 +0x04c8:  mov    -0x3c(%ebp),%eax
0815786c +0x04cb:  mov    %eax,-0x38(%ebp)
0815786f +0x04ce:  lea    -0x38(%ebp),%eax
08157872 +0x04d1:  mov    %eax,(%esp)
08157875 +0x04d4:  call   081581d8 <+0xe37>
0815787a +0x04d9:  add    $0x4,%eax
0815787d +0x04dc:  mov    -0x4(%ebp),%ebx
08157880 +0x04df:  leave
08157881 +0x04e0:  ret
08157882 +0x04e1:  push   %ebp
08157883 +0x04e2:  mov    %esp,%ebp
08157885 +0x04e4:  mov    0x8(%ebp),%eax
08157888 +0x04e7:  mov    (%eax),%eax
0815788a +0x04e9:  add    $0x10,%eax
0815788d +0x04ec:  pop    %ebp
0815788e +0x04ed:  ret
0815788f +0x04ee:  nop
08157890 +0x04ef:  push   %ebp
08157891 +0x04f0:  mov    %esp,%ebp
08157893 +0x04f2:  push   %ebx
08157894 +0x04f3:  sub    $0x14,%esp
08157897 +0x04f6:  mov    0x8(%ebp),%ebx
0815789a +0x04f9:  mov    0xc(%ebp),%eax
0815789d +0x04fc:  mov    0x10(%ebp),%edx
081578a0 +0x04ff:  mov    %edx,0x8(%esp)
081578a4 +0x0503:  mov    %eax,0x4(%esp)
081578a8 +0x0507:  mov    %ebx,(%esp)
081578ab +0x050a:  call   0815826c <+0xecb>
081578b0 +0x050f:  sub    $0x4,%esp
081578b3 +0x0512:  mov    %ebx,%eax
081578b5 +0x0514:  mov    -0x4(%ebp),%ebx
081578b8 +0x0517:  leave
081578b9 +0x0518:  ret    $0x4
081578bc +0x051b:  push   %ebp
081578bd +0x051c:  mov    %esp,%ebp
081578bf +0x051e:  push   %ebx
081578c0 +0x051f:  sub    $0x14,%esp
081578c3 +0x0522:  mov    0x8(%ebp),%ebx
081578c6 +0x0525:  mov    0xc(%ebp),%eax
081578c9 +0x0528:  mov    %eax,0x4(%esp)
081578cd +0x052c:  mov    %ebx,(%esp)
081578d0 +0x052f:  call   0815832a <+0xf89>
081578d5 +0x0534:  sub    $0x4,%esp
081578d8 +0x0537:  mov    %ebx,%eax
081578da +0x0539:  mov    -0x4(%ebp),%ebx
081578dd +0x053c:  leave
081578de +0x053d:  ret    $0x4
081578e1 +0x0540:  nop
081578e2 +0x0541:  push   %ebp
081578e3 +0x0542:  mov    %esp,%ebp
081578e5 +0x0544:  mov    0x8(%ebp),%eax
081578e8 +0x0547:  mov    (%eax),%edx
081578ea +0x0549:  mov    0xc(%ebp),%eax
081578ed +0x054c:  mov    (%eax),%eax
081578ef +0x054e:  cmp    %eax,%edx
081578f1 +0x0550:  sete   %al
081578f4 +0x0553:  pop    %ebp
081578f5 +0x0554:  ret
081578f6 +0x0555:  push   %ebp
081578f7 +0x0556:  mov    %esp,%ebp
081578f9 +0x0558:  push   %ebx
081578fa +0x0559:  sub    $0x64,%esp
081578fd +0x055c:  lea    -0x3c(%ebp),%eax
08157900 +0x055f:  mov    0xc(%ebp),%edx
08157903 +0x0562:  mov    %edx,0x8(%esp)
08157907 +0x0566:  mov    0x8(%ebp),%edx
0815790a +0x0569:  mov    %edx,0x4(%esp)
0815790e +0x056d:  mov    %eax,(%esp)
08157911 +0x0570:  call   08158350 <+0xfaf>
08157916 +0x0575:  sub    $0x4,%esp
08157919 +0x0578:  lea    -0x38(%ebp),%eax
0815791c +0x057b:  mov    0x8(%ebp),%edx
0815791f +0x057e:  mov    %edx,0x4(%esp)
08157923 +0x0582:  mov    %eax,(%esp)
08157926 +0x0585:  call   081578bc <+0x51b>
0815792b +0x058a:  sub    $0x4,%esp
0815792e +0x058d:  lea    -0x38(%ebp),%eax
08157931 +0x0590:  mov    %eax,0x4(%esp)
08157935 +0x0594:  lea    -0x3c(%ebp),%eax
08157938 +0x0597:  mov    %eax,(%esp)
0815793b +0x059a:  call   081578e2 <+0x541>
08157940 +0x059f:  test   %al,%al
08157942 +0x05a1:  jne    08157980 <+0x5df>
08157944 +0x05a3:  lea    -0x3c(%ebp),%eax
08157947 +0x05a6:  mov    %eax,(%esp)
0815794a +0x05a9:  call   081583a2 <+0x1001>
0815794f +0x05ae:  mov    %eax,%ebx
08157951 +0x05b0:  lea    -0x31(%ebp),%eax
08157954 +0x05b3:  mov    0x8(%ebp),%edx
08157957 +0x05b6:  mov    %edx,0x4(%esp)
0815795b +0x05ba:  mov    %eax,(%esp)
0815795e +0x05bd:  call   0815837c <+0xfdb>
08157963 +0x05c2:  sub    $0x4,%esp
08157966 +0x05c5:  mov    %ebx,0x8(%esp)
0815796a +0x05c9:  mov    0xc(%ebp),%eax
0815796d +0x05cc:  mov    %eax,0x4(%esp)
08157971 +0x05d0:  lea    -0x31(%ebp),%eax
08157974 +0x05d3:  mov    %eax,(%esp)
08157977 +0x05d6:  call   081583b0 <+0x100f>
0815797c +0x05db:  test   %al,%al
0815797e +0x05dd:  je     08157987 <+0x5e6>
08157980 +0x05df:  mov    $0x1,%eax
08157985 +0x05e4:  jmp    0815798c <+0x5eb>
08157987 +0x05e6:  mov    $0x0,%eax
0815798c +0x05eb:  test   %al,%al
0815798e +0x05ed:  je     081579dd <+0x63c>
08157990 +0x05ef:  lea    -0x18(%ebp),%eax
08157993 +0x05f2:  mov    %eax,(%esp)
08157996 +0x05f5:  call   081573ea <+0x49>
0815799b +0x05fa:  lea    -0x18(%ebp),%eax
0815799e +0x05fd:  mov    %eax,0x8(%esp)
081579a2 +0x0601:  mov    0xc(%ebp),%eax
081579a5 +0x0604:  mov    %eax,0x4(%esp)
081579a9 +0x0608:  lea    -0x30(%ebp),%eax
081579ac +0x060b:  mov    %eax,(%esp)
081579af +0x060e:  call   081583e2 <+0x1041>
081579b4 +0x0613:  lea    -0x4c(%ebp),%eax
081579b7 +0x0616:  lea    -0x30(%ebp),%edx
081579ba +0x0619:  mov    %edx,0xc(%esp)
081579be +0x061d:  mov    -0x3c(%ebp),%edx
081579c1 +0x0620:  mov    %edx,0x8(%esp)
081579c5 +0x0624:  mov    0x8(%ebp),%edx
081579c8 +0x0627:  mov    %edx,0x4(%esp)
081579cc +0x062b:  mov    %eax,(%esp)
081579cf +0x062e:  call   0815842a <+0x1089>
081579d4 +0x0633:  sub    $0x4,%esp
081579d7 +0x0636:  mov    -0x4c(%ebp),%eax
081579da +0x0639:  mov    %eax,-0x3c(%ebp)
081579dd +0x063c:  lea    -0x3c(%ebp),%eax
081579e0 +0x063f:  mov    %eax,(%esp)
081579e3 +0x0642:  call   081583a2 <+0x1001>
081579e8 +0x0647:  add    $0x8,%eax
081579eb +0x064a:  mov    -0x4(%ebp),%ebx
081579ee +0x064d:  leave
081579ef +0x064e:  ret
081579f0 +0x064f:  push   %ebp
081579f1 +0x0650:  mov    %esp,%ebp
081579f3 +0x0652:  mov    0x8(%ebp),%eax
081579f6 +0x0655:  mov    (%eax),%eax
081579f8 +0x0657:  add    $0x10,%eax
081579fb +0x065a:  pop    %ebp
081579fc +0x065b:  ret
081579fd +0x065c:  nop
081579fe +0x065d:  push   %ebp
081579ff +0x065e:  mov    %esp,%ebp
08157a01 +0x0660:  sub    $0x18,%esp
08157a04 +0x0663:  mov    0x8(%ebp),%eax
08157a07 +0x0666:  mov    %eax,(%esp)
08157a0a +0x0669:  call   08158470 <+0x10cf>
08157a0f +0x066e:  leave
08157a10 +0x066f:  ret
08157a11 +0x0670:  nop
08157a12 +0x0671:  push   %ebp
08157a13 +0x0672:  mov    %esp,%ebp
08157a15 +0x0674:  push   %ebx
08157a16 +0x0675:  sub    $0x14,%esp
08157a19 +0x0678:  mov    0x8(%ebp),%ebx
08157a1c +0x067b:  mov    0xc(%ebp),%eax
08157a1f +0x067e:  mov    %eax,0x4(%esp)
08157a23 +0x0682:  mov    %ebx,(%esp)
08157a26 +0x0685:  call   0815847c <+0x10db>
08157a2b +0x068a:  sub    $0x4,%esp
08157a2e +0x068d:  mov    %ebx,%eax
08157a30 +0x068f:  mov    -0x4(%ebp),%ebx
08157a33 +0x0692:  leave
08157a34 +0x0693:  ret    $0x4
08157a37 +0x0696:  nop
08157a38 +0x0697:  push   %ebp
08157a39 +0x0698:  mov    %esp,%ebp
08157a3b +0x069a:  mov    0x8(%ebp),%eax
08157a3e +0x069d:  mov    (%eax),%edx
08157a40 +0x069f:  mov    0xc(%ebp),%eax
08157a43 +0x06a2:  mov    (%eax),%eax
08157a45 +0x06a4:  cmp    %eax,%edx
08157a47 +0x06a6:  setne  %al
08157a4a +0x06a9:  pop    %ebp
08157a4b +0x06aa:  ret
08157a4c +0x06ab:  push   %ebp
08157a4d +0x06ac:  mov    %esp,%ebp
08157a4f +0x06ae:  sub    $0x18,%esp
08157a52 +0x06b1:  mov    0x8(%ebp),%eax
08157a55 +0x06b4:  mov    (%eax),%eax
08157a57 +0x06b6:  mov    %eax,(%esp)
08157a5a +0x06b9:  call   086df800 <_ZSt18_Rb_tree_incrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_increment(std::_Rb_tree_node_base*)
08157a5f +0x06be:  mov    0x8(%ebp),%edx
08157a62 +0x06c1:  mov    %eax,(%edx)
08157a64 +0x06c3:  mov    0x8(%ebp),%eax
08157a67 +0x06c6:  leave
08157a68 +0x06c7:  ret
08157a69 +0x06c8:  nop
08157a6a +0x06c9:  push   %ebp
08157a6b +0x06ca:  mov    %esp,%ebp
08157a6d +0x06cc:  sub    $0x18,%esp
08157a70 +0x06cf:  mov    0x8(%ebp),%eax
08157a73 +0x06d2:  mov    (%eax),%eax
08157a75 +0x06d4:  mov    %eax,(%esp)
08157a78 +0x06d7:  call   081584a2 <+0x1101>
08157a7d +0x06dc:  leave
08157a7e +0x06dd:  ret
08157a7f +0x06de:  nop
08157a80 +0x06df:  push   %ebp
08157a81 +0x06e0:  mov    %esp,%ebp
08157a83 +0x06e2:  sub    $0x18,%esp
08157a86 +0x06e5:  mov    0x8(%ebp),%eax
08157a89 +0x06e8:  mov    %eax,(%esp)
08157a8c +0x06eb:  call   0815850c <+0x116b>
08157a91 +0x06f0:  leave
08157a92 +0x06f1:  ret
08157a93 +0x06f2:  nop
08157a94 +0x06f3:  push   %ebp
08157a95 +0x06f4:  mov    %esp,%ebp
08157a97 +0x06f6:  push   %ebx
08157a98 +0x06f7:  sub    $0x14,%esp
08157a9b +0x06fa:  mov    0x8(%ebp),%ebx
08157a9e +0x06fd:  mov    0xc(%ebp),%eax
08157aa1 +0x0700:  mov    %eax,0x4(%esp)
08157aa5 +0x0704:  mov    %ebx,(%esp)
08157aa8 +0x0707:  call   08158518 <+0x1177>
08157aad +0x070c:  sub    $0x4,%esp
08157ab0 +0x070f:  mov    %ebx,%eax
08157ab2 +0x0711:  mov    -0x4(%ebp),%ebx
08157ab5 +0x0714:  leave
08157ab6 +0x0715:  ret    $0x4
08157ab9 +0x0718:  nop
08157aba +0x0719:  push   %ebp
08157abb +0x071a:  mov    %esp,%ebp
08157abd +0x071c:  mov    0x8(%ebp),%eax
08157ac0 +0x071f:  mov    (%eax),%edx
08157ac2 +0x0721:  mov    0xc(%ebp),%eax
08157ac5 +0x0724:  mov    (%eax),%eax
08157ac7 +0x0726:  cmp    %eax,%edx
08157ac9 +0x0728:  setne  %al
08157acc +0x072b:  pop    %ebp
08157acd +0x072c:  ret
08157ace +0x072d:  push   %ebp
08157acf +0x072e:  mov    %esp,%ebp
08157ad1 +0x0730:  sub    $0x18,%esp
08157ad4 +0x0733:  mov    0x8(%ebp),%eax
08157ad7 +0x0736:  mov    (%eax),%eax
08157ad9 +0x0738:  mov    %eax,(%esp)
08157adc +0x073b:  call   086df800 <_ZSt18_Rb_tree_incrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_increment(std::_Rb_tree_node_base*)
08157ae1 +0x0740:  mov    0x8(%ebp),%edx
08157ae4 +0x0743:  mov    %eax,(%edx)
08157ae6 +0x0745:  mov    0x8(%ebp),%eax
08157ae9 +0x0748:  leave
08157aea +0x0749:  ret
08157aeb +0x074a:  nop
08157aec +0x074b:  push   %ebp
08157aed +0x074c:  mov    %esp,%ebp
08157aef +0x074e:  sub    $0x18,%esp
08157af2 +0x0751:  mov    0x8(%ebp),%eax
08157af5 +0x0754:  mov    (%eax),%eax
08157af7 +0x0756:  mov    %eax,(%esp)
08157afa +0x0759:  call   0815853e <+0x119d>
08157aff +0x075e:  leave
08157b00 +0x075f:  ret
08157b01 +0x0760:  nop
08157b02 +0x0761:  push   %ebp
08157b03 +0x0762:  mov    %esp,%ebp
08157b05 +0x0764:  push   %esi
08157b06 +0x0765:  push   %ebx
08157b07 +0x0766:  sub    $0x30,%esp
08157b0a +0x0769:  mov    0x8(%ebp),%ebx
08157b0d +0x076c:  mov    0xc(%ebp),%eax
08157b10 +0x076f:  mov    %eax,(%esp)
08157b13 +0x0772:  call   08145d26 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x7a9>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x7a9
08157b18 +0x0777:  mov    %eax,%esi
08157b1a +0x0779:  mov    0xc(%ebp),%eax
08157b1d +0x077c:  mov    %eax,(%esp)
08157b20 +0x077f:  call   08145b30 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x5b3>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x5b3
08157b25 +0x0784:  lea    -0x10(%ebp),%edx
08157b28 +0x0787:  mov    0x10(%ebp),%ecx
08157b2b +0x078a:  mov    %ecx,0x10(%esp)
08157b2f +0x078e:  mov    %esi,0xc(%esp)
08157b33 +0x0792:  mov    %eax,0x8(%esp)
08157b37 +0x0796:  mov    0xc(%ebp),%eax
08157b3a +0x0799:  mov    %eax,0x4(%esp)
08157b3e +0x079d:  mov    %edx,(%esp)
08157b41 +0x07a0:  call   081585a8 <+0x1207>
08157b46 +0x07a5:  sub    $0x4,%esp
08157b49 +0x07a8:  lea    -0xc(%ebp),%eax
08157b4c +0x07ab:  mov    0xc(%ebp),%edx
08157b4f +0x07ae:  mov    %edx,0x4(%esp)
08157b53 +0x07b2:  mov    %eax,(%esp)
08157b56 +0x07b5:  call   08157bc0 <+0x81f>
08157b5b +0x07ba:  sub    $0x4,%esp
08157b5e +0x07bd:  lea    -0xc(%ebp),%eax
08157b61 +0x07c0:  mov    %eax,0x4(%esp)
08157b65 +0x07c4:  lea    -0x10(%ebp),%eax
08157b68 +0x07c7:  mov    %eax,(%esp)
08157b6b +0x07ca:  call   081574b6 <+0x115>
08157b70 +0x07cf:  test   %al,%al
08157b72 +0x07d1:  jne    08157b99 <+0x7f8>
08157b74 +0x07d3:  mov    -0x10(%ebp),%eax
08157b77 +0x07d6:  mov    %eax,(%esp)
08157b7a +0x07d9:  call   08158624 <+0x1283>
08157b7f +0x07de:  mov    0xc(%ebp),%edx
08157b82 +0x07e1:  mov    %eax,0x8(%esp)
08157b86 +0x07e5:  mov    0x10(%ebp),%eax
08157b89 +0x07e8:  mov    %eax,0x4(%esp)
08157b8d +0x07ec:  mov    %edx,(%esp)
08157b90 +0x07ef:  call   080e36fc <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x14a2>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x14a2
08157b95 +0x07f4:  test   %al,%al
08157b97 +0x07f6:  je     08157bad <+0x80c>
08157b99 +0x07f8:  mov    0xc(%ebp),%eax
08157b9c +0x07fb:  mov    %eax,0x4(%esp)
08157ba0 +0x07ff:  mov    %ebx,(%esp)
08157ba3 +0x0802:  call   08157bc0 <+0x81f>
08157ba8 +0x0807:  sub    $0x4,%esp
08157bab +0x080a:  jmp    08157bb2 <+0x811>
08157bad +0x080c:  mov    -0x10(%ebp),%eax
08157bb0 +0x080f:  mov    %eax,(%ebx)
08157bb2 +0x0811:  mov    %ebx,%eax
08157bb4 +0x0813:  lea    -0x8(%ebp),%esp
08157bb7 +0x0816:  add    $0x0,%esp
08157bba +0x0819:  pop    %ebx
08157bbb +0x081a:  pop    %esi
08157bbc +0x081b:  pop    %ebp
08157bbd +0x081c:  ret    $0x4
08157bc0 +0x081f:  push   %ebp
08157bc1 +0x0820:  mov    %esp,%ebp
08157bc3 +0x0822:  push   %ebx
08157bc4 +0x0823:  sub    $0x14,%esp
08157bc7 +0x0826:  mov    0x8(%ebp),%ebx
08157bca +0x0829:  mov    0xc(%ebp),%eax
08157bcd +0x082c:  add    $0x4,%eax
08157bd0 +0x082f:  mov    %eax,0x4(%esp)
08157bd4 +0x0833:  mov    %ebx,(%esp)
08157bd7 +0x0836:  call   08158646 <+0x12a5>
08157bdc +0x083b:  mov    %ebx,%eax
08157bde +0x083d:  add    $0x14,%esp
08157be1 +0x0840:  pop    %ebx
08157be2 +0x0841:  pop    %ebp
08157be3 +0x0842:  ret    $0x4
08157be6 +0x0845:  push   %ebp
08157be7 +0x0846:  mov    %esp,%ebp
08157be9 +0x0848:  mov    0x8(%ebp),%eax
08157bec +0x084b:  pop    %ebp
08157bed +0x084c:  ret
08157bee +0x084d:  push   %ebp
08157bef +0x084e:  mov    %esp,%ebp
08157bf1 +0x0850:  sub    $0x18,%esp
08157bf4 +0x0853:  mov    0xc(%ebp),%eax
08157bf7 +0x0856:  mov    %eax,(%esp)
08157bfa +0x0859:  call   080e2d79 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0xb1f>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0xb1f
08157bff +0x085e:  mov    (%eax),%edx
08157c01 +0x0860:  mov    0x8(%ebp),%eax
08157c04 +0x0863:  mov    %edx,(%eax)
08157c06 +0x0865:  mov    0x10(%ebp),%eax
08157c09 +0x0868:  mov    %eax,(%esp)
08157c0c +0x086b:  call   08157be6 <+0x845>
08157c11 +0x0870:  mov    0x8(%ebp),%edx
08157c14 +0x0873:  mov    (%eax),%ecx
08157c16 +0x0875:  mov    %ecx,0x4(%edx)
08157c19 +0x0878:  mov    0x4(%eax),%ecx
08157c1c +0x087b:  mov    %ecx,0x8(%edx)
08157c1f +0x087e:  mov    0x8(%eax),%ecx
08157c22 +0x0881:  mov    %ecx,0xc(%edx)
08157c25 +0x0884:  mov    0xc(%eax),%eax
08157c28 +0x0887:  mov    %eax,0x10(%edx)
08157c2b +0x088a:  leave
08157c2c +0x088b:  ret
08157c2d +0x088c:  push   %ebp
08157c2e +0x088d:  mov    %esp,%ebp
08157c30 +0x088f:  mov    0x8(%ebp),%eax
08157c33 +0x0892:  pop    %ebp
08157c34 +0x0893:  ret
08157c35 +0x0894:  nop
08157c36 +0x0895:  push   %ebp
08157c37 +0x0896:  mov    %esp,%ebp
08157c39 +0x0898:  push   %esi
08157c3a +0x0899:  push   %ebx
08157c3b +0x089a:  sub    $0x50,%esp
08157c3e +0x089d:  mov    0x8(%ebp),%ebx
08157c41 +0x08a0:  mov    0xc(%ebp),%eax
08157c44 +0x08a3:  mov    %eax,(%esp)
08157c47 +0x08a6:  call   08145b30 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x5b3>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x5b3
08157c4c +0x08ab:  mov    %eax,-0x14(%ebp)
08157c4f +0x08ae:  mov    0xc(%ebp),%eax
08157c52 +0x08b1:  mov    %eax,(%esp)
08157c55 +0x08b4:  call   08145d26 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x7a9>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x7a9
08157c5a +0x08b9:  mov    %eax,-0x10(%ebp)
08157c5d +0x08bc:  movb   $0x1,-0x9(%ebp)
08157c61 +0x08c0:  jmp    08157cbf <+0x91e>
08157c63 +0x08c2:  mov    -0x14(%ebp),%eax
08157c66 +0x08c5:  mov    %eax,-0x10(%ebp)
08157c69 +0x08c8:  mov    -0x14(%ebp),%eax
08157c6c +0x08cb:  mov    %eax,(%esp)
08157c6f +0x08ce:  call   0815865c <+0x12bb>
08157c74 +0x08d3:  mov    %eax,%esi
08157c76 +0x08d5:  mov    0x10(%ebp),%eax
08157c79 +0x08d8:  mov    %eax,0x4(%esp)
08157c7d +0x08dc:  lea    -0x2d(%ebp),%eax
08157c80 +0x08df:  mov    %eax,(%esp)
08157c83 +0x08e2:  call   08158654 <+0x12b3>
08157c88 +0x08e7:  mov    0xc(%ebp),%edx
08157c8b +0x08ea:  mov    %esi,0x8(%esp)
08157c8f +0x08ee:  mov    %eax,0x4(%esp)
08157c93 +0x08f2:  mov    %edx,(%esp)
08157c96 +0x08f5:  call   080e36fc <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x14a2>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x14a2
08157c9b +0x08fa:  mov    %al,-0x9(%ebp)
08157c9e +0x08fd:  cmpb   $0x0,-0x9(%ebp)
08157ca2 +0x0901:  je     08157cb1 <+0x910>
08157ca4 +0x0903:  mov    -0x14(%ebp),%eax
08157ca7 +0x0906:  mov    %eax,(%esp)
08157caa +0x0909:  call   08145ce6 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x769>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x769
08157caf +0x090e:  jmp    08157cbc <+0x91b>
08157cb1 +0x0910:  mov    -0x14(%ebp),%eax
08157cb4 +0x0913:  mov    %eax,(%esp)
08157cb7 +0x0916:  call   08145cdb <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x75e>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x75e
08157cbc +0x091b:  mov    %eax,-0x14(%ebp)
08157cbf +0x091e:  cmpl   $0x0,-0x14(%ebp)
08157cc3 +0x0922:  setne  %al
08157cc6 +0x0925:  test   %al,%al
08157cc8 +0x0927:  jne    08157c63 <+0x8c2>
08157cca +0x0929:  mov    -0x10(%ebp),%eax
08157ccd +0x092c:  mov    %eax,0x4(%esp)
08157cd1 +0x0930:  lea    -0x34(%ebp),%eax
08157cd4 +0x0933:  mov    %eax,(%esp)
08157cd7 +0x0936:  call   08158646 <+0x12a5>
08157cdc +0x093b:  cmpb   $0x0,-0x9(%ebp)
08157ce0 +0x093f:  je     08157d61 <+0x9c0>
08157ce2 +0x0941:  lea    -0x2c(%ebp),%eax
08157ce5 +0x0944:  mov    0xc(%ebp),%edx
08157ce8 +0x0947:  mov    %edx,0x4(%esp)
08157cec +0x094b:  mov    %eax,(%esp)
08157cef +0x094e:  call   08157e06 <+0xa65>
08157cf4 +0x0953:  sub    $0x4,%esp
08157cf7 +0x0956:  lea    -0x2c(%ebp),%eax
08157cfa +0x0959:  mov    %eax,0x4(%esp)
08157cfe +0x095d:  lea    -0x34(%ebp),%eax
08157d01 +0x0960:  mov    %eax,(%esp)
08157d04 +0x0963:  call   081574b6 <+0x115>
08157d09 +0x0968:  test   %al,%al
08157d0b +0x096a:  je     08157d56 <+0x9b5>
08157d0d +0x096c:  movb   $0x1,-0x25(%ebp)
08157d11 +0x0970:  mov    -0x10(%ebp),%ecx
08157d14 +0x0973:  mov    -0x14(%ebp),%edx
08157d17 +0x0976:  lea    -0x24(%ebp),%eax
08157d1a +0x0979:  mov    0x10(%ebp),%esi
08157d1d +0x097c:  mov    %esi,0x10(%esp)
08157d21 +0x0980:  mov    %ecx,0xc(%esp)
08157d25 +0x0984:  mov    %edx,0x8(%esp)
08157d29 +0x0988:  mov    0xc(%ebp),%edx
08157d2c +0x098b:  mov    %edx,0x4(%esp)
08157d30 +0x098f:  mov    %eax,(%esp)
08157d33 +0x0992:  call   0815867e <+0x12dd>
08157d38 +0x0997:  sub    $0x4,%esp
08157d3b +0x099a:  lea    -0x25(%ebp),%eax
08157d3e +0x099d:  mov    %eax,0x8(%esp)
08157d42 +0x09a1:  lea    -0x24(%ebp),%eax
08157d45 +0x09a4:  mov    %eax,0x4(%esp)
08157d49 +0x09a8:  mov    %ebx,(%esp)
08157d4c +0x09ab:  call   08158746 <+0x13a5>
08157d51 +0x09b0:  jmp    08157df7 <+0xa56>
08157d56 +0x09b5:  lea    -0x34(%ebp),%eax
08157d59 +0x09b8:  mov    %eax,(%esp)
08157d5c +0x09bb:  call   08158774 <+0x13d3>
08157d61 +0x09c0:  mov    0x10(%ebp),%eax
08157d64 +0x09c3:  mov    %eax,0x4(%esp)
08157d68 +0x09c7:  lea    -0x1e(%ebp),%eax
08157d6b +0x09ca:  mov    %eax,(%esp)
08157d6e +0x09cd:  call   08158654 <+0x12b3>
08157d73 +0x09d2:  mov    %eax,%esi
08157d75 +0x09d4:  mov    -0x34(%ebp),%eax
08157d78 +0x09d7:  mov    %eax,(%esp)
08157d7b +0x09da:  call   08158624 <+0x1283>
08157d80 +0x09df:  mov    0xc(%ebp),%edx
08157d83 +0x09e2:  mov    %esi,0x8(%esp)
08157d87 +0x09e6:  mov    %eax,0x4(%esp)
08157d8b +0x09ea:  mov    %edx,(%esp)
08157d8e +0x09ed:  call   080e36fc <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x14a2>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x14a2
08157d93 +0x09f2:  test   %al,%al
08157d95 +0x09f4:  je     08157ddd <+0xa3c>
08157d97 +0x09f6:  movb   $0x1,-0x1d(%ebp)
08157d9b +0x09fa:  mov    -0x10(%ebp),%ecx
08157d9e +0x09fd:  mov    -0x14(%ebp),%edx
08157da1 +0x0a00:  lea    -0x1c(%ebp),%eax
08157da4 +0x0a03:  mov    0x10(%ebp),%esi
08157da7 +0x0a06:  mov    %esi,0x10(%esp)
08157dab +0x0a0a:  mov    %ecx,0xc(%esp)
08157daf +0x0a0e:  mov    %edx,0x8(%esp)
08157db3 +0x0a12:  mov    0xc(%ebp),%edx
08157db6 +0x0a15:  mov    %edx,0x4(%esp)
08157dba +0x0a19:  mov    %eax,(%esp)
08157dbd +0x0a1c:  call   0815867e <+0x12dd>
08157dc2 +0x0a21:  sub    $0x4,%esp
08157dc5 +0x0a24:  lea    -0x1d(%ebp),%eax
08157dc8 +0x0a27:  mov    %eax,0x8(%esp)
08157dcc +0x0a2b:  lea    -0x1c(%ebp),%eax
08157dcf +0x0a2e:  mov    %eax,0x4(%esp)
08157dd3 +0x0a32:  mov    %ebx,(%esp)
08157dd6 +0x0a35:  call   08158746 <+0x13a5>
08157ddb +0x0a3a:  jmp    08157df7 <+0xa56>
08157ddd +0x0a3c:  movb   $0x0,-0x15(%ebp)
08157de1 +0x0a40:  lea    -0x15(%ebp),%eax
08157de4 +0x0a43:  mov    %eax,0x8(%esp)
08157de8 +0x0a47:  lea    -0x34(%ebp),%eax
08157deb +0x0a4a:  mov    %eax,0x4(%esp)
08157def +0x0a4e:  mov    %ebx,(%esp)
08157df2 +0x0a51:  call   08158792 <+0x13f1>
08157df7 +0x0a56:  mov    %ebx,%eax
08157df9 +0x0a58:  lea    -0x8(%ebp),%esp
08157dfc +0x0a5b:  add    $0x0,%esp
08157dff +0x0a5e:  pop    %ebx
08157e00 +0x0a5f:  pop    %esi
08157e01 +0x0a60:  pop    %ebp
08157e02 +0x0a61:  ret    $0x4
08157e05 +0x0a64:  nop
08157e06 +0x0a65:  push   %ebp
08157e07 +0x0a66:  mov    %esp,%ebp
08157e09 +0x0a68:  push   %ebx
08157e0a +0x0a69:  sub    $0x14,%esp
08157e0d +0x0a6c:  mov    0x8(%ebp),%ebx
08157e10 +0x0a6f:  mov    0xc(%ebp),%eax
08157e13 +0x0a72:  mov    0xc(%eax),%eax
08157e16 +0x0a75:  mov    %eax,0x4(%esp)
08157e1a +0x0a79:  mov    %ebx,(%esp)
08157e1d +0x0a7c:  call   08158646 <+0x12a5>
08157e22 +0x0a81:  mov    %ebx,%eax
08157e24 +0x0a83:  add    $0x14,%esp
08157e27 +0x0a86:  pop    %ebx
08157e28 +0x0a87:  pop    %ebp
08157e29 +0x0a88:  ret    $0x4
08157e2c +0x0a8b:  push   %ebp
08157e2d +0x0a8c:  mov    %esp,%ebp
08157e2f +0x0a8e:  mov    0x8(%ebp),%eax
08157e32 +0x0a91:  mov    0x14(%eax),%eax
08157e35 +0x0a94:  pop    %ebp
08157e36 +0x0a95:  ret
08157e37 +0x0a96:  nop
08157e38 +0x0a97:  push   %ebp
08157e39 +0x0a98:  mov    %esp,%ebp
08157e3b +0x0a9a:  sub    $0x28,%esp
08157e3e +0x0a9d:  jmp    08157e5c <+0xabb>
08157e40 +0x0a9f:  mov    0x8(%ebp),%eax
08157e43 +0x0aa2:  mov    %eax,(%esp)
08157e46 +0x0aa5:  call   0861bdc8 <_ZN6Stream4sizeEv>  ; Stream::size()
08157e4b +0x0aaa:  add    %eax,%eax
08157e4d +0x0aac:  mov    %eax,0x4(%esp)
08157e51 +0x0ab0:  mov    0x8(%ebp),%eax
08157e54 +0x0ab3:  mov    %eax,(%esp)
08157e57 +0x0ab6:  call   0861bee8 <_ZN6Stream6resizeEi>  ; Stream::resize(int)
08157e5c +0x0abb:  movl   $0x10,0x4(%esp)
08157e64 +0x0ac3:  mov    0x8(%ebp),%eax
08157e67 +0x0ac6:  mov    %eax,(%esp)
08157e6a +0x0ac9:  call   0861bf9e <_ZN6Stream9enable_inEi>  ; Stream::enable_in(int)
08157e6f +0x0ace:  xor    $0x1,%eax
08157e72 +0x0ad1:  test   %al,%al
08157e74 +0x0ad3:  jne    08157e40 <+0xa9f>
08157e76 +0x0ad5:  mov    0x8(%ebp),%eax
08157e79 +0x0ad8:  mov    0x8(%eax),%eax
08157e7c +0x0adb:  mov    %eax,%edx
08157e7e +0x0add:  mov    0x8(%ebp),%eax
08157e81 +0x0ae0:  mov    0xc(%eax),%eax
08157e84 +0x0ae3:  lea    (%edx,%eax,1),%eax
08157e87 +0x0ae6:  mov    %eax,-0xc(%ebp)
08157e8a +0x0ae9:  movl   $0x10,0x4(%esp)
08157e92 +0x0af1:  mov    0x8(%ebp),%eax
08157e95 +0x0af4:  mov    %eax,(%esp)
08157e98 +0x0af7:  call   0861be0c <_ZN6Stream6in_ptrEi>  ; Stream::in_ptr(int)
08157e9d +0x0afc:  mov    -0xc(%ebp),%eax
08157ea0 +0x0aff:  leave
08157ea1 +0x0b00:  ret
08157ea2 +0x0b01:  push   %ebp
08157ea3 +0x0b02:  mov    %esp,%ebp
08157ea5 +0x0b04:  sub    $0x18,%esp
08157ea8 +0x0b07:  mov    0x8(%ebp),%eax
08157eab +0x0b0a:  mov    %eax,(%esp)
08157eae +0x0b0d:  call   081587c0 <+0x141f>
08157eb3 +0x0b12:  leave
08157eb4 +0x0b13:  ret
08157eb5 +0x0b14:  nop
08157eb6 +0x0b15:  push   %ebp
08157eb7 +0x0b16:  mov    %esp,%ebp
08157eb9 +0x0b18:  sub    $0x18,%esp
08157ebc +0x0b1b:  mov    0x8(%ebp),%eax
08157ebf +0x0b1e:  mov    %eax,(%esp)
08157ec2 +0x0b21:  call   08158810 <+0x146f>
08157ec7 +0x0b26:  leave
08157ec8 +0x0b27:  ret
08157ec9 +0x0b28:  nop
08157eca +0x0b29:  push   %ebp
08157ecb +0x0b2a:  mov    %esp,%ebp
08157ecd +0x0b2c:  sub    $0x28,%esp
08157ed0 +0x0b2f:  jmp    08157f12 <+0xb71>
08157ed2 +0x0b31:  mov    0xc(%ebp),%eax
08157ed5 +0x0b34:  mov    %eax,(%esp)
08157ed8 +0x0b37:  call   08158815 <+0x1474>
08157edd +0x0b3c:  mov    %eax,0x4(%esp)
08157ee1 +0x0b40:  mov    0x8(%ebp),%eax
08157ee4 +0x0b43:  mov    %eax,(%esp)
08157ee7 +0x0b46:  call   08157eca <+0xb29>
08157eec +0x0b4b:  mov    0xc(%ebp),%eax
08157eef +0x0b4e:  mov    %eax,(%esp)
08157ef2 +0x0b51:  call   08158820 <+0x147f>
08157ef7 +0x0b56:  mov    %eax,-0xc(%ebp)
08157efa +0x0b59:  mov    0xc(%ebp),%eax
08157efd +0x0b5c:  mov    %eax,0x4(%esp)
08157f01 +0x0b60:  mov    0x8(%ebp),%eax
08157f04 +0x0b63:  mov    %eax,(%esp)
08157f07 +0x0b66:  call   0815882c <+0x148b>
08157f0c +0x0b6b:  mov    -0xc(%ebp),%eax
08157f0f +0x0b6e:  mov    %eax,0xc(%ebp)
08157f12 +0x0b71:  cmpl   $0x0,0xc(%ebp)
08157f16 +0x0b75:  setne  %al
08157f19 +0x0b78:  test   %al,%al
08157f1b +0x0b7a:  jne    08157ed2 <+0xb31>
08157f1d +0x0b7c:  leave
08157f1e +0x0b7d:  ret
08157f1f +0x0b7e:  nop
08157f20 +0x0b7f:  push   %ebp
08157f21 +0x0b80:  mov    %esp,%ebp
08157f23 +0x0b82:  mov    0x8(%ebp),%eax
08157f26 +0x0b85:  mov    0x8(%eax),%eax
08157f29 +0x0b88:  pop    %ebp
08157f2a +0x0b89:  ret
08157f2b +0x0b8a:  nop
08157f2c +0x0b8b:  push   %ebp
08157f2d +0x0b8c:  mov    %esp,%ebp
08157f2f +0x0b8e:  sub    $0x18,%esp
08157f32 +0x0b91:  mov    0x8(%ebp),%eax
08157f35 +0x0b94:  mov    %eax,(%esp)
08157f38 +0x0b97:  call   08158860 <+0x14bf>
08157f3d +0x0b9c:  leave
08157f3e +0x0b9d:  ret
08157f3f +0x0b9e:  nop
08157f40 +0x0b9f:  push   %ebp
08157f41 +0x0ba0:  mov    %esp,%ebp
08157f43 +0x0ba2:  sub    $0x18,%esp
08157f46 +0x0ba5:  mov    0x8(%ebp),%eax
08157f49 +0x0ba8:  mov    %eax,(%esp)
08157f4c +0x0bab:  call   081588b0 <+0x150f>
08157f51 +0x0bb0:  leave
08157f52 +0x0bb1:  ret
08157f53 +0x0bb2:  nop
08157f54 +0x0bb3:  push   %ebp
08157f55 +0x0bb4:  mov    %esp,%ebp
08157f57 +0x0bb6:  sub    $0x28,%esp
08157f5a +0x0bb9:  jmp    08157f9c <+0xbfb>
08157f5c +0x0bbb:  mov    0xc(%ebp),%eax
08157f5f +0x0bbe:  mov    %eax,(%esp)
08157f62 +0x0bc1:  call   081588b5 <+0x1514>
08157f67 +0x0bc6:  mov    %eax,0x4(%esp)
08157f6b +0x0bca:  mov    0x8(%ebp),%eax
08157f6e +0x0bcd:  mov    %eax,(%esp)
08157f71 +0x0bd0:  call   08157f54 <+0xbb3>
08157f76 +0x0bd5:  mov    0xc(%ebp),%eax
08157f79 +0x0bd8:  mov    %eax,(%esp)
08157f7c +0x0bdb:  call   081588c0 <+0x151f>
08157f81 +0x0be0:  mov    %eax,-0xc(%ebp)
08157f84 +0x0be3:  mov    0xc(%ebp),%eax
08157f87 +0x0be6:  mov    %eax,0x4(%esp)
08157f8b +0x0bea:  mov    0x8(%ebp),%eax
08157f8e +0x0bed:  mov    %eax,(%esp)
08157f91 +0x0bf0:  call   081588cc <+0x152b>
08157f96 +0x0bf5:  mov    -0xc(%ebp),%eax
08157f99 +0x0bf8:  mov    %eax,0xc(%ebp)
08157f9c +0x0bfb:  cmpl   $0x0,0xc(%ebp)
08157fa0 +0x0bff:  setne  %al
08157fa3 +0x0c02:  test   %al,%al
08157fa5 +0x0c04:  jne    08157f5c <+0xbbb>
08157fa7 +0x0c06:  leave
08157fa8 +0x0c07:  ret
08157fa9 +0x0c08:  nop
08157faa +0x0c09:  push   %ebp
08157fab +0x0c0a:  mov    %esp,%ebp
08157fad +0x0c0c:  mov    0x8(%ebp),%eax
08157fb0 +0x0c0f:  mov    0x8(%eax),%eax
08157fb3 +0x0c12:  pop    %ebp
08157fb4 +0x0c13:  ret
08157fb5 +0x0c14:  nop
08157fb6 +0x0c15:  push   %ebp
08157fb7 +0x0c16:  mov    %esp,%ebp
08157fb9 +0x0c18:  push   %ebx
08157fba +0x0c19:  sub    $0x14,%esp
08157fbd +0x0c1c:  mov    0x8(%ebp),%eax
08157fc0 +0x0c1f:  mov    %eax,(%esp)
08157fc3 +0x0c22:  call   08157f20 <+0xb7f>
08157fc8 +0x0c27:  mov    %eax,0x4(%esp)
08157fcc +0x0c2b:  mov    0x8(%ebp),%eax
08157fcf +0x0c2e:  mov    %eax,(%esp)
08157fd2 +0x0c31:  call   08157eca <+0xb29>
08157fd7 +0x0c36:  mov    0x8(%ebp),%eax
08157fda +0x0c39:  mov    %eax,(%esp)
08157fdd +0x0c3c:  call   0815890c <+0x156b>
08157fe2 +0x0c41:  mov    %eax,%ebx
08157fe4 +0x0c43:  mov    0x8(%ebp),%eax
08157fe7 +0x0c46:  mov    %eax,(%esp)
08157fea +0x0c49:  call   08158900 <+0x155f>
08157fef +0x0c4e:  mov    %eax,(%ebx)
08157ff1 +0x0c50:  mov    0x8(%ebp),%eax
08157ff4 +0x0c53:  mov    %eax,(%esp)
08157ff7 +0x0c56:  call   08158918 <+0x1577>
08157ffc +0x0c5b:  movl   $0x0,(%eax)
08158002 +0x0c61:  mov    0x8(%ebp),%eax
08158005 +0x0c64:  mov    %eax,(%esp)
08158008 +0x0c67:  call   08158924 <+0x1583>
0815800d +0x0c6c:  mov    %eax,%ebx
0815800f +0x0c6e:  mov    0x8(%ebp),%eax
08158012 +0x0c71:  mov    %eax,(%esp)
08158015 +0x0c74:  call   08158900 <+0x155f>
0815801a +0x0c79:  mov    %eax,(%ebx)
0815801c +0x0c7b:  mov    0x8(%ebp),%eax
0815801f +0x0c7e:  movl   $0x0,0x14(%eax)
08158026 +0x0c85:  add    $0x14,%esp
08158029 +0x0c88:  pop    %ebx
0815802a +0x0c89:  pop    %ebp
0815802b +0x0c8a:  ret
0815802c +0x0c8b:  push   %ebp
0815802d +0x0c8c:  mov    %esp,%ebp
0815802f +0x0c8e:  push   %ebx
08158030 +0x0c8f:  sub    $0x14,%esp
08158033 +0x0c92:  mov    0x8(%ebp),%eax
08158036 +0x0c95:  mov    %eax,(%esp)
08158039 +0x0c98:  call   08157faa <+0xc09>
0815803e +0x0c9d:  mov    %eax,0x4(%esp)
08158042 +0x0ca1:  mov    0x8(%ebp),%eax
08158045 +0x0ca4:  mov    %eax,(%esp)
08158048 +0x0ca7:  call   08157f54 <+0xbb3>
0815804d +0x0cac:  mov    0x8(%ebp),%eax
08158050 +0x0caf:  mov    %eax,(%esp)
08158053 +0x0cb2:  call   0815893c <+0x159b>
08158058 +0x0cb7:  mov    %eax,%ebx
0815805a +0x0cb9:  mov    0x8(%ebp),%eax
0815805d +0x0cbc:  mov    %eax,(%esp)
08158060 +0x0cbf:  call   08158930 <+0x158f>
08158065 +0x0cc4:  mov    %eax,(%ebx)
08158067 +0x0cc6:  mov    0x8(%ebp),%eax
0815806a +0x0cc9:  mov    %eax,(%esp)
0815806d +0x0ccc:  call   08158948 <+0x15a7>
08158072 +0x0cd1:  movl   $0x0,(%eax)
08158078 +0x0cd7:  mov    0x8(%ebp),%eax
0815807b +0x0cda:  mov    %eax,(%esp)
0815807e +0x0cdd:  call   08158954 <+0x15b3>
08158083 +0x0ce2:  mov    %eax,%ebx
08158085 +0x0ce4:  mov    0x8(%ebp),%eax
08158088 +0x0ce7:  mov    %eax,(%esp)
0815808b +0x0cea:  call   08158930 <+0x158f>
08158090 +0x0cef:  mov    %eax,(%ebx)
08158092 +0x0cf1:  mov    0x8(%ebp),%eax
08158095 +0x0cf4:  movl   $0x0,0x14(%eax)
0815809c +0x0cfb:  add    $0x14,%esp
0815809f +0x0cfe:  pop    %ebx
081580a0 +0x0cff:  pop    %ebp
081580a1 +0x0d00:  ret
081580a2 +0x0d01:  push   %ebp
081580a3 +0x0d02:  mov    %esp,%ebp
081580a5 +0x0d04:  push   %esi
081580a6 +0x0d05:  push   %ebx
081580a7 +0x0d06:  sub    $0x30,%esp
081580aa +0x0d09:  mov    0x8(%ebp),%ebx
081580ad +0x0d0c:  mov    0xc(%ebp),%eax
081580b0 +0x0d0f:  mov    %eax,(%esp)
081580b3 +0x0d12:  call   08158900 <+0x155f>
081580b8 +0x0d17:  mov    %eax,%esi
081580ba +0x0d19:  mov    0xc(%ebp),%eax
081580bd +0x0d1c:  mov    %eax,(%esp)
081580c0 +0x0d1f:  call   08157f20 <+0xb7f>
081580c5 +0x0d24:  lea    -0x10(%ebp),%edx
081580c8 +0x0d27:  mov    0x10(%ebp),%ecx
081580cb +0x0d2a:  mov    %ecx,0x10(%esp)
081580cf +0x0d2e:  mov    %esi,0xc(%esp)
081580d3 +0x0d32:  mov    %eax,0x8(%esp)
081580d7 +0x0d36:  mov    0xc(%ebp),%eax
081580da +0x0d39:  mov    %eax,0x4(%esp)
081580de +0x0d3d:  mov    %edx,(%esp)
081580e1 +0x0d40:  call   08158960 <+0x15bf>
081580e6 +0x0d45:  sub    $0x4,%esp
081580e9 +0x0d48:  lea    -0xc(%ebp),%eax
081580ec +0x0d4b:  mov    0xc(%ebp),%edx
081580ef +0x0d4e:  mov    %edx,0x4(%esp)
081580f3 +0x0d52:  mov    %eax,(%esp)
081580f6 +0x0d55:  call   08158160 <+0xdbf>
081580fb +0x0d5a:  sub    $0x4,%esp
081580fe +0x0d5d:  lea    -0xc(%ebp),%eax
08158101 +0x0d60:  mov    %eax,0x4(%esp)
08158105 +0x0d64:  lea    -0x10(%ebp),%eax
08158108 +0x0d67:  mov    %eax,(%esp)
0815810b +0x0d6a:  call   08157774 <+0x3d3>
08158110 +0x0d6f:  test   %al,%al
08158112 +0x0d71:  jne    08158139 <+0xd98>
08158114 +0x0d73:  mov    -0x10(%ebp),%eax
08158117 +0x0d76:  mov    %eax,(%esp)
0815811a +0x0d79:  call   081589dc <+0x163b>
0815811f +0x0d7e:  mov    0xc(%ebp),%edx
08158122 +0x0d81:  mov    %eax,0x8(%esp)
08158126 +0x0d85:  mov    0x10(%ebp),%eax
08158129 +0x0d88:  mov    %eax,0x4(%esp)
0815812d +0x0d8c:  mov    %edx,(%esp)
08158130 +0x0d8f:  call   080e36fc <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x14a2>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x14a2
08158135 +0x0d94:  test   %al,%al
08158137 +0x0d96:  je     0815814d <+0xdac>
08158139 +0x0d98:  mov    0xc(%ebp),%eax
0815813c +0x0d9b:  mov    %eax,0x4(%esp)
08158140 +0x0d9f:  mov    %ebx,(%esp)
08158143 +0x0da2:  call   08158160 <+0xdbf>
08158148 +0x0da7:  sub    $0x4,%esp
0815814b +0x0daa:  jmp    08158152 <+0xdb1>
0815814d +0x0dac:  mov    -0x10(%ebp),%eax
08158150 +0x0daf:  mov    %eax,(%ebx)
08158152 +0x0db1:  mov    %ebx,%eax
08158154 +0x0db3:  lea    -0x8(%ebp),%esp
08158157 +0x0db6:  add    $0x0,%esp
0815815a +0x0db9:  pop    %ebx
0815815b +0x0dba:  pop    %esi
0815815c +0x0dbb:  pop    %ebp
0815815d +0x0dbc:  ret    $0x4
08158160 +0x0dbf:  push   %ebp
08158161 +0x0dc0:  mov    %esp,%ebp
08158163 +0x0dc2:  push   %ebx
08158164 +0x0dc3:  sub    $0x14,%esp
08158167 +0x0dc6:  mov    0x8(%ebp),%ebx
0815816a +0x0dc9:  mov    0xc(%ebp),%eax
0815816d +0x0dcc:  add    $0x4,%eax
08158170 +0x0dcf:  mov    %eax,0x4(%esp)
08158174 +0x0dd3:  mov    %ebx,(%esp)
08158177 +0x0dd6:  call   081589fe <+0x165d>
0815817c +0x0ddb:  mov    %ebx,%eax
0815817e +0x0ddd:  add    $0x14,%esp
08158181 +0x0de0:  pop    %ebx
08158182 +0x0de1:  pop    %ebp
08158183 +0x0de2:  ret    $0x4
08158186 +0x0de5:  push   %ebp
08158187 +0x0de6:  mov    %esp,%ebp
08158189 +0x0de8:  push   %ebx
0815818a +0x0de9:  sub    $0x14,%esp
0815818d +0x0dec:  mov    0x8(%ebp),%ebx
08158190 +0x0def:  mov    0xc(%ebp),%eax
08158193 +0x0df2:  mov    0x10(%ebp),%edx
08158196 +0x0df5:  mov    %edx,0x8(%esp)
0815819a +0x0df9:  mov    %eax,0x4(%esp)
0815819e +0x0dfd:  mov    %ebx,(%esp)
081581a1 +0x0e00:  call   08158a0c <+0x166b>
081581a6 +0x0e05:  sub    $0x4,%esp
081581a9 +0x0e08:  mov    %ebx,%eax
081581ab +0x0e0a:  mov    -0x4(%ebp),%ebx
081581ae +0x0e0d:  leave
081581af +0x0e0e:  ret    $0x4
081581b2 +0x0e11:  push   %ebp
081581b3 +0x0e12:  mov    %esp,%ebp
081581b5 +0x0e14:  push   %ebx
081581b6 +0x0e15:  sub    $0x14,%esp
081581b9 +0x0e18:  mov    0x8(%ebp),%ebx
081581bc +0x0e1b:  mov    0xc(%ebp),%eax
081581bf +0x0e1e:  mov    %eax,0x4(%esp)
081581c3 +0x0e22:  mov    %ebx,(%esp)
081581c6 +0x0e25:  call   08158a5e <+0x16bd>
081581cb +0x0e2a:  sub    $0x4,%esp
081581ce +0x0e2d:  mov    %ebx,%eax
081581d0 +0x0e2f:  mov    -0x4(%ebp),%ebx
081581d3 +0x0e32:  leave
081581d4 +0x0e33:  ret    $0x4
081581d7 +0x0e36:  nop
081581d8 +0x0e37:  push   %ebp
081581d9 +0x0e38:  mov    %esp,%ebp
081581db +0x0e3a:  mov    0x8(%ebp),%eax
081581de +0x0e3d:  mov    (%eax),%eax
081581e0 +0x0e3f:  add    $0x10,%eax
081581e3 +0x0e42:  pop    %ebp
081581e4 +0x0e43:  ret
081581e5 +0x0e44:  nop
081581e6 +0x0e45:  push   %ebp
081581e7 +0x0e46:  mov    %esp,%ebp
081581e9 +0x0e48:  sub    $0x18,%esp
081581ec +0x0e4b:  mov    0xc(%ebp),%eax
081581ef +0x0e4e:  mov    %eax,(%esp)
081581f2 +0x0e51:  call   080e3796 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x153c>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x153c
081581f7 +0x0e56:  mov    (%eax),%edx
081581f9 +0x0e58:  mov    0x8(%ebp),%eax
081581fc +0x0e5b:  mov    %edx,(%eax)
081581fe +0x0e5d:  mov    0x10(%ebp),%eax
08158201 +0x0e60:  mov    %eax,(%esp)
08158204 +0x0e63:  call   08158a68 <+0x16c7>
08158209 +0x0e68:  mov    0x8(%ebp),%edx
0815820c +0x0e6b:  mov    (%eax),%ecx
0815820e +0x0e6d:  mov    %ecx,0x4(%edx)
08158211 +0x0e70:  mov    0x4(%eax),%ecx
08158214 +0x0e73:  mov    %ecx,0x8(%edx)
08158217 +0x0e76:  mov    0x8(%eax),%ecx
0815821a +0x0e79:  mov    %ecx,0xc(%edx)
0815821d +0x0e7c:  mov    0xc(%eax),%eax
08158220 +0x0e7f:  mov    %eax,0x10(%edx)
08158223 +0x0e82:  leave
08158224 +0x0e83:  ret
08158225 +0x0e84:  nop
08158226 +0x0e85:  push   %ebp
08158227 +0x0e86:  mov    %esp,%ebp
08158229 +0x0e88:  push   %ebx
0815822a +0x0e89:  sub    $0x24,%esp
0815822d +0x0e8c:  mov    0x8(%ebp),%ebx
08158230 +0x0e8f:  lea    0x10(%ebp),%eax
08158233 +0x0e92:  mov    %eax,0x4(%esp)
08158237 +0x0e96:  lea    -0xc(%ebp),%eax
0815823a +0x0e99:  mov    %eax,(%esp)
0815823d +0x0e9c:  call   08158a70 <+0x16cf>
08158242 +0x0ea1:  mov    0xc(%ebp),%eax
08158245 +0x0ea4:  mov    0x14(%ebp),%edx
08158248 +0x0ea7:  mov    %edx,0xc(%esp)
0815824c +0x0eab:  mov    -0xc(%ebp),%edx
0815824f +0x0eae:  mov    %edx,0x8(%esp)
08158253 +0x0eb2:  mov    %eax,0x4(%esp)
08158257 +0x0eb6:  mov    %ebx,(%esp)
0815825a +0x0eb9:  call   08158a80 <+0x16df>
0815825f +0x0ebe:  sub    $0x4,%esp
08158262 +0x0ec1:  mov    %ebx,%eax
08158264 +0x0ec3:  mov    -0x4(%ebp),%ebx
08158267 +0x0ec6:  leave
08158268 +0x0ec7:  ret    $0x4
0815826b +0x0eca:  nop
0815826c +0x0ecb:  push   %ebp
0815826d +0x0ecc:  mov    %esp,%ebp
0815826f +0x0ece:  push   %esi
08158270 +0x0ecf:  push   %ebx
08158271 +0x0ed0:  sub    $0x30,%esp
08158274 +0x0ed3:  mov    0x8(%ebp),%ebx
08158277 +0x0ed6:  mov    0xc(%ebp),%eax
0815827a +0x0ed9:  mov    %eax,(%esp)
0815827d +0x0edc:  call   08158930 <+0x158f>
08158282 +0x0ee1:  mov    %eax,%esi
08158284 +0x0ee3:  mov    0xc(%ebp),%eax
08158287 +0x0ee6:  mov    %eax,(%esp)
0815828a +0x0ee9:  call   08157faa <+0xc09>
0815828f +0x0eee:  lea    -0x10(%ebp),%edx
08158292 +0x0ef1:  mov    0x10(%ebp),%ecx
08158295 +0x0ef4:  mov    %ecx,0x10(%esp)
08158299 +0x0ef8:  mov    %esi,0xc(%esp)
0815829d +0x0efc:  mov    %eax,0x8(%esp)
081582a1 +0x0f00:  mov    0xc(%ebp),%eax
081582a4 +0x0f03:  mov    %eax,0x4(%esp)
081582a8 +0x0f07:  mov    %edx,(%esp)
081582ab +0x0f0a:  call   08158e46 <+0x1aa5>
081582b0 +0x0f0f:  sub    $0x4,%esp
081582b3 +0x0f12:  lea    -0xc(%ebp),%eax
081582b6 +0x0f15:  mov    0xc(%ebp),%edx
081582b9 +0x0f18:  mov    %edx,0x4(%esp)
081582bd +0x0f1c:  mov    %eax,(%esp)
081582c0 +0x0f1f:  call   0815832a <+0xf89>
081582c5 +0x0f24:  sub    $0x4,%esp
081582c8 +0x0f27:  lea    -0xc(%ebp),%eax
081582cb +0x0f2a:  mov    %eax,0x4(%esp)
081582cf +0x0f2e:  lea    -0x10(%ebp),%eax
081582d2 +0x0f31:  mov    %eax,(%esp)
081582d5 +0x0f34:  call   081578e2 <+0x541>
081582da +0x0f39:  test   %al,%al
081582dc +0x0f3b:  jne    08158303 <+0xf62>
081582de +0x0f3d:  mov    -0x10(%ebp),%eax
081582e1 +0x0f40:  mov    %eax,(%esp)
081582e4 +0x0f43:  call   08158ec2 <+0x1b21>
081582e9 +0x0f48:  mov    0xc(%ebp),%edx
081582ec +0x0f4b:  mov    %eax,0x8(%esp)
081582f0 +0x0f4f:  mov    0x10(%ebp),%eax
081582f3 +0x0f52:  mov    %eax,0x4(%esp)
081582f7 +0x0f56:  mov    %edx,(%esp)
081582fa +0x0f59:  call   081583b0 <+0x100f>
081582ff +0x0f5e:  test   %al,%al
08158301 +0x0f60:  je     08158317 <+0xf76>
08158303 +0x0f62:  mov    0xc(%ebp),%eax
08158306 +0x0f65:  mov    %eax,0x4(%esp)
0815830a +0x0f69:  mov    %ebx,(%esp)
0815830d +0x0f6c:  call   0815832a <+0xf89>
08158312 +0x0f71:  sub    $0x4,%esp
08158315 +0x0f74:  jmp    0815831c <+0xf7b>
08158317 +0x0f76:  mov    -0x10(%ebp),%eax
0815831a +0x0f79:  mov    %eax,(%ebx)
0815831c +0x0f7b:  mov    %ebx,%eax
0815831e +0x0f7d:  lea    -0x8(%ebp),%esp
08158321 +0x0f80:  add    $0x0,%esp
08158324 +0x0f83:  pop    %ebx
08158325 +0x0f84:  pop    %esi
08158326 +0x0f85:  pop    %ebp
08158327 +0x0f86:  ret    $0x4
0815832a +0x0f89:  push   %ebp
0815832b +0x0f8a:  mov    %esp,%ebp
0815832d +0x0f8c:  push   %ebx
0815832e +0x0f8d:  sub    $0x14,%esp
08158331 +0x0f90:  mov    0x8(%ebp),%ebx
08158334 +0x0f93:  mov    0xc(%ebp),%eax
08158337 +0x0f96:  add    $0x4,%eax
0815833a +0x0f99:  mov    %eax,0x4(%esp)
0815833e +0x0f9d:  mov    %ebx,(%esp)
08158341 +0x0fa0:  call   08158ee4 <+0x1b43>
08158346 +0x0fa5:  mov    %ebx,%eax
08158348 +0x0fa7:  add    $0x14,%esp
0815834b +0x0faa:  pop    %ebx
0815834c +0x0fab:  pop    %ebp
0815834d +0x0fac:  ret    $0x4
08158350 +0x0faf:  push   %ebp
08158351 +0x0fb0:  mov    %esp,%ebp
08158353 +0x0fb2:  push   %ebx
08158354 +0x0fb3:  sub    $0x14,%esp
08158357 +0x0fb6:  mov    0x8(%ebp),%ebx
0815835a +0x0fb9:  mov    0xc(%ebp),%eax
0815835d +0x0fbc:  mov    0x10(%ebp),%edx
08158360 +0x0fbf:  mov    %edx,0x8(%esp)
08158364 +0x0fc3:  mov    %eax,0x4(%esp)
08158368 +0x0fc7:  mov    %ebx,(%esp)
0815836b +0x0fca:  call   08158ef2 <+0x1b51>
08158370 +0x0fcf:  sub    $0x4,%esp
08158373 +0x0fd2:  mov    %ebx,%eax
08158375 +0x0fd4:  mov    -0x4(%ebp),%ebx
08158378 +0x0fd7:  leave
08158379 +0x0fd8:  ret    $0x4
0815837c +0x0fdb:  push   %ebp
0815837d +0x0fdc:  mov    %esp,%ebp
0815837f +0x0fde:  push   %ebx
08158380 +0x0fdf:  sub    $0x14,%esp
08158383 +0x0fe2:  mov    0x8(%ebp),%ebx
08158386 +0x0fe5:  mov    0xc(%ebp),%eax
08158389 +0x0fe8:  mov    %eax,0x4(%esp)
0815838d +0x0fec:  mov    %ebx,(%esp)
08158390 +0x0fef:  call   08158f44 <+0x1ba3>
08158395 +0x0ff4:  sub    $0x4,%esp
08158398 +0x0ff7:  mov    %ebx,%eax
0815839a +0x0ff9:  mov    -0x4(%ebp),%ebx
0815839d +0x0ffc:  leave
0815839e +0x0ffd:  ret    $0x4
081583a1 +0x1000:  nop
081583a2 +0x1001:  push   %ebp
081583a3 +0x1002:  mov    %esp,%ebp
081583a5 +0x1004:  mov    0x8(%ebp),%eax
081583a8 +0x1007:  mov    (%eax),%eax
081583aa +0x1009:  add    $0x10,%eax
081583ad +0x100c:  pop    %ebp
081583ae +0x100d:  ret
081583af +0x100e:  nop
081583b0 +0x100f:  push   %ebp
081583b1 +0x1010:  mov    %esp,%ebp
081583b3 +0x1012:  push   %esi
081583b4 +0x1013:  push   %ebx
081583b5 +0x1014:  mov    0xc(%ebp),%eax
081583b8 +0x1017:  mov    (%eax),%ecx
081583ba +0x1019:  mov    0x4(%eax),%ebx
081583bd +0x101c:  mov    0x10(%ebp),%eax
081583c0 +0x101f:  mov    0x4(%eax),%edx
081583c3 +0x1022:  mov    (%eax),%eax
081583c5 +0x1024:  mov    $0x1,%esi
081583ca +0x1029:  cmp    %edx,%ebx
081583cc +0x102b:  jl     081583db <+0x103a>
081583ce +0x102d:  cmp    %edx,%ebx
081583d0 +0x102f:  jg     081583d6 <+0x1035>
081583d2 +0x1031:  cmp    %eax,%ecx
081583d4 +0x1033:  jb     081583db <+0x103a>
081583d6 +0x1035:  mov    $0x0,%esi
081583db +0x103a:  mov    %esi,%eax
081583dd +0x103c:  pop    %ebx
081583de +0x103d:  pop    %esi
081583df +0x103e:  pop    %ebp
081583e0 +0x103f:  ret
081583e1 +0x1040:  nop
081583e2 +0x1041:  push   %ebp
081583e3 +0x1042:  mov    %esp,%ebp
081583e5 +0x1044:  sub    $0x18,%esp
081583e8 +0x1047:  mov    0xc(%ebp),%eax
081583eb +0x104a:  mov    %eax,(%esp)
081583ee +0x104d:  call   08158f4e <+0x1bad>
081583f3 +0x1052:  mov    0x4(%eax),%edx
081583f6 +0x1055:  mov    (%eax),%eax
081583f8 +0x1057:  mov    0x8(%ebp),%ecx
081583fb +0x105a:  mov    %eax,(%ecx)
081583fd +0x105c:  mov    %edx,0x4(%ecx)
08158400 +0x105f:  mov    0x10(%ebp),%eax
08158403 +0x1062:  mov    %eax,(%esp)
08158406 +0x1065:  call   08158f56 <+0x1bb5>
0815840b +0x106a:  mov    0x8(%ebp),%edx
0815840e +0x106d:  mov    (%eax),%ecx
08158410 +0x106f:  mov    %ecx,0x8(%edx)
08158413 +0x1072:  mov    0x4(%eax),%ecx
08158416 +0x1075:  mov    %ecx,0xc(%edx)
08158419 +0x1078:  mov    0x8(%eax),%ecx
0815841c +0x107b:  mov    %ecx,0x10(%edx)
0815841f +0x107e:  movzwl 0xc(%eax),%eax
08158423 +0x1082:  mov    %ax,0x14(%edx)
08158427 +0x1086:  leave
08158428 +0x1087:  ret
08158429 +0x1088:  nop
0815842a +0x1089:  push   %ebp
0815842b +0x108a:  mov    %esp,%ebp
0815842d +0x108c:  push   %ebx
0815842e +0x108d:  sub    $0x24,%esp
08158431 +0x1090:  mov    0x8(%ebp),%ebx
08158434 +0x1093:  lea    0x10(%ebp),%eax
08158437 +0x1096:  mov    %eax,0x4(%esp)
0815843b +0x109a:  lea    -0xc(%ebp),%eax
0815843e +0x109d:  mov    %eax,(%esp)
08158441 +0x10a0:  call   08158f5e <+0x1bbd>
08158446 +0x10a5:  mov    0xc(%ebp),%eax
08158449 +0x10a8:  mov    0x14(%ebp),%edx
0815844c +0x10ab:  mov    %edx,0xc(%esp)
08158450 +0x10af:  mov    -0xc(%ebp),%edx
08158453 +0x10b2:  mov    %edx,0x8(%esp)
08158457 +0x10b6:  mov    %eax,0x4(%esp)
0815845b +0x10ba:  mov    %ebx,(%esp)
0815845e +0x10bd:  call   08158f6e <+0x1bcd>
08158463 +0x10c2:  sub    $0x4,%esp
08158466 +0x10c5:  mov    %ebx,%eax
08158468 +0x10c7:  mov    -0x4(%ebp),%ebx
0815846b +0x10ca:  leave
0815846c +0x10cb:  ret    $0x4
0815846f +0x10ce:  nop
08158470 +0x10cf:  push   %ebp
08158471 +0x10d0:  mov    %esp,%ebp
08158473 +0x10d2:  mov    0x8(%ebp),%eax
08158476 +0x10d5:  mov    0x14(%eax),%eax
08158479 +0x10d8:  pop    %ebp
0815847a +0x10d9:  ret
0815847b +0x10da:  nop
0815847c +0x10db:  push   %ebp
0815847d +0x10dc:  mov    %esp,%ebp
0815847f +0x10de:  push   %ebx
08158480 +0x10df:  sub    $0x14,%esp
08158483 +0x10e2:  mov    0x8(%ebp),%ebx
08158486 +0x10e5:  mov    0xc(%ebp),%eax
08158489 +0x10e8:  mov    0xc(%eax),%eax
0815848c +0x10eb:  mov    %eax,0x4(%esp)
08158490 +0x10ef:  mov    %ebx,(%esp)
08158493 +0x10f2:  call   081589fe <+0x165d>
08158498 +0x10f7:  mov    %ebx,%eax
0815849a +0x10f9:  add    $0x14,%esp
0815849d +0x10fc:  pop    %ebx
0815849e +0x10fd:  pop    %ebp
0815849f +0x10fe:  ret    $0x4
081584a2 +0x1101:  push   %ebp
081584a3 +0x1102:  mov    %esp,%ebp
081584a5 +0x1104:  sub    $0x28,%esp
081584a8 +0x1107:  jmp    081584c6 <+0x1125>
081584aa +0x1109:  mov    0x8(%ebp),%eax
081584ad +0x110c:  mov    %eax,(%esp)
081584b0 +0x110f:  call   0861bdc8 <_ZN6Stream4sizeEv>  ; Stream::size()
081584b5 +0x1114:  add    %eax,%eax
081584b7 +0x1116:  mov    %eax,0x4(%esp)
081584bb +0x111a:  mov    0x8(%ebp),%eax
081584be +0x111d:  mov    %eax,(%esp)
081584c1 +0x1120:  call   0861bee8 <_ZN6Stream6resizeEi>  ; Stream::resize(int)
081584c6 +0x1125:  movl   $0x10,0x4(%esp)
081584ce +0x112d:  mov    0x8(%ebp),%eax
081584d1 +0x1130:  mov    %eax,(%esp)
081584d4 +0x1133:  call   0861bf9e <_ZN6Stream9enable_inEi>  ; Stream::enable_in(int)
081584d9 +0x1138:  xor    $0x1,%eax
081584dc +0x113b:  test   %al,%al
081584de +0x113d:  jne    081584aa <+0x1109>
081584e0 +0x113f:  mov    0x8(%ebp),%eax
081584e3 +0x1142:  mov    0x8(%eax),%eax
081584e6 +0x1145:  mov    %eax,%edx
081584e8 +0x1147:  mov    0x8(%ebp),%eax
081584eb +0x114a:  mov    0xc(%eax),%eax
081584ee +0x114d:  lea    (%edx,%eax,1),%eax
081584f1 +0x1150:  mov    %eax,-0xc(%ebp)
081584f4 +0x1153:  movl   $0x10,0x4(%esp)
081584fc +0x115b:  mov    0x8(%ebp),%eax
081584ff +0x115e:  mov    %eax,(%esp)
08158502 +0x1161:  call   0861be0c <_ZN6Stream6in_ptrEi>  ; Stream::in_ptr(int)
08158507 +0x1166:  mov    -0xc(%ebp),%eax
0815850a +0x1169:  leave
0815850b +0x116a:  ret
0815850c +0x116b:  push   %ebp
0815850d +0x116c:  mov    %esp,%ebp
0815850f +0x116e:  mov    0x8(%ebp),%eax
08158512 +0x1171:  mov    0x14(%eax),%eax
08158515 +0x1174:  pop    %ebp
08158516 +0x1175:  ret
08158517 +0x1176:  nop
08158518 +0x1177:  push   %ebp
08158519 +0x1178:  mov    %esp,%ebp
0815851b +0x117a:  push   %ebx
0815851c +0x117b:  sub    $0x14,%esp
0815851f +0x117e:  mov    0x8(%ebp),%ebx
08158522 +0x1181:  mov    0xc(%ebp),%eax
08158525 +0x1184:  mov    0xc(%eax),%eax
08158528 +0x1187:  mov    %eax,0x4(%esp)
0815852c +0x118b:  mov    %ebx,(%esp)
0815852f +0x118e:  call   08158ee4 <+0x1b43>
08158534 +0x1193:  mov    %ebx,%eax
08158536 +0x1195:  add    $0x14,%esp
08158539 +0x1198:  pop    %ebx
0815853a +0x1199:  pop    %ebp
0815853b +0x119a:  ret    $0x4
0815853e +0x119d:  push   %ebp
0815853f +0x119e:  mov    %esp,%ebp
08158541 +0x11a0:  sub    $0x28,%esp
08158544 +0x11a3:  jmp    08158562 <+0x11c1>
08158546 +0x11a5:  mov    0x8(%ebp),%eax
08158549 +0x11a8:  mov    %eax,(%esp)
0815854c +0x11ab:  call   0861bdc8 <_ZN6Stream4sizeEv>  ; Stream::size()
08158551 +0x11b0:  add    %eax,%eax
08158553 +0x11b2:  mov    %eax,0x4(%esp)
08158557 +0x11b6:  mov    0x8(%ebp),%eax
0815855a +0x11b9:  mov    %eax,(%esp)
0815855d +0x11bc:  call   0861bee8 <_ZN6Stream6resizeEi>  ; Stream::resize(int)
08158562 +0x11c1:  movl   $0x10,0x4(%esp)
0815856a +0x11c9:  mov    0x8(%ebp),%eax
0815856d +0x11cc:  mov    %eax,(%esp)
08158570 +0x11cf:  call   0861bf9e <_ZN6Stream9enable_inEi>  ; Stream::enable_in(int)
08158575 +0x11d4:  xor    $0x1,%eax
08158578 +0x11d7:  test   %al,%al
0815857a +0x11d9:  jne    08158546 <+0x11a5>
0815857c +0x11db:  mov    0x8(%ebp),%eax
0815857f +0x11de:  mov    0x8(%eax),%eax
08158582 +0x11e1:  mov    %eax,%edx
08158584 +0x11e3:  mov    0x8(%ebp),%eax
08158587 +0x11e6:  mov    0xc(%eax),%eax
0815858a +0x11e9:  lea    (%edx,%eax,1),%eax
0815858d +0x11ec:  mov    %eax,-0xc(%ebp)
08158590 +0x11ef:  movl   $0x10,0x4(%esp)
08158598 +0x11f7:  mov    0x8(%ebp),%eax
0815859b +0x11fa:  mov    %eax,(%esp)
0815859e +0x11fd:  call   0861be0c <_ZN6Stream6in_ptrEi>  ; Stream::in_ptr(int)
081585a3 +0x1202:  mov    -0xc(%ebp),%eax
081585a6 +0x1205:  leave
081585a7 +0x1206:  ret
081585a8 +0x1207:  push   %ebp
081585a9 +0x1208:  mov    %esp,%ebp
081585ab +0x120a:  push   %ebx
081585ac +0x120b:  sub    $0x14,%esp
081585af +0x120e:  mov    0x8(%ebp),%ebx
081585b2 +0x1211:  jmp    08158600 <+0x125f>
081585b4 +0x1213:  mov    0x10(%ebp),%eax
081585b7 +0x1216:  mov    %eax,(%esp)
081585ba +0x1219:  call   0815865c <+0x12bb>
081585bf +0x121e:  mov    0xc(%ebp),%edx
081585c2 +0x1221:  mov    0x18(%ebp),%ecx
081585c5 +0x1224:  mov    %ecx,0x8(%esp)
081585c9 +0x1228:  mov    %eax,0x4(%esp)
081585cd +0x122c:  mov    %edx,(%esp)
081585d0 +0x122f:  call   080e36fc <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x14a2>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x14a2
081585d5 +0x1234:  xor    $0x1,%eax
081585d8 +0x1237:  test   %al,%al
081585da +0x1239:  je     081585f2 <+0x1251>
081585dc +0x123b:  mov    0x10(%ebp),%eax
081585df +0x123e:  mov    %eax,0x14(%ebp)
081585e2 +0x1241:  mov    0x10(%ebp),%eax
081585e5 +0x1244:  mov    %eax,(%esp)
081585e8 +0x1247:  call   08145ce6 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x769>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x769
081585ed +0x124c:  mov    %eax,0x10(%ebp)
081585f0 +0x124f:  jmp    08158600 <+0x125f>
081585f2 +0x1251:  mov    0x10(%ebp),%eax
081585f5 +0x1254:  mov    %eax,(%esp)
081585f8 +0x1257:  call   08145cdb <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x75e>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x75e
081585fd +0x125c:  mov    %eax,0x10(%ebp)
08158600 +0x125f:  cmpl   $0x0,0x10(%ebp)
08158604 +0x1263:  setne  %al
08158607 +0x1266:  test   %al,%al
08158609 +0x1268:  jne    081585b4 <+0x1213>
0815860b +0x126a:  mov    0x14(%ebp),%eax
0815860e +0x126d:  mov    %eax,0x4(%esp)
08158612 +0x1271:  mov    %ebx,(%esp)
08158615 +0x1274:  call   08158646 <+0x12a5>
0815861a +0x1279:  mov    %ebx,%eax
0815861c +0x127b:  add    $0x14,%esp
0815861f +0x127e:  pop    %ebx
08158620 +0x127f:  pop    %ebp
08158621 +0x1280:  ret    $0x4
08158624 +0x1283:  push   %ebp
08158625 +0x1284:  mov    %esp,%ebp
08158627 +0x1286:  sub    $0x28,%esp
0815862a +0x1289:  mov    0x8(%ebp),%eax
0815862d +0x128c:  mov    %eax,(%esp)
08158630 +0x128f:  call   08159333 <+0x1f92>
08158635 +0x1294:  mov    %eax,0x4(%esp)
08158639 +0x1298:  lea    -0x9(%ebp),%eax
0815863c +0x129b:  mov    %eax,(%esp)
0815863f +0x129e:  call   08158654 <+0x12b3>
08158644 +0x12a3:  leave
08158645 +0x12a4:  ret
08158646 +0x12a5:  push   %ebp
08158647 +0x12a6:  mov    %esp,%ebp
08158649 +0x12a8:  mov    0xc(%ebp),%edx
0815864c +0x12ab:  mov    0x8(%ebp),%eax
0815864f +0x12ae:  mov    %edx,(%eax)
08158651 +0x12b0:  pop    %ebp
08158652 +0x12b1:  ret
08158653 +0x12b2:  nop
08158654 +0x12b3:  push   %ebp
08158655 +0x12b4:  mov    %esp,%ebp
08158657 +0x12b6:  mov    0xc(%ebp),%eax
0815865a +0x12b9:  pop    %ebp
0815865b +0x12ba:  ret
0815865c +0x12bb:  push   %ebp
0815865d +0x12bc:  mov    %esp,%ebp
0815865f +0x12be:  sub    $0x28,%esp
08158662 +0x12c1:  mov    0x8(%ebp),%eax
08158665 +0x12c4:  mov    %eax,(%esp)
08158668 +0x12c7:  call   0815933e <+0x1f9d>
0815866d +0x12cc:  mov    %eax,0x4(%esp)
08158671 +0x12d0:  lea    -0x9(%ebp),%eax
08158674 +0x12d3:  mov    %eax,(%esp)
08158677 +0x12d6:  call   08158654 <+0x12b3>
0815867c +0x12db:  leave
0815867d +0x12dc:  ret
0815867e +0x12dd:  push   %ebp
0815867f +0x12de:  mov    %esp,%ebp
08158681 +0x12e0:  push   %esi
08158682 +0x12e1:  push   %ebx
08158683 +0x12e2:  sub    $0x20,%esp
08158686 +0x12e5:  mov    0x8(%ebp),%esi
08158689 +0x12e8:  cmpl   $0x0,0x10(%ebp)
0815868d +0x12ec:  jne    081586d5 <+0x1334>
0815868f +0x12ee:  mov    0xc(%ebp),%eax
08158692 +0x12f1:  mov    %eax,(%esp)
08158695 +0x12f4:  call   08145d26 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x7a9>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x7a9
0815869a +0x12f9:  cmp    0x14(%ebp),%eax
0815869d +0x12fc:  je     081586d5 <+0x1334>
0815869f +0x12fe:  mov    0x14(%ebp),%eax
081586a2 +0x1301:  mov    %eax,(%esp)
081586a5 +0x1304:  call   08158624 <+0x1283>
081586aa +0x1309:  mov    %eax,%ebx
081586ac +0x130b:  mov    0x18(%ebp),%eax
081586af +0x130e:  mov    %eax,0x4(%esp)
081586b3 +0x1312:  lea    -0xe(%ebp),%eax
081586b6 +0x1315:  mov    %eax,(%esp)
081586b9 +0x1318:  call   08158654 <+0x12b3>
081586be +0x131d:  mov    0xc(%ebp),%edx
081586c1 +0x1320:  mov    %ebx,0x8(%esp)
081586c5 +0x1324:  mov    %eax,0x4(%esp)
081586c9 +0x1328:  mov    %edx,(%esp)
081586cc +0x132b:  call   080e36fc <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x14a2>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x14a2
081586d1 +0x1330:  test   %al,%al
081586d3 +0x1332:  je     081586dc <+0x133b>
081586d5 +0x1334:  mov    $0x1,%eax
081586da +0x1339:  jmp    081586e1 <+0x1340>
081586dc +0x133b:  mov    $0x0,%eax
081586e1 +0x1340:  mov    %al,-0xd(%ebp)
081586e4 +0x1343:  mov    0x18(%ebp),%eax
081586e7 +0x1346:  mov    %eax,0x4(%esp)
081586eb +0x134a:  mov    0xc(%ebp),%eax
081586ee +0x134d:  mov    %eax,(%esp)
081586f1 +0x1350:  call   0815934a <+0x1fa9>
081586f6 +0x1355:  mov    %eax,-0xc(%ebp)
081586f9 +0x1358:  mov    0xc(%ebp),%eax
081586fc +0x135b:  lea    0x4(%eax),%ecx
081586ff +0x135e:  mov    -0xc(%ebp),%edx
08158702 +0x1361:  movzbl -0xd(%ebp),%eax
08158706 +0x1365:  mov    %ecx,0xc(%esp)
0815870a +0x1369:  mov    0x14(%ebp),%ecx
0815870d +0x136c:  mov    %ecx,0x8(%esp)
08158711 +0x1370:  mov    %edx,0x4(%esp)
08158715 +0x1374:  mov    %eax,(%esp)
08158718 +0x1377:  call   086df9d0 <_ZSt29_Rb_tree_insert_and_rebalancebPSt18_Rb_tree_node_baseS0_RS_>  ; std::_Rb_tree_insert_and_rebalance(bool, std::_Rb_tree_node_base*, std::_Rb_tree_node_base*, std::_Rb_tree_node_base&)
0815871d +0x137c:  mov    0xc(%ebp),%eax
08158720 +0x137f:  mov    0x14(%eax),%eax
08158723 +0x1382:  lea    0x1(%eax),%edx
08158726 +0x1385:  mov    0xc(%ebp),%eax
08158729 +0x1388:  mov    %edx,0x14(%eax)
0815872c +0x138b:  mov    -0xc(%ebp),%eax
0815872f +0x138e:  mov    %eax,0x4(%esp)
08158733 +0x1392:  mov    %esi,(%esp)
08158736 +0x1395:  call   08158646 <+0x12a5>
0815873b +0x139a:  mov    %esi,%eax
0815873d +0x139c:  add    $0x20,%esp
08158740 +0x139f:  pop    %ebx
08158741 +0x13a0:  pop    %esi
08158742 +0x13a1:  pop    %ebp
08158743 +0x13a2:  ret    $0x4
08158746 +0x13a5:  push   %ebp
08158747 +0x13a6:  mov    %esp,%ebp
08158749 +0x13a8:  sub    $0x18,%esp
0815874c +0x13ab:  mov    0xc(%ebp),%eax
0815874f +0x13ae:  mov    %eax,(%esp)
08158752 +0x13b1:  call   081593cb <+0x202a>
08158757 +0x13b6:  mov    0x8(%ebp),%edx
0815875a +0x13b9:  mov    (%eax),%eax
0815875c +0x13bb:  mov    %eax,(%edx)
0815875e +0x13bd:  mov    0x10(%ebp),%eax
08158761 +0x13c0:  mov    %eax,(%esp)
08158764 +0x13c3:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
08158769 +0x13c8:  movzbl (%eax),%edx
0815876c +0x13cb:  mov    0x8(%ebp),%eax
0815876f +0x13ce:  mov    %dl,0x4(%eax)
08158772 +0x13d1:  leave
08158773 +0x13d2:  ret
08158774 +0x13d3:  push   %ebp
08158775 +0x13d4:  mov    %esp,%ebp
08158777 +0x13d6:  sub    $0x18,%esp
0815877a +0x13d9:  mov    0x8(%ebp),%eax
0815877d +0x13dc:  mov    (%eax),%eax
0815877f +0x13de:  mov    %eax,(%esp)
08158782 +0x13e1:  call   086df890 <_ZSt18_Rb_tree_decrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_decrement(std::_Rb_tree_node_base*)
08158787 +0x13e6:  mov    0x8(%ebp),%edx
0815878a +0x13e9:  mov    %eax,(%edx)
0815878c +0x13eb:  mov    0x8(%ebp),%eax
0815878f +0x13ee:  leave
08158790 +0x13ef:  ret
08158791 +0x13f0:  nop
08158792 +0x13f1:  push   %ebp
08158793 +0x13f2:  mov    %esp,%ebp
08158795 +0x13f4:  sub    $0x18,%esp
08158798 +0x13f7:  mov    0xc(%ebp),%eax
0815879b +0x13fa:  mov    %eax,(%esp)
0815879e +0x13fd:  call   081593d3 <+0x2032>
081587a3 +0x1402:  mov    0x8(%ebp),%edx
081587a6 +0x1405:  mov    (%eax),%eax
081587a8 +0x1407:  mov    %eax,(%edx)
081587aa +0x1409:  mov    0x10(%ebp),%eax
081587ad +0x140c:  mov    %eax,(%esp)
081587b0 +0x140f:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
081587b5 +0x1414:  movzbl (%eax),%edx
081587b8 +0x1417:  mov    0x8(%ebp),%eax
081587bb +0x141a:  mov    %dl,0x4(%eax)
081587be +0x141d:  leave
081587bf +0x141e:  ret
081587c0 +0x141f:  push   %ebp
081587c1 +0x1420:  mov    %esp,%ebp
081587c3 +0x1422:  sub    $0x18,%esp
081587c6 +0x1425:  mov    0x8(%ebp),%eax
081587c9 +0x1428:  mov    %eax,(%esp)
081587cc +0x142b:  call   081593dc <+0x203b>
081587d1 +0x1430:  mov    0x8(%ebp),%eax
081587d4 +0x1433:  movl   $0x0,0x4(%eax)
081587db +0x143a:  mov    0x8(%ebp),%eax
081587de +0x143d:  movl   $0x0,0x8(%eax)
081587e5 +0x1444:  mov    0x8(%ebp),%eax
081587e8 +0x1447:  movl   $0x0,0xc(%eax)
081587ef +0x144e:  mov    0x8(%ebp),%eax
081587f2 +0x1451:  movl   $0x0,0x10(%eax)
081587f9 +0x1458:  mov    0x8(%ebp),%eax
081587fc +0x145b:  movl   $0x0,0x14(%eax)
08158803 +0x1462:  mov    0x8(%ebp),%eax
08158806 +0x1465:  mov    %eax,(%esp)
08158809 +0x1468:  call   081593f0 <+0x204f>
0815880e +0x146d:  leave
0815880f +0x146e:  ret
08158810 +0x146f:  push   %ebp
08158811 +0x1470:  mov    %esp,%ebp
08158813 +0x1472:  pop    %ebp
08158814 +0x1473:  ret
08158815 +0x1474:  push   %ebp
08158816 +0x1475:  mov    %esp,%ebp
08158818 +0x1477:  mov    0x8(%ebp),%eax
0815881b +0x147a:  mov    0xc(%eax),%eax
0815881e +0x147d:  pop    %ebp
0815881f +0x147e:  ret
08158820 +0x147f:  push   %ebp
08158821 +0x1480:  mov    %esp,%ebp
08158823 +0x1482:  mov    0x8(%ebp),%eax
08158826 +0x1485:  mov    0x8(%eax),%eax
08158829 +0x1488:  pop    %ebp
0815882a +0x1489:  ret
0815882b +0x148a:  nop
0815882c +0x148b:  push   %ebp
0815882d +0x148c:  mov    %esp,%ebp
0815882f +0x148e:  sub    $0x18,%esp
08158832 +0x1491:  mov    0x8(%ebp),%eax
08158835 +0x1494:  mov    %eax,(%esp)
08158838 +0x1497:  call   08159422 <+0x2081>
0815883d +0x149c:  mov    0xc(%ebp),%edx
08158840 +0x149f:  mov    %edx,0x4(%esp)
08158844 +0x14a3:  mov    %eax,(%esp)
08158847 +0x14a6:  call   08159430 <+0x208f>
0815884c +0x14ab:  mov    0xc(%ebp),%eax
0815884f +0x14ae:  mov    %eax,0x4(%esp)
08158853 +0x14b2:  mov    0x8(%ebp),%eax
08158856 +0x14b5:  mov    %eax,(%esp)
08158859 +0x14b8:  call   08159444 <+0x20a3>
0815885e +0x14bd:  leave
0815885f +0x14be:  ret
08158860 +0x14bf:  push   %ebp
08158861 +0x14c0:  mov    %esp,%ebp
08158863 +0x14c2:  sub    $0x18,%esp
08158866 +0x14c5:  mov    0x8(%ebp),%eax
08158869 +0x14c8:  mov    %eax,(%esp)
0815886c +0x14cb:  call   08159466 <+0x20c5>
08158871 +0x14d0:  mov    0x8(%ebp),%eax
08158874 +0x14d3:  movl   $0x0,0x4(%eax)
0815887b +0x14da:  mov    0x8(%ebp),%eax
0815887e +0x14dd:  movl   $0x0,0x8(%eax)
08158885 +0x14e4:  mov    0x8(%ebp),%eax
08158888 +0x14e7:  movl   $0x0,0xc(%eax)
0815888f +0x14ee:  mov    0x8(%ebp),%eax
08158892 +0x14f1:  movl   $0x0,0x10(%eax)
08158899 +0x14f8:  mov    0x8(%ebp),%eax
0815889c +0x14fb:  movl   $0x0,0x14(%eax)
081588a3 +0x1502:  mov    0x8(%ebp),%eax
081588a6 +0x1505:  mov    %eax,(%esp)
081588a9 +0x1508:  call   0815947a <+0x20d9>
081588ae +0x150d:  leave
081588af +0x150e:  ret
081588b0 +0x150f:  push   %ebp
081588b1 +0x1510:  mov    %esp,%ebp
081588b3 +0x1512:  pop    %ebp
081588b4 +0x1513:  ret
081588b5 +0x1514:  push   %ebp
081588b6 +0x1515:  mov    %esp,%ebp
081588b8 +0x1517:  mov    0x8(%ebp),%eax
081588bb +0x151a:  mov    0xc(%eax),%eax
081588be +0x151d:  pop    %ebp
081588bf +0x151e:  ret
081588c0 +0x151f:  push   %ebp
081588c1 +0x1520:  mov    %esp,%ebp
081588c3 +0x1522:  mov    0x8(%ebp),%eax
081588c6 +0x1525:  mov    0x8(%eax),%eax
081588c9 +0x1528:  pop    %ebp
081588ca +0x1529:  ret
081588cb +0x152a:  nop
081588cc +0x152b:  push   %ebp
081588cd +0x152c:  mov    %esp,%ebp
081588cf +0x152e:  sub    $0x18,%esp
081588d2 +0x1531:  mov    0x8(%ebp),%eax
081588d5 +0x1534:  mov    %eax,(%esp)
081588d8 +0x1537:  call   081594ac <+0x210b>
081588dd +0x153c:  mov    0xc(%ebp),%edx
081588e0 +0x153f:  mov    %edx,0x4(%esp)
081588e4 +0x1543:  mov    %eax,(%esp)
081588e7 +0x1546:  call   081594ba <+0x2119>
081588ec +0x154b:  mov    0xc(%ebp),%eax
081588ef +0x154e:  mov    %eax,0x4(%esp)
081588f3 +0x1552:  mov    0x8(%ebp),%eax
081588f6 +0x1555:  mov    %eax,(%esp)
081588f9 +0x1558:  call   081594ce <+0x212d>
081588fe +0x155d:  leave
081588ff +0x155e:  ret
08158900 +0x155f:  push   %ebp
08158901 +0x1560:  mov    %esp,%ebp
08158903 +0x1562:  mov    0x8(%ebp),%eax
08158906 +0x1565:  add    $0x4,%eax
08158909 +0x1568:  pop    %ebp
0815890a +0x1569:  ret
0815890b +0x156a:  nop
0815890c +0x156b:  push   %ebp
0815890d +0x156c:  mov    %esp,%ebp
0815890f +0x156e:  mov    0x8(%ebp),%eax
08158912 +0x1571:  add    $0xc,%eax
08158915 +0x1574:  pop    %ebp
08158916 +0x1575:  ret
08158917 +0x1576:  nop
08158918 +0x1577:  push   %ebp
08158919 +0x1578:  mov    %esp,%ebp
0815891b +0x157a:  mov    0x8(%ebp),%eax
0815891e +0x157d:  add    $0x8,%eax
08158921 +0x1580:  pop    %ebp
08158922 +0x1581:  ret
08158923 +0x1582:  nop
08158924 +0x1583:  push   %ebp
08158925 +0x1584:  mov    %esp,%ebp
08158927 +0x1586:  mov    0x8(%ebp),%eax
0815892a +0x1589:  add    $0x10,%eax
0815892d +0x158c:  pop    %ebp
0815892e +0x158d:  ret
0815892f +0x158e:  nop
08158930 +0x158f:  push   %ebp
08158931 +0x1590:  mov    %esp,%ebp
08158933 +0x1592:  mov    0x8(%ebp),%eax
08158936 +0x1595:  add    $0x4,%eax
08158939 +0x1598:  pop    %ebp
0815893a +0x1599:  ret
0815893b +0x159a:  nop
0815893c +0x159b:  push   %ebp
0815893d +0x159c:  mov    %esp,%ebp
0815893f +0x159e:  mov    0x8(%ebp),%eax
08158942 +0x15a1:  add    $0xc,%eax
08158945 +0x15a4:  pop    %ebp
08158946 +0x15a5:  ret
08158947 +0x15a6:  nop
08158948 +0x15a7:  push   %ebp
08158949 +0x15a8:  mov    %esp,%ebp
0815894b +0x15aa:  mov    0x8(%ebp),%eax
0815894e +0x15ad:  add    $0x8,%eax
08158951 +0x15b0:  pop    %ebp
08158952 +0x15b1:  ret
08158953 +0x15b2:  nop
08158954 +0x15b3:  push   %ebp
08158955 +0x15b4:  mov    %esp,%ebp
08158957 +0x15b6:  mov    0x8(%ebp),%eax
0815895a +0x15b9:  add    $0x10,%eax
0815895d +0x15bc:  pop    %ebp
0815895e +0x15bd:  ret
0815895f +0x15be:  nop
08158960 +0x15bf:  push   %ebp
08158961 +0x15c0:  mov    %esp,%ebp
08158963 +0x15c2:  push   %ebx
08158964 +0x15c3:  sub    $0x14,%esp
08158967 +0x15c6:  mov    0x8(%ebp),%ebx
0815896a +0x15c9:  jmp    081589b8 <+0x1617>
0815896c +0x15cb:  mov    0x10(%ebp),%eax
0815896f +0x15ce:  mov    %eax,(%esp)
08158972 +0x15d1:  call   081594f0 <+0x214f>
08158977 +0x15d6:  mov    0xc(%ebp),%edx
0815897a +0x15d9:  mov    0x18(%ebp),%ecx
0815897d +0x15dc:  mov    %ecx,0x8(%esp)
08158981 +0x15e0:  mov    %eax,0x4(%esp)
08158985 +0x15e4:  mov    %edx,(%esp)
08158988 +0x15e7:  call   080e36fc <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x14a2>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x14a2
0815898d +0x15ec:  xor    $0x1,%eax
08158990 +0x15ef:  test   %al,%al
08158992 +0x15f1:  je     081589aa <+0x1609>
08158994 +0x15f3:  mov    0x10(%ebp),%eax
08158997 +0x15f6:  mov    %eax,0x14(%ebp)
0815899a +0x15f9:  mov    0x10(%ebp),%eax
0815899d +0x15fc:  mov    %eax,(%esp)
081589a0 +0x15ff:  call   08158820 <+0x147f>
081589a5 +0x1604:  mov    %eax,0x10(%ebp)
081589a8 +0x1607:  jmp    081589b8 <+0x1617>
081589aa +0x1609:  mov    0x10(%ebp),%eax
081589ad +0x160c:  mov    %eax,(%esp)
081589b0 +0x160f:  call   08158815 <+0x1474>
081589b5 +0x1614:  mov    %eax,0x10(%ebp)
081589b8 +0x1617:  cmpl   $0x0,0x10(%ebp)
081589bc +0x161b:  setne  %al
081589bf +0x161e:  test   %al,%al
081589c1 +0x1620:  jne    0815896c <+0x15cb>
081589c3 +0x1622:  mov    0x14(%ebp),%eax
081589c6 +0x1625:  mov    %eax,0x4(%esp)
081589ca +0x1629:  mov    %ebx,(%esp)
081589cd +0x162c:  call   081589fe <+0x165d>
081589d2 +0x1631:  mov    %ebx,%eax
081589d4 +0x1633:  add    $0x14,%esp
081589d7 +0x1636:  pop    %ebx
081589d8 +0x1637:  pop    %ebp
081589d9 +0x1638:  ret    $0x4
081589dc +0x163b:  push   %ebp
081589dd +0x163c:  mov    %esp,%ebp
081589df +0x163e:  sub    $0x28,%esp
081589e2 +0x1641:  mov    0x8(%ebp),%eax
081589e5 +0x1644:  mov    %eax,(%esp)
081589e8 +0x1647:  call   08159512 <+0x2171>
081589ed +0x164c:  mov    %eax,0x4(%esp)
081589f1 +0x1650:  lea    -0x9(%ebp),%eax
081589f4 +0x1653:  mov    %eax,(%esp)
081589f7 +0x1656:  call   0815951e <+0x217d>
081589fc +0x165b:  leave
081589fd +0x165c:  ret
081589fe +0x165d:  push   %ebp
081589ff +0x165e:  mov    %esp,%ebp
08158a01 +0x1660:  mov    0xc(%ebp),%edx
08158a04 +0x1663:  mov    0x8(%ebp),%eax
08158a07 +0x1666:  mov    %edx,(%eax)
08158a09 +0x1668:  pop    %ebp
08158a0a +0x1669:  ret
08158a0b +0x166a:  nop
08158a0c +0x166b:  push   %ebp
08158a0d +0x166c:  mov    %esp,%ebp
08158a0f +0x166e:  push   %esi
08158a10 +0x166f:  push   %ebx
08158a11 +0x1670:  sub    $0x20,%esp
08158a14 +0x1673:  mov    0x8(%ebp),%esi
08158a17 +0x1676:  mov    0xc(%ebp),%eax
08158a1a +0x1679:  mov    %eax,(%esp)
08158a1d +0x167c:  call   08158900 <+0x155f>
08158a22 +0x1681:  mov    %eax,%ebx
08158a24 +0x1683:  mov    0xc(%ebp),%eax
08158a27 +0x1686:  mov    %eax,(%esp)
08158a2a +0x1689:  call   08157f20 <+0xb7f>
08158a2f +0x168e:  mov    0x10(%ebp),%edx
08158a32 +0x1691:  mov    %edx,0x10(%esp)
08158a36 +0x1695:  mov    %ebx,0xc(%esp)
08158a3a +0x1699:  mov    %eax,0x8(%esp)
08158a3e +0x169d:  mov    0xc(%ebp),%eax
08158a41 +0x16a0:  mov    %eax,0x4(%esp)
08158a45 +0x16a4:  mov    %esi,(%esp)
08158a48 +0x16a7:  call   08158960 <+0x15bf>
08158a4d +0x16ac:  sub    $0x4,%esp
08158a50 +0x16af:  mov    %esi,%eax
08158a52 +0x16b1:  lea    -0x8(%ebp),%esp
08158a55 +0x16b4:  add    $0x0,%esp
08158a58 +0x16b7:  pop    %ebx
08158a59 +0x16b8:  pop    %esi
08158a5a +0x16b9:  pop    %ebp
08158a5b +0x16ba:  ret    $0x4
08158a5e +0x16bd:  push   %ebp
08158a5f +0x16be:  mov    %esp,%ebp
08158a61 +0x16c0:  mov    0x8(%ebp),%eax
08158a64 +0x16c3:  pop    %ebp
08158a65 +0x16c4:  ret    $0x4
08158a68 +0x16c7:  push   %ebp
08158a69 +0x16c8:  mov    %esp,%ebp
08158a6b +0x16ca:  mov    0x8(%ebp),%eax
08158a6e +0x16cd:  pop    %ebp
08158a6f +0x16ce:  ret
08158a70 +0x16cf:  push   %ebp
08158a71 +0x16d0:  mov    %esp,%ebp
08158a73 +0x16d2:  mov    0xc(%ebp),%eax
08158a76 +0x16d5:  mov    (%eax),%edx
08158a78 +0x16d7:  mov    0x8(%ebp),%eax
08158a7b +0x16da:  mov    %edx,(%eax)
08158a7d +0x16dc:  pop    %ebp
08158a7e +0x16dd:  ret
08158a7f +0x16de:  nop
08158a80 +0x16df:  push   %ebp
08158a81 +0x16e0:  mov    %esp,%ebp
08158a83 +0x16e2:  push   %esi
08158a84 +0x16e3:  push   %ebx
08158a85 +0x16e4:  sub    $0x50,%esp
08158a88 +0x16e7:  mov    0x8(%ebp),%ebx
08158a8b +0x16ea:  mov    0x10(%ebp),%esi
08158a8e +0x16ed:  mov    0xc(%ebp),%eax
08158a91 +0x16f0:  mov    %eax,(%esp)
08158a94 +0x16f3:  call   08158900 <+0x155f>
08158a99 +0x16f8:  cmp    %eax,%esi
08158a9b +0x16fa:  sete   %al
08158a9e +0x16fd:  test   %al,%al
08158aa0 +0x16ff:  je     08158b62 <+0x17c1>
08158aa6 +0x1705:  mov    0xc(%ebp),%eax
08158aa9 +0x1708:  mov    %eax,(%esp)
08158aac +0x170b:  call   08158470 <+0x10cf>
08158ab1 +0x1710:  test   %eax,%eax
08158ab3 +0x1712:  je     08158afc <+0x175b>
08158ab5 +0x1714:  mov    0x14(%ebp),%eax
08158ab8 +0x1717:  mov    %eax,0x4(%esp)
08158abc +0x171b:  lea    -0x29(%ebp),%eax
08158abf +0x171e:  mov    %eax,(%esp)
08158ac2 +0x1721:  call   0815951e <+0x217d>
08158ac7 +0x1726:  mov    %eax,%esi
08158ac9 +0x1728:  mov    0xc(%ebp),%eax
08158acc +0x172b:  mov    %eax,(%esp)
08158acf +0x172e:  call   08158924 <+0x1583>
08158ad4 +0x1733:  mov    (%eax),%eax
08158ad6 +0x1735:  mov    %eax,(%esp)
08158ad9 +0x1738:  call   081589dc <+0x163b>
08158ade +0x173d:  mov    0xc(%ebp),%edx
08158ae1 +0x1740:  mov    %esi,0x8(%esp)
08158ae5 +0x1744:  mov    %eax,0x4(%esp)
08158ae9 +0x1748:  mov    %edx,(%esp)
08158aec +0x174b:  call   080e36fc <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x14a2>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x14a2
08158af1 +0x1750:  test   %al,%al
08158af3 +0x1752:  je     08158afc <+0x175b>
08158af5 +0x1754:  mov    $0x1,%eax
08158afa +0x1759:  jmp    08158b01 <+0x1760>
08158afc +0x175b:  mov    $0x0,%eax
08158b01 +0x1760:  test   %al,%al
08158b03 +0x1762:  je     08158b3c <+0x179b>
08158b05 +0x1764:  mov    0xc(%ebp),%eax
08158b08 +0x1767:  mov    %eax,(%esp)
08158b0b +0x176a:  call   08158924 <+0x1583>
08158b10 +0x176f:  mov    (%eax),%eax
08158b12 +0x1771:  mov    0x14(%ebp),%edx
08158b15 +0x1774:  mov    %edx,0x10(%esp)
08158b19 +0x1778:  mov    %eax,0xc(%esp)
08158b1d +0x177c:  movl   $0x0,0x8(%esp)
08158b25 +0x1784:  mov    0xc(%ebp),%eax
08158b28 +0x1787:  mov    %eax,0x4(%esp)
08158b2c +0x178b:  mov    %ebx,(%esp)
08158b2f +0x178e:  call   08159526 <+0x2185>
08158b34 +0x1793:  sub    $0x4,%esp
08158b37 +0x1796:  jmp    08158e37 <+0x1a96>
08158b3c +0x179b:  lea    -0x28(%ebp),%eax
08158b3f +0x179e:  mov    0x14(%ebp),%edx
08158b42 +0x17a1:  mov    %edx,0x8(%esp)
08158b46 +0x17a5:  mov    0xc(%ebp),%edx
08158b49 +0x17a8:  mov    %edx,0x4(%esp)
08158b4d +0x17ac:  mov    %eax,(%esp)
08158b50 +0x17af:  call   081595ee <+0x224d>
08158b55 +0x17b4:  sub    $0x4,%esp
08158b58 +0x17b7:  mov    -0x28(%ebp),%eax
08158b5b +0x17ba:  mov    %eax,(%ebx)
08158b5d +0x17bc:  jmp    08158e37 <+0x1a96>
08158b62 +0x17c1:  mov    0x10(%ebp),%eax
08158b65 +0x17c4:  mov    %eax,(%esp)
08158b68 +0x17c7:  call   081589dc <+0x163b>
08158b6d +0x17cc:  mov    %eax,%esi
08158b6f +0x17ce:  mov    0x14(%ebp),%eax
08158b72 +0x17d1:  mov    %eax,0x4(%esp)
08158b76 +0x17d5:  lea    -0x1e(%ebp),%eax
08158b79 +0x17d8:  mov    %eax,(%esp)
08158b7c +0x17db:  call   0815951e <+0x217d>
08158b81 +0x17e0:  mov    0xc(%ebp),%edx
08158b84 +0x17e3:  mov    %esi,0x8(%esp)
08158b88 +0x17e7:  mov    %eax,0x4(%esp)
08158b8c +0x17eb:  mov    %edx,(%esp)
08158b8f +0x17ee:  call   080e36fc <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x14a2>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x14a2
08158b94 +0x17f3:  test   %al,%al
08158b96 +0x17f5:  je     08158cce <+0x192d>
08158b9c +0x17fb:  mov    0x10(%ebp),%eax
08158b9f +0x17fe:  mov    %eax,-0x30(%ebp)
08158ba2 +0x1801:  mov    0x10(%ebp),%esi
08158ba5 +0x1804:  mov    0xc(%ebp),%eax
08158ba8 +0x1807:  mov    %eax,(%esp)
08158bab +0x180a:  call   0815890c <+0x156b>
08158bb0 +0x180f:  mov    (%eax),%eax
08158bb2 +0x1811:  cmp    %eax,%esi
08158bb4 +0x1813:  sete   %al
08158bb7 +0x1816:  test   %al,%al
08158bb9 +0x1818:  je     08158bfb <+0x185a>
08158bbb +0x181a:  mov    0xc(%ebp),%eax
08158bbe +0x181d:  mov    %eax,(%esp)
08158bc1 +0x1820:  call   0815890c <+0x156b>
08158bc6 +0x1825:  mov    (%eax),%esi
08158bc8 +0x1827:  mov    0xc(%ebp),%eax
08158bcb +0x182a:  mov    %eax,(%esp)
08158bce +0x182d:  call   0815890c <+0x156b>
08158bd3 +0x1832:  mov    (%eax),%eax
08158bd5 +0x1834:  mov    0x14(%ebp),%edx
08158bd8 +0x1837:  mov    %edx,0x10(%esp)
08158bdc +0x183b:  mov    %esi,0xc(%esp)
08158be0 +0x183f:  mov    %eax,0x8(%esp)
08158be4 +0x1843:  mov    0xc(%ebp),%eax
08158be7 +0x1846:  mov    %eax,0x4(%esp)
08158beb +0x184a:  mov    %ebx,(%esp)
08158bee +0x184d:  call   08159526 <+0x2185>
08158bf3 +0x1852:  sub    $0x4,%esp
08158bf6 +0x1855:  jmp    08158e37 <+0x1a96>
08158bfb +0x185a:  mov    0x14(%ebp),%eax
08158bfe +0x185d:  mov    %eax,0x4(%esp)
08158c02 +0x1861:  lea    -0x1d(%ebp),%eax
08158c05 +0x1864:  mov    %eax,(%esp)
08158c08 +0x1867:  call   0815951e <+0x217d>
08158c0d +0x186c:  mov    %eax,%esi
08158c0f +0x186e:  lea    -0x30(%ebp),%eax
08158c12 +0x1871:  mov    %eax,(%esp)
08158c15 +0x1874:  call   081597be <+0x241d>
08158c1a +0x1879:  mov    (%eax),%eax
08158c1c +0x187b:  mov    %eax,(%esp)
08158c1f +0x187e:  call   081589dc <+0x163b>
08158c24 +0x1883:  mov    0xc(%ebp),%edx
08158c27 +0x1886:  mov    %esi,0x8(%esp)
08158c2b +0x188a:  mov    %eax,0x4(%esp)
08158c2f +0x188e:  mov    %edx,(%esp)
08158c32 +0x1891:  call   080e36fc <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x14a2>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x14a2
08158c37 +0x1896:  test   %al,%al
08158c39 +0x1898:  je     08158ca8 <+0x1907>
08158c3b +0x189a:  mov    -0x30(%ebp),%eax
08158c3e +0x189d:  mov    %eax,(%esp)
08158c41 +0x18a0:  call   081597db <+0x243a>
08158c46 +0x18a5:  test   %eax,%eax
08158c48 +0x18a7:  sete   %al
08158c4b +0x18aa:  test   %al,%al
08158c4d +0x18ac:  je     08158c7c <+0x18db>
08158c4f +0x18ae:  mov    -0x30(%ebp),%eax
08158c52 +0x18b1:  mov    0x14(%ebp),%edx
08158c55 +0x18b4:  mov    %edx,0x10(%esp)
08158c59 +0x18b8:  mov    %eax,0xc(%esp)
08158c5d +0x18bc:  movl   $0x0,0x8(%esp)
08158c65 +0x18c4:  mov    0xc(%ebp),%eax
08158c68 +0x18c7:  mov    %eax,0x4(%esp)
08158c6c +0x18cb:  mov    %ebx,(%esp)
08158c6f +0x18ce:  call   08159526 <+0x2185>
08158c74 +0x18d3:  sub    $0x4,%esp
08158c77 +0x18d6:  jmp    08158e37 <+0x1a96>
08158c7c +0x18db:  mov    0x10(%ebp),%edx
08158c7f +0x18de:  mov    0x10(%ebp),%eax
08158c82 +0x18e1:  mov    0x14(%ebp),%ecx
08158c85 +0x18e4:  mov    %ecx,0x10(%esp)
08158c89 +0x18e8:  mov    %edx,0xc(%esp)
08158c8d +0x18ec:  mov    %eax,0x8(%esp)
08158c91 +0x18f0:  mov    0xc(%ebp),%eax
08158c94 +0x18f3:  mov    %eax,0x4(%esp)
08158c98 +0x18f7:  mov    %ebx,(%esp)
08158c9b +0x18fa:  call   08159526 <+0x2185>
08158ca0 +0x18ff:  sub    $0x4,%esp
08158ca3 +0x1902:  jmp    08158e37 <+0x1a96>
08158ca8 +0x1907:  lea    -0x1c(%ebp),%eax
08158cab +0x190a:  mov    0x14(%ebp),%edx
08158cae +0x190d:  mov    %edx,0x8(%esp)
08158cb2 +0x1911:  mov    0xc(%ebp),%edx
08158cb5 +0x1914:  mov    %edx,0x4(%esp)
08158cb9 +0x1918:  mov    %eax,(%esp)
08158cbc +0x191b:  call   081595ee <+0x224d>
08158cc1 +0x1920:  sub    $0x4,%esp
08158cc4 +0x1923:  mov    -0x1c(%ebp),%eax
08158cc7 +0x1926:  mov    %eax,(%ebx)
08158cc9 +0x1928:  jmp    08158e37 <+0x1a96>
08158cce +0x192d:  mov    0x14(%ebp),%eax
08158cd1 +0x1930:  mov    %eax,0x4(%esp)
08158cd5 +0x1934:  lea    -0x12(%ebp),%eax
08158cd8 +0x1937:  mov    %eax,(%esp)
08158cdb +0x193a:  call   0815951e <+0x217d>
08158ce0 +0x193f:  mov    %eax,%esi
08158ce2 +0x1941:  mov    0x10(%ebp),%eax
08158ce5 +0x1944:  mov    %eax,(%esp)
08158ce8 +0x1947:  call   081589dc <+0x163b>
08158ced +0x194c:  mov    0xc(%ebp),%edx
08158cf0 +0x194f:  mov    %esi,0x8(%esp)
08158cf4 +0x1953:  mov    %eax,0x4(%esp)
08158cf8 +0x1957:  mov    %edx,(%esp)
08158cfb +0x195a:  call   080e36fc <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x14a2>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x14a2
08158d00 +0x195f:  test   %al,%al
08158d02 +0x1961:  je     08158e28 <+0x1a87>
08158d08 +0x1967:  mov    0x10(%ebp),%eax
08158d0b +0x196a:  mov    %eax,-0x34(%ebp)
08158d0e +0x196d:  mov    0x10(%ebp),%esi
08158d11 +0x1970:  mov    0xc(%ebp),%eax
08158d14 +0x1973:  mov    %eax,(%esp)
08158d17 +0x1976:  call   08158924 <+0x1583>
08158d1c +0x197b:  mov    (%eax),%eax
08158d1e +0x197d:  cmp    %eax,%esi
08158d20 +0x197f:  sete   %al
08158d23 +0x1982:  test   %al,%al
08158d25 +0x1984:  je     08158d5e <+0x19bd>
08158d27 +0x1986:  mov    0xc(%ebp),%eax
08158d2a +0x1989:  mov    %eax,(%esp)
08158d2d +0x198c:  call   08158924 <+0x1583>
08158d32 +0x1991:  mov    (%eax),%eax
08158d34 +0x1993:  mov    0x14(%ebp),%edx
08158d37 +0x1996:  mov    %edx,0x10(%esp)
08158d3b +0x199a:  mov    %eax,0xc(%esp)
08158d3f +0x199e:  movl   $0x0,0x8(%esp)
08158d47 +0x19a6:  mov    0xc(%ebp),%eax
08158d4a +0x19a9:  mov    %eax,0x4(%esp)
08158d4e +0x19ad:  mov    %ebx,(%esp)
08158d51 +0x19b0:  call   08159526 <+0x2185>
08158d56 +0x19b5:  sub    $0x4,%esp
08158d59 +0x19b8:  jmp    08158e37 <+0x1a96>
08158d5e +0x19bd:  lea    -0x34(%ebp),%eax
08158d61 +0x19c0:  mov    %eax,(%esp)
08158d64 +0x19c3:  call   081597e6 <+0x2445>
08158d69 +0x19c8:  mov    (%eax),%eax
08158d6b +0x19ca:  mov    %eax,(%esp)
08158d6e +0x19cd:  call   081589dc <+0x163b>
08158d73 +0x19d2:  mov    %eax,%esi
08158d75 +0x19d4:  mov    0x14(%ebp),%eax
08158d78 +0x19d7:  mov    %eax,0x4(%esp)
08158d7c +0x19db:  lea    -0x11(%ebp),%eax
08158d7f +0x19de:  mov    %eax,(%esp)
08158d82 +0x19e1:  call   0815951e <+0x217d>
08158d87 +0x19e6:  mov    0xc(%ebp),%edx
08158d8a +0x19e9:  mov    %esi,0x8(%esp)
08158d8e +0x19ed:  mov    %eax,0x4(%esp)
08158d92 +0x19f1:  mov    %edx,(%esp)
08158d95 +0x19f4:  call   080e36fc <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x14a2>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x14a2
08158d9a +0x19f9:  test   %al,%al
08158d9c +0x19fb:  je     08158e05 <+0x1a64>
08158d9e +0x19fd:  mov    0x10(%ebp),%eax
08158da1 +0x1a00:  mov    %eax,(%esp)
08158da4 +0x1a03:  call   081597db <+0x243a>
08158da9 +0x1a08:  test   %eax,%eax
08158dab +0x1a0a:  sete   %al
08158dae +0x1a0d:  test   %al,%al
08158db0 +0x1a0f:  je     08158ddc <+0x1a3b>
08158db2 +0x1a11:  mov    0x10(%ebp),%eax
08158db5 +0x1a14:  mov    0x14(%ebp),%edx
08158db8 +0x1a17:  mov    %edx,0x10(%esp)
08158dbc +0x1a1b:  mov    %eax,0xc(%esp)
08158dc0 +0x1a1f:  movl   $0x0,0x8(%esp)
08158dc8 +0x1a27:  mov    0xc(%ebp),%eax
08158dcb +0x1a2a:  mov    %eax,0x4(%esp)
08158dcf +0x1a2e:  mov    %ebx,(%esp)
08158dd2 +0x1a31:  call   08159526 <+0x2185>
08158dd7 +0x1a36:  sub    $0x4,%esp
08158dda +0x1a39:  jmp    08158e37 <+0x1a96>
08158ddc +0x1a3b:  mov    -0x34(%ebp),%edx
08158ddf +0x1a3e:  mov    -0x34(%ebp),%eax
08158de2 +0x1a41:  mov    0x14(%ebp),%ecx
08158de5 +0x1a44:  mov    %ecx,0x10(%esp)
08158de9 +0x1a48:  mov    %edx,0xc(%esp)
08158ded +0x1a4c:  mov    %eax,0x8(%esp)
08158df1 +0x1a50:  mov    0xc(%ebp),%eax
08158df4 +0x1a53:  mov    %eax,0x4(%esp)
08158df8 +0x1a57:  mov    %ebx,(%esp)
08158dfb +0x1a5a:  call   08159526 <+0x2185>
08158e00 +0x1a5f:  sub    $0x4,%esp
08158e03 +0x1a62:  jmp    08158e37 <+0x1a96>
08158e05 +0x1a64:  lea    -0x10(%ebp),%eax
08158e08 +0x1a67:  mov    0x14(%ebp),%edx
08158e0b +0x1a6a:  mov    %edx,0x8(%esp)
08158e0f +0x1a6e:  mov    0xc(%ebp),%edx
08158e12 +0x1a71:  mov    %edx,0x4(%esp)
08158e16 +0x1a75:  mov    %eax,(%esp)
08158e19 +0x1a78:  call   081595ee <+0x224d>
08158e1e +0x1a7d:  sub    $0x4,%esp
08158e21 +0x1a80:  mov    -0x10(%ebp),%eax
08158e24 +0x1a83:  mov    %eax,(%ebx)
08158e26 +0x1a85:  jmp    08158e37 <+0x1a96>
08158e28 +0x1a87:  mov    0x10(%ebp),%eax
08158e2b +0x1a8a:  mov    %eax,0x4(%esp)
08158e2f +0x1a8e:  mov    %ebx,(%esp)
08158e32 +0x1a91:  call   081589fe <+0x165d>
08158e37 +0x1a96:  mov    %ebx,%eax
08158e39 +0x1a98:  lea    -0x8(%ebp),%esp
08158e3c +0x1a9b:  add    $0x0,%esp
08158e3f +0x1a9e:  pop    %ebx
08158e40 +0x1a9f:  pop    %esi
08158e41 +0x1aa0:  pop    %ebp
08158e42 +0x1aa1:  ret    $0x4
08158e45 +0x1aa4:  nop
08158e46 +0x1aa5:  push   %ebp
08158e47 +0x1aa6:  mov    %esp,%ebp
08158e49 +0x1aa8:  push   %ebx
08158e4a +0x1aa9:  sub    $0x14,%esp
08158e4d +0x1aac:  mov    0x8(%ebp),%ebx
08158e50 +0x1aaf:  jmp    08158e9e <+0x1afd>
08158e52 +0x1ab1:  mov    0x10(%ebp),%eax
08158e55 +0x1ab4:  mov    %eax,(%esp)
08158e58 +0x1ab7:  call   08159803 <+0x2462>
08158e5d +0x1abc:  mov    0xc(%ebp),%edx
08158e60 +0x1abf:  mov    0x18(%ebp),%ecx
08158e63 +0x1ac2:  mov    %ecx,0x8(%esp)
08158e67 +0x1ac6:  mov    %eax,0x4(%esp)
08158e6b +0x1aca:  mov    %edx,(%esp)
08158e6e +0x1acd:  call   081583b0 <+0x100f>
08158e73 +0x1ad2:  xor    $0x1,%eax
08158e76 +0x1ad5:  test   %al,%al
08158e78 +0x1ad7:  je     08158e90 <+0x1aef>
08158e7a +0x1ad9:  mov    0x10(%ebp),%eax
08158e7d +0x1adc:  mov    %eax,0x14(%ebp)
08158e80 +0x1adf:  mov    0x10(%ebp),%eax
08158e83 +0x1ae2:  mov    %eax,(%esp)
08158e86 +0x1ae5:  call   081588c0 <+0x151f>
08158e8b +0x1aea:  mov    %eax,0x10(%ebp)
08158e8e +0x1aed:  jmp    08158e9e <+0x1afd>
08158e90 +0x1aef:  mov    0x10(%ebp),%eax
08158e93 +0x1af2:  mov    %eax,(%esp)
08158e96 +0x1af5:  call   081588b5 <+0x1514>
08158e9b +0x1afa:  mov    %eax,0x10(%ebp)
08158e9e +0x1afd:  cmpl   $0x0,0x10(%ebp)
08158ea2 +0x1b01:  setne  %al
08158ea5 +0x1b04:  test   %al,%al
08158ea7 +0x1b06:  jne    08158e52 <+0x1ab1>
08158ea9 +0x1b08:  mov    0x14(%ebp),%eax
08158eac +0x1b0b:  mov    %eax,0x4(%esp)
08158eb0 +0x1b0f:  mov    %ebx,(%esp)
08158eb3 +0x1b12:  call   08158ee4 <+0x1b43>
08158eb8 +0x1b17:  mov    %ebx,%eax
08158eba +0x1b19:  add    $0x14,%esp
08158ebd +0x1b1c:  pop    %ebx
08158ebe +0x1b1d:  pop    %ebp
08158ebf +0x1b1e:  ret    $0x4
08158ec2 +0x1b21:  push   %ebp
08158ec3 +0x1b22:  mov    %esp,%ebp
08158ec5 +0x1b24:  sub    $0x28,%esp
08158ec8 +0x1b27:  mov    0x8(%ebp),%eax
08158ecb +0x1b2a:  mov    %eax,(%esp)
08158ece +0x1b2d:  call   08159825 <+0x2484>
08158ed3 +0x1b32:  mov    %eax,0x4(%esp)
08158ed7 +0x1b36:  lea    -0x9(%ebp),%eax
08158eda +0x1b39:  mov    %eax,(%esp)
08158edd +0x1b3c:  call   08159830 <+0x248f>
08158ee2 +0x1b41:  leave
08158ee3 +0x1b42:  ret
08158ee4 +0x1b43:  push   %ebp
08158ee5 +0x1b44:  mov    %esp,%ebp
08158ee7 +0x1b46:  mov    0xc(%ebp),%edx
08158eea +0x1b49:  mov    0x8(%ebp),%eax
08158eed +0x1b4c:  mov    %edx,(%eax)
08158eef +0x1b4e:  pop    %ebp
08158ef0 +0x1b4f:  ret
08158ef1 +0x1b50:  nop
08158ef2 +0x1b51:  push   %ebp
08158ef3 +0x1b52:  mov    %esp,%ebp
08158ef5 +0x1b54:  push   %esi
08158ef6 +0x1b55:  push   %ebx
08158ef7 +0x1b56:  sub    $0x20,%esp
08158efa +0x1b59:  mov    0x8(%ebp),%esi
08158efd +0x1b5c:  mov    0xc(%ebp),%eax
08158f00 +0x1b5f:  mov    %eax,(%esp)
08158f03 +0x1b62:  call   08158930 <+0x158f>
08158f08 +0x1b67:  mov    %eax,%ebx
08158f0a +0x1b69:  mov    0xc(%ebp),%eax
08158f0d +0x1b6c:  mov    %eax,(%esp)
08158f10 +0x1b6f:  call   08157faa <+0xc09>
08158f15 +0x1b74:  mov    0x10(%ebp),%edx
08158f18 +0x1b77:  mov    %edx,0x10(%esp)
08158f1c +0x1b7b:  mov    %ebx,0xc(%esp)
08158f20 +0x1b7f:  mov    %eax,0x8(%esp)
08158f24 +0x1b83:  mov    0xc(%ebp),%eax
08158f27 +0x1b86:  mov    %eax,0x4(%esp)
08158f2b +0x1b8a:  mov    %esi,(%esp)
08158f2e +0x1b8d:  call   08158e46 <+0x1aa5>
08158f33 +0x1b92:  sub    $0x4,%esp
08158f36 +0x1b95:  mov    %esi,%eax
08158f38 +0x1b97:  lea    -0x8(%ebp),%esp
08158f3b +0x1b9a:  add    $0x0,%esp
08158f3e +0x1b9d:  pop    %ebx
08158f3f +0x1b9e:  pop    %esi
08158f40 +0x1b9f:  pop    %ebp
08158f41 +0x1ba0:  ret    $0x4
08158f44 +0x1ba3:  push   %ebp
08158f45 +0x1ba4:  mov    %esp,%ebp
08158f47 +0x1ba6:  mov    0x8(%ebp),%eax
08158f4a +0x1ba9:  pop    %ebp
08158f4b +0x1baa:  ret    $0x4
08158f4e +0x1bad:  push   %ebp
08158f4f +0x1bae:  mov    %esp,%ebp
08158f51 +0x1bb0:  mov    0x8(%ebp),%eax
08158f54 +0x1bb3:  pop    %ebp
08158f55 +0x1bb4:  ret
08158f56 +0x1bb5:  push   %ebp
08158f57 +0x1bb6:  mov    %esp,%ebp
08158f59 +0x1bb8:  mov    0x8(%ebp),%eax
08158f5c +0x1bbb:  pop    %ebp
08158f5d +0x1bbc:  ret
08158f5e +0x1bbd:  push   %ebp
08158f5f +0x1bbe:  mov    %esp,%ebp
08158f61 +0x1bc0:  mov    0xc(%ebp),%eax
08158f64 +0x1bc3:  mov    (%eax),%edx
08158f66 +0x1bc5:  mov    0x8(%ebp),%eax
08158f69 +0x1bc8:  mov    %edx,(%eax)
08158f6b +0x1bca:  pop    %ebp
08158f6c +0x1bcb:  ret
08158f6d +0x1bcc:  nop
08158f6e +0x1bcd:  push   %ebp
08158f6f +0x1bce:  mov    %esp,%ebp
08158f71 +0x1bd0:  push   %esi
08158f72 +0x1bd1:  push   %ebx
08158f73 +0x1bd2:  sub    $0x50,%esp
08158f76 +0x1bd5:  mov    0x8(%ebp),%ebx
08158f79 +0x1bd8:  mov    0x10(%ebp),%esi
08158f7c +0x1bdb:  mov    0xc(%ebp),%eax
08158f7f +0x1bde:  mov    %eax,(%esp)
08158f82 +0x1be1:  call   08158930 <+0x158f>
08158f87 +0x1be6:  cmp    %eax,%esi
08158f89 +0x1be8:  sete   %al
08158f8c +0x1beb:  test   %al,%al
08158f8e +0x1bed:  je     08159050 <+0x1caf>
08158f94 +0x1bf3:  mov    0xc(%ebp),%eax
08158f97 +0x1bf6:  mov    %eax,(%esp)
08158f9a +0x1bf9:  call   0815850c <+0x116b>
08158f9f +0x1bfe:  test   %eax,%eax
08158fa1 +0x1c00:  je     08158fea <+0x1c49>
08158fa3 +0x1c02:  mov    0x14(%ebp),%eax
08158fa6 +0x1c05:  mov    %eax,0x4(%esp)
08158faa +0x1c09:  lea    -0x29(%ebp),%eax
08158fad +0x1c0c:  mov    %eax,(%esp)
08158fb0 +0x1c0f:  call   08159830 <+0x248f>
08158fb5 +0x1c14:  mov    %eax,%esi
08158fb7 +0x1c16:  mov    0xc(%ebp),%eax
08158fba +0x1c19:  mov    %eax,(%esp)
08158fbd +0x1c1c:  call   08158954 <+0x15b3>
08158fc2 +0x1c21:  mov    (%eax),%eax
08158fc4 +0x1c23:  mov    %eax,(%esp)
08158fc7 +0x1c26:  call   08158ec2 <+0x1b21>
08158fcc +0x1c2b:  mov    0xc(%ebp),%edx
08158fcf +0x1c2e:  mov    %esi,0x8(%esp)
08158fd3 +0x1c32:  mov    %eax,0x4(%esp)
08158fd7 +0x1c36:  mov    %edx,(%esp)
08158fda +0x1c39:  call   081583b0 <+0x100f>
08158fdf +0x1c3e:  test   %al,%al
08158fe1 +0x1c40:  je     08158fea <+0x1c49>
08158fe3 +0x1c42:  mov    $0x1,%eax
08158fe8 +0x1c47:  jmp    08158fef <+0x1c4e>
08158fea +0x1c49:  mov    $0x0,%eax
08158fef +0x1c4e:  test   %al,%al
08158ff1 +0x1c50:  je     0815902a <+0x1c89>
08158ff3 +0x1c52:  mov    0xc(%ebp),%eax
08158ff6 +0x1c55:  mov    %eax,(%esp)
08158ff9 +0x1c58:  call   08158954 <+0x15b3>
08158ffe +0x1c5d:  mov    (%eax),%eax
08159000 +0x1c5f:  mov    0x14(%ebp),%edx
08159003 +0x1c62:  mov    %edx,0x10(%esp)
08159007 +0x1c66:  mov    %eax,0xc(%esp)
0815900b +0x1c6a:  movl   $0x0,0x8(%esp)
08159013 +0x1c72:  mov    0xc(%ebp),%eax
08159016 +0x1c75:  mov    %eax,0x4(%esp)
0815901a +0x1c79:  mov    %ebx,(%esp)
0815901d +0x1c7c:  call   08159838 <+0x2497>
08159022 +0x1c81:  sub    $0x4,%esp
08159025 +0x1c84:  jmp    08159325 <+0x1f84>
0815902a +0x1c89:  lea    -0x28(%ebp),%eax
0815902d +0x1c8c:  mov    0x14(%ebp),%edx
08159030 +0x1c8f:  mov    %edx,0x8(%esp)
08159034 +0x1c93:  mov    0xc(%ebp),%edx
08159037 +0x1c96:  mov    %edx,0x4(%esp)
0815903b +0x1c9a:  mov    %eax,(%esp)
0815903e +0x1c9d:  call   08159900 <+0x255f>
08159043 +0x1ca2:  sub    $0x4,%esp
08159046 +0x1ca5:  mov    -0x28(%ebp),%eax
08159049 +0x1ca8:  mov    %eax,(%ebx)
0815904b +0x1caa:  jmp    08159325 <+0x1f84>
08159050 +0x1caf:  mov    0x10(%ebp),%eax
08159053 +0x1cb2:  mov    %eax,(%esp)
08159056 +0x1cb5:  call   08158ec2 <+0x1b21>
0815905b +0x1cba:  mov    %eax,%esi
0815905d +0x1cbc:  mov    0x14(%ebp),%eax
08159060 +0x1cbf:  mov    %eax,0x4(%esp)
08159064 +0x1cc3:  lea    -0x1e(%ebp),%eax
08159067 +0x1cc6:  mov    %eax,(%esp)
0815906a +0x1cc9:  call   08159830 <+0x248f>
0815906f +0x1cce:  mov    0xc(%ebp),%edx
08159072 +0x1cd1:  mov    %esi,0x8(%esp)
08159076 +0x1cd5:  mov    %eax,0x4(%esp)
0815907a +0x1cd9:  mov    %edx,(%esp)
0815907d +0x1cdc:  call   081583b0 <+0x100f>
08159082 +0x1ce1:  test   %al,%al
08159084 +0x1ce3:  je     081591bc <+0x1e1b>
0815908a +0x1ce9:  mov    0x10(%ebp),%eax
0815908d +0x1cec:  mov    %eax,-0x30(%ebp)
08159090 +0x1cef:  mov    0x10(%ebp),%esi
08159093 +0x1cf2:  mov    0xc(%ebp),%eax
08159096 +0x1cf5:  mov    %eax,(%esp)
08159099 +0x1cf8:  call   0815893c <+0x159b>
0815909e +0x1cfd:  mov    (%eax),%eax
081590a0 +0x1cff:  cmp    %eax,%esi
081590a2 +0x1d01:  sete   %al
081590a5 +0x1d04:  test   %al,%al
081590a7 +0x1d06:  je     081590e9 <+0x1d48>
081590a9 +0x1d08:  mov    0xc(%ebp),%eax
081590ac +0x1d0b:  mov    %eax,(%esp)
081590af +0x1d0e:  call   0815893c <+0x159b>
081590b4 +0x1d13:  mov    (%eax),%esi
081590b6 +0x1d15:  mov    0xc(%ebp),%eax
081590b9 +0x1d18:  mov    %eax,(%esp)
081590bc +0x1d1b:  call   0815893c <+0x159b>
081590c1 +0x1d20:  mov    (%eax),%eax
081590c3 +0x1d22:  mov    0x14(%ebp),%edx
081590c6 +0x1d25:  mov    %edx,0x10(%esp)
081590ca +0x1d29:  mov    %esi,0xc(%esp)
081590ce +0x1d2d:  mov    %eax,0x8(%esp)
081590d2 +0x1d31:  mov    0xc(%ebp),%eax
081590d5 +0x1d34:  mov    %eax,0x4(%esp)
081590d9 +0x1d38:  mov    %ebx,(%esp)
081590dc +0x1d3b:  call   08159838 <+0x2497>
081590e1 +0x1d40:  sub    $0x4,%esp
081590e4 +0x1d43:  jmp    08159325 <+0x1f84>
081590e9 +0x1d48:  mov    0x14(%ebp),%eax
081590ec +0x1d4b:  mov    %eax,0x4(%esp)
081590f0 +0x1d4f:  lea    -0x1d(%ebp),%eax
081590f3 +0x1d52:  mov    %eax,(%esp)
081590f6 +0x1d55:  call   08159830 <+0x248f>
081590fb +0x1d5a:  mov    %eax,%esi
081590fd +0x1d5c:  lea    -0x30(%ebp),%eax
08159100 +0x1d5f:  mov    %eax,(%esp)
08159103 +0x1d62:  call   08159ad0 <+0x272f>
08159108 +0x1d67:  mov    (%eax),%eax
0815910a +0x1d69:  mov    %eax,(%esp)
0815910d +0x1d6c:  call   08158ec2 <+0x1b21>
08159112 +0x1d71:  mov    0xc(%ebp),%edx
08159115 +0x1d74:  mov    %esi,0x8(%esp)
08159119 +0x1d78:  mov    %eax,0x4(%esp)
0815911d +0x1d7c:  mov    %edx,(%esp)
08159120 +0x1d7f:  call   081583b0 <+0x100f>
08159125 +0x1d84:  test   %al,%al
08159127 +0x1d86:  je     08159196 <+0x1df5>
08159129 +0x1d88:  mov    -0x30(%ebp),%eax
0815912c +0x1d8b:  mov    %eax,(%esp)
0815912f +0x1d8e:  call   08159aed <+0x274c>
08159134 +0x1d93:  test   %eax,%eax
08159136 +0x1d95:  sete   %al
08159139 +0x1d98:  test   %al,%al
0815913b +0x1d9a:  je     0815916a <+0x1dc9>
0815913d +0x1d9c:  mov    -0x30(%ebp),%eax
08159140 +0x1d9f:  mov    0x14(%ebp),%edx
08159143 +0x1da2:  mov    %edx,0x10(%esp)
08159147 +0x1da6:  mov    %eax,0xc(%esp)
0815914b +0x1daa:  movl   $0x0,0x8(%esp)
08159153 +0x1db2:  mov    0xc(%ebp),%eax
08159156 +0x1db5:  mov    %eax,0x4(%esp)
0815915a +0x1db9:  mov    %ebx,(%esp)
0815915d +0x1dbc:  call   08159838 <+0x2497>
08159162 +0x1dc1:  sub    $0x4,%esp
08159165 +0x1dc4:  jmp    08159325 <+0x1f84>
0815916a +0x1dc9:  mov    0x10(%ebp),%edx
0815916d +0x1dcc:  mov    0x10(%ebp),%eax
08159170 +0x1dcf:  mov    0x14(%ebp),%ecx
08159173 +0x1dd2:  mov    %ecx,0x10(%esp)
08159177 +0x1dd6:  mov    %edx,0xc(%esp)
0815917b +0x1dda:  mov    %eax,0x8(%esp)
0815917f +0x1dde:  mov    0xc(%ebp),%eax
08159182 +0x1de1:  mov    %eax,0x4(%esp)
08159186 +0x1de5:  mov    %ebx,(%esp)
08159189 +0x1de8:  call   08159838 <+0x2497>
0815918e +0x1ded:  sub    $0x4,%esp
08159191 +0x1df0:  jmp    08159325 <+0x1f84>
08159196 +0x1df5:  lea    -0x1c(%ebp),%eax
08159199 +0x1df8:  mov    0x14(%ebp),%edx
0815919c +0x1dfb:  mov    %edx,0x8(%esp)
081591a0 +0x1dff:  mov    0xc(%ebp),%edx
081591a3 +0x1e02:  mov    %edx,0x4(%esp)
081591a7 +0x1e06:  mov    %eax,(%esp)
081591aa +0x1e09:  call   08159900 <+0x255f>
081591af +0x1e0e:  sub    $0x4,%esp
081591b2 +0x1e11:  mov    -0x1c(%ebp),%eax
081591b5 +0x1e14:  mov    %eax,(%ebx)
081591b7 +0x1e16:  jmp    08159325 <+0x1f84>
081591bc +0x1e1b:  mov    0x14(%ebp),%eax
081591bf +0x1e1e:  mov    %eax,0x4(%esp)
081591c3 +0x1e22:  lea    -0x12(%ebp),%eax
081591c6 +0x1e25:  mov    %eax,(%esp)
081591c9 +0x1e28:  call   08159830 <+0x248f>
081591ce +0x1e2d:  mov    %eax,%esi
081591d0 +0x1e2f:  mov    0x10(%ebp),%eax
081591d3 +0x1e32:  mov    %eax,(%esp)
081591d6 +0x1e35:  call   08158ec2 <+0x1b21>
081591db +0x1e3a:  mov    0xc(%ebp),%edx
081591de +0x1e3d:  mov    %esi,0x8(%esp)
081591e2 +0x1e41:  mov    %eax,0x4(%esp)
081591e6 +0x1e45:  mov    %edx,(%esp)
081591e9 +0x1e48:  call   081583b0 <+0x100f>
081591ee +0x1e4d:  test   %al,%al
081591f0 +0x1e4f:  je     08159316 <+0x1f75>
081591f6 +0x1e55:  mov    0x10(%ebp),%eax
081591f9 +0x1e58:  mov    %eax,-0x34(%ebp)
081591fc +0x1e5b:  mov    0x10(%ebp),%esi
081591ff +0x1e5e:  mov    0xc(%ebp),%eax
08159202 +0x1e61:  mov    %eax,(%esp)
08159205 +0x1e64:  call   08158954 <+0x15b3>
0815920a +0x1e69:  mov    (%eax),%eax
0815920c +0x1e6b:  cmp    %eax,%esi
0815920e +0x1e6d:  sete   %al
08159211 +0x1e70:  test   %al,%al
08159213 +0x1e72:  je     0815924c <+0x1eab>
08159215 +0x1e74:  mov    0xc(%ebp),%eax
08159218 +0x1e77:  mov    %eax,(%esp)
0815921b +0x1e7a:  call   08158954 <+0x15b3>
08159220 +0x1e7f:  mov    (%eax),%eax
08159222 +0x1e81:  mov    0x14(%ebp),%edx
08159225 +0x1e84:  mov    %edx,0x10(%esp)
08159229 +0x1e88:  mov    %eax,0xc(%esp)
0815922d +0x1e8c:  movl   $0x0,0x8(%esp)
08159235 +0x1e94:  mov    0xc(%ebp),%eax
08159238 +0x1e97:  mov    %eax,0x4(%esp)
0815923c +0x1e9b:  mov    %ebx,(%esp)
0815923f +0x1e9e:  call   08159838 <+0x2497>
08159244 +0x1ea3:  sub    $0x4,%esp
08159247 +0x1ea6:  jmp    08159325 <+0x1f84>
0815924c +0x1eab:  lea    -0x34(%ebp),%eax
0815924f +0x1eae:  mov    %eax,(%esp)
08159252 +0x1eb1:  call   08159af8 <+0x2757>
08159257 +0x1eb6:  mov    (%eax),%eax
08159259 +0x1eb8:  mov    %eax,(%esp)
0815925c +0x1ebb:  call   08158ec2 <+0x1b21>
08159261 +0x1ec0:  mov    %eax,%esi
08159263 +0x1ec2:  mov    0x14(%ebp),%eax
08159266 +0x1ec5:  mov    %eax,0x4(%esp)
0815926a +0x1ec9:  lea    -0x11(%ebp),%eax
0815926d +0x1ecc:  mov    %eax,(%esp)
08159270 +0x1ecf:  call   08159830 <+0x248f>
08159275 +0x1ed4:  mov    0xc(%ebp),%edx
08159278 +0x1ed7:  mov    %esi,0x8(%esp)
0815927c +0x1edb:  mov    %eax,0x4(%esp)
08159280 +0x1edf:  mov    %edx,(%esp)
08159283 +0x1ee2:  call   081583b0 <+0x100f>
08159288 +0x1ee7:  test   %al,%al
0815928a +0x1ee9:  je     081592f3 <+0x1f52>
0815928c +0x1eeb:  mov    0x10(%ebp),%eax
0815928f +0x1eee:  mov    %eax,(%esp)
08159292 +0x1ef1:  call   08159aed <+0x274c>
08159297 +0x1ef6:  test   %eax,%eax
08159299 +0x1ef8:  sete   %al
0815929c +0x1efb:  test   %al,%al
0815929e +0x1efd:  je     081592ca <+0x1f29>
081592a0 +0x1eff:  mov    0x10(%ebp),%eax
081592a3 +0x1f02:  mov    0x14(%ebp),%edx
081592a6 +0x1f05:  mov    %edx,0x10(%esp)
081592aa +0x1f09:  mov    %eax,0xc(%esp)
081592ae +0x1f0d:  movl   $0x0,0x8(%esp)
081592b6 +0x1f15:  mov    0xc(%ebp),%eax
081592b9 +0x1f18:  mov    %eax,0x4(%esp)
081592bd +0x1f1c:  mov    %ebx,(%esp)
081592c0 +0x1f1f:  call   08159838 <+0x2497>
081592c5 +0x1f24:  sub    $0x4,%esp
081592c8 +0x1f27:  jmp    08159325 <+0x1f84>
081592ca +0x1f29:  mov    -0x34(%ebp),%edx
081592cd +0x1f2c:  mov    -0x34(%ebp),%eax
081592d0 +0x1f2f:  mov    0x14(%ebp),%ecx
081592d3 +0x1f32:  mov    %ecx,0x10(%esp)
081592d7 +0x1f36:  mov    %edx,0xc(%esp)
081592db +0x1f3a:  mov    %eax,0x8(%esp)
081592df +0x1f3e:  mov    0xc(%ebp),%eax
081592e2 +0x1f41:  mov    %eax,0x4(%esp)
081592e6 +0x1f45:  mov    %ebx,(%esp)
081592e9 +0x1f48:  call   08159838 <+0x2497>
081592ee +0x1f4d:  sub    $0x4,%esp
081592f1 +0x1f50:  jmp    08159325 <+0x1f84>
081592f3 +0x1f52:  lea    -0x10(%ebp),%eax
081592f6 +0x1f55:  mov    0x14(%ebp),%edx
081592f9 +0x1f58:  mov    %edx,0x8(%esp)
081592fd +0x1f5c:  mov    0xc(%ebp),%edx
08159300 +0x1f5f:  mov    %edx,0x4(%esp)
08159304 +0x1f63:  mov    %eax,(%esp)
08159307 +0x1f66:  call   08159900 <+0x255f>
0815930c +0x1f6b:  sub    $0x4,%esp
0815930f +0x1f6e:  mov    -0x10(%ebp),%eax
08159312 +0x1f71:  mov    %eax,(%ebx)
08159314 +0x1f73:  jmp    08159325 <+0x1f84>
08159316 +0x1f75:  mov    0x10(%ebp),%eax
08159319 +0x1f78:  mov    %eax,0x4(%esp)
0815931d +0x1f7c:  mov    %ebx,(%esp)
08159320 +0x1f7f:  call   08158ee4 <+0x1b43>
08159325 +0x1f84:  mov    %ebx,%eax
08159327 +0x1f86:  lea    -0x8(%ebp),%esp
0815932a +0x1f89:  add    $0x0,%esp
0815932d +0x1f8c:  pop    %ebx
0815932e +0x1f8d:  pop    %esi
0815932f +0x1f8e:  pop    %ebp
08159330 +0x1f8f:  ret    $0x4
08159333 +0x1f92:  push   %ebp
08159334 +0x1f93:  mov    %esp,%ebp
08159336 +0x1f95:  mov    0x8(%ebp),%eax
08159339 +0x1f98:  add    $0x10,%eax
0815933c +0x1f9b:  pop    %ebp
0815933d +0x1f9c:  ret
0815933e +0x1f9d:  push   %ebp
0815933f +0x1f9e:  mov    %esp,%ebp
08159341 +0x1fa0:  mov    0x8(%ebp),%eax
08159344 +0x1fa3:  add    $0x10,%eax
08159347 +0x1fa6:  pop    %ebp
08159348 +0x1fa7:  ret
08159349 +0x1fa8:  nop
0815934a +0x1fa9:  push   %ebp
0815934b +0x1faa:  mov    %esp,%ebp
0815934d +0x1fac:  push   %esi
0815934e +0x1fad:  push   %ebx
0815934f +0x1fae:  sub    $0x20,%esp
08159352 +0x1fb1:  mov    0x8(%ebp),%eax
08159355 +0x1fb4:  mov    %eax,(%esp)
08159358 +0x1fb7:  call   08159b16 <+0x2775>
0815935d +0x1fbc:  mov    %eax,-0xc(%ebp)
08159360 +0x1fbf:  mov    0xc(%ebp),%eax
08159363 +0x1fc2:  mov    %eax,(%esp)
08159366 +0x1fc5:  call   08159b39 <+0x2798>
0815936b +0x1fca:  mov    %eax,%ebx
0815936d +0x1fcc:  mov    0x8(%ebp),%eax
08159370 +0x1fcf:  mov    %eax,(%esp)
08159373 +0x1fd2:  call   08145de6 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x869>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x869
08159378 +0x1fd7:  mov    %ebx,0x8(%esp)
0815937c +0x1fdb:  mov    -0xc(%ebp),%edx
0815937f +0x1fde:  mov    %edx,0x4(%esp)
08159383 +0x1fe2:  mov    %eax,(%esp)
08159386 +0x1fe5:  call   08159b42 <+0x27a1>
0815938b +0x1fea:  jmp    081593c1 <+0x2020>
0815938d +0x1fec:  mov    %eax,(%esp)
08159390 +0x1fef:  call   08725ce0 <__cxa_begin_catch>
08159395 +0x1ff4:  mov    -0xc(%ebp),%eax
08159398 +0x1ff7:  mov    %eax,0x4(%esp)
0815939c +0x1ffb:  mov    0x8(%ebp),%eax
0815939f +0x1ffe:  mov    %eax,(%esp)
081593a2 +0x2001:  call   08145e08 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x88b>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x88b
081593a7 +0x2006:  call   08724be0 <__cxa_rethrow>
081593ac +0x200b:  mov    %edx,%ebx
081593ae +0x200d:  mov    %eax,%esi
081593b0 +0x200f:  call   08725c30 <__cxa_end_catch>
081593b5 +0x2014:  mov    %esi,%eax
081593b7 +0x2016:  mov    %ebx,%edx
081593b9 +0x2018:  mov    %eax,(%esp)
081593bc +0x201b:  call   08ae3750 <_Unwind_Resume>
081593c1 +0x2020:  mov    -0xc(%ebp),%eax
081593c4 +0x2023:  add    $0x20,%esp
081593c7 +0x2026:  pop    %ebx
081593c8 +0x2027:  pop    %esi
081593c9 +0x2028:  pop    %ebp
081593ca +0x2029:  ret
081593cb +0x202a:  push   %ebp
081593cc +0x202b:  mov    %esp,%ebp
081593ce +0x202d:  mov    0x8(%ebp),%eax
081593d1 +0x2030:  pop    %ebp
081593d2 +0x2031:  ret
081593d3 +0x2032:  push   %ebp
081593d4 +0x2033:  mov    %esp,%ebp
081593d6 +0x2035:  mov    0x8(%ebp),%eax
081593d9 +0x2038:  pop    %ebp
081593da +0x2039:  ret
081593db +0x203a:  nop
081593dc +0x203b:  push   %ebp
081593dd +0x203c:  mov    %esp,%ebp
081593df +0x203e:  sub    $0x18,%esp
081593e2 +0x2041:  mov    0x8(%ebp),%eax
081593e5 +0x2044:  mov    %eax,(%esp)
081593e8 +0x2047:  call   08159b82 <+0x27e1>
081593ed +0x204c:  leave
081593ee +0x204d:  ret
081593ef +0x204e:  nop
081593f0 +0x204f:  push   %ebp
081593f1 +0x2050:  mov    %esp,%ebp
081593f3 +0x2052:  mov    0x8(%ebp),%eax
081593f6 +0x2055:  movl   $0x0,0x4(%eax)
081593fd +0x205c:  mov    0x8(%ebp),%eax
08159400 +0x205f:  movl   $0x0,0x8(%eax)
08159407 +0x2066:  mov    0x8(%ebp),%eax
0815940a +0x2069:  lea    0x4(%eax),%edx
0815940d +0x206c:  mov    0x8(%ebp),%eax
08159410 +0x206f:  mov    %edx,0xc(%eax)
08159413 +0x2072:  mov    0x8(%ebp),%eax
08159416 +0x2075:  lea    0x4(%eax),%edx
08159419 +0x2078:  mov    0x8(%ebp),%eax
0815941c +0x207b:  mov    %edx,0x10(%eax)
0815941f +0x207e:  pop    %ebp
08159420 +0x207f:  ret
08159421 +0x2080:  nop
08159422 +0x2081:  push   %ebp
08159423 +0x2082:  mov    %esp,%ebp
08159425 +0x2084:  mov    0x8(%ebp),%eax
08159428 +0x2087:  pop    %ebp
08159429 +0x2088:  ret
0815942a +0x2089:  push   %ebp
0815942b +0x208a:  mov    %esp,%ebp
0815942d +0x208c:  pop    %ebp
0815942e +0x208d:  ret
0815942f +0x208e:  nop
08159430 +0x208f:  push   %ebp
08159431 +0x2090:  mov    %esp,%ebp
08159433 +0x2092:  sub    $0x18,%esp
08159436 +0x2095:  mov    0xc(%ebp),%eax
08159439 +0x2098:  mov    %eax,(%esp)
0815943c +0x209b:  call   0815942a <+0x2089>
08159441 +0x20a0:  leave
08159442 +0x20a1:  ret
08159443 +0x20a2:  nop
08159444 +0x20a3:  push   %ebp
08159445 +0x20a4:  mov    %esp,%ebp
08159447 +0x20a6:  sub    $0x18,%esp
0815944a +0x20a9:  mov    0x8(%ebp),%eax
0815944d +0x20ac:  movl   $0x1,0x8(%esp)
08159455 +0x20b4:  mov    0xc(%ebp),%edx
08159458 +0x20b7:  mov    %edx,0x4(%esp)
0815945c +0x20bb:  mov    %eax,(%esp)
0815945f +0x20be:  call   08159b88 <+0x27e7>
08159464 +0x20c3:  leave
08159465 +0x20c4:  ret
08159466 +0x20c5:  push   %ebp
08159467 +0x20c6:  mov    %esp,%ebp
08159469 +0x20c8:  sub    $0x18,%esp
0815946c +0x20cb:  mov    0x8(%ebp),%eax
0815946f +0x20ce:  mov    %eax,(%esp)
08159472 +0x20d1:  call   08159b9c <+0x27fb>
08159477 +0x20d6:  leave
08159478 +0x20d7:  ret
08159479 +0x20d8:  nop
0815947a +0x20d9:  push   %ebp
0815947b +0x20da:  mov    %esp,%ebp
0815947d +0x20dc:  mov    0x8(%ebp),%eax
08159480 +0x20df:  movl   $0x0,0x4(%eax)
08159487 +0x20e6:  mov    0x8(%ebp),%eax
0815948a +0x20e9:  movl   $0x0,0x8(%eax)
08159491 +0x20f0:  mov    0x8(%ebp),%eax
08159494 +0x20f3:  lea    0x4(%eax),%edx
08159497 +0x20f6:  mov    0x8(%ebp),%eax
0815949a +0x20f9:  mov    %edx,0xc(%eax)
0815949d +0x20fc:  mov    0x8(%ebp),%eax
081594a0 +0x20ff:  lea    0x4(%eax),%edx
081594a3 +0x2102:  mov    0x8(%ebp),%eax
081594a6 +0x2105:  mov    %edx,0x10(%eax)
081594a9 +0x2108:  pop    %ebp
081594aa +0x2109:  ret
081594ab +0x210a:  nop
081594ac +0x210b:  push   %ebp
081594ad +0x210c:  mov    %esp,%ebp
081594af +0x210e:  mov    0x8(%ebp),%eax
081594b2 +0x2111:  pop    %ebp
081594b3 +0x2112:  ret
081594b4 +0x2113:  push   %ebp
081594b5 +0x2114:  mov    %esp,%ebp
081594b7 +0x2116:  pop    %ebp
081594b8 +0x2117:  ret
081594b9 +0x2118:  nop
081594ba +0x2119:  push   %ebp
081594bb +0x211a:  mov    %esp,%ebp
081594bd +0x211c:  sub    $0x18,%esp
081594c0 +0x211f:  mov    0xc(%ebp),%eax
081594c3 +0x2122:  mov    %eax,(%esp)
081594c6 +0x2125:  call   081594b4 <+0x2113>
081594cb +0x212a:  leave
081594cc +0x212b:  ret
081594cd +0x212c:  nop
081594ce +0x212d:  push   %ebp
081594cf +0x212e:  mov    %esp,%ebp
081594d1 +0x2130:  sub    $0x18,%esp
081594d4 +0x2133:  mov    0x8(%ebp),%eax
081594d7 +0x2136:  movl   $0x1,0x8(%esp)
081594df +0x213e:  mov    0xc(%ebp),%edx
081594e2 +0x2141:  mov    %edx,0x4(%esp)
081594e6 +0x2145:  mov    %eax,(%esp)
081594e9 +0x2148:  call   08159ba2 <+0x2801>
081594ee +0x214d:  leave
081594ef +0x214e:  ret
081594f0 +0x214f:  push   %ebp
081594f1 +0x2150:  mov    %esp,%ebp
081594f3 +0x2152:  sub    $0x28,%esp
081594f6 +0x2155:  mov    0x8(%ebp),%eax
081594f9 +0x2158:  mov    %eax,(%esp)
081594fc +0x215b:  call   08159bb5 <+0x2814>
08159501 +0x2160:  mov    %eax,0x4(%esp)
08159505 +0x2164:  lea    -0x9(%ebp),%eax
08159508 +0x2167:  mov    %eax,(%esp)
0815950b +0x216a:  call   0815951e <+0x217d>
08159510 +0x216f:  leave
08159511 +0x2170:  ret
08159512 +0x2171:  push   %ebp
08159513 +0x2172:  mov    %esp,%ebp
08159515 +0x2174:  mov    0x8(%ebp),%eax
08159518 +0x2177:  add    $0x10,%eax
0815951b +0x217a:  pop    %ebp
0815951c +0x217b:  ret
0815951d +0x217c:  nop
0815951e +0x217d:  push   %ebp
0815951f +0x217e:  mov    %esp,%ebp
08159521 +0x2180:  mov    0xc(%ebp),%eax
08159524 +0x2183:  pop    %ebp
08159525 +0x2184:  ret
08159526 +0x2185:  push   %ebp
08159527 +0x2186:  mov    %esp,%ebp
08159529 +0x2188:  push   %esi
0815952a +0x2189:  push   %ebx
0815952b +0x218a:  sub    $0x20,%esp
0815952e +0x218d:  mov    0x8(%ebp),%esi
08159531 +0x2190:  cmpl   $0x0,0x10(%ebp)
08159535 +0x2194:  jne    0815957d <+0x21dc>
08159537 +0x2196:  mov    0xc(%ebp),%eax
0815953a +0x2199:  mov    %eax,(%esp)
0815953d +0x219c:  call   08158900 <+0x155f>
08159542 +0x21a1:  cmp    0x14(%ebp),%eax
08159545 +0x21a4:  je     0815957d <+0x21dc>
08159547 +0x21a6:  mov    0x14(%ebp),%eax
0815954a +0x21a9:  mov    %eax,(%esp)
0815954d +0x21ac:  call   081589dc <+0x163b>
08159552 +0x21b1:  mov    %eax,%ebx
08159554 +0x21b3:  mov    0x18(%ebp),%eax
08159557 +0x21b6:  mov    %eax,0x4(%esp)
0815955b +0x21ba:  lea    -0xe(%ebp),%eax
0815955e +0x21bd:  mov    %eax,(%esp)
08159561 +0x21c0:  call   0815951e <+0x217d>
08159566 +0x21c5:  mov    0xc(%ebp),%edx
08159569 +0x21c8:  mov    %ebx,0x8(%esp)
0815956d +0x21cc:  mov    %eax,0x4(%esp)
08159571 +0x21d0:  mov    %edx,(%esp)
08159574 +0x21d3:  call   080e36fc <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x14a2>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x14a2
08159579 +0x21d8:  test   %al,%al
0815957b +0x21da:  je     08159584 <+0x21e3>
0815957d +0x21dc:  mov    $0x1,%eax
08159582 +0x21e1:  jmp    08159589 <+0x21e8>
08159584 +0x21e3:  mov    $0x0,%eax
08159589 +0x21e8:  mov    %al,-0xd(%ebp)
0815958c +0x21eb:  mov    0x18(%ebp),%eax
0815958f +0x21ee:  mov    %eax,0x4(%esp)
08159593 +0x21f2:  mov    0xc(%ebp),%eax
08159596 +0x21f5:  mov    %eax,(%esp)
08159599 +0x21f8:  call   08159bc0 <+0x281f>
0815959e +0x21fd:  mov    %eax,-0xc(%ebp)
081595a1 +0x2200:  mov    0xc(%ebp),%eax
081595a4 +0x2203:  lea    0x4(%eax),%ecx
081595a7 +0x2206:  mov    -0xc(%ebp),%edx
081595aa +0x2209:  movzbl -0xd(%ebp),%eax
081595ae +0x220d:  mov    %ecx,0xc(%esp)
081595b2 +0x2211:  mov    0x14(%ebp),%ecx
081595b5 +0x2214:  mov    %ecx,0x8(%esp)
081595b9 +0x2218:  mov    %edx,0x4(%esp)
081595bd +0x221c:  mov    %eax,(%esp)
081595c0 +0x221f:  call   086df9d0 <_ZSt29_Rb_tree_insert_and_rebalancebPSt18_Rb_tree_node_baseS0_RS_>  ; std::_Rb_tree_insert_and_rebalance(bool, std::_Rb_tree_node_base*, std::_Rb_tree_node_base*, std::_Rb_tree_node_base&)
081595c5 +0x2224:  mov    0xc(%ebp),%eax
081595c8 +0x2227:  mov    0x14(%eax),%eax
081595cb +0x222a:  lea    0x1(%eax),%edx
081595ce +0x222d:  mov    0xc(%ebp),%eax
081595d1 +0x2230:  mov    %edx,0x14(%eax)
081595d4 +0x2233:  mov    -0xc(%ebp),%eax
081595d7 +0x2236:  mov    %eax,0x4(%esp)
081595db +0x223a:  mov    %esi,(%esp)
081595de +0x223d:  call   081589fe <+0x165d>
081595e3 +0x2242:  mov    %esi,%eax
081595e5 +0x2244:  add    $0x20,%esp
081595e8 +0x2247:  pop    %ebx
081595e9 +0x2248:  pop    %esi
081595ea +0x2249:  pop    %ebp
081595eb +0x224a:  ret    $0x4
081595ee +0x224d:  push   %ebp
081595ef +0x224e:  mov    %esp,%ebp
081595f1 +0x2250:  push   %esi
081595f2 +0x2251:  push   %ebx
081595f3 +0x2252:  sub    $0x50,%esp
081595f6 +0x2255:  mov    0x8(%ebp),%ebx
081595f9 +0x2258:  mov    0xc(%ebp),%eax
081595fc +0x225b:  mov    %eax,(%esp)
081595ff +0x225e:  call   08157f20 <+0xb7f>
08159604 +0x2263:  mov    %eax,-0x14(%ebp)
08159607 +0x2266:  mov    0xc(%ebp),%eax
0815960a +0x2269:  mov    %eax,(%esp)
0815960d +0x226c:  call   08158900 <+0x155f>
08159612 +0x2271:  mov    %eax,-0x10(%ebp)
08159615 +0x2274:  movb   $0x1,-0x9(%ebp)
08159619 +0x2278:  jmp    08159677 <+0x22d6>
0815961b +0x227a:  mov    -0x14(%ebp),%eax
0815961e +0x227d:  mov    %eax,-0x10(%ebp)
08159621 +0x2280:  mov    -0x14(%ebp),%eax
08159624 +0x2283:  mov    %eax,(%esp)
08159627 +0x2286:  call   081594f0 <+0x214f>
0815962c +0x228b:  mov    %eax,%esi
0815962e +0x228d:  mov    0x10(%ebp),%eax
08159631 +0x2290:  mov    %eax,0x4(%esp)
08159635 +0x2294:  lea    -0x2d(%ebp),%eax
08159638 +0x2297:  mov    %eax,(%esp)
0815963b +0x229a:  call   0815951e <+0x217d>
08159640 +0x229f:  mov    0xc(%ebp),%edx
08159643 +0x22a2:  mov    %esi,0x8(%esp)
08159647 +0x22a6:  mov    %eax,0x4(%esp)
0815964b +0x22aa:  mov    %edx,(%esp)
0815964e +0x22ad:  call   080e36fc <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x14a2>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x14a2
08159653 +0x22b2:  mov    %al,-0x9(%ebp)
08159656 +0x22b5:  cmpb   $0x0,-0x9(%ebp)
0815965a +0x22b9:  je     08159669 <+0x22c8>
0815965c +0x22bb:  mov    -0x14(%ebp),%eax
0815965f +0x22be:  mov    %eax,(%esp)
08159662 +0x22c1:  call   08158820 <+0x147f>
08159667 +0x22c6:  jmp    08159674 <+0x22d3>
08159669 +0x22c8:  mov    -0x14(%ebp),%eax
0815966c +0x22cb:  mov    %eax,(%esp)
0815966f +0x22ce:  call   08158815 <+0x1474>
08159674 +0x22d3:  mov    %eax,-0x14(%ebp)
08159677 +0x22d6:  cmpl   $0x0,-0x14(%ebp)
0815967b +0x22da:  setne  %al
0815967e +0x22dd:  test   %al,%al
08159680 +0x22df:  jne    0815961b <+0x227a>
08159682 +0x22e1:  mov    -0x10(%ebp),%eax
08159685 +0x22e4:  mov    %eax,0x4(%esp)
08159689 +0x22e8:  lea    -0x34(%ebp),%eax
0815968c +0x22eb:  mov    %eax,(%esp)
0815968f +0x22ee:  call   081589fe <+0x165d>
08159694 +0x22f3:  cmpb   $0x0,-0x9(%ebp)
08159698 +0x22f7:  je     08159719 <+0x2378>
0815969a +0x22f9:  lea    -0x2c(%ebp),%eax
0815969d +0x22fc:  mov    0xc(%ebp),%edx
081596a0 +0x22ff:  mov    %edx,0x4(%esp)
081596a4 +0x2303:  mov    %eax,(%esp)
081596a7 +0x2306:  call   0815847c <+0x10db>
081596ac +0x230b:  sub    $0x4,%esp
081596af +0x230e:  lea    -0x2c(%ebp),%eax
081596b2 +0x2311:  mov    %eax,0x4(%esp)
081596b6 +0x2315:  lea    -0x34(%ebp),%eax
081596b9 +0x2318:  mov    %eax,(%esp)
081596bc +0x231b:  call   08157774 <+0x3d3>
081596c1 +0x2320:  test   %al,%al
081596c3 +0x2322:  je     0815970e <+0x236d>
081596c5 +0x2324:  movb   $0x1,-0x25(%ebp)
081596c9 +0x2328:  mov    -0x10(%ebp),%ecx
081596cc +0x232b:  mov    -0x14(%ebp),%edx
081596cf +0x232e:  lea    -0x24(%ebp),%eax
081596d2 +0x2331:  mov    0x10(%ebp),%esi
081596d5 +0x2334:  mov    %esi,0x10(%esp)
081596d9 +0x2338:  mov    %ecx,0xc(%esp)
081596dd +0x233c:  mov    %edx,0x8(%esp)
081596e1 +0x2340:  mov    0xc(%ebp),%edx
081596e4 +0x2343:  mov    %edx,0x4(%esp)
081596e8 +0x2347:  mov    %eax,(%esp)
081596eb +0x234a:  call   08159526 <+0x2185>
081596f0 +0x234f:  sub    $0x4,%esp
081596f3 +0x2352:  lea    -0x25(%ebp),%eax
081596f6 +0x2355:  mov    %eax,0x8(%esp)
081596fa +0x2359:  lea    -0x24(%ebp),%eax
081596fd +0x235c:  mov    %eax,0x4(%esp)
08159701 +0x2360:  mov    %ebx,(%esp)
08159704 +0x2363:  call   08159c42 <+0x28a1>
08159709 +0x2368:  jmp    081597af <+0x240e>
0815970e +0x236d:  lea    -0x34(%ebp),%eax
08159711 +0x2370:  mov    %eax,(%esp)
08159714 +0x2373:  call   08159c70 <+0x28cf>
08159719 +0x2378:  mov    0x10(%ebp),%eax
0815971c +0x237b:  mov    %eax,0x4(%esp)
08159720 +0x237f:  lea    -0x1e(%ebp),%eax
08159723 +0x2382:  mov    %eax,(%esp)
08159726 +0x2385:  call   0815951e <+0x217d>
0815972b +0x238a:  mov    %eax,%esi
0815972d +0x238c:  mov    -0x34(%ebp),%eax
08159730 +0x238f:  mov    %eax,(%esp)
08159733 +0x2392:  call   081589dc <+0x163b>
08159738 +0x2397:  mov    0xc(%ebp),%edx
0815973b +0x239a:  mov    %esi,0x8(%esp)
0815973f +0x239e:  mov    %eax,0x4(%esp)
08159743 +0x23a2:  mov    %edx,(%esp)
08159746 +0x23a5:  call   080e36fc <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x14a2>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x14a2
0815974b +0x23aa:  test   %al,%al
0815974d +0x23ac:  je     08159795 <+0x23f4>
0815974f +0x23ae:  movb   $0x1,-0x1d(%ebp)
08159753 +0x23b2:  mov    -0x10(%ebp),%ecx
08159756 +0x23b5:  mov    -0x14(%ebp),%edx
08159759 +0x23b8:  lea    -0x1c(%ebp),%eax
0815975c +0x23bb:  mov    0x10(%ebp),%esi
0815975f +0x23be:  mov    %esi,0x10(%esp)
08159763 +0x23c2:  mov    %ecx,0xc(%esp)
08159767 +0x23c6:  mov    %edx,0x8(%esp)
0815976b +0x23ca:  mov    0xc(%ebp),%edx
0815976e +0x23cd:  mov    %edx,0x4(%esp)
08159772 +0x23d1:  mov    %eax,(%esp)
08159775 +0x23d4:  call   08159526 <+0x2185>
0815977a +0x23d9:  sub    $0x4,%esp
0815977d +0x23dc:  lea    -0x1d(%ebp),%eax
08159780 +0x23df:  mov    %eax,0x8(%esp)
08159784 +0x23e3:  lea    -0x1c(%ebp),%eax
08159787 +0x23e6:  mov    %eax,0x4(%esp)
0815978b +0x23ea:  mov    %ebx,(%esp)
0815978e +0x23ed:  call   08159c42 <+0x28a1>
08159793 +0x23f2:  jmp    081597af <+0x240e>
08159795 +0x23f4:  movb   $0x0,-0x15(%ebp)
08159799 +0x23f8:  lea    -0x15(%ebp),%eax
0815979c +0x23fb:  mov    %eax,0x8(%esp)
081597a0 +0x23ff:  lea    -0x34(%ebp),%eax
081597a3 +0x2402:  mov    %eax,0x4(%esp)
081597a7 +0x2406:  mov    %ebx,(%esp)
081597aa +0x2409:  call   08159c8e <+0x28ed>
081597af +0x240e:  mov    %ebx,%eax
081597b1 +0x2410:  lea    -0x8(%ebp),%esp
081597b4 +0x2413:  add    $0x0,%esp
081597b7 +0x2416:  pop    %ebx
081597b8 +0x2417:  pop    %esi
081597b9 +0x2418:  pop    %ebp
081597ba +0x2419:  ret    $0x4
081597bd +0x241c:  nop
081597be +0x241d:  push   %ebp
081597bf +0x241e:  mov    %esp,%ebp
081597c1 +0x2420:  sub    $0x18,%esp
081597c4 +0x2423:  mov    0x8(%ebp),%eax
081597c7 +0x2426:  mov    (%eax),%eax
081597c9 +0x2428:  mov    %eax,(%esp)
081597cc +0x242b:  call   086df8e0 <_ZSt18_Rb_tree_decrementPKSt18_Rb_tree_node_base>  ; std::_Rb_tree_decrement(std::_Rb_tree_node_base const*)
081597d1 +0x2430:  mov    0x8(%ebp),%edx
081597d4 +0x2433:  mov    %eax,(%edx)
081597d6 +0x2435:  mov    0x8(%ebp),%eax
081597d9 +0x2438:  leave
081597da +0x2439:  ret
081597db +0x243a:  push   %ebp
081597dc +0x243b:  mov    %esp,%ebp
081597de +0x243d:  mov    0x8(%ebp),%eax
081597e1 +0x2440:  mov    0xc(%eax),%eax
081597e4 +0x2443:  pop    %ebp
081597e5 +0x2444:  ret
081597e6 +0x2445:  push   %ebp
081597e7 +0x2446:  mov    %esp,%ebp
081597e9 +0x2448:  sub    $0x18,%esp
081597ec +0x244b:  mov    0x8(%ebp),%eax
081597ef +0x244e:  mov    (%eax),%eax
081597f1 +0x2450:  mov    %eax,(%esp)
081597f4 +0x2453:  call   086df850 <_ZSt18_Rb_tree_incrementPKSt18_Rb_tree_node_base>  ; std::_Rb_tree_increment(std::_Rb_tree_node_base const*)
081597f9 +0x2458:  mov    0x8(%ebp),%edx
081597fc +0x245b:  mov    %eax,(%edx)
081597fe +0x245d:  mov    0x8(%ebp),%eax
08159801 +0x2460:  leave
08159802 +0x2461:  ret
08159803 +0x2462:  push   %ebp
08159804 +0x2463:  mov    %esp,%ebp
08159806 +0x2465:  sub    $0x28,%esp
08159809 +0x2468:  mov    0x8(%ebp),%eax
0815980c +0x246b:  mov    %eax,(%esp)
0815980f +0x246e:  call   08159cbc <+0x291b>
08159814 +0x2473:  mov    %eax,0x4(%esp)
08159818 +0x2477:  lea    -0x9(%ebp),%eax
0815981b +0x247a:  mov    %eax,(%esp)
0815981e +0x247d:  call   08159830 <+0x248f>
08159823 +0x2482:  leave
08159824 +0x2483:  ret
08159825 +0x2484:  push   %ebp
08159826 +0x2485:  mov    %esp,%ebp
08159828 +0x2487:  mov    0x8(%ebp),%eax
0815982b +0x248a:  add    $0x10,%eax
0815982e +0x248d:  pop    %ebp
0815982f +0x248e:  ret
08159830 +0x248f:  push   %ebp
08159831 +0x2490:  mov    %esp,%ebp
08159833 +0x2492:  mov    0xc(%ebp),%eax
08159836 +0x2495:  pop    %ebp
08159837 +0x2496:  ret
08159838 +0x2497:  push   %ebp
08159839 +0x2498:  mov    %esp,%ebp
0815983b +0x249a:  push   %esi
0815983c +0x249b:  push   %ebx
0815983d +0x249c:  sub    $0x20,%esp
08159840 +0x249f:  mov    0x8(%ebp),%esi
08159843 +0x24a2:  cmpl   $0x0,0x10(%ebp)
08159847 +0x24a6:  jne    0815988f <+0x24ee>
08159849 +0x24a8:  mov    0xc(%ebp),%eax
0815984c +0x24ab:  mov    %eax,(%esp)
0815984f +0x24ae:  call   08158930 <+0x158f>
08159854 +0x24b3:  cmp    0x14(%ebp),%eax
08159857 +0x24b6:  je     0815988f <+0x24ee>
08159859 +0x24b8:  mov    0x14(%ebp),%eax
0815985c +0x24bb:  mov    %eax,(%esp)
0815985f +0x24be:  call   08158ec2 <+0x1b21>
08159864 +0x24c3:  mov    %eax,%ebx
08159866 +0x24c5:  mov    0x18(%ebp),%eax
08159869 +0x24c8:  mov    %eax,0x4(%esp)
0815986d +0x24cc:  lea    -0xe(%ebp),%eax
08159870 +0x24cf:  mov    %eax,(%esp)
08159873 +0x24d2:  call   08159830 <+0x248f>
08159878 +0x24d7:  mov    0xc(%ebp),%edx
0815987b +0x24da:  mov    %ebx,0x8(%esp)
0815987f +0x24de:  mov    %eax,0x4(%esp)
08159883 +0x24e2:  mov    %edx,(%esp)
08159886 +0x24e5:  call   081583b0 <+0x100f>
0815988b +0x24ea:  test   %al,%al
0815988d +0x24ec:  je     08159896 <+0x24f5>
0815988f +0x24ee:  mov    $0x1,%eax
08159894 +0x24f3:  jmp    0815989b <+0x24fa>
08159896 +0x24f5:  mov    $0x0,%eax
0815989b +0x24fa:  mov    %al,-0xd(%ebp)
0815989e +0x24fd:  mov    0x18(%ebp),%eax
081598a1 +0x2500:  mov    %eax,0x4(%esp)
081598a5 +0x2504:  mov    0xc(%ebp),%eax
081598a8 +0x2507:  mov    %eax,(%esp)
081598ab +0x250a:  call   08159cc8 <+0x2927>
081598b0 +0x250f:  mov    %eax,-0xc(%ebp)
081598b3 +0x2512:  mov    0xc(%ebp),%eax
081598b6 +0x2515:  lea    0x4(%eax),%ecx
081598b9 +0x2518:  mov    -0xc(%ebp),%edx
081598bc +0x251b:  movzbl -0xd(%ebp),%eax
081598c0 +0x251f:  mov    %ecx,0xc(%esp)
081598c4 +0x2523:  mov    0x14(%ebp),%ecx
081598c7 +0x2526:  mov    %ecx,0x8(%esp)
081598cb +0x252a:  mov    %edx,0x4(%esp)
081598cf +0x252e:  mov    %eax,(%esp)
081598d2 +0x2531:  call   086df9d0 <_ZSt29_Rb_tree_insert_and_rebalancebPSt18_Rb_tree_node_baseS0_RS_>  ; std::_Rb_tree_insert_and_rebalance(bool, std::_Rb_tree_node_base*, std::_Rb_tree_node_base*, std::_Rb_tree_node_base&)
081598d7 +0x2536:  mov    0xc(%ebp),%eax
081598da +0x2539:  mov    0x14(%eax),%eax
081598dd +0x253c:  lea    0x1(%eax),%edx
081598e0 +0x253f:  mov    0xc(%ebp),%eax
081598e3 +0x2542:  mov    %edx,0x14(%eax)
081598e6 +0x2545:  mov    -0xc(%ebp),%eax
081598e9 +0x2548:  mov    %eax,0x4(%esp)
081598ed +0x254c:  mov    %esi,(%esp)
081598f0 +0x254f:  call   08158ee4 <+0x1b43>
081598f5 +0x2554:  mov    %esi,%eax
081598f7 +0x2556:  add    $0x20,%esp
081598fa +0x2559:  pop    %ebx
081598fb +0x255a:  pop    %esi
081598fc +0x255b:  pop    %ebp
081598fd +0x255c:  ret    $0x4
08159900 +0x255f:  push   %ebp
08159901 +0x2560:  mov    %esp,%ebp
08159903 +0x2562:  push   %esi
08159904 +0x2563:  push   %ebx
08159905 +0x2564:  sub    $0x50,%esp
08159908 +0x2567:  mov    0x8(%ebp),%ebx
0815990b +0x256a:  mov    0xc(%ebp),%eax
0815990e +0x256d:  mov    %eax,(%esp)
08159911 +0x2570:  call   08157faa <+0xc09>
08159916 +0x2575:  mov    %eax,-0x14(%ebp)
08159919 +0x2578:  mov    0xc(%ebp),%eax
0815991c +0x257b:  mov    %eax,(%esp)
0815991f +0x257e:  call   08158930 <+0x158f>
08159924 +0x2583:  mov    %eax,-0x10(%ebp)
08159927 +0x2586:  movb   $0x1,-0x9(%ebp)
0815992b +0x258a:  jmp    08159989 <+0x25e8>
0815992d +0x258c:  mov    -0x14(%ebp),%eax
08159930 +0x258f:  mov    %eax,-0x10(%ebp)
08159933 +0x2592:  mov    -0x14(%ebp),%eax
08159936 +0x2595:  mov    %eax,(%esp)
08159939 +0x2598:  call   08159803 <+0x2462>
0815993e +0x259d:  mov    %eax,%esi
08159940 +0x259f:  mov    0x10(%ebp),%eax
08159943 +0x25a2:  mov    %eax,0x4(%esp)
08159947 +0x25a6:  lea    -0x2d(%ebp),%eax
0815994a +0x25a9:  mov    %eax,(%esp)
0815994d +0x25ac:  call   08159830 <+0x248f>
08159952 +0x25b1:  mov    0xc(%ebp),%edx
08159955 +0x25b4:  mov    %esi,0x8(%esp)
08159959 +0x25b8:  mov    %eax,0x4(%esp)
0815995d +0x25bc:  mov    %edx,(%esp)
08159960 +0x25bf:  call   081583b0 <+0x100f>
08159965 +0x25c4:  mov    %al,-0x9(%ebp)
08159968 +0x25c7:  cmpb   $0x0,-0x9(%ebp)
0815996c +0x25cb:  je     0815997b <+0x25da>
0815996e +0x25cd:  mov    -0x14(%ebp),%eax
08159971 +0x25d0:  mov    %eax,(%esp)
08159974 +0x25d3:  call   081588c0 <+0x151f>
08159979 +0x25d8:  jmp    08159986 <+0x25e5>
0815997b +0x25da:  mov    -0x14(%ebp),%eax
0815997e +0x25dd:  mov    %eax,(%esp)
08159981 +0x25e0:  call   081588b5 <+0x1514>
08159986 +0x25e5:  mov    %eax,-0x14(%ebp)
08159989 +0x25e8:  cmpl   $0x0,-0x14(%ebp)
0815998d +0x25ec:  setne  %al
08159990 +0x25ef:  test   %al,%al
08159992 +0x25f1:  jne    0815992d <+0x258c>
08159994 +0x25f3:  mov    -0x10(%ebp),%eax
08159997 +0x25f6:  mov    %eax,0x4(%esp)
0815999b +0x25fa:  lea    -0x34(%ebp),%eax
0815999e +0x25fd:  mov    %eax,(%esp)
081599a1 +0x2600:  call   08158ee4 <+0x1b43>
081599a6 +0x2605:  cmpb   $0x0,-0x9(%ebp)
081599aa +0x2609:  je     08159a2b <+0x268a>
081599ac +0x260b:  lea    -0x2c(%ebp),%eax
081599af +0x260e:  mov    0xc(%ebp),%edx
081599b2 +0x2611:  mov    %edx,0x4(%esp)
081599b6 +0x2615:  mov    %eax,(%esp)
081599b9 +0x2618:  call   08158518 <+0x1177>
081599be +0x261d:  sub    $0x4,%esp
081599c1 +0x2620:  lea    -0x2c(%ebp),%eax
081599c4 +0x2623:  mov    %eax,0x4(%esp)
081599c8 +0x2627:  lea    -0x34(%ebp),%eax
081599cb +0x262a:  mov    %eax,(%esp)
081599ce +0x262d:  call   081578e2 <+0x541>
081599d3 +0x2632:  test   %al,%al
081599d5 +0x2634:  je     08159a20 <+0x267f>
081599d7 +0x2636:  movb   $0x1,-0x25(%ebp)
081599db +0x263a:  mov    -0x10(%ebp),%ecx
081599de +0x263d:  mov    -0x14(%ebp),%edx
081599e1 +0x2640:  lea    -0x24(%ebp),%eax
081599e4 +0x2643:  mov    0x10(%ebp),%esi
081599e7 +0x2646:  mov    %esi,0x10(%esp)
081599eb +0x264a:  mov    %ecx,0xc(%esp)
081599ef +0x264e:  mov    %edx,0x8(%esp)
081599f3 +0x2652:  mov    0xc(%ebp),%edx
081599f6 +0x2655:  mov    %edx,0x4(%esp)
081599fa +0x2659:  mov    %eax,(%esp)
081599fd +0x265c:  call   08159838 <+0x2497>
08159a02 +0x2661:  sub    $0x4,%esp
08159a05 +0x2664:  lea    -0x25(%ebp),%eax
08159a08 +0x2667:  mov    %eax,0x8(%esp)
08159a0c +0x266b:  lea    -0x24(%ebp),%eax
08159a0f +0x266e:  mov    %eax,0x4(%esp)
08159a13 +0x2672:  mov    %ebx,(%esp)
08159a16 +0x2675:  call   08159d4a <+0x29a9>
08159a1b +0x267a:  jmp    08159ac1 <+0x2720>
08159a20 +0x267f:  lea    -0x34(%ebp),%eax
08159a23 +0x2682:  mov    %eax,(%esp)
08159a26 +0x2685:  call   08159d78 <+0x29d7>
08159a2b +0x268a:  mov    0x10(%ebp),%eax
08159a2e +0x268d:  mov    %eax,0x4(%esp)
08159a32 +0x2691:  lea    -0x1e(%ebp),%eax
08159a35 +0x2694:  mov    %eax,(%esp)
08159a38 +0x2697:  call   08159830 <+0x248f>
08159a3d +0x269c:  mov    %eax,%esi
08159a3f +0x269e:  mov    -0x34(%ebp),%eax
08159a42 +0x26a1:  mov    %eax,(%esp)
08159a45 +0x26a4:  call   08158ec2 <+0x1b21>
08159a4a +0x26a9:  mov    0xc(%ebp),%edx
08159a4d +0x26ac:  mov    %esi,0x8(%esp)
08159a51 +0x26b0:  mov    %eax,0x4(%esp)
08159a55 +0x26b4:  mov    %edx,(%esp)
08159a58 +0x26b7:  call   081583b0 <+0x100f>
08159a5d +0x26bc:  test   %al,%al
08159a5f +0x26be:  je     08159aa7 <+0x2706>
08159a61 +0x26c0:  movb   $0x1,-0x1d(%ebp)
08159a65 +0x26c4:  mov    -0x10(%ebp),%ecx
08159a68 +0x26c7:  mov    -0x14(%ebp),%edx
08159a6b +0x26ca:  lea    -0x1c(%ebp),%eax
08159a6e +0x26cd:  mov    0x10(%ebp),%esi
08159a71 +0x26d0:  mov    %esi,0x10(%esp)
08159a75 +0x26d4:  mov    %ecx,0xc(%esp)
08159a79 +0x26d8:  mov    %edx,0x8(%esp)
08159a7d +0x26dc:  mov    0xc(%ebp),%edx
08159a80 +0x26df:  mov    %edx,0x4(%esp)
08159a84 +0x26e3:  mov    %eax,(%esp)
08159a87 +0x26e6:  call   08159838 <+0x2497>
08159a8c +0x26eb:  sub    $0x4,%esp
08159a8f +0x26ee:  lea    -0x1d(%ebp),%eax
08159a92 +0x26f1:  mov    %eax,0x8(%esp)
08159a96 +0x26f5:  lea    -0x1c(%ebp),%eax
08159a99 +0x26f8:  mov    %eax,0x4(%esp)
08159a9d +0x26fc:  mov    %ebx,(%esp)
08159aa0 +0x26ff:  call   08159d4a <+0x29a9>
08159aa5 +0x2704:  jmp    08159ac1 <+0x2720>
08159aa7 +0x2706:  movb   $0x0,-0x15(%ebp)
08159aab +0x270a:  lea    -0x15(%ebp),%eax
08159aae +0x270d:  mov    %eax,0x8(%esp)
08159ab2 +0x2711:  lea    -0x34(%ebp),%eax
08159ab5 +0x2714:  mov    %eax,0x4(%esp)
08159ab9 +0x2718:  mov    %ebx,(%esp)
08159abc +0x271b:  call   08159d96 <+0x29f5>
08159ac1 +0x2720:  mov    %ebx,%eax
08159ac3 +0x2722:  lea    -0x8(%ebp),%esp
08159ac6 +0x2725:  add    $0x0,%esp
08159ac9 +0x2728:  pop    %ebx
08159aca +0x2729:  pop    %esi
08159acb +0x272a:  pop    %ebp
08159acc +0x272b:  ret    $0x4
08159acf +0x272e:  nop
08159ad0 +0x272f:  push   %ebp
08159ad1 +0x2730:  mov    %esp,%ebp
08159ad3 +0x2732:  sub    $0x18,%esp
08159ad6 +0x2735:  mov    0x8(%ebp),%eax
08159ad9 +0x2738:  mov    (%eax),%eax
08159adb +0x273a:  mov    %eax,(%esp)
08159ade +0x273d:  call   086df8e0 <_ZSt18_Rb_tree_decrementPKSt18_Rb_tree_node_base>  ; std::_Rb_tree_decrement(std::_Rb_tree_node_base const*)
08159ae3 +0x2742:  mov    0x8(%ebp),%edx
08159ae6 +0x2745:  mov    %eax,(%edx)
08159ae8 +0x2747:  mov    0x8(%ebp),%eax
08159aeb +0x274a:  leave
08159aec +0x274b:  ret
08159aed +0x274c:  push   %ebp
08159aee +0x274d:  mov    %esp,%ebp
08159af0 +0x274f:  mov    0x8(%ebp),%eax
08159af3 +0x2752:  mov    0xc(%eax),%eax
08159af6 +0x2755:  pop    %ebp
08159af7 +0x2756:  ret
08159af8 +0x2757:  push   %ebp
08159af9 +0x2758:  mov    %esp,%ebp
08159afb +0x275a:  sub    $0x18,%esp
08159afe +0x275d:  mov    0x8(%ebp),%eax
08159b01 +0x2760:  mov    (%eax),%eax
08159b03 +0x2762:  mov    %eax,(%esp)
08159b06 +0x2765:  call   086df850 <_ZSt18_Rb_tree_incrementPKSt18_Rb_tree_node_base>  ; std::_Rb_tree_increment(std::_Rb_tree_node_base const*)
08159b0b +0x276a:  mov    0x8(%ebp),%edx
08159b0e +0x276d:  mov    %eax,(%edx)
08159b10 +0x276f:  mov    0x8(%ebp),%eax
08159b13 +0x2772:  leave
08159b14 +0x2773:  ret
08159b15 +0x2774:  nop
08159b16 +0x2775:  push   %ebp
08159b17 +0x2776:  mov    %esp,%ebp
08159b19 +0x2778:  sub    $0x18,%esp
08159b1c +0x277b:  mov    0x8(%ebp),%eax
08159b1f +0x277e:  movl   $0x0,0x8(%esp)
08159b27 +0x2786:  movl   $0x1,0x4(%esp)
08159b2f +0x278e:  mov    %eax,(%esp)
08159b32 +0x2791:  call   08159dc4 <+0x2a23>
08159b37 +0x2796:  leave
08159b38 +0x2797:  ret
08159b39 +0x2798:  push   %ebp
08159b3a +0x2799:  mov    %esp,%ebp
08159b3c +0x279b:  mov    0x8(%ebp),%eax
08159b3f +0x279e:  pop    %ebp
08159b40 +0x279f:  ret
08159b41 +0x27a0:  nop
08159b42 +0x27a1:  push   %ebp
08159b43 +0x27a2:  mov    %esp,%ebp
08159b45 +0x27a4:  push   %ebx
08159b46 +0x27a5:  sub    $0x14,%esp
08159b49 +0x27a8:  mov    0x10(%ebp),%eax
08159b4c +0x27ab:  mov    %eax,(%esp)
08159b4f +0x27ae:  call   08159b39 <+0x2798>
08159b54 +0x27b3:  mov    %eax,%ebx
08159b56 +0x27b5:  mov    0xc(%ebp),%eax
08159b59 +0x27b8:  mov    %eax,0x4(%esp)
08159b5d +0x27bc:  movl   $0x24,(%esp)
08159b64 +0x27c3:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
08159b69 +0x27c8:  mov    %eax,%edx
08159b6b +0x27ca:  test   %edx,%edx
08159b6d +0x27cc:  je     08159b7b <+0x27da>
08159b6f +0x27ce:  mov    %ebx,0x4(%esp)
08159b73 +0x27d2:  mov    %eax,(%esp)
08159b76 +0x27d5:  call   08159e04 <+0x2a63>
08159b7b +0x27da:  add    $0x14,%esp
08159b7e +0x27dd:  pop    %ebx
08159b7f +0x27de:  pop    %ebp
08159b80 +0x27df:  ret
08159b81 +0x27e0:  nop
08159b82 +0x27e1:  push   %ebp
08159b83 +0x27e2:  mov    %esp,%ebp
08159b85 +0x27e4:  pop    %ebp
08159b86 +0x27e5:  ret
08159b87 +0x27e6:  nop
08159b88 +0x27e7:  push   %ebp
08159b89 +0x27e8:  mov    %esp,%ebp
08159b8b +0x27ea:  sub    $0x18,%esp
08159b8e +0x27ed:  mov    0xc(%ebp),%eax
08159b91 +0x27f0:  mov    %eax,(%esp)
08159b94 +0x27f3:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08159b99 +0x27f8:  leave
08159b9a +0x27f9:  ret
08159b9b +0x27fa:  nop
08159b9c +0x27fb:  push   %ebp
08159b9d +0x27fc:  mov    %esp,%ebp
08159b9f +0x27fe:  pop    %ebp
08159ba0 +0x27ff:  ret
08159ba1 +0x2800:  nop
08159ba2 +0x2801:  push   %ebp
08159ba3 +0x2802:  mov    %esp,%ebp
08159ba5 +0x2804:  sub    $0x18,%esp
08159ba8 +0x2807:  mov    0xc(%ebp),%eax
08159bab +0x280a:  mov    %eax,(%esp)
08159bae +0x280d:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08159bb3 +0x2812:  leave
08159bb4 +0x2813:  ret
08159bb5 +0x2814:  push   %ebp
08159bb6 +0x2815:  mov    %esp,%ebp
08159bb8 +0x2817:  mov    0x8(%ebp),%eax
08159bbb +0x281a:  add    $0x10,%eax
08159bbe +0x281d:  pop    %ebp
08159bbf +0x281e:  ret
08159bc0 +0x281f:  push   %ebp
08159bc1 +0x2820:  mov    %esp,%ebp
08159bc3 +0x2822:  push   %esi
08159bc4 +0x2823:  push   %ebx
08159bc5 +0x2824:  sub    $0x20,%esp
08159bc8 +0x2827:  mov    0x8(%ebp),%eax
08159bcb +0x282a:  mov    %eax,(%esp)
08159bce +0x282d:  call   08159e5e <+0x2abd>
08159bd3 +0x2832:  mov    %eax,-0xc(%ebp)
08159bd6 +0x2835:  mov    0xc(%ebp),%eax
08159bd9 +0x2838:  mov    %eax,(%esp)
08159bdc +0x283b:  call   08159e81 <+0x2ae0>
08159be1 +0x2840:  mov    %eax,%ebx
08159be3 +0x2842:  mov    0x8(%ebp),%eax
08159be6 +0x2845:  mov    %eax,(%esp)
08159be9 +0x2848:  call   08159422 <+0x2081>
08159bee +0x284d:  mov    %ebx,0x8(%esp)
08159bf2 +0x2851:  mov    -0xc(%ebp),%edx
08159bf5 +0x2854:  mov    %edx,0x4(%esp)
08159bf9 +0x2858:  mov    %eax,(%esp)
08159bfc +0x285b:  call   08159e8a <+0x2ae9>
08159c01 +0x2860:  jmp    08159c37 <+0x2896>
08159c03 +0x2862:  mov    %eax,(%esp)
08159c06 +0x2865:  call   08725ce0 <__cxa_begin_catch>
08159c0b +0x286a:  mov    -0xc(%ebp),%eax
08159c0e +0x286d:  mov    %eax,0x4(%esp)
08159c12 +0x2871:  mov    0x8(%ebp),%eax
08159c15 +0x2874:  mov    %eax,(%esp)
08159c18 +0x2877:  call   08159444 <+0x20a3>
08159c1d +0x287c:  call   08724be0 <__cxa_rethrow>
08159c22 +0x2881:  mov    %edx,%ebx
08159c24 +0x2883:  mov    %eax,%esi
08159c26 +0x2885:  call   08725c30 <__cxa_end_catch>
08159c2b +0x288a:  mov    %esi,%eax
08159c2d +0x288c:  mov    %ebx,%edx
08159c2f +0x288e:  mov    %eax,(%esp)
08159c32 +0x2891:  call   08ae3750 <_Unwind_Resume>
08159c37 +0x2896:  mov    -0xc(%ebp),%eax
08159c3a +0x2899:  add    $0x20,%esp
08159c3d +0x289c:  pop    %ebx
08159c3e +0x289d:  pop    %esi
08159c3f +0x289e:  pop    %ebp
08159c40 +0x289f:  ret
08159c41 +0x28a0:  nop
08159c42 +0x28a1:  push   %ebp
08159c43 +0x28a2:  mov    %esp,%ebp
08159c45 +0x28a4:  sub    $0x18,%esp
08159c48 +0x28a7:  mov    0xc(%ebp),%eax
08159c4b +0x28aa:  mov    %eax,(%esp)
08159c4e +0x28ad:  call   08159ec9 <+0x2b28>
08159c53 +0x28b2:  mov    0x8(%ebp),%edx
08159c56 +0x28b5:  mov    (%eax),%eax
08159c58 +0x28b7:  mov    %eax,(%edx)
08159c5a +0x28b9:  mov    0x10(%ebp),%eax
08159c5d +0x28bc:  mov    %eax,(%esp)
08159c60 +0x28bf:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
08159c65 +0x28c4:  movzbl (%eax),%edx
08159c68 +0x28c7:  mov    0x8(%ebp),%eax
08159c6b +0x28ca:  mov    %dl,0x4(%eax)
08159c6e +0x28cd:  leave
08159c6f +0x28ce:  ret
08159c70 +0x28cf:  push   %ebp
08159c71 +0x28d0:  mov    %esp,%ebp
08159c73 +0x28d2:  sub    $0x18,%esp
08159c76 +0x28d5:  mov    0x8(%ebp),%eax
08159c79 +0x28d8:  mov    (%eax),%eax
08159c7b +0x28da:  mov    %eax,(%esp)
08159c7e +0x28dd:  call   086df890 <_ZSt18_Rb_tree_decrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_decrement(std::_Rb_tree_node_base*)
08159c83 +0x28e2:  mov    0x8(%ebp),%edx
08159c86 +0x28e5:  mov    %eax,(%edx)
08159c88 +0x28e7:  mov    0x8(%ebp),%eax
08159c8b +0x28ea:  leave
08159c8c +0x28eb:  ret
08159c8d +0x28ec:  nop
08159c8e +0x28ed:  push   %ebp
08159c8f +0x28ee:  mov    %esp,%ebp
08159c91 +0x28f0:  sub    $0x18,%esp
08159c94 +0x28f3:  mov    0xc(%ebp),%eax
08159c97 +0x28f6:  mov    %eax,(%esp)
08159c9a +0x28f9:  call   08159ed1 <+0x2b30>
08159c9f +0x28fe:  mov    0x8(%ebp),%edx
08159ca2 +0x2901:  mov    (%eax),%eax
08159ca4 +0x2903:  mov    %eax,(%edx)
08159ca6 +0x2905:  mov    0x10(%ebp),%eax
08159ca9 +0x2908:  mov    %eax,(%esp)
08159cac +0x290b:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
08159cb1 +0x2910:  movzbl (%eax),%edx
08159cb4 +0x2913:  mov    0x8(%ebp),%eax
08159cb7 +0x2916:  mov    %dl,0x4(%eax)
08159cba +0x2919:  leave
08159cbb +0x291a:  ret
08159cbc +0x291b:  push   %ebp
08159cbd +0x291c:  mov    %esp,%ebp
08159cbf +0x291e:  mov    0x8(%ebp),%eax
08159cc2 +0x2921:  add    $0x10,%eax
08159cc5 +0x2924:  pop    %ebp
08159cc6 +0x2925:  ret
08159cc7 +0x2926:  nop
08159cc8 +0x2927:  push   %ebp
08159cc9 +0x2928:  mov    %esp,%ebp
08159ccb +0x292a:  push   %esi
08159ccc +0x292b:  push   %ebx
08159ccd +0x292c:  sub    $0x20,%esp
08159cd0 +0x292f:  mov    0x8(%ebp),%eax
08159cd3 +0x2932:  mov    %eax,(%esp)
08159cd6 +0x2935:  call   08159eda <+0x2b39>
08159cdb +0x293a:  mov    %eax,-0xc(%ebp)
08159cde +0x293d:  mov    0xc(%ebp),%eax
08159ce1 +0x2940:  mov    %eax,(%esp)
08159ce4 +0x2943:  call   08159efd <+0x2b5c>
08159ce9 +0x2948:  mov    %eax,%ebx
08159ceb +0x294a:  mov    0x8(%ebp),%eax
08159cee +0x294d:  mov    %eax,(%esp)
08159cf1 +0x2950:  call   081594ac <+0x210b>
08159cf6 +0x2955:  mov    %ebx,0x8(%esp)
08159cfa +0x2959:  mov    -0xc(%ebp),%edx
08159cfd +0x295c:  mov    %edx,0x4(%esp)
08159d01 +0x2960:  mov    %eax,(%esp)
08159d04 +0x2963:  call   08159f06 <+0x2b65>
08159d09 +0x2968:  jmp    08159d3f <+0x299e>
08159d0b +0x296a:  mov    %eax,(%esp)
08159d0e +0x296d:  call   08725ce0 <__cxa_begin_catch>
08159d13 +0x2972:  mov    -0xc(%ebp),%eax
08159d16 +0x2975:  mov    %eax,0x4(%esp)
08159d1a +0x2979:  mov    0x8(%ebp),%eax
08159d1d +0x297c:  mov    %eax,(%esp)
08159d20 +0x297f:  call   081594ce <+0x212d>
08159d25 +0x2984:  call   08724be0 <__cxa_rethrow>
08159d2a +0x2989:  mov    %edx,%ebx
08159d2c +0x298b:  mov    %eax,%esi
08159d2e +0x298d:  call   08725c30 <__cxa_end_catch>
08159d33 +0x2992:  mov    %esi,%eax
08159d35 +0x2994:  mov    %ebx,%edx
08159d37 +0x2996:  mov    %eax,(%esp)
08159d3a +0x2999:  call   08ae3750 <_Unwind_Resume>
08159d3f +0x299e:  mov    -0xc(%ebp),%eax
08159d42 +0x29a1:  add    $0x20,%esp
08159d45 +0x29a4:  pop    %ebx
08159d46 +0x29a5:  pop    %esi
08159d47 +0x29a6:  pop    %ebp
08159d48 +0x29a7:  ret
08159d49 +0x29a8:  nop
08159d4a +0x29a9:  push   %ebp
08159d4b +0x29aa:  mov    %esp,%ebp
08159d4d +0x29ac:  sub    $0x18,%esp
08159d50 +0x29af:  mov    0xc(%ebp),%eax
08159d53 +0x29b2:  mov    %eax,(%esp)
08159d56 +0x29b5:  call   08159f45 <+0x2ba4>
08159d5b +0x29ba:  mov    0x8(%ebp),%edx
08159d5e +0x29bd:  mov    (%eax),%eax
08159d60 +0x29bf:  mov    %eax,(%edx)
08159d62 +0x29c1:  mov    0x10(%ebp),%eax
08159d65 +0x29c4:  mov    %eax,(%esp)
08159d68 +0x29c7:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
08159d6d +0x29cc:  movzbl (%eax),%edx
08159d70 +0x29cf:  mov    0x8(%ebp),%eax
08159d73 +0x29d2:  mov    %dl,0x4(%eax)
08159d76 +0x29d5:  leave
08159d77 +0x29d6:  ret
08159d78 +0x29d7:  push   %ebp
08159d79 +0x29d8:  mov    %esp,%ebp
08159d7b +0x29da:  sub    $0x18,%esp
08159d7e +0x29dd:  mov    0x8(%ebp),%eax
08159d81 +0x29e0:  mov    (%eax),%eax
08159d83 +0x29e2:  mov    %eax,(%esp)
08159d86 +0x29e5:  call   086df890 <_ZSt18_Rb_tree_decrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_decrement(std::_Rb_tree_node_base*)
08159d8b +0x29ea:  mov    0x8(%ebp),%edx
08159d8e +0x29ed:  mov    %eax,(%edx)
08159d90 +0x29ef:  mov    0x8(%ebp),%eax
08159d93 +0x29f2:  leave
08159d94 +0x29f3:  ret
08159d95 +0x29f4:  nop
08159d96 +0x29f5:  push   %ebp
08159d97 +0x29f6:  mov    %esp,%ebp
08159d99 +0x29f8:  sub    $0x18,%esp
08159d9c +0x29fb:  mov    0xc(%ebp),%eax
08159d9f +0x29fe:  mov    %eax,(%esp)
08159da2 +0x2a01:  call   08159f4d <+0x2bac>
08159da7 +0x2a06:  mov    0x8(%ebp),%edx
08159daa +0x2a09:  mov    (%eax),%eax
08159dac +0x2a0b:  mov    %eax,(%edx)
08159dae +0x2a0d:  mov    0x10(%ebp),%eax
08159db1 +0x2a10:  mov    %eax,(%esp)
08159db4 +0x2a13:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
08159db9 +0x2a18:  movzbl (%eax),%edx
08159dbc +0x2a1b:  mov    0x8(%ebp),%eax
08159dbf +0x2a1e:  mov    %dl,0x4(%eax)
08159dc2 +0x2a21:  leave
08159dc3 +0x2a22:  ret
08159dc4 +0x2a23:  push   %ebp
08159dc5 +0x2a24:  mov    %esp,%ebp
08159dc7 +0x2a26:  sub    $0x18,%esp
08159dca +0x2a29:  mov    0x8(%ebp),%eax
08159dcd +0x2a2c:  mov    %eax,(%esp)
08159dd0 +0x2a2f:  call   08159f56 <+0x2bb5>
08159dd5 +0x2a34:  cmp    0xc(%ebp),%eax
08159dd8 +0x2a37:  setb   %al
08159ddb +0x2a3a:  movzbl %al,%eax
08159dde +0x2a3d:  test   %eax,%eax
08159de0 +0x2a3f:  setne  %al
08159de3 +0x2a42:  test   %al,%al
08159de5 +0x2a44:  je     08159dec <+0x2a4b>
08159de7 +0x2a46:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
08159dec +0x2a4b:  mov    0xc(%ebp),%edx
08159def +0x2a4e:  mov    %edx,%eax
08159df1 +0x2a50:  shl    $0x3,%eax
08159df4 +0x2a53:  add    %edx,%eax
08159df6 +0x2a55:  shl    $0x2,%eax
08159df9 +0x2a58:  mov    %eax,(%esp)
08159dfc +0x2a5b:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08159e01 +0x2a60:  leave
08159e02 +0x2a61:  ret
08159e03 +0x2a62:  nop
08159e04 +0x2a63:  push   %ebp
08159e05 +0x2a64:  mov    %esp,%ebp
08159e07 +0x2a66:  sub    $0x18,%esp
08159e0a +0x2a69:  mov    0x8(%ebp),%eax
08159e0d +0x2a6c:  movl   $0x0,(%eax)
08159e13 +0x2a72:  mov    0x8(%ebp),%eax
08159e16 +0x2a75:  movl   $0x0,0x4(%eax)
08159e1d +0x2a7c:  mov    0x8(%ebp),%eax
08159e20 +0x2a7f:  movl   $0x0,0x8(%eax)
08159e27 +0x2a86:  mov    0x8(%ebp),%eax
08159e2a +0x2a89:  movl   $0x0,0xc(%eax)
08159e31 +0x2a90:  mov    0xc(%ebp),%eax
08159e34 +0x2a93:  mov    %eax,(%esp)
08159e37 +0x2a96:  call   08159b39 <+0x2798>
08159e3c +0x2a9b:  mov    0x8(%ebp),%edx
08159e3f +0x2a9e:  mov    (%eax),%ecx
08159e41 +0x2aa0:  mov    %ecx,0x10(%edx)
08159e44 +0x2aa3:  mov    0x4(%eax),%ecx
08159e47 +0x2aa6:  mov    %ecx,0x14(%edx)
08159e4a +0x2aa9:  mov    0x8(%eax),%ecx
08159e4d +0x2aac:  mov    %ecx,0x18(%edx)
08159e50 +0x2aaf:  mov    0xc(%eax),%ecx
08159e53 +0x2ab2:  mov    %ecx,0x1c(%edx)
08159e56 +0x2ab5:  mov    0x10(%eax),%eax
08159e59 +0x2ab8:  mov    %eax,0x20(%edx)
08159e5c +0x2abb:  leave
08159e5d +0x2abc:  ret
08159e5e +0x2abd:  push   %ebp
08159e5f +0x2abe:  mov    %esp,%ebp
08159e61 +0x2ac0:  sub    $0x18,%esp
08159e64 +0x2ac3:  mov    0x8(%ebp),%eax
08159e67 +0x2ac6:  movl   $0x0,0x8(%esp)
08159e6f +0x2ace:  movl   $0x1,0x4(%esp)
08159e77 +0x2ad6:  mov    %eax,(%esp)
08159e7a +0x2ad9:  call   08159f60 <+0x2bbf>
08159e7f +0x2ade:  leave
08159e80 +0x2adf:  ret
08159e81 +0x2ae0:  push   %ebp
08159e82 +0x2ae1:  mov    %esp,%ebp
08159e84 +0x2ae3:  mov    0x8(%ebp),%eax
08159e87 +0x2ae6:  pop    %ebp
08159e88 +0x2ae7:  ret
08159e89 +0x2ae8:  nop
08159e8a +0x2ae9:  push   %ebp
08159e8b +0x2aea:  mov    %esp,%ebp
08159e8d +0x2aec:  push   %ebx
08159e8e +0x2aed:  sub    $0x14,%esp
08159e91 +0x2af0:  mov    0x10(%ebp),%eax
08159e94 +0x2af3:  mov    %eax,(%esp)
08159e97 +0x2af6:  call   08159e81 <+0x2ae0>
08159e9c +0x2afb:  mov    %eax,%ebx
08159e9e +0x2afd:  mov    0xc(%ebp),%eax
08159ea1 +0x2b00:  mov    %eax,0x4(%esp)
08159ea5 +0x2b04:  movl   $0x24,(%esp)
08159eac +0x2b0b:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
08159eb1 +0x2b10:  mov    %eax,%edx
08159eb3 +0x2b12:  test   %edx,%edx
08159eb5 +0x2b14:  je     08159ec3 <+0x2b22>
08159eb7 +0x2b16:  mov    %ebx,0x4(%esp)
08159ebb +0x2b1a:  mov    %eax,(%esp)
08159ebe +0x2b1d:  call   08159fa0 <+0x2bff>
08159ec3 +0x2b22:  add    $0x14,%esp
08159ec6 +0x2b25:  pop    %ebx
08159ec7 +0x2b26:  pop    %ebp
08159ec8 +0x2b27:  ret
08159ec9 +0x2b28:  push   %ebp
08159eca +0x2b29:  mov    %esp,%ebp
08159ecc +0x2b2b:  mov    0x8(%ebp),%eax
08159ecf +0x2b2e:  pop    %ebp
08159ed0 +0x2b2f:  ret
08159ed1 +0x2b30:  push   %ebp
08159ed2 +0x2b31:  mov    %esp,%ebp
08159ed4 +0x2b33:  mov    0x8(%ebp),%eax
08159ed7 +0x2b36:  pop    %ebp
08159ed8 +0x2b37:  ret
08159ed9 +0x2b38:  nop
08159eda +0x2b39:  push   %ebp
08159edb +0x2b3a:  mov    %esp,%ebp
08159edd +0x2b3c:  sub    $0x18,%esp
08159ee0 +0x2b3f:  mov    0x8(%ebp),%eax
08159ee3 +0x2b42:  movl   $0x0,0x8(%esp)
08159eeb +0x2b4a:  movl   $0x1,0x4(%esp)
08159ef3 +0x2b52:  mov    %eax,(%esp)
08159ef6 +0x2b55:  call   08159ffa <+0x2c59>
08159efb +0x2b5a:  leave
08159efc +0x2b5b:  ret
08159efd +0x2b5c:  push   %ebp
08159efe +0x2b5d:  mov    %esp,%ebp
08159f00 +0x2b5f:  mov    0x8(%ebp),%eax
08159f03 +0x2b62:  pop    %ebp
08159f04 +0x2b63:  ret
08159f05 +0x2b64:  nop
08159f06 +0x2b65:  push   %ebp
08159f07 +0x2b66:  mov    %esp,%ebp
08159f09 +0x2b68:  push   %ebx
08159f0a +0x2b69:  sub    $0x14,%esp
08159f0d +0x2b6c:  mov    0x10(%ebp),%eax
08159f10 +0x2b6f:  mov    %eax,(%esp)
08159f13 +0x2b72:  call   08159efd <+0x2b5c>
08159f18 +0x2b77:  mov    %eax,%ebx
08159f1a +0x2b79:  mov    0xc(%ebp),%eax
08159f1d +0x2b7c:  mov    %eax,0x4(%esp)
08159f21 +0x2b80:  movl   $0x28,(%esp)
08159f28 +0x2b87:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
08159f2d +0x2b8c:  mov    %eax,%edx
08159f2f +0x2b8e:  test   %edx,%edx
08159f31 +0x2b90:  je     08159f3f <+0x2b9e>
08159f33 +0x2b92:  mov    %ebx,0x4(%esp)
08159f37 +0x2b96:  mov    %eax,(%esp)
08159f3a +0x2b99:  call   0815a03a <+0x2c99>
08159f3f +0x2b9e:  add    $0x14,%esp
08159f42 +0x2ba1:  pop    %ebx
08159f43 +0x2ba2:  pop    %ebp
08159f44 +0x2ba3:  ret
08159f45 +0x2ba4:  push   %ebp
08159f46 +0x2ba5:  mov    %esp,%ebp
08159f48 +0x2ba7:  mov    0x8(%ebp),%eax
08159f4b +0x2baa:  pop    %ebp
08159f4c +0x2bab:  ret
08159f4d +0x2bac:  push   %ebp
08159f4e +0x2bad:  mov    %esp,%ebp
08159f50 +0x2baf:  mov    0x8(%ebp),%eax
08159f53 +0x2bb2:  pop    %ebp
08159f54 +0x2bb3:  ret
08159f55 +0x2bb4:  nop
08159f56 +0x2bb5:  push   %ebp
08159f57 +0x2bb6:  mov    %esp,%ebp
08159f59 +0x2bb8:  mov    $0x71c71c7,%eax
08159f5e +0x2bbd:  pop    %ebp
08159f5f +0x2bbe:  ret
08159f60 +0x2bbf:  push   %ebp
08159f61 +0x2bc0:  mov    %esp,%ebp
08159f63 +0x2bc2:  sub    $0x18,%esp
08159f66 +0x2bc5:  mov    0x8(%ebp),%eax
08159f69 +0x2bc8:  mov    %eax,(%esp)
08159f6c +0x2bcb:  call   0815a09a <+0x2cf9>
08159f71 +0x2bd0:  cmp    0xc(%ebp),%eax
08159f74 +0x2bd3:  setb   %al
08159f77 +0x2bd6:  movzbl %al,%eax
08159f7a +0x2bd9:  test   %eax,%eax
08159f7c +0x2bdb:  setne  %al
08159f7f +0x2bde:  test   %al,%al
08159f81 +0x2be0:  je     08159f88 <+0x2be7>
08159f83 +0x2be2:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
08159f88 +0x2be7:  mov    0xc(%ebp),%edx
08159f8b +0x2bea:  mov    %edx,%eax
08159f8d +0x2bec:  shl    $0x3,%eax
08159f90 +0x2bef:  add    %edx,%eax
08159f92 +0x2bf1:  shl    $0x2,%eax
08159f95 +0x2bf4:  mov    %eax,(%esp)
08159f98 +0x2bf7:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08159f9d +0x2bfc:  leave
08159f9e +0x2bfd:  ret
08159f9f +0x2bfe:  nop
08159fa0 +0x2bff:  push   %ebp
08159fa1 +0x2c00:  mov    %esp,%ebp
08159fa3 +0x2c02:  sub    $0x18,%esp
08159fa6 +0x2c05:  mov    0x8(%ebp),%eax
08159fa9 +0x2c08:  movl   $0x0,(%eax)
08159faf +0x2c0e:  mov    0x8(%ebp),%eax
08159fb2 +0x2c11:  movl   $0x0,0x4(%eax)
08159fb9 +0x2c18:  mov    0x8(%ebp),%eax
08159fbc +0x2c1b:  movl   $0x0,0x8(%eax)
08159fc3 +0x2c22:  mov    0x8(%ebp),%eax
08159fc6 +0x2c25:  movl   $0x0,0xc(%eax)
08159fcd +0x2c2c:  mov    0xc(%ebp),%eax
08159fd0 +0x2c2f:  mov    %eax,(%esp)
08159fd3 +0x2c32:  call   08159e81 <+0x2ae0>
08159fd8 +0x2c37:  mov    0x8(%ebp),%edx
08159fdb +0x2c3a:  mov    (%eax),%ecx
08159fdd +0x2c3c:  mov    %ecx,0x10(%edx)
08159fe0 +0x2c3f:  mov    0x4(%eax),%ecx
08159fe3 +0x2c42:  mov    %ecx,0x14(%edx)
08159fe6 +0x2c45:  mov    0x8(%eax),%ecx
08159fe9 +0x2c48:  mov    %ecx,0x18(%edx)
08159fec +0x2c4b:  mov    0xc(%eax),%ecx
08159fef +0x2c4e:  mov    %ecx,0x1c(%edx)
08159ff2 +0x2c51:  mov    0x10(%eax),%eax
08159ff5 +0x2c54:  mov    %eax,0x20(%edx)
08159ff8 +0x2c57:  leave
08159ff9 +0x2c58:  ret
08159ffa +0x2c59:  push   %ebp
08159ffb +0x2c5a:  mov    %esp,%ebp
08159ffd +0x2c5c:  sub    $0x18,%esp
0815a000 +0x2c5f:  mov    0x8(%ebp),%eax
0815a003 +0x2c62:  mov    %eax,(%esp)
0815a006 +0x2c65:  call   0815a0a4 <+0x2d03>
0815a00b +0x2c6a:  cmp    0xc(%ebp),%eax
0815a00e +0x2c6d:  setb   %al
0815a011 +0x2c70:  movzbl %al,%eax
0815a014 +0x2c73:  test   %eax,%eax
0815a016 +0x2c75:  setne  %al
0815a019 +0x2c78:  test   %al,%al
0815a01b +0x2c7a:  je     0815a022 <+0x2c81>
0815a01d +0x2c7c:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
0815a022 +0x2c81:  mov    0xc(%ebp),%edx
0815a025 +0x2c84:  mov    %edx,%eax
0815a027 +0x2c86:  shl    $0x2,%eax
0815a02a +0x2c89:  add    %edx,%eax
0815a02c +0x2c8b:  shl    $0x3,%eax
0815a02f +0x2c8e:  mov    %eax,(%esp)
0815a032 +0x2c91:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0815a037 +0x2c96:  leave
0815a038 +0x2c97:  ret
0815a039 +0x2c98:  nop
0815a03a +0x2c99:  push   %ebp
0815a03b +0x2c9a:  mov    %esp,%ebp
0815a03d +0x2c9c:  sub    $0x18,%esp
0815a040 +0x2c9f:  mov    0x8(%ebp),%eax
0815a043 +0x2ca2:  movl   $0x0,(%eax)
0815a049 +0x2ca8:  mov    0x8(%ebp),%eax
0815a04c +0x2cab:  movl   $0x0,0x4(%eax)
0815a053 +0x2cb2:  mov    0x8(%ebp),%eax
0815a056 +0x2cb5:  movl   $0x0,0x8(%eax)
0815a05d +0x2cbc:  mov    0x8(%ebp),%eax
0815a060 +0x2cbf:  movl   $0x0,0xc(%eax)
0815a067 +0x2cc6:  mov    0xc(%ebp),%eax
0815a06a +0x2cc9:  mov    %eax,(%esp)
0815a06d +0x2ccc:  call   08159efd <+0x2b5c>
0815a072 +0x2cd1:  mov    0x8(%ebp),%edx
0815a075 +0x2cd4:  mov    (%eax),%ecx
0815a077 +0x2cd6:  mov    %ecx,0x10(%edx)
0815a07a +0x2cd9:  mov    0x4(%eax),%ecx
0815a07d +0x2cdc:  mov    %ecx,0x14(%edx)
0815a080 +0x2cdf:  mov    0x8(%eax),%ecx
0815a083 +0x2ce2:  mov    %ecx,0x18(%edx)
0815a086 +0x2ce5:  mov    0xc(%eax),%ecx
0815a089 +0x2ce8:  mov    %ecx,0x1c(%edx)
0815a08c +0x2ceb:  mov    0x10(%eax),%ecx
0815a08f +0x2cee:  mov    %ecx,0x20(%edx)
0815a092 +0x2cf1:  mov    0x14(%eax),%eax
0815a095 +0x2cf4:  mov    %eax,0x24(%edx)
0815a098 +0x2cf7:  leave
0815a099 +0x2cf8:  ret
0815a09a +0x2cf9:  push   %ebp
0815a09b +0x2cfa:  mov    %esp,%ebp
0815a09d +0x2cfc:  mov    $0x71c71c7,%eax
0815a0a2 +0x2d01:  pop    %ebp
0815a0a3 +0x2d02:  ret
0815a0a4 +0x2d03:  push   %ebp
0815a0a5 +0x2d04:  mov    %esp,%ebp
0815a0a7 +0x2d06:  mov    $0x6666666,%eax
0815a0ac +0x2d0b:  pop    %ebp
0815a0ad +0x2d0c:  ret
0815a0ae +0x2d0d:  nop
0815a0af +0x2d0e:  nop
```

## 反编译 C

```c
// <global>::global @ 0x81573a1

/* CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char) */

void CBossDungeonEntranceLog::_GLOBAL__I_IncrementBossStageStart(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
