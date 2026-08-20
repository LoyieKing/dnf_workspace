# check_error

`_ZN19DisPatcher_UseSkill11check_errorEP5CUserR8MSG_BASER9ParamBase`

`DisPatcher_UseSkill::check_error(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_UseSkill` | `0x081cad80` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081cad80  _ZN19DisPatcher_UseSkill11check_errorEP5CUserR8MSG_BASER9ParamBase
#           DisPatcher_UseSkill::check_error(CUser*, MSG_BASE&, ParamBase&)
# range [0x081cad80, 0x081cada9]
081cad80 +0x00:  push   %ebp
081cad81 +0x01:  mov    %esp,%ebp
081cad83 +0x03:  sub    $0x18,%esp
081cad86 +0x06:  mov    0xc(%ebp),%eax
081cad89 +0x09:  mov    %eax,(%esp)
081cad8c +0x0c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081cad91 +0x11:  cmp    $0x5,%eax
081cad94 +0x14:  setne  %al
081cad97 +0x17:  test   %al,%al
081cad99 +0x19:  je     081cada2 <+0x22>
081cad9b +0x1b:  mov    $0x7fffffff,%eax
081cada0 +0x20:  jmp    081cada7 <+0x27>
081cada2 +0x22:  mov    $0x0,%eax
081cada7 +0x27:  leave
081cada8 +0x28:  ret
081cada9 +0x29:  nop
```

## 反编译 C

```c
// DisPatcher_UseSkill::check_error @ 0x81cad80

/* DisPatcher_UseSkill::check_error(CUser*, MSG_BASE&, ParamBase&) */

undefined4 DisPatcher_UseSkill::check_error(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (iVar1 == 5) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x7fffffff;
  }
  return uVar2;
}
```
