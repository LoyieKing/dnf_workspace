# StartEvent

`_ZN17CStabToDeathEvent10StartEventEv`

`CStabToDeathEvent::StartEvent()`

| 类 | 地址 |
|---|---|
| `CStabToDeathEvent` | `0x0827f572` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0827f572  _ZN17CStabToDeathEvent10StartEventEv
#           CStabToDeathEvent::StartEvent()
# range [0x0827f572, 0x0827f5c3]
0827f572 +0x00:  push   %ebp
0827f573 +0x01:  mov    %esp,%ebp
0827f575 +0x03:  sub    $0x28,%esp
0827f578 +0x06:  mov    0x8(%ebp),%eax
0827f57b +0x09:  movl   $0x1,0x4(%esp)
0827f583 +0x11:  mov    %eax,(%esp)
0827f586 +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
0827f58b +0x19:  movl   $0x0,0xc(%esp)
0827f593 +0x21:  movl   $0x11,0x8(%esp)
0827f59b +0x29:  movl   $&_ZZN17CStabToDeathEvent10StartEventEvE12__FUNCTION__,0x4(%esp)
0827f5a3 +0x31:  lea    -0x18(%ebp),%eax
0827f5a6 +0x34:  mov    %eax,(%esp)
0827f5a9 +0x37:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0827f5ae +0x3c:  movl   $"CStabToDeathEvent Start!",0x4(%esp)
0827f5b6 +0x44:  lea    -0x18(%ebp),%eax
0827f5b9 +0x47:  mov    %eax,(%esp)
0827f5bc +0x4a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0827f5c1 +0x4f:  leave
0827f5c2 +0x50:  ret
0827f5c3 +0x51:  nop
```

## 反编译 C

```c
// CStabToDeathEvent::StartEvent @ 0x827f572

/* CStabToDeathEvent::StartEvent() */

void __thiscall CStabToDeathEvent::StartEvent(CStabToDeathEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  cMyTrace::cMyTrace(local_1c,"StartEvent",0x11,0);
  cMyTrace::operator()(local_1c,"CStabToDeathEvent Start!");
  return;
}
```
