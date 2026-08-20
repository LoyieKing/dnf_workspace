# operator=

`_ZN10WideStringaSEPKw`

`WideString::operator=(wchar_t const*)`

| 类 | 地址 |
|---|---|
| `WideString` | `0x08ada11e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ada11e  _ZN10WideStringaSEPKw
#           WideString::operator=(wchar_t const*)
# range [0x08ada11e, 0x08ada13b]
08ada11e +0x00:  push   %ebp
08ada11f +0x01:  mov    %esp,%ebp
08ada121 +0x03:  sub    $0x18,%esp
08ada124 +0x06:  mov    0xc(%ebp),%eax
08ada127 +0x09:  mov    %eax,0x4(%esp)
08ada12b +0x0d:  mov    0x8(%ebp),%eax
08ada12e +0x10:  mov    %eax,(%esp)
08ada131 +0x13:  call   08ad9fa2 <_ZN10WideString6assignEPKw>  ; WideString::assign(wchar_t const*)
08ada136 +0x18:  mov    0x8(%ebp),%eax
08ada139 +0x1b:  leave
08ada13a +0x1c:  ret
08ada13b +0x1d:  nop
```

## 反编译 C

```c
// WideString::operator= @ 0x8ada11e

/* DWARF original prototype: WideString * operator=(WideString * this, wchar * src) */

WideString * __thiscall WideString::operator=(WideString *this,wchar *src)

{
  assign(this,src);
  return this;
}
```
