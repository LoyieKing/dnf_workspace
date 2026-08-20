# updateStatistics

`_ZN12advancealtar10HistoryLog16updateStatisticsEv`

`advancealtar::HistoryLog::updateStatistics()`

| 类 | 地址 |
|---|---|
| `advancealtar::HistoryLog` | `0x08133e30` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08133e30  _ZN12advancealtar10HistoryLog16updateStatisticsEv
#           advancealtar::HistoryLog::updateStatistics()
# range [0x08133e30, 0x08133e43]
08133e30 +0x00:  push   %ebp
08133e31 +0x01:  mov    %esp,%ebp
08133e33 +0x03:  sub    $0x18,%esp
08133e36 +0x06:  movl   $&_ZN12advancealtar10HistoryLog23advanceAltarstatistics_E,(%esp)
08133e3d +0x0d:  call   08156ed2 <_ZN16CAdvanceAltarLog14updateDatabaseEv>  ; CAdvanceAltarLog::updateDatabase()
08133e42 +0x12:  leave
08133e43 +0x13:  ret
```

## 反编译 C

```c
// advancealtar::HistoryLog::updateStatistics @ 0x8133e30

/* advancealtar::HistoryLog::updateStatistics() */

void advancealtar::HistoryLog::updateStatistics(void)

{
  CAdvanceAltarLog::updateDatabase((CAdvanceAltarLog *)advanceAltarstatistics_);
  return;
}
```
