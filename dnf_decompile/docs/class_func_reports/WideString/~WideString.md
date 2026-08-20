# ~WideString

`_ZN10WideStringD1Ev`

`WideString::~WideString()`

| 类 | 地址 |
|---|---|
| `WideString` | `0x08ad9c14` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad9c14  _ZN10WideStringD1Ev
#           WideString::~WideString()
# range [0x08ad9c14, 0x08ad9c2f]
08ad9c14 +0x00:  push   %ebp
08ad9c15 +0x01:  mov    %esp,%ebp
08ad9c17 +0x03:  sub    $0x18,%esp
08ad9c1a +0x06:  mov    0x8(%ebp),%eax
08ad9c1d +0x09:  mov    %eax,(%esp)
08ad9c20 +0x0c:  call   08ada214 <_ZNK10WideString7getDataEv>  ; WideString::getData() const
08ad9c25 +0x11:  mov    %eax,(%esp)
08ad9c28 +0x14:  call   08ad6890 <_ZN10StringData6decRefEv>  ; StringData::decRef()
08ad9c2d +0x19:  leave
08ad9c2e +0x1a:  ret
08ad9c2f +0x1b:  nop
```

## 反编译 C

```c
// WideString::~WideString @ 0x8ad9c14

/* DWARF original prototype: void ~WideString(WideString * this, int __in_chrg) */

void __thiscall WideString::~WideString(WideString *this,int __in_chrg)

{
  StringData *this_00;
  
  this_00 = &getData(this)->super_StringData;
  StringData::decRef(this_00);
  return;
}
```
