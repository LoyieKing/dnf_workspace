# send

`_ZN29Dispatcher_Request_Seria_Buff4sendEP5CUserR9ParamBase`

`Dispatcher_Request_Seria_Buff::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Request_Seria_Buff` | `0x081dbe08` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081dbe08  _ZN29Dispatcher_Request_Seria_Buff4sendEP5CUserR9ParamBase
#           Dispatcher_Request_Seria_Buff::send(CUser*, ParamBase&)
# range [0x081dbe08, 0x081dbe6f]
081dbe08 +0x00:  push   %ebp
081dbe09 +0x01:  mov    %esp,%ebp
081dbe0b +0x03:  sub    $0x28,%esp
081dbe0e +0x06:  mov    0x10(%ebp),%eax
081dbe11 +0x09:  mov    %eax,-0xc(%ebp)
081dbe14 +0x0c:  mov    -0xc(%ebp),%eax
081dbe17 +0x0f:  mov    0x4(%eax),%eax
081dbe1a +0x12:  test   %eax,%eax
081dbe1c +0x14:  jne    081dbe4d <+0x45>
081dbe1e +0x16:  mov    0xc(%ebp),%eax
081dbe21 +0x19:  mov    %eax,(%esp)
081dbe24 +0x1c:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
081dbe29 +0x21:  mov    %eax,0x4(%esp)
081dbe2d +0x25:  mov    0xc(%ebp),%eax
081dbe30 +0x28:  mov    %eax,(%esp)
081dbe33 +0x2b:  call   0868dace <_ZN5CUser27set_growth_power_exp_rewardEi>  ; CUser::set_growth_power_exp_reward(int)
081dbe38 +0x30:  movl   $0x1b1,0x4(%esp)
081dbe40 +0x38:  mov    0xc(%ebp),%eax
081dbe43 +0x3b:  mov    %eax,(%esp)
081dbe46 +0x3e:  call   0867bea0 <_ZN5CUser15SendCmdOkPacketE14ENUM_CMDPACKET>  ; CUser::SendCmdOkPacket(ENUM_CMDPACKET)
081dbe4b +0x43:  jmp    081dbe6d <+0x65>
081dbe4d +0x45:  mov    -0xc(%ebp),%eax
081dbe50 +0x48:  mov    0x4(%eax),%eax
081dbe53 +0x4b:  movzbl %al,%eax
081dbe56 +0x4e:  mov    %eax,0x8(%esp)
081dbe5a +0x52:  movl   $0x1b1,0x4(%esp)
081dbe62 +0x5a:  mov    0xc(%ebp),%eax
081dbe65 +0x5d:  mov    %eax,(%esp)
081dbe68 +0x60:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081dbe6d +0x65:  leave
081dbe6e +0x66:  ret
081dbe6f +0x67:  nop
```

## 反编译 C

```c
// Dispatcher_Request_Seria_Buff::send @ 0x81dbe08

/* Dispatcher_Request_Seria_Buff::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_Request_Seria_Buff::send
          (Dispatcher_Request_Seria_Buff *this,CUser *param_1,ParamBase *param_2)

{
  int iVar1;
  
  if (*(int *)(param_2 + 4) == 0) {
    iVar1 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
    CUser::set_growth_power_exp_reward(param_1,iVar1);
    CUser::SendCmdOkPacket(param_1,0x1b1);
  }
  else {
    CUser::SendCmdErrorPacket(param_1,0x1b1,*(uint *)(param_2 + 4) & 0xff);
  }
  return;
}
```
