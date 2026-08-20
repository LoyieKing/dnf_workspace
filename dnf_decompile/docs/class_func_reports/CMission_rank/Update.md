# Update

`_ZNK13CMission_rank6UpdateER11MissionInfoRK31MissionClearCondition_Parameter`

`CMission_rank::Update(MissionInfo&, MissionClearCondition_Parameter const&) const`

| 类 | 地址 |
|---|---|
| `CMission_rank` | `0x085e3780` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e3780  _ZNK13CMission_rank6UpdateER11MissionInfoRK31MissionClearCondition_Parameter
#           CMission_rank::Update(MissionInfo&, MissionClearCondition_Parameter const&) const
# range [0x085e3780, 0x085e3789]
085e3780 +0x00:  push   %ebp
085e3781 +0x01:  mov    %esp,%ebp
085e3783 +0x03:  mov    $0x1,%eax
085e3788 +0x08:  pop    %ebp
085e3789 +0x09:  ret
```

## 反编译 C

```c
// CMission_rank::Update @ 0x85e3780

/* CMission_rank::Update(MissionInfo&, MissionClearCondition_Parameter const&) const */

undefined4 CMission_rank::Update(MissionInfo *param_1,MissionClearCondition_Parameter *param_2)

{
  return 1;
}
```
