# CheckCompetitionAreaIndex

`_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci`

`global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CHARAC_LOAD_MERCENARY` | `0x081b478c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b478c  _GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci
#           global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const
# range [0x081b478c, 0x081b59b7]
081b478c +0x0000:  push   %ebp
081b478d +0x0001:  mov    %esp,%ebp
081b478f +0x0003:  sub    $0x18,%esp
081b4792 +0x0006:  movl   $0xffff,0x4(%esp)
081b479a +0x000e:  movl   $0x1,(%esp)
081b47a1 +0x0015:  call   081b46d2 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
081b47a6 +0x001a:  leave
081b47a7 +0x001b:  ret
081b47a8 +0x001c:  push   %ebp
081b47a9 +0x001d:  mov    %esp,%ebp
081b47ab +0x001f:  mov    0x8(%ebp),%eax
081b47ae +0x0022:  movl   $0x0,(%eax)
081b47b4 +0x0028:  mov    0x8(%ebp),%eax
081b47b7 +0x002b:  movl   $0x0,0x4(%eax)
081b47be +0x0032:  mov    0x8(%ebp),%eax
081b47c1 +0x0035:  movb   $0x0,0x8(%eax)
081b47c5 +0x0039:  pop    %ebp
081b47c6 +0x003a:  ret
081b47c7 +0x003b:  nop
081b47c8 +0x003c:  push   %ebp
081b47c9 +0x003d:  mov    %esp,%ebp
081b47cb +0x003f:  mov    0x8(%ebp),%eax
081b47ce +0x0042:  movb   $0x1,0x24(%eax)
081b47d2 +0x0046:  pop    %ebp
081b47d3 +0x0047:  ret
081b47d4 +0x0048:  push   %ebp
081b47d5 +0x0049:  mov    %esp,%ebp
081b47d7 +0x004b:  mov    0x8(%ebp),%eax
081b47da +0x004e:  mov    (%eax),%edx
081b47dc +0x0050:  mov    0xc(%ebp),%eax
081b47df +0x0053:  mov    (%eax),%eax
081b47e1 +0x0055:  cmp    %eax,%edx
081b47e3 +0x0057:  setne  %al
081b47e6 +0x005a:  pop    %ebp
081b47e7 +0x005b:  ret
081b47e8 +0x005c:  push   %ebp
081b47e9 +0x005d:  mov    %esp,%ebp
081b47eb +0x005f:  sub    $0x28,%esp
081b47ee +0x0062:  lea    -0x10(%ebp),%eax
081b47f1 +0x0065:  mov    0x8(%ebp),%edx
081b47f4 +0x0068:  mov    %edx,0x4(%esp)
081b47f8 +0x006c:  mov    %eax,(%esp)
081b47fb +0x006f:  call   081b4d66 <+0x5da>
081b4800 +0x0074:  sub    $0x4,%esp
081b4803 +0x0077:  lea    -0xc(%ebp),%eax
081b4806 +0x007a:  mov    0x8(%ebp),%edx
081b4809 +0x007d:  mov    %edx,0x4(%esp)
081b480d +0x0081:  mov    %eax,(%esp)
081b4810 +0x0084:  call   081b4d92 <+0x606>
081b4815 +0x0089:  sub    $0x4,%esp
081b4818 +0x008c:  lea    -0x10(%ebp),%eax
081b481b +0x008f:  mov    %eax,0x4(%esp)
081b481f +0x0093:  lea    -0xc(%ebp),%eax
081b4822 +0x0096:  mov    %eax,(%esp)
081b4825 +0x0099:  call   081b4dbd <+0x631>
081b482a +0x009e:  leave
081b482b +0x009f:  ret
081b482c +0x00a0:  push   %ebp
081b482d +0x00a1:  mov    %esp,%ebp
081b482f +0x00a3:  mov    0x8(%ebp),%eax
081b4832 +0x00a6:  mov    0x4(%eax),%eax
081b4835 +0x00a9:  mov    %eax,%edx
081b4837 +0x00ab:  mov    0x8(%ebp),%eax
081b483a +0x00ae:  mov    (%eax),%eax
081b483c +0x00b0:  mov    %edx,%ecx
081b483e +0x00b2:  sub    %eax,%ecx
081b4840 +0x00b4:  mov    %ecx,%eax
081b4842 +0x00b6:  sar    $0x3,%eax
081b4845 +0x00b9:  imul   $0xaaaaaaab,%eax,%eax
081b484b +0x00bf:  pop    %ebp
081b484c +0x00c0:  ret
081b484d +0x00c1:  nop
081b484e +0x00c2:  push   %ebp
081b484f +0x00c3:  mov    %esp,%ebp
081b4851 +0x00c5:  mov    0x8(%ebp),%eax
081b4854 +0x00c8:  mov    (%eax),%ecx
081b4856 +0x00ca:  mov    0xc(%ebp),%edx
081b4859 +0x00cd:  mov    %edx,%eax
081b485b +0x00cf:  add    %eax,%eax
081b485d +0x00d1:  add    %edx,%eax
081b485f +0x00d3:  shl    $0x3,%eax
081b4862 +0x00d6:  lea    (%ecx,%eax,1),%eax
081b4865 +0x00d9:  pop    %ebp
081b4866 +0x00da:  ret
081b4867 +0x00db:  nop
081b4868 +0x00dc:  push   %ebp
081b4869 +0x00dd:  mov    %esp,%ebp
081b486b +0x00df:  sub    $0x28,%esp
081b486e +0x00e2:  lea    -0x10(%ebp),%eax
081b4871 +0x00e5:  mov    0x8(%ebp),%edx
081b4874 +0x00e8:  mov    %edx,0x4(%esp)
081b4878 +0x00ec:  mov    %eax,(%esp)
081b487b +0x00ef:  call   081b4dea <+0x65e>
081b4880 +0x00f4:  sub    $0x4,%esp
081b4883 +0x00f7:  lea    -0xc(%ebp),%eax
081b4886 +0x00fa:  mov    0x8(%ebp),%edx
081b4889 +0x00fd:  mov    %edx,0x4(%esp)
081b488d +0x0101:  mov    %eax,(%esp)
081b4890 +0x0104:  call   081b4e16 <+0x68a>
081b4895 +0x0109:  sub    $0x4,%esp
081b4898 +0x010c:  lea    -0x10(%ebp),%eax
081b489b +0x010f:  mov    %eax,0x4(%esp)
081b489f +0x0113:  lea    -0xc(%ebp),%eax
081b48a2 +0x0116:  mov    %eax,(%esp)
081b48a5 +0x0119:  call   081b4e41 <+0x6b5>
081b48aa +0x011e:  leave
081b48ab +0x011f:  ret
081b48ac +0x0120:  push   %ebp
081b48ad +0x0121:  mov    %esp,%ebp
081b48af +0x0123:  mov    0x8(%ebp),%eax
081b48b2 +0x0126:  mov    0x4(%eax),%eax
081b48b5 +0x0129:  mov    %eax,%edx
081b48b7 +0x012b:  mov    0x8(%ebp),%eax
081b48ba +0x012e:  mov    (%eax),%eax
081b48bc +0x0130:  mov    %edx,%ecx
081b48be +0x0132:  sub    %eax,%ecx
081b48c0 +0x0134:  mov    %ecx,%eax
081b48c2 +0x0136:  sar    $0x3,%eax
081b48c5 +0x0139:  pop    %ebp
081b48c6 +0x013a:  ret
081b48c7 +0x013b:  nop
081b48c8 +0x013c:  push   %ebp
081b48c9 +0x013d:  mov    %esp,%ebp
081b48cb +0x013f:  mov    0x8(%ebp),%eax
081b48ce +0x0142:  mov    (%eax),%eax
081b48d0 +0x0144:  mov    0xc(%ebp),%edx
081b48d3 +0x0147:  shl    $0x3,%edx
081b48d6 +0x014a:  add    %edx,%eax
081b48d8 +0x014c:  pop    %ebp
081b48d9 +0x014d:  ret
081b48da +0x014e:  push   %ebp
081b48db +0x014f:  mov    %esp,%ebp
081b48dd +0x0151:  sub    $0x38,%esp
081b48e0 +0x0154:  movl   $0x0,-0x10(%ebp)
081b48e7 +0x015b:  movl   $0x0,-0xc(%ebp)
081b48ee +0x0162:  jmp    081b492a <+0x19e>
081b48f0 +0x0164:  mov    -0xc(%ebp),%eax
081b48f3 +0x0167:  mov    %eax,0x4(%esp)
081b48f7 +0x016b:  mov    0x8(%ebp),%eax
081b48fa +0x016e:  mov    %eax,(%esp)
081b48fd +0x0171:  call   081b48c8 <+0x13c>
081b4902 +0x0176:  mov    (%eax),%eax
081b4904 +0x0178:  add    %eax,-0x10(%ebp)
081b4907 +0x017b:  mov    0xc(%ebp),%eax
081b490a +0x017e:  cmp    -0x10(%ebp),%eax
081b490d +0x0181:  jg     081b4926 <+0x19a>
081b490f +0x0183:  mov    -0xc(%ebp),%eax
081b4912 +0x0186:  mov    %eax,0x4(%esp)
081b4916 +0x018a:  mov    0x8(%ebp),%eax
081b4919 +0x018d:  mov    %eax,(%esp)
081b491c +0x0190:  call   081b48c8 <+0x13c>
081b4921 +0x0195:  mov    0x4(%eax),%eax
081b4924 +0x0198:  jmp    081b4955 <+0x1c9>
081b4926 +0x019a:  addl   $0x1,-0xc(%ebp)
081b492a +0x019e:  mov    0x8(%ebp),%eax
081b492d +0x01a1:  mov    %eax,(%esp)
081b4930 +0x01a4:  call   081b48ac <+0x120>
081b4935 +0x01a9:  cmp    -0xc(%ebp),%eax
081b4938 +0x01ac:  seta   %al
081b493b +0x01af:  test   %al,%al
081b493d +0x01b1:  jne    081b48f0 <+0x164>
081b493f +0x01b3:  movl   $0x0,0x4(%esp)
081b4947 +0x01bb:  mov    0x8(%ebp),%eax
081b494a +0x01be:  mov    %eax,(%esp)
081b494d +0x01c1:  call   081b48c8 <+0x13c>
081b4952 +0x01c6:  mov    0x4(%eax),%eax
081b4955 +0x01c9:  mov    %eax,-0x1c(%ebp)
081b4958 +0x01cc:  flds   -0x1c(%ebp)
081b495b +0x01cf:  leave
081b495c +0x01d0:  ret
081b495d +0x01d1:  push   %ebp
081b495e +0x01d2:  mov    %esp,%ebp
081b4960 +0x01d4:  push   %ebx
081b4961 +0x01d5:  sub    $0x24,%esp
081b4964 +0x01d8:  mov    0x8(%ebp),%ebx
081b4967 +0x01db:  movl   $0x0,-0x14(%ebp)
081b496e +0x01e2:  movl   $0x0,-0x10(%ebp)
081b4975 +0x01e9:  movl   $0x0,-0xc(%ebp)
081b497c +0x01f0:  jmp    081b49db <+0x24f>
081b497e +0x01f2:  mov    -0xc(%ebp),%eax
081b4981 +0x01f5:  mov    %eax,0x4(%esp)
081b4985 +0x01f9:  mov    0x10(%ebp),%eax
081b4988 +0x01fc:  mov    %eax,(%esp)
081b498b +0x01ff:  call   081b4e90 <+0x704>
081b4990 +0x0204:  mov    (%eax),%eax
081b4992 +0x0206:  cmp    0xc(%ebp),%eax
081b4995 +0x0209:  setle  %al
081b4998 +0x020c:  test   %al,%al
081b499a +0x020e:  je     081b49d7 <+0x24b>
081b499c +0x0210:  mov    -0xc(%ebp),%eax
081b499f +0x0213:  mov    %eax,0x4(%esp)
081b49a3 +0x0217:  mov    0x10(%ebp),%eax
081b49a6 +0x021a:  mov    %eax,(%esp)
081b49a9 +0x021d:  call   081b4e90 <+0x704>
081b49ae +0x0222:  mov    (%eax),%eax
081b49b0 +0x0224:  cmp    -0x10(%ebp),%eax
081b49b3 +0x0227:  setge  %al
081b49b6 +0x022a:  test   %al,%al
081b49b8 +0x022c:  je     081b49d7 <+0x24b>
081b49ba +0x022e:  mov    -0xc(%ebp),%eax
081b49bd +0x0231:  mov    %eax,0x4(%esp)
081b49c1 +0x0235:  mov    0x10(%ebp),%eax
081b49c4 +0x0238:  mov    %eax,(%esp)
081b49c7 +0x023b:  call   081b4e90 <+0x704>
081b49cc +0x0240:  mov    (%eax),%eax
081b49ce +0x0242:  mov    %eax,-0x10(%ebp)
081b49d1 +0x0245:  mov    -0xc(%ebp),%eax
081b49d4 +0x0248:  mov    %eax,-0x14(%ebp)
081b49d7 +0x024b:  addl   $0x1,-0xc(%ebp)
081b49db +0x024f:  mov    0x10(%ebp),%eax
081b49de +0x0252:  mov    %eax,(%esp)
081b49e1 +0x0255:  call   081b4e6e <+0x6e2>
081b49e6 +0x025a:  cmp    -0xc(%ebp),%eax
081b49e9 +0x025d:  seta   %al
081b49ec +0x0260:  test   %al,%al
081b49ee +0x0262:  jne    081b497e <+0x1f2>
081b49f0 +0x0264:  mov    -0x14(%ebp),%eax
081b49f3 +0x0267:  mov    %eax,0x4(%esp)
081b49f7 +0x026b:  mov    0x10(%ebp),%eax
081b49fa +0x026e:  mov    %eax,(%esp)
081b49fd +0x0271:  call   081b4e90 <+0x704>
081b4a02 +0x0276:  mov    0x8(%eax),%edx
081b4a05 +0x0279:  mov    0x4(%eax),%eax
081b4a08 +0x027c:  mov    %eax,(%ebx)
081b4a0a +0x027e:  mov    %edx,0x4(%ebx)
081b4a0d +0x0281:  mov    %ebx,%eax
081b4a0f +0x0283:  add    $0x24,%esp
081b4a12 +0x0286:  pop    %ebx
081b4a13 +0x0287:  pop    %ebp
081b4a14 +0x0288:  ret    $0x4
081b4a17 +0x028b:  nop
081b4a18 +0x028c:  push   %ebp
081b4a19 +0x028d:  mov    %esp,%ebp
081b4a1b +0x028f:  mov    0x8(%ebp),%eax
081b4a1e +0x0292:  mov    (%eax),%eax
081b4a20 +0x0294:  mov    0xc(%ebp),%edx
081b4a23 +0x0297:  shl    $0x3,%edx
081b4a26 +0x029a:  add    %edx,%eax
081b4a28 +0x029c:  pop    %ebp
081b4a29 +0x029d:  ret
081b4a2a +0x029e:  push   %ebp
081b4a2b +0x029f:  mov    %esp,%ebp
081b4a2d +0x02a1:  mov    0x8(%ebp),%eax
081b4a30 +0x02a4:  mov    0x4(%eax),%eax
081b4a33 +0x02a7:  mov    %eax,%edx
081b4a35 +0x02a9:  mov    0x8(%ebp),%eax
081b4a38 +0x02ac:  mov    (%eax),%eax
081b4a3a +0x02ae:  mov    %edx,%ecx
081b4a3c +0x02b0:  sub    %eax,%ecx
081b4a3e +0x02b2:  mov    %ecx,%eax
081b4a40 +0x02b4:  sar    $0x3,%eax
081b4a43 +0x02b7:  imul   $0xcccccccd,%eax,%eax
081b4a49 +0x02bd:  pop    %ebp
081b4a4a +0x02be:  ret
081b4a4b +0x02bf:  nop
081b4a4c +0x02c0:  push   %ebp
081b4a4d +0x02c1:  mov    %esp,%ebp
081b4a4f +0x02c3:  mov    0x8(%ebp),%eax
081b4a52 +0x02c6:  mov    (%eax),%ecx
081b4a54 +0x02c8:  mov    0xc(%ebp),%edx
081b4a57 +0x02cb:  mov    %edx,%eax
081b4a59 +0x02cd:  shl    $0x2,%eax
081b4a5c +0x02d0:  add    %edx,%eax
081b4a5e +0x02d2:  shl    $0x3,%eax
081b4a61 +0x02d5:  lea    (%ecx,%eax,1),%eax
081b4a64 +0x02d8:  pop    %ebp
081b4a65 +0x02d9:  ret
081b4a66 +0x02da:  push   %ebp
081b4a67 +0x02db:  mov    %esp,%ebp
081b4a69 +0x02dd:  sub    $0x28,%esp
081b4a6c +0x02e0:  movl   $0x0,-0x10(%ebp)
081b4a73 +0x02e7:  movl   $0x0,-0xc(%ebp)
081b4a7a +0x02ee:  jmp    081b4ab6 <+0x32a>
081b4a7c +0x02f0:  mov    -0xc(%ebp),%eax
081b4a7f +0x02f3:  mov    %eax,0x4(%esp)
081b4a83 +0x02f7:  mov    0x8(%ebp),%eax
081b4a86 +0x02fa:  mov    %eax,(%esp)
081b4a89 +0x02fd:  call   081b4b12 <+0x386>
081b4a8e +0x0302:  mov    (%eax),%eax
081b4a90 +0x0304:  add    %eax,-0x10(%ebp)
081b4a93 +0x0307:  mov    0xc(%ebp),%eax
081b4a96 +0x030a:  cmp    -0x10(%ebp),%eax
081b4a99 +0x030d:  jg     081b4ab2 <+0x326>
081b4a9b +0x030f:  mov    -0xc(%ebp),%eax
081b4a9e +0x0312:  mov    %eax,0x4(%esp)
081b4aa2 +0x0316:  mov    0x8(%ebp),%eax
081b4aa5 +0x0319:  mov    %eax,(%esp)
081b4aa8 +0x031c:  call   081b4b12 <+0x386>
081b4aad +0x0321:  mov    0x4(%eax),%eax
081b4ab0 +0x0324:  jmp    081b4ae1 <+0x355>
081b4ab2 +0x0326:  addl   $0x1,-0xc(%ebp)
081b4ab6 +0x032a:  mov    0x8(%ebp),%eax
081b4ab9 +0x032d:  mov    %eax,(%esp)
081b4abc +0x0330:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
081b4ac1 +0x0335:  cmp    -0xc(%ebp),%eax
081b4ac4 +0x0338:  seta   %al
081b4ac7 +0x033b:  test   %al,%al
081b4ac9 +0x033d:  jne    081b4a7c <+0x2f0>
081b4acb +0x033f:  movl   $0x0,0x4(%esp)
081b4ad3 +0x0347:  mov    0x8(%ebp),%eax
081b4ad6 +0x034a:  mov    %eax,(%esp)
081b4ad9 +0x034d:  call   081b4b12 <+0x386>
081b4ade +0x0352:  mov    0x4(%eax),%eax
081b4ae1 +0x0355:  leave
081b4ae2 +0x0356:  ret
081b4ae3 +0x0357:  nop
081b4ae4 +0x0358:  push   %ebp
081b4ae5 +0x0359:  mov    %esp,%ebp
081b4ae7 +0x035b:  mov    0x8(%ebp),%eax
081b4aea +0x035e:  mov    0x4(%eax),%eax
081b4aed +0x0361:  mov    %eax,%edx
081b4aef +0x0363:  mov    0x8(%ebp),%eax
081b4af2 +0x0366:  mov    (%eax),%eax
081b4af4 +0x0368:  mov    %edx,%ecx
081b4af6 +0x036a:  sub    %eax,%ecx
081b4af8 +0x036c:  mov    %ecx,%eax
081b4afa +0x036e:  sar    $0x4,%eax
081b4afd +0x0371:  pop    %ebp
081b4afe +0x0372:  ret
081b4aff +0x0373:  nop
081b4b00 +0x0374:  push   %ebp
081b4b01 +0x0375:  mov    %esp,%ebp
081b4b03 +0x0377:  mov    0x8(%ebp),%eax
081b4b06 +0x037a:  mov    (%eax),%eax
081b4b08 +0x037c:  mov    0xc(%ebp),%edx
081b4b0b +0x037f:  shl    $0x4,%edx
081b4b0e +0x0382:  add    %edx,%eax
081b4b10 +0x0384:  pop    %ebp
081b4b11 +0x0385:  ret
081b4b12 +0x0386:  push   %ebp
081b4b13 +0x0387:  mov    %esp,%ebp
081b4b15 +0x0389:  mov    0x8(%ebp),%eax
081b4b18 +0x038c:  mov    (%eax),%eax
081b4b1a +0x038e:  mov    0xc(%ebp),%edx
081b4b1d +0x0391:  shl    $0x3,%edx
081b4b20 +0x0394:  add    %edx,%eax
081b4b22 +0x0396:  pop    %ebp
081b4b23 +0x0397:  ret
081b4b24 +0x0398:  push   %ebp
081b4b25 +0x0399:  mov    %esp,%ebp
081b4b27 +0x039b:  mov    0x8(%ebp),%eax
081b4b2a +0x039e:  mov    0x4(%eax),%eax
081b4b2d +0x03a1:  mov    %eax,%edx
081b4b2f +0x03a3:  mov    0x8(%ebp),%eax
081b4b32 +0x03a6:  mov    (%eax),%eax
081b4b34 +0x03a8:  mov    %edx,%ecx
081b4b36 +0x03aa:  sub    %eax,%ecx
081b4b38 +0x03ac:  mov    %ecx,%eax
081b4b3a +0x03ae:  sar    $0x2,%eax
081b4b3d +0x03b1:  imul   $0x3cf3cf3d,%eax,%eax
081b4b43 +0x03b7:  pop    %ebp
081b4b44 +0x03b8:  ret
081b4b45 +0x03b9:  nop
081b4b46 +0x03ba:  push   %ebp
081b4b47 +0x03bb:  mov    %esp,%ebp
081b4b49 +0x03bd:  mov    0x8(%ebp),%eax
081b4b4c +0x03c0:  mov    (%eax),%edx
081b4b4e +0x03c2:  mov    0xc(%ebp),%eax
081b4b51 +0x03c5:  imul   $0x54,%eax,%eax
081b4b54 +0x03c8:  lea    (%edx,%eax,1),%eax
081b4b57 +0x03cb:  pop    %ebp
081b4b58 +0x03cc:  ret
081b4b59 +0x03cd:  nop
081b4b5a +0x03ce:  push   %ebp
081b4b5b +0x03cf:  mov    %esp,%ebp
081b4b5d +0x03d1:  sub    $0x28,%esp
081b4b60 +0x03d4:  lea    -0x10(%ebp),%eax
081b4b63 +0x03d7:  mov    0x8(%ebp),%edx
081b4b66 +0x03da:  mov    %edx,0x4(%esp)
081b4b6a +0x03de:  mov    %eax,(%esp)
081b4b6d +0x03e1:  call   081b4eaa <+0x71e>
081b4b72 +0x03e6:  sub    $0x4,%esp
081b4b75 +0x03e9:  lea    -0xc(%ebp),%eax
081b4b78 +0x03ec:  mov    0x8(%ebp),%edx
081b4b7b +0x03ef:  mov    %edx,0x4(%esp)
081b4b7f +0x03f3:  mov    %eax,(%esp)
081b4b82 +0x03f6:  call   081b4ed6 <+0x74a>
081b4b87 +0x03fb:  sub    $0x4,%esp
081b4b8a +0x03fe:  lea    -0x10(%ebp),%eax
081b4b8d +0x0401:  mov    %eax,0x4(%esp)
081b4b91 +0x0405:  lea    -0xc(%ebp),%eax
081b4b94 +0x0408:  mov    %eax,(%esp)
081b4b97 +0x040b:  call   081b4f01 <+0x775>
081b4b9c +0x0410:  leave
081b4b9d +0x0411:  ret
081b4b9e +0x0412:  push   %ebp
081b4b9f +0x0413:  mov    %esp,%ebp
081b4ba1 +0x0415:  mov    0x8(%ebp),%eax
081b4ba4 +0x0418:  mov    (%eax),%edx
081b4ba6 +0x041a:  mov    0xc(%ebp),%eax
081b4ba9 +0x041d:  imul   $0x54,%eax,%eax
081b4bac +0x0420:  lea    (%edx,%eax,1),%eax
081b4baf +0x0423:  pop    %ebp
081b4bb0 +0x0424:  ret
081b4bb1 +0x0425:  nop
081b4bb2 +0x0426:  push   %ebp
081b4bb3 +0x0427:  mov    %esp,%ebp
081b4bb5 +0x0429:  sub    $0x28,%esp
081b4bb8 +0x042c:  mov    0x8(%ebp),%eax
081b4bbb +0x042f:  mov    0x4(%eax),%edx
081b4bbe +0x0432:  mov    0x8(%ebp),%eax
081b4bc1 +0x0435:  mov    0x8(%eax),%eax
081b4bc4 +0x0438:  cmp    %eax,%edx
081b4bc6 +0x043a:  je     081b4bf5 <+0x469>
081b4bc8 +0x043c:  mov    0x8(%ebp),%eax
081b4bcb +0x043f:  mov    0x4(%eax),%edx
081b4bce +0x0442:  mov    0x8(%ebp),%eax
081b4bd1 +0x0445:  mov    0xc(%ebp),%ecx
081b4bd4 +0x0448:  mov    %ecx,0x8(%esp)
081b4bd8 +0x044c:  mov    %edx,0x4(%esp)
081b4bdc +0x0450:  mov    %eax,(%esp)
081b4bdf +0x0453:  call   081b4f2e <+0x7a2>
081b4be4 +0x0458:  mov    0x8(%ebp),%eax
081b4be7 +0x045b:  mov    0x4(%eax),%eax
081b4bea +0x045e:  lea    0x54(%eax),%edx
081b4bed +0x0461:  mov    0x8(%ebp),%eax
081b4bf0 +0x0464:  mov    %edx,0x4(%eax)
081b4bf3 +0x0467:  jmp    081b4c23 <+0x497>
081b4bf5 +0x0469:  lea    -0xc(%ebp),%eax
081b4bf8 +0x046c:  mov    0x8(%ebp),%edx
081b4bfb +0x046f:  mov    %edx,0x4(%esp)
081b4bff +0x0473:  mov    %eax,(%esp)
081b4c02 +0x0476:  call   081b4f6c <+0x7e0>
081b4c07 +0x047b:  sub    $0x4,%esp
081b4c0a +0x047e:  mov    0xc(%ebp),%eax
081b4c0d +0x0481:  mov    %eax,0x8(%esp)
081b4c11 +0x0485:  mov    -0xc(%ebp),%eax
081b4c14 +0x0488:  mov    %eax,0x4(%esp)
081b4c18 +0x048c:  mov    0x8(%ebp),%eax
081b4c1b +0x048f:  mov    %eax,(%esp)
081b4c1e +0x0492:  call   081b4f92 <+0x806>
081b4c23 +0x0497:  leave
081b4c24 +0x0498:  ret
081b4c25 +0x0499:  nop
081b4c26 +0x049a:  push   %ebp
081b4c27 +0x049b:  mov    %esp,%ebp
081b4c29 +0x049d:  push   %ebx
081b4c2a +0x049e:  sub    $0x14,%esp
081b4c2d +0x04a1:  mov    0x8(%ebp),%ebx
081b4c30 +0x04a4:  mov    0xc(%ebp),%eax
081b4c33 +0x04a7:  mov    %eax,0x4(%esp)
081b4c37 +0x04ab:  mov    %ebx,(%esp)
081b4c3a +0x04ae:  call   081b525c <+0xad0>
081b4c3f +0x04b3:  mov    %ebx,%eax
081b4c41 +0x04b5:  add    $0x14,%esp
081b4c44 +0x04b8:  pop    %ebx
081b4c45 +0x04b9:  pop    %ebp
081b4c46 +0x04ba:  ret    $0x4
081b4c49 +0x04bd:  nop
081b4c4a +0x04be:  push   %ebp
081b4c4b +0x04bf:  mov    %esp,%ebp
081b4c4d +0x04c1:  push   %ebx
081b4c4e +0x04c2:  sub    $0x24,%esp
081b4c51 +0x04c5:  mov    0x8(%ebp),%ebx
081b4c54 +0x04c8:  mov    0xc(%ebp),%eax
081b4c57 +0x04cb:  mov    (%eax),%edx
081b4c59 +0x04cd:  mov    0x10(%ebp),%eax
081b4c5c +0x04d0:  mov    (%eax),%eax
081b4c5e +0x04d2:  imul   $0x54,%eax,%eax
081b4c61 +0x04d5:  lea    (%edx,%eax,1),%eax
081b4c64 +0x04d8:  mov    %eax,-0xc(%ebp)
081b4c67 +0x04db:  lea    -0xc(%ebp),%eax
081b4c6a +0x04de:  mov    %eax,0x4(%esp)
081b4c6e +0x04e2:  mov    %ebx,(%esp)
081b4c71 +0x04e5:  call   081b525c <+0xad0>
081b4c76 +0x04ea:  mov    %ebx,%eax
081b4c78 +0x04ec:  add    $0x24,%esp
081b4c7b +0x04ef:  pop    %ebx
081b4c7c +0x04f0:  pop    %ebp
081b4c7d +0x04f1:  ret    $0x4
081b4c80 +0x04f4:  push   %ebp
081b4c81 +0x04f5:  mov    %esp,%ebp
081b4c83 +0x04f7:  push   %ebx
081b4c84 +0x04f8:  sub    $0x34,%esp
081b4c87 +0x04fb:  mov    0x8(%ebp),%ebx
081b4c8a +0x04fe:  lea    -0x24(%ebp),%eax
081b4c8d +0x0501:  mov    0xc(%ebp),%edx
081b4c90 +0x0504:  mov    %edx,0x4(%esp)
081b4c94 +0x0508:  mov    %eax,(%esp)
081b4c97 +0x050b:  call   081b4f6c <+0x7e0>
081b4c9c +0x0510:  sub    $0x4,%esp
081b4c9f +0x0513:  movl   $0x1,-0x1c(%ebp)
081b4ca6 +0x051a:  lea    -0x20(%ebp),%eax
081b4ca9 +0x051d:  lea    -0x1c(%ebp),%edx
081b4cac +0x0520:  mov    %edx,0x8(%esp)
081b4cb0 +0x0524:  lea    0x10(%ebp),%edx
081b4cb3 +0x0527:  mov    %edx,0x4(%esp)
081b4cb7 +0x052b:  mov    %eax,(%esp)
081b4cba +0x052e:  call   081b4c4a <+0x4be>
081b4cbf +0x0533:  sub    $0x4,%esp
081b4cc2 +0x0536:  lea    -0x24(%ebp),%eax
081b4cc5 +0x0539:  mov    %eax,0x4(%esp)
081b4cc9 +0x053d:  lea    -0x20(%ebp),%eax
081b4ccc +0x0540:  mov    %eax,(%esp)
081b4ccf +0x0543:  call   081b526b <+0xadf>
081b4cd4 +0x0548:  test   %al,%al
081b4cd6 +0x054a:  je     081b4d33 <+0x5a7>
081b4cd8 +0x054c:  lea    -0x14(%ebp),%eax
081b4cdb +0x054f:  mov    0xc(%ebp),%edx
081b4cde +0x0552:  mov    %edx,0x4(%esp)
081b4ce2 +0x0556:  mov    %eax,(%esp)
081b4ce5 +0x0559:  call   081b4f6c <+0x7e0>
081b4cea +0x055e:  sub    $0x4,%esp
081b4ced +0x0561:  movl   $0x1,-0xc(%ebp)
081b4cf4 +0x0568:  lea    -0x10(%ebp),%eax
081b4cf7 +0x056b:  lea    -0xc(%ebp),%edx
081b4cfa +0x056e:  mov    %edx,0x8(%esp)
081b4cfe +0x0572:  lea    0x10(%ebp),%edx
081b4d01 +0x0575:  mov    %edx,0x4(%esp)
081b4d05 +0x0579:  mov    %eax,(%esp)
081b4d08 +0x057c:  call   081b4c4a <+0x4be>
081b4d0d +0x0581:  sub    $0x4,%esp
081b4d10 +0x0584:  lea    -0x18(%ebp),%eax
081b4d13 +0x0587:  mov    0x10(%ebp),%edx
081b4d16 +0x058a:  mov    %edx,0xc(%esp)
081b4d1a +0x058e:  mov    -0x14(%ebp),%edx
081b4d1d +0x0591:  mov    %edx,0x8(%esp)
081b4d21 +0x0595:  mov    -0x10(%ebp),%edx
081b4d24 +0x0598:  mov    %edx,0x4(%esp)
081b4d28 +0x059c:  mov    %eax,(%esp)
081b4d2b +0x059f:  call   081b5297 <+0xb0b>
081b4d30 +0x05a4:  sub    $0x4,%esp
081b4d33 +0x05a7:  mov    0xc(%ebp),%eax
081b4d36 +0x05aa:  mov    0x4(%eax),%eax
081b4d39 +0x05ad:  lea    -0x54(%eax),%edx
081b4d3c +0x05b0:  mov    0xc(%ebp),%eax
081b4d3f +0x05b3:  mov    %edx,0x4(%eax)
081b4d42 +0x05b6:  mov    0xc(%ebp),%eax
081b4d45 +0x05b9:  mov    0x4(%eax),%edx
081b4d48 +0x05bc:  mov    0xc(%ebp),%eax
081b4d4b +0x05bf:  mov    %edx,0x4(%esp)
081b4d4f +0x05c3:  mov    %eax,(%esp)
081b4d52 +0x05c6:  call   081b52fa <+0xb6e>
081b4d57 +0x05cb:  mov    0x10(%ebp),%eax
081b4d5a +0x05ce:  mov    %eax,(%ebx)
081b4d5c +0x05d0:  mov    %ebx,%eax
081b4d5e +0x05d2:  mov    -0x4(%ebp),%ebx
081b4d61 +0x05d5:  leave
081b4d62 +0x05d6:  ret    $0x4
081b4d65 +0x05d9:  nop
081b4d66 +0x05da:  push   %ebp
081b4d67 +0x05db:  mov    %esp,%ebp
081b4d69 +0x05dd:  push   %ebx
081b4d6a +0x05de:  sub    $0x24,%esp
081b4d6d +0x05e1:  mov    0x8(%ebp),%ebx
081b4d70 +0x05e4:  mov    0xc(%ebp),%eax
081b4d73 +0x05e7:  mov    0x4(%eax),%eax
081b4d76 +0x05ea:  mov    %eax,-0xc(%ebp)
081b4d79 +0x05ed:  lea    -0xc(%ebp),%eax
081b4d7c +0x05f0:  mov    %eax,0x4(%esp)
081b4d80 +0x05f4:  mov    %ebx,(%esp)
081b4d83 +0x05f7:  call   081b530e <+0xb82>
081b4d88 +0x05fc:  mov    %ebx,%eax
081b4d8a +0x05fe:  add    $0x24,%esp
081b4d8d +0x0601:  pop    %ebx
081b4d8e +0x0602:  pop    %ebp
081b4d8f +0x0603:  ret    $0x4
081b4d92 +0x0606:  push   %ebp
081b4d93 +0x0607:  mov    %esp,%ebp
081b4d95 +0x0609:  push   %ebx
081b4d96 +0x060a:  sub    $0x24,%esp
081b4d99 +0x060d:  mov    0x8(%ebp),%ebx
081b4d9c +0x0610:  mov    0xc(%ebp),%eax
081b4d9f +0x0613:  mov    (%eax),%eax
081b4da1 +0x0615:  mov    %eax,-0xc(%ebp)
081b4da4 +0x0618:  lea    -0xc(%ebp),%eax
081b4da7 +0x061b:  mov    %eax,0x4(%esp)
081b4dab +0x061f:  mov    %ebx,(%esp)
081b4dae +0x0622:  call   081b530e <+0xb82>
081b4db3 +0x0627:  mov    %ebx,%eax
081b4db5 +0x0629:  add    $0x24,%esp
081b4db8 +0x062c:  pop    %ebx
081b4db9 +0x062d:  pop    %ebp
081b4dba +0x062e:  ret    $0x4
081b4dbd +0x0631:  push   %ebp
081b4dbe +0x0632:  mov    %esp,%ebp
081b4dc0 +0x0634:  push   %ebx
081b4dc1 +0x0635:  sub    $0x14,%esp
081b4dc4 +0x0638:  mov    0x8(%ebp),%eax
081b4dc7 +0x063b:  mov    %eax,(%esp)
081b4dca +0x063e:  call   081b531e <+0xb92>
081b4dcf +0x0643:  mov    (%eax),%ebx
081b4dd1 +0x0645:  mov    0xc(%ebp),%eax
081b4dd4 +0x0648:  mov    %eax,(%esp)
081b4dd7 +0x064b:  call   081b531e <+0xb92>
081b4ddc +0x0650:  mov    (%eax),%eax
081b4dde +0x0652:  cmp    %eax,%ebx
081b4de0 +0x0654:  sete   %al
081b4de3 +0x0657:  add    $0x14,%esp
081b4de6 +0x065a:  pop    %ebx
081b4de7 +0x065b:  pop    %ebp
081b4de8 +0x065c:  ret
081b4de9 +0x065d:  nop
081b4dea +0x065e:  push   %ebp
081b4deb +0x065f:  mov    %esp,%ebp
081b4ded +0x0661:  push   %ebx
081b4dee +0x0662:  sub    $0x24,%esp
081b4df1 +0x0665:  mov    0x8(%ebp),%ebx
081b4df4 +0x0668:  mov    0xc(%ebp),%eax
081b4df7 +0x066b:  mov    0x4(%eax),%eax
081b4dfa +0x066e:  mov    %eax,-0xc(%ebp)
081b4dfd +0x0671:  lea    -0xc(%ebp),%eax
081b4e00 +0x0674:  mov    %eax,0x4(%esp)
081b4e04 +0x0678:  mov    %ebx,(%esp)
081b4e07 +0x067b:  call   081b5326 <+0xb9a>
081b4e0c +0x0680:  mov    %ebx,%eax
081b4e0e +0x0682:  add    $0x24,%esp
081b4e11 +0x0685:  pop    %ebx
081b4e12 +0x0686:  pop    %ebp
081b4e13 +0x0687:  ret    $0x4
081b4e16 +0x068a:  push   %ebp
081b4e17 +0x068b:  mov    %esp,%ebp
081b4e19 +0x068d:  push   %ebx
081b4e1a +0x068e:  sub    $0x24,%esp
081b4e1d +0x0691:  mov    0x8(%ebp),%ebx
081b4e20 +0x0694:  mov    0xc(%ebp),%eax
081b4e23 +0x0697:  mov    (%eax),%eax
081b4e25 +0x0699:  mov    %eax,-0xc(%ebp)
081b4e28 +0x069c:  lea    -0xc(%ebp),%eax
081b4e2b +0x069f:  mov    %eax,0x4(%esp)
081b4e2f +0x06a3:  mov    %ebx,(%esp)
081b4e32 +0x06a6:  call   081b5326 <+0xb9a>
081b4e37 +0x06ab:  mov    %ebx,%eax
081b4e39 +0x06ad:  add    $0x24,%esp
081b4e3c +0x06b0:  pop    %ebx
081b4e3d +0x06b1:  pop    %ebp
081b4e3e +0x06b2:  ret    $0x4
081b4e41 +0x06b5:  push   %ebp
081b4e42 +0x06b6:  mov    %esp,%ebp
081b4e44 +0x06b8:  push   %ebx
081b4e45 +0x06b9:  sub    $0x14,%esp
081b4e48 +0x06bc:  mov    0x8(%ebp),%eax
081b4e4b +0x06bf:  mov    %eax,(%esp)
081b4e4e +0x06c2:  call   081b5336 <+0xbaa>
081b4e53 +0x06c7:  mov    (%eax),%ebx
081b4e55 +0x06c9:  mov    0xc(%ebp),%eax
081b4e58 +0x06cc:  mov    %eax,(%esp)
081b4e5b +0x06cf:  call   081b5336 <+0xbaa>
081b4e60 +0x06d4:  mov    (%eax),%eax
081b4e62 +0x06d6:  cmp    %eax,%ebx
081b4e64 +0x06d8:  sete   %al
081b4e67 +0x06db:  add    $0x14,%esp
081b4e6a +0x06de:  pop    %ebx
081b4e6b +0x06df:  pop    %ebp
081b4e6c +0x06e0:  ret
081b4e6d +0x06e1:  nop
081b4e6e +0x06e2:  push   %ebp
081b4e6f +0x06e3:  mov    %esp,%ebp
081b4e71 +0x06e5:  mov    0x8(%ebp),%eax
081b4e74 +0x06e8:  mov    0x4(%eax),%eax
081b4e77 +0x06eb:  mov    %eax,%edx
081b4e79 +0x06ed:  mov    0x8(%ebp),%eax
081b4e7c +0x06f0:  mov    (%eax),%eax
081b4e7e +0x06f2:  mov    %edx,%ecx
081b4e80 +0x06f4:  sub    %eax,%ecx
081b4e82 +0x06f6:  mov    %ecx,%eax
081b4e84 +0x06f8:  sar    $0x2,%eax
081b4e87 +0x06fb:  imul   $0xaaaaaaab,%eax,%eax
081b4e8d +0x0701:  pop    %ebp
081b4e8e +0x0702:  ret
081b4e8f +0x0703:  nop
081b4e90 +0x0704:  push   %ebp
081b4e91 +0x0705:  mov    %esp,%ebp
081b4e93 +0x0707:  mov    0x8(%ebp),%eax
081b4e96 +0x070a:  mov    (%eax),%ecx
081b4e98 +0x070c:  mov    0xc(%ebp),%edx
081b4e9b +0x070f:  mov    %edx,%eax
081b4e9d +0x0711:  add    %eax,%eax
081b4e9f +0x0713:  add    %edx,%eax
081b4ea1 +0x0715:  shl    $0x2,%eax
081b4ea4 +0x0718:  lea    (%ecx,%eax,1),%eax
081b4ea7 +0x071b:  pop    %ebp
081b4ea8 +0x071c:  ret
081b4ea9 +0x071d:  nop
081b4eaa +0x071e:  push   %ebp
081b4eab +0x071f:  mov    %esp,%ebp
081b4ead +0x0721:  push   %ebx
081b4eae +0x0722:  sub    $0x24,%esp
081b4eb1 +0x0725:  mov    0x8(%ebp),%ebx
081b4eb4 +0x0728:  mov    0xc(%ebp),%eax
081b4eb7 +0x072b:  mov    0x4(%eax),%eax
081b4eba +0x072e:  mov    %eax,-0xc(%ebp)
081b4ebd +0x0731:  lea    -0xc(%ebp),%eax
081b4ec0 +0x0734:  mov    %eax,0x4(%esp)
081b4ec4 +0x0738:  mov    %ebx,(%esp)
081b4ec7 +0x073b:  call   081b533e <+0xbb2>
081b4ecc +0x0740:  mov    %ebx,%eax
081b4ece +0x0742:  add    $0x24,%esp
081b4ed1 +0x0745:  pop    %ebx
081b4ed2 +0x0746:  pop    %ebp
081b4ed3 +0x0747:  ret    $0x4
081b4ed6 +0x074a:  push   %ebp
081b4ed7 +0x074b:  mov    %esp,%ebp
081b4ed9 +0x074d:  push   %ebx
081b4eda +0x074e:  sub    $0x24,%esp
081b4edd +0x0751:  mov    0x8(%ebp),%ebx
081b4ee0 +0x0754:  mov    0xc(%ebp),%eax
081b4ee3 +0x0757:  mov    (%eax),%eax
081b4ee5 +0x0759:  mov    %eax,-0xc(%ebp)
081b4ee8 +0x075c:  lea    -0xc(%ebp),%eax
081b4eeb +0x075f:  mov    %eax,0x4(%esp)
081b4eef +0x0763:  mov    %ebx,(%esp)
081b4ef2 +0x0766:  call   081b533e <+0xbb2>
081b4ef7 +0x076b:  mov    %ebx,%eax
081b4ef9 +0x076d:  add    $0x24,%esp
081b4efc +0x0770:  pop    %ebx
081b4efd +0x0771:  pop    %ebp
081b4efe +0x0772:  ret    $0x4
081b4f01 +0x0775:  push   %ebp
081b4f02 +0x0776:  mov    %esp,%ebp
081b4f04 +0x0778:  push   %ebx
081b4f05 +0x0779:  sub    $0x14,%esp
081b4f08 +0x077c:  mov    0x8(%ebp),%eax
081b4f0b +0x077f:  mov    %eax,(%esp)
081b4f0e +0x0782:  call   081b534e <+0xbc2>
081b4f13 +0x0787:  mov    (%eax),%ebx
081b4f15 +0x0789:  mov    0xc(%ebp),%eax
081b4f18 +0x078c:  mov    %eax,(%esp)
081b4f1b +0x078f:  call   081b534e <+0xbc2>
081b4f20 +0x0794:  mov    (%eax),%eax
081b4f22 +0x0796:  cmp    %eax,%ebx
081b4f24 +0x0798:  sete   %al
081b4f27 +0x079b:  add    $0x14,%esp
081b4f2a +0x079e:  pop    %ebx
081b4f2b +0x079f:  pop    %ebp
081b4f2c +0x07a0:  ret
081b4f2d +0x07a1:  nop
081b4f2e +0x07a2:  push   %ebp
081b4f2f +0x07a3:  mov    %esp,%ebp
081b4f31 +0x07a5:  push   %edi
081b4f32 +0x07a6:  push   %esi
081b4f33 +0x07a7:  push   %ebx
081b4f34 +0x07a8:  sub    $0x1c,%esp
081b4f37 +0x07ab:  mov    0xc(%ebp),%eax
081b4f3a +0x07ae:  mov    %eax,0x4(%esp)
081b4f3e +0x07b2:  movl   $0x54,(%esp)
081b4f45 +0x07b9:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
081b4f4a +0x07be:  mov    %eax,%edx
081b4f4c +0x07c0:  test   %edx,%edx
081b4f4e +0x07c2:  je     081b4f64 <+0x7d8>
081b4f50 +0x07c4:  mov    %eax,%edx
081b4f52 +0x07c6:  mov    0x10(%ebp),%eax
081b4f55 +0x07c9:  mov    %eax,%ebx
081b4f57 +0x07cb:  mov    $0x15,%eax
081b4f5c +0x07d0:  mov    %edx,%edi
081b4f5e +0x07d2:  mov    %ebx,%esi
081b4f60 +0x07d4:  mov    %eax,%ecx
081b4f62 +0x07d6:  rep movsl %ds:(%esi),%es:(%edi)
081b4f64 +0x07d8:  add    $0x1c,%esp
081b4f67 +0x07db:  pop    %ebx
081b4f68 +0x07dc:  pop    %esi
081b4f69 +0x07dd:  pop    %edi
081b4f6a +0x07de:  pop    %ebp
081b4f6b +0x07df:  ret
081b4f6c +0x07e0:  push   %ebp
081b4f6d +0x07e1:  mov    %esp,%ebp
081b4f6f +0x07e3:  push   %ebx
081b4f70 +0x07e4:  sub    $0x14,%esp
081b4f73 +0x07e7:  mov    0x8(%ebp),%ebx
081b4f76 +0x07ea:  mov    0xc(%ebp),%eax
081b4f79 +0x07ed:  add    $0x4,%eax
081b4f7c +0x07f0:  mov    %eax,0x4(%esp)
081b4f80 +0x07f4:  mov    %ebx,(%esp)
081b4f83 +0x07f7:  call   081b525c <+0xad0>
081b4f88 +0x07fc:  mov    %ebx,%eax
081b4f8a +0x07fe:  add    $0x14,%esp
081b4f8d +0x0801:  pop    %ebx
081b4f8e +0x0802:  pop    %ebp
081b4f8f +0x0803:  ret    $0x4
081b4f92 +0x0806:  push   %ebp
081b4f93 +0x0807:  mov    %esp,%ebp
081b4f95 +0x0809:  push   %edi
081b4f96 +0x080a:  push   %esi
081b4f97 +0x080b:  push   %ebx
081b4f98 +0x080c:  sub    $0x3c,%esp
081b4f9b +0x080f:  mov    0x8(%ebp),%eax
081b4f9e +0x0812:  mov    0x4(%eax),%edx
081b4fa1 +0x0815:  mov    0x8(%ebp),%eax
081b4fa4 +0x0818:  mov    0x8(%eax),%eax
081b4fa7 +0x081b:  cmp    %eax,%edx
081b4fa9 +0x081d:  je     081b5048 <+0x8bc>
081b4faf +0x0823:  mov    0x8(%ebp),%eax
081b4fb2 +0x0826:  mov    0x4(%eax),%eax
081b4fb5 +0x0829:  sub    $0x54,%eax
081b4fb8 +0x082c:  mov    %eax,(%esp)
081b4fbb +0x082f:  call   081b5356 <+0xbca>
081b4fc0 +0x0834:  mov    0x8(%ebp),%edx
081b4fc3 +0x0837:  mov    0x4(%edx),%ecx
081b4fc6 +0x083a:  mov    0x8(%ebp),%edx
081b4fc9 +0x083d:  mov    %eax,0x8(%esp)
081b4fcd +0x0841:  mov    %ecx,0x4(%esp)
081b4fd1 +0x0845:  mov    %edx,(%esp)
081b4fd4 +0x0848:  call   081b535e <+0xbd2>
081b4fd9 +0x084d:  mov    0x8(%ebp),%eax
081b4fdc +0x0850:  mov    0x4(%eax),%eax
081b4fdf +0x0853:  lea    0x54(%eax),%edx
081b4fe2 +0x0856:  mov    0x8(%ebp),%eax
081b4fe5 +0x0859:  mov    %edx,0x4(%eax)
081b4fe8 +0x085c:  mov    0x8(%ebp),%eax
081b4feb +0x085f:  mov    0x4(%eax),%eax
081b4fee +0x0862:  lea    -0x54(%eax),%esi
081b4ff1 +0x0865:  mov    0x8(%ebp),%eax
081b4ff4 +0x0868:  mov    0x4(%eax),%eax
081b4ff7 +0x086b:  lea    -0xa8(%eax),%ebx
081b4ffd +0x0871:  lea    0xc(%ebp),%eax
081b5000 +0x0874:  mov    %eax,(%esp)
081b5003 +0x0877:  call   081b53a4 <+0xc18>
081b5008 +0x087c:  mov    (%eax),%eax
081b500a +0x087e:  mov    %esi,0x8(%esp)
081b500e +0x0882:  mov    %ebx,0x4(%esp)
081b5012 +0x0886:  mov    %eax,(%esp)
081b5015 +0x0889:  call   081b53ac <+0xc20>
081b501a +0x088e:  lea    0xc(%ebp),%eax
081b501d +0x0891:  mov    %eax,(%esp)
081b5020 +0x0894:  call   081b53ec <+0xc60>
081b5025 +0x0899:  mov    %eax,%ebx
081b5027 +0x089b:  mov    0x10(%ebp),%eax
081b502a +0x089e:  mov    %eax,(%esp)
081b502d +0x08a1:  call   081b53e4 <+0xc58>
081b5032 +0x08a6:  mov    %ebx,%edx
081b5034 +0x08a8:  mov    %eax,%ebx
081b5036 +0x08aa:  mov    $0x15,%eax
081b503b +0x08af:  mov    %edx,%edi
081b503d +0x08b1:  mov    %ebx,%esi
081b503f +0x08b3:  mov    %eax,%ecx
081b5041 +0x08b5:  rep movsl %ds:(%esi),%es:(%edi)
081b5043 +0x08b7:  jmp    081b5250 <+0xac4>
081b5048 +0x08bc:  movl   $"vector::_M_insert_aux",0x8(%esp)
081b5050 +0x08c4:  movl   $0x1,0x4(%esp)
081b5058 +0x08cc:  mov    0x8(%ebp),%eax
081b505b +0x08cf:  mov    %eax,(%esp)
081b505e +0x08d2:  call   081b53f6 <+0xc6a>
081b5063 +0x08d7:  mov    %eax,-0x28(%ebp)
081b5066 +0x08da:  lea    -0x2c(%ebp),%eax
081b5069 +0x08dd:  mov    0x8(%ebp),%edx
081b506c +0x08e0:  mov    %edx,0x4(%esp)
081b5070 +0x08e4:  mov    %eax,(%esp)
081b5073 +0x08e7:  call   081b4c26 <+0x49a>
081b5078 +0x08ec:  sub    $0x4,%esp
081b507b +0x08ef:  lea    -0x2c(%ebp),%eax
081b507e +0x08f2:  mov    %eax,0x4(%esp)
081b5082 +0x08f6:  lea    0xc(%ebp),%eax
081b5085 +0x08f9:  mov    %eax,(%esp)
081b5088 +0x08fc:  call   081b549b <+0xd0f>
081b508d +0x0901:  mov    %eax,-0x24(%ebp)
081b5090 +0x0904:  mov    0x8(%ebp),%eax
081b5093 +0x0907:  mov    -0x28(%ebp),%edx
081b5096 +0x090a:  mov    %edx,0x4(%esp)
081b509a +0x090e:  mov    %eax,(%esp)
081b509d +0x0911:  call   081b54d4 <+0xd48>
081b50a2 +0x0916:  mov    %eax,-0x20(%ebp)
081b50a5 +0x0919:  mov    -0x20(%ebp),%eax
081b50a8 +0x091c:  mov    %eax,-0x1c(%ebp)
081b50ab +0x091f:  mov    0x10(%ebp),%eax
081b50ae +0x0922:  mov    %eax,(%esp)
081b50b1 +0x0925:  call   081b53e4 <+0xc58>
081b50b6 +0x092a:  mov    -0x24(%ebp),%edx
081b50b9 +0x092d:  imul   $0x54,%edx,%edx
081b50bc +0x0930:  mov    %edx,%ecx
081b50be +0x0932:  add    -0x20(%ebp),%ecx
081b50c1 +0x0935:  mov    0x8(%ebp),%edx
081b50c4 +0x0938:  mov    %eax,0x8(%esp)
081b50c8 +0x093c:  mov    %ecx,0x4(%esp)
081b50cc +0x0940:  mov    %edx,(%esp)
081b50cf +0x0943:  call   081b4f2e <+0x7a2>
081b50d4 +0x0948:  movl   $0x0,-0x1c(%ebp)
081b50db +0x094f:  mov    0x8(%ebp),%eax
081b50de +0x0952:  mov    %eax,(%esp)
081b50e1 +0x0955:  call   081b5504 <+0xd78>
081b50e6 +0x095a:  mov    %eax,%ebx
081b50e8 +0x095c:  lea    0xc(%ebp),%eax
081b50eb +0x095f:  mov    %eax,(%esp)
081b50ee +0x0962:  call   081b53a4 <+0xc18>
081b50f3 +0x0967:  mov    (%eax),%edx
081b50f5 +0x0969:  mov    0x8(%ebp),%eax
081b50f8 +0x096c:  mov    (%eax),%eax
081b50fa +0x096e:  mov    %ebx,0xc(%esp)
081b50fe +0x0972:  mov    -0x20(%ebp),%ecx
081b5101 +0x0975:  mov    %ecx,0x8(%esp)
081b5105 +0x0979:  mov    %edx,0x4(%esp)
081b5109 +0x097d:  mov    %eax,(%esp)
081b510c +0x0980:  call   081b550c <+0xd80>
081b5111 +0x0985:  mov    %eax,-0x1c(%ebp)
081b5114 +0x0988:  addl   $0x54,-0x1c(%ebp)
081b5118 +0x098c:  mov    0x8(%ebp),%eax
081b511b +0x098f:  mov    %eax,(%esp)
081b511e +0x0992:  call   081b5504 <+0xd78>
081b5123 +0x0997:  mov    %eax,%ebx
081b5125 +0x0999:  mov    0x8(%ebp),%eax
081b5128 +0x099c:  mov    0x4(%eax),%esi
081b512b +0x099f:  lea    0xc(%ebp),%eax
081b512e +0x09a2:  mov    %eax,(%esp)
081b5131 +0x09a5:  call   081b53a4 <+0xc18>
081b5136 +0x09aa:  mov    (%eax),%eax
081b5138 +0x09ac:  mov    %ebx,0xc(%esp)
081b513c +0x09b0:  mov    -0x1c(%ebp),%edx
081b513f +0x09b3:  mov    %edx,0x8(%esp)
081b5143 +0x09b7:  mov    %esi,0x4(%esp)
081b5147 +0x09bb:  mov    %eax,(%esp)
081b514a +0x09be:  call   081b550c <+0xd80>
081b514f +0x09c3:  mov    %eax,-0x1c(%ebp)
081b5152 +0x09c6:  mov    0x8(%ebp),%eax
081b5155 +0x09c9:  mov    %eax,(%esp)
081b5158 +0x09cc:  call   081b5504 <+0xd78>
081b515d +0x09d1:  mov    0x8(%ebp),%edx
081b5160 +0x09d4:  mov    0x4(%edx),%ecx
081b5163 +0x09d7:  mov    0x8(%ebp),%edx
081b5166 +0x09da:  mov    (%edx),%edx
081b5168 +0x09dc:  mov    %eax,0x8(%esp)
081b516c +0x09e0:  mov    %ecx,0x4(%esp)
081b5170 +0x09e4:  mov    %edx,(%esp)
081b5173 +0x09e7:  call   081b555e <+0xdd2>
081b5178 +0x09ec:  mov    0x8(%ebp),%eax
081b517b +0x09ef:  mov    0x8(%eax),%eax
081b517e +0x09f2:  mov    %eax,%edx
081b5180 +0x09f4:  mov    0x8(%ebp),%eax
081b5183 +0x09f7:  mov    (%eax),%eax
081b5185 +0x09f9:  mov    %edx,%ecx
081b5187 +0x09fb:  sub    %eax,%ecx
081b5189 +0x09fd:  mov    %ecx,%eax
081b518b +0x09ff:  sar    $0x2,%eax
081b518e +0x0a02:  imul   $0x3cf3cf3d,%eax,%eax
081b5194 +0x0a08:  mov    %eax,%ecx
081b5196 +0x0a0a:  mov    0x8(%ebp),%eax
081b5199 +0x0a0d:  mov    (%eax),%edx
081b519b +0x0a0f:  mov    0x8(%ebp),%eax
081b519e +0x0a12:  mov    %ecx,0x8(%esp)
081b51a2 +0x0a16:  mov    %edx,0x4(%esp)
081b51a6 +0x0a1a:  mov    %eax,(%esp)
081b51a9 +0x0a1d:  call   081b5578 <+0xdec>
081b51ae +0x0a22:  mov    0x8(%ebp),%eax
081b51b1 +0x0a25:  mov    -0x20(%ebp),%edx
081b51b4 +0x0a28:  mov    %edx,(%eax)
081b51b6 +0x0a2a:  mov    0x8(%ebp),%eax
081b51b9 +0x0a2d:  mov    -0x1c(%ebp),%edx
081b51bc +0x0a30:  mov    %edx,0x4(%eax)
081b51bf +0x0a33:  mov    -0x28(%ebp),%eax
081b51c2 +0x0a36:  imul   $0x54,%eax,%eax
081b51c5 +0x0a39:  mov    %eax,%edx
081b51c7 +0x0a3b:  add    -0x20(%ebp),%edx
081b51ca +0x0a3e:  mov    0x8(%ebp),%eax
081b51cd +0x0a41:  mov    %edx,0x8(%eax)
081b51d0 +0x0a44:  jmp    081b5250 <+0xac4>
081b51d2 +0x0a46:  mov    %eax,(%esp)
081b51d5 +0x0a49:  call   08725ce0 <__cxa_begin_catch>
081b51da +0x0a4e:  cmpl   $0x0,-0x1c(%ebp)
081b51de +0x0a52:  jne    081b51fc <+0xa70>
081b51e0 +0x0a54:  mov    -0x24(%ebp),%eax
081b51e3 +0x0a57:  imul   $0x54,%eax,%eax
081b51e6 +0x0a5a:  mov    %eax,%edx
081b51e8 +0x0a5c:  add    -0x20(%ebp),%edx
081b51eb +0x0a5f:  mov    0x8(%ebp),%eax
081b51ee +0x0a62:  mov    %edx,0x4(%esp)
081b51f2 +0x0a66:  mov    %eax,(%esp)
081b51f5 +0x0a69:  call   081b52fa <+0xb6e>
081b51fa +0x0a6e:  jmp    081b521d <+0xa91>
081b51fc +0x0a70:  mov    0x8(%ebp),%eax
081b51ff +0x0a73:  mov    %eax,(%esp)
081b5202 +0x0a76:  call   081b5504 <+0xd78>
081b5207 +0x0a7b:  mov    %eax,0x8(%esp)
081b520b +0x0a7f:  mov    -0x1c(%ebp),%eax
081b520e +0x0a82:  mov    %eax,0x4(%esp)
081b5212 +0x0a86:  mov    -0x20(%ebp),%eax
081b5215 +0x0a89:  mov    %eax,(%esp)
081b5218 +0x0a8c:  call   081b555e <+0xdd2>
081b521d +0x0a91:  mov    0x8(%ebp),%eax
081b5220 +0x0a94:  mov    -0x28(%ebp),%edx
081b5223 +0x0a97:  mov    %edx,0x8(%esp)
081b5227 +0x0a9b:  mov    -0x20(%ebp),%edx
081b522a +0x0a9e:  mov    %edx,0x4(%esp)
081b522e +0x0aa2:  mov    %eax,(%esp)
081b5231 +0x0aa5:  call   081b5578 <+0xdec>
081b5236 +0x0aaa:  call   08724be0 <__cxa_rethrow>
081b523b +0x0aaf:  mov    %edx,%ebx
081b523d +0x0ab1:  mov    %eax,%esi
081b523f +0x0ab3:  call   08725c30 <__cxa_end_catch>
081b5244 +0x0ab8:  mov    %esi,%eax
081b5246 +0x0aba:  mov    %ebx,%edx
081b5248 +0x0abc:  mov    %eax,(%esp)
081b524b +0x0abf:  call   08ae3750 <_Unwind_Resume>
081b5250 +0x0ac4:  lea    -0xc(%ebp),%esp
081b5253 +0x0ac7:  add    $0x0,%esp
081b5256 +0x0aca:  pop    %ebx
081b5257 +0x0acb:  pop    %esi
081b5258 +0x0acc:  pop    %edi
081b5259 +0x0acd:  pop    %ebp
081b525a +0x0ace:  ret
081b525b +0x0acf:  nop
081b525c +0x0ad0:  push   %ebp
081b525d +0x0ad1:  mov    %esp,%ebp
081b525f +0x0ad3:  mov    0xc(%ebp),%eax
081b5262 +0x0ad6:  mov    (%eax),%edx
081b5264 +0x0ad8:  mov    0x8(%ebp),%eax
081b5267 +0x0adb:  mov    %edx,(%eax)
081b5269 +0x0add:  pop    %ebp
081b526a +0x0ade:  ret
081b526b +0x0adf:  push   %ebp
081b526c +0x0ae0:  mov    %esp,%ebp
081b526e +0x0ae2:  push   %ebx
081b526f +0x0ae3:  sub    $0x14,%esp
081b5272 +0x0ae6:  mov    0x8(%ebp),%eax
081b5275 +0x0ae9:  mov    %eax,(%esp)
081b5278 +0x0aec:  call   081b53a4 <+0xc18>
081b527d +0x0af1:  mov    (%eax),%ebx
081b527f +0x0af3:  mov    0xc(%ebp),%eax
081b5282 +0x0af6:  mov    %eax,(%esp)
081b5285 +0x0af9:  call   081b53a4 <+0xc18>
081b528a +0x0afe:  mov    (%eax),%eax
081b528c +0x0b00:  cmp    %eax,%ebx
081b528e +0x0b02:  setne  %al
081b5291 +0x0b05:  add    $0x14,%esp
081b5294 +0x0b08:  pop    %ebx
081b5295 +0x0b09:  pop    %ebp
081b5296 +0x0b0a:  ret
081b5297 +0x0b0b:  push   %ebp
081b5298 +0x0b0c:  mov    %esp,%ebp
081b529a +0x0b0e:  push   %ebx
081b529b +0x0b0f:  sub    $0x24,%esp
081b529e +0x0b12:  mov    0x8(%ebp),%ebx
081b52a1 +0x0b15:  lea    -0x10(%ebp),%eax
081b52a4 +0x0b18:  mov    0x10(%ebp),%edx
081b52a7 +0x0b1b:  mov    %edx,0x4(%esp)
081b52ab +0x0b1f:  mov    %eax,(%esp)
081b52ae +0x0b22:  call   081b559f <+0xe13>
081b52b3 +0x0b27:  sub    $0x4,%esp
081b52b6 +0x0b2a:  lea    -0xc(%ebp),%eax
081b52b9 +0x0b2d:  mov    0xc(%ebp),%edx
081b52bc +0x0b30:  mov    %edx,0x4(%esp)
081b52c0 +0x0b34:  mov    %eax,(%esp)
081b52c3 +0x0b37:  call   081b559f <+0xe13>
081b52c8 +0x0b3c:  sub    $0x4,%esp
081b52cb +0x0b3f:  mov    0x14(%ebp),%eax
081b52ce +0x0b42:  mov    %eax,0xc(%esp)
081b52d2 +0x0b46:  mov    -0x10(%ebp),%eax
081b52d5 +0x0b49:  mov    %eax,0x8(%esp)
081b52d9 +0x0b4d:  mov    -0xc(%ebp),%eax
081b52dc +0x0b50:  mov    %eax,0x4(%esp)
081b52e0 +0x0b54:  mov    %ebx,(%esp)
081b52e3 +0x0b57:  call   081b55ae <+0xe22>
081b52e8 +0x0b5c:  sub    $0x4,%esp
081b52eb +0x0b5f:  mov    %ebx,%eax
081b52ed +0x0b61:  mov    -0x4(%ebp),%ebx
081b52f0 +0x0b64:  leave
081b52f1 +0x0b65:  ret    $0x4
081b52f4 +0x0b68:  push   %ebp
081b52f5 +0x0b69:  mov    %esp,%ebp
081b52f7 +0x0b6b:  pop    %ebp
081b52f8 +0x0b6c:  ret
081b52f9 +0x0b6d:  nop
081b52fa +0x0b6e:  push   %ebp
081b52fb +0x0b6f:  mov    %esp,%ebp
081b52fd +0x0b71:  sub    $0x18,%esp
081b5300 +0x0b74:  mov    0xc(%ebp),%eax
081b5303 +0x0b77:  mov    %eax,(%esp)
081b5306 +0x0b7a:  call   081b52f4 <+0xb68>
081b530b +0x0b7f:  leave
081b530c +0x0b80:  ret
081b530d +0x0b81:  nop
081b530e +0x0b82:  push   %ebp
081b530f +0x0b83:  mov    %esp,%ebp
081b5311 +0x0b85:  mov    0xc(%ebp),%eax
081b5314 +0x0b88:  mov    (%eax),%edx
081b5316 +0x0b8a:  mov    0x8(%ebp),%eax
081b5319 +0x0b8d:  mov    %edx,(%eax)
081b531b +0x0b8f:  pop    %ebp
081b531c +0x0b90:  ret
081b531d +0x0b91:  nop
081b531e +0x0b92:  push   %ebp
081b531f +0x0b93:  mov    %esp,%ebp
081b5321 +0x0b95:  mov    0x8(%ebp),%eax
081b5324 +0x0b98:  pop    %ebp
081b5325 +0x0b99:  ret
081b5326 +0x0b9a:  push   %ebp
081b5327 +0x0b9b:  mov    %esp,%ebp
081b5329 +0x0b9d:  mov    0xc(%ebp),%eax
081b532c +0x0ba0:  mov    (%eax),%edx
081b532e +0x0ba2:  mov    0x8(%ebp),%eax
081b5331 +0x0ba5:  mov    %edx,(%eax)
081b5333 +0x0ba7:  pop    %ebp
081b5334 +0x0ba8:  ret
081b5335 +0x0ba9:  nop
081b5336 +0x0baa:  push   %ebp
081b5337 +0x0bab:  mov    %esp,%ebp
081b5339 +0x0bad:  mov    0x8(%ebp),%eax
081b533c +0x0bb0:  pop    %ebp
081b533d +0x0bb1:  ret
081b533e +0x0bb2:  push   %ebp
081b533f +0x0bb3:  mov    %esp,%ebp
081b5341 +0x0bb5:  mov    0xc(%ebp),%eax
081b5344 +0x0bb8:  mov    (%eax),%edx
081b5346 +0x0bba:  mov    0x8(%ebp),%eax
081b5349 +0x0bbd:  mov    %edx,(%eax)
081b534b +0x0bbf:  pop    %ebp
081b534c +0x0bc0:  ret
081b534d +0x0bc1:  nop
081b534e +0x0bc2:  push   %ebp
081b534f +0x0bc3:  mov    %esp,%ebp
081b5351 +0x0bc5:  mov    0x8(%ebp),%eax
081b5354 +0x0bc8:  pop    %ebp
081b5355 +0x0bc9:  ret
081b5356 +0x0bca:  push   %ebp
081b5357 +0x0bcb:  mov    %esp,%ebp
081b5359 +0x0bcd:  mov    0x8(%ebp),%eax
081b535c +0x0bd0:  pop    %ebp
081b535d +0x0bd1:  ret
081b535e +0x0bd2:  push   %ebp
081b535f +0x0bd3:  mov    %esp,%ebp
081b5361 +0x0bd5:  push   %edi
081b5362 +0x0bd6:  push   %esi
081b5363 +0x0bd7:  push   %ebx
081b5364 +0x0bd8:  sub    $0x1c,%esp
081b5367 +0x0bdb:  mov    0x10(%ebp),%eax
081b536a +0x0bde:  mov    %eax,(%esp)
081b536d +0x0be1:  call   081b560d <+0xe81>
081b5372 +0x0be6:  mov    %eax,%ebx
081b5374 +0x0be8:  mov    0xc(%ebp),%eax
081b5377 +0x0beb:  mov    %eax,0x4(%esp)
081b537b +0x0bef:  movl   $0x54,(%esp)
081b5382 +0x0bf6:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
081b5387 +0x0bfb:  mov    %eax,%edx
081b5389 +0x0bfd:  test   %edx,%edx
081b538b +0x0bff:  je     081b539c <+0xc10>
081b538d +0x0c01:  mov    %eax,%edx
081b538f +0x0c03:  mov    $0x15,%eax
081b5394 +0x0c08:  mov    %edx,%edi
081b5396 +0x0c0a:  mov    %ebx,%esi
081b5398 +0x0c0c:  mov    %eax,%ecx
081b539a +0x0c0e:  rep movsl %ds:(%esi),%es:(%edi)
081b539c +0x0c10:  add    $0x1c,%esp
081b539f +0x0c13:  pop    %ebx
081b53a0 +0x0c14:  pop    %esi
081b53a1 +0x0c15:  pop    %edi
081b53a2 +0x0c16:  pop    %ebp
081b53a3 +0x0c17:  ret
081b53a4 +0x0c18:  push   %ebp
081b53a5 +0x0c19:  mov    %esp,%ebp
081b53a7 +0x0c1b:  mov    0x8(%ebp),%eax
081b53aa +0x0c1e:  pop    %ebp
081b53ab +0x0c1f:  ret
081b53ac +0x0c20:  push   %ebp
081b53ad +0x0c21:  mov    %esp,%ebp
081b53af +0x0c23:  push   %ebx
081b53b0 +0x0c24:  sub    $0x14,%esp
081b53b3 +0x0c27:  mov    0xc(%ebp),%eax
081b53b6 +0x0c2a:  mov    %eax,(%esp)
081b53b9 +0x0c2d:  call   081b5615 <+0xe89>
081b53be +0x0c32:  mov    %eax,%ebx
081b53c0 +0x0c34:  mov    0x8(%ebp),%eax
081b53c3 +0x0c37:  mov    %eax,(%esp)
081b53c6 +0x0c3a:  call   081b5615 <+0xe89>
081b53cb +0x0c3f:  mov    0x10(%ebp),%edx
081b53ce +0x0c42:  mov    %edx,0x8(%esp)
081b53d2 +0x0c46:  mov    %ebx,0x4(%esp)
081b53d6 +0x0c4a:  mov    %eax,(%esp)
081b53d9 +0x0c4d:  call   081b561d <+0xe91>
081b53de +0x0c52:  add    $0x14,%esp
081b53e1 +0x0c55:  pop    %ebx
081b53e2 +0x0c56:  pop    %ebp
081b53e3 +0x0c57:  ret
081b53e4 +0x0c58:  push   %ebp
081b53e5 +0x0c59:  mov    %esp,%ebp
081b53e7 +0x0c5b:  mov    0x8(%ebp),%eax
081b53ea +0x0c5e:  pop    %ebp
081b53eb +0x0c5f:  ret
081b53ec +0x0c60:  push   %ebp
081b53ed +0x0c61:  mov    %esp,%ebp
081b53ef +0x0c63:  mov    0x8(%ebp),%eax
081b53f2 +0x0c66:  mov    (%eax),%eax
081b53f4 +0x0c68:  pop    %ebp
081b53f5 +0x0c69:  ret
081b53f6 +0x0c6a:  push   %ebp
081b53f7 +0x0c6b:  mov    %esp,%ebp
081b53f9 +0x0c6d:  push   %ebx
081b53fa +0x0c6e:  sub    $0x24,%esp
081b53fd +0x0c71:  mov    0x8(%ebp),%eax
081b5400 +0x0c74:  mov    %eax,(%esp)
081b5403 +0x0c77:  call   081b5662 <+0xed6>
081b5408 +0x0c7c:  mov    %eax,%ebx
081b540a +0x0c7e:  mov    0x8(%ebp),%eax
081b540d +0x0c81:  mov    %eax,(%esp)
081b5410 +0x0c84:  call   081b4b24 <+0x398>
081b5415 +0x0c89:  mov    %ebx,%edx
081b5417 +0x0c8b:  sub    %eax,%edx
081b5419 +0x0c8d:  mov    0xc(%ebp),%eax
081b541c +0x0c90:  cmp    %eax,%edx
081b541e +0x0c92:  setb   %al
081b5421 +0x0c95:  test   %al,%al
081b5423 +0x0c97:  je     081b5430 <+0xca4>
081b5425 +0x0c99:  mov    0x10(%ebp),%eax
081b5428 +0x0c9c:  mov    %eax,(%esp)
081b542b +0x0c9f:  call   086d9c40 <_ZSt20__throw_length_errorPKc>  ; std::__throw_length_error(char const*)
081b5430 +0x0ca4:  mov    0x8(%ebp),%eax
081b5433 +0x0ca7:  mov    %eax,(%esp)
081b5436 +0x0caa:  call   081b4b24 <+0x398>
081b543b +0x0caf:  mov    %eax,%ebx
081b543d +0x0cb1:  mov    0x8(%ebp),%eax
081b5440 +0x0cb4:  mov    %eax,(%esp)
081b5443 +0x0cb7:  call   081b4b24 <+0x398>
081b5448 +0x0cbc:  mov    %eax,-0x10(%ebp)
081b544b +0x0cbf:  lea    0xc(%ebp),%eax
081b544e +0x0cc2:  mov    %eax,0x4(%esp)
081b5452 +0x0cc6:  lea    -0x10(%ebp),%eax
081b5455 +0x0cc9:  mov    %eax,(%esp)
081b5458 +0x0ccc:  call   0807f531 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x601>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x601
081b545d +0x0cd1:  mov    (%eax),%eax
081b545f +0x0cd3:  lea    (%ebx,%eax,1),%eax
081b5462 +0x0cd6:  mov    %eax,-0xc(%ebp)
081b5465 +0x0cd9:  mov    0x8(%ebp),%eax
081b5468 +0x0cdc:  mov    %eax,(%esp)
081b546b +0x0cdf:  call   081b4b24 <+0x398>
081b5470 +0x0ce4:  cmp    -0xc(%ebp),%eax
081b5473 +0x0ce7:  ja     081b5485 <+0xcf9>
081b5475 +0x0ce9:  mov    0x8(%ebp),%eax
081b5478 +0x0cec:  mov    %eax,(%esp)
081b547b +0x0cef:  call   081b5662 <+0xed6>
081b5480 +0x0cf4:  cmp    -0xc(%ebp),%eax
081b5483 +0x0cf7:  jae    081b5492 <+0xd06>
081b5485 +0x0cf9:  mov    0x8(%ebp),%eax
081b5488 +0x0cfc:  mov    %eax,(%esp)
081b548b +0x0cff:  call   081b5662 <+0xed6>
081b5490 +0x0d04:  jmp    081b5495 <+0xd09>
081b5492 +0x0d06:  mov    -0xc(%ebp),%eax
081b5495 +0x0d09:  add    $0x24,%esp
081b5498 +0x0d0c:  pop    %ebx
081b5499 +0x0d0d:  pop    %ebp
081b549a +0x0d0e:  ret
081b549b +0x0d0f:  push   %ebp
081b549c +0x0d10:  mov    %esp,%ebp
081b549e +0x0d12:  push   %ebx
081b549f +0x0d13:  sub    $0x14,%esp
081b54a2 +0x0d16:  mov    0x8(%ebp),%eax
081b54a5 +0x0d19:  mov    %eax,(%esp)
081b54a8 +0x0d1c:  call   081b53a4 <+0xc18>
081b54ad +0x0d21:  mov    (%eax),%eax
081b54af +0x0d23:  mov    %eax,%ebx
081b54b1 +0x0d25:  mov    0xc(%ebp),%eax
081b54b4 +0x0d28:  mov    %eax,(%esp)
081b54b7 +0x0d2b:  call   081b53a4 <+0xc18>
081b54bc +0x0d30:  mov    (%eax),%eax
081b54be +0x0d32:  mov    %ebx,%edx
081b54c0 +0x0d34:  sub    %eax,%edx
081b54c2 +0x0d36:  mov    %edx,%eax
081b54c4 +0x0d38:  sar    $0x2,%eax
081b54c7 +0x0d3b:  imul   $0x3cf3cf3d,%eax,%eax
081b54cd +0x0d41:  add    $0x14,%esp
081b54d0 +0x0d44:  pop    %ebx
081b54d1 +0x0d45:  pop    %ebp
081b54d2 +0x0d46:  ret
081b54d3 +0x0d47:  nop
081b54d4 +0x0d48:  push   %ebp
081b54d5 +0x0d49:  mov    %esp,%ebp
081b54d7 +0x0d4b:  sub    $0x18,%esp
081b54da +0x0d4e:  cmpl   $0x0,0xc(%ebp)
081b54de +0x0d52:  je     081b54fc <+0xd70>
081b54e0 +0x0d54:  mov    0x8(%ebp),%eax
081b54e3 +0x0d57:  movl   $0x0,0x8(%esp)
081b54eb +0x0d5f:  mov    0xc(%ebp),%edx
081b54ee +0x0d62:  mov    %edx,0x4(%esp)
081b54f2 +0x0d66:  mov    %eax,(%esp)
081b54f5 +0x0d69:  call   081b567e <+0xef2>
081b54fa +0x0d6e:  jmp    081b5501 <+0xd75>
081b54fc +0x0d70:  mov    $0x0,%eax
081b5501 +0x0d75:  leave
081b5502 +0x0d76:  ret
081b5503 +0x0d77:  nop
081b5504 +0x0d78:  push   %ebp
081b5505 +0x0d79:  mov    %esp,%ebp
081b5507 +0x0d7b:  mov    0x8(%ebp),%eax
081b550a +0x0d7e:  pop    %ebp
081b550b +0x0d7f:  ret
081b550c +0x0d80:  push   %ebp
081b550d +0x0d81:  mov    %esp,%ebp
081b550f +0x0d83:  sub    $0x28,%esp
081b5512 +0x0d86:  lea    -0x10(%ebp),%eax
081b5515 +0x0d89:  lea    0xc(%ebp),%edx
081b5518 +0x0d8c:  mov    %edx,0x4(%esp)
081b551c +0x0d90:  mov    %eax,(%esp)
081b551f +0x0d93:  call   081b56b6 <+0xf2a>
081b5524 +0x0d98:  sub    $0x4,%esp
081b5527 +0x0d9b:  lea    -0xc(%ebp),%eax
081b552a +0x0d9e:  lea    0x8(%ebp),%edx
081b552d +0x0da1:  mov    %edx,0x4(%esp)
081b5531 +0x0da5:  mov    %eax,(%esp)
081b5534 +0x0da8:  call   081b56b6 <+0xf2a>
081b5539 +0x0dad:  sub    $0x4,%esp
081b553c +0x0db0:  mov    0x14(%ebp),%eax
081b553f +0x0db3:  mov    %eax,0xc(%esp)
081b5543 +0x0db7:  mov    0x10(%ebp),%eax
081b5546 +0x0dba:  mov    %eax,0x8(%esp)
081b554a +0x0dbe:  mov    -0x10(%ebp),%eax
081b554d +0x0dc1:  mov    %eax,0x4(%esp)
081b5551 +0x0dc5:  mov    -0xc(%ebp),%eax
081b5554 +0x0dc8:  mov    %eax,(%esp)
081b5557 +0x0dcb:  call   081b56db <+0xf4f>
081b555c +0x0dd0:  leave
081b555d +0x0dd1:  ret
081b555e +0x0dd2:  push   %ebp
081b555f +0x0dd3:  mov    %esp,%ebp
081b5561 +0x0dd5:  sub    $0x18,%esp
081b5564 +0x0dd8:  mov    0xc(%ebp),%eax
081b5567 +0x0ddb:  mov    %eax,0x4(%esp)
081b556b +0x0ddf:  mov    0x8(%ebp),%eax
081b556e +0x0de2:  mov    %eax,(%esp)
081b5571 +0x0de5:  call   081b56fc <+0xf70>
081b5576 +0x0dea:  leave
081b5577 +0x0deb:  ret
081b5578 +0x0dec:  push   %ebp
081b5579 +0x0ded:  mov    %esp,%ebp
081b557b +0x0def:  sub    $0x18,%esp
081b557e +0x0df2:  cmpl   $0x0,0xc(%ebp)
081b5582 +0x0df6:  je     081b559d <+0xe11>
081b5584 +0x0df8:  mov    0x8(%ebp),%eax
081b5587 +0x0dfb:  mov    0x10(%ebp),%edx
081b558a +0x0dfe:  mov    %edx,0x8(%esp)
081b558e +0x0e02:  mov    0xc(%ebp),%edx
081b5591 +0x0e05:  mov    %edx,0x4(%esp)
081b5595 +0x0e09:  mov    %eax,(%esp)
081b5598 +0x0e0c:  call   081b5716 <+0xf8a>
081b559d +0x0e11:  leave
081b559e +0x0e12:  ret
081b559f +0x0e13:  push   %ebp
081b55a0 +0x0e14:  mov    %esp,%ebp
081b55a2 +0x0e16:  mov    0x8(%ebp),%eax
081b55a5 +0x0e19:  mov    0xc(%ebp),%edx
081b55a8 +0x0e1c:  mov    %edx,(%eax)
081b55aa +0x0e1e:  pop    %ebp
081b55ab +0x0e1f:  ret    $0x4
081b55ae +0x0e22:  push   %ebp
081b55af +0x0e23:  mov    %esp,%ebp
081b55b1 +0x0e25:  push   %edi
081b55b2 +0x0e26:  push   %esi
081b55b3 +0x0e27:  push   %ebx
081b55b4 +0x0e28:  sub    $0x2c,%esp
081b55b7 +0x0e2b:  mov    0x8(%ebp),%edi
081b55ba +0x0e2e:  mov    0x14(%ebp),%eax
081b55bd +0x0e31:  mov    %eax,(%esp)
081b55c0 +0x0e34:  call   081b5729 <+0xf9d>
081b55c5 +0x0e39:  mov    %eax,%esi
081b55c7 +0x0e3b:  mov    0x10(%ebp),%eax
081b55ca +0x0e3e:  mov    %eax,(%esp)
081b55cd +0x0e41:  call   081b5729 <+0xf9d>
081b55d2 +0x0e46:  mov    %eax,%ebx
081b55d4 +0x0e48:  mov    0xc(%ebp),%eax
081b55d7 +0x0e4b:  mov    %eax,(%esp)
081b55da +0x0e4e:  call   081b5729 <+0xf9d>
081b55df +0x0e53:  mov    %esi,0x8(%esp)
081b55e3 +0x0e57:  mov    %ebx,0x4(%esp)
081b55e7 +0x0e5b:  mov    %eax,(%esp)
081b55ea +0x0e5e:  call   081b573e <+0xfb2>
081b55ef +0x0e63:  mov    %eax,-0x1c(%ebp)
081b55f2 +0x0e66:  lea    -0x1c(%ebp),%eax
081b55f5 +0x0e69:  mov    %eax,0x4(%esp)
081b55f9 +0x0e6d:  mov    %edi,(%esp)
081b55fc +0x0e70:  call   081b525c <+0xad0>
081b5601 +0x0e75:  mov    %edi,%eax
081b5603 +0x0e77:  add    $0x2c,%esp
081b5606 +0x0e7a:  pop    %ebx
081b5607 +0x0e7b:  pop    %esi
081b5608 +0x0e7c:  pop    %edi
081b5609 +0x0e7d:  pop    %ebp
081b560a +0x0e7e:  ret    $0x4
081b560d +0x0e81:  push   %ebp
081b560e +0x0e82:  mov    %esp,%ebp
081b5610 +0x0e84:  mov    0x8(%ebp),%eax
081b5613 +0x0e87:  pop    %ebp
081b5614 +0x0e88:  ret
081b5615 +0x0e89:  push   %ebp
081b5616 +0x0e8a:  mov    %esp,%ebp
081b5618 +0x0e8c:  mov    0x8(%ebp),%eax
081b561b +0x0e8f:  pop    %ebp
081b561c +0x0e90:  ret
081b561d +0x0e91:  push   %ebp
081b561e +0x0e92:  mov    %esp,%ebp
081b5620 +0x0e94:  push   %esi
081b5621 +0x0e95:  push   %ebx
081b5622 +0x0e96:  sub    $0x10,%esp
081b5625 +0x0e99:  mov    0x10(%ebp),%eax
081b5628 +0x0e9c:  mov    %eax,(%esp)
081b562b +0x0e9f:  call   081b5763 <+0xfd7>
081b5630 +0x0ea4:  mov    %eax,%esi
081b5632 +0x0ea6:  mov    0xc(%ebp),%eax
081b5635 +0x0ea9:  mov    %eax,(%esp)
081b5638 +0x0eac:  call   081b5763 <+0xfd7>
081b563d +0x0eb1:  mov    %eax,%ebx
081b563f +0x0eb3:  mov    0x8(%ebp),%eax
081b5642 +0x0eb6:  mov    %eax,(%esp)
081b5645 +0x0eb9:  call   081b5763 <+0xfd7>
081b564a +0x0ebe:  mov    %esi,0x8(%esp)
081b564e +0x0ec2:  mov    %ebx,0x4(%esp)
081b5652 +0x0ec6:  mov    %eax,(%esp)
081b5655 +0x0ec9:  call   081b576b <+0xfdf>
081b565a +0x0ece:  add    $0x10,%esp
081b565d +0x0ed1:  pop    %ebx
081b565e +0x0ed2:  pop    %esi
081b565f +0x0ed3:  pop    %ebp
081b5660 +0x0ed4:  ret
081b5661 +0x0ed5:  nop
081b5662 +0x0ed6:  push   %ebp
081b5663 +0x0ed7:  mov    %esp,%ebp
081b5665 +0x0ed9:  sub    $0x18,%esp
081b5668 +0x0edc:  mov    0x8(%ebp),%eax
081b566b +0x0edf:  mov    %eax,(%esp)
081b566e +0x0ee2:  call   081b5790 <+0x1004>
081b5673 +0x0ee7:  mov    %eax,(%esp)
081b5676 +0x0eea:  call   081b5798 <+0x100c>
081b567b +0x0eef:  leave
081b567c +0x0ef0:  ret
081b567d +0x0ef1:  nop
081b567e +0x0ef2:  push   %ebp
081b567f +0x0ef3:  mov    %esp,%ebp
081b5681 +0x0ef5:  sub    $0x18,%esp
081b5684 +0x0ef8:  mov    0x8(%ebp),%eax
081b5687 +0x0efb:  mov    %eax,(%esp)
081b568a +0x0efe:  call   081b5798 <+0x100c>
081b568f +0x0f03:  cmp    0xc(%ebp),%eax
081b5692 +0x0f06:  setb   %al
081b5695 +0x0f09:  movzbl %al,%eax
081b5698 +0x0f0c:  test   %eax,%eax
081b569a +0x0f0e:  setne  %al
081b569d +0x0f11:  test   %al,%al
081b569f +0x0f13:  je     081b56a6 <+0xf1a>
081b56a1 +0x0f15:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
081b56a6 +0x0f1a:  mov    0xc(%ebp),%eax
081b56a9 +0x0f1d:  imul   $0x54,%eax,%eax
081b56ac +0x0f20:  mov    %eax,(%esp)
081b56af +0x0f23:  call   08724450 <_Znwj>  ; operator new(unsigned int)
081b56b4 +0x0f28:  leave
081b56b5 +0x0f29:  ret
081b56b6 +0x0f2a:  push   %ebp
081b56b7 +0x0f2b:  mov    %esp,%ebp
081b56b9 +0x0f2d:  push   %ebx
081b56ba +0x0f2e:  sub    $0x14,%esp
081b56bd +0x0f31:  mov    0x8(%ebp),%ebx
081b56c0 +0x0f34:  mov    0xc(%ebp),%eax
081b56c3 +0x0f37:  mov    (%eax),%eax
081b56c5 +0x0f39:  mov    %eax,0x4(%esp)
081b56c9 +0x0f3d:  mov    %ebx,(%esp)
081b56cc +0x0f40:  call   081b57a2 <+0x1016>
081b56d1 +0x0f45:  mov    %ebx,%eax
081b56d3 +0x0f47:  add    $0x14,%esp
081b56d6 +0x0f4a:  pop    %ebx
081b56d7 +0x0f4b:  pop    %ebp
081b56d8 +0x0f4c:  ret    $0x4
081b56db +0x0f4f:  push   %ebp
081b56dc +0x0f50:  mov    %esp,%ebp
081b56de +0x0f52:  sub    $0x18,%esp
081b56e1 +0x0f55:  mov    0x10(%ebp),%eax
081b56e4 +0x0f58:  mov    %eax,0x8(%esp)
081b56e8 +0x0f5c:  mov    0xc(%ebp),%eax
081b56eb +0x0f5f:  mov    %eax,0x4(%esp)
081b56ef +0x0f63:  mov    0x8(%ebp),%eax
081b56f2 +0x0f66:  mov    %eax,(%esp)
081b56f5 +0x0f69:  call   081b57af <+0x1023>
081b56fa +0x0f6e:  leave
081b56fb +0x0f6f:  ret
081b56fc +0x0f70:  push   %ebp
081b56fd +0x0f71:  mov    %esp,%ebp
081b56ff +0x0f73:  sub    $0x18,%esp
081b5702 +0x0f76:  mov    0xc(%ebp),%eax
081b5705 +0x0f79:  mov    %eax,0x4(%esp)
081b5709 +0x0f7d:  mov    0x8(%ebp),%eax
081b570c +0x0f80:  mov    %eax,(%esp)
081b570f +0x0f83:  call   081b57d0 <+0x1044>
081b5714 +0x0f88:  leave
081b5715 +0x0f89:  ret
081b5716 +0x0f8a:  push   %ebp
081b5717 +0x0f8b:  mov    %esp,%ebp
081b5719 +0x0f8d:  sub    $0x18,%esp
081b571c +0x0f90:  mov    0xc(%ebp),%eax
081b571f +0x0f93:  mov    %eax,(%esp)
081b5722 +0x0f96:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081b5727 +0x0f9b:  leave
081b5728 +0x0f9c:  ret
081b5729 +0x0f9d:  push   %ebp
081b572a +0x0f9e:  mov    %esp,%ebp
081b572c +0x0fa0:  sub    $0x18,%esp
081b572f +0x0fa3:  lea    0x8(%ebp),%eax
081b5732 +0x0fa6:  mov    %eax,(%esp)
081b5735 +0x0fa9:  call   081b53a4 <+0xc18>
081b573a +0x0fae:  mov    (%eax),%eax
081b573c +0x0fb0:  leave
081b573d +0x0fb1:  ret
081b573e +0x0fb2:  push   %ebp
081b573f +0x0fb3:  mov    %esp,%ebp
081b5741 +0x0fb5:  sub    $0x28,%esp
081b5744 +0x0fb8:  movb   $0x0,-0x9(%ebp)
081b5748 +0x0fbc:  mov    0x10(%ebp),%eax
081b574b +0x0fbf:  mov    %eax,0x8(%esp)
081b574f +0x0fc3:  mov    0xc(%ebp),%eax
081b5752 +0x0fc6:  mov    %eax,0x4(%esp)
081b5756 +0x0fca:  mov    0x8(%ebp),%eax
081b5759 +0x0fcd:  mov    %eax,(%esp)
081b575c +0x0fd0:  call   081b57d5 <+0x1049>
081b5761 +0x0fd5:  leave
081b5762 +0x0fd6:  ret
081b5763 +0x0fd7:  push   %ebp
081b5764 +0x0fd8:  mov    %esp,%ebp
081b5766 +0x0fda:  mov    0x8(%ebp),%eax
081b5769 +0x0fdd:  pop    %ebp
081b576a +0x0fde:  ret
081b576b +0x0fdf:  push   %ebp
081b576c +0x0fe0:  mov    %esp,%ebp
081b576e +0x0fe2:  sub    $0x28,%esp
081b5771 +0x0fe5:  movb   $0x0,-0x9(%ebp)
081b5775 +0x0fe9:  mov    0x10(%ebp),%eax
081b5778 +0x0fec:  mov    %eax,0x8(%esp)
081b577c +0x0ff0:  mov    0xc(%ebp),%eax
081b577f +0x0ff3:  mov    %eax,0x4(%esp)
081b5783 +0x0ff7:  mov    0x8(%ebp),%eax
081b5786 +0x0ffa:  mov    %eax,(%esp)
081b5789 +0x0ffd:  call   081b5837 <+0x10ab>
081b578e +0x1002:  leave
081b578f +0x1003:  ret
081b5790 +0x1004:  push   %ebp
081b5791 +0x1005:  mov    %esp,%ebp
081b5793 +0x1007:  mov    0x8(%ebp),%eax
081b5796 +0x100a:  pop    %ebp
081b5797 +0x100b:  ret
081b5798 +0x100c:  push   %ebp
081b5799 +0x100d:  mov    %esp,%ebp
081b579b +0x100f:  mov    $0x30c30c3,%eax
081b57a0 +0x1014:  pop    %ebp
081b57a1 +0x1015:  ret
081b57a2 +0x1016:  push   %ebp
081b57a3 +0x1017:  mov    %esp,%ebp
081b57a5 +0x1019:  mov    0x8(%ebp),%eax
081b57a8 +0x101c:  mov    0xc(%ebp),%edx
081b57ab +0x101f:  mov    %edx,(%eax)
081b57ad +0x1021:  pop    %ebp
081b57ae +0x1022:  ret
081b57af +0x1023:  push   %ebp
081b57b0 +0x1024:  mov    %esp,%ebp
081b57b2 +0x1026:  sub    $0x18,%esp
081b57b5 +0x1029:  mov    0x10(%ebp),%eax
081b57b8 +0x102c:  mov    %eax,0x8(%esp)
081b57bc +0x1030:  mov    0xc(%ebp),%eax
081b57bf +0x1033:  mov    %eax,0x4(%esp)
081b57c3 +0x1037:  mov    0x8(%ebp),%eax
081b57c6 +0x103a:  mov    %eax,(%esp)
081b57c9 +0x103d:  call   081b589b <+0x110f>
081b57ce +0x1042:  leave
081b57cf +0x1043:  ret
081b57d0 +0x1044:  push   %ebp
081b57d1 +0x1045:  mov    %esp,%ebp
081b57d3 +0x1047:  pop    %ebp
081b57d4 +0x1048:  ret
081b57d5 +0x1049:  push   %ebp
081b57d6 +0x104a:  mov    %esp,%ebp
081b57d8 +0x104c:  push   %edi
081b57d9 +0x104d:  push   %esi
081b57da +0x104e:  push   %ebx
081b57db +0x104f:  sub    $0x2c,%esp
081b57de +0x1052:  mov    0xc(%ebp),%edx
081b57e1 +0x1055:  mov    0x8(%ebp),%eax
081b57e4 +0x1058:  mov    %edx,%ecx
081b57e6 +0x105a:  sub    %eax,%ecx
081b57e8 +0x105c:  mov    %ecx,%eax
081b57ea +0x105e:  sar    $0x2,%eax
081b57ed +0x1061:  imul   $0x3cf3cf3d,%eax,%eax
081b57f3 +0x1067:  mov    %eax,-0x1c(%ebp)
081b57f6 +0x106a:  jmp    081b5821 <+0x1095>
081b57f8 +0x106c:  mov    0x8(%ebp),%eax
081b57fb +0x106f:  mov    %eax,(%esp)
081b57fe +0x1072:  call   081b5356 <+0xbca>
081b5803 +0x1077:  mov    0x10(%ebp),%edx
081b5806 +0x107a:  mov    %eax,%ebx
081b5808 +0x107c:  mov    $0x15,%eax
081b580d +0x1081:  mov    %edx,%edi
081b580f +0x1083:  mov    %ebx,%esi
081b5811 +0x1085:  mov    %eax,%ecx
081b5813 +0x1087:  rep movsl %ds:(%esi),%es:(%edi)
081b5815 +0x1089:  addl   $0x54,0x8(%ebp)
081b5819 +0x108d:  addl   $0x54,0x10(%ebp)
081b581d +0x1091:  subl   $0x1,-0x1c(%ebp)
081b5821 +0x1095:  cmpl   $0x0,-0x1c(%ebp)
081b5825 +0x1099:  setg   %al
081b5828 +0x109c:  test   %al,%al
081b582a +0x109e:  jne    081b57f8 <+0x106c>
081b582c +0x10a0:  mov    0x10(%ebp),%eax
081b582f +0x10a3:  add    $0x2c,%esp
081b5832 +0x10a6:  pop    %ebx
081b5833 +0x10a7:  pop    %esi
081b5834 +0x10a8:  pop    %edi
081b5835 +0x10a9:  pop    %ebp
081b5836 +0x10aa:  ret
081b5837 +0x10ab:  push   %ebp
081b5838 +0x10ac:  mov    %esp,%ebp
081b583a +0x10ae:  push   %edi
081b583b +0x10af:  push   %esi
081b583c +0x10b0:  push   %ebx
081b583d +0x10b1:  sub    $0x2c,%esp
081b5840 +0x10b4:  mov    0xc(%ebp),%edx
081b5843 +0x10b7:  mov    0x8(%ebp),%eax
081b5846 +0x10ba:  mov    %edx,%ecx
081b5848 +0x10bc:  sub    %eax,%ecx
081b584a +0x10be:  mov    %ecx,%eax
081b584c +0x10c0:  sar    $0x2,%eax
081b584f +0x10c3:  imul   $0x3cf3cf3d,%eax,%eax
081b5855 +0x10c9:  mov    %eax,-0x1c(%ebp)
081b5858 +0x10cc:  jmp    081b5885 <+0x10f9>
081b585a +0x10ce:  subl   $0x54,0x10(%ebp)
081b585e +0x10d2:  mov    0x10(%ebp),%ebx
081b5861 +0x10d5:  subl   $0x54,0xc(%ebp)
081b5865 +0x10d9:  mov    0xc(%ebp),%eax
081b5868 +0x10dc:  mov    %eax,(%esp)
081b586b +0x10df:  call   081b5356 <+0xbca>
081b5870 +0x10e4:  mov    %ebx,%edx
081b5872 +0x10e6:  mov    %eax,%ebx
081b5874 +0x10e8:  mov    $0x15,%eax
081b5879 +0x10ed:  mov    %edx,%edi
081b587b +0x10ef:  mov    %ebx,%esi
081b587d +0x10f1:  mov    %eax,%ecx
081b587f +0x10f3:  rep movsl %ds:(%esi),%es:(%edi)
081b5881 +0x10f5:  subl   $0x1,-0x1c(%ebp)
081b5885 +0x10f9:  cmpl   $0x0,-0x1c(%ebp)
081b5889 +0x10fd:  setg   %al
081b588c +0x1100:  test   %al,%al
081b588e +0x1102:  jne    081b585a <+0x10ce>
081b5890 +0x1104:  mov    0x10(%ebp),%eax
081b5893 +0x1107:  add    $0x2c,%esp
081b5896 +0x110a:  pop    %ebx
081b5897 +0x110b:  pop    %esi
081b5898 +0x110c:  pop    %edi
081b5899 +0x110d:  pop    %ebp
081b589a +0x110e:  ret
081b589b +0x110f:  push   %ebp
081b589c +0x1110:  mov    %esp,%ebp
081b589e +0x1112:  push   %edi
081b589f +0x1113:  push   %esi
081b58a0 +0x1114:  push   %ebx
081b58a1 +0x1115:  sub    $0x2c,%esp
081b58a4 +0x1118:  mov    0x10(%ebp),%eax
081b58a7 +0x111b:  mov    %eax,-0x1c(%ebp)
081b58aa +0x111e:  jmp    081b58f0 <+0x1164>
081b58ac +0x1120:  lea    0x8(%ebp),%eax
081b58af +0x1123:  mov    %eax,(%esp)
081b58b2 +0x1126:  call   081b5978 <+0x11ec>
081b58b7 +0x112b:  mov    %eax,%ebx
081b58b9 +0x112d:  mov    -0x1c(%ebp),%eax
081b58bc +0x1130:  mov    %eax,0x4(%esp)
081b58c0 +0x1134:  movl   $0x54,(%esp)
081b58c7 +0x113b:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
081b58cc +0x1140:  mov    %eax,%edx
081b58ce +0x1142:  test   %edx,%edx
081b58d0 +0x1144:  je     081b58e1 <+0x1155>
081b58d2 +0x1146:  mov    %eax,%edx
081b58d4 +0x1148:  mov    $0x15,%eax
081b58d9 +0x114d:  mov    %edx,%edi
081b58db +0x114f:  mov    %ebx,%esi
081b58dd +0x1151:  mov    %eax,%ecx
081b58df +0x1153:  rep movsl %ds:(%esi),%es:(%edi)
081b58e1 +0x1155:  lea    0x8(%ebp),%eax
081b58e4 +0x1158:  mov    %eax,(%esp)
081b58e7 +0x115b:  call   081b5962 <+0x11d6>
081b58ec +0x1160:  addl   $0x54,-0x1c(%ebp)
081b58f0 +0x1164:  lea    0xc(%ebp),%eax
081b58f3 +0x1167:  mov    %eax,0x4(%esp)
081b58f7 +0x116b:  lea    0x8(%ebp),%ecx
081b58fa +0x116e:  mov    %ecx,(%esp)
081b58fd +0x1171:  call   081b5945 <+0x11b9>
081b5902 +0x1176:  test   %al,%al
081b5904 +0x1178:  jne    081b58ac <+0x1120>
081b5906 +0x117a:  mov    -0x1c(%ebp),%eax
081b5909 +0x117d:  add    $0x2c,%esp
081b590c +0x1180:  pop    %ebx
081b590d +0x1181:  pop    %esi
081b590e +0x1182:  pop    %edi
081b590f +0x1183:  pop    %ebp
081b5910 +0x1184:  ret
081b5911 +0x1185:  mov    %eax,(%esp)
081b5914 +0x1188:  call   08725ce0 <__cxa_begin_catch>
081b5919 +0x118d:  mov    -0x1c(%ebp),%eax
081b591c +0x1190:  mov    %eax,0x4(%esp)
081b5920 +0x1194:  mov    0x10(%ebp),%eax
081b5923 +0x1197:  mov    %eax,(%esp)
081b5926 +0x119a:  call   081b56fc <+0xf70>
081b592b +0x119f:  call   08724be0 <__cxa_rethrow>
081b5930 +0x11a4:  mov    %edx,%ebx
081b5932 +0x11a6:  mov    %eax,%esi
081b5934 +0x11a8:  call   08725c30 <__cxa_end_catch>
081b5939 +0x11ad:  mov    %esi,%eax
081b593b +0x11af:  mov    %ebx,%edx
081b593d +0x11b1:  mov    %eax,(%esp)
081b5940 +0x11b4:  call   08ae3750 <_Unwind_Resume>
081b5945 +0x11b9:  push   %ebp
081b5946 +0x11ba:  mov    %esp,%ebp
081b5948 +0x11bc:  sub    $0x18,%esp
081b594b +0x11bf:  mov    0xc(%ebp),%eax
081b594e +0x11c2:  mov    %eax,0x4(%esp)
081b5952 +0x11c6:  mov    0x8(%ebp),%eax
081b5955 +0x11c9:  mov    %eax,(%esp)
081b5958 +0x11cc:  call   081b5982 <+0x11f6>
081b595d +0x11d1:  xor    $0x1,%eax
081b5960 +0x11d4:  leave
081b5961 +0x11d5:  ret
081b5962 +0x11d6:  push   %ebp
081b5963 +0x11d7:  mov    %esp,%ebp
081b5965 +0x11d9:  mov    0x8(%ebp),%eax
081b5968 +0x11dc:  mov    (%eax),%eax
081b596a +0x11de:  lea    0x54(%eax),%edx
081b596d +0x11e1:  mov    0x8(%ebp),%eax
081b5970 +0x11e4:  mov    %edx,(%eax)
081b5972 +0x11e6:  mov    0x8(%ebp),%eax
081b5975 +0x11e9:  pop    %ebp
081b5976 +0x11ea:  ret
081b5977 +0x11eb:  nop
081b5978 +0x11ec:  push   %ebp
081b5979 +0x11ed:  mov    %esp,%ebp
081b597b +0x11ef:  mov    0x8(%ebp),%eax
081b597e +0x11f2:  mov    (%eax),%eax
081b5980 +0x11f4:  pop    %ebp
081b5981 +0x11f5:  ret
081b5982 +0x11f6:  push   %ebp
081b5983 +0x11f7:  mov    %esp,%ebp
081b5985 +0x11f9:  push   %ebx
081b5986 +0x11fa:  sub    $0x14,%esp
081b5989 +0x11fd:  mov    0x8(%ebp),%eax
081b598c +0x1200:  mov    %eax,(%esp)
081b598f +0x1203:  call   081b59ac <+0x1220>
081b5994 +0x1208:  mov    %eax,%ebx
081b5996 +0x120a:  mov    0xc(%ebp),%eax
081b5999 +0x120d:  mov    %eax,(%esp)
081b599c +0x1210:  call   081b59ac <+0x1220>
081b59a1 +0x1215:  cmp    %eax,%ebx
081b59a3 +0x1217:  sete   %al
081b59a6 +0x121a:  add    $0x14,%esp
081b59a9 +0x121d:  pop    %ebx
081b59aa +0x121e:  pop    %ebp
081b59ab +0x121f:  ret
081b59ac +0x1220:  push   %ebp
081b59ad +0x1221:  mov    %esp,%ebp
081b59af +0x1223:  mov    0x8(%ebp),%eax
081b59b2 +0x1226:  mov    (%eax),%eax
081b59b4 +0x1228:  pop    %ebp
081b59b5 +0x1229:  ret
081b59b6 +0x122a:  nop
081b59b7 +0x122b:  nop
```

## 反编译 C

```c
// <global>::global @ 0x81b478c

/* CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const */

void CHARAC_LOAD_MERCENARY::_GLOBAL__I_CheckCompetitionAreaIndex(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
