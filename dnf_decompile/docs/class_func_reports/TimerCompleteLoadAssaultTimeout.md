# TimerCompleteLoadAssaultTimeout

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch_sig

```asm
// === 0863752c TimerCompleteLoadAssaultTimeout::dispatch_sig  [0x0863752c-0x8637559] ===
 863752c:	55                   	push   %ebp
 863752d:	89 e5                	mov    %esp,%ebp
 863752f:	53                   	push   %ebx
 8637530:	83 ec 14             	sub    $0x14,%esp
 8637533:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 8637536:	e8 65 db bf ff       	call   82350a0 <_ZN11pvp_assault21GetInstanceAssaultMgrEv>
 863753b:	8b 55 10             	mov    0x10(%ebp),%edx
 863753e:	89 54 24 08          	mov    %edx,0x8(%esp)
 8637542:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8637546:	89 04 24             	mov    %eax,(%esp)
 8637549:	e8 ca 82 cb ff       	call   82ef818 <_ZN11pvp_assault11CAssaultMgr21OnTimeoutCompleteLoadEji>
 863754e:	b8 01 00 00 00       	mov    $0x1,%eax
 8637553:	83 c4 14             	add    $0x14,%esp
 8637556:	5b                   	pop    %ebx
 8637557:	5d                   	pop    %ebp
 8637558:	c3                   	ret
 8637559:	90                   	nop

```

```c
// TimerCompleteLoadAssaultTimeout::dispatch_sig @ 0x863752c

/* TimerCompleteLoadAssaultTimeout::dispatch_sig(int, int, unsigned int) */

undefined4 TimerCompleteLoadAssaultTimeout::dispatch_sig(int param_1,int param_2,uint param_3)

{
  CAssaultMgr *this;
  
  this = (CAssaultMgr *)pvp_assault::GetInstanceAssaultMgr();
  pvp_assault::CAssaultMgr::OnTimeoutCompleteLoad(this,param_2,param_3);
  return 1;
}

```

---

## registNextTimer

```asm
// === 0863755a TimerCompleteLoadAssaultTimeout::registNextTimer  [0x0863755a-0x863759b] ===
 863755a:	55                   	push   %ebp
 863755b:	89 e5                	mov    %esp,%ebp
 863755d:	83 ec 28             	sub    $0x28,%esp
 8637560:	e8 17 ef ab ff       	call   80f647c <_Z12G_TimerQueuev>
 8637565:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 863756c:	00 
 863756d:	8b 55 10             	mov    0x10(%ebp),%edx
 8637570:	89 54 24 14          	mov    %edx,0x14(%esp)
 8637574:	8b 55 08             	mov    0x8(%ebp),%edx
 8637577:	89 54 24 10          	mov    %edx,0x10(%esp)
 863757b:	c7 44 24 0c 6e 00 00 	movl   $0x6e,0xc(%esp)
 8637582:	00 
 8637583:	8b 55 0c             	mov    0xc(%ebp),%edx
 8637586:	89 54 24 08          	mov    %edx,0x8(%esp)
 863758a:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8637591:	00 
 8637592:	89 04 24             	mov    %eax,(%esp)
 8637595:	e8 7c 98 ff ff       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 863759a:	c9                   	leave
 863759b:	c3                   	ret

```

```c
// TimerCompleteLoadAssaultTimeout::registNextTimer @ 0x863755a

/* TimerCompleteLoadAssaultTimeout::registNextTimer(long, int, int) */

void TimerCompleteLoadAssaultTimeout::registNextTimer(long param_1,int param_2,int param_3)

{
  TimerQueue *pTVar1;
  
  pTVar1 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar1,2,param_2,0x6e,param_1,param_3,0);
  return;
}

```

