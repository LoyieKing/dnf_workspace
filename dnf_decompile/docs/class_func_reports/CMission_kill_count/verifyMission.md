# verifyMission

`_ZNK19CMission_kill_count13verifyMissionERK11MissionInfo`

`CMission_kill_count::verifyMission(MissionInfo const&) const`

| 类 | 地址 |
|---|---|
| `CMission_kill_count` | `0x085e38b4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e38b4  _ZNK19CMission_kill_count13verifyMissionERK11MissionInfo
#           CMission_kill_count::verifyMission(MissionInfo const&) const
# range [0x085e38b4, 0x085e38d9]
085e38b4 +0x00:  push   %ebp
085e38b5 +0x01:  mov    %esp,%ebp
085e38b7 +0x03:  mov    0x8(%ebp),%eax
085e38ba +0x06:  mov    0x40(%eax),%eax
085e38bd +0x09:  lea    0xa(%eax),%edx
085e38c0 +0x0c:  mov    0xc(%ebp),%eax
085e38c3 +0x0f:  movzwl 0x4(%eax),%eax
085e38c7 +0x13:  cwtl
085e38c8 +0x14:  cmp    %eax,%edx
085e38ca +0x16:  jg     085e38d3 <+0x1f>
085e38cc +0x18:  mov    $0x0,%eax
085e38d1 +0x1d:  jmp    085e38d8 <+0x24>
085e38d3 +0x1f:  mov    $0x1,%eax
085e38d8 +0x24:  pop    %ebp
085e38d9 +0x25:  ret
```

## 反编译 C

```c
// CMission_kill_count::verifyMission @ 0x85e38b4

/* CMission_kill_count::verifyMission(MissionInfo const&) const */

bool __thiscall CMission_kill_count::verifyMission(CMission_kill_count *this,MissionInfo *param_1)

{
  return (int)*(short *)(param_1 + 4) < *(int *)(this + 0x40) + 10;
}
```
