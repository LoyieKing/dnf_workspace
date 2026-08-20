# GetSessionCacheOff

`_ZNK5yaSSL7SSL_CTX18GetSessionCacheOffEv`

`yaSSL::SSL_CTX::GetSessionCacheOff() const`

| 类 | 地址 |
|---|---|
| `yaSSL::SSL_CTX` | `0x0874e520` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874e520  _ZNK5yaSSL7SSL_CTX18GetSessionCacheOffEv
#           yaSSL::SSL_CTX::GetSessionCacheOff() const
# range [0x0874e520, 0x0874e52f]
0874e520 +0x00:  push   %ebp
0874e521 +0x01:  mov    %esp,%ebp
0874e523 +0x03:  mov    0x8(%ebp),%eax
0874e526 +0x06:  pop    %ebp
0874e527 +0x07:  movzbl 0xb4(%eax),%eax
0874e52e +0x0e:  ret
0874e52f +0x0f:  nop
```

## 反编译 C

```c
// yaSSL::SSL_CTX::GetSessionCacheOff @ 0x874e520

/* yaSSL::SSL_CTX::GetSessionCacheOff() const */

SSL_CTX __thiscall yaSSL::SSL_CTX::GetSessionCacheOff(SSL_CTX *this)

{
  return this[0xb4];
}
```
