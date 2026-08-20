# EndEvent

`_ZN22CBreakAwayPreventEvent8EndEventEv`

`CBreakAwayPreventEvent::EndEvent()`

| 类 | 地址 |
|---|---|
| `CBreakAwayPreventEvent` | `0x08109ed6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08109ed6  _ZN22CBreakAwayPreventEvent8EndEventEv
#           CBreakAwayPreventEvent::EndEvent()
# range [0x08109ed6, 0x08109f32]
08109ed6 +0x00:  push   %ebp
08109ed7 +0x01:  mov    %esp,%ebp
08109ed9 +0x03:  sub    $0x28,%esp
08109edc +0x06:  mov    0x8(%ebp),%eax
08109edf +0x09:  movl   $0x0,0x4(%esp)
08109ee7 +0x11:  mov    %eax,(%esp)
08109eea +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
08109eef +0x19:  movl   $0x0,(%esp)
08109ef6 +0x20:  call   08438920 <_ZN27DB_LoadBreakAwayPreventData11makeRequestEb>  ; DB_LoadBreakAwayPreventData::makeRequest(bool)
08109efb +0x25:  movl   $0x0,0xc(%esp)
08109f03 +0x2d:  movl   $0x23,0x8(%esp)
08109f0b +0x35:  movl   $&_ZZN22CBreakAwayPreventEvent8EndEventEvE12__FUNCTION__,0x4(%esp)
08109f13 +0x3d:  lea    -0x18(%ebp),%eax
08109f16 +0x40:  mov    %eax,(%esp)
08109f19 +0x43:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08109f1e +0x48:  movl   $"CBreakAwayPreventEvent End!",0x4(%esp)
08109f26 +0x50:  lea    -0x18(%ebp),%eax
08109f29 +0x53:  mov    %eax,(%esp)
08109f2c +0x56:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08109f31 +0x5b:  leave
08109f32 +0x5c:  ret
```

## 反编译 C

```c
// CBreakAwayPreventEvent::EndEvent @ 0x8109ed6

/* CBreakAwayPreventEvent::EndEvent() */

void __thiscall CBreakAwayPreventEvent::EndEvent(CBreakAwayPreventEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,false);
  DB_LoadBreakAwayPreventData::makeRequest(false);
  cMyTrace::cMyTrace(local_1c,"EndEvent",0x23,0);
  cMyTrace::operator()(local_1c,"CBreakAwayPreventEvent End!");
  return;
}
```
