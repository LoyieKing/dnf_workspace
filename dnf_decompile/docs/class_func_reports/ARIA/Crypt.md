# Crypt

`_ZN4ARIA5CryptEPKhiS1_Ph`

`ARIA::Crypt(unsigned char const*, int, unsigned char const*, unsigned char*)`

| 类 | 地址 |
|---|---|
| `ARIA` | `0x080a5404` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080a5404  _ZN4ARIA5CryptEPKhiS1_Ph
#           ARIA::Crypt(unsigned char const*, int, unsigned char const*, unsigned char*)
# range [0x080a5404, 0x080a6e16]
080a5404 +0x0000:  push   %ebp
080a5405 +0x0001:  mov    %esp,%ebp
080a5407 +0x0003:  push   %edi
080a5408 +0x0004:  push   %esi
080a5409 +0x0005:  push   %ebx
080a540a +0x0006:  sub    $0x4,%esp
080a540d +0x0009:  mov    0x8(%ebp),%eax
080a5410 +0x000c:  mov    (%eax),%eax
080a5412 +0x000e:  mov    %eax,-0x10(%ebp)
080a5415 +0x0011:  mov    0x8(%ebp),%eax
080a5418 +0x0014:  add    $0x4,%eax
080a541b +0x0017:  mov    (%eax),%ebx
080a541d +0x0019:  mov    0x8(%ebp),%eax
080a5420 +0x001c:  add    $0x8,%eax
080a5423 +0x001f:  mov    (%eax),%esi
080a5425 +0x0021:  mov    0x8(%ebp),%eax
080a5428 +0x0024:  add    $0xc,%eax
080a542b +0x0027:  mov    (%eax),%edi
080a542d +0x0029:  cmpl   $0xc,0xc(%ebp)
080a5431 +0x002d:  jle    080a5764 <+0x360>
080a5437 +0x0033:  mov    0x10(%ebp),%eax
080a543a +0x0036:  mov    (%eax),%eax
080a543c +0x0038:  xor    %eax,-0x10(%ebp)
080a543f +0x003b:  mov    0x10(%ebp),%eax
080a5442 +0x003e:  add    $0x4,%eax
080a5445 +0x0041:  mov    (%eax),%eax
080a5447 +0x0043:  xor    %eax,%ebx
080a5449 +0x0045:  mov    0x10(%ebp),%eax
080a544c +0x0048:  add    $0x8,%eax
080a544f +0x004b:  mov    (%eax),%eax
080a5451 +0x004d:  xor    %eax,%esi
080a5453 +0x004f:  mov    0x10(%ebp),%eax
080a5456 +0x0052:  add    $0xc,%eax
080a5459 +0x0055:  mov    (%eax),%eax
080a545b +0x0057:  xor    %eax,%edi
080a545d +0x0059:  addl   $0x10,0x10(%ebp)
080a5461 +0x005d:  mov    -0x10(%ebp),%eax
080a5464 +0x0060:  shr    $0x18,%eax
080a5467 +0x0063:  movzbl %al,%eax
080a546a +0x0066:  mov    &_ZL2S1(,%eax,4),%edx
080a5471 +0x006d:  mov    -0x10(%ebp),%eax
080a5474 +0x0070:  shr    $0x10,%eax
080a5477 +0x0073:  movzbl %al,%eax
080a547a +0x0076:  mov    &_ZL2S2(,%eax,4),%eax
080a5481 +0x007d:  xor    %eax,%edx
080a5483 +0x007f:  mov    -0x10(%ebp),%eax
080a5486 +0x0082:  shr    $0x8,%eax
080a5489 +0x0085:  movzbl %al,%eax
080a548c +0x0088:  mov    &_ZL2X1(,%eax,4),%eax
080a5493 +0x008f:  xor    %eax,%edx
080a5495 +0x0091:  movzbl -0x10(%ebp),%eax
080a5499 +0x0095:  movzbl %al,%eax
080a549c +0x0098:  mov    &_ZL2X2(,%eax,4),%eax
080a54a3 +0x009f:  mov    %edx,%ecx
080a54a5 +0x00a1:  xor    %eax,%ecx
080a54a7 +0x00a3:  mov    %ecx,-0x10(%ebp)
080a54aa +0x00a6:  mov    %ebx,%eax
080a54ac +0x00a8:  shr    $0x18,%eax
080a54af +0x00ab:  movzbl %al,%eax
080a54b2 +0x00ae:  mov    &_ZL2S1(,%eax,4),%edx
080a54b9 +0x00b5:  mov    %ebx,%eax
080a54bb +0x00b7:  shr    $0x10,%eax
080a54be +0x00ba:  movzbl %al,%eax
080a54c1 +0x00bd:  mov    &_ZL2S2(,%eax,4),%eax
080a54c8 +0x00c4:  xor    %eax,%edx
080a54ca +0x00c6:  mov    %ebx,%eax
080a54cc +0x00c8:  shr    $0x8,%eax
080a54cf +0x00cb:  movzbl %al,%eax
080a54d2 +0x00ce:  mov    &_ZL2X1(,%eax,4),%eax
080a54d9 +0x00d5:  xor    %eax,%edx
080a54db +0x00d7:  mov    %ebx,%eax
080a54dd +0x00d9:  movzbl %al,%eax
080a54e0 +0x00dc:  mov    &_ZL2X2(,%eax,4),%eax
080a54e7 +0x00e3:  mov    %edx,%ebx
080a54e9 +0x00e5:  xor    %eax,%ebx
080a54eb +0x00e7:  mov    %esi,%eax
080a54ed +0x00e9:  shr    $0x18,%eax
080a54f0 +0x00ec:  movzbl %al,%eax
080a54f3 +0x00ef:  mov    &_ZL2S1(,%eax,4),%edx
080a54fa +0x00f6:  mov    %esi,%eax
080a54fc +0x00f8:  shr    $0x10,%eax
080a54ff +0x00fb:  movzbl %al,%eax
080a5502 +0x00fe:  mov    &_ZL2S2(,%eax,4),%eax
080a5509 +0x0105:  xor    %eax,%edx
080a550b +0x0107:  mov    %esi,%eax
080a550d +0x0109:  shr    $0x8,%eax
080a5510 +0x010c:  movzbl %al,%eax
080a5513 +0x010f:  mov    &_ZL2X1(,%eax,4),%eax
080a551a +0x0116:  xor    %eax,%edx
080a551c +0x0118:  mov    %esi,%eax
080a551e +0x011a:  movzbl %al,%eax
080a5521 +0x011d:  mov    &_ZL2X2(,%eax,4),%eax
080a5528 +0x0124:  mov    %edx,%esi
080a552a +0x0126:  xor    %eax,%esi
080a552c +0x0128:  mov    %edi,%eax
080a552e +0x012a:  shr    $0x18,%eax
080a5531 +0x012d:  movzbl %al,%eax
080a5534 +0x0130:  mov    &_ZL2S1(,%eax,4),%edx
080a553b +0x0137:  mov    %edi,%eax
080a553d +0x0139:  shr    $0x10,%eax
080a5540 +0x013c:  movzbl %al,%eax
080a5543 +0x013f:  mov    &_ZL2S2(,%eax,4),%eax
080a554a +0x0146:  xor    %eax,%edx
080a554c +0x0148:  mov    %edi,%eax
080a554e +0x014a:  shr    $0x8,%eax
080a5551 +0x014d:  movzbl %al,%eax
080a5554 +0x0150:  mov    &_ZL2X1(,%eax,4),%eax
080a555b +0x0157:  xor    %eax,%edx
080a555d +0x0159:  mov    %edi,%eax
080a555f +0x015b:  movzbl %al,%eax
080a5562 +0x015e:  mov    &_ZL2X2(,%eax,4),%eax
080a5569 +0x0165:  mov    %edx,%edi
080a556b +0x0167:  xor    %eax,%edi
080a556d +0x0169:  xor    %esi,%ebx
080a556f +0x016b:  xor    %edi,%esi
080a5571 +0x016d:  xor    %ebx,-0x10(%ebp)
080a5574 +0x0170:  xor    %ebx,%edi
080a5576 +0x0172:  xor    -0x10(%ebp),%esi
080a5579 +0x0175:  xor    %esi,%ebx
080a557b +0x0177:  mov    %ebx,%eax
080a557d +0x0179:  shl    $0x8,%eax
080a5580 +0x017c:  mov    %eax,%edx
080a5582 +0x017e:  and    $0xff00ff00,%edx
080a5588 +0x0184:  mov    %ebx,%eax
080a558a +0x0186:  shr    $0x8,%eax
080a558d +0x0189:  and    $0xff00ff,%eax
080a5592 +0x018e:  mov    %edx,%ebx
080a5594 +0x0190:  xor    %eax,%ebx
080a5596 +0x0192:  ror    $0x10,%esi
080a5599 +0x0195:  mov    %edi,%edx
080a559b +0x0197:  shl    $0x18,%edx
080a559e +0x019a:  mov    %edi,%eax
080a55a0 +0x019c:  shr    $0x18,%eax
080a55a3 +0x019f:  xor    %eax,%edx
080a55a5 +0x01a1:  mov    %edi,%eax
080a55a7 +0x01a3:  and    $0xff00,%eax
080a55ac +0x01a8:  shl    $0x8,%eax
080a55af +0x01ab:  xor    %eax,%edx
080a55b1 +0x01ad:  mov    %edi,%eax
080a55b3 +0x01af:  and    $0xff0000,%eax
080a55b8 +0x01b4:  shr    $0x8,%eax
080a55bb +0x01b7:  mov    %edx,%edi
080a55bd +0x01b9:  xor    %eax,%edi
080a55bf +0x01bb:  xor    %esi,%ebx
080a55c1 +0x01bd:  xor    %edi,%esi
080a55c3 +0x01bf:  xor    %ebx,-0x10(%ebp)
080a55c6 +0x01c2:  xor    %ebx,%edi
080a55c8 +0x01c4:  xor    -0x10(%ebp),%esi
080a55cb +0x01c7:  xor    %esi,%ebx
080a55cd +0x01c9:  mov    0x10(%ebp),%eax
080a55d0 +0x01cc:  mov    (%eax),%eax
080a55d2 +0x01ce:  xor    %eax,-0x10(%ebp)
080a55d5 +0x01d1:  mov    0x10(%ebp),%eax
080a55d8 +0x01d4:  add    $0x4,%eax
080a55db +0x01d7:  mov    (%eax),%eax
080a55dd +0x01d9:  xor    %eax,%ebx
080a55df +0x01db:  mov    0x10(%ebp),%eax
080a55e2 +0x01de:  add    $0x8,%eax
080a55e5 +0x01e1:  mov    (%eax),%eax
080a55e7 +0x01e3:  xor    %eax,%esi
080a55e9 +0x01e5:  mov    0x10(%ebp),%eax
080a55ec +0x01e8:  add    $0xc,%eax
080a55ef +0x01eb:  mov    (%eax),%eax
080a55f1 +0x01ed:  xor    %eax,%edi
080a55f3 +0x01ef:  addl   $0x10,0x10(%ebp)
080a55f7 +0x01f3:  mov    -0x10(%ebp),%eax
080a55fa +0x01f6:  shr    $0x18,%eax
080a55fd +0x01f9:  movzbl %al,%eax
080a5600 +0x01fc:  mov    &_ZL2X1(,%eax,4),%edx
080a5607 +0x0203:  mov    -0x10(%ebp),%eax
080a560a +0x0206:  shr    $0x10,%eax
080a560d +0x0209:  movzbl %al,%eax
080a5610 +0x020c:  mov    &_ZL2X2(,%eax,4),%eax
080a5617 +0x0213:  xor    %eax,%edx
080a5619 +0x0215:  mov    -0x10(%ebp),%eax
080a561c +0x0218:  shr    $0x8,%eax
080a561f +0x021b:  movzbl %al,%eax
080a5622 +0x021e:  mov    &_ZL2S1(,%eax,4),%eax
080a5629 +0x0225:  xor    %eax,%edx
080a562b +0x0227:  movzbl -0x10(%ebp),%eax
080a562f +0x022b:  movzbl %al,%eax
080a5632 +0x022e:  mov    &_ZL2S2(,%eax,4),%eax
080a5639 +0x0235:  mov    %edx,%ecx
080a563b +0x0237:  xor    %eax,%ecx
080a563d +0x0239:  mov    %ecx,-0x10(%ebp)
080a5640 +0x023c:  mov    %ebx,%eax
080a5642 +0x023e:  shr    $0x18,%eax
080a5645 +0x0241:  movzbl %al,%eax
080a5648 +0x0244:  mov    &_ZL2X1(,%eax,4),%edx
080a564f +0x024b:  mov    %ebx,%eax
080a5651 +0x024d:  shr    $0x10,%eax
080a5654 +0x0250:  movzbl %al,%eax
080a5657 +0x0253:  mov    &_ZL2X2(,%eax,4),%eax
080a565e +0x025a:  xor    %eax,%edx
080a5660 +0x025c:  mov    %ebx,%eax
080a5662 +0x025e:  shr    $0x8,%eax
080a5665 +0x0261:  movzbl %al,%eax
080a5668 +0x0264:  mov    &_ZL2S1(,%eax,4),%eax
080a566f +0x026b:  xor    %eax,%edx
080a5671 +0x026d:  mov    %ebx,%eax
080a5673 +0x026f:  movzbl %al,%eax
080a5676 +0x0272:  mov    &_ZL2S2(,%eax,4),%eax
080a567d +0x0279:  mov    %edx,%ebx
080a567f +0x027b:  xor    %eax,%ebx
080a5681 +0x027d:  mov    %esi,%eax
080a5683 +0x027f:  shr    $0x18,%eax
080a5686 +0x0282:  movzbl %al,%eax
080a5689 +0x0285:  mov    &_ZL2X1(,%eax,4),%edx
080a5690 +0x028c:  mov    %esi,%eax
080a5692 +0x028e:  shr    $0x10,%eax
080a5695 +0x0291:  movzbl %al,%eax
080a5698 +0x0294:  mov    &_ZL2X2(,%eax,4),%eax
080a569f +0x029b:  xor    %eax,%edx
080a56a1 +0x029d:  mov    %esi,%eax
080a56a3 +0x029f:  shr    $0x8,%eax
080a56a6 +0x02a2:  movzbl %al,%eax
080a56a9 +0x02a5:  mov    &_ZL2S1(,%eax,4),%eax
080a56b0 +0x02ac:  xor    %eax,%edx
080a56b2 +0x02ae:  mov    %esi,%eax
080a56b4 +0x02b0:  movzbl %al,%eax
080a56b7 +0x02b3:  mov    &_ZL2S2(,%eax,4),%eax
080a56be +0x02ba:  mov    %edx,%esi
080a56c0 +0x02bc:  xor    %eax,%esi
080a56c2 +0x02be:  mov    %edi,%eax
080a56c4 +0x02c0:  shr    $0x18,%eax
080a56c7 +0x02c3:  movzbl %al,%eax
080a56ca +0x02c6:  mov    &_ZL2X1(,%eax,4),%edx
080a56d1 +0x02cd:  mov    %edi,%eax
080a56d3 +0x02cf:  shr    $0x10,%eax
080a56d6 +0x02d2:  movzbl %al,%eax
080a56d9 +0x02d5:  mov    &_ZL2X2(,%eax,4),%eax
080a56e0 +0x02dc:  xor    %eax,%edx
080a56e2 +0x02de:  mov    %edi,%eax
080a56e4 +0x02e0:  shr    $0x8,%eax
080a56e7 +0x02e3:  movzbl %al,%eax
080a56ea +0x02e6:  mov    &_ZL2S1(,%eax,4),%eax
080a56f1 +0x02ed:  xor    %eax,%edx
080a56f3 +0x02ef:  mov    %edi,%eax
080a56f5 +0x02f1:  movzbl %al,%eax
080a56f8 +0x02f4:  mov    &_ZL2S2(,%eax,4),%eax
080a56ff +0x02fb:  mov    %edx,%edi
080a5701 +0x02fd:  xor    %eax,%edi
080a5703 +0x02ff:  xor    %esi,%ebx
080a5705 +0x0301:  xor    %edi,%esi
080a5707 +0x0303:  xor    %ebx,-0x10(%ebp)
080a570a +0x0306:  xor    %ebx,%edi
080a570c +0x0308:  xor    -0x10(%ebp),%esi
080a570f +0x030b:  xor    %esi,%ebx
080a5711 +0x030d:  mov    %edi,%eax
080a5713 +0x030f:  shl    $0x8,%eax
080a5716 +0x0312:  mov    %eax,%edx
080a5718 +0x0314:  and    $0xff00ff00,%edx
080a571e +0x031a:  mov    %edi,%eax
080a5720 +0x031c:  shr    $0x8,%eax
080a5723 +0x031f:  and    $0xff00ff,%eax
080a5728 +0x0324:  mov    %edx,%edi
080a572a +0x0326:  xor    %eax,%edi
080a572c +0x0328:  rorl   $0x10,-0x10(%ebp)
080a5730 +0x032c:  mov    %ebx,%edx
080a5732 +0x032e:  shl    $0x18,%edx
080a5735 +0x0331:  mov    %ebx,%eax
080a5737 +0x0333:  shr    $0x18,%eax
080a573a +0x0336:  xor    %eax,%edx
080a573c +0x0338:  mov    %ebx,%eax
080a573e +0x033a:  and    $0xff00,%eax
080a5743 +0x033f:  shl    $0x8,%eax
080a5746 +0x0342:  xor    %eax,%edx
080a5748 +0x0344:  mov    %ebx,%eax
080a574a +0x0346:  and    $0xff0000,%eax
080a574f +0x034b:  shr    $0x8,%eax
080a5752 +0x034e:  mov    %edx,%ebx
080a5754 +0x0350:  xor    %eax,%ebx
080a5756 +0x0352:  xor    %esi,%ebx
080a5758 +0x0354:  xor    %edi,%esi
080a575a +0x0356:  xor    %ebx,-0x10(%ebp)
080a575d +0x0359:  xor    %ebx,%edi
080a575f +0x035b:  xor    -0x10(%ebp),%esi
080a5762 +0x035e:  xor    %esi,%ebx
080a5764 +0x0360:  cmpl   $0xe,0xc(%ebp)
080a5768 +0x0364:  jle    080a5a9b <+0x697>
080a576e +0x036a:  mov    0x10(%ebp),%eax
080a5771 +0x036d:  mov    (%eax),%eax
080a5773 +0x036f:  xor    %eax,-0x10(%ebp)
080a5776 +0x0372:  mov    0x10(%ebp),%eax
080a5779 +0x0375:  add    $0x4,%eax
080a577c +0x0378:  mov    (%eax),%eax
080a577e +0x037a:  xor    %eax,%ebx
080a5780 +0x037c:  mov    0x10(%ebp),%eax
080a5783 +0x037f:  add    $0x8,%eax
080a5786 +0x0382:  mov    (%eax),%eax
080a5788 +0x0384:  xor    %eax,%esi
080a578a +0x0386:  mov    0x10(%ebp),%eax
080a578d +0x0389:  add    $0xc,%eax
080a5790 +0x038c:  mov    (%eax),%eax
080a5792 +0x038e:  xor    %eax,%edi
080a5794 +0x0390:  addl   $0x10,0x10(%ebp)
080a5798 +0x0394:  mov    -0x10(%ebp),%eax
080a579b +0x0397:  shr    $0x18,%eax
080a579e +0x039a:  movzbl %al,%eax
080a57a1 +0x039d:  mov    &_ZL2S1(,%eax,4),%edx
080a57a8 +0x03a4:  mov    -0x10(%ebp),%eax
080a57ab +0x03a7:  shr    $0x10,%eax
080a57ae +0x03aa:  movzbl %al,%eax
080a57b1 +0x03ad:  mov    &_ZL2S2(,%eax,4),%eax
080a57b8 +0x03b4:  xor    %eax,%edx
080a57ba +0x03b6:  mov    -0x10(%ebp),%eax
080a57bd +0x03b9:  shr    $0x8,%eax
080a57c0 +0x03bc:  movzbl %al,%eax
080a57c3 +0x03bf:  mov    &_ZL2X1(,%eax,4),%eax
080a57ca +0x03c6:  xor    %eax,%edx
080a57cc +0x03c8:  movzbl -0x10(%ebp),%eax
080a57d0 +0x03cc:  movzbl %al,%eax
080a57d3 +0x03cf:  mov    &_ZL2X2(,%eax,4),%eax
080a57da +0x03d6:  mov    %edx,%ecx
080a57dc +0x03d8:  xor    %eax,%ecx
080a57de +0x03da:  mov    %ecx,-0x10(%ebp)
080a57e1 +0x03dd:  mov    %ebx,%eax
080a57e3 +0x03df:  shr    $0x18,%eax
080a57e6 +0x03e2:  movzbl %al,%eax
080a57e9 +0x03e5:  mov    &_ZL2S1(,%eax,4),%edx
080a57f0 +0x03ec:  mov    %ebx,%eax
080a57f2 +0x03ee:  shr    $0x10,%eax
080a57f5 +0x03f1:  movzbl %al,%eax
080a57f8 +0x03f4:  mov    &_ZL2S2(,%eax,4),%eax
080a57ff +0x03fb:  xor    %eax,%edx
080a5801 +0x03fd:  mov    %ebx,%eax
080a5803 +0x03ff:  shr    $0x8,%eax
080a5806 +0x0402:  movzbl %al,%eax
080a5809 +0x0405:  mov    &_ZL2X1(,%eax,4),%eax
080a5810 +0x040c:  xor    %eax,%edx
080a5812 +0x040e:  mov    %ebx,%eax
080a5814 +0x0410:  movzbl %al,%eax
080a5817 +0x0413:  mov    &_ZL2X2(,%eax,4),%eax
080a581e +0x041a:  mov    %edx,%ebx
080a5820 +0x041c:  xor    %eax,%ebx
080a5822 +0x041e:  mov    %esi,%eax
080a5824 +0x0420:  shr    $0x18,%eax
080a5827 +0x0423:  movzbl %al,%eax
080a582a +0x0426:  mov    &_ZL2S1(,%eax,4),%edx
080a5831 +0x042d:  mov    %esi,%eax
080a5833 +0x042f:  shr    $0x10,%eax
080a5836 +0x0432:  movzbl %al,%eax
080a5839 +0x0435:  mov    &_ZL2S2(,%eax,4),%eax
080a5840 +0x043c:  xor    %eax,%edx
080a5842 +0x043e:  mov    %esi,%eax
080a5844 +0x0440:  shr    $0x8,%eax
080a5847 +0x0443:  movzbl %al,%eax
080a584a +0x0446:  mov    &_ZL2X1(,%eax,4),%eax
080a5851 +0x044d:  xor    %eax,%edx
080a5853 +0x044f:  mov    %esi,%eax
080a5855 +0x0451:  movzbl %al,%eax
080a5858 +0x0454:  mov    &_ZL2X2(,%eax,4),%eax
080a585f +0x045b:  mov    %edx,%esi
080a5861 +0x045d:  xor    %eax,%esi
080a5863 +0x045f:  mov    %edi,%eax
080a5865 +0x0461:  shr    $0x18,%eax
080a5868 +0x0464:  movzbl %al,%eax
080a586b +0x0467:  mov    &_ZL2S1(,%eax,4),%edx
080a5872 +0x046e:  mov    %edi,%eax
080a5874 +0x0470:  shr    $0x10,%eax
080a5877 +0x0473:  movzbl %al,%eax
080a587a +0x0476:  mov    &_ZL2S2(,%eax,4),%eax
080a5881 +0x047d:  xor    %eax,%edx
080a5883 +0x047f:  mov    %edi,%eax
080a5885 +0x0481:  shr    $0x8,%eax
080a5888 +0x0484:  movzbl %al,%eax
080a588b +0x0487:  mov    &_ZL2X1(,%eax,4),%eax
080a5892 +0x048e:  xor    %eax,%edx
080a5894 +0x0490:  mov    %edi,%eax
080a5896 +0x0492:  movzbl %al,%eax
080a5899 +0x0495:  mov    &_ZL2X2(,%eax,4),%eax
080a58a0 +0x049c:  mov    %edx,%edi
080a58a2 +0x049e:  xor    %eax,%edi
080a58a4 +0x04a0:  xor    %esi,%ebx
080a58a6 +0x04a2:  xor    %edi,%esi
080a58a8 +0x04a4:  xor    %ebx,-0x10(%ebp)
080a58ab +0x04a7:  xor    %ebx,%edi
080a58ad +0x04a9:  xor    -0x10(%ebp),%esi
080a58b0 +0x04ac:  xor    %esi,%ebx
080a58b2 +0x04ae:  mov    %ebx,%eax
080a58b4 +0x04b0:  shl    $0x8,%eax
080a58b7 +0x04b3:  mov    %eax,%edx
080a58b9 +0x04b5:  and    $0xff00ff00,%edx
080a58bf +0x04bb:  mov    %ebx,%eax
080a58c1 +0x04bd:  shr    $0x8,%eax
080a58c4 +0x04c0:  and    $0xff00ff,%eax
080a58c9 +0x04c5:  mov    %edx,%ebx
080a58cb +0x04c7:  xor    %eax,%ebx
080a58cd +0x04c9:  ror    $0x10,%esi
080a58d0 +0x04cc:  mov    %edi,%edx
080a58d2 +0x04ce:  shl    $0x18,%edx
080a58d5 +0x04d1:  mov    %edi,%eax
080a58d7 +0x04d3:  shr    $0x18,%eax
080a58da +0x04d6:  xor    %eax,%edx
080a58dc +0x04d8:  mov    %edi,%eax
080a58de +0x04da:  and    $0xff00,%eax
080a58e3 +0x04df:  shl    $0x8,%eax
080a58e6 +0x04e2:  xor    %eax,%edx
080a58e8 +0x04e4:  mov    %edi,%eax
080a58ea +0x04e6:  and    $0xff0000,%eax
080a58ef +0x04eb:  shr    $0x8,%eax
080a58f2 +0x04ee:  mov    %edx,%edi
080a58f4 +0x04f0:  xor    %eax,%edi
080a58f6 +0x04f2:  xor    %esi,%ebx
080a58f8 +0x04f4:  xor    %edi,%esi
080a58fa +0x04f6:  xor    %ebx,-0x10(%ebp)
080a58fd +0x04f9:  xor    %ebx,%edi
080a58ff +0x04fb:  xor    -0x10(%ebp),%esi
080a5902 +0x04fe:  xor    %esi,%ebx
080a5904 +0x0500:  mov    0x10(%ebp),%eax
080a5907 +0x0503:  mov    (%eax),%eax
080a5909 +0x0505:  xor    %eax,-0x10(%ebp)
080a590c +0x0508:  mov    0x10(%ebp),%eax
080a590f +0x050b:  add    $0x4,%eax
080a5912 +0x050e:  mov    (%eax),%eax
080a5914 +0x0510:  xor    %eax,%ebx
080a5916 +0x0512:  mov    0x10(%ebp),%eax
080a5919 +0x0515:  add    $0x8,%eax
080a591c +0x0518:  mov    (%eax),%eax
080a591e +0x051a:  xor    %eax,%esi
080a5920 +0x051c:  mov    0x10(%ebp),%eax
080a5923 +0x051f:  add    $0xc,%eax
080a5926 +0x0522:  mov    (%eax),%eax
080a5928 +0x0524:  xor    %eax,%edi
080a592a +0x0526:  addl   $0x10,0x10(%ebp)
080a592e +0x052a:  mov    -0x10(%ebp),%eax
080a5931 +0x052d:  shr    $0x18,%eax
080a5934 +0x0530:  movzbl %al,%eax
080a5937 +0x0533:  mov    &_ZL2X1(,%eax,4),%edx
080a593e +0x053a:  mov    -0x10(%ebp),%eax
080a5941 +0x053d:  shr    $0x10,%eax
080a5944 +0x0540:  movzbl %al,%eax
080a5947 +0x0543:  mov    &_ZL2X2(,%eax,4),%eax
080a594e +0x054a:  xor    %eax,%edx
080a5950 +0x054c:  mov    -0x10(%ebp),%eax
080a5953 +0x054f:  shr    $0x8,%eax
080a5956 +0x0552:  movzbl %al,%eax
080a5959 +0x0555:  mov    &_ZL2S1(,%eax,4),%eax
080a5960 +0x055c:  xor    %eax,%edx
080a5962 +0x055e:  movzbl -0x10(%ebp),%eax
080a5966 +0x0562:  movzbl %al,%eax
080a5969 +0x0565:  mov    &_ZL2S2(,%eax,4),%eax
080a5970 +0x056c:  mov    %edx,%ecx
080a5972 +0x056e:  xor    %eax,%ecx
080a5974 +0x0570:  mov    %ecx,-0x10(%ebp)
080a5977 +0x0573:  mov    %ebx,%eax
080a5979 +0x0575:  shr    $0x18,%eax
080a597c +0x0578:  movzbl %al,%eax
080a597f +0x057b:  mov    &_ZL2X1(,%eax,4),%edx
080a5986 +0x0582:  mov    %ebx,%eax
080a5988 +0x0584:  shr    $0x10,%eax
080a598b +0x0587:  movzbl %al,%eax
080a598e +0x058a:  mov    &_ZL2X2(,%eax,4),%eax
080a5995 +0x0591:  xor    %eax,%edx
080a5997 +0x0593:  mov    %ebx,%eax
080a5999 +0x0595:  shr    $0x8,%eax
080a599c +0x0598:  movzbl %al,%eax
080a599f +0x059b:  mov    &_ZL2S1(,%eax,4),%eax
080a59a6 +0x05a2:  xor    %eax,%edx
080a59a8 +0x05a4:  mov    %ebx,%eax
080a59aa +0x05a6:  movzbl %al,%eax
080a59ad +0x05a9:  mov    &_ZL2S2(,%eax,4),%eax
080a59b4 +0x05b0:  mov    %edx,%ebx
080a59b6 +0x05b2:  xor    %eax,%ebx
080a59b8 +0x05b4:  mov    %esi,%eax
080a59ba +0x05b6:  shr    $0x18,%eax
080a59bd +0x05b9:  movzbl %al,%eax
080a59c0 +0x05bc:  mov    &_ZL2X1(,%eax,4),%edx
080a59c7 +0x05c3:  mov    %esi,%eax
080a59c9 +0x05c5:  shr    $0x10,%eax
080a59cc +0x05c8:  movzbl %al,%eax
080a59cf +0x05cb:  mov    &_ZL2X2(,%eax,4),%eax
080a59d6 +0x05d2:  xor    %eax,%edx
080a59d8 +0x05d4:  mov    %esi,%eax
080a59da +0x05d6:  shr    $0x8,%eax
080a59dd +0x05d9:  movzbl %al,%eax
080a59e0 +0x05dc:  mov    &_ZL2S1(,%eax,4),%eax
080a59e7 +0x05e3:  xor    %eax,%edx
080a59e9 +0x05e5:  mov    %esi,%eax
080a59eb +0x05e7:  movzbl %al,%eax
080a59ee +0x05ea:  mov    &_ZL2S2(,%eax,4),%eax
080a59f5 +0x05f1:  mov    %edx,%esi
080a59f7 +0x05f3:  xor    %eax,%esi
080a59f9 +0x05f5:  mov    %edi,%eax
080a59fb +0x05f7:  shr    $0x18,%eax
080a59fe +0x05fa:  movzbl %al,%eax
080a5a01 +0x05fd:  mov    &_ZL2X1(,%eax,4),%edx
080a5a08 +0x0604:  mov    %edi,%eax
080a5a0a +0x0606:  shr    $0x10,%eax
080a5a0d +0x0609:  movzbl %al,%eax
080a5a10 +0x060c:  mov    &_ZL2X2(,%eax,4),%eax
080a5a17 +0x0613:  xor    %eax,%edx
080a5a19 +0x0615:  mov    %edi,%eax
080a5a1b +0x0617:  shr    $0x8,%eax
080a5a1e +0x061a:  movzbl %al,%eax
080a5a21 +0x061d:  mov    &_ZL2S1(,%eax,4),%eax
080a5a28 +0x0624:  xor    %eax,%edx
080a5a2a +0x0626:  mov    %edi,%eax
080a5a2c +0x0628:  movzbl %al,%eax
080a5a2f +0x062b:  mov    &_ZL2S2(,%eax,4),%eax
080a5a36 +0x0632:  mov    %edx,%edi
080a5a38 +0x0634:  xor    %eax,%edi
080a5a3a +0x0636:  xor    %esi,%ebx
080a5a3c +0x0638:  xor    %edi,%esi
080a5a3e +0x063a:  xor    %ebx,-0x10(%ebp)
080a5a41 +0x063d:  xor    %ebx,%edi
080a5a43 +0x063f:  xor    -0x10(%ebp),%esi
080a5a46 +0x0642:  xor    %esi,%ebx
080a5a48 +0x0644:  mov    %edi,%eax
080a5a4a +0x0646:  shl    $0x8,%eax
080a5a4d +0x0649:  mov    %eax,%edx
080a5a4f +0x064b:  and    $0xff00ff00,%edx
080a5a55 +0x0651:  mov    %edi,%eax
080a5a57 +0x0653:  shr    $0x8,%eax
080a5a5a +0x0656:  and    $0xff00ff,%eax
080a5a5f +0x065b:  mov    %edx,%edi
080a5a61 +0x065d:  xor    %eax,%edi
080a5a63 +0x065f:  rorl   $0x10,-0x10(%ebp)
080a5a67 +0x0663:  mov    %ebx,%edx
080a5a69 +0x0665:  shl    $0x18,%edx
080a5a6c +0x0668:  mov    %ebx,%eax
080a5a6e +0x066a:  shr    $0x18,%eax
080a5a71 +0x066d:  xor    %eax,%edx
080a5a73 +0x066f:  mov    %ebx,%eax
080a5a75 +0x0671:  and    $0xff00,%eax
080a5a7a +0x0676:  shl    $0x8,%eax
080a5a7d +0x0679:  xor    %eax,%edx
080a5a7f +0x067b:  mov    %ebx,%eax
080a5a81 +0x067d:  and    $0xff0000,%eax
080a5a86 +0x0682:  shr    $0x8,%eax
080a5a89 +0x0685:  mov    %edx,%ebx
080a5a8b +0x0687:  xor    %eax,%ebx
080a5a8d +0x0689:  xor    %esi,%ebx
080a5a8f +0x068b:  xor    %edi,%esi
080a5a91 +0x068d:  xor    %ebx,-0x10(%ebp)
080a5a94 +0x0690:  xor    %ebx,%edi
080a5a96 +0x0692:  xor    -0x10(%ebp),%esi
080a5a99 +0x0695:  xor    %esi,%ebx
080a5a9b +0x0697:  mov    0x10(%ebp),%eax
080a5a9e +0x069a:  mov    (%eax),%eax
080a5aa0 +0x069c:  xor    %eax,-0x10(%ebp)
080a5aa3 +0x069f:  mov    0x10(%ebp),%eax
080a5aa6 +0x06a2:  add    $0x4,%eax
080a5aa9 +0x06a5:  mov    (%eax),%eax
080a5aab +0x06a7:  xor    %eax,%ebx
080a5aad +0x06a9:  mov    0x10(%ebp),%eax
080a5ab0 +0x06ac:  add    $0x8,%eax
080a5ab3 +0x06af:  mov    (%eax),%eax
080a5ab5 +0x06b1:  xor    %eax,%esi
080a5ab7 +0x06b3:  mov    0x10(%ebp),%eax
080a5aba +0x06b6:  add    $0xc,%eax
080a5abd +0x06b9:  mov    (%eax),%eax
080a5abf +0x06bb:  xor    %eax,%edi
080a5ac1 +0x06bd:  addl   $0x10,0x10(%ebp)
080a5ac5 +0x06c1:  mov    -0x10(%ebp),%eax
080a5ac8 +0x06c4:  shr    $0x18,%eax
080a5acb +0x06c7:  movzbl %al,%eax
080a5ace +0x06ca:  mov    &_ZL2S1(,%eax,4),%edx
080a5ad5 +0x06d1:  mov    -0x10(%ebp),%eax
080a5ad8 +0x06d4:  shr    $0x10,%eax
080a5adb +0x06d7:  movzbl %al,%eax
080a5ade +0x06da:  mov    &_ZL2S2(,%eax,4),%eax
080a5ae5 +0x06e1:  xor    %eax,%edx
080a5ae7 +0x06e3:  mov    -0x10(%ebp),%eax
080a5aea +0x06e6:  shr    $0x8,%eax
080a5aed +0x06e9:  movzbl %al,%eax
080a5af0 +0x06ec:  mov    &_ZL2X1(,%eax,4),%eax
080a5af7 +0x06f3:  xor    %eax,%edx
080a5af9 +0x06f5:  movzbl -0x10(%ebp),%eax
080a5afd +0x06f9:  movzbl %al,%eax
080a5b00 +0x06fc:  mov    &_ZL2X2(,%eax,4),%eax
080a5b07 +0x0703:  mov    %edx,%ecx
080a5b09 +0x0705:  xor    %eax,%ecx
080a5b0b +0x0707:  mov    %ecx,-0x10(%ebp)
080a5b0e +0x070a:  mov    %ebx,%eax
080a5b10 +0x070c:  shr    $0x18,%eax
080a5b13 +0x070f:  movzbl %al,%eax
080a5b16 +0x0712:  mov    &_ZL2S1(,%eax,4),%edx
080a5b1d +0x0719:  mov    %ebx,%eax
080a5b1f +0x071b:  shr    $0x10,%eax
080a5b22 +0x071e:  movzbl %al,%eax
080a5b25 +0x0721:  mov    &_ZL2S2(,%eax,4),%eax
080a5b2c +0x0728:  xor    %eax,%edx
080a5b2e +0x072a:  mov    %ebx,%eax
080a5b30 +0x072c:  shr    $0x8,%eax
080a5b33 +0x072f:  movzbl %al,%eax
080a5b36 +0x0732:  mov    &_ZL2X1(,%eax,4),%eax
080a5b3d +0x0739:  xor    %eax,%edx
080a5b3f +0x073b:  mov    %ebx,%eax
080a5b41 +0x073d:  movzbl %al,%eax
080a5b44 +0x0740:  mov    &_ZL2X2(,%eax,4),%eax
080a5b4b +0x0747:  mov    %edx,%ebx
080a5b4d +0x0749:  xor    %eax,%ebx
080a5b4f +0x074b:  mov    %esi,%eax
080a5b51 +0x074d:  shr    $0x18,%eax
080a5b54 +0x0750:  movzbl %al,%eax
080a5b57 +0x0753:  mov    &_ZL2S1(,%eax,4),%edx
080a5b5e +0x075a:  mov    %esi,%eax
080a5b60 +0x075c:  shr    $0x10,%eax
080a5b63 +0x075f:  movzbl %al,%eax
080a5b66 +0x0762:  mov    &_ZL2S2(,%eax,4),%eax
080a5b6d +0x0769:  xor    %eax,%edx
080a5b6f +0x076b:  mov    %esi,%eax
080a5b71 +0x076d:  shr    $0x8,%eax
080a5b74 +0x0770:  movzbl %al,%eax
080a5b77 +0x0773:  mov    &_ZL2X1(,%eax,4),%eax
080a5b7e +0x077a:  xor    %eax,%edx
080a5b80 +0x077c:  mov    %esi,%eax
080a5b82 +0x077e:  movzbl %al,%eax
080a5b85 +0x0781:  mov    &_ZL2X2(,%eax,4),%eax
080a5b8c +0x0788:  mov    %edx,%esi
080a5b8e +0x078a:  xor    %eax,%esi
080a5b90 +0x078c:  mov    %edi,%eax
080a5b92 +0x078e:  shr    $0x18,%eax
080a5b95 +0x0791:  movzbl %al,%eax
080a5b98 +0x0794:  mov    &_ZL2S1(,%eax,4),%edx
080a5b9f +0x079b:  mov    %edi,%eax
080a5ba1 +0x079d:  shr    $0x10,%eax
080a5ba4 +0x07a0:  movzbl %al,%eax
080a5ba7 +0x07a3:  mov    &_ZL2S2(,%eax,4),%eax
080a5bae +0x07aa:  xor    %eax,%edx
080a5bb0 +0x07ac:  mov    %edi,%eax
080a5bb2 +0x07ae:  shr    $0x8,%eax
080a5bb5 +0x07b1:  movzbl %al,%eax
080a5bb8 +0x07b4:  mov    &_ZL2X1(,%eax,4),%eax
080a5bbf +0x07bb:  xor    %eax,%edx
080a5bc1 +0x07bd:  mov    %edi,%eax
080a5bc3 +0x07bf:  movzbl %al,%eax
080a5bc6 +0x07c2:  mov    &_ZL2X2(,%eax,4),%eax
080a5bcd +0x07c9:  mov    %edx,%edi
080a5bcf +0x07cb:  xor    %eax,%edi
080a5bd1 +0x07cd:  xor    %esi,%ebx
080a5bd3 +0x07cf:  xor    %edi,%esi
080a5bd5 +0x07d1:  xor    %ebx,-0x10(%ebp)
080a5bd8 +0x07d4:  xor    %ebx,%edi
080a5bda +0x07d6:  xor    -0x10(%ebp),%esi
080a5bdd +0x07d9:  xor    %esi,%ebx
080a5bdf +0x07db:  mov    %ebx,%eax
080a5be1 +0x07dd:  shl    $0x8,%eax
080a5be4 +0x07e0:  mov    %eax,%edx
080a5be6 +0x07e2:  and    $0xff00ff00,%edx
080a5bec +0x07e8:  mov    %ebx,%eax
080a5bee +0x07ea:  shr    $0x8,%eax
080a5bf1 +0x07ed:  and    $0xff00ff,%eax
080a5bf6 +0x07f2:  mov    %edx,%ebx
080a5bf8 +0x07f4:  xor    %eax,%ebx
080a5bfa +0x07f6:  ror    $0x10,%esi
080a5bfd +0x07f9:  mov    %edi,%edx
080a5bff +0x07fb:  shl    $0x18,%edx
080a5c02 +0x07fe:  mov    %edi,%eax
080a5c04 +0x0800:  shr    $0x18,%eax
080a5c07 +0x0803:  xor    %eax,%edx
080a5c09 +0x0805:  mov    %edi,%eax
080a5c0b +0x0807:  and    $0xff00,%eax
080a5c10 +0x080c:  shl    $0x8,%eax
080a5c13 +0x080f:  xor    %eax,%edx
080a5c15 +0x0811:  mov    %edi,%eax
080a5c17 +0x0813:  and    $0xff0000,%eax
080a5c1c +0x0818:  shr    $0x8,%eax
080a5c1f +0x081b:  mov    %edx,%edi
080a5c21 +0x081d:  xor    %eax,%edi
080a5c23 +0x081f:  xor    %esi,%ebx
080a5c25 +0x0821:  xor    %edi,%esi
080a5c27 +0x0823:  xor    %ebx,-0x10(%ebp)
080a5c2a +0x0826:  xor    %ebx,%edi
080a5c2c +0x0828:  xor    -0x10(%ebp),%esi
080a5c2f +0x082b:  xor    %esi,%ebx
080a5c31 +0x082d:  mov    0x10(%ebp),%eax
080a5c34 +0x0830:  mov    (%eax),%eax
080a5c36 +0x0832:  xor    %eax,-0x10(%ebp)
080a5c39 +0x0835:  mov    0x10(%ebp),%eax
080a5c3c +0x0838:  add    $0x4,%eax
080a5c3f +0x083b:  mov    (%eax),%eax
080a5c41 +0x083d:  xor    %eax,%ebx
080a5c43 +0x083f:  mov    0x10(%ebp),%eax
080a5c46 +0x0842:  add    $0x8,%eax
080a5c49 +0x0845:  mov    (%eax),%eax
080a5c4b +0x0847:  xor    %eax,%esi
080a5c4d +0x0849:  mov    0x10(%ebp),%eax
080a5c50 +0x084c:  add    $0xc,%eax
080a5c53 +0x084f:  mov    (%eax),%eax
080a5c55 +0x0851:  xor    %eax,%edi
080a5c57 +0x0853:  addl   $0x10,0x10(%ebp)
080a5c5b +0x0857:  mov    -0x10(%ebp),%eax
080a5c5e +0x085a:  shr    $0x18,%eax
080a5c61 +0x085d:  movzbl %al,%eax
080a5c64 +0x0860:  mov    &_ZL2X1(,%eax,4),%edx
080a5c6b +0x0867:  mov    -0x10(%ebp),%eax
080a5c6e +0x086a:  shr    $0x10,%eax
080a5c71 +0x086d:  movzbl %al,%eax
080a5c74 +0x0870:  mov    &_ZL2X2(,%eax,4),%eax
080a5c7b +0x0877:  xor    %eax,%edx
080a5c7d +0x0879:  mov    -0x10(%ebp),%eax
080a5c80 +0x087c:  shr    $0x8,%eax
080a5c83 +0x087f:  movzbl %al,%eax
080a5c86 +0x0882:  mov    &_ZL2S1(,%eax,4),%eax
080a5c8d +0x0889:  xor    %eax,%edx
080a5c8f +0x088b:  movzbl -0x10(%ebp),%eax
080a5c93 +0x088f:  movzbl %al,%eax
080a5c96 +0x0892:  mov    &_ZL2S2(,%eax,4),%eax
080a5c9d +0x0899:  mov    %edx,%ecx
080a5c9f +0x089b:  xor    %eax,%ecx
080a5ca1 +0x089d:  mov    %ecx,-0x10(%ebp)
080a5ca4 +0x08a0:  mov    %ebx,%eax
080a5ca6 +0x08a2:  shr    $0x18,%eax
080a5ca9 +0x08a5:  movzbl %al,%eax
080a5cac +0x08a8:  mov    &_ZL2X1(,%eax,4),%edx
080a5cb3 +0x08af:  mov    %ebx,%eax
080a5cb5 +0x08b1:  shr    $0x10,%eax
080a5cb8 +0x08b4:  movzbl %al,%eax
080a5cbb +0x08b7:  mov    &_ZL2X2(,%eax,4),%eax
080a5cc2 +0x08be:  xor    %eax,%edx
080a5cc4 +0x08c0:  mov    %ebx,%eax
080a5cc6 +0x08c2:  shr    $0x8,%eax
080a5cc9 +0x08c5:  movzbl %al,%eax
080a5ccc +0x08c8:  mov    &_ZL2S1(,%eax,4),%eax
080a5cd3 +0x08cf:  xor    %eax,%edx
080a5cd5 +0x08d1:  mov    %ebx,%eax
080a5cd7 +0x08d3:  movzbl %al,%eax
080a5cda +0x08d6:  mov    &_ZL2S2(,%eax,4),%eax
080a5ce1 +0x08dd:  mov    %edx,%ebx
080a5ce3 +0x08df:  xor    %eax,%ebx
080a5ce5 +0x08e1:  mov    %esi,%eax
080a5ce7 +0x08e3:  shr    $0x18,%eax
080a5cea +0x08e6:  movzbl %al,%eax
080a5ced +0x08e9:  mov    &_ZL2X1(,%eax,4),%edx
080a5cf4 +0x08f0:  mov    %esi,%eax
080a5cf6 +0x08f2:  shr    $0x10,%eax
080a5cf9 +0x08f5:  movzbl %al,%eax
080a5cfc +0x08f8:  mov    &_ZL2X2(,%eax,4),%eax
080a5d03 +0x08ff:  xor    %eax,%edx
080a5d05 +0x0901:  mov    %esi,%eax
080a5d07 +0x0903:  shr    $0x8,%eax
080a5d0a +0x0906:  movzbl %al,%eax
080a5d0d +0x0909:  mov    &_ZL2S1(,%eax,4),%eax
080a5d14 +0x0910:  xor    %eax,%edx
080a5d16 +0x0912:  mov    %esi,%eax
080a5d18 +0x0914:  movzbl %al,%eax
080a5d1b +0x0917:  mov    &_ZL2S2(,%eax,4),%eax
080a5d22 +0x091e:  mov    %edx,%esi
080a5d24 +0x0920:  xor    %eax,%esi
080a5d26 +0x0922:  mov    %edi,%eax
080a5d28 +0x0924:  shr    $0x18,%eax
080a5d2b +0x0927:  movzbl %al,%eax
080a5d2e +0x092a:  mov    &_ZL2X1(,%eax,4),%edx
080a5d35 +0x0931:  mov    %edi,%eax
080a5d37 +0x0933:  shr    $0x10,%eax
080a5d3a +0x0936:  movzbl %al,%eax
080a5d3d +0x0939:  mov    &_ZL2X2(,%eax,4),%eax
080a5d44 +0x0940:  xor    %eax,%edx
080a5d46 +0x0942:  mov    %edi,%eax
080a5d48 +0x0944:  shr    $0x8,%eax
080a5d4b +0x0947:  movzbl %al,%eax
080a5d4e +0x094a:  mov    &_ZL2S1(,%eax,4),%eax
080a5d55 +0x0951:  xor    %eax,%edx
080a5d57 +0x0953:  mov    %edi,%eax
080a5d59 +0x0955:  movzbl %al,%eax
080a5d5c +0x0958:  mov    &_ZL2S2(,%eax,4),%eax
080a5d63 +0x095f:  mov    %edx,%edi
080a5d65 +0x0961:  xor    %eax,%edi
080a5d67 +0x0963:  xor    %esi,%ebx
080a5d69 +0x0965:  xor    %edi,%esi
080a5d6b +0x0967:  xor    %ebx,-0x10(%ebp)
080a5d6e +0x096a:  xor    %ebx,%edi
080a5d70 +0x096c:  xor    -0x10(%ebp),%esi
080a5d73 +0x096f:  xor    %esi,%ebx
080a5d75 +0x0971:  mov    %edi,%eax
080a5d77 +0x0973:  shl    $0x8,%eax
080a5d7a +0x0976:  mov    %eax,%edx
080a5d7c +0x0978:  and    $0xff00ff00,%edx
080a5d82 +0x097e:  mov    %edi,%eax
080a5d84 +0x0980:  shr    $0x8,%eax
080a5d87 +0x0983:  and    $0xff00ff,%eax
080a5d8c +0x0988:  mov    %edx,%edi
080a5d8e +0x098a:  xor    %eax,%edi
080a5d90 +0x098c:  rorl   $0x10,-0x10(%ebp)
080a5d94 +0x0990:  mov    %ebx,%edx
080a5d96 +0x0992:  shl    $0x18,%edx
080a5d99 +0x0995:  mov    %ebx,%eax
080a5d9b +0x0997:  shr    $0x18,%eax
080a5d9e +0x099a:  xor    %eax,%edx
080a5da0 +0x099c:  mov    %ebx,%eax
080a5da2 +0x099e:  and    $0xff00,%eax
080a5da7 +0x09a3:  shl    $0x8,%eax
080a5daa +0x09a6:  xor    %eax,%edx
080a5dac +0x09a8:  mov    %ebx,%eax
080a5dae +0x09aa:  and    $0xff0000,%eax
080a5db3 +0x09af:  shr    $0x8,%eax
080a5db6 +0x09b2:  mov    %edx,%ebx
080a5db8 +0x09b4:  xor    %eax,%ebx
080a5dba +0x09b6:  xor    %esi,%ebx
080a5dbc +0x09b8:  xor    %edi,%esi
080a5dbe +0x09ba:  xor    %ebx,-0x10(%ebp)
080a5dc1 +0x09bd:  xor    %ebx,%edi
080a5dc3 +0x09bf:  xor    -0x10(%ebp),%esi
080a5dc6 +0x09c2:  xor    %esi,%ebx
080a5dc8 +0x09c4:  mov    0x10(%ebp),%eax
080a5dcb +0x09c7:  mov    (%eax),%eax
080a5dcd +0x09c9:  xor    %eax,-0x10(%ebp)
080a5dd0 +0x09cc:  mov    0x10(%ebp),%eax
080a5dd3 +0x09cf:  add    $0x4,%eax
080a5dd6 +0x09d2:  mov    (%eax),%eax
080a5dd8 +0x09d4:  xor    %eax,%ebx
080a5dda +0x09d6:  mov    0x10(%ebp),%eax
080a5ddd +0x09d9:  add    $0x8,%eax
080a5de0 +0x09dc:  mov    (%eax),%eax
080a5de2 +0x09de:  xor    %eax,%esi
080a5de4 +0x09e0:  mov    0x10(%ebp),%eax
080a5de7 +0x09e3:  add    $0xc,%eax
080a5dea +0x09e6:  mov    (%eax),%eax
080a5dec +0x09e8:  xor    %eax,%edi
080a5dee +0x09ea:  addl   $0x10,0x10(%ebp)
080a5df2 +0x09ee:  mov    -0x10(%ebp),%eax
080a5df5 +0x09f1:  shr    $0x18,%eax
080a5df8 +0x09f4:  movzbl %al,%eax
080a5dfb +0x09f7:  mov    &_ZL2S1(,%eax,4),%edx
080a5e02 +0x09fe:  mov    -0x10(%ebp),%eax
080a5e05 +0x0a01:  shr    $0x10,%eax
080a5e08 +0x0a04:  movzbl %al,%eax
080a5e0b +0x0a07:  mov    &_ZL2S2(,%eax,4),%eax
080a5e12 +0x0a0e:  xor    %eax,%edx
080a5e14 +0x0a10:  mov    -0x10(%ebp),%eax
080a5e17 +0x0a13:  shr    $0x8,%eax
080a5e1a +0x0a16:  movzbl %al,%eax
080a5e1d +0x0a19:  mov    &_ZL2X1(,%eax,4),%eax
080a5e24 +0x0a20:  xor    %eax,%edx
080a5e26 +0x0a22:  movzbl -0x10(%ebp),%eax
080a5e2a +0x0a26:  movzbl %al,%eax
080a5e2d +0x0a29:  mov    &_ZL2X2(,%eax,4),%eax
080a5e34 +0x0a30:  mov    %edx,%ecx
080a5e36 +0x0a32:  xor    %eax,%ecx
080a5e38 +0x0a34:  mov    %ecx,-0x10(%ebp)
080a5e3b +0x0a37:  mov    %ebx,%eax
080a5e3d +0x0a39:  shr    $0x18,%eax
080a5e40 +0x0a3c:  movzbl %al,%eax
080a5e43 +0x0a3f:  mov    &_ZL2S1(,%eax,4),%edx
080a5e4a +0x0a46:  mov    %ebx,%eax
080a5e4c +0x0a48:  shr    $0x10,%eax
080a5e4f +0x0a4b:  movzbl %al,%eax
080a5e52 +0x0a4e:  mov    &_ZL2S2(,%eax,4),%eax
080a5e59 +0x0a55:  xor    %eax,%edx
080a5e5b +0x0a57:  mov    %ebx,%eax
080a5e5d +0x0a59:  shr    $0x8,%eax
080a5e60 +0x0a5c:  movzbl %al,%eax
080a5e63 +0x0a5f:  mov    &_ZL2X1(,%eax,4),%eax
080a5e6a +0x0a66:  xor    %eax,%edx
080a5e6c +0x0a68:  mov    %ebx,%eax
080a5e6e +0x0a6a:  movzbl %al,%eax
080a5e71 +0x0a6d:  mov    &_ZL2X2(,%eax,4),%eax
080a5e78 +0x0a74:  mov    %edx,%ebx
080a5e7a +0x0a76:  xor    %eax,%ebx
080a5e7c +0x0a78:  mov    %esi,%eax
080a5e7e +0x0a7a:  shr    $0x18,%eax
080a5e81 +0x0a7d:  movzbl %al,%eax
080a5e84 +0x0a80:  mov    &_ZL2S1(,%eax,4),%edx
080a5e8b +0x0a87:  mov    %esi,%eax
080a5e8d +0x0a89:  shr    $0x10,%eax
080a5e90 +0x0a8c:  movzbl %al,%eax
080a5e93 +0x0a8f:  mov    &_ZL2S2(,%eax,4),%eax
080a5e9a +0x0a96:  xor    %eax,%edx
080a5e9c +0x0a98:  mov    %esi,%eax
080a5e9e +0x0a9a:  shr    $0x8,%eax
080a5ea1 +0x0a9d:  movzbl %al,%eax
080a5ea4 +0x0aa0:  mov    &_ZL2X1(,%eax,4),%eax
080a5eab +0x0aa7:  xor    %eax,%edx
080a5ead +0x0aa9:  mov    %esi,%eax
080a5eaf +0x0aab:  movzbl %al,%eax
080a5eb2 +0x0aae:  mov    &_ZL2X2(,%eax,4),%eax
080a5eb9 +0x0ab5:  mov    %edx,%esi
080a5ebb +0x0ab7:  xor    %eax,%esi
080a5ebd +0x0ab9:  mov    %edi,%eax
080a5ebf +0x0abb:  shr    $0x18,%eax
080a5ec2 +0x0abe:  movzbl %al,%eax
080a5ec5 +0x0ac1:  mov    &_ZL2S1(,%eax,4),%edx
080a5ecc +0x0ac8:  mov    %edi,%eax
080a5ece +0x0aca:  shr    $0x10,%eax
080a5ed1 +0x0acd:  movzbl %al,%eax
080a5ed4 +0x0ad0:  mov    &_ZL2S2(,%eax,4),%eax
080a5edb +0x0ad7:  xor    %eax,%edx
080a5edd +0x0ad9:  mov    %edi,%eax
080a5edf +0x0adb:  shr    $0x8,%eax
080a5ee2 +0x0ade:  movzbl %al,%eax
080a5ee5 +0x0ae1:  mov    &_ZL2X1(,%eax,4),%eax
080a5eec +0x0ae8:  xor    %eax,%edx
080a5eee +0x0aea:  mov    %edi,%eax
080a5ef0 +0x0aec:  movzbl %al,%eax
080a5ef3 +0x0aef:  mov    &_ZL2X2(,%eax,4),%eax
080a5efa +0x0af6:  mov    %edx,%edi
080a5efc +0x0af8:  xor    %eax,%edi
080a5efe +0x0afa:  xor    %esi,%ebx
080a5f00 +0x0afc:  xor    %edi,%esi
080a5f02 +0x0afe:  xor    %ebx,-0x10(%ebp)
080a5f05 +0x0b01:  xor    %ebx,%edi
080a5f07 +0x0b03:  xor    -0x10(%ebp),%esi
080a5f0a +0x0b06:  xor    %esi,%ebx
080a5f0c +0x0b08:  mov    %ebx,%eax
080a5f0e +0x0b0a:  shl    $0x8,%eax
080a5f11 +0x0b0d:  mov    %eax,%edx
080a5f13 +0x0b0f:  and    $0xff00ff00,%edx
080a5f19 +0x0b15:  mov    %ebx,%eax
080a5f1b +0x0b17:  shr    $0x8,%eax
080a5f1e +0x0b1a:  and    $0xff00ff,%eax
080a5f23 +0x0b1f:  mov    %edx,%ebx
080a5f25 +0x0b21:  xor    %eax,%ebx
080a5f27 +0x0b23:  ror    $0x10,%esi
080a5f2a +0x0b26:  mov    %edi,%edx
080a5f2c +0x0b28:  shl    $0x18,%edx
080a5f2f +0x0b2b:  mov    %edi,%eax
080a5f31 +0x0b2d:  shr    $0x18,%eax
080a5f34 +0x0b30:  xor    %eax,%edx
080a5f36 +0x0b32:  mov    %edi,%eax
080a5f38 +0x0b34:  and    $0xff00,%eax
080a5f3d +0x0b39:  shl    $0x8,%eax
080a5f40 +0x0b3c:  xor    %eax,%edx
080a5f42 +0x0b3e:  mov    %edi,%eax
080a5f44 +0x0b40:  and    $0xff0000,%eax
080a5f49 +0x0b45:  shr    $0x8,%eax
080a5f4c +0x0b48:  mov    %edx,%edi
080a5f4e +0x0b4a:  xor    %eax,%edi
080a5f50 +0x0b4c:  xor    %esi,%ebx
080a5f52 +0x0b4e:  xor    %edi,%esi
080a5f54 +0x0b50:  xor    %ebx,-0x10(%ebp)
080a5f57 +0x0b53:  xor    %ebx,%edi
080a5f59 +0x0b55:  xor    -0x10(%ebp),%esi
080a5f5c +0x0b58:  xor    %esi,%ebx
080a5f5e +0x0b5a:  mov    0x10(%ebp),%eax
080a5f61 +0x0b5d:  mov    (%eax),%eax
080a5f63 +0x0b5f:  xor    %eax,-0x10(%ebp)
080a5f66 +0x0b62:  mov    0x10(%ebp),%eax
080a5f69 +0x0b65:  add    $0x4,%eax
080a5f6c +0x0b68:  mov    (%eax),%eax
080a5f6e +0x0b6a:  xor    %eax,%ebx
080a5f70 +0x0b6c:  mov    0x10(%ebp),%eax
080a5f73 +0x0b6f:  add    $0x8,%eax
080a5f76 +0x0b72:  mov    (%eax),%eax
080a5f78 +0x0b74:  xor    %eax,%esi
080a5f7a +0x0b76:  mov    0x10(%ebp),%eax
080a5f7d +0x0b79:  add    $0xc,%eax
080a5f80 +0x0b7c:  mov    (%eax),%eax
080a5f82 +0x0b7e:  xor    %eax,%edi
080a5f84 +0x0b80:  addl   $0x10,0x10(%ebp)
080a5f88 +0x0b84:  mov    -0x10(%ebp),%eax
080a5f8b +0x0b87:  shr    $0x18,%eax
080a5f8e +0x0b8a:  movzbl %al,%eax
080a5f91 +0x0b8d:  mov    &_ZL2X1(,%eax,4),%edx
080a5f98 +0x0b94:  mov    -0x10(%ebp),%eax
080a5f9b +0x0b97:  shr    $0x10,%eax
080a5f9e +0x0b9a:  movzbl %al,%eax
080a5fa1 +0x0b9d:  mov    &_ZL2X2(,%eax,4),%eax
080a5fa8 +0x0ba4:  xor    %eax,%edx
080a5faa +0x0ba6:  mov    -0x10(%ebp),%eax
080a5fad +0x0ba9:  shr    $0x8,%eax
080a5fb0 +0x0bac:  movzbl %al,%eax
080a5fb3 +0x0baf:  mov    &_ZL2S1(,%eax,4),%eax
080a5fba +0x0bb6:  xor    %eax,%edx
080a5fbc +0x0bb8:  movzbl -0x10(%ebp),%eax
080a5fc0 +0x0bbc:  movzbl %al,%eax
080a5fc3 +0x0bbf:  mov    &_ZL2S2(,%eax,4),%eax
080a5fca +0x0bc6:  mov    %edx,%ecx
080a5fcc +0x0bc8:  xor    %eax,%ecx
080a5fce +0x0bca:  mov    %ecx,-0x10(%ebp)
080a5fd1 +0x0bcd:  mov    %ebx,%eax
080a5fd3 +0x0bcf:  shr    $0x18,%eax
080a5fd6 +0x0bd2:  movzbl %al,%eax
080a5fd9 +0x0bd5:  mov    &_ZL2X1(,%eax,4),%edx
080a5fe0 +0x0bdc:  mov    %ebx,%eax
080a5fe2 +0x0bde:  shr    $0x10,%eax
080a5fe5 +0x0be1:  movzbl %al,%eax
080a5fe8 +0x0be4:  mov    &_ZL2X2(,%eax,4),%eax
080a5fef +0x0beb:  xor    %eax,%edx
080a5ff1 +0x0bed:  mov    %ebx,%eax
080a5ff3 +0x0bef:  shr    $0x8,%eax
080a5ff6 +0x0bf2:  movzbl %al,%eax
080a5ff9 +0x0bf5:  mov    &_ZL2S1(,%eax,4),%eax
080a6000 +0x0bfc:  xor    %eax,%edx
080a6002 +0x0bfe:  mov    %ebx,%eax
080a6004 +0x0c00:  movzbl %al,%eax
080a6007 +0x0c03:  mov    &_ZL2S2(,%eax,4),%eax
080a600e +0x0c0a:  mov    %edx,%ebx
080a6010 +0x0c0c:  xor    %eax,%ebx
080a6012 +0x0c0e:  mov    %esi,%eax
080a6014 +0x0c10:  shr    $0x18,%eax
080a6017 +0x0c13:  movzbl %al,%eax
080a601a +0x0c16:  mov    &_ZL2X1(,%eax,4),%edx
080a6021 +0x0c1d:  mov    %esi,%eax
080a6023 +0x0c1f:  shr    $0x10,%eax
080a6026 +0x0c22:  movzbl %al,%eax
080a6029 +0x0c25:  mov    &_ZL2X2(,%eax,4),%eax
080a6030 +0x0c2c:  xor    %eax,%edx
080a6032 +0x0c2e:  mov    %esi,%eax
080a6034 +0x0c30:  shr    $0x8,%eax
080a6037 +0x0c33:  movzbl %al,%eax
080a603a +0x0c36:  mov    &_ZL2S1(,%eax,4),%eax
080a6041 +0x0c3d:  xor    %eax,%edx
080a6043 +0x0c3f:  mov    %esi,%eax
080a6045 +0x0c41:  movzbl %al,%eax
080a6048 +0x0c44:  mov    &_ZL2S2(,%eax,4),%eax
080a604f +0x0c4b:  mov    %edx,%esi
080a6051 +0x0c4d:  xor    %eax,%esi
080a6053 +0x0c4f:  mov    %edi,%eax
080a6055 +0x0c51:  shr    $0x18,%eax
080a6058 +0x0c54:  movzbl %al,%eax
080a605b +0x0c57:  mov    &_ZL2X1(,%eax,4),%edx
080a6062 +0x0c5e:  mov    %edi,%eax
080a6064 +0x0c60:  shr    $0x10,%eax
080a6067 +0x0c63:  movzbl %al,%eax
080a606a +0x0c66:  mov    &_ZL2X2(,%eax,4),%eax
080a6071 +0x0c6d:  xor    %eax,%edx
080a6073 +0x0c6f:  mov    %edi,%eax
080a6075 +0x0c71:  shr    $0x8,%eax
080a6078 +0x0c74:  movzbl %al,%eax
080a607b +0x0c77:  mov    &_ZL2S1(,%eax,4),%eax
080a6082 +0x0c7e:  xor    %eax,%edx
080a6084 +0x0c80:  mov    %edi,%eax
080a6086 +0x0c82:  movzbl %al,%eax
080a6089 +0x0c85:  mov    &_ZL2S2(,%eax,4),%eax
080a6090 +0x0c8c:  mov    %edx,%edi
080a6092 +0x0c8e:  xor    %eax,%edi
080a6094 +0x0c90:  xor    %esi,%ebx
080a6096 +0x0c92:  xor    %edi,%esi
080a6098 +0x0c94:  xor    %ebx,-0x10(%ebp)
080a609b +0x0c97:  xor    %ebx,%edi
080a609d +0x0c99:  xor    -0x10(%ebp),%esi
080a60a0 +0x0c9c:  xor    %esi,%ebx
080a60a2 +0x0c9e:  mov    %edi,%eax
080a60a4 +0x0ca0:  shl    $0x8,%eax
080a60a7 +0x0ca3:  mov    %eax,%edx
080a60a9 +0x0ca5:  and    $0xff00ff00,%edx
080a60af +0x0cab:  mov    %edi,%eax
080a60b1 +0x0cad:  shr    $0x8,%eax
080a60b4 +0x0cb0:  and    $0xff00ff,%eax
080a60b9 +0x0cb5:  mov    %edx,%edi
080a60bb +0x0cb7:  xor    %eax,%edi
080a60bd +0x0cb9:  rorl   $0x10,-0x10(%ebp)
080a60c1 +0x0cbd:  mov    %ebx,%edx
080a60c3 +0x0cbf:  shl    $0x18,%edx
080a60c6 +0x0cc2:  mov    %ebx,%eax
080a60c8 +0x0cc4:  shr    $0x18,%eax
080a60cb +0x0cc7:  xor    %eax,%edx
080a60cd +0x0cc9:  mov    %ebx,%eax
080a60cf +0x0ccb:  and    $0xff00,%eax
080a60d4 +0x0cd0:  shl    $0x8,%eax
080a60d7 +0x0cd3:  xor    %eax,%edx
080a60d9 +0x0cd5:  mov    %ebx,%eax
080a60db +0x0cd7:  and    $0xff0000,%eax
080a60e0 +0x0cdc:  shr    $0x8,%eax
080a60e3 +0x0cdf:  mov    %edx,%ebx
080a60e5 +0x0ce1:  xor    %eax,%ebx
080a60e7 +0x0ce3:  xor    %esi,%ebx
080a60e9 +0x0ce5:  xor    %edi,%esi
080a60eb +0x0ce7:  xor    %ebx,-0x10(%ebp)
080a60ee +0x0cea:  xor    %ebx,%edi
080a60f0 +0x0cec:  xor    -0x10(%ebp),%esi
080a60f3 +0x0cef:  xor    %esi,%ebx
080a60f5 +0x0cf1:  mov    0x10(%ebp),%eax
080a60f8 +0x0cf4:  mov    (%eax),%eax
080a60fa +0x0cf6:  xor    %eax,-0x10(%ebp)
080a60fd +0x0cf9:  mov    0x10(%ebp),%eax
080a6100 +0x0cfc:  add    $0x4,%eax
080a6103 +0x0cff:  mov    (%eax),%eax
080a6105 +0x0d01:  xor    %eax,%ebx
080a6107 +0x0d03:  mov    0x10(%ebp),%eax
080a610a +0x0d06:  add    $0x8,%eax
080a610d +0x0d09:  mov    (%eax),%eax
080a610f +0x0d0b:  xor    %eax,%esi
080a6111 +0x0d0d:  mov    0x10(%ebp),%eax
080a6114 +0x0d10:  add    $0xc,%eax
080a6117 +0x0d13:  mov    (%eax),%eax
080a6119 +0x0d15:  xor    %eax,%edi
080a611b +0x0d17:  addl   $0x10,0x10(%ebp)
080a611f +0x0d1b:  mov    -0x10(%ebp),%eax
080a6122 +0x0d1e:  shr    $0x18,%eax
080a6125 +0x0d21:  movzbl %al,%eax
080a6128 +0x0d24:  mov    &_ZL2S1(,%eax,4),%edx
080a612f +0x0d2b:  mov    -0x10(%ebp),%eax
080a6132 +0x0d2e:  shr    $0x10,%eax
080a6135 +0x0d31:  movzbl %al,%eax
080a6138 +0x0d34:  mov    &_ZL2S2(,%eax,4),%eax
080a613f +0x0d3b:  xor    %eax,%edx
080a6141 +0x0d3d:  mov    -0x10(%ebp),%eax
080a6144 +0x0d40:  shr    $0x8,%eax
080a6147 +0x0d43:  movzbl %al,%eax
080a614a +0x0d46:  mov    &_ZL2X1(,%eax,4),%eax
080a6151 +0x0d4d:  xor    %eax,%edx
080a6153 +0x0d4f:  movzbl -0x10(%ebp),%eax
080a6157 +0x0d53:  movzbl %al,%eax
080a615a +0x0d56:  mov    &_ZL2X2(,%eax,4),%eax
080a6161 +0x0d5d:  mov    %edx,%ecx
080a6163 +0x0d5f:  xor    %eax,%ecx
080a6165 +0x0d61:  mov    %ecx,-0x10(%ebp)
080a6168 +0x0d64:  mov    %ebx,%eax
080a616a +0x0d66:  shr    $0x18,%eax
080a616d +0x0d69:  movzbl %al,%eax
080a6170 +0x0d6c:  mov    &_ZL2S1(,%eax,4),%edx
080a6177 +0x0d73:  mov    %ebx,%eax
080a6179 +0x0d75:  shr    $0x10,%eax
080a617c +0x0d78:  movzbl %al,%eax
080a617f +0x0d7b:  mov    &_ZL2S2(,%eax,4),%eax
080a6186 +0x0d82:  xor    %eax,%edx
080a6188 +0x0d84:  mov    %ebx,%eax
080a618a +0x0d86:  shr    $0x8,%eax
080a618d +0x0d89:  movzbl %al,%eax
080a6190 +0x0d8c:  mov    &_ZL2X1(,%eax,4),%eax
080a6197 +0x0d93:  xor    %eax,%edx
080a6199 +0x0d95:  mov    %ebx,%eax
080a619b +0x0d97:  movzbl %al,%eax
080a619e +0x0d9a:  mov    &_ZL2X2(,%eax,4),%eax
080a61a5 +0x0da1:  mov    %edx,%ebx
080a61a7 +0x0da3:  xor    %eax,%ebx
080a61a9 +0x0da5:  mov    %esi,%eax
080a61ab +0x0da7:  shr    $0x18,%eax
080a61ae +0x0daa:  movzbl %al,%eax
080a61b1 +0x0dad:  mov    &_ZL2S1(,%eax,4),%edx
080a61b8 +0x0db4:  mov    %esi,%eax
080a61ba +0x0db6:  shr    $0x10,%eax
080a61bd +0x0db9:  movzbl %al,%eax
080a61c0 +0x0dbc:  mov    &_ZL2S2(,%eax,4),%eax
080a61c7 +0x0dc3:  xor    %eax,%edx
080a61c9 +0x0dc5:  mov    %esi,%eax
080a61cb +0x0dc7:  shr    $0x8,%eax
080a61ce +0x0dca:  movzbl %al,%eax
080a61d1 +0x0dcd:  mov    &_ZL2X1(,%eax,4),%eax
080a61d8 +0x0dd4:  xor    %eax,%edx
080a61da +0x0dd6:  mov    %esi,%eax
080a61dc +0x0dd8:  movzbl %al,%eax
080a61df +0x0ddb:  mov    &_ZL2X2(,%eax,4),%eax
080a61e6 +0x0de2:  mov    %edx,%esi
080a61e8 +0x0de4:  xor    %eax,%esi
080a61ea +0x0de6:  mov    %edi,%eax
080a61ec +0x0de8:  shr    $0x18,%eax
080a61ef +0x0deb:  movzbl %al,%eax
080a61f2 +0x0dee:  mov    &_ZL2S1(,%eax,4),%edx
080a61f9 +0x0df5:  mov    %edi,%eax
080a61fb +0x0df7:  shr    $0x10,%eax
080a61fe +0x0dfa:  movzbl %al,%eax
080a6201 +0x0dfd:  mov    &_ZL2S2(,%eax,4),%eax
080a6208 +0x0e04:  xor    %eax,%edx
080a620a +0x0e06:  mov    %edi,%eax
080a620c +0x0e08:  shr    $0x8,%eax
080a620f +0x0e0b:  movzbl %al,%eax
080a6212 +0x0e0e:  mov    &_ZL2X1(,%eax,4),%eax
080a6219 +0x0e15:  xor    %eax,%edx
080a621b +0x0e17:  mov    %edi,%eax
080a621d +0x0e19:  movzbl %al,%eax
080a6220 +0x0e1c:  mov    &_ZL2X2(,%eax,4),%eax
080a6227 +0x0e23:  mov    %edx,%edi
080a6229 +0x0e25:  xor    %eax,%edi
080a622b +0x0e27:  xor    %esi,%ebx
080a622d +0x0e29:  xor    %edi,%esi
080a622f +0x0e2b:  xor    %ebx,-0x10(%ebp)
080a6232 +0x0e2e:  xor    %ebx,%edi
080a6234 +0x0e30:  xor    -0x10(%ebp),%esi
080a6237 +0x0e33:  xor    %esi,%ebx
080a6239 +0x0e35:  mov    %ebx,%eax
080a623b +0x0e37:  shl    $0x8,%eax
080a623e +0x0e3a:  mov    %eax,%edx
080a6240 +0x0e3c:  and    $0xff00ff00,%edx
080a6246 +0x0e42:  mov    %ebx,%eax
080a6248 +0x0e44:  shr    $0x8,%eax
080a624b +0x0e47:  and    $0xff00ff,%eax
080a6250 +0x0e4c:  mov    %edx,%ebx
080a6252 +0x0e4e:  xor    %eax,%ebx
080a6254 +0x0e50:  ror    $0x10,%esi
080a6257 +0x0e53:  mov    %edi,%edx
080a6259 +0x0e55:  shl    $0x18,%edx
080a625c +0x0e58:  mov    %edi,%eax
080a625e +0x0e5a:  shr    $0x18,%eax
080a6261 +0x0e5d:  xor    %eax,%edx
080a6263 +0x0e5f:  mov    %edi,%eax
080a6265 +0x0e61:  and    $0xff00,%eax
080a626a +0x0e66:  shl    $0x8,%eax
080a626d +0x0e69:  xor    %eax,%edx
080a626f +0x0e6b:  mov    %edi,%eax
080a6271 +0x0e6d:  and    $0xff0000,%eax
080a6276 +0x0e72:  shr    $0x8,%eax
080a6279 +0x0e75:  mov    %edx,%edi
080a627b +0x0e77:  xor    %eax,%edi
080a627d +0x0e79:  xor    %esi,%ebx
080a627f +0x0e7b:  xor    %edi,%esi
080a6281 +0x0e7d:  xor    %ebx,-0x10(%ebp)
080a6284 +0x0e80:  xor    %ebx,%edi
080a6286 +0x0e82:  xor    -0x10(%ebp),%esi
080a6289 +0x0e85:  xor    %esi,%ebx
080a628b +0x0e87:  mov    0x10(%ebp),%eax
080a628e +0x0e8a:  mov    (%eax),%eax
080a6290 +0x0e8c:  xor    %eax,-0x10(%ebp)
080a6293 +0x0e8f:  mov    0x10(%ebp),%eax
080a6296 +0x0e92:  add    $0x4,%eax
080a6299 +0x0e95:  mov    (%eax),%eax
080a629b +0x0e97:  xor    %eax,%ebx
080a629d +0x0e99:  mov    0x10(%ebp),%eax
080a62a0 +0x0e9c:  add    $0x8,%eax
080a62a3 +0x0e9f:  mov    (%eax),%eax
080a62a5 +0x0ea1:  xor    %eax,%esi
080a62a7 +0x0ea3:  mov    0x10(%ebp),%eax
080a62aa +0x0ea6:  add    $0xc,%eax
080a62ad +0x0ea9:  mov    (%eax),%eax
080a62af +0x0eab:  xor    %eax,%edi
080a62b1 +0x0ead:  addl   $0x10,0x10(%ebp)
080a62b5 +0x0eb1:  mov    -0x10(%ebp),%eax
080a62b8 +0x0eb4:  shr    $0x18,%eax
080a62bb +0x0eb7:  movzbl %al,%eax
080a62be +0x0eba:  mov    &_ZL2X1(,%eax,4),%edx
080a62c5 +0x0ec1:  mov    -0x10(%ebp),%eax
080a62c8 +0x0ec4:  shr    $0x10,%eax
080a62cb +0x0ec7:  movzbl %al,%eax
080a62ce +0x0eca:  mov    &_ZL2X2(,%eax,4),%eax
080a62d5 +0x0ed1:  xor    %eax,%edx
080a62d7 +0x0ed3:  mov    -0x10(%ebp),%eax
080a62da +0x0ed6:  shr    $0x8,%eax
080a62dd +0x0ed9:  movzbl %al,%eax
080a62e0 +0x0edc:  mov    &_ZL2S1(,%eax,4),%eax
080a62e7 +0x0ee3:  xor    %eax,%edx
080a62e9 +0x0ee5:  movzbl -0x10(%ebp),%eax
080a62ed +0x0ee9:  movzbl %al,%eax
080a62f0 +0x0eec:  mov    &_ZL2S2(,%eax,4),%eax
080a62f7 +0x0ef3:  mov    %edx,%ecx
080a62f9 +0x0ef5:  xor    %eax,%ecx
080a62fb +0x0ef7:  mov    %ecx,-0x10(%ebp)
080a62fe +0x0efa:  mov    %ebx,%eax
080a6300 +0x0efc:  shr    $0x18,%eax
080a6303 +0x0eff:  movzbl %al,%eax
080a6306 +0x0f02:  mov    &_ZL2X1(,%eax,4),%edx
080a630d +0x0f09:  mov    %ebx,%eax
080a630f +0x0f0b:  shr    $0x10,%eax
080a6312 +0x0f0e:  movzbl %al,%eax
080a6315 +0x0f11:  mov    &_ZL2X2(,%eax,4),%eax
080a631c +0x0f18:  xor    %eax,%edx
080a631e +0x0f1a:  mov    %ebx,%eax
080a6320 +0x0f1c:  shr    $0x8,%eax
080a6323 +0x0f1f:  movzbl %al,%eax
080a6326 +0x0f22:  mov    &_ZL2S1(,%eax,4),%eax
080a632d +0x0f29:  xor    %eax,%edx
080a632f +0x0f2b:  mov    %ebx,%eax
080a6331 +0x0f2d:  movzbl %al,%eax
080a6334 +0x0f30:  mov    &_ZL2S2(,%eax,4),%eax
080a633b +0x0f37:  mov    %edx,%ebx
080a633d +0x0f39:  xor    %eax,%ebx
080a633f +0x0f3b:  mov    %esi,%eax
080a6341 +0x0f3d:  shr    $0x18,%eax
080a6344 +0x0f40:  movzbl %al,%eax
080a6347 +0x0f43:  mov    &_ZL2X1(,%eax,4),%edx
080a634e +0x0f4a:  mov    %esi,%eax
080a6350 +0x0f4c:  shr    $0x10,%eax
080a6353 +0x0f4f:  movzbl %al,%eax
080a6356 +0x0f52:  mov    &_ZL2X2(,%eax,4),%eax
080a635d +0x0f59:  xor    %eax,%edx
080a635f +0x0f5b:  mov    %esi,%eax
080a6361 +0x0f5d:  shr    $0x8,%eax
080a6364 +0x0f60:  movzbl %al,%eax
080a6367 +0x0f63:  mov    &_ZL2S1(,%eax,4),%eax
080a636e +0x0f6a:  xor    %eax,%edx
080a6370 +0x0f6c:  mov    %esi,%eax
080a6372 +0x0f6e:  movzbl %al,%eax
080a6375 +0x0f71:  mov    &_ZL2S2(,%eax,4),%eax
080a637c +0x0f78:  mov    %edx,%esi
080a637e +0x0f7a:  xor    %eax,%esi
080a6380 +0x0f7c:  mov    %edi,%eax
080a6382 +0x0f7e:  shr    $0x18,%eax
080a6385 +0x0f81:  movzbl %al,%eax
080a6388 +0x0f84:  mov    &_ZL2X1(,%eax,4),%edx
080a638f +0x0f8b:  mov    %edi,%eax
080a6391 +0x0f8d:  shr    $0x10,%eax
080a6394 +0x0f90:  movzbl %al,%eax
080a6397 +0x0f93:  mov    &_ZL2X2(,%eax,4),%eax
080a639e +0x0f9a:  xor    %eax,%edx
080a63a0 +0x0f9c:  mov    %edi,%eax
080a63a2 +0x0f9e:  shr    $0x8,%eax
080a63a5 +0x0fa1:  movzbl %al,%eax
080a63a8 +0x0fa4:  mov    &_ZL2S1(,%eax,4),%eax
080a63af +0x0fab:  xor    %eax,%edx
080a63b1 +0x0fad:  mov    %edi,%eax
080a63b3 +0x0faf:  movzbl %al,%eax
080a63b6 +0x0fb2:  mov    &_ZL2S2(,%eax,4),%eax
080a63bd +0x0fb9:  mov    %edx,%edi
080a63bf +0x0fbb:  xor    %eax,%edi
080a63c1 +0x0fbd:  xor    %esi,%ebx
080a63c3 +0x0fbf:  xor    %edi,%esi
080a63c5 +0x0fc1:  xor    %ebx,-0x10(%ebp)
080a63c8 +0x0fc4:  xor    %ebx,%edi
080a63ca +0x0fc6:  xor    -0x10(%ebp),%esi
080a63cd +0x0fc9:  xor    %esi,%ebx
080a63cf +0x0fcb:  mov    %edi,%eax
080a63d1 +0x0fcd:  shl    $0x8,%eax
080a63d4 +0x0fd0:  mov    %eax,%edx
080a63d6 +0x0fd2:  and    $0xff00ff00,%edx
080a63dc +0x0fd8:  mov    %edi,%eax
080a63de +0x0fda:  shr    $0x8,%eax
080a63e1 +0x0fdd:  and    $0xff00ff,%eax
080a63e6 +0x0fe2:  mov    %edx,%edi
080a63e8 +0x0fe4:  xor    %eax,%edi
080a63ea +0x0fe6:  rorl   $0x10,-0x10(%ebp)
080a63ee +0x0fea:  mov    %ebx,%edx
080a63f0 +0x0fec:  shl    $0x18,%edx
080a63f3 +0x0fef:  mov    %ebx,%eax
080a63f5 +0x0ff1:  shr    $0x18,%eax
080a63f8 +0x0ff4:  xor    %eax,%edx
080a63fa +0x0ff6:  mov    %ebx,%eax
080a63fc +0x0ff8:  and    $0xff00,%eax
080a6401 +0x0ffd:  shl    $0x8,%eax
080a6404 +0x1000:  xor    %eax,%edx
080a6406 +0x1002:  mov    %ebx,%eax
080a6408 +0x1004:  and    $0xff0000,%eax
080a640d +0x1009:  shr    $0x8,%eax
080a6410 +0x100c:  mov    %edx,%ebx
080a6412 +0x100e:  xor    %eax,%ebx
080a6414 +0x1010:  xor    %esi,%ebx
080a6416 +0x1012:  xor    %edi,%esi
080a6418 +0x1014:  xor    %ebx,-0x10(%ebp)
080a641b +0x1017:  xor    %ebx,%edi
080a641d +0x1019:  xor    -0x10(%ebp),%esi
080a6420 +0x101c:  xor    %esi,%ebx
080a6422 +0x101e:  mov    0x10(%ebp),%eax
080a6425 +0x1021:  mov    (%eax),%eax
080a6427 +0x1023:  xor    %eax,-0x10(%ebp)
080a642a +0x1026:  mov    0x10(%ebp),%eax
080a642d +0x1029:  add    $0x4,%eax
080a6430 +0x102c:  mov    (%eax),%eax
080a6432 +0x102e:  xor    %eax,%ebx
080a6434 +0x1030:  mov    0x10(%ebp),%eax
080a6437 +0x1033:  add    $0x8,%eax
080a643a +0x1036:  mov    (%eax),%eax
080a643c +0x1038:  xor    %eax,%esi
080a643e +0x103a:  mov    0x10(%ebp),%eax
080a6441 +0x103d:  add    $0xc,%eax
080a6444 +0x1040:  mov    (%eax),%eax
080a6446 +0x1042:  xor    %eax,%edi
080a6448 +0x1044:  addl   $0x10,0x10(%ebp)
080a644c +0x1048:  mov    -0x10(%ebp),%eax
080a644f +0x104b:  shr    $0x18,%eax
080a6452 +0x104e:  movzbl %al,%eax
080a6455 +0x1051:  mov    &_ZL2S1(,%eax,4),%edx
080a645c +0x1058:  mov    -0x10(%ebp),%eax
080a645f +0x105b:  shr    $0x10,%eax
080a6462 +0x105e:  movzbl %al,%eax
080a6465 +0x1061:  mov    &_ZL2S2(,%eax,4),%eax
080a646c +0x1068:  xor    %eax,%edx
080a646e +0x106a:  mov    -0x10(%ebp),%eax
080a6471 +0x106d:  shr    $0x8,%eax
080a6474 +0x1070:  movzbl %al,%eax
080a6477 +0x1073:  mov    &_ZL2X1(,%eax,4),%eax
080a647e +0x107a:  xor    %eax,%edx
080a6480 +0x107c:  movzbl -0x10(%ebp),%eax
080a6484 +0x1080:  movzbl %al,%eax
080a6487 +0x1083:  mov    &_ZL2X2(,%eax,4),%eax
080a648e +0x108a:  mov    %edx,%ecx
080a6490 +0x108c:  xor    %eax,%ecx
080a6492 +0x108e:  mov    %ecx,-0x10(%ebp)
080a6495 +0x1091:  mov    %ebx,%eax
080a6497 +0x1093:  shr    $0x18,%eax
080a649a +0x1096:  movzbl %al,%eax
080a649d +0x1099:  mov    &_ZL2S1(,%eax,4),%edx
080a64a4 +0x10a0:  mov    %ebx,%eax
080a64a6 +0x10a2:  shr    $0x10,%eax
080a64a9 +0x10a5:  movzbl %al,%eax
080a64ac +0x10a8:  mov    &_ZL2S2(,%eax,4),%eax
080a64b3 +0x10af:  xor    %eax,%edx
080a64b5 +0x10b1:  mov    %ebx,%eax
080a64b7 +0x10b3:  shr    $0x8,%eax
080a64ba +0x10b6:  movzbl %al,%eax
080a64bd +0x10b9:  mov    &_ZL2X1(,%eax,4),%eax
080a64c4 +0x10c0:  xor    %eax,%edx
080a64c6 +0x10c2:  mov    %ebx,%eax
080a64c8 +0x10c4:  movzbl %al,%eax
080a64cb +0x10c7:  mov    &_ZL2X2(,%eax,4),%eax
080a64d2 +0x10ce:  mov    %edx,%ebx
080a64d4 +0x10d0:  xor    %eax,%ebx
080a64d6 +0x10d2:  mov    %esi,%eax
080a64d8 +0x10d4:  shr    $0x18,%eax
080a64db +0x10d7:  movzbl %al,%eax
080a64de +0x10da:  mov    &_ZL2S1(,%eax,4),%edx
080a64e5 +0x10e1:  mov    %esi,%eax
080a64e7 +0x10e3:  shr    $0x10,%eax
080a64ea +0x10e6:  movzbl %al,%eax
080a64ed +0x10e9:  mov    &_ZL2S2(,%eax,4),%eax
080a64f4 +0x10f0:  xor    %eax,%edx
080a64f6 +0x10f2:  mov    %esi,%eax
080a64f8 +0x10f4:  shr    $0x8,%eax
080a64fb +0x10f7:  movzbl %al,%eax
080a64fe +0x10fa:  mov    &_ZL2X1(,%eax,4),%eax
080a6505 +0x1101:  xor    %eax,%edx
080a6507 +0x1103:  mov    %esi,%eax
080a6509 +0x1105:  movzbl %al,%eax
080a650c +0x1108:  mov    &_ZL2X2(,%eax,4),%eax
080a6513 +0x110f:  mov    %edx,%esi
080a6515 +0x1111:  xor    %eax,%esi
080a6517 +0x1113:  mov    %edi,%eax
080a6519 +0x1115:  shr    $0x18,%eax
080a651c +0x1118:  movzbl %al,%eax
080a651f +0x111b:  mov    &_ZL2S1(,%eax,4),%edx
080a6526 +0x1122:  mov    %edi,%eax
080a6528 +0x1124:  shr    $0x10,%eax
080a652b +0x1127:  movzbl %al,%eax
080a652e +0x112a:  mov    &_ZL2S2(,%eax,4),%eax
080a6535 +0x1131:  xor    %eax,%edx
080a6537 +0x1133:  mov    %edi,%eax
080a6539 +0x1135:  shr    $0x8,%eax
080a653c +0x1138:  movzbl %al,%eax
080a653f +0x113b:  mov    &_ZL2X1(,%eax,4),%eax
080a6546 +0x1142:  xor    %eax,%edx
080a6548 +0x1144:  mov    %edi,%eax
080a654a +0x1146:  movzbl %al,%eax
080a654d +0x1149:  mov    &_ZL2X2(,%eax,4),%eax
080a6554 +0x1150:  mov    %edx,%edi
080a6556 +0x1152:  xor    %eax,%edi
080a6558 +0x1154:  xor    %esi,%ebx
080a655a +0x1156:  xor    %edi,%esi
080a655c +0x1158:  xor    %ebx,-0x10(%ebp)
080a655f +0x115b:  xor    %ebx,%edi
080a6561 +0x115d:  xor    -0x10(%ebp),%esi
080a6564 +0x1160:  xor    %esi,%ebx
080a6566 +0x1162:  mov    %ebx,%eax
080a6568 +0x1164:  shl    $0x8,%eax
080a656b +0x1167:  mov    %eax,%edx
080a656d +0x1169:  and    $0xff00ff00,%edx
080a6573 +0x116f:  mov    %ebx,%eax
080a6575 +0x1171:  shr    $0x8,%eax
080a6578 +0x1174:  and    $0xff00ff,%eax
080a657d +0x1179:  mov    %edx,%ebx
080a657f +0x117b:  xor    %eax,%ebx
080a6581 +0x117d:  ror    $0x10,%esi
080a6584 +0x1180:  mov    %edi,%edx
080a6586 +0x1182:  shl    $0x18,%edx
080a6589 +0x1185:  mov    %edi,%eax
080a658b +0x1187:  shr    $0x18,%eax
080a658e +0x118a:  xor    %eax,%edx
080a6590 +0x118c:  mov    %edi,%eax
080a6592 +0x118e:  and    $0xff00,%eax
080a6597 +0x1193:  shl    $0x8,%eax
080a659a +0x1196:  xor    %eax,%edx
080a659c +0x1198:  mov    %edi,%eax
080a659e +0x119a:  and    $0xff0000,%eax
080a65a3 +0x119f:  shr    $0x8,%eax
080a65a6 +0x11a2:  mov    %edx,%edi
080a65a8 +0x11a4:  xor    %eax,%edi
080a65aa +0x11a6:  xor    %esi,%ebx
080a65ac +0x11a8:  xor    %edi,%esi
080a65ae +0x11aa:  xor    %ebx,-0x10(%ebp)
080a65b1 +0x11ad:  xor    %ebx,%edi
080a65b3 +0x11af:  xor    -0x10(%ebp),%esi
080a65b6 +0x11b2:  xor    %esi,%ebx
080a65b8 +0x11b4:  mov    0x10(%ebp),%eax
080a65bb +0x11b7:  mov    (%eax),%eax
080a65bd +0x11b9:  xor    %eax,-0x10(%ebp)
080a65c0 +0x11bc:  mov    0x10(%ebp),%eax
080a65c3 +0x11bf:  add    $0x4,%eax
080a65c6 +0x11c2:  mov    (%eax),%eax
080a65c8 +0x11c4:  xor    %eax,%ebx
080a65ca +0x11c6:  mov    0x10(%ebp),%eax
080a65cd +0x11c9:  add    $0x8,%eax
080a65d0 +0x11cc:  mov    (%eax),%eax
080a65d2 +0x11ce:  xor    %eax,%esi
080a65d4 +0x11d0:  mov    0x10(%ebp),%eax
080a65d7 +0x11d3:  add    $0xc,%eax
080a65da +0x11d6:  mov    (%eax),%eax
080a65dc +0x11d8:  xor    %eax,%edi
080a65de +0x11da:  addl   $0x10,0x10(%ebp)
080a65e2 +0x11de:  mov    -0x10(%ebp),%eax
080a65e5 +0x11e1:  shr    $0x18,%eax
080a65e8 +0x11e4:  movzbl %al,%eax
080a65eb +0x11e7:  mov    &_ZL2X1(,%eax,4),%edx
080a65f2 +0x11ee:  mov    -0x10(%ebp),%eax
080a65f5 +0x11f1:  shr    $0x10,%eax
080a65f8 +0x11f4:  movzbl %al,%eax
080a65fb +0x11f7:  mov    &_ZL2X2(,%eax,4),%eax
080a6602 +0x11fe:  xor    %eax,%edx
080a6604 +0x1200:  mov    -0x10(%ebp),%eax
080a6607 +0x1203:  shr    $0x8,%eax
080a660a +0x1206:  movzbl %al,%eax
080a660d +0x1209:  mov    &_ZL2S1(,%eax,4),%eax
080a6614 +0x1210:  xor    %eax,%edx
080a6616 +0x1212:  movzbl -0x10(%ebp),%eax
080a661a +0x1216:  movzbl %al,%eax
080a661d +0x1219:  mov    &_ZL2S2(,%eax,4),%eax
080a6624 +0x1220:  mov    %edx,%ecx
080a6626 +0x1222:  xor    %eax,%ecx
080a6628 +0x1224:  mov    %ecx,-0x10(%ebp)
080a662b +0x1227:  mov    %ebx,%eax
080a662d +0x1229:  shr    $0x18,%eax
080a6630 +0x122c:  movzbl %al,%eax
080a6633 +0x122f:  mov    &_ZL2X1(,%eax,4),%edx
080a663a +0x1236:  mov    %ebx,%eax
080a663c +0x1238:  shr    $0x10,%eax
080a663f +0x123b:  movzbl %al,%eax
080a6642 +0x123e:  mov    &_ZL2X2(,%eax,4),%eax
080a6649 +0x1245:  xor    %eax,%edx
080a664b +0x1247:  mov    %ebx,%eax
080a664d +0x1249:  shr    $0x8,%eax
080a6650 +0x124c:  movzbl %al,%eax
080a6653 +0x124f:  mov    &_ZL2S1(,%eax,4),%eax
080a665a +0x1256:  xor    %eax,%edx
080a665c +0x1258:  mov    %ebx,%eax
080a665e +0x125a:  movzbl %al,%eax
080a6661 +0x125d:  mov    &_ZL2S2(,%eax,4),%eax
080a6668 +0x1264:  mov    %edx,%ebx
080a666a +0x1266:  xor    %eax,%ebx
080a666c +0x1268:  mov    %esi,%eax
080a666e +0x126a:  shr    $0x18,%eax
080a6671 +0x126d:  movzbl %al,%eax
080a6674 +0x1270:  mov    &_ZL2X1(,%eax,4),%edx
080a667b +0x1277:  mov    %esi,%eax
080a667d +0x1279:  shr    $0x10,%eax
080a6680 +0x127c:  movzbl %al,%eax
080a6683 +0x127f:  mov    &_ZL2X2(,%eax,4),%eax
080a668a +0x1286:  xor    %eax,%edx
080a668c +0x1288:  mov    %esi,%eax
080a668e +0x128a:  shr    $0x8,%eax
080a6691 +0x128d:  movzbl %al,%eax
080a6694 +0x1290:  mov    &_ZL2S1(,%eax,4),%eax
080a669b +0x1297:  xor    %eax,%edx
080a669d +0x1299:  mov    %esi,%eax
080a669f +0x129b:  movzbl %al,%eax
080a66a2 +0x129e:  mov    &_ZL2S2(,%eax,4),%eax
080a66a9 +0x12a5:  mov    %edx,%esi
080a66ab +0x12a7:  xor    %eax,%esi
080a66ad +0x12a9:  mov    %edi,%eax
080a66af +0x12ab:  shr    $0x18,%eax
080a66b2 +0x12ae:  movzbl %al,%eax
080a66b5 +0x12b1:  mov    &_ZL2X1(,%eax,4),%edx
080a66bc +0x12b8:  mov    %edi,%eax
080a66be +0x12ba:  shr    $0x10,%eax
080a66c1 +0x12bd:  movzbl %al,%eax
080a66c4 +0x12c0:  mov    &_ZL2X2(,%eax,4),%eax
080a66cb +0x12c7:  xor    %eax,%edx
080a66cd +0x12c9:  mov    %edi,%eax
080a66cf +0x12cb:  shr    $0x8,%eax
080a66d2 +0x12ce:  movzbl %al,%eax
080a66d5 +0x12d1:  mov    &_ZL2S1(,%eax,4),%eax
080a66dc +0x12d8:  xor    %eax,%edx
080a66de +0x12da:  mov    %edi,%eax
080a66e0 +0x12dc:  movzbl %al,%eax
080a66e3 +0x12df:  mov    &_ZL2S2(,%eax,4),%eax
080a66ea +0x12e6:  mov    %edx,%edi
080a66ec +0x12e8:  xor    %eax,%edi
080a66ee +0x12ea:  xor    %esi,%ebx
080a66f0 +0x12ec:  xor    %edi,%esi
080a66f2 +0x12ee:  xor    %ebx,-0x10(%ebp)
080a66f5 +0x12f1:  xor    %ebx,%edi
080a66f7 +0x12f3:  xor    -0x10(%ebp),%esi
080a66fa +0x12f6:  xor    %esi,%ebx
080a66fc +0x12f8:  mov    %edi,%eax
080a66fe +0x12fa:  shl    $0x8,%eax
080a6701 +0x12fd:  mov    %eax,%edx
080a6703 +0x12ff:  and    $0xff00ff00,%edx
080a6709 +0x1305:  mov    %edi,%eax
080a670b +0x1307:  shr    $0x8,%eax
080a670e +0x130a:  and    $0xff00ff,%eax
080a6713 +0x130f:  mov    %edx,%edi
080a6715 +0x1311:  xor    %eax,%edi
080a6717 +0x1313:  rorl   $0x10,-0x10(%ebp)
080a671b +0x1317:  mov    %ebx,%edx
080a671d +0x1319:  shl    $0x18,%edx
080a6720 +0x131c:  mov    %ebx,%eax
080a6722 +0x131e:  shr    $0x18,%eax
080a6725 +0x1321:  xor    %eax,%edx
080a6727 +0x1323:  mov    %ebx,%eax
080a6729 +0x1325:  and    $0xff00,%eax
080a672e +0x132a:  shl    $0x8,%eax
080a6731 +0x132d:  xor    %eax,%edx
080a6733 +0x132f:  mov    %ebx,%eax
080a6735 +0x1331:  and    $0xff0000,%eax
080a673a +0x1336:  shr    $0x8,%eax
080a673d +0x1339:  mov    %edx,%ebx
080a673f +0x133b:  xor    %eax,%ebx
080a6741 +0x133d:  xor    %esi,%ebx
080a6743 +0x133f:  xor    %edi,%esi
080a6745 +0x1341:  xor    %ebx,-0x10(%ebp)
080a6748 +0x1344:  xor    %ebx,%edi
080a674a +0x1346:  xor    -0x10(%ebp),%esi
080a674d +0x1349:  xor    %esi,%ebx
080a674f +0x134b:  mov    0x10(%ebp),%eax
080a6752 +0x134e:  mov    (%eax),%eax
080a6754 +0x1350:  xor    %eax,-0x10(%ebp)
080a6757 +0x1353:  mov    0x10(%ebp),%eax
080a675a +0x1356:  add    $0x4,%eax
080a675d +0x1359:  mov    (%eax),%eax
080a675f +0x135b:  xor    %eax,%ebx
080a6761 +0x135d:  mov    0x10(%ebp),%eax
080a6764 +0x1360:  add    $0x8,%eax
080a6767 +0x1363:  mov    (%eax),%eax
080a6769 +0x1365:  xor    %eax,%esi
080a676b +0x1367:  mov    0x10(%ebp),%eax
080a676e +0x136a:  add    $0xc,%eax
080a6771 +0x136d:  mov    (%eax),%eax
080a6773 +0x136f:  xor    %eax,%edi
080a6775 +0x1371:  addl   $0x10,0x10(%ebp)
080a6779 +0x1375:  mov    -0x10(%ebp),%eax
080a677c +0x1378:  shr    $0x18,%eax
080a677f +0x137b:  movzbl %al,%eax
080a6782 +0x137e:  mov    &_ZL2S1(,%eax,4),%edx
080a6789 +0x1385:  mov    -0x10(%ebp),%eax
080a678c +0x1388:  shr    $0x10,%eax
080a678f +0x138b:  movzbl %al,%eax
080a6792 +0x138e:  mov    &_ZL2S2(,%eax,4),%eax
080a6799 +0x1395:  xor    %eax,%edx
080a679b +0x1397:  mov    -0x10(%ebp),%eax
080a679e +0x139a:  shr    $0x8,%eax
080a67a1 +0x139d:  movzbl %al,%eax
080a67a4 +0x13a0:  mov    &_ZL2X1(,%eax,4),%eax
080a67ab +0x13a7:  xor    %eax,%edx
080a67ad +0x13a9:  movzbl -0x10(%ebp),%eax
080a67b1 +0x13ad:  movzbl %al,%eax
080a67b4 +0x13b0:  mov    &_ZL2X2(,%eax,4),%eax
080a67bb +0x13b7:  mov    %edx,%ecx
080a67bd +0x13b9:  xor    %eax,%ecx
080a67bf +0x13bb:  mov    %ecx,-0x10(%ebp)
080a67c2 +0x13be:  mov    %ebx,%eax
080a67c4 +0x13c0:  shr    $0x18,%eax
080a67c7 +0x13c3:  movzbl %al,%eax
080a67ca +0x13c6:  mov    &_ZL2S1(,%eax,4),%edx
080a67d1 +0x13cd:  mov    %ebx,%eax
080a67d3 +0x13cf:  shr    $0x10,%eax
080a67d6 +0x13d2:  movzbl %al,%eax
080a67d9 +0x13d5:  mov    &_ZL2S2(,%eax,4),%eax
080a67e0 +0x13dc:  xor    %eax,%edx
080a67e2 +0x13de:  mov    %ebx,%eax
080a67e4 +0x13e0:  shr    $0x8,%eax
080a67e7 +0x13e3:  movzbl %al,%eax
080a67ea +0x13e6:  mov    &_ZL2X1(,%eax,4),%eax
080a67f1 +0x13ed:  xor    %eax,%edx
080a67f3 +0x13ef:  mov    %ebx,%eax
080a67f5 +0x13f1:  movzbl %al,%eax
080a67f8 +0x13f4:  mov    &_ZL2X2(,%eax,4),%eax
080a67ff +0x13fb:  mov    %edx,%ebx
080a6801 +0x13fd:  xor    %eax,%ebx
080a6803 +0x13ff:  mov    %esi,%eax
080a6805 +0x1401:  shr    $0x18,%eax
080a6808 +0x1404:  movzbl %al,%eax
080a680b +0x1407:  mov    &_ZL2S1(,%eax,4),%edx
080a6812 +0x140e:  mov    %esi,%eax
080a6814 +0x1410:  shr    $0x10,%eax
080a6817 +0x1413:  movzbl %al,%eax
080a681a +0x1416:  mov    &_ZL2S2(,%eax,4),%eax
080a6821 +0x141d:  xor    %eax,%edx
080a6823 +0x141f:  mov    %esi,%eax
080a6825 +0x1421:  shr    $0x8,%eax
080a6828 +0x1424:  movzbl %al,%eax
080a682b +0x1427:  mov    &_ZL2X1(,%eax,4),%eax
080a6832 +0x142e:  xor    %eax,%edx
080a6834 +0x1430:  mov    %esi,%eax
080a6836 +0x1432:  movzbl %al,%eax
080a6839 +0x1435:  mov    &_ZL2X2(,%eax,4),%eax
080a6840 +0x143c:  mov    %edx,%esi
080a6842 +0x143e:  xor    %eax,%esi
080a6844 +0x1440:  mov    %edi,%eax
080a6846 +0x1442:  shr    $0x18,%eax
080a6849 +0x1445:  movzbl %al,%eax
080a684c +0x1448:  mov    &_ZL2S1(,%eax,4),%edx
080a6853 +0x144f:  mov    %edi,%eax
080a6855 +0x1451:  shr    $0x10,%eax
080a6858 +0x1454:  movzbl %al,%eax
080a685b +0x1457:  mov    &_ZL2S2(,%eax,4),%eax
080a6862 +0x145e:  xor    %eax,%edx
080a6864 +0x1460:  mov    %edi,%eax
080a6866 +0x1462:  shr    $0x8,%eax
080a6869 +0x1465:  movzbl %al,%eax
080a686c +0x1468:  mov    &_ZL2X1(,%eax,4),%eax
080a6873 +0x146f:  xor    %eax,%edx
080a6875 +0x1471:  mov    %edi,%eax
080a6877 +0x1473:  movzbl %al,%eax
080a687a +0x1476:  mov    &_ZL2X2(,%eax,4),%eax
080a6881 +0x147d:  mov    %edx,%edi
080a6883 +0x147f:  xor    %eax,%edi
080a6885 +0x1481:  xor    %esi,%ebx
080a6887 +0x1483:  xor    %edi,%esi
080a6889 +0x1485:  xor    %ebx,-0x10(%ebp)
080a688c +0x1488:  xor    %ebx,%edi
080a688e +0x148a:  xor    -0x10(%ebp),%esi
080a6891 +0x148d:  xor    %esi,%ebx
080a6893 +0x148f:  mov    %ebx,%eax
080a6895 +0x1491:  shl    $0x8,%eax
080a6898 +0x1494:  mov    %eax,%edx
080a689a +0x1496:  and    $0xff00ff00,%edx
080a68a0 +0x149c:  mov    %ebx,%eax
080a68a2 +0x149e:  shr    $0x8,%eax
080a68a5 +0x14a1:  and    $0xff00ff,%eax
080a68aa +0x14a6:  mov    %edx,%ebx
080a68ac +0x14a8:  xor    %eax,%ebx
080a68ae +0x14aa:  ror    $0x10,%esi
080a68b1 +0x14ad:  mov    %edi,%edx
080a68b3 +0x14af:  shl    $0x18,%edx
080a68b6 +0x14b2:  mov    %edi,%eax
080a68b8 +0x14b4:  shr    $0x18,%eax
080a68bb +0x14b7:  xor    %eax,%edx
080a68bd +0x14b9:  mov    %edi,%eax
080a68bf +0x14bb:  and    $0xff00,%eax
080a68c4 +0x14c0:  shl    $0x8,%eax
080a68c7 +0x14c3:  xor    %eax,%edx
080a68c9 +0x14c5:  mov    %edi,%eax
080a68cb +0x14c7:  and    $0xff0000,%eax
080a68d0 +0x14cc:  shr    $0x8,%eax
080a68d3 +0x14cf:  mov    %edx,%edi
080a68d5 +0x14d1:  xor    %eax,%edi
080a68d7 +0x14d3:  xor    %esi,%ebx
080a68d9 +0x14d5:  xor    %edi,%esi
080a68db +0x14d7:  xor    %ebx,-0x10(%ebp)
080a68de +0x14da:  xor    %ebx,%edi
080a68e0 +0x14dc:  xor    -0x10(%ebp),%esi
080a68e3 +0x14df:  xor    %esi,%ebx
080a68e5 +0x14e1:  mov    0x10(%ebp),%eax
080a68e8 +0x14e4:  mov    (%eax),%eax
080a68ea +0x14e6:  xor    %eax,-0x10(%ebp)
080a68ed +0x14e9:  mov    0x10(%ebp),%eax
080a68f0 +0x14ec:  add    $0x4,%eax
080a68f3 +0x14ef:  mov    (%eax),%eax
080a68f5 +0x14f1:  xor    %eax,%ebx
080a68f7 +0x14f3:  mov    0x10(%ebp),%eax
080a68fa +0x14f6:  add    $0x8,%eax
080a68fd +0x14f9:  mov    (%eax),%eax
080a68ff +0x14fb:  xor    %eax,%esi
080a6901 +0x14fd:  mov    0x10(%ebp),%eax
080a6904 +0x1500:  add    $0xc,%eax
080a6907 +0x1503:  mov    (%eax),%eax
080a6909 +0x1505:  xor    %eax,%edi
080a690b +0x1507:  addl   $0x10,0x10(%ebp)
080a690f +0x150b:  mov    -0x10(%ebp),%eax
080a6912 +0x150e:  shr    $0x18,%eax
080a6915 +0x1511:  movzbl %al,%eax
080a6918 +0x1514:  mov    &_ZL2X1(,%eax,4),%edx
080a691f +0x151b:  mov    -0x10(%ebp),%eax
080a6922 +0x151e:  shr    $0x10,%eax
080a6925 +0x1521:  movzbl %al,%eax
080a6928 +0x1524:  mov    &_ZL2X2(,%eax,4),%eax
080a692f +0x152b:  xor    %eax,%edx
080a6931 +0x152d:  mov    -0x10(%ebp),%eax
080a6934 +0x1530:  shr    $0x8,%eax
080a6937 +0x1533:  movzbl %al,%eax
080a693a +0x1536:  mov    &_ZL2S1(,%eax,4),%eax
080a6941 +0x153d:  xor    %eax,%edx
080a6943 +0x153f:  movzbl -0x10(%ebp),%eax
080a6947 +0x1543:  movzbl %al,%eax
080a694a +0x1546:  mov    &_ZL2S2(,%eax,4),%eax
080a6951 +0x154d:  mov    %edx,%ecx
080a6953 +0x154f:  xor    %eax,%ecx
080a6955 +0x1551:  mov    %ecx,-0x10(%ebp)
080a6958 +0x1554:  mov    %ebx,%eax
080a695a +0x1556:  shr    $0x18,%eax
080a695d +0x1559:  movzbl %al,%eax
080a6960 +0x155c:  mov    &_ZL2X1(,%eax,4),%edx
080a6967 +0x1563:  mov    %ebx,%eax
080a6969 +0x1565:  shr    $0x10,%eax
080a696c +0x1568:  movzbl %al,%eax
080a696f +0x156b:  mov    &_ZL2X2(,%eax,4),%eax
080a6976 +0x1572:  xor    %eax,%edx
080a6978 +0x1574:  mov    %ebx,%eax
080a697a +0x1576:  shr    $0x8,%eax
080a697d +0x1579:  movzbl %al,%eax
080a6980 +0x157c:  mov    &_ZL2S1(,%eax,4),%eax
080a6987 +0x1583:  xor    %eax,%edx
080a6989 +0x1585:  mov    %ebx,%eax
080a698b +0x1587:  movzbl %al,%eax
080a698e +0x158a:  mov    &_ZL2S2(,%eax,4),%eax
080a6995 +0x1591:  mov    %edx,%ebx
080a6997 +0x1593:  xor    %eax,%ebx
080a6999 +0x1595:  mov    %esi,%eax
080a699b +0x1597:  shr    $0x18,%eax
080a699e +0x159a:  movzbl %al,%eax
080a69a1 +0x159d:  mov    &_ZL2X1(,%eax,4),%edx
080a69a8 +0x15a4:  mov    %esi,%eax
080a69aa +0x15a6:  shr    $0x10,%eax
080a69ad +0x15a9:  movzbl %al,%eax
080a69b0 +0x15ac:  mov    &_ZL2X2(,%eax,4),%eax
080a69b7 +0x15b3:  xor    %eax,%edx
080a69b9 +0x15b5:  mov    %esi,%eax
080a69bb +0x15b7:  shr    $0x8,%eax
080a69be +0x15ba:  movzbl %al,%eax
080a69c1 +0x15bd:  mov    &_ZL2S1(,%eax,4),%eax
080a69c8 +0x15c4:  xor    %eax,%edx
080a69ca +0x15c6:  mov    %esi,%eax
080a69cc +0x15c8:  movzbl %al,%eax
080a69cf +0x15cb:  mov    &_ZL2S2(,%eax,4),%eax
080a69d6 +0x15d2:  mov    %edx,%esi
080a69d8 +0x15d4:  xor    %eax,%esi
080a69da +0x15d6:  mov    %edi,%eax
080a69dc +0x15d8:  shr    $0x18,%eax
080a69df +0x15db:  movzbl %al,%eax
080a69e2 +0x15de:  mov    &_ZL2X1(,%eax,4),%edx
080a69e9 +0x15e5:  mov    %edi,%eax
080a69eb +0x15e7:  shr    $0x10,%eax
080a69ee +0x15ea:  movzbl %al,%eax
080a69f1 +0x15ed:  mov    &_ZL2X2(,%eax,4),%eax
080a69f8 +0x15f4:  xor    %eax,%edx
080a69fa +0x15f6:  mov    %edi,%eax
080a69fc +0x15f8:  shr    $0x8,%eax
080a69ff +0x15fb:  movzbl %al,%eax
080a6a02 +0x15fe:  mov    &_ZL2S1(,%eax,4),%eax
080a6a09 +0x1605:  xor    %eax,%edx
080a6a0b +0x1607:  mov    %edi,%eax
080a6a0d +0x1609:  movzbl %al,%eax
080a6a10 +0x160c:  mov    &_ZL2S2(,%eax,4),%eax
080a6a17 +0x1613:  mov    %edx,%edi
080a6a19 +0x1615:  xor    %eax,%edi
080a6a1b +0x1617:  xor    %esi,%ebx
080a6a1d +0x1619:  xor    %edi,%esi
080a6a1f +0x161b:  xor    %ebx,-0x10(%ebp)
080a6a22 +0x161e:  xor    %ebx,%edi
080a6a24 +0x1620:  xor    -0x10(%ebp),%esi
080a6a27 +0x1623:  xor    %esi,%ebx
080a6a29 +0x1625:  mov    %edi,%eax
080a6a2b +0x1627:  shl    $0x8,%eax
080a6a2e +0x162a:  mov    %eax,%edx
080a6a30 +0x162c:  and    $0xff00ff00,%edx
080a6a36 +0x1632:  mov    %edi,%eax
080a6a38 +0x1634:  shr    $0x8,%eax
080a6a3b +0x1637:  and    $0xff00ff,%eax
080a6a40 +0x163c:  mov    %edx,%edi
080a6a42 +0x163e:  xor    %eax,%edi
080a6a44 +0x1640:  rorl   $0x10,-0x10(%ebp)
080a6a48 +0x1644:  mov    %ebx,%edx
080a6a4a +0x1646:  shl    $0x18,%edx
080a6a4d +0x1649:  mov    %ebx,%eax
080a6a4f +0x164b:  shr    $0x18,%eax
080a6a52 +0x164e:  xor    %eax,%edx
080a6a54 +0x1650:  mov    %ebx,%eax
080a6a56 +0x1652:  and    $0xff00,%eax
080a6a5b +0x1657:  shl    $0x8,%eax
080a6a5e +0x165a:  xor    %eax,%edx
080a6a60 +0x165c:  mov    %ebx,%eax
080a6a62 +0x165e:  and    $0xff0000,%eax
080a6a67 +0x1663:  shr    $0x8,%eax
080a6a6a +0x1666:  mov    %edx,%ebx
080a6a6c +0x1668:  xor    %eax,%ebx
080a6a6e +0x166a:  xor    %esi,%ebx
080a6a70 +0x166c:  xor    %edi,%esi
080a6a72 +0x166e:  xor    %ebx,-0x10(%ebp)
080a6a75 +0x1671:  xor    %ebx,%edi
080a6a77 +0x1673:  xor    -0x10(%ebp),%esi
080a6a7a +0x1676:  xor    %esi,%ebx
080a6a7c +0x1678:  mov    0x10(%ebp),%eax
080a6a7f +0x167b:  mov    (%eax),%eax
080a6a81 +0x167d:  xor    %eax,-0x10(%ebp)
080a6a84 +0x1680:  mov    0x10(%ebp),%eax
080a6a87 +0x1683:  add    $0x4,%eax
080a6a8a +0x1686:  mov    (%eax),%eax
080a6a8c +0x1688:  xor    %eax,%ebx
080a6a8e +0x168a:  mov    0x10(%ebp),%eax
080a6a91 +0x168d:  add    $0x8,%eax
080a6a94 +0x1690:  mov    (%eax),%eax
080a6a96 +0x1692:  xor    %eax,%esi
080a6a98 +0x1694:  mov    0x10(%ebp),%eax
080a6a9b +0x1697:  add    $0xc,%eax
080a6a9e +0x169a:  mov    (%eax),%eax
080a6aa0 +0x169c:  xor    %eax,%edi
080a6aa2 +0x169e:  addl   $0x10,0x10(%ebp)
080a6aa6 +0x16a2:  mov    -0x10(%ebp),%eax
080a6aa9 +0x16a5:  shr    $0x18,%eax
080a6aac +0x16a8:  movzbl %al,%eax
080a6aaf +0x16ab:  mov    &_ZL2S1(,%eax,4),%edx
080a6ab6 +0x16b2:  mov    -0x10(%ebp),%eax
080a6ab9 +0x16b5:  shr    $0x10,%eax
080a6abc +0x16b8:  movzbl %al,%eax
080a6abf +0x16bb:  mov    &_ZL2S2(,%eax,4),%eax
080a6ac6 +0x16c2:  xor    %eax,%edx
080a6ac8 +0x16c4:  mov    -0x10(%ebp),%eax
080a6acb +0x16c7:  shr    $0x8,%eax
080a6ace +0x16ca:  movzbl %al,%eax
080a6ad1 +0x16cd:  mov    &_ZL2X1(,%eax,4),%eax
080a6ad8 +0x16d4:  xor    %eax,%edx
080a6ada +0x16d6:  movzbl -0x10(%ebp),%eax
080a6ade +0x16da:  movzbl %al,%eax
080a6ae1 +0x16dd:  mov    &_ZL2X2(,%eax,4),%eax
080a6ae8 +0x16e4:  mov    %edx,%ecx
080a6aea +0x16e6:  xor    %eax,%ecx
080a6aec +0x16e8:  mov    %ecx,-0x10(%ebp)
080a6aef +0x16eb:  mov    %ebx,%eax
080a6af1 +0x16ed:  shr    $0x18,%eax
080a6af4 +0x16f0:  movzbl %al,%eax
080a6af7 +0x16f3:  mov    &_ZL2S1(,%eax,4),%edx
080a6afe +0x16fa:  mov    %ebx,%eax
080a6b00 +0x16fc:  shr    $0x10,%eax
080a6b03 +0x16ff:  movzbl %al,%eax
080a6b06 +0x1702:  mov    &_ZL2S2(,%eax,4),%eax
080a6b0d +0x1709:  xor    %eax,%edx
080a6b0f +0x170b:  mov    %ebx,%eax
080a6b11 +0x170d:  shr    $0x8,%eax
080a6b14 +0x1710:  movzbl %al,%eax
080a6b17 +0x1713:  mov    &_ZL2X1(,%eax,4),%eax
080a6b1e +0x171a:  xor    %eax,%edx
080a6b20 +0x171c:  mov    %ebx,%eax
080a6b22 +0x171e:  movzbl %al,%eax
080a6b25 +0x1721:  mov    &_ZL2X2(,%eax,4),%eax
080a6b2c +0x1728:  mov    %edx,%ebx
080a6b2e +0x172a:  xor    %eax,%ebx
080a6b30 +0x172c:  mov    %esi,%eax
080a6b32 +0x172e:  shr    $0x18,%eax
080a6b35 +0x1731:  movzbl %al,%eax
080a6b38 +0x1734:  mov    &_ZL2S1(,%eax,4),%edx
080a6b3f +0x173b:  mov    %esi,%eax
080a6b41 +0x173d:  shr    $0x10,%eax
080a6b44 +0x1740:  movzbl %al,%eax
080a6b47 +0x1743:  mov    &_ZL2S2(,%eax,4),%eax
080a6b4e +0x174a:  xor    %eax,%edx
080a6b50 +0x174c:  mov    %esi,%eax
080a6b52 +0x174e:  shr    $0x8,%eax
080a6b55 +0x1751:  movzbl %al,%eax
080a6b58 +0x1754:  mov    &_ZL2X1(,%eax,4),%eax
080a6b5f +0x175b:  xor    %eax,%edx
080a6b61 +0x175d:  mov    %esi,%eax
080a6b63 +0x175f:  movzbl %al,%eax
080a6b66 +0x1762:  mov    &_ZL2X2(,%eax,4),%eax
080a6b6d +0x1769:  mov    %edx,%esi
080a6b6f +0x176b:  xor    %eax,%esi
080a6b71 +0x176d:  mov    %edi,%eax
080a6b73 +0x176f:  shr    $0x18,%eax
080a6b76 +0x1772:  movzbl %al,%eax
080a6b79 +0x1775:  mov    &_ZL2S1(,%eax,4),%edx
080a6b80 +0x177c:  mov    %edi,%eax
080a6b82 +0x177e:  shr    $0x10,%eax
080a6b85 +0x1781:  movzbl %al,%eax
080a6b88 +0x1784:  mov    &_ZL2S2(,%eax,4),%eax
080a6b8f +0x178b:  xor    %eax,%edx
080a6b91 +0x178d:  mov    %edi,%eax
080a6b93 +0x178f:  shr    $0x8,%eax
080a6b96 +0x1792:  movzbl %al,%eax
080a6b99 +0x1795:  mov    &_ZL2X1(,%eax,4),%eax
080a6ba0 +0x179c:  xor    %eax,%edx
080a6ba2 +0x179e:  mov    %edi,%eax
080a6ba4 +0x17a0:  movzbl %al,%eax
080a6ba7 +0x17a3:  mov    &_ZL2X2(,%eax,4),%eax
080a6bae +0x17aa:  mov    %edx,%edi
080a6bb0 +0x17ac:  xor    %eax,%edi
080a6bb2 +0x17ae:  xor    %esi,%ebx
080a6bb4 +0x17b0:  xor    %edi,%esi
080a6bb6 +0x17b2:  xor    %ebx,-0x10(%ebp)
080a6bb9 +0x17b5:  xor    %ebx,%edi
080a6bbb +0x17b7:  xor    -0x10(%ebp),%esi
080a6bbe +0x17ba:  xor    %esi,%ebx
080a6bc0 +0x17bc:  mov    %ebx,%eax
080a6bc2 +0x17be:  shl    $0x8,%eax
080a6bc5 +0x17c1:  mov    %eax,%edx
080a6bc7 +0x17c3:  and    $0xff00ff00,%edx
080a6bcd +0x17c9:  mov    %ebx,%eax
080a6bcf +0x17cb:  shr    $0x8,%eax
080a6bd2 +0x17ce:  and    $0xff00ff,%eax
080a6bd7 +0x17d3:  mov    %edx,%ebx
080a6bd9 +0x17d5:  xor    %eax,%ebx
080a6bdb +0x17d7:  ror    $0x10,%esi
080a6bde +0x17da:  mov    %edi,%edx
080a6be0 +0x17dc:  shl    $0x18,%edx
080a6be3 +0x17df:  mov    %edi,%eax
080a6be5 +0x17e1:  shr    $0x18,%eax
080a6be8 +0x17e4:  xor    %eax,%edx
080a6bea +0x17e6:  mov    %edi,%eax
080a6bec +0x17e8:  and    $0xff00,%eax
080a6bf1 +0x17ed:  shl    $0x8,%eax
080a6bf4 +0x17f0:  xor    %eax,%edx
080a6bf6 +0x17f2:  mov    %edi,%eax
080a6bf8 +0x17f4:  and    $0xff0000,%eax
080a6bfd +0x17f9:  shr    $0x8,%eax
080a6c00 +0x17fc:  mov    %edx,%edi
080a6c02 +0x17fe:  xor    %eax,%edi
080a6c04 +0x1800:  xor    %esi,%ebx
080a6c06 +0x1802:  xor    %edi,%esi
080a6c08 +0x1804:  xor    %ebx,-0x10(%ebp)
080a6c0b +0x1807:  xor    %ebx,%edi
080a6c0d +0x1809:  xor    -0x10(%ebp),%esi
080a6c10 +0x180c:  xor    %esi,%ebx
080a6c12 +0x180e:  mov    0x10(%ebp),%eax
080a6c15 +0x1811:  mov    (%eax),%eax
080a6c17 +0x1813:  xor    %eax,-0x10(%ebp)
080a6c1a +0x1816:  mov    0x10(%ebp),%eax
080a6c1d +0x1819:  add    $0x4,%eax
080a6c20 +0x181c:  mov    (%eax),%eax
080a6c22 +0x181e:  xor    %eax,%ebx
080a6c24 +0x1820:  mov    0x10(%ebp),%eax
080a6c27 +0x1823:  add    $0x8,%eax
080a6c2a +0x1826:  mov    (%eax),%eax
080a6c2c +0x1828:  xor    %eax,%esi
080a6c2e +0x182a:  mov    0x10(%ebp),%eax
080a6c31 +0x182d:  add    $0xc,%eax
080a6c34 +0x1830:  mov    (%eax),%eax
080a6c36 +0x1832:  xor    %eax,%edi
080a6c38 +0x1834:  addl   $0x10,0x10(%ebp)
080a6c3c +0x1838:  mov    -0x10(%ebp),%eax
080a6c3f +0x183b:  shr    $0x18,%eax
080a6c42 +0x183e:  movzbl %al,%eax
080a6c45 +0x1841:  mov    &_ZL2X1(,%eax,4),%eax
080a6c4c +0x1848:  mov    %eax,%edx
080a6c4e +0x184a:  mov    0x14(%ebp),%eax
080a6c51 +0x184d:  mov    %dl,(%eax)
080a6c53 +0x184f:  mov    0x14(%ebp),%eax
080a6c56 +0x1852:  lea    0x1(%eax),%edx
080a6c59 +0x1855:  mov    -0x10(%ebp),%eax
080a6c5c +0x1858:  shr    $0x10,%eax
080a6c5f +0x185b:  movzbl %al,%eax
080a6c62 +0x185e:  mov    &_ZL2X2(,%eax,4),%eax
080a6c69 +0x1865:  shr    $0x8,%eax
080a6c6c +0x1868:  mov    %al,(%edx)
080a6c6e +0x186a:  mov    0x14(%ebp),%eax
080a6c71 +0x186d:  lea    0x2(%eax),%edx
080a6c74 +0x1870:  mov    -0x10(%ebp),%eax
080a6c77 +0x1873:  shr    $0x8,%eax
080a6c7a +0x1876:  movzbl %al,%eax
080a6c7d +0x1879:  mov    &_ZL2S1(,%eax,4),%eax
080a6c84 +0x1880:  mov    %al,(%edx)
080a6c86 +0x1882:  mov    0x14(%ebp),%eax
080a6c89 +0x1885:  lea    0x3(%eax),%edx
080a6c8c +0x1888:  movzbl -0x10(%ebp),%eax
080a6c90 +0x188c:  movzbl %al,%eax
080a6c93 +0x188f:  mov    &_ZL2S2(,%eax,4),%eax
080a6c9a +0x1896:  mov    %al,(%edx)
080a6c9c +0x1898:  mov    0x14(%ebp),%eax
080a6c9f +0x189b:  lea    0x4(%eax),%edx
080a6ca2 +0x189e:  mov    %ebx,%eax
080a6ca4 +0x18a0:  shr    $0x18,%eax
080a6ca7 +0x18a3:  movzbl %al,%eax
080a6caa +0x18a6:  mov    &_ZL2X1(,%eax,4),%eax
080a6cb1 +0x18ad:  mov    %al,(%edx)
080a6cb3 +0x18af:  mov    0x14(%ebp),%eax
080a6cb6 +0x18b2:  lea    0x5(%eax),%edx
080a6cb9 +0x18b5:  mov    %ebx,%eax
080a6cbb +0x18b7:  shr    $0x10,%eax
080a6cbe +0x18ba:  movzbl %al,%eax
080a6cc1 +0x18bd:  mov    &_ZL2X2(,%eax,4),%eax
080a6cc8 +0x18c4:  shr    $0x8,%eax
080a6ccb +0x18c7:  mov    %al,(%edx)
080a6ccd +0x18c9:  mov    0x14(%ebp),%eax
080a6cd0 +0x18cc:  lea    0x6(%eax),%edx
080a6cd3 +0x18cf:  mov    %ebx,%eax
080a6cd5 +0x18d1:  shr    $0x8,%eax
080a6cd8 +0x18d4:  movzbl %al,%eax
080a6cdb +0x18d7:  mov    &_ZL2S1(,%eax,4),%eax
080a6ce2 +0x18de:  mov    %al,(%edx)
080a6ce4 +0x18e0:  mov    0x14(%ebp),%eax
080a6ce7 +0x18e3:  lea    0x7(%eax),%edx
080a6cea +0x18e6:  mov    %ebx,%eax
080a6cec +0x18e8:  movzbl %al,%eax
080a6cef +0x18eb:  mov    &_ZL2S2(,%eax,4),%eax
080a6cf6 +0x18f2:  mov    %al,(%edx)
080a6cf8 +0x18f4:  mov    0x14(%ebp),%eax
080a6cfb +0x18f7:  lea    0x8(%eax),%edx
080a6cfe +0x18fa:  mov    %esi,%eax
080a6d00 +0x18fc:  shr    $0x18,%eax
080a6d03 +0x18ff:  movzbl %al,%eax
080a6d06 +0x1902:  mov    &_ZL2X1(,%eax,4),%eax
080a6d0d +0x1909:  mov    %al,(%edx)
080a6d0f +0x190b:  mov    0x14(%ebp),%eax
080a6d12 +0x190e:  lea    0x9(%eax),%edx
080a6d15 +0x1911:  mov    %esi,%eax
080a6d17 +0x1913:  shr    $0x10,%eax
080a6d1a +0x1916:  movzbl %al,%eax
080a6d1d +0x1919:  mov    &_ZL2X2(,%eax,4),%eax
080a6d24 +0x1920:  shr    $0x8,%eax
080a6d27 +0x1923:  mov    %al,(%edx)
080a6d29 +0x1925:  mov    0x14(%ebp),%eax
080a6d2c +0x1928:  lea    0xa(%eax),%edx
080a6d2f +0x192b:  mov    %esi,%eax
080a6d31 +0x192d:  shr    $0x8,%eax
080a6d34 +0x1930:  movzbl %al,%eax
080a6d37 +0x1933:  mov    &_ZL2S1(,%eax,4),%eax
080a6d3e +0x193a:  mov    %al,(%edx)
080a6d40 +0x193c:  mov    0x14(%ebp),%eax
080a6d43 +0x193f:  lea    0xb(%eax),%edx
080a6d46 +0x1942:  mov    %esi,%eax
080a6d48 +0x1944:  movzbl %al,%eax
080a6d4b +0x1947:  mov    &_ZL2S2(,%eax,4),%eax
080a6d52 +0x194e:  mov    %al,(%edx)
080a6d54 +0x1950:  mov    0x14(%ebp),%eax
080a6d57 +0x1953:  lea    0xc(%eax),%edx
080a6d5a +0x1956:  mov    %edi,%eax
080a6d5c +0x1958:  shr    $0x18,%eax
080a6d5f +0x195b:  movzbl %al,%eax
080a6d62 +0x195e:  mov    &_ZL2X1(,%eax,4),%eax
080a6d69 +0x1965:  mov    %al,(%edx)
080a6d6b +0x1967:  mov    0x14(%ebp),%eax
080a6d6e +0x196a:  lea    0xd(%eax),%edx
080a6d71 +0x196d:  mov    %edi,%eax
080a6d73 +0x196f:  shr    $0x10,%eax
080a6d76 +0x1972:  movzbl %al,%eax
080a6d79 +0x1975:  mov    &_ZL2X2(,%eax,4),%eax
080a6d80 +0x197c:  shr    $0x8,%eax
080a6d83 +0x197f:  mov    %al,(%edx)
080a6d85 +0x1981:  mov    0x14(%ebp),%eax
080a6d88 +0x1984:  lea    0xe(%eax),%edx
080a6d8b +0x1987:  mov    %edi,%eax
080a6d8d +0x1989:  shr    $0x8,%eax
080a6d90 +0x198c:  movzbl %al,%eax
080a6d93 +0x198f:  mov    &_ZL2S1(,%eax,4),%eax
080a6d9a +0x1996:  mov    %al,(%edx)
080a6d9c +0x1998:  mov    0x14(%ebp),%eax
080a6d9f +0x199b:  lea    0xf(%eax),%edx
080a6da2 +0x199e:  mov    %edi,%eax
080a6da4 +0x19a0:  movzbl %al,%eax
080a6da7 +0x19a3:  mov    &_ZL2S2(,%eax,4),%eax
080a6dae +0x19aa:  mov    %al,(%edx)
080a6db0 +0x19ac:  mov    0x14(%ebp),%eax
080a6db3 +0x19af:  mov    0x14(%ebp),%edx
080a6db6 +0x19b2:  mov    (%edx),%ecx
080a6db8 +0x19b4:  mov    0x10(%ebp),%edx
080a6dbb +0x19b7:  mov    (%edx),%edx
080a6dbd +0x19b9:  xor    %ecx,%edx
080a6dbf +0x19bb:  mov    %edx,(%eax)
080a6dc1 +0x19bd:  mov    0x14(%ebp),%eax
080a6dc4 +0x19c0:  add    $0x4,%eax
080a6dc7 +0x19c3:  mov    0x14(%ebp),%edx
080a6dca +0x19c6:  add    $0x4,%edx
080a6dcd +0x19c9:  mov    (%edx),%ecx
080a6dcf +0x19cb:  mov    0x10(%ebp),%edx
080a6dd2 +0x19ce:  add    $0x4,%edx
080a6dd5 +0x19d1:  mov    (%edx),%edx
080a6dd7 +0x19d3:  xor    %ecx,%edx
080a6dd9 +0x19d5:  mov    %edx,(%eax)
080a6ddb +0x19d7:  mov    0x14(%ebp),%eax
080a6dde +0x19da:  add    $0x8,%eax
080a6de1 +0x19dd:  mov    0x14(%ebp),%edx
080a6de4 +0x19e0:  add    $0x8,%edx
080a6de7 +0x19e3:  mov    (%edx),%ecx
080a6de9 +0x19e5:  mov    0x10(%ebp),%edx
080a6dec +0x19e8:  add    $0x8,%edx
080a6def +0x19eb:  mov    (%edx),%edx
080a6df1 +0x19ed:  xor    %ecx,%edx
080a6df3 +0x19ef:  mov    %edx,(%eax)
080a6df5 +0x19f1:  mov    0x14(%ebp),%eax
080a6df8 +0x19f4:  add    $0xc,%eax
080a6dfb +0x19f7:  mov    0x14(%ebp),%edx
080a6dfe +0x19fa:  add    $0xc,%edx
080a6e01 +0x19fd:  mov    (%edx),%ecx
080a6e03 +0x19ff:  mov    0x10(%ebp),%edx
080a6e06 +0x1a02:  add    $0xc,%edx
080a6e09 +0x1a05:  mov    (%edx),%edx
080a6e0b +0x1a07:  xor    %ecx,%edx
080a6e0d +0x1a09:  mov    %edx,(%eax)
080a6e0f +0x1a0b:  add    $0x4,%esp
080a6e12 +0x1a0e:  pop    %ebx
080a6e13 +0x1a0f:  pop    %esi
080a6e14 +0x1a10:  pop    %edi
080a6e15 +0x1a11:  pop    %ebp
080a6e16 +0x1a12:  ret
```

## 反编译 C

```c
// ARIA::Crypt @ 0x80a5404

