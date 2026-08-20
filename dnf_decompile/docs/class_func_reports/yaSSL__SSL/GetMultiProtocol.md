# GetMultiProtocol

`_ZNK5yaSSL3SSL16GetMultiProtocolEv`

`yaSSL::SSL::GetMultiProtocol() const`

| 类 | 地址 |
|---|---|
| `yaSSL::SSL` | `0x0874ea10` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874ea10  _ZNK5yaSSL3SSL16GetMultiProtocolEv
#           yaSSL::SSL::GetMultiProtocol() const
# range [0x0874ea10, 0x0874ea49]
0874ea10 +0x00:  push   %ebp
0874ea11 +0x01:  mov    %esp,%ebp
0874ea13 +0x03:  push   %ebx
0874ea14 +0x04:  call   08722df8 <__i686.get_pc_thunk.bx>
0874ea19 +0x09:  add    $0xc1e17f,%ebx
0874ea1f +0x0f:  sub    $0x14,%esp
0874ea22 +0x12:  mov    0x8(%ebp),%eax
0874ea25 +0x15:  add    $0x68,%eax
0874ea28 +0x18:  mov    %eax,(%esp)
0874ea2b +0x1b:  call   0874ea00 <_ZNK5yaSSL8Security10GetContextEv>  ; yaSSL::Security::GetContext() const
0874ea30 +0x20:  mov    %eax,(%esp)
0874ea33 +0x23:  call   0874e4a0 <_ZNK5yaSSL7SSL_CTX9getMethodEv>  ; yaSSL::SSL_CTX::getMethod() const
0874ea38 +0x28:  mov    %eax,(%esp)
0874ea3b +0x2b:  call   0874e450 <_ZNK5yaSSL10SSL_METHOD16multipleProtocolEv>  ; yaSSL::SSL_METHOD::multipleProtocol() const
0874ea40 +0x30:  add    $0x14,%esp
0874ea43 +0x33:  pop    %ebx
0874ea44 +0x34:  pop    %ebp
0874ea45 +0x35:  ret
0874ea46 +0x36:  lea    0x0(%esi),%esi
0874ea49 +0x39:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::SSL::GetMultiProtocol @ 0x874ea10

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL::GetMultiProtocol() const */

void __thiscall yaSSL::SSL::GetMultiProtocol(SSL *this)

{
  SSL_CTX *this_00;
  SSL_METHOD *this_01;
  
  this_00 = (SSL_CTX *)Security::GetContext((Security *)(this + 0x68));
  this_01 = (SSL_METHOD *)SSL_CTX::getMethod(this_00);
  SSL_METHOD::multipleProtocol(this_01);
  return;
}
```
