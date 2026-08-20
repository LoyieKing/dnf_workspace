# ~ctype

`_ZNSt5ctypeIcED1Ev`

`std::ctype<char>::~ctype()`

| 类 | 地址 |
|---|---|
| `std::ctype<char>` | `0x08726b20` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08726b20  _ZNSt5ctypeIcED1Ev
#           std::ctype<char>::~ctype()
# range [0x08726b20, 0x08726b7f]
08726b20 +0x00:  push   %ebp
08726b21 +0x01:  mov    %esp,%ebp
08726b23 +0x03:  push   %ebx
08726b24 +0x04:  sub    $0x24,%esp
08726b27 +0x07:  mov    0x8(%ebp),%ebx
08726b2a +0x0a:  movl   $&_ZTVSt5ctypeIcE+0x8,(%ebx)
08726b30 +0x10:  lea    0x8(%ebx),%eax
08726b33 +0x13:  mov    %eax,(%esp)
08726b36 +0x16:  call   08722b30 <_ZNSt6locale5facet19_S_destroy_c_localeERP15__locale_struct>  ; std::locale::facet::_S_destroy_c_locale(__locale_struct*&)
08726b3b +0x1b:  cmpb   $0x0,0xc(%ebx)
08726b3f +0x1f:  je     08726b50 <+0x30>
08726b41 +0x21:  mov    0x18(%ebx),%eax
08726b44 +0x24:  test   %eax,%eax
08726b46 +0x26:  je     08726b50 <+0x30>
08726b48 +0x28:  mov    %eax,(%esp)
08726b4b +0x2b:  call   08724bb0 <_ZdaPv>  ; operator delete[](void*)
08726b50 +0x30:  mov    %ebx,0x8(%ebp)
08726b53 +0x33:  add    $0x24,%esp
08726b56 +0x36:  pop    %ebx
08726b57 +0x37:  pop    %ebp
08726b58 +0x38:  jmp    086dada0 <_ZNSt6locale5facetD1Ev>  ; std::locale::facet::~facet()
08726b5d +0x3d:  mov    %eax,-0xc(%ebp)
08726b60 +0x40:  mov    %ebx,(%esp)
08726b63 +0x43:  call   086dada0 <_ZNSt6locale5facetD1Ev>  ; std::locale::facet::~facet()
08726b68 +0x48:  mov    -0xc(%ebp),%eax
08726b6b +0x4b:  mov    %eax,(%esp)
08726b6e +0x4e:  call   08ae3750 <_Unwind_Resume>
08726b73 +0x53:  nop
08726b74 +0x54:  nop
08726b75 +0x55:  nop
08726b76 +0x56:  nop
08726b77 +0x57:  nop
08726b78 +0x58:  nop
08726b79 +0x59:  nop
08726b7a +0x5a:  nop
08726b7b +0x5b:  nop
08726b7c +0x5c:  nop
08726b7d +0x5d:  nop
08726b7e +0x5e:  nop
08726b7f +0x5f:  nop
```

## 反编译 C

```c
// std::ctype<char>::~ctype @ 0x8726b20

/* std::ctype<char>::~ctype() */

void __thiscall std::ctype<char>::~ctype(ctype<char> *this)

{
  *(undefined ***)this = &PTR__ctype_08d01dc8;
                    /* try { // try from 08726b36 to 08726b3a has its CatchHandler @ 08726b5d */
  locale::facet::_S_destroy_c_locale((__locale_struct **)(this + 8));
  if ((this[0xc] != (ctype<char>)0x0) && (*(void **)(this + 0x18) != (void *)0x0)) {
    operator_delete__(*(void **)(this + 0x18));
  }
  locale::facet::~facet((facet *)this);
  return;
}
```
