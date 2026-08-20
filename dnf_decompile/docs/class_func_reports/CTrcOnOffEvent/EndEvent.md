# EndEvent

`_ZN14CTrcOnOffEvent8EndEventEv`

`CTrcOnOffEvent::EndEvent()`

| 类 | 地址 |
|---|---|
| `CTrcOnOffEvent` | `0x08285b52` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08285b52  _ZN14CTrcOnOffEvent8EndEventEv
#           CTrcOnOffEvent::EndEvent()
# range [0x08285b52, 0x08285ba3]
08285b52 +0x00:  push   %ebp
08285b53 +0x01:  mov    %esp,%ebp
08285b55 +0x03:  sub    $0x28,%esp
08285b58 +0x06:  mov    0x8(%ebp),%eax
08285b5b +0x09:  movl   $0x0,0x4(%esp)
08285b63 +0x11:  mov    %eax,(%esp)
08285b66 +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
08285b6b +0x19:  movl   $0x0,0xc(%esp)
08285b73 +0x21:  movl   $0x1f,0x8(%esp)
08285b7b +0x29:  movl   $&_ZZN14CTrcOnOffEvent8EndEventEvE12__FUNCTION__,0x4(%esp)
08285b83 +0x31:  lea    -0x18(%ebp),%eax
08285b86 +0x34:  mov    %eax,(%esp)
08285b89 +0x37:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08285b8e +0x3c:  movl   $"Trc On Off Event Event End!",0x4(%esp)
08285b96 +0x44:  lea    -0x18(%ebp),%eax
08285b99 +0x47:  mov    %eax,(%esp)
08285b9c +0x4a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08285ba1 +0x4f:  leave
08285ba2 +0x50:  ret
08285ba3 +0x51:  nop
```

## 反编译 C

```c
// CTrcOnOffEvent::EndEvent @ 0x8285b52

/* CTrcOnOffEvent::EndEvent() */

void __thiscall CTrcOnOffEvent::EndEvent(CTrcOnOffEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,false);
  cMyTrace::cMyTrace(local_1c,"EndEvent",0x1f,0);
  cMyTrace::operator()(local_1c,"Trc On Off Event Event End!");
  return;
}
```
