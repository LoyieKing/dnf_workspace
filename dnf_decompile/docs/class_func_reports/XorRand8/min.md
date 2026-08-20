# min

`_ZNK8XorRand83minEv`

`XorRand8::min() const`

| 类 | 地址 |
|---|---|
| `XorRand8` | `0x08adfe80` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08adfe80  _ZNK8XorRand83minEv
#           XorRand8::min() const
# range [0x08adfe80, 0x08adfe8f]
08adfe80 +0x00:  push   %ebp
08adfe81 +0x01:  mov    %esp,%ebp
08adfe83 +0x03:  mov    $0x0,%eax
08adfe88 +0x08:  mov    $0x0,%edx
08adfe8d +0x0d:  pop    %ebp
08adfe8e +0x0e:  ret
08adfe8f +0x0f:  nop
```

## 反编译 C

```c
// XorRand8::min @ 0x8adfe80

/* DWARF original prototype: uint64 min(XorRand8 * this) */

uint64 __thiscall XorRand8::min(XorRand8 *this)

{
  return 0;
}
```
