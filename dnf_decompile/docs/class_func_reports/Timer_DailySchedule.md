# Timer_DailySchedule

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## RegistNextTimer

```asm
// === 0812c940 Timer_DailySchedule::RegistNextTimer  [0x0812c940-0x812c984] ===
 812c940:	55                   	push   %ebp
 812c941:	89 e5                	mov    %esp,%ebp
 812c943:	83 ec 28             	sub    $0x28,%esp
 812c946:	e8 31 9b fc ff       	call   80f647c <_Z12G_TimerQueuev>
 812c94b:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 812c952:	00 
 812c953:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 812c95a:	00 
 812c95b:	c7 44 24 10 3c 00 00 	movl   $0x3c,0x10(%esp)
 812c962:	00 
 812c963:	c7 44 24 0c 91 00 00 	movl   $0x91,0xc(%esp)
 812c96a:	00 
 812c96b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 812c972:	00 
 812c973:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 812c97a:	00 
 812c97b:	89 04 24             	mov    %eax,(%esp)
 812c97e:	e8 93 44 50 00       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 812c983:	c9                   	leave
 812c984:	c3                   	ret

```

```c
// Timer_DailySchedule::RegistNextTimer @ 0x812c940

/* Timer_DailySchedule::RegistNextTimer() */

void Timer_DailySchedule::RegistNextTimer(void)

{
  TimerQueue *pTVar1;
  
  pTVar1 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar1,2,0,0x91,0x3c,0,0);
  return;
}

```

---

## dispatch_sig

```asm
// === 0812c920 Timer_DailySchedule::dispatch_sig  [0x0812c920-0x812c93f] ===
 812c920:	55                   	push   %ebp
 812c921:	89 e5                	mov    %esp,%ebp
 812c923:	83 ec 18             	sub    $0x18,%esp
 812c926:	a1 84 f7 41 09       	mov    0x941f784,%eax
 812c92b:	89 04 24             	mov    %eax,(%esp)
 812c92e:	e8 61 93 ff ff       	call   8125c94 <_ZN21CDailyScheduleManager29CheckAndSendToAllUserScheduleEv>
 812c933:	e8 08 00 00 00       	call   812c940 <_ZN19Timer_DailySchedule15RegistNextTimerEv>
 812c938:	b8 01 00 00 00       	mov    $0x1,%eax
 812c93d:	c9                   	leave
 812c93e:	c3                   	ret
 812c93f:	90                   	nop

```

```c
// Timer_DailySchedule::dispatch_sig @ 0x812c920

/* Timer_DailySchedule::dispatch_sig(int, int, unsigned int) */

undefined4 Timer_DailySchedule::dispatch_sig(int param_1,int param_2,uint param_3)

{
  CDailyScheduleManager::CheckAndSendToAllUserSchedule(GlobalData::s_DailyScheduleManager);
  RegistNextTimer();
  return 1;
}

```

