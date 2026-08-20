# Update

`_ZNK13CMission_kill6UpdateER11MissionInfoRK31MissionClearCondition_Parameter`

`CMission_kill::Update(MissionInfo&, MissionClearCondition_Parameter const&) const`

| 类 | 地址 |
|---|---|
| `CMission_kill` | `0x085e3c14` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e3c14  _ZNK13CMission_kill6UpdateER11MissionInfoRK31MissionClearCondition_Parameter
#           CMission_kill::Update(MissionInfo&, MissionClearCondition_Parameter const&) const
# range [0x085e3c14, 0x085e3c2f]
085e3c14 +0x00:  push   %ebp
085e3c15 +0x01:  mov    %esp,%ebp
085e3c17 +0x03:  mov    0xc(%ebp),%eax
085e3c1a +0x06:  movzwl 0x4(%eax),%eax
085e3c1e +0x0a:  lea    0x1(%eax),%edx
085e3c21 +0x0d:  mov    0xc(%ebp),%eax
085e3c24 +0x10:  mov    %dx,0x4(%eax)
085e3c28 +0x14:  mov    $0x1,%eax
085e3c2d +0x19:  pop    %ebp
085e3c2e +0x1a:  ret
085e3c2f +0x1b:  nop
```

## 反编译 C

```c
// CMission_kill::Update @ 0x85e3c14

/* CMission_kill::Update(MissionInfo&, MissionClearCondition_Parameter const&) const */

undefined4 CMission_kill::Update(MissionInfo *param_1,MissionClearCondition_Parameter *param_2)

{
  *(short *)(param_2 + 4) = *(short *)(param_2 + 4) + 1;
  return 1;
}
```
