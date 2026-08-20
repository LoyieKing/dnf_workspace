# starAdd

`_ZN12advancealtar10HistoryLog7starAddER5CUserNS_11AddStarType1TEii`

`advancealtar::HistoryLog::starAdd(CUser&, advancealtar::AddStarType::T, int, int)`

| 类 | 地址 |
|---|---|
| `advancealtar::HistoryLog` | `0x08133d56` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08133d56  _ZN12advancealtar10HistoryLog7starAddER5CUserNS_11AddStarType1TEii
#           advancealtar::HistoryLog::starAdd(CUser&, advancealtar::AddStarType::T, int, int)
# range [0x08133d56, 0x08133daf]
08133d56 +0x00:  push   %ebp
08133d57 +0x01:  mov    %esp,%ebp
08133d59 +0x03:  sub    $0x28,%esp
08133d5c +0x06:  mov    0xc(%ebp),%eax
08133d5f +0x09:  mov    0x14(%ebp),%edx
08133d62 +0x0c:  mov    %edx,0x10(%esp)
08133d66 +0x10:  mov    0x10(%ebp),%edx
08133d69 +0x13:  mov    %edx,0xc(%esp)
08133d6d +0x17:  mov    %eax,0x8(%esp)
08133d71 +0x1b:  movl   $"star+,%d,%d,%d",0x4(%esp)
08133d79 +0x23:  mov    0x8(%ebp),%eax
08133d7c +0x26:  mov    %eax,(%esp)
08133d7f +0x29:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08133d84 +0x2e:  mov    0x14(%ebp),%edx
08133d87 +0x31:  mov    0x10(%ebp),%eax
08133d8a +0x34:  mov    %edx,0x10(%esp)
08133d8e +0x38:  movl   $0x0,0xc(%esp)
08133d96 +0x40:  movl   $0x0,0x8(%esp)
08133d9e +0x48:  mov    %eax,0x4(%esp)
08133da2 +0x4c:  movl   $&_ZN12advancealtar10HistoryLog23advanceAltarstatistics_E,(%esp)
08133da9 +0x53:  call   08156c30 <_ZN16CAdvanceAltarLog21incrementEntranceDataEjjjj>  ; CAdvanceAltarLog::incrementEntranceData(unsigned int, unsigned int, unsigned int, unsigned int)
08133dae +0x58:  leave
08133daf +0x59:  ret
```

## 反编译 C

```c
// advancealtar::HistoryLog::starAdd @ 0x8133d56

/* advancealtar::HistoryLog::starAdd(CUser&, advancealtar::AddStarType::T, int, int) */

void advancealtar::HistoryLog::starAdd(CUser *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  CUser::LogHistory(param_1,"star+,%d,%d,%d",param_2,param_3,param_4);
  CAdvanceAltarLog::incrementEntranceData
            ((CAdvanceAltarLog *)advanceAltarstatistics_,param_3,0,0,param_4);
  return;
}
```
