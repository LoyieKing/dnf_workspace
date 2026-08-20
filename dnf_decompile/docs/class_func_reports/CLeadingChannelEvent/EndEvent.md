# EndEvent

`_ZN20CLeadingChannelEvent8EndEventEv`

`CLeadingChannelEvent::EndEvent()`

| 类 | 地址 |
|---|---|
| `CLeadingChannelEvent` | `0x0811fe92` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0811fe92  _ZN20CLeadingChannelEvent8EndEventEv
#           CLeadingChannelEvent::EndEvent()
# range [0x0811fe92, 0x0811feec]
0811fe92 +0x00:  push   %ebp
0811fe93 +0x01:  mov    %esp,%ebp
0811fe95 +0x03:  sub    $0x28,%esp
0811fe98 +0x06:  mov    0x8(%ebp),%eax
0811fe9b +0x09:  movl   $0x0,0x4(%esp)
0811fea3 +0x11:  mov    %eax,(%esp)
0811fea6 +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
0811feab +0x19:  mov    0x8(%ebp),%eax
0811feae +0x1c:  movl   $0x64,0xc(%eax)
0811feb5 +0x23:  movl   $0x0,0xc(%esp)
0811febd +0x2b:  movl   $0x23,0x8(%esp)
0811fec5 +0x33:  movl   $&_ZZN20CLeadingChannelEvent8EndEventEvE12__FUNCTION__,0x4(%esp)
0811fecd +0x3b:  lea    -0x18(%ebp),%eax
0811fed0 +0x3e:  mov    %eax,(%esp)
0811fed3 +0x41:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0811fed8 +0x46:  movl   $"Leading Channel Event End!",0x4(%esp)
0811fee0 +0x4e:  lea    -0x18(%ebp),%eax
0811fee3 +0x51:  mov    %eax,(%esp)
0811fee6 +0x54:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0811feeb +0x59:  leave
0811feec +0x5a:  ret
```

## 反编译 C

```c
// CLeadingChannelEvent::EndEvent @ 0x811fe92

/* CLeadingChannelEvent::EndEvent() */

void __thiscall CLeadingChannelEvent::EndEvent(CLeadingChannelEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,false);
  *(undefined4 *)(this + 0xc) = 100;
  cMyTrace::cMyTrace(local_1c,"EndEvent",0x23,0);
  cMyTrace::operator()(local_1c,"Leading Channel Event End!");
  return;
}
```
