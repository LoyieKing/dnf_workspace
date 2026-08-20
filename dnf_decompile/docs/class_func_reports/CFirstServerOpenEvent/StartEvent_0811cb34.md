# StartEvent

`_ZN21CFirstServerOpenEvent10StartEventE10Word_Param`

`CFirstServerOpenEvent::StartEvent(Word_Param)`

| 类 | 地址 |
|---|---|
| `CFirstServerOpenEvent` | `0x0811cb34` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0811cb34  _ZN21CFirstServerOpenEvent10StartEventE10Word_Param
#           CFirstServerOpenEvent::StartEvent(Word_Param)
# range [0x0811cb34, 0x0811cb85]
0811cb34 +0x00:  push   %ebp
0811cb35 +0x01:  mov    %esp,%ebp
0811cb37 +0x03:  sub    $0x28,%esp
0811cb3a +0x06:  mov    0x8(%ebp),%eax
0811cb3d +0x09:  movl   $0x1,0x4(%esp)
0811cb45 +0x11:  mov    %eax,(%esp)
0811cb48 +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
0811cb4d +0x19:  movl   $0x0,0xc(%esp)
0811cb55 +0x21:  movl   $0x2e,0x8(%esp)
0811cb5d +0x29:  movl   $&_ZZN21CFirstServerOpenEvent10StartEventE10Word_ParamE12__FUNCTION__,0x4(%esp)
0811cb65 +0x31:  lea    -0x18(%ebp),%eax
0811cb68 +0x34:  mov    %eax,(%esp)
0811cb6b +0x37:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0811cb70 +0x3c:  movl   $"First Server Open Event Start!",0x4(%esp)
0811cb78 +0x44:  lea    -0x18(%ebp),%eax
0811cb7b +0x47:  mov    %eax,(%esp)
0811cb7e +0x4a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0811cb83 +0x4f:  leave
0811cb84 +0x50:  ret
0811cb85 +0x51:  nop
```

## 反编译 C

```c
// CFirstServerOpenEvent::StartEvent @ 0x811cb34

/* CFirstServerOpenEvent::StartEvent(Word_Param) */

void CFirstServerOpenEvent::StartEvent(CEventBase *param_1)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag(param_1,true);
  cMyTrace::cMyTrace(local_1c,"StartEvent",0x2e,0);
  cMyTrace::operator()(local_1c,"First Server Open Event Start!");
  return;
}
```
