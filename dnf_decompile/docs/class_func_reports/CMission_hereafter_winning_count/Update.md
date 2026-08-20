# Update

`_ZNK32CMission_hereafter_winning_count6UpdateER11MissionInfoRK31MissionClearCondition_Parameter`

`CMission_hereafter_winning_count::Update(MissionInfo&, MissionClearCondition_Parameter const&) const`

| 类 | 地址 |
|---|---|
| `CMission_hereafter_winning_count` | `0x085e39d2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e39d2  _ZNK32CMission_hereafter_winning_count6UpdateER11MissionInfoRK31MissionClearCondition_Parameter
#           CMission_hereafter_winning_count::Update(MissionInfo&, MissionClearCondition_Parameter const&) const
# range [0x085e39d2, 0x085e39ed]
085e39d2 +0x00:  push   %ebp
085e39d3 +0x01:  mov    %esp,%ebp
085e39d5 +0x03:  mov    0xc(%ebp),%eax
085e39d8 +0x06:  movzwl 0x4(%eax),%eax
085e39dc +0x0a:  lea    0x1(%eax),%edx
085e39df +0x0d:  mov    0xc(%ebp),%eax
085e39e2 +0x10:  mov    %dx,0x4(%eax)
085e39e6 +0x14:  mov    $0x1,%eax
085e39eb +0x19:  pop    %ebp
085e39ec +0x1a:  ret
085e39ed +0x1b:  nop
```

## 反编译 C

```c
// CMission_hereafter_winning_count::Update @ 0x85e39d2

/* CMission_hereafter_winning_count::Update(MissionInfo&, MissionClearCondition_Parameter const&)
   const */

undefined4
CMission_hereafter_winning_count::Update
          (MissionInfo *param_1,MissionClearCondition_Parameter *param_2)

{
  *(short *)(param_2 + 4) = *(short *)(param_2 + 4) + 1;
  return 1;
}
```
