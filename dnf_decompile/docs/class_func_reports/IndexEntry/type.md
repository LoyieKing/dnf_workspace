# type

`_ZNK10IndexEntry4typeEv`

`IndexEntry::type() const`

| 类 | 地址 |
|---|---|
| `IndexEntry` | `0x08ac3e5a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ac3e5a  _ZNK10IndexEntry4typeEv
#           IndexEntry::type() const
# range [0x08ac3e5a, 0x08ac3e63]
08ac3e5a +0x00:  push   %ebp
08ac3e5b +0x01:  mov    %esp,%ebp
08ac3e5d +0x03:  mov    0x8(%ebp),%eax
08ac3e60 +0x06:  mov    (%eax),%eax
08ac3e62 +0x08:  pop    %ebp
08ac3e63 +0x09:  ret
```

## 反编译 C

```c
// IndexEntry::type @ 0x8ac3e5a

/* DWARF original prototype: entry_type_t type(IndexEntry * this) */

entry_type_t __thiscall IndexEntry::type(IndexEntry *this)

{
  return this->type_;
}
```
