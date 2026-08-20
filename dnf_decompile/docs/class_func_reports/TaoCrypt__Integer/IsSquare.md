# IsSquare

`_ZNK8TaoCrypt7Integer8IsSquareEv`

`TaoCrypt::Integer::IsSquare() const`

| 类 | 地址 |
|---|---|
| `TaoCrypt::Integer` | `0x08763820` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08763820  _ZNK8TaoCrypt7Integer8IsSquareEv
#           TaoCrypt::Integer::IsSquare() const
# range [0x08763820, 0x08764e3f]
08763820 +0x0000:  push   %ebp
08763821 +0x0001:  mov    %esp,%ebp
08763823 +0x0003:  sub    $0x58,%esp
08763826 +0x0006:  mov    %ebx,-0xc(%ebp)
08763829 +0x0009:  call   08722df8 <__i686.get_pc_thunk.bx>
0876382e +0x000e:  add    $0xc0936a,%ebx
08763834 +0x0014:  mov    %edi,-0x4(%ebp)
08763837 +0x0017:  mov    0x8(%ebp),%edi
0876383a +0x001a:  mov    %esi,-0x8(%ebp)
0876383d +0x001d:  lea    -0x28(%ebp),%esi
08763840 +0x0020:  mov    %esi,(%esp)
08763843 +0x0023:  mov    %edi,0x4(%esp)
08763847 +0x0027:  call   08763580 <_ZNK8TaoCrypt7Integer10SquareRootEv>  ; TaoCrypt::Integer::SquareRoot() const
0876384c +0x002c:  lea    -0x38(%ebp),%eax
0876384f +0x002f:  mov    %eax,-0x3c(%ebp)
08763852 +0x0032:  sub    $0x4,%esp
08763855 +0x0035:  mov    %esi,0x8(%esp)
08763859 +0x0039:  mov    %esi,0x4(%esp)
0876385d +0x003d:  mov    %eax,(%esp)
08763860 +0x0040:  call   08762160 <_ZNK8TaoCrypt7Integer5TimesERKS0_>  ; TaoCrypt::Integer::Times(TaoCrypt::Integer const&) const
08763865 +0x0045:  mov    -0x3c(%ebp),%eax
08763868 +0x0048:  sub    $0x4,%esp
0876386b +0x004b:  mov    %edi,(%esp)
0876386e +0x004e:  mov    %eax,0x4(%esp)
08763872 +0x0052:  call   0875d220 <_ZNK8TaoCrypt7Integer7CompareERKS0_>  ; TaoCrypt::Integer::Compare(TaoCrypt::Integer const&) const
08763877 +0x0057:  mov    -0x34(%ebp),%esi
0876387a +0x005a:  movl   $0x0,0x4(%esp)
08763882 +0x0062:  mov    %esi,(%esp)
08763885 +0x0065:  mov    %eax,%edi
08763887 +0x0067:  mov    -0x38(%ebp),%eax
0876388a +0x006a:  shl    $0x2,%eax
0876388d +0x006d:  mov    %eax,0x8(%esp)
08763891 +0x0071:  call   0807dcc0 <_init+0x5b8>
08763896 +0x0076:  mov    %esi,(%esp)
08763899 +0x0079:  movb   $0x0,0x4(%esp)
0876389e +0x007e:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
087638a3 +0x0083:  mov    -0x28(%ebp),%eax
087638a6 +0x0086:  mov    -0x24(%ebp),%esi
087638a9 +0x0089:  movl   $0x0,0x4(%esp)
087638b1 +0x0091:  shl    $0x2,%eax
087638b4 +0x0094:  mov    %esi,(%esp)
087638b7 +0x0097:  mov    %eax,0x8(%esp)
087638bb +0x009b:  call   0807dcc0 <_init+0x5b8>
087638c0 +0x00a0:  mov    %esi,(%esp)
087638c3 +0x00a3:  movb   $0x0,0x4(%esp)
087638c8 +0x00a8:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
087638cd +0x00ad:  test   %edi,%edi
087638cf +0x00af:  mov    -0xc(%ebp),%ebx
087638d2 +0x00b2:  sete   %al
087638d5 +0x00b5:  mov    -0x8(%ebp),%esi
087638d8 +0x00b8:  mov    -0x4(%ebp),%edi
087638db +0x00bb:  mov    %ebp,%esp
087638dd +0x00bd:  pop    %ebp
087638de +0x00be:  ret
087638df +0x00bf:  nop
087638e0 +0x00c0:  push   %ebp
087638e1 +0x00c1:  mov    %esp,%ebp
087638e3 +0x00c3:  mov    0x8(%ebp),%eax
087638e6 +0x00c6:  pop    %ebp
087638e7 +0x00c7:  add    $0x4,%eax
087638ea +0x00ca:  ret
087638eb +0x00cb:  nop
087638ec +0x00cc:  nop
087638ed +0x00cd:  nop
087638ee +0x00ce:  nop
087638ef +0x00cf:  nop
087638f0 +0x00d0:  push   %ebp
087638f1 +0x00d1:  xor    %eax,%eax
087638f3 +0x00d3:  mov    %esp,%ebp
087638f5 +0x00d5:  pop    %ebp
087638f6 +0x00d6:  ret
087638f7 +0x00d7:  nop
087638f8 +0x00d8:  nop
087638f9 +0x00d9:  nop
087638fa +0x00da:  nop
087638fb +0x00db:  nop
087638fc +0x00dc:  nop
087638fd +0x00dd:  nop
087638fe +0x00de:  nop
087638ff +0x00df:  nop
08763900 +0x00e0:  push   %ebp
08763901 +0x00e1:  mov    %esp,%ebp
08763903 +0x00e3:  sub    $0x18,%esp
08763906 +0x00e6:  mov    0x8(%ebp),%eax
08763909 +0x00e9:  mov    0xc(%ebp),%edx
0876390c +0x00ec:  mov    (%eax),%ecx
0876390e +0x00ee:  mov    %edx,0x8(%esp)
08763912 +0x00f2:  mov    %edx,0x4(%esp)
08763916 +0x00f6:  mov    %eax,(%esp)
08763919 +0x00f9:  call   *0x10(%ecx)
0876391c +0x00fc:  leave
0876391d +0x00fd:  ret
0876391e +0x00fe:  nop
0876391f +0x00ff:  nop
08763920 +0x0100:  push   %ebp
08763921 +0x0101:  mov    %esp,%ebp
08763923 +0x0103:  sub    $0x18,%esp
08763926 +0x0106:  mov    %esi,-0x8(%ebp)
08763929 +0x0109:  mov    0x8(%ebp),%esi
0876392c +0x010c:  mov    %edi,-0x4(%ebp)
0876392f +0x010f:  mov    0x10(%ebp),%edx
08763932 +0x0112:  mov    (%esi),%eax
08763934 +0x0114:  mov    0x40(%eax),%edi
08763937 +0x0117:  mov    %edx,0x4(%esp)
0876393b +0x011b:  mov    %esi,(%esp)
0876393e +0x011e:  call   *0x44(%eax)
08763941 +0x0121:  mov    %esi,(%esp)
08763944 +0x0124:  mov    %eax,0x8(%esp)
08763948 +0x0128:  mov    0xc(%ebp),%eax
0876394b +0x012b:  mov    %eax,0x4(%esp)
0876394f +0x012f:  call   *%edi
08763951 +0x0131:  mov    -0x8(%ebp),%esi
08763954 +0x0134:  mov    -0x4(%ebp),%edi
08763957 +0x0137:  mov    %ebp,%esp
08763959 +0x0139:  pop    %ebp
0876395a +0x013a:  ret
0876395b +0x013b:  nop
0876395c +0x013c:  nop
0876395d +0x013d:  nop
0876395e +0x013e:  nop
0876395f +0x013f:  nop
08763960 +0x0140:  push   %ebp
08763961 +0x0141:  mov    $0x1,%eax
08763966 +0x0146:  mov    %esp,%ebp
08763968 +0x0148:  pop    %ebp
08763969 +0x0149:  ret
0876396a +0x014a:  nop
0876396b +0x014b:  nop
0876396c +0x014c:  nop
0876396d +0x014d:  nop
0876396e +0x014e:  nop
0876396f +0x014f:  nop
08763970 +0x0150:  push   %ebp
08763971 +0x0151:  mov    %esp,%ebp
08763973 +0x0153:  push   %ebx
08763974 +0x0154:  sub    $0x14,%esp
08763977 +0x0157:  mov    0x10(%ebp),%eax
0876397a +0x015a:  call   08722df8 <__i686.get_pc_thunk.bx>
0876397f +0x015f:  add    $0xc09219,%ebx
08763985 +0x0165:  mov    %eax,0x4(%esp)
08763989 +0x0169:  mov    0xc(%ebp),%eax
0876398c +0x016c:  mov    %eax,(%esp)
0876398f +0x016f:  call   0875d220 <_ZNK8TaoCrypt7Integer7CompareERKS0_>  ; TaoCrypt::Integer::Compare(TaoCrypt::Integer const&) const
08763994 +0x0174:  test   %eax,%eax
08763996 +0x0176:  sete   %al
08763999 +0x0179:  add    $0x14,%esp
0876399c +0x017c:  pop    %ebx
0876399d +0x017d:  pop    %ebp
0876399e +0x017e:  ret
0876399f +0x017f:  nop
087639a0 +0x0180:  push   %ebp
087639a1 +0x0181:  mov    %esp,%ebp
087639a3 +0x0183:  push   %ebx
087639a4 +0x0184:  sub    $0x14,%esp
087639a7 +0x0187:  mov    0x10(%ebp),%eax
087639aa +0x018a:  call   08722df8 <__i686.get_pc_thunk.bx>
087639af +0x018f:  add    $0xc091e9,%ebx
087639b5 +0x0195:  mov    %eax,0x4(%esp)
087639b9 +0x0199:  mov    0xc(%ebp),%eax
087639bc +0x019c:  mov    %eax,(%esp)
087639bf +0x019f:  call   0875d220 <_ZNK8TaoCrypt7Integer7CompareERKS0_>  ; TaoCrypt::Integer::Compare(TaoCrypt::Integer const&) const
087639c4 +0x01a4:  test   %eax,%eax
087639c6 +0x01a6:  sete   %al
087639c9 +0x01a9:  add    $0x14,%esp
087639cc +0x01ac:  pop    %ebx
087639cd +0x01ad:  pop    %ebp
087639ce +0x01ae:  ret
087639cf +0x01af:  nop
087639d0 +0x01b0:  push   %ebp
087639d1 +0x01b1:  mov    %esp,%ebp
087639d3 +0x01b3:  push   %ebx
087639d4 +0x01b4:  call   08722df8 <__i686.get_pc_thunk.bx>
087639d9 +0x01b9:  add    $0xc091bf,%ebx
087639df +0x01bf:  sub    $0x14,%esp
087639e2 +0x01c2:  mov    0xc(%ebp),%eax
087639e5 +0x01c5:  mov    %eax,(%esp)
087639e8 +0x01c8:  call   0875d710 <_ZNK8TaoCrypt7Integer6IsUnitEv>  ; TaoCrypt::Integer::IsUnit() const
087639ed +0x01cd:  add    $0x14,%esp
087639f0 +0x01d0:  pop    %ebx
087639f1 +0x01d1:  pop    %ebp
087639f2 +0x01d2:  ret
087639f3 +0x01d3:  nop
087639f4 +0x01d4:  nop
087639f5 +0x01d5:  nop
087639f6 +0x01d6:  nop
087639f7 +0x01d7:  nop
087639f8 +0x01d8:  nop
087639f9 +0x01d9:  nop
087639fa +0x01da:  nop
087639fb +0x01db:  nop
087639fc +0x01dc:  nop
087639fd +0x01dd:  nop
087639fe +0x01de:  nop
087639ff +0x01df:  nop
08763a00 +0x01e0:  push   %ebp
08763a01 +0x01e1:  mov    %esp,%ebp
08763a03 +0x01e3:  push   %edi
08763a04 +0x01e4:  push   %esi
08763a05 +0x01e5:  push   %ebx
08763a06 +0x01e6:  sub    $0x6c,%esp
08763a09 +0x01e9:  mov    0x8(%ebp),%edi
08763a0c +0x01ec:  call   08722df8 <__i686.get_pc_thunk.bx>
08763a11 +0x01f1:  add    $0xc09187,%ebx
08763a17 +0x01f7:  cmpl   $0xffffffff,0x10(%ebp)
08763a1b +0x01fb:  je     08763b60 <+0x340>
08763a21 +0x0201:  lea    0x4(%edi),%eax
08763a24 +0x0204:  mov    0x8(%edi),%ecx
08763a27 +0x0207:  mov    %eax,-0x5c(%ebp)
08763a2a +0x020a:  mov    0x10(%ebp),%eax
08763a2d +0x020d:  lea    0x8(%edi),%esi
08763a30 +0x0210:  mov    0x4(%edi),%edx
08763a33 +0x0213:  movl   $0x0,0xc(%esp)
08763a3b +0x021b:  mov    %ecx,0x4(%esp)
08763a3f +0x021f:  add    $0x1,%eax
08763a42 +0x0222:  mov    %eax,0x8(%esp)
08763a46 +0x0226:  mov    %edx,(%esp)
08763a49 +0x0229:  call   08ae0700 <__udivdi3>
08763a4e +0x022e:  mov    %eax,-0x24(%ebp)
08763a51 +0x0231:  mov    0xc(%ebp),%edx
08763a54 +0x0234:  movl   $0x0,-0x1c(%ebp)
08763a5b +0x023b:  movl   $0x0,-0x3c(%ebp)
08763a62 +0x0242:  movl   $0x0,-0x34(%ebp)
08763a69 +0x0249:  mov    %edx,-0x38(%ebp)
08763a6c +0x024c:  mull   -0x38(%ebp)
08763a6f +0x024f:  movl   $0x0,-0x2c(%ebp)
08763a76 +0x0256:  mov    %eax,-0x20(%ebp)
08763a79 +0x0259:  mov    -0x20(%ebp),%ecx
08763a7c +0x025c:  mov    (%edi),%eax
08763a7e +0x025e:  mov    %edx,-0x40(%ebp)
08763a81 +0x0261:  xor    %edx,%edx
08763a83 +0x0263:  mov    %ecx,-0x20(%ebp)
08763a86 +0x0266:  mov    -0x5c(%ebp),%ecx
08763a89 +0x0269:  sub    -0x20(%ebp),%eax
08763a8c +0x026c:  sbb    -0x1c(%ebp),%edx
08763a8f +0x026f:  mov    %eax,(%edi)
08763a91 +0x0271:  mov    0x10(%ebp),%eax
08763a94 +0x0274:  mov    %edx,-0x20(%ebp)
08763a97 +0x0277:  mov    %eax,-0x30(%ebp)
08763a9a +0x027a:  mov    -0x24(%ebp),%eax
08763a9d +0x027d:  mull   -0x30(%ebp)
08763aa0 +0x0280:  mov    %eax,-0x48(%ebp)
08763aa3 +0x0283:  mov    (%ecx),%eax
08763aa5 +0x0285:  mov    -0x40(%ebp),%ecx
08763aa8 +0x0288:  mov    %edx,-0x44(%ebp)
08763aab +0x028b:  xor    %edx,%edx
08763aad +0x028d:  mov    %ecx,-0x40(%ebp)
08763ab0 +0x0290:  sub    -0x40(%ebp),%eax
08763ab3 +0x0293:  sbb    -0x3c(%ebp),%edx
08763ab6 +0x0296:  negl   -0x20(%ebp)
08763ab9 +0x0299:  mov    -0x20(%ebp),%ecx
08763abc +0x029c:  mov    %ecx,-0x20(%ebp)
08763abf +0x029f:  mov    -0x5c(%ebp),%ecx
08763ac2 +0x02a2:  sub    -0x20(%ebp),%eax
08763ac5 +0x02a5:  movl   $0x0,-0x1c(%ebp)
08763acc +0x02ac:  sbb    -0x1c(%ebp),%edx
08763acf +0x02af:  sub    -0x48(%ebp),%eax
08763ad2 +0x02b2:  sbb    -0x44(%ebp),%edx
08763ad5 +0x02b5:  mov    %eax,(%ecx)
08763ad7 +0x02b7:  add    %edx,(%esi)
08763ad9 +0x02b9:  mov    %edx,-0x20(%ebp)
08763adc +0x02bc:  mov    (%esi),%eax
08763ade +0x02be:  test   %eax,%eax
08763ae0 +0x02c0:  jne    08763b00 <+0x2e0>
08763ae2 +0x02c2:  mov    -0x5c(%ebp),%edx
08763ae5 +0x02c5:  mov    0x10(%ebp),%ecx
08763ae8 +0x02c8:  cmp    (%edx),%ecx
08763aea +0x02ca:  jb     08763b00 <+0x2e0>
08763aec +0x02cc:  je     08763b48 <+0x328>
08763aee +0x02ce:  mov    -0x24(%ebp),%eax
08763af1 +0x02d1:  add    $0x6c,%esp
08763af4 +0x02d4:  pop    %ebx
08763af5 +0x02d5:  pop    %esi
08763af6 +0x02d6:  pop    %edi
08763af7 +0x02d7:  pop    %ebp
08763af8 +0x02d8:  ret
08763af9 +0x02d9:  lea    0x0(%esi,%eiz,1),%esi
08763b00 +0x02e0:  mov    (%edi),%eax
08763b02 +0x02e2:  mov    -0x5c(%ebp),%ecx
08763b05 +0x02e5:  xor    %edx,%edx
08763b07 +0x02e7:  sub    -0x38(%ebp),%eax
08763b0a +0x02ea:  sbb    -0x34(%ebp),%edx
08763b0d +0x02ed:  movl   $0x0,-0x1c(%ebp)
08763b14 +0x02f4:  mov    %eax,(%edi)
08763b16 +0x02f6:  mov    (%ecx),%eax
08763b18 +0x02f8:  mov    %edx,-0x20(%ebp)
08763b1b +0x02fb:  xor    %edx,%edx
08763b1d +0x02fd:  sub    -0x30(%ebp),%eax
08763b20 +0x0300:  sbb    -0x2c(%ebp),%edx
08763b23 +0x0303:  negl   -0x20(%ebp)
08763b26 +0x0306:  mov    -0x20(%ebp),%ecx
08763b29 +0x0309:  mov    %ecx,-0x20(%ebp)
08763b2c +0x030c:  mov    -0x5c(%ebp),%ecx
08763b2f +0x030f:  sub    -0x20(%ebp),%eax
08763b32 +0x0312:  sbb    -0x1c(%ebp),%edx
08763b35 +0x0315:  addl   $0x1,-0x24(%ebp)
08763b39 +0x0319:  mov    %eax,(%ecx)
08763b3b +0x031b:  mov    %edx,-0x20(%ebp)
08763b3e +0x031e:  add    %edx,(%esi)
08763b40 +0x0320:  jmp    08763adc <+0x2bc>
08763b42 +0x0322:  lea    0x0(%esi),%esi
08763b48 +0x0328:  mov    (%edi),%eax
08763b4a +0x032a:  cmp    %eax,0xc(%ebp)
08763b4d +0x032d:  jbe    08763b02 <+0x2e2>
08763b4f +0x032f:  mov    -0x24(%ebp),%eax
08763b52 +0x0332:  add    $0x6c,%esp
08763b55 +0x0335:  pop    %ebx
08763b56 +0x0336:  pop    %esi
08763b57 +0x0337:  pop    %edi
08763b58 +0x0338:  pop    %ebp
08763b59 +0x0339:  ret
08763b5a +0x033a:  lea    0x0(%esi),%esi
08763b60 +0x0340:  mov    0x8(%edi),%eax
08763b63 +0x0343:  lea    0x4(%edi),%edx
08763b66 +0x0346:  lea    0x8(%edi),%esi
08763b69 +0x0349:  mov    %edx,-0x5c(%ebp)
08763b6c +0x034c:  mov    %eax,-0x24(%ebp)
08763b6f +0x034f:  jmp    08763a51 <+0x231>
08763b74 +0x0354:  nop
08763b75 +0x0355:  nop
08763b76 +0x0356:  nop
08763b77 +0x0357:  nop
08763b78 +0x0358:  nop
08763b79 +0x0359:  nop
08763b7a +0x035a:  nop
08763b7b +0x035b:  nop
08763b7c +0x035c:  nop
08763b7d +0x035d:  nop
08763b7e +0x035e:  nop
08763b7f +0x035f:  nop
08763b80 +0x0360:  push   %ebp
08763b81 +0x0361:  mov    %esp,%ebp
08763b83 +0x0363:  sub    $0x18,%esp
08763b86 +0x0366:  mov    %ebx,-0x8(%ebp)
08763b89 +0x0369:  mov    0x10(%ebp),%eax
08763b8c +0x036c:  call   08722df8 <__i686.get_pc_thunk.bx>
08763b91 +0x0371:  add    $0xc09007,%ebx
08763b97 +0x0377:  mov    %esi,-0x4(%ebp)
08763b9a +0x037a:  mov    0xc(%ebp),%esi
08763b9d +0x037d:  movl   $0x0,0x4(%esp)
08763ba5 +0x0385:  shl    $0x2,%eax
08763ba8 +0x0388:  mov    %eax,0x8(%esp)
08763bac +0x038c:  mov    %esi,(%esp)
08763baf +0x038f:  call   0807dcc0 <_init+0x5b8>
08763bb4 +0x0394:  mov    %esi,(%esp)
08763bb7 +0x0397:  movb   $0x0,0x4(%esp)
08763bbc +0x039c:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08763bc1 +0x03a1:  mov    -0x8(%ebp),%ebx
08763bc4 +0x03a4:  mov    -0x4(%ebp),%esi
08763bc7 +0x03a7:  mov    %ebp,%esp
08763bc9 +0x03a9:  pop    %ebp
08763bca +0x03aa:  ret
08763bcb +0x03ab:  nop
08763bcc +0x03ac:  nop
08763bcd +0x03ad:  nop
08763bce +0x03ae:  nop
08763bcf +0x03af:  nop
08763bd0 +0x03b0:  push   %ebp
08763bd1 +0x03b1:  mov    %esp,%ebp
08763bd3 +0x03b3:  push   %ebx
08763bd4 +0x03b4:  sub    $0x24,%esp
08763bd7 +0x03b7:  mov    0x18(%ebp),%eax
08763bda +0x03ba:  call   08722df8 <__i686.get_pc_thunk.bx>
08763bdf +0x03bf:  add    $0xc08fb9,%ebx
08763be5 +0x03c5:  mov    %eax,0x10(%esp)
08763be9 +0x03c9:  mov    0x14(%ebp),%eax
08763bec +0x03cc:  mov    %eax,0xc(%esp)
08763bf0 +0x03d0:  mov    0x10(%ebp),%eax
08763bf3 +0x03d3:  mov    %eax,0x8(%esp)
08763bf7 +0x03d7:  mov    0xc(%ebp),%eax
08763bfa +0x03da:  mov    %eax,0x4(%esp)
08763bfe +0x03de:  mov    0x8(%ebp),%eax
08763c01 +0x03e1:  mov    %eax,(%esp)
08763c04 +0x03e4:  call   087a5490 <_ZNK8TaoCrypt12AbstractRing24SimultaneousExponentiateEPNS_7IntegerERKS1_PS3_j>  ; TaoCrypt::AbstractRing::SimultaneousExponentiate(TaoCrypt::Integer*, TaoCrypt::Integer const&, TaoCrypt::Integer const*, unsigned int) const
08763c09 +0x03e9:  add    $0x24,%esp
08763c0c +0x03ec:  pop    %ebx
08763c0d +0x03ed:  pop    %ebp
08763c0e +0x03ee:  ret
08763c0f +0x03ef:  nop
08763c10 +0x03f0:  push   %ebp
08763c11 +0x03f1:  mov    %esp,%ebp
08763c13 +0x03f3:  sub    $0x28,%esp
08763c16 +0x03f6:  mov    0x1c(%ebp),%eax
08763c19 +0x03f9:  mov    %ebx,-0x8(%ebp)
08763c1c +0x03fc:  call   08722df8 <__i686.get_pc_thunk.bx>
08763c21 +0x0401:  add    $0xc08f77,%ebx
08763c27 +0x0407:  mov    %esi,-0x4(%ebp)
08763c2a +0x040a:  mov    0x8(%ebp),%esi
08763c2d +0x040d:  mov    %eax,0x14(%esp)
08763c31 +0x0411:  mov    0x18(%ebp),%eax
08763c34 +0x0414:  mov    %esi,(%esp)
08763c37 +0x0417:  mov    %eax,0x10(%esp)
08763c3b +0x041b:  mov    0x14(%ebp),%eax
08763c3e +0x041e:  mov    %eax,0xc(%esp)
08763c42 +0x0422:  mov    0x10(%ebp),%eax
08763c45 +0x0425:  mov    %eax,0x8(%esp)
08763c49 +0x0429:  mov    0xc(%ebp),%eax
08763c4c +0x042c:  mov    %eax,0x4(%esp)
08763c50 +0x0430:  call   087a4840 <_ZNK8TaoCrypt12AbstractRing19CascadeExponentiateERKNS_7IntegerES3_S3_S3_>  ; TaoCrypt::AbstractRing::CascadeExponentiate(TaoCrypt::Integer const&, TaoCrypt::Integer const&, TaoCrypt::Integer const&, TaoCrypt::Integer const&) const
08763c55 +0x0435:  mov    %esi,%eax
08763c57 +0x0437:  mov    -0x8(%ebp),%ebx
08763c5a +0x043a:  mov    -0x4(%ebp),%esi
08763c5d +0x043d:  sub    $0x4,%esp
08763c60 +0x0440:  mov    %ebp,%esp
08763c62 +0x0442:  pop    %ebp
08763c63 +0x0443:  ret    $0x4
08763c66 +0x0446:  nop
08763c67 +0x0447:  nop
08763c68 +0x0448:  nop
08763c69 +0x0449:  nop
08763c6a +0x044a:  nop
08763c6b +0x044b:  nop
08763c6c +0x044c:  nop
08763c6d +0x044d:  nop
08763c6e +0x044e:  nop
08763c6f +0x044f:  nop
08763c70 +0x0450:  push   %ebp
08763c71 +0x0451:  mov    %esp,%ebp
08763c73 +0x0453:  sub    $0x18,%esp
08763c76 +0x0456:  mov    0x8(%ebp),%eax
08763c79 +0x0459:  mov    %ebx,-0x8(%ebp)
08763c7c +0x045c:  call   08722df8 <__i686.get_pc_thunk.bx>
08763c81 +0x0461:  add    $0xc08f17,%ebx
08763c87 +0x0467:  mov    %esi,-0x4(%ebp)
08763c8a +0x046a:  mov    0x4(%eax),%esi
08763c8d +0x046d:  mov    (%eax),%eax
08763c8f +0x046f:  movl   $0x0,0x4(%esp)
08763c97 +0x0477:  mov    %esi,(%esp)
08763c9a +0x047a:  shl    $0x2,%eax
08763c9d +0x047d:  mov    %eax,0x8(%esp)
08763ca1 +0x0481:  call   0807dcc0 <_init+0x5b8>
08763ca6 +0x0486:  mov    %esi,(%esp)
08763ca9 +0x0489:  movb   $0x0,0x4(%esp)
08763cae +0x048e:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08763cb3 +0x0493:  mov    -0x8(%ebp),%ebx
08763cb6 +0x0496:  mov    -0x4(%ebp),%esi
08763cb9 +0x0499:  mov    %ebp,%esp
08763cbb +0x049b:  pop    %ebp
08763cbc +0x049c:  ret
08763cbd +0x049d:  nop
08763cbe +0x049e:  nop
08763cbf +0x049f:  nop
08763cc0 +0x04a0:  push   %ebp
08763cc1 +0x04a1:  mov    %esp,%ebp
08763cc3 +0x04a3:  sub    $0x38,%esp
08763cc6 +0x04a6:  mov    %edi,-0x4(%ebp)
08763cc9 +0x04a9:  mov    0x10(%ebp),%edx
08763ccc +0x04ac:  mov    0x14(%ebp),%edi
08763ccf +0x04af:  mov    %ebx,-0xc(%ebp)
08763cd2 +0x04b2:  movzbl 0x18(%ebp),%eax
08763cd6 +0x04b6:  call   08722df8 <__i686.get_pc_thunk.bx>
08763cdb +0x04bb:  add    $0xc08ebd,%ebx
08763ce1 +0x04c1:  mov    %esi,-0x8(%ebp)
08763ce4 +0x04c4:  mov    0xc(%ebp),%esi
08763ce7 +0x04c7:  cmp    %edi,%edx
08763ce9 +0x04c9:  je     08763d43 <+0x523>
08763ceb +0x04cb:  test   %al,%al
08763ced +0x04cd:  je     08763d78 <+0x558>
08763cf3 +0x04d3:  xor    %ecx,%ecx
08763cf5 +0x04d5:  test   %edi,%edi
08763cf7 +0x04d7:  jne    08763d58 <+0x538>
08763cf9 +0x04d9:  cmp    %edx,%edi
08763cfb +0x04db:  cmova  %edx,%edi
08763cfe +0x04de:  shl    $0x2,%edi
08763d01 +0x04e1:  mov    %ecx,(%esp)
08763d04 +0x04e4:  mov    %ecx,-0x1c(%ebp)
08763d07 +0x04e7:  mov    %esi,0x4(%esp)
08763d0b +0x04eb:  mov    %edx,-0x20(%ebp)
08763d0e +0x04ee:  mov    %edi,0x8(%esp)
08763d12 +0x04f2:  call   0807d8a0 <_init+0x198>
08763d17 +0x04f7:  mov    -0x20(%ebp),%edx
08763d1a +0x04fa:  mov    %esi,(%esp)
08763d1d +0x04fd:  movl   $0x0,0x4(%esp)
08763d25 +0x0505:  shl    $0x2,%edx
08763d28 +0x0508:  mov    %edx,0x8(%esp)
08763d2c +0x050c:  call   0807dcc0 <_init+0x5b8>
08763d31 +0x0511:  mov    %esi,(%esp)
08763d34 +0x0514:  movb   $0x0,0x4(%esp)
08763d39 +0x0519:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08763d3e +0x051e:  mov    -0x1c(%ebp),%ecx
08763d41 +0x0521:  mov    %ecx,%esi
08763d43 +0x0523:  mov    %esi,%eax
08763d45 +0x0525:  mov    -0xc(%ebp),%ebx
08763d48 +0x0528:  mov    -0x8(%ebp),%esi
08763d4b +0x052b:  mov    -0x4(%ebp),%edi
08763d4e +0x052e:  mov    %ebp,%esp
08763d50 +0x0530:  pop    %ebp
08763d51 +0x0531:  ret
08763d52 +0x0532:  lea    0x0(%esi),%esi
08763d58 +0x0538:  lea    0x0(,%edi,4),%eax
08763d5f +0x053f:  mov    %edx,-0x20(%ebp)
08763d62 +0x0542:  movb   $0x0,0x4(%esp)
08763d67 +0x0547:  mov    %eax,(%esp)
08763d6a +0x054a:  call   08767790 <_ZnajN8TaoCrypt5new_tE>  ; operator new[](unsigned int, TaoCrypt::new_t)
08763d6f +0x054f:  mov    -0x20(%ebp),%edx
08763d72 +0x0552:  mov    %eax,%ecx
08763d74 +0x0554:  jmp    08763cf9 <+0x4d9>
08763d76 +0x0556:  xchg   %ax,%ax
08763d78 +0x0558:  mov    0x8(%ebp),%eax
08763d7b +0x055b:  mov    %esi,0x4(%esp)
08763d7f +0x055f:  xor    %esi,%esi
08763d81 +0x0561:  mov    %edx,0x8(%esp)
08763d85 +0x0565:  mov    %eax,(%esp)
08763d88 +0x0568:  call   08763b80 <+0x360>
08763d8d +0x056d:  test   %edi,%edi
08763d8f +0x056f:  je     08763d43 <+0x523>
08763d91 +0x0571:  shl    $0x2,%edi
08763d94 +0x0574:  movb   $0x0,0x4(%esp)
08763d99 +0x0579:  mov    %edi,(%esp)
08763d9c +0x057c:  call   08767790 <_ZnajN8TaoCrypt5new_tE>  ; operator new[](unsigned int, TaoCrypt::new_t)
08763da1 +0x0581:  mov    %eax,%esi
08763da3 +0x0583:  jmp    08763d43 <+0x523>
08763da5 +0x0585:  nop
08763da6 +0x0586:  nop
08763da7 +0x0587:  nop
08763da8 +0x0588:  nop
08763da9 +0x0589:  nop
08763daa +0x058a:  nop
08763dab +0x058b:  nop
08763dac +0x058c:  nop
08763dad +0x058d:  nop
08763dae +0x058e:  nop
08763daf +0x058f:  nop
08763db0 +0x0590:  push   %ebp
08763db1 +0x0591:  mov    %esp,%ebp
08763db3 +0x0593:  sub    $0x28,%esp
08763db6 +0x0596:  mov    %ebx,-0xc(%ebp)
08763db9 +0x0599:  call   08722df8 <__i686.get_pc_thunk.bx>
08763dbe +0x059e:  add    $0xc08dda,%ebx
08763dc4 +0x05a4:  mov    %esi,-0x8(%ebp)
08763dc7 +0x05a7:  mov    0x8(%ebp),%esi
08763dca +0x05aa:  mov    %edi,-0x4(%ebp)
08763dcd +0x05ad:  mov    0x30(%esi),%edi
08763dd0 +0x05b0:  mov    -0x2b0(%ebx),%eax
08763dd6 +0x05b6:  add    $0x8,%eax
08763dd9 +0x05b9:  mov    %eax,(%esi)
08763ddb +0x05bb:  mov    0x2c(%esi),%eax
08763dde +0x05be:  mov    %edi,(%esp)
08763de1 +0x05c1:  movl   $0x0,0x4(%esp)
08763de9 +0x05c9:  shl    $0x2,%eax
08763dec +0x05cc:  mov    %eax,0x8(%esp)
08763df0 +0x05d0:  call   0807dcc0 <_init+0x5b8>
08763df5 +0x05d5:  mov    %edi,(%esp)
08763df8 +0x05d8:  movb   $0x0,0x4(%esp)
08763dfd +0x05dd:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08763e02 +0x05e2:  mov    0x1c(%esi),%eax
08763e05 +0x05e5:  mov    0x20(%esi),%edi
08763e08 +0x05e8:  movl   $0x0,0x4(%esp)
08763e10 +0x05f0:  shl    $0x2,%eax
08763e13 +0x05f3:  mov    %edi,(%esp)
08763e16 +0x05f6:  mov    %eax,0x8(%esp)
08763e1a +0x05fa:  call   0807dcc0 <_init+0x5b8>
08763e1f +0x05ff:  mov    %edi,(%esp)
08763e22 +0x0602:  movb   $0x0,0x4(%esp)
08763e27 +0x0607:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08763e2c +0x060c:  mov    0xc(%esi),%eax
08763e2f +0x060f:  mov    0x10(%esi),%edi
08763e32 +0x0612:  movl   $0x0,0x4(%esp)
08763e3a +0x061a:  shl    $0x2,%eax
08763e3d +0x061d:  mov    %edi,(%esp)
08763e40 +0x0620:  mov    %eax,0x8(%esp)
08763e44 +0x0624:  call   0807dcc0 <_init+0x5b8>
08763e49 +0x0629:  mov    %edi,(%esp)
08763e4c +0x062c:  movb   $0x0,0x4(%esp)
08763e51 +0x0631:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08763e56 +0x0636:  mov    -0x194(%ebx),%eax
08763e5c +0x063c:  add    $0x8,%eax
08763e5f +0x063f:  mov    %eax,0x4(%esi)
08763e62 +0x0642:  mov    %eax,(%esi)
08763e64 +0x0644:  mov    -0xc(%ebp),%ebx
08763e67 +0x0647:  mov    -0x8(%ebp),%esi
08763e6a +0x064a:  mov    -0x4(%ebp),%edi
08763e6d +0x064d:  mov    %ebp,%esp
08763e6f +0x064f:  pop    %ebp
08763e70 +0x0650:  ret
08763e71 +0x0651:  nop
08763e72 +0x0652:  nop
08763e73 +0x0653:  nop
08763e74 +0x0654:  nop
08763e75 +0x0655:  nop
08763e76 +0x0656:  nop
08763e77 +0x0657:  nop
08763e78 +0x0658:  nop
08763e79 +0x0659:  nop
08763e7a +0x065a:  nop
08763e7b +0x065b:  nop
08763e7c +0x065c:  nop
08763e7d +0x065d:  nop
08763e7e +0x065e:  nop
08763e7f +0x065f:  nop
08763e80 +0x0660:  push   %ebp
08763e81 +0x0661:  mov    %esp,%ebp
08763e83 +0x0663:  sub    $0x28,%esp
08763e86 +0x0666:  mov    %ebx,-0xc(%ebp)
08763e89 +0x0669:  call   08722df8 <__i686.get_pc_thunk.bx>
08763e8e +0x066e:  add    $0xc08d0a,%ebx
08763e94 +0x0674:  mov    %esi,-0x8(%ebp)
08763e97 +0x0677:  mov    0x8(%ebp),%esi
08763e9a +0x067a:  mov    %edi,-0x4(%ebp)
08763e9d +0x067d:  mov    0x20(%esi),%edi
08763ea0 +0x0680:  mov    -0x50c(%ebx),%eax
08763ea6 +0x0686:  add    $0x8,%eax
08763ea9 +0x0689:  mov    %eax,(%esi)
08763eab +0x068b:  mov    0x1c(%esi),%eax
08763eae +0x068e:  mov    %edi,(%esp)
08763eb1 +0x0691:  movl   $0x0,0x4(%esp)
08763eb9 +0x0699:  shl    $0x2,%eax
08763ebc +0x069c:  mov    %eax,0x8(%esp)
08763ec0 +0x06a0:  call   0807dcc0 <_init+0x5b8>
08763ec5 +0x06a5:  mov    %edi,(%esp)
08763ec8 +0x06a8:  movb   $0x0,0x4(%esp)
08763ecd +0x06ad:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08763ed2 +0x06b2:  mov    -0x398(%ebx),%eax
08763ed8 +0x06b8:  mov    0x10(%esi),%edi
08763edb +0x06bb:  add    $0x8,%eax
08763ede +0x06be:  mov    %eax,(%esi)
08763ee0 +0x06c0:  mov    0xc(%esi),%eax
08763ee3 +0x06c3:  mov    %edi,(%esp)
08763ee6 +0x06c6:  movl   $0x0,0x4(%esp)
08763eee +0x06ce:  shl    $0x2,%eax
08763ef1 +0x06d1:  mov    %eax,0x8(%esp)
08763ef5 +0x06d5:  call   0807dcc0 <_init+0x5b8>
08763efa +0x06da:  mov    %edi,(%esp)
08763efd +0x06dd:  movb   $0x0,0x4(%esp)
08763f02 +0x06e2:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08763f07 +0x06e7:  mov    -0x194(%ebx),%eax
08763f0d +0x06ed:  add    $0x8,%eax
08763f10 +0x06f0:  mov    %eax,0x4(%esi)
08763f13 +0x06f3:  mov    %eax,(%esi)
08763f15 +0x06f5:  mov    -0xc(%ebp),%ebx
08763f18 +0x06f8:  mov    -0x8(%ebp),%esi
08763f1b +0x06fb:  mov    -0x4(%ebp),%edi
08763f1e +0x06fe:  mov    %ebp,%esp
08763f20 +0x0700:  pop    %ebp
08763f21 +0x0701:  ret
08763f22 +0x0702:  nop
08763f23 +0x0703:  nop
08763f24 +0x0704:  nop
08763f25 +0x0705:  nop
08763f26 +0x0706:  nop
08763f27 +0x0707:  nop
08763f28 +0x0708:  nop
08763f29 +0x0709:  nop
08763f2a +0x070a:  nop
08763f2b +0x070b:  nop
08763f2c +0x070c:  nop
08763f2d +0x070d:  nop
08763f2e +0x070e:  nop
08763f2f +0x070f:  nop
08763f30 +0x0710:  push   %ebp
08763f31 +0x0711:  mov    %esp,%ebp
08763f33 +0x0713:  sub    $0x28,%esp
08763f36 +0x0716:  mov    %ebx,-0xc(%ebp)
08763f39 +0x0719:  call   08722df8 <__i686.get_pc_thunk.bx>
08763f3e +0x071e:  add    $0xc08c5a,%ebx
08763f44 +0x0724:  mov    %esi,-0x8(%ebp)
08763f47 +0x0727:  mov    0x8(%ebp),%esi
08763f4a +0x072a:  mov    %edi,-0x4(%ebp)
08763f4d +0x072d:  mov    0x20(%esi),%edi
08763f50 +0x0730:  mov    -0x50c(%ebx),%eax
08763f56 +0x0736:  add    $0x8,%eax
08763f59 +0x0739:  mov    %eax,(%esi)
08763f5b +0x073b:  mov    0x1c(%esi),%eax
08763f5e +0x073e:  mov    %edi,(%esp)
08763f61 +0x0741:  movl   $0x0,0x4(%esp)
08763f69 +0x0749:  shl    $0x2,%eax
08763f6c +0x074c:  mov    %eax,0x8(%esp)
08763f70 +0x0750:  call   0807dcc0 <_init+0x5b8>
08763f75 +0x0755:  mov    %edi,(%esp)
08763f78 +0x0758:  movb   $0x0,0x4(%esp)
08763f7d +0x075d:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08763f82 +0x0762:  mov    -0x398(%ebx),%eax
08763f88 +0x0768:  mov    0x10(%esi),%edi
08763f8b +0x076b:  add    $0x8,%eax
08763f8e +0x076e:  mov    %eax,(%esi)
08763f90 +0x0770:  mov    0xc(%esi),%eax
08763f93 +0x0773:  mov    %edi,(%esp)
08763f96 +0x0776:  movl   $0x0,0x4(%esp)
08763f9e +0x077e:  shl    $0x2,%eax
08763fa1 +0x0781:  mov    %eax,0x8(%esp)
08763fa5 +0x0785:  call   0807dcc0 <_init+0x5b8>
08763faa +0x078a:  mov    %edi,(%esp)
08763fad +0x078d:  movb   $0x0,0x4(%esp)
08763fb2 +0x0792:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08763fb7 +0x0797:  mov    -0x194(%ebx),%eax
08763fbd +0x079d:  add    $0x8,%eax
08763fc0 +0x07a0:  mov    %eax,0x4(%esi)
08763fc3 +0x07a3:  mov    %eax,(%esi)
08763fc5 +0x07a5:  mov    -0xc(%ebp),%ebx
08763fc8 +0x07a8:  mov    -0x8(%ebp),%esi
08763fcb +0x07ab:  mov    -0x4(%ebp),%edi
08763fce +0x07ae:  mov    %ebp,%esp
08763fd0 +0x07b0:  pop    %ebp
08763fd1 +0x07b1:  ret
08763fd2 +0x07b2:  nop
08763fd3 +0x07b3:  nop
08763fd4 +0x07b4:  nop
08763fd5 +0x07b5:  nop
08763fd6 +0x07b6:  nop
08763fd7 +0x07b7:  nop
08763fd8 +0x07b8:  nop
08763fd9 +0x07b9:  nop
08763fda +0x07ba:  nop
08763fdb +0x07bb:  nop
08763fdc +0x07bc:  nop
08763fdd +0x07bd:  nop
08763fde +0x07be:  nop
08763fdf +0x07bf:  nop
08763fe0 +0x07c0:  push   %ebp
08763fe1 +0x07c1:  mov    %esp,%ebp
08763fe3 +0x07c3:  sub    $0x28,%esp
08763fe6 +0x07c6:  mov    %ebx,-0xc(%ebp)
08763fe9 +0x07c9:  call   08722df8 <__i686.get_pc_thunk.bx>
08763fee +0x07ce:  add    $0xc08baa,%ebx
08763ff4 +0x07d4:  mov    %esi,-0x8(%ebp)
08763ff7 +0x07d7:  mov    0x8(%ebp),%esi
08763ffa +0x07da:  mov    %edi,-0x4(%ebp)
08763ffd +0x07dd:  mov    0x30(%esi),%edi
08764000 +0x07e0:  mov    -0x2b0(%ebx),%eax
08764006 +0x07e6:  add    $0x8,%eax
08764009 +0x07e9:  mov    %eax,(%esi)
0876400b +0x07eb:  mov    0x2c(%esi),%eax
0876400e +0x07ee:  mov    %edi,(%esp)
08764011 +0x07f1:  movl   $0x0,0x4(%esp)
08764019 +0x07f9:  shl    $0x2,%eax
0876401c +0x07fc:  mov    %eax,0x8(%esp)
08764020 +0x0800:  call   0807dcc0 <_init+0x5b8>
08764025 +0x0805:  mov    %edi,(%esp)
08764028 +0x0808:  movb   $0x0,0x4(%esp)
0876402d +0x080d:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08764032 +0x0812:  mov    0x1c(%esi),%eax
08764035 +0x0815:  mov    0x20(%esi),%edi
08764038 +0x0818:  movl   $0x0,0x4(%esp)
08764040 +0x0820:  shl    $0x2,%eax
08764043 +0x0823:  mov    %edi,(%esp)
08764046 +0x0826:  mov    %eax,0x8(%esp)
0876404a +0x082a:  call   0807dcc0 <_init+0x5b8>
0876404f +0x082f:  mov    %edi,(%esp)
08764052 +0x0832:  movb   $0x0,0x4(%esp)
08764057 +0x0837:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
0876405c +0x083c:  mov    0xc(%esi),%eax
0876405f +0x083f:  mov    0x10(%esi),%edi
08764062 +0x0842:  movl   $0x0,0x4(%esp)
0876406a +0x084a:  shl    $0x2,%eax
0876406d +0x084d:  mov    %edi,(%esp)
08764070 +0x0850:  mov    %eax,0x8(%esp)
08764074 +0x0854:  call   0807dcc0 <_init+0x5b8>
08764079 +0x0859:  mov    %edi,(%esp)
0876407c +0x085c:  movb   $0x0,0x4(%esp)
08764081 +0x0861:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08764086 +0x0866:  mov    -0x194(%ebx),%eax
0876408c +0x086c:  add    $0x8,%eax
0876408f +0x086f:  mov    %eax,0x4(%esi)
08764092 +0x0872:  mov    %eax,(%esi)
08764094 +0x0874:  mov    -0xc(%ebp),%ebx
08764097 +0x0877:  mov    -0x8(%ebp),%esi
0876409a +0x087a:  mov    -0x4(%ebp),%edi
0876409d +0x087d:  mov    %ebp,%esp
0876409f +0x087f:  pop    %ebp
087640a0 +0x0880:  ret
087640a1 +0x0881:  nop
087640a2 +0x0882:  nop
087640a3 +0x0883:  nop
087640a4 +0x0884:  nop
087640a5 +0x0885:  nop
087640a6 +0x0886:  nop
087640a7 +0x0887:  nop
087640a8 +0x0888:  nop
087640a9 +0x0889:  nop
087640aa +0x088a:  nop
087640ab +0x088b:  nop
087640ac +0x088c:  nop
087640ad +0x088d:  nop
087640ae +0x088e:  nop
087640af +0x088f:  nop
087640b0 +0x0890:  push   %ebp
087640b1 +0x0891:  mov    %esp,%ebp
087640b3 +0x0893:  push   %edi
087640b4 +0x0894:  push   %esi
087640b5 +0x0895:  push   %ebx
087640b6 +0x0896:  call   08722df8 <__i686.get_pc_thunk.bx>
087640bb +0x089b:  add    $0xc08add,%ebx
087640c1 +0x08a1:  sub    $0x1c,%esp
087640c4 +0x08a4:  mov    0x8(%ebp),%esi
087640c7 +0x08a7:  mov    0x50(%esi),%edi
087640ca +0x08aa:  mov    -0x52c(%ebx),%eax
087640d0 +0x08b0:  add    $0x8,%eax
087640d3 +0x08b3:  mov    %eax,(%esi)
087640d5 +0x08b5:  mov    0x4c(%esi),%eax
087640d8 +0x08b8:  mov    %edi,(%esp)
087640db +0x08bb:  movl   $0x0,0x4(%esp)
087640e3 +0x08c3:  shl    $0x2,%eax
087640e6 +0x08c6:  mov    %eax,0x8(%esp)
087640ea +0x08ca:  call   0807dcc0 <_init+0x5b8>
087640ef +0x08cf:  mov    %edi,(%esp)
087640f2 +0x08d2:  movb   $0x0,0x4(%esp)
087640f7 +0x08d7:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
087640fc +0x08dc:  mov    0x3c(%esi),%eax
087640ff +0x08df:  mov    0x40(%esi),%edi
08764102 +0x08e2:  movl   $0x0,0x4(%esp)
0876410a +0x08ea:  shl    $0x2,%eax
0876410d +0x08ed:  mov    %edi,(%esp)
08764110 +0x08f0:  mov    %eax,0x8(%esp)
08764114 +0x08f4:  call   0807dcc0 <_init+0x5b8>
08764119 +0x08f9:  mov    %edi,(%esp)
0876411c +0x08fc:  movb   $0x0,0x4(%esp)
08764121 +0x0901:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08764126 +0x0906:  mov    -0x2b0(%ebx),%eax
0876412c +0x090c:  mov    0x30(%esi),%edi
0876412f +0x090f:  add    $0x8,%eax
08764132 +0x0912:  mov    %eax,(%esi)
08764134 +0x0914:  mov    0x2c(%esi),%eax
08764137 +0x0917:  mov    %edi,(%esp)
0876413a +0x091a:  movl   $0x0,0x4(%esp)
08764142 +0x0922:  shl    $0x2,%eax
08764145 +0x0925:  mov    %eax,0x8(%esp)
08764149 +0x0929:  call   0807dcc0 <_init+0x5b8>
0876414e +0x092e:  mov    %edi,(%esp)
08764151 +0x0931:  movb   $0x0,0x4(%esp)
08764156 +0x0936:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
0876415b +0x093b:  mov    0x1c(%esi),%eax
0876415e +0x093e:  mov    0x20(%esi),%edi
08764161 +0x0941:  movl   $0x0,0x4(%esp)
08764169 +0x0949:  shl    $0x2,%eax
0876416c +0x094c:  mov    %edi,(%esp)
0876416f +0x094f:  mov    %eax,0x8(%esp)
08764173 +0x0953:  call   0807dcc0 <_init+0x5b8>
08764178 +0x0958:  mov    %edi,(%esp)
0876417b +0x095b:  movb   $0x0,0x4(%esp)
08764180 +0x0960:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08764185 +0x0965:  mov    0xc(%esi),%eax
08764188 +0x0968:  mov    0x10(%esi),%edi
0876418b +0x096b:  movl   $0x0,0x4(%esp)
08764193 +0x0973:  shl    $0x2,%eax
08764196 +0x0976:  mov    %edi,(%esp)
08764199 +0x0979:  mov    %eax,0x8(%esp)
0876419d +0x097d:  call   0807dcc0 <_init+0x5b8>
087641a2 +0x0982:  mov    %edi,(%esp)
087641a5 +0x0985:  movb   $0x0,0x4(%esp)
087641aa +0x098a:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
087641af +0x098f:  mov    -0x194(%ebx),%eax
087641b5 +0x0995:  add    $0x8,%eax
087641b8 +0x0998:  mov    %eax,0x4(%esi)
087641bb +0x099b:  mov    %eax,(%esi)
087641bd +0x099d:  add    $0x1c,%esp
087641c0 +0x09a0:  pop    %ebx
087641c1 +0x09a1:  pop    %esi
087641c2 +0x09a2:  pop    %edi
087641c3 +0x09a3:  pop    %ebp
087641c4 +0x09a4:  ret
087641c5 +0x09a5:  nop
087641c6 +0x09a6:  nop
087641c7 +0x09a7:  nop
087641c8 +0x09a8:  nop
087641c9 +0x09a9:  nop
087641ca +0x09aa:  nop
087641cb +0x09ab:  nop
087641cc +0x09ac:  nop
087641cd +0x09ad:  nop
087641ce +0x09ae:  nop
087641cf +0x09af:  nop
087641d0 +0x09b0:  push   %ebp
087641d1 +0x09b1:  mov    %esp,%ebp
087641d3 +0x09b3:  push   %ebx
087641d4 +0x09b4:  call   08722df8 <__i686.get_pc_thunk.bx>
087641d9 +0x09b9:  add    $0xc089bf,%ebx
087641df +0x09bf:  sub    $0x4,%esp
087641e2 +0x09c2:  call   0875f200 <_ZN8TaoCrypt7Integer3OneEv>  ; TaoCrypt::Integer::One()
087641e7 +0x09c7:  add    $0x4,%esp
087641ea +0x09ca:  pop    %ebx
087641eb +0x09cb:  pop    %ebp
087641ec +0x09cc:  ret
087641ed +0x09cd:  nop
087641ee +0x09ce:  nop
087641ef +0x09cf:  nop
087641f0 +0x09d0:  push   %ebp
087641f1 +0x09d1:  mov    %esp,%ebp
087641f3 +0x09d3:  push   %ebx
087641f4 +0x09d4:  call   08722df8 <__i686.get_pc_thunk.bx>
087641f9 +0x09d9:  add    $0xc0899f,%ebx
087641ff +0x09df:  sub    $0x4,%esp
08764202 +0x09e2:  call   0875f200 <_ZN8TaoCrypt7Integer3OneEv>  ; TaoCrypt::Integer::One()
08764207 +0x09e7:  add    $0x4,%esp
0876420a +0x09ea:  pop    %ebx
0876420b +0x09eb:  pop    %ebp
0876420c +0x09ec:  ret
0876420d +0x09ed:  nop
0876420e +0x09ee:  nop
0876420f +0x09ef:  nop
08764210 +0x09f0:  push   %ebp
08764211 +0x09f1:  mov    %esp,%ebp
08764213 +0x09f3:  sub    $0x18,%esp
08764216 +0x09f6:  mov    %ebx,-0x8(%ebp)
08764219 +0x09f9:  mov    0x10(%ebp),%eax
0876421c +0x09fc:  call   08722df8 <__i686.get_pc_thunk.bx>
08764221 +0x0a01:  add    $0xc08977,%ebx
08764227 +0x0a07:  mov    %esi,-0x4(%ebp)
0876422a +0x0a0a:  mov    0x8(%ebp),%esi
0876422d +0x0a0d:  mov    %eax,0x4(%esp)
08764231 +0x0a11:  mov    %esi,(%esp)
08764234 +0x0a14:  call   0875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>  ; TaoCrypt::Integer::Integer(TaoCrypt::Integer const&)
08764239 +0x0a19:  mov    %esi,%eax
0876423b +0x0a1b:  mov    -0x8(%ebp),%ebx
0876423e +0x0a1e:  mov    -0x4(%ebp),%esi
08764241 +0x0a21:  mov    %ebp,%esp
08764243 +0x0a23:  pop    %ebp
08764244 +0x0a24:  ret    $0x4
08764247 +0x0a27:  nop
08764248 +0x0a28:  nop
08764249 +0x0a29:  nop
0876424a +0x0a2a:  nop
0876424b +0x0a2b:  nop
0876424c +0x0a2c:  nop
0876424d +0x0a2d:  nop
0876424e +0x0a2e:  nop
0876424f +0x0a2f:  nop
08764250 +0x0a30:  push   %ebp
08764251 +0x0a31:  mov    %esp,%ebp
08764253 +0x0a33:  sub    $0x38,%esp
08764256 +0x0a36:  mov    0x8(%ebp),%eax
08764259 +0x0a39:  mov    %ebx,-0xc(%ebp)
0876425c +0x0a3c:  call   08722df8 <__i686.get_pc_thunk.bx>
08764261 +0x0a41:  add    $0xc08937,%ebx
08764267 +0x0a47:  mov    %esi,-0x8(%ebp)
0876426a +0x0a4a:  lea    -0x28(%ebp),%esi
0876426d +0x0a4d:  add    $0xc,%eax
08764270 +0x0a50:  mov    %eax,0x8(%esp)
08764274 +0x0a54:  mov    0xc(%ebp),%eax
08764277 +0x0a57:  mov    %edi,-0x4(%ebp)
0876427a +0x0a5a:  mov    %esi,(%esp)
0876427d +0x0a5d:  mov    %eax,0x4(%esp)
08764281 +0x0a61:  call   0875f760 <_ZN8TaoCrypt7Integer3GcdERKS0_S2_>  ; TaoCrypt::Integer::Gcd(TaoCrypt::Integer const&, TaoCrypt::Integer const&)
08764286 +0x0a66:  sub    $0x4,%esp
08764289 +0x0a69:  mov    %esi,(%esp)
0876428c +0x0a6c:  call   0875d710 <_ZNK8TaoCrypt7Integer6IsUnitEv>  ; TaoCrypt::Integer::IsUnit() const
08764291 +0x0a71:  mov    -0x24(%ebp),%esi
08764294 +0x0a74:  movl   $0x0,0x4(%esp)
0876429c +0x0a7c:  mov    %esi,(%esp)
0876429f +0x0a7f:  mov    %eax,%edi
087642a1 +0x0a81:  mov    -0x28(%ebp),%eax
087642a4 +0x0a84:  shl    $0x2,%eax
087642a7 +0x0a87:  mov    %eax,0x8(%esp)
087642ab +0x0a8b:  call   0807dcc0 <_init+0x5b8>
087642b0 +0x0a90:  mov    %esi,(%esp)
087642b3 +0x0a93:  movb   $0x0,0x4(%esp)
087642b8 +0x0a98:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
087642bd +0x0a9d:  mov    %edi,%eax
087642bf +0x0a9f:  mov    -0xc(%ebp),%ebx
087642c2 +0x0aa2:  mov    -0x8(%ebp),%esi
087642c5 +0x0aa5:  mov    -0x4(%ebp),%edi
087642c8 +0x0aa8:  mov    %ebp,%esp
087642ca +0x0aaa:  pop    %ebp
087642cb +0x0aab:  ret
087642cc +0x0aac:  nop
087642cd +0x0aad:  nop
087642ce +0x0aae:  nop
087642cf +0x0aaf:  nop
087642d0 +0x0ab0:  push   %ebp
087642d1 +0x0ab1:  mov    %esp,%ebp
087642d3 +0x0ab3:  push   %ebx
087642d4 +0x0ab4:  call   08722df8 <__i686.get_pc_thunk.bx>
087642d9 +0x0ab9:  add    $0xc088bf,%ebx
087642df +0x0abf:  sub    $0x4,%esp
087642e2 +0x0ac2:  call   0875f860 <_ZN8TaoCrypt7Integer4ZeroEv>  ; TaoCrypt::Integer::Zero()
087642e7 +0x0ac7:  add    $0x4,%esp
087642ea +0x0aca:  pop    %ebx
087642eb +0x0acb:  pop    %ebp
087642ec +0x0acc:  ret
087642ed +0x0acd:  nop
087642ee +0x0ace:  nop
087642ef +0x0acf:  nop
087642f0 +0x0ad0:  push   %ebp
087642f1 +0x0ad1:  mov    %esp,%ebp
087642f3 +0x0ad3:  push   %ebx
087642f4 +0x0ad4:  call   08722df8 <__i686.get_pc_thunk.bx>
087642f9 +0x0ad9:  add    $0xc0889f,%ebx
087642ff +0x0adf:  sub    $0x4,%esp
08764302 +0x0ae2:  call   0875f860 <_ZN8TaoCrypt7Integer4ZeroEv>  ; TaoCrypt::Integer::Zero()
08764307 +0x0ae7:  add    $0x4,%esp
0876430a +0x0aea:  pop    %ebx
0876430b +0x0aeb:  pop    %ebp
0876430c +0x0aec:  ret
0876430d +0x0aed:  nop
0876430e +0x0aee:  nop
0876430f +0x0aef:  nop
08764310 +0x0af0:  push   %ebp
08764311 +0x0af1:  mov    %esp,%ebp
08764313 +0x0af3:  push   %ebx
08764314 +0x0af4:  sub    $0x14,%esp
08764317 +0x0af7:  mov    0x10(%ebp),%eax
0876431a +0x0afa:  call   08722df8 <__i686.get_pc_thunk.bx>
0876431f +0x0aff:  add    $0xc08879,%ebx
08764325 +0x0b05:  mov    %eax,0x4(%esp)
08764329 +0x0b09:  mov    0xc(%ebp),%eax
0876432c +0x0b0c:  mov    %eax,(%esp)
0876432f +0x0b0f:  call   0875fcc0 <_ZN8TaoCrypt7IntegermIERKS0_>  ; TaoCrypt::Integer::operator-=(TaoCrypt::Integer const&)
08764334 +0x0b14:  add    $0x14,%esp
08764337 +0x0b17:  pop    %ebx
08764338 +0x0b18:  pop    %ebp
08764339 +0x0b19:  ret
0876433a +0x0b1a:  nop
0876433b +0x0b1b:  nop
0876433c +0x0b1c:  nop
0876433d +0x0b1d:  nop
0876433e +0x0b1e:  nop
0876433f +0x0b1f:  nop
08764340 +0x0b20:  push   %ebp
08764341 +0x0b21:  mov    %esp,%ebp
08764343 +0x0b23:  push   %ebx
08764344 +0x0b24:  sub    $0x14,%esp
08764347 +0x0b27:  mov    0x10(%ebp),%eax
0876434a +0x0b2a:  call   08722df8 <__i686.get_pc_thunk.bx>
0876434f +0x0b2f:  add    $0xc08849,%ebx
08764355 +0x0b35:  mov    %eax,0x4(%esp)
08764359 +0x0b39:  mov    0xc(%ebp),%eax
0876435c +0x0b3c:  mov    %eax,(%esp)
0876435f +0x0b3f:  call   0875fde0 <_ZN8TaoCrypt7IntegerpLERKS0_>  ; TaoCrypt::Integer::operator+=(TaoCrypt::Integer const&)
08764364 +0x0b44:  add    $0x14,%esp
08764367 +0x0b47:  pop    %ebx
08764368 +0x0b48:  pop    %ebp
08764369 +0x0b49:  ret
0876436a +0x0b4a:  nop
0876436b +0x0b4b:  nop
0876436c +0x0b4c:  nop
0876436d +0x0b4d:  nop
0876436e +0x0b4e:  nop
0876436f +0x0b4f:  nop
08764370 +0x0b50:  push   %ebp
08764371 +0x0b51:  mov    %esp,%ebp
08764373 +0x0b53:  sub    $0x38,%esp
08764376 +0x0b56:  mov    %esi,-0x8(%ebp)
08764379 +0x0b59:  mov    0x8(%ebp),%esi
0876437c +0x0b5c:  mov    %ebx,-0xc(%ebp)
0876437f +0x0b5f:  mov    %edi,-0x4(%ebp)
08764382 +0x0b62:  mov    0xc(%ebp),%edi
08764385 +0x0b65:  call   08722df8 <__i686.get_pc_thunk.bx>
0876438a +0x0b6a:  add    $0xc0880e,%ebx
08764390 +0x0b70:  mov    (%esi),%edx
08764392 +0x0b72:  mov    0x4(%esi),%eax
08764395 +0x0b75:  cmp    %edx,%edi
08764397 +0x0b77:  je     08764400 <+0xbe0>
08764399 +0x0b79:  mov    %eax,0x4(%esp)
0876439d +0x0b7d:  lea    0x8(%esi),%eax
087643a0 +0x0b80:  mov    %edx,0x8(%esp)
087643a4 +0x0b84:  mov    %eax,(%esp)
087643a7 +0x0b87:  call   08763b80 <+0x360>
087643ac +0x0b8c:  xor    %edx,%edx
087643ae +0x0b8e:  xor    %eax,%eax
087643b0 +0x0b90:  test   %edi,%edi
087643b2 +0x0b92:  jne    087643e0 <+0xbc0>
087643b4 +0x0b94:  mov    %edi,(%esi)
087643b6 +0x0b96:  mov    %eax,0x4(%esi)
087643b9 +0x0b99:  mov    %edx,0x8(%esp)
087643bd +0x0b9d:  movl   $0x0,0x4(%esp)
087643c5 +0x0ba5:  mov    %eax,(%esp)
087643c8 +0x0ba8:  call   0807dcc0 <_init+0x5b8>
087643cd +0x0bad:  mov    -0xc(%ebp),%ebx
087643d0 +0x0bb0:  mov    -0x8(%ebp),%esi
087643d3 +0x0bb3:  mov    -0x4(%ebp),%edi
087643d6 +0x0bb6:  mov    %ebp,%esp
087643d8 +0x0bb8:  pop    %ebp
087643d9 +0x0bb9:  ret
087643da +0x0bba:  lea    0x0(%esi),%esi
087643e0 +0x0bc0:  lea    0x0(,%edi,4),%edx
087643e7 +0x0bc7:  mov    %edx,(%esp)
087643ea +0x0bca:  mov    %edx,-0x1c(%ebp)
087643ed +0x0bcd:  movb   $0x0,0x4(%esp)
087643f2 +0x0bd2:  call   08767790 <_ZnajN8TaoCrypt5new_tE>  ; operator new[](unsigned int, TaoCrypt::new_t)
087643f7 +0x0bd7:  mov    -0x1c(%ebp),%edx
087643fa +0x0bda:  jmp    087643b4 <+0xb94>
087643fc +0x0bdc:  lea    0x0(%esi,%eiz,1),%esi
08764400 +0x0be0:  lea    0x0(,%edi,4),%edx
08764407 +0x0be7:  jmp    087643b4 <+0xb94>
08764409 +0x0be9:  nop
0876440a +0x0bea:  nop
0876440b +0x0beb:  nop
0876440c +0x0bec:  nop
0876440d +0x0bed:  nop
0876440e +0x0bee:  nop
0876440f +0x0bef:  nop
08764410 +0x0bf0:  push   %ebp
08764411 +0x0bf1:  mov    %esp,%ebp
08764413 +0x0bf3:  sub    $0x38,%esp
08764416 +0x0bf6:  mov    0x10(%ebp),%eax
08764419 +0x0bf9:  mov    %ebx,-0xc(%ebp)
0876441c +0x0bfc:  call   08722df8 <__i686.get_pc_thunk.bx>
08764421 +0x0c01:  add    $0xc08777,%ebx
08764427 +0x0c07:  mov    %esi,-0x8(%ebp)
0876442a +0x0c0a:  lea    -0x28(%ebp),%esi
0876442d +0x0c0d:  mov    %eax,0x8(%esp)
08764431 +0x0c11:  mov    0xc(%ebp),%eax
08764434 +0x0c14:  mov    %edi,-0x4(%ebp)
08764437 +0x0c17:  mov    %esi,(%esp)
0876443a +0x0c1a:  mov    %eax,0x4(%esp)
0876443e +0x0c1e:  call   087600e0 <_ZNK8TaoCrypt7Integer5MinusERKS0_>  ; TaoCrypt::Integer::Minus(TaoCrypt::Integer const&) const
08764443 +0x0c23:  mov    0x8(%ebp),%eax
08764446 +0x0c26:  add    $0x1c,%eax
08764449 +0x0c29:  sub    $0x4,%esp
0876444c +0x0c2c:  mov    %esi,0x4(%esp)
08764450 +0x0c30:  mov    %eax,(%esp)
08764453 +0x0c33:  call   08760460 <_ZN8TaoCrypt7IntegeraSERKS0_>  ; TaoCrypt::Integer::operator=(TaoCrypt::Integer const&)
08764458 +0x0c38:  mov    -0x24(%ebp),%esi
0876445b +0x0c3b:  movl   $0x0,0x4(%esp)
08764463 +0x0c43:  mov    %esi,(%esp)
08764466 +0x0c46:  mov    %eax,%edi
08764468 +0x0c48:  mov    -0x28(%ebp),%eax
0876446b +0x0c4b:  shl    $0x2,%eax
0876446e +0x0c4e:  mov    %eax,0x8(%esp)
08764472 +0x0c52:  call   0807dcc0 <_init+0x5b8>
08764477 +0x0c57:  mov    %esi,(%esp)
0876447a +0x0c5a:  movb   $0x0,0x4(%esp)
0876447f +0x0c5f:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08764484 +0x0c64:  mov    %edi,%eax
08764486 +0x0c66:  mov    -0xc(%ebp),%ebx
08764489 +0x0c69:  mov    -0x8(%ebp),%esi
0876448c +0x0c6c:  mov    -0x4(%ebp),%edi
0876448f +0x0c6f:  mov    %ebp,%esp
08764491 +0x0c71:  pop    %ebp
08764492 +0x0c72:  ret
08764493 +0x0c73:  nop
08764494 +0x0c74:  nop
08764495 +0x0c75:  nop
08764496 +0x0c76:  nop
08764497 +0x0c77:  nop
08764498 +0x0c78:  nop
08764499 +0x0c79:  nop
0876449a +0x0c7a:  nop
0876449b +0x0c7b:  nop
0876449c +0x0c7c:  nop
0876449d +0x0c7d:  nop
0876449e +0x0c7e:  nop
0876449f +0x0c7f:  nop
087644a0 +0x0c80:  push   %ebp
087644a1 +0x0c81:  mov    %esp,%ebp
087644a3 +0x0c83:  sub    $0x38,%esp
087644a6 +0x0c86:  mov    0x10(%ebp),%eax
087644a9 +0x0c89:  mov    %ebx,-0xc(%ebp)
087644ac +0x0c8c:  call   08722df8 <__i686.get_pc_thunk.bx>
087644b1 +0x0c91:  add    $0xc086e7,%ebx
087644b7 +0x0c97:  mov    %esi,-0x8(%ebp)
087644ba +0x0c9a:  lea    -0x28(%ebp),%esi
087644bd +0x0c9d:  mov    %eax,0x8(%esp)
087644c1 +0x0ca1:  mov    0xc(%ebp),%eax
087644c4 +0x0ca4:  mov    %edi,-0x4(%ebp)
087644c7 +0x0ca7:  mov    %esi,(%esp)
087644ca +0x0caa:  mov    %eax,0x4(%esp)
087644ce +0x0cae:  call   087601b0 <_ZNK8TaoCrypt7Integer4PlusERKS0_>  ; TaoCrypt::Integer::Plus(TaoCrypt::Integer const&) const
087644d3 +0x0cb3:  mov    0x8(%ebp),%eax
087644d6 +0x0cb6:  add    $0x1c,%eax
087644d9 +0x0cb9:  sub    $0x4,%esp
087644dc +0x0cbc:  mov    %esi,0x4(%esp)
087644e0 +0x0cc0:  mov    %eax,(%esp)
087644e3 +0x0cc3:  call   08760460 <_ZN8TaoCrypt7IntegeraSERKS0_>  ; TaoCrypt::Integer::operator=(TaoCrypt::Integer const&)
087644e8 +0x0cc8:  mov    -0x24(%ebp),%esi
087644eb +0x0ccb:  movl   $0x0,0x4(%esp)
087644f3 +0x0cd3:  mov    %esi,(%esp)
087644f6 +0x0cd6:  mov    %eax,%edi
087644f8 +0x0cd8:  mov    -0x28(%ebp),%eax
087644fb +0x0cdb:  shl    $0x2,%eax
087644fe +0x0cde:  mov    %eax,0x8(%esp)
08764502 +0x0ce2:  call   0807dcc0 <_init+0x5b8>
08764507 +0x0ce7:  mov    %esi,(%esp)
0876450a +0x0cea:  movb   $0x0,0x4(%esp)
0876450f +0x0cef:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08764514 +0x0cf4:  mov    %edi,%eax
08764516 +0x0cf6:  mov    -0xc(%ebp),%ebx
08764519 +0x0cf9:  mov    -0x8(%ebp),%esi
0876451c +0x0cfc:  mov    -0x4(%ebp),%edi
0876451f +0x0cff:  mov    %ebp,%esp
08764521 +0x0d01:  pop    %ebp
08764522 +0x0d02:  ret
08764523 +0x0d03:  nop
08764524 +0x0d04:  nop
08764525 +0x0d05:  nop
08764526 +0x0d06:  nop
08764527 +0x0d07:  nop
08764528 +0x0d08:  nop
08764529 +0x0d09:  nop
0876452a +0x0d0a:  nop
0876452b +0x0d0b:  nop
0876452c +0x0d0c:  nop
0876452d +0x0d0d:  nop
0876452e +0x0d0e:  nop
0876452f +0x0d0f:  nop
08764530 +0x0d10:  push   %ebp
08764531 +0x0d11:  mov    %esp,%ebp
08764533 +0x0d13:  sub    $0x38,%esp
08764536 +0x0d16:  mov    %ebx,-0xc(%ebp)
08764539 +0x0d19:  mov    0xc(%ebp),%eax
0876453c +0x0d1c:  call   08722df8 <__i686.get_pc_thunk.bx>
08764541 +0x0d21:  add    $0xc08657,%ebx
08764547 +0x0d27:  mov    %esi,-0x8(%ebp)
0876454a +0x0d2a:  lea    -0x28(%ebp),%esi
0876454d +0x0d2d:  mov    %edi,-0x4(%ebp)
08764550 +0x0d30:  mov    %eax,0x8(%esp)
08764554 +0x0d34:  mov    %eax,0x4(%esp)
08764558 +0x0d38:  mov    %esi,(%esp)
0876455b +0x0d3b:  call   087601b0 <_ZNK8TaoCrypt7Integer4PlusERKS0_>  ; TaoCrypt::Integer::Plus(TaoCrypt::Integer const&) const
08764560 +0x0d40:  mov    0x8(%ebp),%eax
08764563 +0x0d43:  add    $0x1c,%eax
08764566 +0x0d46:  sub    $0x4,%esp
08764569 +0x0d49:  mov    %esi,0x4(%esp)
0876456d +0x0d4d:  mov    %eax,(%esp)
08764570 +0x0d50:  call   08760460 <_ZN8TaoCrypt7IntegeraSERKS0_>  ; TaoCrypt::Integer::operator=(TaoCrypt::Integer const&)
08764575 +0x0d55:  mov    -0x24(%ebp),%esi
08764578 +0x0d58:  movl   $0x0,0x4(%esp)
08764580 +0x0d60:  mov    %esi,(%esp)
08764583 +0x0d63:  mov    %eax,%edi
08764585 +0x0d65:  mov    -0x28(%ebp),%eax
08764588 +0x0d68:  shl    $0x2,%eax
0876458b +0x0d6b:  mov    %eax,0x8(%esp)
0876458f +0x0d6f:  call   0807dcc0 <_init+0x5b8>
08764594 +0x0d74:  mov    %esi,(%esp)
08764597 +0x0d77:  movb   $0x0,0x4(%esp)
0876459c +0x0d7c:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
087645a1 +0x0d81:  mov    %edi,%eax
087645a3 +0x0d83:  mov    -0xc(%ebp),%ebx
087645a6 +0x0d86:  mov    -0x8(%ebp),%esi
087645a9 +0x0d89:  mov    -0x4(%ebp),%edi
087645ac +0x0d8c:  mov    %ebp,%esp
087645ae +0x0d8e:  pop    %ebp
087645af +0x0d8f:  ret
087645b0 +0x0d90:  push   %ebp
087645b1 +0x0d91:  mov    %esp,%ebp
087645b3 +0x0d93:  sub    $0x38,%esp
087645b6 +0x0d96:  mov    %ebx,-0xc(%ebp)
087645b9 +0x0d99:  mov    0xc(%ebp),%eax
087645bc +0x0d9c:  call   08722df8 <__i686.get_pc_thunk.bx>
087645c1 +0x0da1:  add    $0xc085d7,%ebx
087645c7 +0x0da7:  mov    %esi,-0x8(%ebp)
087645ca +0x0daa:  lea    -0x28(%ebp),%esi
087645cd +0x0dad:  mov    %edi,-0x4(%ebp)
087645d0 +0x0db0:  mov    %eax,0x4(%esp)
087645d4 +0x0db4:  mov    %esi,(%esp)
087645d7 +0x0db7:  call   0875f490 <_ZNK8TaoCrypt7IntegerngEv>  ; TaoCrypt::Integer::operator-() const
087645dc +0x0dbc:  mov    0x8(%ebp),%eax
087645df +0x0dbf:  add    $0x1c,%eax
087645e2 +0x0dc2:  sub    $0x4,%esp
087645e5 +0x0dc5:  mov    %esi,0x4(%esp)
087645e9 +0x0dc9:  mov    %eax,(%esp)
087645ec +0x0dcc:  call   08760460 <_ZN8TaoCrypt7IntegeraSERKS0_>  ; TaoCrypt::Integer::operator=(TaoCrypt::Integer const&)
087645f1 +0x0dd1:  mov    -0x24(%ebp),%esi
087645f4 +0x0dd4:  movl   $0x0,0x4(%esp)
087645fc +0x0ddc:  mov    %esi,(%esp)
087645ff +0x0ddf:  mov    %eax,%edi
08764601 +0x0de1:  mov    -0x28(%ebp),%eax
08764604 +0x0de4:  shl    $0x2,%eax
08764607 +0x0de7:  mov    %eax,0x8(%esp)
0876460b +0x0deb:  call   0807dcc0 <_init+0x5b8>
08764610 +0x0df0:  mov    %esi,(%esp)
08764613 +0x0df3:  movb   $0x0,0x4(%esp)
08764618 +0x0df8:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
0876461d +0x0dfd:  mov    %edi,%eax
0876461f +0x0dff:  mov    -0xc(%ebp),%ebx
08764622 +0x0e02:  mov    -0x8(%ebp),%esi
08764625 +0x0e05:  mov    -0x4(%ebp),%edi
08764628 +0x0e08:  mov    %ebp,%esp
0876462a +0x0e0a:  pop    %ebp
0876462b +0x0e0b:  ret
0876462c +0x0e0c:  nop
0876462d +0x0e0d:  nop
0876462e +0x0e0e:  nop
0876462f +0x0e0f:  nop
08764630 +0x0e10:  push   %ebp
08764631 +0x0e11:  mov    %esp,%ebp
08764633 +0x0e13:  sub    $0x38,%esp
08764636 +0x0e16:  mov    %ebx,-0xc(%ebp)
08764639 +0x0e19:  mov    0xc(%ebp),%eax
0876463c +0x0e1c:  call   08722df8 <__i686.get_pc_thunk.bx>
08764641 +0x0e21:  add    $0xc08557,%ebx
08764647 +0x0e27:  mov    %esi,-0x8(%ebp)
0876464a +0x0e2a:  lea    -0x28(%ebp),%esi
0876464d +0x0e2d:  mov    %edi,-0x4(%ebp)
08764650 +0x0e30:  mov    %eax,0x4(%esp)
08764654 +0x0e34:  mov    %esi,(%esp)
08764657 +0x0e37:  call   0875f8c0 <_ZNK8TaoCrypt7Integer21MultiplicativeInverseEv>  ; TaoCrypt::Integer::MultiplicativeInverse() const
0876465c +0x0e3c:  mov    0x8(%ebp),%eax
0876465f +0x0e3f:  add    $0x1c,%eax
08764662 +0x0e42:  sub    $0x4,%esp
08764665 +0x0e45:  mov    %esi,0x4(%esp)
08764669 +0x0e49:  mov    %eax,(%esp)
0876466c +0x0e4c:  call   08760460 <_ZN8TaoCrypt7IntegeraSERKS0_>  ; TaoCrypt::Integer::operator=(TaoCrypt::Integer const&)
08764671 +0x0e51:  mov    -0x24(%ebp),%esi
08764674 +0x0e54:  movl   $0x0,0x4(%esp)
0876467c +0x0e5c:  mov    %esi,(%esp)
0876467f +0x0e5f:  mov    %eax,%edi
08764681 +0x0e61:  mov    -0x28(%ebp),%eax
08764684 +0x0e64:  shl    $0x2,%eax
08764687 +0x0e67:  mov    %eax,0x8(%esp)
0876468b +0x0e6b:  call   0807dcc0 <_init+0x5b8>
08764690 +0x0e70:  mov    %esi,(%esp)
08764693 +0x0e73:  movb   $0x0,0x4(%esp)
08764698 +0x0e78:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
0876469d +0x0e7d:  mov    %edi,%eax
0876469f +0x0e7f:  mov    -0xc(%ebp),%ebx
087646a2 +0x0e82:  mov    -0x8(%ebp),%esi
087646a5 +0x0e85:  mov    -0x4(%ebp),%edi
087646a8 +0x0e88:  mov    %ebp,%esp
087646aa +0x0e8a:  pop    %ebp
087646ab +0x0e8b:  ret
087646ac +0x0e8c:  nop
087646ad +0x0e8d:  nop
087646ae +0x0e8e:  nop
087646af +0x0e8f:  nop
087646b0 +0x0e90:  push   %ebp
087646b1 +0x0e91:  mov    %esp,%ebp
087646b3 +0x0e93:  push   %edi
087646b4 +0x0e94:  push   %esi
087646b5 +0x0e95:  push   %ebx
087646b6 +0x0e96:  call   08722df8 <__i686.get_pc_thunk.bx>
087646bb +0x0e9b:  add    $0xc084dd,%ebx
087646c1 +0x0ea1:  sub    $0x1c,%esp
087646c4 +0x0ea4:  mov    0x8(%ebp),%esi
087646c7 +0x0ea7:  mov    0x50(%esi),%edi
087646ca +0x0eaa:  mov    -0x52c(%ebx),%eax
087646d0 +0x0eb0:  add    $0x8,%eax
087646d3 +0x0eb3:  mov    %eax,(%esi)
087646d5 +0x0eb5:  mov    0x4c(%esi),%eax
087646d8 +0x0eb8:  mov    %edi,(%esp)
087646db +0x0ebb:  movl   $0x0,0x4(%esp)
087646e3 +0x0ec3:  shl    $0x2,%eax
087646e6 +0x0ec6:  mov    %eax,0x8(%esp)
087646ea +0x0eca:  call   0807dcc0 <_init+0x5b8>
087646ef +0x0ecf:  mov    %edi,(%esp)
087646f2 +0x0ed2:  movb   $0x0,0x4(%esp)
087646f7 +0x0ed7:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
087646fc +0x0edc:  mov    0x3c(%esi),%eax
087646ff +0x0edf:  mov    0x40(%esi),%edi
08764702 +0x0ee2:  movl   $0x0,0x4(%esp)
0876470a +0x0eea:  shl    $0x2,%eax
0876470d +0x0eed:  mov    %edi,(%esp)
08764710 +0x0ef0:  mov    %eax,0x8(%esp)
08764714 +0x0ef4:  call   0807dcc0 <_init+0x5b8>
08764719 +0x0ef9:  mov    %edi,(%esp)
0876471c +0x0efc:  movb   $0x0,0x4(%esp)
08764721 +0x0f01:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08764726 +0x0f06:  mov    -0x2b0(%ebx),%eax
0876472c +0x0f0c:  mov    0x30(%esi),%edi
0876472f +0x0f0f:  add    $0x8,%eax
08764732 +0x0f12:  mov    %eax,(%esi)
08764734 +0x0f14:  mov    0x2c(%esi),%eax
08764737 +0x0f17:  mov    %edi,(%esp)
0876473a +0x0f1a:  movl   $0x0,0x4(%esp)
08764742 +0x0f22:  shl    $0x2,%eax
08764745 +0x0f25:  mov    %eax,0x8(%esp)
08764749 +0x0f29:  call   0807dcc0 <_init+0x5b8>
0876474e +0x0f2e:  mov    %edi,(%esp)
08764751 +0x0f31:  movb   $0x0,0x4(%esp)
08764756 +0x0f36:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
0876475b +0x0f3b:  mov    0x1c(%esi),%eax
0876475e +0x0f3e:  mov    0x20(%esi),%edi
08764761 +0x0f41:  movl   $0x0,0x4(%esp)
08764769 +0x0f49:  shl    $0x2,%eax
0876476c +0x0f4c:  mov    %edi,(%esp)
0876476f +0x0f4f:  mov    %eax,0x8(%esp)
08764773 +0x0f53:  call   0807dcc0 <_init+0x5b8>
08764778 +0x0f58:  mov    %edi,(%esp)
0876477b +0x0f5b:  movb   $0x0,0x4(%esp)
08764780 +0x0f60:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08764785 +0x0f65:  mov    0xc(%esi),%eax
08764788 +0x0f68:  mov    0x10(%esi),%edi
0876478b +0x0f6b:  movl   $0x0,0x4(%esp)
08764793 +0x0f73:  shl    $0x2,%eax
08764796 +0x0f76:  mov    %edi,(%esp)
08764799 +0x0f79:  mov    %eax,0x8(%esp)
0876479d +0x0f7d:  call   0807dcc0 <_init+0x5b8>
087647a2 +0x0f82:  mov    %edi,(%esp)
087647a5 +0x0f85:  movb   $0x0,0x4(%esp)
087647aa +0x0f8a:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
087647af +0x0f8f:  mov    -0x194(%ebx),%eax
087647b5 +0x0f95:  add    $0x8,%eax
087647b8 +0x0f98:  mov    %eax,0x4(%esi)
087647bb +0x0f9b:  mov    %eax,(%esi)
087647bd +0x0f9d:  add    $0x1c,%esp
087647c0 +0x0fa0:  pop    %ebx
087647c1 +0x0fa1:  pop    %esi
087647c2 +0x0fa2:  pop    %edi
087647c3 +0x0fa3:  pop    %ebp
087647c4 +0x0fa4:  ret
087647c5 +0x0fa5:  nop
087647c6 +0x0fa6:  nop
087647c7 +0x0fa7:  nop
087647c8 +0x0fa8:  nop
087647c9 +0x0fa9:  nop
087647ca +0x0faa:  nop
087647cb +0x0fab:  nop
087647cc +0x0fac:  nop
087647cd +0x0fad:  nop
087647ce +0x0fae:  nop
087647cf +0x0faf:  nop
087647d0 +0x0fb0:  push   %ebp
087647d1 +0x0fb1:  mov    %esp,%ebp
087647d3 +0x0fb3:  sub    $0x38,%esp
087647d6 +0x0fb6:  mov    %ebx,-0xc(%ebp)
087647d9 +0x0fb9:  mov    0xc(%ebp),%eax
087647dc +0x0fbc:  call   08722df8 <__i686.get_pc_thunk.bx>
087647e1 +0x0fc1:  add    $0xc083b7,%ebx
087647e7 +0x0fc7:  mov    %esi,-0x8(%ebp)
087647ea +0x0fca:  lea    -0x28(%ebp),%esi
087647ed +0x0fcd:  mov    %edi,-0x4(%ebp)
087647f0 +0x0fd0:  mov    %eax,0x8(%esp)
087647f4 +0x0fd4:  mov    %eax,0x4(%esp)
087647f8 +0x0fd8:  mov    %esi,(%esp)
087647fb +0x0fdb:  call   08762160 <_ZNK8TaoCrypt7Integer5TimesERKS0_>  ; TaoCrypt::Integer::Times(TaoCrypt::Integer const&) const
08764800 +0x0fe0:  mov    0x8(%ebp),%eax
08764803 +0x0fe3:  add    $0x1c,%eax
08764806 +0x0fe6:  sub    $0x4,%esp
08764809 +0x0fe9:  mov    %esi,0x4(%esp)
0876480d +0x0fed:  mov    %eax,(%esp)
08764810 +0x0ff0:  call   08760460 <_ZN8TaoCrypt7IntegeraSERKS0_>  ; TaoCrypt::Integer::operator=(TaoCrypt::Integer const&)
08764815 +0x0ff5:  mov    -0x24(%ebp),%esi
08764818 +0x0ff8:  movl   $0x0,0x4(%esp)
08764820 +0x1000:  mov    %esi,(%esp)
08764823 +0x1003:  mov    %eax,%edi
08764825 +0x1005:  mov    -0x28(%ebp),%eax
08764828 +0x1008:  shl    $0x2,%eax
0876482b +0x100b:  mov    %eax,0x8(%esp)
0876482f +0x100f:  call   0807dcc0 <_init+0x5b8>
08764834 +0x1014:  mov    %esi,(%esp)
08764837 +0x1017:  movb   $0x0,0x4(%esp)
0876483c +0x101c:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08764841 +0x1021:  mov    %edi,%eax
08764843 +0x1023:  mov    -0xc(%ebp),%ebx
08764846 +0x1026:  mov    -0x8(%ebp),%esi
08764849 +0x1029:  mov    -0x4(%ebp),%edi
0876484c +0x102c:  mov    %ebp,%esp
0876484e +0x102e:  pop    %ebp
0876484f +0x102f:  ret
08764850 +0x1030:  push   %ebp
08764851 +0x1031:  mov    %esp,%ebp
08764853 +0x1033:  sub    $0x38,%esp
08764856 +0x1036:  mov    0x10(%ebp),%eax
08764859 +0x1039:  mov    %ebx,-0xc(%ebp)
0876485c +0x103c:  call   08722df8 <__i686.get_pc_thunk.bx>
08764861 +0x1041:  add    $0xc08337,%ebx
08764867 +0x1047:  mov    %esi,-0x8(%ebp)
0876486a +0x104a:  lea    -0x28(%ebp),%esi
0876486d +0x104d:  mov    %eax,0x8(%esp)
08764871 +0x1051:  mov    0xc(%ebp),%eax
08764874 +0x1054:  mov    %edi,-0x4(%ebp)
08764877 +0x1057:  mov    %esi,(%esp)
0876487a +0x105a:  mov    %eax,0x4(%esp)
0876487e +0x105e:  call   08762160 <_ZNK8TaoCrypt7Integer5TimesERKS0_>  ; TaoCrypt::Integer::Times(TaoCrypt::Integer const&) const
08764883 +0x1063:  mov    0x8(%ebp),%eax
08764886 +0x1066:  add    $0x1c,%eax
08764889 +0x1069:  sub    $0x4,%esp
0876488c +0x106c:  mov    %esi,0x4(%esp)
08764890 +0x1070:  mov    %eax,(%esp)
08764893 +0x1073:  call   08760460 <_ZN8TaoCrypt7IntegeraSERKS0_>  ; TaoCrypt::Integer::operator=(TaoCrypt::Integer const&)
08764898 +0x1078:  mov    -0x24(%ebp),%esi
0876489b +0x107b:  movl   $0x0,0x4(%esp)
087648a3 +0x1083:  mov    %esi,(%esp)
087648a6 +0x1086:  mov    %eax,%edi
087648a8 +0x1088:  mov    -0x28(%ebp),%eax
087648ab +0x108b:  shl    $0x2,%eax
087648ae +0x108e:  mov    %eax,0x8(%esp)
087648b2 +0x1092:  call   0807dcc0 <_init+0x5b8>
087648b7 +0x1097:  mov    %esi,(%esp)
087648ba +0x109a:  movb   $0x0,0x4(%esp)
087648bf +0x109f:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
087648c4 +0x10a4:  mov    %edi,%eax
087648c6 +0x10a6:  mov    -0xc(%ebp),%ebx
087648c9 +0x10a9:  mov    -0x8(%ebp),%esi
087648cc +0x10ac:  mov    -0x4(%ebp),%edi
087648cf +0x10af:  mov    %ebp,%esp
087648d1 +0x10b1:  pop    %ebp
087648d2 +0x10b2:  ret
087648d3 +0x10b3:  nop
087648d4 +0x10b4:  nop
087648d5 +0x10b5:  nop
087648d6 +0x10b6:  nop
087648d7 +0x10b7:  nop
087648d8 +0x10b8:  nop
087648d9 +0x10b9:  nop
087648da +0x10ba:  nop
087648db +0x10bb:  nop
087648dc +0x10bc:  nop
087648dd +0x10bd:  nop
087648de +0x10be:  nop
087648df +0x10bf:  nop
087648e0 +0x10c0:  push   %ebp
087648e1 +0x10c1:  mov    %esp,%ebp
087648e3 +0x10c3:  push   %ebx
087648e4 +0x10c4:  sub    $0x14,%esp
087648e7 +0x10c7:  mov    0x18(%ebp),%eax
087648ea +0x10ca:  call   08722df8 <__i686.get_pc_thunk.bx>
087648ef +0x10cf:  add    $0xc082a9,%ebx
087648f5 +0x10d5:  mov    %eax,0xc(%esp)
087648f9 +0x10d9:  mov    0x14(%ebp),%eax
087648fc +0x10dc:  mov    %eax,0x8(%esp)
08764900 +0x10e0:  mov    0x10(%ebp),%eax
08764903 +0x10e3:  mov    %eax,0x4(%esp)
08764907 +0x10e7:  mov    0xc(%ebp),%eax
0876490a +0x10ea:  mov    %eax,(%esp)
0876490d +0x10ed:  call   08762520 <_ZN8TaoCrypt7Integer6DivideERS0_S1_RKS0_S3_>  ; TaoCrypt::Integer::Divide(TaoCrypt::Integer&, TaoCrypt::Integer&, TaoCrypt::Integer const&, TaoCrypt::Integer const&)
08764912 +0x10f2:  add    $0x14,%esp
08764915 +0x10f5:  pop    %ebx
08764916 +0x10f6:  pop    %ebp
08764917 +0x10f7:  ret
08764918 +0x10f8:  nop
08764919 +0x10f9:  nop
0876491a +0x10fa:  nop
0876491b +0x10fb:  nop
0876491c +0x10fc:  nop
0876491d +0x10fd:  nop
0876491e +0x10fe:  nop
0876491f +0x10ff:  nop
08764920 +0x1100:  push   %ebp
08764921 +0x1101:  mov    %esp,%ebp
08764923 +0x1103:  sub    $0x18,%esp
08764926 +0x1106:  mov    0xc(%ebp),%eax
08764929 +0x1109:  mov    %ebx,-0x8(%ebp)
0876492c +0x110c:  call   08722df8 <__i686.get_pc_thunk.bx>
08764931 +0x1111:  add    $0xc08267,%ebx
08764937 +0x1117:  mov    %esi,-0x4(%ebp)
0876493a +0x111a:  mov    0x8(%ebp),%esi
0876493d +0x111d:  add    $0xc,%eax
08764940 +0x1120:  mov    %eax,0x8(%esp)
08764944 +0x1124:  mov    0x10(%ebp),%eax
08764947 +0x1127:  mov    %esi,(%esp)
0876494a +0x112a:  mov    %eax,0x4(%esp)
0876494e +0x112e:  call   08762620 <_ZNK8TaoCrypt7Integer6ModuloERKS0_>  ; TaoCrypt::Integer::Modulo(TaoCrypt::Integer const&) const
08764953 +0x1133:  mov    %esi,%eax
08764955 +0x1135:  mov    -0x8(%ebp),%ebx
08764958 +0x1138:  mov    -0x4(%ebp),%esi
0876495b +0x113b:  sub    $0x4,%esp
0876495e +0x113e:  mov    %ebp,%esp
08764960 +0x1140:  pop    %ebp
08764961 +0x1141:  ret    $0x4
08764964 +0x1144:  nop
08764965 +0x1145:  nop
08764966 +0x1146:  nop
08764967 +0x1147:  nop
08764968 +0x1148:  nop
08764969 +0x1149:  nop
0876496a +0x114a:  nop
0876496b +0x114b:  nop
0876496c +0x114c:  nop
0876496d +0x114d:  nop
0876496e +0x114e:  nop
0876496f +0x114f:  nop
08764970 +0x1150:  push   %ebp
08764971 +0x1151:  mov    %esp,%ebp
08764973 +0x1153:  push   %edi
08764974 +0x1154:  push   %esi
08764975 +0x1155:  push   %ebx
08764976 +0x1156:  call   08722df8 <__i686.get_pc_thunk.bx>
0876497b +0x115b:  add    $0xc0821d,%ebx
08764981 +0x1161:  sub    $0x4c,%esp
08764984 +0x1164:  mov    0xc(%ebp),%edx
08764987 +0x1167:  lea    -0x28(%ebp),%eax
0876498a +0x116a:  mov    0x8(%ebp),%esi
0876498d +0x116d:  mov    %eax,-0x3c(%ebp)
08764990 +0x1170:  lea    -0x38(%ebp),%edi
08764993 +0x1173:  mov    %eax,(%esp)
08764996 +0x1176:  mov    %edx,0x8(%esp)
0876499a +0x117a:  mov    %edx,0x4(%esp)
0876499e +0x117e:  call   08762160 <_ZNK8TaoCrypt7Integer5TimesERKS0_>  ; TaoCrypt::Integer::Times(TaoCrypt::Integer const&) const
087649a3 +0x1183:  mov    -0x3c(%ebp),%eax
087649a6 +0x1186:  lea    0xc(%esi),%edx
087649a9 +0x1189:  add    $0x2c,%esi
087649ac +0x118c:  sub    $0x4,%esp
087649af +0x118f:  mov    %edx,0x8(%esp)
087649b3 +0x1193:  mov    %eax,0x4(%esp)
087649b7 +0x1197:  mov    %edi,(%esp)
087649ba +0x119a:  call   08762620 <_ZNK8TaoCrypt7Integer6ModuloERKS0_>  ; TaoCrypt::Integer::Modulo(TaoCrypt::Integer const&) const
087649bf +0x119f:  sub    $0x4,%esp
087649c2 +0x11a2:  mov    %edi,0x4(%esp)
087649c6 +0x11a6:  mov    %esi,(%esp)
087649c9 +0x11a9:  call   08760460 <_ZN8TaoCrypt7IntegeraSERKS0_>  ; TaoCrypt::Integer::operator=(TaoCrypt::Integer const&)
087649ce +0x11ae:  mov    -0x34(%ebp),%esi
087649d1 +0x11b1:  movl   $0x0,0x4(%esp)
087649d9 +0x11b9:  mov    %esi,(%esp)
087649dc +0x11bc:  mov    %eax,%edi
087649de +0x11be:  mov    -0x38(%ebp),%eax
087649e1 +0x11c1:  shl    $0x2,%eax
087649e4 +0x11c4:  mov    %eax,0x8(%esp)
087649e8 +0x11c8:  call   0807dcc0 <_init+0x5b8>
087649ed +0x11cd:  mov    %esi,(%esp)
087649f0 +0x11d0:  movb   $0x0,0x4(%esp)
087649f5 +0x11d5:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
087649fa +0x11da:  mov    -0x28(%ebp),%eax
087649fd +0x11dd:  mov    -0x24(%ebp),%esi
08764a00 +0x11e0:  movl   $0x0,0x4(%esp)
08764a08 +0x11e8:  shl    $0x2,%eax
08764a0b +0x11eb:  mov    %esi,(%esp)
08764a0e +0x11ee:  mov    %eax,0x8(%esp)
08764a12 +0x11f2:  call   0807dcc0 <_init+0x5b8>
08764a17 +0x11f7:  mov    %esi,(%esp)
08764a1a +0x11fa:  movb   $0x0,0x4(%esp)
08764a1f +0x11ff:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08764a24 +0x1204:  lea    -0xc(%ebp),%esp
08764a27 +0x1207:  mov    %edi,%eax
08764a29 +0x1209:  pop    %ebx
08764a2a +0x120a:  pop    %esi
08764a2b +0x120b:  pop    %edi
08764a2c +0x120c:  pop    %ebp
08764a2d +0x120d:  ret
08764a2e +0x120e:  nop
08764a2f +0x120f:  nop
08764a30 +0x1210:  push   %ebp
08764a31 +0x1211:  mov    %esp,%ebp
08764a33 +0x1213:  push   %edi
08764a34 +0x1214:  push   %esi
08764a35 +0x1215:  push   %ebx
08764a36 +0x1216:  sub    $0x4c,%esp
08764a39 +0x1219:  mov    0x10(%ebp),%edx
08764a3c +0x121c:  call   08722df8 <__i686.get_pc_thunk.bx>
08764a41 +0x1221:  add    $0xc08157,%ebx
08764a47 +0x1227:  lea    -0x28(%ebp),%eax
08764a4a +0x122a:  mov    0x8(%ebp),%esi
08764a4d +0x122d:  mov    %eax,-0x3c(%ebp)
08764a50 +0x1230:  lea    -0x38(%ebp),%edi
08764a53 +0x1233:  mov    %eax,(%esp)
08764a56 +0x1236:  mov    %edx,0x8(%esp)
08764a5a +0x123a:  mov    0xc(%ebp),%edx
08764a5d +0x123d:  mov    %edx,0x4(%esp)
08764a61 +0x1241:  call   08762160 <_ZNK8TaoCrypt7Integer5TimesERKS0_>  ; TaoCrypt::Integer::Times(TaoCrypt::Integer const&) const
08764a66 +0x1246:  mov    -0x3c(%ebp),%eax
08764a69 +0x1249:  lea    0xc(%esi),%edx
08764a6c +0x124c:  add    $0x2c,%esi
08764a6f +0x124f:  sub    $0x4,%esp
08764a72 +0x1252:  mov    %edx,0x8(%esp)
08764a76 +0x1256:  mov    %eax,0x4(%esp)
08764a7a +0x125a:  mov    %edi,(%esp)
08764a7d +0x125d:  call   08762620 <_ZNK8TaoCrypt7Integer6ModuloERKS0_>  ; TaoCrypt::Integer::Modulo(TaoCrypt::Integer const&) const
08764a82 +0x1262:  sub    $0x4,%esp
08764a85 +0x1265:  mov    %edi,0x4(%esp)
08764a89 +0x1269:  mov    %esi,(%esp)
08764a8c +0x126c:  call   08760460 <_ZN8TaoCrypt7IntegeraSERKS0_>  ; TaoCrypt::Integer::operator=(TaoCrypt::Integer const&)
08764a91 +0x1271:  mov    -0x34(%ebp),%esi
08764a94 +0x1274:  movl   $0x0,0x4(%esp)
08764a9c +0x127c:  mov    %esi,(%esp)
08764a9f +0x127f:  mov    %eax,%edi
08764aa1 +0x1281:  mov    -0x38(%ebp),%eax
08764aa4 +0x1284:  shl    $0x2,%eax
08764aa7 +0x1287:  mov    %eax,0x8(%esp)
08764aab +0x128b:  call   0807dcc0 <_init+0x5b8>
08764ab0 +0x1290:  mov    %esi,(%esp)
08764ab3 +0x1293:  movb   $0x0,0x4(%esp)
08764ab8 +0x1298:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08764abd +0x129d:  mov    -0x28(%ebp),%eax
08764ac0 +0x12a0:  mov    -0x24(%ebp),%esi
08764ac3 +0x12a3:  movl   $0x0,0x4(%esp)
08764acb +0x12ab:  shl    $0x2,%eax
08764ace +0x12ae:  mov    %esi,(%esp)
08764ad1 +0x12b1:  mov    %eax,0x8(%esp)
08764ad5 +0x12b5:  call   0807dcc0 <_init+0x5b8>
08764ada +0x12ba:  mov    %esi,(%esp)
08764add +0x12bd:  movb   $0x0,0x4(%esp)
08764ae2 +0x12c2:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08764ae7 +0x12c7:  lea    -0xc(%ebp),%esp
08764aea +0x12ca:  mov    %edi,%eax
08764aec +0x12cc:  pop    %ebx
08764aed +0x12cd:  pop    %esi
08764aee +0x12ce:  pop    %edi
08764aef +0x12cf:  pop    %ebp
08764af0 +0x12d0:  ret
08764af1 +0x12d1:  nop
08764af2 +0x12d2:  nop
08764af3 +0x12d3:  nop
08764af4 +0x12d4:  nop
08764af5 +0x12d5:  nop
08764af6 +0x12d6:  nop
08764af7 +0x12d7:  nop
08764af8 +0x12d8:  nop
08764af9 +0x12d9:  nop
08764afa +0x12da:  nop
08764afb +0x12db:  nop
08764afc +0x12dc:  nop
08764afd +0x12dd:  nop
08764afe +0x12de:  nop
08764aff +0x12df:  nop
08764b00 +0x12e0:  push   %ebp
08764b01 +0x12e1:  mov    %esp,%ebp
08764b03 +0x12e3:  push   %edi
08764b04 +0x12e4:  push   %esi
08764b05 +0x12e5:  push   %ebx
08764b06 +0x12e6:  call   08722df8 <__i686.get_pc_thunk.bx>
08764b0b +0x12eb:  add    $0xc0808d,%ebx
08764b11 +0x12f1:  sub    $0x4c,%esp
08764b14 +0x12f4:  mov    0xc(%ebp),%edi
08764b17 +0x12f7:  mov    0x10(%ebp),%eax
08764b1a +0x12fa:  mov    0xc(%edi),%esi
08764b1d +0x12fd:  add    $0xc,%edi
08764b20 +0x1300:  mov    %eax,0x4(%esp)
08764b24 +0x1304:  lea    -0x38(%ebp),%eax
08764b27 +0x1307:  mov    %eax,(%esp)
08764b2a +0x130a:  mov    %eax,-0x3c(%ebp)
08764b2d +0x130d:  call   0875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>  ; TaoCrypt::Integer::Integer(TaoCrypt::Integer const&)
08764b32 +0x1312:  mov    -0x3c(%ebp),%eax
08764b35 +0x1315:  shl    $0x5,%esi
08764b38 +0x1318:  mov    %esi,0x4(%esp)
08764b3c +0x131c:  lea    -0x28(%ebp),%esi
08764b3f +0x131f:  mov    %eax,(%esp)
08764b42 +0x1322:  call   0875eda0 <_ZN8TaoCrypt7IntegerlSEj>  ; TaoCrypt::Integer::operator<<=(unsigned int)
08764b47 +0x1327:  mov    %esi,(%esp)
08764b4a +0x132a:  mov    %eax,0x4(%esp)
08764b4e +0x132e:  call   0875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>  ; TaoCrypt::Integer::Integer(TaoCrypt::Integer const&)
08764b53 +0x1333:  mov    -0x38(%ebp),%eax
08764b56 +0x1336:  mov    -0x34(%ebp),%edx
08764b59 +0x1339:  movl   $0x0,0x4(%esp)
08764b61 +0x1341:  shl    $0x2,%eax
08764b64 +0x1344:  mov    %edx,(%esp)
08764b67 +0x1347:  mov    %edx,-0x3c(%ebp)
08764b6a +0x134a:  mov    %eax,0x8(%esp)
08764b6e +0x134e:  call   0807dcc0 <_init+0x5b8>
08764b73 +0x1353:  mov    -0x3c(%ebp),%edx
08764b76 +0x1356:  movb   $0x0,0x4(%esp)
08764b7b +0x135b:  mov    %edx,(%esp)
08764b7e +0x135e:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08764b83 +0x1363:  mov    0x8(%ebp),%eax
08764b86 +0x1366:  mov    %edi,0x8(%esp)
08764b8a +0x136a:  mov    %esi,0x4(%esp)
08764b8e +0x136e:  mov    %eax,(%esp)
08764b91 +0x1371:  call   08762620 <_ZNK8TaoCrypt7Integer6ModuloERKS0_>  ; TaoCrypt::Integer::Modulo(TaoCrypt::Integer const&) const
08764b96 +0x1376:  mov    -0x28(%ebp),%eax
08764b99 +0x1379:  mov    -0x24(%ebp),%esi
08764b9c +0x137c:  shl    $0x2,%eax
08764b9f +0x137f:  sub    $0x4,%esp
08764ba2 +0x1382:  mov    %esi,(%esp)
08764ba5 +0x1385:  mov    %eax,0x8(%esp)
08764ba9 +0x1389:  movl   $0x0,0x4(%esp)
08764bb1 +0x1391:  call   0807dcc0 <_init+0x5b8>
08764bb6 +0x1396:  mov    %esi,(%esp)
08764bb9 +0x1399:  movb   $0x0,0x4(%esp)
08764bbe +0x139e:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08764bc3 +0x13a3:  mov    0x8(%ebp),%eax
08764bc6 +0x13a6:  lea    -0xc(%ebp),%esp
08764bc9 +0x13a9:  pop    %ebx
08764bca +0x13aa:  pop    %esi
08764bcb +0x13ab:  pop    %edi
08764bcc +0x13ac:  pop    %ebp
08764bcd +0x13ad:  ret    $0x4
08764bd0 +0x13b0:  push   %ebp
08764bd1 +0x13b1:  mov    %esp,%ebp
08764bd3 +0x13b3:  push   %edi
08764bd4 +0x13b4:  push   %esi
08764bd5 +0x13b5:  push   %ebx
08764bd6 +0x13b6:  sub    $0x4c,%esp
08764bd9 +0x13b9:  mov    0x8(%ebp),%esi
08764bdc +0x13bc:  call   08722df8 <__i686.get_pc_thunk.bx>
08764be1 +0x13c1:  add    $0xc07fb7,%ebx
08764be7 +0x13c7:  lea    -0x28(%ebp),%edx
08764bea +0x13ca:  mov    %edx,-0x3c(%ebp)
08764bed +0x13cd:  lea    -0x38(%ebp),%edi
08764bf0 +0x13d0:  mov    0xc(%esi),%eax
08764bf3 +0x13d3:  mov    %edx,(%esp)
08764bf6 +0x13d6:  shl    $0x5,%eax
08764bf9 +0x13d9:  mov    %eax,0x4(%esp)
08764bfd +0x13dd:  call   08760d70 <_ZN8TaoCrypt7Integer6Power2Ej>  ; TaoCrypt::Integer::Power2(unsigned int)
08764c02 +0x13e2:  mov    -0x3c(%ebp),%edx
08764c05 +0x13e5:  lea    0xc(%esi),%eax
08764c08 +0x13e8:  add    $0x2c,%esi
08764c0b +0x13eb:  sub    $0x4,%esp
08764c0e +0x13ee:  mov    %edx,0x4(%esp)
08764c12 +0x13f2:  mov    %eax,0x8(%esp)
08764c16 +0x13f6:  mov    %edi,(%esp)
08764c19 +0x13f9:  call   08762620 <_ZNK8TaoCrypt7Integer6ModuloERKS0_>  ; TaoCrypt::Integer::Modulo(TaoCrypt::Integer const&) const
08764c1e +0x13fe:  sub    $0x4,%esp
08764c21 +0x1401:  mov    %edi,0x4(%esp)
08764c25 +0x1405:  mov    %esi,(%esp)
08764c28 +0x1408:  call   08760460 <_ZN8TaoCrypt7IntegeraSERKS0_>  ; TaoCrypt::Integer::operator=(TaoCrypt::Integer const&)
08764c2d +0x140d:  mov    -0x34(%ebp),%esi
08764c30 +0x1410:  movl   $0x0,0x4(%esp)
08764c38 +0x1418:  mov    %esi,(%esp)
08764c3b +0x141b:  mov    %eax,%edi
08764c3d +0x141d:  mov    -0x38(%ebp),%eax
08764c40 +0x1420:  shl    $0x2,%eax
08764c43 +0x1423:  mov    %eax,0x8(%esp)
08764c47 +0x1427:  call   0807dcc0 <_init+0x5b8>
08764c4c +0x142c:  mov    %esi,(%esp)
08764c4f +0x142f:  movb   $0x0,0x4(%esp)
08764c54 +0x1434:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08764c59 +0x1439:  mov    -0x28(%ebp),%eax
08764c5c +0x143c:  mov    -0x24(%ebp),%esi
08764c5f +0x143f:  movl   $0x0,0x4(%esp)
08764c67 +0x1447:  shl    $0x2,%eax
08764c6a +0x144a:  mov    %esi,(%esp)
08764c6d +0x144d:  mov    %eax,0x8(%esp)
08764c71 +0x1451:  call   0807dcc0 <_init+0x5b8>
08764c76 +0x1456:  mov    %esi,(%esp)
08764c79 +0x1459:  movb   $0x0,0x4(%esp)
08764c7e +0x145e:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08764c83 +0x1463:  lea    -0xc(%ebp),%esp
08764c86 +0x1466:  mov    %edi,%eax
08764c88 +0x1468:  pop    %ebx
08764c89 +0x1469:  pop    %esi
08764c8a +0x146a:  pop    %edi
08764c8b +0x146b:  pop    %ebp
08764c8c +0x146c:  ret
08764c8d +0x146d:  nop
08764c8e +0x146e:  nop
08764c8f +0x146f:  nop
08764c90 +0x1470:  push   %ebp
08764c91 +0x1471:  mov    %esp,%ebp
08764c93 +0x1473:  sub    $0x38,%esp
08764c96 +0x1476:  mov    0x10(%ebp),%eax
08764c99 +0x1479:  mov    %ebx,-0xc(%ebp)
08764c9c +0x147c:  call   08722df8 <__i686.get_pc_thunk.bx>
08764ca1 +0x1481:  add    $0xc07ef7,%ebx
08764ca7 +0x1487:  mov    %esi,-0x8(%ebp)
08764caa +0x148a:  lea    -0x28(%ebp),%esi
08764cad +0x148d:  mov    %eax,0x8(%esp)
08764cb1 +0x1491:  mov    0xc(%ebp),%eax
08764cb4 +0x1494:  mov    %edi,-0x4(%ebp)
08764cb7 +0x1497:  mov    %esi,(%esp)
08764cba +0x149a:  mov    %eax,0x4(%esp)
08764cbe +0x149e:  call   08762620 <_ZNK8TaoCrypt7Integer6ModuloERKS0_>  ; TaoCrypt::Integer::Modulo(TaoCrypt::Integer const&) const
08764cc3 +0x14a3:  mov    0x8(%ebp),%eax
08764cc6 +0x14a6:  add    $0x1c,%eax
08764cc9 +0x14a9:  sub    $0x4,%esp
08764ccc +0x14ac:  mov    %esi,0x4(%esp)
08764cd0 +0x14b0:  mov    %eax,(%esp)
08764cd3 +0x14b3:  call   08760460 <_ZN8TaoCrypt7IntegeraSERKS0_>  ; TaoCrypt::Integer::operator=(TaoCrypt::Integer const&)
08764cd8 +0x14b8:  mov    -0x24(%ebp),%esi
08764cdb +0x14bb:  movl   $0x0,0x4(%esp)
08764ce3 +0x14c3:  mov    %esi,(%esp)
08764ce6 +0x14c6:  mov    %eax,%edi
08764ce8 +0x14c8:  mov    -0x28(%ebp),%eax
08764ceb +0x14cb:  shl    $0x2,%eax
08764cee +0x14ce:  mov    %eax,0x8(%esp)
08764cf2 +0x14d2:  call   0807dcc0 <_init+0x5b8>
08764cf7 +0x14d7:  mov    %esi,(%esp)
08764cfa +0x14da:  movb   $0x0,0x4(%esp)
08764cff +0x14df:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08764d04 +0x14e4:  mov    %edi,%eax
08764d06 +0x14e6:  mov    -0xc(%ebp),%ebx
08764d09 +0x14e9:  mov    -0x8(%ebp),%esi
08764d0c +0x14ec:  mov    -0x4(%ebp),%edi
08764d0f +0x14ef:  mov    %ebp,%esp
08764d11 +0x14f1:  pop    %ebp
08764d12 +0x14f2:  ret
08764d13 +0x14f3:  nop
08764d14 +0x14f4:  nop
08764d15 +0x14f5:  nop
08764d16 +0x14f6:  nop
08764d17 +0x14f7:  nop
08764d18 +0x14f8:  nop
08764d19 +0x14f9:  nop
08764d1a +0x14fa:  nop
08764d1b +0x14fb:  nop
08764d1c +0x14fc:  nop
08764d1d +0x14fd:  nop
08764d1e +0x14fe:  nop
08764d1f +0x14ff:  nop
08764d20 +0x1500:  push   %ebp
08764d21 +0x1501:  mov    %esp,%ebp
08764d23 +0x1503:  sub    $0x38,%esp
08764d26 +0x1506:  mov    %esi,-0x8(%ebp)
08764d29 +0x1509:  mov    0x8(%ebp),%esi
08764d2c +0x150c:  mov    %ebx,-0xc(%ebp)
08764d2f +0x150f:  call   08722df8 <__i686.get_pc_thunk.bx>
08764d34 +0x1514:  add    $0xc07e64,%ebx
08764d3a +0x151a:  mov    %edi,-0x4(%ebp)
08764d3d +0x151d:  lea    -0x28(%ebp),%edi
08764d40 +0x1520:  lea    0xc(%esi),%eax
08764d43 +0x1523:  add    $0x2c,%esi
08764d46 +0x1526:  mov    %eax,0x8(%esp)
08764d4a +0x152a:  mov    0xc(%ebp),%eax
08764d4d +0x152d:  mov    %edi,(%esp)
08764d50 +0x1530:  mov    %eax,0x4(%esp)
08764d54 +0x1534:  call   087631e0 <_ZNK8TaoCrypt7Integer10InverseModERKS0_>  ; TaoCrypt::Integer::InverseMod(TaoCrypt::Integer const&) const
08764d59 +0x1539:  sub    $0x4,%esp
08764d5c +0x153c:  mov    %edi,0x4(%esp)
08764d60 +0x1540:  mov    %esi,(%esp)
08764d63 +0x1543:  call   08760460 <_ZN8TaoCrypt7IntegeraSERKS0_>  ; TaoCrypt::Integer::operator=(TaoCrypt::Integer const&)
08764d68 +0x1548:  mov    -0x24(%ebp),%esi
08764d6b +0x154b:  movl   $0x0,0x4(%esp)
08764d73 +0x1553:  mov    %esi,(%esp)
08764d76 +0x1556:  mov    %eax,%edi
08764d78 +0x1558:  mov    -0x28(%ebp),%eax
08764d7b +0x155b:  shl    $0x2,%eax
08764d7e +0x155e:  mov    %eax,0x8(%esp)
08764d82 +0x1562:  call   0807dcc0 <_init+0x5b8>
08764d87 +0x1567:  mov    %esi,(%esp)
08764d8a +0x156a:  movb   $0x0,0x4(%esp)
08764d8f +0x156f:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08764d94 +0x1574:  mov    %edi,%eax
08764d96 +0x1576:  mov    -0xc(%ebp),%ebx
08764d99 +0x1579:  mov    -0x8(%ebp),%esi
08764d9c +0x157c:  mov    -0x4(%ebp),%edi
08764d9f +0x157f:  mov    %ebp,%esp
08764da1 +0x1581:  pop    %ebp
08764da2 +0x1582:  ret
08764da3 +0x1583:  nop
08764da4 +0x1584:  nop
08764da5 +0x1585:  nop
08764da6 +0x1586:  nop
08764da7 +0x1587:  nop
08764da8 +0x1588:  nop
08764da9 +0x1589:  nop
08764daa +0x158a:  nop
08764dab +0x158b:  nop
08764dac +0x158c:  nop
08764dad +0x158d:  nop
08764dae +0x158e:  nop
08764daf +0x158f:  nop
08764db0 +0x1590:  push   %ebp
08764db1 +0x1591:  mov    %esp,%ebp
08764db3 +0x1593:  sub    $0x38,%esp
08764db6 +0x1596:  mov    0x10(%ebp),%eax
08764db9 +0x1599:  mov    %ebx,-0xc(%ebp)
08764dbc +0x159c:  call   08722df8 <__i686.get_pc_thunk.bx>
08764dc1 +0x15a1:  add    $0xc07dd7,%ebx
08764dc7 +0x15a7:  mov    %esi,-0x8(%ebp)
08764dca +0x15aa:  lea    -0x28(%ebp),%esi
08764dcd +0x15ad:  mov    %eax,0x8(%esp)
08764dd1 +0x15b1:  mov    0xc(%ebp),%eax
08764dd4 +0x15b4:  mov    %edi,-0x4(%ebp)
08764dd7 +0x15b7:  mov    %esi,(%esp)
08764dda +0x15ba:  mov    %eax,0x4(%esp)
08764dde +0x15be:  call   08763150 <_ZNK8TaoCrypt7Integer9DividedByERKS0_>  ; TaoCrypt::Integer::DividedBy(TaoCrypt::Integer const&) const
08764de3 +0x15c3:  mov    0x8(%ebp),%eax
08764de6 +0x15c6:  add    $0x1c,%eax
08764de9 +0x15c9:  sub    $0x4,%esp
08764dec +0x15cc:  mov    %esi,0x4(%esp)
08764df0 +0x15d0:  mov    %eax,(%esp)
08764df3 +0x15d3:  call   08760460 <_ZN8TaoCrypt7IntegeraSERKS0_>  ; TaoCrypt::Integer::operator=(TaoCrypt::Integer const&)
08764df8 +0x15d8:  mov    -0x24(%ebp),%esi
08764dfb +0x15db:  movl   $0x0,0x4(%esp)
08764e03 +0x15e3:  mov    %esi,(%esp)
08764e06 +0x15e6:  mov    %eax,%edi
08764e08 +0x15e8:  mov    -0x28(%ebp),%eax
08764e0b +0x15eb:  shl    $0x2,%eax
08764e0e +0x15ee:  mov    %eax,0x8(%esp)
08764e12 +0x15f2:  call   0807dcc0 <_init+0x5b8>
08764e17 +0x15f7:  mov    %esi,(%esp)
08764e1a +0x15fa:  movb   $0x0,0x4(%esp)
08764e1f +0x15ff:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08764e24 +0x1604:  mov    %edi,%eax
08764e26 +0x1606:  mov    -0xc(%ebp),%ebx
08764e29 +0x1609:  mov    -0x8(%ebp),%esi
08764e2c +0x160c:  mov    -0x4(%ebp),%edi
08764e2f +0x160f:  mov    %ebp,%esp
08764e31 +0x1611:  pop    %ebp
08764e32 +0x1612:  ret
08764e33 +0x1613:  nop
08764e34 +0x1614:  nop
08764e35 +0x1615:  nop
08764e36 +0x1616:  nop
08764e37 +0x1617:  nop
08764e38 +0x1618:  nop
08764e39 +0x1619:  nop
08764e3a +0x161a:  nop
08764e3b +0x161b:  nop
08764e3c +0x161c:  nop
08764e3d +0x161d:  nop
08764e3e +0x161e:  nop
08764e3f +0x161f:  nop
```

## 反编译 C

```c
// TaoCrypt::Integer::IsSquare @ 0x8763820

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::IsSquare() const */

bool __thiscall TaoCrypt::Integer::IsSquare(Integer *this)

{
  int iVar1;
  uint uVar2;
  int local_3c;
  void *local_38;
  int local_2c;
  void *local_28;
  
  SquareRoot();
  Times((Integer *)&local_3c);
  iVar1 = Compare(this,(Integer *)&local_3c);
  uVar2 = 0;
  memset(local_38,0,local_3c << 2);
  operator_delete__(local_38,uVar2 & 0xffffff00);
  uVar2 = 0;
  memset(local_28,0,local_2c << 2);
  operator_delete__(local_28,uVar2 & 0xffffff00);
  return iVar1 == 0;
}
```
