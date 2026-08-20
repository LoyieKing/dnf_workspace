# ~codecvt

`_ZNSt7codecvtIwc11__mbstate_tED1Ev`

`std::codecvt<wchar_t, char, __mbstate_t>::~codecvt()`

| 类 | 地址 |
|---|---|
| `std::codecvt<wchar_t, char, __mbstate_t>` | `0x08726060` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08726060  _ZNSt7codecvtIwc11__mbstate_tED1Ev
#           std::codecvt<wchar_t, char, __mbstate_t>::~codecvt()
# range [0x08726060, 0x087260af]
08726060 +0x00:  push   %ebp
08726061 +0x01:  mov    %esp,%ebp
08726063 +0x03:  push   %ebx
08726064 +0x04:  sub    $0x24,%esp
08726067 +0x07:  mov    0x8(%ebp),%ebx
0872606a +0x0a:  movl   $&_ZTVSt7codecvtIwc11__mbstate_tE+0x8,(%ebx)
08726070 +0x10:  lea    0x8(%ebx),%eax
08726073 +0x13:  mov    %eax,(%esp)
08726076 +0x16:  call   08722b30 <_ZNSt6locale5facet19_S_destroy_c_localeERP15__locale_struct>  ; std::locale::facet::_S_destroy_c_locale(__locale_struct*&)
0872607b +0x1b:  movl   $&_ZTVSt23__codecvt_abstract_baseIwc11__mbstate_tE+0x8,(%ebx)
08726081 +0x21:  mov    %ebx,0x8(%ebp)
08726084 +0x24:  add    $0x24,%esp
08726087 +0x27:  pop    %ebx
08726088 +0x28:  pop    %ebp
08726089 +0x29:  jmp    086dada0 <_ZNSt6locale5facetD1Ev>  ; std::locale::facet::~facet()
0872608e +0x2e:  movl   $&_ZTVSt23__codecvt_abstract_baseIwc11__mbstate_tE+0x8,(%ebx)
08726094 +0x34:  mov    %eax,-0xc(%ebp)
08726097 +0x37:  mov    %ebx,(%esp)
0872609a +0x3a:  call   086dada0 <_ZNSt6locale5facetD1Ev>  ; std::locale::facet::~facet()
0872609f +0x3f:  mov    -0xc(%ebp),%eax
087260a2 +0x42:  mov    %eax,(%esp)
087260a5 +0x45:  call   08ae3750 <_Unwind_Resume>
087260aa +0x4a:  nop
087260ab +0x4b:  nop
087260ac +0x4c:  nop
087260ad +0x4d:  nop
087260ae +0x4e:  nop
087260af +0x4f:  nop
```

## 反编译 C

```c
// std::codecvt<wchar_t, @ 0x8726060

/* std::codecvt<wchar_t, char, __mbstate_t>::~codecvt() */

void __thiscall
std::codecvt<wchar_t,char,__mbstate_t>::~codecvt(codecvt<wchar_t,char,__mbstate_t> *this)

{
  *(undefined ***)this = &PTR__codecvt_08d01c68;
                    /* try { // try from 08726076 to 0872607a has its CatchHandler @ 0872608e */
  locale::facet::_S_destroy_c_locale((__locale_struct **)(this + 8));
  *(undefined ***)this = &PTR____codecvt_abstract_base_08d00888;
  locale::facet::~facet((facet *)this);
  return;
}
```
