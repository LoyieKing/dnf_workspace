# Verify

`_ZN8TaoCrypt12DSA_Verifier6VerifyEPKhS2_`

`TaoCrypt::DSA_Verifier::Verify(unsigned char const*, unsigned char const*)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::DSA_Verifier` | `0x08757f50` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08757f50  _ZN8TaoCrypt12DSA_Verifier6VerifyEPKhS2_
#           TaoCrypt::DSA_Verifier::Verify(unsigned char const*, unsigned char const*)
# range [0x08757f50, 0x0875881f]
08757f50 +0x000:  push   %ebp
08757f51 +0x001:  mov    %esp,%ebp
08757f53 +0x003:  push   %edi
08757f54 +0x004:  push   %esi
08757f55 +0x005:  push   %ebx
08757f56 +0x006:  sub    $0x14c,%esp
08757f5c +0x00c:  mov    0x8(%ebp),%edx
08757f5f +0x00f:  call   08722df8 <__i686.get_pc_thunk.bx>
08757f64 +0x014:  add    $0xc14c34,%ebx
08757f6a +0x01a:  mov    (%edx),%eax
08757f6c +0x01c:  mov    %eax,(%esp)
08757f6f +0x01f:  call   087573d0 <_ZNK8TaoCrypt13DSA_PublicKey10GetModulusEv>  ; TaoCrypt::DSA_PublicKey::GetModulus() const
08757f74 +0x024:  mov    0x8(%ebp),%ecx
08757f77 +0x027:  mov    %eax,-0x11c(%ebp)
08757f7d +0x02d:  mov    (%ecx),%eax
08757f7f +0x02f:  mov    %eax,(%esp)
08757f82 +0x032:  call   087573e0 <_ZNK8TaoCrypt13DSA_PublicKey16GetSubGroupOrderEv>  ; TaoCrypt::DSA_PublicKey::GetSubGroupOrder() const
08757f87 +0x037:  mov    0x8(%ebp),%edx
08757f8a +0x03a:  mov    %eax,%esi
08757f8c +0x03c:  mov    (%edx),%eax
08757f8e +0x03e:  mov    %eax,(%esp)
08757f91 +0x041:  call   087573f0 <_ZNK8TaoCrypt13DSA_PublicKey20GetSubGroupGeneratorEv>  ; TaoCrypt::DSA_PublicKey::GetSubGroupGenerator() const
08757f96 +0x046:  mov    0x8(%ebp),%ecx
08757f99 +0x049:  mov    %eax,-0x124(%ebp)
08757f9f +0x04f:  mov    (%ecx),%eax
08757fa1 +0x051:  mov    %eax,(%esp)
08757fa4 +0x054:  call   08757400 <_ZNK8TaoCrypt13DSA_PublicKey13GetPublicPartEv>  ; TaoCrypt::DSA_PublicKey::GetPublicPart() const
08757fa9 +0x059:  mov    %esi,(%esp)
08757fac +0x05c:  mov    %eax,-0x120(%ebp)
08757fb2 +0x062:  call   0875ec30 <_ZNK8TaoCrypt7Integer9ByteCountEv>  ; TaoCrypt::Integer::ByteCount() const
08757fb7 +0x067:  mov    0x8(%ebp),%edi
08757fba +0x06a:  mov    0x10(%ebp),%edx
08757fbd +0x06d:  movl   $0x0,0xc(%esp)
08757fc5 +0x075:  add    $0x4,%edi
08757fc8 +0x078:  mov    %edx,0x4(%esp)
08757fcc +0x07c:  mov    %eax,0x8(%esp)
08757fd0 +0x080:  mov    %eax,-0x130(%ebp)
08757fd6 +0x086:  mov    %edi,(%esp)
08757fd9 +0x089:  call   08761050 <_ZN8TaoCrypt7Integer6DecodeEPKhjNS0_10SignednessE>  ; TaoCrypt::Integer::Decode(unsigned char const*, unsigned int, TaoCrypt::Integer::Signedness)
08757fde +0x08e:  mov    -0x130(%ebp),%eax
08757fe4 +0x094:  mov    0x8(%ebp),%ecx
08757fe7 +0x097:  movl   $0x0,0xc(%esp)
08757fef +0x09f:  mov    %eax,0x8(%esp)
08757ff3 +0x0a3:  add    0x10(%ebp),%eax
08757ff6 +0x0a6:  add    $0x14,%ecx
08757ff9 +0x0a9:  mov    %ecx,-0xfc(%ebp)
08757fff +0x0af:  mov    %ecx,(%esp)
08758002 +0x0b2:  mov    %eax,0x4(%esp)
08758006 +0x0b6:  call   08761050 <_ZN8TaoCrypt7Integer6DecodeEPKhjNS0_10SignednessE>  ; TaoCrypt::Integer::Decode(unsigned char const*, unsigned int, TaoCrypt::Integer::Signedness)
0875800b +0x0bb:  mov    %esi,0x4(%esp)
0875800f +0x0bf:  mov    %edi,(%esp)
08758012 +0x0c2:  call   0875d220 <_ZNK8TaoCrypt7Integer7CompareERKS0_>  ; TaoCrypt::Integer::Compare(TaoCrypt::Integer const&) const
08758017 +0x0c7:  test   %eax,%eax
08758019 +0x0c9:  js     08758028 <+0xd8>
0875801b +0x0cb:  xor    %esi,%esi
0875801d +0x0cd:  lea    -0xc(%ebp),%esp
08758020 +0x0d0:  mov    %esi,%eax
08758022 +0x0d2:  pop    %ebx
08758023 +0x0d3:  pop    %esi
08758024 +0x0d4:  pop    %edi
08758025 +0x0d5:  pop    %ebp
08758026 +0x0d6:  ret
08758027 +0x0d7:  nop
08758028 +0x0d8:  lea    -0x28(%ebp),%eax
0875802b +0x0db:  mov    %eax,(%esp)
0875802e +0x0de:  mov    %eax,-0x130(%ebp)
08758034 +0x0e4:  movl   $0x1,0x4(%esp)
0875803c +0x0ec:  call   0875f4d0 <_ZN8TaoCrypt7IntegerC1El>  ; TaoCrypt::Integer::Integer(long)
08758041 +0x0f1:  mov    -0x130(%ebp),%eax
08758047 +0x0f7:  mov    %edi,(%esp)
0875804a +0x0fa:  mov    %eax,0x4(%esp)
0875804e +0x0fe:  call   0875d220 <_ZNK8TaoCrypt7Integer7CompareERKS0_>  ; TaoCrypt::Integer::Compare(TaoCrypt::Integer const&) const
08758053 +0x103:  test   %eax,%eax
08758055 +0x105:  js     08758071 <+0x121>
08758057 +0x107:  mov    -0xfc(%ebp),%eax
0875805d +0x10d:  mov    %esi,0x4(%esp)
08758061 +0x111:  mov    %eax,(%esp)
08758064 +0x114:  call   0875d220 <_ZNK8TaoCrypt7Integer7CompareERKS0_>  ; TaoCrypt::Integer::Compare(TaoCrypt::Integer const&) const
08758069 +0x119:  test   %eax,%eax
0875806b +0x11b:  js     087584f9 <+0x5a9>
08758071 +0x121:  movb   $0x1,-0x118(%ebp)
08758078 +0x128:  mov    -0x28(%ebp),%eax
0875807b +0x12b:  mov    -0x24(%ebp),%edx
0875807e +0x12e:  movl   $0x0,0x4(%esp)
08758086 +0x136:  shl    $0x2,%eax
08758089 +0x139:  mov    %edx,(%esp)
0875808c +0x13c:  mov    %edx,-0x12c(%ebp)
08758092 +0x142:  mov    %eax,0x8(%esp)
08758096 +0x146:  call   0807dcc0 <_init+0x5b8>
0875809b +0x14b:  mov    -0x12c(%ebp),%edx
087580a1 +0x151:  movb   $0x0,0x4(%esp)
087580a6 +0x156:  mov    %edx,(%esp)
087580a9 +0x159:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
087580ae +0x15e:  cmpb   $0x0,-0x118(%ebp)
087580b5 +0x165:  jne    0875801b <+0xcb>
087580bb +0x16b:  mov    0xc(%ebp),%eax
087580be +0x16e:  movl   $0x0,0xc(%esp)
087580c6 +0x176:  movl   $0x14,0x8(%esp)
087580ce +0x17e:  mov    %eax,0x4(%esp)
087580d2 +0x182:  lea    -0x48(%ebp),%eax
087580d5 +0x185:  mov    %eax,-0x130(%ebp)
087580db +0x18b:  mov    %eax,(%esp)
087580de +0x18e:  call   08761300 <_ZN8TaoCrypt7IntegerC1EPKhjNS0_10SignednessE>  ; TaoCrypt::Integer::Integer(unsigned char const*, unsigned int, TaoCrypt::Integer::Signedness)
087580e3 +0x193:  mov    -0xfc(%ebp),%ecx
087580e9 +0x199:  lea    -0x58(%ebp),%edx
087580ec +0x19c:  mov    %edx,-0x12c(%ebp)
087580f2 +0x1a2:  mov    %esi,0x8(%esp)
087580f6 +0x1a6:  mov    %edx,(%esp)
087580f9 +0x1a9:  mov    %ecx,0x4(%esp)
087580fd +0x1ad:  call   087631e0 <_ZNK8TaoCrypt7Integer10InverseModERKS0_>  ; TaoCrypt::Integer::InverseMod(TaoCrypt::Integer const&) const
08758102 +0x1b2:  mov    -0x12c(%ebp),%edx
08758108 +0x1b8:  lea    -0x78(%ebp),%ecx
0875810b +0x1bb:  mov    -0x130(%ebp),%eax
08758111 +0x1c1:  mov    %ecx,-0x130(%ebp)
08758117 +0x1c7:  sub    $0x4,%esp
0875811a +0x1ca:  mov    %edx,0x8(%esp)
0875811e +0x1ce:  mov    %eax,0x4(%esp)
08758122 +0x1d2:  mov    %ecx,(%esp)
08758125 +0x1d5:  call   08762160 <_ZNK8TaoCrypt7Integer5TimesERKS0_>  ; TaoCrypt::Integer::Times(TaoCrypt::Integer const&) const
0875812a +0x1da:  mov    -0x130(%ebp),%ecx
08758130 +0x1e0:  lea    -0x68(%ebp),%eax
08758133 +0x1e3:  mov    %eax,-0x118(%ebp)
08758139 +0x1e9:  sub    $0x4,%esp
0875813c +0x1ec:  mov    %esi,0x8(%esp)
08758140 +0x1f0:  mov    %ecx,0x4(%esp)
08758144 +0x1f4:  mov    %eax,(%esp)
08758147 +0x1f7:  call   08762620 <_ZNK8TaoCrypt7Integer6ModuloERKS0_>  ; TaoCrypt::Integer::Modulo(TaoCrypt::Integer const&) const
0875814c +0x1fc:  mov    -0x78(%ebp),%eax
0875814f +0x1ff:  mov    -0x74(%ebp),%ecx
08758152 +0x202:  shl    $0x2,%eax
08758155 +0x205:  mov    %ecx,-0x130(%ebp)
0875815b +0x20b:  sub    $0x4,%esp
0875815e +0x20e:  mov    %ecx,(%esp)
08758161 +0x211:  mov    %eax,0x8(%esp)
08758165 +0x215:  movl   $0x0,0x4(%esp)
0875816d +0x21d:  call   0807dcc0 <_init+0x5b8>
08758172 +0x222:  mov    -0x130(%ebp),%ecx
08758178 +0x228:  movb   $0x0,0x4(%esp)
0875817d +0x22d:  mov    %ecx,(%esp)
08758180 +0x230:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08758185 +0x235:  mov    -0x12c(%ebp),%edx
0875818b +0x23b:  lea    -0x98(%ebp),%eax
08758191 +0x241:  mov    %eax,-0x130(%ebp)
08758197 +0x247:  mov    %edi,0x4(%esp)
0875819b +0x24b:  mov    %eax,(%esp)
0875819e +0x24e:  mov    %edx,0x8(%esp)
087581a2 +0x252:  call   08762160 <_ZNK8TaoCrypt7Integer5TimesERKS0_>  ; TaoCrypt::Integer::Times(TaoCrypt::Integer const&) const
087581a7 +0x257:  mov    -0x130(%ebp),%eax
087581ad +0x25d:  lea    -0x88(%ebp),%edx
087581b3 +0x263:  mov    %edx,-0x128(%ebp)
087581b9 +0x269:  sub    $0x4,%esp
087581bc +0x26c:  mov    %esi,0x8(%esp)
087581c0 +0x270:  mov    %eax,0x4(%esp)
087581c4 +0x274:  mov    %edx,(%esp)
087581c7 +0x277:  call   08762620 <_ZNK8TaoCrypt7Integer6ModuloERKS0_>  ; TaoCrypt::Integer::Modulo(TaoCrypt::Integer const&) const
087581cc +0x27c:  mov    -0x98(%ebp),%eax
087581d2 +0x282:  mov    -0x94(%ebp),%edx
087581d8 +0x288:  shl    $0x2,%eax
087581db +0x28b:  mov    %edx,-0x12c(%ebp)
087581e1 +0x291:  sub    $0x4,%esp
087581e4 +0x294:  mov    %edx,(%esp)
087581e7 +0x297:  mov    %eax,0x8(%esp)
087581eb +0x29b:  movl   $0x0,0x4(%esp)
087581f3 +0x2a3:  call   0807dcc0 <_init+0x5b8>
087581f8 +0x2a8:  mov    -0x12c(%ebp),%edx
087581fe +0x2ae:  movb   $0x0,0x4(%esp)
08758203 +0x2b3:  mov    %edx,(%esp)
08758206 +0x2b6:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
0875820b +0x2bb:  mov    -0x40(%ebx),%eax
08758211 +0x2c1:  mov    -0x11c(%ebp),%ecx
08758217 +0x2c7:  mov    -0x2b0(%ebx),%edx
0875821d +0x2cd:  add    $0x8,%eax
08758220 +0x2d0:  mov    %eax,-0xf0(%ebp)
08758226 +0x2d6:  lea    -0xf4(%ebp),%eax
0875822c +0x2dc:  add    $0x8,%edx
0875822f +0x2df:  mov    %ecx,0x4(%esp)
08758233 +0x2e3:  lea    -0xe8(%ebp),%ecx
08758239 +0x2e9:  mov    %edx,-0xf4(%ebp)
0875823f +0x2ef:  mov    %edx,-0x12c(%ebp)
08758245 +0x2f5:  mov    %eax,-0xec(%ebp)
0875824b +0x2fb:  mov    %eax,-0x130(%ebp)
08758251 +0x301:  mov    %ecx,(%esp)
08758254 +0x304:  call   0875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>  ; TaoCrypt::Integer::Integer(TaoCrypt::Integer const&)
08758259 +0x309:  mov    -0x11c(%ebp),%ecx
0875825f +0x30f:  mov    (%ecx),%ecx
08758261 +0x311:  movl   $0x0,0x4(%esp)
08758269 +0x319:  mov    %ecx,0x8(%esp)
0875826d +0x31d:  lea    -0xd8(%ebp),%ecx
08758273 +0x323:  mov    %ecx,(%esp)
08758276 +0x326:  call   0875f0f0 <_ZN8TaoCrypt7IntegerC1Ejj>  ; TaoCrypt::Integer::Integer(unsigned int, unsigned int)
0875827b +0x32b:  lea    -0xc8(%ebp),%ecx
08758281 +0x331:  mov    %ecx,(%esp)
08758284 +0x334:  call   0875f590 <_ZN8TaoCrypt7IntegerC1Ev>  ; TaoCrypt::Integer::Integer()
08758289 +0x339:  lea    -0xa8(%ebp),%ecx
0875828f +0x33f:  mov    -0x130(%ebp),%eax
08758295 +0x345:  mov    %ecx,-0xfc(%ebp)
0875829b +0x34b:  mov    -0x128(%ebp),%ecx
087582a1 +0x351:  mov    %eax,0x4(%esp)
087582a5 +0x355:  mov    -0xfc(%ebp),%eax
087582ab +0x35b:  mov    %ecx,0x14(%esp)
087582af +0x35f:  mov    -0x120(%ebp),%ecx
087582b5 +0x365:  mov    %eax,(%esp)
087582b8 +0x368:  mov    %ecx,0x10(%esp)
087582bc +0x36c:  mov    -0x118(%ebp),%ecx
087582c2 +0x372:  mov    %ecx,0xc(%esp)
087582c6 +0x376:  mov    -0x124(%ebp),%ecx
087582cc +0x37c:  mov    %ecx,0x8(%esp)
087582d0 +0x380:  call   08762d40 <_ZNK8TaoCrypt17ModularArithmetic19CascadeExponentiateERKNS_7IntegerES3_S3_S3_>  ; TaoCrypt::ModularArithmetic::CascadeExponentiate(TaoCrypt::Integer const&, TaoCrypt::Integer const&, TaoCrypt::Integer const&, TaoCrypt::Integer const&) const
087582d5 +0x385:  mov    -0xfc(%ebp),%ecx
087582db +0x38b:  lea    -0xb8(%ebp),%eax
087582e1 +0x391:  mov    %eax,-0x130(%ebp)
087582e7 +0x397:  sub    $0x4,%esp
087582ea +0x39a:  mov    %ecx,0x4(%esp)
087582ee +0x39e:  mov    %esi,0x8(%esp)
087582f2 +0x3a2:  mov    %eax,(%esp)
087582f5 +0x3a5:  call   08762620 <_ZNK8TaoCrypt7Integer6ModuloERKS0_>  ; TaoCrypt::Integer::Modulo(TaoCrypt::Integer const&) const
087582fa +0x3aa:  mov    -0x130(%ebp),%eax
08758300 +0x3b0:  sub    $0x4,%esp
08758303 +0x3b3:  mov    %eax,0x4(%esp)
08758307 +0x3b7:  mov    -0xfc(%ebp),%eax
0875830d +0x3bd:  mov    %eax,(%esp)
08758310 +0x3c0:  call   08760460 <_ZN8TaoCrypt7IntegeraSERKS0_>  ; TaoCrypt::Integer::operator=(TaoCrypt::Integer const&)
08758315 +0x3c5:  mov    -0xb8(%ebp),%eax
0875831b +0x3cb:  mov    -0xb4(%ebp),%esi
08758321 +0x3d1:  movl   $0x0,0x4(%esp)
08758329 +0x3d9:  shl    $0x2,%eax
0875832c +0x3dc:  mov    %esi,(%esp)
0875832f +0x3df:  mov    %eax,0x8(%esp)
08758333 +0x3e3:  call   0807dcc0 <_init+0x5b8>
08758338 +0x3e8:  mov    %esi,(%esp)
0875833b +0x3eb:  movb   $0x0,0x4(%esp)
08758340 +0x3f0:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08758345 +0x3f5:  mov    -0xfc(%ebp),%ecx
0875834b +0x3fb:  mov    %edi,(%esp)
0875834e +0x3fe:  mov    %ecx,0x4(%esp)
08758352 +0x402:  call   0875d220 <_ZNK8TaoCrypt7Integer7CompareERKS0_>  ; TaoCrypt::Integer::Compare(TaoCrypt::Integer const&) const
08758357 +0x407:  mov    -0xa4(%ebp),%esi
0875835d +0x40d:  movl   $0x0,0x4(%esp)
08758365 +0x415:  mov    %esi,(%esp)
08758368 +0x418:  mov    %eax,%edi
0875836a +0x41a:  mov    -0xa8(%ebp),%eax
08758370 +0x420:  shl    $0x2,%eax
08758373 +0x423:  mov    %eax,0x8(%esp)
08758377 +0x427:  call   0807dcc0 <_init+0x5b8>
0875837c +0x42c:  mov    %esi,(%esp)
0875837f +0x42f:  movb   $0x0,0x4(%esp)
08758384 +0x434:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08758389 +0x439:  mov    -0xc8(%ebp),%eax
0875838f +0x43f:  mov    -0x12c(%ebp),%edx
08758395 +0x445:  mov    -0xc4(%ebp),%esi
0875839b +0x44b:  movl   $0x0,0x4(%esp)
087583a3 +0x453:  shl    $0x2,%eax
087583a6 +0x456:  mov    %edx,-0xf4(%ebp)
087583ac +0x45c:  mov    %esi,(%esp)
087583af +0x45f:  mov    %eax,0x8(%esp)
087583b3 +0x463:  call   0807dcc0 <_init+0x5b8>
087583b8 +0x468:  mov    %esi,(%esp)
087583bb +0x46b:  movb   $0x0,0x4(%esp)
087583c0 +0x470:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
087583c5 +0x475:  mov    -0xd8(%ebp),%eax
087583cb +0x47b:  mov    -0xd4(%ebp),%esi
087583d1 +0x481:  movl   $0x0,0x4(%esp)
087583d9 +0x489:  shl    $0x2,%eax
087583dc +0x48c:  mov    %esi,(%esp)
087583df +0x48f:  mov    %eax,0x8(%esp)
087583e3 +0x493:  call   0807dcc0 <_init+0x5b8>
087583e8 +0x498:  mov    %esi,(%esp)
087583eb +0x49b:  movb   $0x0,0x4(%esp)
087583f0 +0x4a0:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
087583f5 +0x4a5:  mov    -0xe8(%ebp),%eax
087583fb +0x4ab:  mov    -0xe4(%ebp),%esi
08758401 +0x4b1:  movl   $0x0,0x4(%esp)
08758409 +0x4b9:  shl    $0x2,%eax
0875840c +0x4bc:  mov    %esi,(%esp)
0875840f +0x4bf:  mov    %eax,0x8(%esp)
08758413 +0x4c3:  call   0807dcc0 <_init+0x5b8>
08758418 +0x4c8:  mov    %esi,(%esp)
0875841b +0x4cb:  movb   $0x0,0x4(%esp)
08758420 +0x4d0:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08758425 +0x4d5:  mov    -0x88(%ebp),%edx
0875842b +0x4db:  mov    -0x194(%ebx),%eax
08758431 +0x4e1:  mov    -0x84(%ebp),%esi
08758437 +0x4e7:  movl   $0x0,0x4(%esp)
0875843f +0x4ef:  shl    $0x2,%edx
08758442 +0x4f2:  add    $0x8,%eax
08758445 +0x4f5:  mov    %edx,0x8(%esp)
08758449 +0x4f9:  mov    %esi,(%esp)
0875844c +0x4fc:  mov    %eax,-0xf0(%ebp)
08758452 +0x502:  mov    %eax,-0xf4(%ebp)
08758458 +0x508:  call   0807dcc0 <_init+0x5b8>
0875845d +0x50d:  mov    %esi,(%esp)
08758460 +0x510:  movb   $0x0,0x4(%esp)
08758465 +0x515:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
0875846a +0x51a:  mov    -0x68(%ebp),%eax
0875846d +0x51d:  mov    -0x64(%ebp),%esi
08758470 +0x520:  movl   $0x0,0x4(%esp)
08758478 +0x528:  shl    $0x2,%eax
0875847b +0x52b:  mov    %esi,(%esp)
0875847e +0x52e:  mov    %eax,0x8(%esp)
08758482 +0x532:  call   0807dcc0 <_init+0x5b8>
08758487 +0x537:  mov    %esi,(%esp)
0875848a +0x53a:  movb   $0x0,0x4(%esp)
0875848f +0x53f:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08758494 +0x544:  mov    -0x58(%ebp),%eax
08758497 +0x547:  mov    -0x54(%ebp),%esi
0875849a +0x54a:  movl   $0x0,0x4(%esp)
087584a2 +0x552:  shl    $0x2,%eax
087584a5 +0x555:  mov    %esi,(%esp)
087584a8 +0x558:  mov    %eax,0x8(%esp)
087584ac +0x55c:  call   0807dcc0 <_init+0x5b8>
087584b1 +0x561:  mov    %esi,(%esp)
087584b4 +0x564:  movb   $0x0,0x4(%esp)
087584b9 +0x569:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
087584be +0x56e:  test   %edi,%edi
087584c0 +0x570:  mov    -0x44(%ebp),%edi
087584c3 +0x573:  sete   %al
087584c6 +0x576:  mov    %eax,%esi
087584c8 +0x578:  mov    -0x48(%ebp),%eax
087584cb +0x57b:  movl   $0x0,0x4(%esp)
087584d3 +0x583:  mov    %edi,(%esp)
087584d6 +0x586:  shl    $0x2,%eax
087584d9 +0x589:  mov    %eax,0x8(%esp)
087584dd +0x58d:  call   0807dcc0 <_init+0x5b8>
087584e2 +0x592:  mov    %edi,(%esp)
087584e5 +0x595:  movb   $0x0,0x4(%esp)
087584ea +0x59a:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
087584ef +0x59f:  lea    -0xc(%ebp),%esp
087584f2 +0x5a2:  mov    %esi,%eax
087584f4 +0x5a4:  pop    %ebx
087584f5 +0x5a5:  pop    %esi
087584f6 +0x5a6:  pop    %edi
087584f7 +0x5a7:  pop    %ebp
087584f8 +0x5a8:  ret
087584f9 +0x5a9:  lea    -0x38(%ebp),%eax
087584fc +0x5ac:  mov    %eax,(%esp)
087584ff +0x5af:  mov    %eax,-0x130(%ebp)
08758505 +0x5b5:  movl   $0x1,0x4(%esp)
0875850d +0x5bd:  call   0875f4d0 <_ZN8TaoCrypt7IntegerC1El>  ; TaoCrypt::Integer::Integer(long)
08758512 +0x5c2:  mov    -0xfc(%ebp),%edx
08758518 +0x5c8:  mov    -0x130(%ebp),%eax
0875851e +0x5ce:  mov    %edx,(%esp)
08758521 +0x5d1:  mov    %eax,0x4(%esp)
08758525 +0x5d5:  call   0875d220 <_ZNK8TaoCrypt7Integer7CompareERKS0_>  ; TaoCrypt::Integer::Compare(TaoCrypt::Integer const&) const
0875852a +0x5da:  mov    -0x34(%ebp),%edx
0875852d +0x5dd:  movl   $0x0,0x4(%esp)
08758535 +0x5e5:  mov    %edx,(%esp)
08758538 +0x5e8:  mov    %edx,-0x12c(%ebp)
0875853e +0x5ee:  shr    $0x1f,%eax
08758541 +0x5f1:  mov    %al,-0x118(%ebp)
08758547 +0x5f7:  mov    -0x38(%ebp),%eax
0875854a +0x5fa:  shl    $0x2,%eax
0875854d +0x5fd:  mov    %eax,0x8(%esp)
08758551 +0x601:  call   0807dcc0 <_init+0x5b8>
08758556 +0x606:  mov    -0x12c(%ebp),%edx
0875855c +0x60c:  movb   $0x0,0x4(%esp)
08758561 +0x611:  mov    %edx,(%esp)
08758564 +0x614:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08758569 +0x619:  jmp    08758078 <+0x128>
0875856e +0x61e:  nop
0875856f +0x61f:  nop
08758570 +0x620:  push   %ebp
08758571 +0x621:  xor    %eax,%eax
08758573 +0x623:  mov    %esp,%ebp
08758575 +0x625:  pop    %ebp
08758576 +0x626:  ret
08758577 +0x627:  nop
08758578 +0x628:  nop
08758579 +0x629:  nop
0875857a +0x62a:  nop
0875857b +0x62b:  nop
0875857c +0x62c:  nop
0875857d +0x62d:  nop
0875857e +0x62e:  nop
0875857f +0x62f:  nop
08758580 +0x630:  call   087245c4 <__i686.get_pc_thunk.cx>
08758585 +0x635:  add    $0xc14613,%ecx
0875858b +0x63b:  push   %ebp
0875858c +0x63c:  mov    %esp,%ebp
0875858e +0x63e:  mov    -0x194(%ecx),%eax
08758594 +0x644:  lea    0x8(%eax),%edx
08758597 +0x647:  mov    0x8(%ebp),%eax
0875859a +0x64a:  mov    %edx,(%eax)
0875859c +0x64c:  pop    %ebp
0875859d +0x64d:  ret
0875859e +0x64e:  nop
0875859f +0x64f:  nop
087585a0 +0x650:  call   087245c4 <__i686.get_pc_thunk.cx>
087585a5 +0x655:  add    $0xc145f3,%ecx
087585ab +0x65b:  push   %ebp
087585ac +0x65c:  mov    %esp,%ebp
087585ae +0x65e:  mov    -0x194(%ecx),%eax
087585b4 +0x664:  lea    0x8(%eax),%edx
087585b7 +0x667:  mov    0x8(%ebp),%eax
087585ba +0x66a:  mov    %edx,(%eax)
087585bc +0x66c:  pop    %ebp
087585bd +0x66d:  ret
087585be +0x66e:  nop
087585bf +0x66f:  nop
087585c0 +0x670:  push   %ebp
087585c1 +0x671:  mov    %esp,%ebp
087585c3 +0x673:  sub    $0x18,%esp
087585c6 +0x676:  mov    0x8(%ebp),%eax
087585c9 +0x679:  mov    0x10(%ebp),%ecx
087585cc +0x67c:  mov    0x4(%eax),%eax
087585cf +0x67f:  mov    (%eax),%edx
087585d1 +0x681:  mov    %ecx,0x8(%esp)
087585d5 +0x685:  mov    0xc(%ebp),%ecx
087585d8 +0x688:  mov    %eax,(%esp)
087585db +0x68b:  mov    %ecx,0x4(%esp)
087585df +0x68f:  call   *0x8(%edx)
087585e2 +0x692:  leave
087585e3 +0x693:  ret
087585e4 +0x694:  nop
087585e5 +0x695:  nop
087585e6 +0x696:  nop
087585e7 +0x697:  nop
087585e8 +0x698:  nop
087585e9 +0x699:  nop
087585ea +0x69a:  nop
087585eb +0x69b:  nop
087585ec +0x69c:  nop
087585ed +0x69d:  nop
087585ee +0x69e:  nop
087585ef +0x69f:  nop
087585f0 +0x6a0:  push   %ebp
087585f1 +0x6a1:  mov    %esp,%ebp
087585f3 +0x6a3:  sub    $0x18,%esp
087585f6 +0x6a6:  mov    0x8(%ebp),%eax
087585f9 +0x6a9:  mov    0x4(%eax),%eax
087585fc +0x6ac:  mov    (%eax),%edx
087585fe +0x6ae:  mov    %eax,(%esp)
08758601 +0x6b1:  call   *0x3c(%edx)
08758604 +0x6b4:  leave
08758605 +0x6b5:  ret
08758606 +0x6b6:  nop
08758607 +0x6b7:  nop
08758608 +0x6b8:  nop
08758609 +0x6b9:  nop
0875860a +0x6ba:  nop
0875860b +0x6bb:  nop
0875860c +0x6bc:  nop
0875860d +0x6bd:  nop
0875860e +0x6be:  nop
0875860f +0x6bf:  nop
08758610 +0x6c0:  push   %ebp
08758611 +0x6c1:  mov    %esp,%ebp
08758613 +0x6c3:  sub    $0x18,%esp
08758616 +0x6c6:  mov    0x8(%ebp),%eax
08758619 +0x6c9:  mov    0x10(%ebp),%ecx
0875861c +0x6cc:  mov    0x4(%eax),%eax
0875861f +0x6cf:  mov    (%eax),%edx
08758621 +0x6d1:  mov    %ecx,0x8(%esp)
08758625 +0x6d5:  mov    0xc(%ebp),%ecx
08758628 +0x6d8:  mov    %eax,(%esp)
0875862b +0x6db:  mov    %ecx,0x4(%esp)
0875862f +0x6df:  call   *0x40(%edx)
08758632 +0x6e2:  leave
08758633 +0x6e3:  ret
08758634 +0x6e4:  nop
08758635 +0x6e5:  nop
08758636 +0x6e6:  nop
08758637 +0x6e7:  nop
08758638 +0x6e8:  nop
08758639 +0x6e9:  nop
0875863a +0x6ea:  nop
0875863b +0x6eb:  nop
0875863c +0x6ec:  nop
0875863d +0x6ed:  nop
0875863e +0x6ee:  nop
0875863f +0x6ef:  nop
08758640 +0x6f0:  push   %ebp
08758641 +0x6f1:  mov    %esp,%ebp
08758643 +0x6f3:  sub    $0x18,%esp
08758646 +0x6f6:  mov    0x8(%ebp),%eax
08758649 +0x6f9:  mov    0xc(%ebp),%ecx
0875864c +0x6fc:  mov    0x4(%eax),%eax
0875864f +0x6ff:  mov    (%eax),%edx
08758651 +0x701:  mov    %ecx,0x4(%esp)
08758655 +0x705:  mov    %eax,(%esp)
08758658 +0x708:  call   *0x44(%edx)
0875865b +0x70b:  leave
0875865c +0x70c:  ret
0875865d +0x70d:  nop
0875865e +0x70e:  nop
0875865f +0x70f:  nop
08758660 +0x710:  push   %ebp
08758661 +0x711:  mov    %esp,%ebp
08758663 +0x713:  sub    $0x18,%esp
08758666 +0x716:  mov    0x8(%ebp),%eax
08758669 +0x719:  mov    0x10(%ebp),%ecx
0875866c +0x71c:  mov    0x4(%eax),%eax
0875866f +0x71f:  mov    (%eax),%edx
08758671 +0x721:  mov    %ecx,0x8(%esp)
08758675 +0x725:  mov    0xc(%ebp),%ecx
08758678 +0x728:  mov    %eax,(%esp)
0875867b +0x72b:  mov    %ecx,0x4(%esp)
0875867f +0x72f:  call   *0x4c(%edx)
08758682 +0x732:  leave
08758683 +0x733:  ret
08758684 +0x734:  nop
08758685 +0x735:  nop
08758686 +0x736:  nop
08758687 +0x737:  nop
08758688 +0x738:  nop
08758689 +0x739:  nop
0875868a +0x73a:  nop
0875868b +0x73b:  nop
0875868c +0x73c:  nop
0875868d +0x73d:  nop
0875868e +0x73e:  nop
0875868f +0x73f:  nop
08758690 +0x740:  push   %ebp
08758691 +0x741:  mov    %esp,%ebp
08758693 +0x743:  sub    $0x18,%esp
08758696 +0x746:  mov    0x8(%ebp),%eax
08758699 +0x749:  mov    0xc(%ebp),%ecx
0875869c +0x74c:  mov    0x4(%eax),%eax
0875869f +0x74f:  mov    (%eax),%edx
087586a1 +0x751:  mov    %ecx,0x4(%esp)
087586a5 +0x755:  mov    %eax,(%esp)
087586a8 +0x758:  call   *0x48(%edx)
087586ab +0x75b:  leave
087586ac +0x75c:  ret
087586ad +0x75d:  nop
087586ae +0x75e:  nop
087586af +0x75f:  nop
087586b0 +0x760:  push   %ebp
087586b1 +0x761:  mov    %esp,%ebp
087586b3 +0x763:  push   %esi
087586b4 +0x764:  sub    $0x14,%esp
087586b7 +0x767:  mov    0xc(%ebp),%eax
087586ba +0x76a:  mov    0x14(%ebp),%ecx
087586bd +0x76d:  mov    0x8(%ebp),%esi
087586c0 +0x770:  mov    0x4(%eax),%eax
087586c3 +0x773:  mov    (%eax),%edx
087586c5 +0x775:  mov    %ecx,0xc(%esp)
087586c9 +0x779:  mov    0x10(%ebp),%ecx
087586cc +0x77c:  mov    %eax,0x4(%esp)
087586d0 +0x780:  mov    %esi,(%esp)
087586d3 +0x783:  mov    %ecx,0x8(%esp)
087586d7 +0x787:  call   *0x50(%edx)
087586da +0x78a:  mov    %esi,%eax
087586dc +0x78c:  mov    -0x4(%ebp),%esi
087586df +0x78f:  sub    $0x4,%esp
087586e2 +0x792:  leave
087586e3 +0x793:  ret    $0x4
087586e6 +0x796:  nop
087586e7 +0x797:  nop
087586e8 +0x798:  nop
087586e9 +0x799:  nop
087586ea +0x79a:  nop
087586eb +0x79b:  nop
087586ec +0x79c:  nop
087586ed +0x79d:  nop
087586ee +0x79e:  nop
087586ef +0x79f:  nop
087586f0 +0x7a0:  push   %ebp
087586f1 +0x7a1:  mov    %esp,%ebp
087586f3 +0x7a3:  push   %esi
087586f4 +0x7a4:  sub    $0x24,%esp
087586f7 +0x7a7:  mov    0xc(%ebp),%eax
087586fa +0x7aa:  mov    0x1c(%ebp),%ecx
087586fd +0x7ad:  mov    0x8(%ebp),%esi
08758700 +0x7b0:  mov    0x4(%eax),%eax
08758703 +0x7b3:  mov    (%eax),%edx
08758705 +0x7b5:  mov    %ecx,0x14(%esp)
08758709 +0x7b9:  mov    0x18(%ebp),%ecx
0875870c +0x7bc:  mov    %eax,0x4(%esp)
08758710 +0x7c0:  mov    %esi,(%esp)
08758713 +0x7c3:  mov    %ecx,0x10(%esp)
08758717 +0x7c7:  mov    0x14(%ebp),%ecx
0875871a +0x7ca:  mov    %ecx,0xc(%esp)
0875871e +0x7ce:  mov    0x10(%ebp),%ecx
08758721 +0x7d1:  mov    %ecx,0x8(%esp)
08758725 +0x7d5:  call   *0x54(%edx)
08758728 +0x7d8:  mov    %esi,%eax
0875872a +0x7da:  mov    -0x4(%ebp),%esi
0875872d +0x7dd:  sub    $0x4,%esp
08758730 +0x7e0:  leave
08758731 +0x7e1:  ret    $0x4
08758734 +0x7e4:  nop
08758735 +0x7e5:  nop
08758736 +0x7e6:  nop
08758737 +0x7e7:  nop
08758738 +0x7e8:  nop
08758739 +0x7e9:  nop
0875873a +0x7ea:  nop
0875873b +0x7eb:  nop
0875873c +0x7ec:  nop
0875873d +0x7ed:  nop
0875873e +0x7ee:  nop
0875873f +0x7ef:  nop
08758740 +0x7f0:  push   %ebp
08758741 +0x7f1:  mov    %esp,%ebp
08758743 +0x7f3:  sub    $0x28,%esp
08758746 +0x7f6:  mov    0x8(%ebp),%eax
08758749 +0x7f9:  mov    0x18(%ebp),%ecx
0875874c +0x7fc:  mov    0x4(%eax),%eax
0875874f +0x7ff:  mov    (%eax),%edx
08758751 +0x801:  mov    %ecx,0x10(%esp)
08758755 +0x805:  mov    0x14(%ebp),%ecx
08758758 +0x808:  mov    %eax,(%esp)
0875875b +0x80b:  mov    %ecx,0xc(%esp)
0875875f +0x80f:  mov    0x10(%ebp),%ecx
08758762 +0x812:  mov    %ecx,0x8(%esp)
08758766 +0x816:  mov    0xc(%ebp),%ecx
08758769 +0x819:  mov    %ecx,0x4(%esp)
0875876d +0x81d:  call   *0x58(%edx)
08758770 +0x820:  leave
08758771 +0x821:  ret
08758772 +0x822:  nop
08758773 +0x823:  nop
08758774 +0x824:  nop
08758775 +0x825:  nop
08758776 +0x826:  nop
08758777 +0x827:  nop
08758778 +0x828:  nop
08758779 +0x829:  nop
0875877a +0x82a:  nop
0875877b +0x82b:  nop
0875877c +0x82c:  nop
0875877d +0x82d:  nop
0875877e +0x82e:  nop
0875877f +0x82f:  nop
08758780 +0x830:  push   %ebp
08758781 +0x831:  mov    %esp,%ebp
08758783 +0x833:  sub    $0x18,%esp
08758786 +0x836:  mov    0x8(%ebp),%eax
08758789 +0x839:  mov    %ebx,-0x8(%ebp)
0875878c +0x83c:  mov    0x10(%ebp),%ecx
0875878f +0x83f:  mov    %esi,-0x4(%ebp)
08758792 +0x842:  mov    0xc(%ebp),%esi
08758795 +0x845:  call   08722df8 <__i686.get_pc_thunk.bx>
0875879a +0x84a:  add    $0xc143fe,%ebx
087587a0 +0x850:  mov    0x4(%eax),%eax
087587a3 +0x853:  mov    (%eax),%edx
087587a5 +0x855:  mov    %ecx,0x8(%esp)
087587a9 +0x859:  mov    %esi,0x4(%esp)
087587ad +0x85d:  mov    %eax,(%esp)
087587b0 +0x860:  call   *0x4c(%edx)
087587b3 +0x863:  mov    %esi,(%esp)
087587b6 +0x866:  mov    %eax,0x4(%esp)
087587ba +0x86a:  call   08760460 <_ZN8TaoCrypt7IntegeraSERKS0_>  ; TaoCrypt::Integer::operator=(TaoCrypt::Integer const&)
087587bf +0x86f:  mov    -0x8(%ebp),%ebx
087587c2 +0x872:  mov    -0x4(%ebp),%esi
087587c5 +0x875:  mov    %ebp,%esp
087587c7 +0x877:  pop    %ebp
087587c8 +0x878:  ret
087587c9 +0x879:  nop
087587ca +0x87a:  nop
087587cb +0x87b:  nop
087587cc +0x87c:  nop
087587cd +0x87d:  nop
087587ce +0x87e:  nop
087587cf +0x87f:  nop
087587d0 +0x880:  push   %ebp
087587d1 +0x881:  mov    %esp,%ebp
087587d3 +0x883:  sub    $0x18,%esp
087587d6 +0x886:  mov    0x8(%ebp),%eax
087587d9 +0x889:  mov    %ebx,-0x8(%ebp)
087587dc +0x88c:  mov    0x10(%ebp),%ecx
087587df +0x88f:  mov    %esi,-0x4(%ebp)
087587e2 +0x892:  mov    0xc(%ebp),%esi
087587e5 +0x895:  call   08722df8 <__i686.get_pc_thunk.bx>
087587ea +0x89a:  add    $0xc143ae,%ebx
087587f0 +0x8a0:  mov    0x4(%eax),%eax
087587f3 +0x8a3:  mov    (%eax),%edx
087587f5 +0x8a5:  mov    %ecx,0x8(%esp)
087587f9 +0x8a9:  mov    %esi,0x4(%esp)
087587fd +0x8ad:  mov    %eax,(%esp)
08758800 +0x8b0:  call   *0x40(%edx)
08758803 +0x8b3:  mov    %esi,(%esp)
08758806 +0x8b6:  mov    %eax,0x4(%esp)
0875880a +0x8ba:  call   08760460 <_ZN8TaoCrypt7IntegeraSERKS0_>  ; TaoCrypt::Integer::operator=(TaoCrypt::Integer const&)
0875880f +0x8bf:  mov    -0x8(%ebp),%ebx
08758812 +0x8c2:  mov    -0x4(%ebp),%esi
08758815 +0x8c5:  mov    %ebp,%esp
08758817 +0x8c7:  pop    %ebp
08758818 +0x8c8:  ret
08758819 +0x8c9:  nop
0875881a +0x8ca:  nop
0875881b +0x8cb:  nop
0875881c +0x8cc:  nop
0875881d +0x8cd:  nop
0875881e +0x8ce:  nop
0875881f +0x8cf:  nop
```

## 反编译 C

```c
// TaoCrypt::DSA_Verifier::Verify @ 0x8757f50

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::DSA_Verifier::Verify(unsigned char const*, unsigned char const*) */

