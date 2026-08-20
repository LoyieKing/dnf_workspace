# SkipLastRankResultTimer

`_ZN7WarRoom23SkipLastRankResultTimerEv`

`WarRoom::SkipLastRankResultTimer()`

| 类 | 地址 |
|---|---|
| `WarRoom` | `0x086be11a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086be11a  _ZN7WarRoom23SkipLastRankResultTimerEv
#           WarRoom::SkipLastRankResultTimer()
# range [0x086be11a, 0x086be11f]
086be11a +0x00:  push   %ebp
086be11b +0x01:  mov    %esp,%ebp
086be11d +0x03:  pop    %ebp
086be11e +0x04:  ret
086be11f +0x05:  nop
```

## 反编译 C

```c
// WarRoom::SkipLastRankResultTimer @ 0x86be11a

/* WarRoom::SkipLastRankResultTimer() */

void WarRoom::SkipLastRankResultTimer(void)

{
  return;
}
```
