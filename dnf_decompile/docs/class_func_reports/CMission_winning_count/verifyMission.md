# verifyMission

`_ZNK22CMission_winning_count13verifyMissionERK11MissionInfo`

`CMission_winning_count::verifyMission(MissionInfo const&) const`

| 类 | 地址 |
|---|---|
| `CMission_winning_count` | `0x085e35b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e35b0  _ZNK22CMission_winning_count13verifyMissionERK11MissionInfo
#           CMission_winning_count::verifyMission(MissionInfo const&) const
# range [0x085e35b0, 0x085e35d5]
085e35b0 +0x00:  push   %ebp
085e35b1 +0x01:  mov    %esp,%ebp
085e35b3 +0x03:  mov    0x8(%ebp),%eax
085e35b6 +0x06:  mov    0x40(%eax),%eax
085e35b9 +0x09:  lea    0xa(%eax),%edx
085e35bc +0x0c:  mov    0xc(%ebp),%eax
085e35bf +0x0f:  movzwl 0x4(%eax),%eax
085e35c3 +0x13:  cwtl
085e35c4 +0x14:  cmp    %eax,%edx
085e35c6 +0x16:  jg     085e35cf <+0x1f>
085e35c8 +0x18:  mov    $0x0,%eax
085e35cd +0x1d:  jmp    085e35d4 <+0x24>
085e35cf +0x1f:  mov    $0x1,%eax
085e35d4 +0x24:  pop    %ebp
085e35d5 +0x25:  ret
```

## 反编译 C

```c
// CMission_winning_count::verifyMission @ 0x85e35b0

/* CMission_winning_count::verifyMission(MissionInfo const&) const */

bool __thiscall
CMission_winning_count::verifyMission(CMission_winning_count *this,MissionInfo *param_1)

{
  return (int)*(short *)(param_1 + 4) < *(int *)(this + 0x40) + 10;
}
```
