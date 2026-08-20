# offset

`_ZNK10IndexEntry6offsetEv`

`IndexEntry::offset() const`

| 类 | 地址 |
|---|---|
| `IndexEntry` | `0x08ac3e94` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ac3e94  _ZNK10IndexEntry6offsetEv
#           IndexEntry::offset() const
# range [0x08ac3e94, 0x08ac3e9f]
08ac3e94 +0x00:  push   %ebp
08ac3e95 +0x01:  mov    %esp,%ebp
08ac3e97 +0x03:  mov    0x8(%ebp),%eax
08ac3e9a +0x06:  mov    0x14(%eax),%eax
08ac3e9d +0x09:  pop    %ebp
08ac3e9e +0x0a:  ret
08ac3e9f +0x0b:  nop
```

## 反编译 C

```c
// IndexEntry::offset @ 0x8ac3e94

/* DWARF original prototype: uint offset(IndexEntry * this) */

uint __thiscall IndexEntry::offset(IndexEntry *this)

{
  return this->offset_;
}
```
