# TimerConnectP2PAssaultTimeout

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch_sig

```asm
// === 0863759c TimerConnectP2PAssaultTimeout::dispatch_sig  [0x0863759c-0x86375c9] ===
 863759c:	55                   	push   %ebp
 863759d:	89 e5                	mov    %esp,%ebp
 863759f:	53                   	push   %ebx
 86375a0:	83 ec 14             	sub    $0x14,%esp
 86375a3:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 86375a6:	e8 f5 da bf ff       	call   82350a0 <_ZN11pvp_assault21GetInstanceAssaultMgrEv>
 86375ab:	8b 55 10             	mov    0x10(%ebp),%edx
 86375ae:	89 54 24 08          	mov    %edx,0x8(%esp)
 86375b2:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 86375b6:	89 04 24             	mov    %eax,(%esp)
 86375b9:	e8 94 84 cb ff       	call   82efa52 <_ZN11pvp_assault11CAssaultMgr19OnTimeoutConnectP2PEji>
 86375be:	b8 01 00 00 00       	mov    $0x1,%eax
 86375c3:	83 c4 14             	add    $0x14,%esp
 86375c6:	5b                   	pop    %ebx
 86375c7:	5d                   	pop    %ebp
 86375c8:	c3                   	ret
 86375c9:	90                   	nop

```

```c
// TimerConnectP2PAssaultTimeout::dispatch_sig @ 0x863759c

/* TimerConnectP2PAssaultTimeout::dispatch_sig(int, int, unsigned int) */

undefined4 TimerConnectP2PAssaultTimeout::dispatch_sig(int param_1,int param_2,uint param_3)

{
  CAssaultMgr *this;
  
  this = (CAssaultMgr *)pvp_assault::GetInstanceAssaultMgr();
  pvp_assault::CAssaultMgr::OnTimeoutConnectP2P(this,param_2,param_3);
  return 1;
}

```

---

## registNextTimer

```asm
// === 086375ca TimerConnectP2PAssaultTimeout::registNextTimer  [0x086375ca-0x863760b] ===
 86375ca:	55                   	push   %ebp
 86375cb:	89 e5                	mov    %esp,%ebp
 86375cd:	83 ec 28             	sub    $0x28,%esp
 86375d0:	e8 a7 ee ab ff       	call   80f647c <_Z12G_TimerQueuev>
 86375d5:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 86375dc:	00 
 86375dd:	8b 55 10             	mov    0x10(%ebp),%edx
 86375e0:	89 54 24 14          	mov    %edx,0x14(%esp)
 86375e4:	8b 55 08             	mov    0x8(%ebp),%edx
 86375e7:	89 54 24 10          	mov    %edx,0x10(%esp)
 86375eb:	c7 44 24 0c 6f 00 00 	movl   $0x6f,0xc(%esp)
 86375f2:	00 
 86375f3:	8b 55 0c             	mov    0xc(%ebp),%edx
 86375f6:	89 54 24 08          	mov    %edx,0x8(%esp)
 86375fa:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8637601:	00 
 8637602:	89 04 24             	mov    %eax,(%esp)
 8637605:	e8 0c 98 ff ff       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 863760a:	c9                   	leave
 863760b:	c3                   	ret

```

```c
// TimerConnectP2PAssaultTimeout::registNextTimer @ 0x86375ca

/* TimerConnectP2PAssaultTimeout::registNextTimer(long, int, int) */

void TimerConnectP2PAssaultTimeout::registNextTimer(long param_1,int param_2,int param_3)

{
  TimerQueue *pTVar1;
  
  pTVar1 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar1,2,param_2,0x6f,param_1,param_3,0);
  return;
}

```

