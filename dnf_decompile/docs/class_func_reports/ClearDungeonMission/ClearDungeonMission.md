# ClearDungeonMission

`_ZN19ClearDungeonMissionC1Ev`

`ClearDungeonMission::ClearDungeonMission()`

| 类 | 地址 |
|---|---|
| `ClearDungeonMission` | `0x08165342` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08165342  _ZN19ClearDungeonMissionC1Ev
#           ClearDungeonMission::ClearDungeonMission()
# range [0x08165342, 0x08165365]
08165342 +0x00:  push   %ebp
08165343 +0x01:  mov    %esp,%ebp
08165345 +0x03:  sub    $0x18,%esp
08165348 +0x06:  mov    0x8(%ebp),%eax
0816534b +0x09:  movl   $0x1,0x4(%esp)
08165353 +0x11:  mov    %eax,(%esp)
08165356 +0x14:  call   08164f12 <_ZN24BaseHeroMissionConditionC1EN20HeroMissionCondition9MissionNo1TE>  ; BaseHeroMissionCondition::BaseHeroMissionCondition(HeroMissionCondition::MissionNo::T)
0816535b +0x19:  mov    0x8(%ebp),%eax
0816535e +0x1c:  movl   $&_ZTV19ClearDungeonMission+0x8,(%eax)
08165364 +0x22:  leave
08165365 +0x23:  ret
```

## 反编译 C

```c
// ClearDungeonMission::ClearDungeonMission @ 0x8165342

/* ClearDungeonMission::ClearDungeonMission() */

void __thiscall ClearDungeonMission::ClearDungeonMission(ClearDungeonMission *this)

{
  BaseHeroMissionCondition::BaseHeroMissionCondition((BaseHeroMissionCondition *)this,1);
  *(undefined ***)this = &PTR__ClearDungeonMission_08b7f0c0;
  return;
}
```
