# StartEvent

`_ZN21CReformingDanjinEvent10StartEventEv`

`CReformingDanjinEvent::StartEvent()`

| 类 | 地址 |
|---|---|
| `CReformingDanjinEvent` | `0x0826e996` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0826e996  _ZN21CReformingDanjinEvent10StartEventEv
#           CReformingDanjinEvent::StartEvent()
# range [0x0826e996, 0x0826e9e7]
0826e996 +0x00:  push   %ebp
0826e997 +0x01:  mov    %esp,%ebp
0826e999 +0x03:  sub    $0x28,%esp
0826e99c +0x06:  mov    0x8(%ebp),%eax
0826e99f +0x09:  movl   $0x1,0x4(%esp)
0826e9a7 +0x11:  mov    %eax,(%esp)
0826e9aa +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
0826e9af +0x19:  movl   $0x0,0xc(%esp)
0826e9b7 +0x21:  movl   $0x13,0x8(%esp)
0826e9bf +0x29:  movl   $&_ZZN21CReformingDanjinEvent10StartEventEvE12__FUNCTION__,0x4(%esp)
0826e9c7 +0x31:  lea    -0x18(%ebp),%eax
0826e9ca +0x34:  mov    %eax,(%esp)
0826e9cd +0x37:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0826e9d2 +0x3c:  movl   $"Reforming Danjin Event Start!",0x4(%esp)
0826e9da +0x44:  lea    -0x18(%ebp),%eax
0826e9dd +0x47:  mov    %eax,(%esp)
0826e9e0 +0x4a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0826e9e5 +0x4f:  leave
0826e9e6 +0x50:  ret
0826e9e7 +0x51:  nop
```

## 反编译 C

```c
// CReformingDanjinEvent::StartEvent @ 0x826e996

/* CReformingDanjinEvent::StartEvent() */

void __thiscall CReformingDanjinEvent::StartEvent(CReformingDanjinEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  cMyTrace::cMyTrace(local_1c,"StartEvent",0x13,0);
  cMyTrace::operator()(local_1c,"Reforming Danjin Event Start!");
  return;
}
```
