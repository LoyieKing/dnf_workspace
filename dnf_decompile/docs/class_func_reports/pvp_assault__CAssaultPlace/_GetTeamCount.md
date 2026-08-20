# _GetTeamCount

`_ZN11pvp_assault13CAssaultPlace13_GetTeamCountE17ENUM_ASSAULT_TEAM`

`pvp_assault::CAssaultPlace::_GetTeamCount(ENUM_ASSAULT_TEAM)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultPlace` | `0x082e7162` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082e7162  _ZN11pvp_assault13CAssaultPlace13_GetTeamCountE17ENUM_ASSAULT_TEAM
#           pvp_assault::CAssaultPlace::_GetTeamCount(ENUM_ASSAULT_TEAM)
# range [0x082e7162, 0x082e71c3]
082e7162 +0x00:  push   %ebp
082e7163 +0x01:  mov    %esp,%ebp
082e7165 +0x03:  sub    $0x28,%esp
082e7168 +0x06:  movl   $0x0,-0x10(%ebp)
082e716f +0x0d:  movl   $0x0,-0xc(%ebp)
082e7176 +0x14:  jmp    082e71b3 <+0x51>
082e7178 +0x16:  mov    -0xc(%ebp),%eax
082e717b +0x19:  shl    $0x5,%eax
082e717e +0x1c:  add    0x8(%ebp),%eax
082e7181 +0x1f:  mov    %eax,(%esp)
082e7184 +0x22:  call   082f055c <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2e0>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2e0
082e7189 +0x27:  test   %al,%al
082e718b +0x29:  jne    082e71ae <+0x4c>
082e718d +0x2b:  mov    -0xc(%ebp),%eax
082e7190 +0x2e:  shl    $0x5,%eax
082e7193 +0x31:  add    0x8(%ebp),%eax
082e7196 +0x34:  mov    %eax,(%esp)
082e7199 +0x37:  call   082f0570 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2f4>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2f4
082e719e +0x3c:  cmp    0xc(%ebp),%eax
082e71a1 +0x3f:  sete   %al
082e71a4 +0x42:  test   %al,%al
082e71a6 +0x44:  je     082e71af <+0x4d>
082e71a8 +0x46:  addl   $0x1,-0x10(%ebp)
082e71ac +0x4a:  jmp    082e71af <+0x4d>
082e71ae +0x4c:  nop
082e71af +0x4d:  addl   $0x1,-0xc(%ebp)
082e71b3 +0x51:  cmpl   $0x7,-0xc(%ebp)
082e71b7 +0x55:  setle  %al
082e71ba +0x58:  test   %al,%al
082e71bc +0x5a:  jne    082e7178 <+0x16>
082e71be +0x5c:  mov    -0x10(%ebp),%eax
082e71c1 +0x5f:  leave
082e71c2 +0x60:  ret
082e71c3 +0x61:  nop
```

## 反编译 C

```c
// pvp_assault::CAssaultPlace::_GetTeamCount @ 0x82e7162

/* pvp_assault::CAssaultPlace::_GetTeamCount(ENUM_ASSAULT_TEAM) */

int __thiscall pvp_assault::CAssaultPlace::_GetTeamCount(CAssaultPlace *this,int param_2)

{
  char cVar1;
  int iVar2;
  int local_14;
  int local_10;
  
  local_14 = 0;
  for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
    cVar1 = CAssaulter::Empty((CAssaulter *)(this + local_10 * 0x20));
    if (cVar1 == '\0') {
      iVar2 = CAssaulter::GetTeam((CAssaulter *)(this + local_10 * 0x20));
      if (iVar2 == param_2) {
        local_14 = local_14 + 1;
      }
    }
  }
  return local_14;
}
```
