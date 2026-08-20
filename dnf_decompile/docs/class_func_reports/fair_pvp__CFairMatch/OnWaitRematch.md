# OnWaitRematch

`_ZN8fair_pvp10CFairMatch13OnWaitRematchEP5CUserP8PvP_Room`

`fair_pvp::CFairMatch::OnWaitRematch(CUser*, PvP_Room*)`

| 类 | 地址 |
|---|---|
| `fair_pvp::CFairMatch` | `0x0856649a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0856649a  _ZN8fair_pvp10CFairMatch13OnWaitRematchEP5CUserP8PvP_Room
#           fair_pvp::CFairMatch::OnWaitRematch(CUser*, PvP_Room*)
# range [0x0856649a, 0x0856649f]
0856649a +0x00:  push   %ebp
0856649b +0x01:  mov    %esp,%ebp
0856649d +0x03:  pop    %ebp
0856649e +0x04:  ret
0856649f +0x05:  nop
```

## 反编译 C

```c
// fair_pvp::CFairMatch::OnWaitRematch @ 0x856649a

/* fair_pvp::CFairMatch::OnWaitRematch(CUser*, PvP_Room*) */

void fair_pvp::CFairMatch::OnWaitRematch(CUser *param_1,PvP_Room *param_2)

{
  return;
}
```
