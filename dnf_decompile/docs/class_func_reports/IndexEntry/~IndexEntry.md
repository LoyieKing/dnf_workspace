# ~IndexEntry

`_ZN10IndexEntryD1Ev`

`IndexEntry::~IndexEntry()`

| 类 | 地址 |
|---|---|
| `IndexEntry` | `0x08ac3e04` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ac3e04  _ZN10IndexEntryD1Ev
#           IndexEntry::~IndexEntry()
# range [0x08ac3e04, 0x08ac3e19]
08ac3e04 +0x00:  push   %ebp
08ac3e05 +0x01:  mov    %esp,%ebp
08ac3e07 +0x03:  sub    $0x18,%esp
08ac3e0a +0x06:  mov    0x8(%ebp),%eax
08ac3e0d +0x09:  add    $0x4,%eax
08ac3e10 +0x0c:  mov    %eax,(%esp)
08ac3e13 +0x0f:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08ac3e18 +0x14:  leave
08ac3e19 +0x15:  ret
```

## 反编译 C

```c
// IndexEntry::~IndexEntry @ 0x8ac3e04

/* DWARF original prototype: void ~IndexEntry(IndexEntry * this, int __in_chrg) */

void __thiscall IndexEntry::~IndexEntry(IndexEntry *this,int __in_chrg)

{
  std::string::~string((string *)&this->name_);
  return;
}
```
