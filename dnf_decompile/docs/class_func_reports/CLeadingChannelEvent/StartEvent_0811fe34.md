# StartEvent

`_ZN20CLeadingChannelEvent10StartEventE10Word_Param`

`CLeadingChannelEvent::StartEvent(Word_Param)`

| 类 | 地址 |
|---|---|
| `CLeadingChannelEvent` | `0x0811fe34` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0811fe34  _ZN20CLeadingChannelEvent10StartEventE10Word_Param
#           CLeadingChannelEvent::StartEvent(Word_Param)
# range [0x0811fe34, 0x0811fe91]
0811fe34 +0x00:  push   %ebp
0811fe35 +0x01:  mov    %esp,%ebp
0811fe37 +0x03:  sub    $0x28,%esp
0811fe3a +0x06:  mov    0x8(%ebp),%eax
0811fe3d +0x09:  movl   $0x1,0x4(%esp)
0811fe45 +0x11:  mov    %eax,(%esp)
0811fe48 +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
0811fe4d +0x19:  movzwl 0xc(%ebp),%eax
0811fe51 +0x1d:  movzwl %ax,%edx
0811fe54 +0x20:  mov    0x8(%ebp),%eax
0811fe57 +0x23:  mov    %edx,0xc(%eax)
0811fe5a +0x26:  movl   $0x0,0xc(%esp)
0811fe62 +0x2e:  movl   $0x1b,0x8(%esp)
0811fe6a +0x36:  movl   $&_ZZN20CLeadingChannelEvent10StartEventE10Word_ParamE12__FUNCTION__,0x4(%esp)
0811fe72 +0x3e:  lea    -0x18(%ebp),%eax
0811fe75 +0x41:  mov    %eax,(%esp)
0811fe78 +0x44:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0811fe7d +0x49:  movl   $"Leading Channel Event Start!",0x4(%esp)
0811fe85 +0x51:  lea    -0x18(%ebp),%eax
0811fe88 +0x54:  mov    %eax,(%esp)
0811fe8b +0x57:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0811fe90 +0x5c:  leave
0811fe91 +0x5d:  ret
```

## 反编译 C

```c
// CLeadingChannelEvent::StartEvent @ 0x811fe34

/* CLeadingChannelEvent::StartEvent(Word_Param) */

void __thiscall CLeadingChannelEvent::StartEvent(CLeadingChannelEvent *this,ushort param_2)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  *(uint *)(this + 0xc) = (uint)param_2;
  cMyTrace::cMyTrace(local_1c,"StartEvent",0x1b,0);
  cMyTrace::operator()(local_1c,"Leading Channel Event Start!");
  return;
}
```
