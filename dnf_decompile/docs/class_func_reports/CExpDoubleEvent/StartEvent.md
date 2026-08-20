# StartEvent

`_ZN15CExpDoubleEvent10StartEventEv`

`CExpDoubleEvent::StartEvent()`

| 类 | 地址 |
|---|---|
| `CExpDoubleEvent` | `0x0849acb8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0849acb8  _ZN15CExpDoubleEvent10StartEventEv
#           CExpDoubleEvent::StartEvent()
# range [0x0849acb8, 0x0849ad13]
0849acb8 +0x00:  push   %ebp
0849acb9 +0x01:  mov    %esp,%ebp
0849acbb +0x03:  sub    $0x28,%esp
0849acbe +0x06:  mov    0x8(%ebp),%eax
0849acc1 +0x09:  movl   $0x1,0x4(%esp)
0849acc9 +0x11:  mov    %eax,(%esp)
0849accc +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
0849acd1 +0x19:  mov    0x8(%ebp),%eax
0849acd4 +0x1c:  movl   $0x64,0xc(%eax)
0849acdb +0x23:  movl   $0x0,0xc(%esp)
0849ace3 +0x2b:  movl   $0x13,0x8(%esp)
0849aceb +0x33:  movl   $&_ZZN15CExpDoubleEvent10StartEventEvE12__FUNCTION__,0x4(%esp)
0849acf3 +0x3b:  lea    -0x18(%ebp),%eax
0849acf6 +0x3e:  mov    %eax,(%esp)
0849acf9 +0x41:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0849acfe +0x46:  movl   $"Exp Double Event Start!",0x4(%esp)
0849ad06 +0x4e:  lea    -0x18(%ebp),%eax
0849ad09 +0x51:  mov    %eax,(%esp)
0849ad0c +0x54:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0849ad11 +0x59:  leave
0849ad12 +0x5a:  ret
0849ad13 +0x5b:  nop
```

## 反编译 C

```c
// CExpDoubleEvent::StartEvent @ 0x849acb8

/* CExpDoubleEvent::StartEvent() */

void __thiscall CExpDoubleEvent::StartEvent(CExpDoubleEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  *(undefined4 *)(this + 0xc) = 100;
  cMyTrace::cMyTrace(local_1c,"StartEvent",0x13,0);
  cMyTrace::operator()(local_1c,"Exp Double Event Start!");
  return;
}
```
