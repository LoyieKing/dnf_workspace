# verifyMission

`_ZNK32CMission_hereafter_winning_count13verifyMissionERK11MissionInfo`

`CMission_hereafter_winning_count::verifyMission(MissionInfo const&) const`

| 类 | 地址 |
|---|---|
| `CMission_hereafter_winning_count` | `0x085e3968` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e3968  _ZNK32CMission_hereafter_winning_count13verifyMissionERK11MissionInfo
#           CMission_hereafter_winning_count::verifyMission(MissionInfo const&) const
# range [0x085e3968, 0x085e398d]
085e3968 +0x00:  push   %ebp
085e3969 +0x01:  mov    %esp,%ebp
085e396b +0x03:  mov    0x8(%ebp),%eax
085e396e +0x06:  mov    0x40(%eax),%eax
085e3971 +0x09:  lea    0xa(%eax),%edx
085e3974 +0x0c:  mov    0xc(%ebp),%eax
085e3977 +0x0f:  movzwl 0x4(%eax),%eax
085e397b +0x13:  cwtl
085e397c +0x14:  cmp    %eax,%edx
085e397e +0x16:  jg     085e3987 <+0x1f>
085e3980 +0x18:  mov    $0x0,%eax
085e3985 +0x1d:  jmp    085e398c <+0x24>
085e3987 +0x1f:  mov    $0x1,%eax
085e398c +0x24:  pop    %ebp
085e398d +0x25:  ret
```

## 反编译 C

```c
// CMission_hereafter_winning_count::verifyMission @ 0x85e3968

/* CMission_hereafter_winning_count::verifyMission(MissionInfo const&) const */

bool __thiscall
CMission_hereafter_winning_count::verifyMission
          (CMission_hereafter_winning_count *this,MissionInfo *param_1)

{
  return (int)*(short *)(param_1 + 4) < *(int *)(this + 0x40) + 10;
}
```
