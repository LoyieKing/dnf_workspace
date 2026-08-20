# Validate

`_ZN5yaSSL11CertManager8ValidateEv`

`yaSSL::CertManager::Validate()`

| 类 | 地址 |
|---|---|
| `yaSSL::CertManager` | `0x08797e90` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08797e90  _ZN5yaSSL11CertManager8ValidateEv
#           yaSSL::CertManager::Validate()
# range [0x08797e90, 0x087984bf]
08797e90 +0x000:  push   %ebp
08797e91 +0x001:  mov    %esp,%ebp
08797e93 +0x003:  push   %edi
08797e94 +0x004:  push   %esi
08797e95 +0x005:  push   %ebx
08797e96 +0x006:  sub    $0x4fc,%esp
08797e9c +0x00c:  mov    0x8(%ebp),%esi
08797e9f +0x00f:  call   08722df8 <__i686.get_pc_thunk.bx>
08797ea4 +0x014:  add    $0xbd4cf4,%ebx
08797eaa +0x01a:  mov    0x24(%esi),%eax
08797ead +0x01d:  mov    0x20(%esi),%edi
08797eb0 +0x020:  cmp    $0x1,%eax
08797eb3 +0x023:  mov    %eax,-0x4b4(%ebp)
08797eb9 +0x029:  jbe    087980d8 <+0x248>
08797ebf +0x02f:  lea    0x44(%esi),%edx
08797ec2 +0x032:  lea    -0x2c(%ebp),%ecx
08797ec5 +0x035:  lea    -0x4a0(%ebp),%eax
08797ecb +0x03b:  mov    %edx,-0x4bc(%ebp)
08797ed1 +0x041:  lea    -0x4ac(%ebp),%edx
08797ed7 +0x047:  mov    %ecx,-0x4c4(%ebp)
08797edd +0x04d:  lea    -0x47c(%ebp),%ecx
08797ee3 +0x053:  mov    %eax,-0x4b0(%ebp)
08797ee9 +0x059:  lea    -0x250(%ebp),%eax
08797eef +0x05f:  mov    %edx,-0x4c0(%ebp)
08797ef5 +0x065:  mov    %ecx,-0x4c8(%ebp)
08797efb +0x06b:  mov    %eax,-0x4cc(%ebp)
08797f01 +0x071:  jmp    08797f6e <+0xde>
08797f03 +0x073:  nop
08797f04 +0x074:  lea    0x0(%esi,%eiz,1),%esi
08797f08 +0x078:  mov    %eax,0x4(%edx)
08797f0b +0x07b:  mov    0x48(%esi),%edx
08797f0e +0x07e:  mov    %edx,(%eax)
08797f10 +0x080:  mov    %eax,0x48(%esi)
08797f13 +0x083:  mov    -0x4b0(%ebp),%eax
08797f19 +0x089:  addl   $0x1,0x4c(%esi)
08797f1d +0x08d:  mov    (%edi),%edi
08797f1f +0x08f:  subl   $0x1,-0x4b4(%ebp)
08797f26 +0x096:  mov    %eax,(%esp)
08797f29 +0x099:  call   087541a0 <_ZN8TaoCrypt11CertDecoderD1Ev>  ; TaoCrypt::CertDecoder::~CertDecoder()
08797f2e +0x09e:  mov    -0x28(%ebp),%edx
08797f31 +0x0a1:  mov    -0x2c(%ebp),%eax
08797f34 +0x0a4:  movl   $0x0,0x4(%esp)
08797f3c +0x0ac:  mov    %edx,(%esp)
08797f3f +0x0af:  mov    %edx,-0x4d0(%ebp)
08797f45 +0x0b5:  mov    %eax,0x8(%esp)
08797f49 +0x0b9:  call   0807dcc0 <_init+0x5b8>
08797f4e +0x0be:  mov    -0x4d0(%ebp),%edx
08797f54 +0x0c4:  movb   $0x0,0x4(%esp)
08797f59 +0x0c9:  mov    %edx,(%esp)
08797f5c +0x0cc:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08797f61 +0x0d1:  cmpl   $0x1,-0x4b4(%ebp)
08797f68 +0x0d8:  jbe    087980d8 <+0x248>
08797f6e +0x0de:  mov    0x8(%edi),%eax
08797f71 +0x0e1:  mov    %eax,(%esp)
08797f74 +0x0e4:  call   087973d0 <_ZNK5yaSSL4x50910get_lengthEv>  ; yaSSL::x509::get_length() const
08797f79 +0x0e9:  mov    %eax,%edx
08797f7b +0x0eb:  mov    0x8(%edi),%eax
08797f7e +0x0ee:  mov    %edx,-0x4d0(%ebp)
08797f84 +0x0f4:  mov    %eax,(%esp)
08797f87 +0x0f7:  call   087973e0 <_ZNK5yaSSL4x50910get_bufferEv>  ; yaSSL::x509::get_buffer() const
08797f8c +0x0fc:  mov    -0x4d0(%ebp),%edx
08797f92 +0x102:  mov    %edx,-0x2c(%ebp)
08797f95 +0x105:  mov    %eax,%ecx
08797f97 +0x107:  xor    %eax,%eax
08797f99 +0x109:  test   %edx,%edx
08797f9b +0x10b:  je     08797fb9 <+0x129>
08797f9d +0x10d:  mov    %edx,(%esp)
08797fa0 +0x110:  mov    %ecx,-0x4d4(%ebp)
08797fa6 +0x116:  movb   $0x0,0x4(%esp)
08797fab +0x11b:  call   08767790 <_ZnajN8TaoCrypt5new_tE>  ; operator new[](unsigned int, TaoCrypt::new_t)
08797fb0 +0x120:  mov    -0x4d4(%ebp),%ecx
08797fb6 +0x126:  mov    -0x2c(%ebp),%edx
08797fb9 +0x129:  mov    %edx,0x8(%esp)
08797fbd +0x12d:  mov    %ecx,0x4(%esp)
08797fc1 +0x131:  mov    %eax,(%esp)
08797fc4 +0x134:  mov    %eax,-0x28(%ebp)
08797fc7 +0x137:  call   0807d8a0 <_init+0x198>
08797fcc +0x13c:  mov    -0x4bc(%ebp),%edx
08797fd2 +0x142:  movl   $0x1,0x14(%esp)
08797fda +0x14a:  movzbl 0x51(%esi),%eax
08797fde +0x14e:  mov    -0x4c4(%ebp),%ecx
08797fe4 +0x154:  movl   $0x1,0x8(%esp)
08797fec +0x15c:  mov    %edx,0xc(%esp)
08797ff0 +0x160:  mov    %eax,0x10(%esp)
08797ff4 +0x164:  mov    -0x4b0(%ebp),%eax
08797ffa +0x16a:  mov    %ecx,0x4(%esp)
08797ffe +0x16e:  movl   $0x0,-0x20(%ebp)
08798005 +0x175:  movl   $0x0,-0x1c(%ebp)
0879800c +0x17c:  mov    %eax,(%esp)
0879800f +0x17f:  call   087565a0 <_ZN8TaoCrypt11CertDecoderC1ERNS_6SourceEbPN5mySTL4listIPNS_6SignerEEEbNS0_8CertTypeE>  ; TaoCrypt::CertDecoder::CertDecoder(TaoCrypt::Source&, bool, mySTL::list<TaoCrypt::Signer*>*, bool, TaoCrypt::CertDecoder::CertType)
08798014 +0x184:  mov    -0x4b0(%ebp),%edx
0879801a +0x18a:  mov    -0x4c0(%ebp),%ecx
08798020 +0x190:  mov    %edx,0x4(%esp)
08798024 +0x194:  mov    %ecx,(%esp)
08798027 +0x197:  call   08753770 <_ZN8TaoCrypt11BER_Decoder8GetErrorEv>  ; TaoCrypt::BER_Decoder::GetError()
0879802c +0x19c:  mov    -0x4ac(%ebp),%edx
08798032 +0x1a2:  sub    $0x4,%esp
08798035 +0x1a5:  test   %edx,%edx
08798037 +0x1a7:  jne    087980f0 <+0x260>
0879803d +0x1ad:  mov    -0x498(%ebp),%edx
08798043 +0x1b3:  mov    -0x494(%ebp),%ecx
08798049 +0x1b9:  movb   $0x0,0x4(%esp)
0879804e +0x1be:  movl   $0x21c,(%esp)
08798055 +0x1c5:  mov    %edx,-0x4b8(%ebp)
0879805b +0x1cb:  mov    %ecx,-0x4d4(%ebp)
08798061 +0x1d1:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
08798066 +0x1d6:  mov    -0x4d4(%ebp),%ecx
0879806c +0x1dc:  mov    %ecx,0x8(%esp)
08798070 +0x1e0:  mov    -0x4b8(%ebp),%ecx
08798076 +0x1e6:  mov    %eax,%edx
08798078 +0x1e8:  mov    -0x4c8(%ebp),%eax
0879807e +0x1ee:  mov    %edx,(%esp)
08798081 +0x1f1:  mov    %ecx,0x4(%esp)
08798085 +0x1f5:  mov    %edx,-0x4d0(%ebp)
0879808b +0x1fb:  mov    %eax,0x10(%esp)
0879808f +0x1ff:  mov    -0x4cc(%ebp),%eax
08798095 +0x205:  mov    %eax,0xc(%esp)
08798099 +0x209:  call   08753fa0 <_ZN8TaoCrypt6SignerC1EPKhjPKcS2_>  ; TaoCrypt::Signer::Signer(unsigned char const*, unsigned int, char const*, unsigned char const*)
0879809e +0x20e:  movb   $0x0,0x4(%esp)
087980a3 +0x213:  movl   $0xc,(%esp)
087980aa +0x21a:  call   08752350 <_ZnajN5yaSSL5new_tE>  ; operator new[](unsigned int, yaSSL::new_t)
087980af +0x21f:  movl   $0x0,(%eax)
087980b5 +0x225:  movl   $0x0,0x4(%eax)
087980bc +0x22c:  mov    -0x4d0(%ebp),%edx
087980c2 +0x232:  mov    %edx,0x8(%eax)
087980c5 +0x235:  mov    0x48(%esi),%edx
087980c8 +0x238:  test   %edx,%edx
087980ca +0x23a:  jne    08797f08 <+0x78>
087980d0 +0x240:  mov    %eax,0x44(%esi)
087980d3 +0x243:  jmp    08797f10 <+0x80>
087980d8 +0x248:  mov    -0x4b4(%ebp),%ecx
087980de +0x24e:  xor    %edx,%edx
087980e0 +0x250:  test   %ecx,%ecx
087980e2 +0x252:  jne    08798140 <+0x2b0>
087980e4 +0x254:  lea    -0xc(%ebp),%esp
087980e7 +0x257:  mov    %edx,%eax
087980e9 +0x259:  pop    %ebx
087980ea +0x25a:  pop    %esi
087980eb +0x25b:  pop    %edi
087980ec +0x25c:  pop    %ebp
087980ed +0x25d:  ret
087980ee +0x25e:  xchg   %ax,%ax
087980f0 +0x260:  mov    -0x4b0(%ebp),%eax
087980f6 +0x266:  mov    %edx,-0x4d0(%ebp)
087980fc +0x26c:  mov    %eax,(%esp)
087980ff +0x26f:  call   087541a0 <_ZN8TaoCrypt11CertDecoderD1Ev>  ; TaoCrypt::CertDecoder::~CertDecoder()
08798104 +0x274:  mov    -0x28(%ebp),%esi
08798107 +0x277:  mov    -0x2c(%ebp),%eax
0879810a +0x27a:  movl   $0x0,0x4(%esp)
08798112 +0x282:  mov    %esi,(%esp)
08798115 +0x285:  mov    %eax,0x8(%esp)
08798119 +0x289:  call   0807dcc0 <_init+0x5b8>
0879811e +0x28e:  mov    %esi,(%esp)
08798121 +0x291:  movb   $0x0,0x4(%esp)
08798126 +0x296:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
0879812b +0x29b:  mov    -0x4d0(%ebp),%edx
08798131 +0x2a1:  lea    -0xc(%ebp),%esp
08798134 +0x2a4:  pop    %ebx
08798135 +0x2a5:  pop    %esi
08798136 +0x2a6:  pop    %edi
08798137 +0x2a7:  mov    %edx,%eax
08798139 +0x2a9:  pop    %ebp
0879813a +0x2aa:  ret
0879813b +0x2ab:  nop
0879813c +0x2ac:  lea    0x0(%esi,%eiz,1),%esi
08798140 +0x2b0:  mov    0x8(%edi),%eax
08798143 +0x2b3:  mov    %eax,(%esp)
08798146 +0x2b6:  call   087973d0 <_ZNK5yaSSL4x50910get_lengthEv>  ; yaSSL::x509::get_length() const
0879814b +0x2bb:  mov    %eax,%edx
0879814d +0x2bd:  mov    0x8(%edi),%eax
08798150 +0x2c0:  mov    %edx,-0x4d0(%ebp)
08798156 +0x2c6:  mov    %eax,(%esp)
08798159 +0x2c9:  call   087973e0 <_ZNK5yaSSL4x50910get_bufferEv>  ; yaSSL::x509::get_buffer() const
0879815e +0x2ce:  mov    -0x4d0(%ebp),%edx
08798164 +0x2d4:  mov    %edx,-0x2c(%ebp)
08798167 +0x2d7:  mov    %eax,%edi
08798169 +0x2d9:  xor    %eax,%eax
0879816b +0x2db:  test   %edx,%edx
0879816d +0x2dd:  je     0879817f <+0x2ef>
0879816f +0x2df:  mov    %edx,(%esp)
08798172 +0x2e2:  movb   $0x0,0x4(%esp)
08798177 +0x2e7:  call   08767790 <_ZnajN8TaoCrypt5new_tE>  ; operator new[](unsigned int, TaoCrypt::new_t)
0879817c +0x2ec:  mov    -0x2c(%ebp),%edx
0879817f +0x2ef:  mov    %edx,0x8(%esp)
08798183 +0x2f3:  mov    %edi,0x4(%esp)
08798187 +0x2f7:  mov    %eax,(%esp)
0879818a +0x2fa:  mov    %eax,-0x28(%ebp)
0879818d +0x2fd:  call   0807d8a0 <_init+0x198>
08798192 +0x302:  lea    -0x4a0(%ebp),%edx
08798198 +0x308:  movl   $0x1,0x14(%esp)
087981a0 +0x310:  movzbl 0x51(%esi),%eax
087981a4 +0x314:  mov    %edx,-0x4b0(%ebp)
087981aa +0x31a:  movl   $0x1,0x8(%esp)
087981b2 +0x322:  mov    %edx,(%esp)
087981b5 +0x325:  mov    %eax,0x10(%esp)
087981b9 +0x329:  lea    0x44(%esi),%eax
087981bc +0x32c:  mov    %eax,0xc(%esp)
087981c0 +0x330:  lea    -0x2c(%ebp),%eax
087981c3 +0x333:  mov    %eax,0x4(%esp)
087981c7 +0x337:  movl   $0x0,-0x20(%ebp)
087981ce +0x33e:  movl   $0x0,-0x1c(%ebp)
087981d5 +0x345:  call   087565a0 <_ZN8TaoCrypt11CertDecoderC1ERNS_6SourceEbPN5mySTL4listIPNS_6SignerEEEbNS0_8CertTypeE>  ; TaoCrypt::CertDecoder::CertDecoder(TaoCrypt::Source&, bool, mySTL::list<TaoCrypt::Signer*>*, bool, TaoCrypt::CertDecoder::CertType)
087981da +0x34a:  mov    -0x4b0(%ebp),%ecx
087981e0 +0x350:  lea    -0x4ac(%ebp),%eax
087981e6 +0x356:  mov    %eax,(%esp)
087981e9 +0x359:  mov    %ecx,0x4(%esp)
087981ed +0x35d:  call   08753770 <_ZN8TaoCrypt11BER_Decoder8GetErrorEv>  ; TaoCrypt::BER_Decoder::GetError()
087981f2 +0x362:  mov    -0x4ac(%ebp),%edi
087981f8 +0x368:  sub    $0x4,%esp
087981fb +0x36b:  test   %edi,%edi
087981fd +0x36d:  jne    08798478 <+0x5e8>
08798203 +0x373:  mov    -0x494(%ebp),%eax
08798209 +0x379:  lea    0x28(%esi),%edi
0879820c +0x37c:  mov    %edi,(%esp)
0879820f +0x37f:  mov    %eax,0x4(%esp)
08798213 +0x383:  mov    %eax,-0x4d0(%ebp)
08798219 +0x389:  call   08797220 <_ZN5yaSSL12input_buffer8allocateEj>  ; yaSSL::input_buffer::allocate(unsigned int)
0879821e +0x38e:  mov    -0x4d0(%ebp),%eax
08798224 +0x394:  mov    %edi,(%esp)
08798227 +0x397:  mov    %eax,0x8(%esp)
0879822b +0x39b:  mov    -0x498(%ebp),%eax
08798231 +0x3a1:  mov    %eax,0x4(%esp)
08798235 +0x3a5:  call   087970b0 <_ZN5yaSSL12input_buffer6assignEPKhj>  ; yaSSL::input_buffer::assign(unsigned char const*, unsigned int)
0879823a +0x3aa:  xor    %eax,%eax
0879823c +0x3ac:  cmpl   $0x285,-0x480(%ebp)
08798246 +0x3b6:  setne  %al
08798249 +0x3b9:  add    $0x1,%eax
0879824c +0x3bc:  mov    %eax,0x40(%esi)
0879824f +0x3bf:  lea    -0x450(%ebp),%eax
08798255 +0x3c5:  mov    %eax,-0x4b4(%ebp)
0879825b +0x3cb:  mov    %eax,%edi
0879825d +0x3cd:  mov    (%edi),%edx
0879825f +0x3cf:  add    $0x4,%edi
08798262 +0x3d2:  lea    -0x1010101(%edx),%eax
08798268 +0x3d8:  not    %edx
0879826a +0x3da:  and    %edx,%eax
0879826c +0x3dc:  and    $0x80808080,%eax
08798271 +0x3e1:  je     0879825d <+0x3cd>
08798273 +0x3e3:  mov    %eax,%edx
08798275 +0x3e5:  shr    $0x10,%edx
08798278 +0x3e8:  test   $0x8080,%eax
0879827d +0x3ed:  cmove  %edx,%eax
08798280 +0x3f0:  lea    0x2(%edi),%edx
08798283 +0x3f3:  cmove  %edx,%edi
08798286 +0x3f6:  add    %al,%al
08798288 +0x3f8:  sbb    $0x3,%edi
0879828b +0x3fb:  sub    -0x4b4(%ebp),%edi
08798291 +0x401:  lea    -0x250(%ebp),%edx
08798297 +0x407:  mov    %edx,-0x4c0(%ebp)
0879829d +0x40d:  mov    %edx,%ecx
0879829f +0x40f:  mov    (%ecx),%edx
087982a1 +0x411:  add    $0x4,%ecx
087982a4 +0x414:  lea    -0x1010101(%edx),%eax
087982aa +0x41a:  not    %edx
087982ac +0x41c:  and    %edx,%eax
087982ae +0x41e:  and    $0x80808080,%eax
087982b3 +0x423:  je     0879829f <+0x40f>
087982b5 +0x425:  mov    %eax,%edx
087982b7 +0x427:  shr    $0x10,%edx
087982ba +0x42a:  test   $0x8080,%eax
087982bf +0x42f:  cmove  %edx,%eax
087982c2 +0x432:  lea    0x2(%ecx),%edx
087982c5 +0x435:  cmove  %edx,%ecx
087982c8 +0x438:  add    %al,%al
087982ca +0x43a:  sbb    $0x3,%ecx
087982cd +0x43d:  sub    -0x4c0(%ebp),%ecx
087982d3 +0x443:  lea    -0x50(%ebp),%eax
087982d6 +0x446:  mov    %eax,-0x4c4(%ebp)
087982dc +0x44c:  mov    %eax,-0x4b8(%ebp)
087982e2 +0x452:  mov    -0x4b8(%ebp),%edx
087982e8 +0x458:  mov    (%edx),%eax
087982ea +0x45a:  add    $0x4,%edx
087982ed +0x45d:  mov    %edx,-0x4b8(%ebp)
087982f3 +0x463:  lea    -0x1010101(%eax),%edx
087982f9 +0x469:  not    %eax
087982fb +0x46b:  and    %eax,%edx
087982fd +0x46d:  and    $0x80808080,%edx
08798303 +0x473:  je     087982e2 <+0x452>
08798305 +0x475:  mov    %edx,%eax
08798307 +0x477:  shr    $0x10,%eax
0879830a +0x47a:  test   $0x8080,%edx
08798310 +0x480:  cmove  %eax,%edx
08798313 +0x483:  mov    -0x4b8(%ebp),%eax
08798319 +0x489:  mov    %ecx,-0x4cc(%ebp)
0879831f +0x48f:  lea    0x2(%eax),%eax
08798322 +0x492:  mov    %eax,-0x4bc(%ebp)
08798328 +0x498:  mov    -0x4b8(%ebp),%eax
0879832e +0x49e:  cmove  -0x4bc(%ebp),%eax
08798335 +0x4a5:  add    %dl,%dl
08798337 +0x4a7:  mov    -0x4c4(%ebp),%edx
0879833d +0x4ad:  sbb    $0x3,%eax
08798340 +0x4b0:  sub    %edx,%eax
08798342 +0x4b2:  mov    %eax,-0x4b8(%ebp)
08798348 +0x4b8:  lea    -0x40(%ebp),%eax
0879834b +0x4bb:  mov    %eax,-0x4c8(%ebp)
08798351 +0x4c1:  mov    %eax,%edx
08798353 +0x4c3:  mov    (%edx),%eax
08798355 +0x4c5:  add    $0x4,%edx
08798358 +0x4c8:  lea    -0x1010101(%eax),%ecx
0879835e +0x4ce:  not    %eax
08798360 +0x4d0:  and    %eax,%ecx
08798362 +0x4d2:  and    $0x80808080,%ecx
08798368 +0x4d8:  mov    %ecx,-0x4bc(%ebp)
0879836e +0x4de:  je     08798353 <+0x4c3>
08798370 +0x4e0:  mov    -0x4bc(%ebp),%eax
08798376 +0x4e6:  mov    -0x4cc(%ebp),%ecx
0879837c +0x4ec:  shr    $0x10,%eax
0879837f +0x4ef:  testl  $0x8080,-0x4bc(%ebp)
08798389 +0x4f9:  cmovne -0x4bc(%ebp),%eax
08798390 +0x500:  mov    %eax,-0x4bc(%ebp)
08798396 +0x506:  lea    0x2(%edx),%eax
08798399 +0x509:  cmove  %eax,%edx
0879839c +0x50c:  movzbl -0x4bc(%ebp),%eax
087983a3 +0x513:  add    %al,%al
087983a5 +0x515:  sbb    $0x3,%edx
087983a8 +0x518:  sub    -0x4c8(%ebp),%edx
087983ae +0x51e:  mov    %edx,-0x4d0(%ebp)
087983b4 +0x524:  add    $0x1,%edi
087983b7 +0x527:  mov    %ecx,-0x4d4(%ebp)
087983bd +0x52d:  movb   $0x0,0x4(%esp)
087983c2 +0x532:  movl   $0x40,(%esp)
087983c9 +0x539:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
087983ce +0x53e:  mov    -0x4d0(%ebp),%edx
087983d4 +0x544:  mov    -0x4d4(%ebp),%ecx
087983da +0x54a:  mov    %edi,0x8(%esp)
087983de +0x54e:  add    $0x1,%edx
087983e1 +0x551:  mov    %edx,0x20(%esp)
087983e5 +0x555:  mov    -0x4c8(%ebp),%edx
087983eb +0x55b:  add    $0x1,%ecx
087983ee +0x55e:  mov    %ecx,0x10(%esp)
087983f2 +0x562:  mov    -0x4c0(%ebp),%ecx
087983f8 +0x568:  mov    %eax,(%esp)
087983fb +0x56b:  mov    %eax,-0x4d0(%ebp)
08798401 +0x571:  mov    %edx,0x1c(%esp)
08798405 +0x575:  mov    -0x4b8(%ebp),%edx
0879840b +0x57b:  mov    %ecx,0xc(%esp)
0879840f +0x57f:  add    $0x1,%edx
08798412 +0x582:  mov    %edx,0x18(%esp)
08798416 +0x586:  mov    -0x4c4(%ebp),%edx
0879841c +0x58c:  mov    %edx,0x14(%esp)
08798420 +0x590:  mov    -0x4b4(%ebp),%edx
08798426 +0x596:  mov    %edx,0x4(%esp)
0879842a +0x59a:  call   08752520 <_ZN5yaSSL4X509C1EPKcjS2_jS2_iS2_i>  ; yaSSL::X509::X509(char const*, unsigned int, char const*, unsigned int, char const*, int, char const*, int)
0879842f +0x59f:  mov    -0x4d0(%ebp),%eax
08798435 +0x5a5:  mov    -0x4b0(%ebp),%ecx
0879843b +0x5ab:  mov    %eax,0x38(%esi)
0879843e +0x5ae:  mov    %ecx,(%esp)
08798441 +0x5b1:  call   087541a0 <_ZN8TaoCrypt11CertDecoderD1Ev>  ; TaoCrypt::CertDecoder::~CertDecoder()
08798446 +0x5b6:  mov    -0x28(%ebp),%esi
08798449 +0x5b9:  mov    -0x2c(%ebp),%eax
0879844c +0x5bc:  movl   $0x0,0x4(%esp)
08798454 +0x5c4:  mov    %esi,(%esp)
08798457 +0x5c7:  mov    %eax,0x8(%esp)
0879845b +0x5cb:  call   0807dcc0 <_init+0x5b8>
08798460 +0x5d0:  movb   $0x0,0x4(%esp)
08798465 +0x5d5:  mov    %esi,(%esp)
08798468 +0x5d8:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
0879846d +0x5dd:  xor    %edx,%edx
0879846f +0x5df:  jmp    087980e4 <+0x254>
08798474 +0x5e4:  lea    0x0(%esi,%eiz,1),%esi
08798478 +0x5e8:  mov    -0x4b0(%ebp),%eax
0879847e +0x5ee:  mov    %eax,(%esp)
08798481 +0x5f1:  call   087541a0 <_ZN8TaoCrypt11CertDecoderD1Ev>  ; TaoCrypt::CertDecoder::~CertDecoder()
08798486 +0x5f6:  mov    -0x28(%ebp),%esi
08798489 +0x5f9:  mov    -0x2c(%ebp),%eax
0879848c +0x5fc:  movl   $0x0,0x4(%esp)
08798494 +0x604:  mov    %esi,(%esp)
08798497 +0x607:  mov    %eax,0x8(%esp)
0879849b +0x60b:  call   0807dcc0 <_init+0x5b8>
087984a0 +0x610:  mov    %esi,(%esp)
087984a3 +0x613:  movb   $0x0,0x4(%esp)
087984a8 +0x618:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
087984ad +0x61d:  mov    %edi,%edx
087984af +0x61f:  lea    -0xc(%ebp),%esp
087984b2 +0x622:  mov    %edx,%eax
087984b4 +0x624:  pop    %ebx
087984b5 +0x625:  pop    %esi
087984b6 +0x626:  pop    %edi
087984b7 +0x627:  pop    %ebp
087984b8 +0x628:  ret
087984b9 +0x629:  nop
087984ba +0x62a:  nop
087984bb +0x62b:  nop
087984bc +0x62c:  nop
087984bd +0x62d:  nop
087984be +0x62e:  nop
087984bf +0x62f:  nop
```

## 反编译 C

```c
// yaSSL::CertManager::Validate @ 0x8797e90

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::CertManager::Validate() */

