# StartEvent

`_ZN16Arad_MomijiEvent10StartEventEv`

`Arad_MomijiEvent::StartEvent()`

| 类 | 地址 |
|---|---|
| `Arad_MomijiEvent` | `0x0819e7a2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0819e7a2  _ZN16Arad_MomijiEvent10StartEventEv
#           Arad_MomijiEvent::StartEvent()
# range [0x0819e7a2, 0x0819e7f3]
0819e7a2 +0x00:  push   %ebp
0819e7a3 +0x01:  mov    %esp,%ebp
0819e7a5 +0x03:  sub    $0x28,%esp
0819e7a8 +0x06:  movl   $0x0,0xc(%esp)
0819e7b0 +0x0e:  movl   $0x14,0x8(%esp)
0819e7b8 +0x16:  movl   $&_ZZN16Arad_MomijiEvent10StartEventEvE19__PRETTY_FUNCTION__,0x4(%esp)
0819e7c0 +0x1e:  lea    -0x18(%ebp),%eax
0819e7c3 +0x21:  mov    %eax,(%esp)
0819e7c6 +0x24:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0819e7cb +0x29:  movl   $"[MOMIJI_EVENT] Event Start.",0x4(%esp)
0819e7d3 +0x31:  lea    -0x18(%ebp),%eax
0819e7d6 +0x34:  mov    %eax,(%esp)
0819e7d9 +0x37:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0819e7de +0x3c:  mov    0x8(%ebp),%eax
0819e7e1 +0x3f:  movl   $0x1,0x4(%esp)
0819e7e9 +0x47:  mov    %eax,(%esp)
0819e7ec +0x4a:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
0819e7f1 +0x4f:  leave
0819e7f2 +0x50:  ret
0819e7f3 +0x51:  nop
```

## 反编译 C

```c
// Arad_MomijiEvent::StartEvent @ 0x819e7a2

/* Arad_MomijiEvent::StartEvent() */

void __thiscall Arad_MomijiEvent::StartEvent(Arad_MomijiEvent *this)

{
  cMyTrace local_1c [24];
  
  cMyTrace::cMyTrace(local_1c,"virtual void Arad_MomijiEvent::StartEvent()",0x14,0);
  cMyTrace::operator()(local_1c,"[MOMIJI_EVENT] Event Start.");
  CEventBase::SetEventFlag((CEventBase *)this,true);
  return;
}
```
