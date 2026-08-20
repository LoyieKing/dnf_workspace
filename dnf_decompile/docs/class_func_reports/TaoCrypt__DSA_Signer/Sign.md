# Sign

`_ZN8TaoCrypt10DSA_Signer4SignEPKhPhRNS_21RandomNumberGeneratorE`

`TaoCrypt::DSA_Signer::Sign(unsigned char const*, unsigned char*, TaoCrypt::RandomNumberGenerator&)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::DSA_Signer` | `0x087579f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087579f0  _ZN8TaoCrypt10DSA_Signer4SignEPKhPhRNS_21RandomNumberGeneratorE
#           TaoCrypt::DSA_Signer::Sign(unsigned char const*, unsigned char*, TaoCrypt::RandomNumberGenerator&)
# range [0x087579f0, 0x08757f49]
087579f0 +0x000:  push   %ebp
087579f1 +0x001:  mov    %esp,%ebp
087579f3 +0x003:  push   %edi
087579f4 +0x004:  push   %esi
087579f5 +0x005:  push   %ebx
087579f6 +0x006:  sub    $0xfc,%esp
087579fc +0x00c:  mov    0x8(%ebp),%edi
087579ff +0x00f:  call   08722df8 <__i686.get_pc_thunk.bx>
08757a04 +0x014:  add    $0xc15194,%ebx
08757a0a +0x01a:  lea    -0x38(%ebp),%esi
08757a0d +0x01d:  mov    (%edi),%eax
08757a0f +0x01f:  mov    %eax,(%esp)
08757a12 +0x022:  call   087573d0 <_ZNK8TaoCrypt13DSA_PublicKey10GetModulusEv>  ; TaoCrypt::DSA_PublicKey::GetModulus() const
08757a17 +0x027:  mov    %eax,%edx
08757a19 +0x029:  mov    (%edi),%eax
08757a1b +0x02b:  mov    %edx,-0xe8(%ebp)
08757a21 +0x031:  mov    %eax,(%esp)
08757a24 +0x034:  call   087573e0 <_ZNK8TaoCrypt13DSA_PublicKey16GetSubGroupOrderEv>  ; TaoCrypt::DSA_PublicKey::GetSubGroupOrder() const
08757a29 +0x039:  mov    %eax,-0xdc(%ebp)
08757a2f +0x03f:  mov    (%edi),%eax
08757a31 +0x041:  mov    %eax,(%esp)
08757a34 +0x044:  call   087573f0 <_ZNK8TaoCrypt13DSA_PublicKey20GetSubGroupGeneratorEv>  ; TaoCrypt::DSA_PublicKey::GetSubGroupGenerator() const
08757a39 +0x049:  mov    %eax,-0xe0(%ebp)
08757a3f +0x04f:  mov    (%edi),%eax
08757a41 +0x051:  mov    %eax,(%esp)
08757a44 +0x054:  call   08757410 <_ZNK8TaoCrypt14DSA_PrivateKey14GetPrivatePartEv>  ; TaoCrypt::DSA_PrivateKey::GetPrivatePart() const
08757a49 +0x059:  mov    %esi,(%esp)
08757a4c +0x05c:  movl   $0x1,0x4(%esp)
08757a54 +0x064:  mov    %eax,-0xe4(%ebp)
08757a5a +0x06a:  call   0875f4d0 <_ZN8TaoCrypt7IntegerC1El>  ; TaoCrypt::Integer::Integer(long)
08757a5f +0x06f:  mov    -0xdc(%ebp),%ecx
08757a65 +0x075:  lea    -0x48(%ebp),%eax
08757a68 +0x078:  mov    %eax,(%esp)
08757a6b +0x07b:  mov    %eax,-0xf0(%ebp)
08757a71 +0x081:  mov    %esi,0x8(%esp)
08757a75 +0x085:  lea    -0x58(%ebp),%esi
08757a78 +0x088:  mov    %ecx,0x4(%esp)
08757a7c +0x08c:  call   087600e0 <_ZNK8TaoCrypt7Integer5MinusERKS0_>  ; TaoCrypt::Integer::Minus(TaoCrypt::Integer const&) const
08757a81 +0x091:  sub    $0x4,%esp
08757a84 +0x094:  mov    %esi,(%esp)
08757a87 +0x097:  movl   $0x1,0x4(%esp)
08757a8f +0x09f:  call   0875f4d0 <_ZN8TaoCrypt7IntegerC1El>  ; TaoCrypt::Integer::Integer(long)
08757a94 +0x0a4:  mov    -0xf0(%ebp),%eax
08757a9a +0x0aa:  lea    -0x28(%ebp),%ecx
08757a9d +0x0ad:  mov    %ecx,(%esp)
08757aa0 +0x0b0:  mov    %ecx,-0xec(%ebp)
08757aa6 +0x0b6:  mov    %esi,0x8(%esp)
08757aaa +0x0ba:  mov    %eax,0xc(%esp)
08757aae +0x0be:  mov    0x14(%ebp),%eax
08757ab1 +0x0c1:  mov    %eax,0x4(%esp)
08757ab5 +0x0c5:  call   087614f0 <_ZN8TaoCrypt7IntegerC1ERNS_21RandomNumberGeneratorERKS0_S4_>  ; TaoCrypt::Integer::Integer(TaoCrypt::RandomNumberGenerator&, TaoCrypt::Integer const&, TaoCrypt::Integer const&)
08757aba +0x0ca:  mov    -0x58(%ebp),%eax
08757abd +0x0cd:  mov    -0x54(%ebp),%esi
08757ac0 +0x0d0:  movl   $0x0,0x4(%esp)
08757ac8 +0x0d8:  shl    $0x2,%eax
08757acb +0x0db:  mov    %esi,(%esp)
08757ace +0x0de:  mov    %eax,0x8(%esp)
08757ad2 +0x0e2:  call   0807dcc0 <_init+0x5b8>
08757ad7 +0x0e7:  mov    %esi,(%esp)
08757ada +0x0ea:  movb   $0x0,0x4(%esp)
08757adf +0x0ef:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08757ae4 +0x0f4:  mov    -0x48(%ebp),%eax
08757ae7 +0x0f7:  mov    -0x44(%ebp),%esi
08757aea +0x0fa:  movl   $0x0,0x4(%esp)
08757af2 +0x102:  shl    $0x2,%eax
08757af5 +0x105:  mov    %esi,(%esp)
08757af8 +0x108:  mov    %eax,0x8(%esp)
08757afc +0x10c:  call   0807dcc0 <_init+0x5b8>
08757b01 +0x111:  mov    %esi,(%esp)
08757b04 +0x114:  movb   $0x0,0x4(%esp)
08757b09 +0x119:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08757b0e +0x11e:  mov    -0x38(%ebp),%eax
08757b11 +0x121:  mov    -0x34(%ebp),%esi
08757b14 +0x124:  movl   $0x0,0x4(%esp)
08757b1c +0x12c:  shl    $0x2,%eax
08757b1f +0x12f:  mov    %esi,(%esp)
08757b22 +0x132:  mov    %eax,0x8(%esp)
08757b26 +0x136:  call   0807dcc0 <_init+0x5b8>
08757b2b +0x13b:  mov    %esi,(%esp)
08757b2e +0x13e:  lea    0x4(%edi),%esi
08757b31 +0x141:  movb   $0x0,0x4(%esp)
08757b36 +0x146:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08757b3b +0x14b:  mov    -0xe8(%ebp),%edx
08757b41 +0x151:  lea    -0x68(%ebp),%eax
08757b44 +0x154:  mov    -0xec(%ebp),%ecx
08757b4a +0x15a:  mov    %eax,(%esp)
08757b4d +0x15d:  mov    %eax,-0xf0(%ebp)
08757b53 +0x163:  mov    %edx,0xc(%esp)
08757b57 +0x167:  mov    -0xe0(%ebp),%edx
08757b5d +0x16d:  mov    %ecx,0x8(%esp)
08757b61 +0x171:  mov    %edx,0x4(%esp)
08757b65 +0x175:  call   0875f630 <_ZN8TaoCrypt13a_exp_b_mod_cERKNS_7IntegerES2_S2_>  ; TaoCrypt::a_exp_b_mod_c(TaoCrypt::Integer const&, TaoCrypt::Integer const&, TaoCrypt::Integer const&)
08757b6a +0x17a:  mov    -0xf0(%ebp),%eax
08757b70 +0x180:  sub    $0x4,%esp
08757b73 +0x183:  mov    %eax,0x4(%esp)
08757b77 +0x187:  mov    %esi,(%esp)
08757b7a +0x18a:  call   08760460 <_ZN8TaoCrypt7IntegeraSERKS0_>  ; TaoCrypt::Integer::operator=(TaoCrypt::Integer const&)
08757b7f +0x18f:  mov    -0x68(%ebp),%eax
08757b82 +0x192:  mov    -0x64(%ebp),%edx
08757b85 +0x195:  movl   $0x0,0x4(%esp)
08757b8d +0x19d:  shl    $0x2,%eax
08757b90 +0x1a0:  mov    %edx,(%esp)
08757b93 +0x1a3:  mov    %eax,0x8(%esp)
08757b97 +0x1a7:  mov    %edx,-0xe8(%ebp)
08757b9d +0x1ad:  call   0807dcc0 <_init+0x5b8>
08757ba2 +0x1b2:  mov    -0xe8(%ebp),%edx
08757ba8 +0x1b8:  movb   $0x0,0x4(%esp)
08757bad +0x1bd:  mov    %edx,(%esp)
08757bb0 +0x1c0:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08757bb5 +0x1c5:  mov    -0xdc(%ebp),%edx
08757bbb +0x1cb:  lea    -0xd8(%ebp),%eax
08757bc1 +0x1d1:  mov    %eax,(%esp)
08757bc4 +0x1d4:  mov    %eax,-0xf0(%ebp)
08757bca +0x1da:  mov    %esi,0x4(%esp)
08757bce +0x1de:  mov    %edx,0x8(%esp)
08757bd2 +0x1e2:  call   08762620 <_ZNK8TaoCrypt7Integer6ModuloERKS0_>  ; TaoCrypt::Integer::Modulo(TaoCrypt::Integer const&) const
08757bd7 +0x1e7:  mov    -0xf0(%ebp),%eax
08757bdd +0x1ed:  sub    $0x4,%esp
08757be0 +0x1f0:  mov    %eax,0x4(%esp)
08757be4 +0x1f4:  mov    %esi,(%esp)
08757be7 +0x1f7:  call   08760460 <_ZN8TaoCrypt7IntegeraSERKS0_>  ; TaoCrypt::Integer::operator=(TaoCrypt::Integer const&)
08757bec +0x1fc:  mov    -0xd8(%ebp),%eax
08757bf2 +0x202:  mov    -0xd4(%ebp),%edx
08757bf8 +0x208:  movl   $0x0,0x4(%esp)
08757c00 +0x210:  shl    $0x2,%eax
08757c03 +0x213:  mov    %edx,(%esp)
08757c06 +0x216:  mov    %eax,0x8(%esp)
08757c0a +0x21a:  mov    %edx,-0xe8(%ebp)
08757c10 +0x220:  call   0807dcc0 <_init+0x5b8>
08757c15 +0x225:  mov    -0xe8(%ebp),%edx
08757c1b +0x22b:  movb   $0x0,0x4(%esp)
08757c20 +0x230:  mov    %edx,(%esp)
08757c23 +0x233:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08757c28 +0x238:  mov    0xc(%ebp),%eax
08757c2b +0x23b:  movl   $0x0,0xc(%esp)
08757c33 +0x243:  movl   $0x14,0x8(%esp)
08757c3b +0x24b:  mov    %eax,0x4(%esp)
08757c3f +0x24f:  lea    -0x78(%ebp),%eax
08757c42 +0x252:  mov    %eax,(%esp)
08757c45 +0x255:  mov    %eax,-0xf0(%ebp)
08757c4b +0x25b:  call   08761300 <_ZN8TaoCrypt7IntegerC1EPKhjNS0_10SignednessE>  ; TaoCrypt::Integer::Integer(unsigned char const*, unsigned int, TaoCrypt::Integer::Signedness)
08757c50 +0x260:  mov    -0xec(%ebp),%ecx
08757c56 +0x266:  lea    -0x88(%ebp),%edx
08757c5c +0x26c:  mov    %edx,-0xe0(%ebp)
08757c62 +0x272:  mov    -0xdc(%ebp),%edx
08757c68 +0x278:  mov    %ecx,0x4(%esp)
08757c6c +0x27c:  mov    -0xe0(%ebp),%ecx
08757c72 +0x282:  mov    %edx,0x8(%esp)
08757c76 +0x286:  mov    %ecx,(%esp)
08757c79 +0x289:  call   087631e0 <_ZNK8TaoCrypt7Integer10InverseModERKS0_>  ; TaoCrypt::Integer::InverseMod(TaoCrypt::Integer const&) const
08757c7e +0x28e:  mov    -0xe4(%ebp),%ecx
08757c84 +0x294:  lea    -0x98(%ebp),%edx
08757c8a +0x29a:  mov    %edx,-0xe8(%ebp)
08757c90 +0x2a0:  add    $0x14,%edi
08757c93 +0x2a3:  sub    $0x4,%esp
08757c96 +0x2a6:  mov    %ecx,0x4(%esp)
08757c9a +0x2aa:  mov    %edx,(%esp)
08757c9d +0x2ad:  mov    %esi,0x8(%esp)
08757ca1 +0x2b1:  call   08762160 <_ZNK8TaoCrypt7Integer5TimesERKS0_>  ; TaoCrypt::Integer::Times(TaoCrypt::Integer const&) const
08757ca6 +0x2b6:  mov    -0xe8(%ebp),%edx
08757cac +0x2bc:  lea    -0xa8(%ebp),%ecx
08757cb2 +0x2c2:  mov    -0xf0(%ebp),%eax
08757cb8 +0x2c8:  mov    %ecx,-0xec(%ebp)
08757cbe +0x2ce:  sub    $0x4,%esp
08757cc1 +0x2d1:  mov    %edx,0x8(%esp)
08757cc5 +0x2d5:  mov    %eax,0x4(%esp)
08757cc9 +0x2d9:  mov    %ecx,(%esp)
08757ccc +0x2dc:  call   087601b0 <_ZNK8TaoCrypt7Integer4PlusERKS0_>  ; TaoCrypt::Integer::Plus(TaoCrypt::Integer const&) const
08757cd1 +0x2e1:  mov    -0xec(%ebp),%ecx
08757cd7 +0x2e7:  lea    -0xb8(%ebp),%eax
08757cdd +0x2ed:  mov    -0xe0(%ebp),%edx
08757ce3 +0x2f3:  mov    %eax,-0xf0(%ebp)
08757ce9 +0x2f9:  sub    $0x4,%esp
08757cec +0x2fc:  mov    %ecx,0x8(%esp)
08757cf0 +0x300:  mov    %edx,0x4(%esp)
08757cf4 +0x304:  mov    %eax,(%esp)
08757cf7 +0x307:  call   08762160 <_ZNK8TaoCrypt7Integer5TimesERKS0_>  ; TaoCrypt::Integer::Times(TaoCrypt::Integer const&) const
08757cfc +0x30c:  mov    -0xdc(%ebp),%ecx
08757d02 +0x312:  lea    -0xc8(%ebp),%edx
08757d08 +0x318:  mov    -0xf0(%ebp),%eax
08757d0e +0x31e:  mov    %edx,-0xe8(%ebp)
08757d14 +0x324:  sub    $0x4,%esp
08757d17 +0x327:  mov    %ecx,0x8(%esp)
08757d1b +0x32b:  mov    %eax,0x4(%esp)
08757d1f +0x32f:  mov    %edx,(%esp)
08757d22 +0x332:  call   08762620 <_ZNK8TaoCrypt7Integer6ModuloERKS0_>  ; TaoCrypt::Integer::Modulo(TaoCrypt::Integer const&) const
08757d27 +0x337:  mov    -0xe8(%ebp),%edx
08757d2d +0x33d:  sub    $0x4,%esp
08757d30 +0x340:  mov    %edx,0x4(%esp)
08757d34 +0x344:  mov    %edi,(%esp)
08757d37 +0x347:  call   08760460 <_ZN8TaoCrypt7IntegeraSERKS0_>  ; TaoCrypt::Integer::operator=(TaoCrypt::Integer const&)
08757d3c +0x34c:  mov    -0xc8(%ebp),%eax
08757d42 +0x352:  mov    -0xc4(%ebp),%edx
08757d48 +0x358:  movl   $0x0,0x4(%esp)
08757d50 +0x360:  shl    $0x2,%eax
08757d53 +0x363:  mov    %edx,(%esp)
08757d56 +0x366:  mov    %edx,-0xe8(%ebp)
08757d5c +0x36c:  mov    %eax,0x8(%esp)
08757d60 +0x370:  call   0807dcc0 <_init+0x5b8>
08757d65 +0x375:  mov    -0xe8(%ebp),%edx
08757d6b +0x37b:  movb   $0x0,0x4(%esp)
08757d70 +0x380:  mov    %edx,(%esp)
08757d73 +0x383:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08757d78 +0x388:  mov    -0xb8(%ebp),%eax
08757d7e +0x38e:  mov    -0xb4(%ebp),%edx
08757d84 +0x394:  movl   $0x0,0x4(%esp)
08757d8c +0x39c:  shl    $0x2,%eax
08757d8f +0x39f:  mov    %edx,(%esp)
08757d92 +0x3a2:  mov    %edx,-0xe8(%ebp)
08757d98 +0x3a8:  mov    %eax,0x8(%esp)
08757d9c +0x3ac:  call   0807dcc0 <_init+0x5b8>
08757da1 +0x3b1:  mov    -0xe8(%ebp),%edx
08757da7 +0x3b7:  movb   $0x0,0x4(%esp)
08757dac +0x3bc:  mov    %edx,(%esp)
08757daf +0x3bf:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08757db4 +0x3c4:  mov    -0xa8(%ebp),%eax
08757dba +0x3ca:  mov    -0xa4(%ebp),%edx
08757dc0 +0x3d0:  movl   $0x0,0x4(%esp)
08757dc8 +0x3d8:  shl    $0x2,%eax
08757dcb +0x3db:  mov    %edx,(%esp)
08757dce +0x3de:  mov    %edx,-0xe8(%ebp)
08757dd4 +0x3e4:  mov    %eax,0x8(%esp)
08757dd8 +0x3e8:  call   0807dcc0 <_init+0x5b8>
08757ddd +0x3ed:  mov    -0xe8(%ebp),%edx
08757de3 +0x3f3:  movb   $0x0,0x4(%esp)
08757de8 +0x3f8:  mov    %edx,(%esp)
08757deb +0x3fb:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08757df0 +0x400:  mov    -0x98(%ebp),%eax
08757df6 +0x406:  mov    -0x94(%ebp),%edx
08757dfc +0x40c:  movl   $0x0,0x4(%esp)
08757e04 +0x414:  shl    $0x2,%eax
08757e07 +0x417:  mov    %edx,(%esp)
08757e0a +0x41a:  mov    %edx,-0xe8(%ebp)
08757e10 +0x420:  mov    %eax,0x8(%esp)
08757e14 +0x424:  call   0807dcc0 <_init+0x5b8>
08757e19 +0x429:  mov    -0xe8(%ebp),%edx
08757e1f +0x42f:  movb   $0x0,0x4(%esp)
08757e24 +0x434:  mov    %edx,(%esp)
08757e27 +0x437:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08757e2c +0x43c:  mov    %esi,(%esp)
08757e2f +0x43f:  call   0875ec30 <_ZNK8TaoCrypt7Integer9ByteCountEv>  ; TaoCrypt::Integer::ByteCount() const
08757e34 +0x444:  cmp    $0x13,%eax
08757e37 +0x447:  mov    %eax,%edx
08757e39 +0x449:  je     08757f30 <+0x540>
08757e3f +0x44f:  mov    0x10(%ebp),%ecx
08757e42 +0x452:  mov    %edx,0x8(%esp)
08757e46 +0x456:  mov    %edx,-0xe8(%ebp)
08757e4c +0x45c:  movl   $0x0,0xc(%esp)
08757e54 +0x464:  mov    %ecx,0x4(%esp)
08757e58 +0x468:  mov    %esi,(%esp)
08757e5b +0x46b:  call   08760f10 <_ZNK8TaoCrypt7Integer6EncodeEPhjNS0_10SignednessE>  ; TaoCrypt::Integer::Encode(unsigned char*, unsigned int, TaoCrypt::Integer::Signedness) const
08757e60 +0x470:  mov    %edi,(%esp)
08757e63 +0x473:  call   0875ec30 <_ZNK8TaoCrypt7Integer9ByteCountEv>  ; TaoCrypt::Integer::ByteCount() const
08757e68 +0x478:  mov    -0xe8(%ebp),%edx
08757e6e +0x47e:  cmp    $0x13,%eax
08757e71 +0x481:  jne    08757e80 <+0x490>
08757e73 +0x483:  mov    0x10(%ebp),%ecx
08757e76 +0x486:  movb   $0x0,(%ecx,%edx,1)
08757e7a +0x48a:  add    $0x1,%ecx
08757e7d +0x48d:  mov    %ecx,0x10(%ebp)
08757e80 +0x490:  add    0x10(%ebp),%edx
08757e83 +0x493:  mov    %edi,(%esp)
08757e86 +0x496:  movl   $0x0,0xc(%esp)
08757e8e +0x49e:  mov    %edx,0x4(%esp)
08757e92 +0x4a2:  mov    %eax,0x8(%esp)
08757e96 +0x4a6:  call   08760f10 <_ZNK8TaoCrypt7Integer6EncodeEPhjNS0_10SignednessE>  ; TaoCrypt::Integer::Encode(unsigned char*, unsigned int, TaoCrypt::Integer::Signedness) const
08757e9b +0x4ab:  mov    -0x88(%ebp),%eax
08757ea1 +0x4b1:  mov    -0x84(%ebp),%esi
08757ea7 +0x4b7:  movl   $0x0,0x4(%esp)
08757eaf +0x4bf:  shl    $0x2,%eax
08757eb2 +0x4c2:  mov    %esi,(%esp)
08757eb5 +0x4c5:  mov    %eax,0x8(%esp)
08757eb9 +0x4c9:  call   0807dcc0 <_init+0x5b8>
08757ebe +0x4ce:  mov    %esi,(%esp)
08757ec1 +0x4d1:  movb   $0x0,0x4(%esp)
08757ec6 +0x4d6:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08757ecb +0x4db:  mov    -0x78(%ebp),%eax
08757ece +0x4de:  mov    -0x74(%ebp),%esi
08757ed1 +0x4e1:  movl   $0x0,0x4(%esp)
08757ed9 +0x4e9:  shl    $0x2,%eax
08757edc +0x4ec:  mov    %esi,(%esp)
08757edf +0x4ef:  mov    %eax,0x8(%esp)
08757ee3 +0x4f3:  call   0807dcc0 <_init+0x5b8>
08757ee8 +0x4f8:  mov    %esi,(%esp)
08757eeb +0x4fb:  movb   $0x0,0x4(%esp)
08757ef0 +0x500:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08757ef5 +0x505:  mov    -0x28(%ebp),%eax
08757ef8 +0x508:  mov    -0x24(%ebp),%esi
08757efb +0x50b:  movl   $0x0,0x4(%esp)
08757f03 +0x513:  shl    $0x2,%eax
08757f06 +0x516:  mov    %esi,(%esp)
08757f09 +0x519:  mov    %eax,0x8(%esp)
08757f0d +0x51d:  call   0807dcc0 <_init+0x5b8>
08757f12 +0x522:  mov    %esi,(%esp)
08757f15 +0x525:  movb   $0x0,0x4(%esp)
08757f1a +0x52a:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08757f1f +0x52f:  lea    -0xc(%ebp),%esp
08757f22 +0x532:  mov    $0x28,%eax
08757f27 +0x537:  pop    %ebx
08757f28 +0x538:  pop    %esi
08757f29 +0x539:  pop    %edi
08757f2a +0x53a:  pop    %ebp
08757f2b +0x53b:  ret
08757f2c +0x53c:  lea    0x0(%esi,%eiz,1),%esi
08757f30 +0x540:  mov    0x10(%ebp),%eax
08757f33 +0x543:  movb   $0x0,(%eax)
08757f36 +0x546:  add    $0x1,%eax
08757f39 +0x549:  mov    %eax,0x10(%ebp)
08757f3c +0x54c:  jmp    08757e3f <+0x44f>
08757f41 +0x551:  nop
08757f42 +0x552:  lea    0x0(%esi,%eiz,1),%esi
08757f49 +0x559:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TaoCrypt::DSA_Signer::Sign @ 0x87579f0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::DSA_Signer::Sign(unsigned char const*, unsigned char*,
   TaoCrypt::RandomNumberGenerator&) */

undefined4 __thiscall
TaoCrypt::DSA_Signer::Sign
          (DSA_Signer *this,uchar *param_1,uchar *param_2,RandomNumberGenerator *param_3)

{
  Integer *this_00;
  Integer *pIVar1;
  Integer *pIVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
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
  DSA_PublicKey::GetSubGroupOrder(*(DSA_PublicKey **)this);
  pIVar2 = (Integer *)DSA_PublicKey::GetSubGroupGenerator(*(DSA_PublicKey **)this);
  DSA_PrivateKey::GetPrivatePart(*(DSA_PrivateKey **)this);
  Integer::Integer((Integer *)&local_3c,1);
  Integer::Minus((Integer *)&local_4c);
  Integer::Integer((Integer *)&local_5c,1);
  Integer::Integer((Integer *)&local_2c,param_3,(Integer *)&local_5c,(Integer *)&local_4c);
  uVar5 = 0;
  memset(local_58,0,local_5c << 2);
  operator_delete__(local_58,uVar5 & 0xffffff00);
  uVar5 = 0;
  memset(local_48,0,local_4c << 2);
  operator_delete__(local_48,uVar5 & 0xffffff00);
  uVar5 = 0;
  memset(local_38,0,local_3c << 2);
  this_00 = (Integer *)(this + 4);
  operator_delete__(local_38,uVar5 & 0xffffff00);
  a_exp_b_mod_c((TaoCrypt *)&local_6c,pIVar2,(Integer *)&local_2c,pIVar1);
  Integer::operator=(this_00,(Integer *)&local_6c);
  uVar5 = 0;
  memset(local_68,0,local_6c << 2);
  operator_delete__(local_68,uVar5 & 0xffffff00);
  Integer::Modulo((Integer *)&local_dc);
  Integer::operator=(this_00,(Integer *)&local_dc);
  uVar5 = 0;
  memset(local_d8,0,local_dc << 2);
  operator_delete__(local_d8,uVar5 & 0xffffff00);
  Integer::Integer((Integer *)&local_7c,param_1,0x14,0);
  Integer::InverseMod((Integer *)&local_8c);
  pIVar1 = (Integer *)(this + 0x14);
  Integer::Times((Integer *)&local_9c);
  Integer::Plus((Integer *)&local_ac);
  Integer::Times((Integer *)&local_bc);
  Integer::Modulo((Integer *)&local_cc);
  Integer::operator=(pIVar1,(Integer *)&local_cc);
  uVar5 = 0;
  memset(local_c8,0,local_cc << 2);
  operator_delete__(local_c8,uVar5 & 0xffffff00);
  uVar5 = 0;
  memset(local_b8,0,local_bc << 2);
  operator_delete__(local_b8,uVar5 & 0xffffff00);
  uVar5 = 0;
  memset(local_a8,0,local_ac << 2);
  operator_delete__(local_a8,uVar5 & 0xffffff00);
  uVar5 = 0;
  memset(local_98,0,local_9c << 2);
  operator_delete__(local_98,uVar5 & 0xffffff00);
  iVar3 = Integer::ByteCount(this_00);
  if (iVar3 == 0x13) {
    *param_2 = '\0';
    param_2 = param_2 + 1;
  }
  Integer::Encode(this_00,param_2,iVar3,0);
  iVar4 = Integer::ByteCount(pIVar1);
  if (iVar4 == 0x13) {
    param_2[iVar3] = '\0';
    param_2 = param_2 + 1;
  }
  Integer::Encode(pIVar1,param_2 + iVar3,iVar4,0);
  uVar5 = 0;
  memset(local_88,0,local_8c << 2);
  operator_delete__(local_88,uVar5 & 0xffffff00);
  uVar5 = 0;
  memset(local_78,0,local_7c << 2);
  operator_delete__(local_78,uVar5 & 0xffffff00);
  uVar5 = 0;
  memset(local_28,0,local_2c << 2);
  operator_delete__(local_28,uVar5 & 0xffffff00);
  return 0x28;
}
```
