# aligned_size

`_ZNK10IndexEntry12aligned_sizeEv`

`IndexEntry::aligned_size() const`

| 类 | 地址 |
|---|---|
| `IndexEntry` | `0x08ac3e7c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ac3e7c  _ZNK10IndexEntry12aligned_sizeEv
#           IndexEntry::aligned_size() const
# range [0x08ac3e7c, 0x08ac3e87]
08ac3e7c +0x00:  push   %ebp
08ac3e7d +0x01:  mov    %esp,%ebp
08ac3e7f +0x03:  mov    0x8(%ebp),%eax
08ac3e82 +0x06:  mov    0xc(%eax),%eax
08ac3e85 +0x09:  pop    %ebp
08ac3e86 +0x0a:  ret
08ac3e87 +0x0b:  nop
```

## 反编译 C

```c
// IndexEntry::aligned_size @ 0x8ac3e7c

/* DWARF original prototype: uint aligned_size(IndexEntry * this) */

uint __thiscall IndexEntry::aligned_size(IndexEntry *this)

{
  return this->aligned_size_;
}
```
