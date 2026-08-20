# verifyMission

`_ZNK20CMission_combo_clear13verifyMissionERK11MissionInfo`

`CMission_combo_clear::verifyMission(MissionInfo const&) const`

| 类 | 地址 |
|---|---|
| `CMission_combo_clear` | `0x085e412a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e412a  _ZNK20CMission_combo_clear13verifyMissionERK11MissionInfo
#           CMission_combo_clear::verifyMission(MissionInfo const&) const
# range [0x085e412a, 0x085e4133]
085e412a +0x00:  push   %ebp
085e412b +0x01:  mov    %esp,%ebp
085e412d +0x03:  mov    $0x1,%eax
085e4132 +0x08:  pop    %ebp
085e4133 +0x09:  ret
```

## 反编译 C

```c
// CMission_combo_clear::verifyMission @ 0x85e412a

/* CMission_combo_clear::verifyMission(MissionInfo const&) const */

undefined4 CMission_combo_clear::verifyMission(MissionInfo *param_1)

{
  return 1;
}
```
