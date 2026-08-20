# SSL_SESSION

`_ZN5yaSSL11SSL_SESSIONC1ERKNS_3SSLERNS_10RandomPoolE`

`yaSSL::SSL_SESSION::SSL_SESSION(yaSSL::SSL const&, yaSSL::RandomPool&)`

| 类 | 地址 |
|---|---|
| `yaSSL::SSL_SESSION` | `0x08752940` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08752940  _ZN5yaSSL11SSL_SESSIONC1ERKNS_3SSLERNS_10RandomPoolE
#           yaSSL::SSL_SESSION::SSL_SESSION(yaSSL::SSL const&, yaSSL::RandomPool&)
# range [0x08752940, 0x08752a4a]
08752940 +0x000:  push   %ebp
08752941 +0x001:  mov    %esp,%ebp
08752943 +0x003:  push   %edi
08752944 +0x004:  push   %esi
08752945 +0x005:  push   %ebx
08752946 +0x006:  call   08722df8 <__i686.get_pc_thunk.bx>
0875294b +0x00b:  add    $0xc1a24d,%ebx
08752951 +0x011:  sub    $0x1c,%esp
08752954 +0x014:  mov    0x8(%ebp),%esi
08752957 +0x017:  mov    0x10(%ebp),%eax
0875295a +0x01a:  mov    0xc(%ebp),%edi
0875295d +0x01d:  movl   $0x1f4,0x58(%esi)
08752964 +0x024:  mov    %eax,0x5c(%esi)
08752967 +0x027:  movl   $0x0,0x60(%esi)
0875296e +0x02e:  mov    %edi,(%esp)
08752971 +0x031:  call   0874e070 <_ZNK5yaSSL3SSL11getSecurityEv>  ; yaSSL::SSL::getSecurity() const
08752976 +0x036:  mov    %eax,(%esp)
08752979 +0x039:  call   0874e960 <_ZNK5yaSSL8Security14get_connectionEv>  ; yaSSL::Security::get_connection() const
0875297e +0x03e:  mov    0x74(%eax),%ecx
08752981 +0x041:  lea    0x74(%eax),%edx
08752984 +0x044:  mov    %ecx,(%esi)
08752986 +0x046:  mov    0x4(%edx),%ecx
08752989 +0x049:  mov    %ecx,0x4(%esi)
0875298c +0x04c:  mov    0x8(%edx),%ecx
0875298f +0x04f:  mov    %ecx,0x8(%esi)
08752992 +0x052:  mov    0xc(%edx),%ecx
08752995 +0x055:  mov    %ecx,0xc(%esi)
08752998 +0x058:  mov    0x10(%edx),%ecx
0875299b +0x05b:  mov    %ecx,0x10(%esi)
0875299e +0x05e:  mov    0x14(%edx),%ecx
087529a1 +0x061:  mov    %ecx,0x14(%esi)
087529a4 +0x064:  mov    0x18(%edx),%ecx
087529a7 +0x067:  mov    %ecx,0x18(%esi)
087529aa +0x06a:  mov    0x1c(%edx),%edx
087529ad +0x06d:  lea    0x4(%eax),%ecx
087529b0 +0x070:  mov    %edx,0x1c(%esi)
087529b3 +0x073:  mov    0x4(%eax),%eax
087529b6 +0x076:  lea    0x20(%esi),%edx
087529b9 +0x079:  mov    %eax,0x20(%esi)
087529bc +0x07c:  mov    0x4(%ecx),%eax
087529bf +0x07f:  mov    %eax,0x4(%edx)
087529c2 +0x082:  mov    0x8(%ecx),%eax
087529c5 +0x085:  mov    %eax,0x8(%edx)
087529c8 +0x088:  mov    0xc(%ecx),%eax
087529cb +0x08b:  mov    %eax,0xc(%edx)
087529ce +0x08e:  mov    0x10(%ecx),%eax
087529d1 +0x091:  mov    %eax,0x10(%edx)
087529d4 +0x094:  mov    0x14(%ecx),%eax
087529d7 +0x097:  mov    %eax,0x14(%edx)
087529da +0x09a:  mov    0x18(%ecx),%eax
087529dd +0x09d:  mov    %eax,0x18(%edx)
087529e0 +0x0a0:  mov    0x1c(%ecx),%eax
087529e3 +0x0a3:  mov    %eax,0x1c(%edx)
087529e6 +0x0a6:  mov    0x20(%ecx),%eax
087529e9 +0x0a9:  mov    %eax,0x20(%edx)
087529ec +0x0ac:  mov    0x24(%ecx),%eax
087529ef +0x0af:  mov    %eax,0x24(%edx)
087529f2 +0x0b2:  mov    0x28(%ecx),%eax
087529f5 +0x0b5:  mov    %eax,0x28(%edx)
087529f8 +0x0b8:  mov    0x2c(%ecx),%eax
087529fb +0x0bb:  mov    %eax,0x2c(%edx)
087529fe +0x0be:  mov    %edi,(%esp)
08752a01 +0x0c1:  call   0874e070 <_ZNK5yaSSL3SSL11getSecurityEv>  ; yaSSL::SSL::getSecurity() const
08752a06 +0x0c6:  mov    %eax,(%esp)
08752a09 +0x0c9:  call   0874ea50 <_ZNK5yaSSL8Security9get_parmsEv>  ; yaSSL::Security::get_parms() const
08752a0e +0x0ce:  movzwl 0x2c(%eax),%eax
08752a12 +0x0d2:  mov    %ax,0x50(%esi)
08752a16 +0x0d6:  call   087a1750 <_ZN5yaSSL11lowResTimerEv>  ; yaSSL::lowResTimer()
08752a1b +0x0db:  mov    %eax,0x54(%esi)
08752a1e +0x0de:  mov    %edi,(%esp)
08752a21 +0x0e1:  call   0874e060 <_ZNK5yaSSL3SSL9getCryptoEv>  ; yaSSL::SSL::getCrypto() const
08752a26 +0x0e6:  mov    %eax,(%esp)
08752a29 +0x0e9:  call   0874e790 <_ZNK5yaSSL6Crypto15get_certManagerEv>  ; yaSSL::Crypto::get_certManager() const
08752a2e +0x0ee:  mov    %eax,(%esp)
08752a31 +0x0f1:  call   087974b0 <_ZNK5yaSSL11CertManager12get_peerX509Ev>  ; yaSSL::CertManager::get_peerX509() const
08752a36 +0x0f6:  mov    %esi,(%esp)
08752a39 +0x0f9:  mov    %eax,0x4(%esp)
08752a3d +0x0fd:  call   08752720 <_ZN5yaSSL11SSL_SESSION8CopyX509EPNS_4X509E>  ; yaSSL::SSL_SESSION::CopyX509(yaSSL::X509*)
08752a42 +0x102:  add    $0x1c,%esp
08752a45 +0x105:  pop    %ebx
08752a46 +0x106:  pop    %esi
08752a47 +0x107:  pop    %edi
08752a48 +0x108:  pop    %ebp
08752a49 +0x109:  ret
08752a4a +0x10a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::SSL_SESSION::SSL_SESSION @ 0x8752940

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL_SESSION::SSL_SESSION(yaSSL::SSL const&, yaSSL::RandomPool&) */

