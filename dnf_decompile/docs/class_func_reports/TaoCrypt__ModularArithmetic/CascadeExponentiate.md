# CascadeExponentiate

`_ZNK8TaoCrypt17ModularArithmetic19CascadeExponentiateERKNS_7IntegerES3_S3_S3_`

`TaoCrypt::ModularArithmetic::CascadeExponentiate(TaoCrypt::Integer const&, TaoCrypt::Integer const&, TaoCrypt::Integer const&, TaoCrypt::Integer const&) const`

| 类 | 地址 |
|---|---|
| `TaoCrypt::ModularArithmetic` | `0x08762d40` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08762d40  _ZNK8TaoCrypt17ModularArithmetic19CascadeExponentiateERKNS_7IntegerES3_S3_S3_
#           TaoCrypt::ModularArithmetic::CascadeExponentiate(TaoCrypt::Integer const&, TaoCrypt::Integer const&, TaoCrypt::Integer const&, TaoCrypt::Integer const&) const
# range [0x08762d40, 0x0876314e]
08762d40 +0x000:  push   %ebp
08762d41 +0x001:  mov    %esp,%ebp
08762d43 +0x003:  push   %edi
08762d44 +0x004:  push   %esi
08762d45 +0x005:  push   %ebx
08762d46 +0x006:  call   08722df8 <__i686.get_pc_thunk.bx>
08762d4b +0x00b:  add    $0xc09e4d,%ebx
08762d51 +0x011:  sub    $0x10c,%esp
08762d57 +0x017:  mov    0xc(%ebp),%esi
08762d5a +0x01a:  mov    0x18(%ebp),%edi
08762d5d +0x01d:  movl   $0x0,0x4(%esp)
08762d65 +0x025:  lea    0xc(%esi),%edx
08762d68 +0x028:  mov    %edx,(%esp)
08762d6b +0x02b:  mov    %edx,-0xf0(%ebp)
08762d71 +0x031:  call   0875d080 <_ZNK8TaoCrypt7Integer6GetBitEj>  ; TaoCrypt::Integer::GetBit(unsigned int) const
08762d76 +0x036:  mov    -0xf0(%ebp),%edx
08762d7c +0x03c:  test   %al,%al
08762d7e +0x03e:  jne    08762db8 <+0x78>
08762d80 +0x040:  mov    0x1c(%ebp),%edx
08762d83 +0x043:  mov    0x14(%ebp),%eax
08762d86 +0x046:  mov    %edi,0x10(%esp)
08762d8a +0x04a:  mov    %esi,0x4(%esp)
08762d8e +0x04e:  mov    %edx,0x14(%esp)
08762d92 +0x052:  mov    0x10(%ebp),%edx
08762d95 +0x055:  mov    %eax,0xc(%esp)
08762d99 +0x059:  mov    0x8(%ebp),%eax
08762d9c +0x05c:  mov    %edx,0x8(%esp)
08762da0 +0x060:  mov    %eax,(%esp)
08762da3 +0x063:  call   087a4840 <_ZNK8TaoCrypt12AbstractRing19CascadeExponentiateERKNS_7IntegerES3_S3_S3_>  ; TaoCrypt::AbstractRing::CascadeExponentiate(TaoCrypt::Integer const&, TaoCrypt::Integer const&, TaoCrypt::Integer const&, TaoCrypt::Integer const&) const
08762da8 +0x068:  mov    0x8(%ebp),%eax
08762dab +0x06b:  sub    $0x4,%esp
08762dae +0x06e:  lea    -0xc(%ebp),%esp
08762db1 +0x071:  pop    %ebx
08762db2 +0x072:  pop    %esi
08762db3 +0x073:  pop    %edi
08762db4 +0x074:  pop    %ebp
08762db5 +0x075:  ret    $0x4
08762db8 +0x078:  lea    -0xe0(%ebp),%esi
08762dbe +0x07e:  mov    %edx,0x4(%esp)
08762dc2 +0x082:  mov    %esi,(%esp)
08762dc5 +0x085:  call   0875f910 <_ZN8TaoCrypt24MontgomeryRepresentationC1ERKNS_7IntegerE>  ; TaoCrypt::MontgomeryRepresentation::MontgomeryRepresentation(TaoCrypt::Integer const&)
08762dca +0x08a:  mov    -0xd4(%ebp),%eax
08762dd0 +0x090:  mov    %edi,0x4(%esp)
08762dd4 +0x094:  lea    -0x68(%ebp),%edi
08762dd7 +0x097:  mov    %edi,(%esp)
08762dda +0x09a:  shl    $0x5,%eax
08762ddd +0x09d:  mov    %eax,-0xf4(%ebp)
08762de3 +0x0a3:  call   0875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>  ; TaoCrypt::Integer::Integer(TaoCrypt::Integer const&)
08762de8 +0x0a8:  mov    -0xf4(%ebp),%eax
08762dee +0x0ae:  mov    %edi,(%esp)
08762df1 +0x0b1:  lea    -0x58(%ebp),%edi
08762df4 +0x0b4:  mov    %eax,0x4(%esp)
08762df8 +0x0b8:  call   0875eda0 <_ZN8TaoCrypt7IntegerlSEj>  ; TaoCrypt::Integer::operator<<=(unsigned int)
08762dfd +0x0bd:  mov    %edi,(%esp)
08762e00 +0x0c0:  mov    %eax,0x4(%esp)
08762e04 +0x0c4:  call   0875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>  ; TaoCrypt::Integer::Integer(TaoCrypt::Integer const&)
08762e09 +0x0c9:  mov    -0x68(%ebp),%eax
08762e0c +0x0cc:  mov    -0x64(%ebp),%edx
08762e0f +0x0cf:  movl   $0x0,0x4(%esp)
08762e17 +0x0d7:  shl    $0x2,%eax
08762e1a +0x0da:  mov    %edx,(%esp)
08762e1d +0x0dd:  mov    %edx,-0xf0(%ebp)
08762e23 +0x0e3:  mov    %eax,0x8(%esp)
08762e27 +0x0e7:  call   0807dcc0 <_init+0x5b8>
08762e2c +0x0ec:  mov    -0xf0(%ebp),%edx
08762e32 +0x0f2:  movb   $0x0,0x4(%esp)
08762e37 +0x0f7:  mov    %edx,(%esp)
08762e3a +0x0fa:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08762e3f +0x0ff:  lea    -0xd4(%ebp),%edx
08762e45 +0x105:  lea    -0x38(%ebp),%eax
08762e48 +0x108:  mov    %edx,-0xf0(%ebp)
08762e4e +0x10e:  mov    %edx,0x8(%esp)
08762e52 +0x112:  mov    %eax,-0xec(%ebp)
08762e58 +0x118:  mov    %edi,0x4(%esp)
08762e5c +0x11c:  mov    %eax,(%esp)
08762e5f +0x11f:  call   08762620 <_ZNK8TaoCrypt7Integer6ModuloERKS0_>  ; TaoCrypt::Integer::Modulo(TaoCrypt::Integer const&) const
08762e64 +0x124:  mov    -0x58(%ebp),%eax
08762e67 +0x127:  mov    -0x54(%ebp),%edi
08762e6a +0x12a:  shl    $0x2,%eax
08762e6d +0x12d:  sub    $0x4,%esp
08762e70 +0x130:  mov    %edi,(%esp)
08762e73 +0x133:  mov    %eax,0x8(%esp)
08762e77 +0x137:  movl   $0x0,0x4(%esp)
08762e7f +0x13f:  call   0807dcc0 <_init+0x5b8>
08762e84 +0x144:  mov    %edi,(%esp)
08762e87 +0x147:  movb   $0x0,0x4(%esp)
08762e8c +0x14c:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08762e91 +0x151:  mov    0x10(%ebp),%eax
08762e94 +0x154:  mov    -0xd4(%ebp),%edi
08762e9a +0x15a:  mov    %eax,0x4(%esp)
08762e9e +0x15e:  lea    -0x88(%ebp),%eax
08762ea4 +0x164:  mov    %eax,(%esp)
08762ea7 +0x167:  shl    $0x5,%edi
08762eaa +0x16a:  mov    %eax,-0xf4(%ebp)
08762eb0 +0x170:  call   0875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>  ; TaoCrypt::Integer::Integer(TaoCrypt::Integer const&)
08762eb5 +0x175:  mov    -0xf4(%ebp),%eax
08762ebb +0x17b:  mov    %edi,0x4(%esp)
08762ebf +0x17f:  mov    %eax,(%esp)
08762ec2 +0x182:  call   0875eda0 <_ZN8TaoCrypt7IntegerlSEj>  ; TaoCrypt::Integer::operator<<=(unsigned int)
08762ec7 +0x187:  lea    -0x78(%ebp),%ecx
08762eca +0x18a:  mov    %ecx,(%esp)
08762ecd +0x18d:  mov    %ecx,-0xf4(%ebp)
08762ed3 +0x193:  mov    %eax,0x4(%esp)
08762ed7 +0x197:  call   0875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>  ; TaoCrypt::Integer::Integer(TaoCrypt::Integer const&)
08762edc +0x19c:  mov    -0x88(%ebp),%eax
08762ee2 +0x1a2:  mov    -0x84(%ebp),%edi
08762ee8 +0x1a8:  movl   $0x0,0x4(%esp)
08762ef0 +0x1b0:  shl    $0x2,%eax
08762ef3 +0x1b3:  mov    %edi,(%esp)
08762ef6 +0x1b6:  mov    %eax,0x8(%esp)
08762efa +0x1ba:  call   0807dcc0 <_init+0x5b8>
08762eff +0x1bf:  mov    %edi,(%esp)
08762f02 +0x1c2:  lea    -0x28(%ebp),%edi
08762f05 +0x1c5:  movb   $0x0,0x4(%esp)
08762f0a +0x1ca:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08762f0f +0x1cf:  mov    -0xf4(%ebp),%ecx
08762f15 +0x1d5:  mov    -0xf0(%ebp),%edx
08762f1b +0x1db:  mov    %edi,(%esp)
08762f1e +0x1de:  mov    %ecx,0x4(%esp)
08762f22 +0x1e2:  mov    %edx,0x8(%esp)
08762f26 +0x1e6:  call   08762620 <_ZNK8TaoCrypt7Integer6ModuloERKS0_>  ; TaoCrypt::Integer::Modulo(TaoCrypt::Integer const&) const
08762f2b +0x1eb:  mov    -0x78(%ebp),%eax
08762f2e +0x1ee:  mov    -0x74(%ebp),%edx
08762f31 +0x1f1:  shl    $0x2,%eax
08762f34 +0x1f4:  mov    %edx,-0xf0(%ebp)
08762f3a +0x1fa:  sub    $0x4,%esp
08762f3d +0x1fd:  mov    %edx,(%esp)
08762f40 +0x200:  mov    %eax,0x8(%esp)
08762f44 +0x204:  movl   $0x0,0x4(%esp)
08762f4c +0x20c:  call   0807dcc0 <_init+0x5b8>
08762f51 +0x211:  mov    -0xf0(%ebp),%edx
08762f57 +0x217:  movb   $0x0,0x4(%esp)
08762f5c +0x21c:  mov    %edx,(%esp)
08762f5f +0x21f:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08762f64 +0x224:  mov    0x1c(%ebp),%edx
08762f67 +0x227:  lea    -0x48(%ebp),%eax
08762f6a +0x22a:  mov    %eax,-0xf4(%ebp)
08762f70 +0x230:  mov    %edi,0x8(%esp)
08762f74 +0x234:  mov    %esi,0x4(%esp)
08762f78 +0x238:  mov    %edx,0x14(%esp)
08762f7c +0x23c:  mov    -0xec(%ebp),%edx
08762f82 +0x242:  mov    %eax,(%esp)
08762f85 +0x245:  mov    %edx,0x10(%esp)
08762f89 +0x249:  mov    0x14(%ebp),%edx
08762f8c +0x24c:  mov    %edx,0xc(%esp)
08762f90 +0x250:  call   087a4840 <_ZNK8TaoCrypt12AbstractRing19CascadeExponentiateERKNS_7IntegerES3_S3_S3_>  ; TaoCrypt::AbstractRing::CascadeExponentiate(TaoCrypt::Integer const&, TaoCrypt::Integer const&, TaoCrypt::Integer const&, TaoCrypt::Integer const&) const
08762f95 +0x255:  mov    -0xf4(%ebp),%eax
08762f9b +0x25b:  sub    $0x4,%esp
08762f9e +0x25e:  mov    %eax,0x8(%esp)
08762fa2 +0x262:  mov    0x8(%ebp),%eax
08762fa5 +0x265:  mov    %esi,0x4(%esp)
08762fa9 +0x269:  mov    %eax,(%esp)
08762fac +0x26c:  call   0875f380 <_ZNK8TaoCrypt24MontgomeryRepresentation10ConvertOutERKNS_7IntegerE>  ; TaoCrypt::MontgomeryRepresentation::ConvertOut(TaoCrypt::Integer const&) const
08762fb1 +0x271:  mov    -0x48(%ebp),%eax
08762fb4 +0x274:  mov    -0x44(%ebp),%esi
08762fb7 +0x277:  shl    $0x2,%eax
08762fba +0x27a:  sub    $0x4,%esp
08762fbd +0x27d:  mov    %esi,(%esp)
08762fc0 +0x280:  mov    %eax,0x8(%esp)
08762fc4 +0x284:  movl   $0x0,0x4(%esp)
08762fcc +0x28c:  call   0807dcc0 <_init+0x5b8>
08762fd1 +0x291:  mov    %esi,(%esp)
08762fd4 +0x294:  movb   $0x0,0x4(%esp)
08762fd9 +0x299:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08762fde +0x29e:  mov    -0x28(%ebp),%eax
08762fe1 +0x2a1:  mov    -0x24(%ebp),%esi
08762fe4 +0x2a4:  movl   $0x0,0x4(%esp)
08762fec +0x2ac:  shl    $0x2,%eax
08762fef +0x2af:  mov    %esi,(%esp)
08762ff2 +0x2b2:  mov    %eax,0x8(%esp)
08762ff6 +0x2b6:  call   0807dcc0 <_init+0x5b8>
08762ffb +0x2bb:  mov    %esi,(%esp)
08762ffe +0x2be:  movb   $0x0,0x4(%esp)
08763003 +0x2c3:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08763008 +0x2c8:  mov    -0x38(%ebp),%eax
0876300b +0x2cb:  mov    -0x34(%ebp),%esi
0876300e +0x2ce:  movl   $0x0,0x4(%esp)
08763016 +0x2d6:  shl    $0x2,%eax
08763019 +0x2d9:  mov    %esi,(%esp)
0876301c +0x2dc:  mov    %eax,0x8(%esp)
08763020 +0x2e0:  call   0807dcc0 <_init+0x5b8>
08763025 +0x2e5:  mov    %esi,(%esp)
08763028 +0x2e8:  movb   $0x0,0x4(%esp)
0876302d +0x2ed:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08763032 +0x2f2:  mov    -0x52c(%ebx),%eax
08763038 +0x2f8:  mov    -0x90(%ebp),%esi
0876303e +0x2fe:  movl   $0x0,0x4(%esp)
08763046 +0x306:  add    $0x8,%eax
08763049 +0x309:  mov    %eax,-0xe0(%ebp)
0876304f +0x30f:  mov    -0x94(%ebp),%eax
08763055 +0x315:  mov    %esi,(%esp)
08763058 +0x318:  shl    $0x2,%eax
0876305b +0x31b:  mov    %eax,0x8(%esp)
0876305f +0x31f:  call   0807dcc0 <_init+0x5b8>
08763064 +0x324:  mov    %esi,(%esp)
08763067 +0x327:  movb   $0x0,0x4(%esp)
0876306c +0x32c:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08763071 +0x331:  mov    -0xa4(%ebp),%eax
08763077 +0x337:  mov    -0xa0(%ebp),%esi
0876307d +0x33d:  movl   $0x0,0x4(%esp)
08763085 +0x345:  shl    $0x2,%eax
08763088 +0x348:  mov    %esi,(%esp)
0876308b +0x34b:  mov    %eax,0x8(%esp)
0876308f +0x34f:  call   0807dcc0 <_init+0x5b8>
08763094 +0x354:  mov    %esi,(%esp)
08763097 +0x357:  movb   $0x0,0x4(%esp)
0876309c +0x35c:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
087630a1 +0x361:  mov    -0x2b0(%ebx),%eax
087630a7 +0x367:  mov    -0xb0(%ebp),%esi
087630ad +0x36d:  movl   $0x0,0x4(%esp)
087630b5 +0x375:  add    $0x8,%eax
087630b8 +0x378:  mov    %eax,-0xe0(%ebp)
087630be +0x37e:  mov    -0xb4(%ebp),%eax
087630c4 +0x384:  mov    %esi,(%esp)
087630c7 +0x387:  shl    $0x2,%eax
087630ca +0x38a:  mov    %eax,0x8(%esp)
087630ce +0x38e:  call   0807dcc0 <_init+0x5b8>
087630d3 +0x393:  mov    %esi,(%esp)
087630d6 +0x396:  movb   $0x0,0x4(%esp)
087630db +0x39b:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
087630e0 +0x3a0:  mov    -0xc4(%ebp),%eax
087630e6 +0x3a6:  mov    -0xc0(%ebp),%esi
087630ec +0x3ac:  movl   $0x0,0x4(%esp)
087630f4 +0x3b4:  shl    $0x2,%eax
087630f7 +0x3b7:  mov    %esi,(%esp)
087630fa +0x3ba:  mov    %eax,0x8(%esp)
087630fe +0x3be:  call   0807dcc0 <_init+0x5b8>
08763103 +0x3c3:  mov    %esi,(%esp)
08763106 +0x3c6:  movb   $0x0,0x4(%esp)
0876310b +0x3cb:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08763110 +0x3d0:  mov    -0xd4(%ebp),%eax
08763116 +0x3d6:  mov    -0xd0(%ebp),%esi
0876311c +0x3dc:  movl   $0x0,0x4(%esp)
08763124 +0x3e4:  shl    $0x2,%eax
08763127 +0x3e7:  mov    %esi,(%esp)
0876312a +0x3ea:  mov    %eax,0x8(%esp)
0876312e +0x3ee:  call   0807dcc0 <_init+0x5b8>
08763133 +0x3f3:  mov    %esi,(%esp)
08763136 +0x3f6:  movb   $0x0,0x4(%esp)
0876313b +0x3fb:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08763140 +0x400:  mov    0x8(%ebp),%eax
08763143 +0x403:  lea    -0xc(%ebp),%esp
08763146 +0x406:  pop    %ebx
08763147 +0x407:  pop    %esi
08763148 +0x408:  pop    %edi
08763149 +0x409:  pop    %ebp
0876314a +0x40a:  ret    $0x4
0876314d +0x40d:  nop
0876314e +0x40e:  xchg   %ax,%ax
```

## 反编译 C

```c
// TaoCrypt::ModularArithmetic::CascadeExponentiate @ 0x8762d40

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::ModularArithmetic::CascadeExponentiate(TaoCrypt::Integer const&, TaoCrypt::Integer
   const&, TaoCrypt::Integer const&, TaoCrypt::Integer const&) const */

