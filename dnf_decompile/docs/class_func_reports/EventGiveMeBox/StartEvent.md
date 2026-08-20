# StartEvent

`_ZN14EventGiveMeBox10StartEventEv`

`EventGiveMeBox::StartEvent()`

| 类 | 地址 |
|---|---|
| `EventGiveMeBox` | `0x08164a1a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08164a1a  _ZN14EventGiveMeBox10StartEventEv
#           EventGiveMeBox::StartEvent()
# range [0x08164a1a, 0x08164a6b]
08164a1a +0x00:  push   %ebp
08164a1b +0x01:  mov    %esp,%ebp
08164a1d +0x03:  sub    $0x28,%esp
08164a20 +0x06:  mov    0x8(%ebp),%eax
08164a23 +0x09:  movl   $0x1,0x4(%esp)
08164a2b +0x11:  mov    %eax,(%esp)
08164a2e +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
08164a33 +0x19:  movl   $0x0,0xc(%esp)
08164a3b +0x21:  movl   $0x12,0x8(%esp)
08164a43 +0x29:  movl   $&_ZZN14EventGiveMeBox10StartEventEvE19__PRETTY_FUNCTION__,0x4(%esp)
08164a4b +0x31:  lea    -0x18(%ebp),%eax
08164a4e +0x34:  mov    %eax,(%esp)
08164a51 +0x37:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08164a56 +0x3c:  movl   $"[Taiwan, EventGiveMeBox] Event start!",0x4(%esp)
08164a5e +0x44:  lea    -0x18(%ebp),%eax
08164a61 +0x47:  mov    %eax,(%esp)
08164a64 +0x4a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08164a69 +0x4f:  leave
08164a6a +0x50:  ret
08164a6b +0x51:  nop
```

## 反编译 C

```c
// EventGiveMeBox::StartEvent @ 0x8164a1a

/* EventGiveMeBox::StartEvent() */

void __thiscall EventGiveMeBox::StartEvent(EventGiveMeBox *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  cMyTrace::cMyTrace(local_1c,"virtual void EventGiveMeBox::StartEvent()",0x12,0);
  cMyTrace::operator()(local_1c,"[Taiwan, EventGiveMeBox] Event start!");
  return;
}
```
