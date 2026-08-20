# verifyMission

`_ZNK16CMission_revenge13verifyMissionERK11MissionInfo`

`CMission_revenge::verifyMission(MissionInfo const&) const`

| 类 | 地址 |
|---|---|
| `CMission_revenge` | `0x085e3b34` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e3b34  _ZNK16CMission_revenge13verifyMissionERK11MissionInfo
#           CMission_revenge::verifyMission(MissionInfo const&) const
# range [0x085e3b34, 0x085e3b59]
085e3b34 +0x00:  push   %ebp
085e3b35 +0x01:  mov    %esp,%ebp
085e3b37 +0x03:  mov    0x8(%ebp),%eax
085e3b3a +0x06:  mov    0x40(%eax),%eax
085e3b3d +0x09:  lea    0xa(%eax),%edx
085e3b40 +0x0c:  mov    0xc(%ebp),%eax
085e3b43 +0x0f:  movzwl 0x4(%eax),%eax
085e3b47 +0x13:  cwtl
085e3b48 +0x14:  cmp    %eax,%edx
085e3b4a +0x16:  jg     085e3b53 <+0x1f>
085e3b4c +0x18:  mov    $0x0,%eax
085e3b51 +0x1d:  jmp    085e3b58 <+0x24>
085e3b53 +0x1f:  mov    $0x1,%eax
085e3b58 +0x24:  pop    %ebp
085e3b59 +0x25:  ret
```

## 反编译 C

```c
// CMission_revenge::verifyMission @ 0x85e3b34

/* CMission_revenge::verifyMission(MissionInfo const&) const */

bool __thiscall CMission_revenge::verifyMission(CMission_revenge *this,MissionInfo *param_1)

{
  return (int)*(short *)(param_1 + 4) < *(int *)(this + 0x40) + 10;
}
```