/* ARIA::Crypt(unsigned char const*, int, unsigned char const*, unsigned char*) */

void ARIA::Crypt(uchar *param_1,int param_2,uchar *param_3,uchar *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint local_14;
  
  local_14 = *(uint *)param_1;
  uVar1 = *(uint *)(param_1 + 4);
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = *(uint *)(param_1 + 0xc);
  if (0xc < param_2) {
    local_14 = local_14 ^ *(uint *)param_3;
    uVar1 = uVar1 ^ *(uint *)(param_3 + 4);
    uVar2 = uVar2 ^ *(uint *)(param_3 + 8);
    uVar4 = uVar4 ^ *(uint *)(param_3 + 0xc);
    uVar3 = *(uint *)(S1 + (uVar2 >> 0x18) * 4) ^ *(uint *)(S2 + (uVar2 >> 0x10 & 0xff) * 4) ^
            *(uint *)(X1 + (uVar2 >> 8 & 0xff) * 4) ^ *(uint *)(X2 + (uVar2 & 0xff) * 4);
    uVar4 = *(uint *)(S1 + (uVar4 >> 0x18) * 4) ^ *(uint *)(S2 + (uVar4 >> 0x10 & 0xff) * 4) ^
            *(uint *)(X1 + (uVar4 >> 8 & 0xff) * 4) ^ *(uint *)(X2 + (uVar4 & 0xff) * 4);
    uVar2 = *(uint *)(S1 + (uVar1 >> 0x18) * 4) ^ *(uint *)(S2 + (uVar1 >> 0x10 & 0xff) * 4) ^
            *(uint *)(X1 + (uVar1 >> 8 & 0xff) * 4) ^ *(uint *)(X2 + (uVar1 & 0xff) * 4) ^ uVar3;
    uVar1 = *(uint *)(S1 + (local_14 >> 0x18) * 4) ^ *(uint *)(S2 + (local_14 >> 0x10 & 0xff) * 4) ^
            *(uint *)(X1 + (local_14 >> 8 & 0xff) * 4) ^ *(uint *)(X2 + (local_14 & 0xff) * 4) ^
            uVar2;
    uVar5 = uVar4 ^ uVar2;
    uVar4 = uVar3 ^ uVar4 ^ uVar1;
    uVar3 = uVar4 >> 0x10 | uVar4 << 0x10;
    uVar5 = uVar5 << 0x18 ^ uVar5 >> 0x18 ^ (uVar5 & 0xff00) << 8 ^ (uVar5 & 0xff0000) >> 8;
    uVar2 = ((uVar2 ^ uVar4) & 0xff00ff) << 8 ^ (uVar2 ^ uVar4) >> 8 & 0xff00ff ^ uVar3;
    uVar1 = uVar1 ^ uVar2;
    uVar3 = uVar3 ^ uVar5 ^ uVar1;
    uVar1 = uVar1 ^ *(uint *)(param_3 + 0x10);
    uVar4 = uVar2 ^ uVar3 ^ *(uint *)(param_3 + 0x14);
    uVar3 = uVar3 ^ *(uint *)(param_3 + 0x18);
    uVar2 = uVar5 ^ uVar2 ^ *(uint *)(param_3 + 0x1c);
    param_3 = param_3 + 0x20;
    uVar3 = *(uint *)(X1 + (uVar3 >> 0x18) * 4) ^ *(uint *)(X2 + (uVar3 >> 0x10 & 0xff) * 4) ^
            *(uint *)(S1 + (uVar3 >> 8 & 0xff) * 4) ^ *(uint *)(S2 + (uVar3 & 0xff) * 4);
    uVar5 = *(uint *)(X1 + (uVar2 >> 0x18) * 4) ^ *(uint *)(X2 + (uVar2 >> 0x10 & 0xff) * 4) ^
            *(uint *)(S1 + (uVar2 >> 8 & 0xff) * 4) ^ *(uint *)(S2 + (uVar2 & 0xff) * 4);
    uVar4 = *(uint *)(X1 + (uVar4 >> 0x18) * 4) ^ *(uint *)(X2 + (uVar4 >> 0x10 & 0xff) * 4) ^
            *(uint *)(S1 + (uVar4 >> 8 & 0xff) * 4) ^ *(uint *)(S2 + (uVar4 & 0xff) * 4) ^ uVar3;
    uVar2 = *(uint *)(X1 + (uVar1 >> 0x18) * 4) ^ *(uint *)(X2 + (uVar1 >> 0x10 & 0xff) * 4) ^
            *(uint *)(S1 + (uVar1 >> 8 & 0xff) * 4) ^ *(uint *)(S2 + (uVar1 & 0xff) * 4) ^ uVar4;
    uVar1 = uVar5 ^ uVar4;
    uVar3 = uVar3 ^ uVar5 ^ uVar2;
    uVar4 = uVar4 ^ uVar3;
    uVar5 = (uVar1 & 0xff00ff) << 8 ^ uVar1 >> 8 & 0xff00ff;
    uVar1 = uVar4 << 0x18 ^ uVar4 >> 0x18 ^ (uVar4 & 0xff00) << 8 ^ (uVar4 & 0xff0000) >> 8 ^ uVar3;
    local_14 = (uVar2 >> 0x10 | uVar2 << 0x10) ^ uVar1;
    uVar4 = uVar5 ^ uVar1;
    uVar2 = uVar3 ^ uVar5 ^ local_14;
    uVar1 = uVar1 ^ uVar2;
  }
  if (0xe < param_2) {
    local_14 = local_14 ^ *(uint *)param_3;
    uVar1 = uVar1 ^ *(uint *)(param_3 + 4);
    uVar2 = uVar2 ^ *(uint *)(param_3 + 8);
    uVar4 = uVar4 ^ *(uint *)(param_3 + 0xc);
    uVar3 = *(uint *)(S1 + (uVar2 >> 0x18) * 4) ^ *(uint *)(S2 + (uVar2 >> 0x10 & 0xff) * 4) ^
            *(uint *)(X1 + (uVar2 >> 8 & 0xff) * 4) ^ *(uint *)(X2 + (uVar2 & 0xff) * 4);
    uVar4 = *(uint *)(S1 + (uVar4 >> 0x18) * 4) ^ *(uint *)(S2 + (uVar4 >> 0x10 & 0xff) * 4) ^
            *(uint *)(X1 + (uVar4 >> 8 & 0xff) * 4) ^ *(uint *)(X2 + (uVar4 & 0xff) * 4);
    uVar2 = *(uint *)(S1 + (uVar1 >> 0x18) * 4) ^ *(uint *)(S2 + (uVar1 >> 0x10 & 0xff) * 4) ^
            *(uint *)(X1 + (uVar1 >> 8 & 0xff) * 4) ^ *(uint *)(X2 + (uVar1 & 0xff) * 4) ^ uVar3;
    uVar1 = *(uint *)(S1 + (local_14 >> 0x18) * 4) ^ *(uint *)(S2 + (local_14 >> 0x10 & 0xff) * 4) ^
            *(uint *)(X1 + (local_14 >> 8 & 0xff) * 4) ^ *(uint *)(X2 + (local_14 & 0xff) * 4) ^
            uVar2;
    uVar5 = uVar4 ^ uVar2;
    uVar4 = uVar3 ^ uVar4 ^ uVar1;
    uVar3 = uVar4 >> 0x10 | uVar4 << 0x10;
    uVar5 = uVar5 << 0x18 ^ uVar5 >> 0x18 ^ (uVar5 & 0xff00) << 8 ^ (uVar5 & 0xff0000) >> 8;
    uVar2 = ((uVar2 ^ uVar4) & 0xff00ff) << 8 ^ (uVar2 ^ uVar4) >> 8 & 0xff00ff ^ uVar3;
    uVar1 = uVar1 ^ uVar2;
    uVar3 = uVar3 ^ uVar5 ^ uVar1;
    uVar1 = uVar1 ^ *(uint *)(param_3 + 0x10);
    uVar4 = uVar2 ^ uVar3 ^ *(uint *)(param_3 + 0x14);
    uVar3 = uVar3 ^ *(uint *)(param_3 + 0x18);
    uVar2 = uVar5 ^ uVar2 ^ *(uint *)(param_3 + 0x1c);
    param_3 = param_3 + 0x20;
    uVar3 = *(uint *)(X1 + (uVar3 >> 0x18) * 4) ^ *(uint *)(X2 + (uVar3 >> 0x10 & 0xff) * 4) ^
            *(uint *)(S1 + (uVar3 >> 8 & 0xff) * 4) ^ *(uint *)(S2 + (uVar3 & 0xff) * 4);
    uVar5 = *(uint *)(X1 + (uVar2 >> 0x18) * 4) ^ *(uint *)(X2 + (uVar2 >> 0x10 & 0xff) * 4) ^
            *(uint *)(S1 + (uVar2 >> 8 & 0xff) * 4) ^ *(uint *)(S2 + (uVar2 & 0xff) * 4);
    uVar4 = *(uint *)(X1 + (uVar4 >> 0x18) * 4) ^ *(uint *)(X2 + (uVar4 >> 0x10 & 0xff) * 4) ^
            *(uint *)(S1 + (uVar4 >> 8 & 0xff) * 4) ^ *(uint *)(S2 + (uVar4 & 0xff) * 4) ^ uVar3;
    uVar2 = *(uint *)(X1 + (uVar1 >> 0x18) * 4) ^ *(uint *)(X2 + (uVar1 >> 0x10 & 0xff) * 4) ^
            *(uint *)(S1 + (uVar1 >> 8 & 0xff) * 4) ^ *(uint *)(S2 + (uVar1 & 0xff) * 4) ^ uVar4;
    uVar1 = uVar5 ^ uVar4;
    uVar3 = uVar3 ^ uVar5 ^ uVar2;
    uVar4 = uVar4 ^ uVar3;
    uVar5 = (uVar1 & 0xff00ff) << 8 ^ uVar1 >> 8 & 0xff00ff;
    uVar1 = uVar4 << 0x18 ^ uVar4 >> 0x18 ^ (uVar4 & 0xff00) << 8 ^ (uVar4 & 0xff0000) >> 8 ^ uVar3;
    local_14 = (uVar2 >> 0x10 | uVar2 << 0x10) ^ uVar1;
    uVar4 = uVar5 ^ uVar1;
    uVar2 = uVar3 ^ uVar5 ^ local_14;
    uVar1 = uVar1 ^ uVar2;
  }
  local_14 = local_14 ^ *(uint *)param_3;
  uVar1 = uVar1 ^ *(uint *)(param_3 + 4);
  uVar2 = uVar2 ^ *(uint *)(param_3 + 8);
  uVar4 = uVar4 ^ *(uint *)(param_3 + 0xc);
  uVar3 = *(uint *)(S1 + (uVar2 >> 0x18) * 4) ^ *(uint *)(S2 + (uVar2 >> 0x10 & 0xff) * 4) ^
          *(uint *)(X1 + (uVar2 >> 8 & 0xff) * 4) ^ *(uint *)(X2 + (uVar2 & 0xff) * 4);
  uVar4 = *(uint *)(S1 + (uVar4 >> 0x18) * 4) ^ *(uint *)(S2 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(X1 + (uVar4 >> 8 & 0xff) * 4) ^ *(uint *)(X2 + (uVar4 & 0xff) * 4);
  uVar2 = *(uint *)(S1 + (uVar1 >> 0x18) * 4) ^ *(uint *)(S2 + (uVar1 >> 0x10 & 0xff) * 4) ^
          *(uint *)(X1 + (uVar1 >> 8 & 0xff) * 4) ^ *(uint *)(X2 + (uVar1 & 0xff) * 4) ^ uVar3;
  uVar1 = *(uint *)(S1 + (local_14 >> 0x18) * 4) ^ *(uint *)(S2 + (local_14 >> 0x10 & 0xff) * 4) ^
          *(uint *)(X1 + (local_14 >> 8 & 0xff) * 4) ^ *(uint *)(X2 + (local_14 & 0xff) * 4) ^ uVar2
  ;
  uVar5 = uVar4 ^ uVar2;
  uVar4 = uVar3 ^ uVar4 ^ uVar1;
  uVar3 = uVar4 >> 0x10 | uVar4 << 0x10;
  uVar5 = uVar5 << 0x18 ^ uVar5 >> 0x18 ^ (uVar5 & 0xff00) << 8 ^ (uVar5 & 0xff0000) >> 8;
  uVar2 = ((uVar2 ^ uVar4) & 0xff00ff) << 8 ^ (uVar2 ^ uVar4) >> 8 & 0xff00ff ^ uVar3;
  uVar1 = uVar1 ^ uVar2;
  uVar3 = uVar3 ^ uVar5 ^ uVar1;
  uVar1 = uVar1 ^ *(uint *)(param_3 + 0x10);
  uVar4 = uVar2 ^ uVar3 ^ *(uint *)(param_3 + 0x14);
  uVar3 = uVar3 ^ *(uint *)(param_3 + 0x18);
  uVar2 = uVar5 ^ uVar2 ^ *(uint *)(param_3 + 0x1c);
  uVar3 = *(uint *)(X1 + (uVar3 >> 0x18) * 4) ^ *(uint *)(X2 + (uVar3 >> 0x10 & 0xff) * 4) ^
          *(uint *)(S1 + (uVar3 >> 8 & 0xff) * 4) ^ *(uint *)(S2 + (uVar3 & 0xff) * 4);
  uVar5 = *(uint *)(X1 + (uVar2 >> 0x18) * 4) ^ *(uint *)(X2 + (uVar2 >> 0x10 & 0xff) * 4) ^
          *(uint *)(S1 + (uVar2 >> 8 & 0xff) * 4) ^ *(uint *)(S2 + (uVar2 & 0xff) * 4);
  uVar2 = *(uint *)(X1 + (uVar4 >> 0x18) * 4) ^ *(uint *)(X2 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(S1 + (uVar4 >> 8 & 0xff) * 4) ^ *(uint *)(S2 + (uVar4 & 0xff) * 4) ^ uVar3;
  uVar1 = *(uint *)(X1 + (uVar1 >> 0x18) * 4) ^ *(uint *)(X2 + (uVar1 >> 0x10 & 0xff) * 4) ^
          *(uint *)(S1 + (uVar1 >> 8 & 0xff) * 4) ^ *(uint *)(S2 + (uVar1 & 0xff) * 4) ^ uVar2;
  uVar6 = uVar5 ^ uVar2;
  uVar4 = uVar3 ^ uVar5 ^ uVar1;
  uVar2 = uVar2 ^ uVar4;
  uVar5 = (uVar6 & 0xff00ff) << 8 ^ uVar6 >> 8 & 0xff00ff;
  uVar2 = uVar2 << 0x18 ^ uVar2 >> 0x18 ^ (uVar2 & 0xff00) << 8 ^ (uVar2 & 0xff0000) >> 8 ^ uVar4;
  uVar1 = (uVar1 >> 0x10 | uVar1 << 0x10) ^ uVar2;
  uVar3 = uVar4 ^ uVar5 ^ uVar1;
  uVar1 = uVar1 ^ *(uint *)(param_3 + 0x20);
  uVar4 = uVar2 ^ uVar3 ^ *(uint *)(param_3 + 0x24);
  uVar3 = uVar3 ^ *(uint *)(param_3 + 0x28);
  uVar2 = uVar5 ^ uVar2 ^ *(uint *)(param_3 + 0x2c);
  uVar3 = *(uint *)(S1 + (uVar3 >> 0x18) * 4) ^ *(uint *)(S2 + (uVar3 >> 0x10 & 0xff) * 4) ^
          *(uint *)(X1 + (uVar3 >> 8 & 0xff) * 4) ^ *(uint *)(X2 + (uVar3 & 0xff) * 4);
  uVar5 = *(uint *)(S1 + (uVar2 >> 0x18) * 4) ^ *(uint *)(S2 + (uVar2 >> 0x10 & 0xff) * 4) ^
          *(uint *)(X1 + (uVar2 >> 8 & 0xff) * 4) ^ *(uint *)(X2 + (uVar2 & 0xff) * 4);
  uVar2 = *(uint *)(S1 + (uVar4 >> 0x18) * 4) ^ *(uint *)(S2 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(X1 + (uVar4 >> 8 & 0xff) * 4) ^ *(uint *)(X2 + (uVar4 & 0xff) * 4) ^ uVar3;
  uVar1 = *(uint *)(S1 + (uVar1 >> 0x18) * 4) ^ *(uint *)(S2 + (uVar1 >> 0x10 & 0xff) * 4) ^
          *(uint *)(X1 + (uVar1 >> 8 & 0xff) * 4) ^ *(uint *)(X2 + (uVar1 & 0xff) * 4) ^ uVar2;
  uVar6 = uVar5 ^ uVar2;
  uVar4 = uVar3 ^ uVar5 ^ uVar1;
  uVar3 = uVar4 >> 0x10 | uVar4 << 0x10;
  uVar5 = uVar6 << 0x18 ^ uVar6 >> 0x18 ^ (uVar6 & 0xff00) << 8 ^ (uVar6 & 0xff0000) >> 8;
  uVar2 = ((uVar2 ^ uVar4) & 0xff00ff) << 8 ^ (uVar2 ^ uVar4) >> 8 & 0xff00ff ^ uVar3;
  uVar1 = uVar1 ^ uVar2;
  uVar3 = uVar3 ^ uVar5 ^ uVar1;
  uVar1 = uVar1 ^ *(uint *)(param_3 + 0x30);
  uVar4 = uVar2 ^ uVar3 ^ *(uint *)(param_3 + 0x34);
  uVar3 = uVar3 ^ *(uint *)(param_3 + 0x38);
  uVar2 = uVar5 ^ uVar2 ^ *(uint *)(param_3 + 0x3c);
  uVar3 = *(uint *)(X1 + (uVar3 >> 0x18) * 4) ^ *(uint *)(X2 + (uVar3 >> 0x10 & 0xff) * 4) ^
          *(uint *)(S1 + (uVar3 >> 8 & 0xff) * 4) ^ *(uint *)(S2 + (uVar3 & 0xff) * 4);
  uVar5 = *(uint *)(X1 + (uVar2 >> 0x18) * 4) ^ *(uint *)(X2 + (uVar2 >> 0x10 & 0xff) * 4) ^
          *(uint *)(S1 + (uVar2 >> 8 & 0xff) * 4) ^ *(uint *)(S2 + (uVar2 & 0xff) * 4);
  uVar2 = *(uint *)(X1 + (uVar4 >> 0x18) * 4) ^ *(uint *)(X2 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(S1 + (uVar4 >> 8 & 0xff) * 4) ^ *(uint *)(S2 + (uVar4 & 0xff) * 4) ^ uVar3;
  uVar1 = *(uint *)(X1 + (uVar1 >> 0x18) * 4) ^ *(uint *)(X2 + (uVar1 >> 0x10 & 0xff) * 4) ^
          *(uint *)(S1 + (uVar1 >> 8 & 0xff) * 4) ^ *(uint *)(S2 + (uVar1 & 0xff) * 4) ^ uVar2;
  uVar6 = uVar5 ^ uVar2;
  uVar4 = uVar3 ^ uVar5 ^ uVar1;
  uVar2 = uVar2 ^ uVar4;
  uVar5 = (uVar6 & 0xff00ff) << 8 ^ uVar6 >> 8 & 0xff00ff;
  uVar2 = uVar2 << 0x18 ^ uVar2 >> 0x18 ^ (uVar2 & 0xff00) << 8 ^ (uVar2 & 0xff0000) >> 8 ^ uVar4;
  uVar1 = (uVar1 >> 0x10 | uVar1 << 0x10) ^ uVar2;
  uVar3 = uVar4 ^ uVar5 ^ uVar1;
  uVar1 = uVar1 ^ *(uint *)(param_3 + 0x40);
  uVar4 = uVar2 ^ uVar3 ^ *(uint *)(param_3 + 0x44);
  uVar3 = uVar3 ^ *(uint *)(param_3 + 0x48);
  uVar2 = uVar5 ^ uVar2 ^ *(uint *)(param_3 + 0x4c);
  uVar3 = *(uint *)(S1 + (uVar3 >> 0x18) * 4) ^ *(uint *)(S2 + (uVar3 >> 0x10 & 0xff) * 4) ^
          *(uint *)(X1 + (uVar3 >> 8 & 0xff) * 4) ^ *(uint *)(X2 + (uVar3 & 0xff) * 4);
  uVar5 = *(uint *)(S1 + (uVar2 >> 0x18) * 4) ^ *(uint *)(S2 + (uVar2 >> 0x10 & 0xff) * 4) ^
          *(uint *)(X1 + (uVar2 >> 8 & 0xff) * 4) ^ *(uint *)(X2 + (uVar2 & 0xff) * 4);
  uVar2 = *(uint *)(S1 + (uVar4 >> 0x18) * 4) ^ *(uint *)(S2 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(X1 + (uVar4 >> 8 & 0xff) * 4) ^ *(uint *)(X2 + (uVar4 & 0xff) * 4) ^ uVar3;
  uVar1 = *(uint *)(S1 + (uVar1 >> 0x18) * 4) ^ *(uint *)(S2 + (uVar1 >> 0x10 & 0xff) * 4) ^
          *(uint *)(X1 + (uVar1 >> 8 & 0xff) * 4) ^ *(uint *)(X2 + (uVar1 & 0xff) * 4) ^ uVar2;
  uVar6 = uVar5 ^ uVar2;
  uVar4 = uVar3 ^ uVar5 ^ uVar1;
  uVar3 = uVar4 >> 0x10 | uVar4 << 0x10;
  uVar5 = uVar6 << 0x18 ^ uVar6 >> 0x18 ^ (uVar6 & 0xff00) << 8 ^ (uVar6 & 0xff0000) >> 8;
  uVar2 = ((uVar2 ^ uVar4) & 0xff00ff) << 8 ^ (uVar2 ^ uVar4) >> 8 & 0xff00ff ^ uVar3;
  uVar1 = uVar1 ^ uVar2;
  uVar3 = uVar3 ^ uVar5 ^ uVar1;
  uVar1 = uVar1 ^ *(uint *)(param_3 + 0x50);
  uVar4 = uVar2 ^ uVar3 ^ *(uint *)(param_3 + 0x54);
  uVar3 = uVar3 ^ *(uint *)(param_3 + 0x58);
  uVar2 = uVar5 ^ uVar2 ^ *(uint *)(param_3 + 0x5c);
  uVar3 = *(uint *)(X1 + (uVar3 >> 0x18) * 4) ^ *(uint *)(X2 + (uVar3 >> 0x10 & 0xff) * 4) ^
          *(uint *)(S1 + (uVar3 >> 8 & 0xff) * 4) ^ *(uint *)(S2 + (uVar3 & 0xff) * 4);
  uVar5 = *(uint *)(X1 + (uVar2 >> 0x18) * 4) ^ *(uint *)(X2 + (uVar2 >> 0x10 & 0xff) * 4) ^
          *(uint *)(S1 + (uVar2 >> 8 & 0xff) * 4) ^ *(uint *)(S2 + (uVar2 & 0xff) * 4);
  uVar2 = *(uint *)(X1 + (uVar4 >> 0x18) * 4) ^ *(uint *)(X2 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(S1 + (uVar4 >> 8 & 0xff) * 4) ^ *(uint *)(S2 + (uVar4 & 0xff) * 4) ^ uVar3;
  uVar1 = *(uint *)(X1 + (uVar1 >> 0x18) * 4) ^ *(uint *)(X2 + (uVar1 >> 0x10 & 0xff) * 4) ^
          *(uint *)(S1 + (uVar1 >> 8 & 0xff) * 4) ^ *(uint *)(S2 + (uVar1 & 0xff) * 4) ^ uVar2;
  uVar6 = uVar5 ^ uVar2;
  uVar4 = uVar3 ^ uVar5 ^ uVar1;
  uVar2 = uVar2 ^ uVar4;
  uVar5 = (uVar6 & 0xff00ff) << 8 ^ uVar6 >> 8 & 0xff00ff;
  uVar2 = uVar2 << 0x18 ^ uVar2 >> 0x18 ^ (uVar2 & 0xff00) << 8 ^ (uVar2 & 0xff0000) >> 8 ^ uVar4;
  uVar1 = (uVar1 >> 0x10 | uVar1 << 0x10) ^ uVar2;
  uVar3 = uVar4 ^ uVar5 ^ uVar1;
  uVar1 = uVar1 ^ *(uint *)(param_3 + 0x60);
  uVar4 = uVar2 ^ uVar3 ^ *(uint *)(param_3 + 100);
  uVar3 = uVar3 ^ *(uint *)(param_3 + 0x68);
  uVar2 = uVar5 ^ uVar2 ^ *(uint *)(param_3 + 0x6c);
  uVar3 = *(uint *)(S1 + (uVar3 >> 0x18) * 4) ^ *(uint *)(S2 + (uVar3 >> 0x10 & 0xff) * 4) ^
          *(uint *)(X1 + (uVar3 >> 8 & 0xff) * 4) ^ *(uint *)(X2 + (uVar3 & 0xff) * 4);
  uVar5 = *(uint *)(S1 + (uVar2 >> 0x18) * 4) ^ *(uint *)(S2 + (uVar2 >> 0x10 & 0xff) * 4) ^
          *(uint *)(X1 + (uVar2 >> 8 & 0xff) * 4) ^ *(uint *)(X2 + (uVar2 & 0xff) * 4);
  uVar2 = *(uint *)(S1 + (uVar4 >> 0x18) * 4) ^ *(uint *)(S2 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(X1 + (uVar4 >> 8 & 0xff) * 4) ^ *(uint *)(X2 + (uVar4 & 0xff) * 4) ^ uVar3;
  uVar1 = *(uint *)(S1 + (uVar1 >> 0x18) * 4) ^ *(uint *)(S2 + (uVar1 >> 0x10 & 0xff) * 4) ^
          *(uint *)(X1 + (uVar1 >> 8 & 0xff) * 4) ^ *(uint *)(X2 + (uVar1 & 0xff) * 4) ^ uVar2;
  uVar6 = uVar5 ^ uVar2;
  uVar4 = uVar3 ^ uVar5 ^ uVar1;
  uVar3 = uVar4 >> 0x10 | uVar4 << 0x10;
  uVar5 = uVar6 << 0x18 ^ uVar6 >> 0x18 ^ (uVar6 & 0xff00) << 8 ^ (uVar6 & 0xff0000) >> 8;
  uVar2 = ((uVar2 ^ uVar4) & 0xff00ff) << 8 ^ (uVar2 ^ uVar4) >> 8 & 0xff00ff ^ uVar3;
  uVar1 = uVar1 ^ uVar2;
  uVar3 = uVar3 ^ uVar5 ^ uVar1;
  uVar1 = uVar1 ^ *(uint *)(param_3 + 0x70);
  uVar4 = uVar2 ^ uVar3 ^ *(uint *)(param_3 + 0x74);
  uVar3 = uVar3 ^ *(uint *)(param_3 + 0x78);
  uVar2 = uVar5 ^ uVar2 ^ *(uint *)(param_3 + 0x7c);
  uVar3 = *(uint *)(X1 + (uVar3 >> 0x18) * 4) ^ *(uint *)(X2 + (uVar3 >> 0x10 & 0xff) * 4) ^
          *(uint *)(S1 + (uVar3 >> 8 & 0xff) * 4) ^ *(uint *)(S2 + (uVar3 & 0xff) * 4);
  uVar5 = *(uint *)(X1 + (uVar2 >> 0x18) * 4) ^ *(uint *)(X2 + (uVar2 >> 0x10 & 0xff) * 4) ^
          *(uint *)(S1 + (uVar2 >> 8 & 0xff) * 4) ^ *(uint *)(S2 + (uVar2 & 0xff) * 4);
  uVar2 = *(uint *)(X1 + (uVar4 >> 0x18) * 4) ^ *(uint *)(X2 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(S1 + (uVar4 >> 8 & 0xff) * 4) ^ *(uint *)(S2 + (uVar4 & 0xff) * 4) ^ uVar3;
  uVar1 = *(uint *)(X1 + (uVar1 >> 0x18) * 4) ^ *(uint *)(X2 + (uVar1 >> 0x10 & 0xff) * 4) ^
          *(uint *)(S1 + (uVar1 >> 8 & 0xff) * 4) ^ *(uint *)(S2 + (uVar1 & 0xff) * 4) ^ uVar2;
  uVar6 = uVar5 ^ uVar2;
  uVar4 = uVar3 ^ uVar5 ^ uVar1;
  uVar2 = uVar2 ^ uVar4;
  uVar5 = (uVar6 & 0xff00ff) << 8 ^ uVar6 >> 8 & 0xff00ff;
  uVar2 = uVar2 << 0x18 ^ uVar2 >> 0x18 ^ (uVar2 & 0xff00) << 8 ^ (uVar2 & 0xff0000) >> 8 ^ uVar4;
  uVar1 = (uVar1 >> 0x10 | uVar1 << 0x10) ^ uVar2;
  uVar3 = uVar4 ^ uVar5 ^ uVar1;
  uVar1 = uVar1 ^ *(uint *)(param_3 + 0x80);
  uVar4 = uVar2 ^ uVar3 ^ *(uint *)(param_3 + 0x84);
  uVar3 = uVar3 ^ *(uint *)(param_3 + 0x88);
  uVar2 = uVar5 ^ uVar2 ^ *(uint *)(param_3 + 0x8c);
  uVar3 = *(uint *)(S1 + (uVar3 >> 0x18) * 4) ^ *(uint *)(S2 + (uVar3 >> 0x10 & 0xff) * 4) ^
          *(uint *)(X1 + (uVar3 >> 8 & 0xff) * 4) ^ *(uint *)(X2 + (uVar3 & 0xff) * 4);
  uVar5 = *(uint *)(S1 + (uVar2 >> 0x18) * 4) ^ *(uint *)(S2 + (uVar2 >> 0x10 & 0xff) * 4) ^
          *(uint *)(X1 + (uVar2 >> 8 & 0xff) * 4) ^ *(uint *)(X2 + (uVar2 & 0xff) * 4);
  uVar2 = *(uint *)(S1 + (uVar4 >> 0x18) * 4) ^ *(uint *)(S2 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(X1 + (uVar4 >> 8 & 0xff) * 4) ^ *(uint *)(X2 + (uVar4 & 0xff) * 4) ^ uVar3;
  uVar1 = *(uint *)(S1 + (uVar1 >> 0x18) * 4) ^ *(uint *)(S2 + (uVar1 >> 0x10 & 0xff) * 4) ^
          *(uint *)(X1 + (uVar1 >> 8 & 0xff) * 4) ^ *(uint *)(X2 + (uVar1 & 0xff) * 4) ^ uVar2;
  uVar6 = uVar5 ^ uVar2;
  uVar4 = uVar3 ^ uVar5 ^ uVar1;
  uVar3 = uVar4 >> 0x10 | uVar4 << 0x10;
  uVar5 = uVar6 << 0x18 ^ uVar6 >> 0x18 ^ (uVar6 & 0xff00) << 8 ^ (uVar6 & 0xff0000) >> 8;
  uVar2 = ((uVar2 ^ uVar4) & 0xff00ff) << 8 ^ (uVar2 ^ uVar4) >> 8 & 0xff00ff ^ uVar3;
  uVar1 = uVar1 ^ uVar2;
  uVar3 = uVar3 ^ uVar5 ^ uVar1;
  uVar1 = uVar1 ^ *(uint *)(param_3 + 0x90);
  uVar4 = uVar2 ^ uVar3 ^ *(uint *)(param_3 + 0x94);
  uVar3 = uVar3 ^ *(uint *)(param_3 + 0x98);
  uVar2 = uVar5 ^ uVar2 ^ *(uint *)(param_3 + 0x9c);
  uVar3 = *(uint *)(X1 + (uVar3 >> 0x18) * 4) ^ *(uint *)(X2 + (uVar3 >> 0x10 & 0xff) * 4) ^
          *(uint *)(S1 + (uVar3 >> 8 & 0xff) * 4) ^ *(uint *)(S2 + (uVar3 & 0xff) * 4);
  uVar5 = *(uint *)(X1 + (uVar2 >> 0x18) * 4) ^ *(uint *)(X2 + (uVar2 >> 0x10 & 0xff) * 4) ^
          *(uint *)(S1 + (uVar2 >> 8 & 0xff) * 4) ^ *(uint *)(S2 + (uVar2 & 0xff) * 4);
  uVar2 = *(uint *)(X1 + (uVar4 >> 0x18) * 4) ^ *(uint *)(X2 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(S1 + (uVar4 >> 8 & 0xff) * 4) ^ *(uint *)(S2 + (uVar4 & 0xff) * 4) ^ uVar3;
  uVar1 = *(uint *)(X1 + (uVar1 >> 0x18) * 4) ^ *(uint *)(X2 + (uVar1 >> 0x10 & 0xff) * 4) ^
          *(uint *)(S1 + (uVar1 >> 8 & 0xff) * 4) ^ *(uint *)(S2 + (uVar1 & 0xff) * 4) ^ uVar2;
  uVar6 = uVar5 ^ uVar2;
  uVar4 = uVar3 ^ uVar5 ^ uVar1;
  uVar2 = uVar2 ^ uVar4;
  uVar5 = (uVar6 & 0xff00ff) << 8 ^ uVar6 >> 8 & 0xff00ff;
  uVar2 = uVar2 << 0x18 ^ uVar2 >> 0x18 ^ (uVar2 & 0xff00) << 8 ^ (uVar2 & 0xff0000) >> 8 ^ uVar4;
  uVar1 = (uVar1 >> 0x10 | uVar1 << 0x10) ^ uVar2;
  uVar3 = uVar4 ^ uVar5 ^ uVar1;
  uVar1 = uVar1 ^ *(uint *)(param_3 + 0xa0);
  uVar4 = uVar2 ^ uVar3 ^ *(uint *)(param_3 + 0xa4);
  uVar3 = uVar3 ^ *(uint *)(param_3 + 0xa8);
  uVar2 = uVar5 ^ uVar2 ^ *(uint *)(param_3 + 0xac);
  uVar3 = *(uint *)(S1 + (uVar3 >> 0x18) * 4) ^ *(uint *)(S2 + (uVar3 >> 0x10 & 0xff) * 4) ^
          *(uint *)(X1 + (uVar3 >> 8 & 0xff) * 4) ^ *(uint *)(X2 + (uVar3 & 0xff) * 4);
  uVar5 = *(uint *)(S1 + (uVar2 >> 0x18) * 4) ^ *(uint *)(S2 + (uVar2 >> 0x10 & 0xff) * 4) ^
          *(uint *)(X1 + (uVar2 >> 8 & 0xff) * 4) ^ *(uint *)(X2 + (uVar2 & 0xff) * 4);
  uVar2 = *(uint *)(S1 + (uVar4 >> 0x18) * 4) ^ *(uint *)(S2 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(X1 + (uVar4 >> 8 & 0xff) * 4) ^ *(uint *)(X2 + (uVar4 & 0xff) * 4) ^ uVar3;
  uVar1 = *(uint *)(S1 + (uVar1 >> 0x18) * 4) ^ *(uint *)(S2 + (uVar1 >> 0x10 & 0xff) * 4) ^
          *(uint *)(X1 + (uVar1 >> 8 & 0xff) * 4) ^ *(uint *)(X2 + (uVar1 & 0xff) * 4) ^ uVar2;
  uVar6 = uVar5 ^ uVar2;
  uVar4 = uVar3 ^ uVar5 ^ uVar1;
  uVar3 = uVar4 >> 0x10 | uVar4 << 0x10;
  uVar5 = uVar6 << 0x18 ^ uVar6 >> 0x18 ^ (uVar6 & 0xff00) << 8 ^ (uVar6 & 0xff0000) >> 8;
  uVar2 = ((uVar2 ^ uVar4) & 0xff00ff) << 8 ^ (uVar2 ^ uVar4) >> 8 & 0xff00ff ^ uVar3;
  uVar1 = uVar1 ^ uVar2;
  uVar3 = uVar3 ^ uVar5 ^ uVar1;
  uVar1 = uVar1 ^ *(uint *)(param_3 + 0xb0);
  uVar4 = uVar2 ^ uVar3 ^ *(uint *)(param_3 + 0xb4);
  uVar3 = uVar3 ^ *(uint *)(param_3 + 0xb8);
  uVar2 = uVar5 ^ uVar2 ^ *(uint *)(param_3 + 0xbc);
  *param_4 = (uchar)*(undefined4 *)(X1 + (uVar1 >> 0x18) * 4);
  param_4[1] = (uchar)((uint)*(undefined4 *)(X2 + (uVar1 >> 0x10 & 0xff) * 4) >> 8);
  param_4[2] = (uchar)*(undefined4 *)(S1 + (uVar1 >> 8 & 0xff) * 4);
  param_4[3] = (uchar)*(undefined4 *)(S2 + (uVar1 & 0xff) * 4);
  param_4[4] = (uchar)*(undefined4 *)(X1 + (uVar4 >> 0x18) * 4);
  param_4[5] = (uchar)((uint)*(undefined4 *)(X2 + (uVar4 >> 0x10 & 0xff) * 4) >> 8);
  param_4[6] = (uchar)*(undefined4 *)(S1 + (uVar4 >> 8 & 0xff) * 4);
  param_4[7] = (uchar)*(undefined4 *)(S2 + (uVar4 & 0xff) * 4);
  param_4[8] = (uchar)*(undefined4 *)(X1 + (uVar3 >> 0x18) * 4);
  param_4[9] = (uchar)((uint)*(undefined4 *)(X2 + (uVar3 >> 0x10 & 0xff) * 4) >> 8);
  param_4[10] = (uchar)*(undefined4 *)(S1 + (uVar3 >> 8 & 0xff) * 4);
  param_4[0xb] = (uchar)*(undefined4 *)(S2 + (uVar3 & 0xff) * 4);
  param_4[0xc] = (uchar)*(undefined4 *)(X1 + (uVar2 >> 0x18) * 4);
  param_4[0xd] = (uchar)((uint)*(undefined4 *)(X2 + (uVar2 >> 0x10 & 0xff) * 4) >> 8);
  param_4[0xe] = (uchar)*(undefined4 *)(S1 + (uVar2 >> 8 & 0xff) * 4);
  param_4[0xf] = (uchar)*(undefined4 *)(S2 + (uVar2 & 0xff) * 4);
  *(uint *)param_4 = *(uint *)(param_3 + 0xc0) ^ *(uint *)param_4;
  *(uint *)(param_4 + 4) = *(uint *)(param_3 + 0xc4) ^ *(uint *)(param_4 + 4);
  *(uint *)(param_4 + 8) = *(uint *)(param_3 + 200) ^ *(uint *)(param_4 + 8);
  *(uint *)(param_4 + 0xc) = *(uint *)(param_3 + 0xcc) ^ *(uint *)(param_4 + 0xc);
  return;
}
```
