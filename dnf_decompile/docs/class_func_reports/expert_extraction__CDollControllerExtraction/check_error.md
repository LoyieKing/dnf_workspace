# check_error

`_ZN17expert_extraction25CDollControllerExtraction11check_errorEP5CUsercss`

`expert_extraction::CDollControllerExtraction::check_error(CUser*, char, short, short)`

| 类 | 地址 |
|---|---|
| `expert_extraction::CDollControllerExtraction` | `0x084a43aa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084a43aa  _ZN17expert_extraction25CDollControllerExtraction11check_errorEP5CUsercss
#           expert_extraction::CDollControllerExtraction::check_error(CUser*, char, short, short)
# range [0x084a43aa, 0x084a4458]
084a43aa +0x00:  push   %ebp
084a43ab +0x01:  mov    %esp,%ebp
084a43ad +0x03:  push   %ebx
084a43ae +0x04:  sub    $0x44,%esp
084a43b1 +0x07:  mov    0x10(%ebp),%ecx
084a43b4 +0x0a:  mov    0x14(%ebp),%edx
084a43b7 +0x0d:  mov    0x18(%ebp),%eax
084a43ba +0x10:  mov    %cl,-0x1c(%ebp)
084a43bd +0x13:  mov    %dx,-0x20(%ebp)
084a43c1 +0x17:  mov    %ax,-0x24(%ebp)
084a43c5 +0x1b:  movswl -0x24(%ebp),%ebx
084a43c9 +0x1f:  movswl -0x20(%ebp),%ecx
084a43cd +0x23:  movsbl -0x1c(%ebp),%edx
084a43d1 +0x27:  mov    0x8(%ebp),%eax
084a43d4 +0x2a:  mov    %ebx,0x10(%esp)
084a43d8 +0x2e:  mov    %ecx,0xc(%esp)
084a43dc +0x32:  mov    %edx,0x8(%esp)
084a43e0 +0x36:  mov    0xc(%ebp),%edx
084a43e3 +0x39:  mov    %edx,0x4(%esp)
084a43e7 +0x3d:  mov    %eax,(%esp)
084a43ea +0x40:  call   084a2a5e <_ZN17expert_extraction11CExtraction11check_errorEP5CUsercss>  ; expert_extraction::CExtraction::check_error(CUser*, char, short, short)
084a43ef +0x45:  mov    %eax,-0xc(%ebp)
084a43f2 +0x48:  cmpl   $0x0,-0xc(%ebp)
084a43f6 +0x4c:  je     084a43fd <+0x53>
084a43f8 +0x4e:  mov    -0xc(%ebp),%eax
084a43fb +0x51:  jmp    084a4453 <+0xa9>
084a43fd +0x53:  mov    0x8(%ebp),%eax
084a4400 +0x56:  mov    (%eax),%eax
084a4402 +0x58:  add    $0x14,%eax
084a4405 +0x5b:  mov    (%eax),%ecx
084a4407 +0x5d:  mov    0x8(%ebp),%eax
084a440a +0x60:  mov    0xc(%ebp),%edx
084a440d +0x63:  mov    %edx,0x4(%esp)
084a4411 +0x67:  mov    %eax,(%esp)
084a4414 +0x6a:  call   *%ecx
084a4416 +0x6c:  xor    $0x1,%eax
084a4419 +0x6f:  test   %al,%al
084a441b +0x71:  je     084a4424 <+0x7a>
084a441d +0x73:  mov    $0x4,%eax
084a4422 +0x78:  jmp    084a4453 <+0xa9>
084a4424 +0x7a:  mov    0x8(%ebp),%eax
084a4427 +0x7d:  mov    (%eax),%eax
084a4429 +0x7f:  add    $0x1c,%eax
084a442c +0x82:  mov    (%eax),%ecx
084a442e +0x84:  movswl -0x24(%ebp),%edx
084a4432 +0x88:  movswl -0x20(%ebp),%eax
084a4436 +0x8c:  mov    %edx,0xc(%esp)
084a443a +0x90:  mov    %eax,0x8(%esp)
084a443e +0x94:  mov    0xc(%ebp),%eax
084a4441 +0x97:  mov    %eax,0x4(%esp)
084a4445 +0x9b:  mov    0x8(%ebp),%eax
084a4448 +0x9e:  mov    %eax,(%esp)
084a444b +0xa1:  call   *%ecx
084a444d +0xa3:  mov    %eax,-0xc(%ebp)
084a4450 +0xa6:  mov    -0xc(%ebp),%eax
084a4453 +0xa9:  add    $0x44,%esp
084a4456 +0xac:  pop    %ebx
084a4457 +0xad:  pop    %ebp
084a4458 +0xae:  ret
```

## 反编译 C

```c
// expert_extraction::CDollControllerExtraction::check_error @ 0x84a43aa

/* expert_extraction::CDollControllerExtraction::check_error(CUser*, char, short, short) */

int __thiscall
expert_extraction::CDollControllerExtraction::check_error
          (CDollControllerExtraction *this,CUser *param_1,char param_2,short param_3,short param_4)

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
