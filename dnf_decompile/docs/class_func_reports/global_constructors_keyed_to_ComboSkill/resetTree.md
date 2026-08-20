# resetTree

`_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND`

`global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)`

| 类 | 地址 |
|---|---|
| `global constructors keyed to ComboSkill` | `0x080ea3c7` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080ea3c7  _GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND
#           global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)
# range [0x080ea3c7, 0x080ebbbb]
080ea3c7 +0x0000:  push   %ebp
080ea3c8 +0x0001:  mov    %esp,%ebp
080ea3ca +0x0003:  sub    $0x18,%esp
080ea3cd +0x0006:  movl   $0xffff,0x4(%esp)
080ea3d5 +0x000e:  movl   $0x1,(%esp)
080ea3dc +0x0015:  call   080ea387 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
080ea3e1 +0x001a:  leave
080ea3e2 +0x001b:  ret
080ea3e3 +0x001c:  nop
080ea3e4 +0x001d:  push   %ebp
080ea3e5 +0x001e:  mov    %esp,%ebp
080ea3e7 +0x0020:  sub    $0x18,%esp
080ea3ea +0x0023:  mov    0x8(%ebp),%eax
080ea3ed +0x0026:  mov    %eax,(%esp)
080ea3f0 +0x0029:  call   080ea5ae <+0x1e7>
080ea3f5 +0x002e:  leave
080ea3f6 +0x002f:  ret
080ea3f7 +0x0030:  nop
080ea3f8 +0x0031:  push   %ebp
080ea3f9 +0x0032:  mov    %esp,%ebp
080ea3fb +0x0034:  mov    0xc(%ebp),%eax
080ea3fe +0x0037:  test   %eax,%eax
080ea400 +0x0039:  jne    080ea407 <+0x40>
080ea402 +0x003b:  mov    0x8(%ebp),%eax
080ea405 +0x003e:  jmp    080ea41a <+0x53>
080ea407 +0x0040:  mov    0xc(%ebp),%eax
080ea40a +0x0043:  cmp    $0x1,%eax
080ea40d +0x0046:  jne    080ea417 <+0x50>
080ea40f +0x0048:  mov    0x8(%ebp),%eax
080ea412 +0x004b:  add    $0x15,%eax
080ea415 +0x004e:  jmp    080ea41a <+0x53>
080ea417 +0x0050:  mov    0x8(%ebp),%eax
080ea41a +0x0053:  pop    %ebp
080ea41b +0x0054:  ret
080ea41c +0x0055:  push   %ebp
080ea41d +0x0056:  mov    %esp,%ebp
080ea41f +0x0058:  sub    $0x18,%esp
080ea422 +0x005b:  mov    0xc(%ebp),%eax
080ea425 +0x005e:  mov    %eax,0x4(%esp)
080ea429 +0x0062:  mov    0x8(%ebp),%eax
080ea42c +0x0065:  mov    %eax,(%esp)
080ea42f +0x0068:  call   080ea3f8 <+0x31>
080ea434 +0x006d:  leave
080ea435 +0x006e:  ret
080ea436 +0x006f:  push   %ebp
080ea437 +0x0070:  mov    %esp,%ebp
080ea439 +0x0072:  sub    $0x18,%esp
080ea43c +0x0075:  mov    0x8(%ebp),%eax
080ea43f +0x0078:  add    $0x4,%eax
080ea442 +0x007b:  mov    %eax,(%esp)
080ea445 +0x007e:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
080ea44a +0x0083:  leave
080ea44b +0x0084:  ret
080ea44c +0x0085:  push   %ebp
080ea44d +0x0086:  mov    %esp,%ebp
080ea44f +0x0088:  sub    $0x18,%esp
080ea452 +0x008b:  mov    0x8(%ebp),%eax
080ea455 +0x008e:  add    $0x4,%eax
080ea458 +0x0091:  mov    %eax,(%esp)
080ea45b +0x0094:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
080ea460 +0x0099:  leave
080ea461 +0x009a:  ret
080ea462 +0x009b:  push   %ebp
080ea463 +0x009c:  mov    %esp,%ebp
080ea465 +0x009e:  push   %ebx
080ea466 +0x009f:  sub    $0x14,%esp
080ea469 +0x00a2:  mov    0x8(%ebp),%eax
080ea46c +0x00a5:  mov    %eax,(%esp)
080ea46f +0x00a8:  call   0808e78c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5fc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5fc
080ea474 +0x00ad:  mov    (%eax),%ebx
080ea476 +0x00af:  mov    0xc(%ebp),%eax
080ea479 +0x00b2:  mov    %eax,(%esp)
080ea47c +0x00b5:  call   0808e78c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5fc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5fc
080ea481 +0x00ba:  mov    (%eax),%eax
080ea483 +0x00bc:  cmp    %eax,%ebx
080ea485 +0x00be:  setne  %al
080ea488 +0x00c1:  add    $0x14,%esp
080ea48b +0x00c4:  pop    %ebx
080ea48c +0x00c5:  pop    %ebp
080ea48d +0x00c6:  ret
080ea48e +0x00c7:  push   %ebp
080ea48f +0x00c8:  mov    %esp,%ebp
080ea491 +0x00ca:  push   %ebx
080ea492 +0x00cb:  sub    $0x34,%esp
080ea495 +0x00ce:  mov    0x8(%ebp),%ebx
080ea498 +0x00d1:  lea    -0x24(%ebp),%eax
080ea49b +0x00d4:  mov    0xc(%ebp),%edx
080ea49e +0x00d7:  mov    %edx,0x4(%esp)
080ea4a2 +0x00db:  mov    %eax,(%esp)
080ea4a5 +0x00de:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
080ea4aa +0x00e3:  sub    $0x4,%esp
080ea4ad +0x00e6:  movl   $0x1,-0x1c(%ebp)
080ea4b4 +0x00ed:  lea    -0x20(%ebp),%eax
080ea4b7 +0x00f0:  lea    -0x1c(%ebp),%edx
080ea4ba +0x00f3:  mov    %edx,0x8(%esp)
080ea4be +0x00f7:  lea    0x10(%ebp),%edx
080ea4c1 +0x00fa:  mov    %edx,0x4(%esp)
080ea4c5 +0x00fe:  mov    %eax,(%esp)
080ea4c8 +0x0101:  call   080ea9a2 <+0x5db>
080ea4cd +0x0106:  sub    $0x4,%esp
080ea4d0 +0x0109:  lea    -0x24(%ebp),%eax
080ea4d3 +0x010c:  mov    %eax,0x4(%esp)
080ea4d7 +0x0110:  lea    -0x20(%ebp),%eax
080ea4da +0x0113:  mov    %eax,(%esp)
080ea4dd +0x0116:  call   080ea462 <+0x9b>
080ea4e2 +0x011b:  test   %al,%al
080ea4e4 +0x011d:  je     080ea541 <+0x17a>
080ea4e6 +0x011f:  lea    -0x14(%ebp),%eax
080ea4e9 +0x0122:  mov    0xc(%ebp),%edx
080ea4ec +0x0125:  mov    %edx,0x4(%esp)
080ea4f0 +0x0129:  mov    %eax,(%esp)
080ea4f3 +0x012c:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
080ea4f8 +0x0131:  sub    $0x4,%esp
080ea4fb +0x0134:  movl   $0x1,-0xc(%ebp)
080ea502 +0x013b:  lea    -0x10(%ebp),%eax
080ea505 +0x013e:  lea    -0xc(%ebp),%edx
080ea508 +0x0141:  mov    %edx,0x8(%esp)
080ea50c +0x0145:  lea    0x10(%ebp),%edx
080ea50f +0x0148:  mov    %edx,0x4(%esp)
080ea513 +0x014c:  mov    %eax,(%esp)
080ea516 +0x014f:  call   080ea9a2 <+0x5db>
080ea51b +0x0154:  sub    $0x4,%esp
080ea51e +0x0157:  lea    -0x18(%ebp),%eax
080ea521 +0x015a:  mov    0x10(%ebp),%edx
080ea524 +0x015d:  mov    %edx,0xc(%esp)
080ea528 +0x0161:  mov    -0x14(%ebp),%edx
080ea52b +0x0164:  mov    %edx,0x8(%esp)
080ea52f +0x0168:  mov    -0x10(%ebp),%edx
080ea532 +0x016b:  mov    %edx,0x4(%esp)
080ea536 +0x016f:  mov    %eax,(%esp)
080ea539 +0x0172:  call   080ea9d8 <+0x611>
080ea53e +0x0177:  sub    $0x4,%esp
080ea541 +0x017a:  mov    0xc(%ebp),%eax
080ea544 +0x017d:  mov    0x4(%eax),%eax
080ea547 +0x0180:  lea    -0x4(%eax),%edx
080ea54a +0x0183:  mov    0xc(%ebp),%eax
080ea54d +0x0186:  mov    %edx,0x4(%eax)
080ea550 +0x0189:  mov    0xc(%ebp),%eax
080ea553 +0x018c:  mov    0x4(%eax),%edx
080ea556 +0x018f:  mov    0xc(%ebp),%eax
080ea559 +0x0192:  mov    %edx,0x4(%esp)
080ea55d +0x0196:  mov    %eax,(%esp)
080ea560 +0x0199:  call   0808e900 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x770>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x770
080ea565 +0x019e:  mov    0x10(%ebp),%eax
080ea568 +0x01a1:  mov    %eax,(%ebx)
080ea56a +0x01a3:  mov    %ebx,%eax
080ea56c +0x01a5:  mov    -0x4(%ebp),%ebx
080ea56f +0x01a8:  leave
080ea570 +0x01a9:  ret    $0x4
080ea573 +0x01ac:  nop
080ea574 +0x01ad:  push   %ebp
080ea575 +0x01ae:  mov    %esp,%ebp
080ea577 +0x01b0:  mov    0x8(%ebp),%eax
080ea57a +0x01b3:  mov    (%eax),%eax
080ea57c +0x01b5:  mov    0xc(%ebp),%edx
080ea57f +0x01b8:  shl    $0x2,%edx
080ea582 +0x01bb:  add    %edx,%eax
080ea584 +0x01bd:  pop    %ebp
080ea585 +0x01be:  ret
080ea586 +0x01bf:  push   %ebp
080ea587 +0x01c0:  mov    %esp,%ebp
080ea589 +0x01c2:  sub    $0x18,%esp
080ea58c +0x01c5:  mov    0x8(%ebp),%eax
080ea58f +0x01c8:  mov    %eax,(%esp)
080ea592 +0x01cb:  call   080eaaea <+0x723>
080ea597 +0x01d0:  leave
080ea598 +0x01d1:  ret
080ea599 +0x01d2:  nop
080ea59a +0x01d3:  push   %ebp
080ea59b +0x01d4:  mov    %esp,%ebp
080ea59d +0x01d6:  sub    $0x18,%esp
080ea5a0 +0x01d9:  mov    0x8(%ebp),%eax
080ea5a3 +0x01dc:  mov    %eax,(%esp)
080ea5a6 +0x01df:  call   080eaafe <+0x737>
080ea5ab +0x01e4:  leave
080ea5ac +0x01e5:  ret
080ea5ad +0x01e6:  nop
080ea5ae +0x01e7:  push   %ebp
080ea5af +0x01e8:  mov    %esp,%ebp
080ea5b1 +0x01ea:  push   %esi
080ea5b2 +0x01eb:  push   %ebx
080ea5b3 +0x01ec:  sub    $0x10,%esp
080ea5b6 +0x01ef:  mov    0x8(%ebp),%eax
080ea5b9 +0x01f2:  mov    %eax,(%esp)
080ea5bc +0x01f5:  call   080eab68 <+0x7a1>
080ea5c1 +0x01fa:  mov    %eax,0x4(%esp)
080ea5c5 +0x01fe:  mov    0x8(%ebp),%eax
080ea5c8 +0x0201:  mov    %eax,(%esp)
080ea5cb +0x0204:  call   080eab12 <+0x74b>
080ea5d0 +0x0209:  jmp    080ea5ed <+0x226>
080ea5d2 +0x020b:  mov    %edx,%ebx
080ea5d4 +0x020d:  mov    %eax,%esi
080ea5d6 +0x020f:  mov    0x8(%ebp),%eax
080ea5d9 +0x0212:  mov    %eax,(%esp)
080ea5dc +0x0215:  call   080ea59a <+0x1d3>
080ea5e1 +0x021a:  mov    %esi,%eax
080ea5e3 +0x021c:  mov    %ebx,%edx
080ea5e5 +0x021e:  mov    %eax,(%esp)
080ea5e8 +0x0221:  call   08ae3750 <_Unwind_Resume>
080ea5ed +0x0226:  mov    0x8(%ebp),%eax
080ea5f0 +0x0229:  mov    %eax,(%esp)
080ea5f3 +0x022c:  call   080ea59a <+0x1d3>
080ea5f8 +0x0231:  add    $0x10,%esp
080ea5fb +0x0234:  pop    %ebx
080ea5fc +0x0235:  pop    %esi
080ea5fd +0x0236:  pop    %ebp
080ea5fe +0x0237:  ret
080ea5ff +0x0238:  nop
080ea600 +0x0239:  push   %ebp
080ea601 +0x023a:  mov    %esp,%ebp
080ea603 +0x023c:  push   %ebx
080ea604 +0x023d:  sub    $0x14,%esp
080ea607 +0x0240:  mov    0x8(%ebp),%ebx
080ea60a +0x0243:  mov    0xc(%ebp),%eax
080ea60d +0x0246:  mov    %eax,0x4(%esp)
080ea611 +0x024a:  mov    %ebx,(%esp)
080ea614 +0x024d:  call   080eab8c <+0x7c5>
080ea619 +0x0252:  sub    $0x4,%esp
080ea61c +0x0255:  mov    %ebx,%eax
080ea61e +0x0257:  mov    -0x4(%ebp),%ebx
080ea621 +0x025a:  leave
080ea622 +0x025b:  ret    $0x4
080ea625 +0x025e:  nop
080ea626 +0x025f:  push   %ebp
080ea627 +0x0260:  mov    %esp,%ebp
080ea629 +0x0262:  push   %ebx
080ea62a +0x0263:  sub    $0x14,%esp
080ea62d +0x0266:  mov    0x8(%ebp),%ebx
080ea630 +0x0269:  mov    0xc(%ebp),%eax
080ea633 +0x026c:  mov    %eax,0x4(%esp)
080ea637 +0x0270:  mov    %ebx,(%esp)
080ea63a +0x0273:  call   080eabb2 <+0x7eb>
080ea63f +0x0278:  sub    $0x4,%esp
080ea642 +0x027b:  mov    %ebx,%eax
080ea644 +0x027d:  mov    -0x4(%ebp),%ebx
080ea647 +0x0280:  leave
080ea648 +0x0281:  ret    $0x4
080ea64b +0x0284:  nop
080ea64c +0x0285:  push   %ebp
080ea64d +0x0286:  mov    %esp,%ebp
080ea64f +0x0288:  mov    0x8(%ebp),%eax
080ea652 +0x028b:  mov    (%eax),%edx
080ea654 +0x028d:  mov    0xc(%ebp),%eax
080ea657 +0x0290:  mov    (%eax),%eax
080ea659 +0x0292:  cmp    %eax,%edx
080ea65b +0x0294:  setne  %al
080ea65e +0x0297:  pop    %ebp
080ea65f +0x0298:  ret
080ea660 +0x0299:  push   %ebp
080ea661 +0x029a:  mov    %esp,%ebp
080ea663 +0x029c:  mov    0x8(%ebp),%eax
080ea666 +0x029f:  mov    (%eax),%eax
080ea668 +0x02a1:  add    $0x10,%eax
080ea66b +0x02a4:  pop    %ebp
080ea66c +0x02a5:  ret
080ea66d +0x02a6:  nop
080ea66e +0x02a7:  push   %ebp
080ea66f +0x02a8:  mov    %esp,%ebp
080ea671 +0x02aa:  sub    $0x18,%esp
080ea674 +0x02ad:  mov    0x8(%ebp),%eax
080ea677 +0x02b0:  mov    (%eax),%eax
080ea679 +0x02b2:  mov    %eax,(%esp)
080ea67c +0x02b5:  call   086df800 <_ZSt18_Rb_tree_incrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_increment(std::_Rb_tree_node_base*)
080ea681 +0x02ba:  mov    0x8(%ebp),%edx
080ea684 +0x02bd:  mov    %eax,(%edx)
080ea686 +0x02bf:  mov    0x8(%ebp),%eax
080ea689 +0x02c2:  leave
080ea68a +0x02c3:  ret
080ea68b +0x02c4:  nop
080ea68c +0x02c5:  push   %ebp
080ea68d +0x02c6:  mov    %esp,%ebp
080ea68f +0x02c8:  push   %ebx
080ea690 +0x02c9:  sub    $0x14,%esp
080ea693 +0x02cc:  mov    0x8(%ebp),%ebx
080ea696 +0x02cf:  mov    0xc(%ebp),%eax
080ea699 +0x02d2:  mov    0x10(%ebp),%edx
080ea69c +0x02d5:  mov    %edx,0x8(%esp)
080ea6a0 +0x02d9:  mov    %eax,0x4(%esp)
080ea6a4 +0x02dd:  mov    %ebx,(%esp)
080ea6a7 +0x02e0:  call   080eabd8 <+0x811>
080ea6ac +0x02e5:  sub    $0x4,%esp
080ea6af +0x02e8:  mov    %ebx,%eax
080ea6b1 +0x02ea:  mov    -0x4(%ebp),%ebx
080ea6b4 +0x02ed:  leave
080ea6b5 +0x02ee:  ret    $0x4
080ea6b8 +0x02f1:  push   %ebp
080ea6b9 +0x02f2:  mov    %esp,%ebp
080ea6bb +0x02f4:  mov    0x8(%ebp),%eax
080ea6be +0x02f7:  mov    (%eax),%edx
080ea6c0 +0x02f9:  mov    0xc(%ebp),%eax
080ea6c3 +0x02fc:  mov    (%eax),%eax
080ea6c5 +0x02fe:  cmp    %eax,%edx
080ea6c7 +0x0300:  sete   %al
080ea6ca +0x0303:  pop    %ebp
080ea6cb +0x0304:  ret
080ea6cc +0x0305:  push   %ebp
080ea6cd +0x0306:  mov    %esp,%ebp
080ea6cf +0x0308:  push   %esi
080ea6d0 +0x0309:  push   %ebx
080ea6d1 +0x030a:  sub    $0x50,%esp
080ea6d4 +0x030d:  lea    -0x30(%ebp),%eax
080ea6d7 +0x0310:  mov    0xc(%ebp),%edx
080ea6da +0x0313:  mov    %edx,0x8(%esp)
080ea6de +0x0317:  mov    0x8(%ebp),%edx
080ea6e1 +0x031a:  mov    %edx,0x4(%esp)
080ea6e5 +0x031e:  mov    %eax,(%esp)
080ea6e8 +0x0321:  call   080eac96 <+0x8cf>
080ea6ed +0x0326:  sub    $0x4,%esp
080ea6f0 +0x0329:  lea    -0x2c(%ebp),%eax
080ea6f3 +0x032c:  mov    0x8(%ebp),%edx
080ea6f6 +0x032f:  mov    %edx,0x4(%esp)
080ea6fa +0x0333:  mov    %eax,(%esp)
080ea6fd +0x0336:  call   080ea626 <+0x25f>
080ea702 +0x033b:  sub    $0x4,%esp
080ea705 +0x033e:  lea    -0x2c(%ebp),%eax
080ea708 +0x0341:  mov    %eax,0x4(%esp)
080ea70c +0x0345:  lea    -0x30(%ebp),%eax
080ea70f +0x0348:  mov    %eax,(%esp)
080ea712 +0x034b:  call   080ea6b8 <+0x2f1>
080ea717 +0x0350:  test   %al,%al
080ea719 +0x0352:  jne    080ea757 <+0x390>
080ea71b +0x0354:  lea    -0x30(%ebp),%eax
080ea71e +0x0357:  mov    %eax,(%esp)
080ea721 +0x035a:  call   080eace8 <+0x921>
080ea726 +0x035f:  mov    %eax,%ebx
080ea728 +0x0361:  lea    -0x25(%ebp),%eax
080ea72b +0x0364:  mov    0x8(%ebp),%edx
080ea72e +0x0367:  mov    %edx,0x4(%esp)
080ea732 +0x036b:  mov    %eax,(%esp)
080ea735 +0x036e:  call   080eacc2 <+0x8fb>
080ea73a +0x0373:  sub    $0x4,%esp
080ea73d +0x0376:  mov    %ebx,0x8(%esp)
080ea741 +0x037a:  mov    0xc(%ebp),%eax
080ea744 +0x037d:  mov    %eax,0x4(%esp)
080ea748 +0x0381:  lea    -0x25(%ebp),%eax
080ea74b +0x0384:  mov    %eax,(%esp)
080ea74e +0x0387:  call   080eab74 <+0x7ad>
080ea753 +0x038c:  test   %al,%al
080ea755 +0x038e:  je     080ea75e <+0x397>
080ea757 +0x0390:  mov    $0x1,%eax
080ea75c +0x0395:  jmp    080ea763 <+0x39c>
080ea75e +0x0397:  mov    $0x0,%eax
080ea763 +0x039c:  test   %al,%al
080ea765 +0x039e:  je     080ea800 <+0x439>
080ea76b +0x03a4:  lea    -0x14(%ebp),%eax
080ea76e +0x03a7:  mov    %eax,(%esp)
080ea771 +0x03aa:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
080ea776 +0x03af:  lea    -0x14(%ebp),%eax
080ea779 +0x03b2:  mov    %eax,0x8(%esp)
080ea77d +0x03b6:  mov    0xc(%ebp),%eax
080ea780 +0x03b9:  mov    %eax,0x4(%esp)
080ea784 +0x03bd:  lea    -0x24(%ebp),%eax
080ea787 +0x03c0:  mov    %eax,(%esp)
080ea78a +0x03c3:  call   080eacf6 <+0x92f>
080ea78f +0x03c8:  lea    -0x3c(%ebp),%eax
080ea792 +0x03cb:  lea    -0x24(%ebp),%edx
080ea795 +0x03ce:  mov    %edx,0xc(%esp)
080ea799 +0x03d2:  mov    -0x30(%ebp),%edx
080ea79c +0x03d5:  mov    %edx,0x8(%esp)
080ea7a0 +0x03d9:  mov    0x8(%ebp),%edx
080ea7a3 +0x03dc:  mov    %edx,0x4(%esp)
080ea7a7 +0x03e0:  mov    %eax,(%esp)
080ea7aa +0x03e3:  call   080ead30 <+0x969>
080ea7af +0x03e8:  sub    $0x4,%esp
080ea7b2 +0x03eb:  mov    -0x3c(%ebp),%eax
080ea7b5 +0x03ee:  mov    %eax,-0x30(%ebp)
080ea7b8 +0x03f1:  lea    -0x24(%ebp),%eax
080ea7bb +0x03f4:  mov    %eax,(%esp)
080ea7be +0x03f7:  call   080ea44c <+0x85>
080ea7c3 +0x03fc:  jmp    080ea7f5 <+0x42e>
080ea7c5 +0x03fe:  mov    %edx,%ebx
080ea7c7 +0x0400:  mov    %eax,%esi
080ea7c9 +0x0402:  lea    -0x24(%ebp),%eax
080ea7cc +0x0405:  mov    %eax,(%esp)
080ea7cf +0x0408:  call   080ea44c <+0x85>
080ea7d4 +0x040d:  mov    %esi,%eax
080ea7d6 +0x040f:  mov    %ebx,%edx
080ea7d8 +0x0411:  jmp    080ea7da <+0x413>
080ea7da +0x0413:  mov    %edx,%ebx
080ea7dc +0x0415:  mov    %eax,%esi
080ea7de +0x0417:  lea    -0x14(%ebp),%eax
080ea7e1 +0x041a:  mov    %eax,(%esp)
080ea7e4 +0x041d:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
080ea7e9 +0x0422:  mov    %esi,%eax
080ea7eb +0x0424:  mov    %ebx,%edx
080ea7ed +0x0426:  mov    %eax,(%esp)
080ea7f0 +0x0429:  call   08ae3750 <_Unwind_Resume>
080ea7f5 +0x042e:  lea    -0x14(%ebp),%eax
080ea7f8 +0x0431:  mov    %eax,(%esp)
080ea7fb +0x0434:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
080ea800 +0x0439:  lea    -0x30(%ebp),%eax
080ea803 +0x043c:  mov    %eax,(%esp)
080ea806 +0x043f:  call   080eace8 <+0x921>
080ea80b +0x0444:  add    $0x4,%eax
080ea80e +0x0447:  lea    -0x8(%ebp),%esp
080ea811 +0x044a:  add    $0x0,%esp
080ea814 +0x044d:  pop    %ebx
080ea815 +0x044e:  pop    %esi
080ea816 +0x044f:  pop    %ebp
080ea817 +0x0450:  ret
080ea818 +0x0451:  push   %ebp
080ea819 +0x0452:  mov    %esp,%ebp
080ea81b +0x0454:  push   %ebx
080ea81c +0x0455:  sub    $0x14,%esp
080ea81f +0x0458:  mov    0x8(%ebp),%ebx
080ea822 +0x045b:  mov    0xc(%ebp),%eax
080ea825 +0x045e:  mov    %eax,0x4(%esp)
080ea829 +0x0462:  mov    %ebx,(%esp)
080ea82c +0x0465:  call   080ead76 <+0x9af>
080ea831 +0x046a:  sub    $0x4,%esp
080ea834 +0x046d:  mov    %ebx,%eax
080ea836 +0x046f:  mov    -0x4(%ebp),%ebx
080ea839 +0x0472:  leave
080ea83a +0x0473:  ret    $0x4
080ea83d +0x0476:  nop
080ea83e +0x0477:  push   %ebp
080ea83f +0x0478:  mov    %esp,%ebp
080ea841 +0x047a:  push   %ebx
080ea842 +0x047b:  sub    $0x14,%esp
080ea845 +0x047e:  mov    0x8(%ebp),%ebx
080ea848 +0x0481:  mov    0xc(%ebp),%eax
080ea84b +0x0484:  mov    %eax,0x4(%esp)
080ea84f +0x0488:  mov    %ebx,(%esp)
080ea852 +0x048b:  call   080ead9c <+0x9d5>
080ea857 +0x0490:  sub    $0x4,%esp
080ea85a +0x0493:  mov    %ebx,%eax
080ea85c +0x0495:  mov    -0x4(%ebp),%ebx
080ea85f +0x0498:  leave
080ea860 +0x0499:  ret    $0x4
080ea863 +0x049c:  nop
080ea864 +0x049d:  push   %ebp
080ea865 +0x049e:  mov    %esp,%ebp
080ea867 +0x04a0:  mov    0x8(%ebp),%eax
080ea86a +0x04a3:  mov    (%eax),%edx
080ea86c +0x04a5:  mov    0xc(%ebp),%eax
080ea86f +0x04a8:  mov    (%eax),%eax
080ea871 +0x04aa:  cmp    %eax,%edx
080ea873 +0x04ac:  setne  %al
080ea876 +0x04af:  pop    %ebp
080ea877 +0x04b0:  ret
080ea878 +0x04b1:  push   %ebp
080ea879 +0x04b2:  mov    %esp,%ebp
080ea87b +0x04b4:  mov    0x8(%ebp),%eax
080ea87e +0x04b7:  mov    (%eax),%eax
080ea880 +0x04b9:  add    $0x10,%eax
080ea883 +0x04bc:  pop    %ebp
080ea884 +0x04bd:  ret
080ea885 +0x04be:  nop
080ea886 +0x04bf:  push   %ebp
080ea887 +0x04c0:  mov    %esp,%ebp
080ea889 +0x04c2:  sub    $0x18,%esp
080ea88c +0x04c5:  mov    0x8(%ebp),%eax
080ea88f +0x04c8:  mov    (%eax),%eax
080ea891 +0x04ca:  mov    %eax,(%esp)
080ea894 +0x04cd:  call   086df850 <_ZSt18_Rb_tree_incrementPKSt18_Rb_tree_node_base>  ; std::_Rb_tree_increment(std::_Rb_tree_node_base const*)
080ea899 +0x04d2:  mov    0x8(%ebp),%edx
080ea89c +0x04d5:  mov    %eax,(%edx)
080ea89e +0x04d7:  mov    0x8(%ebp),%eax
080ea8a1 +0x04da:  leave
080ea8a2 +0x04db:  ret
080ea8a3 +0x04dc:  nop
080ea8a4 +0x04dd:  push   %ebp
080ea8a5 +0x04de:  mov    %esp,%ebp
080ea8a7 +0x04e0:  mov    0x8(%ebp),%eax
080ea8aa +0x04e3:  mov    (%eax),%eax
080ea8ac +0x04e5:  mov    0xc(%ebp),%edx
080ea8af +0x04e8:  shl    $0x3,%edx
080ea8b2 +0x04eb:  add    %edx,%eax
080ea8b4 +0x04ed:  pop    %ebp
080ea8b5 +0x04ee:  ret
080ea8b6 +0x04ef:  push   %ebp
080ea8b7 +0x04f0:  mov    %esp,%ebp
080ea8b9 +0x04f2:  push   %edi
080ea8ba +0x04f3:  push   %esi
080ea8bb +0x04f4:  push   %ebx
080ea8bc +0x04f5:  sub    $0x1c,%esp
080ea8bf +0x04f8:  mov    0x8(%ebp),%ebx
080ea8c2 +0x04fb:  mov    %ebx,%edi
080ea8c4 +0x04fd:  mov    0x10(%ebp),%eax
080ea8c7 +0x0500:  mov    %eax,(%esp)
080ea8ca +0x0503:  call   080eadc2 <+0x9fb>
080ea8cf +0x0508:  mov    %eax,%esi
080ea8d1 +0x050a:  mov    0xc(%ebp),%eax
080ea8d4 +0x050d:  mov    %eax,(%esp)
080ea8d7 +0x0510:  call   080c7158 <_GLOBAL__I_g_ServerString_+0x6c3>  ; global constructors keyed to g_ServerString_+0x6c3
080ea8dc +0x0515:  mov    %esi,0x8(%esp)
080ea8e0 +0x0519:  mov    %eax,0x4(%esp)
080ea8e4 +0x051d:  mov    %edi,(%esp)
080ea8e7 +0x0520:  call   080eadca <+0xa03>
080ea8ec +0x0525:  mov    %ebx,%eax
080ea8ee +0x0527:  mov    %ebx,%eax
080ea8f0 +0x0529:  add    $0x1c,%esp
080ea8f3 +0x052c:  pop    %ebx
080ea8f4 +0x052d:  pop    %esi
080ea8f5 +0x052e:  pop    %edi
080ea8f6 +0x052f:  pop    %ebp
080ea8f7 +0x0530:  ret    $0x4
080ea8fa +0x0533:  push   %ebp
080ea8fb +0x0534:  mov    %esp,%ebp
080ea8fd +0x0536:  sub    $0x18,%esp
080ea900 +0x0539:  mov    0xc(%ebp),%eax
080ea903 +0x053c:  mov    %eax,(%esp)
080ea906 +0x053f:  call   0808102a <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x1050>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x1050
080ea90b +0x0544:  mov    (%eax),%eax
080ea90d +0x0546:  mov    %eax,%edx
080ea90f +0x0548:  mov    0x8(%ebp),%eax
080ea912 +0x054b:  mov    %dx,(%eax)
080ea915 +0x054e:  mov    0xc(%ebp),%eax
080ea918 +0x0551:  add    $0x4,%eax
080ea91b +0x0554:  mov    %eax,(%esp)
080ea91e +0x0557:  call   080eae01 <+0xa3a>
080ea923 +0x055c:  mov    0x8(%ebp),%edx
080ea926 +0x055f:  add    $0x4,%edx
080ea929 +0x0562:  mov    %eax,0x4(%esp)
080ea92d +0x0566:  mov    %edx,(%esp)
080ea930 +0x0569:  call   080eae0a <+0xa43>
080ea935 +0x056e:  leave
080ea936 +0x056f:  ret
080ea937 +0x0570:  nop
080ea938 +0x0571:  push   %ebp
080ea939 +0x0572:  mov    %esp,%ebp
080ea93b +0x0574:  push   %ebx
080ea93c +0x0575:  sub    $0x14,%esp
080ea93f +0x0578:  mov    0x8(%ebp),%ebx
080ea942 +0x057b:  mov    0xc(%ebp),%eax
080ea945 +0x057e:  mov    0x10(%ebp),%edx
080ea948 +0x0581:  mov    %edx,0x8(%esp)
080ea94c +0x0585:  mov    %eax,0x4(%esp)
080ea950 +0x0589:  mov    %ebx,(%esp)
080ea953 +0x058c:  call   080eae2c <+0xa65>
080ea958 +0x0591:  sub    $0x4,%esp
080ea95b +0x0594:  mov    %ebx,%eax
080ea95d +0x0596:  mov    -0x4(%ebp),%ebx
080ea960 +0x0599:  leave
080ea961 +0x059a:  ret    $0x4
080ea964 +0x059d:  push   %ebp
080ea965 +0x059e:  mov    %esp,%ebp
080ea967 +0x05a0:  sub    $0x18,%esp
080ea96a +0x05a3:  mov    0x8(%ebp),%eax
080ea96d +0x05a6:  mov    %eax,(%esp)
080ea970 +0x05a9:  call   080eaffc <+0xc35>
080ea975 +0x05ae:  leave
080ea976 +0x05af:  ret
080ea977 +0x05b0:  nop
080ea978 +0x05b1:  push   %ebp
080ea979 +0x05b2:  mov    %esp,%ebp
080ea97b +0x05b4:  sub    $0x18,%esp
080ea97e +0x05b7:  mov    0x8(%ebp),%eax
080ea981 +0x05ba:  mov    %eax,(%esp)
080ea984 +0x05bd:  call   080eb008 <+0xc41>
080ea989 +0x05c2:  leave
080ea98a +0x05c3:  ret
080ea98b +0x05c4:  nop
080ea98c +0x05c5:  push   %ebp
080ea98d +0x05c6:  mov    %esp,%ebp
080ea98f +0x05c8:  mov    0x8(%ebp),%eax
080ea992 +0x05cb:  mov    (%eax),%eax
080ea994 +0x05cd:  lea    0x4(%eax),%edx
080ea997 +0x05d0:  mov    0x8(%ebp),%eax
080ea99a +0x05d3:  mov    %edx,(%eax)
080ea99c +0x05d5:  mov    0x8(%ebp),%eax
080ea99f +0x05d8:  pop    %ebp
080ea9a0 +0x05d9:  ret
080ea9a1 +0x05da:  nop
080ea9a2 +0x05db:  push   %ebp
080ea9a3 +0x05dc:  mov    %esp,%ebp
080ea9a5 +0x05de:  push   %ebx
080ea9a6 +0x05df:  sub    $0x24,%esp
080ea9a9 +0x05e2:  mov    0x8(%ebp),%ebx
080ea9ac +0x05e5:  mov    0xc(%ebp),%eax
080ea9af +0x05e8:  mov    (%eax),%edx
080ea9b1 +0x05ea:  mov    0x10(%ebp),%eax
080ea9b4 +0x05ed:  mov    (%eax),%eax
080ea9b6 +0x05ef:  shl    $0x2,%eax
080ea9b9 +0x05f2:  lea    (%edx,%eax,1),%eax
080ea9bc +0x05f5:  mov    %eax,-0xc(%ebp)
080ea9bf +0x05f8:  lea    -0xc(%ebp),%eax
080ea9c2 +0x05fb:  mov    %eax,0x4(%esp)
080ea9c6 +0x05ff:  mov    %ebx,(%esp)
080ea9c9 +0x0602:  call   0808e3c6 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x236>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x236
080ea9ce +0x0607:  mov    %ebx,%eax
080ea9d0 +0x0609:  add    $0x24,%esp
080ea9d3 +0x060c:  pop    %ebx
080ea9d4 +0x060d:  pop    %ebp
080ea9d5 +0x060e:  ret    $0x4
080ea9d8 +0x0611:  push   %ebp
080ea9d9 +0x0612:  mov    %esp,%ebp
080ea9db +0x0614:  push   %ebx
080ea9dc +0x0615:  sub    $0x24,%esp
080ea9df +0x0618:  mov    0x8(%ebp),%ebx
080ea9e2 +0x061b:  lea    -0x10(%ebp),%eax
080ea9e5 +0x061e:  mov    0x10(%ebp),%edx
080ea9e8 +0x0621:  mov    %edx,0x4(%esp)
080ea9ec +0x0625:  mov    %eax,(%esp)
080ea9ef +0x0628:  call   080eb018 <+0xc51>
080ea9f4 +0x062d:  sub    $0x4,%esp
080ea9f7 +0x0630:  lea    -0xc(%ebp),%eax
080ea9fa +0x0633:  mov    0xc(%ebp),%edx
080ea9fd +0x0636:  mov    %edx,0x4(%esp)
080eaa01 +0x063a:  mov    %eax,(%esp)
080eaa04 +0x063d:  call   080eb018 <+0xc51>
080eaa09 +0x0642:  sub    $0x4,%esp
080eaa0c +0x0645:  mov    0x14(%ebp),%eax
080eaa0f +0x0648:  mov    %eax,0xc(%esp)
080eaa13 +0x064c:  mov    -0x10(%ebp),%eax
080eaa16 +0x064f:  mov    %eax,0x8(%esp)
080eaa1a +0x0653:  mov    -0xc(%ebp),%eax
080eaa1d +0x0656:  mov    %eax,0x4(%esp)
080eaa21 +0x065a:  mov    %ebx,(%esp)
080eaa24 +0x065d:  call   080eb027 <+0xc60>
080eaa29 +0x0662:  sub    $0x4,%esp
080eaa2c +0x0665:  mov    %ebx,%eax
080eaa2e +0x0667:  mov    -0x4(%ebp),%ebx
080eaa31 +0x066a:  leave
080eaa32 +0x066b:  ret    $0x4
080eaa35 +0x066e:  nop
080eaa36 +0x066f:  push   %ebp
080eaa37 +0x0670:  mov    %esp,%ebp
080eaa39 +0x0672:  push   %esi
080eaa3a +0x0673:  push   %ebx
080eaa3b +0x0674:  sub    $0x20,%esp
080eaa3e +0x0677:  mov    0xc(%ebp),%eax
080eaa41 +0x067a:  mov    %eax,(%esp)
080eaa44 +0x067d:  call   0808e3de <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x24e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x24e
080eaa49 +0x0682:  mov    %eax,%ebx
080eaa4b +0x0684:  mov    0xc(%ebp),%eax
080eaa4e +0x0687:  mov    %eax,(%esp)
080eaa51 +0x068a:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
080eaa56 +0x068f:  mov    0x8(%ebp),%edx
080eaa59 +0x0692:  mov    %ebx,0x8(%esp)
080eaa5d +0x0696:  mov    %eax,0x4(%esp)
080eaa61 +0x069a:  mov    %edx,(%esp)
080eaa64 +0x069d:  call   080eb086 <+0xcbf>
080eaa69 +0x06a2:  mov    0x8(%ebp),%eax
080eaa6c +0x06a5:  mov    %eax,(%esp)
080eaa6f +0x06a8:  call   08083f0e <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x151>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x151
080eaa74 +0x06ad:  mov    %eax,%ebx
080eaa76 +0x06af:  mov    0x8(%ebp),%eax
080eaa79 +0x06b2:  mov    (%eax),%esi
080eaa7b +0x06b4:  lea    -0x10(%ebp),%eax
080eaa7e +0x06b7:  mov    0xc(%ebp),%edx
080eaa81 +0x06ba:  mov    %edx,0x4(%esp)
080eaa85 +0x06be:  mov    %eax,(%esp)
080eaa88 +0x06c1:  call   080cd37a <_GLOBAL__I__ZN10BingoEventC2Ev+0x21c7>  ; global constructors keyed to BingoEvent::BingoEvent()+0x21c7
080eaa8d +0x06c6:  sub    $0x4,%esp
080eaa90 +0x06c9:  lea    -0xc(%ebp),%eax
080eaa93 +0x06cc:  mov    0xc(%ebp),%edx
080eaa96 +0x06cf:  mov    %edx,0x4(%esp)
080eaa9a +0x06d3:  mov    %eax,(%esp)
080eaa9d +0x06d6:  call   080cd34e <_GLOBAL__I__ZN10BingoEventC2Ev+0x219b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x219b
080eaaa2 +0x06db:  sub    $0x4,%esp
080eaaa5 +0x06de:  mov    %ebx,0xc(%esp)
080eaaa9 +0x06e2:  mov    %esi,0x8(%esp)
080eaaad +0x06e6:  mov    -0x10(%ebp),%eax
080eaab0 +0x06e9:  mov    %eax,0x4(%esp)
080eaab4 +0x06ed:  mov    -0xc(%ebp),%eax
080eaab7 +0x06f0:  mov    %eax,(%esp)
080eaaba +0x06f3:  call   080d1037 <_GLOBAL__I__ZN10BingoEventC2Ev+0x5e84>  ; global constructors keyed to BingoEvent::BingoEvent()+0x5e84
080eaabf +0x06f8:  mov    0x8(%ebp),%edx
080eaac2 +0x06fb:  mov    %eax,0x4(%edx)
080eaac5 +0x06fe:  lea    -0x8(%ebp),%esp
080eaac8 +0x0701:  add    $0x0,%esp
080eaacb +0x0704:  pop    %ebx
080eaacc +0x0705:  pop    %esi
080eaacd +0x0706:  pop    %ebp
080eaace +0x0707:  ret
080eaacf +0x0708:  mov    %edx,%ebx
080eaad1 +0x070a:  mov    %eax,%esi
080eaad3 +0x070c:  mov    0x8(%ebp),%eax
080eaad6 +0x070f:  mov    %eax,(%esp)
080eaad9 +0x0712:  call   08083ea6 <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0xe9>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0xe9
080eaade +0x0717:  mov    %esi,%eax
080eaae0 +0x0719:  mov    %ebx,%edx
080eaae2 +0x071b:  mov    %eax,(%esp)
080eaae5 +0x071e:  call   08ae3750 <_Unwind_Resume>
080eaaea +0x0723:  push   %ebp
080eaaeb +0x0724:  mov    %esp,%ebp
080eaaed +0x0726:  sub    $0x18,%esp
080eaaf0 +0x0729:  mov    0x8(%ebp),%eax
080eaaf3 +0x072c:  mov    %eax,(%esp)
080eaaf6 +0x072f:  call   080eb0f8 <+0xd31>
080eaafb +0x0734:  leave
080eaafc +0x0735:  ret
080eaafd +0x0736:  nop
080eaafe +0x0737:  push   %ebp
080eaaff +0x0738:  mov    %esp,%ebp
080eab01 +0x073a:  sub    $0x18,%esp
080eab04 +0x073d:  mov    0x8(%ebp),%eax
080eab07 +0x0740:  mov    %eax,(%esp)
080eab0a +0x0743:  call   080eb148 <+0xd81>
080eab0f +0x0748:  leave
080eab10 +0x0749:  ret
080eab11 +0x074a:  nop
080eab12 +0x074b:  push   %ebp
080eab13 +0x074c:  mov    %esp,%ebp
080eab15 +0x074e:  sub    $0x28,%esp
080eab18 +0x0751:  jmp    080eab5a <+0x793>
080eab1a +0x0753:  mov    0xc(%ebp),%eax
080eab1d +0x0756:  mov    %eax,(%esp)
080eab20 +0x0759:  call   080eb14d <+0xd86>
080eab25 +0x075e:  mov    %eax,0x4(%esp)
080eab29 +0x0762:  mov    0x8(%ebp),%eax
080eab2c +0x0765:  mov    %eax,(%esp)
080eab2f +0x0768:  call   080eab12 <+0x74b>
080eab34 +0x076d:  mov    0xc(%ebp),%eax
080eab37 +0x0770:  mov    %eax,(%esp)
080eab3a +0x0773:  call   080eb158 <+0xd91>
080eab3f +0x0778:  mov    %eax,-0xc(%ebp)
080eab42 +0x077b:  mov    0xc(%ebp),%eax
080eab45 +0x077e:  mov    %eax,0x4(%esp)
080eab49 +0x0782:  mov    0x8(%ebp),%eax
080eab4c +0x0785:  mov    %eax,(%esp)
080eab4f +0x0788:  call   080eb164 <+0xd9d>
080eab54 +0x078d:  mov    -0xc(%ebp),%eax
080eab57 +0x0790:  mov    %eax,0xc(%ebp)
080eab5a +0x0793:  cmpl   $0x0,0xc(%ebp)
080eab5e +0x0797:  setne  %al
080eab61 +0x079a:  test   %al,%al
080eab63 +0x079c:  jne    080eab1a <+0x753>
080eab65 +0x079e:  leave
080eab66 +0x079f:  ret
080eab67 +0x07a0:  nop
080eab68 +0x07a1:  push   %ebp
080eab69 +0x07a2:  mov    %esp,%ebp
080eab6b +0x07a4:  mov    0x8(%ebp),%eax
080eab6e +0x07a7:  mov    0x5(%eax),%eax
080eab71 +0x07aa:  pop    %ebp
080eab72 +0x07ab:  ret
080eab73 +0x07ac:  nop
080eab74 +0x07ad:  push   %ebp
080eab75 +0x07ae:  mov    %esp,%ebp
080eab77 +0x07b0:  mov    0xc(%ebp),%eax
080eab7a +0x07b3:  movzwl (%eax),%edx
080eab7d +0x07b6:  mov    0x10(%ebp),%eax
080eab80 +0x07b9:  movzwl (%eax),%eax
080eab83 +0x07bc:  cmp    %ax,%dx
080eab86 +0x07bf:  setl   %al
080eab89 +0x07c2:  pop    %ebp
080eab8a +0x07c3:  ret
080eab8b +0x07c4:  nop
080eab8c +0x07c5:  push   %ebp
080eab8d +0x07c6:  mov    %esp,%ebp
080eab8f +0x07c8:  push   %ebx
080eab90 +0x07c9:  sub    $0x14,%esp
080eab93 +0x07cc:  mov    0x8(%ebp),%ebx
080eab96 +0x07cf:  mov    0xc(%ebp),%eax
080eab99 +0x07d2:  mov    0x9(%eax),%eax
080eab9c +0x07d5:  mov    %eax,0x4(%esp)
080eaba0 +0x07d9:  mov    %ebx,(%esp)
080eaba3 +0x07dc:  call   080eb1c4 <+0xdfd>
080eaba8 +0x07e1:  mov    %ebx,%eax
080eabaa +0x07e3:  add    $0x14,%esp
080eabad +0x07e6:  pop    %ebx
080eabae +0x07e7:  pop    %ebp
080eabaf +0x07e8:  ret    $0x4
080eabb2 +0x07eb:  push   %ebp
080eabb3 +0x07ec:  mov    %esp,%ebp
080eabb5 +0x07ee:  push   %ebx
080eabb6 +0x07ef:  sub    $0x14,%esp
080eabb9 +0x07f2:  mov    0x8(%ebp),%ebx
080eabbc +0x07f5:  mov    0xc(%ebp),%eax
080eabbf +0x07f8:  add    $0x1,%eax
080eabc2 +0x07fb:  mov    %eax,0x4(%esp)
080eabc6 +0x07ff:  mov    %ebx,(%esp)
080eabc9 +0x0802:  call   080eb1c4 <+0xdfd>
080eabce +0x0807:  mov    %ebx,%eax
080eabd0 +0x0809:  add    $0x14,%esp
080eabd3 +0x080c:  pop    %ebx
080eabd4 +0x080d:  pop    %ebp
080eabd5 +0x080e:  ret    $0x4
080eabd8 +0x0811:  push   %ebp
080eabd9 +0x0812:  mov    %esp,%ebp
080eabdb +0x0814:  push   %esi
080eabdc +0x0815:  push   %ebx
080eabdd +0x0816:  sub    $0x30,%esp
080eabe0 +0x0819:  mov    0x8(%ebp),%ebx
080eabe3 +0x081c:  mov    0xc(%ebp),%eax
080eabe6 +0x081f:  mov    %eax,(%esp)
080eabe9 +0x0822:  call   080eb198 <+0xdd1>
080eabee +0x0827:  mov    %eax,%esi
080eabf0 +0x0829:  mov    0xc(%ebp),%eax
080eabf3 +0x082c:  mov    %eax,(%esp)
080eabf6 +0x082f:  call   080eab68 <+0x7a1>
080eabfb +0x0834:  lea    -0x10(%ebp),%edx
080eabfe +0x0837:  mov    0x10(%ebp),%ecx
080eac01 +0x083a:  mov    %ecx,0x10(%esp)
080eac05 +0x083e:  mov    %esi,0xc(%esp)
080eac09 +0x0842:  mov    %eax,0x8(%esp)
080eac0d +0x0846:  mov    0xc(%ebp),%eax
080eac10 +0x0849:  mov    %eax,0x4(%esp)
080eac14 +0x084d:  mov    %edx,(%esp)
080eac17 +0x0850:  call   080eb1d2 <+0xe0b>
080eac1c +0x0855:  sub    $0x4,%esp
080eac1f +0x0858:  lea    -0xc(%ebp),%eax
080eac22 +0x085b:  mov    0xc(%ebp),%edx
080eac25 +0x085e:  mov    %edx,0x4(%esp)
080eac29 +0x0862:  mov    %eax,(%esp)
080eac2c +0x0865:  call   080eabb2 <+0x7eb>
080eac31 +0x086a:  sub    $0x4,%esp
080eac34 +0x086d:  lea    -0xc(%ebp),%eax
080eac37 +0x0870:  mov    %eax,0x4(%esp)
080eac3b +0x0874:  lea    -0x10(%ebp),%eax
080eac3e +0x0877:  mov    %eax,(%esp)
080eac41 +0x087a:  call   080ea6b8 <+0x2f1>
080eac46 +0x087f:  test   %al,%al
080eac48 +0x0881:  jne    080eac6f <+0x8a8>
080eac4a +0x0883:  mov    -0x10(%ebp),%eax
080eac4d +0x0886:  mov    %eax,(%esp)
080eac50 +0x0889:  call   080eb24e <+0xe87>
080eac55 +0x088e:  mov    0xc(%ebp),%edx
080eac58 +0x0891:  mov    %eax,0x8(%esp)
080eac5c +0x0895:  mov    0x10(%ebp),%eax
080eac5f +0x0898:  mov    %eax,0x4(%esp)
080eac63 +0x089c:  mov    %edx,(%esp)
080eac66 +0x089f:  call   080eab74 <+0x7ad>
080eac6b +0x08a4:  test   %al,%al
080eac6d +0x08a6:  je     080eac83 <+0x8bc>
080eac6f +0x08a8:  mov    0xc(%ebp),%eax
080eac72 +0x08ab:  mov    %eax,0x4(%esp)
080eac76 +0x08af:  mov    %ebx,(%esp)
080eac79 +0x08b2:  call   080eabb2 <+0x7eb>
080eac7e +0x08b7:  sub    $0x4,%esp
080eac81 +0x08ba:  jmp    080eac88 <+0x8c1>
080eac83 +0x08bc:  mov    -0x10(%ebp),%eax
080eac86 +0x08bf:  mov    %eax,(%ebx)
080eac88 +0x08c1:  mov    %ebx,%eax
080eac8a +0x08c3:  lea    -0x8(%ebp),%esp
080eac8d +0x08c6:  add    $0x0,%esp
080eac90 +0x08c9:  pop    %ebx
080eac91 +0x08ca:  pop    %esi
080eac92 +0x08cb:  pop    %ebp
080eac93 +0x08cc:  ret    $0x4
080eac96 +0x08cf:  push   %ebp
080eac97 +0x08d0:  mov    %esp,%ebp
080eac99 +0x08d2:  push   %ebx
080eac9a +0x08d3:  sub    $0x14,%esp
080eac9d +0x08d6:  mov    0x8(%ebp),%ebx
080eaca0 +0x08d9:  mov    0xc(%ebp),%eax
080eaca3 +0x08dc:  mov    0x10(%ebp),%edx
080eaca6 +0x08df:  mov    %edx,0x8(%esp)
080eacaa +0x08e3:  mov    %eax,0x4(%esp)
080eacae +0x08e7:  mov    %ebx,(%esp)
080eacb1 +0x08ea:  call   080eb270 <+0xea9>
080eacb6 +0x08ef:  sub    $0x4,%esp
080eacb9 +0x08f2:  mov    %ebx,%eax
080eacbb +0x08f4:  mov    -0x4(%ebp),%ebx
080eacbe +0x08f7:  leave
080eacbf +0x08f8:  ret    $0x4
080eacc2 +0x08fb:  push   %ebp
080eacc3 +0x08fc:  mov    %esp,%ebp
080eacc5 +0x08fe:  push   %ebx
080eacc6 +0x08ff:  sub    $0x14,%esp
080eacc9 +0x0902:  mov    0x8(%ebp),%ebx
080eaccc +0x0905:  mov    0xc(%ebp),%eax
080eaccf +0x0908:  mov    %eax,0x4(%esp)
080eacd3 +0x090c:  mov    %ebx,(%esp)
080eacd6 +0x090f:  call   080eb2c2 <+0xefb>
080eacdb +0x0914:  sub    $0x4,%esp
080eacde +0x0917:  mov    %ebx,%eax
080eace0 +0x0919:  mov    -0x4(%ebp),%ebx
080eace3 +0x091c:  leave
080eace4 +0x091d:  ret    $0x4
080eace7 +0x0920:  nop
080eace8 +0x0921:  push   %ebp
080eace9 +0x0922:  mov    %esp,%ebp
080eaceb +0x0924:  mov    0x8(%ebp),%eax
080eacee +0x0927:  mov    (%eax),%eax
080eacf0 +0x0929:  add    $0x10,%eax
080eacf3 +0x092c:  pop    %ebp
080eacf4 +0x092d:  ret
080eacf5 +0x092e:  nop
080eacf6 +0x092f:  push   %ebp
080eacf7 +0x0930:  mov    %esp,%ebp
080eacf9 +0x0932:  sub    $0x18,%esp
080eacfc +0x0935:  mov    0xc(%ebp),%eax
080eacff +0x0938:  mov    %eax,(%esp)
080ead02 +0x093b:  call   080eb1bb <+0xdf4>
080ead07 +0x0940:  movzwl (%eax),%edx
080ead0a +0x0943:  mov    0x8(%ebp),%eax
080ead0d +0x0946:  mov    %dx,(%eax)
080ead10 +0x0949:  mov    0x10(%ebp),%eax
080ead13 +0x094c:  mov    %eax,(%esp)
080ead16 +0x094f:  call   080eb2cc <+0xf05>
080ead1b +0x0954:  mov    0x8(%ebp),%edx
080ead1e +0x0957:  add    $0x4,%edx
080ead21 +0x095a:  mov    %eax,0x4(%esp)
080ead25 +0x095e:  mov    %edx,(%esp)
080ead28 +0x0961:  call   080eae0a <+0xa43>
080ead2d +0x0966:  leave
080ead2e +0x0967:  ret
080ead2f +0x0968:  nop
080ead30 +0x0969:  push   %ebp
080ead31 +0x096a:  mov    %esp,%ebp
080ead33 +0x096c:  push   %ebx
080ead34 +0x096d:  sub    $0x24,%esp
080ead37 +0x0970:  mov    0x8(%ebp),%ebx
080ead3a +0x0973:  lea    0x10(%ebp),%eax
080ead3d +0x0976:  mov    %eax,0x4(%esp)
080ead41 +0x097a:  lea    -0xc(%ebp),%eax
080ead44 +0x097d:  mov    %eax,(%esp)
080ead47 +0x0980:  call   080eb2d4 <+0xf0d>
080ead4c +0x0985:  mov    0xc(%ebp),%eax
080ead4f +0x0988:  mov    0x14(%ebp),%edx
080ead52 +0x098b:  mov    %edx,0xc(%esp)
080ead56 +0x098f:  mov    -0xc(%ebp),%edx
080ead59 +0x0992:  mov    %edx,0x8(%esp)
080ead5d +0x0996:  mov    %eax,0x4(%esp)
080ead61 +0x099a:  mov    %ebx,(%esp)
080ead64 +0x099d:  call   080eb2e4 <+0xf1d>
080ead69 +0x09a2:  sub    $0x4,%esp
080ead6c +0x09a5:  mov    %ebx,%eax
080ead6e +0x09a7:  mov    -0x4(%ebp),%ebx
080ead71 +0x09aa:  leave
080ead72 +0x09ab:  ret    $0x4
080ead75 +0x09ae:  nop
080ead76 +0x09af:  push   %ebp
080ead77 +0x09b0:  mov    %esp,%ebp
080ead79 +0x09b2:  push   %ebx
080ead7a +0x09b3:  sub    $0x14,%esp
080ead7d +0x09b6:  mov    0x8(%ebp),%ebx
080ead80 +0x09b9:  mov    0xc(%ebp),%eax
080ead83 +0x09bc:  mov    0x9(%eax),%eax
080ead86 +0x09bf:  mov    %eax,0x4(%esp)
080ead8a +0x09c3:  mov    %ebx,(%esp)
080ead8d +0x09c6:  call   080eb6aa <+0x12e3>
080ead92 +0x09cb:  mov    %ebx,%eax
080ead94 +0x09cd:  add    $0x14,%esp
080ead97 +0x09d0:  pop    %ebx
080ead98 +0x09d1:  pop    %ebp
080ead99 +0x09d2:  ret    $0x4
080ead9c +0x09d5:  push   %ebp
080ead9d +0x09d6:  mov    %esp,%ebp
080ead9f +0x09d8:  push   %ebx
080eada0 +0x09d9:  sub    $0x14,%esp
080eada3 +0x09dc:  mov    0x8(%ebp),%ebx
080eada6 +0x09df:  mov    0xc(%ebp),%eax
080eada9 +0x09e2:  add    $0x1,%eax
080eadac +0x09e5:  mov    %eax,0x4(%esp)
080eadb0 +0x09e9:  mov    %ebx,(%esp)
080eadb3 +0x09ec:  call   080eb6aa <+0x12e3>
080eadb8 +0x09f1:  mov    %ebx,%eax
080eadba +0x09f3:  add    $0x14,%esp
080eadbd +0x09f6:  pop    %ebx
080eadbe +0x09f7:  pop    %ebp
080eadbf +0x09f8:  ret    $0x4
080eadc2 +0x09fb:  push   %ebp
080eadc3 +0x09fc:  mov    %esp,%ebp
080eadc5 +0x09fe:  mov    0x8(%ebp),%eax
080eadc8 +0x0a01:  pop    %ebp
080eadc9 +0x0a02:  ret
080eadca +0x0a03:  push   %ebp
080eadcb +0x0a04:  mov    %esp,%ebp
080eadcd +0x0a06:  sub    $0x18,%esp
080eadd0 +0x0a09:  mov    0xc(%ebp),%eax
080eadd3 +0x0a0c:  mov    %eax,(%esp)
080eadd6 +0x0a0f:  call   080c7158 <_GLOBAL__I_g_ServerString_+0x6c3>  ; global constructors keyed to g_ServerString_+0x6c3
080eaddb +0x0a14:  mov    (%eax),%edx
080eaddd +0x0a16:  mov    0x8(%ebp),%eax
080eade0 +0x0a19:  mov    %edx,(%eax)
080eade2 +0x0a1b:  mov    0x10(%ebp),%eax
080eade5 +0x0a1e:  mov    %eax,(%esp)
080eade8 +0x0a21:  call   080eadc2 <+0x9fb>
080eaded +0x0a26:  mov    0x8(%ebp),%edx
080eadf0 +0x0a29:  add    $0x4,%edx
080eadf3 +0x0a2c:  mov    %eax,0x4(%esp)
080eadf7 +0x0a30:  mov    %edx,(%esp)
080eadfa +0x0a33:  call   080eaa36 <+0x66f>
080eadff +0x0a38:  leave
080eae00 +0x0a39:  ret
080eae01 +0x0a3a:  push   %ebp
080eae02 +0x0a3b:  mov    %esp,%ebp
080eae04 +0x0a3d:  mov    0x8(%ebp),%eax
080eae07 +0x0a40:  pop    %ebp
080eae08 +0x0a41:  ret
080eae09 +0x0a42:  nop
080eae0a +0x0a43:  push   %ebp
080eae0b +0x0a44:  mov    %esp,%ebp
080eae0d +0x0a46:  sub    $0x18,%esp
080eae10 +0x0a49:  mov    0xc(%ebp),%eax
080eae13 +0x0a4c:  mov    %eax,(%esp)
080eae16 +0x0a4f:  call   080eb6b7 <+0x12f0>
080eae1b +0x0a54:  mov    0x8(%ebp),%edx
080eae1e +0x0a57:  mov    %eax,0x4(%esp)
080eae22 +0x0a5b:  mov    %edx,(%esp)
080eae25 +0x0a5e:  call   080eb6c0 <+0x12f9>
080eae2a +0x0a63:  leave
080eae2b +0x0a64:  ret
080eae2c +0x0a65:  push   %ebp
080eae2d +0x0a66:  mov    %esp,%ebp
080eae2f +0x0a68:  push   %esi
080eae30 +0x0a69:  push   %ebx
080eae31 +0x0a6a:  sub    $0x50,%esp
080eae34 +0x0a6d:  mov    0x8(%ebp),%ebx
080eae37 +0x0a70:  mov    0xc(%ebp),%eax
080eae3a +0x0a73:  mov    %eax,(%esp)
080eae3d +0x0a76:  call   080eab68 <+0x7a1>
080eae42 +0x0a7b:  mov    %eax,-0x14(%ebp)
080eae45 +0x0a7e:  mov    0xc(%ebp),%eax
080eae48 +0x0a81:  mov    %eax,(%esp)
080eae4b +0x0a84:  call   080eb198 <+0xdd1>
080eae50 +0x0a89:  mov    %eax,-0x10(%ebp)
080eae53 +0x0a8c:  movb   $0x1,-0x9(%ebp)
080eae57 +0x0a90:  jmp    080eaeb5 <+0xaee>
080eae59 +0x0a92:  mov    -0x14(%ebp),%eax
080eae5c +0x0a95:  mov    %eax,-0x10(%ebp)
080eae5f +0x0a98:  mov    -0x14(%ebp),%eax
080eae62 +0x0a9b:  mov    %eax,(%esp)
080eae65 +0x0a9e:  call   080eb72a <+0x1363>
080eae6a +0x0aa3:  mov    %eax,%esi
080eae6c +0x0aa5:  mov    0x10(%ebp),%eax
080eae6f +0x0aa8:  mov    %eax,0x4(%esp)
080eae73 +0x0aac:  lea    -0x2d(%ebp),%eax
080eae76 +0x0aaf:  mov    %eax,(%esp)
080eae79 +0x0ab2:  call   080eb722 <+0x135b>
080eae7e +0x0ab7:  mov    0xc(%ebp),%edx
080eae81 +0x0aba:  mov    %esi,0x8(%esp)
080eae85 +0x0abe:  mov    %eax,0x4(%esp)
080eae89 +0x0ac2:  mov    %edx,(%esp)
080eae8c +0x0ac5:  call   080eab74 <+0x7ad>
080eae91 +0x0aca:  mov    %al,-0x9(%ebp)
080eae94 +0x0acd:  cmpb   $0x0,-0x9(%ebp)
080eae98 +0x0ad1:  je     080eaea7 <+0xae0>
080eae9a +0x0ad3:  mov    -0x14(%ebp),%eax
080eae9d +0x0ad6:  mov    %eax,(%esp)
080eaea0 +0x0ad9:  call   080eb158 <+0xd91>
080eaea5 +0x0ade:  jmp    080eaeb2 <+0xaeb>
080eaea7 +0x0ae0:  mov    -0x14(%ebp),%eax
080eaeaa +0x0ae3:  mov    %eax,(%esp)
080eaead +0x0ae6:  call   080eb14d <+0xd86>
080eaeb2 +0x0aeb:  mov    %eax,-0x14(%ebp)
080eaeb5 +0x0aee:  cmpl   $0x0,-0x14(%ebp)
080eaeb9 +0x0af2:  setne  %al
080eaebc +0x0af5:  test   %al,%al
080eaebe +0x0af7:  jne    080eae59 <+0xa92>
080eaec0 +0x0af9:  mov    -0x10(%ebp),%eax
080eaec3 +0x0afc:  mov    %eax,0x4(%esp)
080eaec7 +0x0b00:  lea    -0x34(%ebp),%eax
080eaeca +0x0b03:  mov    %eax,(%esp)
080eaecd +0x0b06:  call   080eb1c4 <+0xdfd>
080eaed2 +0x0b0b:  cmpb   $0x0,-0x9(%ebp)
080eaed6 +0x0b0f:  je     080eaf57 <+0xb90>
080eaed8 +0x0b11:  lea    -0x2c(%ebp),%eax
080eaedb +0x0b14:  mov    0xc(%ebp),%edx
080eaede +0x0b17:  mov    %edx,0x4(%esp)
080eaee2 +0x0b1b:  mov    %eax,(%esp)
080eaee5 +0x0b1e:  call   080eab8c <+0x7c5>
080eaeea +0x0b23:  sub    $0x4,%esp
080eaeed +0x0b26:  lea    -0x2c(%ebp),%eax
080eaef0 +0x0b29:  mov    %eax,0x4(%esp)
080eaef4 +0x0b2d:  lea    -0x34(%ebp),%eax
080eaef7 +0x0b30:  mov    %eax,(%esp)
080eaefa +0x0b33:  call   080ea6b8 <+0x2f1>
080eaeff +0x0b38:  test   %al,%al
080eaf01 +0x0b3a:  je     080eaf4c <+0xb85>
080eaf03 +0x0b3c:  movb   $0x1,-0x25(%ebp)
080eaf07 +0x0b40:  mov    -0x10(%ebp),%ecx
080eaf0a +0x0b43:  mov    -0x14(%ebp),%edx
080eaf0d +0x0b46:  lea    -0x24(%ebp),%eax
080eaf10 +0x0b49:  mov    0x10(%ebp),%esi
080eaf13 +0x0b4c:  mov    %esi,0x10(%esp)
080eaf17 +0x0b50:  mov    %ecx,0xc(%esp)
080eaf1b +0x0b54:  mov    %edx,0x8(%esp)
080eaf1f +0x0b58:  mov    0xc(%ebp),%edx
080eaf22 +0x0b5b:  mov    %edx,0x4(%esp)
080eaf26 +0x0b5f:  mov    %eax,(%esp)
080eaf29 +0x0b62:  call   080eb74c <+0x1385>
080eaf2e +0x0b67:  sub    $0x4,%esp
080eaf31 +0x0b6a:  lea    -0x25(%ebp),%eax
080eaf34 +0x0b6d:  mov    %eax,0x8(%esp)
080eaf38 +0x0b71:  lea    -0x24(%ebp),%eax
080eaf3b +0x0b74:  mov    %eax,0x4(%esp)
080eaf3f +0x0b78:  mov    %ebx,(%esp)
080eaf42 +0x0b7b:  call   080eb814 <+0x144d>
080eaf47 +0x0b80:  jmp    080eafed <+0xc26>
080eaf4c +0x0b85:  lea    -0x34(%ebp),%eax
080eaf4f +0x0b88:  mov    %eax,(%esp)
080eaf52 +0x0b8b:  call   080eb842 <+0x147b>
080eaf57 +0x0b90:  mov    0x10(%ebp),%eax
080eaf5a +0x0b93:  mov    %eax,0x4(%esp)
080eaf5e +0x0b97:  lea    -0x1e(%ebp),%eax
080eaf61 +0x0b9a:  mov    %eax,(%esp)
080eaf64 +0x0b9d:  call   080eb722 <+0x135b>
080eaf69 +0x0ba2:  mov    %eax,%esi
080eaf6b +0x0ba4:  mov    -0x34(%ebp),%eax
080eaf6e +0x0ba7:  mov    %eax,(%esp)
080eaf71 +0x0baa:  call   080eb24e <+0xe87>
080eaf76 +0x0baf:  mov    0xc(%ebp),%edx
080eaf79 +0x0bb2:  mov    %esi,0x8(%esp)
080eaf7d +0x0bb6:  mov    %eax,0x4(%esp)
080eaf81 +0x0bba:  mov    %edx,(%esp)
080eaf84 +0x0bbd:  call   080eab74 <+0x7ad>
080eaf89 +0x0bc2:  test   %al,%al
080eaf8b +0x0bc4:  je     080eafd3 <+0xc0c>
080eaf8d +0x0bc6:  movb   $0x1,-0x1d(%ebp)
080eaf91 +0x0bca:  mov    -0x10(%ebp),%ecx
080eaf94 +0x0bcd:  mov    -0x14(%ebp),%edx
080eaf97 +0x0bd0:  lea    -0x1c(%ebp),%eax
080eaf9a +0x0bd3:  mov    0x10(%ebp),%esi
080eaf9d +0x0bd6:  mov    %esi,0x10(%esp)
080eafa1 +0x0bda:  mov    %ecx,0xc(%esp)
080eafa5 +0x0bde:  mov    %edx,0x8(%esp)
080eafa9 +0x0be2:  mov    0xc(%ebp),%edx
080eafac +0x0be5:  mov    %edx,0x4(%esp)
080eafb0 +0x0be9:  mov    %eax,(%esp)
080eafb3 +0x0bec:  call   080eb74c <+0x1385>
080eafb8 +0x0bf1:  sub    $0x4,%esp
080eafbb +0x0bf4:  lea    -0x1d(%ebp),%eax
080eafbe +0x0bf7:  mov    %eax,0x8(%esp)
080eafc2 +0x0bfb:  lea    -0x1c(%ebp),%eax
080eafc5 +0x0bfe:  mov    %eax,0x4(%esp)
080eafc9 +0x0c02:  mov    %ebx,(%esp)
080eafcc +0x0c05:  call   080eb814 <+0x144d>
080eafd1 +0x0c0a:  jmp    080eafed <+0xc26>
080eafd3 +0x0c0c:  movb   $0x0,-0x15(%ebp)
080eafd7 +0x0c10:  lea    -0x15(%ebp),%eax
080eafda +0x0c13:  mov    %eax,0x8(%esp)
080eafde +0x0c17:  lea    -0x34(%ebp),%eax
080eafe1 +0x0c1a:  mov    %eax,0x4(%esp)
080eafe5 +0x0c1e:  mov    %ebx,(%esp)
080eafe8 +0x0c21:  call   080eb860 <+0x1499>
080eafed +0x0c26:  mov    %ebx,%eax
080eafef +0x0c28:  lea    -0x8(%ebp),%esp
080eaff2 +0x0c2b:  add    $0x0,%esp
080eaff5 +0x0c2e:  pop    %ebx
080eaff6 +0x0c2f:  pop    %esi
080eaff7 +0x0c30:  pop    %ebp
080eaff8 +0x0c31:  ret    $0x4
080eaffb +0x0c34:  nop
080eaffc +0x0c35:  push   %ebp
080eaffd +0x0c36:  mov    %esp,%ebp
080eafff +0x0c38:  mov    0x8(%ebp),%eax
080eb002 +0x0c3b:  mov    0x11(%eax),%eax
080eb005 +0x0c3e:  pop    %ebp
080eb006 +0x0c3f:  ret
080eb007 +0x0c40:  nop
080eb008 +0x0c41:  push   %ebp
080eb009 +0x0c42:  mov    %esp,%ebp
080eb00b +0x0c44:  mov    0x8(%ebp),%eax
080eb00e +0x0c47:  mov    0x11(%eax),%eax
080eb011 +0x0c4a:  test   %eax,%eax
080eb013 +0x0c4c:  sete   %al
080eb016 +0x0c4f:  pop    %ebp
080eb017 +0x0c50:  ret
080eb018 +0x0c51:  push   %ebp
080eb019 +0x0c52:  mov    %esp,%ebp
080eb01b +0x0c54:  mov    0x8(%ebp),%eax
080eb01e +0x0c57:  mov    0xc(%ebp),%edx
080eb021 +0x0c5a:  mov    %edx,(%eax)
080eb023 +0x0c5c:  pop    %ebp
080eb024 +0x0c5d:  ret    $0x4
080eb027 +0x0c60:  push   %ebp
080eb028 +0x0c61:  mov    %esp,%ebp
080eb02a +0x0c63:  push   %edi
080eb02b +0x0c64:  push   %esi
080eb02c +0x0c65:  push   %ebx
080eb02d +0x0c66:  sub    $0x2c,%esp
080eb030 +0x0c69:  mov    0x8(%ebp),%edi
080eb033 +0x0c6c:  mov    0x14(%ebp),%eax
080eb036 +0x0c6f:  mov    %eax,(%esp)
080eb039 +0x0c72:  call   080d260f <_GLOBAL__I__ZN10BingoEventC2Ev+0x745c>  ; global constructors keyed to BingoEvent::BingoEvent()+0x745c
080eb03e +0x0c77:  mov    %eax,%esi
080eb040 +0x0c79:  mov    0x10(%ebp),%eax
080eb043 +0x0c7c:  mov    %eax,(%esp)
080eb046 +0x0c7f:  call   080d260f <_GLOBAL__I__ZN10BingoEventC2Ev+0x745c>  ; global constructors keyed to BingoEvent::BingoEvent()+0x745c
080eb04b +0x0c84:  mov    %eax,%ebx
080eb04d +0x0c86:  mov    0xc(%ebp),%eax
080eb050 +0x0c89:  mov    %eax,(%esp)
080eb053 +0x0c8c:  call   080d260f <_GLOBAL__I__ZN10BingoEventC2Ev+0x745c>  ; global constructors keyed to BingoEvent::BingoEvent()+0x745c
080eb058 +0x0c91:  mov    %esi,0x8(%esp)
080eb05c +0x0c95:  mov    %ebx,0x4(%esp)
080eb060 +0x0c99:  mov    %eax,(%esp)
080eb063 +0x0c9c:  call   0808ea7c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x8ec>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x8ec
080eb068 +0x0ca1:  mov    %eax,-0x1c(%ebp)
080eb06b +0x0ca4:  lea    -0x1c(%ebp),%eax
080eb06e +0x0ca7:  mov    %eax,0x4(%esp)
080eb072 +0x0cab:  mov    %edi,(%esp)
080eb075 +0x0cae:  call   0808e3c6 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x236>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x236
080eb07a +0x0cb3:  mov    %edi,%eax
080eb07c +0x0cb5:  add    $0x2c,%esp
080eb07f +0x0cb8:  pop    %ebx
080eb080 +0x0cb9:  pop    %esi
080eb081 +0x0cba:  pop    %edi
080eb082 +0x0cbb:  pop    %ebp
080eb083 +0x0cbc:  ret    $0x4
080eb086 +0x0cbf:  push   %ebp
080eb087 +0x0cc0:  mov    %esp,%ebp
080eb089 +0x0cc2:  push   %esi
080eb08a +0x0cc3:  push   %ebx
080eb08b +0x0cc4:  sub    $0x10,%esp
080eb08e +0x0cc7:  mov    0x8(%ebp),%eax
080eb091 +0x0cca:  mov    0x10(%ebp),%edx
080eb094 +0x0ccd:  mov    %edx,0x4(%esp)
080eb098 +0x0cd1:  mov    %eax,(%esp)
080eb09b +0x0cd4:  call   080eb88e <+0x14c7>
080eb0a0 +0x0cd9:  mov    0xc(%ebp),%eax
080eb0a3 +0x0cdc:  mov    %eax,0x4(%esp)
080eb0a7 +0x0ce0:  mov    0x8(%ebp),%eax
080eb0aa +0x0ce3:  mov    %eax,(%esp)
080eb0ad +0x0ce6:  call   0808e396 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x206>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x206
080eb0b2 +0x0ceb:  mov    0x8(%ebp),%edx
080eb0b5 +0x0cee:  mov    %eax,(%edx)
080eb0b7 +0x0cf0:  mov    0x8(%ebp),%eax
080eb0ba +0x0cf3:  mov    (%eax),%edx
080eb0bc +0x0cf5:  mov    0x8(%ebp),%eax
080eb0bf +0x0cf8:  mov    %edx,0x4(%eax)
080eb0c2 +0x0cfb:  mov    0x8(%ebp),%eax
080eb0c5 +0x0cfe:  mov    (%eax),%eax
080eb0c7 +0x0d00:  mov    0xc(%ebp),%edx
080eb0ca +0x0d03:  shl    $0x2,%edx
080eb0cd +0x0d06:  lea    (%eax,%edx,1),%edx
080eb0d0 +0x0d09:  mov    0x8(%ebp),%eax
080eb0d3 +0x0d0c:  mov    %edx,0x8(%eax)
080eb0d6 +0x0d0f:  add    $0x10,%esp
080eb0d9 +0x0d12:  pop    %ebx
080eb0da +0x0d13:  pop    %esi
080eb0db +0x0d14:  pop    %ebp
080eb0dc +0x0d15:  ret
080eb0dd +0x0d16:  mov    %edx,%ebx
080eb0df +0x0d18:  mov    %eax,%esi
080eb0e1 +0x0d1a:  mov    0x8(%ebp),%eax
080eb0e4 +0x0d1d:  mov    %eax,(%esp)
080eb0e7 +0x0d20:  call   08083e92 <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0xd5>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0xd5
080eb0ec +0x0d25:  mov    %esi,%eax
080eb0ee +0x0d27:  mov    %ebx,%edx
080eb0f0 +0x0d29:  mov    %eax,(%esp)
080eb0f3 +0x0d2c:  call   08ae3750 <_Unwind_Resume>
080eb0f8 +0x0d31:  push   %ebp
080eb0f9 +0x0d32:  mov    %esp,%ebp
080eb0fb +0x0d34:  sub    $0x18,%esp
080eb0fe +0x0d37:  mov    0x8(%ebp),%eax
080eb101 +0x0d3a:  mov    %eax,(%esp)
080eb104 +0x0d3d:  call   080eb8c6 <+0x14ff>
080eb109 +0x0d42:  mov    0x8(%ebp),%eax
080eb10c +0x0d45:  movl   $0x0,0x1(%eax)
080eb113 +0x0d4c:  mov    0x8(%ebp),%eax
080eb116 +0x0d4f:  movl   $0x0,0x5(%eax)
080eb11d +0x0d56:  mov    0x8(%ebp),%eax
080eb120 +0x0d59:  movl   $0x0,0x9(%eax)
080eb127 +0x0d60:  mov    0x8(%ebp),%eax
080eb12a +0x0d63:  movl   $0x0,0xd(%eax)
080eb131 +0x0d6a:  mov    0x8(%ebp),%eax
080eb134 +0x0d6d:  movl   $0x0,0x11(%eax)
080eb13b +0x0d74:  mov    0x8(%ebp),%eax
080eb13e +0x0d77:  mov    %eax,(%esp)
080eb141 +0x0d7a:  call   080eb8da <+0x1513>
080eb146 +0x0d7f:  leave
080eb147 +0x0d80:  ret
080eb148 +0x0d81:  push   %ebp
080eb149 +0x0d82:  mov    %esp,%ebp
080eb14b +0x0d84:  pop    %ebp
080eb14c +0x0d85:  ret
080eb14d +0x0d86:  push   %ebp
080eb14e +0x0d87:  mov    %esp,%ebp
080eb150 +0x0d89:  mov    0x8(%ebp),%eax
080eb153 +0x0d8c:  mov    0xc(%eax),%eax
080eb156 +0x0d8f:  pop    %ebp
080eb157 +0x0d90:  ret
080eb158 +0x0d91:  push   %ebp
080eb159 +0x0d92:  mov    %esp,%ebp
080eb15b +0x0d94:  mov    0x8(%ebp),%eax
080eb15e +0x0d97:  mov    0x8(%eax),%eax
080eb161 +0x0d9a:  pop    %ebp
080eb162 +0x0d9b:  ret
080eb163 +0x0d9c:  nop
080eb164 +0x0d9d:  push   %ebp
080eb165 +0x0d9e:  mov    %esp,%ebp
080eb167 +0x0da0:  sub    $0x18,%esp
080eb16a +0x0da3:  mov    0x8(%ebp),%eax
080eb16d +0x0da6:  mov    %eax,(%esp)
080eb170 +0x0da9:  call   080eb90c <+0x1545>
080eb175 +0x0dae:  mov    0xc(%ebp),%edx
080eb178 +0x0db1:  mov    %edx,0x4(%esp)
080eb17c +0x0db5:  mov    %eax,(%esp)
080eb17f +0x0db8:  call   080eb92a <+0x1563>
080eb184 +0x0dbd:  mov    0xc(%ebp),%eax
080eb187 +0x0dc0:  mov    %eax,0x4(%esp)
080eb18b +0x0dc4:  mov    0x8(%ebp),%eax
080eb18e +0x0dc7:  mov    %eax,(%esp)
080eb191 +0x0dca:  call   080eb93e <+0x1577>
080eb196 +0x0dcf:  leave
080eb197 +0x0dd0:  ret
080eb198 +0x0dd1:  push   %ebp
080eb199 +0x0dd2:  mov    %esp,%ebp
080eb19b +0x0dd4:  mov    0x8(%ebp),%eax
080eb19e +0x0dd7:  add    $0x1,%eax
080eb1a1 +0x0dda:  pop    %ebp
080eb1a2 +0x0ddb:  ret
080eb1a3 +0x0ddc:  nop
080eb1a4 +0x0ddd:  push   %ebp
080eb1a5 +0x0dde:  mov    %esp,%ebp
080eb1a7 +0x0de0:  mov    0x8(%ebp),%eax
080eb1aa +0x0de3:  add    $0x9,%eax
080eb1ad +0x0de6:  pop    %ebp
080eb1ae +0x0de7:  ret
080eb1af +0x0de8:  nop
080eb1b0 +0x0de9:  push   %ebp
080eb1b1 +0x0dea:  mov    %esp,%ebp
080eb1b3 +0x0dec:  mov    0x8(%ebp),%eax
080eb1b6 +0x0def:  add    $0xd,%eax
080eb1b9 +0x0df2:  pop    %ebp
080eb1ba +0x0df3:  ret
080eb1bb +0x0df4:  push   %ebp
080eb1bc +0x0df5:  mov    %esp,%ebp
080eb1be +0x0df7:  mov    0x8(%ebp),%eax
080eb1c1 +0x0dfa:  pop    %ebp
080eb1c2 +0x0dfb:  ret
080eb1c3 +0x0dfc:  nop
080eb1c4 +0x0dfd:  push   %ebp
080eb1c5 +0x0dfe:  mov    %esp,%ebp
080eb1c7 +0x0e00:  mov    0xc(%ebp),%edx
080eb1ca +0x0e03:  mov    0x8(%ebp),%eax
080eb1cd +0x0e06:  mov    %edx,(%eax)
080eb1cf +0x0e08:  pop    %ebp
080eb1d0 +0x0e09:  ret
080eb1d1 +0x0e0a:  nop
080eb1d2 +0x0e0b:  push   %ebp
080eb1d3 +0x0e0c:  mov    %esp,%ebp
080eb1d5 +0x0e0e:  push   %ebx
080eb1d6 +0x0e0f:  sub    $0x14,%esp
080eb1d9 +0x0e12:  mov    0x8(%ebp),%ebx
080eb1dc +0x0e15:  jmp    080eb22a <+0xe63>
080eb1de +0x0e17:  mov    0x10(%ebp),%eax
080eb1e1 +0x0e1a:  mov    %eax,(%esp)
080eb1e4 +0x0e1d:  call   080eb72a <+0x1363>
080eb1e9 +0x0e22:  mov    0xc(%ebp),%edx
080eb1ec +0x0e25:  mov    0x18(%ebp),%ecx
080eb1ef +0x0e28:  mov    %ecx,0x8(%esp)
080eb1f3 +0x0e2c:  mov    %eax,0x4(%esp)
080eb1f7 +0x0e30:  mov    %edx,(%esp)
080eb1fa +0x0e33:  call   080eab74 <+0x7ad>
080eb1ff +0x0e38:  xor    $0x1,%eax
080eb202 +0x0e3b:  test   %al,%al
080eb204 +0x0e3d:  je     080eb21c <+0xe55>
080eb206 +0x0e3f:  mov    0x10(%ebp),%eax
080eb209 +0x0e42:  mov    %eax,0x14(%ebp)
080eb20c +0x0e45:  mov    0x10(%ebp),%eax
080eb20f +0x0e48:  mov    %eax,(%esp)
080eb212 +0x0e4b:  call   080eb158 <+0xd91>
080eb217 +0x0e50:  mov    %eax,0x10(%ebp)
080eb21a +0x0e53:  jmp    080eb22a <+0xe63>
080eb21c +0x0e55:  mov    0x10(%ebp),%eax
080eb21f +0x0e58:  mov    %eax,(%esp)
080eb222 +0x0e5b:  call   080eb14d <+0xd86>
080eb227 +0x0e60:  mov    %eax,0x10(%ebp)
080eb22a +0x0e63:  cmpl   $0x0,0x10(%ebp)
080eb22e +0x0e67:  setne  %al
080eb231 +0x0e6a:  test   %al,%al
080eb233 +0x0e6c:  jne    080eb1de <+0xe17>
080eb235 +0x0e6e:  mov    0x14(%ebp),%eax
080eb238 +0x0e71:  mov    %eax,0x4(%esp)
080eb23c +0x0e75:  mov    %ebx,(%esp)
080eb23f +0x0e78:  call   080eb1c4 <+0xdfd>
080eb244 +0x0e7d:  mov    %ebx,%eax
080eb246 +0x0e7f:  add    $0x14,%esp
080eb249 +0x0e82:  pop    %ebx
080eb24a +0x0e83:  pop    %ebp
080eb24b +0x0e84:  ret    $0x4
080eb24e +0x0e87:  push   %ebp
080eb24f +0x0e88:  mov    %esp,%ebp
080eb251 +0x0e8a:  sub    $0x28,%esp
080eb254 +0x0e8d:  mov    0x8(%ebp),%eax
080eb257 +0x0e90:  mov    %eax,(%esp)
080eb25a +0x0e93:  call   080eb960 <+0x1599>
080eb25f +0x0e98:  mov    %eax,0x4(%esp)
080eb263 +0x0e9c:  lea    -0x9(%ebp),%eax
080eb266 +0x0e9f:  mov    %eax,(%esp)
080eb269 +0x0ea2:  call   080eb722 <+0x135b>
080eb26e +0x0ea7:  leave
080eb26f +0x0ea8:  ret
080eb270 +0x0ea9:  push   %ebp
080eb271 +0x0eaa:  mov    %esp,%ebp
080eb273 +0x0eac:  push   %esi
080eb274 +0x0ead:  push   %ebx
080eb275 +0x0eae:  sub    $0x20,%esp
080eb278 +0x0eb1:  mov    0x8(%ebp),%esi
080eb27b +0x0eb4:  mov    0xc(%ebp),%eax
080eb27e +0x0eb7:  mov    %eax,(%esp)
080eb281 +0x0eba:  call   080eb198 <+0xdd1>
080eb286 +0x0ebf:  mov    %eax,%ebx
080eb288 +0x0ec1:  mov    0xc(%ebp),%eax
080eb28b +0x0ec4:  mov    %eax,(%esp)
080eb28e +0x0ec7:  call   080eab68 <+0x7a1>
080eb293 +0x0ecc:  mov    0x10(%ebp),%edx
080eb296 +0x0ecf:  mov    %edx,0x10(%esp)
080eb29a +0x0ed3:  mov    %ebx,0xc(%esp)
080eb29e +0x0ed7:  mov    %eax,0x8(%esp)
080eb2a2 +0x0edb:  mov    0xc(%ebp),%eax
080eb2a5 +0x0ede:  mov    %eax,0x4(%esp)
080eb2a9 +0x0ee2:  mov    %esi,(%esp)
080eb2ac +0x0ee5:  call   080eb1d2 <+0xe0b>
080eb2b1 +0x0eea:  sub    $0x4,%esp
080eb2b4 +0x0eed:  mov    %esi,%eax
080eb2b6 +0x0eef:  lea    -0x8(%ebp),%esp
080eb2b9 +0x0ef2:  add    $0x0,%esp
080eb2bc +0x0ef5:  pop    %ebx
080eb2bd +0x0ef6:  pop    %esi
080eb2be +0x0ef7:  pop    %ebp
080eb2bf +0x0ef8:  ret    $0x4
080eb2c2 +0x0efb:  push   %ebp
080eb2c3 +0x0efc:  mov    %esp,%ebp
080eb2c5 +0x0efe:  mov    0x8(%ebp),%eax
080eb2c8 +0x0f01:  pop    %ebp
080eb2c9 +0x0f02:  ret    $0x4
080eb2cc +0x0f05:  push   %ebp
080eb2cd +0x0f06:  mov    %esp,%ebp
080eb2cf +0x0f08:  mov    0x8(%ebp),%eax
080eb2d2 +0x0f0b:  pop    %ebp
080eb2d3 +0x0f0c:  ret
080eb2d4 +0x0f0d:  push   %ebp
080eb2d5 +0x0f0e:  mov    %esp,%ebp
080eb2d7 +0x0f10:  mov    0xc(%ebp),%eax
080eb2da +0x0f13:  mov    (%eax),%edx
080eb2dc +0x0f15:  mov    0x8(%ebp),%eax
080eb2df +0x0f18:  mov    %edx,(%eax)
080eb2e1 +0x0f1a:  pop    %ebp
080eb2e2 +0x0f1b:  ret
080eb2e3 +0x0f1c:  nop
080eb2e4 +0x0f1d:  push   %ebp
080eb2e5 +0x0f1e:  mov    %esp,%ebp
080eb2e7 +0x0f20:  push   %esi
080eb2e8 +0x0f21:  push   %ebx
080eb2e9 +0x0f22:  sub    $0x50,%esp
080eb2ec +0x0f25:  mov    0x8(%ebp),%ebx
080eb2ef +0x0f28:  mov    0x10(%ebp),%esi
080eb2f2 +0x0f2b:  mov    0xc(%ebp),%eax
080eb2f5 +0x0f2e:  mov    %eax,(%esp)
080eb2f8 +0x0f31:  call   080eb198 <+0xdd1>
080eb2fd +0x0f36:  cmp    %eax,%esi
080eb2ff +0x0f38:  sete   %al
080eb302 +0x0f3b:  test   %al,%al
080eb304 +0x0f3d:  je     080eb3c6 <+0xfff>
080eb30a +0x0f43:  mov    0xc(%ebp),%eax
080eb30d +0x0f46:  mov    %eax,(%esp)
080eb310 +0x0f49:  call   080eaffc <+0xc35>
080eb315 +0x0f4e:  test   %eax,%eax
080eb317 +0x0f50:  je     080eb360 <+0xf99>
080eb319 +0x0f52:  mov    0x14(%ebp),%eax
080eb31c +0x0f55:  mov    %eax,0x4(%esp)
080eb320 +0x0f59:  lea    -0x29(%ebp),%eax
080eb323 +0x0f5c:  mov    %eax,(%esp)
080eb326 +0x0f5f:  call   080eb722 <+0x135b>
080eb32b +0x0f64:  mov    %eax,%esi
080eb32d +0x0f66:  mov    0xc(%ebp),%eax
080eb330 +0x0f69:  mov    %eax,(%esp)
080eb333 +0x0f6c:  call   080eb1b0 <+0xde9>
080eb338 +0x0f71:  mov    (%eax),%eax
080eb33a +0x0f73:  mov    %eax,(%esp)
080eb33d +0x0f76:  call   080eb24e <+0xe87>
080eb342 +0x0f7b:  mov    0xc(%ebp),%edx
080eb345 +0x0f7e:  mov    %esi,0x8(%esp)
080eb349 +0x0f82:  mov    %eax,0x4(%esp)
080eb34d +0x0f86:  mov    %edx,(%esp)
080eb350 +0x0f89:  call   080eab74 <+0x7ad>
080eb355 +0x0f8e:  test   %al,%al
080eb357 +0x0f90:  je     080eb360 <+0xf99>
080eb359 +0x0f92:  mov    $0x1,%eax
080eb35e +0x0f97:  jmp    080eb365 <+0xf9e>
080eb360 +0x0f99:  mov    $0x0,%eax
080eb365 +0x0f9e:  test   %al,%al
080eb367 +0x0fa0:  je     080eb3a0 <+0xfd9>
080eb369 +0x0fa2:  mov    0xc(%ebp),%eax
080eb36c +0x0fa5:  mov    %eax,(%esp)
080eb36f +0x0fa8:  call   080eb1b0 <+0xde9>
080eb374 +0x0fad:  mov    (%eax),%eax
080eb376 +0x0faf:  mov    0x14(%ebp),%edx
080eb379 +0x0fb2:  mov    %edx,0x10(%esp)
080eb37d +0x0fb6:  mov    %eax,0xc(%esp)
080eb381 +0x0fba:  movl   $0x0,0x8(%esp)
080eb389 +0x0fc2:  mov    0xc(%ebp),%eax
080eb38c +0x0fc5:  mov    %eax,0x4(%esp)
080eb390 +0x0fc9:  mov    %ebx,(%esp)
080eb393 +0x0fcc:  call   080eb74c <+0x1385>
080eb398 +0x0fd1:  sub    $0x4,%esp
080eb39b +0x0fd4:  jmp    080eb69b <+0x12d4>
080eb3a0 +0x0fd9:  lea    -0x28(%ebp),%eax
080eb3a3 +0x0fdc:  mov    0x14(%ebp),%edx
080eb3a6 +0x0fdf:  mov    %edx,0x8(%esp)
080eb3aa +0x0fe3:  mov    0xc(%ebp),%edx
080eb3ad +0x0fe6:  mov    %edx,0x4(%esp)
080eb3b1 +0x0fea:  mov    %eax,(%esp)
080eb3b4 +0x0fed:  call   080eae2c <+0xa65>
080eb3b9 +0x0ff2:  sub    $0x4,%esp
080eb3bc +0x0ff5:  mov    -0x28(%ebp),%eax
080eb3bf +0x0ff8:  mov    %eax,(%ebx)
080eb3c1 +0x0ffa:  jmp    080eb69b <+0x12d4>
080eb3c6 +0x0fff:  mov    0x10(%ebp),%eax
080eb3c9 +0x1002:  mov    %eax,(%esp)
080eb3cc +0x1005:  call   080eb24e <+0xe87>
080eb3d1 +0x100a:  mov    %eax,%esi
080eb3d3 +0x100c:  mov    0x14(%ebp),%eax
080eb3d6 +0x100f:  mov    %eax,0x4(%esp)
080eb3da +0x1013:  lea    -0x1e(%ebp),%eax
080eb3dd +0x1016:  mov    %eax,(%esp)
080eb3e0 +0x1019:  call   080eb722 <+0x135b>
080eb3e5 +0x101e:  mov    0xc(%ebp),%edx
080eb3e8 +0x1021:  mov    %esi,0x8(%esp)
080eb3ec +0x1025:  mov    %eax,0x4(%esp)
080eb3f0 +0x1029:  mov    %edx,(%esp)
080eb3f3 +0x102c:  call   080eab74 <+0x7ad>
080eb3f8 +0x1031:  test   %al,%al
080eb3fa +0x1033:  je     080eb532 <+0x116b>
080eb400 +0x1039:  mov    0x10(%ebp),%eax
080eb403 +0x103c:  mov    %eax,-0x30(%ebp)
080eb406 +0x103f:  mov    0x10(%ebp),%esi
080eb409 +0x1042:  mov    0xc(%ebp),%eax
080eb40c +0x1045:  mov    %eax,(%esp)
080eb40f +0x1048:  call   080eb1a4 <+0xddd>
080eb414 +0x104d:  mov    (%eax),%eax
080eb416 +0x104f:  cmp    %eax,%esi
080eb418 +0x1051:  sete   %al
080eb41b +0x1054:  test   %al,%al
080eb41d +0x1056:  je     080eb45f <+0x1098>
080eb41f +0x1058:  mov    0xc(%ebp),%eax
080eb422 +0x105b:  mov    %eax,(%esp)
080eb425 +0x105e:  call   080eb1a4 <+0xddd>
080eb42a +0x1063:  mov    (%eax),%esi
080eb42c +0x1065:  mov    0xc(%ebp),%eax
080eb42f +0x1068:  mov    %eax,(%esp)
080eb432 +0x106b:  call   080eb1a4 <+0xddd>
080eb437 +0x1070:  mov    (%eax),%eax
080eb439 +0x1072:  mov    0x14(%ebp),%edx
080eb43c +0x1075:  mov    %edx,0x10(%esp)
080eb440 +0x1079:  mov    %esi,0xc(%esp)
080eb444 +0x107d:  mov    %eax,0x8(%esp)
080eb448 +0x1081:  mov    0xc(%ebp),%eax
080eb44b +0x1084:  mov    %eax,0x4(%esp)
080eb44f +0x1088:  mov    %ebx,(%esp)
080eb452 +0x108b:  call   080eb74c <+0x1385>
080eb457 +0x1090:  sub    $0x4,%esp
080eb45a +0x1093:  jmp    080eb69b <+0x12d4>
080eb45f +0x1098:  mov    0x14(%ebp),%eax
080eb462 +0x109b:  mov    %eax,0x4(%esp)
080eb466 +0x109f:  lea    -0x1d(%ebp),%eax
080eb469 +0x10a2:  mov    %eax,(%esp)
080eb46c +0x10a5:  call   080eb722 <+0x135b>
080eb471 +0x10aa:  mov    %eax,%esi
080eb473 +0x10ac:  lea    -0x30(%ebp),%eax
080eb476 +0x10af:  mov    %eax,(%esp)
080eb479 +0x10b2:  call   080eb96c <+0x15a5>
080eb47e +0x10b7:  mov    (%eax),%eax
080eb480 +0x10b9:  mov    %eax,(%esp)
080eb483 +0x10bc:  call   080eb24e <+0xe87>
080eb488 +0x10c1:  mov    0xc(%ebp),%edx
080eb48b +0x10c4:  mov    %esi,0x8(%esp)
080eb48f +0x10c8:  mov    %eax,0x4(%esp)
080eb493 +0x10cc:  mov    %edx,(%esp)
080eb496 +0x10cf:  call   080eab74 <+0x7ad>
080eb49b +0x10d4:  test   %al,%al
080eb49d +0x10d6:  je     080eb50c <+0x1145>
080eb49f +0x10d8:  mov    -0x30(%ebp),%eax
080eb4a2 +0x10db:  mov    %eax,(%esp)
080eb4a5 +0x10de:  call   080eb989 <+0x15c2>
080eb4aa +0x10e3:  test   %eax,%eax
080eb4ac +0x10e5:  sete   %al
080eb4af +0x10e8:  test   %al,%al
080eb4b1 +0x10ea:  je     080eb4e0 <+0x1119>
080eb4b3 +0x10ec:  mov    -0x30(%ebp),%eax
080eb4b6 +0x10ef:  mov    0x14(%ebp),%edx
080eb4b9 +0x10f2:  mov    %edx,0x10(%esp)
080eb4bd +0x10f6:  mov    %eax,0xc(%esp)
080eb4c1 +0x10fa:  movl   $0x0,0x8(%esp)
080eb4c9 +0x1102:  mov    0xc(%ebp),%eax
080eb4cc +0x1105:  mov    %eax,0x4(%esp)
080eb4d0 +0x1109:  mov    %ebx,(%esp)
080eb4d3 +0x110c:  call   080eb74c <+0x1385>
080eb4d8 +0x1111:  sub    $0x4,%esp
080eb4db +0x1114:  jmp    080eb69b <+0x12d4>
080eb4e0 +0x1119:  mov    0x10(%ebp),%edx
080eb4e3 +0x111c:  mov    0x10(%ebp),%eax
080eb4e6 +0x111f:  mov    0x14(%ebp),%ecx
080eb4e9 +0x1122:  mov    %ecx,0x10(%esp)
080eb4ed +0x1126:  mov    %edx,0xc(%esp)
080eb4f1 +0x112a:  mov    %eax,0x8(%esp)
080eb4f5 +0x112e:  mov    0xc(%ebp),%eax
080eb4f8 +0x1131:  mov    %eax,0x4(%esp)
080eb4fc +0x1135:  mov    %ebx,(%esp)
080eb4ff +0x1138:  call   080eb74c <+0x1385>
080eb504 +0x113d:  sub    $0x4,%esp
080eb507 +0x1140:  jmp    080eb69b <+0x12d4>
080eb50c +0x1145:  lea    -0x1c(%ebp),%eax
080eb50f +0x1148:  mov    0x14(%ebp),%edx
080eb512 +0x114b:  mov    %edx,0x8(%esp)
080eb516 +0x114f:  mov    0xc(%ebp),%edx
080eb519 +0x1152:  mov    %edx,0x4(%esp)
080eb51d +0x1156:  mov    %eax,(%esp)
080eb520 +0x1159:  call   080eae2c <+0xa65>
080eb525 +0x115e:  sub    $0x4,%esp
080eb528 +0x1161:  mov    -0x1c(%ebp),%eax
080eb52b +0x1164:  mov    %eax,(%ebx)
080eb52d +0x1166:  jmp    080eb69b <+0x12d4>
080eb532 +0x116b:  mov    0x14(%ebp),%eax
080eb535 +0x116e:  mov    %eax,0x4(%esp)
080eb539 +0x1172:  lea    -0x12(%ebp),%eax
080eb53c +0x1175:  mov    %eax,(%esp)
080eb53f +0x1178:  call   080eb722 <+0x135b>
080eb544 +0x117d:  mov    %eax,%esi
080eb546 +0x117f:  mov    0x10(%ebp),%eax
080eb549 +0x1182:  mov    %eax,(%esp)
080eb54c +0x1185:  call   080eb24e <+0xe87>
080eb551 +0x118a:  mov    0xc(%ebp),%edx
080eb554 +0x118d:  mov    %esi,0x8(%esp)
080eb558 +0x1191:  mov    %eax,0x4(%esp)
080eb55c +0x1195:  mov    %edx,(%esp)
080eb55f +0x1198:  call   080eab74 <+0x7ad>
080eb564 +0x119d:  test   %al,%al
080eb566 +0x119f:  je     080eb68c <+0x12c5>
080eb56c +0x11a5:  mov    0x10(%ebp),%eax
080eb56f +0x11a8:  mov    %eax,-0x34(%ebp)
080eb572 +0x11ab:  mov    0x10(%ebp),%esi
080eb575 +0x11ae:  mov    0xc(%ebp),%eax
080eb578 +0x11b1:  mov    %eax,(%esp)
080eb57b +0x11b4:  call   080eb1b0 <+0xde9>
080eb580 +0x11b9:  mov    (%eax),%eax
080eb582 +0x11bb:  cmp    %eax,%esi
080eb584 +0x11bd:  sete   %al
080eb587 +0x11c0:  test   %al,%al
080eb589 +0x11c2:  je     080eb5c2 <+0x11fb>
080eb58b +0x11c4:  mov    0xc(%ebp),%eax
080eb58e +0x11c7:  mov    %eax,(%esp)
080eb591 +0x11ca:  call   080eb1b0 <+0xde9>
080eb596 +0x11cf:  mov    (%eax),%eax
080eb598 +0x11d1:  mov    0x14(%ebp),%edx
080eb59b +0x11d4:  mov    %edx,0x10(%esp)
080eb59f +0x11d8:  mov    %eax,0xc(%esp)
080eb5a3 +0x11dc:  movl   $0x0,0x8(%esp)
080eb5ab +0x11e4:  mov    0xc(%ebp),%eax
080eb5ae +0x11e7:  mov    %eax,0x4(%esp)
080eb5b2 +0x11eb:  mov    %ebx,(%esp)
080eb5b5 +0x11ee:  call   080eb74c <+0x1385>
080eb5ba +0x11f3:  sub    $0x4,%esp
080eb5bd +0x11f6:  jmp    080eb69b <+0x12d4>
080eb5c2 +0x11fb:  lea    -0x34(%ebp),%eax
080eb5c5 +0x11fe:  mov    %eax,(%esp)
080eb5c8 +0x1201:  call   080ea886 <+0x4bf>
080eb5cd +0x1206:  mov    (%eax),%eax
080eb5cf +0x1208:  mov    %eax,(%esp)
080eb5d2 +0x120b:  call   080eb24e <+0xe87>
080eb5d7 +0x1210:  mov    %eax,%esi
080eb5d9 +0x1212:  mov    0x14(%ebp),%eax
080eb5dc +0x1215:  mov    %eax,0x4(%esp)
080eb5e0 +0x1219:  lea    -0x11(%ebp),%eax
080eb5e3 +0x121c:  mov    %eax,(%esp)
080eb5e6 +0x121f:  call   080eb722 <+0x135b>
080eb5eb +0x1224:  mov    0xc(%ebp),%edx
080eb5ee +0x1227:  mov    %esi,0x8(%esp)
080eb5f2 +0x122b:  mov    %eax,0x4(%esp)
080eb5f6 +0x122f:  mov    %edx,(%esp)
080eb5f9 +0x1232:  call   080eab74 <+0x7ad>
080eb5fe +0x1237:  test   %al,%al
080eb600 +0x1239:  je     080eb669 <+0x12a2>
080eb602 +0x123b:  mov    0x10(%ebp),%eax
080eb605 +0x123e:  mov    %eax,(%esp)
080eb608 +0x1241:  call   080eb989 <+0x15c2>
080eb60d +0x1246:  test   %eax,%eax
080eb60f +0x1248:  sete   %al
080eb612 +0x124b:  test   %al,%al
080eb614 +0x124d:  je     080eb640 <+0x1279>
080eb616 +0x124f:  mov    0x10(%ebp),%eax
080eb619 +0x1252:  mov    0x14(%ebp),%edx
080eb61c +0x1255:  mov    %edx,0x10(%esp)
080eb620 +0x1259:  mov    %eax,0xc(%esp)
080eb624 +0x125d:  movl   $0x0,0x8(%esp)
080eb62c +0x1265:  mov    0xc(%ebp),%eax
080eb62f +0x1268:  mov    %eax,0x4(%esp)
080eb633 +0x126c:  mov    %ebx,(%esp)
080eb636 +0x126f:  call   080eb74c <+0x1385>
080eb63b +0x1274:  sub    $0x4,%esp
080eb63e +0x1277:  jmp    080eb69b <+0x12d4>
080eb640 +0x1279:  mov    -0x34(%ebp),%edx
080eb643 +0x127c:  mov    -0x34(%ebp),%eax
080eb646 +0x127f:  mov    0x14(%ebp),%ecx
080eb649 +0x1282:  mov    %ecx,0x10(%esp)
080eb64d +0x1286:  mov    %edx,0xc(%esp)
080eb651 +0x128a:  mov    %eax,0x8(%esp)
080eb655 +0x128e:  mov    0xc(%ebp),%eax
080eb658 +0x1291:  mov    %eax,0x4(%esp)
080eb65c +0x1295:  mov    %ebx,(%esp)
080eb65f +0x1298:  call   080eb74c <+0x1385>
080eb664 +0x129d:  sub    $0x4,%esp
080eb667 +0x12a0:  jmp    080eb69b <+0x12d4>
080eb669 +0x12a2:  lea    -0x10(%ebp),%eax
080eb66c +0x12a5:  mov    0x14(%ebp),%edx
080eb66f +0x12a8:  mov    %edx,0x8(%esp)
080eb673 +0x12ac:  mov    0xc(%ebp),%edx
080eb676 +0x12af:  mov    %edx,0x4(%esp)
080eb67a +0x12b3:  mov    %eax,(%esp)
080eb67d +0x12b6:  call   080eae2c <+0xa65>
080eb682 +0x12bb:  sub    $0x4,%esp
080eb685 +0x12be:  mov    -0x10(%ebp),%eax
080eb688 +0x12c1:  mov    %eax,(%ebx)
080eb68a +0x12c3:  jmp    080eb69b <+0x12d4>
080eb68c +0x12c5:  mov    0x10(%ebp),%eax
080eb68f +0x12c8:  mov    %eax,0x4(%esp)
080eb693 +0x12cc:  mov    %ebx,(%esp)
080eb696 +0x12cf:  call   080eb1c4 <+0xdfd>
080eb69b +0x12d4:  mov    %ebx,%eax
080eb69d +0x12d6:  lea    -0x8(%ebp),%esp
080eb6a0 +0x12d9:  add    $0x0,%esp
080eb6a3 +0x12dc:  pop    %ebx
080eb6a4 +0x12dd:  pop    %esi
080eb6a5 +0x12de:  pop    %ebp
080eb6a6 +0x12df:  ret    $0x4
080eb6a9 +0x12e2:  nop
080eb6aa +0x12e3:  push   %ebp
080eb6ab +0x12e4:  mov    %esp,%ebp
080eb6ad +0x12e6:  mov    0xc(%ebp),%edx
080eb6b0 +0x12e9:  mov    0x8(%ebp),%eax
080eb6b3 +0x12ec:  mov    %edx,(%eax)
080eb6b5 +0x12ee:  pop    %ebp
080eb6b6 +0x12ef:  ret
080eb6b7 +0x12f0:  push   %ebp
080eb6b8 +0x12f1:  mov    %esp,%ebp
080eb6ba +0x12f3:  mov    0x8(%ebp),%eax
080eb6bd +0x12f6:  pop    %ebp
080eb6be +0x12f7:  ret
080eb6bf +0x12f8:  nop
080eb6c0 +0x12f9:  push   %ebp
080eb6c1 +0x12fa:  mov    %esp,%ebp
080eb6c3 +0x12fc:  sub    $0x18,%esp
080eb6c6 +0x12ff:  mov    0xc(%ebp),%eax
080eb6c9 +0x1302:  mov    %eax,(%esp)
080eb6cc +0x1305:  call   08083f0e <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x151>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x151
080eb6d1 +0x130a:  mov    0x8(%ebp),%edx
080eb6d4 +0x130d:  mov    %eax,0x4(%esp)
080eb6d8 +0x1311:  mov    %edx,(%esp)
080eb6db +0x1314:  call   080eb88e <+0x14c7>
080eb6e0 +0x1319:  mov    0xc(%ebp),%eax
080eb6e3 +0x131c:  mov    (%eax),%edx
080eb6e5 +0x131e:  mov    0x8(%ebp),%eax
080eb6e8 +0x1321:  mov    %edx,(%eax)
080eb6ea +0x1323:  mov    0xc(%ebp),%eax
080eb6ed +0x1326:  mov    0x4(%eax),%edx
080eb6f0 +0x1329:  mov    0x8(%ebp),%eax
080eb6f3 +0x132c:  mov    %edx,0x4(%eax)
080eb6f6 +0x132f:  mov    0xc(%ebp),%eax
080eb6f9 +0x1332:  mov    0x8(%eax),%edx
080eb6fc +0x1335:  mov    0x8(%ebp),%eax
080eb6ff +0x1338:  mov    %edx,0x8(%eax)
080eb702 +0x133b:  mov    0xc(%ebp),%eax
080eb705 +0x133e:  movl   $0x0,(%eax)
080eb70b +0x1344:  mov    0xc(%ebp),%eax
080eb70e +0x1347:  movl   $0x0,0x4(%eax)
080eb715 +0x134e:  mov    0xc(%ebp),%eax
080eb718 +0x1351:  movl   $0x0,0x8(%eax)
080eb71f +0x1358:  leave
080eb720 +0x1359:  ret
080eb721 +0x135a:  nop
080eb722 +0x135b:  push   %ebp
080eb723 +0x135c:  mov    %esp,%ebp
080eb725 +0x135e:  mov    0xc(%ebp),%eax
080eb728 +0x1361:  pop    %ebp
080eb729 +0x1362:  ret
080eb72a +0x1363:  push   %ebp
080eb72b +0x1364:  mov    %esp,%ebp
080eb72d +0x1366:  sub    $0x28,%esp
080eb730 +0x1369:  mov    0x8(%ebp),%eax
080eb733 +0x136c:  mov    %eax,(%esp)
080eb736 +0x136f:  call   080eb994 <+0x15cd>
080eb73b +0x1374:  mov    %eax,0x4(%esp)
080eb73f +0x1378:  lea    -0x9(%ebp),%eax
080eb742 +0x137b:  mov    %eax,(%esp)
080eb745 +0x137e:  call   080eb722 <+0x135b>
080eb74a +0x1383:  leave
080eb74b +0x1384:  ret
080eb74c +0x1385:  push   %ebp
080eb74d +0x1386:  mov    %esp,%ebp
080eb74f +0x1388:  push   %esi
080eb750 +0x1389:  push   %ebx
080eb751 +0x138a:  sub    $0x20,%esp
080eb754 +0x138d:  mov    0x8(%ebp),%esi
080eb757 +0x1390:  cmpl   $0x0,0x10(%ebp)
080eb75b +0x1394:  jne    080eb7a3 <+0x13dc>
080eb75d +0x1396:  mov    0xc(%ebp),%eax
080eb760 +0x1399:  mov    %eax,(%esp)
080eb763 +0x139c:  call   080eb198 <+0xdd1>
080eb768 +0x13a1:  cmp    0x14(%ebp),%eax
080eb76b +0x13a4:  je     080eb7a3 <+0x13dc>
080eb76d +0x13a6:  mov    0x14(%ebp),%eax
080eb770 +0x13a9:  mov    %eax,(%esp)
080eb773 +0x13ac:  call   080eb24e <+0xe87>
080eb778 +0x13b1:  mov    %eax,%ebx
080eb77a +0x13b3:  mov    0x18(%ebp),%eax
080eb77d +0x13b6:  mov    %eax,0x4(%esp)
080eb781 +0x13ba:  lea    -0xe(%ebp),%eax
080eb784 +0x13bd:  mov    %eax,(%esp)
080eb787 +0x13c0:  call   080eb722 <+0x135b>
080eb78c +0x13c5:  mov    0xc(%ebp),%edx
080eb78f +0x13c8:  mov    %ebx,0x8(%esp)
080eb793 +0x13cc:  mov    %eax,0x4(%esp)
080eb797 +0x13d0:  mov    %edx,(%esp)
080eb79a +0x13d3:  call   080eab74 <+0x7ad>
080eb79f +0x13d8:  test   %al,%al
080eb7a1 +0x13da:  je     080eb7aa <+0x13e3>
080eb7a3 +0x13dc:  mov    $0x1,%eax
080eb7a8 +0x13e1:  jmp    080eb7af <+0x13e8>
080eb7aa +0x13e3:  mov    $0x0,%eax
080eb7af +0x13e8:  mov    %al,-0xd(%ebp)
080eb7b2 +0x13eb:  mov    0x18(%ebp),%eax
080eb7b5 +0x13ee:  mov    %eax,0x4(%esp)
080eb7b9 +0x13f2:  mov    0xc(%ebp),%eax
080eb7bc +0x13f5:  mov    %eax,(%esp)
080eb7bf +0x13f8:  call   080eb9a0 <+0x15d9>
080eb7c4 +0x13fd:  mov    %eax,-0xc(%ebp)
080eb7c7 +0x1400:  mov    0xc(%ebp),%eax
080eb7ca +0x1403:  lea    0x1(%eax),%ecx
080eb7cd +0x1406:  mov    -0xc(%ebp),%edx
080eb7d0 +0x1409:  movzbl -0xd(%ebp),%eax
080eb7d4 +0x140d:  mov    %ecx,0xc(%esp)
080eb7d8 +0x1411:  mov    0x14(%ebp),%ecx
080eb7db +0x1414:  mov    %ecx,0x8(%esp)
080eb7df +0x1418:  mov    %edx,0x4(%esp)
080eb7e3 +0x141c:  mov    %eax,(%esp)
080eb7e6 +0x141f:  call   086df9d0 <_ZSt29_Rb_tree_insert_and_rebalancebPSt18_Rb_tree_node_baseS0_RS_>  ; std::_Rb_tree_insert_and_rebalance(bool, std::_Rb_tree_node_base*, std::_Rb_tree_node_base*, std::_Rb_tree_node_base&)
080eb7eb +0x1424:  mov    0xc(%ebp),%eax
080eb7ee +0x1427:  mov    0x11(%eax),%eax
080eb7f1 +0x142a:  lea    0x1(%eax),%edx
080eb7f4 +0x142d:  mov    0xc(%ebp),%eax
080eb7f7 +0x1430:  mov    %edx,0x11(%eax)
080eb7fa +0x1433:  mov    -0xc(%ebp),%eax
080eb7fd +0x1436:  mov    %eax,0x4(%esp)
080eb801 +0x143a:  mov    %esi,(%esp)
080eb804 +0x143d:  call   080eb1c4 <+0xdfd>
080eb809 +0x1442:  mov    %esi,%eax
080eb80b +0x1444:  add    $0x20,%esp
080eb80e +0x1447:  pop    %ebx
080eb80f +0x1448:  pop    %esi
080eb810 +0x1449:  pop    %ebp
080eb811 +0x144a:  ret    $0x4
080eb814 +0x144d:  push   %ebp
080eb815 +0x144e:  mov    %esp,%ebp
080eb817 +0x1450:  sub    $0x18,%esp
080eb81a +0x1453:  mov    0xc(%ebp),%eax
080eb81d +0x1456:  mov    %eax,(%esp)
080eb820 +0x1459:  call   080eba21 <+0x165a>
080eb825 +0x145e:  mov    0x8(%ebp),%edx
080eb828 +0x1461:  mov    (%eax),%eax
080eb82a +0x1463:  mov    %eax,(%edx)
080eb82c +0x1465:  mov    0x10(%ebp),%eax
080eb82f +0x1468:  mov    %eax,(%esp)
080eb832 +0x146b:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
080eb837 +0x1470:  movzbl (%eax),%edx
080eb83a +0x1473:  mov    0x8(%ebp),%eax
080eb83d +0x1476:  mov    %dl,0x4(%eax)
080eb840 +0x1479:  leave
080eb841 +0x147a:  ret
080eb842 +0x147b:  push   %ebp
080eb843 +0x147c:  mov    %esp,%ebp
080eb845 +0x147e:  sub    $0x18,%esp
080eb848 +0x1481:  mov    0x8(%ebp),%eax
080eb84b +0x1484:  mov    (%eax),%eax
080eb84d +0x1486:  mov    %eax,(%esp)
080eb850 +0x1489:  call   086df890 <_ZSt18_Rb_tree_decrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_decrement(std::_Rb_tree_node_base*)
080eb855 +0x148e:  mov    0x8(%ebp),%edx
080eb858 +0x1491:  mov    %eax,(%edx)
080eb85a +0x1493:  mov    0x8(%ebp),%eax
080eb85d +0x1496:  leave
080eb85e +0x1497:  ret
080eb85f +0x1498:  nop
080eb860 +0x1499:  push   %ebp
080eb861 +0x149a:  mov    %esp,%ebp
080eb863 +0x149c:  sub    $0x18,%esp
080eb866 +0x149f:  mov    0xc(%ebp),%eax
080eb869 +0x14a2:  mov    %eax,(%esp)
080eb86c +0x14a5:  call   080eba29 <+0x1662>
080eb871 +0x14aa:  mov    0x8(%ebp),%edx
080eb874 +0x14ad:  mov    (%eax),%eax
080eb876 +0x14af:  mov    %eax,(%edx)
080eb878 +0x14b1:  mov    0x10(%ebp),%eax
080eb87b +0x14b4:  mov    %eax,(%esp)
080eb87e +0x14b7:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
080eb883 +0x14bc:  movzbl (%eax),%edx
080eb886 +0x14bf:  mov    0x8(%ebp),%eax
080eb889 +0x14c2:  mov    %dl,0x4(%eax)
080eb88c +0x14c5:  leave
080eb88d +0x14c6:  ret
080eb88e +0x14c7:  push   %ebp
080eb88f +0x14c8:  mov    %esp,%ebp
080eb891 +0x14ca:  sub    $0x18,%esp
080eb894 +0x14cd:  mov    0x8(%ebp),%eax
080eb897 +0x14d0:  mov    0xc(%ebp),%edx
080eb89a +0x14d3:  mov    %edx,0x4(%esp)
080eb89e +0x14d7:  mov    %eax,(%esp)
080eb8a1 +0x14da:  call   080eba32 <+0x166b>
080eb8a6 +0x14df:  mov    0x8(%ebp),%eax
080eb8a9 +0x14e2:  movl   $0x0,(%eax)
080eb8af +0x14e8:  mov    0x8(%ebp),%eax
080eb8b2 +0x14eb:  movl   $0x0,0x4(%eax)
080eb8b9 +0x14f2:  mov    0x8(%ebp),%eax
080eb8bc +0x14f5:  movl   $0x0,0x8(%eax)
080eb8c3 +0x14fc:  leave
080eb8c4 +0x14fd:  ret
080eb8c5 +0x14fe:  nop
080eb8c6 +0x14ff:  push   %ebp
080eb8c7 +0x1500:  mov    %esp,%ebp
080eb8c9 +0x1502:  sub    $0x18,%esp
080eb8cc +0x1505:  mov    0x8(%ebp),%eax
080eb8cf +0x1508:  mov    %eax,(%esp)
080eb8d2 +0x150b:  call   080eba4c <+0x1685>
080eb8d7 +0x1510:  leave
080eb8d8 +0x1511:  ret
080eb8d9 +0x1512:  nop
080eb8da +0x1513:  push   %ebp
080eb8db +0x1514:  mov    %esp,%ebp
080eb8dd +0x1516:  mov    0x8(%ebp),%eax
080eb8e0 +0x1519:  movl   $0x0,0x1(%eax)
080eb8e7 +0x1520:  mov    0x8(%ebp),%eax
080eb8ea +0x1523:  movl   $0x0,0x5(%eax)
080eb8f1 +0x152a:  mov    0x8(%ebp),%eax
080eb8f4 +0x152d:  lea    0x1(%eax),%edx
080eb8f7 +0x1530:  mov    0x8(%ebp),%eax
080eb8fa +0x1533:  mov    %edx,0x9(%eax)
080eb8fd +0x1536:  mov    0x8(%ebp),%eax
080eb900 +0x1539:  lea    0x1(%eax),%edx
080eb903 +0x153c:  mov    0x8(%ebp),%eax
080eb906 +0x153f:  mov    %edx,0xd(%eax)
080eb909 +0x1542:  pop    %ebp
080eb90a +0x1543:  ret
080eb90b +0x1544:  nop
080eb90c +0x1545:  push   %ebp
080eb90d +0x1546:  mov    %esp,%ebp
080eb90f +0x1548:  mov    0x8(%ebp),%eax
080eb912 +0x154b:  pop    %ebp
080eb913 +0x154c:  ret
080eb914 +0x154d:  push   %ebp
080eb915 +0x154e:  mov    %esp,%ebp
080eb917 +0x1550:  sub    $0x18,%esp
080eb91a +0x1553:  mov    0x8(%ebp),%eax
080eb91d +0x1556:  add    $0x10,%eax
080eb920 +0x1559:  mov    %eax,(%esp)
080eb923 +0x155c:  call   080ea44c <+0x85>
080eb928 +0x1561:  leave
080eb929 +0x1562:  ret
080eb92a +0x1563:  push   %ebp
080eb92b +0x1564:  mov    %esp,%ebp
080eb92d +0x1566:  sub    $0x18,%esp
080eb930 +0x1569:  mov    0xc(%ebp),%eax
080eb933 +0x156c:  mov    %eax,(%esp)
080eb936 +0x156f:  call   080eb914 <+0x154d>
080eb93b +0x1574:  leave
080eb93c +0x1575:  ret
080eb93d +0x1576:  nop
080eb93e +0x1577:  push   %ebp
080eb93f +0x1578:  mov    %esp,%ebp
080eb941 +0x157a:  sub    $0x18,%esp
080eb944 +0x157d:  mov    0x8(%ebp),%eax
080eb947 +0x1580:  movl   $0x1,0x8(%esp)
080eb94f +0x1588:  mov    0xc(%ebp),%edx
080eb952 +0x158b:  mov    %edx,0x4(%esp)
080eb956 +0x158f:  mov    %eax,(%esp)
080eb959 +0x1592:  call   080eba52 <+0x168b>
080eb95e +0x1597:  leave
080eb95f +0x1598:  ret
080eb960 +0x1599:  push   %ebp
080eb961 +0x159a:  mov    %esp,%ebp
080eb963 +0x159c:  mov    0x8(%ebp),%eax
080eb966 +0x159f:  add    $0x10,%eax
080eb969 +0x15a2:  pop    %ebp
080eb96a +0x15a3:  ret
080eb96b +0x15a4:  nop
080eb96c +0x15a5:  push   %ebp
080eb96d +0x15a6:  mov    %esp,%ebp
080eb96f +0x15a8:  sub    $0x18,%esp
080eb972 +0x15ab:  mov    0x8(%ebp),%eax
080eb975 +0x15ae:  mov    (%eax),%eax
080eb977 +0x15b0:  mov    %eax,(%esp)
080eb97a +0x15b3:  call   086df8e0 <_ZSt18_Rb_tree_decrementPKSt18_Rb_tree_node_base>  ; std::_Rb_tree_decrement(std::_Rb_tree_node_base const*)
080eb97f +0x15b8:  mov    0x8(%ebp),%edx
080eb982 +0x15bb:  mov    %eax,(%edx)
080eb984 +0x15bd:  mov    0x8(%ebp),%eax
080eb987 +0x15c0:  leave
080eb988 +0x15c1:  ret
080eb989 +0x15c2:  push   %ebp
080eb98a +0x15c3:  mov    %esp,%ebp
080eb98c +0x15c5:  mov    0x8(%ebp),%eax
080eb98f +0x15c8:  mov    0xc(%eax),%eax
080eb992 +0x15cb:  pop    %ebp
080eb993 +0x15cc:  ret
080eb994 +0x15cd:  push   %ebp
080eb995 +0x15ce:  mov    %esp,%ebp
080eb997 +0x15d0:  mov    0x8(%ebp),%eax
080eb99a +0x15d3:  add    $0x10,%eax
080eb99d +0x15d6:  pop    %ebp
080eb99e +0x15d7:  ret
080eb99f +0x15d8:  nop
080eb9a0 +0x15d9:  push   %ebp
080eb9a1 +0x15da:  mov    %esp,%ebp
080eb9a3 +0x15dc:  push   %esi
080eb9a4 +0x15dd:  push   %ebx
080eb9a5 +0x15de:  sub    $0x20,%esp
080eb9a8 +0x15e1:  mov    0x8(%ebp),%eax
080eb9ab +0x15e4:  mov    %eax,(%esp)
080eb9ae +0x15e7:  call   080eba66 <+0x169f>
080eb9b3 +0x15ec:  mov    %eax,-0xc(%ebp)
080eb9b6 +0x15ef:  mov    0xc(%ebp),%eax
080eb9b9 +0x15f2:  mov    %eax,(%esp)
080eb9bc +0x15f5:  call   080eba89 <+0x16c2>
080eb9c1 +0x15fa:  mov    %eax,%ebx
080eb9c3 +0x15fc:  mov    0x8(%ebp),%eax
080eb9c6 +0x15ff:  mov    %eax,(%esp)
080eb9c9 +0x1602:  call   080eb90c <+0x1545>
080eb9ce +0x1607:  mov    %ebx,0x8(%esp)
080eb9d2 +0x160b:  mov    -0xc(%ebp),%edx
080eb9d5 +0x160e:  mov    %edx,0x4(%esp)
080eb9d9 +0x1612:  mov    %eax,(%esp)
080eb9dc +0x1615:  call   080eba92 <+0x16cb>
080eb9e1 +0x161a:  jmp    080eba17 <+0x1650>
080eb9e3 +0x161c:  mov    %eax,(%esp)
080eb9e6 +0x161f:  call   08725ce0 <__cxa_begin_catch>
080eb9eb +0x1624:  mov    -0xc(%ebp),%eax
080eb9ee +0x1627:  mov    %eax,0x4(%esp)
080eb9f2 +0x162b:  mov    0x8(%ebp),%eax
080eb9f5 +0x162e:  mov    %eax,(%esp)
080eb9f8 +0x1631:  call   080eb93e <+0x1577>
080eb9fd +0x1636:  call   08724be0 <__cxa_rethrow>
080eba02 +0x163b:  mov    %edx,%ebx
080eba04 +0x163d:  mov    %eax,%esi
080eba06 +0x163f:  call   08725c30 <__cxa_end_catch>
080eba0b +0x1644:  mov    %esi,%eax
080eba0d +0x1646:  mov    %ebx,%edx
080eba0f +0x1648:  mov    %eax,(%esp)
080eba12 +0x164b:  call   08ae3750 <_Unwind_Resume>
080eba17 +0x1650:  mov    -0xc(%ebp),%eax
080eba1a +0x1653:  add    $0x20,%esp
080eba1d +0x1656:  pop    %ebx
080eba1e +0x1657:  pop    %esi
080eba1f +0x1658:  pop    %ebp
080eba20 +0x1659:  ret
080eba21 +0x165a:  push   %ebp
080eba22 +0x165b:  mov    %esp,%ebp
080eba24 +0x165d:  mov    0x8(%ebp),%eax
080eba27 +0x1660:  pop    %ebp
080eba28 +0x1661:  ret
080eba29 +0x1662:  push   %ebp
080eba2a +0x1663:  mov    %esp,%ebp
080eba2c +0x1665:  mov    0x8(%ebp),%eax
080eba2f +0x1668:  pop    %ebp
080eba30 +0x1669:  ret
080eba31 +0x166a:  nop
080eba32 +0x166b:  push   %ebp
080eba33 +0x166c:  mov    %esp,%ebp
080eba35 +0x166e:  sub    $0x18,%esp
080eba38 +0x1671:  mov    0xc(%ebp),%edx
080eba3b +0x1674:  mov    0x8(%ebp),%eax
080eba3e +0x1677:  mov    %edx,0x4(%esp)
080eba42 +0x167b:  mov    %eax,(%esp)
080eba45 +0x167e:  call   080ebafa <+0x1733>
080eba4a +0x1683:  leave
080eba4b +0x1684:  ret
080eba4c +0x1685:  push   %ebp
080eba4d +0x1686:  mov    %esp,%ebp
080eba4f +0x1688:  pop    %ebp
080eba50 +0x1689:  ret
080eba51 +0x168a:  nop
080eba52 +0x168b:  push   %ebp
080eba53 +0x168c:  mov    %esp,%ebp
080eba55 +0x168e:  sub    $0x18,%esp
080eba58 +0x1691:  mov    0xc(%ebp),%eax
080eba5b +0x1694:  mov    %eax,(%esp)
080eba5e +0x1697:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
080eba63 +0x169c:  leave
080eba64 +0x169d:  ret
080eba65 +0x169e:  nop
080eba66 +0x169f:  push   %ebp
080eba67 +0x16a0:  mov    %esp,%ebp
080eba69 +0x16a2:  sub    $0x18,%esp
080eba6c +0x16a5:  mov    0x8(%ebp),%eax
080eba6f +0x16a8:  movl   $0x0,0x8(%esp)
080eba77 +0x16b0:  movl   $0x1,0x4(%esp)
080eba7f +0x16b8:  mov    %eax,(%esp)
080eba82 +0x16bb:  call   080ebb00 <+0x1739>
080eba87 +0x16c0:  leave
080eba88 +0x16c1:  ret
080eba89 +0x16c2:  push   %ebp
080eba8a +0x16c3:  mov    %esp,%ebp
080eba8c +0x16c5:  mov    0x8(%ebp),%eax
080eba8f +0x16c8:  pop    %ebp
080eba90 +0x16c9:  ret
080eba91 +0x16ca:  nop
080eba92 +0x16cb:  push   %ebp
080eba93 +0x16cc:  mov    %esp,%ebp
080eba95 +0x16ce:  push   %edi
080eba96 +0x16cf:  push   %esi
080eba97 +0x16d0:  push   %ebx
080eba98 +0x16d1:  sub    $0x2c,%esp
080eba9b +0x16d4:  mov    0x10(%ebp),%eax
080eba9e +0x16d7:  mov    %eax,(%esp)
080ebaa1 +0x16da:  call   080eba89 <+0x16c2>
080ebaa6 +0x16df:  mov    %eax,%edi
080ebaa8 +0x16e1:  mov    0xc(%ebp),%esi
080ebaab +0x16e4:  mov    %esi,0x4(%esp)
080ebaaf +0x16e8:  movl   $0x20,(%esp)
080ebab6 +0x16ef:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
080ebabb +0x16f4:  mov    %eax,%ebx
080ebabd +0x16f6:  mov    %ebx,%eax
080ebabf +0x16f8:  test   %eax,%eax
080ebac1 +0x16fa:  je     080ebaf1 <+0x172a>
080ebac3 +0x16fc:  mov    %ebx,%eax
080ebac5 +0x16fe:  mov    %edi,0x4(%esp)
080ebac9 +0x1702:  mov    %eax,(%esp)
080ebacc +0x1705:  call   080ebb64 <+0x179d>
080ebad1 +0x170a:  jmp    080ebaf1 <+0x172a>
080ebad3 +0x170c:  mov    %edx,%edi
080ebad5 +0x170e:  mov    %eax,-0x1c(%ebp)
080ebad8 +0x1711:  mov    %esi,0x4(%esp)
080ebadc +0x1715:  mov    %ebx,(%esp)
080ebadf +0x1718:  call   0807fff6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x1c>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x1c
080ebae4 +0x171d:  mov    -0x1c(%ebp),%eax
080ebae7 +0x1720:  mov    %edi,%edx
080ebae9 +0x1722:  mov    %eax,(%esp)
080ebaec +0x1725:  call   08ae3750 <_Unwind_Resume>
080ebaf1 +0x172a:  add    $0x2c,%esp
080ebaf4 +0x172d:  pop    %ebx
080ebaf5 +0x172e:  pop    %esi
080ebaf6 +0x172f:  pop    %edi
080ebaf7 +0x1730:  pop    %ebp
080ebaf8 +0x1731:  ret
080ebaf9 +0x1732:  nop
080ebafa +0x1733:  push   %ebp
080ebafb +0x1734:  mov    %esp,%ebp
080ebafd +0x1736:  pop    %ebp
080ebafe +0x1737:  ret
080ebaff +0x1738:  nop
080ebb00 +0x1739:  push   %ebp
080ebb01 +0x173a:  mov    %esp,%ebp
080ebb03 +0x173c:  sub    $0x18,%esp
080ebb06 +0x173f:  mov    0x8(%ebp),%eax
080ebb09 +0x1742:  mov    %eax,(%esp)
080ebb0c +0x1745:  call   080ebbb0 <+0x17e9>
080ebb11 +0x174a:  cmp    0xc(%ebp),%eax
080ebb14 +0x174d:  setb   %al
080ebb17 +0x1750:  movzbl %al,%eax
080ebb1a +0x1753:  test   %eax,%eax
080ebb1c +0x1755:  setne  %al
080ebb1f +0x1758:  test   %al,%al
080ebb21 +0x175a:  je     080ebb28 <+0x1761>
080ebb23 +0x175c:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
080ebb28 +0x1761:  mov    0xc(%ebp),%eax
080ebb2b +0x1764:  shl    $0x5,%eax
080ebb2e +0x1767:  mov    %eax,(%esp)
080ebb31 +0x176a:  call   08724450 <_Znwj>  ; operator new(unsigned int)
080ebb36 +0x176f:  leave
080ebb37 +0x1770:  ret
080ebb38 +0x1771:  push   %ebp
080ebb39 +0x1772:  mov    %esp,%ebp
080ebb3b +0x1774:  sub    $0x18,%esp
080ebb3e +0x1777:  mov    0xc(%ebp),%eax
080ebb41 +0x177a:  movzwl (%eax),%edx
080ebb44 +0x177d:  mov    0x8(%ebp),%eax
080ebb47 +0x1780:  mov    %dx,(%eax)
080ebb4a +0x1783:  mov    0xc(%ebp),%eax
080ebb4d +0x1786:  lea    0x4(%eax),%edx
080ebb50 +0x1789:  mov    0x8(%ebp),%eax
080ebb53 +0x178c:  add    $0x4,%eax
080ebb56 +0x178f:  mov    %edx,0x4(%esp)
080ebb5a +0x1793:  mov    %eax,(%esp)
080ebb5d +0x1796:  call   080eaa36 <+0x66f>
080ebb62 +0x179b:  leave
080ebb63 +0x179c:  ret
080ebb64 +0x179d:  push   %ebp
080ebb65 +0x179e:  mov    %esp,%ebp
080ebb67 +0x17a0:  sub    $0x18,%esp
080ebb6a +0x17a3:  mov    0x8(%ebp),%eax
080ebb6d +0x17a6:  movl   $0x0,(%eax)
080ebb73 +0x17ac:  mov    0x8(%ebp),%eax
080ebb76 +0x17af:  movl   $0x0,0x4(%eax)
080ebb7d +0x17b6:  mov    0x8(%ebp),%eax
080ebb80 +0x17b9:  movl   $0x0,0x8(%eax)
080ebb87 +0x17c0:  mov    0x8(%ebp),%eax
080ebb8a +0x17c3:  movl   $0x0,0xc(%eax)
080ebb91 +0x17ca:  mov    0xc(%ebp),%eax
080ebb94 +0x17cd:  mov    %eax,(%esp)
080ebb97 +0x17d0:  call   080eba89 <+0x16c2>
080ebb9c +0x17d5:  mov    0x8(%ebp),%edx
080ebb9f +0x17d8:  add    $0x10,%edx
080ebba2 +0x17db:  mov    %eax,0x4(%esp)
080ebba6 +0x17df:  mov    %edx,(%esp)
080ebba9 +0x17e2:  call   080ebb38 <+0x1771>
080ebbae +0x17e7:  leave
080ebbaf +0x17e8:  ret
080ebbb0 +0x17e9:  push   %ebp
080ebbb1 +0x17ea:  mov    %esp,%ebp
080ebbb3 +0x17ec:  mov    $0x7ffffff,%eax
080ebbb8 +0x17f1:  pop    %ebp
080ebbb9 +0x17f2:  ret
080ebbba +0x17f3:  nop
080ebbbb +0x17f4:  nop
```

## 反编译 C

```c
// <global>::global @ 0x80ea3c7

/* ComboSkill::resetTree(ENUM_SKILL_TREE_KIND) */

void ComboSkill::_GLOBAL__I_resetTree(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
