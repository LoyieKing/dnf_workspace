# TimerEndAssault

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch_sig

```asm
// === 0863760c TimerEndAssault::dispatch_sig  [0x0863760c-0x8637639] ===
 863760c:	55                   	push   %ebp
 863760d:	89 e5                	mov    %esp,%ebp
 863760f:	53                   	push   %ebx
 8637610:	83 ec 14             	sub    $0x14,%esp
 8637613:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 8637616:	e8 85 da bf ff       	call   82350a0 <_ZN11pvp_assault21GetInstanceAssaultMgrEv>
 863761b:	8b 55 10             	mov    0x10(%ebp),%edx
 863761e:	89 54 24 08          	mov    %edx,0x8(%esp)
 8637622:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8637626:	89 04 24             	mov    %eax,(%esp)
 8637629:	e8 7a 84 cb ff       	call   82efaa8 <_ZN11pvp_assault11CAssaultMgr19OnTimeoutEndAssaultEji>
 863762e:	b8 01 00 00 00       	mov    $0x1,%eax
 8637633:	83 c4 14             	add    $0x14,%esp
 8637636:	5b                   	pop    %ebx
 8637637:	5d                   	pop    %ebp
 8637638:	c3                   	ret
 8637639:	90                   	nop

```

```c
// TimerEndAssault::dispatch_sig @ 0x863760c

/* TimerEndAssault::dispatch_sig(int, int, unsigned int) */

undefined4 TimerEndAssault::dispatch_sig(int param_1,int param_2,uint param_3)

{
  CAssaultMgr *this;
  
  this = (CAssaultMgr *)pvp_assault::GetInstanceAssaultMgr();
  pvp_assault::CAssaultMgr::OnTimeoutEndAssault(this,param_2,param_3);
  return 1;
}

```

---

## registNextTimer

```asm
// === 0863763a TimerEndAssault::registNextTimer  [0x0863763a-0x863767b] ===
 863763a:	55                   	push   %ebp
 863763b:	89 e5                	mov    %esp,%ebp
 863763d:	83 ec 28             	sub    $0x28,%esp
 8637640:	e8 37 ee ab ff       	call   80f647c <_Z12G_TimerQueuev>
 8637645:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 863764c:	00 
 863764d:	8b 55 10             	mov    0x10(%ebp),%edx
 8637650:	89 54 24 14          	mov    %edx,0x14(%esp)
 8637654:	8b 55 08             	mov    0x8(%ebp),%edx
 8637657:	89 54 24 10          	mov    %edx,0x10(%esp)
 863765b:	c7 44 24 0c 70 00 00 	movl   $0x70,0xc(%esp)
 8637662:	00 
 8637663:	8b 55 0c             	mov    0xc(%ebp),%edx
 8637666:	89 54 24 08          	mov    %edx,0x8(%esp)
 863766a:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8637671:	00 
 8637672:	89 04 24             	mov    %eax,(%esp)
 8637675:	e8 9c 97 ff ff       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 863767a:	c9                   	leave
 863767b:	c3                   	ret

```

```c
// TimerEndAssault::registNextTimer @ 0x863763a

/* TimerEndAssault::registNextTimer(long, int, int) */

void TimerEndAssault::registNextTimer(long param_1,int param_2,int param_3)

{
  TimerQueue *pTVar1;
  
  pTVar1 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar1,2,param_2,0x70,param_1,param_3,0);
  return;
}

```

