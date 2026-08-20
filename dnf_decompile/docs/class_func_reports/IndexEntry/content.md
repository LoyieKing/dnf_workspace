# content

`_ZNK10IndexEntry7contentEv`

`IndexEntry::content() const`

| 类 | 地址 |
|---|---|
| `IndexEntry` | `0x08ac3ea0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ac3ea0  _ZNK10IndexEntry7contentEv
#           IndexEntry::content() const
# range [0x08ac3ea0, 0x08ac3eab]
08ac3ea0 +0x00:  push   %ebp
08ac3ea1 +0x01:  mov    %esp,%ebp
08ac3ea3 +0x03:  mov    0x8(%ebp),%eax
08ac3ea6 +0x06:  mov    0x18(%eax),%eax
08ac3ea9 +0x09:  pop    %ebp
08ac3eaa +0x0a:  ret
08ac3eab +0x0b:  nop
```

## 反编译 C

```c
// IndexEntry::content @ 0x8ac3ea0

/* DWARF original prototype: uchar * content(IndexEntry * this) */

uchar * __thiscall IndexEntry::content(IndexEntry *this)

{
  return this->content_;
}
```
