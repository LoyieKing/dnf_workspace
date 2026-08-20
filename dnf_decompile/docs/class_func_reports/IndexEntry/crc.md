# crc

`_ZNK10IndexEntry3crcEv`

`IndexEntry::crc() const`

| 类 | 地址 |
|---|---|
| `IndexEntry` | `0x08ac3e88` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ac3e88  _ZNK10IndexEntry3crcEv
#           IndexEntry::crc() const
# range [0x08ac3e88, 0x08ac3e93]
08ac3e88 +0x00:  push   %ebp
08ac3e89 +0x01:  mov    %esp,%ebp
08ac3e8b +0x03:  mov    0x8(%ebp),%eax
08ac3e8e +0x06:  mov    0x10(%eax),%eax
08ac3e91 +0x09:  pop    %ebp
08ac3e92 +0x0a:  ret
08ac3e93 +0x0b:  nop
```

## 反编译 C

```c
// IndexEntry::crc @ 0x8ac3e88

/* DWARF original prototype: ulong crc(IndexEntry * this) */

ulong __thiscall IndexEntry::crc(IndexEntry *this)

{
  return this->crc_;
}
```
