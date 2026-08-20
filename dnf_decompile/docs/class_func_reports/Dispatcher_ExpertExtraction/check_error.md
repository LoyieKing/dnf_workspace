# check_error

`_ZN27Dispatcher_ExpertExtraction11check_errorEP5CUserR8MSG_BASE`

`Dispatcher_ExpertExtraction::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_ExpertExtraction` | `0x081d962e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d962e  _ZN27Dispatcher_ExpertExtraction11check_errorEP5CUserR8MSG_BASE
#           Dispatcher_ExpertExtraction::check_error(CUser*, MSG_BASE&)
# range [0x081d962e, 0x081d96ff]
081d962e +0x00:  push   %ebp
081d962f +0x01:  mov    %esp,%ebp
081d9631 +0x03:  push   %ebx
081d9632 +0x04:  sub    $0x34,%esp
081d9635 +0x07:  cmpl   $0x0,0xc(%ebp)
081d9639 +0x0b:  jne    081d9645 <+0x17>
081d963b +0x0d:  mov    $0xffffffff,%eax
081d9640 +0x12:  jmp    081d96f9 <+0xcb>
081d9645 +0x17:  mov    0xc(%ebp),%eax
081d9648 +0x1a:  mov    %eax,(%esp)
081d964b +0x1d:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081d9650 +0x22:  cmp    $0x2,%eax
081d9653 +0x25:  setle  %al
081d9656 +0x28:  test   %al,%al
081d9658 +0x2a:  je     081d9664 <+0x36>
081d965a +0x2c:  mov    $0xffffffff,%eax
081d965f +0x31:  jmp    081d96f9 <+0xcb>
081d9664 +0x36:  mov    0x10(%ebp),%eax
081d9667 +0x39:  mov    %eax,-0x18(%ebp)
081d966a +0x3c:  mov    -0x18(%ebp),%eax
081d966d +0x3f:  movzbl 0xd(%eax),%eax
081d9671 +0x43:  movsbl %al,%eax
081d9674 +0x46:  mov    %eax,(%esp)
081d9677 +0x49:  call   084a2904 <_ZN17expert_extraction16GetExtracterTypeE20ENUM_EXPERT_JOB_TYPE>  ; expert_extraction::GetExtracterType(ENUM_EXPERT_JOB_TYPE)
081d967c +0x4e:  mov    %eax,-0x14(%ebp)
081d967f +0x51:  cmpl   $0x3,-0x14(%ebp)
081d9683 +0x55:  jne    081d968c <+0x5e>
081d9685 +0x57:  mov    $0x1,%eax
081d968a +0x5c:  jmp    081d96f9 <+0xcb>
081d968c +0x5e:  mov    -0x14(%ebp),%edx
081d968f +0x61:  mov    &_ZN10GlobalData15g_ExtractionMgrE,%eax
081d9694 +0x66:  mov    %edx,0x4(%esp)
081d9698 +0x6a:  mov    %eax,(%esp)
081d969b +0x6d:  call   084a3166 <_ZN17expert_extraction14CExtractionMgr13get_extracterEj>  ; expert_extraction::CExtractionMgr::get_extracter(unsigned int)
081d96a0 +0x72:  mov    %eax,-0x10(%ebp)
081d96a3 +0x75:  cmpl   $0x0,-0x10(%ebp)
081d96a7 +0x79:  jne    081d96b0 <+0x82>
081d96a9 +0x7b:  mov    $0x1,%eax
081d96ae +0x80:  jmp    081d96f9 <+0xcb>
081d96b0 +0x82:  mov    -0x10(%ebp),%eax
081d96b3 +0x85:  mov    (%eax),%eax
081d96b5 +0x87:  add    $0xc,%eax
081d96b8 +0x8a:  mov    (%eax),%ebx
081d96ba +0x8c:  mov    -0x18(%ebp),%eax
081d96bd +0x8f:  movzwl 0x10(%eax),%eax
081d96c1 +0x93:  movswl %ax,%ecx
081d96c4 +0x96:  mov    -0x18(%ebp),%eax
081d96c7 +0x99:  movzwl 0xe(%eax),%eax
081d96cb +0x9d:  movswl %ax,%edx
081d96ce +0xa0:  mov    -0x18(%ebp),%eax
081d96d1 +0xa3:  movzbl 0xd(%eax),%eax
081d96d5 +0xa7:  movsbl %al,%eax
081d96d8 +0xaa:  mov    %ecx,0x10(%esp)
081d96dc +0xae:  mov    %edx,0xc(%esp)
081d96e0 +0xb2:  mov    %eax,0x8(%esp)
081d96e4 +0xb6:  mov    0xc(%ebp),%eax
081d96e7 +0xb9:  mov    %eax,0x4(%esp)
081d96eb +0xbd:  mov    -0x10(%ebp),%eax
081d96ee +0xc0:  mov    %eax,(%esp)
081d96f1 +0xc3:  call   *%ebx
081d96f3 +0xc5:  mov    %eax,-0xc(%ebp)
081d96f6 +0xc8:  mov    -0xc(%ebp),%eax
081d96f9 +0xcb:  add    $0x34,%esp
081d96fc +0xce:  pop    %ebx
081d96fd +0xcf:  pop    %ebp
081d96fe +0xd0:  ret
081d96ff +0xd1:  nop
```

## 反编译 C

```c
// Dispatcher_ExpertExtraction::check_error @ 0x81d962e

/* Dispatcher_ExpertExtraction::check_error(CUser*, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_ExpertExtraction::check_error
          (Dispatcher_ExpertExtraction *this,CUser *param_1,MSG_BASE *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  
  if (param_1 == (CUser *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = CUser::get_state(param_1);
    if (iVar2 < 3) {
      uVar1 = 0xffffffff;
    }
    else {
      uVar3 = expert_extraction::GetExtracterType((int)(char)param_2[0xd]);
      if (uVar3 == 3) {
        uVar1 = 1;
      }
      else {
        piVar4 = (int *)expert_extraction::CExtractionMgr::get_extracter
                                  (GlobalData::g_ExtractionMgr,uVar3);
        if (piVar4 == (int *)0x0) {
          uVar1 = 1;
        }
        else {
          uVar1 = (**(code **)(*piVar4 + 0xc))
                            (piVar4,param_1,(int)(char)param_2[0xd],(int)*(short *)(param_2 + 0xe),
                             (int)*(short *)(param_2 + 0x10));
        }
      }
    }
  }
  return uVar1;
}
```
