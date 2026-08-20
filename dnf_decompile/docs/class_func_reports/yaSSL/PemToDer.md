# PemToDer

`_ZN5yaSSL8PemToDerEP8_IO_FILENS_8CertTypeEPNS_13EncryptedInfoE`

`yaSSL::PemToDer(_IO_FILE*, yaSSL::CertType, yaSSL::EncryptedInfo*)`

| 类 | 地址 |
|---|---|
| `yaSSL` | `0x0879bcb0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0879bcb0  _ZN5yaSSL8PemToDerEP8_IO_FILENS_8CertTypeEPNS_13EncryptedInfoE
#           yaSSL::PemToDer(_IO_FILE*, yaSSL::CertType, yaSSL::EncryptedInfo*)
# range [0x0879bcb0, 0x0879cd3f]
0879bcb0 +0x0000:  push   %ebp
0879bcb1 +0x0001:  mov    %esp,%ebp
0879bcb3 +0x0003:  push   %edi
0879bcb4 +0x0004:  push   %esi
0879bcb5 +0x0005:  push   %ebx
0879bcb6 +0x0006:  sub    $0x16c,%esp
0879bcbc +0x000c:  mov    0xc(%ebp),%ecx
0879bcbf +0x000f:  call   08722df8 <__i686.get_pc_thunk.bx>
0879bcc4 +0x0014:  add    $0xbd0ed4,%ebx
0879bcca +0x001a:  mov    0x8(%ebp),%esi
0879bccd +0x001d:  test   %ecx,%ecx
0879bccf +0x001f:  jne    0879beb0 <+0x200>
0879bcd5 +0x0025:  lea    -0x65f7de(%ebx),%eax
0879bcdb +0x002b:  mov    %eax,0x4(%esp)
0879bcdf +0x002f:  lea    -0xa8(%ebp),%eax
0879bce5 +0x0035:  movl   $0x50,0x8(%esp)
0879bced +0x003d:  lea    -0x148(%ebp),%edi
0879bcf3 +0x0043:  mov    %eax,-0x14c(%ebp)
0879bcf9 +0x0049:  mov    %eax,(%esp)
0879bcfc +0x004c:  call   0807d8d0 <_init+0x1c8>
0879bd01 +0x0051:  lea    -0xf8(%ebp),%edx
0879bd07 +0x0057:  lea    -0x65f7c2(%ebx),%eax
0879bd0d +0x005d:  movl   $0x50,0x8(%esp)
0879bd15 +0x0065:  mov    %eax,0x4(%esp)
0879bd19 +0x0069:  mov    %edx,-0x150(%ebp)
0879bd1f +0x006f:  mov    %edx,(%esp)
0879bd22 +0x0072:  call   0807d8d0 <_init+0x1c8>
0879bd27 +0x0077:  nop
0879bd28 +0x0078:  mov    %esi,0x8(%esp)
0879bd2c +0x007c:  movl   $0x50,0x4(%esp)
0879bd34 +0x0084:  mov    %edi,(%esp)
0879bd37 +0x0087:  call   0807e260 <_init+0xb58>
0879bd3c +0x008c:  test   %eax,%eax
0879bd3e +0x008e:  je     0879bfc8 <+0x318>
0879bd44 +0x0094:  mov    -0x14c(%ebp),%edx
0879bd4a +0x009a:  mov    (%edx),%ecx
0879bd4c +0x009c:  add    $0x4,%edx
0879bd4f +0x009f:  lea    -0x1010101(%ecx),%eax
0879bd55 +0x00a5:  not    %ecx
0879bd57 +0x00a7:  and    %ecx,%eax
0879bd59 +0x00a9:  and    $0x80808080,%eax
0879bd5e +0x00ae:  je     0879bd4a <+0x9a>
0879bd60 +0x00b0:  mov    %eax,%ecx
0879bd62 +0x00b2:  shr    $0x10,%ecx
0879bd65 +0x00b5:  test   $0x8080,%eax
0879bd6a +0x00ba:  cmove  %ecx,%eax
0879bd6d +0x00bd:  lea    0x2(%edx),%ecx
0879bd70 +0x00c0:  cmove  %ecx,%edx
0879bd73 +0x00c3:  add    %al,%al
0879bd75 +0x00c5:  sbb    $0x3,%edx
0879bd78 +0x00c8:  sub    -0x14c(%ebp),%edx
0879bd7e +0x00ce:  mov    %edi,0x4(%esp)
0879bd82 +0x00d2:  mov    %edx,0x8(%esp)
0879bd86 +0x00d6:  mov    -0x14c(%ebp),%edx
0879bd8c +0x00dc:  mov    %edx,(%esp)
0879bd8f +0x00df:  call   0807e8c0 <_init+0x11b8>
0879bd94 +0x00e4:  test   %eax,%eax
0879bd96 +0x00e6:  jne    0879bd28 <+0x78>
0879bd98 +0x00e8:  mov    %esi,(%esp)
0879bd9b +0x00eb:  call   0807d9d0 <_init+0x2c8>
0879bda0 +0x00f0:  mov    %eax,-0x154(%ebp)
0879bda6 +0x00f6:  mov    %esi,0x8(%esp)
0879bdaa +0x00fa:  movl   $0x50,0x4(%esp)
0879bdb2 +0x0102:  mov    %edi,(%esp)
0879bdb5 +0x0105:  call   0807e260 <_init+0xb58>
0879bdba +0x010a:  test   %eax,%eax
0879bdbc +0x010c:  je     0879be01 <+0x151>
0879bdbe +0x010e:  lea    -0x22(%ebp),%edx
0879bdc1 +0x0111:  mov    %edx,(%esp)
0879bdc4 +0x0114:  mov    %edx,-0x158(%ebp)
0879bdca +0x011a:  movl   $0x636f7250,-0x22(%ebp)
0879bdd1 +0x0121:  movl   $0x7079542d,-0x1e(%ebp)
0879bdd8 +0x0128:  movw   $0x65,-0x1a(%ebp)
0879bdde +0x012e:  call   0807e3b0 <_init+0xca8>
0879bde3 +0x0133:  mov    -0x158(%ebp),%edx
0879bde9 +0x0139:  mov    %edi,0x4(%esp)
0879bded +0x013d:  mov    %edx,(%esp)
0879bdf0 +0x0140:  mov    %eax,0x8(%esp)
0879bdf4 +0x0144:  call   0807e8c0 <_init+0x11b8>
0879bdf9 +0x0149:  test   %eax,%eax
0879bdfb +0x014b:  je     0879bf20 <+0x270>
0879be01 +0x0151:  movl   $0x0,-0x14c(%ebp)
0879be0b +0x015b:  jmp    0879be76 <+0x1c6>
0879be0d +0x015d:  lea    0x0(%esi),%esi
0879be10 +0x0160:  mov    -0x150(%ebp),%edx
0879be16 +0x0166:  mov    (%edx),%ecx
0879be18 +0x0168:  add    $0x4,%edx
0879be1b +0x016b:  lea    -0x1010101(%ecx),%eax
0879be21 +0x0171:  not    %ecx
0879be23 +0x0173:  and    %ecx,%eax
0879be25 +0x0175:  and    $0x80808080,%eax
0879be2a +0x017a:  je     0879be16 <+0x166>
0879be2c +0x017c:  mov    %eax,%ecx
0879be2e +0x017e:  shr    $0x10,%ecx
0879be31 +0x0181:  test   $0x8080,%eax
0879be36 +0x0186:  cmove  %ecx,%eax
0879be39 +0x0189:  lea    0x2(%edx),%ecx
0879be3c +0x018c:  cmove  %ecx,%edx
0879be3f +0x018f:  add    %al,%al
0879be41 +0x0191:  mov    -0x150(%ebp),%ecx
0879be47 +0x0197:  sbb    $0x3,%edx
0879be4a +0x019a:  sub    -0x150(%ebp),%edx
0879be50 +0x01a0:  mov    %edi,0x4(%esp)
0879be54 +0x01a4:  mov    %ecx,(%esp)
0879be57 +0x01a7:  mov    %edx,0x8(%esp)
0879be5b +0x01ab:  call   0807e8c0 <_init+0x11b8>
0879be60 +0x01b0:  test   %eax,%eax
0879be62 +0x01b2:  je     0879bf08 <+0x258>
0879be68 +0x01b8:  mov    %esi,(%esp)
0879be6b +0x01bb:  call   0807d9d0 <_init+0x2c8>
0879be70 +0x01c0:  mov    %eax,-0x14c(%ebp)
0879be76 +0x01c6:  mov    %esi,0x8(%esp)
0879be7a +0x01ca:  movl   $0x50,0x4(%esp)
0879be82 +0x01d2:  mov    %edi,(%esp)
0879be85 +0x01d5:  call   0807e260 <_init+0xb58>
0879be8a +0x01da:  test   %eax,%eax
0879be8c +0x01dc:  jne    0879be10 <+0x160>
0879be8e +0x01de:  cmpl   $0xffffffff,-0x154(%ebp)
0879be95 +0x01e5:  jne    0879bfd8 <+0x328>
0879be9b +0x01eb:  xor    %esi,%esi
0879be9d +0x01ed:  add    $0x16c,%esp
0879bea3 +0x01f3:  mov    %esi,%eax
0879bea5 +0x01f5:  pop    %ebx
0879bea6 +0x01f6:  pop    %esi
0879bea7 +0x01f7:  pop    %edi
0879bea8 +0x01f8:  pop    %ebp
0879bea9 +0x01f9:  ret
0879beaa +0x01fa:  lea    0x0(%esi),%esi
0879beb0 +0x0200:  lea    -0xa8(%ebp),%ecx
0879beb6 +0x0206:  lea    -0x65f784(%ebx),%eax
0879bebc +0x020c:  mov    %ecx,-0x14c(%ebp)
0879bec2 +0x0212:  lea    -0x148(%ebp),%edi
0879bec8 +0x0218:  mov    %ecx,(%esp)
0879becb +0x021b:  movl   $0x50,0x8(%esp)
0879bed3 +0x0223:  mov    %eax,0x4(%esp)
0879bed7 +0x0227:  call   0807d8d0 <_init+0x1c8>
0879bedc +0x022c:  lea    -0x65f7a8(%ebx),%eax
0879bee2 +0x0232:  mov    %eax,0x4(%esp)
0879bee6 +0x0236:  lea    -0xf8(%ebp),%eax
0879beec +0x023c:  movl   $0x50,0x8(%esp)
0879bef4 +0x0244:  mov    %eax,-0x150(%ebp)
0879befa +0x024a:  mov    %eax,(%esp)
0879befd +0x024d:  call   0807d8d0 <_init+0x1c8>
0879bf02 +0x0252:  jmp    0879bd28 <+0x78>
0879bf07 +0x0257:  nop
0879bf08 +0x0258:  cmpl   $0xffffffff,-0x154(%ebp)
0879bf0f +0x025f:  mov    $0x1,%eax
0879bf14 +0x0264:  je     0879be9b <+0x1eb>
0879bf16 +0x0266:  jmp    0879bfd8 <+0x328>
0879bf1b +0x026b:  nop
0879bf1c +0x026c:  lea    0x0(%esi,%eiz,1),%esi
0879bf20 +0x0270:  mov    %esi,0x8(%esp)
0879bf24 +0x0274:  movl   $0x50,0x4(%esp)
0879bf2c +0x027c:  mov    %edi,(%esp)
0879bf2f +0x027f:  call   0807e260 <_init+0xb58>
0879bf34 +0x0284:  test   %eax,%eax
0879bf36 +0x0286:  je     0879be01 <+0x151>
0879bf3c +0x028c:  lea    -0x5889f9(%ebx),%eax
0879bf42 +0x0292:  mov    %eax,0x4(%esp)
0879bf46 +0x0296:  mov    %edi,(%esp)
0879bf49 +0x0299:  call   0807dac0 <_init+0x3b8>
0879bf4e +0x029e:  movl   $0x2c,0x4(%esp)
0879bf56 +0x02a6:  mov    %edi,(%esp)
0879bf59 +0x02a9:  mov    %eax,-0x158(%ebp)
0879bf5f +0x02af:  call   0807e580 <_init+0xe78>
0879bf64 +0x02b4:  mov    -0x158(%ebp),%ecx
0879bf6a +0x02ba:  test   %ecx,%ecx
0879bf6c +0x02bc:  mov    %eax,-0x14c(%ebp)
0879bf72 +0x02c2:  je     0879c059 <+0x3a9>
0879bf78 +0x02c8:  mov    0x10(%ebp),%edx
0879bf7b +0x02cb:  test   %edx,%edx
0879bf7d +0x02cd:  je     0879be9b <+0x1eb>
0879bf83 +0x02d3:  test   %ecx,%ecx
0879bf85 +0x02d5:  je     0879bf9d <+0x2ed>
0879bf87 +0x02d7:  mov    -0x14c(%ebp),%eax
0879bf8d +0x02dd:  test   %eax,%eax
0879bf8f +0x02df:  je     0879bf9d <+0x2ed>
0879bf91 +0x02e1:  cmp    -0x14c(%ebp),%ecx
0879bf97 +0x02e7:  jb     0879c072 <+0x3c2>
0879bf9d +0x02ed:  mov    %esi,0x8(%esp)
0879bfa1 +0x02f1:  movl   $0x50,0x4(%esp)
0879bfa9 +0x02f9:  mov    %edi,(%esp)
0879bfac +0x02fc:  call   0807e260 <_init+0xb58>
0879bfb1 +0x0301:  mov    %esi,(%esp)
0879bfb4 +0x0304:  call   0807d9d0 <_init+0x2c8>
0879bfb9 +0x0309:  mov    %eax,-0x154(%ebp)
0879bfbf +0x030f:  jmp    0879be01 <+0x151>
0879bfc4 +0x0314:  lea    0x0(%esi,%eiz,1),%esi
0879bfc8 +0x0318:  movl   $0xffffffff,-0x154(%ebp)
0879bfd2 +0x0322:  jmp    0879bda6 <+0xf6>
0879bfd7 +0x0327:  nop
0879bfd8 +0x0328:  test   %al,%al
0879bfda +0x032a:  je     0879be9b <+0x1eb>
0879bfe0 +0x0330:  mov    -0x14c(%ebp),%eax
0879bfe6 +0x0336:  lea    -0x34(%ebp),%edi
0879bfe9 +0x0339:  sub    -0x154(%ebp),%eax
0879bfef +0x033f:  mov    %edi,(%esp)
0879bff2 +0x0342:  mov    %eax,-0x14c(%ebp)
0879bff8 +0x0348:  mov    %eax,0x4(%esp)
0879bffc +0x034c:  call   087972e0 <_ZN5yaSSL12input_bufferC1Ej>  ; yaSSL::input_buffer::input_buffer(unsigned int)
0879c001 +0x0351:  mov    -0x154(%ebp),%edx
0879c007 +0x0357:  mov    %esi,(%esp)
0879c00a +0x035a:  movl   $0x0,0x8(%esp)
0879c012 +0x0362:  mov    %edx,0x4(%esp)
0879c016 +0x0366:  call   0807e0b0 <_init+0x9a8>
0879c01b +0x036b:  mov    %edi,(%esp)
0879c01e +0x036e:  call   08796d30 <_ZNK5yaSSL12input_buffer10get_bufferEv>  ; yaSSL::input_buffer::get_buffer() const
0879c023 +0x0373:  mov    -0x14c(%ebp),%ecx
0879c029 +0x0379:  mov    %esi,0xc(%esp)
0879c02d +0x037d:  xor    %esi,%esi
0879c02f +0x037f:  movl   $0x1,0x8(%esp)
0879c037 +0x0387:  mov    %ecx,0x4(%esp)
0879c03b +0x038b:  mov    %eax,(%esp)
0879c03e +0x038e:  call   0807dd50 <_init+0x648>
0879c043 +0x0393:  cmp    $0x1,%eax
0879c046 +0x0396:  je     0879c13a <+0x48a>
0879c04c +0x039c:  mov    %edi,(%esp)
0879c04f +0x039f:  call   08797360 <_ZN5yaSSL12input_bufferD1Ev>  ; yaSSL::input_buffer::~input_buffer()
0879c054 +0x03a4:  jmp    0879be9d <+0x1ed>
0879c059 +0x03a9:  lea    -0x65f78a(%ebx),%eax
0879c05f +0x03af:  mov    %eax,0x4(%esp)
0879c063 +0x03b3:  mov    %edi,(%esp)
0879c066 +0x03b6:  call   0807dac0 <_init+0x3b8>
0879c06b +0x03bb:  mov    %eax,%ecx
0879c06d +0x03bd:  jmp    0879bf78 <+0x2c8>
0879c072 +0x03c2:  mov    -0x14c(%ebp),%edx
0879c078 +0x03c8:  mov    %ecx,0x4(%esp)
0879c07c +0x03cc:  sub    %ecx,%edx
0879c07e +0x03ce:  mov    0x10(%ebp),%ecx
0879c081 +0x03d1:  mov    %edx,0x8(%esp)
0879c085 +0x03d5:  mov    %edx,-0x158(%ebp)
0879c08b +0x03db:  mov    %ecx,(%esp)
0879c08e +0x03de:  call   0807d8a0 <_init+0x198>
0879c093 +0x03e3:  mov    -0x158(%ebp),%edx
0879c099 +0x03e9:  mov    0x10(%ebp),%eax
0879c09c +0x03ec:  movb   $0x0,(%eax,%edx,1)
0879c0a0 +0x03f0:  mov    -0x14c(%ebp),%ecx
0879c0a6 +0x03f6:  add    $0x50,%eax
0879c0a9 +0x03f9:  mov    -0x14c(%ebp),%edx
0879c0af +0x03ff:  mov    %eax,-0x154(%ebp)
0879c0b5 +0x0405:  mov    0x10(%ebp),%eax
0879c0b8 +0x0408:  mov    0x1(%ecx),%ecx
0879c0bb +0x040b:  add    $0x1,%edx
0879c0be +0x040e:  mov    %ecx,0x50(%eax)
0879c0c1 +0x0411:  mov    0x4(%edx),%ecx
0879c0c4 +0x0414:  mov    -0x154(%ebp),%eax
0879c0ca +0x041a:  mov    %ecx,0x4(%eax)
0879c0cd +0x041d:  mov    0x8(%edx),%ecx
0879c0d0 +0x0420:  mov    %ecx,0x8(%eax)
0879c0d3 +0x0423:  mov    0xc(%edx),%ecx
0879c0d6 +0x0426:  mov    %ecx,0xc(%eax)
0879c0d9 +0x0429:  mov    0x10(%edx),%ecx
0879c0dc +0x042c:  mov    %ecx,0x10(%eax)
0879c0df +0x042f:  mov    0x14(%edx),%ecx
0879c0e2 +0x0432:  mov    %ecx,0x14(%eax)
0879c0e5 +0x0435:  mov    0x18(%edx),%ecx
0879c0e8 +0x0438:  mov    %ecx,0x18(%eax)
0879c0eb +0x043b:  mov    0x1c(%edx),%ecx
0879c0ee +0x043e:  mov    %ecx,0x1c(%eax)
0879c0f1 +0x0441:  movl   $0xd,0x4(%esp)
0879c0f9 +0x0449:  mov    %edi,(%esp)
0879c0fc +0x044c:  mov    %edx,-0x158(%ebp)
0879c102 +0x0452:  call   0807e580 <_init+0xe78>
0879c107 +0x0457:  mov    -0x158(%ebp),%edx
0879c10d +0x045d:  test   %eax,%eax
0879c10f +0x045f:  je     0879c286 <+0x5d6>
0879c115 +0x0465:  cmp    -0x14c(%ebp),%eax
0879c11b +0x046b:  jbe    0879bf9d <+0x2ed>
0879c121 +0x0471:  test   %eax,%eax
0879c123 +0x0473:  je     0879bf9d <+0x2ed>
0879c129 +0x0479:  sub    %edx,%eax
0879c12b +0x047b:  mov    0x10(%ebp),%edx
0879c12e +0x047e:  mov    %eax,0x70(%edx)
0879c131 +0x0481:  movb   $0x1,0x74(%edx)
0879c135 +0x0485:  jmp    0879bf9d <+0x2ed>
0879c13a +0x048a:  mov    %edi,(%esp)
0879c13d +0x048d:  call   08796d30 <_ZNK5yaSSL12input_buffer10get_bufferEv>  ; yaSSL::input_buffer::get_buffer() const
0879c142 +0x0492:  mov    -0x14c(%ebp),%ecx
0879c148 +0x0498:  mov    %eax,%esi
0879c14a +0x049a:  mov    -0x14c(%ebp),%eax
0879c150 +0x04a0:  mov    %eax,-0x58(%ebp)
0879c153 +0x04a3:  xor    %eax,%eax
0879c155 +0x04a5:  test   %ecx,%ecx
0879c157 +0x04a7:  je     0879c16c <+0x4bc>
0879c159 +0x04a9:  mov    -0x14c(%ebp),%edx
0879c15f +0x04af:  movb   $0x0,0x4(%esp)
0879c164 +0x04b4:  mov    %edx,(%esp)
0879c167 +0x04b7:  call   08767790 <_ZnajN8TaoCrypt5new_tE>  ; operator new[](unsigned int, TaoCrypt::new_t)
0879c16c +0x04bc:  mov    -0x58(%ebp),%edx
0879c16f +0x04bf:  mov    %eax,-0x54(%ebp)
0879c172 +0x04c2:  mov    %esi,0x4(%esp)
0879c176 +0x04c6:  mov    %eax,(%esp)
0879c179 +0x04c9:  mov    %edx,0x8(%esp)
0879c17d +0x04cd:  call   0807d8a0 <_init+0x198>
0879c182 +0x04d2:  lea    -0x58(%ebp),%eax
0879c185 +0x04d5:  mov    %eax,-0x38(%ebp)
0879c188 +0x04d8:  lea    -0x44(%ebp),%eax
0879c18b +0x04db:  movl   $0x0,-0x4c(%ebp)
0879c192 +0x04e2:  movl   $0x0,-0x48(%ebp)
0879c199 +0x04e9:  movl   $0x0,-0x40(%ebp)
0879c1a0 +0x04f0:  movl   $0x0,-0x44(%ebp)
0879c1a7 +0x04f7:  mov    %eax,(%esp)
0879c1aa +0x04fa:  call   08756cc0 <_ZN8TaoCrypt13Base64Decoder6DecodeEv>  ; TaoCrypt::Base64Decoder::Decode()
0879c1af +0x04ff:  mov    -0x58(%ebp),%ecx
0879c1b2 +0x0502:  mov    %ecx,-0x150(%ebp)
0879c1b8 +0x0508:  movb   $0x0,0x4(%esp)
0879c1bd +0x050d:  movl   $0x8,(%esp)
0879c1c4 +0x0514:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
0879c1c9 +0x0519:  mov    %eax,%esi
0879c1cb +0x051b:  mov    -0x150(%ebp),%eax
0879c1d1 +0x0521:  mov    %esi,(%esp)
0879c1d4 +0x0524:  mov    %eax,0x4(%esp)
0879c1d8 +0x0528:  call   08797750 <_ZN5yaSSL4x509C1Ej>  ; yaSSL::x509::x509(unsigned int)
0879c1dd +0x052d:  mov    -0x54(%ebp),%edx
0879c1e0 +0x0530:  mov    %esi,(%esp)
0879c1e3 +0x0533:  mov    %edx,-0x158(%ebp)
0879c1e9 +0x0539:  call   087973f0 <_ZN5yaSSL4x50910use_bufferEv>  ; yaSSL::x509::use_buffer()
0879c1ee +0x053e:  mov    -0x150(%ebp),%ecx
0879c1f4 +0x0544:  mov    -0x158(%ebp),%edx
0879c1fa +0x054a:  mov    %ecx,0x8(%esp)
0879c1fe +0x054e:  mov    %edx,0x4(%esp)
0879c202 +0x0552:  mov    %eax,(%esp)
0879c205 +0x0555:  call   0807d8a0 <_init+0x198>
0879c20a +0x055a:  movb   $0x0,0x4(%esp)
0879c20f +0x055f:  movl   $0x0,(%esp)
0879c216 +0x0566:  call   08750820 <_ZdlPvN5yaSSL5new_tE>  ; operator delete(void*, yaSSL::new_t)
0879c21b +0x056b:  mov    -0x40(%ebp),%edx
0879c21e +0x056e:  mov    -0x44(%ebp),%eax
0879c221 +0x0571:  movl   $0x0,0x4(%esp)
0879c229 +0x0579:  mov    %edx,(%esp)
0879c22c +0x057c:  mov    %edx,-0x158(%ebp)
0879c232 +0x0582:  mov    %eax,0x8(%esp)
0879c236 +0x0586:  call   0807dcc0 <_init+0x5b8>
0879c23b +0x058b:  mov    -0x158(%ebp),%edx
0879c241 +0x0591:  movb   $0x0,0x4(%esp)
0879c246 +0x0596:  mov    %edx,(%esp)
0879c249 +0x0599:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
0879c24e +0x059e:  mov    -0x54(%ebp),%edx
0879c251 +0x05a1:  mov    -0x58(%ebp),%eax
0879c254 +0x05a4:  movl   $0x0,0x4(%esp)
0879c25c +0x05ac:  mov    %edx,(%esp)
0879c25f +0x05af:  mov    %edx,-0x158(%ebp)
0879c265 +0x05b5:  mov    %eax,0x8(%esp)
0879c269 +0x05b9:  call   0807dcc0 <_init+0x5b8>
0879c26e +0x05be:  mov    -0x158(%ebp),%edx
0879c274 +0x05c4:  movb   $0x0,0x4(%esp)
0879c279 +0x05c9:  mov    %edx,(%esp)
0879c27c +0x05cc:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
0879c281 +0x05d1:  jmp    0879c04c <+0x39c>
0879c286 +0x05d6:  movl   $0xa,0x4(%esp)
0879c28e +0x05de:  mov    %edi,(%esp)
0879c291 +0x05e1:  call   0807e580 <_init+0xe78>
0879c296 +0x05e6:  mov    -0x158(%ebp),%edx
0879c29c +0x05ec:  jmp    0879c115 <+0x465>
0879c2a1 +0x05f1:  nop
0879c2a2 +0x05f2:  nop
0879c2a3 +0x05f3:  nop
0879c2a4 +0x05f4:  nop
0879c2a5 +0x05f5:  nop
0879c2a6 +0x05f6:  nop
0879c2a7 +0x05f7:  nop
0879c2a8 +0x05f8:  nop
0879c2a9 +0x05f9:  nop
0879c2aa +0x05fa:  nop
0879c2ab +0x05fb:  nop
0879c2ac +0x05fc:  nop
0879c2ad +0x05fd:  nop
0879c2ae +0x05fe:  nop
0879c2af +0x05ff:  nop
0879c2b0 +0x0600:  call   087245c4 <__i686.get_pc_thunk.cx>
0879c2b5 +0x0605:  add    $0xbd08e3,%ecx
0879c2bb +0x060b:  push   %ebp
0879c2bc +0x060c:  mov    %esp,%ebp
0879c2be +0x060e:  mov    -0x4d8(%ecx),%eax
0879c2c4 +0x0614:  lea    0x8(%eax),%edx
0879c2c7 +0x0617:  mov    0x8(%ebp),%eax
0879c2ca +0x061a:  mov    %edx,(%eax)
0879c2cc +0x061c:  pop    %ebp
0879c2cd +0x061d:  ret
0879c2ce +0x061e:  nop
0879c2cf +0x061f:  nop
0879c2d0 +0x0620:  call   087245c4 <__i686.get_pc_thunk.cx>
0879c2d5 +0x0625:  add    $0xbd08c3,%ecx
0879c2db +0x062b:  push   %ebp
0879c2dc +0x062c:  mov    %esp,%ebp
0879c2de +0x062e:  mov    -0x4d8(%ecx),%eax
0879c2e4 +0x0634:  lea    0x8(%eax),%edx
0879c2e7 +0x0637:  mov    0x8(%ebp),%eax
0879c2ea +0x063a:  mov    %edx,(%eax)
0879c2ec +0x063c:  pop    %ebp
0879c2ed +0x063d:  ret
0879c2ee +0x063e:  nop
0879c2ef +0x063f:  nop
0879c2f0 +0x0640:  call   087245c4 <__i686.get_pc_thunk.cx>
0879c2f5 +0x0645:  add    $0xbd08a3,%ecx
0879c2fb +0x064b:  push   %ebp
0879c2fc +0x064c:  mov    %esp,%ebp
0879c2fe +0x064e:  mov    -0x520(%ecx),%eax
0879c304 +0x0654:  lea    0x8(%eax),%edx
0879c307 +0x0657:  mov    0x8(%ebp),%eax
0879c30a +0x065a:  mov    %edx,(%eax)
0879c30c +0x065c:  pop    %ebp
0879c30d +0x065d:  ret
0879c30e +0x065e:  nop
0879c30f +0x065f:  nop
0879c310 +0x0660:  call   087245c4 <__i686.get_pc_thunk.cx>
0879c315 +0x0665:  add    $0xbd0883,%ecx
0879c31b +0x066b:  push   %ebp
0879c31c +0x066c:  mov    %esp,%ebp
0879c31e +0x066e:  mov    -0x520(%ecx),%eax
0879c324 +0x0674:  lea    0x8(%eax),%edx
0879c327 +0x0677:  mov    0x8(%ebp),%eax
0879c32a +0x067a:  mov    %edx,(%eax)
0879c32c +0x067c:  pop    %ebp
0879c32d +0x067d:  ret
0879c32e +0x067e:  nop
0879c32f +0x067f:  nop
0879c330 +0x0680:  push   %ebp
0879c331 +0x0681:  mov    $0x8,%eax
0879c336 +0x0686:  mov    %esp,%ebp
0879c338 +0x0688:  pop    %ebp
0879c339 +0x0689:  ret
0879c33a +0x068a:  nop
0879c33b +0x068b:  nop
0879c33c +0x068c:  nop
0879c33d +0x068d:  nop
0879c33e +0x068e:  nop
0879c33f +0x068f:  nop
0879c340 +0x0690:  push   %ebp
0879c341 +0x0691:  mov    $0x8,%eax
0879c346 +0x0696:  mov    %esp,%ebp
0879c348 +0x0698:  pop    %ebp
0879c349 +0x0699:  ret
0879c34a +0x069a:  nop
0879c34b +0x069b:  nop
0879c34c +0x069c:  nop
0879c34d +0x069d:  nop
0879c34e +0x069e:  nop
0879c34f +0x069f:  nop
0879c350 +0x06a0:  push   %ebp
0879c351 +0x06a1:  mov    $0x8,%eax
0879c356 +0x06a6:  mov    %esp,%ebp
0879c358 +0x06a8:  pop    %ebp
0879c359 +0x06a9:  ret
0879c35a +0x06aa:  nop
0879c35b +0x06ab:  nop
0879c35c +0x06ac:  nop
0879c35d +0x06ad:  nop
0879c35e +0x06ae:  nop
0879c35f +0x06af:  nop
0879c360 +0x06b0:  push   %ebp
0879c361 +0x06b1:  mov    $0x8,%eax
0879c366 +0x06b6:  mov    %esp,%ebp
0879c368 +0x06b8:  pop    %ebp
0879c369 +0x06b9:  ret
0879c36a +0x06ba:  nop
0879c36b +0x06bb:  nop
0879c36c +0x06bc:  nop
0879c36d +0x06bd:  nop
0879c36e +0x06be:  nop
0879c36f +0x06bf:  nop
0879c370 +0x06c0:  push   %ebp
0879c371 +0x06c1:  mov    $0x18,%eax
0879c376 +0x06c6:  mov    %esp,%ebp
0879c378 +0x06c8:  pop    %ebp
0879c379 +0x06c9:  ret
0879c37a +0x06ca:  nop
0879c37b +0x06cb:  nop
0879c37c +0x06cc:  nop
0879c37d +0x06cd:  nop
0879c37e +0x06ce:  nop
0879c37f +0x06cf:  nop
0879c380 +0x06d0:  push   %ebp
0879c381 +0x06d1:  mov    $0x8,%eax
0879c386 +0x06d6:  mov    %esp,%ebp
0879c388 +0x06d8:  pop    %ebp
0879c389 +0x06d9:  ret
0879c38a +0x06da:  nop
0879c38b +0x06db:  nop
0879c38c +0x06dc:  nop
0879c38d +0x06dd:  nop
0879c38e +0x06de:  nop
0879c38f +0x06df:  nop
0879c390 +0x06e0:  push   %ebp
0879c391 +0x06e1:  xor    %eax,%eax
0879c393 +0x06e3:  mov    %esp,%ebp
0879c395 +0x06e5:  pop    %ebp
0879c396 +0x06e6:  ret
0879c397 +0x06e7:  nop
0879c398 +0x06e8:  nop
0879c399 +0x06e9:  nop
0879c39a +0x06ea:  nop
0879c39b +0x06eb:  nop
0879c39c +0x06ec:  nop
0879c39d +0x06ed:  nop
0879c39e +0x06ee:  nop
0879c39f +0x06ef:  nop
0879c3a0 +0x06f0:  push   %ebp
0879c3a1 +0x06f1:  mov    $0x10,%eax
0879c3a6 +0x06f6:  mov    %esp,%ebp
0879c3a8 +0x06f8:  pop    %ebp
0879c3a9 +0x06f9:  ret
0879c3aa +0x06fa:  nop
0879c3ab +0x06fb:  nop
0879c3ac +0x06fc:  nop
0879c3ad +0x06fd:  nop
0879c3ae +0x06fe:  nop
0879c3af +0x06ff:  nop
0879c3b0 +0x0700:  push   %ebp
0879c3b1 +0x0701:  xor    %eax,%eax
0879c3b3 +0x0703:  mov    %esp,%ebp
0879c3b5 +0x0705:  pop    %ebp
0879c3b6 +0x0706:  ret
0879c3b7 +0x0707:  nop
0879c3b8 +0x0708:  nop
0879c3b9 +0x0709:  nop
0879c3ba +0x070a:  nop
0879c3bb +0x070b:  nop
0879c3bc +0x070c:  nop
0879c3bd +0x070d:  nop
0879c3be +0x070e:  nop
0879c3bf +0x070f:  nop
0879c3c0 +0x0710:  push   %ebp
0879c3c1 +0x0711:  mov    $0x10,%eax
0879c3c6 +0x0716:  mov    %esp,%ebp
0879c3c8 +0x0718:  pop    %ebp
0879c3c9 +0x0719:  ret
0879c3ca +0x071a:  nop
0879c3cb +0x071b:  nop
0879c3cc +0x071c:  nop
0879c3cd +0x071d:  nop
0879c3ce +0x071e:  nop
0879c3cf +0x071f:  nop
0879c3d0 +0x0720:  push   %ebp
0879c3d1 +0x0721:  mov    $0x10,%eax
0879c3d6 +0x0726:  mov    %esp,%ebp
0879c3d8 +0x0728:  pop    %ebp
0879c3d9 +0x0729:  ret
0879c3da +0x072a:  nop
0879c3db +0x072b:  nop
0879c3dc +0x072c:  nop
0879c3dd +0x072d:  nop
0879c3de +0x072e:  nop
0879c3df +0x072f:  nop
0879c3e0 +0x0730:  call   087245c4 <__i686.get_pc_thunk.cx>
0879c3e5 +0x0735:  add    $0xbd07b3,%ecx
0879c3eb +0x073b:  push   %ebp
0879c3ec +0x073c:  mov    %esp,%ebp
0879c3ee +0x073e:  mov    -0x2dc(%ecx),%eax
0879c3f4 +0x0744:  lea    0x8(%eax),%edx
0879c3f7 +0x0747:  mov    0x8(%ebp),%eax
0879c3fa +0x074a:  mov    %edx,(%eax)
0879c3fc +0x074c:  pop    %ebp
0879c3fd +0x074d:  ret
0879c3fe +0x074e:  nop
0879c3ff +0x074f:  nop
0879c400 +0x0750:  call   087245c4 <__i686.get_pc_thunk.cx>
0879c405 +0x0755:  add    $0xbd0793,%ecx
0879c40b +0x075b:  push   %ebp
0879c40c +0x075c:  mov    %esp,%ebp
0879c40e +0x075e:  mov    -0x2dc(%ecx),%eax
0879c414 +0x0764:  lea    0x8(%eax),%edx
0879c417 +0x0767:  mov    0x8(%ebp),%eax
0879c41a +0x076a:  mov    %edx,(%eax)
0879c41c +0x076c:  pop    %ebp
0879c41d +0x076d:  ret
0879c41e +0x076e:  nop
0879c41f +0x076f:  nop
0879c420 +0x0770:  call   087245c4 <__i686.get_pc_thunk.cx>
0879c425 +0x0775:  add    $0xbd0773,%ecx
0879c42b +0x077b:  push   %ebp
0879c42c +0x077c:  mov    %esp,%ebp
0879c42e +0x077e:  mov    -0x474(%ecx),%eax
0879c434 +0x0784:  lea    0x8(%eax),%edx
0879c437 +0x0787:  mov    0x8(%ebp),%eax
0879c43a +0x078a:  mov    %edx,(%eax)
0879c43c +0x078c:  pop    %ebp
0879c43d +0x078d:  ret
0879c43e +0x078e:  nop
0879c43f +0x078f:  nop
0879c440 +0x0790:  call   087245c4 <__i686.get_pc_thunk.cx>
0879c445 +0x0795:  add    $0xbd0753,%ecx
0879c44b +0x079b:  push   %ebp
0879c44c +0x079c:  mov    %esp,%ebp
0879c44e +0x079e:  mov    -0x474(%ecx),%eax
0879c454 +0x07a4:  lea    0x8(%eax),%edx
0879c457 +0x07a7:  mov    0x8(%ebp),%eax
0879c45a +0x07aa:  mov    %edx,(%eax)
0879c45c +0x07ac:  pop    %ebp
0879c45d +0x07ad:  ret
0879c45e +0x07ae:  nop
0879c45f +0x07af:  nop
0879c460 +0x07b0:  push   %ebp
0879c461 +0x07b1:  mov    %esp,%ebp
0879c463 +0x07b3:  push   %edi
0879c464 +0x07b4:  push   %esi
0879c465 +0x07b5:  push   %ebx
0879c466 +0x07b6:  sub    $0x4c,%esp
0879c469 +0x07b9:  mov    0x8(%ebp),%esi
0879c46c +0x07bc:  call   08722df8 <__i686.get_pc_thunk.bx>
0879c471 +0x07c1:  add    $0xbd0727,%ebx
0879c477 +0x07c7:  mov    0xc(%ebp),%edi
0879c47a +0x07ca:  mov    0x10(%ebp),%ecx
0879c47d +0x07cd:  mov    0x14(%ebp),%eax
0879c480 +0x07d0:  mov    0x34(%esi),%edx
0879c483 +0x07d3:  test   %edx,%edx
0879c485 +0x07d5:  jne    0879c4d8 <+0x828>
0879c487 +0x07d7:  xor    %edx,%edx
0879c489 +0x07d9:  divl   0x4(%esi)
0879c48c +0x07dc:  test   %eax,%eax
0879c48e +0x07de:  mov    %eax,-0x2c(%ebp)
0879c491 +0x07e1:  je     0879c4d0 <+0x820>
0879c493 +0x07e3:  mov    %edi,%eax
0879c495 +0x07e5:  mov    %esi,%edi
0879c497 +0x07e7:  mov    -0x2c(%ebp),%esi
0879c49a +0x07ea:  lea    0x0(%esi),%esi
0879c4a0 +0x07f0:  mov    (%edi),%edx
0879c4a2 +0x07f2:  mov    %eax,-0x3c(%ebp)
0879c4a5 +0x07f5:  mov    %eax,0xc(%esp)
0879c4a9 +0x07f9:  mov    %ecx,0x4(%esp)
0879c4ad +0x07fd:  mov    %ecx,-0x38(%ebp)
0879c4b0 +0x0800:  movl   $0x0,0x8(%esp)
0879c4b8 +0x0808:  mov    %edi,(%esp)
0879c4bb +0x080b:  call   *0xc(%edx)
0879c4be +0x080e:  mov    0x4(%edi),%edx
0879c4c1 +0x0811:  mov    -0x3c(%ebp),%eax
0879c4c4 +0x0814:  mov    -0x38(%ebp),%ecx
0879c4c7 +0x0817:  add    %edx,%eax
0879c4c9 +0x0819:  add    %edx,%ecx
0879c4cb +0x081b:  sub    $0x1,%esi
0879c4ce +0x081e:  jne    0879c4a0 <+0x7f0>
0879c4d0 +0x0820:  add    $0x4c,%esp
0879c4d3 +0x0823:  pop    %ebx
0879c4d4 +0x0824:  pop    %esi
0879c4d5 +0x0825:  pop    %edi
0879c4d6 +0x0826:  pop    %ebp
0879c4d7 +0x0827:  ret
0879c4d8 +0x0828:  cmp    $0x1,%edx
0879c4db +0x082b:  jne    0879c4d0 <+0x820>
0879c4dd +0x082d:  mov    0x30(%esi),%edx
0879c4e0 +0x0830:  test   %edx,%edx
0879c4e2 +0x0832:  jne    0879c560 <+0x8b0>
0879c4e4 +0x0834:  mov    0x4(%esi),%edx
0879c4e7 +0x0837:  mov    %edx,-0x30(%ebp)
0879c4ea +0x083a:  xor    %edx,%edx
0879c4ec +0x083c:  divl   -0x30(%ebp)
0879c4ef +0x083f:  test   %eax,%eax
0879c4f1 +0x0841:  mov    %eax,-0x2c(%ebp)
0879c4f4 +0x0844:  je     0879c4d0 <+0x820>
0879c4f6 +0x0846:  mov    -0x30(%ebp),%eax
0879c4f9 +0x0849:  lea    0x0(%esi,%eiz,1),%esi
0879c500 +0x0850:  mov    %ecx,0x4(%esp)
0879c504 +0x0854:  mov    %eax,0x8(%esp)
0879c508 +0x0858:  mov    0x8(%esi),%eax
0879c50b +0x085b:  mov    %ecx,-0x38(%ebp)
0879c50e +0x085e:  mov    %eax,(%esp)
0879c511 +0x0861:  call   08767410 <_ZN8TaoCrypt6xorbufEPhPKhj>  ; TaoCrypt::xorbuf(unsigned char*, unsigned char const*, unsigned int)
0879c516 +0x0866:  mov    0x8(%esi),%eax
0879c519 +0x0869:  mov    (%esi),%edx
0879c51b +0x086b:  movl   $0x0,0x8(%esp)
0879c523 +0x0873:  mov    %esi,(%esp)
0879c526 +0x0876:  mov    %eax,0xc(%esp)
0879c52a +0x087a:  mov    %eax,0x4(%esp)
0879c52e +0x087e:  call   *0xc(%edx)
0879c531 +0x0881:  mov    0x8(%esi),%eax
0879c534 +0x0884:  mov    0x4(%esi),%edx
0879c537 +0x0887:  mov    %edi,(%esp)
0879c53a +0x088a:  mov    %eax,0x4(%esp)
0879c53e +0x088e:  mov    %edx,0x8(%esp)
0879c542 +0x0892:  call   0807d8a0 <_init+0x198>
0879c547 +0x0897:  mov    0x4(%esi),%eax
0879c54a +0x089a:  mov    -0x38(%ebp),%ecx
0879c54d +0x089d:  add    %eax,%edi
0879c54f +0x089f:  add    %eax,%ecx
0879c551 +0x08a1:  subl   $0x1,-0x2c(%ebp)
0879c555 +0x08a5:  jne    0879c500 <+0x850>
0879c557 +0x08a7:  jmp    0879c4d0 <+0x820>
0879c55c +0x08ac:  lea    0x0(%esi,%eiz,1),%esi
0879c560 +0x08b0:  mov    0x4(%esi),%edx
0879c563 +0x08b3:  mov    %edx,-0x34(%ebp)
0879c566 +0x08b6:  xor    %edx,%edx
0879c568 +0x08b8:  divl   -0x34(%ebp)
0879c56b +0x08bb:  test   %eax,%eax
0879c56d +0x08bd:  mov    %eax,-0x2c(%ebp)
0879c570 +0x08c0:  je     0879c4d0 <+0x820>
0879c576 +0x08c6:  lea    -0x28(%ebp),%eax
0879c579 +0x08c9:  mov    %eax,-0x30(%ebp)
0879c57c +0x08cc:  mov    -0x34(%ebp),%eax
0879c57f +0x08cf:  nop
0879c580 +0x08d0:  mov    0xc(%esi),%edx
0879c583 +0x08d3:  mov    %ecx,-0x38(%ebp)
0879c586 +0x08d6:  mov    %ecx,0x4(%esp)
0879c58a +0x08da:  mov    %eax,0x8(%esp)
0879c58e +0x08de:  mov    %edx,(%esp)
0879c591 +0x08e1:  call   0807d8a0 <_init+0x198>
0879c596 +0x08e6:  mov    (%esi),%eax
0879c598 +0x08e8:  mov    %edi,0xc(%esp)
0879c59c +0x08ec:  movl   $0x0,0x8(%esp)
0879c5a4 +0x08f4:  mov    0xc(%esi),%edx
0879c5a7 +0x08f7:  mov    %esi,(%esp)
0879c5aa +0x08fa:  mov    %edx,0x4(%esp)
0879c5ae +0x08fe:  call   *0xc(%eax)
0879c5b1 +0x0901:  mov    0x4(%esi),%eax
0879c5b4 +0x0904:  mov    %eax,0x8(%esp)
0879c5b8 +0x0908:  mov    0x8(%esi),%eax
0879c5bb +0x090b:  mov    %edi,(%esp)
0879c5be +0x090e:  mov    %eax,0x4(%esp)
0879c5c2 +0x0912:  call   08767410 <_ZN8TaoCrypt6xorbufEPhPKhj>  ; TaoCrypt::xorbuf(unsigned char*, unsigned char const*, unsigned int)
0879c5c7 +0x0917:  mov    0x4(%esi),%edx
0879c5ca +0x091a:  mov    0x8(%esi),%eax
0879c5cd +0x091d:  mov    %edx,0x8(%esp)
0879c5d1 +0x0921:  mov    -0x30(%ebp),%edx
0879c5d4 +0x0924:  mov    %eax,0x4(%esp)
0879c5d8 +0x0928:  mov    %edx,(%esp)
0879c5db +0x092b:  call   0807d8a0 <_init+0x198>
0879c5e0 +0x0930:  mov    0xc(%esi),%eax
0879c5e3 +0x0933:  mov    0x4(%esi),%edx
0879c5e6 +0x0936:  mov    %eax,0x4(%esp)
0879c5ea +0x093a:  mov    %edx,0x8(%esp)
0879c5ee +0x093e:  mov    0x8(%esi),%eax
0879c5f1 +0x0941:  mov    %eax,(%esp)
0879c5f4 +0x0944:  call   0807d8a0 <_init+0x198>
0879c5f9 +0x0949:  mov    0x4(%esi),%edx
0879c5fc +0x094c:  mov    0xc(%esi),%eax
0879c5ff +0x094f:  mov    %edx,0x8(%esp)
0879c603 +0x0953:  mov    -0x30(%ebp),%edx
0879c606 +0x0956:  mov    %eax,(%esp)
0879c609 +0x0959:  mov    %edx,0x4(%esp)
0879c60d +0x095d:  call   0807d8a0 <_init+0x198>
0879c612 +0x0962:  mov    0x4(%esi),%eax
0879c615 +0x0965:  mov    -0x38(%ebp),%ecx
0879c618 +0x0968:  add    %eax,%edi
0879c61a +0x096a:  add    %eax,%ecx
0879c61c +0x096c:  subl   $0x1,-0x2c(%ebp)
0879c620 +0x0970:  jne    0879c580 <+0x8d0>
0879c626 +0x0976:  jmp    0879c4d0 <+0x820>
0879c62b +0x097b:  nop
0879c62c +0x097c:  nop
0879c62d +0x097d:  nop
0879c62e +0x097e:  nop
0879c62f +0x097f:  nop
0879c630 +0x0980:  push   %ebp
0879c631 +0x0981:  mov    %esp,%ebp
0879c633 +0x0983:  push   %edi
0879c634 +0x0984:  xor    %edi,%edi
0879c636 +0x0986:  push   %esi
0879c637 +0x0987:  push   %ebx
0879c638 +0x0988:  sub    $0x5c,%esp
0879c63b +0x098b:  mov    0x8(%ebp),%eax
0879c63e +0x098e:  call   08722df8 <__i686.get_pc_thunk.bx>
0879c643 +0x0993:  add    $0xbd0555,%ebx
0879c649 +0x0999:  mov    (%eax),%eax
0879c64b +0x099b:  mov    %eax,-0x3c(%ebp)
0879c64e +0x099e:  mov    %eax,(%esp)
0879c651 +0x09a1:  call   0875ebe0 <_ZNK8TaoCrypt7Integer8BitCountEv>  ; TaoCrypt::Integer::BitCount() const
0879c656 +0x09a6:  lea    0x6(%eax),%esi
0879c659 +0x09a9:  shr    $0x3,%esi
0879c65c +0x09ac:  test   %esi,%esi
0879c65e +0x09ae:  jne    0879c7a8 <+0xaf8>
0879c664 +0x09b4:  mov    %esi,0x8(%esp)
0879c668 +0x09b8:  mov    %edi,(%esp)
0879c66b +0x09bb:  movl   $0x0,0x4(%esp)
0879c673 +0x09c3:  call   0807dcc0 <_init+0x5b8>
0879c678 +0x09c8:  mov    -0x3c(%ebp),%edx
0879c67b +0x09cb:  mov    %edx,(%esp)
0879c67e +0x09ce:  call   0875ebe0 <_ZNK8TaoCrypt7Integer8BitCountEv>  ; TaoCrypt::Integer::BitCount() const
0879c683 +0x09d3:  mov    0x18(%ebp),%edx
0879c686 +0x09d6:  mov    %edi,0xc(%esp)
0879c68a +0x09da:  mov    %edx,0x14(%esp)
0879c68e +0x09de:  sub    $0x1,%eax
0879c691 +0x09e1:  mov    %eax,0x10(%esp)
0879c695 +0x09e5:  mov    0x10(%ebp),%eax
0879c698 +0x09e8:  mov    %eax,0x8(%esp)
0879c69c +0x09ec:  mov    0xc(%ebp),%eax
0879c69f +0x09ef:  mov    %eax,0x4(%esp)
0879c6a3 +0x09f3:  mov    0x8(%ebp),%eax
0879c6a6 +0x09f6:  add    $0x4,%eax
0879c6a9 +0x09f9:  mov    %eax,(%esp)
0879c6ac +0x09fc:  call   08767ad0 <_ZNK8TaoCrypt14RSA_BlockType13PadEPKhjPhjRNS_21RandomNumberGeneratorE>  ; TaoCrypt::RSA_BlockType1::Pad(unsigned char const*, unsigned int, unsigned char*, unsigned int, TaoCrypt::RandomNumberGenerator&) const
0879c6b1 +0x0a01:  mov    -0x3c(%ebp),%eax
0879c6b4 +0x0a04:  mov    %eax,(%esp)
0879c6b7 +0x0a07:  call   0875ec30 <_ZNK8TaoCrypt7Integer9ByteCountEv>  ; TaoCrypt::Integer::ByteCount() const
0879c6bc +0x0a0c:  lea    -0x28(%ebp),%edx
0879c6bf +0x0a0f:  mov    %esi,0x8(%esp)
0879c6c3 +0x0a13:  mov    %edi,0x4(%esp)
0879c6c7 +0x0a17:  mov    %edx,(%esp)
0879c6ca +0x0a1a:  mov    %edx,-0x40(%ebp)
0879c6cd +0x0a1d:  movl   $0x0,0xc(%esp)
0879c6d5 +0x0a25:  mov    %eax,-0x44(%ebp)
0879c6d8 +0x0a28:  call   08761300 <_ZN8TaoCrypt7IntegerC1EPKhjNS0_10SignednessE>  ; TaoCrypt::Integer::Integer(unsigned char const*, unsigned int, TaoCrypt::Integer::Signedness)
0879c6dd +0x0a2d:  mov    -0x40(%ebp),%edx
0879c6e0 +0x0a30:  lea    -0x38(%ebp),%eax
0879c6e3 +0x0a33:  mov    %eax,-0x40(%ebp)
0879c6e6 +0x0a36:  mov    %edx,0x8(%esp)
0879c6ea +0x0a3a:  mov    0x8(%ebp),%edx
0879c6ed +0x0a3d:  mov    (%edx),%edx
0879c6ef +0x0a3f:  mov    %eax,(%esp)
0879c6f2 +0x0a42:  mov    %edx,0x4(%esp)
0879c6f6 +0x0a46:  call   08767e00 <_ZNK8TaoCrypt13RSA_PublicKey13ApplyFunctionERKNS_7IntegerE>  ; TaoCrypt::RSA_PublicKey::ApplyFunction(TaoCrypt::Integer const&) const
0879c6fb +0x0a4b:  mov    -0x44(%ebp),%ecx
0879c6fe +0x0a4e:  mov    0x14(%ebp),%edx
0879c701 +0x0a51:  mov    -0x40(%ebp),%eax
0879c704 +0x0a54:  sub    $0x4,%esp
0879c707 +0x0a57:  mov    %ecx,0x8(%esp)
0879c70b +0x0a5b:  mov    %edx,0x4(%esp)
0879c70f +0x0a5f:  movl   $0x0,0xc(%esp)
0879c717 +0x0a67:  mov    %eax,(%esp)
0879c71a +0x0a6a:  call   08760f10 <_ZNK8TaoCrypt7Integer6EncodeEPhjNS0_10SignednessE>  ; TaoCrypt::Integer::Encode(unsigned char*, unsigned int, TaoCrypt::Integer::Signedness) const
0879c71f +0x0a6f:  mov    -0x38(%ebp),%eax
0879c722 +0x0a72:  mov    -0x34(%ebp),%edx
0879c725 +0x0a75:  movl   $0x0,0x4(%esp)
0879c72d +0x0a7d:  shl    $0x2,%eax
0879c730 +0x0a80:  mov    %edx,(%esp)
0879c733 +0x0a83:  mov    %edx,-0x40(%ebp)
0879c736 +0x0a86:  mov    %eax,0x8(%esp)
0879c73a +0x0a8a:  call   0807dcc0 <_init+0x5b8>
0879c73f +0x0a8f:  mov    -0x40(%ebp),%edx
0879c742 +0x0a92:  movb   $0x0,0x4(%esp)
0879c747 +0x0a97:  mov    %edx,(%esp)
0879c74a +0x0a9a:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
0879c74f +0x0a9f:  mov    -0x28(%ebp),%eax
0879c752 +0x0aa2:  mov    -0x24(%ebp),%edx
0879c755 +0x0aa5:  movl   $0x0,0x4(%esp)
0879c75d +0x0aad:  shl    $0x2,%eax
0879c760 +0x0ab0:  mov    %edx,(%esp)
0879c763 +0x0ab3:  mov    %edx,-0x40(%ebp)
0879c766 +0x0ab6:  mov    %eax,0x8(%esp)
0879c76a +0x0aba:  call   0807dcc0 <_init+0x5b8>
0879c76f +0x0abf:  mov    -0x40(%ebp),%edx
0879c772 +0x0ac2:  movb   $0x0,0x4(%esp)
0879c777 +0x0ac7:  mov    %edx,(%esp)
0879c77a +0x0aca:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
0879c77f +0x0acf:  mov    %esi,0x8(%esp)
0879c783 +0x0ad3:  mov    %edi,(%esp)
0879c786 +0x0ad6:  movl   $0x0,0x4(%esp)
0879c78e +0x0ade:  call   0807dcc0 <_init+0x5b8>
0879c793 +0x0ae3:  mov    %edi,(%esp)
0879c796 +0x0ae6:  movb   $0x0,0x4(%esp)
0879c79b +0x0aeb:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
0879c7a0 +0x0af0:  lea    -0xc(%ebp),%esp
0879c7a3 +0x0af3:  pop    %ebx
0879c7a4 +0x0af4:  pop    %esi
0879c7a5 +0x0af5:  pop    %edi
0879c7a6 +0x0af6:  pop    %ebp
0879c7a7 +0x0af7:  ret
0879c7a8 +0x0af8:  movb   $0x0,0x4(%esp)
0879c7ad +0x0afd:  mov    %esi,(%esp)
0879c7b0 +0x0b00:  call   08767790 <_ZnajN8TaoCrypt5new_tE>  ; operator new[](unsigned int, TaoCrypt::new_t)
0879c7b5 +0x0b05:  mov    %eax,%edi
0879c7b7 +0x0b07:  jmp    0879c664 <+0x9b4>
0879c7bc +0x0b0c:  nop
0879c7bd +0x0b0d:  nop
0879c7be +0x0b0e:  nop
0879c7bf +0x0b0f:  nop
0879c7c0 +0x0b10:  push   %ebp
0879c7c1 +0x0b11:  mov    %esp,%ebp
0879c7c3 +0x0b13:  push   %edi
0879c7c4 +0x0b14:  xor    %edi,%edi
0879c7c6 +0x0b16:  push   %esi
0879c7c7 +0x0b17:  push   %ebx
0879c7c8 +0x0b18:  sub    $0x5c,%esp
0879c7cb +0x0b1b:  mov    0x8(%ebp),%eax
0879c7ce +0x0b1e:  call   08722df8 <__i686.get_pc_thunk.bx>
0879c7d3 +0x0b23:  add    $0xbd03c5,%ebx
0879c7d9 +0x0b29:  mov    (%eax),%eax
0879c7db +0x0b2b:  mov    %eax,-0x3c(%ebp)
0879c7de +0x0b2e:  mov    %eax,(%esp)
0879c7e1 +0x0b31:  call   0875ebe0 <_ZNK8TaoCrypt7Integer8BitCountEv>  ; TaoCrypt::Integer::BitCount() const
0879c7e6 +0x0b36:  lea    0x6(%eax),%esi
0879c7e9 +0x0b39:  shr    $0x3,%esi
0879c7ec +0x0b3c:  test   %esi,%esi
0879c7ee +0x0b3e:  jne    0879c938 <+0xc88>
0879c7f4 +0x0b44:  mov    %esi,0x8(%esp)
0879c7f8 +0x0b48:  mov    %edi,(%esp)
0879c7fb +0x0b4b:  movl   $0x0,0x4(%esp)
0879c803 +0x0b53:  call   0807dcc0 <_init+0x5b8>
0879c808 +0x0b58:  mov    -0x3c(%ebp),%edx
0879c80b +0x0b5b:  mov    %edx,(%esp)
0879c80e +0x0b5e:  call   0875ebe0 <_ZNK8TaoCrypt7Integer8BitCountEv>  ; TaoCrypt::Integer::BitCount() const
0879c813 +0x0b63:  mov    0x18(%ebp),%edx
0879c816 +0x0b66:  mov    %edi,0xc(%esp)
0879c81a +0x0b6a:  mov    %edx,0x14(%esp)
0879c81e +0x0b6e:  sub    $0x1,%eax
0879c821 +0x0b71:  mov    %eax,0x10(%esp)
0879c825 +0x0b75:  mov    0x10(%ebp),%eax
0879c828 +0x0b78:  mov    %eax,0x8(%esp)
0879c82c +0x0b7c:  mov    0xc(%ebp),%eax
0879c82f +0x0b7f:  mov    %eax,0x4(%esp)
0879c833 +0x0b83:  mov    0x8(%ebp),%eax
0879c836 +0x0b86:  add    $0x4,%eax
0879c839 +0x0b89:  mov    %eax,(%esp)
0879c83c +0x0b8c:  call   08767c10 <_ZNK8TaoCrypt14RSA_BlockType23PadEPKhjPhjRNS_21RandomNumberGeneratorE>  ; TaoCrypt::RSA_BlockType2::Pad(unsigned char const*, unsigned int, unsigned char*, unsigned int, TaoCrypt::RandomNumberGenerator&) const
0879c841 +0x0b91:  mov    -0x3c(%ebp),%eax
0879c844 +0x0b94:  mov    %eax,(%esp)
0879c847 +0x0b97:  call   0875ec30 <_ZNK8TaoCrypt7Integer9ByteCountEv>  ; TaoCrypt::Integer::ByteCount() const
0879c84c +0x0b9c:  lea    -0x28(%ebp),%edx
0879c84f +0x0b9f:  mov    %esi,0x8(%esp)
0879c853 +0x0ba3:  mov    %edi,0x4(%esp)
0879c857 +0x0ba7:  mov    %edx,(%esp)
0879c85a +0x0baa:  mov    %edx,-0x40(%ebp)
0879c85d +0x0bad:  movl   $0x0,0xc(%esp)
0879c865 +0x0bb5:  mov    %eax,-0x44(%ebp)
0879c868 +0x0bb8:  call   08761300 <_ZN8TaoCrypt7IntegerC1EPKhjNS0_10SignednessE>  ; TaoCrypt::Integer::Integer(unsigned char const*, unsigned int, TaoCrypt::Integer::Signedness)
0879c86d +0x0bbd:  mov    -0x40(%ebp),%edx
0879c870 +0x0bc0:  lea    -0x38(%ebp),%eax
0879c873 +0x0bc3:  mov    %eax,-0x40(%ebp)
0879c876 +0x0bc6:  mov    %edx,0x8(%esp)
0879c87a +0x0bca:  mov    0x8(%ebp),%edx
0879c87d +0x0bcd:  mov    (%edx),%edx
0879c87f +0x0bcf:  mov    %eax,(%esp)
0879c882 +0x0bd2:  mov    %edx,0x4(%esp)
0879c886 +0x0bd6:  call   08767e00 <_ZNK8TaoCrypt13RSA_PublicKey13ApplyFunctionERKNS_7IntegerE>  ; TaoCrypt::RSA_PublicKey::ApplyFunction(TaoCrypt::Integer const&) const
0879c88b +0x0bdb:  mov    -0x44(%ebp),%ecx
0879c88e +0x0bde:  mov    0x14(%ebp),%edx
0879c891 +0x0be1:  mov    -0x40(%ebp),%eax
0879c894 +0x0be4:  sub    $0x4,%esp
0879c897 +0x0be7:  mov    %ecx,0x8(%esp)
0879c89b +0x0beb:  mov    %edx,0x4(%esp)
0879c89f +0x0bef:  movl   $0x0,0xc(%esp)
0879c8a7 +0x0bf7:  mov    %eax,(%esp)
0879c8aa +0x0bfa:  call   08760f10 <_ZNK8TaoCrypt7Integer6EncodeEPhjNS0_10SignednessE>  ; TaoCrypt::Integer::Encode(unsigned char*, unsigned int, TaoCrypt::Integer::Signedness) const
0879c8af +0x0bff:  mov    -0x38(%ebp),%eax
0879c8b2 +0x0c02:  mov    -0x34(%ebp),%edx
0879c8b5 +0x0c05:  movl   $0x0,0x4(%esp)
0879c8bd +0x0c0d:  shl    $0x2,%eax
0879c8c0 +0x0c10:  mov    %edx,(%esp)
0879c8c3 +0x0c13:  mov    %edx,-0x40(%ebp)
0879c8c6 +0x0c16:  mov    %eax,0x8(%esp)
0879c8ca +0x0c1a:  call   0807dcc0 <_init+0x5b8>
0879c8cf +0x0c1f:  mov    -0x40(%ebp),%edx
0879c8d2 +0x0c22:  movb   $0x0,0x4(%esp)
0879c8d7 +0x0c27:  mov    %edx,(%esp)
0879c8da +0x0c2a:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
0879c8df +0x0c2f:  mov    -0x28(%ebp),%eax
0879c8e2 +0x0c32:  mov    -0x24(%ebp),%edx
0879c8e5 +0x0c35:  movl   $0x0,0x4(%esp)
0879c8ed +0x0c3d:  shl    $0x2,%eax
0879c8f0 +0x0c40:  mov    %edx,(%esp)
0879c8f3 +0x0c43:  mov    %edx,-0x40(%ebp)
0879c8f6 +0x0c46:  mov    %eax,0x8(%esp)
0879c8fa +0x0c4a:  call   0807dcc0 <_init+0x5b8>
0879c8ff +0x0c4f:  mov    -0x40(%ebp),%edx
0879c902 +0x0c52:  movb   $0x0,0x4(%esp)
0879c907 +0x0c57:  mov    %edx,(%esp)
0879c90a +0x0c5a:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
0879c90f +0x0c5f:  mov    %esi,0x8(%esp)
0879c913 +0x0c63:  mov    %edi,(%esp)
0879c916 +0x0c66:  movl   $0x0,0x4(%esp)
0879c91e +0x0c6e:  call   0807dcc0 <_init+0x5b8>
0879c923 +0x0c73:  mov    %edi,(%esp)
0879c926 +0x0c76:  movb   $0x0,0x4(%esp)
0879c92b +0x0c7b:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
0879c930 +0x0c80:  lea    -0xc(%ebp),%esp
0879c933 +0x0c83:  pop    %ebx
0879c934 +0x0c84:  pop    %esi
0879c935 +0x0c85:  pop    %edi
0879c936 +0x0c86:  pop    %ebp
0879c937 +0x0c87:  ret
0879c938 +0x0c88:  movb   $0x0,0x4(%esp)
0879c93d +0x0c8d:  mov    %esi,(%esp)
0879c940 +0x0c90:  call   08767790 <_ZnajN8TaoCrypt5new_tE>  ; operator new[](unsigned int, TaoCrypt::new_t)
0879c945 +0x0c95:  mov    %eax,%edi
0879c947 +0x0c97:  jmp    0879c7f4 <+0xb44>
0879c94c +0x0c9c:  nop
0879c94d +0x0c9d:  nop
0879c94e +0x0c9e:  nop
0879c94f +0x0c9f:  nop
0879c950 +0x0ca0:  push   %ebp
0879c951 +0x0ca1:  mov    %esp,%ebp
0879c953 +0x0ca3:  push   %edi
0879c954 +0x0ca4:  push   %esi
0879c955 +0x0ca5:  push   %ebx
0879c956 +0x0ca6:  sub    $0x2c,%esp
0879c959 +0x0ca9:  mov    0x8(%ebp),%esi
0879c95c +0x0cac:  call   08722df8 <__i686.get_pc_thunk.bx>
0879c961 +0x0cb1:  add    $0xbd0237,%ebx
0879c967 +0x0cb7:  test   %esi,%esi
0879c969 +0x0cb9:  je     0879cb27 <+0xe77>
0879c96f +0x0cbf:  mov    0x90(%esi),%eax
0879c975 +0x0cc5:  mov    0x94(%esi),%edi
0879c97b +0x0ccb:  movl   $0x0,0x4(%esp)
0879c983 +0x0cd3:  shl    $0x2,%eax
0879c986 +0x0cd6:  mov    %edi,(%esp)
0879c989 +0x0cd9:  mov    %eax,0x8(%esp)
0879c98d +0x0cdd:  call   0807dcc0 <_init+0x5b8>
0879c992 +0x0ce2:  mov    %edi,(%esp)
0879c995 +0x0ce5:  movb   $0x0,0x4(%esp)
0879c99a +0x0cea:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
0879c99f +0x0cef:  mov    0x80(%esi),%eax
0879c9a5 +0x0cf5:  mov    0x84(%esi),%edi
0879c9ab +0x0cfb:  movl   $0x0,0x4(%esp)
0879c9b3 +0x0d03:  shl    $0x2,%eax
0879c9b6 +0x0d06:  mov    %edi,(%esp)
0879c9b9 +0x0d09:  mov    %eax,0x8(%esp)
0879c9bd +0x0d0d:  call   0807dcc0 <_init+0x5b8>
0879c9c2 +0x0d12:  mov    %edi,(%esp)
0879c9c5 +0x0d15:  movb   $0x0,0x4(%esp)
0879c9ca +0x0d1a:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
0879c9cf +0x0d1f:  mov    0x70(%esi),%eax
0879c9d2 +0x0d22:  mov    0x74(%esi),%edi
0879c9d5 +0x0d25:  movl   $0x0,0x4(%esp)
0879c9dd +0x0d2d:  shl    $0x2,%eax
0879c9e0 +0x0d30:  mov    %edi,(%esp)
0879c9e3 +0x0d33:  mov    %eax,0x8(%esp)
0879c9e7 +0x0d37:  call   0807dcc0 <_init+0x5b8>
0879c9ec +0x0d3c:  mov    %edi,(%esp)
0879c9ef +0x0d3f:  movb   $0x0,0x4(%esp)
0879c9f4 +0x0d44:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
0879c9f9 +0x0d49:  mov    0x60(%esi),%eax
0879c9fc +0x0d4c:  mov    0x64(%esi),%edi
0879c9ff +0x0d4f:  movl   $0x0,0x4(%esp)
0879ca07 +0x0d57:  shl    $0x2,%eax
0879ca0a +0x0d5a:  mov    %edi,(%esp)
0879ca0d +0x0d5d:  mov    %eax,0x8(%esp)
0879ca11 +0x0d61:  call   0807dcc0 <_init+0x5b8>
0879ca16 +0x0d66:  mov    %edi,(%esp)
0879ca19 +0x0d69:  movb   $0x0,0x4(%esp)
0879ca1e +0x0d6e:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
0879ca23 +0x0d73:  mov    0x50(%esi),%eax
0879ca26 +0x0d76:  mov    0x54(%esi),%edi
0879ca29 +0x0d79:  movl   $0x0,0x4(%esp)
0879ca31 +0x0d81:  shl    $0x2,%eax
0879ca34 +0x0d84:  mov    %edi,(%esp)
0879ca37 +0x0d87:  mov    %eax,0x8(%esp)
0879ca3b +0x0d8b:  call   0807dcc0 <_init+0x5b8>
0879ca40 +0x0d90:  mov    %edi,(%esp)
0879ca43 +0x0d93:  movb   $0x0,0x4(%esp)
0879ca48 +0x0d98:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
0879ca4d +0x0d9d:  mov    0x40(%esi),%eax
0879ca50 +0x0da0:  mov    0x44(%esi),%edi
0879ca53 +0x0da3:  movl   $0x0,0x4(%esp)
0879ca5b +0x0dab:  shl    $0x2,%eax
0879ca5e +0x0dae:  mov    %edi,(%esp)
0879ca61 +0x0db1:  mov    %eax,0x8(%esp)
0879ca65 +0x0db5:  call   0807dcc0 <_init+0x5b8>
0879ca6a +0x0dba:  mov    %edi,(%esp)
0879ca6d +0x0dbd:  lea    0x20(%esi),%edi
0879ca70 +0x0dc0:  movb   $0x0,0x4(%esp)
0879ca75 +0x0dc5:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
0879ca7a +0x0dca:  mov    0x10(%edi),%eax
0879ca7d +0x0dcd:  mov    0x14(%edi),%edx
0879ca80 +0x0dd0:  movl   $0x0,0x4(%esp)
0879ca88 +0x0dd8:  shl    $0x2,%eax
0879ca8b +0x0ddb:  mov    %edx,(%esp)
0879ca8e +0x0dde:  mov    %edx,-0x1c(%ebp)
0879ca91 +0x0de1:  mov    %eax,0x8(%esp)
0879ca95 +0x0de5:  call   0807dcc0 <_init+0x5b8>
0879ca9a +0x0dea:  mov    -0x1c(%ebp),%edx
0879ca9d +0x0ded:  movb   $0x0,0x4(%esp)
0879caa2 +0x0df2:  mov    %edx,(%esp)
0879caa5 +0x0df5:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
0879caaa +0x0dfa:  mov    0x20(%esi),%eax
0879caad +0x0dfd:  mov    0x4(%edi),%edi
0879cab0 +0x0e00:  movl   $0x0,0x4(%esp)
0879cab8 +0x0e08:  shl    $0x2,%eax
0879cabb +0x0e0b:  mov    %edi,(%esp)
0879cabe +0x0e0e:  mov    %eax,0x8(%esp)
0879cac2 +0x0e12:  call   0807dcc0 <_init+0x5b8>
0879cac7 +0x0e17:  mov    %edi,(%esp)
0879caca +0x0e1a:  movb   $0x0,0x4(%esp)
0879cacf +0x0e1f:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
0879cad4 +0x0e24:  mov    0x10(%esi),%eax
0879cad7 +0x0e27:  mov    0x14(%esi),%edi
0879cada +0x0e2a:  movl   $0x0,0x4(%esp)
0879cae2 +0x0e32:  shl    $0x2,%eax
0879cae5 +0x0e35:  mov    %edi,(%esp)
0879cae8 +0x0e38:  mov    %eax,0x8(%esp)
0879caec +0x0e3c:  call   0807dcc0 <_init+0x5b8>
0879caf1 +0x0e41:  mov    %edi,(%esp)
0879caf4 +0x0e44:  movb   $0x0,0x4(%esp)
0879caf9 +0x0e49:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
0879cafe +0x0e4e:  mov    (%esi),%eax
0879cb00 +0x0e50:  mov    0x4(%esi),%edi
0879cb03 +0x0e53:  movl   $0x0,0x4(%esp)
0879cb0b +0x0e5b:  shl    $0x2,%eax
0879cb0e +0x0e5e:  mov    %eax,0x8(%esp)
0879cb12 +0x0e62:  mov    %edi,(%esp)
0879cb15 +0x0e65:  call   0807dcc0 <_init+0x5b8>
0879cb1a +0x0e6a:  movb   $0x0,0x4(%esp)
0879cb1f +0x0e6f:  mov    %edi,(%esp)
0879cb22 +0x0e72:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
0879cb27 +0x0e77:  mov    %esi,(%esp)
0879cb2a +0x0e7a:  movb   $0x0,0x4(%esp)
0879cb2f +0x0e7f:  call   08750820 <_ZdlPvN5yaSSL5new_tE>  ; operator delete(void*, yaSSL::new_t)
0879cb34 +0x0e84:  add    $0x2c,%esp
0879cb37 +0x0e87:  pop    %ebx
0879cb38 +0x0e88:  pop    %esi
0879cb39 +0x0e89:  pop    %edi
0879cb3a +0x0e8a:  pop    %ebp
0879cb3b +0x0e8b:  ret
0879cb3c +0x0e8c:  nop
0879cb3d +0x0e8d:  nop
0879cb3e +0x0e8e:  nop
0879cb3f +0x0e8f:  nop
0879cb40 +0x0e90:  push   %ebp
0879cb41 +0x0e91:  mov    %esp,%ebp
0879cb43 +0x0e93:  sub    $0x58,%esp
0879cb46 +0x0e96:  mov    %edi,-0x4(%ebp)
0879cb49 +0x0e99:  mov    0x8(%ebp),%edi
0879cb4c +0x0e9c:  mov    %ebx,-0xc(%ebp)
0879cb4f +0x0e9f:  call   08722df8 <__i686.get_pc_thunk.bx>
0879cb54 +0x0ea4:  add    $0xbd0044,%ebx
0879cb5a +0x0eaa:  mov    %esi,-0x8(%ebp)
0879cb5d +0x0ead:  mov    (%edi),%esi
0879cb5f +0x0eaf:  mov    %esi,(%esp)
0879cb62 +0x0eb2:  call   0875ec30 <_ZNK8TaoCrypt7Integer9ByteCountEv>  ; TaoCrypt::Integer::ByteCount() const
0879cb67 +0x0eb7:  xor    %edx,%edx
0879cb69 +0x0eb9:  cmp    %eax,0x10(%ebp)
0879cb6c +0x0ebc:  je     0879cb80 <+0xed0>
0879cb6e +0x0ebe:  mov    -0xc(%ebp),%ebx
0879cb71 +0x0ec1:  mov    %edx,%eax
0879cb73 +0x0ec3:  mov    -0x8(%ebp),%esi
0879cb76 +0x0ec6:  mov    -0x4(%ebp),%edi
0879cb79 +0x0ec9:  mov    %ebp,%esp
0879cb7b +0x0ecb:  pop    %ebp
0879cb7c +0x0ecc:  ret
0879cb7d +0x0ecd:  lea    0x0(%esi),%esi
0879cb80 +0x0ed0:  mov    %esi,(%esp)
0879cb83 +0x0ed3:  call   0875ebe0 <_ZNK8TaoCrypt7Integer8BitCountEv>  ; TaoCrypt::Integer::BitCount() const
0879cb88 +0x0ed8:  movl   $0x0,-0x3c(%ebp)
0879cb8f +0x0edf:  lea    0x6(%eax),%ecx
0879cb92 +0x0ee2:  shr    $0x3,%ecx
0879cb95 +0x0ee5:  test   %ecx,%ecx
0879cb97 +0x0ee7:  jne    0879cd00 <+0x1050>
0879cb9d +0x0eed:  mov    -0x3c(%ebp),%eax
0879cba0 +0x0ef0:  mov    %ecx,0x8(%esp)
0879cba4 +0x0ef4:  mov    %ecx,-0x44(%ebp)
0879cba7 +0x0ef7:  movl   $0x0,0x4(%esp)
0879cbaf +0x0eff:  mov    %eax,(%esp)
0879cbb2 +0x0f02:  call   0807dcc0 <_init+0x5b8>
0879cbb7 +0x0f07:  mov    %esi,(%esp)
0879cbba +0x0f0a:  call   0875ec30 <_ZNK8TaoCrypt7Integer9ByteCountEv>  ; TaoCrypt::Integer::ByteCount() const
0879cbbf +0x0f0f:  movl   $0x0,0xc(%esp)
0879cbc7 +0x0f17:  mov    %eax,0x8(%esp)
0879cbcb +0x0f1b:  mov    0xc(%ebp),%eax
0879cbce +0x0f1e:  mov    %eax,0x4(%esp)
0879cbd2 +0x0f22:  lea    -0x38(%ebp),%eax
0879cbd5 +0x0f25:  mov    %eax,(%esp)
0879cbd8 +0x0f28:  mov    %eax,-0x48(%ebp)
0879cbdb +0x0f2b:  call   08761300 <_ZN8TaoCrypt7IntegerC1EPKhjNS0_10SignednessE>  ; TaoCrypt::Integer::Integer(unsigned char const*, unsigned int, TaoCrypt::Integer::Signedness)
0879cbe0 +0x0f30:  mov    -0x48(%ebp),%eax
0879cbe3 +0x0f33:  lea    -0x28(%ebp),%edx
0879cbe6 +0x0f36:  mov    %edx,-0x40(%ebp)
0879cbe9 +0x0f39:  mov    %eax,0xc(%esp)
0879cbed +0x0f3d:  mov    0x18(%ebp),%eax
0879cbf0 +0x0f40:  mov    %eax,0x8(%esp)
0879cbf4 +0x0f44:  mov    (%edi),%eax
0879cbf6 +0x0f46:  mov    %edx,(%esp)
0879cbf9 +0x0f49:  mov    %eax,0x4(%esp)
0879cbfd +0x0f4d:  call   08768000 <_ZNK8TaoCrypt14RSA_PrivateKey16CalculateInverseERNS_21RandomNumberGeneratorERKNS_7IntegerE>  ; TaoCrypt::RSA_PrivateKey::CalculateInverse(TaoCrypt::RandomNumberGenerator&, TaoCrypt::Integer const&) const
0879cc02 +0x0f52:  mov    -0x38(%ebp),%eax
0879cc05 +0x0f55:  mov    -0x34(%ebp),%edx
0879cc08 +0x0f58:  shl    $0x2,%eax
0879cc0b +0x0f5b:  mov    %edx,-0x48(%ebp)
0879cc0e +0x0f5e:  sub    $0x4,%esp
0879cc11 +0x0f61:  mov    %edx,(%esp)
0879cc14 +0x0f64:  mov    %eax,0x8(%esp)
0879cc18 +0x0f68:  movl   $0x0,0x4(%esp)
0879cc20 +0x0f70:  call   0807dcc0 <_init+0x5b8>
0879cc25 +0x0f75:  mov    -0x48(%ebp),%edx
0879cc28 +0x0f78:  movb   $0x0,0x4(%esp)
0879cc2d +0x0f7d:  mov    %edx,(%esp)
0879cc30 +0x0f80:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
0879cc35 +0x0f85:  mov    -0x40(%ebp),%eax
0879cc38 +0x0f88:  mov    %eax,(%esp)
0879cc3b +0x0f8b:  call   0875ec30 <_ZNK8TaoCrypt7Integer9ByteCountEv>  ; TaoCrypt::Integer::ByteCount() const
0879cc40 +0x0f90:  mov    -0x44(%ebp),%ecx
0879cc43 +0x0f93:  cmp    %ecx,%eax
0879cc45 +0x0f95:  ja     0879cd20 <+0x1070>
0879cc4b +0x0f9b:  mov    -0x40(%ebp),%edx
0879cc4e +0x0f9e:  add    $0x4,%edi
0879cc51 +0x0fa1:  mov    -0x3c(%ebp),%eax
0879cc54 +0x0fa4:  mov    %ecx,0x8(%esp)
0879cc58 +0x0fa8:  mov    %ecx,-0x44(%ebp)
0879cc5b +0x0fab:  mov    %edx,(%esp)
0879cc5e +0x0fae:  movl   $0x0,0xc(%esp)
0879cc66 +0x0fb6:  mov    %eax,0x4(%esp)
0879cc6a +0x0fba:  call   08760f10 <_ZNK8TaoCrypt7Integer6EncodeEPhjNS0_10SignednessE>  ; TaoCrypt::Integer::Encode(unsigned char*, unsigned int, TaoCrypt::Integer::Signedness) const
0879cc6f +0x0fbf:  mov    %esi,(%esp)
0879cc72 +0x0fc2:  call   0875ebe0 <_ZNK8TaoCrypt7Integer8BitCountEv>  ; TaoCrypt::Integer::BitCount() const
0879cc77 +0x0fc7:  mov    0x14(%ebp),%edx
0879cc7a +0x0fca:  mov    %edi,(%esp)
0879cc7d +0x0fcd:  mov    %edx,0xc(%esp)
0879cc81 +0x0fd1:  sub    $0x1,%eax
0879cc84 +0x0fd4:  mov    %eax,0x8(%esp)
0879cc88 +0x0fd8:  mov    -0x3c(%ebp),%eax
0879cc8b +0x0fdb:  mov    %eax,0x4(%esp)
0879cc8f +0x0fdf:  call   08767b50 <_ZNK8TaoCrypt14RSA_BlockType25UnPadEPKhjPh>  ; TaoCrypt::RSA_BlockType2::UnPad(unsigned char const*, unsigned int, unsigned char*) const
0879cc94 +0x0fe4:  mov    -0x24(%ebp),%esi
0879cc97 +0x0fe7:  movl   $0x0,0x4(%esp)
0879cc9f +0x0fef:  mov    %esi,(%esp)
0879cca2 +0x0ff2:  mov    %eax,%edx
0879cca4 +0x0ff4:  mov    -0x28(%ebp),%eax
0879cca7 +0x0ff7:  mov    %edx,-0x48(%ebp)
0879ccaa +0x0ffa:  shl    $0x2,%eax
0879ccad +0x0ffd:  mov    %eax,0x8(%esp)
0879ccb1 +0x1001:  call   0807dcc0 <_init+0x5b8>
0879ccb6 +0x1006:  mov    %esi,(%esp)
0879ccb9 +0x1009:  movb   $0x0,0x4(%esp)
0879ccbe +0x100e:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
0879ccc3 +0x1013:  mov    -0x44(%ebp),%ecx
0879ccc6 +0x1016:  mov    -0x3c(%ebp),%eax
0879ccc9 +0x1019:  movl   $0x0,0x4(%esp)
0879ccd1 +0x1021:  mov    %ecx,0x8(%esp)
0879ccd5 +0x1025:  mov    %eax,(%esp)
0879ccd8 +0x1028:  call   0807dcc0 <_init+0x5b8>
0879ccdd +0x102d:  mov    -0x3c(%ebp),%eax
0879cce0 +0x1030:  movb   $0x0,0x4(%esp)
0879cce5 +0x1035:  mov    %eax,(%esp)
0879cce8 +0x1038:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
0879cced +0x103d:  mov    -0x48(%ebp),%edx
0879ccf0 +0x1040:  mov    -0xc(%ebp),%ebx
0879ccf3 +0x1043:  mov    -0x8(%ebp),%esi
0879ccf6 +0x1046:  mov    -0x4(%ebp),%edi
0879ccf9 +0x1049:  mov    %ebp,%esp
0879ccfb +0x104b:  mov    %edx,%eax
0879ccfd +0x104d:  pop    %ebp
0879ccfe +0x104e:  ret
0879ccff +0x104f:  nop
0879cd00 +0x1050:  mov    %ecx,(%esp)
0879cd03 +0x1053:  mov    %ecx,-0x44(%ebp)
0879cd06 +0x1056:  movb   $0x0,0x4(%esp)
0879cd0b +0x105b:  call   08767790 <_ZnajN8TaoCrypt5new_tE>  ; operator new[](unsigned int, TaoCrypt::new_t)
0879cd10 +0x1060:  mov    -0x44(%ebp),%ecx
0879cd13 +0x1063:  mov    %eax,-0x3c(%ebp)
0879cd16 +0x1066:  jmp    0879cb9d <+0xeed>
0879cd1b +0x106b:  nop
0879cd1c +0x106c:  lea    0x0(%esi,%eiz,1),%esi
0879cd20 +0x1070:  call   0875f860 <_ZN8TaoCrypt7Integer4ZeroEv>  ; TaoCrypt::Integer::Zero()
0879cd25 +0x1075:  mov    -0x40(%ebp),%edx
0879cd28 +0x1078:  mov    %edx,(%esp)
0879cd2b +0x107b:  mov    %eax,0x4(%esp)
0879cd2f +0x107f:  call   08760460 <_ZN8TaoCrypt7IntegeraSERKS0_>  ; TaoCrypt::Integer::operator=(TaoCrypt::Integer const&)
0879cd34 +0x1084:  mov    -0x44(%ebp),%ecx
0879cd37 +0x1087:  jmp    0879cc4b <+0xf9b>
0879cd3c +0x108c:  nop
0879cd3d +0x108d:  nop
0879cd3e +0x108e:  nop
0879cd3f +0x108f:  nop
```

