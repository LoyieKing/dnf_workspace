# clear

`_ZN10IndexEntry5clearEv`

`IndexEntry::clear()`

| 类 | 地址 |
|---|---|
| `IndexEntry` | `0x08ac3e1a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ac3e1a  _ZN10IndexEntry5clearEv
#           IndexEntry::clear()
# range [0x08ac3e1a, 0x08ac3e59]
08ac3e1a +0x00:  push   %ebp
08ac3e1b +0x01:  mov    %esp,%ebp
08ac3e1d +0x03:  mov    0x8(%ebp),%eax
08ac3e20 +0x06:  movl   $0x0,(%eax)
08ac3e26 +0x0c:  mov    0x8(%ebp),%eax
08ac3e29 +0x0f:  movl   $0x0,0x8(%eax)
08ac3e30 +0x16:  mov    0x8(%ebp),%eax
08ac3e33 +0x19:  movl   $0x0,0xc(%eax)
08ac3e3a +0x20:  mov    0x8(%ebp),%eax
08ac3e3d +0x23:  movl   $0x0,0x10(%eax)
08ac3e44 +0x2a:  mov    0x8(%ebp),%eax
08ac3e47 +0x2d:  movl   $0x0,0x14(%eax)
08ac3e4e +0x34:  mov    0x8(%ebp),%eax
08ac3e51 +0x37:  movl   $0x0,0x18(%eax)
08ac3e58 +0x3e:  pop    %ebp
08ac3e59 +0x3f:  ret
```

## 反编译 C

```c
// IndexEntry::clear @ 0x8ac3e1a

/* DWARF original prototype: void clear(IndexEntry * this) */

void __thiscall IndexEntry::clear(IndexEntry *this)

{
  this->type_ = ENTRY_PACK;
  this->size_ = 0;
  this->aligned_size_ = 0;
  this->crc_ = 0;
  this->offset_ = 0;
  this->content_ = (uchar *)0x0;
  return;
}
```