void __thiscall yaSSL::SSL_SESSION::SSL_SESSION(SSL_SESSION *this,SSL *param_1,RandomPool *param_2)

{
  Security *pSVar1;
  int iVar2;
  undefined4 uVar3;
  Crypto *this_00;
  CertManager *this_01;
  X509 *pXVar4;
  
  *(undefined4 *)(this + 0x58) = 500;
  *(RandomPool **)(this + 0x5c) = param_2;
  *(undefined4 *)(this + 0x60) = 0;
  pSVar1 = (Security *)SSL::getSecurity(param_1);
  iVar2 = Security::get_connection(pSVar1);
  *(undefined4 *)this = *(undefined4 *)(iVar2 + 0x74);
  *(undefined4 *)(this + 4) = *(undefined4 *)(iVar2 + 0x78);
  *(undefined4 *)(this + 8) = *(undefined4 *)(iVar2 + 0x7c);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(iVar2 + 0x80);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(iVar2 + 0x84);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(iVar2 + 0x88);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(iVar2 + 0x8c);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(iVar2 + 0x90);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(iVar2 + 4);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(iVar2 + 8);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(iVar2 + 0xc);
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(iVar2 + 0x10);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(iVar2 + 0x14);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(iVar2 + 0x18);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(iVar2 + 0x1c);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(iVar2 + 0x20);
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(iVar2 + 0x24);
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(iVar2 + 0x28);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(iVar2 + 0x2c);
  *(undefined4 *)(this + 0x4c) = *(undefined4 *)(iVar2 + 0x30);
  pSVar1 = (Security *)SSL::getSecurity(param_1);
  iVar2 = Security::get_parms(pSVar1);
  *(undefined2 *)(this + 0x50) = *(undefined2 *)(iVar2 + 0x2c);
  uVar3 = lowResTimer();
  *(undefined4 *)(this + 0x54) = uVar3;
  this_00 = (Crypto *)SSL::getCrypto(param_1);
  this_01 = (CertManager *)Crypto::get_certManager(this_00);
  pXVar4 = (X509 *)CertManager::get_peerX509(this_01);
  CopyX509(this,pXVar4);
  return;
}
```
