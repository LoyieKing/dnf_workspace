# GetStats

`_ZNK5yaSSL7SSL_CTX8GetStatsEv`

`yaSSL::SSL_CTX::GetStats() const`

| 类 | 地址 |
|---|---|
| `yaSSL::SSL_CTX` | `0x0874e4d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874e4d0  _ZNK5yaSSL7SSL_CTX8GetStatsEv
#           yaSSL::SSL_CTX::GetStats() const
# range [0x0874e4d0, 0x0874e4de]
0874e4d0 +0x00:  push   %ebp
0874e4d1 +0x01:  mov    %esp,%ebp
0874e4d3 +0x03:  mov    0x8(%ebp),%eax
0874e4d6 +0x06:  pop    %ebp
0874e4d7 +0x07:  add    $0xb8,%eax
0874e4dc +0x0c:  ret
0874e4dd +0x0d:  nop
0874e4de +0x0e:  xchg   %ax,%ax
```

## 反编译 C

```c
// yaSSL::SSL_CTX::GetStats @ 0x874e4d0

/* yaSSL::SSL_CTX::GetStats() const */

SSL_CTX * __thiscall yaSSL::SSL_CTX::GetStats(SSL_CTX *this)

{
  return this + 0xb8;
}
```
