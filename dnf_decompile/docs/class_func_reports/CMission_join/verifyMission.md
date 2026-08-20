# verifyMission

`_ZNK13CMission_join13verifyMissionERK11MissionInfo`

`CMission_join::verifyMission(MissionInfo const&) const`

| 类 | 地址 |
|---|---|
| `CMission_join` | `0x085e37d8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e37d8  _ZNK13CMission_join13verifyMissionERK11MissionInfo
#           CMission_join::verifyMission(MissionInfo const&) const
# range [0x085e37d8, 0x085e37fd]
085e37d8 +0x00:  push   %ebp
085e37d9 +0x01:  mov    %esp,%ebp
085e37db +0x03:  mov    0x8(%ebp),%eax
085e37de +0x06:  mov    0x40(%eax),%eax
085e37e1 +0x09:  lea    0xa(%eax),%edx
085e37e4 +0x0c:  mov    0xc(%ebp),%eax
085e37e7 +0x0f:  movzwl 0x4(%eax),%eax
085e37eb +0x13:  cwtl
085e37ec +0x14:  cmp    %eax,%edx
085e37ee +0x16:  jg     085e37f7 <+0x1f>
085e37f0 +0x18:  mov    $0x0,%eax
085e37f5 +0x1d:  jmp    085e37fc <+0x24>
085e37f7 +0x1f:  mov    $0x1,%eax
085e37fc +0x24:  pop    %ebp
085e37fd +0x25:  ret
```

## 反编译 C

```c
// CMission_join::verifyMission @ 0x85e37d8

/* CMission_join::verifyMission(MissionInfo const&) const */

bool __thiscall CMission_join::verifyMission(CMission_join *this,MissionInfo *param_1)

{
  return (int)*(short *)(param_1 + 4) < *(int *)(this + 0x40) + 10;
}
```
