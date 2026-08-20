# verifyMission

`_ZNK23CMission_hereafter_join13verifyMissionERK11MissionInfo`

`CMission_hereafter_join::verifyMission(MissionInfo const&) const`

| 类 | 地址 |
|---|---|
| `CMission_hereafter_join` | `0x085e390e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e390e  _ZNK23CMission_hereafter_join13verifyMissionERK11MissionInfo
#           CMission_hereafter_join::verifyMission(MissionInfo const&) const
# range [0x085e390e, 0x085e3933]
085e390e +0x00:  push   %ebp
085e390f +0x01:  mov    %esp,%ebp
085e3911 +0x03:  mov    0x8(%ebp),%eax
085e3914 +0x06:  mov    0x40(%eax),%eax
085e3917 +0x09:  lea    0xa(%eax),%edx
085e391a +0x0c:  mov    0xc(%ebp),%eax
085e391d +0x0f:  movzwl 0x4(%eax),%eax
085e3921 +0x13:  cwtl
085e3922 +0x14:  cmp    %eax,%edx
085e3924 +0x16:  jg     085e392d <+0x1f>
085e3926 +0x18:  mov    $0x0,%eax
085e392b +0x1d:  jmp    085e3932 <+0x24>
085e392d +0x1f:  mov    $0x1,%eax
085e3932 +0x24:  pop    %ebp
085e3933 +0x25:  ret
```

## 反编译 C

```c
// CMission_hereafter_join::verifyMission @ 0x85e390e

/* CMission_hereafter_join::verifyMission(MissionInfo const&) const */

bool __thiscall
CMission_hereafter_join::verifyMission(CMission_hereafter_join *this,MissionInfo *param_1)

{
  return (int)*(short *)(param_1 + 4) < *(int *)(this + 0x40) + 10;
}
```
