# _makeTotalMissionInfo

`_ZNK8CMission21_makeTotalMissionInfoER11MissionInfoRK5CUser`

`CMission::_makeTotalMissionInfo(MissionInfo&, CUser const&) const`

| 类 | 地址 |
|---|---|
| `CMission` | `0x085e3188` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e3188  _ZNK8CMission21_makeTotalMissionInfoER11MissionInfoRK5CUser
#           CMission::_makeTotalMissionInfo(MissionInfo&, CUser const&) const
# range [0x085e3188, 0x085e318d]
085e3188 +0x00:  push   %ebp
085e3189 +0x01:  mov    %esp,%ebp
085e318b +0x03:  pop    %ebp
085e318c +0x04:  ret
085e318d +0x05:  nop
```

## 反编译 C

```c
// CMission::_makeTotalMissionInfo @ 0x85e3188

/* CMission::_makeTotalMissionInfo(MissionInfo&, CUser const&) const */

void CMission::_makeTotalMissionInfo(MissionInfo *param_1,CUser *param_2)

{
  return;
}
```
