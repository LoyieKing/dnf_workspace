# StartEvent

`_ZN22CEventAdvanceAltarOpen10StartEventE10Word_Param`

`CEventAdvanceAltarOpen::StartEvent(Word_Param)`

| 类 | 地址 |
|---|---|
| `CEventAdvanceAltarOpen` | `0x080e94e2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080e94e2  _ZN22CEventAdvanceAltarOpen10StartEventE10Word_Param
#           CEventAdvanceAltarOpen::StartEvent(Word_Param)
# range [0x080e94e2, 0x080e9533]
080e94e2 +0x00:  push   %ebp
080e94e3 +0x01:  mov    %esp,%ebp
080e94e5 +0x03:  sub    $0x28,%esp
080e94e8 +0x06:  mov    0x8(%ebp),%eax
080e94eb +0x09:  movl   $0x1,0x4(%esp)
080e94f3 +0x11:  mov    %eax,(%esp)
080e94f6 +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
080e94fb +0x19:  movl   $0x0,0xc(%esp)
080e9503 +0x21:  movl   $0x48e,0x8(%esp)
080e950b +0x29:  movl   $&_ZZN22CEventAdvanceAltarOpen10StartEventE10Word_ParamE19__PRETTY_FUNCTION__,0x4(%esp)
080e9513 +0x31:  lea    -0x18(%ebp),%eax
080e9516 +0x34:  mov    %eax,(%esp)
080e9519 +0x37:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
080e951e +0x3c:  movl   $"CEventAdvanceAltarOpen Event Start! ",0x4(%esp)
080e9526 +0x44:  lea    -0x18(%ebp),%eax
080e9529 +0x47:  mov    %eax,(%esp)
080e952c +0x4a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
080e9531 +0x4f:  leave
080e9532 +0x50:  ret
080e9533 +0x51:  nop
```

## 反编译 C

```c
// CEventAdvanceAltarOpen::StartEvent @ 0x80e94e2

/* CEventAdvanceAltarOpen::StartEvent(Word_Param) */

void CEventAdvanceAltarOpen::StartEvent(CEventBase *param_1)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag(param_1,true);
  cMyTrace::cMyTrace(local_1c,"virtual void CEventAdvanceAltarOpen::StartEvent(Word_Param)",0x48e,0)
  ;
  cMyTrace::operator()(local_1c,"CEventAdvanceAltarOpen Event Start! ");
  return;
}
```
