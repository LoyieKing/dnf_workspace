# CreateDnfEventSciprt

`_GLOBAL__I__ZN20CreateDnfEventSciprtC2Ev`

`global constructors keyed to CreateDnfEventSciprt::CreateDnfEventSciprt()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CreateDnfEventSciprt` | `0x08ac0621` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ac0621  _GLOBAL__I__ZN20CreateDnfEventSciprtC2Ev
#           global constructors keyed to CreateDnfEventSciprt::CreateDnfEventSciprt()
# range [0x08ac0621, 0x08ac1d2b]
08ac0621 +0x0000:  push   %ebp
08ac0622 +0x0001:  mov    %esp,%ebp
08ac0624 +0x0003:  sub    $0x18,%esp
08ac0627 +0x0006:  movl   $0xffff,0x4(%esp)
08ac062f +0x000e:  movl   $0x1,(%esp)
08ac0636 +0x0015:  call   08ac05e1 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
08ac063b +0x001a:  leave
08ac063c +0x001b:  ret
08ac063d +0x001c:  nop
08ac063e +0x001d:  push   %ebp
08ac063f +0x001e:  mov    %esp,%ebp
08ac0641 +0x0020:  mov    0xc(%ebp),%edx
08ac0644 +0x0023:  mov    0x8(%ebp),%eax
08ac0647 +0x0026:  mov    %edx,(%eax)
08ac0649 +0x0028:  mov    0x10(%ebp),%eax
08ac064c +0x002b:  mov    %eax,%edx
08ac064e +0x002d:  mov    0x8(%ebp),%eax
08ac0651 +0x0030:  mov    %dx,0x4(%eax)
08ac0655 +0x0034:  pop    %ebp
08ac0656 +0x0035:  ret
08ac0657 +0x0036:  nop
08ac0658 +0x0037:  push   %ebp
08ac0659 +0x0038:  mov    %esp,%ebp
08ac065b +0x003a:  sub    $0x18,%esp
08ac065e +0x003d:  mov    0x8(%ebp),%eax
08ac0661 +0x0040:  mov    %eax,(%esp)
08ac0664 +0x0043:  call   08ac0694 <+0x73>
08ac0669 +0x0048:  leave
08ac066a +0x0049:  ret
08ac066b +0x004a:  nop
08ac066c +0x004b:  push   %ebp
08ac066d +0x004c:  mov    %esp,%ebp
08ac066f +0x004e:  sub    $0x18,%esp
08ac0672 +0x0051:  mov    0x8(%ebp),%eax
08ac0675 +0x0054:  mov    %eax,(%esp)
08ac0678 +0x0057:  call   08ac097c <+0x35b>
08ac067d +0x005c:  leave
08ac067e +0x005d:  ret
08ac067f +0x005e:  nop
08ac0680 +0x005f:  push   %ebp
08ac0681 +0x0060:  mov    %esp,%ebp
08ac0683 +0x0062:  sub    $0x18,%esp
08ac0686 +0x0065:  mov    0x8(%ebp),%eax
08ac0689 +0x0068:  mov    %eax,(%esp)
08ac068c +0x006b:  call   08ac0990 <+0x36f>
08ac0691 +0x0070:  leave
08ac0692 +0x0071:  ret
08ac0693 +0x0072:  nop
08ac0694 +0x0073:  push   %ebp
08ac0695 +0x0074:  mov    %esp,%ebp
08ac0697 +0x0076:  push   %esi
08ac0698 +0x0077:  push   %ebx
08ac0699 +0x0078:  sub    $0x10,%esp
08ac069c +0x007b:  mov    0x8(%ebp),%eax
08ac069f +0x007e:  mov    %eax,(%esp)
08ac06a2 +0x0081:  call   08ac09fa <+0x3d9>
08ac06a7 +0x0086:  mov    %eax,0x4(%esp)
08ac06ab +0x008a:  mov    0x8(%ebp),%eax
08ac06ae +0x008d:  mov    %eax,(%esp)
08ac06b1 +0x0090:  call   08ac09a4 <+0x383>
08ac06b6 +0x0095:  jmp    08ac06d3 <+0xb2>
08ac06b8 +0x0097:  mov    %edx,%ebx
08ac06ba +0x0099:  mov    %eax,%esi
08ac06bc +0x009b:  mov    0x8(%ebp),%eax
08ac06bf +0x009e:  mov    %eax,(%esp)
08ac06c2 +0x00a1:  call   08ac0680 <+0x5f>
08ac06c7 +0x00a6:  mov    %esi,%eax
08ac06c9 +0x00a8:  mov    %ebx,%edx
08ac06cb +0x00aa:  mov    %eax,(%esp)
08ac06ce +0x00ad:  call   08ae3750 <_Unwind_Resume>
08ac06d3 +0x00b2:  mov    0x8(%ebp),%eax
08ac06d6 +0x00b5:  mov    %eax,(%esp)
08ac06d9 +0x00b8:  call   08ac0680 <+0x5f>
08ac06de +0x00bd:  add    $0x10,%esp
08ac06e1 +0x00c0:  pop    %ebx
08ac06e2 +0x00c1:  pop    %esi
08ac06e3 +0x00c2:  pop    %ebp
08ac06e4 +0x00c3:  ret
08ac06e5 +0x00c4:  nop
08ac06e6 +0x00c5:  push   %ebp
08ac06e7 +0x00c6:  mov    %esp,%ebp
08ac06e9 +0x00c8:  sub    $0x18,%esp
08ac06ec +0x00cb:  mov    0x8(%ebp),%eax
08ac06ef +0x00ce:  mov    %eax,(%esp)
08ac06f2 +0x00d1:  call   08ac0a1a <+0x3f9>
08ac06f7 +0x00d6:  leave
08ac06f8 +0x00d7:  ret
08ac06f9 +0x00d8:  nop
08ac06fa +0x00d9:  push   %ebp
08ac06fb +0x00da:  mov    %esp,%ebp
08ac06fd +0x00dc:  push   %esi
08ac06fe +0x00dd:  push   %ebx
08ac06ff +0x00de:  sub    $0x10,%esp
08ac0702 +0x00e1:  mov    0x8(%ebp),%eax
08ac0705 +0x00e4:  mov    %eax,(%esp)
08ac0708 +0x00e7:  call   08ac0a96 <+0x475>
08ac070d +0x00ec:  mov    0x8(%ebp),%edx
08ac0710 +0x00ef:  mov    0x4(%edx),%ecx
08ac0713 +0x00f2:  mov    0x8(%ebp),%edx
08ac0716 +0x00f5:  mov    (%edx),%edx
08ac0718 +0x00f7:  mov    %eax,0x8(%esp)
08ac071c +0x00fb:  mov    %ecx,0x4(%esp)
08ac0720 +0x00ff:  mov    %edx,(%esp)
08ac0723 +0x0102:  call   08ac0a9e <+0x47d>
08ac0728 +0x0107:  jmp    08ac0745 <+0x124>
08ac072a +0x0109:  mov    %edx,%ebx
08ac072c +0x010b:  mov    %eax,%esi
08ac072e +0x010d:  mov    0x8(%ebp),%eax
08ac0731 +0x0110:  mov    %eax,(%esp)
08ac0734 +0x0113:  call   08ac0a2e <+0x40d>
08ac0739 +0x0118:  mov    %esi,%eax
08ac073b +0x011a:  mov    %ebx,%edx
08ac073d +0x011c:  mov    %eax,(%esp)
08ac0740 +0x011f:  call   08ae3750 <_Unwind_Resume>
08ac0745 +0x0124:  mov    0x8(%ebp),%eax
08ac0748 +0x0127:  mov    %eax,(%esp)
08ac074b +0x012a:  call   08ac0a2e <+0x40d>
08ac0750 +0x012f:  add    $0x10,%esp
08ac0753 +0x0132:  pop    %ebx
08ac0754 +0x0133:  pop    %esi
08ac0755 +0x0134:  pop    %ebp
08ac0756 +0x0135:  ret
08ac0757 +0x0136:  nop
08ac0758 +0x0137:  push   %ebp
08ac0759 +0x0138:  mov    %esp,%ebp
08ac075b +0x013a:  sub    $0x18,%esp
08ac075e +0x013d:  mov    0xc(%ebp),%eax
08ac0761 +0x0140:  mov    %eax,(%esp)
08ac0764 +0x0143:  call   08ac0ab8 <+0x497>
08ac0769 +0x0148:  mov    %eax,0x4(%esp)
08ac076d +0x014c:  mov    0x8(%ebp),%eax
08ac0770 +0x014f:  mov    %eax,(%esp)
08ac0773 +0x0152:  call   08ac0ac0 <+0x49f>
08ac0778 +0x0157:  leave
08ac0779 +0x0158:  ret
08ac077a +0x0159:  push   %ebp
08ac077b +0x015a:  mov    %esp,%ebp
08ac077d +0x015c:  push   %ebx
08ac077e +0x015d:  sub    $0x14,%esp
08ac0781 +0x0160:  mov    0x8(%ebp),%ebx
08ac0784 +0x0163:  mov    0xc(%ebp),%eax
08ac0787 +0x0166:  mov    0x10(%ebp),%edx
08ac078a +0x0169:  mov    %edx,0x8(%esp)
08ac078e +0x016d:  mov    %eax,0x4(%esp)
08ac0792 +0x0171:  mov    %ebx,(%esp)
08ac0795 +0x0174:  call   08ac0b4a <+0x529>
08ac079a +0x0179:  sub    $0x4,%esp
08ac079d +0x017c:  mov    %ebx,%eax
08ac079f +0x017e:  mov    -0x4(%ebp),%ebx
08ac07a2 +0x0181:  leave
08ac07a3 +0x0182:  ret    $0x4
08ac07a6 +0x0185:  push   %ebp
08ac07a7 +0x0186:  mov    %esp,%ebp
08ac07a9 +0x0188:  push   %ebx
08ac07aa +0x0189:  sub    $0x14,%esp
08ac07ad +0x018c:  mov    0x8(%ebp),%ebx
08ac07b0 +0x018f:  mov    0xc(%ebp),%eax
08ac07b3 +0x0192:  mov    %eax,0x4(%esp)
08ac07b7 +0x0196:  mov    %ebx,(%esp)
08ac07ba +0x0199:  call   08ac0c08 <+0x5e7>
08ac07bf +0x019e:  sub    $0x4,%esp
08ac07c2 +0x01a1:  mov    %ebx,%eax
08ac07c4 +0x01a3:  mov    -0x4(%ebp),%ebx
08ac07c7 +0x01a6:  leave
08ac07c8 +0x01a7:  ret    $0x4
08ac07cb +0x01aa:  nop
08ac07cc +0x01ab:  push   %ebp
08ac07cd +0x01ac:  mov    %esp,%ebp
08ac07cf +0x01ae:  mov    0x8(%ebp),%eax
08ac07d2 +0x01b1:  mov    (%eax),%edx
08ac07d4 +0x01b3:  mov    0xc(%ebp),%eax
08ac07d7 +0x01b6:  mov    (%eax),%eax
08ac07d9 +0x01b8:  cmp    %eax,%edx
08ac07db +0x01ba:  setne  %al
08ac07de +0x01bd:  pop    %ebp
08ac07df +0x01be:  ret
08ac07e0 +0x01bf:  push   %ebp
08ac07e1 +0x01c0:  mov    %esp,%ebp
08ac07e3 +0x01c2:  push   %ebx
08ac07e4 +0x01c3:  sub    $0x14,%esp
08ac07e7 +0x01c6:  mov    0xc(%ebp),%edx
08ac07ea +0x01c9:  mov    0x8(%ebp),%eax
08ac07ed +0x01cc:  mov    %edx,0x4(%esp)
08ac07f1 +0x01d0:  mov    %eax,(%esp)
08ac07f4 +0x01d3:  call   08ac0c2e <+0x60d>
08ac07f9 +0x01d8:  mov    0xc(%ebp),%eax
08ac07fc +0x01db:  lea    0x4(%eax),%edx
08ac07ff +0x01de:  mov    0x8(%ebp),%eax
08ac0802 +0x01e1:  add    $0x4,%eax
08ac0805 +0x01e4:  mov    %edx,0x4(%esp)
08ac0809 +0x01e8:  mov    %eax,(%esp)
08ac080c +0x01eb:  call   08ac0c2e <+0x60d>
08ac0811 +0x01f0:  mov    0xc(%ebp),%eax
08ac0814 +0x01f3:  lea    0x8(%eax),%edx
08ac0817 +0x01f6:  mov    0x8(%ebp),%eax
08ac081a +0x01f9:  add    $0x8,%eax
08ac081d +0x01fc:  mov    %edx,0x4(%esp)
08ac0821 +0x0200:  mov    %eax,(%esp)
08ac0824 +0x0203:  call   08ac0c2e <+0x60d>
08ac0829 +0x0208:  mov    0xc(%ebp),%eax
08ac082c +0x020b:  mov    %eax,(%esp)
08ac082f +0x020e:  call   08ac0a96 <+0x475>
08ac0834 +0x0213:  mov    %eax,%ebx
08ac0836 +0x0215:  mov    0x8(%ebp),%eax
08ac0839 +0x0218:  mov    %eax,(%esp)
08ac083c +0x021b:  call   08ac0a96 <+0x475>
08ac0841 +0x0220:  mov    %ebx,0x4(%esp)
08ac0845 +0x0224:  mov    %eax,(%esp)
08ac0848 +0x0227:  call   08ac0c6a <+0x649>
08ac084d +0x022c:  add    $0x14,%esp
08ac0850 +0x022f:  pop    %ebx
08ac0851 +0x0230:  pop    %ebp
08ac0852 +0x0231:  ret
08ac0853 +0x0232:  nop
08ac0854 +0x0233:  push   %ebp
08ac0855 +0x0234:  mov    %esp,%ebp
08ac0857 +0x0236:  sub    $0x18,%esp
08ac085a +0x0239:  mov    0xc(%ebp),%eax
08ac085d +0x023c:  mov    %eax,(%esp)
08ac0860 +0x023f:  call   080c7158 <_GLOBAL__I_g_ServerString_+0x6c3>  ; global constructors keyed to g_ServerString_+0x6c3
08ac0865 +0x0244:  mov    (%eax),%edx
08ac0867 +0x0246:  mov    0x8(%ebp),%eax
08ac086a +0x0249:  mov    %edx,(%eax)
08ac086c +0x024b:  mov    0x10(%ebp),%eax
08ac086f +0x024e:  mov    %eax,(%esp)
08ac0872 +0x0251:  call   08ac0c6f <+0x64e>
08ac0877 +0x0256:  mov    (%eax),%edx
08ac0879 +0x0258:  mov    0x8(%ebp),%eax
08ac087c +0x025b:  mov    %edx,0x4(%eax)
08ac087f +0x025e:  leave
08ac0880 +0x025f:  ret
08ac0881 +0x0260:  nop
08ac0882 +0x0261:  push   %ebp
08ac0883 +0x0262:  mov    %esp,%ebp
08ac0885 +0x0264:  push   %ebx
08ac0886 +0x0265:  sub    $0x14,%esp
08ac0889 +0x0268:  mov    0x8(%ebp),%ebx
08ac088c +0x026b:  mov    0xc(%ebp),%eax
08ac088f +0x026e:  mov    0x10(%ebp),%edx
08ac0892 +0x0271:  mov    %edx,0x8(%esp)
08ac0896 +0x0275:  mov    %eax,0x4(%esp)
08ac089a +0x0279:  mov    %ebx,(%esp)
08ac089d +0x027c:  call   08ac0c78 <+0x657>
08ac08a2 +0x0281:  sub    $0x4,%esp
08ac08a5 +0x0284:  mov    %ebx,%eax
08ac08a7 +0x0286:  mov    -0x4(%ebp),%ebx
08ac08aa +0x0289:  leave
08ac08ab +0x028a:  ret    $0x4
08ac08ae +0x028d:  push   %ebp
08ac08af +0x028e:  mov    %esp,%ebp
08ac08b1 +0x0290:  push   %ebx
08ac08b2 +0x0291:  sub    $0x14,%esp
08ac08b5 +0x0294:  mov    0x8(%ebp),%ebx
08ac08b8 +0x0297:  mov    0xc(%ebp),%eax
08ac08bb +0x029a:  mov    %eax,0x4(%esp)
08ac08bf +0x029e:  mov    %ebx,(%esp)
08ac08c2 +0x02a1:  call   08ac0e48 <+0x827>
08ac08c7 +0x02a6:  sub    $0x4,%esp
08ac08ca +0x02a9:  mov    %ebx,%eax
08ac08cc +0x02ab:  mov    -0x4(%ebp),%ebx
08ac08cf +0x02ae:  leave
08ac08d0 +0x02af:  ret    $0x4
08ac08d3 +0x02b2:  nop
08ac08d4 +0x02b3:  push   %ebp
08ac08d5 +0x02b4:  mov    %esp,%ebp
08ac08d7 +0x02b6:  mov    0x8(%ebp),%eax
08ac08da +0x02b9:  mov    (%eax),%eax
08ac08dc +0x02bb:  add    $0x10,%eax
08ac08df +0x02be:  pop    %ebp
08ac08e0 +0x02bf:  ret
08ac08e1 +0x02c0:  nop
08ac08e2 +0x02c1:  push   %ebp
08ac08e3 +0x02c2:  mov    %esp,%ebp
08ac08e5 +0x02c4:  sub    $0x18,%esp
08ac08e8 +0x02c7:  mov    0x8(%ebp),%eax
08ac08eb +0x02ca:  mov    %eax,(%esp)
08ac08ee +0x02cd:  call   08ac0e6e <+0x84d>
08ac08f3 +0x02d2:  leave
08ac08f4 +0x02d3:  ret
08ac08f5 +0x02d4:  nop
08ac08f6 +0x02d5:  push   %ebp
08ac08f7 +0x02d6:  mov    %esp,%ebp
08ac08f9 +0x02d8:  mov    0x8(%ebp),%eax
08ac08fc +0x02db:  mov    0x4(%eax),%eax
08ac08ff +0x02de:  mov    %eax,%edx
08ac0901 +0x02e0:  mov    0x8(%ebp),%eax
08ac0904 +0x02e3:  mov    (%eax),%eax
08ac0906 +0x02e5:  mov    %edx,%ecx
08ac0908 +0x02e7:  sub    %eax,%ecx
08ac090a +0x02e9:  mov    %ecx,%eax
08ac090c +0x02eb:  sar    $0x3,%eax
08ac090f +0x02ee:  pop    %ebp
08ac0910 +0x02ef:  ret
08ac0911 +0x02f0:  nop
08ac0912 +0x02f1:  push   %ebp
08ac0913 +0x02f2:  mov    %esp,%ebp
08ac0915 +0x02f4:  sub    $0x18,%esp
08ac0918 +0x02f7:  mov    0xc(%ebp),%eax
08ac091b +0x02fa:  mov    %eax,0x4(%esp)
08ac091f +0x02fe:  mov    0x8(%ebp),%eax
08ac0922 +0x0301:  mov    %eax,(%esp)
08ac0925 +0x0304:  call   08ac0ee4 <+0x8c3>
08ac092a +0x0309:  mov    0xc(%ebp),%eax
08ac092d +0x030c:  mov    %eax,0x4(%esp)
08ac0931 +0x0310:  mov    0x8(%ebp),%eax
08ac0934 +0x0313:  mov    %eax,(%esp)
08ac0937 +0x0316:  call   08ac0f0e <+0x8ed>
08ac093c +0x031b:  leave
08ac093d +0x031c:  ret
08ac093e +0x031d:  push   %ebp
08ac093f +0x031e:  mov    %esp,%ebp
08ac0941 +0x0320:  push   %ebx
08ac0942 +0x0321:  sub    $0x14,%esp
08ac0945 +0x0324:  mov    0x8(%ebp),%ebx
08ac0948 +0x0327:  mov    0xc(%ebp),%eax
08ac094b +0x032a:  movl   $0x4,0x8(%esp)
08ac0953 +0x0332:  mov    %eax,0x4(%esp)
08ac0957 +0x0336:  mov    %ebx,(%esp)
08ac095a +0x0339:  call   0807d880 <_init+0x178>
08ac095f +0x033e:  mov    0xc(%ebp),%eax
08ac0962 +0x0341:  mov    (%eax),%eax
08ac0964 +0x0343:  mov    %eax,(%esp)
08ac0967 +0x0346:  call   086df800 <_ZSt18_Rb_tree_incrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_increment(std::_Rb_tree_node_base*)
08ac096c +0x034b:  mov    0xc(%ebp),%edx
08ac096f +0x034e:  mov    %eax,(%edx)
08ac0971 +0x0350:  mov    %ebx,%eax
08ac0973 +0x0352:  add    $0x14,%esp
08ac0976 +0x0355:  pop    %ebx
08ac0977 +0x0356:  pop    %ebp
08ac0978 +0x0357:  ret    $0x4
08ac097b +0x035a:  nop
08ac097c +0x035b:  push   %ebp
08ac097d +0x035c:  mov    %esp,%ebp
08ac097f +0x035e:  sub    $0x18,%esp
08ac0982 +0x0361:  mov    0x8(%ebp),%eax
08ac0985 +0x0364:  mov    %eax,(%esp)
08ac0988 +0x0367:  call   08ac0f20 <+0x8ff>
08ac098d +0x036c:  leave
08ac098e +0x036d:  ret
08ac098f +0x036e:  nop
08ac0990 +0x036f:  push   %ebp
08ac0991 +0x0370:  mov    %esp,%ebp
08ac0993 +0x0372:  sub    $0x18,%esp
08ac0996 +0x0375:  mov    0x8(%ebp),%eax
08ac0999 +0x0378:  mov    %eax,(%esp)
08ac099c +0x037b:  call   08ac0f70 <+0x94f>
08ac09a1 +0x0380:  leave
08ac09a2 +0x0381:  ret
08ac09a3 +0x0382:  nop
08ac09a4 +0x0383:  push   %ebp
08ac09a5 +0x0384:  mov    %esp,%ebp
08ac09a7 +0x0386:  sub    $0x28,%esp
08ac09aa +0x0389:  jmp    08ac09ec <+0x3cb>
08ac09ac +0x038b:  mov    0xc(%ebp),%eax
08ac09af +0x038e:  mov    %eax,(%esp)
08ac09b2 +0x0391:  call   08ac0f75 <+0x954>
08ac09b7 +0x0396:  mov    %eax,0x4(%esp)
08ac09bb +0x039a:  mov    0x8(%ebp),%eax
08ac09be +0x039d:  mov    %eax,(%esp)
08ac09c1 +0x03a0:  call   08ac09a4 <+0x383>
08ac09c6 +0x03a5:  mov    0xc(%ebp),%eax
08ac09c9 +0x03a8:  mov    %eax,(%esp)
08ac09cc +0x03ab:  call   08ac0f80 <+0x95f>
08ac09d1 +0x03b0:  mov    %eax,-0xc(%ebp)
08ac09d4 +0x03b3:  mov    0xc(%ebp),%eax
08ac09d7 +0x03b6:  mov    %eax,0x4(%esp)
08ac09db +0x03ba:  mov    0x8(%ebp),%eax
08ac09de +0x03bd:  mov    %eax,(%esp)
08ac09e1 +0x03c0:  call   08ac0f8c <+0x96b>
08ac09e6 +0x03c5:  mov    -0xc(%ebp),%eax
08ac09e9 +0x03c8:  mov    %eax,0xc(%ebp)
08ac09ec +0x03cb:  cmpl   $0x0,0xc(%ebp)
08ac09f0 +0x03cf:  setne  %al
08ac09f3 +0x03d2:  test   %al,%al
08ac09f5 +0x03d4:  jne    08ac09ac <+0x38b>
08ac09f7 +0x03d6:  leave
08ac09f8 +0x03d7:  ret
08ac09f9 +0x03d8:  nop
08ac09fa +0x03d9:  push   %ebp
08ac09fb +0x03da:  mov    %esp,%ebp
08ac09fd +0x03dc:  mov    0x8(%ebp),%eax
08ac0a00 +0x03df:  mov    0x8(%eax),%eax
08ac0a03 +0x03e2:  pop    %ebp
08ac0a04 +0x03e3:  ret
08ac0a05 +0x03e4:  nop
08ac0a06 +0x03e5:  push   %ebp
08ac0a07 +0x03e6:  mov    %esp,%ebp
08ac0a09 +0x03e8:  sub    $0x18,%esp
08ac0a0c +0x03eb:  mov    0x8(%ebp),%eax
08ac0a0f +0x03ee:  mov    %eax,(%esp)
08ac0a12 +0x03f1:  call   08ac0ff0 <+0x9cf>
08ac0a17 +0x03f6:  leave
08ac0a18 +0x03f7:  ret
08ac0a19 +0x03f8:  nop
08ac0a1a +0x03f9:  push   %ebp
08ac0a1b +0x03fa:  mov    %esp,%ebp
08ac0a1d +0x03fc:  sub    $0x18,%esp
08ac0a20 +0x03ff:  mov    0x8(%ebp),%eax
08ac0a23 +0x0402:  mov    %eax,(%esp)
08ac0a26 +0x0405:  call   08ac0fc0 <+0x99f>
08ac0a2b +0x040a:  leave
08ac0a2c +0x040b:  ret
08ac0a2d +0x040c:  nop
08ac0a2e +0x040d:  push   %ebp
08ac0a2f +0x040e:  mov    %esp,%ebp
08ac0a31 +0x0410:  push   %esi
08ac0a32 +0x0411:  push   %ebx
08ac0a33 +0x0412:  sub    $0x10,%esp
08ac0a36 +0x0415:  mov    0x8(%ebp),%eax
08ac0a39 +0x0418:  mov    0x8(%eax),%eax
08ac0a3c +0x041b:  mov    %eax,%edx
08ac0a3e +0x041d:  mov    0x8(%ebp),%eax
08ac0a41 +0x0420:  mov    (%eax),%eax
08ac0a43 +0x0422:  mov    %edx,%ecx
08ac0a45 +0x0424:  sub    %eax,%ecx
08ac0a47 +0x0426:  mov    %ecx,%eax
08ac0a49 +0x0428:  sar    $0x3,%eax
08ac0a4c +0x042b:  mov    %eax,%edx
08ac0a4e +0x042d:  mov    0x8(%ebp),%eax
08ac0a51 +0x0430:  mov    (%eax),%eax
08ac0a53 +0x0432:  mov    %edx,0x8(%esp)
08ac0a57 +0x0436:  mov    %eax,0x4(%esp)
08ac0a5b +0x043a:  mov    0x8(%ebp),%eax
08ac0a5e +0x043d:  mov    %eax,(%esp)
08ac0a61 +0x0440:  call   08ac1004 <+0x9e3>
08ac0a66 +0x0445:  jmp    08ac0a83 <+0x462>
08ac0a68 +0x0447:  mov    %edx,%ebx
08ac0a6a +0x0449:  mov    %eax,%esi
08ac0a6c +0x044b:  mov    0x8(%ebp),%eax
08ac0a6f +0x044e:  mov    %eax,(%esp)
08ac0a72 +0x0451:  call   08ac0a06 <+0x3e5>
08ac0a77 +0x0456:  mov    %esi,%eax
08ac0a79 +0x0458:  mov    %ebx,%edx
08ac0a7b +0x045a:  mov    %eax,(%esp)
08ac0a7e +0x045d:  call   08ae3750 <_Unwind_Resume>
08ac0a83 +0x0462:  mov    0x8(%ebp),%eax
08ac0a86 +0x0465:  mov    %eax,(%esp)
08ac0a89 +0x0468:  call   08ac0a06 <+0x3e5>
08ac0a8e +0x046d:  add    $0x10,%esp
08ac0a91 +0x0470:  pop    %ebx
08ac0a92 +0x0471:  pop    %esi
08ac0a93 +0x0472:  pop    %ebp
08ac0a94 +0x0473:  ret
08ac0a95 +0x0474:  nop
08ac0a96 +0x0475:  push   %ebp
08ac0a97 +0x0476:  mov    %esp,%ebp
08ac0a99 +0x0478:  mov    0x8(%ebp),%eax
08ac0a9c +0x047b:  pop    %ebp
08ac0a9d +0x047c:  ret
08ac0a9e +0x047d:  push   %ebp
08ac0a9f +0x047e:  mov    %esp,%ebp
08ac0aa1 +0x0480:  sub    $0x18,%esp
08ac0aa4 +0x0483:  mov    0xc(%ebp),%eax
08ac0aa7 +0x0486:  mov    %eax,0x4(%esp)
08ac0aab +0x048a:  mov    0x8(%ebp),%eax
08ac0aae +0x048d:  mov    %eax,(%esp)
08ac0ab1 +0x0490:  call   08ac102b <+0xa0a>
08ac0ab6 +0x0495:  leave
08ac0ab7 +0x0496:  ret
08ac0ab8 +0x0497:  push   %ebp
08ac0ab9 +0x0498:  mov    %esp,%ebp
08ac0abb +0x049a:  mov    0x8(%ebp),%eax
08ac0abe +0x049d:  pop    %ebp
08ac0abf +0x049e:  ret
08ac0ac0 +0x049f:  push   %ebp
08ac0ac1 +0x04a0:  mov    %esp,%ebp
08ac0ac3 +0x04a2:  push   %ebx
08ac0ac4 +0x04a3:  sub    $0x24,%esp
08ac0ac7 +0x04a6:  mov    0x8(%ebp),%eax
08ac0aca +0x04a9:  mov    0x4(%eax),%edx
08ac0acd +0x04ac:  mov    0x8(%ebp),%eax
08ac0ad0 +0x04af:  mov    0x8(%eax),%eax
08ac0ad3 +0x04b2:  cmp    %eax,%edx
08ac0ad5 +0x04b4:  je     08ac0b0c <+0x4eb>
08ac0ad7 +0x04b6:  mov    0xc(%ebp),%eax
08ac0ada +0x04b9:  mov    %eax,(%esp)
08ac0add +0x04bc:  call   08ac1045 <+0xa24>
08ac0ae2 +0x04c1:  mov    0x8(%ebp),%edx
08ac0ae5 +0x04c4:  mov    0x4(%edx),%ecx
08ac0ae8 +0x04c7:  mov    0x8(%ebp),%edx
08ac0aeb +0x04ca:  mov    %eax,0x8(%esp)
08ac0aef +0x04ce:  mov    %ecx,0x4(%esp)
08ac0af3 +0x04d2:  mov    %edx,(%esp)
08ac0af6 +0x04d5:  call   08ac104e <+0xa2d>
08ac0afb +0x04da:  mov    0x8(%ebp),%eax
08ac0afe +0x04dd:  mov    0x4(%eax),%eax
08ac0b01 +0x04e0:  lea    0x8(%eax),%edx
08ac0b04 +0x04e3:  mov    0x8(%ebp),%eax
08ac0b07 +0x04e6:  mov    %edx,0x4(%eax)
08ac0b0a +0x04e9:  jmp    08ac0b44 <+0x523>
08ac0b0c +0x04eb:  mov    0xc(%ebp),%eax
08ac0b0f +0x04ee:  mov    %eax,(%esp)
08ac0b12 +0x04f1:  call   08ac1045 <+0xa24>
08ac0b17 +0x04f6:  mov    %eax,%ebx
08ac0b19 +0x04f8:  lea    -0xc(%ebp),%eax
08ac0b1c +0x04fb:  mov    0x8(%ebp),%edx
08ac0b1f +0x04fe:  mov    %edx,0x4(%esp)
08ac0b23 +0x0502:  mov    %eax,(%esp)
08ac0b26 +0x0505:  call   08ac108e <+0xa6d>
08ac0b2b +0x050a:  sub    $0x4,%esp
08ac0b2e +0x050d:  mov    %ebx,0x8(%esp)
08ac0b32 +0x0511:  mov    -0xc(%ebp),%eax
08ac0b35 +0x0514:  mov    %eax,0x4(%esp)
08ac0b39 +0x0518:  mov    0x8(%ebp),%eax
08ac0b3c +0x051b:  mov    %eax,(%esp)
08ac0b3f +0x051e:  call   08ac10b4 <+0xa93>
08ac0b44 +0x0523:  mov    -0x4(%ebp),%ebx
08ac0b47 +0x0526:  leave
08ac0b48 +0x0527:  ret
08ac0b49 +0x0528:  nop
08ac0b4a +0x0529:  push   %ebp
08ac0b4b +0x052a:  mov    %esp,%ebp
08ac0b4d +0x052c:  push   %esi
08ac0b4e +0x052d:  push   %ebx
08ac0b4f +0x052e:  sub    $0x30,%esp
08ac0b52 +0x0531:  mov    0x8(%ebp),%ebx
08ac0b55 +0x0534:  mov    0xc(%ebp),%eax
08ac0b58 +0x0537:  mov    %eax,(%esp)
08ac0b5b +0x053a:  call   08ac138c <+0xd6b>
08ac0b60 +0x053f:  mov    %eax,%esi
08ac0b62 +0x0541:  mov    0xc(%ebp),%eax
08ac0b65 +0x0544:  mov    %eax,(%esp)
08ac0b68 +0x0547:  call   08ac09fa <+0x3d9>
08ac0b6d +0x054c:  lea    -0x10(%ebp),%edx
08ac0b70 +0x054f:  mov    0x10(%ebp),%ecx
08ac0b73 +0x0552:  mov    %ecx,0x10(%esp)
08ac0b77 +0x0556:  mov    %esi,0xc(%esp)
08ac0b7b +0x055a:  mov    %eax,0x8(%esp)
08ac0b7f +0x055e:  mov    0xc(%ebp),%eax
08ac0b82 +0x0561:  mov    %eax,0x4(%esp)
08ac0b86 +0x0565:  mov    %edx,(%esp)
08ac0b89 +0x0568:  call   08ac1398 <+0xd77>
08ac0b8e +0x056d:  sub    $0x4,%esp
08ac0b91 +0x0570:  lea    -0xc(%ebp),%eax
08ac0b94 +0x0573:  mov    0xc(%ebp),%edx
08ac0b97 +0x0576:  mov    %edx,0x4(%esp)
08ac0b9b +0x057a:  mov    %eax,(%esp)
08ac0b9e +0x057d:  call   08ac0c08 <+0x5e7>
08ac0ba3 +0x0582:  sub    $0x4,%esp
08ac0ba6 +0x0585:  lea    -0xc(%ebp),%eax
08ac0ba9 +0x0588:  mov    %eax,0x4(%esp)
08ac0bad +0x058c:  lea    -0x10(%ebp),%eax
08ac0bb0 +0x058f:  mov    %eax,(%esp)
08ac0bb3 +0x0592:  call   08ac1436 <+0xe15>
08ac0bb8 +0x0597:  test   %al,%al
08ac0bba +0x0599:  jne    08ac0be1 <+0x5c0>
08ac0bbc +0x059b:  mov    -0x10(%ebp),%eax
08ac0bbf +0x059e:  mov    %eax,(%esp)
08ac0bc2 +0x05a1:  call   08ac1414 <+0xdf3>
08ac0bc7 +0x05a6:  mov    0xc(%ebp),%edx
08ac0bca +0x05a9:  mov    %eax,0x8(%esp)
08ac0bce +0x05ad:  mov    0x10(%ebp),%eax
08ac0bd1 +0x05b0:  mov    %eax,0x4(%esp)
08ac0bd5 +0x05b4:  mov    %edx,(%esp)
08ac0bd8 +0x05b7:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
08ac0bdd +0x05bc:  test   %al,%al
08ac0bdf +0x05be:  je     08ac0bf5 <+0x5d4>
08ac0be1 +0x05c0:  mov    0xc(%ebp),%eax
08ac0be4 +0x05c3:  mov    %eax,0x4(%esp)
08ac0be8 +0x05c7:  mov    %ebx,(%esp)
08ac0beb +0x05ca:  call   08ac0c08 <+0x5e7>
08ac0bf0 +0x05cf:  sub    $0x4,%esp
08ac0bf3 +0x05d2:  jmp    08ac0bfa <+0x5d9>
08ac0bf5 +0x05d4:  mov    -0x10(%ebp),%eax
08ac0bf8 +0x05d7:  mov    %eax,(%ebx)
08ac0bfa +0x05d9:  mov    %ebx,%eax
08ac0bfc +0x05db:  lea    -0x8(%ebp),%esp
08ac0bff +0x05de:  add    $0x0,%esp
08ac0c02 +0x05e1:  pop    %ebx
08ac0c03 +0x05e2:  pop    %esi
08ac0c04 +0x05e3:  pop    %ebp
08ac0c05 +0x05e4:  ret    $0x4
08ac0c08 +0x05e7:  push   %ebp
08ac0c09 +0x05e8:  mov    %esp,%ebp
08ac0c0b +0x05ea:  push   %ebx
08ac0c0c +0x05eb:  sub    $0x14,%esp
08ac0c0f +0x05ee:  mov    0x8(%ebp),%ebx
08ac0c12 +0x05f1:  mov    0xc(%ebp),%eax
08ac0c15 +0x05f4:  add    $0x4,%eax
08ac0c18 +0x05f7:  mov    %eax,0x4(%esp)
08ac0c1c +0x05fb:  mov    %ebx,(%esp)
08ac0c1f +0x05fe:  call   08ac144a <+0xe29>
08ac0c24 +0x0603:  mov    %ebx,%eax
08ac0c26 +0x0605:  add    $0x14,%esp
08ac0c29 +0x0608:  pop    %ebx
08ac0c2a +0x0609:  pop    %ebp
08ac0c2b +0x060a:  ret    $0x4
08ac0c2e +0x060d:  push   %ebp
08ac0c2f +0x060e:  mov    %esp,%ebp
08ac0c31 +0x0610:  sub    $0x28,%esp
08ac0c34 +0x0613:  mov    0x8(%ebp),%eax
08ac0c37 +0x0616:  mov    %eax,(%esp)
08ac0c3a +0x0619:  call   08ac1457 <+0xe36>
08ac0c3f +0x061e:  mov    (%eax),%eax
08ac0c41 +0x0620:  mov    %eax,-0xc(%ebp)
08ac0c44 +0x0623:  mov    0xc(%ebp),%eax
08ac0c47 +0x0626:  mov    %eax,(%esp)
08ac0c4a +0x0629:  call   08ac1457 <+0xe36>
08ac0c4f +0x062e:  mov    (%eax),%edx
08ac0c51 +0x0630:  mov    0x8(%ebp),%eax
08ac0c54 +0x0633:  mov    %edx,(%eax)
08ac0c56 +0x0635:  lea    -0xc(%ebp),%eax
08ac0c59 +0x0638:  mov    %eax,(%esp)
08ac0c5c +0x063b:  call   08ac1457 <+0xe36>
08ac0c61 +0x0640:  mov    (%eax),%edx
08ac0c63 +0x0642:  mov    0xc(%ebp),%eax
08ac0c66 +0x0645:  mov    %edx,(%eax)
08ac0c68 +0x0647:  leave
08ac0c69 +0x0648:  ret
08ac0c6a +0x0649:  push   %ebp
08ac0c6b +0x064a:  mov    %esp,%ebp
08ac0c6d +0x064c:  pop    %ebp
08ac0c6e +0x064d:  ret
08ac0c6f +0x064e:  push   %ebp
08ac0c70 +0x064f:  mov    %esp,%ebp
08ac0c72 +0x0651:  mov    0x8(%ebp),%eax
08ac0c75 +0x0654:  pop    %ebp
08ac0c76 +0x0655:  ret
08ac0c77 +0x0656:  nop
08ac0c78 +0x0657:  push   %ebp
08ac0c79 +0x0658:  mov    %esp,%ebp
08ac0c7b +0x065a:  push   %esi
08ac0c7c +0x065b:  push   %ebx
08ac0c7d +0x065c:  sub    $0x50,%esp
08ac0c80 +0x065f:  mov    0x8(%ebp),%ebx
08ac0c83 +0x0662:  mov    0xc(%ebp),%eax
08ac0c86 +0x0665:  mov    %eax,(%esp)
08ac0c89 +0x0668:  call   08ac09fa <+0x3d9>
08ac0c8e +0x066d:  mov    %eax,-0x14(%ebp)
08ac0c91 +0x0670:  mov    0xc(%ebp),%eax
08ac0c94 +0x0673:  mov    %eax,(%esp)
08ac0c97 +0x0676:  call   08ac138c <+0xd6b>
08ac0c9c +0x067b:  mov    %eax,-0x10(%ebp)
08ac0c9f +0x067e:  movb   $0x1,-0x9(%ebp)
08ac0ca3 +0x0682:  jmp    08ac0d01 <+0x6e0>
08ac0ca5 +0x0684:  mov    -0x14(%ebp),%eax
08ac0ca8 +0x0687:  mov    %eax,-0x10(%ebp)
08ac0cab +0x068a:  mov    -0x14(%ebp),%eax
08ac0cae +0x068d:  mov    %eax,(%esp)
08ac0cb1 +0x0690:  call   08ac1468 <+0xe47>
08ac0cb6 +0x0695:  mov    %eax,%esi
08ac0cb8 +0x0697:  mov    0x10(%ebp),%eax
08ac0cbb +0x069a:  mov    %eax,0x4(%esp)
08ac0cbf +0x069e:  lea    -0x2d(%ebp),%eax
08ac0cc2 +0x06a1:  mov    %eax,(%esp)
08ac0cc5 +0x06a4:  call   08ac1460 <+0xe3f>
08ac0cca +0x06a9:  mov    0xc(%ebp),%edx
08ac0ccd +0x06ac:  mov    %esi,0x8(%esp)
08ac0cd1 +0x06b0:  mov    %eax,0x4(%esp)
08ac0cd5 +0x06b4:  mov    %edx,(%esp)
08ac0cd8 +0x06b7:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
08ac0cdd +0x06bc:  mov    %al,-0x9(%ebp)
08ac0ce0 +0x06bf:  cmpb   $0x0,-0x9(%ebp)
08ac0ce4 +0x06c3:  je     08ac0cf3 <+0x6d2>
08ac0ce6 +0x06c5:  mov    -0x14(%ebp),%eax
08ac0ce9 +0x06c8:  mov    %eax,(%esp)
08ac0cec +0x06cb:  call   08ac0f80 <+0x95f>
08ac0cf1 +0x06d0:  jmp    08ac0cfe <+0x6dd>
08ac0cf3 +0x06d2:  mov    -0x14(%ebp),%eax
08ac0cf6 +0x06d5:  mov    %eax,(%esp)
08ac0cf9 +0x06d8:  call   08ac0f75 <+0x954>
08ac0cfe +0x06dd:  mov    %eax,-0x14(%ebp)
08ac0d01 +0x06e0:  cmpl   $0x0,-0x14(%ebp)
08ac0d05 +0x06e4:  setne  %al
08ac0d08 +0x06e7:  test   %al,%al
08ac0d0a +0x06e9:  jne    08ac0ca5 <+0x684>
08ac0d0c +0x06eb:  mov    -0x10(%ebp),%eax
08ac0d0f +0x06ee:  mov    %eax,0x4(%esp)
08ac0d13 +0x06f2:  lea    -0x34(%ebp),%eax
08ac0d16 +0x06f5:  mov    %eax,(%esp)
08ac0d19 +0x06f8:  call   08ac144a <+0xe29>
08ac0d1e +0x06fd:  cmpb   $0x0,-0x9(%ebp)
08ac0d22 +0x0701:  je     08ac0da3 <+0x782>
08ac0d24 +0x0703:  lea    -0x2c(%ebp),%eax
08ac0d27 +0x0706:  mov    0xc(%ebp),%edx
08ac0d2a +0x0709:  mov    %edx,0x4(%esp)
08ac0d2e +0x070d:  mov    %eax,(%esp)
08ac0d31 +0x0710:  call   08ac0e48 <+0x827>
08ac0d36 +0x0715:  sub    $0x4,%esp
08ac0d39 +0x0718:  lea    -0x2c(%ebp),%eax
08ac0d3c +0x071b:  mov    %eax,0x4(%esp)
08ac0d40 +0x071f:  lea    -0x34(%ebp),%eax
08ac0d43 +0x0722:  mov    %eax,(%esp)
08ac0d46 +0x0725:  call   08ac1436 <+0xe15>
08ac0d4b +0x072a:  test   %al,%al
08ac0d4d +0x072c:  je     08ac0d98 <+0x777>
08ac0d4f +0x072e:  movb   $0x1,-0x25(%ebp)
08ac0d53 +0x0732:  mov    -0x10(%ebp),%ecx
08ac0d56 +0x0735:  mov    -0x14(%ebp),%edx
08ac0d59 +0x0738:  lea    -0x24(%ebp),%eax
08ac0d5c +0x073b:  mov    0x10(%ebp),%esi
08ac0d5f +0x073e:  mov    %esi,0x10(%esp)
08ac0d63 +0x0742:  mov    %ecx,0xc(%esp)
08ac0d67 +0x0746:  mov    %edx,0x8(%esp)
08ac0d6b +0x074a:  mov    0xc(%ebp),%edx
08ac0d6e +0x074d:  mov    %edx,0x4(%esp)
08ac0d72 +0x0751:  mov    %eax,(%esp)
08ac0d75 +0x0754:  call   08ac148a <+0xe69>
08ac0d7a +0x0759:  sub    $0x4,%esp
08ac0d7d +0x075c:  lea    -0x25(%ebp),%eax
08ac0d80 +0x075f:  mov    %eax,0x8(%esp)
08ac0d84 +0x0763:  lea    -0x24(%ebp),%eax
08ac0d87 +0x0766:  mov    %eax,0x4(%esp)
08ac0d8b +0x076a:  mov    %ebx,(%esp)
08ac0d8e +0x076d:  call   08ac1552 <+0xf31>
08ac0d93 +0x0772:  jmp    08ac0e39 <+0x818>
08ac0d98 +0x0777:  lea    -0x34(%ebp),%eax
08ac0d9b +0x077a:  mov    %eax,(%esp)
08ac0d9e +0x077d:  call   08ac1580 <+0xf5f>
08ac0da3 +0x0782:  mov    0x10(%ebp),%eax
08ac0da6 +0x0785:  mov    %eax,0x4(%esp)
08ac0daa +0x0789:  lea    -0x1e(%ebp),%eax
08ac0dad +0x078c:  mov    %eax,(%esp)
08ac0db0 +0x078f:  call   08ac1460 <+0xe3f>
08ac0db5 +0x0794:  mov    %eax,%esi
08ac0db7 +0x0796:  mov    -0x34(%ebp),%eax
08ac0dba +0x0799:  mov    %eax,(%esp)
08ac0dbd +0x079c:  call   08ac1414 <+0xdf3>
08ac0dc2 +0x07a1:  mov    0xc(%ebp),%edx
08ac0dc5 +0x07a4:  mov    %esi,0x8(%esp)
08ac0dc9 +0x07a8:  mov    %eax,0x4(%esp)
08ac0dcd +0x07ac:  mov    %edx,(%esp)
08ac0dd0 +0x07af:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
08ac0dd5 +0x07b4:  test   %al,%al
08ac0dd7 +0x07b6:  je     08ac0e1f <+0x7fe>
08ac0dd9 +0x07b8:  movb   $0x1,-0x1d(%ebp)
08ac0ddd +0x07bc:  mov    -0x10(%ebp),%ecx
08ac0de0 +0x07bf:  mov    -0x14(%ebp),%edx
08ac0de3 +0x07c2:  lea    -0x1c(%ebp),%eax
08ac0de6 +0x07c5:  mov    0x10(%ebp),%esi
08ac0de9 +0x07c8:  mov    %esi,0x10(%esp)
08ac0ded +0x07cc:  mov    %ecx,0xc(%esp)
08ac0df1 +0x07d0:  mov    %edx,0x8(%esp)
08ac0df5 +0x07d4:  mov    0xc(%ebp),%edx
08ac0df8 +0x07d7:  mov    %edx,0x4(%esp)
08ac0dfc +0x07db:  mov    %eax,(%esp)
08ac0dff +0x07de:  call   08ac148a <+0xe69>
08ac0e04 +0x07e3:  sub    $0x4,%esp
08ac0e07 +0x07e6:  lea    -0x1d(%ebp),%eax
08ac0e0a +0x07e9:  mov    %eax,0x8(%esp)
08ac0e0e +0x07ed:  lea    -0x1c(%ebp),%eax
08ac0e11 +0x07f0:  mov    %eax,0x4(%esp)
08ac0e15 +0x07f4:  mov    %ebx,(%esp)
08ac0e18 +0x07f7:  call   08ac1552 <+0xf31>
08ac0e1d +0x07fc:  jmp    08ac0e39 <+0x818>
08ac0e1f +0x07fe:  movb   $0x0,-0x15(%ebp)
08ac0e23 +0x0802:  lea    -0x15(%ebp),%eax
08ac0e26 +0x0805:  mov    %eax,0x8(%esp)
08ac0e2a +0x0809:  lea    -0x34(%ebp),%eax
08ac0e2d +0x080c:  mov    %eax,0x4(%esp)
08ac0e31 +0x0810:  mov    %ebx,(%esp)
08ac0e34 +0x0813:  call   08ac159e <+0xf7d>
08ac0e39 +0x0818:  mov    %ebx,%eax
08ac0e3b +0x081a:  lea    -0x8(%ebp),%esp
08ac0e3e +0x081d:  add    $0x0,%esp
08ac0e41 +0x0820:  pop    %ebx
08ac0e42 +0x0821:  pop    %esi
08ac0e43 +0x0822:  pop    %ebp
08ac0e44 +0x0823:  ret    $0x4
08ac0e47 +0x0826:  nop
08ac0e48 +0x0827:  push   %ebp
08ac0e49 +0x0828:  mov    %esp,%ebp
08ac0e4b +0x082a:  push   %ebx
08ac0e4c +0x082b:  sub    $0x14,%esp
08ac0e4f +0x082e:  mov    0x8(%ebp),%ebx
08ac0e52 +0x0831:  mov    0xc(%ebp),%eax
08ac0e55 +0x0834:  mov    0xc(%eax),%eax
08ac0e58 +0x0837:  mov    %eax,0x4(%esp)
08ac0e5c +0x083b:  mov    %ebx,(%esp)
08ac0e5f +0x083e:  call   08ac144a <+0xe29>
08ac0e64 +0x0843:  mov    %ebx,%eax
08ac0e66 +0x0845:  add    $0x14,%esp
08ac0e69 +0x0848:  pop    %ebx
08ac0e6a +0x0849:  pop    %ebp
08ac0e6b +0x084a:  ret    $0x4
08ac0e6e +0x084d:  push   %ebp
08ac0e6f +0x084e:  mov    %esp,%ebp
08ac0e71 +0x0850:  push   %ebx
08ac0e72 +0x0851:  sub    $0x14,%esp
08ac0e75 +0x0854:  mov    0x8(%ebp),%eax
08ac0e78 +0x0857:  mov    %eax,(%esp)
08ac0e7b +0x085a:  call   08ac09fa <+0x3d9>
08ac0e80 +0x085f:  mov    %eax,0x4(%esp)
08ac0e84 +0x0863:  mov    0x8(%ebp),%eax
08ac0e87 +0x0866:  mov    %eax,(%esp)
08ac0e8a +0x0869:  call   08ac09a4 <+0x383>
08ac0e8f +0x086e:  mov    0x8(%ebp),%eax
08ac0e92 +0x0871:  mov    %eax,(%esp)
08ac0e95 +0x0874:  call   08ac15cc <+0xfab>
08ac0e9a +0x0879:  mov    %eax,%ebx
08ac0e9c +0x087b:  mov    0x8(%ebp),%eax
08ac0e9f +0x087e:  mov    %eax,(%esp)
08ac0ea2 +0x0881:  call   08ac138c <+0xd6b>
08ac0ea7 +0x0886:  mov    %eax,(%ebx)
08ac0ea9 +0x0888:  mov    0x8(%ebp),%eax
08ac0eac +0x088b:  mov    %eax,(%esp)
08ac0eaf +0x088e:  call   08ac15d8 <+0xfb7>
08ac0eb4 +0x0893:  movl   $0x0,(%eax)
08ac0eba +0x0899:  mov    0x8(%ebp),%eax
08ac0ebd +0x089c:  mov    %eax,(%esp)
08ac0ec0 +0x089f:  call   08ac15e4 <+0xfc3>
08ac0ec5 +0x08a4:  mov    %eax,%ebx
08ac0ec7 +0x08a6:  mov    0x8(%ebp),%eax
08ac0eca +0x08a9:  mov    %eax,(%esp)
08ac0ecd +0x08ac:  call   08ac138c <+0xd6b>
08ac0ed2 +0x08b1:  mov    %eax,(%ebx)
08ac0ed4 +0x08b3:  mov    0x8(%ebp),%eax
08ac0ed7 +0x08b6:  movl   $0x0,0x14(%eax)
08ac0ede +0x08bd:  add    $0x14,%esp
08ac0ee1 +0x08c0:  pop    %ebx
08ac0ee2 +0x08c1:  pop    %ebp
08ac0ee3 +0x08c2:  ret
08ac0ee4 +0x08c3:  push   %ebp
08ac0ee5 +0x08c4:  mov    %esp,%ebp
08ac0ee7 +0x08c6:  sub    $0x18,%esp
08ac0eea +0x08c9:  mov    0x8(%ebp),%eax
08ac0eed +0x08cc:  mov    %eax,(%esp)
08ac0ef0 +0x08cf:  call   08ac08f6 <+0x2d5>
08ac0ef5 +0x08d4:  cmp    0xc(%ebp),%eax
08ac0ef8 +0x08d7:  setbe  %al
08ac0efb +0x08da:  test   %al,%al
08ac0efd +0x08dc:  je     08ac0f0b <+0x8ea>
08ac0eff +0x08de:  movl   $"vector::_M_range_check",(%esp)
08ac0f06 +0x08e5:  call   086d9b70 <_ZSt20__throw_out_of_rangePKc>  ; std::__throw_out_of_range(char const*)
08ac0f0b +0x08ea:  leave
08ac0f0c +0x08eb:  ret
08ac0f0d +0x08ec:  nop
08ac0f0e +0x08ed:  push   %ebp
08ac0f0f +0x08ee:  mov    %esp,%ebp
08ac0f11 +0x08f0:  mov    0x8(%ebp),%eax
08ac0f14 +0x08f3:  mov    (%eax),%eax
08ac0f16 +0x08f5:  mov    0xc(%ebp),%edx
08ac0f19 +0x08f8:  shl    $0x3,%edx
08ac0f1c +0x08fb:  add    %edx,%eax
08ac0f1e +0x08fd:  pop    %ebp
08ac0f1f +0x08fe:  ret
08ac0f20 +0x08ff:  push   %ebp
08ac0f21 +0x0900:  mov    %esp,%ebp
08ac0f23 +0x0902:  sub    $0x18,%esp
08ac0f26 +0x0905:  mov    0x8(%ebp),%eax
08ac0f29 +0x0908:  mov    %eax,(%esp)
08ac0f2c +0x090b:  call   08ac15f0 <+0xfcf>
08ac0f31 +0x0910:  mov    0x8(%ebp),%eax
08ac0f34 +0x0913:  movl   $0x0,0x4(%eax)
08ac0f3b +0x091a:  mov    0x8(%ebp),%eax
08ac0f3e +0x091d:  movl   $0x0,0x8(%eax)
08ac0f45 +0x0924:  mov    0x8(%ebp),%eax
08ac0f48 +0x0927:  movl   $0x0,0xc(%eax)
08ac0f4f +0x092e:  mov    0x8(%ebp),%eax
08ac0f52 +0x0931:  movl   $0x0,0x10(%eax)
08ac0f59 +0x0938:  mov    0x8(%ebp),%eax
08ac0f5c +0x093b:  movl   $0x0,0x14(%eax)
08ac0f63 +0x0942:  mov    0x8(%ebp),%eax
08ac0f66 +0x0945:  mov    %eax,(%esp)
08ac0f69 +0x0948:  call   08ac1604 <+0xfe3>
08ac0f6e +0x094d:  leave
08ac0f6f +0x094e:  ret
08ac0f70 +0x094f:  push   %ebp
08ac0f71 +0x0950:  mov    %esp,%ebp
08ac0f73 +0x0952:  pop    %ebp
08ac0f74 +0x0953:  ret
08ac0f75 +0x0954:  push   %ebp
08ac0f76 +0x0955:  mov    %esp,%ebp
08ac0f78 +0x0957:  mov    0x8(%ebp),%eax
08ac0f7b +0x095a:  mov    0xc(%eax),%eax
08ac0f7e +0x095d:  pop    %ebp
08ac0f7f +0x095e:  ret
08ac0f80 +0x095f:  push   %ebp
08ac0f81 +0x0960:  mov    %esp,%ebp
08ac0f83 +0x0962:  mov    0x8(%ebp),%eax
08ac0f86 +0x0965:  mov    0x8(%eax),%eax
08ac0f89 +0x0968:  pop    %ebp
08ac0f8a +0x0969:  ret
08ac0f8b +0x096a:  nop
08ac0f8c +0x096b:  push   %ebp
08ac0f8d +0x096c:  mov    %esp,%ebp
08ac0f8f +0x096e:  sub    $0x18,%esp
08ac0f92 +0x0971:  mov    0x8(%ebp),%eax
08ac0f95 +0x0974:  mov    %eax,(%esp)
08ac0f98 +0x0977:  call   08ac1636 <+0x1015>
08ac0f9d +0x097c:  mov    0xc(%ebp),%edx
08ac0fa0 +0x097f:  mov    %edx,0x4(%esp)
08ac0fa4 +0x0983:  mov    %eax,(%esp)
08ac0fa7 +0x0986:  call   08ac1644 <+0x1023>
08ac0fac +0x098b:  mov    0xc(%ebp),%eax
08ac0faf +0x098e:  mov    %eax,0x4(%esp)
08ac0fb3 +0x0992:  mov    0x8(%ebp),%eax
08ac0fb6 +0x0995:  mov    %eax,(%esp)
08ac0fb9 +0x0998:  call   08ac1658 <+0x1037>
08ac0fbe +0x099d:  leave
08ac0fbf +0x099e:  ret
08ac0fc0 +0x099f:  push   %ebp
08ac0fc1 +0x09a0:  mov    %esp,%ebp
08ac0fc3 +0x09a2:  sub    $0x18,%esp
08ac0fc6 +0x09a5:  mov    0x8(%ebp),%eax
08ac0fc9 +0x09a8:  mov    %eax,(%esp)
08ac0fcc +0x09ab:  call   08ac167a <+0x1059>
08ac0fd1 +0x09b0:  mov    0x8(%ebp),%eax
08ac0fd4 +0x09b3:  movl   $0x0,(%eax)
08ac0fda +0x09b9:  mov    0x8(%ebp),%eax
08ac0fdd +0x09bc:  movl   $0x0,0x4(%eax)
08ac0fe4 +0x09c3:  mov    0x8(%ebp),%eax
08ac0fe7 +0x09c6:  movl   $0x0,0x8(%eax)
08ac0fee +0x09cd:  leave
08ac0fef +0x09ce:  ret
08ac0ff0 +0x09cf:  push   %ebp
08ac0ff1 +0x09d0:  mov    %esp,%ebp
08ac0ff3 +0x09d2:  sub    $0x18,%esp
08ac0ff6 +0x09d5:  mov    0x8(%ebp),%eax
08ac0ff9 +0x09d8:  mov    %eax,(%esp)
08ac0ffc +0x09db:  call   08ac168e <+0x106d>
08ac1001 +0x09e0:  leave
08ac1002 +0x09e1:  ret
08ac1003 +0x09e2:  nop
08ac1004 +0x09e3:  push   %ebp
08ac1005 +0x09e4:  mov    %esp,%ebp
08ac1007 +0x09e6:  sub    $0x18,%esp
08ac100a +0x09e9:  cmpl   $0x0,0xc(%ebp)
08ac100e +0x09ed:  je     08ac1029 <+0xa08>
08ac1010 +0x09ef:  mov    0x8(%ebp),%eax
08ac1013 +0x09f2:  mov    0x10(%ebp),%edx
08ac1016 +0x09f5:  mov    %edx,0x8(%esp)
08ac101a +0x09f9:  mov    0xc(%ebp),%edx
08ac101d +0x09fc:  mov    %edx,0x4(%esp)
08ac1021 +0x0a00:  mov    %eax,(%esp)
08ac1024 +0x0a03:  call   08ac1694 <+0x1073>
08ac1029 +0x0a08:  leave
08ac102a +0x0a09:  ret
08ac102b +0x0a0a:  push   %ebp
08ac102c +0x0a0b:  mov    %esp,%ebp
08ac102e +0x0a0d:  sub    $0x18,%esp
08ac1031 +0x0a10:  mov    0xc(%ebp),%eax
08ac1034 +0x0a13:  mov    %eax,0x4(%esp)
08ac1038 +0x0a17:  mov    0x8(%ebp),%eax
08ac103b +0x0a1a:  mov    %eax,(%esp)
08ac103e +0x0a1d:  call   08ac16a7 <+0x1086>
08ac1043 +0x0a22:  leave
08ac1044 +0x0a23:  ret
08ac1045 +0x0a24:  push   %ebp
08ac1046 +0x0a25:  mov    %esp,%ebp
08ac1048 +0x0a27:  mov    0x8(%ebp),%eax
08ac104b +0x0a2a:  pop    %ebp
08ac104c +0x0a2b:  ret
08ac104d +0x0a2c:  nop
08ac104e +0x0a2d:  push   %ebp
08ac104f +0x0a2e:  mov    %esp,%ebp
08ac1051 +0x0a30:  push   %ebx
08ac1052 +0x0a31:  sub    $0x14,%esp
08ac1055 +0x0a34:  mov    0x10(%ebp),%eax
08ac1058 +0x0a37:  mov    %eax,(%esp)
08ac105b +0x0a3a:  call   08ac1045 <+0xa24>
08ac1060 +0x0a3f:  mov    %eax,%ebx
08ac1062 +0x0a41:  mov    0xc(%ebp),%eax
08ac1065 +0x0a44:  mov    %eax,0x4(%esp)
08ac1069 +0x0a48:  movl   $0x8,(%esp)
08ac1070 +0x0a4f:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
08ac1075 +0x0a54:  mov    %eax,%edx
08ac1077 +0x0a56:  test   %edx,%edx
08ac1079 +0x0a58:  je     08ac1087 <+0xa66>
08ac107b +0x0a5a:  mov    %eax,%ecx
08ac107d +0x0a5c:  mov    (%ebx),%eax
08ac107f +0x0a5e:  mov    0x4(%ebx),%edx
08ac1082 +0x0a61:  mov    %eax,(%ecx)
08ac1084 +0x0a63:  mov    %edx,0x4(%ecx)
08ac1087 +0x0a66:  add    $0x14,%esp
08ac108a +0x0a69:  pop    %ebx
08ac108b +0x0a6a:  pop    %ebp
08ac108c +0x0a6b:  ret
08ac108d +0x0a6c:  nop
08ac108e +0x0a6d:  push   %ebp
08ac108f +0x0a6e:  mov    %esp,%ebp
08ac1091 +0x0a70:  push   %ebx
08ac1092 +0x0a71:  sub    $0x14,%esp
08ac1095 +0x0a74:  mov    0x8(%ebp),%ebx
08ac1098 +0x0a77:  mov    0xc(%ebp),%eax
08ac109b +0x0a7a:  add    $0x4,%eax
08ac109e +0x0a7d:  mov    %eax,0x4(%esp)
08ac10a2 +0x0a81:  mov    %ebx,(%esp)
08ac10a5 +0x0a84:  call   08ac16ac <+0x108b>
08ac10aa +0x0a89:  mov    %ebx,%eax
08ac10ac +0x0a8b:  add    $0x14,%esp
08ac10af +0x0a8e:  pop    %ebx
08ac10b0 +0x0a8f:  pop    %ebp
08ac10b1 +0x0a90:  ret    $0x4
08ac10b4 +0x0a93:  push   %ebp
08ac10b5 +0x0a94:  mov    %esp,%ebp
08ac10b7 +0x0a96:  push   %esi
08ac10b8 +0x0a97:  push   %ebx
08ac10b9 +0x0a98:  sub    $0x30,%esp
08ac10bc +0x0a9b:  mov    0x8(%ebp),%eax
08ac10bf +0x0a9e:  mov    0x4(%eax),%edx
08ac10c2 +0x0aa1:  mov    0x8(%ebp),%eax
08ac10c5 +0x0aa4:  mov    0x8(%eax),%eax
08ac10c8 +0x0aa7:  cmp    %eax,%edx
08ac10ca +0x0aa9:  je     08ac117f <+0xb5e>
08ac10d0 +0x0aaf:  mov    0x8(%ebp),%eax
08ac10d3 +0x0ab2:  mov    0x4(%eax),%eax
08ac10d6 +0x0ab5:  sub    $0x8,%eax
08ac10d9 +0x0ab8:  mov    %eax,(%esp)
08ac10dc +0x0abb:  call   08ac0ab8 <+0x497>
08ac10e1 +0x0ac0:  mov    0x8(%ebp),%edx
08ac10e4 +0x0ac3:  mov    0x4(%edx),%ecx
08ac10e7 +0x0ac6:  mov    0x8(%ebp),%edx
08ac10ea +0x0ac9:  mov    %eax,0x8(%esp)
08ac10ee +0x0acd:  mov    %ecx,0x4(%esp)
08ac10f2 +0x0ad1:  mov    %edx,(%esp)
08ac10f5 +0x0ad4:  call   08ac104e <+0xa2d>
08ac10fa +0x0ad9:  mov    0x8(%ebp),%eax
08ac10fd +0x0adc:  mov    0x4(%eax),%eax
08ac1100 +0x0adf:  lea    0x8(%eax),%edx
08ac1103 +0x0ae2:  mov    0x8(%ebp),%eax
08ac1106 +0x0ae5:  mov    %edx,0x4(%eax)
08ac1109 +0x0ae8:  mov    0x8(%ebp),%eax
08ac110c +0x0aeb:  mov    0x4(%eax),%eax
08ac110f +0x0aee:  lea    -0x8(%eax),%esi
08ac1112 +0x0af1:  mov    0x8(%ebp),%eax
08ac1115 +0x0af4:  mov    0x4(%eax),%eax
08ac1118 +0x0af7:  lea    -0x10(%eax),%ebx
08ac111b +0x0afa:  lea    0xc(%ebp),%eax
08ac111e +0x0afd:  mov    %eax,(%esp)
08ac1121 +0x0b00:  call   08ac16bc <+0x109b>
08ac1126 +0x0b05:  mov    (%eax),%eax
08ac1128 +0x0b07:  mov    %esi,0x8(%esp)
08ac112c +0x0b0b:  mov    %ebx,0x4(%esp)
08ac1130 +0x0b0f:  mov    %eax,(%esp)
08ac1133 +0x0b12:  call   08ac16c4 <+0x10a3>
08ac1138 +0x0b17:  lea    0xc(%ebp),%eax
08ac113b +0x0b1a:  mov    %eax,(%esp)
08ac113e +0x0b1d:  call   08ac16fc <+0x10db>
08ac1143 +0x0b22:  mov    %eax,%ebx
08ac1145 +0x0b24:  mov    0x10(%ebp),%eax
08ac1148 +0x0b27:  mov    %eax,(%esp)
08ac114b +0x0b2a:  call   08ac1045 <+0xa24>
08ac1150 +0x0b2f:  mov    0x4(%eax),%edx
08ac1153 +0x0b32:  mov    (%eax),%eax
08ac1155 +0x0b34:  mov    %eax,-0x24(%ebp)
08ac1158 +0x0b37:  mov    %edx,-0x20(%ebp)
08ac115b +0x0b3a:  lea    -0x24(%ebp),%eax
08ac115e +0x0b3d:  cmp    %eax,%ebx
08ac1160 +0x0b3f:  je     08ac1381 <+0xd60>
08ac1166 +0x0b45:  movl   $0x6,0x8(%esp)
08ac116e +0x0b4d:  mov    %eax,0x4(%esp)
08ac1172 +0x0b51:  mov    %ebx,(%esp)
08ac1175 +0x0b54:  call   0807d8a0 <_init+0x198>
08ac117a +0x0b59:  jmp    08ac1381 <+0xd60>
08ac117f +0x0b5e:  movl   $"vector::_M_insert_aux",0x8(%esp)
08ac1187 +0x0b66:  movl   $0x1,0x4(%esp)
08ac118f +0x0b6e:  mov    0x8(%ebp),%eax
08ac1192 +0x0b71:  mov    %eax,(%esp)
08ac1195 +0x0b74:  call   08ac1706 <+0x10e5>
08ac119a +0x0b79:  mov    %eax,-0x18(%ebp)
08ac119d +0x0b7c:  lea    -0x1c(%ebp),%eax
08ac11a0 +0x0b7f:  mov    0x8(%ebp),%edx
08ac11a3 +0x0b82:  mov    %edx,0x4(%esp)
08ac11a7 +0x0b86:  mov    %eax,(%esp)
08ac11aa +0x0b89:  call   08ac17ac <+0x118b>
08ac11af +0x0b8e:  sub    $0x4,%esp
08ac11b2 +0x0b91:  lea    -0x1c(%ebp),%eax
08ac11b5 +0x0b94:  mov    %eax,0x4(%esp)
08ac11b9 +0x0b98:  lea    0xc(%ebp),%eax
08ac11bc +0x0b9b:  mov    %eax,(%esp)
08ac11bf +0x0b9e:  call   08ac17cf <+0x11ae>
08ac11c4 +0x0ba3:  mov    %eax,-0x14(%ebp)
08ac11c7 +0x0ba6:  mov    0x8(%ebp),%eax
08ac11ca +0x0ba9:  mov    -0x18(%ebp),%edx
08ac11cd +0x0bac:  mov    %edx,0x4(%esp)
08ac11d1 +0x0bb0:  mov    %eax,(%esp)
08ac11d4 +0x0bb3:  call   08ac1802 <+0x11e1>
08ac11d9 +0x0bb8:  mov    %eax,-0x10(%ebp)
08ac11dc +0x0bbb:  mov    -0x10(%ebp),%eax
08ac11df +0x0bbe:  mov    %eax,-0xc(%ebp)
08ac11e2 +0x0bc1:  mov    0x10(%ebp),%eax
08ac11e5 +0x0bc4:  mov    %eax,(%esp)
08ac11e8 +0x0bc7:  call   08ac1045 <+0xa24>
08ac11ed +0x0bcc:  mov    -0x14(%ebp),%edx
08ac11f0 +0x0bcf:  shl    $0x3,%edx
08ac11f3 +0x0bd2:  mov    %edx,%ecx
08ac11f5 +0x0bd4:  add    -0x10(%ebp),%ecx
08ac11f8 +0x0bd7:  mov    0x8(%ebp),%edx
08ac11fb +0x0bda:  mov    %eax,0x8(%esp)
08ac11ff +0x0bde:  mov    %ecx,0x4(%esp)
08ac1203 +0x0be2:  mov    %edx,(%esp)
08ac1206 +0x0be5:  call   08ac104e <+0xa2d>
08ac120b +0x0bea:  movl   $0x0,-0xc(%ebp)
08ac1212 +0x0bf1:  mov    0x8(%ebp),%eax
08ac1215 +0x0bf4:  mov    %eax,(%esp)
08ac1218 +0x0bf7:  call   08ac0a96 <+0x475>
08ac121d +0x0bfc:  mov    %eax,%ebx
08ac121f +0x0bfe:  lea    0xc(%ebp),%eax
08ac1222 +0x0c01:  mov    %eax,(%esp)
08ac1225 +0x0c04:  call   08ac16bc <+0x109b>
08ac122a +0x0c09:  mov    (%eax),%edx
08ac122c +0x0c0b:  mov    0x8(%ebp),%eax
08ac122f +0x0c0e:  mov    (%eax),%eax
08ac1231 +0x0c10:  mov    %ebx,0xc(%esp)
08ac1235 +0x0c14:  mov    -0x10(%ebp),%ecx
08ac1238 +0x0c17:  mov    %ecx,0x8(%esp)
08ac123c +0x0c1b:  mov    %edx,0x4(%esp)
08ac1240 +0x0c1f:  mov    %eax,(%esp)
08ac1243 +0x0c22:  call   08ac1831 <+0x1210>
08ac1248 +0x0c27:  mov    %eax,-0xc(%ebp)
08ac124b +0x0c2a:  addl   $0x8,-0xc(%ebp)
08ac124f +0x0c2e:  mov    0x8(%ebp),%eax
08ac1252 +0x0c31:  mov    %eax,(%esp)
08ac1255 +0x0c34:  call   08ac0a96 <+0x475>
08ac125a +0x0c39:  mov    %eax,%ebx
08ac125c +0x0c3b:  mov    0x8(%ebp),%eax
08ac125f +0x0c3e:  mov    0x4(%eax),%esi
08ac1262 +0x0c41:  lea    0xc(%ebp),%eax
08ac1265 +0x0c44:  mov    %eax,(%esp)
08ac1268 +0x0c47:  call   08ac16bc <+0x109b>
08ac126d +0x0c4c:  mov    (%eax),%eax
08ac126f +0x0c4e:  mov    %ebx,0xc(%esp)
08ac1273 +0x0c52:  mov    -0xc(%ebp),%edx
08ac1276 +0x0c55:  mov    %edx,0x8(%esp)
08ac127a +0x0c59:  mov    %esi,0x4(%esp)
08ac127e +0x0c5d:  mov    %eax,(%esp)
08ac1281 +0x0c60:  call   08ac1831 <+0x1210>
08ac1286 +0x0c65:  mov    %eax,-0xc(%ebp)
08ac1289 +0x0c68:  mov    0x8(%ebp),%eax
08ac128c +0x0c6b:  mov    %eax,(%esp)
08ac128f +0x0c6e:  call   08ac0a96 <+0x475>
08ac1294 +0x0c73:  mov    0x8(%ebp),%edx
08ac1297 +0x0c76:  mov    0x4(%edx),%ecx
08ac129a +0x0c79:  mov    0x8(%ebp),%edx
08ac129d +0x0c7c:  mov    (%edx),%edx
08ac129f +0x0c7e:  mov    %eax,0x8(%esp)
08ac12a3 +0x0c82:  mov    %ecx,0x4(%esp)
08ac12a7 +0x0c86:  mov    %edx,(%esp)
08ac12aa +0x0c89:  call   08ac0a9e <+0x47d>
08ac12af +0x0c8e:  mov    0x8(%ebp),%eax
08ac12b2 +0x0c91:  mov    0x8(%eax),%eax
08ac12b5 +0x0c94:  mov    %eax,%edx
08ac12b7 +0x0c96:  mov    0x8(%ebp),%eax
08ac12ba +0x0c99:  mov    (%eax),%eax
08ac12bc +0x0c9b:  mov    %edx,%ecx
08ac12be +0x0c9d:  sub    %eax,%ecx
08ac12c0 +0x0c9f:  mov    %ecx,%eax
08ac12c2 +0x0ca1:  sar    $0x3,%eax
08ac12c5 +0x0ca4:  mov    %eax,%ecx
08ac12c7 +0x0ca6:  mov    0x8(%ebp),%eax
08ac12ca +0x0ca9:  mov    (%eax),%edx
08ac12cc +0x0cab:  mov    0x8(%ebp),%eax
08ac12cf +0x0cae:  mov    %ecx,0x8(%esp)
08ac12d3 +0x0cb2:  mov    %edx,0x4(%esp)
08ac12d7 +0x0cb6:  mov    %eax,(%esp)
08ac12da +0x0cb9:  call   08ac1004 <+0x9e3>
08ac12df +0x0cbe:  mov    0x8(%ebp),%eax
08ac12e2 +0x0cc1:  mov    -0x10(%ebp),%edx
08ac12e5 +0x0cc4:  mov    %edx,(%eax)
08ac12e7 +0x0cc6:  mov    0x8(%ebp),%eax
08ac12ea +0x0cc9:  mov    -0xc(%ebp),%edx
08ac12ed +0x0ccc:  mov    %edx,0x4(%eax)
08ac12f0 +0x0ccf:  mov    -0x18(%ebp),%eax
08ac12f3 +0x0cd2:  shl    $0x3,%eax
08ac12f6 +0x0cd5:  mov    %eax,%edx
08ac12f8 +0x0cd7:  add    -0x10(%ebp),%edx
08ac12fb +0x0cda:  mov    0x8(%ebp),%eax
08ac12fe +0x0cdd:  mov    %edx,0x8(%eax)
08ac1301 +0x0ce0:  jmp    08ac1381 <+0xd60>
08ac1303 +0x0ce2:  mov    %eax,(%esp)
08ac1306 +0x0ce5:  call   08725ce0 <__cxa_begin_catch>
08ac130b +0x0cea:  cmpl   $0x0,-0xc(%ebp)
08ac130f +0x0cee:  jne    08ac132d <+0xd0c>
08ac1311 +0x0cf0:  mov    -0x14(%ebp),%eax
08ac1314 +0x0cf3:  shl    $0x3,%eax
08ac1317 +0x0cf6:  mov    %eax,%edx
08ac1319 +0x0cf8:  add    -0x10(%ebp),%edx
08ac131c +0x0cfb:  mov    0x8(%ebp),%eax
08ac131f +0x0cfe:  mov    %edx,0x4(%esp)
08ac1323 +0x0d02:  mov    %eax,(%esp)
08ac1326 +0x0d05:  call   08ac188a <+0x1269>
08ac132b +0x0d0a:  jmp    08ac134e <+0xd2d>
08ac132d +0x0d0c:  mov    0x8(%ebp),%eax
08ac1330 +0x0d0f:  mov    %eax,(%esp)
08ac1333 +0x0d12:  call   08ac0a96 <+0x475>
08ac1338 +0x0d17:  mov    %eax,0x8(%esp)
08ac133c +0x0d1b:  mov    -0xc(%ebp),%eax
08ac133f +0x0d1e:  mov    %eax,0x4(%esp)
08ac1343 +0x0d22:  mov    -0x10(%ebp),%eax
08ac1346 +0x0d25:  mov    %eax,(%esp)
08ac1349 +0x0d28:  call   08ac0a9e <+0x47d>
08ac134e +0x0d2d:  mov    0x8(%ebp),%eax
08ac1351 +0x0d30:  mov    -0x18(%ebp),%edx
08ac1354 +0x0d33:  mov    %edx,0x8(%esp)
08ac1358 +0x0d37:  mov    -0x10(%ebp),%edx
08ac135b +0x0d3a:  mov    %edx,0x4(%esp)
08ac135f +0x0d3e:  mov    %eax,(%esp)
08ac1362 +0x0d41:  call   08ac1004 <+0x9e3>
08ac1367 +0x0d46:  call   08724be0 <__cxa_rethrow>
08ac136c +0x0d4b:  mov    %edx,%ebx
08ac136e +0x0d4d:  mov    %eax,%esi
08ac1370 +0x0d4f:  call   08725c30 <__cxa_end_catch>
08ac1375 +0x0d54:  mov    %esi,%eax
08ac1377 +0x0d56:  mov    %ebx,%edx
08ac1379 +0x0d58:  mov    %eax,(%esp)
08ac137c +0x0d5b:  call   08ae3750 <_Unwind_Resume>
08ac1381 +0x0d60:  lea    -0x8(%ebp),%esp
08ac1384 +0x0d63:  add    $0x0,%esp
08ac1387 +0x0d66:  pop    %ebx
08ac1388 +0x0d67:  pop    %esi
08ac1389 +0x0d68:  pop    %ebp
08ac138a +0x0d69:  ret
08ac138b +0x0d6a:  nop
08ac138c +0x0d6b:  push   %ebp
08ac138d +0x0d6c:  mov    %esp,%ebp
08ac138f +0x0d6e:  mov    0x8(%ebp),%eax
08ac1392 +0x0d71:  add    $0x4,%eax
08ac1395 +0x0d74:  pop    %ebp
08ac1396 +0x0d75:  ret
08ac1397 +0x0d76:  nop
08ac1398 +0x0d77:  push   %ebp
08ac1399 +0x0d78:  mov    %esp,%ebp
08ac139b +0x0d7a:  push   %ebx
08ac139c +0x0d7b:  sub    $0x14,%esp
08ac139f +0x0d7e:  mov    0x8(%ebp),%ebx
08ac13a2 +0x0d81:  jmp    08ac13f0 <+0xdcf>
08ac13a4 +0x0d83:  mov    0x10(%ebp),%eax
08ac13a7 +0x0d86:  mov    %eax,(%esp)
08ac13aa +0x0d89:  call   08ac1468 <+0xe47>
08ac13af +0x0d8e:  mov    0xc(%ebp),%edx
08ac13b2 +0x0d91:  mov    0x18(%ebp),%ecx
08ac13b5 +0x0d94:  mov    %ecx,0x8(%esp)
08ac13b9 +0x0d98:  mov    %eax,0x4(%esp)
08ac13bd +0x0d9c:  mov    %edx,(%esp)
08ac13c0 +0x0d9f:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
08ac13c5 +0x0da4:  xor    $0x1,%eax
08ac13c8 +0x0da7:  test   %al,%al
08ac13ca +0x0da9:  je     08ac13e2 <+0xdc1>
08ac13cc +0x0dab:  mov    0x10(%ebp),%eax
08ac13cf +0x0dae:  mov    %eax,0x14(%ebp)
08ac13d2 +0x0db1:  mov    0x10(%ebp),%eax
08ac13d5 +0x0db4:  mov    %eax,(%esp)
08ac13d8 +0x0db7:  call   08ac0f80 <+0x95f>
08ac13dd +0x0dbc:  mov    %eax,0x10(%ebp)
08ac13e0 +0x0dbf:  jmp    08ac13f0 <+0xdcf>
08ac13e2 +0x0dc1:  mov    0x10(%ebp),%eax
08ac13e5 +0x0dc4:  mov    %eax,(%esp)
08ac13e8 +0x0dc7:  call   08ac0f75 <+0x954>
08ac13ed +0x0dcc:  mov    %eax,0x10(%ebp)
08ac13f0 +0x0dcf:  cmpl   $0x0,0x10(%ebp)
08ac13f4 +0x0dd3:  setne  %al
08ac13f7 +0x0dd6:  test   %al,%al
08ac13f9 +0x0dd8:  jne    08ac13a4 <+0xd83>
08ac13fb +0x0dda:  mov    0x14(%ebp),%eax
08ac13fe +0x0ddd:  mov    %eax,0x4(%esp)
08ac1402 +0x0de1:  mov    %ebx,(%esp)
08ac1405 +0x0de4:  call   08ac144a <+0xe29>
08ac140a +0x0de9:  mov    %ebx,%eax
08ac140c +0x0deb:  add    $0x14,%esp
08ac140f +0x0dee:  pop    %ebx
08ac1410 +0x0def:  pop    %ebp
08ac1411 +0x0df0:  ret    $0x4
08ac1414 +0x0df3:  push   %ebp
08ac1415 +0x0df4:  mov    %esp,%ebp
08ac1417 +0x0df6:  sub    $0x28,%esp
08ac141a +0x0df9:  mov    0x8(%ebp),%eax
08ac141d +0x0dfc:  mov    %eax,(%esp)
08ac1420 +0x0dff:  call   08ac189d <+0x127c>
08ac1425 +0x0e04:  mov    %eax,0x4(%esp)
08ac1429 +0x0e08:  lea    -0x9(%ebp),%eax
08ac142c +0x0e0b:  mov    %eax,(%esp)
08ac142f +0x0e0e:  call   08ac1460 <+0xe3f>
08ac1434 +0x0e13:  leave
08ac1435 +0x0e14:  ret
08ac1436 +0x0e15:  push   %ebp
08ac1437 +0x0e16:  mov    %esp,%ebp
08ac1439 +0x0e18:  mov    0x8(%ebp),%eax
08ac143c +0x0e1b:  mov    (%eax),%edx
08ac143e +0x0e1d:  mov    0xc(%ebp),%eax
08ac1441 +0x0e20:  mov    (%eax),%eax
08ac1443 +0x0e22:  cmp    %eax,%edx
08ac1445 +0x0e24:  sete   %al
08ac1448 +0x0e27:  pop    %ebp
08ac1449 +0x0e28:  ret
08ac144a +0x0e29:  push   %ebp
08ac144b +0x0e2a:  mov    %esp,%ebp
08ac144d +0x0e2c:  mov    0xc(%ebp),%edx
08ac1450 +0x0e2f:  mov    0x8(%ebp),%eax
08ac1453 +0x0e32:  mov    %edx,(%eax)
08ac1455 +0x0e34:  pop    %ebp
08ac1456 +0x0e35:  ret
08ac1457 +0x0e36:  push   %ebp
08ac1458 +0x0e37:  mov    %esp,%ebp
08ac145a +0x0e39:  mov    0x8(%ebp),%eax
08ac145d +0x0e3c:  pop    %ebp
08ac145e +0x0e3d:  ret
08ac145f +0x0e3e:  nop
08ac1460 +0x0e3f:  push   %ebp
08ac1461 +0x0e40:  mov    %esp,%ebp
08ac1463 +0x0e42:  mov    0xc(%ebp),%eax
08ac1466 +0x0e45:  pop    %ebp
08ac1467 +0x0e46:  ret
08ac1468 +0x0e47:  push   %ebp
08ac1469 +0x0e48:  mov    %esp,%ebp
08ac146b +0x0e4a:  sub    $0x28,%esp
08ac146e +0x0e4d:  mov    0x8(%ebp),%eax
08ac1471 +0x0e50:  mov    %eax,(%esp)
08ac1474 +0x0e53:  call   08ac18a8 <+0x1287>
08ac1479 +0x0e58:  mov    %eax,0x4(%esp)
08ac147d +0x0e5c:  lea    -0x9(%ebp),%eax
08ac1480 +0x0e5f:  mov    %eax,(%esp)
08ac1483 +0x0e62:  call   08ac1460 <+0xe3f>
08ac1488 +0x0e67:  leave
08ac1489 +0x0e68:  ret
08ac148a +0x0e69:  push   %ebp
08ac148b +0x0e6a:  mov    %esp,%ebp
08ac148d +0x0e6c:  push   %esi
08ac148e +0x0e6d:  push   %ebx
08ac148f +0x0e6e:  sub    $0x20,%esp
08ac1492 +0x0e71:  mov    0x8(%ebp),%esi
08ac1495 +0x0e74:  cmpl   $0x0,0x10(%ebp)
08ac1499 +0x0e78:  jne    08ac14e1 <+0xec0>
08ac149b +0x0e7a:  mov    0xc(%ebp),%eax
08ac149e +0x0e7d:  mov    %eax,(%esp)
08ac14a1 +0x0e80:  call   08ac138c <+0xd6b>
08ac14a6 +0x0e85:  cmp    0x14(%ebp),%eax
08ac14a9 +0x0e88:  je     08ac14e1 <+0xec0>
08ac14ab +0x0e8a:  mov    0x14(%ebp),%eax
08ac14ae +0x0e8d:  mov    %eax,(%esp)
08ac14b1 +0x0e90:  call   08ac1414 <+0xdf3>
08ac14b6 +0x0e95:  mov    %eax,%ebx
08ac14b8 +0x0e97:  mov    0x18(%ebp),%eax
08ac14bb +0x0e9a:  mov    %eax,0x4(%esp)
08ac14bf +0x0e9e:  lea    -0xe(%ebp),%eax
08ac14c2 +0x0ea1:  mov    %eax,(%esp)
08ac14c5 +0x0ea4:  call   08ac1460 <+0xe3f>
08ac14ca +0x0ea9:  mov    0xc(%ebp),%edx
08ac14cd +0x0eac:  mov    %ebx,0x8(%esp)
08ac14d1 +0x0eb0:  mov    %eax,0x4(%esp)
08ac14d5 +0x0eb4:  mov    %edx,(%esp)
08ac14d8 +0x0eb7:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
08ac14dd +0x0ebc:  test   %al,%al
08ac14df +0x0ebe:  je     08ac14e8 <+0xec7>
08ac14e1 +0x0ec0:  mov    $0x1,%eax
08ac14e6 +0x0ec5:  jmp    08ac14ed <+0xecc>
08ac14e8 +0x0ec7:  mov    $0x0,%eax
08ac14ed +0x0ecc:  mov    %al,-0xd(%ebp)
08ac14f0 +0x0ecf:  mov    0x18(%ebp),%eax
08ac14f3 +0x0ed2:  mov    %eax,0x4(%esp)
08ac14f7 +0x0ed6:  mov    0xc(%ebp),%eax
08ac14fa +0x0ed9:  mov    %eax,(%esp)
08ac14fd +0x0edc:  call   08ac18b4 <+0x1293>
08ac1502 +0x0ee1:  mov    %eax,-0xc(%ebp)
08ac1505 +0x0ee4:  mov    0xc(%ebp),%eax
08ac1508 +0x0ee7:  lea    0x4(%eax),%ecx
08ac150b +0x0eea:  mov    -0xc(%ebp),%edx
08ac150e +0x0eed:  movzbl -0xd(%ebp),%eax
08ac1512 +0x0ef1:  mov    %ecx,0xc(%esp)
08ac1516 +0x0ef5:  mov    0x14(%ebp),%ecx
08ac1519 +0x0ef8:  mov    %ecx,0x8(%esp)
08ac151d +0x0efc:  mov    %edx,0x4(%esp)
08ac1521 +0x0f00:  mov    %eax,(%esp)
08ac1524 +0x0f03:  call   086df9d0 <_ZSt29_Rb_tree_insert_and_rebalancebPSt18_Rb_tree_node_baseS0_RS_>  ; std::_Rb_tree_insert_and_rebalance(bool, std::_Rb_tree_node_base*, std::_Rb_tree_node_base*, std::_Rb_tree_node_base&)
08ac1529 +0x0f08:  mov    0xc(%ebp),%eax
08ac152c +0x0f0b:  mov    0x14(%eax),%eax
08ac152f +0x0f0e:  lea    0x1(%eax),%edx
08ac1532 +0x0f11:  mov    0xc(%ebp),%eax
08ac1535 +0x0f14:  mov    %edx,0x14(%eax)
08ac1538 +0x0f17:  mov    -0xc(%ebp),%eax
08ac153b +0x0f1a:  mov    %eax,0x4(%esp)
08ac153f +0x0f1e:  mov    %esi,(%esp)
08ac1542 +0x0f21:  call   08ac144a <+0xe29>
08ac1547 +0x0f26:  mov    %esi,%eax
08ac1549 +0x0f28:  add    $0x20,%esp
08ac154c +0x0f2b:  pop    %ebx
08ac154d +0x0f2c:  pop    %esi
08ac154e +0x0f2d:  pop    %ebp
08ac154f +0x0f2e:  ret    $0x4
08ac1552 +0x0f31:  push   %ebp
08ac1553 +0x0f32:  mov    %esp,%ebp
08ac1555 +0x0f34:  sub    $0x18,%esp
08ac1558 +0x0f37:  mov    0xc(%ebp),%eax
08ac155b +0x0f3a:  mov    %eax,(%esp)
08ac155e +0x0f3d:  call   08ac1935 <+0x1314>
08ac1563 +0x0f42:  mov    0x8(%ebp),%edx
08ac1566 +0x0f45:  mov    (%eax),%eax
08ac1568 +0x0f47:  mov    %eax,(%edx)
08ac156a +0x0f49:  mov    0x10(%ebp),%eax
08ac156d +0x0f4c:  mov    %eax,(%esp)
08ac1570 +0x0f4f:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
08ac1575 +0x0f54:  movzbl (%eax),%edx
08ac1578 +0x0f57:  mov    0x8(%ebp),%eax
08ac157b +0x0f5a:  mov    %dl,0x4(%eax)
08ac157e +0x0f5d:  leave
08ac157f +0x0f5e:  ret
08ac1580 +0x0f5f:  push   %ebp
08ac1581 +0x0f60:  mov    %esp,%ebp
08ac1583 +0x0f62:  sub    $0x18,%esp
08ac1586 +0x0f65:  mov    0x8(%ebp),%eax
08ac1589 +0x0f68:  mov    (%eax),%eax
08ac158b +0x0f6a:  mov    %eax,(%esp)
08ac158e +0x0f6d:  call   086df890 <_ZSt18_Rb_tree_decrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_decrement(std::_Rb_tree_node_base*)
08ac1593 +0x0f72:  mov    0x8(%ebp),%edx
08ac1596 +0x0f75:  mov    %eax,(%edx)
08ac1598 +0x0f77:  mov    0x8(%ebp),%eax
08ac159b +0x0f7a:  leave
08ac159c +0x0f7b:  ret
08ac159d +0x0f7c:  nop
08ac159e +0x0f7d:  push   %ebp
08ac159f +0x0f7e:  mov    %esp,%ebp
08ac15a1 +0x0f80:  sub    $0x18,%esp
08ac15a4 +0x0f83:  mov    0xc(%ebp),%eax
08ac15a7 +0x0f86:  mov    %eax,(%esp)
08ac15aa +0x0f89:  call   08ac193d <+0x131c>
08ac15af +0x0f8e:  mov    0x8(%ebp),%edx
08ac15b2 +0x0f91:  mov    (%eax),%eax
08ac15b4 +0x0f93:  mov    %eax,(%edx)
08ac15b6 +0x0f95:  mov    0x10(%ebp),%eax
08ac15b9 +0x0f98:  mov    %eax,(%esp)
08ac15bc +0x0f9b:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
08ac15c1 +0x0fa0:  movzbl (%eax),%edx
08ac15c4 +0x0fa3:  mov    0x8(%ebp),%eax
08ac15c7 +0x0fa6:  mov    %dl,0x4(%eax)
08ac15ca +0x0fa9:  leave
08ac15cb +0x0faa:  ret
08ac15cc +0x0fab:  push   %ebp
08ac15cd +0x0fac:  mov    %esp,%ebp
08ac15cf +0x0fae:  mov    0x8(%ebp),%eax
08ac15d2 +0x0fb1:  add    $0xc,%eax
08ac15d5 +0x0fb4:  pop    %ebp
08ac15d6 +0x0fb5:  ret
08ac15d7 +0x0fb6:  nop
08ac15d8 +0x0fb7:  push   %ebp
08ac15d9 +0x0fb8:  mov    %esp,%ebp
08ac15db +0x0fba:  mov    0x8(%ebp),%eax
08ac15de +0x0fbd:  add    $0x8,%eax
08ac15e1 +0x0fc0:  pop    %ebp
08ac15e2 +0x0fc1:  ret
08ac15e3 +0x0fc2:  nop
08ac15e4 +0x0fc3:  push   %ebp
08ac15e5 +0x0fc4:  mov    %esp,%ebp
08ac15e7 +0x0fc6:  mov    0x8(%ebp),%eax
08ac15ea +0x0fc9:  add    $0x10,%eax
08ac15ed +0x0fcc:  pop    %ebp
08ac15ee +0x0fcd:  ret
08ac15ef +0x0fce:  nop
08ac15f0 +0x0fcf:  push   %ebp
08ac15f1 +0x0fd0:  mov    %esp,%ebp
08ac15f3 +0x0fd2:  sub    $0x18,%esp
08ac15f6 +0x0fd5:  mov    0x8(%ebp),%eax
08ac15f9 +0x0fd8:  mov    %eax,(%esp)
08ac15fc +0x0fdb:  call   08ac1946 <+0x1325>
08ac1601 +0x0fe0:  leave
08ac1602 +0x0fe1:  ret
08ac1603 +0x0fe2:  nop
08ac1604 +0x0fe3:  push   %ebp
08ac1605 +0x0fe4:  mov    %esp,%ebp
08ac1607 +0x0fe6:  mov    0x8(%ebp),%eax
08ac160a +0x0fe9:  movl   $0x0,0x4(%eax)
08ac1611 +0x0ff0:  mov    0x8(%ebp),%eax
08ac1614 +0x0ff3:  movl   $0x0,0x8(%eax)
08ac161b +0x0ffa:  mov    0x8(%ebp),%eax
08ac161e +0x0ffd:  lea    0x4(%eax),%edx
08ac1621 +0x1000:  mov    0x8(%ebp),%eax
08ac1624 +0x1003:  mov    %edx,0xc(%eax)
08ac1627 +0x1006:  mov    0x8(%ebp),%eax
08ac162a +0x1009:  lea    0x4(%eax),%edx
08ac162d +0x100c:  mov    0x8(%ebp),%eax
08ac1630 +0x100f:  mov    %edx,0x10(%eax)
08ac1633 +0x1012:  pop    %ebp
08ac1634 +0x1013:  ret
08ac1635 +0x1014:  nop
08ac1636 +0x1015:  push   %ebp
08ac1637 +0x1016:  mov    %esp,%ebp
08ac1639 +0x1018:  mov    0x8(%ebp),%eax
08ac163c +0x101b:  pop    %ebp
08ac163d +0x101c:  ret
08ac163e +0x101d:  push   %ebp
08ac163f +0x101e:  mov    %esp,%ebp
08ac1641 +0x1020:  pop    %ebp
08ac1642 +0x1021:  ret
08ac1643 +0x1022:  nop
08ac1644 +0x1023:  push   %ebp
08ac1645 +0x1024:  mov    %esp,%ebp
08ac1647 +0x1026:  sub    $0x18,%esp
08ac164a +0x1029:  mov    0xc(%ebp),%eax
08ac164d +0x102c:  mov    %eax,(%esp)
08ac1650 +0x102f:  call   08ac163e <+0x101d>
08ac1655 +0x1034:  leave
08ac1656 +0x1035:  ret
08ac1657 +0x1036:  nop
08ac1658 +0x1037:  push   %ebp
08ac1659 +0x1038:  mov    %esp,%ebp
08ac165b +0x103a:  sub    $0x18,%esp
08ac165e +0x103d:  mov    0x8(%ebp),%eax
08ac1661 +0x1040:  movl   $0x1,0x8(%esp)
08ac1669 +0x1048:  mov    0xc(%ebp),%edx
08ac166c +0x104b:  mov    %edx,0x4(%esp)
08ac1670 +0x104f:  mov    %eax,(%esp)
08ac1673 +0x1052:  call   08ac194c <+0x132b>
08ac1678 +0x1057:  leave
08ac1679 +0x1058:  ret
08ac167a +0x1059:  push   %ebp
08ac167b +0x105a:  mov    %esp,%ebp
08ac167d +0x105c:  sub    $0x18,%esp
08ac1680 +0x105f:  mov    0x8(%ebp),%eax
08ac1683 +0x1062:  mov    %eax,(%esp)
08ac1686 +0x1065:  call   08ac1960 <+0x133f>
08ac168b +0x106a:  leave
08ac168c +0x106b:  ret
08ac168d +0x106c:  nop
08ac168e +0x106d:  push   %ebp
08ac168f +0x106e:  mov    %esp,%ebp
08ac1691 +0x1070:  pop    %ebp
08ac1692 +0x1071:  ret
08ac1693 +0x1072:  nop
08ac1694 +0x1073:  push   %ebp
08ac1695 +0x1074:  mov    %esp,%ebp
08ac1697 +0x1076:  sub    $0x18,%esp
08ac169a +0x1079:  mov    0xc(%ebp),%eax
08ac169d +0x107c:  mov    %eax,(%esp)
08ac16a0 +0x107f:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08ac16a5 +0x1084:  leave
08ac16a6 +0x1085:  ret
08ac16a7 +0x1086:  push   %ebp
08ac16a8 +0x1087:  mov    %esp,%ebp
08ac16aa +0x1089:  pop    %ebp
08ac16ab +0x108a:  ret
08ac16ac +0x108b:  push   %ebp
08ac16ad +0x108c:  mov    %esp,%ebp
08ac16af +0x108e:  mov    0xc(%ebp),%eax
08ac16b2 +0x1091:  mov    (%eax),%edx
08ac16b4 +0x1093:  mov    0x8(%ebp),%eax
08ac16b7 +0x1096:  mov    %edx,(%eax)
08ac16b9 +0x1098:  pop    %ebp
08ac16ba +0x1099:  ret
08ac16bb +0x109a:  nop
08ac16bc +0x109b:  push   %ebp
08ac16bd +0x109c:  mov    %esp,%ebp
08ac16bf +0x109e:  mov    0x8(%ebp),%eax
08ac16c2 +0x10a1:  pop    %ebp
08ac16c3 +0x10a2:  ret
08ac16c4 +0x10a3:  push   %ebp
08ac16c5 +0x10a4:  mov    %esp,%ebp
08ac16c7 +0x10a6:  push   %ebx
08ac16c8 +0x10a7:  sub    $0x14,%esp
08ac16cb +0x10aa:  mov    0xc(%ebp),%eax
08ac16ce +0x10ad:  mov    %eax,(%esp)
08ac16d1 +0x10b0:  call   08ac1965 <+0x1344>
08ac16d6 +0x10b5:  mov    %eax,%ebx
08ac16d8 +0x10b7:  mov    0x8(%ebp),%eax
08ac16db +0x10ba:  mov    %eax,(%esp)
08ac16de +0x10bd:  call   08ac1965 <+0x1344>
08ac16e3 +0x10c2:  mov    0x10(%ebp),%edx
08ac16e6 +0x10c5:  mov    %edx,0x8(%esp)
08ac16ea +0x10c9:  mov    %ebx,0x4(%esp)
08ac16ee +0x10cd:  mov    %eax,(%esp)
08ac16f1 +0x10d0:  call   08ac196d <+0x134c>
08ac16f6 +0x10d5:  add    $0x14,%esp
08ac16f9 +0x10d8:  pop    %ebx
08ac16fa +0x10d9:  pop    %ebp
08ac16fb +0x10da:  ret
08ac16fc +0x10db:  push   %ebp
08ac16fd +0x10dc:  mov    %esp,%ebp
08ac16ff +0x10de:  mov    0x8(%ebp),%eax
08ac1702 +0x10e1:  mov    (%eax),%eax
08ac1704 +0x10e3:  pop    %ebp
08ac1705 +0x10e4:  ret
08ac1706 +0x10e5:  push   %ebp
08ac1707 +0x10e6:  mov    %esp,%ebp
08ac1709 +0x10e8:  push   %ebx
08ac170a +0x10e9:  sub    $0x24,%esp
08ac170d +0x10ec:  mov    0x8(%ebp),%eax
08ac1710 +0x10ef:  mov    %eax,(%esp)
08ac1713 +0x10f2:  call   08ac19b2 <+0x1391>
08ac1718 +0x10f7:  mov    %eax,%ebx
08ac171a +0x10f9:  mov    0x8(%ebp),%eax
08ac171d +0x10fc:  mov    %eax,(%esp)
08ac1720 +0x10ff:  call   08ac08f6 <+0x2d5>
08ac1725 +0x1104:  mov    %ebx,%edx
08ac1727 +0x1106:  sub    %eax,%edx
08ac1729 +0x1108:  mov    0xc(%ebp),%eax
08ac172c +0x110b:  cmp    %eax,%edx
08ac172e +0x110d:  setb   %al
08ac1731 +0x1110:  test   %al,%al
08ac1733 +0x1112:  je     08ac1740 <+0x111f>
08ac1735 +0x1114:  mov    0x10(%ebp),%eax
08ac1738 +0x1117:  mov    %eax,(%esp)
08ac173b +0x111a:  call   086d9c40 <_ZSt20__throw_length_errorPKc>  ; std::__throw_length_error(char const*)
08ac1740 +0x111f:  mov    0x8(%ebp),%eax
08ac1743 +0x1122:  mov    %eax,(%esp)
08ac1746 +0x1125:  call   08ac08f6 <+0x2d5>
08ac174b +0x112a:  mov    %eax,%ebx
08ac174d +0x112c:  mov    0x8(%ebp),%eax
08ac1750 +0x112f:  mov    %eax,(%esp)
08ac1753 +0x1132:  call   08ac08f6 <+0x2d5>
08ac1758 +0x1137:  mov    %eax,-0x10(%ebp)
08ac175b +0x113a:  lea    0xc(%ebp),%eax
08ac175e +0x113d:  mov    %eax,0x4(%esp)
08ac1762 +0x1141:  lea    -0x10(%ebp),%eax
08ac1765 +0x1144:  mov    %eax,(%esp)
08ac1768 +0x1147:  call   0807f531 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x601>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x601
08ac176d +0x114c:  mov    (%eax),%eax
08ac176f +0x114e:  lea    (%ebx,%eax,1),%eax
08ac1772 +0x1151:  mov    %eax,-0xc(%ebp)
08ac1775 +0x1154:  mov    0x8(%ebp),%eax
08ac1778 +0x1157:  mov    %eax,(%esp)
08ac177b +0x115a:  call   08ac08f6 <+0x2d5>
08ac1780 +0x115f:  cmp    -0xc(%ebp),%eax
08ac1783 +0x1162:  ja     08ac1795 <+0x1174>
08ac1785 +0x1164:  mov    0x8(%ebp),%eax
08ac1788 +0x1167:  mov    %eax,(%esp)
08ac178b +0x116a:  call   08ac19b2 <+0x1391>
08ac1790 +0x116f:  cmp    -0xc(%ebp),%eax
08ac1793 +0x1172:  jae    08ac17a2 <+0x1181>
08ac1795 +0x1174:  mov    0x8(%ebp),%eax
08ac1798 +0x1177:  mov    %eax,(%esp)
08ac179b +0x117a:  call   08ac19b2 <+0x1391>
08ac17a0 +0x117f:  jmp    08ac17a5 <+0x1184>
08ac17a2 +0x1181:  mov    -0xc(%ebp),%eax
08ac17a5 +0x1184:  add    $0x24,%esp
08ac17a8 +0x1187:  pop    %ebx
08ac17a9 +0x1188:  pop    %ebp
08ac17aa +0x1189:  ret
08ac17ab +0x118a:  nop
08ac17ac +0x118b:  push   %ebp
08ac17ad +0x118c:  mov    %esp,%ebp
08ac17af +0x118e:  push   %ebx
08ac17b0 +0x118f:  sub    $0x14,%esp
08ac17b3 +0x1192:  mov    0x8(%ebp),%ebx
08ac17b6 +0x1195:  mov    0xc(%ebp),%eax
08ac17b9 +0x1198:  mov    %eax,0x4(%esp)
08ac17bd +0x119c:  mov    %ebx,(%esp)
08ac17c0 +0x119f:  call   08ac16ac <+0x108b>
08ac17c5 +0x11a4:  mov    %ebx,%eax
08ac17c7 +0x11a6:  add    $0x14,%esp
08ac17ca +0x11a9:  pop    %ebx
08ac17cb +0x11aa:  pop    %ebp
08ac17cc +0x11ab:  ret    $0x4
08ac17cf +0x11ae:  push   %ebp
08ac17d0 +0x11af:  mov    %esp,%ebp
08ac17d2 +0x11b1:  push   %ebx
08ac17d3 +0x11b2:  sub    $0x14,%esp
08ac17d6 +0x11b5:  mov    0x8(%ebp),%eax
08ac17d9 +0x11b8:  mov    %eax,(%esp)
08ac17dc +0x11bb:  call   08ac16bc <+0x109b>
08ac17e1 +0x11c0:  mov    (%eax),%eax
08ac17e3 +0x11c2:  mov    %eax,%ebx
08ac17e5 +0x11c4:  mov    0xc(%ebp),%eax
08ac17e8 +0x11c7:  mov    %eax,(%esp)
08ac17eb +0x11ca:  call   08ac16bc <+0x109b>
08ac17f0 +0x11cf:  mov    (%eax),%eax
08ac17f2 +0x11d1:  mov    %ebx,%edx
08ac17f4 +0x11d3:  sub    %eax,%edx
08ac17f6 +0x11d5:  mov    %edx,%eax
08ac17f8 +0x11d7:  sar    $0x3,%eax
08ac17fb +0x11da:  add    $0x14,%esp
08ac17fe +0x11dd:  pop    %ebx
08ac17ff +0x11de:  pop    %ebp
08ac1800 +0x11df:  ret
08ac1801 +0x11e0:  nop
08ac1802 +0x11e1:  push   %ebp
08ac1803 +0x11e2:  mov    %esp,%ebp
08ac1805 +0x11e4:  sub    $0x18,%esp
08ac1808 +0x11e7:  cmpl   $0x0,0xc(%ebp)
08ac180c +0x11eb:  je     08ac182a <+0x1209>
08ac180e +0x11ed:  mov    0x8(%ebp),%eax
08ac1811 +0x11f0:  movl   $0x0,0x8(%esp)
08ac1819 +0x11f8:  mov    0xc(%ebp),%edx
08ac181c +0x11fb:  mov    %edx,0x4(%esp)
08ac1820 +0x11ff:  mov    %eax,(%esp)
08ac1823 +0x1202:  call   08ac19ce <+0x13ad>
08ac1828 +0x1207:  jmp    08ac182f <+0x120e>
08ac182a +0x1209:  mov    $0x0,%eax
08ac182f +0x120e:  leave
08ac1830 +0x120f:  ret
08ac1831 +0x1210:  push   %ebp
08ac1832 +0x1211:  mov    %esp,%ebp
08ac1834 +0x1213:  sub    $0x28,%esp
08ac1837 +0x1216:  lea    -0x10(%ebp),%eax
08ac183a +0x1219:  lea    0xc(%ebp),%edx
08ac183d +0x121c:  mov    %edx,0x4(%esp)
08ac1841 +0x1220:  mov    %eax,(%esp)
08ac1844 +0x1223:  call   08ac1a06 <+0x13e5>
08ac1849 +0x1228:  sub    $0x4,%esp
08ac184c +0x122b:  lea    -0xc(%ebp),%eax
08ac184f +0x122e:  lea    0x8(%ebp),%edx
08ac1852 +0x1231:  mov    %edx,0x4(%esp)
08ac1856 +0x1235:  mov    %eax,(%esp)
08ac1859 +0x1238:  call   08ac1a06 <+0x13e5>
08ac185e +0x123d:  sub    $0x4,%esp
08ac1861 +0x1240:  mov    0x14(%ebp),%eax
08ac1864 +0x1243:  mov    %eax,0xc(%esp)
08ac1868 +0x1247:  mov    0x10(%ebp),%eax
08ac186b +0x124a:  mov    %eax,0x8(%esp)
08ac186f +0x124e:  mov    -0x10(%ebp),%eax
08ac1872 +0x1251:  mov    %eax,0x4(%esp)
08ac1876 +0x1255:  mov    -0xc(%ebp),%eax
08ac1879 +0x1258:  mov    %eax,(%esp)
08ac187c +0x125b:  call   08ac1a2b <+0x140a>
08ac1881 +0x1260:  leave
08ac1882 +0x1261:  ret
08ac1883 +0x1262:  nop
08ac1884 +0x1263:  push   %ebp
08ac1885 +0x1264:  mov    %esp,%ebp
08ac1887 +0x1266:  pop    %ebp
08ac1888 +0x1267:  ret
08ac1889 +0x1268:  nop
08ac188a +0x1269:  push   %ebp
08ac188b +0x126a:  mov    %esp,%ebp
08ac188d +0x126c:  sub    $0x18,%esp
08ac1890 +0x126f:  mov    0xc(%ebp),%eax
08ac1893 +0x1272:  mov    %eax,(%esp)
08ac1896 +0x1275:  call   08ac1884 <+0x1263>
08ac189b +0x127a:  leave
08ac189c +0x127b:  ret
08ac189d +0x127c:  push   %ebp
08ac189e +0x127d:  mov    %esp,%ebp
08ac18a0 +0x127f:  mov    0x8(%ebp),%eax
08ac18a3 +0x1282:  add    $0x10,%eax
08ac18a6 +0x1285:  pop    %ebp
08ac18a7 +0x1286:  ret
08ac18a8 +0x1287:  push   %ebp
08ac18a9 +0x1288:  mov    %esp,%ebp
08ac18ab +0x128a:  mov    0x8(%ebp),%eax
08ac18ae +0x128d:  add    $0x10,%eax
08ac18b1 +0x1290:  pop    %ebp
08ac18b2 +0x1291:  ret
08ac18b3 +0x1292:  nop
08ac18b4 +0x1293:  push   %ebp
08ac18b5 +0x1294:  mov    %esp,%ebp
08ac18b7 +0x1296:  push   %esi
08ac18b8 +0x1297:  push   %ebx
08ac18b9 +0x1298:  sub    $0x20,%esp
08ac18bc +0x129b:  mov    0x8(%ebp),%eax
08ac18bf +0x129e:  mov    %eax,(%esp)
08ac18c2 +0x12a1:  call   08ac1a4c <+0x142b>
08ac18c7 +0x12a6:  mov    %eax,-0xc(%ebp)
08ac18ca +0x12a9:  mov    0xc(%ebp),%eax
08ac18cd +0x12ac:  mov    %eax,(%esp)
08ac18d0 +0x12af:  call   08ac1a6f <+0x144e>
08ac18d5 +0x12b4:  mov    %eax,%ebx
08ac18d7 +0x12b6:  mov    0x8(%ebp),%eax
08ac18da +0x12b9:  mov    %eax,(%esp)
08ac18dd +0x12bc:  call   08ac1636 <+0x1015>
08ac18e2 +0x12c1:  mov    %ebx,0x8(%esp)
08ac18e6 +0x12c5:  mov    -0xc(%ebp),%edx
08ac18e9 +0x12c8:  mov    %edx,0x4(%esp)
08ac18ed +0x12cc:  mov    %eax,(%esp)
08ac18f0 +0x12cf:  call   08ac1a78 <+0x1457>
08ac18f5 +0x12d4:  jmp    08ac192b <+0x130a>
08ac18f7 +0x12d6:  mov    %eax,(%esp)
08ac18fa +0x12d9:  call   08725ce0 <__cxa_begin_catch>
08ac18ff +0x12de:  mov    -0xc(%ebp),%eax
08ac1902 +0x12e1:  mov    %eax,0x4(%esp)
08ac1906 +0x12e5:  mov    0x8(%ebp),%eax
08ac1909 +0x12e8:  mov    %eax,(%esp)
08ac190c +0x12eb:  call   08ac1658 <+0x1037>
08ac1911 +0x12f0:  call   08724be0 <__cxa_rethrow>
08ac1916 +0x12f5:  mov    %edx,%ebx
08ac1918 +0x12f7:  mov    %eax,%esi
08ac191a +0x12f9:  call   08725c30 <__cxa_end_catch>
08ac191f +0x12fe:  mov    %esi,%eax
08ac1921 +0x1300:  mov    %ebx,%edx
08ac1923 +0x1302:  mov    %eax,(%esp)
08ac1926 +0x1305:  call   08ae3750 <_Unwind_Resume>
08ac192b +0x130a:  mov    -0xc(%ebp),%eax
08ac192e +0x130d:  add    $0x20,%esp
08ac1931 +0x1310:  pop    %ebx
08ac1932 +0x1311:  pop    %esi
08ac1933 +0x1312:  pop    %ebp
08ac1934 +0x1313:  ret
08ac1935 +0x1314:  push   %ebp
08ac1936 +0x1315:  mov    %esp,%ebp
08ac1938 +0x1317:  mov    0x8(%ebp),%eax
08ac193b +0x131a:  pop    %ebp
08ac193c +0x131b:  ret
08ac193d +0x131c:  push   %ebp
08ac193e +0x131d:  mov    %esp,%ebp
08ac1940 +0x131f:  mov    0x8(%ebp),%eax
08ac1943 +0x1322:  pop    %ebp
08ac1944 +0x1323:  ret
08ac1945 +0x1324:  nop
08ac1946 +0x1325:  push   %ebp
08ac1947 +0x1326:  mov    %esp,%ebp
08ac1949 +0x1328:  pop    %ebp
08ac194a +0x1329:  ret
08ac194b +0x132a:  nop
08ac194c +0x132b:  push   %ebp
08ac194d +0x132c:  mov    %esp,%ebp
08ac194f +0x132e:  sub    $0x18,%esp
08ac1952 +0x1331:  mov    0xc(%ebp),%eax
08ac1955 +0x1334:  mov    %eax,(%esp)
08ac1958 +0x1337:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08ac195d +0x133c:  leave
08ac195e +0x133d:  ret
08ac195f +0x133e:  nop
08ac1960 +0x133f:  push   %ebp
08ac1961 +0x1340:  mov    %esp,%ebp
08ac1963 +0x1342:  pop    %ebp
08ac1964 +0x1343:  ret
08ac1965 +0x1344:  push   %ebp
08ac1966 +0x1345:  mov    %esp,%ebp
08ac1968 +0x1347:  mov    0x8(%ebp),%eax
08ac196b +0x134a:  pop    %ebp
08ac196c +0x134b:  ret
08ac196d +0x134c:  push   %ebp
08ac196e +0x134d:  mov    %esp,%ebp
08ac1970 +0x134f:  push   %esi
08ac1971 +0x1350:  push   %ebx
08ac1972 +0x1351:  sub    $0x10,%esp
08ac1975 +0x1354:  mov    0x10(%ebp),%eax
08ac1978 +0x1357:  mov    %eax,(%esp)
08ac197b +0x135a:  call   08ac1ab7 <+0x1496>
08ac1980 +0x135f:  mov    %eax,%esi
08ac1982 +0x1361:  mov    0xc(%ebp),%eax
08ac1985 +0x1364:  mov    %eax,(%esp)
08ac1988 +0x1367:  call   08ac1ab7 <+0x1496>
08ac198d +0x136c:  mov    %eax,%ebx
08ac198f +0x136e:  mov    0x8(%ebp),%eax
08ac1992 +0x1371:  mov    %eax,(%esp)
08ac1995 +0x1374:  call   08ac1ab7 <+0x1496>
08ac199a +0x1379:  mov    %esi,0x8(%esp)
08ac199e +0x137d:  mov    %ebx,0x4(%esp)
08ac19a2 +0x1381:  mov    %eax,(%esp)
08ac19a5 +0x1384:  call   08ac1abf <+0x149e>
08ac19aa +0x1389:  add    $0x10,%esp
08ac19ad +0x138c:  pop    %ebx
08ac19ae +0x138d:  pop    %esi
08ac19af +0x138e:  pop    %ebp
08ac19b0 +0x138f:  ret
08ac19b1 +0x1390:  nop
08ac19b2 +0x1391:  push   %ebp
08ac19b3 +0x1392:  mov    %esp,%ebp
08ac19b5 +0x1394:  sub    $0x18,%esp
08ac19b8 +0x1397:  mov    0x8(%ebp),%eax
08ac19bb +0x139a:  mov    %eax,(%esp)
08ac19be +0x139d:  call   08ac1ae4 <+0x14c3>
08ac19c3 +0x13a2:  mov    %eax,(%esp)
08ac19c6 +0x13a5:  call   08ac1aec <+0x14cb>
08ac19cb +0x13aa:  leave
08ac19cc +0x13ab:  ret
08ac19cd +0x13ac:  nop
08ac19ce +0x13ad:  push   %ebp
08ac19cf +0x13ae:  mov    %esp,%ebp
08ac19d1 +0x13b0:  sub    $0x18,%esp
08ac19d4 +0x13b3:  mov    0x8(%ebp),%eax
08ac19d7 +0x13b6:  mov    %eax,(%esp)
08ac19da +0x13b9:  call   08ac1aec <+0x14cb>
08ac19df +0x13be:  cmp    0xc(%ebp),%eax
08ac19e2 +0x13c1:  setb   %al
08ac19e5 +0x13c4:  movzbl %al,%eax
08ac19e8 +0x13c7:  test   %eax,%eax
08ac19ea +0x13c9:  setne  %al
08ac19ed +0x13cc:  test   %al,%al
08ac19ef +0x13ce:  je     08ac19f6 <+0x13d5>
08ac19f1 +0x13d0:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
08ac19f6 +0x13d5:  mov    0xc(%ebp),%eax
08ac19f9 +0x13d8:  shl    $0x3,%eax
08ac19fc +0x13db:  mov    %eax,(%esp)
08ac19ff +0x13de:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08ac1a04 +0x13e3:  leave
08ac1a05 +0x13e4:  ret
08ac1a06 +0x13e5:  push   %ebp
08ac1a07 +0x13e6:  mov    %esp,%ebp
08ac1a09 +0x13e8:  push   %ebx
08ac1a0a +0x13e9:  sub    $0x14,%esp
08ac1a0d +0x13ec:  mov    0x8(%ebp),%ebx
08ac1a10 +0x13ef:  mov    0xc(%ebp),%eax
08ac1a13 +0x13f2:  mov    (%eax),%eax
08ac1a15 +0x13f4:  mov    %eax,0x4(%esp)
08ac1a19 +0x13f8:  mov    %ebx,(%esp)
08ac1a1c +0x13fb:  call   08ac1af6 <+0x14d5>
08ac1a21 +0x1400:  mov    %ebx,%eax
08ac1a23 +0x1402:  add    $0x14,%esp
08ac1a26 +0x1405:  pop    %ebx
08ac1a27 +0x1406:  pop    %ebp
08ac1a28 +0x1407:  ret    $0x4
08ac1a2b +0x140a:  push   %ebp
08ac1a2c +0x140b:  mov    %esp,%ebp
08ac1a2e +0x140d:  sub    $0x18,%esp
08ac1a31 +0x1410:  mov    0x10(%ebp),%eax
08ac1a34 +0x1413:  mov    %eax,0x8(%esp)
08ac1a38 +0x1417:  mov    0xc(%ebp),%eax
08ac1a3b +0x141a:  mov    %eax,0x4(%esp)
08ac1a3f +0x141e:  mov    0x8(%ebp),%eax
08ac1a42 +0x1421:  mov    %eax,(%esp)
08ac1a45 +0x1424:  call   08ac1b03 <+0x14e2>
08ac1a4a +0x1429:  leave
08ac1a4b +0x142a:  ret
08ac1a4c +0x142b:  push   %ebp
08ac1a4d +0x142c:  mov    %esp,%ebp
08ac1a4f +0x142e:  sub    $0x18,%esp
08ac1a52 +0x1431:  mov    0x8(%ebp),%eax
08ac1a55 +0x1434:  movl   $0x0,0x8(%esp)
08ac1a5d +0x143c:  movl   $0x1,0x4(%esp)
08ac1a65 +0x1444:  mov    %eax,(%esp)
08ac1a68 +0x1447:  call   08ac1b24 <+0x1503>
08ac1a6d +0x144c:  leave
08ac1a6e +0x144d:  ret
08ac1a6f +0x144e:  push   %ebp
08ac1a70 +0x144f:  mov    %esp,%ebp
08ac1a72 +0x1451:  mov    0x8(%ebp),%eax
08ac1a75 +0x1454:  pop    %ebp
08ac1a76 +0x1455:  ret
08ac1a77 +0x1456:  nop
08ac1a78 +0x1457:  push   %ebp
08ac1a79 +0x1458:  mov    %esp,%ebp
08ac1a7b +0x145a:  push   %ebx
08ac1a7c +0x145b:  sub    $0x14,%esp
08ac1a7f +0x145e:  mov    0x10(%ebp),%eax
08ac1a82 +0x1461:  mov    %eax,(%esp)
08ac1a85 +0x1464:  call   08ac1a6f <+0x144e>
08ac1a8a +0x1469:  mov    %eax,%ebx
08ac1a8c +0x146b:  mov    0xc(%ebp),%eax
08ac1a8f +0x146e:  mov    %eax,0x4(%esp)
08ac1a93 +0x1472:  movl   $0x18,(%esp)
08ac1a9a +0x1479:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
08ac1a9f +0x147e:  mov    %eax,%edx
08ac1aa1 +0x1480:  test   %edx,%edx
08ac1aa3 +0x1482:  je     08ac1ab1 <+0x1490>
08ac1aa5 +0x1484:  mov    %ebx,0x4(%esp)
08ac1aa9 +0x1488:  mov    %eax,(%esp)
08ac1aac +0x148b:  call   08ac1b62 <+0x1541>
08ac1ab1 +0x1490:  add    $0x14,%esp
08ac1ab4 +0x1493:  pop    %ebx
08ac1ab5 +0x1494:  pop    %ebp
08ac1ab6 +0x1495:  ret
08ac1ab7 +0x1496:  push   %ebp
08ac1ab8 +0x1497:  mov    %esp,%ebp
08ac1aba +0x1499:  mov    0x8(%ebp),%eax
08ac1abd +0x149c:  pop    %ebp
08ac1abe +0x149d:  ret
08ac1abf +0x149e:  push   %ebp
08ac1ac0 +0x149f:  mov    %esp,%ebp
08ac1ac2 +0x14a1:  sub    $0x28,%esp
08ac1ac5 +0x14a4:  movb   $0x0,-0x9(%ebp)
08ac1ac9 +0x14a8:  mov    0x10(%ebp),%eax
08ac1acc +0x14ab:  mov    %eax,0x8(%esp)
08ac1ad0 +0x14af:  mov    0xc(%ebp),%eax
08ac1ad3 +0x14b2:  mov    %eax,0x4(%esp)
08ac1ad7 +0x14b6:  mov    0x8(%ebp),%eax
08ac1ada +0x14b9:  mov    %eax,(%esp)
08ac1add +0x14bc:  call   08ac1baa <+0x1589>
08ac1ae2 +0x14c1:  leave
08ac1ae3 +0x14c2:  ret
08ac1ae4 +0x14c3:  push   %ebp
08ac1ae5 +0x14c4:  mov    %esp,%ebp
08ac1ae7 +0x14c6:  mov    0x8(%ebp),%eax
08ac1aea +0x14c9:  pop    %ebp
08ac1aeb +0x14ca:  ret
08ac1aec +0x14cb:  push   %ebp
08ac1aed +0x14cc:  mov    %esp,%ebp
08ac1aef +0x14ce:  mov    $0x1fffffff,%eax
08ac1af4 +0x14d3:  pop    %ebp
08ac1af5 +0x14d4:  ret
08ac1af6 +0x14d5:  push   %ebp
08ac1af7 +0x14d6:  mov    %esp,%ebp
08ac1af9 +0x14d8:  mov    0x8(%ebp),%eax
08ac1afc +0x14db:  mov    0xc(%ebp),%edx
08ac1aff +0x14de:  mov    %edx,(%eax)
08ac1b01 +0x14e0:  pop    %ebp
08ac1b02 +0x14e1:  ret
08ac1b03 +0x14e2:  push   %ebp
08ac1b04 +0x14e3:  mov    %esp,%ebp
08ac1b06 +0x14e5:  sub    $0x18,%esp
08ac1b09 +0x14e8:  mov    0x10(%ebp),%eax
08ac1b0c +0x14eb:  mov    %eax,0x8(%esp)
08ac1b10 +0x14ef:  mov    0xc(%ebp),%eax
08ac1b13 +0x14f2:  mov    %eax,0x4(%esp)
08ac1b17 +0x14f6:  mov    0x8(%ebp),%eax
08ac1b1a +0x14f9:  mov    %eax,(%esp)
08ac1b1d +0x14fc:  call   08ac1c0b <+0x15ea>
08ac1b22 +0x1501:  leave
08ac1b23 +0x1502:  ret
08ac1b24 +0x1503:  push   %ebp
08ac1b25 +0x1504:  mov    %esp,%ebp
08ac1b27 +0x1506:  sub    $0x18,%esp
08ac1b2a +0x1509:  mov    0x8(%ebp),%eax
08ac1b2d +0x150c:  mov    %eax,(%esp)
08ac1b30 +0x150f:  call   08ac1cb0 <+0x168f>
08ac1b35 +0x1514:  cmp    0xc(%ebp),%eax
08ac1b38 +0x1517:  setb   %al
08ac1b3b +0x151a:  movzbl %al,%eax
08ac1b3e +0x151d:  test   %eax,%eax
08ac1b40 +0x151f:  setne  %al
08ac1b43 +0x1522:  test   %al,%al
08ac1b45 +0x1524:  je     08ac1b4c <+0x152b>
08ac1b47 +0x1526:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
08ac1b4c +0x152b:  mov    0xc(%ebp),%edx
08ac1b4f +0x152e:  mov    %edx,%eax
08ac1b51 +0x1530:  add    %eax,%eax
08ac1b53 +0x1532:  add    %edx,%eax
08ac1b55 +0x1534:  shl    $0x3,%eax
08ac1b58 +0x1537:  mov    %eax,(%esp)
08ac1b5b +0x153a:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08ac1b60 +0x153f:  leave
08ac1b61 +0x1540:  ret
08ac1b62 +0x1541:  push   %ebp
08ac1b63 +0x1542:  mov    %esp,%ebp
08ac1b65 +0x1544:  sub    $0x18,%esp
08ac1b68 +0x1547:  mov    0x8(%ebp),%eax
08ac1b6b +0x154a:  movl   $0x0,(%eax)
08ac1b71 +0x1550:  mov    0x8(%ebp),%eax
08ac1b74 +0x1553:  movl   $0x0,0x4(%eax)
08ac1b7b +0x155a:  mov    0x8(%ebp),%eax
08ac1b7e +0x155d:  movl   $0x0,0x8(%eax)
08ac1b85 +0x1564:  mov    0x8(%ebp),%eax
08ac1b88 +0x1567:  movl   $0x0,0xc(%eax)
08ac1b8f +0x156e:  mov    0xc(%ebp),%eax
08ac1b92 +0x1571:  mov    %eax,(%esp)
08ac1b95 +0x1574:  call   08ac1a6f <+0x144e>
08ac1b9a +0x1579:  mov    0x8(%ebp),%ecx
08ac1b9d +0x157c:  mov    0x4(%eax),%edx
08ac1ba0 +0x157f:  mov    (%eax),%eax
08ac1ba2 +0x1581:  mov    %eax,0x10(%ecx)
08ac1ba5 +0x1584:  mov    %edx,0x14(%ecx)
08ac1ba8 +0x1587:  leave
08ac1ba9 +0x1588:  ret
08ac1baa +0x1589:  push   %ebp
08ac1bab +0x158a:  mov    %esp,%ebp
08ac1bad +0x158c:  push   %ebx
08ac1bae +0x158d:  sub    $0x24,%esp
08ac1bb1 +0x1590:  mov    0xc(%ebp),%edx
08ac1bb4 +0x1593:  mov    0x8(%ebp),%eax
08ac1bb7 +0x1596:  mov    %edx,%ecx
08ac1bb9 +0x1598:  sub    %eax,%ecx
08ac1bbb +0x159a:  mov    %ecx,%eax
08ac1bbd +0x159c:  sar    $0x3,%eax
08ac1bc0 +0x159f:  mov    %eax,-0xc(%ebp)
08ac1bc3 +0x15a2:  jmp    08ac1bf7 <+0x15d6>
08ac1bc5 +0x15a4:  subl   $0x8,0x10(%ebp)
08ac1bc9 +0x15a8:  mov    0x10(%ebp),%ebx
08ac1bcc +0x15ab:  subl   $0x8,0xc(%ebp)
08ac1bd0 +0x15af:  mov    0xc(%ebp),%eax
08ac1bd3 +0x15b2:  mov    %eax,(%esp)
08ac1bd6 +0x15b5:  call   08ac0ab8 <+0x497>
08ac1bdb +0x15ba:  cmp    %eax,%ebx
08ac1bdd +0x15bc:  je     08ac1bf3 <+0x15d2>
08ac1bdf +0x15be:  movl   $0x6,0x8(%esp)
08ac1be7 +0x15c6:  mov    %eax,0x4(%esp)
08ac1beb +0x15ca:  mov    %ebx,(%esp)
08ac1bee +0x15cd:  call   0807d8a0 <_init+0x198>
08ac1bf3 +0x15d2:  subl   $0x1,-0xc(%ebp)
08ac1bf7 +0x15d6:  cmpl   $0x0,-0xc(%ebp)
08ac1bfb +0x15da:  setg   %al
08ac1bfe +0x15dd:  test   %al,%al
08ac1c00 +0x15df:  jne    08ac1bc5 <+0x15a4>
08ac1c02 +0x15e1:  mov    0x10(%ebp),%eax
08ac1c05 +0x15e4:  add    $0x24,%esp
08ac1c08 +0x15e7:  pop    %ebx
08ac1c09 +0x15e8:  pop    %ebp
08ac1c0a +0x15e9:  ret
08ac1c0b +0x15ea:  push   %ebp
08ac1c0c +0x15eb:  mov    %esp,%ebp
08ac1c0e +0x15ed:  push   %esi
08ac1c0f +0x15ee:  push   %ebx
08ac1c10 +0x15ef:  sub    $0x20,%esp
08ac1c13 +0x15f2:  mov    0x10(%ebp),%eax
08ac1c16 +0x15f5:  mov    %eax,-0xc(%ebp)
08ac1c19 +0x15f8:  jmp    08ac1c5c <+0x163b>
08ac1c1b +0x15fa:  lea    0x8(%ebp),%eax
08ac1c1e +0x15fd:  mov    %eax,(%esp)
08ac1c21 +0x1600:  call   08ac1cee <+0x16cd>
08ac1c26 +0x1605:  mov    %eax,%ebx
08ac1c28 +0x1607:  mov    -0xc(%ebp),%eax
08ac1c2b +0x160a:  mov    %eax,0x4(%esp)
08ac1c2f +0x160e:  movl   $0x8,(%esp)
08ac1c36 +0x1615:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
08ac1c3b +0x161a:  mov    %eax,%edx
08ac1c3d +0x161c:  test   %edx,%edx
08ac1c3f +0x161e:  je     08ac1c4d <+0x162c>
08ac1c41 +0x1620:  mov    %eax,%ecx
08ac1c43 +0x1622:  mov    (%ebx),%eax
08ac1c45 +0x1624:  mov    0x4(%ebx),%edx
08ac1c48 +0x1627:  mov    %eax,(%ecx)
08ac1c4a +0x1629:  mov    %edx,0x4(%ecx)
08ac1c4d +0x162c:  lea    0x8(%ebp),%eax
08ac1c50 +0x162f:  mov    %eax,(%esp)
08ac1c53 +0x1632:  call   08ac1cd8 <+0x16b7>
08ac1c58 +0x1637:  addl   $0x8,-0xc(%ebp)
08ac1c5c +0x163b:  lea    0xc(%ebp),%eax
08ac1c5f +0x163e:  mov    %eax,0x4(%esp)
08ac1c63 +0x1642:  lea    0x8(%ebp),%eax
08ac1c66 +0x1645:  mov    %eax,(%esp)
08ac1c69 +0x1648:  call   08ac1cba <+0x1699>
08ac1c6e +0x164d:  test   %al,%al
08ac1c70 +0x164f:  jne    08ac1c1b <+0x15fa>
08ac1c72 +0x1651:  mov    -0xc(%ebp),%eax
08ac1c75 +0x1654:  add    $0x20,%esp
08ac1c78 +0x1657:  pop    %ebx
08ac1c79 +0x1658:  pop    %esi
08ac1c7a +0x1659:  pop    %ebp
08ac1c7b +0x165a:  ret
08ac1c7c +0x165b:  mov    %eax,(%esp)
08ac1c7f +0x165e:  call   08725ce0 <__cxa_begin_catch>
08ac1c84 +0x1663:  mov    -0xc(%ebp),%eax
08ac1c87 +0x1666:  mov    %eax,0x4(%esp)
08ac1c8b +0x166a:  mov    0x10(%ebp),%eax
08ac1c8e +0x166d:  mov    %eax,(%esp)
08ac1c91 +0x1670:  call   08ac102b <+0xa0a>
08ac1c96 +0x1675:  call   08724be0 <__cxa_rethrow>
08ac1c9b +0x167a:  mov    %edx,%ebx
08ac1c9d +0x167c:  mov    %eax,%esi
08ac1c9f +0x167e:  call   08725c30 <__cxa_end_catch>
08ac1ca4 +0x1683:  mov    %esi,%eax
08ac1ca6 +0x1685:  mov    %ebx,%edx
08ac1ca8 +0x1687:  mov    %eax,(%esp)
08ac1cab +0x168a:  call   08ae3750 <_Unwind_Resume>
08ac1cb0 +0x168f:  push   %ebp
08ac1cb1 +0x1690:  mov    %esp,%ebp
08ac1cb3 +0x1692:  mov    $0xaaaaaaa,%eax
08ac1cb8 +0x1697:  pop    %ebp
08ac1cb9 +0x1698:  ret
08ac1cba +0x1699:  push   %ebp
08ac1cbb +0x169a:  mov    %esp,%ebp
08ac1cbd +0x169c:  sub    $0x18,%esp
08ac1cc0 +0x169f:  mov    0xc(%ebp),%eax
08ac1cc3 +0x16a2:  mov    %eax,0x4(%esp)
08ac1cc7 +0x16a6:  mov    0x8(%ebp),%eax
08ac1cca +0x16a9:  mov    %eax,(%esp)
08ac1ccd +0x16ac:  call   08ac1cf8 <+0x16d7>
08ac1cd2 +0x16b1:  xor    $0x1,%eax
08ac1cd5 +0x16b4:  leave
08ac1cd6 +0x16b5:  ret
08ac1cd7 +0x16b6:  nop
08ac1cd8 +0x16b7:  push   %ebp
08ac1cd9 +0x16b8:  mov    %esp,%ebp
08ac1cdb +0x16ba:  mov    0x8(%ebp),%eax
08ac1cde +0x16bd:  mov    (%eax),%eax
08ac1ce0 +0x16bf:  lea    0x8(%eax),%edx
08ac1ce3 +0x16c2:  mov    0x8(%ebp),%eax
08ac1ce6 +0x16c5:  mov    %edx,(%eax)
08ac1ce8 +0x16c7:  mov    0x8(%ebp),%eax
08ac1ceb +0x16ca:  pop    %ebp
08ac1cec +0x16cb:  ret
08ac1ced +0x16cc:  nop
08ac1cee +0x16cd:  push   %ebp
08ac1cef +0x16ce:  mov    %esp,%ebp
08ac1cf1 +0x16d0:  mov    0x8(%ebp),%eax
08ac1cf4 +0x16d3:  mov    (%eax),%eax
08ac1cf6 +0x16d5:  pop    %ebp
08ac1cf7 +0x16d6:  ret
08ac1cf8 +0x16d7:  push   %ebp
08ac1cf9 +0x16d8:  mov    %esp,%ebp
08ac1cfb +0x16da:  push   %ebx
08ac1cfc +0x16db:  sub    $0x14,%esp
08ac1cff +0x16de:  mov    0x8(%ebp),%eax
08ac1d02 +0x16e1:  mov    %eax,(%esp)
08ac1d05 +0x16e4:  call   08ac1d22 <+0x1701>
08ac1d0a +0x16e9:  mov    %eax,%ebx
08ac1d0c +0x16eb:  mov    0xc(%ebp),%eax
08ac1d0f +0x16ee:  mov    %eax,(%esp)
08ac1d12 +0x16f1:  call   08ac1d22 <+0x1701>
08ac1d17 +0x16f6:  cmp    %eax,%ebx
08ac1d19 +0x16f8:  sete   %al
08ac1d1c +0x16fb:  add    $0x14,%esp
08ac1d1f +0x16fe:  pop    %ebx
08ac1d20 +0x16ff:  pop    %ebp
08ac1d21 +0x1700:  ret
08ac1d22 +0x1701:  push   %ebp
08ac1d23 +0x1702:  mov    %esp,%ebp
08ac1d25 +0x1704:  mov    0x8(%ebp),%eax
08ac1d28 +0x1707:  mov    (%eax),%eax
08ac1d2a +0x1709:  pop    %ebp
08ac1d2b +0x170a:  ret
```

## 反编译 C

```c
// <global>::global @ 0x8ac0621

/* CreateDnfEventSciprt::CreateDnfEventSciprt() */

void CreateDnfEventSciprt::_GLOBAL__I_CreateDnfEventSciprt(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
