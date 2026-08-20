# ResetDailyMidnight

`_ZN17CPvPLiveEventData18ResetDailyMidnightEv`

`CPvPLiveEventData::ResetDailyMidnight()`

| 类 | 地址 |
|---|---|
| `CPvPLiveEventData` | `0x0826948e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0826948e  _ZN17CPvPLiveEventData18ResetDailyMidnightEv
#           CPvPLiveEventData::ResetDailyMidnight()
# range [0x0826948e, 0x0826949c]
0826948e +0x00:  push   %ebp
0826948f +0x01:  mov    %esp,%ebp
08269491 +0x03:  mov    0x8(%ebp),%eax
08269494 +0x06:  movl   $0x0,0x8(%eax)
0826949b +0x0d:  pop    %ebp
0826949c +0x0e:  ret
```

## 反编译 C

```c
// CPvPLiveEventData::ResetDailyMidnight @ 0x826948e

/* CPvPLiveEventData::ResetDailyMidnight() */

void __thiscall CPvPLiveEventData::ResetDailyMidnight(CPvPLiveEventData *this)

{
  *(undefined4 *)(this + 8) = 0;
  return;
}
```
