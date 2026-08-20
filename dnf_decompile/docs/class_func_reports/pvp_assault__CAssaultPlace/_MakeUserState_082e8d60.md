# _MakeUserState

`_ZN11pvp_assault13CAssaultPlace14_MakeUserStateEP11PacketGuardP5CUser`

`pvp_assault::CAssaultPlace::_MakeUserState(PacketGuard*, CUser*)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultPlace` | `0x082e8d60` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082e8d60  _ZN11pvp_assault13CAssaultPlace14_MakeUserStateEP11PacketGuardP5CUser
#           pvp_assault::CAssaultPlace::_MakeUserState(PacketGuard*, CUser*)
# range [0x082e8d60, 0x082e8de1]
082e8d60 +0x00:  push   %ebp
082e8d61 +0x01:  mov    %esp,%ebp
082e8d63 +0x03:  sub    $0x18,%esp
082e8d66 +0x06:  mov    0xc(%ebp),%eax
082e8d69 +0x09:  movl   $0x3,0x8(%esp)
082e8d71 +0x11:  movl   $0x0,0x4(%esp)
082e8d79 +0x19:  mov    %eax,(%esp)
082e8d7c +0x1c:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
082e8d81 +0x21:  mov    0xc(%ebp),%eax
082e8d84 +0x24:  movl   $0x1,0x4(%esp)
082e8d8c +0x2c:  mov    %eax,(%esp)
082e8d8f +0x2f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
082e8d94 +0x34:  mov    0x10(%ebp),%eax
082e8d97 +0x37:  mov    %eax,(%esp)
082e8d9a +0x3a:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
082e8d9f +0x3f:  movzwl %ax,%edx
082e8da2 +0x42:  mov    0xc(%ebp),%eax
082e8da5 +0x45:  mov    %edx,0x4(%esp)
082e8da9 +0x49:  mov    %eax,(%esp)
082e8dac +0x4c:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
082e8db1 +0x51:  mov    0x10(%ebp),%eax
082e8db4 +0x54:  mov    %eax,(%esp)
082e8db7 +0x57:  call   082f0e70 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0xbf4>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0xbf4
082e8dbc +0x5c:  mov    %eax,%edx
082e8dbe +0x5e:  mov    0xc(%ebp),%eax
082e8dc1 +0x61:  mov    %edx,0x4(%esp)
082e8dc5 +0x65:  mov    %eax,(%esp)
082e8dc8 +0x68:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
082e8dcd +0x6d:  mov    0xc(%ebp),%eax
082e8dd0 +0x70:  movl   $0x1,0x4(%esp)
082e8dd8 +0x78:  mov    %eax,(%esp)
082e8ddb +0x7b:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
082e8de0 +0x80:  leave
082e8de1 +0x81:  ret
```

## 反编译 C

```c
// pvp_assault::CAssaultPlace::_MakeUserState @ 0x82e8d60

/* pvp_assault::CAssaultPlace::_MakeUserState(PacketGuard*, CUser*) */

void __thiscall
pvp_assault::CAssaultPlace::_MakeUserState(CAssaultPlace *this,PacketGuard *param_1,CUser *param_2)

{
  uint uVar1;
  int iVar2;
  
  InterfacePacketBuf::put_header((InterfacePacketBuf *)param_1,0,3);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,1);
  uVar1 = CUser::get_unique_id(param_2);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,uVar1 & 0xffff);
  iVar2 = CUser::GetUserState(param_2);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,iVar2);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)param_1,true);
  return;
}
```
