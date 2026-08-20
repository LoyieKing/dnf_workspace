# min

`_ZNK8XorRand43minEv`

`XorRand4::min() const`

| 类 | 地址 |
|---|---|
| `XorRand4` | `0x08adfb50` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08adfb50  _ZNK8XorRand43minEv
#           XorRand4::min() const
# range [0x08adfb50, 0x08adfb59]
08adfb50 +0x00:  push   %ebp
08adfb51 +0x01:  mov    %esp,%ebp
08adfb53 +0x03:  mov    $0x0,%eax
08adfb58 +0x08:  pop    %ebp
08adfb59 +0x09:  ret
```

## 反编译 C

```c
// XorRand4::min @ 0x8adfb50

/* DWARF original prototype: uint32 min(XorRand4 * this) */

uint32 __thiscall XorRand4::min(XorRand4 *this)

{
  return 0;
}
```
