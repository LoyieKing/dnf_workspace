# _MakeUserUdpIpPort

`_ZN11pvp_assault13CAssaultPlace18_MakeUserUdpIpPortEP11PacketGuard`

`pvp_assault::CAssaultPlace::_MakeUserUdpIpPort(PacketGuard*)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultPlace` | `0x082e8de2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082e8de2  _ZN11pvp_assault13CAssaultPlace18_MakeUserUdpIpPortEP11PacketGuard
#           pvp_assault::CAssaultPlace::_MakeUserUdpIpPort(PacketGuard*)
# range [0x082e8de2, 0x082e9045]
082e8de2 +0x000:  push   %ebp
082e8de3 +0x001:  mov    %esp,%ebp
082e8de5 +0x003:  sub    $0x28,%esp
082e8de8 +0x006:  mov    0xc(%ebp),%eax
082e8deb +0x009:  movl   $0xb,0x8(%esp)
082e8df3 +0x011:  movl   $0x0,0x4(%esp)
082e8dfb +0x019:  mov    %eax,(%esp)
082e8dfe +0x01c:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
082e8e03 +0x021:  movl   $0x0,-0x14(%ebp)
082e8e0a +0x028:  movl   $0x0,-0x10(%ebp)
082e8e11 +0x02f:  mov    0xc(%ebp),%eax
082e8e14 +0x032:  mov    %eax,(%esp)
082e8e17 +0x035:  call   08110b4c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x5e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x5e
082e8e1c +0x03a:  mov    %eax,-0x14(%ebp)
082e8e1f +0x03d:  mov    0xc(%ebp),%eax
082e8e22 +0x040:  mov    -0x10(%ebp),%edx
082e8e25 +0x043:  mov    %edx,0x4(%esp)
082e8e29 +0x047:  mov    %eax,(%esp)
082e8e2c +0x04a:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
082e8e31 +0x04f:  movl   $0x0,-0xc(%ebp)
082e8e38 +0x056:  jmp    082e9009 <+0x227>
082e8e3d +0x05b:  mov    -0xc(%ebp),%eax
082e8e40 +0x05e:  shl    $0x5,%eax
082e8e43 +0x061:  add    0x8(%ebp),%eax
082e8e46 +0x064:  mov    %eax,(%esp)
082e8e49 +0x067:  call   082f055c <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2e0>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2e0
082e8e4e +0x06c:  test   %al,%al
082e8e50 +0x06e:  jne    082e9004 <+0x222>
082e8e56 +0x074:  mov    -0xc(%ebp),%eax
082e8e59 +0x077:  shl    $0x5,%eax
082e8e5c +0x07a:  add    0x8(%ebp),%eax
082e8e5f +0x07d:  mov    %eax,(%esp)
082e8e62 +0x080:  call   082f0542 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2c6>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2c6
082e8e67 +0x085:  mov    %eax,(%esp)
082e8e6a +0x088:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
082e8e6f +0x08d:  movzwl %ax,%edx
082e8e72 +0x090:  mov    0xc(%ebp),%eax
082e8e75 +0x093:  mov    %edx,0x4(%esp)
082e8e79 +0x097:  mov    %eax,(%esp)
082e8e7c +0x09a:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
082e8e81 +0x09f:  mov    -0xc(%ebp),%eax
082e8e84 +0x0a2:  shl    $0x5,%eax
082e8e87 +0x0a5:  add    0x8(%ebp),%eax
082e8e8a +0x0a8:  mov    %eax,(%esp)
082e8e8d +0x0ab:  call   082f0542 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2c6>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2c6
082e8e92 +0x0b0:  add    $0xe0,%eax
082e8e97 +0x0b5:  mov    %eax,(%esp)
082e8e9a +0x0b8:  call   082f1bd8 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x195c>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x195c
082e8e9f +0x0bd:  mov    %eax,%edx
082e8ea1 +0x0bf:  mov    0xc(%ebp),%eax
082e8ea4 +0x0c2:  mov    %edx,0x4(%esp)
082e8ea8 +0x0c6:  mov    %eax,(%esp)
082e8eab +0x0c9:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
082e8eb0 +0x0ce:  mov    -0xc(%ebp),%eax
082e8eb3 +0x0d1:  shl    $0x5,%eax
082e8eb6 +0x0d4:  add    0x8(%ebp),%eax
082e8eb9 +0x0d7:  mov    %eax,(%esp)
082e8ebc +0x0da:  call   082f0542 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2c6>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2c6
082e8ec1 +0x0df:  add    $0xe0,%eax
082e8ec6 +0x0e4:  mov    %eax,(%esp)
082e8ec9 +0x0e7:  call   082f1be6 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x196a>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x196a
082e8ece +0x0ec:  mov    %eax,%edx
082e8ed0 +0x0ee:  mov    0xc(%ebp),%eax
082e8ed3 +0x0f1:  mov    %edx,0x4(%esp)
082e8ed7 +0x0f5:  mov    %eax,(%esp)
082e8eda +0x0f8:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
082e8edf +0x0fd:  mov    -0xc(%ebp),%eax
082e8ee2 +0x100:  shl    $0x5,%eax
082e8ee5 +0x103:  add    0x8(%ebp),%eax
082e8ee8 +0x106:  mov    %eax,(%esp)
082e8eeb +0x109:  call   082f0542 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2c6>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2c6
082e8ef0 +0x10e:  add    $0xe0,%eax
082e8ef5 +0x113:  mov    %eax,(%esp)
082e8ef8 +0x116:  call   082f1bf4 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x1978>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x1978
082e8efd +0x11b:  movzwl %ax,%edx
082e8f00 +0x11e:  mov    0xc(%ebp),%eax
082e8f03 +0x121:  mov    %edx,0x4(%esp)
082e8f07 +0x125:  mov    %eax,(%esp)
082e8f0a +0x128:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
082e8f0f +0x12d:  mov    -0xc(%ebp),%eax
082e8f12 +0x130:  shl    $0x5,%eax
082e8f15 +0x133:  add    0x8(%ebp),%eax
082e8f18 +0x136:  mov    %eax,(%esp)
082e8f1b +0x139:  call   082f0542 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2c6>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2c6
082e8f20 +0x13e:  mov    %eax,(%esp)
082e8f23 +0x141:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
082e8f28 +0x146:  mov    %eax,%edx
082e8f2a +0x148:  mov    0xc(%ebp),%eax
082e8f2d +0x14b:  mov    %edx,0x4(%esp)
082e8f31 +0x14f:  mov    %eax,(%esp)
082e8f34 +0x152:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
082e8f39 +0x157:  mov    -0xc(%ebp),%eax
082e8f3c +0x15a:  shl    $0x5,%eax
082e8f3f +0x15d:  add    0x8(%ebp),%eax
082e8f42 +0x160:  mov    %eax,(%esp)
082e8f45 +0x163:  call   082f0542 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2c6>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2c6
082e8f4a +0x168:  add    $0xe0,%eax
082e8f4f +0x16d:  mov    %eax,(%esp)
082e8f52 +0x170:  call   08236de0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc48a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc48a
082e8f57 +0x175:  movsbl %al,%edx
082e8f5a +0x178:  mov    0xc(%ebp),%eax
082e8f5d +0x17b:  mov    %edx,0x4(%esp)
082e8f61 +0x17f:  mov    %eax,(%esp)
082e8f64 +0x182:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
082e8f69 +0x187:  mov    -0xc(%ebp),%eax
082e8f6c +0x18a:  shl    $0x5,%eax
082e8f6f +0x18d:  add    0x8(%ebp),%eax
082e8f72 +0x190:  mov    %eax,(%esp)
082e8f75 +0x193:  call   082f0542 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2c6>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2c6
082e8f7a +0x198:  add    $0xe0,%eax
082e8f7f +0x19d:  mov    %eax,(%esp)
082e8f82 +0x1a0:  call   082f1c04 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x1988>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x1988
082e8f87 +0x1a5:  mov    %eax,%edx
082e8f89 +0x1a7:  mov    0xc(%ebp),%eax
082e8f8c +0x1aa:  mov    %edx,0x4(%esp)
082e8f90 +0x1ae:  mov    %eax,(%esp)
082e8f93 +0x1b1:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
082e8f98 +0x1b6:  mov    -0xc(%ebp),%eax
082e8f9b +0x1b9:  shl    $0x5,%eax
082e8f9e +0x1bc:  add    0x8(%ebp),%eax
082e8fa1 +0x1bf:  mov    %eax,(%esp)
082e8fa4 +0x1c2:  call   082f0542 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2c6>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2c6
082e8fa9 +0x1c7:  mov    %eax,(%esp)
082e8fac +0x1ca:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
082e8fb1 +0x1cf:  test   %eax,%eax
082e8fb3 +0x1d1:  setne  %al
082e8fb6 +0x1d4:  test   %al,%al
082e8fb8 +0x1d6:  je     082e8feb <+0x209>
082e8fba +0x1d8:  mov    -0xc(%ebp),%eax
082e8fbd +0x1db:  shl    $0x5,%eax
082e8fc0 +0x1de:  add    0x8(%ebp),%eax
082e8fc3 +0x1e1:  mov    %eax,(%esp)
082e8fc6 +0x1e4:  call   082f0542 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2c6>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2c6
082e8fcb +0x1e9:  mov    %eax,(%esp)
082e8fce +0x1ec:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
082e8fd3 +0x1f1:  movzbl 0x75(%eax),%eax
082e8fd7 +0x1f5:  movzbl %al,%edx
082e8fda +0x1f8:  mov    0xc(%ebp),%eax
082e8fdd +0x1fb:  mov    %edx,0x4(%esp)
082e8fe1 +0x1ff:  mov    %eax,(%esp)
082e8fe4 +0x202:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
082e8fe9 +0x207:  jmp    082e8ffe <+0x21c>
082e8feb +0x209:  mov    0xc(%ebp),%eax
082e8fee +0x20c:  movl   $0x0,0x4(%esp)
082e8ff6 +0x214:  mov    %eax,(%esp)
082e8ff9 +0x217:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
082e8ffe +0x21c:  addl   $0x1,-0x10(%ebp)
082e9002 +0x220:  jmp    082e9005 <+0x223>
082e9004 +0x222:  nop
082e9005 +0x223:  addl   $0x1,-0xc(%ebp)
082e9009 +0x227:  cmpl   $0x7,-0xc(%ebp)
082e900d +0x22b:  setle  %al
082e9010 +0x22e:  test   %al,%al
082e9012 +0x230:  jne    082e8e3d <+0x5b>
082e9018 +0x236:  mov    0xc(%ebp),%eax
082e901b +0x239:  mov    -0x10(%ebp),%edx
082e901e +0x23c:  mov    %edx,0x8(%esp)
082e9022 +0x240:  lea    -0x14(%ebp),%edx
082e9025 +0x243:  mov    %edx,0x4(%esp)
082e9029 +0x247:  mov    %eax,(%esp)
082e902c +0x24a:  call   08110b28 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x3a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x3a
082e9031 +0x24f:  mov    0xc(%ebp),%eax
082e9034 +0x252:  movl   $0x1,0x4(%esp)
082e903c +0x25a:  mov    %eax,(%esp)
082e903f +0x25d:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
082e9044 +0x262:  leave
082e9045 +0x263:  ret
```

