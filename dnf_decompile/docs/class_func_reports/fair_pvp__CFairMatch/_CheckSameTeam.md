# _CheckSameTeam

`_ZN8fair_pvp10CFairMatch14_CheckSameTeamEP8PvP_RoomP5CUser`

`fair_pvp::CFairMatch::_CheckSameTeam(PvP_Room*, CUser*)`

| 类 | 地址 |
|---|---|
| `fair_pvp::CFairMatch` | `0x085629e8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085629e8  _ZN8fair_pvp10CFairMatch14_CheckSameTeamEP8PvP_RoomP5CUser
#           fair_pvp::CFairMatch::_CheckSameTeam(PvP_Room*, CUser*)
# range [0x085629e8, 0x085629f1]
085629e8 +0x00:  push   %ebp
085629e9 +0x01:  mov    %esp,%ebp
085629eb +0x03:  mov    $0x1,%eax
085629f0 +0x08:  pop    %ebp
085629f1 +0x09:  ret
```

## 反编译 C

```c
// fair_pvp::CFairMatch::_CheckSameTeam @ 0x85629e8

/* fair_pvp::CFairMatch::_CheckSameTeam(PvP_Room*, CUser*) */

undefined4 fair_pvp::CFairMatch::_CheckSameTeam(PvP_Room *param_1,CUser *param_2)

{
  return 1;
}
```
