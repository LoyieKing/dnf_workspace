# CBreakAwayPreventEvent

`_ZN22CBreakAwayPreventEventC1Ev`

`CBreakAwayPreventEvent::CBreakAwayPreventEvent()`

| 类 | 地址 |
|---|---|
| `CBreakAwayPreventEvent` | `0x08109dbc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08109dbc  _ZN22CBreakAwayPreventEventC1Ev
#           CBreakAwayPreventEvent::CBreakAwayPreventEvent()
# range [0x08109dbc, 0x08109dd7]
08109dbc +0x00:  push   %ebp
08109dbd +0x01:  mov    %esp,%ebp
08109dbf +0x03:  sub    $0x18,%esp
08109dc2 +0x06:  mov    0x8(%ebp),%eax
08109dc5 +0x09:  mov    %eax,(%esp)
08109dc8 +0x0c:  call   0810ae2c <_ZN10CEventBaseC1Ev>  ; CEventBase::CEventBase()
08109dcd +0x11:  mov    0x8(%ebp),%eax
08109dd0 +0x14:  movl   $&_ZTV22CBreakAwayPreventEvent+0x8,(%eax)
08109dd6 +0x1a:  leave
08109dd7 +0x1b:  ret
```

## 反编译 C

```c
// CBreakAwayPreventEvent::CBreakAwayPreventEvent @ 0x8109dbc

/* CBreakAwayPreventEvent::CBreakAwayPreventEvent() */

void __thiscall CBreakAwayPreventEvent::CBreakAwayPreventEvent(CBreakAwayPreventEvent *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__CBreakAwayPreventEvent_08b46fa8;
  return;
}
```
