# StartEvent

`_ZN19CPvPExpPenaltyEvent10StartEventEv`

`CPvPExpPenaltyEvent::StartEvent()`

| 类 | 地址 |
|---|---|
| `CPvPExpPenaltyEvent` | `0x08268d86` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08268d86  _ZN19CPvPExpPenaltyEvent10StartEventEv
#           CPvPExpPenaltyEvent::StartEvent()
# range [0x08268d86, 0x08268dd7]
08268d86 +0x00:  push   %ebp
08268d87 +0x01:  mov    %esp,%ebp
08268d89 +0x03:  sub    $0x28,%esp
08268d8c +0x06:  mov    0x8(%ebp),%eax
08268d8f +0x09:  movl   $0x1,0x4(%esp)
08268d97 +0x11:  mov    %eax,(%esp)
08268d9a +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
08268d9f +0x19:  movl   $0x0,0xc(%esp)
08268da7 +0x21:  movl   $0x12,0x8(%esp)
08268daf +0x29:  movl   $&_ZZN19CPvPExpPenaltyEvent10StartEventEvE12__FUNCTION__,0x4(%esp)
08268db7 +0x31:  lea    -0x18(%ebp),%eax
08268dba +0x34:  mov    %eax,(%esp)
08268dbd +0x37:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08268dc2 +0x3c:  movl   $"CPvPExpPenaltyEvent Start!",0x4(%esp)
08268dca +0x44:  lea    -0x18(%ebp),%eax
08268dcd +0x47:  mov    %eax,(%esp)
08268dd0 +0x4a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08268dd5 +0x4f:  leave
08268dd6 +0x50:  ret
08268dd7 +0x51:  nop
```

## 反编译 C

```c
// CPvPExpPenaltyEvent::StartEvent @ 0x8268d86

/* CPvPExpPenaltyEvent::StartEvent() */

void __thiscall CPvPExpPenaltyEvent::StartEvent(CPvPExpPenaltyEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  cMyTrace::cMyTrace(local_1c,"StartEvent",0x12,0);
  cMyTrace::operator()(local_1c,"CPvPExpPenaltyEvent Start!");
  return;
}
```
