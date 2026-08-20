# checkWorkState

`_ZN4ARAD10DISPATCHER36Dispatcher_AvartarHiddenOptionChange14checkWorkStateEP5CUserRN4arad27SigAvatarHiddenOptionChangeE`

`ARAD::DISPATCHER::Dispatcher_AvartarHiddenOptionChange::checkWorkState(CUser*, arad::SigAvatarHiddenOptionChange&)`

| 类 | 地址 |
|---|---|
| `ARAD::DISPATCHER::Dispatcher_AvartarHiddenOptionChange` | `0x0819f956` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0819f956  _ZN4ARAD10DISPATCHER36Dispatcher_AvartarHiddenOptionChange14checkWorkStateEP5CUserRN4arad27SigAvatarHiddenOptionChangeE
#           ARAD::DISPATCHER::Dispatcher_AvartarHiddenOptionChange::checkWorkState(CUser*, arad::SigAvatarHiddenOptionChange&)
# range [0x0819f956, 0x0819f9d5]
0819f956 +0x00:  push   %ebp
0819f957 +0x01:  mov    %esp,%ebp
0819f959 +0x03:  sub    $0x28,%esp
0819f95c +0x06:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%eax
0819f961 +0x0b:  movl   $0x2a,0x8(%esp)
0819f969 +0x13:  mov    0xc(%ebp),%edx
0819f96c +0x16:  mov    %edx,0x4(%esp)
0819f970 +0x1a:  mov    %eax,(%esp)
0819f973 +0x1d:  call   08288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>  ; CSecu_ProtectionField::Check(CUser*, SECURITY_PROTCTION)
0819f978 +0x22:  mov    %eax,-0xc(%ebp)
0819f97b +0x25:  cmpl   $0x0,-0xc(%ebp)
0819f97f +0x29:  je     0819f9a5 <+0x4f>
0819f981 +0x2b:  mov    -0xc(%ebp),%eax
0819f984 +0x2e:  movzbl %al,%eax
0819f987 +0x31:  mov    %eax,0x8(%esp)
0819f98b +0x35:  movl   $0x24c,0x4(%esp)
0819f993 +0x3d:  mov    0xc(%ebp),%eax
0819f996 +0x40:  mov    %eax,(%esp)
0819f999 +0x43:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0819f99e +0x48:  mov    $0x0,%eax
0819f9a3 +0x4d:  jmp    0819f9d3 <+0x7d>
0819f9a5 +0x4f:  call   0817f0a4 <_GLOBAL__I__ZN29AvatarFixedHiddenOptionServerC2Ev+0x2d5>  ; global constructors keyed to AvatarFixedHiddenOptionServer::AvatarFixedHiddenOptionServer()+0x2d5
0819f9aa +0x54:  mov    0x10(%ebp),%edx
0819f9ad +0x57:  mov    %edx,0x8(%esp)
0819f9b1 +0x5b:  mov    0xc(%ebp),%edx
0819f9b4 +0x5e:  mov    %edx,0x4(%esp)
0819f9b8 +0x62:  mov    %eax,(%esp)
0819f9bb +0x65:  call   0817e4c6 <_ZN29AvatarFixedHiddenOptionServer14CheckConditionEP5CUserPN4arad27SigAvatarHiddenOptionChangeE>  ; AvatarFixedHiddenOptionServer::CheckCondition(CUser*, arad::SigAvatarHiddenOptionChange*)
0819f9c0 +0x6a:  xor    $0x1,%eax
0819f9c3 +0x6d:  test   %al,%al
0819f9c5 +0x6f:  je     0819f9ce <+0x78>
0819f9c7 +0x71:  mov    $0x0,%eax
0819f9cc +0x76:  jmp    0819f9d3 <+0x7d>
0819f9ce +0x78:  mov    $0x1,%eax
0819f9d3 +0x7d:  leave
0819f9d4 +0x7e:  ret
0819f9d5 +0x7f:  nop
```

## 反编译 C

```c
// ARAD::DISPATCHER::Dispatcher_AvartarHiddenOptionChange::checkWorkState @ 0x819f956

/* ARAD::DISPATCHER::Dispatcher_AvartarHiddenOptionChange::checkWorkState(CUser*,
   arad::SigAvatarHiddenOptionChange&) */

undefined4 __thiscall
ARAD::DISPATCHER::Dispatcher_AvartarHiddenOptionChange::checkWorkState
          (Dispatcher_AvartarHiddenOptionChange *this,CUser *param_1,
          SigAvatarHiddenOptionChange *param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  AvatarFixedHiddenOptionServer *this_00;
  
  uVar2 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_1,0x2a);
  if (uVar2 == 0) {
    this_00 = (AvatarFixedHiddenOptionServer *)Singleton<AvatarFixedHiddenOptionServer>::Get();
    cVar1 = AvatarFixedHiddenOptionServer::CheckCondition(this_00,param_1,param_2);
    if (cVar1 == '\x01') {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    CUser::SendCmdErrorPacket(param_1,0x24c,uVar2 & 0xff);
    uVar3 = 0;
  }
  return uVar3;
}
```
