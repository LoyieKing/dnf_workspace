# name

`_ZNK10IndexEntry4nameEv`

`IndexEntry::name() const`

| 类 | 地址 |
|---|---|
| `IndexEntry` | `0x08ac3e64` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ac3e64  _ZNK10IndexEntry4nameEv
#           IndexEntry::name() const
# range [0x08ac3e64, 0x08ac3e6f]
08ac3e64 +0x00:  push   %ebp
08ac3e65 +0x01:  mov    %esp,%ebp
08ac3e67 +0x03:  mov    0x8(%ebp),%eax
08ac3e6a +0x06:  add    $0x4,%eax
08ac3e6d +0x09:  pop    %ebp
08ac3e6e +0x0a:  ret
08ac3e6f +0x0b:  nop
```

## 反编译 C

```c
// IndexEntry::name @ 0x8ac3e64

/* DWARF original prototype: tstring * name(IndexEntry * this) */

tstring * __thiscall IndexEntry::name(IndexEntry *this)

{
  return &this->name_;
}
```
