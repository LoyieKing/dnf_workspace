# verifyMission

`_ZNK23CMission_winning_streak13verifyMissionERK11MissionInfo`

`CMission_winning_streak::verifyMission(MissionInfo const&) const`

| 类 | 地址 |
|---|---|
| `CMission_winning_streak` | `0x085e366c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e366c  _ZNK23CMission_winning_streak13verifyMissionERK11MissionInfo
#           CMission_winning_streak::verifyMission(MissionInfo const&) const
# range [0x085e366c, 0x085e3691]
085e366c +0x00:  push   %ebp
085e366d +0x01:  mov    %esp,%ebp
085e366f +0x03:  mov    0x8(%ebp),%eax
085e3672 +0x06:  mov    0x44(%eax),%eax
085e3675 +0x09:  lea    0xa(%eax),%edx
085e3678 +0x0c:  mov    0xc(%ebp),%eax
085e367b +0x0f:  movzwl 0x4(%eax),%eax
085e367f +0x13:  cwtl
085e3680 +0x14:  cmp    %eax,%edx
085e3682 +0x16:  jg     085e368b <+0x1f>
085e3684 +0x18:  mov    $0x0,%eax
085e3689 +0x1d:  jmp    085e3690 <+0x24>
085e368b +0x1f:  mov    $0x1,%eax
085e3690 +0x24:  pop    %ebp
085e3691 +0x25:  ret
```

## 反编译 C

```c
// CMission_winning_streak::verifyMission @ 0x85e366c

/* CMission_winning_streak::verifyMission(MissionInfo const&) const */

bool __thiscall
CMission_winning_streak::verifyMission(CMission_winning_streak *this,MissionInfo *param_1)

{
  return (int)*(short *)(param_1 + 4) < *(int *)(this + 0x44) + 10;
}
```
