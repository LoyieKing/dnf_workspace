# StartEvent

`_ZN20CUnlimitFatigueEvent10StartEventEv`

`CUnlimitFatigueEvent::StartEvent()`

| 类 | 地址 |
|---|---|
| `CUnlimitFatigueEvent` | `0x08285cae` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08285cae  _ZN20CUnlimitFatigueEvent10StartEventEv
#           CUnlimitFatigueEvent::StartEvent()
# range [0x08285cae, 0x08285cff]
08285cae +0x00:  push   %ebp
08285caf +0x01:  mov    %esp,%ebp
08285cb1 +0x03:  sub    $0x28,%esp
08285cb4 +0x06:  mov    0x8(%ebp),%eax
08285cb7 +0x09:  movl   $0x1,0x4(%esp)
08285cbf +0x11:  mov    %eax,(%esp)
08285cc2 +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
08285cc7 +0x19:  movl   $0x0,0xc(%esp)
08285ccf +0x21:  movl   $0x12,0x8(%esp)
08285cd7 +0x29:  movl   $&_ZZN20CUnlimitFatigueEvent10StartEventEvE12__FUNCTION__,0x4(%esp)
08285cdf +0x31:  lea    -0x18(%ebp),%eax
08285ce2 +0x34:  mov    %eax,(%esp)
08285ce5 +0x37:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08285cea +0x3c:  movl   $"Unlimit Fatigue Event Start!",0x4(%esp)
08285cf2 +0x44:  lea    -0x18(%ebp),%eax
08285cf5 +0x47:  mov    %eax,(%esp)
08285cf8 +0x4a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08285cfd +0x4f:  leave
08285cfe +0x50:  ret
08285cff +0x51:  nop
```

## 反编译 C

```c
// CUnlimitFatigueEvent::StartEvent @ 0x8285cae

/* CUnlimitFatigueEvent::StartEvent() */

void __thiscall CUnlimitFatigueEvent::StartEvent(CUnlimitFatigueEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  cMyTrace::cMyTrace(local_1c,"StartEvent",0x12,0);
  cMyTrace::operator()(local_1c,"Unlimit Fatigue Event Start!");
  return;
}
```
