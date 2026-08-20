# GetPasswordCb

`_ZNK5yaSSL7SSL_CTX13GetPasswordCbEv`

`yaSSL::SSL_CTX::GetPasswordCb() const`

| 类 | 地址 |
|---|---|
| `yaSSL::SSL_CTX` | `0x0874e4e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874e4e0  _ZNK5yaSSL7SSL_CTX13GetPasswordCbEv
#           yaSSL::SSL_CTX::GetPasswordCb() const
# range [0x0874e4e0, 0x0874e4ee]
0874e4e0 +0x00:  push   %ebp
0874e4e1 +0x01:  mov    %esp,%ebp
0874e4e3 +0x03:  mov    0x8(%ebp),%eax
0874e4e6 +0x06:  pop    %ebp
0874e4e7 +0x07:  mov    0xac(%eax),%eax
0874e4ed +0x0d:  ret
0874e4ee +0x0e:  xchg   %ax,%ax
```

## 反编译 C

```c
// yaSSL::SSL_CTX::GetPasswordCb @ 0x874e4e0

/* yaSSL::SSL_CTX::GetPasswordCb() const */

undefined4 __thiscall yaSSL::SSL_CTX::GetPasswordCb(SSL_CTX *this)

{
  return *(undefined4 *)(this + 0xac);
}
```
