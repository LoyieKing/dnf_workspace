# StartEvent

`_ZN22CBreakAwayPreventEvent10StartEventE10Word_Param`

`CBreakAwayPreventEvent::StartEvent(Word_Param)`

| 类 | 地址 |
|---|---|
| `CBreakAwayPreventEvent` | `0x08109e78` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08109e78  _ZN22CBreakAwayPreventEvent10StartEventE10Word_Param
#           CBreakAwayPreventEvent::StartEvent(Word_Param)
# range [0x08109e78, 0x08109ed5]
08109e78 +0x00:  push   %ebp
08109e79 +0x01:  mov    %esp,%ebp
08109e7b +0x03:  sub    $0x28,%esp
08109e7e +0x06:  mov    0x8(%ebp),%eax
08109e81 +0x09:  movl   $0x1,0x4(%esp)
08109e89 +0x11:  mov    %eax,(%esp)
08109e8c +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
08109e91 +0x19:  movl   $0x1,(%esp)
08109e98 +0x20:  call   08438920 <_ZN27DB_LoadBreakAwayPreventData11makeRequestEb>  ; DB_LoadBreakAwayPreventData::makeRequest(bool)
08109e9d +0x25:  movl   $0x0,0xc(%esp)
08109ea5 +0x2d:  movl   $0x1b,0x8(%esp)
08109ead +0x35:  movl   $&_ZZN22CBreakAwayPreventEvent10StartEventE10Word_ParamE12__FUNCTION__,0x4(%esp)
08109eb5 +0x3d:  lea    -0x18(%ebp),%eax
08109eb8 +0x40:  mov    %eax,(%esp)
08109ebb +0x43:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08109ec0 +0x48:  movl   $"CBreakAwayPreventEvent Start!",0x4(%esp)
08109ec8 +0x50:  lea    -0x18(%ebp),%eax
08109ecb +0x53:  mov    %eax,(%esp)
08109ece +0x56:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08109ed3 +0x5b:  leave
08109ed4 +0x5c:  ret
08109ed5 +0x5d:  nop
```

## 反编译 C

```c
// CBreakAwayPreventEvent::StartEvent @ 0x8109e78

/* CBreakAwayPreventEvent::StartEvent(Word_Param) */

void CBreakAwayPreventEvent::StartEvent(CEventBase *param_1)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag(param_1,true);
  DB_LoadBreakAwayPreventData::makeRequest(true);
  cMyTrace::cMyTrace(local_1c,"StartEvent",0x1b,0);
  cMyTrace::operator()(local_1c,"CBreakAwayPreventEvent Start!");
  return;
}
```
