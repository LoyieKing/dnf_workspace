# Update

`_ZNK19CMission_kill_count6UpdateER11MissionInfoRK31MissionClearCondition_Parameter`

`CMission_kill_count::Update(MissionInfo&, MissionClearCondition_Parameter const&) const`

| 类 | 地址 |
|---|---|
| `CMission_kill_count` | `0x085e38da` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e38da  _ZNK19CMission_kill_count6UpdateER11MissionInfoRK31MissionClearCondition_Parameter
#           CMission_kill_count::Update(MissionInfo&, MissionClearCondition_Parameter const&) const
# range [0x085e38da, 0x085e38f5]
085e38da +0x00:  push   %ebp
085e38db +0x01:  mov    %esp,%ebp
085e38dd +0x03:  mov    0xc(%ebp),%eax
085e38e0 +0x06:  movzwl 0x4(%eax),%eax
085e38e4 +0x0a:  lea    0x1(%eax),%edx
085e38e7 +0x0d:  mov    0xc(%ebp),%eax
085e38ea +0x10:  mov    %dx,0x4(%eax)
085e38ee +0x14:  mov    $0x1,%eax
085e38f3 +0x19:  pop    %ebp
085e38f4 +0x1a:  ret
085e38f5 +0x1b:  nop
```

## 反编译 C

```c
// CMission_kill_count::Update @ 0x85e38da

/* CMission_kill_count::Update(MissionInfo&, MissionClearCondition_Parameter const&) const */

undefined4
CMission_kill_count::Update(MissionInfo *param_1,MissionClearCondition_Parameter *param_2)

{
  *(short *)(param_2 + 4) = *(short *)(param_2 + 4) + 1;
  return 1;
}
```
