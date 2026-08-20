# StartEvent

`_ZN14CTrcOnOffEvent10StartEventEv`

`CTrcOnOffEvent::StartEvent()`

| 类 | 地址 |
|---|---|
| `CTrcOnOffEvent` | `0x08285aae` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08285aae  _ZN14CTrcOnOffEvent10StartEventEv
#           CTrcOnOffEvent::StartEvent()
# range [0x08285aae, 0x08285aff]
08285aae +0x00:  push   %ebp
08285aaf +0x01:  mov    %esp,%ebp
08285ab1 +0x03:  sub    $0x28,%esp
08285ab4 +0x06:  mov    0x8(%ebp),%eax
08285ab7 +0x09:  movl   $0x1,0x4(%esp)
08285abf +0x11:  mov    %eax,(%esp)
08285ac2 +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
08285ac7 +0x19:  movl   $0x0,0xc(%esp)
08285acf +0x21:  movl   $0x13,0x8(%esp)
08285ad7 +0x29:  movl   $&_ZZN14CTrcOnOffEvent10StartEventEvE12__FUNCTION__,0x4(%esp)
08285adf +0x31:  lea    -0x18(%ebp),%eax
08285ae2 +0x34:  mov    %eax,(%esp)
08285ae5 +0x37:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08285aea +0x3c:  movl   $"Trc On Off Event Start!",0x4(%esp)
08285af2 +0x44:  lea    -0x18(%ebp),%eax
08285af5 +0x47:  mov    %eax,(%esp)
08285af8 +0x4a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08285afd +0x4f:  leave
08285afe +0x50:  ret
08285aff +0x51:  nop
```

## 反编译 C

```c
// CTrcOnOffEvent::StartEvent @ 0x8285aae

/* CTrcOnOffEvent::StartEvent() */

void __thiscall CTrcOnOffEvent::StartEvent(CTrcOnOffEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  cMyTrace::cMyTrace(local_1c,"StartEvent",0x13,0);
  cMyTrace::operator()(local_1c,"Trc On Off Event Start!");
  return;
}
```
