# StartEvent

`_ZN19CPCRoomFatigueEvent10StartEventE10Word_Param`

`CPCRoomFatigueEvent::StartEvent(Word_Param)`

| 类 | 地址 |
|---|---|
| `CPCRoomFatigueEvent` | `0x0826767c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0826767c  _ZN19CPCRoomFatigueEvent10StartEventE10Word_Param
#           CPCRoomFatigueEvent::StartEvent(Word_Param)
# range [0x0826767c, 0x082676cd]
0826767c +0x00:  push   %ebp
0826767d +0x01:  mov    %esp,%ebp
0826767f +0x03:  sub    $0x28,%esp
08267682 +0x06:  mov    0x8(%ebp),%eax
08267685 +0x09:  movl   $0x1,0x4(%esp)
0826768d +0x11:  mov    %eax,(%esp)
08267690 +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
08267695 +0x19:  movl   $0x0,0xc(%esp)
0826769d +0x21:  movl   $0x1a,0x8(%esp)
082676a5 +0x29:  movl   $&_ZZN19CPCRoomFatigueEvent10StartEventE10Word_ParamE12__FUNCTION__,0x4(%esp)
082676ad +0x31:  lea    -0x18(%ebp),%eax
082676b0 +0x34:  mov    %eax,(%esp)
082676b3 +0x37:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
082676b8 +0x3c:  movl   $"PC Room Fatigue Event Start!",0x4(%esp)
082676c0 +0x44:  lea    -0x18(%ebp),%eax
082676c3 +0x47:  mov    %eax,(%esp)
082676c6 +0x4a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
082676cb +0x4f:  leave
082676cc +0x50:  ret
082676cd +0x51:  nop
```

## 反编译 C

```c
// CPCRoomFatigueEvent::StartEvent @ 0x826767c

/* CPCRoomFatigueEvent::StartEvent(Word_Param) */

void CPCRoomFatigueEvent::StartEvent(CEventBase *param_1)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag(param_1,true);
  cMyTrace::cMyTrace(local_1c,"StartEvent",0x1a,0);
  cMyTrace::operator()(local_1c,"PC Room Fatigue Event Start!");
  return;
}
```
