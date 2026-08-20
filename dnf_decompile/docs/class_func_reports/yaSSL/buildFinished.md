# buildFinished

`_ZN5yaSSL13buildFinishedERNS_3SSLERNS_8FinishedEPKh`

`yaSSL::buildFinished(yaSSL::SSL&, yaSSL::Finished&, unsigned char const*)`

| 类 | 地址 |
|---|---|
| `yaSSL` | `0x0879eb40` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0879eb40  _ZN5yaSSL13buildFinishedERNS_3SSLERNS_8FinishedEPKh
#           yaSSL::buildFinished(yaSSL::SSL&, yaSSL::Finished&, unsigned char const*)
# range [0x0879eb40, 0x0879f36c]
0879eb40 +0x000:  push   %ebp
0879eb41 +0x001:  mov    %esp,%ebp
0879eb43 +0x003:  push   %edi
0879eb44 +0x004:  push   %esi
0879eb45 +0x005:  push   %ebx
0879eb46 +0x006:  call   08722df8 <__i686.get_pc_thunk.bx>
0879eb4b +0x00b:  add    $0xbce04d,%ebx
0879eb51 +0x011:  sub    $0x15c,%esp
0879eb57 +0x017:  mov    0x8(%ebp),%edi
0879eb5a +0x01a:  mov    %edi,(%esp)
0879eb5d +0x01d:  call   0874e090 <_ZNK5yaSSL3SSL9getHashesEv>  ; yaSSL::SSL::getHashes() const
0879eb62 +0x022:  mov    %eax,(%esp)
0879eb65 +0x025:  call   0874e830 <_ZNK5yaSSL9sslHashes7get_MD5Ev>  ; yaSSL::sslHashes::get_MD5() const
0879eb6a +0x02a:  mov    %eax,0x4(%esp)
0879eb6e +0x02e:  lea    -0x20(%ebp),%eax
0879eb71 +0x031:  mov    %eax,-0x134(%ebp)
0879eb77 +0x037:  mov    %eax,(%esp)
0879eb7a +0x03a:  call   08799fb0 <_ZN5yaSSL3MD5C1ERKS0_>  ; yaSSL::MD5::MD5(yaSSL::MD5 const&)
0879eb7f +0x03f:  mov    %edi,(%esp)
0879eb82 +0x042:  call   0874e090 <_ZNK5yaSSL3SSL9getHashesEv>  ; yaSSL::SSL::getHashes() const
0879eb87 +0x047:  mov    %eax,(%esp)
0879eb8a +0x04a:  call   0874e840 <_ZNK5yaSSL9sslHashes7get_SHAEv>  ; yaSSL::sslHashes::get_SHA() const
0879eb8f +0x04f:  lea    -0x28(%ebp),%edx
0879eb92 +0x052:  mov    %edx,-0x130(%ebp)
0879eb98 +0x058:  mov    %edx,(%esp)
0879eb9b +0x05b:  mov    %eax,0x4(%esp)
0879eb9f +0x05f:  call   08799f10 <_ZN5yaSSL3SHAC1ERKS0_>  ; yaSSL::SHA::SHA(yaSSL::SHA const&)
0879eba4 +0x064:  mov    %edi,(%esp)
0879eba7 +0x067:  call   0874e9a0 <_ZNK5yaSSL3SSL5isTLSEv>  ; yaSSL::SSL::isTLS() const
0879ebac +0x06c:  test   %al,%al
0879ebae +0x06e:  jne    0879f280 <+0x740>
0879ebb4 +0x074:  mov    %edi,(%esp)
0879ebb7 +0x077:  call   0874e070 <_ZNK5yaSSL3SSL11getSecurityEv>  ; yaSSL::SSL::getSecurity() const
0879ebbc +0x07c:  mov    %eax,(%esp)
0879ebbf +0x07f:  call   0874e960 <_ZNK5yaSSL8Security14get_connectionEv>  ; yaSSL::Security::get_connection() const
0879ebc4 +0x084:  lea    -0xb0(%ebp),%ecx
0879ebca +0x08a:  mov    %ecx,-0x138(%ebp)
0879ebd0 +0x090:  mov    0x10(%ebp),%ecx
0879ebd3 +0x093:  lea    0x4(%eax),%esi
0879ebd6 +0x096:  mov    %eax,%edx
0879ebd8 +0x098:  mov    (%ecx),%eax
0879ebda +0x09a:  mov    %eax,-0xb0(%ebp)
0879ebe0 +0x0a0:  mov    0x4(%edx),%eax
0879ebe3 +0x0a3:  mov    %eax,-0xac(%ebp)
0879ebe9 +0x0a9:  mov    0x4(%esi),%eax
0879ebec +0x0ac:  mov    %eax,-0xa8(%ebp)
0879ebf2 +0x0b2:  mov    0x8(%esi),%eax
0879ebf5 +0x0b5:  mov    %eax,-0xa4(%ebp)
0879ebfb +0x0bb:  mov    0xc(%esi),%eax
0879ebfe +0x0be:  mov    %eax,-0xa0(%ebp)
0879ec04 +0x0c4:  mov    0x10(%esi),%eax
0879ec07 +0x0c7:  mov    %eax,-0x9c(%ebp)
0879ec0d +0x0cd:  mov    0x14(%esi),%eax
0879ec10 +0x0d0:  mov    %eax,-0x98(%ebp)
0879ec16 +0x0d6:  mov    0x18(%esi),%eax
0879ec19 +0x0d9:  mov    %eax,-0x94(%ebp)
0879ec1f +0x0df:  mov    0x1c(%esi),%eax
0879ec22 +0x0e2:  mov    %eax,-0x90(%ebp)
0879ec28 +0x0e8:  mov    0x20(%esi),%eax
0879ec2b +0x0eb:  mov    %eax,-0x8c(%ebp)
0879ec31 +0x0f1:  mov    0x24(%esi),%eax
0879ec34 +0x0f4:  mov    %eax,-0x88(%ebp)
0879ec3a +0x0fa:  mov    0x28(%esi),%eax
0879ec3d +0x0fd:  mov    %eax,-0x84(%ebp)
0879ec43 +0x103:  mov    0x2c(%esi),%eax
0879ec46 +0x106:  movb   $0x36,-0x7c(%ebp)
0879ec4a +0x10a:  movb   $0x36,-0x7b(%ebp)
0879ec4e +0x10e:  movb   $0x36,-0x7a(%ebp)
0879ec52 +0x112:  mov    %eax,-0x80(%ebp)
0879ec55 +0x115:  movb   $0x36,-0x79(%ebp)
0879ec59 +0x119:  movb   $0x36,-0x78(%ebp)
0879ec5d +0x11d:  movb   $0x36,-0x77(%ebp)
0879ec61 +0x121:  movb   $0x36,-0x76(%ebp)
0879ec65 +0x125:  movb   $0x36,-0x75(%ebp)
0879ec69 +0x129:  movb   $0x36,-0x74(%ebp)
0879ec6d +0x12d:  movb   $0x36,-0x73(%ebp)
0879ec71 +0x131:  movb   $0x36,-0x72(%ebp)
0879ec75 +0x135:  movb   $0x36,-0x71(%ebp)
0879ec79 +0x139:  movb   $0x36,-0x70(%ebp)
0879ec7d +0x13d:  movb   $0x36,-0x6f(%ebp)
0879ec81 +0x141:  movb   $0x36,-0x6e(%ebp)
0879ec85 +0x145:  movb   $0x36,-0x6d(%ebp)
0879ec89 +0x149:  movb   $0x36,-0x6c(%ebp)
0879ec8d +0x14d:  movb   $0x36,-0x6b(%ebp)
0879ec91 +0x151:  movb   $0x36,-0x6a(%ebp)
0879ec95 +0x155:  movb   $0x36,-0x69(%ebp)
0879ec99 +0x159:  movb   $0x36,-0x68(%ebp)
0879ec9d +0x15d:  movb   $0x36,-0x67(%ebp)
0879eca1 +0x161:  movb   $0x36,-0x66(%ebp)
0879eca5 +0x165:  movb   $0x36,-0x65(%ebp)
0879eca9 +0x169:  movb   $0x36,-0x64(%ebp)
0879ecad +0x16d:  movb   $0x36,-0x63(%ebp)
0879ecb1 +0x171:  movb   $0x36,-0x62(%ebp)
0879ecb5 +0x175:  movb   $0x36,-0x61(%ebp)
0879ecb9 +0x179:  movb   $0x36,-0x60(%ebp)
0879ecbd +0x17d:  movb   $0x36,-0x5f(%ebp)
0879ecc1 +0x181:  movb   $0x36,-0x5e(%ebp)
0879ecc5 +0x185:  movb   $0x36,-0x5d(%ebp)
0879ecc9 +0x189:  movb   $0x36,-0x5c(%ebp)
0879eccd +0x18d:  movb   $0x36,-0x5b(%ebp)
0879ecd1 +0x191:  movb   $0x36,-0x5a(%ebp)
0879ecd5 +0x195:  movb   $0x36,-0x59(%ebp)
0879ecd9 +0x199:  movb   $0x36,-0x58(%ebp)
0879ecdd +0x19d:  movb   $0x36,-0x57(%ebp)
0879ece1 +0x1a1:  movb   $0x36,-0x56(%ebp)
0879ece5 +0x1a5:  movb   $0x36,-0x55(%ebp)
0879ece9 +0x1a9:  mov    %edx,-0x148(%ebp)
0879ecef +0x1af:  movb   $0x36,-0x54(%ebp)
0879ecf3 +0x1b3:  movb   $0x36,-0x53(%ebp)
0879ecf7 +0x1b7:  movb   $0x36,-0x52(%ebp)
0879ecfb +0x1bb:  movb   $0x36,-0x51(%ebp)
0879ecff +0x1bf:  movb   $0x36,-0x50(%ebp)
0879ed03 +0x1c3:  movb   $0x36,-0x4f(%ebp)
0879ed07 +0x1c7:  movb   $0x36,-0x4e(%ebp)
0879ed0b +0x1cb:  movb   $0x36,-0x4d(%ebp)
0879ed0f +0x1cf:  mov    %edi,(%esp)
0879ed12 +0x1d2:  call   0874e2e0 <_ZN5yaSSL3SSL9useHashesEv>  ; yaSSL::SSL::useHashes()
0879ed17 +0x1d7:  mov    %eax,(%esp)
0879ed1a +0x1da:  call   0874e870 <_ZN5yaSSL9sslHashes7use_MD5Ev>  ; yaSSL::sslHashes::use_MD5()
0879ed1f +0x1df:  mov    (%eax),%ecx
0879ed21 +0x1e1:  mov    %eax,(%esp)
0879ed24 +0x1e4:  movl   $0x64,0xc(%esp)
0879ed2c +0x1ec:  mov    %ecx,-0x12c(%ebp)
0879ed32 +0x1f2:  mov    -0x138(%ebp),%ecx
0879ed38 +0x1f8:  mov    -0x12c(%ebp),%eax
0879ed3e +0x1fe:  mov    %ecx,0x8(%esp)
0879ed42 +0x202:  lea    -0x4c(%ebp),%ecx
0879ed45 +0x205:  mov    %ecx,-0x13c(%ebp)
0879ed4b +0x20b:  mov    %ecx,0x4(%esp)
0879ed4f +0x20f:  call   *0x4(%eax)
0879ed52 +0x212:  mov    -0x148(%ebp),%edx
0879ed58 +0x218:  lea    -0x120(%ebp),%ecx
0879ed5e +0x21e:  mov    %ecx,-0x140(%ebp)
0879ed64 +0x224:  mov    0x4(%edx),%eax
0879ed67 +0x227:  mov    %eax,-0x120(%ebp)
0879ed6d +0x22d:  mov    0x4(%esi),%eax
0879ed70 +0x230:  mov    %eax,-0x11c(%ebp)
0879ed76 +0x236:  mov    0x8(%esi),%eax
0879ed79 +0x239:  mov    %eax,-0x118(%ebp)
0879ed7f +0x23f:  mov    0xc(%esi),%eax
0879ed82 +0x242:  mov    %eax,-0x114(%ebp)
0879ed88 +0x248:  mov    0x10(%esi),%eax
0879ed8b +0x24b:  mov    %eax,-0x110(%ebp)
0879ed91 +0x251:  mov    0x14(%esi),%eax
0879ed94 +0x254:  mov    %eax,-0x10c(%ebp)
0879ed9a +0x25a:  mov    0x18(%esi),%eax
0879ed9d +0x25d:  mov    %eax,-0x108(%ebp)
0879eda3 +0x263:  mov    0x1c(%esi),%eax
0879eda6 +0x266:  mov    %eax,-0x104(%ebp)
0879edac +0x26c:  mov    0x20(%esi),%eax
0879edaf +0x26f:  mov    %eax,-0x100(%ebp)
0879edb5 +0x275:  mov    0x24(%esi),%eax
0879edb8 +0x278:  mov    %eax,-0xfc(%ebp)
0879edbe +0x27e:  mov    0x28(%esi),%eax
0879edc1 +0x281:  mov    %eax,-0xf8(%ebp)
0879edc7 +0x287:  mov    0x2c(%esi),%eax
0879edca +0x28a:  movb   $0x5c,-0xf0(%ebp)
0879edd1 +0x291:  movb   $0x5c,-0xef(%ebp)
0879edd8 +0x298:  movb   $0x5c,-0xee(%ebp)
0879eddf +0x29f:  mov    %eax,-0xf4(%ebp)
0879ede5 +0x2a5:  movb   $0x5c,-0xed(%ebp)
0879edec +0x2ac:  movb   $0x5c,-0xec(%ebp)
0879edf3 +0x2b3:  movb   $0x5c,-0xeb(%ebp)
0879edfa +0x2ba:  movb   $0x5c,-0xea(%ebp)
0879ee01 +0x2c1:  movb   $0x5c,-0xe9(%ebp)
0879ee08 +0x2c8:  movb   $0x5c,-0xe8(%ebp)
0879ee0f +0x2cf:  movb   $0x5c,-0xe7(%ebp)
0879ee16 +0x2d6:  movb   $0x5c,-0xe6(%ebp)
0879ee1d +0x2dd:  movb   $0x5c,-0xe5(%ebp)
0879ee24 +0x2e4:  movb   $0x5c,-0xe4(%ebp)
0879ee2b +0x2eb:  movb   $0x5c,-0xe3(%ebp)
0879ee32 +0x2f2:  movb   $0x5c,-0xe2(%ebp)
0879ee39 +0x2f9:  movb   $0x5c,-0xe1(%ebp)
0879ee40 +0x300:  movb   $0x5c,-0xe0(%ebp)
0879ee47 +0x307:  movb   $0x5c,-0xdf(%ebp)
0879ee4e +0x30e:  movb   $0x5c,-0xde(%ebp)
0879ee55 +0x315:  movb   $0x5c,-0xdd(%ebp)
0879ee5c +0x31c:  movb   $0x5c,-0xdc(%ebp)
0879ee63 +0x323:  movb   $0x5c,-0xdb(%ebp)
0879ee6a +0x32a:  movb   $0x5c,-0xda(%ebp)
0879ee71 +0x331:  movb   $0x5c,-0xd9(%ebp)
0879ee78 +0x338:  movb   $0x5c,-0xd8(%ebp)
0879ee7f +0x33f:  movb   $0x5c,-0xd7(%ebp)
0879ee86 +0x346:  movb   $0x5c,-0xd6(%ebp)
0879ee8d +0x34d:  movb   $0x5c,-0xd5(%ebp)
0879ee94 +0x354:  movb   $0x5c,-0xd4(%ebp)
0879ee9b +0x35b:  movb   $0x5c,-0xd3(%ebp)
0879eea2 +0x362:  movb   $0x5c,-0xd2(%ebp)
0879eea9 +0x369:  movb   $0x5c,-0xd1(%ebp)
0879eeb0 +0x370:  movb   $0x5c,-0xd0(%ebp)
0879eeb7 +0x377:  movb   $0x5c,-0xcf(%ebp)
0879eebe +0x37e:  movb   $0x5c,-0xce(%ebp)
0879eec5 +0x385:  movb   $0x5c,-0xcd(%ebp)
0879eecc +0x38c:  movb   $0x5c,-0xcc(%ebp)
0879eed3 +0x393:  movb   $0x5c,-0xcb(%ebp)
0879eeda +0x39a:  movb   $0x5c,-0xca(%ebp)
0879eee1 +0x3a1:  movb   $0x5c,-0xc9(%ebp)
0879eee8 +0x3a8:  movb   $0x5c,-0xc8(%ebp)
0879eeef +0x3af:  movb   $0x5c,-0xc7(%ebp)
0879eef6 +0x3b6:  mov    -0x4c(%ebp),%eax
0879eef9 +0x3b9:  movb   $0x5c,-0xc6(%ebp)
0879ef00 +0x3c0:  movb   $0x5c,-0xc5(%ebp)
0879ef07 +0x3c7:  movb   $0x5c,-0xc4(%ebp)
0879ef0e +0x3ce:  mov    %eax,-0xc0(%ebp)
0879ef14 +0x3d4:  mov    -0x48(%ebp),%eax
0879ef17 +0x3d7:  movb   $0x5c,-0xc3(%ebp)
0879ef1e +0x3de:  movb   $0x5c,-0xc2(%ebp)
0879ef25 +0x3e5:  movb   $0x5c,-0xc1(%ebp)
0879ef2c +0x3ec:  mov    %eax,-0xbc(%ebp)
0879ef32 +0x3f2:  mov    -0x44(%ebp),%eax
0879ef35 +0x3f5:  mov    %edi,(%esp)
0879ef38 +0x3f8:  mov    %eax,-0xb8(%ebp)
0879ef3e +0x3fe:  mov    -0x40(%ebp),%eax
0879ef41 +0x401:  mov    %eax,-0xb4(%ebp)
0879ef47 +0x407:  call   0874e2e0 <_ZN5yaSSL3SSL9useHashesEv>  ; yaSSL::SSL::useHashes()
0879ef4c +0x40c:  mov    %eax,(%esp)
0879ef4f +0x40f:  call   0874e870 <_ZN5yaSSL9sslHashes7use_MD5Ev>  ; yaSSL::sslHashes::use_MD5()
0879ef54 +0x414:  mov    %eax,%esi
0879ef56 +0x416:  mov    (%eax),%eax
0879ef58 +0x418:  mov    0x4(%eax),%eax
0879ef5b +0x41b:  mov    %eax,-0x144(%ebp)
0879ef61 +0x421:  mov    0xc(%ebp),%eax
0879ef64 +0x424:  mov    %eax,(%esp)
0879ef67 +0x427:  call   087471e0 <_ZN5yaSSL8Finished7set_md5Ev>  ; yaSSL::Finished::set_md5()
0879ef6c +0x42c:  mov    -0x140(%ebp),%edx
0879ef72 +0x432:  mov    %esi,(%esp)
0879ef75 +0x435:  movl   $0x70,0xc(%esp)
0879ef7d +0x43d:  mov    %edx,0x8(%esp)
0879ef81 +0x441:  mov    %eax,0x4(%esp)
0879ef85 +0x445:  call   *-0x144(%ebp)
0879ef8b +0x44b:  mov    %edi,(%esp)
0879ef8e +0x44e:  call   0874e070 <_ZNK5yaSSL3SSL11getSecurityEv>  ; yaSSL::SSL::getSecurity() const
0879ef93 +0x453:  mov    %eax,(%esp)
0879ef96 +0x456:  call   0874e960 <_ZNK5yaSSL8Security14get_connectionEv>  ; yaSSL::Security::get_connection() const
0879ef9b +0x45b:  mov    0x10(%ebp),%ecx
0879ef9e +0x45e:  lea    0x4(%eax),%esi
0879efa1 +0x461:  mov    %eax,%edx
0879efa3 +0x463:  mov    (%ecx),%eax
0879efa5 +0x465:  mov    %eax,-0xb0(%ebp)
0879efab +0x46b:  mov    0x4(%edx),%eax
0879efae +0x46e:  mov    %eax,-0xac(%ebp)
0879efb4 +0x474:  mov    0x4(%esi),%eax
0879efb7 +0x477:  mov    %eax,-0xa8(%ebp)
0879efbd +0x47d:  mov    0x8(%esi),%eax
0879efc0 +0x480:  mov    %eax,-0xa4(%ebp)
0879efc6 +0x486:  mov    0xc(%esi),%eax
0879efc9 +0x489:  mov    %eax,-0xa0(%ebp)
0879efcf +0x48f:  mov    0x10(%esi),%eax
0879efd2 +0x492:  mov    %eax,-0x9c(%ebp)
0879efd8 +0x498:  mov    0x14(%esi),%eax
0879efdb +0x49b:  mov    %eax,-0x98(%ebp)
0879efe1 +0x4a1:  mov    0x18(%esi),%eax
0879efe4 +0x4a4:  mov    %eax,-0x94(%ebp)
0879efea +0x4aa:  mov    0x1c(%esi),%eax
0879efed +0x4ad:  mov    %eax,-0x90(%ebp)
0879eff3 +0x4b3:  mov    0x20(%esi),%eax
0879eff6 +0x4b6:  mov    %eax,-0x8c(%ebp)
0879effc +0x4bc:  mov    0x24(%esi),%eax
0879efff +0x4bf:  mov    %eax,-0x88(%ebp)
0879f005 +0x4c5:  mov    0x28(%esi),%eax
0879f008 +0x4c8:  mov    %eax,-0x84(%ebp)
0879f00e +0x4ce:  mov    0x2c(%esi),%eax
0879f011 +0x4d1:  mov    %eax,-0x80(%ebp)
0879f014 +0x4d4:  mov    -0x65f738(%ebx),%eax
0879f01a +0x4da:  mov    %eax,-0x7c(%ebp)
0879f01d +0x4dd:  mov    -0x65f734(%ebx),%eax
0879f023 +0x4e3:  mov    %eax,-0x78(%ebp)
0879f026 +0x4e6:  mov    -0x65f730(%ebx),%eax
0879f02c +0x4ec:  mov    %eax,-0x74(%ebp)
0879f02f +0x4ef:  mov    -0x65f72c(%ebx),%eax
0879f035 +0x4f5:  mov    %eax,-0x70(%ebp)
0879f038 +0x4f8:  mov    -0x65f728(%ebx),%eax
0879f03e +0x4fe:  mov    %edx,-0x148(%ebp)
0879f044 +0x504:  mov    %edi,(%esp)
0879f047 +0x507:  mov    %eax,-0x6c(%ebp)
0879f04a +0x50a:  mov    -0x65f724(%ebx),%eax
0879f050 +0x510:  mov    %eax,-0x68(%ebp)
0879f053 +0x513:  mov    -0x65f720(%ebx),%eax
0879f059 +0x519:  mov    %eax,-0x64(%ebp)
0879f05c +0x51c:  mov    -0x65f71c(%ebx),%eax
0879f062 +0x522:  mov    %eax,-0x60(%ebp)
0879f065 +0x525:  mov    -0x65f718(%ebx),%eax
0879f06b +0x52b:  mov    %eax,-0x5c(%ebp)
0879f06e +0x52e:  mov    -0x65f714(%ebx),%eax
0879f074 +0x534:  mov    %eax,-0x58(%ebp)
0879f077 +0x537:  call   0874e2e0 <_ZN5yaSSL3SSL9useHashesEv>  ; yaSSL::SSL::useHashes()
0879f07c +0x53c:  mov    %eax,(%esp)
0879f07f +0x53f:  call   0874e880 <_ZN5yaSSL9sslHashes7use_SHAEv>  ; yaSSL::sslHashes::use_SHA()
0879f084 +0x544:  mov    %eax,%ecx
0879f086 +0x546:  mov    (%eax),%eax
0879f088 +0x548:  mov    %ecx,(%esp)
0879f08b +0x54b:  movl   $0x5c,0xc(%esp)
0879f093 +0x553:  mov    %eax,-0x12c(%ebp)
0879f099 +0x559:  mov    -0x138(%ebp),%eax
0879f09f +0x55f:  mov    -0x12c(%ebp),%ecx
0879f0a5 +0x565:  mov    %eax,0x8(%esp)
0879f0a9 +0x569:  mov    -0x13c(%ebp),%eax
0879f0af +0x56f:  mov    %eax,0x4(%esp)
0879f0b3 +0x573:  call   *0x4(%ecx)
0879f0b6 +0x576:  mov    -0x148(%ebp),%edx
0879f0bc +0x57c:  mov    0x4(%edx),%eax
0879f0bf +0x57f:  mov    %eax,-0x120(%ebp)
0879f0c5 +0x585:  mov    0x4(%esi),%eax
0879f0c8 +0x588:  mov    %eax,-0x11c(%ebp)
0879f0ce +0x58e:  mov    0x8(%esi),%eax
0879f0d1 +0x591:  mov    %eax,-0x118(%ebp)
0879f0d7 +0x597:  mov    0xc(%esi),%eax
0879f0da +0x59a:  mov    %eax,-0x114(%ebp)
0879f0e0 +0x5a0:  mov    0x10(%esi),%eax
0879f0e3 +0x5a3:  mov    %eax,-0x110(%ebp)
0879f0e9 +0x5a9:  mov    0x14(%esi),%eax
0879f0ec +0x5ac:  mov    %eax,-0x10c(%ebp)
0879f0f2 +0x5b2:  mov    0x18(%esi),%eax
0879f0f5 +0x5b5:  mov    %eax,-0x108(%ebp)
0879f0fb +0x5bb:  mov    0x1c(%esi),%eax
0879f0fe +0x5be:  mov    %eax,-0x104(%ebp)
0879f104 +0x5c4:  mov    0x20(%esi),%eax
0879f107 +0x5c7:  mov    %eax,-0x100(%ebp)
0879f10d +0x5cd:  mov    0x24(%esi),%eax
0879f110 +0x5d0:  mov    %eax,-0xfc(%ebp)
0879f116 +0x5d6:  mov    0x28(%esi),%eax
0879f119 +0x5d9:  mov    %eax,-0xf8(%ebp)
0879f11f +0x5df:  mov    0x2c(%esi),%eax
0879f122 +0x5e2:  mov    %eax,-0xf4(%ebp)
0879f128 +0x5e8:  mov    -0x65f6f8(%ebx),%eax
0879f12e +0x5ee:  mov    %eax,-0xf0(%ebp)
0879f134 +0x5f4:  mov    -0x65f6f4(%ebx),%eax
0879f13a +0x5fa:  mov    %eax,-0xec(%ebp)
0879f140 +0x600:  mov    -0x65f6f0(%ebx),%eax
0879f146 +0x606:  mov    %eax,-0xe8(%ebp)
0879f14c +0x60c:  mov    -0x65f6ec(%ebx),%eax
0879f152 +0x612:  mov    %eax,-0xe4(%ebp)
0879f158 +0x618:  mov    -0x65f6e8(%ebx),%eax
0879f15e +0x61e:  mov    %eax,-0xe0(%ebp)
0879f164 +0x624:  mov    -0x65f6e4(%ebx),%eax
0879f16a +0x62a:  mov    %edi,(%esp)
0879f16d +0x62d:  mov    %eax,-0xdc(%ebp)
0879f173 +0x633:  mov    -0x65f6e0(%ebx),%eax
0879f179 +0x639:  mov    %eax,-0xd8(%ebp)
0879f17f +0x63f:  mov    -0x65f6dc(%ebx),%eax
0879f185 +0x645:  mov    %eax,-0xd4(%ebp)
0879f18b +0x64b:  mov    -0x65f6d8(%ebx),%eax
0879f191 +0x651:  mov    %eax,-0xd0(%ebp)
0879f197 +0x657:  mov    -0x65f6d4(%ebx),%eax
0879f19d +0x65d:  mov    %eax,-0xcc(%ebp)
0879f1a3 +0x663:  mov    -0x4c(%ebp),%eax
0879f1a6 +0x666:  mov    %eax,-0xc8(%ebp)
0879f1ac +0x66c:  mov    -0x48(%ebp),%eax
0879f1af +0x66f:  mov    %eax,-0xc4(%ebp)
0879f1b5 +0x675:  mov    -0x44(%ebp),%eax
0879f1b8 +0x678:  mov    %eax,-0xc0(%ebp)
0879f1be +0x67e:  mov    -0x40(%ebp),%eax
0879f1c1 +0x681:  mov    %eax,-0xbc(%ebp)
0879f1c7 +0x687:  mov    -0x3c(%ebp),%eax
0879f1ca +0x68a:  mov    %eax,-0xb8(%ebp)
0879f1d0 +0x690:  call   0874e2e0 <_ZN5yaSSL3SSL9useHashesEv>  ; yaSSL::SSL::useHashes()
0879f1d5 +0x695:  mov    %eax,(%esp)
0879f1d8 +0x698:  call   0874e880 <_ZN5yaSSL9sslHashes7use_SHAEv>  ; yaSSL::sslHashes::use_SHA()
0879f1dd +0x69d:  mov    %eax,%esi
0879f1df +0x69f:  mov    (%eax),%eax
0879f1e1 +0x6a1:  mov    0x4(%eax),%eax
0879f1e4 +0x6a4:  mov    %eax,-0x12c(%ebp)
0879f1ea +0x6aa:  mov    0xc(%ebp),%eax
0879f1ed +0x6ad:  mov    %eax,(%esp)
0879f1f0 +0x6b0:  call   087471f0 <_ZN5yaSSL8Finished7set_shaEv>  ; yaSSL::Finished::set_sha()
0879f1f5 +0x6b5:  mov    -0x140(%ebp),%edx
0879f1fb +0x6bb:  movl   $0x6c,0xc(%esp)
0879f203 +0x6c3:  mov    %esi,(%esp)
0879f206 +0x6c6:  mov    %edx,0x8(%esp)
0879f20a +0x6ca:  mov    %eax,0x4(%esp)
0879f20e +0x6ce:  call   *-0x12c(%ebp)
0879f214 +0x6d4:  mov    %edi,(%esp)
0879f217 +0x6d7:  call   0874e2e0 <_ZN5yaSSL3SSL9useHashesEv>  ; yaSSL::SSL::useHashes()
0879f21c +0x6dc:  mov    %eax,(%esp)
0879f21f +0x6df:  call   0874e870 <_ZN5yaSSL9sslHashes7use_MD5Ev>  ; yaSSL::sslHashes::use_MD5()
0879f224 +0x6e4:  mov    -0x134(%ebp),%ecx
0879f22a +0x6ea:  mov    %ecx,0x4(%esp)
0879f22e +0x6ee:  mov    %eax,(%esp)
0879f231 +0x6f1:  call   08799f70 <_ZN5yaSSL3MD5aSERKS0_>  ; yaSSL::MD5::operator=(yaSSL::MD5 const&)
0879f236 +0x6f6:  mov    %edi,(%esp)
0879f239 +0x6f9:  call   0874e2e0 <_ZN5yaSSL3SSL9useHashesEv>  ; yaSSL::SSL::useHashes()
0879f23e +0x6fe:  mov    %eax,(%esp)
0879f241 +0x701:  call   0874e880 <_ZN5yaSSL9sslHashes7use_SHAEv>  ; yaSSL::sslHashes::use_SHA()
0879f246 +0x706:  mov    -0x130(%ebp),%edx
0879f24c +0x70c:  mov    %edx,0x4(%esp)
0879f250 +0x710:  mov    %eax,(%esp)
0879f253 +0x713:  call   08799ed0 <_ZN5yaSSL3SHAaSERKS0_>  ; yaSSL::SHA::operator=(yaSSL::SHA const&)
0879f258 +0x718:  mov    -0x130(%ebp),%ecx
0879f25e +0x71e:  mov    %ecx,(%esp)
0879f261 +0x721:  call   08798cb0 <_ZN5yaSSL3SHAD1Ev>  ; yaSSL::SHA::~SHA()
0879f266 +0x726:  mov    -0x134(%ebp),%eax
0879f26c +0x72c:  mov    %eax,(%esp)
0879f26f +0x72f:  call   08798d40 <_ZN5yaSSL3MD5D1Ev>  ; yaSSL::MD5::~MD5()
0879f274 +0x734:  add    $0x15c,%esp
0879f27a +0x73a:  pop    %ebx
0879f27b +0x73b:  pop    %esi
0879f27c +0x73c:  pop    %edi
0879f27d +0x73d:  pop    %ebp
0879f27e +0x73e:  ret
0879f27f +0x73f:  nop
0879f280 +0x740:  mov    %edi,(%esp)
0879f283 +0x743:  call   0874e2e0 <_ZN5yaSSL3SSL9useHashesEv>  ; yaSSL::SSL::useHashes()
0879f288 +0x748:  mov    %eax,(%esp)
0879f28b +0x74b:  call   0874e870 <_ZN5yaSSL9sslHashes7use_MD5Ev>  ; yaSSL::sslHashes::use_MD5()
0879f290 +0x750:  lea    -0x4c(%ebp),%edx
0879f293 +0x753:  mov    %edx,-0x148(%ebp)
0879f299 +0x759:  mov    (%eax),%ecx
0879f29b +0x75b:  mov    %edx,0x4(%esp)
0879f29f +0x75f:  mov    %eax,(%esp)
0879f2a2 +0x762:  call   *(%ecx)
0879f2a4 +0x764:  mov    %edi,(%esp)
0879f2a7 +0x767:  call   0874e2e0 <_ZN5yaSSL3SSL9useHashesEv>  ; yaSSL::SSL::useHashes()
0879f2ac +0x76c:  mov    %eax,(%esp)
0879f2af +0x76f:  call   0874e880 <_ZN5yaSSL9sslHashes7use_SHAEv>  ; yaSSL::sslHashes::use_SHA()
0879f2b4 +0x774:  lea    -0x3c(%ebp),%ecx
0879f2b7 +0x777:  mov    (%eax),%esi
0879f2b9 +0x779:  mov    %ecx,0x4(%esp)
0879f2bd +0x77d:  mov    %eax,(%esp)
0879f2c0 +0x780:  call   *(%esi)
0879f2c2 +0x782:  mov    0x10(%ebp),%ecx
0879f2c5 +0x785:  lea    -0x65f758(%ebx),%eax
0879f2cb +0x78b:  movl   $0x4,0x8(%esp)
0879f2d3 +0x793:  lea    -0x65f6b8(%ebx),%esi
0879f2d9 +0x799:  mov    %eax,0x4(%esp)
0879f2dd +0x79d:  mov    %ecx,(%esp)
0879f2e0 +0x7a0:  call   0807e8c0 <_init+0x11b8>
0879f2e5 +0x7a5:  mov    %edi,(%esp)
0879f2e8 +0x7a8:  test   %eax,%eax
0879f2ea +0x7aa:  lea    -0x65f6c8(%ebx),%eax
0879f2f0 +0x7b0:  cmove  %eax,%esi
0879f2f3 +0x7b3:  call   0874e070 <_ZNK5yaSSL3SSL11getSecurityEv>  ; yaSSL::SSL::getSecurity() const
0879f2f8 +0x7b8:  mov    %eax,(%esp)
0879f2fb +0x7bb:  call   0874e960 <_ZNK5yaSSL8Security14get_connectionEv>  ; yaSSL::Security::get_connection() const
0879f300 +0x7c0:  mov    %eax,-0x12c(%ebp)
0879f306 +0x7c6:  mov    0xc(%ebp),%eax
0879f309 +0x7c9:  mov    %eax,(%esp)
0879f30c +0x7cc:  call   087471e0 <_ZN5yaSSL8Finished7set_md5Ev>  ; yaSSL::Finished::set_md5()
0879f311 +0x7d1:  mov    -0x148(%ebp),%edx
0879f317 +0x7d7:  movl   $0x24,0x1c(%esp)
0879f31f +0x7df:  movl   $0xf,0x14(%esp)
0879f327 +0x7e7:  mov    %esi,0x10(%esp)
0879f32b +0x7eb:  mov    %edx,0x18(%esp)
0879f32f +0x7ef:  mov    -0x12c(%ebp),%edx
0879f335 +0x7f5:  movl   $0x30,0xc(%esp)
0879f33d +0x7fd:  movl   $0xc,0x4(%esp)
0879f345 +0x805:  mov    %eax,(%esp)
0879f348 +0x808:  add    $0x4,%edx
0879f34b +0x80b:  mov    %edx,0x8(%esp)
0879f34f +0x80f:  call   0879e980 <_ZN5yaSSL3PRFEPhjPKhjS2_jS2_j>  ; yaSSL::PRF(unsigned char*, unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned int)
0879f354 +0x814:  mov    0xc(%ebp),%edx
0879f357 +0x817:  movl   $0xc,0x4(%esp)
0879f35f +0x81f:  mov    %edx,(%esp)
0879f362 +0x822:  call   08746ab0 <_ZN5yaSSL13HandShakeBase10set_lengthEi>  ; yaSSL::HandShakeBase::set_length(int)
0879f367 +0x827:  jmp    0879f214 <+0x6d4>
0879f36c +0x82c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::buildFinished @ 0x879eb40

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::buildFinished(yaSSL::SSL&, yaSSL::Finished&, unsigned char const*) */

