# seed

`_ZN8XorRand84seedEy`

`XorRand8::seed(unsigned long long)`

| 类 | 地址 |
|---|---|
| `XorRand8` | `0x08adfcca` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08adfcca  _ZN8XorRand84seedEy
#           XorRand8::seed(unsigned long long)
# range [0x08adfcca, 0x08adfceb]
08adfcca +0x00:  push   %ebp
08adfccb +0x01:  mov    %esp,%ebp
08adfccd +0x03:  sub    $0x8,%esp
08adfcd0 +0x06:  mov    0xc(%ebp),%eax
08adfcd3 +0x09:  mov    %eax,-0x8(%ebp)
08adfcd6 +0x0c:  mov    0x10(%ebp),%eax
08adfcd9 +0x0f:  mov    %eax,-0x4(%ebp)
08adfcdc +0x12:  mov    0x8(%ebp),%ecx
08adfcdf +0x15:  mov    -0x8(%ebp),%eax
08adfce2 +0x18:  mov    -0x4(%ebp),%edx
08adfce5 +0x1b:  mov    %eax,(%ecx)
08adfce7 +0x1d:  mov    %edx,0x4(%ecx)
08adfcea +0x20:  leave
08adfceb +0x21:  ret
```

## 反编译 C

```c
// XorRand8::seed @ 0x8adfcca

/* DWARF original prototype: void seed(XorRand8 * this, uint64 seed) */

void __thiscall XorRand8::seed(XorRand8 *this,uint64 seed)

{
  this->m_counter = seed;
  return;
}
```
