# StartEvent

`_ZN17CStabToDeathEvent10StartEventE10Word_Param`

`CStabToDeathEvent::StartEvent(Word_Param)`

| 类 | 地址 |
|---|---|
| `CStabToDeathEvent` | `0x0827f5c4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0827f5c4  _ZN17CStabToDeathEvent10StartEventE10Word_Param
#           CStabToDeathEvent::StartEvent(Word_Param)
# range [0x0827f5c4, 0x0827f615]
0827f5c4 +0x00:  push   %ebp
0827f5c5 +0x01:  mov    %esp,%ebp
0827f5c7 +0x03:  sub    $0x28,%esp
0827f5ca +0x06:  mov    0x8(%ebp),%eax
0827f5cd +0x09:  movl   $0x1,0x4(%esp)
0827f5d5 +0x11:  mov    %eax,(%esp)
0827f5d8 +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
0827f5dd +0x19:  movl   $0x0,0xc(%esp)
0827f5e5 +0x21:  movl   $0x17,0x8(%esp)
0827f5ed +0x29:  movl   $&_ZZN17CStabToDeathEvent10StartEventE10Word_ParamE12__FUNCTION__,0x4(%esp)
0827f5f5 +0x31:  lea    -0x18(%ebp),%eax
0827f5f8 +0x34:  mov    %eax,(%esp)
0827f5fb +0x37:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0827f600 +0x3c:  movl   $"CStabToDeathEvent Start!",0x4(%esp)
0827f608 +0x44:  lea    -0x18(%ebp),%eax
0827f60b +0x47:  mov    %eax,(%esp)
0827f60e +0x4a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0827f613 +0x4f:  leave
0827f614 +0x50:  ret
0827f615 +0x51:  nop
```

## 反编译 C

```c
// CStabToDeathEvent::StartEvent @ 0x827f5c4

/* CStabToDeathEvent::StartEvent(Word_Param) */

void CStabToDeathEvent::StartEvent(CEventBase *param_1)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag(param_1,true);
  cMyTrace::cMyTrace(local_1c,"StartEvent",0x17,0);
  cMyTrace::operator()(local_1c,"CStabToDeathEvent Start!");
  return;
}
```
