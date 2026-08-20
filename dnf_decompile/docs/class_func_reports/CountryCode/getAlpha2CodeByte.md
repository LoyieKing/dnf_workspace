# getAlpha2CodeByte

`_ZNK11CountryCode17getAlpha2CodeByteEv`

`CountryCode::getAlpha2CodeByte() const`

| 类 | 地址 |
|---|---|
| `CountryCode` | `0x08ad3230` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad3230  _ZNK11CountryCode17getAlpha2CodeByteEv
#           CountryCode::getAlpha2CodeByte() const
# range [0x08ad3230, 0x08ad3245]
08ad3230 +0x00:  push   %ebp
08ad3231 +0x01:  mov    %esp,%ebp
08ad3233 +0x03:  mov    0x8(%ebp),%eax
08ad3236 +0x06:  movzbl (%eax),%eax
08ad3239 +0x09:  movzbl %al,%eax
08ad323c +0x0c:  shl    $0x3,%eax
08ad323f +0x0f:  add    $&_ZL7ccTable,%eax
08ad3244 +0x14:  pop    %ebp
08ad3245 +0x15:  ret
```

## 反编译 C

```c
// CountryCode::getAlpha2CodeByte @ 0x8ad3230

/* DWARF original prototype: byte * getAlpha2CodeByte(CountryCode * this) */

byte * __thiscall CountryCode::getAlpha2CodeByte(CountryCode *this)

{
  return &ccTable[this->idx_].alpha2_1;
}
```
