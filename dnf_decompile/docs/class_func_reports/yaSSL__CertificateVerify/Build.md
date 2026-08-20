# Build

`_ZN5yaSSL17CertificateVerify5BuildERNS_3SSLE`

`yaSSL::CertificateVerify::Build(yaSSL::SSL&)`

| 类 | 地址 |
|---|---|
| `yaSSL::CertificateVerify` | `0x0874bbf0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874bbf0  _ZN5yaSSL17CertificateVerify5BuildERNS_3SSLE
#           yaSSL::CertificateVerify::Build(yaSSL::SSL&)
# range [0x0874bbf0, 0x0874beab]
0874bbf0 +0x000:  push   %ebp
0874bbf1 +0x001:  mov    %esp,%ebp
0874bbf3 +0x003:  push   %edi
0874bbf4 +0x004:  push   %esi
0874bbf5 +0x005:  push   %ebx
0874bbf6 +0x006:  call   08722df8 <__i686.get_pc_thunk.bx>
0874bbfb +0x00b:  add    $0xc20f9d,%ebx
0874bc01 +0x011:  sub    $0x8c,%esp
0874bc07 +0x017:  mov    0x8(%ebp),%edi
0874bc0a +0x01a:  mov    0xc(%ebp),%eax
0874bc0d +0x01d:  lea    0x8(%edi),%esi
0874bc10 +0x020:  mov    %eax,(%esp)
0874bc13 +0x023:  mov    %esi,0x4(%esp)
0874bc17 +0x027:  call   0879cea0 <_ZN5yaSSL16build_certHashesERNS_3SSLERNS_6HashesE>  ; yaSSL::build_certHashes(yaSSL::SSL&, yaSSL::Hashes&)
0874bc1c +0x02c:  mov    0xc(%ebp),%edx
0874bc1f +0x02f:  mov    %edx,(%esp)
0874bc22 +0x032:  call   0874e060 <_ZNK5yaSSL3SSL9getCryptoEv>  ; yaSSL::SSL::getCrypto() const
0874bc27 +0x037:  mov    %eax,(%esp)
0874bc2a +0x03a:  call   0874e790 <_ZNK5yaSSL6Crypto15get_certManagerEv>  ; yaSSL::Crypto::get_certManager() const
0874bc2f +0x03f:  mov    %eax,(%esp)
0874bc32 +0x042:  mov    %eax,-0x6c(%ebp)
0874bc35 +0x045:  call   087974d0 <_ZNK5yaSSL11CertManager11get_keyTypeEv>  ; yaSSL::CertManager::get_keyType() const
0874bc3a +0x04a:  mov    -0x6c(%ebp),%edx
0874bc3d +0x04d:  cmp    $0x1,%eax
0874bc40 +0x050:  je     0874bda8 <+0x1b8>
0874bc46 +0x056:  mov    %edx,(%esp)
0874bc49 +0x059:  mov    %edx,-0x6c(%ebp)
0874bc4c +0x05c:  call   08797790 <_ZNK5yaSSL11CertManager20get_privateKeyLengthEv>  ; yaSSL::CertManager::get_privateKeyLength() const
0874bc51 +0x061:  mov    -0x6c(%ebp),%edx
0874bc54 +0x064:  mov    %edx,(%esp)
0874bc57 +0x067:  mov    %eax,%esi
0874bc59 +0x069:  call   087977f0 <_ZNK5yaSSL11CertManager14get_privateKeyEv>  ; yaSSL::CertManager::get_privateKey() const
0874bc5e +0x06e:  lea    -0x24(%ebp),%edx
0874bc61 +0x071:  movl   $0x0,0xc(%esp)
0874bc69 +0x079:  mov    %esi,0x8(%esp)
0874bc6d +0x07d:  mov    %edx,-0x60(%ebp)
0874bc70 +0x080:  mov    %edx,(%esp)
0874bc73 +0x083:  mov    %eax,0x4(%esp)
0874bc77 +0x087:  call   0879b560 <_ZN5yaSSL3DSSC1EPKhjb>  ; yaSSL::DSS::DSS(unsigned char const*, unsigned int, bool)
0874bc7c +0x08c:  movb   $0x0,0x4(%esp)
0874bc81 +0x091:  movl   $0x30,(%esp)
0874bc88 +0x098:  call   08752350 <_ZnajN5yaSSL5new_tE>  ; operator new[](unsigned int, yaSSL::new_t)
0874bc8d +0x09d:  test   %eax,%eax
0874bc8f +0x09f:  mov    %eax,-0x5c(%ebp)
0874bc92 +0x0a2:  je     0874be98 <+0x2a8>
0874bc98 +0x0a8:  movb   $0x0,0x4(%esp)
0874bc9d +0x0ad:  movl   $0x0,(%esp)
0874bca4 +0x0b4:  call   087508f0 <_ZdaPvN5yaSSL5new_tE>  ; operator delete[](void*, yaSSL::new_t)
0874bca9 +0x0b9:  mov    -0x5c(%ebp),%eax
0874bcac +0x0bc:  mov    %eax,%edx
0874bcae +0x0be:  add    $0x2,%edx
0874bcb1 +0x0c1:  mov    %eax,-0x68(%ebp)
0874bcb4 +0x0c4:  mov    %edx,%esi
0874bcb6 +0x0c6:  mov    %edx,-0x64(%ebp)
0874bcb9 +0x0c9:  lea    -0x1a(%ebp),%eax
0874bcbc +0x0cc:  mov    %eax,0x4(%esp)
0874bcc0 +0x0d0:  movl   $0x2e,(%esp)
0874bcc7 +0x0d7:  call   0874ddd0 <_ZN5yaSSL6c16toaEtPh>  ; yaSSL::c16toa(unsigned short, unsigned char*)
0874bccc +0x0dc:  mov    -0x68(%ebp),%edx
0874bccf +0x0df:  movzwl -0x1a(%ebp),%eax
0874bcd3 +0x0e3:  mov    %ax,(%edx)
0874bcd6 +0x0e6:  mov    0xc(%ebp),%eax
0874bcd9 +0x0e9:  mov    %eax,(%esp)
0874bcdc +0x0ec:  call   0874e060 <_ZNK5yaSSL3SSL9getCryptoEv>  ; yaSSL::SSL::getCrypto() const
0874bce1 +0x0f1:  mov    %eax,(%esp)
0874bce4 +0x0f4:  call   0874e780 <_ZNK5yaSSL6Crypto10get_randomEv>  ; yaSSL::Crypto::get_random() const
0874bce9 +0x0f9:  mov    -0x64(%ebp),%edx
0874bcec +0x0fc:  movl   $0x14,0xc(%esp)
0874bcf4 +0x104:  mov    %edx,0x4(%esp)
0874bcf8 +0x108:  mov    %eax,0x10(%esp)
0874bcfc +0x10c:  lea    0x18(%edi),%eax
0874bcff +0x10f:  mov    %eax,0x8(%esp)
0874bd03 +0x113:  mov    -0x60(%ebp),%eax
0874bd06 +0x116:  mov    %eax,(%esp)
0874bd09 +0x119:  call   0879a820 <_ZN5yaSSL3DSS4signEPhPKhjRKNS_10RandomPoolE>  ; yaSSL::DSS::sign(unsigned char*, unsigned char const*, unsigned int, yaSSL::RandomPool const&)
0874bd0e +0x11e:  mov    -0x64(%ebp),%edx
0874bd11 +0x121:  lea    -0x54(%ebp),%eax
0874bd14 +0x124:  mov    %eax,0x4(%esp)
0874bd18 +0x128:  mov    %edx,(%esp)
0874bd1b +0x12b:  call   087554a0 <_ZN8TaoCrypt19EncodeDSA_SignatureEPKhPh>  ; TaoCrypt::EncodeDSA_Signature(unsigned char const*, unsigned char*)
0874bd20 +0x130:  mov    -0x54(%ebp),%eax
0874bd23 +0x133:  mov    %eax,(%esi)
0874bd25 +0x135:  mov    -0x50(%ebp),%eax
0874bd28 +0x138:  mov    %eax,0x4(%esi)
0874bd2b +0x13b:  mov    -0x4c(%ebp),%eax
0874bd2e +0x13e:  mov    %eax,0x8(%esi)
0874bd31 +0x141:  mov    -0x48(%ebp),%eax
0874bd34 +0x144:  mov    %eax,0xc(%esi)
0874bd37 +0x147:  mov    -0x44(%ebp),%eax
0874bd3a +0x14a:  mov    %eax,0x10(%esi)
0874bd3d +0x14d:  mov    -0x40(%ebp),%eax
0874bd40 +0x150:  mov    %eax,0x14(%esi)
0874bd43 +0x153:  mov    -0x3c(%ebp),%eax
0874bd46 +0x156:  mov    %eax,0x18(%esi)
0874bd49 +0x159:  mov    -0x38(%ebp),%eax
0874bd4c +0x15c:  mov    %eax,0x1c(%esi)
0874bd4f +0x15f:  mov    -0x34(%ebp),%eax
0874bd52 +0x162:  mov    %eax,0x20(%esi)
0874bd55 +0x165:  mov    -0x30(%ebp),%eax
0874bd58 +0x168:  mov    %eax,0x24(%esi)
0874bd5b +0x16b:  mov    -0x2c(%ebp),%eax
0874bd5e +0x16e:  mov    %eax,0x28(%esi)
0874bd61 +0x171:  movzwl -0x28(%ebp),%eax
0874bd65 +0x175:  mov    %ax,0x2c(%esi)
0874bd69 +0x179:  mov    -0x60(%ebp),%eax
0874bd6c +0x17c:  mov    %eax,(%esp)
0874bd6f +0x17f:  call   0879ba40 <_ZN5yaSSL3DSSD1Ev>  ; yaSSL::DSS::~DSS()
0874bd74 +0x184:  mov    $0x30,%eax
0874bd79 +0x189:  mov    %eax,0x4(%esp)
0874bd7d +0x18d:  mov    %edi,(%esp)
0874bd80 +0x190:  call   08746ab0 <_ZN5yaSSL13HandShakeBase10set_lengthEi>  ; yaSSL::HandShakeBase::set_length(int)
0874bd85 +0x195:  mov    -0x5c(%ebp),%edx
0874bd88 +0x198:  mov    %edx,0x2c(%edi)
0874bd8b +0x19b:  movb   $0x0,0x4(%esp)
0874bd90 +0x1a0:  movl   $0x0,(%esp)
0874bd97 +0x1a7:  call   087508f0 <_ZdaPvN5yaSSL5new_tE>  ; operator delete[](void*, yaSSL::new_t)
0874bd9c +0x1ac:  add    $0x8c,%esp
0874bda2 +0x1b2:  pop    %ebx
0874bda3 +0x1b3:  pop    %esi
0874bda4 +0x1b4:  pop    %edi
0874bda5 +0x1b5:  pop    %ebp
0874bda6 +0x1b6:  ret
0874bda7 +0x1b7:  nop
0874bda8 +0x1b8:  mov    %edx,(%esp)
0874bdab +0x1bb:  call   08797790 <_ZNK5yaSSL11CertManager20get_privateKeyLengthEv>  ; yaSSL::CertManager::get_privateKeyLength() const
0874bdb0 +0x1c0:  mov    -0x6c(%ebp),%edx
0874bdb3 +0x1c3:  mov    %edx,(%esp)
0874bdb6 +0x1c6:  mov    %eax,-0x70(%ebp)
0874bdb9 +0x1c9:  call   087977f0 <_ZNK5yaSSL11CertManager14get_privateKeyEv>  ; yaSSL::CertManager::get_privateKey() const
0874bdbe +0x1ce:  mov    -0x70(%ebp),%ecx
0874bdc1 +0x1d1:  movl   $0x0,0xc(%esp)
0874bdc9 +0x1d9:  mov    %ecx,0x8(%esp)
0874bdcd +0x1dd:  mov    %eax,0x4(%esp)
0874bdd1 +0x1e1:  lea    -0x54(%ebp),%eax
0874bdd4 +0x1e4:  mov    %eax,-0x60(%ebp)
0874bdd7 +0x1e7:  mov    %eax,(%esp)
0874bdda +0x1ea:  call   0879b260 <_ZN5yaSSL3RSAC1EPKhjb>  ; yaSSL::RSA::RSA(unsigned char const*, unsigned int, bool)
0874bddf +0x1ef:  mov    -0x60(%ebp),%edx
0874bde2 +0x1f2:  mov    %edx,(%esp)
0874bde5 +0x1f5:  call   08798e50 <_ZNK5yaSSL3RSA16get_cipherLengthEv>  ; yaSSL::RSA::get_cipherLength() const
0874bdea +0x1fa:  mov    %ax,-0x64(%ebp)
0874bdee +0x1fe:  add    $0x2,%eax
0874bdf1 +0x201:  movzwl %ax,%eax
0874bdf4 +0x204:  movb   $0x0,0x4(%esp)
0874bdf9 +0x209:  mov    %eax,-0x68(%ebp)
0874bdfc +0x20c:  mov    %eax,(%esp)
0874bdff +0x20f:  call   08752350 <_ZnajN5yaSSL5new_tE>  ; operator new[](unsigned int, yaSSL::new_t)
0874be04 +0x214:  xor    %edx,%edx
0874be06 +0x216:  mov    $0x2,%ecx
0874be0b +0x21b:  test   %eax,%eax
0874be0d +0x21d:  mov    %eax,-0x5c(%ebp)
0874be10 +0x220:  je     0874be2b <+0x23b>
0874be12 +0x222:  movb   $0x0,0x4(%esp)
0874be17 +0x227:  movl   $0x0,(%esp)
0874be1e +0x22e:  call   087508f0 <_ZdaPvN5yaSSL5new_tE>  ; operator delete[](void*, yaSSL::new_t)
0874be23 +0x233:  mov    -0x5c(%ebp),%edx
0874be26 +0x236:  mov    %edx,%ecx
0874be28 +0x238:  add    $0x2,%ecx
0874be2b +0x23b:  lea    -0x1a(%ebp),%eax
0874be2e +0x23e:  mov    %eax,0x4(%esp)
0874be32 +0x242:  movzwl -0x64(%ebp),%eax
0874be36 +0x246:  mov    %ecx,-0x70(%ebp)
0874be39 +0x249:  mov    %edx,-0x6c(%ebp)
0874be3c +0x24c:  mov    %eax,(%esp)
0874be3f +0x24f:  call   0874ddd0 <_ZN5yaSSL6c16toaEtPh>  ; yaSSL::c16toa(unsigned short, unsigned char*)
0874be44 +0x254:  mov    -0x6c(%ebp),%edx
0874be47 +0x257:  movzwl -0x1a(%ebp),%eax
0874be4b +0x25b:  mov    %ax,(%edx)
0874be4e +0x25e:  mov    0xc(%ebp),%eax
0874be51 +0x261:  mov    %eax,(%esp)
0874be54 +0x264:  call   0874e060 <_ZNK5yaSSL3SSL9getCryptoEv>  ; yaSSL::SSL::getCrypto() const
0874be59 +0x269:  mov    %eax,(%esp)
0874be5c +0x26c:  call   0874e780 <_ZNK5yaSSL6Crypto10get_randomEv>  ; yaSSL::Crypto::get_random() const
0874be61 +0x271:  mov    -0x70(%ebp),%ecx
0874be64 +0x274:  mov    -0x60(%ebp),%edx
0874be67 +0x277:  movl   $0x24,0xc(%esp)
0874be6f +0x27f:  mov    %esi,0x8(%esp)
0874be73 +0x283:  mov    %ecx,0x4(%esp)
0874be77 +0x287:  mov    %edx,(%esp)
0874be7a +0x28a:  mov    %eax,0x10(%esp)
0874be7e +0x28e:  call   0879afc0 <_ZN5yaSSL3RSA4signEPhPKhjRKNS_10RandomPoolE>  ; yaSSL::RSA::sign(unsigned char*, unsigned char const*, unsigned int, yaSSL::RandomPool const&)
0874be83 +0x293:  mov    -0x60(%ebp),%eax
0874be86 +0x296:  mov    %eax,(%esp)
0874be89 +0x299:  call   0879b380 <_ZN5yaSSL3RSAD1Ev>  ; yaSSL::RSA::~RSA()
0874be8e +0x29e:  mov    -0x68(%ebp),%eax
0874be91 +0x2a1:  jmp    0874bd79 <+0x189>
0874be96 +0x2a6:  xchg   %ax,%ax
0874be98 +0x2a8:  mov    $0x2,%esi
0874be9d +0x2ad:  movl   $0x2,-0x64(%ebp)
0874bea4 +0x2b4:  movl   $0x0,-0x68(%ebp)
0874beab +0x2bb:  jmp    0874bcb9 <+0xc9>
```

