# StartEvent

`_ZN21SeriaRoomAniDecoEvent10StartEventE10Word_Param`

`SeriaRoomAniDecoEvent::StartEvent(Word_Param)`

| 类 | 地址 |
|---|---|
| `SeriaRoomAniDecoEvent` | `0x0827b54c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0827b54c  _ZN21SeriaRoomAniDecoEvent10StartEventE10Word_Param
#           SeriaRoomAniDecoEvent::StartEvent(Word_Param)
# range [0x0827b54c, 0x0827b59d]
0827b54c +0x00:  push   %ebp
0827b54d +0x01:  mov    %esp,%ebp
0827b54f +0x03:  sub    $0x28,%esp
0827b552 +0x06:  mov    0x8(%ebp),%eax
0827b555 +0x09:  movl   $0x1,0x4(%esp)
0827b55d +0x11:  mov    %eax,(%esp)
0827b560 +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
0827b565 +0x19:  movl   $0x0,0xc(%esp)
0827b56d +0x21:  movl   $0x1e,0x8(%esp)
0827b575 +0x29:  movl   $&_ZZN21SeriaRoomAniDecoEvent10StartEventE10Word_ParamE19__PRETTY_FUNCTION__,0x4(%esp)
0827b57d +0x31:  lea    -0x18(%ebp),%eax
0827b580 +0x34:  mov    %eax,(%esp)
0827b583 +0x37:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0827b588 +0x3c:  movl   $"SeriaRoomAniDecoEvent Event start! [monitor request]",0x4(%esp)
0827b590 +0x44:  lea    -0x18(%ebp),%eax
0827b593 +0x47:  mov    %eax,(%esp)
0827b596 +0x4a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0827b59b +0x4f:  leave
0827b59c +0x50:  ret
0827b59d +0x51:  nop
```

## 反编译 C

```c
// SeriaRoomAniDecoEvent::StartEvent @ 0x827b54c

/* SeriaRoomAniDecoEvent::StartEvent(Word_Param) */

void SeriaRoomAniDecoEvent::StartEvent(CEventBase *param_1)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag(param_1,true);
  cMyTrace::cMyTrace(local_1c,"virtual void SeriaRoomAniDecoEvent::StartEvent(Word_Param)",0x1e,0);
  cMyTrace::operator()(local_1c,"SeriaRoomAniDecoEvent Event start! [monitor request]");
  return;
}
```
