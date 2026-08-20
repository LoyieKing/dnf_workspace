# getMissionType

`_ZN24BaseHeroMissionCondition14getMissionTypeEv`

`BaseHeroMissionCondition::getMissionType()`

| 类 | 地址 |
|---|---|
| `BaseHeroMissionCondition` | `0x08164fb6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08164fb6  _ZN24BaseHeroMissionCondition14getMissionTypeEv
#           BaseHeroMissionCondition::getMissionType()
# range [0x08164fb6, 0x08164fc1]
08164fb6 +0x00:  push   %ebp
08164fb7 +0x01:  mov    %esp,%ebp
08164fb9 +0x03:  mov    0x8(%ebp),%eax
08164fbc +0x06:  mov    0xc(%eax),%eax
08164fbf +0x09:  pop    %ebp
08164fc0 +0x0a:  ret
08164fc1 +0x0b:  nop
```

## 反编译 C

```c
// BaseHeroMissionCondition::getMissionType @ 0x8164fb6

/* BaseHeroMissionCondition::getMissionType() */

undefined4 __thiscall BaseHeroMissionCondition::getMissionType(BaseHeroMissionCondition *this)

{
  return *(undefined4 *)(this + 0xc);
}
```
