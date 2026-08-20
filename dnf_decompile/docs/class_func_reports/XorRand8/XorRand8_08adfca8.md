# XorRand8

`_ZN8XorRand8C1Ey`

`XorRand8::XorRand8(unsigned long long)`

| 类 | 地址 |
|---|---|
| `XorRand8` | `0x08adfca8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08adfca8  _ZN8XorRand8C1Ey
#           XorRand8::XorRand8(unsigned long long)
# range [0x08adfca8, 0x08adfcc9]
08adfca8 +0x00:  push   %ebp
08adfca9 +0x01:  mov    %esp,%ebp
08adfcab +0x03:  sub    $0x8,%esp
08adfcae +0x06:  mov    0xc(%ebp),%eax
08adfcb1 +0x09:  mov    %eax,-0x8(%ebp)
08adfcb4 +0x0c:  mov    0x10(%ebp),%eax
08adfcb7 +0x0f:  mov    %eax,-0x4(%ebp)
08adfcba +0x12:  mov    0x8(%ebp),%ecx
08adfcbd +0x15:  mov    -0x8(%ebp),%eax
08adfcc0 +0x18:  mov    -0x4(%ebp),%edx
08adfcc3 +0x1b:  mov    %eax,(%ecx)
08adfcc5 +0x1d:  mov    %edx,0x4(%ecx)
08adfcc8 +0x20:  leave
08adfcc9 +0x21:  ret
```

## 反编译 C

```c
// XorRand8::XorRand8 @ 0x8adfca8

/* DWARF original prototype: void XorRand8(XorRand8 * this, uint64 seed) */

void __thiscall XorRand8::XorRand8(XorRand8 *this,uint64 seed)

{
  this->m_counter = seed;
  return;
}
```
