# Timer_GenerateCaptchaData

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## RegistNextTimer

```asm
// === 0863b2ba Timer_GenerateCaptchaData::RegistNextTimer  [0x0863b2ba-0x863b2fd] ===
 863b2ba:	55                   	push   %ebp
 863b2bb:	89 e5                	mov    %esp,%ebp
 863b2bd:	83 ec 28             	sub    $0x28,%esp
 863b2c0:	e8 b7 b1 ab ff       	call   80f647c <_Z12G_TimerQueuev>
 863b2c5:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 863b2cc:	00 
 863b2cd:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 863b2d4:	00 
 863b2d5:	8b 55 08             	mov    0x8(%ebp),%edx
 863b2d8:	89 54 24 10          	mov    %edx,0x10(%esp)
 863b2dc:	c7 44 24 0c a1 00 00 	movl   $0xa1,0xc(%esp)
 863b2e3:	00 
 863b2e4:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 863b2eb:	00 
 863b2ec:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 863b2f3:	00 
 863b2f4:	89 04 24             	mov    %eax,(%esp)
 863b2f7:	e8 1a 5b ff ff       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 863b2fc:	c9                   	leave
 863b2fd:	c3                   	ret

```

```c
// Timer_GenerateCaptchaData::RegistNextTimer @ 0x863b2ba

/* Timer_GenerateCaptchaData::RegistNextTimer(int) */

void Timer_GenerateCaptchaData::RegistNextTimer(int param_1)

{
  TimerQueue *pTVar1;
  
  pTVar1 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar1,2,0,0xa1,param_1,0,0);
  return;
}

```

---

## dispatch_sig

```asm
// === 0863b29c Timer_GenerateCaptchaData::dispatch_sig  [0x0863b29c-0x863b2b9] ===
 863b29c:	55                   	push   %ebp
 863b29d:	89 e5                	mov    %esp,%ebp
 863b29f:	83 ec 18             	sub    $0x18,%esp
 863b2a2:	e8 09 22 c6 ff       	call   829d4b0 <_ZN10GlobalData19GenerateCaptchaDataEv>
 863b2a7:	c7 04 24 03 00 00 00 	movl   $0x3,(%esp)
 863b2ae:	e8 07 00 00 00       	call   863b2ba <_ZN25Timer_GenerateCaptchaData15RegistNextTimerEi>
 863b2b3:	b8 01 00 00 00       	mov    $0x1,%eax
 863b2b8:	c9                   	leave
 863b2b9:	c3                   	ret

```

```c
// Timer_GenerateCaptchaData::dispatch_sig @ 0x863b29c

/* Timer_GenerateCaptchaData::dispatch_sig(int, int, unsigned int) */

undefined4 Timer_GenerateCaptchaData::dispatch_sig(int param_1,int param_2,uint param_3)

{
  GlobalData::GenerateCaptchaData();
  RegistNextTimer(3);
  return 1;
}

```

