# SetPasswordCb

`_ZN5yaSSL7SSL_CTX13SetPasswordCbEPFiPciiPvE`

`yaSSL::SSL_CTX::SetPasswordCb(int (*)(char*, int, int, void*))`

| 类 | 地址 |
|---|---|
| `yaSSL::SSL_CTX` | `0x0874e4f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874e4f0  _ZN5yaSSL7SSL_CTX13SetPasswordCbEPFiPciiPvE
#           yaSSL::SSL_CTX::SetPasswordCb(int (*)(char*, int, int, void*))
# range [0x0874e4f0, 0x0874e509]
0874e4f0 +0x00:  push   %ebp
0874e4f1 +0x01:  mov    %esp,%ebp
0874e4f3 +0x03:  mov    0xc(%ebp),%edx
0874e4f6 +0x06:  mov    0x8(%ebp),%eax
0874e4f9 +0x09:  mov    %edx,0xac(%eax)
0874e4ff +0x0f:  pop    %ebp
0874e500 +0x10:  ret
0874e501 +0x11:  nop
0874e502 +0x12:  lea    0x0(%esi,%eiz,1),%esi
0874e509 +0x19:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::SSL_CTX::SetPasswordCb @ 0x874e4f0

/* yaSSL::SSL_CTX::SetPasswordCb(int (*)(char*, int, int, void*)) */

void __thiscall
yaSSL::SSL_CTX::SetPasswordCb(SSL_CTX *this,_func_int_char_ptr_int_int_void_ptr *param_1)

{
  *(_func_int_char_ptr_int_int_void_ptr **)(this + 0xac) = param_1;
  return;
}
```
