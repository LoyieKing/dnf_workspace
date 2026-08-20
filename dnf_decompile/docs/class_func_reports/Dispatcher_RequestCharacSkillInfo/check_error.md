# check_error

`_ZN33Dispatcher_RequestCharacSkillInfo11check_errorEP5CUserR8MSG_BASE`

`Dispatcher_RequestCharacSkillInfo::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_RequestCharacSkillInfo` | `0x081e3c08` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e3c08  _ZN33Dispatcher_RequestCharacSkillInfo11check_errorEP5CUserR8MSG_BASE
#           Dispatcher_RequestCharacSkillInfo::check_error(CUser*, MSG_BASE&)
# range [0x081e3c08, 0x081e3cf9]
081e3c08 +0x00:  push   %ebp
081e3c09 +0x01:  mov    %esp,%ebp
081e3c0b +0x03:  push   %ebx
081e3c0c +0x04:  sub    $0x24,%esp
081e3c0f +0x07:  cmpl   $0x0,0xc(%ebp)
081e3c13 +0x0b:  jne    081e3c1f <+0x17>
081e3c15 +0x0d:  mov    $0xffffffff,%eax
081e3c1a +0x12:  jmp    081e3cf3 <+0xeb>
081e3c1f +0x17:  mov    0x10(%ebp),%eax
081e3c22 +0x1a:  mov    %eax,-0x10(%ebp)
081e3c25 +0x1d:  mov    0xc(%ebp),%eax
081e3c28 +0x20:  mov    %eax,(%esp)
081e3c2b +0x23:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081e3c30 +0x28:  cmp    $0x2,%eax
081e3c33 +0x2b:  setle  %al
081e3c36 +0x2e:  test   %al,%al
081e3c38 +0x30:  je     081e3c44 <+0x3c>
081e3c3a +0x32:  mov    $0xffffffff,%eax
081e3c3f +0x37:  jmp    081e3cf3 <+0xeb>
081e3c44 +0x3c:  mov    0xc(%ebp),%eax
081e3c47 +0x3f:  add    $0x796e8,%eax
081e3c4c +0x44:  mov    %eax,(%esp)
081e3c4f +0x47:  call   081a0b9a <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x289>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x289
081e3c54 +0x4c:  mov    %eax,-0xc(%ebp)
081e3c57 +0x4f:  mov    -0x10(%ebp),%eax
081e3c5a +0x52:  movzbl 0xd(%eax),%eax
081e3c5e +0x56:  movsbl %al,%eax
081e3c61 +0x59:  cmp    -0xc(%ebp),%eax
081e3c64 +0x5c:  jge    081e3c75 <+0x6d>
081e3c66 +0x5e:  mov    -0x10(%ebp),%eax
081e3c69 +0x61:  movzbl 0xd(%eax),%eax
081e3c6d +0x65:  movsbl %al,%eax
081e3c70 +0x68:  cmp    -0xc(%ebp),%eax
081e3c73 +0x6b:  jl     081e3c7c <+0x74>
081e3c75 +0x6d:  mov    $0x39,%eax
081e3c7a +0x72:  jmp    081e3cf3 <+0xeb>
081e3c7c +0x74:  mov    -0x10(%ebp),%eax
081e3c7f +0x77:  movzbl 0xd(%eax),%eax
081e3c83 +0x7b:  movsbl %al,%eax
081e3c86 +0x7e:  mov    0xc(%ebp),%edx
081e3c89 +0x81:  add    $0x796e8,%edx
081e3c8f +0x87:  mov    %eax,0x4(%esp)
081e3c93 +0x8b:  mov    %edx,(%esp)
081e3c96 +0x8e:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
081e3c9b +0x93:  mov    (%eax),%eax
081e3c9d +0x95:  test   %eax,%eax
081e3c9f +0x97:  sete   %al
081e3ca2 +0x9a:  test   %al,%al
081e3ca4 +0x9c:  je     081e3cad <+0xa5>
081e3ca6 +0x9e:  mov    $0x15,%eax
081e3cab +0xa3:  jmp    081e3cf3 <+0xeb>
081e3cad +0xa5:  mov    -0x10(%ebp),%eax
081e3cb0 +0xa8:  movzbl 0xd(%eax),%eax
081e3cb4 +0xac:  movsbl %al,%eax
081e3cb7 +0xaf:  mov    0xc(%ebp),%edx
081e3cba +0xb2:  add    $0x796e8,%edx
081e3cc0 +0xb8:  mov    %eax,0x4(%esp)
081e3cc4 +0xbc:  mov    %edx,(%esp)
081e3cc7 +0xbf:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
081e3ccc +0xc4:  movzwl 0x27(%eax),%eax
081e3cd0 +0xc8:  movswl %ax,%ebx
081e3cd3 +0xcb:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081e3cd8 +0xd0:  mov    0x629c(%eax),%eax
081e3cde +0xd6:  cmp    %eax,%ebx
081e3ce0 +0xd8:  setl   %al
081e3ce3 +0xdb:  test   %al,%al
081e3ce5 +0xdd:  je     081e3cee <+0xe6>
081e3ce7 +0xdf:  mov    $0xe,%eax
081e3cec +0xe4:  jmp    081e3cf3 <+0xeb>
081e3cee +0xe6:  mov    $0x0,%eax
081e3cf3 +0xeb:  add    $0x24,%esp
081e3cf6 +0xee:  pop    %ebx
081e3cf7 +0xef:  pop    %ebp
081e3cf8 +0xf0:  ret
081e3cf9 +0xf1:  nop
```

## 反编译 C

```c
// Dispatcher_RequestCharacSkillInfo::check_error @ 0x81e3c08

/* Dispatcher_RequestCharacSkillInfo::check_error(CUser*, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_RequestCharacSkillInfo::check_error
          (Dispatcher_RequestCharacSkillInfo *this,CUser *param_1,MSG_BASE *param_2)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  
  if (param_1 == (CUser *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar3 = CUser::get_state(param_1);
    if (iVar3 < 3) {
      uVar2 = 0xffffffff;
    }
    else {
      iVar3 = std::vector<_Charac_info,std::allocator<_Charac_info>>::size
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(param_1 + 0x796e8));
      if (((char)param_2[0xd] < iVar3) && ((char)param_2[0xd] < iVar3)) {
        piVar4 = (int *)std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                                  ((vector<_Charac_info,std::allocator<_Charac_info>> *)
                                   (param_1 + 0x796e8),(int)(char)param_2[0xd]);
        if (*piVar4 == 0) {
          uVar2 = 0x15;
        }
        else {
          iVar3 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                            ((vector<_Charac_info,std::allocator<_Charac_info>> *)
                             (param_1 + 0x796e8),(int)(char)param_2[0xd]);
          sVar1 = *(short *)(iVar3 + 0x27);
          iVar3 = G_CDataManager();
          if ((int)sVar1 < *(int *)(iVar3 + 0x629c)) {
            uVar2 = 0xe;
          }
          else {
            uVar2 = 0;
          }
        }
      }
      else {
        uVar2 = 0x39;
      }
    }
  }
  return uVar2;
}
```
