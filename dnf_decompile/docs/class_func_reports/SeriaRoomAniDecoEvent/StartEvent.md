# StartEvent

`_ZN21SeriaRoomAniDecoEvent10StartEventEv`

`SeriaRoomAniDecoEvent::StartEvent()`

| 类 | 地址 |
|---|---|
| `SeriaRoomAniDecoEvent` | `0x0827b4fa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0827b4fa  _ZN21SeriaRoomAniDecoEvent10StartEventEv
#           SeriaRoomAniDecoEvent::StartEvent()
# range [0x0827b4fa, 0x0827b54b]
0827b4fa +0x00:  push   %ebp
0827b4fb +0x01:  mov    %esp,%ebp
0827b4fd +0x03:  sub    $0x28,%esp
0827b500 +0x06:  mov    0x8(%ebp),%eax
0827b503 +0x09:  movl   $0x1,0x4(%esp)
0827b50b +0x11:  mov    %eax,(%esp)
0827b50e +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
0827b513 +0x19:  movl   $0x0,0xc(%esp)
0827b51b +0x21:  movl   $0x18,0x8(%esp)
0827b523 +0x29:  movl   $&_ZZN21SeriaRoomAniDecoEvent10StartEventEvE19__PRETTY_FUNCTION__,0x4(%esp)
0827b52b +0x31:  lea    -0x18(%ebp),%eax
0827b52e +0x34:  mov    %eax,(%esp)
0827b531 +0x37:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0827b536 +0x3c:  movl   $"SeriaRoomAniDecoEvent Event start!",0x4(%esp)
0827b53e +0x44:  lea    -0x18(%ebp),%eax
0827b541 +0x47:  mov    %eax,(%esp)
0827b544 +0x4a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0827b549 +0x4f:  leave
0827b54a +0x50:  ret
0827b54b +0x51:  nop
```

## 反编译 C

```c
// SeriaRoomAniDecoEvent::StartEvent @ 0x827b4fa

/* SeriaRoomAniDecoEvent::StartEvent() */

void __thiscall SeriaRoomAniDecoEvent::StartEvent(SeriaRoomAniDecoEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  cMyTrace::cMyTrace(local_1c,"virtual void SeriaRoomAniDecoEvent::StartEvent()",0x18,0);
  cMyTrace::operator()(local_1c,"SeriaRoomAniDecoEvent Event start!");
  return;
}
```
