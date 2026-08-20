# getInt64

`_ZN8XorRand88getInt64Ev`

`XorRand8::getInt64()`

| 类 | 地址 |
|---|---|
| `XorRand8` | `0x08adfcec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08adfcec  _ZN8XorRand88getInt64Ev
#           XorRand8::getInt64()
# range [0x08adfcec, 0x08adfcff]
08adfcec +0x00:  push   %ebp
08adfced +0x01:  mov    %esp,%ebp
08adfcef +0x03:  sub    $0x18,%esp
08adfcf2 +0x06:  mov    0x8(%ebp),%eax
08adfcf5 +0x09:  mov    %eax,(%esp)
08adfcf8 +0x0c:  call   08adfd00 <_ZN8XorRand89getUInt64Ev>  ; XorRand8::getUInt64()
08adfcfd +0x11:  leave
08adfcfe +0x12:  ret
08adfcff +0x13:  nop
```

## 反编译 C

```c
// XorRand8::getInt64 @ 0x8adfcec

/* DWARF original prototype: int64 getInt64(XorRand8 * this) */

int64 __thiscall XorRand8::getInt64(XorRand8 *this)

{
  uint64 uVar1;
  
  uVar1 = getUInt64(this);
  return uVar1;
}
```
