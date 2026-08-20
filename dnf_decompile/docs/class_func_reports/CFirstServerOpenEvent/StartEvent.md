# StartEvent

`_ZN21CFirstServerOpenEvent10StartEventEv`

`CFirstServerOpenEvent::StartEvent()`

| 类 | 地址 |
|---|---|
| `CFirstServerOpenEvent` | `0x0811cae2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0811cae2  _ZN21CFirstServerOpenEvent10StartEventEv
#           CFirstServerOpenEvent::StartEvent()
# range [0x0811cae2, 0x0811cb33]
0811cae2 +0x00:  push   %ebp
0811cae3 +0x01:  mov    %esp,%ebp
0811cae5 +0x03:  sub    $0x28,%esp
0811cae8 +0x06:  mov    0x8(%ebp),%eax
0811caeb +0x09:  movl   $0x1,0x4(%esp)
0811caf3 +0x11:  mov    %eax,(%esp)
0811caf6 +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
0811cafb +0x19:  movl   $0x0,0xc(%esp)
0811cb03 +0x21:  movl   $0x20,0x8(%esp)
0811cb0b +0x29:  movl   $&_ZZN21CFirstServerOpenEvent10StartEventEvE12__FUNCTION__,0x4(%esp)
0811cb13 +0x31:  lea    -0x18(%ebp),%eax
0811cb16 +0x34:  mov    %eax,(%esp)
0811cb19 +0x37:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0811cb1e +0x3c:  movl   $"First Server Open Event Start!",0x4(%esp)
0811cb26 +0x44:  lea    -0x18(%ebp),%eax
0811cb29 +0x47:  mov    %eax,(%esp)
0811cb2c +0x4a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0811cb31 +0x4f:  leave
0811cb32 +0x50:  ret
0811cb33 +0x51:  nop
```

## 反编译 C

```c
// CFirstServerOpenEvent::StartEvent @ 0x811cae2

/* CFirstServerOpenEvent::StartEvent() */

void __thiscall CFirstServerOpenEvent::StartEvent(CFirstServerOpenEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  cMyTrace::cMyTrace(local_1c,"StartEvent",0x20,0);
  cMyTrace::operator()(local_1c,"First Server Open Event Start!");
  return;
}
```
