# IndexEntry

`_ZN10IndexEntryC1Ev`

`IndexEntry::IndexEntry()`

| 类 | 地址 |
|---|---|
| `IndexEntry` | `0x08ac3de2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ac3de2  _ZN10IndexEntryC1Ev
#           IndexEntry::IndexEntry()
# range [0x08ac3de2, 0x08ac3e03]
08ac3de2 +0x00:  push   %ebp
08ac3de3 +0x01:  mov    %esp,%ebp
08ac3de5 +0x03:  sub    $0x18,%esp
08ac3de8 +0x06:  mov    0x8(%ebp),%eax
08ac3deb +0x09:  add    $0x4,%eax
08ac3dee +0x0c:  mov    %eax,(%esp)
08ac3df1 +0x0f:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
08ac3df6 +0x14:  mov    0x8(%ebp),%eax
08ac3df9 +0x17:  mov    %eax,(%esp)
08ac3dfc +0x1a:  call   08ac3e1a <_ZN10IndexEntry5clearEv>  ; IndexEntry::clear()
08ac3e01 +0x1f:  leave
08ac3e02 +0x20:  ret
08ac3e03 +0x21:  nop
```

## 反编译 C

```c
// IndexEntry::IndexEntry @ 0x8ac3de2

/* DWARF original prototype: void IndexEntry(IndexEntry * this) */

void __thiscall IndexEntry::IndexEntry(IndexEntry *this)

{
  std::string::string((string *)&this->name_);
  clear(this);
  return;
}
```
