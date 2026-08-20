# rewardMission

`_ZN12TotalMission13rewardMissionEP5CUserR16HeroMissionValue`

`TotalMission::rewardMission(CUser*, HeroMissionValue&)`

| 类 | 地址 |
|---|---|
| `TotalMission` | `0x081663f4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081663f4  _ZN12TotalMission13rewardMissionEP5CUserR16HeroMissionValue
#           TotalMission::rewardMission(CUser*, HeroMissionValue&)
# range [0x081663f4, 0x081663fd]
081663f4 +0x00:  push   %ebp
081663f5 +0x01:  mov    %esp,%ebp
081663f7 +0x03:  mov    $0x1,%eax
081663fc +0x08:  pop    %ebp
081663fd +0x09:  ret
```

## 反编译 C

```c
// TotalMission::rewardMission @ 0x81663f4

/* TotalMission::rewardMission(CUser*, HeroMissionValue&) */

undefined4 TotalMission::rewardMission(CUser *param_1,HeroMissionValue *param_2)

{
  return 1;
}
```
