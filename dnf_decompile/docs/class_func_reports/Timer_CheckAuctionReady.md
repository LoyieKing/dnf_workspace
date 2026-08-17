# Timer_CheckAuctionReady

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## RegistNextTimer

```asm
// === 0863a858 Timer_CheckAuctionReady::RegistNextTimer  [0x0863a858-0x863a89d] ===
 863a858:	55                   	push   %ebp
 863a859:	89 e5                	mov    %esp,%ebp
 863a85b:	83 ec 28             	sub    $0x28,%esp
 863a85e:	e8 19 bc ab ff       	call   80f647c <_Z12G_TimerQueuev>
 863a863:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 863a86a:	00 
 863a86b:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 863a872:	00 
 863a873:	c7 44 24 10 3c 00 00 	movl   $0x3c,0x10(%esp)
 863a87a:	00 
 863a87b:	c7 44 24 0c 98 00 00 	movl   $0x98,0xc(%esp)
 863a882:	00 
 863a883:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 863a88a:	00 
 863a88b:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 863a892:	00 
 863a893:	89 04 24             	mov    %eax,(%esp)
 863a896:	e8 7b 65 ff ff       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 863a89b:	c9                   	leave
 863a89c:	c3                   	ret
 863a89d:	90                   	nop

```

```c
// Timer_CheckAuctionReady::RegistNextTimer @ 0x863a858

/* Timer_CheckAuctionReady::RegistNextTimer() */

void Timer_CheckAuctionReady::RegistNextTimer(void)

{
  TimerQueue *pTVar1;
  
  pTVar1 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar1,2,0,0x98,0x3c,0,0);
  return;
}

```

---

## dispatch_sig

```asm
// === 0863a808 Timer_CheckAuctionReady::dispatch_sig  [0x0863a808-0x863a857] ===
 863a808:	55                   	push   %ebp
 863a809:	89 e5                	mov    %esp,%ebp
 863a80b:	83 ec 18             	sub    $0x18,%esp
 863a80e:	a1 48 be 40 09       	mov    0x940be48,%eax
 863a813:	89 04 24             	mov    %eax,(%esp)
 863a816:	e8 29 a7 bf ff       	call   8234f44 <_ZN19CAuctionServerProxy9IsRunningEv>
 863a81b:	83 f0 01             	xor    $0x1,%eax
 863a81e:	84 c0                	test   %al,%al
 863a820:	74 0d                	je     863a82f <_ZN23Timer_CheckAuctionReady12dispatch_sigEiij+0x27>
 863a822:	a1 48 be 40 09       	mov    0x940be48,%eax
 863a827:	89 04 24             	mov    %eax,(%esp)
 863a82a:	e8 4b d3 cb ff       	call   82f7b7a <_ZN19CAuctionServerProxy27SendCheckAuctionReadyPacketEv>
 863a82f:	a1 4c be 40 09       	mov    0x940be4c,%eax
 863a834:	89 04 24             	mov    %eax,(%esp)
 863a837:	e8 18 a7 bf ff       	call   8234f54 <_ZN23CCeraAuctionServerProxy9IsRunningEv>
 863a83c:	83 f0 01             	xor    $0x1,%eax
 863a83f:	84 c0                	test   %al,%al
 863a841:	74 0d                	je     863a850 <_ZN23Timer_CheckAuctionReady12dispatch_sigEiij+0x48>
 863a843:	a1 4c be 40 09       	mov    0x940be4c,%eax
 863a848:	89 04 24             	mov    %eax,(%esp)
 863a84b:	e8 3a d4 cb ff       	call   82f7c8a <_ZN23CCeraAuctionServerProxy31SendCheckCeraAuctionReadyPacketEv>
 863a850:	b8 01 00 00 00       	mov    $0x1,%eax
 863a855:	c9                   	leave
 863a856:	c3                   	ret
 863a857:	90                   	nop

```

```c
// Timer_CheckAuctionReady::dispatch_sig @ 0x863a808

/* Timer_CheckAuctionReady::dispatch_sig(int, int, unsigned int) */

undefined4 Timer_CheckAuctionReady::dispatch_sig(int param_1,int param_2,uint param_3)

{
  char cVar1;
  
  cVar1 = CAuctionServerProxy::IsRunning(GlobalData::s_auction_proxy);
  if (cVar1 != '\x01') {
    CAuctionServerProxy::SendCheckAuctionReadyPacket(GlobalData::s_auction_proxy);
  }
  cVar1 = CCeraAuctionServerProxy::IsRunning(GlobalData::s_cera_auction_proxy);
  if (cVar1 != '\x01') {
    CCeraAuctionServerProxy::SendCheckCeraAuctionReadyPacket(GlobalData::s_cera_auction_proxy);
  }
  return 1;
}

```

