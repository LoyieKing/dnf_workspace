# SSL

`_ZN5yaSSL3SSLC1EPNS_7SSL_CTXE`

`yaSSL::SSL::SSL(yaSSL::SSL_CTX*)`

| 类 | 地址 |
|---|---|
| `yaSSL::SSL` | `0x08750d50` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08750d50  _ZN5yaSSL3SSLC1EPNS_7SSL_CTXE
#           yaSSL::SSL::SSL(yaSSL::SSL_CTX*)
# range [0x08750d50, 0x087510b9]
08750d50 +0x000:  push   %ebp
08750d51 +0x001:  mov    %esp,%ebp
08750d53 +0x003:  push   %edi
08750d54 +0x004:  push   %esi
08750d55 +0x005:  push   %ebx
08750d56 +0x006:  call   08722df8 <__i686.get_pc_thunk.bx>
08750d5b +0x00b:  add    $0xc1be3d,%ebx
08750d61 +0x011:  sub    $0x4c,%esp
08750d64 +0x014:  mov    0x8(%ebp),%esi
08750d67 +0x017:  mov    0xc(%ebp),%edi
08750d6a +0x01a:  mov    %esi,(%esp)
08750d6d +0x01d:  call   0874f450 <_ZN5yaSSL6CryptoC1Ev>  ; yaSSL::Crypto::Crypto()
08750d72 +0x022:  mov    %edi,(%esp)
08750d75 +0x025:  call   0874e4c0 <_ZNK5yaSSL7SSL_CTX11GetDH_ParmsEv>  ; yaSSL::SSL_CTX::GetDH_Parms() const
08750d7a +0x02a:  movzbl 0x8(%eax),%edx
08750d7e +0x02e:  mov    %edi,(%esp)
08750d81 +0x031:  mov    %edx,-0x34(%ebp)
08750d84 +0x034:  call   0874e4b0 <_ZNK5yaSSL7SSL_CTX10GetCiphersEv>  ; yaSSL::SSL_CTX::GetCiphers() const
08750d89 +0x039:  mov    %edi,(%esp)
08750d8c +0x03c:  mov    %eax,-0x2c(%ebp)
08750d8f +0x03f:  call   0874e4a0 <_ZNK5yaSSL7SSL_CTX9getMethodEv>  ; yaSSL::SSL_CTX::getMethod() const
08750d94 +0x044:  mov    %eax,(%esp)
08750d97 +0x047:  call   0874e3e0 <_ZNK5yaSSL10SSL_METHOD7getSideEv>  ; yaSSL::SSL_METHOD::getSide() const
08750d9c +0x04c:  mov    %esi,(%esp)
08750d9f +0x04f:  mov    %eax,-0x24(%ebp)
08750da2 +0x052:  call   0874e7d0 <_ZN5yaSSL6Crypto10use_randomEv>  ; yaSSL::Crypto::use_random()
08750da7 +0x057:  mov    %edi,(%esp)
08750daa +0x05a:  mov    %eax,-0x20(%ebp)
08750dad +0x05d:  call   0874e4a0 <_ZNK5yaSSL7SSL_CTX9getMethodEv>  ; yaSSL::SSL_CTX::getMethod() const
08750db2 +0x062:  lea    -0x1a(%ebp),%ecx
08750db5 +0x065:  mov    %ecx,(%esp)
08750db8 +0x068:  mov    %eax,0x4(%esp)
08750dbc +0x06c:  call   0874e3c0 <_ZNK5yaSSL10SSL_METHOD10getVersionEv>  ; yaSSL::SSL_METHOD::getVersion() const
08750dc1 +0x071:  lea    0x68(%esi),%eax
08750dc4 +0x074:  mov    -0x34(%ebp),%edx
08750dc7 +0x077:  mov    %eax,-0x28(%ebp)
08750dca +0x07a:  mov    -0x2c(%ebp),%eax
08750dcd +0x07d:  sub    $0x4,%esp
08750dd0 +0x080:  mov    %eax,0x10(%esp)
08750dd4 +0x084:  mov    -0x24(%ebp),%eax
08750dd7 +0x087:  mov    %edx,0x18(%esp)
08750ddb +0x08b:  mov    %edi,0x14(%esp)
08750ddf +0x08f:  mov    %eax,0xc(%esp)
08750de3 +0x093:  mov    -0x20(%ebp),%eax
08750de6 +0x096:  mov    %eax,0x8(%esp)
08750dea +0x09a:  movzwl -0x1a(%ebp),%eax
08750dee +0x09e:  mov    %ax,0x4(%esp)
08750df3 +0x0a3:  mov    -0x28(%ebp),%eax
08750df6 +0x0a6:  mov    %eax,(%esp)
08750df9 +0x0a9:  call   0874f830 <_ZN5yaSSL8SecurityC1ENS_15ProtocolVersionERNS_10RandomPoolENS_13ConnectionEndERKNS_7CiphersEPNS_7SSL_CTXEb>  ; yaSSL::Security::Security(yaSSL::ProtocolVersion, yaSSL::RandomPool&, yaSSL::ConnectionEnd, yaSSL::Ciphers const&, yaSSL::SSL_CTX*, bool)
08750dfe +0x0ae:  lea    0x8ec(%esi),%eax
08750e04 +0x0b4:  mov    %eax,(%esp)
08750e07 +0x0b7:  call   0874de40 <_ZN5yaSSL6StatesC1Ev>  ; yaSSL::States::States()
08750e0c +0x0bc:  lea    0x958(%esi),%eax
08750e12 +0x0c2:  mov    %eax,(%esp)
08750e15 +0x0c5:  call   0879a110 <_ZN5yaSSL3MD5C1Ev>  ; yaSSL::MD5::MD5()
08750e1a +0x0ca:  lea    0x960(%esi),%eax
08750e20 +0x0d0:  mov    %eax,(%esp)
08750e23 +0x0d3:  call   0879a190 <_ZN5yaSSL3SHAC1Ev>  ; yaSSL::SHA::SHA()
08750e28 +0x0d8:  lea    0x968(%esi),%eax
08750e2e +0x0de:  mov    %eax,(%esp)
08750e31 +0x0e1:  call   087471a0 <_ZN5yaSSL8FinishedC1Ev>  ; yaSSL::Finished::Finished()
08750e36 +0x0e6:  lea    0x9b8(%esi),%eax
08750e3c +0x0ec:  mov    %eax,(%esp)
08750e3f +0x0ef:  movl   $0xffffffff,0x4(%esp)
08750e47 +0x0f7:  call   087a14a0 <_ZN5yaSSL6SocketC1Ei>  ; yaSSL::Socket::Socket(int)
08750e4c +0x0fc:  lea    0x9c0(%esi),%eax
08750e52 +0x102:  mov    %eax,(%esp)
08750e55 +0x105:  call   0874e8b0 <_ZN5yaSSL7BuffersC1Ev>  ; yaSSL::Buffers::Buffers()
08750e5a +0x10a:  lea    -0x6679cc(%ebx),%eax
08750e60 +0x110:  mov    %eax,0x4(%esp)
08750e64 +0x114:  lea    0x9dc(%esi),%eax
08750e6a +0x11a:  mov    %eax,(%esp)
08750e6d +0x11d:  call   087a1440 <_ZN5yaSSL3LogC1EPKc>  ; yaSSL::Log::Log(char const*)
08750e72 +0x122:  movb   $0x0,0x9dd(%esi)
08750e79 +0x129:  movb   $0x0,0x9de(%esi)
08750e80 +0x130:  mov    %esi,(%esp)
08750e83 +0x133:  call   0874e780 <_ZNK5yaSSL6Crypto10get_randomEv>  ; yaSSL::Crypto::get_random() const
08750e88 +0x138:  mov    %eax,(%esp)
08750e8b +0x13b:  call   087985b0 <_ZNK5yaSSL10RandomPool8GetErrorEv>  ; yaSSL::RandomPool::GetError() const
08750e90 +0x140:  test   %eax,%eax
08750e92 +0x142:  jne    08750fa5 <+0x255>
08750e98 +0x148:  mov    %esi,(%esp)
08750e9b +0x14b:  call   0874e7e0 <_ZN5yaSSL6Crypto15use_certManagerEv>  ; yaSSL::Crypto::use_certManager()
08750ea0 +0x150:  mov    %edi,(%esp)
08750ea3 +0x153:  mov    %eax,-0x20(%ebp)
08750ea6 +0x156:  call   0874e480 <_ZNK5yaSSL7SSL_CTX7getCertEv>  ; yaSSL::SSL_CTX::getCert() const
08750eab +0x15b:  mov    %eax,0x4(%esp)
08750eaf +0x15f:  mov    -0x20(%ebp),%eax
08750eb2 +0x162:  mov    %eax,(%esp)
08750eb5 +0x165:  call   087976b0 <_ZN5yaSSL11CertManager12CopySelfCertEPKNS_4x509E>  ; yaSSL::CertManager::CopySelfCert(yaSSL::x509 const*)
08750eba +0x16a:  mov    -0x28(%ebp),%eax
08750ebd +0x16d:  mov    %eax,(%esp)
08750ec0 +0x170:  call   0874eea0 <_ZN5yaSSL8Security9use_parmsEv>  ; yaSSL::Security::use_parms()
08750ec5 +0x175:  mov    (%eax),%eax
08750ec7 +0x177:  mov    %edi,(%esp)
08750eca +0x17a:  test   %eax,%eax
08750ecc +0x17c:  sete   -0x24(%ebp)
08750ed0 +0x180:  call   0874e490 <_ZNK5yaSSL7SSL_CTX6getKeyEv>  ; yaSSL::SSL_CTX::getKey() const
08750ed5 +0x185:  test   %eax,%eax
08750ed7 +0x187:  je     08750fc0 <+0x270>
08750edd +0x18d:  mov    %edi,(%esp)
08750ee0 +0x190:  call   0874e490 <_ZNK5yaSSL7SSL_CTX6getKeyEv>  ; yaSSL::SSL_CTX::getKey() const
08750ee5 +0x195:  mov    %eax,0x4(%esp)
08750ee9 +0x199:  mov    -0x20(%ebp),%eax
08750eec +0x19c:  mov    %eax,(%esp)
08750eef +0x19f:  call   08797cc0 <_ZN5yaSSL11CertManager13SetPrivateKeyERKNS_4x509E>  ; yaSSL::CertManager::SetPrivateKey(yaSSL::x509 const&)
08750ef4 +0x1a4:  test   %eax,%eax
08750ef6 +0x1a6:  jne    08750fa5 <+0x255>
08750efc +0x1ac:  cmpb   $0x0,-0x24(%ebp)
08750f00 +0x1b0:  jne    08751030 <+0x2e0>
08750f06 +0x1b6:  mov    %edi,(%esp)
08750f09 +0x1b9:  call   0874e4a0 <_ZNK5yaSSL7SSL_CTX9getMethodEv>  ; yaSSL::SSL_CTX::getMethod() const
08750f0e +0x1be:  mov    %eax,(%esp)
08750f11 +0x1c1:  call   0874e420 <_ZNK5yaSSL10SSL_METHOD10verifyPeerEv>  ; yaSSL::SSL_METHOD::verifyPeer() const
08750f16 +0x1c6:  test   %al,%al
08750f18 +0x1c8:  jne    08751020 <+0x2d0>
08750f1e +0x1ce:  mov    %edi,(%esp)
08750f21 +0x1d1:  call   0874e4a0 <_ZNK5yaSSL7SSL_CTX9getMethodEv>  ; yaSSL::SSL_CTX::getMethod() const
08750f26 +0x1d6:  mov    %eax,(%esp)
08750f29 +0x1d9:  call   0874e430 <_ZNK5yaSSL10SSL_METHOD10verifyNoneEv>  ; yaSSL::SSL_METHOD::verifyNone() const
08750f2e +0x1de:  test   %al,%al
08750f30 +0x1e0:  jne    08751010 <+0x2c0>
08750f36 +0x1e6:  mov    %edi,(%esp)
08750f39 +0x1e9:  call   0874e4a0 <_ZNK5yaSSL7SSL_CTX9getMethodEv>  ; yaSSL::SSL_CTX::getMethod() const
08750f3e +0x1ee:  mov    %eax,(%esp)
08750f41 +0x1f1:  call   0874e440 <_ZNK5yaSSL10SSL_METHOD10failNoCertEv>  ; yaSSL::SSL_METHOD::failNoCert() const
08750f46 +0x1f6:  test   %al,%al
08750f48 +0x1f8:  jne    08751000 <+0x2b0>
08750f4e +0x1fe:  mov    %edi,(%esp)
08750f51 +0x201:  call   0874e470 <_ZNK5yaSSL7SSL_CTX17getVerifyCallbackEv>  ; yaSSL::SSL_CTX::getVerifyCallback() const
08750f56 +0x206:  mov    %eax,0x4(%esp)
08750f5a +0x20a:  mov    -0x20(%ebp),%eax
08750f5d +0x20d:  mov    %eax,(%esp)
08750f60 +0x210:  call   08797480 <_ZN5yaSSL11CertManager17setVerifyCallbackEPFiiPNS_14X509_STORE_CTXEE>  ; yaSSL::CertManager::setVerifyCallback(int (*)(int, yaSSL::X509_STORE_CTX*))
08750f65 +0x215:  cmpb   $0x0,-0x24(%ebp)
08750f69 +0x219:  jne    08750fe0 <+0x290>
08750f6b +0x21b:  mov    %edi,(%esp)
08750f6e +0x21e:  call   0874e460 <_ZNK5yaSSL7SSL_CTX10GetCA_ListEv>  ; yaSSL::SSL_CTX::GetCA_List() const
08750f73 +0x223:  mov    (%eax),%edi
08750f75 +0x225:  test   %edi,%edi
08750f77 +0x227:  je     08750fb1 <+0x261>
08750f79 +0x229:  mov    %esi,-0x28(%ebp)
08750f7c +0x22c:  mov    -0x20(%ebp),%esi
08750f7f +0x22f:  jmp    08750f8f <+0x23f>
08750f81 +0x231:  lea    0x0(%esi,%eiz,1),%esi
08750f88 +0x238:  mov    0x4(%edi),%edi
08750f8b +0x23b:  test   %edi,%edi
08750f8d +0x23d:  je     08750fb1 <+0x261>
08750f8f +0x23f:  mov    0x8(%edi),%eax
08750f92 +0x242:  mov    %esi,(%esp)
08750f95 +0x245:  mov    %eax,0x4(%esp)
08750f99 +0x249:  call   08797b00 <_ZN5yaSSL11CertManager10CopyCaCertEPKNS_4x509E>  ; yaSSL::CertManager::CopyCaCert(yaSSL::x509 const*)
08750f9e +0x24e:  test   %eax,%eax
08750fa0 +0x250:  je     08750f88 <+0x238>
08750fa2 +0x252:  mov    -0x28(%ebp),%esi
08750fa5 +0x255:  mov    %eax,0x4(%esp)
08750fa9 +0x259:  mov    %esi,(%esp)
08750fac +0x25c:  call   0874dfd0 <_ZN5yaSSL3SSL8SetErrorENS_10YasslErrorE>  ; yaSSL::SSL::SetError(yaSSL::YasslError)
08750fb1 +0x261:  lea    -0xc(%ebp),%esp
08750fb4 +0x264:  pop    %ebx
08750fb5 +0x265:  pop    %esi
08750fb6 +0x266:  pop    %edi
08750fb7 +0x267:  pop    %ebp
08750fb8 +0x268:  ret
08750fb9 +0x269:  lea    0x0(%esi,%eiz,1),%esi
08750fc0 +0x270:  cmpb   $0x0,-0x24(%ebp)
08750fc4 +0x274:  je     08750f06 <+0x1b6>
08750fca +0x27a:  movl   $0x6f,0x4(%esp)
08750fd2 +0x282:  mov    %esi,(%esp)
08750fd5 +0x285:  call   0874dfd0 <_ZN5yaSSL3SSL8SetErrorENS_10YasslErrorE>  ; yaSSL::SSL::SetError(yaSSL::YasslError)
08750fda +0x28a:  jmp    08750fb1 <+0x261>
08750fdc +0x28c:  lea    0x0(%esi,%eiz,1),%esi
08750fe0 +0x290:  mov    %edi,(%esp)
08750fe3 +0x293:  call   0874e4c0 <_ZNK5yaSSL7SSL_CTX11GetDH_ParmsEv>  ; yaSSL::SSL_CTX::GetDH_Parms() const
08750fe8 +0x298:  mov    %esi,(%esp)
08750feb +0x29b:  mov    %eax,0x4(%esp)
08750fef +0x29f:  call   08750ce0 <_ZN5yaSSL6Crypto5SetDHERKNS_8DH_ParmsE>  ; yaSSL::Crypto::SetDH(yaSSL::DH_Parms const&)
08750ff4 +0x2a4:  jmp    08750f6b <+0x21b>
08750ff9 +0x2a9:  lea    0x0(%esi,%eiz,1),%esi
08751000 +0x2b0:  mov    -0x20(%ebp),%eax
08751003 +0x2b3:  mov    %eax,(%esp)
08751006 +0x2b6:  call   08797460 <_ZN5yaSSL11CertManager13setFailNoCertEv>  ; yaSSL::CertManager::setFailNoCert()
0875100b +0x2bb:  jmp    08750f4e <+0x1fe>
08751010 +0x2c0:  mov    -0x20(%ebp),%eax
08751013 +0x2c3:  mov    %eax,(%esp)
08751016 +0x2c6:  call   08797450 <_ZN5yaSSL11CertManager13setVerifyNoneEv>  ; yaSSL::CertManager::setVerifyNone()
0875101b +0x2cb:  jmp    08750f36 <+0x1e6>
08751020 +0x2d0:  mov    -0x20(%ebp),%eax
08751023 +0x2d3:  mov    %eax,(%esp)
08751026 +0x2d6:  call   08797440 <_ZN5yaSSL11CertManager13setVerifyPeerEv>  ; yaSSL::CertManager::setVerifyPeer()
0875102b +0x2db:  jmp    08750f1e <+0x1ce>
08751030 +0x2e0:  mov    -0x28(%ebp),%eax
08751033 +0x2e3:  mov    %eax,(%esp)
08751036 +0x2e6:  call   0874e960 <_ZNK5yaSSL8Security14get_connectionEv>  ; yaSSL::Security::get_connection() const
0875103b +0x2eb:  movzwl 0x12e(%eax),%eax
08751042 +0x2f2:  mov    %ax,-0x30(%ebp)
08751046 +0x2f6:  mov    -0x28(%ebp),%eax
08751049 +0x2f9:  mov    %eax,(%esp)
0875104c +0x2fc:  call   0874eea0 <_ZN5yaSSL8Security9use_parmsEv>  ; yaSSL::Security::use_parms()
08751051 +0x301:  movzbl 0x6df(%eax),%eax
08751058 +0x308:  mov    %al,-0x2d(%ebp)
0875105b +0x30b:  mov    -0x20(%ebp),%eax
0875105e +0x30e:  mov    %eax,(%esp)
08751061 +0x311:  call   087974d0 <_ZNK5yaSSL11CertManager11get_keyTypeEv>  ; yaSSL::CertManager::get_keyType() const
08751066 +0x316:  xor    %edx,%edx
08751068 +0x318:  cmp    $0x1,%eax
0875106b +0x31b:  setne  %dl
0875106e +0x31e:  xor    %ecx,%ecx
08751070 +0x320:  cmp    $0x1,%eax
08751073 +0x323:  mov    -0x28(%ebp),%eax
08751076 +0x326:  sete   %cl
08751079 +0x329:  mov    %edx,-0x2c(%ebp)
0875107c +0x32c:  mov    %ecx,-0x34(%ebp)
0875107f +0x32f:  mov    %eax,(%esp)
08751082 +0x332:  call   0874eea0 <_ZN5yaSSL8Security9use_parmsEv>  ; yaSSL::Security::use_parms()
08751087 +0x337:  mov    -0x34(%ebp),%ecx
0875108a +0x33a:  mov    %ecx,0x10(%esp)
0875108e +0x33e:  mov    %eax,%edx
08751090 +0x340:  mov    -0x2c(%ebp),%eax
08751093 +0x343:  mov    %edx,(%esp)
08751096 +0x346:  mov    %eax,0xc(%esp)
0875109a +0x34a:  movzbl -0x2d(%ebp),%eax
0875109e +0x34e:  mov    %eax,0x8(%esp)
087510a2 +0x352:  movzwl -0x30(%ebp),%eax
087510a6 +0x356:  mov    %ax,0x4(%esp)
087510ab +0x35b:  call   0874a230 <_ZN5yaSSL10Parameters9SetSuitesENS_15ProtocolVersionEbbb>  ; yaSSL::Parameters::SetSuites(yaSSL::ProtocolVersion, bool, bool, bool)
087510b0 +0x360:  jmp    08750f06 <+0x1b6>
087510b5 +0x365:  lea    0x0(%esi,%eiz,1),%esi
087510b9 +0x369:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::SSL::SSL @ 0x8750d50

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL::SSL(yaSSL::SSL_CTX*) */

