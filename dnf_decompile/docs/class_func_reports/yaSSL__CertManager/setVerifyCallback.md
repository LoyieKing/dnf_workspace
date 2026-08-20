# setVerifyCallback

`_ZN5yaSSL11CertManager17setVerifyCallbackEPFiiPNS_14X509_STORE_CTXEE`

`yaSSL::CertManager::setVerifyCallback(int (*)(int, yaSSL::X509_STORE_CTX*))`

| 类 | 地址 |
|---|---|
| `yaSSL::CertManager` | `0x08797480` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08797480  _ZN5yaSSL11CertManager17setVerifyCallbackEPFiiPNS_14X509_STORE_CTXEE
#           yaSSL::CertManager::setVerifyCallback(int (*)(int, yaSSL::X509_STORE_CTX*))
# range [0x08797480, 0x0879748e]
08797480 +0x00:  push   %ebp
08797481 +0x01:  mov    %esp,%ebp
08797483 +0x03:  mov    0xc(%ebp),%edx
08797486 +0x06:  mov    0x8(%ebp),%eax
08797489 +0x09:  mov    %edx,0x54(%eax)
0879748c +0x0c:  pop    %ebp
0879748d +0x0d:  ret
0879748e +0x0e:  xchg   %ax,%ax
```

## 反编译 C

```c
// yaSSL::CertManager::setVerifyCallback @ 0x8797480

/* yaSSL::CertManager::setVerifyCallback(int (*)(int, yaSSL::X509_STORE_CTX*)) */

void __thiscall
yaSSL::CertManager::setVerifyCallback(CertManager *this,_func_int_int_X509_STORE_CTX_ptr *param_1)

{
  *(_func_int_int_X509_STORE_CTX_ptr **)(this + 0x54) = param_1;
  return;
}
```
