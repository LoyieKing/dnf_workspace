# Process

`_ZN5yaSSL17CertificateVerify7ProcessERNS_12input_bufferERNS_3SSLE`

`yaSSL::CertificateVerify::Process(yaSSL::input_buffer&, yaSSL::SSL&)`

| 类 | 地址 |
|---|---|
| `yaSSL::CertificateVerify` | `0x08748720` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08748720  _ZN5yaSSL17CertificateVerify7ProcessERNS_12input_bufferERNS_3SSLE
#           yaSSL::CertificateVerify::Process(yaSSL::input_buffer&, yaSSL::SSL&)
# range [0x08748720, 0x087488b9]
08748720 +0x000:  push   %ebp
08748721 +0x001:  mov    %esp,%ebp
08748723 +0x003:  push   %edi
08748724 +0x004:  push   %esi
08748725 +0x005:  push   %ebx
08748726 +0x006:  call   08722df8 <__i686.get_pc_thunk.bx>
0874872b +0x00b:  add    $0xc2446d,%ebx
08748731 +0x011:  sub    $0x6c,%esp
08748734 +0x014:  mov    0x10(%ebp),%eax
08748737 +0x017:  mov    0x8(%ebp),%edi
0874873a +0x01a:  mov    %eax,(%esp)
0874873d +0x01d:  call   0874e090 <_ZNK5yaSSL3SSL9getHashesEv>  ; yaSSL::SSL::getHashes() const
08748742 +0x022:  mov    %eax,(%esp)
08748745 +0x025:  call   0874e860 <_ZNK5yaSSL9sslHashes14get_certVerifyEv>  ; yaSSL::sslHashes::get_certVerify() const
0874874a +0x02a:  mov    %eax,-0x4c(%ebp)
0874874d +0x02d:  mov    0x10(%ebp),%eax
08748750 +0x030:  mov    %eax,(%esp)
08748753 +0x033:  call   0874e060 <_ZNK5yaSSL3SSL9getCryptoEv>  ; yaSSL::SSL::getCrypto() const
08748758 +0x038:  mov    %eax,(%esp)
0874875b +0x03b:  call   0874e790 <_ZNK5yaSSL6Crypto15get_certManagerEv>  ; yaSSL::Crypto::get_certManager() const
08748760 +0x040:  mov    %eax,%esi
08748762 +0x042:  mov    %eax,(%esp)
08748765 +0x045:  call   087974c0 <_ZNK5yaSSL11CertManager15get_peerKeyTypeEv>  ; yaSSL::CertManager::get_peerKeyType() const
0874876a +0x04a:  cmp    $0x1,%eax
0874876d +0x04d:  je     08748810 <+0xf0>
08748773 +0x053:  mov    %edi,(%esp)
08748776 +0x056:  call   08746aa0 <_ZNK5yaSSL13HandShakeBase10get_lengthEv>  ; yaSSL::HandShakeBase::get_length() const
0874877b +0x05b:  lea    -0x48(%ebp),%edx
0874877e +0x05e:  mov    %edx,-0x50(%ebp)
08748781 +0x061:  mov    %eax,0x8(%esp)
08748785 +0x065:  mov    0x2c(%edi),%eax
08748788 +0x068:  mov    %edx,(%esp)
0874878b +0x06b:  mov    %eax,0x4(%esp)
0874878f +0x06f:  call   08755120 <_ZN8TaoCrypt19DecodeDSA_SignatureEPhPKhj>  ; TaoCrypt::DecodeDSA_Signature(unsigned char*, unsigned char const*, unsigned int)
08748794 +0x074:  mov    %esi,(%esp)
08748797 +0x077:  call   087977c0 <_ZNK5yaSSL11CertManager17get_peerKeyLengthEv>  ; yaSSL::CertManager::get_peerKeyLength() const
0874879c +0x07c:  mov    %esi,(%esp)
0874879f +0x07f:  lea    -0x20(%ebp),%esi
087487a2 +0x082:  mov    %eax,-0x54(%ebp)
087487a5 +0x085:  call   08797820 <_ZNK5yaSSL11CertManager11get_peerKeyEv>  ; yaSSL::CertManager::get_peerKey() const
087487aa +0x08a:  mov    -0x54(%ebp),%ecx
087487ad +0x08d:  movl   $0x1,0xc(%esp)
087487b5 +0x095:  mov    %esi,(%esp)
087487b8 +0x098:  mov    %ecx,0x8(%esp)
087487bc +0x09c:  mov    %eax,0x4(%esp)
087487c0 +0x0a0:  call   0879b560 <_ZN5yaSSL3DSSC1EPKhjb>  ; yaSSL::DSS::DSS(unsigned char const*, unsigned int, bool)
087487c5 +0x0a5:  mov    %edi,(%esp)
087487c8 +0x0a8:  call   08746aa0 <_ZNK5yaSSL13HandShakeBase10get_lengthEv>  ; yaSSL::HandShakeBase::get_length() const
087487cd +0x0ad:  mov    -0x50(%ebp),%edx
087487d0 +0x0b0:  movl   $0x14,0x8(%esp)
087487d8 +0x0b8:  mov    %esi,(%esp)
087487db +0x0bb:  mov    %edx,0xc(%esp)
087487df +0x0bf:  mov    %eax,0x10(%esp)
087487e3 +0x0c3:  mov    -0x4c(%ebp),%eax
087487e6 +0x0c6:  add    $0x10,%eax
087487e9 +0x0c9:  mov    %eax,0x4(%esp)
087487ed +0x0cd:  call   0879a8d0 <_ZN5yaSSL3DSS6verifyEPKhjS2_j>  ; yaSSL::DSS::verify(unsigned char const*, unsigned int, unsigned char const*, unsigned int)
087487f2 +0x0d2:  test   %al,%al
087487f4 +0x0d4:  je     08748880 <+0x160>
087487fa +0x0da:  mov    %esi,(%esp)
087487fd +0x0dd:  call   0879ba40 <_ZN5yaSSL3DSSD1Ev>  ; yaSSL::DSS::~DSS()
08748802 +0x0e2:  add    $0x6c,%esp
08748805 +0x0e5:  pop    %ebx
08748806 +0x0e6:  pop    %esi
08748807 +0x0e7:  pop    %edi
08748808 +0x0e8:  pop    %ebp
08748809 +0x0e9:  ret
0874880a +0x0ea:  lea    0x0(%esi),%esi
08748810 +0x0f0:  mov    %esi,(%esp)
08748813 +0x0f3:  call   087977c0 <_ZNK5yaSSL11CertManager17get_peerKeyLengthEv>  ; yaSSL::CertManager::get_peerKeyLength() const
08748818 +0x0f8:  mov    %esi,(%esp)
0874881b +0x0fb:  lea    -0x48(%ebp),%esi
0874881e +0x0fe:  mov    %eax,-0x50(%ebp)
08748821 +0x101:  call   08797820 <_ZNK5yaSSL11CertManager11get_peerKeyEv>  ; yaSSL::CertManager::get_peerKey() const
08748826 +0x106:  mov    -0x50(%ebp),%edx
08748829 +0x109:  movl   $0x1,0xc(%esp)
08748831 +0x111:  mov    %esi,(%esp)
08748834 +0x114:  mov    %edx,0x8(%esp)
08748838 +0x118:  mov    %eax,0x4(%esp)
0874883c +0x11c:  call   0879b260 <_ZN5yaSSL3RSAC1EPKhjb>  ; yaSSL::RSA::RSA(unsigned char const*, unsigned int, bool)
08748841 +0x121:  mov    %edi,(%esp)
08748844 +0x124:  call   08746aa0 <_ZNK5yaSSL13HandShakeBase10get_lengthEv>  ; yaSSL::HandShakeBase::get_length() const
08748849 +0x129:  mov    %eax,0x10(%esp)
0874884d +0x12d:  mov    0x2c(%edi),%eax
08748850 +0x130:  movl   $0x24,0x8(%esp)
08748858 +0x138:  mov    %esi,(%esp)
0874885b +0x13b:  mov    %eax,0xc(%esp)
0874885f +0x13f:  mov    -0x4c(%ebp),%eax
08748862 +0x142:  mov    %eax,0x4(%esp)
08748866 +0x146:  call   0879a7d0 <_ZN5yaSSL3RSA6verifyEPKhjS2_j>  ; yaSSL::RSA::verify(unsigned char const*, unsigned int, unsigned char const*, unsigned int)
0874886b +0x14b:  test   %al,%al
0874886d +0x14d:  je     08748898 <+0x178>
0874886f +0x14f:  mov    %esi,(%esp)
08748872 +0x152:  call   0879b380 <_ZN5yaSSL3RSAD1Ev>  ; yaSSL::RSA::~RSA()
08748877 +0x157:  add    $0x6c,%esp
0874887a +0x15a:  pop    %ebx
0874887b +0x15b:  pop    %esi
0874887c +0x15c:  pop    %edi
0874887d +0x15d:  pop    %ebp
0874887e +0x15e:  ret
0874887f +0x15f:  nop
08748880 +0x160:  mov    0x10(%ebp),%eax
08748883 +0x163:  movl   $0x70,0x4(%esp)
0874888b +0x16b:  mov    %eax,(%esp)
0874888e +0x16e:  call   0874dfd0 <_ZN5yaSSL3SSL8SetErrorENS_10YasslErrorE>  ; yaSSL::SSL::SetError(yaSSL::YasslError)
08748893 +0x173:  jmp    087487fa <+0xda>
08748898 +0x178:  mov    0x10(%ebp),%eax
0874889b +0x17b:  movl   $0x70,0x4(%esp)
087488a3 +0x183:  mov    %eax,(%esp)
087488a6 +0x186:  call   0874dfd0 <_ZN5yaSSL3SSL8SetErrorENS_10YasslErrorE>  ; yaSSL::SSL::SetError(yaSSL::YasslError)
087488ab +0x18b:  mov    %esi,(%esp)
087488ae +0x18e:  call   0879b380 <_ZN5yaSSL3RSAD1Ev>  ; yaSSL::RSA::~RSA()
087488b3 +0x193:  jmp    08748877 <+0x157>
087488b5 +0x195:  lea    0x0(%esi,%eiz,1),%esi
087488b9 +0x199:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::CertificateVerify::Process @ 0x8748720

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::CertificateVerify::Process(yaSSL::input_buffer&, yaSSL::SSL&) */

