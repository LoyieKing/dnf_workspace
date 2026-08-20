# char_traits<wchar_t> >

`_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb`

`int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)`

| 类 | 地址 |
|---|---|
| `int std::__copy_streambufs_eof<wchar_t, std` | `0x087063f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087063f0  _ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb
#           int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)
# range [0x087063f0, 0x0870b0ef]
087063f0 +0x0000:  push   %ebp
087063f1 +0x0001:  mov    %esp,%ebp
087063f3 +0x0003:  push   %edi
087063f4 +0x0004:  push   %esi
087063f5 +0x0005:  push   %ebx
087063f6 +0x0006:  sub    $0x2c,%esp
087063f9 +0x0009:  mov    0x8(%ebp),%esi
087063fc +0x000c:  mov    0x10(%ebp),%eax
087063ff +0x000f:  mov    0xc(%ebp),%edi
08706402 +0x0012:  movb   $0x1,(%eax)
08706405 +0x0015:  mov    0x8(%esi),%eax
08706408 +0x0018:  cmp    0xc(%esi),%eax
0870640b +0x001b:  jae    087064db <+0xeb>
08706411 +0x0021:  mov    (%eax),%eax
08706413 +0x0023:  movl   $0x0,-0x1c(%ebp)
0870641a +0x002a:  lea    0x0(%esi),%esi
08706420 +0x0030:  cmp    $0xffffffff,%eax
08706423 +0x0033:  je     08706463 <+0x73>
08706425 +0x0035:  mov    0x8(%esi),%edx
08706428 +0x0038:  mov    0xc(%esi),%ebx
0870642b +0x003b:  sub    %edx,%ebx
0870642d +0x003d:  sar    $0x2,%ebx
08706430 +0x0040:  cmp    $0x1,%ebx
08706433 +0x0043:  jle    08706470 <+0x80>
08706435 +0x0045:  mov    (%edi),%eax
08706437 +0x0047:  mov    %edx,0x4(%esp)
0870643b +0x004b:  mov    %ebx,0x8(%esp)
0870643f +0x004f:  mov    %edi,(%esp)
08706442 +0x0052:  call   *0x30(%eax)
08706445 +0x0055:  add    %eax,-0x1c(%ebp)
08706448 +0x0058:  lea    0x0(,%eax,4),%edx
0870644f +0x005f:  add    %edx,0x8(%esi)
08706452 +0x0062:  cmp    %eax,%ebx
08706454 +0x0064:  jg     087064a0 <+0xb0>
08706456 +0x0066:  mov    (%esi),%eax
08706458 +0x0068:  mov    %esi,(%esp)
0870645b +0x006b:  call   *0x24(%eax)
0870645e +0x006e:  cmp    $0xffffffff,%eax
08706461 +0x0071:  jne    08706425 <+0x35>
08706463 +0x0073:  mov    -0x1c(%ebp),%eax
08706466 +0x0076:  add    $0x2c,%esp
08706469 +0x0079:  pop    %ebx
0870646a +0x007a:  pop    %esi
0870646b +0x007b:  pop    %edi
0870646c +0x007c:  pop    %ebp
0870646d +0x007d:  ret
0870646e +0x007e:  xchg   %ax,%ax
08706470 +0x0080:  mov    0x14(%edi),%ecx
08706473 +0x0083:  cmp    0x18(%edi),%ecx
08706476 +0x0086:  jae    087064c5 <+0xd5>
08706478 +0x0088:  addl   $0x4,0x14(%edi)
0870647c +0x008c:  mov    %eax,(%ecx)
0870647e +0x008e:  cmp    0xc(%esi),%edx
08706481 +0x0091:  jae    087064bb <+0xcb>
08706483 +0x0093:  mov    (%edx),%eax
08706485 +0x0095:  add    $0x4,%edx
08706488 +0x0098:  mov    %edx,0x8(%esi)
0870648b +0x009b:  cmp    $0xffffffff,%eax
0870648e +0x009e:  je     0870649a <+0xaa>
08706490 +0x00a0:  mov    0x8(%esi),%eax
08706493 +0x00a3:  cmp    0xc(%esi),%eax
08706496 +0x00a6:  jae    087064b1 <+0xc1>
08706498 +0x00a8:  mov    (%eax),%eax
0870649a +0x00aa:  addl   $0x1,-0x1c(%ebp)
0870649e +0x00ae:  jmp    08706420 <+0x30>
087064a0 +0x00b0:  mov    0x10(%ebp),%eax
087064a3 +0x00b3:  movb   $0x0,(%eax)
087064a6 +0x00b6:  mov    -0x1c(%ebp),%eax
087064a9 +0x00b9:  add    $0x2c,%esp
087064ac +0x00bc:  pop    %ebx
087064ad +0x00bd:  pop    %esi
087064ae +0x00be:  pop    %edi
087064af +0x00bf:  pop    %ebp
087064b0 +0x00c0:  ret
087064b1 +0x00c1:  mov    (%esi),%eax
087064b3 +0x00c3:  mov    %esi,(%esp)
087064b6 +0x00c6:  call   *0x24(%eax)
087064b9 +0x00c9:  jmp    0870649a <+0xaa>
087064bb +0x00cb:  mov    (%esi),%eax
087064bd +0x00cd:  mov    %esi,(%esp)
087064c0 +0x00d0:  call   *0x28(%eax)
087064c3 +0x00d3:  jmp    0870648b <+0x9b>
087064c5 +0x00d5:  mov    (%edi),%edx
087064c7 +0x00d7:  mov    %eax,0x4(%esp)
087064cb +0x00db:  mov    %edi,(%esp)
087064ce +0x00de:  call   *0x34(%edx)
087064d1 +0x00e1:  cmp    $0xffffffff,%eax
087064d4 +0x00e4:  je     087064a0 <+0xb0>
087064d6 +0x00e6:  mov    0x8(%esi),%edx
087064d9 +0x00e9:  jmp    0870647e <+0x8e>
087064db +0x00eb:  mov    (%esi),%eax
087064dd +0x00ed:  mov    %esi,(%esp)
087064e0 +0x00f0:  call   *0x24(%eax)
087064e3 +0x00f3:  jmp    08706413 <+0x23>
087064e8 +0x00f8:  nop
087064e9 +0x00f9:  nop
087064ea +0x00fa:  nop
087064eb +0x00fb:  nop
087064ec +0x00fc:  nop
087064ed +0x00fd:  nop
087064ee +0x00fe:  nop
087064ef +0x00ff:  nop
087064f0 +0x0100:  push   %ebp
087064f1 +0x0101:  mov    %esp,%ebp
087064f3 +0x0103:  mov    0x8(%ebp),%eax
087064f6 +0x0106:  pop    %ebp
087064f7 +0x0107:  mov    (%eax),%eax
087064f9 +0x0109:  ret
087064fa +0x010a:  nop
087064fb +0x010b:  nop
087064fc +0x010c:  nop
087064fd +0x010d:  nop
087064fe +0x010e:  nop
087064ff +0x010f:  nop
08706500 +0x0110:  push   %ebp
08706501 +0x0111:  mov    %esp,%ebp
08706503 +0x0113:  mov    0x8(%ebp),%eax
08706506 +0x0116:  pop    %ebp
08706507 +0x0117:  mov    (%eax),%eax
08706509 +0x0119:  ret
0870650a +0x011a:  nop
0870650b +0x011b:  nop
0870650c +0x011c:  nop
0870650d +0x011d:  nop
0870650e +0x011e:  nop
0870650f +0x011f:  nop
08706510 +0x0120:  push   %ebp
08706511 +0x0121:  mov    %esp,%ebp
08706513 +0x0123:  mov    0xc(%ebp),%eax
08706516 +0x0126:  mov    0x8(%ebp),%edx
08706519 +0x0129:  mov    %eax,(%edx)
0870651b +0x012b:  pop    %ebp
0870651c +0x012c:  ret
0870651d +0x012d:  nop
0870651e +0x012e:  nop
0870651f +0x012f:  nop
08706520 +0x0130:  push   %ebp
08706521 +0x0131:  mov    %esp,%ebp
08706523 +0x0133:  mov    0x8(%ebp),%eax
08706526 +0x0136:  pop    %ebp
08706527 +0x0137:  mov    (%eax),%eax
08706529 +0x0139:  sub    $0xc,%eax
0870652c +0x013c:  ret
0870652d +0x013d:  nop
0870652e +0x013e:  nop
0870652f +0x013f:  nop
08706530 +0x0140:  push   %ebp
08706531 +0x0141:  mov    %esp,%ebp
08706533 +0x0143:  mov    0xc(%ebp),%edx
08706536 +0x0146:  mov    0x8(%ebp),%eax
08706539 +0x0149:  mov    (%edx),%edx
0870653b +0x014b:  mov    %edx,(%eax)
0870653d +0x014d:  pop    %ebp
0870653e +0x014e:  ret    $0x4
08706541 +0x0151:  nop
08706542 +0x0152:  nop
08706543 +0x0153:  nop
08706544 +0x0154:  nop
08706545 +0x0155:  nop
08706546 +0x0156:  nop
08706547 +0x0157:  nop
08706548 +0x0158:  nop
08706549 +0x0159:  nop
0870654a +0x015a:  nop
0870654b +0x015b:  nop
0870654c +0x015c:  nop
0870654d +0x015d:  nop
0870654e +0x015e:  nop
0870654f +0x015f:  nop
08706550 +0x0160:  push   %ebp
08706551 +0x0161:  mov    %esp,%ebp
08706553 +0x0163:  mov    0xc(%ebp),%edx
08706556 +0x0166:  mov    0x8(%ebp),%eax
08706559 +0x0169:  mov    (%edx),%edx
0870655b +0x016b:  add    -0xc(%edx),%edx
0870655e +0x016e:  mov    %edx,(%eax)
08706560 +0x0170:  pop    %ebp
08706561 +0x0171:  ret    $0x4
08706564 +0x0174:  nop
08706565 +0x0175:  nop
08706566 +0x0176:  nop
08706567 +0x0177:  nop
08706568 +0x0178:  nop
08706569 +0x0179:  nop
0870656a +0x017a:  nop
0870656b +0x017b:  nop
0870656c +0x017c:  nop
0870656d +0x017d:  nop
0870656e +0x017e:  nop
0870656f +0x017f:  nop
08706570 +0x0180:  push   %ebp
08706571 +0x0181:  mov    %esp,%ebp
08706573 +0x0183:  mov    0x8(%ebp),%eax
08706576 +0x0186:  mov    (%eax),%eax
08706578 +0x0188:  mov    -0xc(%eax),%edx
0870657b +0x018b:  mov    0x10(%ebp),%eax
0870657e +0x018e:  sub    0xc(%ebp),%edx
08706581 +0x0191:  cmp    %edx,%eax
08706583 +0x0193:  jbe    08706587 <+0x197>
08706585 +0x0195:  mov    %edx,%eax
08706587 +0x0197:  pop    %ebp
08706588 +0x0198:  ret
08706589 +0x0199:  nop
0870658a +0x019a:  nop
0870658b +0x019b:  nop
0870658c +0x019c:  nop
0870658d +0x019d:  nop
0870658e +0x019e:  nop
0870658f +0x019f:  nop
08706590 +0x01a0:  push   %ebp
08706591 +0x01a1:  mov    %esp,%ebp
08706593 +0x01a3:  mov    0x8(%ebp),%eax
08706596 +0x01a6:  mov    0xc(%ebp),%ecx
08706599 +0x01a9:  mov    (%eax),%edx
0870659b +0x01ab:  mov    $0x1,%eax
087065a0 +0x01b0:  cmp    %ecx,%edx
087065a2 +0x01b2:  ja     087065ac <+0x1bc>
087065a4 +0x01b4:  add    -0xc(%edx),%edx
087065a7 +0x01b7:  cmp    %edx,%ecx
087065a9 +0x01b9:  seta   %al
087065ac +0x01bc:  pop    %ebp
087065ad +0x01bd:  ret
087065ae +0x01be:  nop
087065af +0x01bf:  nop
087065b0 +0x01c0:  push   %ebp
087065b1 +0x01c1:  mov    %esp,%ebp
087065b3 +0x01c3:  mov    0x8(%ebp),%eax
087065b6 +0x01c6:  sub    0xc(%ebp),%eax
087065b9 +0x01c9:  pop    %ebp
087065ba +0x01ca:  ret
087065bb +0x01cb:  nop
087065bc +0x01cc:  nop
087065bd +0x01cd:  nop
087065be +0x01ce:  nop
087065bf +0x01cf:  nop
087065c0 +0x01d0:  push   %ebp
087065c1 +0x01d1:  mov    $&_ZNSs4_Rep20_S_empty_rep_storageE,%eax
087065c6 +0x01d6:  mov    %esp,%ebp
087065c8 +0x01d8:  pop    %ebp
087065c9 +0x01d9:  ret
087065ca +0x01da:  nop
087065cb +0x01db:  nop
087065cc +0x01dc:  nop
087065cd +0x01dd:  nop
087065ce +0x01de:  nop
087065cf +0x01df:  nop
087065d0 +0x01e0:  push   %ebp
087065d1 +0x01e1:  mov    %esp,%ebp
087065d3 +0x01e3:  mov    0x8(%ebp),%eax
087065d6 +0x01e6:  movl   $&_ZNSs4_Rep20_S_empty_rep_storageE+0xc,(%eax)
087065dc +0x01ec:  pop    %ebp
087065dd +0x01ed:  ret
087065de +0x01ee:  nop
087065df +0x01ef:  nop
087065e0 +0x01f0:  push   %ebp
087065e1 +0x01f1:  mov    %esp,%ebp
087065e3 +0x01f3:  mov    0xc(%ebp),%edx
087065e6 +0x01f6:  mov    0x8(%ebp),%eax
087065e9 +0x01f9:  mov    (%edx),%edx
087065eb +0x01fb:  mov    %edx,(%eax)
087065ed +0x01fd:  pop    %ebp
087065ee +0x01fe:  ret    $0x4
087065f1 +0x0201:  nop
087065f2 +0x0202:  nop
087065f3 +0x0203:  nop
087065f4 +0x0204:  nop
087065f5 +0x0205:  nop
087065f6 +0x0206:  nop
087065f7 +0x0207:  nop
087065f8 +0x0208:  nop
087065f9 +0x0209:  nop
087065fa +0x020a:  nop
087065fb +0x020b:  nop
087065fc +0x020c:  nop
087065fd +0x020d:  nop
087065fe +0x020e:  nop
087065ff +0x020f:  nop
08706600 +0x0210:  push   %ebp
08706601 +0x0211:  mov    %esp,%ebp
08706603 +0x0213:  mov    0xc(%ebp),%edx
08706606 +0x0216:  mov    0x8(%ebp),%eax
08706609 +0x0219:  mov    (%edx),%edx
0870660b +0x021b:  add    -0xc(%edx),%edx
0870660e +0x021e:  mov    %edx,(%eax)
08706610 +0x0220:  pop    %ebp
08706611 +0x0221:  ret    $0x4
08706614 +0x0224:  nop
08706615 +0x0225:  nop
08706616 +0x0226:  nop
08706617 +0x0227:  nop
08706618 +0x0228:  nop
08706619 +0x0229:  nop
0870661a +0x022a:  nop
0870661b +0x022b:  nop
0870661c +0x022c:  nop
0870661d +0x022d:  nop
0870661e +0x022e:  nop
0870661f +0x022f:  nop
08706620 +0x0230:  push   %ebp
08706621 +0x0231:  mov    %esp,%ebp
08706623 +0x0233:  mov    0xc(%ebp),%edx
08706626 +0x0236:  mov    0x8(%ebp),%eax
08706629 +0x0239:  mov    (%edx),%edx
0870662b +0x023b:  add    -0xc(%edx),%edx
0870662e +0x023e:  mov    %edx,(%eax)
08706630 +0x0240:  pop    %ebp
08706631 +0x0241:  ret    $0x4
08706634 +0x0244:  nop
08706635 +0x0245:  nop
08706636 +0x0246:  nop
08706637 +0x0247:  nop
08706638 +0x0248:  nop
08706639 +0x0249:  nop
0870663a +0x024a:  nop
0870663b +0x024b:  nop
0870663c +0x024c:  nop
0870663d +0x024d:  nop
0870663e +0x024e:  nop
0870663f +0x024f:  nop
08706640 +0x0250:  push   %ebp
08706641 +0x0251:  mov    %esp,%ebp
08706643 +0x0253:  mov    0xc(%ebp),%edx
08706646 +0x0256:  mov    0x8(%ebp),%eax
08706649 +0x0259:  mov    (%edx),%edx
0870664b +0x025b:  mov    %edx,(%eax)
0870664d +0x025d:  pop    %ebp
0870664e +0x025e:  ret    $0x4
08706651 +0x0261:  nop
08706652 +0x0262:  nop
08706653 +0x0263:  nop
08706654 +0x0264:  nop
08706655 +0x0265:  nop
08706656 +0x0266:  nop
08706657 +0x0267:  nop
08706658 +0x0268:  nop
08706659 +0x0269:  nop
0870665a +0x026a:  nop
0870665b +0x026b:  nop
0870665c +0x026c:  nop
0870665d +0x026d:  nop
0870665e +0x026e:  nop
0870665f +0x026f:  nop
08706660 +0x0270:  push   %ebp
08706661 +0x0271:  mov    %esp,%ebp
08706663 +0x0273:  mov    0x8(%ebp),%eax
08706666 +0x0276:  pop    %ebp
08706667 +0x0277:  mov    (%eax),%eax
08706669 +0x0279:  mov    -0xc(%eax),%eax
0870666c +0x027c:  ret
0870666d +0x027d:  nop
0870666e +0x027e:  nop
0870666f +0x027f:  nop
08706670 +0x0280:  push   %ebp
08706671 +0x0281:  mov    %esp,%ebp
08706673 +0x0283:  mov    0x8(%ebp),%eax
08706676 +0x0286:  pop    %ebp
08706677 +0x0287:  mov    (%eax),%eax
08706679 +0x0289:  mov    -0xc(%eax),%eax
0870667c +0x028c:  ret
0870667d +0x028d:  nop
0870667e +0x028e:  nop
0870667f +0x028f:  nop
08706680 +0x0290:  push   %ebp
08706681 +0x0291:  mov    $0x3ffffffc,%eax
08706686 +0x0296:  mov    %esp,%ebp
08706688 +0x0298:  pop    %ebp
08706689 +0x0299:  ret
0870668a +0x029a:  nop
0870668b +0x029b:  nop
0870668c +0x029c:  nop
0870668d +0x029d:  nop
0870668e +0x029e:  nop
0870668f +0x029f:  nop
08706690 +0x02a0:  push   %ebp
08706691 +0x02a1:  mov    %esp,%ebp
08706693 +0x02a3:  mov    0x8(%ebp),%eax
08706696 +0x02a6:  pop    %ebp
08706697 +0x02a7:  mov    (%eax),%eax
08706699 +0x02a9:  mov    -0x8(%eax),%eax
0870669c +0x02ac:  ret
0870669d +0x02ad:  nop
0870669e +0x02ae:  nop
0870669f +0x02af:  nop
087066a0 +0x02b0:  push   %ebp
087066a1 +0x02b1:  mov    %esp,%ebp
087066a3 +0x02b3:  mov    0x8(%ebp),%eax
087066a6 +0x02b6:  pop    %ebp
087066a7 +0x02b7:  mov    (%eax),%eax
087066a9 +0x02b9:  mov    -0xc(%eax),%eax
087066ac +0x02bc:  test   %eax,%eax
087066ae +0x02be:  sete   %al
087066b1 +0x02c1:  ret
087066b2 +0x02c2:  nop
087066b3 +0x02c3:  nop
087066b4 +0x02c4:  nop
087066b5 +0x02c5:  nop
087066b6 +0x02c6:  nop
087066b7 +0x02c7:  nop
087066b8 +0x02c8:  nop
087066b9 +0x02c9:  nop
087066ba +0x02ca:  nop
087066bb +0x02cb:  nop
087066bc +0x02cc:  nop
087066bd +0x02cd:  nop
087066be +0x02ce:  nop
087066bf +0x02cf:  nop
087066c0 +0x02d0:  push   %ebp
087066c1 +0x02d1:  mov    %esp,%ebp
087066c3 +0x02d3:  mov    0x8(%ebp),%edx
087066c6 +0x02d6:  mov    0xc(%ebp),%eax
087066c9 +0x02d9:  pop    %ebp
087066ca +0x02da:  add    (%edx),%eax
087066cc +0x02dc:  ret
087066cd +0x02dd:  nop
087066ce +0x02de:  nop
087066cf +0x02df:  nop
087066d0 +0x02e0:  push   %ebp
087066d1 +0x02e1:  mov    %esp,%ebp
087066d3 +0x02e3:  sub    $0x8,%esp
087066d6 +0x02e6:  mov    0x8(%ebp),%ecx
087066d9 +0x02e9:  mov    %ebx,(%esp)
087066dc +0x02ec:  mov    0xc(%ebp),%eax
087066df +0x02ef:  mov    %esi,0x4(%esp)
087066e3 +0x02f3:  mov    (%ecx),%edx
087066e5 +0x02f5:  lea    -0xc(%edx),%ebx
087066e8 +0x02f8:  mov    0x8(%ebx),%esi
087066eb +0x02fb:  test   %esi,%esi
087066ed +0x02fd:  js     08706710 <+0x320>
087066ef +0x02ff:  mov    (%eax),%ebx
087066f1 +0x0301:  lea    -0xc(%ebx),%esi
087066f4 +0x0304:  cmpl   $0x0,0x8(%esi)
087066f8 +0x0308:  jns    08706701 <+0x311>
087066fa +0x030a:  movl   $0x0,0x8(%esi)
08706701 +0x0311:  mov    %ebx,(%ecx)
08706703 +0x0313:  mov    %edx,(%eax)
08706705 +0x0315:  mov    (%esp),%ebx
08706708 +0x0318:  mov    0x4(%esp),%esi
0870670c +0x031c:  mov    %ebp,%esp
0870670e +0x031e:  pop    %ebp
0870670f +0x031f:  ret
08706710 +0x0320:  movl   $0x0,0x8(%ebx)
08706717 +0x0327:  jmp    087066ef <+0x2ff>
08706719 +0x0329:  nop
0870671a +0x032a:  nop
0870671b +0x032b:  nop
0870671c +0x032c:  nop
0870671d +0x032d:  nop
0870671e +0x032e:  nop
0870671f +0x032f:  nop
08706720 +0x0330:  push   %ebp
08706721 +0x0331:  mov    %esp,%ebp
08706723 +0x0333:  mov    0x8(%ebp),%eax
08706726 +0x0336:  pop    %ebp
08706727 +0x0337:  mov    (%eax),%eax
08706729 +0x0339:  ret
0870672a +0x033a:  nop
0870672b +0x033b:  nop
0870672c +0x033c:  nop
0870672d +0x033d:  nop
0870672e +0x033e:  nop
0870672f +0x033f:  nop
08706730 +0x0340:  push   %ebp
08706731 +0x0341:  mov    %esp,%ebp
08706733 +0x0343:  mov    0x8(%ebp),%eax
08706736 +0x0346:  pop    %ebp
08706737 +0x0347:  ret    $0x4
0870673a +0x034a:  nop
0870673b +0x034b:  nop
0870673c +0x034c:  nop
0870673d +0x034d:  nop
0870673e +0x034e:  nop
0870673f +0x034f:  nop
08706740 +0x0350:  push   %ebp
08706741 +0x0351:  mov    %esp,%ebp
08706743 +0x0353:  mov    0x8(%ebp),%eax
08706746 +0x0356:  push   %ebx
08706747 +0x0357:  movzbl 0xc(%ebp),%ecx
0870674b +0x035b:  mov    (%eax),%edx
0870674d +0x035d:  mov    -0xc(%edx),%eax
08706750 +0x0360:  test   %eax,%eax
08706752 +0x0362:  je     08706780 <+0x390>
08706754 +0x0364:  lea    -0x1(%eax),%ebx
08706757 +0x0367:  mov    0x10(%ebp),%eax
0870675a +0x036a:  cmp    %ebx,%eax
0870675c +0x036c:  ja     08706778 <+0x388>
0870675e +0x036e:  add    $0x1,%eax
08706761 +0x0371:  lea    0x0(%esi,%eiz,1),%esi
08706768 +0x0378:  test   %eax,%eax
0870676a +0x037a:  je     08706780 <+0x390>
0870676c +0x037c:  sub    $0x1,%eax
0870676f +0x037f:  cmp    (%edx,%eax,1),%cl
08706772 +0x0382:  jne    08706768 <+0x378>
08706774 +0x0384:  pop    %ebx
08706775 +0x0385:  pop    %ebp
08706776 +0x0386:  ret
08706777 +0x0387:  nop
08706778 +0x0388:  mov    %ebx,%eax
0870677a +0x038a:  jmp    0870675e <+0x36e>
0870677c +0x038c:  lea    0x0(%esi,%eiz,1),%esi
08706780 +0x0390:  mov    $0xffffffff,%eax
08706785 +0x0395:  pop    %ebx
08706786 +0x0396:  pop    %ebp
08706787 +0x0397:  ret
08706788 +0x0398:  nop
08706789 +0x0399:  nop
0870678a +0x039a:  nop
0870678b +0x039b:  nop
0870678c +0x039c:  nop
0870678d +0x039d:  nop
0870678e +0x039e:  nop
0870678f +0x039f:  nop
08706790 +0x03a0:  push   %ebp
08706791 +0x03a1:  mov    %esp,%ebp
08706793 +0x03a3:  sub    $0x8,%esp
08706796 +0x03a6:  movsbl 0xc(%ebp),%eax
0870679a +0x03aa:  mov    %eax,0xc(%ebp)
0870679d +0x03ad:  leave
0870679e +0x03ae:  jmp    08706740 <+0x350>
087067a3 +0x03b3:  nop
087067a4 +0x03b4:  nop
087067a5 +0x03b5:  nop
087067a6 +0x03b6:  nop
087067a7 +0x03b7:  nop
087067a8 +0x03b8:  nop
087067a9 +0x03b9:  nop
087067aa +0x03ba:  nop
087067ab +0x03bb:  nop
087067ac +0x03bc:  nop
087067ad +0x03bd:  nop
087067ae +0x03be:  nop
087067af +0x03bf:  nop
087067b0 +0x03c0:  push   %ebp
087067b1 +0x03c1:  mov    %esp,%ebp
087067b3 +0x03c3:  mov    0x8(%ebp),%edx
087067b6 +0x03c6:  push   %ebx
087067b7 +0x03c7:  mov    0x10(%ebp),%eax
087067ba +0x03ca:  movzbl 0xc(%ebp),%ebx
087067be +0x03ce:  mov    (%edx),%edx
087067c0 +0x03d0:  mov    -0xc(%edx),%ecx
087067c3 +0x03d3:  cmp    %ecx,%eax
087067c5 +0x03d5:  jb     087067d7 <+0x3e7>
087067c7 +0x03d7:  jmp    087067e0 <+0x3f0>
087067c9 +0x03d9:  lea    0x0(%esi,%eiz,1),%esi
087067d0 +0x03e0:  add    $0x1,%eax
087067d3 +0x03e3:  cmp    %ecx,%eax
087067d5 +0x03e5:  jae    087067e0 <+0x3f0>
087067d7 +0x03e7:  cmp    (%edx,%eax,1),%bl
087067da +0x03ea:  je     087067d0 <+0x3e0>
087067dc +0x03ec:  pop    %ebx
087067dd +0x03ed:  pop    %ebp
087067de +0x03ee:  ret
087067df +0x03ef:  nop
087067e0 +0x03f0:  mov    $0xffffffff,%eax
087067e5 +0x03f5:  pop    %ebx
087067e6 +0x03f6:  pop    %ebp
087067e7 +0x03f7:  ret
087067e8 +0x03f8:  nop
087067e9 +0x03f9:  nop
087067ea +0x03fa:  nop
087067eb +0x03fb:  nop
087067ec +0x03fc:  nop
087067ed +0x03fd:  nop
087067ee +0x03fe:  nop
087067ef +0x03ff:  nop
087067f0 +0x0400:  push   %ebp
087067f1 +0x0401:  mov    %esp,%ebp
087067f3 +0x0403:  mov    0x8(%ebp),%eax
087067f6 +0x0406:  push   %ebx
087067f7 +0x0407:  movzbl 0xc(%ebp),%ecx
087067fb +0x040b:  mov    (%eax),%edx
087067fd +0x040d:  mov    -0xc(%edx),%eax
08706800 +0x0410:  test   %eax,%eax
08706802 +0x0412:  je     08706824 <+0x434>
08706804 +0x0414:  lea    -0x1(%eax),%ebx
08706807 +0x0417:  mov    0x10(%ebp),%eax
0870680a +0x041a:  cmp    %ebx,%eax
0870680c +0x041c:  jbe    0870681b <+0x42b>
0870680e +0x041e:  mov    %ebx,%eax
08706810 +0x0420:  jmp    0870681b <+0x42b>
08706812 +0x0422:  lea    0x0(%esi),%esi
08706818 +0x0428:  sub    $0x1,%eax
0870681b +0x042b:  cmp    (%edx,%eax,1),%cl
0870681e +0x042e:  jne    08706829 <+0x439>
08706820 +0x0430:  test   %eax,%eax
08706822 +0x0432:  jne    08706818 <+0x428>
08706824 +0x0434:  mov    $0xffffffff,%eax
08706829 +0x0439:  pop    %ebx
0870682a +0x043a:  pop    %ebp
0870682b +0x043b:  ret
0870682c +0x043c:  nop
0870682d +0x043d:  nop
0870682e +0x043e:  nop
0870682f +0x043f:  nop
08706830 +0x0440:  push   %ebp
08706831 +0x0441:  mov    %esp,%ebp
08706833 +0x0443:  mov    0xc(%ebp),%edx
08706836 +0x0446:  mov    0x8(%ebp),%eax
08706839 +0x0449:  mov    %edx,(%eax)
0870683b +0x044b:  pop    %ebp
0870683c +0x044c:  ret
0870683d +0x044d:  nop
0870683e +0x044e:  nop
0870683f +0x044f:  nop
08706840 +0x0450:  push   %ebp
08706841 +0x0451:  mov    $&_ZNSs4_Rep20_S_empty_rep_storageE,%eax
08706846 +0x0456:  mov    %esp,%ebp
08706848 +0x0458:  pop    %ebp
08706849 +0x0459:  ret
0870684a +0x045a:  nop
0870684b +0x045b:  nop
0870684c +0x045c:  nop
0870684d +0x045d:  nop
0870684e +0x045e:  nop
0870684f +0x045f:  nop
08706850 +0x0460:  push   %ebp
08706851 +0x0461:  mov    %esp,%ebp
08706853 +0x0463:  mov    0x8(%ebp),%eax
08706856 +0x0466:  pop    %ebp
08706857 +0x0467:  mov    0x8(%eax),%eax
0870685a +0x046a:  shr    $0x1f,%eax
0870685d +0x046d:  ret
0870685e +0x046e:  nop
0870685f +0x046f:  nop
08706860 +0x0470:  push   %ebp
08706861 +0x0471:  mov    %esp,%ebp
08706863 +0x0473:  mov    0x8(%ebp),%eax
08706866 +0x0476:  pop    %ebp
08706867 +0x0477:  mov    0x8(%eax),%eax
0870686a +0x047a:  test   %eax,%eax
0870686c +0x047c:  setg   %al
0870686f +0x047f:  ret
08706870 +0x0480:  push   %ebp
08706871 +0x0481:  mov    %esp,%ebp
08706873 +0x0483:  mov    0x8(%ebp),%eax
08706876 +0x0486:  movl   $0xffffffff,0x8(%eax)
0870687d +0x048d:  pop    %ebp
0870687e +0x048e:  ret
0870687f +0x048f:  nop
08706880 +0x0490:  push   %ebp
08706881 +0x0491:  mov    %esp,%ebp
08706883 +0x0493:  mov    0x8(%ebp),%eax
08706886 +0x0496:  movl   $0x0,0x8(%eax)
0870688d +0x049d:  pop    %ebp
0870688e +0x049e:  ret
0870688f +0x049f:  nop
08706890 +0x04a0:  push   %ebp
08706891 +0x04a1:  mov    %esp,%ebp
08706893 +0x04a3:  mov    0x8(%ebp),%eax
08706896 +0x04a6:  pop    %ebp
08706897 +0x04a7:  add    $0xc,%eax
0870689a +0x04aa:  ret
0870689b +0x04ab:  nop
0870689c +0x04ac:  nop
0870689d +0x04ad:  nop
0870689e +0x04ae:  nop
0870689f +0x04af:  nop
087068a0 +0x04b0:  push   %ebp
087068a1 +0x04b1:  mov    %esp,%ebp
087068a3 +0x04b3:  mov    0x8(%ebp),%eax
087068a6 +0x04b6:  mov    (%eax),%edx
087068a8 +0x04b8:  mov    0xc(%ebp),%eax
087068ab +0x04bb:  pop    %ebp
087068ac +0x04bc:  cmp    (%eax),%edx
087068ae +0x04be:  sete   %al
087068b1 +0x04c1:  ret
087068b2 +0x04c2:  nop
087068b3 +0x04c3:  nop
087068b4 +0x04c4:  nop
087068b5 +0x04c5:  nop
087068b6 +0x04c6:  nop
087068b7 +0x04c7:  nop
087068b8 +0x04c8:  nop
087068b9 +0x04c9:  nop
087068ba +0x04ca:  nop
087068bb +0x04cb:  nop
087068bc +0x04cc:  nop
087068bd +0x04cd:  nop
087068be +0x04ce:  nop
087068bf +0x04cf:  nop
087068c0 +0x04d0:  push   %ebp
087068c1 +0x04d1:  mov    %esp,%ebp
087068c3 +0x04d3:  mov    0x8(%ebp),%eax
087068c6 +0x04d6:  mov    0xc(%ebp),%edx
087068c9 +0x04d9:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%eax
087068ce +0x04de:  jne    087068d2 <+0x4e2>
087068d0 +0x04e0:  pop    %ebp
087068d1 +0x04e1:  ret
087068d2 +0x04e2:  movl   $0x0,0x8(%eax)
087068d9 +0x04e9:  mov    %edx,(%eax)
087068db +0x04eb:  movb   $0x0,0xc(%eax,%edx,1)
087068e0 +0x04f0:  pop    %ebp
087068e1 +0x04f1:  ret
087068e2 +0x04f2:  nop
087068e3 +0x04f3:  nop
087068e4 +0x04f4:  nop
087068e5 +0x04f5:  nop
087068e6 +0x04f6:  nop
087068e7 +0x04f7:  nop
087068e8 +0x04f8:  nop
087068e9 +0x04f9:  nop
087068ea +0x04fa:  nop
087068eb +0x04fb:  nop
087068ec +0x04fc:  nop
087068ed +0x04fd:  nop
087068ee +0x04fe:  nop
087068ef +0x04ff:  nop
087068f0 +0x0500:  push   %ebp
087068f1 +0x0501:  mov    %esp,%ebp
087068f3 +0x0503:  mov    0x8(%ebp),%eax
087068f6 +0x0506:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%eax
087068fb +0x050b:  jne    08706902 <+0x512>
087068fd +0x050d:  add    $0xc,%eax
08706900 +0x0510:  pop    %ebp
08706901 +0x0511:  ret
08706902 +0x0512:  mov    $&data#bb92cc41(.plt),%edx
08706907 +0x0517:  test   %edx,%edx
08706909 +0x0519:  je     08706912 <+0x522>
0870690b +0x051b:  lock addl $0x1,0x8(%eax)
08706910 +0x0520:  jmp    087068fd <+0x50d>
08706912 +0x0522:  addl   $0x1,0x8(%eax)
08706916 +0x0526:  jmp    087068fd <+0x50d>
08706918 +0x0528:  nop
08706919 +0x0529:  nop
0870691a +0x052a:  nop
0870691b +0x052b:  nop
0870691c +0x052c:  nop
0870691d +0x052d:  nop
0870691e +0x052e:  nop
0870691f +0x052f:  nop
08706920 +0x0530:  push   %ebp
08706921 +0x0531:  mov    %esp,%ebp
08706923 +0x0533:  sub    $0x8,%esp
08706926 +0x0536:  leave
08706927 +0x0537:  jmp    087244f0 <_ZdlPv>  ; operator delete(void*)
0870692c +0x053c:  nop
0870692d +0x053d:  nop
0870692e +0x053e:  nop
0870692f +0x053f:  nop
08706930 +0x0540:  push   %ebp
08706931 +0x0541:  mov    %esp,%ebp
08706933 +0x0543:  push   %ebx
08706934 +0x0544:  sub    $0x4,%esp
08706937 +0x0547:  mov    0x8(%ebp),%eax
0870693a +0x054a:  mov    0xc(%ebp),%edx
0870693d +0x054d:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%eax
08706942 +0x0552:  jne    0870694a <+0x55a>
08706944 +0x0554:  add    $0x4,%esp
08706947 +0x0557:  pop    %ebx
08706948 +0x0558:  pop    %ebp
08706949 +0x0559:  ret
0870694a +0x055a:  mov    $&data#bb92cc41(.plt),%ecx
0870694f +0x055f:  test   %ecx,%ecx
08706951 +0x0561:  je     0870696d <+0x57d>
08706953 +0x0563:  or     $0xffffffff,%ecx
08706956 +0x0566:  lock xadd %ecx,0x8(%eax)
0870695b +0x056b:  test   %ecx,%ecx
0870695d +0x056d:  jg     08706944 <+0x554>
0870695f +0x056f:  mov    %edx,0xc(%ebp)
08706962 +0x0572:  mov    %eax,0x8(%ebp)
08706965 +0x0575:  pop    %edx
08706966 +0x0576:  pop    %ebx
08706967 +0x0577:  pop    %ebp
08706968 +0x0578:  jmp    08706920 <+0x530>
0870696d +0x057d:  mov    0x8(%eax),%ecx
08706970 +0x0580:  lea    -0x1(%ecx),%ebx
08706973 +0x0583:  mov    %ebx,0x8(%eax)
08706976 +0x0586:  jmp    0870695b <+0x56b>
08706978 +0x0588:  nop
08706979 +0x0589:  nop
0870697a +0x058a:  nop
0870697b +0x058b:  nop
0870697c +0x058c:  nop
0870697d +0x058d:  nop
0870697e +0x058e:  nop
0870697f +0x058f:  nop
08706980 +0x0590:  push   %ebp
08706981 +0x0591:  mov    %esp,%ebp
08706983 +0x0593:  sub    $0x18,%esp
08706986 +0x0596:  mov    0x8(%ebp),%eax
08706989 +0x0599:  mov    (%eax),%edx
0870698b +0x059b:  mov    $0x3ffffffc,%eax
08706990 +0x05a0:  sub    -0xc(%edx),%eax
08706993 +0x05a3:  add    0xc(%ebp),%eax
08706996 +0x05a6:  cmp    0x10(%ebp),%eax
08706999 +0x05a9:  jb     0870699d <+0x5ad>
0870699b +0x05ab:  leave
0870699c +0x05ac:  ret
0870699d +0x05ad:  mov    0x14(%ebp),%eax
087069a0 +0x05b0:  mov    %eax,(%esp)
087069a3 +0x05b3:  call   086d9c40 <_ZSt20__throw_length_errorPKc>  ; std::__throw_length_error(char const*)
087069a8 +0x05b8:  nop
087069a9 +0x05b9:  nop
087069aa +0x05ba:  nop
087069ab +0x05bb:  nop
087069ac +0x05bc:  nop
087069ad +0x05bd:  nop
087069ae +0x05be:  nop
087069af +0x05bf:  nop
087069b0 +0x05c0:  push   %ebp
087069b1 +0x05c1:  mov    %esp,%ebp
087069b3 +0x05c3:  push   %ebx
087069b4 +0x05c4:  sub    $0x14,%esp
087069b7 +0x05c7:  mov    0x8(%ebp),%ebx
087069ba +0x05ca:  mov    0xc(%ebp),%eax
087069bd +0x05cd:  cmp    $0x3ffffffc,%ebx
087069c3 +0x05d3:  ja     08706a1a <+0x62a>
087069c5 +0x05d5:  cmp    %eax,%ebx
087069c7 +0x05d7:  jbe    087069ff <+0x60f>
087069c9 +0x05d9:  lea    (%eax,%eax,1),%edx
087069cc +0x05dc:  cmp    %edx,%ebx
087069ce +0x05de:  jae    087069d2 <+0x5e2>
087069d0 +0x05e0:  mov    %edx,%ebx
087069d2 +0x05e2:  lea    0x1d(%ebx),%ecx
087069d5 +0x05e5:  cmp    $0x1000,%ecx
087069db +0x05eb:  lea    0xd(%ebx),%edx
087069de +0x05ee:  jbe    08706a02 <+0x612>
087069e0 +0x05f0:  cmp    %ebx,%eax
087069e2 +0x05f2:  jae    08706a02 <+0x612>
087069e4 +0x05f4:  add    $0x1000,%ebx
087069ea +0x05fa:  and    $0xfff,%ecx
087069f0 +0x0600:  sub    %ecx,%ebx
087069f2 +0x0602:  cmp    $0x3ffffffc,%ebx
087069f8 +0x0608:  jbe    087069ff <+0x60f>
087069fa +0x060a:  mov    $0x3ffffffc,%ebx
087069ff +0x060f:  lea    0xd(%ebx),%edx
08706a02 +0x0612:  mov    %edx,(%esp)
08706a05 +0x0615:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08706a0a +0x061a:  mov    %ebx,0x4(%eax)
08706a0d +0x061d:  movl   $0x0,0x8(%eax)
08706a14 +0x0624:  add    $0x14,%esp
08706a17 +0x0627:  pop    %ebx
08706a18 +0x0628:  pop    %ebp
08706a19 +0x0629:  ret
08706a1a +0x062a:  movl   $"basic_string::_S_create",(%esp)
08706a21 +0x0631:  call   086d9c40 <_ZSt20__throw_length_errorPKc>  ; std::__throw_length_error(char const*)
08706a26 +0x0636:  mov    %eax,(%esp)
08706a29 +0x0639:  call   08ae3750 <_Unwind_Resume>
08706a2e +0x063e:  nop
08706a2f +0x063f:  nop
08706a30 +0x0640:  push   %ebp
08706a31 +0x0641:  mov    %esp,%ebp
08706a33 +0x0643:  sub    $0x28,%esp
08706a36 +0x0646:  mov    0x8(%ebp),%eax
08706a39 +0x0649:  mov    %edi,-0x4(%ebp)
08706a3c +0x064c:  mov    0xc(%ebp),%edi
08706a3f +0x064f:  mov    %ebx,-0xc(%ebp)
08706a42 +0x0652:  mov    %esi,-0x8(%ebp)
08706a45 +0x0655:  mov    (%eax),%esi
08706a47 +0x0657:  mov    -0xc(%esi),%ebx
08706a4a +0x065a:  mov    %edi,(%esp)
08706a4d +0x065d:  call   0807e3b0 <_init+0xca8>
08706a52 +0x0662:  cmp    %ebx,%eax
08706a54 +0x0664:  mov    %eax,%ecx
08706a56 +0x0666:  jbe    08706a5a <+0x66a>
08706a58 +0x0668:  mov    %ebx,%ecx
08706a5a +0x066a:  cmp    %ecx,%ecx
08706a5c +0x066c:  repz cmpsb %es:(%edi),%ds:(%esi)
08706a5e +0x066e:  seta   %dl
08706a61 +0x0671:  setb   %cl
08706a64 +0x0674:  sub    %cl,%dl
08706a66 +0x0676:  movsbl %dl,%edx
08706a69 +0x0679:  test   %edx,%edx
08706a6b +0x067b:  jne    08706a71 <+0x681>
08706a6d +0x067d:  mov    %ebx,%edx
08706a6f +0x067f:  sub    %eax,%edx
08706a71 +0x0681:  mov    -0xc(%ebp),%ebx
08706a74 +0x0684:  mov    %edx,%eax
08706a76 +0x0686:  mov    -0x8(%ebp),%esi
08706a79 +0x0689:  mov    -0x4(%ebp),%edi
08706a7c +0x068c:  mov    %ebp,%esp
08706a7e +0x068e:  pop    %ebp
08706a7f +0x068f:  ret
08706a80 +0x0690:  push   %ebp
08706a81 +0x0691:  mov    %esp,%ebp
08706a83 +0x0693:  sub    $0xc,%esp
08706a86 +0x0696:  mov    0x8(%ebp),%eax
08706a89 +0x0699:  mov    %ebx,(%esp)
08706a8c +0x069c:  mov    %esi,0x4(%esp)
08706a90 +0x06a0:  mov    %edi,0x8(%esp)
08706a94 +0x06a4:  mov    (%eax),%esi
08706a96 +0x06a6:  mov    0xc(%ebp),%eax
08706a99 +0x06a9:  mov    -0xc(%esi),%ebx
08706a9c +0x06ac:  mov    (%eax),%edi
08706a9e +0x06ae:  mov    -0xc(%edi),%edx
08706aa1 +0x06b1:  cmp    %ebx,%edx
08706aa3 +0x06b3:  mov    %edx,%ecx
08706aa5 +0x06b5:  jbe    08706aa9 <+0x6b9>
08706aa7 +0x06b7:  mov    %ebx,%ecx
08706aa9 +0x06b9:  cmp    %ecx,%ecx
08706aab +0x06bb:  repz cmpsb %es:(%edi),%ds:(%esi)
08706aad +0x06bd:  seta   %al
08706ab0 +0x06c0:  setb   %cl
08706ab3 +0x06c3:  sub    %cl,%al
08706ab5 +0x06c5:  movsbl %al,%eax
08706ab8 +0x06c8:  test   %eax,%eax
08706aba +0x06ca:  jne    08706ac0 <+0x6d0>
08706abc +0x06cc:  mov    %ebx,%eax
08706abe +0x06ce:  sub    %edx,%eax
08706ac0 +0x06d0:  mov    (%esp),%ebx
08706ac3 +0x06d3:  mov    0x4(%esp),%esi
08706ac7 +0x06d7:  mov    0x8(%esp),%edi
08706acb +0x06db:  mov    %ebp,%esp
08706acd +0x06dd:  pop    %ebp
08706ace +0x06de:  ret
08706acf +0x06df:  nop
08706ad0 +0x06e0:  push   %ebp
08706ad1 +0x06e1:  mov    %esp,%ebp
08706ad3 +0x06e3:  push   %edi
08706ad4 +0x06e4:  push   %esi
08706ad5 +0x06e5:  push   %ebx
08706ad6 +0x06e6:  sub    $0x4,%esp
08706ad9 +0x06e9:  mov    0x8(%ebp),%eax
08706adc +0x06ec:  mov    0x14(%ebp),%edx
08706adf +0x06ef:  mov    0x10(%ebp),%ecx
08706ae2 +0x06f2:  mov    (%eax),%ebx
08706ae4 +0x06f4:  mov    -0xc(%ebx),%eax
08706ae7 +0x06f7:  cmp    %eax,%edx
08706ae9 +0x06f9:  ja     08706b1b <+0x72b>
08706aeb +0x06fb:  sub    %edx,%eax
08706aed +0x06fd:  cmp    %ecx,%eax
08706aef +0x06ff:  jbe    08706b28 <+0x738>
08706af1 +0x0701:  mov    %ecx,%eax
08706af3 +0x0703:  mov    %ebx,-0x10(%ebp)
08706af6 +0x0706:  jmp    08706afb <+0x70b>
08706af8 +0x0708:  sub    $0x1,%eax
08706afb +0x070b:  mov    -0x10(%ebp),%esi
08706afe +0x070e:  mov    %edx,%ecx
08706b00 +0x0710:  mov    0xc(%ebp),%edi
08706b03 +0x0713:  add    %eax,%esi
08706b05 +0x0715:  cmp    %edx,%edx
08706b07 +0x0717:  repz cmpsb %es:(%edi),%ds:(%esi)
08706b09 +0x0719:  seta   %cl
08706b0c +0x071c:  mov    %ecx,%esi
08706b0e +0x071e:  setb   %cl
08706b11 +0x0721:  mov    %esi,%ebx
08706b13 +0x0723:  cmp    %cl,%bl
08706b15 +0x0725:  je     08706b20 <+0x730>
08706b17 +0x0727:  test   %eax,%eax
08706b19 +0x0729:  jne    08706af8 <+0x708>
08706b1b +0x072b:  mov    $0xffffffff,%eax
08706b20 +0x0730:  add    $0x4,%esp
08706b23 +0x0733:  pop    %ebx
08706b24 +0x0734:  pop    %esi
08706b25 +0x0735:  pop    %edi
08706b26 +0x0736:  pop    %ebp
08706b27 +0x0737:  ret
08706b28 +0x0738:  mov    %ebx,-0x10(%ebp)
08706b2b +0x073b:  jmp    08706afb <+0x70b>
08706b2d +0x073d:  nop
08706b2e +0x073e:  nop
08706b2f +0x073f:  nop
08706b30 +0x0740:  push   %ebp
08706b31 +0x0741:  mov    %esp,%ebp
08706b33 +0x0743:  push   %ebx
08706b34 +0x0744:  sub    $0x14,%esp
08706b37 +0x0747:  mov    0xc(%ebp),%ebx
08706b3a +0x074a:  mov    %ebx,(%esp)
08706b3d +0x074d:  call   0807e3b0 <_init+0xca8>
08706b42 +0x0752:  mov    %ebx,0x4(%esp)
08706b46 +0x0756:  mov    %eax,0xc(%esp)
08706b4a +0x075a:  mov    0x10(%ebp),%eax
08706b4d +0x075d:  mov    %eax,0x8(%esp)
08706b51 +0x0761:  mov    0x8(%ebp),%eax
08706b54 +0x0764:  mov    %eax,(%esp)
08706b57 +0x0767:  call   08706ad0 <+0x6e0>
08706b5c +0x076c:  add    $0x14,%esp
08706b5f +0x076f:  pop    %ebx
08706b60 +0x0770:  pop    %ebp
08706b61 +0x0771:  ret
08706b62 +0x0772:  nop
08706b63 +0x0773:  nop
08706b64 +0x0774:  nop
08706b65 +0x0775:  nop
08706b66 +0x0776:  nop
08706b67 +0x0777:  nop
08706b68 +0x0778:  nop
08706b69 +0x0779:  nop
08706b6a +0x077a:  nop
08706b6b +0x077b:  nop
08706b6c +0x077c:  nop
08706b6d +0x077d:  nop
08706b6e +0x077e:  nop
08706b6f +0x077f:  nop
08706b70 +0x0780:  push   %ebp
08706b71 +0x0781:  mov    %esp,%ebp
08706b73 +0x0783:  sub    $0x18,%esp
08706b76 +0x0786:  mov    0xc(%ebp),%eax
08706b79 +0x0789:  mov    (%eax),%eax
08706b7b +0x078b:  mov    -0xc(%eax),%edx
08706b7e +0x078e:  mov    %eax,0x4(%esp)
08706b82 +0x0792:  mov    0x8(%ebp),%eax
08706b85 +0x0795:  mov    %edx,0xc(%esp)
08706b89 +0x0799:  mov    0x10(%ebp),%edx
08706b8c +0x079c:  mov    %eax,(%esp)
08706b8f +0x079f:  mov    %edx,0x8(%esp)
08706b93 +0x07a3:  call   08706ad0 <+0x6e0>
08706b98 +0x07a8:  leave
08706b99 +0x07a9:  ret
08706b9a +0x07aa:  nop
08706b9b +0x07ab:  nop
08706b9c +0x07ac:  nop
08706b9d +0x07ad:  nop
08706b9e +0x07ae:  nop
08706b9f +0x07af:  nop
08706ba0 +0x07b0:  push   %ebp
08706ba1 +0x07b1:  mov    %esp,%ebp
08706ba3 +0x07b3:  push   %edi
08706ba4 +0x07b4:  push   %esi
08706ba5 +0x07b5:  push   %ebx
08706ba6 +0x07b6:  sub    $0x14,%esp
08706ba9 +0x07b9:  mov    0x8(%ebp),%ebx
08706bac +0x07bc:  mov    0x14(%ebp),%edx
08706baf +0x07bf:  mov    0xc(%ebp),%edi
08706bb2 +0x07c2:  mov    0x10(%ebp),%eax
08706bb5 +0x07c5:  mov    (%ebx),%ebx
08706bb7 +0x07c7:  test   %edx,%edx
08706bb9 +0x07c9:  mov    -0xc(%ebx),%esi
08706bbc +0x07cc:  je     08706c20 <+0x830>
08706bbe +0x07ce:  cmp    %esi,%edx
08706bc0 +0x07d0:  ja     08706c24 <+0x834>
08706bc2 +0x07d2:  sub    %edx,%esi
08706bc4 +0x07d4:  cmp    %eax,%esi
08706bc6 +0x07d6:  mov    %esi,-0x14(%ebp)
08706bc9 +0x07d9:  jb     08706c24 <+0x834>
08706bcb +0x07db:  movzbl (%edi),%ecx
08706bce +0x07de:  sub    $0x1,%edx
08706bd1 +0x07e1:  add    $0x1,%edi
08706bd4 +0x07e4:  mov    %edi,-0x1c(%ebp)
08706bd7 +0x07e7:  mov    %edx,-0x18(%ebp)
08706bda +0x07ea:  mov    %ebx,-0x20(%ebp)
08706bdd +0x07ed:  mov    %cl,-0xd(%ebp)
08706be0 +0x07f0:  jmp    08706bf2 <+0x802>
08706be2 +0x07f2:  lea    0x0(%esi),%esi
08706be8 +0x07f8:  lea    0x1(%eax),%edx
08706beb +0x07fb:  cmp    %edx,-0x14(%ebp)
08706bee +0x07fe:  jb     08706c24 <+0x834>
08706bf0 +0x0800:  mov    %edx,%eax
08706bf2 +0x0802:  mov    -0x20(%ebp),%edx
08706bf5 +0x0805:  movzbl -0xd(%ebp),%ebx
08706bf9 +0x0809:  cmp    (%edx,%eax,1),%bl
08706bfc +0x080c:  jne    08706be8 <+0x7f8>
08706bfe +0x080e:  mov    -0x18(%ebp),%ecx
08706c01 +0x0811:  lea    0x1(%eax),%edx
08706c04 +0x0814:  mov    -0x20(%ebp),%esi
08706c07 +0x0817:  mov    -0x1c(%ebp),%edi
08706c0a +0x081a:  add    %edx,%esi
08706c0c +0x081c:  cmp    %ecx,%ecx
08706c0e +0x081e:  repz cmpsb %es:(%edi),%ds:(%esi)
08706c10 +0x0820:  jne    08706beb <+0x7fb>
08706c12 +0x0822:  add    $0x14,%esp
08706c15 +0x0825:  pop    %ebx
08706c16 +0x0826:  pop    %esi
08706c17 +0x0827:  pop    %edi
08706c18 +0x0828:  pop    %ebp
08706c19 +0x0829:  ret
08706c1a +0x082a:  lea    0x0(%esi),%esi
08706c20 +0x0830:  cmp    %esi,%eax
08706c22 +0x0832:  jbe    08706c12 <+0x822>
08706c24 +0x0834:  add    $0x14,%esp
08706c27 +0x0837:  mov    $0xffffffff,%eax
08706c2c +0x083c:  pop    %ebx
08706c2d +0x083d:  pop    %esi
08706c2e +0x083e:  pop    %edi
08706c2f +0x083f:  pop    %ebp
08706c30 +0x0840:  ret
08706c31 +0x0841:  nop
08706c32 +0x0842:  nop
08706c33 +0x0843:  nop
08706c34 +0x0844:  nop
08706c35 +0x0845:  nop
08706c36 +0x0846:  nop
08706c37 +0x0847:  nop
08706c38 +0x0848:  nop
08706c39 +0x0849:  nop
08706c3a +0x084a:  nop
08706c3b +0x084b:  nop
08706c3c +0x084c:  nop
08706c3d +0x084d:  nop
08706c3e +0x084e:  nop
08706c3f +0x084f:  nop
08706c40 +0x0850:  push   %ebp
08706c41 +0x0851:  mov    %esp,%ebp
08706c43 +0x0853:  push   %ebx
08706c44 +0x0854:  sub    $0x14,%esp
08706c47 +0x0857:  mov    0xc(%ebp),%ebx
08706c4a +0x085a:  mov    %ebx,(%esp)
08706c4d +0x085d:  call   0807e3b0 <_init+0xca8>
08706c52 +0x0862:  mov    %ebx,0x4(%esp)
08706c56 +0x0866:  mov    %eax,0xc(%esp)
08706c5a +0x086a:  mov    0x10(%ebp),%eax
08706c5d +0x086d:  mov    %eax,0x8(%esp)
08706c61 +0x0871:  mov    0x8(%ebp),%eax
08706c64 +0x0874:  mov    %eax,(%esp)
08706c67 +0x0877:  call   08706ba0 <+0x7b0>
08706c6c +0x087c:  add    $0x14,%esp
08706c6f +0x087f:  pop    %ebx
08706c70 +0x0880:  pop    %ebp
08706c71 +0x0881:  ret
08706c72 +0x0882:  nop
08706c73 +0x0883:  nop
08706c74 +0x0884:  nop
08706c75 +0x0885:  nop
08706c76 +0x0886:  nop
08706c77 +0x0887:  nop
08706c78 +0x0888:  nop
08706c79 +0x0889:  nop
08706c7a +0x088a:  nop
08706c7b +0x088b:  nop
08706c7c +0x088c:  nop
08706c7d +0x088d:  nop
08706c7e +0x088e:  nop
08706c7f +0x088f:  nop
08706c80 +0x0890:  push   %ebp
08706c81 +0x0891:  mov    %esp,%ebp
08706c83 +0x0893:  sub    $0x18,%esp
08706c86 +0x0896:  mov    0xc(%ebp),%eax
08706c89 +0x0899:  mov    (%eax),%eax
08706c8b +0x089b:  mov    -0xc(%eax),%edx
08706c8e +0x089e:  mov    %eax,0x4(%esp)
08706c92 +0x08a2:  mov    0x8(%ebp),%eax
08706c95 +0x08a5:  mov    %edx,0xc(%esp)
08706c99 +0x08a9:  mov    0x10(%ebp),%edx
08706c9c +0x08ac:  mov    %eax,(%esp)
08706c9f +0x08af:  mov    %edx,0x8(%esp)
08706ca3 +0x08b3:  call   08706ba0 <+0x7b0>
08706ca8 +0x08b8:  leave
08706ca9 +0x08b9:  ret
08706caa +0x08ba:  nop
08706cab +0x08bb:  nop
08706cac +0x08bc:  nop
08706cad +0x08bd:  nop
08706cae +0x08be:  nop
08706caf +0x08bf:  nop
08706cb0 +0x08c0:  push   %ebp
08706cb1 +0x08c1:  mov    %esp,%ebp
08706cb3 +0x08c3:  push   %edi
08706cb4 +0x08c4:  push   %esi
08706cb5 +0x08c5:  push   %ebx
08706cb6 +0x08c6:  sub    $0x1c,%esp
08706cb9 +0x08c9:  mov    0x8(%ebp),%eax
08706cbc +0x08cc:  mov    0xc(%ebp),%edi
08706cbf +0x08cf:  mov    (%eax),%esi
08706cc1 +0x08d1:  mov    -0xc(%esi),%eax
08706cc4 +0x08d4:  test   %eax,%eax
08706cc6 +0x08d6:  je     08706cfa <+0x90a>
08706cc8 +0x08d8:  mov    0x10(%ebp),%ebx
08706ccb +0x08db:  sub    $0x1,%eax
08706cce +0x08de:  cmp    %eax,%ebx
08706cd0 +0x08e0:  jbe    08706cdb <+0x8eb>
08706cd2 +0x08e2:  mov    %eax,%ebx
08706cd4 +0x08e4:  jmp    08706cdb <+0x8eb>
08706cd6 +0x08e6:  xchg   %ax,%ax
08706cd8 +0x08e8:  sub    $0x1,%ebx
08706cdb +0x08eb:  mov    0x14(%ebp),%eax
08706cde +0x08ee:  mov    %eax,0x8(%esp)
08706ce2 +0x08f2:  movsbl (%esi,%ebx,1),%eax
08706ce6 +0x08f6:  mov    %edi,(%esp)
08706ce9 +0x08f9:  mov    %eax,0x4(%esp)
08706ced +0x08fd:  call   0807dec0 <_init+0x7b8>
08706cf2 +0x0902:  test   %eax,%eax
08706cf4 +0x0904:  je     08706cff <+0x90f>
08706cf6 +0x0906:  test   %ebx,%ebx
08706cf8 +0x0908:  jne    08706cd8 <+0x8e8>
08706cfa +0x090a:  mov    $0xffffffff,%ebx
08706cff +0x090f:  add    $0x1c,%esp
08706d02 +0x0912:  mov    %ebx,%eax
08706d04 +0x0914:  pop    %ebx
08706d05 +0x0915:  pop    %esi
08706d06 +0x0916:  pop    %edi
08706d07 +0x0917:  pop    %ebp
08706d08 +0x0918:  ret
08706d09 +0x0919:  nop
08706d0a +0x091a:  nop
08706d0b +0x091b:  nop
08706d0c +0x091c:  nop
08706d0d +0x091d:  nop
08706d0e +0x091e:  nop
08706d0f +0x091f:  nop
08706d10 +0x0920:  push   %ebp
08706d11 +0x0921:  mov    %esp,%ebp
08706d13 +0x0923:  push   %ebx
08706d14 +0x0924:  sub    $0x14,%esp
08706d17 +0x0927:  mov    0xc(%ebp),%ebx
08706d1a +0x092a:  mov    %ebx,(%esp)
08706d1d +0x092d:  call   0807e3b0 <_init+0xca8>
08706d22 +0x0932:  mov    %ebx,0x4(%esp)
08706d26 +0x0936:  mov    %eax,0xc(%esp)
08706d2a +0x093a:  mov    0x10(%ebp),%eax
08706d2d +0x093d:  mov    %eax,0x8(%esp)
08706d31 +0x0941:  mov    0x8(%ebp),%eax
08706d34 +0x0944:  mov    %eax,(%esp)
08706d37 +0x0947:  call   08706cb0 <+0x8c0>
08706d3c +0x094c:  add    $0x14,%esp
08706d3f +0x094f:  pop    %ebx
08706d40 +0x0950:  pop    %ebp
08706d41 +0x0951:  ret
08706d42 +0x0952:  nop
08706d43 +0x0953:  nop
08706d44 +0x0954:  nop
08706d45 +0x0955:  nop
08706d46 +0x0956:  nop
08706d47 +0x0957:  nop
08706d48 +0x0958:  nop
08706d49 +0x0959:  nop
08706d4a +0x095a:  nop
08706d4b +0x095b:  nop
08706d4c +0x095c:  nop
08706d4d +0x095d:  nop
08706d4e +0x095e:  nop
08706d4f +0x095f:  nop
08706d50 +0x0960:  push   %ebp
08706d51 +0x0961:  mov    %esp,%ebp
08706d53 +0x0963:  sub    $0x18,%esp
08706d56 +0x0966:  mov    0xc(%ebp),%eax
08706d59 +0x0969:  mov    (%eax),%eax
08706d5b +0x096b:  mov    -0xc(%eax),%edx
08706d5e +0x096e:  mov    %eax,0x4(%esp)
08706d62 +0x0972:  mov    0x8(%ebp),%eax
08706d65 +0x0975:  mov    %edx,0xc(%esp)
08706d69 +0x0979:  mov    0x10(%ebp),%edx
08706d6c +0x097c:  mov    %eax,(%esp)
08706d6f +0x097f:  mov    %edx,0x8(%esp)
08706d73 +0x0983:  call   08706cb0 <+0x8c0>
08706d78 +0x0988:  leave
08706d79 +0x0989:  ret
08706d7a +0x098a:  nop
08706d7b +0x098b:  nop
08706d7c +0x098c:  nop
08706d7d +0x098d:  nop
08706d7e +0x098e:  nop
08706d7f +0x098f:  nop
08706d80 +0x0990:  push   %ebp
08706d81 +0x0991:  mov    %esp,%ebp
08706d83 +0x0993:  push   %edi
08706d84 +0x0994:  push   %esi
08706d85 +0x0995:  push   %ebx
08706d86 +0x0996:  sub    $0x2c,%esp
08706d89 +0x0999:  mov    0x8(%ebp),%eax
08706d8c +0x099c:  mov    0x10(%ebp),%ebx
08706d8f +0x099f:  mov    0x14(%ebp),%edi
08706d92 +0x09a2:  mov    (%eax),%esi
08706d94 +0x09a4:  mov    -0xc(%esi),%eax
08706d97 +0x09a7:  cmp    %eax,%ebx
08706d99 +0x09a9:  mov    %eax,-0x1c(%ebp)
08706d9c +0x09ac:  jb     08706da8 <+0x9b8>
08706d9e +0x09ae:  jmp    08706dd0 <+0x9e0>
08706da0 +0x09b0:  add    $0x1,%ebx
08706da3 +0x09b3:  cmp    -0x1c(%ebp),%ebx
08706da6 +0x09b6:  jae    08706dd0 <+0x9e0>
08706da8 +0x09b8:  mov    %edi,0x8(%esp)
08706dac +0x09bc:  movsbl (%esi,%ebx,1),%eax
08706db0 +0x09c0:  mov    %eax,0x4(%esp)
08706db4 +0x09c4:  mov    0xc(%ebp),%eax
08706db7 +0x09c7:  mov    %eax,(%esp)
08706dba +0x09ca:  call   0807dec0 <_init+0x7b8>
08706dbf +0x09cf:  test   %eax,%eax
08706dc1 +0x09d1:  jne    08706da0 <+0x9b0>
08706dc3 +0x09d3:  add    $0x2c,%esp
08706dc6 +0x09d6:  mov    %ebx,%eax
08706dc8 +0x09d8:  pop    %ebx
08706dc9 +0x09d9:  pop    %esi
08706dca +0x09da:  pop    %edi
08706dcb +0x09db:  pop    %ebp
08706dcc +0x09dc:  ret
08706dcd +0x09dd:  lea    0x0(%esi),%esi
08706dd0 +0x09e0:  mov    $0xffffffff,%ebx
08706dd5 +0x09e5:  add    $0x2c,%esp
08706dd8 +0x09e8:  mov    %ebx,%eax
08706dda +0x09ea:  pop    %ebx
08706ddb +0x09eb:  pop    %esi
08706ddc +0x09ec:  pop    %edi
08706ddd +0x09ed:  pop    %ebp
08706dde +0x09ee:  ret
08706ddf +0x09ef:  nop
08706de0 +0x09f0:  push   %ebp
08706de1 +0x09f1:  mov    %esp,%ebp
08706de3 +0x09f3:  push   %ebx
08706de4 +0x09f4:  sub    $0x14,%esp
08706de7 +0x09f7:  mov    0xc(%ebp),%ebx
08706dea +0x09fa:  mov    %ebx,(%esp)
08706ded +0x09fd:  call   0807e3b0 <_init+0xca8>
08706df2 +0x0a02:  mov    %ebx,0x4(%esp)
08706df6 +0x0a06:  mov    %eax,0xc(%esp)
08706dfa +0x0a0a:  mov    0x10(%ebp),%eax
08706dfd +0x0a0d:  mov    %eax,0x8(%esp)
08706e01 +0x0a11:  mov    0x8(%ebp),%eax
08706e04 +0x0a14:  mov    %eax,(%esp)
08706e07 +0x0a17:  call   08706d80 <+0x990>
08706e0c +0x0a1c:  add    $0x14,%esp
08706e0f +0x0a1f:  pop    %ebx
08706e10 +0x0a20:  pop    %ebp
08706e11 +0x0a21:  ret
08706e12 +0x0a22:  nop
08706e13 +0x0a23:  nop
08706e14 +0x0a24:  nop
08706e15 +0x0a25:  nop
08706e16 +0x0a26:  nop
08706e17 +0x0a27:  nop
08706e18 +0x0a28:  nop
08706e19 +0x0a29:  nop
08706e1a +0x0a2a:  nop
08706e1b +0x0a2b:  nop
08706e1c +0x0a2c:  nop
08706e1d +0x0a2d:  nop
08706e1e +0x0a2e:  nop
08706e1f +0x0a2f:  nop
08706e20 +0x0a30:  push   %ebp
08706e21 +0x0a31:  mov    %esp,%ebp
08706e23 +0x0a33:  sub    $0x18,%esp
08706e26 +0x0a36:  mov    0xc(%ebp),%eax
08706e29 +0x0a39:  mov    (%eax),%eax
08706e2b +0x0a3b:  mov    -0xc(%eax),%edx
08706e2e +0x0a3e:  mov    %eax,0x4(%esp)
08706e32 +0x0a42:  mov    0x8(%ebp),%eax
08706e35 +0x0a45:  mov    %edx,0xc(%esp)
08706e39 +0x0a49:  mov    0x10(%ebp),%edx
08706e3c +0x0a4c:  mov    %eax,(%esp)
08706e3f +0x0a4f:  mov    %edx,0x8(%esp)
08706e43 +0x0a53:  call   08706d80 <+0x990>
08706e48 +0x0a58:  leave
08706e49 +0x0a59:  ret
08706e4a +0x0a5a:  nop
08706e4b +0x0a5b:  nop
08706e4c +0x0a5c:  nop
08706e4d +0x0a5d:  nop
08706e4e +0x0a5e:  nop
08706e4f +0x0a5f:  nop
08706e50 +0x0a60:  push   %ebp
08706e51 +0x0a61:  mov    %esp,%ebp
08706e53 +0x0a63:  push   %edi
08706e54 +0x0a64:  push   %esi
08706e55 +0x0a65:  push   %ebx
08706e56 +0x0a66:  sub    $0x1c,%esp
08706e59 +0x0a69:  mov    0x8(%ebp),%eax
08706e5c +0x0a6c:  mov    0x14(%ebp),%edi
08706e5f +0x0a6f:  mov    (%eax),%esi
08706e61 +0x0a71:  test   %edi,%edi
08706e63 +0x0a73:  mov    -0xc(%esi),%eax
08706e66 +0x0a76:  je     08706ea2 <+0xab2>
08706e68 +0x0a78:  test   %eax,%eax
08706e6a +0x0a7a:  je     08706ea2 <+0xab2>
08706e6c +0x0a7c:  mov    0x10(%ebp),%ebx
08706e6f +0x0a7f:  sub    $0x1,%eax
08706e72 +0x0a82:  cmp    %eax,%ebx
08706e74 +0x0a84:  jbe    08706e83 <+0xa93>
08706e76 +0x0a86:  mov    %eax,%ebx
08706e78 +0x0a88:  jmp    08706e83 <+0xa93>
08706e7a +0x0a8a:  lea    0x0(%esi),%esi
08706e80 +0x0a90:  sub    $0x1,%ebx
08706e83 +0x0a93:  mov    %edi,0x8(%esp)
08706e87 +0x0a97:  movsbl (%esi,%ebx,1),%eax
08706e8b +0x0a9b:  mov    %eax,0x4(%esp)
08706e8f +0x0a9f:  mov    0xc(%ebp),%eax
08706e92 +0x0aa2:  mov    %eax,(%esp)
08706e95 +0x0aa5:  call   0807dec0 <_init+0x7b8>
08706e9a +0x0aaa:  test   %eax,%eax
08706e9c +0x0aac:  jne    08706ea7 <+0xab7>
08706e9e +0x0aae:  test   %ebx,%ebx
08706ea0 +0x0ab0:  jne    08706e80 <+0xa90>
08706ea2 +0x0ab2:  mov    $0xffffffff,%ebx
08706ea7 +0x0ab7:  add    $0x1c,%esp
08706eaa +0x0aba:  mov    %ebx,%eax
08706eac +0x0abc:  pop    %ebx
08706ead +0x0abd:  pop    %esi
08706eae +0x0abe:  pop    %edi
08706eaf +0x0abf:  pop    %ebp
08706eb0 +0x0ac0:  ret
08706eb1 +0x0ac1:  nop
08706eb2 +0x0ac2:  nop
08706eb3 +0x0ac3:  nop
08706eb4 +0x0ac4:  nop
08706eb5 +0x0ac5:  nop
08706eb6 +0x0ac6:  nop
08706eb7 +0x0ac7:  nop
08706eb8 +0x0ac8:  nop
08706eb9 +0x0ac9:  nop
08706eba +0x0aca:  nop
08706ebb +0x0acb:  nop
08706ebc +0x0acc:  nop
08706ebd +0x0acd:  nop
08706ebe +0x0ace:  nop
08706ebf +0x0acf:  nop
08706ec0 +0x0ad0:  push   %ebp
08706ec1 +0x0ad1:  mov    %esp,%ebp
08706ec3 +0x0ad3:  push   %ebx
08706ec4 +0x0ad4:  sub    $0x14,%esp
08706ec7 +0x0ad7:  mov    0xc(%ebp),%ebx
08706eca +0x0ada:  mov    %ebx,(%esp)
08706ecd +0x0add:  call   0807e3b0 <_init+0xca8>
08706ed2 +0x0ae2:  mov    %ebx,0x4(%esp)
08706ed6 +0x0ae6:  mov    %eax,0xc(%esp)
08706eda +0x0aea:  mov    0x10(%ebp),%eax
08706edd +0x0aed:  mov    %eax,0x8(%esp)
08706ee1 +0x0af1:  mov    0x8(%ebp),%eax
08706ee4 +0x0af4:  mov    %eax,(%esp)
08706ee7 +0x0af7:  call   08706e50 <+0xa60>
08706eec +0x0afc:  add    $0x14,%esp
08706eef +0x0aff:  pop    %ebx
08706ef0 +0x0b00:  pop    %ebp
08706ef1 +0x0b01:  ret
08706ef2 +0x0b02:  nop
08706ef3 +0x0b03:  nop
08706ef4 +0x0b04:  nop
08706ef5 +0x0b05:  nop
08706ef6 +0x0b06:  nop
08706ef7 +0x0b07:  nop
08706ef8 +0x0b08:  nop
08706ef9 +0x0b09:  nop
08706efa +0x0b0a:  nop
08706efb +0x0b0b:  nop
08706efc +0x0b0c:  nop
08706efd +0x0b0d:  nop
08706efe +0x0b0e:  nop
08706eff +0x0b0f:  nop
08706f00 +0x0b10:  push   %ebp
08706f01 +0x0b11:  mov    %esp,%ebp
08706f03 +0x0b13:  sub    $0x18,%esp
08706f06 +0x0b16:  mov    0xc(%ebp),%eax
08706f09 +0x0b19:  mov    (%eax),%eax
08706f0b +0x0b1b:  mov    -0xc(%eax),%edx
08706f0e +0x0b1e:  mov    %eax,0x4(%esp)
08706f12 +0x0b22:  mov    0x8(%ebp),%eax
08706f15 +0x0b25:  mov    %edx,0xc(%esp)
08706f19 +0x0b29:  mov    0x10(%ebp),%edx
08706f1c +0x0b2c:  mov    %eax,(%esp)
08706f1f +0x0b2f:  mov    %edx,0x8(%esp)
08706f23 +0x0b33:  call   08706e50 <+0xa60>
08706f28 +0x0b38:  leave
08706f29 +0x0b39:  ret
08706f2a +0x0b3a:  nop
08706f2b +0x0b3b:  nop
08706f2c +0x0b3c:  nop
08706f2d +0x0b3d:  nop
08706f2e +0x0b3e:  nop
08706f2f +0x0b3f:  nop
08706f30 +0x0b40:  push   %ebp
08706f31 +0x0b41:  mov    %esp,%ebp
08706f33 +0x0b43:  push   %edi
08706f34 +0x0b44:  push   %esi
08706f35 +0x0b45:  push   %ebx
08706f36 +0x0b46:  sub    $0x2c,%esp
08706f39 +0x0b49:  mov    0x14(%ebp),%edi
08706f3c +0x0b4c:  mov    0x10(%ebp),%ebx
08706f3f +0x0b4f:  test   %edi,%edi
08706f41 +0x0b51:  je     08706f7d <+0xb8d>
08706f43 +0x0b53:  mov    0x8(%ebp),%eax
08706f46 +0x0b56:  mov    (%eax),%eax
08706f48 +0x0b58:  mov    -0xc(%eax),%esi
08706f4b +0x0b5b:  mov    %eax,-0x1c(%ebp)
08706f4e +0x0b5e:  cmp    %esi,%ebx
08706f50 +0x0b60:  jae    08706f7d <+0xb8d>
08706f52 +0x0b62:  lea    0x0(%esi),%esi
08706f58 +0x0b68:  mov    -0x1c(%ebp),%edx
08706f5b +0x0b6b:  mov    %edi,0x8(%esp)
08706f5f +0x0b6f:  movsbl (%edx,%ebx,1),%eax
08706f63 +0x0b73:  mov    %eax,0x4(%esp)
08706f67 +0x0b77:  mov    0xc(%ebp),%eax
08706f6a +0x0b7a:  mov    %eax,(%esp)
08706f6d +0x0b7d:  call   0807dec0 <_init+0x7b8>
08706f72 +0x0b82:  test   %eax,%eax
08706f74 +0x0b84:  jne    08706f82 <+0xb92>
08706f76 +0x0b86:  add    $0x1,%ebx
08706f79 +0x0b89:  cmp    %esi,%ebx
08706f7b +0x0b8b:  jb     08706f58 <+0xb68>
08706f7d +0x0b8d:  mov    $0xffffffff,%ebx
08706f82 +0x0b92:  add    $0x2c,%esp
08706f85 +0x0b95:  mov    %ebx,%eax
08706f87 +0x0b97:  pop    %ebx
08706f88 +0x0b98:  pop    %esi
08706f89 +0x0b99:  pop    %edi
08706f8a +0x0b9a:  pop    %ebp
08706f8b +0x0b9b:  ret
08706f8c +0x0b9c:  nop
08706f8d +0x0b9d:  nop
08706f8e +0x0b9e:  nop
08706f8f +0x0b9f:  nop
08706f90 +0x0ba0:  push   %ebp
08706f91 +0x0ba1:  mov    %esp,%ebp
08706f93 +0x0ba3:  push   %ebx
08706f94 +0x0ba4:  sub    $0x14,%esp
08706f97 +0x0ba7:  mov    0xc(%ebp),%ebx
08706f9a +0x0baa:  mov    %ebx,(%esp)
08706f9d +0x0bad:  call   0807e3b0 <_init+0xca8>
08706fa2 +0x0bb2:  mov    %ebx,0x4(%esp)
08706fa6 +0x0bb6:  mov    %eax,0xc(%esp)
08706faa +0x0bba:  mov    0x10(%ebp),%eax
08706fad +0x0bbd:  mov    %eax,0x8(%esp)
08706fb1 +0x0bc1:  mov    0x8(%ebp),%eax
08706fb4 +0x0bc4:  mov    %eax,(%esp)
08706fb7 +0x0bc7:  call   08706f30 <+0xb40>
08706fbc +0x0bcc:  add    $0x14,%esp
08706fbf +0x0bcf:  pop    %ebx
08706fc0 +0x0bd0:  pop    %ebp
08706fc1 +0x0bd1:  ret
08706fc2 +0x0bd2:  nop
08706fc3 +0x0bd3:  nop
08706fc4 +0x0bd4:  nop
08706fc5 +0x0bd5:  nop
08706fc6 +0x0bd6:  nop
08706fc7 +0x0bd7:  nop
08706fc8 +0x0bd8:  nop
08706fc9 +0x0bd9:  nop
08706fca +0x0bda:  nop
08706fcb +0x0bdb:  nop
08706fcc +0x0bdc:  nop
08706fcd +0x0bdd:  nop
08706fce +0x0bde:  nop
08706fcf +0x0bdf:  nop
08706fd0 +0x0be0:  push   %ebp
08706fd1 +0x0be1:  mov    %esp,%ebp
08706fd3 +0x0be3:  sub    $0x18,%esp
08706fd6 +0x0be6:  mov    0xc(%ebp),%eax
08706fd9 +0x0be9:  mov    (%eax),%eax
08706fdb +0x0beb:  mov    -0xc(%eax),%edx
08706fde +0x0bee:  mov    %eax,0x4(%esp)
08706fe2 +0x0bf2:  mov    0x8(%ebp),%eax
08706fe5 +0x0bf5:  mov    %edx,0xc(%esp)
08706fe9 +0x0bf9:  mov    0x10(%ebp),%edx
08706fec +0x0bfc:  mov    %eax,(%esp)
08706fef +0x0bff:  mov    %edx,0x8(%esp)
08706ff3 +0x0c03:  call   08706f30 <+0xb40>
08706ff8 +0x0c08:  leave
08706ff9 +0x0c09:  ret
08706ffa +0x0c0a:  nop
08706ffb +0x0c0b:  nop
08706ffc +0x0c0c:  nop
08706ffd +0x0c0d:  nop
08706ffe +0x0c0e:  nop
08706fff +0x0c0f:  nop
08707000 +0x0c10:  push   %ebp
08707001 +0x0c11:  mov    %esp,%ebp
08707003 +0x0c13:  push   %ebx
08707004 +0x0c14:  sub    $0x14,%esp
08707007 +0x0c17:  mov    0x8(%ebp),%edx
0870700a +0x0c1a:  mov    0x10(%ebp),%eax
0870700d +0x0c1d:  movzbl 0xc(%ebp),%ecx
08707011 +0x0c21:  mov    (%edx),%ebx
08707013 +0x0c23:  mov    -0xc(%ebx),%edx
08707016 +0x0c26:  cmp    %edx,%eax
08707018 +0x0c28:  jae    08707040 <+0xc50>
0870701a +0x0c2a:  sub    %eax,%edx
0870701c +0x0c2c:  movsbl %cl,%ecx
0870701f +0x0c2f:  lea    (%ebx,%eax,1),%eax
08707022 +0x0c32:  mov    %edx,0x8(%esp)
08707026 +0x0c36:  mov    %ecx,0x4(%esp)
0870702a +0x0c3a:  mov    %eax,(%esp)
0870702d +0x0c3d:  call   0807dec0 <_init+0x7b8>
08707032 +0x0c42:  test   %eax,%eax
08707034 +0x0c44:  je     08707040 <+0xc50>
08707036 +0x0c46:  sub    %ebx,%eax
08707038 +0x0c48:  add    $0x14,%esp
0870703b +0x0c4b:  pop    %ebx
0870703c +0x0c4c:  pop    %ebp
0870703d +0x0c4d:  ret
0870703e +0x0c4e:  xchg   %ax,%ax
08707040 +0x0c50:  add    $0x14,%esp
08707043 +0x0c53:  mov    $0xffffffff,%eax
08707048 +0x0c58:  pop    %ebx
08707049 +0x0c59:  pop    %ebp
0870704a +0x0c5a:  ret
0870704b +0x0c5b:  nop
0870704c +0x0c5c:  nop
0870704d +0x0c5d:  nop
0870704e +0x0c5e:  nop
0870704f +0x0c5f:  nop
08707050 +0x0c60:  push   %ebp
08707051 +0x0c61:  mov    %esp,%ebp
08707053 +0x0c63:  sub    $0x8,%esp
08707056 +0x0c66:  movsbl 0xc(%ebp),%eax
0870705a +0x0c6a:  mov    %eax,0xc(%ebp)
0870705d +0x0c6d:  leave
0870705e +0x0c6e:  jmp    08707000 <+0xc10>
08707063 +0x0c73:  nop
08707064 +0x0c74:  nop
08707065 +0x0c75:  nop
08707066 +0x0c76:  nop
08707067 +0x0c77:  nop
08707068 +0x0c78:  nop
08707069 +0x0c79:  nop
0870706a +0x0c7a:  nop
0870706b +0x0c7b:  nop
0870706c +0x0c7c:  nop
0870706d +0x0c7d:  nop
0870706e +0x0c7e:  nop
0870706f +0x0c7f:  nop
08707070 +0x0c80:  push   %ebp
08707071 +0x0c81:  mov    %esp,%ebp
08707073 +0x0c83:  sub    $0x18,%esp
08707076 +0x0c86:  mov    0x8(%ebp),%edx
08707079 +0x0c89:  mov    0xc(%ebp),%eax
0870707c +0x0c8c:  mov    (%edx),%edx
0870707e +0x0c8e:  cmp    -0xc(%edx),%eax
08707081 +0x0c91:  jae    08707088 <+0xc98>
08707083 +0x0c93:  lea    (%edx,%eax,1),%eax
08707086 +0x0c96:  leave
08707087 +0x0c97:  ret
08707088 +0x0c98:  movl   $"basic_string::at",(%esp)
0870708f +0x0c9f:  call   086d9b70 <_ZSt20__throw_out_of_rangePKc>  ; std::__throw_out_of_range(char const*)
08707094 +0x0ca4:  nop
08707095 +0x0ca5:  nop
08707096 +0x0ca6:  nop
08707097 +0x0ca7:  nop
08707098 +0x0ca8:  nop
08707099 +0x0ca9:  nop
0870709a +0x0caa:  nop
0870709b +0x0cab:  nop
0870709c +0x0cac:  nop
0870709d +0x0cad:  nop
0870709e +0x0cae:  nop
0870709f +0x0caf:  nop
087070a0 +0x0cb0:  push   %ebp
087070a1 +0x0cb1:  mov    %esp,%ebp
087070a3 +0x0cb3:  sub    $0x18,%esp
087070a6 +0x0cb6:  mov    0x8(%ebp),%edx
087070a9 +0x0cb9:  mov    0xc(%ebp),%eax
087070ac +0x0cbc:  mov    (%edx),%edx
087070ae +0x0cbe:  cmp    -0xc(%edx),%eax
087070b1 +0x0cc1:  ja     087070b5 <+0xcc5>
087070b3 +0x0cc3:  leave
087070b4 +0x0cc4:  ret
087070b5 +0x0cc5:  mov    0x10(%ebp),%eax
087070b8 +0x0cc8:  mov    %eax,(%esp)
087070bb +0x0ccb:  call   086d9b70 <_ZSt20__throw_out_of_rangePKc>  ; std::__throw_out_of_range(char const*)
087070c0 +0x0cd0:  push   %ebp
087070c1 +0x0cd1:  mov    %esp,%ebp
087070c3 +0x0cd3:  push   %ebx
087070c4 +0x0cd4:  sub    $0x4,%esp
087070c7 +0x0cd7:  mov    0xc(%ebp),%eax
087070ca +0x0cda:  mov    0x8(%ebp),%ecx
087070cd +0x0cdd:  mov    0x10(%ebp),%edx
087070d0 +0x0ce0:  cmp    $0x1,%eax
087070d3 +0x0ce3:  je     087070f0 <+0xd00>
087070d5 +0x0ce5:  movsbl %dl,%ebx
087070d8 +0x0ce8:  mov    %ebx,0xc(%ebp)
087070db +0x0ceb:  mov    %eax,0x10(%ebp)
087070de +0x0cee:  mov    %ecx,0x8(%ebp)
087070e1 +0x0cf1:  add    $0x4,%esp
087070e4 +0x0cf4:  pop    %ebx
087070e5 +0x0cf5:  pop    %ebp
087070e6 +0x0cf6:  jmp    0807dcc0 <_init+0x5b8>
087070eb +0x0cfb:  nop
087070ec +0x0cfc:  lea    0x0(%esi,%eiz,1),%esi
087070f0 +0x0d00:  mov    %dl,(%ecx)
087070f2 +0x0d02:  add    $0x4,%esp
087070f5 +0x0d05:  pop    %ebx
087070f6 +0x0d06:  pop    %ebp
087070f7 +0x0d07:  ret
087070f8 +0x0d08:  nop
087070f9 +0x0d09:  nop
087070fa +0x0d0a:  nop
087070fb +0x0d0b:  nop
087070fc +0x0d0c:  nop
087070fd +0x0d0d:  nop
087070fe +0x0d0e:  nop
087070ff +0x0d0f:  nop
08707100 +0x0d10:  push   %ebp
08707101 +0x0d11:  mov    %esp,%ebp
08707103 +0x0d13:  sub    $0x8,%esp
08707106 +0x0d16:  mov    0x10(%ebp),%eax
08707109 +0x0d19:  mov    0x8(%ebp),%edx
0870710c +0x0d1c:  mov    0xc(%ebp),%ecx
0870710f +0x0d1f:  cmp    $0x1,%eax
08707112 +0x0d22:  je     08707128 <+0xd38>
08707114 +0x0d24:  mov    %eax,0x10(%ebp)
08707117 +0x0d27:  mov    %ecx,0xc(%ebp)
0870711a +0x0d2a:  mov    %edx,0x8(%ebp)
0870711d +0x0d2d:  leave
0870711e +0x0d2e:  jmp    0807d880 <_init+0x178>
08707123 +0x0d33:  nop
08707124 +0x0d34:  lea    0x0(%esi,%eiz,1),%esi
08707128 +0x0d38:  movzbl (%ecx),%eax
0870712b +0x0d3b:  mov    %al,(%edx)
0870712d +0x0d3d:  leave
0870712e +0x0d3e:  ret
0870712f +0x0d3f:  nop
08707130 +0x0d40:  push   %ebp
08707131 +0x0d41:  mov    %esp,%ebp
08707133 +0x0d43:  sub    $0x8,%esp
08707136 +0x0d46:  mov    0x10(%ebp),%eax
08707139 +0x0d49:  mov    0x8(%ebp),%edx
0870713c +0x0d4c:  mov    0xc(%ebp),%ecx
0870713f +0x0d4f:  cmp    $0x1,%eax
08707142 +0x0d52:  je     08707158 <+0xd68>
08707144 +0x0d54:  mov    %eax,0x10(%ebp)
08707147 +0x0d57:  mov    %ecx,0xc(%ebp)
0870714a +0x0d5a:  mov    %edx,0x8(%ebp)
0870714d +0x0d5d:  leave
0870714e +0x0d5e:  jmp    0807d8a0 <_init+0x198>
08707153 +0x0d63:  nop
08707154 +0x0d64:  lea    0x0(%esi,%eiz,1),%esi
08707158 +0x0d68:  movzbl (%ecx),%eax
0870715b +0x0d6b:  mov    %al,(%edx)
0870715d +0x0d6d:  leave
0870715e +0x0d6e:  ret
0870715f +0x0d6f:  nop
08707160 +0x0d70:  push   %ebp
08707161 +0x0d71:  mov    %esp,%ebp
08707163 +0x0d73:  sub    $0x28,%esp
08707166 +0x0d76:  mov    0x8(%ebp),%edx
08707169 +0x0d79:  mov    %ebx,-0xc(%ebp)
0870716c +0x0d7c:  mov    0xc(%ebp),%eax
0870716f +0x0d7f:  mov    %esi,-0x8(%ebp)
08707172 +0x0d82:  mov    0x18(%ebp),%ebx
08707175 +0x0d85:  mov    %edi,-0x4(%ebp)
08707178 +0x0d88:  mov    (%edx),%esi
0870717a +0x0d8a:  mov    -0xc(%esi),%edx
0870717d +0x0d8d:  cmp    %edx,%eax
0870717f +0x0d8f:  ja     087071d4 <+0xde4>
08707181 +0x0d91:  mov    %edx,%ecx
08707183 +0x0d93:  mov    0x10(%ebp),%edx
08707186 +0x0d96:  sub    %eax,%ecx
08707188 +0x0d98:  cmp    %ecx,%edx
0870718a +0x0d9a:  ja     087071c8 <+0xdd8>
0870718c +0x0d9c:  add    %eax,%esi
0870718e +0x0d9e:  cmp    %edx,%ebx
08707190 +0x0da0:  mov    %ebx,%ecx
08707192 +0x0da2:  ja     087071c0 <+0xdd0>
08707194 +0x0da4:  mov    0x14(%ebp),%edi
08707197 +0x0da7:  cmp    %ecx,%ecx
08707199 +0x0da9:  repz cmpsb %es:(%edi),%ds:(%esi)
0870719b +0x0dab:  seta   %al
0870719e +0x0dae:  setb   %cl
087071a1 +0x0db1:  sub    %cl,%al
087071a3 +0x0db3:  movsbl %al,%eax
087071a6 +0x0db6:  test   %eax,%eax
087071a8 +0x0db8:  jne    087071ae <+0xdbe>
087071aa +0x0dba:  mov    %edx,%eax
087071ac +0x0dbc:  sub    %ebx,%eax
087071ae +0x0dbe:  mov    -0xc(%ebp),%ebx
087071b1 +0x0dc1:  mov    -0x8(%ebp),%esi
087071b4 +0x0dc4:  mov    -0x4(%ebp),%edi
087071b7 +0x0dc7:  mov    %ebp,%esp
087071b9 +0x0dc9:  pop    %ebp
087071ba +0x0dca:  ret
087071bb +0x0dcb:  nop
087071bc +0x0dcc:  lea    0x0(%esi,%eiz,1),%esi
087071c0 +0x0dd0:  mov    %edx,%ecx
087071c2 +0x0dd2:  jmp    08707194 <+0xda4>
087071c4 +0x0dd4:  lea    0x0(%esi,%eiz,1),%esi
087071c8 +0x0dd8:  mov    %ecx,%edx
087071ca +0x0dda:  add    %eax,%esi
087071cc +0x0ddc:  cmp    %edx,%ebx
087071ce +0x0dde:  mov    %ebx,%ecx
087071d0 +0x0de0:  jbe    08707194 <+0xda4>
087071d2 +0x0de2:  jmp    087071c0 <+0xdd0>
087071d4 +0x0de4:  movl   $"basic_string::compare",(%esp)
087071db +0x0deb:  call   086d9b70 <_ZSt20__throw_out_of_rangePKc>  ; std::__throw_out_of_range(char const*)
087071e0 +0x0df0:  push   %ebp
087071e1 +0x0df1:  mov    %esp,%ebp
087071e3 +0x0df3:  sub    $0x28,%esp
087071e6 +0x0df6:  mov    0x8(%ebp),%eax
087071e9 +0x0df9:  mov    %esi,-0x8(%ebp)
087071ec +0x0dfc:  mov    0xc(%ebp),%esi
087071ef +0x0dff:  mov    %ebx,-0xc(%ebp)
087071f2 +0x0e02:  mov    %edi,-0x4(%ebp)
087071f5 +0x0e05:  mov    (%eax),%edi
087071f7 +0x0e07:  mov    -0xc(%edi),%eax
087071fa +0x0e0a:  cmp    %eax,%esi
087071fc +0x0e0c:  ja     08707254 <+0xe64>
087071fe +0x0e0e:  mov    0x10(%ebp),%ebx
08707201 +0x0e11:  sub    %esi,%eax
08707203 +0x0e13:  cmp    %eax,%ebx
08707205 +0x0e15:  ja     08707250 <+0xe60>
08707207 +0x0e17:  mov    0x14(%ebp),%eax
0870720a +0x0e1a:  lea    (%edi,%esi,1),%esi
0870720d +0x0e1d:  mov    %eax,(%esp)
08707210 +0x0e20:  call   0807e3b0 <_init+0xca8>
08707215 +0x0e25:  cmp    %ebx,%eax
08707217 +0x0e27:  mov    %eax,%ecx
08707219 +0x0e29:  ja     08707248 <+0xe58>
0870721b +0x0e2b:  mov    0x14(%ebp),%edi
0870721e +0x0e2e:  cmp    %ecx,%ecx
08707220 +0x0e30:  repz cmpsb %es:(%edi),%ds:(%esi)
08707222 +0x0e32:  seta   %dl
08707225 +0x0e35:  setb   %cl
08707228 +0x0e38:  sub    %cl,%dl
0870722a +0x0e3a:  movsbl %dl,%edx
0870722d +0x0e3d:  test   %edx,%edx
0870722f +0x0e3f:  jne    08707235 <+0xe45>
08707231 +0x0e41:  mov    %ebx,%edx
08707233 +0x0e43:  sub    %eax,%edx
08707235 +0x0e45:  mov    -0xc(%ebp),%ebx
08707238 +0x0e48:  mov    %edx,%eax
0870723a +0x0e4a:  mov    -0x8(%ebp),%esi
0870723d +0x0e4d:  mov    -0x4(%ebp),%edi
08707240 +0x0e50:  mov    %ebp,%esp
08707242 +0x0e52:  pop    %ebp
08707243 +0x0e53:  ret
08707244 +0x0e54:  lea    0x0(%esi,%eiz,1),%esi
08707248 +0x0e58:  mov    %ebx,%ecx
0870724a +0x0e5a:  jmp    0870721b <+0xe2b>
0870724c +0x0e5c:  lea    0x0(%esi,%eiz,1),%esi
08707250 +0x0e60:  mov    %eax,%ebx
08707252 +0x0e62:  jmp    08707207 <+0xe17>
08707254 +0x0e64:  movl   $"basic_string::compare",(%esp)
0870725b +0x0e6b:  call   086d9b70 <_ZSt20__throw_out_of_rangePKc>  ; std::__throw_out_of_range(char const*)
08707260 +0x0e70:  push   %ebp
08707261 +0x0e71:  mov    %esp,%ebp
08707263 +0x0e73:  sub    $0x48,%esp
08707266 +0x0e76:  mov    0x8(%ebp),%edx
08707269 +0x0e79:  mov    %ebx,-0xc(%ebp)
0870726c +0x0e7c:  mov    0xc(%ebp),%eax
0870726f +0x0e7f:  mov    %esi,-0x8(%ebp)
08707272 +0x0e82:  mov    0x18(%ebp),%ecx
08707275 +0x0e85:  mov    %edi,-0x4(%ebp)
08707278 +0x0e88:  mov    (%edx),%esi
0870727a +0x0e8a:  mov    -0xc(%esi),%ebx
0870727d +0x0e8d:  cmp    %ebx,%eax
0870727f +0x0e8f:  ja     08707308 <+0xf18>
08707285 +0x0e95:  mov    0x14(%ebp),%edx
08707288 +0x0e98:  mov    (%edx),%edi
0870728a +0x0e9a:  mov    -0xc(%edi),%edx
0870728d +0x0e9d:  cmp    %edx,%ecx
0870728f +0x0e9f:  ja     08707308 <+0xf18>
08707291 +0x0ea1:  sub    %eax,%ebx
08707293 +0x0ea3:  mov    %ebx,-0x2c(%ebp)
08707296 +0x0ea6:  mov    0x10(%ebp),%ebx
08707299 +0x0ea9:  mov    %ebx,-0x1c(%ebp)
0870729c +0x0eac:  mov    -0x2c(%ebp),%ebx
0870729f +0x0eaf:  cmp    %ebx,-0x1c(%ebp)
087072a2 +0x0eb2:  ja     087072f8 <+0xf08>
087072a4 +0x0eb4:  mov    %edx,%ebx
087072a6 +0x0eb6:  mov    0x1c(%ebp),%edx
087072a9 +0x0eb9:  sub    %ecx,%ebx
087072ab +0x0ebb:  cmp    %ebx,%edx
087072ad +0x0ebd:  ja     087072e8 <+0xef8>
087072af +0x0ebf:  add    %ecx,%edi
087072b1 +0x0ec1:  add    %eax,%esi
087072b3 +0x0ec3:  cmp    -0x1c(%ebp),%edx
087072b6 +0x0ec6:  mov    %edx,%ecx
087072b8 +0x0ec8:  ja     087072e0 <+0xef0>
087072ba +0x0eca:  cmp    %ecx,%ecx
087072bc +0x0ecc:  repz cmpsb %es:(%edi),%ds:(%esi)
087072be +0x0ece:  seta   %al
087072c1 +0x0ed1:  setb   %cl
087072c4 +0x0ed4:  sub    %cl,%al
087072c6 +0x0ed6:  movsbl %al,%eax
087072c9 +0x0ed9:  test   %eax,%eax
087072cb +0x0edb:  jne    087072d2 <+0xee2>
087072cd +0x0edd:  mov    -0x1c(%ebp),%eax
087072d0 +0x0ee0:  sub    %edx,%eax
087072d2 +0x0ee2:  mov    -0xc(%ebp),%ebx
087072d5 +0x0ee5:  mov    -0x8(%ebp),%esi
087072d8 +0x0ee8:  mov    -0x4(%ebp),%edi
087072db +0x0eeb:  mov    %ebp,%esp
087072dd +0x0eed:  pop    %ebp
087072de +0x0eee:  ret
087072df +0x0eef:  nop
087072e0 +0x0ef0:  mov    -0x1c(%ebp),%ecx
087072e3 +0x0ef3:  jmp    087072ba <+0xeca>
087072e5 +0x0ef5:  lea    0x0(%esi),%esi
087072e8 +0x0ef8:  mov    %ebx,%edx
087072ea +0x0efa:  add    %ecx,%edi
087072ec +0x0efc:  add    %eax,%esi
087072ee +0x0efe:  mov    %edx,%ecx
087072f0 +0x0f00:  cmp    -0x1c(%ebp),%edx
087072f3 +0x0f03:  jbe    087072ba <+0xeca>
087072f5 +0x0f05:  jmp    087072e0 <+0xef0>
087072f7 +0x0f07:  nop
087072f8 +0x0f08:  mov    %ebx,-0x1c(%ebp)
087072fb +0x0f0b:  mov    %edx,%ebx
087072fd +0x0f0d:  mov    0x1c(%ebp),%edx
08707300 +0x0f10:  sub    %ecx,%ebx
08707302 +0x0f12:  cmp    %ebx,%edx
08707304 +0x0f14:  jbe    087072af <+0xebf>
08707306 +0x0f16:  jmp    087072e8 <+0xef8>
08707308 +0x0f18:  movl   $"basic_string::compare",(%esp)
0870730f +0x0f1f:  call   086d9b70 <_ZSt20__throw_out_of_rangePKc>  ; std::__throw_out_of_range(char const*)
08707314 +0x0f24:  nop
08707315 +0x0f25:  nop
08707316 +0x0f26:  nop
08707317 +0x0f27:  nop
08707318 +0x0f28:  nop
08707319 +0x0f29:  nop
0870731a +0x0f2a:  nop
0870731b +0x0f2b:  nop
0870731c +0x0f2c:  nop
0870731d +0x0f2d:  nop
0870731e +0x0f2e:  nop
0870731f +0x0f2f:  nop
08707320 +0x0f30:  push   %ebp
08707321 +0x0f31:  mov    %esp,%ebp
08707323 +0x0f33:  sub    $0x28,%esp
08707326 +0x0f36:  mov    0x8(%ebp),%edx
08707329 +0x0f39:  mov    %ebx,-0xc(%ebp)
0870732c +0x0f3c:  mov    0xc(%ebp),%eax
0870732f +0x0f3f:  mov    %esi,-0x8(%ebp)
08707332 +0x0f42:  mov    %edi,-0x4(%ebp)
08707335 +0x0f45:  mov    (%edx),%esi
08707337 +0x0f47:  mov    -0xc(%esi),%edx
0870733a +0x0f4a:  cmp    %edx,%eax
0870733c +0x0f4c:  ja     0870739c <+0xfac>
0870733e +0x0f4e:  mov    %edx,%ecx
08707340 +0x0f50:  mov    0x10(%ebp),%edx
08707343 +0x0f53:  sub    %eax,%ecx
08707345 +0x0f55:  cmp    %ecx,%edx
08707347 +0x0f57:  ja     08707388 <+0xf98>
08707349 +0x0f59:  mov    0x14(%ebp),%ecx
0870734c +0x0f5c:  add    %eax,%esi
0870734e +0x0f5e:  mov    (%ecx),%edi
08707350 +0x0f60:  mov    %edx,%ecx
08707352 +0x0f62:  mov    -0xc(%edi),%ebx
08707355 +0x0f65:  cmp    %ebx,%edx
08707357 +0x0f67:  ja     08707380 <+0xf90>
08707359 +0x0f69:  cmp    %ecx,%ecx
0870735b +0x0f6b:  repz cmpsb %es:(%edi),%ds:(%esi)
0870735d +0x0f6d:  seta   %al
08707360 +0x0f70:  setb   %cl
08707363 +0x0f73:  sub    %cl,%al
08707365 +0x0f75:  movsbl %al,%eax
08707368 +0x0f78:  test   %eax,%eax
0870736a +0x0f7a:  jne    08707370 <+0xf80>
0870736c +0x0f7c:  mov    %edx,%eax
0870736e +0x0f7e:  sub    %ebx,%eax
08707370 +0x0f80:  mov    -0xc(%ebp),%ebx
08707373 +0x0f83:  mov    -0x8(%ebp),%esi
08707376 +0x0f86:  mov    -0x4(%ebp),%edi
08707379 +0x0f89:  mov    %ebp,%esp
0870737b +0x0f8b:  pop    %ebp
0870737c +0x0f8c:  ret
0870737d +0x0f8d:  lea    0x0(%esi),%esi
08707380 +0x0f90:  mov    %ebx,%ecx
08707382 +0x0f92:  jmp    08707359 <+0xf69>
08707384 +0x0f94:  lea    0x0(%esi,%eiz,1),%esi
08707388 +0x0f98:  mov    %ecx,%edx
0870738a +0x0f9a:  mov    0x14(%ebp),%ecx
0870738d +0x0f9d:  add    %eax,%esi
0870738f +0x0f9f:  mov    (%ecx),%edi
08707391 +0x0fa1:  mov    %edx,%ecx
08707393 +0x0fa3:  mov    -0xc(%edi),%ebx
08707396 +0x0fa6:  cmp    %ebx,%edx
08707398 +0x0fa8:  jbe    08707359 <+0xf69>
0870739a +0x0faa:  jmp    08707380 <+0xf90>
0870739c +0x0fac:  movl   $"basic_string::compare",(%esp)
087073a3 +0x0fb3:  call   086d9b70 <_ZSt20__throw_out_of_rangePKc>  ; std::__throw_out_of_range(char const*)
087073a8 +0x0fb8:  nop
087073a9 +0x0fb9:  nop
087073aa +0x0fba:  nop
087073ab +0x0fbb:  nop
087073ac +0x0fbc:  nop
087073ad +0x0fbd:  nop
087073ae +0x0fbe:  nop
087073af +0x0fbf:  nop
087073b0 +0x0fc0:  push   %ebp
087073b1 +0x0fc1:  mov    %esp,%ebp
087073b3 +0x0fc3:  sub    $0x8,%esp
087073b6 +0x0fc6:  mov    0xc(%ebp),%edx
087073b9 +0x0fc9:  mov    0x10(%ebp),%eax
087073bc +0x0fcc:  mov    0x8(%ebp),%ecx
087073bf +0x0fcf:  sub    %edx,%eax
087073c1 +0x0fd1:  cmp    $0x1,%eax
087073c4 +0x0fd4:  je     087073d8 <+0xfe8>
087073c6 +0x0fd6:  mov    %eax,0x10(%ebp)
087073c9 +0x0fd9:  mov    %edx,0xc(%ebp)
087073cc +0x0fdc:  mov    %ecx,0x8(%ebp)
087073cf +0x0fdf:  leave
087073d0 +0x0fe0:  jmp    0807d8a0 <_init+0x198>
087073d5 +0x0fe5:  lea    0x0(%esi),%esi
087073d8 +0x0fe8:  movzbl (%edx),%eax
087073db +0x0feb:  mov    %al,(%ecx)
087073dd +0x0fed:  leave
087073de +0x0fee:  ret
087073df +0x0fef:  nop
087073e0 +0x0ff0:  push   %ebp
087073e1 +0x0ff1:  mov    %esp,%ebp
087073e3 +0x0ff3:  sub    $0x8,%esp
087073e6 +0x0ff6:  mov    0xc(%ebp),%edx
087073e9 +0x0ff9:  mov    0x10(%ebp),%eax
087073ec +0x0ffc:  mov    0x8(%ebp),%ecx
087073ef +0x0fff:  sub    %edx,%eax
087073f1 +0x1001:  cmp    $0x1,%eax
087073f4 +0x1004:  je     08707408 <+0x1018>
087073f6 +0x1006:  mov    %eax,0x10(%ebp)
087073f9 +0x1009:  mov    %edx,0xc(%ebp)
087073fc +0x100c:  mov    %ecx,0x8(%ebp)
087073ff +0x100f:  leave
08707400 +0x1010:  jmp    0807d8a0 <_init+0x198>
08707405 +0x1015:  lea    0x0(%esi),%esi
08707408 +0x1018:  movzbl (%edx),%eax
0870740b +0x101b:  mov    %al,(%ecx)
0870740d +0x101d:  leave
0870740e +0x101e:  ret
0870740f +0x101f:  nop
08707410 +0x1020:  push   %ebp
08707411 +0x1021:  mov    %esp,%ebp
08707413 +0x1023:  sub    $0x8,%esp
08707416 +0x1026:  mov    0xc(%ebp),%edx
08707419 +0x1029:  mov    0x10(%ebp),%eax
0870741c +0x102c:  mov    0x8(%ebp),%ecx
0870741f +0x102f:  sub    %edx,%eax
08707421 +0x1031:  cmp    $0x1,%eax
08707424 +0x1034:  je     08707438 <+0x1048>
08707426 +0x1036:  mov    %eax,0x10(%ebp)
08707429 +0x1039:  mov    %edx,0xc(%ebp)
0870742c +0x103c:  mov    %ecx,0x8(%ebp)
0870742f +0x103f:  leave
08707430 +0x1040:  jmp    0807d8a0 <_init+0x198>
08707435 +0x1045:  lea    0x0(%esi),%esi
08707438 +0x1048:  movzbl (%edx),%eax
0870743b +0x104b:  mov    %al,(%ecx)
0870743d +0x104d:  leave
0870743e +0x104e:  ret
0870743f +0x104f:  nop
08707440 +0x1050:  push   %ebp
08707441 +0x1051:  mov    %esp,%ebp
08707443 +0x1053:  sub    $0x8,%esp
08707446 +0x1056:  mov    0xc(%ebp),%edx
08707449 +0x1059:  mov    0x10(%ebp),%eax
0870744c +0x105c:  mov    0x8(%ebp),%ecx
0870744f +0x105f:  sub    %edx,%eax
08707451 +0x1061:  cmp    $0x1,%eax
08707454 +0x1064:  je     08707468 <+0x1078>
08707456 +0x1066:  mov    %eax,0x10(%ebp)
08707459 +0x1069:  mov    %edx,0xc(%ebp)
0870745c +0x106c:  mov    %ecx,0x8(%ebp)
0870745f +0x106f:  leave
08707460 +0x1070:  jmp    0807d8a0 <_init+0x198>
08707465 +0x1075:  lea    0x0(%esi),%esi
08707468 +0x1078:  movzbl (%edx),%eax
0870746b +0x107b:  mov    %al,(%ecx)
0870746d +0x107d:  leave
0870746e +0x107e:  ret
0870746f +0x107f:  nop
08707470 +0x1080:  push   %ebp
08707471 +0x1081:  mov    %esp,%ebp
08707473 +0x1083:  sub    $0x18,%esp
08707476 +0x1086:  mov    0x8(%ebp),%ecx
08707479 +0x1089:  mov    %esi,-0x4(%ebp)
0870747c +0x108c:  mov    0x14(%ebp),%eax
0870747f +0x108f:  mov    %ebx,-0x8(%ebp)
08707482 +0x1092:  mov    0xc(%ebp),%esi
08707485 +0x1095:  mov    0x10(%ebp),%edx
08707488 +0x1098:  mov    (%ecx),%ecx
0870748a +0x109a:  mov    -0xc(%ecx),%ebx
0870748d +0x109d:  cmp    %ebx,%eax
0870748f +0x109f:  ja     087074e9 <+0x10f9>
08707491 +0x10a1:  sub    %eax,%ebx
08707493 +0x10a3:  cmp    %edx,%ebx
08707495 +0x10a5:  ja     087074a8 <+0x10b8>
08707497 +0x10a7:  test   %ebx,%ebx
08707499 +0x10a9:  jne    087074ae <+0x10be>
0870749b +0x10ab:  mov    %ebx,%eax
0870749d +0x10ad:  mov    -0x4(%ebp),%esi
087074a0 +0x10b0:  mov    -0x8(%ebp),%ebx
087074a3 +0x10b3:  mov    %ebp,%esp
087074a5 +0x10b5:  pop    %ebp
087074a6 +0x10b6:  ret
087074a7 +0x10b7:  nop
087074a8 +0x10b8:  mov    %edx,%ebx
087074aa +0x10ba:  test   %ebx,%ebx
087074ac +0x10bc:  je     0870749b <+0x10ab>
087074ae +0x10be:  cmp    $0x1,%ebx
087074b1 +0x10c1:  lea    (%ecx,%eax,1),%eax
087074b4 +0x10c4:  je     087074d8 <+0x10e8>
087074b6 +0x10c6:  mov    %ebx,0x8(%esp)
087074ba +0x10ca:  mov    %esi,(%esp)
087074bd +0x10cd:  mov    %eax,0x4(%esp)
087074c1 +0x10d1:  call   0807d8a0 <_init+0x198>
087074c6 +0x10d6:  mov    %ebx,%eax
087074c8 +0x10d8:  mov    -0x4(%ebp),%esi
087074cb +0x10db:  mov    -0x8(%ebp),%ebx
087074ce +0x10de:  mov    %ebp,%esp
087074d0 +0x10e0:  pop    %ebp
087074d1 +0x10e1:  ret
087074d2 +0x10e2:  lea    0x0(%esi),%esi
087074d8 +0x10e8:  movzbl (%eax),%eax
087074db +0x10eb:  mov    %al,(%esi)
087074dd +0x10ed:  mov    %ebx,%eax
087074df +0x10ef:  mov    -0x4(%ebp),%esi
087074e2 +0x10f2:  mov    -0x8(%ebp),%ebx
087074e5 +0x10f5:  mov    %ebp,%esp
087074e7 +0x10f7:  pop    %ebp
087074e8 +0x10f8:  ret
087074e9 +0x10f9:  movl   $"basic_string::copy",(%esp)
087074f0 +0x1100:  call   086d9b70 <_ZSt20__throw_out_of_rangePKc>  ; std::__throw_out_of_range(char const*)
087074f5 +0x1105:  nop
087074f6 +0x1106:  nop
087074f7 +0x1107:  nop
087074f8 +0x1108:  nop
087074f9 +0x1109:  nop
087074fa +0x110a:  nop
087074fb +0x110b:  nop
087074fc +0x110c:  nop
087074fd +0x110d:  nop
087074fe +0x110e:  nop
087074ff +0x110f:  nop
08707500 +0x1110:  push   %ebp
08707501 +0x1111:  mov    %esp,%ebp
08707503 +0x1113:  sub    $0x38,%esp
08707506 +0x1116:  mov    %ebx,-0xc(%ebp)
08707509 +0x1119:  mov    0x8(%ebp),%ebx
0870750c +0x111c:  mov    %edi,-0x4(%ebp)
0870750f +0x111f:  mov    0xc(%ebp),%edi
08707512 +0x1122:  mov    %esi,-0x8(%ebp)
08707515 +0x1125:  mov    0x10(%ebp),%eax
08707518 +0x1128:  mov    $&_ZNSs4_Rep20_S_empty_rep_storageE+0xc,%esi
0870751d +0x112d:  cmp    %edi,%ebx
0870751f +0x112f:  je     08707563 <+0x1173>
08707521 +0x1131:  test   %ebx,%ebx
08707523 +0x1133:  je     08707580 <+0x1190>
08707525 +0x1135:  sub    %ebx,%edi
08707527 +0x1137:  mov    %eax,0x8(%esp)
0870752b +0x113b:  movl   $0x0,0x4(%esp)
08707533 +0x1143:  mov    %edi,(%esp)
08707536 +0x1146:  call   087069b0 <+0x5c0>
0870753b +0x114b:  cmp    $0x1,%edi
0870753e +0x114e:  mov    %eax,%edx
08707540 +0x1150:  lea    0xc(%eax),%esi
08707543 +0x1153:  je     08707578 <+0x1188>
08707545 +0x1155:  mov    %edx,-0x1c(%ebp)
08707548 +0x1158:  mov    %edi,0x8(%esp)
0870754c +0x115c:  mov    %ebx,0x4(%esp)
08707550 +0x1160:  mov    %esi,(%esp)
08707553 +0x1163:  call   0807d8a0 <_init+0x198>
08707558 +0x1168:  mov    -0x1c(%ebp),%edx
0870755b +0x116b:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%edx
08707561 +0x1171:  jne    08707590 <+0x11a0>
08707563 +0x1173:  mov    %esi,%eax
08707565 +0x1175:  mov    -0xc(%ebp),%ebx
08707568 +0x1178:  mov    -0x8(%ebp),%esi
0870756b +0x117b:  mov    -0x4(%ebp),%edi
0870756e +0x117e:  mov    %ebp,%esp
08707570 +0x1180:  pop    %ebp
08707571 +0x1181:  ret
08707572 +0x1182:  lea    0x0(%esi),%esi
08707578 +0x1188:  movzbl (%ebx),%eax
0870757b +0x118b:  mov    %al,0xc(%edx)
0870757e +0x118e:  jmp    0870755b <+0x116b>
08707580 +0x1190:  test   %edi,%edi
08707582 +0x1192:  je     087075a0 <+0x11b0>
08707584 +0x1194:  movl   $"basic_string::_S_construct NULL not valid",(%esp)
0870758b +0x119b:  call   086d95e0 <_ZSt19__throw_logic_errorPKc>  ; std::__throw_logic_error(char const*)
08707590 +0x11a0:  movl   $0x0,0x8(%edx)
08707597 +0x11a7:  mov    %edi,(%edx)
08707599 +0x11a9:  movb   $0x0,(%esi,%edi,1)
0870759d +0x11ad:  jmp    08707563 <+0x1173>
0870759f +0x11af:  nop
087075a0 +0x11b0:  mov    %eax,0x8(%esp)
087075a4 +0x11b4:  xor    %edi,%edi
087075a6 +0x11b6:  movl   $0x0,0x4(%esp)
087075ae +0x11be:  movl   $0x0,(%esp)
087075b5 +0x11c5:  call   087069b0 <+0x5c0>
087075ba +0x11ca:  mov    %eax,%edx
087075bc +0x11cc:  lea    0xc(%eax),%esi
087075bf +0x11cf:  jmp    08707545 <+0x1155>
087075c1 +0x11d1:  nop
087075c2 +0x11d2:  nop
087075c3 +0x11d3:  nop
087075c4 +0x11d4:  nop
087075c5 +0x11d5:  nop
087075c6 +0x11d6:  nop
087075c7 +0x11d7:  nop
087075c8 +0x11d8:  nop
087075c9 +0x11d9:  nop
087075ca +0x11da:  nop
087075cb +0x11db:  nop
087075cc +0x11dc:  nop
087075cd +0x11dd:  nop
087075ce +0x11de:  nop
087075cf +0x11df:  nop
087075d0 +0x11e0:  push   %ebp
087075d1 +0x11e1:  mov    %esp,%ebp
087075d3 +0x11e3:  sub    $0x18,%esp
087075d6 +0x11e6:  mov    0x14(%ebp),%eax
087075d9 +0x11e9:  movb   $0x0,0xc(%esp)
087075de +0x11ee:  mov    %eax,0x8(%esp)
087075e2 +0x11f2:  mov    0x10(%ebp),%eax
087075e5 +0x11f5:  mov    %eax,0x4(%esp)
087075e9 +0x11f9:  mov    0xc(%ebp),%eax
087075ec +0x11fc:  mov    %eax,(%esp)
087075ef +0x11ff:  call   08707500 <+0x1110>
087075f4 +0x1204:  mov    0x8(%ebp),%edx
087075f7 +0x1207:  mov    %eax,(%edx)
087075f9 +0x1209:  leave
087075fa +0x120a:  ret
087075fb +0x120b:  nop
087075fc +0x120c:  nop
087075fd +0x120d:  nop
087075fe +0x120e:  nop
087075ff +0x120f:  nop
08707600 +0x1210:  push   %ebp
08707601 +0x1211:  mov    %esp,%ebp
08707603 +0x1213:  sub    $0x18,%esp
08707606 +0x1216:  mov    0x14(%ebp),%edx
08707609 +0x1219:  mov    0xc(%ebp),%eax
0870760c +0x121c:  movb   $0x0,0xc(%esp)
08707611 +0x1221:  mov    %edx,0x8(%esp)
08707615 +0x1225:  mov    0x10(%ebp),%edx
08707618 +0x1228:  mov    %eax,(%esp)
0870761b +0x122b:  add    %eax,%edx
0870761d +0x122d:  mov    %edx,0x4(%esp)
08707621 +0x1231:  call   08707500 <+0x1110>
08707626 +0x1236:  mov    0x8(%ebp),%edx
08707629 +0x1239:  mov    %eax,(%edx)
0870762b +0x123b:  leave
0870762c +0x123c:  ret
0870762d +0x123d:  nop
0870762e +0x123e:  nop
0870762f +0x123f:  nop
08707630 +0x1240:  push   %ebp
08707631 +0x1241:  mov    $0xffffffff,%eax
08707636 +0x1246:  mov    %esp,%ebp
08707638 +0x1248:  push   %ebx
08707639 +0x1249:  sub    $0x14,%esp
0870763c +0x124c:  mov    0xc(%ebp),%ebx
0870763f +0x124f:  test   %ebx,%ebx
08707641 +0x1251:  je     0870764e <+0x125e>
08707643 +0x1253:  mov    %ebx,(%esp)
08707646 +0x1256:  call   0807e3b0 <_init+0xca8>
0870764b +0x125b:  lea    (%ebx,%eax,1),%eax
0870764e +0x125e:  mov    0x10(%ebp),%edx
08707651 +0x1261:  mov    %ebx,(%esp)
08707654 +0x1264:  movb   $0x0,0xc(%esp)
08707659 +0x1269:  mov    %eax,0x4(%esp)
0870765d +0x126d:  mov    %edx,0x8(%esp)
08707661 +0x1271:  call   08707500 <+0x1110>
08707666 +0x1276:  mov    0x8(%ebp),%edx
08707669 +0x1279:  mov    %eax,(%edx)
0870766b +0x127b:  add    $0x14,%esp
0870766e +0x127e:  pop    %ebx
0870766f +0x127f:  pop    %ebp
08707670 +0x1280:  ret
08707671 +0x1281:  nop
08707672 +0x1282:  nop
08707673 +0x1283:  nop
08707674 +0x1284:  nop
08707675 +0x1285:  nop
08707676 +0x1286:  nop
08707677 +0x1287:  nop
08707678 +0x1288:  nop
08707679 +0x1289:  nop
0870767a +0x128a:  nop
0870767b +0x128b:  nop
0870767c +0x128c:  nop
0870767d +0x128d:  nop
0870767e +0x128e:  nop
0870767f +0x128f:  nop
08707680 +0x1290:  push   %ebp
08707681 +0x1291:  mov    %esp,%ebp
08707683 +0x1293:  sub    $0x18,%esp
08707686 +0x1296:  mov    0x14(%ebp),%edx
08707689 +0x1299:  mov    0xc(%ebp),%eax
0870768c +0x129c:  movb   $0x0,0xc(%esp)
08707691 +0x12a1:  mov    %edx,0x8(%esp)
08707695 +0x12a5:  mov    0x10(%ebp),%edx
08707698 +0x12a8:  mov    %eax,(%esp)
0870769b +0x12ab:  add    %eax,%edx
0870769d +0x12ad:  mov    %edx,0x4(%esp)
087076a1 +0x12b1:  call   08707500 <+0x1110>
087076a6 +0x12b6:  mov    0x8(%ebp),%edx
087076a9 +0x12b9:  mov    %eax,(%edx)
087076ab +0x12bb:  leave
087076ac +0x12bc:  ret
087076ad +0x12bd:  nop
087076ae +0x12be:  nop
087076af +0x12bf:  nop
087076b0 +0x12c0:  push   %ebp
087076b1 +0x12c1:  mov    %esp,%ebp
087076b3 +0x12c3:  sub    $0x38,%esp
087076b6 +0x12c6:  mov    %ebx,-0xc(%ebp)
087076b9 +0x12c9:  mov    0x8(%ebp),%ebx
087076bc +0x12cc:  mov    %edi,-0x4(%ebp)
087076bf +0x12cf:  mov    0xc(%ebp),%edi
087076c2 +0x12d2:  mov    %esi,-0x8(%ebp)
087076c5 +0x12d5:  mov    0x10(%ebp),%eax
087076c8 +0x12d8:  mov    $&_ZNSs4_Rep20_S_empty_rep_storageE+0xc,%esi
087076cd +0x12dd:  cmp    %edi,%ebx
087076cf +0x12df:  je     08707713 <+0x1323>
087076d1 +0x12e1:  test   %ebx,%ebx
087076d3 +0x12e3:  je     08707730 <+0x1340>
087076d5 +0x12e5:  sub    %ebx,%edi
087076d7 +0x12e7:  mov    %eax,0x8(%esp)
087076db +0x12eb:  movl   $0x0,0x4(%esp)
087076e3 +0x12f3:  mov    %edi,(%esp)
087076e6 +0x12f6:  call   087069b0 <+0x5c0>
087076eb +0x12fb:  cmp    $0x1,%edi
087076ee +0x12fe:  mov    %eax,%edx
087076f0 +0x1300:  lea    0xc(%eax),%esi
087076f3 +0x1303:  je     08707728 <+0x1338>
087076f5 +0x1305:  mov    %edx,-0x1c(%ebp)
087076f8 +0x1308:  mov    %edi,0x8(%esp)
087076fc +0x130c:  mov    %ebx,0x4(%esp)
08707700 +0x1310:  mov    %esi,(%esp)
08707703 +0x1313:  call   0807d8a0 <_init+0x198>
08707708 +0x1318:  mov    -0x1c(%ebp),%edx
0870770b +0x131b:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%edx
08707711 +0x1321:  jne    08707740 <+0x1350>
08707713 +0x1323:  mov    %esi,%eax
08707715 +0x1325:  mov    -0xc(%ebp),%ebx
08707718 +0x1328:  mov    -0x8(%ebp),%esi
0870771b +0x132b:  mov    -0x4(%ebp),%edi
0870771e +0x132e:  mov    %ebp,%esp
08707720 +0x1330:  pop    %ebp
08707721 +0x1331:  ret
08707722 +0x1332:  lea    0x0(%esi),%esi
08707728 +0x1338:  movzbl (%ebx),%eax
0870772b +0x133b:  mov    %al,0xc(%edx)
0870772e +0x133e:  jmp    0870770b <+0x131b>
08707730 +0x1340:  test   %edi,%edi
08707732 +0x1342:  je     08707750 <+0x1360>
08707734 +0x1344:  movl   $"basic_string::_S_construct NULL not valid",(%esp)
0870773b +0x134b:  call   086d95e0 <_ZSt19__throw_logic_errorPKc>  ; std::__throw_logic_error(char const*)
08707740 +0x1350:  movl   $0x0,0x8(%edx)
08707747 +0x1357:  mov    %edi,(%edx)
08707749 +0x1359:  movb   $0x0,(%esi,%edi,1)
0870774d +0x135d:  jmp    08707713 <+0x1323>
0870774f +0x135f:  nop
08707750 +0x1360:  mov    %eax,0x8(%esp)
08707754 +0x1364:  xor    %edi,%edi
08707756 +0x1366:  movl   $0x0,0x4(%esp)
0870775e +0x136e:  movl   $0x0,(%esp)
08707765 +0x1375:  call   087069b0 <+0x5c0>
0870776a +0x137a:  mov    %eax,%edx
0870776c +0x137c:  lea    0xc(%eax),%esi
0870776f +0x137f:  jmp    087076f5 <+0x1305>
08707771 +0x1381:  nop
08707772 +0x1382:  nop
08707773 +0x1383:  nop
08707774 +0x1384:  nop
08707775 +0x1385:  nop
08707776 +0x1386:  nop
08707777 +0x1387:  nop
08707778 +0x1388:  nop
08707779 +0x1389:  nop
0870777a +0x138a:  nop
0870777b +0x138b:  nop
0870777c +0x138c:  nop
0870777d +0x138d:  nop
0870777e +0x138e:  nop
0870777f +0x138f:  nop
08707780 +0x1390:  push   %ebp
08707781 +0x1391:  mov    %esp,%ebp
08707783 +0x1393:  sub    $0x18,%esp
08707786 +0x1396:  mov    0x14(%ebp),%eax
08707789 +0x1399:  movb   $0x0,0xc(%esp)
0870778e +0x139e:  mov    %eax,0x8(%esp)
08707792 +0x13a2:  mov    0x10(%ebp),%eax
08707795 +0x13a5:  mov    %eax,0x4(%esp)
08707799 +0x13a9:  mov    0xc(%ebp),%eax
0870779c +0x13ac:  mov    %eax,(%esp)
0870779f +0x13af:  call   087076b0 <+0x12c0>
087077a4 +0x13b4:  mov    0x8(%ebp),%edx
087077a7 +0x13b7:  mov    %eax,(%edx)
087077a9 +0x13b9:  leave
087077aa +0x13ba:  ret
087077ab +0x13bb:  nop
087077ac +0x13bc:  nop
087077ad +0x13bd:  nop
087077ae +0x13be:  nop
087077af +0x13bf:  nop
087077b0 +0x13c0:  push   %ebp
087077b1 +0x13c1:  mov    %esp,%ebp
087077b3 +0x13c3:  push   %esi
087077b4 +0x13c4:  push   %ebx
087077b5 +0x13c5:  sub    $0x10,%esp
087077b8 +0x13c8:  mov    0xc(%ebp),%edx
087077bb +0x13cb:  mov    0x10(%ebp),%eax
087077be +0x13ce:  mov    0x14(%ebp),%ebx
087077c1 +0x13d1:  mov    (%edx),%edx
087077c3 +0x13d3:  mov    -0xc(%edx),%ecx
087077c6 +0x13d6:  cmp    %ecx,%eax
087077c8 +0x13d8:  ja     08707804 <+0x1414>
087077ca +0x13da:  mov    0x18(%ebp),%esi
087077cd +0x13dd:  sub    %eax,%ecx
087077cf +0x13df:  cmp    %ebx,%ecx
087077d1 +0x13e1:  movb   $0x0,0xc(%esp)
087077d6 +0x13e6:  mov    %esi,0x8(%esp)
087077da +0x13ea:  ja     08707800 <+0x1410>
087077dc +0x13ec:  add    %eax,%ecx
087077de +0x13ee:  lea    (%edx,%ecx,1),%ecx
087077e1 +0x13f1:  lea    (%edx,%eax,1),%eax
087077e4 +0x13f4:  mov    %ecx,0x4(%esp)
087077e8 +0x13f8:  mov    %eax,(%esp)
087077eb +0x13fb:  call   087076b0 <+0x12c0>
087077f0 +0x1400:  mov    0x8(%ebp),%edx
087077f3 +0x1403:  mov    %eax,(%edx)
087077f5 +0x1405:  add    $0x10,%esp
087077f8 +0x1408:  pop    %ebx
087077f9 +0x1409:  pop    %esi
087077fa +0x140a:  pop    %ebp
087077fb +0x140b:  ret
087077fc +0x140c:  lea    0x0(%esi,%eiz,1),%esi
08707800 +0x1410:  mov    %ebx,%ecx
08707802 +0x1412:  jmp    087077dc <+0x13ec>
08707804 +0x1414:  movl   $"basic_string::basic_string",(%esp)
0870780b +0x141b:  call   086d9b70 <_ZSt20__throw_out_of_rangePKc>  ; std::__throw_out_of_range(char const*)
08707810 +0x1420:  push   %ebp
08707811 +0x1421:  mov    %esp,%ebp
08707813 +0x1423:  push   %esi
08707814 +0x1424:  push   %ebx
08707815 +0x1425:  sub    $0x20,%esp
08707818 +0x1428:  mov    0xc(%ebp),%edx
0870781b +0x142b:  mov    0x10(%ebp),%eax
0870781e +0x142e:  mov    0x14(%ebp),%ebx
08707821 +0x1431:  mov    (%edx),%edx
08707823 +0x1433:  mov    -0xc(%edx),%ecx
08707826 +0x1436:  cmp    %ecx,%eax
08707828 +0x1438:  ja     08707864 <+0x1474>
0870782a +0x143a:  sub    %eax,%ecx
0870782c +0x143c:  lea    -0x9(%ebp),%esi
0870782f +0x143f:  cmp    %ebx,%ecx
08707831 +0x1441:  movb   $0x0,0xc(%esp)
08707836 +0x1446:  mov    %esi,0x8(%esp)
0870783a +0x144a:  ja     08707860 <+0x1470>
0870783c +0x144c:  add    %eax,%ecx
0870783e +0x144e:  lea    (%edx,%ecx,1),%ecx
08707841 +0x1451:  lea    (%edx,%eax,1),%eax
08707844 +0x1454:  mov    %ecx,0x4(%esp)
08707848 +0x1458:  mov    %eax,(%esp)
0870784b +0x145b:  call   087076b0 <+0x12c0>
08707850 +0x1460:  mov    0x8(%ebp),%edx
08707853 +0x1463:  mov    %eax,(%edx)
08707855 +0x1465:  add    $0x20,%esp
08707858 +0x1468:  pop    %ebx
08707859 +0x1469:  pop    %esi
0870785a +0x146a:  pop    %ebp
0870785b +0x146b:  ret
0870785c +0x146c:  lea    0x0(%esi,%eiz,1),%esi
08707860 +0x1470:  mov    %ebx,%ecx
08707862 +0x1472:  jmp    0870783c <+0x144c>
08707864 +0x1474:  movl   $"basic_string::basic_string",(%esp)
0870786b +0x147b:  call   086d9b70 <_ZSt20__throw_out_of_rangePKc>  ; std::__throw_out_of_range(char const*)
08707870 +0x1480:  mov    %eax,(%esp)
08707873 +0x1483:  call   08ae3750 <_Unwind_Resume>
08707878 +0x1488:  nop
08707879 +0x1489:  nop
0870787a +0x148a:  nop
0870787b +0x148b:  nop
0870787c +0x148c:  nop
0870787d +0x148d:  nop
0870787e +0x148e:  nop
0870787f +0x148f:  nop
08707880 +0x1490:  push   %ebp
08707881 +0x1491:  mov    %esp,%ebp
08707883 +0x1493:  push   %ebx
08707884 +0x1494:  sub    $0x14,%esp
08707887 +0x1497:  mov    0xc(%ebp),%edx
0870788a +0x149a:  mov    0x10(%ebp),%ecx
0870788d +0x149d:  mov    0x8(%ebp),%ebx
08707890 +0x14a0:  mov    (%edx),%eax
08707892 +0x14a2:  cmp    -0xc(%eax),%ecx
08707895 +0x14a5:  ja     087078b8 <+0x14c8>
08707897 +0x14a7:  mov    0x14(%ebp),%eax
0870789a +0x14aa:  mov    %ebx,(%esp)
0870789d +0x14ad:  mov    %ecx,0x8(%esp)
087078a1 +0x14b1:  mov    %edx,0x4(%esp)
087078a5 +0x14b5:  mov    %eax,0xc(%esp)
087078a9 +0x14b9:  call   08707810 <+0x1420>
087078ae +0x14be:  mov    %ebx,%eax
087078b0 +0x14c0:  add    $0x14,%esp
087078b3 +0x14c3:  pop    %ebx
087078b4 +0x14c4:  pop    %ebp
087078b5 +0x14c5:  ret    $0x4
087078b8 +0x14c8:  movl   $"basic_string::substr",(%esp)
087078bf +0x14cf:  call   086d9b70 <_ZSt20__throw_out_of_rangePKc>  ; std::__throw_out_of_range(char const*)
087078c4 +0x14d4:  nop
087078c5 +0x14d5:  nop
087078c6 +0x14d6:  nop
087078c7 +0x14d7:  nop
087078c8 +0x14d8:  nop
087078c9 +0x14d9:  nop
087078ca +0x14da:  nop
087078cb +0x14db:  nop
087078cc +0x14dc:  nop
087078cd +0x14dd:  nop
087078ce +0x14de:  nop
087078cf +0x14df:  nop
087078d0 +0x14e0:  push   %ebp
087078d1 +0x14e1:  mov    %esp,%ebp
087078d3 +0x14e3:  sub    $0x28,%esp
087078d6 +0x14e6:  mov    %ebx,-0xc(%ebp)
087078d9 +0x14e9:  mov    0xc(%ebp),%edx
087078dc +0x14ec:  mov    0x8(%ebp),%ebx
087078df +0x14ef:  mov    %esi,-0x8(%ebp)
087078e2 +0x14f2:  mov    0x10(%ebp),%eax
087078e5 +0x14f5:  mov    %edi,-0x4(%ebp)
087078e8 +0x14f8:  mov    %edx,0x8(%esp)
087078ec +0x14fc:  mov    0x4(%ebx),%edx
087078ef +0x14ff:  mov    %edx,0x4(%esp)
087078f3 +0x1503:  add    (%ebx),%eax
087078f5 +0x1505:  mov    %eax,(%esp)
087078f8 +0x1508:  call   087069b0 <+0x5c0>
087078fd +0x150d:  mov    %eax,%esi
087078ff +0x150f:  mov    (%ebx),%eax
08707901 +0x1511:  lea    0xc(%esi),%edi
08707904 +0x1514:  test   %eax,%eax
08707906 +0x1516:  jne    08707920 <+0x1530>
08707908 +0x1518:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%esi
0870790e +0x151e:  jne    0870794b <+0x155b>
08707910 +0x1520:  mov    %edi,%eax
08707912 +0x1522:  mov    -0xc(%ebp),%ebx
08707915 +0x1525:  mov    -0x8(%ebp),%esi
08707918 +0x1528:  mov    -0x4(%ebp),%edi
0870791b +0x152b:  mov    %ebp,%esp
0870791d +0x152d:  pop    %ebp
0870791e +0x152e:  ret
0870791f +0x152f:  nop
08707920 +0x1530:  cmp    $0x1,%eax
08707923 +0x1533:  lea    0xc(%ebx),%edx
08707926 +0x1536:  lea    0xc(%esi),%edi
08707929 +0x1539:  je     08707940 <+0x1550>
0870792b +0x153b:  mov    %eax,0x8(%esp)
0870792f +0x153f:  mov    %edx,0x4(%esp)
08707933 +0x1543:  mov    %edi,(%esp)
08707936 +0x1546:  call   0807d8a0 <_init+0x198>
0870793b +0x154b:  mov    (%ebx),%eax
0870793d +0x154d:  jmp    08707908 <+0x1518>
0870793f +0x154f:  nop
08707940 +0x1550:  movzbl 0xc(%ebx),%eax
08707944 +0x1554:  mov    %al,0xc(%esi)
08707947 +0x1557:  mov    (%ebx),%eax
08707949 +0x1559:  jmp    08707908 <+0x1518>
0870794b +0x155b:  movl   $0x0,0x8(%esi)
08707952 +0x1562:  mov    %eax,(%esi)
08707954 +0x1564:  movb   $0x0,(%edi,%eax,1)
08707958 +0x1568:  jmp    08707910 <+0x1520>
0870795a +0x156a:  nop
0870795b +0x156b:  nop
0870795c +0x156c:  nop
0870795d +0x156d:  nop
0870795e +0x156e:  nop
0870795f +0x156f:  nop
08707960 +0x1570:  push   %ebp
08707961 +0x1571:  mov    %esp,%ebp
08707963 +0x1573:  sub    $0x8,%esp
08707966 +0x1576:  mov    0x8(%ebp),%eax
08707969 +0x1579:  mov    0xc(%ebp),%ecx
0870796c +0x157c:  mov    0x8(%eax),%edx
0870796f +0x157f:  test   %edx,%edx
08707971 +0x1581:  js     08707980 <+0x1590>
08707973 +0x1583:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%eax
08707978 +0x1588:  jne    08707993 <+0x15a3>
0870797a +0x158a:  add    $0xc,%eax
0870797d +0x158d:  leave
0870797e +0x158e:  ret
0870797f +0x158f:  nop
08707980 +0x1590:  movl   $0x0,0x10(%ebp)
08707987 +0x1597:  mov    %ecx,0xc(%ebp)
0870798a +0x159a:  mov    %eax,0x8(%ebp)
0870798d +0x159d:  leave
0870798e +0x159e:  jmp    087078d0 <+0x14e0>
08707993 +0x15a3:  mov    $&data#bb92cc41(.plt),%ecx
08707998 +0x15a8:  test   %ecx,%ecx
0870799a +0x15aa:  je     087079a3 <+0x15b3>
0870799c +0x15ac:  lock addl $0x1,0x8(%eax)
087079a1 +0x15b1:  jmp    0870797a <+0x158a>
087079a3 +0x15b3:  add    $0x1,%edx
087079a6 +0x15b6:  mov    %edx,0x8(%eax)
087079a9 +0x15b9:  jmp    0870797a <+0x158a>
087079ab +0x15bb:  nop
087079ac +0x15bc:  nop
087079ad +0x15bd:  nop
087079ae +0x15be:  nop
087079af +0x15bf:  nop
087079b0 +0x15c0:  push   %ebp
087079b1 +0x15c1:  mov    %esp,%ebp
087079b3 +0x15c3:  sub    $0x28,%esp
087079b6 +0x15c6:  mov    0xc(%ebp),%eax
087079b9 +0x15c9:  mov    (%eax),%eax
087079bb +0x15cb:  sub    $0xc,%eax
087079be +0x15ce:  mov    0x8(%eax),%edx
087079c1 +0x15d1:  test   %edx,%edx
087079c3 +0x15d3:  js     087079d8 <+0x15e8>
087079c5 +0x15d5:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%eax
087079ca +0x15da:  jne    087079f6 <+0x1606>
087079cc +0x15dc:  mov    0x8(%ebp),%edx
087079cf +0x15df:  add    $0xc,%eax
087079d2 +0x15e2:  mov    %eax,(%edx)
087079d4 +0x15e4:  leave
087079d5 +0x15e5:  ret
087079d6 +0x15e6:  xchg   %ax,%ax
087079d8 +0x15e8:  lea    -0x9(%ebp),%edx
087079db +0x15eb:  movl   $0x0,0x8(%esp)
087079e3 +0x15f3:  mov    %edx,0x4(%esp)
087079e7 +0x15f7:  mov    %eax,(%esp)
087079ea +0x15fa:  call   087078d0 <+0x14e0>
087079ef +0x15ff:  mov    0x8(%ebp),%edx
087079f2 +0x1602:  mov    %eax,(%edx)
087079f4 +0x1604:  leave
087079f5 +0x1605:  ret
087079f6 +0x1606:  mov    $&data#bb92cc41(.plt),%ecx
087079fb +0x160b:  test   %ecx,%ecx
087079fd +0x160d:  je     08707a0e <+0x161e>
087079ff +0x160f:  lock addl $0x1,0x8(%eax)
08707a04 +0x1614:  jmp    087079cc <+0x15dc>
08707a06 +0x1616:  mov    %eax,(%esp)
08707a09 +0x1619:  call   08ae3750 <_Unwind_Resume>
08707a0e +0x161e:  add    $0x1,%edx
08707a11 +0x1621:  mov    %edx,0x8(%eax)
08707a14 +0x1624:  jmp    087079cc <+0x15dc>
08707a16 +0x1626:  nop
08707a17 +0x1627:  nop
08707a18 +0x1628:  nop
08707a19 +0x1629:  nop
08707a1a +0x162a:  nop
08707a1b +0x162b:  nop
08707a1c +0x162c:  nop
08707a1d +0x162d:  nop
08707a1e +0x162e:  nop
08707a1f +0x162f:  nop
08707a20 +0x1630:  push   %ebp
08707a21 +0x1631:  mov    %esp,%ebp
08707a23 +0x1633:  sub    $0x38,%esp
08707a26 +0x1636:  mov    %ebx,-0xc(%ebp)
08707a29 +0x1639:  mov    0x8(%ebp),%ebx
08707a2c +0x163c:  mov    %edi,-0x4(%ebp)
08707a2f +0x163f:  mov    0xc(%ebp),%edi
08707a32 +0x1642:  mov    %esi,-0x8(%ebp)
08707a35 +0x1645:  mov    $&_ZNSs4_Rep20_S_empty_rep_storageE+0xc,%esi
08707a3a +0x164a:  test   %ebx,%ebx
08707a3c +0x164c:  mov    %edi,%ecx
08707a3e +0x164e:  jne    08707a50 <+0x1660>
08707a40 +0x1650:  mov    %esi,%eax
08707a42 +0x1652:  mov    -0xc(%ebp),%ebx
08707a45 +0x1655:  mov    -0x8(%ebp),%esi
08707a48 +0x1658:  mov    -0x4(%ebp),%edi
08707a4b +0x165b:  mov    %ebp,%esp
08707a4d +0x165d:  pop    %ebp
08707a4e +0x165e:  ret
08707a4f +0x165f:  nop
08707a50 +0x1660:  mov    0x10(%ebp),%eax
08707a53 +0x1663:  mov    %cl,-0x1c(%ebp)
08707a56 +0x1666:  movl   $0x0,0x4(%esp)
08707a5e +0x166e:  mov    %ebx,(%esp)
08707a61 +0x1671:  mov    %eax,0x8(%esp)
08707a65 +0x1675:  call   087069b0 <+0x5c0>
08707a6a +0x167a:  cmp    $0x1,%ebx
08707a6d +0x167d:  movzbl -0x1c(%ebp),%ecx
08707a71 +0x1681:  mov    %eax,%edx
08707a73 +0x1683:  lea    0xc(%eax),%esi
08707a76 +0x1686:  je     08707ab0 <+0x16c0>
08707a78 +0x1688:  movsbl %cl,%ecx
08707a7b +0x168b:  mov    %ebx,0x8(%esp)
08707a7f +0x168f:  mov    %ecx,0x4(%esp)
08707a83 +0x1693:  mov    %esi,(%esp)
08707a86 +0x1696:  mov    %eax,-0x1c(%ebp)
08707a89 +0x1699:  call   0807dcc0 <_init+0x5b8>
08707a8e +0x169e:  mov    -0x1c(%ebp),%edx
08707a91 +0x16a1:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%edx
08707a97 +0x16a7:  je     08707a40 <+0x1650>
08707a99 +0x16a9:  movl   $0x0,0x8(%edx)
08707aa0 +0x16b0:  mov    %ebx,(%edx)
08707aa2 +0x16b2:  movb   $0x0,0xc(%edx,%ebx,1)
08707aa7 +0x16b7:  jmp    08707a40 <+0x1650>
08707aa9 +0x16b9:  lea    0x0(%esi,%eiz,1),%esi
08707ab0 +0x16c0:  mov    %edi,%eax
08707ab2 +0x16c2:  mov    %al,0xc(%edx)
08707ab5 +0x16c5:  jmp    08707a91 <+0x16a1>
08707ab7 +0x16c7:  nop
08707ab8 +0x16c8:  nop
08707ab9 +0x16c9:  nop
08707aba +0x16ca:  nop
08707abb +0x16cb:  nop
08707abc +0x16cc:  nop
08707abd +0x16cd:  nop
08707abe +0x16ce:  nop
08707abf +0x16cf:  nop
08707ac0 +0x16d0:  push   %ebp
08707ac1 +0x16d1:  mov    %esp,%ebp
08707ac3 +0x16d3:  sub    $0x18,%esp
08707ac6 +0x16d6:  movsbl 0x10(%ebp),%eax
08707aca +0x16da:  mov    0x14(%ebp),%edx
08707acd +0x16dd:  mov    %eax,0x4(%esp)
08707ad1 +0x16e1:  mov    0xc(%ebp),%eax
08707ad4 +0x16e4:  mov    %edx,0x8(%esp)
08707ad8 +0x16e8:  mov    %eax,(%esp)
08707adb +0x16eb:  call   08707a20 <+0x1630>
08707ae0 +0x16f0:  mov    0x8(%ebp),%edx
08707ae3 +0x16f3:  mov    %eax,(%edx)
08707ae5 +0x16f5:  leave
08707ae6 +0x16f6:  ret
08707ae7 +0x16f7:  nop
08707ae8 +0x16f8:  nop
08707ae9 +0x16f9:  nop
08707aea +0x16fa:  nop
08707aeb +0x16fb:  nop
08707aec +0x16fc:  nop
08707aed +0x16fd:  nop
08707aee +0x16fe:  nop
08707aef +0x16ff:  nop
08707af0 +0x1700:  push   %ebp
08707af1 +0x1701:  mov    %esp,%ebp
08707af3 +0x1703:  sub    $0x18,%esp
08707af6 +0x1706:  mov    0xc(%ebp),%eax
08707af9 +0x1709:  movl   $0x0,0x4(%esp)
08707b01 +0x1711:  movl   $0x0,(%esp)
08707b08 +0x1718:  mov    %eax,0x8(%esp)
08707b0c +0x171c:  call   08707a20 <+0x1630>
08707b11 +0x1721:  mov    0x8(%ebp),%edx
08707b14 +0x1724:  mov    %eax,(%edx)
08707b16 +0x1726:  leave
08707b17 +0x1727:  ret
08707b18 +0x1728:  nop
08707b19 +0x1729:  nop
08707b1a +0x172a:  nop
08707b1b +0x172b:  nop
08707b1c +0x172c:  nop
08707b1d +0x172d:  nop
08707b1e +0x172e:  nop
08707b1f +0x172f:  nop
08707b20 +0x1730:  push   %ebp
08707b21 +0x1731:  mov    %esp,%ebp
08707b23 +0x1733:  sub    $0x38,%esp
08707b26 +0x1736:  mov    %ebx,-0xc(%ebp)
08707b29 +0x1739:  mov    0x8(%ebp),%ebx
08707b2c +0x173c:  mov    %edi,-0x4(%ebp)
08707b2f +0x173f:  mov    0xc(%ebp),%edi
08707b32 +0x1742:  mov    %esi,-0x8(%ebp)
08707b35 +0x1745:  mov    $&_ZNSs4_Rep20_S_empty_rep_storageE+0xc,%esi
08707b3a +0x174a:  cmp    %edi,%ebx
08707b3c +0x174c:  jne    08707b50 <+0x1760>
08707b3e +0x174e:  mov    %esi,%eax
08707b40 +0x1750:  mov    -0xc(%ebp),%ebx
08707b43 +0x1753:  mov    -0x8(%ebp),%esi
08707b46 +0x1756:  mov    -0x4(%ebp),%edi
08707b49 +0x1759:  mov    %ebp,%esp
08707b4b +0x175b:  pop    %ebp
08707b4c +0x175c:  ret
08707b4d +0x175d:  lea    0x0(%esi),%esi
08707b50 +0x1760:  mov    0x10(%ebp),%eax
08707b53 +0x1763:  sub    %ebx,%edi
08707b55 +0x1765:  movl   $0x0,0x4(%esp)
08707b5d +0x176d:  mov    %edi,(%esp)
08707b60 +0x1770:  mov    %eax,0x8(%esp)
08707b64 +0x1774:  call   087069b0 <+0x5c0>
08707b69 +0x1779:  cmp    $0x1,%edi
08707b6c +0x177c:  mov    %eax,%edx
08707b6e +0x177e:  lea    0xc(%eax),%esi
08707b71 +0x1781:  je     08707ba8 <+0x17b8>
08707b73 +0x1783:  mov    %edi,0x8(%esp)
08707b77 +0x1787:  mov    %ebx,0x4(%esp)
08707b7b +0x178b:  mov    %esi,(%esp)
08707b7e +0x178e:  mov    %eax,-0x1c(%ebp)
08707b81 +0x1791:  call   0807d8a0 <_init+0x198>
08707b86 +0x1796:  mov    -0x1c(%ebp),%edx
08707b89 +0x1799:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%edx
08707b8f +0x179f:  je     08707b3e <+0x174e>
08707b91 +0x17a1:  movl   $0x0,0x8(%edx)
08707b98 +0x17a8:  mov    %edi,(%edx)
08707b9a +0x17aa:  movb   $0x0,0xc(%edx,%edi,1)
08707b9f +0x17af:  jmp    08707b3e <+0x174e>
08707ba1 +0x17b1:  lea    0x0(%esi,%eiz,1),%esi
08707ba8 +0x17b8:  movzbl (%ebx),%eax
08707bab +0x17bb:  mov    %al,0xc(%edx)
08707bae +0x17be:  jmp    08707b89 <+0x1799>
08707bb0 +0x17c0:  push   %ebp
08707bb1 +0x17c1:  mov    %esp,%ebp
08707bb3 +0x17c3:  sub    $0x18,%esp
08707bb6 +0x17c6:  mov    0x14(%ebp),%eax
08707bb9 +0x17c9:  movb   $0x0,0xc(%esp)
08707bbe +0x17ce:  mov    %eax,0x8(%esp)
08707bc2 +0x17d2:  mov    0x10(%ebp),%eax
08707bc5 +0x17d5:  mov    %eax,0x4(%esp)
08707bc9 +0x17d9:  mov    0xc(%ebp),%eax
08707bcc +0x17dc:  mov    %eax,(%esp)
08707bcf +0x17df:  call   08707b20 <+0x1730>
08707bd4 +0x17e4:  mov    0x8(%ebp),%edx
08707bd7 +0x17e7:  mov    %eax,(%edx)
08707bd9 +0x17e9:  leave
08707bda +0x17ea:  ret
08707bdb +0x17eb:  nop
08707bdc +0x17ec:  nop
08707bdd +0x17ed:  nop
08707bde +0x17ee:  nop
08707bdf +0x17ef:  nop
08707be0 +0x17f0:  push   %ebp
08707be1 +0x17f1:  mov    %esp,%ebp
08707be3 +0x17f3:  sub    $0x28,%esp
08707be6 +0x17f6:  mov    0x8(%ebp),%eax
08707be9 +0x17f9:  mov    (%eax),%eax
08707beb +0x17fb:  sub    $0xc,%eax
08707bee +0x17fe:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%eax
08707bf3 +0x1803:  jne    08707bf7 <+0x1807>
08707bf5 +0x1805:  leave
08707bf6 +0x1806:  ret
08707bf7 +0x1807:  mov    $&data#bb92cc41(.plt),%edx
08707bfc +0x180c:  test   %edx,%edx
08707bfe +0x180e:  je     08707c1d <+0x182d>
08707c00 +0x1810:  or     $0xffffffff,%edx
08707c03 +0x1813:  lock xadd %edx,0x8(%eax)
08707c08 +0x1818:  test   %edx,%edx
08707c0a +0x181a:  jg     08707bf5 <+0x1805>
08707c0c +0x181c:  lea    -0x9(%ebp),%edx
08707c0f +0x181f:  mov    %edx,0x4(%esp)
08707c13 +0x1823:  mov    %eax,(%esp)
08707c16 +0x1826:  call   08706920 <+0x530>
08707c1b +0x182b:  leave
08707c1c +0x182c:  ret
08707c1d +0x182d:  mov    0x8(%eax),%edx
08707c20 +0x1830:  lea    -0x1(%edx),%ecx
08707c23 +0x1833:  mov    %ecx,0x8(%eax)
08707c26 +0x1836:  jmp    08707c08 <+0x1818>
08707c28 +0x1838:  nop
08707c29 +0x1839:  nop
08707c2a +0x183a:  nop
08707c2b +0x183b:  nop
08707c2c +0x183c:  nop
08707c2d +0x183d:  nop
08707c2e +0x183e:  nop
08707c2f +0x183f:  nop
08707c30 +0x1840:  push   %ebp
08707c31 +0x1841:  mov    %esp,%ebp
08707c33 +0x1843:  sub    $0x38,%esp
08707c36 +0x1846:  mov    %ebx,-0x8(%ebp)
08707c39 +0x1849:  mov    0xc(%ebp),%eax
08707c3c +0x184c:  mov    0x8(%ebp),%ebx
08707c3f +0x184f:  mov    %esi,-0x4(%ebp)
08707c42 +0x1852:  mov    (%eax),%eax
08707c44 +0x1854:  mov    (%ebx),%edx
08707c46 +0x1856:  cmp    %eax,%edx
08707c48 +0x1858:  je     08707c6b <+0x187b>
08707c4a +0x185a:  sub    $0xc,%eax
08707c4d +0x185d:  mov    0x8(%eax),%ecx
08707c50 +0x1860:  test   %ecx,%ecx
08707c52 +0x1862:  js     08707c78 <+0x1888>
08707c54 +0x1864:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%eax
08707c59 +0x1869:  jne    08707cc1 <+0x18d1>
08707c5b +0x186b:  add    $0xc,%eax
08707c5e +0x186e:  sub    $0xc,%edx
08707c61 +0x1871:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%edx
08707c67 +0x1877:  jne    08707c93 <+0x18a3>
08707c69 +0x1879:  mov    %eax,(%ebx)
08707c6b +0x187b:  mov    %ebx,%eax
08707c6d +0x187d:  mov    -0x4(%ebp),%esi
08707c70 +0x1880:  mov    -0x8(%ebp),%ebx
08707c73 +0x1883:  mov    %ebp,%esp
08707c75 +0x1885:  pop    %ebp
08707c76 +0x1886:  ret
08707c77 +0x1887:  nop
08707c78 +0x1888:  lea    -0x9(%ebp),%edx
08707c7b +0x188b:  movl   $0x0,0x8(%esp)
08707c83 +0x1893:  mov    %edx,0x4(%esp)
08707c87 +0x1897:  mov    %eax,(%esp)
08707c8a +0x189a:  call   087078d0 <+0x14e0>
08707c8f +0x189f:  mov    (%ebx),%edx
08707c91 +0x18a1:  jmp    08707c5e <+0x186e>
08707c93 +0x18a3:  mov    $&data#bb92cc41(.plt),%ecx
08707c98 +0x18a8:  test   %ecx,%ecx
08707c9a +0x18aa:  je     08707cdb <+0x18eb>
08707c9c +0x18ac:  or     $0xffffffff,%ecx
08707c9f +0x18af:  lock xadd %ecx,0x8(%edx)
08707ca4 +0x18b4:  test   %ecx,%ecx
08707ca6 +0x18b6:  jg     08707c69 <+0x1879>
08707ca8 +0x18b8:  lea    -0x9(%ebp),%ecx
08707cab +0x18bb:  mov    %eax,-0x1c(%ebp)
08707cae +0x18be:  mov    %ecx,0x4(%esp)
08707cb2 +0x18c2:  mov    %edx,(%esp)
08707cb5 +0x18c5:  call   08706920 <+0x530>
08707cba +0x18ca:  mov    -0x1c(%ebp),%eax
08707cbd +0x18cd:  mov    %eax,(%ebx)
08707cbf +0x18cf:  jmp    08707c6b <+0x187b>
08707cc1 +0x18d1:  mov    $&data#bb92cc41(.plt),%esi
08707cc6 +0x18d6:  test   %esi,%esi
08707cc8 +0x18d8:  je     08707ce6 <+0x18f6>
08707cca +0x18da:  lock addl $0x1,0x8(%eax)
08707ccf +0x18df:  mov    (%ebx),%edx
08707cd1 +0x18e1:  jmp    08707c5b <+0x186b>
08707cd3 +0x18e3:  mov    %eax,(%esp)
08707cd6 +0x18e6:  call   08ae3750 <_Unwind_Resume>
08707cdb +0x18eb:  mov    0x8(%edx),%ecx
08707cde +0x18ee:  lea    -0x1(%ecx),%esi
08707ce1 +0x18f1:  mov    %esi,0x8(%edx)
08707ce4 +0x18f4:  jmp    08707ca4 <+0x18b4>
08707ce6 +0x18f6:  add    $0x1,%ecx
08707ce9 +0x18f9:  mov    %ecx,0x8(%eax)
08707cec +0x18fc:  jmp    08707c5b <+0x186b>
08707cf1 +0x1901:  nop
08707cf2 +0x1902:  nop
08707cf3 +0x1903:  nop
08707cf4 +0x1904:  nop
08707cf5 +0x1905:  nop
08707cf6 +0x1906:  nop
08707cf7 +0x1907:  nop
08707cf8 +0x1908:  nop
08707cf9 +0x1909:  nop
08707cfa +0x190a:  nop
08707cfb +0x190b:  nop
08707cfc +0x190c:  nop
08707cfd +0x190d:  nop
08707cfe +0x190e:  nop
08707cff +0x190f:  nop
08707d00 +0x1910:  push   %ebp
08707d01 +0x1911:  mov    %esp,%ebp
08707d03 +0x1913:  sub    $0x8,%esp
08707d06 +0x1916:  leave
08707d07 +0x1917:  jmp    08707c30 <+0x1840>
08707d0c +0x191c:  nop
08707d0d +0x191d:  nop
08707d0e +0x191e:  nop
08707d0f +0x191f:  nop
08707d10 +0x1920:  push   %ebp
08707d11 +0x1921:  mov    %esp,%ebp
08707d13 +0x1923:  sub    $0x48,%esp
08707d16 +0x1926:  mov    %ebx,-0xc(%ebp)
08707d19 +0x1929:  mov    0x8(%ebp),%ebx
08707d1c +0x192c:  mov    %esi,-0x8(%ebp)
08707d1f +0x192f:  mov    0xc(%ebp),%edx
08707d22 +0x1932:  mov    %edi,-0x4(%ebp)
08707d25 +0x1935:  mov    (%ebx),%ecx
08707d27 +0x1937:  lea    -0xc(%ecx),%eax
08707d2a +0x193a:  cmp    0x4(%eax),%edx
08707d2d +0x193d:  je     08707d70 <+0x1980>
08707d2f +0x193f:  mov    -0xc(%ecx),%ecx
08707d32 +0x1942:  cmp    %ecx,%edx
08707d34 +0x1944:  jb     08707d7e <+0x198e>
08707d36 +0x1946:  xchg   %ax,%ax
08707d38 +0x1948:  sub    %ecx,%edx
08707d3a +0x194a:  lea    -0x19(%ebp),%esi
08707d3d +0x194d:  mov    %edx,0x8(%esp)
08707d41 +0x1951:  mov    %esi,0x4(%esp)
08707d45 +0x1955:  mov    %eax,(%esp)
08707d48 +0x1958:  call   087078d0 <+0x14e0>
08707d4d +0x195d:  mov    (%ebx),%edx
08707d4f +0x195f:  sub    $0xc,%edx
08707d52 +0x1962:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%edx
08707d58 +0x1968:  jne    08707d82 <+0x1992>
08707d5a +0x196a:  mov    %eax,(%ebx)
08707d5c +0x196c:  mov    -0xc(%ebp),%ebx
08707d5f +0x196f:  mov    -0x8(%ebp),%esi
08707d62 +0x1972:  mov    -0x4(%ebp),%edi
08707d65 +0x1975:  mov    %ebp,%esp
08707d67 +0x1977:  pop    %ebp
08707d68 +0x1978:  ret
08707d69 +0x1979:  lea    0x0(%esi,%eiz,1),%esi
08707d70 +0x1980:  mov    0x8(%eax),%esi
08707d73 +0x1983:  test   %esi,%esi
08707d75 +0x1985:  jle    08707d5c <+0x196c>
08707d77 +0x1987:  mov    -0xc(%ecx),%ecx
08707d7a +0x198a:  cmp    %ecx,%edx
08707d7c +0x198c:  jae    08707d38 <+0x1948>
08707d7e +0x198e:  mov    %ecx,%edx
08707d80 +0x1990:  jmp    08707d38 <+0x1948>
08707d82 +0x1992:  mov    $&data#bb92cc41(.plt),%ecx
08707d87 +0x1997:  test   %ecx,%ecx
08707d89 +0x1999:  je     08707db3 <+0x19c3>
08707d8b +0x199b:  or     $0xffffffff,%ecx
08707d8e +0x199e:  lock xadd %ecx,0x8(%edx)
08707d93 +0x19a3:  test   %ecx,%ecx
08707d95 +0x19a5:  jg     08707d5a <+0x196a>
08707d97 +0x19a7:  mov    %eax,-0x2c(%ebp)
08707d9a +0x19aa:  mov    %esi,0x4(%esp)
08707d9e +0x19ae:  mov    %edx,(%esp)
08707da1 +0x19b1:  call   08706920 <+0x530>
08707da6 +0x19b6:  mov    -0x2c(%ebp),%eax
08707da9 +0x19b9:  jmp    08707d5a <+0x196a>
08707dab +0x19bb:  mov    %eax,(%esp)
08707dae +0x19be:  call   08ae3750 <_Unwind_Resume>
08707db3 +0x19c3:  mov    0x8(%edx),%ecx
08707db6 +0x19c6:  lea    -0x1(%ecx),%edi
08707db9 +0x19c9:  mov    %edi,0x8(%edx)
08707dbc +0x19cc:  jmp    08707d93 <+0x19a3>
08707dbe +0x19ce:  nop
08707dbf +0x19cf:  nop
08707dc0 +0x19d0:  push   %ebp
08707dc1 +0x19d1:  mov    %esp,%ebp
08707dc3 +0x19d3:  sub    $0x28,%esp
08707dc6 +0x19d6:  mov    %ebx,-0xc(%ebp)
08707dc9 +0x19d9:  mov    0x8(%ebp),%ebx
08707dcc +0x19dc:  mov    %esi,-0x8(%ebp)
08707dcf +0x19df:  mov    %edi,-0x4(%ebp)
08707dd2 +0x19e2:  movzbl 0xc(%ebp),%edi
08707dd6 +0x19e6:  mov    (%ebx),%eax
08707dd8 +0x19e8:  mov    -0xc(%eax),%edx
08707ddb +0x19eb:  lea    -0xc(%eax),%ecx
08707dde +0x19ee:  lea    0x1(%edx),%esi
08707de1 +0x19f1:  cmp    0x4(%ecx),%esi
08707de4 +0x19f4:  jbe    08707e18 <+0x1a28>
08707de6 +0x19f6:  mov    %esi,0x4(%esp)
08707dea +0x19fa:  mov    %ebx,(%esp)
08707ded +0x19fd:  call   08707d10 <+0x1920>
08707df2 +0x1a02:  mov    (%ebx),%eax
08707df4 +0x1a04:  mov    -0xc(%eax),%edx
08707df7 +0x1a07:  mov    %edi,%ecx
08707df9 +0x1a09:  mov    %cl,(%eax,%edx,1)
08707dfc +0x1a0c:  mov    (%ebx),%edx
08707dfe +0x1a0e:  lea    -0xc(%edx),%eax
08707e01 +0x1a11:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%eax
08707e06 +0x1a16:  jne    08707e21 <+0x1a31>
08707e08 +0x1a18:  mov    -0xc(%ebp),%ebx
08707e0b +0x1a1b:  mov    -0x8(%ebp),%esi
08707e0e +0x1a1e:  mov    -0x4(%ebp),%edi
08707e11 +0x1a21:  mov    %ebp,%esp
08707e13 +0x1a23:  pop    %ebp
08707e14 +0x1a24:  ret
08707e15 +0x1a25:  lea    0x0(%esi),%esi
08707e18 +0x1a28:  mov    0x8(%ecx),%ecx
08707e1b +0x1a2b:  test   %ecx,%ecx
08707e1d +0x1a2d:  jg     08707de6 <+0x19f6>
08707e1f +0x1a2f:  jmp    08707df7 <+0x1a07>
08707e21 +0x1a31:  movl   $0x0,0x8(%eax)
08707e28 +0x1a38:  mov    %esi,-0xc(%edx)
08707e2b +0x1a3b:  movb   $0x0,0xc(%eax,%esi,1)
08707e30 +0x1a40:  jmp    08707e08 <+0x1a18>
08707e32 +0x1a42:  nop
08707e33 +0x1a43:  nop
08707e34 +0x1a44:  nop
08707e35 +0x1a45:  nop
08707e36 +0x1a46:  nop
08707e37 +0x1a47:  nop
08707e38 +0x1a48:  nop
08707e39 +0x1a49:  nop
08707e3a +0x1a4a:  nop
08707e3b +0x1a4b:  nop
08707e3c +0x1a4c:  nop
08707e3d +0x1a4d:  nop
08707e3e +0x1a4e:  nop
08707e3f +0x1a4f:  nop
08707e40 +0x1a50:  push   %ebp
08707e41 +0x1a51:  mov    %esp,%ebp
08707e43 +0x1a53:  sub    $0x58,%esp
08707e46 +0x1a56:  mov    %esi,-0x8(%ebp)
08707e49 +0x1a59:  mov    0xc(%ebp),%esi
08707e4c +0x1a5c:  movzbl 0x10(%ebp),%eax
08707e50 +0x1a60:  mov    %ebx,-0xc(%ebp)
08707e53 +0x1a63:  mov    0x8(%ebp),%ebx
08707e56 +0x1a66:  mov    %edi,-0x4(%ebp)
08707e59 +0x1a69:  test   %esi,%esi
08707e5b +0x1a6b:  mov    %al,-0x39(%ebp)
08707e5e +0x1a6e:  jne    08707e70 <+0x1a80>
08707e60 +0x1a70:  mov    %ebx,%eax
08707e62 +0x1a72:  mov    -0x8(%ebp),%esi
08707e65 +0x1a75:  mov    -0xc(%ebp),%ebx
08707e68 +0x1a78:  mov    -0x4(%ebp),%edi
08707e6b +0x1a7b:  mov    %ebp,%esp
08707e6d +0x1a7d:  pop    %ebp
08707e6e +0x1a7e:  ret
08707e6f +0x1a7f:  nop
08707e70 +0x1a80:  mov    (%ebx),%eax
08707e72 +0x1a82:  lea    -0xc(%eax),%edx
08707e75 +0x1a85:  mov    %edx,-0x2c(%ebp)
08707e78 +0x1a88:  mov    -0xc(%eax),%edx
08707e7b +0x1a8b:  mov    %edx,%ecx
08707e7d +0x1a8d:  neg    %ecx
08707e7f +0x1a8f:  add    $0x3ffffffc,%ecx
08707e85 +0x1a95:  cmp    %ecx,%esi
08707e87 +0x1a97:  ja     08707ef8 <+0x1b08>
08707e89 +0x1a99:  mov    -0x2c(%ebp),%ecx
08707e8c +0x1a9c:  lea    (%esi,%edx,1),%edi
08707e8f +0x1a9f:  mov    %edi,-0x1c(%ebp)
08707e92 +0x1aa2:  cmp    0x4(%ecx),%edi
08707e95 +0x1aa5:  ja     08707e9e <+0x1aae>
08707e97 +0x1aa7:  mov    0x8(%ecx),%edi
08707e9a +0x1aaa:  test   %edi,%edi
08707e9c +0x1aac:  jle    08707eb2 <+0x1ac2>
08707e9e +0x1aae:  mov    -0x1c(%ebp),%edi
08707ea1 +0x1ab1:  mov    %ebx,(%esp)
08707ea4 +0x1ab4:  mov    %edi,0x4(%esp)
08707ea8 +0x1ab8:  call   08707d10 <+0x1920>
08707ead +0x1abd:  mov    (%ebx),%eax
08707eaf +0x1abf:  mov    -0xc(%eax),%edx
08707eb2 +0x1ac2:  add    %edx,%eax
08707eb4 +0x1ac4:  cmp    $0x1,%esi
08707eb7 +0x1ac7:  je     08707ef0 <+0x1b00>
08707eb9 +0x1ac9:  movsbl -0x39(%ebp),%ecx
08707ebd +0x1acd:  mov    %esi,0x8(%esp)
08707ec1 +0x1ad1:  mov    %eax,(%esp)
08707ec4 +0x1ad4:  mov    %ecx,0x4(%esp)
08707ec8 +0x1ad8:  call   0807dcc0 <_init+0x5b8>
08707ecd +0x1add:  mov    (%ebx),%edx
08707ecf +0x1adf:  lea    -0xc(%edx),%eax
08707ed2 +0x1ae2:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%eax
08707ed7 +0x1ae7:  je     08707e60 <+0x1a70>
08707ed9 +0x1ae9:  mov    -0x1c(%ebp),%ecx
08707edc +0x1aec:  movl   $0x0,0x8(%eax)
08707ee3 +0x1af3:  mov    %ecx,-0xc(%edx)
08707ee6 +0x1af6:  movb   $0x0,0xc(%eax,%ecx,1)
08707eeb +0x1afb:  jmp    08707e60 <+0x1a70>
08707ef0 +0x1b00:  movzbl -0x39(%ebp),%edx
08707ef4 +0x1b04:  mov    %dl,(%eax)
08707ef6 +0x1b06:  jmp    08707ecd <+0x1add>
08707ef8 +0x1b08:  movl   $"basic_string::append",(%esp)
08707eff +0x1b0f:  call   086d9c40 <_ZSt20__throw_length_errorPKc>  ; std::__throw_length_error(char const*)
08707f04 +0x1b14:  nop
08707f05 +0x1b15:  nop
08707f06 +0x1b16:  nop
08707f07 +0x1b17:  nop
08707f08 +0x1b18:  nop
08707f09 +0x1b19:  nop
08707f0a +0x1b1a:  nop
08707f0b +0x1b1b:  nop
08707f0c +0x1b1c:  nop
08707f0d +0x1b1d:  nop
08707f0e +0x1b1e:  nop
08707f0f +0x1b1f:  nop
08707f10 +0x1b20:  push   %ebp
08707f11 +0x1b21:  mov    %esp,%ebp
08707f13 +0x1b23:  sub    $0x38,%esp
08707f16 +0x1b26:  mov    %edi,-0x4(%ebp)
08707f19 +0x1b29:  mov    0x10(%ebp),%edi
08707f1c +0x1b2c:  mov    %ebx,-0xc(%ebp)
08707f1f +0x1b2f:  mov    0x8(%ebp),%ebx
08707f22 +0x1b32:  mov    %esi,-0x8(%ebp)
08707f25 +0x1b35:  test   %edi,%edi
08707f27 +0x1b37:  jne    08707f38 <+0x1b48>
08707f29 +0x1b39:  mov    %ebx,%eax
08707f2b +0x1b3b:  mov    -0x8(%ebp),%esi
08707f2e +0x1b3e:  mov    -0xc(%ebp),%ebx
08707f31 +0x1b41:  mov    -0x4(%ebp),%edi
08707f34 +0x1b44:  mov    %ebp,%esp
08707f36 +0x1b46:  pop    %ebp
08707f37 +0x1b47:  ret
08707f38 +0x1b48:  mov    (%ebx),%eax
08707f3a +0x1b4a:  mov    -0xc(%eax),%edx
08707f3d +0x1b4d:  lea    -0xc(%eax),%ecx
08707f40 +0x1b50:  mov    %edx,%esi
08707f42 +0x1b52:  neg    %esi
08707f44 +0x1b54:  add    $0x3ffffffc,%esi
08707f4a +0x1b5a:  cmp    %esi,%edi
08707f4c +0x1b5c:  ja     08707ff3 <+0x1c03>
08707f52 +0x1b62:  lea    (%edi,%edx,1),%esi
08707f55 +0x1b65:  cmp    0x4(%ecx),%esi
08707f58 +0x1b68:  ja     08707f61 <+0x1b71>
08707f5a +0x1b6a:  mov    0x8(%ecx),%ecx
08707f5d +0x1b6d:  test   %ecx,%ecx
08707f5f +0x1b6f:  jle    08707f7f <+0x1b8f>
08707f61 +0x1b71:  cmp    %eax,0xc(%ebp)
08707f64 +0x1b74:  jb     08707f6e <+0x1b7e>
08707f66 +0x1b76:  lea    (%eax,%edx,1),%edx
08707f69 +0x1b79:  cmp    %edx,0xc(%ebp)
08707f6c +0x1b7c:  jbe    08707fd0 <+0x1be0>
08707f6e +0x1b7e:  mov    %esi,0x4(%esp)
08707f72 +0x1b82:  mov    %ebx,(%esp)
08707f75 +0x1b85:  call   08707d10 <+0x1920>
08707f7a +0x1b8a:  mov    (%ebx),%eax
08707f7c +0x1b8c:  mov    -0xc(%eax),%edx
08707f7f +0x1b8f:  add    %edx,%eax
08707f81 +0x1b91:  cmp    $0x1,%edi
08707f84 +0x1b94:  je     08707fc0 <+0x1bd0>
08707f86 +0x1b96:  mov    0xc(%ebp),%edx
08707f89 +0x1b99:  mov    %edi,0x8(%esp)
08707f8d +0x1b9d:  mov    %eax,(%esp)
08707f90 +0x1ba0:  mov    %edx,0x4(%esp)
08707f94 +0x1ba4:  call   0807d8a0 <_init+0x198>
08707f99 +0x1ba9:  mov    (%ebx),%edx
08707f9b +0x1bab:  lea    -0xc(%edx),%eax
08707f9e +0x1bae:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%eax
08707fa3 +0x1bb3:  je     08707f29 <+0x1b39>
08707fa5 +0x1bb5:  movl   $0x0,0x8(%eax)
08707fac +0x1bbc:  mov    %esi,-0xc(%edx)
08707faf +0x1bbf:  movb   $0x0,0xc(%eax,%esi,1)
08707fb4 +0x1bc4:  jmp    08707f29 <+0x1b39>
08707fb9 +0x1bc9:  lea    0x0(%esi,%eiz,1),%esi
08707fc0 +0x1bd0:  mov    0xc(%ebp),%ecx
08707fc3 +0x1bd3:  movzbl (%ecx),%edx
08707fc6 +0x1bd6:  mov    %dl,(%eax)
08707fc8 +0x1bd8:  jmp    08707f99 <+0x1ba9>
08707fca +0x1bda:  lea    0x0(%esi),%esi
08707fd0 +0x1be0:  mov    0xc(%ebp),%ecx
08707fd3 +0x1be3:  mov    %esi,0x4(%esp)
08707fd7 +0x1be7:  mov    %ebx,(%esp)
08707fda +0x1bea:  sub    %eax,%ecx
08707fdc +0x1bec:  mov    %ecx,-0x1c(%ebp)
08707fdf +0x1bef:  call   08707d10 <+0x1920>
08707fe4 +0x1bf4:  mov    (%ebx),%eax
08707fe6 +0x1bf6:  mov    -0x1c(%ebp),%edx
08707fe9 +0x1bf9:  add    %eax,%edx
08707feb +0x1bfb:  mov    %edx,0xc(%ebp)
08707fee +0x1bfe:  mov    -0xc(%eax),%edx
08707ff1 +0x1c01:  jmp    08707f7f <+0x1b8f>
08707ff3 +0x1c03:  movl   $"basic_string::append",(%esp)
08707ffa +0x1c0a:  call   086d9c40 <_ZSt20__throw_length_errorPKc>  ; std::__throw_length_error(char const*)
08707fff +0x1c0f:  nop
08708000 +0x1c10:  push   %ebp
08708001 +0x1c11:  mov    %esp,%ebp
08708003 +0x1c13:  push   %ebx
08708004 +0x1c14:  sub    $0x14,%esp
08708007 +0x1c17:  mov    0xc(%ebp),%ebx
0870800a +0x1c1a:  mov    %ebx,(%esp)
0870800d +0x1c1d:  call   0807e3b0 <_init+0xca8>
08708012 +0x1c22:  mov    %ebx,0x4(%esp)
08708016 +0x1c26:  mov    %eax,0x8(%esp)
0870801a +0x1c2a:  mov    0x8(%ebp),%eax
0870801d +0x1c2d:  mov    %eax,(%esp)
08708020 +0x1c30:  call   08707f10 <+0x1b20>
08708025 +0x1c35:  add    $0x14,%esp
08708028 +0x1c38:  pop    %ebx
08708029 +0x1c39:  pop    %ebp
0870802a +0x1c3a:  ret
0870802b +0x1c3b:  nop
0870802c +0x1c3c:  nop
0870802d +0x1c3d:  nop
0870802e +0x1c3e:  nop
0870802f +0x1c3f:  nop
08708030 +0x1c40:  push   %ebp
08708031 +0x1c41:  mov    %esp,%ebp
08708033 +0x1c43:  push   %ebx
08708034 +0x1c44:  sub    $0x14,%esp
08708037 +0x1c47:  mov    0xc(%ebp),%ebx
0870803a +0x1c4a:  mov    %ebx,(%esp)
0870803d +0x1c4d:  call   0807e3b0 <_init+0xca8>
08708042 +0x1c52:  mov    %ebx,0x4(%esp)
08708046 +0x1c56:  mov    %eax,0x8(%esp)
0870804a +0x1c5a:  mov    0x8(%ebp),%eax
0870804d +0x1c5d:  mov    %eax,(%esp)
08708050 +0x1c60:  call   08707f10 <+0x1b20>
08708055 +0x1c65:  add    $0x14,%esp
08708058 +0x1c68:  pop    %ebx
08708059 +0x1c69:  pop    %ebp
0870805a +0x1c6a:  ret
0870805b +0x1c6b:  nop
0870805c +0x1c6c:  nop
0870805d +0x1c6d:  nop
0870805e +0x1c6e:  nop
0870805f +0x1c6f:  nop
08708060 +0x1c70:  push   %ebp
08708061 +0x1c71:  mov    %esp,%ebp
08708063 +0x1c73:  sub    $0x48,%esp
08708066 +0x1c76:  mov    0xc(%ebp),%ecx
08708069 +0x1c79:  mov    %ebx,-0xc(%ebp)
0870806c +0x1c7c:  mov    0x14(%ebp),%eax
0870806f +0x1c7f:  mov    %esi,-0x8(%ebp)
08708072 +0x1c82:  mov    0x8(%ebp),%ebx
08708075 +0x1c85:  mov    %edi,-0x4(%ebp)
08708078 +0x1c88:  mov    (%ecx),%edx
0870807a +0x1c8a:  mov    -0xc(%edx),%esi
0870807d +0x1c8d:  cmp    %esi,0x10(%ebp)
08708080 +0x1c90:  ja     0870812b <+0x1d3b>
08708086 +0x1c96:  sub    0x10(%ebp),%esi
08708089 +0x1c99:  cmp    %eax,%esi
0870808b +0x1c9b:  ja     08708108 <+0x1d18>
0870808d +0x1c9d:  test   %esi,%esi
0870808f +0x1c9f:  je     087080f6 <+0x1d06>
08708091 +0x1ca1:  mov    (%ebx),%eax
08708093 +0x1ca3:  mov    -0xc(%eax),%ecx
08708096 +0x1ca6:  lea    -0xc(%eax),%edi
08708099 +0x1ca9:  mov    %edi,-0x1c(%ebp)
0870809c +0x1cac:  mov    %ecx,-0x2c(%ebp)
0870809f +0x1caf:  add    %esi,%ecx
087080a1 +0x1cb1:  cmp    0x4(%edi),%ecx
087080a4 +0x1cb4:  mov    %ecx,-0x20(%ebp)
087080a7 +0x1cb7:  ja     087080b0 <+0x1cc0>
087080a9 +0x1cb9:  mov    0x8(%edi),%edi
087080ac +0x1cbc:  test   %edi,%edi
087080ae +0x1cbe:  jle    087080cc <+0x1cdc>
087080b0 +0x1cc0:  mov    -0x20(%ebp),%edi
087080b3 +0x1cc3:  mov    %ebx,(%esp)
087080b6 +0x1cc6:  mov    %edi,0x4(%esp)
087080ba +0x1cca:  call   08707d10 <+0x1920>
087080bf +0x1ccf:  mov    0xc(%ebp),%eax
087080c2 +0x1cd2:  mov    (%eax),%edx
087080c4 +0x1cd4:  mov    (%ebx),%eax
087080c6 +0x1cd6:  mov    -0xc(%eax),%ecx
087080c9 +0x1cd9:  mov    %ecx,-0x2c(%ebp)
087080cc +0x1cdc:  mov    0x10(%ebp),%edi
087080cf +0x1cdf:  add    -0x2c(%ebp),%eax
087080d2 +0x1ce2:  cmp    $0x1,%esi
087080d5 +0x1ce5:  lea    (%edx,%edi,1),%edi
087080d8 +0x1ce8:  je     08708110 <+0x1d20>
087080da +0x1cea:  mov    %esi,0x8(%esp)
087080de +0x1cee:  mov    %edi,0x4(%esp)
087080e2 +0x1cf2:  mov    %eax,(%esp)
087080e5 +0x1cf5:  call   0807d8a0 <_init+0x198>
087080ea +0x1cfa:  mov    (%ebx),%edx
087080ec +0x1cfc:  lea    -0xc(%edx),%eax
087080ef +0x1cff:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%eax
087080f4 +0x1d04:  jne    08708117 <+0x1d27>
087080f6 +0x1d06:  mov    %ebx,%eax
087080f8 +0x1d08:  mov    -0x8(%ebp),%esi
087080fb +0x1d0b:  mov    -0xc(%ebp),%ebx
087080fe +0x1d0e:  mov    -0x4(%ebp),%edi
08708101 +0x1d11:  mov    %ebp,%esp
08708103 +0x1d13:  pop    %ebp
08708104 +0x1d14:  ret
08708105 +0x1d15:  lea    0x0(%esi),%esi
08708108 +0x1d18:  mov    %eax,%esi
0870810a +0x1d1a:  jmp    0870808d <+0x1c9d>
0870810c +0x1d1c:  lea    0x0(%esi,%eiz,1),%esi
08708110 +0x1d20:  movzbl (%edi),%edx
08708113 +0x1d23:  mov    %dl,(%eax)
08708115 +0x1d25:  jmp    087080ea <+0x1cfa>
08708117 +0x1d27:  mov    -0x20(%ebp),%edi
0870811a +0x1d2a:  movl   $0x0,0x8(%eax)
08708121 +0x1d31:  mov    %edi,-0xc(%edx)
08708124 +0x1d34:  movb   $0x0,0xc(%eax,%edi,1)
08708129 +0x1d39:  jmp    087080f6 <+0x1d06>
0870812b +0x1d3b:  movl   $"basic_string::append",(%esp)
08708132 +0x1d42:  call   086d9b70 <_ZSt20__throw_out_of_rangePKc>  ; std::__throw_out_of_range(char const*)
08708137 +0x1d47:  nop
08708138 +0x1d48:  nop
08708139 +0x1d49:  nop
0870813a +0x1d4a:  nop
0870813b +0x1d4b:  nop
0870813c +0x1d4c:  nop
0870813d +0x1d4d:  nop
0870813e +0x1d4e:  nop
0870813f +0x1d4f:  nop
08708140 +0x1d50:  push   %ebp
08708141 +0x1d51:  mov    %esp,%ebp
08708143 +0x1d53:  sub    $0x58,%esp
08708146 +0x1d56:  mov    0xc(%ebp),%eax
08708149 +0x1d59:  mov    %ebx,-0xc(%ebp)
0870814c +0x1d5c:  mov    0x8(%ebp),%ebx
0870814f +0x1d5f:  mov    %esi,-0x8(%ebp)
08708152 +0x1d62:  mov    %edi,-0x4(%ebp)
08708155 +0x1d65:  mov    (%eax),%edx
08708157 +0x1d67:  mov    -0xc(%edx),%esi
0870815a +0x1d6a:  test   %esi,%esi
0870815c +0x1d6c:  je     087081bd <+0x1dcd>
0870815e +0x1d6e:  mov    (%ebx),%eax
08708160 +0x1d70:  mov    -0xc(%eax),%edi
08708163 +0x1d73:  lea    -0xc(%eax),%ecx
08708166 +0x1d76:  mov    %ecx,-0x2c(%ebp)
08708169 +0x1d79:  mov    %edi,-0x3c(%ebp)
0870816c +0x1d7c:  add    %esi,%edi
0870816e +0x1d7e:  cmp    0x4(%ecx),%edi
08708171 +0x1d81:  mov    %edi,-0x1c(%ebp)
08708174 +0x1d84:  ja     0870817d <+0x1d8d>
08708176 +0x1d86:  mov    0x8(%ecx),%ecx
08708179 +0x1d89:  test   %ecx,%ecx
0870817b +0x1d8b:  jle    08708199 <+0x1da9>
0870817d +0x1d8d:  mov    -0x1c(%ebp),%eax
08708180 +0x1d90:  mov    %ebx,(%esp)
08708183 +0x1d93:  mov    %eax,0x4(%esp)
08708187 +0x1d97:  call   08707d10 <+0x1920>
0870818c +0x1d9c:  mov    (%ebx),%eax
0870818e +0x1d9e:  mov    0xc(%ebp),%ecx
08708191 +0x1da1:  mov    -0xc(%eax),%edi
08708194 +0x1da4:  mov    (%ecx),%edx
08708196 +0x1da6:  mov    %edi,-0x3c(%ebp)
08708199 +0x1da9:  add    -0x3c(%ebp),%eax
0870819c +0x1dac:  cmp    $0x1,%esi
0870819f +0x1daf:  je     087081d0 <+0x1de0>
087081a1 +0x1db1:  mov    %esi,0x8(%esp)
087081a5 +0x1db5:  mov    %edx,0x4(%esp)
087081a9 +0x1db9:  mov    %eax,(%esp)
087081ac +0x1dbc:  call   0807d8a0 <_init+0x198>
087081b1 +0x1dc1:  mov    (%ebx),%edx
087081b3 +0x1dc3:  lea    -0xc(%edx),%eax
087081b6 +0x1dc6:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%eax
087081bb +0x1dcb:  jne    087081d7 <+0x1de7>
087081bd +0x1dcd:  mov    %ebx,%eax
087081bf +0x1dcf:  mov    -0x8(%ebp),%esi
087081c2 +0x1dd2:  mov    -0xc(%ebp),%ebx
087081c5 +0x1dd5:  mov    -0x4(%ebp),%edi
087081c8 +0x1dd8:  mov    %ebp,%esp
087081ca +0x1dda:  pop    %ebp
087081cb +0x1ddb:  ret
087081cc +0x1ddc:  lea    0x0(%esi,%eiz,1),%esi
087081d0 +0x1de0:  movzbl (%edx),%edx
087081d3 +0x1de3:  mov    %dl,(%eax)
087081d5 +0x1de5:  jmp    087081b1 <+0x1dc1>
087081d7 +0x1de7:  mov    -0x1c(%ebp),%ecx
087081da +0x1dea:  movl   $0x0,0x8(%eax)
087081e1 +0x1df1:  mov    %ecx,-0xc(%edx)
087081e4 +0x1df4:  movb   $0x0,0xc(%eax,%ecx,1)
087081e9 +0x1df9:  jmp    087081bd <+0x1dcd>
087081eb +0x1dfb:  nop
087081ec +0x1dfc:  nop
087081ed +0x1dfd:  nop
087081ee +0x1dfe:  nop
087081ef +0x1dff:  nop
087081f0 +0x1e00:  push   %ebp
087081f1 +0x1e01:  mov    %esp,%ebp
087081f3 +0x1e03:  sub    $0x8,%esp
087081f6 +0x1e06:  leave
087081f7 +0x1e07:  jmp    08708140 <+0x1d50>
087081fc +0x1e0c:  nop
087081fd +0x1e0d:  nop
087081fe +0x1e0e:  nop
087081ff +0x1e0f:  nop
08708200 +0x1e10:  push   %ebp
08708201 +0x1e11:  mov    %esp,%ebp
08708203 +0x1e13:  sub    $0x28,%esp
08708206 +0x1e16:  mov    %ebx,-0xc(%ebp)
08708209 +0x1e19:  mov    0x8(%ebp),%ebx
0870820c +0x1e1c:  mov    %esi,-0x8(%ebp)
0870820f +0x1e1f:  mov    0x10(%ebp),%esi
08708212 +0x1e22:  mov    %edi,-0x4(%ebp)
08708215 +0x1e25:  movzbl 0xc(%ebp),%edi
08708219 +0x1e29:  movl   $&_ZNSs4_Rep20_S_empty_rep_storageE+0xc,(%ebx)
0870821f +0x1e2f:  mov    (%esi),%eax
08708221 +0x1e31:  mov    -0xc(%eax),%eax
08708224 +0x1e34:  mov    %ebx,(%esp)
08708227 +0x1e37:  add    $0x1,%eax
0870822a +0x1e3a:  mov    %eax,0x4(%esp)
0870822e +0x1e3e:  call   08707d10 <+0x1920>
08708233 +0x1e43:  mov    %edi,%eax
08708235 +0x1e45:  movsbl %al,%edi
08708238 +0x1e48:  mov    %edi,0x8(%esp)
0870823c +0x1e4c:  movl   $0x1,0x4(%esp)
08708244 +0x1e54:  mov    %ebx,(%esp)
08708247 +0x1e57:  call   08707e40 <+0x1a50>
0870824c +0x1e5c:  mov    %esi,0x4(%esp)
08708250 +0x1e60:  mov    %ebx,(%esp)
08708253 +0x1e63:  call   08708140 <+0x1d50>
08708258 +0x1e68:  mov    %ebx,%eax
0870825a +0x1e6a:  mov    -0x8(%ebp),%esi
0870825d +0x1e6d:  mov    -0xc(%ebp),%ebx
08708260 +0x1e70:  mov    -0x4(%ebp),%edi
08708263 +0x1e73:  mov    %ebp,%esp
08708265 +0x1e75:  pop    %ebp
08708266 +0x1e76:  ret    $0x4
08708269 +0x1e79:  mov    %eax,%esi
0870826b +0x1e7b:  mov    %ebx,(%esp)
0870826e +0x1e7e:  call   08707be0 <+0x17f0>
08708273 +0x1e83:  mov    %esi,(%esp)
08708276 +0x1e86:  call   08ae3750 <_Unwind_Resume>
0870827b +0x1e8b:  nop
0870827c +0x1e8c:  nop
0870827d +0x1e8d:  nop
0870827e +0x1e8e:  nop
0870827f +0x1e8f:  nop
08708280 +0x1e90:  push   %ebp
08708281 +0x1e91:  mov    %esp,%ebp
08708283 +0x1e93:  sub    $0x28,%esp
08708286 +0x1e96:  mov    0xc(%ebp),%eax
08708289 +0x1e99:  mov    %ebx,-0xc(%ebp)
0870828c +0x1e9c:  mov    0x8(%ebp),%ebx
0870828f +0x1e9f:  mov    %esi,-0x8(%ebp)
08708292 +0x1ea2:  mov    %edi,-0x4(%ebp)
08708295 +0x1ea5:  mov    0x10(%ebp),%edi
08708298 +0x1ea8:  mov    %eax,(%esp)
0870829b +0x1eab:  call   0807e3b0 <_init+0xca8>
087082a0 +0x1eb0:  movl   $&_ZNSs4_Rep20_S_empty_rep_storageE+0xc,(%ebx)
087082a6 +0x1eb6:  mov    %eax,%esi
087082a8 +0x1eb8:  mov    (%edi),%eax
087082aa +0x1eba:  mov    -0xc(%eax),%eax
087082ad +0x1ebd:  mov    %ebx,(%esp)
087082b0 +0x1ec0:  lea    (%esi,%eax,1),%eax
087082b3 +0x1ec3:  mov    %eax,0x4(%esp)
087082b7 +0x1ec7:  call   08707d10 <+0x1920>
087082bc +0x1ecc:  mov    0xc(%ebp),%eax
087082bf +0x1ecf:  mov    %esi,0x8(%esp)
087082c3 +0x1ed3:  mov    %ebx,(%esp)
087082c6 +0x1ed6:  mov    %eax,0x4(%esp)
087082ca +0x1eda:  call   08707f10 <+0x1b20>
087082cf +0x1edf:  mov    %edi,0x4(%esp)
087082d3 +0x1ee3:  mov    %ebx,(%esp)
087082d6 +0x1ee6:  call   08708140 <+0x1d50>
087082db +0x1eeb:  mov    %ebx,%eax
087082dd +0x1eed:  mov    -0x8(%ebp),%esi
087082e0 +0x1ef0:  mov    -0xc(%ebp),%ebx
087082e3 +0x1ef3:  mov    -0x4(%ebp),%edi
087082e6 +0x1ef6:  mov    %ebp,%esp
087082e8 +0x1ef8:  pop    %ebp
087082e9 +0x1ef9:  ret    $0x4
087082ec +0x1efc:  mov    %eax,%esi
087082ee +0x1efe:  mov    %ebx,(%esp)
087082f1 +0x1f01:  call   08707be0 <+0x17f0>
087082f6 +0x1f06:  mov    %esi,(%esp)
087082f9 +0x1f09:  call   08ae3750 <_Unwind_Resume>
087082fe +0x1f0e:  nop
087082ff +0x1f0f:  nop
08708300 +0x1f10:  push   %ebp
08708301 +0x1f11:  mov    %esp,%ebp
08708303 +0x1f13:  sub    $0x28,%esp
08708306 +0x1f16:  mov    %ebx,-0xc(%ebp)
08708309 +0x1f19:  mov    0x8(%ebp),%ebx
0870830c +0x1f1c:  mov    %esi,-0x8(%ebp)
0870830f +0x1f1f:  mov    %edi,-0x4(%ebp)
08708312 +0x1f22:  movzbl 0xc(%ebp),%edi
08708316 +0x1f26:  mov    (%ebx),%eax
08708318 +0x1f28:  mov    -0xc(%eax),%edx
0870831b +0x1f2b:  lea    -0xc(%eax),%ecx
0870831e +0x1f2e:  lea    0x1(%edx),%esi
08708321 +0x1f31:  cmp    0x4(%ecx),%esi
08708324 +0x1f34:  ja     0870832d <+0x1f3d>
08708326 +0x1f36:  mov    0x8(%ecx),%ecx
08708329 +0x1f39:  test   %ecx,%ecx
0870832b +0x1f3b:  jle    0870833e <+0x1f4e>
0870832d +0x1f3d:  mov    %esi,0x4(%esp)
08708331 +0x1f41:  mov    %ebx,(%esp)
08708334 +0x1f44:  call   08707d10 <+0x1920>
08708339 +0x1f49:  mov    (%ebx),%eax
0870833b +0x1f4b:  mov    -0xc(%eax),%edx
0870833e +0x1f4e:  mov    %edi,%ecx
08708340 +0x1f50:  mov    %cl,(%eax,%edx,1)
08708343 +0x1f53:  mov    (%ebx),%edx
08708345 +0x1f55:  lea    -0xc(%edx),%eax
08708348 +0x1f58:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%eax
0870834d +0x1f5d:  jne    0870835e <+0x1f6e>
0870834f +0x1f5f:  mov    %ebx,%eax
08708351 +0x1f61:  mov    -0x8(%ebp),%esi
08708354 +0x1f64:  mov    -0xc(%ebp),%ebx
08708357 +0x1f67:  mov    -0x4(%ebp),%edi
0870835a +0x1f6a:  mov    %ebp,%esp
0870835c +0x1f6c:  pop    %ebp
0870835d +0x1f6d:  ret
0870835e +0x1f6e:  movl   $0x0,0x8(%eax)
08708365 +0x1f75:  mov    %esi,-0xc(%edx)
08708368 +0x1f78:  movb   $0x0,0xc(%eax,%esi,1)
0870836d +0x1f7d:  jmp    0870834f <+0x1f5f>
0870836f +0x1f7f:  nop
08708370 +0x1f80:  push   %ebp
08708371 +0x1f81:  mov    %esp,%ebp
08708373 +0x1f83:  sub    $0x48,%esp
08708376 +0x1f86:  mov    %esi,-0x8(%ebp)
08708379 +0x1f89:  mov    0x8(%ebp),%esi
0870837c +0x1f8c:  mov    %edi,-0x4(%ebp)
0870837f +0x1f8f:  mov    0x14(%ebp),%edi
08708382 +0x1f92:  mov    %ebx,-0xc(%ebp)
08708385 +0x1f95:  sub    0x10(%ebp),%edi
08708388 +0x1f98:  mov    (%esi),%edx
0870838a +0x1f9a:  mov    -0xc(%edx),%ebx
0870838d +0x1f9d:  lea    -0xc(%edx),%eax
08708390 +0x1fa0:  mov    0x4(%eax),%ecx
08708393 +0x1fa3:  add    %ebx,%edi
08708395 +0x1fa5:  sub    0xc(%ebp),%ebx
08708398 +0x1fa8:  sub    0x10(%ebp),%ebx
0870839b +0x1fab:  cmp    %ecx,%edi
0870839d +0x1fad:  jbe    087083f8 <+0x2008>
0870839f +0x1faf:  lea    -0x19(%ebp),%eax
087083a2 +0x1fb2:  mov    %eax,0x8(%esp)
087083a6 +0x1fb6:  mov    %ecx,0x4(%esp)
087083aa +0x1fba:  mov    %edi,(%esp)
087083ad +0x1fbd:  call   087069b0 <+0x5c0>
087083b2 +0x1fc2:  lea    0xc(%eax),%edx
087083b5 +0x1fc5:  mov    %eax,-0x2c(%ebp)
087083b8 +0x1fc8:  mov    0xc(%ebp),%eax
087083bb +0x1fcb:  mov    %edx,-0x30(%ebp)
087083be +0x1fce:  test   %eax,%eax
087083c0 +0x1fd0:  jne    08708438 <+0x2048>
087083c2 +0x1fd2:  test   %ebx,%ebx
087083c4 +0x1fd4:  jne    08708410 <+0x2020>
087083c6 +0x1fd6:  mov    (%esi),%eax
087083c8 +0x1fd8:  mov    $&_ZNSs4_Rep20_S_empty_rep_storageE,%ebx
087083cd +0x1fdd:  sub    $0xc,%eax
087083d0 +0x1fe0:  cmp    %ebx,%eax
087083d2 +0x1fe2:  jne    087084c7 <+0x20d7>
087083d8 +0x1fe8:  mov    -0x30(%ebp),%ecx
087083db +0x1feb:  mov    -0x2c(%ebp),%eax
087083de +0x1fee:  mov    %ecx,(%esi)
087083e0 +0x1ff0:  cmp    %eax,%ebx
087083e2 +0x1ff2:  jne    087084b4 <+0x20c4>
087083e8 +0x1ff8:  mov    -0xc(%ebp),%ebx
087083eb +0x1ffb:  mov    -0x8(%ebp),%esi
087083ee +0x1ffe:  mov    -0x4(%ebp),%edi
087083f1 +0x2001:  mov    %ebp,%esp
087083f3 +0x2003:  pop    %ebp
087083f4 +0x2004:  ret
087083f5 +0x2005:  lea    0x0(%esi),%esi
087083f8 +0x2008:  cmpl   $0x0,0x8(%eax)
087083fc +0x200c:  jg     0870839f <+0x1faf>
087083fe +0x200e:  mov    0x14(%ebp),%ecx
08708401 +0x2011:  cmp    %ecx,0x10(%ebp)
08708404 +0x2014:  jne    08708468 <+0x2078>
08708406 +0x2016:  mov    $&_ZNSs4_Rep20_S_empty_rep_storageE,%ebx
0870840b +0x201b:  jmp    087083e0 <+0x1ff0>
0870840d +0x201d:  lea    0x0(%esi),%esi
08708410 +0x2020:  mov    0x10(%ebp),%eax
08708413 +0x2023:  mov    0x14(%ebp),%edx
08708416 +0x2026:  add    0xc(%ebp),%eax
08708419 +0x2029:  add    0xc(%ebp),%edx
0870841c +0x202c:  add    (%esi),%eax
0870841e +0x202e:  add    -0x30(%ebp),%edx
08708421 +0x2031:  cmp    $0x1,%ebx
08708424 +0x2034:  je     08708458 <+0x2068>
08708426 +0x2036:  mov    %ebx,0x8(%esp)
0870842a +0x203a:  mov    %eax,0x4(%esp)
0870842e +0x203e:  mov    %edx,(%esp)
08708431 +0x2041:  call   0807d8a0 <_init+0x198>
08708436 +0x2046:  jmp    087083c6 <+0x1fd6>
08708438 +0x2048:  mov    0xc(%ebp),%ecx
0870843b +0x204b:  mov    %ecx,0x8(%esp)
0870843f +0x204f:  mov    (%esi),%eax
08708441 +0x2051:  mov    %edx,(%esp)
08708444 +0x2054:  mov    %eax,0x4(%esp)
08708448 +0x2058:  call   08707130 <+0xd40>
0870844d +0x205d:  jmp    087083c2 <+0x1fd2>
08708452 +0x2062:  lea    0x0(%esi),%esi
08708458 +0x2068:  movzbl (%eax),%eax
0870845b +0x206b:  mov    %al,(%edx)
0870845d +0x206d:  jmp    087083c6 <+0x1fd6>
08708462 +0x2072:  lea    0x0(%esi),%esi
08708468 +0x2078:  test   %ebx,%ebx
0870846a +0x207a:  je     08708406 <+0x2016>
0870846c +0x207c:  mov    0x10(%ebp),%eax
0870846f +0x207f:  mov    0x14(%ebp),%ecx
08708472 +0x2082:  add    0xc(%ebp),%eax
08708475 +0x2085:  add    0xc(%ebp),%ecx
08708478 +0x2088:  lea    (%edx,%eax,1),%eax
0870847b +0x208b:  add    %ecx,%edx
0870847d +0x208d:  cmp    $0x1,%ebx
08708480 +0x2090:  je     087084a0 <+0x20b0>
08708482 +0x2092:  mov    %ebx,0x8(%esp)
08708486 +0x2096:  mov    %eax,0x4(%esp)
0870848a +0x209a:  mov    %edx,(%esp)
0870848d +0x209d:  call   0807d880 <_init+0x178>
08708492 +0x20a2:  mov    (%esi),%eax
08708494 +0x20a4:  sub    $0xc,%eax
08708497 +0x20a7:  jmp    08708406 <+0x2016>
0870849c +0x20ac:  lea    0x0(%esi,%eiz,1),%esi
087084a0 +0x20b0:  movzbl (%eax),%eax
087084a3 +0x20b3:  mov    $&_ZNSs4_Rep20_S_empty_rep_storageE,%ebx
087084a8 +0x20b8:  mov    %al,(%edx)
087084aa +0x20ba:  mov    (%esi),%eax
087084ac +0x20bc:  sub    $0xc,%eax
087084af +0x20bf:  jmp    087083e0 <+0x1ff0>
087084b4 +0x20c4:  movl   $0x0,0x8(%eax)
087084bb +0x20cb:  mov    %edi,(%eax)
087084bd +0x20cd:  movb   $0x0,0xc(%eax,%edi,1)
087084c2 +0x20d2:  jmp    087083e8 <+0x1ff8>
087084c7 +0x20d7:  mov    $&data#bb92cc41(.plt),%edx
087084cc +0x20dc:  test   %edx,%edx
087084ce +0x20de:  je     087084fc <+0x210c>
087084d0 +0x20e0:  or     $0xffffffff,%edx
087084d3 +0x20e3:  lock xadd %edx,0x8(%eax)
087084d8 +0x20e8:  test   %edx,%edx
087084da +0x20ea:  jg     087083d8 <+0x1fe8>
087084e0 +0x20f0:  lea    -0x19(%ebp),%edx
087084e3 +0x20f3:  mov    %edx,0x4(%esp)
087084e7 +0x20f7:  mov    %eax,(%esp)
087084ea +0x20fa:  call   08706920 <+0x530>
087084ef +0x20ff:  jmp    087083d8 <+0x1fe8>
087084f4 +0x2104:  mov    %eax,(%esp)
087084f7 +0x2107:  call   08ae3750 <_Unwind_Resume>
087084fc +0x210c:  mov    0x8(%eax),%edx
087084ff +0x210f:  lea    -0x1(%edx),%ecx
08708502 +0x2112:  mov    %ecx,0x8(%eax)
08708505 +0x2115:  jmp    087084d8 <+0x20e8>
08708507 +0x2117:  nop
08708508 +0x2118:  nop
08708509 +0x2119:  nop
0870850a +0x211a:  nop
0870850b +0x211b:  nop
0870850c +0x211c:  nop
0870850d +0x211d:  nop
0870850e +0x211e:  nop
0870850f +0x211f:  nop
08708510 +0x2120:  push   %ebp
08708511 +0x2121:  mov    %esp,%ebp
08708513 +0x2123:  sub    $0x28,%esp
08708516 +0x2126:  mov    %ebx,-0xc(%ebp)
08708519 +0x2129:  mov    0x10(%ebp),%eax
0870851c +0x212c:  mov    %esi,-0x8(%ebp)
0870851f +0x212f:  mov    0x8(%ebp),%ebx
08708522 +0x2132:  mov    0x18(%ebp),%esi
08708525 +0x2135:  mov    %edi,-0x4(%ebp)
08708528 +0x2138:  mov    0xc(%ebp),%edi
0870852b +0x213b:  mov    %eax,0x8(%esp)
0870852f +0x213f:  mov    %ebx,(%esp)
08708532 +0x2142:  mov    %esi,0xc(%esp)
08708536 +0x2146:  mov    %edi,0x4(%esp)
0870853a +0x214a:  call   08708370 <+0x1f80>
0870853f +0x214f:  test   %esi,%esi
08708541 +0x2151:  jne    08708558 <+0x2168>
08708543 +0x2153:  mov    %ebx,%eax
08708545 +0x2155:  mov    -0x8(%ebp),%esi
08708548 +0x2158:  mov    -0xc(%ebp),%ebx
0870854b +0x215b:  mov    -0x4(%ebp),%edi
0870854e +0x215e:  mov    %ebp,%esp
08708550 +0x2160:  pop    %ebp
08708551 +0x2161:  ret
08708552 +0x2162:  lea    0x0(%esi),%esi
08708558 +0x2168:  add    (%ebx),%edi
0870855a +0x216a:  cmp    $0x1,%esi
0870855d +0x216d:  je     08708588 <+0x2198>
0870855f +0x216f:  mov    0x14(%ebp),%eax
08708562 +0x2172:  mov    %esi,0x8(%esp)
08708566 +0x2176:  mov    %edi,(%esp)
08708569 +0x2179:  mov    %eax,0x4(%esp)
0870856d +0x217d:  call   0807d8a0 <_init+0x198>
08708572 +0x2182:  mov    %ebx,%eax
08708574 +0x2184:  mov    -0x8(%ebp),%esi
08708577 +0x2187:  mov    -0xc(%ebp),%ebx
0870857a +0x218a:  mov    -0x4(%ebp),%edi
0870857d +0x218d:  mov    %ebp,%esp
0870857f +0x218f:  pop    %ebp
08708580 +0x2190:  ret
08708581 +0x2191:  lea    0x0(%esi,%eiz,1),%esi
08708588 +0x2198:  mov    0x14(%ebp),%edx
0870858b +0x219b:  movzbl (%edx),%eax
0870858e +0x219e:  mov    %al,(%edi)
08708590 +0x21a0:  mov    %ebx,%eax
08708592 +0x21a2:  mov    -0x8(%ebp),%esi
08708595 +0x21a5:  mov    -0xc(%ebp),%ebx
08708598 +0x21a8:  mov    -0x4(%ebp),%edi
0870859b +0x21ab:  mov    %ebp,%esp
0870859d +0x21ad:  pop    %ebp
0870859e +0x21ae:  ret
0870859f +0x21af:  nop
087085a0 +0x21b0:  push   %ebp
087085a1 +0x21b1:  mov    %esp,%ebp
087085a3 +0x21b3:  sub    $0x48,%esp
087085a6 +0x21b6:  mov    %ebx,-0xc(%ebp)
087085a9 +0x21b9:  mov    0x8(%ebp),%ebx
087085ac +0x21bc:  mov    %esi,-0x8(%ebp)
087085af +0x21bf:  mov    0xc(%ebp),%edx
087085b2 +0x21c2:  mov    %edi,-0x4(%ebp)
087085b5 +0x21c5:  cmpl   $0x3ffffffc,0x10(%ebp)
087085bc +0x21cc:  mov    (%ebx),%eax
087085be +0x21ce:  lea    -0xc(%eax),%ecx
087085c1 +0x21d1:  mov    -0xc(%eax),%edi
087085c4 +0x21d4:  ja     08708684 <+0x2294>
087085ca +0x21da:  cmp    %eax,%edx
087085cc +0x21dc:  jae    08708600 <+0x2210>
087085ce +0x21de:  mov    0x10(%ebp),%eax
087085d1 +0x21e1:  mov    %ebx,(%esp)
087085d4 +0x21e4:  mov    %edx,0xc(%esp)
087085d8 +0x21e8:  mov    %edi,0x8(%esp)
087085dc +0x21ec:  mov    %eax,0x10(%esp)
087085e0 +0x21f0:  movl   $0x0,0x4(%esp)
087085e8 +0x21f8:  call   08708510 <+0x2120>
087085ed +0x21fd:  mov    %eax,%ebx
087085ef +0x21ff:  mov    %ebx,%eax
087085f1 +0x2201:  mov    -0x8(%ebp),%esi
087085f4 +0x2204:  mov    -0xc(%ebp),%ebx
087085f7 +0x2207:  mov    -0x4(%ebp),%edi
087085fa +0x220a:  mov    %ebp,%esp
087085fc +0x220c:  pop    %ebp
087085fd +0x220d:  ret
087085fe +0x220e:  xchg   %ax,%ax
08708600 +0x2210:  lea    (%eax,%edi,1),%esi
08708603 +0x2213:  cmp    %esi,%edx
08708605 +0x2215:  ja     087085ce <+0x21de>
08708607 +0x2217:  mov    0x8(%ecx),%esi
0870860a +0x221a:  test   %esi,%esi
0870860c +0x221c:  jg     087085ce <+0x21de>
0870860e +0x221e:  mov    %edx,%edi
08708610 +0x2220:  sub    %eax,%edi
08708612 +0x2222:  cmp    %edi,0x10(%ebp)
08708615 +0x2225:  jbe    08708638 <+0x2248>
08708617 +0x2227:  test   %edi,%edi
08708619 +0x2229:  jne    08708658 <+0x2268>
0870861b +0x222b:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%ecx
08708621 +0x2231:  je     087085ef <+0x21ff>
08708623 +0x2233:  mov    0x10(%ebp),%eax
08708626 +0x2236:  movl   $0x0,0x8(%ecx)
0870862d +0x223d:  mov    %eax,(%ecx)
0870862f +0x223f:  movb   $0x0,0xc(%ecx,%eax,1)
08708634 +0x2244:  jmp    087085ef <+0x21ff>
08708636 +0x2246:  xchg   %ax,%ax
08708638 +0x2248:  cmpl   $0x1,0x10(%ebp)
0870863c +0x224c:  je     08708678 <+0x2288>
0870863e +0x224e:  mov    0x10(%ebp),%ecx
08708641 +0x2251:  mov    %edx,0x4(%esp)
08708645 +0x2255:  mov    %eax,(%esp)
08708648 +0x2258:  mov    %ecx,0x8(%esp)
0870864c +0x225c:  call   0807d8a0 <_init+0x198>
08708651 +0x2261:  mov    (%ebx),%ecx
08708653 +0x2263:  sub    $0xc,%ecx
08708656 +0x2266:  jmp    0870861b <+0x222b>
08708658 +0x2268:  cmpl   $0x1,0x10(%ebp)
0870865c +0x226c:  je     08708678 <+0x2288>
0870865e +0x226e:  mov    0x10(%ebp),%esi
08708661 +0x2271:  mov    %edx,0x4(%esp)
08708665 +0x2275:  mov    %eax,(%esp)
08708668 +0x2278:  mov    %esi,0x8(%esp)
0870866c +0x227c:  call   0807d880 <_init+0x178>
08708671 +0x2281:  mov    (%ebx),%ecx
08708673 +0x2283:  sub    $0xc,%ecx
08708676 +0x2286:  jmp    0870861b <+0x222b>
08708678 +0x2288:  movzbl (%edx),%edx
0870867b +0x228b:  mov    %dl,(%eax)
0870867d +0x228d:  mov    (%ebx),%ecx
0870867f +0x228f:  sub    $0xc,%ecx
08708682 +0x2292:  jmp    0870861b <+0x222b>
08708684 +0x2294:  movl   $"basic_string::assign",(%esp)
0870868b +0x229b:  call   086d9c40 <_ZSt20__throw_length_errorPKc>  ; std::__throw_length_error(char const*)
08708690 +0x22a0:  push   %ebp
08708691 +0x22a1:  mov    %esp,%ebp
08708693 +0x22a3:  push   %ebx
08708694 +0x22a4:  sub    $0x14,%esp
08708697 +0x22a7:  mov    0xc(%ebp),%ebx
0870869a +0x22aa:  mov    %ebx,(%esp)
0870869d +0x22ad:  call   0807e3b0 <_init+0xca8>
087086a2 +0x22b2:  mov    %ebx,0x4(%esp)
087086a6 +0x22b6:  mov    %eax,0x8(%esp)
087086aa +0x22ba:  mov    0x8(%ebp),%eax
087086ad +0x22bd:  mov    %eax,(%esp)
087086b0 +0x22c0:  call   087085a0 <+0x21b0>
087086b5 +0x22c5:  add    $0x14,%esp
087086b8 +0x22c8:  pop    %ebx
087086b9 +0x22c9:  pop    %ebp
087086ba +0x22ca:  ret
087086bb +0x22cb:  nop
087086bc +0x22cc:  nop
087086bd +0x22cd:  nop
087086be +0x22ce:  nop
087086bf +0x22cf:  nop
087086c0 +0x22d0:  push   %ebp
087086c1 +0x22d1:  mov    %esp,%ebp
087086c3 +0x22d3:  sub    $0x18,%esp
087086c6 +0x22d6:  mov    0xc(%ebp),%edx
087086c9 +0x22d9:  mov    %ebx,-0x8(%ebp)
087086cc +0x22dc:  mov    0x10(%ebp),%eax
087086cf +0x22df:  mov    %esi,-0x4(%ebp)
087086d2 +0x22e2:  mov    0x14(%ebp),%ebx
087086d5 +0x22e5:  mov    0x8(%ebp),%esi
087086d8 +0x22e8:  mov    (%edx),%ecx
087086da +0x22ea:  mov    -0xc(%ecx),%edx
087086dd +0x22ed:  cmp    %edx,%eax
087086df +0x22ef:  ja     0870870c <+0x231c>
087086e1 +0x22f1:  sub    %eax,%edx
087086e3 +0x22f3:  cmp    %ebx,%edx
087086e5 +0x22f5:  ja     08708708 <+0x2318>
087086e7 +0x22f7:  lea    (%ecx,%eax,1),%eax
087086ea +0x22fa:  mov    -0x8(%ebp),%ebx
087086ed +0x22fd:  mov    %esi,0x8(%ebp)
087086f0 +0x2300:  mov    -0x4(%ebp),%esi
087086f3 +0x2303:  mov    %edx,0x10(%ebp)
087086f6 +0x2306:  mov    %eax,0xc(%ebp)
087086f9 +0x2309:  mov    %ebp,%esp
087086fb +0x230b:  pop    %ebp
087086fc +0x230c:  jmp    087085a0 <+0x21b0>
08708701 +0x2311:  lea    0x0(%esi,%eiz,1),%esi
08708708 +0x2318:  mov    %ebx,%edx
0870870a +0x231a:  jmp    087086e7 <+0x22f7>
0870870c +0x231c:  movl   $"basic_string::assign",(%esp)
08708713 +0x2323:  call   086d9b70 <_ZSt20__throw_out_of_rangePKc>  ; std::__throw_out_of_range(char const*)
08708718 +0x2328:  nop
08708719 +0x2329:  nop
0870871a +0x232a:  nop
0870871b +0x232b:  nop
0870871c +0x232c:  nop
0870871d +0x232d:  nop
0870871e +0x232e:  nop
0870871f +0x232f:  nop
08708720 +0x2330:  push   %ebp
08708721 +0x2331:  mov    %esp,%ebp
08708723 +0x2333:  push   %ebx
08708724 +0x2334:  sub    $0x14,%esp
08708727 +0x2337:  mov    0xc(%ebp),%ebx
0870872a +0x233a:  mov    %ebx,(%esp)
0870872d +0x233d:  call   0807e3b0 <_init+0xca8>
08708732 +0x2342:  mov    %ebx,0x4(%esp)
08708736 +0x2346:  mov    %eax,0x8(%esp)
0870873a +0x234a:  mov    0x8(%ebp),%eax
0870873d +0x234d:  mov    %eax,(%esp)
08708740 +0x2350:  call   087085a0 <+0x21b0>
08708745 +0x2355:  add    $0x14,%esp
08708748 +0x2358:  pop    %ebx
08708749 +0x2359:  pop    %ebp
0870874a +0x235a:  ret
0870874b +0x235b:  nop
0870874c +0x235c:  nop
0870874d +0x235d:  nop
0870874e +0x235e:  nop
0870874f +0x235f:  nop
08708750 +0x2360:  push   %ebp
08708751 +0x2361:  mov    %esp,%ebp
08708753 +0x2363:  sub    $0x38,%esp
08708756 +0x2366:  mov    %ebx,-0xc(%ebp)
08708759 +0x2369:  mov    0x18(%ebp),%edx
0870875c +0x236c:  mov    0x8(%ebp),%ebx
0870875f +0x236f:  mov    %esi,-0x8(%ebp)
08708762 +0x2372:  mov    0x10(%ebp),%eax
08708765 +0x2375:  mov    %edi,-0x4(%ebp)
08708768 +0x2378:  mov    0x14(%ebp),%esi
0870876b +0x237b:  mov    %edx,-0x1c(%ebp)
0870876e +0x237e:  mov    0xc(%ebp),%edi
08708771 +0x2381:  mov    %dl,-0x1d(%ebp)
08708774 +0x2384:  mov    (%ebx),%edx
08708776 +0x2386:  mov    %eax,%ecx
08708778 +0x2388:  sub    -0xc(%edx),%ecx
0870877b +0x238b:  mov    %ecx,%edx
0870877d +0x238d:  add    $0x3ffffffc,%edx
08708783 +0x2393:  cmp    %edx,%esi
08708785 +0x2395:  ja     087087f5 <+0x2405>
08708787 +0x2397:  mov    %esi,0xc(%esp)
0870878b +0x239b:  mov    %eax,0x8(%esp)
0870878f +0x239f:  mov    %edi,0x4(%esp)
08708793 +0x23a3:  mov    %ebx,(%esp)
08708796 +0x23a6:  call   08708370 <+0x1f80>
0870879b +0x23ab:  test   %esi,%esi
0870879d +0x23ad:  jne    087087b0 <+0x23c0>
0870879f +0x23af:  mov    %ebx,%eax
087087a1 +0x23b1:  mov    -0x8(%ebp),%esi
087087a4 +0x23b4:  mov    -0xc(%ebp),%ebx
087087a7 +0x23b7:  mov    -0x4(%ebp),%edi
087087aa +0x23ba:  mov    %ebp,%esp
087087ac +0x23bc:  pop    %ebp
087087ad +0x23bd:  ret
087087ae +0x23be:  xchg   %ax,%ax
087087b0 +0x23c0:  add    (%ebx),%edi
087087b2 +0x23c2:  cmp    $0x1,%esi
087087b5 +0x23c5:  je     087087e0 <+0x23f0>
087087b7 +0x23c7:  movsbl -0x1d(%ebp),%eax
087087bb +0x23cb:  mov    %esi,0x8(%esp)
087087bf +0x23cf:  mov    %edi,(%esp)
087087c2 +0x23d2:  mov    %eax,0x4(%esp)
087087c6 +0x23d6:  call   0807dcc0 <_init+0x5b8>
087087cb +0x23db:  mov    %ebx,%eax
087087cd +0x23dd:  mov    -0x8(%ebp),%esi
087087d0 +0x23e0:  mov    -0xc(%ebp),%ebx
087087d3 +0x23e3:  mov    -0x4(%ebp),%edi
087087d6 +0x23e6:  mov    %ebp,%esp
087087d8 +0x23e8:  pop    %ebp
087087d9 +0x23e9:  ret
087087da +0x23ea:  lea    0x0(%esi),%esi
087087e0 +0x23f0:  movzbl -0x1c(%ebp),%eax
087087e4 +0x23f4:  mov    %al,(%edi)
087087e6 +0x23f6:  mov    %ebx,%eax
087087e8 +0x23f8:  mov    -0x8(%ebp),%esi
087087eb +0x23fb:  mov    -0xc(%ebp),%ebx
087087ee +0x23fe:  mov    -0x4(%ebp),%edi
087087f1 +0x2401:  mov    %ebp,%esp
087087f3 +0x2403:  pop    %ebp
087087f4 +0x2404:  ret
087087f5 +0x2405:  movl   $"basic_string::_M_replace_aux",(%esp)
087087fc +0x240c:  call   086d9c40 <_ZSt20__throw_length_errorPKc>  ; std::__throw_length_error(char const*)
08708801 +0x2411:  nop
08708802 +0x2412:  nop
08708803 +0x2413:  nop
08708804 +0x2414:  nop
08708805 +0x2415:  nop
08708806 +0x2416:  nop
08708807 +0x2417:  nop
08708808 +0x2418:  nop
08708809 +0x2419:  nop
0870880a +0x241a:  nop
0870880b +0x241b:  nop
0870880c +0x241c:  nop
0870880d +0x241d:  nop
0870880e +0x241e:  nop
0870880f +0x241f:  nop
08708810 +0x2420:  push   %ebp
08708811 +0x2421:  mov    %esp,%ebp
08708813 +0x2423:  push   %ebx
08708814 +0x2424:  sub    $0x4,%esp
08708817 +0x2427:  mov    0xc(%ebp),%ecx
0870881a +0x242a:  mov    0x10(%ebp),%eax
0870881d +0x242d:  mov    0x8(%ebp),%edx
08708820 +0x2430:  movsbl 0x18(%ebp),%ebx
08708824 +0x2434:  sub    %ecx,%eax
08708826 +0x2436:  mov    %eax,0x10(%ebp)
08708829 +0x2439:  sub    (%edx),%ecx
0870882b +0x243b:  mov    %ebx,0x18(%ebp)
0870882e +0x243e:  mov    %ecx,0xc(%ebp)
08708831 +0x2441:  add    $0x4,%esp
08708834 +0x2444:  pop    %ebx
08708835 +0x2445:  pop    %ebp
08708836 +0x2446:  jmp    08708750 <+0x2360>
0870883b +0x244b:  nop
0870883c +0x244c:  nop
0870883d +0x244d:  nop
0870883e +0x244e:  nop
0870883f +0x244f:  nop
08708840 +0x2450:  push   %ebp
08708841 +0x2451:  mov    %esp,%ebp
08708843 +0x2453:  sub    $0x38,%esp
08708846 +0x2456:  mov    0x10(%ebp),%edx
08708849 +0x2459:  mov    0x8(%ebp),%ecx
0870884c +0x245c:  mov    %esi,-0x8(%ebp)
0870884f +0x245f:  mov    0xc(%ebp),%eax
08708852 +0x2462:  mov    %edi,-0x4(%ebp)
08708855 +0x2465:  mov    0x14(%ebp),%esi
08708858 +0x2468:  mov    %ebx,-0xc(%ebp)
0870885b +0x246b:  movzbl 0x18(%ebp),%edi
0870885f +0x246f:  mov    %edx,-0x1c(%ebp)
08708862 +0x2472:  mov    (%ecx),%edx
08708864 +0x2474:  mov    -0xc(%edx),%edx
08708867 +0x2477:  cmp    %edx,%eax
08708869 +0x2479:  ja     0870889d <+0x24ad>
0870886b +0x247b:  sub    %eax,%edx
0870886d +0x247d:  mov    %edi,%ebx
0870886f +0x247f:  cmp    -0x1c(%ebp),%edx
08708872 +0x2482:  movsbl %bl,%edi
08708875 +0x2485:  mov    %edi,0x18(%ebp)
08708878 +0x2488:  mov    %esi,0x14(%ebp)
0870887b +0x248b:  ja     08708898 <+0x24a8>
0870887d +0x248d:  mov    %edx,0x10(%ebp)
08708880 +0x2490:  mov    -0xc(%ebp),%ebx
08708883 +0x2493:  mov    %eax,0xc(%ebp)
08708886 +0x2496:  mov    -0x8(%ebp),%esi
08708889 +0x2499:  mov    %ecx,0x8(%ebp)
0870888c +0x249c:  mov    -0x4(%ebp),%edi
0870888f +0x249f:  mov    %ebp,%esp
08708891 +0x24a1:  pop    %ebp
08708892 +0x24a2:  jmp    08708750 <+0x2360>
08708897 +0x24a7:  nop
08708898 +0x24a8:  mov    -0x1c(%ebp),%edx
0870889b +0x24ab:  jmp    0870887d <+0x248d>
0870889d +0x24ad:  movl   $"basic_string::replace",(%esp)
087088a4 +0x24b4:  call   086d9b70 <_ZSt20__throw_out_of_rangePKc>  ; std::__throw_out_of_range(char const*)
087088a9 +0x24b9:  nop
087088aa +0x24ba:  nop
087088ab +0x24bb:  nop
087088ac +0x24bc:  nop
087088ad +0x24bd:  nop
087088ae +0x24be:  nop
087088af +0x24bf:  nop
087088b0 +0x24c0:  push   %ebp
087088b1 +0x24c1:  mov    %esp,%ebp
087088b3 +0x24c3:  sub    $0x38,%esp
087088b6 +0x24c6:  mov    %esi,-0x8(%ebp)
087088b9 +0x24c9:  mov    0xc(%ebp),%esi
087088bc +0x24cc:  mov    %ebx,-0xc(%ebp)
087088bf +0x24cf:  movsbl 0x14(%ebp),%eax
087088c3 +0x24d3:  mov    0x10(%ebp),%ebx
087088c6 +0x24d6:  mov    %edi,-0x4(%ebp)
087088c9 +0x24d9:  mov    0x8(%ebp),%edi
087088cc +0x24dc:  sub    (%esi),%ebx
087088ce +0x24de:  mov    %esi,(%esp)
087088d1 +0x24e1:  mov    %eax,0x10(%esp)
087088d5 +0x24e5:  mov    %ebx,0x4(%esp)
087088d9 +0x24e9:  movl   $0x1,0xc(%esp)
087088e1 +0x24f1:  movl   $0x0,0x8(%esp)
087088e9 +0x24f9:  call   08708750 <+0x2360>
087088ee +0x24fe:  mov    (%esi),%eax
087088f0 +0x2500:  lea    (%eax,%ebx,1),%ebx
087088f3 +0x2503:  movl   $0xffffffff,-0x4(%eax)
087088fa +0x250a:  mov    %edi,%eax
087088fc +0x250c:  mov    %ebx,(%edi)
087088fe +0x250e:  mov    -0xc(%ebp),%ebx
08708901 +0x2511:  mov    -0x8(%ebp),%esi
08708904 +0x2514:  mov    -0x4(%ebp),%edi
08708907 +0x2517:  mov    %ebp,%esp
08708909 +0x2519:  pop    %ebp
0870890a +0x251a:  ret    $0x4
0870890d +0x251d:  nop
0870890e +0x251e:  nop
0870890f +0x251f:  nop
08708910 +0x2520:  push   %ebp
08708911 +0x2521:  mov    %esp,%ebp
08708913 +0x2523:  push   %ebx
08708914 +0x2524:  sub    $0x24,%esp
08708917 +0x2527:  mov    0x8(%ebp),%eax
0870891a +0x252a:  mov    0xc(%ebp),%edx
0870891d +0x252d:  movzbl 0x14(%ebp),%ebx
08708921 +0x2531:  mov    (%eax),%ecx
08708923 +0x2533:  cmp    -0xc(%ecx),%edx
08708926 +0x2536:  ja     08708950 <+0x2560>
08708928 +0x2538:  mov    0x10(%ebp),%ecx
0870892b +0x253b:  movsbl %bl,%ebx
0870892e +0x253e:  mov    %ebx,0x10(%esp)
08708932 +0x2542:  movl   $0x0,0x8(%esp)
0870893a +0x254a:  mov    %edx,0x4(%esp)
0870893e +0x254e:  mov    %ecx,0xc(%esp)
08708942 +0x2552:  mov    %eax,(%esp)
08708945 +0x2555:  call   08708750 <+0x2360>
0870894a +0x255a:  add    $0x24,%esp
0870894d +0x255d:  pop    %ebx
0870894e +0x255e:  pop    %ebp
0870894f +0x255f:  ret
08708950 +0x2560:  movl   $"basic_string::insert",(%esp)
08708957 +0x2567:  call   086d9b70 <_ZSt20__throw_out_of_rangePKc>  ; std::__throw_out_of_range(char const*)
0870895c +0x256c:  nop
0870895d +0x256d:  nop
0870895e +0x256e:  nop
0870895f +0x256f:  nop
08708960 +0x2570:  push   %ebp
08708961 +0x2571:  mov    %esp,%ebp
08708963 +0x2573:  sub    $0x28,%esp
08708966 +0x2576:  movsbl 0x10(%ebp),%edx
0870896a +0x257a:  mov    0x8(%ebp),%eax
0870896d +0x257d:  mov    %edx,0x10(%esp)
08708971 +0x2581:  mov    0xc(%ebp),%edx
08708974 +0x2584:  mov    %edx,0xc(%esp)
08708978 +0x2588:  mov    (%eax),%edx
0870897a +0x258a:  mov    -0xc(%edx),%edx
0870897d +0x258d:  movl   $0x0,0x4(%esp)
08708985 +0x2595:  mov    %eax,(%esp)
08708988 +0x2598:  mov    %edx,0x8(%esp)
0870898c +0x259c:  call   08708750 <+0x2360>
08708991 +0x25a1:  leave
08708992 +0x25a2:  ret
08708993 +0x25a3:  nop
08708994 +0x25a4:  nop
08708995 +0x25a5:  nop
08708996 +0x25a6:  nop
08708997 +0x25a7:  nop
08708998 +0x25a8:  nop
08708999 +0x25a9:  nop
0870899a +0x25aa:  nop
0870899b +0x25ab:  nop
0870899c +0x25ac:  nop
0870899d +0x25ad:  nop
0870899e +0x25ae:  nop
0870899f +0x25af:  nop
087089a0 +0x25b0:  push   %ebp
087089a1 +0x25b1:  mov    %esp,%ebp
087089a3 +0x25b3:  sub    $0x28,%esp
087089a6 +0x25b6:  movsbl 0x14(%ebp),%ecx
087089aa +0x25ba:  mov    0x8(%ebp),%edx
087089ad +0x25bd:  mov    0xc(%ebp),%eax
087089b0 +0x25c0:  movl   $0x0,0x8(%esp)
087089b8 +0x25c8:  mov    %ecx,0x10(%esp)
087089bc +0x25cc:  mov    0x10(%ebp),%ecx
087089bf +0x25cf:  mov    %ecx,0xc(%esp)
087089c3 +0x25d3:  sub    (%edx),%eax
087089c5 +0x25d5:  mov    %edx,(%esp)
087089c8 +0x25d8:  mov    %eax,0x4(%esp)
087089cc +0x25dc:  call   08708750 <+0x2360>
087089d1 +0x25e1:  leave
087089d2 +0x25e2:  ret
087089d3 +0x25e3:  nop
087089d4 +0x25e4:  nop
087089d5 +0x25e5:  nop
087089d6 +0x25e6:  nop
087089d7 +0x25e7:  nop
087089d8 +0x25e8:  nop
087089d9 +0x25e9:  nop
087089da +0x25ea:  nop
087089db +0x25eb:  nop
087089dc +0x25ec:  nop
087089dd +0x25ed:  nop
087089de +0x25ee:  nop
087089df +0x25ef:  nop
087089e0 +0x25f0:  push   %ebp
087089e1 +0x25f1:  mov    %esp,%ebp
087089e3 +0x25f3:  push   %ebx
087089e4 +0x25f4:  sub    $0x24,%esp
087089e7 +0x25f7:  mov    0x8(%ebp),%ebx
087089ea +0x25fa:  movsbl 0xc(%ebp),%eax
087089ee +0x25fe:  movl   $0x1,0xc(%esp)
087089f6 +0x2606:  mov    %eax,0x10(%esp)
087089fa +0x260a:  mov    (%ebx),%eax
087089fc +0x260c:  mov    -0xc(%eax),%eax
087089ff +0x260f:  mov    %ebx,(%esp)
08708a02 +0x2612:  movl   $0x0,0x4(%esp)
08708a0a +0x261a:  mov    %eax,0x8(%esp)
08708a0e +0x261e:  call   08708750 <+0x2360>
08708a13 +0x2623:  mov    %ebx,%eax
08708a15 +0x2625:  add    $0x24,%esp
08708a18 +0x2628:  pop    %ebx
08708a19 +0x2629:  pop    %ebp
08708a1a +0x262a:  ret
08708a1b +0x262b:  nop
08708a1c +0x262c:  nop
08708a1d +0x262d:  nop
08708a1e +0x262e:  nop
08708a1f +0x262f:  nop
08708a20 +0x2630:  push   %ebp
08708a21 +0x2631:  mov    %esp,%ebp
08708a23 +0x2633:  sub    $0x28,%esp
08708a26 +0x2636:  mov    0x10(%ebp),%edx
08708a29 +0x2639:  mov    0x14(%ebp),%ecx
08708a2c +0x263c:  mov    %ebx,-0x8(%ebp)
08708a2f +0x263f:  mov    0x8(%ebp),%eax
08708a32 +0x2642:  mov    %esi,-0x4(%ebp)
08708a35 +0x2645:  mov    0xc(%ebp),%ebx
08708a38 +0x2648:  sub    %edx,%ecx
08708a3a +0x264a:  jne    08708a50 <+0x2660>
08708a3c +0x264c:  mov    %edx,(%eax)
08708a3e +0x264e:  mov    -0x8(%ebp),%ebx
08708a41 +0x2651:  mov    -0x4(%ebp),%esi
08708a44 +0x2654:  mov    %ebp,%esp
08708a46 +0x2656:  pop    %ebp
08708a47 +0x2657:  ret    $0x4
08708a4a +0x265a:  lea    0x0(%esi),%esi
08708a50 +0x2660:  mov    %edx,%esi
08708a52 +0x2662:  sub    (%ebx),%esi
08708a54 +0x2664:  mov    %eax,-0xc(%ebp)
08708a57 +0x2667:  mov    %ebx,(%esp)
08708a5a +0x266a:  mov    %esi,0x4(%esp)
08708a5e +0x266e:  movl   $0x0,0xc(%esp)
08708a66 +0x2676:  mov    %ecx,0x8(%esp)
08708a6a +0x267a:  call   08708370 <+0x1f80>
08708a6f +0x267f:  mov    (%ebx),%edx
08708a71 +0x2681:  mov    -0xc(%ebp),%eax
08708a74 +0x2684:  movl   $0xffffffff,-0x4(%edx)
08708a7b +0x268b:  add    %esi,%edx
08708a7d +0x268d:  mov    %edx,(%eax)
08708a7f +0x268f:  mov    -0x8(%ebp),%ebx
08708a82 +0x2692:  mov    -0x4(%ebp),%esi
08708a85 +0x2695:  mov    %ebp,%esp
08708a87 +0x2697:  pop    %ebp
08708a88 +0x2698:  ret    $0x4
08708a8b +0x269b:  nop
08708a8c +0x269c:  nop
08708a8d +0x269d:  nop
08708a8e +0x269e:  nop
08708a8f +0x269f:  nop
08708a90 +0x26a0:  push   %ebp
08708a91 +0x26a1:  mov    %esp,%ebp
08708a93 +0x26a3:  sub    $0x28,%esp
08708a96 +0x26a6:  mov    %esi,-0x8(%ebp)
08708a99 +0x26a9:  mov    0xc(%ebp),%esi
08708a9c +0x26ac:  mov    %ebx,-0xc(%ebp)
08708a9f +0x26af:  mov    0x10(%ebp),%ebx
08708aa2 +0x26b2:  mov    %edi,-0x4(%ebp)
08708aa5 +0x26b5:  mov    0x8(%ebp),%edi
08708aa8 +0x26b8:  sub    (%esi),%ebx
08708aaa +0x26ba:  mov    %esi,(%esp)
08708aad +0x26bd:  movl   $0x0,0xc(%esp)
08708ab5 +0x26c5:  mov    %ebx,0x4(%esp)
08708ab9 +0x26c9:  movl   $0x1,0x8(%esp)
08708ac1 +0x26d1:  call   08708370 <+0x1f80>
08708ac6 +0x26d6:  mov    (%esi),%eax
08708ac8 +0x26d8:  lea    (%eax,%ebx,1),%ebx
08708acb +0x26db:  movl   $0xffffffff,-0x4(%eax)
08708ad2 +0x26e2:  mov    %edi,%eax
08708ad4 +0x26e4:  mov    %ebx,(%edi)
08708ad6 +0x26e6:  mov    -0xc(%ebp),%ebx
08708ad9 +0x26e9:  mov    -0x8(%ebp),%esi
08708adc +0x26ec:  mov    -0x4(%ebp),%edi
08708adf +0x26ef:  mov    %ebp,%esp
08708ae1 +0x26f1:  pop    %ebp
08708ae2 +0x26f2:  ret    $0x4
08708ae5 +0x26f5:  nop
08708ae6 +0x26f6:  nop
08708ae7 +0x26f7:  nop
08708ae8 +0x26f8:  nop
08708ae9 +0x26f9:  nop
08708aea +0x26fa:  nop
08708aeb +0x26fb:  nop
08708aec +0x26fc:  nop
08708aed +0x26fd:  nop
08708aee +0x26fe:  nop
08708aef +0x26ff:  nop
08708af0 +0x2700:  push   %ebp
08708af1 +0x2701:  mov    %esp,%ebp
08708af3 +0x2703:  push   %ebx
08708af4 +0x2704:  sub    $0x14,%esp
08708af7 +0x2707:  mov    0x8(%ebp),%ebx
08708afa +0x270a:  mov    0xc(%ebp),%eax
08708afd +0x270d:  mov    0x10(%ebp),%ecx
08708b00 +0x2710:  mov    (%ebx),%edx
08708b02 +0x2712:  mov    -0xc(%edx),%edx
08708b05 +0x2715:  cmp    %edx,%eax
08708b07 +0x2717:  ja     08708b34 <+0x2744>
08708b09 +0x2719:  sub    %eax,%edx
08708b0b +0x271b:  cmp    %ecx,%edx
08708b0d +0x271d:  movl   $0x0,0xc(%esp)
08708b15 +0x2725:  ja     08708b30 <+0x2740>
08708b17 +0x2727:  mov    %eax,0x4(%esp)
08708b1b +0x272b:  mov    %ebx,(%esp)
08708b1e +0x272e:  mov    %edx,0x8(%esp)
08708b22 +0x2732:  call   08708370 <+0x1f80>
08708b27 +0x2737:  mov    %ebx,%eax
08708b29 +0x2739:  add    $0x14,%esp
08708b2c +0x273c:  pop    %ebx
08708b2d +0x273d:  pop    %ebp
08708b2e +0x273e:  ret
08708b2f +0x273f:  nop
08708b30 +0x2740:  mov    %ecx,%edx
08708b32 +0x2742:  jmp    08708b17 <+0x2727>
08708b34 +0x2744:  movl   $"basic_string::erase",(%esp)
08708b3b +0x274b:  call   086d9b70 <_ZSt20__throw_out_of_rangePKc>  ; std::__throw_out_of_range(char const*)
08708b40 +0x2750:  push   %ebp
08708b41 +0x2751:  mov    %esp,%ebp
08708b43 +0x2753:  sub    $0x48,%esp
08708b46 +0x2756:  mov    %ebx,-0xc(%ebp)
08708b49 +0x2759:  mov    0x8(%ebp),%ebx
08708b4c +0x275c:  mov    %esi,-0x8(%ebp)
08708b4f +0x275f:  mov    0x10(%ebp),%ecx
08708b52 +0x2762:  mov    %edi,-0x4(%ebp)
08708b55 +0x2765:  mov    0x14(%ebp),%esi
08708b58 +0x2768:  mov    (%ebx),%eax
08708b5a +0x276a:  lea    -0xc(%eax),%edx
08708b5d +0x276d:  mov    %edx,-0x1c(%ebp)
08708b60 +0x2770:  mov    -0xc(%eax),%edx
08708b63 +0x2773:  cmp    %edx,0xc(%ebp)
08708b66 +0x2776:  ja     08708ce6 <+0x28f6>
08708b6c +0x277c:  mov    %edx,%edi
08708b6e +0x277e:  neg    %edi
08708b70 +0x2780:  add    $0x3ffffffc,%edi
08708b76 +0x2786:  cmp    %edi,%esi
08708b78 +0x2788:  ja     08708cda <+0x28ea>
08708b7e +0x278e:  cmp    %eax,%ecx
08708b80 +0x2790:  jae    08708bb8 <+0x27c8>
08708b82 +0x2792:  mov    0xc(%ebp),%eax
08708b85 +0x2795:  mov    %ebx,(%esp)
08708b88 +0x2798:  mov    %esi,0x10(%esp)
08708b8c +0x279c:  mov    %ecx,0xc(%esp)
08708b90 +0x27a0:  movl   $0x0,0x8(%esp)
08708b98 +0x27a8:  mov    %eax,0x4(%esp)
08708b9c +0x27ac:  call   08708510 <+0x2120>
08708ba1 +0x27b1:  mov    %eax,%ebx
08708ba3 +0x27b3:  mov    %ebx,%eax
08708ba5 +0x27b5:  mov    -0x8(%ebp),%esi
08708ba8 +0x27b8:  mov    -0xc(%ebp),%ebx
08708bab +0x27bb:  mov    -0x4(%ebp),%edi
08708bae +0x27be:  mov    %ebp,%esp
08708bb0 +0x27c0:  pop    %ebp
08708bb1 +0x27c1:  ret
08708bb2 +0x27c2:  lea    0x0(%esi),%esi
08708bb8 +0x27c8:  lea    (%eax,%edx,1),%edx
08708bbb +0x27cb:  cmp    %edx,%ecx
08708bbd +0x27cd:  ja     08708b82 <+0x2792>
08708bbf +0x27cf:  mov    -0x1c(%ebp),%edx
08708bc2 +0x27d2:  mov    0x8(%edx),%edi
08708bc5 +0x27d5:  test   %edi,%edi
08708bc7 +0x27d7:  jg     08708b82 <+0x2792>
08708bc9 +0x27d9:  sub    %eax,%ecx
08708bcb +0x27db:  mov    0xc(%ebp),%eax
08708bce +0x27de:  mov    %ecx,-0x20(%ebp)
08708bd1 +0x27e1:  mov    %esi,0xc(%esp)
08708bd5 +0x27e5:  movl   $0x0,0x8(%esp)
08708bdd +0x27ed:  mov    %eax,0x4(%esp)
08708be1 +0x27f1:  mov    %ebx,(%esp)
08708be4 +0x27f4:  call   08708370 <+0x1f80>
08708be9 +0x27f9:  mov    (%ebx),%edi
08708beb +0x27fb:  mov    -0x20(%ebp),%ecx
08708bee +0x27fe:  lea    (%edi,%ecx,1),%ecx
08708bf1 +0x2801:  add    0xc(%ebp),%edi
08708bf4 +0x2804:  lea    (%ecx,%esi,1),%eax
08708bf7 +0x2807:  cmp    %eax,%edi
08708bf9 +0x2809:  jae    08708c78 <+0x2888>
08708bfb +0x280b:  cmp    %edi,%ecx
08708bfd +0x280d:  jae    08708c50 <+0x2860>
08708bff +0x280f:  mov    %edi,%edx
08708c01 +0x2811:  sub    %ecx,%edx
08708c03 +0x2813:  cmp    $0x1,%edx
08708c06 +0x2816:  je     08708cb0 <+0x28c0>
08708c0c +0x281c:  mov    %edx,0x8(%esp)
08708c10 +0x2820:  mov    %edx,-0x20(%ebp)
08708c13 +0x2823:  mov    %ecx,0x4(%esp)
08708c17 +0x2827:  mov    %edi,(%esp)
08708c1a +0x282a:  call   0807d8a0 <_init+0x198>
08708c1f +0x282f:  mov    -0x20(%ebp),%edx
08708c22 +0x2832:  mov    %esi,%eax
08708c24 +0x2834:  sub    %edx,%eax
08708c26 +0x2836:  lea    (%edi,%esi,1),%esi
08708c29 +0x2839:  add    %edx,%edi
08708c2b +0x283b:  cmp    $0x1,%eax
08708c2e +0x283e:  je     08708c98 <+0x28a8>
08708c30 +0x2840:  mov    %esi,0x4(%esp)
08708c34 +0x2844:  mov    %edi,(%esp)
08708c37 +0x2847:  mov    %eax,0x8(%esp)
08708c3b +0x284b:  call   0807d8a0 <_init+0x198>
08708c40 +0x2850:  mov    %ebx,%eax
08708c42 +0x2852:  mov    -0x8(%ebp),%esi
08708c45 +0x2855:  mov    -0xc(%ebp),%ebx
08708c48 +0x2858:  mov    -0x4(%ebp),%edi
08708c4b +0x285b:  mov    %ebp,%esp
08708c4d +0x285d:  pop    %ebp
08708c4e +0x285e:  ret
08708c4f +0x285f:  nop
08708c50 +0x2860:  cmp    $0x1,%esi
08708c53 +0x2863:  je     08708cc0 <+0x28d0>
08708c55 +0x2865:  mov    %esi,0x8(%esp)
08708c59 +0x2869:  mov    %edi,(%esp)
08708c5c +0x286c:  mov    %eax,0x4(%esp)
08708c60 +0x2870:  call   0807d8a0 <_init+0x198>
08708c65 +0x2875:  mov    %ebx,%eax
08708c67 +0x2877:  mov    -0x8(%ebp),%esi
08708c6a +0x287a:  mov    -0xc(%ebp),%ebx
08708c6d +0x287d:  mov    -0x4(%ebp),%edi
08708c70 +0x2880:  mov    %ebp,%esp
08708c72 +0x2882:  pop    %ebp
08708c73 +0x2883:  ret
08708c74 +0x2884:  lea    0x0(%esi,%eiz,1),%esi
08708c78 +0x2888:  cmp    $0x1,%esi
08708c7b +0x288b:  je     08708cd0 <+0x28e0>
08708c7d +0x288d:  mov    %esi,0x8(%esp)
08708c81 +0x2891:  mov    %ecx,0x4(%esp)
08708c85 +0x2895:  mov    %edi,(%esp)
08708c88 +0x2898:  call   0807d8a0 <_init+0x198>
08708c8d +0x289d:  jmp    08708ba3 <+0x27b3>
08708c92 +0x28a2:  lea    0x0(%esi),%esi
08708c98 +0x28a8:  movzbl (%esi),%eax
08708c9b +0x28ab:  mov    %al,(%edi)
08708c9d +0x28ad:  mov    %ebx,%eax
08708c9f +0x28af:  mov    -0x8(%ebp),%esi
08708ca2 +0x28b2:  mov    -0xc(%ebp),%ebx
08708ca5 +0x28b5:  mov    -0x4(%ebp),%edi
08708ca8 +0x28b8:  mov    %ebp,%esp
08708caa +0x28ba:  pop    %ebp
08708cab +0x28bb:  ret
08708cac +0x28bc:  lea    0x0(%esi,%eiz,1),%esi
08708cb0 +0x28c0:  movzbl (%ecx),%eax
08708cb3 +0x28c3:  mov    %al,(%edi)
08708cb5 +0x28c5:  jmp    08708c22 <+0x2832>
08708cba +0x28ca:  lea    0x0(%esi),%esi
08708cc0 +0x28d0:  movzbl (%eax),%eax
08708cc3 +0x28d3:  mov    %al,(%edi)
08708cc5 +0x28d5:  jmp    08708ba3 <+0x27b3>
08708cca +0x28da:  lea    0x0(%esi),%esi
08708cd0 +0x28e0:  movzbl (%ecx),%eax
08708cd3 +0x28e3:  mov    %al,(%edi)
08708cd5 +0x28e5:  jmp    08708ba3 <+0x27b3>
08708cda +0x28ea:  movl   $"basic_string::insert",(%esp)
08708ce1 +0x28f1:  call   086d9c40 <_ZSt20__throw_length_errorPKc>  ; std::__throw_length_error(char const*)
08708ce6 +0x28f6:  movl   $"basic_string::insert",(%esp)
08708ced +0x28fd:  call   086d9b70 <_ZSt20__throw_out_of_rangePKc>  ; std::__throw_out_of_range(char const*)
08708cf2 +0x2902:  nop
08708cf3 +0x2903:  nop
08708cf4 +0x2904:  nop
08708cf5 +0x2905:  nop
08708cf6 +0x2906:  nop
08708cf7 +0x2907:  nop
08708cf8 +0x2908:  nop
08708cf9 +0x2909:  nop
08708cfa +0x290a:  nop
08708cfb +0x290b:  nop
08708cfc +0x290c:  nop
08708cfd +0x290d:  nop
08708cfe +0x290e:  nop
08708cff +0x290f:  nop
08708d00 +0x2910:  push   %ebp
08708d01 +0x2911:  mov    %esp,%ebp
08708d03 +0x2913:  push   %ebx
08708d04 +0x2914:  sub    $0x14,%esp
08708d07 +0x2917:  mov    0x10(%ebp),%ebx
08708d0a +0x291a:  mov    %ebx,(%esp)
08708d0d +0x291d:  call   0807e3b0 <_init+0xca8>
08708d12 +0x2922:  mov    %ebx,0x8(%esp)
08708d16 +0x2926:  mov    %eax,0xc(%esp)
08708d1a +0x292a:  mov    0xc(%ebp),%eax
08708d1d +0x292d:  mov    %eax,0x4(%esp)
08708d21 +0x2931:  mov    0x8(%ebp),%eax
08708d24 +0x2934:  mov    %eax,(%esp)
08708d27 +0x2937:  call   08708b40 <+0x2750>
08708d2c +0x293c:  add    $0x14,%esp
08708d2f +0x293f:  pop    %ebx
08708d30 +0x2940:  pop    %ebp
08708d31 +0x2941:  ret
08708d32 +0x2942:  nop
08708d33 +0x2943:  nop
08708d34 +0x2944:  nop
08708d35 +0x2945:  nop
08708d36 +0x2946:  nop
08708d37 +0x2947:  nop
08708d38 +0x2948:  nop
08708d39 +0x2949:  nop
08708d3a +0x294a:  nop
08708d3b +0x294b:  nop
08708d3c +0x294c:  nop
08708d3d +0x294d:  nop
08708d3e +0x294e:  nop
08708d3f +0x294f:  nop
08708d40 +0x2950:  push   %ebp
08708d41 +0x2951:  mov    %esp,%ebp
08708d43 +0x2953:  sub    $0x28,%esp
08708d46 +0x2956:  mov    0x10(%ebp),%edx
08708d49 +0x2959:  mov    %ebx,-0xc(%ebp)
08708d4c +0x295c:  mov    0x14(%ebp),%eax
08708d4f +0x295f:  mov    %esi,-0x8(%ebp)
08708d52 +0x2962:  mov    0x18(%ebp),%ebx
08708d55 +0x2965:  mov    %edi,-0x4(%ebp)
08708d58 +0x2968:  mov    0x8(%ebp),%esi
08708d5b +0x296b:  mov    (%edx),%ecx
08708d5d +0x296d:  mov    0xc(%ebp),%edi
08708d60 +0x2970:  mov    -0xc(%ecx),%edx
08708d63 +0x2973:  cmp    %edx,%eax
08708d65 +0x2975:  ja     08708d94 <+0x29a4>
08708d67 +0x2977:  sub    %eax,%edx
08708d69 +0x2979:  cmp    %ebx,%edx
08708d6b +0x297b:  ja     08708d90 <+0x29a0>
08708d6d +0x297d:  lea    (%ecx,%eax,1),%eax
08708d70 +0x2980:  mov    -0xc(%ebp),%ebx
08708d73 +0x2983:  mov    %edi,0xc(%ebp)
08708d76 +0x2986:  mov    -0x4(%ebp),%edi
08708d79 +0x2989:  mov    %esi,0x8(%ebp)
08708d7c +0x298c:  mov    -0x8(%ebp),%esi
08708d7f +0x298f:  mov    %edx,0x14(%ebp)
08708d82 +0x2992:  mov    %eax,0x10(%ebp)
08708d85 +0x2995:  mov    %ebp,%esp
08708d87 +0x2997:  pop    %ebp
08708d88 +0x2998:  jmp    08708b40 <+0x2750>
08708d8d +0x299d:  lea    0x0(%esi),%esi
08708d90 +0x29a0:  mov    %ebx,%edx
08708d92 +0x29a2:  jmp    08708d6d <+0x297d>
08708d94 +0x29a4:  movl   $"basic_string::insert",(%esp)
08708d9b +0x29ab:  call   086d9b70 <_ZSt20__throw_out_of_rangePKc>  ; std::__throw_out_of_range(char const*)
08708da0 +0x29b0:  push   %ebp
08708da1 +0x29b1:  mov    %esp,%ebp
08708da3 +0x29b3:  sub    $0x18,%esp
08708da6 +0x29b6:  mov    0x10(%ebp),%eax
08708da9 +0x29b9:  mov    (%eax),%eax
08708dab +0x29bb:  mov    -0xc(%eax),%edx
08708dae +0x29be:  mov    %eax,0x8(%esp)
08708db2 +0x29c2:  mov    0xc(%ebp),%eax
08708db5 +0x29c5:  mov    %edx,0xc(%esp)
08708db9 +0x29c9:  mov    %eax,0x4(%esp)
08708dbd +0x29cd:  mov    0x8(%ebp),%eax
08708dc0 +0x29d0:  mov    %eax,(%esp)
08708dc3 +0x29d3:  call   08708b40 <+0x2750>
08708dc8 +0x29d8:  leave
08708dc9 +0x29d9:  ret
08708dca +0x29da:  nop
08708dcb +0x29db:  nop
08708dcc +0x29dc:  nop
08708dcd +0x29dd:  nop
08708dce +0x29de:  nop
08708dcf +0x29df:  nop
08708dd0 +0x29e0:  push   %ebp
08708dd1 +0x29e1:  mov    %esp,%ebp
08708dd3 +0x29e3:  sub    $0x18,%esp
08708dd6 +0x29e6:  mov    0x8(%ebp),%eax
08708dd9 +0x29e9:  movl   $0x0,0xc(%esp)
08708de1 +0x29f1:  mov    (%eax),%edx
08708de3 +0x29f3:  mov    -0xc(%edx),%edx
08708de6 +0x29f6:  movl   $0x0,0x4(%esp)
08708dee +0x29fe:  mov    %eax,(%esp)
08708df1 +0x2a01:  mov    %edx,0x8(%esp)
08708df5 +0x2a05:  call   08708370 <+0x1f80>
08708dfa +0x2a0a:  leave
08708dfb +0x2a0b:  ret
08708dfc +0x2a0c:  nop
08708dfd +0x2a0d:  nop
08708dfe +0x2a0e:  nop
08708dff +0x2a0f:  nop
08708e00 +0x2a10:  push   %ebp
08708e01 +0x2a11:  mov    %esp,%ebp
08708e03 +0x2a13:  push   %ebx
08708e04 +0x2a14:  sub    $0x14,%esp
08708e07 +0x2a17:  mov    0x8(%ebp),%ebx
08708e0a +0x2a1a:  mov    (%ebx),%eax
08708e0c +0x2a1c:  sub    $0xc,%eax
08708e0f +0x2a1f:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%eax
08708e14 +0x2a24:  je     08708e49 <+0x2a59>
08708e16 +0x2a26:  mov    0x8(%eax),%edx
08708e19 +0x2a29:  test   %edx,%edx
08708e1b +0x2a2b:  jle    08708e42 <+0x2a52>
08708e1d +0x2a2d:  movl   $0x0,0xc(%esp)
08708e25 +0x2a35:  movl   $0x0,0x8(%esp)
08708e2d +0x2a3d:  movl   $0x0,0x4(%esp)
08708e35 +0x2a45:  mov    %ebx,(%esp)
08708e38 +0x2a48:  call   08708370 <+0x1f80>
08708e3d +0x2a4d:  mov    (%ebx),%eax
08708e3f +0x2a4f:  sub    $0xc,%eax
08708e42 +0x2a52:  movl   $0xffffffff,0x8(%eax)
08708e49 +0x2a59:  add    $0x14,%esp
08708e4c +0x2a5c:  pop    %ebx
08708e4d +0x2a5d:  pop    %ebp
08708e4e +0x2a5e:  ret
08708e4f +0x2a5f:  nop
08708e50 +0x2a60:  push   %ebp
08708e51 +0x2a61:  mov    %esp,%ebp
08708e53 +0x2a63:  sub    $0x8,%esp
08708e56 +0x2a66:  mov    0x8(%ebp),%eax
08708e59 +0x2a69:  mov    (%eax),%edx
08708e5b +0x2a6b:  mov    -0x4(%edx),%ecx
08708e5e +0x2a6e:  test   %ecx,%ecx
08708e60 +0x2a70:  js     08708e68 <+0x2a78>
08708e62 +0x2a72:  leave
08708e63 +0x2a73:  jmp    08708e00 <+0x2a10>
08708e68 +0x2a78:  leave
08708e69 +0x2a79:  ret
08708e6a +0x2a7a:  nop
08708e6b +0x2a7b:  nop
08708e6c +0x2a7c:  nop
08708e6d +0x2a7d:  nop
08708e6e +0x2a7e:  nop
08708e6f +0x2a7f:  nop
08708e70 +0x2a80:  push   %ebp
08708e71 +0x2a81:  mov    %esp,%ebp
08708e73 +0x2a83:  sub    $0x18,%esp
08708e76 +0x2a86:  mov    %ebx,-0x8(%ebp)
08708e79 +0x2a89:  mov    0x8(%ebp),%ebx
08708e7c +0x2a8c:  mov    %esi,-0x4(%ebp)
08708e7f +0x2a8f:  mov    0xc(%ebp),%esi
08708e82 +0x2a92:  mov    (%ebx),%eax
08708e84 +0x2a94:  cmp    -0xc(%eax),%esi
08708e87 +0x2a97:  lea    -0xc(%eax),%edx
08708e8a +0x2a9a:  jae    08708ea9 <+0x2ab9>
08708e8c +0x2a9c:  mov    0x8(%edx),%edx
08708e8f +0x2a9f:  test   %edx,%edx
08708e91 +0x2aa1:  js     08708e9d <+0x2aad>
08708e93 +0x2aa3:  mov    %ebx,(%esp)
08708e96 +0x2aa6:  call   08708e00 <+0x2a10>
08708e9b +0x2aab:  mov    (%ebx),%eax
08708e9d +0x2aad:  add    %esi,%eax
08708e9f +0x2aaf:  mov    -0x8(%ebp),%ebx
08708ea2 +0x2ab2:  mov    -0x4(%ebp),%esi
08708ea5 +0x2ab5:  mov    %ebp,%esp
08708ea7 +0x2ab7:  pop    %ebp
08708ea8 +0x2ab8:  ret
08708ea9 +0x2ab9:  movl   $"basic_string::at",(%esp)
08708eb0 +0x2ac0:  call   086d9b70 <_ZSt20__throw_out_of_rangePKc>  ; std::__throw_out_of_range(char const*)
08708eb5 +0x2ac5:  nop
08708eb6 +0x2ac6:  nop
08708eb7 +0x2ac7:  nop
08708eb8 +0x2ac8:  nop
08708eb9 +0x2ac9:  nop
08708eba +0x2aca:  nop
08708ebb +0x2acb:  nop
08708ebc +0x2acc:  nop
08708ebd +0x2acd:  nop
08708ebe +0x2ace:  nop
08708ebf +0x2acf:  nop
08708ec0 +0x2ad0:  push   %ebp
08708ec1 +0x2ad1:  mov    %esp,%ebp
08708ec3 +0x2ad3:  push   %ebx
08708ec4 +0x2ad4:  sub    $0x14,%esp
08708ec7 +0x2ad7:  mov    0x8(%ebp),%ebx
08708eca +0x2ada:  mov    (%ebx),%eax
08708ecc +0x2adc:  mov    -0x4(%eax),%ecx
08708ecf +0x2adf:  test   %ecx,%ecx
08708ed1 +0x2ae1:  js     08708edd <+0x2aed>
08708ed3 +0x2ae3:  mov    %ebx,(%esp)
08708ed6 +0x2ae6:  call   08708e00 <+0x2a10>
08708edb +0x2aeb:  mov    (%ebx),%eax
08708edd +0x2aed:  add    0xc(%ebp),%eax
08708ee0 +0x2af0:  add    $0x14,%esp
08708ee3 +0x2af3:  pop    %ebx
08708ee4 +0x2af4:  pop    %ebp
08708ee5 +0x2af5:  ret
08708ee6 +0x2af6:  nop
08708ee7 +0x2af7:  nop
08708ee8 +0x2af8:  nop
08708ee9 +0x2af9:  nop
08708eea +0x2afa:  nop
08708eeb +0x2afb:  nop
08708eec +0x2afc:  nop
08708eed +0x2afd:  nop
08708eee +0x2afe:  nop
08708eef +0x2aff:  nop
08708ef0 +0x2b00:  push   %ebp
08708ef1 +0x2b01:  mov    %esp,%ebp
08708ef3 +0x2b03:  sub    $0x18,%esp
08708ef6 +0x2b06:  mov    %ebx,-0x8(%ebp)
08708ef9 +0x2b09:  mov    0xc(%ebp),%ebx
08708efc +0x2b0c:  mov    %esi,-0x4(%ebp)
08708eff +0x2b0f:  mov    0x8(%ebp),%esi
08708f02 +0x2b12:  mov    (%ebx),%edx
08708f04 +0x2b14:  lea    -0xc(%edx),%ecx
08708f07 +0x2b17:  mov    0x8(%ecx),%eax
08708f0a +0x2b1a:  test   %eax,%eax
08708f0c +0x2b1c:  js     08708f1b <+0x2b2b>
08708f0e +0x2b1e:  mov    %ebx,(%esp)
08708f11 +0x2b21:  call   08708e00 <+0x2a10>
08708f16 +0x2b26:  mov    (%ebx),%edx
08708f18 +0x2b28:  lea    -0xc(%edx),%ecx
08708f1b +0x2b2b:  add    (%ecx),%edx
08708f1d +0x2b2d:  mov    %esi,%eax
08708f1f +0x2b2f:  mov    %edx,(%esi)
08708f21 +0x2b31:  mov    -0x8(%ebp),%ebx
08708f24 +0x2b34:  mov    -0x4(%ebp),%esi
08708f27 +0x2b37:  mov    %ebp,%esp
08708f29 +0x2b39:  pop    %ebp
08708f2a +0x2b3a:  ret    $0x4
08708f2d +0x2b3d:  nop
08708f2e +0x2b3e:  nop
08708f2f +0x2b3f:  nop
08708f30 +0x2b40:  push   %ebp
08708f31 +0x2b41:  mov    %esp,%ebp
08708f33 +0x2b43:  sub    $0x18,%esp
08708f36 +0x2b46:  mov    %ebx,-0x8(%ebp)
08708f39 +0x2b49:  mov    0xc(%ebp),%ebx
08708f3c +0x2b4c:  mov    %esi,-0x4(%ebp)
08708f3f +0x2b4f:  mov    0x8(%ebp),%esi
08708f42 +0x2b52:  mov    (%ebx),%edx
08708f44 +0x2b54:  mov    -0x4(%edx),%ecx
08708f47 +0x2b57:  test   %ecx,%ecx
08708f49 +0x2b59:  js     08708f55 <+0x2b65>
08708f4b +0x2b5b:  mov    %ebx,(%esp)
08708f4e +0x2b5e:  call   08708e00 <+0x2a10>
08708f53 +0x2b63:  mov    (%ebx),%edx
08708f55 +0x2b65:  mov    %edx,(%esi)
08708f57 +0x2b67:  mov    %esi,%eax
08708f59 +0x2b69:  mov    -0x8(%ebp),%ebx
08708f5c +0x2b6c:  mov    -0x4(%ebp),%esi
08708f5f +0x2b6f:  mov    %ebp,%esp
08708f61 +0x2b71:  pop    %ebp
08708f62 +0x2b72:  ret    $0x4
08708f65 +0x2b75:  nop
08708f66 +0x2b76:  nop
08708f67 +0x2b77:  nop
08708f68 +0x2b78:  nop
08708f69 +0x2b79:  nop
08708f6a +0x2b7a:  nop
08708f6b +0x2b7b:  nop
08708f6c +0x2b7c:  nop
08708f6d +0x2b7d:  nop
08708f6e +0x2b7e:  nop
08708f6f +0x2b7f:  nop
08708f70 +0x2b80:  push   %ebp
08708f71 +0x2b81:  mov    %esp,%ebp
08708f73 +0x2b83:  sub    $0x18,%esp
08708f76 +0x2b86:  mov    %ebx,-0x8(%ebp)
08708f79 +0x2b89:  mov    0xc(%ebp),%ebx
08708f7c +0x2b8c:  mov    %esi,-0x4(%ebp)
08708f7f +0x2b8f:  mov    0x8(%ebp),%esi
08708f82 +0x2b92:  mov    (%ebx),%edx
08708f84 +0x2b94:  mov    -0x4(%edx),%eax
08708f87 +0x2b97:  test   %eax,%eax
08708f89 +0x2b99:  js     08708f95 <+0x2ba5>
08708f8b +0x2b9b:  mov    %ebx,(%esp)
08708f8e +0x2b9e:  call   08708e00 <+0x2a10>
08708f93 +0x2ba3:  mov    (%ebx),%edx
08708f95 +0x2ba5:  mov    %edx,(%esi)
08708f97 +0x2ba7:  mov    %esi,%eax
08708f99 +0x2ba9:  mov    -0x8(%ebp),%ebx
08708f9c +0x2bac:  mov    -0x4(%ebp),%esi
08708f9f +0x2baf:  mov    %ebp,%esp
08708fa1 +0x2bb1:  pop    %ebp
08708fa2 +0x2bb2:  ret    $0x4
08708fa5 +0x2bb5:  nop
08708fa6 +0x2bb6:  nop
08708fa7 +0x2bb7:  nop
08708fa8 +0x2bb8:  nop
08708fa9 +0x2bb9:  nop
08708faa +0x2bba:  nop
08708fab +0x2bbb:  nop
08708fac +0x2bbc:  nop
08708fad +0x2bbd:  nop
08708fae +0x2bbe:  nop
08708faf +0x2bbf:  nop
08708fb0 +0x2bc0:  push   %ebp
08708fb1 +0x2bc1:  mov    %esp,%ebp
08708fb3 +0x2bc3:  sub    $0x18,%esp
08708fb6 +0x2bc6:  mov    %ebx,-0x8(%ebp)
08708fb9 +0x2bc9:  mov    0xc(%ebp),%ebx
08708fbc +0x2bcc:  mov    %esi,-0x4(%ebp)
08708fbf +0x2bcf:  mov    0x8(%ebp),%esi
08708fc2 +0x2bd2:  mov    (%ebx),%edx
08708fc4 +0x2bd4:  lea    -0xc(%edx),%ecx
08708fc7 +0x2bd7:  mov    0x8(%ecx),%eax
08708fca +0x2bda:  test   %eax,%eax
08708fcc +0x2bdc:  js     08708fdb <+0x2beb>
08708fce +0x2bde:  mov    %ebx,(%esp)
08708fd1 +0x2be1:  call   08708e00 <+0x2a10>
08708fd6 +0x2be6:  mov    (%ebx),%edx
08708fd8 +0x2be8:  lea    -0xc(%edx),%ecx
08708fdb +0x2beb:  add    (%ecx),%edx
08708fdd +0x2bed:  mov    %esi,%eax
08708fdf +0x2bef:  mov    %edx,(%esi)
08708fe1 +0x2bf1:  mov    -0x8(%ebp),%ebx
08708fe4 +0x2bf4:  mov    -0x4(%ebp),%esi
08708fe7 +0x2bf7:  mov    %ebp,%esp
08708fe9 +0x2bf9:  pop    %ebp
08708fea +0x2bfa:  ret    $0x4
08708fed +0x2bfd:  nop
08708fee +0x2bfe:  nop
08708fef +0x2bff:  nop
08708ff0 +0x2c00:  push   %ebp
08708ff1 +0x2c01:  mov    %esp,%ebp
08708ff3 +0x2c03:  push   %ebx
08708ff4 +0x2c04:  sub    $0x14,%esp
08708ff7 +0x2c07:  mov    0x8(%ebp),%edx
08708ffa +0x2c0a:  mov    0xc(%ebp),%eax
08708ffd +0x2c0d:  movzbl 0x10(%ebp),%ebx
08709001 +0x2c11:  mov    (%edx),%ecx
08709003 +0x2c13:  cmp    $0x3ffffffc,%eax
08709008 +0x2c18:  mov    -0xc(%ecx),%ecx
0870900b +0x2c1b:  ja     08709058 <+0x2c68>
0870900d +0x2c1d:  cmp    %ecx,%eax
0870900f +0x2c1f:  ja     08709040 <+0x2c50>
08709011 +0x2c21:  jb     08709020 <+0x2c30>
08709013 +0x2c23:  add    $0x14,%esp
08709016 +0x2c26:  pop    %ebx
08709017 +0x2c27:  pop    %ebp
08709018 +0x2c28:  ret
08709019 +0x2c29:  lea    0x0(%esi,%eiz,1),%esi
08709020 +0x2c30:  sub    %eax,%ecx
08709022 +0x2c32:  movl   $0x0,0xc(%esp)
0870902a +0x2c3a:  mov    %ecx,0x8(%esp)
0870902e +0x2c3e:  mov    %eax,0x4(%esp)
08709032 +0x2c42:  mov    %edx,(%esp)
08709035 +0x2c45:  call   08708370 <+0x1f80>
0870903a +0x2c4a:  add    $0x14,%esp
0870903d +0x2c4d:  pop    %ebx
0870903e +0x2c4e:  pop    %ebp
0870903f +0x2c4f:  ret
08709040 +0x2c50:  movsbl %bl,%ebx
08709043 +0x2c53:  sub    %ecx,%eax
08709045 +0x2c55:  mov    %ebx,0x10(%ebp)
08709048 +0x2c58:  mov    %eax,0xc(%ebp)
0870904b +0x2c5b:  mov    %edx,0x8(%ebp)
0870904e +0x2c5e:  add    $0x14,%esp
08709051 +0x2c61:  pop    %ebx
08709052 +0x2c62:  pop    %ebp
08709053 +0x2c63:  jmp    08707e40 <+0x1a50>
08709058 +0x2c68:  movl   $"basic_string::resize",(%esp)
0870905f +0x2c6f:  call   086d9c40 <_ZSt20__throw_length_errorPKc>  ; std::__throw_length_error(char const*)
08709064 +0x2c74:  nop
08709065 +0x2c75:  nop
08709066 +0x2c76:  nop
08709067 +0x2c77:  nop
08709068 +0x2c78:  nop
08709069 +0x2c79:  nop
0870906a +0x2c7a:  nop
0870906b +0x2c7b:  nop
0870906c +0x2c7c:  nop
0870906d +0x2c7d:  nop
0870906e +0x2c7e:  nop
0870906f +0x2c7f:  nop
08709070 +0x2c80:  push   %ebp
08709071 +0x2c81:  mov    %esp,%ebp
08709073 +0x2c83:  sub    $0x18,%esp
08709076 +0x2c86:  mov    0xc(%ebp),%eax
08709079 +0x2c89:  movl   $0x0,0x8(%esp)
08709081 +0x2c91:  mov    %eax,0x4(%esp)
08709085 +0x2c95:  mov    0x8(%ebp),%eax
08709088 +0x2c98:  mov    %eax,(%esp)
0870908b +0x2c9b:  call   08708ff0 <+0x2c00>
08709090 +0x2ca0:  leave
08709091 +0x2ca1:  ret
08709092 +0x2ca2:  nop
08709093 +0x2ca3:  nop
08709094 +0x2ca4:  nop
08709095 +0x2ca5:  nop
08709096 +0x2ca6:  nop
08709097 +0x2ca7:  nop
08709098 +0x2ca8:  nop
08709099 +0x2ca9:  nop
0870909a +0x2caa:  nop
0870909b +0x2cab:  nop
0870909c +0x2cac:  nop
0870909d +0x2cad:  nop
0870909e +0x2cae:  nop
0870909f +0x2caf:  nop
087090a0 +0x2cb0:  push   %ebp
087090a1 +0x2cb1:  mov    %esp,%ebp
087090a3 +0x2cb3:  push   %edi
087090a4 +0x2cb4:  push   %esi
087090a5 +0x2cb5:  push   %ebx
087090a6 +0x2cb6:  sub    $0x4c,%esp
087090a9 +0x2cb9:  mov    0x8(%ebp),%ebx
087090ac +0x2cbc:  mov    0xc(%ebp),%edi
087090af +0x2cbf:  mov    0x10(%ebp),%ecx
087090b2 +0x2cc2:  mov    (%ebx),%eax
087090b4 +0x2cc4:  lea    -0xc(%eax),%edx
087090b7 +0x2cc7:  mov    %edx,-0x30(%ebp)
087090ba +0x2cca:  mov    -0xc(%eax),%edx
087090bd +0x2ccd:  cmp    %edx,%edi
087090bf +0x2ccf:  ja     08709236 <+0x2e46>
087090c5 +0x2cd5:  mov    %edx,%esi
087090c7 +0x2cd7:  sub    %edi,%esi
087090c9 +0x2cd9:  cmp    %ecx,%esi
087090cb +0x2cdb:  ja     08709110 <+0x2d20>
087090cd +0x2cdd:  mov    %esi,%ecx
087090cf +0x2cdf:  sub    %edx,%ecx
087090d1 +0x2ce1:  add    $0x3ffffffc,%ecx
087090d7 +0x2ce7:  cmp    %ecx,0x18(%ebp)
087090da +0x2cea:  ja     08709242 <+0x2e52>
087090e0 +0x2cf0:  cmp    %eax,0x14(%ebp)
087090e3 +0x2cf3:  jae    08709118 <+0x2d28>
087090e5 +0x2cf5:  mov    0x18(%ebp),%eax
087090e8 +0x2cf8:  mov    0x14(%ebp),%edx
087090eb +0x2cfb:  mov    %ebx,(%esp)
087090ee +0x2cfe:  mov    %esi,0x8(%esp)
087090f2 +0x2d02:  mov    %eax,0x10(%esp)
087090f6 +0x2d06:  mov    %edx,0xc(%esp)
087090fa +0x2d0a:  mov    %edi,0x4(%esp)
087090fe +0x2d0e:  call   08708510 <+0x2120>
08709103 +0x2d13:  mov    %eax,%ebx
08709105 +0x2d15:  add    $0x4c,%esp
08709108 +0x2d18:  mov    %ebx,%eax
0870910a +0x2d1a:  pop    %ebx
0870910b +0x2d1b:  pop    %esi
0870910c +0x2d1c:  pop    %edi
0870910d +0x2d1d:  pop    %ebp
0870910e +0x2d1e:  ret
0870910f +0x2d1f:  nop
08709110 +0x2d20:  mov    %ecx,%esi
08709112 +0x2d22:  jmp    087090cd <+0x2cdd>
08709114 +0x2d24:  lea    0x0(%esi,%eiz,1),%esi
08709118 +0x2d28:  lea    (%eax,%edx,1),%edx
0870911b +0x2d2b:  cmp    %edx,0x14(%ebp)
0870911e +0x2d2e:  ja     087090e5 <+0x2cf5>
08709120 +0x2d30:  mov    -0x30(%ebp),%edx
08709123 +0x2d33:  mov    0x8(%edx),%edx
08709126 +0x2d36:  test   %edx,%edx
08709128 +0x2d38:  jg     087090e5 <+0x2cf5>
0870912a +0x2d3a:  mov    0x14(%ebp),%edx
0870912d +0x2d3d:  lea    (%eax,%edi,1),%ecx
08709130 +0x2d40:  add    0x18(%ebp),%edx
08709133 +0x2d43:  cmp    %ecx,%edx
08709135 +0x2d45:  ja     08709188 <+0x2d98>
08709137 +0x2d47:  mov    0x14(%ebp),%edx
0870913a +0x2d4a:  sub    %eax,%edx
0870913c +0x2d4c:  mov    %edx,-0x2c(%ebp)
0870913f +0x2d4f:  mov    0x18(%ebp),%eax
08709142 +0x2d52:  mov    %edi,0x4(%esp)
08709146 +0x2d56:  mov    %esi,0x8(%esp)
0870914a +0x2d5a:  mov    %ebx,(%esp)
0870914d +0x2d5d:  mov    %eax,0xc(%esp)
08709151 +0x2d61:  call   08708370 <+0x1f80>
08709156 +0x2d66:  mov    (%ebx),%edx
08709158 +0x2d68:  mov    -0x2c(%ebp),%eax
0870915b +0x2d6b:  cmpl   $0x1,0x18(%ebp)
0870915f +0x2d6f:  lea    (%edx,%edi,1),%edi
08709162 +0x2d72:  lea    (%edx,%eax,1),%eax
08709165 +0x2d75:  je     087091a8 <+0x2db8>
08709167 +0x2d77:  mov    0x18(%ebp),%edx
0870916a +0x2d7a:  mov    %edi,(%esp)
0870916d +0x2d7d:  mov    %eax,0x4(%esp)
08709171 +0x2d81:  mov    %edx,0x8(%esp)
08709175 +0x2d85:  call   0807d8a0 <_init+0x198>
0870917a +0x2d8a:  add    $0x4c,%esp
0870917d +0x2d8d:  mov    %ebx,%eax
0870917f +0x2d8f:  pop    %ebx
08709180 +0x2d90:  pop    %esi
08709181 +0x2d91:  pop    %edi
08709182 +0x2d92:  pop    %ebp
08709183 +0x2d93:  ret
08709184 +0x2d94:  lea    0x0(%esi,%eiz,1),%esi
08709188 +0x2d98:  lea    (%esi,%edi,1),%edx
0870918b +0x2d9b:  lea    (%eax,%edx,1),%edx
0870918e +0x2d9e:  cmp    %edx,0x14(%ebp)
08709191 +0x2da1:  jb     087091b8 <+0x2dc8>
08709193 +0x2da3:  mov    0x14(%ebp),%edx
08709196 +0x2da6:  sub    %eax,%edx
08709198 +0x2da8:  mov    %edx,%eax
0870919a +0x2daa:  mov    0x18(%ebp),%edx
0870919d +0x2dad:  sub    %esi,%edx
0870919f +0x2daf:  add    %eax,%edx
087091a1 +0x2db1:  mov    %edx,-0x2c(%ebp)
087091a4 +0x2db4:  jmp    0870913f <+0x2d4f>
087091a6 +0x2db6:  xchg   %ax,%ax
087091a8 +0x2db8:  movzbl (%eax),%eax
087091ab +0x2dbb:  mov    %al,(%edi)
087091ad +0x2dbd:  add    $0x4c,%esp
087091b0 +0x2dc0:  mov    %ebx,%eax
087091b2 +0x2dc2:  pop    %ebx
087091b3 +0x2dc3:  pop    %esi
087091b4 +0x2dc4:  pop    %edi
087091b5 +0x2dc5:  pop    %ebp
087091b6 +0x2dc6:  ret
087091b7 +0x2dc7:  nop
087091b8 +0x2dc8:  lea    -0x19(%ebp),%eax
087091bb +0x2dcb:  mov    0x14(%ebp),%edx
087091be +0x2dce:  mov    %eax,0xc(%esp)
087091c2 +0x2dd2:  mov    0x18(%ebp),%eax
087091c5 +0x2dd5:  mov    %edx,0x4(%esp)
087091c9 +0x2dd9:  mov    %eax,0x8(%esp)
087091cd +0x2ddd:  lea    -0x20(%ebp),%eax
087091d0 +0x2de0:  mov    %eax,(%esp)
087091d3 +0x2de3:  call   08707680 <+0x1290>
087091d8 +0x2de8:  mov    0x18(%ebp),%eax
087091db +0x2deb:  mov    %esi,0x8(%esp)
087091df +0x2def:  mov    %edi,0x4(%esp)
087091e3 +0x2df3:  mov    %ebx,(%esp)
087091e6 +0x2df6:  mov    %eax,0x10(%esp)
087091ea +0x2dfa:  mov    -0x20(%ebp),%eax
087091ed +0x2dfd:  mov    %eax,0xc(%esp)
087091f1 +0x2e01:  call   08708510 <+0x2120>
087091f6 +0x2e06:  mov    %eax,%ebx
087091f8 +0x2e08:  mov    -0x20(%ebp),%eax
087091fb +0x2e0b:  sub    $0xc,%eax
087091fe +0x2e0e:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%eax
08709203 +0x2e13:  je     08709105 <+0x2d15>
08709209 +0x2e19:  mov    $&data#bb92cc41(.plt),%edx
0870920e +0x2e1e:  test   %edx,%edx
08709210 +0x2e20:  je     0870924e <+0x2e5e>
08709212 +0x2e22:  or     $0xffffffff,%edx
08709215 +0x2e25:  lock xadd %edx,0x8(%eax)
0870921a +0x2e2a:  test   %edx,%edx
0870921c +0x2e2c:  jg     08709105 <+0x2d15>
08709222 +0x2e32:  lea    -0x1a(%ebp),%edx
08709225 +0x2e35:  mov    %edx,0x4(%esp)
08709229 +0x2e39:  mov    %eax,(%esp)
0870922c +0x2e3c:  call   08706920 <+0x530>
08709231 +0x2e41:  jmp    08709105 <+0x2d15>
08709236 +0x2e46:  movl   $"basic_string::replace",(%esp)
0870923d +0x2e4d:  call   086d9b70 <_ZSt20__throw_out_of_rangePKc>  ; std::__throw_out_of_range(char const*)
08709242 +0x2e52:  movl   $"basic_string::replace",(%esp)
08709249 +0x2e59:  call   086d9c40 <_ZSt20__throw_length_errorPKc>  ; std::__throw_length_error(char const*)
0870924e +0x2e5e:  mov    0x8(%eax),%edx
08709251 +0x2e61:  lea    -0x1(%edx),%ecx
08709254 +0x2e64:  mov    %ecx,0x8(%eax)
08709257 +0x2e67:  jmp    0870921a <+0x2e2a>
08709259 +0x2e69:  mov    %eax,%ebx
0870925b +0x2e6b:  lea    -0x20(%ebp),%edx
0870925e +0x2e6e:  mov    %edx,(%esp)
08709261 +0x2e71:  call   08707be0 <+0x17f0>
08709266 +0x2e76:  mov    %ebx,(%esp)
08709269 +0x2e79:  call   08ae3750 <_Unwind_Resume>
0870926e +0x2e7e:  mov    %eax,(%esp)
08709271 +0x2e81:  call   08ae3750 <_Unwind_Resume>
08709276 +0x2e86:  nop
08709277 +0x2e87:  nop
08709278 +0x2e88:  nop
08709279 +0x2e89:  nop
0870927a +0x2e8a:  nop
0870927b +0x2e8b:  nop
0870927c +0x2e8c:  nop
0870927d +0x2e8d:  nop
0870927e +0x2e8e:  nop
0870927f +0x2e8f:  nop
08709280 +0x2e90:  push   %ebp
08709281 +0x2e91:  mov    %esp,%ebp
08709283 +0x2e93:  push   %ebx
08709284 +0x2e94:  sub    $0x4,%esp
08709287 +0x2e97:  mov    0xc(%ebp),%ecx
0870928a +0x2e9a:  mov    0x10(%ebp),%eax
0870928d +0x2e9d:  mov    0x8(%ebp),%edx
08709290 +0x2ea0:  mov    0x14(%ebp),%ebx
08709293 +0x2ea3:  sub    %ebx,0x18(%ebp)
08709296 +0x2ea6:  sub    %ecx,%eax
08709298 +0x2ea8:  mov    %eax,0x10(%ebp)
0870929b +0x2eab:  sub    (%edx),%ecx
0870929d +0x2ead:  mov    %ecx,0xc(%ebp)
087092a0 +0x2eb0:  add    $0x4,%esp
087092a3 +0x2eb3:  pop    %ebx
087092a4 +0x2eb4:  pop    %ebp
087092a5 +0x2eb5:  jmp    087090a0 <+0x2cb0>
087092aa +0x2eba:  nop
087092ab +0x2ebb:  nop
087092ac +0x2ebc:  nop
087092ad +0x2ebd:  nop
087092ae +0x2ebe:  nop
087092af +0x2ebf:  nop
087092b0 +0x2ec0:  push   %ebp
087092b1 +0x2ec1:  mov    %esp,%ebp
087092b3 +0x2ec3:  push   %ebx
087092b4 +0x2ec4:  sub    $0x4,%esp
087092b7 +0x2ec7:  mov    0xc(%ebp),%ecx
087092ba +0x2eca:  mov    0x10(%ebp),%eax
087092bd +0x2ecd:  mov    0x8(%ebp),%edx
087092c0 +0x2ed0:  mov    0x14(%ebp),%ebx
087092c3 +0x2ed3:  sub    %ebx,0x18(%ebp)
087092c6 +0x2ed6:  sub    %ecx,%eax
087092c8 +0x2ed8:  mov    %eax,0x10(%ebp)
087092cb +0x2edb:  sub    (%edx),%ecx
087092cd +0x2edd:  mov    %ecx,0xc(%ebp)
087092d0 +0x2ee0:  add    $0x4,%esp
087092d3 +0x2ee3:  pop    %ebx
087092d4 +0x2ee4:  pop    %ebp
087092d5 +0x2ee5:  jmp    087090a0 <+0x2cb0>
087092da +0x2eea:  nop
087092db +0x2eeb:  nop
087092dc +0x2eec:  nop
087092dd +0x2eed:  nop
087092de +0x2eee:  nop
087092df +0x2eef:  nop
087092e0 +0x2ef0:  push   %ebp
087092e1 +0x2ef1:  mov    %esp,%ebp
087092e3 +0x2ef3:  push   %ebx
087092e4 +0x2ef4:  sub    $0x4,%esp
087092e7 +0x2ef7:  mov    0xc(%ebp),%ecx
087092ea +0x2efa:  mov    0x10(%ebp),%eax
087092ed +0x2efd:  mov    0x8(%ebp),%edx
087092f0 +0x2f00:  mov    0x14(%ebp),%ebx
087092f3 +0x2f03:  sub    %ebx,0x18(%ebp)
087092f6 +0x2f06:  sub    %ecx,%eax
087092f8 +0x2f08:  mov    %eax,0x10(%ebp)
087092fb +0x2f0b:  sub    (%edx),%ecx
087092fd +0x2f0d:  mov    %ecx,0xc(%ebp)
08709300 +0x2f10:  add    $0x4,%esp
08709303 +0x2f13:  pop    %ebx
08709304 +0x2f14:  pop    %ebp
08709305 +0x2f15:  jmp    087090a0 <+0x2cb0>
0870930a +0x2f1a:  nop
0870930b +0x2f1b:  nop
0870930c +0x2f1c:  nop
0870930d +0x2f1d:  nop
0870930e +0x2f1e:  nop
0870930f +0x2f1f:  nop
08709310 +0x2f20:  push   %ebp
08709311 +0x2f21:  mov    %esp,%ebp
08709313 +0x2f23:  push   %ebx
08709314 +0x2f24:  sub    $0x4,%esp
08709317 +0x2f27:  mov    0xc(%ebp),%ecx
0870931a +0x2f2a:  mov    0x10(%ebp),%eax
0870931d +0x2f2d:  mov    0x8(%ebp),%edx
08709320 +0x2f30:  mov    0x14(%ebp),%ebx
08709323 +0x2f33:  sub    %ebx,0x18(%ebp)
08709326 +0x2f36:  sub    %ecx,%eax
08709328 +0x2f38:  mov    %eax,0x10(%ebp)
0870932b +0x2f3b:  sub    (%edx),%ecx
0870932d +0x2f3d:  mov    %ecx,0xc(%ebp)
08709330 +0x2f40:  add    $0x4,%esp
08709333 +0x2f43:  pop    %ebx
08709334 +0x2f44:  pop    %ebp
08709335 +0x2f45:  jmp    087090a0 <+0x2cb0>
0870933a +0x2f4a:  nop
0870933b +0x2f4b:  nop
0870933c +0x2f4c:  nop
0870933d +0x2f4d:  nop
0870933e +0x2f4e:  nop
0870933f +0x2f4f:  nop
08709340 +0x2f50:  push   %ebp
08709341 +0x2f51:  mov    %esp,%ebp
08709343 +0x2f53:  push   %ebx
08709344 +0x2f54:  sub    $0x4,%esp
08709347 +0x2f57:  mov    0xc(%ebp),%ecx
0870934a +0x2f5a:  mov    0x10(%ebp),%eax
0870934d +0x2f5d:  mov    0x8(%ebp),%edx
08709350 +0x2f60:  sub    %ecx,%eax
08709352 +0x2f62:  mov    %eax,0x10(%ebp)
08709355 +0x2f65:  sub    (%edx),%ecx
08709357 +0x2f67:  mov    %ecx,0xc(%ebp)
0870935a +0x2f6a:  add    $0x4,%esp
0870935d +0x2f6d:  pop    %ebx
0870935e +0x2f6e:  pop    %ebp
0870935f +0x2f6f:  jmp    087090a0 <+0x2cb0>
08709364 +0x2f74:  nop
08709365 +0x2f75:  nop
08709366 +0x2f76:  nop
08709367 +0x2f77:  nop
08709368 +0x2f78:  nop
08709369 +0x2f79:  nop
0870936a +0x2f7a:  nop
0870936b +0x2f7b:  nop
0870936c +0x2f7c:  nop
0870936d +0x2f7d:  nop
0870936e +0x2f7e:  nop
0870936f +0x2f7f:  nop
08709370 +0x2f80:  push   %ebp
08709371 +0x2f81:  mov    %esp,%ebp
08709373 +0x2f83:  push   %ebx
08709374 +0x2f84:  sub    $0x24,%esp
08709377 +0x2f87:  mov    0x14(%ebp),%ebx
0870937a +0x2f8a:  mov    %ebx,(%esp)
0870937d +0x2f8d:  call   0807e3b0 <_init+0xca8>
08709382 +0x2f92:  mov    %ebx,0xc(%esp)
08709386 +0x2f96:  mov    %eax,0x10(%esp)
0870938a +0x2f9a:  mov    0x10(%ebp),%eax
0870938d +0x2f9d:  mov    %eax,0x8(%esp)
08709391 +0x2fa1:  mov    0xc(%ebp),%eax
08709394 +0x2fa4:  mov    %eax,0x4(%esp)
08709398 +0x2fa8:  mov    0x8(%ebp),%eax
0870939b +0x2fab:  mov    %eax,(%esp)
0870939e +0x2fae:  call   087090a0 <+0x2cb0>
087093a3 +0x2fb3:  add    $0x24,%esp
087093a6 +0x2fb6:  pop    %ebx
087093a7 +0x2fb7:  pop    %ebp
087093a8 +0x2fb8:  ret
087093a9 +0x2fb9:  nop
087093aa +0x2fba:  nop
087093ab +0x2fbb:  nop
087093ac +0x2fbc:  nop
087093ad +0x2fbd:  nop
087093ae +0x2fbe:  nop
087093af +0x2fbf:  nop
087093b0 +0x2fc0:  push   %ebp
087093b1 +0x2fc1:  mov    %esp,%ebp
087093b3 +0x2fc3:  sub    $0x38,%esp
087093b6 +0x2fc6:  mov    0x14(%ebp),%edx
087093b9 +0x2fc9:  mov    %ebx,-0xc(%ebp)
087093bc +0x2fcc:  mov    0x8(%ebp),%eax
087093bf +0x2fcf:  mov    %esi,-0x8(%ebp)
087093c2 +0x2fd2:  mov    0x1c(%ebp),%ebx
087093c5 +0x2fd5:  mov    %edi,-0x4(%ebp)
087093c8 +0x2fd8:  mov    0xc(%ebp),%esi
087093cb +0x2fdb:  mov    (%edx),%ecx
087093cd +0x2fdd:  mov    %eax,-0x1c(%ebp)
087093d0 +0x2fe0:  mov    0x18(%ebp),%eax
087093d3 +0x2fe3:  mov    0x10(%ebp),%edi
087093d6 +0x2fe6:  mov    -0xc(%ecx),%edx
087093d9 +0x2fe9:  cmp    %edx,%eax
087093db +0x2feb:  ja     08709414 <+0x3024>
087093dd +0x2fed:  sub    %eax,%edx
087093df +0x2fef:  cmp    %ebx,%edx
087093e1 +0x2ff1:  ja     08709410 <+0x3020>
087093e3 +0x2ff3:  lea    (%ecx,%eax,1),%eax
087093e6 +0x2ff6:  mov    -0xc(%ebp),%ebx
087093e9 +0x2ff9:  mov    %eax,0x14(%ebp)
087093ec +0x2ffc:  mov    -0x1c(%ebp),%eax
087093ef +0x2fff:  mov    %edi,0x10(%ebp)
087093f2 +0x3002:  mov    -0x4(%ebp),%edi
087093f5 +0x3005:  mov    %esi,0xc(%ebp)
087093f8 +0x3008:  mov    -0x8(%ebp),%esi
087093fb +0x300b:  mov    %edx,0x18(%ebp)
087093fe +0x300e:  mov    %eax,0x8(%ebp)
08709401 +0x3011:  mov    %ebp,%esp
08709403 +0x3013:  pop    %ebp
08709404 +0x3014:  jmp    087090a0 <+0x2cb0>
08709409 +0x3019:  lea    0x0(%esi,%eiz,1),%esi
08709410 +0x3020:  mov    %ebx,%edx
08709412 +0x3022:  jmp    087093e3 <+0x2ff3>
08709414 +0x3024:  movl   $"basic_string::replace",(%esp)
0870941b +0x302b:  call   086d9b70 <_ZSt20__throw_out_of_rangePKc>  ; std::__throw_out_of_range(char const*)
08709420 +0x3030:  push   %ebp
08709421 +0x3031:  mov    %esp,%ebp
08709423 +0x3033:  sub    $0x28,%esp
08709426 +0x3036:  mov    0x14(%ebp),%eax
08709429 +0x3039:  mov    (%eax),%eax
0870942b +0x303b:  mov    -0xc(%eax),%edx
0870942e +0x303e:  mov    %eax,0xc(%esp)
08709432 +0x3042:  mov    0x10(%ebp),%eax
08709435 +0x3045:  mov    %edx,0x10(%esp)
08709439 +0x3049:  mov    %eax,0x8(%esp)
0870943d +0x304d:  mov    0xc(%ebp),%eax
08709440 +0x3050:  mov    %eax,0x4(%esp)
08709444 +0x3054:  mov    0x8(%ebp),%eax
08709447 +0x3057:  mov    %eax,(%esp)
0870944a +0x305a:  call   087090a0 <+0x2cb0>
0870944f +0x305f:  leave
08709450 +0x3060:  ret
08709451 +0x3061:  nop
08709452 +0x3062:  nop
08709453 +0x3063:  nop
08709454 +0x3064:  nop
08709455 +0x3065:  nop
08709456 +0x3066:  nop
08709457 +0x3067:  nop
08709458 +0x3068:  nop
08709459 +0x3069:  nop
0870945a +0x306a:  nop
0870945b +0x306b:  nop
0870945c +0x306c:  nop
0870945d +0x306d:  nop
0870945e +0x306e:  nop
0870945f +0x306f:  nop
08709460 +0x3070:  push   %ebp
08709461 +0x3071:  mov    %esp,%ebp
08709463 +0x3073:  sub    $0x38,%esp
08709466 +0x3076:  mov    %edi,-0x4(%ebp)
08709469 +0x3079:  mov    0x14(%ebp),%edi
0870946c +0x307c:  mov    %ebx,-0xc(%ebp)
0870946f +0x307f:  mov    0x8(%ebp),%ebx
08709472 +0x3082:  mov    %esi,-0x8(%ebp)
08709475 +0x3085:  mov    0xc(%ebp),%esi
08709478 +0x3088:  mov    %edi,(%esp)
0870947b +0x308b:  call   0807e3b0 <_init+0xca8>
08709480 +0x3090:  mov    %edi,0xc(%esp)
08709484 +0x3094:  mov    %eax,0x10(%esp)
08709488 +0x3098:  mov    0x10(%ebp),%eax
0870948b +0x309b:  sub    %esi,%eax
0870948d +0x309d:  mov    %eax,0x8(%esp)
08709491 +0x30a1:  sub    (%ebx),%esi
08709493 +0x30a3:  mov    %ebx,(%esp)
08709496 +0x30a6:  mov    %esi,0x4(%esp)
0870949a +0x30aa:  call   087090a0 <+0x2cb0>
0870949f +0x30af:  mov    -0xc(%ebp),%ebx
087094a2 +0x30b2:  mov    -0x8(%ebp),%esi
087094a5 +0x30b5:  mov    -0x4(%ebp),%edi
087094a8 +0x30b8:  mov    %ebp,%esp
087094aa +0x30ba:  pop    %ebp
087094ab +0x30bb:  ret
087094ac +0x30bc:  nop
087094ad +0x30bd:  nop
087094ae +0x30be:  nop
087094af +0x30bf:  nop
087094b0 +0x30c0:  push   %ebp
087094b1 +0x30c1:  mov    %esp,%ebp
087094b3 +0x30c3:  sub    $0x28,%esp
087094b6 +0x30c6:  mov    %ebx,-0x8(%ebp)
087094b9 +0x30c9:  mov    0x14(%ebp),%ebx
087094bc +0x30cc:  mov    %esi,-0x4(%ebp)
087094bf +0x30cf:  mov    0xc(%ebp),%ecx
087094c2 +0x30d2:  mov    0x10(%ebp),%eax
087094c5 +0x30d5:  mov    0x8(%ebp),%edx
087094c8 +0x30d8:  mov    (%ebx),%ebx
087094ca +0x30da:  sub    %ecx,%eax
087094cc +0x30dc:  mov    -0xc(%ebx),%esi
087094cf +0x30df:  mov    %ebx,0xc(%esp)
087094d3 +0x30e3:  mov    %eax,0x8(%esp)
087094d7 +0x30e7:  mov    %esi,0x10(%esp)
087094db +0x30eb:  sub    (%edx),%ecx
087094dd +0x30ed:  mov    %edx,(%esp)
087094e0 +0x30f0:  mov    %ecx,0x4(%esp)
087094e4 +0x30f4:  call   087090a0 <+0x2cb0>
087094e9 +0x30f9:  mov    -0x8(%ebp),%ebx
087094ec +0x30fc:  mov    -0x4(%ebp),%esi
087094ef +0x30ff:  mov    %ebp,%esp
087094f1 +0x3101:  pop    %ebp
087094f2 +0x3102:  ret
087094f3 +0x3103:  nop
087094f4 +0x3104:  nop
087094f5 +0x3105:  nop
087094f6 +0x3106:  nop
087094f7 +0x3107:  nop
087094f8 +0x3108:  nop
087094f9 +0x3109:  nop
087094fa +0x310a:  nop
087094fb +0x310b:  nop
087094fc +0x310c:  nop
087094fd +0x310d:  nop
087094fe +0x310e:  nop
087094ff +0x310f:  nop
08709500 +0x3110:  push   %ebp
08709501 +0x3111:  mov    %esp,%ebp
08709503 +0x3113:  sub    $0x28,%esp
08709506 +0x3116:  mov    0x14(%ebp),%ecx
08709509 +0x3119:  mov    0x8(%ebp),%edx
0870950c +0x311c:  mov    0xc(%ebp),%eax
0870950f +0x311f:  movl   $0x0,0x8(%esp)
08709517 +0x3127:  mov    %ecx,0x10(%esp)
0870951b +0x312b:  mov    0x10(%ebp),%ecx
0870951e +0x312e:  mov    %ecx,0xc(%esp)
08709522 +0x3132:  sub    (%edx),%eax
08709524 +0x3134:  mov    %edx,(%esp)
08709527 +0x3137:  mov    %eax,0x4(%esp)
0870952b +0x313b:  call   087090a0 <+0x2cb0>
08709530 +0x3140:  leave
08709531 +0x3141:  ret
08709532 +0x3142:  nop
08709533 +0x3143:  nop
08709534 +0x3144:  nop
08709535 +0x3145:  nop
08709536 +0x3146:  nop
08709537 +0x3147:  nop
08709538 +0x3148:  nop
08709539 +0x3149:  nop
0870953a +0x314a:  nop
0870953b +0x314b:  nop
0870953c +0x314c:  nop
0870953d +0x314d:  nop
0870953e +0x314e:  nop
0870953f +0x314f:  nop
08709540 +0x3150:  push   %ebp
08709541 +0x3151:  mov    %esp,%ebp
08709543 +0x3153:  sub    $0x28,%esp
08709546 +0x3156:  mov    0x8(%ebp),%eax
08709549 +0x3159:  mov    0x10(%ebp),%ecx
0870954c +0x315c:  mov    (%eax),%edx
0870954e +0x315e:  mov    %ecx,0x10(%esp)
08709552 +0x3162:  mov    0xc(%ebp),%ecx
08709555 +0x3165:  mov    %ecx,0xc(%esp)
08709559 +0x3169:  mov    -0xc(%edx),%edx
0870955c +0x316c:  movl   $0x0,0x4(%esp)
08709564 +0x3174:  mov    %eax,(%esp)
08709567 +0x3177:  mov    %edx,0x8(%esp)
0870956b +0x317b:  call   087090a0 <+0x2cb0>
08709570 +0x3180:  leave
08709571 +0x3181:  ret
08709572 +0x3182:  nop
08709573 +0x3183:  nop
08709574 +0x3184:  nop
08709575 +0x3185:  nop
08709576 +0x3186:  nop
08709577 +0x3187:  nop
08709578 +0x3188:  nop
08709579 +0x3189:  nop
0870957a +0x318a:  nop
0870957b +0x318b:  nop
0870957c +0x318c:  nop
0870957d +0x318d:  nop
0870957e +0x318e:  nop
0870957f +0x318f:  nop
08709580 +0x3190:  push   %ebp
08709581 +0x3191:  mov    %esp,%ebp
08709583 +0x3193:  push   %ebx
08709584 +0x3194:  sub    $0x24,%esp
08709587 +0x3197:  mov    0x8(%ebp),%ebx
0870958a +0x319a:  mov    0x10(%ebp),%edx
0870958d +0x319d:  mov    (%ebx),%eax
0870958f +0x319f:  mov    %edx,0x10(%esp)
08709593 +0x31a3:  mov    0xc(%ebp),%edx
08709596 +0x31a6:  mov    %edx,0xc(%esp)
0870959a +0x31aa:  mov    -0xc(%eax),%eax
0870959d +0x31ad:  mov    %ebx,(%esp)
087095a0 +0x31b0:  movl   $0x0,0x4(%esp)
087095a8 +0x31b8:  mov    %eax,0x8(%esp)
087095ac +0x31bc:  call   087090a0 <+0x2cb0>
087095b1 +0x31c1:  mov    %ebx,%eax
087095b3 +0x31c3:  add    $0x24,%esp
087095b6 +0x31c6:  pop    %ebx
087095b7 +0x31c7:  pop    %ebp
087095b8 +0x31c8:  ret
087095b9 +0x31c9:  nop
087095ba +0x31ca:  nop
087095bb +0x31cb:  nop
087095bc +0x31cc:  nop
087095bd +0x31cd:  nop
087095be +0x31ce:  nop
087095bf +0x31cf:  nop
087095c0 +0x31d0:  push   %ebp
087095c1 +0x31d1:  mov    %esp,%ebp
087095c3 +0x31d3:  sub    $0x28,%esp
087095c6 +0x31d6:  mov    0x8(%ebp),%eax
087095c9 +0x31d9:  mov    0x10(%ebp),%ecx
087095cc +0x31dc:  mov    (%eax),%edx
087095ce +0x31de:  mov    %ecx,0x10(%esp)
087095d2 +0x31e2:  mov    0xc(%ebp),%ecx
087095d5 +0x31e5:  movl   $0x0,0x8(%esp)
087095dd +0x31ed:  mov    %ecx,0xc(%esp)
087095e1 +0x31f1:  mov    -0xc(%edx),%edx
087095e4 +0x31f4:  mov    %eax,(%esp)
087095e7 +0x31f7:  mov    %edx,0x4(%esp)
087095eb +0x31fb:  call   087090a0 <+0x2cb0>
087095f0 +0x3200:  leave
087095f1 +0x3201:  ret
087095f2 +0x3202:  nop
087095f3 +0x3203:  nop
087095f4 +0x3204:  nop
087095f5 +0x3205:  nop
087095f6 +0x3206:  nop
087095f7 +0x3207:  nop
087095f8 +0x3208:  nop
087095f9 +0x3209:  nop
087095fa +0x320a:  nop
087095fb +0x320b:  nop
087095fc +0x320c:  nop
087095fd +0x320d:  nop
087095fe +0x320e:  nop
087095ff +0x320f:  nop
08709600 +0x3210:  push   %ebp
08709601 +0x3211:  mov    %esp,%ebp
08709603 +0x3213:  sub    $0x28,%esp
08709606 +0x3216:  mov    0x8(%ebp),%eax
08709609 +0x3219:  mov    0x10(%ebp),%ecx
0870960c +0x321c:  mov    (%eax),%edx
0870960e +0x321e:  mov    %ecx,0x10(%esp)
08709612 +0x3222:  mov    0xc(%ebp),%ecx
08709615 +0x3225:  movl   $0x0,0x8(%esp)
0870961d +0x322d:  mov    %ecx,0xc(%esp)
08709621 +0x3231:  mov    -0xc(%edx),%edx
08709624 +0x3234:  mov    %eax,(%esp)
08709627 +0x3237:  mov    %edx,0x4(%esp)
0870962b +0x323b:  call   087090a0 <+0x2cb0>
08709630 +0x3240:  leave
08709631 +0x3241:  ret
08709632 +0x3242:  nop
08709633 +0x3243:  nop
08709634 +0x3244:  nop
08709635 +0x3245:  nop
08709636 +0x3246:  nop
08709637 +0x3247:  nop
08709638 +0x3248:  nop
08709639 +0x3249:  nop
0870963a +0x324a:  nop
0870963b +0x324b:  nop
0870963c +0x324c:  nop
0870963d +0x324d:  nop
0870963e +0x324e:  nop
0870963f +0x324f:  nop
08709640 +0x3250:  push   %ebp
08709641 +0x3251:  mov    %esp,%ebp
08709643 +0x3253:  push   %ebx
08709644 +0x3254:  sub    $0x4,%esp
08709647 +0x3257:  mov    0xc(%ebp),%ecx
0870964a +0x325a:  mov    0x10(%ebp),%eax
0870964d +0x325d:  mov    0x8(%ebp),%edx
08709650 +0x3260:  sub    %ecx,%eax
08709652 +0x3262:  mov    %eax,0x10(%ebp)
08709655 +0x3265:  sub    (%edx),%ecx
08709657 +0x3267:  mov    %ecx,0xc(%ebp)
0870965a +0x326a:  add    $0x4,%esp
0870965d +0x326d:  pop    %ebx
0870965e +0x326e:  pop    %ebp
0870965f +0x326f:  jmp    087090a0 <+0x2cb0>
08709664 +0x3274:  nop
08709665 +0x3275:  nop
08709666 +0x3276:  nop
08709667 +0x3277:  nop
08709668 +0x3278:  nop
08709669 +0x3279:  nop
0870966a +0x327a:  nop
0870966b +0x327b:  nop
0870966c +0x327c:  nop
0870966d +0x327d:  nop
0870966e +0x327e:  nop
0870966f +0x327f:  nop
08709670 +0x3280:  push   %ebp
08709671 +0x3281:  mov    %esp,%ebp
08709673 +0x3283:  sub    $0x8,%esp
08709676 +0x3286:  mov    0x8(%ebp),%eax
08709679 +0x3289:  mov    (%eax),%edx
0870967b +0x328b:  mov    0x8(%edx),%eax
0870967e +0x328e:  leave
0870967f +0x328f:  jmp    *%eax
08709681 +0x3291:  nop
08709682 +0x3292:  nop
08709683 +0x3293:  nop
08709684 +0x3294:  nop
08709685 +0x3295:  nop
08709686 +0x3296:  nop
08709687 +0x3297:  nop
08709688 +0x3298:  nop
08709689 +0x3299:  nop
0870968a +0x329a:  nop
0870968b +0x329b:  nop
0870968c +0x329c:  nop
0870968d +0x329d:  nop
0870968e +0x329e:  nop
0870968f +0x329f:  nop
08709690 +0x32a0:  push   %ebp
08709691 +0x32a1:  mov    %esp,%ebp
08709693 +0x32a3:  sub    $0x8,%esp
08709696 +0x32a6:  mov    0x8(%ebp),%eax
08709699 +0x32a9:  mov    (%eax),%edx
0870969b +0x32ab:  mov    0xc(%edx),%eax
0870969e +0x32ae:  leave
0870969f +0x32af:  jmp    *%eax
087096a1 +0x32b1:  nop
087096a2 +0x32b2:  nop
087096a3 +0x32b3:  nop
087096a4 +0x32b4:  nop
087096a5 +0x32b5:  nop
087096a6 +0x32b6:  nop
087096a7 +0x32b7:  nop
087096a8 +0x32b8:  nop
087096a9 +0x32b9:  nop
087096aa +0x32ba:  nop
087096ab +0x32bb:  nop
087096ac +0x32bc:  nop
087096ad +0x32bd:  nop
087096ae +0x32be:  nop
087096af +0x32bf:  nop
087096b0 +0x32c0:  push   %ebp
087096b1 +0x32c1:  mov    %esp,%ebp
087096b3 +0x32c3:  push   %ebx
087096b4 +0x32c4:  sub    $0x14,%esp
087096b7 +0x32c7:  mov    0xc(%ebp),%eax
087096ba +0x32ca:  mov    0x8(%ebp),%ebx
087096bd +0x32cd:  mov    (%eax),%edx
087096bf +0x32cf:  mov    %eax,0x4(%esp)
087096c3 +0x32d3:  mov    %ebx,(%esp)
087096c6 +0x32d6:  call   *0x10(%edx)
087096c9 +0x32d9:  mov    %ebx,%eax
087096cb +0x32db:  mov    -0x4(%ebp),%ebx
087096ce +0x32de:  sub    $0x4,%esp
087096d1 +0x32e1:  leave
087096d2 +0x32e2:  ret    $0x4
087096d5 +0x32e5:  nop
087096d6 +0x32e6:  nop
087096d7 +0x32e7:  nop
087096d8 +0x32e8:  nop
087096d9 +0x32e9:  nop
087096da +0x32ea:  nop
087096db +0x32eb:  nop
087096dc +0x32ec:  nop
087096dd +0x32ed:  nop
087096de +0x32ee:  nop
087096df +0x32ef:  nop
087096e0 +0x32f0:  push   %ebp
087096e1 +0x32f1:  mov    %esp,%ebp
087096e3 +0x32f3:  push   %ebx
087096e4 +0x32f4:  sub    $0x14,%esp
087096e7 +0x32f7:  mov    0xc(%ebp),%eax
087096ea +0x32fa:  mov    0x8(%ebp),%ebx
087096ed +0x32fd:  mov    (%eax),%edx
087096ef +0x32ff:  mov    %eax,0x4(%esp)
087096f3 +0x3303:  mov    %ebx,(%esp)
087096f6 +0x3306:  call   *0x14(%edx)
087096f9 +0x3309:  mov    %ebx,%eax
087096fb +0x330b:  mov    -0x4(%ebp),%ebx
087096fe +0x330e:  sub    $0x4,%esp
08709701 +0x3311:  leave
08709702 +0x3312:  ret    $0x4
08709705 +0x3315:  nop
08709706 +0x3316:  nop
08709707 +0x3317:  nop
08709708 +0x3318:  nop
08709709 +0x3319:  nop
0870970a +0x331a:  nop
0870970b +0x331b:  nop
0870970c +0x331c:  nop
0870970d +0x331d:  nop
0870970e +0x331e:  nop
0870970f +0x331f:  nop
08709710 +0x3320:  push   %ebp
08709711 +0x3321:  mov    %esp,%ebp
08709713 +0x3323:  push   %ebx
08709714 +0x3324:  sub    $0x14,%esp
08709717 +0x3327:  mov    0xc(%ebp),%eax
0870971a +0x332a:  mov    0x8(%ebp),%ebx
0870971d +0x332d:  mov    (%eax),%edx
0870971f +0x332f:  mov    %eax,0x4(%esp)
08709723 +0x3333:  mov    %ebx,(%esp)
08709726 +0x3336:  call   *0x18(%edx)
08709729 +0x3339:  mov    %ebx,%eax
0870972b +0x333b:  mov    -0x4(%ebp),%ebx
0870972e +0x333e:  sub    $0x4,%esp
08709731 +0x3341:  leave
08709732 +0x3342:  ret    $0x4
08709735 +0x3345:  nop
08709736 +0x3346:  nop
08709737 +0x3347:  nop
08709738 +0x3348:  nop
08709739 +0x3349:  nop
0870973a +0x334a:  nop
0870973b +0x334b:  nop
0870973c +0x334c:  nop
0870973d +0x334d:  nop
0870973e +0x334e:  nop
0870973f +0x334f:  nop
08709740 +0x3350:  push   %ebp
08709741 +0x3351:  mov    %esp,%ebp
08709743 +0x3353:  push   %ebx
08709744 +0x3354:  sub    $0x14,%esp
08709747 +0x3357:  mov    0xc(%ebp),%eax
0870974a +0x335a:  mov    0x8(%ebp),%ebx
0870974d +0x335d:  mov    (%eax),%edx
0870974f +0x335f:  mov    %eax,0x4(%esp)
08709753 +0x3363:  mov    %ebx,(%esp)
08709756 +0x3366:  call   *0x1c(%edx)
08709759 +0x3369:  mov    %ebx,%eax
0870975b +0x336b:  mov    -0x4(%ebp),%ebx
0870975e +0x336e:  sub    $0x4,%esp
08709761 +0x3371:  leave
08709762 +0x3372:  ret    $0x4
08709765 +0x3375:  nop
08709766 +0x3376:  nop
08709767 +0x3377:  nop
08709768 +0x3378:  nop
08709769 +0x3379:  nop
0870976a +0x337a:  nop
0870976b +0x337b:  nop
0870976c +0x337c:  nop
0870976d +0x337d:  nop
0870976e +0x337e:  nop
0870976f +0x337f:  nop
08709770 +0x3380:  push   %ebp
08709771 +0x3381:  mov    %esp,%ebp
08709773 +0x3383:  sub    $0x8,%esp
08709776 +0x3386:  mov    0x8(%ebp),%eax
08709779 +0x3389:  mov    (%eax),%edx
0870977b +0x338b:  mov    0x20(%edx),%eax
0870977e +0x338e:  leave
0870977f +0x338f:  jmp    *%eax
08709781 +0x3391:  nop
08709782 +0x3392:  nop
08709783 +0x3393:  nop
08709784 +0x3394:  nop
08709785 +0x3395:  nop
08709786 +0x3396:  nop
08709787 +0x3397:  nop
08709788 +0x3398:  nop
08709789 +0x3399:  nop
0870978a +0x339a:  nop
0870978b +0x339b:  nop
0870978c +0x339c:  nop
0870978d +0x339d:  nop
0870978e +0x339e:  nop
0870978f +0x339f:  nop
08709790 +0x33a0:  push   %ebp
08709791 +0x33a1:  mov    %esp,%ebp
08709793 +0x33a3:  push   %ebx
08709794 +0x33a4:  sub    $0x14,%esp
08709797 +0x33a7:  mov    0xc(%ebp),%eax
0870979a +0x33aa:  mov    0x8(%ebp),%ebx
0870979d +0x33ad:  mov    (%eax),%edx
0870979f +0x33af:  mov    %eax,0x4(%esp)
087097a3 +0x33b3:  mov    %ebx,(%esp)
087097a6 +0x33b6:  call   *0x24(%edx)
087097a9 +0x33b9:  mov    %ebx,%eax
087097ab +0x33bb:  mov    -0x4(%ebp),%ebx
087097ae +0x33be:  sub    $0x4,%esp
087097b1 +0x33c1:  leave
087097b2 +0x33c2:  ret    $0x4
087097b5 +0x33c5:  nop
087097b6 +0x33c6:  nop
087097b7 +0x33c7:  nop
087097b8 +0x33c8:  nop
087097b9 +0x33c9:  nop
087097ba +0x33ca:  nop
087097bb +0x33cb:  nop
087097bc +0x33cc:  nop
087097bd +0x33cd:  nop
087097be +0x33ce:  nop
087097bf +0x33cf:  nop
087097c0 +0x33d0:  push   %ebp
087097c1 +0x33d1:  mov    %esp,%ebp
087097c3 +0x33d3:  push   %ebx
087097c4 +0x33d4:  sub    $0x14,%esp
087097c7 +0x33d7:  mov    0xc(%ebp),%eax
087097ca +0x33da:  mov    0x8(%ebp),%ebx
087097cd +0x33dd:  mov    (%eax),%edx
087097cf +0x33df:  mov    %eax,0x4(%esp)
087097d3 +0x33e3:  mov    %ebx,(%esp)
087097d6 +0x33e6:  call   *0x28(%edx)
087097d9 +0x33e9:  mov    %ebx,%eax
087097db +0x33eb:  mov    -0x4(%ebp),%ebx
087097de +0x33ee:  sub    $0x4,%esp
087097e1 +0x33f1:  leave
087097e2 +0x33f2:  ret    $0x4
087097e5 +0x33f5:  nop
087097e6 +0x33f6:  nop
087097e7 +0x33f7:  nop
087097e8 +0x33f8:  nop
087097e9 +0x33f9:  nop
087097ea +0x33fa:  nop
087097eb +0x33fb:  nop
087097ec +0x33fc:  nop
087097ed +0x33fd:  nop
087097ee +0x33fe:  nop
087097ef +0x33ff:  nop
087097f0 +0x3400:  push   %ebp
087097f1 +0x3401:  mov    %esp,%ebp
087097f3 +0x3403:  mov    0x8(%ebp),%eax
087097f6 +0x3406:  pop    %ebp
087097f7 +0x3407:  mov    0x8(%eax),%eax
087097fa +0x340a:  mov    0x14(%eax),%eax
087097fd +0x340d:  ret
087097fe +0x340e:  nop
087097ff +0x340f:  nop
08709800 +0x3410:  push   %ebp
08709801 +0x3411:  mov    %esp,%ebp
08709803 +0x3413:  mov    0x8(%ebp),%eax
08709806 +0x3416:  pop    %ebp
08709807 +0x3417:  mov    0x8(%eax),%eax
0870980a +0x341a:  mov    0x18(%eax),%eax
0870980d +0x341d:  ret
0870980e +0x341e:  nop
0870980f +0x341f:  nop
08709810 +0x3420:  push   %ebp
08709811 +0x3421:  mov    %esp,%ebp
08709813 +0x3423:  mov    0x8(%ebp),%eax
08709816 +0x3426:  pop    %ebp
08709817 +0x3427:  mov    0x8(%eax),%eax
0870981a +0x342a:  mov    0x34(%eax),%eax
0870981d +0x342d:  ret
0870981e +0x342e:  nop
0870981f +0x342f:  nop
08709820 +0x3430:  push   %ebp
08709821 +0x3431:  mov    %esp,%ebp
08709823 +0x3433:  mov    0xc(%ebp),%edx
08709826 +0x3436:  mov    0x8(%ebp),%eax
08709829 +0x3439:  mov    0x8(%edx),%edx
0870982c +0x343c:  mov    0x38(%edx),%edx
0870982f +0x343f:  mov    %edx,(%eax)
08709831 +0x3441:  pop    %ebp
08709832 +0x3442:  ret    $0x4
08709835 +0x3445:  nop
08709836 +0x3446:  nop
08709837 +0x3447:  nop
08709838 +0x3448:  nop
08709839 +0x3449:  nop
0870983a +0x344a:  nop
0870983b +0x344b:  nop
0870983c +0x344c:  nop
0870983d +0x344d:  nop
0870983e +0x344e:  nop
0870983f +0x344f:  nop
08709840 +0x3450:  push   %ebp
08709841 +0x3451:  mov    %esp,%ebp
08709843 +0x3453:  mov    0xc(%ebp),%edx
08709846 +0x3456:  mov    0x8(%ebp),%eax
08709849 +0x3459:  mov    0x8(%edx),%edx
0870984c +0x345c:  mov    0x3c(%edx),%edx
0870984f +0x345f:  mov    %edx,(%eax)
08709851 +0x3461:  pop    %ebp
08709852 +0x3462:  ret    $0x4
08709855 +0x3465:  nop
08709856 +0x3466:  nop
08709857 +0x3467:  nop
08709858 +0x3468:  nop
08709859 +0x3469:  nop
0870985a +0x346a:  nop
0870985b +0x346b:  nop
0870985c +0x346c:  nop
0870985d +0x346d:  nop
0870985e +0x346e:  nop
0870985f +0x346f:  nop
08709860 +0x3470:  push   %ebp
08709861 +0x3471:  mov    %esp,%ebp
08709863 +0x3473:  sub    $0x8,%esp
08709866 +0x3476:  mov    0x8(%ebp),%eax
08709869 +0x3479:  mov    (%eax),%edx
0870986b +0x347b:  mov    0x8(%edx),%eax
0870986e +0x347e:  leave
0870986f +0x347f:  jmp    *%eax
08709871 +0x3481:  nop
08709872 +0x3482:  nop
08709873 +0x3483:  nop
08709874 +0x3484:  nop
08709875 +0x3485:  nop
08709876 +0x3486:  nop
08709877 +0x3487:  nop
08709878 +0x3488:  nop
08709879 +0x3489:  nop
0870987a +0x348a:  nop
0870987b +0x348b:  nop
0870987c +0x348c:  nop
0870987d +0x348d:  nop
0870987e +0x348e:  nop
0870987f +0x348f:  nop
08709880 +0x3490:  push   %ebp
08709881 +0x3491:  mov    %esp,%ebp
08709883 +0x3493:  sub    $0x8,%esp
08709886 +0x3496:  mov    0x8(%ebp),%eax
08709889 +0x3499:  mov    (%eax),%edx
0870988b +0x349b:  mov    0xc(%edx),%eax
0870988e +0x349e:  leave
0870988f +0x349f:  jmp    *%eax
08709891 +0x34a1:  nop
08709892 +0x34a2:  nop
08709893 +0x34a3:  nop
08709894 +0x34a4:  nop
08709895 +0x34a5:  nop
08709896 +0x34a6:  nop
08709897 +0x34a7:  nop
08709898 +0x34a8:  nop
08709899 +0x34a9:  nop
0870989a +0x34aa:  nop
0870989b +0x34ab:  nop
0870989c +0x34ac:  nop
0870989d +0x34ad:  nop
0870989e +0x34ae:  nop
0870989f +0x34af:  nop
087098a0 +0x34b0:  push   %ebp
087098a1 +0x34b1:  mov    %esp,%ebp
087098a3 +0x34b3:  push   %ebx
087098a4 +0x34b4:  sub    $0x14,%esp
087098a7 +0x34b7:  mov    0xc(%ebp),%eax
087098aa +0x34ba:  mov    0x8(%ebp),%ebx
087098ad +0x34bd:  mov    (%eax),%edx
087098af +0x34bf:  mov    %eax,0x4(%esp)
087098b3 +0x34c3:  mov    %ebx,(%esp)
087098b6 +0x34c6:  call   *0x10(%edx)
087098b9 +0x34c9:  mov    %ebx,%eax
087098bb +0x34cb:  mov    -0x4(%ebp),%ebx
087098be +0x34ce:  sub    $0x4,%esp
087098c1 +0x34d1:  leave
087098c2 +0x34d2:  ret    $0x4
087098c5 +0x34d5:  nop
087098c6 +0x34d6:  nop
087098c7 +0x34d7:  nop
087098c8 +0x34d8:  nop
087098c9 +0x34d9:  nop
087098ca +0x34da:  nop
087098cb +0x34db:  nop
087098cc +0x34dc:  nop
087098cd +0x34dd:  nop
087098ce +0x34de:  nop
087098cf +0x34df:  nop
087098d0 +0x34e0:  push   %ebp
087098d1 +0x34e1:  mov    %esp,%ebp
087098d3 +0x34e3:  push   %ebx
087098d4 +0x34e4:  sub    $0x14,%esp
087098d7 +0x34e7:  mov    0xc(%ebp),%eax
087098da +0x34ea:  mov    0x8(%ebp),%ebx
087098dd +0x34ed:  mov    (%eax),%edx
087098df +0x34ef:  mov    %eax,0x4(%esp)
087098e3 +0x34f3:  mov    %ebx,(%esp)
087098e6 +0x34f6:  call   *0x14(%edx)
087098e9 +0x34f9:  mov    %ebx,%eax
087098eb +0x34fb:  mov    -0x4(%ebp),%ebx
087098ee +0x34fe:  sub    $0x4,%esp
087098f1 +0x3501:  leave
087098f2 +0x3502:  ret    $0x4
087098f5 +0x3505:  nop
087098f6 +0x3506:  nop
087098f7 +0x3507:  nop
087098f8 +0x3508:  nop
087098f9 +0x3509:  nop
087098fa +0x350a:  nop
087098fb +0x350b:  nop
087098fc +0x350c:  nop
087098fd +0x350d:  nop
087098fe +0x350e:  nop
087098ff +0x350f:  nop
08709900 +0x3510:  push   %ebp
08709901 +0x3511:  mov    %esp,%ebp
08709903 +0x3513:  push   %ebx
08709904 +0x3514:  sub    $0x14,%esp
08709907 +0x3517:  mov    0xc(%ebp),%eax
0870990a +0x351a:  mov    0x8(%ebp),%ebx
0870990d +0x351d:  mov    (%eax),%edx
0870990f +0x351f:  mov    %eax,0x4(%esp)
08709913 +0x3523:  mov    %ebx,(%esp)
08709916 +0x3526:  call   *0x18(%edx)
08709919 +0x3529:  mov    %ebx,%eax
0870991b +0x352b:  mov    -0x4(%ebp),%ebx
0870991e +0x352e:  sub    $0x4,%esp
08709921 +0x3531:  leave
08709922 +0x3532:  ret    $0x4
08709925 +0x3535:  nop
08709926 +0x3536:  nop
08709927 +0x3537:  nop
08709928 +0x3538:  nop
08709929 +0x3539:  nop
0870992a +0x353a:  nop
0870992b +0x353b:  nop
0870992c +0x353c:  nop
0870992d +0x353d:  nop
0870992e +0x353e:  nop
0870992f +0x353f:  nop
08709930 +0x3540:  push   %ebp
08709931 +0x3541:  mov    %esp,%ebp
08709933 +0x3543:  push   %ebx
08709934 +0x3544:  sub    $0x14,%esp
08709937 +0x3547:  mov    0xc(%ebp),%eax
0870993a +0x354a:  mov    0x8(%ebp),%ebx
0870993d +0x354d:  mov    (%eax),%edx
0870993f +0x354f:  mov    %eax,0x4(%esp)
08709943 +0x3553:  mov    %ebx,(%esp)
08709946 +0x3556:  call   *0x1c(%edx)
08709949 +0x3559:  mov    %ebx,%eax
0870994b +0x355b:  mov    -0x4(%ebp),%ebx
0870994e +0x355e:  sub    $0x4,%esp
08709951 +0x3561:  leave
08709952 +0x3562:  ret    $0x4
08709955 +0x3565:  nop
08709956 +0x3566:  nop
08709957 +0x3567:  nop
08709958 +0x3568:  nop
08709959 +0x3569:  nop
0870995a +0x356a:  nop
0870995b +0x356b:  nop
0870995c +0x356c:  nop
0870995d +0x356d:  nop
0870995e +0x356e:  nop
0870995f +0x356f:  nop
08709960 +0x3570:  push   %ebp
08709961 +0x3571:  mov    %esp,%ebp
08709963 +0x3573:  sub    $0x8,%esp
08709966 +0x3576:  mov    0x8(%ebp),%eax
08709969 +0x3579:  mov    (%eax),%edx
0870996b +0x357b:  mov    0x20(%edx),%eax
0870996e +0x357e:  leave
0870996f +0x357f:  jmp    *%eax
08709971 +0x3581:  nop
08709972 +0x3582:  nop
08709973 +0x3583:  nop
08709974 +0x3584:  nop
08709975 +0x3585:  nop
08709976 +0x3586:  nop
08709977 +0x3587:  nop
08709978 +0x3588:  nop
08709979 +0x3589:  nop
0870997a +0x358a:  nop
0870997b +0x358b:  nop
0870997c +0x358c:  nop
0870997d +0x358d:  nop
0870997e +0x358e:  nop
0870997f +0x358f:  nop
08709980 +0x3590:  push   %ebp
08709981 +0x3591:  mov    %esp,%ebp
08709983 +0x3593:  push   %ebx
08709984 +0x3594:  sub    $0x14,%esp
08709987 +0x3597:  mov    0xc(%ebp),%eax
0870998a +0x359a:  mov    0x8(%ebp),%ebx
0870998d +0x359d:  mov    (%eax),%edx
0870998f +0x359f:  mov    %eax,0x4(%esp)
08709993 +0x35a3:  mov    %ebx,(%esp)
08709996 +0x35a6:  call   *0x24(%edx)
08709999 +0x35a9:  mov    %ebx,%eax
0870999b +0x35ab:  mov    -0x4(%ebp),%ebx
0870999e +0x35ae:  sub    $0x4,%esp
087099a1 +0x35b1:  leave
087099a2 +0x35b2:  ret    $0x4
087099a5 +0x35b5:  nop
087099a6 +0x35b6:  nop
087099a7 +0x35b7:  nop
087099a8 +0x35b8:  nop
087099a9 +0x35b9:  nop
087099aa +0x35ba:  nop
087099ab +0x35bb:  nop
087099ac +0x35bc:  nop
087099ad +0x35bd:  nop
087099ae +0x35be:  nop
087099af +0x35bf:  nop
087099b0 +0x35c0:  push   %ebp
087099b1 +0x35c1:  mov    %esp,%ebp
087099b3 +0x35c3:  push   %ebx
087099b4 +0x35c4:  sub    $0x14,%esp
087099b7 +0x35c7:  mov    0xc(%ebp),%eax
087099ba +0x35ca:  mov    0x8(%ebp),%ebx
087099bd +0x35cd:  mov    (%eax),%edx
087099bf +0x35cf:  mov    %eax,0x4(%esp)
087099c3 +0x35d3:  mov    %ebx,(%esp)
087099c6 +0x35d6:  call   *0x28(%edx)
087099c9 +0x35d9:  mov    %ebx,%eax
087099cb +0x35db:  mov    -0x4(%ebp),%ebx
087099ce +0x35de:  sub    $0x4,%esp
087099d1 +0x35e1:  leave
087099d2 +0x35e2:  ret    $0x4
087099d5 +0x35e5:  nop
087099d6 +0x35e6:  nop
087099d7 +0x35e7:  nop
087099d8 +0x35e8:  nop
087099d9 +0x35e9:  nop
087099da +0x35ea:  nop
087099db +0x35eb:  nop
087099dc +0x35ec:  nop
087099dd +0x35ed:  nop
087099de +0x35ee:  nop
087099df +0x35ef:  nop
087099e0 +0x35f0:  push   %ebp
087099e1 +0x35f1:  mov    %esp,%ebp
087099e3 +0x35f3:  mov    0x8(%ebp),%eax
087099e6 +0x35f6:  pop    %ebp
087099e7 +0x35f7:  mov    0x8(%eax),%eax
087099ea +0x35fa:  mov    0x14(%eax),%eax
087099ed +0x35fd:  ret
087099ee +0x35fe:  nop
087099ef +0x35ff:  nop
087099f0 +0x3600:  push   %ebp
087099f1 +0x3601:  mov    %esp,%ebp
087099f3 +0x3603:  mov    0x8(%ebp),%eax
087099f6 +0x3606:  pop    %ebp
087099f7 +0x3607:  mov    0x8(%eax),%eax
087099fa +0x360a:  mov    0x18(%eax),%eax
087099fd +0x360d:  ret
087099fe +0x360e:  nop
087099ff +0x360f:  nop
08709a00 +0x3610:  push   %ebp
08709a01 +0x3611:  mov    %esp,%ebp
08709a03 +0x3613:  mov    0x8(%ebp),%eax
08709a06 +0x3616:  pop    %ebp
08709a07 +0x3617:  mov    0x8(%eax),%eax
08709a0a +0x361a:  mov    0x34(%eax),%eax
08709a0d +0x361d:  ret
08709a0e +0x361e:  nop
08709a0f +0x361f:  nop
08709a10 +0x3620:  push   %ebp
08709a11 +0x3621:  mov    %esp,%ebp
08709a13 +0x3623:  mov    0xc(%ebp),%edx
08709a16 +0x3626:  mov    0x8(%ebp),%eax
08709a19 +0x3629:  mov    0x8(%edx),%edx
08709a1c +0x362c:  mov    0x38(%edx),%edx
08709a1f +0x362f:  mov    %edx,(%eax)
08709a21 +0x3631:  pop    %ebp
08709a22 +0x3632:  ret    $0x4
08709a25 +0x3635:  nop
08709a26 +0x3636:  nop
08709a27 +0x3637:  nop
08709a28 +0x3638:  nop
08709a29 +0x3639:  nop
08709a2a +0x363a:  nop
08709a2b +0x363b:  nop
08709a2c +0x363c:  nop
08709a2d +0x363d:  nop
08709a2e +0x363e:  nop
08709a2f +0x363f:  nop
08709a30 +0x3640:  push   %ebp
08709a31 +0x3641:  mov    %esp,%ebp
08709a33 +0x3643:  mov    0xc(%ebp),%edx
08709a36 +0x3646:  mov    0x8(%ebp),%eax
08709a39 +0x3649:  mov    0x8(%edx),%edx
08709a3c +0x364c:  mov    0x3c(%edx),%edx
08709a3f +0x364f:  mov    %edx,(%eax)
08709a41 +0x3651:  pop    %ebp
08709a42 +0x3652:  ret    $0x4
08709a45 +0x3655:  nop
08709a46 +0x3656:  nop
08709a47 +0x3657:  nop
08709a48 +0x3658:  nop
08709a49 +0x3659:  nop
08709a4a +0x365a:  nop
08709a4b +0x365b:  nop
08709a4c +0x365c:  nop
08709a4d +0x365d:  nop
08709a4e +0x365e:  nop
08709a4f +0x365f:  nop
08709a50 +0x3660:  push   %ebp
08709a51 +0x3661:  xor    %edx,%edx
08709a53 +0x3663:  mov    %esp,%ebp
08709a55 +0x3665:  mov    0x8(%ebp),%eax
08709a58 +0x3668:  cmpl   $0x0,0xc(%ebp)
08709a5c +0x366c:  setne  %dl
08709a5f +0x366f:  mov    %edx,0x4(%eax)
08709a62 +0x3672:  movl   $&_ZTVSt18__moneypunct_cacheIwLb0EE+0x8,(%eax)
08709a68 +0x3678:  movl   $0x0,0x8(%eax)
08709a6f +0x367f:  movl   $0x0,0xc(%eax)
08709a76 +0x3686:  movb   $0x0,0x10(%eax)
08709a7a +0x368a:  movl   $0x0,0x14(%eax)
08709a81 +0x3691:  movl   $0x0,0x18(%eax)
08709a88 +0x3698:  movl   $0x0,0x1c(%eax)
08709a8f +0x369f:  movl   $0x0,0x20(%eax)
08709a96 +0x36a6:  movl   $0x0,0x24(%eax)
08709a9d +0x36ad:  movl   $0x0,0x28(%eax)
08709aa4 +0x36b4:  movl   $0x0,0x2c(%eax)
08709aab +0x36bb:  movl   $0x0,0x30(%eax)
08709ab2 +0x36c2:  movl   $0x0,0x34(%eax)
08709ab9 +0x36c9:  movb   $0x0,0x38(%eax)
08709abd +0x36cd:  movb   $0x0,0x39(%eax)
08709ac1 +0x36d1:  movb   $0x0,0x3a(%eax)
08709ac5 +0x36d5:  movb   $0x0,0x3b(%eax)
08709ac9 +0x36d9:  movb   $0x0,0x3c(%eax)
08709acd +0x36dd:  movb   $0x0,0x3d(%eax)
08709ad1 +0x36e1:  movb   $0x0,0x3e(%eax)
08709ad5 +0x36e5:  movb   $0x0,0x3f(%eax)
08709ad9 +0x36e9:  movb   $0x0,0x6c(%eax)
08709add +0x36ed:  pop    %ebp
08709ade +0x36ee:  ret
08709adf +0x36ef:  nop
08709ae0 +0x36f0:  push   %ebp
08709ae1 +0x36f1:  xor    %edx,%edx
08709ae3 +0x36f3:  mov    %esp,%ebp
08709ae5 +0x36f5:  mov    0x8(%ebp),%eax
08709ae8 +0x36f8:  cmpl   $0x0,0xc(%ebp)
08709aec +0x36fc:  setne  %dl
08709aef +0x36ff:  mov    %edx,0x4(%eax)
08709af2 +0x3702:  movl   $&_ZTVSt18__moneypunct_cacheIwLb1EE+0x8,(%eax)
08709af8 +0x3708:  movl   $0x0,0x8(%eax)
08709aff +0x370f:  movl   $0x0,0xc(%eax)
08709b06 +0x3716:  movb   $0x0,0x10(%eax)
08709b0a +0x371a:  movl   $0x0,0x14(%eax)
08709b11 +0x3721:  movl   $0x0,0x18(%eax)
08709b18 +0x3728:  movl   $0x0,0x1c(%eax)
08709b1f +0x372f:  movl   $0x0,0x20(%eax)
08709b26 +0x3736:  movl   $0x0,0x24(%eax)
08709b2d +0x373d:  movl   $0x0,0x28(%eax)
08709b34 +0x3744:  movl   $0x0,0x2c(%eax)
08709b3b +0x374b:  movl   $0x0,0x30(%eax)
08709b42 +0x3752:  movl   $0x0,0x34(%eax)
08709b49 +0x3759:  movb   $0x0,0x38(%eax)
08709b4d +0x375d:  movb   $0x0,0x39(%eax)
08709b51 +0x3761:  movb   $0x0,0x3a(%eax)
08709b55 +0x3765:  movb   $0x0,0x3b(%eax)
08709b59 +0x3769:  movb   $0x0,0x3c(%eax)
08709b5d +0x376d:  movb   $0x0,0x3d(%eax)
08709b61 +0x3771:  movb   $0x0,0x3e(%eax)
08709b65 +0x3775:  movb   $0x0,0x3f(%eax)
08709b69 +0x3779:  movb   $0x0,0x6c(%eax)
08709b6d +0x377d:  pop    %ebp
08709b6e +0x377e:  ret
08709b6f +0x377f:  nop
08709b70 +0x3780:  push   %ebp
08709b71 +0x3781:  xor    %edx,%edx
08709b73 +0x3783:  mov    %esp,%ebp
08709b75 +0x3785:  mov    0x8(%ebp),%eax
08709b78 +0x3788:  cmpl   $0x0,0xc(%ebp)
08709b7c +0x378c:  setne  %dl
08709b7f +0x378f:  mov    %edx,0x4(%eax)
08709b82 +0x3792:  movl   $&_ZTVSt9money_getIwSt19istreambuf_iteratorIwSt11char_traitsIwEEE+0x8,(%eax)
08709b88 +0x3798:  pop    %ebp
08709b89 +0x3799:  ret
08709b8a +0x379a:  nop
08709b8b +0x379b:  nop
08709b8c +0x379c:  nop
08709b8d +0x379d:  nop
08709b8e +0x379e:  nop
08709b8f +0x379f:  nop
08709b90 +0x37a0:  push   %ebp
08709b91 +0x37a1:  mov    %esp,%ebp
08709b93 +0x37a3:  sub    $0x48,%esp
08709b96 +0x37a6:  mov    0xc(%ebp),%eax
08709b99 +0x37a9:  mov    0x2c(%ebp),%ecx
08709b9c +0x37ac:  mov    %ebx,-0xc(%ebp)
08709b9f +0x37af:  mov    0x8(%ebp),%ebx
08709ba2 +0x37b2:  mov    %esi,-0x8(%ebp)
08709ba5 +0x37b5:  mov    0x18(%ebp),%esi
08709ba8 +0x37b8:  mov    %edi,-0x4(%ebp)
08709bab +0x37bb:  mov    (%eax),%edx
08709bad +0x37bd:  mov    %ecx,0x24(%esp)
08709bb1 +0x37c1:  mov    0x28(%ebp),%ecx
08709bb4 +0x37c4:  mov    0x1c(%ebp),%edi
08709bb7 +0x37c7:  mov    %esi,0x10(%esp)
08709bbb +0x37cb:  mov    0x10(%ebp),%esi
08709bbe +0x37ce:  mov    %eax,0x4(%esp)
08709bc2 +0x37d2:  mov    %ecx,0x20(%esp)
08709bc6 +0x37d6:  mov    0x24(%ebp),%ecx
08709bc9 +0x37d9:  mov    %edi,0x14(%esp)
08709bcd +0x37dd:  mov    0x14(%ebp),%edi
08709bd0 +0x37e0:  mov    %esi,0x8(%esp)
08709bd4 +0x37e4:  mov    %ebx,(%esp)
08709bd7 +0x37e7:  mov    %ecx,0x1c(%esp)
08709bdb +0x37eb:  movzbl 0x20(%ebp),%ecx
08709bdf +0x37ef:  mov    %edi,0xc(%esp)
08709be3 +0x37f3:  mov    %ecx,0x18(%esp)
08709be7 +0x37f7:  call   *0x8(%edx)
08709bea +0x37fa:  mov    %ebx,%eax
08709bec +0x37fc:  mov    -0x8(%ebp),%esi
08709bef +0x37ff:  mov    -0xc(%ebp),%ebx
08709bf2 +0x3802:  mov    -0x4(%ebp),%edi
08709bf5 +0x3805:  sub    $0x4,%esp
08709bf8 +0x3808:  mov    %ebp,%esp
08709bfa +0x380a:  pop    %ebp
08709bfb +0x380b:  ret    $0x4
08709bfe +0x380e:  nop
08709bff +0x380f:  nop
08709c00 +0x3810:  push   %ebp
08709c01 +0x3811:  mov    %esp,%ebp
08709c03 +0x3813:  sub    $0x48,%esp
08709c06 +0x3816:  mov    0xc(%ebp),%eax
08709c09 +0x3819:  mov    0x2c(%ebp),%ecx
08709c0c +0x381c:  mov    %ebx,-0xc(%ebp)
08709c0f +0x381f:  mov    0x8(%ebp),%ebx
08709c12 +0x3822:  mov    %esi,-0x8(%ebp)
08709c15 +0x3825:  mov    0x18(%ebp),%esi
08709c18 +0x3828:  mov    %edi,-0x4(%ebp)
08709c1b +0x382b:  mov    (%eax),%edx
08709c1d +0x382d:  mov    %ecx,0x24(%esp)
08709c21 +0x3831:  mov    0x28(%ebp),%ecx
08709c24 +0x3834:  mov    0x1c(%ebp),%edi
08709c27 +0x3837:  mov    %esi,0x10(%esp)
08709c2b +0x383b:  mov    0x10(%ebp),%esi
08709c2e +0x383e:  mov    %eax,0x4(%esp)
08709c32 +0x3842:  mov    %ecx,0x20(%esp)
08709c36 +0x3846:  mov    0x24(%ebp),%ecx
08709c39 +0x3849:  mov    %edi,0x14(%esp)
08709c3d +0x384d:  mov    0x14(%ebp),%edi
08709c40 +0x3850:  mov    %esi,0x8(%esp)
08709c44 +0x3854:  mov    %ebx,(%esp)
08709c47 +0x3857:  mov    %ecx,0x1c(%esp)
08709c4b +0x385b:  movzbl 0x20(%ebp),%ecx
08709c4f +0x385f:  mov    %edi,0xc(%esp)
08709c53 +0x3863:  mov    %ecx,0x18(%esp)
08709c57 +0x3867:  call   *0xc(%edx)
08709c5a +0x386a:  mov    %ebx,%eax
08709c5c +0x386c:  mov    -0x8(%ebp),%esi
08709c5f +0x386f:  mov    -0xc(%ebp),%ebx
08709c62 +0x3872:  mov    -0x4(%ebp),%edi
08709c65 +0x3875:  sub    $0x4,%esp
08709c68 +0x3878:  mov    %ebp,%esp
08709c6a +0x387a:  pop    %ebp
08709c6b +0x387b:  ret    $0x4
08709c6e +0x387e:  nop
08709c6f +0x387f:  nop
08709c70 +0x3880:  push   %ebp
08709c71 +0x3881:  xor    %edx,%edx
08709c73 +0x3883:  mov    %esp,%ebp
08709c75 +0x3885:  mov    0x8(%ebp),%eax
08709c78 +0x3888:  cmpl   $0x0,0xc(%ebp)
08709c7c +0x388c:  setne  %dl
08709c7f +0x388f:  mov    %edx,0x4(%eax)
08709c82 +0x3892:  movl   $&_ZTVSt9money_putIwSt19ostreambuf_iteratorIwSt11char_traitsIwEEE+0x8,(%eax)
08709c88 +0x3898:  pop    %ebp
08709c89 +0x3899:  ret
08709c8a +0x389a:  nop
08709c8b +0x389b:  nop
08709c8c +0x389c:  nop
08709c8d +0x389d:  nop
08709c8e +0x389e:  nop
08709c8f +0x389f:  nop
08709c90 +0x38a0:  push   %ebp
08709c91 +0x38a1:  mov    %esp,%ebp
08709c93 +0x38a3:  sub    $0x48,%esp
08709c96 +0x38a6:  mov    0xc(%ebp),%eax
08709c99 +0x38a9:  mov    0x20(%ebp),%ecx
08709c9c +0x38ac:  mov    %ebx,-0xc(%ebp)
08709c9f +0x38af:  mov    0x8(%ebp),%ebx
08709ca2 +0x38b2:  mov    %esi,-0x8(%ebp)
08709ca5 +0x38b5:  mov    0x10(%ebp),%esi
08709ca8 +0x38b8:  mov    %edi,-0x4(%ebp)
08709cab +0x38bb:  mov    (%eax),%edx
08709cad +0x38bd:  mov    %ecx,0x18(%esp)
08709cb1 +0x38c1:  mov    0x1c(%ebp),%ecx
08709cb4 +0x38c4:  mov    0x14(%ebp),%edi
08709cb7 +0x38c7:  fldt   0x24(%ebp)
08709cba +0x38ca:  mov    %esi,0x8(%esp)
08709cbe +0x38ce:  mov    %ecx,0x14(%esp)
08709cc2 +0x38d2:  movzbl 0x18(%ebp),%ecx
08709cc6 +0x38d6:  mov    %edi,0xc(%esp)
08709cca +0x38da:  mov    %eax,0x4(%esp)
08709cce +0x38de:  mov    %ebx,(%esp)
08709cd1 +0x38e1:  fstpt  0x1c(%esp)
08709cd5 +0x38e5:  mov    %ecx,0x10(%esp)
08709cd9 +0x38e9:  call   *0x8(%edx)
08709cdc +0x38ec:  mov    %ebx,%eax
08709cde +0x38ee:  mov    -0x8(%ebp),%esi
08709ce1 +0x38f1:  mov    -0xc(%ebp),%ebx
08709ce4 +0x38f4:  mov    -0x4(%ebp),%edi
08709ce7 +0x38f7:  sub    $0x4,%esp
08709cea +0x38fa:  mov    %ebp,%esp
08709cec +0x38fc:  pop    %ebp
08709ced +0x38fd:  ret    $0x4
08709cf0 +0x3900:  push   %ebp
08709cf1 +0x3901:  mov    %esp,%ebp
08709cf3 +0x3903:  sub    $0x38,%esp
08709cf6 +0x3906:  mov    0xc(%ebp),%eax
08709cf9 +0x3909:  mov    0x24(%ebp),%ecx
08709cfc +0x390c:  mov    %ebx,-0xc(%ebp)
08709cff +0x390f:  mov    0x8(%ebp),%ebx
08709d02 +0x3912:  mov    %esi,-0x8(%ebp)
08709d05 +0x3915:  mov    0x10(%ebp),%esi
08709d08 +0x3918:  mov    %edi,-0x4(%ebp)
08709d0b +0x391b:  mov    (%eax),%edx
08709d0d +0x391d:  mov    %ecx,0x1c(%esp)
08709d11 +0x3921:  mov    0x20(%ebp),%ecx
08709d14 +0x3924:  mov    0x14(%ebp),%edi
08709d17 +0x3927:  mov    %esi,0x8(%esp)
08709d1b +0x392b:  mov    %eax,0x4(%esp)
08709d1f +0x392f:  mov    %ecx,0x18(%esp)
08709d23 +0x3933:  mov    0x1c(%ebp),%ecx
08709d26 +0x3936:  mov    %edi,0xc(%esp)
08709d2a +0x393a:  mov    %ebx,(%esp)
08709d2d +0x393d:  mov    %ecx,0x14(%esp)
08709d31 +0x3941:  movzbl 0x18(%ebp),%ecx
08709d35 +0x3945:  mov    %ecx,0x10(%esp)
08709d39 +0x3949:  call   *0xc(%edx)
08709d3c +0x394c:  mov    %ebx,%eax
08709d3e +0x394e:  mov    -0x8(%ebp),%esi
08709d41 +0x3951:  mov    -0xc(%ebp),%ebx
08709d44 +0x3954:  mov    -0x4(%ebp),%edi
08709d47 +0x3957:  sub    $0x4,%esp
08709d4a +0x395a:  mov    %ebp,%esp
08709d4c +0x395c:  pop    %ebp
08709d4d +0x395d:  ret    $0x4
08709d50 +0x3960:  push   %ebp
08709d51 +0x3961:  mov    %esp,%ebp
08709d53 +0x3963:  sub    $0x8,%esp
08709d56 +0x3966:  mov    0x8(%ebp),%eax
08709d59 +0x3969:  mov    (%eax),%edx
08709d5b +0x396b:  mov    0x8(%edx),%eax
08709d5e +0x396e:  leave
08709d5f +0x396f:  jmp    *%eax
08709d61 +0x3971:  nop
08709d62 +0x3972:  nop
08709d63 +0x3973:  nop
08709d64 +0x3974:  nop
08709d65 +0x3975:  nop
08709d66 +0x3976:  nop
08709d67 +0x3977:  nop
08709d68 +0x3978:  nop
08709d69 +0x3979:  nop
08709d6a +0x397a:  nop
08709d6b +0x397b:  nop
08709d6c +0x397c:  nop
08709d6d +0x397d:  nop
08709d6e +0x397e:  nop
08709d6f +0x397f:  nop
08709d70 +0x3980:  push   %ebp
08709d71 +0x3981:  mov    %esp,%ebp
08709d73 +0x3983:  sub    $0x8,%esp
08709d76 +0x3986:  mov    0x8(%ebp),%eax
08709d79 +0x3989:  mov    (%eax),%edx
08709d7b +0x398b:  mov    0xc(%edx),%eax
08709d7e +0x398e:  leave
08709d7f +0x398f:  jmp    *%eax
08709d81 +0x3991:  nop
08709d82 +0x3992:  nop
08709d83 +0x3993:  nop
08709d84 +0x3994:  nop
08709d85 +0x3995:  nop
08709d86 +0x3996:  nop
08709d87 +0x3997:  nop
08709d88 +0x3998:  nop
08709d89 +0x3999:  nop
08709d8a +0x399a:  nop
08709d8b +0x399b:  nop
08709d8c +0x399c:  nop
08709d8d +0x399d:  nop
08709d8e +0x399e:  nop
08709d8f +0x399f:  nop
08709d90 +0x39a0:  push   %ebp
08709d91 +0x39a1:  mov    %esp,%ebp
08709d93 +0x39a3:  push   %ebx
08709d94 +0x39a4:  sub    $0x14,%esp
08709d97 +0x39a7:  mov    0xc(%ebp),%eax
08709d9a +0x39aa:  mov    0x8(%ebp),%ebx
08709d9d +0x39ad:  mov    (%eax),%edx
08709d9f +0x39af:  mov    %eax,0x4(%esp)
08709da3 +0x39b3:  mov    %ebx,(%esp)
08709da6 +0x39b6:  call   *0x10(%edx)
08709da9 +0x39b9:  mov    %ebx,%eax
08709dab +0x39bb:  mov    -0x4(%ebp),%ebx
08709dae +0x39be:  sub    $0x4,%esp
08709db1 +0x39c1:  leave
08709db2 +0x39c2:  ret    $0x4
08709db5 +0x39c5:  nop
08709db6 +0x39c6:  nop
08709db7 +0x39c7:  nop
08709db8 +0x39c8:  nop
08709db9 +0x39c9:  nop
08709dba +0x39ca:  nop
08709dbb +0x39cb:  nop
08709dbc +0x39cc:  nop
08709dbd +0x39cd:  nop
08709dbe +0x39ce:  nop
08709dbf +0x39cf:  nop
08709dc0 +0x39d0:  push   %ebp
08709dc1 +0x39d1:  mov    %esp,%ebp
08709dc3 +0x39d3:  push   %ebx
08709dc4 +0x39d4:  sub    $0x14,%esp
08709dc7 +0x39d7:  mov    0xc(%ebp),%eax
08709dca +0x39da:  mov    0x8(%ebp),%ebx
08709dcd +0x39dd:  mov    (%eax),%edx
08709dcf +0x39df:  mov    %eax,0x4(%esp)
08709dd3 +0x39e3:  mov    %ebx,(%esp)
08709dd6 +0x39e6:  call   *0x14(%edx)
08709dd9 +0x39e9:  mov    %ebx,%eax
08709ddb +0x39eb:  mov    -0x4(%ebp),%ebx
08709dde +0x39ee:  sub    $0x4,%esp
08709de1 +0x39f1:  leave
08709de2 +0x39f2:  ret    $0x4
08709de5 +0x39f5:  nop
08709de6 +0x39f6:  nop
08709de7 +0x39f7:  nop
08709de8 +0x39f8:  nop
08709de9 +0x39f9:  nop
08709dea +0x39fa:  nop
08709deb +0x39fb:  nop
08709dec +0x39fc:  nop
08709ded +0x39fd:  nop
08709dee +0x39fe:  nop
08709def +0x39ff:  nop
08709df0 +0x3a00:  push   %ebp
08709df1 +0x3a01:  mov    %esp,%ebp
08709df3 +0x3a03:  push   %ebx
08709df4 +0x3a04:  sub    $0x14,%esp
08709df7 +0x3a07:  mov    0xc(%ebp),%eax
08709dfa +0x3a0a:  mov    0x8(%ebp),%ebx
08709dfd +0x3a0d:  mov    (%eax),%edx
08709dff +0x3a0f:  mov    %eax,0x4(%esp)
08709e03 +0x3a13:  mov    %ebx,(%esp)
08709e06 +0x3a16:  call   *0x18(%edx)
08709e09 +0x3a19:  mov    %ebx,%eax
08709e0b +0x3a1b:  mov    -0x4(%ebp),%ebx
08709e0e +0x3a1e:  sub    $0x4,%esp
08709e11 +0x3a21:  leave
08709e12 +0x3a22:  ret    $0x4
08709e15 +0x3a25:  nop
08709e16 +0x3a26:  nop
08709e17 +0x3a27:  nop
08709e18 +0x3a28:  nop
08709e19 +0x3a29:  nop
08709e1a +0x3a2a:  nop
08709e1b +0x3a2b:  nop
08709e1c +0x3a2c:  nop
08709e1d +0x3a2d:  nop
08709e1e +0x3a2e:  nop
08709e1f +0x3a2f:  nop
08709e20 +0x3a30:  push   %ebp
08709e21 +0x3a31:  mov    %esp,%ebp
08709e23 +0x3a33:  mov    0x8(%ebp),%eax
08709e26 +0x3a36:  pop    %ebp
08709e27 +0x3a37:  mov    0x8(%eax),%eax
08709e2a +0x3a3a:  mov    0x24(%eax),%eax
08709e2d +0x3a3d:  ret
08709e2e +0x3a3e:  nop
08709e2f +0x3a3f:  nop
08709e30 +0x3a40:  push   %ebp
08709e31 +0x3a41:  mov    %esp,%ebp
08709e33 +0x3a43:  mov    0x8(%ebp),%eax
08709e36 +0x3a46:  pop    %ebp
08709e37 +0x3a47:  mov    0x8(%eax),%eax
08709e3a +0x3a4a:  mov    0x28(%eax),%eax
08709e3d +0x3a4d:  ret
08709e3e +0x3a4e:  nop
08709e3f +0x3a4f:  nop
08709e40 +0x3a50:  push   %ebp
08709e41 +0x3a51:  xor    %edx,%edx
08709e43 +0x3a53:  mov    %esp,%ebp
08709e45 +0x3a55:  mov    0x8(%ebp),%eax
08709e48 +0x3a58:  cmpl   $0x0,0xc(%ebp)
08709e4c +0x3a5c:  setne  %dl
08709e4f +0x3a5f:  mov    %edx,0x4(%eax)
08709e52 +0x3a62:  movl   $&_ZTVSt16__numpunct_cacheIwE+0x8,(%eax)
08709e58 +0x3a68:  movl   $0x0,0x8(%eax)
08709e5f +0x3a6f:  movl   $0x0,0xc(%eax)
08709e66 +0x3a76:  movb   $0x0,0x10(%eax)
08709e6a +0x3a7a:  movl   $0x0,0x14(%eax)
08709e71 +0x3a81:  movl   $0x0,0x18(%eax)
08709e78 +0x3a88:  movl   $0x0,0x1c(%eax)
08709e7f +0x3a8f:  movl   $0x0,0x20(%eax)
08709e86 +0x3a96:  movl   $0x0,0x24(%eax)
08709e8d +0x3a9d:  movl   $0x0,0x28(%eax)
08709e94 +0x3aa4:  movb   $0x0,0x124(%eax)
08709e9b +0x3aab:  pop    %ebp
08709e9c +0x3aac:  ret
08709e9d +0x3aad:  nop
08709e9e +0x3aae:  nop
08709e9f +0x3aaf:  nop
08709ea0 +0x3ab0:  push   %ebp
08709ea1 +0x3ab1:  xor    %edx,%edx
08709ea3 +0x3ab3:  mov    %esp,%ebp
08709ea5 +0x3ab5:  mov    0x8(%ebp),%eax
08709ea8 +0x3ab8:  cmpl   $0x0,0xc(%ebp)
08709eac +0x3abc:  setne  %dl
08709eaf +0x3abf:  mov    %edx,0x4(%eax)
08709eb2 +0x3ac2:  movl   $&_ZTVSt7num_getIwSt19istreambuf_iteratorIwSt11char_traitsIwEEE+0x8,(%eax)
08709eb8 +0x3ac8:  pop    %ebp
08709eb9 +0x3ac9:  ret
08709eba +0x3aca:  nop
08709ebb +0x3acb:  nop
08709ebc +0x3acc:  nop
08709ebd +0x3acd:  nop
08709ebe +0x3ace:  nop
08709ebf +0x3acf:  nop
08709ec0 +0x3ad0:  push   %ebp
08709ec1 +0x3ad1:  mov    %esp,%ebp
08709ec3 +0x3ad3:  sub    $0x48,%esp
08709ec6 +0x3ad6:  mov    0xc(%ebp),%eax
08709ec9 +0x3ad9:  mov    0x28(%ebp),%ecx
08709ecc +0x3adc:  mov    %ebx,-0xc(%ebp)
08709ecf +0x3adf:  mov    0x8(%ebp),%ebx
08709ed2 +0x3ae2:  mov    %esi,-0x8(%ebp)
08709ed5 +0x3ae5:  mov    0x18(%ebp),%esi
08709ed8 +0x3ae8:  mov    %edi,-0x4(%ebp)
08709edb +0x3aeb:  mov    0x1c(%ebp),%edi
08709ede +0x3aee:  mov    (%eax),%edx
08709ee0 +0x3af0:  mov    %ecx,0x20(%esp)
08709ee4 +0x3af4:  mov    0x24(%ebp),%ecx
08709ee7 +0x3af7:  mov    %esi,0x10(%esp)
08709eeb +0x3afb:  mov    0x10(%ebp),%esi
08709eee +0x3afe:  mov    %edi,0x14(%esp)
08709ef2 +0x3b02:  mov    0x14(%ebp),%edi
08709ef5 +0x3b05:  mov    %eax,0x4(%esp)
08709ef9 +0x3b09:  mov    %ecx,0x1c(%esp)
08709efd +0x3b0d:  mov    0x20(%ebp),%ecx
08709f00 +0x3b10:  mov    %esi,0x8(%esp)
08709f04 +0x3b14:  mov    %edi,0xc(%esp)
08709f08 +0x3b18:  mov    %ebx,(%esp)
08709f0b +0x3b1b:  mov    %ecx,0x18(%esp)
08709f0f +0x3b1f:  call   *0x8(%edx)
08709f12 +0x3b22:  mov    %ebx,%eax
08709f14 +0x3b24:  mov    -0x8(%ebp),%esi
08709f17 +0x3b27:  mov    -0xc(%ebp),%ebx
08709f1a +0x3b2a:  mov    -0x4(%ebp),%edi
08709f1d +0x3b2d:  sub    $0x4,%esp
08709f20 +0x3b30:  mov    %ebp,%esp
08709f22 +0x3b32:  pop    %ebp
08709f23 +0x3b33:  ret    $0x4
08709f26 +0x3b36:  nop
08709f27 +0x3b37:  nop
08709f28 +0x3b38:  nop
08709f29 +0x3b39:  nop
08709f2a +0x3b3a:  nop
08709f2b +0x3b3b:  nop
08709f2c +0x3b3c:  nop
08709f2d +0x3b3d:  nop
08709f2e +0x3b3e:  nop
08709f2f +0x3b3f:  nop
08709f30 +0x3b40:  push   %ebp
08709f31 +0x3b41:  mov    %esp,%ebp
08709f33 +0x3b43:  sub    $0x48,%esp
08709f36 +0x3b46:  mov    0xc(%ebp),%eax
08709f39 +0x3b49:  mov    0x28(%ebp),%ecx
08709f3c +0x3b4c:  mov    %ebx,-0xc(%ebp)
08709f3f +0x3b4f:  mov    0x8(%ebp),%ebx
08709f42 +0x3b52:  mov    %esi,-0x8(%ebp)
08709f45 +0x3b55:  mov    0x18(%ebp),%esi
08709f48 +0x3b58:  mov    %edi,-0x4(%ebp)
08709f4b +0x3b5b:  mov    0x1c(%ebp),%edi
08709f4e +0x3b5e:  mov    (%eax),%edx
08709f50 +0x3b60:  mov    %ecx,0x20(%esp)
08709f54 +0x3b64:  mov    0x24(%ebp),%ecx
08709f57 +0x3b67:  mov    %esi,0x10(%esp)
08709f5b +0x3b6b:  mov    0x10(%ebp),%esi
08709f5e +0x3b6e:  mov    %edi,0x14(%esp)
08709f62 +0x3b72:  mov    0x14(%ebp),%edi
08709f65 +0x3b75:  mov    %eax,0x4(%esp)
08709f69 +0x3b79:  mov    %ecx,0x1c(%esp)
08709f6d +0x3b7d:  mov    0x20(%ebp),%ecx
08709f70 +0x3b80:  mov    %esi,0x8(%esp)
08709f74 +0x3b84:  mov    %edi,0xc(%esp)
08709f78 +0x3b88:  mov    %ebx,(%esp)
08709f7b +0x3b8b:  mov    %ecx,0x18(%esp)
08709f7f +0x3b8f:  call   *0xc(%edx)
08709f82 +0x3b92:  mov    %ebx,%eax
08709f84 +0x3b94:  mov    -0x8(%ebp),%esi
08709f87 +0x3b97:  mov    -0xc(%ebp),%ebx
08709f8a +0x3b9a:  mov    -0x4(%ebp),%edi
08709f8d +0x3b9d:  sub    $0x4,%esp
08709f90 +0x3ba0:  mov    %ebp,%esp
08709f92 +0x3ba2:  pop    %ebp
08709f93 +0x3ba3:  ret    $0x4
08709f96 +0x3ba6:  nop
08709f97 +0x3ba7:  nop
08709f98 +0x3ba8:  nop
08709f99 +0x3ba9:  nop
08709f9a +0x3baa:  nop
08709f9b +0x3bab:  nop
08709f9c +0x3bac:  nop
08709f9d +0x3bad:  nop
08709f9e +0x3bae:  nop
08709f9f +0x3baf:  nop
08709fa0 +0x3bb0:  push   %ebp
08709fa1 +0x3bb1:  mov    %esp,%ebp
08709fa3 +0x3bb3:  sub    $0x48,%esp
08709fa6 +0x3bb6:  mov    0xc(%ebp),%eax
08709fa9 +0x3bb9:  mov    0x28(%ebp),%ecx
08709fac +0x3bbc:  mov    %ebx,-0xc(%ebp)
08709faf +0x3bbf:  mov    0x8(%ebp),%ebx
08709fb2 +0x3bc2:  mov    %esi,-0x8(%ebp)
08709fb5 +0x3bc5:  mov    0x18(%ebp),%esi
08709fb8 +0x3bc8:  mov    %edi,-0x4(%ebp)
08709fbb +0x3bcb:  mov    0x1c(%ebp),%edi
08709fbe +0x3bce:  mov    (%eax),%edx
08709fc0 +0x3bd0:  mov    %ecx,0x20(%esp)
08709fc4 +0x3bd4:  mov    0x24(%ebp),%ecx
08709fc7 +0x3bd7:  mov    %esi,0x10(%esp)
08709fcb +0x3bdb:  mov    0x10(%ebp),%esi
08709fce +0x3bde:  mov    %edi,0x14(%esp)
08709fd2 +0x3be2:  mov    0x14(%ebp),%edi
08709fd5 +0x3be5:  mov    %eax,0x4(%esp)
08709fd9 +0x3be9:  mov    %ecx,0x1c(%esp)
08709fdd +0x3bed:  mov    0x20(%ebp),%ecx
08709fe0 +0x3bf0:  mov    %esi,0x8(%esp)
08709fe4 +0x3bf4:  mov    %edi,0xc(%esp)
08709fe8 +0x3bf8:  mov    %ebx,(%esp)
08709feb +0x3bfb:  mov    %ecx,0x18(%esp)
08709fef +0x3bff:  call   *0x10(%edx)
08709ff2 +0x3c02:  mov    %ebx,%eax
08709ff4 +0x3c04:  mov    -0x8(%ebp),%esi
08709ff7 +0x3c07:  mov    -0xc(%ebp),%ebx
08709ffa +0x3c0a:  mov    -0x4(%ebp),%edi
08709ffd +0x3c0d:  sub    $0x4,%esp
0870a000 +0x3c10:  mov    %ebp,%esp
0870a002 +0x3c12:  pop    %ebp
0870a003 +0x3c13:  ret    $0x4
0870a006 +0x3c16:  nop
0870a007 +0x3c17:  nop
0870a008 +0x3c18:  nop
0870a009 +0x3c19:  nop
0870a00a +0x3c1a:  nop
0870a00b +0x3c1b:  nop
0870a00c +0x3c1c:  nop
0870a00d +0x3c1d:  nop
0870a00e +0x3c1e:  nop
0870a00f +0x3c1f:  nop
0870a010 +0x3c20:  push   %ebp
0870a011 +0x3c21:  mov    %esp,%ebp
0870a013 +0x3c23:  sub    $0x48,%esp
0870a016 +0x3c26:  mov    0xc(%ebp),%eax
0870a019 +0x3c29:  mov    0x28(%ebp),%ecx
0870a01c +0x3c2c:  mov    %ebx,-0xc(%ebp)
0870a01f +0x3c2f:  mov    0x8(%ebp),%ebx
0870a022 +0x3c32:  mov    %esi,-0x8(%ebp)
0870a025 +0x3c35:  mov    0x18(%ebp),%esi
0870a028 +0x3c38:  mov    %edi,-0x4(%ebp)
0870a02b +0x3c3b:  mov    0x1c(%ebp),%edi
0870a02e +0x3c3e:  mov    (%eax),%edx
0870a030 +0x3c40:  mov    %ecx,0x20(%esp)
0870a034 +0x3c44:  mov    0x24(%ebp),%ecx
0870a037 +0x3c47:  mov    %esi,0x10(%esp)
0870a03b +0x3c4b:  mov    0x10(%ebp),%esi
0870a03e +0x3c4e:  mov    %edi,0x14(%esp)
0870a042 +0x3c52:  mov    0x14(%ebp),%edi
0870a045 +0x3c55:  mov    %eax,0x4(%esp)
0870a049 +0x3c59:  mov    %ecx,0x1c(%esp)
0870a04d +0x3c5d:  mov    0x20(%ebp),%ecx
0870a050 +0x3c60:  mov    %esi,0x8(%esp)
0870a054 +0x3c64:  mov    %edi,0xc(%esp)
0870a058 +0x3c68:  mov    %ebx,(%esp)
0870a05b +0x3c6b:  mov    %ecx,0x18(%esp)
0870a05f +0x3c6f:  call   *0x14(%edx)
0870a062 +0x3c72:  mov    %ebx,%eax
0870a064 +0x3c74:  mov    -0x8(%ebp),%esi
0870a067 +0x3c77:  mov    -0xc(%ebp),%ebx
0870a06a +0x3c7a:  mov    -0x4(%ebp),%edi
0870a06d +0x3c7d:  sub    $0x4,%esp
0870a070 +0x3c80:  mov    %ebp,%esp
0870a072 +0x3c82:  pop    %ebp
0870a073 +0x3c83:  ret    $0x4
0870a076 +0x3c86:  nop
0870a077 +0x3c87:  nop
0870a078 +0x3c88:  nop
0870a079 +0x3c89:  nop
0870a07a +0x3c8a:  nop
0870a07b +0x3c8b:  nop
0870a07c +0x3c8c:  nop
0870a07d +0x3c8d:  nop
0870a07e +0x3c8e:  nop
0870a07f +0x3c8f:  nop
0870a080 +0x3c90:  push   %ebp
0870a081 +0x3c91:  mov    %esp,%ebp
0870a083 +0x3c93:  sub    $0x48,%esp
0870a086 +0x3c96:  mov    0xc(%ebp),%eax
0870a089 +0x3c99:  mov    0x28(%ebp),%ecx
0870a08c +0x3c9c:  mov    %ebx,-0xc(%ebp)
0870a08f +0x3c9f:  mov    0x8(%ebp),%ebx
0870a092 +0x3ca2:  mov    %esi,-0x8(%ebp)
0870a095 +0x3ca5:  mov    0x18(%ebp),%esi
0870a098 +0x3ca8:  mov    %edi,-0x4(%ebp)
0870a09b +0x3cab:  mov    0x1c(%ebp),%edi
0870a09e +0x3cae:  mov    (%eax),%edx
0870a0a0 +0x3cb0:  mov    %ecx,0x20(%esp)
0870a0a4 +0x3cb4:  mov    0x24(%ebp),%ecx
0870a0a7 +0x3cb7:  mov    %esi,0x10(%esp)
0870a0ab +0x3cbb:  mov    0x10(%ebp),%esi
0870a0ae +0x3cbe:  mov    %edi,0x14(%esp)
0870a0b2 +0x3cc2:  mov    0x14(%ebp),%edi
0870a0b5 +0x3cc5:  mov    %eax,0x4(%esp)
0870a0b9 +0x3cc9:  mov    %ecx,0x1c(%esp)
0870a0bd +0x3ccd:  mov    0x20(%ebp),%ecx
0870a0c0 +0x3cd0:  mov    %esi,0x8(%esp)
0870a0c4 +0x3cd4:  mov    %edi,0xc(%esp)
0870a0c8 +0x3cd8:  mov    %ebx,(%esp)
0870a0cb +0x3cdb:  mov    %ecx,0x18(%esp)
0870a0cf +0x3cdf:  call   *0x18(%edx)
0870a0d2 +0x3ce2:  mov    %ebx,%eax
0870a0d4 +0x3ce4:  mov    -0x8(%ebp),%esi
0870a0d7 +0x3ce7:  mov    -0xc(%ebp),%ebx
0870a0da +0x3cea:  mov    -0x4(%ebp),%edi
0870a0dd +0x3ced:  sub    $0x4,%esp
0870a0e0 +0x3cf0:  mov    %ebp,%esp
0870a0e2 +0x3cf2:  pop    %ebp
0870a0e3 +0x3cf3:  ret    $0x4
0870a0e6 +0x3cf6:  nop
0870a0e7 +0x3cf7:  nop
0870a0e8 +0x3cf8:  nop
0870a0e9 +0x3cf9:  nop
0870a0ea +0x3cfa:  nop
0870a0eb +0x3cfb:  nop
0870a0ec +0x3cfc:  nop
0870a0ed +0x3cfd:  nop
0870a0ee +0x3cfe:  nop
0870a0ef +0x3cff:  nop
0870a0f0 +0x3d00:  push   %ebp
0870a0f1 +0x3d01:  mov    %esp,%ebp
0870a0f3 +0x3d03:  sub    $0x48,%esp
0870a0f6 +0x3d06:  mov    0xc(%ebp),%eax
0870a0f9 +0x3d09:  mov    0x28(%ebp),%ecx
0870a0fc +0x3d0c:  mov    %ebx,-0xc(%ebp)
0870a0ff +0x3d0f:  mov    0x8(%ebp),%ebx
0870a102 +0x3d12:  mov    %esi,-0x8(%ebp)
0870a105 +0x3d15:  mov    0x18(%ebp),%esi
0870a108 +0x3d18:  mov    %edi,-0x4(%ebp)
0870a10b +0x3d1b:  mov    0x1c(%ebp),%edi
0870a10e +0x3d1e:  mov    (%eax),%edx
0870a110 +0x3d20:  mov    %ecx,0x20(%esp)
0870a114 +0x3d24:  mov    0x24(%ebp),%ecx
0870a117 +0x3d27:  mov    %esi,0x10(%esp)
0870a11b +0x3d2b:  mov    0x10(%ebp),%esi
0870a11e +0x3d2e:  mov    %edi,0x14(%esp)
0870a122 +0x3d32:  mov    0x14(%ebp),%edi
0870a125 +0x3d35:  mov    %eax,0x4(%esp)
0870a129 +0x3d39:  mov    %ecx,0x1c(%esp)
0870a12d +0x3d3d:  mov    0x20(%ebp),%ecx
0870a130 +0x3d40:  mov    %esi,0x8(%esp)
0870a134 +0x3d44:  mov    %edi,0xc(%esp)
0870a138 +0x3d48:  mov    %ebx,(%esp)
0870a13b +0x3d4b:  mov    %ecx,0x18(%esp)
0870a13f +0x3d4f:  call   *0x1c(%edx)
0870a142 +0x3d52:  mov    %ebx,%eax
0870a144 +0x3d54:  mov    -0x8(%ebp),%esi
0870a147 +0x3d57:  mov    -0xc(%ebp),%ebx
0870a14a +0x3d5a:  mov    -0x4(%ebp),%edi
0870a14d +0x3d5d:  sub    $0x4,%esp
0870a150 +0x3d60:  mov    %ebp,%esp
0870a152 +0x3d62:  pop    %ebp
0870a153 +0x3d63:  ret    $0x4
0870a156 +0x3d66:  nop
0870a157 +0x3d67:  nop
0870a158 +0x3d68:  nop
0870a159 +0x3d69:  nop
0870a15a +0x3d6a:  nop
0870a15b +0x3d6b:  nop
0870a15c +0x3d6c:  nop
0870a15d +0x3d6d:  nop
0870a15e +0x3d6e:  nop
0870a15f +0x3d6f:  nop
0870a160 +0x3d70:  push   %ebp
0870a161 +0x3d71:  mov    %esp,%ebp
0870a163 +0x3d73:  sub    $0x48,%esp
0870a166 +0x3d76:  mov    0xc(%ebp),%eax
0870a169 +0x3d79:  mov    0x28(%ebp),%ecx
0870a16c +0x3d7c:  mov    %ebx,-0xc(%ebp)
0870a16f +0x3d7f:  mov    0x8(%ebp),%ebx
0870a172 +0x3d82:  mov    %esi,-0x8(%ebp)
0870a175 +0x3d85:  mov    0x18(%ebp),%esi
0870a178 +0x3d88:  mov    %edi,-0x4(%ebp)
0870a17b +0x3d8b:  mov    0x1c(%ebp),%edi
0870a17e +0x3d8e:  mov    (%eax),%edx
0870a180 +0x3d90:  mov    %ecx,0x20(%esp)
0870a184 +0x3d94:  mov    0x24(%ebp),%ecx
0870a187 +0x3d97:  mov    %esi,0x10(%esp)
0870a18b +0x3d9b:  mov    0x10(%ebp),%esi
0870a18e +0x3d9e:  mov    %edi,0x14(%esp)
0870a192 +0x3da2:  mov    0x14(%ebp),%edi
0870a195 +0x3da5:  mov    %eax,0x4(%esp)
0870a199 +0x3da9:  mov    %ecx,0x1c(%esp)
0870a19d +0x3dad:  mov    0x20(%ebp),%ecx
0870a1a0 +0x3db0:  mov    %esi,0x8(%esp)
0870a1a4 +0x3db4:  mov    %edi,0xc(%esp)
0870a1a8 +0x3db8:  mov    %ebx,(%esp)
0870a1ab +0x3dbb:  mov    %ecx,0x18(%esp)
0870a1af +0x3dbf:  call   *0x20(%edx)
0870a1b2 +0x3dc2:  mov    %ebx,%eax
0870a1b4 +0x3dc4:  mov    -0x8(%ebp),%esi
0870a1b7 +0x3dc7:  mov    -0xc(%ebp),%ebx
0870a1ba +0x3dca:  mov    -0x4(%ebp),%edi
0870a1bd +0x3dcd:  sub    $0x4,%esp
0870a1c0 +0x3dd0:  mov    %ebp,%esp
0870a1c2 +0x3dd2:  pop    %ebp
0870a1c3 +0x3dd3:  ret    $0x4
0870a1c6 +0x3dd6:  nop
0870a1c7 +0x3dd7:  nop
0870a1c8 +0x3dd8:  nop
0870a1c9 +0x3dd9:  nop
0870a1ca +0x3dda:  nop
0870a1cb +0x3ddb:  nop
0870a1cc +0x3ddc:  nop
0870a1cd +0x3ddd:  nop
0870a1ce +0x3dde:  nop
0870a1cf +0x3ddf:  nop
0870a1d0 +0x3de0:  push   %ebp
0870a1d1 +0x3de1:  mov    %esp,%ebp
0870a1d3 +0x3de3:  sub    $0x48,%esp
0870a1d6 +0x3de6:  mov    0xc(%ebp),%eax
0870a1d9 +0x3de9:  mov    0x28(%ebp),%ecx
0870a1dc +0x3dec:  mov    %ebx,-0xc(%ebp)
0870a1df +0x3def:  mov    0x8(%ebp),%ebx
0870a1e2 +0x3df2:  mov    %esi,-0x8(%ebp)
0870a1e5 +0x3df5:  mov    0x18(%ebp),%esi
0870a1e8 +0x3df8:  mov    %edi,-0x4(%ebp)
0870a1eb +0x3dfb:  mov    0x1c(%ebp),%edi
0870a1ee +0x3dfe:  mov    (%eax),%edx
0870a1f0 +0x3e00:  mov    %ecx,0x20(%esp)
0870a1f4 +0x3e04:  mov    0x24(%ebp),%ecx
0870a1f7 +0x3e07:  mov    %esi,0x10(%esp)
0870a1fb +0x3e0b:  mov    0x10(%ebp),%esi
0870a1fe +0x3e0e:  mov    %edi,0x14(%esp)
0870a202 +0x3e12:  mov    0x14(%ebp),%edi
0870a205 +0x3e15:  mov    %eax,0x4(%esp)
0870a209 +0x3e19:  mov    %ecx,0x1c(%esp)
0870a20d +0x3e1d:  mov    0x20(%ebp),%ecx
0870a210 +0x3e20:  mov    %esi,0x8(%esp)
0870a214 +0x3e24:  mov    %edi,0xc(%esp)
0870a218 +0x3e28:  mov    %ebx,(%esp)
0870a21b +0x3e2b:  mov    %ecx,0x18(%esp)
0870a21f +0x3e2f:  call   *0x24(%edx)
0870a222 +0x3e32:  mov    %ebx,%eax
0870a224 +0x3e34:  mov    -0x8(%ebp),%esi
0870a227 +0x3e37:  mov    -0xc(%ebp),%ebx
0870a22a +0x3e3a:  mov    -0x4(%ebp),%edi
0870a22d +0x3e3d:  sub    $0x4,%esp
0870a230 +0x3e40:  mov    %ebp,%esp
0870a232 +0x3e42:  pop    %ebp
0870a233 +0x3e43:  ret    $0x4
0870a236 +0x3e46:  nop
0870a237 +0x3e47:  nop
0870a238 +0x3e48:  nop
0870a239 +0x3e49:  nop
0870a23a +0x3e4a:  nop
0870a23b +0x3e4b:  nop
0870a23c +0x3e4c:  nop
0870a23d +0x3e4d:  nop
0870a23e +0x3e4e:  nop
0870a23f +0x3e4f:  nop
0870a240 +0x3e50:  push   %ebp
0870a241 +0x3e51:  mov    %esp,%ebp
0870a243 +0x3e53:  sub    $0x48,%esp
0870a246 +0x3e56:  mov    0xc(%ebp),%eax
0870a249 +0x3e59:  mov    0x28(%ebp),%ecx
0870a24c +0x3e5c:  mov    %ebx,-0xc(%ebp)
0870a24f +0x3e5f:  mov    0x8(%ebp),%ebx
0870a252 +0x3e62:  mov    %esi,-0x8(%ebp)
0870a255 +0x3e65:  mov    0x18(%ebp),%esi
0870a258 +0x3e68:  mov    %edi,-0x4(%ebp)
0870a25b +0x3e6b:  mov    0x1c(%ebp),%edi
0870a25e +0x3e6e:  mov    (%eax),%edx
0870a260 +0x3e70:  mov    %ecx,0x20(%esp)
0870a264 +0x3e74:  mov    0x24(%ebp),%ecx
0870a267 +0x3e77:  mov    %esi,0x10(%esp)
0870a26b +0x3e7b:  mov    0x10(%ebp),%esi
0870a26e +0x3e7e:  mov    %edi,0x14(%esp)
0870a272 +0x3e82:  mov    0x14(%ebp),%edi
0870a275 +0x3e85:  mov    %eax,0x4(%esp)
0870a279 +0x3e89:  mov    %ecx,0x1c(%esp)
0870a27d +0x3e8d:  mov    0x20(%ebp),%ecx
0870a280 +0x3e90:  mov    %esi,0x8(%esp)
0870a284 +0x3e94:  mov    %edi,0xc(%esp)
0870a288 +0x3e98:  mov    %ebx,(%esp)
0870a28b +0x3e9b:  mov    %ecx,0x18(%esp)
0870a28f +0x3e9f:  call   *0x28(%edx)
0870a292 +0x3ea2:  mov    %ebx,%eax
0870a294 +0x3ea4:  mov    -0x8(%ebp),%esi
0870a297 +0x3ea7:  mov    -0xc(%ebp),%ebx
0870a29a +0x3eaa:  mov    -0x4(%ebp),%edi
0870a29d +0x3ead:  sub    $0x4,%esp
0870a2a0 +0x3eb0:  mov    %ebp,%esp
0870a2a2 +0x3eb2:  pop    %ebp
0870a2a3 +0x3eb3:  ret    $0x4
0870a2a6 +0x3eb6:  nop
0870a2a7 +0x3eb7:  nop
0870a2a8 +0x3eb8:  nop
0870a2a9 +0x3eb9:  nop
0870a2aa +0x3eba:  nop
0870a2ab +0x3ebb:  nop
0870a2ac +0x3ebc:  nop
0870a2ad +0x3ebd:  nop
0870a2ae +0x3ebe:  nop
0870a2af +0x3ebf:  nop
0870a2b0 +0x3ec0:  push   %ebp
0870a2b1 +0x3ec1:  mov    %esp,%ebp
0870a2b3 +0x3ec3:  sub    $0x48,%esp
0870a2b6 +0x3ec6:  mov    0xc(%ebp),%eax
0870a2b9 +0x3ec9:  mov    0x28(%ebp),%ecx
0870a2bc +0x3ecc:  mov    %ebx,-0xc(%ebp)
0870a2bf +0x3ecf:  mov    0x8(%ebp),%ebx
0870a2c2 +0x3ed2:  mov    %esi,-0x8(%ebp)
0870a2c5 +0x3ed5:  mov    0x18(%ebp),%esi
0870a2c8 +0x3ed8:  mov    %edi,-0x4(%ebp)
0870a2cb +0x3edb:  mov    0x1c(%ebp),%edi
0870a2ce +0x3ede:  mov    (%eax),%edx
0870a2d0 +0x3ee0:  mov    %ecx,0x20(%esp)
0870a2d4 +0x3ee4:  mov    0x24(%ebp),%ecx
0870a2d7 +0x3ee7:  mov    %esi,0x10(%esp)
0870a2db +0x3eeb:  mov    0x10(%ebp),%esi
0870a2de +0x3eee:  mov    %edi,0x14(%esp)
0870a2e2 +0x3ef2:  mov    0x14(%ebp),%edi
0870a2e5 +0x3ef5:  mov    %eax,0x4(%esp)
0870a2e9 +0x3ef9:  mov    %ecx,0x1c(%esp)
0870a2ed +0x3efd:  mov    0x20(%ebp),%ecx
0870a2f0 +0x3f00:  mov    %esi,0x8(%esp)
0870a2f4 +0x3f04:  mov    %edi,0xc(%esp)
0870a2f8 +0x3f08:  mov    %ebx,(%esp)
0870a2fb +0x3f0b:  mov    %ecx,0x18(%esp)
0870a2ff +0x3f0f:  call   *0x2c(%edx)
0870a302 +0x3f12:  mov    %ebx,%eax
0870a304 +0x3f14:  mov    -0x8(%ebp),%esi
0870a307 +0x3f17:  mov    -0xc(%ebp),%ebx
0870a30a +0x3f1a:  mov    -0x4(%ebp),%edi
0870a30d +0x3f1d:  sub    $0x4,%esp
0870a310 +0x3f20:  mov    %ebp,%esp
0870a312 +0x3f22:  pop    %ebp
0870a313 +0x3f23:  ret    $0x4
0870a316 +0x3f26:  nop
0870a317 +0x3f27:  nop
0870a318 +0x3f28:  nop
0870a319 +0x3f29:  nop
0870a31a +0x3f2a:  nop
0870a31b +0x3f2b:  nop
0870a31c +0x3f2c:  nop
0870a31d +0x3f2d:  nop
0870a31e +0x3f2e:  nop
0870a31f +0x3f2f:  nop
0870a320 +0x3f30:  push   %ebp
0870a321 +0x3f31:  mov    %esp,%ebp
0870a323 +0x3f33:  sub    $0x48,%esp
0870a326 +0x3f36:  mov    0xc(%ebp),%eax
0870a329 +0x3f39:  mov    0x28(%ebp),%ecx
0870a32c +0x3f3c:  mov    %ebx,-0xc(%ebp)
0870a32f +0x3f3f:  mov    0x8(%ebp),%ebx
0870a332 +0x3f42:  mov    %esi,-0x8(%ebp)
0870a335 +0x3f45:  mov    0x18(%ebp),%esi
0870a338 +0x3f48:  mov    %edi,-0x4(%ebp)
0870a33b +0x3f4b:  mov    0x1c(%ebp),%edi
0870a33e +0x3f4e:  mov    (%eax),%edx
0870a340 +0x3f50:  mov    %ecx,0x20(%esp)
0870a344 +0x3f54:  mov    0x24(%ebp),%ecx
0870a347 +0x3f57:  mov    %esi,0x10(%esp)
0870a34b +0x3f5b:  mov    0x10(%ebp),%esi
0870a34e +0x3f5e:  mov    %edi,0x14(%esp)
0870a352 +0x3f62:  mov    0x14(%ebp),%edi
0870a355 +0x3f65:  mov    %eax,0x4(%esp)
0870a359 +0x3f69:  mov    %ecx,0x1c(%esp)
0870a35d +0x3f6d:  mov    0x20(%ebp),%ecx
0870a360 +0x3f70:  mov    %esi,0x8(%esp)
0870a364 +0x3f74:  mov    %edi,0xc(%esp)
0870a368 +0x3f78:  mov    %ebx,(%esp)
0870a36b +0x3f7b:  mov    %ecx,0x18(%esp)
0870a36f +0x3f7f:  call   *0x30(%edx)
0870a372 +0x3f82:  mov    %ebx,%eax
0870a374 +0x3f84:  mov    -0x8(%ebp),%esi
0870a377 +0x3f87:  mov    -0xc(%ebp),%ebx
0870a37a +0x3f8a:  mov    -0x4(%ebp),%edi
0870a37d +0x3f8d:  sub    $0x4,%esp
0870a380 +0x3f90:  mov    %ebp,%esp
0870a382 +0x3f92:  pop    %ebp
0870a383 +0x3f93:  ret    $0x4
0870a386 +0x3f96:  nop
0870a387 +0x3f97:  nop
0870a388 +0x3f98:  nop
0870a389 +0x3f99:  nop
0870a38a +0x3f9a:  nop
0870a38b +0x3f9b:  nop
0870a38c +0x3f9c:  nop
0870a38d +0x3f9d:  nop
0870a38e +0x3f9e:  nop
0870a38f +0x3f9f:  nop
0870a390 +0x3fa0:  push   %ebp
0870a391 +0x3fa1:  xor    %edx,%edx
0870a393 +0x3fa3:  mov    %esp,%ebp
0870a395 +0x3fa5:  mov    0x8(%ebp),%eax
0870a398 +0x3fa8:  cmpl   $0x0,0xc(%ebp)
0870a39c +0x3fac:  setne  %dl
0870a39f +0x3faf:  mov    %edx,0x4(%eax)
0870a3a2 +0x3fb2:  movl   $&_ZTVSt7num_putIwSt19ostreambuf_iteratorIwSt11char_traitsIwEEE+0x8,(%eax)
0870a3a8 +0x3fb8:  pop    %ebp
0870a3a9 +0x3fb9:  ret
0870a3aa +0x3fba:  nop
0870a3ab +0x3fbb:  nop
0870a3ac +0x3fbc:  nop
0870a3ad +0x3fbd:  nop
0870a3ae +0x3fbe:  nop
0870a3af +0x3fbf:  nop
0870a3b0 +0x3fc0:  push   %ebp
0870a3b1 +0x3fc1:  mov    %esp,%ebp
0870a3b3 +0x3fc3:  sub    $0x38,%esp
0870a3b6 +0x3fc6:  mov    0xc(%ebp),%eax
0870a3b9 +0x3fc9:  movzbl 0x20(%ebp),%ecx
0870a3bd +0x3fcd:  mov    %ebx,-0xc(%ebp)
0870a3c0 +0x3fd0:  mov    0x8(%ebp),%ebx
0870a3c3 +0x3fd3:  mov    %esi,-0x8(%ebp)
0870a3c6 +0x3fd6:  mov    0x10(%ebp),%esi
0870a3c9 +0x3fd9:  mov    %edi,-0x4(%ebp)
0870a3cc +0x3fdc:  mov    (%eax),%edx
0870a3ce +0x3fde:  mov    %ecx,0x18(%esp)
0870a3d2 +0x3fe2:  mov    0x1c(%ebp),%ecx
0870a3d5 +0x3fe5:  mov    0x14(%ebp),%edi
0870a3d8 +0x3fe8:  mov    %esi,0x8(%esp)
0870a3dc +0x3fec:  mov    %eax,0x4(%esp)
0870a3e0 +0x3ff0:  mov    %ecx,0x14(%esp)
0870a3e4 +0x3ff4:  mov    0x18(%ebp),%ecx
0870a3e7 +0x3ff7:  mov    %edi,0xc(%esp)
0870a3eb +0x3ffb:  mov    %ebx,(%esp)
0870a3ee +0x3ffe:  mov    %ecx,0x10(%esp)
0870a3f2 +0x4002:  call   *0x8(%edx)
0870a3f5 +0x4005:  mov    %ebx,%eax
0870a3f7 +0x4007:  mov    -0x8(%ebp),%esi
0870a3fa +0x400a:  mov    -0xc(%ebp),%ebx
0870a3fd +0x400d:  mov    -0x4(%ebp),%edi
0870a400 +0x4010:  sub    $0x4,%esp
0870a403 +0x4013:  mov    %ebp,%esp
0870a405 +0x4015:  pop    %ebp
0870a406 +0x4016:  ret    $0x4
0870a409 +0x4019:  nop
0870a40a +0x401a:  nop
0870a40b +0x401b:  nop
0870a40c +0x401c:  nop
0870a40d +0x401d:  nop
0870a40e +0x401e:  nop
0870a40f +0x401f:  nop
0870a410 +0x4020:  push   %ebp
0870a411 +0x4021:  mov    %esp,%ebp
0870a413 +0x4023:  sub    $0x38,%esp
0870a416 +0x4026:  mov    0xc(%ebp),%eax
0870a419 +0x4029:  mov    0x20(%ebp),%ecx
0870a41c +0x402c:  mov    %ebx,-0xc(%ebp)
0870a41f +0x402f:  mov    0x8(%ebp),%ebx
0870a422 +0x4032:  mov    %esi,-0x8(%ebp)
0870a425 +0x4035:  mov    0x10(%ebp),%esi
0870a428 +0x4038:  mov    %edi,-0x4(%ebp)
0870a42b +0x403b:  mov    (%eax),%edx
0870a42d +0x403d:  mov    %ecx,0x18(%esp)
0870a431 +0x4041:  mov    0x1c(%ebp),%ecx
0870a434 +0x4044:  mov    0x14(%ebp),%edi
0870a437 +0x4047:  mov    %esi,0x8(%esp)
0870a43b +0x404b:  mov    %eax,0x4(%esp)
0870a43f +0x404f:  mov    %ecx,0x14(%esp)
0870a443 +0x4053:  mov    0x18(%ebp),%ecx
0870a446 +0x4056:  mov    %edi,0xc(%esp)
0870a44a +0x405a:  mov    %ebx,(%esp)
0870a44d +0x405d:  mov    %ecx,0x10(%esp)
0870a451 +0x4061:  call   *0xc(%edx)
0870a454 +0x4064:  mov    %ebx,%eax
0870a456 +0x4066:  mov    -0x8(%ebp),%esi
0870a459 +0x4069:  mov    -0xc(%ebp),%ebx
0870a45c +0x406c:  mov    -0x4(%ebp),%edi
0870a45f +0x406f:  sub    $0x4,%esp
0870a462 +0x4072:  mov    %ebp,%esp
0870a464 +0x4074:  pop    %ebp
0870a465 +0x4075:  ret    $0x4
0870a468 +0x4078:  nop
0870a469 +0x4079:  nop
0870a46a +0x407a:  nop
0870a46b +0x407b:  nop
0870a46c +0x407c:  nop
0870a46d +0x407d:  nop
0870a46e +0x407e:  nop
0870a46f +0x407f:  nop
0870a470 +0x4080:  push   %ebp
0870a471 +0x4081:  mov    %esp,%ebp
0870a473 +0x4083:  sub    $0x38,%esp
0870a476 +0x4086:  mov    0xc(%ebp),%eax
0870a479 +0x4089:  mov    0x20(%ebp),%ecx
0870a47c +0x408c:  mov    %ebx,-0xc(%ebp)
0870a47f +0x408f:  mov    0x8(%ebp),%ebx
0870a482 +0x4092:  mov    %esi,-0x8(%ebp)
0870a485 +0x4095:  mov    0x10(%ebp),%esi
0870a488 +0x4098:  mov    %edi,-0x4(%ebp)
0870a48b +0x409b:  mov    (%eax),%edx
0870a48d +0x409d:  mov    %ecx,0x18(%esp)
0870a491 +0x40a1:  mov    0x1c(%ebp),%ecx
0870a494 +0x40a4:  mov    0x14(%ebp),%edi
0870a497 +0x40a7:  mov    %esi,0x8(%esp)
0870a49b +0x40ab:  mov    %eax,0x4(%esp)
0870a49f +0x40af:  mov    %ecx,0x14(%esp)
0870a4a3 +0x40b3:  mov    0x18(%ebp),%ecx
0870a4a6 +0x40b6:  mov    %edi,0xc(%esp)
0870a4aa +0x40ba:  mov    %ebx,(%esp)
0870a4ad +0x40bd:  mov    %ecx,0x10(%esp)
0870a4b1 +0x40c1:  call   *0x10(%edx)
0870a4b4 +0x40c4:  mov    %ebx,%eax
0870a4b6 +0x40c6:  mov    -0x8(%ebp),%esi
0870a4b9 +0x40c9:  mov    -0xc(%ebp),%ebx
0870a4bc +0x40cc:  mov    -0x4(%ebp),%edi
0870a4bf +0x40cf:  sub    $0x4,%esp
0870a4c2 +0x40d2:  mov    %ebp,%esp
0870a4c4 +0x40d4:  pop    %ebp
0870a4c5 +0x40d5:  ret    $0x4
0870a4c8 +0x40d8:  nop
0870a4c9 +0x40d9:  nop
0870a4ca +0x40da:  nop
0870a4cb +0x40db:  nop
0870a4cc +0x40dc:  nop
0870a4cd +0x40dd:  nop
0870a4ce +0x40de:  nop
0870a4cf +0x40df:  nop
0870a4d0 +0x40e0:  push   %ebp
0870a4d1 +0x40e1:  mov    %esp,%ebp
0870a4d3 +0x40e3:  sub    $0x38,%esp
0870a4d6 +0x40e6:  mov    %esi,-0x8(%ebp)
0870a4d9 +0x40e9:  mov    0xc(%ebp),%eax
0870a4dc +0x40ec:  mov    %edi,-0x4(%ebp)
0870a4df +0x40ef:  mov    0x20(%ebp),%esi
0870a4e2 +0x40f2:  mov    0x24(%ebp),%edi
0870a4e5 +0x40f5:  mov    0x1c(%ebp),%ecx
0870a4e8 +0x40f8:  mov    %ebx,-0xc(%ebp)
0870a4eb +0x40fb:  mov    0x8(%ebp),%ebx
0870a4ee +0x40fe:  mov    (%eax),%edx
0870a4f0 +0x4100:  mov    %esi,0x18(%esp)
0870a4f4 +0x4104:  mov    0x10(%ebp),%esi
0870a4f7 +0x4107:  mov    %edi,0x1c(%esp)
0870a4fb +0x410b:  mov    0x14(%ebp),%edi
0870a4fe +0x410e:  mov    %ecx,0x14(%esp)
0870a502 +0x4112:  mov    0x18(%ebp),%ecx
0870a505 +0x4115:  mov    %eax,0x4(%esp)
0870a509 +0x4119:  mov    %esi,0x8(%esp)
0870a50d +0x411d:  mov    %edi,0xc(%esp)
0870a511 +0x4121:  mov    %ebx,(%esp)
0870a514 +0x4124:  mov    %ecx,0x10(%esp)
0870a518 +0x4128:  call   *0x14(%edx)
0870a51b +0x412b:  mov    %ebx,%eax
0870a51d +0x412d:  mov    -0x8(%ebp),%esi
0870a520 +0x4130:  mov    -0xc(%ebp),%ebx
0870a523 +0x4133:  mov    -0x4(%ebp),%edi
0870a526 +0x4136:  sub    $0x4,%esp
0870a529 +0x4139:  mov    %ebp,%esp
0870a52b +0x413b:  pop    %ebp
0870a52c +0x413c:  ret    $0x4
0870a52f +0x413f:  nop
0870a530 +0x4140:  push   %ebp
0870a531 +0x4141:  mov    %esp,%ebp
0870a533 +0x4143:  sub    $0x38,%esp
0870a536 +0x4146:  mov    %esi,-0x8(%ebp)
0870a539 +0x4149:  mov    0xc(%ebp),%eax
0870a53c +0x414c:  mov    %edi,-0x4(%ebp)
0870a53f +0x414f:  mov    0x20(%ebp),%esi
0870a542 +0x4152:  mov    0x24(%ebp),%edi
0870a545 +0x4155:  mov    0x1c(%ebp),%ecx
0870a548 +0x4158:  mov    %ebx,-0xc(%ebp)
0870a54b +0x415b:  mov    0x8(%ebp),%ebx
0870a54e +0x415e:  mov    (%eax),%edx
0870a550 +0x4160:  mov    %esi,0x18(%esp)
0870a554 +0x4164:  mov    0x10(%ebp),%esi
0870a557 +0x4167:  mov    %edi,0x1c(%esp)
0870a55b +0x416b:  mov    0x14(%ebp),%edi
0870a55e +0x416e:  mov    %ecx,0x14(%esp)
0870a562 +0x4172:  mov    0x18(%ebp),%ecx
0870a565 +0x4175:  mov    %eax,0x4(%esp)
0870a569 +0x4179:  mov    %esi,0x8(%esp)
0870a56d +0x417d:  mov    %edi,0xc(%esp)
0870a571 +0x4181:  mov    %ebx,(%esp)
0870a574 +0x4184:  mov    %ecx,0x10(%esp)
0870a578 +0x4188:  call   *0x18(%edx)
0870a57b +0x418b:  mov    %ebx,%eax
0870a57d +0x418d:  mov    -0x8(%ebp),%esi
0870a580 +0x4190:  mov    -0xc(%ebp),%ebx
0870a583 +0x4193:  mov    -0x4(%ebp),%edi
0870a586 +0x4196:  sub    $0x4,%esp
0870a589 +0x4199:  mov    %ebp,%esp
0870a58b +0x419b:  pop    %ebp
0870a58c +0x419c:  ret    $0x4
0870a58f +0x419f:  nop
0870a590 +0x41a0:  push   %ebp
0870a591 +0x41a1:  mov    %esp,%ebp
0870a593 +0x41a3:  sub    $0x38,%esp
0870a596 +0x41a6:  mov    0xc(%ebp),%eax
0870a599 +0x41a9:  mov    0x1c(%ebp),%ecx
0870a59c +0x41ac:  mov    %ebx,-0xc(%ebp)
0870a59f +0x41af:  mov    0x8(%ebp),%ebx
0870a5a2 +0x41b2:  mov    %esi,-0x8(%ebp)
0870a5a5 +0x41b5:  mov    0x10(%ebp),%esi
0870a5a8 +0x41b8:  mov    %edi,-0x4(%ebp)
0870a5ab +0x41bb:  mov    0x14(%ebp),%edi
0870a5ae +0x41be:  mov    (%eax),%edx
0870a5b0 +0x41c0:  mov    %ecx,0x14(%esp)
0870a5b4 +0x41c4:  mov    0x18(%ebp),%ecx
0870a5b7 +0x41c7:  fldl   0x20(%ebp)
0870a5ba +0x41ca:  mov    %esi,0x8(%esp)
0870a5be +0x41ce:  fstpl  0x18(%esp)
0870a5c2 +0x41d2:  mov    %edi,0xc(%esp)
0870a5c6 +0x41d6:  mov    %eax,0x4(%esp)
0870a5ca +0x41da:  mov    %ebx,(%esp)
0870a5cd +0x41dd:  mov    %ecx,0x10(%esp)
0870a5d1 +0x41e1:  call   *0x1c(%edx)
0870a5d4 +0x41e4:  mov    %ebx,%eax
0870a5d6 +0x41e6:  mov    -0x8(%ebp),%esi
0870a5d9 +0x41e9:  mov    -0xc(%ebp),%ebx
0870a5dc +0x41ec:  mov    -0x4(%ebp),%edi
0870a5df +0x41ef:  sub    $0x4,%esp
0870a5e2 +0x41f2:  mov    %ebp,%esp
0870a5e4 +0x41f4:  pop    %ebp
0870a5e5 +0x41f5:  ret    $0x4
0870a5e8 +0x41f8:  nop
0870a5e9 +0x41f9:  nop
0870a5ea +0x41fa:  nop
0870a5eb +0x41fb:  nop
0870a5ec +0x41fc:  nop
0870a5ed +0x41fd:  nop
0870a5ee +0x41fe:  nop
0870a5ef +0x41ff:  nop
0870a5f0 +0x4200:  push   %ebp
0870a5f1 +0x4201:  mov    %esp,%ebp
0870a5f3 +0x4203:  sub    $0x48,%esp
0870a5f6 +0x4206:  mov    0xc(%ebp),%eax
0870a5f9 +0x4209:  mov    0x1c(%ebp),%ecx
0870a5fc +0x420c:  mov    %ebx,-0xc(%ebp)
0870a5ff +0x420f:  mov    0x8(%ebp),%ebx
0870a602 +0x4212:  mov    %esi,-0x8(%ebp)
0870a605 +0x4215:  mov    0x10(%ebp),%esi
0870a608 +0x4218:  mov    %edi,-0x4(%ebp)
0870a60b +0x421b:  mov    0x14(%ebp),%edi
0870a60e +0x421e:  mov    (%eax),%edx
0870a610 +0x4220:  mov    %ecx,0x14(%esp)
0870a614 +0x4224:  mov    0x18(%ebp),%ecx
0870a617 +0x4227:  fldt   0x20(%ebp)
0870a61a +0x422a:  mov    %esi,0x8(%esp)
0870a61e +0x422e:  mov    %edi,0xc(%esp)
0870a622 +0x4232:  mov    %eax,0x4(%esp)
0870a626 +0x4236:  mov    %ebx,(%esp)
0870a629 +0x4239:  fstpt  0x18(%esp)
0870a62d +0x423d:  mov    %ecx,0x10(%esp)
0870a631 +0x4241:  call   *0x20(%edx)
0870a634 +0x4244:  mov    %ebx,%eax
0870a636 +0x4246:  mov    -0x8(%ebp),%esi
0870a639 +0x4249:  mov    -0xc(%ebp),%ebx
0870a63c +0x424c:  mov    -0x4(%ebp),%edi
0870a63f +0x424f:  sub    $0x4,%esp
0870a642 +0x4252:  mov    %ebp,%esp
0870a644 +0x4254:  pop    %ebp
0870a645 +0x4255:  ret    $0x4
0870a648 +0x4258:  nop
0870a649 +0x4259:  nop
0870a64a +0x425a:  nop
0870a64b +0x425b:  nop
0870a64c +0x425c:  nop
0870a64d +0x425d:  nop
0870a64e +0x425e:  nop
0870a64f +0x425f:  nop
0870a650 +0x4260:  push   %ebp
0870a651 +0x4261:  mov    %esp,%ebp
0870a653 +0x4263:  sub    $0x38,%esp
0870a656 +0x4266:  mov    0xc(%ebp),%eax
0870a659 +0x4269:  mov    0x20(%ebp),%ecx
0870a65c +0x426c:  mov    %ebx,-0xc(%ebp)
0870a65f +0x426f:  mov    0x8(%ebp),%ebx
0870a662 +0x4272:  mov    %esi,-0x8(%ebp)
0870a665 +0x4275:  mov    0x10(%ebp),%esi
0870a668 +0x4278:  mov    %edi,-0x4(%ebp)
0870a66b +0x427b:  mov    (%eax),%edx
0870a66d +0x427d:  mov    %ecx,0x18(%esp)
0870a671 +0x4281:  mov    0x1c(%ebp),%ecx
0870a674 +0x4284:  mov    0x14(%ebp),%edi
0870a677 +0x4287:  mov    %esi,0x8(%esp)
0870a67b +0x428b:  mov    %eax,0x4(%esp)
0870a67f +0x428f:  mov    %ecx,0x14(%esp)
0870a683 +0x4293:  mov    0x18(%ebp),%ecx
0870a686 +0x4296:  mov    %edi,0xc(%esp)
0870a68a +0x429a:  mov    %ebx,(%esp)
0870a68d +0x429d:  mov    %ecx,0x10(%esp)
0870a691 +0x42a1:  call   *0x24(%edx)
0870a694 +0x42a4:  mov    %ebx,%eax
0870a696 +0x42a6:  mov    -0x8(%ebp),%esi
0870a699 +0x42a9:  mov    -0xc(%ebp),%ebx
0870a69c +0x42ac:  mov    -0x4(%ebp),%edi
0870a69f +0x42af:  sub    $0x4,%esp
0870a6a2 +0x42b2:  mov    %ebp,%esp
0870a6a4 +0x42b4:  pop    %ebp
0870a6a5 +0x42b5:  ret    $0x4
0870a6a8 +0x42b8:  nop
0870a6a9 +0x42b9:  nop
0870a6aa +0x42ba:  nop
0870a6ab +0x42bb:  nop
0870a6ac +0x42bc:  nop
0870a6ad +0x42bd:  nop
0870a6ae +0x42be:  nop
0870a6af +0x42bf:  nop
0870a6b0 +0x42c0:  push   %ebp
0870a6b1 +0x42c1:  mov    %esp,%ebp
0870a6b3 +0x42c3:  mov    0x8(%ebp),%edx
0870a6b6 +0x42c6:  mov    0xc(%ebp),%eax
0870a6b9 +0x42c9:  mov    0x8(%edx),%edx
0870a6bc +0x42cc:  mov    0x8(%edx),%ecx
0870a6bf +0x42cf:  mov    %ecx,(%eax)
0870a6c1 +0x42d1:  mov    0xc(%edx),%edx
0870a6c4 +0x42d4:  mov    %edx,0x4(%eax)
0870a6c7 +0x42d7:  pop    %ebp
0870a6c8 +0x42d8:  ret
0870a6c9 +0x42d9:  nop
0870a6ca +0x42da:  nop
0870a6cb +0x42db:  nop
0870a6cc +0x42dc:  nop
0870a6cd +0x42dd:  nop
0870a6ce +0x42de:  nop
0870a6cf +0x42df:  nop
0870a6d0 +0x42e0:  push   %ebp
0870a6d1 +0x42e1:  mov    %esp,%ebp
0870a6d3 +0x42e3:  mov    0x8(%ebp),%edx
0870a6d6 +0x42e6:  mov    0xc(%ebp),%eax
0870a6d9 +0x42e9:  mov    0x8(%edx),%edx
0870a6dc +0x42ec:  mov    0x10(%edx),%ecx
0870a6df +0x42ef:  mov    %ecx,(%eax)
0870a6e1 +0x42f1:  mov    0x14(%edx),%edx
0870a6e4 +0x42f4:  mov    %edx,0x4(%eax)
0870a6e7 +0x42f7:  pop    %ebp
0870a6e8 +0x42f8:  ret
0870a6e9 +0x42f9:  nop
0870a6ea +0x42fa:  nop
0870a6eb +0x42fb:  nop
0870a6ec +0x42fc:  nop
0870a6ed +0x42fd:  nop
0870a6ee +0x42fe:  nop
0870a6ef +0x42ff:  nop
0870a6f0 +0x4300:  push   %ebp
0870a6f1 +0x4301:  mov    %esp,%ebp
0870a6f3 +0x4303:  mov    0x8(%ebp),%edx
0870a6f6 +0x4306:  mov    0xc(%ebp),%eax
0870a6f9 +0x4309:  mov    0x8(%edx),%edx
0870a6fc +0x430c:  mov    0x18(%edx),%ecx
0870a6ff +0x430f:  mov    %ecx,(%eax)
0870a701 +0x4311:  mov    0x1c(%edx),%edx
0870a704 +0x4314:  mov    %edx,0x4(%eax)
0870a707 +0x4317:  pop    %ebp
0870a708 +0x4318:  ret
0870a709 +0x4319:  nop
0870a70a +0x431a:  nop
0870a70b +0x431b:  nop
0870a70c +0x431c:  nop
0870a70d +0x431d:  nop
0870a70e +0x431e:  nop
0870a70f +0x431f:  nop
0870a710 +0x4320:  push   %ebp
0870a711 +0x4321:  mov    %esp,%ebp
0870a713 +0x4323:  pop    %ebp
0870a714 +0x4324:  ret
0870a715 +0x4325:  nop
0870a716 +0x4326:  nop
0870a717 +0x4327:  nop
0870a718 +0x4328:  nop
0870a719 +0x4329:  nop
0870a71a +0x432a:  nop
0870a71b +0x432b:  nop
0870a71c +0x432c:  nop
0870a71d +0x432d:  nop
0870a71e +0x432e:  nop
0870a71f +0x432f:  nop
0870a720 +0x4330:  push   %ebp
0870a721 +0x4331:  mov    %esp,%ebp
0870a723 +0x4333:  mov    0x8(%ebp),%edx
0870a726 +0x4336:  mov    0xc(%ebp),%eax
0870a729 +0x4339:  mov    0x8(%edx),%edx
0870a72c +0x433c:  mov    0x20(%edx),%ecx
0870a72f +0x433f:  mov    %ecx,(%eax)
0870a731 +0x4341:  mov    0x24(%edx),%edx
0870a734 +0x4344:  mov    %edx,0x4(%eax)
0870a737 +0x4347:  pop    %ebp
0870a738 +0x4348:  ret
0870a739 +0x4349:  nop
0870a73a +0x434a:  nop
0870a73b +0x434b:  nop
0870a73c +0x434c:  nop
0870a73d +0x434d:  nop
0870a73e +0x434e:  nop
0870a73f +0x434f:  nop
0870a740 +0x4350:  push   %ebp
0870a741 +0x4351:  mov    %esp,%ebp
0870a743 +0x4353:  mov    0x8(%ebp),%edx
0870a746 +0x4356:  mov    0xc(%ebp),%eax
0870a749 +0x4359:  mov    0x8(%edx),%edx
0870a74c +0x435c:  mov    0x2c(%edx),%ecx
0870a74f +0x435f:  mov    %ecx,(%eax)
0870a751 +0x4361:  mov    0x30(%edx),%ecx
0870a754 +0x4364:  mov    %ecx,0x4(%eax)
0870a757 +0x4367:  mov    0x34(%edx),%ecx
0870a75a +0x436a:  mov    %ecx,0x8(%eax)
0870a75d +0x436d:  mov    0x38(%edx),%ecx
0870a760 +0x4370:  mov    %ecx,0xc(%eax)
0870a763 +0x4373:  mov    0x3c(%edx),%ecx
0870a766 +0x4376:  mov    %ecx,0x10(%eax)
0870a769 +0x4379:  mov    0x40(%edx),%ecx
0870a76c +0x437c:  mov    %ecx,0x14(%eax)
0870a76f +0x437f:  mov    0x44(%edx),%edx
0870a772 +0x4382:  mov    %edx,0x18(%eax)
0870a775 +0x4385:  pop    %ebp
0870a776 +0x4386:  ret
0870a777 +0x4387:  nop
0870a778 +0x4388:  nop
0870a779 +0x4389:  nop
0870a77a +0x438a:  nop
0870a77b +0x438b:  nop
0870a77c +0x438c:  nop
0870a77d +0x438d:  nop
0870a77e +0x438e:  nop
0870a77f +0x438f:  nop
0870a780 +0x4390:  push   %ebp
0870a781 +0x4391:  mov    %esp,%ebp
0870a783 +0x4393:  mov    0x8(%ebp),%edx
0870a786 +0x4396:  mov    0xc(%ebp),%eax
0870a789 +0x4399:  mov    0x8(%edx),%edx
0870a78c +0x439c:  mov    0x48(%edx),%ecx
0870a78f +0x439f:  mov    %ecx,(%eax)
0870a791 +0x43a1:  mov    0x4c(%edx),%ecx
0870a794 +0x43a4:  mov    %ecx,0x4(%eax)
0870a797 +0x43a7:  mov    0x50(%edx),%ecx
0870a79a +0x43aa:  mov    %ecx,0x8(%eax)
0870a79d +0x43ad:  mov    0x54(%edx),%ecx
0870a7a0 +0x43b0:  mov    %ecx,0xc(%eax)
0870a7a3 +0x43b3:  mov    0x58(%edx),%ecx
0870a7a6 +0x43b6:  mov    %ecx,0x10(%eax)
0870a7a9 +0x43b9:  mov    0x5c(%edx),%ecx
0870a7ac +0x43bc:  mov    %ecx,0x14(%eax)
0870a7af +0x43bf:  mov    0x60(%edx),%edx
0870a7b2 +0x43c2:  mov    %edx,0x18(%eax)
0870a7b5 +0x43c5:  pop    %ebp
0870a7b6 +0x43c6:  ret
0870a7b7 +0x43c7:  nop
0870a7b8 +0x43c8:  nop
0870a7b9 +0x43c9:  nop
0870a7ba +0x43ca:  nop
0870a7bb +0x43cb:  nop
0870a7bc +0x43cc:  nop
0870a7bd +0x43cd:  nop
0870a7be +0x43ce:  nop
0870a7bf +0x43cf:  nop
0870a7c0 +0x43d0:  push   %ebp
0870a7c1 +0x43d1:  mov    %esp,%ebp
0870a7c3 +0x43d3:  mov    0x8(%ebp),%edx
0870a7c6 +0x43d6:  mov    0xc(%ebp),%eax
0870a7c9 +0x43d9:  mov    0x8(%edx),%edx
0870a7cc +0x43dc:  mov    0x64(%edx),%ecx
0870a7cf +0x43df:  mov    %ecx,(%eax)
0870a7d1 +0x43e1:  mov    0x68(%edx),%ecx
0870a7d4 +0x43e4:  mov    %ecx,0x4(%eax)
0870a7d7 +0x43e7:  mov    0x6c(%edx),%ecx
0870a7da +0x43ea:  mov    %ecx,0x8(%eax)
0870a7dd +0x43ed:  mov    0x70(%edx),%ecx
0870a7e0 +0x43f0:  mov    %ecx,0xc(%eax)
0870a7e3 +0x43f3:  mov    0x74(%edx),%ecx
0870a7e6 +0x43f6:  mov    %ecx,0x10(%eax)
0870a7e9 +0x43f9:  mov    0x78(%edx),%ecx
0870a7ec +0x43fc:  mov    %ecx,0x14(%eax)
0870a7ef +0x43ff:  mov    0x7c(%edx),%ecx
0870a7f2 +0x4402:  mov    %ecx,0x18(%eax)
0870a7f5 +0x4405:  mov    0x80(%edx),%ecx
0870a7fb +0x440b:  mov    %ecx,0x1c(%eax)
0870a7fe +0x440e:  mov    0x84(%edx),%ecx
0870a804 +0x4414:  mov    %ecx,0x20(%eax)
0870a807 +0x4417:  mov    0x88(%edx),%ecx
0870a80d +0x441d:  mov    %ecx,0x24(%eax)
0870a810 +0x4420:  mov    0x8c(%edx),%ecx
0870a816 +0x4426:  mov    %ecx,0x28(%eax)
0870a819 +0x4429:  mov    0x90(%edx),%edx
0870a81f +0x442f:  mov    %edx,0x2c(%eax)
0870a822 +0x4432:  pop    %ebp
0870a823 +0x4433:  ret
0870a824 +0x4434:  nop
0870a825 +0x4435:  nop
0870a826 +0x4436:  nop
0870a827 +0x4437:  nop
0870a828 +0x4438:  nop
0870a829 +0x4439:  nop
0870a82a +0x443a:  nop
0870a82b +0x443b:  nop
0870a82c +0x443c:  nop
0870a82d +0x443d:  nop
0870a82e +0x443e:  nop
0870a82f +0x443f:  nop
0870a830 +0x4440:  push   %ebp
0870a831 +0x4441:  mov    %esp,%ebp
0870a833 +0x4443:  mov    0x8(%ebp),%edx
0870a836 +0x4446:  mov    0xc(%ebp),%eax
0870a839 +0x4449:  mov    0x8(%edx),%edx
0870a83c +0x444c:  mov    0x94(%edx),%ecx
0870a842 +0x4452:  mov    %ecx,(%eax)
0870a844 +0x4454:  mov    0x98(%edx),%ecx
0870a84a +0x445a:  mov    %ecx,0x4(%eax)
0870a84d +0x445d:  mov    0x9c(%edx),%ecx
0870a853 +0x4463:  mov    %ecx,0x8(%eax)
0870a856 +0x4466:  mov    0xa0(%edx),%ecx
0870a85c +0x446c:  mov    %ecx,0xc(%eax)
0870a85f +0x446f:  mov    0xa4(%edx),%ecx
0870a865 +0x4475:  mov    %ecx,0x10(%eax)
0870a868 +0x4478:  mov    0xa8(%edx),%ecx
0870a86e +0x447e:  mov    %ecx,0x14(%eax)
0870a871 +0x4481:  mov    0xac(%edx),%ecx
0870a877 +0x4487:  mov    %ecx,0x18(%eax)
0870a87a +0x448a:  mov    0xb0(%edx),%ecx
0870a880 +0x4490:  mov    %ecx,0x1c(%eax)
0870a883 +0x4493:  mov    0xb4(%edx),%ecx
0870a889 +0x4499:  mov    %ecx,0x20(%eax)
0870a88c +0x449c:  mov    0xb8(%edx),%ecx
0870a892 +0x44a2:  mov    %ecx,0x24(%eax)
0870a895 +0x44a5:  mov    0xbc(%edx),%ecx
0870a89b +0x44ab:  mov    %ecx,0x28(%eax)
0870a89e +0x44ae:  mov    0xc0(%edx),%edx
0870a8a4 +0x44b4:  mov    %edx,0x2c(%eax)
0870a8a7 +0x44b7:  pop    %ebp
0870a8a8 +0x44b8:  ret
0870a8a9 +0x44b9:  nop
0870a8aa +0x44ba:  nop
0870a8ab +0x44bb:  nop
0870a8ac +0x44bc:  nop
0870a8ad +0x44bd:  nop
0870a8ae +0x44be:  nop
0870a8af +0x44bf:  nop
0870a8b0 +0x44c0:  push   %ebp
0870a8b1 +0x44c1:  xor    %edx,%edx
0870a8b3 +0x44c3:  mov    %esp,%ebp
0870a8b5 +0x44c5:  mov    0x8(%ebp),%eax
0870a8b8 +0x44c8:  cmpl   $0x0,0xc(%ebp)
0870a8bc +0x44cc:  setne  %dl
0870a8bf +0x44cf:  mov    %edx,0x4(%eax)
0870a8c2 +0x44d2:  movl   $&_ZTVSt17__timepunct_cacheIwE+0x8,(%eax)
0870a8c8 +0x44d8:  movl   $0x0,0x8(%eax)
0870a8cf +0x44df:  movl   $0x0,0xc(%eax)
0870a8d6 +0x44e6:  movl   $0x0,0x10(%eax)
0870a8dd +0x44ed:  movl   $0x0,0x14(%eax)
0870a8e4 +0x44f4:  movl   $0x0,0x18(%eax)
0870a8eb +0x44fb:  movl   $0x0,0x1c(%eax)
0870a8f2 +0x4502:  movl   $0x0,0x20(%eax)
0870a8f9 +0x4509:  movl   $0x0,0x24(%eax)
0870a900 +0x4510:  movl   $0x0,0x28(%eax)
0870a907 +0x4517:  movl   $0x0,0x2c(%eax)
0870a90e +0x451e:  movl   $0x0,0x30(%eax)
0870a915 +0x4525:  movl   $0x0,0x34(%eax)
0870a91c +0x452c:  movl   $0x0,0x38(%eax)
0870a923 +0x4533:  movl   $0x0,0x3c(%eax)
0870a92a +0x453a:  movl   $0x0,0x40(%eax)
0870a931 +0x4541:  movl   $0x0,0x44(%eax)
0870a938 +0x4548:  movl   $0x0,0x48(%eax)
0870a93f +0x454f:  movl   $0x0,0x4c(%eax)
0870a946 +0x4556:  movl   $0x0,0x50(%eax)
0870a94d +0x455d:  movl   $0x0,0x54(%eax)
0870a954 +0x4564:  movl   $0x0,0x58(%eax)
0870a95b +0x456b:  movl   $0x0,0x5c(%eax)
0870a962 +0x4572:  movl   $0x0,0x60(%eax)
0870a969 +0x4579:  movl   $0x0,0x64(%eax)
0870a970 +0x4580:  movl   $0x0,0x68(%eax)
0870a977 +0x4587:  movl   $0x0,0x6c(%eax)
0870a97e +0x458e:  movl   $0x0,0x70(%eax)
0870a985 +0x4595:  movl   $0x0,0x74(%eax)
0870a98c +0x459c:  movl   $0x0,0x78(%eax)
0870a993 +0x45a3:  movl   $0x0,0x7c(%eax)
0870a99a +0x45aa:  movl   $0x0,0x80(%eax)
0870a9a4 +0x45b4:  movl   $0x0,0x84(%eax)
0870a9ae +0x45be:  movl   $0x0,0x88(%eax)
0870a9b8 +0x45c8:  movl   $0x0,0x8c(%eax)
0870a9c2 +0x45d2:  movl   $0x0,0x90(%eax)
0870a9cc +0x45dc:  movl   $0x0,0x94(%eax)
0870a9d6 +0x45e6:  movl   $0x0,0x98(%eax)
0870a9e0 +0x45f0:  movl   $0x0,0x9c(%eax)
0870a9ea +0x45fa:  movl   $0x0,0xa0(%eax)
0870a9f4 +0x4604:  movl   $0x0,0xa4(%eax)
0870a9fe +0x460e:  movl   $0x0,0xa8(%eax)
0870aa08 +0x4618:  movl   $0x0,0xac(%eax)
0870aa12 +0x4622:  movl   $0x0,0xb0(%eax)
0870aa1c +0x462c:  movl   $0x0,0xb4(%eax)
0870aa26 +0x4636:  movl   $0x0,0xb8(%eax)
0870aa30 +0x4640:  movl   $0x0,0xbc(%eax)
0870aa3a +0x464a:  movl   $0x0,0xc0(%eax)
0870aa44 +0x4654:  movb   $0x0,0xc4(%eax)
0870aa4b +0x465b:  pop    %ebp
0870aa4c +0x465c:  ret
0870aa4d +0x465d:  nop
0870aa4e +0x465e:  nop
0870aa4f +0x465f:  nop
0870aa50 +0x4660:  push   %ebp
0870aa51 +0x4661:  xor    %edx,%edx
0870aa53 +0x4663:  mov    %esp,%ebp
0870aa55 +0x4665:  mov    0x8(%ebp),%eax
0870aa58 +0x4668:  cmpl   $0x0,0xc(%ebp)
0870aa5c +0x466c:  setne  %dl
0870aa5f +0x466f:  mov    %edx,0x4(%eax)
0870aa62 +0x4672:  movl   $&_ZTVSt8time_putIwSt19ostreambuf_iteratorIwSt11char_traitsIwEEE+0x8,(%eax)
0870aa68 +0x4678:  pop    %ebp
0870aa69 +0x4679:  ret
0870aa6a +0x467a:  nop
0870aa6b +0x467b:  nop
0870aa6c +0x467c:  nop
0870aa6d +0x467d:  nop
0870aa6e +0x467e:  nop
0870aa6f +0x467f:  nop
0870aa70 +0x4680:  push   %ebp
0870aa71 +0x4681:  mov    %esp,%ebp
0870aa73 +0x4683:  sub    $0x48,%esp
0870aa76 +0x4686:  mov    0xc(%ebp),%eax
0870aa79 +0x4689:  movsbl 0x24(%ebp),%ecx
0870aa7d +0x468d:  mov    %ebx,-0xc(%ebp)
0870aa80 +0x4690:  mov    0x8(%ebp),%ebx
0870aa83 +0x4693:  mov    %esi,-0x8(%ebp)
0870aa86 +0x4696:  movsbl 0x28(%ebp),%esi
0870aa8a +0x469a:  mov    %edi,-0x4(%ebp)
0870aa8d +0x469d:  mov    (%eax),%edx
0870aa8f +0x469f:  mov    %ecx,0x1c(%esp)
0870aa93 +0x46a3:  mov    0x20(%ebp),%ecx
0870aa96 +0x46a6:  mov    0x14(%ebp),%edi
0870aa99 +0x46a9:  mov    %esi,0x20(%esp)
0870aa9d +0x46ad:  mov    0x10(%ebp),%esi
0870aaa0 +0x46b0:  mov    %eax,0x4(%esp)
0870aaa4 +0x46b4:  mov    %ecx,0x18(%esp)
0870aaa8 +0x46b8:  mov    0x1c(%ebp),%ecx
0870aaab +0x46bb:  mov    %edi,0xc(%esp)
0870aaaf +0x46bf:  mov    %esi,0x8(%esp)
0870aab3 +0x46c3:  mov    %ebx,(%esp)
0870aab6 +0x46c6:  mov    %ecx,0x14(%esp)
0870aaba +0x46ca:  mov    0x18(%ebp),%ecx
0870aabd +0x46cd:  mov    %ecx,0x10(%esp)
0870aac1 +0x46d1:  call   *0x8(%edx)
0870aac4 +0x46d4:  mov    %ebx,%eax
0870aac6 +0x46d6:  mov    -0x8(%ebp),%esi
0870aac9 +0x46d9:  mov    -0xc(%ebp),%ebx
0870aacc +0x46dc:  mov    -0x4(%ebp),%edi
0870aacf +0x46df:  sub    $0x4,%esp
0870aad2 +0x46e2:  mov    %ebp,%esp
0870aad4 +0x46e4:  pop    %ebp
0870aad5 +0x46e5:  ret    $0x4
0870aad8 +0x46e8:  nop
0870aad9 +0x46e9:  nop
0870aada +0x46ea:  nop
0870aadb +0x46eb:  nop
0870aadc +0x46ec:  nop
0870aadd +0x46ed:  nop
0870aade +0x46ee:  nop
0870aadf +0x46ef:  nop
0870aae0 +0x46f0:  push   %ebp
0870aae1 +0x46f1:  xor    %edx,%edx
0870aae3 +0x46f3:  mov    %esp,%ebp
0870aae5 +0x46f5:  mov    0x8(%ebp),%eax
0870aae8 +0x46f8:  cmpl   $0x0,0x10(%ebp)
0870aaec +0x46fc:  setne  %dl
0870aaef +0x46ff:  mov    %edx,0x4(%eax)
0870aaf2 +0x4702:  movl   $&_ZTVSt15time_put_bynameIwSt19ostreambuf_iteratorIwSt11char_traitsIwEEE+0x8,(%eax)
0870aaf8 +0x4708:  pop    %ebp
0870aaf9 +0x4709:  ret
0870aafa +0x470a:  nop
0870aafb +0x470b:  nop
0870aafc +0x470c:  nop
0870aafd +0x470d:  nop
0870aafe +0x470e:  nop
0870aaff +0x470f:  nop
0870ab00 +0x4710:  push   %ebp
0870ab01 +0x4711:  xor    %edx,%edx
0870ab03 +0x4713:  mov    %esp,%ebp
0870ab05 +0x4715:  mov    0x8(%ebp),%eax
0870ab08 +0x4718:  cmpl   $0x0,0xc(%ebp)
0870ab0c +0x471c:  setne  %dl
0870ab0f +0x471f:  mov    %edx,0x4(%eax)
0870ab12 +0x4722:  movl   $&_ZTVSt8time_getIwSt19istreambuf_iteratorIwSt11char_traitsIwEEE+0x8,(%eax)
0870ab18 +0x4728:  pop    %ebp
0870ab19 +0x4729:  ret
0870ab1a +0x472a:  nop
0870ab1b +0x472b:  nop
0870ab1c +0x472c:  nop
0870ab1d +0x472d:  nop
0870ab1e +0x472e:  nop
0870ab1f +0x472f:  nop
0870ab20 +0x4730:  push   %ebp
0870ab21 +0x4731:  mov    %esp,%ebp
0870ab23 +0x4733:  sub    $0x8,%esp
0870ab26 +0x4736:  mov    0x8(%ebp),%eax
0870ab29 +0x4739:  mov    (%eax),%edx
0870ab2b +0x473b:  mov    0x8(%edx),%eax
0870ab2e +0x473e:  leave
0870ab2f +0x473f:  jmp    *%eax
0870ab31 +0x4741:  nop
0870ab32 +0x4742:  nop
0870ab33 +0x4743:  nop
0870ab34 +0x4744:  nop
0870ab35 +0x4745:  nop
0870ab36 +0x4746:  nop
0870ab37 +0x4747:  nop
0870ab38 +0x4748:  nop
0870ab39 +0x4749:  nop
0870ab3a +0x474a:  nop
0870ab3b +0x474b:  nop
0870ab3c +0x474c:  nop
0870ab3d +0x474d:  nop
0870ab3e +0x474e:  nop
0870ab3f +0x474f:  nop
0870ab40 +0x4750:  push   %ebp
0870ab41 +0x4751:  mov    %esp,%ebp
0870ab43 +0x4753:  sub    $0x48,%esp
0870ab46 +0x4756:  mov    0xc(%ebp),%eax
0870ab49 +0x4759:  mov    0x28(%ebp),%ecx
0870ab4c +0x475c:  mov    %ebx,-0xc(%ebp)
0870ab4f +0x475f:  mov    0x8(%ebp),%ebx
0870ab52 +0x4762:  mov    %esi,-0x8(%ebp)
0870ab55 +0x4765:  mov    0x18(%ebp),%esi
0870ab58 +0x4768:  mov    %edi,-0x4(%ebp)
0870ab5b +0x476b:  mov    0x1c(%ebp),%edi
0870ab5e +0x476e:  mov    (%eax),%edx
0870ab60 +0x4770:  mov    %ecx,0x20(%esp)
0870ab64 +0x4774:  mov    0x24(%ebp),%ecx
0870ab67 +0x4777:  mov    %esi,0x10(%esp)
0870ab6b +0x477b:  mov    0x10(%ebp),%esi
0870ab6e +0x477e:  mov    %edi,0x14(%esp)
0870ab72 +0x4782:  mov    0x14(%ebp),%edi
0870ab75 +0x4785:  mov    %eax,0x4(%esp)
0870ab79 +0x4789:  mov    %ecx,0x1c(%esp)
0870ab7d +0x478d:  mov    0x20(%ebp),%ecx
0870ab80 +0x4790:  mov    %esi,0x8(%esp)
0870ab84 +0x4794:  mov    %edi,0xc(%esp)
0870ab88 +0x4798:  mov    %ebx,(%esp)
0870ab8b +0x479b:  mov    %ecx,0x18(%esp)
0870ab8f +0x479f:  call   *0xc(%edx)
0870ab92 +0x47a2:  mov    %ebx,%eax
0870ab94 +0x47a4:  mov    -0x8(%ebp),%esi
0870ab97 +0x47a7:  mov    -0xc(%ebp),%ebx
0870ab9a +0x47aa:  mov    -0x4(%ebp),%edi
0870ab9d +0x47ad:  sub    $0x4,%esp
0870aba0 +0x47b0:  mov    %ebp,%esp
0870aba2 +0x47b2:  pop    %ebp
0870aba3 +0x47b3:  ret    $0x4
0870aba6 +0x47b6:  nop
0870aba7 +0x47b7:  nop
0870aba8 +0x47b8:  nop
0870aba9 +0x47b9:  nop
0870abaa +0x47ba:  nop
0870abab +0x47bb:  nop
0870abac +0x47bc:  nop
0870abad +0x47bd:  nop
0870abae +0x47be:  nop
0870abaf +0x47bf:  nop
0870abb0 +0x47c0:  push   %ebp
0870abb1 +0x47c1:  mov    %esp,%ebp
0870abb3 +0x47c3:  sub    $0x48,%esp
0870abb6 +0x47c6:  mov    0xc(%ebp),%eax
0870abb9 +0x47c9:  mov    0x28(%ebp),%ecx
0870abbc +0x47cc:  mov    %ebx,-0xc(%ebp)
0870abbf +0x47cf:  mov    0x8(%ebp),%ebx
0870abc2 +0x47d2:  mov    %esi,-0x8(%ebp)
0870abc5 +0x47d5:  mov    0x18(%ebp),%esi
0870abc8 +0x47d8:  mov    %edi,-0x4(%ebp)
0870abcb +0x47db:  mov    0x1c(%ebp),%edi
0870abce +0x47de:  mov    (%eax),%edx
0870abd0 +0x47e0:  mov    %ecx,0x20(%esp)
0870abd4 +0x47e4:  mov    0x24(%ebp),%ecx
0870abd7 +0x47e7:  mov    %esi,0x10(%esp)
0870abdb +0x47eb:  mov    0x10(%ebp),%esi
0870abde +0x47ee:  mov    %edi,0x14(%esp)
0870abe2 +0x47f2:  mov    0x14(%ebp),%edi
0870abe5 +0x47f5:  mov    %eax,0x4(%esp)
0870abe9 +0x47f9:  mov    %ecx,0x1c(%esp)
0870abed +0x47fd:  mov    0x20(%ebp),%ecx
0870abf0 +0x4800:  mov    %esi,0x8(%esp)
0870abf4 +0x4804:  mov    %edi,0xc(%esp)
0870abf8 +0x4808:  mov    %ebx,(%esp)
0870abfb +0x480b:  mov    %ecx,0x18(%esp)
0870abff +0x480f:  call   *0x10(%edx)
0870ac02 +0x4812:  mov    %ebx,%eax
0870ac04 +0x4814:  mov    -0x8(%ebp),%esi
0870ac07 +0x4817:  mov    -0xc(%ebp),%ebx
0870ac0a +0x481a:  mov    -0x4(%ebp),%edi
0870ac0d +0x481d:  sub    $0x4,%esp
0870ac10 +0x4820:  mov    %ebp,%esp
0870ac12 +0x4822:  pop    %ebp
0870ac13 +0x4823:  ret    $0x4
0870ac16 +0x4826:  nop
0870ac17 +0x4827:  nop
0870ac18 +0x4828:  nop
0870ac19 +0x4829:  nop
0870ac1a +0x482a:  nop
0870ac1b +0x482b:  nop
0870ac1c +0x482c:  nop
0870ac1d +0x482d:  nop
0870ac1e +0x482e:  nop
0870ac1f +0x482f:  nop
0870ac20 +0x4830:  push   %ebp
0870ac21 +0x4831:  mov    %esp,%ebp
0870ac23 +0x4833:  sub    $0x48,%esp
0870ac26 +0x4836:  mov    0xc(%ebp),%eax
0870ac29 +0x4839:  mov    0x28(%ebp),%ecx
0870ac2c +0x483c:  mov    %ebx,-0xc(%ebp)
0870ac2f +0x483f:  mov    0x8(%ebp),%ebx
0870ac32 +0x4842:  mov    %esi,-0x8(%ebp)
0870ac35 +0x4845:  mov    0x18(%ebp),%esi
0870ac38 +0x4848:  mov    %edi,-0x4(%ebp)
0870ac3b +0x484b:  mov    0x1c(%ebp),%edi
0870ac3e +0x484e:  mov    (%eax),%edx
0870ac40 +0x4850:  mov    %ecx,0x20(%esp)
0870ac44 +0x4854:  mov    0x24(%ebp),%ecx
0870ac47 +0x4857:  mov    %esi,0x10(%esp)
0870ac4b +0x485b:  mov    0x10(%ebp),%esi
0870ac4e +0x485e:  mov    %edi,0x14(%esp)
0870ac52 +0x4862:  mov    0x14(%ebp),%edi
0870ac55 +0x4865:  mov    %eax,0x4(%esp)
0870ac59 +0x4869:  mov    %ecx,0x1c(%esp)
0870ac5d +0x486d:  mov    0x20(%ebp),%ecx
0870ac60 +0x4870:  mov    %esi,0x8(%esp)
0870ac64 +0x4874:  mov    %edi,0xc(%esp)
0870ac68 +0x4878:  mov    %ebx,(%esp)
0870ac6b +0x487b:  mov    %ecx,0x18(%esp)
0870ac6f +0x487f:  call   *0x14(%edx)
0870ac72 +0x4882:  mov    %ebx,%eax
0870ac74 +0x4884:  mov    -0x8(%ebp),%esi
0870ac77 +0x4887:  mov    -0xc(%ebp),%ebx
0870ac7a +0x488a:  mov    -0x4(%ebp),%edi
0870ac7d +0x488d:  sub    $0x4,%esp
0870ac80 +0x4890:  mov    %ebp,%esp
0870ac82 +0x4892:  pop    %ebp
0870ac83 +0x4893:  ret    $0x4
0870ac86 +0x4896:  nop
0870ac87 +0x4897:  nop
0870ac88 +0x4898:  nop
0870ac89 +0x4899:  nop
0870ac8a +0x489a:  nop
0870ac8b +0x489b:  nop
0870ac8c +0x489c:  nop
0870ac8d +0x489d:  nop
0870ac8e +0x489e:  nop
0870ac8f +0x489f:  nop
0870ac90 +0x48a0:  push   %ebp
0870ac91 +0x48a1:  mov    %esp,%ebp
0870ac93 +0x48a3:  sub    $0x48,%esp
0870ac96 +0x48a6:  mov    0xc(%ebp),%eax
0870ac99 +0x48a9:  mov    0x28(%ebp),%ecx
0870ac9c +0x48ac:  mov    %ebx,-0xc(%ebp)
0870ac9f +0x48af:  mov    0x8(%ebp),%ebx
0870aca2 +0x48b2:  mov    %esi,-0x8(%ebp)
0870aca5 +0x48b5:  mov    0x18(%ebp),%esi
0870aca8 +0x48b8:  mov    %edi,-0x4(%ebp)
0870acab +0x48bb:  mov    0x1c(%ebp),%edi
0870acae +0x48be:  mov    (%eax),%edx
0870acb0 +0x48c0:  mov    %ecx,0x20(%esp)
0870acb4 +0x48c4:  mov    0x24(%ebp),%ecx
0870acb7 +0x48c7:  mov    %esi,0x10(%esp)
0870acbb +0x48cb:  mov    0x10(%ebp),%esi
0870acbe +0x48ce:  mov    %edi,0x14(%esp)
0870acc2 +0x48d2:  mov    0x14(%ebp),%edi
0870acc5 +0x48d5:  mov    %eax,0x4(%esp)
0870acc9 +0x48d9:  mov    %ecx,0x1c(%esp)
0870accd +0x48dd:  mov    0x20(%ebp),%ecx
0870acd0 +0x48e0:  mov    %esi,0x8(%esp)
0870acd4 +0x48e4:  mov    %edi,0xc(%esp)
0870acd8 +0x48e8:  mov    %ebx,(%esp)
0870acdb +0x48eb:  mov    %ecx,0x18(%esp)
0870acdf +0x48ef:  call   *0x18(%edx)
0870ace2 +0x48f2:  mov    %ebx,%eax
0870ace4 +0x48f4:  mov    -0x8(%ebp),%esi
0870ace7 +0x48f7:  mov    -0xc(%ebp),%ebx
0870acea +0x48fa:  mov    -0x4(%ebp),%edi
0870aced +0x48fd:  sub    $0x4,%esp
0870acf0 +0x4900:  mov    %ebp,%esp
0870acf2 +0x4902:  pop    %ebp
0870acf3 +0x4903:  ret    $0x4
0870acf6 +0x4906:  nop
0870acf7 +0x4907:  nop
0870acf8 +0x4908:  nop
0870acf9 +0x4909:  nop
0870acfa +0x490a:  nop
0870acfb +0x490b:  nop
0870acfc +0x490c:  nop
0870acfd +0x490d:  nop
0870acfe +0x490e:  nop
0870acff +0x490f:  nop
0870ad00 +0x4910:  push   %ebp
0870ad01 +0x4911:  mov    %esp,%ebp
0870ad03 +0x4913:  sub    $0x48,%esp
0870ad06 +0x4916:  mov    0xc(%ebp),%eax
0870ad09 +0x4919:  mov    0x28(%ebp),%ecx
0870ad0c +0x491c:  mov    %ebx,-0xc(%ebp)
0870ad0f +0x491f:  mov    0x8(%ebp),%ebx
0870ad12 +0x4922:  mov    %esi,-0x8(%ebp)
0870ad15 +0x4925:  mov    0x18(%ebp),%esi
0870ad18 +0x4928:  mov    %edi,-0x4(%ebp)
0870ad1b +0x492b:  mov    0x1c(%ebp),%edi
0870ad1e +0x492e:  mov    (%eax),%edx
0870ad20 +0x4930:  mov    %ecx,0x20(%esp)
0870ad24 +0x4934:  mov    0x24(%ebp),%ecx
0870ad27 +0x4937:  mov    %esi,0x10(%esp)
0870ad2b +0x493b:  mov    0x10(%ebp),%esi
0870ad2e +0x493e:  mov    %edi,0x14(%esp)
0870ad32 +0x4942:  mov    0x14(%ebp),%edi
0870ad35 +0x4945:  mov    %eax,0x4(%esp)
0870ad39 +0x4949:  mov    %ecx,0x1c(%esp)
0870ad3d +0x494d:  mov    0x20(%ebp),%ecx
0870ad40 +0x4950:  mov    %esi,0x8(%esp)
0870ad44 +0x4954:  mov    %edi,0xc(%esp)
0870ad48 +0x4958:  mov    %ebx,(%esp)
0870ad4b +0x495b:  mov    %ecx,0x18(%esp)
0870ad4f +0x495f:  call   *0x1c(%edx)
0870ad52 +0x4962:  mov    %ebx,%eax
0870ad54 +0x4964:  mov    -0x8(%ebp),%esi
0870ad57 +0x4967:  mov    -0xc(%ebp),%ebx
0870ad5a +0x496a:  mov    -0x4(%ebp),%edi
0870ad5d +0x496d:  sub    $0x4,%esp
0870ad60 +0x4970:  mov    %ebp,%esp
0870ad62 +0x4972:  pop    %ebp
0870ad63 +0x4973:  ret    $0x4
0870ad66 +0x4976:  nop
0870ad67 +0x4977:  nop
0870ad68 +0x4978:  nop
0870ad69 +0x4979:  nop
0870ad6a +0x497a:  nop
0870ad6b +0x497b:  nop
0870ad6c +0x497c:  nop
0870ad6d +0x497d:  nop
0870ad6e +0x497e:  nop
0870ad6f +0x497f:  nop
0870ad70 +0x4980:  push   %ebp
0870ad71 +0x4981:  xor    %eax,%eax
0870ad73 +0x4983:  mov    %esp,%ebp
0870ad75 +0x4985:  pop    %ebp
0870ad76 +0x4986:  ret
0870ad77 +0x4987:  nop
0870ad78 +0x4988:  nop
0870ad79 +0x4989:  nop
0870ad7a +0x498a:  nop
0870ad7b +0x498b:  nop
0870ad7c +0x498c:  nop
0870ad7d +0x498d:  nop
0870ad7e +0x498e:  nop
0870ad7f +0x498f:  nop
0870ad80 +0x4990:  push   %ebp
0870ad81 +0x4991:  xor    %edx,%edx
0870ad83 +0x4993:  mov    %esp,%ebp
0870ad85 +0x4995:  mov    0x8(%ebp),%eax
0870ad88 +0x4998:  cmpl   $0x0,0x10(%ebp)
0870ad8c +0x499c:  setne  %dl
0870ad8f +0x499f:  mov    %edx,0x4(%eax)
0870ad92 +0x49a2:  movl   $&_ZTVSt15time_get_bynameIwSt19istreambuf_iteratorIwSt11char_traitsIwEEE+0x8,(%eax)
0870ad98 +0x49a8:  pop    %ebp
0870ad99 +0x49a9:  ret
0870ad9a +0x49aa:  nop
0870ad9b +0x49ab:  nop
0870ad9c +0x49ac:  nop
0870ad9d +0x49ad:  nop
0870ad9e +0x49ae:  nop
0870ad9f +0x49af:  nop
0870ada0 +0x49b0:  push   %ebp
0870ada1 +0x49b1:  mov    %esp,%ebp
0870ada3 +0x49b3:  sub    $0x8,%esp
0870ada6 +0x49b6:  mov    0x8(%ebp),%eax
0870ada9 +0x49b9:  mov    (%eax),%edx
0870adab +0x49bb:  mov    0x8(%edx),%eax
0870adae +0x49be:  leave
0870adaf +0x49bf:  jmp    *%eax
0870adb1 +0x49c1:  nop
0870adb2 +0x49c2:  nop
0870adb3 +0x49c3:  nop
0870adb4 +0x49c4:  nop
0870adb5 +0x49c5:  nop
0870adb6 +0x49c6:  nop
0870adb7 +0x49c7:  nop
0870adb8 +0x49c8:  nop
0870adb9 +0x49c9:  nop
0870adba +0x49ca:  nop
0870adbb +0x49cb:  nop
0870adbc +0x49cc:  nop
0870adbd +0x49cd:  nop
0870adbe +0x49ce:  nop
0870adbf +0x49cf:  nop
0870adc0 +0x49d0:  push   %ebp
0870adc1 +0x49d1:  mov    %esp,%ebp
0870adc3 +0x49d3:  push   %ebx
0870adc4 +0x49d4:  sub    $0x24,%esp
0870adc7 +0x49d7:  mov    0xc(%ebp),%eax
0870adca +0x49da:  mov    0x1c(%ebp),%ecx
0870adcd +0x49dd:  mov    0x8(%ebp),%ebx
0870add0 +0x49e0:  mov    (%eax),%edx
0870add2 +0x49e2:  mov    %ecx,0x14(%esp)
0870add6 +0x49e6:  mov    0x18(%ebp),%ecx
0870add9 +0x49e9:  mov    %eax,0x4(%esp)
0870addd +0x49ed:  mov    %ebx,(%esp)
0870ade0 +0x49f0:  mov    %ecx,0x10(%esp)
0870ade4 +0x49f4:  mov    0x14(%ebp),%ecx
0870ade7 +0x49f7:  mov    %ecx,0xc(%esp)
0870adeb +0x49fb:  mov    0x10(%ebp),%ecx
0870adee +0x49fe:  mov    %ecx,0x8(%esp)
0870adf2 +0x4a02:  call   *0xc(%edx)
0870adf5 +0x4a05:  mov    %ebx,%eax
0870adf7 +0x4a07:  mov    -0x4(%ebp),%ebx
0870adfa +0x4a0a:  sub    $0x4,%esp
0870adfd +0x4a0d:  leave
0870adfe +0x4a0e:  ret    $0x4
0870ae01 +0x4a11:  nop
0870ae02 +0x4a12:  nop
0870ae03 +0x4a13:  nop
0870ae04 +0x4a14:  nop
0870ae05 +0x4a15:  nop
0870ae06 +0x4a16:  nop
0870ae07 +0x4a17:  nop
0870ae08 +0x4a18:  nop
0870ae09 +0x4a19:  nop
0870ae0a +0x4a1a:  nop
0870ae0b +0x4a1b:  nop
0870ae0c +0x4a1c:  nop
0870ae0d +0x4a1d:  nop
0870ae0e +0x4a1e:  nop
0870ae0f +0x4a1f:  nop
0870ae10 +0x4a20:  push   %ebp
0870ae11 +0x4a21:  mov    %esp,%ebp
0870ae13 +0x4a23:  sub    $0x8,%esp
0870ae16 +0x4a26:  mov    0x8(%ebp),%eax
0870ae19 +0x4a29:  mov    (%eax),%edx
0870ae1b +0x4a2b:  mov    0x10(%edx),%eax
0870ae1e +0x4a2e:  leave
0870ae1f +0x4a2f:  jmp    *%eax
0870ae21 +0x4a31:  nop
0870ae22 +0x4a32:  nop
0870ae23 +0x4a33:  nop
0870ae24 +0x4a34:  nop
0870ae25 +0x4a35:  nop
0870ae26 +0x4a36:  nop
0870ae27 +0x4a37:  nop
0870ae28 +0x4a38:  nop
0870ae29 +0x4a39:  nop
0870ae2a +0x4a3a:  nop
0870ae2b +0x4a3b:  nop
0870ae2c +0x4a3c:  nop
0870ae2d +0x4a3d:  nop
0870ae2e +0x4a3e:  nop
0870ae2f +0x4a3f:  nop
0870ae30 +0x4a40:  push   %ebp
0870ae31 +0x4a41:  mov    %esp,%ebp
0870ae33 +0x4a43:  pop    %ebp
0870ae34 +0x4a44:  ret
0870ae35 +0x4a45:  nop
0870ae36 +0x4a46:  nop
0870ae37 +0x4a47:  nop
0870ae38 +0x4a48:  nop
0870ae39 +0x4a49:  nop
0870ae3a +0x4a4a:  nop
0870ae3b +0x4a4b:  nop
0870ae3c +0x4a4c:  nop
0870ae3d +0x4a4d:  nop
0870ae3e +0x4a4e:  nop
0870ae3f +0x4a4f:  nop
0870ae40 +0x4a50:  push   %ebp
0870ae41 +0x4a51:  mov    %esp,%ebp
0870ae43 +0x4a53:  mov    0xc(%ebp),%eax
0870ae46 +0x4a56:  pop    %ebp
0870ae47 +0x4a57:  mov    (%eax),%eax
0870ae49 +0x4a59:  ret
0870ae4a +0x4a5a:  nop
0870ae4b +0x4a5b:  nop
0870ae4c +0x4a5c:  nop
0870ae4d +0x4a5d:  nop
0870ae4e +0x4a5e:  nop
0870ae4f +0x4a5f:  nop
0870ae50 +0x4a60:  push   %ebp
0870ae51 +0x4a61:  mov    %esp,%ebp
0870ae53 +0x4a63:  mov    0x8(%ebp),%eax
0870ae56 +0x4a66:  movl   $&_ZNSbIwSt11char_traitsIwESaIwEE4_Rep20_S_empty_rep_storageE+0xc,(%eax)
0870ae5c +0x4a6c:  pop    %ebp
0870ae5d +0x4a6d:  ret    $0x4
0870ae60 +0x4a70:  push   %ebp
0870ae61 +0x4a71:  mov    %esp,%ebp
0870ae63 +0x4a73:  sub    $0x8,%esp
0870ae66 +0x4a76:  mov    0x8(%ebp),%eax
0870ae69 +0x4a79:  mov    (%eax),%edx
0870ae6b +0x4a7b:  mov    0x8(%edx),%eax
0870ae6e +0x4a7e:  leave
0870ae6f +0x4a7f:  jmp    *%eax
0870ae71 +0x4a81:  nop
0870ae72 +0x4a82:  nop
0870ae73 +0x4a83:  nop
0870ae74 +0x4a84:  nop
0870ae75 +0x4a85:  nop
0870ae76 +0x4a86:  nop
0870ae77 +0x4a87:  nop
0870ae78 +0x4a88:  nop
0870ae79 +0x4a89:  nop
0870ae7a +0x4a8a:  nop
0870ae7b +0x4a8b:  nop
0870ae7c +0x4a8c:  nop
0870ae7d +0x4a8d:  nop
0870ae7e +0x4a8e:  nop
0870ae7f +0x4a8f:  nop
0870ae80 +0x4a90:  push   %ebp
0870ae81 +0x4a91:  mov    %esp,%ebp
0870ae83 +0x4a93:  push   %ebx
0870ae84 +0x4a94:  sub    $0x14,%esp
0870ae87 +0x4a97:  mov    0xc(%ebp),%eax
0870ae8a +0x4a9a:  mov    0x14(%ebp),%ecx
0870ae8d +0x4a9d:  mov    0x8(%ebp),%ebx
0870ae90 +0x4aa0:  mov    (%eax),%edx
0870ae92 +0x4aa2:  mov    %ecx,0xc(%esp)
0870ae96 +0x4aa6:  mov    0x10(%ebp),%ecx
0870ae99 +0x4aa9:  mov    %eax,0x4(%esp)
0870ae9d +0x4aad:  mov    %ebx,(%esp)
0870aea0 +0x4ab0:  mov    %ecx,0x8(%esp)
0870aea4 +0x4ab4:  call   *0xc(%edx)
0870aea7 +0x4ab7:  mov    %ebx,%eax
0870aea9 +0x4ab9:  mov    -0x4(%ebp),%ebx
0870aeac +0x4abc:  sub    $0x4,%esp
0870aeaf +0x4abf:  leave
0870aeb0 +0x4ac0:  ret    $0x4
0870aeb3 +0x4ac3:  nop
0870aeb4 +0x4ac4:  nop
0870aeb5 +0x4ac5:  nop
0870aeb6 +0x4ac6:  nop
0870aeb7 +0x4ac7:  nop
0870aeb8 +0x4ac8:  nop
0870aeb9 +0x4ac9:  nop
0870aeba +0x4aca:  nop
0870aebb +0x4acb:  nop
0870aebc +0x4acc:  nop
0870aebd +0x4acd:  nop
0870aebe +0x4ace:  nop
0870aebf +0x4acf:  nop
0870aec0 +0x4ad0:  push   %ebp
0870aec1 +0x4ad1:  mov    %esp,%ebp
0870aec3 +0x4ad3:  sub    $0x8,%esp
0870aec6 +0x4ad6:  mov    0x8(%ebp),%eax
0870aec9 +0x4ad9:  mov    (%eax),%edx
0870aecb +0x4adb:  mov    0x10(%edx),%eax
0870aece +0x4ade:  leave
0870aecf +0x4adf:  jmp    *%eax
0870aed1 +0x4ae1:  nop
0870aed2 +0x4ae2:  nop
0870aed3 +0x4ae3:  nop
0870aed4 +0x4ae4:  nop
0870aed5 +0x4ae5:  nop
0870aed6 +0x4ae6:  nop
0870aed7 +0x4ae7:  nop
0870aed8 +0x4ae8:  nop
0870aed9 +0x4ae9:  nop
0870aeda +0x4aea:  nop
0870aedb +0x4aeb:  nop
0870aedc +0x4aec:  nop
0870aedd +0x4aed:  nop
0870aede +0x4aee:  nop
0870aedf +0x4aef:  nop
0870aee0 +0x4af0:  push   %ebp
0870aee1 +0x4af1:  xor    %ecx,%ecx
0870aee3 +0x4af3:  mov    %esp,%ebp
0870aee5 +0x4af5:  xor    %eax,%eax
0870aee7 +0x4af7:  push   %ebx
0870aee8 +0x4af8:  mov    0xc(%ebp),%edx
0870aeeb +0x4afb:  mov    0x10(%ebp),%ebx
0870aeee +0x4afe:  cmp    %ebx,%edx
0870aef0 +0x4b00:  jae    0870af06 <+0x4b16>
0870aef2 +0x4b02:  lea    0x0(%esi),%esi
0870aef8 +0x4b08:  ror    $0x19,%ecx
0870aefb +0x4b0b:  add    (%edx),%ecx
0870aefd +0x4b0d:  add    $0x4,%edx
0870af00 +0x4b10:  cmp    %edx,%ebx
0870af02 +0x4b12:  ja     0870aef8 <+0x4b08>
0870af04 +0x4b14:  mov    %ecx,%eax
0870af06 +0x4b16:  pop    %ebx
0870af07 +0x4b17:  pop    %ebp
0870af08 +0x4b18:  ret
0870af09 +0x4b19:  nop
0870af0a +0x4b1a:  nop
0870af0b +0x4b1b:  nop
0870af0c +0x4b1c:  nop
0870af0d +0x4b1d:  nop
0870af0e +0x4b1e:  nop
0870af0f +0x4b1f:  nop
0870af10 +0x4b20:  push   %ebp
0870af11 +0x4b21:  mov    %esp,%ebp
0870af13 +0x4b23:  push   %edi
0870af14 +0x4b24:  push   %esi
0870af15 +0x4b25:  push   %ebx
0870af16 +0x4b26:  xor    %ebx,%ebx
0870af18 +0x4b28:  sub    $0x18,%esp
0870af1b +0x4b2b:  mov    0x10(%ebp),%edx
0870af1e +0x4b2e:  mov    0x10(%ebp),%ecx
0870af21 +0x4b31:  mov    0x8(%ebp),%eax
0870af24 +0x4b34:  mov    0x18(%ebp),%edi
0870af27 +0x4b37:  movzbl (%edx),%esi
0870af2a +0x4b3a:  xor    %edx,%edx
0870af2c +0x4b3c:  mov    %ecx,-0x14(%ebp)
0870af2f +0x4b3f:  mov    0x14(%ebp),%ecx
0870af32 +0x4b42:  mov    %eax,-0x1c(%ebp)
0870af35 +0x4b45:  sub    $0x1,%ecx
0870af38 +0x4b48:  mov    %ecx,-0x18(%ebp)
0870af3b +0x4b4b:  mov    %esi,%ecx
0870af3d +0x4b4d:  lea    0x0(%esi),%esi
0870af40 +0x4b50:  mov    0x1c(%ebp),%eax
0870af43 +0x4b53:  movsbl %cl,%esi
0870af46 +0x4b56:  sub    %edi,%eax
0870af48 +0x4b58:  sar    $0x2,%eax
0870af4b +0x4b5b:  cmp    %esi,%eax
0870af4d +0x4b5d:  jg     0870aff8 <+0x4c08>
0870af53 +0x4b63:  cmp    0x1c(%ebp),%edi
0870af56 +0x4b66:  mov    -0x1c(%ebp),%eax
0870af59 +0x4b69:  je     0870af83 <+0x4b93>
0870af5b +0x4b6b:  mov    0x1c(%ebp),%esi
0870af5e +0x4b6e:  lea    0x4(%edi),%ecx
0870af61 +0x4b71:  mov    %ebx,-0x18(%ebp)
0870af64 +0x4b74:  sub    %ecx,%esi
0870af66 +0x4b76:  mov    %esi,%ecx
0870af68 +0x4b78:  shr    $0x2,%ecx
0870af6b +0x4b7b:  lea    0x1(%ecx),%esi
0870af6e +0x4b7e:  xor    %ecx,%ecx
0870af70 +0x4b80:  mov    (%edi,%ecx,4),%ebx
0870af73 +0x4b83:  mov    %ebx,(%eax,%ecx,4)
0870af76 +0x4b86:  add    $0x1,%ecx
0870af79 +0x4b89:  cmp    %esi,%ecx
0870af7b +0x4b8b:  jne    0870af70 <+0x4b80>
0870af7d +0x4b8d:  mov    -0x18(%ebp),%ebx
0870af80 +0x4b90:  lea    (%eax,%ecx,4),%eax
0870af83 +0x4b93:  mov    0x1c(%ebp),%esi
0870af86 +0x4b96:  mov    %edx,-0x1c(%ebp)
0870af89 +0x4b99:  mov    %esi,-0x10(%ebp)
0870af8c +0x4b9c:  mov    -0x14(%ebp),%esi
0870af8f +0x4b9f:  jmp    0870af9d <+0x4bad>
0870af91 +0x4ba1:  lea    0x0(%esi,%eiz,1),%esi
0870af98 +0x4ba8:  mov    %ecx,%eax
0870af9a +0x4baa:  sub    $0x1,%ebx
0870af9d +0x4bad:  test   %ebx,%ebx
0870af9f +0x4baf:  je     0870b030 <+0x4c40>
0870afa5 +0x4bb5:  mov    0xc(%ebp),%edi
0870afa8 +0x4bb8:  lea    0x4(%eax),%ecx
0870afab +0x4bbb:  mov    %edi,(%eax)
0870afad +0x4bbd:  movzbl (%esi),%edx
0870afb0 +0x4bc0:  test   %dl,%dl
0870afb2 +0x4bc2:  jle    0870af98 <+0x4ba8>
0870afb4 +0x4bc4:  lea    -0x1(%edx),%edi
0870afb7 +0x4bc7:  and    $0xff,%edi
0870afbd +0x4bcd:  lea    0x4(,%edi,4),%edi
0870afc4 +0x4bd4:  mov    %edi,-0x18(%ebp)
0870afc7 +0x4bd7:  xor    %edi,%edi
0870afc9 +0x4bd9:  mov    %ecx,-0x14(%ebp)
0870afcc +0x4bdc:  mov    -0x10(%ebp),%ecx
0870afcf +0x4bdf:  mov    (%ecx,%edi,1),%ecx
0870afd2 +0x4be2:  mov    %ecx,0x4(%eax,%edi,1)
0870afd6 +0x4be6:  add    $0x4,%edi
0870afd9 +0x4be9:  cmp    -0x18(%ebp),%edi
0870afdc +0x4bec:  jne    0870afcc <+0x4bdc>
0870afde +0x4bee:  mov    -0x14(%ebp),%ecx
0870afe1 +0x4bf1:  sub    $0x1,%edx
0870afe4 +0x4bf4:  movzbl %dl,%edx
0870afe7 +0x4bf7:  lea    0x4(,%edx,4),%edx
0870afee +0x4bfe:  add    %edx,-0x10(%ebp)
0870aff1 +0x4c01:  lea    (%ecx,%edx,1),%eax
0870aff4 +0x4c04:  jmp    0870af9a <+0x4baa>
0870aff6 +0x4c06:  xchg   %ax,%ax
0870aff8 +0x4c08:  test   %cl,%cl
0870affa +0x4c0a:  jle    0870af53 <+0x4b63>
0870b000 +0x4c10:  cmp    $0x7f,%cl
0870b003 +0x4c13:  je     0870af53 <+0x4b63>
0870b009 +0x4c19:  cmp    -0x18(%ebp),%edx
0870b00c +0x4c1c:  jae    0870b028 <+0x4c38>
0870b00e +0x4c1e:  mov    0x10(%ebp),%eax
0870b011 +0x4c21:  add    $0x1,%edx
0870b014 +0x4c24:  movzbl (%eax,%edx,1),%ecx
0870b018 +0x4c28:  add    %edx,%eax
0870b01a +0x4c2a:  mov    %eax,-0x14(%ebp)
0870b01d +0x4c2d:  shl    $0x2,%esi
0870b020 +0x4c30:  sub    %esi,0x1c(%ebp)
0870b023 +0x4c33:  jmp    0870af40 <+0x4b50>
0870b028 +0x4c38:  add    $0x1,%ebx
0870b02b +0x4c3b:  jmp    0870b01d <+0x4c2d>
0870b02d +0x4c3d:  lea    0x0(%esi),%esi
0870b030 +0x4c40:  mov    -0x1c(%ebp),%edx
0870b033 +0x4c43:  test   %edx,%edx
0870b035 +0x4c45:  je     0870b053 <+0x4c63>
0870b037 +0x4c47:  mov    0xc(%ebp),%edi
0870b03a +0x4c4a:  sub    $0x1,%edx
0870b03d +0x4c4d:  mov    0x10(%ebp),%esi
0870b040 +0x4c50:  lea    0x4(%eax),%ebx
0870b043 +0x4c53:  mov    %edi,(%eax)
0870b045 +0x4c55:  movzbl (%esi,%edx,1),%ecx
0870b049 +0x4c59:  test   %cl,%cl
0870b04b +0x4c5b:  jg     0870b060 <+0x4c70>
0870b04d +0x4c5d:  test   %edx,%edx
0870b04f +0x4c5f:  mov    %ebx,%eax
0870b051 +0x4c61:  jne    0870b037 <+0x4c47>
0870b053 +0x4c63:  add    $0x18,%esp
0870b056 +0x4c66:  pop    %ebx
0870b057 +0x4c67:  pop    %esi
0870b058 +0x4c68:  pop    %edi
0870b059 +0x4c69:  pop    %ebp
0870b05a +0x4c6a:  ret
0870b05b +0x4c6b:  nop
0870b05c +0x4c6c:  lea    0x0(%esi,%eiz,1),%esi
0870b060 +0x4c70:  lea    -0x1(%ecx),%esi
0870b063 +0x4c73:  and    $0xff,%esi
0870b069 +0x4c79:  lea    0x4(,%esi,4),%edi
0870b070 +0x4c80:  xor    %esi,%esi
0870b072 +0x4c82:  mov    %edi,-0x14(%ebp)
0870b075 +0x4c85:  mov    -0x10(%ebp),%edi
0870b078 +0x4c88:  mov    (%edi,%esi,1),%edi
0870b07b +0x4c8b:  mov    %edi,0x4(%eax,%esi,1)
0870b07f +0x4c8f:  add    $0x4,%esi
0870b082 +0x4c92:  cmp    -0x14(%ebp),%esi
0870b085 +0x4c95:  jne    0870b075 <+0x4c85>
0870b087 +0x4c97:  sub    $0x1,%ecx
0870b08a +0x4c9a:  movzbl %cl,%ecx
0870b08d +0x4c9d:  lea    0x4(,%ecx,4),%ecx
0870b094 +0x4ca4:  lea    (%ebx,%ecx,1),%eax
0870b097 +0x4ca7:  add    %ecx,-0x10(%ebp)
0870b09a +0x4caa:  jmp    0870b033 <+0x4c43>
0870b09c +0x4cac:  nop
0870b09d +0x4cad:  nop
0870b09e +0x4cae:  nop
0870b09f +0x4caf:  nop
0870b0a0 +0x4cb0:  push   %ebp
0870b0a1 +0x4cb1:  mov    %esp,%ebp
0870b0a3 +0x4cb3:  sub    $0x28,%esp
0870b0a6 +0x4cb6:  mov    %ebx,-0x8(%ebp)
0870b0a9 +0x4cb9:  mov    0x24(%ebp),%ebx
0870b0ac +0x4cbc:  mov    0x20(%ebp),%eax
0870b0af +0x4cbf:  mov    %esi,-0x4(%ebp)
0870b0b2 +0x4cc2:  mov    0x1c(%ebp),%esi
0870b0b5 +0x4cc5:  mov    (%ebx),%edx
0870b0b7 +0x4cc7:  mov    %eax,0x10(%esp)
0870b0bb +0x4ccb:  mov    %esi,(%esp)
0870b0be +0x4cce:  lea    (%eax,%edx,4),%edx
0870b0c1 +0x4cd1:  mov    0x10(%ebp),%eax
0870b0c4 +0x4cd4:  mov    %edx,0x14(%esp)
0870b0c8 +0x4cd8:  mov    %eax,0xc(%esp)
0870b0cc +0x4cdc:  mov    0xc(%ebp),%eax
0870b0cf +0x4cdf:  mov    %eax,0x8(%esp)
0870b0d3 +0x4ce3:  mov    0x14(%ebp),%eax
0870b0d6 +0x4ce6:  mov    %eax,0x4(%esp)
0870b0da +0x4cea:  call   0870af10 <+0x4b20>
0870b0df +0x4cef:  sub    %esi,%eax
0870b0e1 +0x4cf1:  sar    $0x2,%eax
0870b0e4 +0x4cf4:  mov    %eax,(%ebx)
0870b0e6 +0x4cf6:  mov    -0x8(%ebp),%ebx
0870b0e9 +0x4cf9:  mov    -0x4(%ebp),%esi
0870b0ec +0x4cfc:  mov    %ebp,%esp
0870b0ee +0x4cfe:  pop    %ebp
0870b0ef +0x4cff:  ret
```

## 反编译 C

```c
// <global>::int @ 0x87063f0

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::wstreambuf*,
   std::wstreambuf*, bool&) */

int std::__copy_streambufs_eof<wchar_t,std::char_traits<wchar_t>>
              (wstreambuf *param_1,wstreambuf *param_2,bool *param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int local_20;
  
  *param_3 = true;
  if (*(int **)(param_1 + 8) < *(int **)(param_1 + 0xc)) {
    iVar2 = **(int **)(param_1 + 8);
  }
  else {
    iVar2 = (**(code **)(*(int *)param_1 + 0x24))(param_1);
  }
  local_20 = 0;
  do {
    if (iVar2 == -1) {
      return local_20;
    }
    while( true ) {
      piVar3 = *(int **)(param_1 + 8);
      iVar4 = *(int *)(param_1 + 0xc) - (int)piVar3 >> 2;
      if (iVar4 < 2) break;
      iVar2 = (**(code **)(*(int *)param_2 + 0x30))(param_2,piVar3,iVar4);
      local_20 = local_20 + iVar2;
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + iVar2 * 4;
      if (iVar2 < iVar4) goto LAB_087064a0;
      iVar2 = (**(code **)(*(int *)param_1 + 0x24))(param_1);
      if (iVar2 == -1) {
        return local_20;
      }
    }
    piVar1 = *(int **)(param_2 + 0x14);
    if (piVar1 < *(int **)(param_2 + 0x18)) {
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 4;
      *piVar1 = iVar2;
    }
    else {
      iVar2 = (**(code **)(*(int *)param_2 + 0x34))(param_2,iVar2);
      if (iVar2 == -1) {
LAB_087064a0:
        *param_3 = false;
        return local_20;
      }
      piVar3 = *(int **)(param_1 + 8);
    }
    if (piVar3 < *(int **)(param_1 + 0xc)) {
      iVar2 = *piVar3;
      *(int **)(param_1 + 8) = piVar3 + 1;
    }
    else {
      iVar2 = (**(code **)(*(int *)param_1 + 0x28))(param_1);
    }
    if (iVar2 != -1) {
      if (*(int **)(param_1 + 8) < *(int **)(param_1 + 0xc)) {
        iVar2 = **(int **)(param_1 + 8);
      }
      else {
        iVar2 = (**(code **)(*(int *)param_1 + 0x24))(param_1);
      }
    }
    local_20 = local_20 + 1;
  } while( true );
}
```
