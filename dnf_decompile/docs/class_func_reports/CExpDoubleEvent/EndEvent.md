# EndEvent

`_ZN15CExpDoubleEvent8EndEventEv`

`CExpDoubleEvent::EndEvent()`

| 类 | 地址 |
|---|---|
| `CExpDoubleEvent` | `0x0849ad72` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0849ad72  _ZN15CExpDoubleEvent8EndEventEv
#           CExpDoubleEvent::EndEvent()
# range [0x0849ad72, 0x0849adcc]
0849ad72 +0x00:  push   %ebp
0849ad73 +0x01:  mov    %esp,%ebp
0849ad75 +0x03:  sub    $0x28,%esp
0849ad78 +0x06:  mov    0x8(%ebp),%eax
0849ad7b +0x09:  movl   $0x0,0x4(%esp)
0849ad83 +0x11:  mov    %eax,(%esp)
0849ad86 +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
0849ad8b +0x19:  mov    0x8(%ebp),%eax
0849ad8e +0x1c:  movl   $0x64,0xc(%eax)
0849ad95 +0x23:  movl   $0x0,0xc(%esp)
0849ad9d +0x2b:  movl   $0x21,0x8(%esp)
0849ada5 +0x33:  movl   $&_ZZN15CExpDoubleEvent8EndEventEvE12__FUNCTION__,0x4(%esp)
0849adad +0x3b:  lea    -0x18(%ebp),%eax
0849adb0 +0x3e:  mov    %eax,(%esp)
0849adb3 +0x41:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0849adb8 +0x46:  movl   $"Exp Double Event End!",0x4(%esp)
0849adc0 +0x4e:  lea    -0x18(%ebp),%eax
0849adc3 +0x51:  mov    %eax,(%esp)
0849adc6 +0x54:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0849adcb +0x59:  leave
0849adcc +0x5a:  ret
```

## 反编译 C

```c
// CExpDoubleEvent::EndEvent @ 0x849ad72

/* CExpDoubleEvent::EndEvent() */

void __thiscall CExpDoubleEvent::EndEvent(CExpDoubleEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,false);
  *(undefined4 *)(this + 0xc) = 100;
  cMyTrace::cMyTrace(local_1c,"EndEvent",0x21,0);
  cMyTrace::operator()(local_1c,"Exp Double Event End!");
  return;
}
```
