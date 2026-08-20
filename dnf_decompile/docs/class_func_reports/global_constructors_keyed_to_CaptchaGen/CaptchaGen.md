# CaptchaGen

`_GLOBAL__I__ZN10CaptchaGenC2Ev`

`global constructors keyed to CaptchaGen::CaptchaGen()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CaptchaGen` | `0x080df7e4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080df7e4  _GLOBAL__I__ZN10CaptchaGenC2Ev
#           global constructors keyed to CaptchaGen::CaptchaGen()
# range [0x080df7e4, 0x080e09a7]
080df7e4 +0x0000:  push   %ebp
080df7e5 +0x0001:  mov    %esp,%ebp
080df7e7 +0x0003:  sub    $0x18,%esp
080df7ea +0x0006:  movl   $0xffff,0x4(%esp)
080df7f2 +0x000e:  movl   $0x1,(%esp)
080df7f9 +0x0015:  call   080df7a4 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
080df7fe +0x001a:  leave
080df7ff +0x001b:  ret
080df800 +0x001c:  push   %ebp
080df801 +0x001d:  mov    %esp,%ebp
080df803 +0x001f:  sub    $0x18,%esp
080df806 +0x0022:  mov    0x8(%ebp),%eax
080df809 +0x0025:  mov    %eax,(%esp)
080df80c +0x0028:  call   080df9de <+0x1fa>
080df811 +0x002d:  leave
080df812 +0x002e:  ret
080df813 +0x002f:  nop
080df814 +0x0030:  push   %ebp
080df815 +0x0031:  mov    %esp,%ebp
080df817 +0x0033:  push   %esi
080df818 +0x0034:  push   %ebx
080df819 +0x0035:  sub    $0x10,%esp
080df81c +0x0038:  mov    0x8(%ebp),%eax
080df81f +0x003b:  mov    %eax,(%esp)
080df822 +0x003e:  call   080dfa5a <+0x276>
080df827 +0x0043:  mov    0x8(%ebp),%edx
080df82a +0x0046:  mov    0x4(%edx),%ecx
080df82d +0x0049:  mov    0x8(%ebp),%edx
080df830 +0x004c:  mov    (%edx),%edx
080df832 +0x004e:  mov    %eax,0x8(%esp)
080df836 +0x0052:  mov    %ecx,0x4(%esp)
080df83a +0x0056:  mov    %edx,(%esp)
080df83d +0x0059:  call   080dfa62 <+0x27e>
080df842 +0x005e:  jmp    080df85f <+0x7b>
080df844 +0x0060:  mov    %edx,%ebx
080df846 +0x0062:  mov    %eax,%esi
080df848 +0x0064:  mov    0x8(%ebp),%eax
080df84b +0x0067:  mov    %eax,(%esp)
080df84e +0x006a:  call   080df9f2 <+0x20e>
080df853 +0x006f:  mov    %esi,%eax
080df855 +0x0071:  mov    %ebx,%edx
080df857 +0x0073:  mov    %eax,(%esp)
080df85a +0x0076:  call   08ae3750 <_Unwind_Resume>
080df85f +0x007b:  mov    0x8(%ebp),%eax
080df862 +0x007e:  mov    %eax,(%esp)
080df865 +0x0081:  call   080df9f2 <+0x20e>
080df86a +0x0086:  add    $0x10,%esp
080df86d +0x0089:  pop    %ebx
080df86e +0x008a:  pop    %esi
080df86f +0x008b:  pop    %ebp
080df870 +0x008c:  ret
080df871 +0x008d:  nop
080df872 +0x008e:  push   %ebp
080df873 +0x008f:  mov    %esp,%ebp
080df875 +0x0091:  mov    0x8(%ebp),%eax
080df878 +0x0094:  mov    0x4(%eax),%eax
080df87b +0x0097:  mov    %eax,%edx
080df87d +0x0099:  mov    0x8(%ebp),%eax
080df880 +0x009c:  mov    (%eax),%eax
080df882 +0x009e:  mov    %edx,%ecx
080df884 +0x00a0:  sub    %eax,%ecx
080df886 +0x00a2:  mov    %ecx,%eax
080df888 +0x00a4:  sar    $0x2,%eax
080df88b +0x00a7:  pop    %ebp
080df88c +0x00a8:  ret
080df88d +0x00a9:  nop
080df88e +0x00aa:  push   %ebp
080df88f +0x00ab:  mov    %esp,%ebp
080df891 +0x00ad:  mov    0x8(%ebp),%eax
080df894 +0x00b0:  mov    (%eax),%eax
080df896 +0x00b2:  mov    0xc(%ebp),%edx
080df899 +0x00b5:  shl    $0x2,%edx
080df89c +0x00b8:  add    %edx,%eax
080df89e +0x00ba:  pop    %ebp
080df89f +0x00bb:  ret
080df8a0 +0x00bc:  push   %ebp
080df8a1 +0x00bd:  mov    %esp,%ebp
080df8a3 +0x00bf:  sub    $0x28,%esp
080df8a6 +0x00c2:  mov    0xc(%ebp),%eax
080df8a9 +0x00c5:  mov    %eax,(%esp)
080df8ac +0x00c8:  call   080dfa7c <+0x298>
080df8b1 +0x00cd:  mov    (%eax),%eax
080df8b3 +0x00cf:  mov    %eax,-0xc(%ebp)
080df8b6 +0x00d2:  lea    -0xc(%ebp),%eax
080df8b9 +0x00d5:  mov    %eax,0x4(%esp)
080df8bd +0x00d9:  mov    0x8(%ebp),%eax
080df8c0 +0x00dc:  mov    %eax,(%esp)
080df8c3 +0x00df:  call   080dfa84 <+0x2a0>
080df8c8 +0x00e4:  leave
080df8c9 +0x00e5:  ret
080df8ca +0x00e6:  push   %ebp
080df8cb +0x00e7:  mov    %esp,%ebp
080df8cd +0x00e9:  sub    $0x28,%esp
080df8d0 +0x00ec:  lea    -0x10(%ebp),%eax
080df8d3 +0x00ef:  mov    0x8(%ebp),%edx
080df8d6 +0x00f2:  mov    %edx,0x4(%esp)
080df8da +0x00f6:  mov    %eax,(%esp)
080df8dd +0x00f9:  call   080dfb18 <+0x334>
080df8e2 +0x00fe:  sub    $0x4,%esp
080df8e5 +0x0101:  lea    -0xc(%ebp),%eax
080df8e8 +0x0104:  mov    0x8(%ebp),%edx
080df8eb +0x0107:  mov    %edx,0x4(%esp)
080df8ef +0x010b:  mov    %eax,(%esp)
080df8f2 +0x010e:  call   080dfb44 <+0x360>
080df8f7 +0x0113:  sub    $0x4,%esp
080df8fa +0x0116:  lea    -0x10(%ebp),%eax
080df8fd +0x0119:  mov    %eax,0x4(%esp)
080df901 +0x011d:  lea    -0xc(%ebp),%eax
080df904 +0x0120:  mov    %eax,(%esp)
080df907 +0x0123:  call   080dfb6f <+0x38b>
080df90c +0x0128:  leave
080df90d +0x0129:  ret
080df90e +0x012a:  push   %ebp
080df90f +0x012b:  mov    %esp,%ebp
080df911 +0x012d:  mov    0xc(%ebp),%eax
080df914 +0x0130:  mov    (%eax),%edx
080df916 +0x0132:  mov    0x8(%ebp),%eax
080df919 +0x0135:  mov    (%eax),%eax
080df91b +0x0137:  cmp    %eax,%edx
080df91d +0x0139:  jge    080df924 <+0x140>
080df91f +0x013b:  mov    0xc(%ebp),%eax
080df922 +0x013e:  jmp    080df927 <+0x143>
080df924 +0x0140:  mov    0x8(%ebp),%eax
080df927 +0x0143:  pop    %ebp
080df928 +0x0144:  ret
080df929 +0x0145:  nop
080df92a +0x0146:  push   %ebp
080df92b +0x0147:  mov    %esp,%ebp
080df92d +0x0149:  push   %ebx
080df92e +0x014a:  sub    $0x24,%esp
080df931 +0x014d:  mov    0x8(%ebp),%eax
080df934 +0x0150:  mov    %eax,(%esp)
080df937 +0x0153:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
080df93c +0x0158:  cmp    0xc(%ebp),%eax
080df93f +0x015b:  seta   %al
080df942 +0x015e:  test   %al,%al
080df944 +0x0160:  je     080df964 <+0x180>
080df946 +0x0162:  mov    0x8(%ebp),%eax
080df949 +0x0165:  mov    (%eax),%eax
080df94b +0x0167:  mov    0xc(%ebp),%edx
080df94e +0x016a:  shl    $0x2,%edx
080df951 +0x016d:  add    %edx,%eax
080df953 +0x016f:  mov    %eax,0x4(%esp)
080df957 +0x0173:  mov    0x8(%ebp),%eax
080df95a +0x0176:  mov    %eax,(%esp)
080df95d +0x0179:  call   08096c9e <_GLOBAL__I_g_maxTotalDefenseRate+0x28e>  ; global constructors keyed to g_maxTotalDefenseRate+0x28e
080df962 +0x017e:  jmp    080df9a8 <+0x1c4>
080df964 +0x0180:  mov    0x8(%ebp),%eax
080df967 +0x0183:  mov    %eax,(%esp)
080df96a +0x0186:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
080df96f +0x018b:  mov    0xc(%ebp),%edx
080df972 +0x018e:  mov    %edx,%ebx
080df974 +0x0190:  sub    %eax,%ebx
080df976 +0x0192:  lea    -0xc(%ebp),%eax
080df979 +0x0195:  mov    0x8(%ebp),%edx
080df97c +0x0198:  mov    %edx,0x4(%esp)
080df980 +0x019c:  mov    %eax,(%esp)
080df983 +0x019f:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
080df988 +0x01a4:  sub    $0x4,%esp
080df98b +0x01a7:  lea    0x10(%ebp),%eax
080df98e +0x01aa:  mov    %eax,0xc(%esp)
080df992 +0x01ae:  mov    %ebx,0x8(%esp)
080df996 +0x01b2:  mov    -0xc(%ebp),%eax
080df999 +0x01b5:  mov    %eax,0x4(%esp)
080df99d +0x01b9:  mov    0x8(%ebp),%eax
080df9a0 +0x01bc:  mov    %eax,(%esp)
080df9a3 +0x01bf:  call   080dfb9c <+0x3b8>
080df9a8 +0x01c4:  mov    -0x4(%ebp),%ebx
080df9ab +0x01c7:  leave
080df9ac +0x01c8:  ret
080df9ad +0x01c9:  push   %ebp
080df9ae +0x01ca:  mov    %esp,%ebp
080df9b0 +0x01cc:  mov    0x8(%ebp),%eax
080df9b3 +0x01cf:  movzbl (%eax),%edx
080df9b6 +0x01d2:  mov    0xc(%ebp),%eax
080df9b9 +0x01d5:  movzbl (%eax),%eax
080df9bc +0x01d8:  cmp    %al,%dl
080df9be +0x01da:  jae    080df9c5 <+0x1e1>
080df9c0 +0x01dc:  mov    0xc(%ebp),%eax
080df9c3 +0x01df:  jmp    080df9c8 <+0x1e4>
080df9c5 +0x01e1:  mov    0x8(%ebp),%eax
080df9c8 +0x01e4:  pop    %ebp
080df9c9 +0x01e5:  ret
080df9ca +0x01e6:  push   %ebp
080df9cb +0x01e7:  mov    %esp,%ebp
080df9cd +0x01e9:  sub    $0x18,%esp
080df9d0 +0x01ec:  mov    0x8(%ebp),%eax
080df9d3 +0x01ef:  mov    %eax,(%esp)
080df9d6 +0x01f2:  call   080dfbf4 <+0x410>
080df9db +0x01f7:  leave
080df9dc +0x01f8:  ret
080df9dd +0x01f9:  nop
080df9de +0x01fa:  push   %ebp
080df9df +0x01fb:  mov    %esp,%ebp
080df9e1 +0x01fd:  sub    $0x18,%esp
080df9e4 +0x0200:  mov    0x8(%ebp),%eax
080df9e7 +0x0203:  mov    %eax,(%esp)
080df9ea +0x0206:  call   080dfbc4 <+0x3e0>
080df9ef +0x020b:  leave
080df9f0 +0x020c:  ret
080df9f1 +0x020d:  nop
080df9f2 +0x020e:  push   %ebp
080df9f3 +0x020f:  mov    %esp,%ebp
080df9f5 +0x0211:  push   %esi
080df9f6 +0x0212:  push   %ebx
080df9f7 +0x0213:  sub    $0x10,%esp
080df9fa +0x0216:  mov    0x8(%ebp),%eax
080df9fd +0x0219:  mov    0x8(%eax),%eax
080dfa00 +0x021c:  mov    %eax,%edx
080dfa02 +0x021e:  mov    0x8(%ebp),%eax
080dfa05 +0x0221:  mov    (%eax),%eax
080dfa07 +0x0223:  mov    %edx,%ecx
080dfa09 +0x0225:  sub    %eax,%ecx
080dfa0b +0x0227:  mov    %ecx,%eax
080dfa0d +0x0229:  sar    $0x2,%eax
080dfa10 +0x022c:  mov    %eax,%edx
080dfa12 +0x022e:  mov    0x8(%ebp),%eax
080dfa15 +0x0231:  mov    (%eax),%eax
080dfa17 +0x0233:  mov    %edx,0x8(%esp)
080dfa1b +0x0237:  mov    %eax,0x4(%esp)
080dfa1f +0x023b:  mov    0x8(%ebp),%eax
080dfa22 +0x023e:  mov    %eax,(%esp)
080dfa25 +0x0241:  call   080dfc08 <+0x424>
080dfa2a +0x0246:  jmp    080dfa47 <+0x263>
080dfa2c +0x0248:  mov    %edx,%ebx
080dfa2e +0x024a:  mov    %eax,%esi
080dfa30 +0x024c:  mov    0x8(%ebp),%eax
080dfa33 +0x024f:  mov    %eax,(%esp)
080dfa36 +0x0252:  call   080df9ca <+0x1e6>
080dfa3b +0x0257:  mov    %esi,%eax
080dfa3d +0x0259:  mov    %ebx,%edx
080dfa3f +0x025b:  mov    %eax,(%esp)
080dfa42 +0x025e:  call   08ae3750 <_Unwind_Resume>
080dfa47 +0x0263:  mov    0x8(%ebp),%eax
080dfa4a +0x0266:  mov    %eax,(%esp)
080dfa4d +0x0269:  call   080df9ca <+0x1e6>
080dfa52 +0x026e:  add    $0x10,%esp
080dfa55 +0x0271:  pop    %ebx
080dfa56 +0x0272:  pop    %esi
080dfa57 +0x0273:  pop    %ebp
080dfa58 +0x0274:  ret
080dfa59 +0x0275:  nop
080dfa5a +0x0276:  push   %ebp
080dfa5b +0x0277:  mov    %esp,%ebp
080dfa5d +0x0279:  mov    0x8(%ebp),%eax
080dfa60 +0x027c:  pop    %ebp
080dfa61 +0x027d:  ret
080dfa62 +0x027e:  push   %ebp
080dfa63 +0x027f:  mov    %esp,%ebp
080dfa65 +0x0281:  sub    $0x18,%esp
080dfa68 +0x0284:  mov    0xc(%ebp),%eax
080dfa6b +0x0287:  mov    %eax,0x4(%esp)
080dfa6f +0x028b:  mov    0x8(%ebp),%eax
080dfa72 +0x028e:  mov    %eax,(%esp)
080dfa75 +0x0291:  call   080dfc2f <+0x44b>
080dfa7a +0x0296:  leave
080dfa7b +0x0297:  ret
080dfa7c +0x0298:  push   %ebp
080dfa7d +0x0299:  mov    %esp,%ebp
080dfa7f +0x029b:  mov    0x8(%ebp),%eax
080dfa82 +0x029e:  pop    %ebp
080dfa83 +0x029f:  ret
080dfa84 +0x02a0:  push   %ebp
080dfa85 +0x02a1:  mov    %esp,%ebp
080dfa87 +0x02a3:  sub    $0x28,%esp
080dfa8a +0x02a6:  mov    0x8(%ebp),%eax
080dfa8d +0x02a9:  mov    0x4(%eax),%edx
080dfa90 +0x02ac:  mov    0x8(%ebp),%eax
080dfa93 +0x02af:  mov    0x8(%eax),%eax
080dfa96 +0x02b2:  cmp    %eax,%edx
080dfa98 +0x02b4:  je     080dfad7 <+0x2f3>
080dfa9a +0x02b6:  mov    0xc(%ebp),%eax
080dfa9d +0x02b9:  mov    %eax,(%esp)
080dfaa0 +0x02bc:  call   080dfc49 <+0x465>
080dfaa5 +0x02c1:  mov    (%eax),%eax
080dfaa7 +0x02c3:  mov    %eax,-0x14(%ebp)
080dfaaa +0x02c6:  mov    0x8(%ebp),%eax
080dfaad +0x02c9:  mov    0x4(%eax),%edx
080dfab0 +0x02cc:  mov    0x8(%ebp),%eax
080dfab3 +0x02cf:  lea    -0x14(%ebp),%ecx
080dfab6 +0x02d2:  mov    %ecx,0x8(%esp)
080dfaba +0x02d6:  mov    %edx,0x4(%esp)
080dfabe +0x02da:  mov    %eax,(%esp)
080dfac1 +0x02dd:  call   080dfc52 <+0x46e>
080dfac6 +0x02e2:  mov    0x8(%ebp),%eax
080dfac9 +0x02e5:  mov    0x4(%eax),%eax
080dfacc +0x02e8:  lea    0x4(%eax),%edx
080dfacf +0x02eb:  mov    0x8(%ebp),%eax
080dfad2 +0x02ee:  mov    %edx,0x4(%eax)
080dfad5 +0x02f1:  jmp    080dfb15 <+0x331>
080dfad7 +0x02f3:  mov    0xc(%ebp),%eax
080dfada +0x02f6:  mov    %eax,(%esp)
080dfadd +0x02f9:  call   080dfc49 <+0x465>
080dfae2 +0x02fe:  mov    (%eax),%eax
080dfae4 +0x0300:  mov    %eax,-0x10(%ebp)
080dfae7 +0x0303:  lea    -0xc(%ebp),%eax
080dfaea +0x0306:  mov    0x8(%ebp),%edx
080dfaed +0x0309:  mov    %edx,0x4(%esp)
080dfaf1 +0x030d:  mov    %eax,(%esp)
080dfaf4 +0x0310:  call   080dfc88 <+0x4a4>
080dfaf9 +0x0315:  sub    $0x4,%esp
080dfafc +0x0318:  lea    -0x10(%ebp),%eax
080dfaff +0x031b:  mov    %eax,0x8(%esp)
080dfb03 +0x031f:  mov    -0xc(%ebp),%eax
080dfb06 +0x0322:  mov    %eax,0x4(%esp)
080dfb0a +0x0326:  mov    0x8(%ebp),%eax
080dfb0d +0x0329:  mov    %eax,(%esp)
080dfb10 +0x032c:  call   080dfcae <+0x4ca>
080dfb15 +0x0331:  leave
080dfb16 +0x0332:  ret
080dfb17 +0x0333:  nop
080dfb18 +0x0334:  push   %ebp
080dfb19 +0x0335:  mov    %esp,%ebp
080dfb1b +0x0337:  push   %ebx
080dfb1c +0x0338:  sub    $0x24,%esp
080dfb1f +0x033b:  mov    0x8(%ebp),%ebx
080dfb22 +0x033e:  mov    0xc(%ebp),%eax
080dfb25 +0x0341:  mov    0x4(%eax),%eax
080dfb28 +0x0344:  mov    %eax,-0xc(%ebp)
080dfb2b +0x0347:  lea    -0xc(%ebp),%eax
080dfb2e +0x034a:  mov    %eax,0x4(%esp)
080dfb32 +0x034e:  mov    %ebx,(%esp)
080dfb35 +0x0351:  call   080dff70 <+0x78c>
080dfb3a +0x0356:  mov    %ebx,%eax
080dfb3c +0x0358:  add    $0x24,%esp
080dfb3f +0x035b:  pop    %ebx
080dfb40 +0x035c:  pop    %ebp
080dfb41 +0x035d:  ret    $0x4
080dfb44 +0x0360:  push   %ebp
080dfb45 +0x0361:  mov    %esp,%ebp
080dfb47 +0x0363:  push   %ebx
080dfb48 +0x0364:  sub    $0x24,%esp
080dfb4b +0x0367:  mov    0x8(%ebp),%ebx
080dfb4e +0x036a:  mov    0xc(%ebp),%eax
080dfb51 +0x036d:  mov    (%eax),%eax
080dfb53 +0x036f:  mov    %eax,-0xc(%ebp)
080dfb56 +0x0372:  lea    -0xc(%ebp),%eax
080dfb59 +0x0375:  mov    %eax,0x4(%esp)
080dfb5d +0x0379:  mov    %ebx,(%esp)
080dfb60 +0x037c:  call   080dff70 <+0x78c>
080dfb65 +0x0381:  mov    %ebx,%eax
080dfb67 +0x0383:  add    $0x24,%esp
080dfb6a +0x0386:  pop    %ebx
080dfb6b +0x0387:  pop    %ebp
080dfb6c +0x0388:  ret    $0x4
080dfb6f +0x038b:  push   %ebp
080dfb70 +0x038c:  mov    %esp,%ebp
080dfb72 +0x038e:  push   %ebx
080dfb73 +0x038f:  sub    $0x14,%esp
080dfb76 +0x0392:  mov    0x8(%ebp),%eax
080dfb79 +0x0395:  mov    %eax,(%esp)
080dfb7c +0x0398:  call   080dff80 <+0x79c>
080dfb81 +0x039d:  mov    (%eax),%ebx
080dfb83 +0x039f:  mov    0xc(%ebp),%eax
080dfb86 +0x03a2:  mov    %eax,(%esp)
080dfb89 +0x03a5:  call   080dff80 <+0x79c>
080dfb8e +0x03aa:  mov    (%eax),%eax
080dfb90 +0x03ac:  cmp    %eax,%ebx
080dfb92 +0x03ae:  sete   %al
080dfb95 +0x03b1:  add    $0x14,%esp
080dfb98 +0x03b4:  pop    %ebx
080dfb99 +0x03b5:  pop    %ebp
080dfb9a +0x03b6:  ret
080dfb9b +0x03b7:  nop
080dfb9c +0x03b8:  push   %ebp
080dfb9d +0x03b9:  mov    %esp,%ebp
080dfb9f +0x03bb:  sub    $0x18,%esp
080dfba2 +0x03be:  mov    0x14(%ebp),%eax
080dfba5 +0x03c1:  mov    %eax,0xc(%esp)
080dfba9 +0x03c5:  mov    0x10(%ebp),%eax
080dfbac +0x03c8:  mov    %eax,0x8(%esp)
080dfbb0 +0x03cc:  mov    0xc(%ebp),%eax
080dfbb3 +0x03cf:  mov    %eax,0x4(%esp)
080dfbb7 +0x03d3:  mov    0x8(%ebp),%eax
080dfbba +0x03d6:  mov    %eax,(%esp)
080dfbbd +0x03d9:  call   080dff88 <+0x7a4>
080dfbc2 +0x03de:  leave
080dfbc3 +0x03df:  ret
080dfbc4 +0x03e0:  push   %ebp
080dfbc5 +0x03e1:  mov    %esp,%ebp
080dfbc7 +0x03e3:  sub    $0x18,%esp
080dfbca +0x03e6:  mov    0x8(%ebp),%eax
080dfbcd +0x03e9:  mov    %eax,(%esp)
080dfbd0 +0x03ec:  call   080e03ae <+0xbca>
080dfbd5 +0x03f1:  mov    0x8(%ebp),%eax
080dfbd8 +0x03f4:  movl   $0x0,(%eax)
080dfbde +0x03fa:  mov    0x8(%ebp),%eax
080dfbe1 +0x03fd:  movl   $0x0,0x4(%eax)
080dfbe8 +0x0404:  mov    0x8(%ebp),%eax
080dfbeb +0x0407:  movl   $0x0,0x8(%eax)
080dfbf2 +0x040e:  leave
080dfbf3 +0x040f:  ret
080dfbf4 +0x0410:  push   %ebp
080dfbf5 +0x0411:  mov    %esp,%ebp
080dfbf7 +0x0413:  sub    $0x18,%esp
080dfbfa +0x0416:  mov    0x8(%ebp),%eax
080dfbfd +0x0419:  mov    %eax,(%esp)
080dfc00 +0x041c:  call   080e03c2 <+0xbde>
080dfc05 +0x0421:  leave
080dfc06 +0x0422:  ret
080dfc07 +0x0423:  nop
080dfc08 +0x0424:  push   %ebp
080dfc09 +0x0425:  mov    %esp,%ebp
080dfc0b +0x0427:  sub    $0x18,%esp
080dfc0e +0x042a:  cmpl   $0x0,0xc(%ebp)
080dfc12 +0x042e:  je     080dfc2d <+0x449>
080dfc14 +0x0430:  mov    0x8(%ebp),%eax
080dfc17 +0x0433:  mov    0x10(%ebp),%edx
080dfc1a +0x0436:  mov    %edx,0x8(%esp)
080dfc1e +0x043a:  mov    0xc(%ebp),%edx
080dfc21 +0x043d:  mov    %edx,0x4(%esp)
080dfc25 +0x0441:  mov    %eax,(%esp)
080dfc28 +0x0444:  call   080e03c8 <+0xbe4>
080dfc2d +0x0449:  leave
080dfc2e +0x044a:  ret
080dfc2f +0x044b:  push   %ebp
080dfc30 +0x044c:  mov    %esp,%ebp
080dfc32 +0x044e:  sub    $0x18,%esp
080dfc35 +0x0451:  mov    0xc(%ebp),%eax
080dfc38 +0x0454:  mov    %eax,0x4(%esp)
080dfc3c +0x0458:  mov    0x8(%ebp),%eax
080dfc3f +0x045b:  mov    %eax,(%esp)
080dfc42 +0x045e:  call   080e03db <+0xbf7>
080dfc47 +0x0463:  leave
080dfc48 +0x0464:  ret
080dfc49 +0x0465:  push   %ebp
080dfc4a +0x0466:  mov    %esp,%ebp
080dfc4c +0x0468:  mov    0x8(%ebp),%eax
080dfc4f +0x046b:  pop    %ebp
080dfc50 +0x046c:  ret
080dfc51 +0x046d:  nop
080dfc52 +0x046e:  push   %ebp
080dfc53 +0x046f:  mov    %esp,%ebp
080dfc55 +0x0471:  push   %ebx
080dfc56 +0x0472:  sub    $0x14,%esp
080dfc59 +0x0475:  mov    0x10(%ebp),%eax
080dfc5c +0x0478:  mov    %eax,(%esp)
080dfc5f +0x047b:  call   080dfc49 <+0x465>
080dfc64 +0x0480:  mov    (%eax),%ebx
080dfc66 +0x0482:  mov    0xc(%ebp),%eax
080dfc69 +0x0485:  mov    %eax,0x4(%esp)
080dfc6d +0x0489:  movl   $0x4,(%esp)
080dfc74 +0x0490:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
080dfc79 +0x0495:  mov    %eax,%edx
080dfc7b +0x0497:  test   %edx,%edx
080dfc7d +0x0499:  je     080dfc81 <+0x49d>
080dfc7f +0x049b:  mov    %ebx,(%eax)
080dfc81 +0x049d:  add    $0x14,%esp
080dfc84 +0x04a0:  pop    %ebx
080dfc85 +0x04a1:  pop    %ebp
080dfc86 +0x04a2:  ret
080dfc87 +0x04a3:  nop
080dfc88 +0x04a4:  push   %ebp
080dfc89 +0x04a5:  mov    %esp,%ebp
080dfc8b +0x04a7:  push   %ebx
080dfc8c +0x04a8:  sub    $0x14,%esp
080dfc8f +0x04ab:  mov    0x8(%ebp),%ebx
080dfc92 +0x04ae:  mov    0xc(%ebp),%eax
080dfc95 +0x04b1:  add    $0x4,%eax
080dfc98 +0x04b4:  mov    %eax,0x4(%esp)
080dfc9c +0x04b8:  mov    %ebx,(%esp)
080dfc9f +0x04bb:  call   080e03e0 <+0xbfc>
080dfca4 +0x04c0:  mov    %ebx,%eax
080dfca6 +0x04c2:  add    $0x14,%esp
080dfca9 +0x04c5:  pop    %ebx
080dfcaa +0x04c6:  pop    %ebp
080dfcab +0x04c7:  ret    $0x4
080dfcae +0x04ca:  push   %ebp
080dfcaf +0x04cb:  mov    %esp,%ebp
080dfcb1 +0x04cd:  push   %esi
080dfcb2 +0x04ce:  push   %ebx
080dfcb3 +0x04cf:  sub    $0x30,%esp
080dfcb6 +0x04d2:  mov    0x8(%ebp),%eax
080dfcb9 +0x04d5:  mov    0x4(%eax),%edx
080dfcbc +0x04d8:  mov    0x8(%ebp),%eax
080dfcbf +0x04db:  mov    0x8(%eax),%eax
080dfcc2 +0x04de:  cmp    %eax,%edx
080dfcc4 +0x04e0:  je     080dfd5b <+0x577>
080dfcca +0x04e6:  mov    0x8(%ebp),%eax
080dfccd +0x04e9:  mov    0x4(%eax),%eax
080dfcd0 +0x04ec:  sub    $0x4,%eax
080dfcd3 +0x04ef:  mov    %eax,(%esp)
080dfcd6 +0x04f2:  call   080dfa7c <+0x298>
080dfcdb +0x04f7:  mov    (%eax),%eax
080dfcdd +0x04f9:  mov    %eax,-0x24(%ebp)
080dfce0 +0x04fc:  mov    0x8(%ebp),%eax
080dfce3 +0x04ff:  mov    0x4(%eax),%edx
080dfce6 +0x0502:  mov    0x8(%ebp),%eax
080dfce9 +0x0505:  lea    -0x24(%ebp),%ecx
080dfcec +0x0508:  mov    %ecx,0x8(%esp)
080dfcf0 +0x050c:  mov    %edx,0x4(%esp)
080dfcf4 +0x0510:  mov    %eax,(%esp)
080dfcf7 +0x0513:  call   080dfc52 <+0x46e>
080dfcfc +0x0518:  mov    0x8(%ebp),%eax
080dfcff +0x051b:  mov    0x4(%eax),%eax
080dfd02 +0x051e:  lea    0x4(%eax),%edx
080dfd05 +0x0521:  mov    0x8(%ebp),%eax
080dfd08 +0x0524:  mov    %edx,0x4(%eax)
080dfd0b +0x0527:  mov    0x8(%ebp),%eax
080dfd0e +0x052a:  mov    0x4(%eax),%eax
080dfd11 +0x052d:  lea    -0x4(%eax),%esi
080dfd14 +0x0530:  mov    0x8(%ebp),%eax
080dfd17 +0x0533:  mov    0x4(%eax),%eax
080dfd1a +0x0536:  lea    -0x8(%eax),%ebx
080dfd1d +0x0539:  lea    0xc(%ebp),%eax
080dfd20 +0x053c:  mov    %eax,(%esp)
080dfd23 +0x053f:  call   080e03f0 <+0xc0c>
080dfd28 +0x0544:  mov    (%eax),%eax
080dfd2a +0x0546:  mov    %esi,0x8(%esp)
080dfd2e +0x054a:  mov    %ebx,0x4(%esp)
080dfd32 +0x054e:  mov    %eax,(%esp)
080dfd35 +0x0551:  call   080e03f8 <+0xc14>
080dfd3a +0x0556:  lea    0xc(%ebp),%eax
080dfd3d +0x0559:  mov    %eax,(%esp)
080dfd40 +0x055c:  call   080e0430 <+0xc4c>
080dfd45 +0x0561:  mov    %eax,%ebx
080dfd47 +0x0563:  mov    0x10(%ebp),%eax
080dfd4a +0x0566:  mov    %eax,(%esp)
080dfd4d +0x0569:  call   080dfc49 <+0x465>
080dfd52 +0x056e:  mov    (%eax),%eax
080dfd54 +0x0570:  mov    %eax,(%ebx)
080dfd56 +0x0572:  jmp    080dff65 <+0x781>
080dfd5b +0x0577:  movl   $"vector::_M_insert_aux",0x8(%esp)
080dfd63 +0x057f:  movl   $0x1,0x4(%esp)
080dfd6b +0x0587:  mov    0x8(%ebp),%eax
080dfd6e +0x058a:  mov    %eax,(%esp)
080dfd71 +0x058d:  call   080e043a <+0xc56>
080dfd76 +0x0592:  mov    %eax,-0x18(%ebp)
080dfd79 +0x0595:  lea    -0x20(%ebp),%eax
080dfd7c +0x0598:  mov    0x8(%ebp),%edx
080dfd7f +0x059b:  mov    %edx,0x4(%esp)
080dfd83 +0x059f:  mov    %eax,(%esp)
080dfd86 +0x05a2:  call   080e04e0 <+0xcfc>
080dfd8b +0x05a7:  sub    $0x4,%esp
080dfd8e +0x05aa:  lea    -0x20(%ebp),%eax
080dfd91 +0x05ad:  mov    %eax,0x4(%esp)
080dfd95 +0x05b1:  lea    0xc(%ebp),%eax
080dfd98 +0x05b4:  mov    %eax,(%esp)
080dfd9b +0x05b7:  call   080e0503 <+0xd1f>
080dfda0 +0x05bc:  mov    %eax,-0x14(%ebp)
080dfda3 +0x05bf:  mov    0x8(%ebp),%eax
080dfda6 +0x05c2:  mov    -0x18(%ebp),%edx
080dfda9 +0x05c5:  mov    %edx,0x4(%esp)
080dfdad +0x05c9:  mov    %eax,(%esp)
080dfdb0 +0x05cc:  call   080e0536 <+0xd52>
080dfdb5 +0x05d1:  mov    %eax,-0x10(%ebp)
080dfdb8 +0x05d4:  mov    -0x10(%ebp),%eax
080dfdbb +0x05d7:  mov    %eax,-0xc(%ebp)
080dfdbe +0x05da:  mov    0x10(%ebp),%eax
080dfdc1 +0x05dd:  mov    %eax,(%esp)
080dfdc4 +0x05e0:  call   080dfc49 <+0x465>
080dfdc9 +0x05e5:  mov    (%eax),%eax
080dfdcb +0x05e7:  mov    %eax,-0x1c(%ebp)
080dfdce +0x05ea:  mov    -0x14(%ebp),%eax
080dfdd1 +0x05ed:  shl    $0x2,%eax
080dfdd4 +0x05f0:  mov    %eax,%edx
080dfdd6 +0x05f2:  add    -0x10(%ebp),%edx
080dfdd9 +0x05f5:  mov    0x8(%ebp),%eax
080dfddc +0x05f8:  lea    -0x1c(%ebp),%ecx
080dfddf +0x05fb:  mov    %ecx,0x8(%esp)
080dfde3 +0x05ff:  mov    %edx,0x4(%esp)
080dfde7 +0x0603:  mov    %eax,(%esp)
080dfdea +0x0606:  call   080dfc52 <+0x46e>
080dfdef +0x060b:  movl   $0x0,-0xc(%ebp)
080dfdf6 +0x0612:  mov    0x8(%ebp),%eax
080dfdf9 +0x0615:  mov    %eax,(%esp)
080dfdfc +0x0618:  call   080dfa5a <+0x276>
080dfe01 +0x061d:  mov    %eax,%ebx
080dfe03 +0x061f:  lea    0xc(%ebp),%eax
080dfe06 +0x0622:  mov    %eax,(%esp)
080dfe09 +0x0625:  call   080e03f0 <+0xc0c>
080dfe0e +0x062a:  mov    (%eax),%edx
080dfe10 +0x062c:  mov    0x8(%ebp),%eax
080dfe13 +0x062f:  mov    (%eax),%eax
080dfe15 +0x0631:  mov    %ebx,0xc(%esp)
080dfe19 +0x0635:  mov    -0x10(%ebp),%ecx
080dfe1c +0x0638:  mov    %ecx,0x8(%esp)
080dfe20 +0x063c:  mov    %edx,0x4(%esp)
080dfe24 +0x0640:  mov    %eax,(%esp)
080dfe27 +0x0643:  call   080e0565 <+0xd81>
080dfe2c +0x0648:  mov    %eax,-0xc(%ebp)
080dfe2f +0x064b:  addl   $0x4,-0xc(%ebp)
080dfe33 +0x064f:  mov    0x8(%ebp),%eax
080dfe36 +0x0652:  mov    %eax,(%esp)
080dfe39 +0x0655:  call   080dfa5a <+0x276>
080dfe3e +0x065a:  mov    %eax,%ebx
080dfe40 +0x065c:  mov    0x8(%ebp),%eax
080dfe43 +0x065f:  mov    0x4(%eax),%esi
080dfe46 +0x0662:  lea    0xc(%ebp),%eax
080dfe49 +0x0665:  mov    %eax,(%esp)
080dfe4c +0x0668:  call   080e03f0 <+0xc0c>
080dfe51 +0x066d:  mov    (%eax),%eax
080dfe53 +0x066f:  mov    %ebx,0xc(%esp)
080dfe57 +0x0673:  mov    -0xc(%ebp),%edx
080dfe5a +0x0676:  mov    %edx,0x8(%esp)
080dfe5e +0x067a:  mov    %esi,0x4(%esp)
080dfe62 +0x067e:  mov    %eax,(%esp)
080dfe65 +0x0681:  call   080e0565 <+0xd81>
080dfe6a +0x0686:  mov    %eax,-0xc(%ebp)
080dfe6d +0x0689:  mov    0x8(%ebp),%eax
080dfe70 +0x068c:  mov    %eax,(%esp)
080dfe73 +0x068f:  call   080dfa5a <+0x276>
080dfe78 +0x0694:  mov    0x8(%ebp),%edx
080dfe7b +0x0697:  mov    0x4(%edx),%ecx
080dfe7e +0x069a:  mov    0x8(%ebp),%edx
080dfe81 +0x069d:  mov    (%edx),%edx
080dfe83 +0x069f:  mov    %eax,0x8(%esp)
080dfe87 +0x06a3:  mov    %ecx,0x4(%esp)
080dfe8b +0x06a7:  mov    %edx,(%esp)
080dfe8e +0x06aa:  call   080dfa62 <+0x27e>
080dfe93 +0x06af:  mov    0x8(%ebp),%eax
080dfe96 +0x06b2:  mov    0x8(%eax),%eax
080dfe99 +0x06b5:  mov    %eax,%edx
080dfe9b +0x06b7:  mov    0x8(%ebp),%eax
080dfe9e +0x06ba:  mov    (%eax),%eax
080dfea0 +0x06bc:  mov    %edx,%ecx
080dfea2 +0x06be:  sub    %eax,%ecx
080dfea4 +0x06c0:  mov    %ecx,%eax
080dfea6 +0x06c2:  sar    $0x2,%eax
080dfea9 +0x06c5:  mov    %eax,%ecx
080dfeab +0x06c7:  mov    0x8(%ebp),%eax
080dfeae +0x06ca:  mov    (%eax),%edx
080dfeb0 +0x06cc:  mov    0x8(%ebp),%eax
080dfeb3 +0x06cf:  mov    %ecx,0x8(%esp)
080dfeb7 +0x06d3:  mov    %edx,0x4(%esp)
080dfebb +0x06d7:  mov    %eax,(%esp)
080dfebe +0x06da:  call   080dfc08 <+0x424>
080dfec3 +0x06df:  mov    0x8(%ebp),%eax
080dfec6 +0x06e2:  mov    -0x10(%ebp),%edx
080dfec9 +0x06e5:  mov    %edx,(%eax)
080dfecb +0x06e7:  mov    0x8(%ebp),%eax
080dfece +0x06ea:  mov    -0xc(%ebp),%edx
080dfed1 +0x06ed:  mov    %edx,0x4(%eax)
080dfed4 +0x06f0:  mov    -0x18(%ebp),%eax
080dfed7 +0x06f3:  shl    $0x2,%eax
080dfeda +0x06f6:  mov    %eax,%edx
080dfedc +0x06f8:  add    -0x10(%ebp),%edx
080dfedf +0x06fb:  mov    0x8(%ebp),%eax
080dfee2 +0x06fe:  mov    %edx,0x8(%eax)
080dfee5 +0x0701:  jmp    080dff65 <+0x781>
080dfee7 +0x0703:  mov    %eax,(%esp)
080dfeea +0x0706:  call   08725ce0 <__cxa_begin_catch>
080dfeef +0x070b:  cmpl   $0x0,-0xc(%ebp)
080dfef3 +0x070f:  jne    080dff11 <+0x72d>
080dfef5 +0x0711:  mov    -0x14(%ebp),%eax
080dfef8 +0x0714:  shl    $0x2,%eax
080dfefb +0x0717:  mov    %eax,%edx
080dfefd +0x0719:  add    -0x10(%ebp),%edx
080dff00 +0x071c:  mov    0x8(%ebp),%eax
080dff03 +0x071f:  mov    %edx,0x4(%esp)
080dff07 +0x0723:  mov    %eax,(%esp)
080dff0a +0x0726:  call   080e05b8 <+0xdd4>
080dff0f +0x072b:  jmp    080dff32 <+0x74e>
080dff11 +0x072d:  mov    0x8(%ebp),%eax
080dff14 +0x0730:  mov    %eax,(%esp)
080dff17 +0x0733:  call   080dfa5a <+0x276>
080dff1c +0x0738:  mov    %eax,0x8(%esp)
080dff20 +0x073c:  mov    -0xc(%ebp),%eax
080dff23 +0x073f:  mov    %eax,0x4(%esp)
080dff27 +0x0743:  mov    -0x10(%ebp),%eax
080dff2a +0x0746:  mov    %eax,(%esp)
080dff2d +0x0749:  call   080dfa62 <+0x27e>
080dff32 +0x074e:  mov    0x8(%ebp),%eax
080dff35 +0x0751:  mov    -0x18(%ebp),%edx
080dff38 +0x0754:  mov    %edx,0x8(%esp)
080dff3c +0x0758:  mov    -0x10(%ebp),%edx
080dff3f +0x075b:  mov    %edx,0x4(%esp)
080dff43 +0x075f:  mov    %eax,(%esp)
080dff46 +0x0762:  call   080dfc08 <+0x424>
080dff4b +0x0767:  call   08724be0 <__cxa_rethrow>
080dff50 +0x076c:  mov    %edx,%ebx
080dff52 +0x076e:  mov    %eax,%esi
080dff54 +0x0770:  call   08725c30 <__cxa_end_catch>
080dff59 +0x0775:  mov    %esi,%eax
080dff5b +0x0777:  mov    %ebx,%edx
080dff5d +0x0779:  mov    %eax,(%esp)
080dff60 +0x077c:  call   08ae3750 <_Unwind_Resume>
080dff65 +0x0781:  lea    -0x8(%ebp),%esp
080dff68 +0x0784:  add    $0x0,%esp
080dff6b +0x0787:  pop    %ebx
080dff6c +0x0788:  pop    %esi
080dff6d +0x0789:  pop    %ebp
080dff6e +0x078a:  ret
080dff6f +0x078b:  nop
080dff70 +0x078c:  push   %ebp
080dff71 +0x078d:  mov    %esp,%ebp
080dff73 +0x078f:  mov    0xc(%ebp),%eax
080dff76 +0x0792:  mov    (%eax),%edx
080dff78 +0x0794:  mov    0x8(%ebp),%eax
080dff7b +0x0797:  mov    %edx,(%eax)
080dff7d +0x0799:  pop    %ebp
080dff7e +0x079a:  ret
080dff7f +0x079b:  nop
080dff80 +0x079c:  push   %ebp
080dff81 +0x079d:  mov    %esp,%ebp
080dff83 +0x079f:  mov    0x8(%ebp),%eax
080dff86 +0x07a2:  pop    %ebp
080dff87 +0x07a3:  ret
080dff88 +0x07a4:  push   %ebp
080dff89 +0x07a5:  mov    %esp,%ebp
080dff8b +0x07a7:  push   %esi
080dff8c +0x07a8:  push   %ebx
080dff8d +0x07a9:  sub    $0x40,%esp
080dff90 +0x07ac:  cmpl   $0x0,0x10(%ebp)
080dff94 +0x07b0:  je     080e03a4 <+0xbc0>
080dff9a +0x07b6:  mov    0x8(%ebp),%eax
080dff9d +0x07b9:  mov    0x8(%eax),%eax
080dffa0 +0x07bc:  mov    %eax,%edx
080dffa2 +0x07be:  mov    0x8(%ebp),%eax
080dffa5 +0x07c1:  mov    0x4(%eax),%eax
080dffa8 +0x07c4:  mov    %edx,%ecx
080dffaa +0x07c6:  sub    %eax,%ecx
080dffac +0x07c8:  mov    %ecx,%eax
080dffae +0x07ca:  sar    $0x2,%eax
080dffb1 +0x07cd:  cmp    0x10(%ebp),%eax
080dffb4 +0x07d0:  jb     080e017b <+0x997>
080dffba +0x07d6:  mov    0x14(%ebp),%eax
080dffbd +0x07d9:  mov    (%eax),%eax
080dffbf +0x07db:  mov    %eax,-0x2c(%ebp)
080dffc2 +0x07de:  lea    -0x28(%ebp),%eax
080dffc5 +0x07e1:  mov    0x8(%ebp),%edx
080dffc8 +0x07e4:  mov    %edx,0x4(%esp)
080dffcc +0x07e8:  mov    %eax,(%esp)
080dffcf +0x07eb:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
080dffd4 +0x07f0:  sub    $0x4,%esp
080dffd7 +0x07f3:  lea    0xc(%ebp),%eax
080dffda +0x07f6:  mov    %eax,0x4(%esp)
080dffde +0x07fa:  lea    -0x28(%ebp),%eax
080dffe1 +0x07fd:  mov    %eax,(%esp)
080dffe4 +0x0800:  call   0808e87b <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x6eb>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x6eb
080dffe9 +0x0805:  mov    %eax,-0x20(%ebp)
080dffec +0x0808:  mov    0x8(%ebp),%eax
080dffef +0x080b:  mov    0x4(%eax),%eax
080dfff2 +0x080e:  mov    %eax,-0x1c(%ebp)
080dfff5 +0x0811:  mov    -0x20(%ebp),%eax
080dfff8 +0x0814:  cmp    0x10(%ebp),%eax
080dfffb +0x0817:  jbe    080e00b9 <+0x8d5>
080e0001 +0x081d:  mov    0x8(%ebp),%eax
080e0004 +0x0820:  mov    %eax,(%esp)
080e0007 +0x0823:  call   08083f0e <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x151>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x151
080e000c +0x0828:  mov    0x8(%ebp),%edx
080e000f +0x082b:  mov    0x4(%edx),%ecx
080e0012 +0x082e:  mov    0x8(%ebp),%edx
080e0015 +0x0831:  mov    0x4(%edx),%edx
080e0018 +0x0834:  mov    0x8(%ebp),%ebx
080e001b +0x0837:  mov    0x4(%ebx),%ebx
080e001e +0x083a:  mov    0x10(%ebp),%esi
080e0021 +0x083d:  shl    $0x2,%esi
080e0024 +0x0840:  neg    %esi
080e0026 +0x0842:  add    %esi,%ebx
080e0028 +0x0844:  mov    %eax,0xc(%esp)
080e002c +0x0848:  mov    %ecx,0x8(%esp)
080e0030 +0x084c:  mov    %edx,0x4(%esp)
080e0034 +0x0850:  mov    %ebx,(%esp)
080e0037 +0x0853:  call   0808e8ad <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x71d>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x71d
080e003c +0x0858:  mov    0x8(%ebp),%eax
080e003f +0x085b:  mov    0x4(%eax),%eax
080e0042 +0x085e:  mov    0x10(%ebp),%edx
080e0045 +0x0861:  shl    $0x2,%edx
080e0048 +0x0864:  lea    (%eax,%edx,1),%edx
080e004b +0x0867:  mov    0x8(%ebp),%eax
080e004e +0x086a:  mov    %edx,0x4(%eax)
080e0051 +0x086d:  mov    0x10(%ebp),%eax
080e0054 +0x0870:  shl    $0x2,%eax
080e0057 +0x0873:  neg    %eax
080e0059 +0x0875:  mov    %eax,%ebx
080e005b +0x0877:  add    -0x1c(%ebp),%ebx
080e005e +0x087a:  lea    0xc(%ebp),%eax
080e0061 +0x087d:  mov    %eax,(%esp)
080e0064 +0x0880:  call   0808e78c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5fc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5fc
080e0069 +0x0885:  mov    (%eax),%eax
080e006b +0x0887:  mov    -0x1c(%ebp),%edx
080e006e +0x088a:  mov    %edx,0x8(%esp)
080e0072 +0x088e:  mov    %ebx,0x4(%esp)
080e0076 +0x0892:  mov    %eax,(%esp)
080e0079 +0x0895:  call   0808e794 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x604>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x604
080e007e +0x089a:  lea    0xc(%ebp),%eax
080e0081 +0x089d:  mov    %eax,(%esp)
080e0084 +0x08a0:  call   0808e78c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5fc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5fc
080e0089 +0x08a5:  mov    (%eax),%eax
080e008b +0x08a7:  mov    0x10(%ebp),%edx
080e008e +0x08aa:  shl    $0x2,%edx
080e0091 +0x08ad:  lea    (%eax,%edx,1),%ebx
080e0094 +0x08b0:  lea    0xc(%ebp),%eax
080e0097 +0x08b3:  mov    %eax,(%esp)
080e009a +0x08b6:  call   0808e78c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5fc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5fc
080e009f +0x08bb:  mov    (%eax),%eax
080e00a1 +0x08bd:  lea    -0x2c(%ebp),%edx
080e00a4 +0x08c0:  mov    %edx,0x8(%esp)
080e00a8 +0x08c4:  mov    %ebx,0x4(%esp)
080e00ac +0x08c8:  mov    %eax,(%esp)
080e00af +0x08cb:  call   080e05bd <+0xdd9>
080e00b4 +0x08d0:  jmp    080e03a4 <+0xbc0>
080e00b9 +0x08d5:  mov    0x8(%ebp),%eax
080e00bc +0x08d8:  mov    %eax,(%esp)
080e00bf +0x08db:  call   08083f0e <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x151>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x151
080e00c4 +0x08e0:  mov    -0x20(%ebp),%edx
080e00c7 +0x08e3:  mov    0x10(%ebp),%ecx
080e00ca +0x08e6:  sub    %edx,%ecx
080e00cc +0x08e8:  mov    0x8(%ebp),%edx
080e00cf +0x08eb:  mov    0x4(%edx),%edx
080e00d2 +0x08ee:  mov    %eax,0xc(%esp)
080e00d6 +0x08f2:  lea    -0x2c(%ebp),%eax
080e00d9 +0x08f5:  mov    %eax,0x8(%esp)
080e00dd +0x08f9:  mov    %ecx,0x4(%esp)
080e00e1 +0x08fd:  mov    %edx,(%esp)
080e00e4 +0x0900:  call   080e05f5 <+0xe11>
080e00e9 +0x0905:  mov    0x8(%ebp),%eax
080e00ec +0x0908:  mov    0x4(%eax),%eax
080e00ef +0x090b:  mov    -0x20(%ebp),%edx
080e00f2 +0x090e:  mov    0x10(%ebp),%ecx
080e00f5 +0x0911:  mov    %ecx,%ebx
080e00f7 +0x0913:  sub    %edx,%ebx
080e00f9 +0x0915:  mov    %ebx,%edx
080e00fb +0x0917:  shl    $0x2,%edx
080e00fe +0x091a:  lea    (%eax,%edx,1),%edx
080e0101 +0x091d:  mov    0x8(%ebp),%eax
080e0104 +0x0920:  mov    %edx,0x4(%eax)
080e0107 +0x0923:  mov    0x8(%ebp),%eax
080e010a +0x0926:  mov    %eax,(%esp)
080e010d +0x0929:  call   08083f0e <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x151>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x151
080e0112 +0x092e:  mov    %eax,%ebx
080e0114 +0x0930:  mov    0x8(%ebp),%eax
080e0117 +0x0933:  mov    0x4(%eax),%esi
080e011a +0x0936:  lea    0xc(%ebp),%eax
080e011d +0x0939:  mov    %eax,(%esp)
080e0120 +0x093c:  call   0808e78c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5fc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5fc
080e0125 +0x0941:  mov    (%eax),%eax
080e0127 +0x0943:  mov    %ebx,0xc(%esp)
080e012b +0x0947:  mov    %esi,0x8(%esp)
080e012f +0x094b:  mov    -0x1c(%ebp),%edx
080e0132 +0x094e:  mov    %edx,0x4(%esp)
080e0136 +0x0952:  mov    %eax,(%esp)
080e0139 +0x0955:  call   0808e8ad <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x71d>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x71d
080e013e +0x095a:  mov    0x8(%ebp),%eax
080e0141 +0x095d:  mov    0x4(%eax),%eax
080e0144 +0x0960:  mov    -0x20(%ebp),%edx
080e0147 +0x0963:  shl    $0x2,%edx
080e014a +0x0966:  lea    (%eax,%edx,1),%edx
080e014d +0x0969:  mov    0x8(%ebp),%eax
080e0150 +0x096c:  mov    %edx,0x4(%eax)
080e0153 +0x096f:  lea    0xc(%ebp),%eax
080e0156 +0x0972:  mov    %eax,(%esp)
080e0159 +0x0975:  call   0808e78c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5fc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5fc
080e015e +0x097a:  mov    (%eax),%eax
080e0160 +0x097c:  lea    -0x2c(%ebp),%edx
080e0163 +0x097f:  mov    %edx,0x8(%esp)
080e0167 +0x0983:  mov    -0x1c(%ebp),%edx
080e016a +0x0986:  mov    %edx,0x4(%esp)
080e016e +0x098a:  mov    %eax,(%esp)
080e0171 +0x098d:  call   080e05bd <+0xdd9>
080e0176 +0x0992:  jmp    080e03a4 <+0xbc0>
080e017b +0x0997:  movl   $"vector::_M_fill_insert",0x8(%esp)
080e0183 +0x099f:  mov    0x10(%ebp),%eax
080e0186 +0x09a2:  mov    %eax,0x4(%esp)
080e018a +0x09a6:  mov    0x8(%ebp),%eax
080e018d +0x09a9:  mov    %eax,(%esp)
080e0190 +0x09ac:  call   0808e7d6 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x646>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x646
080e0195 +0x09b1:  mov    %eax,-0x18(%ebp)
080e0198 +0x09b4:  lea    -0x24(%ebp),%eax
080e019b +0x09b7:  mov    0x8(%ebp),%edx
080e019e +0x09ba:  mov    %edx,0x4(%esp)
080e01a2 +0x09be:  mov    %eax,(%esp)
080e01a5 +0x09c1:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
080e01aa +0x09c6:  sub    $0x4,%esp
080e01ad +0x09c9:  lea    -0x24(%ebp),%eax
080e01b0 +0x09cc:  mov    %eax,0x4(%esp)
080e01b4 +0x09d0:  lea    0xc(%ebp),%eax
080e01b7 +0x09d3:  mov    %eax,(%esp)
080e01ba +0x09d6:  call   0808e87b <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x6eb>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x6eb
080e01bf +0x09db:  mov    %eax,-0x14(%ebp)
080e01c2 +0x09de:  mov    0x8(%ebp),%eax
080e01c5 +0x09e1:  mov    -0x18(%ebp),%edx
080e01c8 +0x09e4:  mov    %edx,0x4(%esp)
080e01cc +0x09e8:  mov    %eax,(%esp)
080e01cf +0x09eb:  call   0808e396 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x206>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x206
080e01d4 +0x09f0:  mov    %eax,-0x10(%ebp)
080e01d7 +0x09f3:  mov    -0x10(%ebp),%eax
080e01da +0x09f6:  mov    %eax,-0xc(%ebp)
080e01dd +0x09f9:  mov    0x8(%ebp),%eax
080e01e0 +0x09fc:  mov    %eax,(%esp)
080e01e3 +0x09ff:  call   08083f0e <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x151>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x151
080e01e8 +0x0a04:  mov    -0x14(%ebp),%edx
080e01eb +0x0a07:  shl    $0x2,%edx
080e01ee +0x0a0a:  add    -0x10(%ebp),%edx
080e01f1 +0x0a0d:  mov    %eax,0xc(%esp)
080e01f5 +0x0a11:  mov    0x14(%ebp),%eax
080e01f8 +0x0a14:  mov    %eax,0x8(%esp)
080e01fc +0x0a18:  mov    0x10(%ebp),%eax
080e01ff +0x0a1b:  mov    %eax,0x4(%esp)
080e0203 +0x0a1f:  mov    %edx,(%esp)
080e0206 +0x0a22:  call   080e05f5 <+0xe11>
080e020b +0x0a27:  movl   $0x0,-0xc(%ebp)
080e0212 +0x0a2e:  mov    0x8(%ebp),%eax
080e0215 +0x0a31:  mov    %eax,(%esp)
080e0218 +0x0a34:  call   08083f0e <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x151>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x151
080e021d +0x0a39:  mov    %eax,%ebx
080e021f +0x0a3b:  lea    0xc(%ebp),%eax
080e0222 +0x0a3e:  mov    %eax,(%esp)
080e0225 +0x0a41:  call   0808e78c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5fc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5fc
080e022a +0x0a46:  mov    (%eax),%edx
080e022c +0x0a48:  mov    0x8(%ebp),%eax
080e022f +0x0a4b:  mov    (%eax),%eax
080e0231 +0x0a4d:  mov    %ebx,0xc(%esp)
080e0235 +0x0a51:  mov    -0x10(%ebp),%ecx
080e0238 +0x0a54:  mov    %ecx,0x8(%esp)
080e023c +0x0a58:  mov    %edx,0x4(%esp)
080e0240 +0x0a5c:  mov    %eax,(%esp)
080e0243 +0x0a5f:  call   0808e8ad <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x71d>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x71d
080e0248 +0x0a64:  mov    %eax,-0xc(%ebp)
080e024b +0x0a67:  mov    0x10(%ebp),%eax
080e024e +0x0a6a:  shl    $0x2,%eax
080e0251 +0x0a6d:  add    %eax,-0xc(%ebp)
080e0254 +0x0a70:  mov    0x8(%ebp),%eax
080e0257 +0x0a73:  mov    %eax,(%esp)
080e025a +0x0a76:  call   08083f0e <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x151>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x151
080e025f +0x0a7b:  mov    %eax,%ebx
080e0261 +0x0a7d:  mov    0x8(%ebp),%eax
080e0264 +0x0a80:  mov    0x4(%eax),%esi
080e0267 +0x0a83:  lea    0xc(%ebp),%eax
080e026a +0x0a86:  mov    %eax,(%esp)
080e026d +0x0a89:  call   0808e78c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5fc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5fc
080e0272 +0x0a8e:  mov    (%eax),%eax
080e0274 +0x0a90:  mov    %ebx,0xc(%esp)
080e0278 +0x0a94:  mov    -0xc(%ebp),%edx
080e027b +0x0a97:  mov    %edx,0x8(%esp)
080e027f +0x0a9b:  mov    %esi,0x4(%esp)
080e0283 +0x0a9f:  mov    %eax,(%esp)
080e0286 +0x0aa2:  call   0808e8ad <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x71d>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x71d
080e028b +0x0aa7:  mov    %eax,-0xc(%ebp)
080e028e +0x0aaa:  mov    0x8(%ebp),%eax
080e0291 +0x0aad:  mov    %eax,(%esp)
080e0294 +0x0ab0:  call   08083f0e <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x151>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x151
080e0299 +0x0ab5:  mov    0x8(%ebp),%edx
080e029c +0x0ab8:  mov    0x4(%edx),%ecx
080e029f +0x0abb:  mov    0x8(%ebp),%edx
080e02a2 +0x0abe:  mov    (%edx),%edx
080e02a4 +0x0ac0:  mov    %eax,0x8(%esp)
080e02a8 +0x0ac4:  mov    %ecx,0x4(%esp)
080e02ac +0x0ac8:  mov    %edx,(%esp)
080e02af +0x0acb:  call   08083f16 <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x159>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x159
080e02b4 +0x0ad0:  mov    0x8(%ebp),%eax
080e02b7 +0x0ad3:  mov    0x8(%eax),%eax
080e02ba +0x0ad6:  mov    %eax,%edx
080e02bc +0x0ad8:  mov    0x8(%ebp),%eax
080e02bf +0x0adb:  mov    (%eax),%eax
080e02c1 +0x0add:  mov    %edx,%ecx
080e02c3 +0x0adf:  sub    %eax,%ecx
080e02c5 +0x0ae1:  mov    %ecx,%eax
080e02c7 +0x0ae3:  sar    $0x2,%eax
080e02ca +0x0ae6:  mov    %eax,%ecx
080e02cc +0x0ae8:  mov    0x8(%ebp),%eax
080e02cf +0x0aeb:  mov    (%eax),%edx
080e02d1 +0x0aed:  mov    0x8(%ebp),%eax
080e02d4 +0x0af0:  mov    %ecx,0x8(%esp)
080e02d8 +0x0af4:  mov    %edx,0x4(%esp)
080e02dc +0x0af8:  mov    %eax,(%esp)
080e02df +0x0afb:  call   08083f30 <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x173>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x173
080e02e4 +0x0b00:  mov    0x8(%ebp),%eax
080e02e7 +0x0b03:  mov    -0x10(%ebp),%edx
080e02ea +0x0b06:  mov    %edx,(%eax)
080e02ec +0x0b08:  mov    0x8(%ebp),%eax
080e02ef +0x0b0b:  mov    -0xc(%ebp),%edx
080e02f2 +0x0b0e:  mov    %edx,0x4(%eax)
080e02f5 +0x0b11:  mov    -0x18(%ebp),%eax
080e02f8 +0x0b14:  shl    $0x2,%eax
080e02fb +0x0b17:  mov    %eax,%edx
080e02fd +0x0b19:  add    -0x10(%ebp),%edx
080e0300 +0x0b1c:  mov    0x8(%ebp),%eax
080e0303 +0x0b1f:  mov    %edx,0x8(%eax)
080e0306 +0x0b22:  jmp    080e03a4 <+0xbc0>
080e030b +0x0b27:  mov    %eax,(%esp)
080e030e +0x0b2a:  call   08725ce0 <__cxa_begin_catch>
080e0313 +0x0b2f:  cmpl   $0x0,-0xc(%ebp)
080e0317 +0x0b33:  jne    080e0350 <+0xb6c>
080e0319 +0x0b35:  mov    0x8(%ebp),%eax
080e031c +0x0b38:  mov    %eax,(%esp)
080e031f +0x0b3b:  call   08083f0e <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x151>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x151
080e0324 +0x0b40:  mov    0x10(%ebp),%edx
080e0327 +0x0b43:  mov    -0x14(%ebp),%ecx
080e032a +0x0b46:  lea    (%ecx,%edx,1),%edx
080e032d +0x0b49:  shl    $0x2,%edx
080e0330 +0x0b4c:  mov    %edx,%ecx
080e0332 +0x0b4e:  add    -0x10(%ebp),%ecx
080e0335 +0x0b51:  mov    -0x14(%ebp),%edx
080e0338 +0x0b54:  shl    $0x2,%edx
080e033b +0x0b57:  add    -0x10(%ebp),%edx
080e033e +0x0b5a:  mov    %eax,0x8(%esp)
080e0342 +0x0b5e:  mov    %ecx,0x4(%esp)
080e0346 +0x0b62:  mov    %edx,(%esp)
080e0349 +0x0b65:  call   08083f16 <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x159>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x159
080e034e +0x0b6a:  jmp    080e0371 <+0xb8d>
080e0350 +0x0b6c:  mov    0x8(%ebp),%eax
080e0353 +0x0b6f:  mov    %eax,(%esp)
080e0356 +0x0b72:  call   08083f0e <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x151>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x151
080e035b +0x0b77:  mov    %eax,0x8(%esp)
080e035f +0x0b7b:  mov    -0xc(%ebp),%eax
080e0362 +0x0b7e:  mov    %eax,0x4(%esp)
080e0366 +0x0b82:  mov    -0x10(%ebp),%eax
080e0369 +0x0b85:  mov    %eax,(%esp)
080e036c +0x0b88:  call   08083f16 <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x159>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x159
080e0371 +0x0b8d:  mov    0x8(%ebp),%eax
080e0374 +0x0b90:  mov    -0x18(%ebp),%edx
080e0377 +0x0b93:  mov    %edx,0x8(%esp)
080e037b +0x0b97:  mov    -0x10(%ebp),%edx
080e037e +0x0b9a:  mov    %edx,0x4(%esp)
080e0382 +0x0b9e:  mov    %eax,(%esp)
080e0385 +0x0ba1:  call   08083f30 <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x173>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x173
080e038a +0x0ba6:  call   08724be0 <__cxa_rethrow>
080e038f +0x0bab:  mov    %edx,%ebx
080e0391 +0x0bad:  mov    %eax,%esi
080e0393 +0x0baf:  call   08725c30 <__cxa_end_catch>
080e0398 +0x0bb4:  mov    %esi,%eax
080e039a +0x0bb6:  mov    %ebx,%edx
080e039c +0x0bb8:  mov    %eax,(%esp)
080e039f +0x0bbb:  call   08ae3750 <_Unwind_Resume>
080e03a4 +0x0bc0:  lea    -0x8(%ebp),%esp
080e03a7 +0x0bc3:  add    $0x0,%esp
080e03aa +0x0bc6:  pop    %ebx
080e03ab +0x0bc7:  pop    %esi
080e03ac +0x0bc8:  pop    %ebp
080e03ad +0x0bc9:  ret
080e03ae +0x0bca:  push   %ebp
080e03af +0x0bcb:  mov    %esp,%ebp
080e03b1 +0x0bcd:  sub    $0x18,%esp
080e03b4 +0x0bd0:  mov    0x8(%ebp),%eax
080e03b7 +0x0bd3:  mov    %eax,(%esp)
080e03ba +0x0bd6:  call   080e0616 <+0xe32>
080e03bf +0x0bdb:  leave
080e03c0 +0x0bdc:  ret
080e03c1 +0x0bdd:  nop
080e03c2 +0x0bde:  push   %ebp
080e03c3 +0x0bdf:  mov    %esp,%ebp
080e03c5 +0x0be1:  pop    %ebp
080e03c6 +0x0be2:  ret
080e03c7 +0x0be3:  nop
080e03c8 +0x0be4:  push   %ebp
080e03c9 +0x0be5:  mov    %esp,%ebp
080e03cb +0x0be7:  sub    $0x18,%esp
080e03ce +0x0bea:  mov    0xc(%ebp),%eax
080e03d1 +0x0bed:  mov    %eax,(%esp)
080e03d4 +0x0bf0:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
080e03d9 +0x0bf5:  leave
080e03da +0x0bf6:  ret
080e03db +0x0bf7:  push   %ebp
080e03dc +0x0bf8:  mov    %esp,%ebp
080e03de +0x0bfa:  pop    %ebp
080e03df +0x0bfb:  ret
080e03e0 +0x0bfc:  push   %ebp
080e03e1 +0x0bfd:  mov    %esp,%ebp
080e03e3 +0x0bff:  mov    0xc(%ebp),%eax
080e03e6 +0x0c02:  mov    (%eax),%edx
080e03e8 +0x0c04:  mov    0x8(%ebp),%eax
080e03eb +0x0c07:  mov    %edx,(%eax)
080e03ed +0x0c09:  pop    %ebp
080e03ee +0x0c0a:  ret
080e03ef +0x0c0b:  nop
080e03f0 +0x0c0c:  push   %ebp
080e03f1 +0x0c0d:  mov    %esp,%ebp
080e03f3 +0x0c0f:  mov    0x8(%ebp),%eax
080e03f6 +0x0c12:  pop    %ebp
080e03f7 +0x0c13:  ret
080e03f8 +0x0c14:  push   %ebp
080e03f9 +0x0c15:  mov    %esp,%ebp
080e03fb +0x0c17:  push   %ebx
080e03fc +0x0c18:  sub    $0x14,%esp
080e03ff +0x0c1b:  mov    0xc(%ebp),%eax
080e0402 +0x0c1e:  mov    %eax,(%esp)
080e0405 +0x0c21:  call   080e061b <+0xe37>
080e040a +0x0c26:  mov    %eax,%ebx
080e040c +0x0c28:  mov    0x8(%ebp),%eax
080e040f +0x0c2b:  mov    %eax,(%esp)
080e0412 +0x0c2e:  call   080e061b <+0xe37>
080e0417 +0x0c33:  mov    0x10(%ebp),%edx
080e041a +0x0c36:  mov    %edx,0x8(%esp)
080e041e +0x0c3a:  mov    %ebx,0x4(%esp)
080e0422 +0x0c3e:  mov    %eax,(%esp)
080e0425 +0x0c41:  call   080e0623 <+0xe3f>
080e042a +0x0c46:  add    $0x14,%esp
080e042d +0x0c49:  pop    %ebx
080e042e +0x0c4a:  pop    %ebp
080e042f +0x0c4b:  ret
080e0430 +0x0c4c:  push   %ebp
080e0431 +0x0c4d:  mov    %esp,%ebp
080e0433 +0x0c4f:  mov    0x8(%ebp),%eax
080e0436 +0x0c52:  mov    (%eax),%eax
080e0438 +0x0c54:  pop    %ebp
080e0439 +0x0c55:  ret
080e043a +0x0c56:  push   %ebp
080e043b +0x0c57:  mov    %esp,%ebp
080e043d +0x0c59:  push   %ebx
080e043e +0x0c5a:  sub    $0x24,%esp
080e0441 +0x0c5d:  mov    0x8(%ebp),%eax
080e0444 +0x0c60:  mov    %eax,(%esp)
080e0447 +0x0c63:  call   080e0668 <+0xe84>
080e044c +0x0c68:  mov    %eax,%ebx
080e044e +0x0c6a:  mov    0x8(%ebp),%eax
080e0451 +0x0c6d:  mov    %eax,(%esp)
080e0454 +0x0c70:  call   080df872 <+0x8e>
080e0459 +0x0c75:  mov    %ebx,%edx
080e045b +0x0c77:  sub    %eax,%edx
080e045d +0x0c79:  mov    0xc(%ebp),%eax
080e0460 +0x0c7c:  cmp    %eax,%edx
080e0462 +0x0c7e:  setb   %al
080e0465 +0x0c81:  test   %al,%al
080e0467 +0x0c83:  je     080e0474 <+0xc90>
080e0469 +0x0c85:  mov    0x10(%ebp),%eax
080e046c +0x0c88:  mov    %eax,(%esp)
080e046f +0x0c8b:  call   086d9c40 <_ZSt20__throw_length_errorPKc>  ; std::__throw_length_error(char const*)
080e0474 +0x0c90:  mov    0x8(%ebp),%eax
080e0477 +0x0c93:  mov    %eax,(%esp)
080e047a +0x0c96:  call   080df872 <+0x8e>
080e047f +0x0c9b:  mov    %eax,%ebx
080e0481 +0x0c9d:  mov    0x8(%ebp),%eax
080e0484 +0x0ca0:  mov    %eax,(%esp)
080e0487 +0x0ca3:  call   080df872 <+0x8e>
080e048c +0x0ca8:  mov    %eax,-0x10(%ebp)
080e048f +0x0cab:  lea    0xc(%ebp),%eax
080e0492 +0x0cae:  mov    %eax,0x4(%esp)
080e0496 +0x0cb2:  lea    -0x10(%ebp),%eax
080e0499 +0x0cb5:  mov    %eax,(%esp)
080e049c +0x0cb8:  call   0807f531 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x601>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x601
080e04a1 +0x0cbd:  mov    (%eax),%eax
080e04a3 +0x0cbf:  lea    (%ebx,%eax,1),%eax
080e04a6 +0x0cc2:  mov    %eax,-0xc(%ebp)
080e04a9 +0x0cc5:  mov    0x8(%ebp),%eax
080e04ac +0x0cc8:  mov    %eax,(%esp)
080e04af +0x0ccb:  call   080df872 <+0x8e>
080e04b4 +0x0cd0:  cmp    -0xc(%ebp),%eax
080e04b7 +0x0cd3:  ja     080e04c9 <+0xce5>
080e04b9 +0x0cd5:  mov    0x8(%ebp),%eax
080e04bc +0x0cd8:  mov    %eax,(%esp)
080e04bf +0x0cdb:  call   080e0668 <+0xe84>
080e04c4 +0x0ce0:  cmp    -0xc(%ebp),%eax
080e04c7 +0x0ce3:  jae    080e04d6 <+0xcf2>
080e04c9 +0x0ce5:  mov    0x8(%ebp),%eax
080e04cc +0x0ce8:  mov    %eax,(%esp)
080e04cf +0x0ceb:  call   080e0668 <+0xe84>
080e04d4 +0x0cf0:  jmp    080e04d9 <+0xcf5>
080e04d6 +0x0cf2:  mov    -0xc(%ebp),%eax
080e04d9 +0x0cf5:  add    $0x24,%esp
080e04dc +0x0cf8:  pop    %ebx
080e04dd +0x0cf9:  pop    %ebp
080e04de +0x0cfa:  ret
080e04df +0x0cfb:  nop
080e04e0 +0x0cfc:  push   %ebp
080e04e1 +0x0cfd:  mov    %esp,%ebp
080e04e3 +0x0cff:  push   %ebx
080e04e4 +0x0d00:  sub    $0x14,%esp
080e04e7 +0x0d03:  mov    0x8(%ebp),%ebx
080e04ea +0x0d06:  mov    0xc(%ebp),%eax
080e04ed +0x0d09:  mov    %eax,0x4(%esp)
080e04f1 +0x0d0d:  mov    %ebx,(%esp)
080e04f4 +0x0d10:  call   080e03e0 <+0xbfc>
080e04f9 +0x0d15:  mov    %ebx,%eax
080e04fb +0x0d17:  add    $0x14,%esp
080e04fe +0x0d1a:  pop    %ebx
080e04ff +0x0d1b:  pop    %ebp
080e0500 +0x0d1c:  ret    $0x4
080e0503 +0x0d1f:  push   %ebp
080e0504 +0x0d20:  mov    %esp,%ebp
080e0506 +0x0d22:  push   %ebx
080e0507 +0x0d23:  sub    $0x14,%esp
080e050a +0x0d26:  mov    0x8(%ebp),%eax
080e050d +0x0d29:  mov    %eax,(%esp)
080e0510 +0x0d2c:  call   080e03f0 <+0xc0c>
080e0515 +0x0d31:  mov    (%eax),%eax
080e0517 +0x0d33:  mov    %eax,%ebx
080e0519 +0x0d35:  mov    0xc(%ebp),%eax
080e051c +0x0d38:  mov    %eax,(%esp)
080e051f +0x0d3b:  call   080e03f0 <+0xc0c>
080e0524 +0x0d40:  mov    (%eax),%eax
080e0526 +0x0d42:  mov    %ebx,%edx
080e0528 +0x0d44:  sub    %eax,%edx
080e052a +0x0d46:  mov    %edx,%eax
080e052c +0x0d48:  sar    $0x2,%eax
080e052f +0x0d4b:  add    $0x14,%esp
080e0532 +0x0d4e:  pop    %ebx
080e0533 +0x0d4f:  pop    %ebp
080e0534 +0x0d50:  ret
080e0535 +0x0d51:  nop
080e0536 +0x0d52:  push   %ebp
080e0537 +0x0d53:  mov    %esp,%ebp
080e0539 +0x0d55:  sub    $0x18,%esp
080e053c +0x0d58:  cmpl   $0x0,0xc(%ebp)
080e0540 +0x0d5c:  je     080e055e <+0xd7a>
080e0542 +0x0d5e:  mov    0x8(%ebp),%eax
080e0545 +0x0d61:  movl   $0x0,0x8(%esp)
080e054d +0x0d69:  mov    0xc(%ebp),%edx
080e0550 +0x0d6c:  mov    %edx,0x4(%esp)
080e0554 +0x0d70:  mov    %eax,(%esp)
080e0557 +0x0d73:  call   080e0684 <+0xea0>
080e055c +0x0d78:  jmp    080e0563 <+0xd7f>
080e055e +0x0d7a:  mov    $0x0,%eax
080e0563 +0x0d7f:  leave
080e0564 +0x0d80:  ret
080e0565 +0x0d81:  push   %ebp
080e0566 +0x0d82:  mov    %esp,%ebp
080e0568 +0x0d84:  sub    $0x28,%esp
080e056b +0x0d87:  lea    -0x10(%ebp),%eax
080e056e +0x0d8a:  lea    0xc(%ebp),%edx
080e0571 +0x0d8d:  mov    %edx,0x4(%esp)
080e0575 +0x0d91:  mov    %eax,(%esp)
080e0578 +0x0d94:  call   080e06bc <+0xed8>
080e057d +0x0d99:  sub    $0x4,%esp
080e0580 +0x0d9c:  lea    -0xc(%ebp),%eax
080e0583 +0x0d9f:  lea    0x8(%ebp),%edx
080e0586 +0x0da2:  mov    %edx,0x4(%esp)
080e058a +0x0da6:  mov    %eax,(%esp)
080e058d +0x0da9:  call   080e06bc <+0xed8>
080e0592 +0x0dae:  sub    $0x4,%esp
080e0595 +0x0db1:  mov    0x14(%ebp),%eax
080e0598 +0x0db4:  mov    %eax,0xc(%esp)
080e059c +0x0db8:  mov    0x10(%ebp),%eax
080e059f +0x0dbb:  mov    %eax,0x8(%esp)
080e05a3 +0x0dbf:  mov    -0x10(%ebp),%eax
080e05a6 +0x0dc2:  mov    %eax,0x4(%esp)
080e05aa +0x0dc6:  mov    -0xc(%ebp),%eax
080e05ad +0x0dc9:  mov    %eax,(%esp)
080e05b0 +0x0dcc:  call   080e06e1 <+0xefd>
080e05b5 +0x0dd1:  leave
080e05b6 +0x0dd2:  ret
080e05b7 +0x0dd3:  nop
080e05b8 +0x0dd4:  push   %ebp
080e05b9 +0x0dd5:  mov    %esp,%ebp
080e05bb +0x0dd7:  pop    %ebp
080e05bc +0x0dd8:  ret
080e05bd +0x0dd9:  push   %ebp
080e05be +0x0dda:  mov    %esp,%ebp
080e05c0 +0x0ddc:  push   %ebx
080e05c1 +0x0ddd:  sub    $0x14,%esp
080e05c4 +0x0de0:  mov    0xc(%ebp),%eax
080e05c7 +0x0de3:  mov    %eax,(%esp)
080e05ca +0x0de6:  call   0808e762 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5d2>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5d2
080e05cf +0x0deb:  mov    %eax,%ebx
080e05d1 +0x0ded:  mov    0x8(%ebp),%eax
080e05d4 +0x0df0:  mov    %eax,(%esp)
080e05d7 +0x0df3:  call   0808e762 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5d2>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5d2
080e05dc +0x0df8:  mov    0x10(%ebp),%edx
080e05df +0x0dfb:  mov    %edx,0x8(%esp)
080e05e3 +0x0dff:  mov    %ebx,0x4(%esp)
080e05e7 +0x0e03:  mov    %eax,(%esp)
080e05ea +0x0e06:  call   080e0702 <+0xf1e>
080e05ef +0x0e0b:  add    $0x14,%esp
080e05f2 +0x0e0e:  pop    %ebx
080e05f3 +0x0e0f:  pop    %ebp
080e05f4 +0x0e10:  ret
080e05f5 +0x0e11:  push   %ebp
080e05f6 +0x0e12:  mov    %esp,%ebp
080e05f8 +0x0e14:  sub    $0x18,%esp
080e05fb +0x0e17:  mov    0x10(%ebp),%eax
080e05fe +0x0e1a:  mov    %eax,0x8(%esp)
080e0602 +0x0e1e:  mov    0xc(%ebp),%eax
080e0605 +0x0e21:  mov    %eax,0x4(%esp)
080e0609 +0x0e25:  mov    0x8(%ebp),%eax
080e060c +0x0e28:  mov    %eax,(%esp)
080e060f +0x0e2b:  call   080e072d <+0xf49>
080e0614 +0x0e30:  leave
080e0615 +0x0e31:  ret
080e0616 +0x0e32:  push   %ebp
080e0617 +0x0e33:  mov    %esp,%ebp
080e0619 +0x0e35:  pop    %ebp
080e061a +0x0e36:  ret
080e061b +0x0e37:  push   %ebp
080e061c +0x0e38:  mov    %esp,%ebp
080e061e +0x0e3a:  mov    0x8(%ebp),%eax
080e0621 +0x0e3d:  pop    %ebp
080e0622 +0x0e3e:  ret
080e0623 +0x0e3f:  push   %ebp
080e0624 +0x0e40:  mov    %esp,%ebp
080e0626 +0x0e42:  push   %esi
080e0627 +0x0e43:  push   %ebx
080e0628 +0x0e44:  sub    $0x10,%esp
080e062b +0x0e47:  mov    0x10(%ebp),%eax
080e062e +0x0e4a:  mov    %eax,(%esp)
080e0631 +0x0e4d:  call   080e074e <+0xf6a>
080e0636 +0x0e52:  mov    %eax,%esi
080e0638 +0x0e54:  mov    0xc(%ebp),%eax
080e063b +0x0e57:  mov    %eax,(%esp)
080e063e +0x0e5a:  call   080e074e <+0xf6a>
080e0643 +0x0e5f:  mov    %eax,%ebx
080e0645 +0x0e61:  mov    0x8(%ebp),%eax
080e0648 +0x0e64:  mov    %eax,(%esp)
080e064b +0x0e67:  call   080e074e <+0xf6a>
080e0650 +0x0e6c:  mov    %esi,0x8(%esp)
080e0654 +0x0e70:  mov    %ebx,0x4(%esp)
080e0658 +0x0e74:  mov    %eax,(%esp)
080e065b +0x0e77:  call   080e0756 <+0xf72>
080e0660 +0x0e7c:  add    $0x10,%esp
080e0663 +0x0e7f:  pop    %ebx
080e0664 +0x0e80:  pop    %esi
080e0665 +0x0e81:  pop    %ebp
080e0666 +0x0e82:  ret
080e0667 +0x0e83:  nop
080e0668 +0x0e84:  push   %ebp
080e0669 +0x0e85:  mov    %esp,%ebp
080e066b +0x0e87:  sub    $0x18,%esp
080e066e +0x0e8a:  mov    0x8(%ebp),%eax
080e0671 +0x0e8d:  mov    %eax,(%esp)
080e0674 +0x0e90:  call   080e077c <+0xf98>
080e0679 +0x0e95:  mov    %eax,(%esp)
080e067c +0x0e98:  call   080e0784 <+0xfa0>
080e0681 +0x0e9d:  leave
080e0682 +0x0e9e:  ret
080e0683 +0x0e9f:  nop
080e0684 +0x0ea0:  push   %ebp
080e0685 +0x0ea1:  mov    %esp,%ebp
080e0687 +0x0ea3:  sub    $0x18,%esp
080e068a +0x0ea6:  mov    0x8(%ebp),%eax
080e068d +0x0ea9:  mov    %eax,(%esp)
080e0690 +0x0eac:  call   080e0784 <+0xfa0>
080e0695 +0x0eb1:  cmp    0xc(%ebp),%eax
080e0698 +0x0eb4:  setb   %al
080e069b +0x0eb7:  movzbl %al,%eax
080e069e +0x0eba:  test   %eax,%eax
080e06a0 +0x0ebc:  setne  %al
080e06a3 +0x0ebf:  test   %al,%al
080e06a5 +0x0ec1:  je     080e06ac <+0xec8>
080e06a7 +0x0ec3:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
080e06ac +0x0ec8:  mov    0xc(%ebp),%eax
080e06af +0x0ecb:  shl    $0x2,%eax
080e06b2 +0x0ece:  mov    %eax,(%esp)
080e06b5 +0x0ed1:  call   08724450 <_Znwj>  ; operator new(unsigned int)
080e06ba +0x0ed6:  leave
080e06bb +0x0ed7:  ret
080e06bc +0x0ed8:  push   %ebp
080e06bd +0x0ed9:  mov    %esp,%ebp
080e06bf +0x0edb:  push   %ebx
080e06c0 +0x0edc:  sub    $0x14,%esp
080e06c3 +0x0edf:  mov    0x8(%ebp),%ebx
080e06c6 +0x0ee2:  mov    0xc(%ebp),%eax
080e06c9 +0x0ee5:  mov    (%eax),%eax
080e06cb +0x0ee7:  mov    %eax,0x4(%esp)
080e06cf +0x0eeb:  mov    %ebx,(%esp)
080e06d2 +0x0eee:  call   080e078e <+0xfaa>
080e06d7 +0x0ef3:  mov    %ebx,%eax
080e06d9 +0x0ef5:  add    $0x14,%esp
080e06dc +0x0ef8:  pop    %ebx
080e06dd +0x0ef9:  pop    %ebp
080e06de +0x0efa:  ret    $0x4
080e06e1 +0x0efd:  push   %ebp
080e06e2 +0x0efe:  mov    %esp,%ebp
080e06e4 +0x0f00:  sub    $0x18,%esp
080e06e7 +0x0f03:  mov    0x10(%ebp),%eax
080e06ea +0x0f06:  mov    %eax,0x8(%esp)
080e06ee +0x0f0a:  mov    0xc(%ebp),%eax
080e06f1 +0x0f0d:  mov    %eax,0x4(%esp)
080e06f5 +0x0f11:  mov    0x8(%ebp),%eax
080e06f8 +0x0f14:  mov    %eax,(%esp)
080e06fb +0x0f17:  call   080e079b <+0xfb7>
080e0700 +0x0f1c:  leave
080e0701 +0x0f1d:  ret
080e0702 +0x0f1e:  push   %ebp
080e0703 +0x0f1f:  mov    %esp,%ebp
080e0705 +0x0f21:  sub    $0x10,%esp
080e0708 +0x0f24:  mov    0x10(%ebp),%eax
080e070b +0x0f27:  mov    (%eax),%eax
080e070d +0x0f29:  mov    %eax,-0x4(%ebp)
080e0710 +0x0f2c:  jmp    080e071e <+0xf3a>
080e0712 +0x0f2e:  mov    0x8(%ebp),%eax
080e0715 +0x0f31:  mov    -0x4(%ebp),%edx
080e0718 +0x0f34:  mov    %edx,(%eax)
080e071a +0x0f36:  addl   $0x4,0x8(%ebp)
080e071e +0x0f3a:  mov    0x8(%ebp),%eax
080e0721 +0x0f3d:  cmp    0xc(%ebp),%eax
080e0724 +0x0f40:  setne  %al
080e0727 +0x0f43:  test   %al,%al
080e0729 +0x0f45:  jne    080e0712 <+0xf2e>
080e072b +0x0f47:  leave
080e072c +0x0f48:  ret
080e072d +0x0f49:  push   %ebp
080e072e +0x0f4a:  mov    %esp,%ebp
080e0730 +0x0f4c:  sub    $0x18,%esp
080e0733 +0x0f4f:  mov    0x10(%ebp),%eax
080e0736 +0x0f52:  mov    %eax,0x8(%esp)
080e073a +0x0f56:  mov    0xc(%ebp),%eax
080e073d +0x0f59:  mov    %eax,0x4(%esp)
080e0741 +0x0f5d:  mov    0x8(%ebp),%eax
080e0744 +0x0f60:  mov    %eax,(%esp)
080e0747 +0x0f63:  call   080e07bc <+0xfd8>
080e074c +0x0f68:  leave
080e074d +0x0f69:  ret
080e074e +0x0f6a:  push   %ebp
080e074f +0x0f6b:  mov    %esp,%ebp
080e0751 +0x0f6d:  mov    0x8(%ebp),%eax
080e0754 +0x0f70:  pop    %ebp
080e0755 +0x0f71:  ret
080e0756 +0x0f72:  push   %ebp
080e0757 +0x0f73:  mov    %esp,%ebp
080e0759 +0x0f75:  sub    $0x28,%esp
080e075c +0x0f78:  movb   $0x1,-0x9(%ebp)
080e0760 +0x0f7c:  mov    0x10(%ebp),%eax
080e0763 +0x0f7f:  mov    %eax,0x8(%esp)
080e0767 +0x0f83:  mov    0xc(%ebp),%eax
080e076a +0x0f86:  mov    %eax,0x4(%esp)
080e076e +0x0f8a:  mov    0x8(%ebp),%eax
080e0771 +0x0f8d:  mov    %eax,(%esp)
080e0774 +0x0f90:  call   080e07dd <+0xff9>
080e0779 +0x0f95:  leave
080e077a +0x0f96:  ret
080e077b +0x0f97:  nop
080e077c +0x0f98:  push   %ebp
080e077d +0x0f99:  mov    %esp,%ebp
080e077f +0x0f9b:  mov    0x8(%ebp),%eax
080e0782 +0x0f9e:  pop    %ebp
080e0783 +0x0f9f:  ret
080e0784 +0x0fa0:  push   %ebp
080e0785 +0x0fa1:  mov    %esp,%ebp
080e0787 +0x0fa3:  mov    $0x3fffffff,%eax
080e078c +0x0fa8:  pop    %ebp
080e078d +0x0fa9:  ret
080e078e +0x0faa:  push   %ebp
080e078f +0x0fab:  mov    %esp,%ebp
080e0791 +0x0fad:  mov    0x8(%ebp),%eax
080e0794 +0x0fb0:  mov    0xc(%ebp),%edx
080e0797 +0x0fb3:  mov    %edx,(%eax)
080e0799 +0x0fb5:  pop    %ebp
080e079a +0x0fb6:  ret
080e079b +0x0fb7:  push   %ebp
080e079c +0x0fb8:  mov    %esp,%ebp
080e079e +0x0fba:  sub    $0x18,%esp
080e07a1 +0x0fbd:  mov    0x10(%ebp),%eax
080e07a4 +0x0fc0:  mov    %eax,0x8(%esp)
080e07a8 +0x0fc4:  mov    0xc(%ebp),%eax
080e07ab +0x0fc7:  mov    %eax,0x4(%esp)
080e07af +0x0fcb:  mov    0x8(%ebp),%eax
080e07b2 +0x0fce:  mov    %eax,(%esp)
080e07b5 +0x0fd1:  call   080e082a <+0x1046>
080e07ba +0x0fd6:  leave
080e07bb +0x0fd7:  ret
080e07bc +0x0fd8:  push   %ebp
080e07bd +0x0fd9:  mov    %esp,%ebp
080e07bf +0x0fdb:  sub    $0x18,%esp
080e07c2 +0x0fde:  mov    0x10(%ebp),%eax
080e07c5 +0x0fe1:  mov    %eax,0x8(%esp)
080e07c9 +0x0fe5:  mov    0xc(%ebp),%eax
080e07cc +0x0fe8:  mov    %eax,0x4(%esp)
080e07d0 +0x0fec:  mov    0x8(%ebp),%eax
080e07d3 +0x0fef:  mov    %eax,(%esp)
080e07d6 +0x0ff2:  call   080e084b <+0x1067>
080e07db +0x0ff7:  leave
080e07dc +0x0ff8:  ret
080e07dd +0x0ff9:  push   %ebp
080e07de +0x0ffa:  mov    %esp,%ebp
080e07e0 +0x0ffc:  sub    $0x28,%esp
080e07e3 +0x0fff:  mov    0xc(%ebp),%edx
080e07e6 +0x1002:  mov    0x8(%ebp),%eax
080e07e9 +0x1005:  mov    %edx,%ecx
080e07eb +0x1007:  sub    %eax,%ecx
080e07ed +0x1009:  mov    %ecx,%eax
080e07ef +0x100b:  sar    $0x2,%eax
080e07f2 +0x100e:  mov    %eax,-0xc(%ebp)
080e07f5 +0x1011:  mov    -0xc(%ebp),%eax
080e07f8 +0x1014:  lea    0x0(,%eax,4),%edx
080e07ff +0x101b:  mov    -0xc(%ebp),%eax
080e0802 +0x101e:  shl    $0x2,%eax
080e0805 +0x1021:  neg    %eax
080e0807 +0x1023:  add    0x10(%ebp),%eax
080e080a +0x1026:  mov    %edx,0x8(%esp)
080e080e +0x102a:  mov    0x8(%ebp),%edx
080e0811 +0x102d:  mov    %edx,0x4(%esp)
080e0815 +0x1031:  mov    %eax,(%esp)
080e0818 +0x1034:  call   0807d880 <_init+0x178>
080e081d +0x1039:  mov    -0xc(%ebp),%eax
080e0820 +0x103c:  shl    $0x2,%eax
080e0823 +0x103f:  neg    %eax
080e0825 +0x1041:  add    0x10(%ebp),%eax
080e0828 +0x1044:  leave
080e0829 +0x1045:  ret
080e082a +0x1046:  push   %ebp
080e082b +0x1047:  mov    %esp,%ebp
080e082d +0x1049:  sub    $0x18,%esp
080e0830 +0x104c:  mov    0x10(%ebp),%eax
080e0833 +0x104f:  mov    %eax,0x8(%esp)
080e0837 +0x1053:  mov    0xc(%ebp),%eax
080e083a +0x1056:  mov    %eax,0x4(%esp)
080e083e +0x105a:  mov    0x8(%ebp),%eax
080e0841 +0x105d:  mov    %eax,(%esp)
080e0844 +0x1060:  call   080e0874 <+0x1090>
080e0849 +0x1065:  leave
080e084a +0x1066:  ret
080e084b +0x1067:  push   %ebp
080e084c +0x1068:  mov    %esp,%ebp
080e084e +0x106a:  sub    $0x18,%esp
080e0851 +0x106d:  mov    0x8(%ebp),%eax
080e0854 +0x1070:  mov    %eax,(%esp)
080e0857 +0x1073:  call   0808e762 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5d2>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5d2
080e085c +0x1078:  mov    0x10(%ebp),%edx
080e085f +0x107b:  mov    %edx,0x8(%esp)
080e0863 +0x107f:  mov    0xc(%ebp),%edx
080e0866 +0x1082:  mov    %edx,0x4(%esp)
080e086a +0x1086:  mov    %eax,(%esp)
080e086d +0x1089:  call   080e08ac <+0x10c8>
080e0872 +0x108e:  leave
080e0873 +0x108f:  ret
080e0874 +0x1090:  push   %ebp
080e0875 +0x1091:  mov    %esp,%ebp
080e0877 +0x1093:  push   %ebx
080e0878 +0x1094:  sub    $0x14,%esp
080e087b +0x1097:  mov    0xc(%ebp),%eax
080e087e +0x109a:  mov    %eax,(%esp)
080e0881 +0x109d:  call   080e08dc <+0x10f8>
080e0886 +0x10a2:  mov    %eax,%ebx
080e0888 +0x10a4:  mov    0x8(%ebp),%eax
080e088b +0x10a7:  mov    %eax,(%esp)
080e088e +0x10aa:  call   080e08dc <+0x10f8>
080e0893 +0x10af:  mov    0x10(%ebp),%edx
080e0896 +0x10b2:  mov    %edx,0x8(%esp)
080e089a +0x10b6:  mov    %ebx,0x4(%esp)
080e089e +0x10ba:  mov    %eax,(%esp)
080e08a1 +0x10bd:  call   080e08ef <+0x110b>
080e08a6 +0x10c2:  add    $0x14,%esp
080e08a9 +0x10c5:  pop    %ebx
080e08aa +0x10c6:  pop    %ebp
080e08ab +0x10c7:  ret
080e08ac +0x10c8:  push   %ebp
080e08ad +0x10c9:  mov    %esp,%ebp
080e08af +0x10cb:  sub    $0x10,%esp
080e08b2 +0x10ce:  mov    0x10(%ebp),%eax
080e08b5 +0x10d1:  mov    (%eax),%eax
080e08b7 +0x10d3:  mov    %eax,-0x4(%ebp)
080e08ba +0x10d6:  jmp    080e08cc <+0x10e8>
080e08bc +0x10d8:  mov    0x8(%ebp),%eax
080e08bf +0x10db:  mov    -0x4(%ebp),%edx
080e08c2 +0x10de:  mov    %edx,(%eax)
080e08c4 +0x10e0:  subl   $0x1,0xc(%ebp)
080e08c8 +0x10e4:  addl   $0x4,0x8(%ebp)
080e08cc +0x10e8:  cmpl   $0x0,0xc(%ebp)
080e08d0 +0x10ec:  setne  %al
080e08d3 +0x10ef:  test   %al,%al
080e08d5 +0x10f1:  jne    080e08bc <+0x10d8>
080e08d7 +0x10f3:  mov    0x8(%ebp),%eax
080e08da +0x10f6:  leave
080e08db +0x10f7:  ret
080e08dc +0x10f8:  push   %ebp
080e08dd +0x10f9:  mov    %esp,%ebp
080e08df +0x10fb:  sub    $0x18,%esp
080e08e2 +0x10fe:  lea    0x8(%ebp),%eax
080e08e5 +0x1101:  mov    %eax,(%esp)
080e08e8 +0x1104:  call   080e0934 <+0x1150>
080e08ed +0x1109:  leave
080e08ee +0x110a:  ret
080e08ef +0x110b:  push   %ebp
080e08f0 +0x110c:  mov    %esp,%ebp
080e08f2 +0x110e:  push   %esi
080e08f3 +0x110f:  push   %ebx
080e08f4 +0x1110:  sub    $0x10,%esp
080e08f7 +0x1113:  mov    0x10(%ebp),%eax
080e08fa +0x1116:  mov    %eax,(%esp)
080e08fd +0x1119:  call   080e074e <+0xf6a>
080e0902 +0x111e:  mov    %eax,%esi
080e0904 +0x1120:  mov    0xc(%ebp),%eax
080e0907 +0x1123:  mov    %eax,(%esp)
080e090a +0x1126:  call   080e074e <+0xf6a>
080e090f +0x112b:  mov    %eax,%ebx
080e0911 +0x112d:  mov    0x8(%ebp),%eax
080e0914 +0x1130:  mov    %eax,(%esp)
080e0917 +0x1133:  call   080e074e <+0xf6a>
080e091c +0x1138:  mov    %esi,0x8(%esp)
080e0920 +0x113c:  mov    %ebx,0x4(%esp)
080e0924 +0x1140:  mov    %eax,(%esp)
080e0927 +0x1143:  call   080e093e <+0x115a>
080e092c +0x1148:  add    $0x10,%esp
080e092f +0x114b:  pop    %ebx
080e0930 +0x114c:  pop    %esi
080e0931 +0x114d:  pop    %ebp
080e0932 +0x114e:  ret
080e0933 +0x114f:  nop
080e0934 +0x1150:  push   %ebp
080e0935 +0x1151:  mov    %esp,%ebp
080e0937 +0x1153:  mov    0x8(%ebp),%eax
080e093a +0x1156:  mov    (%eax),%eax
080e093c +0x1158:  pop    %ebp
080e093d +0x1159:  ret
080e093e +0x115a:  push   %ebp
080e093f +0x115b:  mov    %esp,%ebp
080e0941 +0x115d:  sub    $0x28,%esp
080e0944 +0x1160:  movb   $0x1,-0x9(%ebp)
080e0948 +0x1164:  mov    0x10(%ebp),%eax
080e094b +0x1167:  mov    %eax,0x8(%esp)
080e094f +0x116b:  mov    0xc(%ebp),%eax
080e0952 +0x116e:  mov    %eax,0x4(%esp)
080e0956 +0x1172:  mov    0x8(%ebp),%eax
080e0959 +0x1175:  mov    %eax,(%esp)
080e095c +0x1178:  call   080e0963 <+0x117f>
080e0961 +0x117d:  leave
080e0962 +0x117e:  ret
080e0963 +0x117f:  push   %ebp
080e0964 +0x1180:  mov    %esp,%ebp
080e0966 +0x1182:  sub    $0x18,%esp
080e0969 +0x1185:  mov    0xc(%ebp),%edx
080e096c +0x1188:  mov    0x8(%ebp),%eax
080e096f +0x118b:  mov    %edx,%ecx
080e0971 +0x118d:  sub    %eax,%ecx
080e0973 +0x118f:  mov    %ecx,%eax
080e0975 +0x1191:  sar    $0x2,%eax
080e0978 +0x1194:  shl    $0x2,%eax
080e097b +0x1197:  mov    %eax,0x8(%esp)
080e097f +0x119b:  mov    0x8(%ebp),%eax
080e0982 +0x119e:  mov    %eax,0x4(%esp)
080e0986 +0x11a2:  mov    0x10(%ebp),%eax
080e0989 +0x11a5:  mov    %eax,(%esp)
080e098c +0x11a8:  call   0807d880 <_init+0x178>
080e0991 +0x11ad:  mov    0xc(%ebp),%edx
080e0994 +0x11b0:  mov    0x8(%ebp),%eax
080e0997 +0x11b3:  mov    %edx,%ecx
080e0999 +0x11b5:  sub    %eax,%ecx
080e099b +0x11b7:  mov    %ecx,%eax
080e099d +0x11b9:  sar    $0x2,%eax
080e09a0 +0x11bc:  shl    $0x2,%eax
080e09a3 +0x11bf:  add    0x10(%ebp),%eax
080e09a6 +0x11c2:  leave
080e09a7 +0x11c3:  ret
```

## 反编译 C

```c
// <global>::global @ 0x80df7e4

/* CaptchaGen::CaptchaGen() */

void CaptchaGen::_GLOBAL__I_CaptchaGen(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
