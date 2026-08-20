# EndEvent

`_ZN25CDimensionActivationEvent8EndEventEv`

`CDimensionActivationEvent::EndEvent()`

| 类 | 地址 |
|---|---|
| `CDimensionActivationEvent` | `0x080eeb64` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080eeb64  _ZN25CDimensionActivationEvent8EndEventEv
#           CDimensionActivationEvent::EndEvent()
# range [0x080eeb64, 0x080eebbf]
080eeb64 +0x00:  push   %ebp
080eeb65 +0x01:  mov    %esp,%ebp
080eeb67 +0x03:  sub    $0x28,%esp
080eeb6a +0x06:  mov    0x8(%ebp),%eax
080eeb6d +0x09:  movl   $0x0,0x4(%esp)
080eeb75 +0x11:  mov    %eax,(%esp)
080eeb78 +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
080eeb7d +0x19:  movl   $0x0,0xc(%esp)
080eeb85 +0x21:  movl   $0x1e,0x8(%esp)
080eeb8d +0x29:  movl   $&_ZZN25CDimensionActivationEvent8EndEventEvE19__PRETTY_FUNCTION__,0x4(%esp)
080eeb95 +0x31:  lea    -0x18(%ebp),%eax
080eeb98 +0x34:  mov    %eax,(%esp)
080eeb9b +0x37:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
080eeba0 +0x3c:  movl   $"CDimensionActivationEvent Event End!",0x4(%esp)
080eeba8 +0x44:  lea    -0x18(%ebp),%eax
080eebab +0x47:  mov    %eax,(%esp)
080eebae +0x4a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
080eebb3 +0x4f:  mov    0x8(%ebp),%eax
080eebb6 +0x52:  mov    %eax,(%esp)
080eebb9 +0x55:  call   080eec58 <_ZN25CDimensionActivationEvent24reset_dungeon_play_countEv>  ; CDimensionActivationEvent::reset_dungeon_play_count()
080eebbe +0x5a:  leave
080eebbf +0x5b:  ret
```

## 反编译 C

```c
// CDimensionActivationEvent::EndEvent @ 0x80eeb64

/* CDimensionActivationEvent::EndEvent() */

void __thiscall CDimensionActivationEvent::EndEvent(CDimensionActivationEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,false);
  cMyTrace::cMyTrace(local_1c,"virtual void CDimensionActivationEvent::EndEvent()",0x1e,0);
  cMyTrace::operator()(local_1c,"CDimensionActivationEvent Event End!");
  reset_dungeon_play_count();
  return;
}
```
