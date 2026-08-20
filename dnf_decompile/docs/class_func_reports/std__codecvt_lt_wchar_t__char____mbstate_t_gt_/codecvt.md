# codecvt

`_ZNSt7codecvtIwc11__mbstate_tEC1EP15__locale_structj`

`std::codecvt<wchar_t, char, __mbstate_t>::codecvt(__locale_struct*, unsigned int)`

| 类 | 地址 |
|---|---|
| `std::codecvt<wchar_t, char, __mbstate_t>` | `0x08726140` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08726140  _ZNSt7codecvtIwc11__mbstate_tEC1EP15__locale_structj
#           std::codecvt<wchar_t, char, __mbstate_t>::codecvt(__locale_struct*, unsigned int)
# range [0x08726140, 0x0872618f]
08726140 +0x00:  push   %ebp
08726141 +0x01:  xor    %eax,%eax
08726143 +0x03:  mov    %esp,%ebp
08726145 +0x05:  push   %ebx
08726146 +0x06:  sub    $0x24,%esp
08726149 +0x09:  mov    0x8(%ebp),%ebx
0872614c +0x0c:  cmpl   $0x0,0x10(%ebp)
08726150 +0x10:  setne  %al
08726153 +0x13:  mov    %eax,0x4(%ebx)
08726156 +0x16:  lea    0xc(%ebp),%eax
08726159 +0x19:  movl   $&_ZTVSt7codecvtIwc11__mbstate_tE+0x8,(%ebx)
0872615f +0x1f:  mov    %eax,(%esp)
08726162 +0x22:  call   08722b10 <_ZNSt6locale5facet17_S_clone_c_localeERP15__locale_struct>  ; std::locale::facet::_S_clone_c_locale(__locale_struct*&)
08726167 +0x27:  mov    %eax,0x8(%ebx)
0872616a +0x2a:  add    $0x24,%esp
0872616d +0x2d:  pop    %ebx
0872616e +0x2e:  pop    %ebp
0872616f +0x2f:  ret
08726170 +0x30:  movl   $&_ZTVSt23__codecvt_abstract_baseIwc11__mbstate_tE+0x8,(%ebx)
08726176 +0x36:  mov    %eax,-0xc(%ebp)
08726179 +0x39:  mov    %ebx,(%esp)
0872617c +0x3c:  call   086dada0 <_ZNSt6locale5facetD1Ev>  ; std::locale::facet::~facet()
08726181 +0x41:  mov    -0xc(%ebp),%eax
08726184 +0x44:  mov    %eax,(%esp)
08726187 +0x47:  call   08ae3750 <_Unwind_Resume>
0872618c +0x4c:  nop
0872618d +0x4d:  nop
0872618e +0x4e:  nop
0872618f +0x4f:  nop
```

## 反编译 C

```c
// std::codecvt<wchar_t, @ 0x8726140

/* std::codecvt<wchar_t, char, __mbstate_t>::codecvt(__locale_struct*, unsigned int) */

void __thiscall
std::codecvt<wchar_t,char,__mbstate_t>::codecvt
          (codecvt<wchar_t,char,__mbstate_t> *this,__locale_struct *param_1,uint param_2)

{
  undefined4 uVar1;
  
  *(uint *)(this + 4) = (uint)(param_2 != 0);
  *(undefined ***)this = &PTR__codecvt_08d01c68;
                    /* try { // try from 08726162 to 08726166 has its CatchHandler @ 08726170 */
  uVar1 = locale::facet::_S_clone_c_locale(&param_1);
  *(undefined4 *)(this + 8) = uVar1;
  return;
}
```
