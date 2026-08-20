# EndEvent

`_ZN19CPCRoomFatigueEvent8EndEventEv`

`CPCRoomFatigueEvent::EndEvent()`

| 类 | 地址 |
|---|---|
| `CPCRoomFatigueEvent` | `0x082676ce` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082676ce  _ZN19CPCRoomFatigueEvent8EndEventEv
#           CPCRoomFatigueEvent::EndEvent()
# range [0x082676ce, 0x0826771f]
082676ce +0x00:  push   %ebp
082676cf +0x01:  mov    %esp,%ebp
082676d1 +0x03:  sub    $0x28,%esp
082676d4 +0x06:  mov    0x8(%ebp),%eax
082676d7 +0x09:  movl   $0x0,0x4(%esp)
082676df +0x11:  mov    %eax,(%esp)
082676e2 +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
082676e7 +0x19:  movl   $0x0,0xc(%esp)
082676ef +0x21:  movl   $0x21,0x8(%esp)
082676f7 +0x29:  movl   $&_ZZN19CPCRoomFatigueEvent8EndEventEvE12__FUNCTION__,0x4(%esp)
082676ff +0x31:  lea    -0x18(%ebp),%eax
08267702 +0x34:  mov    %eax,(%esp)
08267705 +0x37:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0826770a +0x3c:  movl   $"PC Room Fatigue Event End!",0x4(%esp)
08267712 +0x44:  lea    -0x18(%ebp),%eax
08267715 +0x47:  mov    %eax,(%esp)
08267718 +0x4a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0826771d +0x4f:  leave
0826771e +0x50:  ret
0826771f +0x51:  nop
```

## 反编译 C

```c
// CPCRoomFatigueEvent::EndEvent @ 0x82676ce

/* CPCRoomFatigueEvent::EndEvent() */

void __thiscall CPCRoomFatigueEvent::EndEvent(CPCRoomFatigueEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,false);
  cMyTrace::cMyTrace(local_1c,"EndEvent",0x21,0);
  cMyTrace::operator()(local_1c,"PC Room Fatigue Event End!");
  return;
}
```
