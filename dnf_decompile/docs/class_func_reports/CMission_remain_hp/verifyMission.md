# verifyMission

`_ZNK18CMission_remain_hp13verifyMissionERK11MissionInfo`

`CMission_remain_hp::verifyMission(MissionInfo const&) const`

| 类 | 地址 |
|---|---|
| `CMission_remain_hp` | `0x085e3a06` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e3a06  _ZNK18CMission_remain_hp13verifyMissionERK11MissionInfo
#           CMission_remain_hp::verifyMission(MissionInfo const&) const
# range [0x085e3a06, 0x085e3a2b]
085e3a06 +0x00:  push   %ebp
085e3a07 +0x01:  mov    %esp,%ebp
085e3a09 +0x03:  mov    0x8(%ebp),%eax
085e3a0c +0x06:  mov    0x44(%eax),%eax
085e3a0f +0x09:  lea    0xa(%eax),%edx
085e3a12 +0x0c:  mov    0xc(%ebp),%eax
085e3a15 +0x0f:  movzwl 0x4(%eax),%eax
085e3a19 +0x13:  cwtl
085e3a1a +0x14:  cmp    %eax,%edx
085e3a1c +0x16:  jg     085e3a25 <+0x1f>
085e3a1e +0x18:  mov    $0x0,%eax
085e3a23 +0x1d:  jmp    085e3a2a <+0x24>
085e3a25 +0x1f:  mov    $0x1,%eax
085e3a2a +0x24:  pop    %ebp
085e3a2b +0x25:  ret
```

## 反编译 C

```c
// CMission_remain_hp::verifyMission @ 0x85e3a06

/* CMission_remain_hp::verifyMission(MissionInfo const&) const */

bool __thiscall CMission_remain_hp::verifyMission(CMission_remain_hp *this,MissionInfo *param_1)

{
  return (int)*(short *)(param_1 + 4) < *(int *)(this + 0x44) + 10;
}
```
