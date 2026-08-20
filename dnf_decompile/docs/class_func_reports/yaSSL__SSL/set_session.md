# set_session

`_ZN5yaSSL3SSL11set_sessionEPNS_11SSL_SESSIONE`

`yaSSL::SSL::set_session(yaSSL::SSL_SESSION*)`

| 类 | 地址 |
|---|---|
| `yaSSL::SSL` | `0x08752fe0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08752fe0  _ZN5yaSSL3SSL11set_sessionEPNS_11SSL_SESSIONE
#           yaSSL::SSL::set_session(yaSSL::SSL_SESSION*)
# range [0x08752fe0, 0x0875309a]
08752fe0 +0x00:  push   %ebp
08752fe1 +0x01:  mov    %esp,%ebp
08752fe3 +0x03:  sub    $0x38,%esp
08752fe6 +0x06:  mov    %ebx,-0xc(%ebp)
08752fe9 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
08752fee +0x0e:  add    $0xc19baa,%ebx
08752ff4 +0x14:  mov    %esi,-0x8(%ebp)
08752ff7 +0x17:  mov    0x8(%ebp),%esi
08752ffa +0x1a:  mov    %edi,-0x4(%ebp)
08752ffd +0x1d:  mov    0xc(%ebp),%edi
08753000 +0x20:  mov    %esi,(%esp)
08753003 +0x23:  call   0874e070 <_ZNK5yaSSL3SSL11getSecurityEv>  ; yaSSL::SSL::getSecurity() const
08753008 +0x28:  mov    %eax,(%esp)
0875300b +0x2b:  call   0874ea00 <_ZNK5yaSSL8Security10GetContextEv>  ; yaSSL::Security::GetContext() const
08753010 +0x30:  mov    %eax,(%esp)
08753013 +0x33:  call   0874e520 <_ZNK5yaSSL7SSL_CTX18GetSessionCacheOffEv>  ; yaSSL::SSL_CTX::GetSessionCacheOff() const
08753018 +0x38:  test   %al,%al
0875301a +0x3a:  jne    0875308c <+0xac>
0875301c +0x3c:  test   %edi,%edi
0875301e +0x3e:  je     0875308c <+0xac>
08753020 +0x40:  lea    0x68(%esi),%edx
08753023 +0x43:  mov    %edx,(%esp)
08753026 +0x46:  mov    %edx,-0x20(%ebp)
08753029 +0x49:  call   0874efb0 <_ZN5yaSSL8Security10use_resumeEv>  ; yaSSL::Security::use_resume()
0875302e +0x4e:  mov    %edi,(%esp)
08753031 +0x51:  mov    %eax,-0x24(%ebp)
08753034 +0x54:  call   0874e320 <_ZNK5yaSSL11SSL_SESSION5GetIDEv>  ; yaSSL::SSL_SESSION::GetID() const
08753039 +0x59:  mov    %eax,-0x1c(%ebp)
0875303c +0x5c:  call   087511a0 <_ZN5yaSSL11GetSessionsEv>  ; yaSSL::GetSessions()
08753041 +0x61:  mov    -0x24(%ebp),%ecx
08753044 +0x64:  mov    %ecx,0x8(%esp)
08753048 +0x68:  mov    -0x1c(%ebp),%ecx
0875304b +0x6b:  mov    %eax,(%esp)
0875304e +0x6e:  mov    %ecx,0x4(%esp)
08753052 +0x72:  call   08752e60 <_ZN5yaSSL8Sessions6lookupEPKhPNS_11SSL_SESSIONE>  ; yaSSL::Sessions::lookup(unsigned char const*, yaSSL::SSL_SESSION*)
08753057 +0x77:  mov    -0x20(%ebp),%edx
0875305a +0x7a:  test   %eax,%eax
0875305c +0x7c:  je     0875308c <+0xac>
0875305e +0x7e:  mov    %edx,(%esp)
08753061 +0x81:  movl   $0x1,0x4(%esp)
08753069 +0x89:  call   0874efc0 <_ZN5yaSSL8Security12set_resumingEb>  ; yaSSL::Security::set_resuming(bool)
0875306e +0x8e:  mov    %edi,(%esp)
08753071 +0x91:  call   0874e350 <_ZNK5yaSSL11SSL_SESSION11GetPeerX509Ev>  ; yaSSL::SSL_SESSION::GetPeerX509() const
08753076 +0x96:  mov    %esi,(%esp)
08753079 +0x99:  mov    %eax,%edi
0875307b +0x9b:  call   0874e7e0 <_ZN5yaSSL6Crypto15use_certManagerEv>  ; yaSSL::Crypto::use_certManager()
08753080 +0xa0:  mov    %edi,0x4(%esp)
08753084 +0xa4:  mov    %eax,(%esp)
08753087 +0xa7:  call   087974e0 <_ZN5yaSSL11CertManager11setPeerX509EPNS_4X509E>  ; yaSSL::CertManager::setPeerX509(yaSSL::X509*)
0875308c +0xac:  mov    -0xc(%ebp),%ebx
0875308f +0xaf:  mov    -0x8(%ebp),%esi
08753092 +0xb2:  mov    -0x4(%ebp),%edi
08753095 +0xb5:  mov    %ebp,%esp
08753097 +0xb7:  pop    %ebp
08753098 +0xb8:  ret
08753099 +0xb9:  nop
0875309a +0xba:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::SSL::set_session @ 0x8752fe0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL::set_session(yaSSL::SSL_SESSION*) */

void __thiscall yaSSL::SSL::set_session(SSL *this,SSL_SESSION *param_1)

{
  char cVar1;
  Security *this_00;
  SSL_CTX *this_01;
  SSL_SESSION *pSVar2;
  uchar *puVar3;
  Sessions *this_02;
  int iVar4;
  X509 *pXVar5;
  CertManager *this_03;
  
  this_00 = (Security *)getSecurity(this);
  this_01 = (SSL_CTX *)Security::GetContext(this_00);
  cVar1 = SSL_CTX::GetSessionCacheOff(this_01);
  if ((cVar1 == '\0') && (param_1 != (SSL_SESSION *)0x0)) {
    pSVar2 = (SSL_SESSION *)Security::use_resume((Security *)(this + 0x68));
    puVar3 = (uchar *)SSL_SESSION::GetID(param_1);
    this_02 = (Sessions *)GetSessions();
    iVar4 = Sessions::lookup(this_02,puVar3,pSVar2);
    if (iVar4 != 0) {
      Security::set_resuming((Security *)(this + 0x68),true);
      pXVar5 = (X509 *)SSL_SESSION::GetPeerX509(param_1);
      this_03 = (CertManager *)Crypto::use_certManager((Crypto *)this);
      CertManager::setPeerX509(this_03,pXVar5);
    }
  }
  return;
}
```