## 反编译 C

```c
// yaSSL::CertificateVerify::Build @ 0x874bbf0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::CertificateVerify::Build(yaSSL::SSL&) */

void __thiscall yaSSL::CertificateVerify::Build(CertificateVerify *this,SSL *param_1)

{
  ushort uVar1;
  Crypto *pCVar2;
  CertManager *this_00;
  int iVar3;
  uint uVar4;
  uchar *puVar5;
  RandomPool *pRVar6;
  undefined2 *puVar7;
  uint uVar8;
  undefined2 *local_6c;
  uchar *local_68;
  undefined2 *local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined2 local_2c;
  DSS local_28 [10];
  undefined2 local_1e [5];
  undefined4 uStack_14;
  
  uStack_14 = 0x874bbfb;
  build_certHashes(param_1,(Hashes *)(this + 8));
  pCVar2 = (Crypto *)SSL::getCrypto(param_1);
  this_00 = (CertManager *)Crypto::get_certManager(pCVar2);
  iVar3 = CertManager::get_keyType(this_00);
  if (iVar3 == 1) {
    uVar4 = CertManager::get_privateKeyLength(this_00);
    puVar5 = (uchar *)CertManager::get_privateKey(this_00);
    RSA::RSA((RSA *)&local_58,puVar5,uVar4,false);
    uVar1 = RSA::get_cipherLength((RSA *)&local_58);
    uVar4 = (uint)(ushort)(uVar1 + 2);
    uVar8 = (uint)puVar5 & 0xffffff00;
    local_60 = operator_new__(uVar4,uVar8);
    puVar5 = (uchar *)0x2;
    puVar7 = (undefined2 *)0x0;
    if (local_60 != (undefined2 *)0x0) {
      operator_delete__(0,uVar8 & 0xffffff00);
      puVar5 = (uchar *)(local_60 + 1);
      puVar7 = local_60;
    }
    c16toa(uVar1,(uchar *)local_1e);
    *puVar7 = local_1e[0];
    pCVar2 = (Crypto *)SSL::getCrypto(param_1);
    pRVar6 = (RandomPool *)Crypto::get_random(pCVar2);
    RSA::sign((RSA *)&local_58,puVar5,(uchar *)(this + 8),0x24,pRVar6);
    RSA::~RSA((RSA *)&local_58);
  }
  else {
    uVar4 = CertManager::get_privateKeyLength(this_00);
    puVar5 = (uchar *)CertManager::get_privateKey(this_00);
    DSS::DSS(local_28,puVar5,uVar4,false);
    uVar4 = (uint)puVar5 & 0xffffff00;
    local_60 = operator_new__(0x30,uVar4);
    if (local_60 == (undefined2 *)0x0) {
      local_68 = (uchar *)0x2;
      local_6c = (undefined2 *)0x0;
    }
    else {
      operator_delete__(0,uVar4 & 0xffffff00);
      local_68 = (uchar *)(local_60 + 1);
      local_6c = local_60;
    }
    c16toa(0x2e,(uchar *)local_1e);
    *local_6c = local_1e[0];
    pCVar2 = (Crypto *)SSL::getCrypto(param_1);
    pRVar6 = (RandomPool *)Crypto::get_random(pCVar2);
    DSS::sign(local_28,local_68,(uchar *)(this + 0x18),0x14,pRVar6);
    TaoCrypt::EncodeDSA_Signature(local_68,(uchar *)&local_58);
    *(undefined4 *)local_68 = local_58;
    *(undefined4 *)(local_68 + 4) = local_54;
    *(undefined4 *)(local_68 + 8) = local_50;
    *(undefined4 *)(local_68 + 0xc) = local_4c;
    *(undefined4 *)(local_68 + 0x10) = local_48;
    *(undefined4 *)(local_68 + 0x14) = local_44;
    *(undefined4 *)(local_68 + 0x18) = local_40;
    *(undefined4 *)(local_68 + 0x1c) = local_3c;
    *(undefined4 *)(local_68 + 0x20) = local_38;
    *(undefined4 *)(local_68 + 0x24) = local_34;
    *(undefined4 *)(local_68 + 0x28) = local_30;
    *(undefined2 *)(local_68 + 0x2c) = local_2c;
    DSS::~DSS(local_28);
    uVar4 = 0x30;
  }
  HandShakeBase::set_length((HandShakeBase *)this,uVar4);
  *(undefined2 **)(this + 0x2c) = local_60;
  operator_delete__(0,uVar4 & 0xffffff00);
  return;
}
```
