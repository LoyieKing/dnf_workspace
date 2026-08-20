# StartEvent

`_ZN23CGoldCardBlankItemEvent10StartEventEv`

`CGoldCardBlankItemEvent::StartEvent()`

| 类 | 地址 |
|---|---|
| `CGoldCardBlankItemEvent` | `0x0811ce8e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0811ce8e  _ZN23CGoldCardBlankItemEvent10StartEventEv
#           CGoldCardBlankItemEvent::StartEvent()
# range [0x0811ce8e, 0x0811ce93]
0811ce8e +0x00:  push   %ebp
0811ce8f +0x01:  mov    %esp,%ebp
0811ce91 +0x03:  pop    %ebp
0811ce92 +0x04:  ret
0811ce93 +0x05:  nop
```

## 反编译 C

```c
// CGoldCardBlankItemEvent::StartEvent @ 0x811ce8e

/* CGoldCardBlankItemEvent::StartEvent() */

void CGoldCardBlankItemEvent::StartEvent(void)

{
  return;
}
```
