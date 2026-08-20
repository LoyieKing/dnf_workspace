# SetUserData

`_ZN5yaSSL7SSL_CTX11SetUserDataEPv`

`yaSSL::SSL_CTX::SetUserData(void*)`

| 类 | 地址 |
|---|---|
| `yaSSL::SSL_CTX` | `0x0874e540` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874e540  _ZN5yaSSL7SSL_CTX11SetUserDataEPv
#           yaSSL::SSL_CTX::SetUserData(void*)
# range [0x0874e540, 0x0874e559]
0874e540 +0x00:  push   %ebp
0874e541 +0x01:  mov    %esp,%ebp
0874e543 +0x03:  mov    0xc(%ebp),%edx
0874e546 +0x06:  mov    0x8(%ebp),%eax
0874e549 +0x09:  mov    %edx,0xb0(%eax)
0874e54f +0x0f:  pop    %ebp
0874e550 +0x10:  ret
0874e551 +0x11:  nop
0874e552 +0x12:  lea    0x0(%esi,%eiz,1),%esi
0874e559 +0x19:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::SSL_CTX::SetUserData @ 0x874e540

/* yaSSL::SSL_CTX::SetUserData(void*) */

void __thiscall yaSSL::SSL_CTX::SetUserData(SSL_CTX *this,void *param_1)

{
  *(void **)(this + 0xb0) = param_1;
  return;
}
```
