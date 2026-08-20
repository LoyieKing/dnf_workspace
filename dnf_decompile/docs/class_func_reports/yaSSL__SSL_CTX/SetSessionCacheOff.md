# SetSessionCacheOff

`_ZN5yaSSL7SSL_CTX18SetSessionCacheOffEv`

`yaSSL::SSL_CTX::SetSessionCacheOff()`

| 类 | 地址 |
|---|---|
| `yaSSL::SSL_CTX` | `0x0874e560` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874e560  _ZN5yaSSL7SSL_CTX18SetSessionCacheOffEv
#           yaSSL::SSL_CTX::SetSessionCacheOff()
# range [0x0874e560, 0x0874e56f]
0874e560 +0x00:  push   %ebp
0874e561 +0x01:  mov    %esp,%ebp
0874e563 +0x03:  mov    0x8(%ebp),%eax
0874e566 +0x06:  movb   $0x1,0xb4(%eax)
0874e56d +0x0d:  pop    %ebp
0874e56e +0x0e:  ret
0874e56f +0x0f:  nop
```

## 反编译 C

```c
// yaSSL::SSL_CTX::SetSessionCacheOff @ 0x874e560

/* yaSSL::SSL_CTX::SetSessionCacheOff() */

void __thiscall yaSSL::SSL_CTX::SetSessionCacheOff(SSL_CTX *this)

{
  this[0xb4] = (SSL_CTX)0x1;
  return;
}
```
