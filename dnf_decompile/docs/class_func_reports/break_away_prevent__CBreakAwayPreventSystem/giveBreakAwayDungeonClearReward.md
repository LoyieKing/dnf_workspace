# giveBreakAwayDungeonClearReward

`_ZN18break_away_prevent23CBreakAwayPreventSystem31giveBreakAwayDungeonClearRewardEP5CUser`

`break_away_prevent::CBreakAwayPreventSystem::giveBreakAwayDungeonClearReward(CUser*)`

| 类 | 地址 |
|---|---|
| `break_away_prevent::CBreakAwayPreventSystem` | `0x0831d164` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0831d164  _ZN18break_away_prevent23CBreakAwayPreventSystem31giveBreakAwayDungeonClearRewardEP5CUser
#           break_away_prevent::CBreakAwayPreventSystem::giveBreakAwayDungeonClearReward(CUser*)
# range [0x0831d164, 0x0831d206]
0831d164 +0x00:  push   %ebp
0831d165 +0x01:  mov    %esp,%ebp
0831d167 +0x03:  sub    $0x28,%esp
0831d16a +0x06:  movb   $0x0,-0x9(%ebp)
0831d16e +0x0a:  mov    0xc(%ebp),%eax
0831d171 +0x0d:  mov    %eax,(%esp)
0831d174 +0x10:  call   0831d4f0 <_GLOBAL__I__ZN18break_away_prevent23CBreakAwayPreventSystemC2Ev+0x2a9>  ; global constructors keyed to break_away_prevent::CBreakAwayPreventSystem::CBreakAwayPreventSystem()+0x2a9
0831d179 +0x15:  cmp    $0x1,%eax
0831d17c +0x18:  sete   %al
0831d17f +0x1b:  test   %al,%al
0831d181 +0x1d:  je     0831d1c2 <+0x5e>
0831d183 +0x1f:  mov    0xc(%ebp),%eax
0831d186 +0x22:  mov    %eax,(%esp)
0831d189 +0x25:  call   0831d4fe <_GLOBAL__I__ZN18break_away_prevent23CBreakAwayPreventSystemC2Ev+0x2b7>  ; global constructors keyed to break_away_prevent::CBreakAwayPreventSystem::CBreakAwayPreventSystem()+0x2b7
0831d18e +0x2a:  mov    0xc(%ebp),%edx
0831d191 +0x2d:  mov    %edx,0xc(%esp)
0831d195 +0x31:  mov    %eax,0x8(%esp)
0831d199 +0x35:  movl   $0x1,0x4(%esp)
0831d1a1 +0x3d:  mov    0x8(%ebp),%eax
0831d1a4 +0x40:  mov    %eax,(%esp)
0831d1a7 +0x43:  call   0831c872 <_ZN18break_away_prevent23CBreakAwayPreventSystem12selectRewardEiiP5CUser>  ; break_away_prevent::CBreakAwayPreventSystem::selectReward(int, int, CUser*)
0831d1ac +0x48:  mov    %al,-0x9(%ebp)
0831d1af +0x4b:  cmpb   $0x0,-0x9(%ebp)
0831d1b3 +0x4f:  je     0831d201 <+0x9d>
0831d1b5 +0x51:  mov    0xc(%ebp),%eax
0831d1b8 +0x54:  mov    %eax,(%esp)
0831d1bb +0x57:  call   084d8e68 <_ZN13Inter_LoadEtc19giveBreakAwayRewardEP5CUser>  ; Inter_LoadEtc::giveBreakAwayReward(CUser*)
0831d1c0 +0x5c:  jmp    0831d205 <+0xa1>
0831d1c2 +0x5e:  mov    0xc(%ebp),%eax
0831d1c5 +0x61:  mov    %eax,(%esp)
0831d1c8 +0x64:  call   0831d4fe <_GLOBAL__I__ZN18break_away_prevent23CBreakAwayPreventSystemC2Ev+0x2b7>  ; global constructors keyed to break_away_prevent::CBreakAwayPreventSystem::CBreakAwayPreventSystem()+0x2b7
0831d1cd +0x69:  mov    0xc(%ebp),%edx
0831d1d0 +0x6c:  mov    %edx,0xc(%esp)
0831d1d4 +0x70:  mov    %eax,0x8(%esp)
0831d1d8 +0x74:  movl   $0x3,0x4(%esp)
0831d1e0 +0x7c:  mov    0x8(%ebp),%eax
0831d1e3 +0x7f:  mov    %eax,(%esp)
0831d1e6 +0x82:  call   0831c872 <_ZN18break_away_prevent23CBreakAwayPreventSystem12selectRewardEiiP5CUser>  ; break_away_prevent::CBreakAwayPreventSystem::selectReward(int, int, CUser*)
0831d1eb +0x87:  mov    %al,-0x9(%ebp)
0831d1ee +0x8a:  cmpb   $0x0,-0x9(%ebp)
0831d1f2 +0x8e:  je     0831d204 <+0xa0>
0831d1f4 +0x90:  mov    0xc(%ebp),%eax
0831d1f7 +0x93:  mov    %eax,(%esp)
0831d1fa +0x96:  call   084d8e68 <_ZN13Inter_LoadEtc19giveBreakAwayRewardEP5CUser>  ; Inter_LoadEtc::giveBreakAwayReward(CUser*)
0831d1ff +0x9b:  jmp    0831d205 <+0xa1>
0831d201 +0x9d:  nop
0831d202 +0x9e:  jmp    0831d205 <+0xa1>
0831d204 +0xa0:  nop
0831d205 +0xa1:  leave
0831d206 +0xa2:  ret
```

## 反编译 C

```c
// break_away_prevent::CBreakAwayPreventSystem::giveBreakAwayDungeonClearReward @ 0x831d164

/* break_away_prevent::CBreakAwayPreventSystem::giveBreakAwayDungeonClearReward(CUser*) */

void __thiscall
break_away_prevent::CBreakAwayPreventSystem::giveBreakAwayDungeonClearReward
          (CBreakAwayPreventSystem *this,CUser *param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = CUser::getBreakAwayRewardOrder(param_1);
  if (iVar2 == 1) {
    iVar2 = CUser::getBreakAwayAccureCera(param_1);
    cVar1 = selectReward(this,1,iVar2,param_1);
    if (cVar1 != '\0') {
      Inter_LoadEtc::giveBreakAwayReward(param_1);
    }
  }
  else {
    iVar2 = CUser::getBreakAwayAccureCera(param_1);
    cVar1 = selectReward(this,3,iVar2,param_1);
    if (cVar1 != '\0') {
      Inter_LoadEtc::giveBreakAwayReward(param_1);
    }
  }
  return;
}
```
