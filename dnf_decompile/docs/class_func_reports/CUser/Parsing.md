# Parsing

`_ZN5CUser7ParsingEi`

`CUser::Parsing(int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08647890` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08647890  _ZN5CUser7ParsingEi
#           CUser::Parsing(int)
# range [0x08647890, 0x08647ffb]
08647890 +0x000:  push   %ebp
08647891 +0x001:  mov    %esp,%ebp
08647893 +0x003:  push   %edi
08647894 +0x004:  push   %esi
08647895 +0x005:  push   %ebx
08647896 +0x006:  sub    $0x63c,%esp
0864789c +0x00c:  mov    0x8(%ebp),%eax
0864789f +0x00f:  mov    0xf8(%eax),%edx
086478a5 +0x015:  mov    0xc(%ebp),%eax
086478a8 +0x018:  lea    (%edx,%eax,1),%eax
086478ab +0x01b:  mov    %eax,-0x3c(%ebp)
086478ae +0x01e:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
086478b5 +0x025:  call   081458ac <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x32f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x32f
086478ba +0x02a:  mov    $0x0,%edx
086478bf +0x02f:  mov    %eax,-0x38(%ebp)
086478c2 +0x032:  mov    %edx,-0x34(%ebp)
086478c5 +0x035:  mov    0x8(%ebp),%ecx
086478c8 +0x038:  mov    -0x38(%ebp),%eax
086478cb +0x03b:  mov    -0x34(%ebp),%edx
086478ce +0x03e:  mov    %eax,0xe4(%ecx)
086478d4 +0x044:  mov    %edx,0xe8(%ecx)
086478da +0x04a:  movl   $0xd,-0x28(%ebp)
086478e1 +0x051:  cmpl   $0xc,-0x3c(%ebp)
086478e5 +0x055:  jg     08647991 <+0x101>
086478eb +0x05b:  mov    0x8(%ebp),%eax
086478ee +0x05e:  mov    0xf8(%eax),%edx
086478f4 +0x064:  mov    0xc(%ebp),%eax
086478f7 +0x067:  add    %eax,%edx
086478f9 +0x069:  mov    0x8(%ebp),%eax
086478fc +0x06c:  mov    %edx,0xf8(%eax)
08647902 +0x072:  mov    0x8(%ebp),%eax
08647905 +0x075:  mov    0x10c(%eax),%edx
0864790b +0x07b:  mov    0xc(%ebp),%eax
0864790e +0x07e:  add    %eax,%edx
08647910 +0x080:  mov    0x8(%ebp),%eax
08647913 +0x083:  mov    %edx,0x10c(%eax)
08647919 +0x089:  mov    0x8(%ebp),%eax
0864791c +0x08c:  mov    0xf8(%eax),%esi
08647922 +0x092:  mov    0x8(%ebp),%eax
08647925 +0x095:  lea    0x110(%eax),%edi
0864792b +0x09b:  mov    0x8(%ebp),%eax
0864792e +0x09e:  mov    0x10c(%eax),%ebx
08647934 +0x0a4:  movl   $0x0,0xc(%esp)
0864793c +0x0ac:  movl   $0x69d,0x8(%esp)
08647944 +0x0b4:  movl   $&_ZZN5CUser7ParsingEiE19__PRETTY_FUNCTION__,0x4(%esp)
0864794c +0x0bc:  lea    -0x6c(%ebp),%eax
0864794f +0x0bf:  mov    %eax,(%esp)
08647952 +0x0c2:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08647957 +0x0c7:  mov    0xc(%ebp),%eax
0864795a +0x0ca:  mov    %eax,0x14(%esp)
0864795e +0x0ce:  mov    %esi,0x10(%esp)
08647962 +0x0d2:  mov    %edi,0xc(%esp)
08647966 +0x0d6:  mov    %ebx,0x8(%esp)
0864796a +0x0da:  movl   $"(offset:%x - buf:%x) = remainlen:%d, Recv Size[%d]",0x4(%esp)
08647972 +0x0e2:  lea    -0x6c(%ebp),%eax
08647975 +0x0e5:  mov    %eax,(%esp)
08647978 +0x0e8:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0864797d +0x0ed:  mov    0x8(%ebp),%eax
08647980 +0x0f0:  movb   $0x1,0x109(%eax)
08647987 +0x0f7:  mov    $0x1,%ebx
0864798c +0x0fc:  jmp    08647fef <+0x75f>
08647991 +0x101:  movl   $0x0,-0x24(%ebp)
08647998 +0x108:  jmp    0864799b <+0x10b>
0864799a +0x10a:  nop
0864799b +0x10b:  mov    0x8(%ebp),%eax
0864799e +0x10e:  mov    0xf8(%eax),%eax
086479a4 +0x114:  test   %eax,%eax
086479a6 +0x116:  je     086479c7 <+0x137>
086479a8 +0x118:  mov    0x8(%ebp),%eax
086479ab +0x11b:  mov    0x10c(%eax),%edx
086479b1 +0x121:  mov    0x8(%ebp),%eax
086479b4 +0x124:  mov    0xf8(%eax),%eax
086479ba +0x12a:  neg    %eax
086479bc +0x12c:  add    %eax,%edx
086479be +0x12e:  mov    0x8(%ebp),%eax
086479c1 +0x131:  mov    %edx,0x10c(%eax)
086479c7 +0x137:  mov    0x8(%ebp),%eax
086479ca +0x13a:  movzbl 0x109(%eax),%eax
086479d1 +0x141:  test   %al,%al
086479d3 +0x143:  je     08647a39 <+0x1a9>
086479d5 +0x145:  mov    0x8(%ebp),%eax
086479d8 +0x148:  mov    0xf8(%eax),%esi
086479de +0x14e:  mov    0x8(%ebp),%eax
086479e1 +0x151:  lea    0x110(%eax),%edi
086479e7 +0x157:  mov    0x8(%ebp),%eax
086479ea +0x15a:  mov    0x10c(%eax),%ebx
086479f0 +0x160:  movl   $0x0,0xc(%esp)
086479f8 +0x168:  movl   $0x6b2,0x8(%esp)
08647a00 +0x170:  movl   $&_ZZN5CUser7ParsingEiE19__PRETTY_FUNCTION__,0x4(%esp)
08647a08 +0x178:  lea    -0x5c(%ebp),%eax
08647a0b +0x17b:  mov    %eax,(%esp)
08647a0e +0x17e:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08647a13 +0x183:  mov    0xc(%ebp),%eax
08647a16 +0x186:  mov    %eax,0x14(%esp)
08647a1a +0x18a:  mov    %esi,0x10(%esp)
08647a1e +0x18e:  mov    %edi,0xc(%esp)
08647a22 +0x192:  mov    %ebx,0x8(%esp)
08647a26 +0x196:  movl   $"[BUFOFFSET TRACE](offset:%x - buf:%x) = remainlen:%d, Recv Size[%d]",0x4(%esp)
08647a2e +0x19e:  lea    -0x5c(%ebp),%eax
08647a31 +0x1a1:  mov    %eax,(%esp)
08647a34 +0x1a4:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08647a39 +0x1a9:  mov    0x8(%ebp),%eax
08647a3c +0x1ac:  mov    0x10c(%eax),%eax
08647a42 +0x1b2:  movl   $0xd,0x8(%esp)
08647a4a +0x1ba:  mov    %eax,0x4(%esp)
08647a4e +0x1be:  lea    -0x79(%ebp),%eax
08647a51 +0x1c1:  mov    %eax,(%esp)
08647a54 +0x1c4:  call   0807d8a0 <_init+0x198>
08647a59 +0x1c9:  mov    -0x76(%ebp),%eax
08647a5c +0x1cc:  mov    %eax,-0x2c(%ebp)
08647a5f +0x1cf:  cmpl   $0xc,-0x2c(%ebp)
08647a63 +0x1d3:  jbe    08647a6e <+0x1de>
08647a65 +0x1d5:  cmpl   $0x578,-0x2c(%ebp)
08647a6c +0x1dc:  jbe    08647abf <+0x22f>
08647a6e +0x1de:  mov    0x8(%ebp),%eax
08647a71 +0x1e1:  mov    0x10c(%eax),%eax
08647a77 +0x1e7:  mov    %eax,0x1c(%esp)
08647a7b +0x1eb:  mov    -0x2c(%ebp),%eax
08647a7e +0x1ee:  mov    %eax,0x18(%esp)
08647a82 +0x1f2:  mov    0xc(%ebp),%eax
08647a85 +0x1f5:  mov    %eax,0x14(%esp)
08647a89 +0x1f9:  movl   $"Recv Size[%d], Parsing Packet Size[%d], recvbuf_offset[%d] is Too Large",0x10(%esp)
08647a91 +0x201:  movl   $0x6ce,0xc(%esp)
08647a99 +0x209:  movl   $&_ZZN5CUser7ParsingEiE19__PRETTY_FUNCTION__,0x8(%esp)
08647aa1 +0x211:  movl   $"user.cpp",0x4(%esp)
08647aa9 +0x219:  movl   $0x1,(%esp)
08647ab0 +0x220:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08647ab5 +0x225:  mov    $0x0,%ebx
08647aba +0x22a:  jmp    08647fef <+0x75f>
08647abf +0x22f:  mov    -0x3c(%ebp),%eax
08647ac2 +0x232:  cmp    -0x2c(%ebp),%eax
08647ac5 +0x235:  jb     08647ee9 <+0x659>
08647acb +0x23b:  movl   $0x0,-0x20(%ebp)
08647ad2 +0x242:  mov    0x8(%ebp),%eax
08647ad5 +0x245:  lea    0x711f4(%eax),%edx
08647adb +0x24b:  lea    -0x79(%ebp),%eax
08647ade +0x24e:  mov    %eax,0x4(%esp)
08647ae2 +0x252:  mov    %edx,(%esp)
08647ae5 +0x255:  call   08696e58 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x36ad>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x36ad
08647aea +0x25a:  mov    %eax,-0x20(%ebp)
08647aed +0x25d:  cmpl   $0x0,-0x20(%ebp)
08647af1 +0x261:  setne  %al
08647af4 +0x264:  test   %al,%al
08647af6 +0x266:  je     08647b95 <+0x305>
08647afc +0x26c:  mov    0x8(%ebp),%eax
08647aff +0x26f:  mov    %eax,(%esp)
08647b02 +0x272:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08647b07 +0x277:  movl   $0x0,0x4(%esp)
08647b0f +0x27f:  mov    %eax,(%esp)
08647b12 +0x282:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08647b17 +0x287:  mov    %eax,%ebx
08647b19 +0x289:  movzwl -0x6e(%ebp),%eax
08647b1d +0x28d:  movzwl %ax,%esi
08647b20 +0x290:  mov    0x8(%ebp),%eax
08647b23 +0x293:  add    $0x711f4,%eax
08647b28 +0x298:  mov    %eax,(%esp)
08647b2b +0x29b:  call   08696e48 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x369d>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x369d
08647b30 +0x2a0:  movzwl -0x78(%ebp),%edx
08647b34 +0x2a4:  movzwl %dx,%ecx
08647b37 +0x2a7:  movzbl -0x79(%ebp),%edx
08647b3b +0x2ab:  movzbl %dl,%edx
08647b3e +0x2ae:  mov    %ebx,0x28(%esp)
08647b42 +0x2b2:  mov    %esi,0x24(%esp)
08647b46 +0x2b6:  mov    %eax,0x20(%esp)
08647b4a +0x2ba:  mov    %ecx,0x1c(%esp)
08647b4e +0x2be:  mov    %edx,0x18(%esp)
08647b52 +0x2c2:  mov    -0x20(%ebp),%eax
08647b55 +0x2c5:  mov    %eax,0x14(%esp)
08647b59 +0x2c9:  movl   $"[Packet Varifier Error %d][classification %d][packet id %d][ServerSequence: %d][ClientSequence: %d](m_id: %s)",0x10(%esp)
08647b61 +0x2d1:  movl   $0x6f4,0xc(%esp)
08647b69 +0x2d9:  movl   $&_ZZN5CUser7ParsingEiE19__PRETTY_FUNCTION__,0x8(%esp)
08647b71 +0x2e1:  movl   $"user.cpp",0x4(%esp)
08647b79 +0x2e9:  movl   $0x1,(%esp)
08647b80 +0x2f0:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08647b85 +0x2f5:  cmpl   $0x4,-0x20(%ebp)
08647b89 +0x2f9:  je     08647b95 <+0x305>
08647b8b +0x2fb:  mov    $0x0,%ebx
08647b90 +0x300:  jmp    08647fef <+0x75f>
08647b95 +0x305:  cmpl   $0x0,-0x20(%ebp)
08647b99 +0x309:  jne    08647e96 <+0x606>
08647b9f +0x30f:  mov    0x8(%ebp),%eax
08647ba2 +0x312:  mov    0x10c(%eax),%eax
08647ba8 +0x318:  mov    -0x2c(%ebp),%edx
08647bab +0x31b:  mov    %edx,0x8(%esp)
08647baf +0x31f:  mov    0x8(%ebp),%edx
08647bb2 +0x322:  mov    %edx,0x4(%esp)
08647bb6 +0x326:  mov    %eax,(%esp)
08647bb9 +0x329:  call   08274f73 <_Z22_NS_PI_2ND_RecvHash_CSPcP5CUserj>  ; _NS_PI_2ND_RecvHash_CS(char*, CUser*, unsigned int)
08647bbe +0x32e:  movzwl -0x78(%ebp),%eax
08647bc2 +0x332:  cmp    $0x25c,%ax
08647bc6 +0x336:  je     08647d05 <+0x475>
08647bcc +0x33c:  movl   $0x578,-0x88(%ebp)
08647bd6 +0x346:  lea    -0x604(%ebp),%edi
08647bdc +0x34c:  mov    -0x2c(%ebp),%eax
08647bdf +0x34f:  sub    $0xd,%eax
08647be2 +0x352:  mov    %eax,%esi
08647be4 +0x354:  mov    0x8(%ebp),%eax
08647be7 +0x357:  mov    0x10c(%eax),%eax
08647bed +0x35d:  add    $0xd,%eax
08647bf0 +0x360:  mov    %eax,-0x60c(%ebp)
08647bf6 +0x366:  movzwl -0x78(%ebp),%eax
08647bfa +0x36a:  movzwl %ax,%ebx
08647bfd +0x36d:  call   082a713a <_GLOBAL__I__ZN4CLog5this_E+0x3561>  ; global constructors keyed to CLog::this_+0x3561
08647c02 +0x372:  lea    -0x88(%ebp),%edx
08647c08 +0x378:  mov    %edx,0x14(%esp)
08647c0c +0x37c:  mov    %edi,0x10(%esp)
08647c10 +0x380:  mov    %esi,0xc(%esp)
08647c14 +0x384:  mov    -0x60c(%ebp),%edx
08647c1a +0x38a:  mov    %edx,0x8(%esp)
08647c1e +0x38e:  mov    %ebx,0x4(%esp)
08647c22 +0x392:  mov    %eax,(%esp)
08647c25 +0x395:  call   0809751e <_ZN6Cipher7DecryptEiPKhiPhPi>  ; Cipher::Decrypt(int, unsigned char const*, int, unsigned char*, int*)
08647c2a +0x39a:  mov    -0x88(%ebp),%eax
08647c30 +0x3a0:  test   %eax,%eax
08647c32 +0x3a2:  jle    08647c5c <+0x3cc>
08647c34 +0x3a4:  mov    -0x88(%ebp),%eax
08647c3a +0x3aa:  mov    0x8(%ebp),%edx
08647c3d +0x3ad:  mov    0x10c(%edx),%edx
08647c43 +0x3b3:  add    $0xd,%edx
08647c46 +0x3b6:  mov    %eax,0x8(%esp)
08647c4a +0x3ba:  lea    -0x604(%ebp),%eax
08647c50 +0x3c0:  mov    %eax,0x4(%esp)
08647c54 +0x3c4:  mov    %edx,(%esp)
08647c57 +0x3c7:  call   0807d8a0 <_init+0x198>
08647c5c +0x3cc:  mov    -0x2c(%ebp),%eax
08647c5f +0x3cf:  sub    $0xb,%eax
08647c62 +0x3d2:  mov    0x8(%ebp),%edx
08647c65 +0x3d5:  mov    0x10c(%edx),%edx
08647c6b +0x3db:  add    $0xb,%edx
08647c6e +0x3de:  mov    %eax,0x4(%esp)
08647c72 +0x3e2:  mov    %edx,(%esp)
08647c75 +0x3e5:  call   0848d4c8 <_ZN10Encryption6crc32NEPvi>  ; Encryption::crc32N(void*, int)
08647c7a +0x3ea:  mov    %eax,-0x8c(%ebp)
08647c80 +0x3f0:  lea    -0x79(%ebp),%eax
08647c83 +0x3f3:  add    $0x7,%eax
08647c86 +0x3f6:  mov    %eax,0x4(%esp)
08647c8a +0x3fa:  lea    -0x8c(%ebp),%eax
08647c90 +0x400:  mov    %eax,(%esp)
08647c93 +0x403:  call   0808cc4b <_Z31_NS_PI_2ND_MakeChecksumTo1Byte2RjS_>  ; _NS_PI_2ND_MakeChecksumTo1Byte2(unsigned int&, unsigned int&)
08647c98 +0x408:  mov    -0x72(%ebp),%edx
08647c9b +0x40b:  mov    -0x8c(%ebp),%eax
08647ca1 +0x411:  cmp    %eax,%edx
08647ca3 +0x413:  je     08647d05 <+0x475>
08647ca5 +0x415:  movzwl -0x78(%ebp),%eax
08647ca9 +0x419:  movzwl %ax,%edx
08647cac +0x41c:  movzbl -0x79(%ebp),%eax
08647cb0 +0x420:  movzbl %al,%eax
08647cb3 +0x423:  mov    %edx,0x4(%esp)
08647cb7 +0x427:  mov    %eax,(%esp)
08647cba +0x42a:  call   082a2112 <_Z13GetPacketName16ENUM_PACKETCLASSt>  ; GetPacketName(ENUM_PACKETCLASS, unsigned short)
08647cbf +0x42f:  mov    %eax,%ebx
08647cc1 +0x431:  movl   $0x5,0xc(%esp)
08647cc9 +0x439:  movl   $0x73a,0x8(%esp)
08647cd1 +0x441:  movl   $&_ZZN5CUser7ParsingEiE19__PRETTY_FUNCTION__,0x4(%esp)
08647cd9 +0x449:  lea    -0x4c(%ebp),%eax
08647cdc +0x44c:  mov    %eax,(%esp)
08647cdf +0x44f:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08647ce4 +0x454:  mov    %ebx,0x8(%esp)
08647ce8 +0x458:  movl   $"[CHECK SUM] check_sum error PACKET : %s",0x4(%esp)
08647cf0 +0x460:  lea    -0x4c(%ebp),%eax
08647cf3 +0x463:  mov    %eax,(%esp)
08647cf6 +0x466:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08647cfb +0x46b:  mov    $0x0,%ebx
08647d00 +0x470:  jmp    08647fef <+0x75f>
08647d05 +0x475:  mov    -0x2c(%ebp),%eax
08647d08 +0x478:  add    $0x8,%eax
08647d0b +0x47b:  mov    %eax,-0x1c(%ebp)
08647d0e +0x47e:  movl   $0x1,0x4(%esp)
08647d16 +0x486:  lea    -0x84(%ebp),%eax
08647d1c +0x48c:  mov    %eax,(%esp)
08647d1f +0x48f:  call   080de62c <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x1c>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x1c
08647d24 +0x494:  cmpl   $0xfff,-0x1c(%ebp)
08647d2b +0x49b:  jg     08647d5e <+0x4ce>
08647d2d +0x49d:  mov    &_ZN10GlobalData19s_small_stream_poolE,%eax
08647d32 +0x4a2:  movl   $0x758,0x8(%esp)
08647d3a +0x4aa:  movl   $"user.cpp",0x4(%esp)
08647d42 +0x4b2:  mov    %eax,(%esp)
08647d45 +0x4b5:  call   0828ff74 <_ZN15SmallStreamPool7AcquireEPKci>  ; SmallStreamPool::Acquire(char const*, int)
08647d4a +0x4ba:  mov    %eax,0x4(%esp)
08647d4e +0x4be:  lea    -0x84(%ebp),%eax
08647d54 +0x4c4:  mov    %eax,(%esp)
08647d57 +0x4c7:  call   080de644 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x34>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x34
08647d5c +0x4cc:  jmp    08647dd0 <+0x540>
08647d5e +0x4ce:  cmpl   $0xfff,-0x1c(%ebp)
08647d65 +0x4d5:  jle    08647da1 <+0x511>
08647d67 +0x4d7:  cmpl   $0x3fff,-0x1c(%ebp)
08647d6e +0x4de:  jg     08647da1 <+0x511>
08647d70 +0x4e0:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08647d75 +0x4e5:  movl   $0x75c,0x8(%esp)
08647d7d +0x4ed:  movl   $"user.cpp",0x4(%esp)
08647d85 +0x4f5:  mov    %eax,(%esp)
08647d88 +0x4f8:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08647d8d +0x4fd:  mov    %eax,0x4(%esp)
08647d91 +0x501:  lea    -0x84(%ebp),%eax
08647d97 +0x507:  mov    %eax,(%esp)
08647d9a +0x50a:  call   080de644 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x34>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x34
08647d9f +0x50f:  jmp    08647dd0 <+0x540>
08647da1 +0x511:  mov    &_ZN10GlobalData17s_big_stream_poolE,%eax
08647da6 +0x516:  movl   $0x760,0x8(%esp)
08647dae +0x51e:  movl   $"user.cpp",0x4(%esp)
08647db6 +0x526:  mov    %eax,(%esp)
08647db9 +0x529:  call   08290262 <_ZN13BigStreamPool7AcquireEPKci>  ; BigStreamPool::Acquire(char const*, int)
08647dbe +0x52e:  mov    %eax,0x4(%esp)
08647dc2 +0x532:  lea    -0x84(%ebp),%eax
08647dc8 +0x538:  mov    %eax,(%esp)
08647dcb +0x53b:  call   080de644 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x34>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x34
08647dd0 +0x540:  lea    -0x84(%ebp),%eax
08647dd6 +0x546:  mov    %eax,(%esp)
08647dd9 +0x549:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08647dde +0x54e:  movl   $0x0,0x4(%esp)
08647de6 +0x556:  mov    %eax,(%esp)
08647de9 +0x559:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08647dee +0x55e:  mov    0x8(%ebp),%eax
08647df1 +0x561:  mov    %eax,(%esp)
08647df4 +0x564:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
08647df9 +0x569:  mov    %eax,%ebx
08647dfb +0x56b:  lea    -0x84(%ebp),%eax
08647e01 +0x571:  mov    %eax,(%esp)
08647e04 +0x574:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08647e09 +0x579:  mov    %ebx,0x4(%esp)
08647e0d +0x57d:  mov    %eax,(%esp)
08647e10 +0x580:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08647e15 +0x585:  mov    -0x2c(%ebp),%esi
08647e18 +0x588:  mov    0x8(%ebp),%eax
08647e1b +0x58b:  mov    0x10c(%eax),%ebx
08647e21 +0x591:  lea    -0x84(%ebp),%eax
08647e27 +0x597:  mov    %eax,(%esp)
08647e2a +0x59a:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08647e2f +0x59f:  mov    %esi,0x8(%esp)
08647e33 +0x5a3:  mov    %ebx,0x4(%esp)
08647e37 +0x5a7:  mov    %eax,(%esp)
08647e3a +0x5aa:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08647e3f +0x5af:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08647e44 +0x5b4:  lea    -0x84(%ebp),%edx
08647e4a +0x5ba:  mov    %edx,0x8(%esp)
08647e4e +0x5be:  movl   $0x1,0x4(%esp)
08647e56 +0x5c6:  mov    %eax,(%esp)
08647e59 +0x5c9:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08647e5e +0x5ce:  mov    0x8(%ebp),%eax
08647e61 +0x5d1:  movb   $0x0,0x109(%eax)
08647e68 +0x5d8:  lea    -0x84(%ebp),%eax
08647e6e +0x5de:  mov    %eax,(%esp)
08647e71 +0x5e1:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08647e76 +0x5e6:  jmp    08647e96 <+0x606>
08647e78 +0x5e8:  mov    %edx,%ebx
08647e7a +0x5ea:  mov    %eax,%esi
08647e7c +0x5ec:  lea    -0x84(%ebp),%eax
08647e82 +0x5f2:  mov    %eax,(%esp)
08647e85 +0x5f5:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08647e8a +0x5fa:  mov    %esi,%eax
08647e8c +0x5fc:  mov    %ebx,%edx
08647e8e +0x5fe:  mov    %eax,(%esp)
08647e91 +0x601:  call   08ae3750 <_Unwind_Resume>
08647e96 +0x606:  mov    -0x3c(%ebp),%eax
08647e99 +0x609:  sub    -0x2c(%ebp),%eax
08647e9c +0x60c:  mov    %eax,-0x3c(%ebp)
08647e9f +0x60f:  mov    0x8(%ebp),%eax
08647ea2 +0x612:  mov    0x10c(%eax),%eax
08647ea8 +0x618:  mov    %eax,%edx
08647eaa +0x61a:  add    -0x2c(%ebp),%edx
08647ead +0x61d:  mov    0x8(%ebp),%eax
08647eb0 +0x620:  mov    %edx,0x10c(%eax)
08647eb6 +0x626:  mov    0x8(%ebp),%eax
08647eb9 +0x629:  movl   $0x0,0xf8(%eax)
08647ec3 +0x633:  cmpl   $0x0,-0x3c(%ebp)
08647ec7 +0x637:  jne    08647edd <+0x64d>
08647ec9 +0x639:  mov    0x8(%ebp),%eax
08647ecc +0x63c:  lea    0x110(%eax),%edx
08647ed2 +0x642:  mov    0x8(%ebp),%eax
08647ed5 +0x645:  mov    %edx,0x10c(%eax)
08647edb +0x64b:  jmp    08647eea <+0x65a>
08647edd +0x64d:  cmpl   $0xc,-0x3c(%ebp)
08647ee1 +0x651:  jg     0864799a <+0x10a>
08647ee7 +0x657:  jmp    08647eea <+0x65a>
08647ee9 +0x659:  nop
08647eea +0x65a:  mov    0x8(%ebp),%eax
08647eed +0x65d:  movb   $0x0,0x109(%eax)
08647ef4 +0x664:  cmpl   $0x0,-0x3c(%ebp)
08647ef8 +0x668:  jle    08647fea <+0x75a>
08647efe +0x66e:  cmpl   $0x1000,-0x3c(%ebp)
08647f05 +0x675:  jle    08647f44 <+0x6b4>
08647f07 +0x677:  mov    -0x3c(%ebp),%eax
08647f0a +0x67a:  mov    %eax,0x14(%esp)
08647f0e +0x67e:  movl   $"[PARSING LENGTH EXCEPTION] parsinglength > MAX_RECV_BUF , memmove : parsinglength = %d",0x10(%esp)
08647f16 +0x686:  movl   $0x793,0xc(%esp)
08647f1e +0x68e:  movl   $&_ZZN5CUser7ParsingEiE19__PRETTY_FUNCTION__,0x8(%esp)
08647f26 +0x696:  movl   $"user.cpp",0x4(%esp)
08647f2e +0x69e:  movl   $0x1,(%esp)
08647f35 +0x6a5:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08647f3a +0x6aa:  mov    $0x0,%ebx
08647f3f +0x6af:  jmp    08647fef <+0x75f>
08647f44 +0x6b4:  mov    -0x3c(%ebp),%edx
08647f47 +0x6b7:  mov    0x8(%ebp),%eax
08647f4a +0x6ba:  mov    0x10c(%eax),%eax
08647f50 +0x6c0:  mov    0x8(%ebp),%ecx
08647f53 +0x6c3:  add    $0x110,%ecx
08647f59 +0x6c9:  mov    %edx,0x8(%esp)
08647f5d +0x6cd:  mov    %eax,0x4(%esp)
08647f61 +0x6d1:  mov    %ecx,(%esp)
08647f64 +0x6d4:  call   0807d880 <_init+0x178>
08647f69 +0x6d9:  mov    -0x3c(%ebp),%edx
08647f6c +0x6dc:  mov    0x8(%ebp),%eax
08647f6f +0x6df:  mov    %edx,0xf8(%eax)
08647f75 +0x6e5:  mov    0x8(%ebp),%eax
08647f78 +0x6e8:  lea    0x110(%eax),%edx
08647f7e +0x6ee:  mov    -0x3c(%ebp),%eax
08647f81 +0x6f1:  add    %eax,%edx
08647f83 +0x6f3:  mov    0x8(%ebp),%eax
08647f86 +0x6f6:  mov    %edx,0x10c(%eax)
08647f8c +0x6fc:  jmp    08647fea <+0x75a>
08647f8e +0x6fe:  mov    %eax,(%esp)
08647f91 +0x701:  call   08725ce0 <__cxa_begin_catch>
08647f96 +0x706:  mov    -0x3c(%ebp),%eax
08647f99 +0x709:  mov    %eax,0x14(%esp)
08647f9d +0x70d:  movl   $"[PARSING EXCEPTION] memmove : parsinglength = %d",0x10(%esp)
08647fa5 +0x715:  movl   $0x7a1,0xc(%esp)
08647fad +0x71d:  movl   $&_ZZN5CUser7ParsingEiE19__PRETTY_FUNCTION__,0x8(%esp)
08647fb5 +0x725:  movl   $"user.cpp",0x4(%esp)
08647fbd +0x72d:  movl   $0x1,(%esp)
08647fc4 +0x734:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08647fc9 +0x739:  mov    $0x0,%ebx
08647fce +0x73e:  call   08725c30 <__cxa_end_catch>
08647fd3 +0x743:  jmp    08647fef <+0x75f>
08647fd5 +0x745:  mov    %edx,%ebx
08647fd7 +0x747:  mov    %eax,%esi
08647fd9 +0x749:  call   08725c30 <__cxa_end_catch>
08647fde +0x74e:  mov    %esi,%eax
08647fe0 +0x750:  mov    %ebx,%edx
08647fe2 +0x752:  mov    %eax,(%esp)
08647fe5 +0x755:  call   08ae3750 <_Unwind_Resume>
08647fea +0x75a:  mov    $0x1,%ebx
08647fef +0x75f:  mov    %ebx,%eax
08647ff1 +0x761:  add    $0x63c,%esp
08647ff7 +0x767:  pop    %ebx
08647ff8 +0x768:  pop    %esi
08647ff9 +0x769:  pop    %edi
08647ffa +0x76a:  pop    %ebp
08647ffb +0x76b:  ret
```

## 反编译 C

```c
// CUser::Parsing @ 0x8647890

