# CalculateVictoryPointOfTeamPlay

`_ZN8PvP_Room31CalculateVictoryPointOfTeamPlayEibi`

`PvP_Room::CalculateVictoryPointOfTeamPlay(int, bool, int)`

| 类 | 地址 |
|---|---|
| `PvP_Room` | `0x085da1d8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085da1d8  _ZN8PvP_Room31CalculateVictoryPointOfTeamPlayEibi
#           PvP_Room::CalculateVictoryPointOfTeamPlay(int, bool, int)
# range [0x085da1d8, 0x085da20f]
085da1d8 +0x00:  push   %ebp
085da1d9 +0x01:  mov    %esp,%ebp
085da1db +0x03:  sub    $0x4,%esp
085da1de +0x06:  mov    0x10(%ebp),%eax
085da1e1 +0x09:  mov    %al,-0x4(%ebp)
085da1e4 +0x0c:  cmpb   $0x0,-0x4(%ebp)
085da1e8 +0x10:  je     085da1f8 <+0x20>
085da1ea +0x12:  cmpl   $0x0,0xc(%ebp)
085da1ee +0x16:  jne    085da1f8 <+0x20>
085da1f0 +0x18:  mov    0x14(%ebp),%eax
085da1f3 +0x1b:  add    $0x2,%eax
085da1f6 +0x1e:  jmp    085da20d <+0x35>
085da1f8 +0x20:  movzbl -0x4(%ebp),%eax
085da1fc +0x24:  xor    $0x1,%eax
085da1ff +0x27:  test   %al,%al
085da201 +0x29:  je     085da20a <+0x32>
085da203 +0x2b:  mov    $0x1,%eax
085da208 +0x30:  jmp    085da20d <+0x35>
085da20a +0x32:  mov    0x14(%ebp),%eax
085da20d +0x35:  leave
085da20e +0x36:  ret
085da20f +0x37:  nop
```

## 反编译 C

```c
// PvP_Room::CalculateVictoryPointOfTeamPlay @ 0x85da1d8

/* PvP_Room::CalculateVictoryPointOfTeamPlay(int, bool, int) */

int __thiscall
PvP_Room::CalculateVictoryPointOfTeamPlay(PvP_Room *this,int param_1,bool param_2,int param_3)

{
  if ((param_2) && (param_1 == 0)) {
    param_3 = param_3 + 2;
  }
  else if (!param_2) {
    param_3 = 1;
  }
  return param_3;
}
```
