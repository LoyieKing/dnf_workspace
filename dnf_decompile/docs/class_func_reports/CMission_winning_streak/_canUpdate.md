# _canUpdate

`_ZNK23CMission_winning_streak10_canUpdateERK31MissionClearCondition_Parameter`

`CMission_winning_streak::_canUpdate(MissionClearCondition_Parameter const&) const`

| 类 | 地址 |
|---|---|
| `CMission_winning_streak` | `0x085e364e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e364e  _ZNK23CMission_winning_streak10_canUpdateERK31MissionClearCondition_Parameter
#           CMission_winning_streak::_canUpdate(MissionClearCondition_Parameter const&) const
# range [0x085e364e, 0x085e3657]
085e364e +0x00:  push   %ebp
085e364f +0x01:  mov    %esp,%ebp
085e3651 +0x03:  mov    $0x1,%eax
085e3656 +0x08:  pop    %ebp
085e3657 +0x09:  ret
```

## 反编译 C

```c
// CMission_winning_streak::_canUpdate @ 0x85e364e

/* CMission_winning_streak::_canUpdate(MissionClearCondition_Parameter const&) const */

undefined4 CMission_winning_streak::_canUpdate(MissionClearCondition_Parameter *param_1)

{
  return 1;
}
```
