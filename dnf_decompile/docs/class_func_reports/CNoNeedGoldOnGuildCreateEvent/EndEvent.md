# EndEvent

`_ZN29CNoNeedGoldOnGuildCreateEvent8EndEventEv`

`CNoNeedGoldOnGuildCreateEvent::EndEvent()`

| 类 | 地址 |
|---|---|
| `CNoNeedGoldOnGuildCreateEvent` | `0x081b9c9a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b9c9a  _ZN29CNoNeedGoldOnGuildCreateEvent8EndEventEv
#           CNoNeedGoldOnGuildCreateEvent::EndEvent()
# range [0x081b9c9a, 0x081b9cea]
081b9c9a +0x00:  push   %ebp
081b9c9b +0x01:  mov    %esp,%ebp
081b9c9d +0x03:  sub    $0x28,%esp
081b9ca0 +0x06:  mov    0x8(%ebp),%eax
081b9ca3 +0x09:  movl   $0x0,0x4(%esp)
081b9cab +0x11:  mov    %eax,(%esp)
081b9cae +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
081b9cb3 +0x19:  movl   $0x0,0xc(%esp)
081b9cbb +0x21:  movl   $0x1e,0x8(%esp)
081b9cc3 +0x29:  movl   $&_ZZN29CNoNeedGoldOnGuildCreateEvent8EndEventEvE12__FUNCTION__,0x4(%esp)
081b9ccb +0x31:  lea    -0x18(%ebp),%eax
081b9cce +0x34:  mov    %eax,(%esp)
081b9cd1 +0x37:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081b9cd6 +0x3c:  movl   $"No Need Money On Guild Create Event End!",0x4(%esp)
081b9cde +0x44:  lea    -0x18(%ebp),%eax
081b9ce1 +0x47:  mov    %eax,(%esp)
081b9ce4 +0x4a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081b9ce9 +0x4f:  leave
081b9cea +0x50:  ret
```

## 反编译 C

```c
// CNoNeedGoldOnGuildCreateEvent::EndEvent @ 0x81b9c9a

/* CNoNeedGoldOnGuildCreateEvent::EndEvent() */

void __thiscall CNoNeedGoldOnGuildCreateEvent::EndEvent(CNoNeedGoldOnGuildCreateEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,false);
  cMyTrace::cMyTrace(local_1c,"EndEvent",0x1e,0);
  cMyTrace::operator()(local_1c,"No Need Money On Guild Create Event End!");
  return;
}
```
