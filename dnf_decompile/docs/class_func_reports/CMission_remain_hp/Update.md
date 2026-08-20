# Update

`_ZNK18CMission_remain_hp6UpdateER11MissionInfoRK31MissionClearCondition_Parameter`

`CMission_remain_hp::Update(MissionInfo&, MissionClearCondition_Parameter const&) const`

| 类 | 地址 |
|---|---|
| `CMission_remain_hp` | `0x085e3a44` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e3a44  _ZNK18CMission_remain_hp6UpdateER11MissionInfoRK31MissionClearCondition_Parameter
#           CMission_remain_hp::Update(MissionInfo&, MissionClearCondition_Parameter const&) const
# range [0x085e3a44, 0x085e3a5f]
085e3a44 +0x00:  push   %ebp
085e3a45 +0x01:  mov    %esp,%ebp
085e3a47 +0x03:  mov    0xc(%ebp),%eax
085e3a4a +0x06:  movzwl 0x4(%eax),%eax
085e3a4e +0x0a:  lea    0x1(%eax),%edx
085e3a51 +0x0d:  mov    0xc(%ebp),%eax
085e3a54 +0x10:  mov    %dx,0x4(%eax)
085e3a58 +0x14:  mov    $0x1,%eax
085e3a5d +0x19:  pop    %ebp
085e3a5e +0x1a:  ret
085e3a5f +0x1b:  nop
```

## 反编译 C

```c
// CMission_remain_hp::Update @ 0x85e3a44

/* CMission_remain_hp::Update(MissionInfo&, MissionClearCondition_Parameter const&) const */

undefined4 CMission_remain_hp::Update(MissionInfo *param_1,MissionClearCondition_Parameter *param_2)

{
  *(short *)(param_2 + 4) = *(short *)(param_2 + 4) + 1;
  return 1;
}
```
