# read_file

`_ZN5yaSSL9read_fileEPNS_7SSL_CTXEPKciNS_8CertTypeE`

`yaSSL::read_file(yaSSL::SSL_CTX*, char const*, int, yaSSL::CertType)`

| 类 | 地址 |
|---|---|
| `yaSSL` | `0x08745ab0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08745ab0  _ZN5yaSSL9read_fileEPNS_7SSL_CTXEPKciNS_8CertTypeE
#           yaSSL::read_file(yaSSL::SSL_CTX*, char const*, int, yaSSL::CertType)
# range [0x08745ab0, 0x087460b9]
08745ab0 +0x000:  push   %ebp
08745ab1 +0x001:  mov    %esp,%ebp
08745ab3 +0x003:  sub    $0x188,%esp
08745ab9 +0x009:  mov    %esi,-0x8(%ebp)
08745abc +0x00c:  mov    0x10(%ebp),%esi
08745abf +0x00f:  mov    %ebx,-0xc(%ebp)
08745ac2 +0x012:  mov    0xc(%ebp),%ecx
08745ac5 +0x015:  call   08722df8 <__i686.get_pc_thunk.bx>
08745aca +0x01a:  add    $0xc270ce,%ebx
08745ad0 +0x020:  mov    0x14(%ebp),%edx
08745ad3 +0x023:  mov    %edi,-0x4(%ebp)
08745ad6 +0x026:  lea    -0xa(%esi),%eax
08745ad9 +0x029:  cmp    $0x1,%eax
08745adc +0x02c:  jbe    08745af0 <+0x40>
08745ade +0x02e:  mov    $0xfffffffb,%eax
08745ae3 +0x033:  mov    -0xc(%ebp),%ebx
08745ae6 +0x036:  mov    -0x8(%ebp),%esi
08745ae9 +0x039:  mov    -0x4(%ebp),%edi
08745aec +0x03c:  mov    %ebp,%esp
08745aee +0x03e:  pop    %ebp
08745aef +0x03f:  ret
08745af0 +0x040:  test   %ecx,%ecx
08745af2 +0x042:  jne    08745afb <+0x4b>
08745af4 +0x044:  mov    $0xfffffffc,%eax
08745af9 +0x049:  jmp    08745ae3 <+0x33>
08745afb +0x04b:  cmpb   $0x0,(%ecx)
08745afe +0x04e:  je     08745af4 <+0x44>
08745b00 +0x050:  lea    -0x66b544(%ebx),%eax
08745b06 +0x056:  mov    %edx,-0x150(%ebp)
08745b0c +0x05c:  mov    %eax,0x4(%esp)
08745b10 +0x060:  mov    %ecx,(%esp)
08745b13 +0x063:  call   0807e770 <_init+0x1068>
08745b18 +0x068:  mov    -0x150(%ebp),%edx
08745b1e +0x06e:  test   %eax,%eax
08745b20 +0x070:  mov    %eax,%edi
08745b22 +0x072:  je     08745af4 <+0x44>
08745b24 +0x074:  cmp    $0x2,%edx
08745b27 +0x077:  je     08745ba6 <+0xf6>
08745b29 +0x079:  mov    0x8(%ebp),%ecx
08745b2c +0x07c:  mov    0x8(%ebp),%eax
08745b2f +0x07f:  add    $0x4,%ecx
08745b32 +0x082:  add    $0x8,%eax
08745b35 +0x085:  test   %edx,%edx
08745b37 +0x087:  cmove  %ecx,%eax
08745b3a +0x08a:  cmp    $0xa,%esi
08745b3d +0x08d:  mov    %eax,-0x140(%ebp)
08745b43 +0x093:  je     0874602e <+0x57e>
08745b49 +0x099:  lea    -0x138(%ebp),%esi
08745b4f +0x09f:  movl   $0x0,-0xc8(%ebp)
08745b59 +0x0a9:  movb   $0x0,-0xc4(%ebp)
08745b60 +0x0b0:  mov    %esi,0x8(%esp)
08745b64 +0x0b4:  mov    %edx,0x4(%esp)
08745b68 +0x0b8:  mov    %edi,(%esp)
08745b6b +0x0bb:  call   0879bcb0 <_ZN5yaSSL8PemToDerEP8_IO_FILENS_8CertTypeEPNS_13EncryptedInfoE>  ; yaSSL::PemToDer(_IO_FILE*, yaSSL::CertType, yaSSL::EncryptedInfo*)
08745b70 +0x0c0:  mov    -0x140(%ebp),%ecx
08745b76 +0x0c6:  test   %eax,%eax
08745b78 +0x0c8:  mov    %eax,(%ecx)
08745b7a +0x0ca:  je     08745bce <+0x11e>
08745b7c +0x0cc:  cmpb   $0x0,-0xc4(%ebp)
08745b83 +0x0d3:  jne    08745be0 <+0x130>
08745b85 +0x0d5:  mov    %edi,(%esp)
08745b88 +0x0d8:  call   0807dea0 <_init+0x798>
08745b8d +0x0dd:  mov    $0x1,%eax
08745b92 +0x0e2:  jmp    08745ae3 <+0x33>
08745b97 +0x0e7:  mov    %eax,0x4(%esp)
08745b9b +0x0eb:  mov    0x8(%ebp),%eax
08745b9e +0x0ee:  mov    %eax,(%esp)
08745ba1 +0x0f1:  call   087525a0 <_ZN5yaSSL7SSL_CTX5AddCAEPNS_4x509E>  ; yaSSL::SSL_CTX::AddCA(yaSSL::x509*)
08745ba6 +0x0f6:  movl   $0x0,0x8(%esp)
08745bae +0x0fe:  movl   $0x0,0x4(%esp)
08745bb6 +0x106:  mov    %edi,(%esp)
08745bb9 +0x109:  call   0879bcb0 <_ZN5yaSSL8PemToDerEP8_IO_FILENS_8CertTypeEPNS_13EncryptedInfoE>  ; yaSSL::PemToDer(_IO_FILE*, yaSSL::CertType, yaSSL::EncryptedInfo*)
08745bbe +0x10e:  test   %eax,%eax
08745bc0 +0x110:  jne    08745b97 <+0xe7>
08745bc2 +0x112:  mov    %edi,(%esp)
08745bc5 +0x115:  call   0807d7b0 <_init+0xa8>
08745bca +0x11a:  test   %eax,%eax
08745bcc +0x11c:  jne    08745b85 <+0xd5>
08745bce +0x11e:  mov    %edi,(%esp)
08745bd1 +0x121:  call   0807dea0 <_init+0x798>
08745bd6 +0x126:  mov    $0xfffffffc,%eax
08745bdb +0x12b:  jmp    08745ae3 <+0x33>
08745be0 +0x130:  mov    0x8(%ebp),%eax
08745be3 +0x133:  mov    %eax,(%esp)
08745be6 +0x136:  call   0874e4e0 <_ZNK5yaSSL7SSL_CTX13GetPasswordCbEv>  ; yaSSL::SSL_CTX::GetPasswordCb() const
08745beb +0x13b:  test   %eax,%eax
08745bed +0x13d:  je     08745bce <+0x11e>
08745bef +0x13f:  mov    0x8(%ebp),%ecx
08745bf2 +0x142:  mov    %eax,-0x150(%ebp)
08745bf8 +0x148:  mov    %ecx,(%esp)
08745bfb +0x14b:  call   0874e510 <_ZNK5yaSSL7SSL_CTX11GetUserDataEv>  ; yaSSL::SSL_CTX::GetUserData() const
08745c00 +0x150:  mov    -0x150(%ebp),%edx
08745c06 +0x156:  movl   $0x0,0x8(%esp)
08745c0e +0x15e:  movl   $0x50,0x4(%esp)
08745c16 +0x166:  mov    %eax,0xc(%esp)
08745c1a +0x16a:  lea    -0xc0(%ebp),%eax
08745c20 +0x170:  mov    %eax,-0x148(%ebp)
08745c26 +0x176:  mov    %eax,(%esp)
08745c29 +0x179:  call   *%edx
08745c2b +0x17b:  mov    -0xc8(%ebp),%edx
08745c31 +0x181:  mov    %edx,-0x50(%ebp)
08745c34 +0x184:  mov    %eax,-0x14c(%ebp)
08745c3a +0x18a:  xor    %eax,%eax
08745c3c +0x18c:  test   %edx,%edx
08745c3e +0x18e:  je     08745c4d <+0x19d>
08745c40 +0x190:  movb   $0x0,0x4(%esp)
08745c45 +0x195:  mov    %edx,(%esp)
08745c48 +0x198:  call   08767790 <_ZnajN8TaoCrypt5new_tE>  ; operator new[](unsigned int, TaoCrypt::new_t)
08745c4d +0x19d:  lea    -0xe8(%ebp),%edx
08745c53 +0x1a3:  mov    %edx,-0x13c(%ebp)
08745c59 +0x1a9:  mov    -0x50(%ebp),%edx
08745c5c +0x1ac:  mov    -0x13c(%ebp),%ecx
08745c62 +0x1b2:  mov    %eax,-0x4c(%ebp)
08745c65 +0x1b5:  mov    %eax,(%esp)
08745c68 +0x1b8:  mov    %edx,0x8(%esp)
08745c6c +0x1bc:  mov    %ecx,0x4(%esp)
08745c70 +0x1c0:  call   0807d8a0 <_init+0x198>
08745c75 +0x1c5:  lea    -0x50(%ebp),%eax
08745c78 +0x1c8:  mov    %eax,-0x30(%ebp)
08745c7b +0x1cb:  lea    -0x3c(%ebp),%eax
08745c7e +0x1ce:  mov    %eax,(%esp)
08745c81 +0x1d1:  movl   $0x0,-0x44(%ebp)
08745c88 +0x1d8:  movl   $0x0,-0x40(%ebp)
08745c8f +0x1df:  movl   $0x0,-0x38(%ebp)
08745c96 +0x1e6:  movl   $0x0,-0x3c(%ebp)
08745c9d +0x1ed:  call   08757200 <_ZN8TaoCrypt10HexDecoder6DecodeEv>  ; TaoCrypt::HexDecoder::Decode()
08745ca2 +0x1f2:  mov    -0x50(%ebp),%edx
08745ca5 +0x1f5:  mov    $0x20,%eax
08745caa +0x1fa:  cmp    $0x20,%edx
08745cad +0x1fd:  cmovbe %edx,%eax
08745cb0 +0x200:  mov    %eax,0x8(%esp)
08745cb4 +0x204:  mov    -0x4c(%ebp),%eax
08745cb7 +0x207:  mov    %eax,0x4(%esp)
08745cbb +0x20b:  mov    -0x13c(%ebp),%eax
08745cc1 +0x211:  mov    %eax,(%esp)
08745cc4 +0x214:  call   0807d8a0 <_init+0x198>
08745cc9 +0x219:  lea    -0x2c(%ebp),%eax
08745ccc +0x21c:  mov    -0x14c(%ebp),%ecx
08745cd2 +0x222:  lea    -0x70(%ebp),%edx
08745cd5 +0x225:  mov    %eax,0x1c(%esp)
08745cd9 +0x229:  mov    -0x148(%ebp),%eax
08745cdf +0x22f:  mov    %edx,-0x144(%ebp)
08745ce5 +0x235:  mov    %edx,0x18(%esp)
08745ce9 +0x239:  mov    -0x13c(%ebp),%edx
08745cef +0x23f:  mov    %ecx,0x10(%esp)
08745cf3 +0x243:  mov    %eax,0xc(%esp)
08745cf7 +0x247:  lea    -0x667dfd(%ebx),%eax
08745cfd +0x24d:  movl   $0x1,0x14(%esp)
08745d05 +0x255:  mov    %edx,0x8(%esp)
08745d09 +0x259:  mov    %eax,0x4(%esp)
08745d0d +0x25d:  mov    %esi,(%esp)
08745d10 +0x260:  call   08744040 <yaEVP_BytesToKey>
08745d15 +0x265:  lea    -0x5889e7(%ebx),%eax
08745d1b +0x26b:  movl   $0x7,0x8(%esp)
08745d23 +0x273:  mov    %eax,0x4(%esp)
08745d27 +0x277:  mov    %esi,(%esp)
08745d2a +0x27a:  movl   $0x0,-0x1c(%ebp)
08745d31 +0x281:  call   0807e8c0 <_init+0x11b8>
08745d36 +0x286:  test   %eax,%eax
08745d38 +0x288:  je     08746000 <+0x550>
08745d3e +0x28e:  lea    -0x6683a8(%ebx),%eax
08745d44 +0x294:  movl   $0xd,0x8(%esp)
08745d4c +0x29c:  mov    %eax,0x4(%esp)
08745d50 +0x2a0:  mov    %esi,(%esp)
08745d53 +0x2a3:  call   0807e8c0 <_init+0x11b8>
08745d58 +0x2a8:  test   %eax,%eax
08745d5a +0x2aa:  je     08745fd2 <+0x522>
08745d60 +0x2b0:  lea    -0x66839b(%ebx),%eax
08745d66 +0x2b6:  movl   $0xc,0x8(%esp)
08745d6e +0x2be:  mov    %eax,0x4(%esp)
08745d72 +0x2c2:  mov    %esi,(%esp)
08745d75 +0x2c5:  call   0807e8c0 <_init+0x11b8>
08745d7a +0x2ca:  test   %eax,%eax
08745d7c +0x2cc:  je     08745fb2 <+0x502>
08745d82 +0x2d2:  lea    -0x66838f(%ebx),%eax
08745d88 +0x2d8:  movl   $0xc,0x8(%esp)
08745d90 +0x2e0:  mov    %eax,0x4(%esp)
08745d94 +0x2e4:  mov    %esi,(%esp)
08745d97 +0x2e7:  call   0807e8c0 <_init+0x11b8>
08745d9c +0x2ec:  test   %eax,%eax
08745d9e +0x2ee:  je     08745f92 <+0x4e2>
08745da4 +0x2f4:  lea    -0x668383(%ebx),%eax
08745daa +0x2fa:  movl   $0xc,0x8(%esp)
08745db2 +0x302:  mov    %eax,0x4(%esp)
08745db6 +0x306:  mov    %esi,(%esp)
08745db9 +0x309:  call   0807e8c0 <_init+0x11b8>
08745dbe +0x30e:  test   %eax,%eax
08745dc0 +0x310:  jne    08745f43 <+0x493>
08745dc6 +0x316:  movb   $0x0,0x4(%esp)
08745dcb +0x31b:  movl   $0x8,(%esp)
08745dd2 +0x322:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
08745dd7 +0x327:  movl   $0x20,0x4(%esp)
08745ddf +0x32f:  mov    %eax,%esi
08745de1 +0x331:  mov    %esi,(%esp)
08745de4 +0x334:  call   087985e0 <_ZN5yaSSL3AESC1Ej>  ; yaSSL::AES::AES(unsigned int)
08745de9 +0x339:  mov    %esi,%eax
08745deb +0x33b:  cmp    -0x1c(%ebp),%eax
08745dee +0x33e:  lea    -0x1c(%ebp),%esi
08745df1 +0x341:  je     08745e0a <+0x35a>
08745df3 +0x343:  mov    %eax,-0x150(%ebp)
08745df9 +0x349:  mov    %esi,(%esp)
08745dfc +0x34c:  call   087464a0 <yaDH_free+0xf0>
08745e01 +0x351:  mov    -0x150(%ebp),%eax
08745e07 +0x357:  mov    %eax,-0x1c(%ebp)
08745e0a +0x35a:  mov    -0x13c(%ebp),%ecx
08745e10 +0x360:  mov    (%eax),%edx
08745e12 +0x362:  mov    %eax,(%esp)
08745e15 +0x365:  mov    %ecx,0x8(%esp)
08745e19 +0x369:  mov    -0x144(%ebp),%ecx
08745e1f +0x36f:  mov    %ecx,0x4(%esp)
08745e23 +0x373:  call   *0xc(%edx)
08745e26 +0x376:  mov    -0x140(%ebp),%edx
08745e2c +0x37c:  mov    (%edx),%eax
08745e2e +0x37e:  mov    %eax,(%esp)
08745e31 +0x381:  call   087973d0 <_ZNK5yaSSL4x50910get_lengthEv>  ; yaSSL::x509::get_length() const
08745e36 +0x386:  movb   $0x0,0x4(%esp)
08745e3b +0x38b:  movl   $0x8,(%esp)
08745e42 +0x392:  mov    %eax,-0x150(%ebp)
08745e48 +0x398:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
08745e4d +0x39d:  mov    -0x150(%ebp),%edx
08745e53 +0x3a3:  mov    %edx,0x4(%esp)
08745e57 +0x3a7:  mov    %eax,(%esp)
08745e5a +0x3aa:  mov    %eax,-0x154(%ebp)
08745e60 +0x3b0:  call   08797750 <_ZN5yaSSL4x509C1Ej>  ; yaSSL::x509::x509(unsigned int)
08745e65 +0x3b5:  mov    -0x1c(%ebp),%edx
08745e68 +0x3b8:  mov    (%edx),%eax
08745e6a +0x3ba:  mov    %edx,-0x150(%ebp)
08745e70 +0x3c0:  mov    0x4(%eax),%eax
08745e73 +0x3c3:  mov    %eax,-0x148(%ebp)
08745e79 +0x3c9:  mov    -0x140(%ebp),%eax
08745e7f +0x3cf:  mov    (%eax),%eax
08745e81 +0x3d1:  mov    %eax,(%esp)
08745e84 +0x3d4:  call   087973d0 <_ZNK5yaSSL4x50910get_lengthEv>  ; yaSSL::x509::get_length() const
08745e89 +0x3d9:  mov    %eax,-0x144(%ebp)
08745e8f +0x3df:  mov    -0x140(%ebp),%eax
08745e95 +0x3e5:  mov    (%eax),%eax
08745e97 +0x3e7:  mov    %eax,(%esp)
08745e9a +0x3ea:  call   087973e0 <_ZNK5yaSSL4x50910get_bufferEv>  ; yaSSL::x509::get_buffer() const
08745e9f +0x3ef:  mov    -0x154(%ebp),%ecx
08745ea5 +0x3f5:  mov    %ecx,(%esp)
08745ea8 +0x3f8:  mov    %eax,-0x13c(%ebp)
08745eae +0x3fe:  call   087973f0 <_ZN5yaSSL4x50910use_bufferEv>  ; yaSSL::x509::use_buffer()
08745eb3 +0x403:  mov    -0x150(%ebp),%edx
08745eb9 +0x409:  mov    %edx,(%esp)
08745ebc +0x40c:  mov    %eax,0x4(%esp)
08745ec0 +0x410:  mov    -0x144(%ebp),%eax
08745ec6 +0x416:  mov    %eax,0xc(%esp)
08745eca +0x41a:  mov    -0x13c(%ebp),%eax
08745ed0 +0x420:  mov    %eax,0x8(%esp)
08745ed4 +0x424:  call   *-0x148(%ebp)
08745eda +0x42a:  mov    -0x140(%ebp),%edx
08745ee0 +0x430:  mov    (%edx),%eax
08745ee2 +0x432:  mov    %eax,(%esp)
08745ee5 +0x435:  call   087465e0 <yaDH_free+0x230>
08745eea +0x43a:  mov    -0x154(%ebp),%ecx
08745ef0 +0x440:  mov    -0x140(%ebp),%eax
08745ef6 +0x446:  mov    %ecx,(%eax)
08745ef8 +0x448:  movl   $0x0,(%esp)
08745eff +0x44f:  call   087465e0 <yaDH_free+0x230>
08745f04 +0x454:  mov    %esi,(%esp)
08745f07 +0x457:  call   087464a0 <yaDH_free+0xf0>
08745f0c +0x45c:  mov    -0x3c(%ebp),%eax
08745f0f +0x45f:  mov    %eax,0x8(%esp)
08745f13 +0x463:  mov    -0x38(%ebp),%eax
08745f16 +0x466:  mov    %eax,0x4(%esp)
08745f1a +0x46a:  lea    -0x34(%ebp),%eax
08745f1d +0x46d:  mov    %eax,(%esp)
08745f20 +0x470:  call   08746590 <yaDH_free+0x1e0>
08745f25 +0x475:  mov    -0x50(%ebp),%eax
08745f28 +0x478:  mov    %eax,0x8(%esp)
08745f2c +0x47c:  mov    -0x4c(%ebp),%eax
08745f2f +0x47f:  mov    %eax,0x4(%esp)
08745f33 +0x483:  lea    -0x48(%ebp),%eax
08745f36 +0x486:  mov    %eax,(%esp)
08745f39 +0x489:  call   08746590 <yaDH_free+0x1e0>
08745f3e +0x48e:  jmp    08745b85 <+0xd5>
08745f43 +0x493:  mov    %edi,(%esp)
08745f46 +0x496:  call   0807dea0 <_init+0x798>
08745f4b +0x49b:  lea    -0x1c(%ebp),%eax
08745f4e +0x49e:  mov    %eax,(%esp)
08745f51 +0x4a1:  call   087464a0 <yaDH_free+0xf0>
08745f56 +0x4a6:  mov    -0x3c(%ebp),%eax
08745f59 +0x4a9:  mov    %eax,0x8(%esp)
08745f5d +0x4ad:  mov    -0x38(%ebp),%eax
08745f60 +0x4b0:  mov    %eax,0x4(%esp)
08745f64 +0x4b4:  lea    -0x34(%ebp),%eax
08745f67 +0x4b7:  mov    %eax,(%esp)
08745f6a +0x4ba:  call   08746590 <yaDH_free+0x1e0>
08745f6f +0x4bf:  mov    -0x50(%ebp),%eax
08745f72 +0x4c2:  mov    %eax,0x8(%esp)
08745f76 +0x4c6:  mov    -0x4c(%ebp),%eax
08745f79 +0x4c9:  mov    %eax,0x4(%esp)
08745f7d +0x4cd:  lea    -0x48(%ebp),%eax
08745f80 +0x4d0:  mov    %eax,(%esp)
08745f83 +0x4d3:  call   08746590 <yaDH_free+0x1e0>
08745f88 +0x4d8:  mov    $0xfffffffc,%eax
08745f8d +0x4dd:  jmp    08745ae3 <+0x33>
08745f92 +0x4e2:  movb   $0x0,0x4(%esp)
08745f97 +0x4e7:  movl   $0x8,(%esp)
08745f9e +0x4ee:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
08745fa3 +0x4f3:  movl   $0x18,0x4(%esp)
08745fab +0x4fb:  mov    %eax,%esi
08745fad +0x4fd:  jmp    08745de1 <+0x331>
08745fb2 +0x502:  movb   $0x0,0x4(%esp)
08745fb7 +0x507:  movl   $0x8,(%esp)
08745fbe +0x50e:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
08745fc3 +0x513:  movl   $0x10,0x4(%esp)
08745fcb +0x51b:  mov    %eax,%esi
08745fcd +0x51d:  jmp    08745de1 <+0x331>
08745fd2 +0x522:  movb   $0x0,0x4(%esp)
08745fd7 +0x527:  movl   $0x8,(%esp)
08745fde +0x52e:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
08745fe3 +0x533:  mov    %eax,%esi
08745fe5 +0x535:  mov    %eax,(%esp)
08745fe8 +0x538:  call   087986e0 <_ZN5yaSSL7DES_EDEC1Ev>  ; yaSSL::DES_EDE::DES_EDE()
08745fed +0x53d:  mov    %esi,%eax
08745fef +0x53f:  cmp    -0x1c(%ebp),%eax
08745ff2 +0x542:  lea    -0x1c(%ebp),%esi
08745ff5 +0x545:  jne    08745df3 <+0x343>
08745ffb +0x54b:  jmp    08745e0a <+0x35a>
08746000 +0x550:  movb   $0x0,0x4(%esp)
08746005 +0x555:  movl   $0x8,(%esp)
0874600c +0x55c:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
08746011 +0x561:  mov    %eax,%esi
08746013 +0x563:  mov    %eax,(%esp)
08746016 +0x566:  call   08798790 <_ZN5yaSSL3DESC1Ev>  ; yaSSL::DES::DES()
0874601b +0x56b:  mov    %esi,%eax
0874601d +0x56d:  cmp    -0x1c(%ebp),%eax
08746020 +0x570:  lea    -0x1c(%ebp),%esi
08746023 +0x573:  jne    08745df3 <+0x343>
08746029 +0x579:  jmp    08745e0a <+0x35a>
0874602e +0x57e:  movl   $0x2,0x8(%esp)
08746036 +0x586:  movl   $0x0,0x4(%esp)
0874603e +0x58e:  mov    %edi,(%esp)
08746041 +0x591:  call   0807e0b0 <_init+0x9a8>
08746046 +0x596:  mov    %edi,(%esp)
08746049 +0x599:  call   0807d9d0 <_init+0x2c8>
0874604e +0x59e:  mov    %edi,(%esp)
08746051 +0x5a1:  mov    %eax,%esi
08746053 +0x5a3:  call   0807dd10 <_init+0x608>
08746058 +0x5a8:  movb   $0x0,0x4(%esp)
0874605d +0x5ad:  movl   $0x8,(%esp)
08746064 +0x5b4:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
08746069 +0x5b9:  mov    %esi,0x4(%esp)
0874606d +0x5bd:  mov    %eax,(%esp)
08746070 +0x5c0:  mov    %eax,-0x150(%ebp)
08746076 +0x5c6:  call   08797750 <_ZN5yaSSL4x509C1Ej>  ; yaSSL::x509::x509(unsigned int)
0874607b +0x5cb:  mov    -0x150(%ebp),%eax
08746081 +0x5d1:  mov    -0x140(%ebp),%edx
08746087 +0x5d7:  mov    %eax,(%edx)
08746089 +0x5d9:  mov    %eax,(%esp)
0874608c +0x5dc:  call   087973f0 <_ZN5yaSSL4x50910use_bufferEv>  ; yaSSL::x509::use_buffer()
08746091 +0x5e1:  mov    %edi,0xc(%esp)
08746095 +0x5e5:  movl   $0x1,0x8(%esp)
0874609d +0x5ed:  mov    %esi,0x4(%esp)
087460a1 +0x5f1:  mov    %eax,(%esp)
087460a4 +0x5f4:  call   0807dd50 <_init+0x648>
087460a9 +0x5f9:  cmp    $0x1,%eax
087460ac +0x5fc:  je     08745b85 <+0xd5>
087460b2 +0x602:  jmp    08745bce <+0x11e>
087460b7 +0x607:  mov    %esi,%esi
087460b9 +0x609:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::read_file @ 0x8745ab0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::read_file(yaSSL::SSL_CTX*, char const*, int, yaSSL::CertType) */

undefined4 yaSSL::read_file(SSL_CTX *param_1,char *param_2,int param_3,int param_4)

{
  FILE *__stream;
  SSL_CTX *pSVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  DES_EDE *pDVar5;
  x509 *pxVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  void *__ptr;
  size_t sVar9;
  char *pcVar10;
  undefined1 *puVar11;
  uint uVar12;
  undefined1 *puVar13;
  uint uVar14;
  char local_13c [80];
  undefined1 local_ec [32];
  size_t local_cc;
  char local_c8;
  undefined1 local_c4 [80];
  undefined1 local_74 [32];
  size_t local_54;
  void *local_50;
  AllocatorWithCleanup<unsigned_char> local_4c [4];
  undefined4 local_48;
  undefined4 local_44;
  uint local_40;
  void *local_3c;
  AllocatorWithCleanup<unsigned_char> local_38 [4];
  size_t *local_34;
  undefined1 local_30 [16];
  DES_EDE *local_20 [4];
  
  if (1 < param_3 - 10U) {
    return 0xfffffffb;
  }
  if (((param_2 == (char *)0x0) || (*param_2 == '\0')) ||
     (__stream = fopen(param_2,"rb"), __stream == (FILE *)0x0)) {
    return 0xfffffffc;
  }
  if (param_4 == 2) {
    while (pxVar6 = (x509 *)PemToDer(__stream,0,0), pxVar6 != (x509 *)0x0) {
      SSL_CTX::AddCA(param_1,pxVar6);
    }
    iVar2 = feof(__stream);
    if (iVar2 == 0) goto LAB_08745bce;
    goto LAB_08745b85;
  }
  pSVar1 = param_1 + 8;
  if (param_4 == 0) {
    pSVar1 = param_1 + 4;
  }
  if (param_3 == 10) {
    uVar14 = 0;
    fseek(__stream,0,2);
    uVar12 = ftell(__stream);
    rewind(__stream);
    pxVar6 = operator_new(8,uVar14 & 0xffffff00);
    x509::x509(pxVar6,uVar12);
    *(x509 **)pSVar1 = pxVar6;
    __ptr = (void *)x509::use_buffer(pxVar6);
    sVar9 = fread(__ptr,uVar12,1,__stream);
    if (sVar9 == 1) goto LAB_08745b85;
LAB_08745bce:
    fclose(__stream);
    return 0xfffffffc;
  }
  local_cc = 0;
  local_c8 = '\0';
  iVar2 = PemToDer(__stream,param_4,local_13c);
  *(int *)pSVar1 = iVar2;
  if (iVar2 == 0) goto LAB_08745bce;
  if (local_c8 == '\0') goto LAB_08745b85;
  pcVar3 = (code *)SSL_CTX::GetPasswordCb(param_1);
  if (pcVar3 == (code *)0x0) goto LAB_08745bce;
  uVar4 = SSL_CTX::GetUserData(param_1);
  uVar12 = 0;
  uVar4 = (*pcVar3)(local_c4,0x50,0,uVar4);
  local_54 = local_cc;
  local_50 = (void *)0x0;
  if (local_cc != 0) {
    local_50 = operator_new__(local_cc,uVar12 & 0xffffff00);
  }
  memcpy(local_50,local_ec,local_54);
  local_34 = &local_54;
  local_48 = 0;
  local_44 = 0;
  local_3c = (void *)0x0;
  local_40 = 0;
  TaoCrypt::HexDecoder::Decode((HexDecoder *)&local_40);
  sVar9 = 0x20;
  if (local_54 < 0x21) {
    sVar9 = local_54;
  }
  memcpy(local_ec,local_50,sVar9);
  puVar13 = local_74;
  yaEVP_BytesToKey(local_13c,&DAT_08d04d9b,local_ec,local_c4,uVar4,1,puVar13,local_30);
  pcVar10 = "DES-CBC";
  local_20[0] = (DES_EDE *)0x0;
  iVar2 = strncmp(local_13c,"DES-CBC",7);
  if (iVar2 == 0) {
    pDVar5 = operator_new(8,(uint)pcVar10 & 0xffffff00);
    DES::DES((DES *)pDVar5);
    if (pDVar5 != local_20[0]) goto LAB_08745df3;
  }
  else {
    puVar11 = &DAT_08d047f0;
    iVar2 = strncmp(local_13c,"DES-EDE3-CBC",0xd);
    if (iVar2 == 0) {
      pDVar5 = operator_new(8,(uint)puVar11 & 0xffffff00);
      DES_EDE::DES_EDE(pDVar5);
      if (pDVar5 != local_20[0]) goto LAB_08745df3;
    }
    else {
      puVar11 = &DAT_08d047fd;
      iVar2 = strncmp(local_13c,"AES-128-CBC",0xc);
      if (iVar2 == 0) {
        pDVar5 = operator_new(8,(uint)puVar11 & 0xffffff00);
        uVar12 = 0x10;
      }
      else {
        puVar11 = &DAT_08d04809;
        iVar2 = strncmp(local_13c,"AES-192-CBC",0xc);
        if (iVar2 == 0) {
          pDVar5 = operator_new(8,(uint)puVar11 & 0xffffff00);
          uVar12 = 0x18;
        }
        else {
          pcVar10 = "AES-256-CBC";
          iVar2 = strncmp(local_13c,"AES-256-CBC",0xc);
          if (iVar2 != 0) {
            fclose(__stream);
            mySTL::auto_ptr<yaSSL::BulkCipher>::Destroy((auto_ptr<yaSSL::BulkCipher> *)local_20);
            TaoCrypt::AllocatorWithCleanup<unsigned_char>::deallocate(local_38,local_3c,local_40);
            TaoCrypt::AllocatorWithCleanup<unsigned_char>::deallocate(local_4c,local_50,local_54);
            return 0xfffffffc;
          }
          pDVar5 = operator_new(8,(uint)pcVar10 & 0xffffff00);
          uVar12 = 0x20;
        }
      }
      AES::AES((AES *)pDVar5,uVar12);
      if (pDVar5 != local_20[0]) {
LAB_08745df3:
        mySTL::auto_ptr<yaSSL::BulkCipher>::Destroy((auto_ptr<yaSSL::BulkCipher> *)local_20);
        local_20[0] = pDVar5;
      }
    }
  }
  (**(code **)(*(int *)pDVar5 + 0xc))(pDVar5,puVar13,local_ec);
  uVar12 = x509::get_length(*(x509 **)pSVar1);
  pxVar6 = operator_new(8,(uint)puVar13 & 0xffffff00);
  x509::x509(pxVar6,uVar12);
  pDVar5 = local_20[0];
  pcVar3 = *(code **)(*(int *)local_20[0] + 4);
  uVar4 = x509::get_length(*(x509 **)pSVar1);
  uVar7 = x509::get_buffer(*(x509 **)pSVar1);
  uVar8 = x509::use_buffer(pxVar6);
  (*pcVar3)(pDVar5,uVar8,uVar7,uVar4);
  ysDelete<yaSSL::x509>(*(x509 **)pSVar1);
  *(x509 **)pSVar1 = pxVar6;
  ysDelete<yaSSL::x509>((x509 *)0x0);
  mySTL::auto_ptr<yaSSL::BulkCipher>::Destroy((auto_ptr<yaSSL::BulkCipher> *)local_20);
  TaoCrypt::AllocatorWithCleanup<unsigned_char>::deallocate(local_38,local_3c,local_40);
  TaoCrypt::AllocatorWithCleanup<unsigned_char>::deallocate(local_4c,local_50,local_54);
LAB_08745b85:
  fclose(__stream);
  return 1;
}
```
