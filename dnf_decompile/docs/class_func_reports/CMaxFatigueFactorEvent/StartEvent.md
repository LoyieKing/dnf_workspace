# StartEvent

`_ZN22CMaxFatigueFactorEvent10StartEventEv`

`CMaxFatigueFactorEvent::StartEvent()`

| 类 | 地址 |
|---|---|
| `CMaxFatigueFactorEvent` | `0x081b278c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b278c  _ZN22CMaxFatigueFactorEvent10StartEventEv
#           CMaxFatigueFactorEvent::StartEvent()
# range [0x081b278c, 0x081b27e7]
081b278c +0x00:  push   %ebp
081b278d +0x01:  mov    %esp,%ebp
081b278f +0x03:  sub    $0x28,%esp
081b2792 +0x06:  mov    0x8(%ebp),%eax
081b2795 +0x09:  movl   $0x1,0x4(%esp)
081b279d +0x11:  mov    %eax,(%esp)
081b27a0 +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
081b27a5 +0x19:  mov    0x8(%ebp),%eax
081b27a8 +0x1c:  movl   $0x64,0xc(%eax)
081b27af +0x23:  movl   $0x0,0xc(%esp)
081b27b7 +0x2b:  movl   $0x16,0x8(%esp)
081b27bf +0x33:  movl   $&_ZZN22CMaxFatigueFactorEvent10StartEventEvE12__FUNCTION__,0x4(%esp)
081b27c7 +0x3b:  lea    -0x18(%ebp),%eax
081b27ca +0x3e:  mov    %eax,(%esp)
081b27cd +0x41:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081b27d2 +0x46:  movl   $"Max Fatigue Factor Event Start!",0x4(%esp)
081b27da +0x4e:  lea    -0x18(%ebp),%eax
081b27dd +0x51:  mov    %eax,(%esp)
081b27e0 +0x54:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081b27e5 +0x59:  leave
081b27e6 +0x5a:  ret
081b27e7 +0x5b:  nop
```

## 反编译 C

```c
// CMaxFatigueFactorEvent::StartEvent @ 0x81b278c

/* CMaxFatigueFactorEvent::StartEvent() */

void __thiscall CMaxFatigueFactorEvent::StartEvent(CMaxFatigueFactorEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  *(undefined4 *)(this + 0xc) = 100;
  cMyTrace::cMyTrace(local_1c,"StartEvent",0x16,0);
  cMyTrace::operator()(local_1c,"Max Fatigue Factor Event Start!");
  return;
}
```
