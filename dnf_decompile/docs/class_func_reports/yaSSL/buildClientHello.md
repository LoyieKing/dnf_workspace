# buildClientHello

`_ZN5yaSSL16buildClientHelloERNS_3SSLERNS_11ClientHelloE`

`yaSSL::buildClientHello(yaSSL::SSL&, yaSSL::ClientHello&)`

| 类 | 地址 |
|---|---|
| `yaSSL` | `0x0879db70` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0879db70  _ZN5yaSSL16buildClientHelloERNS_3SSLERNS_11ClientHelloE
#           yaSSL::buildClientHello(yaSSL::SSL&, yaSSL::ClientHello&)
# range [0x0879db70, 0x0879dcac]
0879db70 +0x000:  push   %ebp
0879db71 +0x001:  mov    %esp,%ebp
0879db73 +0x003:  push   %edi
0879db74 +0x004:  push   %esi
0879db75 +0x005:  push   %ebx
0879db76 +0x006:  call   08722df8 <__i686.get_pc_thunk.bx>
0879db7b +0x00b:  add    $0xbcf01d,%ebx
0879db81 +0x011:  sub    $0x2c,%esp
0879db84 +0x014:  mov    0x8(%ebp),%edi
0879db87 +0x017:  mov    0xc(%ebp),%esi
0879db8a +0x01a:  mov    %edi,(%esp)
0879db8d +0x01d:  call   0874e2c0 <_ZN5yaSSL3SSL11useSecurityEv>  ; yaSSL::SSL::useSecurity()
0879db92 +0x022:  mov    %eax,(%esp)
0879db95 +0x025:  call   0874ed00 <_ZN5yaSSL8Security14use_connectionEv>  ; yaSSL::Security::use_connection()
0879db9a +0x02a:  movzwl 0x8(%esi),%edx
0879db9e +0x02e:  mov    %dx,0x130(%eax)
0879dba5 +0x035:  mov    %edi,(%esp)
0879dba8 +0x038:  call   0874e060 <_ZNK5yaSSL3SSL9getCryptoEv>  ; yaSSL::SSL::getCrypto() const
0879dbad +0x03d:  mov    %eax,(%esp)
0879dbb0 +0x040:  call   0874e780 <_ZNK5yaSSL6Crypto10get_randomEv>  ; yaSSL::Crypto::get_random() const
0879dbb5 +0x045:  lea    0xa(%esi),%edx
0879dbb8 +0x048:  mov    %edx,0x4(%esp)
0879dbbc +0x04c:  movl   $0x20,0x8(%esp)
0879dbc4 +0x054:  mov    %eax,(%esp)
0879dbc7 +0x057:  call   08798fc0 <_ZNK5yaSSL10RandomPool4FillEPhj>  ; yaSSL::RandomPool::Fill(unsigned char*, unsigned int) const
0879dbcc +0x05c:  mov    %edi,(%esp)
0879dbcf +0x05f:  call   0874e070 <_ZNK5yaSSL3SSL11getSecurityEv>  ; yaSSL::SSL::getSecurity() const
0879dbd4 +0x064:  mov    %eax,(%esp)
0879dbd7 +0x067:  call   0874ecf0 <_ZNK5yaSSL8Security12get_resumingEv>  ; yaSSL::Security::get_resuming() const
0879dbdc +0x06c:  test   %al,%al
0879dbde +0x06e:  jne    0879dc58 <+0xe8>
0879dbe0 +0x070:  movb   $0x0,0x2a(%esi)
0879dbe4 +0x074:  mov    %edi,(%esp)
0879dbe7 +0x077:  call   0874e070 <_ZNK5yaSSL3SSL11getSecurityEv>  ; yaSSL::SSL::getSecurity() const
0879dbec +0x07c:  mov    %eax,(%esp)
0879dbef +0x07f:  call   0874ea50 <_ZNK5yaSSL8Security9get_parmsEv>  ; yaSSL::Security::get_parms() const
0879dbf4 +0x084:  movzbl 0x2e(%eax),%edx
0879dbf8 +0x088:  mov    %dx,0x4c(%esi)
0879dbfc +0x08c:  mov    %edx,-0x1c(%ebp)
0879dbff +0x08f:  mov    %edi,(%esp)
0879dc02 +0x092:  call   0874e070 <_ZNK5yaSSL3SSL11getSecurityEv>  ; yaSSL::SSL::getSecurity() const
0879dc07 +0x097:  mov    %eax,(%esp)
0879dc0a +0x09a:  call   0874ea50 <_ZNK5yaSSL8Security9get_parmsEv>  ; yaSSL::Security::get_parms() const
0879dc0f +0x09f:  mov    -0x1c(%ebp),%edx
0879dc12 +0x0a2:  lea    0x4e(%esi),%ecx
0879dc15 +0x0a5:  mov    %ecx,(%esp)
0879dc18 +0x0a8:  movzwl %dx,%edx
0879dc1b +0x0ab:  mov    %edx,0x8(%esp)
0879dc1f +0x0af:  add    $0x2f,%eax
0879dc22 +0x0b2:  mov    %eax,0x4(%esp)
0879dc26 +0x0b6:  call   0807d8a0 <_init+0x198>
0879dc2b +0x0bb:  movzbl 0x2a(%esi),%edx
0879dc2f +0x0bf:  movzwl 0x4c(%esi),%eax
0879dc33 +0x0c3:  movb   $0x1,0xce(%esi)
0879dc3a +0x0ca:  mov    %esi,(%esp)
0879dc3d +0x0cd:  lea    0x27(%edx,%eax,1),%eax
0879dc41 +0x0d1:  mov    %eax,0x4(%esp)
0879dc45 +0x0d5:  call   08746ab0 <_ZN5yaSSL13HandShakeBase10set_lengthEi>  ; yaSSL::HandShakeBase::set_length(int)
0879dc4a +0x0da:  add    $0x2c,%esp
0879dc4d +0x0dd:  pop    %ebx
0879dc4e +0x0de:  pop    %esi
0879dc4f +0x0df:  pop    %edi
0879dc50 +0x0e0:  pop    %ebp
0879dc51 +0x0e1:  ret
0879dc52 +0x0e2:  lea    0x0(%esi),%esi
0879dc58 +0x0e8:  movb   $0x20,0x2a(%esi)
0879dc5c +0x0ec:  mov    %edi,(%esp)
0879dc5f +0x0ef:  call   0874e070 <_ZNK5yaSSL3SSL11getSecurityEv>  ; yaSSL::SSL::getSecurity() const
0879dc64 +0x0f4:  mov    %eax,(%esp)
0879dc67 +0x0f7:  call   0874ece0 <_ZNK5yaSSL8Security10get_resumeEv>  ; yaSSL::Security::get_resume() const
0879dc6c +0x0fc:  mov    %eax,(%esp)
0879dc6f +0x0ff:  call   0874e320 <_ZNK5yaSSL11SSL_SESSION5GetIDEv>  ; yaSSL::SSL_SESSION::GetID() const
0879dc74 +0x104:  lea    0x2b(%esi),%edx
0879dc77 +0x107:  mov    (%eax),%ecx
0879dc79 +0x109:  mov    %ecx,0x2b(%esi)
0879dc7c +0x10c:  mov    0x4(%eax),%ecx
0879dc7f +0x10f:  mov    %ecx,0x4(%edx)
0879dc82 +0x112:  mov    0x8(%eax),%ecx
0879dc85 +0x115:  mov    %ecx,0x8(%edx)
0879dc88 +0x118:  mov    0xc(%eax),%ecx
0879dc8b +0x11b:  mov    %ecx,0xc(%edx)
0879dc8e +0x11e:  mov    0x10(%eax),%ecx
0879dc91 +0x121:  mov    %ecx,0x10(%edx)
0879dc94 +0x124:  mov    0x14(%eax),%ecx
0879dc97 +0x127:  mov    %ecx,0x14(%edx)
0879dc9a +0x12a:  mov    0x18(%eax),%ecx
0879dc9d +0x12d:  mov    %ecx,0x18(%edx)
0879dca0 +0x130:  mov    0x1c(%eax),%eax
0879dca3 +0x133:  mov    %eax,0x1c(%edx)
0879dca6 +0x136:  jmp    0879dbe4 <+0x74>
0879dcab +0x13b:  nop
0879dcac +0x13c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::buildClientHello @ 0x879db70

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::buildClientHello(yaSSL::SSL&, yaSSL::ClientHello&) */

