# XorRand4

`_ZN8XorRand4C1Ej`

`XorRand4::XorRand4(unsigned int)`

| 类 | 地址 |
|---|---|
| `XorRand4` | `0x08adfa9e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08adfa9e  _ZN8XorRand4C1Ej
#           XorRand4::XorRand4(unsigned int)
# range [0x08adfa9e, 0x08adfaab]
08adfa9e +0x00:  push   %ebp
08adfa9f +0x01:  mov    %esp,%ebp
08adfaa1 +0x03:  mov    0x8(%ebp),%eax
08adfaa4 +0x06:  mov    0xc(%ebp),%edx
08adfaa7 +0x09:  mov    %edx,(%eax)
08adfaa9 +0x0b:  pop    %ebp
08adfaaa +0x0c:  ret
08adfaab +0x0d:  nop
```

## 反编译 C

```c
// XorRand4::XorRand4 @ 0x8adfa9e

/* DWARF original prototype: void XorRand4(XorRand4 * this, uint32 seed) */

void __thiscall XorRand4::XorRand4(XorRand4 *this,uint32 seed)

{
  this->m_counter = seed;
  return;
}
```
