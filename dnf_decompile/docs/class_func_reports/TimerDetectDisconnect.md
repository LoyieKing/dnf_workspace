# TimerDetectDisconnect

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch_sig

```asm
// === 086374bc TimerDetectDisconnect::dispatch_sig  [0x086374bc-0x86374df] ===
 86374bc:	55                   	push   %ebp
 86374bd:	89 e5                	mov    %esp,%ebp
 86374bf:	83 ec 18             	sub    $0x18,%esp
 86374c2:	e8 18 d4 bf ff       	call   82348df <_ZN19disconnect_detecter29GetInstanceDisconnectDetecterEv>
 86374c7:	89 04 24             	mov    %eax,(%esp)
 86374ca:	e8 e1 af e3 ff       	call   84724b0 <_ZN19disconnect_detecter19CDisconnectDetecter21DoDetectingDisconnectEv>
 86374cf:	84 c0                	test   %al,%al
 86374d1:	74 05                	je     86374d8 <_ZN21TimerDetectDisconnect12dispatch_sigEiij+0x1c>
 86374d3:	e8 08 00 00 00       	call   86374e0 <_ZN21TimerDetectDisconnect15registNextTimerEv>
 86374d8:	b8 01 00 00 00       	mov    $0x1,%eax
 86374dd:	c9                   	leave
 86374de:	c3                   	ret
 86374df:	90                   	nop

```

```c
// TimerDetectDisconnect::dispatch_sig @ 0x86374bc

/* TimerDetectDisconnect::dispatch_sig(int, int, unsigned int) */

undefined4 TimerDetectDisconnect::dispatch_sig(int param_1,int param_2,uint param_3)

{
  char cVar1;
  CDisconnectDetecter *this;
  
  this = (CDisconnectDetecter *)disconnect_detecter::GetInstanceDisconnectDetecter();
  cVar1 = disconnect_detecter::CDisconnectDetecter::DoDetectingDisconnect(this);
  if (cVar1 != '\0') {
    registNextTimer();
  }
  return 1;
}

```

---

## registNextTimer

```asm
// === 086374e0 TimerDetectDisconnect::registNextTimer  [0x086374e0-0x863752b] ===
 86374e0:	55                   	push   %ebp
 86374e1:	89 e5                	mov    %esp,%ebp
 86374e3:	83 ec 38             	sub    $0x38,%esp
 86374e6:	c7 45 f4 0a 00 00 00 	movl   $0xa,-0xc(%ebp)
 86374ed:	e8 8a ef ab ff       	call   80f647c <_Z12G_TimerQueuev>
 86374f2:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 86374f9:	00 
 86374fa:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 8637501:	00 
 8637502:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8637505:	89 54 24 10          	mov    %edx,0x10(%esp)
 8637509:	c7 44 24 0c 6d 00 00 	movl   $0x6d,0xc(%esp)
 8637510:	00 
 8637511:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8637518:	00 
 8637519:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8637520:	00 
 8637521:	89 04 24             	mov    %eax,(%esp)
 8637524:	e8 ed 98 ff ff       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 8637529:	c9                   	leave
 863752a:	c3                   	ret
 863752b:	90                   	nop

```

```c
// TimerDetectDisconnect::registNextTimer @ 0x86374e0

/* TimerDetectDisconnect::registNextTimer() */

void TimerDetectDisconnect::registNextTimer(void)

{
  TimerQueue *pTVar1;
  
  pTVar1 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar1,2,0,0x6d,10,0,0);
  return;
}

```

