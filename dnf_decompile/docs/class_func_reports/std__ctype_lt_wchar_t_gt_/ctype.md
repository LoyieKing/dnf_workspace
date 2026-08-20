# ctype

`_ZNSt5ctypeIwEC1EP15__locale_structj`

`std::ctype<wchar_t>::ctype(__locale_struct*, unsigned int)`

| 类 | 地址 |
|---|---|
| `std::ctype<wchar_t>` | `0x08726850` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08726850  _ZNSt5ctypeIwEC1EP15__locale_structj
#           std::ctype<wchar_t>::ctype(__locale_struct*, unsigned int)
# range [0x08726850, 0x087268af]
08726850 +0x00:  push   %ebp
08726851 +0x01:  xor    %eax,%eax
08726853 +0x03:  mov    %esp,%ebp
08726855 +0x05:  push   %ebx
08726856 +0x06:  sub    $0x24,%esp
08726859 +0x09:  mov    0x8(%ebp),%ebx
0872685c +0x0c:  cmpl   $0x0,0x10(%ebp)
08726860 +0x10:  setne  %al
08726863 +0x13:  mov    %eax,0x4(%ebx)
08726866 +0x16:  lea    0xc(%ebp),%eax
08726869 +0x19:  movl   $&_ZTVSt5ctypeIwE+0x8,(%ebx)
0872686f +0x1f:  mov    %eax,(%esp)
08726872 +0x22:  call   08722b10 <_ZNSt6locale5facet17_S_clone_c_localeERP15__locale_struct>  ; std::locale::facet::_S_clone_c_locale(__locale_struct*&)
08726877 +0x27:  mov    %eax,0x8(%ebx)
0872687a +0x2a:  movb   $0x0,0xc(%ebx)
0872687e +0x2e:  mov    %ebx,(%esp)
08726881 +0x31:  call   0872f260 <_ZNSt5ctypeIwE19_M_initialize_ctypeEv>  ; std::ctype<wchar_t>::_M_initialize_ctype()
08726886 +0x36:  add    $0x24,%esp
08726889 +0x39:  pop    %ebx
0872688a +0x3a:  pop    %ebp
0872688b +0x3b:  ret
0872688c +0x3c:  movl   $&_ZTVSt21__ctype_abstract_baseIwE+0x8,(%ebx)
08726892 +0x42:  mov    %eax,-0xc(%ebp)
08726895 +0x45:  mov    %ebx,(%esp)
08726898 +0x48:  call   086dada0 <_ZNSt6locale5facetD1Ev>  ; std::locale::facet::~facet()
0872689d +0x4d:  mov    -0xc(%ebp),%eax
087268a0 +0x50:  mov    %eax,(%esp)
087268a3 +0x53:  call   08ae3750 <_Unwind_Resume>
087268a8 +0x58:  nop
087268a9 +0x59:  nop
087268aa +0x5a:  nop
087268ab +0x5b:  nop
087268ac +0x5c:  nop
087268ad +0x5d:  nop
087268ae +0x5e:  nop
087268af +0x5f:  nop
```

## 反编译 C

```c
// std::ctype<wchar_t>::ctype @ 0x8726850

/* std::ctype<wchar_t>::ctype(__locale_struct*, unsigned int) */

void __thiscall
std::ctype<wchar_t>::ctype(ctype<wchar_t> *this,__locale_struct *param_1,uint param_2)

{
  undefined4 uVar1;
  
  *(uint *)(this + 4) = (uint)(param_2 != 0);
  *(undefined ***)this = &PTR__ctype_08d01d88;
                    /* try { // try from 08726872 to 08726885 has its CatchHandler @ 0872688c */
  uVar1 = locale::facet::_S_clone_c_locale(&param_1);
  *(undefined4 *)(this + 8) = uVar1;
  this[0xc] = (ctype<wchar_t>)0x0;
  _M_initialize_ctype(this);
  return;
}
```