int __thiscall yaSSL::CertManager::Validate(CertManager *this)

{
  size_t sVar1;
  void *pvVar2;
  void *pvVar3;
  Signer *this_00;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  X509 *this_01;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint *puVar13;
  undefined4 *puVar14;
  uint *puVar15;
  uint in_stack_fffffaf8;
  CertDecoder *pCVar16;
  uchar *puVar17;
  byte local_4c0;
  uint *local_4bc;
  uint local_4b8;
  int local_4b0;
  CertDecoder local_4a4 [8];
  uchar *local_49c;
  uint local_498;
  int local_484;
  uchar local_480 [44];
  uint local_454 [128];
  uint local_254 [128];
  uint local_54 [4];
  uint local_44 [5];
  size_t local_30;
  void *local_2c;
  undefined4 local_24;
  undefined4 local_20;
  
  local_4b8 = *(uint *)(this + 0x24);
  puVar14 = *(undefined4 **)(this + 0x20);
  if (1 < local_4b8) {
    do {
      sVar1 = yaSSL::x509::get_length((x509 *)puVar14[2]);
      pvVar2 = (void *)yaSSL::x509::get_buffer((x509 *)puVar14[2]);
      pvVar3 = (void *)0x0;
      local_30 = sVar1;
      if (sVar1 != 0) {
        pvVar3 = operator_new__(sVar1,in_stack_fffffaf8 & 0xffffff00);
      }
      local_2c = pvVar3;
      memcpy(pvVar3,pvVar2,local_30);
      local_24 = 0;
      local_20 = 0;
      TaoCrypt::CertDecoder::CertDecoder(local_4a4,&local_30,1,this + 0x44,this[0x51],1);
      pCVar16 = local_4a4;
      TaoCrypt::BER_Decoder::GetError();
      uVar6 = local_498;
      puVar17 = local_49c;
      if (local_4b0 != 0) {
        TaoCrypt::CertDecoder::~CertDecoder(local_4a4);
        pvVar2 = local_2c;
        uVar6 = 0;
        memset(local_2c,0,local_30);
        operator_delete__(pvVar2,uVar6 & 0xffffff00);
        return local_4b0;
      }
      this_00 = operator_new(0x21c,(uint)pCVar16 & 0xffffff00);
      TaoCrypt::Signer::Signer(this_00,puVar17,uVar6,(char *)local_254,local_480);
      puVar4 = operator_new__(0xc,(uint)puVar17 & 0xffffff00);
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = this_00;
      if (*(int *)(this + 0x48) == 0) {
        *(undefined4 **)(this + 0x44) = puVar4;
      }
      else {
        *(undefined4 **)(*(int *)(this + 0x48) + 4) = puVar4;
        *puVar4 = *(undefined4 *)(this + 0x48);
      }
      *(undefined4 **)(this + 0x48) = puVar4;
      *(int *)(this + 0x4c) = *(int *)(this + 0x4c) + 1;
      puVar14 = (undefined4 *)*puVar14;
      local_4b8 = local_4b8 - 1;
      TaoCrypt::CertDecoder::~CertDecoder(local_4a4);
      pvVar2 = local_2c;
      in_stack_fffffaf8 = 0;
      memset(local_2c,0,local_30);
      in_stack_fffffaf8 = in_stack_fffffaf8 & 0xffffff00;
      operator_delete__(pvVar2,in_stack_fffffaf8);
    } while (1 < local_4b8);
  }
  if (local_4b8 != 0) {
    sVar1 = yaSSL::x509::get_length((x509 *)puVar14[2]);
    pvVar2 = (void *)yaSSL::x509::get_buffer((x509 *)puVar14[2]);
    pvVar3 = (void *)0x0;
    local_30 = sVar1;
    if (sVar1 != 0) {
      pvVar3 = operator_new__(sVar1,in_stack_fffffaf8 & 0xffffff00);
    }
    local_2c = pvVar3;
    memcpy(pvVar3,pvVar2,local_30);
    local_24 = 0;
    local_20 = 0;
    TaoCrypt::CertDecoder::CertDecoder(local_4a4,&local_30,1,this + 0x44,this[0x51],1);
    TaoCrypt::BER_Decoder::GetError();
    if (local_4b0 != 0) {
      TaoCrypt::CertDecoder::~CertDecoder(local_4a4);
      pvVar2 = local_2c;
      uVar6 = 0;
      memset(local_2c,0,local_30);
      operator_delete__(pvVar2,uVar6 & 0xffffff00);
      return local_4b0;
    }
    input_buffer::allocate((input_buffer *)(this + 0x28),local_498);
    input_buffer::assign((input_buffer *)(this + 0x28),local_49c,local_498);
    *(uint *)(this + 0x40) = (local_484 != 0x285) + 1;
    puVar15 = local_454;
    do {
      puVar9 = puVar15;
      uVar5 = *puVar9 + 0xfefefeff & ~*puVar9;
      uVar6 = uVar5 & 0x80808080;
      puVar15 = puVar9 + 1;
    } while (uVar6 == 0);
    if ((uVar5 & 0x8080) == 0) {
      puVar15 = (uint *)((int)puVar9 + 6);
      uVar6 = uVar6 >> 0x10;
    }
    puVar9 = local_254;
    do {
      puVar8 = puVar9;
      uVar7 = *puVar8 + 0xfefefeff & ~*puVar8;
      uVar5 = uVar7 & 0x80808080;
      puVar9 = puVar8 + 1;
    } while (uVar5 == 0);
    if ((uVar7 & 0x8080) == 0) {
      puVar9 = (uint *)((int)puVar8 + 6);
      uVar5 = uVar5 >> 0x10;
    }
    puVar8 = local_54;
    do {
      local_4bc = puVar8;
      uVar11 = *local_4bc + 0xfefefeff & ~*local_4bc;
      uVar7 = uVar11 & 0x80808080;
      puVar8 = local_4bc + 1;
    } while (uVar7 == 0);
    if ((uVar11 & 0x8080) == 0) {
      puVar8 = (uint *)((int)local_4bc + 6);
      uVar7 = uVar7 >> 0x10;
    }
    puVar13 = local_44;
    do {
      puVar12 = puVar13;
      puVar13 = puVar12 + 1;
      uVar10 = *puVar12 + 0xfefefeff & ~*puVar12;
      uVar11 = uVar10 & 0x80808080;
    } while (uVar11 == 0);
    if ((uVar10 & 0x8080) == 0) {
      puVar13 = (uint *)((int)puVar12 + 6);
      uVar11 = uVar11 >> 0x10;
    }
    local_4c0 = (byte)uVar11;
    this_01 = operator_new(0x40,(uint)local_49c & 0xffffff00);
    X509::X509(this_01,(char *)local_454,
               (uint)((int)puVar15 + (-(int)local_454 - (uint)CARRY1((byte)uVar6,(byte)uVar6)) + -2)
               ,(char *)local_254,
               (uint)((int)puVar9 + (-(int)local_254 - (uint)CARRY1((byte)uVar5,(byte)uVar5)) + -2),
               (char *)local_54,
               (int)((int)puVar8 + (-(int)local_54 - (uint)CARRY1((byte)uVar7,(byte)uVar7)) + -2),
               (char *)local_44,
               (int)((int)puVar13 + (-(int)local_44 - (uint)CARRY1(local_4c0,local_4c0)) + -2));
    *(X509 **)(this + 0x38) = this_01;
    TaoCrypt::CertDecoder::~CertDecoder(local_4a4);
    pvVar2 = local_2c;
    uVar6 = 0;
    memset(local_2c,0,local_30);
    operator_delete__(pvVar2,uVar6 & 0xffffff00);
  }
  return 0;
}
```
