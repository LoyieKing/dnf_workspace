# EndEvent

`_ZN18CCharacterDayEvent8EndEventEv`

`CCharacterDayEvent::EndEvent()`

| 类 | 地址 |
|---|---|
| `CCharacterDayEvent` | `0x0810a5ec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810a5ec  _ZN18CCharacterDayEvent8EndEventEv
#           CCharacterDayEvent::EndEvent()
# range [0x0810a5ec, 0x0810a63c]
0810a5ec +0x00:  push   %ebp
0810a5ed +0x01:  mov    %esp,%ebp
0810a5ef +0x03:  sub    $0x28,%esp
0810a5f2 +0x06:  mov    0x8(%ebp),%eax
0810a5f5 +0x09:  movl   $0x0,0x4(%esp)
0810a5fd +0x11:  mov    %eax,(%esp)
0810a600 +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
0810a605 +0x19:  movl   $0x0,0xc(%esp)
0810a60d +0x21:  movl   $0x25,0x8(%esp)
0810a615 +0x29:  movl   $&_ZZN18CCharacterDayEvent8EndEventEvE12__FUNCTION__,0x4(%esp)
0810a61d +0x31:  lea    -0x18(%ebp),%eax
0810a620 +0x34:  mov    %eax,(%esp)
0810a623 +0x37:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0810a628 +0x3c:  movl   $"Character Day Event End!",0x4(%esp)
0810a630 +0x44:  lea    -0x18(%ebp),%eax
0810a633 +0x47:  mov    %eax,(%esp)
0810a636 +0x4a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0810a63b +0x4f:  leave
0810a63c +0x50:  ret
```

## 反编译 C

```c
// CCharacterDayEvent::EndEvent @ 0x810a5ec

/* CCharacterDayEvent::EndEvent() */

void __thiscall CCharacterDayEvent::EndEvent(CCharacterDayEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,false);
  cMyTrace::cMyTrace(local_1c,"EndEvent",0x25,0);
  cMyTrace::operator()(local_1c,"Character Day Event End!");
  return;
}
```
