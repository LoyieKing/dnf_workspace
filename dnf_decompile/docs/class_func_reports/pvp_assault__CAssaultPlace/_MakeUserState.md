# _MakeUserState

`_ZN11pvp_assault13CAssaultPlace14_MakeUserStateEP11PacketGuard`

`pvp_assault::CAssaultPlace::_MakeUserState(PacketGuard*)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultPlace` | `0x082e8c5a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082e8c5a  _ZN11pvp_assault13CAssaultPlace14_MakeUserStateEP11PacketGuard
#           pvp_assault::CAssaultPlace::_MakeUserState(PacketGuard*)
# range [0x082e8c5a, 0x082e8d5f]
082e8c5a +0x000:  push   %ebp
082e8c5b +0x001:  mov    %esp,%ebp
082e8c5d +0x003:  sub    $0x28,%esp
082e8c60 +0x006:  mov    0xc(%ebp),%eax
082e8c63 +0x009:  movl   $0x3,0x8(%esp)
082e8c6b +0x011:  movl   $0x0,0x4(%esp)
082e8c73 +0x019:  mov    %eax,(%esp)
082e8c76 +0x01c:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
082e8c7b +0x021:  movl   $0x0,-0x14(%ebp)
082e8c82 +0x028:  movl   $0x0,-0x10(%ebp)
082e8c89 +0x02f:  mov    0xc(%ebp),%eax
082e8c8c +0x032:  mov    %eax,(%esp)
082e8c8f +0x035:  call   08110b4c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x5e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x5e
082e8c94 +0x03a:  mov    %eax,-0x14(%ebp)
082e8c97 +0x03d:  mov    0xc(%ebp),%eax
082e8c9a +0x040:  mov    -0x10(%ebp),%edx
082e8c9d +0x043:  mov    %edx,0x4(%esp)
082e8ca1 +0x047:  mov    %eax,(%esp)
082e8ca4 +0x04a:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
082e8ca9 +0x04f:  movl   $0x0,-0xc(%ebp)
082e8cb0 +0x056:  jmp    082e8d27 <+0xcd>
082e8cb2 +0x058:  mov    -0xc(%ebp),%eax
082e8cb5 +0x05b:  shl    $0x5,%eax
082e8cb8 +0x05e:  add    0x8(%ebp),%eax
082e8cbb +0x061:  mov    %eax,(%esp)
082e8cbe +0x064:  call   082f055c <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2e0>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2e0
082e8cc3 +0x069:  test   %al,%al
082e8cc5 +0x06b:  jne    082e8d22 <+0xc8>
082e8cc7 +0x06d:  mov    -0xc(%ebp),%eax
082e8cca +0x070:  shl    $0x5,%eax
082e8ccd +0x073:  add    0x8(%ebp),%eax
082e8cd0 +0x076:  mov    %eax,(%esp)
082e8cd3 +0x079:  call   082f0542 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2c6>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2c6
082e8cd8 +0x07e:  mov    %eax,(%esp)
082e8cdb +0x081:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
082e8ce0 +0x086:  movzwl %ax,%edx
082e8ce3 +0x089:  mov    0xc(%ebp),%eax
082e8ce6 +0x08c:  mov    %edx,0x4(%esp)
082e8cea +0x090:  mov    %eax,(%esp)
082e8ced +0x093:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
082e8cf2 +0x098:  mov    -0xc(%ebp),%eax
082e8cf5 +0x09b:  shl    $0x5,%eax
082e8cf8 +0x09e:  add    0x8(%ebp),%eax
082e8cfb +0x0a1:  mov    %eax,(%esp)
082e8cfe +0x0a4:  call   082f0542 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2c6>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2c6
082e8d03 +0x0a9:  mov    %eax,(%esp)
082e8d06 +0x0ac:  call   082f0e70 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0xbf4>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0xbf4
082e8d0b +0x0b1:  mov    %eax,%edx
082e8d0d +0x0b3:  mov    0xc(%ebp),%eax
082e8d10 +0x0b6:  mov    %edx,0x4(%esp)
082e8d14 +0x0ba:  mov    %eax,(%esp)
082e8d17 +0x0bd:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
082e8d1c +0x0c2:  addl   $0x1,-0x10(%ebp)
082e8d20 +0x0c6:  jmp    082e8d23 <+0xc9>
082e8d22 +0x0c8:  nop
082e8d23 +0x0c9:  addl   $0x1,-0xc(%ebp)
082e8d27 +0x0cd:  cmpl   $0x7,-0xc(%ebp)
082e8d2b +0x0d1:  setle  %al
082e8d2e +0x0d4:  test   %al,%al
082e8d30 +0x0d6:  jne    082e8cb2 <+0x58>
082e8d32 +0x0d8:  mov    0xc(%ebp),%eax
082e8d35 +0x0db:  mov    -0x10(%ebp),%edx
082e8d38 +0x0de:  mov    %edx,0x8(%esp)
082e8d3c +0x0e2:  lea    -0x14(%ebp),%edx
082e8d3f +0x0e5:  mov    %edx,0x4(%esp)
082e8d43 +0x0e9:  mov    %eax,(%esp)
082e8d46 +0x0ec:  call   08110b28 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x3a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x3a
082e8d4b +0x0f1:  mov    0xc(%ebp),%eax
082e8d4e +0x0f4:  movl   $0x1,0x4(%esp)
082e8d56 +0x0fc:  mov    %eax,(%esp)
082e8d59 +0x0ff:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
082e8d5e +0x104:  leave
082e8d5f +0x105:  ret
```

## 反编译 C

```c
// pvp_assault::CAssaultPlace::_MakeUserState @ 0x82e8c5a

/* pvp_assault::CAssaultPlace::_MakeUserState(PacketGuard*) */

void __thiscall pvp_assault::CAssaultPlace::_MakeUserState(CAssaultPlace *this,PacketGuard *param_1)

{
  char cVar1;
  CUser *pCVar2;
  uint uVar3;
  int iVar4;
  int local_18;
  int local_14;
  int local_10;
  
  InterfacePacketBuf::put_header((InterfacePacketBuf *)param_1,0,3);
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
      pCVar2 = (CUser *)CAssaulter::GetUser((CAssaulter *)(this + local_10 * 0x20));
      iVar4 = CUser::GetUserState(pCVar2);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,iVar4);
      local_14 = local_14 + 1;
    }
  }
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,&local_18,local_14);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)param_1,true);
  return;
}
```
