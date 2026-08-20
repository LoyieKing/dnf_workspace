# StartEvent

`_ZN19CPCRoomFatigueEvent10StartEventEv`

`CPCRoomFatigueEvent::StartEvent()`

| 类 | 地址 |
|---|---|
| `CPCRoomFatigueEvent` | `0x0826762a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0826762a  _ZN19CPCRoomFatigueEvent10StartEventEv
#           CPCRoomFatigueEvent::StartEvent()
# range [0x0826762a, 0x0826767b]
0826762a +0x00:  push   %ebp
0826762b +0x01:  mov    %esp,%ebp
0826762d +0x03:  sub    $0x28,%esp
08267630 +0x06:  mov    0x8(%ebp),%eax
08267633 +0x09:  movl   $0x1,0x4(%esp)
0826763b +0x11:  mov    %eax,(%esp)
0826763e +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
08267643 +0x19:  movl   $0x0,0xc(%esp)
0826764b +0x21:  movl   $0x13,0x8(%esp)
08267653 +0x29:  movl   $&_ZZN19CPCRoomFatigueEvent10StartEventEvE12__FUNCTION__,0x4(%esp)
0826765b +0x31:  lea    -0x18(%ebp),%eax
0826765e +0x34:  mov    %eax,(%esp)
08267661 +0x37:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08267666 +0x3c:  movl   $"PC Room Fatigue Event Start!",0x4(%esp)
0826766e +0x44:  lea    -0x18(%ebp),%eax
08267671 +0x47:  mov    %eax,(%esp)
08267674 +0x4a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08267679 +0x4f:  leave
0826767a +0x50:  ret
0826767b +0x51:  nop
```

## 反编译 C

```c
// CPCRoomFatigueEvent::StartEvent @ 0x826762a

/* CPCRoomFatigueEvent::StartEvent() */

void __thiscall CPCRoomFatigueEvent::StartEvent(CPCRoomFatigueEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  cMyTrace::cMyTrace(local_1c,"StartEvent",0x13,0);
  cMyTrace::operator()(local_1c,"PC Room Fatigue Event Start!");
  return;
}
```
