# OnEndPvP

`_ZN8fair_pvp10CFairMatch8OnEndPvPEP8PvP_Room`

`fair_pvp::CFairMatch::OnEndPvP(PvP_Room*)`

| 类 | 地址 |
|---|---|
| `fair_pvp::CFairMatch` | `0x08565c4e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08565c4e  _ZN8fair_pvp10CFairMatch8OnEndPvPEP8PvP_Room
#           fair_pvp::CFairMatch::OnEndPvP(PvP_Room*)
# range [0x08565c4e, 0x08565c53]
08565c4e +0x00:  push   %ebp
08565c4f +0x01:  mov    %esp,%ebp
08565c51 +0x03:  pop    %ebp
08565c52 +0x04:  ret
08565c53 +0x05:  nop
```

## 反编译 C

```c
// fair_pvp::CFairMatch::OnEndPvP @ 0x8565c4e

/* fair_pvp::CFairMatch::OnEndPvP(PvP_Room*) */

void fair_pvp::CFairMatch::OnEndPvP(PvP_Room *param_1)

{
  return;
}
```
