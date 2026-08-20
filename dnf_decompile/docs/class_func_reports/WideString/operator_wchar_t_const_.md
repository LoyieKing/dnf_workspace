# operator wchar_t const*

`_ZNK10WideStringcvPKwEv`

`WideString::operator wchar_t const*() const`

| 类 | 地址 |
|---|---|
| `WideString` | `0x08ada114` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ada114  _ZNK10WideStringcvPKwEv
#           WideString::operator wchar_t const*() const
# range [0x08ada114, 0x08ada11d]
08ada114 +0x00:  push   %ebp
08ada115 +0x01:  mov    %esp,%ebp
08ada117 +0x03:  mov    0x8(%ebp),%eax
08ada11a +0x06:  mov    (%eax),%eax
08ada11c +0x08:  pop    %ebp
08ada11d +0x09:  ret
```

## 反编译 C

```c
// WideString::operator @ 0x8ada114

/* DWARF original name: operator const wchar*
   DWARF original prototype: wchar * operator_const_wchar*(WideString * this) */

wchar * __thiscall WideString::operator_const_wchar_(WideString *this)

{
  return this->buffer_;
}
```