bool __thiscall TaoCrypt::DSA_Verifier::Verify(DSA_Verifier *this,uchar *param_1,uchar *param_2)

{
  Integer *pIVar1;
  Integer *pIVar2;
  Integer *pIVar3;
  undefined4 uVar4;
  int iVar5;
  size_t __n;
  byte extraout_var;
  Integer *pIVar6;
  undefined *puVar7;
  Integer *this_00;
  uint uVar8;
  byte local_11c;
  undefined *local_f8;
  undefined *local_f4;
  Integer *local_f0;
  int local_ec;
  void *local_e8;
  int local_dc;
  void *local_d8;
  int local_cc;
  void *local_c8;
  int local_bc;
  void *local_b8;
  int local_ac;
  void *local_a8;
  int local_9c;
  void *local_98;
  int local_8c;
  void *local_88;
  int local_7c;
  void *local_78;
  int local_6c;
  void *local_68;
  int local_5c;
  void *local_58;
  int local_4c;
  void *local_48;
  int local_3c;
  void *local_38;
  int local_2c;
  void *local_28;
  
  pIVar1 = (Integer *)DSA_PublicKey::GetModulus(*(DSA_PublicKey **)this);
  pIVar2 = (Integer *)DSA_PublicKey::GetSubGroupOrder(*(DSA_PublicKey **)this);
  pIVar3 = (Integer *)DSA_PublicKey::GetSubGroupGenerator(*(DSA_PublicKey **)this);
  uVar4 = DSA_PublicKey::GetPublicPart(*(DSA_PublicKey **)this);
  iVar5 = Integer::ByteCount(pIVar2);
  this_00 = (Integer *)(this + 4);
  Integer::Decode(this_00,param_2,iVar5,0);
  pIVar6 = (Integer *)(this + 0x14);
  Integer::Decode(pIVar6,param_2 + iVar5,iVar5,0);
  iVar5 = Integer::Compare(this_00,pIVar2);
  if (-1 < iVar5) {
    return false;
  }
  Integer::Integer((Integer *)&local_2c,1);
  iVar5 = Integer::Compare(this_00,(Integer *)&local_2c);
  if ((iVar5 < 0) || (iVar5 = Integer::Compare(pIVar6,pIVar2), -1 < iVar5)) {
    local_11c = 1;
  }
  else {
    Integer::Integer((Integer *)&local_3c,1);
    Integer::Compare(pIVar6,(Integer *)&local_3c);
    uVar8 = 0;
    local_11c = extraout_var >> 7;
    memset(local_38,0,local_3c << 2);
    operator_delete__(local_38,uVar8 & 0xffffff00);
  }
  uVar8 = 0;
  memset(local_28,0,local_2c << 2);
  operator_delete__(local_28,uVar8 & 0xffffff00);
  if (local_11c != 0) {
    return false;
  }
  Integer::Integer((Integer *)&local_4c,param_1,0x14,0);
  Integer::InverseMod((Integer *)&local_5c);
  Integer::Times((Integer *)&local_7c);
  pIVar2 = (Integer *)&local_6c;
  Integer::Modulo(pIVar2);
  uVar8 = 0;
  memset(local_78,0,local_7c << 2);
  operator_delete__(local_78,uVar8 & 0xffffff00);
  Integer::Times((Integer *)&local_9c);
  pIVar6 = (Integer *)&local_8c;
  Integer::Modulo(pIVar6);
  uVar8 = 0;
  memset(local_98,0,local_9c << 2);
  operator_delete__(local_98,uVar8 & 0xffffff00);
  local_f4 = PTR_vtable_0936cb58 + 8;
  puVar7 = PTR_vtable_0936c8e8 + 8;
  local_f8 = puVar7;
  local_f0 = (Integer *)&local_f8;
  Integer::Integer((Integer *)&local_ec,pIVar1);
  Integer::Integer((Integer *)&local_dc,0,*(uint *)pIVar1);
  Integer::Integer((Integer *)&local_cc);
  ModularArithmetic::CascadeExponentiate((Integer *)&local_ac,(Integer *)&local_f8,pIVar3,pIVar2);
  Integer::Modulo((Integer *)&local_bc);
  Integer::operator=((Integer *)&local_ac,(Integer *)&local_bc);
  uVar8 = 0;
  __n = local_bc << 2;
  memset(local_b8,0,__n);
  operator_delete__(local_b8,uVar8 & 0xffffff00,__n,pIVar2,uVar4,pIVar6);
  iVar5 = Integer::Compare(this_00,(Integer *)&local_ac);
  uVar8 = 0;
  memset(local_a8,0,local_ac << 2);
  operator_delete__(local_a8,uVar8 & 0xffffff00);
  uVar8 = 0;
  local_f8 = puVar7;
  memset(local_c8,0,local_cc << 2);
  operator_delete__(local_c8,uVar8 & 0xffffff00);
  uVar8 = 0;
  memset(local_d8,0,local_dc << 2);
  operator_delete__(local_d8,uVar8 & 0xffffff00);
  uVar8 = 0;
  memset(local_e8,0,local_ec << 2);
  operator_delete__(local_e8,uVar8 & 0xffffff00);
  uVar8 = 0;
  local_f8 = PTR_vtable_0936ca04 + 8;
  local_f4 = local_f8;
  memset(local_88,0,local_8c << 2);
  operator_delete__(local_88,uVar8 & 0xffffff00);
  uVar8 = 0;
  memset(local_68,0,local_6c << 2);
  operator_delete__(local_68,uVar8 & 0xffffff00);
  uVar8 = 0;
  memset(local_58,0,local_5c << 2);
  operator_delete__(local_58,uVar8 & 0xffffff00);
  uVar8 = 0;
  memset(local_48,0,local_4c << 2);
  operator_delete__(local_48,uVar8 & 0xffffff00);
  return iVar5 == 0;
}
```
