# process

`_ZN32Dispatcher_RepairDisjointMachine7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_RepairDisjointMachine::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_RepairDisjointMachine` | `0x081cfe3c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081cfe3c  _ZN32Dispatcher_RepairDisjointMachine7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_RepairDisjointMachine::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081cfe3c, 0x081cfef1]
081cfe3c +0x00:  push   %ebp
081cfe3d +0x01:  mov    %esp,%ebp
081cfe3f +0x03:  sub    $0x28,%esp
081cfe42 +0x06:  mov    0x14(%ebp),%eax
081cfe45 +0x09:  mov    %eax,-0x10(%ebp)
081cfe48 +0x0c:  mov    0x14(%ebp),%eax
081cfe4b +0x0f:  mov    %eax,0xc(%esp)
081cfe4f +0x13:  mov    0x10(%ebp),%eax
081cfe52 +0x16:  mov    %eax,0x8(%esp)
081cfe56 +0x1a:  mov    0xc(%ebp),%eax
081cfe59 +0x1d:  mov    %eax,0x4(%esp)
081cfe5d +0x21:  mov    0x8(%ebp),%eax
081cfe60 +0x24:  mov    %eax,(%esp)
081cfe63 +0x27:  call   081cfddc <_ZN32Dispatcher_RepairDisjointMachine11check_errorEP5CUserR8MSG_BASER9ParamBase>  ; Dispatcher_RepairDisjointMachine::check_error(CUser*, MSG_BASE&, ParamBase&)
081cfe68 +0x2c:  mov    %eax,%edx
081cfe6a +0x2e:  mov    -0x10(%ebp),%eax
081cfe6d +0x31:  mov    %edx,0x4(%eax)
081cfe70 +0x34:  mov    -0x10(%ebp),%eax
081cfe73 +0x37:  mov    0x4(%eax),%eax
081cfe76 +0x3a:  test   %eax,%eax
081cfe78 +0x3c:  jle    081cfe81 <+0x45>
081cfe7a +0x3e:  mov    $0x0,%eax
081cfe7f +0x43:  jmp    081cfeef <+0xb3>
081cfe81 +0x45:  mov    -0x10(%ebp),%eax
081cfe84 +0x48:  mov    0x4(%eax),%eax
081cfe87 +0x4b:  test   %eax,%eax
081cfe89 +0x4d:  jns    081cfeba <+0x7e>
081cfe8b +0x4f:  mov    0xc(%ebp),%eax
081cfe8e +0x52:  mov    %eax,(%esp)
081cfe91 +0x55:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081cfe96 +0x5a:  mov    -0x10(%ebp),%edx
081cfe99 +0x5d:  mov    0x4(%edx),%edx
081cfe9c +0x60:  mov    %eax,0xc(%esp)
081cfea0 +0x64:  mov    %edx,0x8(%esp)
081cfea4 +0x68:  movl   $&_ZZN32Dispatcher_RepairDisjointMachine7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081cfeac +0x70:  movl   $0x2a54,(%esp)
081cfeb3 +0x77:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081cfeb8 +0x7c:  jmp    081cfeef <+0xb3>
081cfeba +0x7e:  movl   $0x0,-0xc(%ebp)
081cfec1 +0x85:  mov    0xc(%ebp),%eax
081cfec4 +0x88:  mov    %eax,(%esp)
081cfec7 +0x8b:  call   085d35ce <_ZN10expert_job11CDisjointer23OnRepairDisjointMachineEP5CUser>  ; expert_job::CDisjointer::OnRepairDisjointMachine(CUser*)
081cfecc +0x90:  mov    %eax,-0xc(%ebp)
081cfecf +0x93:  cmpl   $0x0,-0xc(%ebp)
081cfed3 +0x97:  setne  %al
081cfed6 +0x9a:  test   %al,%al
081cfed8 +0x9c:  je     081cfeea <+0xae>
081cfeda +0x9e:  mov    -0xc(%ebp),%edx
081cfedd +0xa1:  mov    -0x10(%ebp),%eax
081cfee0 +0xa4:  mov    %edx,0x4(%eax)
081cfee3 +0xa7:  mov    $0x0,%eax
081cfee8 +0xac:  jmp    081cfeef <+0xb3>
081cfeea +0xae:  mov    $0x0,%eax
081cfeef +0xb3:  leave
081cfef0 +0xb4:  ret
081cfef1 +0xb5:  nop
```

## 反编译 C

```c
// Dispatcher_RepairDisjointMachine::process @ 0x81cfe3c

/* Dispatcher_RepairDisjointMachine::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_RepairDisjointMachine::process
          (Dispatcher_RepairDisjointMachine *this,CUser *param_1,MSG_BASE *param_2,
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
      uVar1 = LineFunc(0x2a54,
                       "virtual int Dispatcher_RepairDisjointMachine::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(param_3 + 4),uVar2);
    }
    else {
      iVar3 = expert_job::CDisjointer::OnRepairDisjointMachine(param_1);
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
