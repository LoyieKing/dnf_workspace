# StartEvent

`_ZN21GiveGrowCreatureEvent10StartEventE10Word_Param`

`GiveGrowCreatureEvent::StartEvent(Word_Param)`

| 类 | 地址 |
|---|---|
| `GiveGrowCreatureEvent` | `0x081b6a18` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b6a18  _ZN21GiveGrowCreatureEvent10StartEventE10Word_Param
#           GiveGrowCreatureEvent::StartEvent(Word_Param)
# range [0x081b6a18, 0x081b6a69]
081b6a18 +0x00:  push   %ebp
081b6a19 +0x01:  mov    %esp,%ebp
081b6a1b +0x03:  sub    $0x28,%esp
081b6a1e +0x06:  mov    0x8(%ebp),%eax
081b6a21 +0x09:  movl   $0x1,0x4(%esp)
081b6a29 +0x11:  mov    %eax,(%esp)
081b6a2c +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
081b6a31 +0x19:  movl   $0x0,0xc(%esp)
081b6a39 +0x21:  movl   $0x1e,0x8(%esp)
081b6a41 +0x29:  movl   $&_ZZN21GiveGrowCreatureEvent10StartEventE10Word_ParamE19__PRETTY_FUNCTION__,0x4(%esp)
081b6a49 +0x31:  lea    -0x18(%ebp),%eax
081b6a4c +0x34:  mov    %eax,(%esp)
081b6a4f +0x37:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081b6a54 +0x3c:  movl   $"GiveGrowCreatureEvent Event start! [monitor request]",0x4(%esp)
081b6a5c +0x44:  lea    -0x18(%ebp),%eax
081b6a5f +0x47:  mov    %eax,(%esp)
081b6a62 +0x4a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081b6a67 +0x4f:  leave
081b6a68 +0x50:  ret
081b6a69 +0x51:  nop
```

## 反编译 C

```c
// GiveGrowCreatureEvent::StartEvent @ 0x81b6a18

/* GiveGrowCreatureEvent::StartEvent(Word_Param) */

void GiveGrowCreatureEvent::StartEvent(CEventBase *param_1)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag(param_1,true);
  cMyTrace::cMyTrace(local_1c,"virtual void GiveGrowCreatureEvent::StartEvent(Word_Param)",0x1e,0);
  cMyTrace::operator()(local_1c,"GiveGrowCreatureEvent Event start! [monitor request]");
  return;
}
```
