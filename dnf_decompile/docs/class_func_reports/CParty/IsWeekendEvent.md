# IsWeekendEvent

`_ZN6CParty14IsWeekendEventEv`

`CParty::IsWeekendEvent()`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085bcaa6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085bcaa6  _ZN6CParty14IsWeekendEventEv
#           CParty::IsWeekendEvent()
# range [0x085bcaa6, 0x085bcab5]
085bcaa6 +0x00:  push   %ebp
085bcaa7 +0x01:  mov    %esp,%ebp
085bcaa9 +0x03:  mov    0x8(%ebp),%eax
085bcaac +0x06:  movzbl 0x1af0(%eax),%eax
085bcab3 +0x0d:  pop    %ebp
085bcab4 +0x0e:  ret
085bcab5 +0x0f:  nop
```

## 反编译 C

```c
// CParty::IsWeekendEvent @ 0x85bcaa6

/* CParty::IsWeekendEvent() */

CParty __thiscall CParty::IsWeekendEvent(CParty *this)

{
  return this[0x1af0];
}
```
