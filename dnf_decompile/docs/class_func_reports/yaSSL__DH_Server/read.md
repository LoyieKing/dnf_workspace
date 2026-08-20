# read

`_ZN5yaSSL9DH_Server4readERNS_3SSLERNS_12input_bufferE`

`yaSSL::DH_Server::read(yaSSL::SSL&, yaSSL::input_buffer&)`

| 类 | 地址 |
|---|---|
| `yaSSL::DH_Server` | `0x0874a8e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874a8e0  _ZN5yaSSL9DH_Server4readERNS_3SSLERNS_12input_bufferE
#           yaSSL::DH_Server::read(yaSSL::SSL&, yaSSL::input_buffer&)
# range [0x0874a8e0, 0x0874af9e]
0874a8e0 +0x000:  push   %ebp
0874a8e1 +0x001:  mov    %esp,%ebp
0874a8e3 +0x003:  push   %edi
0874a8e4 +0x004:  push   %esi
0874a8e5 +0x005:  push   %ebx
0874a8e6 +0x006:  call   08722df8 <__i686.get_pc_thunk.bx>
0874a8eb +0x00b:  add    $0xc222ad,%ebx
0874a8f1 +0x011:  sub    $0xdc,%esp
0874a8f7 +0x017:  mov    0x10(%ebp),%eax
0874a8fa +0x01a:  movl   $0xfeedbeef,0x4(%esp)
0874a902 +0x022:  mov    %eax,(%esp)
0874a905 +0x025:  call   08796e20 <_ZN5yaSSL12input_bufferixEj>  ; yaSSL::input_buffer::operator[](unsigned int)
0874a90a +0x02a:  mov    0x10(%ebp),%edx
0874a90d +0x02d:  movzbl (%eax),%eax
0874a910 +0x030:  mov    %edx,(%esp)
0874a913 +0x033:  movl   $0xfeedbeef,0x4(%esp)
0874a91b +0x03b:  mov    %al,-0x1c(%ebp)
0874a91e +0x03e:  call   08796e20 <_ZN5yaSSL12input_bufferixEj>  ; yaSSL::input_buffer::operator[](unsigned int)
0874a923 +0x043:  lea    -0x1c(%ebp),%edx
0874a926 +0x046:  movzbl (%eax),%eax
0874a929 +0x049:  mov    %edx,-0xa8(%ebp)
0874a92f +0x04f:  mov    %edx,(%esp)
0874a932 +0x052:  mov    %al,-0x1b(%ebp)
0874a935 +0x055:  lea    -0x1a(%ebp),%eax
0874a938 +0x058:  mov    %eax,-0xa0(%ebp)
0874a93e +0x05e:  mov    %eax,0x4(%esp)
0874a942 +0x062:  call   0874dd90 <_ZN5yaSSL5ato16EPKhRt>  ; yaSSL::ato16(unsigned char const*, unsigned short&)
0874a947 +0x067:  movzwl -0x1a(%ebp),%edx
0874a94b +0x06b:  mov    0x8(%ebp),%esi
0874a94e +0x06e:  movzwl %dx,%edi
0874a951 +0x071:  add    $0x4,%esi
0874a954 +0x074:  mov    %edx,-0xb8(%ebp)
0874a95a +0x07a:  mov    %edi,0x4(%esp)
0874a95e +0x07e:  mov    %esi,(%esp)
0874a961 +0x081:  call   08747340 <_ZN5yaSSL14ServerDHParams7alloc_pEi>  ; yaSSL::ServerDHParams::alloc_p(int)
0874a966 +0x086:  mov    %edi,0x8(%esp)
0874a96a +0x08a:  mov    %eax,0x4(%esp)
0874a96e +0x08e:  mov    0x10(%ebp),%eax
0874a971 +0x091:  mov    %eax,(%esp)
0874a974 +0x094:  call   08797040 <_ZN5yaSSL12input_buffer4readEPhj>  ; yaSSL::input_buffer::read(unsigned char*, unsigned int)
0874a979 +0x099:  mov    0x10(%ebp),%eax
0874a97c +0x09c:  movl   $0xfeedbeef,0x4(%esp)
0874a984 +0x0a4:  mov    %eax,(%esp)
0874a987 +0x0a7:  call   08796e20 <_ZN5yaSSL12input_bufferixEj>  ; yaSSL::input_buffer::operator[](unsigned int)
0874a98c +0x0ac:  movzbl (%eax),%eax
0874a98f +0x0af:  movl   $0xfeedbeef,0x4(%esp)
0874a997 +0x0b7:  mov    %al,-0x1c(%ebp)
0874a99a +0x0ba:  mov    0x10(%ebp),%eax
0874a99d +0x0bd:  mov    %eax,(%esp)
0874a9a0 +0x0c0:  call   08796e20 <_ZN5yaSSL12input_bufferixEj>  ; yaSSL::input_buffer::operator[](unsigned int)
0874a9a5 +0x0c5:  movzbl (%eax),%eax
0874a9a8 +0x0c8:  mov    %al,-0x1b(%ebp)
0874a9ab +0x0cb:  mov    -0xa0(%ebp),%eax
0874a9b1 +0x0d1:  mov    %eax,0x4(%esp)
0874a9b5 +0x0d5:  mov    -0xa8(%ebp),%eax
0874a9bb +0x0db:  mov    %eax,(%esp)
0874a9be +0x0de:  call   0874dd90 <_ZN5yaSSL5ato16EPKhRt>  ; yaSSL::ato16(unsigned char const*, unsigned short&)
0874a9c3 +0x0e3:  movzwl -0x1a(%ebp),%edi
0874a9c7 +0x0e7:  mov    -0xb8(%ebp),%edx
0874a9cd +0x0ed:  mov    %esi,(%esp)
0874a9d0 +0x0f0:  mov    %edi,0x4(%esp)
0874a9d4 +0x0f4:  lea    0x6(%edx,%edi,1),%edx
0874a9d8 +0x0f8:  mov    %dx,-0xa4(%ebp)
0874a9df +0x0ff:  call   08747300 <_ZN5yaSSL14ServerDHParams7alloc_gEi>  ; yaSSL::ServerDHParams::alloc_g(int)
0874a9e4 +0x104:  mov    0x10(%ebp),%edx
0874a9e7 +0x107:  mov    %edi,0x8(%esp)
0874a9eb +0x10b:  mov    %edx,(%esp)
0874a9ee +0x10e:  mov    %eax,0x4(%esp)
0874a9f2 +0x112:  call   08797040 <_ZN5yaSSL12input_buffer4readEPhj>  ; yaSSL::input_buffer::read(unsigned char*, unsigned int)
0874a9f7 +0x117:  mov    0x10(%ebp),%eax
0874a9fa +0x11a:  movl   $0xfeedbeef,0x4(%esp)
0874aa02 +0x122:  mov    %eax,(%esp)
0874aa05 +0x125:  call   08796e20 <_ZN5yaSSL12input_bufferixEj>  ; yaSSL::input_buffer::operator[](unsigned int)
0874aa0a +0x12a:  mov    0x10(%ebp),%edx
0874aa0d +0x12d:  movzbl (%eax),%eax
0874aa10 +0x130:  mov    %edx,(%esp)
0874aa13 +0x133:  movl   $0xfeedbeef,0x4(%esp)
0874aa1b +0x13b:  mov    %al,-0x1c(%ebp)
0874aa1e +0x13e:  call   08796e20 <_ZN5yaSSL12input_bufferixEj>  ; yaSSL::input_buffer::operator[](unsigned int)
0874aa23 +0x143:  mov    -0xa8(%ebp),%edx
0874aa29 +0x149:  movzbl (%eax),%eax
0874aa2c +0x14c:  mov    %edx,(%esp)
0874aa2f +0x14f:  mov    %al,-0x1b(%ebp)
0874aa32 +0x152:  mov    -0xa0(%ebp),%eax
0874aa38 +0x158:  mov    %eax,0x4(%esp)
0874aa3c +0x15c:  call   0874dd90 <_ZN5yaSSL5ato16EPKhRt>  ; yaSSL::ato16(unsigned char const*, unsigned short&)
0874aa41 +0x161:  movzwl -0x1a(%ebp),%edx
0874aa45 +0x165:  mov    %esi,(%esp)
0874aa48 +0x168:  movzwl %dx,%edi
0874aa4b +0x16b:  mov    %edx,-0xb8(%ebp)
0874aa51 +0x171:  mov    %edi,0x4(%esp)
0874aa55 +0x175:  call   087472c0 <_ZN5yaSSL14ServerDHParams9alloc_pubEi>  ; yaSSL::ServerDHParams::alloc_pub(int)
0874aa5a +0x17a:  mov    %edi,0x8(%esp)
0874aa5e +0x17e:  lea    -0x44(%ebp),%edi
0874aa61 +0x181:  mov    %eax,0x4(%esp)
0874aa65 +0x185:  mov    0x10(%ebp),%eax
0874aa68 +0x188:  mov    %eax,(%esp)
0874aa6b +0x18b:  call   08797040 <_ZN5yaSSL12input_buffer4readEPhj>  ; yaSSL::input_buffer::read(unsigned char*, unsigned int)
0874aa70 +0x190:  mov    -0xb8(%ebp),%edx
0874aa76 +0x196:  add    -0xa4(%ebp),%dx
0874aa7d +0x19d:  mov    %edi,(%esp)
0874aa80 +0x1a0:  movzwl %dx,%edx
0874aa83 +0x1a3:  mov    %edx,-0xa4(%ebp)
0874aa89 +0x1a9:  mov    %edx,0x4(%esp)
0874aa8d +0x1ad:  call   087972e0 <_ZN5yaSSL12input_bufferC1Ej>  ; yaSSL::input_buffer::input_buffer(unsigned int)
0874aa92 +0x1b2:  mov    0x10(%ebp),%edx
0874aa95 +0x1b5:  mov    %edx,(%esp)
0874aa98 +0x1b8:  call   08796da0 <_ZNK5yaSSL12input_buffer11get_currentEv>  ; yaSSL::input_buffer::get_current() const
0874aa9d +0x1bd:  sub    -0xa4(%ebp),%eax
0874aaa3 +0x1c3:  mov    %eax,0x4(%esp)
0874aaa7 +0x1c7:  mov    0x10(%ebp),%eax
0874aaaa +0x1ca:  mov    %eax,(%esp)
0874aaad +0x1cd:  call   08796dd0 <_ZN5yaSSL12input_buffer11set_currentEj>  ; yaSSL::input_buffer::set_current(unsigned int)
0874aab2 +0x1d2:  mov    %edi,(%esp)
0874aab5 +0x1d5:  call   08796d30 <_ZNK5yaSSL12input_buffer10get_bufferEv>  ; yaSSL::input_buffer::get_buffer() const
0874aaba +0x1da:  mov    -0xa4(%ebp),%edx
0874aac0 +0x1e0:  mov    %edx,0x8(%esp)
0874aac4 +0x1e4:  mov    %eax,0x4(%esp)
0874aac8 +0x1e8:  mov    0x10(%ebp),%eax
0874aacb +0x1eb:  mov    %eax,(%esp)
0874aace +0x1ee:  call   08797040 <_ZN5yaSSL12input_buffer4readEPhj>  ; yaSSL::input_buffer::read(unsigned char*, unsigned int)
0874aad3 +0x1f3:  mov    -0xa4(%ebp),%edx
0874aad9 +0x1f9:  mov    %edi,(%esp)
0874aadc +0x1fc:  mov    %edx,0x4(%esp)
0874aae0 +0x200:  call   08796d50 <_ZN5yaSSL12input_buffer8add_sizeEj>  ; yaSSL::input_buffer::add_size(unsigned int)
0874aae5 +0x205:  mov    0x10(%ebp),%eax
0874aae8 +0x208:  movl   $0xfeedbeef,0x4(%esp)
0874aaf0 +0x210:  mov    %eax,(%esp)
0874aaf3 +0x213:  call   08796e20 <_ZN5yaSSL12input_bufferixEj>  ; yaSSL::input_buffer::operator[](unsigned int)
0874aaf8 +0x218:  mov    0x10(%ebp),%edx
0874aafb +0x21b:  movzbl (%eax),%eax
0874aafe +0x21e:  mov    %edx,(%esp)
0874ab01 +0x221:  movl   $0xfeedbeef,0x4(%esp)
0874ab09 +0x229:  mov    %al,-0x1c(%ebp)
0874ab0c +0x22c:  call   08796e20 <_ZN5yaSSL12input_bufferixEj>  ; yaSSL::input_buffer::operator[](unsigned int)
0874ab11 +0x231:  mov    -0xa8(%ebp),%edx
0874ab17 +0x237:  movzbl (%eax),%eax
0874ab1a +0x23a:  mov    %edx,(%esp)
0874ab1d +0x23d:  mov    %al,-0x1b(%ebp)
0874ab20 +0x240:  mov    -0xa0(%ebp),%eax
0874ab26 +0x246:  mov    %eax,0x4(%esp)
0874ab2a +0x24a:  call   0874dd90 <_ZN5yaSSL5ato16EPKhRt>  ; yaSSL::ato16(unsigned char const*, unsigned short&)
0874ab2f +0x24f:  movzwl -0x1a(%ebp),%eax
0874ab33 +0x253:  movb   $0x0,0x4(%esp)
0874ab38 +0x258:  mov    %eax,(%esp)
0874ab3b +0x25b:  call   08752350 <_ZnajN5yaSSL5new_tE>  ; operator new[](unsigned int, yaSSL::new_t)
0874ab40 +0x260:  mov    0x8(%ebp),%edx
0874ab43 +0x263:  mov    %eax,0x1c(%edx)
0874ab46 +0x266:  movzwl -0x1a(%ebp),%edx
0874ab4a +0x26a:  mov    %eax,0x4(%esp)
0874ab4e +0x26e:  mov    0x10(%ebp),%eax
0874ab51 +0x271:  mov    %edx,0x8(%esp)
0874ab55 +0x275:  mov    %eax,(%esp)
0874ab58 +0x278:  call   08797040 <_ZN5yaSSL12input_buffer4readEPhj>  ; yaSSL::input_buffer::read(unsigned char*, unsigned int)
0874ab5d +0x27d:  lea    -0x24(%ebp),%edx
0874ab60 +0x280:  mov    %edx,-0xa4(%ebp)
0874ab66 +0x286:  mov    %edx,(%esp)
0874ab69 +0x289:  call   0879a110 <_ZN5yaSSL3MD5C1Ev>  ; yaSSL::MD5::MD5()
0874ab6e +0x28e:  lea    -0x2c(%ebp),%eax
0874ab71 +0x291:  mov    %eax,-0x9c(%ebp)
0874ab77 +0x297:  mov    %eax,(%esp)
0874ab7a +0x29a:  call   0879a190 <_ZN5yaSSL3SHAC1Ev>  ; yaSSL::SHA::SHA()
0874ab7f +0x29f:  mov    0xc(%ebp),%edx
0874ab82 +0x2a2:  mov    %edx,(%esp)
0874ab85 +0x2a5:  call   0874e070 <_ZNK5yaSSL3SSL11getSecurityEv>  ; yaSSL::SSL::getSecurity() const
0874ab8a +0x2aa:  mov    %eax,(%esp)
0874ab8d +0x2ad:  call   0874e960 <_ZNK5yaSSL8Security14get_connectionEv>  ; yaSSL::Security::get_connection() const
0874ab92 +0x2b2:  mov    -0xa4(%ebp),%edx
0874ab98 +0x2b8:  movl   $0x20,0x8(%esp)
0874aba0 +0x2c0:  mov    %edx,(%esp)
0874aba3 +0x2c3:  lea    0x34(%eax),%ecx
0874aba6 +0x2c6:  mov    %ecx,0x4(%esp)
0874abaa +0x2ca:  mov    %ecx,-0xbc(%ebp)
0874abb0 +0x2d0:  mov    %eax,-0xb8(%ebp)
0874abb6 +0x2d6:  call   08799c50 <_ZN5yaSSL3MD56updateEPKhj>  ; yaSSL::MD5::update(unsigned char const*, unsigned int)
0874abbb +0x2db:  mov    -0xb8(%ebp),%eax
0874abc1 +0x2e1:  movl   $0x20,0x8(%esp)
0874abc9 +0x2e9:  add    $0x54,%eax
0874abcc +0x2ec:  mov    %eax,-0xa8(%ebp)
0874abd2 +0x2f2:  mov    %eax,0x4(%esp)
0874abd6 +0x2f6:  mov    -0xa4(%ebp),%eax
0874abdc +0x2fc:  mov    %eax,(%esp)
0874abdf +0x2ff:  call   08799c50 <_ZN5yaSSL3MD56updateEPKhj>  ; yaSSL::MD5::update(unsigned char const*, unsigned int)
0874abe4 +0x304:  mov    %edi,(%esp)
0874abe7 +0x307:  call   08796db0 <_ZNK5yaSSL12input_buffer8get_sizeEv>  ; yaSSL::input_buffer::get_size() const
0874abec +0x30c:  mov    %edi,(%esp)
0874abef +0x30f:  mov    %eax,-0xa0(%ebp)
0874abf5 +0x315:  call   08796d30 <_ZNK5yaSSL12input_buffer10get_bufferEv>  ; yaSSL::input_buffer::get_buffer() const
0874abfa +0x31a:  mov    -0xa0(%ebp),%edx
0874ac00 +0x320:  mov    %edx,0x8(%esp)
0874ac04 +0x324:  mov    %eax,0x4(%esp)
0874ac08 +0x328:  mov    -0xa4(%ebp),%eax
0874ac0e +0x32e:  mov    %eax,(%esp)
0874ac11 +0x331:  call   08799c50 <_ZN5yaSSL3MD56updateEPKhj>  ; yaSSL::MD5::update(unsigned char const*, unsigned int)
0874ac16 +0x336:  mov    -0xa4(%ebp),%eax
0874ac1c +0x33c:  lea    -0x68(%ebp),%edx
0874ac1f +0x33f:  mov    %edx,-0xb0(%ebp)
0874ac25 +0x345:  mov    %edx,0x4(%esp)
0874ac29 +0x349:  mov    %eax,(%esp)
0874ac2c +0x34c:  call   08799710 <_ZN5yaSSL3MD510get_digestEPh>  ; yaSSL::MD5::get_digest(unsigned char*)
0874ac31 +0x351:  mov    -0xbc(%ebp),%ecx
0874ac37 +0x357:  mov    -0x9c(%ebp),%edx
0874ac3d +0x35d:  movl   $0x20,0x8(%esp)
0874ac45 +0x365:  mov    %ecx,0x4(%esp)
0874ac49 +0x369:  mov    %edx,(%esp)
0874ac4c +0x36c:  call   08799980 <_ZN5yaSSL3SHA6updateEPKhj>  ; yaSSL::SHA::update(unsigned char const*, unsigned int)
0874ac51 +0x371:  mov    -0x9c(%ebp),%edx
0874ac57 +0x377:  mov    -0xa8(%ebp),%eax
0874ac5d +0x37d:  movl   $0x20,0x8(%esp)
0874ac65 +0x385:  mov    %edx,(%esp)
0874ac68 +0x388:  mov    %eax,0x4(%esp)
0874ac6c +0x38c:  call   08799980 <_ZN5yaSSL3SHA6updateEPKhj>  ; yaSSL::SHA::update(unsigned char const*, unsigned int)
0874ac71 +0x391:  mov    %edi,(%esp)
0874ac74 +0x394:  call   08796db0 <_ZNK5yaSSL12input_buffer8get_sizeEv>  ; yaSSL::input_buffer::get_size() const
0874ac79 +0x399:  mov    %edi,(%esp)
0874ac7c +0x39c:  mov    %eax,-0xb8(%ebp)
0874ac82 +0x3a2:  call   08796d30 <_ZNK5yaSSL12input_buffer10get_bufferEv>  ; yaSSL::input_buffer::get_buffer() const
0874ac87 +0x3a7:  mov    -0xb8(%ebp),%edx
0874ac8d +0x3ad:  mov    %edx,0x8(%esp)
0874ac91 +0x3b1:  mov    %eax,0x4(%esp)
0874ac95 +0x3b5:  mov    -0x9c(%ebp),%eax
0874ac9b +0x3bb:  mov    %eax,(%esp)
0874ac9e +0x3be:  call   08799980 <_ZN5yaSSL3SHA6updateEPKhj>  ; yaSSL::SHA::update(unsigned char const*, unsigned int)
0874aca3 +0x3c3:  mov    -0x9c(%ebp),%eax
0874aca9 +0x3c9:  lea    -0x58(%ebp),%edx
0874acac +0x3cc:  mov    %edx,-0xa8(%ebp)
0874acb2 +0x3d2:  mov    %edx,0x4(%esp)
0874acb6 +0x3d6:  mov    %eax,(%esp)
0874acb9 +0x3d9:  call   087996e0 <_ZN5yaSSL3SHA10get_digestEPh>  ; yaSSL::SHA::get_digest(unsigned char*)
0874acbe +0x3de:  mov    0xc(%ebp),%edx
0874acc1 +0x3e1:  mov    %edx,(%esp)
0874acc4 +0x3e4:  call   0874e060 <_ZNK5yaSSL3SSL9getCryptoEv>  ; yaSSL::SSL::getCrypto() const
0874acc9 +0x3e9:  mov    %eax,(%esp)
0874accc +0x3ec:  call   0874e790 <_ZNK5yaSSL6Crypto15get_certManagerEv>  ; yaSSL::Crypto::get_certManager() const
0874acd1 +0x3f1:  mov    %eax,-0xa0(%ebp)
0874acd7 +0x3f7:  mov    0xc(%ebp),%eax
0874acda +0x3fa:  mov    %eax,(%esp)
0874acdd +0x3fd:  call   0874e070 <_ZNK5yaSSL3SSL11getSecurityEv>  ; yaSSL::SSL::getSecurity() const
0874ace2 +0x402:  mov    %eax,(%esp)
0874ace5 +0x405:  call   0874ea50 <_ZNK5yaSSL8Security9get_parmsEv>  ; yaSSL::Security::get_parms() const
0874acea +0x40a:  cmpl   $0x1,0x20(%eax)
0874acee +0x40e:  je     0874aec8 <+0x5e8>
0874acf4 +0x414:  movzwl -0x1a(%ebp),%eax
0874acf8 +0x418:  mov    0x8(%ebp),%edx
0874acfb +0x41b:  mov    %eax,0x8(%esp)
0874acff +0x41f:  mov    0x1c(%edx),%eax
0874ad02 +0x422:  lea    -0x90(%ebp),%edx
0874ad08 +0x428:  mov    %edx,(%esp)
0874ad0b +0x42b:  mov    %edx,-0xb8(%ebp)
0874ad11 +0x431:  mov    %eax,0x4(%esp)
0874ad15 +0x435:  call   08755120 <_ZN8TaoCrypt19DecodeDSA_SignatureEPhPKhj>  ; TaoCrypt::DecodeDSA_Signature(unsigned char*, unsigned char const*, unsigned int)
0874ad1a +0x43a:  mov    %ax,-0x1a(%ebp)
0874ad1e +0x43e:  mov    -0xa0(%ebp),%eax
0874ad24 +0x444:  mov    %eax,(%esp)
0874ad27 +0x447:  call   087977c0 <_ZNK5yaSSL11CertManager17get_peerKeyLengthEv>  ; yaSSL::CertManager::get_peerKeyLength() const
0874ad2c +0x44c:  mov    %eax,%ecx
0874ad2e +0x44e:  mov    -0xa0(%ebp),%eax
0874ad34 +0x454:  mov    %ecx,-0xbc(%ebp)
0874ad3a +0x45a:  mov    %eax,(%esp)
0874ad3d +0x45d:  call   08797820 <_ZNK5yaSSL11CertManager11get_peerKeyEv>  ; yaSSL::CertManager::get_peerKey() const
0874ad42 +0x462:  mov    -0xbc(%ebp),%ecx
0874ad48 +0x468:  movl   $0x1,0xc(%esp)
0874ad50 +0x470:  mov    %ecx,0x8(%esp)
0874ad54 +0x474:  mov    %eax,0x4(%esp)
0874ad58 +0x478:  lea    -0x34(%ebp),%eax
0874ad5b +0x47b:  mov    %eax,-0xa0(%ebp)
0874ad61 +0x481:  mov    %eax,(%esp)
0874ad64 +0x484:  call   0879b560 <_ZN5yaSSL3DSSC1EPKhjb>  ; yaSSL::DSS::DSS(unsigned char const*, unsigned int, bool)
0874ad69 +0x489:  movzwl -0x1a(%ebp),%eax
0874ad6d +0x48d:  mov    -0xb8(%ebp),%edx
0874ad73 +0x493:  movl   $0x14,0x8(%esp)
0874ad7b +0x49b:  mov    %eax,0x10(%esp)
0874ad7f +0x49f:  mov    -0xa0(%ebp),%eax
0874ad85 +0x4a5:  mov    %edx,0xc(%esp)
0874ad89 +0x4a9:  mov    -0xa8(%ebp),%edx
0874ad8f +0x4af:  mov    %eax,(%esp)
0874ad92 +0x4b2:  mov    %edx,0x4(%esp)
0874ad96 +0x4b6:  call   0879a8d0 <_ZN5yaSSL3DSS6verifyEPKhjS2_j>  ; yaSSL::DSS::verify(unsigned char const*, unsigned int, unsigned char const*, unsigned int)
0874ad9b +0x4bb:  test   %al,%al
0874ad9d +0x4bd:  je     0874af60 <+0x680>
0874ada3 +0x4c3:  mov    -0xa0(%ebp),%eax
0874ada9 +0x4c9:  mov    %eax,(%esp)
0874adac +0x4cc:  call   0879ba40 <_ZN5yaSSL3DSSD1Ev>  ; yaSSL::DSS::~DSS()
0874adb1 +0x4d1:  mov    %esi,(%esp)
0874adb4 +0x4d4:  call   08746e20 <_ZNK5yaSSL14ServerDHParams5get_pEv>  ; yaSSL::ServerDHParams::get_p() const
0874adb9 +0x4d9:  mov    %esi,(%esp)
0874adbc +0x4dc:  mov    %eax,-0xb4(%ebp)
0874adc2 +0x4e2:  call   08746df0 <_ZNK5yaSSL14ServerDHParams9get_pSizeEv>  ; yaSSL::ServerDHParams::get_pSize() const
0874adc7 +0x4e7:  mov    %esi,(%esp)
0874adca +0x4ea:  mov    %eax,-0xb0(%ebp)
0874add0 +0x4f0:  call   08746e30 <_ZNK5yaSSL14ServerDHParams5get_gEv>  ; yaSSL::ServerDHParams::get_g() const
0874add5 +0x4f5:  mov    %esi,(%esp)
0874add8 +0x4f8:  mov    %eax,-0xac(%ebp)
0874adde +0x4fe:  call   08746e00 <_ZNK5yaSSL14ServerDHParams9get_gSizeEv>  ; yaSSL::ServerDHParams::get_gSize() const
0874ade3 +0x503:  mov    %esi,(%esp)
0874ade6 +0x506:  mov    %eax,-0xa8(%ebp)
0874adec +0x50c:  call   08746e40 <_ZNK5yaSSL14ServerDHParams7get_pubEv>  ; yaSSL::ServerDHParams::get_pub() const
0874adf1 +0x511:  mov    %esi,(%esp)
0874adf4 +0x514:  mov    %eax,-0xa0(%ebp)
0874adfa +0x51a:  call   08746e10 <_ZNK5yaSSL14ServerDHParams11get_pubSizeEv>  ; yaSSL::ServerDHParams::get_pubSize() const
0874adff +0x51f:  mov    0xc(%ebp),%edx
0874ae02 +0x522:  mov    %edx,(%esp)
0874ae05 +0x525:  mov    %eax,-0xbc(%ebp)
0874ae0b +0x52b:  call   0874e060 <_ZNK5yaSSL3SSL9getCryptoEv>  ; yaSSL::SSL::getCrypto() const
0874ae10 +0x530:  mov    %eax,(%esp)
0874ae13 +0x533:  call   0874e780 <_ZNK5yaSSL6Crypto10get_randomEv>  ; yaSSL::Crypto::get_random() const
0874ae18 +0x538:  movb   $0x0,0x4(%esp)
0874ae1d +0x53d:  movl   $0x4,(%esp)
0874ae24 +0x544:  mov    %eax,-0xb8(%ebp)
0874ae2a +0x54a:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
0874ae2f +0x54f:  mov    -0xb8(%ebp),%edx
0874ae35 +0x555:  mov    -0xbc(%ebp),%ecx
0874ae3b +0x55b:  mov    %edx,0x1c(%esp)
0874ae3f +0x55f:  mov    -0xa8(%ebp),%edx
0874ae45 +0x565:  mov    %ecx,0x18(%esp)
0874ae49 +0x569:  mov    %eax,%esi
0874ae4b +0x56b:  mov    -0xa0(%ebp),%eax
0874ae51 +0x571:  mov    %esi,(%esp)
0874ae54 +0x574:  mov    %edx,0x10(%esp)
0874ae58 +0x578:  mov    -0xb0(%ebp),%edx
0874ae5e +0x57e:  mov    %eax,0x14(%esp)
0874ae62 +0x582:  mov    -0xac(%ebp),%eax
0874ae68 +0x588:  mov    %edx,0x8(%esp)
0874ae6c +0x58c:  mov    %eax,0xc(%esp)
0874ae70 +0x590:  mov    -0xb4(%ebp),%eax
0874ae76 +0x596:  mov    %eax,0x4(%esp)
0874ae7a +0x59a:  call   0879a980 <_ZN5yaSSL13DiffieHellmanC1EPKhjS2_jS2_jRKNS_10RandomPoolE>  ; yaSSL::DiffieHellman::DiffieHellman(unsigned char const*, unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned int, yaSSL::RandomPool const&)
0874ae7f +0x59f:  mov    0xc(%ebp),%edx
0874ae82 +0x5a2:  mov    %edx,(%esp)
0874ae85 +0x5a5:  call   0874e2b0 <_ZN5yaSSL3SSL9useCryptoEv>  ; yaSSL::SSL::useCrypto()
0874ae8a +0x5aa:  mov    %esi,0x4(%esp)
0874ae8e +0x5ae:  mov    %eax,(%esp)
0874ae91 +0x5b1:  call   0874e7f0 <_ZN5yaSSL6Crypto5SetDHEPNS_13DiffieHellmanE>  ; yaSSL::Crypto::SetDH(yaSSL::DiffieHellman*)
0874ae96 +0x5b6:  mov    -0x9c(%ebp),%eax
0874ae9c +0x5bc:  mov    %eax,(%esp)
0874ae9f +0x5bf:  call   08798cb0 <_ZN5yaSSL3SHAD1Ev>  ; yaSSL::SHA::~SHA()
0874aea4 +0x5c4:  mov    -0xa4(%ebp),%edx
0874aeaa +0x5ca:  mov    %edx,(%esp)
0874aead +0x5cd:  call   08798d40 <_ZN5yaSSL3MD5D1Ev>  ; yaSSL::MD5::~MD5()
0874aeb2 +0x5d2:  mov    %edi,(%esp)
0874aeb5 +0x5d5:  call   08797360 <_ZN5yaSSL12input_bufferD1Ev>  ; yaSSL::input_buffer::~input_buffer()
0874aeba +0x5da:  add    $0xdc,%esp
0874aec0 +0x5e0:  pop    %ebx
0874aec1 +0x5e1:  pop    %esi
0874aec2 +0x5e2:  pop    %edi
0874aec3 +0x5e3:  pop    %ebp
0874aec4 +0x5e4:  ret
0874aec5 +0x5e5:  lea    0x0(%esi),%esi
0874aec8 +0x5e8:  mov    -0xa0(%ebp),%edx
0874aece +0x5ee:  mov    %edx,(%esp)
0874aed1 +0x5f1:  call   087977c0 <_ZNK5yaSSL11CertManager17get_peerKeyLengthEv>  ; yaSSL::CertManager::get_peerKeyLength() const
0874aed6 +0x5f6:  mov    %eax,%edx
0874aed8 +0x5f8:  mov    -0xa0(%ebp),%eax
0874aede +0x5fe:  mov    %edx,-0xb8(%ebp)
0874aee4 +0x604:  mov    %eax,(%esp)
0874aee7 +0x607:  call   08797820 <_ZNK5yaSSL11CertManager11get_peerKeyEv>  ; yaSSL::CertManager::get_peerKey() const
0874aeec +0x60c:  mov    -0xb8(%ebp),%edx
0874aef2 +0x612:  movl   $0x1,0xc(%esp)
0874aefa +0x61a:  mov    %edx,0x8(%esp)
0874aefe +0x61e:  lea    -0x90(%ebp),%edx
0874af04 +0x624:  mov    %edx,-0xa0(%ebp)
0874af0a +0x62a:  mov    %eax,0x4(%esp)
0874af0e +0x62e:  mov    %edx,(%esp)
0874af11 +0x631:  call   0879b260 <_ZN5yaSSL3RSAC1EPKhjb>  ; yaSSL::RSA::RSA(unsigned char const*, unsigned int, bool)
0874af16 +0x636:  movzwl -0x1a(%ebp),%eax
0874af1a +0x63a:  mov    0x8(%ebp),%edx
0874af1d +0x63d:  mov    %eax,0x10(%esp)
0874af21 +0x641:  mov    0x1c(%edx),%eax
0874af24 +0x644:  mov    -0xa0(%ebp),%edx
0874af2a +0x64a:  movl   $0x24,0x8(%esp)
0874af32 +0x652:  mov    %eax,0xc(%esp)
0874af36 +0x656:  mov    -0xb0(%ebp),%eax
0874af3c +0x65c:  mov    %edx,(%esp)
0874af3f +0x65f:  mov    %eax,0x4(%esp)
0874af43 +0x663:  call   0879a7d0 <_ZN5yaSSL3RSA6verifyEPKhjS2_j>  ; yaSSL::RSA::verify(unsigned char const*, unsigned int, unsigned char const*, unsigned int)
0874af48 +0x668:  test   %al,%al
0874af4a +0x66a:  je     0874af78 <+0x698>
0874af4c +0x66c:  mov    -0xa0(%ebp),%edx
0874af52 +0x672:  mov    %edx,(%esp)
0874af55 +0x675:  call   0879b380 <_ZN5yaSSL3RSAD1Ev>  ; yaSSL::RSA::~RSA()
0874af5a +0x67a:  jmp    0874adb1 <+0x4d1>
0874af5f +0x67f:  nop
0874af60 +0x680:  mov    0xc(%ebp),%edx
0874af63 +0x683:  movl   $0x70,0x4(%esp)
0874af6b +0x68b:  mov    %edx,(%esp)
0874af6e +0x68e:  call   0874dfd0 <_ZN5yaSSL3SSL8SetErrorENS_10YasslErrorE>  ; yaSSL::SSL::SetError(yaSSL::YasslError)
0874af73 +0x693:  jmp    0874ada3 <+0x4c3>
0874af78 +0x698:  mov    0xc(%ebp),%eax
0874af7b +0x69b:  movl   $0x70,0x4(%esp)
0874af83 +0x6a3:  mov    %eax,(%esp)
0874af86 +0x6a6:  call   0874dfd0 <_ZN5yaSSL3SSL8SetErrorENS_10YasslErrorE>  ; yaSSL::SSL::SetError(yaSSL::YasslError)
0874af8b +0x6ab:  mov    -0xa0(%ebp),%edx
0874af91 +0x6b1:  mov    %edx,(%esp)
0874af94 +0x6b4:  call   0879b380 <_ZN5yaSSL3RSAD1Ev>  ; yaSSL::RSA::~RSA()
0874af99 +0x6b9:  jmp    0874adb1 <+0x4d1>
0874af9e +0x6be:  xchg   %ax,%ax
```

