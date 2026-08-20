# checkWorkState

`_ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE`

`ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)`

| 类 | 地址 |
|---|---|
| `ARAD::DISPATCHER::Dispatcher_AvartarRoulette` | `0x0819ee6c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0819ee6c  _ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE
#           ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)
# range [0x0819ee6c, 0x0819ef53]
0819ee6c +0x00:  push   %ebp
0819ee6d +0x01:  mov    %esp,%ebp
0819ee6f +0x03:  sub    $0x28,%esp
0819ee72 +0x06:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%eax
0819ee77 +0x0b:  movl   $0x45,0x8(%esp)
0819ee7f +0x13:  mov    0xc(%ebp),%edx
0819ee82 +0x16:  mov    %edx,0x4(%esp)
0819ee86 +0x1a:  mov    %eax,(%esp)
0819ee89 +0x1d:  call   08288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>  ; CSecu_ProtectionField::Check(CUser*, SECURITY_PROTCTION)
0819ee8e +0x22:  mov    %eax,-0xc(%ebp)
0819ee91 +0x25:  cmpl   $0x0,-0xc(%ebp)
0819ee95 +0x29:  je     0819eebe <+0x52>
0819ee97 +0x2b:  mov    -0xc(%ebp),%eax
0819ee9a +0x2e:  movzbl %al,%eax
0819ee9d +0x31:  mov    %eax,0x8(%esp)
0819eea1 +0x35:  movl   $0x24a,0x4(%esp)
0819eea9 +0x3d:  mov    0xc(%ebp),%eax
0819eeac +0x40:  mov    %eax,(%esp)
0819eeaf +0x43:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0819eeb4 +0x48:  mov    $0x0,%eax
0819eeb9 +0x4d:  jmp    0819ef52 <+0xe6>
0819eebe +0x52:  mov    0xc(%ebp),%eax
0819eec1 +0x55:  mov    %eax,(%esp)
0819eec4 +0x58:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0819eec9 +0x5d:  add    $0x658,%eax
0819eece +0x62:  mov    %eax,(%esp)
0819eed1 +0x65:  call   0817ff44 <_ZNK10AvatarCoin8IsUsableEv>  ; AvatarCoin::IsUsable() const
0819eed6 +0x6a:  xor    $0x1,%eax
0819eed9 +0x6d:  test   %al,%al
0819eedb +0x6f:  je     0819eeff <+0x93>
0819eedd +0x71:  movl   $0x16,0x8(%esp)
0819eee5 +0x79:  movl   $0x24a,0x4(%esp)
0819eeed +0x81:  mov    0xc(%ebp),%eax
0819eef0 +0x84:  mov    %eax,(%esp)
0819eef3 +0x87:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0819eef8 +0x8c:  mov    $0x0,%eax
0819eefd +0x91:  jmp    0819ef52 <+0xe6>
0819eeff +0x93:  mov    0xc(%ebp),%eax
0819ef02 +0x96:  mov    %eax,(%esp)
0819ef05 +0x99:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0819ef0a +0x9e:  movl   $0x0,0x8(%esp)
0819ef12 +0xa6:  movl   $0x2,0x4(%esp)
0819ef1a +0xae:  mov    %eax,(%esp)
0819ef1d +0xb1:  call   084fb67a <_ZNK10CInventory17GetRemainCapacityE10INVEN_TYPEN10Inven_Item9ITEM_TYPEE>  ; CInventory::GetRemainCapacity(INVEN_TYPE, Inven_Item::ITEM_TYPE) const
0819ef22 +0xb6:  test   %eax,%eax
0819ef24 +0xb8:  setle  %al
0819ef27 +0xbb:  test   %al,%al
0819ef29 +0xbd:  je     0819ef4d <+0xe1>
0819ef2b +0xbf:  movl   $0x4,0x8(%esp)
0819ef33 +0xc7:  movl   $0x24a,0x4(%esp)
0819ef3b +0xcf:  mov    0xc(%ebp),%eax
0819ef3e +0xd2:  mov    %eax,(%esp)
0819ef41 +0xd5:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0819ef46 +0xda:  mov    $0x0,%eax
0819ef4b +0xdf:  jmp    0819ef52 <+0xe6>
0819ef4d +0xe1:  mov    $0x1,%eax
0819ef52 +0xe6:  leave
0819ef53 +0xe7:  ret
```

## 反编译 C

```c
// ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState @ 0x819ee6c

/* ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&) */

undefined4
ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState
          (CUser *param_1,SigAvatarRoulette *param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  CInventory *pCVar5;
  
  uVar2 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_2,0x45);
  if (uVar2 == 0) {
    iVar4 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_2);
    cVar1 = AvatarCoin::IsUsable((AvatarCoin *)(iVar4 + 0x658));
    if (cVar1 == '\x01') {
      pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_2);
      iVar4 = CInventory::GetRemainCapacity(pCVar5,2,0);
      if (iVar4 < 1) {
        CUser::SendCmdErrorPacket((CUser *)param_2,0x24a,4);
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
    }
    else {
      CUser::SendCmdErrorPacket((CUser *)param_2,0x24a,0x16);
      uVar3 = 0;
    }
  }
  else {
    CUser::SendCmdErrorPacket((CUser *)param_2,0x24a,uVar2 & 0xff);
    uVar3 = 0;
  }
  return uVar3;
}
```
