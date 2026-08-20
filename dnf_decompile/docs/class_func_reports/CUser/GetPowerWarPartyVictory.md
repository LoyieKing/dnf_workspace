# GetPowerWarPartyVictory

`_ZN5CUser23GetPowerWarPartyVictoryEv`

`CUser::GetPowerWarPartyVictory()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868856c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868856c  _ZN5CUser23GetPowerWarPartyVictoryEv
#           CUser::GetPowerWarPartyVictory()
# range [0x0868856c, 0x086885a5]
0868856c +0x00:  push   %ebp
0868856d +0x01:  mov    %esp,%ebp
0868856f +0x03:  sub    $0x28,%esp
08688572 +0x06:  mov    0x8(%ebp),%eax
08688575 +0x09:  mov    %eax,(%esp)
08688578 +0x0c:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
0868857d +0x11:  mov    %eax,-0xc(%ebp)
08688580 +0x14:  cmpl   $0x0,-0xc(%ebp)
08688584 +0x18:  jne    08688596 <+0x2a>
08688586 +0x1a:  mov    0x8(%ebp),%eax
08688589 +0x1d:  mov    %eax,(%esp)
0868858c +0x20:  call   082f0a12 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x796>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x796
08688591 +0x25:  movzwl %ax,%eax
08688594 +0x28:  jmp    086885a4 <+0x38>
08688596 +0x2a:  mov    -0xc(%ebp),%eax
08688599 +0x2d:  mov    %eax,(%esp)
0868859c +0x30:  call   082f07ec <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x570>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x570
086885a1 +0x35:  movzwl %ax,%eax
086885a4 +0x38:  leave
086885a5 +0x39:  ret
```

## 反编译 C

```c
// CUser::GetPowerWarPartyVictory @ 0x868856c

/* CUser::GetPowerWarPartyVictory() */

undefined2 __thiscall CUser::GetPowerWarPartyVictory(CUser *this)

{
  undefined2 uVar1;
  CParty *this_00;
  
  this_00 = (CParty *)GetParty(this);
  if (this_00 == (CParty *)0x0) {
    uVar1 = CUserCharacInfo::getStraightVictories((CUserCharacInfo *)this);
  }
  else {
    uVar1 = CParty::getStraightVictories(this_00);
  }
  return uVar1;
}
```
