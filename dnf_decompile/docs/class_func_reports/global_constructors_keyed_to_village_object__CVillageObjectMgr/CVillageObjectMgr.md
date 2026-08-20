# CVillageObjectMgr

`_GLOBAL__I__ZN14village_object17CVillageObjectMgrC2Ev`

`global constructors keyed to village_object::CVillageObjectMgr::CVillageObjectMgr()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to village_object::CVillageObjectMgr` | `0x086b742f` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086b742f  _GLOBAL__I__ZN14village_object17CVillageObjectMgrC2Ev
#           global constructors keyed to village_object::CVillageObjectMgr::CVillageObjectMgr()
# range [0x086b742f, 0x086b89ff]
086b742f +0x0000:  push   %ebp
086b7430 +0x0001:  mov    %esp,%ebp
086b7432 +0x0003:  sub    $0x18,%esp
086b7435 +0x0006:  movl   $0xffff,0x4(%esp)
086b743d +0x000e:  movl   $0x1,(%esp)
086b7444 +0x0015:  call   086b73ef <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
086b7449 +0x001a:  leave
086b744a +0x001b:  ret
086b744b +0x001c:  nop
086b744c +0x001d:  push   %ebp
086b744d +0x001e:  mov    %esp,%ebp
086b744f +0x0020:  mov    0x8(%ebp),%eax
086b7452 +0x0023:  movzbl (%eax),%edx
086b7455 +0x0026:  mov    0xc(%ebp),%eax
086b7458 +0x0029:  movzbl (%eax),%eax
086b745b +0x002c:  cmp    %al,%dl
086b745d +0x002e:  jae    086b7466 <+0x37>
086b745f +0x0030:  mov    $0x1,%eax
086b7464 +0x0035:  jmp    086b7494 <+0x65>
086b7466 +0x0037:  mov    0x8(%ebp),%eax
086b7469 +0x003a:  movzbl (%eax),%edx
086b746c +0x003d:  mov    0xc(%ebp),%eax
086b746f +0x0040:  movzbl (%eax),%eax
086b7472 +0x0043:  cmp    %al,%dl
086b7474 +0x0045:  jne    086b748f <+0x60>
086b7476 +0x0047:  mov    0x8(%ebp),%eax
086b7479 +0x004a:  movzbl 0x1(%eax),%edx
086b747d +0x004e:  mov    0xc(%ebp),%eax
086b7480 +0x0051:  movzbl 0x1(%eax),%eax
086b7484 +0x0055:  cmp    %al,%dl
086b7486 +0x0057:  jae    086b748f <+0x60>
086b7488 +0x0059:  mov    $0x1,%eax
086b748d +0x005e:  jmp    086b7494 <+0x65>
086b748f +0x0060:  mov    $0x0,%eax
086b7494 +0x0065:  pop    %ebp
086b7495 +0x0066:  ret
086b7496 +0x0067:  push   %ebp
086b7497 +0x0068:  mov    %esp,%ebp
086b7499 +0x006a:  sub    $0x18,%esp
086b749c +0x006d:  mov    0x8(%ebp),%eax
086b749f +0x0070:  mov    %eax,(%esp)
086b74a2 +0x0073:  call   086b7512 <+0xe3>
086b74a7 +0x0078:  leave
086b74a8 +0x0079:  ret
086b74a9 +0x007a:  nop
086b74aa +0x007b:  push   %ebp
086b74ab +0x007c:  mov    %esp,%ebp
086b74ad +0x007e:  sub    $0x18,%esp
086b74b0 +0x0081:  mov    0x8(%ebp),%eax
086b74b3 +0x0084:  mov    %eax,(%esp)
086b74b6 +0x0087:  call   086b76d4 <+0x2a5>
086b74bb +0x008c:  leave
086b74bc +0x008d:  ret
086b74bd +0x008e:  nop
086b74be +0x008f:  push   %ebp
086b74bf +0x0090:  mov    %esp,%ebp
086b74c1 +0x0092:  sub    $0x18,%esp
086b74c4 +0x0095:  mov    0x8(%ebp),%eax
086b74c7 +0x0098:  add    $0x4,%eax
086b74ca +0x009b:  mov    %eax,(%esp)
086b74cd +0x009e:  call   086b74aa <+0x7b>
086b74d2 +0x00a3:  leave
086b74d3 +0x00a4:  ret
086b74d4 +0x00a5:  push   %ebp
086b74d5 +0x00a6:  mov    %esp,%ebp
086b74d7 +0x00a8:  sub    $0x18,%esp
086b74da +0x00ab:  mov    0x8(%ebp),%eax
086b74dd +0x00ae:  add    $0x4,%eax
086b74e0 +0x00b1:  mov    %eax,(%esp)
086b74e3 +0x00b4:  call   086b74aa <+0x7b>
086b74e8 +0x00b9:  leave
086b74e9 +0x00ba:  ret
086b74ea +0x00bb:  push   %ebp
086b74eb +0x00bc:  mov    %esp,%ebp
086b74ed +0x00be:  sub    $0x18,%esp
086b74f0 +0x00c1:  mov    0x8(%ebp),%eax
086b74f3 +0x00c4:  mov    %eax,(%esp)
086b74f6 +0x00c7:  call   086b790c <+0x4dd>
086b74fb +0x00cc:  leave
086b74fc +0x00cd:  ret
086b74fd +0x00ce:  nop
086b74fe +0x00cf:  push   %ebp
086b74ff +0x00d0:  mov    %esp,%ebp
086b7501 +0x00d2:  sub    $0x18,%esp
086b7504 +0x00d5:  mov    0x8(%ebp),%eax
086b7507 +0x00d8:  mov    %eax,(%esp)
086b750a +0x00db:  call   086b7920 <+0x4f1>
086b750f +0x00e0:  leave
086b7510 +0x00e1:  ret
086b7511 +0x00e2:  nop
086b7512 +0x00e3:  push   %ebp
086b7513 +0x00e4:  mov    %esp,%ebp
086b7515 +0x00e6:  push   %esi
086b7516 +0x00e7:  push   %ebx
086b7517 +0x00e8:  sub    $0x10,%esp
086b751a +0x00eb:  mov    0x8(%ebp),%eax
086b751d +0x00ee:  mov    %eax,(%esp)
086b7520 +0x00f1:  call   086b798a <+0x55b>
086b7525 +0x00f6:  mov    %eax,0x4(%esp)
086b7529 +0x00fa:  mov    0x8(%ebp),%eax
086b752c +0x00fd:  mov    %eax,(%esp)
086b752f +0x0100:  call   086b7934 <+0x505>
086b7534 +0x0105:  jmp    086b7551 <+0x122>
086b7536 +0x0107:  mov    %edx,%ebx
086b7538 +0x0109:  mov    %eax,%esi
086b753a +0x010b:  mov    0x8(%ebp),%eax
086b753d +0x010e:  mov    %eax,(%esp)
086b7540 +0x0111:  call   086b74fe <+0xcf>
086b7545 +0x0116:  mov    %esi,%eax
086b7547 +0x0118:  mov    %ebx,%edx
086b7549 +0x011a:  mov    %eax,(%esp)
086b754c +0x011d:  call   08ae3750 <_Unwind_Resume>
086b7551 +0x0122:  mov    0x8(%ebp),%eax
086b7554 +0x0125:  mov    %eax,(%esp)
086b7557 +0x0128:  call   086b74fe <+0xcf>
086b755c +0x012d:  add    $0x10,%esp
086b755f +0x0130:  pop    %ebx
086b7560 +0x0131:  pop    %esi
086b7561 +0x0132:  pop    %ebp
086b7562 +0x0133:  ret
086b7563 +0x0134:  nop
086b7564 +0x0135:  push   %ebp
086b7565 +0x0136:  mov    %esp,%ebp
086b7567 +0x0138:  push   %ebx
086b7568 +0x0139:  sub    $0x14,%esp
086b756b +0x013c:  mov    0x8(%ebp),%ebx
086b756e +0x013f:  mov    0xc(%ebp),%eax
086b7571 +0x0142:  mov    0x10(%ebp),%edx
086b7574 +0x0145:  mov    %edx,0x8(%esp)
086b7578 +0x0149:  mov    %eax,0x4(%esp)
086b757c +0x014d:  mov    %ebx,(%esp)
086b757f +0x0150:  call   086b7996 <+0x567>
086b7584 +0x0155:  sub    $0x4,%esp
086b7587 +0x0158:  mov    %ebx,%eax
086b7589 +0x015a:  mov    -0x4(%ebp),%ebx
086b758c +0x015d:  leave
086b758d +0x015e:  ret    $0x4
086b7590 +0x0161:  push   %ebp
086b7591 +0x0162:  mov    %esp,%ebp
086b7593 +0x0164:  push   %ebx
086b7594 +0x0165:  sub    $0x14,%esp
086b7597 +0x0168:  mov    0x8(%ebp),%ebx
086b759a +0x016b:  mov    0xc(%ebp),%eax
086b759d +0x016e:  mov    %eax,0x4(%esp)
086b75a1 +0x0172:  mov    %ebx,(%esp)
086b75a4 +0x0175:  call   086b7a54 <+0x625>
086b75a9 +0x017a:  sub    $0x4,%esp
086b75ac +0x017d:  mov    %ebx,%eax
086b75ae +0x017f:  mov    -0x4(%ebp),%ebx
086b75b1 +0x0182:  leave
086b75b2 +0x0183:  ret    $0x4
086b75b5 +0x0186:  nop
086b75b6 +0x0187:  push   %ebp
086b75b7 +0x0188:  mov    %esp,%ebp
086b75b9 +0x018a:  mov    0x8(%ebp),%eax
086b75bc +0x018d:  mov    (%eax),%edx
086b75be +0x018f:  mov    0xc(%ebp),%eax
086b75c1 +0x0192:  mov    (%eax),%eax
086b75c3 +0x0194:  cmp    %eax,%edx
086b75c5 +0x0196:  setne  %al
086b75c8 +0x0199:  pop    %ebp
086b75c9 +0x019a:  ret
086b75ca +0x019b:  push   %ebp
086b75cb +0x019c:  mov    %esp,%ebp
086b75cd +0x019e:  mov    0x8(%ebp),%eax
086b75d0 +0x01a1:  mov    (%eax),%eax
086b75d2 +0x01a3:  add    $0x10,%eax
086b75d5 +0x01a6:  pop    %ebp
086b75d6 +0x01a7:  ret
086b75d7 +0x01a8:  push   %ebp
086b75d8 +0x01a9:  mov    %esp,%ebp
086b75da +0x01ab:  sub    $0x38,%esp
086b75dd +0x01ae:  mov    0xc(%ebp),%eax
086b75e0 +0x01b1:  mov    %eax,0x4(%esp)
086b75e4 +0x01b5:  lea    -0x18(%ebp),%eax
086b75e7 +0x01b8:  mov    %eax,(%esp)
086b75ea +0x01bb:  call   086b7a7a <+0x64b>
086b75ef +0x01c0:  lea    -0x14(%ebp),%eax
086b75f2 +0x01c3:  mov    0x8(%ebp),%edx
086b75f5 +0x01c6:  mov    %edx,0x4(%esp)
086b75f9 +0x01ca:  mov    %eax,(%esp)
086b75fc +0x01cd:  call   086b7802 <+0x3d3>
086b7601 +0x01d2:  sub    $0x4,%esp
086b7604 +0x01d5:  lea    -0x10(%ebp),%eax
086b7607 +0x01d8:  mov    0x8(%ebp),%edx
086b760a +0x01db:  mov    %edx,0x4(%esp)
086b760e +0x01df:  mov    %eax,(%esp)
086b7611 +0x01e2:  call   086b77dc <+0x3ad>
086b7616 +0x01e7:  sub    $0x4,%esp
086b7619 +0x01ea:  lea    -0x1c(%ebp),%eax
086b761c +0x01ed:  mov    -0x18(%ebp),%edx
086b761f +0x01f0:  mov    %edx,0xc(%esp)
086b7623 +0x01f4:  mov    -0x14(%ebp),%edx
086b7626 +0x01f7:  mov    %edx,0x8(%esp)
086b762a +0x01fb:  mov    -0x10(%ebp),%edx
086b762d +0x01fe:  mov    %edx,0x4(%esp)
086b7631 +0x0202:  mov    %eax,(%esp)
086b7634 +0x0205:  call   086b7a89 <+0x65a>
086b7639 +0x020a:  sub    $0x4,%esp
086b763c +0x020d:  lea    -0xc(%ebp),%eax
086b763f +0x0210:  mov    0x8(%ebp),%edx
086b7642 +0x0213:  mov    %edx,0x4(%esp)
086b7646 +0x0217:  mov    %eax,(%esp)
086b7649 +0x021a:  call   086b7802 <+0x3d3>
086b764e +0x021f:  sub    $0x4,%esp
086b7651 +0x0222:  lea    -0xc(%ebp),%eax
086b7654 +0x0225:  mov    %eax,0x4(%esp)
086b7658 +0x0229:  lea    -0x1c(%ebp),%eax
086b765b +0x022c:  mov    %eax,(%esp)
086b765e +0x022f:  call   086b7ade <+0x6af>
086b7663 +0x0234:  test   %al,%al
086b7665 +0x0236:  je     086b766e <+0x23f>
086b7667 +0x0238:  mov    $0x1,%eax
086b766c +0x023d:  jmp    086b7673 <+0x244>
086b766e +0x023f:  mov    $0x0,%eax
086b7673 +0x0244:  leave
086b7674 +0x0245:  ret
086b7675 +0x0246:  nop
086b7676 +0x0247:  push   %ebp
086b7677 +0x0248:  mov    %esp,%ebp
086b7679 +0x024a:  sub    $0x28,%esp
086b767c +0x024d:  lea    -0xc(%ebp),%eax
086b767f +0x0250:  mov    0x8(%ebp),%edx
086b7682 +0x0253:  mov    %edx,0x4(%esp)
086b7686 +0x0257:  mov    %eax,(%esp)
086b7689 +0x025a:  call   086b7802 <+0x3d3>
086b768e +0x025f:  sub    $0x4,%esp
086b7691 +0x0262:  mov    0xc(%ebp),%eax
086b7694 +0x0265:  mov    %eax,0x8(%esp)
086b7698 +0x0269:  mov    -0xc(%ebp),%eax
086b769b +0x026c:  mov    %eax,0x4(%esp)
086b769f +0x0270:  mov    0x8(%ebp),%eax
086b76a2 +0x0273:  mov    %eax,(%esp)
086b76a5 +0x0276:  call   086b7af2 <+0x6c3>
086b76aa +0x027b:  leave
086b76ab +0x027c:  ret
086b76ac +0x027d:  push   %ebp
086b76ad +0x027e:  mov    %esp,%ebp
086b76af +0x0280:  sub    $0x18,%esp
086b76b2 +0x0283:  mov    0x8(%ebp),%eax
086b76b5 +0x0286:  mov    %eax,(%esp)
086b76b8 +0x0289:  call   086b7b2a <+0x6fb>
086b76bd +0x028e:  leave
086b76be +0x028f:  ret
086b76bf +0x0290:  nop
086b76c0 +0x0291:  push   %ebp
086b76c1 +0x0292:  mov    %esp,%ebp
086b76c3 +0x0294:  sub    $0x18,%esp
086b76c6 +0x0297:  mov    0x8(%ebp),%eax
086b76c9 +0x029a:  mov    %eax,(%esp)
086b76cc +0x029d:  call   086b7b48 <+0x719>
086b76d1 +0x02a2:  leave
086b76d2 +0x02a3:  ret
086b76d3 +0x02a4:  nop
086b76d4 +0x02a5:  push   %ebp
086b76d5 +0x02a6:  mov    %esp,%ebp
086b76d7 +0x02a8:  push   %esi
086b76d8 +0x02a9:  push   %ebx
086b76d9 +0x02aa:  sub    $0x10,%esp
086b76dc +0x02ad:  mov    0x8(%ebp),%eax
086b76df +0x02b0:  mov    %eax,(%esp)
086b76e2 +0x02b3:  call   086b7b5c <+0x72d>
086b76e7 +0x02b8:  jmp    086b7704 <+0x2d5>
086b76e9 +0x02ba:  mov    %edx,%ebx
086b76eb +0x02bc:  mov    %eax,%esi
086b76ed +0x02be:  mov    0x8(%ebp),%eax
086b76f0 +0x02c1:  mov    %eax,(%esp)
086b76f3 +0x02c4:  call   086b76c0 <+0x291>
086b76f8 +0x02c9:  mov    %esi,%eax
086b76fa +0x02cb:  mov    %ebx,%edx
086b76fc +0x02cd:  mov    %eax,(%esp)
086b76ff +0x02d0:  call   08ae3750 <_Unwind_Resume>
086b7704 +0x02d5:  mov    0x8(%ebp),%eax
086b7707 +0x02d8:  mov    %eax,(%esp)
086b770a +0x02db:  call   086b76c0 <+0x291>
086b770f +0x02e0:  add    $0x10,%esp
086b7712 +0x02e3:  pop    %ebx
086b7713 +0x02e4:  pop    %esi
086b7714 +0x02e5:  pop    %ebp
086b7715 +0x02e6:  ret
086b7716 +0x02e7:  push   %ebp
086b7717 +0x02e8:  mov    %esp,%ebp
086b7719 +0x02ea:  push   %edi
086b771a +0x02eb:  push   %esi
086b771b +0x02ec:  push   %ebx
086b771c +0x02ed:  sub    $0x1c,%esp
086b771f +0x02f0:  mov    0x8(%ebp),%ebx
086b7722 +0x02f3:  mov    %ebx,%edi
086b7724 +0x02f5:  mov    0x10(%ebp),%eax
086b7727 +0x02f8:  mov    %eax,(%esp)
086b772a +0x02fb:  call   086b7bbf <+0x790>
086b772f +0x0300:  mov    %eax,%esi
086b7731 +0x0302:  mov    0xc(%ebp),%eax
086b7734 +0x0305:  mov    %eax,(%esp)
086b7737 +0x0308:  call   086b7bb7 <+0x788>
086b773c +0x030d:  mov    %esi,0x8(%esp)
086b7740 +0x0311:  mov    %eax,0x4(%esp)
086b7744 +0x0315:  mov    %edi,(%esp)
086b7747 +0x0318:  call   086b7bc8 <+0x799>
086b774c +0x031d:  mov    %ebx,%eax
086b774e +0x031f:  mov    %ebx,%eax
086b7750 +0x0321:  add    $0x1c,%esp
086b7753 +0x0324:  pop    %ebx
086b7754 +0x0325:  pop    %esi
086b7755 +0x0326:  pop    %edi
086b7756 +0x0327:  pop    %ebp
086b7757 +0x0328:  ret    $0x4
086b775a +0x032b:  push   %ebp
086b775b +0x032c:  mov    %esp,%ebp
086b775d +0x032e:  push   %ebx
086b775e +0x032f:  sub    $0x14,%esp
086b7761 +0x0332:  mov    0x8(%ebp),%ebx
086b7764 +0x0335:  mov    0xc(%ebp),%eax
086b7767 +0x0338:  mov    %eax,(%esp)
086b776a +0x033b:  call   086b7c01 <+0x7d2>
086b776f +0x0340:  movzwl (%eax),%eax
086b7772 +0x0343:  mov    %ax,(%ebx)
086b7775 +0x0346:  mov    0xc(%ebp),%eax
086b7778 +0x0349:  add    $0x4,%eax
086b777b +0x034c:  mov    %eax,(%esp)
086b777e +0x034f:  call   086b7c09 <+0x7da>
086b7783 +0x0354:  mov    0x8(%ebp),%edx
086b7786 +0x0357:  add    $0x4,%edx
086b7789 +0x035a:  mov    %eax,0x4(%esp)
086b778d +0x035e:  mov    %edx,(%esp)
086b7790 +0x0361:  call   086b7c12 <+0x7e3>
086b7795 +0x0366:  add    $0x14,%esp
086b7798 +0x0369:  pop    %ebx
086b7799 +0x036a:  pop    %ebp
086b779a +0x036b:  ret
086b779b +0x036c:  nop
086b779c +0x036d:  push   %ebp
086b779d +0x036e:  mov    %esp,%ebp
086b779f +0x0370:  push   %ebx
086b77a0 +0x0371:  sub    $0x14,%esp
086b77a3 +0x0374:  mov    0x8(%ebp),%ebx
086b77a6 +0x0377:  mov    0xc(%ebp),%eax
086b77a9 +0x037a:  mov    0x10(%ebp),%edx
086b77ac +0x037d:  mov    %edx,0x8(%esp)
086b77b0 +0x0381:  mov    %eax,0x4(%esp)
086b77b4 +0x0385:  mov    %ebx,(%esp)
086b77b7 +0x0388:  call   086b7c34 <+0x805>
086b77bc +0x038d:  sub    $0x4,%esp
086b77bf +0x0390:  mov    %ebx,%eax
086b77c1 +0x0392:  mov    -0x4(%ebp),%ebx
086b77c4 +0x0395:  leave
086b77c5 +0x0396:  ret    $0x4
086b77c8 +0x0399:  push   %ebp
086b77c9 +0x039a:  mov    %esp,%ebp
086b77cb +0x039c:  mov    0x8(%ebp),%eax
086b77ce +0x039f:  mov    (%eax),%edx
086b77d0 +0x03a1:  mov    0xc(%ebp),%eax
086b77d3 +0x03a4:  mov    (%eax),%eax
086b77d5 +0x03a6:  cmp    %eax,%edx
086b77d7 +0x03a8:  sete   %al
086b77da +0x03ab:  pop    %ebp
086b77db +0x03ac:  ret
086b77dc +0x03ad:  push   %ebp
086b77dd +0x03ae:  mov    %esp,%ebp
086b77df +0x03b0:  push   %ebx
086b77e0 +0x03b1:  sub    $0x14,%esp
086b77e3 +0x03b4:  mov    0x8(%ebp),%ebx
086b77e6 +0x03b7:  mov    0xc(%ebp),%eax
086b77e9 +0x03ba:  mov    (%eax),%eax
086b77eb +0x03bc:  mov    %eax,0x4(%esp)
086b77ef +0x03c0:  mov    %ebx,(%esp)
086b77f2 +0x03c3:  call   086b7e04 <+0x9d5>
086b77f7 +0x03c8:  mov    %ebx,%eax
086b77f9 +0x03ca:  add    $0x14,%esp
086b77fc +0x03cd:  pop    %ebx
086b77fd +0x03ce:  pop    %ebp
086b77fe +0x03cf:  ret    $0x4
086b7801 +0x03d2:  nop
086b7802 +0x03d3:  push   %ebp
086b7803 +0x03d4:  mov    %esp,%ebp
086b7805 +0x03d6:  push   %ebx
086b7806 +0x03d7:  sub    $0x14,%esp
086b7809 +0x03da:  mov    0x8(%ebp),%ebx
086b780c +0x03dd:  mov    0xc(%ebp),%eax
086b780f +0x03e0:  mov    %eax,0x4(%esp)
086b7813 +0x03e4:  mov    %ebx,(%esp)
086b7816 +0x03e7:  call   086b7e04 <+0x9d5>
086b781b +0x03ec:  mov    %ebx,%eax
086b781d +0x03ee:  add    $0x14,%esp
086b7820 +0x03f1:  pop    %ebx
086b7821 +0x03f2:  pop    %ebp
086b7822 +0x03f3:  ret    $0x4
086b7825 +0x03f6:  push   %ebp
086b7826 +0x03f7:  mov    %esp,%ebp
086b7828 +0x03f9:  push   %esi
086b7829 +0x03fa:  push   %ebx
086b782a +0x03fb:  sub    $0x30,%esp
086b782d +0x03fe:  mov    0x8(%ebp),%ebx
086b7830 +0x0401:  lea    -0x9(%ebp),%eax
086b7833 +0x0404:  lea    0xc(%ebp),%edx
086b7836 +0x0407:  mov    %edx,0x4(%esp)
086b783a +0x040b:  mov    %eax,(%esp)
086b783d +0x040e:  call   086b7e11 <+0x9e2>
086b7842 +0x0413:  sub    $0x4,%esp
086b7845 +0x0416:  mov    %esi,%eax
086b7847 +0x0418:  mov    %al,0x10(%esp)
086b784b +0x041c:  mov    0x14(%ebp),%eax
086b784e +0x041f:  mov    %eax,0xc(%esp)
086b7852 +0x0423:  mov    0x10(%ebp),%eax
086b7855 +0x0426:  mov    %eax,0x8(%esp)
086b7859 +0x042a:  mov    0xc(%ebp),%eax
086b785c +0x042d:  mov    %eax,0x4(%esp)
086b7860 +0x0431:  mov    %ebx,(%esp)
086b7863 +0x0434:  call   086b7e1b <+0x9ec>
086b7868 +0x0439:  sub    $0x4,%esp
086b786b +0x043c:  mov    %ebx,%eax
086b786d +0x043e:  lea    -0x8(%ebp),%esp
086b7870 +0x0441:  add    $0x0,%esp
086b7873 +0x0444:  pop    %ebx
086b7874 +0x0445:  pop    %esi
086b7875 +0x0446:  pop    %ebp
086b7876 +0x0447:  ret    $0x4
086b7879 +0x044a:  nop
086b787a +0x044b:  push   %ebp
086b787b +0x044c:  mov    %esp,%ebp
086b787d +0x044e:  mov    0x8(%ebp),%eax
086b7880 +0x0451:  mov    (%eax),%edx
086b7882 +0x0453:  mov    0xc(%ebp),%eax
086b7885 +0x0456:  mov    (%eax),%eax
086b7887 +0x0458:  cmp    %eax,%edx
086b7889 +0x045a:  sete   %al
086b788c +0x045d:  pop    %ebp
086b788d +0x045e:  ret
086b788e +0x045f:  push   %ebp
086b788f +0x0460:  mov    %esp,%ebp
086b7891 +0x0462:  push   %ebx
086b7892 +0x0463:  sub    $0x14,%esp
086b7895 +0x0466:  mov    0x8(%ebp),%ebx
086b7898 +0x0469:  mov    0x10(%ebp),%eax
086b789b +0x046c:  mov    (%eax),%eax
086b789d +0x046e:  mov    %eax,0x4(%esp)
086b78a1 +0x0472:  mov    %ebx,(%esp)
086b78a4 +0x0475:  call   086b7e04 <+0x9d5>
086b78a9 +0x047a:  mov    0x10(%ebp),%eax
086b78ac +0x047d:  mov    %eax,0x4(%esp)
086b78b0 +0x0481:  mov    0xc(%ebp),%eax
086b78b3 +0x0484:  mov    %eax,(%esp)
086b78b6 +0x0487:  call   086b7e7e <+0xa4f>
086b78bb +0x048c:  mov    %ebx,%eax
086b78bd +0x048e:  add    $0x14,%esp
086b78c0 +0x0491:  pop    %ebx
086b78c1 +0x0492:  pop    %ebp
086b78c2 +0x0493:  ret    $0x4
086b78c5 +0x0496:  nop
086b78c6 +0x0497:  push   %ebp
086b78c7 +0x0498:  mov    %esp,%ebp
086b78c9 +0x049a:  mov    0xc(%ebp),%eax
086b78cc +0x049d:  mov    (%eax),%edx
086b78ce +0x049f:  mov    0x8(%ebp),%eax
086b78d1 +0x04a2:  mov    %edx,(%eax)
086b78d3 +0x04a4:  pop    %ebp
086b78d4 +0x04a5:  ret
086b78d5 +0x04a6:  nop
086b78d6 +0x04a7:  push   %ebp
086b78d7 +0x04a8:  mov    %esp,%ebp
086b78d9 +0x04aa:  mov    0x8(%ebp),%eax
086b78dc +0x04ad:  mov    (%eax),%edx
086b78de +0x04af:  mov    0xc(%ebp),%eax
086b78e1 +0x04b2:  mov    (%eax),%eax
086b78e3 +0x04b4:  cmp    %eax,%edx
086b78e5 +0x04b6:  setne  %al
086b78e8 +0x04b9:  pop    %ebp
086b78e9 +0x04ba:  ret
086b78ea +0x04bb:  push   %ebp
086b78eb +0x04bc:  mov    %esp,%ebp
086b78ed +0x04be:  mov    0x8(%ebp),%eax
086b78f0 +0x04c1:  mov    (%eax),%eax
086b78f2 +0x04c3:  mov    (%eax),%edx
086b78f4 +0x04c5:  mov    0x8(%ebp),%eax
086b78f7 +0x04c8:  mov    %edx,(%eax)
086b78f9 +0x04ca:  mov    0x8(%ebp),%eax
086b78fc +0x04cd:  pop    %ebp
086b78fd +0x04ce:  ret
086b78fe +0x04cf:  push   %ebp
086b78ff +0x04d0:  mov    %esp,%ebp
086b7901 +0x04d2:  mov    0x8(%ebp),%eax
086b7904 +0x04d5:  mov    (%eax),%eax
086b7906 +0x04d7:  add    $0x8,%eax
086b7909 +0x04da:  pop    %ebp
086b790a +0x04db:  ret
086b790b +0x04dc:  nop
086b790c +0x04dd:  push   %ebp
086b790d +0x04de:  mov    %esp,%ebp
086b790f +0x04e0:  sub    $0x18,%esp
086b7912 +0x04e3:  mov    0x8(%ebp),%eax
086b7915 +0x04e6:  mov    %eax,(%esp)
086b7918 +0x04e9:  call   086b7ec4 <+0xa95>
086b791d +0x04ee:  leave
086b791e +0x04ef:  ret
086b791f +0x04f0:  nop
086b7920 +0x04f1:  push   %ebp
086b7921 +0x04f2:  mov    %esp,%ebp
086b7923 +0x04f4:  sub    $0x18,%esp
086b7926 +0x04f7:  mov    0x8(%ebp),%eax
086b7929 +0x04fa:  mov    %eax,(%esp)
086b792c +0x04fd:  call   086b7f14 <+0xae5>
086b7931 +0x0502:  leave
086b7932 +0x0503:  ret
086b7933 +0x0504:  nop
086b7934 +0x0505:  push   %ebp
086b7935 +0x0506:  mov    %esp,%ebp
086b7937 +0x0508:  sub    $0x28,%esp
086b793a +0x050b:  jmp    086b797c <+0x54d>
086b793c +0x050d:  mov    0xc(%ebp),%eax
086b793f +0x0510:  mov    %eax,(%esp)
086b7942 +0x0513:  call   086b7f19 <+0xaea>
086b7947 +0x0518:  mov    %eax,0x4(%esp)
086b794b +0x051c:  mov    0x8(%ebp),%eax
086b794e +0x051f:  mov    %eax,(%esp)
086b7951 +0x0522:  call   086b7934 <+0x505>
086b7956 +0x0527:  mov    0xc(%ebp),%eax
086b7959 +0x052a:  mov    %eax,(%esp)
086b795c +0x052d:  call   086b7f24 <+0xaf5>
086b7961 +0x0532:  mov    %eax,-0xc(%ebp)
086b7964 +0x0535:  mov    0xc(%ebp),%eax
086b7967 +0x0538:  mov    %eax,0x4(%esp)
086b796b +0x053c:  mov    0x8(%ebp),%eax
086b796e +0x053f:  mov    %eax,(%esp)
086b7971 +0x0542:  call   086b7f30 <+0xb01>
086b7976 +0x0547:  mov    -0xc(%ebp),%eax
086b7979 +0x054a:  mov    %eax,0xc(%ebp)
086b797c +0x054d:  cmpl   $0x0,0xc(%ebp)
086b7980 +0x0551:  setne  %al
086b7983 +0x0554:  test   %al,%al
086b7985 +0x0556:  jne    086b793c <+0x50d>
086b7987 +0x0558:  leave
086b7988 +0x0559:  ret
086b7989 +0x055a:  nop
086b798a +0x055b:  push   %ebp
086b798b +0x055c:  mov    %esp,%ebp
086b798d +0x055e:  mov    0x8(%ebp),%eax
086b7990 +0x0561:  mov    0x8(%eax),%eax
086b7993 +0x0564:  pop    %ebp
086b7994 +0x0565:  ret
086b7995 +0x0566:  nop
086b7996 +0x0567:  push   %ebp
086b7997 +0x0568:  mov    %esp,%ebp
086b7999 +0x056a:  push   %esi
086b799a +0x056b:  push   %ebx
086b799b +0x056c:  sub    $0x30,%esp
086b799e +0x056f:  mov    0x8(%ebp),%ebx
086b79a1 +0x0572:  mov    0xc(%ebp),%eax
086b79a4 +0x0575:  mov    %eax,(%esp)
086b79a7 +0x0578:  call   086b7f64 <+0xb35>
086b79ac +0x057d:  mov    %eax,%esi
086b79ae +0x057f:  mov    0xc(%ebp),%eax
086b79b1 +0x0582:  mov    %eax,(%esp)
086b79b4 +0x0585:  call   086b798a <+0x55b>
086b79b9 +0x058a:  lea    -0x10(%ebp),%edx
086b79bc +0x058d:  mov    0x10(%ebp),%ecx
086b79bf +0x0590:  mov    %ecx,0x10(%esp)
086b79c3 +0x0594:  mov    %esi,0xc(%esp)
086b79c7 +0x0598:  mov    %eax,0x8(%esp)
086b79cb +0x059c:  mov    0xc(%ebp),%eax
086b79ce +0x059f:  mov    %eax,0x4(%esp)
086b79d2 +0x05a3:  mov    %edx,(%esp)
086b79d5 +0x05a6:  call   086b7f70 <+0xb41>
086b79da +0x05ab:  sub    $0x4,%esp
086b79dd +0x05ae:  lea    -0xc(%ebp),%eax
086b79e0 +0x05b1:  mov    0xc(%ebp),%edx
086b79e3 +0x05b4:  mov    %edx,0x4(%esp)
086b79e7 +0x05b8:  mov    %eax,(%esp)
086b79ea +0x05bb:  call   086b7a54 <+0x625>
086b79ef +0x05c0:  sub    $0x4,%esp
086b79f2 +0x05c3:  lea    -0xc(%ebp),%eax
086b79f5 +0x05c6:  mov    %eax,0x4(%esp)
086b79f9 +0x05ca:  lea    -0x10(%ebp),%eax
086b79fc +0x05cd:  mov    %eax,(%esp)
086b79ff +0x05d0:  call   086b77c8 <+0x399>
086b7a04 +0x05d5:  test   %al,%al
086b7a06 +0x05d7:  jne    086b7a2d <+0x5fe>
086b7a08 +0x05d9:  mov    -0x10(%ebp),%eax
086b7a0b +0x05dc:  mov    %eax,(%esp)
086b7a0e +0x05df:  call   086b7fec <+0xbbd>
086b7a13 +0x05e4:  mov    0xc(%ebp),%edx
086b7a16 +0x05e7:  mov    %eax,0x8(%esp)
086b7a1a +0x05eb:  mov    0x10(%ebp),%eax
086b7a1d +0x05ee:  mov    %eax,0x4(%esp)
086b7a21 +0x05f2:  mov    %edx,(%esp)
086b7a24 +0x05f5:  call   086b800e <+0xbdf>
086b7a29 +0x05fa:  test   %al,%al
086b7a2b +0x05fc:  je     086b7a41 <+0x612>
086b7a2d +0x05fe:  mov    0xc(%ebp),%eax
086b7a30 +0x0601:  mov    %eax,0x4(%esp)
086b7a34 +0x0605:  mov    %ebx,(%esp)
086b7a37 +0x0608:  call   086b7a54 <+0x625>
086b7a3c +0x060d:  sub    $0x4,%esp
086b7a3f +0x0610:  jmp    086b7a46 <+0x617>
086b7a41 +0x0612:  mov    -0x10(%ebp),%eax
086b7a44 +0x0615:  mov    %eax,(%ebx)
086b7a46 +0x0617:  mov    %ebx,%eax
086b7a48 +0x0619:  lea    -0x8(%ebp),%esp
086b7a4b +0x061c:  add    $0x0,%esp
086b7a4e +0x061f:  pop    %ebx
086b7a4f +0x0620:  pop    %esi
086b7a50 +0x0621:  pop    %ebp
086b7a51 +0x0622:  ret    $0x4
086b7a54 +0x0625:  push   %ebp
086b7a55 +0x0626:  mov    %esp,%ebp
086b7a57 +0x0628:  push   %ebx
086b7a58 +0x0629:  sub    $0x14,%esp
086b7a5b +0x062c:  mov    0x8(%ebp),%ebx
086b7a5e +0x062f:  mov    0xc(%ebp),%eax
086b7a61 +0x0632:  add    $0x4,%eax
086b7a64 +0x0635:  mov    %eax,0x4(%esp)
086b7a68 +0x0639:  mov    %ebx,(%esp)
086b7a6b +0x063c:  call   086b8028 <+0xbf9>
086b7a70 +0x0641:  mov    %ebx,%eax
086b7a72 +0x0643:  add    $0x14,%esp
086b7a75 +0x0646:  pop    %ebx
086b7a76 +0x0647:  pop    %ebp
086b7a77 +0x0648:  ret    $0x4
086b7a7a +0x064b:  push   %ebp
086b7a7b +0x064c:  mov    %esp,%ebp
086b7a7d +0x064e:  mov    0xc(%ebp),%eax
086b7a80 +0x0651:  mov    (%eax),%edx
086b7a82 +0x0653:  mov    0x8(%ebp),%eax
086b7a85 +0x0656:  mov    %edx,(%eax)
086b7a87 +0x0658:  pop    %ebp
086b7a88 +0x0659:  ret
086b7a89 +0x065a:  push   %ebp
086b7a8a +0x065b:  mov    %esp,%ebp
086b7a8c +0x065d:  push   %esi
086b7a8d +0x065e:  push   %ebx
086b7a8e +0x065f:  sub    $0x30,%esp
086b7a91 +0x0662:  mov    0x8(%ebp),%ebx
086b7a94 +0x0665:  lea    -0x9(%ebp),%eax
086b7a97 +0x0668:  lea    0xc(%ebp),%edx
086b7a9a +0x066b:  mov    %edx,0x4(%esp)
086b7a9e +0x066f:  mov    %eax,(%esp)
086b7aa1 +0x0672:  call   086b7e11 <+0x9e2>
086b7aa6 +0x0677:  sub    $0x4,%esp
086b7aa9 +0x067a:  mov    %esi,%eax
086b7aab +0x067c:  mov    %al,0x10(%esp)
086b7aaf +0x0680:  mov    0x14(%ebp),%eax
086b7ab2 +0x0683:  mov    %eax,0xc(%esp)
086b7ab6 +0x0687:  mov    0x10(%ebp),%eax
086b7ab9 +0x068a:  mov    %eax,0x8(%esp)
086b7abd +0x068e:  mov    0xc(%ebp),%eax
086b7ac0 +0x0691:  mov    %eax,0x4(%esp)
086b7ac4 +0x0695:  mov    %ebx,(%esp)
086b7ac7 +0x0698:  call   086b8035 <+0xc06>
086b7acc +0x069d:  sub    $0x4,%esp
086b7acf +0x06a0:  mov    %ebx,%eax
086b7ad1 +0x06a2:  lea    -0x8(%ebp),%esp
086b7ad4 +0x06a5:  add    $0x0,%esp
086b7ad7 +0x06a8:  pop    %ebx
086b7ad8 +0x06a9:  pop    %esi
086b7ad9 +0x06aa:  pop    %ebp
086b7ada +0x06ab:  ret    $0x4
086b7add +0x06ae:  nop
086b7ade +0x06af:  push   %ebp
086b7adf +0x06b0:  mov    %esp,%ebp
086b7ae1 +0x06b2:  mov    0x8(%ebp),%eax
086b7ae4 +0x06b5:  mov    (%eax),%edx
086b7ae6 +0x06b7:  mov    0xc(%ebp),%eax
086b7ae9 +0x06ba:  mov    (%eax),%eax
086b7aeb +0x06bc:  cmp    %eax,%edx
086b7aed +0x06be:  setne  %al
086b7af0 +0x06c1:  pop    %ebp
086b7af1 +0x06c2:  ret
086b7af2 +0x06c3:  push   %ebp
086b7af3 +0x06c4:  mov    %esp,%ebp
086b7af5 +0x06c6:  sub    $0x28,%esp
086b7af8 +0x06c9:  mov    0x10(%ebp),%eax
086b7afb +0x06cc:  mov    %eax,(%esp)
086b7afe +0x06cf:  call   086b80a2 <+0xc73>
086b7b03 +0x06d4:  mov    %eax,0x4(%esp)
086b7b07 +0x06d8:  mov    0x8(%ebp),%eax
086b7b0a +0x06db:  mov    %eax,(%esp)
086b7b0d +0x06de:  call   086b80aa <+0xc7b>
086b7b12 +0x06e3:  mov    %eax,-0xc(%ebp)
086b7b15 +0x06e6:  mov    0xc(%ebp),%edx
086b7b18 +0x06e9:  mov    -0xc(%ebp),%eax
086b7b1b +0x06ec:  mov    %edx,0x4(%esp)
086b7b1f +0x06f0:  mov    %eax,(%esp)
086b7b22 +0x06f3:  call   086dad20 <_ZNSt15_List_node_base4hookEPS_>  ; std::_List_node_base::hook(std::_List_node_base*)
086b7b27 +0x06f8:  leave
086b7b28 +0x06f9:  ret
086b7b29 +0x06fa:  nop
086b7b2a +0x06fb:  push   %ebp
086b7b2b +0x06fc:  mov    %esp,%ebp
086b7b2d +0x06fe:  sub    $0x18,%esp
086b7b30 +0x0701:  mov    0x8(%ebp),%eax
086b7b33 +0x0704:  mov    %eax,(%esp)
086b7b36 +0x0707:  call   086b812c <+0xcfd>
086b7b3b +0x070c:  mov    0x8(%ebp),%eax
086b7b3e +0x070f:  mov    %eax,(%esp)
086b7b41 +0x0712:  call   086b8152 <+0xd23>
086b7b46 +0x0717:  leave
086b7b47 +0x0718:  ret
086b7b48 +0x0719:  push   %ebp
086b7b49 +0x071a:  mov    %esp,%ebp
086b7b4b +0x071c:  sub    $0x18,%esp
086b7b4e +0x071f:  mov    0x8(%ebp),%eax
086b7b51 +0x0722:  mov    %eax,(%esp)
086b7b54 +0x0725:  call   086b8168 <+0xd39>
086b7b59 +0x072a:  leave
086b7b5a +0x072b:  ret
086b7b5b +0x072c:  nop
086b7b5c +0x072d:  push   %ebp
086b7b5d +0x072e:  mov    %esp,%ebp
086b7b5f +0x0730:  sub    $0x28,%esp
086b7b62 +0x0733:  mov    0x8(%ebp),%eax
086b7b65 +0x0736:  mov    (%eax),%eax
086b7b67 +0x0738:  mov    %eax,-0x10(%ebp)
086b7b6a +0x073b:  jmp    086b7ba6 <+0x777>
086b7b6c +0x073d:  mov    -0x10(%ebp),%eax
086b7b6f +0x0740:  mov    %eax,-0xc(%ebp)
086b7b72 +0x0743:  mov    -0x10(%ebp),%eax
086b7b75 +0x0746:  mov    (%eax),%eax
086b7b77 +0x0748:  mov    %eax,-0x10(%ebp)
086b7b7a +0x074b:  mov    0x8(%ebp),%eax
086b7b7d +0x074e:  mov    %eax,(%esp)
086b7b80 +0x0751:  call   086b816e <+0xd3f>
086b7b85 +0x0756:  mov    -0xc(%ebp),%edx
086b7b88 +0x0759:  mov    %edx,0x4(%esp)
086b7b8c +0x075d:  mov    %eax,(%esp)
086b7b8f +0x0760:  call   086b817c <+0xd4d>
086b7b94 +0x0765:  mov    -0xc(%ebp),%eax
086b7b97 +0x0768:  mov    %eax,0x4(%esp)
086b7b9b +0x076c:  mov    0x8(%ebp),%eax
086b7b9e +0x076f:  mov    %eax,(%esp)
086b7ba1 +0x0772:  call   086b8190 <+0xd61>
086b7ba6 +0x0777:  mov    0x8(%ebp),%edx
086b7ba9 +0x077a:  mov    -0x10(%ebp),%eax
086b7bac +0x077d:  cmp    %eax,%edx
086b7bae +0x077f:  setne  %al
086b7bb1 +0x0782:  test   %al,%al
086b7bb3 +0x0784:  jne    086b7b6c <+0x73d>
086b7bb5 +0x0786:  leave
086b7bb6 +0x0787:  ret
086b7bb7 +0x0788:  push   %ebp
086b7bb8 +0x0789:  mov    %esp,%ebp
086b7bba +0x078b:  mov    0x8(%ebp),%eax
086b7bbd +0x078e:  pop    %ebp
086b7bbe +0x078f:  ret
086b7bbf +0x0790:  push   %ebp
086b7bc0 +0x0791:  mov    %esp,%ebp
086b7bc2 +0x0793:  mov    0x8(%ebp),%eax
086b7bc5 +0x0796:  pop    %ebp
086b7bc6 +0x0797:  ret
086b7bc7 +0x0798:  nop
086b7bc8 +0x0799:  push   %ebp
086b7bc9 +0x079a:  mov    %esp,%ebp
086b7bcb +0x079c:  sub    $0x18,%esp
086b7bce +0x079f:  mov    0xc(%ebp),%eax
086b7bd1 +0x07a2:  mov    %eax,(%esp)
086b7bd4 +0x07a5:  call   086b7bb7 <+0x788>
086b7bd9 +0x07aa:  mov    0x8(%ebp),%edx
086b7bdc +0x07ad:  movzwl (%eax),%eax
086b7bdf +0x07b0:  mov    %ax,(%edx)
086b7be2 +0x07b3:  mov    0x10(%ebp),%eax
086b7be5 +0x07b6:  mov    %eax,(%esp)
086b7be8 +0x07b9:  call   086b7bbf <+0x790>
086b7bed +0x07be:  mov    0x8(%ebp),%edx
086b7bf0 +0x07c1:  add    $0x4,%edx
086b7bf3 +0x07c4:  mov    %eax,0x4(%esp)
086b7bf7 +0x07c8:  mov    %edx,(%esp)
086b7bfa +0x07cb:  call   086b81b2 <+0xd83>
086b7bff +0x07d0:  leave
086b7c00 +0x07d1:  ret
086b7c01 +0x07d2:  push   %ebp
086b7c02 +0x07d3:  mov    %esp,%ebp
086b7c04 +0x07d5:  mov    0x8(%ebp),%eax
086b7c07 +0x07d8:  pop    %ebp
086b7c08 +0x07d9:  ret
086b7c09 +0x07da:  push   %ebp
086b7c0a +0x07db:  mov    %esp,%ebp
086b7c0c +0x07dd:  mov    0x8(%ebp),%eax
086b7c0f +0x07e0:  pop    %ebp
086b7c10 +0x07e1:  ret
086b7c11 +0x07e2:  nop
086b7c12 +0x07e3:  push   %ebp
086b7c13 +0x07e4:  mov    %esp,%ebp
086b7c15 +0x07e6:  sub    $0x18,%esp
086b7c18 +0x07e9:  mov    0xc(%ebp),%eax
086b7c1b +0x07ec:  mov    %eax,(%esp)
086b7c1e +0x07ef:  call   086b827c <+0xe4d>
086b7c23 +0x07f4:  mov    0x8(%ebp),%edx
086b7c26 +0x07f7:  mov    %eax,0x4(%esp)
086b7c2a +0x07fb:  mov    %edx,(%esp)
086b7c2d +0x07fe:  call   086b8284 <+0xe55>
086b7c32 +0x0803:  leave
086b7c33 +0x0804:  ret
086b7c34 +0x0805:  push   %ebp
086b7c35 +0x0806:  mov    %esp,%ebp
086b7c37 +0x0808:  push   %esi
086b7c38 +0x0809:  push   %ebx
086b7c39 +0x080a:  sub    $0x50,%esp
086b7c3c +0x080d:  mov    0x8(%ebp),%ebx
086b7c3f +0x0810:  mov    0xc(%ebp),%eax
086b7c42 +0x0813:  mov    %eax,(%esp)
086b7c45 +0x0816:  call   086b798a <+0x55b>
086b7c4a +0x081b:  mov    %eax,-0x14(%ebp)
086b7c4d +0x081e:  mov    0xc(%ebp),%eax
086b7c50 +0x0821:  mov    %eax,(%esp)
086b7c53 +0x0824:  call   086b7f64 <+0xb35>
086b7c58 +0x0829:  mov    %eax,-0x10(%ebp)
086b7c5b +0x082c:  movb   $0x1,-0x9(%ebp)
086b7c5f +0x0830:  jmp    086b7cbd <+0x88e>
086b7c61 +0x0832:  mov    -0x14(%ebp),%eax
086b7c64 +0x0835:  mov    %eax,-0x10(%ebp)
086b7c67 +0x0838:  mov    -0x14(%ebp),%eax
086b7c6a +0x083b:  mov    %eax,(%esp)
086b7c6d +0x083e:  call   086b82f0 <+0xec1>
086b7c72 +0x0843:  mov    %eax,%esi
086b7c74 +0x0845:  mov    0x10(%ebp),%eax
086b7c77 +0x0848:  mov    %eax,0x4(%esp)
086b7c7b +0x084c:  lea    -0x2d(%ebp),%eax
086b7c7e +0x084f:  mov    %eax,(%esp)
086b7c81 +0x0852:  call   086b82e8 <+0xeb9>
086b7c86 +0x0857:  mov    0xc(%ebp),%edx
086b7c89 +0x085a:  mov    %esi,0x8(%esp)
086b7c8d +0x085e:  mov    %eax,0x4(%esp)
086b7c91 +0x0862:  mov    %edx,(%esp)
086b7c94 +0x0865:  call   086b800e <+0xbdf>
086b7c99 +0x086a:  mov    %al,-0x9(%ebp)
086b7c9c +0x086d:  cmpb   $0x0,-0x9(%ebp)
086b7ca0 +0x0871:  je     086b7caf <+0x880>
086b7ca2 +0x0873:  mov    -0x14(%ebp),%eax
086b7ca5 +0x0876:  mov    %eax,(%esp)
086b7ca8 +0x0879:  call   086b7f24 <+0xaf5>
086b7cad +0x087e:  jmp    086b7cba <+0x88b>
086b7caf +0x0880:  mov    -0x14(%ebp),%eax
086b7cb2 +0x0883:  mov    %eax,(%esp)
086b7cb5 +0x0886:  call   086b7f19 <+0xaea>
086b7cba +0x088b:  mov    %eax,-0x14(%ebp)
086b7cbd +0x088e:  cmpl   $0x0,-0x14(%ebp)
086b7cc1 +0x0892:  setne  %al
086b7cc4 +0x0895:  test   %al,%al
086b7cc6 +0x0897:  jne    086b7c61 <+0x832>
086b7cc8 +0x0899:  mov    -0x10(%ebp),%eax
086b7ccb +0x089c:  mov    %eax,0x4(%esp)
086b7ccf +0x08a0:  lea    -0x34(%ebp),%eax
086b7cd2 +0x08a3:  mov    %eax,(%esp)
086b7cd5 +0x08a6:  call   086b8028 <+0xbf9>
086b7cda +0x08ab:  cmpb   $0x0,-0x9(%ebp)
086b7cde +0x08af:  je     086b7d5f <+0x930>
086b7ce0 +0x08b1:  lea    -0x2c(%ebp),%eax
086b7ce3 +0x08b4:  mov    0xc(%ebp),%edx
086b7ce6 +0x08b7:  mov    %edx,0x4(%esp)
086b7cea +0x08bb:  mov    %eax,(%esp)
086b7ced +0x08be:  call   086b8312 <+0xee3>
086b7cf2 +0x08c3:  sub    $0x4,%esp
086b7cf5 +0x08c6:  lea    -0x2c(%ebp),%eax
086b7cf8 +0x08c9:  mov    %eax,0x4(%esp)
086b7cfc +0x08cd:  lea    -0x34(%ebp),%eax
086b7cff +0x08d0:  mov    %eax,(%esp)
086b7d02 +0x08d3:  call   086b77c8 <+0x399>
086b7d07 +0x08d8:  test   %al,%al
086b7d09 +0x08da:  je     086b7d54 <+0x925>
086b7d0b +0x08dc:  movb   $0x1,-0x25(%ebp)
086b7d0f +0x08e0:  mov    -0x10(%ebp),%ecx
086b7d12 +0x08e3:  mov    -0x14(%ebp),%edx
086b7d15 +0x08e6:  lea    -0x24(%ebp),%eax
086b7d18 +0x08e9:  mov    0x10(%ebp),%esi
086b7d1b +0x08ec:  mov    %esi,0x10(%esp)
086b7d1f +0x08f0:  mov    %ecx,0xc(%esp)
086b7d23 +0x08f4:  mov    %edx,0x8(%esp)
086b7d27 +0x08f8:  mov    0xc(%ebp),%edx
086b7d2a +0x08fb:  mov    %edx,0x4(%esp)
086b7d2e +0x08ff:  mov    %eax,(%esp)
086b7d31 +0x0902:  call   086b8338 <+0xf09>
086b7d36 +0x0907:  sub    $0x4,%esp
086b7d39 +0x090a:  lea    -0x25(%ebp),%eax
086b7d3c +0x090d:  mov    %eax,0x8(%esp)
086b7d40 +0x0911:  lea    -0x24(%ebp),%eax
086b7d43 +0x0914:  mov    %eax,0x4(%esp)
086b7d47 +0x0918:  mov    %ebx,(%esp)
086b7d4a +0x091b:  call   086b8400 <+0xfd1>
086b7d4f +0x0920:  jmp    086b7df5 <+0x9c6>
086b7d54 +0x0925:  lea    -0x34(%ebp),%eax
086b7d57 +0x0928:  mov    %eax,(%esp)
086b7d5a +0x092b:  call   086b842e <+0xfff>
086b7d5f +0x0930:  mov    0x10(%ebp),%eax
086b7d62 +0x0933:  mov    %eax,0x4(%esp)
086b7d66 +0x0937:  lea    -0x1e(%ebp),%eax
086b7d69 +0x093a:  mov    %eax,(%esp)
086b7d6c +0x093d:  call   086b82e8 <+0xeb9>
086b7d71 +0x0942:  mov    %eax,%esi
086b7d73 +0x0944:  mov    -0x34(%ebp),%eax
086b7d76 +0x0947:  mov    %eax,(%esp)
086b7d79 +0x094a:  call   086b7fec <+0xbbd>
086b7d7e +0x094f:  mov    0xc(%ebp),%edx
086b7d81 +0x0952:  mov    %esi,0x8(%esp)
086b7d85 +0x0956:  mov    %eax,0x4(%esp)
086b7d89 +0x095a:  mov    %edx,(%esp)
086b7d8c +0x095d:  call   086b800e <+0xbdf>
086b7d91 +0x0962:  test   %al,%al
086b7d93 +0x0964:  je     086b7ddb <+0x9ac>
086b7d95 +0x0966:  movb   $0x1,-0x1d(%ebp)
086b7d99 +0x096a:  mov    -0x10(%ebp),%ecx
086b7d9c +0x096d:  mov    -0x14(%ebp),%edx
086b7d9f +0x0970:  lea    -0x1c(%ebp),%eax
086b7da2 +0x0973:  mov    0x10(%ebp),%esi
086b7da5 +0x0976:  mov    %esi,0x10(%esp)
086b7da9 +0x097a:  mov    %ecx,0xc(%esp)
086b7dad +0x097e:  mov    %edx,0x8(%esp)
086b7db1 +0x0982:  mov    0xc(%ebp),%edx
086b7db4 +0x0985:  mov    %edx,0x4(%esp)
086b7db8 +0x0989:  mov    %eax,(%esp)
086b7dbb +0x098c:  call   086b8338 <+0xf09>
086b7dc0 +0x0991:  sub    $0x4,%esp
086b7dc3 +0x0994:  lea    -0x1d(%ebp),%eax
086b7dc6 +0x0997:  mov    %eax,0x8(%esp)
086b7dca +0x099b:  lea    -0x1c(%ebp),%eax
086b7dcd +0x099e:  mov    %eax,0x4(%esp)
086b7dd1 +0x09a2:  mov    %ebx,(%esp)
086b7dd4 +0x09a5:  call   086b8400 <+0xfd1>
086b7dd9 +0x09aa:  jmp    086b7df5 <+0x9c6>
086b7ddb +0x09ac:  movb   $0x0,-0x15(%ebp)
086b7ddf +0x09b0:  lea    -0x15(%ebp),%eax
086b7de2 +0x09b3:  mov    %eax,0x8(%esp)
086b7de6 +0x09b7:  lea    -0x34(%ebp),%eax
086b7de9 +0x09ba:  mov    %eax,0x4(%esp)
086b7ded +0x09be:  mov    %ebx,(%esp)
086b7df0 +0x09c1:  call   086b844c <+0x101d>
086b7df5 +0x09c6:  mov    %ebx,%eax
086b7df7 +0x09c8:  lea    -0x8(%ebp),%esp
086b7dfa +0x09cb:  add    $0x0,%esp
086b7dfd +0x09ce:  pop    %ebx
086b7dfe +0x09cf:  pop    %esi
086b7dff +0x09d0:  pop    %ebp
086b7e00 +0x09d1:  ret    $0x4
086b7e03 +0x09d4:  nop
086b7e04 +0x09d5:  push   %ebp
086b7e05 +0x09d6:  mov    %esp,%ebp
086b7e07 +0x09d8:  mov    0x8(%ebp),%eax
086b7e0a +0x09db:  mov    0xc(%ebp),%edx
086b7e0d +0x09de:  mov    %edx,(%eax)
086b7e0f +0x09e0:  pop    %ebp
086b7e10 +0x09e1:  ret
086b7e11 +0x09e2:  push   %ebp
086b7e12 +0x09e3:  mov    %esp,%ebp
086b7e14 +0x09e5:  mov    0x8(%ebp),%eax
086b7e17 +0x09e8:  pop    %ebp
086b7e18 +0x09e9:  ret    $0x4
086b7e1b +0x09ec:  push   %ebp
086b7e1c +0x09ed:  mov    %esp,%ebp
086b7e1e +0x09ef:  push   %ebx
086b7e1f +0x09f0:  sub    $0x14,%esp
086b7e22 +0x09f3:  mov    0x8(%ebp),%ebx
086b7e25 +0x09f6:  jmp    086b7e32 <+0xa03>
086b7e27 +0x09f8:  lea    0xc(%ebp),%eax
086b7e2a +0x09fb:  mov    %eax,(%esp)
086b7e2d +0x09fe:  call   086b8488 <+0x1059>
086b7e32 +0x0a03:  lea    0x10(%ebp),%eax
086b7e35 +0x0a06:  mov    %eax,0x4(%esp)
086b7e39 +0x0a0a:  lea    0xc(%ebp),%eax
086b7e3c +0x0a0d:  mov    %eax,(%esp)
086b7e3f +0x0a10:  call   086b7ade <+0x6af>
086b7e44 +0x0a15:  test   %al,%al
086b7e46 +0x0a17:  je     086b7e65 <+0xa36>
086b7e48 +0x0a19:  lea    0xc(%ebp),%eax
086b7e4b +0x0a1c:  mov    %eax,(%esp)
086b7e4e +0x0a1f:  call   086b847a <+0x104b>
086b7e53 +0x0a24:  mov    (%eax),%edx
086b7e55 +0x0a26:  mov    0x14(%ebp),%eax
086b7e58 +0x0a29:  mov    (%eax),%eax
086b7e5a +0x0a2b:  cmp    %eax,%edx
086b7e5c +0x0a2d:  je     086b7e65 <+0xa36>
086b7e5e +0x0a2f:  mov    $0x1,%eax
086b7e63 +0x0a34:  jmp    086b7e6a <+0xa3b>
086b7e65 +0x0a36:  mov    $0x0,%eax
086b7e6a +0x0a3b:  test   %al,%al
086b7e6c +0x0a3d:  jne    086b7e27 <+0x9f8>
086b7e6e +0x0a3f:  mov    0xc(%ebp),%eax
086b7e71 +0x0a42:  mov    %eax,(%ebx)
086b7e73 +0x0a44:  mov    %ebx,%eax
086b7e75 +0x0a46:  add    $0x14,%esp
086b7e78 +0x0a49:  pop    %ebx
086b7e79 +0x0a4a:  pop    %ebp
086b7e7a +0x0a4b:  ret    $0x4
086b7e7d +0x0a4e:  nop
086b7e7e +0x0a4f:  push   %ebp
086b7e7f +0x0a50:  mov    %esp,%ebp
086b7e81 +0x0a52:  sub    $0x28,%esp
086b7e84 +0x0a55:  mov    0xc(%ebp),%eax
086b7e87 +0x0a58:  mov    %eax,(%esp)
086b7e8a +0x0a5b:  call   086dad40 <_ZNSt15_List_node_base6unhookEv>  ; std::_List_node_base::unhook()
086b7e8f +0x0a60:  mov    0xc(%ebp),%eax
086b7e92 +0x0a63:  mov    %eax,-0xc(%ebp)
086b7e95 +0x0a66:  mov    0x8(%ebp),%eax
086b7e98 +0x0a69:  mov    %eax,(%esp)
086b7e9b +0x0a6c:  call   086b816e <+0xd3f>
086b7ea0 +0x0a71:  mov    -0xc(%ebp),%edx
086b7ea3 +0x0a74:  mov    %edx,0x4(%esp)
086b7ea7 +0x0a78:  mov    %eax,(%esp)
086b7eaa +0x0a7b:  call   086b817c <+0xd4d>
086b7eaf +0x0a80:  mov    0x8(%ebp),%eax
086b7eb2 +0x0a83:  mov    -0xc(%ebp),%edx
086b7eb5 +0x0a86:  mov    %edx,0x4(%esp)
086b7eb9 +0x0a8a:  mov    %eax,(%esp)
086b7ebc +0x0a8d:  call   086b8190 <+0xd61>
086b7ec1 +0x0a92:  leave
086b7ec2 +0x0a93:  ret
086b7ec3 +0x0a94:  nop
086b7ec4 +0x0a95:  push   %ebp
086b7ec5 +0x0a96:  mov    %esp,%ebp
086b7ec7 +0x0a98:  sub    $0x18,%esp
086b7eca +0x0a9b:  mov    0x8(%ebp),%eax
086b7ecd +0x0a9e:  mov    %eax,(%esp)
086b7ed0 +0x0aa1:  call   086b849c <+0x106d>
086b7ed5 +0x0aa6:  mov    0x8(%ebp),%eax
086b7ed8 +0x0aa9:  movl   $0x0,0x4(%eax)
086b7edf +0x0ab0:  mov    0x8(%ebp),%eax
086b7ee2 +0x0ab3:  movl   $0x0,0x8(%eax)
086b7ee9 +0x0aba:  mov    0x8(%ebp),%eax
086b7eec +0x0abd:  movl   $0x0,0xc(%eax)
086b7ef3 +0x0ac4:  mov    0x8(%ebp),%eax
086b7ef6 +0x0ac7:  movl   $0x0,0x10(%eax)
086b7efd +0x0ace:  mov    0x8(%ebp),%eax
086b7f00 +0x0ad1:  movl   $0x0,0x14(%eax)
086b7f07 +0x0ad8:  mov    0x8(%ebp),%eax
086b7f0a +0x0adb:  mov    %eax,(%esp)
086b7f0d +0x0ade:  call   086b84b0 <+0x1081>
086b7f12 +0x0ae3:  leave
086b7f13 +0x0ae4:  ret
086b7f14 +0x0ae5:  push   %ebp
086b7f15 +0x0ae6:  mov    %esp,%ebp
086b7f17 +0x0ae8:  pop    %ebp
086b7f18 +0x0ae9:  ret
086b7f19 +0x0aea:  push   %ebp
086b7f1a +0x0aeb:  mov    %esp,%ebp
086b7f1c +0x0aed:  mov    0x8(%ebp),%eax
086b7f1f +0x0af0:  mov    0xc(%eax),%eax
086b7f22 +0x0af3:  pop    %ebp
086b7f23 +0x0af4:  ret
086b7f24 +0x0af5:  push   %ebp
086b7f25 +0x0af6:  mov    %esp,%ebp
086b7f27 +0x0af8:  mov    0x8(%ebp),%eax
086b7f2a +0x0afb:  mov    0x8(%eax),%eax
086b7f2d +0x0afe:  pop    %ebp
086b7f2e +0x0aff:  ret
086b7f2f +0x0b00:  nop
086b7f30 +0x0b01:  push   %ebp
086b7f31 +0x0b02:  mov    %esp,%ebp
086b7f33 +0x0b04:  sub    $0x18,%esp
086b7f36 +0x0b07:  mov    0x8(%ebp),%eax
086b7f39 +0x0b0a:  mov    %eax,(%esp)
086b7f3c +0x0b0d:  call   086b84e2 <+0x10b3>
086b7f41 +0x0b12:  mov    0xc(%ebp),%edx
086b7f44 +0x0b15:  mov    %edx,0x4(%esp)
086b7f48 +0x0b19:  mov    %eax,(%esp)
086b7f4b +0x0b1c:  call   086b8500 <+0x10d1>
086b7f50 +0x0b21:  mov    0xc(%ebp),%eax
086b7f53 +0x0b24:  mov    %eax,0x4(%esp)
086b7f57 +0x0b28:  mov    0x8(%ebp),%eax
086b7f5a +0x0b2b:  mov    %eax,(%esp)
086b7f5d +0x0b2e:  call   086b8514 <+0x10e5>
086b7f62 +0x0b33:  leave
086b7f63 +0x0b34:  ret
086b7f64 +0x0b35:  push   %ebp
086b7f65 +0x0b36:  mov    %esp,%ebp
086b7f67 +0x0b38:  mov    0x8(%ebp),%eax
086b7f6a +0x0b3b:  add    $0x4,%eax
086b7f6d +0x0b3e:  pop    %ebp
086b7f6e +0x0b3f:  ret
086b7f6f +0x0b40:  nop
086b7f70 +0x0b41:  push   %ebp
086b7f71 +0x0b42:  mov    %esp,%ebp
086b7f73 +0x0b44:  push   %ebx
086b7f74 +0x0b45:  sub    $0x14,%esp
086b7f77 +0x0b48:  mov    0x8(%ebp),%ebx
086b7f7a +0x0b4b:  jmp    086b7fc8 <+0xb99>
086b7f7c +0x0b4d:  mov    0x10(%ebp),%eax
086b7f7f +0x0b50:  mov    %eax,(%esp)
086b7f82 +0x0b53:  call   086b82f0 <+0xec1>
086b7f87 +0x0b58:  mov    0xc(%ebp),%edx
086b7f8a +0x0b5b:  mov    0x18(%ebp),%ecx
086b7f8d +0x0b5e:  mov    %ecx,0x8(%esp)
086b7f91 +0x0b62:  mov    %eax,0x4(%esp)
086b7f95 +0x0b66:  mov    %edx,(%esp)
086b7f98 +0x0b69:  call   086b800e <+0xbdf>
086b7f9d +0x0b6e:  xor    $0x1,%eax
086b7fa0 +0x0b71:  test   %al,%al
086b7fa2 +0x0b73:  je     086b7fba <+0xb8b>
086b7fa4 +0x0b75:  mov    0x10(%ebp),%eax
086b7fa7 +0x0b78:  mov    %eax,0x14(%ebp)
086b7faa +0x0b7b:  mov    0x10(%ebp),%eax
086b7fad +0x0b7e:  mov    %eax,(%esp)
086b7fb0 +0x0b81:  call   086b7f24 <+0xaf5>
086b7fb5 +0x0b86:  mov    %eax,0x10(%ebp)
086b7fb8 +0x0b89:  jmp    086b7fc8 <+0xb99>
086b7fba +0x0b8b:  mov    0x10(%ebp),%eax
086b7fbd +0x0b8e:  mov    %eax,(%esp)
086b7fc0 +0x0b91:  call   086b7f19 <+0xaea>
086b7fc5 +0x0b96:  mov    %eax,0x10(%ebp)
086b7fc8 +0x0b99:  cmpl   $0x0,0x10(%ebp)
086b7fcc +0x0b9d:  setne  %al
086b7fcf +0x0ba0:  test   %al,%al
086b7fd1 +0x0ba2:  jne    086b7f7c <+0xb4d>
086b7fd3 +0x0ba4:  mov    0x14(%ebp),%eax
086b7fd6 +0x0ba7:  mov    %eax,0x4(%esp)
086b7fda +0x0bab:  mov    %ebx,(%esp)
086b7fdd +0x0bae:  call   086b8028 <+0xbf9>
086b7fe2 +0x0bb3:  mov    %ebx,%eax
086b7fe4 +0x0bb5:  add    $0x14,%esp
086b7fe7 +0x0bb8:  pop    %ebx
086b7fe8 +0x0bb9:  pop    %ebp
086b7fe9 +0x0bba:  ret    $0x4
086b7fec +0x0bbd:  push   %ebp
086b7fed +0x0bbe:  mov    %esp,%ebp
086b7fef +0x0bc0:  sub    $0x28,%esp
086b7ff2 +0x0bc3:  mov    0x8(%ebp),%eax
086b7ff5 +0x0bc6:  mov    %eax,(%esp)
086b7ff8 +0x0bc9:  call   086b8536 <+0x1107>
086b7ffd +0x0bce:  mov    %eax,0x4(%esp)
086b8001 +0x0bd2:  lea    -0x9(%ebp),%eax
086b8004 +0x0bd5:  mov    %eax,(%esp)
086b8007 +0x0bd8:  call   086b82e8 <+0xeb9>
086b800c +0x0bdd:  leave
086b800d +0x0bde:  ret
086b800e +0x0bdf:  push   %ebp
086b800f +0x0be0:  mov    %esp,%ebp
086b8011 +0x0be2:  sub    $0x18,%esp
086b8014 +0x0be5:  mov    0x10(%ebp),%eax
086b8017 +0x0be8:  mov    %eax,0x4(%esp)
086b801b +0x0bec:  mov    0xc(%ebp),%eax
086b801e +0x0bef:  mov    %eax,(%esp)
086b8021 +0x0bf2:  call   086b744c <+0x1d>
086b8026 +0x0bf7:  leave
086b8027 +0x0bf8:  ret
086b8028 +0x0bf9:  push   %ebp
086b8029 +0x0bfa:  mov    %esp,%ebp
086b802b +0x0bfc:  mov    0xc(%ebp),%edx
086b802e +0x0bff:  mov    0x8(%ebp),%eax
086b8031 +0x0c02:  mov    %edx,(%eax)
086b8033 +0x0c04:  pop    %ebp
086b8034 +0x0c05:  ret
086b8035 +0x0c06:  push   %ebp
086b8036 +0x0c07:  mov    %esp,%ebp
086b8038 +0x0c09:  push   %ebx
086b8039 +0x0c0a:  sub    $0x14,%esp
086b803c +0x0c0d:  mov    0x8(%ebp),%ebx
086b803f +0x0c10:  jmp    086b804c <+0xc1d>
086b8041 +0x0c12:  lea    0xc(%ebp),%eax
086b8044 +0x0c15:  mov    %eax,(%esp)
086b8047 +0x0c18:  call   086b8488 <+0x1059>
086b804c +0x0c1d:  lea    0x10(%ebp),%eax
086b804f +0x0c20:  mov    %eax,0x4(%esp)
086b8053 +0x0c24:  lea    0xc(%ebp),%eax
086b8056 +0x0c27:  mov    %eax,(%esp)
086b8059 +0x0c2a:  call   086b7ade <+0x6af>
086b805e +0x0c2f:  test   %al,%al
086b8060 +0x0c31:  je     086b808a <+0xc5b>
086b8062 +0x0c33:  lea    0xc(%ebp),%eax
086b8065 +0x0c36:  mov    %eax,(%esp)
086b8068 +0x0c39:  call   086b847a <+0x104b>
086b806d +0x0c3e:  mov    %eax,0x4(%esp)
086b8071 +0x0c42:  lea    0x14(%ebp),%eax
086b8074 +0x0c45:  mov    %eax,(%esp)
086b8077 +0x0c48:  call   086b8542 <+0x1113>
086b807c +0x0c4d:  xor    $0x1,%eax
086b807f +0x0c50:  test   %al,%al
086b8081 +0x0c52:  je     086b808a <+0xc5b>
086b8083 +0x0c54:  mov    $0x1,%eax
086b8088 +0x0c59:  jmp    086b808f <+0xc60>
086b808a +0x0c5b:  mov    $0x0,%eax
086b808f +0x0c60:  test   %al,%al
086b8091 +0x0c62:  jne    086b8041 <+0xc12>
086b8093 +0x0c64:  mov    0xc(%ebp),%eax
086b8096 +0x0c67:  mov    %eax,(%ebx)
086b8098 +0x0c69:  mov    %ebx,%eax
086b809a +0x0c6b:  add    $0x14,%esp
086b809d +0x0c6e:  pop    %ebx
086b809e +0x0c6f:  pop    %ebp
086b809f +0x0c70:  ret    $0x4
086b80a2 +0x0c73:  push   %ebp
086b80a3 +0x0c74:  mov    %esp,%ebp
086b80a5 +0x0c76:  mov    0x8(%ebp),%eax
086b80a8 +0x0c79:  pop    %ebp
086b80a9 +0x0c7a:  ret
086b80aa +0x0c7b:  push   %ebp
086b80ab +0x0c7c:  mov    %esp,%ebp
086b80ad +0x0c7e:  push   %esi
086b80ae +0x0c7f:  push   %ebx
086b80af +0x0c80:  sub    $0x20,%esp
086b80b2 +0x0c83:  mov    0x8(%ebp),%eax
086b80b5 +0x0c86:  mov    %eax,(%esp)
086b80b8 +0x0c89:  call   086b8566 <+0x1137>
086b80bd +0x0c8e:  mov    %eax,-0xc(%ebp)
086b80c0 +0x0c91:  mov    0xc(%ebp),%eax
086b80c3 +0x0c94:  mov    %eax,(%esp)
086b80c6 +0x0c97:  call   086b80a2 <+0xc73>
086b80cb +0x0c9c:  mov    %eax,%ebx
086b80cd +0x0c9e:  mov    0x8(%ebp),%eax
086b80d0 +0x0ca1:  mov    %eax,(%esp)
086b80d3 +0x0ca4:  call   086b816e <+0xd3f>
086b80d8 +0x0ca9:  mov    %ebx,0x8(%esp)
086b80dc +0x0cad:  mov    -0xc(%ebp),%edx
086b80df +0x0cb0:  mov    %edx,0x4(%esp)
086b80e3 +0x0cb4:  mov    %eax,(%esp)
086b80e6 +0x0cb7:  call   086b858a <+0x115b>
086b80eb +0x0cbc:  jmp    086b8121 <+0xcf2>
086b80ed +0x0cbe:  mov    %eax,(%esp)
086b80f0 +0x0cc1:  call   08725ce0 <__cxa_begin_catch>
086b80f5 +0x0cc6:  mov    0x8(%ebp),%eax
086b80f8 +0x0cc9:  mov    -0xc(%ebp),%edx
086b80fb +0x0ccc:  mov    %edx,0x4(%esp)
086b80ff +0x0cd0:  mov    %eax,(%esp)
086b8102 +0x0cd3:  call   086b8190 <+0xd61>
086b8107 +0x0cd8:  call   08724be0 <__cxa_rethrow>
086b810c +0x0cdd:  mov    %edx,%ebx
086b810e +0x0cdf:  mov    %eax,%esi
086b8110 +0x0ce1:  call   08725c30 <__cxa_end_catch>
086b8115 +0x0ce6:  mov    %esi,%eax
086b8117 +0x0ce8:  mov    %ebx,%edx
086b8119 +0x0cea:  mov    %eax,(%esp)
086b811c +0x0ced:  call   08ae3750 <_Unwind_Resume>
086b8121 +0x0cf2:  mov    -0xc(%ebp),%eax
086b8124 +0x0cf5:  add    $0x20,%esp
086b8127 +0x0cf8:  pop    %ebx
086b8128 +0x0cf9:  pop    %esi
086b8129 +0x0cfa:  pop    %ebp
086b812a +0x0cfb:  ret
086b812b +0x0cfc:  nop
086b812c +0x0cfd:  push   %ebp
086b812d +0x0cfe:  mov    %esp,%ebp
086b812f +0x0d00:  sub    $0x18,%esp
086b8132 +0x0d03:  mov    0x8(%ebp),%eax
086b8135 +0x0d06:  mov    %eax,(%esp)
086b8138 +0x0d09:  call   086b85ca <+0x119b>
086b813d +0x0d0e:  mov    0x8(%ebp),%eax
086b8140 +0x0d11:  movl   $0x0,(%eax)
086b8146 +0x0d17:  mov    0x8(%ebp),%eax
086b8149 +0x0d1a:  movl   $0x0,0x4(%eax)
086b8150 +0x0d21:  leave
086b8151 +0x0d22:  ret
086b8152 +0x0d23:  push   %ebp
086b8153 +0x0d24:  mov    %esp,%ebp
086b8155 +0x0d26:  mov    0x8(%ebp),%edx
086b8158 +0x0d29:  mov    0x8(%ebp),%eax
086b815b +0x0d2c:  mov    %edx,(%eax)
086b815d +0x0d2e:  mov    0x8(%ebp),%edx
086b8160 +0x0d31:  mov    0x8(%ebp),%eax
086b8163 +0x0d34:  mov    %edx,0x4(%eax)
086b8166 +0x0d37:  pop    %ebp
086b8167 +0x0d38:  ret
086b8168 +0x0d39:  push   %ebp
086b8169 +0x0d3a:  mov    %esp,%ebp
086b816b +0x0d3c:  pop    %ebp
086b816c +0x0d3d:  ret
086b816d +0x0d3e:  nop
086b816e +0x0d3f:  push   %ebp
086b816f +0x0d40:  mov    %esp,%ebp
086b8171 +0x0d42:  mov    0x8(%ebp),%eax
086b8174 +0x0d45:  pop    %ebp
086b8175 +0x0d46:  ret
086b8176 +0x0d47:  push   %ebp
086b8177 +0x0d48:  mov    %esp,%ebp
086b8179 +0x0d4a:  pop    %ebp
086b817a +0x0d4b:  ret
086b817b +0x0d4c:  nop
086b817c +0x0d4d:  push   %ebp
086b817d +0x0d4e:  mov    %esp,%ebp
086b817f +0x0d50:  sub    $0x18,%esp
086b8182 +0x0d53:  mov    0xc(%ebp),%eax
086b8185 +0x0d56:  mov    %eax,(%esp)
086b8188 +0x0d59:  call   086b8176 <+0xd47>
086b818d +0x0d5e:  leave
086b818e +0x0d5f:  ret
086b818f +0x0d60:  nop
086b8190 +0x0d61:  push   %ebp
086b8191 +0x0d62:  mov    %esp,%ebp
086b8193 +0x0d64:  sub    $0x18,%esp
086b8196 +0x0d67:  mov    0x8(%ebp),%eax
086b8199 +0x0d6a:  movl   $0x1,0x8(%esp)
086b81a1 +0x0d72:  mov    0xc(%ebp),%edx
086b81a4 +0x0d75:  mov    %edx,0x4(%esp)
086b81a8 +0x0d79:  mov    %eax,(%esp)
086b81ab +0x0d7c:  call   086b85de <+0x11af>
086b81b0 +0x0d81:  leave
086b81b1 +0x0d82:  ret
086b81b2 +0x0d83:  push   %ebp
086b81b3 +0x0d84:  mov    %esp,%ebp
086b81b5 +0x0d86:  push   %esi
086b81b6 +0x0d87:  push   %ebx
086b81b7 +0x0d88:  sub    $0x20,%esp
086b81ba +0x0d8b:  mov    0xc(%ebp),%eax
086b81bd +0x0d8e:  mov    %eax,(%esp)
086b81c0 +0x0d91:  call   086b85f2 <+0x11c3>
086b81c5 +0x0d96:  mov    %eax,0x4(%esp)
086b81c9 +0x0d9a:  lea    -0x11(%ebp),%eax
086b81cc +0x0d9d:  mov    %eax,(%esp)
086b81cf +0x0da0:  call   086b85fa <+0x11cb>
086b81d4 +0x0da5:  mov    0x8(%ebp),%eax
086b81d7 +0x0da8:  lea    -0x11(%ebp),%edx
086b81da +0x0dab:  mov    %edx,0x4(%esp)
086b81de +0x0daf:  mov    %eax,(%esp)
086b81e1 +0x0db2:  call   086b8622 <+0x11f3>
086b81e6 +0x0db7:  jmp    086b8203 <+0xdd4>
086b81e8 +0x0db9:  mov    %edx,%ebx
086b81ea +0x0dbb:  mov    %eax,%esi
086b81ec +0x0dbd:  lea    -0x11(%ebp),%eax
086b81ef +0x0dc0:  mov    %eax,(%esp)
086b81f2 +0x0dc3:  call   086b860e <+0x11df>
086b81f7 +0x0dc8:  mov    %esi,%eax
086b81f9 +0x0dca:  mov    %ebx,%edx
086b81fb +0x0dcc:  mov    %eax,(%esp)
086b81fe +0x0dcf:  call   08ae3750 <_Unwind_Resume>
086b8203 +0x0dd4:  lea    -0x11(%ebp),%eax
086b8206 +0x0dd7:  mov    %eax,(%esp)
086b8209 +0x0dda:  call   086b860e <+0x11df>
086b820e +0x0ddf:  lea    -0x10(%ebp),%eax
086b8211 +0x0de2:  mov    0xc(%ebp),%edx
086b8214 +0x0de5:  mov    %edx,0x4(%esp)
086b8218 +0x0de9:  mov    %eax,(%esp)
086b821b +0x0dec:  call   086b868a <+0x125b>
086b8220 +0x0df1:  sub    $0x4,%esp
086b8223 +0x0df4:  lea    -0xc(%ebp),%eax
086b8226 +0x0df7:  mov    0xc(%ebp),%edx
086b8229 +0x0dfa:  mov    %edx,0x4(%esp)
086b822d +0x0dfe:  mov    %eax,(%esp)
086b8230 +0x0e01:  call   086b8664 <+0x1235>
086b8235 +0x0e06:  sub    $0x4,%esp
086b8238 +0x0e09:  mov    %bl,0xc(%esp)
086b823c +0x0e0d:  mov    -0x10(%ebp),%eax
086b823f +0x0e10:  mov    %eax,0x8(%esp)
086b8243 +0x0e14:  mov    -0xc(%ebp),%eax
086b8246 +0x0e17:  mov    %eax,0x4(%esp)
086b824a +0x0e1b:  mov    0x8(%ebp),%eax
086b824d +0x0e1e:  mov    %eax,(%esp)
086b8250 +0x0e21:  call   086b86ae <+0x127f>
086b8255 +0x0e26:  jmp    086b8272 <+0xe43>
086b8257 +0x0e28:  mov    %edx,%ebx
086b8259 +0x0e2a:  mov    %eax,%esi
086b825b +0x0e2c:  mov    0x8(%ebp),%eax
086b825e +0x0e2f:  mov    %eax,(%esp)
086b8261 +0x0e32:  call   086b76d4 <+0x2a5>
086b8266 +0x0e37:  mov    %esi,%eax
086b8268 +0x0e39:  mov    %ebx,%edx
086b826a +0x0e3b:  mov    %eax,(%esp)
086b826d +0x0e3e:  call   08ae3750 <_Unwind_Resume>
086b8272 +0x0e43:  lea    -0x8(%ebp),%esp
086b8275 +0x0e46:  add    $0x0,%esp
086b8278 +0x0e49:  pop    %ebx
086b8279 +0x0e4a:  pop    %esi
086b827a +0x0e4b:  pop    %ebp
086b827b +0x0e4c:  ret
086b827c +0x0e4d:  push   %ebp
086b827d +0x0e4e:  mov    %esp,%ebp
086b827f +0x0e50:  mov    0x8(%ebp),%eax
086b8282 +0x0e53:  pop    %ebp
086b8283 +0x0e54:  ret
086b8284 +0x0e55:  push   %ebp
086b8285 +0x0e56:  mov    %esp,%ebp
086b8287 +0x0e58:  push   %esi
086b8288 +0x0e59:  push   %ebx
086b8289 +0x0e5a:  sub    $0x10,%esp
086b828c +0x0e5d:  mov    0xc(%ebp),%eax
086b828f +0x0e60:  mov    %eax,(%esp)
086b8292 +0x0e63:  call   086b816e <+0xd3f>
086b8297 +0x0e68:  mov    0x8(%ebp),%edx
086b829a +0x0e6b:  mov    %eax,0x4(%esp)
086b829e +0x0e6f:  mov    %edx,(%esp)
086b82a1 +0x0e72:  call   086b86f4 <+0x12c5>
086b82a6 +0x0e77:  mov    0x8(%ebp),%eax
086b82a9 +0x0e7a:  mov    %eax,(%esp)
086b82ac +0x0e7d:  call   086b8152 <+0xd23>
086b82b1 +0x0e82:  mov    0xc(%ebp),%edx
086b82b4 +0x0e85:  mov    0x8(%ebp),%eax
086b82b7 +0x0e88:  mov    %edx,0x4(%esp)
086b82bb +0x0e8c:  mov    %eax,(%esp)
086b82be +0x0e8f:  call   086dac30 <_ZNSt15_List_node_base4swapERS_S0_>  ; std::_List_node_base::swap(std::_List_node_base&, std::_List_node_base&)
086b82c3 +0x0e94:  jmp    086b82e0 <+0xeb1>
086b82c5 +0x0e96:  mov    %edx,%ebx
086b82c7 +0x0e98:  mov    %eax,%esi
086b82c9 +0x0e9a:  mov    0x8(%ebp),%eax
086b82cc +0x0e9d:  mov    %eax,(%esp)
086b82cf +0x0ea0:  call   086b76c0 <+0x291>
086b82d4 +0x0ea5:  mov    %esi,%eax
086b82d6 +0x0ea7:  mov    %ebx,%edx
086b82d8 +0x0ea9:  mov    %eax,(%esp)
086b82db +0x0eac:  call   08ae3750 <_Unwind_Resume>
086b82e0 +0x0eb1:  add    $0x10,%esp
086b82e3 +0x0eb4:  pop    %ebx
086b82e4 +0x0eb5:  pop    %esi
086b82e5 +0x0eb6:  pop    %ebp
086b82e6 +0x0eb7:  ret
086b82e7 +0x0eb8:  nop
086b82e8 +0x0eb9:  push   %ebp
086b82e9 +0x0eba:  mov    %esp,%ebp
086b82eb +0x0ebc:  mov    0xc(%ebp),%eax
086b82ee +0x0ebf:  pop    %ebp
086b82ef +0x0ec0:  ret
086b82f0 +0x0ec1:  push   %ebp
086b82f1 +0x0ec2:  mov    %esp,%ebp
086b82f3 +0x0ec4:  sub    $0x28,%esp
086b82f6 +0x0ec7:  mov    0x8(%ebp),%eax
086b82f9 +0x0eca:  mov    %eax,(%esp)
086b82fc +0x0ecd:  call   086b8721 <+0x12f2>
086b8301 +0x0ed2:  mov    %eax,0x4(%esp)
086b8305 +0x0ed6:  lea    -0x9(%ebp),%eax
086b8308 +0x0ed9:  mov    %eax,(%esp)
086b830b +0x0edc:  call   086b82e8 <+0xeb9>
086b8310 +0x0ee1:  leave
086b8311 +0x0ee2:  ret
086b8312 +0x0ee3:  push   %ebp
086b8313 +0x0ee4:  mov    %esp,%ebp
086b8315 +0x0ee6:  push   %ebx
086b8316 +0x0ee7:  sub    $0x14,%esp
086b8319 +0x0eea:  mov    0x8(%ebp),%ebx
086b831c +0x0eed:  mov    0xc(%ebp),%eax
086b831f +0x0ef0:  mov    0xc(%eax),%eax
086b8322 +0x0ef3:  mov    %eax,0x4(%esp)
086b8326 +0x0ef7:  mov    %ebx,(%esp)
086b8329 +0x0efa:  call   086b8028 <+0xbf9>
086b832e +0x0eff:  mov    %ebx,%eax
086b8330 +0x0f01:  add    $0x14,%esp
086b8333 +0x0f04:  pop    %ebx
086b8334 +0x0f05:  pop    %ebp
086b8335 +0x0f06:  ret    $0x4
086b8338 +0x0f09:  push   %ebp
086b8339 +0x0f0a:  mov    %esp,%ebp
086b833b +0x0f0c:  push   %esi
086b833c +0x0f0d:  push   %ebx
086b833d +0x0f0e:  sub    $0x20,%esp
086b8340 +0x0f11:  mov    0x8(%ebp),%esi
086b8343 +0x0f14:  cmpl   $0x0,0x10(%ebp)
086b8347 +0x0f18:  jne    086b838f <+0xf60>
086b8349 +0x0f1a:  mov    0xc(%ebp),%eax
086b834c +0x0f1d:  mov    %eax,(%esp)
086b834f +0x0f20:  call   086b7f64 <+0xb35>
086b8354 +0x0f25:  cmp    0x14(%ebp),%eax
086b8357 +0x0f28:  je     086b838f <+0xf60>
086b8359 +0x0f2a:  mov    0x14(%ebp),%eax
086b835c +0x0f2d:  mov    %eax,(%esp)
086b835f +0x0f30:  call   086b7fec <+0xbbd>
086b8364 +0x0f35:  mov    %eax,%ebx
086b8366 +0x0f37:  mov    0x18(%ebp),%eax
086b8369 +0x0f3a:  mov    %eax,0x4(%esp)
086b836d +0x0f3e:  lea    -0xe(%ebp),%eax
086b8370 +0x0f41:  mov    %eax,(%esp)
086b8373 +0x0f44:  call   086b82e8 <+0xeb9>
086b8378 +0x0f49:  mov    0xc(%ebp),%edx
086b837b +0x0f4c:  mov    %ebx,0x8(%esp)
086b837f +0x0f50:  mov    %eax,0x4(%esp)
086b8383 +0x0f54:  mov    %edx,(%esp)
086b8386 +0x0f57:  call   086b800e <+0xbdf>
086b838b +0x0f5c:  test   %al,%al
086b838d +0x0f5e:  je     086b8396 <+0xf67>
086b838f +0x0f60:  mov    $0x1,%eax
086b8394 +0x0f65:  jmp    086b839b <+0xf6c>
086b8396 +0x0f67:  mov    $0x0,%eax
086b839b +0x0f6c:  mov    %al,-0xd(%ebp)
086b839e +0x0f6f:  mov    0x18(%ebp),%eax
086b83a1 +0x0f72:  mov    %eax,0x4(%esp)
086b83a5 +0x0f76:  mov    0xc(%ebp),%eax
086b83a8 +0x0f79:  mov    %eax,(%esp)
086b83ab +0x0f7c:  call   086b872c <+0x12fd>
086b83b0 +0x0f81:  mov    %eax,-0xc(%ebp)
086b83b3 +0x0f84:  mov    0xc(%ebp),%eax
086b83b6 +0x0f87:  lea    0x4(%eax),%ecx
086b83b9 +0x0f8a:  mov    -0xc(%ebp),%edx
086b83bc +0x0f8d:  movzbl -0xd(%ebp),%eax
086b83c0 +0x0f91:  mov    %ecx,0xc(%esp)
086b83c4 +0x0f95:  mov    0x14(%ebp),%ecx
086b83c7 +0x0f98:  mov    %ecx,0x8(%esp)
086b83cb +0x0f9c:  mov    %edx,0x4(%esp)
086b83cf +0x0fa0:  mov    %eax,(%esp)
086b83d2 +0x0fa3:  call   086df9d0 <_ZSt29_Rb_tree_insert_and_rebalancebPSt18_Rb_tree_node_baseS0_RS_>  ; std::_Rb_tree_insert_and_rebalance(bool, std::_Rb_tree_node_base*, std::_Rb_tree_node_base*, std::_Rb_tree_node_base&)
086b83d7 +0x0fa8:  mov    0xc(%ebp),%eax
086b83da +0x0fab:  mov    0x14(%eax),%eax
086b83dd +0x0fae:  lea    0x1(%eax),%edx
086b83e0 +0x0fb1:  mov    0xc(%ebp),%eax
086b83e3 +0x0fb4:  mov    %edx,0x14(%eax)
086b83e6 +0x0fb7:  mov    -0xc(%ebp),%eax
086b83e9 +0x0fba:  mov    %eax,0x4(%esp)
086b83ed +0x0fbe:  mov    %esi,(%esp)
086b83f0 +0x0fc1:  call   086b8028 <+0xbf9>
086b83f5 +0x0fc6:  mov    %esi,%eax
086b83f7 +0x0fc8:  add    $0x20,%esp
086b83fa +0x0fcb:  pop    %ebx
086b83fb +0x0fcc:  pop    %esi
086b83fc +0x0fcd:  pop    %ebp
086b83fd +0x0fce:  ret    $0x4
086b8400 +0x0fd1:  push   %ebp
086b8401 +0x0fd2:  mov    %esp,%ebp
086b8403 +0x0fd4:  sub    $0x18,%esp
086b8406 +0x0fd7:  mov    0xc(%ebp),%eax
086b8409 +0x0fda:  mov    %eax,(%esp)
086b840c +0x0fdd:  call   086b87ad <+0x137e>
086b8411 +0x0fe2:  mov    0x8(%ebp),%edx
086b8414 +0x0fe5:  mov    (%eax),%eax
086b8416 +0x0fe7:  mov    %eax,(%edx)
086b8418 +0x0fe9:  mov    0x10(%ebp),%eax
086b841b +0x0fec:  mov    %eax,(%esp)
086b841e +0x0fef:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
086b8423 +0x0ff4:  movzbl (%eax),%edx
086b8426 +0x0ff7:  mov    0x8(%ebp),%eax
086b8429 +0x0ffa:  mov    %dl,0x4(%eax)
086b842c +0x0ffd:  leave
086b842d +0x0ffe:  ret
086b842e +0x0fff:  push   %ebp
086b842f +0x1000:  mov    %esp,%ebp
086b8431 +0x1002:  sub    $0x18,%esp
086b8434 +0x1005:  mov    0x8(%ebp),%eax
086b8437 +0x1008:  mov    (%eax),%eax
086b8439 +0x100a:  mov    %eax,(%esp)
086b843c +0x100d:  call   086df890 <_ZSt18_Rb_tree_decrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_decrement(std::_Rb_tree_node_base*)
086b8441 +0x1012:  mov    0x8(%ebp),%edx
086b8444 +0x1015:  mov    %eax,(%edx)
086b8446 +0x1017:  mov    0x8(%ebp),%eax
086b8449 +0x101a:  leave
086b844a +0x101b:  ret
086b844b +0x101c:  nop
086b844c +0x101d:  push   %ebp
086b844d +0x101e:  mov    %esp,%ebp
086b844f +0x1020:  sub    $0x18,%esp
086b8452 +0x1023:  mov    0xc(%ebp),%eax
086b8455 +0x1026:  mov    %eax,(%esp)
086b8458 +0x1029:  call   086b87b5 <+0x1386>
086b845d +0x102e:  mov    0x8(%ebp),%edx
086b8460 +0x1031:  mov    (%eax),%eax
086b8462 +0x1033:  mov    %eax,(%edx)
086b8464 +0x1035:  mov    0x10(%ebp),%eax
086b8467 +0x1038:  mov    %eax,(%esp)
086b846a +0x103b:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
086b846f +0x1040:  movzbl (%eax),%edx
086b8472 +0x1043:  mov    0x8(%ebp),%eax
086b8475 +0x1046:  mov    %dl,0x4(%eax)
086b8478 +0x1049:  leave
086b8479 +0x104a:  ret
086b847a +0x104b:  push   %ebp
086b847b +0x104c:  mov    %esp,%ebp
086b847d +0x104e:  mov    0x8(%ebp),%eax
086b8480 +0x1051:  mov    (%eax),%eax
086b8482 +0x1053:  add    $0x8,%eax
086b8485 +0x1056:  pop    %ebp
086b8486 +0x1057:  ret
086b8487 +0x1058:  nop
086b8488 +0x1059:  push   %ebp
086b8489 +0x105a:  mov    %esp,%ebp
086b848b +0x105c:  mov    0x8(%ebp),%eax
086b848e +0x105f:  mov    (%eax),%eax
086b8490 +0x1061:  mov    (%eax),%edx
086b8492 +0x1063:  mov    0x8(%ebp),%eax
086b8495 +0x1066:  mov    %edx,(%eax)
086b8497 +0x1068:  mov    0x8(%ebp),%eax
086b849a +0x106b:  pop    %ebp
086b849b +0x106c:  ret
086b849c +0x106d:  push   %ebp
086b849d +0x106e:  mov    %esp,%ebp
086b849f +0x1070:  sub    $0x18,%esp
086b84a2 +0x1073:  mov    0x8(%ebp),%eax
086b84a5 +0x1076:  mov    %eax,(%esp)
086b84a8 +0x1079:  call   086b87be <+0x138f>
086b84ad +0x107e:  leave
086b84ae +0x107f:  ret
086b84af +0x1080:  nop
086b84b0 +0x1081:  push   %ebp
086b84b1 +0x1082:  mov    %esp,%ebp
086b84b3 +0x1084:  mov    0x8(%ebp),%eax
086b84b6 +0x1087:  movl   $0x0,0x4(%eax)
086b84bd +0x108e:  mov    0x8(%ebp),%eax
086b84c0 +0x1091:  movl   $0x0,0x8(%eax)
086b84c7 +0x1098:  mov    0x8(%ebp),%eax
086b84ca +0x109b:  lea    0x4(%eax),%edx
086b84cd +0x109e:  mov    0x8(%ebp),%eax
086b84d0 +0x10a1:  mov    %edx,0xc(%eax)
086b84d3 +0x10a4:  mov    0x8(%ebp),%eax
086b84d6 +0x10a7:  lea    0x4(%eax),%edx
086b84d9 +0x10aa:  mov    0x8(%ebp),%eax
086b84dc +0x10ad:  mov    %edx,0x10(%eax)
086b84df +0x10b0:  pop    %ebp
086b84e0 +0x10b1:  ret
086b84e1 +0x10b2:  nop
086b84e2 +0x10b3:  push   %ebp
086b84e3 +0x10b4:  mov    %esp,%ebp
086b84e5 +0x10b6:  mov    0x8(%ebp),%eax
086b84e8 +0x10b9:  pop    %ebp
086b84e9 +0x10ba:  ret
086b84ea +0x10bb:  push   %ebp
086b84eb +0x10bc:  mov    %esp,%ebp
086b84ed +0x10be:  sub    $0x18,%esp
086b84f0 +0x10c1:  mov    0x8(%ebp),%eax
086b84f3 +0x10c4:  add    $0x10,%eax
086b84f6 +0x10c7:  mov    %eax,(%esp)
086b84f9 +0x10ca:  call   086b74d4 <+0xa5>
086b84fe +0x10cf:  leave
086b84ff +0x10d0:  ret
086b8500 +0x10d1:  push   %ebp
086b8501 +0x10d2:  mov    %esp,%ebp
086b8503 +0x10d4:  sub    $0x18,%esp
086b8506 +0x10d7:  mov    0xc(%ebp),%eax
086b8509 +0x10da:  mov    %eax,(%esp)
086b850c +0x10dd:  call   086b84ea <+0x10bb>
086b8511 +0x10e2:  leave
086b8512 +0x10e3:  ret
086b8513 +0x10e4:  nop
086b8514 +0x10e5:  push   %ebp
086b8515 +0x10e6:  mov    %esp,%ebp
086b8517 +0x10e8:  sub    $0x18,%esp
086b851a +0x10eb:  mov    0x8(%ebp),%eax
086b851d +0x10ee:  movl   $0x1,0x8(%esp)
086b8525 +0x10f6:  mov    0xc(%ebp),%edx
086b8528 +0x10f9:  mov    %edx,0x4(%esp)
086b852c +0x10fd:  mov    %eax,(%esp)
086b852f +0x1100:  call   086b87c4 <+0x1395>
086b8534 +0x1105:  leave
086b8535 +0x1106:  ret
086b8536 +0x1107:  push   %ebp
086b8537 +0x1108:  mov    %esp,%ebp
086b8539 +0x110a:  mov    0x8(%ebp),%eax
086b853c +0x110d:  add    $0x10,%eax
086b853f +0x1110:  pop    %ebp
086b8540 +0x1111:  ret
086b8541 +0x1112:  nop
086b8542 +0x1113:  push   %ebp
086b8543 +0x1114:  mov    %esp,%ebp
086b8545 +0x1116:  sub    $0x18,%esp
086b8548 +0x1119:  mov    0x8(%ebp),%eax
086b854b +0x111c:  mov    (%eax),%eax
086b854d +0x111e:  mov    (%eax),%eax
086b854f +0x1120:  mov    (%eax),%ecx
086b8551 +0x1122:  mov    0xc(%ebp),%eax
086b8554 +0x1125:  mov    (%eax),%edx
086b8556 +0x1127:  mov    0x8(%ebp),%eax
086b8559 +0x112a:  mov    (%eax),%eax
086b855b +0x112c:  mov    %edx,0x4(%esp)
086b855f +0x1130:  mov    %eax,(%esp)
086b8562 +0x1133:  call   *%ecx
086b8564 +0x1135:  leave
086b8565 +0x1136:  ret
086b8566 +0x1137:  push   %ebp
086b8567 +0x1138:  mov    %esp,%ebp
086b8569 +0x113a:  sub    $0x18,%esp
086b856c +0x113d:  mov    0x8(%ebp),%eax
086b856f +0x1140:  movl   $0x0,0x8(%esp)
086b8577 +0x1148:  movl   $0x1,0x4(%esp)
086b857f +0x1150:  mov    %eax,(%esp)
086b8582 +0x1153:  call   086b87d8 <+0x13a9>
086b8587 +0x1158:  leave
086b8588 +0x1159:  ret
086b8589 +0x115a:  nop
086b858a +0x115b:  push   %ebp
086b858b +0x115c:  mov    %esp,%ebp
086b858d +0x115e:  push   %ebx
086b858e +0x115f:  sub    $0x14,%esp
086b8591 +0x1162:  mov    0x10(%ebp),%eax
086b8594 +0x1165:  mov    %eax,(%esp)
086b8597 +0x1168:  call   086b80a2 <+0xc73>
086b859c +0x116d:  mov    %eax,%ebx
086b859e +0x116f:  mov    0xc(%ebp),%eax
086b85a1 +0x1172:  mov    %eax,0x4(%esp)
086b85a5 +0x1176:  movl   $0xc,(%esp)
086b85ac +0x117d:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
086b85b1 +0x1182:  mov    %eax,%edx
086b85b3 +0x1184:  test   %edx,%edx
086b85b5 +0x1186:  je     086b85c3 <+0x1194>
086b85b7 +0x1188:  mov    %ebx,0x4(%esp)
086b85bb +0x118c:  mov    %eax,(%esp)
086b85be +0x118f:  call   086b8816 <+0x13e7>
086b85c3 +0x1194:  add    $0x14,%esp
086b85c6 +0x1197:  pop    %ebx
086b85c7 +0x1198:  pop    %ebp
086b85c8 +0x1199:  ret
086b85c9 +0x119a:  nop
086b85ca +0x119b:  push   %ebp
086b85cb +0x119c:  mov    %esp,%ebp
086b85cd +0x119e:  sub    $0x18,%esp
086b85d0 +0x11a1:  mov    0x8(%ebp),%eax
086b85d3 +0x11a4:  mov    %eax,(%esp)
086b85d6 +0x11a7:  call   086b8844 <+0x1415>
086b85db +0x11ac:  leave
086b85dc +0x11ad:  ret
086b85dd +0x11ae:  nop
086b85de +0x11af:  push   %ebp
086b85df +0x11b0:  mov    %esp,%ebp
086b85e1 +0x11b2:  sub    $0x18,%esp
086b85e4 +0x11b5:  mov    0xc(%ebp),%eax
086b85e7 +0x11b8:  mov    %eax,(%esp)
086b85ea +0x11bb:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
086b85ef +0x11c0:  leave
086b85f0 +0x11c1:  ret
086b85f1 +0x11c2:  nop
086b85f2 +0x11c3:  push   %ebp
086b85f3 +0x11c4:  mov    %esp,%ebp
086b85f5 +0x11c6:  mov    0x8(%ebp),%eax
086b85f8 +0x11c9:  pop    %ebp
086b85f9 +0x11ca:  ret
086b85fa +0x11cb:  push   %ebp
086b85fb +0x11cc:  mov    %esp,%ebp
086b85fd +0x11ce:  sub    $0x18,%esp
086b8600 +0x11d1:  mov    0x8(%ebp),%eax
086b8603 +0x11d4:  mov    %eax,(%esp)
086b8606 +0x11d7:  call   086b884a <+0x141b>
086b860b +0x11dc:  leave
086b860c +0x11dd:  ret
086b860d +0x11de:  nop
086b860e +0x11df:  push   %ebp
086b860f +0x11e0:  mov    %esp,%ebp
086b8611 +0x11e2:  sub    $0x18,%esp
086b8614 +0x11e5:  mov    0x8(%ebp),%eax
086b8617 +0x11e8:  mov    %eax,(%esp)
086b861a +0x11eb:  call   086b8850 <+0x1421>
086b861f +0x11f0:  leave
086b8620 +0x11f1:  ret
086b8621 +0x11f2:  nop
086b8622 +0x11f3:  push   %ebp
086b8623 +0x11f4:  mov    %esp,%ebp
086b8625 +0x11f6:  sub    $0x28,%esp
086b8628 +0x11f9:  mov    0xc(%ebp),%eax
086b862b +0x11fc:  mov    %eax,0x4(%esp)
086b862f +0x1200:  lea    -0x9(%ebp),%eax
086b8632 +0x1203:  mov    %eax,(%esp)
086b8635 +0x1206:  call   086b8856 <+0x1427>
086b863a +0x120b:  mov    0x8(%ebp),%eax
086b863d +0x120e:  lea    -0x9(%ebp),%edx
086b8640 +0x1211:  mov    %edx,0x4(%esp)
086b8644 +0x1215:  mov    %eax,(%esp)
086b8647 +0x1218:  call   086b86f4 <+0x12c5>
086b864c +0x121d:  lea    -0x9(%ebp),%eax
086b864f +0x1220:  mov    %eax,(%esp)
086b8652 +0x1223:  call   086b7b48 <+0x719>
086b8657 +0x1228:  mov    0x8(%ebp),%eax
086b865a +0x122b:  mov    %eax,(%esp)
086b865d +0x122e:  call   086b8152 <+0xd23>
086b8662 +0x1233:  leave
086b8663 +0x1234:  ret
086b8664 +0x1235:  push   %ebp
086b8665 +0x1236:  mov    %esp,%ebp
086b8667 +0x1238:  push   %ebx
086b8668 +0x1239:  sub    $0x14,%esp
086b866b +0x123c:  mov    0x8(%ebp),%ebx
086b866e +0x123f:  mov    0xc(%ebp),%eax
086b8671 +0x1242:  mov    (%eax),%eax
086b8673 +0x1244:  mov    %eax,0x4(%esp)
086b8677 +0x1248:  mov    %ebx,(%esp)
086b867a +0x124b:  call   086b886a <+0x143b>
086b867f +0x1250:  mov    %ebx,%eax
086b8681 +0x1252:  add    $0x14,%esp
086b8684 +0x1255:  pop    %ebx
086b8685 +0x1256:  pop    %ebp
086b8686 +0x1257:  ret    $0x4
086b8689 +0x125a:  nop
086b868a +0x125b:  push   %ebp
086b868b +0x125c:  mov    %esp,%ebp
086b868d +0x125e:  push   %ebx
086b868e +0x125f:  sub    $0x14,%esp
086b8691 +0x1262:  mov    0x8(%ebp),%ebx
086b8694 +0x1265:  mov    0xc(%ebp),%eax
086b8697 +0x1268:  mov    %eax,0x4(%esp)
086b869b +0x126c:  mov    %ebx,(%esp)
086b869e +0x126f:  call   086b886a <+0x143b>
086b86a3 +0x1274:  mov    %ebx,%eax
086b86a5 +0x1276:  add    $0x14,%esp
086b86a8 +0x1279:  pop    %ebx
086b86a9 +0x127a:  pop    %ebp
086b86aa +0x127b:  ret    $0x4
086b86ad +0x127e:  nop
086b86ae +0x127f:  push   %ebp
086b86af +0x1280:  mov    %esp,%ebp
086b86b1 +0x1282:  sub    $0x18,%esp
086b86b4 +0x1285:  jmp    086b86db <+0x12ac>
086b86b6 +0x1287:  lea    0xc(%ebp),%eax
086b86b9 +0x128a:  mov    %eax,(%esp)
086b86bc +0x128d:  call   086b78fe <+0x4cf>
086b86c1 +0x1292:  mov    %eax,0x4(%esp)
086b86c5 +0x1296:  mov    0x8(%ebp),%eax
086b86c8 +0x1299:  mov    %eax,(%esp)
086b86cb +0x129c:  call   086b7676 <+0x247>
086b86d0 +0x12a1:  lea    0xc(%ebp),%eax
086b86d3 +0x12a4:  mov    %eax,(%esp)
086b86d6 +0x12a7:  call   086b78ea <+0x4bb>
086b86db +0x12ac:  lea    0x10(%ebp),%eax
086b86de +0x12af:  mov    %eax,0x4(%esp)
086b86e2 +0x12b3:  lea    0xc(%ebp),%eax
086b86e5 +0x12b6:  mov    %eax,(%esp)
086b86e8 +0x12b9:  call   086b78d6 <+0x4a7>
086b86ed +0x12be:  test   %al,%al
086b86ef +0x12c0:  jne    086b86b6 <+0x1287>
086b86f1 +0x12c2:  leave
086b86f2 +0x12c3:  ret
086b86f3 +0x12c4:  nop
086b86f4 +0x12c5:  push   %ebp
086b86f5 +0x12c6:  mov    %esp,%ebp
086b86f7 +0x12c8:  sub    $0x18,%esp
086b86fa +0x12cb:  mov    0x8(%ebp),%eax
086b86fd +0x12ce:  mov    0xc(%ebp),%edx
086b8700 +0x12d1:  mov    %edx,0x4(%esp)
086b8704 +0x12d5:  mov    %eax,(%esp)
086b8707 +0x12d8:  call   086b8878 <+0x1449>
086b870c +0x12dd:  mov    0x8(%ebp),%eax
086b870f +0x12e0:  movl   $0x0,(%eax)
086b8715 +0x12e6:  mov    0x8(%ebp),%eax
086b8718 +0x12e9:  movl   $0x0,0x4(%eax)
086b871f +0x12f0:  leave
086b8720 +0x12f1:  ret
086b8721 +0x12f2:  push   %ebp
086b8722 +0x12f3:  mov    %esp,%ebp
086b8724 +0x12f5:  mov    0x8(%ebp),%eax
086b8727 +0x12f8:  add    $0x10,%eax
086b872a +0x12fb:  pop    %ebp
086b872b +0x12fc:  ret
086b872c +0x12fd:  push   %ebp
086b872d +0x12fe:  mov    %esp,%ebp
086b872f +0x1300:  push   %esi
086b8730 +0x1301:  push   %ebx
086b8731 +0x1302:  sub    $0x20,%esp
086b8734 +0x1305:  mov    0x8(%ebp),%eax
086b8737 +0x1308:  mov    %eax,(%esp)
086b873a +0x130b:  call   086b8892 <+0x1463>
086b873f +0x1310:  mov    %eax,-0xc(%ebp)
086b8742 +0x1313:  mov    0xc(%ebp),%eax
086b8745 +0x1316:  mov    %eax,(%esp)
086b8748 +0x1319:  call   086b88b5 <+0x1486>
086b874d +0x131e:  mov    %eax,%ebx
086b874f +0x1320:  mov    0x8(%ebp),%eax
086b8752 +0x1323:  mov    %eax,(%esp)
086b8755 +0x1326:  call   086b84e2 <+0x10b3>
086b875a +0x132b:  mov    %ebx,0x8(%esp)
086b875e +0x132f:  mov    -0xc(%ebp),%edx
086b8761 +0x1332:  mov    %edx,0x4(%esp)
086b8765 +0x1336:  mov    %eax,(%esp)
086b8768 +0x1339:  call   086b88be <+0x148f>
086b876d +0x133e:  jmp    086b87a3 <+0x1374>
086b876f +0x1340:  mov    %eax,(%esp)
086b8772 +0x1343:  call   08725ce0 <__cxa_begin_catch>
086b8777 +0x1348:  mov    -0xc(%ebp),%eax
086b877a +0x134b:  mov    %eax,0x4(%esp)
086b877e +0x134f:  mov    0x8(%ebp),%eax
086b8781 +0x1352:  mov    %eax,(%esp)
086b8784 +0x1355:  call   086b8514 <+0x10e5>
086b8789 +0x135a:  call   08724be0 <__cxa_rethrow>
086b878e +0x135f:  mov    %edx,%ebx
086b8790 +0x1361:  mov    %eax,%esi
086b8792 +0x1363:  call   08725c30 <__cxa_end_catch>
086b8797 +0x1368:  mov    %esi,%eax
086b8799 +0x136a:  mov    %ebx,%edx
086b879b +0x136c:  mov    %eax,(%esp)
086b879e +0x136f:  call   08ae3750 <_Unwind_Resume>
086b87a3 +0x1374:  mov    -0xc(%ebp),%eax
086b87a6 +0x1377:  add    $0x20,%esp
086b87a9 +0x137a:  pop    %ebx
086b87aa +0x137b:  pop    %esi
086b87ab +0x137c:  pop    %ebp
086b87ac +0x137d:  ret
086b87ad +0x137e:  push   %ebp
086b87ae +0x137f:  mov    %esp,%ebp
086b87b0 +0x1381:  mov    0x8(%ebp),%eax
086b87b3 +0x1384:  pop    %ebp
086b87b4 +0x1385:  ret
086b87b5 +0x1386:  push   %ebp
086b87b6 +0x1387:  mov    %esp,%ebp
086b87b8 +0x1389:  mov    0x8(%ebp),%eax
086b87bb +0x138c:  pop    %ebp
086b87bc +0x138d:  ret
086b87bd +0x138e:  nop
086b87be +0x138f:  push   %ebp
086b87bf +0x1390:  mov    %esp,%ebp
086b87c1 +0x1392:  pop    %ebp
086b87c2 +0x1393:  ret
086b87c3 +0x1394:  nop
086b87c4 +0x1395:  push   %ebp
086b87c5 +0x1396:  mov    %esp,%ebp
086b87c7 +0x1398:  sub    $0x18,%esp
086b87ca +0x139b:  mov    0xc(%ebp),%eax
086b87cd +0x139e:  mov    %eax,(%esp)
086b87d0 +0x13a1:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
086b87d5 +0x13a6:  leave
086b87d6 +0x13a7:  ret
086b87d7 +0x13a8:  nop
086b87d8 +0x13a9:  push   %ebp
086b87d9 +0x13aa:  mov    %esp,%ebp
086b87db +0x13ac:  sub    $0x18,%esp
086b87de +0x13af:  mov    0x8(%ebp),%eax
086b87e1 +0x13b2:  mov    %eax,(%esp)
086b87e4 +0x13b5:  call   086b8926 <+0x14f7>
086b87e9 +0x13ba:  cmp    0xc(%ebp),%eax
086b87ec +0x13bd:  setb   %al
086b87ef +0x13c0:  movzbl %al,%eax
086b87f2 +0x13c3:  test   %eax,%eax
086b87f4 +0x13c5:  setne  %al
086b87f7 +0x13c8:  test   %al,%al
086b87f9 +0x13ca:  je     086b8800 <+0x13d1>
086b87fb +0x13cc:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
086b8800 +0x13d1:  mov    0xc(%ebp),%edx
086b8803 +0x13d4:  mov    %edx,%eax
086b8805 +0x13d6:  add    %eax,%eax
086b8807 +0x13d8:  add    %edx,%eax
086b8809 +0x13da:  shl    $0x2,%eax
086b880c +0x13dd:  mov    %eax,(%esp)
086b880f +0x13e0:  call   08724450 <_Znwj>  ; operator new(unsigned int)
086b8814 +0x13e5:  leave
086b8815 +0x13e6:  ret
086b8816 +0x13e7:  push   %ebp
086b8817 +0x13e8:  mov    %esp,%ebp
086b8819 +0x13ea:  sub    $0x18,%esp
086b881c +0x13ed:  mov    0x8(%ebp),%eax
086b881f +0x13f0:  movl   $0x0,(%eax)
086b8825 +0x13f6:  mov    0x8(%ebp),%eax
086b8828 +0x13f9:  movl   $0x0,0x4(%eax)
086b882f +0x1400:  mov    0xc(%ebp),%eax
086b8832 +0x1403:  mov    %eax,(%esp)
086b8835 +0x1406:  call   086b80a2 <+0xc73>
086b883a +0x140b:  mov    (%eax),%edx
086b883c +0x140d:  mov    0x8(%ebp),%eax
086b883f +0x1410:  mov    %edx,0x8(%eax)
086b8842 +0x1413:  leave
086b8843 +0x1414:  ret
086b8844 +0x1415:  push   %ebp
086b8845 +0x1416:  mov    %esp,%ebp
086b8847 +0x1418:  pop    %ebp
086b8848 +0x1419:  ret
086b8849 +0x141a:  nop
086b884a +0x141b:  push   %ebp
086b884b +0x141c:  mov    %esp,%ebp
086b884d +0x141e:  pop    %ebp
086b884e +0x141f:  ret
086b884f +0x1420:  nop
086b8850 +0x1421:  push   %ebp
086b8851 +0x1422:  mov    %esp,%ebp
086b8853 +0x1424:  pop    %ebp
086b8854 +0x1425:  ret
086b8855 +0x1426:  nop
086b8856 +0x1427:  push   %ebp
086b8857 +0x1428:  mov    %esp,%ebp
086b8859 +0x142a:  sub    $0x18,%esp
086b885c +0x142d:  mov    0x8(%ebp),%eax
086b885f +0x1430:  mov    %eax,(%esp)
086b8862 +0x1433:  call   086b8844 <+0x1415>
086b8867 +0x1438:  leave
086b8868 +0x1439:  ret
086b8869 +0x143a:  nop
086b886a +0x143b:  push   %ebp
086b886b +0x143c:  mov    %esp,%ebp
086b886d +0x143e:  mov    0x8(%ebp),%eax
086b8870 +0x1441:  mov    0xc(%ebp),%edx
086b8873 +0x1444:  mov    %edx,(%eax)
086b8875 +0x1446:  pop    %ebp
086b8876 +0x1447:  ret
086b8877 +0x1448:  nop
086b8878 +0x1449:  push   %ebp
086b8879 +0x144a:  mov    %esp,%ebp
086b887b +0x144c:  sub    $0x18,%esp
086b887e +0x144f:  mov    0xc(%ebp),%edx
086b8881 +0x1452:  mov    0x8(%ebp),%eax
086b8884 +0x1455:  mov    %edx,0x4(%esp)
086b8888 +0x1459:  mov    %eax,(%esp)
086b888b +0x145c:  call   086b8930 <+0x1501>
086b8890 +0x1461:  leave
086b8891 +0x1462:  ret
086b8892 +0x1463:  push   %ebp
086b8893 +0x1464:  mov    %esp,%ebp
086b8895 +0x1466:  sub    $0x18,%esp
086b8898 +0x1469:  mov    0x8(%ebp),%eax
086b889b +0x146c:  movl   $0x0,0x8(%esp)
086b88a3 +0x1474:  movl   $0x1,0x4(%esp)
086b88ab +0x147c:  mov    %eax,(%esp)
086b88ae +0x147f:  call   086b8936 <+0x1507>
086b88b3 +0x1484:  leave
086b88b4 +0x1485:  ret
086b88b5 +0x1486:  push   %ebp
086b88b6 +0x1487:  mov    %esp,%ebp
086b88b8 +0x1489:  mov    0x8(%ebp),%eax
086b88bb +0x148c:  pop    %ebp
086b88bc +0x148d:  ret
086b88bd +0x148e:  nop
086b88be +0x148f:  push   %ebp
086b88bf +0x1490:  mov    %esp,%ebp
086b88c1 +0x1492:  push   %edi
086b88c2 +0x1493:  push   %esi
086b88c3 +0x1494:  push   %ebx
086b88c4 +0x1495:  sub    $0x2c,%esp
086b88c7 +0x1498:  mov    0x10(%ebp),%eax
086b88ca +0x149b:  mov    %eax,(%esp)
086b88cd +0x149e:  call   086b88b5 <+0x1486>
086b88d2 +0x14a3:  mov    %eax,%edi
086b88d4 +0x14a5:  mov    0xc(%ebp),%esi
086b88d7 +0x14a8:  mov    %esi,0x4(%esp)
086b88db +0x14ac:  movl   $0x1c,(%esp)
086b88e2 +0x14b3:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
086b88e7 +0x14b8:  mov    %eax,%ebx
086b88e9 +0x14ba:  mov    %ebx,%eax
086b88eb +0x14bc:  test   %eax,%eax
086b88ed +0x14be:  je     086b891d <+0x14ee>
086b88ef +0x14c0:  mov    %ebx,%eax
086b88f1 +0x14c2:  mov    %edi,0x4(%esp)
086b88f5 +0x14c6:  mov    %eax,(%esp)
086b88f8 +0x14c9:  call   086b89a8 <+0x1579>
086b88fd +0x14ce:  jmp    086b891d <+0x14ee>
086b88ff +0x14d0:  mov    %edx,%edi
086b8901 +0x14d2:  mov    %eax,-0x1c(%ebp)
086b8904 +0x14d5:  mov    %esi,0x4(%esp)
086b8908 +0x14d9:  mov    %ebx,(%esp)
086b890b +0x14dc:  call   0807fff6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x1c>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x1c
086b8910 +0x14e1:  mov    -0x1c(%ebp),%eax
086b8913 +0x14e4:  mov    %edi,%edx
086b8915 +0x14e6:  mov    %eax,(%esp)
086b8918 +0x14e9:  call   08ae3750 <_Unwind_Resume>
086b891d +0x14ee:  add    $0x2c,%esp
086b8920 +0x14f1:  pop    %ebx
086b8921 +0x14f2:  pop    %esi
086b8922 +0x14f3:  pop    %edi
086b8923 +0x14f4:  pop    %ebp
086b8924 +0x14f5:  ret
086b8925 +0x14f6:  nop
086b8926 +0x14f7:  push   %ebp
086b8927 +0x14f8:  mov    %esp,%ebp
086b8929 +0x14fa:  mov    $0x15555555,%eax
086b892e +0x14ff:  pop    %ebp
086b892f +0x1500:  ret
086b8930 +0x1501:  push   %ebp
086b8931 +0x1502:  mov    %esp,%ebp
086b8933 +0x1504:  pop    %ebp
086b8934 +0x1505:  ret
086b8935 +0x1506:  nop
086b8936 +0x1507:  push   %ebp
086b8937 +0x1508:  mov    %esp,%ebp
086b8939 +0x150a:  sub    $0x18,%esp
086b893c +0x150d:  mov    0x8(%ebp),%eax
086b893f +0x1510:  mov    %eax,(%esp)
086b8942 +0x1513:  call   086b89f4 <+0x15c5>
086b8947 +0x1518:  cmp    0xc(%ebp),%eax
086b894a +0x151b:  setb   %al
086b894d +0x151e:  movzbl %al,%eax
086b8950 +0x1521:  test   %eax,%eax
086b8952 +0x1523:  setne  %al
086b8955 +0x1526:  test   %al,%al
086b8957 +0x1528:  je     086b895e <+0x152f>
086b8959 +0x152a:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
086b895e +0x152f:  mov    0xc(%ebp),%eax
086b8961 +0x1532:  shl    $0x2,%eax
086b8964 +0x1535:  lea    0x0(,%eax,8),%edx
086b896b +0x153c:  mov    %edx,%ecx
086b896d +0x153e:  sub    %eax,%ecx
086b896f +0x1540:  mov    %ecx,%eax
086b8971 +0x1542:  mov    %eax,(%esp)
086b8974 +0x1545:  call   08724450 <_Znwj>  ; operator new(unsigned int)
086b8979 +0x154a:  leave
086b897a +0x154b:  ret
086b897b +0x154c:  nop
086b897c +0x154d:  push   %ebp
086b897d +0x154e:  mov    %esp,%ebp
086b897f +0x1550:  sub    $0x18,%esp
086b8982 +0x1553:  mov    0x8(%ebp),%eax
086b8985 +0x1556:  mov    0xc(%ebp),%edx
086b8988 +0x1559:  movzwl (%edx),%edx
086b898b +0x155c:  mov    %dx,(%eax)
086b898e +0x155f:  mov    0xc(%ebp),%eax
086b8991 +0x1562:  lea    0x4(%eax),%edx
086b8994 +0x1565:  mov    0x8(%ebp),%eax
086b8997 +0x1568:  add    $0x4,%eax
086b899a +0x156b:  mov    %edx,0x4(%esp)
086b899e +0x156f:  mov    %eax,(%esp)
086b89a1 +0x1572:  call   086b81b2 <+0xd83>
086b89a6 +0x1577:  leave
086b89a7 +0x1578:  ret
086b89a8 +0x1579:  push   %ebp
086b89a9 +0x157a:  mov    %esp,%ebp
086b89ab +0x157c:  sub    $0x18,%esp
086b89ae +0x157f:  mov    0x8(%ebp),%eax
086b89b1 +0x1582:  movl   $0x0,(%eax)
086b89b7 +0x1588:  mov    0x8(%ebp),%eax
086b89ba +0x158b:  movl   $0x0,0x4(%eax)
086b89c1 +0x1592:  mov    0x8(%ebp),%eax
086b89c4 +0x1595:  movl   $0x0,0x8(%eax)
086b89cb +0x159c:  mov    0x8(%ebp),%eax
086b89ce +0x159f:  movl   $0x0,0xc(%eax)
086b89d5 +0x15a6:  mov    0xc(%ebp),%eax
086b89d8 +0x15a9:  mov    %eax,(%esp)
086b89db +0x15ac:  call   086b88b5 <+0x1486>
086b89e0 +0x15b1:  mov    0x8(%ebp),%edx
086b89e3 +0x15b4:  add    $0x10,%edx
086b89e6 +0x15b7:  mov    %eax,0x4(%esp)
086b89ea +0x15bb:  mov    %edx,(%esp)
086b89ed +0x15be:  call   086b897c <+0x154d>
086b89f2 +0x15c3:  leave
086b89f3 +0x15c4:  ret
086b89f4 +0x15c5:  push   %ebp
086b89f5 +0x15c6:  mov    %esp,%ebp
086b89f7 +0x15c8:  mov    $"}p�.",%eax
086b89fc +0x15cd:  pop    %ebp
086b89fd +0x15ce:  ret
086b89fe +0x15cf:  nop
086b89ff +0x15d0:  nop
```

## 反编译 C

```c
// <global>::global @ 0x86b742f

/* village_object::CVillageObjectMgr::CVillageObjectMgr() */

void village_object::CVillageObjectMgr::_GLOBAL__I_CVillageObjectMgr(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
