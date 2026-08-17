# Timer_OneADayItemShop

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## RegistNextTimer

```asm
// === 0863a93c Timer_OneADayItemShop::RegistNextTimer  [0x0863a93c-0x863a981] ===
 863a93c:	55                   	push   %ebp
 863a93d:	89 e5                	mov    %esp,%ebp
 863a93f:	83 ec 28             	sub    $0x28,%esp
 863a942:	e8 35 bb ab ff       	call   80f647c <_Z12G_TimerQueuev>
 863a947:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 863a94e:	00 
 863a94f:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 863a956:	00 
 863a957:	c7 44 24 10 3c 00 00 	movl   $0x3c,0x10(%esp)
 863a95e:	00 
 863a95f:	c7 44 24 0c 99 00 00 	movl   $0x99,0xc(%esp)
 863a966:	00 
 863a967:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 863a96e:	00 
 863a96f:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 863a976:	00 
 863a977:	89 04 24             	mov    %eax,(%esp)
 863a97a:	e8 97 64 ff ff       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 863a97f:	c9                   	leave
 863a980:	c3                   	ret
 863a981:	90                   	nop

```

```c
// Timer_OneADayItemShop::RegistNextTimer @ 0x863a93c

/* Timer_OneADayItemShop::RegistNextTimer() */

void Timer_OneADayItemShop::RegistNextTimer(void)

{
  TimerQueue *pTVar1;
  
  pTVar1 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar1,2,0,0x99,0x3c,0,0);
  return;
}

```

---

## dispatch_sig

```asm
// === 0863a916 Timer_OneADayItemShop::dispatch_sig  [0x0863a916-0x863a93b] ===
 863a916:	55                   	push   %ebp
 863a917:	89 e5                	mov    %esp,%ebp
 863a919:	83 ec 18             	sub    $0x18,%esp
 863a91c:	e8 7a 18 a9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 863a921:	8b 80 bc 8c 00 00    	mov    0x8cbc(%eax),%eax
 863a927:	89 04 24             	mov    %eax,(%esp)
 863a92a:	e8 69 85 ed ff       	call   8512e98 <_ZN9CItemShop21updateOneADayItemListEv>
 863a92f:	e8 08 00 00 00       	call   863a93c <_ZN21Timer_OneADayItemShop15RegistNextTimerEv>
 863a934:	b8 01 00 00 00       	mov    $0x1,%eax
 863a939:	c9                   	leave
 863a93a:	c3                   	ret
 863a93b:	90                   	nop

```

```c
// Timer_OneADayItemShop::dispatch_sig @ 0x863a916

/* Timer_OneADayItemShop::dispatch_sig(int, int, unsigned int) */

undefined4 Timer_OneADayItemShop::dispatch_sig(int param_1,int param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = G_CDataManager();
  CItemShop::updateOneADayItemList(*(CItemShop **)(iVar1 + 0x8cbc));
  RegistNextTimer();
  return 1;
}

```

