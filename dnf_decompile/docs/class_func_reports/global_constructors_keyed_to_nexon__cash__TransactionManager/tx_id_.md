# tx_id_

`_GLOBAL__I__ZN5nexon4cash18TransactionManager6tx_id_E`

`global constructors keyed to nexon::cash::TransactionManager::tx_id_`

| 类 | 地址 |
|---|---|
| `global constructors keyed to nexon::cash::TransactionManager` | `0x081b0428` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b0428  _GLOBAL__I__ZN5nexon4cash18TransactionManager6tx_id_E
#           global constructors keyed to nexon::cash::TransactionManager::tx_id_
# range [0x081b0428, 0x081b1467]
081b0428 +0x0000:  push   %ebp
081b0429 +0x0001:  mov    %esp,%ebp
081b042b +0x0003:  sub    $0x18,%esp
081b042e +0x0006:  movl   $0xffff,0x4(%esp)
081b0436 +0x000e:  movl   $0x1,(%esp)
081b043d +0x0015:  call   081b03e8 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
081b0442 +0x001a:  leave
081b0443 +0x001b:  ret
081b0444 +0x001c:  push   %ebp
081b0445 +0x001d:  mov    %esp,%ebp
081b0447 +0x001f:  sub    $0x28,%esp
081b044a +0x0022:  mov    0x8(%ebp),%edx
081b044d +0x0025:  lea    -0x14(%ebp),%eax
081b0450 +0x0028:  lea    0xc(%ebp),%ecx
081b0453 +0x002b:  mov    %ecx,0x8(%esp)
081b0457 +0x002f:  mov    %edx,0x4(%esp)
081b045b +0x0033:  mov    %eax,(%esp)
081b045e +0x0036:  call   081b0558 <+0x130>
081b0463 +0x003b:  sub    $0x4,%esp
081b0466 +0x003e:  lea    -0x14(%ebp),%eax
081b0469 +0x0041:  mov    %eax,0x4(%esp)
081b046d +0x0045:  lea    -0x18(%ebp),%eax
081b0470 +0x0048:  mov    %eax,(%esp)
081b0473 +0x004b:  call   081b0584 <+0x15c>
081b0478 +0x0050:  mov    0x8(%ebp),%edx
081b047b +0x0053:  lea    -0xc(%ebp),%eax
081b047e +0x0056:  mov    %edx,0x4(%esp)
081b0482 +0x005a:  mov    %eax,(%esp)
081b0485 +0x005d:  call   081b0594 <+0x16c>
081b048a +0x0062:  sub    $0x4,%esp
081b048d +0x0065:  lea    -0xc(%ebp),%eax
081b0490 +0x0068:  mov    %eax,0x4(%esp)
081b0494 +0x006c:  lea    -0x10(%ebp),%eax
081b0497 +0x006f:  mov    %eax,(%esp)
081b049a +0x0072:  call   081b0584 <+0x15c>
081b049f +0x0077:  lea    -0x10(%ebp),%eax
081b04a2 +0x007a:  mov    %eax,0x4(%esp)
081b04a6 +0x007e:  lea    -0x18(%ebp),%eax
081b04a9 +0x0081:  mov    %eax,(%esp)
081b04ac +0x0084:  call   081b05ba <+0x192>
081b04b1 +0x0089:  test   %al,%al
081b04b3 +0x008b:  je     081b04bc <+0x94>
081b04b5 +0x008d:  mov    $0x0,%eax
081b04ba +0x0092:  jmp    081b04ca <+0xa2>
081b04bc +0x0094:  lea    -0x18(%ebp),%eax
081b04bf +0x0097:  mov    %eax,(%esp)
081b04c2 +0x009a:  call   081b05ce <+0x1a6>
081b04c7 +0x009f:  mov    0x4(%eax),%eax
081b04ca +0x00a2:  leave
081b04cb +0x00a3:  ret
081b04cc +0x00a4:  push   %ebp
081b04cd +0x00a5:  mov    %esp,%ebp
081b04cf +0x00a7:  mov    &_ZN5nexon4cash18TransactionManager6tx_id_E,%eax
081b04d4 +0x00ac:  add    $0x1,%eax
081b04d7 +0x00af:  mov    %eax,&_ZN5nexon4cash18TransactionManager6tx_id_E
081b04dc +0x00b4:  mov    &_ZN5nexon4cash18TransactionManager6tx_id_E,%eax
081b04e1 +0x00b9:  pop    %ebp
081b04e2 +0x00ba:  ret
081b04e3 +0x00bb:  nop
081b04e4 +0x00bc:  push   %ebp
081b04e5 +0x00bd:  mov    %esp,%ebp
081b04e7 +0x00bf:  sub    $0x18,%esp
081b04ea +0x00c2:  mov    0x8(%ebp),%eax
081b04ed +0x00c5:  mov    %eax,(%esp)
081b04f0 +0x00c8:  call   081b0604 <+0x1dc>
081b04f5 +0x00cd:  leave
081b04f6 +0x00ce:  ret
081b04f7 +0x00cf:  nop
081b04f8 +0x00d0:  push   %ebp
081b04f9 +0x00d1:  mov    %esp,%ebp
081b04fb +0x00d3:  sub    $0x18,%esp
081b04fe +0x00d6:  mov    0x8(%ebp),%eax
081b0501 +0x00d9:  mov    %eax,(%esp)
081b0504 +0x00dc:  call   081b05dc <+0x1b4>
081b0509 +0x00e1:  leave
081b050a +0x00e2:  ret
081b050b +0x00e3:  nop
081b050c +0x00e4:  push   %ebp
081b050d +0x00e5:  mov    %esp,%ebp
081b050f +0x00e7:  mov    0x8(%ebp),%eax
081b0512 +0x00ea:  mov    (%eax),%eax
081b0514 +0x00ec:  pop    %ebp
081b0515 +0x00ed:  ret
081b0516 +0x00ee:  push   %ebp
081b0517 +0x00ef:  mov    %esp,%ebp
081b0519 +0x00f1:  mov    0x8(%ebp),%eax
081b051c +0x00f4:  mov    0xc(%eax),%eax
081b051f +0x00f7:  pop    %ebp
081b0520 +0x00f8:  ret
081b0521 +0x00f9:  nop
081b0522 +0x00fa:  push   %ebp
081b0523 +0x00fb:  mov    %esp,%ebp
081b0525 +0x00fd:  mov    0x8(%ebp),%eax
081b0528 +0x0100:  mov    0x4(%eax),%eax
081b052b +0x0103:  pop    %ebp
081b052c +0x0104:  ret
081b052d +0x0105:  nop
081b052e +0x0106:  push   %ebp
081b052f +0x0107:  mov    %esp,%ebp
081b0531 +0x0109:  mov    0x8(%ebp),%eax
081b0534 +0x010c:  mov    0x4(%eax),%eax
081b0537 +0x010f:  mov    %eax,%edx
081b0539 +0x0111:  add    0xc(%ebp),%edx
081b053c +0x0114:  mov    0x8(%ebp),%eax
081b053f +0x0117:  mov    %edx,0x4(%eax)
081b0542 +0x011a:  pop    %ebp
081b0543 +0x011b:  ret
081b0544 +0x011c:  push   %ebp
081b0545 +0x011d:  mov    %esp,%ebp
081b0547 +0x011f:  sub    $0x18,%esp
081b054a +0x0122:  mov    0x8(%ebp),%eax
081b054d +0x0125:  mov    %eax,(%esp)
081b0550 +0x0128:  call   081b04e4 <+0xbc>
081b0555 +0x012d:  leave
081b0556 +0x012e:  ret
081b0557 +0x012f:  nop
081b0558 +0x0130:  push   %ebp
081b0559 +0x0131:  mov    %esp,%ebp
081b055b +0x0133:  push   %ebx
081b055c +0x0134:  sub    $0x14,%esp
081b055f +0x0137:  mov    0x8(%ebp),%ebx
081b0562 +0x013a:  mov    0xc(%ebp),%eax
081b0565 +0x013d:  mov    0x10(%ebp),%edx
081b0568 +0x0140:  mov    %edx,0x8(%esp)
081b056c +0x0144:  mov    %eax,0x4(%esp)
081b0570 +0x0148:  mov    %ebx,(%esp)
081b0573 +0x014b:  call   081b0712 <+0x2ea>
081b0578 +0x0150:  sub    $0x4,%esp
081b057b +0x0153:  mov    %ebx,%eax
081b057d +0x0155:  mov    -0x4(%ebp),%ebx
081b0580 +0x0158:  leave
081b0581 +0x0159:  ret    $0x4
081b0584 +0x015c:  push   %ebp
081b0585 +0x015d:  mov    %esp,%ebp
081b0587 +0x015f:  mov    0xc(%ebp),%eax
081b058a +0x0162:  mov    (%eax),%edx
081b058c +0x0164:  mov    0x8(%ebp),%eax
081b058f +0x0167:  mov    %edx,(%eax)
081b0591 +0x0169:  pop    %ebp
081b0592 +0x016a:  ret
081b0593 +0x016b:  nop
081b0594 +0x016c:  push   %ebp
081b0595 +0x016d:  mov    %esp,%ebp
081b0597 +0x016f:  push   %ebx
081b0598 +0x0170:  sub    $0x14,%esp
081b059b +0x0173:  mov    0x8(%ebp),%ebx
081b059e +0x0176:  mov    0xc(%ebp),%eax
081b05a1 +0x0179:  mov    %eax,0x4(%esp)
081b05a5 +0x017d:  mov    %ebx,(%esp)
081b05a8 +0x0180:  call   081b07d0 <+0x3a8>
081b05ad +0x0185:  sub    $0x4,%esp
081b05b0 +0x0188:  mov    %ebx,%eax
081b05b2 +0x018a:  mov    -0x4(%ebp),%ebx
081b05b5 +0x018d:  leave
081b05b6 +0x018e:  ret    $0x4
081b05b9 +0x0191:  nop
081b05ba +0x0192:  push   %ebp
081b05bb +0x0193:  mov    %esp,%ebp
081b05bd +0x0195:  mov    0x8(%ebp),%eax
081b05c0 +0x0198:  mov    (%eax),%edx
081b05c2 +0x019a:  mov    0xc(%ebp),%eax
081b05c5 +0x019d:  mov    (%eax),%eax
081b05c7 +0x019f:  cmp    %eax,%edx
081b05c9 +0x01a1:  sete   %al
081b05cc +0x01a4:  pop    %ebp
081b05cd +0x01a5:  ret
081b05ce +0x01a6:  push   %ebp
081b05cf +0x01a7:  mov    %esp,%ebp
081b05d1 +0x01a9:  mov    0x8(%ebp),%eax
081b05d4 +0x01ac:  mov    (%eax),%eax
081b05d6 +0x01ae:  add    $0x10,%eax
081b05d9 +0x01b1:  pop    %ebp
081b05da +0x01b2:  ret
081b05db +0x01b3:  nop
081b05dc +0x01b4:  push   %ebp
081b05dd +0x01b5:  mov    %esp,%ebp
081b05df +0x01b7:  sub    $0x18,%esp
081b05e2 +0x01ba:  mov    0x8(%ebp),%eax
081b05e5 +0x01bd:  mov    %eax,(%esp)
081b05e8 +0x01c0:  call   081b07f6 <+0x3ce>
081b05ed +0x01c5:  leave
081b05ee +0x01c6:  ret
081b05ef +0x01c7:  nop
081b05f0 +0x01c8:  push   %ebp
081b05f1 +0x01c9:  mov    %esp,%ebp
081b05f3 +0x01cb:  sub    $0x18,%esp
081b05f6 +0x01ce:  mov    0x8(%ebp),%eax
081b05f9 +0x01d1:  mov    %eax,(%esp)
081b05fc +0x01d4:  call   081b080a <+0x3e2>
081b0601 +0x01d9:  leave
081b0602 +0x01da:  ret
081b0603 +0x01db:  nop
081b0604 +0x01dc:  push   %ebp
081b0605 +0x01dd:  mov    %esp,%ebp
081b0607 +0x01df:  push   %esi
081b0608 +0x01e0:  push   %ebx
081b0609 +0x01e1:  sub    $0x10,%esp
081b060c +0x01e4:  mov    0x8(%ebp),%eax
081b060f +0x01e7:  mov    %eax,(%esp)
081b0612 +0x01ea:  call   081b0874 <+0x44c>
081b0617 +0x01ef:  mov    %eax,0x4(%esp)
081b061b +0x01f3:  mov    0x8(%ebp),%eax
081b061e +0x01f6:  mov    %eax,(%esp)
081b0621 +0x01f9:  call   081b081e <+0x3f6>
081b0626 +0x01fe:  jmp    081b0643 <+0x21b>
081b0628 +0x0200:  mov    %edx,%ebx
081b062a +0x0202:  mov    %eax,%esi
081b062c +0x0204:  mov    0x8(%ebp),%eax
081b062f +0x0207:  mov    %eax,(%esp)
081b0632 +0x020a:  call   081b05f0 <+0x1c8>
081b0637 +0x020f:  mov    %esi,%eax
081b0639 +0x0211:  mov    %ebx,%edx
081b063b +0x0213:  mov    %eax,(%esp)
081b063e +0x0216:  call   08ae3750 <_Unwind_Resume>
081b0643 +0x021b:  mov    0x8(%ebp),%eax
081b0646 +0x021e:  mov    %eax,(%esp)
081b0649 +0x0221:  call   081b05f0 <+0x1c8>
081b064e +0x0226:  add    $0x10,%esp
081b0651 +0x0229:  pop    %ebx
081b0652 +0x022a:  pop    %esi
081b0653 +0x022b:  pop    %ebp
081b0654 +0x022c:  ret
081b0655 +0x022d:  push   %ebp
081b0656 +0x022e:  mov    %esp,%ebp
081b0658 +0x0230:  push   %esi
081b0659 +0x0231:  push   %ebx
081b065a +0x0232:  sub    $0x20,%esp
081b065d +0x0235:  mov    0x8(%ebp),%esi
081b0660 +0x0238:  mov    0x10(%ebp),%eax
081b0663 +0x023b:  mov    %eax,(%esp)
081b0666 +0x023e:  call   081b087f <+0x457>
081b066b +0x0243:  mov    %eax,%ebx
081b066d +0x0245:  mov    0xc(%ebp),%eax
081b0670 +0x0248:  mov    %eax,(%esp)
081b0673 +0x024b:  call   080e2d69 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0xb0f>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0xb0f
081b0678 +0x0250:  mov    (%eax),%eax
081b067a +0x0252:  mov    %eax,-0xc(%ebp)
081b067d +0x0255:  mov    %ebx,0x8(%esp)
081b0681 +0x0259:  lea    -0xc(%ebp),%eax
081b0684 +0x025c:  mov    %eax,0x4(%esp)
081b0688 +0x0260:  mov    %esi,(%esp)
081b068b +0x0263:  call   081b0888 <+0x460>
081b0690 +0x0268:  mov    %esi,%eax
081b0692 +0x026a:  add    $0x20,%esp
081b0695 +0x026d:  pop    %ebx
081b0696 +0x026e:  pop    %esi
081b0697 +0x026f:  pop    %ebp
081b0698 +0x0270:  ret    $0x4
081b069b +0x0273:  nop
081b069c +0x0274:  push   %ebp
081b069d +0x0275:  mov    %esp,%ebp
081b069f +0x0277:  sub    $0x18,%esp
081b06a2 +0x027a:  mov    0xc(%ebp),%eax
081b06a5 +0x027d:  mov    %eax,(%esp)
081b06a8 +0x0280:  call   080e2d71 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0xb17>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0xb17
081b06ad +0x0285:  mov    (%eax),%edx
081b06af +0x0287:  mov    0x8(%ebp),%eax
081b06b2 +0x028a:  mov    %edx,(%eax)
081b06b4 +0x028c:  mov    0xc(%ebp),%eax
081b06b7 +0x028f:  add    $0x4,%eax
081b06ba +0x0292:  mov    %eax,(%esp)
081b06bd +0x0295:  call   081b08b5 <+0x48d>
081b06c2 +0x029a:  mov    (%eax),%edx
081b06c4 +0x029c:  mov    0x8(%ebp),%eax
081b06c7 +0x029f:  mov    %edx,0x4(%eax)
081b06ca +0x02a2:  leave
081b06cb +0x02a3:  ret
081b06cc +0x02a4:  push   %ebp
081b06cd +0x02a5:  mov    %esp,%ebp
081b06cf +0x02a7:  push   %ebx
081b06d0 +0x02a8:  sub    $0x14,%esp
081b06d3 +0x02ab:  mov    0x8(%ebp),%ebx
081b06d6 +0x02ae:  mov    0xc(%ebp),%eax
081b06d9 +0x02b1:  mov    0x10(%ebp),%edx
081b06dc +0x02b4:  mov    %edx,0x8(%esp)
081b06e0 +0x02b8:  mov    %eax,0x4(%esp)
081b06e4 +0x02bc:  mov    %ebx,(%esp)
081b06e7 +0x02bf:  call   081b08be <+0x496>
081b06ec +0x02c4:  sub    $0x4,%esp
081b06ef +0x02c7:  mov    %ebx,%eax
081b06f1 +0x02c9:  mov    -0x4(%ebp),%ebx
081b06f4 +0x02cc:  leave
081b06f5 +0x02cd:  ret    $0x4
081b06f8 +0x02d0:  push   %ebp
081b06f9 +0x02d1:  mov    %esp,%ebp
081b06fb +0x02d3:  sub    $0x18,%esp
081b06fe +0x02d6:  mov    0x8(%ebp),%eax
081b0701 +0x02d9:  mov    0xc(%ebp),%edx
081b0704 +0x02dc:  mov    %edx,0x4(%esp)
081b0708 +0x02e0:  mov    %eax,(%esp)
081b070b +0x02e3:  call   081b0a8e <+0x666>
081b0710 +0x02e8:  leave
081b0711 +0x02e9:  ret
081b0712 +0x02ea:  push   %ebp
081b0713 +0x02eb:  mov    %esp,%ebp
081b0715 +0x02ed:  push   %esi
081b0716 +0x02ee:  push   %ebx
081b0717 +0x02ef:  sub    $0x30,%esp
081b071a +0x02f2:  mov    0x8(%ebp),%ebx
081b071d +0x02f5:  mov    0xc(%ebp),%eax
081b0720 +0x02f8:  mov    %eax,(%esp)
081b0723 +0x02fb:  call   081b0aee <+0x6c6>
081b0728 +0x0300:  mov    %eax,%esi
081b072a +0x0302:  mov    0xc(%ebp),%eax
081b072d +0x0305:  mov    %eax,(%esp)
081b0730 +0x0308:  call   081b0874 <+0x44c>
081b0735 +0x030d:  lea    -0x10(%ebp),%edx
081b0738 +0x0310:  mov    0x10(%ebp),%ecx
081b073b +0x0313:  mov    %ecx,0x10(%esp)
081b073f +0x0317:  mov    %esi,0xc(%esp)
081b0743 +0x031b:  mov    %eax,0x8(%esp)
081b0747 +0x031f:  mov    0xc(%ebp),%eax
081b074a +0x0322:  mov    %eax,0x4(%esp)
081b074e +0x0326:  mov    %edx,(%esp)
081b0751 +0x0329:  call   081b0afa <+0x6d2>
081b0756 +0x032e:  sub    $0x4,%esp
081b0759 +0x0331:  lea    -0xc(%ebp),%eax
081b075c +0x0334:  mov    0xc(%ebp),%edx
081b075f +0x0337:  mov    %edx,0x4(%esp)
081b0763 +0x033b:  mov    %eax,(%esp)
081b0766 +0x033e:  call   081b07d0 <+0x3a8>
081b076b +0x0343:  sub    $0x4,%esp
081b076e +0x0346:  lea    -0xc(%ebp),%eax
081b0771 +0x0349:  mov    %eax,0x4(%esp)
081b0775 +0x034d:  lea    -0x10(%ebp),%eax
081b0778 +0x0350:  mov    %eax,(%esp)
081b077b +0x0353:  call   081b0b98 <+0x770>
081b0780 +0x0358:  test   %al,%al
081b0782 +0x035a:  jne    081b07a9 <+0x381>
081b0784 +0x035c:  mov    -0x10(%ebp),%eax
081b0787 +0x035f:  mov    %eax,(%esp)
081b078a +0x0362:  call   081b0b76 <+0x74e>
081b078f +0x0367:  mov    0xc(%ebp),%edx
081b0792 +0x036a:  mov    %eax,0x8(%esp)
081b0796 +0x036e:  mov    0x10(%ebp),%eax
081b0799 +0x0371:  mov    %eax,0x4(%esp)
081b079d +0x0375:  mov    %edx,(%esp)
081b07a0 +0x0378:  call   080e36fc <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x14a2>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x14a2
081b07a5 +0x037d:  test   %al,%al
081b07a7 +0x037f:  je     081b07bd <+0x395>
081b07a9 +0x0381:  mov    0xc(%ebp),%eax
081b07ac +0x0384:  mov    %eax,0x4(%esp)
081b07b0 +0x0388:  mov    %ebx,(%esp)
081b07b3 +0x038b:  call   081b07d0 <+0x3a8>
081b07b8 +0x0390:  sub    $0x4,%esp
081b07bb +0x0393:  jmp    081b07c2 <+0x39a>
081b07bd +0x0395:  mov    -0x10(%ebp),%eax
081b07c0 +0x0398:  mov    %eax,(%ebx)
081b07c2 +0x039a:  mov    %ebx,%eax
081b07c4 +0x039c:  lea    -0x8(%ebp),%esp
081b07c7 +0x039f:  add    $0x0,%esp
081b07ca +0x03a2:  pop    %ebx
081b07cb +0x03a3:  pop    %esi
081b07cc +0x03a4:  pop    %ebp
081b07cd +0x03a5:  ret    $0x4
081b07d0 +0x03a8:  push   %ebp
081b07d1 +0x03a9:  mov    %esp,%ebp
081b07d3 +0x03ab:  push   %ebx
081b07d4 +0x03ac:  sub    $0x14,%esp
081b07d7 +0x03af:  mov    0x8(%ebp),%ebx
081b07da +0x03b2:  mov    0xc(%ebp),%eax
081b07dd +0x03b5:  add    $0x4,%eax
081b07e0 +0x03b8:  mov    %eax,0x4(%esp)
081b07e4 +0x03bc:  mov    %ebx,(%esp)
081b07e7 +0x03bf:  call   081b0bac <+0x784>
081b07ec +0x03c4:  mov    %ebx,%eax
081b07ee +0x03c6:  add    $0x14,%esp
081b07f1 +0x03c9:  pop    %ebx
081b07f2 +0x03ca:  pop    %ebp
081b07f3 +0x03cb:  ret    $0x4
081b07f6 +0x03ce:  push   %ebp
081b07f7 +0x03cf:  mov    %esp,%ebp
081b07f9 +0x03d1:  sub    $0x18,%esp
081b07fc +0x03d4:  mov    0x8(%ebp),%eax
081b07ff +0x03d7:  mov    %eax,(%esp)
081b0802 +0x03da:  call   081b0bba <+0x792>
081b0807 +0x03df:  leave
081b0808 +0x03e0:  ret
081b0809 +0x03e1:  nop
081b080a +0x03e2:  push   %ebp
081b080b +0x03e3:  mov    %esp,%ebp
081b080d +0x03e5:  sub    $0x18,%esp
081b0810 +0x03e8:  mov    0x8(%ebp),%eax
081b0813 +0x03eb:  mov    %eax,(%esp)
081b0816 +0x03ee:  call   081b0c0a <+0x7e2>
081b081b +0x03f3:  leave
081b081c +0x03f4:  ret
081b081d +0x03f5:  nop
081b081e +0x03f6:  push   %ebp
081b081f +0x03f7:  mov    %esp,%ebp
081b0821 +0x03f9:  sub    $0x28,%esp
081b0824 +0x03fc:  jmp    081b0866 <+0x43e>
081b0826 +0x03fe:  mov    0xc(%ebp),%eax
081b0829 +0x0401:  mov    %eax,(%esp)
081b082c +0x0404:  call   081b0c0f <+0x7e7>
081b0831 +0x0409:  mov    %eax,0x4(%esp)
081b0835 +0x040d:  mov    0x8(%ebp),%eax
081b0838 +0x0410:  mov    %eax,(%esp)
081b083b +0x0413:  call   081b081e <+0x3f6>
081b0840 +0x0418:  mov    0xc(%ebp),%eax
081b0843 +0x041b:  mov    %eax,(%esp)
081b0846 +0x041e:  call   081b0c1a <+0x7f2>
081b084b +0x0423:  mov    %eax,-0xc(%ebp)
081b084e +0x0426:  mov    0xc(%ebp),%eax
081b0851 +0x0429:  mov    %eax,0x4(%esp)
081b0855 +0x042d:  mov    0x8(%ebp),%eax
081b0858 +0x0430:  mov    %eax,(%esp)
081b085b +0x0433:  call   081b0c26 <+0x7fe>
081b0860 +0x0438:  mov    -0xc(%ebp),%eax
081b0863 +0x043b:  mov    %eax,0xc(%ebp)
081b0866 +0x043e:  cmpl   $0x0,0xc(%ebp)
081b086a +0x0442:  setne  %al
081b086d +0x0445:  test   %al,%al
081b086f +0x0447:  jne    081b0826 <+0x3fe>
081b0871 +0x0449:  leave
081b0872 +0x044a:  ret
081b0873 +0x044b:  nop
081b0874 +0x044c:  push   %ebp
081b0875 +0x044d:  mov    %esp,%ebp
081b0877 +0x044f:  mov    0x8(%ebp),%eax
081b087a +0x0452:  mov    0x8(%eax),%eax
081b087d +0x0455:  pop    %ebp
081b087e +0x0456:  ret
081b087f +0x0457:  push   %ebp
081b0880 +0x0458:  mov    %esp,%ebp
081b0882 +0x045a:  mov    0x8(%ebp),%eax
081b0885 +0x045d:  pop    %ebp
081b0886 +0x045e:  ret
081b0887 +0x045f:  nop
081b0888 +0x0460:  push   %ebp
081b0889 +0x0461:  mov    %esp,%ebp
081b088b +0x0463:  sub    $0x18,%esp
081b088e +0x0466:  mov    0xc(%ebp),%eax
081b0891 +0x0469:  mov    %eax,(%esp)
081b0894 +0x046c:  call   080e2d69 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0xb0f>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0xb0f
081b0899 +0x0471:  mov    (%eax),%edx
081b089b +0x0473:  mov    0x8(%ebp),%eax
081b089e +0x0476:  mov    %edx,(%eax)
081b08a0 +0x0478:  mov    0x10(%ebp),%eax
081b08a3 +0x047b:  mov    %eax,(%esp)
081b08a6 +0x047e:  call   081b087f <+0x457>
081b08ab +0x0483:  mov    (%eax),%edx
081b08ad +0x0485:  mov    0x8(%ebp),%eax
081b08b0 +0x0488:  mov    %edx,0x4(%eax)
081b08b3 +0x048b:  leave
081b08b4 +0x048c:  ret
081b08b5 +0x048d:  push   %ebp
081b08b6 +0x048e:  mov    %esp,%ebp
081b08b8 +0x0490:  mov    0x8(%ebp),%eax
081b08bb +0x0493:  pop    %ebp
081b08bc +0x0494:  ret
081b08bd +0x0495:  nop
081b08be +0x0496:  push   %ebp
081b08bf +0x0497:  mov    %esp,%ebp
081b08c1 +0x0499:  push   %esi
081b08c2 +0x049a:  push   %ebx
081b08c3 +0x049b:  sub    $0x50,%esp
081b08c6 +0x049e:  mov    0x8(%ebp),%ebx
081b08c9 +0x04a1:  mov    0xc(%ebp),%eax
081b08cc +0x04a4:  mov    %eax,(%esp)
081b08cf +0x04a7:  call   081b0874 <+0x44c>
081b08d4 +0x04ac:  mov    %eax,-0x14(%ebp)
081b08d7 +0x04af:  mov    0xc(%ebp),%eax
081b08da +0x04b2:  mov    %eax,(%esp)
081b08dd +0x04b5:  call   081b0aee <+0x6c6>
081b08e2 +0x04ba:  mov    %eax,-0x10(%ebp)
081b08e5 +0x04bd:  movb   $0x1,-0x9(%ebp)
081b08e9 +0x04c1:  jmp    081b0947 <+0x51f>
081b08eb +0x04c3:  mov    -0x14(%ebp),%eax
081b08ee +0x04c6:  mov    %eax,-0x10(%ebp)
081b08f1 +0x04c9:  mov    -0x14(%ebp),%eax
081b08f4 +0x04cc:  mov    %eax,(%esp)
081b08f7 +0x04cf:  call   081b0c62 <+0x83a>
081b08fc +0x04d4:  mov    %eax,%esi
081b08fe +0x04d6:  mov    0x10(%ebp),%eax
081b0901 +0x04d9:  mov    %eax,0x4(%esp)
081b0905 +0x04dd:  lea    -0x2d(%ebp),%eax
081b0908 +0x04e0:  mov    %eax,(%esp)
081b090b +0x04e3:  call   081b0c5a <+0x832>
081b0910 +0x04e8:  mov    0xc(%ebp),%edx
081b0913 +0x04eb:  mov    %esi,0x8(%esp)
081b0917 +0x04ef:  mov    %eax,0x4(%esp)
081b091b +0x04f3:  mov    %edx,(%esp)
081b091e +0x04f6:  call   080e36fc <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x14a2>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x14a2
081b0923 +0x04fb:  mov    %al,-0x9(%ebp)
081b0926 +0x04fe:  cmpb   $0x0,-0x9(%ebp)
081b092a +0x0502:  je     081b0939 <+0x511>
081b092c +0x0504:  mov    -0x14(%ebp),%eax
081b092f +0x0507:  mov    %eax,(%esp)
081b0932 +0x050a:  call   081b0c1a <+0x7f2>
081b0937 +0x050f:  jmp    081b0944 <+0x51c>
081b0939 +0x0511:  mov    -0x14(%ebp),%eax
081b093c +0x0514:  mov    %eax,(%esp)
081b093f +0x0517:  call   081b0c0f <+0x7e7>
081b0944 +0x051c:  mov    %eax,-0x14(%ebp)
081b0947 +0x051f:  cmpl   $0x0,-0x14(%ebp)
081b094b +0x0523:  setne  %al
081b094e +0x0526:  test   %al,%al
081b0950 +0x0528:  jne    081b08eb <+0x4c3>
081b0952 +0x052a:  mov    -0x10(%ebp),%eax
081b0955 +0x052d:  mov    %eax,0x4(%esp)
081b0959 +0x0531:  lea    -0x34(%ebp),%eax
081b095c +0x0534:  mov    %eax,(%esp)
081b095f +0x0537:  call   081b0bac <+0x784>
081b0964 +0x053c:  cmpb   $0x0,-0x9(%ebp)
081b0968 +0x0540:  je     081b09e9 <+0x5c1>
081b096a +0x0542:  lea    -0x2c(%ebp),%eax
081b096d +0x0545:  mov    0xc(%ebp),%edx
081b0970 +0x0548:  mov    %edx,0x4(%esp)
081b0974 +0x054c:  mov    %eax,(%esp)
081b0977 +0x054f:  call   081b0c84 <+0x85c>
081b097c +0x0554:  sub    $0x4,%esp
081b097f +0x0557:  lea    -0x2c(%ebp),%eax
081b0982 +0x055a:  mov    %eax,0x4(%esp)
081b0986 +0x055e:  lea    -0x34(%ebp),%eax
081b0989 +0x0561:  mov    %eax,(%esp)
081b098c +0x0564:  call   081b0b98 <+0x770>
081b0991 +0x0569:  test   %al,%al
081b0993 +0x056b:  je     081b09de <+0x5b6>
081b0995 +0x056d:  movb   $0x1,-0x25(%ebp)
081b0999 +0x0571:  mov    -0x10(%ebp),%ecx
081b099c +0x0574:  mov    -0x14(%ebp),%edx
081b099f +0x0577:  lea    -0x24(%ebp),%eax
081b09a2 +0x057a:  mov    0x10(%ebp),%esi
081b09a5 +0x057d:  mov    %esi,0x10(%esp)
081b09a9 +0x0581:  mov    %ecx,0xc(%esp)
081b09ad +0x0585:  mov    %edx,0x8(%esp)
081b09b1 +0x0589:  mov    0xc(%ebp),%edx
081b09b4 +0x058c:  mov    %edx,0x4(%esp)
081b09b8 +0x0590:  mov    %eax,(%esp)
081b09bb +0x0593:  call   081b0caa <+0x882>
081b09c0 +0x0598:  sub    $0x4,%esp
081b09c3 +0x059b:  lea    -0x25(%ebp),%eax
081b09c6 +0x059e:  mov    %eax,0x8(%esp)
081b09ca +0x05a2:  lea    -0x24(%ebp),%eax
081b09cd +0x05a5:  mov    %eax,0x4(%esp)
081b09d1 +0x05a9:  mov    %ebx,(%esp)
081b09d4 +0x05ac:  call   081b0d72 <+0x94a>
081b09d9 +0x05b1:  jmp    081b0a7f <+0x657>
081b09de +0x05b6:  lea    -0x34(%ebp),%eax
081b09e1 +0x05b9:  mov    %eax,(%esp)
081b09e4 +0x05bc:  call   081b0da0 <+0x978>
081b09e9 +0x05c1:  mov    0x10(%ebp),%eax
081b09ec +0x05c4:  mov    %eax,0x4(%esp)
081b09f0 +0x05c8:  lea    -0x1e(%ebp),%eax
081b09f3 +0x05cb:  mov    %eax,(%esp)
081b09f6 +0x05ce:  call   081b0c5a <+0x832>
081b09fb +0x05d3:  mov    %eax,%esi
081b09fd +0x05d5:  mov    -0x34(%ebp),%eax
081b0a00 +0x05d8:  mov    %eax,(%esp)
081b0a03 +0x05db:  call   081b0b76 <+0x74e>
081b0a08 +0x05e0:  mov    0xc(%ebp),%edx
081b0a0b +0x05e3:  mov    %esi,0x8(%esp)
081b0a0f +0x05e7:  mov    %eax,0x4(%esp)
081b0a13 +0x05eb:  mov    %edx,(%esp)
081b0a16 +0x05ee:  call   080e36fc <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x14a2>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x14a2
081b0a1b +0x05f3:  test   %al,%al
081b0a1d +0x05f5:  je     081b0a65 <+0x63d>
081b0a1f +0x05f7:  movb   $0x1,-0x1d(%ebp)
081b0a23 +0x05fb:  mov    -0x10(%ebp),%ecx
081b0a26 +0x05fe:  mov    -0x14(%ebp),%edx
081b0a29 +0x0601:  lea    -0x1c(%ebp),%eax
081b0a2c +0x0604:  mov    0x10(%ebp),%esi
081b0a2f +0x0607:  mov    %esi,0x10(%esp)
081b0a33 +0x060b:  mov    %ecx,0xc(%esp)
081b0a37 +0x060f:  mov    %edx,0x8(%esp)
081b0a3b +0x0613:  mov    0xc(%ebp),%edx
081b0a3e +0x0616:  mov    %edx,0x4(%esp)
081b0a42 +0x061a:  mov    %eax,(%esp)
081b0a45 +0x061d:  call   081b0caa <+0x882>
081b0a4a +0x0622:  sub    $0x4,%esp
081b0a4d +0x0625:  lea    -0x1d(%ebp),%eax
081b0a50 +0x0628:  mov    %eax,0x8(%esp)
081b0a54 +0x062c:  lea    -0x1c(%ebp),%eax
081b0a57 +0x062f:  mov    %eax,0x4(%esp)
081b0a5b +0x0633:  mov    %ebx,(%esp)
081b0a5e +0x0636:  call   081b0d72 <+0x94a>
081b0a63 +0x063b:  jmp    081b0a7f <+0x657>
081b0a65 +0x063d:  movb   $0x0,-0x15(%ebp)
081b0a69 +0x0641:  lea    -0x15(%ebp),%eax
081b0a6c +0x0644:  mov    %eax,0x8(%esp)
081b0a70 +0x0648:  lea    -0x34(%ebp),%eax
081b0a73 +0x064b:  mov    %eax,0x4(%esp)
081b0a77 +0x064f:  mov    %ebx,(%esp)
081b0a7a +0x0652:  call   081b0dbe <+0x996>
081b0a7f +0x0657:  mov    %ebx,%eax
081b0a81 +0x0659:  lea    -0x8(%ebp),%esp
081b0a84 +0x065c:  add    $0x0,%esp
081b0a87 +0x065f:  pop    %ebx
081b0a88 +0x0660:  pop    %esi
081b0a89 +0x0661:  pop    %ebp
081b0a8a +0x0662:  ret    $0x4
081b0a8d +0x0665:  nop
081b0a8e +0x0666:  push   %ebp
081b0a8f +0x0667:  mov    %esp,%ebp
081b0a91 +0x0669:  sub    $0x28,%esp
081b0a94 +0x066c:  lea    -0x14(%ebp),%eax
081b0a97 +0x066f:  mov    0xc(%ebp),%edx
081b0a9a +0x0672:  mov    %edx,0x8(%esp)
081b0a9e +0x0676:  mov    0x8(%ebp),%edx
081b0aa1 +0x0679:  mov    %edx,0x4(%esp)
081b0aa5 +0x067d:  mov    %eax,(%esp)
081b0aa8 +0x0680:  call   081b0dec <+0x9c4>
081b0aad +0x0685:  sub    $0x4,%esp
081b0ab0 +0x0688:  mov    0x8(%ebp),%eax
081b0ab3 +0x068b:  mov    %eax,(%esp)
081b0ab6 +0x068e:  call   081b0f7a <+0xb52>
081b0abb +0x0693:  mov    %eax,-0xc(%ebp)
081b0abe +0x0696:  mov    -0x10(%ebp),%eax
081b0ac1 +0x0699:  mov    %eax,0x8(%esp)
081b0ac5 +0x069d:  mov    -0x14(%ebp),%eax
081b0ac8 +0x06a0:  mov    %eax,0x4(%esp)
081b0acc +0x06a4:  mov    0x8(%ebp),%eax
081b0acf +0x06a7:  mov    %eax,(%esp)
081b0ad2 +0x06aa:  call   081b0f86 <+0xb5e>
081b0ad7 +0x06af:  mov    0x8(%ebp),%eax
081b0ada +0x06b2:  mov    %eax,(%esp)
081b0add +0x06b5:  call   081b0f7a <+0xb52>
081b0ae2 +0x06ba:  mov    -0xc(%ebp),%edx
081b0ae5 +0x06bd:  mov    %edx,%ecx
081b0ae7 +0x06bf:  sub    %eax,%ecx
081b0ae9 +0x06c1:  mov    %ecx,%eax
081b0aeb +0x06c3:  leave
081b0aec +0x06c4:  ret
081b0aed +0x06c5:  nop
081b0aee +0x06c6:  push   %ebp
081b0aef +0x06c7:  mov    %esp,%ebp
081b0af1 +0x06c9:  mov    0x8(%ebp),%eax
081b0af4 +0x06cc:  add    $0x4,%eax
081b0af7 +0x06cf:  pop    %ebp
081b0af8 +0x06d0:  ret
081b0af9 +0x06d1:  nop
081b0afa +0x06d2:  push   %ebp
081b0afb +0x06d3:  mov    %esp,%ebp
081b0afd +0x06d5:  push   %ebx
081b0afe +0x06d6:  sub    $0x14,%esp
081b0b01 +0x06d9:  mov    0x8(%ebp),%ebx
081b0b04 +0x06dc:  jmp    081b0b52 <+0x72a>
081b0b06 +0x06de:  mov    0x10(%ebp),%eax
081b0b09 +0x06e1:  mov    %eax,(%esp)
081b0b0c +0x06e4:  call   081b0c62 <+0x83a>
081b0b11 +0x06e9:  mov    0xc(%ebp),%edx
081b0b14 +0x06ec:  mov    0x18(%ebp),%ecx
081b0b17 +0x06ef:  mov    %ecx,0x8(%esp)
081b0b1b +0x06f3:  mov    %eax,0x4(%esp)
081b0b1f +0x06f7:  mov    %edx,(%esp)
081b0b22 +0x06fa:  call   080e36fc <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x14a2>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x14a2
081b0b27 +0x06ff:  xor    $0x1,%eax
081b0b2a +0x0702:  test   %al,%al
081b0b2c +0x0704:  je     081b0b44 <+0x71c>
081b0b2e +0x0706:  mov    0x10(%ebp),%eax
081b0b31 +0x0709:  mov    %eax,0x14(%ebp)
081b0b34 +0x070c:  mov    0x10(%ebp),%eax
081b0b37 +0x070f:  mov    %eax,(%esp)
081b0b3a +0x0712:  call   081b0c1a <+0x7f2>
081b0b3f +0x0717:  mov    %eax,0x10(%ebp)
081b0b42 +0x071a:  jmp    081b0b52 <+0x72a>
081b0b44 +0x071c:  mov    0x10(%ebp),%eax
081b0b47 +0x071f:  mov    %eax,(%esp)
081b0b4a +0x0722:  call   081b0c0f <+0x7e7>
081b0b4f +0x0727:  mov    %eax,0x10(%ebp)
081b0b52 +0x072a:  cmpl   $0x0,0x10(%ebp)
081b0b56 +0x072e:  setne  %al
081b0b59 +0x0731:  test   %al,%al
081b0b5b +0x0733:  jne    081b0b06 <+0x6de>
081b0b5d +0x0735:  mov    0x14(%ebp),%eax
081b0b60 +0x0738:  mov    %eax,0x4(%esp)
081b0b64 +0x073c:  mov    %ebx,(%esp)
081b0b67 +0x073f:  call   081b0bac <+0x784>
081b0b6c +0x0744:  mov    %ebx,%eax
081b0b6e +0x0746:  add    $0x14,%esp
081b0b71 +0x0749:  pop    %ebx
081b0b72 +0x074a:  pop    %ebp
081b0b73 +0x074b:  ret    $0x4
081b0b76 +0x074e:  push   %ebp
081b0b77 +0x074f:  mov    %esp,%ebp
081b0b79 +0x0751:  sub    $0x28,%esp
081b0b7c +0x0754:  mov    0x8(%ebp),%eax
081b0b7f +0x0757:  mov    %eax,(%esp)
081b0b82 +0x075a:  call   081b1046 <+0xc1e>
081b0b87 +0x075f:  mov    %eax,0x4(%esp)
081b0b8b +0x0763:  lea    -0x9(%ebp),%eax
081b0b8e +0x0766:  mov    %eax,(%esp)
081b0b91 +0x0769:  call   081b0c5a <+0x832>
081b0b96 +0x076e:  leave
081b0b97 +0x076f:  ret
081b0b98 +0x0770:  push   %ebp
081b0b99 +0x0771:  mov    %esp,%ebp
081b0b9b +0x0773:  mov    0x8(%ebp),%eax
081b0b9e +0x0776:  mov    (%eax),%edx
081b0ba0 +0x0778:  mov    0xc(%ebp),%eax
081b0ba3 +0x077b:  mov    (%eax),%eax
081b0ba5 +0x077d:  cmp    %eax,%edx
081b0ba7 +0x077f:  sete   %al
081b0baa +0x0782:  pop    %ebp
081b0bab +0x0783:  ret
081b0bac +0x0784:  push   %ebp
081b0bad +0x0785:  mov    %esp,%ebp
081b0baf +0x0787:  mov    0xc(%ebp),%edx
081b0bb2 +0x078a:  mov    0x8(%ebp),%eax
081b0bb5 +0x078d:  mov    %edx,(%eax)
081b0bb7 +0x078f:  pop    %ebp
081b0bb8 +0x0790:  ret
081b0bb9 +0x0791:  nop
081b0bba +0x0792:  push   %ebp
081b0bbb +0x0793:  mov    %esp,%ebp
081b0bbd +0x0795:  sub    $0x18,%esp
081b0bc0 +0x0798:  mov    0x8(%ebp),%eax
081b0bc3 +0x079b:  mov    %eax,(%esp)
081b0bc6 +0x079e:  call   081b1052 <+0xc2a>
081b0bcb +0x07a3:  mov    0x8(%ebp),%eax
081b0bce +0x07a6:  movl   $0x0,0x4(%eax)
081b0bd5 +0x07ad:  mov    0x8(%ebp),%eax
081b0bd8 +0x07b0:  movl   $0x0,0x8(%eax)
081b0bdf +0x07b7:  mov    0x8(%ebp),%eax
081b0be2 +0x07ba:  movl   $0x0,0xc(%eax)
081b0be9 +0x07c1:  mov    0x8(%ebp),%eax
081b0bec +0x07c4:  movl   $0x0,0x10(%eax)
081b0bf3 +0x07cb:  mov    0x8(%ebp),%eax
081b0bf6 +0x07ce:  movl   $0x0,0x14(%eax)
081b0bfd +0x07d5:  mov    0x8(%ebp),%eax
081b0c00 +0x07d8:  mov    %eax,(%esp)
081b0c03 +0x07db:  call   081b1066 <+0xc3e>
081b0c08 +0x07e0:  leave
081b0c09 +0x07e1:  ret
081b0c0a +0x07e2:  push   %ebp
081b0c0b +0x07e3:  mov    %esp,%ebp
081b0c0d +0x07e5:  pop    %ebp
081b0c0e +0x07e6:  ret
081b0c0f +0x07e7:  push   %ebp
081b0c10 +0x07e8:  mov    %esp,%ebp
081b0c12 +0x07ea:  mov    0x8(%ebp),%eax
081b0c15 +0x07ed:  mov    0xc(%eax),%eax
081b0c18 +0x07f0:  pop    %ebp
081b0c19 +0x07f1:  ret
081b0c1a +0x07f2:  push   %ebp
081b0c1b +0x07f3:  mov    %esp,%ebp
081b0c1d +0x07f5:  mov    0x8(%ebp),%eax
081b0c20 +0x07f8:  mov    0x8(%eax),%eax
081b0c23 +0x07fb:  pop    %ebp
081b0c24 +0x07fc:  ret
081b0c25 +0x07fd:  nop
081b0c26 +0x07fe:  push   %ebp
081b0c27 +0x07ff:  mov    %esp,%ebp
081b0c29 +0x0801:  sub    $0x18,%esp
081b0c2c +0x0804:  mov    0x8(%ebp),%eax
081b0c2f +0x0807:  mov    %eax,(%esp)
081b0c32 +0x080a:  call   081b1098 <+0xc70>
081b0c37 +0x080f:  mov    0xc(%ebp),%edx
081b0c3a +0x0812:  mov    %edx,0x4(%esp)
081b0c3e +0x0816:  mov    %eax,(%esp)
081b0c41 +0x0819:  call   081b10a6 <+0xc7e>
081b0c46 +0x081e:  mov    0xc(%ebp),%eax
081b0c49 +0x0821:  mov    %eax,0x4(%esp)
081b0c4d +0x0825:  mov    0x8(%ebp),%eax
081b0c50 +0x0828:  mov    %eax,(%esp)
081b0c53 +0x082b:  call   081b10ba <+0xc92>
081b0c58 +0x0830:  leave
081b0c59 +0x0831:  ret
081b0c5a +0x0832:  push   %ebp
081b0c5b +0x0833:  mov    %esp,%ebp
081b0c5d +0x0835:  mov    0xc(%ebp),%eax
081b0c60 +0x0838:  pop    %ebp
081b0c61 +0x0839:  ret
081b0c62 +0x083a:  push   %ebp
081b0c63 +0x083b:  mov    %esp,%ebp
081b0c65 +0x083d:  sub    $0x28,%esp
081b0c68 +0x0840:  mov    0x8(%ebp),%eax
081b0c6b +0x0843:  mov    %eax,(%esp)
081b0c6e +0x0846:  call   081b10dc <+0xcb4>
081b0c73 +0x084b:  mov    %eax,0x4(%esp)
081b0c77 +0x084f:  lea    -0x9(%ebp),%eax
081b0c7a +0x0852:  mov    %eax,(%esp)
081b0c7d +0x0855:  call   081b0c5a <+0x832>
081b0c82 +0x085a:  leave
081b0c83 +0x085b:  ret
081b0c84 +0x085c:  push   %ebp
081b0c85 +0x085d:  mov    %esp,%ebp
081b0c87 +0x085f:  push   %ebx
081b0c88 +0x0860:  sub    $0x14,%esp
081b0c8b +0x0863:  mov    0x8(%ebp),%ebx
081b0c8e +0x0866:  mov    0xc(%ebp),%eax
081b0c91 +0x0869:  mov    0xc(%eax),%eax
081b0c94 +0x086c:  mov    %eax,0x4(%esp)
081b0c98 +0x0870:  mov    %ebx,(%esp)
081b0c9b +0x0873:  call   081b0bac <+0x784>
081b0ca0 +0x0878:  mov    %ebx,%eax
081b0ca2 +0x087a:  add    $0x14,%esp
081b0ca5 +0x087d:  pop    %ebx
081b0ca6 +0x087e:  pop    %ebp
081b0ca7 +0x087f:  ret    $0x4
081b0caa +0x0882:  push   %ebp
081b0cab +0x0883:  mov    %esp,%ebp
081b0cad +0x0885:  push   %esi
081b0cae +0x0886:  push   %ebx
081b0caf +0x0887:  sub    $0x20,%esp
081b0cb2 +0x088a:  mov    0x8(%ebp),%esi
081b0cb5 +0x088d:  cmpl   $0x0,0x10(%ebp)
081b0cb9 +0x0891:  jne    081b0d01 <+0x8d9>
081b0cbb +0x0893:  mov    0xc(%ebp),%eax
081b0cbe +0x0896:  mov    %eax,(%esp)
081b0cc1 +0x0899:  call   081b0aee <+0x6c6>
081b0cc6 +0x089e:  cmp    0x14(%ebp),%eax
081b0cc9 +0x08a1:  je     081b0d01 <+0x8d9>
081b0ccb +0x08a3:  mov    0x14(%ebp),%eax
081b0cce +0x08a6:  mov    %eax,(%esp)
081b0cd1 +0x08a9:  call   081b0b76 <+0x74e>
081b0cd6 +0x08ae:  mov    %eax,%ebx
081b0cd8 +0x08b0:  mov    0x18(%ebp),%eax
081b0cdb +0x08b3:  mov    %eax,0x4(%esp)
081b0cdf +0x08b7:  lea    -0xe(%ebp),%eax
081b0ce2 +0x08ba:  mov    %eax,(%esp)
081b0ce5 +0x08bd:  call   081b0c5a <+0x832>
081b0cea +0x08c2:  mov    0xc(%ebp),%edx
081b0ced +0x08c5:  mov    %ebx,0x8(%esp)
081b0cf1 +0x08c9:  mov    %eax,0x4(%esp)
081b0cf5 +0x08cd:  mov    %edx,(%esp)
081b0cf8 +0x08d0:  call   080e36fc <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x14a2>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x14a2
081b0cfd +0x08d5:  test   %al,%al
081b0cff +0x08d7:  je     081b0d08 <+0x8e0>
081b0d01 +0x08d9:  mov    $0x1,%eax
081b0d06 +0x08de:  jmp    081b0d0d <+0x8e5>
081b0d08 +0x08e0:  mov    $0x0,%eax
081b0d0d +0x08e5:  mov    %al,-0xd(%ebp)
081b0d10 +0x08e8:  mov    0x18(%ebp),%eax
081b0d13 +0x08eb:  mov    %eax,0x4(%esp)
081b0d17 +0x08ef:  mov    0xc(%ebp),%eax
081b0d1a +0x08f2:  mov    %eax,(%esp)
081b0d1d +0x08f5:  call   081b10e8 <+0xcc0>
081b0d22 +0x08fa:  mov    %eax,-0xc(%ebp)
081b0d25 +0x08fd:  mov    0xc(%ebp),%eax
081b0d28 +0x0900:  lea    0x4(%eax),%ecx
081b0d2b +0x0903:  mov    -0xc(%ebp),%edx
081b0d2e +0x0906:  movzbl -0xd(%ebp),%eax
081b0d32 +0x090a:  mov    %ecx,0xc(%esp)
081b0d36 +0x090e:  mov    0x14(%ebp),%ecx
081b0d39 +0x0911:  mov    %ecx,0x8(%esp)
081b0d3d +0x0915:  mov    %edx,0x4(%esp)
081b0d41 +0x0919:  mov    %eax,(%esp)
081b0d44 +0x091c:  call   086df9d0 <_ZSt29_Rb_tree_insert_and_rebalancebPSt18_Rb_tree_node_baseS0_RS_>  ; std::_Rb_tree_insert_and_rebalance(bool, std::_Rb_tree_node_base*, std::_Rb_tree_node_base*, std::_Rb_tree_node_base&)
081b0d49 +0x0921:  mov    0xc(%ebp),%eax
081b0d4c +0x0924:  mov    0x14(%eax),%eax
081b0d4f +0x0927:  lea    0x1(%eax),%edx
081b0d52 +0x092a:  mov    0xc(%ebp),%eax
081b0d55 +0x092d:  mov    %edx,0x14(%eax)
081b0d58 +0x0930:  mov    -0xc(%ebp),%eax
081b0d5b +0x0933:  mov    %eax,0x4(%esp)
081b0d5f +0x0937:  mov    %esi,(%esp)
081b0d62 +0x093a:  call   081b0bac <+0x784>
081b0d67 +0x093f:  mov    %esi,%eax
081b0d69 +0x0941:  add    $0x20,%esp
081b0d6c +0x0944:  pop    %ebx
081b0d6d +0x0945:  pop    %esi
081b0d6e +0x0946:  pop    %ebp
081b0d6f +0x0947:  ret    $0x4
081b0d72 +0x094a:  push   %ebp
081b0d73 +0x094b:  mov    %esp,%ebp
081b0d75 +0x094d:  sub    $0x18,%esp
081b0d78 +0x0950:  mov    0xc(%ebp),%eax
081b0d7b +0x0953:  mov    %eax,(%esp)
081b0d7e +0x0956:  call   081b1169 <+0xd41>
081b0d83 +0x095b:  mov    0x8(%ebp),%edx
081b0d86 +0x095e:  mov    (%eax),%eax
081b0d88 +0x0960:  mov    %eax,(%edx)
081b0d8a +0x0962:  mov    0x10(%ebp),%eax
081b0d8d +0x0965:  mov    %eax,(%esp)
081b0d90 +0x0968:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
081b0d95 +0x096d:  movzbl (%eax),%edx
081b0d98 +0x0970:  mov    0x8(%ebp),%eax
081b0d9b +0x0973:  mov    %dl,0x4(%eax)
081b0d9e +0x0976:  leave
081b0d9f +0x0977:  ret
081b0da0 +0x0978:  push   %ebp
081b0da1 +0x0979:  mov    %esp,%ebp
081b0da3 +0x097b:  sub    $0x18,%esp
081b0da6 +0x097e:  mov    0x8(%ebp),%eax
081b0da9 +0x0981:  mov    (%eax),%eax
081b0dab +0x0983:  mov    %eax,(%esp)
081b0dae +0x0986:  call   086df890 <_ZSt18_Rb_tree_decrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_decrement(std::_Rb_tree_node_base*)
081b0db3 +0x098b:  mov    0x8(%ebp),%edx
081b0db6 +0x098e:  mov    %eax,(%edx)
081b0db8 +0x0990:  mov    0x8(%ebp),%eax
081b0dbb +0x0993:  leave
081b0dbc +0x0994:  ret
081b0dbd +0x0995:  nop
081b0dbe +0x0996:  push   %ebp
081b0dbf +0x0997:  mov    %esp,%ebp
081b0dc1 +0x0999:  sub    $0x18,%esp
081b0dc4 +0x099c:  mov    0xc(%ebp),%eax
081b0dc7 +0x099f:  mov    %eax,(%esp)
081b0dca +0x09a2:  call   081b1171 <+0xd49>
081b0dcf +0x09a7:  mov    0x8(%ebp),%edx
081b0dd2 +0x09aa:  mov    (%eax),%eax
081b0dd4 +0x09ac:  mov    %eax,(%edx)
081b0dd6 +0x09ae:  mov    0x10(%ebp),%eax
081b0dd9 +0x09b1:  mov    %eax,(%esp)
081b0ddc +0x09b4:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
081b0de1 +0x09b9:  movzbl (%eax),%edx
081b0de4 +0x09bc:  mov    0x8(%ebp),%eax
081b0de7 +0x09bf:  mov    %dl,0x4(%eax)
081b0dea +0x09c2:  leave
081b0deb +0x09c3:  ret
081b0dec +0x09c4:  push   %ebp
081b0ded +0x09c5:  mov    %esp,%ebp
081b0def +0x09c7:  push   %ebx
081b0df0 +0x09c8:  sub    $0x44,%esp
081b0df3 +0x09cb:  mov    0x8(%ebp),%ebx
081b0df6 +0x09ce:  mov    0xc(%ebp),%eax
081b0df9 +0x09d1:  mov    %eax,(%esp)
081b0dfc +0x09d4:  call   081b0874 <+0x44c>
081b0e01 +0x09d9:  mov    %eax,-0x18(%ebp)
081b0e04 +0x09dc:  mov    0xc(%ebp),%eax
081b0e07 +0x09df:  mov    %eax,(%esp)
081b0e0a +0x09e2:  call   081b0aee <+0x6c6>
081b0e0f +0x09e7:  mov    %eax,-0x14(%ebp)
081b0e12 +0x09ea:  jmp    081b0f27 <+0xaff>
081b0e17 +0x09ef:  mov    -0x18(%ebp),%eax
081b0e1a +0x09f2:  mov    %eax,(%esp)
081b0e1d +0x09f5:  call   081b0c62 <+0x83a>
081b0e22 +0x09fa:  mov    0xc(%ebp),%edx
081b0e25 +0x09fd:  mov    0x10(%ebp),%ecx
081b0e28 +0x0a00:  mov    %ecx,0x8(%esp)
081b0e2c +0x0a04:  mov    %eax,0x4(%esp)
081b0e30 +0x0a08:  mov    %edx,(%esp)
081b0e33 +0x0a0b:  call   080e36fc <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x14a2>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x14a2
081b0e38 +0x0a10:  test   %al,%al
081b0e3a +0x0a12:  je     081b0e4f <+0xa27>
081b0e3c +0x0a14:  mov    -0x18(%ebp),%eax
081b0e3f +0x0a17:  mov    %eax,(%esp)
081b0e42 +0x0a1a:  call   081b0c0f <+0x7e7>
081b0e47 +0x0a1f:  mov    %eax,-0x18(%ebp)
081b0e4a +0x0a22:  jmp    081b0f27 <+0xaff>
081b0e4f +0x0a27:  mov    -0x18(%ebp),%eax
081b0e52 +0x0a2a:  mov    %eax,(%esp)
081b0e55 +0x0a2d:  call   081b0c62 <+0x83a>
081b0e5a +0x0a32:  mov    0xc(%ebp),%edx
081b0e5d +0x0a35:  mov    %eax,0x8(%esp)
081b0e61 +0x0a39:  mov    0x10(%ebp),%eax
081b0e64 +0x0a3c:  mov    %eax,0x4(%esp)
081b0e68 +0x0a40:  mov    %edx,(%esp)
081b0e6b +0x0a43:  call   080e36fc <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x14a2>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x14a2
081b0e70 +0x0a48:  test   %al,%al
081b0e72 +0x0a4a:  je     081b0e8d <+0xa65>
081b0e74 +0x0a4c:  mov    -0x18(%ebp),%eax
081b0e77 +0x0a4f:  mov    %eax,-0x14(%ebp)
081b0e7a +0x0a52:  mov    -0x18(%ebp),%eax
081b0e7d +0x0a55:  mov    %eax,(%esp)
081b0e80 +0x0a58:  call   081b0c1a <+0x7f2>
081b0e85 +0x0a5d:  mov    %eax,-0x18(%ebp)
081b0e88 +0x0a60:  jmp    081b0f27 <+0xaff>
081b0e8d +0x0a65:  mov    -0x18(%ebp),%eax
081b0e90 +0x0a68:  mov    %eax,-0x10(%ebp)
081b0e93 +0x0a6b:  mov    -0x14(%ebp),%eax
081b0e96 +0x0a6e:  mov    %eax,-0xc(%ebp)
081b0e99 +0x0a71:  mov    -0x18(%ebp),%eax
081b0e9c +0x0a74:  mov    %eax,-0x14(%ebp)
081b0e9f +0x0a77:  mov    -0x18(%ebp),%eax
081b0ea2 +0x0a7a:  mov    %eax,(%esp)
081b0ea5 +0x0a7d:  call   081b0c1a <+0x7f2>
081b0eaa +0x0a82:  mov    %eax,-0x18(%ebp)
081b0ead +0x0a85:  mov    -0x10(%ebp),%eax
081b0eb0 +0x0a88:  mov    %eax,(%esp)
081b0eb3 +0x0a8b:  call   081b0c0f <+0x7e7>
081b0eb8 +0x0a90:  mov    %eax,-0x10(%ebp)
081b0ebb +0x0a93:  lea    -0x28(%ebp),%eax
081b0ebe +0x0a96:  mov    0x10(%ebp),%edx
081b0ec1 +0x0a99:  mov    %edx,0x10(%esp)
081b0ec5 +0x0a9d:  mov    -0xc(%ebp),%edx
081b0ec8 +0x0aa0:  mov    %edx,0xc(%esp)
081b0ecc +0x0aa4:  mov    -0x10(%ebp),%edx
081b0ecf +0x0aa7:  mov    %edx,0x8(%esp)
081b0ed3 +0x0aab:  mov    0xc(%ebp),%edx
081b0ed6 +0x0aae:  mov    %edx,0x4(%esp)
081b0eda +0x0ab2:  mov    %eax,(%esp)
081b0edd +0x0ab5:  call   081b117a <+0xd52>
081b0ee2 +0x0aba:  sub    $0x4,%esp
081b0ee5 +0x0abd:  lea    -0x24(%ebp),%eax
081b0ee8 +0x0ac0:  mov    0x10(%ebp),%edx
081b0eeb +0x0ac3:  mov    %edx,0x10(%esp)
081b0eef +0x0ac7:  mov    -0x14(%ebp),%edx
081b0ef2 +0x0aca:  mov    %edx,0xc(%esp)
081b0ef6 +0x0ace:  mov    -0x18(%ebp),%edx
081b0ef9 +0x0ad1:  mov    %edx,0x8(%esp)
081b0efd +0x0ad5:  mov    0xc(%ebp),%edx
081b0f00 +0x0ad8:  mov    %edx,0x4(%esp)
081b0f04 +0x0adc:  mov    %eax,(%esp)
081b0f07 +0x0adf:  call   081b0afa <+0x6d2>
081b0f0c +0x0ae4:  sub    $0x4,%esp
081b0f0f +0x0ae7:  lea    -0x28(%ebp),%eax
081b0f12 +0x0aea:  mov    %eax,0x8(%esp)
081b0f16 +0x0aee:  lea    -0x24(%ebp),%eax
081b0f19 +0x0af1:  mov    %eax,0x4(%esp)
081b0f1d +0x0af5:  mov    %ebx,(%esp)
081b0f20 +0x0af8:  call   081b11f4 <+0xdcc>
081b0f25 +0x0afd:  jmp    081b0f70 <+0xb48>
081b0f27 +0x0aff:  cmpl   $0x0,-0x18(%ebp)
081b0f2b +0x0b03:  setne  %al
081b0f2e +0x0b06:  test   %al,%al
081b0f30 +0x0b08:  jne    081b0e17 <+0x9ef>
081b0f36 +0x0b0e:  mov    -0x14(%ebp),%eax
081b0f39 +0x0b11:  mov    %eax,0x4(%esp)
081b0f3d +0x0b15:  lea    -0x20(%ebp),%eax
081b0f40 +0x0b18:  mov    %eax,(%esp)
081b0f43 +0x0b1b:  call   081b0bac <+0x784>
081b0f48 +0x0b20:  mov    -0x14(%ebp),%eax
081b0f4b +0x0b23:  mov    %eax,0x4(%esp)
081b0f4f +0x0b27:  lea    -0x1c(%ebp),%eax
081b0f52 +0x0b2a:  mov    %eax,(%esp)
081b0f55 +0x0b2d:  call   081b0bac <+0x784>
081b0f5a +0x0b32:  lea    -0x20(%ebp),%eax
081b0f5d +0x0b35:  mov    %eax,0x8(%esp)
081b0f61 +0x0b39:  lea    -0x1c(%ebp),%eax
081b0f64 +0x0b3c:  mov    %eax,0x4(%esp)
081b0f68 +0x0b40:  mov    %ebx,(%esp)
081b0f6b +0x0b43:  call   081b11f4 <+0xdcc>
081b0f70 +0x0b48:  mov    %ebx,%eax
081b0f72 +0x0b4a:  mov    -0x4(%ebp),%ebx
081b0f75 +0x0b4d:  leave
081b0f76 +0x0b4e:  ret    $0x4
081b0f79 +0x0b51:  nop
081b0f7a +0x0b52:  push   %ebp
081b0f7b +0x0b53:  mov    %esp,%ebp
081b0f7d +0x0b55:  mov    0x8(%ebp),%eax
081b0f80 +0x0b58:  mov    0x14(%eax),%eax
081b0f83 +0x0b5b:  pop    %ebp
081b0f84 +0x0b5c:  ret
081b0f85 +0x0b5d:  nop
081b0f86 +0x0b5e:  push   %ebp
081b0f87 +0x0b5f:  mov    %esp,%ebp
081b0f89 +0x0b61:  sub    $0x28,%esp
081b0f8c +0x0b64:  lea    -0x14(%ebp),%eax
081b0f8f +0x0b67:  mov    0x8(%ebp),%edx
081b0f92 +0x0b6a:  mov    %edx,0x4(%esp)
081b0f96 +0x0b6e:  mov    %eax,(%esp)
081b0f99 +0x0b71:  call   081b0c84 <+0x85c>
081b0f9e +0x0b76:  sub    $0x4,%esp
081b0fa1 +0x0b79:  lea    -0x14(%ebp),%eax
081b0fa4 +0x0b7c:  mov    %eax,0x4(%esp)
081b0fa8 +0x0b80:  lea    0xc(%ebp),%eax
081b0fab +0x0b83:  mov    %eax,(%esp)
081b0fae +0x0b86:  call   081b0b98 <+0x770>
081b0fb3 +0x0b8b:  test   %al,%al
081b0fb5 +0x0b8d:  je     081b0fe9 <+0xbc1>
081b0fb7 +0x0b8f:  lea    -0x10(%ebp),%eax
081b0fba +0x0b92:  mov    0x8(%ebp),%edx
081b0fbd +0x0b95:  mov    %edx,0x4(%esp)
081b0fc1 +0x0b99:  mov    %eax,(%esp)
081b0fc4 +0x0b9c:  call   081b07d0 <+0x3a8>
081b0fc9 +0x0ba1:  sub    $0x4,%esp
081b0fcc +0x0ba4:  lea    -0x10(%ebp),%eax
081b0fcf +0x0ba7:  mov    %eax,0x4(%esp)
081b0fd3 +0x0bab:  lea    0x10(%ebp),%eax
081b0fd6 +0x0bae:  mov    %eax,(%esp)
081b0fd9 +0x0bb1:  call   081b0b98 <+0x770>
081b0fde +0x0bb6:  test   %al,%al
081b0fe0 +0x0bb8:  je     081b0fe9 <+0xbc1>
081b0fe2 +0x0bba:  mov    $0x1,%eax
081b0fe7 +0x0bbf:  jmp    081b0fee <+0xbc6>
081b0fe9 +0x0bc1:  mov    $0x0,%eax
081b0fee +0x0bc6:  test   %al,%al
081b0ff0 +0x0bc8:  je     081b102e <+0xc06>
081b0ff2 +0x0bca:  mov    0x8(%ebp),%eax
081b0ff5 +0x0bcd:  mov    %eax,(%esp)
081b0ff8 +0x0bd0:  call   081b1222 <+0xdfa>
081b0ffd +0x0bd5:  jmp    081b1044 <+0xc1c>
081b0fff +0x0bd7:  lea    -0xc(%ebp),%eax
081b1002 +0x0bda:  movl   $0x0,0x8(%esp)
081b100a +0x0be2:  lea    0xc(%ebp),%edx
081b100d +0x0be5:  mov    %edx,0x4(%esp)
081b1011 +0x0be9:  mov    %eax,(%esp)
081b1014 +0x0bec:  call   081b12ac <+0xe84>
081b1019 +0x0bf1:  sub    $0x4,%esp
081b101c +0x0bf4:  mov    -0xc(%ebp),%eax
081b101f +0x0bf7:  mov    %eax,0x4(%esp)
081b1023 +0x0bfb:  mov    0x8(%ebp),%eax
081b1026 +0x0bfe:  mov    %eax,(%esp)
081b1029 +0x0c01:  call   081b12ea <+0xec2>
081b102e +0x0c06:  lea    0x10(%ebp),%eax
081b1031 +0x0c09:  mov    %eax,0x4(%esp)
081b1035 +0x0c0d:  lea    0xc(%ebp),%eax
081b1038 +0x0c10:  mov    %eax,(%esp)
081b103b +0x0c13:  call   081b1298 <+0xe70>
081b1040 +0x0c18:  test   %al,%al
081b1042 +0x0c1a:  jne    081b0fff <+0xbd7>
081b1044 +0x0c1c:  leave
081b1045 +0x0c1d:  ret
081b1046 +0x0c1e:  push   %ebp
081b1047 +0x0c1f:  mov    %esp,%ebp
081b1049 +0x0c21:  mov    0x8(%ebp),%eax
081b104c +0x0c24:  add    $0x10,%eax
081b104f +0x0c27:  pop    %ebp
081b1050 +0x0c28:  ret
081b1051 +0x0c29:  nop
081b1052 +0x0c2a:  push   %ebp
081b1053 +0x0c2b:  mov    %esp,%ebp
081b1055 +0x0c2d:  sub    $0x18,%esp
081b1058 +0x0c30:  mov    0x8(%ebp),%eax
081b105b +0x0c33:  mov    %eax,(%esp)
081b105e +0x0c36:  call   081b132c <+0xf04>
081b1063 +0x0c3b:  leave
081b1064 +0x0c3c:  ret
081b1065 +0x0c3d:  nop
081b1066 +0x0c3e:  push   %ebp
081b1067 +0x0c3f:  mov    %esp,%ebp
081b1069 +0x0c41:  mov    0x8(%ebp),%eax
081b106c +0x0c44:  movl   $0x0,0x4(%eax)
081b1073 +0x0c4b:  mov    0x8(%ebp),%eax
081b1076 +0x0c4e:  movl   $0x0,0x8(%eax)
081b107d +0x0c55:  mov    0x8(%ebp),%eax
081b1080 +0x0c58:  lea    0x4(%eax),%edx
081b1083 +0x0c5b:  mov    0x8(%ebp),%eax
081b1086 +0x0c5e:  mov    %edx,0xc(%eax)
081b1089 +0x0c61:  mov    0x8(%ebp),%eax
081b108c +0x0c64:  lea    0x4(%eax),%edx
081b108f +0x0c67:  mov    0x8(%ebp),%eax
081b1092 +0x0c6a:  mov    %edx,0x10(%eax)
081b1095 +0x0c6d:  pop    %ebp
081b1096 +0x0c6e:  ret
081b1097 +0x0c6f:  nop
081b1098 +0x0c70:  push   %ebp
081b1099 +0x0c71:  mov    %esp,%ebp
081b109b +0x0c73:  mov    0x8(%ebp),%eax
081b109e +0x0c76:  pop    %ebp
081b109f +0x0c77:  ret
081b10a0 +0x0c78:  push   %ebp
081b10a1 +0x0c79:  mov    %esp,%ebp
081b10a3 +0x0c7b:  pop    %ebp
081b10a4 +0x0c7c:  ret
081b10a5 +0x0c7d:  nop
081b10a6 +0x0c7e:  push   %ebp
081b10a7 +0x0c7f:  mov    %esp,%ebp
081b10a9 +0x0c81:  sub    $0x18,%esp
081b10ac +0x0c84:  mov    0xc(%ebp),%eax
081b10af +0x0c87:  mov    %eax,(%esp)
081b10b2 +0x0c8a:  call   081b10a0 <+0xc78>
081b10b7 +0x0c8f:  leave
081b10b8 +0x0c90:  ret
081b10b9 +0x0c91:  nop
081b10ba +0x0c92:  push   %ebp
081b10bb +0x0c93:  mov    %esp,%ebp
081b10bd +0x0c95:  sub    $0x18,%esp
081b10c0 +0x0c98:  mov    0x8(%ebp),%eax
081b10c3 +0x0c9b:  movl   $0x1,0x8(%esp)
081b10cb +0x0ca3:  mov    0xc(%ebp),%edx
081b10ce +0x0ca6:  mov    %edx,0x4(%esp)
081b10d2 +0x0caa:  mov    %eax,(%esp)
081b10d5 +0x0cad:  call   081b1332 <+0xf0a>
081b10da +0x0cb2:  leave
081b10db +0x0cb3:  ret
081b10dc +0x0cb4:  push   %ebp
081b10dd +0x0cb5:  mov    %esp,%ebp
081b10df +0x0cb7:  mov    0x8(%ebp),%eax
081b10e2 +0x0cba:  add    $0x10,%eax
081b10e5 +0x0cbd:  pop    %ebp
081b10e6 +0x0cbe:  ret
081b10e7 +0x0cbf:  nop
081b10e8 +0x0cc0:  push   %ebp
081b10e9 +0x0cc1:  mov    %esp,%ebp
081b10eb +0x0cc3:  push   %esi
081b10ec +0x0cc4:  push   %ebx
081b10ed +0x0cc5:  sub    $0x20,%esp
081b10f0 +0x0cc8:  mov    0x8(%ebp),%eax
081b10f3 +0x0ccb:  mov    %eax,(%esp)
081b10f6 +0x0cce:  call   081b1346 <+0xf1e>
081b10fb +0x0cd3:  mov    %eax,-0xc(%ebp)
081b10fe +0x0cd6:  mov    0xc(%ebp),%eax
081b1101 +0x0cd9:  mov    %eax,(%esp)
081b1104 +0x0cdc:  call   081b1369 <+0xf41>
081b1109 +0x0ce1:  mov    %eax,%ebx
081b110b +0x0ce3:  mov    0x8(%ebp),%eax
081b110e +0x0ce6:  mov    %eax,(%esp)
081b1111 +0x0ce9:  call   081b1098 <+0xc70>
081b1116 +0x0cee:  mov    %ebx,0x8(%esp)
081b111a +0x0cf2:  mov    -0xc(%ebp),%edx
081b111d +0x0cf5:  mov    %edx,0x4(%esp)
081b1121 +0x0cf9:  mov    %eax,(%esp)
081b1124 +0x0cfc:  call   081b1372 <+0xf4a>
081b1129 +0x0d01:  jmp    081b115f <+0xd37>
081b112b +0x0d03:  mov    %eax,(%esp)
081b112e +0x0d06:  call   08725ce0 <__cxa_begin_catch>
081b1133 +0x0d0b:  mov    -0xc(%ebp),%eax
081b1136 +0x0d0e:  mov    %eax,0x4(%esp)
081b113a +0x0d12:  mov    0x8(%ebp),%eax
081b113d +0x0d15:  mov    %eax,(%esp)
081b1140 +0x0d18:  call   081b10ba <+0xc92>
081b1145 +0x0d1d:  call   08724be0 <__cxa_rethrow>
081b114a +0x0d22:  mov    %edx,%ebx
081b114c +0x0d24:  mov    %eax,%esi
081b114e +0x0d26:  call   08725c30 <__cxa_end_catch>
081b1153 +0x0d2b:  mov    %esi,%eax
081b1155 +0x0d2d:  mov    %ebx,%edx
081b1157 +0x0d2f:  mov    %eax,(%esp)
081b115a +0x0d32:  call   08ae3750 <_Unwind_Resume>
081b115f +0x0d37:  mov    -0xc(%ebp),%eax
081b1162 +0x0d3a:  add    $0x20,%esp
081b1165 +0x0d3d:  pop    %ebx
081b1166 +0x0d3e:  pop    %esi
081b1167 +0x0d3f:  pop    %ebp
081b1168 +0x0d40:  ret
081b1169 +0x0d41:  push   %ebp
081b116a +0x0d42:  mov    %esp,%ebp
081b116c +0x0d44:  mov    0x8(%ebp),%eax
081b116f +0x0d47:  pop    %ebp
081b1170 +0x0d48:  ret
081b1171 +0x0d49:  push   %ebp
081b1172 +0x0d4a:  mov    %esp,%ebp
081b1174 +0x0d4c:  mov    0x8(%ebp),%eax
081b1177 +0x0d4f:  pop    %ebp
081b1178 +0x0d50:  ret
081b1179 +0x0d51:  nop
081b117a +0x0d52:  push   %ebp
081b117b +0x0d53:  mov    %esp,%ebp
081b117d +0x0d55:  push   %ebx
081b117e +0x0d56:  sub    $0x14,%esp
081b1181 +0x0d59:  mov    0x8(%ebp),%ebx
081b1184 +0x0d5c:  jmp    081b11cf <+0xda7>
081b1186 +0x0d5e:  mov    0x10(%ebp),%eax
081b1189 +0x0d61:  mov    %eax,(%esp)
081b118c +0x0d64:  call   081b0c62 <+0x83a>
081b1191 +0x0d69:  mov    0xc(%ebp),%edx
081b1194 +0x0d6c:  mov    %eax,0x8(%esp)
081b1198 +0x0d70:  mov    0x18(%ebp),%eax
081b119b +0x0d73:  mov    %eax,0x4(%esp)
081b119f +0x0d77:  mov    %edx,(%esp)
081b11a2 +0x0d7a:  call   080e36fc <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x14a2>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x14a2
081b11a7 +0x0d7f:  test   %al,%al
081b11a9 +0x0d81:  je     081b11c1 <+0xd99>
081b11ab +0x0d83:  mov    0x10(%ebp),%eax
081b11ae +0x0d86:  mov    %eax,0x14(%ebp)
081b11b1 +0x0d89:  mov    0x10(%ebp),%eax
081b11b4 +0x0d8c:  mov    %eax,(%esp)
081b11b7 +0x0d8f:  call   081b0c1a <+0x7f2>
081b11bc +0x0d94:  mov    %eax,0x10(%ebp)
081b11bf +0x0d97:  jmp    081b11cf <+0xda7>
081b11c1 +0x0d99:  mov    0x10(%ebp),%eax
081b11c4 +0x0d9c:  mov    %eax,(%esp)
081b11c7 +0x0d9f:  call   081b0c0f <+0x7e7>
081b11cc +0x0da4:  mov    %eax,0x10(%ebp)
081b11cf +0x0da7:  cmpl   $0x0,0x10(%ebp)
081b11d3 +0x0dab:  setne  %al
081b11d6 +0x0dae:  test   %al,%al
081b11d8 +0x0db0:  jne    081b1186 <+0xd5e>
081b11da +0x0db2:  mov    0x14(%ebp),%eax
081b11dd +0x0db5:  mov    %eax,0x4(%esp)
081b11e1 +0x0db9:  mov    %ebx,(%esp)
081b11e4 +0x0dbc:  call   081b0bac <+0x784>
081b11e9 +0x0dc1:  mov    %ebx,%eax
081b11eb +0x0dc3:  add    $0x14,%esp
081b11ee +0x0dc6:  pop    %ebx
081b11ef +0x0dc7:  pop    %ebp
081b11f0 +0x0dc8:  ret    $0x4
081b11f3 +0x0dcb:  nop
081b11f4 +0x0dcc:  push   %ebp
081b11f5 +0x0dcd:  mov    %esp,%ebp
081b11f7 +0x0dcf:  sub    $0x18,%esp
081b11fa +0x0dd2:  mov    0xc(%ebp),%eax
081b11fd +0x0dd5:  mov    %eax,(%esp)
081b1200 +0x0dd8:  call   081b1169 <+0xd41>
081b1205 +0x0ddd:  mov    0x8(%ebp),%edx
081b1208 +0x0de0:  mov    (%eax),%eax
081b120a +0x0de2:  mov    %eax,(%edx)
081b120c +0x0de4:  mov    0x10(%ebp),%eax
081b120f +0x0de7:  mov    %eax,(%esp)
081b1212 +0x0dea:  call   081b1169 <+0xd41>
081b1217 +0x0def:  mov    0x8(%ebp),%edx
081b121a +0x0df2:  mov    (%eax),%eax
081b121c +0x0df4:  mov    %eax,0x4(%edx)
081b121f +0x0df7:  leave
081b1220 +0x0df8:  ret
081b1221 +0x0df9:  nop
081b1222 +0x0dfa:  push   %ebp
081b1223 +0x0dfb:  mov    %esp,%ebp
081b1225 +0x0dfd:  push   %ebx
081b1226 +0x0dfe:  sub    $0x14,%esp
081b1229 +0x0e01:  mov    0x8(%ebp),%eax
081b122c +0x0e04:  mov    %eax,(%esp)
081b122f +0x0e07:  call   081b0874 <+0x44c>
081b1234 +0x0e0c:  mov    %eax,0x4(%esp)
081b1238 +0x0e10:  mov    0x8(%ebp),%eax
081b123b +0x0e13:  mov    %eax,(%esp)
081b123e +0x0e16:  call   081b081e <+0x3f6>
081b1243 +0x0e1b:  mov    0x8(%ebp),%eax
081b1246 +0x0e1e:  mov    %eax,(%esp)
081b1249 +0x0e21:  call   081b13b2 <+0xf8a>
081b124e +0x0e26:  mov    %eax,%ebx
081b1250 +0x0e28:  mov    0x8(%ebp),%eax
081b1253 +0x0e2b:  mov    %eax,(%esp)
081b1256 +0x0e2e:  call   081b0aee <+0x6c6>
081b125b +0x0e33:  mov    %eax,(%ebx)
081b125d +0x0e35:  mov    0x8(%ebp),%eax
081b1260 +0x0e38:  mov    %eax,(%esp)
081b1263 +0x0e3b:  call   081b13be <+0xf96>
081b1268 +0x0e40:  movl   $0x0,(%eax)
081b126e +0x0e46:  mov    0x8(%ebp),%eax
081b1271 +0x0e49:  mov    %eax,(%esp)
081b1274 +0x0e4c:  call   081b13ca <+0xfa2>
081b1279 +0x0e51:  mov    %eax,%ebx
081b127b +0x0e53:  mov    0x8(%ebp),%eax
081b127e +0x0e56:  mov    %eax,(%esp)
081b1281 +0x0e59:  call   081b0aee <+0x6c6>
081b1286 +0x0e5e:  mov    %eax,(%ebx)
081b1288 +0x0e60:  mov    0x8(%ebp),%eax
081b128b +0x0e63:  movl   $0x0,0x14(%eax)
081b1292 +0x0e6a:  add    $0x14,%esp
081b1295 +0x0e6d:  pop    %ebx
081b1296 +0x0e6e:  pop    %ebp
081b1297 +0x0e6f:  ret
081b1298 +0x0e70:  push   %ebp
081b1299 +0x0e71:  mov    %esp,%ebp
081b129b +0x0e73:  mov    0x8(%ebp),%eax
081b129e +0x0e76:  mov    (%eax),%edx
081b12a0 +0x0e78:  mov    0xc(%ebp),%eax
081b12a3 +0x0e7b:  mov    (%eax),%eax
081b12a5 +0x0e7d:  cmp    %eax,%edx
081b12a7 +0x0e7f:  setne  %al
081b12aa +0x0e82:  pop    %ebp
081b12ab +0x0e83:  ret
081b12ac +0x0e84:  push   %ebp
081b12ad +0x0e85:  mov    %esp,%ebp
081b12af +0x0e87:  push   %ebx
081b12b0 +0x0e88:  sub    $0x14,%esp
081b12b3 +0x0e8b:  mov    0x8(%ebp),%ebx
081b12b6 +0x0e8e:  mov    0xc(%ebp),%eax
081b12b9 +0x0e91:  movl   $0x4,0x8(%esp)
081b12c1 +0x0e99:  mov    %eax,0x4(%esp)
081b12c5 +0x0e9d:  mov    %ebx,(%esp)
081b12c8 +0x0ea0:  call   0807d880 <_init+0x178>
081b12cd +0x0ea5:  mov    0xc(%ebp),%eax
081b12d0 +0x0ea8:  mov    (%eax),%eax
081b12d2 +0x0eaa:  mov    %eax,(%esp)
081b12d5 +0x0ead:  call   086df800 <_ZSt18_Rb_tree_incrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_increment(std::_Rb_tree_node_base*)
081b12da +0x0eb2:  mov    0xc(%ebp),%edx
081b12dd +0x0eb5:  mov    %eax,(%edx)
081b12df +0x0eb7:  mov    %ebx,%eax
081b12e1 +0x0eb9:  add    $0x14,%esp
081b12e4 +0x0ebc:  pop    %ebx
081b12e5 +0x0ebd:  pop    %ebp
081b12e6 +0x0ebe:  ret    $0x4
081b12e9 +0x0ec1:  nop
081b12ea +0x0ec2:  push   %ebp
081b12eb +0x0ec3:  mov    %esp,%ebp
081b12ed +0x0ec5:  sub    $0x28,%esp
081b12f0 +0x0ec8:  mov    0x8(%ebp),%eax
081b12f3 +0x0ecb:  lea    0x4(%eax),%edx
081b12f6 +0x0ece:  mov    0xc(%ebp),%eax
081b12f9 +0x0ed1:  mov    %edx,0x4(%esp)
081b12fd +0x0ed5:  mov    %eax,(%esp)
081b1300 +0x0ed8:  call   086dfc70 <_ZSt28_Rb_tree_rebalance_for_erasePSt18_Rb_tree_node_baseRS_>  ; std::_Rb_tree_rebalance_for_erase(std::_Rb_tree_node_base*, std::_Rb_tree_node_base&)
081b1305 +0x0edd:  mov    %eax,-0xc(%ebp)
081b1308 +0x0ee0:  mov    -0xc(%ebp),%eax
081b130b +0x0ee3:  mov    %eax,0x4(%esp)
081b130f +0x0ee7:  mov    0x8(%ebp),%eax
081b1312 +0x0eea:  mov    %eax,(%esp)
081b1315 +0x0eed:  call   081b0c26 <+0x7fe>
081b131a +0x0ef2:  mov    0x8(%ebp),%eax
081b131d +0x0ef5:  mov    0x14(%eax),%eax
081b1320 +0x0ef8:  lea    -0x1(%eax),%edx
081b1323 +0x0efb:  mov    0x8(%ebp),%eax
081b1326 +0x0efe:  mov    %edx,0x14(%eax)
081b1329 +0x0f01:  leave
081b132a +0x0f02:  ret
081b132b +0x0f03:  nop
081b132c +0x0f04:  push   %ebp
081b132d +0x0f05:  mov    %esp,%ebp
081b132f +0x0f07:  pop    %ebp
081b1330 +0x0f08:  ret
081b1331 +0x0f09:  nop
081b1332 +0x0f0a:  push   %ebp
081b1333 +0x0f0b:  mov    %esp,%ebp
081b1335 +0x0f0d:  sub    $0x18,%esp
081b1338 +0x0f10:  mov    0xc(%ebp),%eax
081b133b +0x0f13:  mov    %eax,(%esp)
081b133e +0x0f16:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081b1343 +0x0f1b:  leave
081b1344 +0x0f1c:  ret
081b1345 +0x0f1d:  nop
081b1346 +0x0f1e:  push   %ebp
081b1347 +0x0f1f:  mov    %esp,%ebp
081b1349 +0x0f21:  sub    $0x18,%esp
081b134c +0x0f24:  mov    0x8(%ebp),%eax
081b134f +0x0f27:  movl   $0x0,0x8(%esp)
081b1357 +0x0f2f:  movl   $0x1,0x4(%esp)
081b135f +0x0f37:  mov    %eax,(%esp)
081b1362 +0x0f3a:  call   081b13d6 <+0xfae>
081b1367 +0x0f3f:  leave
081b1368 +0x0f40:  ret
081b1369 +0x0f41:  push   %ebp
081b136a +0x0f42:  mov    %esp,%ebp
081b136c +0x0f44:  mov    0x8(%ebp),%eax
081b136f +0x0f47:  pop    %ebp
081b1370 +0x0f48:  ret
081b1371 +0x0f49:  nop
081b1372 +0x0f4a:  push   %ebp
081b1373 +0x0f4b:  mov    %esp,%ebp
081b1375 +0x0f4d:  push   %ebx
081b1376 +0x0f4e:  sub    $0x14,%esp
081b1379 +0x0f51:  mov    0x10(%ebp),%eax
081b137c +0x0f54:  mov    %eax,(%esp)
081b137f +0x0f57:  call   081b1369 <+0xf41>
081b1384 +0x0f5c:  mov    %eax,%ebx
081b1386 +0x0f5e:  mov    0xc(%ebp),%eax
081b1389 +0x0f61:  mov    %eax,0x4(%esp)
081b138d +0x0f65:  movl   $0x18,(%esp)
081b1394 +0x0f6c:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
081b1399 +0x0f71:  mov    %eax,%edx
081b139b +0x0f73:  test   %edx,%edx
081b139d +0x0f75:  je     081b13ab <+0xf83>
081b139f +0x0f77:  mov    %ebx,0x4(%esp)
081b13a3 +0x0f7b:  mov    %eax,(%esp)
081b13a6 +0x0f7e:  call   081b1414 <+0xfec>
081b13ab +0x0f83:  add    $0x14,%esp
081b13ae +0x0f86:  pop    %ebx
081b13af +0x0f87:  pop    %ebp
081b13b0 +0x0f88:  ret
081b13b1 +0x0f89:  nop
081b13b2 +0x0f8a:  push   %ebp
081b13b3 +0x0f8b:  mov    %esp,%ebp
081b13b5 +0x0f8d:  mov    0x8(%ebp),%eax
081b13b8 +0x0f90:  add    $0xc,%eax
081b13bb +0x0f93:  pop    %ebp
081b13bc +0x0f94:  ret
081b13bd +0x0f95:  nop
081b13be +0x0f96:  push   %ebp
081b13bf +0x0f97:  mov    %esp,%ebp
081b13c1 +0x0f99:  mov    0x8(%ebp),%eax
081b13c4 +0x0f9c:  add    $0x8,%eax
081b13c7 +0x0f9f:  pop    %ebp
081b13c8 +0x0fa0:  ret
081b13c9 +0x0fa1:  nop
081b13ca +0x0fa2:  push   %ebp
081b13cb +0x0fa3:  mov    %esp,%ebp
081b13cd +0x0fa5:  mov    0x8(%ebp),%eax
081b13d0 +0x0fa8:  add    $0x10,%eax
081b13d3 +0x0fab:  pop    %ebp
081b13d4 +0x0fac:  ret
081b13d5 +0x0fad:  nop
081b13d6 +0x0fae:  push   %ebp
081b13d7 +0x0faf:  mov    %esp,%ebp
081b13d9 +0x0fb1:  sub    $0x18,%esp
081b13dc +0x0fb4:  mov    0x8(%ebp),%eax
081b13df +0x0fb7:  mov    %eax,(%esp)
081b13e2 +0x0fba:  call   081b145c <+0x1034>
081b13e7 +0x0fbf:  cmp    0xc(%ebp),%eax
081b13ea +0x0fc2:  setb   %al
081b13ed +0x0fc5:  movzbl %al,%eax
081b13f0 +0x0fc8:  test   %eax,%eax
081b13f2 +0x0fca:  setne  %al
081b13f5 +0x0fcd:  test   %al,%al
081b13f7 +0x0fcf:  je     081b13fe <+0xfd6>
081b13f9 +0x0fd1:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
081b13fe +0x0fd6:  mov    0xc(%ebp),%edx
081b1401 +0x0fd9:  mov    %edx,%eax
081b1403 +0x0fdb:  add    %eax,%eax
081b1405 +0x0fdd:  add    %edx,%eax
081b1407 +0x0fdf:  shl    $0x3,%eax
081b140a +0x0fe2:  mov    %eax,(%esp)
081b140d +0x0fe5:  call   08724450 <_Znwj>  ; operator new(unsigned int)
081b1412 +0x0fea:  leave
081b1413 +0x0feb:  ret
081b1414 +0x0fec:  push   %ebp
081b1415 +0x0fed:  mov    %esp,%ebp
081b1417 +0x0fef:  sub    $0x18,%esp
081b141a +0x0ff2:  mov    0x8(%ebp),%eax
081b141d +0x0ff5:  movl   $0x0,(%eax)
081b1423 +0x0ffb:  mov    0x8(%ebp),%eax
081b1426 +0x0ffe:  movl   $0x0,0x4(%eax)
081b142d +0x1005:  mov    0x8(%ebp),%eax
081b1430 +0x1008:  movl   $0x0,0x8(%eax)
081b1437 +0x100f:  mov    0x8(%ebp),%eax
081b143a +0x1012:  movl   $0x0,0xc(%eax)
081b1441 +0x1019:  mov    0xc(%ebp),%eax
081b1444 +0x101c:  mov    %eax,(%esp)
081b1447 +0x101f:  call   081b1369 <+0xf41>
081b144c +0x1024:  mov    0x8(%ebp),%ecx
081b144f +0x1027:  mov    0x4(%eax),%edx
081b1452 +0x102a:  mov    (%eax),%eax
081b1454 +0x102c:  mov    %eax,0x10(%ecx)
081b1457 +0x102f:  mov    %edx,0x14(%ecx)
081b145a +0x1032:  leave
081b145b +0x1033:  ret
081b145c +0x1034:  push   %ebp
081b145d +0x1035:  mov    %esp,%ebp
081b145f +0x1037:  mov    $0xaaaaaaa,%eax
081b1464 +0x103c:  pop    %ebp
081b1465 +0x103d:  ret
081b1466 +0x103e:  nop
081b1467 +0x103f:  nop
```

## 反编译 C

```c
// <global>::global @ 0x81b0428

/* nexon::cash::TransactionManager::tx_id_ */

void nexon::cash::TransactionManager::_GLOBAL__I_tx_id_(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
