# checkWorkState

`_ZN4ARAD10DISPATCHER32Dispatcher_AradUseAvatarRecharge14checkWorkStateEP5CUserRN4arad24SigAradUseAvatarRechargeE`

`ARAD::DISPATCHER::Dispatcher_AradUseAvatarRecharge::checkWorkState(CUser*, arad::SigAradUseAvatarRecharge&)`

| 类 | 地址 |
|---|---|
| `ARAD::DISPATCHER::Dispatcher_AradUseAvatarRecharge` | `0x0819f9d6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0819f9d6  _ZN4ARAD10DISPATCHER32Dispatcher_AradUseAvatarRecharge14checkWorkStateEP5CUserRN4arad24SigAradUseAvatarRechargeE
#           ARAD::DISPATCHER::Dispatcher_AradUseAvatarRecharge::checkWorkState(CUser*, arad::SigAradUseAvatarRecharge&)
# range [0x0819f9d6, 0x0819fa55]
0819f9d6 +0x00:  push   %ebp
0819f9d7 +0x01:  mov    %esp,%ebp
0819f9d9 +0x03:  sub    $0x28,%esp
0819f9dc +0x06:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%eax
0819f9e1 +0x0b:  movl   $0x2a,0x8(%esp)
0819f9e9 +0x13:  mov    0xc(%ebp),%edx
0819f9ec +0x16:  mov    %edx,0x4(%esp)
0819f9f0 +0x1a:  mov    %eax,(%esp)
0819f9f3 +0x1d:  call   08288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>  ; CSecu_ProtectionField::Check(CUser*, SECURITY_PROTCTION)
0819f9f8 +0x22:  mov    %eax,-0xc(%ebp)
0819f9fb +0x25:  cmpl   $0x0,-0xc(%ebp)
0819f9ff +0x29:  je     0819fa25 <+0x4f>
0819fa01 +0x2b:  mov    -0xc(%ebp),%eax
0819fa04 +0x2e:  movzbl %al,%eax
0819fa07 +0x31:  mov    %eax,0x8(%esp)
0819fa0b +0x35:  movl   $0x24d,0x4(%esp)
0819fa13 +0x3d:  mov    0xc(%ebp),%eax
0819fa16 +0x40:  mov    %eax,(%esp)
0819fa19 +0x43:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0819fa1e +0x48:  mov    $0x0,%eax
0819fa23 +0x4d:  jmp    0819fa53 <+0x7d>
0819fa25 +0x4f:  call   081935a2 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x20a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x20a
0819fa2a +0x54:  mov    0x10(%ebp),%edx
0819fa2d +0x57:  mov    %edx,0x8(%esp)
0819fa31 +0x5b:  mov    0xc(%ebp),%edx
0819fa34 +0x5e:  mov    %edx,0x4(%esp)
0819fa38 +0x62:  mov    %eax,(%esp)
0819fa3b +0x65:  call   081906e2 <_ZN20AvatarRechargeServer25CheckConditionUseRechargeEP5CUserPN4arad24SigAradUseAvatarRechargeE>  ; AvatarRechargeServer::CheckConditionUseRecharge(CUser*, arad::SigAradUseAvatarRecharge*)
0819fa40 +0x6a:  xor    $0x1,%eax
0819fa43 +0x6d:  test   %al,%al
0819fa45 +0x6f:  je     0819fa4e <+0x78>
0819fa47 +0x71:  mov    $0x0,%eax
0819fa4c +0x76:  jmp    0819fa53 <+0x7d>
0819fa4e +0x78:  mov    $0x1,%eax
0819fa53 +0x7d:  leave
0819fa54 +0x7e:  ret
0819fa55 +0x7f:  nop
```

## 反编译 C

```c
// ARAD::DISPATCHER::Dispatcher_AradUseAvatarRecharge::checkWorkState @ 0x819f9d6

/* ARAD::DISPATCHER::Dispatcher_AradUseAvatarRecharge::checkWorkState(CUser*,
   arad::SigAradUseAvatarRecharge&) */

undefined4 __thiscall
ARAD::DISPATCHER::Dispatcher_AradUseAvatarRecharge::checkWorkState
          (Dispatcher_AradUseAvatarRecharge *this,CUser *param_1,SigAradUseAvatarRecharge *param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  AvatarRechargeServer *this_00;
  
  uVar2 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_1,0x2a);
  if (uVar2 == 0) {
    this_00 = (AvatarRechargeServer *)Singleton<AvatarRechargeServer>::Get();
    cVar1 = AvatarRechargeServer::CheckConditionUseRecharge(this_00,param_1,param_2);
    if (cVar1 == '\x01') {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    CUser::SendCmdErrorPacket(param_1,0x24d,uVar2 & 0xff);
    uVar3 = 0;
  }
  return uVar3;
}
```
