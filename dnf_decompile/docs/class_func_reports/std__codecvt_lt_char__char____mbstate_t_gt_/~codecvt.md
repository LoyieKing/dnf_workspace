# ~codecvt

`_ZNSt7codecvtIcc11__mbstate_tED1Ev`

`std::codecvt<char, char, __mbstate_t>::~codecvt()`

| 类 | 地址 |
|---|---|
| `std::codecvt<char, char, __mbstate_t>` | `0x087260d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087260d0  _ZNSt7codecvtIcc11__mbstate_tED1Ev
#           std::codecvt<char, char, __mbstate_t>::~codecvt()
# range [0x087260d0, 0x0872611f]
087260d0 +0x00:  push   %ebp
087260d1 +0x01:  mov    %esp,%ebp
087260d3 +0x03:  push   %ebx
087260d4 +0x04:  sub    $0x24,%esp
087260d7 +0x07:  mov    0x8(%ebp),%ebx
087260da +0x0a:  movl   $&_ZTVSt7codecvtIcc11__mbstate_tE+0x8,(%ebx)
087260e0 +0x10:  lea    0x8(%ebx),%eax
087260e3 +0x13:  mov    %eax,(%esp)
087260e6 +0x16:  call   08722b30 <_ZNSt6locale5facet19_S_destroy_c_localeERP15__locale_struct>  ; std::locale::facet::_S_destroy_c_locale(__locale_struct*&)
087260eb +0x1b:  movl   $&_ZTVSt23__codecvt_abstract_baseIcc11__mbstate_tE+0x8,(%ebx)
087260f1 +0x21:  mov    %ebx,0x8(%ebp)
087260f4 +0x24:  add    $0x24,%esp
087260f7 +0x27:  pop    %ebx
087260f8 +0x28:  pop    %ebp
087260f9 +0x29:  jmp    086dada0 <_ZNSt6locale5facetD1Ev>  ; std::locale::facet::~facet()
087260fe +0x2e:  movl   $&_ZTVSt23__codecvt_abstract_baseIcc11__mbstate_tE+0x8,(%ebx)
08726104 +0x34:  mov    %eax,-0xc(%ebp)
08726107 +0x37:  mov    %ebx,(%esp)
0872610a +0x3a:  call   086dada0 <_ZNSt6locale5facetD1Ev>  ; std::locale::facet::~facet()
0872610f +0x3f:  mov    -0xc(%ebp),%eax
08726112 +0x42:  mov    %eax,(%esp)
08726115 +0x45:  call   08ae3750 <_Unwind_Resume>
0872611a +0x4a:  nop
0872611b +0x4b:  nop
0872611c +0x4c:  nop
0872611d +0x4d:  nop
0872611e +0x4e:  nop
0872611f +0x4f:  nop
```

## 反编译 C

```c
// std::codecvt<char, @ 0x87260d0

/* std::codecvt<char, char, __mbstate_t>::~codecvt() */

void __thiscall std::codecvt<char,char,__mbstate_t>::~codecvt(codecvt<char,char,__mbstate_t> *this)

{
  *(undefined ***)this = &PTR__codecvt_08d01ca8;
                    /* try { // try from 087260e6 to 087260ea has its CatchHandler @ 087260fe */
  locale::facet::_S_destroy_c_locale((__locale_struct **)(this + 8));
  *(undefined ***)this = &PTR____codecvt_abstract_base_08cff108;
  locale::facet::~facet((facet *)this);
  return;
}
```
