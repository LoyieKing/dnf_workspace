# CPvPExpPenaltyEvent

`_ZN19CPvPExpPenaltyEventC1Ev`

`CPvPExpPenaltyEvent::CPvPExpPenaltyEvent()`

| 类 | 地址 |
|---|---|
| `CPvPExpPenaltyEvent` | `0x08268d1c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08268d1c  _ZN19CPvPExpPenaltyEventC1Ev
#           CPvPExpPenaltyEvent::CPvPExpPenaltyEvent()
# range [0x08268d1c, 0x08268d37]
08268d1c +0x00:  push   %ebp
08268d1d +0x01:  mov    %esp,%ebp
08268d1f +0x03:  sub    $0x18,%esp
08268d22 +0x06:  mov    0x8(%ebp),%eax
08268d25 +0x09:  mov    %eax,(%esp)
08268d28 +0x0c:  call   0810ae2c <_ZN10CEventBaseC1Ev>  ; CEventBase::CEventBase()
08268d2d +0x11:  mov    0x8(%ebp),%eax
08268d30 +0x14:  movl   $&_ZTV19CPvPExpPenaltyEvent+0x8,(%eax)
08268d36 +0x1a:  leave
08268d37 +0x1b:  ret
```

## 反编译 C

```c
// CPvPExpPenaltyEvent::CPvPExpPenaltyEvent @ 0x8268d1c

/* CPvPExpPenaltyEvent::CPvPExpPenaltyEvent() */

void __thiscall CPvPExpPenaltyEvent::CPvPExpPenaltyEvent(CPvPExpPenaltyEvent *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__CPvPExpPenaltyEvent_08bf3f48;
  return;
}
```
