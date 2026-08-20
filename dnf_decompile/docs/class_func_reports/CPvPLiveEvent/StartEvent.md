# StartEvent

`_ZN13CPvPLiveEvent10StartEventEv`

`CPvPLiveEvent::StartEvent()`

| 类 | 地址 |
|---|---|
| `CPvPLiveEvent` | `0x08268f22` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08268f22  _ZN13CPvPLiveEvent10StartEventEv
#           CPvPLiveEvent::StartEvent()
# range [0x08268f22, 0x08268f73]
08268f22 +0x00:  push   %ebp
08268f23 +0x01:  mov    %esp,%ebp
08268f25 +0x03:  sub    $0x28,%esp
08268f28 +0x06:  mov    0x8(%ebp),%eax
08268f2b +0x09:  movl   $0x1,0x4(%esp)
08268f33 +0x11:  mov    %eax,(%esp)
08268f36 +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
08268f3b +0x19:  movl   $0x0,0xc(%esp)
08268f43 +0x21:  movl   $0x13,0x8(%esp)
08268f4b +0x29:  movl   $&_ZZN13CPvPLiveEvent10StartEventEvE12__FUNCTION__,0x4(%esp)
08268f53 +0x31:  lea    -0x18(%ebp),%eax
08268f56 +0x34:  mov    %eax,(%esp)
08268f59 +0x37:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08268f5e +0x3c:  movl   $"CPvPLiveEvent Start!",0x4(%esp)
08268f66 +0x44:  lea    -0x18(%ebp),%eax
08268f69 +0x47:  mov    %eax,(%esp)
08268f6c +0x4a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08268f71 +0x4f:  leave
08268f72 +0x50:  ret
08268f73 +0x51:  nop
```

## 反编译 C

```c
// CPvPLiveEvent::StartEvent @ 0x8268f22

/* CPvPLiveEvent::StartEvent() */

void __thiscall CPvPLiveEvent::StartEvent(CPvPLiveEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  cMyTrace::cMyTrace(local_1c,"StartEvent",0x13,0);
  cMyTrace::operator()(local_1c,"CPvPLiveEvent Start!");
  return;
}
```
