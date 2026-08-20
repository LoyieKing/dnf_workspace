# buildServerHello

`_ZN5yaSSL16buildServerHelloERNS_3SSLERNS_11ServerHelloE`

`yaSSL::buildServerHello(yaSSL::SSL&, yaSSL::ServerHello&)`

| 类 | 地址 |
|---|---|
| `yaSSL` | `0x0879dcb0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0879dcb0  _ZN5yaSSL16buildServerHelloERNS_3SSLERNS_11ServerHelloE
#           yaSSL::buildServerHello(yaSSL::SSL&, yaSSL::ServerHello&)
# range [0x0879dcb0, 0x0879de29]
0879dcb0 +0x000:  push   %ebp
0879dcb1 +0x001:  mov    %esp,%ebp
0879dcb3 +0x003:  push   %edi
0879dcb4 +0x004:  push   %esi
0879dcb5 +0x005:  push   %ebx
0879dcb6 +0x006:  call   08722df8 <__i686.get_pc_thunk.bx>
0879dcbb +0x00b:  add    $0xbceedd,%ebx
0879dcc1 +0x011:  sub    $0x2c,%esp
0879dcc4 +0x014:  mov    0x8(%ebp),%edi
0879dcc7 +0x017:  mov    0xc(%ebp),%esi
0879dcca +0x01a:  mov    %edi,(%esp)
0879dccd +0x01d:  call   0874e070 <_ZNK5yaSSL3SSL11getSecurityEv>  ; yaSSL::SSL::getSecurity() const
0879dcd2 +0x022:  mov    %eax,(%esp)
0879dcd5 +0x025:  call   0874ecf0 <_ZNK5yaSSL8Security12get_resumingEv>  ; yaSSL::Security::get_resuming() const
0879dcda +0x02a:  test   %al,%al
0879dcdc +0x02c:  jne    0879dd90 <+0xe0>
0879dce2 +0x032:  mov    %edi,(%esp)
0879dce5 +0x035:  call   0874e060 <_ZNK5yaSSL3SSL9getCryptoEv>  ; yaSSL::SSL::getCrypto() const
0879dcea +0x03a:  mov    %eax,(%esp)
0879dced +0x03d:  call   0874e780 <_ZNK5yaSSL6Crypto10get_randomEv>  ; yaSSL::Crypto::get_random() const
0879dcf2 +0x042:  lea    0xa(%esi),%edx
0879dcf5 +0x045:  mov    %edx,0x4(%esp)
0879dcf9 +0x049:  movl   $0x20,0x8(%esp)
0879dd01 +0x051:  mov    %eax,(%esp)
0879dd04 +0x054:  call   08798fc0 <_ZNK5yaSSL10RandomPool4FillEPhj>  ; yaSSL::RandomPool::Fill(unsigned char*, unsigned int) const
0879dd09 +0x059:  mov    %edi,(%esp)
0879dd0c +0x05c:  call   0874e060 <_ZNK5yaSSL3SSL9getCryptoEv>  ; yaSSL::SSL::getCrypto() const
0879dd11 +0x061:  mov    %eax,(%esp)
0879dd14 +0x064:  call   0874e780 <_ZNK5yaSSL6Crypto10get_randomEv>  ; yaSSL::Crypto::get_random() const
0879dd19 +0x069:  lea    0x2b(%esi),%edx
0879dd1c +0x06c:  mov    %edx,0x4(%esp)
0879dd20 +0x070:  mov    %edx,-0x1c(%ebp)
0879dd23 +0x073:  movl   $0x20,0x8(%esp)
0879dd2b +0x07b:  mov    %eax,(%esp)
0879dd2e +0x07e:  call   08798fc0 <_ZNK5yaSSL10RandomPool4FillEPhj>  ; yaSSL::RandomPool::Fill(unsigned char*, unsigned int) const
0879dd33 +0x083:  mov    -0x1c(%ebp),%edx
0879dd36 +0x086:  movb   $0x20,0x2a(%esi)
0879dd3a +0x08a:  mov    %edx,0x4(%esp)
0879dd3e +0x08e:  mov    %edi,(%esp)
0879dd41 +0x091:  call   0874f2d0 <_ZN5yaSSL3SSL13set_sessionIDEPKh>  ; yaSSL::SSL::set_sessionID(unsigned char const*)
0879dd46 +0x096:  mov    %edi,(%esp)
0879dd49 +0x099:  call   0874e070 <_ZNK5yaSSL3SSL11getSecurityEv>  ; yaSSL::SSL::getSecurity() const
0879dd4e +0x09e:  mov    %eax,(%esp)
0879dd51 +0x0a1:  call   0874ea50 <_ZNK5yaSSL8Security9get_parmsEv>  ; yaSSL::Security::get_parms() const
0879dd56 +0x0a6:  movzbl 0x2c(%eax),%eax
0879dd5a +0x0aa:  mov    %al,0x4b(%esi)
0879dd5d +0x0ad:  mov    %edi,(%esp)
0879dd60 +0x0b0:  call   0874e070 <_ZNK5yaSSL3SSL11getSecurityEv>  ; yaSSL::SSL::getSecurity() const
0879dd65 +0x0b5:  mov    %eax,(%esp)
0879dd68 +0x0b8:  call   0874ea50 <_ZNK5yaSSL8Security9get_parmsEv>  ; yaSSL::Security::get_parms() const
0879dd6d +0x0bd:  movzbl 0x2d(%eax),%eax
0879dd71 +0x0c1:  mov    %al,0x4c(%esi)
0879dd74 +0x0c4:  mov    %esi,(%esp)
0879dd77 +0x0c7:  movl   $0x46,0x4(%esp)
0879dd7f +0x0cf:  call   08746ab0 <_ZN5yaSSL13HandShakeBase10set_lengthEi>  ; yaSSL::HandShakeBase::set_length(int)
0879dd84 +0x0d4:  add    $0x2c,%esp
0879dd87 +0x0d7:  pop    %ebx
0879dd88 +0x0d8:  pop    %esi
0879dd89 +0x0d9:  pop    %edi
0879dd8a +0x0da:  pop    %ebp
0879dd8b +0x0db:  ret
0879dd8c +0x0dc:  lea    0x0(%esi,%eiz,1),%esi
0879dd90 +0x0e0:  mov    %edi,(%esp)
0879dd93 +0x0e3:  call   0874e070 <_ZNK5yaSSL3SSL11getSecurityEv>  ; yaSSL::SSL::getSecurity() const
0879dd98 +0x0e8:  mov    %eax,(%esp)
0879dd9b +0x0eb:  call   0874e960 <_ZNK5yaSSL8Security14get_connectionEv>  ; yaSSL::Security::get_connection() const
0879dda0 +0x0f0:  lea    0xa(%esi),%edx
0879dda3 +0x0f3:  lea    0x54(%eax),%ecx
0879dda6 +0x0f6:  mov    0x54(%eax),%eax
0879dda9 +0x0f9:  mov    %eax,0xa(%esi)
0879ddac +0x0fc:  mov    0x4(%ecx),%eax
0879ddaf +0x0ff:  mov    %eax,0x4(%edx)
0879ddb2 +0x102:  mov    0x8(%ecx),%eax
0879ddb5 +0x105:  mov    %eax,0x8(%edx)
0879ddb8 +0x108:  mov    0xc(%ecx),%eax
0879ddbb +0x10b:  mov    %eax,0xc(%edx)
0879ddbe +0x10e:  mov    0x10(%ecx),%eax
0879ddc1 +0x111:  mov    %eax,0x10(%edx)
0879ddc4 +0x114:  mov    0x14(%ecx),%eax
0879ddc7 +0x117:  mov    %eax,0x14(%edx)
0879ddca +0x11a:  mov    0x18(%ecx),%eax
0879ddcd +0x11d:  mov    %eax,0x18(%edx)
0879ddd0 +0x120:  mov    0x1c(%ecx),%eax
0879ddd3 +0x123:  mov    %eax,0x1c(%edx)
0879ddd6 +0x126:  mov    %edi,(%esp)
0879ddd9 +0x129:  call   0874e070 <_ZNK5yaSSL3SSL11getSecurityEv>  ; yaSSL::SSL::getSecurity() const
0879ddde +0x12e:  mov    %eax,(%esp)
0879dde1 +0x131:  call   0874ece0 <_ZNK5yaSSL8Security10get_resumeEv>  ; yaSSL::Security::get_resume() const
0879dde6 +0x136:  mov    %eax,(%esp)
0879dde9 +0x139:  call   0874e320 <_ZNK5yaSSL11SSL_SESSION5GetIDEv>  ; yaSSL::SSL_SESSION::GetID() const
0879ddee +0x13e:  lea    0x2b(%esi),%edx
0879ddf1 +0x141:  mov    (%eax),%ecx
0879ddf3 +0x143:  mov    %ecx,0x2b(%esi)
0879ddf6 +0x146:  mov    0x4(%eax),%ecx
0879ddf9 +0x149:  mov    %ecx,0x4(%edx)
0879ddfc +0x14c:  mov    0x8(%eax),%ecx
0879ddff +0x14f:  mov    %ecx,0x8(%edx)
0879de02 +0x152:  mov    0xc(%eax),%ecx
0879de05 +0x155:  mov    %ecx,0xc(%edx)
0879de08 +0x158:  mov    0x10(%eax),%ecx
0879de0b +0x15b:  mov    %ecx,0x10(%edx)
0879de0e +0x15e:  mov    0x14(%eax),%ecx
0879de11 +0x161:  mov    %ecx,0x14(%edx)
0879de14 +0x164:  mov    0x18(%eax),%ecx
0879de17 +0x167:  mov    %ecx,0x18(%edx)
0879de1a +0x16a:  mov    0x1c(%eax),%eax
0879de1d +0x16d:  mov    %eax,0x1c(%edx)
0879de20 +0x170:  jmp    0879dd36 <+0x86>
0879de25 +0x175:  lea    0x0(%esi,%eiz,1),%esi
0879de29 +0x179:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::buildServerHello @ 0x879dcb0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::buildServerHello(yaSSL::SSL&, yaSSL::ServerHello&) */

void yaSSL::buildServerHello(SSL *param_1,ServerHello *param_2)

{
  char cVar1;
  Security *pSVar2;
  Crypto *pCVar3;
  RandomPool *pRVar4;
  int iVar5;
  SSL_SESSION *this;
  undefined4 *puVar6;
  
  pSVar2 = (Security *)SSL::getSecurity(param_1);
  cVar1 = Security::get_resuming(pSVar2);
  if (cVar1 == '\0') {
    pCVar3 = (Crypto *)SSL::getCrypto(param_1);
    pRVar4 = (RandomPool *)Crypto::get_random(pCVar3);
    RandomPool::Fill(pRVar4,(uchar *)(param_2 + 10),0x20);
    pCVar3 = (Crypto *)SSL::getCrypto(param_1);
    pRVar4 = (RandomPool *)Crypto::get_random(pCVar3);
    RandomPool::Fill(pRVar4,(uchar *)(param_2 + 0x2b),0x20);
  }
  else {
    pSVar2 = (Security *)SSL::getSecurity(param_1);
    iVar5 = Security::get_connection(pSVar2);
    *(undefined4 *)(param_2 + 10) = *(undefined4 *)(iVar5 + 0x54);
    *(undefined4 *)(param_2 + 0xe) = *(undefined4 *)(iVar5 + 0x58);
    *(undefined4 *)(param_2 + 0x12) = *(undefined4 *)(iVar5 + 0x5c);
    *(undefined4 *)(param_2 + 0x16) = *(undefined4 *)(iVar5 + 0x60);
    *(undefined4 *)(param_2 + 0x1a) = *(undefined4 *)(iVar5 + 100);
    *(undefined4 *)(param_2 + 0x1e) = *(undefined4 *)(iVar5 + 0x68);
    *(undefined4 *)(param_2 + 0x22) = *(undefined4 *)(iVar5 + 0x6c);
    *(undefined4 *)(param_2 + 0x26) = *(undefined4 *)(iVar5 + 0x70);
    pSVar2 = (Security *)SSL::getSecurity(param_1);
    this = (SSL_SESSION *)Security::get_resume(pSVar2);
    puVar6 = (undefined4 *)SSL_SESSION::GetID(this);
    *(undefined4 *)(param_2 + 0x2b) = *puVar6;
    *(undefined4 *)(param_2 + 0x2f) = puVar6[1];
    *(undefined4 *)(param_2 + 0x33) = puVar6[2];
    *(undefined4 *)(param_2 + 0x37) = puVar6[3];
    *(undefined4 *)(param_2 + 0x3b) = puVar6[4];
    *(undefined4 *)(param_2 + 0x3f) = puVar6[5];
    *(undefined4 *)(param_2 + 0x43) = puVar6[6];
    *(undefined4 *)(param_2 + 0x47) = puVar6[7];
  }
  param_2[0x2a] = (ServerHello)0x20;
  SSL::set_sessionID(param_1,(uchar *)(param_2 + 0x2b));
  pSVar2 = (Security *)SSL::getSecurity(param_1);
  iVar5 = Security::get_parms(pSVar2);
  param_2[0x4b] = *(ServerHello *)(iVar5 + 0x2c);
  pSVar2 = (Security *)SSL::getSecurity(param_1);
  iVar5 = Security::get_parms(pSVar2);
  param_2[0x4c] = *(ServerHello *)(iVar5 + 0x2d);
  HandShakeBase::set_length((HandShakeBase *)param_2,0x46);
  return;
}
```
