# EndEvent

`_ZN15AttendanceEvent8EndEventEv`

`AttendanceEvent::EndEvent()`

| 类 | 地址 |
|---|---|
| `AttendanceEvent` | `0x080c83f4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080c83f4  _ZN15AttendanceEvent8EndEventEv
#           AttendanceEvent::EndEvent()
# range [0x080c83f4, 0x080c8445]
080c83f4 +0x00:  push   %ebp
080c83f5 +0x01:  mov    %esp,%ebp
080c83f7 +0x03:  sub    $0x28,%esp
080c83fa +0x06:  mov    0x8(%ebp),%eax
080c83fd +0x09:  movl   $0x0,0x4(%esp)
080c8405 +0x11:  mov    %eax,(%esp)
080c8408 +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
080c840d +0x19:  movl   $0x0,0xc(%esp)
080c8415 +0x21:  movl   $0x23,0x8(%esp)
080c841d +0x29:  movl   $&_ZZN15AttendanceEvent8EndEventEvE19__PRETTY_FUNCTION__,0x4(%esp)
080c8425 +0x31:  lea    -0x18(%ebp),%eax
080c8428 +0x34:  mov    %eax,(%esp)
080c842b +0x37:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
080c8430 +0x3c:  movl   $"Attendacne Event End!",0x4(%esp)
080c8438 +0x44:  lea    -0x18(%ebp),%eax
080c843b +0x47:  mov    %eax,(%esp)
080c843e +0x4a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
080c8443 +0x4f:  leave
080c8444 +0x50:  ret
080c8445 +0x51:  nop
```

## 反编译 C

```c
// AttendanceEvent::EndEvent @ 0x80c83f4

/* AttendanceEvent::EndEvent() */

void __thiscall AttendanceEvent::EndEvent(AttendanceEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,false);
  cMyTrace::cMyTrace(local_1c,"virtual void AttendanceEvent::EndEvent()",0x23,0);
  cMyTrace::operator()(local_1c,"Attendacne Event End!");
  return;
}
```
