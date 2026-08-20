# LevelUpMission

`_ZN14LevelUpMissionC1Ev`

`LevelUpMission::LevelUpMission()`

| 类 | 地址 |
|---|---|
| `LevelUpMission` | `0x08165bac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08165bac  _ZN14LevelUpMissionC1Ev
#           LevelUpMission::LevelUpMission()
# range [0x08165bac, 0x08165bcf]
08165bac +0x00:  push   %ebp
08165bad +0x01:  mov    %esp,%ebp
08165baf +0x03:  sub    $0x18,%esp
08165bb2 +0x06:  mov    0x8(%ebp),%eax
08165bb5 +0x09:  movl   $0x4,0x4(%esp)
08165bbd +0x11:  mov    %eax,(%esp)
08165bc0 +0x14:  call   08164f12 <_ZN24BaseHeroMissionConditionC1EN20HeroMissionCondition9MissionNo1TE>  ; BaseHeroMissionCondition::BaseHeroMissionCondition(HeroMissionCondition::MissionNo::T)
08165bc5 +0x19:  mov    0x8(%ebp),%eax
08165bc8 +0x1c:  movl   $&_ZTV14LevelUpMission+0x8,(%eax)
08165bce +0x22:  leave
08165bcf +0x23:  ret
```

## 反编译 C

```c
// LevelUpMission::LevelUpMission @ 0x8165bac

/* LevelUpMission::LevelUpMission() */

void __thiscall LevelUpMission::LevelUpMission(LevelUpMission *this)

{
  BaseHeroMissionCondition::BaseHeroMissionCondition((BaseHeroMissionCondition *)this,4);
  *(undefined ***)this = &PTR__LevelUpMission_08b7f078;
  return;
}
```
