# checkWorkState

`_ZN4ARAD10DISPATCHER28Dispatcher_AradAvatarConvert14checkWorkStateEP5CUserRN4arad20SigAradAvatarConvertE`

`ARAD::DISPATCHER::Dispatcher_AradAvatarConvert::checkWorkState(CUser*, arad::SigAradAvatarConvert&)`

| 类 | 地址 |
|---|---|
| `ARAD::DISPATCHER::Dispatcher_AradAvatarConvert` | `0x081a003e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081a003e  _ZN4ARAD10DISPATCHER28Dispatcher_AradAvatarConvert14checkWorkStateEP5CUserRN4arad20SigAradAvatarConvertE
#           ARAD::DISPATCHER::Dispatcher_AradAvatarConvert::checkWorkState(CUser*, arad::SigAradAvatarConvert&)
# range [0x081a003e, 0x081a00bd]
081a003e +0x00:  push   %ebp
081a003f +0x01:  mov    %esp,%ebp
081a0041 +0x03:  sub    $0x28,%esp
081a0044 +0x06:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%eax
081a0049 +0x0b:  movl   $0x2a,0x8(%esp)
081a0051 +0x13:  mov    0xc(%ebp),%edx
081a0054 +0x16:  mov    %edx,0x4(%esp)
081a0058 +0x1a:  mov    %eax,(%esp)
081a005b +0x1d:  call   08288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>  ; CSecu_ProtectionField::Check(CUser*, SECURITY_PROTCTION)
081a0060 +0x22:  mov    %eax,-0xc(%ebp)
081a0063 +0x25:  cmpl   $0x0,-0xc(%ebp)
081a0067 +0x29:  je     081a008d <+0x4f>
081a0069 +0x2b:  mov    -0xc(%ebp),%eax
081a006c +0x2e:  movzbl %al,%eax
081a006f +0x31:  mov    %eax,0x8(%esp)
081a0073 +0x35:  movl   $0x24f,0x4(%esp)
081a007b +0x3d:  mov    0xc(%ebp),%eax
081a007e +0x40:  mov    %eax,(%esp)
081a0081 +0x43:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081a0086 +0x48:  mov    $0x0,%eax
081a008b +0x4d:  jmp    081a00bb <+0x7d>
081a008d +0x4f:  call   0819afef <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0xcd5>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0xcd5
081a0092 +0x54:  mov    0x10(%ebp),%edx
081a0095 +0x57:  mov    %edx,0x8(%esp)
081a0099 +0x5b:  mov    0xc(%ebp),%edx
081a009c +0x5e:  mov    %edx,0x4(%esp)
081a00a0 +0x62:  mov    %eax,(%esp)
081a00a3 +0x65:  call   08192212 <_ZN19AvatarConvertServer14CheckConditionEP5CUserPN4arad20SigAradAvatarConvertE>  ; AvatarConvertServer::CheckCondition(CUser*, arad::SigAradAvatarConvert*)
081a00a8 +0x6a:  xor    $0x1,%eax
081a00ab +0x6d:  test   %al,%al
081a00ad +0x6f:  je     081a00b6 <+0x78>
081a00af +0x71:  mov    $0x0,%eax
081a00b4 +0x76:  jmp    081a00bb <+0x7d>
081a00b6 +0x78:  mov    $0x1,%eax
081a00bb +0x7d:  leave
081a00bc +0x7e:  ret
081a00bd +0x7f:  nop
```

## 反编译 C

```c
// ARAD::DISPATCHER::Dispatcher_AradAvatarConvert::checkWorkState @ 0x81a003e

/* ARAD::DISPATCHER::Dispatcher_AradAvatarConvert::checkWorkState(CUser*,
   arad::SigAradAvatarConvert&) */

undefined4 __thiscall
ARAD::DISPATCHER::Dispatcher_AradAvatarConvert::checkWorkState
          (Dispatcher_AradAvatarConvert *this,CUser *param_1,SigAradAvatarConvert *param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  AvatarConvertServer *this_00;
  
  uVar2 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_1,0x2a);
  if (uVar2 == 0) {
    this_00 = (AvatarConvertServer *)Singleton<AvatarConvertServer>::Get();
    cVar1 = AvatarConvertServer::CheckCondition(this_00,param_1,param_2);
    if (cVar1 == '\x01') {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    CUser::SendCmdErrorPacket(param_1,0x24f,uVar2 & 0xff);
    uVar3 = 0;
  }
  return uVar3;
}
```
