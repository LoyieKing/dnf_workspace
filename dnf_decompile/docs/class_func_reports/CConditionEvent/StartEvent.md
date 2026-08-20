# StartEvent

`_ZN15CConditionEvent10StartEventEv`

`CConditionEvent::StartEvent()`

| 类 | 地址 |
|---|---|
| `CConditionEvent` | `0x081848bc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081848bc  _ZN15CConditionEvent10StartEventEv
#           CConditionEvent::StartEvent()
# range [0x081848bc, 0x0818490d]
081848bc +0x00:  push   %ebp
081848bd +0x01:  mov    %esp,%ebp
081848bf +0x03:  sub    $0x28,%esp
081848c2 +0x06:  mov    0x8(%ebp),%eax
081848c5 +0x09:  movl   $0x1,0x4(%esp)
081848cd +0x11:  mov    %eax,(%esp)
081848d0 +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
081848d5 +0x19:  movl   $0x0,0xc(%esp)
081848dd +0x21:  movl   $0xd,0x8(%esp)
081848e5 +0x29:  movl   $&_ZZN15CConditionEvent10StartEventEvE19__PRETTY_FUNCTION__,0x4(%esp)
081848ed +0x31:  lea    -0x18(%ebp),%eax
081848f0 +0x34:  mov    %eax,(%esp)
081848f3 +0x37:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081848f8 +0x3c:  movl   $"[ConditionEvent] Start!",0x4(%esp)
08184900 +0x44:  lea    -0x18(%ebp),%eax
08184903 +0x47:  mov    %eax,(%esp)
08184906 +0x4a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0818490b +0x4f:  leave
0818490c +0x50:  ret
0818490d +0x51:  nop
```

## 反编译 C

```c
// CConditionEvent::StartEvent @ 0x81848bc

/* CConditionEvent::StartEvent() */

void __thiscall CConditionEvent::StartEvent(CConditionEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  cMyTrace::cMyTrace(local_1c,"virtual void CConditionEvent::StartEvent()",0xd,0);
  cMyTrace::operator()(local_1c,"[ConditionEvent] Start!");
  return;
}
```
