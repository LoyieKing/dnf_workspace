# Process

`_ZN5yaSSL11ClientHello7ProcessERNS_12input_bufferERNS_3SSLE`

`yaSSL::ClientHello::Process(yaSSL::input_buffer&, yaSSL::SSL&)`

| 类 | 地址 |
|---|---|
| `yaSSL::ClientHello` | `0x0874a450` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874a450  _ZN5yaSSL11ClientHello7ProcessERNS_12input_bufferERNS_3SSLE
#           yaSSL::ClientHello::Process(yaSSL::input_buffer&, yaSSL::SSL&)
# range [0x0874a450, 0x0874a81a]
0874a450 +0x000:  push   %ebp
0874a451 +0x001:  mov    %esp,%ebp
0874a453 +0x003:  sub    $0x68,%esp
0874a456 +0x006:  mov    %ebx,-0xc(%ebp)
0874a459 +0x009:  call   08722df8 <__i686.get_pc_thunk.bx>
0874a45e +0x00e:  add    $0xc2273a,%ebx
0874a464 +0x014:  mov    %esi,-0x8(%ebp)
0874a467 +0x017:  mov    0x10(%ebp),%esi
0874a46a +0x01a:  mov    %edi,-0x4(%ebp)
0874a46d +0x01d:  mov    0x8(%ebp),%edi
0874a470 +0x020:  mov    %esi,(%esp)
0874a473 +0x023:  call   0874e2c0 <_ZN5yaSSL3SSL11useSecurityEv>  ; yaSSL::SSL::useSecurity()
0874a478 +0x028:  mov    %eax,(%esp)
0874a47b +0x02b:  call   0874ed00 <_ZN5yaSSL8Security14use_connectionEv>  ; yaSSL::Security::use_connection()
0874a480 +0x030:  movzwl 0x8(%edi),%edx
0874a484 +0x034:  mov    %dx,0x130(%eax)
0874a48b +0x03b:  cmpb   $0x3,0x8(%edi)
0874a48f +0x03f:  je     0874a4b0 <+0x60>
0874a491 +0x041:  movl   $0x75,0x4(%esp)
0874a499 +0x049:  mov    %esi,(%esp)
0874a49c +0x04c:  call   0874dfd0 <_ZN5yaSSL3SSL8SetErrorENS_10YasslErrorE>  ; yaSSL::SSL::SetError(yaSSL::YasslError)
0874a4a1 +0x051:  mov    -0xc(%ebp),%ebx
0874a4a4 +0x054:  mov    -0x8(%ebp),%esi
0874a4a7 +0x057:  mov    -0x4(%ebp),%edi
0874a4aa +0x05a:  mov    %ebp,%esp
0874a4ac +0x05c:  pop    %ebp
0874a4ad +0x05d:  ret
0874a4ae +0x05e:  xchg   %ax,%ax
0874a4b0 +0x060:  mov    %esi,(%esp)
0874a4b3 +0x063:  call   0874ea10 <_ZNK5yaSSL3SSL16GetMultiProtocolEv>  ; yaSSL::SSL::GetMultiProtocol() const
0874a4b8 +0x068:  test   %al,%al
0874a4ba +0x06a:  jne    0874a5c8 <+0x178>
0874a4c0 +0x070:  mov    %esi,(%esp)
0874a4c3 +0x073:  call   0874e970 <_ZNK5yaSSL3SSL9isTLSv1_1Ev>  ; yaSSL::SSL::isTLSv1_1() const
0874a4c8 +0x078:  test   %al,%al
0874a4ca +0x07a:  je     0874a4d2 <+0x82>
0874a4cc +0x07c:  cmpb   $0x1,0x9(%edi)
0874a4d0 +0x080:  jbe    0874a491 <+0x41>
0874a4d2 +0x082:  mov    %esi,(%esp)
0874a4d5 +0x085:  call   0874e9a0 <_ZNK5yaSSL3SSL5isTLSEv>  ; yaSSL::SSL::isTLS() const
0874a4da +0x08a:  test   %al,%al
0874a4dc +0x08c:  je     0874a4e4 <+0x94>
0874a4de +0x08e:  cmpb   $0x0,0x9(%edi)
0874a4e2 +0x092:  je     0874a491 <+0x41>
0874a4e4 +0x094:  mov    %esi,(%esp)
0874a4e7 +0x097:  call   0874e9a0 <_ZNK5yaSSL3SSL5isTLSEv>  ; yaSSL::SSL::isTLS() const
0874a4ec +0x09c:  test   %al,%al
0874a4ee +0x09e:  je     0874a6d0 <+0x280>
0874a4f4 +0x0a4:  lea    0x0(%esi,%eiz,1),%esi
0874a4f8 +0x0a8:  lea    0xa(%edi),%eax
0874a4fb +0x0ab:  movl   $0x1,0x8(%esp)
0874a503 +0x0b3:  mov    %eax,0x4(%esp)
0874a507 +0x0b7:  mov    %esi,(%esp)
0874a50a +0x0ba:  call   0874f3d0 <_ZN5yaSSL3SSL10set_randomEPKhNS_13ConnectionEndE>  ; yaSSL::SSL::set_random(unsigned char const*, yaSSL::ConnectionEnd)
0874a50f +0x0bf:  cmpb   $0x0,0x2a(%edi)
0874a513 +0x0c3:  je     0874a550 <+0x100>
0874a515 +0x0c5:  mov    %esi,(%esp)
0874a518 +0x0c8:  call   0874e070 <_ZNK5yaSSL3SSL11getSecurityEv>  ; yaSSL::SSL::getSecurity() const
0874a51d +0x0cd:  mov    %eax,(%esp)
0874a520 +0x0d0:  call   0874ea00 <_ZNK5yaSSL8Security10GetContextEv>  ; yaSSL::Security::GetContext() const
0874a525 +0x0d5:  mov    %eax,(%esp)
0874a528 +0x0d8:  call   0874e520 <_ZNK5yaSSL7SSL_CTX18GetSessionCacheOffEv>  ; yaSSL::SSL_CTX::GetSessionCacheOff() const
0874a52d +0x0dd:  test   %al,%al
0874a52f +0x0df:  je     0874a6f8 <+0x2a8>
0874a535 +0x0e5:  mov    %esi,(%esp)
0874a538 +0x0e8:  call   0874e300 <_ZN5yaSSL3SSL6useLogEv>  ; yaSSL::SSL::useLog()
0874a53d +0x0ed:  lea    -0x667e17(%ebx),%edx
0874a543 +0x0f3:  mov    %edx,0x4(%esp)
0874a547 +0x0f7:  mov    %eax,(%esp)
0874a54a +0x0fa:  call   087a1460 <_ZN5yaSSL3Log5TraceEPKc>  ; yaSSL::Log::Trace(char const*)
0874a54f +0x0ff:  nop
0874a550 +0x100:  movzwl 0x4c(%edi),%eax
0874a554 +0x104:  mov    %esi,(%esp)
0874a557 +0x107:  mov    %eax,0x8(%esp)
0874a55b +0x10b:  lea    0x4e(%edi),%eax
0874a55e +0x10e:  mov    %eax,0x4(%esp)
0874a562 +0x112:  call   0874eeb0 <_ZN5yaSSL3SSL10matchSuiteEPKhj>  ; yaSSL::SSL::matchSuite(unsigned char const*, unsigned int)
0874a567 +0x117:  mov    %esi,(%esp)
0874a56a +0x11a:  call   0874e0b0 <_ZNK5yaSSL3SSL8GetErrorEv>  ; yaSSL::SSL::GetError() const
0874a56f +0x11f:  test   %eax,%eax
0874a571 +0x121:  jne    0874a4a1 <+0x51>
0874a577 +0x127:  mov    %esi,(%esp)
0874a57a +0x12a:  call   0874e070 <_ZNK5yaSSL3SSL11getSecurityEv>  ; yaSSL::SSL::getSecurity() const
0874a57f +0x12f:  mov    %eax,(%esp)
0874a582 +0x132:  call   0874ea50 <_ZNK5yaSSL8Security9get_parmsEv>  ; yaSSL::Security::get_parms() const
0874a587 +0x137:  movzbl 0x2d(%eax),%eax
0874a58b +0x13b:  mov    %esi,(%esp)
0874a58e +0x13e:  mov    %eax,0x4(%esp)
0874a592 +0x142:  call   08751220 <_ZN5yaSSL3SSL11set_pendingEh>  ; yaSSL::SSL::set_pending(unsigned char)
0874a597 +0x147:  cmpl   $0xdd,0xd0(%edi)
0874a5a1 +0x151:  je     0874a6e5 <+0x295>
0874a5a7 +0x157:  mov    %esi,(%esp)
0874a5aa +0x15a:  call   0874e2d0 <_ZN5yaSSL3SSL9useStatesEv>  ; yaSSL::SSL::useStates()
0874a5af +0x15f:  mov    %eax,(%esp)
0874a5b2 +0x162:  call   0874df30 <_ZN5yaSSL6States9useServerEv>  ; yaSSL::States::useServer()
0874a5b7 +0x167:  movl   $0x1,(%eax)
0874a5bd +0x16d:  jmp    0874a4a1 <+0x51>
0874a5c2 +0x172:  lea    0x0(%esi),%esi
0874a5c8 +0x178:  mov    %esi,(%esp)
0874a5cb +0x17b:  call   0874e9a0 <_ZNK5yaSSL3SSL5isTLSEv>  ; yaSSL::SSL::isTLS() const
0874a5d0 +0x180:  test   %al,%al
0874a5d2 +0x182:  je     0874a5da <+0x18a>
0874a5d4 +0x184:  cmpb   $0x0,0x9(%edi)
0874a5d8 +0x188:  je     0874a618 <+0x1c8>
0874a5da +0x18a:  mov    %esi,(%esp)
0874a5dd +0x18d:  call   0874e970 <_ZNK5yaSSL3SSL9isTLSv1_1Ev>  ; yaSSL::SSL::isTLSv1_1() const
0874a5e2 +0x192:  test   %al,%al
0874a5e4 +0x194:  je     0874a4f8 <+0xa8>
0874a5ea +0x19a:  cmpb   $0x1,0x9(%edi)
0874a5ee +0x19e:  jne    0874a4f8 <+0xa8>
0874a5f4 +0x1a4:  mov    %esi,(%esp)
0874a5f7 +0x1a7:  call   0874e2c0 <_ZN5yaSSL3SSL11useSecurityEv>  ; yaSSL::SSL::useSecurity()
0874a5fc +0x1ac:  mov    %eax,(%esp)
0874a5ff +0x1af:  call   0874ed00 <_ZN5yaSSL8Security14use_connectionEv>  ; yaSSL::Security::use_connection()
0874a604 +0x1b4:  mov    %eax,(%esp)
0874a607 +0x1b7:  call   08747260 <_ZN5yaSSL10Connection13TurnOffTLS1_1Ev>  ; yaSSL::Connection::TurnOffTLS1_1()
0874a60c +0x1bc:  jmp    0874a4f8 <+0xa8>
0874a611 +0x1c1:  lea    0x0(%esi,%eiz,1),%esi
0874a618 +0x1c8:  mov    %esi,(%esp)
0874a61b +0x1cb:  call   0874e2c0 <_ZN5yaSSL3SSL11useSecurityEv>  ; yaSSL::SSL::useSecurity()
0874a620 +0x1d0:  mov    %eax,(%esp)
0874a623 +0x1d3:  call   0874ed00 <_ZN5yaSSL8Security14use_connectionEv>  ; yaSSL::Security::use_connection()
0874a628 +0x1d8:  mov    %eax,(%esp)
0874a62b +0x1db:  call   08747240 <_ZN5yaSSL10Connection10TurnOffTLSEv>  ; yaSSL::Connection::TurnOffTLS()
0874a630 +0x1e0:  mov    %esi,(%esp)
0874a633 +0x1e3:  call   0874e070 <_ZNK5yaSSL3SSL11getSecurityEv>  ; yaSSL::SSL::getSecurity() const
0874a638 +0x1e8:  mov    %eax,(%esp)
0874a63b +0x1eb:  call   0874e960 <_ZNK5yaSSL8Security14get_connectionEv>  ; yaSSL::Security::get_connection() const
0874a640 +0x1f0:  movzwl 0x12e(%eax),%eax
0874a647 +0x1f7:  mov    %esi,(%esp)
0874a64a +0x1fa:  mov    %ax,-0x3e(%ebp)
0874a64e +0x1fe:  call   0874e070 <_ZNK5yaSSL3SSL11getSecurityEv>  ; yaSSL::SSL::getSecurity() const
0874a653 +0x203:  mov    %eax,(%esp)
0874a656 +0x206:  call   0874ea50 <_ZNK5yaSSL8Security9get_parmsEv>  ; yaSSL::Security::get_parms() const
0874a65b +0x20b:  movzbl 0x6df(%eax),%eax
0874a662 +0x212:  mov    %esi,(%esp)
0874a665 +0x215:  mov    %al,-0x3c(%ebp)
0874a668 +0x218:  call   0874e060 <_ZNK5yaSSL3SSL9getCryptoEv>  ; yaSSL::SSL::getCrypto() const
0874a66d +0x21d:  mov    %eax,(%esp)
0874a670 +0x220:  call   0874e790 <_ZNK5yaSSL6Crypto15get_certManagerEv>  ; yaSSL::Crypto::get_certManager() const
0874a675 +0x225:  mov    %eax,(%esp)
0874a678 +0x228:  call   087974d0 <_ZNK5yaSSL11CertManager11get_keyTypeEv>  ; yaSSL::CertManager::get_keyType() const
0874a67d +0x22d:  xor    %ecx,%ecx
0874a67f +0x22f:  mov    %esi,(%esp)
0874a682 +0x232:  cmp    $0x1,%eax
0874a685 +0x235:  setne  %cl
0874a688 +0x238:  xor    %edx,%edx
0874a68a +0x23a:  cmp    $0x1,%eax
0874a68d +0x23d:  sete   %dl
0874a690 +0x240:  mov    %edx,-0x44(%ebp)
0874a693 +0x243:  mov    %ecx,-0x48(%ebp)
0874a696 +0x246:  call   0874e2c0 <_ZN5yaSSL3SSL11useSecurityEv>  ; yaSSL::SSL::useSecurity()
0874a69b +0x24b:  mov    %eax,(%esp)
0874a69e +0x24e:  call   0874eea0 <_ZN5yaSSL8Security9use_parmsEv>  ; yaSSL::Security::use_parms()
0874a6a3 +0x253:  mov    -0x44(%ebp),%edx
0874a6a6 +0x256:  mov    -0x48(%ebp),%ecx
0874a6a9 +0x259:  mov    %edx,0x10(%esp)
0874a6ad +0x25d:  movzbl -0x3c(%ebp),%edx
0874a6b1 +0x261:  mov    %ecx,0xc(%esp)
0874a6b5 +0x265:  mov    %eax,(%esp)
0874a6b8 +0x268:  mov    %edx,0x8(%esp)
0874a6bc +0x26c:  movzwl -0x3e(%ebp),%edx
0874a6c0 +0x270:  mov    %dx,0x4(%esp)
0874a6c5 +0x275:  call   0874a230 <_ZN5yaSSL10Parameters9SetSuitesENS_15ProtocolVersionEbbb>  ; yaSSL::Parameters::SetSuites(yaSSL::ProtocolVersion, bool, bool, bool)
0874a6ca +0x27a:  jmp    0874a4f8 <+0xa8>
0874a6cf +0x27f:  nop
0874a6d0 +0x280:  cmpb   $0x0,0x9(%edi)
0874a6d4 +0x284:  je     0874a4f8 <+0xa8>
0874a6da +0x28a:  lea    0x0(%esi),%esi
0874a6e0 +0x290:  jmp    0874a491 <+0x41>
0874a6e5 +0x295:  mov    %esi,(%esp)
0874a6e8 +0x298:  call   0874dfc0 <_ZN5yaSSL3SSL14SetCompressionEv>  ; yaSSL::SSL::SetCompression()
0874a6ed +0x29d:  lea    0x0(%esi),%esi
0874a6f0 +0x2a0:  jmp    0874a5a7 <+0x157>
0874a6f5 +0x2a5:  lea    0x0(%esi),%esi
0874a6f8 +0x2a8:  call   087511a0 <_ZN5yaSSL11GetSessionsEv>  ; yaSSL::GetSessions()
0874a6fd +0x2ad:  lea    0x2b(%edi),%edx
0874a700 +0x2b0:  movl   $0x0,0x8(%esp)
0874a708 +0x2b8:  mov    %edx,0x4(%esp)
0874a70c +0x2bc:  mov    %eax,(%esp)
0874a70f +0x2bf:  call   08752e60 <_ZN5yaSSL8Sessions6lookupEPKhPNS_11SSL_SESSIONE>  ; yaSSL::Sessions::lookup(unsigned char const*, yaSSL::SSL_SESSION*)
0874a714 +0x2c4:  test   %eax,%eax
0874a716 +0x2c6:  mov    %eax,-0x3c(%ebp)
0874a719 +0x2c9:  je     0874a535 <+0xe5>
0874a71f +0x2cf:  mov    %eax,0x4(%esp)
0874a723 +0x2d3:  lea    -0x38(%ebp),%edi
0874a726 +0x2d6:  mov    %esi,(%esp)
0874a729 +0x2d9:  call   08752fe0 <_ZN5yaSSL3SSL11set_sessionEPNS_11SSL_SESSIONE>  ; yaSSL::SSL::set_session(yaSSL::SSL_SESSION*)
0874a72e +0x2de:  mov    %esi,(%esp)
0874a731 +0x2e1:  call   0874e2c0 <_ZN5yaSSL3SSL11useSecurityEv>  ; yaSSL::SSL::useSecurity()
0874a736 +0x2e6:  movl   $0x1,0x4(%esp)
0874a73e +0x2ee:  mov    %eax,(%esp)
0874a741 +0x2f1:  call   0874efc0 <_ZN5yaSSL8Security12set_resumingEb>  ; yaSSL::Security::set_resuming(bool)
0874a746 +0x2f6:  mov    -0x3c(%ebp),%edx
0874a749 +0x2f9:  mov    %edx,(%esp)
0874a74c +0x2fc:  call   0874e340 <_ZNK5yaSSL11SSL_SESSION8GetSuiteEv>  ; yaSSL::SSL_SESSION::GetSuite() const
0874a751 +0x301:  movl   $0x2,0x8(%esp)
0874a759 +0x309:  mov    %esi,(%esp)
0874a75c +0x30c:  mov    %eax,0x4(%esp)
0874a760 +0x310:  call   0874eeb0 <_ZN5yaSSL3SSL10matchSuiteEPKhj>  ; yaSSL::SSL::matchSuite(unsigned char const*, unsigned int)
0874a765 +0x315:  mov    %esi,(%esp)
0874a768 +0x318:  call   0874e070 <_ZNK5yaSSL3SSL11getSecurityEv>  ; yaSSL::SSL::getSecurity() const
0874a76d +0x31d:  mov    %eax,(%esp)
0874a770 +0x320:  call   0874ea50 <_ZNK5yaSSL8Security9get_parmsEv>  ; yaSSL::Security::get_parms() const
0874a775 +0x325:  movzbl 0x2d(%eax),%eax
0874a779 +0x329:  mov    %esi,(%esp)
0874a77c +0x32c:  mov    %eax,0x4(%esp)
0874a780 +0x330:  call   08751220 <_ZN5yaSSL3SSL11set_pendingEh>  ; yaSSL::SSL::set_pending(unsigned char)
0874a785 +0x335:  mov    -0x3c(%ebp),%eax
0874a788 +0x338:  mov    %eax,(%esp)
0874a78b +0x33b:  call   0874e330 <_ZNK5yaSSL11SSL_SESSION9GetSecretEv>  ; yaSSL::SSL_SESSION::GetSecret() const
0874a790 +0x340:  mov    %esi,(%esp)
0874a793 +0x343:  mov    %eax,0x4(%esp)
0874a797 +0x347:  call   0874f350 <_ZN5yaSSL3SSL16set_masterSecretEPKh>  ; yaSSL::SSL::set_masterSecret(unsigned char const*)
0874a79c +0x34c:  mov    %esi,(%esp)
0874a79f +0x34f:  call   0874e060 <_ZNK5yaSSL3SSL9getCryptoEv>  ; yaSSL::SSL::getCrypto() const
0874a7a4 +0x354:  mov    %eax,(%esp)
0874a7a7 +0x357:  call   0874e780 <_ZNK5yaSSL6Crypto10get_randomEv>  ; yaSSL::Crypto::get_random() const
0874a7ac +0x35c:  movl   $0x20,0x8(%esp)
0874a7b4 +0x364:  mov    %edi,0x4(%esp)
0874a7b8 +0x368:  mov    %eax,(%esp)
0874a7bb +0x36b:  call   08798fc0 <_ZNK5yaSSL10RandomPool4FillEPhj>  ; yaSSL::RandomPool::Fill(unsigned char*, unsigned int) const
0874a7c0 +0x370:  movl   $0x0,0x8(%esp)
0874a7c8 +0x378:  mov    %edi,0x4(%esp)
0874a7cc +0x37c:  mov    %esi,(%esp)
0874a7cf +0x37f:  call   0874f3d0 <_ZN5yaSSL3SSL10set_randomEPKhNS_13ConnectionEndE>  ; yaSSL::SSL::set_random(unsigned char const*, yaSSL::ConnectionEnd)
0874a7d4 +0x384:  mov    %esi,(%esp)
0874a7d7 +0x387:  call   0874e9a0 <_ZNK5yaSSL3SSL5isTLSEv>  ; yaSSL::SSL::isTLS() const
0874a7dc +0x38c:  test   %al,%al
0874a7de +0x38e:  je     0874a810 <+0x3c0>
0874a7e0 +0x390:  mov    %esi,(%esp)
0874a7e3 +0x393:  call   0874fbc0 <_ZN5yaSSL3SSL13deriveTLSKeysEv>  ; yaSSL::SSL::deriveTLSKeys()
0874a7e8 +0x398:  mov    %esi,(%esp)
0874a7eb +0x39b:  call   0874e2d0 <_ZN5yaSSL3SSL9useStatesEv>  ; yaSSL::SSL::useStates()
0874a7f0 +0x3a0:  mov    %eax,(%esp)
0874a7f3 +0x3a3:  call   0874df30 <_ZN5yaSSL6States9useServerEv>  ; yaSSL::States::useServer()
0874a7f8 +0x3a8:  movl   $0x2,(%eax)
0874a7fe +0x3ae:  mov    -0xc(%ebp),%ebx
0874a801 +0x3b1:  mov    -0x8(%ebp),%esi
0874a804 +0x3b4:  mov    -0x4(%ebp),%edi
0874a807 +0x3b7:  mov    %ebp,%esp
0874a809 +0x3b9:  pop    %ebp
0874a80a +0x3ba:  ret
0874a80b +0x3bb:  nop
0874a80c +0x3bc:  lea    0x0(%esi,%eiz,1),%esi
0874a810 +0x3c0:  mov    %esi,(%esp)
0874a813 +0x3c3:  call   0874fe30 <_ZN5yaSSL3SSL10deriveKeysEv>  ; yaSSL::SSL::deriveKeys()
0874a818 +0x3c8:  jmp    0874a7e8 <+0x398>
0874a81a +0x3ca:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::ClientHello::Process @ 0x874a450

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::ClientHello::Process(yaSSL::input_buffer&, yaSSL::SSL&) */

