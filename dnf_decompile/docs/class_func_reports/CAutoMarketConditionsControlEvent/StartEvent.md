# StartEvent

`_ZN33CAutoMarketConditionsControlEvent10StartEventEv`

`CAutoMarketConditionsControlEvent::StartEvent()`

| 类 | 地址 |
|---|---|
| `CAutoMarketConditionsControlEvent` | `0x08109c7e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08109c7e  _ZN33CAutoMarketConditionsControlEvent10StartEventEv
#           CAutoMarketConditionsControlEvent::StartEvent()
# range [0x08109c7e, 0x08109ccf]
08109c7e +0x00:  push   %ebp
08109c7f +0x01:  mov    %esp,%ebp
08109c81 +0x03:  sub    $0x28,%esp
08109c84 +0x06:  mov    0x8(%ebp),%eax
08109c87 +0x09:  movl   $0x1,0x4(%esp)
08109c8f +0x11:  mov    %eax,(%esp)
08109c92 +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
08109c97 +0x19:  movl   $0x0,0xc(%esp)
08109c9f +0x21:  movl   $0x13,0x8(%esp)
08109ca7 +0x29:  movl   $&_ZZN33CAutoMarketConditionsControlEvent10StartEventEvE12__FUNCTION__,0x4(%esp)
08109caf +0x31:  lea    -0x18(%ebp),%eax
08109cb2 +0x34:  mov    %eax,(%esp)
08109cb5 +0x37:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08109cba +0x3c:  movl   $"CAutoMarketConditionsControlEvent Start!",0x4(%esp)
08109cc2 +0x44:  lea    -0x18(%ebp),%eax
08109cc5 +0x47:  mov    %eax,(%esp)
08109cc8 +0x4a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08109ccd +0x4f:  leave
08109cce +0x50:  ret
08109ccf +0x51:  nop
```

## 反编译 C

```c
// CAutoMarketConditionsControlEvent::StartEvent @ 0x8109c7e

/* CAutoMarketConditionsControlEvent::StartEvent() */

void __thiscall
CAutoMarketConditionsControlEvent::StartEvent(CAutoMarketConditionsControlEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  cMyTrace::cMyTrace(local_1c,"StartEvent",0x13,0);
  cMyTrace::operator()(local_1c,"CAutoMarketConditionsControlEvent Start!");
  return;
}
```
