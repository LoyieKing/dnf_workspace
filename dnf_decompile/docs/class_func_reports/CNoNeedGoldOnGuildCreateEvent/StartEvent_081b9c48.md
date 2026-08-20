# StartEvent

`_ZN29CNoNeedGoldOnGuildCreateEvent10StartEventE10Word_Param`

`CNoNeedGoldOnGuildCreateEvent::StartEvent(Word_Param)`

| 类 | 地址 |
|---|---|
| `CNoNeedGoldOnGuildCreateEvent` | `0x081b9c48` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b9c48  _ZN29CNoNeedGoldOnGuildCreateEvent10StartEventE10Word_Param
#           CNoNeedGoldOnGuildCreateEvent::StartEvent(Word_Param)
# range [0x081b9c48, 0x081b9c99]
081b9c48 +0x00:  push   %ebp
081b9c49 +0x01:  mov    %esp,%ebp
081b9c4b +0x03:  sub    $0x28,%esp
081b9c4e +0x06:  mov    0x8(%ebp),%eax
081b9c51 +0x09:  movl   $0x1,0x4(%esp)
081b9c59 +0x11:  mov    %eax,(%esp)
081b9c5c +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
081b9c61 +0x19:  movl   $0x0,0xc(%esp)
081b9c69 +0x21:  movl   $0x18,0x8(%esp)
081b9c71 +0x29:  movl   $&_ZZN29CNoNeedGoldOnGuildCreateEvent10StartEventE10Word_ParamE12__FUNCTION__,0x4(%esp)
081b9c79 +0x31:  lea    -0x18(%ebp),%eax
081b9c7c +0x34:  mov    %eax,(%esp)
081b9c7f +0x37:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081b9c84 +0x3c:  movl   $"No Need Money On Guild Create Event Start!",0x4(%esp)
081b9c8c +0x44:  lea    -0x18(%ebp),%eax
081b9c8f +0x47:  mov    %eax,(%esp)
081b9c92 +0x4a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081b9c97 +0x4f:  leave
081b9c98 +0x50:  ret
081b9c99 +0x51:  nop
```

## 反编译 C

```c
// CNoNeedGoldOnGuildCreateEvent::StartEvent @ 0x81b9c48

/* CNoNeedGoldOnGuildCreateEvent::StartEvent(Word_Param) */

void CNoNeedGoldOnGuildCreateEvent::StartEvent(CEventBase *param_1)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag(param_1,true);
  cMyTrace::cMyTrace(local_1c,"StartEvent",0x18,0);
  cMyTrace::operator()(local_1c,"No Need Money On Guild Create Event Start!");
  return;
}
```