Integer * TaoCrypt::ModularArithmetic::CascadeExponentiate
                    (Integer *param_1,Integer *param_2,Integer *param_3,Integer *param_4)

{
  char cVar1;
  uint uVar2;
  Integer *pIVar3;
  Integer *pIVar4;
  size_t __n;
  Integer *in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined *local_e4 [3];
  int local_d8;
  void *local_d4;
  int local_c8;
  void *local_c4;
  int local_b8;
  void *local_b4;
  int local_a8;
  void *local_a4;
  int local_98;
  void *local_94;
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
  undefined4 uStack_14;
  
  uStack_14 = 0x8762d4b;
  cVar1 = Integer::GetBit(param_2 + 0xc,0);
  if (cVar1 == '\0') {
    AbstractRing::CascadeExponentiate(param_1,param_2,param_3,param_4);
    return param_1;
  }
  MontgomeryRepresentation::MontgomeryRepresentation
            ((MontgomeryRepresentation *)local_e4,param_2 + 0xc);
  uVar2 = local_d8 << 5;
  Integer::Integer((Integer *)&local_6c,in_stack_00000014);
  pIVar3 = (Integer *)Integer::operator<<=((Integer *)&local_6c,uVar2);
  Integer::Integer((Integer *)&local_5c,pIVar3);
  uVar2 = 0;
  memset(local_68,0,local_6c << 2);
  operator_delete__(local_68,uVar2 & 0xffffff00);
  pIVar3 = (Integer *)&local_3c;
  Integer::Modulo(pIVar3);
  uVar2 = 0;
  memset(local_58,0,local_5c << 2);
  operator_delete__(local_58,uVar2 & 0xffffff00);
  uVar2 = local_d8 << 5;
  Integer::Integer((Integer *)&local_8c,param_3);
  pIVar4 = (Integer *)Integer::operator<<=((Integer *)&local_8c,uVar2);
  Integer::Integer((Integer *)&local_7c,pIVar4);
  uVar2 = 0;
  memset(local_88,0,local_8c << 2);
  operator_delete__(local_88,uVar2 & 0xffffff00);
  Integer::Modulo((Integer *)&local_2c);
  uVar2 = 0;
  memset(local_78,0,local_7c << 2);
  operator_delete__(local_78,uVar2 & 0xffffff00);
  AbstractRing::CascadeExponentiate
            ((Integer *)&local_4c,(Integer *)local_e4,(Integer *)&local_2c,param_4);
  MontgomeryRepresentation::ConvertOut(param_1);
  __n = local_4c << 2;
  uVar2 = 0;
  memset(local_48,0,__n);
  operator_delete__(local_48,uVar2 & 0xffffff00,__n,param_4,pIVar3,in_stack_00000018);
  uVar2 = 0;
  memset(local_28,0,local_2c << 2);
  operator_delete__(local_28,uVar2 & 0xffffff00);
  uVar2 = 0;
  memset(local_38,0,local_3c << 2);
  operator_delete__(local_38,uVar2 & 0xffffff00);
  uVar2 = 0;
  local_e4[0] = PTR_vtable_0936c66c + 8;
  memset(local_94,0,local_98 << 2);
  operator_delete__(local_94,uVar2 & 0xffffff00);
  uVar2 = 0;
  memset(local_a4,0,local_a8 << 2);
  operator_delete__(local_a4,uVar2 & 0xffffff00);
  uVar2 = 0;
  local_e4[0] = PTR_vtable_0936c8e8 + 8;
  memset(local_b4,0,local_b8 << 2);
  operator_delete__(local_b4,uVar2 & 0xffffff00);
  uVar2 = 0;
  memset(local_c4,0,local_c8 << 2);
  operator_delete__(local_c4,uVar2 & 0xffffff00);
  uVar2 = 0;
  memset(local_d4,0,local_d8 << 2);
  operator_delete__(local_d4,uVar2 & 0xffffff00);
  return param_1;
}
```