## 反编译 C

```c
// yaSSL::DH_Server::read @ 0x874a8e0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::DH_Server::read(yaSSL::SSL&, yaSSL::input_buffer&) */

void __thiscall yaSSL::DH_Server::read(DH_Server *this,SSL *param_1,input_buffer *param_2)

{
  ushort uVar1;
  char cVar2;
  uchar *puVar3;
  undefined1 *puVar4;
  int iVar5;
  Security *pSVar6;
  uchar *puVar7;
  Crypto *pCVar8;
  CertManager *this_00;
  uchar *puVar9;
  uint uVar10;
  uchar *puVar11;
  uint uVar12;
  RandomPool *pRVar13;
  DiffieHellman *this_01;
  short sVar14;
  uint uVar15;
  ServerDHParams *this_02;
  ushort *puVar16;
  undefined4 uVar17;
  RSA *pRVar18;
  RSA local_94 [40];
  uchar local_6c [16];
  uchar local_5c [20];
  input_buffer local_48 [16];
  DSS local_38 [8];
  SHA local_30 [8];
  MD5 local_28 [8];
  uchar local_20;
  undefined1 local_1f;
  ushort local_1e [5];
  undefined4 uStack_14;
  
  uStack_14 = 0x874a8eb;
  puVar3 = (uchar *)input_buffer::operator[]((uint)param_2);
  local_20 = *puVar3;
  puVar4 = (undefined1 *)input_buffer::operator[]((uint)param_2);
  local_1f = *puVar4;
  puVar16 = local_1e;
  ato16(&local_20,puVar16);
  uVar1 = local_1e[0];
  uVar15 = (uint)local_1e[0];
  this_02 = (ServerDHParams *)(this + 4);
  puVar3 = (uchar *)ServerDHParams::alloc_p(this_02,uVar15);
  input_buffer::read(param_2,puVar3,uVar15);
  puVar3 = (uchar *)input_buffer::operator[]((uint)param_2);
  local_20 = *puVar3;
  puVar4 = (undefined1 *)input_buffer::operator[]((uint)param_2);
  local_1f = *puVar4;
  ato16(&local_20,puVar16);
  uVar15 = (uint)local_1e[0];
  sVar14 = uVar1 + 6 + local_1e[0];
  puVar3 = (uchar *)ServerDHParams::alloc_g(this_02,uVar15);
  input_buffer::read(param_2,puVar3,uVar15);
  puVar3 = (uchar *)input_buffer::operator[]((uint)param_2);
  local_20 = *puVar3;
  puVar4 = (undefined1 *)input_buffer::operator[]((uint)param_2);
  local_1f = *puVar4;
  ato16(&local_20,puVar16);
  uVar1 = local_1e[0];
  uVar15 = (uint)local_1e[0];
  puVar3 = (uchar *)ServerDHParams::alloc_pub(this_02,uVar15);
  input_buffer::read(param_2,puVar3,uVar15);
  uVar15 = (uint)(ushort)(uVar1 + sVar14);
  input_buffer::input_buffer(local_48,uVar15);
  iVar5 = input_buffer::get_current(param_2);
  input_buffer::set_current(param_2,iVar5 - uVar15);
  puVar3 = (uchar *)input_buffer::get_buffer(local_48);
  input_buffer::read(param_2,puVar3,uVar15);
  input_buffer::add_size(local_48,uVar15);
  puVar3 = (uchar *)input_buffer::operator[]((uint)param_2);
  local_20 = *puVar3;
  puVar4 = (undefined1 *)input_buffer::operator[]((uint)param_2);
  local_1f = *puVar4;
  ato16(&local_20,puVar16);
  puVar3 = operator_new__(local_1e[0],(uint)puVar16 & 0xffffff00);
  *(uchar **)(this + 0x1c) = puVar3;
  input_buffer::read(param_2,puVar3,(uint)local_1e[0]);
  MD5::MD5(local_28);
  SHA::SHA(local_30);
  pSVar6 = (Security *)SSL::getSecurity(param_1);
  iVar5 = Security::get_connection(pSVar6);
  MD5::update(local_28,(uchar *)(iVar5 + 0x34),0x20);
  MD5::update(local_28,(uchar *)(iVar5 + 0x54),0x20);
  uVar15 = input_buffer::get_size(local_48);
  puVar3 = (uchar *)input_buffer::get_buffer(local_48);
  MD5::update(local_28,puVar3,uVar15);
  puVar3 = local_6c;
  MD5::get_digest(local_28,puVar3);
  SHA::update(local_30,(uchar *)(iVar5 + 0x34),0x20);
  SHA::update(local_30,(uchar *)(iVar5 + 0x54),0x20);
  uVar15 = input_buffer::get_size(local_48);
  puVar7 = (uchar *)input_buffer::get_buffer(local_48);
  SHA::update(local_30,puVar7,uVar15);
  puVar7 = local_5c;
  SHA::get_digest(local_30,puVar7);
  pCVar8 = (Crypto *)SSL::getCrypto(param_1);
  this_00 = (CertManager *)Crypto::get_certManager(pCVar8);
  pSVar6 = (Security *)SSL::getSecurity(param_1);
  iVar5 = Security::get_parms(pSVar6);
  if (*(int *)(iVar5 + 0x20) == 1) {
    uVar15 = CertManager::get_peerKeyLength(this_00);
    puVar7 = (uchar *)CertManager::get_peerKey(this_00);
    RSA::RSA(local_94,puVar7,uVar15,true);
    uVar10 = (uint)local_1e[0];
    uVar15 = *(uint *)(this + 0x1c);
    uVar17 = 0x24;
    cVar2 = RSA::verify((uchar *)local_94,(uint)puVar3,(uchar *)0x24,uVar15);
    if (cVar2 == '\0') {
      puVar3 = (uchar *)0x0;
      SSL::SetError(param_1,0x70,uVar17,uVar15,uVar10);
      RSA::~RSA(local_94);
    }
    else {
      RSA::~RSA(local_94);
    }
  }
  else {
    pRVar18 = local_94;
    local_1e[0] = TaoCrypt::DecodeDSA_Signature
                            ((uchar *)pRVar18,*(uchar **)(this + 0x1c),(uint)local_1e[0]);
    uVar15 = CertManager::get_peerKeyLength(this_00);
    puVar3 = (uchar *)CertManager::get_peerKey(this_00);
    DSS::DSS(local_38,puVar3,uVar15,true);
    uVar15 = (uint)local_1e[0];
    uVar17 = 0x14;
    cVar2 = DSS::verify((uchar *)local_38,(uint)puVar7,(uchar *)0x14,(uint)pRVar18);
    puVar3 = puVar7;
    if (cVar2 == '\0') {
      puVar3 = (uchar *)0x0;
      SSL::SetError(param_1,0x70,uVar17,pRVar18,uVar15);
    }
    DSS::~DSS(local_38);
  }
  puVar7 = (uchar *)ServerDHParams::get_p(this_02);
  uVar15 = ServerDHParams::get_pSize(this_02);
  puVar9 = (uchar *)ServerDHParams::get_g(this_02);
  uVar10 = ServerDHParams::get_gSize(this_02);
  puVar11 = (uchar *)ServerDHParams::get_pub(this_02);
  uVar12 = ServerDHParams::get_pubSize(this_02);
  pCVar8 = (Crypto *)SSL::getCrypto(param_1);
  pRVar13 = (RandomPool *)Crypto::get_random(pCVar8);
  this_01 = operator_new(4,(uint)puVar3 & 0xffffff00);
  DiffieHellman::DiffieHellman(this_01,puVar7,uVar15,puVar9,uVar10,puVar11,uVar12,pRVar13);
  pCVar8 = (Crypto *)SSL::useCrypto(param_1);
  Crypto::SetDH(pCVar8,this_01);
  SHA::~SHA(local_30);
  MD5::~MD5(local_28);
  input_buffer::~input_buffer(local_48);
  return;
}
```
