# StartEvent

`_ZN19CTournamentPvPEvent10StartEventE10Word_Param`

`CTournamentPvPEvent::StartEvent(Word_Param)`

| 类 | 地址 |
|---|---|
| `CTournamentPvPEvent` | `0x0828463c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0828463c  _ZN19CTournamentPvPEvent10StartEventE10Word_Param
#           CTournamentPvPEvent::StartEvent(Word_Param)
# range [0x0828463c, 0x0828468d]
0828463c +0x00:  push   %ebp
0828463d +0x01:  mov    %esp,%ebp
0828463f +0x03:  sub    $0x28,%esp
08284642 +0x06:  mov    0x8(%ebp),%eax
08284645 +0x09:  movl   $0x1,0x4(%esp)
0828464d +0x11:  mov    %eax,(%esp)
08284650 +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
08284655 +0x19:  movl   $0x0,0xc(%esp)
0828465d +0x21:  movl   $0x18,0x8(%esp)
08284665 +0x29:  movl   $&_ZZN19CTournamentPvPEvent10StartEventE10Word_ParamE12__FUNCTION__,0x4(%esp)
0828466d +0x31:  lea    -0x18(%ebp),%eax
08284670 +0x34:  mov    %eax,(%esp)
08284673 +0x37:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08284678 +0x3c:  movl   $"Tournament PvP Channel Open Start",0x4(%esp)
08284680 +0x44:  lea    -0x18(%ebp),%eax
08284683 +0x47:  mov    %eax,(%esp)
08284686 +0x4a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0828468b +0x4f:  leave
0828468c +0x50:  ret
0828468d +0x51:  nop
```

## 反编译 C

```c
// CTournamentPvPEvent::StartEvent @ 0x828463c

/* CTournamentPvPEvent::StartEvent(Word_Param) */

void CTournamentPvPEvent::StartEvent(CEventBase *param_1)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag(param_1,true);
  cMyTrace::cMyTrace(local_1c,"StartEvent",0x18,0);
  cMyTrace::operator()(local_1c,"Tournament PvP Channel Open Start");
  return;
}
```