/* CUser::Parsing(int) */

undefined4 __thiscall CUser::Parsing(CUser *this,int param_1)

{
  void *pvVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  Cipher *this_00;
  Stream *pSVar6;
  CStreamGuard *pCVar7;
  int iVar8;
  uchar local_608 [1400];
  uint local_90;
  size_t local_8c;
  CStreamGuard local_88 [11];
  _header local_7d;
  ushort local_7c;
  uint local_7a;
  uint local_76;
  ushort local_72;
  cMyTrace local_70 [16];
  cMyTrace local_60 [16];
  cMyTrace local_50 [16];
  uint local_40;
  undefined4 local_3c;
  undefined4 local_38;
  uint local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  
  local_40 = *(int *)(this + 0xf8) + param_1;
  local_3c = CSystemTime::getCurTickCount((CSystemTime *)GlobalData::s_systemTime_);
  local_38 = 0;
  *(undefined4 *)(this + 0xe4) = local_3c;
  *(undefined4 *)(this + 0xe8) = 0;
  local_2c = 0xd;
  if ((int)local_40 < 0xd) {
    *(int *)(this + 0xf8) = *(int *)(this + 0xf8) + param_1;
    *(int *)(this + 0x10c) = *(int *)(this + 0x10c) + param_1;
    uVar3 = *(undefined4 *)(this + 0xf8);
    uVar4 = *(undefined4 *)(this + 0x10c);
    cMyTrace::cMyTrace(local_70,"bool CUser::Parsing(int)",0x69d,0);
    cMyTrace::operator()
              (local_70,"(offset:%x - buf:%x) = remainlen:%d, Recv Size[%d]",uVar4,this + 0x110,
               uVar3,param_1);
    this[0x109] = (CUser)0x1;
  }
  else {
    local_28 = 0;
    do {
      if (*(int *)(this + 0xf8) != 0) {
        *(int *)(this + 0x10c) = *(int *)(this + 0x10c) - *(int *)(this + 0xf8);
      }
      if (this[0x109] != (CUser)0x0) {
        uVar3 = *(undefined4 *)(this + 0xf8);
        uVar4 = *(undefined4 *)(this + 0x10c);
        cMyTrace::cMyTrace(local_60,"bool CUser::Parsing(int)",0x6b2,0);
        cMyTrace::operator()
                  (local_60,"[BUFOFFSET TRACE](offset:%x - buf:%x) = remainlen:%d, Recv Size[%d]",
                   uVar4,this + 0x110,uVar3,param_1);
      }
      memcpy(&local_7d,*(void **)(this + 0x10c),0xd);
      local_30 = local_7a;
      if ((local_7a < 0xd) || (0x578 < local_7a)) {
        LogManager::logFormat
                  (1,"user.cpp","bool CUser::Parsing(int)",0x6ce,
                   "Recv Size[%d], Parsing Packet Size[%d], recvbuf_offset[%d] is Too Large",param_1
                   ,local_7a,*(undefined4 *)(this + 0x10c));
        return 0;
      }
      if (local_40 < local_7a) break;
      local_24 = 0;
      local_24 = CPacketVerifier::UpdatePacket((CPacketVerifier *)(this + 0x711f4),&local_7d);
      if (local_24 != 0) {
        uVar2 = get_acc_id(this);
        uVar3 = NumberToString(uVar2,0);
        uVar2 = (uint)local_72;
        uVar4 = CPacketVerifier::GetSequence((CPacketVerifier *)(this + 0x711f4));
        LogManager::logFormat
                  (1,"user.cpp","bool CUser::Parsing(int)",0x6f4,
                   "[Packet Varifier Error %d][classification %d][packet id %d][ServerSequence: %d][ClientSequence: %d](m_id: %s)"
                   ,local_24,(uint)(byte)local_7d,(uint)local_7c,uVar4,uVar2,uVar3);
        if (local_24 != 4) {
          return 0;
        }
      }
      if (local_24 == 0) {
        _NS_PI_2ND_RecvHash_CS(*(char **)(this + 0x10c),this,local_30);
        if (local_7c != 0x25c) {
          local_8c = 0x578;
          iVar5 = local_30 - 0xd;
          iVar8 = *(int *)(this + 0x10c);
          uVar2 = (uint)local_7c;
          this_00 = (Cipher *)G_Cipher();
          Cipher::Decrypt(this_00,uVar2,(uchar *)(iVar8 + 0xd),iVar5,local_608,(int *)&local_8c);
          if (0 < (int)local_8c) {
            memcpy((void *)(*(int *)(this + 0x10c) + 0xd),local_608,local_8c);
          }
          local_90 = Encryption::crc32N((void *)(*(int *)(this + 0x10c) + 0xb),local_30 - 0xb);
          _NS_PI_2ND_MakeChecksumTo1Byte2(&local_90,&local_76);
          if (local_76 != local_90) {
            uVar3 = GetPacketName(local_7d,local_7c);
            cMyTrace::cMyTrace(local_50,"bool CUser::Parsing(int)",0x73a,5);
            cMyTrace::operator()(local_50,"[CHECK SUM] check_sum error PACKET : %s",uVar3);
            return 0;
          }
        }
        local_20 = local_30 + 8;
        CStreamGuard::CStreamGuard(local_88,true);
        if (local_20 < 0x1000) {
                    /* try { // try from 08647d45 to 08647e5d has its CatchHandler @ 08647e78 */
          pSVar6 = (Stream *)
                   SmallStreamPool::Acquire(GlobalData::s_small_stream_pool,"user.cpp",0x758);
          CStreamGuard::Set(local_88,pSVar6);
        }
        else if ((local_20 < 0x1000) || (0x3fff < local_20)) {
          pSVar6 = (Stream *)BigStreamPool::Acquire(GlobalData::s_big_stream_pool,"user.cpp",0x760);
          CStreamGuard::Set(local_88,pSVar6);
        }
        else {
          pSVar6 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"user.cpp",0x75c);
          CStreamGuard::Set(local_88,pSVar6);
        }
        pCVar7 = (CStreamGuard *)CStreamGuard::operator*(local_88);
        CStreamGuard::operator<<(pCVar7,0);
        iVar8 = GetUID(this);
        pCVar7 = (CStreamGuard *)CStreamGuard::operator*(local_88);
        CStreamGuard::operator<<(pCVar7,iVar8);
        uVar2 = local_30;
        pvVar1 = *(void **)(this + 0x10c);
        pCVar7 = (CStreamGuard *)CStreamGuard::operator->(local_88);
        CStreamGuard::put_binary(pCVar7,pvVar1,uVar2);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_88);
        this[0x109] = (CUser)0x0;
        CStreamGuard::~CStreamGuard(local_88);
      }
      local_40 = local_40 - local_30;
      *(uint *)(this + 0x10c) = *(int *)(this + 0x10c) + local_30;
      *(undefined4 *)(this + 0xf8) = 0;
      if (local_40 == 0) {
        *(CUser **)(this + 0x10c) = this + 0x110;
        break;
      }
    } while (0xc < (int)local_40);
    this[0x109] = (CUser)0x0;
    if (0 < (int)local_40) {
      if (0x1000 < (int)local_40) {
                    /* try { // try from 08647f35 to 08647f39 has its CatchHandler @ 08647f8e */
        LogManager::logFormat
                  (1,"user.cpp","bool CUser::Parsing(int)",0x793,
                   "[PARSING LENGTH EXCEPTION] parsinglength > MAX_RECV_BUF , memmove : parsinglength = %d"
                   ,local_40);
        return 0;
      }
      memmove(this + 0x110,*(void **)(this + 0x10c),local_40);
      *(uint *)(this + 0xf8) = local_40;
      *(CUser **)(this + 0x10c) = this + local_40 + 0x110;
    }
  }
  return 1;
}
```