## 反编译 C

```c
// pvp_assault::CAssaultPlace::_MakeUserUdpIpPort @ 0x82e8de2

/* pvp_assault::CAssaultPlace::_MakeUserUdpIpPort(PacketGuard*) */

void __thiscall
pvp_assault::CAssaultPlace::_MakeUserUdpIpPort(CAssaultPlace *this,PacketGuard *param_1)

{
  char cVar1;
  CUser *pCVar2;
  uint uVar3;
  int iVar4;
  CUserCharacInfo *pCVar5;
  int local_18;
  int local_14;
  int local_10;
  
  InterfacePacketBuf::put_header((InterfacePacketBuf *)param_1,0,0xb);
  local_18 = 0;
  local_14 = 0;
  local_18 = InterfacePacketBuf::get_index((InterfacePacketBuf *)param_1);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,local_14);
  for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
    cVar1 = CAssaulter::Empty((CAssaulter *)(this + local_10 * 0x20));
    if (cVar1 == '\0') {
      pCVar2 = (CUser *)CAssaulter::GetUser((CAssaulter *)(this + local_10 * 0x20));
      uVar3 = CUser::get_unique_id(pCVar2);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,uVar3 & 0xffff);
      iVar4 = CAssaulter::GetUser((CAssaulter *)(this + local_10 * 0x20));
      iVar4 = CNetwork<4096,450000>::get_inner_ip((CNetwork<4096,450000> *)(iVar4 + 0xe0));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,iVar4);
      iVar4 = CAssaulter::GetUser((CAssaulter *)(this + local_10 * 0x20));
      iVar4 = CNetwork<4096,450000>::get_ip((CNetwork<4096,450000> *)(iVar4 + 0xe0));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,iVar4);
      iVar4 = CAssaulter::GetUser((CAssaulter *)(this + local_10 * 0x20));
      uVar3 = CNetwork<4096,450000>::get_port((CNetwork<4096,450000> *)(iVar4 + 0xe0));
      InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,uVar3 & 0xffff);
      pCVar2 = (CUser *)CAssaulter::GetUser((CAssaulter *)(this + local_10 * 0x20));
      iVar4 = CUser::get_acc_id(pCVar2);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,iVar4);
      iVar4 = CAssaulter::GetUser((CAssaulter *)(this + local_10 * 0x20));
      cVar1 = CNetwork<4096,450000>::get_nat_type((CNetwork<4096,450000> *)(iVar4 + 0xe0));
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,(int)cVar1);
      iVar4 = CAssaulter::GetUser((CAssaulter *)(this + local_10 * 0x20));
      iVar4 = CNetwork<4096,450000>::get_mtu((CNetwork<4096,450000> *)(iVar4 + 0xe0));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,iVar4);
      pCVar5 = (CUserCharacInfo *)CAssaulter::GetUser((CAssaulter *)(this + local_10 * 0x20));
      iVar4 = CUserCharacInfo::getCurCharacR(pCVar5);
      if (iVar4 == 0) {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,0);
      }
      else {
        pCVar5 = (CUserCharacInfo *)CAssaulter::GetUser((CAssaulter *)(this + local_10 * 0x20));
        iVar4 = CUserCharacInfo::getCurCharacR(pCVar5);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,(uint)*(byte *)(iVar4 + 0x75));
      }
      local_14 = local_14 + 1;
    }
  }
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,&local_18,local_14);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)param_1,true);
  return;
}
```
