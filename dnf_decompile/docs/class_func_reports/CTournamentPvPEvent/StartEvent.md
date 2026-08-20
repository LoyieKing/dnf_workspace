# StartEvent

`_ZN19CTournamentPvPEvent10StartEventEv`

`CTournamentPvPEvent::StartEvent()`

| 类 | 地址 |
|---|---|
| `CTournamentPvPEvent` | `0x08284636` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08284636  _ZN19CTournamentPvPEvent10StartEventEv
#           CTournamentPvPEvent::StartEvent()
# range [0x08284636, 0x0828463b]
08284636 +0x00:  push   %ebp
08284637 +0x01:  mov    %esp,%ebp
08284639 +0x03:  pop    %ebp
0828463a +0x04:  ret
0828463b +0x05:  nop
```

## 反编译 C

```c
// CTournamentPvPEvent::StartEvent @ 0x8284636

/* CTournamentPvPEvent::StartEvent() */

void CTournamentPvPEvent::StartEvent(void)

{
  return;
}
```
