# build

`_ZN5yaSSL9DH_Server5buildERNS_3SSLE`

`yaSSL::DH_Server::build(yaSSL::SSL&)`

| 类 | 地址 |
|---|---|
| `yaSSL::DH_Server` | `0x0874c920` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874c920  _ZN5yaSSL9DH_Server5buildERNS_3SSLE
#           yaSSL::DH_Server::build(yaSSL::SSL&)
# range [0x0874c920, 0x0874d11a]
0874c920 +0x000:  push   %ebp
0874c921 +0x001:  mov    %esp,%ebp
0874c923 +0x003:  push   %edi
0874c924 +0x004:  push   %esi
0874c925 +0x005:  push   %ebx
0874c926 +0x006:  call   08722df8 <__i686.get_pc_thunk.bx>
0874c92b +0x00b:  add    $0xc2026d,%ebx
0874c931 +0x011:  sub    $0xdc,%esp
0874c937 +0x017:  mov    0xc(%ebp),%esi
0874c93a +0x01a:  mov    %esi,(%esp)
0874c93d +0x01d:  call   0874e2b0 <_ZN5yaSSL3SSL9useCryptoEv>  ; yaSSL::SSL::useCrypto()
0874c942 +0x022:  mov    %eax,(%esp)
0874c945 +0x025:  call   0874e7c0 <_ZN5yaSSL6Crypto6use_dhEv>  ; yaSSL::Crypto::use_dh()
0874c94a +0x02a:  mov    %eax,%edx
0874c94c +0x02c:  lea    -0x28(%ebp),%eax
0874c94f +0x02f:  mov    %eax,0xc(%esp)
0874c953 +0x033:  lea    -0x24(%ebp),%eax
0874c956 +0x036:  mov    %eax,0x8(%esp)
0874c95a +0x03a:  lea    -0x20(%ebp),%eax
0874c95d +0x03d:  mov    %edx,(%esp)
0874c960 +0x040:  mov    %edx,-0xb8(%ebp)
0874c966 +0x046:  mov    %eax,0x4(%esp)
0874c96a +0x04a:  call   0879abb0 <_ZNK5yaSSL13DiffieHellman9set_sizesERiS1_S1_>  ; yaSSL::DiffieHellman::set_sizes(int&, int&, int&) const
0874c96f +0x04f:  mov    0x8(%ebp),%edi
0874c972 +0x052:  mov    -0x28(%ebp),%eax
0874c975 +0x055:  add    $0x4,%edi
0874c978 +0x058:  mov    %eax,0x4(%esp)
0874c97c +0x05c:  mov    %edi,(%esp)
0874c97f +0x05f:  call   087472c0 <_ZN5yaSSL14ServerDHParams9alloc_pubEi>  ; yaSSL::ServerDHParams::alloc_pub(int)
0874c984 +0x064:  mov    %edi,(%esp)
0874c987 +0x067:  mov    %eax,%ecx
0874c989 +0x069:  mov    -0x24(%ebp),%eax
0874c98c +0x06c:  mov    %ecx,-0xbc(%ebp)
0874c992 +0x072:  mov    %eax,0x4(%esp)
0874c996 +0x076:  call   08747300 <_ZN5yaSSL14ServerDHParams7alloc_gEi>  ; yaSSL::ServerDHParams::alloc_g(int)
0874c99b +0x07b:  mov    %edi,(%esp)
0874c99e +0x07e:  mov    %eax,-0x9c(%ebp)
0874c9a4 +0x084:  mov    -0x20(%ebp),%eax
0874c9a7 +0x087:  mov    %eax,0x4(%esp)
0874c9ab +0x08b:  call   08747340 <_ZN5yaSSL14ServerDHParams7alloc_pEi>  ; yaSSL::ServerDHParams::alloc_p(int)
0874c9b0 +0x090:  mov    -0xbc(%ebp),%ecx
0874c9b6 +0x096:  mov    -0xb8(%ebp),%edx
0874c9bc +0x09c:  mov    %ecx,0xc(%esp)
0874c9c0 +0x0a0:  mov    -0x9c(%ebp),%ecx
0874c9c6 +0x0a6:  mov    %edx,(%esp)
0874c9c9 +0x0a9:  mov    %eax,0x4(%esp)
0874c9cd +0x0ad:  mov    %ecx,0x8(%esp)
0874c9d1 +0x0b1:  call   0879ac80 <_ZNK5yaSSL13DiffieHellman9get_parmsEPhS1_S1_>  ; yaSSL::DiffieHellman::get_parms(unsigned char*, unsigned char*, unsigned char*) const
0874c9d6 +0x0b6:  mov    %esi,(%esp)
0874c9d9 +0x0b9:  call   0874e060 <_ZNK5yaSSL3SSL9getCryptoEv>  ; yaSSL::SSL::getCrypto() const
0874c9de +0x0be:  mov    %eax,(%esp)
0874c9e1 +0x0c1:  call   0874e790 <_ZNK5yaSSL6Crypto15get_certManagerEv>  ; yaSSL::Crypto::get_certManager() const
0874c9e6 +0x0c6:  mov    %esi,(%esp)
0874c9e9 +0x0c9:  mov    %eax,-0x9c(%ebp)
0874c9ef +0x0cf:  call   0874e070 <_ZNK5yaSSL3SSL11getSecurityEv>  ; yaSSL::SSL::getSecurity() const
0874c9f4 +0x0d4:  mov    %eax,(%esp)
0874c9f7 +0x0d7:  call   0874ea50 <_ZNK5yaSSL8Security9get_parmsEv>  ; yaSSL::Security::get_parms() const
0874c9fc +0x0dc:  cmpl   $0x1,0x20(%eax)
0874ca00 +0x0e0:  je     0874ca48 <+0x128>
0874ca02 +0x0e2:  mov    -0x9c(%ebp),%ecx
0874ca08 +0x0e8:  mov    %ecx,(%esp)
0874ca0b +0x0eb:  call   087974d0 <_ZNK5yaSSL11CertManager11get_keyTypeEv>  ; yaSSL::CertManager::get_keyType() const
0874ca10 +0x0f0:  cmp    $0x2,%eax
0874ca13 +0x0f3:  je     0874cff0 <+0x6d0>
0874ca19 +0x0f9:  movl   $0x74,0x4(%esp)
0874ca21 +0x101:  mov    %esi,(%esp)
0874ca24 +0x104:  call   0874dfd0 <_ZN5yaSSL3SSL8SetErrorENS_10YasslErrorE>  ; yaSSL::SSL::SetError(yaSSL::YasslError)
0874ca29 +0x109:  xor    %edx,%edx
0874ca2b +0x10b:  movb   $0x0,0x4(%esp)
0874ca30 +0x110:  mov    %edx,(%esp)
0874ca33 +0x113:  call   08750820 <_ZdlPvN5yaSSL5new_tE>  ; operator delete(void*, yaSSL::new_t)
0874ca38 +0x118:  add    $0xdc,%esp
0874ca3e +0x11e:  pop    %ebx
0874ca3f +0x11f:  pop    %esi
0874ca40 +0x120:  pop    %edi
0874ca41 +0x121:  pop    %ebp
0874ca42 +0x122:  ret
0874ca43 +0x123:  nop
0874ca44 +0x124:  lea    0x0(%esi,%eiz,1),%esi
0874ca48 +0x128:  mov    -0x9c(%ebp),%eax
0874ca4e +0x12e:  mov    %eax,(%esp)
0874ca51 +0x131:  call   087974d0 <_ZNK5yaSSL11CertManager11get_keyTypeEv>  ; yaSSL::CertManager::get_keyType() const
0874ca56 +0x136:  cmp    $0x1,%eax
0874ca59 +0x139:  jne    0874ca19 <+0xf9>
0874ca5b +0x13b:  mov    -0x9c(%ebp),%ecx
0874ca61 +0x141:  mov    %ecx,(%esp)
0874ca64 +0x144:  call   087977f0 <_ZNK5yaSSL11CertManager14get_privateKeyEv>  ; yaSSL::CertManager::get_privateKey() const
0874ca69 +0x149:  mov    %eax,%edx
0874ca6b +0x14b:  mov    -0x9c(%ebp),%eax
0874ca71 +0x151:  mov    %edx,-0xb8(%ebp)
0874ca77 +0x157:  mov    %eax,(%esp)
0874ca7a +0x15a:  call   08797790 <_ZNK5yaSSL11CertManager20get_privateKeyLengthEv>  ; yaSSL::CertManager::get_privateKeyLength() const
0874ca7f +0x15f:  movb   $0x0,0x4(%esp)
0874ca84 +0x164:  movl   $0x8,(%esp)
0874ca8b +0x16b:  mov    %eax,-0xbc(%ebp)
0874ca91 +0x171:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
0874ca96 +0x176:  mov    -0xb8(%ebp),%edx
0874ca9c +0x17c:  mov    -0xbc(%ebp),%ecx
0874caa2 +0x182:  movl   $0x0,0xc(%esp)
0874caaa +0x18a:  mov    %edx,0x4(%esp)
0874caae +0x18e:  mov    %ecx,0x8(%esp)
0874cab2 +0x192:  mov    %eax,(%esp)
0874cab5 +0x195:  mov    %eax,-0xb8(%ebp)
0874cabb +0x19b:  call   0879b260 <_ZN5yaSSL3RSAC1EPKhjb>  ; yaSSL::RSA::RSA(unsigned char const*, unsigned int, bool)
0874cac0 +0x1a0:  mov    -0xb8(%ebp),%eax
0874cac6 +0x1a6:  xor    %ecx,%ecx
0874cac8 +0x1a8:  test   %eax,%eax
0874caca +0x1aa:  mov    %eax,%edx
0874cacc +0x1ac:  je     0874cae8 <+0x1c8>
0874cace +0x1ae:  movb   $0x0,0x4(%esp)
0874cad3 +0x1b3:  movl   $0x0,(%esp)
0874cada +0x1ba:  call   08750820 <_ZdlPvN5yaSSL5new_tE>  ; operator delete(void*, yaSSL::new_t)
0874cadf +0x1bf:  mov    -0xb8(%ebp),%edx
0874cae5 +0x1c5:  xor    %ecx,%ecx
0874cae7 +0x1c7:  nop
0874cae8 +0x1c8:  mov    (%edx),%eax
0874caea +0x1ca:  mov    %edx,-0xb8(%ebp)
0874caf0 +0x1d0:  mov    %edx,(%esp)
0874caf3 +0x1d3:  mov    %ecx,-0xbc(%ebp)
0874caf9 +0x1d9:  call   *0x8(%eax)
0874cafc +0x1dc:  mov    -0xbc(%ebp),%ecx
0874cb02 +0x1e2:  mov    -0xb8(%ebp),%edx
0874cb08 +0x1e8:  add    %ax,%cx
0874cb0b +0x1eb:  mov    %cx,-0xae(%ebp)
0874cb12 +0x1f2:  je     0874d090 <+0x770>
0874cb18 +0x1f8:  mov    0x8(%ebp),%eax
0874cb1b +0x1fb:  movswl -0xae(%ebp),%ecx
0874cb22 +0x202:  mov    %edx,-0xb8(%ebp)
0874cb28 +0x208:  movl   $0x8,0x20(%eax)
0874cb2f +0x20f:  mov    -0x20(%ebp),%eax
0874cb32 +0x212:  add    -0x24(%ebp),%eax
0874cb35 +0x215:  add    -0x28(%ebp),%eax
0874cb38 +0x218:  mov    %ecx,-0xb4(%ebp)
0874cb3e +0x21e:  lea    0x8(%eax,%ecx,1),%eax
0874cb42 +0x222:  mov    0x8(%ebp),%ecx
0874cb45 +0x225:  mov    %eax,0x20(%ecx)
0874cb48 +0x228:  mov    %eax,0x4(%esp)
0874cb4c +0x22c:  lea    -0x44(%ebp),%eax
0874cb4f +0x22f:  mov    %eax,-0x9c(%ebp)
0874cb55 +0x235:  mov    %eax,(%esp)
0874cb58 +0x238:  call   087971d0 <_ZN5yaSSL13output_bufferC1Ej>  ; yaSSL::output_buffer::output_buffer(unsigned int)
0874cb5d +0x23d:  movzwl -0x20(%ebp),%eax
0874cb61 +0x241:  lea    -0x1a(%ebp),%ecx
0874cb64 +0x244:  mov    %ecx,-0xa0(%ebp)
0874cb6a +0x24a:  mov    %ecx,0x4(%esp)
0874cb6e +0x24e:  mov    %eax,(%esp)
0874cb71 +0x251:  call   0874ddd0 <_ZN5yaSSL6c16toaEtPh>  ; yaSSL::c16toa(unsigned short, unsigned char*)
0874cb76 +0x256:  mov    -0xa0(%ebp),%eax
0874cb7c +0x25c:  mov    -0x9c(%ebp),%ecx
0874cb82 +0x262:  movl   $0x2,0x8(%esp)
0874cb8a +0x26a:  mov    %eax,0x4(%esp)
0874cb8e +0x26e:  mov    %ecx,(%esp)
0874cb91 +0x271:  call   08796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>  ; yaSSL::output_buffer::write(unsigned char const*, unsigned int)
0874cb96 +0x276:  mov    -0x20(%ebp),%ecx
0874cb99 +0x279:  mov    %edi,(%esp)
0874cb9c +0x27c:  mov    %ecx,-0xbc(%ebp)
0874cba2 +0x282:  call   08746e20 <_ZNK5yaSSL14ServerDHParams5get_pEv>  ; yaSSL::ServerDHParams::get_p() const
0874cba7 +0x287:  mov    -0xbc(%ebp),%ecx
0874cbad +0x28d:  mov    %ecx,0x8(%esp)
0874cbb1 +0x291:  mov    %eax,0x4(%esp)
0874cbb5 +0x295:  mov    -0x9c(%ebp),%eax
0874cbbb +0x29b:  mov    %eax,(%esp)
0874cbbe +0x29e:  call   08796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>  ; yaSSL::output_buffer::write(unsigned char const*, unsigned int)
0874cbc3 +0x2a3:  mov    -0xa0(%ebp),%ecx
0874cbc9 +0x2a9:  movzwl -0x24(%ebp),%eax
0874cbcd +0x2ad:  mov    %ecx,0x4(%esp)
0874cbd1 +0x2b1:  mov    %eax,(%esp)
0874cbd4 +0x2b4:  call   0874ddd0 <_ZN5yaSSL6c16toaEtPh>  ; yaSSL::c16toa(unsigned short, unsigned char*)
0874cbd9 +0x2b9:  mov    -0xa0(%ebp),%eax
0874cbdf +0x2bf:  mov    -0x9c(%ebp),%ecx
0874cbe5 +0x2c5:  movl   $0x2,0x8(%esp)
0874cbed +0x2cd:  mov    %eax,0x4(%esp)
0874cbf1 +0x2d1:  mov    %ecx,(%esp)
0874cbf4 +0x2d4:  call   08796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>  ; yaSSL::output_buffer::write(unsigned char const*, unsigned int)
0874cbf9 +0x2d9:  mov    -0x24(%ebp),%ecx
0874cbfc +0x2dc:  mov    %edi,(%esp)
0874cbff +0x2df:  mov    %ecx,-0xbc(%ebp)
0874cc05 +0x2e5:  call   08746e30 <_ZNK5yaSSL14ServerDHParams5get_gEv>  ; yaSSL::ServerDHParams::get_g() const
0874cc0a +0x2ea:  mov    -0xbc(%ebp),%ecx
0874cc10 +0x2f0:  mov    %ecx,0x8(%esp)
0874cc14 +0x2f4:  mov    %eax,0x4(%esp)
0874cc18 +0x2f8:  mov    -0x9c(%ebp),%eax
0874cc1e +0x2fe:  mov    %eax,(%esp)
0874cc21 +0x301:  call   08796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>  ; yaSSL::output_buffer::write(unsigned char const*, unsigned int)
0874cc26 +0x306:  mov    -0xa0(%ebp),%ecx
0874cc2c +0x30c:  movzwl -0x28(%ebp),%eax
0874cc30 +0x310:  mov    %ecx,0x4(%esp)
0874cc34 +0x314:  mov    %eax,(%esp)
0874cc37 +0x317:  call   0874ddd0 <_ZN5yaSSL6c16toaEtPh>  ; yaSSL::c16toa(unsigned short, unsigned char*)
0874cc3c +0x31c:  mov    -0xa0(%ebp),%eax
0874cc42 +0x322:  mov    -0x9c(%ebp),%ecx
0874cc48 +0x328:  movl   $0x2,0x8(%esp)
0874cc50 +0x330:  mov    %eax,0x4(%esp)
0874cc54 +0x334:  mov    %ecx,(%esp)
0874cc57 +0x337:  call   08796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>  ; yaSSL::output_buffer::write(unsigned char const*, unsigned int)
0874cc5c +0x33c:  mov    -0x28(%ebp),%ecx
0874cc5f +0x33f:  mov    %edi,(%esp)
0874cc62 +0x342:  lea    -0x38(%ebp),%edi
0874cc65 +0x345:  mov    %ecx,-0xbc(%ebp)
0874cc6b +0x34b:  call   08746e40 <_ZNK5yaSSL14ServerDHParams7get_pubEv>  ; yaSSL::ServerDHParams::get_pub() const
0874cc70 +0x350:  mov    -0xbc(%ebp),%ecx
0874cc76 +0x356:  mov    %ecx,0x8(%esp)
0874cc7a +0x35a:  mov    %eax,0x4(%esp)
0874cc7e +0x35e:  mov    -0x9c(%ebp),%eax
0874cc84 +0x364:  mov    %eax,(%esp)
0874cc87 +0x367:  call   08796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>  ; yaSSL::output_buffer::write(unsigned char const*, unsigned int)
0874cc8c +0x36c:  lea    -0x30(%ebp),%ecx
0874cc8f +0x36f:  mov    %ecx,-0xa4(%ebp)
0874cc95 +0x375:  mov    %ecx,(%esp)
0874cc98 +0x378:  call   0879a110 <_ZN5yaSSL3MD5C1Ev>  ; yaSSL::MD5::MD5()
0874cc9d +0x37d:  mov    %edi,(%esp)
0874cca0 +0x380:  call   0879a190 <_ZN5yaSSL3SHAC1Ev>  ; yaSSL::SHA::SHA()
0874cca5 +0x385:  mov    -0xb4(%ebp),%eax
0874ccab +0x38b:  movb   $0x0,0x4(%esp)
0874ccb0 +0x390:  mov    %eax,(%esp)
0874ccb3 +0x393:  call   08752350 <_ZnajN5yaSSL5new_tE>  ; operator new[](unsigned int, yaSSL::new_t)
0874ccb8 +0x398:  mov    0x8(%ebp),%ecx
0874ccbb +0x39b:  mov    %eax,0x1c(%ecx)
0874ccbe +0x39e:  mov    %esi,(%esp)
0874ccc1 +0x3a1:  call   0874e070 <_ZNK5yaSSL3SSL11getSecurityEv>  ; yaSSL::SSL::getSecurity() const
0874ccc6 +0x3a6:  mov    %eax,(%esp)
0874ccc9 +0x3a9:  call   0874e960 <_ZNK5yaSSL8Security14get_connectionEv>  ; yaSSL::Security::get_connection() const
0874ccce +0x3ae:  movl   $0x20,0x8(%esp)
0874ccd6 +0x3b6:  mov    %eax,-0xa8(%ebp)
0874ccdc +0x3bc:  mov    %eax,%ecx
0874ccde +0x3be:  mov    -0xa4(%ebp),%eax
0874cce4 +0x3c4:  add    $0x34,%ecx
0874cce7 +0x3c7:  mov    %ecx,0x4(%esp)
0874cceb +0x3cb:  mov    %ecx,-0xbc(%ebp)
0874ccf1 +0x3d1:  mov    %eax,(%esp)
0874ccf4 +0x3d4:  call   08799c50 <_ZN5yaSSL3MD56updateEPKhj>  ; yaSSL::MD5::update(unsigned char const*, unsigned int)
0874ccf9 +0x3d9:  mov    -0xa8(%ebp),%eax
0874ccff +0x3df:  movl   $0x20,0x8(%esp)
0874cd07 +0x3e7:  add    $0x54,%eax
0874cd0a +0x3ea:  mov    %eax,-0xa8(%ebp)
0874cd10 +0x3f0:  mov    %eax,0x4(%esp)
0874cd14 +0x3f4:  mov    -0xa4(%ebp),%eax
0874cd1a +0x3fa:  mov    %eax,(%esp)
0874cd1d +0x3fd:  call   08799c50 <_ZN5yaSSL3MD56updateEPKhj>  ; yaSSL::MD5::update(unsigned char const*, unsigned int)
0874cd22 +0x402:  mov    -0x9c(%ebp),%eax
0874cd28 +0x408:  mov    %eax,(%esp)
0874cd2b +0x40b:  call   08796ec0 <_ZNK5yaSSL13output_buffer8get_sizeEv>  ; yaSSL::output_buffer::get_size() const
0874cd30 +0x410:  mov    %eax,-0xac(%ebp)
0874cd36 +0x416:  mov    -0x9c(%ebp),%eax
0874cd3c +0x41c:  mov    %eax,(%esp)
0874cd3f +0x41f:  call   08796f30 <_ZNK5yaSSL13output_buffer10get_bufferEv>  ; yaSSL::output_buffer::get_buffer() const
0874cd44 +0x424:  mov    %eax,0x4(%esp)
0874cd48 +0x428:  mov    -0xac(%ebp),%eax
0874cd4e +0x42e:  mov    %eax,0x8(%esp)
0874cd52 +0x432:  mov    -0xa4(%ebp),%eax
0874cd58 +0x438:  mov    %eax,(%esp)
0874cd5b +0x43b:  call   08799c50 <_ZN5yaSSL3MD56updateEPKhj>  ; yaSSL::MD5::update(unsigned char const*, unsigned int)
0874cd60 +0x440:  lea    -0x68(%ebp),%eax
0874cd63 +0x443:  mov    %eax,-0xac(%ebp)
0874cd69 +0x449:  mov    %eax,0x4(%esp)
0874cd6d +0x44d:  mov    -0xa4(%ebp),%eax
0874cd73 +0x453:  mov    %eax,(%esp)
0874cd76 +0x456:  call   08799710 <_ZN5yaSSL3MD510get_digestEPh>  ; yaSSL::MD5::get_digest(unsigned char*)
0874cd7b +0x45b:  mov    -0xbc(%ebp),%ecx
0874cd81 +0x461:  movl   $0x20,0x8(%esp)
0874cd89 +0x469:  mov    %edi,(%esp)
0874cd8c +0x46c:  mov    %ecx,0x4(%esp)
0874cd90 +0x470:  call   08799980 <_ZN5yaSSL3SHA6updateEPKhj>  ; yaSSL::SHA::update(unsigned char const*, unsigned int)
0874cd95 +0x475:  mov    -0xa8(%ebp),%ecx
0874cd9b +0x47b:  movl   $0x20,0x8(%esp)
0874cda3 +0x483:  mov    %edi,(%esp)
0874cda6 +0x486:  mov    %ecx,0x4(%esp)
0874cdaa +0x48a:  call   08799980 <_ZN5yaSSL3SHA6updateEPKhj>  ; yaSSL::SHA::update(unsigned char const*, unsigned int)
0874cdaf +0x48f:  mov    -0x9c(%ebp),%eax
0874cdb5 +0x495:  mov    %eax,(%esp)
0874cdb8 +0x498:  call   08796ec0 <_ZNK5yaSSL13output_buffer8get_sizeEv>  ; yaSSL::output_buffer::get_size() const
0874cdbd +0x49d:  mov    %eax,%ecx
0874cdbf +0x49f:  mov    -0x9c(%ebp),%eax
0874cdc5 +0x4a5:  mov    %ecx,-0xbc(%ebp)
0874cdcb +0x4ab:  mov    %eax,(%esp)
0874cdce +0x4ae:  call   08796f30 <_ZNK5yaSSL13output_buffer10get_bufferEv>  ; yaSSL::output_buffer::get_buffer() const
0874cdd3 +0x4b3:  mov    -0xbc(%ebp),%ecx
0874cdd9 +0x4b9:  mov    %edi,(%esp)
0874cddc +0x4bc:  mov    %ecx,0x8(%esp)
0874cde0 +0x4c0:  mov    %eax,0x4(%esp)
0874cde4 +0x4c4:  call   08799980 <_ZN5yaSSL3SHA6updateEPKhj>  ; yaSSL::SHA::update(unsigned char const*, unsigned int)
0874cde9 +0x4c9:  lea    -0x58(%ebp),%ecx
0874cdec +0x4cc:  mov    %ecx,-0xa8(%ebp)
0874cdf2 +0x4d2:  mov    %ecx,0x4(%esp)
0874cdf6 +0x4d6:  mov    %edi,(%esp)
0874cdf9 +0x4d9:  call   087996e0 <_ZN5yaSSL3SHA10get_digestEPh>  ; yaSSL::SHA::get_digest(unsigned char*)
0874cdfe +0x4de:  mov    %esi,(%esp)
0874ce01 +0x4e1:  call   0874e070 <_ZNK5yaSSL3SSL11getSecurityEv>  ; yaSSL::SSL::getSecurity() const
0874ce06 +0x4e6:  mov    %eax,(%esp)
0874ce09 +0x4e9:  call   0874ea50 <_ZNK5yaSSL8Security9get_parmsEv>  ; yaSSL::Security::get_parms() const
0874ce0e +0x4ee:  mov    -0xb8(%ebp),%edx
0874ce14 +0x4f4:  cmpl   $0x1,0x20(%eax)
0874ce18 +0x4f8:  je     0874d0c0 <+0x7a0>
0874ce1e +0x4fe:  mov    (%edx),%eax
0874ce20 +0x500:  mov    %edx,-0xb8(%ebp)
0874ce26 +0x506:  mov    (%eax),%eax
0874ce28 +0x508:  mov    %esi,(%esp)
0874ce2b +0x50b:  mov    %eax,-0xac(%ebp)
0874ce31 +0x511:  call   0874e060 <_ZNK5yaSSL3SSL9getCryptoEv>  ; yaSSL::SSL::getCrypto() const
0874ce36 +0x516:  mov    %eax,(%esp)
0874ce39 +0x519:  call   0874e780 <_ZNK5yaSSL6Crypto10get_randomEv>  ; yaSSL::Crypto::get_random() const
0874ce3e +0x51e:  mov    0x8(%ebp),%ecx
0874ce41 +0x521:  mov    -0xb8(%ebp),%edx
0874ce47 +0x527:  movl   $0x14,0xc(%esp)
0874ce4f +0x52f:  mov    %eax,0x10(%esp)
0874ce53 +0x533:  mov    -0xa8(%ebp),%eax
0874ce59 +0x539:  mov    %eax,0x8(%esp)
0874ce5d +0x53d:  mov    0x1c(%ecx),%eax
0874ce60 +0x540:  mov    %edx,(%esp)
0874ce63 +0x543:  mov    %eax,0x4(%esp)
0874ce67 +0x547:  call   *-0xac(%ebp)
0874ce6d +0x54d:  mov    0x8(%ebp),%ecx
0874ce70 +0x550:  lea    -0x96(%ebp),%eax
0874ce76 +0x556:  mov    %eax,0x4(%esp)
0874ce7a +0x55a:  mov    0x1c(%ecx),%eax
0874ce7d +0x55d:  mov    %eax,(%esp)
0874ce80 +0x560:  call   087554a0 <_ZN8TaoCrypt19EncodeDSA_SignatureEPKhPh>  ; TaoCrypt::EncodeDSA_Signature(unsigned char const*, unsigned char*)
0874ce85 +0x565:  mov    0x8(%ebp),%ecx
0874ce88 +0x568:  mov    0x1c(%ecx),%eax
0874ce8b +0x56b:  mov    -0x96(%ebp),%ecx
0874ce91 +0x571:  mov    %ecx,(%eax)
0874ce93 +0x573:  mov    -0x92(%ebp),%ecx
0874ce99 +0x579:  mov    %ecx,0x4(%eax)
0874ce9c +0x57c:  mov    -0x8e(%ebp),%ecx
0874cea2 +0x582:  mov    %ecx,0x8(%eax)
0874cea5 +0x585:  mov    -0x8a(%ebp),%ecx
0874ceab +0x58b:  mov    %ecx,0xc(%eax)
0874ceae +0x58e:  mov    -0x86(%ebp),%ecx
0874ceb4 +0x594:  mov    %ecx,0x10(%eax)
0874ceb7 +0x597:  mov    -0x82(%ebp),%ecx
0874cebd +0x59d:  mov    %ecx,0x14(%eax)
0874cec0 +0x5a0:  mov    -0x7e(%ebp),%ecx
0874cec3 +0x5a3:  mov    %ecx,0x18(%eax)
0874cec6 +0x5a6:  mov    -0x7a(%ebp),%ecx
0874cec9 +0x5a9:  mov    %ecx,0x1c(%eax)
0874cecc +0x5ac:  mov    -0x76(%ebp),%ecx
0874cecf +0x5af:  mov    %ecx,0x20(%eax)
0874ced2 +0x5b2:  mov    -0x72(%ebp),%ecx
0874ced5 +0x5b5:  mov    %ecx,0x24(%eax)
0874ced8 +0x5b8:  mov    -0x6e(%ebp),%ecx
0874cedb +0x5bb:  mov    %ecx,0x28(%eax)
0874cede +0x5be:  movzwl -0x6a(%ebp),%ecx
0874cee2 +0x5c2:  mov    %cx,0x2c(%eax)
0874cee6 +0x5c6:  mov    -0xb8(%ebp),%edx
0874ceec +0x5cc:  mov    -0xa0(%ebp),%eax
0874cef2 +0x5d2:  mov    %edx,-0xb8(%ebp)
0874cef8 +0x5d8:  mov    %eax,0x4(%esp)
0874cefc +0x5dc:  movzwl -0xae(%ebp),%eax
0874cf03 +0x5e3:  mov    %eax,(%esp)
0874cf06 +0x5e6:  call   0874ddd0 <_ZN5yaSSL6c16toaEtPh>  ; yaSSL::c16toa(unsigned short, unsigned char*)
0874cf0b +0x5eb:  mov    -0xa0(%ebp),%ecx
0874cf11 +0x5f1:  mov    -0x9c(%ebp),%eax
0874cf17 +0x5f7:  movl   $0x2,0x8(%esp)
0874cf1f +0x5ff:  mov    %ecx,0x4(%esp)
0874cf23 +0x603:  mov    %eax,(%esp)
0874cf26 +0x606:  call   08796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>  ; yaSSL::output_buffer::write(unsigned char const*, unsigned int)
0874cf2b +0x60b:  mov    -0xb4(%ebp),%ecx
0874cf31 +0x611:  mov    %ecx,0x8(%esp)
0874cf35 +0x615:  mov    0x8(%ebp),%ecx
0874cf38 +0x618:  mov    0x1c(%ecx),%eax
0874cf3b +0x61b:  mov    %eax,0x4(%esp)
0874cf3f +0x61f:  mov    -0x9c(%ebp),%eax
0874cf45 +0x625:  mov    %eax,(%esp)
0874cf48 +0x628:  call   08796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>  ; yaSSL::output_buffer::write(unsigned char const*, unsigned int)
0874cf4d +0x62d:  mov    0x8(%ebp),%ecx
0874cf50 +0x630:  movb   $0x0,0x4(%esp)
0874cf55 +0x635:  mov    0x20(%ecx),%eax
0874cf58 +0x638:  mov    %eax,(%esp)
0874cf5b +0x63b:  call   08752350 <_ZnajN5yaSSL5new_tE>  ; operator new[](unsigned int, yaSSL::new_t)
0874cf60 +0x640:  mov    0x8(%ebp),%ecx
0874cf63 +0x643:  mov    %eax,0x24(%ecx)
0874cf66 +0x646:  mov    -0x9c(%ebp),%eax
0874cf6c +0x64c:  mov    %eax,(%esp)
0874cf6f +0x64f:  call   08796ec0 <_ZNK5yaSSL13output_buffer8get_sizeEv>  ; yaSSL::output_buffer::get_size() const
0874cf74 +0x654:  mov    -0x9c(%ebp),%ecx
0874cf7a +0x65a:  mov    %ecx,(%esp)
0874cf7d +0x65d:  mov    %eax,%esi
0874cf7f +0x65f:  call   08796f30 <_ZNK5yaSSL13output_buffer10get_bufferEv>  ; yaSSL::output_buffer::get_buffer() const
0874cf84 +0x664:  mov    0x8(%ebp),%ecx
0874cf87 +0x667:  mov    0x24(%ecx),%ecx
0874cf8a +0x66a:  mov    %esi,0x8(%esp)
0874cf8e +0x66e:  mov    %eax,0x4(%esp)
0874cf92 +0x672:  mov    %ecx,(%esp)
0874cf95 +0x675:  call   0807d8a0 <_init+0x198>
0874cf9a +0x67a:  mov    %edi,(%esp)
0874cf9d +0x67d:  call   08798cb0 <_ZN5yaSSL3SHAD1Ev>  ; yaSSL::SHA::~SHA()
0874cfa2 +0x682:  mov    -0xa4(%ebp),%eax
0874cfa8 +0x688:  mov    %eax,(%esp)
0874cfab +0x68b:  call   08798d40 <_ZN5yaSSL3MD5D1Ev>  ; yaSSL::MD5::~MD5()
0874cfb0 +0x690:  mov    -0x9c(%ebp),%ecx
0874cfb6 +0x696:  mov    %ecx,(%esp)
0874cfb9 +0x699:  call   08797330 <_ZN5yaSSL13output_bufferD1Ev>  ; yaSSL::output_buffer::~output_buffer()
0874cfbe +0x69e:  mov    -0xb8(%ebp),%edx
0874cfc4 +0x6a4:  mov    (%edx),%eax
0874cfc6 +0x6a6:  mov    %edx,(%esp)
0874cfc9 +0x6a9:  call   *0xc(%eax)
0874cfcc +0x6ac:  mov    -0xb8(%ebp),%edx
0874cfd2 +0x6b2:  movb   $0x0,0x4(%esp)
0874cfd7 +0x6b7:  mov    %edx,(%esp)
0874cfda +0x6ba:  call   08750820 <_ZdlPvN5yaSSL5new_tE>  ; operator delete(void*, yaSSL::new_t)
0874cfdf +0x6bf:  add    $0xdc,%esp
0874cfe5 +0x6c5:  pop    %ebx
0874cfe6 +0x6c6:  pop    %esi
0874cfe7 +0x6c7:  pop    %edi
0874cfe8 +0x6c8:  pop    %ebp
0874cfe9 +0x6c9:  ret
0874cfea +0x6ca:  lea    0x0(%esi),%esi
0874cff0 +0x6d0:  mov    -0x9c(%ebp),%eax
0874cff6 +0x6d6:  mov    %eax,(%esp)
0874cff9 +0x6d9:  call   087977f0 <_ZNK5yaSSL11CertManager14get_privateKeyEv>  ; yaSSL::CertManager::get_privateKey() const
0874cffe +0x6de:  mov    -0x9c(%ebp),%ecx
0874d004 +0x6e4:  mov    %ecx,(%esp)
0874d007 +0x6e7:  mov    %eax,-0xb8(%ebp)
0874d00d +0x6ed:  call   08797790 <_ZNK5yaSSL11CertManager20get_privateKeyLengthEv>  ; yaSSL::CertManager::get_privateKeyLength() const
0874d012 +0x6f2:  movb   $0x0,0x4(%esp)
0874d017 +0x6f7:  movl   $0x8,(%esp)
0874d01e +0x6fe:  mov    %eax,-0xbc(%ebp)
0874d024 +0x704:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
0874d029 +0x709:  mov    -0xb8(%ebp),%edx
0874d02f +0x70f:  mov    -0xbc(%ebp),%ecx
0874d035 +0x715:  movl   $0x0,0xc(%esp)
0874d03d +0x71d:  mov    %edx,0x4(%esp)
0874d041 +0x721:  mov    %ecx,0x8(%esp)
0874d045 +0x725:  mov    %eax,(%esp)
0874d048 +0x728:  mov    %eax,-0xb8(%ebp)
0874d04e +0x72e:  call   0879b560 <_ZN5yaSSL3DSSC1EPKhjb>  ; yaSSL::DSS::DSS(unsigned char const*, unsigned int, bool)
0874d053 +0x733:  mov    -0xb8(%ebp),%eax
0874d059 +0x739:  mov    $0x6,%ecx
0874d05e +0x73e:  test   %eax,%eax
0874d060 +0x740:  mov    %eax,%edx
0874d062 +0x742:  je     0874cae8 <+0x1c8>
0874d068 +0x748:  movb   $0x0,0x4(%esp)
0874d06d +0x74d:  movl   $0x0,(%esp)
0874d074 +0x754:  call   08750820 <_ZdlPvN5yaSSL5new_tE>  ; operator delete(void*, yaSSL::new_t)
0874d079 +0x759:  mov    $0x6,%ecx
0874d07e +0x75e:  mov    -0xb8(%ebp),%edx
0874d084 +0x764:  jmp    0874cae8 <+0x1c8>
0874d089 +0x769:  lea    0x0(%esi,%eiz,1),%esi
0874d090 +0x770:  movl   $0x74,0x4(%esp)
0874d098 +0x778:  mov    %esi,(%esp)
0874d09b +0x77b:  call   0874dfd0 <_ZN5yaSSL3SSL8SetErrorENS_10YasslErrorE>  ; yaSSL::SSL::SetError(yaSSL::YasslError)
0874d0a0 +0x780:  mov    -0xb8(%ebp),%edx
0874d0a6 +0x786:  mov    (%edx),%eax
0874d0a8 +0x788:  mov    %edx,(%esp)
0874d0ab +0x78b:  call   *0xc(%eax)
0874d0ae +0x78e:  mov    -0xb8(%ebp),%edx
0874d0b4 +0x794:  jmp    0874ca2b <+0x10b>
0874d0b9 +0x799:  lea    0x0(%esi,%eiz,1),%esi
0874d0c0 +0x7a0:  mov    (%edx),%eax
0874d0c2 +0x7a2:  mov    (%eax),%eax
0874d0c4 +0x7a4:  mov    %esi,(%esp)
0874d0c7 +0x7a7:  mov    %eax,-0xa8(%ebp)
0874d0cd +0x7ad:  call   0874e060 <_ZNK5yaSSL3SSL9getCryptoEv>  ; yaSSL::SSL::getCrypto() const
0874d0d2 +0x7b2:  mov    %eax,(%esp)
0874d0d5 +0x7b5:  call   0874e780 <_ZNK5yaSSL6Crypto10get_randomEv>  ; yaSSL::Crypto::get_random() const
0874d0da +0x7ba:  mov    0x8(%ebp),%ecx
0874d0dd +0x7bd:  mov    -0xb8(%ebp),%edx
0874d0e3 +0x7c3:  movl   $0x24,0xc(%esp)
0874d0eb +0x7cb:  mov    %eax,0x10(%esp)
0874d0ef +0x7cf:  mov    -0xac(%ebp),%eax
0874d0f5 +0x7d5:  mov    %eax,0x8(%esp)
0874d0f9 +0x7d9:  mov    0x1c(%ecx),%eax
0874d0fc +0x7dc:  mov    %edx,(%esp)
0874d0ff +0x7df:  mov    %eax,0x4(%esp)
0874d103 +0x7e3:  call   *-0xa8(%ebp)
0874d109 +0x7e9:  mov    -0xb8(%ebp),%edx
0874d10f +0x7ef:  jmp    0874ceec <+0x5cc>
0874d114 +0x7f4:  lea    0x0(%esi),%esi
0874d11a +0x7fa:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// yaSSL::DH_Server::build @ 0x874c920

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::DH_Server::build(yaSSL::SSL&) */

