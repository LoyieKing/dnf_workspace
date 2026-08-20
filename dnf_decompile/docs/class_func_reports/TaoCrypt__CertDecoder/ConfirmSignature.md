# ConfirmSignature

`_ZN8TaoCrypt11CertDecoder16ConfirmSignatureERNS_6SourceE`

`TaoCrypt::CertDecoder::ConfirmSignature(TaoCrypt::Source&)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::CertDecoder` | `0x08755f50` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08755f50  _ZN8TaoCrypt11CertDecoder16ConfirmSignatureERNS_6SourceE
#           TaoCrypt::CertDecoder::ConfirmSignature(TaoCrypt::Source&)
# range [0x08755f50, 0x087563ea]
08755f50 +0x000:  push   %ebp
08755f51 +0x001:  mov    %esp,%ebp
08755f53 +0x003:  push   %edi
08755f54 +0x004:  push   %esi
08755f55 +0x005:  push   %ebx
08755f56 +0x006:  sub    $0x11c,%esp
08755f5c +0x00c:  mov    0x8(%ebp),%esi
08755f5f +0x00f:  call   08722df8 <__i686.get_pc_thunk.bx>
08755f64 +0x014:  add    $0xc16c34,%ebx
08755f6a +0x01a:  movl   $0x0,-0x1c(%ebp)
08755f71 +0x021:  mov    0x1c(%esi),%eax
08755f74 +0x024:  cmp    $0x288,%eax
08755f79 +0x029:  je     08756230 <+0x2e0>
08755f7f +0x02f:  cmp    $0x286,%eax
08755f84 +0x034:  je     08756398 <+0x448>
08755f8a +0x03a:  cmp    $0x205,%eax
08755f8f +0x03f:  je     08755fc0 <+0x70>
08755f91 +0x041:  cmp    $0x289,%eax
08755f96 +0x046:  je     08755fc0 <+0x70>
08755f98 +0x048:  mov    0x4(%esi),%eax
08755f9b +0x04b:  xor    %edi,%edi
08755f9d +0x04d:  xor    %esi,%esi
08755f9f +0x04f:  movl   $0x409,0x10(%eax)
08755fa6 +0x056:  mov    %edi,(%esp)
08755fa9 +0x059:  movb   $0x0,0x4(%esp)
08755fae +0x05e:  call   087676f0 <_ZdlPvN8TaoCrypt5new_tE>  ; operator delete(void*, TaoCrypt::new_t)
08755fb3 +0x063:  add    $0x11c,%esp
08755fb9 +0x069:  mov    %esi,%eax
08755fbb +0x06b:  pop    %ebx
08755fbc +0x06c:  pop    %esi
08755fbd +0x06d:  pop    %edi
08755fbe +0x06e:  pop    %ebp
08755fbf +0x06f:  ret
08755fc0 +0x070:  movb   $0x0,0x4(%esp)
08755fc5 +0x075:  movl   $0x70,(%esp)
08755fcc +0x07c:  call   08767750 <_ZnwjN8TaoCrypt5new_tE>  ; operator new(unsigned int, TaoCrypt::new_t)
08755fd1 +0x081:  movl   $0x40,0x8(%esp)
08755fd9 +0x089:  movl   $0x5,0x4(%esp)
08755fe1 +0x091:  mov    %eax,-0xfc(%ebp)
08755fe7 +0x097:  mov    %eax,(%esp)
08755fea +0x09a:  call   08758bd0 <_ZN8TaoCrypt17HASHwithTransformC1Ejj>  ; TaoCrypt::HASHwithTransform::HASHwithTransform(unsigned int, unsigned int)
08755fef +0x09f:  mov    -0xc(%ebx),%eax
08755ff5 +0x0a5:  mov    -0xfc(%ebp),%edx
08755ffb +0x0ab:  add    $0x8,%eax
08755ffe +0x0ae:  mov    %eax,(%edx)
08756000 +0x0b0:  mov    %edx,(%esp)
08756003 +0x0b3:  call   087683b0 <_ZN8TaoCrypt3SHA4InitEv>  ; TaoCrypt::SHA::Init()
08756008 +0x0b8:  mov    -0xfc(%ebp),%edi
0875600e +0x0be:  mov    -0x1c(%ebp),%eax
08756011 +0x0c1:  movl   $0x58,-0x100(%ebp)
0875601b +0x0cb:  cmp    %eax,%edi
0875601d +0x0cd:  je     08756056 <+0x106>
0875601f +0x0cf:  test   %eax,%eax
08756021 +0x0d1:  je     08756036 <+0xe6>
08756023 +0x0d3:  mov    (%eax),%edx
08756025 +0x0d5:  mov    %eax,-0x104(%ebp)
0875602b +0x0db:  mov    %eax,(%esp)
0875602e +0x0de:  call   *(%edx)
08756030 +0x0e0:  mov    -0x104(%ebp),%eax
08756036 +0x0e6:  mov    %eax,(%esp)
08756039 +0x0e9:  movb   $0x0,0x4(%esp)
0875603e +0x0ee:  call   087676f0 <_ZdlPvN8TaoCrypt5new_tE>  ; operator delete(void*, TaoCrypt::new_t)
08756043 +0x0f3:  mov    -0xfc(%ebp),%eax
08756049 +0x0f9:  movl   $0x58,-0x100(%ebp)
08756053 +0x103:  mov    %eax,-0x1c(%ebp)
08756056 +0x106:  mov    0x10(%esi),%edx
08756059 +0x109:  mov    0x14(%esi),%eax
0875605c +0x10c:  mov    (%edi),%ecx
0875605e +0x10e:  sub    %edx,%eax
08756060 +0x110:  mov    %eax,0x8(%esp)
08756064 +0x114:  mov    0x4(%esi),%eax
08756067 +0x117:  add    0x4(%eax),%edx
0875606a +0x11a:  mov    %edi,(%esp)
0875606d +0x11d:  lea    -0x38(%ebp),%edi
08756070 +0x120:  mov    %edx,0x4(%esp)
08756074 +0x124:  call   *0x8(%ecx)
08756077 +0x127:  mov    -0x1c(%ebp),%eax
0875607a +0x12a:  mov    (%eax),%edx
0875607c +0x12c:  mov    %edi,0x4(%esp)
08756080 +0x130:  mov    %eax,(%esp)
08756083 +0x133:  call   *0xc(%edx)
08756086 +0x136:  cmpl   $0x285,0x20(%esi)
0875608d +0x13d:  je     08756298 <+0x348>
08756093 +0x143:  mov    0x18(%esi),%eax
08756096 +0x146:  mov    %eax,0x8(%esp)
0875609a +0x14a:  mov    0x4c(%esi),%eax
0875609d +0x14d:  lea    -0xac(%ebp),%esi
087560a3 +0x153:  mov    %esi,(%esp)
087560a6 +0x156:  mov    %eax,0x4(%esp)
087560aa +0x15a:  call   08755120 <_ZN8TaoCrypt19DecodeDSA_SignatureEPhPKhj>  ; TaoCrypt::DecodeDSA_Signature(unsigned char*, unsigned char const*, unsigned int)
087560af +0x15f:  mov    0xc(%ebp),%edx
087560b2 +0x162:  lea    -0xec(%ebp),%eax
087560b8 +0x168:  mov    %eax,(%esp)
087560bb +0x16b:  mov    %eax,-0x104(%ebp)
087560c1 +0x171:  mov    %edx,0x4(%esp)
087560c5 +0x175:  call   08757830 <_ZN8TaoCrypt13DSA_PublicKeyC1ERNS_6SourceE>  ; TaoCrypt::DSA_PublicKey::DSA_PublicKey(TaoCrypt::Source&)
087560ca +0x17a:  mov    -0x104(%ebp),%eax
087560d0 +0x180:  mov    %eax,0x4(%esp)
087560d4 +0x184:  lea    -0x84(%ebp),%eax
087560da +0x18a:  mov    %eax,(%esp)
087560dd +0x18d:  mov    %eax,-0x104(%ebp)
087560e3 +0x193:  call   08757500 <_ZN8TaoCrypt12DSA_VerifierC1ERKNS_13DSA_PublicKeyE>  ; TaoCrypt::DSA_Verifier::DSA_Verifier(TaoCrypt::DSA_PublicKey const&)
087560e8 +0x198:  mov    -0x104(%ebp),%eax
087560ee +0x19e:  mov    %esi,0x8(%esp)
087560f2 +0x1a2:  mov    %edi,0x4(%esp)
087560f6 +0x1a6:  mov    %eax,(%esp)
087560f9 +0x1a9:  call   08757f50 <_ZN8TaoCrypt12DSA_Verifier6VerifyEPKhS2_>  ; TaoCrypt::DSA_Verifier::Verify(unsigned char const*, unsigned char const*)
087560fe +0x1ae:  mov    -0x6c(%ebp),%edi
08756101 +0x1b1:  movl   $0x0,0x4(%esp)
08756109 +0x1b9:  mov    %edi,(%esp)
0875610c +0x1bc:  mov    %eax,%esi
0875610e +0x1be:  mov    -0x70(%ebp),%eax
08756111 +0x1c1:  shl    $0x2,%eax
08756114 +0x1c4:  mov    %eax,0x8(%esp)
08756118 +0x1c8:  call   0807dcc0 <_init+0x5b8>
0875611d +0x1cd:  mov    %edi,(%esp)
08756120 +0x1d0:  movb   $0x0,0x4(%esp)
08756125 +0x1d5:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
0875612a +0x1da:  mov    -0x80(%ebp),%eax
0875612d +0x1dd:  mov    -0x7c(%ebp),%edi
08756130 +0x1e0:  movl   $0x0,0x4(%esp)
08756138 +0x1e8:  shl    $0x2,%eax
0875613b +0x1eb:  mov    %edi,(%esp)
0875613e +0x1ee:  mov    %eax,0x8(%esp)
08756142 +0x1f2:  call   0807dcc0 <_init+0x5b8>
08756147 +0x1f7:  mov    %edi,(%esp)
0875614a +0x1fa:  movb   $0x0,0x4(%esp)
0875614f +0x1ff:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08756154 +0x204:  mov    -0xbc(%ebp),%eax
0875615a +0x20a:  mov    -0xb8(%ebp),%edi
08756160 +0x210:  movl   $0x0,0x4(%esp)
08756168 +0x218:  shl    $0x2,%eax
0875616b +0x21b:  mov    %edi,(%esp)
0875616e +0x21e:  mov    %eax,0x8(%esp)
08756172 +0x222:  call   0807dcc0 <_init+0x5b8>
08756177 +0x227:  mov    %edi,(%esp)
0875617a +0x22a:  movb   $0x0,0x4(%esp)
0875617f +0x22f:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08756184 +0x234:  mov    -0xcc(%ebp),%eax
0875618a +0x23a:  mov    -0xc8(%ebp),%edi
08756190 +0x240:  movl   $0x0,0x4(%esp)
08756198 +0x248:  shl    $0x2,%eax
0875619b +0x24b:  mov    %edi,(%esp)
0875619e +0x24e:  mov    %eax,0x8(%esp)
087561a2 +0x252:  call   0807dcc0 <_init+0x5b8>
087561a7 +0x257:  mov    %edi,(%esp)
087561aa +0x25a:  movb   $0x0,0x4(%esp)
087561af +0x25f:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
087561b4 +0x264:  mov    -0xdc(%ebp),%eax
087561ba +0x26a:  mov    -0xd8(%ebp),%edi
087561c0 +0x270:  movl   $0x0,0x4(%esp)
087561c8 +0x278:  shl    $0x2,%eax
087561cb +0x27b:  mov    %edi,(%esp)
087561ce +0x27e:  mov    %eax,0x8(%esp)
087561d2 +0x282:  call   0807dcc0 <_init+0x5b8>
087561d7 +0x287:  mov    %edi,(%esp)
087561da +0x28a:  movb   $0x0,0x4(%esp)
087561df +0x28f:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
087561e4 +0x294:  mov    -0xec(%ebp),%eax
087561ea +0x29a:  mov    -0xe8(%ebp),%edi
087561f0 +0x2a0:  shl    $0x2,%eax
087561f3 +0x2a3:  mov    %edi,(%esp)
087561f6 +0x2a6:  mov    %eax,0x8(%esp)
087561fa +0x2aa:  movl   $0x0,0x4(%esp)
08756202 +0x2b2:  call   0807dcc0 <_init+0x5b8>
08756207 +0x2b7:  mov    %edi,(%esp)
0875620a +0x2ba:  movb   $0x0,0x4(%esp)
0875620f +0x2bf:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08756214 +0x2c4:  mov    -0x1c(%ebp),%edi
08756217 +0x2c7:  test   %edi,%edi
08756219 +0x2c9:  je     08755fa6 <+0x56>
0875621f +0x2cf:  mov    (%edi),%eax
08756221 +0x2d1:  mov    %edi,(%esp)
08756224 +0x2d4:  call   *(%eax)
08756226 +0x2d6:  jmp    08755fa6 <+0x56>
0875622b +0x2db:  nop
0875622c +0x2dc:  lea    0x0(%esi,%eiz,1),%esi
08756230 +0x2e0:  movb   $0x0,0x4(%esp)
08756235 +0x2e5:  movl   $0x70,(%esp)
0875623c +0x2ec:  call   08767750 <_ZnwjN8TaoCrypt5new_tE>  ; operator new(unsigned int, TaoCrypt::new_t)
08756241 +0x2f1:  movl   $0x40,0x8(%esp)
08756249 +0x2f9:  movl   $0x4,0x4(%esp)
08756251 +0x301:  mov    %eax,%edi
08756253 +0x303:  mov    %eax,(%esp)
08756256 +0x306:  call   08758bd0 <_ZN8TaoCrypt17HASHwithTransformC1Ejj>  ; TaoCrypt::HASHwithTransform::HASHwithTransform(unsigned int, unsigned int)
0875625b +0x30b:  mov    -0x340(%ebx),%eax
08756261 +0x311:  add    $0x8,%eax
08756264 +0x314:  mov    %eax,(%edi)
08756266 +0x316:  mov    %edi,(%esp)
08756269 +0x319:  call   087661d0 <_ZN8TaoCrypt3MD54InitEv>  ; TaoCrypt::MD5::Init()
0875626e +0x31e:  cmp    -0x1c(%ebp),%edi
08756271 +0x321:  movl   $0x289,-0x100(%ebp)
0875627b +0x32b:  je     08756056 <+0x106>
08756281 +0x331:  lea    -0x1c(%ebp),%eax
08756284 +0x334:  mov    %eax,(%esp)
08756287 +0x337:  call   08756ad0 <_ZN8TaoCrypt11CertDecoder21ValidateSelfSignatureEv+0x330>  ; TaoCrypt::CertDecoder::ValidateSelfSignature()+0x330
0875628c +0x33c:  mov    %edi,-0x1c(%ebp)
0875628f +0x33f:  jmp    08756056 <+0x106>
08756294 +0x344:  lea    0x0(%esi,%eiz,1),%esi
08756298 +0x348:  mov    -0x1c(%ebp),%eax
0875629b +0x34b:  movl   $0x0,-0x48(%ebp)
087562a2 +0x352:  movl   $0x0,-0x4c(%ebp)
087562a9 +0x359:  movl   $0x0,-0x40(%ebp)
087562b0 +0x360:  mov    (%eax),%edx
087562b2 +0x362:  movl   $0x0,-0x3c(%ebp)
087562b9 +0x369:  mov    %eax,(%esp)
087562bc +0x36c:  call   *0x18(%edx)
087562bf +0x36f:  lea    -0x4c(%ebp),%edx
087562c2 +0x372:  mov    %edx,0x10(%esp)
087562c6 +0x376:  mov    -0x100(%ebp),%edx
087562cc +0x37c:  mov    %edi,0x4(%esp)
087562d0 +0x380:  lea    -0xac(%ebp),%edi
087562d6 +0x386:  mov    %edx,0xc(%esp)
087562da +0x38a:  mov    %eax,0x8(%esp)
087562de +0x38e:  lea    -0x60(%ebp),%eax
087562e1 +0x391:  mov    %eax,(%esp)
087562e4 +0x394:  call   087552e0 <_ZN8TaoCrypt17Signature_EncoderC1EPKhjNS_8HashTypeERNS_6SourceE>  ; TaoCrypt::Signature_Encoder::Signature_Encoder(unsigned char const*, unsigned int, TaoCrypt::HashType, TaoCrypt::Source&)
087562e9 +0x399:  mov    -0x2b8(%ebx),%eax
087562ef +0x39f:  mov    %edi,(%esp)
087562f2 +0x3a2:  add    $0x8,%eax
087562f5 +0x3a5:  mov    %eax,-0x60(%ebp)
087562f8 +0x3a8:  mov    0xc(%ebp),%eax
087562fb +0x3ab:  mov    %eax,0x4(%esp)
087562ff +0x3af:  call   08767db0 <_ZN8TaoCrypt13RSA_PublicKeyC1ERNS_6SourceE>  ; TaoCrypt::RSA_PublicKey::RSA_PublicKey(TaoCrypt::Source&)
08756304 +0x3b4:  mov    0x4c(%esi),%eax
08756307 +0x3b7:  mov    %edi,-0x24(%ebp)
0875630a +0x3ba:  mov    %eax,0xc(%esp)
0875630e +0x3be:  mov    -0x4c(%ebp),%eax
08756311 +0x3c1:  mov    %eax,0x8(%esp)
08756315 +0x3c5:  mov    -0x48(%ebp),%eax
08756318 +0x3c8:  mov    %eax,0x4(%esp)
0875631c +0x3cc:  lea    -0x24(%ebp),%eax
0875631f +0x3cf:  mov    %eax,(%esp)
08756322 +0x3d2:  call   08756b10 <_ZN8TaoCrypt11CertDecoder21ValidateSelfSignatureEv+0x370>  ; TaoCrypt::CertDecoder::ValidateSelfSignature()+0x370
08756327 +0x3d7:  mov    -0x98(%ebp),%edi
0875632d +0x3dd:  movl   $0x0,0x4(%esp)
08756335 +0x3e5:  mov    %edi,(%esp)
08756338 +0x3e8:  mov    %eax,%esi
0875633a +0x3ea:  mov    -0x9c(%ebp),%eax
08756340 +0x3f0:  shl    $0x2,%eax
08756343 +0x3f3:  mov    %eax,0x8(%esp)
08756347 +0x3f7:  call   0807dcc0 <_init+0x5b8>
0875634c +0x3fc:  mov    %edi,(%esp)
0875634f +0x3ff:  movb   $0x0,0x4(%esp)
08756354 +0x404:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08756359 +0x409:  mov    -0xac(%ebp),%eax
0875635f +0x40f:  mov    -0xa8(%ebp),%edi
08756365 +0x415:  movl   $0x0,0x4(%esp)
0875636d +0x41d:  shl    $0x2,%eax
08756370 +0x420:  mov    %edi,(%esp)
08756373 +0x423:  mov    %eax,0x8(%esp)
08756377 +0x427:  call   0807dcc0 <_init+0x5b8>
0875637c +0x42c:  mov    %edi,(%esp)
0875637f +0x42f:  movb   $0x0,0x4(%esp)
08756384 +0x434:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08756389 +0x439:  mov    -0x48(%ebp),%edi
0875638c +0x43c:  mov    -0x4c(%ebp),%eax
0875638f +0x43f:  jmp    087561f3 <+0x2a3>
08756394 +0x444:  lea    0x0(%esi,%eiz,1),%esi
08756398 +0x448:  movb   $0x0,0x4(%esp)
0875639d +0x44d:  movl   $0x2c,(%esp)
087563a4 +0x454:  call   08767750 <_ZnwjN8TaoCrypt5new_tE>  ; operator new(unsigned int, TaoCrypt::new_t)
087563a9 +0x459:  mov    %eax,%edi
087563ab +0x45b:  mov    %eax,(%esp)
087563ae +0x45e:  call   08765710 <_ZN8TaoCrypt3MD2C1Ev>  ; TaoCrypt::MD2::MD2()
087563b3 +0x463:  cmp    -0x1c(%ebp),%edi
087563b6 +0x466:  movl   $0x286,-0x100(%ebp)
087563c0 +0x470:  je     08756056 <+0x106>
087563c6 +0x476:  lea    -0x1c(%ebp),%eax
087563c9 +0x479:  mov    %eax,(%esp)
087563cc +0x47c:  call   08756ad0 <_ZN8TaoCrypt11CertDecoder21ValidateSelfSignatureEv+0x330>  ; TaoCrypt::CertDecoder::ValidateSelfSignature()+0x330
087563d1 +0x481:  mov    %edi,-0x1c(%ebp)
087563d4 +0x484:  movl   $0x286,-0x100(%ebp)
087563de +0x48e:  jmp    08756056 <+0x106>
087563e3 +0x493:  nop
087563e4 +0x494:  lea    0x0(%esi),%esi
087563ea +0x49a:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// TaoCrypt::CertDecoder::ConfirmSignature @ 0x8755f50

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::CertDecoder::ConfirmSignature(TaoCrypt::Source&) */

