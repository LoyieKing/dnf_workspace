# getInternalValue

`_ZNK11CountryCode16getInternalValueEv`

`CountryCode::getInternalValue() const`

| 类 | 地址 |
|---|---|
| `CountryCode` | `0x08ad32be` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad32be  _ZNK11CountryCode16getInternalValueEv
#           CountryCode::getInternalValue() const
# range [0x08ad32be, 0x08ad32c9]
08ad32be +0x00:  push   %ebp
08ad32bf +0x01:  mov    %esp,%ebp
08ad32c1 +0x03:  mov    0x8(%ebp),%eax
08ad32c4 +0x06:  movzbl (%eax),%eax
08ad32c7 +0x09:  pop    %ebp
08ad32c8 +0x0a:  ret
08ad32c9 +0x0b:  nop
```

## 反编译 C

```c
// CountryCode::getInternalValue @ 0x8ad32be

/* DWARF original prototype: byte getInternalValue(CountryCode * this) */

byte __thiscall CountryCode::getInternalValue(CountryCode *this)

{
  return this->idx_;
}
```
