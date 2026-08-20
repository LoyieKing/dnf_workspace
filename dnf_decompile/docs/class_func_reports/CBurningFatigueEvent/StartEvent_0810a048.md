# StartEvent

`_ZN20CBurningFatigueEvent10StartEventE10Word_Param`

`CBurningFatigueEvent::StartEvent(Word_Param)`

| 类 | 地址 |
|---|---|
| `CBurningFatigueEvent` | `0x0810a048` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810a048  _ZN20CBurningFatigueEvent10StartEventE10Word_Param
#           CBurningFatigueEvent::StartEvent(Word_Param)
# range [0x0810a048, 0x0810a099]
0810a048 +0x00:  push   %ebp
0810a049 +0x01:  mov    %esp,%ebp
0810a04b +0x03:  sub    $0x28,%esp
0810a04e +0x06:  mov    0x8(%ebp),%eax
0810a051 +0x09:  movl   $0x1,0x4(%esp)
0810a059 +0x11:  mov    %eax,(%esp)
0810a05c +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
0810a061 +0x19:  movl   $0x0,0xc(%esp)
0810a069 +0x21:  movl   $0x1b,0x8(%esp)
0810a071 +0x29:  movl   $&_ZZN20CBurningFatigueEvent10StartEventE10Word_ParamE19__PRETTY_FUNCTION__,0x4(%esp)
0810a079 +0x31:  lea    -0x18(%ebp),%eax
0810a07c +0x34:  mov    %eax,(%esp)
0810a07f +0x37:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0810a084 +0x3c:  movl   $"Burning Fatigue Event Start",0x4(%esp)
0810a08c +0x44:  lea    -0x18(%ebp),%eax
0810a08f +0x47:  mov    %eax,(%esp)
0810a092 +0x4a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0810a097 +0x4f:  leave
0810a098 +0x50:  ret
0810a099 +0x51:  nop
```

## 反编译 C

```c
// CBurningFatigueEvent::StartEvent @ 0x810a048

/* CBurningFatigueEvent::StartEvent(Word_Param) */

void CBurningFatigueEvent::StartEvent(CEventBase *param_1)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag(param_1,true);
  cMyTrace::cMyTrace(local_1c,"virtual void CBurningFatigueEvent::StartEvent(Word_Param)",0x1b,0);
  cMyTrace::operator()(local_1c,"Burning Fatigue Event Start");
  return;
}
```
