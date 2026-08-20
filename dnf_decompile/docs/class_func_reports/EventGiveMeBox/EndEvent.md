# EndEvent

`_ZN14EventGiveMeBox8EndEventEv`

`EventGiveMeBox::EndEvent()`

| 类 | 地址 |
|---|---|
| `EventGiveMeBox` | `0x08164abe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08164abe  _ZN14EventGiveMeBox8EndEventEv
#           EventGiveMeBox::EndEvent()
# range [0x08164abe, 0x08164b0e]
08164abe +0x00:  push   %ebp
08164abf +0x01:  mov    %esp,%ebp
08164ac1 +0x03:  sub    $0x28,%esp
08164ac4 +0x06:  mov    0x8(%ebp),%eax
08164ac7 +0x09:  movl   $0x0,0x4(%esp)
08164acf +0x11:  mov    %eax,(%esp)
08164ad2 +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
08164ad7 +0x19:  movl   $0x0,0xc(%esp)
08164adf +0x21:  movl   $0x1d,0x8(%esp)
08164ae7 +0x29:  movl   $&_ZZN14EventGiveMeBox8EndEventEvE19__PRETTY_FUNCTION__,0x4(%esp)
08164aef +0x31:  lea    -0x18(%ebp),%eax
08164af2 +0x34:  mov    %eax,(%esp)
08164af5 +0x37:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08164afa +0x3c:  movl   $"[Taiwan, EventGiveMeBox] Event stop!",0x4(%esp)
08164b02 +0x44:  lea    -0x18(%ebp),%eax
08164b05 +0x47:  mov    %eax,(%esp)
08164b08 +0x4a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08164b0d +0x4f:  leave
08164b0e +0x50:  ret
```

## 反编译 C

```c
// EventGiveMeBox::EndEvent @ 0x8164abe

/* EventGiveMeBox::EndEvent() */

void __thiscall EventGiveMeBox::EndEvent(EventGiveMeBox *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,false);
  cMyTrace::cMyTrace(local_1c,"virtual void EventGiveMeBox::EndEvent()",0x1d,0);
  cMyTrace::operator()(local_1c,"[Taiwan, EventGiveMeBox] Event stop!");
  return;
}
```
