# EndEvent

`_ZN12COnTimeEvent8EndEventEv`

`COnTimeEvent::EndEvent()`

| 类 | 地址 |
|---|---|
| `COnTimeEvent` | `0x081bb91a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081bb91a  _ZN12COnTimeEvent8EndEventEv
#           COnTimeEvent::EndEvent()
# range [0x081bb91a, 0x081bb96b]
081bb91a +0x00:  push   %ebp
081bb91b +0x01:  mov    %esp,%ebp
081bb91d +0x03:  sub    $0x28,%esp
081bb920 +0x06:  mov    0x8(%ebp),%eax
081bb923 +0x09:  movl   $0x0,0x4(%esp)
081bb92b +0x11:  mov    %eax,(%esp)
081bb92e +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
081bb933 +0x19:  movl   $0x0,0xc(%esp)
081bb93b +0x21:  movl   $0x4d,0x8(%esp)
081bb943 +0x29:  movl   $&_ZZN12COnTimeEvent8EndEventEvE19__PRETTY_FUNCTION__,0x4(%esp)
081bb94b +0x31:  lea    -0x18(%ebp),%eax
081bb94e +0x34:  mov    %eax,(%esp)
081bb951 +0x37:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081bb956 +0x3c:  movl   $"COnTimeEvent Event End!",0x4(%esp)
081bb95e +0x44:  lea    -0x18(%ebp),%eax
081bb961 +0x47:  mov    %eax,(%esp)
081bb964 +0x4a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081bb969 +0x4f:  leave
081bb96a +0x50:  ret
081bb96b +0x51:  nop
```

## 反编译 C

```c
// COnTimeEvent::EndEvent @ 0x81bb91a

/* COnTimeEvent::EndEvent() */

void __thiscall COnTimeEvent::EndEvent(COnTimeEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,false);
  cMyTrace::cMyTrace(local_1c,"virtual void COnTimeEvent::EndEvent()",0x4d,0);
  cMyTrace::operator()(local_1c,"COnTimeEvent Event End!");
  return;
}
```
