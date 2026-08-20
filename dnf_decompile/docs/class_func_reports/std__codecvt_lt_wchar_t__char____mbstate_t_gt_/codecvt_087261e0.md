# codecvt

`_ZNSt7codecvtIwc11__mbstate_tEC1Ej`

`std::codecvt<wchar_t, char, __mbstate_t>::codecvt(unsigned int)`

| 类 | 地址 |
|---|---|
| `std::codecvt<wchar_t, char, __mbstate_t>` | `0x087261e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087261e0  _ZNSt7codecvtIwc11__mbstate_tEC1Ej
#           std::codecvt<wchar_t, char, __mbstate_t>::codecvt(unsigned int)
# range [0x087261e0, 0x0872622f]
087261e0 +0x00:  push   %ebp
087261e1 +0x01:  xor    %eax,%eax
087261e3 +0x03:  mov    %esp,%ebp
087261e5 +0x05:  push   %ebx
087261e6 +0x06:  sub    $0x24,%esp
087261e9 +0x09:  mov    0x8(%ebp),%ebx
087261ec +0x0c:  cmpl   $0x0,0xc(%ebp)
087261f0 +0x10:  setne  %al
087261f3 +0x13:  mov    %eax,0x4(%ebx)
087261f6 +0x16:  movl   $&_ZTVSt7codecvtIwc11__mbstate_tE+0x8,(%ebx)
087261fc +0x1c:  call   086daf40 <_ZNSt6locale5facet15_S_get_c_localeEv>  ; std::locale::facet::_S_get_c_locale()
08726201 +0x21:  mov    %eax,0x8(%ebx)
08726204 +0x24:  add    $0x24,%esp
08726207 +0x27:  pop    %ebx
08726208 +0x28:  pop    %ebp
08726209 +0x29:  ret
0872620a +0x2a:  movl   $&_ZTVSt23__codecvt_abstract_baseIwc11__mbstate_tE+0x8,(%ebx)
08726210 +0x30:  mov    %eax,-0xc(%ebp)
08726213 +0x33:  mov    %ebx,(%esp)
08726216 +0x36:  call   086dada0 <_ZNSt6locale5facetD1Ev>  ; std::locale::facet::~facet()
0872621b +0x3b:  mov    -0xc(%ebp),%eax
0872621e +0x3e:  mov    %eax,(%esp)
08726221 +0x41:  call   08ae3750 <_Unwind_Resume>
08726226 +0x46:  nop
08726227 +0x47:  nop
08726228 +0x48:  nop
08726229 +0x49:  nop
0872622a +0x4a:  nop
0872622b +0x4b:  nop
0872622c +0x4c:  nop
0872622d +0x4d:  nop
0872622e +0x4e:  nop
0872622f +0x4f:  nop
```

## 反编译 C

```c
// std::codecvt<wchar_t, @ 0x87261e0

/* std::codecvt<wchar_t, char, __mbstate_t>::codecvt(unsigned int) */

void __thiscall
std::codecvt<wchar_t,char,__mbstate_t>::codecvt
          (codecvt<wchar_t,char,__mbstate_t> *this,uint param_1)

{
  undefined4 uVar1;
  
  *(uint *)(this + 4) = (uint)(param_1 != 0);
  *(undefined ***)this = &PTR__codecvt_08d01c68;
                    /* try { // try from 087261fc to 08726200 has its CatchHandler @ 0872620a */
  uVar1 = locale::facet::_S_get_c_locale();
  *(undefined4 *)(this + 8) = uVar1;
  return;
}
```
