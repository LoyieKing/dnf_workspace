# UseCubeMission

`_ZN14UseCubeMissionC1Ev`

`UseCubeMission::UseCubeMission()`

| 类 | 地址 |
|---|---|
| `UseCubeMission` | `0x08165920` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08165920  _ZN14UseCubeMissionC1Ev
#           UseCubeMission::UseCubeMission()
# range [0x08165920, 0x08165943]
08165920 +0x00:  push   %ebp
08165921 +0x01:  mov    %esp,%ebp
08165923 +0x03:  sub    $0x18,%esp
08165926 +0x06:  mov    0x8(%ebp),%eax
08165929 +0x09:  movl   $0x3,0x4(%esp)
08165931 +0x11:  mov    %eax,(%esp)
08165934 +0x14:  call   08164f12 <_ZN24BaseHeroMissionConditionC1EN20HeroMissionCondition9MissionNo1TE>  ; BaseHeroMissionCondition::BaseHeroMissionCondition(HeroMissionCondition::MissionNo::T)
08165939 +0x19:  mov    0x8(%ebp),%eax
0816593c +0x1c:  movl   $&_ZTV14UseCubeMission+0x8,(%eax)
08165942 +0x22:  leave
08165943 +0x23:  ret
```

## 反编译 C

```c
// UseCubeMission::UseCubeMission @ 0x8165920

/* UseCubeMission::UseCubeMission() */

void __thiscall UseCubeMission::UseCubeMission(UseCubeMission *this)

{
  BaseHeroMissionCondition::BaseHeroMissionCondition((BaseHeroMissionCondition *)this,3);
  *(undefined ***)this = &PTR__UseCubeMission_08b7f090;
  return;
}
```
