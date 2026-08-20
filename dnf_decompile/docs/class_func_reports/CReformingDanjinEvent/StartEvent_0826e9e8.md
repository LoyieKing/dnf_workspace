# StartEvent

`_ZN21CReformingDanjinEvent10StartEventE10Word_Param`

`CReformingDanjinEvent::StartEvent(Word_Param)`

| 类 | 地址 |
|---|---|
| `CReformingDanjinEvent` | `0x0826e9e8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0826e9e8  _ZN21CReformingDanjinEvent10StartEventE10Word_Param
#           CReformingDanjinEvent::StartEvent(Word_Param)
# range [0x0826e9e8, 0x0826ea39]
0826e9e8 +0x00:  push   %ebp
0826e9e9 +0x01:  mov    %esp,%ebp
0826e9eb +0x03:  sub    $0x28,%esp
0826e9ee +0x06:  mov    0x8(%ebp),%eax
0826e9f1 +0x09:  movl   $0x1,0x4(%esp)
0826e9f9 +0x11:  mov    %eax,(%esp)
0826e9fc +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
0826ea01 +0x19:  movl   $0x0,0xc(%esp)
0826ea09 +0x21:  movl   $0x19,0x8(%esp)
0826ea11 +0x29:  movl   $&_ZZN21CReformingDanjinEvent10StartEventE10Word_ParamE12__FUNCTION__,0x4(%esp)
0826ea19 +0x31:  lea    -0x18(%ebp),%eax
0826ea1c +0x34:  mov    %eax,(%esp)
0826ea1f +0x37:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0826ea24 +0x3c:  movl   $"Reforming Danjin Event Start!",0x4(%esp)
0826ea2c +0x44:  lea    -0x18(%ebp),%eax
0826ea2f +0x47:  mov    %eax,(%esp)
0826ea32 +0x4a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0826ea37 +0x4f:  leave
0826ea38 +0x50:  ret
0826ea39 +0x51:  nop
```

## 反编译 C

```c
// CReformingDanjinEvent::StartEvent @ 0x826e9e8

/* CReformingDanjinEvent::StartEvent(Word_Param) */

void CReformingDanjinEvent::StartEvent(CEventBase *param_1)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag(param_1,true);
  cMyTrace::cMyTrace(local_1c,"StartEvent",0x19,0);
  cMyTrace::operator()(local_1c,"Reforming Danjin Event Start!");
  return;
}
```
