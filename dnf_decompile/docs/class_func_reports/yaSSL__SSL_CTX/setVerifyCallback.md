# setVerifyCallback

`_ZN5yaSSL7SSL_CTX17setVerifyCallbackEPFiiPNS_14X509_STORE_CTXEE`

`yaSSL::SSL_CTX::setVerifyCallback(int (*)(int, yaSSL::X509_STORE_CTX*))`

| 类 | 地址 |
|---|---|
| `yaSSL::SSL_CTX` | `0x0874e610` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874e610  _ZN5yaSSL7SSL_CTX17setVerifyCallbackEPFiiPNS_14X509_STORE_CTXEE
#           yaSSL::SSL_CTX::setVerifyCallback(int (*)(int, yaSSL::X509_STORE_CTX*))
# range [0x0874e610, 0x0874e629]
0874e610 +0x00:  push   %ebp
0874e611 +0x01:  mov    %esp,%ebp
0874e613 +0x03:  mov    0xc(%ebp),%edx
0874e616 +0x06:  mov    0x8(%ebp),%eax
0874e619 +0x09:  mov    %edx,0xf8(%eax)
0874e61f +0x0f:  pop    %ebp
0874e620 +0x10:  ret
0874e621 +0x11:  nop
0874e622 +0x12:  lea    0x0(%esi,%eiz,1),%esi
0874e629 +0x19:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::SSL_CTX::setVerifyCallback @ 0x874e610

/* yaSSL::SSL_CTX::setVerifyCallback(int (*)(int, yaSSL::X509_STORE_CTX*)) */

void __thiscall
yaSSL::SSL_CTX::setVerifyCallback(SSL_CTX *this,_func_int_int_X509_STORE_CTX_ptr *param_1)

{
  *(_func_int_int_X509_STORE_CTX_ptr **)(this + 0xf8) = param_1;
  return;
}
```
