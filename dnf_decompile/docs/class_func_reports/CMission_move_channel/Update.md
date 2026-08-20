# Update

`_ZNK21CMission_move_channel6UpdateER11MissionInfoRK31MissionClearCondition_Parameter`

`CMission_move_channel::Update(MissionInfo&, MissionClearCondition_Parameter const&) const`

| 类 | 地址 |
|---|---|
| `CMission_move_channel` | `0x085e3f50` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e3f50  _ZNK21CMission_move_channel6UpdateER11MissionInfoRK31MissionClearCondition_Parameter
#           CMission_move_channel::Update(MissionInfo&, MissionClearCondition_Parameter const&) const
# range [0x085e3f50, 0x085e3f77]
085e3f50 +0x00:  push   %ebp
085e3f51 +0x01:  mov    %esp,%ebp
085e3f53 +0x03:  mov    0x10(%ebp),%eax
085e3f56 +0x06:  mov    0xb(%eax),%eax
085e3f59 +0x09:  mov    %eax,%edx
085e3f5b +0x0b:  mov    0xc(%ebp),%eax
085e3f5e +0x0e:  mov    %dx,0x4(%eax)
085e3f62 +0x12:  mov    0x10(%ebp),%eax
085e3f65 +0x15:  mov    0x7(%eax),%eax
085e3f68 +0x18:  mov    %eax,%edx
085e3f6a +0x1a:  mov    0xc(%ebp),%eax
085e3f6d +0x1d:  mov    %dx,0x6(%eax)
085e3f71 +0x21:  mov    $0x1,%eax
085e3f76 +0x26:  pop    %ebp
085e3f77 +0x27:  ret
```

## 反编译 C

```c
// CMission_move_channel::Update @ 0x85e3f50

/* CMission_move_channel::Update(MissionInfo&, MissionClearCondition_Parameter const&) const */

undefined4 __thiscall
CMission_move_channel::Update
          (CMission_move_channel *this,MissionInfo *param_1,MissionClearCondition_Parameter *param_2
          )

{
  *(short *)(param_1 + 4) = (short)*(undefined4 *)(param_2 + 0xb);
  *(short *)(param_1 + 6) = (short)*(undefined4 *)(param_2 + 7);
  return 1;
}
```
