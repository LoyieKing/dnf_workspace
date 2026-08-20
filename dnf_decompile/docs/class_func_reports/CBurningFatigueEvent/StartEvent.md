# StartEvent

`_ZN20CBurningFatigueEvent10StartEventEv`

`CBurningFatigueEvent::StartEvent()`

| 类 | 地址 |
|---|---|
| `CBurningFatigueEvent` | `0x0810a042` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810a042  _ZN20CBurningFatigueEvent10StartEventEv
#           CBurningFatigueEvent::StartEvent()
# range [0x0810a042, 0x0810a047]
0810a042 +0x00:  push   %ebp
0810a043 +0x01:  mov    %esp,%ebp
0810a045 +0x03:  pop    %ebp
0810a046 +0x04:  ret
0810a047 +0x05:  nop
```

## 反编译 C

```c
// CBurningFatigueEvent::StartEvent @ 0x810a042

/* CBurningFatigueEvent::StartEvent() */

void CBurningFatigueEvent::StartEvent(void)

{
  return;
}
```
