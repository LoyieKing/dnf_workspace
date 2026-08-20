# StartEvent

`_ZN14EventGiveMeBox10StartEventE10Word_Param`

`EventGiveMeBox::StartEvent(Word_Param)`

| 类 | 地址 |
|---|---|
| `EventGiveMeBox` | `0x08164a6c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08164a6c  _ZN14EventGiveMeBox10StartEventE10Word_Param
#           EventGiveMeBox::StartEvent(Word_Param)
# range [0x08164a6c, 0x08164abd]
08164a6c +0x00:  push   %ebp
08164a6d +0x01:  mov    %esp,%ebp
08164a6f +0x03:  sub    $0x28,%esp
08164a72 +0x06:  mov    0x8(%ebp),%eax
08164a75 +0x09:  movl   $0x1,0x4(%esp)
08164a7d +0x11:  mov    %eax,(%esp)
08164a80 +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
08164a85 +0x19:  movl   $0x0,0xc(%esp)
08164a8d +0x21:  movl   $0x17,0x8(%esp)
08164a95 +0x29:  movl   $&_ZZN14EventGiveMeBox10StartEventE10Word_ParamE19__PRETTY_FUNCTION__,0x4(%esp)
08164a9d +0x31:  lea    -0x18(%ebp),%eax
08164aa0 +0x34:  mov    %eax,(%esp)
08164aa3 +0x37:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08164aa8 +0x3c:  movl   $"[Taiwan, EventGiveMeBox] Event start!",0x4(%esp)
08164ab0 +0x44:  lea    -0x18(%ebp),%eax
08164ab3 +0x47:  mov    %eax,(%esp)
08164ab6 +0x4a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08164abb +0x4f:  leave
08164abc +0x50:  ret
08164abd +0x51:  nop
```

## 反编译 C

```c
// EventGiveMeBox::StartEvent @ 0x8164a6c

/* EventGiveMeBox::StartEvent(Word_Param) */

void EventGiveMeBox::StartEvent(CEventBase *param_1)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag(param_1,true);
  cMyTrace::cMyTrace(local_1c,"virtual void EventGiveMeBox::StartEvent(Word_Param)",0x17,0);
  cMyTrace::operator()(local_1c,"[Taiwan, EventGiveMeBox] Event start!");
  return;
}
```
