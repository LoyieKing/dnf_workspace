# process

`_ZN29Dispatcher_Request_Seria_Buff7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_Request_Seria_Buff::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Request_Seria_Buff` | `0x081dbda0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081dbda0  _ZN29Dispatcher_Request_Seria_Buff7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_Request_Seria_Buff::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081dbda0, 0x081dbe07]
081dbda0 +0x00:  push   %ebp
081dbda1 +0x01:  mov    %esp,%ebp
081dbda3 +0x03:  sub    $0x28,%esp
081dbda6 +0x06:  mov    0x14(%ebp),%eax
081dbda9 +0x09:  mov    %eax,0xc(%esp)
081dbdad +0x0d:  mov    0x10(%ebp),%eax
081dbdb0 +0x10:  mov    %eax,0x8(%esp)
081dbdb4 +0x14:  mov    0xc(%ebp),%eax
081dbdb7 +0x17:  mov    %eax,0x4(%esp)
081dbdbb +0x1b:  mov    0x8(%ebp),%eax
081dbdbe +0x1e:  mov    %eax,(%esp)
081dbdc1 +0x21:  call   081dbcd8 <_ZN29Dispatcher_Request_Seria_Buff11check_errorEP5CUserR8MSG_BASER9ParamBase>  ; Dispatcher_Request_Seria_Buff::check_error(CUser*, MSG_BASE&, ParamBase&)
081dbdc6 +0x26:  mov    %eax,-0x14(%ebp)
081dbdc9 +0x29:  cmpl   $0x0,-0x14(%ebp)
081dbdcd +0x2d:  jle    081dbdd4 <+0x34>
081dbdcf +0x2f:  mov    -0x14(%ebp),%eax
081dbdd2 +0x32:  jmp    081dbe05 <+0x65>
081dbdd4 +0x34:  cmpl   $0x0,-0x14(%ebp)
081dbdd8 +0x38:  jns    081dbde1 <+0x41>
081dbdda +0x3a:  mov    $0xffffffff,%eax
081dbddf +0x3f:  jmp    081dbe05 <+0x65>
081dbde1 +0x41:  mov    0x10(%ebp),%eax
081dbde4 +0x44:  mov    %eax,-0x10(%ebp)
081dbde7 +0x47:  mov    0x14(%ebp),%eax
081dbdea +0x4a:  mov    %eax,-0xc(%ebp)
081dbded +0x4d:  mov    0xc(%ebp),%eax
081dbdf0 +0x50:  movl   $0x0,0x4(%esp)
081dbdf8 +0x58:  mov    %eax,(%esp)
081dbdfb +0x5b:  call   0822fb50 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x51fa>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x51fa
081dbe00 +0x60:  mov    $0x0,%eax
081dbe05 +0x65:  leave
081dbe06 +0x66:  ret
081dbe07 +0x67:  nop
```

## 反编译 C

```c
// Dispatcher_Request_Seria_Buff::process @ 0x81dbda0

/* Dispatcher_Request_Seria_Buff::process(CUser*, MSG_BASE&, ParamBase&) */

int Dispatcher_Request_Seria_Buff::process(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  int iVar1;
  
  iVar1 = check_error(param_1,param_2,param_3);
  if (iVar1 < 1) {
    if (iVar1 < 0) {
      iVar1 = -1;
    }
    else {
      CUserCharacInfo::set_growth_power_exp_reward_right((CUserCharacInfo *)param_2,false);
      iVar1 = 0;
    }
  }
  return iVar1;
}
```
