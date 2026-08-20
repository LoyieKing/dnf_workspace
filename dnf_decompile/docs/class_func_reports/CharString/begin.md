# begin

`_ZNK10CharString5beginEv`

`CharString::begin() const`

| 类 | 地址 |
|---|---|
| `CharString` | `0x08ad6f18` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad6f18  _ZNK10CharString5beginEv
#           CharString::begin() const
# range [0x08ad6f18, 0x08ad6f21]
08ad6f18 +0x00:  push   %ebp
08ad6f19 +0x01:  mov    %esp,%ebp
08ad6f1b +0x03:  mov    0x8(%ebp),%eax
08ad6f1e +0x06:  mov    (%eax),%eax
08ad6f20 +0x08:  pop    %ebp
08ad6f21 +0x09:  ret
```

## 反编译 C

```c
// CharString::begin @ 0x8ad6f18

/* DWARF original prototype: const_iterator begin(CharString * this) */

const_iterator __thiscall CharString::begin(CharString *this)

{
  return this->buffer_;
}
```
