# ~ctype

`_ZNSt5ctypeIwED1Ev`

`std::ctype<wchar_t>::~ctype()`

| 类 | 地址 |
|---|---|
| `std::ctype<wchar_t>` | `0x087267a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087267a0  _ZNSt5ctypeIwED1Ev
#           std::ctype<wchar_t>::~ctype()
# range [0x087267a0, 0x087267ef]
087267a0 +0x00:  push   %ebp
087267a1 +0x01:  mov    %esp,%ebp
087267a3 +0x03:  push   %ebx
087267a4 +0x04:  sub    $0x24,%esp
087267a7 +0x07:  mov    0x8(%ebp),%ebx
087267aa +0x0a:  movl   $&_ZTVSt5ctypeIwE+0x8,(%ebx)
087267b0 +0x10:  lea    0x8(%ebx),%eax
087267b3 +0x13:  mov    %eax,(%esp)
087267b6 +0x16:  call   08722b30 <_ZNSt6locale5facet19_S_destroy_c_localeERP15__locale_struct>  ; std::locale::facet::_S_destroy_c_locale(__locale_struct*&)
087267bb +0x1b:  movl   $&_ZTVSt21__ctype_abstract_baseIwE+0x8,(%ebx)
087267c1 +0x21:  mov    %ebx,0x8(%ebp)
087267c4 +0x24:  add    $0x24,%esp
087267c7 +0x27:  pop    %ebx
087267c8 +0x28:  pop    %ebp
087267c9 +0x29:  jmp    086dada0 <_ZNSt6locale5facetD1Ev>  ; std::locale::facet::~facet()
087267ce +0x2e:  movl   $&_ZTVSt21__ctype_abstract_baseIwE+0x8,(%ebx)
087267d4 +0x34:  mov    %eax,-0xc(%ebp)
087267d7 +0x37:  mov    %ebx,(%esp)
087267da +0x3a:  call   086dada0 <_ZNSt6locale5facetD1Ev>  ; std::locale::facet::~facet()
087267df +0x3f:  mov    -0xc(%ebp),%eax
087267e2 +0x42:  mov    %eax,(%esp)
087267e5 +0x45:  call   08ae3750 <_Unwind_Resume>
087267ea +0x4a:  nop
087267eb +0x4b:  nop
087267ec +0x4c:  nop
087267ed +0x4d:  nop
087267ee +0x4e:  nop
087267ef +0x4f:  nop
```

## 反编译 C

```c
// std::ctype<wchar_t>::~ctype @ 0x87267a0

/* std::ctype<wchar_t>::~ctype() */

void __thiscall std::ctype<wchar_t>::~ctype(ctype<wchar_t> *this)

{
  *(undefined ***)this = &PTR__ctype_08d01d88;
                    /* try { // try from 087267b6 to 087267ba has its CatchHandler @ 087267ce */
  locale::facet::_S_destroy_c_locale((__locale_struct **)(this + 8));
  *(undefined ***)this = &PTR____ctype_abstract_base_08d00a88;
  locale::facet::~facet((facet *)this);
  return;
}
```
