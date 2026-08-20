# sendFinished

`_ZN5yaSSL12sendFinishedERNS_3SSLENS_13ConnectionEndENS_12BufferOutputE`

`yaSSL::sendFinished(yaSSL::SSL&, yaSSL::ConnectionEnd, yaSSL::BufferOutput)`

| 类 | 地址 |
|---|---|
| `yaSSL` | `0x0879ff00` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0879ff00  _ZN5yaSSL12sendFinishedERNS_3SSLENS_13ConnectionEndENS_12BufferOutputE
#           yaSSL::sendFinished(yaSSL::SSL&, yaSSL::ConnectionEnd, yaSSL::BufferOutput)
# range [0x0879ff00, 0x087a063e]
0879ff00 +0x000:  push   %ebp
0879ff01 +0x001:  mov    %esp,%ebp
0879ff03 +0x003:  push   %edi
0879ff04 +0x004:  push   %esi
0879ff05 +0x005:  push   %ebx
0879ff06 +0x006:  call   08722df8 <__i686.get_pc_thunk.bx>
0879ff0b +0x00b:  add    $0xbccc8d,%ebx
0879ff11 +0x011:  sub    $0xcc,%esp
0879ff17 +0x017:  mov    0x8(%ebp),%esi
0879ff1a +0x01a:  mov    %esi,(%esp)
0879ff1d +0x01d:  call   0874e0b0 <_ZNK5yaSSL3SSL8GetErrorEv>  ; yaSSL::SSL::GetError() const
0879ff22 +0x022:  test   %eax,%eax
0879ff24 +0x024:  je     0879ff38 <+0x38>
0879ff26 +0x026:  add    $0xcc,%esp
0879ff2c +0x02c:  pop    %ebx
0879ff2d +0x02d:  pop    %esi
0879ff2e +0x02e:  pop    %edi
0879ff2f +0x02f:  pop    %ebp
0879ff30 +0x030:  ret
0879ff31 +0x031:  lea    0x0(%esi,%eiz,1),%esi
0879ff38 +0x038:  lea    -0x8c(%ebp),%eax
0879ff3e +0x03e:  mov    %eax,-0x9c(%ebp)
0879ff44 +0x044:  mov    %eax,(%esp)
0879ff47 +0x047:  call   087471a0 <_ZN5yaSSL8FinishedC1Ev>  ; yaSSL::Finished::Finished()
0879ff4c +0x04c:  lea    -0x65f758(%ebx),%edx
0879ff52 +0x052:  cmpl   $0x1,0xc(%ebp)
0879ff56 +0x056:  lea    -0x65f754(%ebx),%eax
0879ff5c +0x05c:  mov    %esi,(%esp)
0879ff5f +0x05f:  cmove  %edx,%eax
0879ff62 +0x062:  mov    -0x9c(%ebp),%edx
0879ff68 +0x068:  mov    %eax,0x8(%esp)
0879ff6c +0x06c:  mov    %edx,0x4(%esp)
0879ff70 +0x070:  call   0879eb40 <_ZN5yaSSL13buildFinishedERNS_3SSLERNS_8FinishedEPKh>  ; yaSSL::buildFinished(yaSSL::SSL&, yaSSL::Finished&, unsigned char const*)
0879ff75 +0x075:  movb   $0x0,0x4(%esp)
0879ff7a +0x07a:  movl   $0xc,(%esp)
0879ff81 +0x081:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
0879ff86 +0x086:  mov    %eax,%edi
0879ff88 +0x088:  mov    %eax,(%esp)
0879ff8b +0x08b:  call   08796ea0 <_ZN5yaSSL13output_bufferC1Ev>  ; yaSSL::output_buffer::output_buffer()
0879ff90 +0x090:  mov    %esi,(%esp)
0879ff93 +0x093:  call   0874e060 <_ZNK5yaSSL3SSL9getCryptoEv>  ; yaSSL::SSL::getCrypto() const
0879ff98 +0x098:  mov    %eax,(%esp)
0879ff9b +0x09b:  call   0874e750 <_ZNK5yaSSL6Crypto10get_digestEv>  ; yaSSL::Crypto::get_digest() const
0879ffa0 +0x0a0:  mov    (%eax),%edx
0879ffa2 +0x0a2:  mov    %eax,(%esp)
0879ffa5 +0x0a5:  call   *0xc(%edx)
0879ffa8 +0x0a8:  mov    %esi,(%esp)
0879ffab +0x0ab:  mov    %eax,-0xac(%ebp)
0879ffb1 +0x0b1:  call   0874e9a0 <_ZNK5yaSSL3SSL5isTLSEv>  ; yaSSL::SSL::isTLS() const
0879ffb6 +0x0b6:  mov    -0xac(%ebp),%ecx
0879ffbc +0x0bc:  mov    %esi,(%esp)
0879ffbf +0x0bf:  cmp    $0x1,%al
0879ffc1 +0x0c1:  sbb    %eax,%eax
0879ffc3 +0x0c3:  and    $0x18,%eax
0879ffc6 +0x0c6:  lea    0x15(%ecx,%eax,1),%eax
0879ffca +0x0ca:  mov    %eax,-0xa0(%ebp)
0879ffd0 +0x0d0:  call   0874e060 <_ZNK5yaSSL3SSL9getCryptoEv>  ; yaSSL::SSL::getCrypto() const
0879ffd5 +0x0d5:  mov    %eax,(%esp)
0879ffd8 +0x0d8:  call   0874e760 <_ZNK5yaSSL6Crypto10get_cipherEv>  ; yaSSL::Crypto::get_cipher() const
0879ffdd +0x0dd:  mov    (%eax),%edx
0879ffdf +0x0df:  mov    %eax,(%esp)
0879ffe2 +0x0e2:  call   *0x10(%edx)
0879ffe5 +0x0e5:  mov    %esi,(%esp)
0879ffe8 +0x0e8:  mov    %eax,-0xb0(%ebp)
0879ffee +0x0ee:  call   0874e070 <_ZNK5yaSSL3SSL11getSecurityEv>  ; yaSSL::SSL::getSecurity() const
0879fff3 +0x0f3:  mov    %eax,(%esp)
0879fff6 +0x0f6:  call   0874ea50 <_ZNK5yaSSL8Security9get_parmsEv>  ; yaSSL::Security::get_parms() const
0879fffb +0x0fb:  movl   $0x0,-0xb4(%ebp)
087a0005 +0x105:  cmpl   $0x1,0x8(%eax)
087a0009 +0x109:  je     087a05d0 <+0x6d0>
087a000f +0x10f:  lea    -0x1c(%ebp),%eax
087a0012 +0x112:  mov    %eax,(%esp)
087a0015 +0x115:  movl   $0x0,0x8(%esp)
087a001d +0x11d:  movl   $0x3,0x4(%esp)
087a0025 +0x125:  call   08746950 <_ZN5yaSSL15ProtocolVersionC1Ehh>  ; yaSSL::ProtocolVersion::ProtocolVersion(unsigned char, unsigned char)
087a002a +0x12a:  mov    -0x3d0(%ebx),%eax
087a0030 +0x130:  mov    -0x9c(%ebp),%ecx
087a0036 +0x136:  add    $0x8,%eax
087a0039 +0x139:  mov    %ecx,(%esp)
087a003c +0x13c:  mov    %eax,-0x2c(%ebp)
087a003f +0x13f:  call   08746aa0 <_ZNK5yaSSL13HandShakeBase10get_lengthEv>  ; yaSSL::HandShakeBase::get_length() const
087a0044 +0x144:  mov    %eax,%edx
087a0046 +0x146:  mov    -0x9c(%ebp),%eax
087a004c +0x14c:  mov    %edx,-0xb8(%ebp)
087a0052 +0x152:  mov    %eax,(%esp)
087a0055 +0x155:  mov    -0x8c(%ebp),%eax
087a005b +0x15b:  call   *(%eax)
087a005d +0x15d:  lea    -0x2c(%ebp),%ecx
087a0060 +0x160:  mov    %ecx,-0xa4(%ebp)
087a0066 +0x166:  mov    %ecx,(%esp)
087a0069 +0x169:  mov    %eax,0x4(%esp)
087a006d +0x16d:  call   08746a90 <_ZN5yaSSL15HandShakeHeader8set_typeENS_13HandShakeTypeE>  ; yaSSL::HandShakeHeader::set_type(yaSSL::HandShakeType)
087a0072 +0x172:  mov    -0xb8(%ebp),%edx
087a0078 +0x178:  mov    -0xa4(%ebp),%eax
087a007e +0x17e:  mov    %edx,0x4(%esp)
087a0082 +0x182:  mov    %eax,(%esp)
087a0085 +0x185:  call   08749950 <_ZN5yaSSL15HandShakeHeader10set_lengthEj>  ; yaSSL::HandShakeHeader::set_length(unsigned int)
087a008a +0x18a:  mov    %esi,(%esp)
087a008d +0x18d:  call   0874e070 <_ZNK5yaSSL3SSL11getSecurityEv>  ; yaSSL::SSL::getSecurity() const
087a0092 +0x192:  mov    %eax,(%esp)
087a0095 +0x195:  call   0874e960 <_ZNK5yaSSL8Security14get_connectionEv>  ; yaSSL::Security::get_connection() const
087a009a +0x19a:  movzbl 0x12f(%eax),%edx
087a00a1 +0x1a1:  movzbl 0x12e(%eax),%eax
087a00a8 +0x1a8:  movl   $0x16,-0x20(%ebp)
087a00af +0x1af:  mov    %dl,-0x1b(%ebp)
087a00b2 +0x1b2:  lea    -0x3c(%ebp),%edx
087a00b5 +0x1b5:  mov    %al,-0x1c(%ebp)
087a00b8 +0x1b8:  movzwl -0xa0(%ebp),%eax
087a00bf +0x1bf:  mov    %edx,-0xa8(%ebp)
087a00c5 +0x1c5:  mov    %edx,(%esp)
087a00c8 +0x1c8:  sub    $0x5,%eax
087a00cb +0x1cb:  mov    %ax,-0x1a(%ebp)
087a00cf +0x1cf:  call   08796d00 <_ZN5yaSSL12input_bufferC1Ev>  ; yaSSL::input_buffer::input_buffer()
087a00d4 +0x1d4:  mov    %esi,(%esp)
087a00d7 +0x1d7:  call   0874e970 <_ZNK5yaSSL3SSL9isTLSv1_1Ev>  ; yaSSL::SSL::isTLSv1_1() const
087a00dc +0x1dc:  test   %al,%al
087a00de +0x1de:  jne    087a04b0 <+0x5b0>
087a00e4 +0x1e4:  mov    -0xa8(%ebp),%ecx
087a00ea +0x1ea:  mov    %ecx,(%esp)
087a00ed +0x1ed:  call   08796db0 <_ZNK5yaSSL12input_buffer8get_sizeEv>  ; yaSSL::input_buffer::get_size() const
087a00f2 +0x1f2:  mov    %edi,(%esp)
087a00f5 +0x1f5:  mov    %eax,-0xb0(%ebp)
087a00fb +0x1fb:  mov    -0xa0(%ebp),%eax
087a0101 +0x201:  mov    %eax,0x4(%esp)
087a0105 +0x205:  call   08797120 <_ZN5yaSSL13output_buffer8allocateEj>  ; yaSSL::output_buffer::allocate(unsigned int)
087a010a +0x20a:  lea    -0x20(%ebp),%eax
087a010d +0x20d:  mov    %eax,0x4(%esp)
087a0111 +0x211:  mov    %edi,(%esp)
087a0114 +0x214:  call   08749160 <_ZN5yaSSLlsERNS_13output_bufferERKNS_17RecordLayerHeaderE>  ; yaSSL::operator<<(yaSSL::output_buffer&, yaSSL::RecordLayerHeader const&)
087a0119 +0x219:  mov    -0xa8(%ebp),%edx
087a011f +0x21f:  mov    %edx,(%esp)
087a0122 +0x222:  mov    %eax,-0xa0(%ebp)
087a0128 +0x228:  call   08796db0 <_ZNK5yaSSL12input_buffer8get_sizeEv>  ; yaSSL::input_buffer::get_size() const
087a012d +0x22d:  mov    -0xa8(%ebp),%ecx
087a0133 +0x233:  mov    %ecx,(%esp)
087a0136 +0x236:  mov    %eax,-0xb8(%ebp)
087a013c +0x23c:  call   08796d30 <_ZNK5yaSSL12input_buffer10get_bufferEv>  ; yaSSL::input_buffer::get_buffer() const
087a0141 +0x241:  mov    -0xb8(%ebp),%edx
087a0147 +0x247:  mov    %edx,0x8(%esp)
087a014b +0x24b:  mov    %eax,0x4(%esp)
087a014f +0x24f:  mov    -0xa0(%ebp),%eax
087a0155 +0x255:  mov    %eax,(%esp)
087a0158 +0x258:  call   08796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>  ; yaSSL::output_buffer::write(unsigned char const*, unsigned int)
087a015d +0x25d:  mov    -0xa0(%ebp),%ecx
087a0163 +0x263:  mov    -0xa4(%ebp),%edx
087a0169 +0x269:  mov    %ecx,(%esp)
087a016c +0x26c:  mov    %edx,0x4(%esp)
087a0170 +0x270:  call   087490d0 <_ZN5yaSSLlsERNS_13output_bufferERKNS_15HandShakeHeaderE>  ; yaSSL::operator<<(yaSSL::output_buffer&, yaSSL::HandShakeHeader const&)
087a0175 +0x275:  mov    -0x9c(%ebp),%edx
087a017b +0x27b:  mov    %edx,0x4(%esp)
087a017f +0x27f:  mov    %eax,(%esp)
087a0182 +0x282:  call   08748320 <_ZN5yaSSLlsERNS_13output_bufferERKNS_8FinishedE>  ; yaSSL::operator<<(yaSSL::output_buffer&, yaSSL::Finished const&)
087a0187 +0x287:  mov    %esi,(%esp)
087a018a +0x28a:  call   0874e970 <_ZNK5yaSSL3SSL9isTLSv1_1Ev>  ; yaSSL::SSL::isTLSv1_1() const
087a018f +0x28f:  mov    %edi,%edx
087a0191 +0x291:  movzbl %al,%eax
087a0194 +0x294:  mov    %eax,(%esp)
087a0197 +0x297:  mov    %esi,%eax
087a0199 +0x299:  call   0879cd50 <_ZN5yaSSL12_GLOBAL__N_113hashHandShakeERNS_3SSLERKNS_13output_bufferEb>  ; yaSSL::(anonymous namespace)::hashHandShake(yaSSL::SSL&, yaSSL::output_buffer const&, bool)
087a019e +0x29e:  mov    %esi,(%esp)
087a01a1 +0x2a1:  call   0874e9a0 <_ZNK5yaSSL3SSL5isTLSEv>  ; yaSSL::SSL::isTLS() const
087a01a6 +0x2a6:  test   %al,%al
087a01a8 +0x2a8:  jne    087a03a8 <+0x4a8>
087a01ae +0x2ae:  mov    %edi,(%esp)
087a01b1 +0x2b1:  call   08796ec0 <_ZNK5yaSSL13output_buffer8get_sizeEv>  ; yaSSL::output_buffer::get_size() const
087a01b6 +0x2b6:  mov    %edi,(%esp)
087a01b9 +0x2b9:  mov    %eax,-0x9c(%ebp)
087a01bf +0x2bf:  call   08796f30 <_ZNK5yaSSL13output_buffer10get_bufferEv>  ; yaSSL::output_buffer::get_buffer() const
087a01c4 +0x2c4:  mov    -0x9c(%ebp),%edx
087a01ca +0x2ca:  movl   $0x0,0x14(%esp)
087a01d2 +0x2d2:  movl   $0x16,0x10(%esp)
087a01da +0x2da:  mov    %esi,(%esp)
087a01dd +0x2dd:  sub    $0x5,%edx
087a01e0 +0x2e0:  mov    %edx,0xc(%esp)
087a01e4 +0x2e4:  add    $0x5,%eax
087a01e7 +0x2e7:  mov    %eax,0x8(%esp)
087a01eb +0x2eb:  lea    -0x60(%ebp),%eax
087a01ee +0x2ee:  mov    %eax,0x4(%esp)
087a01f2 +0x2f2:  mov    %eax,-0xb8(%ebp)
087a01f8 +0x2f8:  call   0879d5d0 <_ZN5yaSSL4hmacERNS_3SSLEPhPKhjNS_11ContentTypeEb>  ; yaSSL::hmac(yaSSL::SSL&, unsigned char*, unsigned char const*, unsigned int, yaSSL::ContentType, bool)
087a01fd +0x2fd:  mov    -0xb8(%ebp),%eax
087a0203 +0x303:  mov    -0xac(%ebp),%edx
087a0209 +0x309:  mov    %eax,0x4(%esp)
087a020d +0x30d:  mov    %edi,(%esp)
087a0210 +0x310:  mov    %edx,0x8(%esp)
087a0214 +0x314:  call   08796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>  ; yaSSL::output_buffer::write(unsigned char const*, unsigned int)
087a0219 +0x319:  mov    %esi,(%esp)
087a021c +0x31c:  call   0874e070 <_ZNK5yaSSL3SSL11getSecurityEv>  ; yaSSL::SSL::getSecurity() const
087a0221 +0x321:  mov    %eax,(%esp)
087a0224 +0x324:  call   0874ea50 <_ZNK5yaSSL8Security9get_parmsEv>  ; yaSSL::Security::get_parms() const
087a0229 +0x329:  cmpl   $0x1,0x8(%eax)
087a022d +0x32d:  je     087a0540 <+0x640>
087a0233 +0x333:  movzwl -0x1a(%ebp),%eax
087a0237 +0x337:  lea    -0x4c(%ebp),%ecx
087a023a +0x33a:  mov    %ecx,-0x9c(%ebp)
087a0240 +0x340:  mov    %ecx,(%esp)
087a0243 +0x343:  mov    %eax,0x4(%esp)
087a0247 +0x347:  call   087972e0 <_ZN5yaSSL12input_bufferC1Ej>  ; yaSSL::input_buffer::input_buffer(unsigned int)
087a024c +0x34c:  mov    %esi,(%esp)
087a024f +0x34f:  call   0874e2b0 <_ZN5yaSSL3SSL9useCryptoEv>  ; yaSSL::SSL::useCrypto()
087a0254 +0x354:  mov    %eax,(%esp)
087a0257 +0x357:  call   0874e7b0 <_ZN5yaSSL6Crypto10use_cipherEv>  ; yaSSL::Crypto::use_cipher()
087a025c +0x35c:  mov    %eax,%edx
087a025e +0x35e:  mov    (%eax),%eax
087a0260 +0x360:  mov    %edx,-0xb8(%ebp)
087a0266 +0x366:  mov    (%eax),%eax
087a0268 +0x368:  mov    %edi,(%esp)
087a026b +0x36b:  mov    %eax,-0xa4(%ebp)
087a0271 +0x371:  call   08796ec0 <_ZNK5yaSSL13output_buffer8get_sizeEv>  ; yaSSL::output_buffer::get_size() const
087a0276 +0x376:  mov    %edi,(%esp)
087a0279 +0x379:  mov    %eax,-0xa0(%ebp)
087a027f +0x37f:  call   08796f30 <_ZNK5yaSSL13output_buffer10get_bufferEv>  ; yaSSL::output_buffer::get_buffer() const
087a0284 +0x384:  mov    %eax,-0xac(%ebp)
087a028a +0x38a:  mov    -0x9c(%ebp),%eax
087a0290 +0x390:  mov    %eax,(%esp)
087a0293 +0x393:  call   08796d30 <_ZNK5yaSSL12input_buffer10get_bufferEv>  ; yaSSL::input_buffer::get_buffer() const
087a0298 +0x398:  mov    -0xa0(%ebp),%ecx
087a029e +0x39e:  mov    -0xb8(%ebp),%edx
087a02a4 +0x3a4:  sub    $0x5,%ecx
087a02a7 +0x3a7:  mov    %ecx,0xc(%esp)
087a02ab +0x3ab:  mov    -0xac(%ebp),%ecx
087a02b1 +0x3b1:  mov    %eax,0x4(%esp)
087a02b5 +0x3b5:  mov    %edx,(%esp)
087a02b8 +0x3b8:  add    $0x5,%ecx
087a02bb +0x3bb:  mov    %ecx,0x8(%esp)
087a02bf +0x3bf:  call   *-0xa4(%ebp)
087a02c5 +0x3c5:  movl   $0x5,0x4(%esp)
087a02cd +0x3cd:  mov    %edi,(%esp)
087a02d0 +0x3d0:  call   08796ee0 <_ZN5yaSSL13output_buffer11set_currentEj>  ; yaSSL::output_buffer::set_current(unsigned int)
087a02d5 +0x3d5:  mov    -0x9c(%ebp),%edx
087a02db +0x3db:  mov    %edx,(%esp)
087a02de +0x3de:  call   08796d40 <_ZNK5yaSSL12input_buffer12get_capacityEv>  ; yaSSL::input_buffer::get_capacity() const
087a02e3 +0x3e3:  mov    -0x9c(%ebp),%ecx
087a02e9 +0x3e9:  mov    %ecx,(%esp)
087a02ec +0x3ec:  mov    %eax,-0xb8(%ebp)
087a02f2 +0x3f2:  call   08796d30 <_ZNK5yaSSL12input_buffer10get_bufferEv>  ; yaSSL::input_buffer::get_buffer() const
087a02f7 +0x3f7:  mov    -0xb8(%ebp),%edx
087a02fd +0x3fd:  mov    %edi,(%esp)
087a0300 +0x400:  mov    %edx,0x8(%esp)
087a0304 +0x404:  mov    %eax,0x4(%esp)
087a0308 +0x408:  call   08796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>  ; yaSSL::output_buffer::write(unsigned char const*, unsigned int)
087a030d +0x40d:  mov    -0x9c(%ebp),%eax
087a0313 +0x413:  mov    %eax,(%esp)
087a0316 +0x416:  call   08797360 <_ZN5yaSSL12input_bufferD1Ev>  ; yaSSL::input_buffer::~input_buffer()
087a031b +0x41b:  mov    -0xa8(%ebp),%edx
087a0321 +0x421:  mov    %edx,(%esp)
087a0324 +0x424:  call   08797360 <_ZN5yaSSL12input_bufferD1Ev>  ; yaSSL::input_buffer::~input_buffer()
087a0329 +0x429:  mov    -0x420(%ebx),%eax
087a032f +0x42f:  mov    %esi,(%esp)
087a0332 +0x432:  add    $0x8,%eax
087a0335 +0x435:  mov    %eax,-0x2c(%ebp)
087a0338 +0x438:  call   0874e070 <_ZNK5yaSSL3SSL11getSecurityEv>  ; yaSSL::SSL::getSecurity() const
087a033d +0x43d:  mov    %eax,(%esp)
087a0340 +0x440:  call   0874ecf0 <_ZNK5yaSSL8Security12get_resumingEv>  ; yaSSL::Security::get_resuming() const
087a0345 +0x445:  test   %al,%al
087a0347 +0x447:  je     087a0458 <+0x558>
087a034d +0x44d:  mov    0xc(%ebp),%eax
087a0350 +0x450:  test   %eax,%eax
087a0352 +0x452:  je     087a05a0 <+0x6a0>
087a0358 +0x458:  mov    %esi,(%esp)
087a035b +0x45b:  call   0874e2c0 <_ZN5yaSSL3SSL11useSecurityEv>  ; yaSSL::SSL::useSecurity()
087a0360 +0x460:  mov    %eax,(%esp)
087a0363 +0x463:  call   0874ed00 <_ZN5yaSSL8Security14use_connectionEv>  ; yaSSL::Security::use_connection()
087a0368 +0x468:  mov    %eax,(%esp)
087a036b +0x46b:  call   08747cb0 <_ZN5yaSSL10Connection11CleanMasterEv>  ; yaSSL::Connection::CleanMaster()
087a0370 +0x470:  mov    0x10(%ebp),%ecx
087a0373 +0x473:  test   %ecx,%ecx
087a0375 +0x475:  jne    087a0410 <+0x510>
087a037b +0x47b:  mov    %edi,0x4(%esp)
087a037f +0x47f:  xor    %edi,%edi
087a0381 +0x481:  mov    %esi,(%esp)
087a0384 +0x484:  call   08752610 <_ZN5yaSSL3SSL9addBufferEPNS_13output_bufferE>  ; yaSSL::SSL::addBuffer(yaSSL::output_buffer*)
087a0389 +0x489:  mov    %edi,(%esp)
087a038c +0x48c:  movb   $0x0,0x4(%esp)
087a0391 +0x491:  call   08750820 <_ZdlPvN5yaSSL5new_tE>  ; operator delete(void*, yaSSL::new_t)
087a0396 +0x496:  add    $0xcc,%esp
087a039c +0x49c:  pop    %ebx
087a039d +0x49d:  pop    %esi
087a039e +0x49e:  pop    %edi
087a039f +0x49f:  pop    %ebp
087a03a0 +0x4a0:  ret
087a03a1 +0x4a1:  lea    0x0(%esi,%eiz,1),%esi
087a03a8 +0x4a8:  mov    %edi,(%esp)
087a03ab +0x4ab:  call   08796ec0 <_ZNK5yaSSL13output_buffer8get_sizeEv>  ; yaSSL::output_buffer::get_size() const
087a03b0 +0x4b0:  mov    %edi,(%esp)
087a03b3 +0x4b3:  mov    %eax,-0xb8(%ebp)
087a03b9 +0x4b9:  call   08796f30 <_ZNK5yaSSL13output_buffer10get_bufferEv>  ; yaSSL::output_buffer::get_buffer() const
087a03be +0x4be:  mov    -0xb0(%ebp),%ecx
087a03c4 +0x4c4:  mov    -0xb8(%ebp),%edx
087a03ca +0x4ca:  sub    -0xb0(%ebp),%edx
087a03d0 +0x4d0:  movl   $0x0,0x14(%esp)
087a03d8 +0x4d8:  movl   $0x16,0x10(%esp)
087a03e0 +0x4e0:  sub    $0x5,%edx
087a03e3 +0x4e3:  lea    0x5(%eax,%ecx,1),%eax
087a03e7 +0x4e7:  mov    %eax,0x8(%esp)
087a03eb +0x4eb:  lea    -0x60(%ebp),%eax
087a03ee +0x4ee:  mov    %eax,0x4(%esp)
087a03f2 +0x4f2:  mov    %eax,-0xb8(%ebp)
087a03f8 +0x4f8:  mov    %edx,0xc(%esp)
087a03fc +0x4fc:  mov    %esi,(%esp)
087a03ff +0x4ff:  call   0879f370 <_ZN5yaSSL8TLS_hmacERNS_3SSLEPhPKhjNS_11ContentTypeEb>  ; yaSSL::TLS_hmac(yaSSL::SSL&, unsigned char*, unsigned char const*, unsigned int, yaSSL::ContentType, bool)
087a0404 +0x504:  mov    -0xb8(%ebp),%eax
087a040a +0x50a:  jmp    087a0203 <+0x303>
087a040f +0x50f:  nop
087a0410 +0x510:  mov    %edi,(%esp)
087a0413 +0x513:  call   08796ec0 <_ZNK5yaSSL13output_buffer8get_sizeEv>  ; yaSSL::output_buffer::get_size() const
087a0418 +0x518:  mov    %edi,(%esp)
087a041b +0x51b:  mov    %eax,-0xb8(%ebp)
087a0421 +0x521:  call   08796f30 <_ZNK5yaSSL13output_buffer10get_bufferEv>  ; yaSSL::output_buffer::get_buffer() const
087a0426 +0x526:  mov    -0xb8(%ebp),%edx
087a042c +0x52c:  mov    %esi,(%esp)
087a042f +0x52f:  mov    %edx,0x8(%esp)
087a0433 +0x533:  mov    %eax,0x4(%esp)
087a0437 +0x537:  call   0874f9a0 <_ZN5yaSSL3SSL4SendEPKhj>  ; yaSSL::SSL::Send(unsigned char const*, unsigned int)
087a043c +0x53c:  test   %edi,%edi
087a043e +0x53e:  je     087a0389 <+0x489>
087a0444 +0x544:  mov    %edi,(%esp)
087a0447 +0x547:  call   08797330 <_ZN5yaSSL13output_bufferD1Ev>  ; yaSSL::output_buffer::~output_buffer()
087a044c +0x54c:  jmp    087a0389 <+0x489>
087a0451 +0x551:  lea    0x0(%esi,%eiz,1),%esi
087a0458 +0x558:  mov    %esi,(%esp)
087a045b +0x55b:  call   0874e070 <_ZNK5yaSSL3SSL11getSecurityEv>  ; yaSSL::SSL::getSecurity() const
087a0460 +0x560:  mov    %eax,(%esp)
087a0463 +0x563:  call   0874ea00 <_ZNK5yaSSL8Security10GetContextEv>  ; yaSSL::Security::GetContext() const
087a0468 +0x568:  mov    %eax,(%esp)
087a046b +0x56b:  call   0874e520 <_ZNK5yaSSL7SSL_CTX18GetSessionCacheOffEv>  ; yaSSL::SSL_CTX::GetSessionCacheOff() const
087a0470 +0x570:  test   %al,%al
087a0472 +0x572:  je     087a0628 <+0x728>
087a0478 +0x578:  cmpl   $0x1,0xc(%ebp)
087a047c +0x57c:  jne    087a0358 <+0x458>
087a0482 +0x582:  mov    %esi,(%esp)
087a0485 +0x585:  call   0874e2e0 <_ZN5yaSSL3SSL9useHashesEv>  ; yaSSL::SSL::useHashes()
087a048a +0x58a:  mov    %eax,(%esp)
087a048d +0x58d:  call   0874e890 <_ZN5yaSSL9sslHashes10use_verifyEv>  ; yaSSL::sslHashes::use_verify()
087a0492 +0x592:  lea    -0x65f754(%ebx),%edx
087a0498 +0x598:  mov    %edx,0x8(%esp)
087a049c +0x59c:  mov    %esi,(%esp)
087a049f +0x59f:  mov    %eax,0x4(%esp)
087a04a3 +0x5a3:  call   0879eb40 <_ZN5yaSSL13buildFinishedERNS_3SSLERNS_8FinishedEPKh>  ; yaSSL::buildFinished(yaSSL::SSL&, yaSSL::Finished&, unsigned char const*)
087a04a8 +0x5a8:  jmp    087a0358 <+0x458>
087a04ad +0x5ad:  lea    0x0(%esi),%esi
087a04b0 +0x5b0:  mov    %esi,(%esp)
087a04b3 +0x5b3:  call   0874e070 <_ZNK5yaSSL3SSL11getSecurityEv>  ; yaSSL::SSL::getSecurity() const
087a04b8 +0x5b8:  mov    %eax,(%esp)
087a04bb +0x5bb:  call   0874ea50 <_ZNK5yaSSL8Security9get_parmsEv>  ; yaSSL::Security::get_parms() const
087a04c0 +0x5c0:  cmpl   $0x1,0x8(%eax)
087a04c4 +0x5c4:  jne    087a00e4 <+0x1e4>
087a04ca +0x5ca:  mov    -0xb0(%ebp),%ecx
087a04d0 +0x5d0:  mov    -0xa8(%ebp),%eax
087a04d6 +0x5d6:  mov    %ecx,0x4(%esp)
087a04da +0x5da:  mov    %eax,(%esp)
087a04dd +0x5dd:  call   08797220 <_ZN5yaSSL12input_buffer8allocateEj>  ; yaSSL::input_buffer::allocate(unsigned int)
087a04e2 +0x5e2:  mov    -0xa8(%ebp),%edx
087a04e8 +0x5e8:  mov    %edx,(%esp)
087a04eb +0x5eb:  call   08796d30 <_ZNK5yaSSL12input_buffer10get_bufferEv>  ; yaSSL::input_buffer::get_buffer() const
087a04f0 +0x5f0:  mov    %esi,(%esp)
087a04f3 +0x5f3:  mov    %eax,-0xb8(%ebp)
087a04f9 +0x5f9:  call   0874e060 <_ZNK5yaSSL3SSL9getCryptoEv>  ; yaSSL::SSL::getCrypto() const
087a04fe +0x5fe:  mov    %eax,(%esp)
087a0501 +0x601:  call   0874e780 <_ZNK5yaSSL6Crypto10get_randomEv>  ; yaSSL::Crypto::get_random() const
087a0506 +0x606:  mov    -0xb8(%ebp),%edx
087a050c +0x60c:  mov    -0xb0(%ebp),%ecx
087a0512 +0x612:  mov    %edx,0x4(%esp)
087a0516 +0x616:  mov    %ecx,0x8(%esp)
087a051a +0x61a:  mov    %eax,(%esp)
087a051d +0x61d:  call   08798fc0 <_ZNK5yaSSL10RandomPool4FillEPhj>  ; yaSSL::RandomPool::Fill(unsigned char*, unsigned int) const
087a0522 +0x622:  mov    -0xb0(%ebp),%eax
087a0528 +0x628:  mov    -0xa8(%ebp),%edx
087a052e +0x62e:  mov    %eax,0x4(%esp)
087a0532 +0x632:  mov    %edx,(%esp)
087a0535 +0x635:  call   08796d50 <_ZN5yaSSL12input_buffer8add_sizeEj>  ; yaSSL::input_buffer::add_size(unsigned int)
087a053a +0x63a:  jmp    087a00e4 <+0x1e4>
087a053f +0x63f:  nop
087a0540 +0x640:  movzbl -0xb4(%ebp),%ecx
087a0547 +0x647:  xor    %edx,%edx
087a0549 +0x649:  mov    %edi,-0x9c(%ebp)
087a054f +0x64f:  mov    -0xb4(%ebp),%edi
087a0555 +0x655:  mov    %esi,-0xa0(%ebp)
087a055b +0x65b:  mov    %edx,%esi
087a055d +0x65d:  mov    %cl,-0xa4(%ebp)
087a0563 +0x663:  nop
087a0564 +0x664:  lea    0x0(%esi,%eiz,1),%esi
087a0568 +0x668:  mov    -0x9c(%ebp),%eax
087a056e +0x66e:  add    $0x1,%esi
087a0571 +0x671:  movl   $0xfeedbeef,0x4(%esp)
087a0579 +0x679:  mov    %eax,(%esp)
087a057c +0x67c:  call   08796f40 <_ZN5yaSSL13output_bufferixEj>  ; yaSSL::output_buffer::operator[](unsigned int)
087a0581 +0x681:  movzbl -0xa4(%ebp),%edx
087a0588 +0x688:  cmp    %esi,%edi
087a058a +0x68a:  mov    %dl,(%eax)
087a058c +0x68c:  jae    087a0568 <+0x668>
087a058e +0x68e:  mov    -0x9c(%ebp),%edi
087a0594 +0x694:  mov    -0xa0(%ebp),%esi
087a059a +0x69a:  jmp    087a0233 <+0x333>
087a059f +0x69f:  nop
087a05a0 +0x6a0:  mov    %esi,(%esp)
087a05a3 +0x6a3:  call   0874e2e0 <_ZN5yaSSL3SSL9useHashesEv>  ; yaSSL::SSL::useHashes()
087a05a8 +0x6a8:  mov    %eax,(%esp)
087a05ab +0x6ab:  call   0874e890 <_ZN5yaSSL9sslHashes10use_verifyEv>  ; yaSSL::sslHashes::use_verify()
087a05b0 +0x6b0:  lea    -0x65f758(%ebx),%edx
087a05b6 +0x6b6:  mov    %edx,0x8(%esp)
087a05ba +0x6ba:  mov    %esi,(%esp)
087a05bd +0x6bd:  mov    %eax,0x4(%esp)
087a05c1 +0x6c1:  call   0879eb40 <_ZN5yaSSL13buildFinishedERNS_3SSLERNS_8FinishedEPKh>  ; yaSSL::buildFinished(yaSSL::SSL&, yaSSL::Finished&, unsigned char const*)
087a05c6 +0x6c6:  jmp    087a0358 <+0x458>
087a05cb +0x6cb:  nop
087a05cc +0x6cc:  lea    0x0(%esi,%eiz,1),%esi
087a05d0 +0x6d0:  mov    %esi,(%esp)
087a05d3 +0x6d3:  call   0874e970 <_ZNK5yaSSL3SSL9isTLSv1_1Ev>  ; yaSSL::SSL::isTLSv1_1() const
087a05d8 +0x6d8:  mov    -0xa0(%ebp),%edx
087a05de +0x6de:  add    -0xb0(%ebp),%edx
087a05e4 +0x6e4:  test   %al,%al
087a05e6 +0x6e6:  cmove  -0xa0(%ebp),%edx
087a05ed +0x6ed:  mov    %edx,%eax
087a05ef +0x6ef:  mov    %edx,-0xa0(%ebp)
087a05f5 +0x6f5:  sub    $0x4,%eax
087a05f8 +0x6f8:  xor    %edx,%edx
087a05fa +0x6fa:  divl   -0xb0(%ebp)
087a0600 +0x700:  mov    -0xb0(%ebp),%eax
087a0606 +0x706:  sub    %edx,%eax
087a0608 +0x708:  mov    -0xa0(%ebp),%edx
087a060e +0x70e:  mov    %eax,-0xb4(%ebp)
087a0614 +0x714:  lea    0x1(%eax,%edx,1),%edx
087a0618 +0x718:  mov    %edx,-0xa0(%ebp)
087a061e +0x71e:  jmp    087a000f <+0x10f>
087a0623 +0x723:  nop
087a0624 +0x724:  lea    0x0(%esi,%eiz,1),%esi
087a0628 +0x728:  call   087511a0 <_ZN5yaSSL11GetSessionsEv>  ; yaSSL::GetSessions()
087a062d +0x72d:  mov    %esi,0x4(%esp)
087a0631 +0x731:  mov    %eax,(%esp)
087a0634 +0x734:  call   087531e0 <_ZN5yaSSL8Sessions3addERKNS_3SSLE>  ; yaSSL::Sessions::add(yaSSL::SSL const&)
087a0639 +0x739:  jmp    087a0478 <+0x578>
087a063e +0x73e:  xchg   %ax,%ax
```

## 反编译 C

```c
// yaSSL::sendFinished @ 0x879ff00

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::sendFinished(yaSSL::SSL&, yaSSL::ConnectionEnd, yaSSL::BufferOutput) */

