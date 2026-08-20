# operator=

`_ZN10WideStringaSERKSbIwSt11char_traitsIwESaIwEE`

`WideString::operator=(std::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> > const&)`

| 类 | 地址 |
|---|---|
| `WideString` | `0x08ada15a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ada15a  _ZN10WideStringaSERKSbIwSt11char_traitsIwESaIwEE
#           WideString::operator=(std::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> > const&)
# range [0x08ada15a, 0x08ada195]
08ada15a +0x00:  push   %ebp
08ada15b +0x01:  mov    %esp,%ebp
08ada15d +0x03:  push   %ebx
08ada15e +0x04:  sub    $0x14,%esp
08ada161 +0x07:  mov    0xc(%ebp),%eax
08ada164 +0x0a:  mov    %eax,(%esp)
08ada167 +0x0d:  call   0871c1c0 <_GLOBAL__I_wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x6ba4>  ; global constructors keyed to wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x6ba4
08ada16c +0x12:  mov    %eax,%ebx
08ada16e +0x14:  mov    0xc(%ebp),%eax
08ada171 +0x17:  mov    %eax,(%esp)
08ada174 +0x1a:  call   0871c040 <_GLOBAL__I_wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x6a24>  ; global constructors keyed to wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x6a24
08ada179 +0x1f:  mov    %ebx,0x8(%esp)
08ada17d +0x23:  mov    %eax,0x4(%esp)
08ada181 +0x27:  mov    0x8(%ebp),%eax
08ada184 +0x2a:  mov    %eax,(%esp)
08ada187 +0x2d:  call   08ad9fcc <_ZN10WideString6assignEPKwi>  ; WideString::assign(wchar_t const*, int)
08ada18c +0x32:  mov    0x8(%ebp),%eax
08ada18f +0x35:  add    $0x14,%esp
08ada192 +0x38:  pop    %ebx
08ada193 +0x39:  pop    %ebp
08ada194 +0x3a:  ret
08ada195 +0x3b:  nop
```

## 反编译 C

```c
// WideString::operator= @ 0x8ada15a

/* DWARF original prototype: WideString * operator=(WideString * this, wstring * src) */

WideString * __thiscall WideString::operator=(WideString *this,wstring *src)

{
  int32 srcLength;
  wchar *src_00;
  
  srcLength = std::wstring::size((wstring *)src);
  src_00 = (wchar *)std::wstring::c_str((wstring *)src);
  assign(this,src_00,srcLength);
  return this;
}
```
