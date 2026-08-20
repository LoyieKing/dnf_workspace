# seed

`_ZN8XorRand44seedEj`

`XorRand4::seed(unsigned int)`

| 类 | 地址 |
|---|---|
| `XorRand4` | `0x08adfaac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08adfaac  _ZN8XorRand44seedEj
#           XorRand4::seed(unsigned int)
# range [0x08adfaac, 0x08adfab9]
08adfaac +0x00:  push   %ebp
08adfaad +0x01:  mov    %esp,%ebp
08adfaaf +0x03:  mov    0x8(%ebp),%eax
08adfab2 +0x06:  mov    0xc(%ebp),%edx
08adfab5 +0x09:  mov    %edx,(%eax)
08adfab7 +0x0b:  pop    %ebp
08adfab8 +0x0c:  ret
08adfab9 +0x0d:  nop
```

## 反编译 C

```c
// XorRand4::seed @ 0x8adfaac

/* DWARF original prototype: void seed(XorRand4 * this, uint32 seed) */

void __thiscall XorRand4::seed(XorRand4 *this,uint32 seed)

{
  this->m_counter = seed;
  return;
}
```
