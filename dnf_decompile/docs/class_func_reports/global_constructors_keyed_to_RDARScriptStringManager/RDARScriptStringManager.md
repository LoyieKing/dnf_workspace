# RDARScriptStringManager

`_GLOBAL__I__ZN23RDARScriptStringManagerC2Ev`

`global constructors keyed to RDARScriptStringManager::RDARScriptStringManager()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to RDARScriptStringManager` | `0x08aa671e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08aa671e  _GLOBAL__I__ZN23RDARScriptStringManagerC2Ev
#           global constructors keyed to RDARScriptStringManager::RDARScriptStringManager()
# range [0x08aa671e, 0x08aa7d83]
08aa671e +0x0000:  push   %ebp
08aa671f +0x0001:  mov    %esp,%ebp
08aa6721 +0x0003:  sub    $0x18,%esp
08aa6724 +0x0006:  movl   $0xffff,0x4(%esp)
08aa672c +0x000e:  movl   $0x1,(%esp)
08aa6733 +0x0015:  call   08aa66de <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
08aa6738 +0x001a:  leave
08aa6739 +0x001b:  ret
08aa673a +0x001c:  push   %ebp
08aa673b +0x001d:  mov    %esp,%ebp
08aa673d +0x001f:  sub    $0x18,%esp
08aa6740 +0x0022:  mov    0x8(%ebp),%eax
08aa6743 +0x0025:  mov    %eax,(%esp)
08aa6746 +0x0028:  call   08aa6a32 <+0x314>
08aa674b +0x002d:  leave
08aa674c +0x002e:  ret
08aa674d +0x002f:  nop
08aa674e +0x0030:  push   %ebp
08aa674f +0x0031:  mov    %esp,%ebp
08aa6751 +0x0033:  push   %esi
08aa6752 +0x0034:  push   %ebx
08aa6753 +0x0035:  sub    $0x10,%esp
08aa6756 +0x0038:  mov    0x8(%ebp),%eax
08aa6759 +0x003b:  mov    %eax,(%esp)
08aa675c +0x003e:  call   08aa6aae <+0x390>
08aa6761 +0x0043:  mov    0x8(%ebp),%edx
08aa6764 +0x0046:  mov    0x4(%edx),%ecx
08aa6767 +0x0049:  mov    0x8(%ebp),%edx
08aa676a +0x004c:  mov    (%edx),%edx
08aa676c +0x004e:  mov    %eax,0x8(%esp)
08aa6770 +0x0052:  mov    %ecx,0x4(%esp)
08aa6774 +0x0056:  mov    %edx,(%esp)
08aa6777 +0x0059:  call   08aa6ab6 <+0x398>
08aa677c +0x005e:  jmp    08aa6799 <+0x7b>
08aa677e +0x0060:  mov    %edx,%ebx
08aa6780 +0x0062:  mov    %eax,%esi
08aa6782 +0x0064:  mov    0x8(%ebp),%eax
08aa6785 +0x0067:  mov    %eax,(%esp)
08aa6788 +0x006a:  call   08aa6a46 <+0x328>
08aa678d +0x006f:  mov    %esi,%eax
08aa678f +0x0071:  mov    %ebx,%edx
08aa6791 +0x0073:  mov    %eax,(%esp)
08aa6794 +0x0076:  call   08ae3750 <_Unwind_Resume>
08aa6799 +0x007b:  mov    0x8(%ebp),%eax
08aa679c +0x007e:  mov    %eax,(%esp)
08aa679f +0x0081:  call   08aa6a46 <+0x328>
08aa67a4 +0x0086:  add    $0x10,%esp
08aa67a7 +0x0089:  pop    %ebx
08aa67a8 +0x008a:  pop    %esi
08aa67a9 +0x008b:  pop    %ebp
08aa67aa +0x008c:  ret
08aa67ab +0x008d:  nop
08aa67ac +0x008e:  push   %ebp
08aa67ad +0x008f:  mov    %esp,%ebp
08aa67af +0x0091:  push   %ebx
08aa67b0 +0x0092:  sub    $0x14,%esp
08aa67b3 +0x0095:  mov    0x8(%ebp),%ebx
08aa67b6 +0x0098:  mov    0xc(%ebp),%eax
08aa67b9 +0x009b:  mov    %eax,0x4(%esp)
08aa67bd +0x009f:  mov    %ebx,(%esp)
08aa67c0 +0x00a2:  call   08aa6ad0 <+0x3b2>
08aa67c5 +0x00a7:  mov    %ebx,%eax
08aa67c7 +0x00a9:  add    $0x14,%esp
08aa67ca +0x00ac:  pop    %ebx
08aa67cb +0x00ad:  pop    %ebp
08aa67cc +0x00ae:  ret    $0x4
08aa67cf +0x00b1:  nop
08aa67d0 +0x00b2:  push   %ebp
08aa67d1 +0x00b3:  mov    %esp,%ebp
08aa67d3 +0x00b5:  push   %ebx
08aa67d4 +0x00b6:  sub    $0x14,%esp
08aa67d7 +0x00b9:  mov    0x8(%ebp),%ebx
08aa67da +0x00bc:  mov    0xc(%ebp),%eax
08aa67dd +0x00bf:  add    $0x4,%eax
08aa67e0 +0x00c2:  mov    %eax,0x4(%esp)
08aa67e4 +0x00c6:  mov    %ebx,(%esp)
08aa67e7 +0x00c9:  call   08aa6ad0 <+0x3b2>
08aa67ec +0x00ce:  mov    %ebx,%eax
08aa67ee +0x00d0:  add    $0x14,%esp
08aa67f1 +0x00d3:  pop    %ebx
08aa67f2 +0x00d4:  pop    %ebp
08aa67f3 +0x00d5:  ret    $0x4
08aa67f6 +0x00d8:  push   %ebp
08aa67f7 +0x00d9:  mov    %esp,%ebp
08aa67f9 +0x00db:  push   %ebx
08aa67fa +0x00dc:  sub    $0x14,%esp
08aa67fd +0x00df:  mov    0x8(%ebp),%eax
08aa6800 +0x00e2:  mov    %eax,(%esp)
08aa6803 +0x00e5:  call   08aa6ae0 <+0x3c2>
08aa6808 +0x00ea:  mov    (%eax),%ebx
08aa680a +0x00ec:  mov    0xc(%ebp),%eax
08aa680d +0x00ef:  mov    %eax,(%esp)
08aa6810 +0x00f2:  call   08aa6ae0 <+0x3c2>
08aa6815 +0x00f7:  mov    (%eax),%eax
08aa6817 +0x00f9:  cmp    %eax,%ebx
08aa6819 +0x00fb:  setne  %al
08aa681c +0x00fe:  add    $0x14,%esp
08aa681f +0x0101:  pop    %ebx
08aa6820 +0x0102:  pop    %ebp
08aa6821 +0x0103:  ret
08aa6822 +0x0104:  push   %ebp
08aa6823 +0x0105:  mov    %esp,%ebp
08aa6825 +0x0107:  push   %ebx
08aa6826 +0x0108:  sub    $0x24,%esp
08aa6829 +0x010b:  mov    0x8(%ebp),%ebx
08aa682c +0x010e:  mov    0xc(%ebp),%eax
08aa682f +0x0111:  mov    (%eax),%eax
08aa6831 +0x0113:  mov    %eax,-0xc(%ebp)
08aa6834 +0x0116:  lea    -0xc(%ebp),%edx
08aa6837 +0x0119:  lea    0x4(%eax),%ecx
08aa683a +0x011c:  mov    0xc(%ebp),%eax
08aa683d +0x011f:  mov    %ecx,(%eax)
08aa683f +0x0121:  mov    %edx,0x4(%esp)
08aa6843 +0x0125:  mov    %ebx,(%esp)
08aa6846 +0x0128:  call   08aa6ad0 <+0x3b2>
08aa684b +0x012d:  mov    %ebx,%eax
08aa684d +0x012f:  add    $0x24,%esp
08aa6850 +0x0132:  pop    %ebx
08aa6851 +0x0133:  pop    %ebp
08aa6852 +0x0134:  ret    $0x4
08aa6855 +0x0137:  nop
08aa6856 +0x0138:  push   %ebp
08aa6857 +0x0139:  mov    %esp,%ebp
08aa6859 +0x013b:  mov    0x8(%ebp),%eax
08aa685c +0x013e:  mov    (%eax),%eax
08aa685e +0x0140:  pop    %ebp
08aa685f +0x0141:  ret
08aa6860 +0x0142:  push   %ebp
08aa6861 +0x0143:  mov    %esp,%ebp
08aa6863 +0x0145:  sub    $0x18,%esp
08aa6866 +0x0148:  mov    0x8(%ebp),%eax
08aa6869 +0x014b:  mov    (%eax),%eax
08aa686b +0x014d:  mov    %eax,0x4(%esp)
08aa686f +0x0151:  mov    0x8(%ebp),%eax
08aa6872 +0x0154:  mov    %eax,(%esp)
08aa6875 +0x0157:  call   08aa6ae8 <+0x3ca>
08aa687a +0x015c:  leave
08aa687b +0x015d:  ret
08aa687c +0x015e:  push   %ebp
08aa687d +0x015f:  mov    %esp,%ebp
08aa687f +0x0161:  sub    $0x28,%esp
08aa6882 +0x0164:  lea    0x10(%ebp),%eax
08aa6885 +0x0167:  mov    %eax,-0x10(%ebp)
08aa6888 +0x016a:  mov    -0x10(%ebp),%edx
08aa688b +0x016d:  mov    0x8(%ebp),%eax
08aa688e +0x0170:  mov    %edx,0xc(%esp)
08aa6892 +0x0174:  mov    0xc(%ebp),%edx
08aa6895 +0x0177:  mov    %edx,0x8(%esp)
08aa6899 +0x017b:  movl   $0x200,0x4(%esp)
08aa68a1 +0x0183:  mov    %eax,(%esp)
08aa68a4 +0x0186:  call   08ad457c <_Z11ss_vsprintfPcjPKcS_>  ; ss_vsprintf(char*, unsigned int, char const*, char*)
08aa68a9 +0x018b:  mov    %eax,-0xc(%ebp)
08aa68ac +0x018e:  mov    -0xc(%ebp),%eax
08aa68af +0x0191:  leave
08aa68b0 +0x0192:  ret
08aa68b1 +0x0193:  nop
08aa68b2 +0x0194:  push   %ebp
08aa68b3 +0x0195:  mov    %esp,%ebp
08aa68b5 +0x0197:  mov    0x8(%ebp),%eax
08aa68b8 +0x019a:  mov    0x4(%eax),%eax
08aa68bb +0x019d:  mov    %eax,%edx
08aa68bd +0x019f:  mov    0x8(%ebp),%eax
08aa68c0 +0x01a2:  mov    (%eax),%eax
08aa68c2 +0x01a4:  mov    %edx,%ecx
08aa68c4 +0x01a6:  sub    %eax,%ecx
08aa68c6 +0x01a8:  mov    %ecx,%eax
08aa68c8 +0x01aa:  sar    $0x2,%eax
08aa68cb +0x01ad:  pop    %ebp
08aa68cc +0x01ae:  ret
08aa68cd +0x01af:  nop
08aa68ce +0x01b0:  push   %ebp
08aa68cf +0x01b1:  mov    %esp,%ebp
08aa68d1 +0x01b3:  mov    0x8(%ebp),%eax
08aa68d4 +0x01b6:  mov    (%eax),%eax
08aa68d6 +0x01b8:  mov    0xc(%ebp),%edx
08aa68d9 +0x01bb:  shl    $0x2,%edx
08aa68dc +0x01be:  add    %edx,%eax
08aa68de +0x01c0:  pop    %ebp
08aa68df +0x01c1:  ret
08aa68e0 +0x01c2:  push   %ebp
08aa68e1 +0x01c3:  mov    %esp,%ebp
08aa68e3 +0x01c5:  mov    0x8(%ebp),%eax
08aa68e6 +0x01c8:  mov    0xc(%ebp),%edx
08aa68e9 +0x01cb:  mov    %edx,(%eax)
08aa68eb +0x01cd:  pop    %ebp
08aa68ec +0x01ce:  ret
08aa68ed +0x01cf:  nop
08aa68ee +0x01d0:  push   %ebp
08aa68ef +0x01d1:  mov    %esp,%ebp
08aa68f1 +0x01d3:  push   %ebx
08aa68f2 +0x01d4:  sub    $0x14,%esp
08aa68f5 +0x01d7:  mov    0x8(%ebp),%eax
08aa68f8 +0x01da:  mov    (%eax),%ebx
08aa68fa +0x01dc:  test   %ebx,%ebx
08aa68fc +0x01de:  je     08aa690e <+0x1f0>
08aa68fe +0x01e0:  mov    %ebx,(%esp)
08aa6901 +0x01e3:  call   08ab22be <_ZN16StringDictionaryD1Ev>  ; StringDictionary::~StringDictionary()
08aa6906 +0x01e8:  mov    %ebx,(%esp)
08aa6909 +0x01eb:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08aa690e +0x01f0:  add    $0x14,%esp
08aa6911 +0x01f3:  pop    %ebx
08aa6912 +0x01f4:  pop    %ebp
08aa6913 +0x01f5:  ret
08aa6914 +0x01f6:  push   %ebp
08aa6915 +0x01f7:  mov    %esp,%ebp
08aa6917 +0x01f9:  push   %ebx
08aa6918 +0x01fa:  sub    $0x14,%esp
08aa691b +0x01fd:  mov    0x8(%ebp),%eax
08aa691e +0x0200:  mov    (%eax),%eax
08aa6920 +0x0202:  cmp    0xc(%ebp),%eax
08aa6923 +0x0205:  je     08aa695d <+0x23f>
08aa6925 +0x0207:  mov    0x8(%ebp),%eax
08aa6928 +0x020a:  mov    (%eax),%ebx
08aa692a +0x020c:  test   %ebx,%ebx
08aa692c +0x020e:  je     08aa693e <+0x220>
08aa692e +0x0210:  mov    %ebx,(%esp)
08aa6931 +0x0213:  call   08ab22be <_ZN16StringDictionaryD1Ev>  ; StringDictionary::~StringDictionary()
08aa6936 +0x0218:  mov    %ebx,(%esp)
08aa6939 +0x021b:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08aa693e +0x0220:  mov    0x8(%ebp),%eax
08aa6941 +0x0223:  mov    0xc(%ebp),%edx
08aa6944 +0x0226:  mov    %edx,(%eax)
08aa6946 +0x0228:  jmp    08aa695d <+0x23f>
08aa6948 +0x022a:  cmp    $0xffffffff,%edx
08aa694b +0x022d:  je     08aa6955 <+0x237>
08aa694d +0x022f:  mov    %eax,(%esp)
08aa6950 +0x0232:  call   08ae3750 <_Unwind_Resume>
08aa6955 +0x0237:  mov    %eax,(%esp)
08aa6958 +0x023a:  call   08723df0 <__cxa_call_unexpected>
08aa695d +0x023f:  add    $0x14,%esp
08aa6960 +0x0242:  pop    %ebx
08aa6961 +0x0243:  pop    %ebp
08aa6962 +0x0244:  ret
08aa6963 +0x0245:  nop
08aa6964 +0x0246:  push   %ebp
08aa6965 +0x0247:  mov    %esp,%ebp
08aa6967 +0x0249:  mov    0x8(%ebp),%eax
08aa696a +0x024c:  mov    (%eax),%eax
08aa696c +0x024e:  pop    %ebp
08aa696d +0x024f:  ret
08aa696e +0x0250:  push   %ebp
08aa696f +0x0251:  mov    %esp,%ebp
08aa6971 +0x0253:  sub    $0x10,%esp
08aa6974 +0x0256:  mov    0x8(%ebp),%eax
08aa6977 +0x0259:  mov    (%eax),%eax
08aa6979 +0x025b:  mov    %eax,-0x4(%ebp)
08aa697c +0x025e:  mov    0x8(%ebp),%eax
08aa697f +0x0261:  movl   $0x0,(%eax)
08aa6985 +0x0267:  mov    -0x4(%ebp),%eax
08aa6988 +0x026a:  leave
08aa6989 +0x026b:  ret
08aa698a +0x026c:  push   %ebp
08aa698b +0x026d:  mov    %esp,%ebp
08aa698d +0x026f:  sub    $0x28,%esp
08aa6990 +0x0272:  mov    0xc(%ebp),%eax
08aa6993 +0x0275:  mov    %eax,(%esp)
08aa6996 +0x0278:  call   08aa6b1d <+0x3ff>
08aa699b +0x027d:  mov    (%eax),%eax
08aa699d +0x027f:  mov    %eax,-0xc(%ebp)
08aa69a0 +0x0282:  lea    -0xc(%ebp),%eax
08aa69a3 +0x0285:  mov    %eax,0x4(%esp)
08aa69a7 +0x0289:  mov    0x8(%ebp),%eax
08aa69aa +0x028c:  mov    %eax,(%esp)
08aa69ad +0x028f:  call   08aa6b26 <+0x408>
08aa69b2 +0x0294:  leave
08aa69b3 +0x0295:  ret
08aa69b4 +0x0296:  push   %ebp
08aa69b5 +0x0297:  mov    %esp,%ebp
08aa69b7 +0x0299:  sub    $0x28,%esp
08aa69ba +0x029c:  lea    0x10(%ebp),%eax
08aa69bd +0x029f:  mov    %eax,-0x10(%ebp)
08aa69c0 +0x02a2:  mov    -0x10(%ebp),%edx
08aa69c3 +0x02a5:  mov    0x8(%ebp),%eax
08aa69c6 +0x02a8:  mov    %edx,0xc(%esp)
08aa69ca +0x02ac:  mov    0xc(%ebp),%edx
08aa69cd +0x02af:  mov    %edx,0x8(%esp)
08aa69d1 +0x02b3:  movl   $0x100,0x4(%esp)
08aa69d9 +0x02bb:  mov    %eax,(%esp)
08aa69dc +0x02be:  call   08ad457c <_Z11ss_vsprintfPcjPKcS_>  ; ss_vsprintf(char*, unsigned int, char const*, char*)
08aa69e1 +0x02c3:  mov    %eax,-0xc(%ebp)
08aa69e4 +0x02c6:  mov    -0xc(%ebp),%eax
08aa69e7 +0x02c9:  leave
08aa69e8 +0x02ca:  ret
08aa69e9 +0x02cb:  nop
08aa69ea +0x02cc:  push   %ebp
08aa69eb +0x02cd:  mov    %esp,%ebp
08aa69ed +0x02cf:  mov    0x8(%ebp),%eax
08aa69f0 +0x02d2:  mov    (%eax),%eax
08aa69f2 +0x02d4:  mov    0xc(%ebp),%edx
08aa69f5 +0x02d7:  shl    $0x2,%edx
08aa69f8 +0x02da:  add    %edx,%eax
08aa69fa +0x02dc:  pop    %ebp
08aa69fb +0x02dd:  ret
08aa69fc +0x02de:  push   %ebp
08aa69fd +0x02df:  mov    %esp,%ebp
08aa69ff +0x02e1:  sub    $0x18,%esp
08aa6a02 +0x02e4:  mov    0xc(%ebp),%eax
08aa6a05 +0x02e7:  mov    %eax,(%esp)
08aa6a08 +0x02ea:  call   08aa6bb9 <+0x49b>
08aa6a0d +0x02ef:  mov    %eax,0x4(%esp)
08aa6a11 +0x02f3:  mov    0x8(%ebp),%eax
08aa6a14 +0x02f6:  mov    %eax,(%esp)
08aa6a17 +0x02f9:  call   08aa6bc2 <+0x4a4>
08aa6a1c +0x02fe:  leave
08aa6a1d +0x02ff:  ret
08aa6a1e +0x0300:  push   %ebp
08aa6a1f +0x0301:  mov    %esp,%ebp
08aa6a21 +0x0303:  sub    $0x18,%esp
08aa6a24 +0x0306:  mov    0x8(%ebp),%eax
08aa6a27 +0x0309:  mov    %eax,(%esp)
08aa6a2a +0x030c:  call   08aa6c7c <+0x55e>
08aa6a2f +0x0311:  leave
08aa6a30 +0x0312:  ret
08aa6a31 +0x0313:  nop
08aa6a32 +0x0314:  push   %ebp
08aa6a33 +0x0315:  mov    %esp,%ebp
08aa6a35 +0x0317:  sub    $0x18,%esp
08aa6a38 +0x031a:  mov    0x8(%ebp),%eax
08aa6a3b +0x031d:  mov    %eax,(%esp)
08aa6a3e +0x0320:  call   08aa6c4c <+0x52e>
08aa6a43 +0x0325:  leave
08aa6a44 +0x0326:  ret
08aa6a45 +0x0327:  nop
08aa6a46 +0x0328:  push   %ebp
08aa6a47 +0x0329:  mov    %esp,%ebp
08aa6a49 +0x032b:  push   %esi
08aa6a4a +0x032c:  push   %ebx
08aa6a4b +0x032d:  sub    $0x10,%esp
08aa6a4e +0x0330:  mov    0x8(%ebp),%eax
08aa6a51 +0x0333:  mov    0x8(%eax),%eax
08aa6a54 +0x0336:  mov    %eax,%edx
08aa6a56 +0x0338:  mov    0x8(%ebp),%eax
08aa6a59 +0x033b:  mov    (%eax),%eax
08aa6a5b +0x033d:  mov    %edx,%ecx
08aa6a5d +0x033f:  sub    %eax,%ecx
08aa6a5f +0x0341:  mov    %ecx,%eax
08aa6a61 +0x0343:  sar    $0x2,%eax
08aa6a64 +0x0346:  mov    %eax,%edx
08aa6a66 +0x0348:  mov    0x8(%ebp),%eax
08aa6a69 +0x034b:  mov    (%eax),%eax
08aa6a6b +0x034d:  mov    %edx,0x8(%esp)
08aa6a6f +0x0351:  mov    %eax,0x4(%esp)
08aa6a73 +0x0355:  mov    0x8(%ebp),%eax
08aa6a76 +0x0358:  mov    %eax,(%esp)
08aa6a79 +0x035b:  call   08aa6c90 <+0x572>
08aa6a7e +0x0360:  jmp    08aa6a9b <+0x37d>
08aa6a80 +0x0362:  mov    %edx,%ebx
08aa6a82 +0x0364:  mov    %eax,%esi
08aa6a84 +0x0366:  mov    0x8(%ebp),%eax
08aa6a87 +0x0369:  mov    %eax,(%esp)
08aa6a8a +0x036c:  call   08aa6a1e <+0x300>
08aa6a8f +0x0371:  mov    %esi,%eax
08aa6a91 +0x0373:  mov    %ebx,%edx
08aa6a93 +0x0375:  mov    %eax,(%esp)
08aa6a96 +0x0378:  call   08ae3750 <_Unwind_Resume>
08aa6a9b +0x037d:  mov    0x8(%ebp),%eax
08aa6a9e +0x0380:  mov    %eax,(%esp)
08aa6aa1 +0x0383:  call   08aa6a1e <+0x300>
08aa6aa6 +0x0388:  add    $0x10,%esp
08aa6aa9 +0x038b:  pop    %ebx
08aa6aaa +0x038c:  pop    %esi
08aa6aab +0x038d:  pop    %ebp
08aa6aac +0x038e:  ret
08aa6aad +0x038f:  nop
08aa6aae +0x0390:  push   %ebp
08aa6aaf +0x0391:  mov    %esp,%ebp
08aa6ab1 +0x0393:  mov    0x8(%ebp),%eax
08aa6ab4 +0x0396:  pop    %ebp
08aa6ab5 +0x0397:  ret
08aa6ab6 +0x0398:  push   %ebp
08aa6ab7 +0x0399:  mov    %esp,%ebp
08aa6ab9 +0x039b:  sub    $0x18,%esp
08aa6abc +0x039e:  mov    0xc(%ebp),%eax
08aa6abf +0x03a1:  mov    %eax,0x4(%esp)
08aa6ac3 +0x03a5:  mov    0x8(%ebp),%eax
08aa6ac6 +0x03a8:  mov    %eax,(%esp)
08aa6ac9 +0x03ab:  call   08aa6cb7 <+0x599>
08aa6ace +0x03b0:  leave
08aa6acf +0x03b1:  ret
08aa6ad0 +0x03b2:  push   %ebp
08aa6ad1 +0x03b3:  mov    %esp,%ebp
08aa6ad3 +0x03b5:  mov    0xc(%ebp),%eax
08aa6ad6 +0x03b8:  mov    (%eax),%edx
08aa6ad8 +0x03ba:  mov    0x8(%ebp),%eax
08aa6adb +0x03bd:  mov    %edx,(%eax)
08aa6add +0x03bf:  pop    %ebp
08aa6ade +0x03c0:  ret
08aa6adf +0x03c1:  nop
08aa6ae0 +0x03c2:  push   %ebp
08aa6ae1 +0x03c3:  mov    %esp,%ebp
08aa6ae3 +0x03c5:  mov    0x8(%ebp),%eax
08aa6ae6 +0x03c8:  pop    %ebp
08aa6ae7 +0x03c9:  ret
08aa6ae8 +0x03ca:  push   %ebp
08aa6ae9 +0x03cb:  mov    %esp,%ebp
08aa6aeb +0x03cd:  sub    $0x18,%esp
08aa6aee +0x03d0:  mov    0x8(%ebp),%eax
08aa6af1 +0x03d3:  mov    %eax,(%esp)
08aa6af4 +0x03d6:  call   08aa6aae <+0x390>
08aa6af9 +0x03db:  mov    0x8(%ebp),%edx
08aa6afc +0x03de:  mov    0x4(%edx),%edx
08aa6aff +0x03e1:  mov    %eax,0x8(%esp)
08aa6b03 +0x03e5:  mov    %edx,0x4(%esp)
08aa6b07 +0x03e9:  mov    0xc(%ebp),%eax
08aa6b0a +0x03ec:  mov    %eax,(%esp)
08aa6b0d +0x03ef:  call   08aa6ab6 <+0x398>
08aa6b12 +0x03f4:  mov    0x8(%ebp),%eax
08aa6b15 +0x03f7:  mov    0xc(%ebp),%edx
08aa6b18 +0x03fa:  mov    %edx,0x4(%eax)
08aa6b1b +0x03fd:  leave
08aa6b1c +0x03fe:  ret
08aa6b1d +0x03ff:  push   %ebp
08aa6b1e +0x0400:  mov    %esp,%ebp
08aa6b20 +0x0402:  mov    0x8(%ebp),%eax
08aa6b23 +0x0405:  pop    %ebp
08aa6b24 +0x0406:  ret
08aa6b25 +0x0407:  nop
08aa6b26 +0x0408:  push   %ebp
08aa6b27 +0x0409:  mov    %esp,%ebp
08aa6b29 +0x040b:  sub    $0x28,%esp
08aa6b2c +0x040e:  mov    0x8(%ebp),%eax
08aa6b2f +0x0411:  mov    0x4(%eax),%edx
08aa6b32 +0x0414:  mov    0x8(%ebp),%eax
08aa6b35 +0x0417:  mov    0x8(%eax),%eax
08aa6b38 +0x041a:  cmp    %eax,%edx
08aa6b3a +0x041c:  je     08aa6b79 <+0x45b>
08aa6b3c +0x041e:  mov    0xc(%ebp),%eax
08aa6b3f +0x0421:  mov    %eax,(%esp)
08aa6b42 +0x0424:  call   08aa6cd1 <+0x5b3>
08aa6b47 +0x0429:  mov    (%eax),%eax
08aa6b49 +0x042b:  mov    %eax,-0x14(%ebp)
08aa6b4c +0x042e:  mov    0x8(%ebp),%eax
08aa6b4f +0x0431:  mov    0x4(%eax),%edx
08aa6b52 +0x0434:  mov    0x8(%ebp),%eax
08aa6b55 +0x0437:  lea    -0x14(%ebp),%ecx
08aa6b58 +0x043a:  mov    %ecx,0x8(%esp)
08aa6b5c +0x043e:  mov    %edx,0x4(%esp)
08aa6b60 +0x0442:  mov    %eax,(%esp)
08aa6b63 +0x0445:  call   08aa6cda <+0x5bc>
08aa6b68 +0x044a:  mov    0x8(%ebp),%eax
08aa6b6b +0x044d:  mov    0x4(%eax),%eax
08aa6b6e +0x0450:  lea    0x4(%eax),%edx
08aa6b71 +0x0453:  mov    0x8(%ebp),%eax
08aa6b74 +0x0456:  mov    %edx,0x4(%eax)
08aa6b77 +0x0459:  jmp    08aa6bb7 <+0x499>
08aa6b79 +0x045b:  mov    0xc(%ebp),%eax
08aa6b7c +0x045e:  mov    %eax,(%esp)
08aa6b7f +0x0461:  call   08aa6cd1 <+0x5b3>
08aa6b84 +0x0466:  mov    (%eax),%eax
08aa6b86 +0x0468:  mov    %eax,-0x10(%ebp)
08aa6b89 +0x046b:  lea    -0xc(%ebp),%eax
08aa6b8c +0x046e:  mov    0x8(%ebp),%edx
08aa6b8f +0x0471:  mov    %edx,0x4(%esp)
08aa6b93 +0x0475:  mov    %eax,(%esp)
08aa6b96 +0x0478:  call   08aa67d0 <+0xb2>
08aa6b9b +0x047d:  sub    $0x4,%esp
08aa6b9e +0x0480:  lea    -0x10(%ebp),%eax
08aa6ba1 +0x0483:  mov    %eax,0x8(%esp)
08aa6ba5 +0x0487:  mov    -0xc(%ebp),%eax
08aa6ba8 +0x048a:  mov    %eax,0x4(%esp)
08aa6bac +0x048e:  mov    0x8(%ebp),%eax
08aa6baf +0x0491:  mov    %eax,(%esp)
08aa6bb2 +0x0494:  call   08aa6d10 <+0x5f2>
08aa6bb7 +0x0499:  leave
08aa6bb8 +0x049a:  ret
08aa6bb9 +0x049b:  push   %ebp
08aa6bba +0x049c:  mov    %esp,%ebp
08aa6bbc +0x049e:  mov    0x8(%ebp),%eax
08aa6bbf +0x04a1:  pop    %ebp
08aa6bc0 +0x04a2:  ret
08aa6bc1 +0x04a3:  nop
08aa6bc2 +0x04a4:  push   %ebp
08aa6bc3 +0x04a5:  mov    %esp,%ebp
08aa6bc5 +0x04a7:  push   %ebx
08aa6bc6 +0x04a8:  sub    $0x24,%esp
08aa6bc9 +0x04ab:  mov    0x8(%ebp),%eax
08aa6bcc +0x04ae:  mov    0x4(%eax),%edx
08aa6bcf +0x04b1:  mov    0x8(%ebp),%eax
08aa6bd2 +0x04b4:  mov    0x8(%eax),%eax
08aa6bd5 +0x04b7:  cmp    %eax,%edx
08aa6bd7 +0x04b9:  je     08aa6c0e <+0x4f0>
08aa6bd9 +0x04bb:  mov    0xc(%ebp),%eax
08aa6bdc +0x04be:  mov    %eax,(%esp)
08aa6bdf +0x04c1:  call   08aa6fd1 <+0x8b3>
08aa6be4 +0x04c6:  mov    0x8(%ebp),%edx
08aa6be7 +0x04c9:  mov    0x4(%edx),%ecx
08aa6bea +0x04cc:  mov    0x8(%ebp),%edx
08aa6bed +0x04cf:  mov    %eax,0x8(%esp)
08aa6bf1 +0x04d3:  mov    %ecx,0x4(%esp)
08aa6bf5 +0x04d7:  mov    %edx,(%esp)
08aa6bf8 +0x04da:  call   08aa6fda <+0x8bc>
08aa6bfd +0x04df:  mov    0x8(%ebp),%eax
08aa6c00 +0x04e2:  mov    0x4(%eax),%eax
08aa6c03 +0x04e5:  lea    0x4(%eax),%edx
08aa6c06 +0x04e8:  mov    0x8(%ebp),%eax
08aa6c09 +0x04eb:  mov    %edx,0x4(%eax)
08aa6c0c +0x04ee:  jmp    08aa6c46 <+0x528>
08aa6c0e +0x04f0:  mov    0xc(%ebp),%eax
08aa6c11 +0x04f3:  mov    %eax,(%esp)
08aa6c14 +0x04f6:  call   08aa6fd1 <+0x8b3>
08aa6c19 +0x04fb:  mov    %eax,%ebx
08aa6c1b +0x04fd:  lea    -0xc(%ebp),%eax
08aa6c1e +0x0500:  mov    0x8(%ebp),%edx
08aa6c21 +0x0503:  mov    %edx,0x4(%esp)
08aa6c25 +0x0507:  mov    %eax,(%esp)
08aa6c28 +0x050a:  call   08aa7042 <+0x924>
08aa6c2d +0x050f:  sub    $0x4,%esp
08aa6c30 +0x0512:  mov    %ebx,0x8(%esp)
08aa6c34 +0x0516:  mov    -0xc(%ebp),%eax
08aa6c37 +0x0519:  mov    %eax,0x4(%esp)
08aa6c3b +0x051d:  mov    0x8(%ebp),%eax
08aa6c3e +0x0520:  mov    %eax,(%esp)
08aa6c41 +0x0523:  call   08aa7068 <+0x94a>
08aa6c46 +0x0528:  mov    -0x4(%ebp),%ebx
08aa6c49 +0x052b:  leave
08aa6c4a +0x052c:  ret
08aa6c4b +0x052d:  nop
08aa6c4c +0x052e:  push   %ebp
08aa6c4d +0x052f:  mov    %esp,%ebp
08aa6c4f +0x0531:  sub    $0x18,%esp
08aa6c52 +0x0534:  mov    0x8(%ebp),%eax
08aa6c55 +0x0537:  mov    %eax,(%esp)
08aa6c58 +0x053a:  call   08aa735a <+0xc3c>
08aa6c5d +0x053f:  mov    0x8(%ebp),%eax
08aa6c60 +0x0542:  movl   $0x0,(%eax)
08aa6c66 +0x0548:  mov    0x8(%ebp),%eax
08aa6c69 +0x054b:  movl   $0x0,0x4(%eax)
08aa6c70 +0x0552:  mov    0x8(%ebp),%eax
08aa6c73 +0x0555:  movl   $0x0,0x8(%eax)
08aa6c7a +0x055c:  leave
08aa6c7b +0x055d:  ret
08aa6c7c +0x055e:  push   %ebp
08aa6c7d +0x055f:  mov    %esp,%ebp
08aa6c7f +0x0561:  sub    $0x18,%esp
08aa6c82 +0x0564:  mov    0x8(%ebp),%eax
08aa6c85 +0x0567:  mov    %eax,(%esp)
08aa6c88 +0x056a:  call   08aa736e <+0xc50>
08aa6c8d +0x056f:  leave
08aa6c8e +0x0570:  ret
08aa6c8f +0x0571:  nop
08aa6c90 +0x0572:  push   %ebp
08aa6c91 +0x0573:  mov    %esp,%ebp
08aa6c93 +0x0575:  sub    $0x18,%esp
08aa6c96 +0x0578:  cmpl   $0x0,0xc(%ebp)
08aa6c9a +0x057c:  je     08aa6cb5 <+0x597>
08aa6c9c +0x057e:  mov    0x8(%ebp),%eax
08aa6c9f +0x0581:  mov    0x10(%ebp),%edx
08aa6ca2 +0x0584:  mov    %edx,0x8(%esp)
08aa6ca6 +0x0588:  mov    0xc(%ebp),%edx
08aa6ca9 +0x058b:  mov    %edx,0x4(%esp)
08aa6cad +0x058f:  mov    %eax,(%esp)
08aa6cb0 +0x0592:  call   08aa7374 <+0xc56>
08aa6cb5 +0x0597:  leave
08aa6cb6 +0x0598:  ret
08aa6cb7 +0x0599:  push   %ebp
08aa6cb8 +0x059a:  mov    %esp,%ebp
08aa6cba +0x059c:  sub    $0x18,%esp
08aa6cbd +0x059f:  mov    0xc(%ebp),%eax
08aa6cc0 +0x05a2:  mov    %eax,0x4(%esp)
08aa6cc4 +0x05a6:  mov    0x8(%ebp),%eax
08aa6cc7 +0x05a9:  mov    %eax,(%esp)
08aa6cca +0x05ac:  call   08aa7387 <+0xc69>
08aa6ccf +0x05b1:  leave
08aa6cd0 +0x05b2:  ret
08aa6cd1 +0x05b3:  push   %ebp
08aa6cd2 +0x05b4:  mov    %esp,%ebp
08aa6cd4 +0x05b6:  mov    0x8(%ebp),%eax
08aa6cd7 +0x05b9:  pop    %ebp
08aa6cd8 +0x05ba:  ret
08aa6cd9 +0x05bb:  nop
08aa6cda +0x05bc:  push   %ebp
08aa6cdb +0x05bd:  mov    %esp,%ebp
08aa6cdd +0x05bf:  push   %ebx
08aa6cde +0x05c0:  sub    $0x14,%esp
08aa6ce1 +0x05c3:  mov    0x10(%ebp),%eax
08aa6ce4 +0x05c6:  mov    %eax,(%esp)
08aa6ce7 +0x05c9:  call   08aa6cd1 <+0x5b3>
08aa6cec +0x05ce:  mov    (%eax),%ebx
08aa6cee +0x05d0:  mov    0xc(%ebp),%eax
08aa6cf1 +0x05d3:  mov    %eax,0x4(%esp)
08aa6cf5 +0x05d7:  movl   $0x4,(%esp)
08aa6cfc +0x05de:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
08aa6d01 +0x05e3:  mov    %eax,%edx
08aa6d03 +0x05e5:  test   %edx,%edx
08aa6d05 +0x05e7:  je     08aa6d09 <+0x5eb>
08aa6d07 +0x05e9:  mov    %ebx,(%eax)
08aa6d09 +0x05eb:  add    $0x14,%esp
08aa6d0c +0x05ee:  pop    %ebx
08aa6d0d +0x05ef:  pop    %ebp
08aa6d0e +0x05f0:  ret
08aa6d0f +0x05f1:  nop
08aa6d10 +0x05f2:  push   %ebp
08aa6d11 +0x05f3:  mov    %esp,%ebp
08aa6d13 +0x05f5:  push   %esi
08aa6d14 +0x05f6:  push   %ebx
08aa6d15 +0x05f7:  sub    $0x30,%esp
08aa6d18 +0x05fa:  mov    0x8(%ebp),%eax
08aa6d1b +0x05fd:  mov    0x4(%eax),%edx
08aa6d1e +0x0600:  mov    0x8(%ebp),%eax
08aa6d21 +0x0603:  mov    0x8(%eax),%eax
08aa6d24 +0x0606:  cmp    %eax,%edx
08aa6d26 +0x0608:  je     08aa6dbd <+0x69f>
08aa6d2c +0x060e:  mov    0x8(%ebp),%eax
08aa6d2f +0x0611:  mov    0x4(%eax),%eax
08aa6d32 +0x0614:  sub    $0x4,%eax
08aa6d35 +0x0617:  mov    %eax,(%esp)
08aa6d38 +0x061a:  call   08aa6b1d <+0x3ff>
08aa6d3d +0x061f:  mov    (%eax),%eax
08aa6d3f +0x0621:  mov    %eax,-0x24(%ebp)
08aa6d42 +0x0624:  mov    0x8(%ebp),%eax
08aa6d45 +0x0627:  mov    0x4(%eax),%edx
08aa6d48 +0x062a:  mov    0x8(%ebp),%eax
08aa6d4b +0x062d:  lea    -0x24(%ebp),%ecx
08aa6d4e +0x0630:  mov    %ecx,0x8(%esp)
08aa6d52 +0x0634:  mov    %edx,0x4(%esp)
08aa6d56 +0x0638:  mov    %eax,(%esp)
08aa6d59 +0x063b:  call   08aa6cda <+0x5bc>
08aa6d5e +0x0640:  mov    0x8(%ebp),%eax
08aa6d61 +0x0643:  mov    0x4(%eax),%eax
08aa6d64 +0x0646:  lea    0x4(%eax),%edx
08aa6d67 +0x0649:  mov    0x8(%ebp),%eax
08aa6d6a +0x064c:  mov    %edx,0x4(%eax)
08aa6d6d +0x064f:  mov    0x8(%ebp),%eax
08aa6d70 +0x0652:  mov    0x4(%eax),%eax
08aa6d73 +0x0655:  lea    -0x4(%eax),%esi
08aa6d76 +0x0658:  mov    0x8(%ebp),%eax
08aa6d79 +0x065b:  mov    0x4(%eax),%eax
08aa6d7c +0x065e:  lea    -0x8(%eax),%ebx
08aa6d7f +0x0661:  lea    0xc(%ebp),%eax
08aa6d82 +0x0664:  mov    %eax,(%esp)
08aa6d85 +0x0667:  call   08aa6ae0 <+0x3c2>
08aa6d8a +0x066c:  mov    (%eax),%eax
08aa6d8c +0x066e:  mov    %esi,0x8(%esp)
08aa6d90 +0x0672:  mov    %ebx,0x4(%esp)
08aa6d94 +0x0676:  mov    %eax,(%esp)
08aa6d97 +0x0679:  call   08aa738c <+0xc6e>
08aa6d9c +0x067e:  lea    0xc(%ebp),%eax
08aa6d9f +0x0681:  mov    %eax,(%esp)
08aa6da2 +0x0684:  call   08aa6856 <+0x138>
08aa6da7 +0x0689:  mov    %eax,%ebx
08aa6da9 +0x068b:  mov    0x10(%ebp),%eax
08aa6dac +0x068e:  mov    %eax,(%esp)
08aa6daf +0x0691:  call   08aa6cd1 <+0x5b3>
08aa6db4 +0x0696:  mov    (%eax),%eax
08aa6db6 +0x0698:  mov    %eax,(%ebx)
08aa6db8 +0x069a:  jmp    08aa6fc7 <+0x8a9>
08aa6dbd +0x069f:  movl   $"vector::_M_insert_aux",0x8(%esp)
08aa6dc5 +0x06a7:  movl   $0x1,0x4(%esp)
08aa6dcd +0x06af:  mov    0x8(%ebp),%eax
08aa6dd0 +0x06b2:  mov    %eax,(%esp)
08aa6dd3 +0x06b5:  call   08aa73c4 <+0xca6>
08aa6dd8 +0x06ba:  mov    %eax,-0x18(%ebp)
08aa6ddb +0x06bd:  lea    -0x20(%ebp),%eax
08aa6dde +0x06c0:  mov    0x8(%ebp),%edx
08aa6de1 +0x06c3:  mov    %edx,0x4(%esp)
08aa6de5 +0x06c7:  mov    %eax,(%esp)
08aa6de8 +0x06ca:  call   08aa67ac <+0x8e>
08aa6ded +0x06cf:  sub    $0x4,%esp
08aa6df0 +0x06d2:  lea    -0x20(%ebp),%eax
08aa6df3 +0x06d5:  mov    %eax,0x4(%esp)
08aa6df7 +0x06d9:  lea    0xc(%ebp),%eax
08aa6dfa +0x06dc:  mov    %eax,(%esp)
08aa6dfd +0x06df:  call   08aa7469 <+0xd4b>
08aa6e02 +0x06e4:  mov    %eax,-0x14(%ebp)
08aa6e05 +0x06e7:  mov    0x8(%ebp),%eax
08aa6e08 +0x06ea:  mov    -0x18(%ebp),%edx
08aa6e0b +0x06ed:  mov    %edx,0x4(%esp)
08aa6e0f +0x06f1:  mov    %eax,(%esp)
08aa6e12 +0x06f4:  call   08aa749c <+0xd7e>
08aa6e17 +0x06f9:  mov    %eax,-0x10(%ebp)
08aa6e1a +0x06fc:  mov    -0x10(%ebp),%eax
08aa6e1d +0x06ff:  mov    %eax,-0xc(%ebp)
08aa6e20 +0x0702:  mov    0x10(%ebp),%eax
08aa6e23 +0x0705:  mov    %eax,(%esp)
08aa6e26 +0x0708:  call   08aa6cd1 <+0x5b3>
08aa6e2b +0x070d:  mov    (%eax),%eax
08aa6e2d +0x070f:  mov    %eax,-0x1c(%ebp)
08aa6e30 +0x0712:  mov    -0x14(%ebp),%eax
08aa6e33 +0x0715:  shl    $0x2,%eax
08aa6e36 +0x0718:  mov    %eax,%edx
08aa6e38 +0x071a:  add    -0x10(%ebp),%edx
08aa6e3b +0x071d:  mov    0x8(%ebp),%eax
08aa6e3e +0x0720:  lea    -0x1c(%ebp),%ecx
08aa6e41 +0x0723:  mov    %ecx,0x8(%esp)
08aa6e45 +0x0727:  mov    %edx,0x4(%esp)
08aa6e49 +0x072b:  mov    %eax,(%esp)
08aa6e4c +0x072e:  call   08aa6cda <+0x5bc>
08aa6e51 +0x0733:  movl   $0x0,-0xc(%ebp)
08aa6e58 +0x073a:  mov    0x8(%ebp),%eax
08aa6e5b +0x073d:  mov    %eax,(%esp)
08aa6e5e +0x0740:  call   08aa6aae <+0x390>
08aa6e63 +0x0745:  mov    %eax,%ebx
08aa6e65 +0x0747:  lea    0xc(%ebp),%eax
08aa6e68 +0x074a:  mov    %eax,(%esp)
08aa6e6b +0x074d:  call   08aa6ae0 <+0x3c2>
08aa6e70 +0x0752:  mov    (%eax),%edx
08aa6e72 +0x0754:  mov    0x8(%ebp),%eax
08aa6e75 +0x0757:  mov    (%eax),%eax
08aa6e77 +0x0759:  mov    %ebx,0xc(%esp)
08aa6e7b +0x075d:  mov    -0x10(%ebp),%ecx
08aa6e7e +0x0760:  mov    %ecx,0x8(%esp)
08aa6e82 +0x0764:  mov    %edx,0x4(%esp)
08aa6e86 +0x0768:  mov    %eax,(%esp)
08aa6e89 +0x076b:  call   08aa74cb <+0xdad>
08aa6e8e +0x0770:  mov    %eax,-0xc(%ebp)
08aa6e91 +0x0773:  addl   $0x4,-0xc(%ebp)
08aa6e95 +0x0777:  mov    0x8(%ebp),%eax
08aa6e98 +0x077a:  mov    %eax,(%esp)
08aa6e9b +0x077d:  call   08aa6aae <+0x390>
08aa6ea0 +0x0782:  mov    %eax,%ebx
08aa6ea2 +0x0784:  mov    0x8(%ebp),%eax
08aa6ea5 +0x0787:  mov    0x4(%eax),%esi
08aa6ea8 +0x078a:  lea    0xc(%ebp),%eax
08aa6eab +0x078d:  mov    %eax,(%esp)
08aa6eae +0x0790:  call   08aa6ae0 <+0x3c2>
08aa6eb3 +0x0795:  mov    (%eax),%eax
08aa6eb5 +0x0797:  mov    %ebx,0xc(%esp)
08aa6eb9 +0x079b:  mov    -0xc(%ebp),%edx
08aa6ebc +0x079e:  mov    %edx,0x8(%esp)
08aa6ec0 +0x07a2:  mov    %esi,0x4(%esp)
08aa6ec4 +0x07a6:  mov    %eax,(%esp)
08aa6ec7 +0x07a9:  call   08aa74cb <+0xdad>
08aa6ecc +0x07ae:  mov    %eax,-0xc(%ebp)
08aa6ecf +0x07b1:  mov    0x8(%ebp),%eax
08aa6ed2 +0x07b4:  mov    %eax,(%esp)
08aa6ed5 +0x07b7:  call   08aa6aae <+0x390>
08aa6eda +0x07bc:  mov    0x8(%ebp),%edx
08aa6edd +0x07bf:  mov    0x4(%edx),%ecx
08aa6ee0 +0x07c2:  mov    0x8(%ebp),%edx
08aa6ee3 +0x07c5:  mov    (%edx),%edx
08aa6ee5 +0x07c7:  mov    %eax,0x8(%esp)
08aa6ee9 +0x07cb:  mov    %ecx,0x4(%esp)
08aa6eed +0x07cf:  mov    %edx,(%esp)
08aa6ef0 +0x07d2:  call   08aa6ab6 <+0x398>
08aa6ef5 +0x07d7:  mov    0x8(%ebp),%eax
08aa6ef8 +0x07da:  mov    0x8(%eax),%eax
08aa6efb +0x07dd:  mov    %eax,%edx
08aa6efd +0x07df:  mov    0x8(%ebp),%eax
08aa6f00 +0x07e2:  mov    (%eax),%eax
08aa6f02 +0x07e4:  mov    %edx,%ecx
08aa6f04 +0x07e6:  sub    %eax,%ecx
08aa6f06 +0x07e8:  mov    %ecx,%eax
08aa6f08 +0x07ea:  sar    $0x2,%eax
08aa6f0b +0x07ed:  mov    %eax,%ecx
08aa6f0d +0x07ef:  mov    0x8(%ebp),%eax
08aa6f10 +0x07f2:  mov    (%eax),%edx
08aa6f12 +0x07f4:  mov    0x8(%ebp),%eax
08aa6f15 +0x07f7:  mov    %ecx,0x8(%esp)
08aa6f19 +0x07fb:  mov    %edx,0x4(%esp)
08aa6f1d +0x07ff:  mov    %eax,(%esp)
08aa6f20 +0x0802:  call   08aa6c90 <+0x572>
08aa6f25 +0x0807:  mov    0x8(%ebp),%eax
08aa6f28 +0x080a:  mov    -0x10(%ebp),%edx
08aa6f2b +0x080d:  mov    %edx,(%eax)
08aa6f2d +0x080f:  mov    0x8(%ebp),%eax
08aa6f30 +0x0812:  mov    -0xc(%ebp),%edx
08aa6f33 +0x0815:  mov    %edx,0x4(%eax)
08aa6f36 +0x0818:  mov    -0x18(%ebp),%eax
08aa6f39 +0x081b:  shl    $0x2,%eax
08aa6f3c +0x081e:  mov    %eax,%edx
08aa6f3e +0x0820:  add    -0x10(%ebp),%edx
08aa6f41 +0x0823:  mov    0x8(%ebp),%eax
08aa6f44 +0x0826:  mov    %edx,0x8(%eax)
08aa6f47 +0x0829:  jmp    08aa6fc7 <+0x8a9>
08aa6f49 +0x082b:  mov    %eax,(%esp)
08aa6f4c +0x082e:  call   08725ce0 <__cxa_begin_catch>
08aa6f51 +0x0833:  cmpl   $0x0,-0xc(%ebp)
08aa6f55 +0x0837:  jne    08aa6f73 <+0x855>
08aa6f57 +0x0839:  mov    -0x14(%ebp),%eax
08aa6f5a +0x083c:  shl    $0x2,%eax
08aa6f5d +0x083f:  mov    %eax,%edx
08aa6f5f +0x0841:  add    -0x10(%ebp),%edx
08aa6f62 +0x0844:  mov    0x8(%ebp),%eax
08aa6f65 +0x0847:  mov    %edx,0x4(%esp)
08aa6f69 +0x084b:  mov    %eax,(%esp)
08aa6f6c +0x084e:  call   08aa751e <+0xe00>
08aa6f71 +0x0853:  jmp    08aa6f94 <+0x876>
08aa6f73 +0x0855:  mov    0x8(%ebp),%eax
08aa6f76 +0x0858:  mov    %eax,(%esp)
08aa6f79 +0x085b:  call   08aa6aae <+0x390>
08aa6f7e +0x0860:  mov    %eax,0x8(%esp)
08aa6f82 +0x0864:  mov    -0xc(%ebp),%eax
08aa6f85 +0x0867:  mov    %eax,0x4(%esp)
08aa6f89 +0x086b:  mov    -0x10(%ebp),%eax
08aa6f8c +0x086e:  mov    %eax,(%esp)
08aa6f8f +0x0871:  call   08aa6ab6 <+0x398>
08aa6f94 +0x0876:  mov    0x8(%ebp),%eax
08aa6f97 +0x0879:  mov    -0x18(%ebp),%edx
08aa6f9a +0x087c:  mov    %edx,0x8(%esp)
08aa6f9e +0x0880:  mov    -0x10(%ebp),%edx
08aa6fa1 +0x0883:  mov    %edx,0x4(%esp)
08aa6fa5 +0x0887:  mov    %eax,(%esp)
08aa6fa8 +0x088a:  call   08aa6c90 <+0x572>
08aa6fad +0x088f:  call   08724be0 <__cxa_rethrow>
08aa6fb2 +0x0894:  mov    %edx,%ebx
08aa6fb4 +0x0896:  mov    %eax,%esi
08aa6fb6 +0x0898:  call   08725c30 <__cxa_end_catch>
08aa6fbb +0x089d:  mov    %esi,%eax
08aa6fbd +0x089f:  mov    %ebx,%edx
08aa6fbf +0x08a1:  mov    %eax,(%esp)
08aa6fc2 +0x08a4:  call   08ae3750 <_Unwind_Resume>
08aa6fc7 +0x08a9:  lea    -0x8(%ebp),%esp
08aa6fca +0x08ac:  add    $0x0,%esp
08aa6fcd +0x08af:  pop    %ebx
08aa6fce +0x08b0:  pop    %esi
08aa6fcf +0x08b1:  pop    %ebp
08aa6fd0 +0x08b2:  ret
08aa6fd1 +0x08b3:  push   %ebp
08aa6fd2 +0x08b4:  mov    %esp,%ebp
08aa6fd4 +0x08b6:  mov    0x8(%ebp),%eax
08aa6fd7 +0x08b9:  pop    %ebp
08aa6fd8 +0x08ba:  ret
08aa6fd9 +0x08bb:  nop
08aa6fda +0x08bc:  push   %ebp
08aa6fdb +0x08bd:  mov    %esp,%ebp
08aa6fdd +0x08bf:  push   %edi
08aa6fde +0x08c0:  push   %esi
08aa6fdf +0x08c1:  push   %ebx
08aa6fe0 +0x08c2:  sub    $0x2c,%esp
08aa6fe3 +0x08c5:  mov    0x10(%ebp),%eax
08aa6fe6 +0x08c8:  mov    %eax,(%esp)
08aa6fe9 +0x08cb:  call   08aa6fd1 <+0x8b3>
08aa6fee +0x08d0:  mov    %eax,%edi
08aa6ff0 +0x08d2:  mov    0xc(%ebp),%esi
08aa6ff3 +0x08d5:  mov    %esi,0x4(%esp)
08aa6ff7 +0x08d9:  movl   $0x4,(%esp)
08aa6ffe +0x08e0:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
08aa7003 +0x08e5:  mov    %eax,%ebx
08aa7005 +0x08e7:  mov    %ebx,%eax
08aa7007 +0x08e9:  test   %eax,%eax
08aa7009 +0x08eb:  je     08aa7039 <+0x91b>
08aa700b +0x08ed:  mov    %ebx,%eax
08aa700d +0x08ef:  mov    %edi,0x4(%esp)
08aa7011 +0x08f3:  mov    %eax,(%esp)
08aa7014 +0x08f6:  call   0871d2e0 <_GLOBAL__I_wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x7cc4>  ; global constructors keyed to wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x7cc4
08aa7019 +0x08fb:  jmp    08aa7039 <+0x91b>
08aa701b +0x08fd:  mov    %edx,%edi
08aa701d +0x08ff:  mov    %eax,-0x1c(%ebp)
08aa7020 +0x0902:  mov    %esi,0x4(%esp)
08aa7024 +0x0906:  mov    %ebx,(%esp)
08aa7027 +0x0909:  call   0807fff6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x1c>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x1c
08aa702c +0x090e:  mov    -0x1c(%ebp),%eax
08aa702f +0x0911:  mov    %edi,%edx
08aa7031 +0x0913:  mov    %eax,(%esp)
08aa7034 +0x0916:  call   08ae3750 <_Unwind_Resume>
08aa7039 +0x091b:  add    $0x2c,%esp
08aa703c +0x091e:  pop    %ebx
08aa703d +0x091f:  pop    %esi
08aa703e +0x0920:  pop    %edi
08aa703f +0x0921:  pop    %ebp
08aa7040 +0x0922:  ret
08aa7041 +0x0923:  nop
08aa7042 +0x0924:  push   %ebp
08aa7043 +0x0925:  mov    %esp,%ebp
08aa7045 +0x0927:  push   %ebx
08aa7046 +0x0928:  sub    $0x14,%esp
08aa7049 +0x092b:  mov    0x8(%ebp),%ebx
08aa704c +0x092e:  mov    0xc(%ebp),%eax
08aa704f +0x0931:  add    $0x4,%eax
08aa7052 +0x0934:  mov    %eax,0x4(%esp)
08aa7056 +0x0938:  mov    %ebx,(%esp)
08aa7059 +0x093b:  call   08aa7524 <+0xe06>
08aa705e +0x0940:  mov    %ebx,%eax
08aa7060 +0x0942:  add    $0x14,%esp
08aa7063 +0x0945:  pop    %ebx
08aa7064 +0x0946:  pop    %ebp
08aa7065 +0x0947:  ret    $0x4
08aa7068 +0x094a:  push   %ebp
08aa7069 +0x094b:  mov    %esp,%ebp
08aa706b +0x094d:  push   %esi
08aa706c +0x094e:  push   %ebx
08aa706d +0x094f:  sub    $0x30,%esp
08aa7070 +0x0952:  mov    0x8(%ebp),%eax
08aa7073 +0x0955:  mov    0x4(%eax),%edx
08aa7076 +0x0958:  mov    0x8(%ebp),%eax
08aa7079 +0x095b:  mov    0x8(%eax),%eax
08aa707c +0x095e:  cmp    %eax,%edx
08aa707e +0x0960:  je     08aa714d <+0xa2f>
08aa7084 +0x0966:  mov    0x8(%ebp),%eax
08aa7087 +0x0969:  mov    0x4(%eax),%eax
08aa708a +0x096c:  sub    $0x4,%eax
08aa708d +0x096f:  mov    %eax,(%esp)
08aa7090 +0x0972:  call   08aa6bb9 <+0x49b>
08aa7095 +0x0977:  mov    0x8(%ebp),%edx
08aa7098 +0x097a:  mov    0x4(%edx),%ecx
08aa709b +0x097d:  mov    0x8(%ebp),%edx
08aa709e +0x0980:  mov    %eax,0x8(%esp)
08aa70a2 +0x0984:  mov    %ecx,0x4(%esp)
08aa70a6 +0x0988:  mov    %edx,(%esp)
08aa70a9 +0x098b:  call   08aa6fda <+0x8bc>
08aa70ae +0x0990:  mov    0x8(%ebp),%eax
08aa70b1 +0x0993:  mov    0x4(%eax),%eax
08aa70b4 +0x0996:  lea    0x4(%eax),%edx
08aa70b7 +0x0999:  mov    0x8(%ebp),%eax
08aa70ba +0x099c:  mov    %edx,0x4(%eax)
08aa70bd +0x099f:  mov    0x8(%ebp),%eax
08aa70c0 +0x09a2:  mov    0x4(%eax),%eax
08aa70c3 +0x09a5:  lea    -0x4(%eax),%esi
08aa70c6 +0x09a8:  mov    0x8(%ebp),%eax
08aa70c9 +0x09ab:  mov    0x4(%eax),%eax
08aa70cc +0x09ae:  lea    -0x8(%eax),%ebx
08aa70cf +0x09b1:  lea    0xc(%ebp),%eax
08aa70d2 +0x09b4:  mov    %eax,(%esp)
08aa70d5 +0x09b7:  call   08aa7534 <+0xe16>
08aa70da +0x09bc:  mov    (%eax),%eax
08aa70dc +0x09be:  mov    %esi,0x8(%esp)
08aa70e0 +0x09c2:  mov    %ebx,0x4(%esp)
08aa70e4 +0x09c6:  mov    %eax,(%esp)
08aa70e7 +0x09c9:  call   08aa753c <+0xe1e>
08aa70ec +0x09ce:  mov    0x10(%ebp),%eax
08aa70ef +0x09d1:  mov    %eax,(%esp)
08aa70f2 +0x09d4:  call   08aa6fd1 <+0x8b3>
08aa70f7 +0x09d9:  mov    %eax,0x4(%esp)
08aa70fb +0x09dd:  lea    -0x20(%ebp),%eax
08aa70fe +0x09e0:  mov    %eax,(%esp)
08aa7101 +0x09e3:  call   0871d2e0 <_GLOBAL__I_wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x7cc4>  ; global constructors keyed to wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x7cc4
08aa7106 +0x09e8:  lea    0xc(%ebp),%eax
08aa7109 +0x09eb:  mov    %eax,(%esp)
08aa710c +0x09ee:  call   08aa7574 <+0xe56>
08aa7111 +0x09f3:  lea    -0x20(%ebp),%edx
08aa7114 +0x09f6:  mov    %edx,0x4(%esp)
08aa7118 +0x09fa:  mov    %eax,(%esp)
08aa711b +0x09fd:  call   0871d840 <_GLOBAL__I_wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x8224>  ; global constructors keyed to wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x8224
08aa7120 +0x0a02:  jmp    08aa713d <+0xa1f>
08aa7122 +0x0a04:  mov    %edx,%ebx
08aa7124 +0x0a06:  mov    %eax,%esi
08aa7126 +0x0a08:  lea    -0x20(%ebp),%eax
08aa7129 +0x0a0b:  mov    %eax,(%esp)
08aa712c +0x0a0e:  call   0871d720 <_GLOBAL__I_wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x8104>  ; global constructors keyed to wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x8104
08aa7131 +0x0a13:  mov    %esi,%eax
08aa7133 +0x0a15:  mov    %ebx,%edx
08aa7135 +0x0a17:  mov    %eax,(%esp)
08aa7138 +0x0a1a:  call   08ae3750 <_Unwind_Resume>
08aa713d +0x0a1f:  lea    -0x20(%ebp),%eax
08aa7140 +0x0a22:  mov    %eax,(%esp)
08aa7143 +0x0a25:  call   0871d720 <_GLOBAL__I_wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x8104>  ; global constructors keyed to wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x8104
08aa7148 +0x0a2a:  jmp    08aa734f <+0xc31>
08aa714d +0x0a2f:  movl   $"vector::_M_insert_aux",0x8(%esp)
08aa7155 +0x0a37:  movl   $0x1,0x4(%esp)
08aa715d +0x0a3f:  mov    0x8(%ebp),%eax
08aa7160 +0x0a42:  mov    %eax,(%esp)
08aa7163 +0x0a45:  call   08aa757e <+0xe60>
08aa7168 +0x0a4a:  mov    %eax,-0x18(%ebp)
08aa716b +0x0a4d:  lea    -0x1c(%ebp),%eax
08aa716e +0x0a50:  mov    0x8(%ebp),%edx
08aa7171 +0x0a53:  mov    %edx,0x4(%esp)
08aa7175 +0x0a57:  mov    %eax,(%esp)
08aa7178 +0x0a5a:  call   08aa7624 <+0xf06>
08aa717d +0x0a5f:  sub    $0x4,%esp
08aa7180 +0x0a62:  lea    -0x1c(%ebp),%eax
08aa7183 +0x0a65:  mov    %eax,0x4(%esp)
08aa7187 +0x0a69:  lea    0xc(%ebp),%eax
08aa718a +0x0a6c:  mov    %eax,(%esp)
08aa718d +0x0a6f:  call   08aa7647 <+0xf29>
08aa7192 +0x0a74:  mov    %eax,-0x14(%ebp)
08aa7195 +0x0a77:  mov    0x8(%ebp),%eax
08aa7198 +0x0a7a:  mov    -0x18(%ebp),%edx
08aa719b +0x0a7d:  mov    %edx,0x4(%esp)
08aa719f +0x0a81:  mov    %eax,(%esp)
08aa71a2 +0x0a84:  call   08aa767a <+0xf5c>
08aa71a7 +0x0a89:  mov    %eax,-0x10(%ebp)
08aa71aa +0x0a8c:  mov    -0x10(%ebp),%eax
08aa71ad +0x0a8f:  mov    %eax,-0xc(%ebp)
08aa71b0 +0x0a92:  mov    0x10(%ebp),%eax
08aa71b3 +0x0a95:  mov    %eax,(%esp)
08aa71b6 +0x0a98:  call   08aa6fd1 <+0x8b3>
08aa71bb +0x0a9d:  mov    -0x14(%ebp),%edx
08aa71be +0x0aa0:  shl    $0x2,%edx
08aa71c1 +0x0aa3:  mov    %edx,%ecx
08aa71c3 +0x0aa5:  add    -0x10(%ebp),%ecx
08aa71c6 +0x0aa8:  mov    0x8(%ebp),%edx
08aa71c9 +0x0aab:  mov    %eax,0x8(%esp)
08aa71cd +0x0aaf:  mov    %ecx,0x4(%esp)
08aa71d1 +0x0ab3:  mov    %edx,(%esp)
08aa71d4 +0x0ab6:  call   08aa6fda <+0x8bc>
08aa71d9 +0x0abb:  movl   $0x0,-0xc(%ebp)
08aa71e0 +0x0ac2:  mov    0x8(%ebp),%eax
08aa71e3 +0x0ac5:  mov    %eax,(%esp)
08aa71e6 +0x0ac8:  call   08aa76aa <+0xf8c>
08aa71eb +0x0acd:  mov    %eax,%ebx
08aa71ed +0x0acf:  lea    0xc(%ebp),%eax
08aa71f0 +0x0ad2:  mov    %eax,(%esp)
08aa71f3 +0x0ad5:  call   08aa7534 <+0xe16>
08aa71f8 +0x0ada:  mov    (%eax),%edx
08aa71fa +0x0adc:  mov    0x8(%ebp),%eax
08aa71fd +0x0adf:  mov    (%eax),%eax
08aa71ff +0x0ae1:  mov    %ebx,0xc(%esp)
08aa7203 +0x0ae5:  mov    -0x10(%ebp),%ecx
08aa7206 +0x0ae8:  mov    %ecx,0x8(%esp)
08aa720a +0x0aec:  mov    %edx,0x4(%esp)
08aa720e +0x0af0:  mov    %eax,(%esp)
08aa7211 +0x0af3:  call   08aa76b2 <+0xf94>
08aa7216 +0x0af8:  mov    %eax,-0xc(%ebp)
08aa7219 +0x0afb:  addl   $0x4,-0xc(%ebp)
08aa721d +0x0aff:  mov    0x8(%ebp),%eax
08aa7220 +0x0b02:  mov    %eax,(%esp)
08aa7223 +0x0b05:  call   08aa76aa <+0xf8c>
08aa7228 +0x0b0a:  mov    %eax,%ebx
08aa722a +0x0b0c:  mov    0x8(%ebp),%eax
08aa722d +0x0b0f:  mov    0x4(%eax),%esi
08aa7230 +0x0b12:  lea    0xc(%ebp),%eax
08aa7233 +0x0b15:  mov    %eax,(%esp)
08aa7236 +0x0b18:  call   08aa7534 <+0xe16>
08aa723b +0x0b1d:  mov    (%eax),%eax
08aa723d +0x0b1f:  mov    %ebx,0xc(%esp)
08aa7241 +0x0b23:  mov    -0xc(%ebp),%edx
08aa7244 +0x0b26:  mov    %edx,0x8(%esp)
08aa7248 +0x0b2a:  mov    %esi,0x4(%esp)
08aa724c +0x0b2e:  mov    %eax,(%esp)
08aa724f +0x0b31:  call   08aa76b2 <+0xf94>
08aa7254 +0x0b36:  mov    %eax,-0xc(%ebp)
08aa7257 +0x0b39:  mov    0x8(%ebp),%eax
08aa725a +0x0b3c:  mov    %eax,(%esp)
08aa725d +0x0b3f:  call   08aa76aa <+0xf8c>
08aa7262 +0x0b44:  mov    0x8(%ebp),%edx
08aa7265 +0x0b47:  mov    0x4(%edx),%ecx
08aa7268 +0x0b4a:  mov    0x8(%ebp),%edx
08aa726b +0x0b4d:  mov    (%edx),%edx
08aa726d +0x0b4f:  mov    %eax,0x8(%esp)
08aa7271 +0x0b53:  mov    %ecx,0x4(%esp)
08aa7275 +0x0b57:  mov    %edx,(%esp)
08aa7278 +0x0b5a:  call   08aa7717 <+0xff9>
08aa727d +0x0b5f:  mov    0x8(%ebp),%eax
08aa7280 +0x0b62:  mov    0x8(%eax),%eax
08aa7283 +0x0b65:  mov    %eax,%edx
08aa7285 +0x0b67:  mov    0x8(%ebp),%eax
08aa7288 +0x0b6a:  mov    (%eax),%eax
08aa728a +0x0b6c:  mov    %edx,%ecx
08aa728c +0x0b6e:  sub    %eax,%ecx
08aa728e +0x0b70:  mov    %ecx,%eax
08aa7290 +0x0b72:  sar    $0x2,%eax
08aa7293 +0x0b75:  mov    %eax,%ecx
08aa7295 +0x0b77:  mov    0x8(%ebp),%eax
08aa7298 +0x0b7a:  mov    (%eax),%edx
08aa729a +0x0b7c:  mov    0x8(%ebp),%eax
08aa729d +0x0b7f:  mov    %ecx,0x8(%esp)
08aa72a1 +0x0b83:  mov    %edx,0x4(%esp)
08aa72a5 +0x0b87:  mov    %eax,(%esp)
08aa72a8 +0x0b8a:  call   08aa7732 <+0x1014>
08aa72ad +0x0b8f:  mov    0x8(%ebp),%eax
08aa72b0 +0x0b92:  mov    -0x10(%ebp),%edx
08aa72b3 +0x0b95:  mov    %edx,(%eax)
08aa72b5 +0x0b97:  mov    0x8(%ebp),%eax
08aa72b8 +0x0b9a:  mov    -0xc(%ebp),%edx
08aa72bb +0x0b9d:  mov    %edx,0x4(%eax)
08aa72be +0x0ba0:  mov    -0x18(%ebp),%eax
08aa72c1 +0x0ba3:  shl    $0x2,%eax
08aa72c4 +0x0ba6:  mov    %eax,%edx
08aa72c6 +0x0ba8:  add    -0x10(%ebp),%edx
08aa72c9 +0x0bab:  mov    0x8(%ebp),%eax
08aa72cc +0x0bae:  mov    %edx,0x8(%eax)
08aa72cf +0x0bb1:  jmp    08aa734f <+0xc31>
08aa72d1 +0x0bb3:  mov    %eax,(%esp)
08aa72d4 +0x0bb6:  call   08725ce0 <__cxa_begin_catch>
08aa72d9 +0x0bbb:  cmpl   $0x0,-0xc(%ebp)
08aa72dd +0x0bbf:  jne    08aa72fb <+0xbdd>
08aa72df +0x0bc1:  mov    -0x14(%ebp),%eax
08aa72e2 +0x0bc4:  shl    $0x2,%eax
08aa72e5 +0x0bc7:  mov    %eax,%edx
08aa72e7 +0x0bc9:  add    -0x10(%ebp),%edx
08aa72ea +0x0bcc:  mov    0x8(%ebp),%eax
08aa72ed +0x0bcf:  mov    %edx,0x4(%esp)
08aa72f1 +0x0bd3:  mov    %eax,(%esp)
08aa72f4 +0x0bd6:  call   08aa7704 <+0xfe6>
08aa72f9 +0x0bdb:  jmp    08aa731c <+0xbfe>
08aa72fb +0x0bdd:  mov    0x8(%ebp),%eax
08aa72fe +0x0be0:  mov    %eax,(%esp)
08aa7301 +0x0be3:  call   08aa76aa <+0xf8c>
08aa7306 +0x0be8:  mov    %eax,0x8(%esp)
08aa730a +0x0bec:  mov    -0xc(%ebp),%eax
08aa730d +0x0bef:  mov    %eax,0x4(%esp)
08aa7311 +0x0bf3:  mov    -0x10(%ebp),%eax
08aa7314 +0x0bf6:  mov    %eax,(%esp)
08aa7317 +0x0bf9:  call   08aa7717 <+0xff9>
08aa731c +0x0bfe:  mov    0x8(%ebp),%eax
08aa731f +0x0c01:  mov    -0x18(%ebp),%edx
08aa7322 +0x0c04:  mov    %edx,0x8(%esp)
08aa7326 +0x0c08:  mov    -0x10(%ebp),%edx
08aa7329 +0x0c0b:  mov    %edx,0x4(%esp)
08aa732d +0x0c0f:  mov    %eax,(%esp)
08aa7330 +0x0c12:  call   08aa7732 <+0x1014>
08aa7335 +0x0c17:  call   08724be0 <__cxa_rethrow>
08aa733a +0x0c1c:  mov    %edx,%ebx
08aa733c +0x0c1e:  mov    %eax,%esi
08aa733e +0x0c20:  call   08725c30 <__cxa_end_catch>
08aa7343 +0x0c25:  mov    %esi,%eax
08aa7345 +0x0c27:  mov    %ebx,%edx
08aa7347 +0x0c29:  mov    %eax,(%esp)
08aa734a +0x0c2c:  call   08ae3750 <_Unwind_Resume>
08aa734f +0x0c31:  lea    -0x8(%ebp),%esp
08aa7352 +0x0c34:  add    $0x0,%esp
08aa7355 +0x0c37:  pop    %ebx
08aa7356 +0x0c38:  pop    %esi
08aa7357 +0x0c39:  pop    %ebp
08aa7358 +0x0c3a:  ret
08aa7359 +0x0c3b:  nop
08aa735a +0x0c3c:  push   %ebp
08aa735b +0x0c3d:  mov    %esp,%ebp
08aa735d +0x0c3f:  sub    $0x18,%esp
08aa7360 +0x0c42:  mov    0x8(%ebp),%eax
08aa7363 +0x0c45:  mov    %eax,(%esp)
08aa7366 +0x0c48:  call   08aa775a <+0x103c>
08aa736b +0x0c4d:  leave
08aa736c +0x0c4e:  ret
08aa736d +0x0c4f:  nop
08aa736e +0x0c50:  push   %ebp
08aa736f +0x0c51:  mov    %esp,%ebp
08aa7371 +0x0c53:  pop    %ebp
08aa7372 +0x0c54:  ret
08aa7373 +0x0c55:  nop
08aa7374 +0x0c56:  push   %ebp
08aa7375 +0x0c57:  mov    %esp,%ebp
08aa7377 +0x0c59:  sub    $0x18,%esp
08aa737a +0x0c5c:  mov    0xc(%ebp),%eax
08aa737d +0x0c5f:  mov    %eax,(%esp)
08aa7380 +0x0c62:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08aa7385 +0x0c67:  leave
08aa7386 +0x0c68:  ret
08aa7387 +0x0c69:  push   %ebp
08aa7388 +0x0c6a:  mov    %esp,%ebp
08aa738a +0x0c6c:  pop    %ebp
08aa738b +0x0c6d:  ret
08aa738c +0x0c6e:  push   %ebp
08aa738d +0x0c6f:  mov    %esp,%ebp
08aa738f +0x0c71:  push   %ebx
08aa7390 +0x0c72:  sub    $0x14,%esp
08aa7393 +0x0c75:  mov    0xc(%ebp),%eax
08aa7396 +0x0c78:  mov    %eax,(%esp)
08aa7399 +0x0c7b:  call   08aa775f <+0x1041>
08aa739e +0x0c80:  mov    %eax,%ebx
08aa73a0 +0x0c82:  mov    0x8(%ebp),%eax
08aa73a3 +0x0c85:  mov    %eax,(%esp)
08aa73a6 +0x0c88:  call   08aa775f <+0x1041>
08aa73ab +0x0c8d:  mov    0x10(%ebp),%edx
08aa73ae +0x0c90:  mov    %edx,0x8(%esp)
08aa73b2 +0x0c94:  mov    %ebx,0x4(%esp)
08aa73b6 +0x0c98:  mov    %eax,(%esp)
08aa73b9 +0x0c9b:  call   08aa7767 <+0x1049>
08aa73be +0x0ca0:  add    $0x14,%esp
08aa73c1 +0x0ca3:  pop    %ebx
08aa73c2 +0x0ca4:  pop    %ebp
08aa73c3 +0x0ca5:  ret
08aa73c4 +0x0ca6:  push   %ebp
08aa73c5 +0x0ca7:  mov    %esp,%ebp
08aa73c7 +0x0ca9:  push   %ebx
08aa73c8 +0x0caa:  sub    $0x24,%esp
08aa73cb +0x0cad:  mov    0x8(%ebp),%eax
08aa73ce +0x0cb0:  mov    %eax,(%esp)
08aa73d1 +0x0cb3:  call   08aa77ac <+0x108e>
08aa73d6 +0x0cb8:  mov    %eax,%ebx
08aa73d8 +0x0cba:  mov    0x8(%ebp),%eax
08aa73db +0x0cbd:  mov    %eax,(%esp)
08aa73de +0x0cc0:  call   08aa68b2 <+0x194>
08aa73e3 +0x0cc5:  mov    %ebx,%edx
08aa73e5 +0x0cc7:  sub    %eax,%edx
08aa73e7 +0x0cc9:  mov    0xc(%ebp),%eax
08aa73ea +0x0ccc:  cmp    %eax,%edx
08aa73ec +0x0cce:  setb   %al
08aa73ef +0x0cd1:  test   %al,%al
08aa73f1 +0x0cd3:  je     08aa73fe <+0xce0>
08aa73f3 +0x0cd5:  mov    0x10(%ebp),%eax
08aa73f6 +0x0cd8:  mov    %eax,(%esp)
08aa73f9 +0x0cdb:  call   086d9c40 <_ZSt20__throw_length_errorPKc>  ; std::__throw_length_error(char const*)
08aa73fe +0x0ce0:  mov    0x8(%ebp),%eax
08aa7401 +0x0ce3:  mov    %eax,(%esp)
08aa7404 +0x0ce6:  call   08aa68b2 <+0x194>
08aa7409 +0x0ceb:  mov    %eax,%ebx
08aa740b +0x0ced:  mov    0x8(%ebp),%eax
08aa740e +0x0cf0:  mov    %eax,(%esp)
08aa7411 +0x0cf3:  call   08aa68b2 <+0x194>
08aa7416 +0x0cf8:  mov    %eax,-0x10(%ebp)
08aa7419 +0x0cfb:  lea    0xc(%ebp),%eax
08aa741c +0x0cfe:  mov    %eax,0x4(%esp)
08aa7420 +0x0d02:  lea    -0x10(%ebp),%eax
08aa7423 +0x0d05:  mov    %eax,(%esp)
08aa7426 +0x0d08:  call   0807f531 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x601>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x601
08aa742b +0x0d0d:  mov    (%eax),%eax
08aa742d +0x0d0f:  lea    (%ebx,%eax,1),%eax
08aa7430 +0x0d12:  mov    %eax,-0xc(%ebp)
08aa7433 +0x0d15:  mov    0x8(%ebp),%eax
08aa7436 +0x0d18:  mov    %eax,(%esp)
08aa7439 +0x0d1b:  call   08aa68b2 <+0x194>
08aa743e +0x0d20:  cmp    -0xc(%ebp),%eax
08aa7441 +0x0d23:  ja     08aa7453 <+0xd35>
08aa7443 +0x0d25:  mov    0x8(%ebp),%eax
08aa7446 +0x0d28:  mov    %eax,(%esp)
08aa7449 +0x0d2b:  call   08aa77ac <+0x108e>
08aa744e +0x0d30:  cmp    -0xc(%ebp),%eax
08aa7451 +0x0d33:  jae    08aa7460 <+0xd42>
08aa7453 +0x0d35:  mov    0x8(%ebp),%eax
08aa7456 +0x0d38:  mov    %eax,(%esp)
08aa7459 +0x0d3b:  call   08aa77ac <+0x108e>
08aa745e +0x0d40:  jmp    08aa7463 <+0xd45>
08aa7460 +0x0d42:  mov    -0xc(%ebp),%eax
08aa7463 +0x0d45:  add    $0x24,%esp
08aa7466 +0x0d48:  pop    %ebx
08aa7467 +0x0d49:  pop    %ebp
08aa7468 +0x0d4a:  ret
08aa7469 +0x0d4b:  push   %ebp
08aa746a +0x0d4c:  mov    %esp,%ebp
08aa746c +0x0d4e:  push   %ebx
08aa746d +0x0d4f:  sub    $0x14,%esp
08aa7470 +0x0d52:  mov    0x8(%ebp),%eax
08aa7473 +0x0d55:  mov    %eax,(%esp)
08aa7476 +0x0d58:  call   08aa6ae0 <+0x3c2>
08aa747b +0x0d5d:  mov    (%eax),%eax
08aa747d +0x0d5f:  mov    %eax,%ebx
08aa747f +0x0d61:  mov    0xc(%ebp),%eax
08aa7482 +0x0d64:  mov    %eax,(%esp)
08aa7485 +0x0d67:  call   08aa6ae0 <+0x3c2>
08aa748a +0x0d6c:  mov    (%eax),%eax
08aa748c +0x0d6e:  mov    %ebx,%edx
08aa748e +0x0d70:  sub    %eax,%edx
08aa7490 +0x0d72:  mov    %edx,%eax
08aa7492 +0x0d74:  sar    $0x2,%eax
08aa7495 +0x0d77:  add    $0x14,%esp
08aa7498 +0x0d7a:  pop    %ebx
08aa7499 +0x0d7b:  pop    %ebp
08aa749a +0x0d7c:  ret
08aa749b +0x0d7d:  nop
08aa749c +0x0d7e:  push   %ebp
08aa749d +0x0d7f:  mov    %esp,%ebp
08aa749f +0x0d81:  sub    $0x18,%esp
08aa74a2 +0x0d84:  cmpl   $0x0,0xc(%ebp)
08aa74a6 +0x0d88:  je     08aa74c4 <+0xda6>
08aa74a8 +0x0d8a:  mov    0x8(%ebp),%eax
08aa74ab +0x0d8d:  movl   $0x0,0x8(%esp)
08aa74b3 +0x0d95:  mov    0xc(%ebp),%edx
08aa74b6 +0x0d98:  mov    %edx,0x4(%esp)
08aa74ba +0x0d9c:  mov    %eax,(%esp)
08aa74bd +0x0d9f:  call   08aa77c8 <+0x10aa>
08aa74c2 +0x0da4:  jmp    08aa74c9 <+0xdab>
08aa74c4 +0x0da6:  mov    $0x0,%eax
08aa74c9 +0x0dab:  leave
08aa74ca +0x0dac:  ret
08aa74cb +0x0dad:  push   %ebp
08aa74cc +0x0dae:  mov    %esp,%ebp
08aa74ce +0x0db0:  sub    $0x28,%esp
08aa74d1 +0x0db3:  lea    -0x10(%ebp),%eax
08aa74d4 +0x0db6:  lea    0xc(%ebp),%edx
08aa74d7 +0x0db9:  mov    %edx,0x4(%esp)
08aa74db +0x0dbd:  mov    %eax,(%esp)
08aa74de +0x0dc0:  call   08aa7800 <+0x10e2>
08aa74e3 +0x0dc5:  sub    $0x4,%esp
08aa74e6 +0x0dc8:  lea    -0xc(%ebp),%eax
08aa74e9 +0x0dcb:  lea    0x8(%ebp),%edx
08aa74ec +0x0dce:  mov    %edx,0x4(%esp)
08aa74f0 +0x0dd2:  mov    %eax,(%esp)
08aa74f3 +0x0dd5:  call   08aa7800 <+0x10e2>
08aa74f8 +0x0dda:  sub    $0x4,%esp
08aa74fb +0x0ddd:  mov    0x14(%ebp),%eax
08aa74fe +0x0de0:  mov    %eax,0xc(%esp)
08aa7502 +0x0de4:  mov    0x10(%ebp),%eax
08aa7505 +0x0de7:  mov    %eax,0x8(%esp)
08aa7509 +0x0deb:  mov    -0x10(%ebp),%eax
08aa750c +0x0dee:  mov    %eax,0x4(%esp)
08aa7510 +0x0df2:  mov    -0xc(%ebp),%eax
08aa7513 +0x0df5:  mov    %eax,(%esp)
08aa7516 +0x0df8:  call   08aa7825 <+0x1107>
08aa751b +0x0dfd:  leave
08aa751c +0x0dfe:  ret
08aa751d +0x0dff:  nop
08aa751e +0x0e00:  push   %ebp
08aa751f +0x0e01:  mov    %esp,%ebp
08aa7521 +0x0e03:  pop    %ebp
08aa7522 +0x0e04:  ret
08aa7523 +0x0e05:  nop
08aa7524 +0x0e06:  push   %ebp
08aa7525 +0x0e07:  mov    %esp,%ebp
08aa7527 +0x0e09:  mov    0xc(%ebp),%eax
08aa752a +0x0e0c:  mov    (%eax),%edx
08aa752c +0x0e0e:  mov    0x8(%ebp),%eax
08aa752f +0x0e11:  mov    %edx,(%eax)
08aa7531 +0x0e13:  pop    %ebp
08aa7532 +0x0e14:  ret
08aa7533 +0x0e15:  nop
08aa7534 +0x0e16:  push   %ebp
08aa7535 +0x0e17:  mov    %esp,%ebp
08aa7537 +0x0e19:  mov    0x8(%ebp),%eax
08aa753a +0x0e1c:  pop    %ebp
08aa753b +0x0e1d:  ret
08aa753c +0x0e1e:  push   %ebp
08aa753d +0x0e1f:  mov    %esp,%ebp
08aa753f +0x0e21:  push   %ebx
08aa7540 +0x0e22:  sub    $0x14,%esp
08aa7543 +0x0e25:  mov    0xc(%ebp),%eax
08aa7546 +0x0e28:  mov    %eax,(%esp)
08aa7549 +0x0e2b:  call   08aa7846 <+0x1128>
08aa754e +0x0e30:  mov    %eax,%ebx
08aa7550 +0x0e32:  mov    0x8(%ebp),%eax
08aa7553 +0x0e35:  mov    %eax,(%esp)
08aa7556 +0x0e38:  call   08aa7846 <+0x1128>
08aa755b +0x0e3d:  mov    0x10(%ebp),%edx
08aa755e +0x0e40:  mov    %edx,0x8(%esp)
08aa7562 +0x0e44:  mov    %ebx,0x4(%esp)
08aa7566 +0x0e48:  mov    %eax,(%esp)
08aa7569 +0x0e4b:  call   08aa784e <+0x1130>
08aa756e +0x0e50:  add    $0x14,%esp
08aa7571 +0x0e53:  pop    %ebx
08aa7572 +0x0e54:  pop    %ebp
08aa7573 +0x0e55:  ret
08aa7574 +0x0e56:  push   %ebp
08aa7575 +0x0e57:  mov    %esp,%ebp
08aa7577 +0x0e59:  mov    0x8(%ebp),%eax
08aa757a +0x0e5c:  mov    (%eax),%eax
08aa757c +0x0e5e:  pop    %ebp
08aa757d +0x0e5f:  ret
08aa757e +0x0e60:  push   %ebp
08aa757f +0x0e61:  mov    %esp,%ebp
08aa7581 +0x0e63:  push   %ebx
08aa7582 +0x0e64:  sub    $0x24,%esp
08aa7585 +0x0e67:  mov    0x8(%ebp),%eax
08aa7588 +0x0e6a:  mov    %eax,(%esp)
08aa758b +0x0e6d:  call   08aa78ae <+0x1190>
08aa7590 +0x0e72:  mov    %eax,%ebx
08aa7592 +0x0e74:  mov    0x8(%ebp),%eax
08aa7595 +0x0e77:  mov    %eax,(%esp)
08aa7598 +0x0e7a:  call   08aa7892 <+0x1174>
08aa759d +0x0e7f:  mov    %ebx,%edx
08aa759f +0x0e81:  sub    %eax,%edx
08aa75a1 +0x0e83:  mov    0xc(%ebp),%eax
08aa75a4 +0x0e86:  cmp    %eax,%edx
08aa75a6 +0x0e88:  setb   %al
08aa75a9 +0x0e8b:  test   %al,%al
08aa75ab +0x0e8d:  je     08aa75b8 <+0xe9a>
08aa75ad +0x0e8f:  mov    0x10(%ebp),%eax
08aa75b0 +0x0e92:  mov    %eax,(%esp)
08aa75b3 +0x0e95:  call   086d9c40 <_ZSt20__throw_length_errorPKc>  ; std::__throw_length_error(char const*)
08aa75b8 +0x0e9a:  mov    0x8(%ebp),%eax
08aa75bb +0x0e9d:  mov    %eax,(%esp)
08aa75be +0x0ea0:  call   08aa7892 <+0x1174>
08aa75c3 +0x0ea5:  mov    %eax,%ebx
08aa75c5 +0x0ea7:  mov    0x8(%ebp),%eax
08aa75c8 +0x0eaa:  mov    %eax,(%esp)
08aa75cb +0x0ead:  call   08aa7892 <+0x1174>
08aa75d0 +0x0eb2:  mov    %eax,-0x10(%ebp)
08aa75d3 +0x0eb5:  lea    0xc(%ebp),%eax
08aa75d6 +0x0eb8:  mov    %eax,0x4(%esp)
08aa75da +0x0ebc:  lea    -0x10(%ebp),%eax
08aa75dd +0x0ebf:  mov    %eax,(%esp)
08aa75e0 +0x0ec2:  call   0807f531 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x601>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x601
08aa75e5 +0x0ec7:  mov    (%eax),%eax
08aa75e7 +0x0ec9:  lea    (%ebx,%eax,1),%eax
08aa75ea +0x0ecc:  mov    %eax,-0xc(%ebp)
08aa75ed +0x0ecf:  mov    0x8(%ebp),%eax
08aa75f0 +0x0ed2:  mov    %eax,(%esp)
08aa75f3 +0x0ed5:  call   08aa7892 <+0x1174>
08aa75f8 +0x0eda:  cmp    -0xc(%ebp),%eax
08aa75fb +0x0edd:  ja     08aa760d <+0xeef>
08aa75fd +0x0edf:  mov    0x8(%ebp),%eax
08aa7600 +0x0ee2:  mov    %eax,(%esp)
08aa7603 +0x0ee5:  call   08aa78ae <+0x1190>
08aa7608 +0x0eea:  cmp    -0xc(%ebp),%eax
08aa760b +0x0eed:  jae    08aa761a <+0xefc>
08aa760d +0x0eef:  mov    0x8(%ebp),%eax
08aa7610 +0x0ef2:  mov    %eax,(%esp)
08aa7613 +0x0ef5:  call   08aa78ae <+0x1190>
08aa7618 +0x0efa:  jmp    08aa761d <+0xeff>
08aa761a +0x0efc:  mov    -0xc(%ebp),%eax
08aa761d +0x0eff:  add    $0x24,%esp
08aa7620 +0x0f02:  pop    %ebx
08aa7621 +0x0f03:  pop    %ebp
08aa7622 +0x0f04:  ret
08aa7623 +0x0f05:  nop
08aa7624 +0x0f06:  push   %ebp
08aa7625 +0x0f07:  mov    %esp,%ebp
08aa7627 +0x0f09:  push   %ebx
08aa7628 +0x0f0a:  sub    $0x14,%esp
08aa762b +0x0f0d:  mov    0x8(%ebp),%ebx
08aa762e +0x0f10:  mov    0xc(%ebp),%eax
08aa7631 +0x0f13:  mov    %eax,0x4(%esp)
08aa7635 +0x0f17:  mov    %ebx,(%esp)
08aa7638 +0x0f1a:  call   08aa7524 <+0xe06>
08aa763d +0x0f1f:  mov    %ebx,%eax
08aa763f +0x0f21:  add    $0x14,%esp
08aa7642 +0x0f24:  pop    %ebx
08aa7643 +0x0f25:  pop    %ebp
08aa7644 +0x0f26:  ret    $0x4
08aa7647 +0x0f29:  push   %ebp
08aa7648 +0x0f2a:  mov    %esp,%ebp
08aa764a +0x0f2c:  push   %ebx
08aa764b +0x0f2d:  sub    $0x14,%esp
08aa764e +0x0f30:  mov    0x8(%ebp),%eax
08aa7651 +0x0f33:  mov    %eax,(%esp)
08aa7654 +0x0f36:  call   08aa7534 <+0xe16>
08aa7659 +0x0f3b:  mov    (%eax),%eax
08aa765b +0x0f3d:  mov    %eax,%ebx
08aa765d +0x0f3f:  mov    0xc(%ebp),%eax
08aa7660 +0x0f42:  mov    %eax,(%esp)
08aa7663 +0x0f45:  call   08aa7534 <+0xe16>
08aa7668 +0x0f4a:  mov    (%eax),%eax
08aa766a +0x0f4c:  mov    %ebx,%edx
08aa766c +0x0f4e:  sub    %eax,%edx
08aa766e +0x0f50:  mov    %edx,%eax
08aa7670 +0x0f52:  sar    $0x2,%eax
08aa7673 +0x0f55:  add    $0x14,%esp
08aa7676 +0x0f58:  pop    %ebx
08aa7677 +0x0f59:  pop    %ebp
08aa7678 +0x0f5a:  ret
08aa7679 +0x0f5b:  nop
08aa767a +0x0f5c:  push   %ebp
08aa767b +0x0f5d:  mov    %esp,%ebp
08aa767d +0x0f5f:  sub    $0x18,%esp
08aa7680 +0x0f62:  cmpl   $0x0,0xc(%ebp)
08aa7684 +0x0f66:  je     08aa76a2 <+0xf84>
08aa7686 +0x0f68:  mov    0x8(%ebp),%eax
08aa7689 +0x0f6b:  movl   $0x0,0x8(%esp)
08aa7691 +0x0f73:  mov    0xc(%ebp),%edx
08aa7694 +0x0f76:  mov    %edx,0x4(%esp)
08aa7698 +0x0f7a:  mov    %eax,(%esp)
08aa769b +0x0f7d:  call   08aa78ca <+0x11ac>
08aa76a0 +0x0f82:  jmp    08aa76a7 <+0xf89>
08aa76a2 +0x0f84:  mov    $0x0,%eax
08aa76a7 +0x0f89:  leave
08aa76a8 +0x0f8a:  ret
08aa76a9 +0x0f8b:  nop
08aa76aa +0x0f8c:  push   %ebp
08aa76ab +0x0f8d:  mov    %esp,%ebp
08aa76ad +0x0f8f:  mov    0x8(%ebp),%eax
08aa76b0 +0x0f92:  pop    %ebp
08aa76b1 +0x0f93:  ret
08aa76b2 +0x0f94:  push   %ebp
08aa76b3 +0x0f95:  mov    %esp,%ebp
08aa76b5 +0x0f97:  sub    $0x28,%esp
08aa76b8 +0x0f9a:  lea    -0x10(%ebp),%eax
08aa76bb +0x0f9d:  lea    0xc(%ebp),%edx
08aa76be +0x0fa0:  mov    %edx,0x4(%esp)
08aa76c2 +0x0fa4:  mov    %eax,(%esp)
08aa76c5 +0x0fa7:  call   08aa7902 <+0x11e4>
08aa76ca +0x0fac:  sub    $0x4,%esp
08aa76cd +0x0faf:  lea    -0xc(%ebp),%eax
08aa76d0 +0x0fb2:  lea    0x8(%ebp),%edx
08aa76d3 +0x0fb5:  mov    %edx,0x4(%esp)
08aa76d7 +0x0fb9:  mov    %eax,(%esp)
08aa76da +0x0fbc:  call   08aa7902 <+0x11e4>
08aa76df +0x0fc1:  sub    $0x4,%esp
08aa76e2 +0x0fc4:  mov    0x14(%ebp),%eax
08aa76e5 +0x0fc7:  mov    %eax,0xc(%esp)
08aa76e9 +0x0fcb:  mov    0x10(%ebp),%eax
08aa76ec +0x0fce:  mov    %eax,0x8(%esp)
08aa76f0 +0x0fd2:  mov    -0x10(%ebp),%eax
08aa76f3 +0x0fd5:  mov    %eax,0x4(%esp)
08aa76f7 +0x0fd9:  mov    -0xc(%ebp),%eax
08aa76fa +0x0fdc:  mov    %eax,(%esp)
08aa76fd +0x0fdf:  call   08aa7927 <+0x1209>
08aa7702 +0x0fe4:  leave
08aa7703 +0x0fe5:  ret
08aa7704 +0x0fe6:  push   %ebp
08aa7705 +0x0fe7:  mov    %esp,%ebp
08aa7707 +0x0fe9:  sub    $0x18,%esp
08aa770a +0x0fec:  mov    0xc(%ebp),%eax
08aa770d +0x0fef:  mov    %eax,(%esp)
08aa7710 +0x0ff2:  call   0871d720 <_GLOBAL__I_wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x8104>  ; global constructors keyed to wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x8104
08aa7715 +0x0ff7:  leave
08aa7716 +0x0ff8:  ret
08aa7717 +0x0ff9:  push   %ebp
08aa7718 +0x0ffa:  mov    %esp,%ebp
08aa771a +0x0ffc:  sub    $0x18,%esp
08aa771d +0x0fff:  mov    0xc(%ebp),%eax
08aa7720 +0x1002:  mov    %eax,0x4(%esp)
08aa7724 +0x1006:  mov    0x8(%ebp),%eax
08aa7727 +0x1009:  mov    %eax,(%esp)
08aa772a +0x100c:  call   08aa7948 <+0x122a>
08aa772f +0x1011:  leave
08aa7730 +0x1012:  ret
08aa7731 +0x1013:  nop
08aa7732 +0x1014:  push   %ebp
08aa7733 +0x1015:  mov    %esp,%ebp
08aa7735 +0x1017:  sub    $0x18,%esp
08aa7738 +0x101a:  cmpl   $0x0,0xc(%ebp)
08aa773c +0x101e:  je     08aa7757 <+0x1039>
08aa773e +0x1020:  mov    0x8(%ebp),%eax
08aa7741 +0x1023:  mov    0x10(%ebp),%edx
08aa7744 +0x1026:  mov    %edx,0x8(%esp)
08aa7748 +0x102a:  mov    0xc(%ebp),%edx
08aa774b +0x102d:  mov    %edx,0x4(%esp)
08aa774f +0x1031:  mov    %eax,(%esp)
08aa7752 +0x1034:  call   08aa7962 <+0x1244>
08aa7757 +0x1039:  leave
08aa7758 +0x103a:  ret
08aa7759 +0x103b:  nop
08aa775a +0x103c:  push   %ebp
08aa775b +0x103d:  mov    %esp,%ebp
08aa775d +0x103f:  pop    %ebp
08aa775e +0x1040:  ret
08aa775f +0x1041:  push   %ebp
08aa7760 +0x1042:  mov    %esp,%ebp
08aa7762 +0x1044:  mov    0x8(%ebp),%eax
08aa7765 +0x1047:  pop    %ebp
08aa7766 +0x1048:  ret
08aa7767 +0x1049:  push   %ebp
08aa7768 +0x104a:  mov    %esp,%ebp
08aa776a +0x104c:  push   %esi
08aa776b +0x104d:  push   %ebx
08aa776c +0x104e:  sub    $0x10,%esp
08aa776f +0x1051:  mov    0x10(%ebp),%eax
08aa7772 +0x1054:  mov    %eax,(%esp)
08aa7775 +0x1057:  call   08aa7975 <+0x1257>
08aa777a +0x105c:  mov    %eax,%esi
08aa777c +0x105e:  mov    0xc(%ebp),%eax
08aa777f +0x1061:  mov    %eax,(%esp)
08aa7782 +0x1064:  call   08aa7975 <+0x1257>
08aa7787 +0x1069:  mov    %eax,%ebx
08aa7789 +0x106b:  mov    0x8(%ebp),%eax
08aa778c +0x106e:  mov    %eax,(%esp)
08aa778f +0x1071:  call   08aa7975 <+0x1257>
08aa7794 +0x1076:  mov    %esi,0x8(%esp)
08aa7798 +0x107a:  mov    %ebx,0x4(%esp)
08aa779c +0x107e:  mov    %eax,(%esp)
08aa779f +0x1081:  call   08aa797d <+0x125f>
08aa77a4 +0x1086:  add    $0x10,%esp
08aa77a7 +0x1089:  pop    %ebx
08aa77a8 +0x108a:  pop    %esi
08aa77a9 +0x108b:  pop    %ebp
08aa77aa +0x108c:  ret
08aa77ab +0x108d:  nop
08aa77ac +0x108e:  push   %ebp
08aa77ad +0x108f:  mov    %esp,%ebp
08aa77af +0x1091:  sub    $0x18,%esp
08aa77b2 +0x1094:  mov    0x8(%ebp),%eax
08aa77b5 +0x1097:  mov    %eax,(%esp)
08aa77b8 +0x109a:  call   08aa79a2 <+0x1284>
08aa77bd +0x109f:  mov    %eax,(%esp)
08aa77c0 +0x10a2:  call   08aa79aa <+0x128c>
08aa77c5 +0x10a7:  leave
08aa77c6 +0x10a8:  ret
08aa77c7 +0x10a9:  nop
08aa77c8 +0x10aa:  push   %ebp
08aa77c9 +0x10ab:  mov    %esp,%ebp
08aa77cb +0x10ad:  sub    $0x18,%esp
08aa77ce +0x10b0:  mov    0x8(%ebp),%eax
08aa77d1 +0x10b3:  mov    %eax,(%esp)
08aa77d4 +0x10b6:  call   08aa79aa <+0x128c>
08aa77d9 +0x10bb:  cmp    0xc(%ebp),%eax
08aa77dc +0x10be:  setb   %al
08aa77df +0x10c1:  movzbl %al,%eax
08aa77e2 +0x10c4:  test   %eax,%eax
08aa77e4 +0x10c6:  setne  %al
08aa77e7 +0x10c9:  test   %al,%al
08aa77e9 +0x10cb:  je     08aa77f0 <+0x10d2>
08aa77eb +0x10cd:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
08aa77f0 +0x10d2:  mov    0xc(%ebp),%eax
08aa77f3 +0x10d5:  shl    $0x2,%eax
08aa77f6 +0x10d8:  mov    %eax,(%esp)
08aa77f9 +0x10db:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08aa77fe +0x10e0:  leave
08aa77ff +0x10e1:  ret
08aa7800 +0x10e2:  push   %ebp
08aa7801 +0x10e3:  mov    %esp,%ebp
08aa7803 +0x10e5:  push   %ebx
08aa7804 +0x10e6:  sub    $0x14,%esp
08aa7807 +0x10e9:  mov    0x8(%ebp),%ebx
08aa780a +0x10ec:  mov    0xc(%ebp),%eax
08aa780d +0x10ef:  mov    (%eax),%eax
08aa780f +0x10f1:  mov    %eax,0x4(%esp)
08aa7813 +0x10f5:  mov    %ebx,(%esp)
08aa7816 +0x10f8:  call   08aa79b4 <+0x1296>
08aa781b +0x10fd:  mov    %ebx,%eax
08aa781d +0x10ff:  add    $0x14,%esp
08aa7820 +0x1102:  pop    %ebx
08aa7821 +0x1103:  pop    %ebp
08aa7822 +0x1104:  ret    $0x4
08aa7825 +0x1107:  push   %ebp
08aa7826 +0x1108:  mov    %esp,%ebp
08aa7828 +0x110a:  sub    $0x18,%esp
08aa782b +0x110d:  mov    0x10(%ebp),%eax
08aa782e +0x1110:  mov    %eax,0x8(%esp)
08aa7832 +0x1114:  mov    0xc(%ebp),%eax
08aa7835 +0x1117:  mov    %eax,0x4(%esp)
08aa7839 +0x111b:  mov    0x8(%ebp),%eax
08aa783c +0x111e:  mov    %eax,(%esp)
08aa783f +0x1121:  call   08aa79c1 <+0x12a3>
08aa7844 +0x1126:  leave
08aa7845 +0x1127:  ret
08aa7846 +0x1128:  push   %ebp
08aa7847 +0x1129:  mov    %esp,%ebp
08aa7849 +0x112b:  mov    0x8(%ebp),%eax
08aa784c +0x112e:  pop    %ebp
08aa784d +0x112f:  ret
08aa784e +0x1130:  push   %ebp
08aa784f +0x1131:  mov    %esp,%ebp
08aa7851 +0x1133:  push   %esi
08aa7852 +0x1134:  push   %ebx
08aa7853 +0x1135:  sub    $0x10,%esp
08aa7856 +0x1138:  mov    0x10(%ebp),%eax
08aa7859 +0x113b:  mov    %eax,(%esp)
08aa785c +0x113e:  call   08aa79e2 <+0x12c4>
08aa7861 +0x1143:  mov    %eax,%esi
08aa7863 +0x1145:  mov    0xc(%ebp),%eax
08aa7866 +0x1148:  mov    %eax,(%esp)
08aa7869 +0x114b:  call   08aa79e2 <+0x12c4>
08aa786e +0x1150:  mov    %eax,%ebx
08aa7870 +0x1152:  mov    0x8(%ebp),%eax
08aa7873 +0x1155:  mov    %eax,(%esp)
08aa7876 +0x1158:  call   08aa79e2 <+0x12c4>
08aa787b +0x115d:  mov    %esi,0x8(%esp)
08aa787f +0x1161:  mov    %ebx,0x4(%esp)
08aa7883 +0x1165:  mov    %eax,(%esp)
08aa7886 +0x1168:  call   08aa79ea <+0x12cc>
08aa788b +0x116d:  add    $0x10,%esp
08aa788e +0x1170:  pop    %ebx
08aa788f +0x1171:  pop    %esi
08aa7890 +0x1172:  pop    %ebp
08aa7891 +0x1173:  ret
08aa7892 +0x1174:  push   %ebp
08aa7893 +0x1175:  mov    %esp,%ebp
08aa7895 +0x1177:  mov    0x8(%ebp),%eax
08aa7898 +0x117a:  mov    0x4(%eax),%eax
08aa789b +0x117d:  mov    %eax,%edx
08aa789d +0x117f:  mov    0x8(%ebp),%eax
08aa78a0 +0x1182:  mov    (%eax),%eax
08aa78a2 +0x1184:  mov    %edx,%ecx
08aa78a4 +0x1186:  sub    %eax,%ecx
08aa78a6 +0x1188:  mov    %ecx,%eax
08aa78a8 +0x118a:  sar    $0x2,%eax
08aa78ab +0x118d:  pop    %ebp
08aa78ac +0x118e:  ret
08aa78ad +0x118f:  nop
08aa78ae +0x1190:  push   %ebp
08aa78af +0x1191:  mov    %esp,%ebp
08aa78b1 +0x1193:  sub    $0x18,%esp
08aa78b4 +0x1196:  mov    0x8(%ebp),%eax
08aa78b7 +0x1199:  mov    %eax,(%esp)
08aa78ba +0x119c:  call   08aa7a10 <+0x12f2>
08aa78bf +0x11a1:  mov    %eax,(%esp)
08aa78c2 +0x11a4:  call   08aa7a18 <+0x12fa>
08aa78c7 +0x11a9:  leave
08aa78c8 +0x11aa:  ret
08aa78c9 +0x11ab:  nop
08aa78ca +0x11ac:  push   %ebp
08aa78cb +0x11ad:  mov    %esp,%ebp
08aa78cd +0x11af:  sub    $0x18,%esp
08aa78d0 +0x11b2:  mov    0x8(%ebp),%eax
08aa78d3 +0x11b5:  mov    %eax,(%esp)
08aa78d6 +0x11b8:  call   08aa7a18 <+0x12fa>
08aa78db +0x11bd:  cmp    0xc(%ebp),%eax
08aa78de +0x11c0:  setb   %al
08aa78e1 +0x11c3:  movzbl %al,%eax
08aa78e4 +0x11c6:  test   %eax,%eax
08aa78e6 +0x11c8:  setne  %al
08aa78e9 +0x11cb:  test   %al,%al
08aa78eb +0x11cd:  je     08aa78f2 <+0x11d4>
08aa78ed +0x11cf:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
08aa78f2 +0x11d4:  mov    0xc(%ebp),%eax
08aa78f5 +0x11d7:  shl    $0x2,%eax
08aa78f8 +0x11da:  mov    %eax,(%esp)
08aa78fb +0x11dd:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08aa7900 +0x11e2:  leave
08aa7901 +0x11e3:  ret
08aa7902 +0x11e4:  push   %ebp
08aa7903 +0x11e5:  mov    %esp,%ebp
08aa7905 +0x11e7:  push   %ebx
08aa7906 +0x11e8:  sub    $0x14,%esp
08aa7909 +0x11eb:  mov    0x8(%ebp),%ebx
08aa790c +0x11ee:  mov    0xc(%ebp),%eax
08aa790f +0x11f1:  mov    (%eax),%eax
08aa7911 +0x11f3:  mov    %eax,0x4(%esp)
08aa7915 +0x11f7:  mov    %ebx,(%esp)
08aa7918 +0x11fa:  call   08aa7a22 <+0x1304>
08aa791d +0x11ff:  mov    %ebx,%eax
08aa791f +0x1201:  add    $0x14,%esp
08aa7922 +0x1204:  pop    %ebx
08aa7923 +0x1205:  pop    %ebp
08aa7924 +0x1206:  ret    $0x4
08aa7927 +0x1209:  push   %ebp
08aa7928 +0x120a:  mov    %esp,%ebp
08aa792a +0x120c:  sub    $0x18,%esp
08aa792d +0x120f:  mov    0x10(%ebp),%eax
08aa7930 +0x1212:  mov    %eax,0x8(%esp)
08aa7934 +0x1216:  mov    0xc(%ebp),%eax
08aa7937 +0x1219:  mov    %eax,0x4(%esp)
08aa793b +0x121d:  mov    0x8(%ebp),%eax
08aa793e +0x1220:  mov    %eax,(%esp)
08aa7941 +0x1223:  call   08aa7a2f <+0x1311>
08aa7946 +0x1228:  leave
08aa7947 +0x1229:  ret
08aa7948 +0x122a:  push   %ebp
08aa7949 +0x122b:  mov    %esp,%ebp
08aa794b +0x122d:  sub    $0x18,%esp
08aa794e +0x1230:  mov    0xc(%ebp),%eax
08aa7951 +0x1233:  mov    %eax,0x4(%esp)
08aa7955 +0x1237:  mov    0x8(%ebp),%eax
08aa7958 +0x123a:  mov    %eax,(%esp)
08aa795b +0x123d:  call   08aa7a50 <+0x1332>
08aa7960 +0x1242:  leave
08aa7961 +0x1243:  ret
08aa7962 +0x1244:  push   %ebp
08aa7963 +0x1245:  mov    %esp,%ebp
08aa7965 +0x1247:  sub    $0x18,%esp
08aa7968 +0x124a:  mov    0xc(%ebp),%eax
08aa796b +0x124d:  mov    %eax,(%esp)
08aa796e +0x1250:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08aa7973 +0x1255:  leave
08aa7974 +0x1256:  ret
08aa7975 +0x1257:  push   %ebp
08aa7976 +0x1258:  mov    %esp,%ebp
08aa7978 +0x125a:  mov    0x8(%ebp),%eax
08aa797b +0x125d:  pop    %ebp
08aa797c +0x125e:  ret
08aa797d +0x125f:  push   %ebp
08aa797e +0x1260:  mov    %esp,%ebp
08aa7980 +0x1262:  sub    $0x28,%esp
08aa7983 +0x1265:  movb   $0x1,-0x9(%ebp)
08aa7987 +0x1269:  mov    0x10(%ebp),%eax
08aa798a +0x126c:  mov    %eax,0x8(%esp)
08aa798e +0x1270:  mov    0xc(%ebp),%eax
08aa7991 +0x1273:  mov    %eax,0x4(%esp)
08aa7995 +0x1277:  mov    0x8(%ebp),%eax
08aa7998 +0x127a:  mov    %eax,(%esp)
08aa799b +0x127d:  call   08aa7a76 <+0x1358>
08aa79a0 +0x1282:  leave
08aa79a1 +0x1283:  ret
08aa79a2 +0x1284:  push   %ebp
08aa79a3 +0x1285:  mov    %esp,%ebp
08aa79a5 +0x1287:  mov    0x8(%ebp),%eax
08aa79a8 +0x128a:  pop    %ebp
08aa79a9 +0x128b:  ret
08aa79aa +0x128c:  push   %ebp
08aa79ab +0x128d:  mov    %esp,%ebp
08aa79ad +0x128f:  mov    $0x3fffffff,%eax
08aa79b2 +0x1294:  pop    %ebp
08aa79b3 +0x1295:  ret
08aa79b4 +0x1296:  push   %ebp
08aa79b5 +0x1297:  mov    %esp,%ebp
08aa79b7 +0x1299:  mov    0x8(%ebp),%eax
08aa79ba +0x129c:  mov    0xc(%ebp),%edx
08aa79bd +0x129f:  mov    %edx,(%eax)
08aa79bf +0x12a1:  pop    %ebp
08aa79c0 +0x12a2:  ret
08aa79c1 +0x12a3:  push   %ebp
08aa79c2 +0x12a4:  mov    %esp,%ebp
08aa79c4 +0x12a6:  sub    $0x18,%esp
08aa79c7 +0x12a9:  mov    0x10(%ebp),%eax
08aa79ca +0x12ac:  mov    %eax,0x8(%esp)
08aa79ce +0x12b0:  mov    0xc(%ebp),%eax
08aa79d1 +0x12b3:  mov    %eax,0x4(%esp)
08aa79d5 +0x12b7:  mov    0x8(%ebp),%eax
08aa79d8 +0x12ba:  mov    %eax,(%esp)
08aa79db +0x12bd:  call   08aa7ac3 <+0x13a5>
08aa79e0 +0x12c2:  leave
08aa79e1 +0x12c3:  ret
08aa79e2 +0x12c4:  push   %ebp
08aa79e3 +0x12c5:  mov    %esp,%ebp
08aa79e5 +0x12c7:  mov    0x8(%ebp),%eax
08aa79e8 +0x12ca:  pop    %ebp
08aa79e9 +0x12cb:  ret
08aa79ea +0x12cc:  push   %ebp
08aa79eb +0x12cd:  mov    %esp,%ebp
08aa79ed +0x12cf:  sub    $0x28,%esp
08aa79f0 +0x12d2:  movb   $0x0,-0x9(%ebp)
08aa79f4 +0x12d6:  mov    0x10(%ebp),%eax
08aa79f7 +0x12d9:  mov    %eax,0x8(%esp)
08aa79fb +0x12dd:  mov    0xc(%ebp),%eax
08aa79fe +0x12e0:  mov    %eax,0x4(%esp)
08aa7a02 +0x12e4:  mov    0x8(%ebp),%eax
08aa7a05 +0x12e7:  mov    %eax,(%esp)
08aa7a08 +0x12ea:  call   08aa7ae4 <+0x13c6>
08aa7a0d +0x12ef:  leave
08aa7a0e +0x12f0:  ret
08aa7a0f +0x12f1:  nop
08aa7a10 +0x12f2:  push   %ebp
08aa7a11 +0x12f3:  mov    %esp,%ebp
08aa7a13 +0x12f5:  mov    0x8(%ebp),%eax
08aa7a16 +0x12f8:  pop    %ebp
08aa7a17 +0x12f9:  ret
08aa7a18 +0x12fa:  push   %ebp
08aa7a19 +0x12fb:  mov    %esp,%ebp
08aa7a1b +0x12fd:  mov    $0x3fffffff,%eax
08aa7a20 +0x1302:  pop    %ebp
08aa7a21 +0x1303:  ret
08aa7a22 +0x1304:  push   %ebp
08aa7a23 +0x1305:  mov    %esp,%ebp
08aa7a25 +0x1307:  mov    0x8(%ebp),%eax
08aa7a28 +0x130a:  mov    0xc(%ebp),%edx
08aa7a2b +0x130d:  mov    %edx,(%eax)
08aa7a2d +0x130f:  pop    %ebp
08aa7a2e +0x1310:  ret
08aa7a2f +0x1311:  push   %ebp
08aa7a30 +0x1312:  mov    %esp,%ebp
08aa7a32 +0x1314:  sub    $0x18,%esp
08aa7a35 +0x1317:  mov    0x10(%ebp),%eax
08aa7a38 +0x131a:  mov    %eax,0x8(%esp)
08aa7a3c +0x131e:  mov    0xc(%ebp),%eax
08aa7a3f +0x1321:  mov    %eax,0x4(%esp)
08aa7a43 +0x1325:  mov    0x8(%ebp),%eax
08aa7a46 +0x1328:  mov    %eax,(%esp)
08aa7a49 +0x132b:  call   08aa7b34 <+0x1416>
08aa7a4e +0x1330:  leave
08aa7a4f +0x1331:  ret
08aa7a50 +0x1332:  push   %ebp
08aa7a51 +0x1333:  mov    %esp,%ebp
08aa7a53 +0x1335:  sub    $0x18,%esp
08aa7a56 +0x1338:  jmp    08aa7a67 <+0x1349>
08aa7a58 +0x133a:  mov    0x8(%ebp),%eax
08aa7a5b +0x133d:  mov    %eax,(%esp)
08aa7a5e +0x1340:  call   08aa7bf9 <+0x14db>
08aa7a63 +0x1345:  addl   $0x4,0x8(%ebp)
08aa7a67 +0x1349:  mov    0x8(%ebp),%eax
08aa7a6a +0x134c:  cmp    0xc(%ebp),%eax
08aa7a6d +0x134f:  setne  %al
08aa7a70 +0x1352:  test   %al,%al
08aa7a72 +0x1354:  jne    08aa7a58 <+0x133a>
08aa7a74 +0x1356:  leave
08aa7a75 +0x1357:  ret
08aa7a76 +0x1358:  push   %ebp
08aa7a77 +0x1359:  mov    %esp,%ebp
08aa7a79 +0x135b:  sub    $0x28,%esp
08aa7a7c +0x135e:  mov    0xc(%ebp),%edx
08aa7a7f +0x1361:  mov    0x8(%ebp),%eax
08aa7a82 +0x1364:  mov    %edx,%ecx
08aa7a84 +0x1366:  sub    %eax,%ecx
08aa7a86 +0x1368:  mov    %ecx,%eax
08aa7a88 +0x136a:  sar    $0x2,%eax
08aa7a8b +0x136d:  mov    %eax,-0xc(%ebp)
08aa7a8e +0x1370:  mov    -0xc(%ebp),%eax
08aa7a91 +0x1373:  lea    0x0(,%eax,4),%edx
08aa7a98 +0x137a:  mov    -0xc(%ebp),%eax
08aa7a9b +0x137d:  shl    $0x2,%eax
08aa7a9e +0x1380:  neg    %eax
08aa7aa0 +0x1382:  add    0x10(%ebp),%eax
08aa7aa3 +0x1385:  mov    %edx,0x8(%esp)
08aa7aa7 +0x1389:  mov    0x8(%ebp),%edx
08aa7aaa +0x138c:  mov    %edx,0x4(%esp)
08aa7aae +0x1390:  mov    %eax,(%esp)
08aa7ab1 +0x1393:  call   0807d880 <_init+0x178>
08aa7ab6 +0x1398:  mov    -0xc(%ebp),%eax
08aa7ab9 +0x139b:  shl    $0x2,%eax
08aa7abc +0x139e:  neg    %eax
08aa7abe +0x13a0:  add    0x10(%ebp),%eax
08aa7ac1 +0x13a3:  leave
08aa7ac2 +0x13a4:  ret
08aa7ac3 +0x13a5:  push   %ebp
08aa7ac4 +0x13a6:  mov    %esp,%ebp
08aa7ac6 +0x13a8:  sub    $0x18,%esp
08aa7ac9 +0x13ab:  mov    0x10(%ebp),%eax
08aa7acc +0x13ae:  mov    %eax,0x8(%esp)
08aa7ad0 +0x13b2:  mov    0xc(%ebp),%eax
08aa7ad3 +0x13b5:  mov    %eax,0x4(%esp)
08aa7ad7 +0x13b9:  mov    0x8(%ebp),%eax
08aa7ada +0x13bc:  mov    %eax,(%esp)
08aa7add +0x13bf:  call   08aa7c0c <+0x14ee>
08aa7ae2 +0x13c4:  leave
08aa7ae3 +0x13c5:  ret
08aa7ae4 +0x13c6:  push   %ebp
08aa7ae5 +0x13c7:  mov    %esp,%ebp
08aa7ae7 +0x13c9:  sub    $0x28,%esp
08aa7aea +0x13cc:  mov    0xc(%ebp),%edx
08aa7aed +0x13cf:  mov    0x8(%ebp),%eax
08aa7af0 +0x13d2:  mov    %edx,%ecx
08aa7af2 +0x13d4:  sub    %eax,%ecx
08aa7af4 +0x13d6:  mov    %ecx,%eax
08aa7af6 +0x13d8:  sar    $0x2,%eax
08aa7af9 +0x13db:  mov    %eax,-0xc(%ebp)
08aa7afc +0x13de:  jmp    08aa7b24 <+0x1406>
08aa7afe +0x13e0:  subl   $0x4,0xc(%ebp)
08aa7b02 +0x13e4:  mov    0xc(%ebp),%eax
08aa7b05 +0x13e7:  mov    %eax,(%esp)
08aa7b08 +0x13ea:  call   08aa6bb9 <+0x49b>
08aa7b0d +0x13ef:  subl   $0x4,0x10(%ebp)
08aa7b11 +0x13f3:  mov    %eax,0x4(%esp)
08aa7b15 +0x13f7:  mov    0x10(%ebp),%eax
08aa7b18 +0x13fa:  mov    %eax,(%esp)
08aa7b1b +0x13fd:  call   0871d840 <_GLOBAL__I_wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x8224>  ; global constructors keyed to wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x8224
08aa7b20 +0x1402:  subl   $0x1,-0xc(%ebp)
08aa7b24 +0x1406:  cmpl   $0x0,-0xc(%ebp)
08aa7b28 +0x140a:  setg   %al
08aa7b2b +0x140d:  test   %al,%al
08aa7b2d +0x140f:  jne    08aa7afe <+0x13e0>
08aa7b2f +0x1411:  mov    0x10(%ebp),%eax
08aa7b32 +0x1414:  leave
08aa7b33 +0x1415:  ret
08aa7b34 +0x1416:  push   %ebp
08aa7b35 +0x1417:  mov    %esp,%ebp
08aa7b37 +0x1419:  push   %edi
08aa7b38 +0x141a:  push   %esi
08aa7b39 +0x141b:  push   %ebx
08aa7b3a +0x141c:  sub    $0x3c,%esp
08aa7b3d +0x141f:  mov    0x10(%ebp),%eax
08aa7b40 +0x1422:  mov    %eax,-0x1c(%ebp)
08aa7b43 +0x1425:  jmp    08aa7ba4 <+0x1486>
08aa7b45 +0x1427:  lea    0x8(%ebp),%eax
08aa7b48 +0x142a:  mov    %eax,(%esp)
08aa7b4b +0x142d:  call   08aa7c78 <+0x155a>
08aa7b50 +0x1432:  mov    %eax,%edi
08aa7b52 +0x1434:  mov    -0x1c(%ebp),%esi
08aa7b55 +0x1437:  mov    %esi,0x4(%esp)
08aa7b59 +0x143b:  movl   $0x4,(%esp)
08aa7b60 +0x1442:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
08aa7b65 +0x1447:  mov    %eax,%ebx
08aa7b67 +0x1449:  mov    %ebx,%eax
08aa7b69 +0x144b:  test   %eax,%eax
08aa7b6b +0x144d:  je     08aa7b95 <+0x1477>
08aa7b6d +0x144f:  mov    %ebx,%eax
08aa7b6f +0x1451:  mov    %edi,0x4(%esp)
08aa7b73 +0x1455:  mov    %eax,(%esp)
08aa7b76 +0x1458:  call   0871d2e0 <_GLOBAL__I_wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x7cc4>  ; global constructors keyed to wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x7cc4
08aa7b7b +0x145d:  jmp    08aa7b95 <+0x1477>
08aa7b7d +0x145f:  mov    %edx,%edi
08aa7b7f +0x1461:  mov    %eax,-0x2c(%ebp)
08aa7b82 +0x1464:  mov    %esi,0x4(%esp)
08aa7b86 +0x1468:  mov    %ebx,(%esp)
08aa7b89 +0x146b:  call   0807fff6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x1c>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x1c
08aa7b8e +0x1470:  mov    -0x2c(%ebp),%eax
08aa7b91 +0x1473:  mov    %edi,%edx
08aa7b93 +0x1475:  jmp    08aa7bc5 <+0x14a7>
08aa7b95 +0x1477:  lea    0x8(%ebp),%eax
08aa7b98 +0x147a:  mov    %eax,(%esp)
08aa7b9b +0x147d:  call   08aa7c62 <+0x1544>
08aa7ba0 +0x1482:  addl   $0x4,-0x1c(%ebp)
08aa7ba4 +0x1486:  lea    0xc(%ebp),%eax
08aa7ba7 +0x1489:  mov    %eax,0x4(%esp)
08aa7bab +0x148d:  lea    0x8(%ebp),%eax
08aa7bae +0x1490:  mov    %eax,(%esp)
08aa7bb1 +0x1493:  call   08aa7c44 <+0x1526>
08aa7bb6 +0x1498:  test   %al,%al
08aa7bb8 +0x149a:  jne    08aa7b45 <+0x1427>
08aa7bba +0x149c:  mov    -0x1c(%ebp),%eax
08aa7bbd +0x149f:  add    $0x3c,%esp
08aa7bc0 +0x14a2:  pop    %ebx
08aa7bc1 +0x14a3:  pop    %esi
08aa7bc2 +0x14a4:  pop    %edi
08aa7bc3 +0x14a5:  pop    %ebp
08aa7bc4 +0x14a6:  ret
08aa7bc5 +0x14a7:  mov    %eax,(%esp)
08aa7bc8 +0x14aa:  call   08725ce0 <__cxa_begin_catch>
08aa7bcd +0x14af:  mov    -0x1c(%ebp),%eax
08aa7bd0 +0x14b2:  mov    %eax,0x4(%esp)
08aa7bd4 +0x14b6:  mov    0x10(%ebp),%eax
08aa7bd7 +0x14b9:  mov    %eax,(%esp)
08aa7bda +0x14bc:  call   08aa7948 <+0x122a>
08aa7bdf +0x14c1:  call   08724be0 <__cxa_rethrow>
08aa7be4 +0x14c6:  mov    %edx,%ebx
08aa7be6 +0x14c8:  mov    %eax,%esi
08aa7be8 +0x14ca:  call   08725c30 <__cxa_end_catch>
08aa7bed +0x14cf:  mov    %esi,%eax
08aa7bef +0x14d1:  mov    %ebx,%edx
08aa7bf1 +0x14d3:  mov    %eax,(%esp)
08aa7bf4 +0x14d6:  call   08ae3750 <_Unwind_Resume>
08aa7bf9 +0x14db:  push   %ebp
08aa7bfa +0x14dc:  mov    %esp,%ebp
08aa7bfc +0x14de:  sub    $0x18,%esp
08aa7bff +0x14e1:  mov    0x8(%ebp),%eax
08aa7c02 +0x14e4:  mov    %eax,(%esp)
08aa7c05 +0x14e7:  call   0871d720 <_GLOBAL__I_wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x8104>  ; global constructors keyed to wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x8104
08aa7c0a +0x14ec:  leave
08aa7c0b +0x14ed:  ret
08aa7c0c +0x14ee:  push   %ebp
08aa7c0d +0x14ef:  mov    %esp,%ebp
08aa7c0f +0x14f1:  push   %ebx
08aa7c10 +0x14f2:  sub    $0x14,%esp
08aa7c13 +0x14f5:  mov    0xc(%ebp),%eax
08aa7c16 +0x14f8:  mov    %eax,(%esp)
08aa7c19 +0x14fb:  call   08aa7c82 <+0x1564>
08aa7c1e +0x1500:  mov    %eax,%ebx
08aa7c20 +0x1502:  mov    0x8(%ebp),%eax
08aa7c23 +0x1505:  mov    %eax,(%esp)
08aa7c26 +0x1508:  call   08aa7c82 <+0x1564>
08aa7c2b +0x150d:  mov    0x10(%ebp),%edx
08aa7c2e +0x1510:  mov    %edx,0x8(%esp)
08aa7c32 +0x1514:  mov    %ebx,0x4(%esp)
08aa7c36 +0x1518:  mov    %eax,(%esp)
08aa7c39 +0x151b:  call   08aa7c95 <+0x1577>
08aa7c3e +0x1520:  add    $0x14,%esp
08aa7c41 +0x1523:  pop    %ebx
08aa7c42 +0x1524:  pop    %ebp
08aa7c43 +0x1525:  ret
08aa7c44 +0x1526:  push   %ebp
08aa7c45 +0x1527:  mov    %esp,%ebp
08aa7c47 +0x1529:  sub    $0x18,%esp
08aa7c4a +0x152c:  mov    0xc(%ebp),%eax
08aa7c4d +0x152f:  mov    %eax,0x4(%esp)
08aa7c51 +0x1533:  mov    0x8(%ebp),%eax
08aa7c54 +0x1536:  mov    %eax,(%esp)
08aa7c57 +0x1539:  call   08aa7cd9 <+0x15bb>
08aa7c5c +0x153e:  xor    $0x1,%eax
08aa7c5f +0x1541:  leave
08aa7c60 +0x1542:  ret
08aa7c61 +0x1543:  nop
08aa7c62 +0x1544:  push   %ebp
08aa7c63 +0x1545:  mov    %esp,%ebp
08aa7c65 +0x1547:  mov    0x8(%ebp),%eax
08aa7c68 +0x154a:  mov    (%eax),%eax
08aa7c6a +0x154c:  lea    0x4(%eax),%edx
08aa7c6d +0x154f:  mov    0x8(%ebp),%eax
08aa7c70 +0x1552:  mov    %edx,(%eax)
08aa7c72 +0x1554:  mov    0x8(%ebp),%eax
08aa7c75 +0x1557:  pop    %ebp
08aa7c76 +0x1558:  ret
08aa7c77 +0x1559:  nop
08aa7c78 +0x155a:  push   %ebp
08aa7c79 +0x155b:  mov    %esp,%ebp
08aa7c7b +0x155d:  mov    0x8(%ebp),%eax
08aa7c7e +0x1560:  mov    (%eax),%eax
08aa7c80 +0x1562:  pop    %ebp
08aa7c81 +0x1563:  ret
08aa7c82 +0x1564:  push   %ebp
08aa7c83 +0x1565:  mov    %esp,%ebp
08aa7c85 +0x1567:  sub    $0x18,%esp
08aa7c88 +0x156a:  lea    0x8(%ebp),%eax
08aa7c8b +0x156d:  mov    %eax,(%esp)
08aa7c8e +0x1570:  call   08aa7d04 <+0x15e6>
08aa7c93 +0x1575:  leave
08aa7c94 +0x1576:  ret
08aa7c95 +0x1577:  push   %ebp
08aa7c96 +0x1578:  mov    %esp,%ebp
08aa7c98 +0x157a:  push   %esi
08aa7c99 +0x157b:  push   %ebx
08aa7c9a +0x157c:  sub    $0x10,%esp
08aa7c9d +0x157f:  mov    0x10(%ebp),%eax
08aa7ca0 +0x1582:  mov    %eax,(%esp)
08aa7ca3 +0x1585:  call   08aa7975 <+0x1257>
08aa7ca8 +0x158a:  mov    %eax,%esi
08aa7caa +0x158c:  mov    0xc(%ebp),%eax
08aa7cad +0x158f:  mov    %eax,(%esp)
08aa7cb0 +0x1592:  call   08aa7975 <+0x1257>
08aa7cb5 +0x1597:  mov    %eax,%ebx
08aa7cb7 +0x1599:  mov    0x8(%ebp),%eax
08aa7cba +0x159c:  mov    %eax,(%esp)
08aa7cbd +0x159f:  call   08aa7975 <+0x1257>
08aa7cc2 +0x15a4:  mov    %esi,0x8(%esp)
08aa7cc6 +0x15a8:  mov    %ebx,0x4(%esp)
08aa7cca +0x15ac:  mov    %eax,(%esp)
08aa7ccd +0x15af:  call   08aa7d0e <+0x15f0>
08aa7cd2 +0x15b4:  add    $0x10,%esp
08aa7cd5 +0x15b7:  pop    %ebx
08aa7cd6 +0x15b8:  pop    %esi
08aa7cd7 +0x15b9:  pop    %ebp
08aa7cd8 +0x15ba:  ret
08aa7cd9 +0x15bb:  push   %ebp
08aa7cda +0x15bc:  mov    %esp,%ebp
08aa7cdc +0x15be:  push   %ebx
08aa7cdd +0x15bf:  sub    $0x14,%esp
08aa7ce0 +0x15c2:  mov    0x8(%ebp),%eax
08aa7ce3 +0x15c5:  mov    %eax,(%esp)
08aa7ce6 +0x15c8:  call   08aa7d34 <+0x1616>
08aa7ceb +0x15cd:  mov    %eax,%ebx
08aa7ced +0x15cf:  mov    0xc(%ebp),%eax
08aa7cf0 +0x15d2:  mov    %eax,(%esp)
08aa7cf3 +0x15d5:  call   08aa7d34 <+0x1616>
08aa7cf8 +0x15da:  cmp    %eax,%ebx
08aa7cfa +0x15dc:  sete   %al
08aa7cfd +0x15df:  add    $0x14,%esp
08aa7d00 +0x15e2:  pop    %ebx
08aa7d01 +0x15e3:  pop    %ebp
08aa7d02 +0x15e4:  ret
08aa7d03 +0x15e5:  nop
08aa7d04 +0x15e6:  push   %ebp
08aa7d05 +0x15e7:  mov    %esp,%ebp
08aa7d07 +0x15e9:  mov    0x8(%ebp),%eax
08aa7d0a +0x15ec:  mov    (%eax),%eax
08aa7d0c +0x15ee:  pop    %ebp
08aa7d0d +0x15ef:  ret
08aa7d0e +0x15f0:  push   %ebp
08aa7d0f +0x15f1:  mov    %esp,%ebp
08aa7d11 +0x15f3:  sub    $0x28,%esp
08aa7d14 +0x15f6:  movb   $0x1,-0x9(%ebp)
08aa7d18 +0x15fa:  mov    0x10(%ebp),%eax
08aa7d1b +0x15fd:  mov    %eax,0x8(%esp)
08aa7d1f +0x1601:  mov    0xc(%ebp),%eax
08aa7d22 +0x1604:  mov    %eax,0x4(%esp)
08aa7d26 +0x1608:  mov    0x8(%ebp),%eax
08aa7d29 +0x160b:  mov    %eax,(%esp)
08aa7d2c +0x160e:  call   08aa7d3e <+0x1620>
08aa7d31 +0x1613:  leave
08aa7d32 +0x1614:  ret
08aa7d33 +0x1615:  nop
08aa7d34 +0x1616:  push   %ebp
08aa7d35 +0x1617:  mov    %esp,%ebp
08aa7d37 +0x1619:  mov    0x8(%ebp),%eax
08aa7d3a +0x161c:  mov    (%eax),%eax
08aa7d3c +0x161e:  pop    %ebp
08aa7d3d +0x161f:  ret
08aa7d3e +0x1620:  push   %ebp
08aa7d3f +0x1621:  mov    %esp,%ebp
08aa7d41 +0x1623:  sub    $0x18,%esp
08aa7d44 +0x1626:  mov    0xc(%ebp),%edx
08aa7d47 +0x1629:  mov    0x8(%ebp),%eax
08aa7d4a +0x162c:  mov    %edx,%ecx
08aa7d4c +0x162e:  sub    %eax,%ecx
08aa7d4e +0x1630:  mov    %ecx,%eax
08aa7d50 +0x1632:  sar    $0x2,%eax
08aa7d53 +0x1635:  shl    $0x2,%eax
08aa7d56 +0x1638:  mov    %eax,0x8(%esp)
08aa7d5a +0x163c:  mov    0x8(%ebp),%eax
08aa7d5d +0x163f:  mov    %eax,0x4(%esp)
08aa7d61 +0x1643:  mov    0x10(%ebp),%eax
08aa7d64 +0x1646:  mov    %eax,(%esp)
08aa7d67 +0x1649:  call   0807d880 <_init+0x178>
08aa7d6c +0x164e:  mov    0xc(%ebp),%edx
08aa7d6f +0x1651:  mov    0x8(%ebp),%eax
08aa7d72 +0x1654:  mov    %edx,%ecx
08aa7d74 +0x1656:  sub    %eax,%ecx
08aa7d76 +0x1658:  mov    %ecx,%eax
08aa7d78 +0x165a:  sar    $0x2,%eax
08aa7d7b +0x165d:  shl    $0x2,%eax
08aa7d7e +0x1660:  add    0x10(%ebp),%eax
08aa7d81 +0x1663:  leave
08aa7d82 +0x1664:  ret
08aa7d83 +0x1665:  nop
```

## 反编译 C

```c
// <global>::global @ 0x8aa671e

/* RDARScriptStringManager::RDARScriptStringManager() */

void RDARScriptStringManager::_GLOBAL__I_RDARScriptStringManager(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
