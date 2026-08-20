# __convert_to_v<double>

`_ZSt14__convert_to_vIdEvPKcRT_RSt12_Ios_IostateRKP15__locale_struct`

`void std::__convert_to_v<double>(char const*, double&, std::_Ios_Iostate&, __locale_struct* const&)`

| 类 | 地址 |
|---|---|
| `void std` | `0x08722c60` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08722c60  _ZSt14__convert_to_vIdEvPKcRT_RSt12_Ios_IostateRKP15__locale_struct
#           void std::__convert_to_v<double>(char const*, double&, std::_Ios_Iostate&, __locale_struct* const&)
# range [0x08722c60, 0x08722d0f]
08722c60 +0x00:  push   %ebp
08722c61 +0x01:  mov    %esp,%ebp
08722c63 +0x03:  sub    $0x38,%esp
08722c66 +0x06:  mov    0x14(%ebp),%eax
08722c69 +0x09:  mov    %ebx,-0xc(%ebp)
08722c6c +0x0c:  mov    0xc(%ebp),%ebx
08722c6f +0x0f:  mov    %esi,-0x8(%ebp)
08722c72 +0x12:  mov    0x10(%ebp),%esi
08722c75 +0x15:  mov    %edi,-0x4(%ebp)
08722c78 +0x18:  mov    0x8(%ebp),%edi
08722c7b +0x1b:  mov    (%eax),%eax
08722c7d +0x1d:  mov    %edi,(%esp)
08722c80 +0x20:  mov    %eax,0x8(%esp)
08722c84 +0x24:  lea    -0x1c(%ebp),%eax
08722c87 +0x27:  mov    %eax,0x4(%esp)
08722c8b +0x2b:  call   0807e020 <_init+0x918>
08722c90 +0x30:  mov    -0x1c(%ebp),%eax
08722c93 +0x33:  cmp    %edi,%eax
08722c95 +0x35:  fstl   (%ebx)
08722c97 +0x37:  je     08722ce0 <+0x80>
08722c99 +0x39:  cmpb   $0x0,(%eax)
08722c9c +0x3c:  jne    08722ce8 <+0x88>
08722c9e +0x3e:  fldl   &data#3310c15f(.rodata)
08722ca4 +0x44:  fxch   %st(1)
08722ca6 +0x46:  fucom  %st(1)
08722ca8 +0x48:  fnstsw %ax
08722caa +0x4a:  sahf
08722cab +0x4b:  ja     08722cc0 <+0x60>
08722cad +0x4d:  fstp   %st(1)
08722caf +0x4f:  fldl   &data#6defc051(.rodata)
08722cb5 +0x55:  fucom  %st(1)
08722cb7 +0x57:  fnstsw %ax
08722cb9 +0x59:  fstp   %st(1)
08722cbb +0x5b:  sahf
08722cbc +0x5c:  ja     08722cc2 <+0x62>
08722cbe +0x5e:  jmp    08722cd0 <+0x70>
08722cc0 +0x60:  fstp   %st(0)
08722cc2 +0x62:  fstpl  (%ebx)
08722cc4 +0x64:  movl   $0x4,(%esi)
08722cca +0x6a:  jmp    08722cd2 <+0x72>
08722ccc +0x6c:  lea    0x0(%esi,%eiz,1),%esi
08722cd0 +0x70:  fstp   %st(0)
08722cd2 +0x72:  mov    -0xc(%ebp),%ebx
08722cd5 +0x75:  mov    -0x8(%ebp),%esi
08722cd8 +0x78:  mov    -0x4(%ebp),%edi
08722cdb +0x7b:  mov    %ebp,%esp
08722cdd +0x7d:  pop    %ebp
08722cde +0x7e:  ret
08722cdf +0x7f:  nop
08722ce0 +0x80:  fstp   %st(0)
08722ce2 +0x82:  jmp    08722cea <+0x8a>
08722ce4 +0x84:  lea    0x0(%esi,%eiz,1),%esi
08722ce8 +0x88:  fstp   %st(0)
08722cea +0x8a:  fldz
08722cec +0x8c:  fstpl  (%ebx)
08722cee +0x8e:  movl   $0x4,(%esi)
08722cf4 +0x94:  mov    -0xc(%ebp),%ebx
08722cf7 +0x97:  mov    -0x8(%ebp),%esi
08722cfa +0x9a:  mov    -0x4(%ebp),%edi
08722cfd +0x9d:  mov    %ebp,%esp
08722cff +0x9f:  pop    %ebp
08722d00 +0xa0:  ret
08722d01 +0xa1:  nop
08722d02 +0xa2:  nop
08722d03 +0xa3:  nop
08722d04 +0xa4:  nop
08722d05 +0xa5:  nop
08722d06 +0xa6:  nop
08722d07 +0xa7:  nop
08722d08 +0xa8:  nop
08722d09 +0xa9:  nop
08722d0a +0xaa:  nop
08722d0b +0xab:  nop
08722d0c +0xac:  nop
08722d0d +0xad:  nop
08722d0e +0xae:  nop
08722d0f +0xaf:  nop
```

## 反编译 C

```c
// <global>::void @ 0x8722c60

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__convert_to_v<double>(char const*, double&, std::_Ios_Iostate&, __locale_struct*
   const&) */

void std::__convert_to_v<double>
               (char *param_1,double *param_2,_Ios_Iostate *param_3,__locale_struct **param_4)

{
  longdouble lVar1;
  longdouble lVar2;
  char *local_20 [4];
  
  lVar1 = (longdouble)__strtod_l(param_1,local_20,*param_4);
  *param_2 = (double)lVar1;
  if ((local_20[0] != param_1) && (*local_20[0] == '\0')) {
    lVar2 = (longdouble)DAT_08d01890;
    if ((lVar2 < lVar1) || (lVar2 = (longdouble)DAT_08d01898, lVar1 < lVar2)) {
      *param_2 = (double)lVar2;
      *param_3 = _S_failbit;
    }
    return;
  }
  *param_2 = 0.0;
  *param_3 = _S_failbit;
  return;
}
```
