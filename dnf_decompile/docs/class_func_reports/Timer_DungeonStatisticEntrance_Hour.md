# Timer_DungeonStatisticEntrance_Hour

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## RegistNextTimer

```asm
// === 0863b9fa Timer_DungeonStatisticEntrance_Hour::RegistNextTimer  [0x0863b9fa-0x863ba45] ===
 863b9fa:	55                   	push   %ebp
 863b9fb:	89 e5                	mov    %esp,%ebp
 863b9fd:	83 ec 38             	sub    $0x38,%esp
 863ba00:	c7 45 f4 10 0e 00 00 	movl   $0xe10,-0xc(%ebp)
 863ba07:	e8 70 aa ab ff       	call   80f647c <_Z12G_TimerQueuev>
 863ba0c:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 863ba13:	00 
 863ba14:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 863ba1b:	00 
 863ba1c:	c7 44 24 10 10 0e 00 	movl   $0xe10,0x10(%esp)
 863ba23:	00 
 863ba24:	c7 44 24 0c ab 00 00 	movl   $0xab,0xc(%esp)
 863ba2b:	00 
 863ba2c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 863ba33:	00 
 863ba34:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 863ba3b:	00 
 863ba3c:	89 04 24             	mov    %eax,(%esp)
 863ba3f:	e8 d2 53 ff ff       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 863ba44:	c9                   	leave
 863ba45:	c3                   	ret

```

```c
// Timer_DungeonStatisticEntrance_Hour::RegistNextTimer @ 0x863b9fa

/* Timer_DungeonStatisticEntrance_Hour::RegistNextTimer() */

void Timer_DungeonStatisticEntrance_Hour::RegistNextTimer(void)

{
  TimerQueue *pTVar1;
  
  pTVar1 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar1,2,0,0xab,0xe10,0,0);
  return;
}

```

---

## dispatch_sig

```asm
// === 0863b9da Timer_DungeonStatisticEntrance_Hour::dispatch_sig  [0x0863b9da-0x863b9f9] ===
 863b9da:	55                   	push   %ebp
 863b9db:	89 e5                	mov    %esp,%ebp
 863b9dd:	83 ec 18             	sub    $0x18,%esp
 863b9e0:	e8 76 27 fd ff       	call   860e15b <_Z29GetInstanceDungeonEntranceLogv>
 863b9e5:	89 04 24             	mov    %eax,(%esp)
 863b9e8:	e8 a1 29 fd ff       	call   860e38e <_ZN19CDungeonEntranceLog26InsertDungeonEntrance_HourEv>
 863b9ed:	e8 08 00 00 00       	call   863b9fa <_ZN35Timer_DungeonStatisticEntrance_Hour15RegistNextTimerEv>
 863b9f2:	b8 01 00 00 00       	mov    $0x1,%eax
 863b9f7:	c9                   	leave
 863b9f8:	c3                   	ret
 863b9f9:	90                   	nop

```

```c
// Timer_DungeonStatisticEntrance_Hour::dispatch_sig @ 0x863b9da

/* Timer_DungeonStatisticEntrance_Hour::dispatch_sig(int, int, unsigned int) */

undefined4 Timer_DungeonStatisticEntrance_Hour::dispatch_sig(int param_1,int param_2,uint param_3)

{
  CDungeonEntranceLog *this;
  
  this = (CDungeonEntranceLog *)GetInstanceDungeonEntranceLog();
  CDungeonEntranceLog::InsertDungeonEntrance_Hour(this);
  RegistNextTimer();
  return 1;
}

```

