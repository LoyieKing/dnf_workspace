# AttendanceMission

`_ZN17AttendanceMissionC1Ev`

`AttendanceMission::AttendanceMission()`

| 类 | 地址 |
|---|---|
| `AttendanceMission` | `0x08165f90` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08165f90  _ZN17AttendanceMissionC1Ev
#           AttendanceMission::AttendanceMission()
# range [0x08165f90, 0x08165fb3]
08165f90 +0x00:  push   %ebp
08165f91 +0x01:  mov    %esp,%ebp
08165f93 +0x03:  sub    $0x18,%esp
08165f96 +0x06:  mov    0x8(%ebp),%eax
08165f99 +0x09:  movl   $0x5,0x4(%esp)
08165fa1 +0x11:  mov    %eax,(%esp)
08165fa4 +0x14:  call   08164f12 <_ZN24BaseHeroMissionConditionC1EN20HeroMissionCondition9MissionNo1TE>  ; BaseHeroMissionCondition::BaseHeroMissionCondition(HeroMissionCondition::MissionNo::T)
08165fa9 +0x19:  mov    0x8(%ebp),%eax
08165fac +0x1c:  movl   $&_ZTV17AttendanceMission+0x8,(%eax)
08165fb2 +0x22:  leave
08165fb3 +0x23:  ret
```

## 反编译 C

```c
// AttendanceMission::AttendanceMission @ 0x8165f90

/* AttendanceMission::AttendanceMission() */

void __thiscall AttendanceMission::AttendanceMission(AttendanceMission *this)

{
  BaseHeroMissionCondition::BaseHeroMissionCondition((BaseHeroMissionCondition *)this,5);
  *(undefined ***)this = &PTR__AttendanceMission_08b7f060;
  return;
}
```
