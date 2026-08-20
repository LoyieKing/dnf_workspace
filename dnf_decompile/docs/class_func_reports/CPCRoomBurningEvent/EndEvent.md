# EndEvent

`_ZN19CPCRoomBurningEvent8EndEventEv`

`CPCRoomBurningEvent::EndEvent()`

| 类 | 地址 |
|---|---|
| `CPCRoomBurningEvent` | `0x0826730a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0826730a  _ZN19CPCRoomBurningEvent8EndEventEv
#           CPCRoomBurningEvent::EndEvent()
# range [0x0826730a, 0x08267365]
0826730a +0x00:  push   %ebp
0826730b +0x01:  mov    %esp,%ebp
0826730d +0x03:  sub    $0x28,%esp
08267310 +0x06:  mov    0x8(%ebp),%eax
08267313 +0x09:  movl   $0x0,0x4(%esp)
0826731b +0x11:  mov    %eax,(%esp)
0826731e +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
08267323 +0x19:  mov    0x8(%ebp),%eax
08267326 +0x1c:  movl   $0x64,0xc(%eax)
0826732d +0x23:  movl   $0x0,0xc(%esp)
08267335 +0x2b:  movl   $0x24,0x8(%esp)
0826733d +0x33:  movl   $&_ZZN19CPCRoomBurningEvent8EndEventEvE12__FUNCTION__,0x4(%esp)
08267345 +0x3b:  lea    -0x18(%ebp),%eax
08267348 +0x3e:  mov    %eax,(%esp)
0826734b +0x41:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08267350 +0x46:  movl   $"PC Room Burning Event End!",0x4(%esp)
08267358 +0x4e:  lea    -0x18(%ebp),%eax
0826735b +0x51:  mov    %eax,(%esp)
0826735e +0x54:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08267363 +0x59:  leave
08267364 +0x5a:  ret
08267365 +0x5b:  nop
```

## 反编译 C

```c
// CPCRoomBurningEvent::EndEvent @ 0x826730a

/* CPCRoomBurningEvent::EndEvent() */

void __thiscall CPCRoomBurningEvent::EndEvent(CPCRoomBurningEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,false);
  *(undefined4 *)(this + 0xc) = 100;
  cMyTrace::cMyTrace(local_1c,"EndEvent",0x24,0);
  cMyTrace::operator()(local_1c,"PC Room Burning Event End!");
  return;
}
```