void __thiscall yaSSL::SSL::SSL(SSL *this,SSL_CTX *param_1)

{
  Security *this_00;
  undefined1 uVar1;
  undefined2 uVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  SSL_METHOD *pSVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined2 extraout_var;
  RandomPool *this_01;
  CertManager *this_02;
  x509 *pxVar10;
  int *piVar11;
  _func_int_int_X509_STORE_CTX_ptr *p_Var12;
  DH_Parms *pDVar13;
  Parameters *pPVar14;
  bool bVar15;
  undefined2 uVar16;
  undefined2 local_1e;
  
  Crypto::Crypto((Crypto *)this);
  iVar5 = SSL_CTX::GetDH_Parms(param_1);
  uVar1 = *(undefined1 *)(iVar5 + 8);
  uVar6 = SSL_CTX::GetCiphers(param_1);
  pSVar7 = (SSL_METHOD *)SSL_CTX::getMethod(param_1);
  uVar8 = SSL_METHOD::getSide(pSVar7);
  uVar9 = Crypto::use_random((Crypto *)this);
  SSL_CTX::getMethod(param_1);
  uVar16 = extraout_var;
  SSL_METHOD::getVersion();
  this_00 = (Security *)(this + 0x68);
  Security::Security(this_00,CONCAT22(uVar16,local_1e),uVar9,uVar8,uVar6,param_1,uVar1);
  States::States((States *)(this + 0x8ec));
  MD5::MD5((MD5 *)(this + 0x958));
  SHA::SHA((SHA *)(this + 0x960));
  Finished::Finished((Finished *)(this + 0x968));
  Socket::Socket((Socket *)(this + 0x9b8),-1);
  Buffers::Buffers((Buffers *)(this + 0x9c0));
  Log::Log((Log *)(this + 0x9dc),"yaSSL.log");
  this[0x9dd] = (SSL)0x0;
  this[0x9de] = (SSL)0x0;
  this_01 = (RandomPool *)Crypto::get_random((Crypto *)this);
  iVar5 = RandomPool::GetError(this_01);
  if (iVar5 == 0) {
    this_02 = (CertManager *)Crypto::use_certManager((Crypto *)this);
    pxVar10 = (x509 *)SSL_CTX::getCert(param_1);
    CertManager::CopySelfCert(this_02,pxVar10);
    piVar11 = (int *)Security::use_parms(this_00);
    bVar15 = *piVar11 == 0;
    iVar5 = SSL_CTX::getKey(param_1);
    if (iVar5 == 0) {
      if (bVar15) {
        SetError(this,0x6f);
        return;
      }
    }
    else {
      pxVar10 = (x509 *)SSL_CTX::getKey(param_1);
      iVar5 = CertManager::SetPrivateKey(this_02,pxVar10);
      uVar16 = (undefined2)((uint)pxVar10 >> 0x10);
      if (iVar5 != 0) goto LAB_08750fa5;
      if (bVar15) {
        iVar5 = Security::get_connection(this_00);
        uVar2 = *(undefined2 *)(iVar5 + 0x12e);
        iVar5 = Security::use_parms(this_00);
        uVar1 = *(undefined1 *)(iVar5 + 0x6df);
        iVar5 = CertManager::get_keyType(this_02);
        pPVar14 = (Parameters *)Security::use_parms(this_00);
        Parameters::SetSuites(pPVar14,CONCAT22(uVar16,uVar2),uVar1,iVar5 != 1,iVar5 == 1);
      }
    }
    pSVar7 = (SSL_METHOD *)SSL_CTX::getMethod(param_1);
    cVar4 = SSL_METHOD::verifyPeer(pSVar7);
    if (cVar4 != '\0') {
      CertManager::setVerifyPeer(this_02);
    }
    pSVar7 = (SSL_METHOD *)SSL_CTX::getMethod(param_1);
    cVar4 = SSL_METHOD::verifyNone(pSVar7);
    if (cVar4 != '\0') {
      CertManager::setVerifyNone(this_02);
    }
    pSVar7 = (SSL_METHOD *)SSL_CTX::getMethod(param_1);
    cVar4 = SSL_METHOD::failNoCert(pSVar7);
    if (cVar4 != '\0') {
      CertManager::setFailNoCert(this_02);
    }
    p_Var12 = (_func_int_int_X509_STORE_CTX_ptr *)SSL_CTX::getVerifyCallback(param_1);
    CertManager::setVerifyCallback(this_02,p_Var12);
    if (bVar15) {
      pDVar13 = (DH_Parms *)SSL_CTX::GetDH_Parms(param_1);
      Crypto::SetDH((Crypto *)this,pDVar13);
    }
    piVar11 = (int *)SSL_CTX::GetCA_List(param_1);
    for (iVar3 = *piVar11; iVar3 != 0; iVar3 = *(int *)(iVar3 + 4)) {
      iVar5 = CertManager::CopyCaCert(this_02,*(x509 **)(iVar3 + 8));
      if (iVar5 != 0) goto LAB_08750fa5;
    }
  }
  else {
LAB_08750fa5:
    SetError(this,iVar5);
  }
  return;
}
```
