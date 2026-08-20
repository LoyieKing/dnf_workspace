# operator char const*

`_ZNK10CharStringcvPKcEv`

`CharString::operator char const*() const`

| 类 | 地址 |
|---|---|
| `CharString` | `0x08ad70b6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad70b6  _ZNK10CharStringcvPKcEv
#           CharString::operator char const*() const
# range [0x08ad70b6, 0x08ad70bf]
08ad70b6 +0x00:  push   %ebp
08ad70b7 +0x01:  mov    %esp,%ebp
08ad70b9 +0x03:  mov    0x8(%ebp),%eax
08ad70bc +0x06:  mov    (%eax),%eax
08ad70be +0x08:  pop    %ebp
08ad70bf +0x09:  ret
```

## 反编译 C

```c
// CharString::operator @ 0x8ad70b6

/* DWARF original name: operator const char*
   DWARF original prototype: char * operator_const_char*(CharString * this) */

char * __thiscall CharString::operator_const_char_(CharString *this)

{
  return this->buffer_;
}
```
