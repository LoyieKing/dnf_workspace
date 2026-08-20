# verifyMission

`_ZNK15CMission_within13verifyMissionERK11MissionInfo`

`CMission_within::verifyMission(MissionInfo const&) const`

| 类 | 地址 |
|---|---|
| `CMission_within` | `0x085e3d4e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e3d4e  _ZNK15CMission_within13verifyMissionERK11MissionInfo
#           CMission_within::verifyMission(MissionInfo const&) const
# range [0x085e3d4e, 0x085e3d57]
085e3d4e +0x00:  push   %ebp
085e3d4f +0x01:  mov    %esp,%ebp
085e3d51 +0x03:  mov    $0x1,%eax
085e3d56 +0x08:  pop    %ebp
085e3d57 +0x09:  ret
```

## 反编译 C

```c
// CMission_within::verifyMission @ 0x85e3d4e

/* CMission_within::verifyMission(MissionInfo const&) const */

undefined4 CMission_within::verifyMission(MissionInfo *param_1)

{
  return 1;
}
```
