# max

`_ZNK8XorRand83maxEv`

`XorRand8::max() const`

| 类 | 地址 |
|---|---|
| `XorRand8` | `0x08adfe90` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08adfe90  _ZNK8XorRand83maxEv
#           XorRand8::max() const
# range [0x08adfe90, 0x08adfe9f]
08adfe90 +0x00:  push   %ebp
08adfe91 +0x01:  mov    %esp,%ebp
08adfe93 +0x03:  mov    $0xffffffff,%eax
08adfe98 +0x08:  mov    $0xffffffff,%edx
08adfe9d +0x0d:  pop    %ebp
08adfe9e +0x0e:  ret
08adfe9f +0x0f:  nop
```

## 反编译 C

```c
// XorRand8::max @ 0x8adfe90

/* DWARF original prototype: uint64 max(XorRand8 * this) */

uint64 __thiscall XorRand8::max(XorRand8 *this)

{
  return 0xffffffffffffffff;
}
```
