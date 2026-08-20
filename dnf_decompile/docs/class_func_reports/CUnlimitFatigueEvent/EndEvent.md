# EndEvent

`_ZN20CUnlimitFatigueEvent8EndEventEv`

`CUnlimitFatigueEvent::EndEvent()`

| 类 | 地址 |
|---|---|
| `CUnlimitFatigueEvent` | `0x08285d52` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08285d52  _ZN20CUnlimitFatigueEvent8EndEventEv
#           CUnlimitFatigueEvent::EndEvent()
# range [0x08285d52, 0x08285da2]
08285d52 +0x00:  push   %ebp
08285d53 +0x01:  mov    %esp,%ebp
08285d55 +0x03:  sub    $0x28,%esp
08285d58 +0x06:  mov    0x8(%ebp),%eax
08285d5b +0x09:  movl   $0x0,0x4(%esp)
08285d63 +0x11:  mov    %eax,(%esp)
08285d66 +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
08285d6b +0x19:  movl   $0x0,0xc(%esp)
08285d73 +0x21:  movl   $0x20,0x8(%esp)
08285d7b +0x29:  movl   $&_ZZN20CUnlimitFatigueEvent8EndEventEvE12__FUNCTION__,0x4(%esp)
08285d83 +0x31:  lea    -0x18(%ebp),%eax
08285d86 +0x34:  mov    %eax,(%esp)
08285d89 +0x37:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08285d8e +0x3c:  movl   $"Unlimit Fatigue Event End!",0x4(%esp)
08285d96 +0x44:  lea    -0x18(%ebp),%eax
08285d99 +0x47:  mov    %eax,(%esp)
08285d9c +0x4a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08285da1 +0x4f:  leave
08285da2 +0x50:  ret
```

## 反编译 C

```c
// CUnlimitFatigueEvent::EndEvent @ 0x8285d52

/* CUnlimitFatigueEvent::EndEvent() */

void __thiscall CUnlimitFatigueEvent::EndEvent(CUnlimitFatigueEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,false);
  cMyTrace::cMyTrace(local_1c,"EndEvent",0x20,0);
  cMyTrace::operator()(local_1c,"Unlimit Fatigue Event End!");
  return;
}
```