void yaSSL::buildClientHello(SSL *param_1,ClientHello *param_2)

{
  byte bVar1;
  char cVar2;
  Security *pSVar3;
  int iVar4;
  Crypto *this;
  RandomPool *this_00;
  SSL_SESSION *this_01;
  undefined4 *puVar5;
  
  pSVar3 = (Security *)SSL::useSecurity(param_1);
  iVar4 = Security::use_connection(pSVar3);
  *(undefined2 *)(iVar4 + 0x130) = *(undefined2 *)(param_2 + 8);
  this = (Crypto *)SSL::getCrypto(param_1);
  this_00 = (RandomPool *)Crypto::get_random(this);
  RandomPool::Fill(this_00,(uchar *)(param_2 + 10),0x20);
  pSVar3 = (Security *)SSL::getSecurity(param_1);
  cVar2 = Security::get_resuming(pSVar3);
  if (cVar2 == '\0') {
    param_2[0x2a] = (ClientHello)0x0;
  }
  else {
    param_2[0x2a] = (ClientHello)0x20;
    pSVar3 = (Security *)SSL::getSecurity(param_1);
    this_01 = (SSL_SESSION *)Security::get_resume(pSVar3);
    puVar5 = (undefined4 *)SSL_SESSION::GetID(this_01);
    *(undefined4 *)(param_2 + 0x2b) = *puVar5;
    *(undefined4 *)(param_2 + 0x2f) = puVar5[1];
    *(undefined4 *)(param_2 + 0x33) = puVar5[2];
    *(undefined4 *)(param_2 + 0x37) = puVar5[3];
    *(undefined4 *)(param_2 + 0x3b) = puVar5[4];
    *(undefined4 *)(param_2 + 0x3f) = puVar5[5];
    *(undefined4 *)(param_2 + 0x43) = puVar5[6];
    *(undefined4 *)(param_2 + 0x47) = puVar5[7];
  }
  pSVar3 = (Security *)SSL::getSecurity(param_1);
  iVar4 = Security::get_parms(pSVar3);
  bVar1 = *(byte *)(iVar4 + 0x2e);
  *(ushort *)(param_2 + 0x4c) = (ushort)bVar1;
  pSVar3 = (Security *)SSL::getSecurity(param_1);
  iVar4 = Security::get_parms(pSVar3);
  memcpy(param_2 + 0x4e,(void *)(iVar4 + 0x2f),(uint)bVar1);
  param_2[0xce] = (ClientHello)0x1;
  HandShakeBase::set_length
            ((HandShakeBase *)param_2,(byte)param_2[0x2a] + 0x27 + (uint)*(ushort *)(param_2 + 0x4c)
            );
  return;
}
```
