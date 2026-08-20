# StartEvent

`_ZN25CPcRoomCardBlankItemEvent10StartEventEv`

`CPcRoomCardBlankItemEvent::StartEvent()`

| 类 | 地址 |
|---|---|
| `CPcRoomCardBlankItemEvent` | `0x082674a6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082674a6  _ZN25CPcRoomCardBlankItemEvent10StartEventEv
#           CPcRoomCardBlankItemEvent::StartEvent()
# range [0x082674a6, 0x082674ab]
082674a6 +0x00:  push   %ebp
082674a7 +0x01:  mov    %esp,%ebp
082674a9 +0x03:  pop    %ebp
082674aa +0x04:  ret
082674ab +0x05:  nop
```

## 反编译 C

```c
// CPcRoomCardBlankItemEvent::StartEvent @ 0x82674a6

/* CPcRoomCardBlankItemEvent::StartEvent() */

void CPcRoomCardBlankItemEvent::StartEvent(void)

{
  return;
}
```
