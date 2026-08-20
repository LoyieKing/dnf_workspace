# EndEvent

`_ZN19CPvPExpPenaltyEvent8EndEventEv`

`CPvPExpPenaltyEvent::EndEvent()`

| 类 | 地址 |
|---|---|
| `CPvPExpPenaltyEvent` | `0x08268e2a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08268e2a  _ZN19CPvPExpPenaltyEvent8EndEventEv
#           CPvPExpPenaltyEvent::EndEvent()
# range [0x08268e2a, 0x08268e44]
08268e2a +0x00:  push   %ebp
08268e2b +0x01:  mov    %esp,%ebp
08268e2d +0x03:  sub    $0x18,%esp
08268e30 +0x06:  mov    0x8(%ebp),%eax
08268e33 +0x09:  movl   $0x0,0x4(%esp)
08268e3b +0x11:  mov    %eax,(%esp)
08268e3e +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
08268e43 +0x19:  leave
08268e44 +0x1a:  ret
```

## 反编译 C

```c
// CPvPExpPenaltyEvent::EndEvent @ 0x8268e2a

/* CPvPExpPenaltyEvent::EndEvent() */

void __thiscall CPvPExpPenaltyEvent::EndEvent(CPvPExpPenaltyEvent *this)

{
  CEventBase::SetEventFlag((CEventBase *)this,false);
  return;
}
```
