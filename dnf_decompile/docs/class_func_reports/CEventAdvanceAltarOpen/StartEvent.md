# StartEvent

`_ZN22CEventAdvanceAltarOpen10StartEventEv`

`CEventAdvanceAltarOpen::StartEvent()`

| 类 | 地址 |
|---|---|
| `CEventAdvanceAltarOpen` | `0x080e94dc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080e94dc  _ZN22CEventAdvanceAltarOpen10StartEventEv
#           CEventAdvanceAltarOpen::StartEvent()
# range [0x080e94dc, 0x080e94e1]
080e94dc +0x00:  push   %ebp
080e94dd +0x01:  mov    %esp,%ebp
080e94df +0x03:  pop    %ebp
080e94e0 +0x04:  ret
080e94e1 +0x05:  nop
```

## 反编译 C

```c
// CEventAdvanceAltarOpen::StartEvent @ 0x80e94dc

/* CEventAdvanceAltarOpen::StartEvent() */

void CEventAdvanceAltarOpen::StartEvent(void)

{
  return;
}
```
