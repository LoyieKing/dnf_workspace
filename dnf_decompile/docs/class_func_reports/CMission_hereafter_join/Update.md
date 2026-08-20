# Update

`_ZNK23CMission_hereafter_join6UpdateER11MissionInfoRK31MissionClearCondition_Parameter`

`CMission_hereafter_join::Update(MissionInfo&, MissionClearCondition_Parameter const&) const`

| 类 | 地址 |
|---|---|
| `CMission_hereafter_join` | `0x085e3934` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e3934  _ZNK23CMission_hereafter_join6UpdateER11MissionInfoRK31MissionClearCondition_Parameter
#           CMission_hereafter_join::Update(MissionInfo&, MissionClearCondition_Parameter const&) const
# range [0x085e3934, 0x085e394f]
085e3934 +0x00:  push   %ebp
085e3935 +0x01:  mov    %esp,%ebp
085e3937 +0x03:  mov    0xc(%ebp),%eax
085e393a +0x06:  movzwl 0x4(%eax),%eax
085e393e +0x0a:  lea    0x1(%eax),%edx
085e3941 +0x0d:  mov    0xc(%ebp),%eax
085e3944 +0x10:  mov    %dx,0x4(%eax)
085e3948 +0x14:  mov    $0x1,%eax
085e394d +0x19:  pop    %ebp
085e394e +0x1a:  ret
085e394f +0x1b:  nop
```

## 反编译 C

```c
// CMission_hereafter_join::Update @ 0x85e3934

/* CMission_hereafter_join::Update(MissionInfo&, MissionClearCondition_Parameter const&) const */

undefined4
CMission_hereafter_join::Update(MissionInfo *param_1,MissionClearCondition_Parameter *param_2)

{
  *(short *)(param_2 + 4) = *(short *)(param_2 + 4) + 1;
  return 1;
}
```
