# operator=

`_ZN10CharStringaSERKSs`

`CharString::operator=(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)`

| 类 | 地址 |
|---|---|
| `CharString` | `0x08ad70fc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad70fc  _ZN10CharStringaSERKSs
#           CharString::operator=(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
# range [0x08ad70fc, 0x08ad7137]
08ad70fc +0x00:  push   %ebp
08ad70fd +0x01:  mov    %esp,%ebp
08ad70ff +0x03:  push   %ebx
08ad7100 +0x04:  sub    $0x14,%esp
08ad7103 +0x07:  mov    0xc(%ebp),%eax
08ad7106 +0x0a:  mov    %eax,(%esp)
08ad7109 +0x0d:  call   08706660 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x270>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x270
08ad710e +0x12:  mov    %eax,%ebx
08ad7110 +0x14:  mov    0xc(%ebp),%eax
08ad7113 +0x17:  mov    %eax,(%esp)
08ad7116 +0x1a:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08ad711b +0x1f:  mov    %ebx,0x8(%esp)
08ad711f +0x23:  mov    %eax,0x4(%esp)
08ad7123 +0x27:  mov    0x8(%ebp),%eax
08ad7126 +0x2a:  mov    %eax,(%esp)
08ad7129 +0x2d:  call   08ad6f6c <_ZN10CharString6assignEPKci>  ; CharString::assign(char const*, int)
08ad712e +0x32:  mov    0x8(%ebp),%eax
08ad7131 +0x35:  add    $0x14,%esp
08ad7134 +0x38:  pop    %ebx
08ad7135 +0x39:  pop    %ebp
08ad7136 +0x3a:  ret
08ad7137 +0x3b:  nop
```

## 反编译 C

```c
// CharString::operator= @ 0x8ad70fc

/* DWARF original prototype: CharString * operator=(CharString * this, string * src) */

CharString * __thiscall CharString::operator=(CharString *this,string *src)

{
  int32 srcLength;
  char *src_00;
  
  srcLength = std::string::size((string *)src);
  src_00 = (char *)std::string::c_str((string *)src);
  assign(this,src_00,srcLength);
  return this;
}
```
