# execute

`_ZN11game_master23CVillageAttackedStopCmd7executeEv`

`game_master::CVillageAttackedStopCmd::execute()`

| 类 | 地址 |
|---|---|
| `game_master::CVillageAttackedStopCmd` | `0x084aa298` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084aa298  _ZN11game_master23CVillageAttackedStopCmd7executeEv
#           game_master::CVillageAttackedStopCmd::execute()
# range [0x084aa298, 0x084aa29d]
084aa298 +0x00:  push   %ebp
084aa299 +0x01:  mov    %esp,%ebp
084aa29b +0x03:  pop    %ebp
084aa29c +0x04:  ret
084aa29d +0x05:  nop
```

## 反编译 C

```c
// game_master::CVillageAttackedStopCmd::execute @ 0x84aa298

/* game_master::CVillageAttackedStopCmd::execute() */

void game_master::CVillageAttackedStopCmd::execute(void)

{
  return;
}
```
