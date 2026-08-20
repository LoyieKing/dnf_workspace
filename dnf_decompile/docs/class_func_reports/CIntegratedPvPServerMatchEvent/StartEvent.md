# StartEvent

`_ZN30CIntegratedPvPServerMatchEvent10StartEventEv`

`CIntegratedPvPServerMatchEvent::StartEvent()`

| 类 | 地址 |
|---|---|
| `CIntegratedPvPServerMatchEvent` | `0x0811d4a2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0811d4a2  _ZN30CIntegratedPvPServerMatchEvent10StartEventEv
#           CIntegratedPvPServerMatchEvent::StartEvent()
# range [0x0811d4a2, 0x0811d4f3]
0811d4a2 +0x00:  push   %ebp
0811d4a3 +0x01:  mov    %esp,%ebp
0811d4a5 +0x03:  sub    $0x28,%esp
0811d4a8 +0x06:  mov    0x8(%ebp),%eax
0811d4ab +0x09:  movl   $0x1,0x4(%esp)
0811d4b3 +0x11:  mov    %eax,(%esp)
0811d4b6 +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
0811d4bb +0x19:  movl   $0x0,0xc(%esp)
0811d4c3 +0x21:  movl   $0x12,0x8(%esp)
0811d4cb +0x29:  movl   $&_ZZN30CIntegratedPvPServerMatchEvent10StartEventEvE12__FUNCTION__,0x4(%esp)
0811d4d3 +0x31:  lea    -0x18(%ebp),%eax
0811d4d6 +0x34:  mov    %eax,(%esp)
0811d4d9 +0x37:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0811d4de +0x3c:  movl   $"CIntegratedPvPServerMatchEvent Start!",0x4(%esp)
0811d4e6 +0x44:  lea    -0x18(%ebp),%eax
0811d4e9 +0x47:  mov    %eax,(%esp)
0811d4ec +0x4a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0811d4f1 +0x4f:  leave
0811d4f2 +0x50:  ret
0811d4f3 +0x51:  nop
```

## 反编译 C

```c
// CIntegratedPvPServerMatchEvent::StartEvent @ 0x811d4a2

/* CIntegratedPvPServerMatchEvent::StartEvent() */

void __thiscall CIntegratedPvPServerMatchEvent::StartEvent(CIntegratedPvPServerMatchEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  cMyTrace::cMyTrace(local_1c,"StartEvent",0x12,0);
  cMyTrace::operator()(local_1c,"CIntegratedPvPServerMatchEvent Start!");
  return;
}
```
