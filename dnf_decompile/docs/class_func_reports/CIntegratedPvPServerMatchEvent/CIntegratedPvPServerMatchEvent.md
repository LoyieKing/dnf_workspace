# CIntegratedPvPServerMatchEvent

`_ZN30CIntegratedPvPServerMatchEventC1Ev`

`CIntegratedPvPServerMatchEvent::CIntegratedPvPServerMatchEvent()`

| 类 | 地址 |
|---|---|
| `CIntegratedPvPServerMatchEvent` | `0x0811d438` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0811d438  _ZN30CIntegratedPvPServerMatchEventC1Ev
#           CIntegratedPvPServerMatchEvent::CIntegratedPvPServerMatchEvent()
# range [0x0811d438, 0x0811d453]
0811d438 +0x00:  push   %ebp
0811d439 +0x01:  mov    %esp,%ebp
0811d43b +0x03:  sub    $0x18,%esp
0811d43e +0x06:  mov    0x8(%ebp),%eax
0811d441 +0x09:  mov    %eax,(%esp)
0811d444 +0x0c:  call   0810ae2c <_ZN10CEventBaseC1Ev>  ; CEventBase::CEventBase()
0811d449 +0x11:  mov    0x8(%ebp),%eax
0811d44c +0x14:  movl   $&_ZTV30CIntegratedPvPServerMatchEvent+0x8,(%eax)
0811d452 +0x1a:  leave
0811d453 +0x1b:  ret
```

## 反编译 C

```c
// CIntegratedPvPServerMatchEvent::CIntegratedPvPServerMatchEvent @ 0x811d438

/* CIntegratedPvPServerMatchEvent::CIntegratedPvPServerMatchEvent() */

void __thiscall
CIntegratedPvPServerMatchEvent::CIntegratedPvPServerMatchEvent(CIntegratedPvPServerMatchEvent *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__CIntegratedPvPServerMatchEvent_08b55ae8;
  return;
}
```
