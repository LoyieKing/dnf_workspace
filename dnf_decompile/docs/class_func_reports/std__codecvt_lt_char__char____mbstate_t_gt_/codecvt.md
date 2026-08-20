# codecvt

`_ZNSt7codecvtIcc11__mbstate_tEC1EP15__locale_structj`

`std::codecvt<char, char, __mbstate_t>::codecvt(__locale_struct*, unsigned int)`

| 类 | 地址 |
|---|---|
| `std::codecvt<char, char, __mbstate_t>` | `0x08726190` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08726190  _ZNSt7codecvtIcc11__mbstate_tEC1EP15__locale_structj
#           std::codecvt<char, char, __mbstate_t>::codecvt(__locale_struct*, unsigned int)
# range [0x08726190, 0x087261df]
08726190 +0x00:  push   %ebp
08726191 +0x01:  xor    %eax,%eax
08726193 +0x03:  mov    %esp,%ebp
08726195 +0x05:  push   %ebx
08726196 +0x06:  sub    $0x24,%esp
08726199 +0x09:  mov    0x8(%ebp),%ebx
0872619c +0x0c:  cmpl   $0x0,0x10(%ebp)
087261a0 +0x10:  setne  %al
087261a3 +0x13:  mov    %eax,0x4(%ebx)
087261a6 +0x16:  lea    0xc(%ebp),%eax
087261a9 +0x19:  movl   $&_ZTVSt7codecvtIcc11__mbstate_tE+0x8,(%ebx)
087261af +0x1f:  mov    %eax,(%esp)
087261b2 +0x22:  call   08722b10 <_ZNSt6locale5facet17_S_clone_c_localeERP15__locale_struct>  ; std::locale::facet::_S_clone_c_locale(__locale_struct*&)
087261b7 +0x27:  mov    %eax,0x8(%ebx)
087261ba +0x2a:  add    $0x24,%esp
087261bd +0x2d:  pop    %ebx
087261be +0x2e:  pop    %ebp
087261bf +0x2f:  ret
087261c0 +0x30:  movl   $&_ZTVSt23__codecvt_abstract_baseIcc11__mbstate_tE+0x8,(%ebx)
087261c6 +0x36:  mov    %eax,-0xc(%ebp)
087261c9 +0x39:  mov    %ebx,(%esp)
087261cc +0x3c:  call   086dada0 <_ZNSt6locale5facetD1Ev>  ; std::locale::facet::~facet()
087261d1 +0x41:  mov    -0xc(%ebp),%eax
087261d4 +0x44:  mov    %eax,(%esp)
087261d7 +0x47:  call   08ae3750 <_Unwind_Resume>
087261dc +0x4c:  nop
087261dd +0x4d:  nop
087261de +0x4e:  nop
087261df +0x4f:  nop
```

## 反编译 C

```c
// std::codecvt<char, @ 0x8726190

/* std::codecvt<char, char, __mbstate_t>::codecvt(__locale_struct*, unsigned int) */

void __thiscall
std::codecvt<char,char,__mbstate_t>::codecvt
          (codecvt<char,char,__mbstate_t> *this,__locale_struct *param_1,uint param_2)

{
  undefined4 uVar1;
  
  *(uint *)(this + 4) = (uint)(param_2 != 0);
  *(undefined ***)this = &PTR__codecvt_08d01ca8;
                    /* try { // try from 087261b2 to 087261b6 has its CatchHandler @ 087261c0 */
  uVar1 = locale::facet::_S_clone_c_locale(&param_1);
  *(undefined4 *)(this + 8) = uVar1;
  return;
}
```
