# operator!=

`_ZNK11CountryCodeneES_`

`CountryCode::operator!=(CountryCode) const`

| 类 | 地址 |
|---|---|
| `CountryCode` | `0x08ad3342` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad3342  _ZNK11CountryCodeneES_
#           CountryCode::operator!=(CountryCode) const
# range [0x08ad3342, 0x08ad3355]
08ad3342 +0x00:  push   %ebp
08ad3343 +0x01:  mov    %esp,%ebp
08ad3345 +0x03:  mov    0x8(%ebp),%eax
08ad3348 +0x06:  movzbl (%eax),%edx
08ad334b +0x09:  movzbl 0xc(%ebp),%eax
08ad334f +0x0d:  cmp    %al,%dl
08ad3351 +0x0f:  setne  %al
08ad3354 +0x12:  pop    %ebp
08ad3355 +0x13:  ret
```

## 反编译 C

```c
// CountryCode::operator!= @ 0x8ad3342

/* DWARF original prototype: bool operator!=(CountryCode * this, CountryCode op) */

bool __thiscall CountryCode::operator!=(CountryCode *this,CountryCode op)

{
  return this->idx_ != op.idx_;
}
```
