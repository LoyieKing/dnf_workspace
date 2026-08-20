# StartEvent

`_ZN16CCoinRefillEvent10StartEventEv`

`CCoinRefillEvent::StartEvent()`

| 类 | 地址 |
|---|---|
| `CCoinRefillEvent` | `0x0832be7c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0832be7c  _ZN16CCoinRefillEvent10StartEventEv
#           CCoinRefillEvent::StartEvent()
# range [0x0832be7c, 0x0832be81]
0832be7c +0x00:  push   %ebp
0832be7d +0x01:  mov    %esp,%ebp
0832be7f +0x03:  pop    %ebp
0832be80 +0x04:  ret
0832be81 +0x05:  nop
```

## 反编译 C

```c
// CCoinRefillEvent::StartEvent @ 0x832be7c

/* CCoinRefillEvent::StartEvent() */

void CCoinRefillEvent::StartEvent(void)

{
  return;
}
```
