# rewardMission

`_ZN14LevelUpMission13rewardMissionEP5CUserR16HeroMissionValue`

`LevelUpMission::rewardMission(CUser*, HeroMissionValue&)`

| 类 | 地址 |
|---|---|
| `LevelUpMission` | `0x08165f86` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08165f86  _ZN14LevelUpMission13rewardMissionEP5CUserR16HeroMissionValue
#           LevelUpMission::rewardMission(CUser*, HeroMissionValue&)
# range [0x08165f86, 0x08165f8f]
08165f86 +0x00:  push   %ebp
08165f87 +0x01:  mov    %esp,%ebp
08165f89 +0x03:  mov    $0x1,%eax
08165f8e +0x08:  pop    %ebp
08165f8f +0x09:  ret
```

## 反编译 C

```c
// LevelUpMission::rewardMission @ 0x8165f86

/* LevelUpMission::rewardMission(CUser*, HeroMissionValue&) */

undefined4 LevelUpMission::rewardMission(CUser *param_1,HeroMissionValue *param_2)

{
  return 1;
}
```
