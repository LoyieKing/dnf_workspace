# TotalMission

`_ZN12TotalMissionC1Ev`

`TotalMission::TotalMission()`

| 类 | 地址 |
|---|---|
| `TotalMission` | `0x08166306` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08166306  _ZN12TotalMissionC1Ev
#           TotalMission::TotalMission()
# range [0x08166306, 0x08166329]
08166306 +0x00:  push   %ebp
08166307 +0x01:  mov    %esp,%ebp
08166309 +0x03:  sub    $0x18,%esp
0816630c +0x06:  mov    0x8(%ebp),%eax
0816630f +0x09:  movl   $0x6,0x4(%esp)
08166317 +0x11:  mov    %eax,(%esp)
0816631a +0x14:  call   08164f12 <_ZN24BaseHeroMissionConditionC1EN20HeroMissionCondition9MissionNo1TE>  ; BaseHeroMissionCondition::BaseHeroMissionCondition(HeroMissionCondition::MissionNo::T)
0816631f +0x19:  mov    0x8(%ebp),%eax
08166322 +0x1c:  movl   $&_ZTV12TotalMission+0x8,(%eax)
08166328 +0x22:  leave
08166329 +0x23:  ret
```

## 反编译 C

```c
// TotalMission::TotalMission @ 0x8166306

/* TotalMission::TotalMission() */

void __thiscall TotalMission::TotalMission(TotalMission *this)

{
  BaseHeroMissionCondition::BaseHeroMissionCondition((BaseHeroMissionCondition *)this,6);
  *(undefined ***)this = &PTR__TotalMission_08b7f048;
  return;
}
```
