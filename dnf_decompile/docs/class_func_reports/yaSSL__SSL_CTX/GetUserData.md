# GetUserData

`_ZNK5yaSSL7SSL_CTX11GetUserDataEv`

`yaSSL::SSL_CTX::GetUserData() const`

| 类 | 地址 |
|---|---|
| `yaSSL::SSL_CTX` | `0x0874e510` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874e510  _ZNK5yaSSL7SSL_CTX11GetUserDataEv
#           yaSSL::SSL_CTX::GetUserData() const
# range [0x0874e510, 0x0874e51e]
0874e510 +0x00:  push   %ebp
0874e511 +0x01:  mov    %esp,%ebp
0874e513 +0x03:  mov    0x8(%ebp),%eax
0874e516 +0x06:  pop    %ebp
0874e517 +0x07:  mov    0xb0(%eax),%eax
0874e51d +0x0d:  ret
0874e51e +0x0e:  xchg   %ax,%ax
```

## 反编译 C

```c
// yaSSL::SSL_CTX::GetUserData @ 0x874e510

/* yaSSL::SSL_CTX::GetUserData() const */

undefined4 __thiscall yaSSL::SSL_CTX::GetUserData(SSL_CTX *this)

{
  return *(undefined4 *)(this + 0xb0);
}
```
