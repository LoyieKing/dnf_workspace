# EndEvent

`_ZN25CPcRoomCardBlankItemEvent8EndEventEv`

`CPcRoomCardBlankItemEvent::EndEvent()`

| 类 | 地址 |
|---|---|
| `CPcRoomCardBlankItemEvent` | `0x082674fe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082674fe  _ZN25CPcRoomCardBlankItemEvent8EndEventEv
#           CPcRoomCardBlankItemEvent::EndEvent()
# range [0x082674fe, 0x0826754e]
082674fe +0x00:  push   %ebp
082674ff +0x01:  mov    %esp,%ebp
08267501 +0x03:  sub    $0x28,%esp
08267504 +0x06:  mov    0x8(%ebp),%eax
08267507 +0x09:  movl   $0x0,0x4(%esp)
0826750f +0x11:  mov    %eax,(%esp)
08267512 +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
08267517 +0x19:  movl   $0x0,0xc(%esp)
0826751f +0x21:  movl   $0x1e,0x8(%esp)
08267527 +0x29:  movl   $&_ZZN25CPcRoomCardBlankItemEvent8EndEventEvE12__FUNCTION__,0x4(%esp)
0826752f +0x31:  lea    -0x18(%ebp),%eax
08267532 +0x34:  mov    %eax,(%esp)
08267535 +0x37:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0826753a +0x3c:  movl   $"Pc Room Card Blank Item Event End",0x4(%esp)
08267542 +0x44:  lea    -0x18(%ebp),%eax
08267545 +0x47:  mov    %eax,(%esp)
08267548 +0x4a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0826754d +0x4f:  leave
0826754e +0x50:  ret
```

## 反编译 C

```c
// CPcRoomCardBlankItemEvent::EndEvent @ 0x82674fe

/* CPcRoomCardBlankItemEvent::EndEvent() */

void __thiscall CPcRoomCardBlankItemEvent::EndEvent(CPcRoomCardBlankItemEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,false);
  cMyTrace::cMyTrace(local_1c,"EndEvent",0x1e,0);
  cMyTrace::operator()(local_1c,"Pc Room Card Blank Item Event End");
  return;
}
```
