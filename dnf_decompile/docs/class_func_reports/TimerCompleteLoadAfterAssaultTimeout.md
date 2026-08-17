# TimerCompleteLoadAfterAssaultTimeout

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch_sig

```asm
// === 086376ec TimerCompleteLoadAfterAssaultTimeout::dispatch_sig  [0x086376ec-0x8637719] ===
 86376ec:	55                   	push   %ebp
 86376ed:	89 e5                	mov    %esp,%ebp
 86376ef:	53                   	push   %ebx
 86376f0:	83 ec 14             	sub    $0x14,%esp
 86376f3:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 86376f6:	e8 a5 d9 bf ff       	call   82350a0 <_ZN11pvp_assault21GetInstanceAssaultMgrEv>
 86376fb:	8b 55 10             	mov    0x10(%ebp),%edx
 86376fe:	89 54 24 08          	mov    %edx,0x8(%esp)
 8637702:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8637706:	89 04 24             	mov    %eax,(%esp)
 8637709:	e8 60 81 cb ff       	call   82ef86e <_ZN11pvp_assault11CAssaultMgr33OnTimeoutCompleteLoadAfterAssaultEji>
 863770e:	b8 01 00 00 00       	mov    $0x1,%eax
 8637713:	83 c4 14             	add    $0x14,%esp
 8637716:	5b                   	pop    %ebx
 8637717:	5d                   	pop    %ebp
 8637718:	c3                   	ret
 8637719:	90                   	nop

```

```c
// TimerCompleteLoadAfterAssaultTimeout::dispatch_sig @ 0x86376ec

/* TimerCompleteLoadAfterAssaultTimeout::dispatch_sig(int, int, unsigned int) */

undefined4 TimerCompleteLoadAfterAssaultTimeout::dispatch_sig(int param_1,int param_2,uint param_3)

{
  CAssaultMgr *this;
  
  this = (CAssaultMgr *)pvp_assault::GetInstanceAssaultMgr();
  pvp_assault::CAssaultMgr::OnTimeoutCompleteLoadAfterAssault(this,param_2,param_3);
  return 1;
}

```

---

## registNextTimer

```asm
// === 0863771a TimerCompleteLoadAfterAssaultTimeout::registNextTimer  [0x0863771a-0x863775b] ===
 863771a:	55                   	push   %ebp
 863771b:	89 e5                	mov    %esp,%ebp
 863771d:	83 ec 28             	sub    $0x28,%esp
 8637720:	e8 57 ed ab ff       	call   80f647c <_Z12G_TimerQueuev>
 8637725:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 863772c:	00 
 863772d:	8b 55 10             	mov    0x10(%ebp),%edx
 8637730:	89 54 24 14          	mov    %edx,0x14(%esp)
 8637734:	8b 55 08             	mov    0x8(%ebp),%edx
 8637737:	89 54 24 10          	mov    %edx,0x10(%esp)
 863773b:	c7 44 24 0c 2a 00 00 	movl   $0x2a,0xc(%esp)
 8637742:	00 
 8637743:	8b 55 0c             	mov    0xc(%ebp),%edx
 8637746:	89 54 24 08          	mov    %edx,0x8(%esp)
 863774a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8637751:	00 
 8637752:	89 04 24             	mov    %eax,(%esp)
 8637755:	e8 bc 96 ff ff       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 863775a:	c9                   	leave
 863775b:	c3                   	ret

```

```c
// TimerCompleteLoadAfterAssaultTimeout::registNextTimer @ 0x863771a

/* TimerCompleteLoadAfterAssaultTimeout::registNextTimer(long, int, int) */

void TimerCompleteLoadAfterAssaultTimeout::registNextTimer(long param_1,int param_2,int param_3)

{
  TimerQueue *pTVar1;
  
  pTVar1 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar1,1,param_2,0x2a,param_1,param_3,0);
  return;
}

```

