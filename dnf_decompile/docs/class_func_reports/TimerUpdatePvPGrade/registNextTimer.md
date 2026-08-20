# registNextTimer

`_ZN19TimerUpdatePvPGrade15registNextTimerEl`

`TimerUpdatePvPGrade::registNextTimer(long)`

| 类 | 地址 |
|---|---|
| `TimerUpdatePvPGrade` | `0x086373f2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086373f2  _ZN19TimerUpdatePvPGrade15registNextTimerEl
#           TimerUpdatePvPGrade::registNextTimer(long)
# range [0x086373f2, 0x086374bb]
086373f2 +0x00:  push   %ebp
086373f3 +0x01:  mov    %esp,%ebp
086373f5 +0x03:  push   %ebx
086373f6 +0x04:  sub    $0x54,%esp
086373f9 +0x07:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
086373fe +0x0c:  mov    %eax,(%esp)
08637401 +0x0f:  call   0814aaca <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x869>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x869
08637406 +0x14:  cmp    $0x1,%eax
08637409 +0x17:  setne  %al
0863740c +0x1a:  test   %al,%al
0863740e +0x1c:  jne    086374b5 <+0xc3>
08637414 +0x22:  lea    -0x34(%ebp),%eax
08637417 +0x25:  mov    %eax,0x4(%esp)
0863741b +0x29:  lea    0x8(%ebp),%eax
0863741e +0x2c:  mov    %eax,(%esp)
08637421 +0x2f:  call   0807e360 <_init+0xc58>
08637426 +0x34:  movl   $0x2,-0x2c(%ebp)
0863742d +0x3b:  movl   $0x0,-0x30(%ebp)
08637434 +0x42:  movl   $0x0,-0x34(%ebp)
0863743b +0x49:  lea    -0x34(%ebp),%eax
0863743e +0x4c:  mov    %eax,(%esp)
08637441 +0x4f:  call   0807e820 <_init+0x1118>
08637446 +0x54:  mov    %eax,0x8(%ebp)
08637449 +0x57:  mov    0x8(%ebp),%ebx
0863744c +0x5a:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08637453 +0x61:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08637458 +0x66:  mov    %ebx,%edx
0863745a +0x68:  sub    %eax,%edx
0863745c +0x6a:  mov    %edx,%eax
0863745e +0x6c:  test   %eax,%eax
08637460 +0x6e:  jle    08637475 <+0x83>
08637462 +0x70:  mov    0x8(%ebp),%ebx
08637465 +0x73:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0863746c +0x7a:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08637471 +0x7f:  sub    %eax,%ebx
08637473 +0x81:  jmp    0863747a <+0x88>
08637475 +0x83:  mov    $0x1,%ebx
0863747a +0x88:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
0863747f +0x8d:  movl   $0x0,0x18(%esp)
08637487 +0x95:  movl   $0x0,0x14(%esp)
0863748f +0x9d:  mov    %ebx,0x10(%esp)
08637493 +0xa1:  movl   $0x6c,0xc(%esp)
0863749b +0xa9:  movl   $0x0,0x8(%esp)
086374a3 +0xb1:  movl   $0x2,0x4(%esp)
086374ab +0xb9:  mov    %eax,(%esp)
086374ae +0xbc:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
086374b3 +0xc1:  jmp    086374b6 <+0xc4>
086374b5 +0xc3:  nop
086374b6 +0xc4:  add    $0x54,%esp
086374b9 +0xc7:  pop    %ebx
086374ba +0xc8:  pop    %ebp
086374bb +0xc9:  ret
```

## 反编译 C

```c
// TimerUpdatePvPGrade::registNextTimer @ 0x86373f2

/* TimerUpdatePvPGrade::registNextTimer(long) */

void TimerUpdatePvPGrade::registNextTimer(long param_1)

{
  long lVar1;
  CEnvironment *this;
  int iVar2;
  time_t tVar3;
  TimerQueue *pTVar4;
  tm local_38;
  
  this = (CEnvironment *)G_CEnvironment();
  iVar2 = CEnvironment::get_channel_no(this);
  if (iVar2 == 1) {
    localtime_r(&param_1,&local_38);
    local_38.tm_hour = 2;
    local_38.tm_min = 0;
    local_38.tm_sec = 0;
    tVar3 = mktime(&local_38);
    param_1 = tVar3;
    iVar2 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    lVar1 = param_1;
    if (tVar3 == iVar2 || tVar3 - iVar2 < 0) {
      iVar2 = 1;
    }
    else {
      iVar2 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      iVar2 = lVar1 - iVar2;
    }
    pTVar4 = (TimerQueue *)G_TimerQueue();
    TimerQueue::InsertTimer(pTVar4,2,0,0x6c,iVar2,0,0);
  }
  return;
}
```