undefined4 __thiscall TaoCrypt::CertDecoder::ConfirmSignature(CertDecoder *this,Source *param_1)

{
  int iVar1;
  HASHwithTransform *pHVar2;
  size_t __n;
  undefined4 uVar3;
  HASHwithTransform *pHVar4;
  uchar *__s;
  uint in_stack_fffffed8;
  uint3 uVar6;
  uint uVar5;
  undefined4 local_104;
  int local_f0;
  uchar *local_ec;
  int local_e0;
  void *local_dc;
  int local_d0;
  void *local_cc;
  int local_c0;
  void *local_bc;
  int local_b0;
  void *local_ac;
  int local_a0;
  void *local_9c;
  DSA_Verifier local_88 [4];
  int local_84;
  void *local_80;
  int local_74;
  void *local_70;
  undefined *local_64 [5];
  uint local_50;
  uchar *local_4c;
  undefined4 local_44;
  undefined4 local_40;
  uchar local_3c [20];
  RSA_PublicKey *local_28 [2];
  HASHwithTransform *local_20 [4];
  
  local_20[0] = (HASHwithTransform *)0x0;
  iVar1 = *(int *)(this + 0x1c);
  uVar6 = (uint3)(in_stack_fffffed8 >> 8);
  if (iVar1 == 0x288) {
    pHVar4 = operator_new(0x70,(uint)uVar6 << 8);
    HASHwithTransform::HASHwithTransform(pHVar4,4,0x40);
    *(undefined **)pHVar4 = PTR_vtable_0936c858 + 8;
    MD5::Init((MD5 *)pHVar4);
    local_104 = 0x289;
    if (pHVar4 != local_20[0]) {
      mySTL::auto_ptr<TaoCrypt::HASH>::Destroy((auto_ptr<TaoCrypt::HASH> *)local_20);
      local_20[0] = pHVar4;
    }
  }
  else if (iVar1 == 0x286) {
    pHVar4 = operator_new(0x2c,(uint)uVar6 << 8);
    MD2::MD2((MD2 *)pHVar4);
    local_104 = 0x286;
    if (pHVar4 != local_20[0]) {
      mySTL::auto_ptr<TaoCrypt::HASH>::Destroy((auto_ptr<TaoCrypt::HASH> *)local_20);
      local_104 = 0x286;
      local_20[0] = pHVar4;
    }
  }
  else {
    if ((iVar1 != 0x205) && (iVar1 != 0x289)) {
      pHVar4 = (HASHwithTransform *)0x0;
      uVar3 = 0;
      *(undefined4 *)(*(int *)(this + 4) + 0x10) = 0x409;
      goto LAB_08755fa6;
    }
    pHVar4 = operator_new(0x70,in_stack_fffffed8 & 0xffffff00);
    uVar5 = 0;
    HASHwithTransform::HASHwithTransform(pHVar4,5,0x40);
    *(undefined **)pHVar4 = PTR_vtable_0936cb8c + 8;
    SHA::Init((SHA *)pHVar4);
    pHVar2 = local_20[0];
    local_104 = 0x58;
    if (pHVar4 != local_20[0]) {
      if (local_20[0] != (HASHwithTransform *)0x0) {
        (*(code *)**(undefined4 **)local_20[0])(local_20[0]);
      }
      operator_delete(pHVar2,uVar5 & 0xffffff00);
      local_104 = 0x58;
      local_20[0] = pHVar4;
    }
  }
  (**(code **)(*(int *)pHVar4 + 8))
            (pHVar4,*(int *)(this + 0x10) + *(int *)(*(int *)(this + 4) + 4),
             *(int *)(this + 0x14) - *(int *)(this + 0x10));
  (**(code **)(*(int *)local_20[0] + 0xc))(local_20[0],local_3c);
  if (*(int *)(this + 0x20) == 0x285) {
    local_4c = (uchar *)0x0;
    local_50 = 0;
    local_44 = 0;
    local_40 = 0;
    uVar3 = (**(code **)(*(int *)local_20[0] + 0x18))(local_20[0]);
    Signature_Encoder::Signature_Encoder
              ((Signature_Encoder *)local_64,local_3c,uVar3,local_104,&local_50);
    local_64[0] = PTR_vtable_0936c8e0 + 8;
    RSA_PublicKey::RSA_PublicKey((RSA_PublicKey *)&local_b0,param_1);
    local_28[0] = (RSA_PublicKey *)&local_b0;
    uVar3 = RSA_Encryptor<TaoCrypt::RSA_BlockType2>::SSL_Verify
                      ((RSA_Encryptor<TaoCrypt::RSA_BlockType2> *)local_28,local_4c,local_50,
                       *(uchar **)(this + 0x4c));
    uVar5 = 0;
    memset(local_9c,0,local_a0 << 2);
    operator_delete__(local_9c,uVar5 & 0xffffff00);
    uVar5 = 0;
    memset(local_ac,0,local_b0 << 2);
    operator_delete__(local_ac,uVar5 & 0xffffff00);
    __n = local_50;
    __s = local_4c;
  }
  else {
    DecodeDSA_Signature((uchar *)&local_b0,*(uchar **)(this + 0x4c),*(uint *)(this + 0x18));
    DSA_PublicKey::DSA_PublicKey((DSA_PublicKey *)&local_f0,param_1);
    DSA_Verifier::DSA_Verifier(local_88,(DSA_PublicKey *)&local_f0);
    uVar3 = DSA_Verifier::Verify(local_88,local_3c,(uchar *)&local_b0);
    uVar5 = 0;
    memset(local_70,0,local_74 << 2);
    operator_delete__(local_70,uVar5 & 0xffffff00);
    uVar5 = 0;
    memset(local_80,0,local_84 << 2);
    operator_delete__(local_80,uVar5 & 0xffffff00);
    uVar5 = 0;
    memset(local_bc,0,local_c0 << 2);
    operator_delete__(local_bc,uVar5 & 0xffffff00);
    uVar5 = 0;
    memset(local_cc,0,local_d0 << 2);
    operator_delete__(local_cc,uVar5 & 0xffffff00);
    uVar5 = 0;
    memset(local_dc,0,local_e0 << 2);
    operator_delete__(local_dc,uVar5 & 0xffffff00);
    __n = local_f0 << 2;
    __s = local_ec;
  }
  uVar5 = 0;
  memset(__s,0,__n);
  in_stack_fffffed8 = uVar5 & 0xffffff00;
  operator_delete__(__s,in_stack_fffffed8);
  pHVar4 = local_20[0];
  if (local_20[0] != (HASHwithTransform *)0x0) {
    (*(code *)**(undefined4 **)local_20[0])(local_20[0]);
  }
LAB_08755fa6:
  operator_delete(pHVar4,in_stack_fffffed8 & 0xffffff00);
  return uVar3;
}
```
