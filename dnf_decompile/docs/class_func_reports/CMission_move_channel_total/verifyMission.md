# verifyMission

`_ZNK27CMission_move_channel_total13verifyMissionERK11MissionInfo`

`CMission_move_channel_total::verifyMission(MissionInfo const&) const`

| 类 | 地址 |
|---|---|
| `CMission_move_channel_total` | `0x085e40a2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e40a2  _ZNK27CMission_move_channel_total13verifyMissionERK11MissionInfo
#           CMission_move_channel_total::verifyMission(MissionInfo const&) const
# range [0x085e40a2, 0x085e40ab]
085e40a2 +0x00:  push   %ebp
085e40a3 +0x01:  mov    %esp,%ebp
085e40a5 +0x03:  mov    $0x1,%eax
085e40aa +0x08:  pop    %ebp
085e40ab +0x09:  ret
```

## 反编译 C

```c
// CMission_move_channel_total::verifyMission @ 0x85e40a2

/* CMission_move_channel_total::verifyMission(MissionInfo const&) const */

undefined4 CMission_move_channel_total::verifyMission(MissionInfo *param_1)

{
  return 1;
}
```
