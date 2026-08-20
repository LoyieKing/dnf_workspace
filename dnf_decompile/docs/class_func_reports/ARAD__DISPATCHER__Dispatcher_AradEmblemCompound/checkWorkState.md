# checkWorkState

`_ZN4ARAD10DISPATCHER29Dispatcher_AradEmblemCompound14checkWorkStateEP5CUserRN4arad21SigAradEmblemCompoundE`

`ARAD::DISPATCHER::Dispatcher_AradEmblemCompound::checkWorkState(CUser*, arad::SigAradEmblemCompound&)`

| 类 | 地址 |
|---|---|
| `ARAD::DISPATCHER::Dispatcher_AradEmblemCompound` | `0x0819fcb4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0819fcb4  _ZN4ARAD10DISPATCHER29Dispatcher_AradEmblemCompound14checkWorkStateEP5CUserRN4arad21SigAradEmblemCompoundE
#           ARAD::DISPATCHER::Dispatcher_AradEmblemCompound::checkWorkState(CUser*, arad::SigAradEmblemCompound&)
# range [0x0819fcb4, 0x0819fd7d]
0819fcb4 +0x00:  push   %ebp
0819fcb5 +0x01:  mov    %esp,%ebp
0819fcb7 +0x03:  sub    $0x28,%esp
0819fcba +0x06:  call   081625e6 <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0x854>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0x854
0819fcbf +0x0b:  movl   $0x15,0xc(%esp)
0819fcc7 +0x13:  movl   $0x1,0x8(%esp)
0819fccf +0x1b:  mov    0xc(%ebp),%edx
0819fcd2 +0x1e:  mov    %edx,0x4(%esp)
0819fcd6 +0x22:  mov    %eax,(%esp)
0819fcd9 +0x25:  call   0816e6b8 <_ZN22ServiceRestrictManager12isRestrictedEP5CUserN16RestrictCategory4EnumEi>  ; ServiceRestrictManager::isRestricted(CUser*, RestrictCategory::Enum, int)
0819fcde +0x2a:  test   %al,%al
0819fce0 +0x2c:  je     0819fd04 <+0x50>
0819fce2 +0x2e:  movl   $0xd1,0x8(%esp)
0819fcea +0x36:  movl   $0x24e,0x4(%esp)
0819fcf2 +0x3e:  mov    0xc(%ebp),%eax
0819fcf5 +0x41:  mov    %eax,(%esp)
0819fcf8 +0x44:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0819fcfd +0x49:  mov    $0x0,%eax
0819fd02 +0x4e:  jmp    0819fd7b <+0xc7>
0819fd04 +0x50:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%eax
0819fd09 +0x55:  movl   $0x2a,0x8(%esp)
0819fd11 +0x5d:  mov    0xc(%ebp),%edx
0819fd14 +0x60:  mov    %edx,0x4(%esp)
0819fd18 +0x64:  mov    %eax,(%esp)
0819fd1b +0x67:  call   08288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>  ; CSecu_ProtectionField::Check(CUser*, SECURITY_PROTCTION)
0819fd20 +0x6c:  mov    %eax,-0xc(%ebp)
0819fd23 +0x6f:  cmpl   $0x0,-0xc(%ebp)
0819fd27 +0x73:  je     0819fd4d <+0x99>
0819fd29 +0x75:  mov    -0xc(%ebp),%eax
0819fd2c +0x78:  movzbl %al,%eax
0819fd2f +0x7b:  mov    %eax,0x8(%esp)
0819fd33 +0x7f:  movl   $0x24e,0x4(%esp)
0819fd3b +0x87:  mov    0xc(%ebp),%eax
0819fd3e +0x8a:  mov    %eax,(%esp)
0819fd41 +0x8d:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0819fd46 +0x92:  mov    $0x0,%eax
0819fd4b +0x97:  jmp    0819fd7b <+0xc7>
0819fd4d +0x99:  call   08193776 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x3de>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x3de
0819fd52 +0x9e:  mov    0x10(%ebp),%edx
0819fd55 +0xa1:  mov    %edx,0x8(%esp)
0819fd59 +0xa5:  mov    0xc(%ebp),%edx
0819fd5c +0xa8:  mov    %edx,0x4(%esp)
0819fd60 +0xac:  mov    %eax,(%esp)
0819fd63 +0xaf:  call   08191636 <_ZN20EmblemCompoundServer14CheckConditionEP5CUserPN4arad21SigAradEmblemCompoundE>  ; EmblemCompoundServer::CheckCondition(CUser*, arad::SigAradEmblemCompound*)
0819fd68 +0xb4:  xor    $0x1,%eax
0819fd6b +0xb7:  test   %al,%al
0819fd6d +0xb9:  je     0819fd76 <+0xc2>
0819fd6f +0xbb:  mov    $0x0,%eax
0819fd74 +0xc0:  jmp    0819fd7b <+0xc7>
0819fd76 +0xc2:  mov    $0x1,%eax
0819fd7b +0xc7:  leave
0819fd7c +0xc8:  ret
0819fd7d +0xc9:  nop
```

## 反编译 C

```c
// ARAD::DISPATCHER::Dispatcher_AradEmblemCompound::checkWorkState @ 0x819fcb4

/* ARAD::DISPATCHER::Dispatcher_AradEmblemCompound::checkWorkState(CUser*,
   arad::SigAradEmblemCompound&) */

undefined4 __thiscall
ARAD::DISPATCHER::Dispatcher_AradEmblemCompound::checkWorkState
          (Dispatcher_AradEmblemCompound *this,CUser *param_1,SigAradEmblemCompound *param_2)

{
  char cVar1;
  ServiceRestrictManager *pSVar2;
  undefined4 uVar3;
  uint uVar4;
  EmblemCompoundServer *this_00;
  
  pSVar2 = (ServiceRestrictManager *)Singleton<ServiceRestrictManager>::Get();
  cVar1 = ServiceRestrictManager::isRestricted(pSVar2,param_1,1,0x15);
  if (cVar1 == '\0') {
    uVar4 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_1,0x2a);
    if (uVar4 == 0) {
      this_00 = (EmblemCompoundServer *)Singleton<EmblemCompoundServer>::Get();
      cVar1 = EmblemCompoundServer::CheckCondition(this_00,param_1,param_2);
      if (cVar1 == '\x01') {
        uVar3 = 1;
      }
      else {
        uVar3 = 0;
      }
    }
    else {
      CUser::SendCmdErrorPacket(param_1,0x24e,uVar4 & 0xff);
      uVar3 = 0;
    }
  }
  else {
    CUser::SendCmdErrorPacket(param_1,0x24e,0xd1);
    uVar3 = 0;
  }
  return uVar3;
}
```
