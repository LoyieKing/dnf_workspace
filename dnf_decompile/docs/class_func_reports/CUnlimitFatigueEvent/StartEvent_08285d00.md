# StartEvent

`_ZN20CUnlimitFatigueEvent10StartEventE10Word_Param`

`CUnlimitFatigueEvent::StartEvent(Word_Param)`

| 类 | 地址 |
|---|---|
| `CUnlimitFatigueEvent` | `0x08285d00` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08285d00  _ZN20CUnlimitFatigueEvent10StartEventE10Word_Param
#           CUnlimitFatigueEvent::StartEvent(Word_Param)
# range [0x08285d00, 0x08285d51]
08285d00 +0x00:  push   %ebp
08285d01 +0x01:  mov    %esp,%ebp
08285d03 +0x03:  sub    $0x28,%esp
08285d06 +0x06:  mov    0x8(%ebp),%eax
08285d09 +0x09:  movl   $0x1,0x4(%esp)
08285d11 +0x11:  mov    %eax,(%esp)
08285d14 +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
08285d19 +0x19:  movl   $0x0,0xc(%esp)
08285d21 +0x21:  movl   $0x19,0x8(%esp)
08285d29 +0x29:  movl   $&_ZZN20CUnlimitFatigueEvent10StartEventE10Word_ParamE12__FUNCTION__,0x4(%esp)
08285d31 +0x31:  lea    -0x18(%ebp),%eax
08285d34 +0x34:  mov    %eax,(%esp)
08285d37 +0x37:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08285d3c +0x3c:  movl   $"Unlimit Fatigue Event Start!",0x4(%esp)
08285d44 +0x44:  lea    -0x18(%ebp),%eax
08285d47 +0x47:  mov    %eax,(%esp)
08285d4a +0x4a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08285d4f +0x4f:  leave
08285d50 +0x50:  ret
08285d51 +0x51:  nop
```

## 反编译 C

```c
// CUnlimitFatigueEvent::StartEvent @ 0x8285d00

/* CUnlimitFatigueEvent::StartEvent(Word_Param) */

void CUnlimitFatigueEvent::StartEvent(CEventBase *param_1)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag(param_1,true);
  cMyTrace::cMyTrace(local_1c,"StartEvent",0x19,0);
  cMyTrace::operator()(local_1c,"Unlimit Fatigue Event Start!");
  return;
}
```
