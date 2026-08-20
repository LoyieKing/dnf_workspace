# isNone

`_ZNK11CountryCode6isNoneEv`

`CountryCode::isNone() const`

| 类 | 地址 |
|---|---|
| `CountryCode` | `0x08ad318a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad318a  _ZNK11CountryCode6isNoneEv
#           CountryCode::isNone() const
# range [0x08ad318a, 0x08ad3199]
08ad318a +0x00:  push   %ebp
08ad318b +0x01:  mov    %esp,%ebp
08ad318d +0x03:  mov    0x8(%ebp),%eax
08ad3190 +0x06:  movzbl (%eax),%eax
08ad3193 +0x09:  test   %al,%al
08ad3195 +0x0b:  sete   %al
08ad3198 +0x0e:  pop    %ebp
08ad3199 +0x0f:  ret
```

## 反编译 C

```c
// CountryCode::isNone @ 0x8ad318a

/* DWARF original prototype: bool isNone(CountryCode * this) */

bool __thiscall CountryCode::isNone(CountryCode *this)

{
  return this->idx_ == '\0';
}
```
