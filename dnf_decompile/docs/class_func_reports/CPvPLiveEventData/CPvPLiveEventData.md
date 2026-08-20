# CPvPLiveEventData

`_ZN17CPvPLiveEventDataC1Ev`

`CPvPLiveEventData::CPvPLiveEventData()`

| 类 | 地址 |
|---|---|
| `CPvPLiveEventData` | `0x08269054` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08269054  _ZN17CPvPLiveEventDataC1Ev
#           CPvPLiveEventData::CPvPLiveEventData()
# range [0x08269054, 0x0826906f]
08269054 +0x00:  push   %ebp
08269055 +0x01:  mov    %esp,%ebp
08269057 +0x03:  sub    $0x18,%esp
0826905a +0x06:  mov    0x8(%ebp),%eax
0826905d +0x09:  mov    %eax,(%esp)
08269060 +0x0c:  call   080c8cba <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x112>  ; global constructors keyed to BestClearTime::BestClearTime()+0x112
08269065 +0x11:  mov    0x8(%ebp),%eax
08269068 +0x14:  movl   $&_ZTV17CPvPLiveEventData+0x8,(%eax)
0826906e +0x1a:  leave
0826906f +0x1b:  ret
```

## 反编译 C

```c
// CPvPLiveEventData::CPvPLiveEventData @ 0x8269054

/* CPvPLiveEventData::CPvPLiveEventData() */

void __thiscall CPvPLiveEventData::CPvPLiveEventData(CPvPLiveEventData *this)

{
  charac_expand::CData::CData((CData *)this);
  *(undefined ***)this = &PTR_ResetDailyMidnight_08bf5328;
  return;
}
```
