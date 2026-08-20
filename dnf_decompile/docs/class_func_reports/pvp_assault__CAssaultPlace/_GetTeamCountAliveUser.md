# _GetTeamCountAliveUser

`_ZN11pvp_assault13CAssaultPlace22_GetTeamCountAliveUserEPi`

`pvp_assault::CAssaultPlace::_GetTeamCountAliveUser(int*)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultPlace` | `0x082e71c4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082e71c4  _ZN11pvp_assault13CAssaultPlace22_GetTeamCountAliveUserEPi
#           pvp_assault::CAssaultPlace::_GetTeamCountAliveUser(int*)
# range [0x082e71c4, 0x082e7231]
082e71c4 +0x00:  push   %ebp
082e71c5 +0x01:  mov    %esp,%ebp
082e71c7 +0x03:  sub    $0x28,%esp
082e71ca +0x06:  movl   $0x0,-0x10(%ebp)
082e71d1 +0x0d:  jmp    082e7224 <+0x60>
082e71d3 +0x0f:  mov    -0x10(%ebp),%eax
082e71d6 +0x12:  shl    $0x5,%eax
082e71d9 +0x15:  add    0x8(%ebp),%eax
082e71dc +0x18:  mov    %eax,(%esp)
082e71df +0x1b:  call   082f0542 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2c6>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2c6
082e71e4 +0x20:  mov    %eax,-0xc(%ebp)
082e71e7 +0x23:  cmpl   $0x0,-0xc(%ebp)
082e71eb +0x27:  je     082e721c <+0x58>
082e71ed +0x29:  mov    -0xc(%ebp),%eax
082e71f0 +0x2c:  mov    %eax,(%esp)
082e71f3 +0x2f:  call   080da2da <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x477>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x477
082e71f8 +0x34:  test   %al,%al
082e71fa +0x36:  jne    082e721f <+0x5b>
082e71fc +0x38:  mov    -0x10(%ebp),%eax
082e71ff +0x3b:  shl    $0x5,%eax
082e7202 +0x3e:  add    0x8(%ebp),%eax
082e7205 +0x41:  mov    %eax,(%esp)
082e7208 +0x44:  call   082f0570 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2f4>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2f4
082e720d +0x49:  shl    $0x2,%eax
082e7210 +0x4c:  add    0xc(%ebp),%eax
082e7213 +0x4f:  mov    (%eax),%edx
082e7215 +0x51:  add    $0x1,%edx
082e7218 +0x54:  mov    %edx,(%eax)
082e721a +0x56:  jmp    082e7220 <+0x5c>
082e721c +0x58:  nop
082e721d +0x59:  jmp    082e7220 <+0x5c>
082e721f +0x5b:  nop
082e7220 +0x5c:  addl   $0x1,-0x10(%ebp)
082e7224 +0x60:  cmpl   $0x7,-0x10(%ebp)
082e7228 +0x64:  setle  %al
082e722b +0x67:  test   %al,%al
082e722d +0x69:  jne    082e71d3 <+0xf>
082e722f +0x6b:  leave
082e7230 +0x6c:  ret
082e7231 +0x6d:  nop
```

## 反编译 C

```c
// pvp_assault::CAssaultPlace::_GetTeamCountAliveUser @ 0x82e71c4

/* pvp_assault::CAssaultPlace::_GetTeamCountAliveUser(int*) */

void __thiscall pvp_assault::CAssaultPlace::_GetTeamCountAliveUser(CAssaultPlace *this,int *param_1)

{
  char cVar1;
  CUserCharacInfo *this_00;
  int iVar2;
  int local_14;
  
  for (local_14 = 0; local_14 < 8; local_14 = local_14 + 1) {
    this_00 = (CUserCharacInfo *)CAssaulter::GetUser((CAssaulter *)(this + local_14 * 0x20));
    if ((this_00 != (CUserCharacInfo *)0x0) &&
       (cVar1 = CUserCharacInfo::IsCurCharacGhost(this_00), cVar1 == '\0')) {
      iVar2 = CAssaulter::GetTeam((CAssaulter *)(this + local_14 * 0x20));
      param_1[iVar2] = param_1[iVar2] + 1;
    }
  }
  return;
}
```
