# advancealtar__Timer_MainTick

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## RegistNextTimerGage

```asm
// === 0812f7b8 advancealtar::Timer_MainTick::RegistNextTimerGage  [0x0812f7b8-0x812f805] ===
 812f7b8:	55                   	push   %ebp
 812f7b9:	89 e5                	mov    %esp,%ebp
 812f7bb:	83 ec 28             	sub    $0x28,%esp
 812f7be:	e8 b9 6c fc ff       	call   80f647c <_Z12G_TimerQueuev>
 812f7c3:	c7 44 24 1c 00 00 00 	movl   $0x0,0x1c(%esp)
 812f7ca:	00 
 812f7cb:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 812f7d2:	00 
 812f7d3:	c7 44 24 10 e8 03 00 	movl   $0x3e8,0x10(%esp)
 812f7da:	00 
 812f7db:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 812f7e2:	00 
 812f7e3:	c7 44 24 0c a6 00 00 	movl   $0xa6,0xc(%esp)
 812f7ea:	00 
 812f7eb:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 812f7f2:	00 
 812f7f3:	c7 44 24 04 08 00 00 	movl   $0x8,0x4(%esp)
 812f7fa:	00 
 812f7fb:	89 04 24             	mov    %eax,(%esp)
 812f7fe:	e8 5d 16 50 00       	call   8630e60 <_ZN10TimerQueue23InsertTimerInMilisecondEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGExij>
 812f803:	c9                   	leave
 812f804:	c3                   	ret
 812f805:	90                   	nop

```

```c
// advancealtar::Timer_MainTick::RegistNextTimerGage @ 0x812f7b8

/* advancealtar::Timer_MainTick::RegistNextTimerGage() */

void advancealtar::Timer_MainTick::RegistNextTimerGage(void)

{
  undefined4 uVar1;
  
  uVar1 = G_TimerQueue();
  TimerQueue::InsertTimerInMilisecond(uVar1,8,0,0xa6,1000,0,0,0);
  return;
}

```

---

## dispatch_sig

```asm
// === 0812f798 advancealtar::Timer_MainTick::dispatch_sig  [0x0812f798-0x812f7b7] ===
 812f798:	55                   	push   %ebp
 812f799:	89 e5                	mov    %esp,%ebp
 812f79b:	83 ec 18             	sub    $0x18,%esp
 812f79e:	e8 eb c9 f9 ff       	call   80cc18e <_Z14G_CGameManagerv>
 812f7a3:	89 04 24             	mov    %eax,(%esp)
 812f7a6:	e8 d7 65 16 00       	call   8295d82 <_ZN12CGameManager18onTimeAdvanceAltarEv>
 812f7ab:	e8 08 00 00 00       	call   812f7b8 <_ZN12advancealtar14Timer_MainTick19RegistNextTimerGageEv>
 812f7b0:	b8 01 00 00 00       	mov    $0x1,%eax
 812f7b5:	c9                   	leave
 812f7b6:	c3                   	ret
 812f7b7:	90                   	nop

```

```c
// advancealtar::Timer_MainTick::dispatch_sig @ 0x812f798

/* advancealtar::Timer_MainTick::dispatch_sig(int, int, unsigned int) */

undefined4 advancealtar::Timer_MainTick::dispatch_sig(int param_1,int param_2,uint param_3)

{
  CGameManager *this;
  
  this = (CGameManager *)G_CGameManager();
  CGameManager::onTimeAdvanceAltar(this);
  RegistNextTimerGage();
  return 1;
}

```

