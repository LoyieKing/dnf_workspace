# StartEvent

`_ZN24CPowerWarVictoriousEvent10StartEventE10Word_Param`

`CPowerWarVictoriousEvent::StartEvent(Word_Param)`

| 类 | 地址 |
|---|---|
| `CPowerWarVictoriousEvent` | `0x08268a68` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08268a68  _ZN24CPowerWarVictoriousEvent10StartEventE10Word_Param
#           CPowerWarVictoriousEvent::StartEvent(Word_Param)
# range [0x08268a68, 0x08268b49]
08268a68 +0x00:  push   %ebp
08268a69 +0x01:  mov    %esp,%ebp
08268a6b +0x03:  push   %ebx
08268a6c +0x04:  sub    $0x44,%esp
08268a6f +0x07:  mov    0x8(%ebp),%eax
08268a72 +0x0a:  mov    (%eax),%eax
08268a74 +0x0c:  add    $0x34,%eax
08268a77 +0x0f:  mov    (%eax),%edx
08268a79 +0x11:  mov    0x8(%ebp),%eax
08268a7c +0x14:  movl   $0x0,0x4(%esp)
08268a84 +0x1c:  mov    %eax,(%esp)
08268a87 +0x1f:  call   *%edx
08268a89 +0x21:  xor    $0x1,%eax
08268a8c +0x24:  test   %al,%al
08268a8e +0x26:  je     08268b44 <+0xdc>
08268a94 +0x2c:  mov    0x8(%ebp),%eax
08268a97 +0x2f:  movl   $0x1,0x4(%esp)
08268a9f +0x37:  mov    %eax,(%esp)
08268aa2 +0x3a:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
08268aa7 +0x3f:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08268aac +0x44:  mov    0xa6fc(%eax),%eax
08268ab2 +0x4a:  shl    $0x2,%eax
08268ab5 +0x4d:  mov    %eax,%edx
08268ab7 +0x4f:  shl    $0x4,%edx
08268aba +0x52:  mov    %edx,%ecx
08268abc +0x54:  sub    %eax,%ecx
08268abe +0x56:  mov    %ecx,%eax
08268ac0 +0x58:  mov    %eax,-0xc(%ebp)
08268ac3 +0x5b:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
08268ac8 +0x60:  movl   $0x0,0x18(%esp)
08268ad0 +0x68:  movl   $0x0,0x14(%esp)
08268ad8 +0x70:  mov    -0xc(%ebp),%edx
08268adb +0x73:  mov    %edx,0x10(%esp)
08268adf +0x77:  movl   $0x8b,0xc(%esp)
08268ae7 +0x7f:  movl   $0x0,0x8(%esp)
08268aef +0x87:  movl   $0x2,0x4(%esp)
08268af7 +0x8f:  mov    %eax,(%esp)
08268afa +0x92:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
08268aff +0x97:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08268b04 +0x9c:  mov    0x1b0(%eax),%ebx
08268b0a +0xa2:  movl   $0x0,0xc(%esp)
08268b12 +0xaa:  movl   $0x34,0x8(%esp)
08268b1a +0xb2:  movl   $&_ZZN24CPowerWarVictoriousEvent10StartEventE10Word_ParamE19__PRETTY_FUNCTION__,0x4(%esp)
08268b22 +0xba:  lea    -0x1c(%ebp),%eax
08268b25 +0xbd:  mov    %eax,(%esp)
08268b28 +0xc0:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08268b2d +0xc5:  mov    %ebx,0x8(%esp)
08268b31 +0xc9:  movl   $"Power War Victorious Event Start! server(%d)",0x4(%esp)
08268b39 +0xd1:  lea    -0x1c(%ebp),%eax
08268b3c +0xd4:  mov    %eax,(%esp)
08268b3f +0xd7:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08268b44 +0xdc:  add    $0x44,%esp
08268b47 +0xdf:  pop    %ebx
08268b48 +0xe0:  pop    %ebp
08268b49 +0xe1:  ret
```

## 反编译 C

```c
// CPowerWarVictoriousEvent::StartEvent @ 0x8268a68

/* CPowerWarVictoriousEvent::StartEvent(Word_Param) */

void CPowerWarVictoriousEvent::StartEvent(CEventBase *param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  TimerQueue *pTVar4;
  cMyTrace local_20 [16];
  int local_10;
  
  cVar2 = (**(code **)(*(int *)param_1 + 0x34))(param_1,0);
  if (cVar2 != '\x01') {
    CEventBase::SetEventFlag(param_1,true);
    iVar3 = G_CDataManager();
    local_10 = *(int *)(iVar3 + 0xa6fc) * 0x3c;
    pTVar4 = (TimerQueue *)G_TimerQueue();
    TimerQueue::InsertTimer(pTVar4,2,0,0x8b,local_10,0,0);
    iVar3 = G_CEnvironment();
    uVar1 = *(undefined4 *)(iVar3 + 0x1b0);
    cMyTrace::cMyTrace(local_20,"virtual void CPowerWarVictoriousEvent::StartEvent(Word_Param)",0x34
                       ,0);
    cMyTrace::operator()(local_20,"Power War Victorious Event Start! server(%d)",uVar1);
  }
  return;
}
```
