# Update

`_ZNK20CMission_combo_clear6UpdateER11MissionInfoRK31MissionClearCondition_Parameter`

`CMission_combo_clear::Update(MissionInfo&, MissionClearCondition_Parameter const&) const`

| 类 | 地址 |
|---|---|
| `CMission_combo_clear` | `0x085e4562` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e4562  _ZNK20CMission_combo_clear6UpdateER11MissionInfoRK31MissionClearCondition_Parameter
#           CMission_combo_clear::Update(MissionInfo&, MissionClearCondition_Parameter const&) const
# range [0x085e4562, 0x085e456b]
085e4562 +0x00:  push   %ebp
085e4563 +0x01:  mov    %esp,%ebp
085e4565 +0x03:  mov    $0x1,%eax
085e456a +0x08:  pop    %ebp
085e456b +0x09:  ret
```

## 反编译 C

```c
// CMission_combo_clear::Update @ 0x85e4562

/* CMission_combo_clear::Update(MissionInfo&, MissionClearCondition_Parameter const&) const */

undefined4
CMission_combo_clear::Update(MissionInfo *param_1,MissionClearCondition_Parameter *param_2)

{
  return 1;
}
```
