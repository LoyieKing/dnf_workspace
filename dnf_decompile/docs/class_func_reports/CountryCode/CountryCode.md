# CountryCode

`_ZN11CountryCodeC1Ev`

`CountryCode::CountryCode()`

| 类 | 地址 |
|---|---|
| `CountryCode` | `0x08ad2fa4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad2fa4  _ZN11CountryCodeC1Ev
#           CountryCode::CountryCode()
# range [0x08ad2fa4, 0x08ad2faf]
08ad2fa4 +0x00:  push   %ebp
08ad2fa5 +0x01:  mov    %esp,%ebp
08ad2fa7 +0x03:  mov    0x8(%ebp),%eax
08ad2faa +0x06:  movb   $0x0,(%eax)
08ad2fad +0x09:  pop    %ebp
08ad2fae +0x0a:  ret
08ad2faf +0x0b:  nop
```

## 反编译 C

```c
// CountryCode::CountryCode @ 0x8ad2fa4

/* DWARF original prototype: void CountryCode(CountryCode * this) */

void __thiscall CountryCode::CountryCode(CountryCode *this)

{
  this->idx_ = '\0';
  return;
}
```
