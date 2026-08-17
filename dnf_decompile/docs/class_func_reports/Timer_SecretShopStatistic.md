# Timer_SecretShopStatistic

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## RegistNextTimer

```asm
// === 086397ee Timer_SecretShopStatistic::RegistNextTimer  [0x086397ee-0x8639833] ===
 86397ee:	55                   	push   %ebp
 86397ef:	89 e5                	mov    %esp,%ebp
 86397f1:	83 ec 28             	sub    $0x28,%esp
 86397f4:	e8 83 cc ab ff       	call   80f647c <_Z12G_TimerQueuev>
 86397f9:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 8639800:	00 
 8639801:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 8639808:	00 
 8639809:	c7 44 24 10 3c 00 00 	movl   $0x3c,0x10(%esp)
 8639810:	00 
 8639811:	c7 44 24 0c 90 00 00 	movl   $0x90,0xc(%esp)
 8639818:	00 
 8639819:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8639820:	00 
 8639821:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8639828:	00 
 8639829:	89 04 24             	mov    %eax,(%esp)
 863982c:	e8 e5 75 ff ff       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 8639831:	c9                   	leave
 8639832:	c3                   	ret
 8639833:	90                   	nop

```

```c
// Timer_SecretShopStatistic::RegistNextTimer @ 0x86397ee

/* Timer_SecretShopStatistic::RegistNextTimer() */

void Timer_SecretShopStatistic::RegistNextTimer(void)

{
  TimerQueue *pTVar1;
  
  pTVar1 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar1,2,0,0x90,0x3c,0,0);
  return;
}

```

---

## dispatch_sig

```asm
// === 086397ce Timer_SecretShopStatistic::dispatch_sig  [0x086397ce-0x86397ed] ===
 86397ce:	55                   	push   %ebp
 86397cf:	89 e5                	mov    %esp,%ebp
 86397d1:	83 ec 18             	sub    $0x18,%esp
 86397d4:	a1 54 be 40 09       	mov    0x940be54,%eax
 86397d9:	89 04 24             	mov    %eax,(%esp)
 86397dc:	e8 59 1d fc ff       	call   85fb53a <_ZN10secretshop11CSecretShop23SendSecretShopStatisticEv>
 86397e1:	e8 08 00 00 00       	call   86397ee <_ZN25Timer_SecretShopStatistic15RegistNextTimerEv>
 86397e6:	b8 01 00 00 00       	mov    $0x1,%eax
 86397eb:	c9                   	leave
 86397ec:	c3                   	ret
 86397ed:	90                   	nop

```

```c
// Timer_SecretShopStatistic::dispatch_sig @ 0x86397ce

/* Timer_SecretShopStatistic::dispatch_sig(int, int, unsigned int) */

undefined4 Timer_SecretShopStatistic::dispatch_sig(int param_1,int param_2,uint param_3)

{
  secretshop::CSecretShop::SendSecretShopStatistic(GlobalData::s_secret_shop);
  RegistNextTimer();
  return 1;
}

```

