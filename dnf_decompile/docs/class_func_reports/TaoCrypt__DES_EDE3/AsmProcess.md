# AsmProcess

`_ZNK8TaoCrypt8DES_EDE310AsmProcessEPKhPhPv`

`TaoCrypt::DES_EDE3::AsmProcess(unsigned char const*, unsigned char*, void*) const`

| 类 | 地址 |
|---|---|
| `TaoCrypt::DES_EDE3` | `0x087a63e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087a63e0  _ZNK8TaoCrypt8DES_EDE310AsmProcessEPKhPhPv
#           TaoCrypt::DES_EDE3::AsmProcess(unsigned char const*, unsigned char*, void*) const
# range [0x087a63e0, 0x087a7a0a]
087a63e0 +0x0000:  push   %ebp
087a63e1 +0x0001:  mov    %esp,%ebp
087a63e3 +0x0003:  movd   %edi,%mm3
087a63e6 +0x0006:  movd   %ebx,%mm4
087a63e9 +0x0009:  movd   %esi,%mm5
087a63ec +0x000c:  movd   %ebp,%mm6
087a63ef +0x000f:  mov    0x8(%ebp),%edx
087a63f2 +0x0012:  mov    0xc(%ebp),%esi
087a63f5 +0x0015:  mov    0x14(%ebp),%ebp
087a63f8 +0x0018:  movd   %edx,%mm2
087a63fb +0x001b:  add    $0x38,%edx
087a63fe +0x001e:  mov    (%esi),%eax
087a6400 +0x0020:  mov    0x4(%esi),%ebx
087a6403 +0x0023:  bswap  %eax
087a6405 +0x0025:  bswap  %ebx
087a6407 +0x0027:  rol    $0x4,%ebx
087a640a +0x002a:  mov    %eax,%ecx
087a640c +0x002c:  xor    %ebx,%ecx
087a640e +0x002e:  and    $0xf0f0f0f0,%ecx
087a6414 +0x0034:  xor    %ecx,%ebx
087a6416 +0x0036:  xor    %ecx,%eax
087a6418 +0x0038:  ror    $0x14,%ebx
087a641b +0x003b:  mov    %eax,%ecx
087a641d +0x003d:  xor    %ebx,%ecx
087a641f +0x003f:  and    $0xffff0000,%ecx
087a6425 +0x0045:  xor    %ecx,%ebx
087a6427 +0x0047:  xor    %ecx,%eax
087a6429 +0x0049:  ror    $0x12,%ebx
087a642c +0x004c:  mov    %eax,%ecx
087a642e +0x004e:  xor    %ebx,%ecx
087a6430 +0x0050:  and    $0x33333333,%ecx
087a6436 +0x0056:  xor    %ecx,%ebx
087a6438 +0x0058:  xor    %ecx,%eax
087a643a +0x005a:  ror    $0x6,%ebx
087a643d +0x005d:  mov    %eax,%ecx
087a643f +0x005f:  xor    %ebx,%ecx
087a6441 +0x0061:  and    $0xff00ff,%ecx
087a6447 +0x0067:  xor    %ecx,%ebx
087a6449 +0x0069:  xor    %ecx,%eax
087a644b +0x006b:  rol    $0x9,%ebx
087a644e +0x006e:  mov    %eax,%ecx
087a6450 +0x0070:  xor    %ebx,%ecx
087a6452 +0x0072:  and    $0xaaaaaaaa,%ecx
087a6458 +0x0078:  xor    %ecx,%eax
087a645a +0x007a:  rol    %eax
087a645c +0x007c:  xor    %ecx,%ebx
087a645e +0x007e:  mov    %ebx,%ecx
087a6460 +0x0080:  mov    (%edx),%esi
087a6462 +0x0082:  ror    $0x4,%ecx
087a6465 +0x0085:  xor    %esi,%ecx
087a6467 +0x0087:  and    $0x3f3f3f3f,%ecx
087a646d +0x008d:  movzbl %cl,%esi
087a6470 +0x0090:  movzbl %ch,%edi
087a6473 +0x0093:  xor    0x600(%ebp,%esi,4),%eax
087a647a +0x009a:  shr    $0x10,%ecx
087a647d +0x009d:  xor    0x400(%ebp,%edi,4),%eax
087a6484 +0x00a4:  movzbl %cl,%esi
087a6487 +0x00a7:  movzbl %ch,%edi
087a648a +0x00aa:  xor    0x200(%ebp,%esi,4),%eax
087a6491 +0x00b1:  mov    0x4(%edx),%esi
087a6494 +0x00b4:  xor    0x0(%ebp,%edi,4),%eax
087a6498 +0x00b8:  mov    %ebx,%ecx
087a649a +0x00ba:  xor    %esi,%ecx
087a649c +0x00bc:  and    $0x3f3f3f3f,%ecx
087a64a2 +0x00c2:  movzbl %cl,%esi
087a64a5 +0x00c5:  movzbl %ch,%edi
087a64a8 +0x00c8:  xor    0x700(%ebp,%esi,4),%eax
087a64af +0x00cf:  shr    $0x10,%ecx
087a64b2 +0x00d2:  xor    0x500(%ebp,%edi,4),%eax
087a64b9 +0x00d9:  movzbl %cl,%esi
087a64bc +0x00dc:  movzbl %ch,%edi
087a64bf +0x00df:  xor    0x300(%ebp,%esi,4),%eax
087a64c6 +0x00e6:  mov    0x8(%edx),%esi
087a64c9 +0x00e9:  xor    0x100(%ebp,%edi,4),%eax
087a64d0 +0x00f0:  mov    %eax,%ecx
087a64d2 +0x00f2:  ror    $0x4,%ecx
087a64d5 +0x00f5:  xor    %esi,%ecx
087a64d7 +0x00f7:  and    $0x3f3f3f3f,%ecx
087a64dd +0x00fd:  movzbl %cl,%esi
087a64e0 +0x0100:  movzbl %ch,%edi
087a64e3 +0x0103:  xor    0x600(%ebp,%esi,4),%ebx
087a64ea +0x010a:  shr    $0x10,%ecx
087a64ed +0x010d:  xor    0x400(%ebp,%edi,4),%ebx
087a64f4 +0x0114:  movzbl %cl,%esi
087a64f7 +0x0117:  movzbl %ch,%edi
087a64fa +0x011a:  xor    0x200(%ebp,%esi,4),%ebx
087a6501 +0x0121:  mov    0xc(%edx),%esi
087a6504 +0x0124:  xor    0x0(%ebp,%edi,4),%ebx
087a6508 +0x0128:  mov    %eax,%ecx
087a650a +0x012a:  xor    %esi,%ecx
087a650c +0x012c:  and    $0x3f3f3f3f,%ecx
087a6512 +0x0132:  movzbl %cl,%esi
087a6515 +0x0135:  movzbl %ch,%edi
087a6518 +0x0138:  xor    0x700(%ebp,%esi,4),%ebx
087a651f +0x013f:  shr    $0x10,%ecx
087a6522 +0x0142:  xor    0x500(%ebp,%edi,4),%ebx
087a6529 +0x0149:  movzbl %cl,%esi
087a652c +0x014c:  movzbl %ch,%edi
087a652f +0x014f:  xor    0x300(%ebp,%esi,4),%ebx
087a6536 +0x0156:  add    $0x10,%edx
087a6539 +0x0159:  xor    0x100(%ebp,%edi,4),%ebx
087a6540 +0x0160:  mov    %ebx,%ecx
087a6542 +0x0162:  mov    (%edx),%esi
087a6544 +0x0164:  ror    $0x4,%ecx
087a6547 +0x0167:  xor    %esi,%ecx
087a6549 +0x0169:  and    $0x3f3f3f3f,%ecx
087a654f +0x016f:  movzbl %cl,%esi
087a6552 +0x0172:  movzbl %ch,%edi
087a6555 +0x0175:  xor    0x600(%ebp,%esi,4),%eax
087a655c +0x017c:  shr    $0x10,%ecx
087a655f +0x017f:  xor    0x400(%ebp,%edi,4),%eax
087a6566 +0x0186:  movzbl %cl,%esi
087a6569 +0x0189:  movzbl %ch,%edi
087a656c +0x018c:  xor    0x200(%ebp,%esi,4),%eax
087a6573 +0x0193:  mov    0x4(%edx),%esi
087a6576 +0x0196:  xor    0x0(%ebp,%edi,4),%eax
087a657a +0x019a:  mov    %ebx,%ecx
087a657c +0x019c:  xor    %esi,%ecx
087a657e +0x019e:  and    $0x3f3f3f3f,%ecx
087a6584 +0x01a4:  movzbl %cl,%esi
087a6587 +0x01a7:  movzbl %ch,%edi
087a658a +0x01aa:  xor    0x700(%ebp,%esi,4),%eax
087a6591 +0x01b1:  shr    $0x10,%ecx
087a6594 +0x01b4:  xor    0x500(%ebp,%edi,4),%eax
087a659b +0x01bb:  movzbl %cl,%esi
087a659e +0x01be:  movzbl %ch,%edi
087a65a1 +0x01c1:  xor    0x300(%ebp,%esi,4),%eax
087a65a8 +0x01c8:  mov    0x8(%edx),%esi
087a65ab +0x01cb:  xor    0x100(%ebp,%edi,4),%eax
087a65b2 +0x01d2:  mov    %eax,%ecx
087a65b4 +0x01d4:  ror    $0x4,%ecx
087a65b7 +0x01d7:  xor    %esi,%ecx
087a65b9 +0x01d9:  and    $0x3f3f3f3f,%ecx
087a65bf +0x01df:  movzbl %cl,%esi
087a65c2 +0x01e2:  movzbl %ch,%edi
087a65c5 +0x01e5:  xor    0x600(%ebp,%esi,4),%ebx
087a65cc +0x01ec:  shr    $0x10,%ecx
087a65cf +0x01ef:  xor    0x400(%ebp,%edi,4),%ebx
087a65d6 +0x01f6:  movzbl %cl,%esi
087a65d9 +0x01f9:  movzbl %ch,%edi
087a65dc +0x01fc:  xor    0x200(%ebp,%esi,4),%ebx
087a65e3 +0x0203:  mov    0xc(%edx),%esi
087a65e6 +0x0206:  xor    0x0(%ebp,%edi,4),%ebx
087a65ea +0x020a:  mov    %eax,%ecx
087a65ec +0x020c:  xor    %esi,%ecx
087a65ee +0x020e:  and    $0x3f3f3f3f,%ecx
087a65f4 +0x0214:  movzbl %cl,%esi
087a65f7 +0x0217:  movzbl %ch,%edi
087a65fa +0x021a:  xor    0x700(%ebp,%esi,4),%ebx
087a6601 +0x0221:  shr    $0x10,%ecx
087a6604 +0x0224:  xor    0x500(%ebp,%edi,4),%ebx
087a660b +0x022b:  movzbl %cl,%esi
087a660e +0x022e:  movzbl %ch,%edi
087a6611 +0x0231:  xor    0x300(%ebp,%esi,4),%ebx
087a6618 +0x0238:  add    $0x10,%edx
087a661b +0x023b:  xor    0x100(%ebp,%edi,4),%ebx
087a6622 +0x0242:  mov    %ebx,%ecx
087a6624 +0x0244:  mov    (%edx),%esi
087a6626 +0x0246:  ror    $0x4,%ecx
087a6629 +0x0249:  xor    %esi,%ecx
087a662b +0x024b:  and    $0x3f3f3f3f,%ecx
087a6631 +0x0251:  movzbl %cl,%esi
087a6634 +0x0254:  movzbl %ch,%edi
087a6637 +0x0257:  xor    0x600(%ebp,%esi,4),%eax
087a663e +0x025e:  shr    $0x10,%ecx
087a6641 +0x0261:  xor    0x400(%ebp,%edi,4),%eax
087a6648 +0x0268:  movzbl %cl,%esi
087a664b +0x026b:  movzbl %ch,%edi
087a664e +0x026e:  xor    0x200(%ebp,%esi,4),%eax
087a6655 +0x0275:  mov    0x4(%edx),%esi
087a6658 +0x0278:  xor    0x0(%ebp,%edi,4),%eax
087a665c +0x027c:  mov    %ebx,%ecx
087a665e +0x027e:  xor    %esi,%ecx
087a6660 +0x0280:  and    $0x3f3f3f3f,%ecx
087a6666 +0x0286:  movzbl %cl,%esi
087a6669 +0x0289:  movzbl %ch,%edi
087a666c +0x028c:  xor    0x700(%ebp,%esi,4),%eax
087a6673 +0x0293:  shr    $0x10,%ecx
087a6676 +0x0296:  xor    0x500(%ebp,%edi,4),%eax
087a667d +0x029d:  movzbl %cl,%esi
087a6680 +0x02a0:  movzbl %ch,%edi
087a6683 +0x02a3:  xor    0x300(%ebp,%esi,4),%eax
087a668a +0x02aa:  mov    0x8(%edx),%esi
087a668d +0x02ad:  xor    0x100(%ebp,%edi,4),%eax
087a6694 +0x02b4:  mov    %eax,%ecx
087a6696 +0x02b6:  ror    $0x4,%ecx
087a6699 +0x02b9:  xor    %esi,%ecx
087a669b +0x02bb:  and    $0x3f3f3f3f,%ecx
087a66a1 +0x02c1:  movzbl %cl,%esi
087a66a4 +0x02c4:  movzbl %ch,%edi
087a66a7 +0x02c7:  xor    0x600(%ebp,%esi,4),%ebx
087a66ae +0x02ce:  shr    $0x10,%ecx
087a66b1 +0x02d1:  xor    0x400(%ebp,%edi,4),%ebx
087a66b8 +0x02d8:  movzbl %cl,%esi
087a66bb +0x02db:  movzbl %ch,%edi
087a66be +0x02de:  xor    0x200(%ebp,%esi,4),%ebx
087a66c5 +0x02e5:  mov    0xc(%edx),%esi
087a66c8 +0x02e8:  xor    0x0(%ebp,%edi,4),%ebx
087a66cc +0x02ec:  mov    %eax,%ecx
087a66ce +0x02ee:  xor    %esi,%ecx
087a66d0 +0x02f0:  and    $0x3f3f3f3f,%ecx
087a66d6 +0x02f6:  movzbl %cl,%esi
087a66d9 +0x02f9:  movzbl %ch,%edi
087a66dc +0x02fc:  xor    0x700(%ebp,%esi,4),%ebx
087a66e3 +0x0303:  shr    $0x10,%ecx
087a66e6 +0x0306:  xor    0x500(%ebp,%edi,4),%ebx
087a66ed +0x030d:  movzbl %cl,%esi
087a66f0 +0x0310:  movzbl %ch,%edi
087a66f3 +0x0313:  xor    0x300(%ebp,%esi,4),%ebx
087a66fa +0x031a:  add    $0x10,%edx
087a66fd +0x031d:  xor    0x100(%ebp,%edi,4),%ebx
087a6704 +0x0324:  mov    %ebx,%ecx
087a6706 +0x0326:  mov    (%edx),%esi
087a6708 +0x0328:  ror    $0x4,%ecx
087a670b +0x032b:  xor    %esi,%ecx
087a670d +0x032d:  and    $0x3f3f3f3f,%ecx
087a6713 +0x0333:  movzbl %cl,%esi
087a6716 +0x0336:  movzbl %ch,%edi
087a6719 +0x0339:  xor    0x600(%ebp,%esi,4),%eax
087a6720 +0x0340:  shr    $0x10,%ecx
087a6723 +0x0343:  xor    0x400(%ebp,%edi,4),%eax
087a672a +0x034a:  movzbl %cl,%esi
087a672d +0x034d:  movzbl %ch,%edi
087a6730 +0x0350:  xor    0x200(%ebp,%esi,4),%eax
087a6737 +0x0357:  mov    0x4(%edx),%esi
087a673a +0x035a:  xor    0x0(%ebp,%edi,4),%eax
087a673e +0x035e:  mov    %ebx,%ecx
087a6740 +0x0360:  xor    %esi,%ecx
087a6742 +0x0362:  and    $0x3f3f3f3f,%ecx
087a6748 +0x0368:  movzbl %cl,%esi
087a674b +0x036b:  movzbl %ch,%edi
087a674e +0x036e:  xor    0x700(%ebp,%esi,4),%eax
087a6755 +0x0375:  shr    $0x10,%ecx
087a6758 +0x0378:  xor    0x500(%ebp,%edi,4),%eax
087a675f +0x037f:  movzbl %cl,%esi
087a6762 +0x0382:  movzbl %ch,%edi
087a6765 +0x0385:  xor    0x300(%ebp,%esi,4),%eax
087a676c +0x038c:  mov    0x8(%edx),%esi
087a676f +0x038f:  xor    0x100(%ebp,%edi,4),%eax
087a6776 +0x0396:  mov    %eax,%ecx
087a6778 +0x0398:  ror    $0x4,%ecx
087a677b +0x039b:  xor    %esi,%ecx
087a677d +0x039d:  and    $0x3f3f3f3f,%ecx
087a6783 +0x03a3:  movzbl %cl,%esi
087a6786 +0x03a6:  movzbl %ch,%edi
087a6789 +0x03a9:  xor    0x600(%ebp,%esi,4),%ebx
087a6790 +0x03b0:  shr    $0x10,%ecx
087a6793 +0x03b3:  xor    0x400(%ebp,%edi,4),%ebx
087a679a +0x03ba:  movzbl %cl,%esi
087a679d +0x03bd:  movzbl %ch,%edi
087a67a0 +0x03c0:  xor    0x200(%ebp,%esi,4),%ebx
087a67a7 +0x03c7:  mov    0xc(%edx),%esi
087a67aa +0x03ca:  xor    0x0(%ebp,%edi,4),%ebx
087a67ae +0x03ce:  mov    %eax,%ecx
087a67b0 +0x03d0:  xor    %esi,%ecx
087a67b2 +0x03d2:  and    $0x3f3f3f3f,%ecx
087a67b8 +0x03d8:  movzbl %cl,%esi
087a67bb +0x03db:  movzbl %ch,%edi
087a67be +0x03de:  xor    0x700(%ebp,%esi,4),%ebx
087a67c5 +0x03e5:  shr    $0x10,%ecx
087a67c8 +0x03e8:  xor    0x500(%ebp,%edi,4),%ebx
087a67cf +0x03ef:  movzbl %cl,%esi
087a67d2 +0x03f2:  movzbl %ch,%edi
087a67d5 +0x03f5:  xor    0x300(%ebp,%esi,4),%ebx
087a67dc +0x03fc:  add    $0x10,%edx
087a67df +0x03ff:  xor    0x100(%ebp,%edi,4),%ebx
087a67e6 +0x0406:  mov    %ebx,%ecx
087a67e8 +0x0408:  mov    (%edx),%esi
087a67ea +0x040a:  ror    $0x4,%ecx
087a67ed +0x040d:  xor    %esi,%ecx
087a67ef +0x040f:  and    $0x3f3f3f3f,%ecx
087a67f5 +0x0415:  movzbl %cl,%esi
087a67f8 +0x0418:  movzbl %ch,%edi
087a67fb +0x041b:  xor    0x600(%ebp,%esi,4),%eax
087a6802 +0x0422:  shr    $0x10,%ecx
087a6805 +0x0425:  xor    0x400(%ebp,%edi,4),%eax
087a680c +0x042c:  movzbl %cl,%esi
087a680f +0x042f:  movzbl %ch,%edi
087a6812 +0x0432:  xor    0x200(%ebp,%esi,4),%eax
087a6819 +0x0439:  mov    0x4(%edx),%esi
087a681c +0x043c:  xor    0x0(%ebp,%edi,4),%eax
087a6820 +0x0440:  mov    %ebx,%ecx
087a6822 +0x0442:  xor    %esi,%ecx
087a6824 +0x0444:  and    $0x3f3f3f3f,%ecx
087a682a +0x044a:  movzbl %cl,%esi
087a682d +0x044d:  movzbl %ch,%edi
087a6830 +0x0450:  xor    0x700(%ebp,%esi,4),%eax
087a6837 +0x0457:  shr    $0x10,%ecx
087a683a +0x045a:  xor    0x500(%ebp,%edi,4),%eax
087a6841 +0x0461:  movzbl %cl,%esi
087a6844 +0x0464:  movzbl %ch,%edi
087a6847 +0x0467:  xor    0x300(%ebp,%esi,4),%eax
087a684e +0x046e:  mov    0x8(%edx),%esi
087a6851 +0x0471:  xor    0x100(%ebp,%edi,4),%eax
087a6858 +0x0478:  mov    %eax,%ecx
087a685a +0x047a:  ror    $0x4,%ecx
087a685d +0x047d:  xor    %esi,%ecx
087a685f +0x047f:  and    $0x3f3f3f3f,%ecx
087a6865 +0x0485:  movzbl %cl,%esi
087a6868 +0x0488:  movzbl %ch,%edi
087a686b +0x048b:  xor    0x600(%ebp,%esi,4),%ebx
087a6872 +0x0492:  shr    $0x10,%ecx
087a6875 +0x0495:  xor    0x400(%ebp,%edi,4),%ebx
087a687c +0x049c:  movzbl %cl,%esi
087a687f +0x049f:  movzbl %ch,%edi
087a6882 +0x04a2:  xor    0x200(%ebp,%esi,4),%ebx
087a6889 +0x04a9:  mov    0xc(%edx),%esi
087a688c +0x04ac:  xor    0x0(%ebp,%edi,4),%ebx
087a6890 +0x04b0:  mov    %eax,%ecx
087a6892 +0x04b2:  xor    %esi,%ecx
087a6894 +0x04b4:  and    $0x3f3f3f3f,%ecx
087a689a +0x04ba:  movzbl %cl,%esi
087a689d +0x04bd:  movzbl %ch,%edi
087a68a0 +0x04c0:  xor    0x700(%ebp,%esi,4),%ebx
087a68a7 +0x04c7:  shr    $0x10,%ecx
087a68aa +0x04ca:  xor    0x500(%ebp,%edi,4),%ebx
087a68b1 +0x04d1:  movzbl %cl,%esi
087a68b4 +0x04d4:  movzbl %ch,%edi
087a68b7 +0x04d7:  xor    0x300(%ebp,%esi,4),%ebx
087a68be +0x04de:  add    $0x10,%edx
087a68c1 +0x04e1:  xor    0x100(%ebp,%edi,4),%ebx
087a68c8 +0x04e8:  mov    %ebx,%ecx
087a68ca +0x04ea:  mov    (%edx),%esi
087a68cc +0x04ec:  ror    $0x4,%ecx
087a68cf +0x04ef:  xor    %esi,%ecx
087a68d1 +0x04f1:  and    $0x3f3f3f3f,%ecx
087a68d7 +0x04f7:  movzbl %cl,%esi
087a68da +0x04fa:  movzbl %ch,%edi
087a68dd +0x04fd:  xor    0x600(%ebp,%esi,4),%eax
087a68e4 +0x0504:  shr    $0x10,%ecx
087a68e7 +0x0507:  xor    0x400(%ebp,%edi,4),%eax
087a68ee +0x050e:  movzbl %cl,%esi
087a68f1 +0x0511:  movzbl %ch,%edi
087a68f4 +0x0514:  xor    0x200(%ebp,%esi,4),%eax
087a68fb +0x051b:  mov    0x4(%edx),%esi
087a68fe +0x051e:  xor    0x0(%ebp,%edi,4),%eax
087a6902 +0x0522:  mov    %ebx,%ecx
087a6904 +0x0524:  xor    %esi,%ecx
087a6906 +0x0526:  and    $0x3f3f3f3f,%ecx
087a690c +0x052c:  movzbl %cl,%esi
087a690f +0x052f:  movzbl %ch,%edi
087a6912 +0x0532:  xor    0x700(%ebp,%esi,4),%eax
087a6919 +0x0539:  shr    $0x10,%ecx
087a691c +0x053c:  xor    0x500(%ebp,%edi,4),%eax
087a6923 +0x0543:  movzbl %cl,%esi
087a6926 +0x0546:  movzbl %ch,%edi
087a6929 +0x0549:  xor    0x300(%ebp,%esi,4),%eax
087a6930 +0x0550:  mov    0x8(%edx),%esi
087a6933 +0x0553:  xor    0x100(%ebp,%edi,4),%eax
087a693a +0x055a:  mov    %eax,%ecx
087a693c +0x055c:  ror    $0x4,%ecx
087a693f +0x055f:  xor    %esi,%ecx
087a6941 +0x0561:  and    $0x3f3f3f3f,%ecx
087a6947 +0x0567:  movzbl %cl,%esi
087a694a +0x056a:  movzbl %ch,%edi
087a694d +0x056d:  xor    0x600(%ebp,%esi,4),%ebx
087a6954 +0x0574:  shr    $0x10,%ecx
087a6957 +0x0577:  xor    0x400(%ebp,%edi,4),%ebx
087a695e +0x057e:  movzbl %cl,%esi
087a6961 +0x0581:  movzbl %ch,%edi
087a6964 +0x0584:  xor    0x200(%ebp,%esi,4),%ebx
087a696b +0x058b:  mov    0xc(%edx),%esi
087a696e +0x058e:  xor    0x0(%ebp,%edi,4),%ebx
087a6972 +0x0592:  mov    %eax,%ecx
087a6974 +0x0594:  xor    %esi,%ecx
087a6976 +0x0596:  and    $0x3f3f3f3f,%ecx
087a697c +0x059c:  movzbl %cl,%esi
087a697f +0x059f:  movzbl %ch,%edi
087a6982 +0x05a2:  xor    0x700(%ebp,%esi,4),%ebx
087a6989 +0x05a9:  shr    $0x10,%ecx
087a698c +0x05ac:  xor    0x500(%ebp,%edi,4),%ebx
087a6993 +0x05b3:  movzbl %cl,%esi
087a6996 +0x05b6:  movzbl %ch,%edi
087a6999 +0x05b9:  xor    0x300(%ebp,%esi,4),%ebx
087a69a0 +0x05c0:  add    $0x10,%edx
087a69a3 +0x05c3:  xor    0x100(%ebp,%edi,4),%ebx
087a69aa +0x05ca:  mov    %ebx,%ecx
087a69ac +0x05cc:  mov    (%edx),%esi
087a69ae +0x05ce:  ror    $0x4,%ecx
087a69b1 +0x05d1:  xor    %esi,%ecx
087a69b3 +0x05d3:  and    $0x3f3f3f3f,%ecx
087a69b9 +0x05d9:  movzbl %cl,%esi
087a69bc +0x05dc:  movzbl %ch,%edi
087a69bf +0x05df:  xor    0x600(%ebp,%esi,4),%eax
087a69c6 +0x05e6:  shr    $0x10,%ecx
087a69c9 +0x05e9:  xor    0x400(%ebp,%edi,4),%eax
087a69d0 +0x05f0:  movzbl %cl,%esi
087a69d3 +0x05f3:  movzbl %ch,%edi
087a69d6 +0x05f6:  xor    0x200(%ebp,%esi,4),%eax
087a69dd +0x05fd:  mov    0x4(%edx),%esi
087a69e0 +0x0600:  xor    0x0(%ebp,%edi,4),%eax
087a69e4 +0x0604:  mov    %ebx,%ecx
087a69e6 +0x0606:  xor    %esi,%ecx
087a69e8 +0x0608:  and    $0x3f3f3f3f,%ecx
087a69ee +0x060e:  movzbl %cl,%esi
087a69f1 +0x0611:  movzbl %ch,%edi
087a69f4 +0x0614:  xor    0x700(%ebp,%esi,4),%eax
087a69fb +0x061b:  shr    $0x10,%ecx
087a69fe +0x061e:  xor    0x500(%ebp,%edi,4),%eax
087a6a05 +0x0625:  movzbl %cl,%esi
087a6a08 +0x0628:  movzbl %ch,%edi
087a6a0b +0x062b:  xor    0x300(%ebp,%esi,4),%eax
087a6a12 +0x0632:  mov    0x8(%edx),%esi
087a6a15 +0x0635:  xor    0x100(%ebp,%edi,4),%eax
087a6a1c +0x063c:  mov    %eax,%ecx
087a6a1e +0x063e:  ror    $0x4,%ecx
087a6a21 +0x0641:  xor    %esi,%ecx
087a6a23 +0x0643:  and    $0x3f3f3f3f,%ecx
087a6a29 +0x0649:  movzbl %cl,%esi
087a6a2c +0x064c:  movzbl %ch,%edi
087a6a2f +0x064f:  xor    0x600(%ebp,%esi,4),%ebx
087a6a36 +0x0656:  shr    $0x10,%ecx
087a6a39 +0x0659:  xor    0x400(%ebp,%edi,4),%ebx
087a6a40 +0x0660:  movzbl %cl,%esi
087a6a43 +0x0663:  movzbl %ch,%edi
087a6a46 +0x0666:  xor    0x200(%ebp,%esi,4),%ebx
087a6a4d +0x066d:  mov    0xc(%edx),%esi
087a6a50 +0x0670:  xor    0x0(%ebp,%edi,4),%ebx
087a6a54 +0x0674:  mov    %eax,%ecx
087a6a56 +0x0676:  xor    %esi,%ecx
087a6a58 +0x0678:  and    $0x3f3f3f3f,%ecx
087a6a5e +0x067e:  movzbl %cl,%esi
087a6a61 +0x0681:  movzbl %ch,%edi
087a6a64 +0x0684:  xor    0x700(%ebp,%esi,4),%ebx
087a6a6b +0x068b:  shr    $0x10,%ecx
087a6a6e +0x068e:  xor    0x500(%ebp,%edi,4),%ebx
087a6a75 +0x0695:  movzbl %cl,%esi
087a6a78 +0x0698:  movzbl %ch,%edi
087a6a7b +0x069b:  xor    0x300(%ebp,%esi,4),%ebx
087a6a82 +0x06a2:  add    $0x10,%edx
087a6a85 +0x06a5:  xor    0x100(%ebp,%edi,4),%ebx
087a6a8c +0x06ac:  mov    %ebx,%ecx
087a6a8e +0x06ae:  mov    (%edx),%esi
087a6a90 +0x06b0:  ror    $0x4,%ecx
087a6a93 +0x06b3:  xor    %esi,%ecx
087a6a95 +0x06b5:  and    $0x3f3f3f3f,%ecx
087a6a9b +0x06bb:  movzbl %cl,%esi
087a6a9e +0x06be:  movzbl %ch,%edi
087a6aa1 +0x06c1:  xor    0x600(%ebp,%esi,4),%eax
087a6aa8 +0x06c8:  shr    $0x10,%ecx
087a6aab +0x06cb:  xor    0x400(%ebp,%edi,4),%eax
087a6ab2 +0x06d2:  movzbl %cl,%esi
087a6ab5 +0x06d5:  movzbl %ch,%edi
087a6ab8 +0x06d8:  xor    0x200(%ebp,%esi,4),%eax
087a6abf +0x06df:  mov    0x4(%edx),%esi
087a6ac2 +0x06e2:  xor    0x0(%ebp,%edi,4),%eax
087a6ac6 +0x06e6:  mov    %ebx,%ecx
087a6ac8 +0x06e8:  xor    %esi,%ecx
087a6aca +0x06ea:  and    $0x3f3f3f3f,%ecx
087a6ad0 +0x06f0:  movzbl %cl,%esi
087a6ad3 +0x06f3:  movzbl %ch,%edi
087a6ad6 +0x06f6:  xor    0x700(%ebp,%esi,4),%eax
087a6add +0x06fd:  shr    $0x10,%ecx
087a6ae0 +0x0700:  xor    0x500(%ebp,%edi,4),%eax
087a6ae7 +0x0707:  movzbl %cl,%esi
087a6aea +0x070a:  movzbl %ch,%edi
087a6aed +0x070d:  xor    0x300(%ebp,%esi,4),%eax
087a6af4 +0x0714:  mov    0x8(%edx),%esi
087a6af7 +0x0717:  xor    0x100(%ebp,%edi,4),%eax
087a6afe +0x071e:  mov    %eax,%ecx
087a6b00 +0x0720:  ror    $0x4,%ecx
087a6b03 +0x0723:  xor    %esi,%ecx
087a6b05 +0x0725:  and    $0x3f3f3f3f,%ecx
087a6b0b +0x072b:  movzbl %cl,%esi
087a6b0e +0x072e:  movzbl %ch,%edi
087a6b11 +0x0731:  xor    0x600(%ebp,%esi,4),%ebx
087a6b18 +0x0738:  shr    $0x10,%ecx
087a6b1b +0x073b:  xor    0x400(%ebp,%edi,4),%ebx
087a6b22 +0x0742:  movzbl %cl,%esi
087a6b25 +0x0745:  movzbl %ch,%edi
087a6b28 +0x0748:  xor    0x200(%ebp,%esi,4),%ebx
087a6b2f +0x074f:  mov    0xc(%edx),%esi
087a6b32 +0x0752:  xor    0x0(%ebp,%edi,4),%ebx
087a6b36 +0x0756:  mov    %eax,%ecx
087a6b38 +0x0758:  xor    %esi,%ecx
087a6b3a +0x075a:  and    $0x3f3f3f3f,%ecx
087a6b40 +0x0760:  movzbl %cl,%esi
087a6b43 +0x0763:  movzbl %ch,%edi
087a6b46 +0x0766:  xor    0x700(%ebp,%esi,4),%ebx
087a6b4d +0x076d:  shr    $0x10,%ecx
087a6b50 +0x0770:  xor    0x500(%ebp,%edi,4),%ebx
087a6b57 +0x0777:  movzbl %cl,%esi
087a6b5a +0x077a:  movzbl %ch,%edi
087a6b5d +0x077d:  xor    0x300(%ebp,%esi,4),%ebx
087a6b64 +0x0784:  add    $0x10,%edx
087a6b67 +0x0787:  xor    0x100(%ebp,%edi,4),%ebx
087a6b6e +0x078e:  xchg   %eax,%ebx
087a6b6f +0x078f:  mov    %ebx,%ecx
087a6b71 +0x0791:  mov    (%edx),%esi
087a6b73 +0x0793:  ror    $0x4,%ecx
087a6b76 +0x0796:  xor    %esi,%ecx
087a6b78 +0x0798:  and    $0x3f3f3f3f,%ecx
087a6b7e +0x079e:  movzbl %cl,%esi
087a6b81 +0x07a1:  movzbl %ch,%edi
087a6b84 +0x07a4:  xor    0x600(%ebp,%esi,4),%eax
087a6b8b +0x07ab:  shr    $0x10,%ecx
087a6b8e +0x07ae:  xor    0x400(%ebp,%edi,4),%eax
087a6b95 +0x07b5:  movzbl %cl,%esi
087a6b98 +0x07b8:  movzbl %ch,%edi
087a6b9b +0x07bb:  xor    0x200(%ebp,%esi,4),%eax
087a6ba2 +0x07c2:  mov    0x4(%edx),%esi
087a6ba5 +0x07c5:  xor    0x0(%ebp,%edi,4),%eax
087a6ba9 +0x07c9:  mov    %ebx,%ecx
087a6bab +0x07cb:  xor    %esi,%ecx
087a6bad +0x07cd:  and    $0x3f3f3f3f,%ecx
087a6bb3 +0x07d3:  movzbl %cl,%esi
087a6bb6 +0x07d6:  movzbl %ch,%edi
087a6bb9 +0x07d9:  xor    0x700(%ebp,%esi,4),%eax
087a6bc0 +0x07e0:  shr    $0x10,%ecx
087a6bc3 +0x07e3:  xor    0x500(%ebp,%edi,4),%eax
087a6bca +0x07ea:  movzbl %cl,%esi
087a6bcd +0x07ed:  movzbl %ch,%edi
087a6bd0 +0x07f0:  xor    0x300(%ebp,%esi,4),%eax
087a6bd7 +0x07f7:  mov    0x8(%edx),%esi
087a6bda +0x07fa:  xor    0x100(%ebp,%edi,4),%eax
087a6be1 +0x0801:  mov    %eax,%ecx
087a6be3 +0x0803:  ror    $0x4,%ecx
087a6be6 +0x0806:  xor    %esi,%ecx
087a6be8 +0x0808:  and    $0x3f3f3f3f,%ecx
087a6bee +0x080e:  movzbl %cl,%esi
087a6bf1 +0x0811:  movzbl %ch,%edi
087a6bf4 +0x0814:  xor    0x600(%ebp,%esi,4),%ebx
087a6bfb +0x081b:  shr    $0x10,%ecx
087a6bfe +0x081e:  xor    0x400(%ebp,%edi,4),%ebx
087a6c05 +0x0825:  movzbl %cl,%esi
087a6c08 +0x0828:  movzbl %ch,%edi
087a6c0b +0x082b:  xor    0x200(%ebp,%esi,4),%ebx
087a6c12 +0x0832:  mov    0xc(%edx),%esi
087a6c15 +0x0835:  xor    0x0(%ebp,%edi,4),%ebx
087a6c19 +0x0839:  mov    %eax,%ecx
087a6c1b +0x083b:  xor    %esi,%ecx
087a6c1d +0x083d:  and    $0x3f3f3f3f,%ecx
087a6c23 +0x0843:  movzbl %cl,%esi
087a6c26 +0x0846:  movzbl %ch,%edi
087a6c29 +0x0849:  xor    0x700(%ebp,%esi,4),%ebx
087a6c30 +0x0850:  shr    $0x10,%ecx
087a6c33 +0x0853:  xor    0x500(%ebp,%edi,4),%ebx
087a6c3a +0x085a:  movzbl %cl,%esi
087a6c3d +0x085d:  movzbl %ch,%edi
087a6c40 +0x0860:  xor    0x300(%ebp,%esi,4),%ebx
087a6c47 +0x0867:  add    $0x10,%edx
087a6c4a +0x086a:  xor    0x100(%ebp,%edi,4),%ebx
087a6c51 +0x0871:  mov    %ebx,%ecx
087a6c53 +0x0873:  mov    (%edx),%esi
087a6c55 +0x0875:  ror    $0x4,%ecx
087a6c58 +0x0878:  xor    %esi,%ecx
087a6c5a +0x087a:  and    $0x3f3f3f3f,%ecx
087a6c60 +0x0880:  movzbl %cl,%esi
087a6c63 +0x0883:  movzbl %ch,%edi
087a6c66 +0x0886:  xor    0x600(%ebp,%esi,4),%eax
087a6c6d +0x088d:  shr    $0x10,%ecx
087a6c70 +0x0890:  xor    0x400(%ebp,%edi,4),%eax
087a6c77 +0x0897:  movzbl %cl,%esi
087a6c7a +0x089a:  movzbl %ch,%edi
087a6c7d +0x089d:  xor    0x200(%ebp,%esi,4),%eax
087a6c84 +0x08a4:  mov    0x4(%edx),%esi
087a6c87 +0x08a7:  xor    0x0(%ebp,%edi,4),%eax
087a6c8b +0x08ab:  mov    %ebx,%ecx
087a6c8d +0x08ad:  xor    %esi,%ecx
087a6c8f +0x08af:  and    $0x3f3f3f3f,%ecx
087a6c95 +0x08b5:  movzbl %cl,%esi
087a6c98 +0x08b8:  movzbl %ch,%edi
087a6c9b +0x08bb:  xor    0x700(%ebp,%esi,4),%eax
087a6ca2 +0x08c2:  shr    $0x10,%ecx
087a6ca5 +0x08c5:  xor    0x500(%ebp,%edi,4),%eax
087a6cac +0x08cc:  movzbl %cl,%esi
087a6caf +0x08cf:  movzbl %ch,%edi
087a6cb2 +0x08d2:  xor    0x300(%ebp,%esi,4),%eax
087a6cb9 +0x08d9:  mov    0x8(%edx),%esi
087a6cbc +0x08dc:  xor    0x100(%ebp,%edi,4),%eax
087a6cc3 +0x08e3:  mov    %eax,%ecx
087a6cc5 +0x08e5:  ror    $0x4,%ecx
087a6cc8 +0x08e8:  xor    %esi,%ecx
087a6cca +0x08ea:  and    $0x3f3f3f3f,%ecx
087a6cd0 +0x08f0:  movzbl %cl,%esi
087a6cd3 +0x08f3:  movzbl %ch,%edi
087a6cd6 +0x08f6:  xor    0x600(%ebp,%esi,4),%ebx
087a6cdd +0x08fd:  shr    $0x10,%ecx
087a6ce0 +0x0900:  xor    0x400(%ebp,%edi,4),%ebx
087a6ce7 +0x0907:  movzbl %cl,%esi
087a6cea +0x090a:  movzbl %ch,%edi
087a6ced +0x090d:  xor    0x200(%ebp,%esi,4),%ebx
087a6cf4 +0x0914:  mov    0xc(%edx),%esi
087a6cf7 +0x0917:  xor    0x0(%ebp,%edi,4),%ebx
087a6cfb +0x091b:  mov    %eax,%ecx
087a6cfd +0x091d:  xor    %esi,%ecx
087a6cff +0x091f:  and    $0x3f3f3f3f,%ecx
087a6d05 +0x0925:  movzbl %cl,%esi
087a6d08 +0x0928:  movzbl %ch,%edi
087a6d0b +0x092b:  xor    0x700(%ebp,%esi,4),%ebx
087a6d12 +0x0932:  shr    $0x10,%ecx
087a6d15 +0x0935:  xor    0x500(%ebp,%edi,4),%ebx
087a6d1c +0x093c:  movzbl %cl,%esi
087a6d1f +0x093f:  movzbl %ch,%edi
087a6d22 +0x0942:  xor    0x300(%ebp,%esi,4),%ebx
087a6d29 +0x0949:  add    $0x10,%edx
087a6d2c +0x094c:  xor    0x100(%ebp,%edi,4),%ebx
087a6d33 +0x0953:  mov    %ebx,%ecx
087a6d35 +0x0955:  mov    (%edx),%esi
087a6d37 +0x0957:  ror    $0x4,%ecx
087a6d3a +0x095a:  xor    %esi,%ecx
087a6d3c +0x095c:  and    $0x3f3f3f3f,%ecx
087a6d42 +0x0962:  movzbl %cl,%esi
087a6d45 +0x0965:  movzbl %ch,%edi
087a6d48 +0x0968:  xor    0x600(%ebp,%esi,4),%eax
087a6d4f +0x096f:  shr    $0x10,%ecx
087a6d52 +0x0972:  xor    0x400(%ebp,%edi,4),%eax
087a6d59 +0x0979:  movzbl %cl,%esi
087a6d5c +0x097c:  movzbl %ch,%edi
087a6d5f +0x097f:  xor    0x200(%ebp,%esi,4),%eax
087a6d66 +0x0986:  mov    0x4(%edx),%esi
087a6d69 +0x0989:  xor    0x0(%ebp,%edi,4),%eax
087a6d6d +0x098d:  mov    %ebx,%ecx
087a6d6f +0x098f:  xor    %esi,%ecx
087a6d71 +0x0991:  and    $0x3f3f3f3f,%ecx
087a6d77 +0x0997:  movzbl %cl,%esi
087a6d7a +0x099a:  movzbl %ch,%edi
087a6d7d +0x099d:  xor    0x700(%ebp,%esi,4),%eax
087a6d84 +0x09a4:  shr    $0x10,%ecx
087a6d87 +0x09a7:  xor    0x500(%ebp,%edi,4),%eax
087a6d8e +0x09ae:  movzbl %cl,%esi
087a6d91 +0x09b1:  movzbl %ch,%edi
087a6d94 +0x09b4:  xor    0x300(%ebp,%esi,4),%eax
087a6d9b +0x09bb:  mov    0x8(%edx),%esi
087a6d9e +0x09be:  xor    0x100(%ebp,%edi,4),%eax
087a6da5 +0x09c5:  mov    %eax,%ecx
087a6da7 +0x09c7:  ror    $0x4,%ecx
087a6daa +0x09ca:  xor    %esi,%ecx
087a6dac +0x09cc:  and    $0x3f3f3f3f,%ecx
087a6db2 +0x09d2:  movzbl %cl,%esi
087a6db5 +0x09d5:  movzbl %ch,%edi
087a6db8 +0x09d8:  xor    0x600(%ebp,%esi,4),%ebx
087a6dbf +0x09df:  shr    $0x10,%ecx
087a6dc2 +0x09e2:  xor    0x400(%ebp,%edi,4),%ebx
087a6dc9 +0x09e9:  movzbl %cl,%esi
087a6dcc +0x09ec:  movzbl %ch,%edi
087a6dcf +0x09ef:  xor    0x200(%ebp,%esi,4),%ebx
087a6dd6 +0x09f6:  mov    0xc(%edx),%esi
087a6dd9 +0x09f9:  xor    0x0(%ebp,%edi,4),%ebx
087a6ddd +0x09fd:  mov    %eax,%ecx
087a6ddf +0x09ff:  xor    %esi,%ecx
087a6de1 +0x0a01:  and    $0x3f3f3f3f,%ecx
087a6de7 +0x0a07:  movzbl %cl,%esi
087a6dea +0x0a0a:  movzbl %ch,%edi
087a6ded +0x0a0d:  xor    0x700(%ebp,%esi,4),%ebx
087a6df4 +0x0a14:  shr    $0x10,%ecx
087a6df7 +0x0a17:  xor    0x500(%ebp,%edi,4),%ebx
087a6dfe +0x0a1e:  movzbl %cl,%esi
087a6e01 +0x0a21:  movzbl %ch,%edi
087a6e04 +0x0a24:  xor    0x300(%ebp,%esi,4),%ebx
087a6e0b +0x0a2b:  add    $0x10,%edx
087a6e0e +0x0a2e:  xor    0x100(%ebp,%edi,4),%ebx
087a6e15 +0x0a35:  mov    %ebx,%ecx
087a6e17 +0x0a37:  mov    (%edx),%esi
087a6e19 +0x0a39:  ror    $0x4,%ecx
087a6e1c +0x0a3c:  xor    %esi,%ecx
087a6e1e +0x0a3e:  and    $0x3f3f3f3f,%ecx
087a6e24 +0x0a44:  movzbl %cl,%esi
087a6e27 +0x0a47:  movzbl %ch,%edi
087a6e2a +0x0a4a:  xor    0x600(%ebp,%esi,4),%eax
087a6e31 +0x0a51:  shr    $0x10,%ecx
087a6e34 +0x0a54:  xor    0x400(%ebp,%edi,4),%eax
087a6e3b +0x0a5b:  movzbl %cl,%esi
087a6e3e +0x0a5e:  movzbl %ch,%edi
087a6e41 +0x0a61:  xor    0x200(%ebp,%esi,4),%eax
087a6e48 +0x0a68:  mov    0x4(%edx),%esi
087a6e4b +0x0a6b:  xor    0x0(%ebp,%edi,4),%eax
087a6e4f +0x0a6f:  mov    %ebx,%ecx
087a6e51 +0x0a71:  xor    %esi,%ecx
087a6e53 +0x0a73:  and    $0x3f3f3f3f,%ecx
087a6e59 +0x0a79:  movzbl %cl,%esi
087a6e5c +0x0a7c:  movzbl %ch,%edi
087a6e5f +0x0a7f:  xor    0x700(%ebp,%esi,4),%eax
087a6e66 +0x0a86:  shr    $0x10,%ecx
087a6e69 +0x0a89:  xor    0x500(%ebp,%edi,4),%eax
087a6e70 +0x0a90:  movzbl %cl,%esi
087a6e73 +0x0a93:  movzbl %ch,%edi
087a6e76 +0x0a96:  xor    0x300(%ebp,%esi,4),%eax
087a6e7d +0x0a9d:  mov    0x8(%edx),%esi
087a6e80 +0x0aa0:  xor    0x100(%ebp,%edi,4),%eax
087a6e87 +0x0aa7:  mov    %eax,%ecx
087a6e89 +0x0aa9:  ror    $0x4,%ecx
087a6e8c +0x0aac:  xor    %esi,%ecx
087a6e8e +0x0aae:  and    $0x3f3f3f3f,%ecx
087a6e94 +0x0ab4:  movzbl %cl,%esi
087a6e97 +0x0ab7:  movzbl %ch,%edi
087a6e9a +0x0aba:  xor    0x600(%ebp,%esi,4),%ebx
087a6ea1 +0x0ac1:  shr    $0x10,%ecx
087a6ea4 +0x0ac4:  xor    0x400(%ebp,%edi,4),%ebx
087a6eab +0x0acb:  movzbl %cl,%esi
087a6eae +0x0ace:  movzbl %ch,%edi
087a6eb1 +0x0ad1:  xor    0x200(%ebp,%esi,4),%ebx
087a6eb8 +0x0ad8:  mov    0xc(%edx),%esi
087a6ebb +0x0adb:  xor    0x0(%ebp,%edi,4),%ebx
087a6ebf +0x0adf:  mov    %eax,%ecx
087a6ec1 +0x0ae1:  xor    %esi,%ecx
087a6ec3 +0x0ae3:  and    $0x3f3f3f3f,%ecx
087a6ec9 +0x0ae9:  movzbl %cl,%esi
087a6ecc +0x0aec:  movzbl %ch,%edi
087a6ecf +0x0aef:  xor    0x700(%ebp,%esi,4),%ebx
087a6ed6 +0x0af6:  shr    $0x10,%ecx
087a6ed9 +0x0af9:  xor    0x500(%ebp,%edi,4),%ebx
087a6ee0 +0x0b00:  movzbl %cl,%esi
087a6ee3 +0x0b03:  movzbl %ch,%edi
087a6ee6 +0x0b06:  xor    0x300(%ebp,%esi,4),%ebx
087a6eed +0x0b0d:  add    $0x10,%edx
087a6ef0 +0x0b10:  xor    0x100(%ebp,%edi,4),%ebx
087a6ef7 +0x0b17:  mov    %ebx,%ecx
087a6ef9 +0x0b19:  mov    (%edx),%esi
087a6efb +0x0b1b:  ror    $0x4,%ecx
087a6efe +0x0b1e:  xor    %esi,%ecx
087a6f00 +0x0b20:  and    $0x3f3f3f3f,%ecx
087a6f06 +0x0b26:  movzbl %cl,%esi
087a6f09 +0x0b29:  movzbl %ch,%edi
087a6f0c +0x0b2c:  xor    0x600(%ebp,%esi,4),%eax
087a6f13 +0x0b33:  shr    $0x10,%ecx
087a6f16 +0x0b36:  xor    0x400(%ebp,%edi,4),%eax
087a6f1d +0x0b3d:  movzbl %cl,%esi
087a6f20 +0x0b40:  movzbl %ch,%edi
087a6f23 +0x0b43:  xor    0x200(%ebp,%esi,4),%eax
087a6f2a +0x0b4a:  mov    0x4(%edx),%esi
087a6f2d +0x0b4d:  xor    0x0(%ebp,%edi,4),%eax
087a6f31 +0x0b51:  mov    %ebx,%ecx
087a6f33 +0x0b53:  xor    %esi,%ecx
087a6f35 +0x0b55:  and    $0x3f3f3f3f,%ecx
087a6f3b +0x0b5b:  movzbl %cl,%esi
087a6f3e +0x0b5e:  movzbl %ch,%edi
087a6f41 +0x0b61:  xor    0x700(%ebp,%esi,4),%eax
087a6f48 +0x0b68:  shr    $0x10,%ecx
087a6f4b +0x0b6b:  xor    0x500(%ebp,%edi,4),%eax
087a6f52 +0x0b72:  movzbl %cl,%esi
087a6f55 +0x0b75:  movzbl %ch,%edi
087a6f58 +0x0b78:  xor    0x300(%ebp,%esi,4),%eax
087a6f5f +0x0b7f:  mov    0x8(%edx),%esi
087a6f62 +0x0b82:  xor    0x100(%ebp,%edi,4),%eax
087a6f69 +0x0b89:  mov    %eax,%ecx
087a6f6b +0x0b8b:  ror    $0x4,%ecx
087a6f6e +0x0b8e:  xor    %esi,%ecx
087a6f70 +0x0b90:  and    $0x3f3f3f3f,%ecx
087a6f76 +0x0b96:  movzbl %cl,%esi
087a6f79 +0x0b99:  movzbl %ch,%edi
087a6f7c +0x0b9c:  xor    0x600(%ebp,%esi,4),%ebx
087a6f83 +0x0ba3:  shr    $0x10,%ecx
087a6f86 +0x0ba6:  xor    0x400(%ebp,%edi,4),%ebx
087a6f8d +0x0bad:  movzbl %cl,%esi
087a6f90 +0x0bb0:  movzbl %ch,%edi
087a6f93 +0x0bb3:  xor    0x200(%ebp,%esi,4),%ebx
087a6f9a +0x0bba:  mov    0xc(%edx),%esi
087a6f9d +0x0bbd:  xor    0x0(%ebp,%edi,4),%ebx
087a6fa1 +0x0bc1:  mov    %eax,%ecx
087a6fa3 +0x0bc3:  xor    %esi,%ecx
087a6fa5 +0x0bc5:  and    $0x3f3f3f3f,%ecx
087a6fab +0x0bcb:  movzbl %cl,%esi
087a6fae +0x0bce:  movzbl %ch,%edi
087a6fb1 +0x0bd1:  xor    0x700(%ebp,%esi,4),%ebx
087a6fb8 +0x0bd8:  shr    $0x10,%ecx
087a6fbb +0x0bdb:  xor    0x500(%ebp,%edi,4),%ebx
087a6fc2 +0x0be2:  movzbl %cl,%esi
087a6fc5 +0x0be5:  movzbl %ch,%edi
087a6fc8 +0x0be8:  xor    0x300(%ebp,%esi,4),%ebx
087a6fcf +0x0bef:  add    $0x10,%edx
087a6fd2 +0x0bf2:  xor    0x100(%ebp,%edi,4),%ebx
087a6fd9 +0x0bf9:  mov    %ebx,%ecx
087a6fdb +0x0bfb:  mov    (%edx),%esi
087a6fdd +0x0bfd:  ror    $0x4,%ecx
087a6fe0 +0x0c00:  xor    %esi,%ecx
087a6fe2 +0x0c02:  and    $0x3f3f3f3f,%ecx
087a6fe8 +0x0c08:  movzbl %cl,%esi
087a6feb +0x0c0b:  movzbl %ch,%edi
087a6fee +0x0c0e:  xor    0x600(%ebp,%esi,4),%eax
087a6ff5 +0x0c15:  shr    $0x10,%ecx
087a6ff8 +0x0c18:  xor    0x400(%ebp,%edi,4),%eax
087a6fff +0x0c1f:  movzbl %cl,%esi
087a7002 +0x0c22:  movzbl %ch,%edi
087a7005 +0x0c25:  xor    0x200(%ebp,%esi,4),%eax
087a700c +0x0c2c:  mov    0x4(%edx),%esi
087a700f +0x0c2f:  xor    0x0(%ebp,%edi,4),%eax
087a7013 +0x0c33:  mov    %ebx,%ecx
087a7015 +0x0c35:  xor    %esi,%ecx
087a7017 +0x0c37:  and    $0x3f3f3f3f,%ecx
087a701d +0x0c3d:  movzbl %cl,%esi
087a7020 +0x0c40:  movzbl %ch,%edi
087a7023 +0x0c43:  xor    0x700(%ebp,%esi,4),%eax
087a702a +0x0c4a:  shr    $0x10,%ecx
087a702d +0x0c4d:  xor    0x500(%ebp,%edi,4),%eax
087a7034 +0x0c54:  movzbl %cl,%esi
087a7037 +0x0c57:  movzbl %ch,%edi
087a703a +0x0c5a:  xor    0x300(%ebp,%esi,4),%eax
087a7041 +0x0c61:  mov    0x8(%edx),%esi
087a7044 +0x0c64:  xor    0x100(%ebp,%edi,4),%eax
087a704b +0x0c6b:  mov    %eax,%ecx
087a704d +0x0c6d:  ror    $0x4,%ecx
087a7050 +0x0c70:  xor    %esi,%ecx
087a7052 +0x0c72:  and    $0x3f3f3f3f,%ecx
087a7058 +0x0c78:  movzbl %cl,%esi
087a705b +0x0c7b:  movzbl %ch,%edi
087a705e +0x0c7e:  xor    0x600(%ebp,%esi,4),%ebx
087a7065 +0x0c85:  shr    $0x10,%ecx
087a7068 +0x0c88:  xor    0x400(%ebp,%edi,4),%ebx
087a706f +0x0c8f:  movzbl %cl,%esi
087a7072 +0x0c92:  movzbl %ch,%edi
087a7075 +0x0c95:  xor    0x200(%ebp,%esi,4),%ebx
087a707c +0x0c9c:  mov    0xc(%edx),%esi
087a707f +0x0c9f:  xor    0x0(%ebp,%edi,4),%ebx
087a7083 +0x0ca3:  mov    %eax,%ecx
087a7085 +0x0ca5:  xor    %esi,%ecx
087a7087 +0x0ca7:  and    $0x3f3f3f3f,%ecx
087a708d +0x0cad:  movzbl %cl,%esi
087a7090 +0x0cb0:  movzbl %ch,%edi
087a7093 +0x0cb3:  xor    0x700(%ebp,%esi,4),%ebx
087a709a +0x0cba:  shr    $0x10,%ecx
087a709d +0x0cbd:  xor    0x500(%ebp,%edi,4),%ebx
087a70a4 +0x0cc4:  movzbl %cl,%esi
087a70a7 +0x0cc7:  movzbl %ch,%edi
087a70aa +0x0cca:  xor    0x300(%ebp,%esi,4),%ebx
087a70b1 +0x0cd1:  add    $0x10,%edx
087a70b4 +0x0cd4:  xor    0x100(%ebp,%edi,4),%ebx
087a70bb +0x0cdb:  mov    %ebx,%ecx
087a70bd +0x0cdd:  mov    (%edx),%esi
087a70bf +0x0cdf:  ror    $0x4,%ecx
087a70c2 +0x0ce2:  xor    %esi,%ecx
087a70c4 +0x0ce4:  and    $0x3f3f3f3f,%ecx
087a70ca +0x0cea:  movzbl %cl,%esi
087a70cd +0x0ced:  movzbl %ch,%edi
087a70d0 +0x0cf0:  xor    0x600(%ebp,%esi,4),%eax
087a70d7 +0x0cf7:  shr    $0x10,%ecx
087a70da +0x0cfa:  xor    0x400(%ebp,%edi,4),%eax
087a70e1 +0x0d01:  movzbl %cl,%esi
087a70e4 +0x0d04:  movzbl %ch,%edi
087a70e7 +0x0d07:  xor    0x200(%ebp,%esi,4),%eax
087a70ee +0x0d0e:  mov    0x4(%edx),%esi
087a70f1 +0x0d11:  xor    0x0(%ebp,%edi,4),%eax
087a70f5 +0x0d15:  mov    %ebx,%ecx
087a70f7 +0x0d17:  xor    %esi,%ecx
087a70f9 +0x0d19:  and    $0x3f3f3f3f,%ecx
087a70ff +0x0d1f:  movzbl %cl,%esi
087a7102 +0x0d22:  movzbl %ch,%edi
087a7105 +0x0d25:  xor    0x700(%ebp,%esi,4),%eax
087a710c +0x0d2c:  shr    $0x10,%ecx
087a710f +0x0d2f:  xor    0x500(%ebp,%edi,4),%eax
087a7116 +0x0d36:  movzbl %cl,%esi
087a7119 +0x0d39:  movzbl %ch,%edi
087a711c +0x0d3c:  xor    0x300(%ebp,%esi,4),%eax
087a7123 +0x0d43:  mov    0x8(%edx),%esi
087a7126 +0x0d46:  xor    0x100(%ebp,%edi,4),%eax
087a712d +0x0d4d:  mov    %eax,%ecx
087a712f +0x0d4f:  ror    $0x4,%ecx
087a7132 +0x0d52:  xor    %esi,%ecx
087a7134 +0x0d54:  and    $0x3f3f3f3f,%ecx
087a713a +0x0d5a:  movzbl %cl,%esi
087a713d +0x0d5d:  movzbl %ch,%edi
087a7140 +0x0d60:  xor    0x600(%ebp,%esi,4),%ebx
087a7147 +0x0d67:  shr    $0x10,%ecx
087a714a +0x0d6a:  xor    0x400(%ebp,%edi,4),%ebx
087a7151 +0x0d71:  movzbl %cl,%esi
087a7154 +0x0d74:  movzbl %ch,%edi
087a7157 +0x0d77:  xor    0x200(%ebp,%esi,4),%ebx
087a715e +0x0d7e:  mov    0xc(%edx),%esi
087a7161 +0x0d81:  xor    0x0(%ebp,%edi,4),%ebx
087a7165 +0x0d85:  mov    %eax,%ecx
087a7167 +0x0d87:  xor    %esi,%ecx
087a7169 +0x0d89:  and    $0x3f3f3f3f,%ecx
087a716f +0x0d8f:  movzbl %cl,%esi
087a7172 +0x0d92:  movzbl %ch,%edi
087a7175 +0x0d95:  xor    0x700(%ebp,%esi,4),%ebx
087a717c +0x0d9c:  shr    $0x10,%ecx
087a717f +0x0d9f:  xor    0x500(%ebp,%edi,4),%ebx
087a7186 +0x0da6:  movzbl %cl,%esi
087a7189 +0x0da9:  movzbl %ch,%edi
087a718c +0x0dac:  xor    0x300(%ebp,%esi,4),%ebx
087a7193 +0x0db3:  add    $0x10,%edx
087a7196 +0x0db6:  xor    0x100(%ebp,%edi,4),%ebx
087a719d +0x0dbd:  mov    %ebx,%ecx
087a719f +0x0dbf:  mov    (%edx),%esi
087a71a1 +0x0dc1:  ror    $0x4,%ecx
087a71a4 +0x0dc4:  xor    %esi,%ecx
087a71a6 +0x0dc6:  and    $0x3f3f3f3f,%ecx
087a71ac +0x0dcc:  movzbl %cl,%esi
087a71af +0x0dcf:  movzbl %ch,%edi
087a71b2 +0x0dd2:  xor    0x600(%ebp,%esi,4),%eax
087a71b9 +0x0dd9:  shr    $0x10,%ecx
087a71bc +0x0ddc:  xor    0x400(%ebp,%edi,4),%eax
087a71c3 +0x0de3:  movzbl %cl,%esi
087a71c6 +0x0de6:  movzbl %ch,%edi
087a71c9 +0x0de9:  xor    0x200(%ebp,%esi,4),%eax
087a71d0 +0x0df0:  mov    0x4(%edx),%esi
087a71d3 +0x0df3:  xor    0x0(%ebp,%edi,4),%eax
087a71d7 +0x0df7:  mov    %ebx,%ecx
087a71d9 +0x0df9:  xor    %esi,%ecx
087a71db +0x0dfb:  and    $0x3f3f3f3f,%ecx
087a71e1 +0x0e01:  movzbl %cl,%esi
087a71e4 +0x0e04:  movzbl %ch,%edi
087a71e7 +0x0e07:  xor    0x700(%ebp,%esi,4),%eax
087a71ee +0x0e0e:  shr    $0x10,%ecx
087a71f1 +0x0e11:  xor    0x500(%ebp,%edi,4),%eax
087a71f8 +0x0e18:  movzbl %cl,%esi
087a71fb +0x0e1b:  movzbl %ch,%edi
087a71fe +0x0e1e:  xor    0x300(%ebp,%esi,4),%eax
087a7205 +0x0e25:  mov    0x8(%edx),%esi
087a7208 +0x0e28:  xor    0x100(%ebp,%edi,4),%eax
087a720f +0x0e2f:  mov    %eax,%ecx
087a7211 +0x0e31:  ror    $0x4,%ecx
087a7214 +0x0e34:  xor    %esi,%ecx
087a7216 +0x0e36:  and    $0x3f3f3f3f,%ecx
087a721c +0x0e3c:  movzbl %cl,%esi
087a721f +0x0e3f:  movzbl %ch,%edi
087a7222 +0x0e42:  xor    0x600(%ebp,%esi,4),%ebx
087a7229 +0x0e49:  shr    $0x10,%ecx
087a722c +0x0e4c:  xor    0x400(%ebp,%edi,4),%ebx
087a7233 +0x0e53:  movzbl %cl,%esi
087a7236 +0x0e56:  movzbl %ch,%edi
087a7239 +0x0e59:  xor    0x200(%ebp,%esi,4),%ebx
087a7240 +0x0e60:  mov    0xc(%edx),%esi
087a7243 +0x0e63:  xor    0x0(%ebp,%edi,4),%ebx
087a7247 +0x0e67:  mov    %eax,%ecx
087a7249 +0x0e69:  xor    %esi,%ecx
087a724b +0x0e6b:  and    $0x3f3f3f3f,%ecx
087a7251 +0x0e71:  movzbl %cl,%esi
087a7254 +0x0e74:  movzbl %ch,%edi
087a7257 +0x0e77:  xor    0x700(%ebp,%esi,4),%ebx
087a725e +0x0e7e:  shr    $0x10,%ecx
087a7261 +0x0e81:  xor    0x500(%ebp,%edi,4),%ebx
087a7268 +0x0e88:  movzbl %cl,%esi
087a726b +0x0e8b:  movzbl %ch,%edi
087a726e +0x0e8e:  xor    0x300(%ebp,%esi,4),%ebx
087a7275 +0x0e95:  add    $0x10,%edx
087a7278 +0x0e98:  xor    0x100(%ebp,%edi,4),%ebx
087a727f +0x0e9f:  xchg   %eax,%ebx
087a7280 +0x0ea0:  mov    %ebx,%ecx
087a7282 +0x0ea2:  mov    (%edx),%esi
087a7284 +0x0ea4:  ror    $0x4,%ecx
087a7287 +0x0ea7:  xor    %esi,%ecx
087a7289 +0x0ea9:  and    $0x3f3f3f3f,%ecx
087a728f +0x0eaf:  movzbl %cl,%esi
087a7292 +0x0eb2:  movzbl %ch,%edi
087a7295 +0x0eb5:  xor    0x600(%ebp,%esi,4),%eax
087a729c +0x0ebc:  shr    $0x10,%ecx
087a729f +0x0ebf:  xor    0x400(%ebp,%edi,4),%eax
087a72a6 +0x0ec6:  movzbl %cl,%esi
087a72a9 +0x0ec9:  movzbl %ch,%edi
087a72ac +0x0ecc:  xor    0x200(%ebp,%esi,4),%eax
087a72b3 +0x0ed3:  mov    0x4(%edx),%esi
087a72b6 +0x0ed6:  xor    0x0(%ebp,%edi,4),%eax
087a72ba +0x0eda:  mov    %ebx,%ecx
087a72bc +0x0edc:  xor    %esi,%ecx
087a72be +0x0ede:  and    $0x3f3f3f3f,%ecx
087a72c4 +0x0ee4:  movzbl %cl,%esi
087a72c7 +0x0ee7:  movzbl %ch,%edi
087a72ca +0x0eea:  xor    0x700(%ebp,%esi,4),%eax
087a72d1 +0x0ef1:  shr    $0x10,%ecx
087a72d4 +0x0ef4:  xor    0x500(%ebp,%edi,4),%eax
087a72db +0x0efb:  movzbl %cl,%esi
087a72de +0x0efe:  movzbl %ch,%edi
087a72e1 +0x0f01:  xor    0x300(%ebp,%esi,4),%eax
087a72e8 +0x0f08:  mov    0x8(%edx),%esi
087a72eb +0x0f0b:  xor    0x100(%ebp,%edi,4),%eax
087a72f2 +0x0f12:  mov    %eax,%ecx
087a72f4 +0x0f14:  ror    $0x4,%ecx
087a72f7 +0x0f17:  xor    %esi,%ecx
087a72f9 +0x0f19:  and    $0x3f3f3f3f,%ecx
087a72ff +0x0f1f:  movzbl %cl,%esi
087a7302 +0x0f22:  movzbl %ch,%edi
087a7305 +0x0f25:  xor    0x600(%ebp,%esi,4),%ebx
087a730c +0x0f2c:  shr    $0x10,%ecx
087a730f +0x0f2f:  xor    0x400(%ebp,%edi,4),%ebx
087a7316 +0x0f36:  movzbl %cl,%esi
087a7319 +0x0f39:  movzbl %ch,%edi
087a731c +0x0f3c:  xor    0x200(%ebp,%esi,4),%ebx
087a7323 +0x0f43:  mov    0xc(%edx),%esi
087a7326 +0x0f46:  xor    0x0(%ebp,%edi,4),%ebx
087a732a +0x0f4a:  mov    %eax,%ecx
087a732c +0x0f4c:  xor    %esi,%ecx
087a732e +0x0f4e:  and    $0x3f3f3f3f,%ecx
087a7334 +0x0f54:  movzbl %cl,%esi
087a7337 +0x0f57:  movzbl %ch,%edi
087a733a +0x0f5a:  xor    0x700(%ebp,%esi,4),%ebx
087a7341 +0x0f61:  shr    $0x10,%ecx
087a7344 +0x0f64:  xor    0x500(%ebp,%edi,4),%ebx
087a734b +0x0f6b:  movzbl %cl,%esi
087a734e +0x0f6e:  movzbl %ch,%edi
087a7351 +0x0f71:  xor    0x300(%ebp,%esi,4),%ebx
087a7358 +0x0f78:  add    $0x10,%edx
087a735b +0x0f7b:  xor    0x100(%ebp,%edi,4),%ebx
087a7362 +0x0f82:  mov    %ebx,%ecx
087a7364 +0x0f84:  mov    (%edx),%esi
087a7366 +0x0f86:  ror    $0x4,%ecx
087a7369 +0x0f89:  xor    %esi,%ecx
087a736b +0x0f8b:  and    $0x3f3f3f3f,%ecx
087a7371 +0x0f91:  movzbl %cl,%esi
087a7374 +0x0f94:  movzbl %ch,%edi
087a7377 +0x0f97:  xor    0x600(%ebp,%esi,4),%eax
087a737e +0x0f9e:  shr    $0x10,%ecx
087a7381 +0x0fa1:  xor    0x400(%ebp,%edi,4),%eax
087a7388 +0x0fa8:  movzbl %cl,%esi
087a738b +0x0fab:  movzbl %ch,%edi
087a738e +0x0fae:  xor    0x200(%ebp,%esi,4),%eax
087a7395 +0x0fb5:  mov    0x4(%edx),%esi
087a7398 +0x0fb8:  xor    0x0(%ebp,%edi,4),%eax
087a739c +0x0fbc:  mov    %ebx,%ecx
087a739e +0x0fbe:  xor    %esi,%ecx
087a73a0 +0x0fc0:  and    $0x3f3f3f3f,%ecx
087a73a6 +0x0fc6:  movzbl %cl,%esi
087a73a9 +0x0fc9:  movzbl %ch,%edi
087a73ac +0x0fcc:  xor    0x700(%ebp,%esi,4),%eax
087a73b3 +0x0fd3:  shr    $0x10,%ecx
087a73b6 +0x0fd6:  xor    0x500(%ebp,%edi,4),%eax
087a73bd +0x0fdd:  movzbl %cl,%esi
087a73c0 +0x0fe0:  movzbl %ch,%edi
087a73c3 +0x0fe3:  xor    0x300(%ebp,%esi,4),%eax
087a73ca +0x0fea:  mov    0x8(%edx),%esi
087a73cd +0x0fed:  xor    0x100(%ebp,%edi,4),%eax
087a73d4 +0x0ff4:  mov    %eax,%ecx
087a73d6 +0x0ff6:  ror    $0x4,%ecx
087a73d9 +0x0ff9:  xor    %esi,%ecx
087a73db +0x0ffb:  and    $0x3f3f3f3f,%ecx
087a73e1 +0x1001:  movzbl %cl,%esi
087a73e4 +0x1004:  movzbl %ch,%edi
087a73e7 +0x1007:  xor    0x600(%ebp,%esi,4),%ebx
087a73ee +0x100e:  shr    $0x10,%ecx
087a73f1 +0x1011:  xor    0x400(%ebp,%edi,4),%ebx
087a73f8 +0x1018:  movzbl %cl,%esi
087a73fb +0x101b:  movzbl %ch,%edi
087a73fe +0x101e:  xor    0x200(%ebp,%esi,4),%ebx
087a7405 +0x1025:  mov    0xc(%edx),%esi
087a7408 +0x1028:  xor    0x0(%ebp,%edi,4),%ebx
087a740c +0x102c:  mov    %eax,%ecx
087a740e +0x102e:  xor    %esi,%ecx
087a7410 +0x1030:  and    $0x3f3f3f3f,%ecx
087a7416 +0x1036:  movzbl %cl,%esi
087a7419 +0x1039:  movzbl %ch,%edi
087a741c +0x103c:  xor    0x700(%ebp,%esi,4),%ebx
087a7423 +0x1043:  shr    $0x10,%ecx
087a7426 +0x1046:  xor    0x500(%ebp,%edi,4),%ebx
087a742d +0x104d:  movzbl %cl,%esi
087a7430 +0x1050:  movzbl %ch,%edi
087a7433 +0x1053:  xor    0x300(%ebp,%esi,4),%ebx
087a743a +0x105a:  add    $0x10,%edx
087a743d +0x105d:  xor    0x100(%ebp,%edi,4),%ebx
087a7444 +0x1064:  mov    %ebx,%ecx
087a7446 +0x1066:  mov    (%edx),%esi
087a7448 +0x1068:  ror    $0x4,%ecx
087a744b +0x106b:  xor    %esi,%ecx
087a744d +0x106d:  and    $0x3f3f3f3f,%ecx
087a7453 +0x1073:  movzbl %cl,%esi
087a7456 +0x1076:  movzbl %ch,%edi
087a7459 +0x1079:  xor    0x600(%ebp,%esi,4),%eax
087a7460 +0x1080:  shr    $0x10,%ecx
087a7463 +0x1083:  xor    0x400(%ebp,%edi,4),%eax
087a746a +0x108a:  movzbl %cl,%esi
087a746d +0x108d:  movzbl %ch,%edi
087a7470 +0x1090:  xor    0x200(%ebp,%esi,4),%eax
087a7477 +0x1097:  mov    0x4(%edx),%esi
087a747a +0x109a:  xor    0x0(%ebp,%edi,4),%eax
087a747e +0x109e:  mov    %ebx,%ecx
087a7480 +0x10a0:  xor    %esi,%ecx
087a7482 +0x10a2:  and    $0x3f3f3f3f,%ecx
087a7488 +0x10a8:  movzbl %cl,%esi
087a748b +0x10ab:  movzbl %ch,%edi
087a748e +0x10ae:  xor    0x700(%ebp,%esi,4),%eax
087a7495 +0x10b5:  shr    $0x10,%ecx
087a7498 +0x10b8:  xor    0x500(%ebp,%edi,4),%eax
087a749f +0x10bf:  movzbl %cl,%esi
087a74a2 +0x10c2:  movzbl %ch,%edi
087a74a5 +0x10c5:  xor    0x300(%ebp,%esi,4),%eax
087a74ac +0x10cc:  mov    0x8(%edx),%esi
087a74af +0x10cf:  xor    0x100(%ebp,%edi,4),%eax
087a74b6 +0x10d6:  mov    %eax,%ecx
087a74b8 +0x10d8:  ror    $0x4,%ecx
087a74bb +0x10db:  xor    %esi,%ecx
087a74bd +0x10dd:  and    $0x3f3f3f3f,%ecx
087a74c3 +0x10e3:  movzbl %cl,%esi
087a74c6 +0x10e6:  movzbl %ch,%edi
087a74c9 +0x10e9:  xor    0x600(%ebp,%esi,4),%ebx
087a74d0 +0x10f0:  shr    $0x10,%ecx
087a74d3 +0x10f3:  xor    0x400(%ebp,%edi,4),%ebx
087a74da +0x10fa:  movzbl %cl,%esi
087a74dd +0x10fd:  movzbl %ch,%edi
087a74e0 +0x1100:  xor    0x200(%ebp,%esi,4),%ebx
087a74e7 +0x1107:  mov    0xc(%edx),%esi
087a74ea +0x110a:  xor    0x0(%ebp,%edi,4),%ebx
087a74ee +0x110e:  mov    %eax,%ecx
087a74f0 +0x1110:  xor    %esi,%ecx
087a74f2 +0x1112:  and    $0x3f3f3f3f,%ecx
087a74f8 +0x1118:  movzbl %cl,%esi
087a74fb +0x111b:  movzbl %ch,%edi
087a74fe +0x111e:  xor    0x700(%ebp,%esi,4),%ebx
087a7505 +0x1125:  shr    $0x10,%ecx
087a7508 +0x1128:  xor    0x500(%ebp,%edi,4),%ebx
087a750f +0x112f:  movzbl %cl,%esi
087a7512 +0x1132:  movzbl %ch,%edi
087a7515 +0x1135:  xor    0x300(%ebp,%esi,4),%ebx
087a751c +0x113c:  add    $0x10,%edx
087a751f +0x113f:  xor    0x100(%ebp,%edi,4),%ebx
087a7526 +0x1146:  mov    %ebx,%ecx
087a7528 +0x1148:  mov    (%edx),%esi
087a752a +0x114a:  ror    $0x4,%ecx
087a752d +0x114d:  xor    %esi,%ecx
087a752f +0x114f:  and    $0x3f3f3f3f,%ecx
087a7535 +0x1155:  movzbl %cl,%esi
087a7538 +0x1158:  movzbl %ch,%edi
087a753b +0x115b:  xor    0x600(%ebp,%esi,4),%eax
087a7542 +0x1162:  shr    $0x10,%ecx
087a7545 +0x1165:  xor    0x400(%ebp,%edi,4),%eax
087a754c +0x116c:  movzbl %cl,%esi
087a754f +0x116f:  movzbl %ch,%edi
087a7552 +0x1172:  xor    0x200(%ebp,%esi,4),%eax
087a7559 +0x1179:  mov    0x4(%edx),%esi
087a755c +0x117c:  xor    0x0(%ebp,%edi,4),%eax
087a7560 +0x1180:  mov    %ebx,%ecx
087a7562 +0x1182:  xor    %esi,%ecx
087a7564 +0x1184:  and    $0x3f3f3f3f,%ecx
087a756a +0x118a:  movzbl %cl,%esi
087a756d +0x118d:  movzbl %ch,%edi
087a7570 +0x1190:  xor    0x700(%ebp,%esi,4),%eax
087a7577 +0x1197:  shr    $0x10,%ecx
087a757a +0x119a:  xor    0x500(%ebp,%edi,4),%eax
087a7581 +0x11a1:  movzbl %cl,%esi
087a7584 +0x11a4:  movzbl %ch,%edi
087a7587 +0x11a7:  xor    0x300(%ebp,%esi,4),%eax
087a758e +0x11ae:  mov    0x8(%edx),%esi
087a7591 +0x11b1:  xor    0x100(%ebp,%edi,4),%eax
087a7598 +0x11b8:  mov    %eax,%ecx
087a759a +0x11ba:  ror    $0x4,%ecx
087a759d +0x11bd:  xor    %esi,%ecx
087a759f +0x11bf:  and    $0x3f3f3f3f,%ecx
087a75a5 +0x11c5:  movzbl %cl,%esi
087a75a8 +0x11c8:  movzbl %ch,%edi
087a75ab +0x11cb:  xor    0x600(%ebp,%esi,4),%ebx
087a75b2 +0x11d2:  shr    $0x10,%ecx
087a75b5 +0x11d5:  xor    0x400(%ebp,%edi,4),%ebx
087a75bc +0x11dc:  movzbl %cl,%esi
087a75bf +0x11df:  movzbl %ch,%edi
087a75c2 +0x11e2:  xor    0x200(%ebp,%esi,4),%ebx
087a75c9 +0x11e9:  mov    0xc(%edx),%esi
087a75cc +0x11ec:  xor    0x0(%ebp,%edi,4),%ebx
087a75d0 +0x11f0:  mov    %eax,%ecx
087a75d2 +0x11f2:  xor    %esi,%ecx
087a75d4 +0x11f4:  and    $0x3f3f3f3f,%ecx
087a75da +0x11fa:  movzbl %cl,%esi
087a75dd +0x11fd:  movzbl %ch,%edi
087a75e0 +0x1200:  xor    0x700(%ebp,%esi,4),%ebx
087a75e7 +0x1207:  shr    $0x10,%ecx
087a75ea +0x120a:  xor    0x500(%ebp,%edi,4),%ebx
087a75f1 +0x1211:  movzbl %cl,%esi
087a75f4 +0x1214:  movzbl %ch,%edi
087a75f7 +0x1217:  xor    0x300(%ebp,%esi,4),%ebx
087a75fe +0x121e:  add    $0x10,%edx
087a7601 +0x1221:  xor    0x100(%ebp,%edi,4),%ebx
087a7608 +0x1228:  mov    %ebx,%ecx
087a760a +0x122a:  mov    (%edx),%esi
087a760c +0x122c:  ror    $0x4,%ecx
087a760f +0x122f:  xor    %esi,%ecx
087a7611 +0x1231:  and    $0x3f3f3f3f,%ecx
087a7617 +0x1237:  movzbl %cl,%esi
087a761a +0x123a:  movzbl %ch,%edi
087a761d +0x123d:  xor    0x600(%ebp,%esi,4),%eax
087a7624 +0x1244:  shr    $0x10,%ecx
087a7627 +0x1247:  xor    0x400(%ebp,%edi,4),%eax
087a762e +0x124e:  movzbl %cl,%esi
087a7631 +0x1251:  movzbl %ch,%edi
087a7634 +0x1254:  xor    0x200(%ebp,%esi,4),%eax
087a763b +0x125b:  mov    0x4(%edx),%esi
087a763e +0x125e:  xor    0x0(%ebp,%edi,4),%eax
087a7642 +0x1262:  mov    %ebx,%ecx
087a7644 +0x1264:  xor    %esi,%ecx
087a7646 +0x1266:  and    $0x3f3f3f3f,%ecx
087a764c +0x126c:  movzbl %cl,%esi
087a764f +0x126f:  movzbl %ch,%edi
087a7652 +0x1272:  xor    0x700(%ebp,%esi,4),%eax
087a7659 +0x1279:  shr    $0x10,%ecx
087a765c +0x127c:  xor    0x500(%ebp,%edi,4),%eax
087a7663 +0x1283:  movzbl %cl,%esi
087a7666 +0x1286:  movzbl %ch,%edi
087a7669 +0x1289:  xor    0x300(%ebp,%esi,4),%eax
087a7670 +0x1290:  mov    0x8(%edx),%esi
087a7673 +0x1293:  xor    0x100(%ebp,%edi,4),%eax
087a767a +0x129a:  mov    %eax,%ecx
087a767c +0x129c:  ror    $0x4,%ecx
087a767f +0x129f:  xor    %esi,%ecx
087a7681 +0x12a1:  and    $0x3f3f3f3f,%ecx
087a7687 +0x12a7:  movzbl %cl,%esi
087a768a +0x12aa:  movzbl %ch,%edi
087a768d +0x12ad:  xor    0x600(%ebp,%esi,4),%ebx
087a7694 +0x12b4:  shr    $0x10,%ecx
087a7697 +0x12b7:  xor    0x400(%ebp,%edi,4),%ebx
087a769e +0x12be:  movzbl %cl,%esi
087a76a1 +0x12c1:  movzbl %ch,%edi
087a76a4 +0x12c4:  xor    0x200(%ebp,%esi,4),%ebx
087a76ab +0x12cb:  mov    0xc(%edx),%esi
087a76ae +0x12ce:  xor    0x0(%ebp,%edi,4),%ebx
087a76b2 +0x12d2:  mov    %eax,%ecx
087a76b4 +0x12d4:  xor    %esi,%ecx
087a76b6 +0x12d6:  and    $0x3f3f3f3f,%ecx
087a76bc +0x12dc:  movzbl %cl,%esi
087a76bf +0x12df:  movzbl %ch,%edi
087a76c2 +0x12e2:  xor    0x700(%ebp,%esi,4),%ebx
087a76c9 +0x12e9:  shr    $0x10,%ecx
087a76cc +0x12ec:  xor    0x500(%ebp,%edi,4),%ebx
087a76d3 +0x12f3:  movzbl %cl,%esi
087a76d6 +0x12f6:  movzbl %ch,%edi
087a76d9 +0x12f9:  xor    0x300(%ebp,%esi,4),%ebx
087a76e0 +0x1300:  add    $0x10,%edx
087a76e3 +0x1303:  xor    0x100(%ebp,%edi,4),%ebx
087a76ea +0x130a:  mov    %ebx,%ecx
087a76ec +0x130c:  mov    (%edx),%esi
087a76ee +0x130e:  ror    $0x4,%ecx
087a76f1 +0x1311:  xor    %esi,%ecx
087a76f3 +0x1313:  and    $0x3f3f3f3f,%ecx
087a76f9 +0x1319:  movzbl %cl,%esi
087a76fc +0x131c:  movzbl %ch,%edi
087a76ff +0x131f:  xor    0x600(%ebp,%esi,4),%eax
087a7706 +0x1326:  shr    $0x10,%ecx
087a7709 +0x1329:  xor    0x400(%ebp,%edi,4),%eax
087a7710 +0x1330:  movzbl %cl,%esi
087a7713 +0x1333:  movzbl %ch,%edi
087a7716 +0x1336:  xor    0x200(%ebp,%esi,4),%eax
087a771d +0x133d:  mov    0x4(%edx),%esi
087a7720 +0x1340:  xor    0x0(%ebp,%edi,4),%eax
087a7724 +0x1344:  mov    %ebx,%ecx
087a7726 +0x1346:  xor    %esi,%ecx
087a7728 +0x1348:  and    $0x3f3f3f3f,%ecx
087a772e +0x134e:  movzbl %cl,%esi
087a7731 +0x1351:  movzbl %ch,%edi
087a7734 +0x1354:  xor    0x700(%ebp,%esi,4),%eax
087a773b +0x135b:  shr    $0x10,%ecx
087a773e +0x135e:  xor    0x500(%ebp,%edi,4),%eax
087a7745 +0x1365:  movzbl %cl,%esi
087a7748 +0x1368:  movzbl %ch,%edi
087a774b +0x136b:  xor    0x300(%ebp,%esi,4),%eax
087a7752 +0x1372:  mov    0x8(%edx),%esi
087a7755 +0x1375:  xor    0x100(%ebp,%edi,4),%eax
087a775c +0x137c:  mov    %eax,%ecx
087a775e +0x137e:  ror    $0x4,%ecx
087a7761 +0x1381:  xor    %esi,%ecx
087a7763 +0x1383:  and    $0x3f3f3f3f,%ecx
087a7769 +0x1389:  movzbl %cl,%esi
087a776c +0x138c:  movzbl %ch,%edi
087a776f +0x138f:  xor    0x600(%ebp,%esi,4),%ebx
087a7776 +0x1396:  shr    $0x10,%ecx
087a7779 +0x1399:  xor    0x400(%ebp,%edi,4),%ebx
087a7780 +0x13a0:  movzbl %cl,%esi
087a7783 +0x13a3:  movzbl %ch,%edi
087a7786 +0x13a6:  xor    0x200(%ebp,%esi,4),%ebx
087a778d +0x13ad:  mov    0xc(%edx),%esi
087a7790 +0x13b0:  xor    0x0(%ebp,%edi,4),%ebx
087a7794 +0x13b4:  mov    %eax,%ecx
087a7796 +0x13b6:  xor    %esi,%ecx
087a7798 +0x13b8:  and    $0x3f3f3f3f,%ecx
087a779e +0x13be:  movzbl %cl,%esi
087a77a1 +0x13c1:  movzbl %ch,%edi
087a77a4 +0x13c4:  xor    0x700(%ebp,%esi,4),%ebx
087a77ab +0x13cb:  shr    $0x10,%ecx
087a77ae +0x13ce:  xor    0x500(%ebp,%edi,4),%ebx
087a77b5 +0x13d5:  movzbl %cl,%esi
087a77b8 +0x13d8:  movzbl %ch,%edi
087a77bb +0x13db:  xor    0x300(%ebp,%esi,4),%ebx
087a77c2 +0x13e2:  add    $0x10,%edx
087a77c5 +0x13e5:  xor    0x100(%ebp,%edi,4),%ebx
087a77cc +0x13ec:  mov    %ebx,%ecx
087a77ce +0x13ee:  mov    (%edx),%esi
087a77d0 +0x13f0:  ror    $0x4,%ecx
087a77d3 +0x13f3:  xor    %esi,%ecx
087a77d5 +0x13f5:  and    $0x3f3f3f3f,%ecx
087a77db +0x13fb:  movzbl %cl,%esi
087a77de +0x13fe:  movzbl %ch,%edi
087a77e1 +0x1401:  xor    0x600(%ebp,%esi,4),%eax
087a77e8 +0x1408:  shr    $0x10,%ecx
087a77eb +0x140b:  xor    0x400(%ebp,%edi,4),%eax
087a77f2 +0x1412:  movzbl %cl,%esi
087a77f5 +0x1415:  movzbl %ch,%edi
087a77f8 +0x1418:  xor    0x200(%ebp,%esi,4),%eax
087a77ff +0x141f:  mov    0x4(%edx),%esi
087a7802 +0x1422:  xor    0x0(%ebp,%edi,4),%eax
087a7806 +0x1426:  mov    %ebx,%ecx
087a7808 +0x1428:  xor    %esi,%ecx
087a780a +0x142a:  and    $0x3f3f3f3f,%ecx
087a7810 +0x1430:  movzbl %cl,%esi
087a7813 +0x1433:  movzbl %ch,%edi
087a7816 +0x1436:  xor    0x700(%ebp,%esi,4),%eax
087a781d +0x143d:  shr    $0x10,%ecx
087a7820 +0x1440:  xor    0x500(%ebp,%edi,4),%eax
087a7827 +0x1447:  movzbl %cl,%esi
087a782a +0x144a:  movzbl %ch,%edi
087a782d +0x144d:  xor    0x300(%ebp,%esi,4),%eax
087a7834 +0x1454:  mov    0x8(%edx),%esi
087a7837 +0x1457:  xor    0x100(%ebp,%edi,4),%eax
087a783e +0x145e:  mov    %eax,%ecx
087a7840 +0x1460:  ror    $0x4,%ecx
087a7843 +0x1463:  xor    %esi,%ecx
087a7845 +0x1465:  and    $0x3f3f3f3f,%ecx
087a784b +0x146b:  movzbl %cl,%esi
087a784e +0x146e:  movzbl %ch,%edi
087a7851 +0x1471:  xor    0x600(%ebp,%esi,4),%ebx
087a7858 +0x1478:  shr    $0x10,%ecx
087a785b +0x147b:  xor    0x400(%ebp,%edi,4),%ebx
087a7862 +0x1482:  movzbl %cl,%esi
087a7865 +0x1485:  movzbl %ch,%edi
087a7868 +0x1488:  xor    0x200(%ebp,%esi,4),%ebx
087a786f +0x148f:  mov    0xc(%edx),%esi
087a7872 +0x1492:  xor    0x0(%ebp,%edi,4),%ebx
087a7876 +0x1496:  mov    %eax,%ecx
087a7878 +0x1498:  xor    %esi,%ecx
087a787a +0x149a:  and    $0x3f3f3f3f,%ecx
087a7880 +0x14a0:  movzbl %cl,%esi
087a7883 +0x14a3:  movzbl %ch,%edi
087a7886 +0x14a6:  xor    0x700(%ebp,%esi,4),%ebx
087a788d +0x14ad:  shr    $0x10,%ecx
087a7890 +0x14b0:  xor    0x500(%ebp,%edi,4),%ebx
087a7897 +0x14b7:  movzbl %cl,%esi
087a789a +0x14ba:  movzbl %ch,%edi
087a789d +0x14bd:  xor    0x300(%ebp,%esi,4),%ebx
087a78a4 +0x14c4:  add    $0x10,%edx
087a78a7 +0x14c7:  xor    0x100(%ebp,%edi,4),%ebx
087a78ae +0x14ce:  mov    %ebx,%ecx
087a78b0 +0x14d0:  mov    (%edx),%esi
087a78b2 +0x14d2:  ror    $0x4,%ecx
087a78b5 +0x14d5:  xor    %esi,%ecx
087a78b7 +0x14d7:  and    $0x3f3f3f3f,%ecx
087a78bd +0x14dd:  movzbl %cl,%esi
087a78c0 +0x14e0:  movzbl %ch,%edi
087a78c3 +0x14e3:  xor    0x600(%ebp,%esi,4),%eax
087a78ca +0x14ea:  shr    $0x10,%ecx
087a78cd +0x14ed:  xor    0x400(%ebp,%edi,4),%eax
087a78d4 +0x14f4:  movzbl %cl,%esi
087a78d7 +0x14f7:  movzbl %ch,%edi
087a78da +0x14fa:  xor    0x200(%ebp,%esi,4),%eax
087a78e1 +0x1501:  mov    0x4(%edx),%esi
087a78e4 +0x1504:  xor    0x0(%ebp,%edi,4),%eax
087a78e8 +0x1508:  mov    %ebx,%ecx
087a78ea +0x150a:  xor    %esi,%ecx
087a78ec +0x150c:  and    $0x3f3f3f3f,%ecx
087a78f2 +0x1512:  movzbl %cl,%esi
087a78f5 +0x1515:  movzbl %ch,%edi
087a78f8 +0x1518:  xor    0x700(%ebp,%esi,4),%eax
087a78ff +0x151f:  shr    $0x10,%ecx
087a7902 +0x1522:  xor    0x500(%ebp,%edi,4),%eax
087a7909 +0x1529:  movzbl %cl,%esi
087a790c +0x152c:  movzbl %ch,%edi
087a790f +0x152f:  xor    0x300(%ebp,%esi,4),%eax
087a7916 +0x1536:  mov    0x8(%edx),%esi
087a7919 +0x1539:  xor    0x100(%ebp,%edi,4),%eax
087a7920 +0x1540:  mov    %eax,%ecx
087a7922 +0x1542:  ror    $0x4,%ecx
087a7925 +0x1545:  xor    %esi,%ecx
087a7927 +0x1547:  and    $0x3f3f3f3f,%ecx
087a792d +0x154d:  movzbl %cl,%esi
087a7930 +0x1550:  movzbl %ch,%edi
087a7933 +0x1553:  xor    0x600(%ebp,%esi,4),%ebx
087a793a +0x155a:  shr    $0x10,%ecx
087a793d +0x155d:  xor    0x400(%ebp,%edi,4),%ebx
087a7944 +0x1564:  movzbl %cl,%esi
087a7947 +0x1567:  movzbl %ch,%edi
087a794a +0x156a:  xor    0x200(%ebp,%esi,4),%ebx
087a7951 +0x1571:  mov    0xc(%edx),%esi
087a7954 +0x1574:  xor    0x0(%ebp,%edi,4),%ebx
087a7958 +0x1578:  mov    %eax,%ecx
087a795a +0x157a:  xor    %esi,%ecx
087a795c +0x157c:  and    $0x3f3f3f3f,%ecx
087a7962 +0x1582:  movzbl %cl,%esi
087a7965 +0x1585:  movzbl %ch,%edi
087a7968 +0x1588:  xor    0x700(%ebp,%esi,4),%ebx
087a796f +0x158f:  shr    $0x10,%ecx
087a7972 +0x1592:  xor    0x500(%ebp,%edi,4),%ebx
087a7979 +0x1599:  movzbl %cl,%esi
087a797c +0x159c:  movzbl %ch,%edi
087a797f +0x159f:  xor    0x300(%ebp,%esi,4),%ebx
087a7986 +0x15a6:  add    $0x10,%edx
087a7989 +0x15a9:  xor    0x100(%ebp,%edi,4),%ebx
087a7990 +0x15b0:  ror    %ebx
087a7992 +0x15b2:  mov    %eax,%ecx
087a7994 +0x15b4:  xor    %ebx,%ecx
087a7996 +0x15b6:  and    $0xaaaaaaaa,%ecx
087a799c +0x15bc:  xor    %ecx,%eax
087a799e +0x15be:  xor    %ecx,%ebx
087a79a0 +0x15c0:  ror    $0x9,%eax
087a79a3 +0x15c3:  mov    %ebx,%ecx
087a79a5 +0x15c5:  xor    %eax,%ecx
087a79a7 +0x15c7:  and    $0xff00ff,%ecx
087a79ad +0x15cd:  xor    %ecx,%eax
087a79af +0x15cf:  xor    %ecx,%ebx
087a79b1 +0x15d1:  rol    $0x6,%eax
087a79b4 +0x15d4:  mov    %ebx,%ecx
087a79b6 +0x15d6:  xor    %eax,%ecx
087a79b8 +0x15d8:  and    $0x33333333,%ecx
087a79be +0x15de:  xor    %ecx,%eax
087a79c0 +0x15e0:  xor    %ecx,%ebx
087a79c2 +0x15e2:  rol    $0x12,%eax
087a79c5 +0x15e5:  mov    %ebx,%ecx
087a79c7 +0x15e7:  xor    %eax,%ecx
087a79c9 +0x15e9:  and    $0xffff0000,%ecx
087a79cf +0x15ef:  xor    %ecx,%eax
087a79d1 +0x15f1:  xor    %ecx,%ebx
087a79d3 +0x15f3:  rol    $0x14,%eax
087a79d6 +0x15f6:  mov    %ebx,%ecx
087a79d8 +0x15f8:  xor    %eax,%ecx
087a79da +0x15fa:  and    $0xf0f0f0f0,%ecx
087a79e0 +0x1600:  xor    %ecx,%eax
087a79e2 +0x1602:  xor    %ecx,%ebx
087a79e4 +0x1604:  ror    $0x4,%eax
087a79e7 +0x1607:  movd   %mm6,%ebp
087a79ea +0x160a:  bswap  %ebx
087a79ec +0x160c:  bswap  %eax
087a79ee +0x160e:  mov    0x10(%ebp),%esi
087a79f1 +0x1611:  mov    %ebx,(%esi)
087a79f3 +0x1613:  mov    %eax,0x4(%esi)
087a79f6 +0x1616:  movd   %mm3,%edi
087a79f9 +0x1619:  movd   %mm4,%ebx
087a79fc +0x161c:  movd   %mm5,%esi
087a79ff +0x161f:  emms
087a7a01 +0x1621:  pop    %ebp
087a7a02 +0x1622:  ret
087a7a03 +0x1623:  nop
087a7a04 +0x1624:  lea    0x0(%esi),%esi
087a7a0a +0x162a:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// TaoCrypt::DES_EDE3::AsmProcess @ 0x87a63e0

/* TaoCrypt::DES_EDE3::AsmProcess(unsigned char const*, unsigned char*, void*) const */

void __thiscall
TaoCrypt::DES_EDE3::AsmProcess(DES_EDE3 *this,uchar *param_1,uchar *param_2,void *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar1 = *(uint *)param_1;
  uVar2 = *(uint *)(param_1 + 4);
  uVar1 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar6 = (uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18) << 4 |
          (uVar2 << 0x18) >> 0x1c;
  uVar2 = (uVar1 ^ uVar6) & 0xf0f0f0f0;
  uVar6 = uVar6 ^ uVar2;
  uVar1 = uVar1 ^ uVar2;
  uVar6 = uVar6 >> 0x14 | uVar6 << 0xc;
  uVar2 = (uVar1 ^ uVar6) & 0xffff0000;
  uVar6 = uVar6 ^ uVar2;
  uVar1 = uVar1 ^ uVar2;
  uVar6 = uVar6 >> 0x12 | uVar6 << 0xe;
  uVar2 = (uVar1 ^ uVar6) & 0x33333333;
  uVar6 = uVar6 ^ uVar2;
  uVar1 = uVar1 ^ uVar2;
  uVar6 = uVar6 >> 6 | uVar6 << 0x1a;
  uVar2 = (uVar1 ^ uVar6) & 0xff00ff;
  uVar6 = uVar6 ^ uVar2;
  uVar1 = uVar1 ^ uVar2;
  uVar7 = uVar6 << 9 | uVar6 >> 0x17;
  uVar2 = (uVar1 ^ uVar7) & 0xaaaaaaaa;
  uVar1 = uVar1 ^ uVar2;
  uVar7 = uVar7 ^ uVar2;
  uVar2 = (uVar7 >> 4 | uVar7 << 0x1c) ^ *(uint *)(this + 0x38);
  uVar6 = uVar2 & 0x3f3f3f3f;
  uVar3 = (uVar7 ^ *(uint *)(this + 0x3c)) & 0x3f3f3f3f;
  uVar1 = (uVar1 << 1 | (uint)((int)uVar1 < 0)) ^
          *(uint *)((int)param_3 + (uVar2 & 0x3f) * 4 + 0x600) ^
          *(uint *)((int)param_3 + (uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x10 & 0xff) * 4 + 0x200) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x18) * 4) ^
          *(uint *)((int)param_3 + ((uVar7 ^ *(uint *)(this + 0x3c)) & 0x3f) * 4 + 0x700) ^
          *(uint *)((int)param_3 + (uVar3 >> 8 & 0xff) * 4 + 0x500) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x10 & 0xff) * 4 + 0x300) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x18) * 4 + 0x100);
  uVar2 = (uVar1 >> 4 | uVar1 << 0x1c) ^ *(uint *)(this + 0x40);
  uVar6 = uVar2 & 0x3f3f3f3f;
  uVar3 = (uVar1 ^ *(uint *)(this + 0x44)) & 0x3f3f3f3f;
  uVar7 = uVar7 ^ *(uint *)((int)param_3 + (uVar2 & 0x3f) * 4 + 0x600) ^
          *(uint *)((int)param_3 + (uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x10 & 0xff) * 4 + 0x200) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x18) * 4) ^
          *(uint *)((int)param_3 + ((uVar1 ^ *(uint *)(this + 0x44)) & 0x3f) * 4 + 0x700) ^
          *(uint *)((int)param_3 + (uVar3 >> 8 & 0xff) * 4 + 0x500) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x10 & 0xff) * 4 + 0x300) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x18) * 4 + 0x100);
  uVar2 = (uVar7 >> 4 | uVar7 << 0x1c) ^ *(uint *)(this + 0x48);
  uVar6 = uVar2 & 0x3f3f3f3f;
  uVar3 = (uVar7 ^ *(uint *)(this + 0x4c)) & 0x3f3f3f3f;
  uVar1 = uVar1 ^ *(uint *)((int)param_3 + (uVar2 & 0x3f) * 4 + 0x600) ^
          *(uint *)((int)param_3 + (uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x10 & 0xff) * 4 + 0x200) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x18) * 4) ^
          *(uint *)((int)param_3 + ((uVar7 ^ *(uint *)(this + 0x4c)) & 0x3f) * 4 + 0x700) ^
          *(uint *)((int)param_3 + (uVar3 >> 8 & 0xff) * 4 + 0x500) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x10 & 0xff) * 4 + 0x300) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x18) * 4 + 0x100);
  uVar2 = (uVar1 >> 4 | uVar1 << 0x1c) ^ *(uint *)(this + 0x50);
  uVar6 = uVar2 & 0x3f3f3f3f;
  uVar3 = (uVar1 ^ *(uint *)(this + 0x54)) & 0x3f3f3f3f;
  uVar7 = uVar7 ^ *(uint *)((int)param_3 + (uVar2 & 0x3f) * 4 + 0x600) ^
          *(uint *)((int)param_3 + (uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x10 & 0xff) * 4 + 0x200) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x18) * 4) ^
          *(uint *)((int)param_3 + ((uVar1 ^ *(uint *)(this + 0x54)) & 0x3f) * 4 + 0x700) ^
          *(uint *)((int)param_3 + (uVar3 >> 8 & 0xff) * 4 + 0x500) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x10 & 0xff) * 4 + 0x300) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x18) * 4 + 0x100);
  uVar2 = (uVar7 >> 4 | uVar7 << 0x1c) ^ *(uint *)(this + 0x58);
  uVar6 = uVar2 & 0x3f3f3f3f;
  uVar3 = (uVar7 ^ *(uint *)(this + 0x5c)) & 0x3f3f3f3f;
  uVar1 = uVar1 ^ *(uint *)((int)param_3 + (uVar2 & 0x3f) * 4 + 0x600) ^
          *(uint *)((int)param_3 + (uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x10 & 0xff) * 4 + 0x200) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x18) * 4) ^
          *(uint *)((int)param_3 + ((uVar7 ^ *(uint *)(this + 0x5c)) & 0x3f) * 4 + 0x700) ^
          *(uint *)((int)param_3 + (uVar3 >> 8 & 0xff) * 4 + 0x500) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x10 & 0xff) * 4 + 0x300) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x18) * 4 + 0x100);
  uVar2 = (uVar1 >> 4 | uVar1 << 0x1c) ^ *(uint *)(this + 0x60);
  uVar6 = uVar2 & 0x3f3f3f3f;
  uVar3 = (uVar1 ^ *(uint *)(this + 100)) & 0x3f3f3f3f;
  uVar7 = uVar7 ^ *(uint *)((int)param_3 + (uVar2 & 0x3f) * 4 + 0x600) ^
          *(uint *)((int)param_3 + (uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x10 & 0xff) * 4 + 0x200) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x18) * 4) ^
          *(uint *)((int)param_3 + ((uVar1 ^ *(uint *)(this + 100)) & 0x3f) * 4 + 0x700) ^
          *(uint *)((int)param_3 + (uVar3 >> 8 & 0xff) * 4 + 0x500) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x10 & 0xff) * 4 + 0x300) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x18) * 4 + 0x100);
  uVar2 = (uVar7 >> 4 | uVar7 << 0x1c) ^ *(uint *)(this + 0x68);
  uVar6 = uVar2 & 0x3f3f3f3f;
  uVar3 = (uVar7 ^ *(uint *)(this + 0x6c)) & 0x3f3f3f3f;
  uVar1 = uVar1 ^ *(uint *)((int)param_3 + (uVar2 & 0x3f) * 4 + 0x600) ^
          *(uint *)((int)param_3 + (uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x10 & 0xff) * 4 + 0x200) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x18) * 4) ^
          *(uint *)((int)param_3 + ((uVar7 ^ *(uint *)(this + 0x6c)) & 0x3f) * 4 + 0x700) ^
          *(uint *)((int)param_3 + (uVar3 >> 8 & 0xff) * 4 + 0x500) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x10 & 0xff) * 4 + 0x300) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x18) * 4 + 0x100);
  uVar2 = (uVar1 >> 4 | uVar1 << 0x1c) ^ *(uint *)(this + 0x70);
  uVar6 = uVar2 & 0x3f3f3f3f;
  uVar3 = (uVar1 ^ *(uint *)(this + 0x74)) & 0x3f3f3f3f;
  uVar7 = uVar7 ^ *(uint *)((int)param_3 + (uVar2 & 0x3f) * 4 + 0x600) ^
          *(uint *)((int)param_3 + (uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x10 & 0xff) * 4 + 0x200) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x18) * 4) ^
          *(uint *)((int)param_3 + ((uVar1 ^ *(uint *)(this + 0x74)) & 0x3f) * 4 + 0x700) ^
          *(uint *)((int)param_3 + (uVar3 >> 8 & 0xff) * 4 + 0x500) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x10 & 0xff) * 4 + 0x300) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x18) * 4 + 0x100);
  uVar2 = (uVar7 >> 4 | uVar7 << 0x1c) ^ *(uint *)(this + 0x78);
  uVar6 = uVar2 & 0x3f3f3f3f;
  uVar3 = (uVar7 ^ *(uint *)(this + 0x7c)) & 0x3f3f3f3f;
  uVar1 = uVar1 ^ *(uint *)((int)param_3 + (uVar2 & 0x3f) * 4 + 0x600) ^
          *(uint *)((int)param_3 + (uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x10 & 0xff) * 4 + 0x200) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x18) * 4) ^
          *(uint *)((int)param_3 + ((uVar7 ^ *(uint *)(this + 0x7c)) & 0x3f) * 4 + 0x700) ^
          *(uint *)((int)param_3 + (uVar3 >> 8 & 0xff) * 4 + 0x500) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x10 & 0xff) * 4 + 0x300) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x18) * 4 + 0x100);
  uVar2 = (uVar1 >> 4 | uVar1 << 0x1c) ^ *(uint *)(this + 0x80);
  uVar6 = uVar2 & 0x3f3f3f3f;
  uVar3 = (uVar1 ^ *(uint *)(this + 0x84)) & 0x3f3f3f3f;
  uVar7 = uVar7 ^ *(uint *)((int)param_3 + (uVar2 & 0x3f) * 4 + 0x600) ^
          *(uint *)((int)param_3 + (uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x10 & 0xff) * 4 + 0x200) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x18) * 4) ^
          *(uint *)((int)param_3 + ((uVar1 ^ *(uint *)(this + 0x84)) & 0x3f) * 4 + 0x700) ^
          *(uint *)((int)param_3 + (uVar3 >> 8 & 0xff) * 4 + 0x500) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x10 & 0xff) * 4 + 0x300) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x18) * 4 + 0x100);
  uVar2 = (uVar7 >> 4 | uVar7 << 0x1c) ^ *(uint *)(this + 0x88);
  uVar6 = uVar2 & 0x3f3f3f3f;
  uVar3 = (uVar7 ^ *(uint *)(this + 0x8c)) & 0x3f3f3f3f;
  uVar1 = uVar1 ^ *(uint *)((int)param_3 + (uVar2 & 0x3f) * 4 + 0x600) ^
          *(uint *)((int)param_3 + (uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x10 & 0xff) * 4 + 0x200) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x18) * 4) ^
          *(uint *)((int)param_3 + ((uVar7 ^ *(uint *)(this + 0x8c)) & 0x3f) * 4 + 0x700) ^
          *(uint *)((int)param_3 + (uVar3 >> 8 & 0xff) * 4 + 0x500) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x10 & 0xff) * 4 + 0x300) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x18) * 4 + 0x100);
  uVar2 = (uVar1 >> 4 | uVar1 << 0x1c) ^ *(uint *)(this + 0x90);
  uVar6 = uVar2 & 0x3f3f3f3f;
  uVar3 = (uVar1 ^ *(uint *)(this + 0x94)) & 0x3f3f3f3f;
  uVar7 = uVar7 ^ *(uint *)((int)param_3 + (uVar2 & 0x3f) * 4 + 0x600) ^
          *(uint *)((int)param_3 + (uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x10 & 0xff) * 4 + 0x200) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x18) * 4) ^
          *(uint *)((int)param_3 + ((uVar1 ^ *(uint *)(this + 0x94)) & 0x3f) * 4 + 0x700) ^
          *(uint *)((int)param_3 + (uVar3 >> 8 & 0xff) * 4 + 0x500) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x10 & 0xff) * 4 + 0x300) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x18) * 4 + 0x100);
  uVar2 = (uVar7 >> 4 | uVar7 << 0x1c) ^ *(uint *)(this + 0x98);
  uVar6 = uVar2 & 0x3f3f3f3f;
  uVar3 = (uVar7 ^ *(uint *)(this + 0x9c)) & 0x3f3f3f3f;
  uVar1 = uVar1 ^ *(uint *)((int)param_3 + (uVar2 & 0x3f) * 4 + 0x600) ^
          *(uint *)((int)param_3 + (uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x10 & 0xff) * 4 + 0x200) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x18) * 4) ^
          *(uint *)((int)param_3 + ((uVar7 ^ *(uint *)(this + 0x9c)) & 0x3f) * 4 + 0x700) ^
          *(uint *)((int)param_3 + (uVar3 >> 8 & 0xff) * 4 + 0x500) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x10 & 0xff) * 4 + 0x300) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x18) * 4 + 0x100);
  uVar2 = (uVar1 >> 4 | uVar1 << 0x1c) ^ *(uint *)(this + 0xa0);
  uVar6 = uVar2 & 0x3f3f3f3f;
  uVar3 = (uVar1 ^ *(uint *)(this + 0xa4)) & 0x3f3f3f3f;
  uVar8 = uVar7 ^ *(uint *)((int)param_3 + (uVar2 & 0x3f) * 4 + 0x600) ^
          *(uint *)((int)param_3 + (uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x10 & 0xff) * 4 + 0x200) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x18) * 4) ^
          *(uint *)((int)param_3 + ((uVar1 ^ *(uint *)(this + 0xa4)) & 0x3f) * 4 + 0x700) ^
          *(uint *)((int)param_3 + (uVar3 >> 8 & 0xff) * 4 + 0x500) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x10 & 0xff) * 4 + 0x300) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x18) * 4 + 0x100);
  uVar2 = (uVar8 >> 4 | uVar8 << 0x1c) ^ *(uint *)(this + 0xa8);
  uVar6 = uVar2 & 0x3f3f3f3f;
  uVar3 = (uVar8 ^ *(uint *)(this + 0xac)) & 0x3f3f3f3f;
  uVar1 = uVar1 ^ *(uint *)((int)param_3 + (uVar2 & 0x3f) * 4 + 0x600) ^
          *(uint *)((int)param_3 + (uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x10 & 0xff) * 4 + 0x200) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x18) * 4) ^
          *(uint *)((int)param_3 + ((uVar8 ^ *(uint *)(this + 0xac)) & 0x3f) * 4 + 0x700) ^
          *(uint *)((int)param_3 + (uVar3 >> 8 & 0xff) * 4 + 0x500) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x10 & 0xff) * 4 + 0x300) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x18) * 4 + 0x100);
  uVar2 = (uVar1 >> 4 | uVar1 << 0x1c) ^ *(uint *)(this + 0xb0);
  uVar6 = uVar2 & 0x3f3f3f3f;
  uVar3 = (uVar1 ^ *(uint *)(this + 0xb4)) & 0x3f3f3f3f;
  uVar7 = (uVar1 >> 4 | uVar1 << 0x1c) ^ *(uint *)(this + 0xb8);
  uVar4 = uVar7 & 0x3f3f3f3f;
  uVar5 = (uVar1 ^ *(uint *)(this + 0xbc)) & 0x3f3f3f3f;
  uVar2 = uVar8 ^ *(uint *)((int)param_3 + (uVar2 & 0x3f) * 4 + 0x600) ^
          *(uint *)((int)param_3 + (uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x10 & 0xff) * 4 + 0x200) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x18) * 4) ^
          *(uint *)((int)param_3 + ((uVar1 ^ *(uint *)(this + 0xb4)) & 0x3f) * 4 + 0x700) ^
          *(uint *)((int)param_3 + (uVar3 >> 8 & 0xff) * 4 + 0x500) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x10 & 0xff) * 4 + 0x300) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x18) * 4 + 0x100) ^
          *(uint *)((int)param_3 + (uVar7 & 0x3f) * 4 + 0x600) ^
          *(uint *)((int)param_3 + (uVar4 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)((int)param_3 + (uVar4 >> 0x10 & 0xff) * 4 + 0x200) ^
          *(uint *)((int)param_3 + (uVar4 >> 0x18) * 4) ^
          *(uint *)((int)param_3 + ((uVar1 ^ *(uint *)(this + 0xbc)) & 0x3f) * 4 + 0x700) ^
          *(uint *)((int)param_3 + (uVar5 >> 8 & 0xff) * 4 + 0x500) ^
          *(uint *)((int)param_3 + (uVar5 >> 0x10 & 0xff) * 4 + 0x300) ^
          *(uint *)((int)param_3 + (uVar5 >> 0x18) * 4 + 0x100);
  uVar6 = (uVar2 >> 4 | uVar2 << 0x1c) ^ *(uint *)(this + 0xc0);
  uVar3 = uVar6 & 0x3f3f3f3f;
  uVar7 = (uVar2 ^ *(uint *)(this + 0xc4)) & 0x3f3f3f3f;
  uVar7 = uVar1 ^ *(uint *)((int)param_3 + (uVar6 & 0x3f) * 4 + 0x600) ^
          *(uint *)((int)param_3 + (uVar3 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x10 & 0xff) * 4 + 0x200) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x18) * 4) ^
          *(uint *)((int)param_3 + ((uVar2 ^ *(uint *)(this + 0xc4)) & 0x3f) * 4 + 0x700) ^
          *(uint *)((int)param_3 + (uVar7 >> 8 & 0xff) * 4 + 0x500) ^
          *(uint *)((int)param_3 + (uVar7 >> 0x10 & 0xff) * 4 + 0x300) ^
          *(uint *)((int)param_3 + (uVar7 >> 0x18) * 4 + 0x100);
  uVar1 = (uVar7 >> 4 | uVar7 << 0x1c) ^ *(uint *)(this + 200);
  uVar6 = uVar1 & 0x3f3f3f3f;
  uVar3 = (uVar7 ^ *(uint *)(this + 0xcc)) & 0x3f3f3f3f;
  uVar1 = uVar2 ^ *(uint *)((int)param_3 + (uVar1 & 0x3f) * 4 + 0x600) ^
          *(uint *)((int)param_3 + (uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x10 & 0xff) * 4 + 0x200) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x18) * 4) ^
          *(uint *)((int)param_3 + ((uVar7 ^ *(uint *)(this + 0xcc)) & 0x3f) * 4 + 0x700) ^
          *(uint *)((int)param_3 + (uVar3 >> 8 & 0xff) * 4 + 0x500) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x10 & 0xff) * 4 + 0x300) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x18) * 4 + 0x100);
  uVar2 = (uVar1 >> 4 | uVar1 << 0x1c) ^ *(uint *)(this + 0xd0);
  uVar6 = uVar2 & 0x3f3f3f3f;
  uVar3 = (uVar1 ^ *(uint *)(this + 0xd4)) & 0x3f3f3f3f;
  uVar7 = uVar7 ^ *(uint *)((int)param_3 + (uVar2 & 0x3f) * 4 + 0x600) ^
          *(uint *)((int)param_3 + (uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x10 & 0xff) * 4 + 0x200) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x18) * 4) ^
          *(uint *)((int)param_3 + ((uVar1 ^ *(uint *)(this + 0xd4)) & 0x3f) * 4 + 0x700) ^
          *(uint *)((int)param_3 + (uVar3 >> 8 & 0xff) * 4 + 0x500) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x10 & 0xff) * 4 + 0x300) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x18) * 4 + 0x100);
  uVar2 = (uVar7 >> 4 | uVar7 << 0x1c) ^ *(uint *)(this + 0xd8);
  uVar6 = uVar2 & 0x3f3f3f3f;
  uVar3 = (uVar7 ^ *(uint *)(this + 0xdc)) & 0x3f3f3f3f;
  uVar1 = uVar1 ^ *(uint *)((int)param_3 + (uVar2 & 0x3f) * 4 + 0x600) ^
          *(uint *)((int)param_3 + (uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x10 & 0xff) * 4 + 0x200) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x18) * 4) ^
          *(uint *)((int)param_3 + ((uVar7 ^ *(uint *)(this + 0xdc)) & 0x3f) * 4 + 0x700) ^
          *(uint *)((int)param_3 + (uVar3 >> 8 & 0xff) * 4 + 0x500) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x10 & 0xff) * 4 + 0x300) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x18) * 4 + 0x100);
  uVar2 = (uVar1 >> 4 | uVar1 << 0x1c) ^ *(uint *)(this + 0xe0);
  uVar6 = uVar2 & 0x3f3f3f3f;
  uVar3 = (uVar1 ^ *(uint *)(this + 0xe4)) & 0x3f3f3f3f;
  uVar7 = uVar7 ^ *(uint *)((int)param_3 + (uVar2 & 0x3f) * 4 + 0x600) ^
          *(uint *)((int)param_3 + (uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x10 & 0xff) * 4 + 0x200) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x18) * 4) ^
          *(uint *)((int)param_3 + ((uVar1 ^ *(uint *)(this + 0xe4)) & 0x3f) * 4 + 0x700) ^
          *(uint *)((int)param_3 + (uVar3 >> 8 & 0xff) * 4 + 0x500) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x10 & 0xff) * 4 + 0x300) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x18) * 4 + 0x100);
  uVar2 = (uVar7 >> 4 | uVar7 << 0x1c) ^ *(uint *)(this + 0xe8);
  uVar6 = uVar2 & 0x3f3f3f3f;
  uVar3 = (uVar7 ^ *(uint *)(this + 0xec)) & 0x3f3f3f3f;
  uVar1 = uVar1 ^ *(uint *)((int)param_3 + (uVar2 & 0x3f) * 4 + 0x600) ^
          *(uint *)((int)param_3 + (uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x10 & 0xff) * 4 + 0x200) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x18) * 4) ^
          *(uint *)((int)param_3 + ((uVar7 ^ *(uint *)(this + 0xec)) & 0x3f) * 4 + 0x700) ^
          *(uint *)((int)param_3 + (uVar3 >> 8 & 0xff) * 4 + 0x500) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x10 & 0xff) * 4 + 0x300) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x18) * 4 + 0x100);
  uVar2 = (uVar1 >> 4 | uVar1 << 0x1c) ^ *(uint *)(this + 0xf0);
  uVar6 = uVar2 & 0x3f3f3f3f;
  uVar3 = (uVar1 ^ *(uint *)(this + 0xf4)) & 0x3f3f3f3f;
  uVar7 = uVar7 ^ *(uint *)((int)param_3 + (uVar2 & 0x3f) * 4 + 0x600) ^
          *(uint *)((int)param_3 + (uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x10 & 0xff) * 4 + 0x200) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x18) * 4) ^
          *(uint *)((int)param_3 + ((uVar1 ^ *(uint *)(this + 0xf4)) & 0x3f) * 4 + 0x700) ^
          *(uint *)((int)param_3 + (uVar3 >> 8 & 0xff) * 4 + 0x500) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x10 & 0xff) * 4 + 0x300) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x18) * 4 + 0x100);
  uVar2 = (uVar7 >> 4 | uVar7 << 0x1c) ^ *(uint *)(this + 0xf8);
  uVar6 = uVar2 & 0x3f3f3f3f;
  uVar3 = (uVar7 ^ *(uint *)(this + 0xfc)) & 0x3f3f3f3f;
  uVar1 = uVar1 ^ *(uint *)((int)param_3 + (uVar2 & 0x3f) * 4 + 0x600) ^
          *(uint *)((int)param_3 + (uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x10 & 0xff) * 4 + 0x200) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x18) * 4) ^
          *(uint *)((int)param_3 + ((uVar7 ^ *(uint *)(this + 0xfc)) & 0x3f) * 4 + 0x700) ^
          *(uint *)((int)param_3 + (uVar3 >> 8 & 0xff) * 4 + 0x500) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x10 & 0xff) * 4 + 0x300) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x18) * 4 + 0x100);
  uVar2 = (uVar1 >> 4 | uVar1 << 0x1c) ^ *(uint *)(this + 0x100);
  uVar6 = uVar2 & 0x3f3f3f3f;
  uVar3 = (uVar1 ^ *(uint *)(this + 0x104)) & 0x3f3f3f3f;
  uVar7 = uVar7 ^ *(uint *)((int)param_3 + (uVar2 & 0x3f) * 4 + 0x600) ^
          *(uint *)((int)param_3 + (uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x10 & 0xff) * 4 + 0x200) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x18) * 4) ^
          *(uint *)((int)param_3 + ((uVar1 ^ *(uint *)(this + 0x104)) & 0x3f) * 4 + 0x700) ^
          *(uint *)((int)param_3 + (uVar3 >> 8 & 0xff) * 4 + 0x500) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x10 & 0xff) * 4 + 0x300) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x18) * 4 + 0x100);
  uVar2 = (uVar7 >> 4 | uVar7 << 0x1c) ^ *(uint *)(this + 0x108);
  uVar6 = uVar2 & 0x3f3f3f3f;
  uVar3 = (uVar7 ^ *(uint *)(this + 0x10c)) & 0x3f3f3f3f;
  uVar1 = uVar1 ^ *(uint *)((int)param_3 + (uVar2 & 0x3f) * 4 + 0x600) ^
          *(uint *)((int)param_3 + (uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x10 & 0xff) * 4 + 0x200) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x18) * 4) ^
          *(uint *)((int)param_3 + ((uVar7 ^ *(uint *)(this + 0x10c)) & 0x3f) * 4 + 0x700) ^
          *(uint *)((int)param_3 + (uVar3 >> 8 & 0xff) * 4 + 0x500) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x10 & 0xff) * 4 + 0x300) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x18) * 4 + 0x100);
  uVar2 = (uVar1 >> 4 | uVar1 << 0x1c) ^ *(uint *)(this + 0x110);
  uVar6 = uVar2 & 0x3f3f3f3f;
  uVar3 = (uVar1 ^ *(uint *)(this + 0x114)) & 0x3f3f3f3f;
  uVar7 = uVar7 ^ *(uint *)((int)param_3 + (uVar2 & 0x3f) * 4 + 0x600) ^
          *(uint *)((int)param_3 + (uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x10 & 0xff) * 4 + 0x200) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x18) * 4) ^
          *(uint *)((int)param_3 + ((uVar1 ^ *(uint *)(this + 0x114)) & 0x3f) * 4 + 0x700) ^
          *(uint *)((int)param_3 + (uVar3 >> 8 & 0xff) * 4 + 0x500) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x10 & 0xff) * 4 + 0x300) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x18) * 4 + 0x100);
  uVar2 = (uVar7 >> 4 | uVar7 << 0x1c) ^ *(uint *)(this + 0x118);
  uVar6 = uVar2 & 0x3f3f3f3f;
  uVar3 = (uVar7 ^ *(uint *)(this + 0x11c)) & 0x3f3f3f3f;
  uVar1 = uVar1 ^ *(uint *)((int)param_3 + (uVar2 & 0x3f) * 4 + 0x600) ^
          *(uint *)((int)param_3 + (uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x10 & 0xff) * 4 + 0x200) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x18) * 4) ^
          *(uint *)((int)param_3 + ((uVar7 ^ *(uint *)(this + 0x11c)) & 0x3f) * 4 + 0x700) ^
          *(uint *)((int)param_3 + (uVar3 >> 8 & 0xff) * 4 + 0x500) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x10 & 0xff) * 4 + 0x300) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x18) * 4 + 0x100);
  uVar2 = (uVar1 >> 4 | uVar1 << 0x1c) ^ *(uint *)(this + 0x120);
  uVar6 = uVar2 & 0x3f3f3f3f;
  uVar3 = (uVar1 ^ *(uint *)(this + 0x124)) & 0x3f3f3f3f;
  uVar8 = uVar7 ^ *(uint *)((int)param_3 + (uVar2 & 0x3f) * 4 + 0x600) ^
          *(uint *)((int)param_3 + (uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x10 & 0xff) * 4 + 0x200) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x18) * 4) ^
          *(uint *)((int)param_3 + ((uVar1 ^ *(uint *)(this + 0x124)) & 0x3f) * 4 + 0x700) ^
          *(uint *)((int)param_3 + (uVar3 >> 8 & 0xff) * 4 + 0x500) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x10 & 0xff) * 4 + 0x300) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x18) * 4 + 0x100);
  uVar2 = (uVar8 >> 4 | uVar8 << 0x1c) ^ *(uint *)(this + 0x128);
  uVar6 = uVar2 & 0x3f3f3f3f;
  uVar3 = (uVar8 ^ *(uint *)(this + 300)) & 0x3f3f3f3f;
  uVar1 = uVar1 ^ *(uint *)((int)param_3 + (uVar2 & 0x3f) * 4 + 0x600) ^
          *(uint *)((int)param_3 + (uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x10 & 0xff) * 4 + 0x200) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x18) * 4) ^
          *(uint *)((int)param_3 + ((uVar8 ^ *(uint *)(this + 300)) & 0x3f) * 4 + 0x700) ^
          *(uint *)((int)param_3 + (uVar3 >> 8 & 0xff) * 4 + 0x500) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x10 & 0xff) * 4 + 0x300) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x18) * 4 + 0x100);
  uVar2 = (uVar1 >> 4 | uVar1 << 0x1c) ^ *(uint *)(this + 0x130);
  uVar6 = uVar2 & 0x3f3f3f3f;
  uVar3 = (uVar1 ^ *(uint *)(this + 0x134)) & 0x3f3f3f3f;
  uVar7 = (uVar1 >> 4 | uVar1 << 0x1c) ^ *(uint *)(this + 0x138);
  uVar4 = uVar7 & 0x3f3f3f3f;
  uVar5 = (uVar1 ^ *(uint *)(this + 0x13c)) & 0x3f3f3f3f;
  uVar2 = uVar8 ^ *(uint *)((int)param_3 + (uVar2 & 0x3f) * 4 + 0x600) ^
          *(uint *)((int)param_3 + (uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x10 & 0xff) * 4 + 0x200) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x18) * 4) ^
          *(uint *)((int)param_3 + ((uVar1 ^ *(uint *)(this + 0x134)) & 0x3f) * 4 + 0x700) ^
          *(uint *)((int)param_3 + (uVar3 >> 8 & 0xff) * 4 + 0x500) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x10 & 0xff) * 4 + 0x300) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x18) * 4 + 0x100) ^
          *(uint *)((int)param_3 + (uVar7 & 0x3f) * 4 + 0x600) ^
          *(uint *)((int)param_3 + (uVar4 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)((int)param_3 + (uVar4 >> 0x10 & 0xff) * 4 + 0x200) ^
          *(uint *)((int)param_3 + (uVar4 >> 0x18) * 4) ^
          *(uint *)((int)param_3 + ((uVar1 ^ *(uint *)(this + 0x13c)) & 0x3f) * 4 + 0x700) ^
          *(uint *)((int)param_3 + (uVar5 >> 8 & 0xff) * 4 + 0x500) ^
          *(uint *)((int)param_3 + (uVar5 >> 0x10 & 0xff) * 4 + 0x300) ^
          *(uint *)((int)param_3 + (uVar5 >> 0x18) * 4 + 0x100);
  uVar6 = (uVar2 >> 4 | uVar2 << 0x1c) ^ *(uint *)(this + 0x140);
  uVar3 = uVar6 & 0x3f3f3f3f;
  uVar7 = (uVar2 ^ *(uint *)(this + 0x144)) & 0x3f3f3f3f;
  uVar7 = uVar1 ^ *(uint *)((int)param_3 + (uVar6 & 0x3f) * 4 + 0x600) ^
          *(uint *)((int)param_3 + (uVar3 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x10 & 0xff) * 4 + 0x200) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x18) * 4) ^
          *(uint *)((int)param_3 + ((uVar2 ^ *(uint *)(this + 0x144)) & 0x3f) * 4 + 0x700) ^
          *(uint *)((int)param_3 + (uVar7 >> 8 & 0xff) * 4 + 0x500) ^
          *(uint *)((int)param_3 + (uVar7 >> 0x10 & 0xff) * 4 + 0x300) ^
          *(uint *)((int)param_3 + (uVar7 >> 0x18) * 4 + 0x100);
  uVar1 = (uVar7 >> 4 | uVar7 << 0x1c) ^ *(uint *)(this + 0x148);
  uVar6 = uVar1 & 0x3f3f3f3f;
  uVar3 = (uVar7 ^ *(uint *)(this + 0x14c)) & 0x3f3f3f3f;
  uVar1 = uVar2 ^ *(uint *)((int)param_3 + (uVar1 & 0x3f) * 4 + 0x600) ^
          *(uint *)((int)param_3 + (uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x10 & 0xff) * 4 + 0x200) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x18) * 4) ^
          *(uint *)((int)param_3 + ((uVar7 ^ *(uint *)(this + 0x14c)) & 0x3f) * 4 + 0x700) ^
          *(uint *)((int)param_3 + (uVar3 >> 8 & 0xff) * 4 + 0x500) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x10 & 0xff) * 4 + 0x300) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x18) * 4 + 0x100);
  uVar2 = (uVar1 >> 4 | uVar1 << 0x1c) ^ *(uint *)(this + 0x150);
  uVar6 = uVar2 & 0x3f3f3f3f;
  uVar3 = (uVar1 ^ *(uint *)(this + 0x154)) & 0x3f3f3f3f;
  uVar7 = uVar7 ^ *(uint *)((int)param_3 + (uVar2 & 0x3f) * 4 + 0x600) ^
          *(uint *)((int)param_3 + (uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x10 & 0xff) * 4 + 0x200) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x18) * 4) ^
          *(uint *)((int)param_3 + ((uVar1 ^ *(uint *)(this + 0x154)) & 0x3f) * 4 + 0x700) ^
          *(uint *)((int)param_3 + (uVar3 >> 8 & 0xff) * 4 + 0x500) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x10 & 0xff) * 4 + 0x300) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x18) * 4 + 0x100);
  uVar2 = (uVar7 >> 4 | uVar7 << 0x1c) ^ *(uint *)(this + 0x158);
  uVar6 = uVar2 & 0x3f3f3f3f;
  uVar3 = (uVar7 ^ *(uint *)(this + 0x15c)) & 0x3f3f3f3f;
  uVar1 = uVar1 ^ *(uint *)((int)param_3 + (uVar2 & 0x3f) * 4 + 0x600) ^
          *(uint *)((int)param_3 + (uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x10 & 0xff) * 4 + 0x200) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x18) * 4) ^
          *(uint *)((int)param_3 + ((uVar7 ^ *(uint *)(this + 0x15c)) & 0x3f) * 4 + 0x700) ^
          *(uint *)((int)param_3 + (uVar3 >> 8 & 0xff) * 4 + 0x500) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x10 & 0xff) * 4 + 0x300) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x18) * 4 + 0x100);
  uVar2 = (uVar1 >> 4 | uVar1 << 0x1c) ^ *(uint *)(this + 0x160);
  uVar6 = uVar2 & 0x3f3f3f3f;
  uVar3 = (uVar1 ^ *(uint *)(this + 0x164)) & 0x3f3f3f3f;
  uVar7 = uVar7 ^ *(uint *)((int)param_3 + (uVar2 & 0x3f) * 4 + 0x600) ^
          *(uint *)((int)param_3 + (uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x10 & 0xff) * 4 + 0x200) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x18) * 4) ^
          *(uint *)((int)param_3 + ((uVar1 ^ *(uint *)(this + 0x164)) & 0x3f) * 4 + 0x700) ^
          *(uint *)((int)param_3 + (uVar3 >> 8 & 0xff) * 4 + 0x500) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x10 & 0xff) * 4 + 0x300) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x18) * 4 + 0x100);
  uVar2 = (uVar7 >> 4 | uVar7 << 0x1c) ^ *(uint *)(this + 0x168);
  uVar6 = uVar2 & 0x3f3f3f3f;
  uVar3 = (uVar7 ^ *(uint *)(this + 0x16c)) & 0x3f3f3f3f;
  uVar1 = uVar1 ^ *(uint *)((int)param_3 + (uVar2 & 0x3f) * 4 + 0x600) ^
          *(uint *)((int)param_3 + (uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x10 & 0xff) * 4 + 0x200) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x18) * 4) ^
          *(uint *)((int)param_3 + ((uVar7 ^ *(uint *)(this + 0x16c)) & 0x3f) * 4 + 0x700) ^
          *(uint *)((int)param_3 + (uVar3 >> 8 & 0xff) * 4 + 0x500) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x10 & 0xff) * 4 + 0x300) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x18) * 4 + 0x100);
  uVar2 = (uVar1 >> 4 | uVar1 << 0x1c) ^ *(uint *)(this + 0x170);
  uVar6 = uVar2 & 0x3f3f3f3f;
  uVar3 = (uVar1 ^ *(uint *)(this + 0x174)) & 0x3f3f3f3f;
  uVar7 = uVar7 ^ *(uint *)((int)param_3 + (uVar2 & 0x3f) * 4 + 0x600) ^
          *(uint *)((int)param_3 + (uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x10 & 0xff) * 4 + 0x200) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x18) * 4) ^
          *(uint *)((int)param_3 + ((uVar1 ^ *(uint *)(this + 0x174)) & 0x3f) * 4 + 0x700) ^
          *(uint *)((int)param_3 + (uVar3 >> 8 & 0xff) * 4 + 0x500) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x10 & 0xff) * 4 + 0x300) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x18) * 4 + 0x100);
  uVar2 = (uVar7 >> 4 | uVar7 << 0x1c) ^ *(uint *)(this + 0x178);
  uVar6 = uVar2 & 0x3f3f3f3f;
  uVar3 = (uVar7 ^ *(uint *)(this + 0x17c)) & 0x3f3f3f3f;
  uVar1 = uVar1 ^ *(uint *)((int)param_3 + (uVar2 & 0x3f) * 4 + 0x600) ^
          *(uint *)((int)param_3 + (uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x10 & 0xff) * 4 + 0x200) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x18) * 4) ^
          *(uint *)((int)param_3 + ((uVar7 ^ *(uint *)(this + 0x17c)) & 0x3f) * 4 + 0x700) ^
          *(uint *)((int)param_3 + (uVar3 >> 8 & 0xff) * 4 + 0x500) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x10 & 0xff) * 4 + 0x300) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x18) * 4 + 0x100);
  uVar2 = (uVar1 >> 4 | uVar1 << 0x1c) ^ *(uint *)(this + 0x180);
  uVar6 = uVar2 & 0x3f3f3f3f;
  uVar3 = (uVar1 ^ *(uint *)(this + 0x184)) & 0x3f3f3f3f;
  uVar7 = uVar7 ^ *(uint *)((int)param_3 + (uVar2 & 0x3f) * 4 + 0x600) ^
          *(uint *)((int)param_3 + (uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x10 & 0xff) * 4 + 0x200) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x18) * 4) ^
          *(uint *)((int)param_3 + ((uVar1 ^ *(uint *)(this + 0x184)) & 0x3f) * 4 + 0x700) ^
          *(uint *)((int)param_3 + (uVar3 >> 8 & 0xff) * 4 + 0x500) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x10 & 0xff) * 4 + 0x300) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x18) * 4 + 0x100);
  uVar2 = (uVar7 >> 4 | uVar7 << 0x1c) ^ *(uint *)(this + 0x188);
  uVar6 = uVar2 & 0x3f3f3f3f;
  uVar3 = (uVar7 ^ *(uint *)(this + 0x18c)) & 0x3f3f3f3f;
  uVar1 = uVar1 ^ *(uint *)((int)param_3 + (uVar2 & 0x3f) * 4 + 0x600) ^
          *(uint *)((int)param_3 + (uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x10 & 0xff) * 4 + 0x200) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x18) * 4) ^
          *(uint *)((int)param_3 + ((uVar7 ^ *(uint *)(this + 0x18c)) & 0x3f) * 4 + 0x700) ^
          *(uint *)((int)param_3 + (uVar3 >> 8 & 0xff) * 4 + 0x500) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x10 & 0xff) * 4 + 0x300) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x18) * 4 + 0x100);
  uVar2 = (uVar1 >> 4 | uVar1 << 0x1c) ^ *(uint *)(this + 400);
  uVar6 = uVar2 & 0x3f3f3f3f;
  uVar3 = (uVar1 ^ *(uint *)(this + 0x194)) & 0x3f3f3f3f;
  uVar7 = uVar7 ^ *(uint *)((int)param_3 + (uVar2 & 0x3f) * 4 + 0x600) ^
          *(uint *)((int)param_3 + (uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x10 & 0xff) * 4 + 0x200) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x18) * 4) ^
          *(uint *)((int)param_3 + ((uVar1 ^ *(uint *)(this + 0x194)) & 0x3f) * 4 + 0x700) ^
          *(uint *)((int)param_3 + (uVar3 >> 8 & 0xff) * 4 + 0x500) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x10 & 0xff) * 4 + 0x300) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x18) * 4 + 0x100);
  uVar2 = (uVar7 >> 4 | uVar7 << 0x1c) ^ *(uint *)(this + 0x198);
  uVar6 = uVar2 & 0x3f3f3f3f;
  uVar3 = (uVar7 ^ *(uint *)(this + 0x19c)) & 0x3f3f3f3f;
  uVar1 = uVar1 ^ *(uint *)((int)param_3 + (uVar2 & 0x3f) * 4 + 0x600) ^
          *(uint *)((int)param_3 + (uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x10 & 0xff) * 4 + 0x200) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x18) * 4) ^
          *(uint *)((int)param_3 + ((uVar7 ^ *(uint *)(this + 0x19c)) & 0x3f) * 4 + 0x700) ^
          *(uint *)((int)param_3 + (uVar3 >> 8 & 0xff) * 4 + 0x500) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x10 & 0xff) * 4 + 0x300) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x18) * 4 + 0x100);
  uVar2 = (uVar1 >> 4 | uVar1 << 0x1c) ^ *(uint *)(this + 0x1a0);
  uVar6 = uVar2 & 0x3f3f3f3f;
  uVar3 = (uVar1 ^ *(uint *)(this + 0x1a4)) & 0x3f3f3f3f;
  uVar7 = uVar7 ^ *(uint *)((int)param_3 + (uVar2 & 0x3f) * 4 + 0x600) ^
          *(uint *)((int)param_3 + (uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x10 & 0xff) * 4 + 0x200) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x18) * 4) ^
          *(uint *)((int)param_3 + ((uVar1 ^ *(uint *)(this + 0x1a4)) & 0x3f) * 4 + 0x700) ^
          *(uint *)((int)param_3 + (uVar3 >> 8 & 0xff) * 4 + 0x500) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x10 & 0xff) * 4 + 0x300) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x18) * 4 + 0x100);
  uVar2 = (uVar7 >> 4 | uVar7 << 0x1c) ^ *(uint *)(this + 0x1a8);
  uVar6 = uVar2 & 0x3f3f3f3f;
  uVar3 = (uVar7 ^ *(uint *)(this + 0x1ac)) & 0x3f3f3f3f;
  uVar2 = uVar1 ^ *(uint *)((int)param_3 + (uVar2 & 0x3f) * 4 + 0x600) ^
          *(uint *)((int)param_3 + (uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x10 & 0xff) * 4 + 0x200) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x18) * 4) ^
          *(uint *)((int)param_3 + ((uVar7 ^ *(uint *)(this + 0x1ac)) & 0x3f) * 4 + 0x700) ^
          *(uint *)((int)param_3 + (uVar3 >> 8 & 0xff) * 4 + 0x500) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x10 & 0xff) * 4 + 0x300) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x18) * 4 + 0x100);
  uVar1 = (uVar2 >> 4 | uVar2 << 0x1c) ^ *(uint *)(this + 0x1b0);
  uVar6 = uVar1 & 0x3f3f3f3f;
  uVar3 = (uVar2 ^ *(uint *)(this + 0x1b4)) & 0x3f3f3f3f;
  uVar1 = uVar7 ^ *(uint *)((int)param_3 + (uVar1 & 0x3f) * 4 + 0x600) ^
          *(uint *)((int)param_3 + (uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x10 & 0xff) * 4 + 0x200) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x18) * 4) ^
          *(uint *)((int)param_3 + ((uVar2 ^ *(uint *)(this + 0x1b4)) & 0x3f) * 4 + 0x700) ^
          *(uint *)((int)param_3 + (uVar3 >> 8 & 0xff) * 4 + 0x500) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x10 & 0xff) * 4 + 0x300) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x18) * 4 + 0x100);
  uVar3 = uVar1 >> 1 | (uint)((uVar1 & 1) != 0) << 0x1f;
  uVar1 = (uVar2 ^ uVar3) & 0xaaaaaaaa;
  uVar2 = uVar2 ^ uVar1;
  uVar3 = uVar3 ^ uVar1;
  uVar1 = uVar2 << 0x17;
  uVar2 = uVar2 >> 9 | uVar1;
  uVar6 = (uVar3 ^ uVar2) & 0xff00ff;
  uVar3 = uVar3 ^ uVar6;
  uVar2 = (uVar2 ^ uVar6) << 6 | uVar1 >> 0x1a;
  uVar1 = (uVar3 ^ uVar2) & 0x33333333;
  uVar2 = uVar2 ^ uVar1;
  uVar3 = uVar3 ^ uVar1;
  uVar1 = uVar2 >> 0xe;
  uVar2 = uVar2 << 0x12 | uVar1;
  uVar6 = (uVar3 ^ uVar2) & 0xffff0000;
  uVar3 = uVar3 ^ uVar6;
  uVar2 = (uVar2 ^ uVar6) >> 0xc;
  uVar1 = uVar1 << 0x14 | uVar2;
  uVar6 = (uVar3 ^ uVar1) & 0xf0f0f0f0;
  uVar3 = uVar3 ^ uVar6;
  uVar1 = (uVar1 ^ uVar6) >> 4;
  *(uint *)param_2 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18
  ;
  *(uint *)(param_2 + 4) =
       (uVar1 | uVar2 << 0x1c) >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
       uVar1 << 0x18;
  return;
}
```
