# StartEvent

`_ZN13CPvPLiveEvent10StartEventE10Word_Param`

`CPvPLiveEvent::StartEvent(Word_Param)`

| 类 | 地址 |
|---|---|
| `CPvPLiveEvent` | `0x08268f74` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08268f74  _ZN13CPvPLiveEvent10StartEventE10Word_Param
#           CPvPLiveEvent::StartEvent(Word_Param)
# range [0x08268f74, 0x08268fc5]
08268f74 +0x00:  push   %ebp
08268f75 +0x01:  mov    %esp,%ebp
08268f77 +0x03:  sub    $0x28,%esp
08268f7a +0x06:  mov    0x8(%ebp),%eax
08268f7d +0x09:  movl   $0x1,0x4(%esp)
08268f85 +0x11:  mov    %eax,(%esp)
08268f88 +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
08268f8d +0x19:  movl   $0x0,0xc(%esp)
08268f95 +0x21:  movl   $0x19,0x8(%esp)
08268f9d +0x29:  movl   $&_ZZN13CPvPLiveEvent10StartEventE10Word_ParamE12__FUNCTION__,0x4(%esp)
08268fa5 +0x31:  lea    -0x18(%ebp),%eax
08268fa8 +0x34:  mov    %eax,(%esp)
08268fab +0x37:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08268fb0 +0x3c:  movl   $"CPvPLiveEvent Start!",0x4(%esp)
08268fb8 +0x44:  lea    -0x18(%ebp),%eax
08268fbb +0x47:  mov    %eax,(%esp)
08268fbe +0x4a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08268fc3 +0x4f:  leave
08268fc4 +0x50:  ret
08268fc5 +0x51:  nop
```

## 反编译 C

```c
// CPvPLiveEvent::StartEvent @ 0x8268f74

/* CPvPLiveEvent::StartEvent(Word_Param) */

void CPvPLiveEvent::StartEvent(CEventBase *param_1)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag(param_1,true);
  cMyTrace::cMyTrace(local_1c,"StartEvent",0x19,0);
  cMyTrace::operator()(local_1c,"CPvPLiveEvent Start!");
  return;
}
```
