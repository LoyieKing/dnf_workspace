# Process

`_ZN5yaSSL18CertificateRequest7ProcessERNS_12input_bufferERNS_3SSLE`

`yaSSL::CertificateRequest::Process(yaSSL::input_buffer&, yaSSL::SSL&)`

| 类 | 地址 |
|---|---|
| `yaSSL::CertificateRequest` | `0x08748be0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08748be0  _ZN5yaSSL18CertificateRequest7ProcessERNS_12input_bufferERNS_3SSLE
#           yaSSL::CertificateRequest::Process(yaSSL::input_buffer&, yaSSL::SSL&)
# range [0x08748be0, 0x08748c39]
08748be0 +0x00:  push   %ebp
08748be1 +0x01:  mov    %esp,%ebp
08748be3 +0x03:  sub    $0x18,%esp
08748be6 +0x06:  mov    %ebx,-0x8(%ebp)
08748be9 +0x09:  mov    0x10(%ebp),%eax
08748bec +0x0c:  call   08722df8 <__i686.get_pc_thunk.bx>
08748bf1 +0x11:  add    $0xc23fa7,%ebx
08748bf7 +0x17:  mov    %esi,-0x4(%ebp)
08748bfa +0x1a:  mov    %eax,(%esp)
08748bfd +0x1d:  call   0874e2b0 <_ZN5yaSSL3SSL9useCryptoEv>  ; yaSSL::SSL::useCrypto()
08748c02 +0x22:  mov    %eax,(%esp)
08748c05 +0x25:  call   0874e7e0 <_ZN5yaSSL6Crypto15use_certManagerEv>  ; yaSSL::Crypto::use_certManager()
08748c0a +0x2a:  mov    %eax,%esi
08748c0c +0x2c:  mov    %eax,(%esp)
08748c0f +0x2f:  call   08797490 <_ZNK5yaSSL11CertManager8get_certEv>  ; yaSSL::CertManager::get_cert() const
08748c14 +0x34:  test   %eax,%eax
08748c16 +0x36:  je     08748c2c <+0x4c>
08748c18 +0x38:  mov    %esi,(%esp)
08748c1b +0x3b:  call   087977f0 <_ZNK5yaSSL11CertManager14get_privateKeyEv>  ; yaSSL::CertManager::get_privateKey() const
08748c20 +0x40:  test   %eax,%eax
08748c22 +0x42:  je     08748c2c <+0x4c>
08748c24 +0x44:  mov    %esi,(%esp)
08748c27 +0x47:  call   08797470 <_ZN5yaSSL11CertManager13setSendVerifyEv>  ; yaSSL::CertManager::setSendVerify()
08748c2c +0x4c:  mov    -0x8(%ebp),%ebx
08748c2f +0x4f:  mov    -0x4(%ebp),%esi
08748c32 +0x52:  mov    %ebp,%esp
08748c34 +0x54:  pop    %ebp
08748c35 +0x55:  ret
08748c36 +0x56:  lea    0x0(%esi),%esi
08748c39 +0x59:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::CertificateRequest::Process @ 0x8748be0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::CertificateRequest::Process(yaSSL::input_buffer&, yaSSL::SSL&) */

void __thiscall
yaSSL::CertificateRequest::Process(CertificateRequest *this,input_buffer *param_1,SSL *param_2)

{
  Crypto *this_00;
  CertManager *this_01;
  int iVar1;
  
  this_00 = (Crypto *)SSL::useCrypto(param_2);
  this_01 = (CertManager *)Crypto::use_certManager(this_00);
  iVar1 = CertManager::get_cert(this_01);
  if (iVar1 != 0) {
    iVar1 = CertManager::get_privateKey(this_01);
    if (iVar1 != 0) {
      CertManager::setSendVerify(this_01);
    }
  }
  return;
}
```
