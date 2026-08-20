# __convert_to_v<long double>

`_ZSt14__convert_to_vIeEvPKcRT_RSt12_Ios_IostateRKP15__locale_struct`

`void std::__convert_to_v<long double>(char const*, long double&, std::_Ios_Iostate&, __locale_struct* const&)`

| 类 | 地址 |
|---|---|
| `void std` | `0x08722ba0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08722ba0  _ZSt14__convert_to_vIeEvPKcRT_RSt12_Ios_IostateRKP15__locale_struct
#           void std::__convert_to_v<long double>(char const*, long double&, std::_Ios_Iostate&, __locale_struct* const&)
# range [0x08722ba0, 0x08722c5f]
08722ba0 +0x00:  push   %ebp
08722ba1 +0x01:  mov    %esp,%ebp
08722ba3 +0x03:  sub    $0x38,%esp
08722ba6 +0x06:  mov    0x14(%ebp),%eax
08722ba9 +0x09:  mov    %ebx,-0xc(%ebp)
08722bac +0x0c:  mov    0xc(%ebp),%ebx
08722baf +0x0f:  mov    %esi,-0x8(%ebp)
08722bb2 +0x12:  mov    0x10(%ebp),%esi
08722bb5 +0x15:  mov    %edi,-0x4(%ebp)
08722bb8 +0x18:  mov    0x8(%ebp),%edi
08722bbb +0x1b:  mov    (%eax),%eax
08722bbd +0x1d:  mov    %edi,(%esp)
08722bc0 +0x20:  mov    %eax,0x8(%esp)
08722bc4 +0x24:  lea    -0x1c(%ebp),%eax
08722bc7 +0x27:  mov    %eax,0x4(%esp)
08722bcb +0x2b:  call   0807daf0 <_init+0x3e8>
08722bd0 +0x30:  mov    -0x1c(%ebp),%eax
08722bd3 +0x33:  cmp    %edi,%eax
08722bd5 +0x35:  fld    %st(0)
08722bd7 +0x37:  fstpt  (%ebx)
08722bd9 +0x39:  je     08722c28 <+0x88>
08722bdb +0x3b:  cmpb   $0x0,(%eax)
08722bde +0x3e:  jne    08722c30 <+0x90>
08722be0 +0x40:  fldt   &data#3cc34e0d(.rodata)
08722be6 +0x46:  fxch   %st(1)
08722be8 +0x48:  fucom  %st(1)
08722bea +0x4a:  fnstsw %ax
08722bec +0x4c:  sahf
08722bed +0x4d:  ja     08722c08 <+0x68>
08722bef +0x4f:  fstp   %st(1)
08722bf1 +0x51:  fldt   "����������"
08722bf7 +0x57:  fucom  %st(1)
08722bf9 +0x59:  fnstsw %ax
08722bfb +0x5b:  fstp   %st(1)
08722bfd +0x5d:  sahf
08722bfe +0x5e:  ja     08722c0a <+0x6a>
08722c00 +0x60:  jmp    08722c18 <+0x78>
08722c02 +0x62:  lea    0x0(%esi),%esi
08722c08 +0x68:  fstp   %st(0)
08722c0a +0x6a:  fstpt  (%ebx)
08722c0c +0x6c:  movl   $0x4,(%esi)
08722c12 +0x72:  jmp    08722c1a <+0x7a>
08722c14 +0x74:  lea    0x0(%esi,%eiz,1),%esi
08722c18 +0x78:  fstp   %st(0)
08722c1a +0x7a:  mov    -0xc(%ebp),%ebx
08722c1d +0x7d:  mov    -0x8(%ebp),%esi
08722c20 +0x80:  mov    -0x4(%ebp),%edi
08722c23 +0x83:  mov    %ebp,%esp
08722c25 +0x85:  pop    %ebp
08722c26 +0x86:  ret
08722c27 +0x87:  nop
08722c28 +0x88:  fstp   %st(0)
08722c2a +0x8a:  jmp    08722c32 <+0x92>
08722c2c +0x8c:  lea    0x0(%esi,%eiz,1),%esi
08722c30 +0x90:  fstp   %st(0)
08722c32 +0x92:  movl   $0x0,(%ebx)
08722c38 +0x98:  movl   $0x0,0x4(%ebx)
08722c3f +0x9f:  movl   $0x0,0x8(%ebx)
08722c46 +0xa6:  movl   $0x4,(%esi)
08722c4c +0xac:  mov    -0xc(%ebp),%ebx
08722c4f +0xaf:  mov    -0x8(%ebp),%esi
08722c52 +0xb2:  mov    -0x4(%ebp),%edi
08722c55 +0xb5:  mov    %ebp,%esp
08722c57 +0xb7:  pop    %ebp
08722c58 +0xb8:  ret
08722c59 +0xb9:  nop
08722c5a +0xba:  nop
08722c5b +0xbb:  nop
08722c5c +0xbc:  nop
08722c5d +0xbd:  nop
08722c5e +0xbe:  nop
08722c5f +0xbf:  nop
```

## 反编译 C

```c
// <global>::void @ 0x8722ba0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__convert_to_v<long double>(char const*, long double&, std::_Ios_Iostate&,
   __locale_struct* const&) */

void std::__convert_to_v<long_double>
               (char *param_1,longdouble *param_2,_Ios_Iostate *param_3,__locale_struct **param_4)

{
  longdouble lVar1;
  longdouble lVar2;
  double dVar3;
  char *local_20 [4];
  
  dVar3 = strtold_l(param_1,local_20,*param_4);
  lVar1 = (longdouble)dVar3;
  *param_2 = lVar1;
  if ((local_20[0] != param_1) && (*local_20[0] == '\0')) {
    lVar2 = _DAT_08d01870;
    if ((_DAT_08d01870 < lVar1) || (lVar2 = _DAT_08d01880, lVar1 < _DAT_08d01880)) {
      *param_2 = lVar2;
      *param_3 = _S_failbit;
    }
    return;
  }
  *(undefined4 *)param_2 = 0;
  *(undefined4 *)((int)param_2 + 4) = 0;
  *(undefined4 *)((int)param_2 + 8) = 0;
  *param_3 = _S_failbit;
  return;
}
```
