# EndEvent

`_ZN21SeriaRoomAniDecoEvent8EndEventEv`

`SeriaRoomAniDecoEvent::EndEvent()`

| 类 | 地址 |
|---|---|
| `SeriaRoomAniDecoEvent` | `0x0827b59e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0827b59e  _ZN21SeriaRoomAniDecoEvent8EndEventEv
#           SeriaRoomAniDecoEvent::EndEvent()
# range [0x0827b59e, 0x0827b5ef]
0827b59e +0x00:  push   %ebp
0827b59f +0x01:  mov    %esp,%ebp
0827b5a1 +0x03:  sub    $0x28,%esp
0827b5a4 +0x06:  mov    0x8(%ebp),%eax
0827b5a7 +0x09:  movl   $0x0,0x4(%esp)
0827b5af +0x11:  mov    %eax,(%esp)
0827b5b2 +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
0827b5b7 +0x19:  movl   $0x0,0xc(%esp)
0827b5bf +0x21:  movl   $0x24,0x8(%esp)
0827b5c7 +0x29:  movl   $&_ZZN21SeriaRoomAniDecoEvent8EndEventEvE19__PRETTY_FUNCTION__,0x4(%esp)
0827b5cf +0x31:  lea    -0x18(%ebp),%eax
0827b5d2 +0x34:  mov    %eax,(%esp)
0827b5d5 +0x37:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0827b5da +0x3c:  movl   $"SeriaRoomAniDecoEvent Event end!",0x4(%esp)
0827b5e2 +0x44:  lea    -0x18(%ebp),%eax
0827b5e5 +0x47:  mov    %eax,(%esp)
0827b5e8 +0x4a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0827b5ed +0x4f:  leave
0827b5ee +0x50:  ret
0827b5ef +0x51:  nop
```

## 反编译 C

```c
// SeriaRoomAniDecoEvent::EndEvent @ 0x827b59e

/* SeriaRoomAniDecoEvent::EndEvent() */

void __thiscall SeriaRoomAniDecoEvent::EndEvent(SeriaRoomAniDecoEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,false);
  cMyTrace::cMyTrace(local_1c,"virtual void SeriaRoomAniDecoEvent::EndEvent()",0x24,0);
  cMyTrace::operator()(local_1c,"SeriaRoomAniDecoEvent Event end!");
  return;
}
```
