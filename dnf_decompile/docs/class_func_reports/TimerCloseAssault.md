# TimerCloseAssault

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch_sig

```asm
// === 0863767c TimerCloseAssault::dispatch_sig  [0x0863767c-0x86376a9] ===
 863767c:	55                   	push   %ebp
 863767d:	89 e5                	mov    %esp,%ebp
 863767f:	53                   	push   %ebx
 8637680:	83 ec 14             	sub    $0x14,%esp
 8637683:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 8637686:	e8 15 da bf ff       	call   82350a0 <_ZN11pvp_assault21GetInstanceAssaultMgrEv>
 863768b:	8b 55 10             	mov    0x10(%ebp),%edx
 863768e:	89 54 24 08          	mov    %edx,0x8(%esp)
 8637692:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8637696:	89 04 24             	mov    %eax,(%esp)
 8637699:	e8 60 84 cb ff       	call   82efafe <_ZN11pvp_assault11CAssaultMgr21OnTimeoutCloseAssaultEji>
 863769e:	b8 01 00 00 00       	mov    $0x1,%eax
 86376a3:	83 c4 14             	add    $0x14,%esp
 86376a6:	5b                   	pop    %ebx
 86376a7:	5d                   	pop    %ebp
 86376a8:	c3                   	ret
 86376a9:	90                   	nop

```

```c
// TimerCloseAssault::dispatch_sig @ 0x863767c

/* TimerCloseAssault::dispatch_sig(int, int, unsigned int) */

undefined4 TimerCloseAssault::dispatch_sig(int param_1,int param_2,uint param_3)

{
  CAssaultMgr *this;
  
  this = (CAssaultMgr *)pvp_assault::GetInstanceAssaultMgr();
  pvp_assault::CAssaultMgr::OnTimeoutCloseAssault(this,param_2,param_3);
  return 1;
}

```

---

## registNextTimer

```asm
// === 086376aa TimerCloseAssault::registNextTimer  [0x086376aa-0x86376eb] ===
 86376aa:	55                   	push   %ebp
 86376ab:	89 e5                	mov    %esp,%ebp
 86376ad:	83 ec 28             	sub    $0x28,%esp
 86376b0:	e8 c7 ed ab ff       	call   80f647c <_Z12G_TimerQueuev>
 86376b5:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 86376bc:	00 
 86376bd:	8b 55 10             	mov    0x10(%ebp),%edx
 86376c0:	89 54 24 14          	mov    %edx,0x14(%esp)
 86376c4:	8b 55 08             	mov    0x8(%ebp),%edx
 86376c7:	89 54 24 10          	mov    %edx,0x10(%esp)
 86376cb:	c7 44 24 0c 71 00 00 	movl   $0x71,0xc(%esp)
 86376d2:	00 
 86376d3:	8b 55 0c             	mov    0xc(%ebp),%edx
 86376d6:	89 54 24 08          	mov    %edx,0x8(%esp)
 86376da:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 86376e1:	00 
 86376e2:	89 04 24             	mov    %eax,(%esp)
 86376e5:	e8 2c 97 ff ff       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 86376ea:	c9                   	leave
 86376eb:	c3                   	ret

```

```c
// TimerCloseAssault::registNextTimer @ 0x86376aa

/* TimerCloseAssault::registNextTimer(long, int, int) */

void TimerCloseAssault::registNextTimer(long param_1,int param_2,int param_3)

{
  TimerQueue *pTVar1;
  
  pTVar1 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar1,2,param_2,0x71,param_1,param_3,0);
  return;
}

```

