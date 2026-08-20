# Update

`_ZNK22CMission_winning_count6UpdateER11MissionInfoRK31MissionClearCondition_Parameter`

`CMission_winning_count::Update(MissionInfo&, MissionClearCondition_Parameter const&) const`

| 类 | 地址 |
|---|---|
| `CMission_winning_count` | `0x085e361a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e361a  _ZNK22CMission_winning_count6UpdateER11MissionInfoRK31MissionClearCondition_Parameter
#           CMission_winning_count::Update(MissionInfo&, MissionClearCondition_Parameter const&) const
# range [0x085e361a, 0x085e3635]
085e361a +0x00:  push   %ebp
085e361b +0x01:  mov    %esp,%ebp
085e361d +0x03:  mov    0xc(%ebp),%eax
085e3620 +0x06:  movzwl 0x4(%eax),%eax
085e3624 +0x0a:  lea    0x1(%eax),%edx
085e3627 +0x0d:  mov    0xc(%ebp),%eax
085e362a +0x10:  mov    %dx,0x4(%eax)
085e362e +0x14:  mov    $0x1,%eax
085e3633 +0x19:  pop    %ebp
085e3634 +0x1a:  ret
085e3635 +0x1b:  nop
```

## 反编译 C

```c
// CMission_winning_count::Update @ 0x85e361a

/* CMission_winning_count::Update(MissionInfo&, MissionClearCondition_Parameter const&) const */

undefined4
CMission_winning_count::Update(MissionInfo *param_1,MissionClearCondition_Parameter *param_2)

{
  *(short *)(param_2 + 4) = *(short *)(param_2 + 4) + 1;
  return 1;
}
```
