# StartEvent

`_ZN29CNoNeedGoldOnGuildCreateEvent10StartEventEv`

`CNoNeedGoldOnGuildCreateEvent::StartEvent()`

| 类 | 地址 |
|---|---|
| `CNoNeedGoldOnGuildCreateEvent` | `0x081b9bf6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b9bf6  _ZN29CNoNeedGoldOnGuildCreateEvent10StartEventEv
#           CNoNeedGoldOnGuildCreateEvent::StartEvent()
# range [0x081b9bf6, 0x081b9c47]
081b9bf6 +0x00:  push   %ebp
081b9bf7 +0x01:  mov    %esp,%ebp
081b9bf9 +0x03:  sub    $0x28,%esp
081b9bfc +0x06:  mov    0x8(%ebp),%eax
081b9bff +0x09:  movl   $0x1,0x4(%esp)
081b9c07 +0x11:  mov    %eax,(%esp)
081b9c0a +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
081b9c0f +0x19:  movl   $0x0,0xc(%esp)
081b9c17 +0x21:  movl   $0x12,0x8(%esp)
081b9c1f +0x29:  movl   $&_ZZN29CNoNeedGoldOnGuildCreateEvent10StartEventEvE12__FUNCTION__,0x4(%esp)
081b9c27 +0x31:  lea    -0x18(%ebp),%eax
081b9c2a +0x34:  mov    %eax,(%esp)
081b9c2d +0x37:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081b9c32 +0x3c:  movl   $"No Need Money On Guild Create Event Start!",0x4(%esp)
081b9c3a +0x44:  lea    -0x18(%ebp),%eax
081b9c3d +0x47:  mov    %eax,(%esp)
081b9c40 +0x4a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081b9c45 +0x4f:  leave
081b9c46 +0x50:  ret
081b9c47 +0x51:  nop
```

## 反编译 C

```c
// CNoNeedGoldOnGuildCreateEvent::StartEvent @ 0x81b9bf6

/* CNoNeedGoldOnGuildCreateEvent::StartEvent() */

void __thiscall CNoNeedGoldOnGuildCreateEvent::StartEvent(CNoNeedGoldOnGuildCreateEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  cMyTrace::cMyTrace(local_1c,"StartEvent",0x12,0);
  cMyTrace::operator()(local_1c,"No Need Money On Guild Create Event Start!");
  return;
}
```
