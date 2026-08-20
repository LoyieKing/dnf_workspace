# __convert_to_v<float>

`_ZSt14__convert_to_vIfEvPKcRT_RSt12_Ios_IostateRKP15__locale_struct`

`void std::__convert_to_v<float>(char const*, float&, std::_Ios_Iostate&, __locale_struct* const&)`

| 类 | 地址 |
|---|---|
| `void std` | `0x08722d10` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08722d10  _ZSt14__convert_to_vIfEvPKcRT_RSt12_Ios_IostateRKP15__locale_struct
#           void std::__convert_to_v<float>(char const*, float&, std::_Ios_Iostate&, __locale_struct* const&)
# range [0x08722d10, 0x08722dbf]
08722d10 +0x00:  push   %ebp
08722d11 +0x01:  mov    %esp,%ebp
08722d13 +0x03:  sub    $0x38,%esp
08722d16 +0x06:  mov    0x14(%ebp),%eax
08722d19 +0x09:  mov    %ebx,-0xc(%ebp)
08722d1c +0x0c:  mov    0xc(%ebp),%ebx
08722d1f +0x0f:  mov    %esi,-0x8(%ebp)
08722d22 +0x12:  mov    0x10(%ebp),%esi
08722d25 +0x15:  mov    %edi,-0x4(%ebp)
08722d28 +0x18:  mov    0x8(%ebp),%edi
08722d2b +0x1b:  mov    (%eax),%eax
08722d2d +0x1d:  mov    %edi,(%esp)
08722d30 +0x20:  mov    %eax,0x8(%esp)
08722d34 +0x24:  lea    -0x1c(%ebp),%eax
08722d37 +0x27:  mov    %eax,0x4(%esp)
08722d3b +0x2b:  call   0807e7f0 <_init+0x10e8>
08722d40 +0x30:  mov    -0x1c(%ebp),%eax
08722d43 +0x33:  cmp    %edi,%eax
08722d45 +0x35:  fsts   (%ebx)
08722d47 +0x37:  je     08722d90 <+0x80>
08722d49 +0x39:  cmpb   $0x0,(%eax)
08722d4c +0x3c:  jne    08722d98 <+0x88>
08722d4e +0x3e:  flds   &data#55793130(.rodata)
08722d54 +0x44:  fxch   %st(1)
08722d56 +0x46:  fucom  %st(1)
08722d58 +0x48:  fnstsw %ax
08722d5a +0x4a:  sahf
08722d5b +0x4b:  ja     08722d70 <+0x60>
08722d5d +0x4d:  fstp   %st(1)
08722d5f +0x4f:  flds   &data#055921f8(.rodata)
08722d65 +0x55:  fucom  %st(1)
08722d67 +0x57:  fnstsw %ax
08722d69 +0x59:  fstp   %st(1)
08722d6b +0x5b:  sahf
08722d6c +0x5c:  ja     08722d72 <+0x62>
08722d6e +0x5e:  jmp    08722d80 <+0x70>
08722d70 +0x60:  fstp   %st(0)
08722d72 +0x62:  fstps  (%ebx)
08722d74 +0x64:  movl   $0x4,(%esi)
08722d7a +0x6a:  jmp    08722d82 <+0x72>
08722d7c +0x6c:  lea    0x0(%esi,%eiz,1),%esi
08722d80 +0x70:  fstp   %st(0)
08722d82 +0x72:  mov    -0xc(%ebp),%ebx
08722d85 +0x75:  mov    -0x8(%ebp),%esi
08722d88 +0x78:  mov    -0x4(%ebp),%edi
08722d8b +0x7b:  mov    %ebp,%esp
08722d8d +0x7d:  pop    %ebp
08722d8e +0x7e:  ret
08722d8f +0x7f:  nop
08722d90 +0x80:  fstp   %st(0)
08722d92 +0x82:  jmp    08722d9a <+0x8a>
08722d94 +0x84:  lea    0x0(%esi,%eiz,1),%esi
08722d98 +0x88:  fstp   %st(0)
08722d9a +0x8a:  movl   $0x0,(%ebx)
08722da0 +0x90:  movl   $0x4,(%esi)
08722da6 +0x96:  mov    -0xc(%ebp),%ebx
08722da9 +0x99:  mov    -0x8(%ebp),%esi
08722dac +0x9c:  mov    -0x4(%ebp),%edi
08722daf +0x9f:  mov    %ebp,%esp
08722db1 +0xa1:  pop    %ebp
08722db2 +0xa2:  ret
08722db3 +0xa3:  nop
08722db4 +0xa4:  nop
08722db5 +0xa5:  nop
08722db6 +0xa6:  nop
08722db7 +0xa7:  nop
08722db8 +0xa8:  nop
08722db9 +0xa9:  nop
08722dba +0xaa:  nop
08722dbb +0xab:  nop
08722dbc +0xac:  nop
08722dbd +0xad:  nop
08722dbe +0xae:  nop
08722dbf +0xaf:  nop
```

## 反编译 C

```c
// <global>::void @ 0x8722d10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__convert_to_v<float>(char const*, float&, std::_Ios_Iostate&, __locale_struct* const&)
    */

void std::__convert_to_v<float>
               (char *param_1,float *param_2,_Ios_Iostate *param_3,__locale_struct **param_4)

{
  longdouble lVar1;
  longdouble lVar2;
  char *local_20 [4];
  
  lVar1 = (longdouble)__strtof_l(param_1,local_20,*param_4);
  *param_2 = (float)lVar1;
  if ((local_20[0] != param_1) && (*local_20[0] == '\0')) {
    lVar2 = (longdouble)_DAT_08d018a0;
    if ((lVar2 < lVar1) || (lVar2 = (longdouble)_DAT_08d018a4, lVar1 < lVar2)) {
      *param_2 = (float)lVar2;
      *param_3 = _S_failbit;
    }
    return;
  }
  *param_2 = 0.0;
  *param_3 = _S_failbit;
  return;
}
```