void __thiscall yaSSL::DH_Server::build(DH_Server *this,SSL *param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  short sVar3;
  Crypto *pCVar4;
  DiffieHellman *this_00;
  uchar *puVar5;
  uchar *puVar6;
  uchar *puVar7;
  CertManager *this_01;
  Security *pSVar8;
  int iVar9;
  void *pvVar10;
  undefined4 uVar11;
  size_t __n;
  uint uVar12;
  ushort uVar13;
  short sVar14;
  uint uVar15;
  DSS *this_02;
  ServerDHParams *this_03;
  undefined4 local_9a;
  undefined4 local_96;
  undefined4 local_92;
  undefined4 local_8e;
  undefined4 local_8a;
  undefined4 local_86;
  undefined4 local_82;
  undefined4 local_7e;
  undefined4 local_7a;
  undefined4 local_76;
  undefined4 local_72;
  undefined2 local_6e;
  uchar local_6c [16];
  uchar local_5c [20];
  output_buffer local_48 [12];
  SHA local_3c [8];
  MD5 local_34 [8];
  uint local_2c;
  uint local_28;
  uint local_24;
  uchar local_1e [10];
  undefined4 uStack_14;
  
  uStack_14 = 0x874c92b;
  pCVar4 = (Crypto *)SSL::useCrypto(param_1);
  this_00 = (DiffieHellman *)Crypto::use_dh(pCVar4);
  DiffieHellman::set_sizes(this_00,(int *)&local_24,(int *)&local_28,(int *)&local_2c);
  this_03 = (ServerDHParams *)(this + 4);
  puVar5 = (uchar *)ServerDHParams::alloc_pub(this_03,local_2c);
  puVar6 = (uchar *)ServerDHParams::alloc_g(this_03,local_28);
  puVar7 = (uchar *)ServerDHParams::alloc_p(this_03,local_24);
  DiffieHellman::get_parms(this_00,puVar7,puVar6,puVar5);
  pCVar4 = (Crypto *)SSL::getCrypto(param_1);
  this_01 = (CertManager *)Crypto::get_certManager(pCVar4);
  pSVar8 = (Security *)SSL::getSecurity(param_1);
  iVar9 = Security::get_parms(pSVar8);
  if (*(int *)(iVar9 + 0x20) == 1) {
    iVar9 = CertManager::get_keyType(this_01);
    if (iVar9 == 1) {
      puVar5 = (uchar *)CertManager::get_privateKey(this_01);
      uVar12 = CertManager::get_privateKeyLength(this_01);
      this_02 = operator_new(8,(uint)puVar7 & 0xffffff00);
      RSA::RSA((RSA *)this_02,puVar5,uVar12,false);
      sVar14 = 0;
      if (this_02 != (DSS *)0x0) {
        operator_delete(0,(uint)puVar5 & 0xffffff00);
        sVar14 = 0;
      }
      goto LAB_0874cae8;
    }
  }
  else {
    iVar9 = CertManager::get_keyType(this_01);
    if (iVar9 == 2) {
      puVar5 = (uchar *)CertManager::get_privateKey(this_01);
      uVar12 = CertManager::get_privateKeyLength(this_01);
      this_02 = operator_new(8,(uint)puVar7 & 0xffffff00);
      DSS::DSS(this_02,puVar5,uVar12,false);
      sVar14 = 6;
      if (this_02 != (DSS *)0x0) {
        operator_delete(0,(uint)puVar5 & 0xffffff00);
        sVar14 = 6;
      }
LAB_0874cae8:
      sVar3 = (**(code **)(*(int *)this_02 + 8))(this_02);
      uVar13 = sVar14 + sVar3;
      if (uVar13 != 0) {
        uVar15 = (uint)(short)uVar13;
        *(undefined4 *)(this + 0x20) = 8;
        uVar12 = local_24 + local_28 + local_2c + 8 + uVar15;
        *(uint *)(this + 0x20) = uVar12;
        output_buffer::output_buffer(local_48,uVar12);
        c16toa((ushort)local_24,local_1e);
        output_buffer::write(local_48,local_1e,2);
        puVar5 = (uchar *)ServerDHParams::get_p(this_03);
        output_buffer::write(local_48,puVar5,local_24);
        c16toa((ushort)local_28,local_1e);
        output_buffer::write(local_48,local_1e,2);
        puVar5 = (uchar *)ServerDHParams::get_g(this_03);
        output_buffer::write(local_48,puVar5,local_28);
        c16toa((ushort)local_2c,local_1e);
        output_buffer::write(local_48,local_1e,2);
        puVar5 = (uchar *)ServerDHParams::get_pub(this_03);
        output_buffer::write(local_48,puVar5,local_2c);
        MD5::MD5(local_34);
        SHA::SHA(local_3c);
        pvVar10 = operator_new__(uVar15,(uint)puVar5 & 0xffffff00);
        *(void **)(this + 0x1c) = pvVar10;
        pSVar8 = (Security *)SSL::getSecurity(param_1);
        iVar9 = Security::get_connection(pSVar8);
        MD5::update(local_34,(uchar *)(iVar9 + 0x34),0x20);
        MD5::update(local_34,(uchar *)(iVar9 + 0x54),0x20);
        uVar12 = output_buffer::get_size(local_48);
        puVar5 = (uchar *)output_buffer::get_buffer(local_48);
        MD5::update(local_34,puVar5,uVar12);
        MD5::get_digest(local_34,local_6c);
        SHA::update(local_3c,(uchar *)(iVar9 + 0x34),0x20);
        SHA::update(local_3c,(uchar *)(iVar9 + 0x54),0x20);
        uVar12 = output_buffer::get_size(local_48);
        puVar5 = (uchar *)output_buffer::get_buffer(local_48);
        SHA::update(local_3c,puVar5,uVar12);
        SHA::get_digest(local_3c,local_5c);
        pSVar8 = (Security *)SSL::getSecurity(param_1);
        iVar9 = Security::get_parms(pSVar8);
        if (*(int *)(iVar9 + 0x20) == 1) {
          pcVar1 = (code *)**(undefined4 **)this_02;
          pCVar4 = (Crypto *)SSL::getCrypto(param_1);
          uVar11 = Crypto::get_random(pCVar4);
          (*pcVar1)(this_02,*(undefined4 *)(this + 0x1c),local_6c,0x24,uVar11);
        }
        else {
          pcVar1 = (code *)**(undefined4 **)this_02;
          pCVar4 = (Crypto *)SSL::getCrypto(param_1);
          uVar11 = Crypto::get_random(pCVar4);
          (*pcVar1)(this_02,*(undefined4 *)(this + 0x1c),local_5c,0x14,uVar11);
          TaoCrypt::EncodeDSA_Signature(*(uchar **)(this + 0x1c),(uchar *)&local_9a);
          puVar2 = *(undefined4 **)(this + 0x1c);
          *puVar2 = local_9a;
          puVar2[1] = local_96;
          puVar2[2] = local_92;
          puVar2[3] = local_8e;
          puVar2[4] = local_8a;
          puVar2[5] = local_86;
          puVar2[6] = local_82;
          puVar2[7] = local_7e;
          puVar2[8] = local_7a;
          puVar2[9] = local_76;
          puVar2[10] = local_72;
          *(undefined2 *)(puVar2 + 0xb) = local_6e;
        }
        c16toa(uVar13,local_1e);
        output_buffer::write(local_48,local_1e,2);
        puVar5 = *(uchar **)(this + 0x1c);
        output_buffer::write(local_48,puVar5,uVar15);
        pvVar10 = operator_new__(*(undefined4 *)(this + 0x20),(uint)puVar5 & 0xffffff00);
        *(void **)(this + 0x24) = pvVar10;
        __n = output_buffer::get_size(local_48);
        pvVar10 = (void *)output_buffer::get_buffer(local_48);
        memcpy(*(void **)(this + 0x24),pvVar10,__n);
        SHA::~SHA(local_3c);
        MD5::~MD5(local_34);
        output_buffer::~output_buffer(local_48);
        (**(code **)(*(int *)this_02 + 0xc))(this_02);
        operator_delete(this_02,(uint)pvVar10 & 0xffffff00);
        return;
      }
      uVar12 = 0;
      SSL::SetError(param_1,0x74);
      (**(code **)(*(int *)this_02 + 0xc))(this_02);
      goto LAB_0874ca2b;
    }
  }
  uVar12 = 0;
  SSL::SetError(param_1,0x74);
  this_02 = (DSS *)0x0;
LAB_0874ca2b:
  operator_delete(this_02,uVar12 & 0xffffff00);
  return;
}
```