## 反编译 C

```c
// yaSSL::PemToDer @ 0x879bcb0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::PemToDer(_IO_FILE*, yaSSL::CertType, yaSSL::EncryptedInfo*) */

x509 * yaSSL::PemToDer(FILE *param_1,int param_2,void *param_3)

{
  bool bVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  size_t sVar6;
  char *pcVar7;
  void *pvVar8;
  void *__dest;
  uint *puVar9;
  uint *puVar10;
  x509 *this;
  long local_158;
  uint *local_154;
  uint *local_150;
  char local_14c [80];
  uint local_fc [20];
  uint local_ac [20];
  size_t local_5c;
  void *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  size_t local_48;
  void *local_44;
  size_t *local_3c;
  input_buffer local_38 [18];
  undefined4 local_26;
  undefined4 local_22;
  undefined2 local_1e;
  
  if (param_2 == 0) {
    strncpy((char *)local_ac,"-----BEGIN CERTIFICATE-----",0x50);
    strncpy((char *)local_fc,"-----END CERTIFICATE-----",0x50);
  }
  else {
    strncpy((char *)local_ac,"-----BEGIN RSA PRIVATE KEY-----",0x50);
    strncpy((char *)local_fc,"-----END RSA PRIVATE KEY-----",0x50);
  }
  do {
    local_150 = local_ac;
    local_154 = local_fc;
    pcVar2 = fgets(local_14c,0x50,param_1);
    puVar10 = local_150;
    if (pcVar2 == (char *)0x0) {
      local_158 = -1;
      goto LAB_0879bda6;
    }
    do {
      puVar9 = puVar10;
      uVar3 = *puVar9 + 0xfefefeff & ~*puVar9;
      uVar4 = uVar3 & 0x80808080;
      puVar10 = puVar9 + 1;
    } while (uVar4 == 0);
    if ((uVar3 & 0x8080) == 0) {
      puVar10 = (uint *)((int)puVar9 + 6);
      uVar4 = uVar4 >> 0x10;
    }
    iVar5 = strncmp((char *)local_150,local_14c,
                    (int)puVar10 + ((-3 - (uint)CARRY1((byte)uVar4,(byte)uVar4)) - (int)local_150));
  } while (iVar5 != 0);
  local_158 = ftell(param_1);
LAB_0879bda6:
  pcVar2 = fgets(local_14c,0x50,param_1);
  if (pcVar2 != (char *)0x0) {
    local_26 = 0x636f7250;
    local_22 = 0x7079542d;
    local_1e = 0x65;
    sVar6 = strlen((char *)&local_26);
    iVar5 = strncmp((char *)&local_26,local_14c,sVar6);
    if ((iVar5 == 0) && (pcVar2 = fgets(local_14c,0x50,param_1), pcVar2 != (char *)0x0)) {
      pcVar2 = strstr(local_14c,"DES");
      pcVar7 = strchr(local_14c,0x2c);
      if (pcVar2 == (char *)0x0) {
        pcVar2 = strstr(local_14c,"AES");
      }
      if (param_3 == (void *)0x0) {
        return (x509 *)0x0;
      }
      if (((pcVar2 != (char *)0x0) && (pcVar7 != (char *)0x0)) && (pcVar2 < pcVar7)) {
        memcpy(param_3,pcVar2,(int)pcVar7 - (int)pcVar2);
        *(undefined1 *)((int)param_3 + ((int)pcVar7 - (int)pcVar2)) = 0;
        *(undefined4 *)((int)param_3 + 0x50) = *(undefined4 *)(pcVar7 + 1);
        *(undefined4 *)((int)param_3 + 0x54) = *(undefined4 *)(pcVar7 + 5);
        *(undefined4 *)((int)param_3 + 0x58) = *(undefined4 *)(pcVar7 + 9);
        *(undefined4 *)((int)param_3 + 0x5c) = *(undefined4 *)(pcVar7 + 0xd);
        *(undefined4 *)((int)param_3 + 0x60) = *(undefined4 *)(pcVar7 + 0x11);
        *(undefined4 *)((int)param_3 + 100) = *(undefined4 *)(pcVar7 + 0x15);
        *(undefined4 *)((int)param_3 + 0x68) = *(undefined4 *)(pcVar7 + 0x19);
        *(undefined4 *)((int)param_3 + 0x6c) = *(undefined4 *)(pcVar7 + 0x1d);
        pcVar2 = strchr(local_14c,0xd);
        if (pcVar2 == (char *)0x0) {
          pcVar2 = strchr(local_14c,10);
        }
        if ((pcVar7 < pcVar2) && (pcVar2 != (char *)0x0)) {
          *(int *)((int)param_3 + 0x70) = (int)pcVar2 - (int)(pcVar7 + 1);
          *(undefined1 *)((int)param_3 + 0x74) = 1;
        }
      }
      fgets(local_14c,0x50,param_1);
      local_158 = ftell(param_1);
    }
  }
  local_150 = (uint *)0x0;
  do {
    pcVar2 = fgets(local_14c,0x50,param_1);
    puVar10 = local_154;
    if (pcVar2 == (char *)0x0) {
      bVar1 = false;
joined_r0x0879bf14:
      if ((local_158 != -1) && (bVar1)) {
        uVar3 = (int)local_150 - local_158;
        input_buffer::input_buffer(local_38,uVar3);
        fseek(param_1,local_158,0);
        pvVar8 = (void *)input_buffer::get_buffer(local_38);
        this = (x509 *)0x0;
        uVar4 = uVar3;
        sVar6 = fread(pvVar8,uVar3,1,param_1);
        if (sVar6 == 1) {
          pvVar8 = (void *)input_buffer::get_buffer(local_38);
          local_58 = (void *)0x0;
          local_5c = uVar3;
          if (uVar3 != 0) {
            local_58 = operator_new__(uVar3,uVar4 & 0xffffff00);
          }
          memcpy(local_58,pvVar8,local_5c);
          local_3c = &local_5c;
          local_50 = 0;
          local_4c = 0;
          local_44 = (void *)0x0;
          local_48 = 0;
          TaoCrypt::Base64Decoder::Decode((Base64Decoder *)&local_48);
          sVar6 = local_5c;
          this = operator_new(8,(uint)pvVar8 & 0xffffff00);
          x509::x509(this,sVar6);
          pvVar8 = local_58;
          __dest = (void *)x509::use_buffer(this);
          memcpy(__dest,pvVar8,sVar6);
          operator_delete(0,(uint)pvVar8 & 0xffffff00);
          pvVar8 = local_44;
          uVar4 = 0;
          memset(local_44,0,local_48);
          operator_delete__(pvVar8,uVar4 & 0xffffff00);
          pvVar8 = local_58;
          uVar4 = 0;
          memset(local_58,0,local_5c);
          operator_delete__(pvVar8,uVar4 & 0xffffff00);
        }
        input_buffer::~input_buffer(local_38);
        return this;
      }
      return (x509 *)0x0;
    }
    do {
      puVar9 = puVar10;
      uVar3 = *puVar9 + 0xfefefeff & ~*puVar9;
      uVar4 = uVar3 & 0x80808080;
      puVar10 = puVar9 + 1;
    } while (uVar4 == 0);
    if ((uVar3 & 0x8080) == 0) {
      puVar10 = (uint *)((int)puVar9 + 6);
      uVar4 = uVar4 >> 0x10;
    }
    iVar5 = strncmp((char *)local_154,local_14c,
                    (int)puVar10 + ((-3 - (uint)CARRY1((byte)uVar4,(byte)uVar4)) - (int)local_154));
    if (iVar5 == 0) {
      bVar1 = true;
      goto joined_r0x0879bf14;
    }
    local_150 = (uint *)ftell(param_1);
  } while( true );
}
```
