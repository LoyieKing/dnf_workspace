# build_certHashes

`_ZN5yaSSL16build_certHashesERNS_3SSLERNS_6HashesE`

`yaSSL::build_certHashes(yaSSL::SSL&, yaSSL::Hashes&)`

| 类 | 地址 |
|---|---|
| `yaSSL` | `0x0879cea0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0879cea0  _ZN5yaSSL16build_certHashesERNS_3SSLERNS_6HashesE
#           yaSSL::build_certHashes(yaSSL::SSL&, yaSSL::Hashes&)
# range [0x0879cea0, 0x0879d5cc]
0879cea0 +0x000:  push   %ebp
0879cea1 +0x001:  mov    %esp,%ebp
0879cea3 +0x003:  push   %edi
0879cea4 +0x004:  push   %esi
0879cea5 +0x005:  push   %ebx
0879cea6 +0x006:  call   08722df8 <__i686.get_pc_thunk.bx>
0879ceab +0x00b:  add    $0xbcfced,%ebx
0879ceb1 +0x011:  sub    $0x14c,%esp
0879ceb7 +0x017:  mov    0x8(%ebp),%edi
0879ceba +0x01a:  mov    %edi,(%esp)
0879cebd +0x01d:  call   0874e090 <_ZNK5yaSSL3SSL9getHashesEv>  ; yaSSL::SSL::getHashes() const
0879cec2 +0x022:  mov    %eax,(%esp)
0879cec5 +0x025:  call   0874e830 <_ZNK5yaSSL9sslHashes7get_MD5Ev>  ; yaSSL::sslHashes::get_MD5() const
0879ceca +0x02a:  mov    %eax,0x4(%esp)
0879cece +0x02e:  lea    -0x20(%ebp),%eax
0879ced1 +0x031:  mov    %eax,-0x11c(%ebp)
0879ced7 +0x037:  mov    %eax,(%esp)
0879ceda +0x03a:  call   08799fb0 <_ZN5yaSSL3MD5C1ERKS0_>  ; yaSSL::MD5::MD5(yaSSL::MD5 const&)
0879cedf +0x03f:  mov    %edi,(%esp)
0879cee2 +0x042:  call   0874e090 <_ZNK5yaSSL3SSL9getHashesEv>  ; yaSSL::SSL::getHashes() const
0879cee7 +0x047:  mov    %eax,(%esp)
0879ceea +0x04a:  call   0874e840 <_ZNK5yaSSL9sslHashes7get_SHAEv>  ; yaSSL::sslHashes::get_SHA() const
0879ceef +0x04f:  lea    -0x28(%ebp),%edx
0879cef2 +0x052:  mov    %edx,-0x120(%ebp)
0879cef8 +0x058:  mov    %edx,(%esp)
0879cefb +0x05b:  mov    %eax,0x4(%esp)
0879ceff +0x05f:  call   08799f10 <_ZN5yaSSL3SHAC1ERKS0_>  ; yaSSL::SHA::SHA(yaSSL::SHA const&)
0879cf04 +0x064:  mov    %edi,(%esp)
0879cf07 +0x067:  call   0874e9a0 <_ZNK5yaSSL3SSL5isTLSEv>  ; yaSSL::SSL::isTLS() const
0879cf0c +0x06c:  test   %al,%al
0879cf0e +0x06e:  jne    0879d588 <+0x6e8>
0879cf14 +0x074:  mov    %edi,(%esp)
0879cf17 +0x077:  call   0874e070 <_ZNK5yaSSL3SSL11getSecurityEv>  ; yaSSL::SSL::getSecurity() const
0879cf1c +0x07c:  mov    %eax,(%esp)
0879cf1f +0x07f:  call   0874e960 <_ZNK5yaSSL8Security14get_connectionEv>  ; yaSSL::Security::get_connection() const
0879cf24 +0x084:  lea    0x4(%eax),%esi
0879cf27 +0x087:  mov    %eax,%edx
0879cf29 +0x089:  lea    -0x9c(%ebp),%eax
0879cf2f +0x08f:  mov    %eax,-0x124(%ebp)
0879cf35 +0x095:  mov    0x4(%edx),%eax
0879cf38 +0x098:  mov    %eax,-0x9c(%ebp)
0879cf3e +0x09e:  mov    0x4(%esi),%eax
0879cf41 +0x0a1:  mov    %eax,-0x98(%ebp)
0879cf47 +0x0a7:  mov    0x8(%esi),%eax
0879cf4a +0x0aa:  mov    %eax,-0x94(%ebp)
0879cf50 +0x0b0:  mov    0xc(%esi),%eax
0879cf53 +0x0b3:  mov    %eax,-0x90(%ebp)
0879cf59 +0x0b9:  mov    0x10(%esi),%eax
0879cf5c +0x0bc:  mov    %eax,-0x8c(%ebp)
0879cf62 +0x0c2:  mov    0x14(%esi),%eax
0879cf65 +0x0c5:  mov    %eax,-0x88(%ebp)
0879cf6b +0x0cb:  mov    0x18(%esi),%eax
0879cf6e +0x0ce:  mov    %eax,-0x84(%ebp)
0879cf74 +0x0d4:  mov    0x1c(%esi),%eax
0879cf77 +0x0d7:  mov    %eax,-0x80(%ebp)
0879cf7a +0x0da:  mov    0x20(%esi),%eax
0879cf7d +0x0dd:  mov    %eax,-0x7c(%ebp)
0879cf80 +0x0e0:  mov    0x24(%esi),%eax
0879cf83 +0x0e3:  mov    %eax,-0x78(%ebp)
0879cf86 +0x0e6:  mov    0x28(%esi),%eax
0879cf89 +0x0e9:  mov    %eax,-0x74(%ebp)
0879cf8c +0x0ec:  mov    0x2c(%esi),%eax
0879cf8f +0x0ef:  movb   $0x36,-0x6c(%ebp)
0879cf93 +0x0f3:  movb   $0x36,-0x6b(%ebp)
0879cf97 +0x0f7:  movb   $0x36,-0x6a(%ebp)
0879cf9b +0x0fb:  mov    %eax,-0x70(%ebp)
0879cf9e +0x0fe:  movb   $0x36,-0x69(%ebp)
0879cfa2 +0x102:  movb   $0x36,-0x68(%ebp)
0879cfa6 +0x106:  movb   $0x36,-0x67(%ebp)
0879cfaa +0x10a:  movb   $0x36,-0x66(%ebp)
0879cfae +0x10e:  movb   $0x36,-0x65(%ebp)
0879cfb2 +0x112:  movb   $0x36,-0x64(%ebp)
0879cfb6 +0x116:  movb   $0x36,-0x63(%ebp)
0879cfba +0x11a:  movb   $0x36,-0x62(%ebp)
0879cfbe +0x11e:  movb   $0x36,-0x61(%ebp)
0879cfc2 +0x122:  movb   $0x36,-0x60(%ebp)
0879cfc6 +0x126:  movb   $0x36,-0x5f(%ebp)
0879cfca +0x12a:  movb   $0x36,-0x5e(%ebp)
0879cfce +0x12e:  movb   $0x36,-0x5d(%ebp)
0879cfd2 +0x132:  movb   $0x36,-0x5c(%ebp)
0879cfd6 +0x136:  movb   $0x36,-0x5b(%ebp)
0879cfda +0x13a:  movb   $0x36,-0x5a(%ebp)
0879cfde +0x13e:  movb   $0x36,-0x59(%ebp)
0879cfe2 +0x142:  movb   $0x36,-0x58(%ebp)
0879cfe6 +0x146:  movb   $0x36,-0x57(%ebp)
0879cfea +0x14a:  movb   $0x36,-0x56(%ebp)
0879cfee +0x14e:  movb   $0x36,-0x55(%ebp)
0879cff2 +0x152:  movb   $0x36,-0x54(%ebp)
0879cff6 +0x156:  movb   $0x36,-0x53(%ebp)
0879cffa +0x15a:  movb   $0x36,-0x52(%ebp)
0879cffe +0x15e:  movb   $0x36,-0x51(%ebp)
0879d002 +0x162:  movb   $0x36,-0x50(%ebp)
0879d006 +0x166:  movb   $0x36,-0x4f(%ebp)
0879d00a +0x16a:  movb   $0x36,-0x4e(%ebp)
0879d00e +0x16e:  movb   $0x36,-0x4d(%ebp)
0879d012 +0x172:  movb   $0x36,-0x4c(%ebp)
0879d016 +0x176:  movb   $0x36,-0x4b(%ebp)
0879d01a +0x17a:  movb   $0x36,-0x4a(%ebp)
0879d01e +0x17e:  movb   $0x36,-0x49(%ebp)
0879d022 +0x182:  movb   $0x36,-0x48(%ebp)
0879d026 +0x186:  movb   $0x36,-0x47(%ebp)
0879d02a +0x18a:  movb   $0x36,-0x46(%ebp)
0879d02e +0x18e:  movb   $0x36,-0x45(%ebp)
0879d032 +0x192:  movb   $0x36,-0x44(%ebp)
0879d036 +0x196:  movb   $0x36,-0x43(%ebp)
0879d03a +0x19a:  movb   $0x36,-0x42(%ebp)
0879d03e +0x19e:  mov    %edx,-0x130(%ebp)
0879d044 +0x1a4:  movb   $0x36,-0x41(%ebp)
0879d048 +0x1a8:  movb   $0x36,-0x40(%ebp)
0879d04c +0x1ac:  movb   $0x36,-0x3f(%ebp)
0879d050 +0x1b0:  movb   $0x36,-0x3e(%ebp)
0879d054 +0x1b4:  movb   $0x36,-0x3d(%ebp)
0879d058 +0x1b8:  mov    %edi,(%esp)
0879d05b +0x1bb:  call   0874e2e0 <_ZN5yaSSL3SSL9useHashesEv>  ; yaSSL::SSL::useHashes()
0879d060 +0x1c0:  mov    %eax,(%esp)
0879d063 +0x1c3:  call   0874e870 <_ZN5yaSSL9sslHashes7use_MD5Ev>  ; yaSSL::sslHashes::use_MD5()
0879d068 +0x1c8:  mov    (%eax),%ecx
0879d06a +0x1ca:  mov    %eax,(%esp)
0879d06d +0x1cd:  movl   $0x60,0xc(%esp)
0879d075 +0x1d5:  mov    %ecx,-0x12c(%ebp)
0879d07b +0x1db:  mov    -0x124(%ebp),%ecx
0879d081 +0x1e1:  mov    -0x12c(%ebp),%eax
0879d087 +0x1e7:  mov    %ecx,0x8(%esp)
0879d08b +0x1eb:  lea    -0x3c(%ebp),%ecx
0879d08e +0x1ee:  mov    %ecx,-0x128(%ebp)
0879d094 +0x1f4:  mov    %ecx,0x4(%esp)
0879d098 +0x1f8:  call   *0x4(%eax)
0879d09b +0x1fb:  mov    -0x130(%ebp),%edx
0879d0a1 +0x201:  lea    -0x10c(%ebp),%ecx
0879d0a7 +0x207:  mov    %ecx,-0x12c(%ebp)
0879d0ad +0x20d:  mov    0x4(%edx),%eax
0879d0b0 +0x210:  mov    %eax,-0x10c(%ebp)
0879d0b6 +0x216:  mov    0x4(%esi),%eax
0879d0b9 +0x219:  mov    %eax,-0x108(%ebp)
0879d0bf +0x21f:  mov    0x8(%esi),%eax
0879d0c2 +0x222:  mov    %eax,-0x104(%ebp)
0879d0c8 +0x228:  mov    0xc(%esi),%eax
0879d0cb +0x22b:  mov    %eax,-0x100(%ebp)
0879d0d1 +0x231:  mov    0x10(%esi),%eax
0879d0d4 +0x234:  mov    %eax,-0xfc(%ebp)
0879d0da +0x23a:  mov    0x14(%esi),%eax
0879d0dd +0x23d:  mov    %eax,-0xf8(%ebp)
0879d0e3 +0x243:  mov    0x18(%esi),%eax
0879d0e6 +0x246:  mov    %eax,-0xf4(%ebp)
0879d0ec +0x24c:  mov    0x1c(%esi),%eax
0879d0ef +0x24f:  mov    %eax,-0xf0(%ebp)
0879d0f5 +0x255:  mov    0x20(%esi),%eax
0879d0f8 +0x258:  mov    %eax,-0xec(%ebp)
0879d0fe +0x25e:  mov    0x24(%esi),%eax
0879d101 +0x261:  mov    %eax,-0xe8(%ebp)
0879d107 +0x267:  mov    0x28(%esi),%eax
0879d10a +0x26a:  mov    %eax,-0xe4(%ebp)
0879d110 +0x270:  mov    0x2c(%esi),%eax
0879d113 +0x273:  movb   $0x5c,-0xdc(%ebp)
0879d11a +0x27a:  movb   $0x5c,-0xdb(%ebp)
0879d121 +0x281:  movb   $0x5c,-0xda(%ebp)
0879d128 +0x288:  mov    %eax,-0xe0(%ebp)
0879d12e +0x28e:  movb   $0x5c,-0xd9(%ebp)
0879d135 +0x295:  movb   $0x5c,-0xd8(%ebp)
0879d13c +0x29c:  movb   $0x5c,-0xd7(%ebp)
0879d143 +0x2a3:  movb   $0x5c,-0xd6(%ebp)
0879d14a +0x2aa:  movb   $0x5c,-0xd5(%ebp)
0879d151 +0x2b1:  movb   $0x5c,-0xd4(%ebp)
0879d158 +0x2b8:  movb   $0x5c,-0xd3(%ebp)
0879d15f +0x2bf:  movb   $0x5c,-0xd2(%ebp)
0879d166 +0x2c6:  movb   $0x5c,-0xd1(%ebp)
0879d16d +0x2cd:  movb   $0x5c,-0xd0(%ebp)
0879d174 +0x2d4:  movb   $0x5c,-0xcf(%ebp)
0879d17b +0x2db:  movb   $0x5c,-0xce(%ebp)
0879d182 +0x2e2:  movb   $0x5c,-0xcd(%ebp)
0879d189 +0x2e9:  movb   $0x5c,-0xcc(%ebp)
0879d190 +0x2f0:  movb   $0x5c,-0xcb(%ebp)
0879d197 +0x2f7:  movb   $0x5c,-0xca(%ebp)
0879d19e +0x2fe:  movb   $0x5c,-0xc9(%ebp)
0879d1a5 +0x305:  movb   $0x5c,-0xc8(%ebp)
0879d1ac +0x30c:  movb   $0x5c,-0xc7(%ebp)
0879d1b3 +0x313:  movb   $0x5c,-0xc6(%ebp)
0879d1ba +0x31a:  movb   $0x5c,-0xc5(%ebp)
0879d1c1 +0x321:  movb   $0x5c,-0xc4(%ebp)
0879d1c8 +0x328:  movb   $0x5c,-0xc3(%ebp)
0879d1cf +0x32f:  movb   $0x5c,-0xc2(%ebp)
0879d1d6 +0x336:  movb   $0x5c,-0xc1(%ebp)
0879d1dd +0x33d:  movb   $0x5c,-0xc0(%ebp)
0879d1e4 +0x344:  movb   $0x5c,-0xbf(%ebp)
0879d1eb +0x34b:  movb   $0x5c,-0xbe(%ebp)
0879d1f2 +0x352:  movb   $0x5c,-0xbd(%ebp)
0879d1f9 +0x359:  movb   $0x5c,-0xbc(%ebp)
0879d200 +0x360:  movb   $0x5c,-0xbb(%ebp)
0879d207 +0x367:  movb   $0x5c,-0xba(%ebp)
0879d20e +0x36e:  movb   $0x5c,-0xb9(%ebp)
0879d215 +0x375:  movb   $0x5c,-0xb8(%ebp)
0879d21c +0x37c:  movb   $0x5c,-0xb7(%ebp)
0879d223 +0x383:  movb   $0x5c,-0xb6(%ebp)
0879d22a +0x38a:  movb   $0x5c,-0xb5(%ebp)
0879d231 +0x391:  movb   $0x5c,-0xb4(%ebp)
0879d238 +0x398:  movb   $0x5c,-0xb3(%ebp)
0879d23f +0x39f:  mov    -0x3c(%ebp),%eax
0879d242 +0x3a2:  movb   $0x5c,-0xb2(%ebp)
0879d249 +0x3a9:  movb   $0x5c,-0xb1(%ebp)
0879d250 +0x3b0:  movb   $0x5c,-0xb0(%ebp)
0879d257 +0x3b7:  mov    %eax,-0xac(%ebp)
0879d25d +0x3bd:  mov    -0x38(%ebp),%eax
0879d260 +0x3c0:  movb   $0x5c,-0xaf(%ebp)
0879d267 +0x3c7:  movb   $0x5c,-0xae(%ebp)
0879d26e +0x3ce:  movb   $0x5c,-0xad(%ebp)
0879d275 +0x3d5:  mov    %eax,-0xa8(%ebp)
0879d27b +0x3db:  mov    -0x34(%ebp),%eax
0879d27e +0x3de:  mov    %edi,(%esp)
0879d281 +0x3e1:  mov    %eax,-0xa4(%ebp)
0879d287 +0x3e7:  mov    -0x30(%ebp),%eax
0879d28a +0x3ea:  mov    %eax,-0xa0(%ebp)
0879d290 +0x3f0:  call   0874e2e0 <_ZN5yaSSL3SSL9useHashesEv>  ; yaSSL::SSL::useHashes()
0879d295 +0x3f5:  mov    %eax,(%esp)
0879d298 +0x3f8:  call   0874e870 <_ZN5yaSSL9sslHashes7use_MD5Ev>  ; yaSSL::sslHashes::use_MD5()
0879d29d +0x3fd:  mov    -0x12c(%ebp),%ecx
0879d2a3 +0x403:  mov    (%eax),%edx
0879d2a5 +0x405:  mov    %ecx,0x8(%esp)
0879d2a9 +0x409:  mov    0xc(%ebp),%ecx
0879d2ac +0x40c:  mov    %eax,(%esp)
0879d2af +0x40f:  movl   $0x70,0xc(%esp)
0879d2b7 +0x417:  mov    %ecx,0x4(%esp)
0879d2bb +0x41b:  call   *0x4(%edx)
0879d2be +0x41e:  mov    %edi,(%esp)
0879d2c1 +0x421:  call   0874e070 <_ZNK5yaSSL3SSL11getSecurityEv>  ; yaSSL::SSL::getSecurity() const
0879d2c6 +0x426:  mov    %eax,(%esp)
0879d2c9 +0x429:  call   0874e960 <_ZNK5yaSSL8Security14get_connectionEv>  ; yaSSL::Security::get_connection() const
0879d2ce +0x42e:  lea    0x4(%eax),%esi
0879d2d1 +0x431:  mov    %eax,%edx
0879d2d3 +0x433:  mov    0x4(%eax),%eax
0879d2d6 +0x436:  mov    %eax,-0x9c(%ebp)
0879d2dc +0x43c:  mov    0x4(%esi),%eax
0879d2df +0x43f:  mov    %eax,-0x98(%ebp)
0879d2e5 +0x445:  mov    0x8(%esi),%eax
0879d2e8 +0x448:  mov    %eax,-0x94(%ebp)
0879d2ee +0x44e:  mov    0xc(%esi),%eax
0879d2f1 +0x451:  mov    %eax,-0x90(%ebp)
0879d2f7 +0x457:  mov    0x10(%esi),%eax
0879d2fa +0x45a:  mov    %eax,-0x8c(%ebp)
0879d300 +0x460:  mov    0x14(%esi),%eax
0879d303 +0x463:  mov    %eax,-0x88(%ebp)
0879d309 +0x469:  mov    0x18(%esi),%eax
0879d30c +0x46c:  mov    %eax,-0x84(%ebp)
0879d312 +0x472:  mov    0x1c(%esi),%eax
0879d315 +0x475:  mov    %eax,-0x80(%ebp)
0879d318 +0x478:  mov    0x20(%esi),%eax
0879d31b +0x47b:  mov    %eax,-0x7c(%ebp)
0879d31e +0x47e:  mov    0x24(%esi),%eax
0879d321 +0x481:  mov    %eax,-0x78(%ebp)
0879d324 +0x484:  mov    0x28(%esi),%eax
0879d327 +0x487:  mov    %eax,-0x74(%ebp)
0879d32a +0x48a:  mov    0x2c(%esi),%eax
0879d32d +0x48d:  mov    %eax,-0x70(%ebp)
0879d330 +0x490:  mov    -0x65f738(%ebx),%eax
0879d336 +0x496:  mov    %eax,-0x6c(%ebp)
0879d339 +0x499:  mov    -0x65f734(%ebx),%eax
0879d33f +0x49f:  mov    %eax,-0x68(%ebp)
0879d342 +0x4a2:  mov    -0x65f730(%ebx),%eax
0879d348 +0x4a8:  mov    %eax,-0x64(%ebp)
0879d34b +0x4ab:  mov    -0x65f72c(%ebx),%eax
0879d351 +0x4b1:  mov    %eax,-0x60(%ebp)
0879d354 +0x4b4:  mov    -0x65f728(%ebx),%eax
0879d35a +0x4ba:  mov    %eax,-0x5c(%ebp)
0879d35d +0x4bd:  mov    -0x65f724(%ebx),%eax
0879d363 +0x4c3:  mov    %edx,-0x130(%ebp)
0879d369 +0x4c9:  mov    %edi,(%esp)
0879d36c +0x4cc:  mov    %eax,-0x58(%ebp)
0879d36f +0x4cf:  mov    -0x65f720(%ebx),%eax
0879d375 +0x4d5:  mov    %eax,-0x54(%ebp)
0879d378 +0x4d8:  mov    -0x65f71c(%ebx),%eax
0879d37e +0x4de:  mov    %eax,-0x50(%ebp)
0879d381 +0x4e1:  mov    -0x65f718(%ebx),%eax
0879d387 +0x4e7:  mov    %eax,-0x4c(%ebp)
0879d38a +0x4ea:  mov    -0x65f714(%ebx),%eax
0879d390 +0x4f0:  mov    %eax,-0x48(%ebp)
0879d393 +0x4f3:  call   0874e2e0 <_ZN5yaSSL3SSL9useHashesEv>  ; yaSSL::SSL::useHashes()
0879d398 +0x4f8:  mov    %eax,(%esp)
0879d39b +0x4fb:  call   0874e880 <_ZN5yaSSL9sslHashes7use_SHAEv>  ; yaSSL::sslHashes::use_SHA()
0879d3a0 +0x500:  mov    %eax,%ecx
0879d3a2 +0x502:  mov    (%eax),%eax
0879d3a4 +0x504:  mov    %ecx,(%esp)
0879d3a7 +0x507:  movl   $0x58,0xc(%esp)
0879d3af +0x50f:  mov    %eax,-0x13c(%ebp)
0879d3b5 +0x515:  mov    -0x124(%ebp),%eax
0879d3bb +0x51b:  mov    -0x13c(%ebp),%ecx
0879d3c1 +0x521:  mov    %eax,0x8(%esp)
0879d3c5 +0x525:  mov    -0x128(%ebp),%eax
0879d3cb +0x52b:  mov    %eax,0x4(%esp)
0879d3cf +0x52f:  call   *0x4(%ecx)
0879d3d2 +0x532:  mov    -0x130(%ebp),%edx
0879d3d8 +0x538:  mov    0x4(%edx),%eax
0879d3db +0x53b:  mov    %eax,-0x10c(%ebp)
0879d3e1 +0x541:  mov    0x4(%esi),%eax
0879d3e4 +0x544:  mov    %eax,-0x108(%ebp)
0879d3ea +0x54a:  mov    0x8(%esi),%eax
0879d3ed +0x54d:  mov    %eax,-0x104(%ebp)
0879d3f3 +0x553:  mov    0xc(%esi),%eax
0879d3f6 +0x556:  mov    %eax,-0x100(%ebp)
0879d3fc +0x55c:  mov    0x10(%esi),%eax
0879d3ff +0x55f:  mov    %eax,-0xfc(%ebp)
0879d405 +0x565:  mov    0x14(%esi),%eax
0879d408 +0x568:  mov    %eax,-0xf8(%ebp)
0879d40e +0x56e:  mov    0x18(%esi),%eax
0879d411 +0x571:  mov    %eax,-0xf4(%ebp)
0879d417 +0x577:  mov    0x1c(%esi),%eax
0879d41a +0x57a:  mov    %eax,-0xf0(%ebp)
0879d420 +0x580:  mov    0x20(%esi),%eax
0879d423 +0x583:  mov    %eax,-0xec(%ebp)
0879d429 +0x589:  mov    0x24(%esi),%eax
0879d42c +0x58c:  mov    %eax,-0xe8(%ebp)
0879d432 +0x592:  mov    0x28(%esi),%eax
0879d435 +0x595:  mov    %eax,-0xe4(%ebp)
0879d43b +0x59b:  mov    0x2c(%esi),%eax
0879d43e +0x59e:  mov    %eax,-0xe0(%ebp)
0879d444 +0x5a4:  mov    -0x65f6f8(%ebx),%eax
0879d44a +0x5aa:  mov    %eax,-0xdc(%ebp)
0879d450 +0x5b0:  mov    -0x65f6f4(%ebx),%eax
0879d456 +0x5b6:  mov    %eax,-0xd8(%ebp)
0879d45c +0x5bc:  mov    -0x65f6f0(%ebx),%eax
0879d462 +0x5c2:  mov    %eax,-0xd4(%ebp)
0879d468 +0x5c8:  mov    -0x65f6ec(%ebx),%eax
0879d46e +0x5ce:  mov    %eax,-0xd0(%ebp)
0879d474 +0x5d4:  mov    -0x65f6e8(%ebx),%eax
0879d47a +0x5da:  mov    %eax,-0xcc(%ebp)
0879d480 +0x5e0:  mov    -0x65f6e4(%ebx),%eax
0879d486 +0x5e6:  mov    %edi,(%esp)
0879d489 +0x5e9:  mov    %eax,-0xc8(%ebp)
0879d48f +0x5ef:  mov    -0x65f6e0(%ebx),%eax
0879d495 +0x5f5:  mov    %eax,-0xc4(%ebp)
0879d49b +0x5fb:  mov    -0x65f6dc(%ebx),%eax
0879d4a1 +0x601:  mov    %eax,-0xc0(%ebp)
0879d4a7 +0x607:  mov    -0x65f6d8(%ebx),%eax
0879d4ad +0x60d:  mov    %eax,-0xbc(%ebp)
0879d4b3 +0x613:  mov    -0x65f6d4(%ebx),%eax
0879d4b9 +0x619:  mov    %eax,-0xb8(%ebp)
0879d4bf +0x61f:  mov    -0x3c(%ebp),%eax
0879d4c2 +0x622:  mov    %eax,-0xb4(%ebp)
0879d4c8 +0x628:  mov    -0x38(%ebp),%eax
0879d4cb +0x62b:  mov    %eax,-0xb0(%ebp)
0879d4d1 +0x631:  mov    -0x34(%ebp),%eax
0879d4d4 +0x634:  mov    %eax,-0xac(%ebp)
0879d4da +0x63a:  mov    -0x30(%ebp),%eax
0879d4dd +0x63d:  mov    %eax,-0xa8(%ebp)
0879d4e3 +0x643:  mov    -0x2c(%ebp),%eax
0879d4e6 +0x646:  mov    %eax,-0xa4(%ebp)
0879d4ec +0x64c:  call   0874e2e0 <_ZN5yaSSL3SSL9useHashesEv>  ; yaSSL::SSL::useHashes()
0879d4f1 +0x651:  mov    %eax,(%esp)
0879d4f4 +0x654:  call   0874e880 <_ZN5yaSSL9sslHashes7use_SHAEv>  ; yaSSL::sslHashes::use_SHA()
0879d4f9 +0x659:  mov    -0x12c(%ebp),%ecx
0879d4ff +0x65f:  mov    (%eax),%edx
0879d501 +0x661:  mov    %ecx,0x8(%esp)
0879d505 +0x665:  mov    0xc(%ebp),%ecx
0879d508 +0x668:  movl   $0x6c,0xc(%esp)
0879d510 +0x670:  mov    %eax,(%esp)
0879d513 +0x673:  add    $0x10,%ecx
0879d516 +0x676:  mov    %ecx,0x4(%esp)
0879d51a +0x67a:  call   *0x4(%edx)
0879d51d +0x67d:  mov    %edi,(%esp)
0879d520 +0x680:  call   0874e2e0 <_ZN5yaSSL3SSL9useHashesEv>  ; yaSSL::SSL::useHashes()
0879d525 +0x685:  mov    %eax,(%esp)
0879d528 +0x688:  call   0874e870 <_ZN5yaSSL9sslHashes7use_MD5Ev>  ; yaSSL::sslHashes::use_MD5()
0879d52d +0x68d:  mov    -0x11c(%ebp),%edx
0879d533 +0x693:  mov    %edx,0x4(%esp)
0879d537 +0x697:  mov    %eax,(%esp)
0879d53a +0x69a:  call   08799f70 <_ZN5yaSSL3MD5aSERKS0_>  ; yaSSL::MD5::operator=(yaSSL::MD5 const&)
0879d53f +0x69f:  mov    %edi,(%esp)
0879d542 +0x6a2:  call   0874e2e0 <_ZN5yaSSL3SSL9useHashesEv>  ; yaSSL::SSL::useHashes()
0879d547 +0x6a7:  mov    %eax,(%esp)
0879d54a +0x6aa:  call   0874e880 <_ZN5yaSSL9sslHashes7use_SHAEv>  ; yaSSL::sslHashes::use_SHA()
0879d54f +0x6af:  mov    -0x120(%ebp),%ecx
0879d555 +0x6b5:  mov    %ecx,0x4(%esp)
0879d559 +0x6b9:  mov    %eax,(%esp)
0879d55c +0x6bc:  call   08799ed0 <_ZN5yaSSL3SHAaSERKS0_>  ; yaSSL::SHA::operator=(yaSSL::SHA const&)
0879d561 +0x6c1:  mov    -0x120(%ebp),%eax
0879d567 +0x6c7:  mov    %eax,(%esp)
0879d56a +0x6ca:  call   08798cb0 <_ZN5yaSSL3SHAD1Ev>  ; yaSSL::SHA::~SHA()
0879d56f +0x6cf:  mov    -0x11c(%ebp),%edx
0879d575 +0x6d5:  mov    %edx,(%esp)
0879d578 +0x6d8:  call   08798d40 <_ZN5yaSSL3MD5D1Ev>  ; yaSSL::MD5::~MD5()
0879d57d +0x6dd:  add    $0x14c,%esp
0879d583 +0x6e3:  pop    %ebx
0879d584 +0x6e4:  pop    %esi
0879d585 +0x6e5:  pop    %edi
0879d586 +0x6e6:  pop    %ebp
0879d587 +0x6e7:  ret
0879d588 +0x6e8:  mov    %edi,(%esp)
0879d58b +0x6eb:  call   0874e2e0 <_ZN5yaSSL3SSL9useHashesEv>  ; yaSSL::SSL::useHashes()
0879d590 +0x6f0:  mov    %eax,(%esp)
0879d593 +0x6f3:  call   0874e870 <_ZN5yaSSL9sslHashes7use_MD5Ev>  ; yaSSL::sslHashes::use_MD5()
0879d598 +0x6f8:  mov    0xc(%ebp),%ecx
0879d59b +0x6fb:  mov    (%eax),%edx
0879d59d +0x6fd:  mov    %ecx,0x4(%esp)
0879d5a1 +0x701:  mov    %eax,(%esp)
0879d5a4 +0x704:  call   *(%edx)
0879d5a6 +0x706:  mov    %edi,(%esp)
0879d5a9 +0x709:  call   0874e2e0 <_ZN5yaSSL3SSL9useHashesEv>  ; yaSSL::SSL::useHashes()
0879d5ae +0x70e:  mov    %eax,(%esp)
0879d5b1 +0x711:  call   0874e880 <_ZN5yaSSL9sslHashes7use_SHAEv>  ; yaSSL::sslHashes::use_SHA()
0879d5b6 +0x716:  mov    0xc(%ebp),%ecx
0879d5b9 +0x719:  add    $0x10,%ecx
0879d5bc +0x71c:  mov    (%eax),%edx
0879d5be +0x71e:  mov    %ecx,0x4(%esp)
0879d5c2 +0x722:  mov    %eax,(%esp)
0879d5c5 +0x725:  call   *(%edx)
0879d5c7 +0x727:  jmp    0879d51d <+0x67d>
0879d5cc +0x72c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::build_certHashes @ 0x879cea0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::build_certHashes(yaSSL::SSL&, yaSSL::Hashes&) */

void yaSSL::build_certHashes(SSL *param_1,Hashes *param_2)

{
  char cVar1;
  sslHashes *psVar2;
  MD5 *pMVar3;
  SHA *pSVar4;
  Security *pSVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  char local_e0 [40];
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  char local_4c [12];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  SHA local_2c [8];
  MD5 local_24 [16];
  undefined4 uStack_14;
  
  uStack_14 = 0x879ceab;
  psVar2 = (sslHashes *)SSL::getHashes(param_1);
  pMVar3 = (MD5 *)sslHashes::get_MD5(psVar2);
  MD5::MD5(local_24,pMVar3);
  psVar2 = (sslHashes *)SSL::getHashes(param_1);
  pSVar4 = (SHA *)sslHashes::get_SHA(psVar2);
  SHA::SHA(local_2c,pSVar4);
  cVar1 = SSL::isTLS(param_1);
  if (cVar1 == '\0') {
    pSVar5 = (Security *)SSL::getSecurity(param_1);
    iVar6 = Security::get_connection(pSVar5);
    local_a0 = *(undefined4 *)(iVar6 + 4);
    local_9c = *(undefined4 *)(iVar6 + 8);
    local_98 = *(undefined4 *)(iVar6 + 0xc);
    local_94 = *(undefined4 *)(iVar6 + 0x10);
    local_90 = *(undefined4 *)(iVar6 + 0x14);
    local_8c = *(undefined4 *)(iVar6 + 0x18);
    local_88 = *(undefined4 *)(iVar6 + 0x1c);
    local_84 = *(undefined4 *)(iVar6 + 0x20);
    local_80 = *(undefined4 *)(iVar6 + 0x24);
    local_7c = *(undefined4 *)(iVar6 + 0x28);
    local_78 = *(undefined4 *)(iVar6 + 0x2c);
    local_74 = *(undefined4 *)(iVar6 + 0x30);
    local_70 = 0x36363636;
    local_6c = 0x36363636;
    local_68 = 0x36363636;
    local_64 = 0x36363636;
    local_60 = 0x36363636;
    local_5c = 0x36363636;
    local_58 = 0x36363636;
    local_54 = 0x36363636;
    local_50 = 0x36363636;
    builtin_strncpy(local_4c,"666666666666",0xc);
    psVar2 = (sslHashes *)SSL::useHashes(param_1);
    piVar7 = (int *)sslHashes::use_MD5(psVar2);
    (**(code **)(*piVar7 + 4))(piVar7,&local_40,&local_a0,0x60);
    local_110 = *(undefined4 *)(iVar6 + 4);
    local_10c = *(undefined4 *)(iVar6 + 8);
    local_108 = *(undefined4 *)(iVar6 + 0xc);
    local_104 = *(undefined4 *)(iVar6 + 0x10);
    local_100 = *(undefined4 *)(iVar6 + 0x14);
    local_fc = *(undefined4 *)(iVar6 + 0x18);
    local_f8 = *(undefined4 *)(iVar6 + 0x1c);
    local_f4 = *(undefined4 *)(iVar6 + 0x20);
    local_f0 = *(undefined4 *)(iVar6 + 0x24);
    local_ec = *(undefined4 *)(iVar6 + 0x28);
    local_e8 = *(undefined4 *)(iVar6 + 0x2c);
    local_e4 = *(undefined4 *)(iVar6 + 0x30);
    builtin_strncpy(local_e0,
                    "\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\"
                    ,0x28);
    local_b8 = 0x5c5c5c5c;
    local_b0 = local_40;
    local_b4 = 0x5c5c5c5c;
    local_ac = local_3c;
    local_a8 = local_38;
    local_a4 = local_34;
    psVar2 = (sslHashes *)SSL::useHashes(param_1);
    piVar7 = (int *)sslHashes::use_MD5(psVar2);
    (**(code **)(*piVar7 + 4))(piVar7,param_2,&local_110,0x70);
    pSVar5 = (Security *)SSL::getSecurity(param_1);
    iVar6 = Security::get_connection(pSVar5);
    local_a0 = *(undefined4 *)(iVar6 + 4);
    local_9c = *(undefined4 *)(iVar6 + 8);
    local_98 = *(undefined4 *)(iVar6 + 0xc);
    local_94 = *(undefined4 *)(iVar6 + 0x10);
    local_90 = *(undefined4 *)(iVar6 + 0x14);
    local_8c = *(undefined4 *)(iVar6 + 0x18);
    local_88 = *(undefined4 *)(iVar6 + 0x1c);
    local_84 = *(undefined4 *)(iVar6 + 0x20);
    local_80 = *(undefined4 *)(iVar6 + 0x24);
    local_7c = *(undefined4 *)(iVar6 + 0x28);
    local_78 = *(undefined4 *)(iVar6 + 0x2c);
    local_74 = *(undefined4 *)(iVar6 + 0x30);
    local_70 = PAD1;
    local_6c = DAT_08d0d464;
    local_68 = DAT_08d0d468;
    local_64 = DAT_08d0d46c;
    local_60 = DAT_08d0d470;
    local_5c = DAT_08d0d474;
    local_58 = DAT_08d0d478;
    local_54 = DAT_08d0d47c;
    local_50 = DAT_08d0d480;
    local_4c[0] = s_666666666666_08d0d484[0];
    local_4c[1] = s_666666666666_08d0d484[1];
    local_4c[2] = s_666666666666_08d0d484[2];
    local_4c[3] = s_666666666666_08d0d484[3];
    psVar2 = (sslHashes *)SSL::useHashes(param_1);
    piVar7 = (int *)sslHashes::use_SHA(psVar2);
    (**(code **)(*piVar7 + 4))(piVar7,&local_40,&local_a0,0x58);
    local_110 = *(undefined4 *)(iVar6 + 4);
    local_10c = *(undefined4 *)(iVar6 + 8);
    local_108 = *(undefined4 *)(iVar6 + 0xc);
    local_104 = *(undefined4 *)(iVar6 + 0x10);
    local_100 = *(undefined4 *)(iVar6 + 0x14);
    local_fc = *(undefined4 *)(iVar6 + 0x18);
    local_f8 = *(undefined4 *)(iVar6 + 0x1c);
    local_f4 = *(undefined4 *)(iVar6 + 0x20);
    local_f0 = *(undefined4 *)(iVar6 + 0x24);
    local_ec = *(undefined4 *)(iVar6 + 0x28);
    local_e8 = *(undefined4 *)(iVar6 + 0x2c);
    local_e4 = *(undefined4 *)(iVar6 + 0x30);
    local_e0[0] = PAD2[0];
    local_e0[1] = PAD2[1];
    local_e0[2] = PAD2[2];
    local_e0[3] = PAD2[3];
    local_e0[4] = PAD2[4];
    local_e0[5] = PAD2[5];
    local_e0[6] = PAD2[6];
    local_e0[7] = PAD2[7];
    local_e0[8] = PAD2[8];
    local_e0[9] = PAD2[9];
    local_e0[10] = PAD2[10];
    local_e0[0xb] = PAD2[0xb];
    local_e0[0xc] = PAD2[0xc];
    local_e0[0xd] = PAD2[0xd];
    local_e0[0xe] = PAD2[0xe];
    local_e0[0xf] = PAD2[0xf];
    local_e0[0x10] = PAD2[0x10];
    local_e0[0x11] = PAD2[0x11];
    local_e0[0x12] = PAD2[0x12];
    local_e0[0x13] = PAD2[0x13];
    local_e0[0x14] = PAD2[0x14];
    local_e0[0x15] = PAD2[0x15];
    local_e0[0x16] = PAD2[0x16];
    local_e0[0x17] = PAD2[0x17];
    local_e0[0x18] = PAD2[0x18];
    local_e0[0x19] = PAD2[0x19];
    local_e0[0x1a] = PAD2[0x1a];
    local_e0[0x1b] = PAD2[0x1b];
    local_e0[0x1c] = PAD2[0x1c];
    local_e0[0x1d] = PAD2[0x1d];
    local_e0[0x1e] = PAD2[0x1e];
    local_e0[0x1f] = PAD2[0x1f];
    local_e0[0x20] = PAD2[0x20];
    local_e0[0x21] = PAD2[0x21];
    local_e0[0x22] = PAD2[0x22];
    local_e0[0x23] = PAD2[0x23];
    local_e0[0x24] = PAD2[0x24];
    local_e0[0x25] = PAD2[0x25];
    local_e0[0x26] = PAD2[0x26];
    local_e0[0x27] = PAD2[0x27];
    local_b8 = local_40;
    local_b4 = local_3c;
    local_b0 = local_38;
    local_ac = local_34;
    local_a8 = local_30;
    psVar2 = (sslHashes *)SSL::useHashes(param_1);
    piVar7 = (int *)sslHashes::use_SHA(psVar2);
    (**(code **)(*piVar7 + 4))(piVar7,param_2 + 0x10,&local_110,0x6c);
  }
  else {
    psVar2 = (sslHashes *)SSL::useHashes(param_1);
    puVar8 = (undefined4 *)sslHashes::use_MD5(psVar2);
    (**(code **)*puVar8)(puVar8,param_2);
    psVar2 = (sslHashes *)SSL::useHashes(param_1);
    puVar8 = (undefined4 *)sslHashes::use_SHA(psVar2);
    (**(code **)*puVar8)(puVar8,param_2 + 0x10);
  }
  psVar2 = (sslHashes *)SSL::useHashes(param_1);
  pMVar3 = (MD5 *)sslHashes::use_MD5(psVar2);
  MD5::operator=(pMVar3,local_24);
  psVar2 = (sslHashes *)SSL::useHashes(param_1);
  pSVar4 = (SHA *)sslHashes::use_SHA(psVar2);
  SHA::operator=(pSVar4,local_2c);
  SHA::~SHA(local_2c);
  MD5::~MD5(local_24);
  return;
}
```