void __thiscall
yaSSL::CertificateVerify::Process(CertificateVerify *this,input_buffer *param_1,SSL *param_2)

{
  char cVar1;
  sslHashes *this_00;
  uint uVar2;
  Crypto *this_01;
  CertManager *this_02;
  int iVar3;
  uint uVar4;
  uchar *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  RSA *pRVar8;
  RSA local_4c [40];
  DSS local_24 [16];
  undefined4 uStack_14;
  
  uStack_14 = 0x874872b;
  this_00 = (sslHashes *)SSL::getHashes(param_2);
  uVar2 = sslHashes::get_certVerify(this_00);
  this_01 = (Crypto *)SSL::getCrypto(param_2);
  this_02 = (CertManager *)Crypto::get_certManager(this_01);
  iVar3 = CertManager::get_peerKeyType(this_02);
  if (iVar3 != 1) {
    uVar4 = HandShakeBase::get_length((HandShakeBase *)this);
    pRVar8 = local_4c;
    TaoCrypt::DecodeDSA_Signature((uchar *)pRVar8,*(uchar **)(this + 0x2c),uVar4);
    uVar4 = CertManager::get_peerKeyLength(this_02);
    puVar5 = (uchar *)CertManager::get_peerKey(this_02);
    DSS::DSS(local_24,puVar5,uVar4,true);
    uVar6 = HandShakeBase::get_length((HandShakeBase *)this);
    uVar7 = 0x14;
    cVar1 = DSS::verify((uchar *)local_24,uVar2 + 0x10,(uchar *)0x14,(uint)pRVar8);
    if (cVar1 == '\0') {
      SSL::SetError(param_2,0x70,uVar7,pRVar8,uVar6);
    }
    DSS::~DSS(local_24);
    return;
  }
  uVar4 = CertManager::get_peerKeyLength(this_02);
  puVar5 = (uchar *)CertManager::get_peerKey(this_02);
  RSA::RSA(local_4c,puVar5,uVar4,true);
  uVar6 = HandShakeBase::get_length((HandShakeBase *)this);
  uVar4 = *(uint *)(this + 0x2c);
  uVar7 = 0x24;
  cVar1 = RSA::verify((uchar *)local_4c,uVar2,(uchar *)0x24,uVar4);
  if (cVar1 == '\0') {
    SSL::SetError(param_2,0x70,uVar7,uVar4,uVar6);
    RSA::~RSA(local_4c);
  }
  else {
    RSA::~RSA(local_4c);
  }
  return;
}
```
