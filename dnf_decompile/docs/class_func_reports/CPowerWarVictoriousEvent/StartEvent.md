# StartEvent

`_ZN24CPowerWarVictoriousEvent10StartEventEv`

`CPowerWarVictoriousEvent::StartEvent()`

| 类 | 地址 |
|---|---|
| `CPowerWarVictoriousEvent` | `0x08268986` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08268986  _ZN24CPowerWarVictoriousEvent10StartEventEv
#           CPowerWarVictoriousEvent::StartEvent()
# range [0x08268986, 0x08268a67]
08268986 +0x00:  push   %ebp
08268987 +0x01:  mov    %esp,%ebp
08268989 +0x03:  push   %ebx
0826898a +0x04:  sub    $0x44,%esp
0826898d +0x07:  mov    0x8(%ebp),%eax
08268990 +0x0a:  mov    (%eax),%eax
08268992 +0x0c:  add    $0x34,%eax
08268995 +0x0f:  mov    (%eax),%edx
08268997 +0x11:  mov    0x8(%ebp),%eax
0826899a +0x14:  movl   $0x0,0x4(%esp)
082689a2 +0x1c:  mov    %eax,(%esp)
082689a5 +0x1f:  call   *%edx
082689a7 +0x21:  xor    $0x1,%eax
082689aa +0x24:  test   %al,%al
082689ac +0x26:  je     08268a62 <+0xdc>
082689b2 +0x2c:  mov    0x8(%ebp),%eax
082689b5 +0x2f:  movl   $0x1,0x4(%esp)
082689bd +0x37:  mov    %eax,(%esp)
082689c0 +0x3a:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
082689c5 +0x3f:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
082689ca +0x44:  mov    0xa6fc(%eax),%eax
082689d0 +0x4a:  shl    $0x2,%eax
082689d3 +0x4d:  mov    %eax,%edx
082689d5 +0x4f:  shl    $0x4,%edx
082689d8 +0x52:  mov    %edx,%ecx
082689da +0x54:  sub    %eax,%ecx
082689dc +0x56:  mov    %ecx,%eax
082689de +0x58:  mov    %eax,-0xc(%ebp)
082689e1 +0x5b:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
082689e6 +0x60:  movl   $0x0,0x18(%esp)
082689ee +0x68:  movl   $0x0,0x14(%esp)
082689f6 +0x70:  mov    -0xc(%ebp),%edx
082689f9 +0x73:  mov    %edx,0x10(%esp)
082689fd +0x77:  movl   $0x8b,0xc(%esp)
08268a05 +0x7f:  movl   $0x0,0x8(%esp)
08268a0d +0x87:  movl   $0x2,0x4(%esp)
08268a15 +0x8f:  mov    %eax,(%esp)
08268a18 +0x92:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
08268a1d +0x97:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08268a22 +0x9c:  mov    0x1b0(%eax),%ebx
08268a28 +0xa2:  movl   $0x0,0xc(%esp)
08268a30 +0xaa:  movl   $0x22,0x8(%esp)
08268a38 +0xb2:  movl   $&_ZZN24CPowerWarVictoriousEvent10StartEventEvE19__PRETTY_FUNCTION__,0x4(%esp)
08268a40 +0xba:  lea    -0x1c(%ebp),%eax
08268a43 +0xbd:  mov    %eax,(%esp)
08268a46 +0xc0:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08268a4b +0xc5:  mov    %ebx,0x8(%esp)
08268a4f +0xc9:  movl   $"Power War Victorious Event Start! server(%d)",0x4(%esp)
08268a57 +0xd1:  lea    -0x1c(%ebp),%eax
08268a5a +0xd4:  mov    %eax,(%esp)
08268a5d +0xd7:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08268a62 +0xdc:  add    $0x44,%esp
08268a65 +0xdf:  pop    %ebx
08268a66 +0xe0:  pop    %ebp
08268a67 +0xe1:  ret
```

## 反编译 C

```c
// CPowerWarVictoriousEvent::StartEvent @ 0x8268986

/* CPowerWarVictoriousEvent::StartEvent() */

void __thiscall CPowerWarVictoriousEvent::StartEvent(CPowerWarVictoriousEvent *this)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  TimerQueue *pTVar4;
  cMyTrace local_20 [16];
  int local_10;
  
  cVar2 = (**(code **)(*(int *)this + 0x34))(this,0);
  if (cVar2 != '\x01') {
    CEventBase::SetEventFlag((CEventBase *)this,true);
    iVar3 = G_CDataManager();
    local_10 = *(int *)(iVar3 + 0xa6fc) * 0x3c;
    pTVar4 = (TimerQueue *)G_TimerQueue();
    TimerQueue::InsertTimer(pTVar4,2,0,0x8b,local_10,0,0);
    iVar3 = G_CEnvironment();
    uVar1 = *(undefined4 *)(iVar3 + 0x1b0);
    cMyTrace::cMyTrace(local_20,"virtual void CPowerWarVictoriousEvent::StartEvent()",0x22,0);
    cMyTrace::operator()(local_20,"Power War Victorious Event Start! server(%d)",uVar1);
  }
  return;
}
```
