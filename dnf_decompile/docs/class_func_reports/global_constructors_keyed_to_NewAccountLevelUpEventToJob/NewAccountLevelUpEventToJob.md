# NewAccountLevelUpEventToJob

`_GLOBAL__I__ZN27NewAccountLevelUpEventToJobC2Ev`

`global constructors keyed to NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to NewAccountLevelUpEventToJob` | `0x081b87f9` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b87f9  _GLOBAL__I__ZN27NewAccountLevelUpEventToJobC2Ev
#           global constructors keyed to NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob()
# range [0x081b87f9, 0x081b9b77]
081b87f9 +0x0000:  push   %ebp
081b87fa +0x0001:  mov    %esp,%ebp
081b87fc +0x0003:  sub    $0x18,%esp
081b87ff +0x0006:  movl   $0xffff,0x4(%esp)
081b8807 +0x000e:  movl   $0x1,(%esp)
081b880e +0x0015:  call   081b87b9 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
081b8813 +0x001a:  leave
081b8814 +0x001b:  ret
081b8815 +0x001c:  nop
081b8816 +0x001d:  push   %ebp
081b8817 +0x001e:  mov    %esp,%ebp
081b8819 +0x0020:  sub    $0x18,%esp
081b881c +0x0023:  mov    0x8(%ebp),%eax
081b881f +0x0026:  mov    0xc(%ebp),%edx
081b8822 +0x0029:  mov    %edx,0x4(%esp)
081b8826 +0x002d:  mov    %eax,(%esp)
081b8829 +0x0030:  call   080c84fa <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x52>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x52
081b882e +0x0035:  leave
081b882f +0x0036:  ret
081b8830 +0x0037:  push   %ebp
081b8831 +0x0038:  mov    %esp,%ebp
081b8833 +0x003a:  mov    0x8(%ebp),%eax
081b8836 +0x003d:  movzbl 0x2(%eax),%edx
081b883a +0x0041:  mov    0xc(%ebp),%eax
081b883d +0x0044:  movzbl 0x2(%eax),%eax
081b8841 +0x0048:  cmp    %al,%dl
081b8843 +0x004a:  jne    081b8880 <+0x87>
081b8845 +0x004c:  mov    0x8(%ebp),%eax
081b8848 +0x004f:  movzbl 0x3(%eax),%edx
081b884c +0x0053:  mov    0xc(%ebp),%eax
081b884f +0x0056:  movzbl 0x3(%eax),%eax
081b8853 +0x005a:  cmp    %al,%dl
081b8855 +0x005c:  jne    081b886b <+0x72>
081b8857 +0x005e:  mov    0x8(%ebp),%eax
081b885a +0x0061:  movzwl (%eax),%edx
081b885d +0x0064:  mov    0xc(%ebp),%eax
081b8860 +0x0067:  movzwl (%eax),%eax
081b8863 +0x006a:  cmp    %ax,%dx
081b8866 +0x006d:  setl   %al
081b8869 +0x0070:  jmp    081b8893 <+0x9a>
081b886b +0x0072:  mov    0x8(%ebp),%eax
081b886e +0x0075:  movzbl 0x3(%eax),%edx
081b8872 +0x0079:  mov    0xc(%ebp),%eax
081b8875 +0x007c:  movzbl 0x3(%eax),%eax
081b8879 +0x0080:  cmp    %al,%dl
081b887b +0x0082:  setl   %al
081b887e +0x0085:  jmp    081b8893 <+0x9a>
081b8880 +0x0087:  mov    0x8(%ebp),%eax
081b8883 +0x008a:  movzbl 0x2(%eax),%edx
081b8887 +0x008e:  mov    0xc(%ebp),%eax
081b888a +0x0091:  movzbl 0x2(%eax),%eax
081b888e +0x0095:  cmp    %al,%dl
081b8890 +0x0097:  setl   %al
081b8893 +0x009a:  pop    %ebp
081b8894 +0x009b:  ret
081b8895 +0x009c:  nop
081b8896 +0x009d:  push   %ebp
081b8897 +0x009e:  mov    %esp,%ebp
081b8899 +0x00a0:  mov    0xc(%ebp),%eax
081b889c +0x00a3:  mov    %eax,%edx
081b889e +0x00a5:  mov    0x8(%ebp),%eax
081b88a1 +0x00a8:  mov    %dx,(%eax)
081b88a4 +0x00ab:  mov    0x10(%ebp),%eax
081b88a7 +0x00ae:  mov    %eax,%edx
081b88a9 +0x00b0:  mov    0x8(%ebp),%eax
081b88ac +0x00b3:  mov    %dl,0x2(%eax)
081b88af +0x00b6:  mov    0x14(%ebp),%eax
081b88b2 +0x00b9:  mov    %eax,%edx
081b88b4 +0x00bb:  mov    0x8(%ebp),%eax
081b88b7 +0x00be:  mov    %dl,0x3(%eax)
081b88ba +0x00c1:  pop    %ebp
081b88bb +0x00c2:  ret
081b88bc +0x00c3:  push   %ebp
081b88bd +0x00c4:  mov    %esp,%ebp
081b88bf +0x00c6:  sub    $0x18,%esp
081b88c2 +0x00c9:  mov    0x8(%ebp),%eax
081b88c5 +0x00cc:  mov    %eax,(%esp)
081b88c8 +0x00cf:  call   081b88d0 <+0xd7>
081b88cd +0x00d4:  leave
081b88ce +0x00d5:  ret
081b88cf +0x00d6:  nop
081b88d0 +0x00d7:  push   %ebp
081b88d1 +0x00d8:  mov    %esp,%ebp
081b88d3 +0x00da:  mov    0x8(%ebp),%eax
081b88d6 +0x00dd:  movl   $0xffffffff,(%eax)
081b88dc +0x00e3:  mov    0x8(%ebp),%eax
081b88df +0x00e6:  movl   $0x0,0x4(%eax)
081b88e6 +0x00ed:  pop    %ebp
081b88e7 +0x00ee:  ret
081b88e8 +0x00ef:  push   %ebp
081b88e9 +0x00f0:  mov    %esp,%ebp
081b88eb +0x00f2:  mov    0x8(%ebp),%eax
081b88ee +0x00f5:  mov    0xc(%ebp),%edx
081b88f1 +0x00f8:  mov    %edx,(%eax)
081b88f3 +0x00fa:  mov    0x8(%ebp),%eax
081b88f6 +0x00fd:  mov    0x10(%ebp),%edx
081b88f9 +0x0100:  mov    %edx,0x4(%eax)
081b88fc +0x0103:  pop    %ebp
081b88fd +0x0104:  ret
081b88fe +0x0105:  push   %ebp
081b88ff +0x0106:  mov    %esp,%ebp
081b8901 +0x0108:  sub    $0x18,%esp
081b8904 +0x010b:  mov    0x8(%ebp),%eax
081b8907 +0x010e:  mov    (%eax),%eax
081b8909 +0x0110:  movzbl 0x3(%eax),%edx
081b890d +0x0114:  mov    0xc(%ebp),%eax
081b8910 +0x0117:  movzbl 0x3(%eax),%eax
081b8914 +0x011b:  cmp    %al,%dl
081b8916 +0x011d:  jne    081b8957 <+0x15e>
081b8918 +0x011f:  mov    0x8(%ebp),%eax
081b891b +0x0122:  mov    (%eax),%eax
081b891d +0x0124:  movzbl 0x2(%eax),%edx
081b8921 +0x0128:  mov    0xc(%ebp),%eax
081b8924 +0x012b:  movzbl 0x2(%eax),%eax
081b8928 +0x012f:  cmp    %al,%dl
081b892a +0x0131:  jne    081b8957 <+0x15e>
081b892c +0x0133:  mov    0xc(%ebp),%eax
081b892f +0x0136:  movzwl (%eax),%edx
081b8932 +0x0139:  mov    0x8(%ebp),%eax
081b8935 +0x013c:  mov    (%eax),%eax
081b8937 +0x013e:  movzwl (%eax),%eax
081b893a +0x0141:  cmp    %ax,%dx
081b893d +0x0144:  jg     081b8957 <+0x15e>
081b893f +0x0146:  mov    0xc(%ebp),%eax
081b8942 +0x0149:  lea    0x4(%eax),%edx
081b8945 +0x014c:  mov    0x8(%ebp),%eax
081b8948 +0x014f:  mov    0x4(%eax),%eax
081b894b +0x0152:  mov    %edx,0x4(%esp)
081b894f +0x0156:  mov    %eax,(%esp)
081b8952 +0x0159:  call   081b8a52 <+0x259>
081b8957 +0x015e:  leave
081b8958 +0x015f:  ret
081b8959 +0x0160:  nop
081b895a +0x0161:  push   %ebp
081b895b +0x0162:  mov    %esp,%ebp
081b895d +0x0164:  sub    $0x48,%esp
081b8960 +0x0167:  mov    0x10(%ebp),%eax
081b8963 +0x016a:  mov    %eax,0x8(%esp)
081b8967 +0x016e:  mov    0xc(%ebp),%eax
081b896a +0x0171:  mov    %eax,0x4(%esp)
081b896e +0x0175:  lea    -0x18(%ebp),%eax
081b8971 +0x0178:  mov    %eax,(%esp)
081b8974 +0x017b:  call   081b88e8 <+0xef>
081b8979 +0x0180:  mov    0x8(%ebp),%edx
081b897c +0x0183:  lea    -0x10(%ebp),%eax
081b897f +0x0186:  mov    %edx,0x4(%esp)
081b8983 +0x018a:  mov    %eax,(%esp)
081b8986 +0x018d:  call   081b8aec <+0x2f3>
081b898b +0x0192:  sub    $0x4,%esp
081b898e +0x0195:  mov    0x8(%ebp),%edx
081b8991 +0x0198:  lea    -0xc(%ebp),%eax
081b8994 +0x019b:  mov    %edx,0x4(%esp)
081b8998 +0x019f:  mov    %eax,(%esp)
081b899b +0x01a2:  call   081b8ac6 <+0x2cd>
081b89a0 +0x01a7:  sub    $0x4,%esp
081b89a3 +0x01aa:  lea    -0x20(%ebp),%ecx
081b89a6 +0x01ad:  mov    -0x18(%ebp),%eax
081b89a9 +0x01b0:  mov    -0x14(%ebp),%edx
081b89ac +0x01b3:  mov    %eax,0xc(%esp)
081b89b0 +0x01b7:  mov    %edx,0x10(%esp)
081b89b4 +0x01bb:  mov    -0x10(%ebp),%eax
081b89b7 +0x01be:  mov    %eax,0x8(%esp)
081b89bb +0x01c2:  mov    -0xc(%ebp),%eax
081b89be +0x01c5:  mov    %eax,0x4(%esp)
081b89c2 +0x01c9:  mov    %ecx,(%esp)
081b89c5 +0x01cc:  call   081b8b11 <+0x318>
081b89ca +0x01d1:  sub    $0x4,%esp
081b89cd +0x01d4:  mov    0x10(%ebp),%eax
081b89d0 +0x01d7:  mov    %eax,(%esp)
081b89d3 +0x01da:  call   081b8b6e <+0x375>
081b89d8 +0x01df:  xor    $0x1,%eax
081b89db +0x01e2:  leave
081b89dc +0x01e3:  ret
081b89dd +0x01e4:  nop
081b89de +0x01e5:  push   %ebp
081b89df +0x01e6:  mov    %esp,%ebp
081b89e1 +0x01e8:  sub    $0x28,%esp
081b89e4 +0x01eb:  mov    0x8(%ebp),%edx
081b89e7 +0x01ee:  lea    -0x10(%ebp),%eax
081b89ea +0x01f1:  mov    0xc(%ebp),%ecx
081b89ed +0x01f4:  mov    %ecx,0x8(%esp)
081b89f1 +0x01f8:  mov    %edx,0x4(%esp)
081b89f5 +0x01fc:  mov    %eax,(%esp)
081b89f8 +0x01ff:  call   081b8bb2 <+0x3b9>
081b89fd +0x0204:  sub    $0x4,%esp
081b8a00 +0x0207:  mov    0x8(%ebp),%edx
081b8a03 +0x020a:  lea    -0xc(%ebp),%eax
081b8a06 +0x020d:  mov    %edx,0x4(%esp)
081b8a0a +0x0211:  mov    %eax,(%esp)
081b8a0d +0x0214:  call   081b8aec <+0x2f3>
081b8a12 +0x0219:  sub    $0x4,%esp
081b8a15 +0x021c:  lea    -0x10(%ebp),%eax
081b8a18 +0x021f:  mov    %eax,0x4(%esp)
081b8a1c +0x0223:  lea    -0xc(%ebp),%eax
081b8a1f +0x0226:  mov    %eax,(%esp)
081b8a22 +0x0229:  call   081b8bde <+0x3e5>
081b8a27 +0x022e:  test   %al,%al
081b8a29 +0x0230:  je     081b8a32 <+0x239>
081b8a2b +0x0232:  mov    $0x0,%eax
081b8a30 +0x0237:  jmp    081b8a50 <+0x257>
081b8a32 +0x0239:  lea    -0x10(%ebp),%eax
081b8a35 +0x023c:  mov    %eax,(%esp)
081b8a38 +0x023f:  call   081b8bf2 <+0x3f9>
081b8a3d +0x0244:  mov    0x10(%ebp),%ecx
081b8a40 +0x0247:  mov    0x8(%eax),%edx
081b8a43 +0x024a:  mov    0x4(%eax),%eax
081b8a46 +0x024d:  mov    %eax,(%ecx)
081b8a48 +0x024f:  mov    %edx,0x4(%ecx)
081b8a4b +0x0252:  mov    $0x1,%eax
081b8a50 +0x0257:  leave
081b8a51 +0x0258:  ret
081b8a52 +0x0259:  push   %ebp
081b8a53 +0x025a:  mov    %esp,%ebp
081b8a55 +0x025c:  sub    $0x28,%esp
081b8a58 +0x025f:  mov    0x8(%ebp),%eax
081b8a5b +0x0262:  mov    0x4(%eax),%edx
081b8a5e +0x0265:  mov    0x8(%ebp),%eax
081b8a61 +0x0268:  mov    0x8(%eax),%eax
081b8a64 +0x026b:  cmp    %eax,%edx
081b8a66 +0x026d:  je     081b8a95 <+0x29c>
081b8a68 +0x026f:  mov    0x8(%ebp),%eax
081b8a6b +0x0272:  mov    0x4(%eax),%edx
081b8a6e +0x0275:  mov    0x8(%ebp),%eax
081b8a71 +0x0278:  mov    0xc(%ebp),%ecx
081b8a74 +0x027b:  mov    %ecx,0x8(%esp)
081b8a78 +0x027f:  mov    %edx,0x4(%esp)
081b8a7c +0x0283:  mov    %eax,(%esp)
081b8a7f +0x0286:  call   081b8e5e <+0x665>
081b8a84 +0x028b:  mov    0x8(%ebp),%eax
081b8a87 +0x028e:  mov    0x4(%eax),%eax
081b8a8a +0x0291:  lea    0x8(%eax),%edx
081b8a8d +0x0294:  mov    0x8(%ebp),%eax
081b8a90 +0x0297:  mov    %edx,0x4(%eax)
081b8a93 +0x029a:  jmp    081b8ac3 <+0x2ca>
081b8a95 +0x029c:  lea    -0xc(%ebp),%eax
081b8a98 +0x029f:  mov    0x8(%ebp),%edx
081b8a9b +0x02a2:  mov    %edx,0x4(%esp)
081b8a9f +0x02a6:  mov    %eax,(%esp)
081b8aa2 +0x02a9:  call   081b8ddc <+0x5e3>
081b8aa7 +0x02ae:  sub    $0x4,%esp
081b8aaa +0x02b1:  mov    0xc(%ebp),%eax
081b8aad +0x02b4:  mov    %eax,0x8(%esp)
081b8ab1 +0x02b8:  mov    -0xc(%ebp),%eax
081b8ab4 +0x02bb:  mov    %eax,0x4(%esp)
081b8ab8 +0x02bf:  mov    0x8(%ebp),%eax
081b8abb +0x02c2:  mov    %eax,(%esp)
081b8abe +0x02c5:  call   081b8e8e <+0x695>
081b8ac3 +0x02ca:  leave
081b8ac4 +0x02cb:  ret
081b8ac5 +0x02cc:  nop
081b8ac6 +0x02cd:  push   %ebp
081b8ac7 +0x02ce:  mov    %esp,%ebp
081b8ac9 +0x02d0:  push   %ebx
081b8aca +0x02d1:  sub    $0x14,%esp
081b8acd +0x02d4:  mov    0x8(%ebp),%ebx
081b8ad0 +0x02d7:  mov    0xc(%ebp),%eax
081b8ad3 +0x02da:  mov    %eax,0x4(%esp)
081b8ad7 +0x02de:  mov    %ebx,(%esp)
081b8ada +0x02e1:  call   081b9146 <+0x94d>
081b8adf +0x02e6:  sub    $0x4,%esp
081b8ae2 +0x02e9:  mov    %ebx,%eax
081b8ae4 +0x02eb:  mov    -0x4(%ebp),%ebx
081b8ae7 +0x02ee:  leave
081b8ae8 +0x02ef:  ret    $0x4
081b8aeb +0x02f2:  nop
081b8aec +0x02f3:  push   %ebp
081b8aed +0x02f4:  mov    %esp,%ebp
081b8aef +0x02f6:  push   %ebx
081b8af0 +0x02f7:  sub    $0x14,%esp
081b8af3 +0x02fa:  mov    0x8(%ebp),%ebx
081b8af6 +0x02fd:  mov    0xc(%ebp),%eax
081b8af9 +0x0300:  mov    %eax,0x4(%esp)
081b8afd +0x0304:  mov    %ebx,(%esp)
081b8b00 +0x0307:  call   081b916c <+0x973>
081b8b05 +0x030c:  sub    $0x4,%esp
081b8b08 +0x030f:  mov    %ebx,%eax
081b8b0a +0x0311:  mov    -0x4(%ebp),%ebx
081b8b0d +0x0314:  leave
081b8b0e +0x0315:  ret    $0x4
081b8b11 +0x0318:  push   %ebp
081b8b12 +0x0319:  mov    %esp,%ebp
081b8b14 +0x031b:  push   %ebx
081b8b15 +0x031c:  sub    $0x14,%esp
081b8b18 +0x031f:  mov    0x8(%ebp),%ebx
081b8b1b +0x0322:  jmp    081b8b42 <+0x349>
081b8b1d +0x0324:  lea    0xc(%ebp),%eax
081b8b20 +0x0327:  mov    %eax,(%esp)
081b8b23 +0x032a:  call   081b8bf2 <+0x3f9>
081b8b28 +0x032f:  mov    %eax,0x4(%esp)
081b8b2c +0x0333:  lea    0x14(%ebp),%eax
081b8b2f +0x0336:  mov    %eax,(%esp)
081b8b32 +0x0339:  call   081b88fe <+0x105>
081b8b37 +0x033e:  lea    0xc(%ebp),%eax
081b8b3a +0x0341:  mov    %eax,(%esp)
081b8b3d +0x0344:  call   081b91a6 <+0x9ad>
081b8b42 +0x0349:  lea    0x10(%ebp),%eax
081b8b45 +0x034c:  mov    %eax,0x4(%esp)
081b8b49 +0x0350:  lea    0xc(%ebp),%eax
081b8b4c +0x0353:  mov    %eax,(%esp)
081b8b4f +0x0356:  call   081b9192 <+0x999>
081b8b54 +0x035b:  test   %al,%al
081b8b56 +0x035d:  jne    081b8b1d <+0x324>
081b8b58 +0x035f:  mov    0x14(%ebp),%eax
081b8b5b +0x0362:  mov    0x18(%ebp),%edx
081b8b5e +0x0365:  mov    %eax,(%ebx)
081b8b60 +0x0367:  mov    %edx,0x4(%ebx)
081b8b63 +0x036a:  mov    %ebx,%eax
081b8b65 +0x036c:  add    $0x14,%esp
081b8b68 +0x036f:  pop    %ebx
081b8b69 +0x0370:  pop    %ebp
081b8b6a +0x0371:  ret    $0x4
081b8b6d +0x0374:  nop
081b8b6e +0x0375:  push   %ebp
081b8b6f +0x0376:  mov    %esp,%ebp
081b8b71 +0x0378:  sub    $0x28,%esp
081b8b74 +0x037b:  lea    -0x10(%ebp),%eax
081b8b77 +0x037e:  mov    0x8(%ebp),%edx
081b8b7a +0x0381:  mov    %edx,0x4(%esp)
081b8b7e +0x0385:  mov    %eax,(%esp)
081b8b81 +0x0388:  call   081b91c4 <+0x9cb>
081b8b86 +0x038d:  sub    $0x4,%esp
081b8b89 +0x0390:  lea    -0xc(%ebp),%eax
081b8b8c +0x0393:  mov    0x8(%ebp),%edx
081b8b8f +0x0396:  mov    %edx,0x4(%esp)
081b8b93 +0x039a:  mov    %eax,(%esp)
081b8b96 +0x039d:  call   081b91f0 <+0x9f7>
081b8b9b +0x03a2:  sub    $0x4,%esp
081b8b9e +0x03a5:  lea    -0x10(%ebp),%eax
081b8ba1 +0x03a8:  mov    %eax,0x4(%esp)
081b8ba5 +0x03ac:  lea    -0xc(%ebp),%eax
081b8ba8 +0x03af:  mov    %eax,(%esp)
081b8bab +0x03b2:  call   081b921b <+0xa22>
081b8bb0 +0x03b7:  leave
081b8bb1 +0x03b8:  ret
081b8bb2 +0x03b9:  push   %ebp
081b8bb3 +0x03ba:  mov    %esp,%ebp
081b8bb5 +0x03bc:  push   %ebx
081b8bb6 +0x03bd:  sub    $0x14,%esp
081b8bb9 +0x03c0:  mov    0x8(%ebp),%ebx
081b8bbc +0x03c3:  mov    0xc(%ebp),%eax
081b8bbf +0x03c6:  mov    0x10(%ebp),%edx
081b8bc2 +0x03c9:  mov    %edx,0x8(%esp)
081b8bc6 +0x03cd:  mov    %eax,0x4(%esp)
081b8bca +0x03d1:  mov    %ebx,(%esp)
081b8bcd +0x03d4:  call   081b9248 <+0xa4f>
081b8bd2 +0x03d9:  sub    $0x4,%esp
081b8bd5 +0x03dc:  mov    %ebx,%eax
081b8bd7 +0x03de:  mov    -0x4(%ebp),%ebx
081b8bda +0x03e1:  leave
081b8bdb +0x03e2:  ret    $0x4
081b8bde +0x03e5:  push   %ebp
081b8bdf +0x03e6:  mov    %esp,%ebp
081b8be1 +0x03e8:  mov    0x8(%ebp),%eax
081b8be4 +0x03eb:  mov    (%eax),%edx
081b8be6 +0x03ed:  mov    0xc(%ebp),%eax
081b8be9 +0x03f0:  mov    (%eax),%eax
081b8beb +0x03f2:  cmp    %eax,%edx
081b8bed +0x03f4:  sete   %al
081b8bf0 +0x03f7:  pop    %ebp
081b8bf1 +0x03f8:  ret
081b8bf2 +0x03f9:  push   %ebp
081b8bf3 +0x03fa:  mov    %esp,%ebp
081b8bf5 +0x03fc:  mov    0x8(%ebp),%eax
081b8bf8 +0x03ff:  mov    (%eax),%eax
081b8bfa +0x0401:  add    $0x10,%eax
081b8bfd +0x0404:  pop    %ebp
081b8bfe +0x0405:  ret
081b8bff +0x0406:  nop
081b8c00 +0x0407:  push   %ebp
081b8c01 +0x0408:  mov    %esp,%ebp
081b8c03 +0x040a:  sub    $0x18,%esp
081b8c06 +0x040d:  mov    0x8(%ebp),%eax
081b8c09 +0x0410:  mov    %eax,(%esp)
081b8c0c +0x0413:  call   081b9326 <+0xb2d>
081b8c11 +0x0418:  leave
081b8c12 +0x0419:  ret
081b8c13 +0x041a:  nop
081b8c14 +0x041b:  push   %ebp
081b8c15 +0x041c:  mov    %esp,%ebp
081b8c17 +0x041e:  push   %esi
081b8c18 +0x041f:  push   %ebx
081b8c19 +0x0420:  sub    $0x10,%esp
081b8c1c +0x0423:  mov    0x8(%ebp),%eax
081b8c1f +0x0426:  mov    %eax,(%esp)
081b8c22 +0x0429:  call   081b93a2 <+0xba9>
081b8c27 +0x042e:  mov    0x8(%ebp),%edx
081b8c2a +0x0431:  mov    0x4(%edx),%ecx
081b8c2d +0x0434:  mov    0x8(%ebp),%edx
081b8c30 +0x0437:  mov    (%edx),%edx
081b8c32 +0x0439:  mov    %eax,0x8(%esp)
081b8c36 +0x043d:  mov    %ecx,0x4(%esp)
081b8c3a +0x0441:  mov    %edx,(%esp)
081b8c3d +0x0444:  call   081b93aa <+0xbb1>
081b8c42 +0x0449:  jmp    081b8c5f <+0x466>
081b8c44 +0x044b:  mov    %edx,%ebx
081b8c46 +0x044d:  mov    %eax,%esi
081b8c48 +0x044f:  mov    0x8(%ebp),%eax
081b8c4b +0x0452:  mov    %eax,(%esp)
081b8c4e +0x0455:  call   081b933a <+0xb41>
081b8c53 +0x045a:  mov    %esi,%eax
081b8c55 +0x045c:  mov    %ebx,%edx
081b8c57 +0x045e:  mov    %eax,(%esp)
081b8c5a +0x0461:  call   08ae3750 <_Unwind_Resume>
081b8c5f +0x0466:  mov    0x8(%ebp),%eax
081b8c62 +0x0469:  mov    %eax,(%esp)
081b8c65 +0x046c:  call   081b933a <+0xb41>
081b8c6a +0x0471:  add    $0x10,%esp
081b8c6d +0x0474:  pop    %ebx
081b8c6e +0x0475:  pop    %esi
081b8c6f +0x0476:  pop    %ebp
081b8c70 +0x0477:  ret
081b8c71 +0x0478:  nop
081b8c72 +0x0479:  push   %ebp
081b8c73 +0x047a:  mov    %esp,%ebp
081b8c75 +0x047c:  sub    $0x18,%esp
081b8c78 +0x047f:  mov    0x8(%ebp),%eax
081b8c7b +0x0482:  mov    %eax,(%esp)
081b8c7e +0x0485:  call   081b8e4e <+0x655>
081b8c83 +0x048a:  leave
081b8c84 +0x048b:  ret
081b8c85 +0x048c:  nop
081b8c86 +0x048d:  push   %ebp
081b8c87 +0x048e:  mov    %esp,%ebp
081b8c89 +0x0490:  push   %ebx
081b8c8a +0x0491:  sub    $0x14,%esp
081b8c8d +0x0494:  mov    0x8(%ebp),%ebx
081b8c90 +0x0497:  mov    0xc(%ebp),%eax
081b8c93 +0x049a:  mov    0x10(%ebp),%edx
081b8c96 +0x049d:  mov    %edx,0x8(%esp)
081b8c9a +0x04a1:  mov    %eax,0x4(%esp)
081b8c9e +0x04a5:  mov    %ebx,(%esp)
081b8ca1 +0x04a8:  call   08193b90 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x7f8>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x7f8
081b8ca6 +0x04ad:  sub    $0x4,%esp
081b8ca9 +0x04b0:  mov    %ebx,%eax
081b8cab +0x04b2:  mov    -0x4(%ebp),%ebx
081b8cae +0x04b5:  leave
081b8caf +0x04b6:  ret    $0x4
081b8cb2 +0x04b9:  push   %ebp
081b8cb3 +0x04ba:  mov    %esp,%ebp
081b8cb5 +0x04bc:  push   %ebx
081b8cb6 +0x04bd:  sub    $0x14,%esp
081b8cb9 +0x04c0:  mov    0x8(%ebp),%ebx
081b8cbc +0x04c3:  mov    0xc(%ebp),%eax
081b8cbf +0x04c6:  mov    0x10(%ebp),%edx
081b8cc2 +0x04c9:  mov    %edx,0x8(%esp)
081b8cc6 +0x04cd:  mov    %eax,0x4(%esp)
081b8cca +0x04d1:  mov    %ebx,(%esp)
081b8ccd +0x04d4:  call   08153ce4 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x3619>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x3619
081b8cd2 +0x04d9:  sub    $0x4,%esp
081b8cd5 +0x04dc:  mov    %ebx,%eax
081b8cd7 +0x04de:  mov    -0x4(%ebp),%ebx
081b8cda +0x04e1:  leave
081b8cdb +0x04e2:  ret    $0x4
081b8cde +0x04e5:  push   %ebp
081b8cdf +0x04e6:  mov    %esp,%ebp
081b8ce1 +0x04e8:  push   %ebx
081b8ce2 +0x04e9:  sub    $0x14,%esp
081b8ce5 +0x04ec:  mov    0x8(%ebp),%ebx
081b8ce8 +0x04ef:  mov    0xc(%ebp),%eax
081b8ceb +0x04f2:  mov    %eax,0x4(%esp)
081b8cef +0x04f6:  mov    %ebx,(%esp)
081b8cf2 +0x04f9:  call   080cedf0 <_GLOBAL__I__ZN10BingoEventC2Ev+0x3c3d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x3c3d
081b8cf7 +0x04fe:  sub    $0x4,%esp
081b8cfa +0x0501:  mov    %ebx,%eax
081b8cfc +0x0503:  mov    -0x4(%ebp),%ebx
081b8cff +0x0506:  leave
081b8d00 +0x0507:  ret    $0x4
081b8d03 +0x050a:  nop
081b8d04 +0x050b:  push   %ebp
081b8d05 +0x050c:  mov    %esp,%ebp
081b8d07 +0x050e:  push   %ebx
081b8d08 +0x050f:  sub    $0x14,%esp
081b8d0b +0x0512:  mov    0x8(%ebp),%ebx
081b8d0e +0x0515:  mov    0xc(%ebp),%eax
081b8d11 +0x0518:  movl   $0x4,0x8(%esp)
081b8d19 +0x0520:  mov    %eax,0x4(%esp)
081b8d1d +0x0524:  mov    %ebx,(%esp)
081b8d20 +0x0527:  call   0807d880 <_init+0x178>
081b8d25 +0x052c:  mov    0xc(%ebp),%eax
081b8d28 +0x052f:  mov    (%eax),%eax
081b8d2a +0x0531:  mov    %eax,(%esp)
081b8d2d +0x0534:  call   086df800 <_ZSt18_Rb_tree_incrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_increment(std::_Rb_tree_node_base*)
081b8d32 +0x0539:  mov    0xc(%ebp),%edx
081b8d35 +0x053c:  mov    %eax,(%edx)
081b8d37 +0x053e:  mov    %ebx,%eax
081b8d39 +0x0540:  add    $0x14,%esp
081b8d3c +0x0543:  pop    %ebx
081b8d3d +0x0544:  pop    %ebp
081b8d3e +0x0545:  ret    $0x4
081b8d41 +0x0548:  push   %ebp
081b8d42 +0x0549:  mov    %esp,%ebp
081b8d44 +0x054b:  push   %ebx
081b8d45 +0x054c:  sub    $0x24,%esp
081b8d48 +0x054f:  mov    0x8(%ebp),%ebx
081b8d4b +0x0552:  mov    0x10(%ebp),%eax
081b8d4e +0x0555:  mov    %eax,(%esp)
081b8d51 +0x0558:  call   08080ff4 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x101a>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x101a
081b8d56 +0x055d:  mov    (%eax),%eax
081b8d58 +0x055f:  mov    %eax,-0x10(%ebp)
081b8d5b +0x0562:  mov    0xc(%ebp),%eax
081b8d5e +0x0565:  mov    %eax,(%esp)
081b8d61 +0x0568:  call   08080ff4 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x101a>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x101a
081b8d66 +0x056d:  mov    (%eax),%eax
081b8d68 +0x056f:  mov    %eax,-0xc(%ebp)
081b8d6b +0x0572:  lea    -0x10(%ebp),%eax
081b8d6e +0x0575:  mov    %eax,0x8(%esp)
081b8d72 +0x0579:  lea    -0xc(%ebp),%eax
081b8d75 +0x057c:  mov    %eax,0x4(%esp)
081b8d79 +0x0580:  mov    %ebx,(%esp)
081b8d7c +0x0583:  call   081627d4 <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0xa42>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0xa42
081b8d81 +0x0588:  mov    %ebx,%eax
081b8d83 +0x058a:  add    $0x24,%esp
081b8d86 +0x058d:  pop    %ebx
081b8d87 +0x058e:  pop    %ebp
081b8d88 +0x058f:  ret    $0x4
081b8d8b +0x0592:  nop
081b8d8c +0x0593:  push   %ebp
081b8d8d +0x0594:  mov    %esp,%ebp
081b8d8f +0x0596:  push   %ebx
081b8d90 +0x0597:  sub    $0x14,%esp
081b8d93 +0x059a:  mov    0x8(%ebp),%ebx
081b8d96 +0x059d:  mov    0xc(%ebp),%eax
081b8d99 +0x05a0:  mov    0x10(%ebp),%edx
081b8d9c +0x05a3:  mov    %edx,0x8(%esp)
081b8da0 +0x05a7:  mov    %eax,0x4(%esp)
081b8da4 +0x05ab:  mov    %ebx,(%esp)
081b8da7 +0x05ae:  call   081b93c4 <+0xbcb>
081b8dac +0x05b3:  sub    $0x4,%esp
081b8daf +0x05b6:  mov    %ebx,%eax
081b8db1 +0x05b8:  mov    -0x4(%ebp),%ebx
081b8db4 +0x05bb:  leave
081b8db5 +0x05bc:  ret    $0x4
081b8db8 +0x05bf:  push   %ebp
081b8db9 +0x05c0:  mov    %esp,%ebp
081b8dbb +0x05c2:  push   %ebx
081b8dbc +0x05c3:  sub    $0x14,%esp
081b8dbf +0x05c6:  mov    0x8(%ebp),%ebx
081b8dc2 +0x05c9:  mov    0xc(%ebp),%eax
081b8dc5 +0x05cc:  mov    %eax,0x4(%esp)
081b8dc9 +0x05d0:  mov    %ebx,(%esp)
081b8dcc +0x05d3:  call   081b9484 <+0xc8b>
081b8dd1 +0x05d8:  mov    %ebx,%eax
081b8dd3 +0x05da:  add    $0x14,%esp
081b8dd6 +0x05dd:  pop    %ebx
081b8dd7 +0x05de:  pop    %ebp
081b8dd8 +0x05df:  ret    $0x4
081b8ddb +0x05e2:  nop
081b8ddc +0x05e3:  push   %ebp
081b8ddd +0x05e4:  mov    %esp,%ebp
081b8ddf +0x05e6:  push   %ebx
081b8de0 +0x05e7:  sub    $0x14,%esp
081b8de3 +0x05ea:  mov    0x8(%ebp),%ebx
081b8de6 +0x05ed:  mov    0xc(%ebp),%eax
081b8de9 +0x05f0:  add    $0x4,%eax
081b8dec +0x05f3:  mov    %eax,0x4(%esp)
081b8df0 +0x05f7:  mov    %ebx,(%esp)
081b8df3 +0x05fa:  call   081b9484 <+0xc8b>
081b8df8 +0x05ff:  mov    %ebx,%eax
081b8dfa +0x0601:  add    $0x14,%esp
081b8dfd +0x0604:  pop    %ebx
081b8dfe +0x0605:  pop    %ebp
081b8dff +0x0606:  ret    $0x4
081b8e02 +0x0609:  push   %ebp
081b8e03 +0x060a:  mov    %esp,%ebp
081b8e05 +0x060c:  push   %ebx
081b8e06 +0x060d:  sub    $0x14,%esp
081b8e09 +0x0610:  mov    0x8(%ebp),%eax
081b8e0c +0x0613:  mov    %eax,(%esp)
081b8e0f +0x0616:  call   081b9494 <+0xc9b>
081b8e14 +0x061b:  mov    (%eax),%ebx
081b8e16 +0x061d:  mov    0xc(%ebp),%eax
081b8e19 +0x0620:  mov    %eax,(%esp)
081b8e1c +0x0623:  call   081b9494 <+0xc9b>
081b8e21 +0x0628:  mov    (%eax),%eax
081b8e23 +0x062a:  cmp    %eax,%ebx
081b8e25 +0x062c:  setne  %al
081b8e28 +0x062f:  add    $0x14,%esp
081b8e2b +0x0632:  pop    %ebx
081b8e2c +0x0633:  pop    %ebp
081b8e2d +0x0634:  ret
081b8e2e +0x0635:  push   %ebp
081b8e2f +0x0636:  mov    %esp,%ebp
081b8e31 +0x0638:  mov    0x8(%ebp),%eax
081b8e34 +0x063b:  mov    (%eax),%eax
081b8e36 +0x063d:  lea    0x8(%eax),%edx
081b8e39 +0x0640:  mov    0x8(%ebp),%eax
081b8e3c +0x0643:  mov    %edx,(%eax)
081b8e3e +0x0645:  mov    0x8(%ebp),%eax
081b8e41 +0x0648:  pop    %ebp
081b8e42 +0x0649:  ret
081b8e43 +0x064a:  nop
081b8e44 +0x064b:  push   %ebp
081b8e45 +0x064c:  mov    %esp,%ebp
081b8e47 +0x064e:  mov    0x8(%ebp),%eax
081b8e4a +0x0651:  mov    (%eax),%eax
081b8e4c +0x0653:  pop    %ebp
081b8e4d +0x0654:  ret
081b8e4e +0x0655:  push   %ebp
081b8e4f +0x0656:  mov    %esp,%ebp
081b8e51 +0x0658:  mov    0x8(%ebp),%eax
081b8e54 +0x065b:  mov    0x14(%eax),%eax
081b8e57 +0x065e:  test   %eax,%eax
081b8e59 +0x0660:  sete   %al
081b8e5c +0x0663:  pop    %ebp
081b8e5d +0x0664:  ret
081b8e5e +0x0665:  push   %ebp
081b8e5f +0x0666:  mov    %esp,%ebp
081b8e61 +0x0668:  sub    $0x18,%esp
081b8e64 +0x066b:  mov    0xc(%ebp),%eax
081b8e67 +0x066e:  mov    %eax,0x4(%esp)
081b8e6b +0x0672:  movl   $0x8,(%esp)
081b8e72 +0x0679:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
081b8e77 +0x067e:  mov    %eax,%edx
081b8e79 +0x0680:  test   %edx,%edx
081b8e7b +0x0682:  je     081b8e8c <+0x693>
081b8e7d +0x0684:  mov    %eax,%ecx
081b8e7f +0x0686:  mov    0x10(%ebp),%eax
081b8e82 +0x0689:  mov    0x4(%eax),%edx
081b8e85 +0x068c:  mov    (%eax),%eax
081b8e87 +0x068e:  mov    %eax,(%ecx)
081b8e89 +0x0690:  mov    %edx,0x4(%ecx)
081b8e8c +0x0693:  leave
081b8e8d +0x0694:  ret
081b8e8e +0x0695:  push   %ebp
081b8e8f +0x0696:  mov    %esp,%ebp
081b8e91 +0x0698:  push   %esi
081b8e92 +0x0699:  push   %ebx
081b8e93 +0x069a:  sub    $0x30,%esp
081b8e96 +0x069d:  mov    0x8(%ebp),%eax
081b8e99 +0x06a0:  mov    0x4(%eax),%edx
081b8e9c +0x06a3:  mov    0x8(%ebp),%eax
081b8e9f +0x06a6:  mov    0x8(%eax),%eax
081b8ea2 +0x06a9:  cmp    %eax,%edx
081b8ea4 +0x06ab:  je     081b8f39 <+0x740>
081b8eaa +0x06b1:  mov    0x8(%ebp),%eax
081b8ead +0x06b4:  mov    0x4(%eax),%eax
081b8eb0 +0x06b7:  sub    $0x8,%eax
081b8eb3 +0x06ba:  mov    %eax,(%esp)
081b8eb6 +0x06bd:  call   081b949c <+0xca3>
081b8ebb +0x06c2:  mov    0x8(%ebp),%edx
081b8ebe +0x06c5:  mov    0x4(%edx),%ecx
081b8ec1 +0x06c8:  mov    0x8(%ebp),%edx
081b8ec4 +0x06cb:  mov    %eax,0x8(%esp)
081b8ec8 +0x06cf:  mov    %ecx,0x4(%esp)
081b8ecc +0x06d3:  mov    %edx,(%esp)
081b8ecf +0x06d6:  call   081b94a4 <+0xcab>
081b8ed4 +0x06db:  mov    0x8(%ebp),%eax
081b8ed7 +0x06de:  mov    0x4(%eax),%eax
081b8eda +0x06e1:  lea    0x8(%eax),%edx
081b8edd +0x06e4:  mov    0x8(%ebp),%eax
081b8ee0 +0x06e7:  mov    %edx,0x4(%eax)
081b8ee3 +0x06ea:  mov    0x8(%ebp),%eax
081b8ee6 +0x06ed:  mov    0x4(%eax),%eax
081b8ee9 +0x06f0:  lea    -0x8(%eax),%esi
081b8eec +0x06f3:  mov    0x8(%ebp),%eax
081b8eef +0x06f6:  mov    0x4(%eax),%eax
081b8ef2 +0x06f9:  lea    -0x10(%eax),%ebx
081b8ef5 +0x06fc:  lea    0xc(%ebp),%eax
081b8ef8 +0x06ff:  mov    %eax,(%esp)
081b8efb +0x0702:  call   081b9494 <+0xc9b>
081b8f00 +0x0707:  mov    (%eax),%eax
081b8f02 +0x0709:  mov    %esi,0x8(%esp)
081b8f06 +0x070d:  mov    %ebx,0x4(%esp)
081b8f0a +0x0711:  mov    %eax,(%esp)
081b8f0d +0x0714:  call   081b94e3 <+0xcea>
081b8f12 +0x0719:  lea    0xc(%ebp),%eax
081b8f15 +0x071c:  mov    %eax,(%esp)
081b8f18 +0x071f:  call   081b8e44 <+0x64b>
081b8f1d +0x0724:  mov    %eax,%ebx
081b8f1f +0x0726:  mov    0x10(%ebp),%eax
081b8f22 +0x0729:  mov    %eax,(%esp)
081b8f25 +0x072c:  call   081b951b <+0xd22>
081b8f2a +0x0731:  mov    0x4(%eax),%edx
081b8f2d +0x0734:  mov    (%eax),%eax
081b8f2f +0x0736:  mov    %eax,(%ebx)
081b8f31 +0x0738:  mov    %edx,0x4(%ebx)
081b8f34 +0x073b:  jmp    081b913b <+0x942>
081b8f39 +0x0740:  movl   $"vector::_M_insert_aux",0x8(%esp)
081b8f41 +0x0748:  movl   $0x1,0x4(%esp)
081b8f49 +0x0750:  mov    0x8(%ebp),%eax
081b8f4c +0x0753:  mov    %eax,(%esp)
081b8f4f +0x0756:  call   081b9524 <+0xd2b>
081b8f54 +0x075b:  mov    %eax,-0x18(%ebp)
081b8f57 +0x075e:  lea    -0x1c(%ebp),%eax
081b8f5a +0x0761:  mov    0x8(%ebp),%edx
081b8f5d +0x0764:  mov    %edx,0x4(%esp)
081b8f61 +0x0768:  mov    %eax,(%esp)
081b8f64 +0x076b:  call   081b8db8 <+0x5bf>
081b8f69 +0x0770:  sub    $0x4,%esp
081b8f6c +0x0773:  lea    -0x1c(%ebp),%eax
081b8f6f +0x0776:  mov    %eax,0x4(%esp)
081b8f73 +0x077a:  lea    0xc(%ebp),%eax
081b8f76 +0x077d:  mov    %eax,(%esp)
081b8f79 +0x0780:  call   081b95c9 <+0xdd0>
081b8f7e +0x0785:  mov    %eax,-0x14(%ebp)
081b8f81 +0x0788:  mov    0x8(%ebp),%eax
081b8f84 +0x078b:  mov    -0x18(%ebp),%edx
081b8f87 +0x078e:  mov    %edx,0x4(%esp)
081b8f8b +0x0792:  mov    %eax,(%esp)
081b8f8e +0x0795:  call   081b95fc <+0xe03>
081b8f93 +0x079a:  mov    %eax,-0x10(%ebp)
081b8f96 +0x079d:  mov    -0x10(%ebp),%eax
081b8f99 +0x07a0:  mov    %eax,-0xc(%ebp)
081b8f9c +0x07a3:  mov    0x10(%ebp),%eax
081b8f9f +0x07a6:  mov    %eax,(%esp)
081b8fa2 +0x07a9:  call   081b951b <+0xd22>
081b8fa7 +0x07ae:  mov    -0x14(%ebp),%edx
081b8faa +0x07b1:  shl    $0x3,%edx
081b8fad +0x07b4:  mov    %edx,%ecx
081b8faf +0x07b6:  add    -0x10(%ebp),%ecx
081b8fb2 +0x07b9:  mov    0x8(%ebp),%edx
081b8fb5 +0x07bc:  mov    %eax,0x8(%esp)
081b8fb9 +0x07c0:  mov    %ecx,0x4(%esp)
081b8fbd +0x07c4:  mov    %edx,(%esp)
081b8fc0 +0x07c7:  call   081b8e5e <+0x665>
081b8fc5 +0x07cc:  movl   $0x0,-0xc(%ebp)
081b8fcc +0x07d3:  mov    0x8(%ebp),%eax
081b8fcf +0x07d6:  mov    %eax,(%esp)
081b8fd2 +0x07d9:  call   081b93a2 <+0xba9>
081b8fd7 +0x07de:  mov    %eax,%ebx
081b8fd9 +0x07e0:  lea    0xc(%ebp),%eax
081b8fdc +0x07e3:  mov    %eax,(%esp)
081b8fdf +0x07e6:  call   081b9494 <+0xc9b>
081b8fe4 +0x07eb:  mov    (%eax),%edx
081b8fe6 +0x07ed:  mov    0x8(%ebp),%eax
081b8fe9 +0x07f0:  mov    (%eax),%eax
081b8feb +0x07f2:  mov    %ebx,0xc(%esp)
081b8fef +0x07f6:  mov    -0x10(%ebp),%ecx
081b8ff2 +0x07f9:  mov    %ecx,0x8(%esp)
081b8ff6 +0x07fd:  mov    %edx,0x4(%esp)
081b8ffa +0x0801:  mov    %eax,(%esp)
081b8ffd +0x0804:  call   081b962b <+0xe32>
081b9002 +0x0809:  mov    %eax,-0xc(%ebp)
081b9005 +0x080c:  addl   $0x8,-0xc(%ebp)
081b9009 +0x0810:  mov    0x8(%ebp),%eax
081b900c +0x0813:  mov    %eax,(%esp)
081b900f +0x0816:  call   081b93a2 <+0xba9>
081b9014 +0x081b:  mov    %eax,%ebx
081b9016 +0x081d:  mov    0x8(%ebp),%eax
081b9019 +0x0820:  mov    0x4(%eax),%esi
081b901c +0x0823:  lea    0xc(%ebp),%eax
081b901f +0x0826:  mov    %eax,(%esp)
081b9022 +0x0829:  call   081b9494 <+0xc9b>
081b9027 +0x082e:  mov    (%eax),%eax
081b9029 +0x0830:  mov    %ebx,0xc(%esp)
081b902d +0x0834:  mov    -0xc(%ebp),%edx
081b9030 +0x0837:  mov    %edx,0x8(%esp)
081b9034 +0x083b:  mov    %esi,0x4(%esp)
081b9038 +0x083f:  mov    %eax,(%esp)
081b903b +0x0842:  call   081b962b <+0xe32>
081b9040 +0x0847:  mov    %eax,-0xc(%ebp)
081b9043 +0x084a:  mov    0x8(%ebp),%eax
081b9046 +0x084d:  mov    %eax,(%esp)
081b9049 +0x0850:  call   081b93a2 <+0xba9>
081b904e +0x0855:  mov    0x8(%ebp),%edx
081b9051 +0x0858:  mov    0x4(%edx),%ecx
081b9054 +0x085b:  mov    0x8(%ebp),%edx
081b9057 +0x085e:  mov    (%edx),%edx
081b9059 +0x0860:  mov    %eax,0x8(%esp)
081b905d +0x0864:  mov    %ecx,0x4(%esp)
081b9061 +0x0868:  mov    %edx,(%esp)
081b9064 +0x086b:  call   081b93aa <+0xbb1>
081b9069 +0x0870:  mov    0x8(%ebp),%eax
081b906c +0x0873:  mov    0x8(%eax),%eax
081b906f +0x0876:  mov    %eax,%edx
081b9071 +0x0878:  mov    0x8(%ebp),%eax
081b9074 +0x087b:  mov    (%eax),%eax
081b9076 +0x087d:  mov    %edx,%ecx
081b9078 +0x087f:  sub    %eax,%ecx
081b907a +0x0881:  mov    %ecx,%eax
081b907c +0x0883:  sar    $0x3,%eax
081b907f +0x0886:  mov    %eax,%ecx
081b9081 +0x0888:  mov    0x8(%ebp),%eax
081b9084 +0x088b:  mov    (%eax),%edx
081b9086 +0x088d:  mov    0x8(%ebp),%eax
081b9089 +0x0890:  mov    %ecx,0x8(%esp)
081b908d +0x0894:  mov    %edx,0x4(%esp)
081b9091 +0x0898:  mov    %eax,(%esp)
081b9094 +0x089b:  call   081b9698 <+0xe9f>
081b9099 +0x08a0:  mov    0x8(%ebp),%eax
081b909c +0x08a3:  mov    -0x10(%ebp),%edx
081b909f +0x08a6:  mov    %edx,(%eax)
081b90a1 +0x08a8:  mov    0x8(%ebp),%eax
081b90a4 +0x08ab:  mov    -0xc(%ebp),%edx
081b90a7 +0x08ae:  mov    %edx,0x4(%eax)
081b90aa +0x08b1:  mov    -0x18(%ebp),%eax
081b90ad +0x08b4:  shl    $0x3,%eax
081b90b0 +0x08b7:  mov    %eax,%edx
081b90b2 +0x08b9:  add    -0x10(%ebp),%edx
081b90b5 +0x08bc:  mov    0x8(%ebp),%eax
081b90b8 +0x08bf:  mov    %edx,0x8(%eax)
081b90bb +0x08c2:  jmp    081b913b <+0x942>
081b90bd +0x08c4:  mov    %eax,(%esp)
081b90c0 +0x08c7:  call   08725ce0 <__cxa_begin_catch>
081b90c5 +0x08cc:  cmpl   $0x0,-0xc(%ebp)
081b90c9 +0x08d0:  jne    081b90e7 <+0x8ee>
081b90cb +0x08d2:  mov    -0x14(%ebp),%eax
081b90ce +0x08d5:  shl    $0x3,%eax
081b90d1 +0x08d8:  mov    %eax,%edx
081b90d3 +0x08da:  add    -0x10(%ebp),%edx
081b90d6 +0x08dd:  mov    0x8(%ebp),%eax
081b90d9 +0x08e0:  mov    %edx,0x4(%esp)
081b90dd +0x08e4:  mov    %eax,(%esp)
081b90e0 +0x08e7:  call   081b9684 <+0xe8b>
081b90e5 +0x08ec:  jmp    081b9108 <+0x90f>
081b90e7 +0x08ee:  mov    0x8(%ebp),%eax
081b90ea +0x08f1:  mov    %eax,(%esp)
081b90ed +0x08f4:  call   081b93a2 <+0xba9>
081b90f2 +0x08f9:  mov    %eax,0x8(%esp)
081b90f6 +0x08fd:  mov    -0xc(%ebp),%eax
081b90f9 +0x0900:  mov    %eax,0x4(%esp)
081b90fd +0x0904:  mov    -0x10(%ebp),%eax
081b9100 +0x0907:  mov    %eax,(%esp)
081b9103 +0x090a:  call   081b93aa <+0xbb1>
081b9108 +0x090f:  mov    0x8(%ebp),%eax
081b910b +0x0912:  mov    -0x18(%ebp),%edx
081b910e +0x0915:  mov    %edx,0x8(%esp)
081b9112 +0x0919:  mov    -0x10(%ebp),%edx
081b9115 +0x091c:  mov    %edx,0x4(%esp)
081b9119 +0x0920:  mov    %eax,(%esp)
081b911c +0x0923:  call   081b9698 <+0xe9f>
081b9121 +0x0928:  call   08724be0 <__cxa_rethrow>
081b9126 +0x092d:  mov    %edx,%ebx
081b9128 +0x092f:  mov    %eax,%esi
081b912a +0x0931:  call   08725c30 <__cxa_end_catch>
081b912f +0x0936:  mov    %esi,%eax
081b9131 +0x0938:  mov    %ebx,%edx
081b9133 +0x093a:  mov    %eax,(%esp)
081b9136 +0x093d:  call   08ae3750 <_Unwind_Resume>
081b913b +0x0942:  lea    -0x8(%ebp),%esp
081b913e +0x0945:  add    $0x0,%esp
081b9141 +0x0948:  pop    %ebx
081b9142 +0x0949:  pop    %esi
081b9143 +0x094a:  pop    %ebp
081b9144 +0x094b:  ret
081b9145 +0x094c:  nop
081b9146 +0x094d:  push   %ebp
081b9147 +0x094e:  mov    %esp,%ebp
081b9149 +0x0950:  push   %ebx
081b914a +0x0951:  sub    $0x14,%esp
081b914d +0x0954:  mov    0x8(%ebp),%ebx
081b9150 +0x0957:  mov    0xc(%ebp),%eax
081b9153 +0x095a:  mov    0xc(%eax),%eax
081b9156 +0x095d:  mov    %eax,0x4(%esp)
081b915a +0x0961:  mov    %ebx,(%esp)
081b915d +0x0964:  call   081b96c0 <+0xec7>
081b9162 +0x0969:  mov    %ebx,%eax
081b9164 +0x096b:  add    $0x14,%esp
081b9167 +0x096e:  pop    %ebx
081b9168 +0x096f:  pop    %ebp
081b9169 +0x0970:  ret    $0x4
081b916c +0x0973:  push   %ebp
081b916d +0x0974:  mov    %esp,%ebp
081b916f +0x0976:  push   %ebx
081b9170 +0x0977:  sub    $0x14,%esp
081b9173 +0x097a:  mov    0x8(%ebp),%ebx
081b9176 +0x097d:  mov    0xc(%ebp),%eax
081b9179 +0x0980:  add    $0x4,%eax
081b917c +0x0983:  mov    %eax,0x4(%esp)
081b9180 +0x0987:  mov    %ebx,(%esp)
081b9183 +0x098a:  call   081b96c0 <+0xec7>
081b9188 +0x098f:  mov    %ebx,%eax
081b918a +0x0991:  add    $0x14,%esp
081b918d +0x0994:  pop    %ebx
081b918e +0x0995:  pop    %ebp
081b918f +0x0996:  ret    $0x4
081b9192 +0x0999:  push   %ebp
081b9193 +0x099a:  mov    %esp,%ebp
081b9195 +0x099c:  mov    0x8(%ebp),%eax
081b9198 +0x099f:  mov    (%eax),%edx
081b919a +0x09a1:  mov    0xc(%ebp),%eax
081b919d +0x09a4:  mov    (%eax),%eax
081b919f +0x09a6:  cmp    %eax,%edx
081b91a1 +0x09a8:  setne  %al
081b91a4 +0x09ab:  pop    %ebp
081b91a5 +0x09ac:  ret
081b91a6 +0x09ad:  push   %ebp
081b91a7 +0x09ae:  mov    %esp,%ebp
081b91a9 +0x09b0:  sub    $0x18,%esp
081b91ac +0x09b3:  mov    0x8(%ebp),%eax
081b91af +0x09b6:  mov    (%eax),%eax
081b91b1 +0x09b8:  mov    %eax,(%esp)
081b91b4 +0x09bb:  call   086df800 <_ZSt18_Rb_tree_incrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_increment(std::_Rb_tree_node_base*)
081b91b9 +0x09c0:  mov    0x8(%ebp),%edx
081b91bc +0x09c3:  mov    %eax,(%edx)
081b91be +0x09c5:  mov    0x8(%ebp),%eax
081b91c1 +0x09c8:  leave
081b91c2 +0x09c9:  ret
081b91c3 +0x09ca:  nop
081b91c4 +0x09cb:  push   %ebp
081b91c5 +0x09cc:  mov    %esp,%ebp
081b91c7 +0x09ce:  push   %ebx
081b91c8 +0x09cf:  sub    $0x24,%esp
081b91cb +0x09d2:  mov    0x8(%ebp),%ebx
081b91ce +0x09d5:  mov    0xc(%ebp),%eax
081b91d1 +0x09d8:  mov    0x4(%eax),%eax
081b91d4 +0x09db:  mov    %eax,-0xc(%ebp)
081b91d7 +0x09de:  lea    -0xc(%ebp),%eax
081b91da +0x09e1:  mov    %eax,0x4(%esp)
081b91de +0x09e5:  mov    %ebx,(%esp)
081b91e1 +0x09e8:  call   081b96ce <+0xed5>
081b91e6 +0x09ed:  mov    %ebx,%eax
081b91e8 +0x09ef:  add    $0x24,%esp
081b91eb +0x09f2:  pop    %ebx
081b91ec +0x09f3:  pop    %ebp
081b91ed +0x09f4:  ret    $0x4
081b91f0 +0x09f7:  push   %ebp
081b91f1 +0x09f8:  mov    %esp,%ebp
081b91f3 +0x09fa:  push   %ebx
081b91f4 +0x09fb:  sub    $0x24,%esp
081b91f7 +0x09fe:  mov    0x8(%ebp),%ebx
081b91fa +0x0a01:  mov    0xc(%ebp),%eax
081b91fd +0x0a04:  mov    (%eax),%eax
081b91ff +0x0a06:  mov    %eax,-0xc(%ebp)
081b9202 +0x0a09:  lea    -0xc(%ebp),%eax
081b9205 +0x0a0c:  mov    %eax,0x4(%esp)
081b9209 +0x0a10:  mov    %ebx,(%esp)
081b920c +0x0a13:  call   081b96ce <+0xed5>
081b9211 +0x0a18:  mov    %ebx,%eax
081b9213 +0x0a1a:  add    $0x24,%esp
081b9216 +0x0a1d:  pop    %ebx
081b9217 +0x0a1e:  pop    %ebp
081b9218 +0x0a1f:  ret    $0x4
081b921b +0x0a22:  push   %ebp
081b921c +0x0a23:  mov    %esp,%ebp
081b921e +0x0a25:  push   %ebx
081b921f +0x0a26:  sub    $0x14,%esp
081b9222 +0x0a29:  mov    0x8(%ebp),%eax
081b9225 +0x0a2c:  mov    %eax,(%esp)
081b9228 +0x0a2f:  call   081b96de <+0xee5>
081b922d +0x0a34:  mov    (%eax),%ebx
081b922f +0x0a36:  mov    0xc(%ebp),%eax
081b9232 +0x0a39:  mov    %eax,(%esp)
081b9235 +0x0a3c:  call   081b96de <+0xee5>
081b923a +0x0a41:  mov    (%eax),%eax
081b923c +0x0a43:  cmp    %eax,%ebx
081b923e +0x0a45:  sete   %al
081b9241 +0x0a48:  add    $0x14,%esp
081b9244 +0x0a4b:  pop    %ebx
081b9245 +0x0a4c:  pop    %ebp
081b9246 +0x0a4d:  ret
081b9247 +0x0a4e:  nop
081b9248 +0x0a4f:  push   %ebp
081b9249 +0x0a50:  mov    %esp,%ebp
081b924b +0x0a52:  push   %esi
081b924c +0x0a53:  push   %ebx
081b924d +0x0a54:  sub    $0x30,%esp
081b9250 +0x0a57:  mov    0x8(%ebp),%ebx
081b9253 +0x0a5a:  mov    0xc(%ebp),%eax
081b9256 +0x0a5d:  mov    %eax,(%esp)
081b9259 +0x0a60:  call   081b96e6 <+0xeed>
081b925e +0x0a65:  mov    %eax,%esi
081b9260 +0x0a67:  mov    0xc(%ebp),%eax
081b9263 +0x0a6a:  mov    %eax,(%esp)
081b9266 +0x0a6d:  call   081b9306 <+0xb0d>
081b926b +0x0a72:  lea    -0x10(%ebp),%edx
081b926e +0x0a75:  mov    0x10(%ebp),%ecx
081b9271 +0x0a78:  mov    %ecx,0x10(%esp)
081b9275 +0x0a7c:  mov    %esi,0xc(%esp)
081b9279 +0x0a80:  mov    %eax,0x8(%esp)
081b927d +0x0a84:  mov    0xc(%ebp),%eax
081b9280 +0x0a87:  mov    %eax,0x4(%esp)
081b9284 +0x0a8b:  mov    %edx,(%esp)
081b9287 +0x0a8e:  call   081b96f2 <+0xef9>
081b928c +0x0a93:  sub    $0x4,%esp
081b928f +0x0a96:  lea    -0xc(%ebp),%eax
081b9292 +0x0a99:  mov    0xc(%ebp),%edx
081b9295 +0x0a9c:  mov    %edx,0x4(%esp)
081b9299 +0x0aa0:  mov    %eax,(%esp)
081b929c +0x0aa3:  call   081b916c <+0x973>
081b92a1 +0x0aa8:  sub    $0x4,%esp
081b92a4 +0x0aab:  lea    -0xc(%ebp),%eax
081b92a7 +0x0aae:  mov    %eax,0x4(%esp)
081b92ab +0x0ab2:  lea    -0x10(%ebp),%eax
081b92ae +0x0ab5:  mov    %eax,(%esp)
081b92b1 +0x0ab8:  call   081b8bde <+0x3e5>
081b92b6 +0x0abd:  test   %al,%al
081b92b8 +0x0abf:  jne    081b92df <+0xae6>
081b92ba +0x0ac1:  mov    -0x10(%ebp),%eax
081b92bd +0x0ac4:  mov    %eax,(%esp)
081b92c0 +0x0ac7:  call   081b976e <+0xf75>
081b92c5 +0x0acc:  mov    0xc(%ebp),%edx
081b92c8 +0x0acf:  mov    %eax,0x8(%esp)
081b92cc +0x0ad3:  mov    0x10(%ebp),%eax
081b92cf +0x0ad6:  mov    %eax,0x4(%esp)
081b92d3 +0x0ada:  mov    %edx,(%esp)
081b92d6 +0x0add:  call   081b9790 <+0xf97>
081b92db +0x0ae2:  test   %al,%al
081b92dd +0x0ae4:  je     081b92f3 <+0xafa>
081b92df +0x0ae6:  mov    0xc(%ebp),%eax
081b92e2 +0x0ae9:  mov    %eax,0x4(%esp)
081b92e6 +0x0aed:  mov    %ebx,(%esp)
081b92e9 +0x0af0:  call   081b916c <+0x973>
081b92ee +0x0af5:  sub    $0x4,%esp
081b92f1 +0x0af8:  jmp    081b92f8 <+0xaff>
081b92f3 +0x0afa:  mov    -0x10(%ebp),%eax
081b92f6 +0x0afd:  mov    %eax,(%ebx)
081b92f8 +0x0aff:  mov    %ebx,%eax
081b92fa +0x0b01:  lea    -0x8(%ebp),%esp
081b92fd +0x0b04:  add    $0x0,%esp
081b9300 +0x0b07:  pop    %ebx
081b9301 +0x0b08:  pop    %esi
081b9302 +0x0b09:  pop    %ebp
081b9303 +0x0b0a:  ret    $0x4
081b9306 +0x0b0d:  push   %ebp
081b9307 +0x0b0e:  mov    %esp,%ebp
081b9309 +0x0b10:  mov    0x8(%ebp),%eax
081b930c +0x0b13:  mov    0x8(%eax),%eax
081b930f +0x0b16:  pop    %ebp
081b9310 +0x0b17:  ret
081b9311 +0x0b18:  nop
081b9312 +0x0b19:  push   %ebp
081b9313 +0x0b1a:  mov    %esp,%ebp
081b9315 +0x0b1c:  sub    $0x18,%esp
081b9318 +0x0b1f:  mov    0x8(%ebp),%eax
081b931b +0x0b22:  mov    %eax,(%esp)
081b931e +0x0b25:  call   081b97f0 <+0xff7>
081b9323 +0x0b2a:  leave
081b9324 +0x0b2b:  ret
081b9325 +0x0b2c:  nop
081b9326 +0x0b2d:  push   %ebp
081b9327 +0x0b2e:  mov    %esp,%ebp
081b9329 +0x0b30:  sub    $0x18,%esp
081b932c +0x0b33:  mov    0x8(%ebp),%eax
081b932f +0x0b36:  mov    %eax,(%esp)
081b9332 +0x0b39:  call   081b97c0 <+0xfc7>
081b9337 +0x0b3e:  leave
081b9338 +0x0b3f:  ret
081b9339 +0x0b40:  nop
081b933a +0x0b41:  push   %ebp
081b933b +0x0b42:  mov    %esp,%ebp
081b933d +0x0b44:  push   %esi
081b933e +0x0b45:  push   %ebx
081b933f +0x0b46:  sub    $0x10,%esp
081b9342 +0x0b49:  mov    0x8(%ebp),%eax
081b9345 +0x0b4c:  mov    0x8(%eax),%eax
081b9348 +0x0b4f:  mov    %eax,%edx
081b934a +0x0b51:  mov    0x8(%ebp),%eax
081b934d +0x0b54:  mov    (%eax),%eax
081b934f +0x0b56:  mov    %edx,%ecx
081b9351 +0x0b58:  sub    %eax,%ecx
081b9353 +0x0b5a:  mov    %ecx,%eax
081b9355 +0x0b5c:  sar    $0x3,%eax
081b9358 +0x0b5f:  mov    %eax,%edx
081b935a +0x0b61:  mov    0x8(%ebp),%eax
081b935d +0x0b64:  mov    (%eax),%eax
081b935f +0x0b66:  mov    %edx,0x8(%esp)
081b9363 +0x0b6a:  mov    %eax,0x4(%esp)
081b9367 +0x0b6e:  mov    0x8(%ebp),%eax
081b936a +0x0b71:  mov    %eax,(%esp)
081b936d +0x0b74:  call   081b9698 <+0xe9f>
081b9372 +0x0b79:  jmp    081b938f <+0xb96>
081b9374 +0x0b7b:  mov    %edx,%ebx
081b9376 +0x0b7d:  mov    %eax,%esi
081b9378 +0x0b7f:  mov    0x8(%ebp),%eax
081b937b +0x0b82:  mov    %eax,(%esp)
081b937e +0x0b85:  call   081b9312 <+0xb19>
081b9383 +0x0b8a:  mov    %esi,%eax
081b9385 +0x0b8c:  mov    %ebx,%edx
081b9387 +0x0b8e:  mov    %eax,(%esp)
081b938a +0x0b91:  call   08ae3750 <_Unwind_Resume>
081b938f +0x0b96:  mov    0x8(%ebp),%eax
081b9392 +0x0b99:  mov    %eax,(%esp)
081b9395 +0x0b9c:  call   081b9312 <+0xb19>
081b939a +0x0ba1:  add    $0x10,%esp
081b939d +0x0ba4:  pop    %ebx
081b939e +0x0ba5:  pop    %esi
081b939f +0x0ba6:  pop    %ebp
081b93a0 +0x0ba7:  ret
081b93a1 +0x0ba8:  nop
081b93a2 +0x0ba9:  push   %ebp
081b93a3 +0x0baa:  mov    %esp,%ebp
081b93a5 +0x0bac:  mov    0x8(%ebp),%eax
081b93a8 +0x0baf:  pop    %ebp
081b93a9 +0x0bb0:  ret
081b93aa +0x0bb1:  push   %ebp
081b93ab +0x0bb2:  mov    %esp,%ebp
081b93ad +0x0bb4:  sub    $0x18,%esp
081b93b0 +0x0bb7:  mov    0xc(%ebp),%eax
081b93b3 +0x0bba:  mov    %eax,0x4(%esp)
081b93b7 +0x0bbe:  mov    0x8(%ebp),%eax
081b93ba +0x0bc1:  mov    %eax,(%esp)
081b93bd +0x0bc4:  call   081b9803 <+0x100a>
081b93c2 +0x0bc9:  leave
081b93c3 +0x0bca:  ret
081b93c4 +0x0bcb:  push   %ebp
081b93c5 +0x0bcc:  mov    %esp,%ebp
081b93c7 +0x0bce:  push   %esi
081b93c8 +0x0bcf:  push   %ebx
081b93c9 +0x0bd0:  sub    $0x30,%esp
081b93cc +0x0bd3:  mov    0x8(%ebp),%esi
081b93cf +0x0bd6:  mov    0xc(%ebp),%eax
081b93d2 +0x0bd9:  mov    %eax,(%esp)
081b93d5 +0x0bdc:  call   080c70d6 <_GLOBAL__I_g_ServerString_+0x641>  ; global constructors keyed to g_ServerString_+0x641
081b93da +0x0be1:  mov    %eax,-0x10(%ebp)
081b93dd +0x0be4:  mov    0xc(%ebp),%eax
081b93e0 +0x0be7:  mov    %eax,(%esp)
081b93e3 +0x0bea:  call   080c7862 <_GLOBAL__I_g_ServerString_+0xdcd>  ; global constructors keyed to g_ServerString_+0xdcd
081b93e8 +0x0bef:  mov    %eax,-0xc(%ebp)
081b93eb +0x0bf2:  jmp    081b9444 <+0xc4b>
081b93ed +0x0bf4:  mov    -0x10(%ebp),%eax
081b93f0 +0x0bf7:  mov    %eax,-0xc(%ebp)
081b93f3 +0x0bfa:  mov    -0x10(%ebp),%eax
081b93f6 +0x0bfd:  mov    %eax,(%esp)
081b93f9 +0x0c00:  call   080c789a <_GLOBAL__I_g_ServerString_+0xe05>  ; global constructors keyed to g_ServerString_+0xe05
081b93fe +0x0c05:  mov    %eax,%ebx
081b9400 +0x0c07:  mov    0x10(%ebp),%eax
081b9403 +0x0c0a:  mov    %eax,0x4(%esp)
081b9407 +0x0c0e:  lea    -0x11(%ebp),%eax
081b940a +0x0c11:  mov    %eax,(%esp)
081b940d +0x0c14:  call   080c7892 <_GLOBAL__I_g_ServerString_+0xdfd>  ; global constructors keyed to g_ServerString_+0xdfd
081b9412 +0x0c19:  mov    0xc(%ebp),%edx
081b9415 +0x0c1c:  mov    %ebx,0x8(%esp)
081b9419 +0x0c20:  mov    %eax,0x4(%esp)
081b941d +0x0c24:  mov    %edx,(%esp)
081b9420 +0x0c27:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
081b9425 +0x0c2c:  test   %al,%al
081b9427 +0x0c2e:  je     081b9436 <+0xc3d>
081b9429 +0x0c30:  mov    -0x10(%ebp),%eax
081b942c +0x0c33:  mov    %eax,(%esp)
081b942f +0x0c36:  call   080c7822 <_GLOBAL__I_g_ServerString_+0xd8d>  ; global constructors keyed to g_ServerString_+0xd8d
081b9434 +0x0c3b:  jmp    081b9441 <+0xc48>
081b9436 +0x0c3d:  mov    -0x10(%ebp),%eax
081b9439 +0x0c40:  mov    %eax,(%esp)
081b943c +0x0c43:  call   080c7817 <_GLOBAL__I_g_ServerString_+0xd82>  ; global constructors keyed to g_ServerString_+0xd82
081b9441 +0x0c48:  mov    %eax,-0x10(%ebp)
081b9444 +0x0c4b:  cmpl   $0x0,-0x10(%ebp)
081b9448 +0x0c4f:  setne  %al
081b944b +0x0c52:  test   %al,%al
081b944d +0x0c54:  jne    081b93ed <+0xbf4>
081b944f +0x0c56:  mov    -0xc(%ebp),%edx
081b9452 +0x0c59:  mov    -0x10(%ebp),%eax
081b9455 +0x0c5c:  mov    0x10(%ebp),%ecx
081b9458 +0x0c5f:  mov    %ecx,0x10(%esp)
081b945c +0x0c63:  mov    %edx,0xc(%esp)
081b9460 +0x0c67:  mov    %eax,0x8(%esp)
081b9464 +0x0c6b:  mov    0xc(%ebp),%eax
081b9467 +0x0c6e:  mov    %eax,0x4(%esp)
081b946b +0x0c72:  mov    %esi,(%esp)
081b946e +0x0c75:  call   080c7904 <_GLOBAL__I_g_ServerString_+0xe6f>  ; global constructors keyed to g_ServerString_+0xe6f
081b9473 +0x0c7a:  sub    $0x4,%esp
081b9476 +0x0c7d:  mov    %esi,%eax
081b9478 +0x0c7f:  lea    -0x8(%ebp),%esp
081b947b +0x0c82:  add    $0x0,%esp
081b947e +0x0c85:  pop    %ebx
081b947f +0x0c86:  pop    %esi
081b9480 +0x0c87:  pop    %ebp
081b9481 +0x0c88:  ret    $0x4
081b9484 +0x0c8b:  push   %ebp
081b9485 +0x0c8c:  mov    %esp,%ebp
081b9487 +0x0c8e:  mov    0xc(%ebp),%eax
081b948a +0x0c91:  mov    (%eax),%edx
081b948c +0x0c93:  mov    0x8(%ebp),%eax
081b948f +0x0c96:  mov    %edx,(%eax)
081b9491 +0x0c98:  pop    %ebp
081b9492 +0x0c99:  ret
081b9493 +0x0c9a:  nop
081b9494 +0x0c9b:  push   %ebp
081b9495 +0x0c9c:  mov    %esp,%ebp
081b9497 +0x0c9e:  mov    0x8(%ebp),%eax
081b949a +0x0ca1:  pop    %ebp
081b949b +0x0ca2:  ret
081b949c +0x0ca3:  push   %ebp
081b949d +0x0ca4:  mov    %esp,%ebp
081b949f +0x0ca6:  mov    0x8(%ebp),%eax
081b94a2 +0x0ca9:  pop    %ebp
081b94a3 +0x0caa:  ret
081b94a4 +0x0cab:  push   %ebp
081b94a5 +0x0cac:  mov    %esp,%ebp
081b94a7 +0x0cae:  push   %ebx
081b94a8 +0x0caf:  sub    $0x14,%esp
081b94ab +0x0cb2:  mov    0x10(%ebp),%eax
081b94ae +0x0cb5:  mov    %eax,(%esp)
081b94b1 +0x0cb8:  call   081b981d <+0x1024>
081b94b6 +0x0cbd:  mov    %eax,%ebx
081b94b8 +0x0cbf:  mov    0xc(%ebp),%eax
081b94bb +0x0cc2:  mov    %eax,0x4(%esp)
081b94bf +0x0cc6:  movl   $0x8,(%esp)
081b94c6 +0x0ccd:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
081b94cb +0x0cd2:  mov    %eax,%edx
081b94cd +0x0cd4:  test   %edx,%edx
081b94cf +0x0cd6:  je     081b94dd <+0xce4>
081b94d1 +0x0cd8:  mov    %eax,%ecx
081b94d3 +0x0cda:  mov    (%ebx),%eax
081b94d5 +0x0cdc:  mov    0x4(%ebx),%edx
081b94d8 +0x0cdf:  mov    %eax,(%ecx)
081b94da +0x0ce1:  mov    %edx,0x4(%ecx)
081b94dd +0x0ce4:  add    $0x14,%esp
081b94e0 +0x0ce7:  pop    %ebx
081b94e1 +0x0ce8:  pop    %ebp
081b94e2 +0x0ce9:  ret
081b94e3 +0x0cea:  push   %ebp
081b94e4 +0x0ceb:  mov    %esp,%ebp
081b94e6 +0x0ced:  push   %ebx
081b94e7 +0x0cee:  sub    $0x14,%esp
081b94ea +0x0cf1:  mov    0xc(%ebp),%eax
081b94ed +0x0cf4:  mov    %eax,(%esp)
081b94f0 +0x0cf7:  call   081b9825 <+0x102c>
081b94f5 +0x0cfc:  mov    %eax,%ebx
081b94f7 +0x0cfe:  mov    0x8(%ebp),%eax
081b94fa +0x0d01:  mov    %eax,(%esp)
081b94fd +0x0d04:  call   081b9825 <+0x102c>
081b9502 +0x0d09:  mov    0x10(%ebp),%edx
081b9505 +0x0d0c:  mov    %edx,0x8(%esp)
081b9509 +0x0d10:  mov    %ebx,0x4(%esp)
081b950d +0x0d14:  mov    %eax,(%esp)
081b9510 +0x0d17:  call   081b982d <+0x1034>
081b9515 +0x0d1c:  add    $0x14,%esp
081b9518 +0x0d1f:  pop    %ebx
081b9519 +0x0d20:  pop    %ebp
081b951a +0x0d21:  ret
081b951b +0x0d22:  push   %ebp
081b951c +0x0d23:  mov    %esp,%ebp
081b951e +0x0d25:  mov    0x8(%ebp),%eax
081b9521 +0x0d28:  pop    %ebp
081b9522 +0x0d29:  ret
081b9523 +0x0d2a:  nop
081b9524 +0x0d2b:  push   %ebp
081b9525 +0x0d2c:  mov    %esp,%ebp
081b9527 +0x0d2e:  push   %ebx
081b9528 +0x0d2f:  sub    $0x24,%esp
081b952b +0x0d32:  mov    0x8(%ebp),%eax
081b952e +0x0d35:  mov    %eax,(%esp)
081b9531 +0x0d38:  call   081b988e <+0x1095>
081b9536 +0x0d3d:  mov    %eax,%ebx
081b9538 +0x0d3f:  mov    0x8(%ebp),%eax
081b953b +0x0d42:  mov    %eax,(%esp)
081b953e +0x0d45:  call   081b9872 <+0x1079>
081b9543 +0x0d4a:  mov    %ebx,%edx
081b9545 +0x0d4c:  sub    %eax,%edx
081b9547 +0x0d4e:  mov    0xc(%ebp),%eax
081b954a +0x0d51:  cmp    %eax,%edx
081b954c +0x0d53:  setb   %al
081b954f +0x0d56:  test   %al,%al
081b9551 +0x0d58:  je     081b955e <+0xd65>
081b9553 +0x0d5a:  mov    0x10(%ebp),%eax
081b9556 +0x0d5d:  mov    %eax,(%esp)
081b9559 +0x0d60:  call   086d9c40 <_ZSt20__throw_length_errorPKc>  ; std::__throw_length_error(char const*)
081b955e +0x0d65:  mov    0x8(%ebp),%eax
081b9561 +0x0d68:  mov    %eax,(%esp)
081b9564 +0x0d6b:  call   081b9872 <+0x1079>
081b9569 +0x0d70:  mov    %eax,%ebx
081b956b +0x0d72:  mov    0x8(%ebp),%eax
081b956e +0x0d75:  mov    %eax,(%esp)
081b9571 +0x0d78:  call   081b9872 <+0x1079>
081b9576 +0x0d7d:  mov    %eax,-0x10(%ebp)
081b9579 +0x0d80:  lea    0xc(%ebp),%eax
081b957c +0x0d83:  mov    %eax,0x4(%esp)
081b9580 +0x0d87:  lea    -0x10(%ebp),%eax
081b9583 +0x0d8a:  mov    %eax,(%esp)
081b9586 +0x0d8d:  call   0807f531 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x601>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x601
081b958b +0x0d92:  mov    (%eax),%eax
081b958d +0x0d94:  lea    (%ebx,%eax,1),%eax
081b9590 +0x0d97:  mov    %eax,-0xc(%ebp)
081b9593 +0x0d9a:  mov    0x8(%ebp),%eax
081b9596 +0x0d9d:  mov    %eax,(%esp)
081b9599 +0x0da0:  call   081b9872 <+0x1079>
081b959e +0x0da5:  cmp    -0xc(%ebp),%eax
081b95a1 +0x0da8:  ja     081b95b3 <+0xdba>
081b95a3 +0x0daa:  mov    0x8(%ebp),%eax
081b95a6 +0x0dad:  mov    %eax,(%esp)
081b95a9 +0x0db0:  call   081b988e <+0x1095>
081b95ae +0x0db5:  cmp    -0xc(%ebp),%eax
081b95b1 +0x0db8:  jae    081b95c0 <+0xdc7>
081b95b3 +0x0dba:  mov    0x8(%ebp),%eax
081b95b6 +0x0dbd:  mov    %eax,(%esp)
081b95b9 +0x0dc0:  call   081b988e <+0x1095>
081b95be +0x0dc5:  jmp    081b95c3 <+0xdca>
081b95c0 +0x0dc7:  mov    -0xc(%ebp),%eax
081b95c3 +0x0dca:  add    $0x24,%esp
081b95c6 +0x0dcd:  pop    %ebx
081b95c7 +0x0dce:  pop    %ebp
081b95c8 +0x0dcf:  ret
081b95c9 +0x0dd0:  push   %ebp
081b95ca +0x0dd1:  mov    %esp,%ebp
081b95cc +0x0dd3:  push   %ebx
081b95cd +0x0dd4:  sub    $0x14,%esp
081b95d0 +0x0dd7:  mov    0x8(%ebp),%eax
081b95d3 +0x0dda:  mov    %eax,(%esp)
081b95d6 +0x0ddd:  call   081b9494 <+0xc9b>
081b95db +0x0de2:  mov    (%eax),%eax
081b95dd +0x0de4:  mov    %eax,%ebx
081b95df +0x0de6:  mov    0xc(%ebp),%eax
081b95e2 +0x0de9:  mov    %eax,(%esp)
081b95e5 +0x0dec:  call   081b9494 <+0xc9b>
081b95ea +0x0df1:  mov    (%eax),%eax
081b95ec +0x0df3:  mov    %ebx,%edx
081b95ee +0x0df5:  sub    %eax,%edx
081b95f0 +0x0df7:  mov    %edx,%eax
081b95f2 +0x0df9:  sar    $0x3,%eax
081b95f5 +0x0dfc:  add    $0x14,%esp
081b95f8 +0x0dff:  pop    %ebx
081b95f9 +0x0e00:  pop    %ebp
081b95fa +0x0e01:  ret
081b95fb +0x0e02:  nop
081b95fc +0x0e03:  push   %ebp
081b95fd +0x0e04:  mov    %esp,%ebp
081b95ff +0x0e06:  sub    $0x18,%esp
081b9602 +0x0e09:  cmpl   $0x0,0xc(%ebp)
081b9606 +0x0e0d:  je     081b9624 <+0xe2b>
081b9608 +0x0e0f:  mov    0x8(%ebp),%eax
081b960b +0x0e12:  movl   $0x0,0x8(%esp)
081b9613 +0x0e1a:  mov    0xc(%ebp),%edx
081b9616 +0x0e1d:  mov    %edx,0x4(%esp)
081b961a +0x0e21:  mov    %eax,(%esp)
081b961d +0x0e24:  call   081b98aa <+0x10b1>
081b9622 +0x0e29:  jmp    081b9629 <+0xe30>
081b9624 +0x0e2b:  mov    $0x0,%eax
081b9629 +0x0e30:  leave
081b962a +0x0e31:  ret
081b962b +0x0e32:  push   %ebp
081b962c +0x0e33:  mov    %esp,%ebp
081b962e +0x0e35:  sub    $0x28,%esp
081b9631 +0x0e38:  lea    -0x10(%ebp),%eax
081b9634 +0x0e3b:  lea    0xc(%ebp),%edx
081b9637 +0x0e3e:  mov    %edx,0x4(%esp)
081b963b +0x0e42:  mov    %eax,(%esp)
081b963e +0x0e45:  call   081b98e2 <+0x10e9>
081b9643 +0x0e4a:  sub    $0x4,%esp
081b9646 +0x0e4d:  lea    -0xc(%ebp),%eax
081b9649 +0x0e50:  lea    0x8(%ebp),%edx
081b964c +0x0e53:  mov    %edx,0x4(%esp)
081b9650 +0x0e57:  mov    %eax,(%esp)
081b9653 +0x0e5a:  call   081b98e2 <+0x10e9>
081b9658 +0x0e5f:  sub    $0x4,%esp
081b965b +0x0e62:  mov    0x14(%ebp),%eax
081b965e +0x0e65:  mov    %eax,0xc(%esp)
081b9662 +0x0e69:  mov    0x10(%ebp),%eax
081b9665 +0x0e6c:  mov    %eax,0x8(%esp)
081b9669 +0x0e70:  mov    -0x10(%ebp),%eax
081b966c +0x0e73:  mov    %eax,0x4(%esp)
081b9670 +0x0e77:  mov    -0xc(%ebp),%eax
081b9673 +0x0e7a:  mov    %eax,(%esp)
081b9676 +0x0e7d:  call   081b9907 <+0x110e>
081b967b +0x0e82:  leave
081b967c +0x0e83:  ret
081b967d +0x0e84:  nop
081b967e +0x0e85:  push   %ebp
081b967f +0x0e86:  mov    %esp,%ebp
081b9681 +0x0e88:  pop    %ebp
081b9682 +0x0e89:  ret
081b9683 +0x0e8a:  nop
081b9684 +0x0e8b:  push   %ebp
081b9685 +0x0e8c:  mov    %esp,%ebp
081b9687 +0x0e8e:  sub    $0x18,%esp
081b968a +0x0e91:  mov    0xc(%ebp),%eax
081b968d +0x0e94:  mov    %eax,(%esp)
081b9690 +0x0e97:  call   081b967e <+0xe85>
081b9695 +0x0e9c:  leave
081b9696 +0x0e9d:  ret
081b9697 +0x0e9e:  nop
081b9698 +0x0e9f:  push   %ebp
081b9699 +0x0ea0:  mov    %esp,%ebp
081b969b +0x0ea2:  sub    $0x18,%esp
081b969e +0x0ea5:  cmpl   $0x0,0xc(%ebp)
081b96a2 +0x0ea9:  je     081b96bd <+0xec4>
081b96a4 +0x0eab:  mov    0x8(%ebp),%eax
081b96a7 +0x0eae:  mov    0x10(%ebp),%edx
081b96aa +0x0eb1:  mov    %edx,0x8(%esp)
081b96ae +0x0eb5:  mov    0xc(%ebp),%edx
081b96b1 +0x0eb8:  mov    %edx,0x4(%esp)
081b96b5 +0x0ebc:  mov    %eax,(%esp)
081b96b8 +0x0ebf:  call   081b9928 <+0x112f>
081b96bd +0x0ec4:  leave
081b96be +0x0ec5:  ret
081b96bf +0x0ec6:  nop
081b96c0 +0x0ec7:  push   %ebp
081b96c1 +0x0ec8:  mov    %esp,%ebp
081b96c3 +0x0eca:  mov    0xc(%ebp),%edx
081b96c6 +0x0ecd:  mov    0x8(%ebp),%eax
081b96c9 +0x0ed0:  mov    %edx,(%eax)
081b96cb +0x0ed2:  pop    %ebp
081b96cc +0x0ed3:  ret
081b96cd +0x0ed4:  nop
081b96ce +0x0ed5:  push   %ebp
081b96cf +0x0ed6:  mov    %esp,%ebp
081b96d1 +0x0ed8:  mov    0xc(%ebp),%eax
081b96d4 +0x0edb:  mov    (%eax),%edx
081b96d6 +0x0edd:  mov    0x8(%ebp),%eax
081b96d9 +0x0ee0:  mov    %edx,(%eax)
081b96db +0x0ee2:  pop    %ebp
081b96dc +0x0ee3:  ret
081b96dd +0x0ee4:  nop
081b96de +0x0ee5:  push   %ebp
081b96df +0x0ee6:  mov    %esp,%ebp
081b96e1 +0x0ee8:  mov    0x8(%ebp),%eax
081b96e4 +0x0eeb:  pop    %ebp
081b96e5 +0x0eec:  ret
081b96e6 +0x0eed:  push   %ebp
081b96e7 +0x0eee:  mov    %esp,%ebp
081b96e9 +0x0ef0:  mov    0x8(%ebp),%eax
081b96ec +0x0ef3:  add    $0x4,%eax
081b96ef +0x0ef6:  pop    %ebp
081b96f0 +0x0ef7:  ret
081b96f1 +0x0ef8:  nop
081b96f2 +0x0ef9:  push   %ebp
081b96f3 +0x0efa:  mov    %esp,%ebp
081b96f5 +0x0efc:  push   %ebx
081b96f6 +0x0efd:  sub    $0x14,%esp
081b96f9 +0x0f00:  mov    0x8(%ebp),%ebx
081b96fc +0x0f03:  jmp    081b974a <+0xf51>
081b96fe +0x0f05:  mov    0x10(%ebp),%eax
081b9701 +0x0f08:  mov    %eax,(%esp)
081b9704 +0x0f0b:  call   081b993b <+0x1142>
081b9709 +0x0f10:  mov    0xc(%ebp),%edx
081b970c +0x0f13:  mov    0x18(%ebp),%ecx
081b970f +0x0f16:  mov    %ecx,0x8(%esp)
081b9713 +0x0f1a:  mov    %eax,0x4(%esp)
081b9717 +0x0f1e:  mov    %edx,(%esp)
081b971a +0x0f21:  call   081b9790 <+0xf97>
081b971f +0x0f26:  xor    $0x1,%eax
081b9722 +0x0f29:  test   %al,%al
081b9724 +0x0f2b:  je     081b973c <+0xf43>
081b9726 +0x0f2d:  mov    0x10(%ebp),%eax
081b9729 +0x0f30:  mov    %eax,0x14(%ebp)
081b972c +0x0f33:  mov    0x10(%ebp),%eax
081b972f +0x0f36:  mov    %eax,(%esp)
081b9732 +0x0f39:  call   081b97b5 <+0xfbc>
081b9737 +0x0f3e:  mov    %eax,0x10(%ebp)
081b973a +0x0f41:  jmp    081b974a <+0xf51>
081b973c +0x0f43:  mov    0x10(%ebp),%eax
081b973f +0x0f46:  mov    %eax,(%esp)
081b9742 +0x0f49:  call   081b97aa <+0xfb1>
081b9747 +0x0f4e:  mov    %eax,0x10(%ebp)
081b974a +0x0f51:  cmpl   $0x0,0x10(%ebp)
081b974e +0x0f55:  setne  %al
081b9751 +0x0f58:  test   %al,%al
081b9753 +0x0f5a:  jne    081b96fe <+0xf05>
081b9755 +0x0f5c:  mov    0x14(%ebp),%eax
081b9758 +0x0f5f:  mov    %eax,0x4(%esp)
081b975c +0x0f63:  mov    %ebx,(%esp)
081b975f +0x0f66:  call   081b96c0 <+0xec7>
081b9764 +0x0f6b:  mov    %ebx,%eax
081b9766 +0x0f6d:  add    $0x14,%esp
081b9769 +0x0f70:  pop    %ebx
081b976a +0x0f71:  pop    %ebp
081b976b +0x0f72:  ret    $0x4
081b976e +0x0f75:  push   %ebp
081b976f +0x0f76:  mov    %esp,%ebp
081b9771 +0x0f78:  sub    $0x28,%esp
081b9774 +0x0f7b:  mov    0x8(%ebp),%eax
081b9777 +0x0f7e:  mov    %eax,(%esp)
081b977a +0x0f81:  call   081b995d <+0x1164>
081b977f +0x0f86:  mov    %eax,0x4(%esp)
081b9783 +0x0f8a:  lea    -0x9(%ebp),%eax
081b9786 +0x0f8d:  mov    %eax,(%esp)
081b9789 +0x0f90:  call   081b9968 <+0x116f>
081b978e +0x0f95:  leave
081b978f +0x0f96:  ret
081b9790 +0x0f97:  push   %ebp
081b9791 +0x0f98:  mov    %esp,%ebp
081b9793 +0x0f9a:  sub    $0x18,%esp
081b9796 +0x0f9d:  mov    0x10(%ebp),%eax
081b9799 +0x0fa0:  mov    %eax,0x4(%esp)
081b979d +0x0fa4:  mov    0xc(%ebp),%eax
081b97a0 +0x0fa7:  mov    %eax,(%esp)
081b97a3 +0x0faa:  call   081b8830 <+0x37>
081b97a8 +0x0faf:  leave
081b97a9 +0x0fb0:  ret
081b97aa +0x0fb1:  push   %ebp
081b97ab +0x0fb2:  mov    %esp,%ebp
081b97ad +0x0fb4:  mov    0x8(%ebp),%eax
081b97b0 +0x0fb7:  mov    0xc(%eax),%eax
081b97b3 +0x0fba:  pop    %ebp
081b97b4 +0x0fbb:  ret
081b97b5 +0x0fbc:  push   %ebp
081b97b6 +0x0fbd:  mov    %esp,%ebp
081b97b8 +0x0fbf:  mov    0x8(%ebp),%eax
081b97bb +0x0fc2:  mov    0x8(%eax),%eax
081b97be +0x0fc5:  pop    %ebp
081b97bf +0x0fc6:  ret
081b97c0 +0x0fc7:  push   %ebp
081b97c1 +0x0fc8:  mov    %esp,%ebp
081b97c3 +0x0fca:  sub    $0x18,%esp
081b97c6 +0x0fcd:  mov    0x8(%ebp),%eax
081b97c9 +0x0fd0:  mov    %eax,(%esp)
081b97cc +0x0fd3:  call   081b9970 <+0x1177>
081b97d1 +0x0fd8:  mov    0x8(%ebp),%eax
081b97d4 +0x0fdb:  movl   $0x0,(%eax)
081b97da +0x0fe1:  mov    0x8(%ebp),%eax
081b97dd +0x0fe4:  movl   $0x0,0x4(%eax)
081b97e4 +0x0feb:  mov    0x8(%ebp),%eax
081b97e7 +0x0fee:  movl   $0x0,0x8(%eax)
081b97ee +0x0ff5:  leave
081b97ef +0x0ff6:  ret
081b97f0 +0x0ff7:  push   %ebp
081b97f1 +0x0ff8:  mov    %esp,%ebp
081b97f3 +0x0ffa:  sub    $0x18,%esp
081b97f6 +0x0ffd:  mov    0x8(%ebp),%eax
081b97f9 +0x1000:  mov    %eax,(%esp)
081b97fc +0x1003:  call   081b9984 <+0x118b>
081b9801 +0x1008:  leave
081b9802 +0x1009:  ret
081b9803 +0x100a:  push   %ebp
081b9804 +0x100b:  mov    %esp,%ebp
081b9806 +0x100d:  sub    $0x18,%esp
081b9809 +0x1010:  mov    0xc(%ebp),%eax
081b980c +0x1013:  mov    %eax,0x4(%esp)
081b9810 +0x1017:  mov    0x8(%ebp),%eax
081b9813 +0x101a:  mov    %eax,(%esp)
081b9816 +0x101d:  call   081b9989 <+0x1190>
081b981b +0x1022:  leave
081b981c +0x1023:  ret
081b981d +0x1024:  push   %ebp
081b981e +0x1025:  mov    %esp,%ebp
081b9820 +0x1027:  mov    0x8(%ebp),%eax
081b9823 +0x102a:  pop    %ebp
081b9824 +0x102b:  ret
081b9825 +0x102c:  push   %ebp
081b9826 +0x102d:  mov    %esp,%ebp
081b9828 +0x102f:  mov    0x8(%ebp),%eax
081b982b +0x1032:  pop    %ebp
081b982c +0x1033:  ret
081b982d +0x1034:  push   %ebp
081b982e +0x1035:  mov    %esp,%ebp
081b9830 +0x1037:  push   %esi
081b9831 +0x1038:  push   %ebx
081b9832 +0x1039:  sub    $0x10,%esp
081b9835 +0x103c:  mov    0x10(%ebp),%eax
081b9838 +0x103f:  mov    %eax,(%esp)
081b983b +0x1042:  call   081b998e <+0x1195>
081b9840 +0x1047:  mov    %eax,%esi
081b9842 +0x1049:  mov    0xc(%ebp),%eax
081b9845 +0x104c:  mov    %eax,(%esp)
081b9848 +0x104f:  call   081b998e <+0x1195>
081b984d +0x1054:  mov    %eax,%ebx
081b984f +0x1056:  mov    0x8(%ebp),%eax
081b9852 +0x1059:  mov    %eax,(%esp)
081b9855 +0x105c:  call   081b998e <+0x1195>
081b985a +0x1061:  mov    %esi,0x8(%esp)
081b985e +0x1065:  mov    %ebx,0x4(%esp)
081b9862 +0x1069:  mov    %eax,(%esp)
081b9865 +0x106c:  call   081b9996 <+0x119d>
081b986a +0x1071:  add    $0x10,%esp
081b986d +0x1074:  pop    %ebx
081b986e +0x1075:  pop    %esi
081b986f +0x1076:  pop    %ebp
081b9870 +0x1077:  ret
081b9871 +0x1078:  nop
081b9872 +0x1079:  push   %ebp
081b9873 +0x107a:  mov    %esp,%ebp
081b9875 +0x107c:  mov    0x8(%ebp),%eax
081b9878 +0x107f:  mov    0x4(%eax),%eax
081b987b +0x1082:  mov    %eax,%edx
081b987d +0x1084:  mov    0x8(%ebp),%eax
081b9880 +0x1087:  mov    (%eax),%eax
081b9882 +0x1089:  mov    %edx,%ecx
081b9884 +0x108b:  sub    %eax,%ecx
081b9886 +0x108d:  mov    %ecx,%eax
081b9888 +0x108f:  sar    $0x3,%eax
081b988b +0x1092:  pop    %ebp
081b988c +0x1093:  ret
081b988d +0x1094:  nop
081b988e +0x1095:  push   %ebp
081b988f +0x1096:  mov    %esp,%ebp
081b9891 +0x1098:  sub    $0x18,%esp
081b9894 +0x109b:  mov    0x8(%ebp),%eax
081b9897 +0x109e:  mov    %eax,(%esp)
081b989a +0x10a1:  call   081b99bc <+0x11c3>
081b989f +0x10a6:  mov    %eax,(%esp)
081b98a2 +0x10a9:  call   081b99c4 <+0x11cb>
081b98a7 +0x10ae:  leave
081b98a8 +0x10af:  ret
081b98a9 +0x10b0:  nop
081b98aa +0x10b1:  push   %ebp
081b98ab +0x10b2:  mov    %esp,%ebp
081b98ad +0x10b4:  sub    $0x18,%esp
081b98b0 +0x10b7:  mov    0x8(%ebp),%eax
081b98b3 +0x10ba:  mov    %eax,(%esp)
081b98b6 +0x10bd:  call   081b99c4 <+0x11cb>
081b98bb +0x10c2:  cmp    0xc(%ebp),%eax
081b98be +0x10c5:  setb   %al
081b98c1 +0x10c8:  movzbl %al,%eax
081b98c4 +0x10cb:  test   %eax,%eax
081b98c6 +0x10cd:  setne  %al
081b98c9 +0x10d0:  test   %al,%al
081b98cb +0x10d2:  je     081b98d2 <+0x10d9>
081b98cd +0x10d4:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
081b98d2 +0x10d9:  mov    0xc(%ebp),%eax
081b98d5 +0x10dc:  shl    $0x3,%eax
081b98d8 +0x10df:  mov    %eax,(%esp)
081b98db +0x10e2:  call   08724450 <_Znwj>  ; operator new(unsigned int)
081b98e0 +0x10e7:  leave
081b98e1 +0x10e8:  ret
081b98e2 +0x10e9:  push   %ebp
081b98e3 +0x10ea:  mov    %esp,%ebp
081b98e5 +0x10ec:  push   %ebx
081b98e6 +0x10ed:  sub    $0x14,%esp
081b98e9 +0x10f0:  mov    0x8(%ebp),%ebx
081b98ec +0x10f3:  mov    0xc(%ebp),%eax
081b98ef +0x10f6:  mov    (%eax),%eax
081b98f1 +0x10f8:  mov    %eax,0x4(%esp)
081b98f5 +0x10fc:  mov    %ebx,(%esp)
081b98f8 +0x10ff:  call   081b99ce <+0x11d5>
081b98fd +0x1104:  mov    %ebx,%eax
081b98ff +0x1106:  add    $0x14,%esp
081b9902 +0x1109:  pop    %ebx
081b9903 +0x110a:  pop    %ebp
081b9904 +0x110b:  ret    $0x4
081b9907 +0x110e:  push   %ebp
081b9908 +0x110f:  mov    %esp,%ebp
081b990a +0x1111:  sub    $0x18,%esp
081b990d +0x1114:  mov    0x10(%ebp),%eax
081b9910 +0x1117:  mov    %eax,0x8(%esp)
081b9914 +0x111b:  mov    0xc(%ebp),%eax
081b9917 +0x111e:  mov    %eax,0x4(%esp)
081b991b +0x1122:  mov    0x8(%ebp),%eax
081b991e +0x1125:  mov    %eax,(%esp)
081b9921 +0x1128:  call   081b99db <+0x11e2>
081b9926 +0x112d:  leave
081b9927 +0x112e:  ret
081b9928 +0x112f:  push   %ebp
081b9929 +0x1130:  mov    %esp,%ebp
081b992b +0x1132:  sub    $0x18,%esp
081b992e +0x1135:  mov    0xc(%ebp),%eax
081b9931 +0x1138:  mov    %eax,(%esp)
081b9934 +0x113b:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081b9939 +0x1140:  leave
081b993a +0x1141:  ret
081b993b +0x1142:  push   %ebp
081b993c +0x1143:  mov    %esp,%ebp
081b993e +0x1145:  sub    $0x28,%esp
081b9941 +0x1148:  mov    0x8(%ebp),%eax
081b9944 +0x114b:  mov    %eax,(%esp)
081b9947 +0x114e:  call   081b99fc <+0x1203>
081b994c +0x1153:  mov    %eax,0x4(%esp)
081b9950 +0x1157:  lea    -0x9(%ebp),%eax
081b9953 +0x115a:  mov    %eax,(%esp)
081b9956 +0x115d:  call   081b9968 <+0x116f>
081b995b +0x1162:  leave
081b995c +0x1163:  ret
081b995d +0x1164:  push   %ebp
081b995e +0x1165:  mov    %esp,%ebp
081b9960 +0x1167:  mov    0x8(%ebp),%eax
081b9963 +0x116a:  add    $0x10,%eax
081b9966 +0x116d:  pop    %ebp
081b9967 +0x116e:  ret
081b9968 +0x116f:  push   %ebp
081b9969 +0x1170:  mov    %esp,%ebp
081b996b +0x1172:  mov    0xc(%ebp),%eax
081b996e +0x1175:  pop    %ebp
081b996f +0x1176:  ret
081b9970 +0x1177:  push   %ebp
081b9971 +0x1178:  mov    %esp,%ebp
081b9973 +0x117a:  sub    $0x18,%esp
081b9976 +0x117d:  mov    0x8(%ebp),%eax
081b9979 +0x1180:  mov    %eax,(%esp)
081b997c +0x1183:  call   081b9a08 <+0x120f>
081b9981 +0x1188:  leave
081b9982 +0x1189:  ret
081b9983 +0x118a:  nop
081b9984 +0x118b:  push   %ebp
081b9985 +0x118c:  mov    %esp,%ebp
081b9987 +0x118e:  pop    %ebp
081b9988 +0x118f:  ret
081b9989 +0x1190:  push   %ebp
081b998a +0x1191:  mov    %esp,%ebp
081b998c +0x1193:  pop    %ebp
081b998d +0x1194:  ret
081b998e +0x1195:  push   %ebp
081b998f +0x1196:  mov    %esp,%ebp
081b9991 +0x1198:  mov    0x8(%ebp),%eax
081b9994 +0x119b:  pop    %ebp
081b9995 +0x119c:  ret
081b9996 +0x119d:  push   %ebp
081b9997 +0x119e:  mov    %esp,%ebp
081b9999 +0x11a0:  sub    $0x28,%esp
081b999c +0x11a3:  movb   $0x0,-0x9(%ebp)
081b99a0 +0x11a7:  mov    0x10(%ebp),%eax
081b99a3 +0x11aa:  mov    %eax,0x8(%esp)
081b99a7 +0x11ae:  mov    0xc(%ebp),%eax
081b99aa +0x11b1:  mov    %eax,0x4(%esp)
081b99ae +0x11b5:  mov    0x8(%ebp),%eax
081b99b1 +0x11b8:  mov    %eax,(%esp)
081b99b4 +0x11bb:  call   081b9a0d <+0x1214>
081b99b9 +0x11c0:  leave
081b99ba +0x11c1:  ret
081b99bb +0x11c2:  nop
081b99bc +0x11c3:  push   %ebp
081b99bd +0x11c4:  mov    %esp,%ebp
081b99bf +0x11c6:  mov    0x8(%ebp),%eax
081b99c2 +0x11c9:  pop    %ebp
081b99c3 +0x11ca:  ret
081b99c4 +0x11cb:  push   %ebp
081b99c5 +0x11cc:  mov    %esp,%ebp
081b99c7 +0x11ce:  mov    $0x1fffffff,%eax
081b99cc +0x11d3:  pop    %ebp
081b99cd +0x11d4:  ret
081b99ce +0x11d5:  push   %ebp
081b99cf +0x11d6:  mov    %esp,%ebp
081b99d1 +0x11d8:  mov    0x8(%ebp),%eax
081b99d4 +0x11db:  mov    0xc(%ebp),%edx
081b99d7 +0x11de:  mov    %edx,(%eax)
081b99d9 +0x11e0:  pop    %ebp
081b99da +0x11e1:  ret
081b99db +0x11e2:  push   %ebp
081b99dc +0x11e3:  mov    %esp,%ebp
081b99de +0x11e5:  sub    $0x18,%esp
081b99e1 +0x11e8:  mov    0x10(%ebp),%eax
081b99e4 +0x11eb:  mov    %eax,0x8(%esp)
081b99e8 +0x11ef:  mov    0xc(%ebp),%eax
081b99eb +0x11f2:  mov    %eax,0x4(%esp)
081b99ef +0x11f6:  mov    0x8(%ebp),%eax
081b99f2 +0x11f9:  mov    %eax,(%esp)
081b99f5 +0x11fc:  call   081b9a60 <+0x1267>
081b99fa +0x1201:  leave
081b99fb +0x1202:  ret
081b99fc +0x1203:  push   %ebp
081b99fd +0x1204:  mov    %esp,%ebp
081b99ff +0x1206:  mov    0x8(%ebp),%eax
081b9a02 +0x1209:  add    $0x10,%eax
081b9a05 +0x120c:  pop    %ebp
081b9a06 +0x120d:  ret
081b9a07 +0x120e:  nop
081b9a08 +0x120f:  push   %ebp
081b9a09 +0x1210:  mov    %esp,%ebp
081b9a0b +0x1212:  pop    %ebp
081b9a0c +0x1213:  ret
081b9a0d +0x1214:  push   %ebp
081b9a0e +0x1215:  mov    %esp,%ebp
081b9a10 +0x1217:  push   %ebx
081b9a11 +0x1218:  sub    $0x24,%esp
081b9a14 +0x121b:  mov    0xc(%ebp),%edx
081b9a17 +0x121e:  mov    0x8(%ebp),%eax
081b9a1a +0x1221:  mov    %edx,%ecx
081b9a1c +0x1223:  sub    %eax,%ecx
081b9a1e +0x1225:  mov    %ecx,%eax
081b9a20 +0x1227:  sar    $0x3,%eax
081b9a23 +0x122a:  mov    %eax,-0xc(%ebp)
081b9a26 +0x122d:  jmp    081b9a4c <+0x1253>
081b9a28 +0x122f:  subl   $0x8,0x10(%ebp)
081b9a2c +0x1233:  mov    0x10(%ebp),%ebx
081b9a2f +0x1236:  subl   $0x8,0xc(%ebp)
081b9a33 +0x123a:  mov    0xc(%ebp),%eax
081b9a36 +0x123d:  mov    %eax,(%esp)
081b9a39 +0x1240:  call   081b949c <+0xca3>
081b9a3e +0x1245:  mov    0x4(%eax),%edx
081b9a41 +0x1248:  mov    (%eax),%eax
081b9a43 +0x124a:  mov    %eax,(%ebx)
081b9a45 +0x124c:  mov    %edx,0x4(%ebx)
081b9a48 +0x124f:  subl   $0x1,-0xc(%ebp)
081b9a4c +0x1253:  cmpl   $0x0,-0xc(%ebp)
081b9a50 +0x1257:  setg   %al
081b9a53 +0x125a:  test   %al,%al
081b9a55 +0x125c:  jne    081b9a28 <+0x122f>
081b9a57 +0x125e:  mov    0x10(%ebp),%eax
081b9a5a +0x1261:  add    $0x24,%esp
081b9a5d +0x1264:  pop    %ebx
081b9a5e +0x1265:  pop    %ebp
081b9a5f +0x1266:  ret
081b9a60 +0x1267:  push   %ebp
081b9a61 +0x1268:  mov    %esp,%ebp
081b9a63 +0x126a:  push   %esi
081b9a64 +0x126b:  push   %ebx
081b9a65 +0x126c:  sub    $0x20,%esp
081b9a68 +0x126f:  mov    0x10(%ebp),%eax
081b9a6b +0x1272:  mov    %eax,-0xc(%ebp)
081b9a6e +0x1275:  jmp    081b9ab1 <+0x12b8>
081b9a70 +0x1277:  lea    0x8(%ebp),%eax
081b9a73 +0x127a:  mov    %eax,(%esp)
081b9a76 +0x127d:  call   081b9b38 <+0x133f>
081b9a7b +0x1282:  mov    %eax,%ebx
081b9a7d +0x1284:  mov    -0xc(%ebp),%eax
081b9a80 +0x1287:  mov    %eax,0x4(%esp)
081b9a84 +0x128b:  movl   $0x8,(%esp)
081b9a8b +0x1292:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
081b9a90 +0x1297:  mov    %eax,%edx
081b9a92 +0x1299:  test   %edx,%edx
081b9a94 +0x129b:  je     081b9aa2 <+0x12a9>
081b9a96 +0x129d:  mov    %eax,%ecx
081b9a98 +0x129f:  mov    (%ebx),%eax
081b9a9a +0x12a1:  mov    0x4(%ebx),%edx
081b9a9d +0x12a4:  mov    %eax,(%ecx)
081b9a9f +0x12a6:  mov    %edx,0x4(%ecx)
081b9aa2 +0x12a9:  lea    0x8(%ebp),%eax
081b9aa5 +0x12ac:  mov    %eax,(%esp)
081b9aa8 +0x12af:  call   081b9b22 <+0x1329>
081b9aad +0x12b4:  addl   $0x8,-0xc(%ebp)
081b9ab1 +0x12b8:  lea    0xc(%ebp),%eax
081b9ab4 +0x12bb:  mov    %eax,0x4(%esp)
081b9ab8 +0x12bf:  lea    0x8(%ebp),%eax
081b9abb +0x12c2:  mov    %eax,(%esp)
081b9abe +0x12c5:  call   081b9b05 <+0x130c>
081b9ac3 +0x12ca:  test   %al,%al
081b9ac5 +0x12cc:  jne    081b9a70 <+0x1277>
081b9ac7 +0x12ce:  mov    -0xc(%ebp),%eax
081b9aca +0x12d1:  add    $0x20,%esp
081b9acd +0x12d4:  pop    %ebx
081b9ace +0x12d5:  pop    %esi
081b9acf +0x12d6:  pop    %ebp
081b9ad0 +0x12d7:  ret
081b9ad1 +0x12d8:  mov    %eax,(%esp)
081b9ad4 +0x12db:  call   08725ce0 <__cxa_begin_catch>
081b9ad9 +0x12e0:  mov    -0xc(%ebp),%eax
081b9adc +0x12e3:  mov    %eax,0x4(%esp)
081b9ae0 +0x12e7:  mov    0x10(%ebp),%eax
081b9ae3 +0x12ea:  mov    %eax,(%esp)
081b9ae6 +0x12ed:  call   081b9803 <+0x100a>
081b9aeb +0x12f2:  call   08724be0 <__cxa_rethrow>
081b9af0 +0x12f7:  mov    %edx,%ebx
081b9af2 +0x12f9:  mov    %eax,%esi
081b9af4 +0x12fb:  call   08725c30 <__cxa_end_catch>
081b9af9 +0x1300:  mov    %esi,%eax
081b9afb +0x1302:  mov    %ebx,%edx
081b9afd +0x1304:  mov    %eax,(%esp)
081b9b00 +0x1307:  call   08ae3750 <_Unwind_Resume>
081b9b05 +0x130c:  push   %ebp
081b9b06 +0x130d:  mov    %esp,%ebp
081b9b08 +0x130f:  sub    $0x18,%esp
081b9b0b +0x1312:  mov    0xc(%ebp),%eax
081b9b0e +0x1315:  mov    %eax,0x4(%esp)
081b9b12 +0x1319:  mov    0x8(%ebp),%eax
081b9b15 +0x131c:  mov    %eax,(%esp)
081b9b18 +0x131f:  call   081b9b42 <+0x1349>
081b9b1d +0x1324:  xor    $0x1,%eax
081b9b20 +0x1327:  leave
081b9b21 +0x1328:  ret
081b9b22 +0x1329:  push   %ebp
081b9b23 +0x132a:  mov    %esp,%ebp
081b9b25 +0x132c:  mov    0x8(%ebp),%eax
081b9b28 +0x132f:  mov    (%eax),%eax
081b9b2a +0x1331:  lea    0x8(%eax),%edx
081b9b2d +0x1334:  mov    0x8(%ebp),%eax
081b9b30 +0x1337:  mov    %edx,(%eax)
081b9b32 +0x1339:  mov    0x8(%ebp),%eax
081b9b35 +0x133c:  pop    %ebp
081b9b36 +0x133d:  ret
081b9b37 +0x133e:  nop
081b9b38 +0x133f:  push   %ebp
081b9b39 +0x1340:  mov    %esp,%ebp
081b9b3b +0x1342:  mov    0x8(%ebp),%eax
081b9b3e +0x1345:  mov    (%eax),%eax
081b9b40 +0x1347:  pop    %ebp
081b9b41 +0x1348:  ret
081b9b42 +0x1349:  push   %ebp
081b9b43 +0x134a:  mov    %esp,%ebp
081b9b45 +0x134c:  push   %ebx
081b9b46 +0x134d:  sub    $0x14,%esp
081b9b49 +0x1350:  mov    0x8(%ebp),%eax
081b9b4c +0x1353:  mov    %eax,(%esp)
081b9b4f +0x1356:  call   081b9b6c <+0x1373>
081b9b54 +0x135b:  mov    %eax,%ebx
081b9b56 +0x135d:  mov    0xc(%ebp),%eax
081b9b59 +0x1360:  mov    %eax,(%esp)
081b9b5c +0x1363:  call   081b9b6c <+0x1373>
081b9b61 +0x1368:  cmp    %eax,%ebx
081b9b63 +0x136a:  sete   %al
081b9b66 +0x136d:  add    $0x14,%esp
081b9b69 +0x1370:  pop    %ebx
081b9b6a +0x1371:  pop    %ebp
081b9b6b +0x1372:  ret
081b9b6c +0x1373:  push   %ebp
081b9b6d +0x1374:  mov    %esp,%ebp
081b9b6f +0x1376:  mov    0x8(%ebp),%eax
081b9b72 +0x1379:  mov    (%eax),%eax
081b9b74 +0x137b:  pop    %ebp
081b9b75 +0x137c:  ret
081b9b76 +0x137d:  nop
081b9b77 +0x137e:  nop
```

## 反编译 C

```c
// <global>::global @ 0x81b87f9

/* NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob() */

void NewAccountLevelUpEventToJob::_GLOBAL__I_NewAccountLevelUpEventToJob(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
