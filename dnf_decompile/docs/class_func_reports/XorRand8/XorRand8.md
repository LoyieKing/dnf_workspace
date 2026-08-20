# XorRand8

`_ZN8XorRand8C1Ev`

`XorRand8::XorRand8()`

| 类 | 地址 |
|---|---|
| `XorRand8` | `0x08adfc92` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08adfc92  _ZN8XorRand8C1Ev
#           XorRand8::XorRand8()
# range [0x08adfc92, 0x08adfca7]
08adfc92 +0x00:  push   %ebp
08adfc93 +0x01:  mov    %esp,%ebp
08adfc95 +0x03:  mov    0x8(%ebp),%eax
08adfc98 +0x06:  movl   $0x0,(%eax)
08adfc9e +0x0c:  movl   $0x0,0x4(%eax)
08adfca5 +0x13:  pop    %ebp
08adfca6 +0x14:  ret
08adfca7 +0x15:  nop
```

## 反编译 C

```c
// XorRand8::XorRand8 @ 0x8adfc92

/* DWARF original prototype: void XorRand8(XorRand8 * this) */

void __thiscall XorRand8::XorRand8(XorRand8 *this)

{
  *(undefined4 *)&this->m_counter = 0;
  *(undefined4 *)((int)&this->m_counter + 4) = 0;
  return;
}
```
