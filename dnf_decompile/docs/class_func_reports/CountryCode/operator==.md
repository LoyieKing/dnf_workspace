# operator==

`_ZNK11CountryCodeeqES_`

`CountryCode::operator==(CountryCode) const`

| 类 | 地址 |
|---|---|
| `CountryCode` | `0x08ad332e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad332e  _ZNK11CountryCodeeqES_
#           CountryCode::operator==(CountryCode) const
# range [0x08ad332e, 0x08ad3341]
08ad332e +0x00:  push   %ebp
08ad332f +0x01:  mov    %esp,%ebp
08ad3331 +0x03:  mov    0x8(%ebp),%eax
08ad3334 +0x06:  movzbl (%eax),%edx
08ad3337 +0x09:  movzbl 0xc(%ebp),%eax
08ad333b +0x0d:  cmp    %al,%dl
08ad333d +0x0f:  sete   %al
08ad3340 +0x12:  pop    %ebp
08ad3341 +0x13:  ret
```

## 反编译 C

```c
// CountryCode::operator== @ 0x8ad332e

/* DWARF original prototype: bool operator==(CountryCode * this, CountryCode op) */

bool __thiscall CountryCode::operator==(CountryCode *this,CountryCode op)

{
  return this->idx_ == op.idx_;
}
```
