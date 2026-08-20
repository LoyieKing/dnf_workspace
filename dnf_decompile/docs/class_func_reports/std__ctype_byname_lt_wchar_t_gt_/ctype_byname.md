# ctype_byname

`_ZNSt12ctype_bynameIwEC1EPKcj`

`std::ctype_byname<wchar_t>::ctype_byname(char const*, unsigned int)`

| 类 | 地址 |
|---|---|
| `std::ctype_byname<wchar_t>` | `0x08726910` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08726910  _ZNSt12ctype_bynameIwEC1EPKcj
#           std::ctype_byname<wchar_t>::ctype_byname(char const*, unsigned int)
# range [0x08726910, 0x087269bf]
08726910 +0x00:  push   %ebp
08726911 +0x01:  mov    %esp,%ebp
08726913 +0x03:  sub    $0x28,%esp
08726916 +0x06:  mov    %ebx,-0xc(%ebp)
08726919 +0x09:  mov    0x10(%ebp),%eax
0872691c +0x0c:  mov    0x8(%ebp),%ebx
0872691f +0x0f:  mov    %esi,-0x8(%ebp)
08726922 +0x12:  mov    %edi,-0x4(%ebp)
08726925 +0x15:  mov    $"C",%edi
0872692a +0x1a:  mov    %eax,0x4(%esp)
0872692e +0x1e:  mov    %ebx,(%esp)
08726931 +0x21:  call   087268b0 <_ZNSt5ctypeIwEC1Ej>  ; std::ctype<wchar_t>::ctype(unsigned int)
08726936 +0x26:  mov    0xc(%ebp),%esi
08726939 +0x29:  mov    $0x2,%ecx
0872693e +0x2e:  movl   $&_ZTVSt12ctype_bynameIwE+0x8,(%ebx)
08726944 +0x34:  repz cmpsb %es:(%edi),%ds:(%esi)
08726946 +0x36:  je     08726959 <+0x49>
08726948 +0x38:  mov    0xc(%ebp),%esi
0872694b +0x3b:  mov    $"POSIX",%edi
08726950 +0x40:  mov    $0x6,%ecx
08726955 +0x45:  repz cmpsb %es:(%edi),%ds:(%esi)
08726957 +0x47:  jne    08726968 <+0x58>
08726959 +0x49:  mov    -0xc(%ebp),%ebx
0872695c +0x4c:  mov    -0x8(%ebp),%esi
0872695f +0x4f:  mov    -0x4(%ebp),%edi
08726962 +0x52:  mov    %ebp,%esp
08726964 +0x54:  pop    %ebp
08726965 +0x55:  ret
08726966 +0x56:  xchg   %ax,%ax
08726968 +0x58:  lea    0x8(%ebx),%esi
0872696b +0x5b:  mov    %esi,(%esp)
0872696e +0x5e:  call   08722b30 <_ZNSt6locale5facet19_S_destroy_c_localeERP15__locale_struct>  ; std::locale::facet::_S_destroy_c_locale(__locale_struct*&)
08726973 +0x63:  mov    0xc(%ebp),%eax
08726976 +0x66:  movl   $0x0,0x8(%esp)
0872697e +0x6e:  mov    %esi,(%esp)
08726981 +0x71:  mov    %eax,0x4(%esp)
08726985 +0x75:  call   08722b60 <_ZNSt6locale5facet18_S_create_c_localeERP15__locale_structPKcS2_>  ; std::locale::facet::_S_create_c_locale(__locale_struct*&, char const*, __locale_struct*)
0872698a +0x7a:  mov    %ebx,(%esp)
0872698d +0x7d:  call   0872f260 <_ZNSt5ctypeIwE19_M_initialize_ctypeEv>  ; std::ctype<wchar_t>::_M_initialize_ctype()
08726992 +0x82:  mov    -0xc(%ebp),%ebx
08726995 +0x85:  mov    -0x8(%ebp),%esi
08726998 +0x88:  mov    -0x4(%ebp),%edi
0872699b +0x8b:  mov    %ebp,%esp
0872699d +0x8d:  pop    %ebp
0872699e +0x8e:  ret
0872699f +0x8f:  mov    %eax,%esi
087269a1 +0x91:  mov    %ebx,(%esp)
087269a4 +0x94:  call   087267a0 <_ZNSt5ctypeIwED1Ev>  ; std::ctype<wchar_t>::~ctype()
087269a9 +0x99:  mov    %esi,(%esp)
087269ac +0x9c:  call   08ae3750 <_Unwind_Resume>
087269b1 +0xa1:  nop
087269b2 +0xa2:  nop
087269b3 +0xa3:  nop
087269b4 +0xa4:  nop
087269b5 +0xa5:  nop
087269b6 +0xa6:  nop
087269b7 +0xa7:  nop
087269b8 +0xa8:  nop
087269b9 +0xa9:  nop
087269ba +0xaa:  nop
087269bb +0xab:  nop
087269bc +0xac:  nop
087269bd +0xad:  nop
087269be +0xae:  nop
087269bf +0xaf:  nop
```

## 反编译 C

```c
// std::ctype_byname<wchar_t>::ctype_byname @ 0x8726910

/* std::ctype_byname<wchar_t>::ctype_byname(char const*, unsigned int) */

void __thiscall
std::ctype_byname<wchar_t>::ctype_byname(ctype_byname<wchar_t> *this,char *param_1,uint param_2)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  undefined1 uVar4;
  byte bVar5;
  
  bVar5 = 0;
  uVar4 = &stack0x00000000 == (undefined1 *)0x2c;
  ctype<wchar_t>::ctype((ctype<wchar_t> *)this,param_2);
  iVar1 = 2;
  *(undefined ***)this = &PTR__ctype_byname_08d01d48;
  pcVar2 = param_1;
  pcVar3 = "C";
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    uVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + (uint)bVar5 * -2 + 1;
    pcVar3 = pcVar3 + (uint)bVar5 * -2 + 1;
  } while ((bool)uVar4);
  if (!(bool)uVar4) {
    iVar1 = 6;
    pcVar2 = param_1;
    pcVar3 = "POSIX";
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      uVar4 = *pcVar2 == *pcVar3;
      pcVar2 = pcVar2 + (uint)bVar5 * -2 + 1;
      pcVar3 = pcVar3 + (uint)bVar5 * -2 + 1;
    } while ((bool)uVar4);
    if (!(bool)uVar4) {
                    /* try { // try from 0872696e to 08726991 has its CatchHandler @ 0872699f */
      locale::facet::_S_destroy_c_locale((__locale_struct **)(this + 8));
      locale::facet::_S_create_c_locale
                ((__locale_struct **)(this + 8),param_1,(__locale_struct *)0x0);
      ctype<wchar_t>::_M_initialize_ctype((ctype<wchar_t> *)this);
      return;
    }
  }
  return;
}
```