void __thiscall yaSSL::ClientHello::Process(ClientHello *this,input_buffer *param_1,SSL *param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  char cVar3;
  Security *pSVar4;
  int iVar5;
  SSL_CTX *this_00;
  char *pcVar6;
  States *pSVar7;
  undefined4 *puVar8;
  Connection *pCVar9;
  CertManager *this_01;
  Parameters *pPVar10;
  Sessions *this_02;
  SSL_SESSION *this_03;
  uchar *puVar11;
  Crypto *pCVar12;
  RandomPool *this_04;
  undefined4 in_stack_ffffff98;
  undefined2 uVar13;
  uchar local_3c [44];
  
  uVar13 = (undefined2)((uint)in_stack_ffffff98 >> 0x10);
  pSVar4 = (Security *)SSL::useSecurity(param_2);
  iVar5 = Security::use_connection(pSVar4);
  *(undefined2 *)(iVar5 + 0x130) = *(undefined2 *)(this + 8);
  if (this[8] == (ClientHello)0x3) {
    cVar3 = SSL::GetMultiProtocol(param_2);
    if (cVar3 == '\0') {
      cVar3 = SSL::isTLSv1_1(param_2);
      if ((((cVar3 != '\0') && ((byte)this[9] < 2)) ||
          ((cVar3 = SSL::isTLS(param_2), cVar3 != '\0' && (this[9] == (ClientHello)0x0)))) ||
         ((cVar3 = SSL::isTLS(param_2), cVar3 == '\0' && (this[9] != (ClientHello)0x0))))
      goto LAB_0874a491;
    }
    else {
      cVar3 = SSL::isTLS(param_2);
      if ((cVar3 == '\0') || (this[9] != (ClientHello)0x0)) {
        cVar3 = SSL::isTLSv1_1(param_2);
        if ((cVar3 != '\0') && (this[9] == (ClientHello)0x1)) {
          pSVar4 = (Security *)SSL::useSecurity(param_2);
          pCVar9 = (Connection *)Security::use_connection(pSVar4);
          Connection::TurnOffTLS1_1(pCVar9);
        }
      }
      else {
        pSVar4 = (Security *)SSL::useSecurity(param_2);
        pCVar9 = (Connection *)Security::use_connection(pSVar4);
        Connection::TurnOffTLS(pCVar9);
        pSVar4 = (Security *)SSL::getSecurity(param_2);
        iVar5 = Security::get_connection(pSVar4);
        uVar2 = *(undefined2 *)(iVar5 + 0x12e);
        pSVar4 = (Security *)SSL::getSecurity(param_2);
        iVar5 = Security::get_parms(pSVar4);
        uVar1 = *(undefined1 *)(iVar5 + 0x6df);
        pCVar12 = (Crypto *)SSL::getCrypto(param_2);
        this_01 = (CertManager *)Crypto::get_certManager(pCVar12);
        iVar5 = CertManager::get_keyType(this_01);
        pSVar4 = (Security *)SSL::useSecurity(param_2);
        pPVar10 = (Parameters *)Security::use_parms(pSVar4);
        Parameters::SetSuites(pPVar10,CONCAT22(uVar13,uVar2),uVar1,iVar5 != 1,iVar5 == 1);
      }
    }
    SSL::set_random(param_2,this + 10,1);
    if (this[0x2a] != (ClientHello)0x0) {
      pSVar4 = (Security *)SSL::getSecurity(param_2);
      this_00 = (SSL_CTX *)Security::GetContext(pSVar4);
      cVar3 = SSL_CTX::GetSessionCacheOff(this_00);
      if (cVar3 == '\0') {
        this_02 = (Sessions *)GetSessions();
        this_03 = (SSL_SESSION *)Sessions::lookup(this_02,(uchar *)(this + 0x2b),(SSL_SESSION *)0x0)
        ;
        if (this_03 != (SSL_SESSION *)0x0) {
          SSL::set_session(param_2,this_03);
          pSVar4 = (Security *)SSL::useSecurity(param_2);
          Security::set_resuming(pSVar4,true);
          puVar11 = (uchar *)SSL_SESSION::GetSuite(this_03);
          SSL::matchSuite(param_2,puVar11,2);
          pSVar4 = (Security *)SSL::getSecurity(param_2);
          iVar5 = Security::get_parms(pSVar4);
          SSL::set_pending(param_2,*(uchar *)(iVar5 + 0x2d));
          puVar11 = (uchar *)SSL_SESSION::GetSecret(this_03);
          SSL::set_masterSecret(param_2,puVar11);
          pCVar12 = (Crypto *)SSL::getCrypto(param_2);
          this_04 = (RandomPool *)Crypto::get_random(pCVar12);
          RandomPool::Fill(this_04,local_3c,0x20);
          SSL::set_random(param_2,local_3c,0);
          cVar3 = SSL::isTLS(param_2);
          if (cVar3 == '\0') {
            SSL::deriveKeys(param_2);
          }
          else {
            SSL::deriveTLSKeys(param_2);
          }
          pSVar7 = (States *)SSL::useStates(param_2);
          puVar8 = (undefined4 *)States::useServer(pSVar7);
          *puVar8 = 2;
          return;
        }
      }
      pcVar6 = (char *)SSL::useLog(param_2);
      Log::Trace(pcVar6);
    }
    SSL::matchSuite(param_2,(uchar *)(this + 0x4e),(uint)*(ushort *)(this + 0x4c));
    iVar5 = SSL::GetError(param_2);
    if (iVar5 == 0) {
      pSVar4 = (Security *)SSL::getSecurity(param_2);
      iVar5 = Security::get_parms(pSVar4);
      SSL::set_pending(param_2,*(uchar *)(iVar5 + 0x2d));
      if (*(int *)(this + 0xd0) == 0xdd) {
        SSL::SetCompression();
      }
      pSVar7 = (States *)SSL::useStates(param_2);
      puVar8 = (undefined4 *)States::useServer(pSVar7);
      *puVar8 = 1;
    }
  }
  else {
LAB_0874a491:
    SSL::SetError(param_2,0x75);
  }
  return;
}
```
