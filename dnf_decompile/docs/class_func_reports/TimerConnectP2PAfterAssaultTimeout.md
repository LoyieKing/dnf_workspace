# TimerConnectP2PAfterAssaultTimeout

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch_sig

```asm
// === 0863775c TimerConnectP2PAfterAssaultTimeout::dispatch_sig  [0x0863775c-0x8637789] ===
 863775c:	55                   	push   %ebp
 863775d:	89 e5                	mov    %esp,%ebp
 863775f:	53                   	push   %ebx
 8637760:	83 ec 14             	sub    $0x14,%esp
 8637763:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 8637766:	e8 35 d9 bf ff       	call   82350a0 <_ZN11pvp_assault21GetInstanceAssaultMgrEv>
 863776b:	8b 55 10             	mov    0x10(%ebp),%edx
 863776e:	89 54 24 08          	mov    %edx,0x8(%esp)
 8637772:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8637776:	89 04 24             	mov    %eax,(%esp)
 8637779:	e8 5a 82 cb ff       	call   82ef9d8 <_ZN11pvp_assault11CAssaultMgr31OnTimeoutConnectP2PAfterAssaultEji>
 863777e:	b8 01 00 00 00       	mov    $0x1,%eax
 8637783:	83 c4 14             	add    $0x14,%esp
 8637786:	5b                   	pop    %ebx
 8637787:	5d                   	pop    %ebp
 8637788:	c3                   	ret
 8637789:	90                   	nop

```

```c
// TimerConnectP2PAfterAssaultTimeout::dispatch_sig @ 0x863775c

/* TimerConnectP2PAfterAssaultTimeout::dispatch_sig(int, int, unsigned int) */

undefined4 TimerConnectP2PAfterAssaultTimeout::dispatch_sig(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = pvp_assault::GetInstanceAssaultMgr();
  pvp_assault::CAssaultMgr::OnTimeoutConnectP2PAfterAssault(uVar1,param_2);
  return 1;
}

```

---

## registNextTimer

```asm
// === 0863778a TimerConnectP2PAfterAssaultTimeout::registNextTimer  [0x0863778a-0x86377cb] ===
 863778a:	55                   	push   %ebp
 863778b:	89 e5                	mov    %esp,%ebp
 863778d:	83 ec 28             	sub    $0x28,%esp
 8637790:	e8 e7 ec ab ff       	call   80f647c <_Z12G_TimerQueuev>
 8637795:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 863779c:	00 
 863779d:	8b 55 10             	mov    0x10(%ebp),%edx
 86377a0:	89 54 24 14          	mov    %edx,0x14(%esp)
 86377a4:	8b 55 08             	mov    0x8(%ebp),%edx
 86377a7:	89 54 24 10          	mov    %edx,0x10(%esp)
 86377ab:	c7 44 24 0c 72 00 00 	movl   $0x72,0xc(%esp)
 86377b2:	00 
 86377b3:	8b 55 0c             	mov    0xc(%ebp),%edx
 86377b6:	89 54 24 08          	mov    %edx,0x8(%esp)
 86377ba:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86377c1:	00 
 86377c2:	89 04 24             	mov    %eax,(%esp)
 86377c5:	e8 4c 96 ff ff       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 86377ca:	c9                   	leave
 86377cb:	c3                   	ret

```

```c
// TimerConnectP2PAfterAssaultTimeout::registNextTimer @ 0x863778a

/* TimerConnectP2PAfterAssaultTimeout::registNextTimer(long, int, int) */

void TimerConnectP2PAfterAssaultTimeout::registNextTimer(long param_1,int param_2,int param_3)

{
  TimerQueue *pTVar1;
  
  pTVar1 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar1,1,param_2,0x72,param_1,param_3,0);
  return;
}

```

