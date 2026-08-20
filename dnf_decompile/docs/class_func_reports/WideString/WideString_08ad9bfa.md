# WideString

`_ZN10WideStringC1EP14WideStringData`

`WideString::WideString(WideStringData*)`

| 类 | 地址 |
|---|---|
| `WideString` | `0x08ad9bfa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad9bfa  _ZN10WideStringC1EP14WideStringData
#           WideString::WideString(WideStringData*)
# range [0x08ad9bfa, 0x08ad9c13]
08ad9bfa +0x00:  push   %ebp
08ad9bfb +0x01:  mov    %esp,%ebp
08ad9bfd +0x03:  sub    $0x18,%esp
08ad9c00 +0x06:  mov    0xc(%ebp),%eax
08ad9c03 +0x09:  mov    %eax,0x4(%esp)
08ad9c07 +0x0d:  mov    0x8(%ebp),%eax
08ad9c0a +0x10:  mov    %eax,(%esp)
08ad9c0d +0x13:  call   08ada1b4 <_ZN10WideString10attachDataEP14WideStringData>  ; WideString::attachData(WideStringData*)
08ad9c12 +0x18:  leave
08ad9c13 +0x19:  ret
```

## 反编译 C

```c
// WideString::WideString @ 0x8ad9bfa

/* DWARF original prototype: void WideString(WideString * this, WideStringData * newData) */

void __thiscall WideString::WideString(WideString *this,WideStringData *newData)

{
  attachData(this,newData);
  return;
}
```
