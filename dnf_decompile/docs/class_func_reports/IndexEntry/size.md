# size

`_ZNK10IndexEntry4sizeEv`

`IndexEntry::size() const`

| 类 | 地址 |
|---|---|
| `IndexEntry` | `0x08ac3e70` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ac3e70  _ZNK10IndexEntry4sizeEv
#           IndexEntry::size() const
# range [0x08ac3e70, 0x08ac3e7b]
08ac3e70 +0x00:  push   %ebp
08ac3e71 +0x01:  mov    %esp,%ebp
08ac3e73 +0x03:  mov    0x8(%ebp),%eax
08ac3e76 +0x06:  mov    0x8(%eax),%eax
08ac3e79 +0x09:  pop    %ebp
08ac3e7a +0x0a:  ret
08ac3e7b +0x0b:  nop
```

## 反编译 C

```c
// IndexEntry::size @ 0x8ac3e70

/* DWARF original prototype: uint size(IndexEntry * this) */

uint __thiscall IndexEntry::size(IndexEntry *this)

{
  return this->size_;
}
```
