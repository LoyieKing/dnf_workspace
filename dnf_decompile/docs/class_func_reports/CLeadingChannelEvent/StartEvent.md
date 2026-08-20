# StartEvent

`_ZN20CLeadingChannelEvent10StartEventEv`

`CLeadingChannelEvent::StartEvent()`

| 类 | 地址 |
|---|---|
| `CLeadingChannelEvent` | `0x0811fdd8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0811fdd8  _ZN20CLeadingChannelEvent10StartEventEv
#           CLeadingChannelEvent::StartEvent()
# range [0x0811fdd8, 0x0811fe33]
0811fdd8 +0x00:  push   %ebp
0811fdd9 +0x01:  mov    %esp,%ebp
0811fddb +0x03:  sub    $0x28,%esp
0811fdde +0x06:  mov    0x8(%ebp),%eax
0811fde1 +0x09:  movl   $0x1,0x4(%esp)
0811fde9 +0x11:  mov    %eax,(%esp)
0811fdec +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
0811fdf1 +0x19:  mov    0x8(%ebp),%eax
0811fdf4 +0x1c:  movl   $0x64,0xc(%eax)
0811fdfb +0x23:  movl   $0x0,0xc(%esp)
0811fe03 +0x2b:  movl   $0x13,0x8(%esp)
0811fe0b +0x33:  movl   $&_ZZN20CLeadingChannelEvent10StartEventEvE12__FUNCTION__,0x4(%esp)
0811fe13 +0x3b:  lea    -0x18(%ebp),%eax
0811fe16 +0x3e:  mov    %eax,(%esp)
0811fe19 +0x41:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0811fe1e +0x46:  movl   $"Leading Channel Event Start!",0x4(%esp)
0811fe26 +0x4e:  lea    -0x18(%ebp),%eax
0811fe29 +0x51:  mov    %eax,(%esp)
0811fe2c +0x54:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0811fe31 +0x59:  leave
0811fe32 +0x5a:  ret
0811fe33 +0x5b:  nop
```

## 反编译 C

```c
// CLeadingChannelEvent::StartEvent @ 0x811fdd8

/* CLeadingChannelEvent::StartEvent() */

void __thiscall CLeadingChannelEvent::StartEvent(CLeadingChannelEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  *(undefined4 *)(this + 0xc) = 100;
  cMyTrace::cMyTrace(local_1c,"StartEvent",0x13,0);
  cMyTrace::operator()(local_1c,"Leading Channel Event Start!");
  return;
}
```
