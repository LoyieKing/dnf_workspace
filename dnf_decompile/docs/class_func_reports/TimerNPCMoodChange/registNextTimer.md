# registNextTimer

`_ZN18TimerNPCMoodChange15registNextTimerEl`

`TimerNPCMoodChange::registNextTimer(long)`

| 类 | 地址 |
|---|---|
| `TimerNPCMoodChange` | `0x086381ec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086381ec  _ZN18TimerNPCMoodChange15registNextTimerEl
#           TimerNPCMoodChange::registNextTimer(long)
# range [0x086381ec, 0x086381f1]
086381ec +0x00:  push   %ebp
086381ed +0x01:  mov    %esp,%ebp
086381ef +0x03:  pop    %ebp
086381f0 +0x04:  ret
086381f1 +0x05:  nop
```

## 反编译 C

```c
// TimerNPCMoodChange::registNextTimer @ 0x86381ec

/* TimerNPCMoodChange::registNextTimer(long) */

void TimerNPCMoodChange::registNextTimer(long param_1)

{
  return;
}
```
