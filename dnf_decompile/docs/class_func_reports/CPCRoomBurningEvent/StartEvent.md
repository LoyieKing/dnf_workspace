# StartEvent

`_ZN19CPCRoomBurningEvent10StartEventEv`

`CPCRoomBurningEvent::StartEvent()`

| 类 | 地址 |
|---|---|
| `CPCRoomBurningEvent` | `0x08267250` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08267250  _ZN19CPCRoomBurningEvent10StartEventEv
#           CPCRoomBurningEvent::StartEvent()
# range [0x08267250, 0x082672ab]
08267250 +0x00:  push   %ebp
08267251 +0x01:  mov    %esp,%ebp
08267253 +0x03:  sub    $0x28,%esp
08267256 +0x06:  mov    0x8(%ebp),%eax
08267259 +0x09:  movl   $0x1,0x4(%esp)
08267261 +0x11:  mov    %eax,(%esp)
08267264 +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
08267269 +0x19:  mov    0x8(%ebp),%eax
0826726c +0x1c:  movl   $0x64,0xc(%eax)
08267273 +0x23:  movl   $0x0,0xc(%esp)
0826727b +0x2b:  movl   $0x14,0x8(%esp)
08267283 +0x33:  movl   $&_ZZN19CPCRoomBurningEvent10StartEventEvE12__FUNCTION__,0x4(%esp)
0826728b +0x3b:  lea    -0x18(%ebp),%eax
0826728e +0x3e:  mov    %eax,(%esp)
08267291 +0x41:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08267296 +0x46:  movl   $"PC Room Burning Event Start!",0x4(%esp)
0826729e +0x4e:  lea    -0x18(%ebp),%eax
082672a1 +0x51:  mov    %eax,(%esp)
082672a4 +0x54:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
082672a9 +0x59:  leave
082672aa +0x5a:  ret
082672ab +0x5b:  nop
```

## 反编译 C

```c
// CPCRoomBurningEvent::StartEvent @ 0x8267250

/* CPCRoomBurningEvent::StartEvent() */

void __thiscall CPCRoomBurningEvent::StartEvent(CPCRoomBurningEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  *(undefined4 *)(this + 0xc) = 100;
  cMyTrace::cMyTrace(local_1c,"StartEvent",0x14,0);
  cMyTrace::operator()(local_1c,"PC Room Burning Event Start!");
  return;
}
```
