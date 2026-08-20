# ~CharString

`_ZN10CharStringD1Ev`

`CharString::~CharString()`

| 类 | 地址 |
|---|---|
| `CharString` | `0x08ad6bba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad6bba  _ZN10CharStringD1Ev
#           CharString::~CharString()
# range [0x08ad6bba, 0x08ad6bd5]
08ad6bba +0x00:  push   %ebp
08ad6bbb +0x01:  mov    %esp,%ebp
08ad6bbd +0x03:  sub    $0x18,%esp
08ad6bc0 +0x06:  mov    0x8(%ebp),%eax
08ad6bc3 +0x09:  mov    %eax,(%esp)
08ad6bc6 +0x0c:  call   08ad71bc <_ZNK10CharString7getDataEv>  ; CharString::getData() const
08ad6bcb +0x11:  mov    %eax,(%esp)
08ad6bce +0x14:  call   08ad6890 <_ZN10StringData6decRefEv>  ; StringData::decRef()
08ad6bd3 +0x19:  leave
08ad6bd4 +0x1a:  ret
08ad6bd5 +0x1b:  nop
```

## 反编译 C

```c
// CharString::~CharString @ 0x8ad6bba

/* DWARF original prototype: void ~CharString(CharString * this, int __in_chrg) */

void __thiscall CharString::~CharString(CharString *this,int __in_chrg)

{
  StringData *this_00;
  
  this_00 = &getData(this)->super_StringData;
  StringData::decRef(this_00);
  return;
}
```
