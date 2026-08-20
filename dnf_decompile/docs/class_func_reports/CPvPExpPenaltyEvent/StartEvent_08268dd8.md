# StartEvent

`_ZN19CPvPExpPenaltyEvent10StartEventE10Word_Param`

`CPvPExpPenaltyEvent::StartEvent(Word_Param)`

| 类 | 地址 |
|---|---|
| `CPvPExpPenaltyEvent` | `0x08268dd8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08268dd8  _ZN19CPvPExpPenaltyEvent10StartEventE10Word_Param
#           CPvPExpPenaltyEvent::StartEvent(Word_Param)
# range [0x08268dd8, 0x08268e29]
08268dd8 +0x00:  push   %ebp
08268dd9 +0x01:  mov    %esp,%ebp
08268ddb +0x03:  sub    $0x28,%esp
08268dde +0x06:  mov    0x8(%ebp),%eax
08268de1 +0x09:  movl   $0x1,0x4(%esp)
08268de9 +0x11:  mov    %eax,(%esp)
08268dec +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
08268df1 +0x19:  movl   $0x0,0xc(%esp)
08268df9 +0x21:  movl   $0x18,0x8(%esp)
08268e01 +0x29:  movl   $&_ZZN19CPvPExpPenaltyEvent10StartEventE10Word_ParamE12__FUNCTION__,0x4(%esp)
08268e09 +0x31:  lea    -0x18(%ebp),%eax
08268e0c +0x34:  mov    %eax,(%esp)
08268e0f +0x37:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08268e14 +0x3c:  movl   $"CPvPExpPenaltyEvent Start!",0x4(%esp)
08268e1c +0x44:  lea    -0x18(%ebp),%eax
08268e1f +0x47:  mov    %eax,(%esp)
08268e22 +0x4a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08268e27 +0x4f:  leave
08268e28 +0x50:  ret
08268e29 +0x51:  nop
```

## 反编译 C

```c
// CPvPExpPenaltyEvent::StartEvent @ 0x8268dd8

/* CPvPExpPenaltyEvent::StartEvent(Word_Param) */

void CPvPExpPenaltyEvent::StartEvent(CEventBase *param_1)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag(param_1,true);
  cMyTrace::cMyTrace(local_1c,"StartEvent",0x18,0);
  cMyTrace::operator()(local_1c,"CPvPExpPenaltyEvent Start!");
  return;
}
```
