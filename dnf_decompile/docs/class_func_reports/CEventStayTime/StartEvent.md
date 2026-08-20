# StartEvent

`_ZN14CEventStayTime10StartEventEv`

`CEventStayTime::StartEvent()`

| 类 | 地址 |
|---|---|
| `CEventStayTime` | `0x0816bda0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816bda0  _ZN14CEventStayTime10StartEventEv
#           CEventStayTime::StartEvent()
# range [0x0816bda0, 0x0816be17]
0816bda0 +0x00:  push   %ebp
0816bda1 +0x01:  mov    %esp,%ebp
0816bda3 +0x03:  push   %esi
0816bda4 +0x04:  push   %ebx
0816bda5 +0x05:  sub    $0x20,%esp
0816bda8 +0x08:  mov    0x8(%ebp),%eax
0816bdab +0x0b:  movl   $0x1,0x4(%esp)
0816bdb3 +0x13:  mov    %eax,(%esp)
0816bdb6 +0x16:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
0816bdbb +0x1b:  mov    0x8(%ebp),%eax
0816bdbe +0x1e:  mov    0x10(%eax),%esi
0816bdc1 +0x21:  mov    0x8(%ebp),%eax
0816bdc4 +0x24:  mov    0xc(%eax),%ebx
0816bdc7 +0x27:  movl   $0x0,0xc(%esp)
0816bdcf +0x2f:  movl   $0xa,0x8(%esp)
0816bdd7 +0x37:  movl   $&_ZZN14CEventStayTime10StartEventEvE19__PRETTY_FUNCTION__,0x4(%esp)
0816bddf +0x3f:  lea    -0x18(%ebp),%eax
0816bde2 +0x42:  mov    %eax,(%esp)
0816bde5 +0x45:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0816bdea +0x4a:  mov    %esi,0xc(%esp)
0816bdee +0x4e:  mov    %ebx,0x8(%esp)
0816bdf2 +0x52:  movl   $"[Taiwan, StayEvent] Start! StayTime:%dMin, CheckTime:%dMin",0x4(%esp)
0816bdfa +0x5a:  lea    -0x18(%ebp),%eax
0816bdfd +0x5d:  mov    %eax,(%esp)
0816be00 +0x60:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0816be05 +0x65:  mov    0x8(%ebp),%eax
0816be08 +0x68:  mov    %eax,(%esp)
0816be0b +0x6b:  call   0816befa <_ZN14CEventStayTime15RegistNextTimerEv>  ; CEventStayTime::RegistNextTimer()
0816be10 +0x70:  add    $0x20,%esp
0816be13 +0x73:  pop    %ebx
0816be14 +0x74:  pop    %esi
0816be15 +0x75:  pop    %ebp
0816be16 +0x76:  ret
0816be17 +0x77:  nop
```

## 反编译 C

```c
// CEventStayTime::StartEvent @ 0x816bda0

/* CEventStayTime::StartEvent() */

void __thiscall CEventStayTime::StartEvent(CEventStayTime *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  cMyTrace local_1c [16];
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  uVar1 = *(undefined4 *)(this + 0x10);
  uVar2 = *(undefined4 *)(this + 0xc);
  cMyTrace::cMyTrace(local_1c,"virtual void CEventStayTime::StartEvent()",10,0);
  cMyTrace::operator()
            (local_1c,"[Taiwan, StayEvent] Start! StayTime:%dMin, CheckTime:%dMin",uVar2,uVar1);
  RegistNextTimer(this);
  return;
}
```
