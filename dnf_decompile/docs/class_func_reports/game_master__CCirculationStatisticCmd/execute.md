# execute

`_ZN11game_master24CCirculationStatisticCmd7executeEv`

`game_master::CCirculationStatisticCmd::execute()`

| 类 | 地址 |
|---|---|
| `game_master::CCirculationStatisticCmd` | `0x084a8ff6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084a8ff6  _ZN11game_master24CCirculationStatisticCmd7executeEv
#           game_master::CCirculationStatisticCmd::execute()
# range [0x084a8ff6, 0x084a8ffb]
084a8ff6 +0x00:  push   %ebp
084a8ff7 +0x01:  mov    %esp,%ebp
084a8ff9 +0x03:  pop    %ebp
084a8ffa +0x04:  ret
084a8ffb +0x05:  nop
```

## 反编译 C

```c
// game_master::CCirculationStatisticCmd::execute @ 0x84a8ff6

/* game_master::CCirculationStatisticCmd::execute() */

void game_master::CCirculationStatisticCmd::execute(void)

{
  return;
}
```
