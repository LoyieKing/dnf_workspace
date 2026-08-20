# _AddTeam

`_ZN11pvp_assault13CAssaultPlace8_AddTeamEP5CUser17ENUM_ASSAULT_TEAM`

`pvp_assault::CAssaultPlace::_AddTeam(CUser*, ENUM_ASSAULT_TEAM)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultPlace` | `0x082e70c8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082e70c8  _ZN11pvp_assault13CAssaultPlace8_AddTeamEP5CUser17ENUM_ASSAULT_TEAM
#           pvp_assault::CAssaultPlace::_AddTeam(CUser*, ENUM_ASSAULT_TEAM)
# range [0x082e70c8, 0x082e7161]
082e70c8 +0x00:  push   %ebp
082e70c9 +0x01:  mov    %esp,%ebp
082e70cb +0x03:  sub    $0x28,%esp
082e70ce +0x06:  movl   $0x0,-0x14(%ebp)
082e70d5 +0x0d:  mov    0xc(%ebp),%eax
082e70d8 +0x10:  mov    %eax,(%esp)
082e70db +0x13:  call   080da314 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x4b1>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x4b1
082e70e0 +0x18:  test   %al,%al
082e70e2 +0x1a:  je     082e70f2 <+0x2a>
082e70e4 +0x1c:  mov    0xc(%ebp),%eax
082e70e7 +0x1f:  mov    %eax,(%esp)
082e70ea +0x22:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
082e70ef +0x27:  mov    %eax,-0x14(%ebp)
082e70f2 +0x2a:  cmpl   $0x0,-0x14(%ebp)
082e70f6 +0x2e:  je     082e7146 <+0x7e>
082e70f8 +0x30:  movl   $0x0,-0x10(%ebp)
082e70ff +0x37:  jmp    082e7139 <+0x71>
082e7101 +0x39:  mov    -0x10(%ebp),%eax
082e7104 +0x3c:  mov    %eax,0x4(%esp)
082e7108 +0x40:  mov    -0x14(%ebp),%eax
082e710b +0x43:  mov    %eax,(%esp)
082e710e +0x46:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
082e7113 +0x4b:  mov    %eax,-0xc(%ebp)
082e7116 +0x4e:  cmpl   $0x0,-0xc(%ebp)
082e711a +0x52:  je     082e7135 <+0x6d>
082e711c +0x54:  mov    0x10(%ebp),%eax
082e711f +0x57:  mov    %eax,0x8(%esp)
082e7123 +0x5b:  mov    -0xc(%ebp),%eax
082e7126 +0x5e:  mov    %eax,0x4(%esp)
082e712a +0x62:  mov    0x8(%ebp),%eax
082e712d +0x65:  mov    %eax,(%esp)
082e7130 +0x68:  call   082e7018 <_ZN11pvp_assault13CAssaultPlace8_AddUserEP5CUser17ENUM_ASSAULT_TEAM>  ; pvp_assault::CAssaultPlace::_AddUser(CUser*, ENUM_ASSAULT_TEAM)
082e7135 +0x6d:  addl   $0x1,-0x10(%ebp)
082e7139 +0x71:  cmpl   $0x3,-0x10(%ebp)
082e713d +0x75:  setle  %al
082e7140 +0x78:  test   %al,%al
082e7142 +0x7a:  jne    082e7101 <+0x39>
082e7144 +0x7c:  jmp    082e715f <+0x97>
082e7146 +0x7e:  mov    0x10(%ebp),%eax
082e7149 +0x81:  mov    %eax,0x8(%esp)
082e714d +0x85:  mov    0xc(%ebp),%eax
082e7150 +0x88:  mov    %eax,0x4(%esp)
082e7154 +0x8c:  mov    0x8(%ebp),%eax
082e7157 +0x8f:  mov    %eax,(%esp)
082e715a +0x92:  call   082e7018 <_ZN11pvp_assault13CAssaultPlace8_AddUserEP5CUser17ENUM_ASSAULT_TEAM>  ; pvp_assault::CAssaultPlace::_AddUser(CUser*, ENUM_ASSAULT_TEAM)
082e715f +0x97:  leave
082e7160 +0x98:  ret
082e7161 +0x99:  nop
```

## 反编译 C

```c
// pvp_assault::CAssaultPlace::_AddTeam @ 0x82e70c8

/* pvp_assault::CAssaultPlace::_AddTeam(CUser*, ENUM_ASSAULT_TEAM) */

void __thiscall
pvp_assault::CAssaultPlace::_AddTeam(CAssaultPlace *this,CUser *param_1,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = (CParty *)0x0;
  cVar1 = CUser::CheckInParty(param_1);
  if (cVar1 != '\0') {
    local_18 = (CParty *)CUser::GetParty(param_1);
  }
  if (local_18 == (CParty *)0x0) {
    _AddUser(this,param_1,param_3);
  }
  else {
    for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
      iVar2 = CParty::get_user(local_18,local_14);
      if (iVar2 != 0) {
        _AddUser(this,iVar2,param_3);
      }
    }
  }
  return;
}
```
