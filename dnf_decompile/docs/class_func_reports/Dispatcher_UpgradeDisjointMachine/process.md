# process

`_ZN33Dispatcher_UpgradeDisjointMachine7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_UpgradeDisjointMachine::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_UpgradeDisjointMachine` | `0x081cff94` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081cff94  _ZN33Dispatcher_UpgradeDisjointMachine7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_UpgradeDisjointMachine::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081cff94, 0x081d0049]
081cff94 +0x00:  push   %ebp
081cff95 +0x01:  mov    %esp,%ebp
081cff97 +0x03:  sub    $0x28,%esp
081cff9a +0x06:  mov    0x14(%ebp),%eax
081cff9d +0x09:  mov    %eax,-0x10(%ebp)
081cffa0 +0x0c:  mov    0x14(%ebp),%eax
081cffa3 +0x0f:  mov    %eax,0xc(%esp)
081cffa7 +0x13:  mov    0x10(%ebp),%eax
081cffaa +0x16:  mov    %eax,0x8(%esp)
081cffae +0x1a:  mov    0xc(%ebp),%eax
081cffb1 +0x1d:  mov    %eax,0x4(%esp)
081cffb5 +0x21:  mov    0x8(%ebp),%eax
081cffb8 +0x24:  mov    %eax,(%esp)
081cffbb +0x27:  call   081cff34 <_ZN33Dispatcher_UpgradeDisjointMachine11check_errorEP5CUserR8MSG_BASER9ParamBase>  ; Dispatcher_UpgradeDisjointMachine::check_error(CUser*, MSG_BASE&, ParamBase&)
081cffc0 +0x2c:  mov    %eax,%edx
081cffc2 +0x2e:  mov    -0x10(%ebp),%eax
081cffc5 +0x31:  mov    %edx,0x4(%eax)
081cffc8 +0x34:  mov    -0x10(%ebp),%eax
081cffcb +0x37:  mov    0x4(%eax),%eax
081cffce +0x3a:  test   %eax,%eax
081cffd0 +0x3c:  jle    081cffd9 <+0x45>
081cffd2 +0x3e:  mov    $0x0,%eax
081cffd7 +0x43:  jmp    081d0047 <+0xb3>
081cffd9 +0x45:  mov    -0x10(%ebp),%eax
081cffdc +0x48:  mov    0x4(%eax),%eax
081cffdf +0x4b:  test   %eax,%eax
081cffe1 +0x4d:  jns    081d0012 <+0x7e>
081cffe3 +0x4f:  mov    0xc(%ebp),%eax
081cffe6 +0x52:  mov    %eax,(%esp)
081cffe9 +0x55:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081cffee +0x5a:  mov    -0x10(%ebp),%edx
081cfff1 +0x5d:  mov    0x4(%edx),%edx
081cfff4 +0x60:  mov    %eax,0xc(%esp)
081cfff8 +0x64:  mov    %edx,0x8(%esp)
081cfffc +0x68:  movl   $&_ZZN33Dispatcher_UpgradeDisjointMachine7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081d0004 +0x70:  movl   $0x2a89,(%esp)
081d000b +0x77:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d0010 +0x7c:  jmp    081d0047 <+0xb3>
081d0012 +0x7e:  movl   $0x0,-0xc(%ebp)
081d0019 +0x85:  mov    0xc(%ebp),%eax
081d001c +0x88:  mov    %eax,(%esp)
081d001f +0x8b:  call   085d37e8 <_ZN10expert_job11CDisjointer24OnUpgradeDisjointMachineEP5CUser>  ; expert_job::CDisjointer::OnUpgradeDisjointMachine(CUser*)
081d0024 +0x90:  mov    %eax,-0xc(%ebp)
081d0027 +0x93:  cmpl   $0x0,-0xc(%ebp)
081d002b +0x97:  setne  %al
081d002e +0x9a:  test   %al,%al
081d0030 +0x9c:  je     081d0042 <+0xae>
081d0032 +0x9e:  mov    -0xc(%ebp),%edx
081d0035 +0xa1:  mov    -0x10(%ebp),%eax
081d0038 +0xa4:  mov    %edx,0x4(%eax)
081d003b +0xa7:  mov    $0x0,%eax
081d0040 +0xac:  jmp    081d0047 <+0xb3>
081d0042 +0xae:  mov    $0x0,%eax
081d0047 +0xb3:  leave
081d0048 +0xb4:  ret
081d0049 +0xb5:  nop
```

## 反编译 C

```c
// Dispatcher_UpgradeDisjointMachine::process @ 0x81cff94

/* Dispatcher_UpgradeDisjointMachine::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_UpgradeDisjointMachine::process
          (Dispatcher_UpgradeDisjointMachine *this,CUser *param_1,MSG_BASE *param_2,
          ParamBase *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = check_error((CUser *)this,(MSG_BASE *)param_1,(ParamBase *)param_2);
  *(undefined4 *)(param_3 + 4) = uVar1;
  if (*(int *)(param_3 + 4) < 1) {
    if (*(int *)(param_3 + 4) < 0) {
      uVar2 = CUser::get_acc_id(param_1);
      uVar1 = LineFunc(0x2a89,
                       "virtual int Dispatcher_UpgradeDisjointMachine::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(param_3 + 4),uVar2);
    }
    else {
      iVar3 = expert_job::CDisjointer::OnUpgradeDisjointMachine(param_1);
      if (iVar3 == 0) {
        uVar1 = 0;
      }
      else {
        *(int *)(param_3 + 4) = iVar3;
        uVar1 = 0;
      }
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
