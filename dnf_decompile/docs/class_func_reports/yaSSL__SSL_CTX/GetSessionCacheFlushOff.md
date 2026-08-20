# GetSessionCacheFlushOff

`_ZNK5yaSSL7SSL_CTX23GetSessionCacheFlushOffEv`

`yaSSL::SSL_CTX::GetSessionCacheFlushOff() const`

| 类 | 地址 |
|---|---|
| `yaSSL::SSL_CTX` | `0x0874e530` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874e530  _ZNK5yaSSL7SSL_CTX23GetSessionCacheFlushOffEv
#           yaSSL::SSL_CTX::GetSessionCacheFlushOff() const
# range [0x0874e530, 0x0874e53f]
0874e530 +0x00:  push   %ebp
0874e531 +0x01:  mov    %esp,%ebp
0874e533 +0x03:  mov    0x8(%ebp),%eax
0874e536 +0x06:  pop    %ebp
0874e537 +0x07:  movzbl 0xb5(%eax),%eax
0874e53e +0x0e:  ret
0874e53f +0x0f:  nop
```

## 反编译 C

```c
// yaSSL::SSL_CTX::GetSessionCacheFlushOff @ 0x874e530

/* yaSSL::SSL_CTX::GetSessionCacheFlushOff() const */

SSL_CTX __thiscall yaSSL::SSL_CTX::GetSessionCacheFlushOff(SSL_CTX *this)

{
  return this[0xb5];
}
```