void yaSSL::sendFinished(SSL *param_1,int param_2,int param_3)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  output_buffer *this;
  Crypto *pCVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  Security *pSVar9;
  uint uVar10;
  undefined4 uVar11;
  output_buffer *poVar12;
  uchar *puVar13;
  int iVar14;
  undefined4 *puVar15;
  Connection *this_00;
  int iVar16;
  SSL_CTX *this_01;
  RandomPool *this_02;
  undefined1 *puVar17;
  sslHashes *psVar18;
  Finished *pFVar19;
  Sessions *this_03;
  uint local_b8;
  uint local_a4;
  undefined4 *local_90 [11];
  uchar local_64 [20];
  input_buffer local_50 [16];
  input_buffer local_40 [16];
  undefined *local_30 [3];
  undefined4 local_24;
  ProtocolVersion local_20;
  undefined1 local_1f;
  ushort local_1e;
  undefined4 uStack_14;
  
  uStack_14 = 0x879ff0b;
  iVar4 = SSL::GetError(param_1);
  if (iVar4 == 0) {
    Finished::Finished((Finished *)local_90);
    puVar13 = "SRVR";
    if (param_2 == 1) {
      puVar13 = "CLNTSRVR";
    }
    pFVar19 = (Finished *)local_90;
    buildFinished(param_1,(Finished *)local_90,puVar13);
    this = operator_new(0xc,(uint)pFVar19 & 0xffffff00);
    output_buffer::output_buffer(this);
    pCVar5 = (Crypto *)SSL::getCrypto(param_1);
    piVar6 = (int *)Crypto::get_digest(pCVar5);
    uVar7 = (**(code **)(*piVar6 + 0xc))(piVar6);
    cVar2 = SSL::isTLS(param_1);
    local_a4 = uVar7 + 0x15 + (-(uint)(cVar2 == '\0') & 0x18);
    pCVar5 = (Crypto *)SSL::getCrypto(param_1);
    piVar6 = (int *)Crypto::get_cipher(pCVar5);
    uVar8 = (**(code **)(*piVar6 + 0x10))(piVar6);
    pSVar9 = (Security *)SSL::getSecurity(param_1);
    iVar4 = Security::get_parms(pSVar9);
    local_b8 = 0;
    if (*(int *)(iVar4 + 8) == 1) {
      cVar2 = SSL::isTLSv1_1(param_1);
      uVar10 = local_a4 + uVar8;
      if (cVar2 == '\0') {
        uVar10 = local_a4;
      }
      local_b8 = uVar8 - (uVar10 - 4) % uVar8;
      local_a4 = local_b8 + 1 + uVar10;
    }
    ProtocolVersion::ProtocolVersion(&local_20,'\x03','\0');
    local_30[0] = PTR_vtable_0936c7c8 + 8;
    uVar10 = HandShakeBase::get_length((HandShakeBase *)local_90);
    uVar11 = (*(code *)*local_90[0])((Finished *)local_90);
    HandShakeHeader::set_type((HandShakeHeader *)local_30,uVar11);
    HandShakeHeader::set_length((HandShakeHeader *)local_30,uVar10);
    pSVar9 = (Security *)SSL::getSecurity(param_1);
    iVar4 = Security::get_connection(pSVar9);
    local_1f = *(undefined1 *)(iVar4 + 0x12f);
    local_20 = *(ProtocolVersion *)(iVar4 + 0x12e);
    local_24 = 0x16;
    local_1e = (short)local_a4 - 5;
    input_buffer::input_buffer(local_40);
    cVar2 = SSL::isTLSv1_1(param_1);
    if (cVar2 != '\0') {
      pSVar9 = (Security *)SSL::getSecurity(param_1);
      iVar4 = Security::get_parms(pSVar9);
      if (*(int *)(iVar4 + 8) == 1) {
        input_buffer::allocate(local_40,uVar8);
        puVar13 = (uchar *)input_buffer::get_buffer(local_40);
        pCVar5 = (Crypto *)SSL::getCrypto(param_1);
        this_02 = (RandomPool *)Crypto::get_random(pCVar5);
        RandomPool::Fill(this_02,puVar13,uVar8);
        input_buffer::add_size(local_40,uVar8);
      }
    }
    iVar4 = input_buffer::get_size(local_40);
    output_buffer::allocate(this,local_a4);
    poVar12 = (output_buffer *)operator<<(this,(RecordLayerHeader *)&local_24);
    uVar8 = input_buffer::get_size(local_40);
    puVar13 = (uchar *)input_buffer::get_buffer(local_40);
    output_buffer::write(poVar12,puVar13,uVar8);
    poVar12 = (output_buffer *)operator<<(poVar12,(HandShakeHeader *)local_30);
    operator<<(poVar12,(Finished *)local_90);
    bVar3 = (bool)SSL::isTLSv1_1(param_1);
    (anonymous_namespace)::hashHandShake(param_1,this,bVar3);
    cVar2 = SSL::isTLS(param_1);
    if (cVar2 == '\0') {
      iVar4 = output_buffer::get_size(this);
      iVar14 = output_buffer::get_buffer(this);
      hmac(param_1,local_64,iVar14 + 5,iVar4 + -5,0x16,0);
    }
    else {
      iVar14 = output_buffer::get_size(this);
      iVar16 = output_buffer::get_buffer(this);
      TLS_hmac(param_1,local_64,iVar16 + 5 + iVar4,(iVar14 - iVar4) + -5,0x16,0);
    }
    output_buffer::write(this,local_64,uVar7);
    pSVar9 = (Security *)SSL::getSecurity(param_1);
    iVar4 = Security::get_parms(pSVar9);
    if (*(int *)(iVar4 + 8) == 1) {
      uVar7 = 0;
      do {
        uVar7 = uVar7 + 1;
        puVar17 = (undefined1 *)output_buffer::operator[]((uint)this);
        *puVar17 = (undefined1)local_b8;
      } while (uVar7 <= local_b8);
    }
    input_buffer::input_buffer(local_50,(uint)local_1e);
    pCVar5 = (Crypto *)SSL::useCrypto(param_1);
    puVar15 = (undefined4 *)Crypto::use_cipher(pCVar5);
    pcVar1 = *(code **)*puVar15;
    iVar4 = output_buffer::get_size(this);
    iVar14 = output_buffer::get_buffer(this);
    uVar11 = input_buffer::get_buffer(local_50);
    (*pcVar1)(puVar15,uVar11,iVar14 + 5,iVar4 + -5);
    output_buffer::set_current(this,5);
    uVar7 = input_buffer::get_capacity(local_50);
    puVar13 = (uchar *)input_buffer::get_buffer(local_50);
    output_buffer::write(this,puVar13,uVar7);
    input_buffer::~input_buffer(local_50);
    input_buffer::~input_buffer(local_40);
    local_30[0] = PTR_vtable_0936c778 + 8;
    pSVar9 = (Security *)SSL::getSecurity(param_1);
    cVar2 = Security::get_resuming(pSVar9);
    if (cVar2 == '\0') {
      pSVar9 = (Security *)SSL::getSecurity(param_1);
      this_01 = (SSL_CTX *)Security::GetContext(pSVar9);
      cVar2 = SSL_CTX::GetSessionCacheOff(this_01);
      if (cVar2 == '\0') {
        this_03 = (Sessions *)GetSessions();
        Sessions::add(this_03,param_1);
      }
      if (param_2 == 1) {
        psVar18 = (sslHashes *)SSL::useHashes(param_1);
        pFVar19 = (Finished *)sslHashes::use_verify(psVar18);
        buildFinished(param_1,pFVar19,"SRVR");
      }
    }
    else if (param_2 == 0) {
      psVar18 = (sslHashes *)SSL::useHashes(param_1);
      pFVar19 = (Finished *)sslHashes::use_verify(psVar18);
      buildFinished(param_1,pFVar19,"CLNTSRVR");
    }
    pSVar9 = (Security *)SSL::useSecurity(param_1);
    this_00 = (Connection *)Security::use_connection(pSVar9);
    Connection::CleanMaster(this_00);
    if (param_3 == 0) {
      poVar12 = this;
      SSL::addBuffer(param_1,this);
      this = (output_buffer *)0x0;
    }
    else {
      uVar7 = output_buffer::get_size(this);
      poVar12 = (output_buffer *)output_buffer::get_buffer(this);
      SSL::Send(param_1,(uchar *)poVar12,uVar7);
      if (this != (output_buffer *)0x0) {
        output_buffer::~output_buffer(this);
      }
    }
    operator_delete(this,(uint)poVar12 & 0xffffff00);
    return;
  }
  return;
}
```
