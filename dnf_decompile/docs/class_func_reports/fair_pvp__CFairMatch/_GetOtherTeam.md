# _GetOtherTeam

`_ZN8fair_pvp10CFairMatch13_GetOtherTeamE22ENUM_SCHOOL_MATCH_TEAM`

`fair_pvp::CFairMatch::_GetOtherTeam(ENUM_SCHOOL_MATCH_TEAM)`

| 类 | 地址 |
|---|---|
| `fair_pvp::CFairMatch` | `0x08566476` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08566476  _ZN8fair_pvp10CFairMatch13_GetOtherTeamE22ENUM_SCHOOL_MATCH_TEAM
#           fair_pvp::CFairMatch::_GetOtherTeam(ENUM_SCHOOL_MATCH_TEAM)
# range [0x08566476, 0x08566499]
08566476 +0x00:  push   %ebp
08566477 +0x01:  mov    %esp,%ebp
08566479 +0x03:  cmpl   $0x0,0xc(%ebp)
0856647d +0x07:  jne    08566486 <+0x10>
0856647f +0x09:  mov    $0x1,%eax
08566484 +0x0e:  jmp    08566498 <+0x22>
08566486 +0x10:  cmpl   $0x1,0xc(%ebp)
0856648a +0x14:  jne    08566493 <+0x1d>
0856648c +0x16:  mov    $0x0,%eax
08566491 +0x1b:  jmp    08566498 <+0x22>
08566493 +0x1d:  mov    $0x2,%eax
08566498 +0x22:  pop    %ebp
08566499 +0x23:  ret
```

## 反编译 C

```c
// fair_pvp::CFairMatch::_GetOtherTeam @ 0x8566476

/* fair_pvp::CFairMatch::_GetOtherTeam(ENUM_SCHOOL_MATCH_TEAM) */

undefined4 __thiscall fair_pvp::CFairMatch::_GetOtherTeam(undefined4 this,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 1;
  }
  else if (param_2 == 1) {
    uVar1 = 0;
  }
  else {
    uVar1 = 2;
  }
  return uVar1;
}
```
