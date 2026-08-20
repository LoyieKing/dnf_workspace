# EndEvent

`_ZN17CStabToDeathEvent8EndEventEv`

`CStabToDeathEvent::EndEvent()`

| 类 | 地址 |
|---|---|
| `CStabToDeathEvent` | `0x0827f616` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0827f616  _ZN17CStabToDeathEvent8EndEventEv
#           CStabToDeathEvent::EndEvent()
# range [0x0827f616, 0x0827f666]
0827f616 +0x00:  push   %ebp
0827f617 +0x01:  mov    %esp,%ebp
0827f619 +0x03:  sub    $0x28,%esp
0827f61c +0x06:  mov    0x8(%ebp),%eax
0827f61f +0x09:  movl   $0x0,0x4(%esp)
0827f627 +0x11:  mov    %eax,(%esp)
0827f62a +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
0827f62f +0x19:  movl   $0x0,0xc(%esp)
0827f637 +0x21:  movl   $0x1d,0x8(%esp)
0827f63f +0x29:  movl   $&_ZZN17CStabToDeathEvent8EndEventEvE12__FUNCTION__,0x4(%esp)
0827f647 +0x31:  lea    -0x18(%ebp),%eax
0827f64a +0x34:  mov    %eax,(%esp)
0827f64d +0x37:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0827f652 +0x3c:  movl   $"CStabToDeathEvent End!",0x4(%esp)
0827f65a +0x44:  lea    -0x18(%ebp),%eax
0827f65d +0x47:  mov    %eax,(%esp)
0827f660 +0x4a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0827f665 +0x4f:  leave
0827f666 +0x50:  ret
```

## 反编译 C

```c
// CStabToDeathEvent::EndEvent @ 0x827f616

/* CStabToDeathEvent::EndEvent() */

void __thiscall CStabToDeathEvent::EndEvent(CStabToDeathEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,false);
  cMyTrace::cMyTrace(local_1c,"EndEvent",0x1d,0);
  cMyTrace::operator()(local_1c,"CStabToDeathEvent End!");
  return;
}
```
