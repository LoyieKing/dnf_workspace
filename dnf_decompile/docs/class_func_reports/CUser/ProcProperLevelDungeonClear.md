# ProcProperLevelDungeonClear

`_ZN5CUser27ProcProperLevelDungeonClearEv`

`CUser::ProcProperLevelDungeonClear()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868f5fa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868f5fa  _ZN5CUser27ProcProperLevelDungeonClearEv
#           CUser::ProcProperLevelDungeonClear()
# range [0x0868f5fa, 0x0868f60d]
0868f5fa +0x00:  push   %ebp
0868f5fb +0x01:  mov    %esp,%ebp
0868f5fd +0x03:  sub    $0x18,%esp
0868f600 +0x06:  mov    0x8(%ebp),%eax
0868f603 +0x09:  mov    %eax,(%esp)
0868f606 +0x0c:  call   08693758 <_ZN5CUser15GiveMeBoxRewardEv>  ; CUser::GiveMeBoxReward()
0868f60b +0x11:  leave
0868f60c +0x12:  ret
0868f60d +0x13:  nop
```

## 反编译 C

```c
// CUser::ProcProperLevelDungeonClear @ 0x868f5fa

/* CUser::ProcProperLevelDungeonClear() */

void __thiscall CUser::ProcProperLevelDungeonClear(CUser *this)

{
  GiveMeBoxReward(this);
  return;
}
```
