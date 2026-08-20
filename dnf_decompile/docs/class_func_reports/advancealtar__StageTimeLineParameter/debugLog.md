# debugLog

`_ZN12advancealtar22StageTimeLineParameter8debugLogEv`

`advancealtar::StageTimeLineParameter::debugLog()`

| 类 | 地址 |
|---|---|
| `advancealtar::StageTimeLineParameter` | `0x0889a02c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0889a02c  _ZN12advancealtar22StageTimeLineParameter8debugLogEv
#           advancealtar::StageTimeLineParameter::debugLog()
# range [0x0889a02c, 0x0889a031]
0889a02c +0x00:  push   %ebp
0889a02d +0x01:  mov    %esp,%ebp
0889a02f +0x03:  pop    %ebp
0889a030 +0x04:  ret
0889a031 +0x05:  nop
```

## 反编译 C

```c
// advancealtar::StageTimeLineParameter::debugLog @ 0x889a02c

/* advancealtar::StageTimeLineParameter::debugLog() */

void advancealtar::StageTimeLineParameter::debugLog(void)

{
  return;
}
```
