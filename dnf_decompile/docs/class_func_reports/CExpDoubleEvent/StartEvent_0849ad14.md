# StartEvent

`_ZN15CExpDoubleEvent10StartEventE10Word_Param`

`CExpDoubleEvent::StartEvent(Word_Param)`

| 类 | 地址 |
|---|---|
| `CExpDoubleEvent` | `0x0849ad14` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0849ad14  _ZN15CExpDoubleEvent10StartEventE10Word_Param
#           CExpDoubleEvent::StartEvent(Word_Param)
# range [0x0849ad14, 0x0849ad71]
0849ad14 +0x00:  push   %ebp
0849ad15 +0x01:  mov    %esp,%ebp
0849ad17 +0x03:  sub    $0x28,%esp
0849ad1a +0x06:  mov    0x8(%ebp),%eax
0849ad1d +0x09:  movl   $0x1,0x4(%esp)
0849ad25 +0x11:  mov    %eax,(%esp)
0849ad28 +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
0849ad2d +0x19:  movzwl 0xc(%ebp),%eax
0849ad31 +0x1d:  movzwl %ax,%edx
0849ad34 +0x20:  mov    0x8(%ebp),%eax
0849ad37 +0x23:  mov    %edx,0xc(%eax)
0849ad3a +0x26:  movl   $0x0,0xc(%esp)
0849ad42 +0x2e:  movl   $0x1a,0x8(%esp)
0849ad4a +0x36:  movl   $&_ZZN15CExpDoubleEvent10StartEventE10Word_ParamE12__FUNCTION__,0x4(%esp)
0849ad52 +0x3e:  lea    -0x18(%ebp),%eax
0849ad55 +0x41:  mov    %eax,(%esp)
0849ad58 +0x44:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0849ad5d +0x49:  movl   $"Exp Double Event Start!",0x4(%esp)
0849ad65 +0x51:  lea    -0x18(%ebp),%eax
0849ad68 +0x54:  mov    %eax,(%esp)
0849ad6b +0x57:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0849ad70 +0x5c:  leave
0849ad71 +0x5d:  ret
```

## 反编译 C

```c
// CExpDoubleEvent::StartEvent @ 0x849ad14

/* CExpDoubleEvent::StartEvent(Word_Param) */

void __thiscall CExpDoubleEvent::StartEvent(CExpDoubleEvent *this,ushort param_2)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  *(uint *)(this + 0xc) = (uint)param_2;
  cMyTrace::cMyTrace(local_1c,"StartEvent",0x1a,0);
  cMyTrace::operator()(local_1c,"Exp Double Event Start!");
  return;
}
```
