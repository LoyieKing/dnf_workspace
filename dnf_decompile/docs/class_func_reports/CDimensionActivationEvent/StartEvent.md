# StartEvent

`_ZN25CDimensionActivationEvent10StartEventEv`

`CDimensionActivationEvent::StartEvent()`

| 类 | 地址 |
|---|---|
| `CDimensionActivationEvent` | `0x080eeaee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080eeaee  _ZN25CDimensionActivationEvent10StartEventEv
#           CDimensionActivationEvent::StartEvent()
# range [0x080eeaee, 0x080eeb49]
080eeaee +0x00:  push   %ebp
080eeaef +0x01:  mov    %esp,%ebp
080eeaf1 +0x03:  sub    $0x28,%esp
080eeaf4 +0x06:  mov    0x8(%ebp),%eax
080eeaf7 +0x09:  movl   $0x1,0x4(%esp)
080eeaff +0x11:  mov    %eax,(%esp)
080eeb02 +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
080eeb07 +0x19:  movl   $0x0,0xc(%esp)
080eeb0f +0x21:  movl   $0x12,0x8(%esp)
080eeb17 +0x29:  movl   $&_ZZN25CDimensionActivationEvent10StartEventEvE19__PRETTY_FUNCTION__,0x4(%esp)
080eeb1f +0x31:  lea    -0x18(%ebp),%eax
080eeb22 +0x34:  mov    %eax,(%esp)
080eeb25 +0x37:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
080eeb2a +0x3c:  movl   $"CDimensionActivationEvent Event Start!",0x4(%esp)
080eeb32 +0x44:  lea    -0x18(%ebp),%eax
080eeb35 +0x47:  mov    %eax,(%esp)
080eeb38 +0x4a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
080eeb3d +0x4f:  mov    0x8(%ebp),%eax
080eeb40 +0x52:  mov    %eax,(%esp)
080eeb43 +0x55:  call   080eebc0 <_ZN25CDimensionActivationEvent22set_dungeon_play_countEv>  ; CDimensionActivationEvent::set_dungeon_play_count()
080eeb48 +0x5a:  leave
080eeb49 +0x5b:  ret
```

## 反编译 C

```c
// CDimensionActivationEvent::StartEvent @ 0x80eeaee

/* CDimensionActivationEvent::StartEvent() */

void __thiscall CDimensionActivationEvent::StartEvent(CDimensionActivationEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  cMyTrace::cMyTrace(local_1c,"virtual void CDimensionActivationEvent::StartEvent()",0x12,0);
  cMyTrace::operator()(local_1c,"CDimensionActivationEvent Event Start!");
  set_dungeon_play_count();
  return;
}
```
