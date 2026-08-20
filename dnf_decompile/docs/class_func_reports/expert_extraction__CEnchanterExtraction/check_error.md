# check_error

`_ZN17expert_extraction20CEnchanterExtraction11check_errorEP5CUsercss`

`expert_extraction::CEnchanterExtraction::check_error(CUser*, char, short, short)`

| 类 | 地址 |
|---|---|
| `expert_extraction::CEnchanterExtraction` | `0x084a3cb6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084a3cb6  _ZN17expert_extraction20CEnchanterExtraction11check_errorEP5CUsercss
#           expert_extraction::CEnchanterExtraction::check_error(CUser*, char, short, short)
# range [0x084a3cb6, 0x084a3d65]
084a3cb6 +0x00:  push   %ebp
084a3cb7 +0x01:  mov    %esp,%ebp
084a3cb9 +0x03:  push   %ebx
084a3cba +0x04:  sub    $0x44,%esp
084a3cbd +0x07:  mov    0x10(%ebp),%ecx
084a3cc0 +0x0a:  mov    0x14(%ebp),%edx
084a3cc3 +0x0d:  mov    0x18(%ebp),%eax
084a3cc6 +0x10:  mov    %cl,-0x1c(%ebp)
084a3cc9 +0x13:  mov    %dx,-0x20(%ebp)
084a3ccd +0x17:  mov    %ax,-0x24(%ebp)
084a3cd1 +0x1b:  movswl -0x24(%ebp),%ebx
084a3cd5 +0x1f:  movswl -0x20(%ebp),%ecx
084a3cd9 +0x23:  movsbl -0x1c(%ebp),%edx
084a3cdd +0x27:  mov    0x8(%ebp),%eax
084a3ce0 +0x2a:  mov    %ebx,0x10(%esp)
084a3ce4 +0x2e:  mov    %ecx,0xc(%esp)
084a3ce8 +0x32:  mov    %edx,0x8(%esp)
084a3cec +0x36:  mov    0xc(%ebp),%edx
084a3cef +0x39:  mov    %edx,0x4(%esp)
084a3cf3 +0x3d:  mov    %eax,(%esp)
084a3cf6 +0x40:  call   084a2a5e <_ZN17expert_extraction11CExtraction11check_errorEP5CUsercss>  ; expert_extraction::CExtraction::check_error(CUser*, char, short, short)
084a3cfb +0x45:  mov    %eax,-0xc(%ebp)
084a3cfe +0x48:  cmpl   $0x0,-0xc(%ebp)
084a3d02 +0x4c:  je     084a3d09 <+0x53>
084a3d04 +0x4e:  mov    -0xc(%ebp),%eax
084a3d07 +0x51:  jmp    084a3d5f <+0xa9>
084a3d09 +0x53:  mov    0x8(%ebp),%eax
084a3d0c +0x56:  mov    (%eax),%eax
084a3d0e +0x58:  add    $0x14,%eax
084a3d11 +0x5b:  mov    (%eax),%ecx
084a3d13 +0x5d:  mov    0x8(%ebp),%eax
084a3d16 +0x60:  mov    0xc(%ebp),%edx
084a3d19 +0x63:  mov    %edx,0x4(%esp)
084a3d1d +0x67:  mov    %eax,(%esp)
084a3d20 +0x6a:  call   *%ecx
084a3d22 +0x6c:  xor    $0x1,%eax
084a3d25 +0x6f:  test   %al,%al
084a3d27 +0x71:  je     084a3d30 <+0x7a>
084a3d29 +0x73:  mov    $0x4,%eax
084a3d2e +0x78:  jmp    084a3d5f <+0xa9>
084a3d30 +0x7a:  mov    0x8(%ebp),%eax
084a3d33 +0x7d:  mov    (%eax),%eax
084a3d35 +0x7f:  add    $0x1c,%eax
084a3d38 +0x82:  mov    (%eax),%ecx
084a3d3a +0x84:  movswl -0x24(%ebp),%edx
084a3d3e +0x88:  movswl -0x20(%ebp),%eax
084a3d42 +0x8c:  mov    %edx,0xc(%esp)
084a3d46 +0x90:  mov    %eax,0x8(%esp)
084a3d4a +0x94:  mov    0xc(%ebp),%eax
084a3d4d +0x97:  mov    %eax,0x4(%esp)
084a3d51 +0x9b:  mov    0x8(%ebp),%eax
084a3d54 +0x9e:  mov    %eax,(%esp)
084a3d57 +0xa1:  call   *%ecx
084a3d59 +0xa3:  mov    %eax,-0xc(%ebp)
084a3d5c +0xa6:  mov    -0xc(%ebp),%eax
084a3d5f +0xa9:  add    $0x44,%esp
084a3d62 +0xac:  pop    %ebx
084a3d63 +0xad:  pop    %ebp
084a3d64 +0xae:  ret
084a3d65 +0xaf:  nop
```

## 反编译 C

```c
// expert_extraction::CEnchanterExtraction::check_error @ 0x84a3cb6

/* expert_extraction::CEnchanterExtraction::check_error(CUser*, char, short, short) */

int __thiscall
expert_extraction::CEnchanterExtraction::check_error
          (CEnchanterExtraction *this,CUser *param_1,char param_2,short param_3,short param_4)

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
