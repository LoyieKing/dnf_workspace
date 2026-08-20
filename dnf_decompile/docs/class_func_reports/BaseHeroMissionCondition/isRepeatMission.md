# isRepeatMission

`_ZN24BaseHeroMissionCondition15isRepeatMissionEv`

`BaseHeroMissionCondition::isRepeatMission()`

| 类 | 地址 |
|---|---|
| `BaseHeroMissionCondition` | `0x08164fc2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08164fc2  _ZN24BaseHeroMissionCondition15isRepeatMissionEv
#           BaseHeroMissionCondition::isRepeatMission()
# range [0x08164fc2, 0x08164fcd]
08164fc2 +0x00:  push   %ebp
08164fc3 +0x01:  mov    %esp,%ebp
08164fc5 +0x03:  mov    0x8(%ebp),%eax
08164fc8 +0x06:  movzbl 0x10(%eax),%eax
08164fcc +0x0a:  pop    %ebp
08164fcd +0x0b:  ret
```

## 反编译 C

```c
// BaseHeroMissionCondition::isRepeatMission @ 0x8164fc2

/* BaseHeroMissionCondition::isRepeatMission() */

BaseHeroMissionCondition __thiscall
BaseHeroMissionCondition::isRepeatMission(BaseHeroMissionCondition *this)

{
  return this[0x10];
}
```