void yaSSL::buildFinished(SSL *param_1,Finished *param_2,uchar *param_3)

{
  code *pcVar1;
  char cVar2;
  sslHashes *psVar3;
  MD5 *pMVar4;
  SHA *pSVar5;
  Security *pSVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  uchar *puVar11;
  uchar *puVar12;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  char local_f4 [40];
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
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
  char local_5c [12];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40 [5];
  SHA local_2c [8];
  MD5 local_24 [16];
  undefined4 uStack_14;
  
  uStack_14 = 0x879eb4b;
  psVar3 = (sslHashes *)SSL::getHashes(param_1);
  pMVar4 = (MD5 *)sslHashes::get_MD5(psVar3);
  MD5::MD5(local_24,pMVar4);
  psVar3 = (sslHashes *)SSL::getHashes(param_1);
  pSVar5 = (SHA *)sslHashes::get_SHA(psVar3);
  SHA::SHA(local_2c,pSVar5);
  cVar2 = SSL::isTLS(param_1);
  if (cVar2 == '\0') {
    pSVar6 = (Security *)SSL::getSecurity(param_1);
    iVar7 = Security::get_connection(pSVar6);
    local_b4 = *(undefined4 *)param_3;
    local_b0 = *(undefined4 *)(iVar7 + 4);
    local_ac = *(undefined4 *)(iVar7 + 8);
    local_a8 = *(undefined4 *)(iVar7 + 0xc);
    local_a4 = *(undefined4 *)(iVar7 + 0x10);
    local_a0 = *(undefined4 *)(iVar7 + 0x14);
    local_9c = *(undefined4 *)(iVar7 + 0x18);
    local_98 = *(undefined4 *)(iVar7 + 0x1c);
    local_94 = *(undefined4 *)(iVar7 + 0x20);
    local_90 = *(undefined4 *)(iVar7 + 0x24);
    local_8c = *(undefined4 *)(iVar7 + 0x28);
    local_88 = *(undefined4 *)(iVar7 + 0x2c);
    local_84 = *(undefined4 *)(iVar7 + 0x30);
    local_80 = 0x36363636;
    local_7c = 0x36363636;
    local_78 = 0x36363636;
    local_74 = 0x36363636;
    local_70 = 0x36363636;
    local_6c = 0x36363636;
    local_68 = 0x36363636;
    local_64 = 0x36363636;
    local_60 = 0x36363636;
    builtin_strncpy(local_5c,"666666666666",0xc);
    psVar3 = (sslHashes *)SSL::useHashes(param_1);
    piVar8 = (int *)sslHashes::use_MD5(psVar3);
    (**(code **)(*piVar8 + 4))(piVar8,&local_50,&local_b4,100);
    local_124 = *(undefined4 *)(iVar7 + 4);
    local_120 = *(undefined4 *)(iVar7 + 8);
    local_11c = *(undefined4 *)(iVar7 + 0xc);
    local_118 = *(undefined4 *)(iVar7 + 0x10);
    local_114 = *(undefined4 *)(iVar7 + 0x14);
    local_110 = *(undefined4 *)(iVar7 + 0x18);
    local_10c = *(undefined4 *)(iVar7 + 0x1c);
    local_108 = *(undefined4 *)(iVar7 + 0x20);
    local_104 = *(undefined4 *)(iVar7 + 0x24);
    local_100 = *(undefined4 *)(iVar7 + 0x28);
    local_fc = *(undefined4 *)(iVar7 + 0x2c);
    local_f8 = *(undefined4 *)(iVar7 + 0x30);
    builtin_strncpy(local_f4,
                    "\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\"
                    ,0x28);
    local_cc = 0x5c5c5c5c;
    local_c4 = local_50;
    local_c8 = 0x5c5c5c5c;
    local_c0 = local_4c;
    local_bc = local_48;
    local_b8 = local_44;
    psVar3 = (sslHashes *)SSL::useHashes(param_1);
    piVar8 = (int *)sslHashes::use_MD5(psVar3);
    pcVar1 = *(code **)(*piVar8 + 4);
    uVar9 = Finished::set_md5(param_2);
    (*pcVar1)(piVar8,uVar9,&local_124,0x70);
    pSVar6 = (Security *)SSL::getSecurity(param_1);
    iVar7 = Security::get_connection(pSVar6);
    local_b4 = *(undefined4 *)param_3;
    local_b0 = *(undefined4 *)(iVar7 + 4);
    local_ac = *(undefined4 *)(iVar7 + 8);
    local_a8 = *(undefined4 *)(iVar7 + 0xc);
    local_a4 = *(undefined4 *)(iVar7 + 0x10);
    local_a0 = *(undefined4 *)(iVar7 + 0x14);
    local_9c = *(undefined4 *)(iVar7 + 0x18);
    local_98 = *(undefined4 *)(iVar7 + 0x1c);
    local_94 = *(undefined4 *)(iVar7 + 0x20);
    local_90 = *(undefined4 *)(iVar7 + 0x24);
    local_8c = *(undefined4 *)(iVar7 + 0x28);
    local_88 = *(undefined4 *)(iVar7 + 0x2c);
    local_84 = *(undefined4 *)(iVar7 + 0x30);
    local_80 = PAD1;
    local_7c = DAT_08d0d464;
    local_78 = DAT_08d0d468;
    local_74 = DAT_08d0d46c;
    local_70 = DAT_08d0d470;
    local_6c = DAT_08d0d474;
    local_68 = DAT_08d0d478;
    local_64 = DAT_08d0d47c;
    local_60 = DAT_08d0d480;
    local_5c[0] = s_666666666666_08d0d484[0];
    local_5c[1] = s_666666666666_08d0d484[1];
    local_5c[2] = s_666666666666_08d0d484[2];
    local_5c[3] = s_666666666666_08d0d484[3];
    psVar3 = (sslHashes *)SSL::useHashes(param_1);
    piVar8 = (int *)sslHashes::use_SHA(psVar3);
    (**(code **)(*piVar8 + 4))(piVar8,&local_50,&local_b4,0x5c);
    local_124 = *(undefined4 *)(iVar7 + 4);
    local_120 = *(undefined4 *)(iVar7 + 8);
    local_11c = *(undefined4 *)(iVar7 + 0xc);
    local_118 = *(undefined4 *)(iVar7 + 0x10);
    local_114 = *(undefined4 *)(iVar7 + 0x14);
    local_110 = *(undefined4 *)(iVar7 + 0x18);
    local_10c = *(undefined4 *)(iVar7 + 0x1c);
    local_108 = *(undefined4 *)(iVar7 + 0x20);
    local_104 = *(undefined4 *)(iVar7 + 0x24);
    local_100 = *(undefined4 *)(iVar7 + 0x28);
    local_fc = *(undefined4 *)(iVar7 + 0x2c);
    local_f8 = *(undefined4 *)(iVar7 + 0x30);
    local_f4[0] = PAD2[0];
    local_f4[1] = PAD2[1];
    local_f4[2] = PAD2[2];
    local_f4[3] = PAD2[3];
    local_f4[4] = PAD2[4];
    local_f4[5] = PAD2[5];
    local_f4[6] = PAD2[6];
    local_f4[7] = PAD2[7];
    local_f4[8] = PAD2[8];
    local_f4[9] = PAD2[9];
    local_f4[10] = PAD2[10];
    local_f4[0xb] = PAD2[0xb];
    local_f4[0xc] = PAD2[0xc];
    local_f4[0xd] = PAD2[0xd];
    local_f4[0xe] = PAD2[0xe];
    local_f4[0xf] = PAD2[0xf];
    local_f4[0x10] = PAD2[0x10];
    local_f4[0x11] = PAD2[0x11];
    local_f4[0x12] = PAD2[0x12];
    local_f4[0x13] = PAD2[0x13];
    local_f4[0x14] = PAD2[0x14];
    local_f4[0x15] = PAD2[0x15];
    local_f4[0x16] = PAD2[0x16];
    local_f4[0x17] = PAD2[0x17];
    local_f4[0x18] = PAD2[0x18];
    local_f4[0x19] = PAD2[0x19];
    local_f4[0x1a] = PAD2[0x1a];
    local_f4[0x1b] = PAD2[0x1b];
    local_f4[0x1c] = PAD2[0x1c];
    local_f4[0x1d] = PAD2[0x1d];
    local_f4[0x1e] = PAD2[0x1e];
    local_f4[0x1f] = PAD2[0x1f];
    local_f4[0x20] = PAD2[0x20];
    local_f4[0x21] = PAD2[0x21];
    local_f4[0x22] = PAD2[0x22];
    local_f4[0x23] = PAD2[0x23];
    local_f4[0x24] = PAD2[0x24];
    local_f4[0x25] = PAD2[0x25];
    local_f4[0x26] = PAD2[0x26];
    local_f4[0x27] = PAD2[0x27];
    local_cc = local_50;
    local_c8 = local_4c;
    local_c4 = local_48;
    local_c0 = local_44;
    local_bc = local_40[0];
    psVar3 = (sslHashes *)SSL::useHashes(param_1);
    piVar8 = (int *)sslHashes::use_SHA(psVar3);
    pcVar1 = *(code **)(*piVar8 + 4);
    uVar9 = Finished::set_sha(param_2);
    (*pcVar1)(piVar8,uVar9,&local_124,0x6c);
  }
  else {
    psVar3 = (sslHashes *)SSL::useHashes(param_1);
    puVar10 = (undefined4 *)sslHashes::use_MD5(psVar3);
    (**(code **)*puVar10)(puVar10,&local_50);
    psVar3 = (sslHashes *)SSL::useHashes(param_1);
    puVar10 = (undefined4 *)sslHashes::use_SHA(psVar3);
    (**(code **)*puVar10)(puVar10,local_40);
    iVar7 = strncmp((char *)param_3,"CLNTSRVR",4);
    puVar12 = (uchar *)"server finished";
    if (iVar7 == 0) {
      puVar12 = "client finished";
    }
    pSVar6 = (Security *)SSL::getSecurity(param_1);
    iVar7 = Security::get_connection(pSVar6);
    puVar11 = (uchar *)Finished::set_md5(param_2);
    PRF(puVar11,0xc,(uchar *)(iVar7 + 4),0x30,puVar12,0xf,(uchar *)&local_50,0x24);
    HandShakeBase::set_length((HandShakeBase *)param_2,0xc);
  }
  psVar3 = (sslHashes *)SSL::useHashes(param_1);
  pMVar4 = (MD5 *)sslHashes::use_MD5(psVar3);
  MD5::operator=(pMVar4,local_24);
  psVar3 = (sslHashes *)SSL::useHashes(param_1);
  pSVar5 = (SHA *)sslHashes::use_SHA(psVar3);
  SHA::operator=(pSVar5,local_2c);
  SHA::~SHA(local_2c);
  MD5::~MD5(local_24);
  return;
}
```
