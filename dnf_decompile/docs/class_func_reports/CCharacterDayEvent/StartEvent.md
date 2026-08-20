# StartEvent

`_ZN18CCharacterDayEvent10StartEventEv`

`CCharacterDayEvent::StartEvent()`

| 类 | 地址 |
|---|---|
| `CCharacterDayEvent` | `0x0810a53c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810a53c  _ZN18CCharacterDayEvent10StartEventEv
#           CCharacterDayEvent::StartEvent()
# range [0x0810a53c, 0x0810a58d]
0810a53c +0x00:  push   %ebp
0810a53d +0x01:  mov    %esp,%ebp
0810a53f +0x03:  sub    $0x28,%esp
0810a542 +0x06:  mov    0x8(%ebp),%eax
0810a545 +0x09:  movl   $0x1,0x4(%esp)
0810a54d +0x11:  mov    %eax,(%esp)
0810a550 +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
0810a555 +0x19:  movl   $0x0,0xc(%esp)
0810a55d +0x21:  movl   $0x17,0x8(%esp)
0810a565 +0x29:  movl   $&_ZZN18CCharacterDayEvent10StartEventEvE12__FUNCTION__,0x4(%esp)
0810a56d +0x31:  lea    -0x18(%ebp),%eax
0810a570 +0x34:  mov    %eax,(%esp)
0810a573 +0x37:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0810a578 +0x3c:  movl   $"Character Day Event Start!",0x4(%esp)
0810a580 +0x44:  lea    -0x18(%ebp),%eax
0810a583 +0x47:  mov    %eax,(%esp)
0810a586 +0x4a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0810a58b +0x4f:  leave
0810a58c +0x50:  ret
0810a58d +0x51:  nop
```

## 反编译 C

```c
// CCharacterDayEvent::StartEvent @ 0x810a53c

/* CCharacterDayEvent::StartEvent() */

void __thiscall CCharacterDayEvent::StartEvent(CCharacterDayEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  cMyTrace::cMyTrace(local_1c,"StartEvent",0x17,0);
  cMyTrace::operator()(local_1c,"Character Day Event Start!");
  return;
}
```
