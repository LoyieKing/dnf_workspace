# setDigest

`_ZN5yaSSL6Crypto9setDigestEPNS_6DigestE`

`yaSSL::Crypto::setDigest(yaSSL::Digest*)`

| 类 | 地址 |
|---|---|
| `yaSSL::Crypto` | `0x0874e810` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874e810  _ZN5yaSSL6Crypto9setDigestEPNS_6DigestE
#           yaSSL::Crypto::setDigest(yaSSL::Digest*)
# range [0x0874e810, 0x0874e81e]
0874e810 +0x00:  push   %ebp
0874e811 +0x01:  mov    %esp,%ebp
0874e813 +0x03:  mov    0xc(%ebp),%edx
0874e816 +0x06:  mov    0x8(%ebp),%eax
0874e819 +0x09:  mov    %edx,(%eax)
0874e81b +0x0b:  pop    %ebp
0874e81c +0x0c:  ret
0874e81d +0x0d:  nop
0874e81e +0x0e:  xchg   %ax,%ax
```

## 反编译 C

```c
// yaSSL::Crypto::setDigest @ 0x874e810

/* yaSSL::Crypto::setDigest(yaSSL::Digest*) */

void __thiscall yaSSL::Crypto::setDigest(Crypto *this,Digest *param_1)

{
  *(Digest **)this = param_1;
  return;
}
```
