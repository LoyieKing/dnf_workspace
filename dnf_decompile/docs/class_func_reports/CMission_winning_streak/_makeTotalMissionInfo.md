# _makeTotalMissionInfo

`_ZNK23CMission_winning_streak21_makeTotalMissionInfoER11MissionInfoRK5CUser`

`CMission_winning_streak::_makeTotalMissionInfo(MissionInfo&, CUser const&) const`

| 类 | 地址 |
|---|---|
| `CMission_winning_streak` | `0x085e3658` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e3658  _ZNK23CMission_winning_streak21_makeTotalMissionInfoER11MissionInfoRK5CUser
#           CMission_winning_streak::_makeTotalMissionInfo(MissionInfo&, CUser const&) const
# range [0x085e3658, 0x085e366b]
085e3658 +0x00:  push   %ebp
085e3659 +0x01:  mov    %esp,%ebp
085e365b +0x03:  mov    0x8(%ebp),%eax
085e365e +0x06:  mov    0x40(%eax),%eax
085e3661 +0x09:  mov    %eax,%edx
085e3663 +0x0b:  mov    0xc(%ebp),%eax
085e3666 +0x0e:  mov    %dx,0x6(%eax)
085e366a +0x12:  pop    %ebp
085e366b +0x13:  ret
```

## 反编译 C

```c
// CMission_winning_streak::_makeTotalMissionInfo @ 0x85e3658

/* CMission_winning_streak::_makeTotalMissionInfo(MissionInfo&, CUser const&) const */

void CMission_winning_streak::_makeTotalMissionInfo(MissionInfo *param_1,CUser *param_2)

{
  *(short *)(param_2 + 6) = (short)*(undefined4 *)(param_1 + 0x40);
  return;
}
```
