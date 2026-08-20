# StartEvent

`_ZN25CPcRoomCardBlankItemEvent10StartEventE10Word_Param`

`CPcRoomCardBlankItemEvent::StartEvent(Word_Param)`

| 类 | 地址 |
|---|---|
| `CPcRoomCardBlankItemEvent` | `0x082674ac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082674ac  _ZN25CPcRoomCardBlankItemEvent10StartEventE10Word_Param
#           CPcRoomCardBlankItemEvent::StartEvent(Word_Param)
# range [0x082674ac, 0x082674fd]
082674ac +0x00:  push   %ebp
082674ad +0x01:  mov    %esp,%ebp
082674af +0x03:  sub    $0x28,%esp
082674b2 +0x06:  mov    0x8(%ebp),%eax
082674b5 +0x09:  movl   $0x1,0x4(%esp)
082674bd +0x11:  mov    %eax,(%esp)
082674c0 +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
082674c5 +0x19:  movl   $0x0,0xc(%esp)
082674cd +0x21:  movl   $0x18,0x8(%esp)
082674d5 +0x29:  movl   $&_ZZN25CPcRoomCardBlankItemEvent10StartEventE10Word_ParamE12__FUNCTION__,0x4(%esp)
082674dd +0x31:  lea    -0x18(%ebp),%eax
082674e0 +0x34:  mov    %eax,(%esp)
082674e3 +0x37:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
082674e8 +0x3c:  movl   $"Pc Room Card Blank Item Event Start",0x4(%esp)
082674f0 +0x44:  lea    -0x18(%ebp),%eax
082674f3 +0x47:  mov    %eax,(%esp)
082674f6 +0x4a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
082674fb +0x4f:  leave
082674fc +0x50:  ret
082674fd +0x51:  nop
```

## 反编译 C

```c
// CPcRoomCardBlankItemEvent::StartEvent @ 0x82674ac

/* CPcRoomCardBlankItemEvent::StartEvent(Word_Param) */

void CPcRoomCardBlankItemEvent::StartEvent(CEventBase *param_1)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag(param_1,true);
  cMyTrace::cMyTrace(local_1c,"StartEvent",0x18,0);
  cMyTrace::operator()(local_1c,"Pc Room Card Blank Item Event Start");
  return;
}
```
