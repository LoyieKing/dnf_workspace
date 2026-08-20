# DoGetCeraPointItem

`_ZN5CUser18DoGetCeraPointItemEjbR10ENUM_ERRORm`

`CUser::DoGetCeraPointItem(unsigned int, bool, ENUM_ERROR&, unsigned long)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08692a34` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08692a34  _ZN5CUser18DoGetCeraPointItemEjbR10ENUM_ERRORm
#           CUser::DoGetCeraPointItem(unsigned int, bool, ENUM_ERROR&, unsigned long)
# range [0x08692a34, 0x08692af5]
08692a34 +0x00:  push   %ebp
08692a35 +0x01:  mov    %esp,%ebp
08692a37 +0x03:  sub    $0x38,%esp
08692a3a +0x06:  mov    0x10(%ebp),%eax
08692a3d +0x09:  mov    %al,-0xc(%ebp)
08692a40 +0x0c:  movzbl -0xc(%ebp),%eax
08692a44 +0x10:  xor    $0x1,%eax
08692a47 +0x13:  test   %al,%al
08692a49 +0x15:  je     08692aef <+0xbb>
08692a4f +0x1b:  cmpl   $0x28ec3d,0x18(%ebp)
08692a56 +0x22:  jne    08692a96 <+0x62>
08692a58 +0x24:  mov    &_ZN10GlobalData12s_pIPGHelperE,%eax
08692a5d +0x29:  mov    (%eax),%eax
08692a5f +0x2b:  add    $0xc,%eax
08692a62 +0x2e:  mov    (%eax),%ecx
08692a64 +0x30:  mov    &_ZN10GlobalData12s_pIPGHelperE,%eax
08692a69 +0x35:  movl   $0x0,0x14(%esp)
08692a71 +0x3d:  movl   $0x0,0x10(%esp)
08692a79 +0x45:  movl   $0x3,0xc(%esp)
08692a81 +0x4d:  mov    0xc(%ebp),%edx
08692a84 +0x50:  mov    %edx,0x8(%esp)
08692a88 +0x54:  mov    0x8(%ebp),%edx
08692a8b +0x57:  mov    %edx,0x4(%esp)
08692a8f +0x5b:  mov    %eax,(%esp)
08692a92 +0x5e:  call   *%ecx
08692a94 +0x60:  jmp    08692ad2 <+0x9e>
08692a96 +0x62:  mov    &_ZN10GlobalData12s_pIPGHelperE,%eax
08692a9b +0x67:  mov    (%eax),%eax
08692a9d +0x69:  add    $0xc,%eax
08692aa0 +0x6c:  mov    (%eax),%ecx
08692aa2 +0x6e:  mov    &_ZN10GlobalData12s_pIPGHelperE,%eax
08692aa7 +0x73:  movl   $0x0,0x14(%esp)
08692aaf +0x7b:  movl   $0x0,0x10(%esp)
08692ab7 +0x83:  movl   $0x1,0xc(%esp)
08692abf +0x8b:  mov    0xc(%ebp),%edx
08692ac2 +0x8e:  mov    %edx,0x8(%esp)
08692ac6 +0x92:  mov    0x8(%ebp),%edx
08692ac9 +0x95:  mov    %edx,0x4(%esp)
08692acd +0x99:  mov    %eax,(%esp)
08692ad0 +0x9c:  call   *%ecx
08692ad2 +0x9e:  mov    &_ZN10GlobalData12s_pIPGHelperE,%eax
08692ad7 +0xa3:  mov    (%eax),%eax
08692ad9 +0xa5:  add    $0x2c,%eax
08692adc +0xa8:  mov    (%eax),%ecx
08692ade +0xaa:  mov    &_ZN10GlobalData12s_pIPGHelperE,%eax
08692ae3 +0xaf:  mov    0x8(%ebp),%edx
08692ae6 +0xb2:  mov    %edx,0x4(%esp)
08692aea +0xb6:  mov    %eax,(%esp)
08692aed +0xb9:  call   *%ecx
08692aef +0xbb:  mov    $0x1,%eax
08692af4 +0xc0:  leave
08692af5 +0xc1:  ret
```

## 反编译 C

```c
// CUser::DoGetCeraPointItem @ 0x8692a34

/* CUser::DoGetCeraPointItem(unsigned int, bool, ENUM_ERROR&, unsigned long) */

undefined4 __thiscall
CUser::DoGetCeraPointItem(CUser *this,uint param_1,bool param_2,ENUM_ERROR *param_3,ulong param_4)

{
  if (!param_2) {
    if (param_4 == 0x28ec3d) {
      (**(code **)(*GlobalData::s_pIPGHelper + 0xc))(GlobalData::s_pIPGHelper,this,param_1,3,0,0);
    }
    else {
      (**(code **)(*GlobalData::s_pIPGHelper + 0xc))(GlobalData::s_pIPGHelper,this,param_1,1,0,0);
    }
    (**(code **)(*GlobalData::s_pIPGHelper + 0x2c))(GlobalData::s_pIPGHelper,this);
  }
  return 1;
}
```
