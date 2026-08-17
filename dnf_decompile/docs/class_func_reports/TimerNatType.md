# TimerNatType

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## RegistNextTimer

```asm
// === 08635c5a TimerNatType::RegistNextTimer  [0x08635c5a-0x8635ca9] ===
 8635c5a:	55                   	push   %ebp
 8635c5b:	89 e5                	mov    %esp,%ebp
 8635c5d:	83 ec 38             	sub    $0x38,%esp
 8635c60:	c7 45 f4 80 51 01 00 	movl   $0x15180,-0xc(%ebp)
 8635c67:	e8 10 08 ac ff       	call   80f647c <_Z12G_TimerQueuev>
 8635c6c:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 8635c73:	00 
 8635c74:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 8635c7b:	00 
 8635c7c:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8635c7f:	89 54 24 10          	mov    %edx,0x10(%esp)
 8635c83:	c7 44 24 0c 5a 00 00 	movl   $0x5a,0xc(%esp)
 8635c8a:	00 
 8635c8b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8635c92:	00 
 8635c93:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8635c9a:	00 
 8635c9b:	89 04 24             	mov    %eax,(%esp)
 8635c9e:	e8 73 b1 ff ff       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 8635ca3:	b8 01 00 00 00       	mov    $0x1,%eax
 8635ca8:	c9                   	leave
 8635ca9:	c3                   	ret

```

```c
// TimerNatType::RegistNextTimer @ 0x8635c5a

/* TimerNatType::RegistNextTimer() */

undefined4 TimerNatType::RegistNextTimer(void)

{
  TimerQueue *pTVar1;
  
  pTVar1 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar1,2,0,0x5a,0x15180,0,0);
  return 1;
}

```

---

## dispatch_sig

```asm
// === 08635c2c TimerNatType::dispatch_sig  [0x08635c2c-0x8635c59] ===
 8635c2c:	55                   	push   %ebp
 8635c2d:	89 e5                	mov    %esp,%ebp
 8635c2f:	83 ec 18             	sub    $0x18,%esp
 8635c32:	e8 70 47 aa ff       	call   80da3a7 <_Z11G_GameWorldv>
 8635c37:	89 04 24             	mov    %eax,(%esp)
 8635c3a:	e8 7b e7 bf ff       	call   82343ba <_ZN9GameWorld20GetStatisticsNatTypeEv>
 8635c3f:	89 04 24             	mov    %eax,(%esp)
 8635c42:	e8 21 6d fd ff       	call   860c968 <_ZN17StatisticsNatType13UpdateNatTypeEv>
 8635c47:	8b 45 08             	mov    0x8(%ebp),%eax
 8635c4a:	89 04 24             	mov    %eax,(%esp)
 8635c4d:	e8 08 00 00 00       	call   8635c5a <_ZN12TimerNatType15RegistNextTimerEv>
 8635c52:	b8 01 00 00 00       	mov    $0x1,%eax
 8635c57:	c9                   	leave
 8635c58:	c3                   	ret
 8635c59:	90                   	nop

```

```c
// TimerNatType::dispatch_sig @ 0x8635c2c

/* TimerNatType::dispatch_sig(int, int, unsigned int) */

undefined4 TimerNatType::dispatch_sig(int param_1,int param_2,uint param_3)

{
  GameWorld *this;
  
  this = (GameWorld *)G_GameWorld();
  GameWorld::GetStatisticsNatType(this);
  StatisticsNatType::UpdateNatType();
  RegistNextTimer();
  return 1;
}

```

