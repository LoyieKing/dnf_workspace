# verifyMission

`_ZNK13CMission_kill13verifyMissionERK11MissionInfo`

`CMission_kill::verifyMission(MissionInfo const&) const`

| 类 | 地址 |
|---|---|
| `CMission_kill` | `0x085e3bee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e3bee  _ZNK13CMission_kill13verifyMissionERK11MissionInfo
#           CMission_kill::verifyMission(MissionInfo const&) const
# range [0x085e3bee, 0x085e3c13]
085e3bee +0x00:  push   %ebp
085e3bef +0x01:  mov    %esp,%ebp
085e3bf1 +0x03:  mov    0x8(%ebp),%eax
085e3bf4 +0x06:  mov    0x44(%eax),%eax
085e3bf7 +0x09:  lea    0xa(%eax),%edx
085e3bfa +0x0c:  mov    0xc(%ebp),%eax
085e3bfd +0x0f:  movzwl 0x4(%eax),%eax
085e3c01 +0x13:  cwtl
085e3c02 +0x14:  cmp    %eax,%edx
085e3c04 +0x16:  jg     085e3c0d <+0x1f>
085e3c06 +0x18:  mov    $0x0,%eax
085e3c0b +0x1d:  jmp    085e3c12 <+0x24>
085e3c0d +0x1f:  mov    $0x1,%eax
085e3c12 +0x24:  pop    %ebp
085e3c13 +0x25:  ret
```

## 反编译 C

```c
// CMission_kill::verifyMission @ 0x85e3bee

/* CMission_kill::verifyMission(MissionInfo const&) const */

bool __thiscall CMission_kill::verifyMission(CMission_kill *this,MissionInfo *param_1)

{
  return (int)*(short *)(param_1 + 4) < *(int *)(this + 0x44) + 10;
}
```
