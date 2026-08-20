# RegistNextTimer

`_ZN14Timer_Midnight15RegistNextTimerEv`

`Timer_Midnight::RegistNextTimer()`

| 类 | 地址 |
|---|---|
| `Timer_Midnight` | `0x08639554` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08639554  _ZN14Timer_Midnight15RegistNextTimerEv
#           Timer_Midnight::RegistNextTimer()
# range [0x08639554, 0x08639667]
08639554 +0x000:  push   %ebp
08639555 +0x001:  mov    %esp,%ebp
08639557 +0x003:  push   %edi
08639558 +0x004:  push   %esi
08639559 +0x005:  push   %ebx
0863955a +0x006:  sub    $0x7c,%esp
0863955d +0x009:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08639564 +0x010:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08639569 +0x015:  mov    %eax,-0x3c(%ebp)
0863956c +0x018:  lea    -0x68(%ebp),%eax
0863956f +0x01b:  mov    %eax,0x4(%esp)
08639573 +0x01f:  lea    -0x3c(%ebp),%eax
08639576 +0x022:  mov    %eax,(%esp)
08639579 +0x025:  call   0807e360 <_init+0xc58>
0863957e +0x02a:  mov    %eax,-0x28(%ebp)
08639581 +0x02d:  mov    -0x28(%ebp),%eax
08639584 +0x030:  mov    0x8(%eax),%eax
08639587 +0x033:  mov    %eax,-0x24(%ebp)
0863958a +0x036:  mov    -0x28(%ebp),%eax
0863958d +0x039:  mov    (%eax),%edi
0863958f +0x03b:  mov    -0x28(%ebp),%eax
08639592 +0x03e:  mov    0x4(%eax),%esi
08639595 +0x041:  mov    -0x28(%ebp),%eax
08639598 +0x044:  mov    0x8(%eax),%ebx
0863959b +0x047:  movl   $0x0,0xc(%esp)
086395a3 +0x04f:  movl   $0x1293,0x8(%esp)
086395ab +0x057:  movl   $&_ZZN14Timer_Midnight15RegistNextTimerEvE19__PRETTY_FUNCTION__,0x4(%esp)
086395b3 +0x05f:  lea    -0x38(%ebp),%eax
086395b6 +0x062:  mov    %eax,(%esp)
086395b9 +0x065:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
086395be +0x06a:  mov    %edi,0x10(%esp)
086395c2 +0x06e:  mov    %esi,0xc(%esp)
086395c6 +0x072:  mov    %ebx,0x8(%esp)
086395ca +0x076:  movl   $"Reset all user's fatigue!(%02d:%02d:%02d)",0x4(%esp)
086395d2 +0x07e:  lea    -0x38(%ebp),%eax
086395d5 +0x081:  mov    %eax,(%esp)
086395d8 +0x084:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
086395dd +0x089:  mov    -0x28(%ebp),%eax
086395e0 +0x08c:  movl   $0x0,0x8(%eax)
086395e7 +0x093:  mov    -0x28(%ebp),%eax
086395ea +0x096:  movl   $0x0,0x4(%eax)
086395f1 +0x09d:  mov    -0x28(%ebp),%eax
086395f4 +0x0a0:  movl   $0x0,(%eax)
086395fa +0x0a6:  mov    -0x28(%ebp),%eax
086395fd +0x0a9:  mov    %eax,(%esp)
08639600 +0x0ac:  call   0807e820 <_init+0x1118>
08639605 +0x0b1:  mov    %eax,-0x20(%ebp)
08639608 +0x0b4:  addl   $&_ZL14gUnicodeBuffer+0xac54,-0x20(%ebp)
0863960f +0x0bb:  mov    -0x3c(%ebp),%eax
08639612 +0x0be:  mov    -0x20(%ebp),%edx
08639615 +0x0c1:  mov    %edx,%ecx
08639617 +0x0c3:  sub    %eax,%ecx
08639619 +0x0c5:  mov    %ecx,%eax
0863961b +0x0c7:  mov    %eax,-0x1c(%ebp)
0863961e +0x0ca:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
08639623 +0x0cf:  movl   $0x0,0x18(%esp)
0863962b +0x0d7:  movl   $0x0,0x14(%esp)
08639633 +0x0df:  mov    -0x1c(%ebp),%edx
08639636 +0x0e2:  mov    %edx,0x10(%esp)
0863963a +0x0e6:  movl   $0x8d,0xc(%esp)
08639642 +0x0ee:  movl   $0x0,0x8(%esp)
0863964a +0x0f6:  movl   $0x2,0x4(%esp)
08639652 +0x0fe:  mov    %eax,(%esp)
08639655 +0x101:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
0863965a +0x106:  mov    $0x1,%eax
0863965f +0x10b:  add    $0x7c,%esp
08639662 +0x10e:  pop    %ebx
08639663 +0x10f:  pop    %esi
08639664 +0x110:  pop    %edi
08639665 +0x111:  pop    %ebp
08639666 +0x112:  ret
08639667 +0x113:  nop
```

## 反编译 C

```c
// Timer_Midnight::RegistNextTimer @ 0x8639554

/* Timer_Midnight::RegistNextTimer() */

undefined4 Timer_Midnight::RegistNextTimer(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  time_t tVar4;
  TimerQueue *pTVar5;
  tm local_6c;
  int local_40;
  cMyTrace local_3c [16];
  tm *local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  local_40 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  local_2c = localtime_r(&local_40,&local_6c);
  local_28 = local_2c->tm_hour;
  iVar1 = local_2c->tm_sec;
  iVar2 = local_2c->tm_min;
  iVar3 = local_2c->tm_hour;
  cMyTrace::cMyTrace(local_3c,"static bool Timer_Midnight::RegistNextTimer()",0x1293,0);
  cMyTrace::operator()(local_3c,"Reset all user\'s fatigue!(%02d:%02d:%02d)",iVar3,iVar2,iVar1);
  local_2c->tm_hour = 0;
  local_2c->tm_min = 0;
  local_2c->tm_sec = 0;
  tVar4 = mktime(local_2c);
  local_24 = tVar4 + 0x15180;
  local_20 = local_24 - local_40;
  pTVar5 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar5,2,0,0x8d,local_20,0,0);
  return 1;
}
```
