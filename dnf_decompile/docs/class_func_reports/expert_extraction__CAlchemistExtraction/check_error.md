# check_error

`_ZN17expert_extraction20CAlchemistExtraction11check_errorEP5CUsercss`

`expert_extraction::CAlchemistExtraction::check_error(CUser*, char, short, short)`

| 类 | 地址 |
|---|---|
| `expert_extraction::CAlchemistExtraction` | `0x084a3716` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084a3716  _ZN17expert_extraction20CAlchemistExtraction11check_errorEP5CUsercss
#           expert_extraction::CAlchemistExtraction::check_error(CUser*, char, short, short)
# range [0x084a3716, 0x084a37c5]
084a3716 +0x00:  push   %ebp
084a3717 +0x01:  mov    %esp,%ebp
084a3719 +0x03:  push   %ebx
084a371a +0x04:  sub    $0x44,%esp
084a371d +0x07:  mov    0x10(%ebp),%ecx
084a3720 +0x0a:  mov    0x14(%ebp),%edx
084a3723 +0x0d:  mov    0x18(%ebp),%eax
084a3726 +0x10:  mov    %cl,-0x1c(%ebp)
084a3729 +0x13:  mov    %dx,-0x20(%ebp)
084a372d +0x17:  mov    %ax,-0x24(%ebp)
084a3731 +0x1b:  movswl -0x24(%ebp),%ebx
084a3735 +0x1f:  movswl -0x20(%ebp),%ecx
084a3739 +0x23:  movsbl -0x1c(%ebp),%edx
084a373d +0x27:  mov    0x8(%ebp),%eax
084a3740 +0x2a:  mov    %ebx,0x10(%esp)
084a3744 +0x2e:  mov    %ecx,0xc(%esp)
084a3748 +0x32:  mov    %edx,0x8(%esp)
084a374c +0x36:  mov    0xc(%ebp),%edx
084a374f +0x39:  mov    %edx,0x4(%esp)
084a3753 +0x3d:  mov    %eax,(%esp)
084a3756 +0x40:  call   084a2a5e <_ZN17expert_extraction11CExtraction11check_errorEP5CUsercss>  ; expert_extraction::CExtraction::check_error(CUser*, char, short, short)
084a375b +0x45:  mov    %eax,-0xc(%ebp)
084a375e +0x48:  cmpl   $0x0,-0xc(%ebp)
084a3762 +0x4c:  je     084a3769 <+0x53>
084a3764 +0x4e:  mov    -0xc(%ebp),%eax
084a3767 +0x51:  jmp    084a37bf <+0xa9>
084a3769 +0x53:  mov    0x8(%ebp),%eax
084a376c +0x56:  mov    (%eax),%eax
084a376e +0x58:  add    $0x14,%eax
084a3771 +0x5b:  mov    (%eax),%ecx
084a3773 +0x5d:  mov    0x8(%ebp),%eax
084a3776 +0x60:  mov    0xc(%ebp),%edx
084a3779 +0x63:  mov    %edx,0x4(%esp)
084a377d +0x67:  mov    %eax,(%esp)
084a3780 +0x6a:  call   *%ecx
084a3782 +0x6c:  xor    $0x1,%eax
084a3785 +0x6f:  test   %al,%al
084a3787 +0x71:  je     084a3790 <+0x7a>
084a3789 +0x73:  mov    $0x4,%eax
084a378e +0x78:  jmp    084a37bf <+0xa9>
084a3790 +0x7a:  mov    0x8(%ebp),%eax
084a3793 +0x7d:  mov    (%eax),%eax
084a3795 +0x7f:  add    $0x1c,%eax
084a3798 +0x82:  mov    (%eax),%ecx
084a379a +0x84:  movswl -0x24(%ebp),%edx
084a379e +0x88:  movswl -0x20(%ebp),%eax
084a37a2 +0x8c:  mov    %edx,0xc(%esp)
084a37a6 +0x90:  mov    %eax,0x8(%esp)
084a37aa +0x94:  mov    0xc(%ebp),%eax
084a37ad +0x97:  mov    %eax,0x4(%esp)
084a37b1 +0x9b:  mov    0x8(%ebp),%eax
084a37b4 +0x9e:  mov    %eax,(%esp)
084a37b7 +0xa1:  call   *%ecx
084a37b9 +0xa3:  mov    %eax,-0xc(%ebp)
084a37bc +0xa6:  mov    -0xc(%ebp),%eax
084a37bf +0xa9:  add    $0x44,%esp
084a37c2 +0xac:  pop    %ebx
084a37c3 +0xad:  pop    %ebp
084a37c4 +0xae:  ret
084a37c5 +0xaf:  nop
```

## 反编译 C

```c
// expert_extraction::CAlchemistExtraction::check_error @ 0x84a3716

/* expert_extraction::CAlchemistExtraction::check_error(CUser*, char, short, short) */

int __thiscall
expert_extraction::CAlchemistExtraction::check_error
          (CAlchemistExtraction *this,CUser *param_1,char param_2,short param_3,short param_4)

{
  char cVar1;
  int iVar2;
  
  iVar2 = CExtraction::check_error((CExtraction *)this,param_1,param_2,param_3,param_4);
  if (iVar2 == 0) {
    cVar1 = (**(code **)(*(int *)this + 0x14))(this,param_1);
    if (cVar1 == '\x01') {
      iVar2 = (**(code **)(*(int *)this + 0x1c))(this,param_1,(int)param_3,(int)param_4);
    }
    else {
      iVar2 = 4;
    }
  }
  return iVar2;
}
```
