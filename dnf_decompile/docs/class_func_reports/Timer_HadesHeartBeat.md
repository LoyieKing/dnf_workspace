# Timer_HadesHeartBeat

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch_sig

```asm
// === 0863a760 Timer_HadesHeartBeat::dispatch_sig  [0x0863a760-0x863a7c1] ===
 863a760:	55                   	push   %ebp
 863a761:	89 e5                	mov    %esp,%ebp
 863a763:	53                   	push   %ebx
 863a764:	83 ec 14             	sub    $0x14,%esp
 863a767:	a1 34 be 40 09       	mov    0x940be34,%eax
 863a76c:	89 04 24             	mov    %eax,(%esp)
 863a76f:	e8 b8 61 e3 ff       	call   847092c <_ZN15BaseServerProxy14GetSocketStateEv>
 863a774:	85 c0                	test   %eax,%eax
 863a776:	0f 94 c0             	sete   %al
 863a779:	84 c0                	test   %al,%al
 863a77b:	74 39                	je     863a7b6 <_ZN20Timer_HadesHeartBeat12dispatch_sigEiij+0x56>
 863a77d:	e8 ff 19 a9 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 863a782:	89 04 24             	mov    %eax,(%esp)
 863a785:	e8 40 03 b1 ff       	call   814aaca <_ZN12CEnvironment14get_channel_noEv>
 863a78a:	89 c3                	mov    %eax,%ebx
 863a78c:	e8 f0 19 a9 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 863a791:	89 04 24             	mov    %eax,(%esp)
 863a794:	e8 d1 c5 c6 ff       	call   82a6d6a <_ZN12CEnvironment12get_udp_portEv>
 863a799:	0f b7 d0             	movzwl %ax,%edx
 863a79c:	a1 34 be 40 09       	mov    0x940be34,%eax
 863a7a1:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 863a7a5:	89 54 24 04          	mov    %edx,0x4(%esp)
 863a7a9:	89 04 24             	mov    %eax,(%esp)
 863a7ac:	e8 d1 5e e3 ff       	call   8470682 <_ZN17CHadesServerProxy19SendHeartBeatPacketEti>
 863a7b1:	e8 0c 00 00 00       	call   863a7c2 <_ZN20Timer_HadesHeartBeat15registNextTimerEv>
 863a7b6:	b8 01 00 00 00       	mov    $0x1,%eax
 863a7bb:	83 c4 14             	add    $0x14,%esp
 863a7be:	5b                   	pop    %ebx
 863a7bf:	5d                   	pop    %ebp
 863a7c0:	c3                   	ret
 863a7c1:	90                   	nop

```

```c
// Timer_HadesHeartBeat::dispatch_sig @ 0x863a760

/* Timer_HadesHeartBeat::dispatch_sig(int, int, unsigned int) */

undefined4 Timer_HadesHeartBeat::dispatch_sig(int param_1,int param_2,uint param_3)

{
  ushort uVar1;
  int iVar2;
  CEnvironment *pCVar3;
  
  iVar2 = BaseServerProxy::GetSocketState(GlobalData::s_hades_proxy);
  if (iVar2 == 0) {
    pCVar3 = (CEnvironment *)G_CEnvironment();
    iVar2 = CEnvironment::get_channel_no(pCVar3);
    pCVar3 = (CEnvironment *)G_CEnvironment();
    uVar1 = CEnvironment::get_udp_port(pCVar3);
    CHadesServerProxy::SendHeartBeatPacket
              ((CHadesServerProxy *)GlobalData::s_hades_proxy,uVar1,iVar2);
    registNextTimer();
  }
  return 1;
}

```

---

## registNextTimer

```asm
// === 0863a7c2 Timer_HadesHeartBeat::registNextTimer  [0x0863a7c2-0x863a807] ===
 863a7c2:	55                   	push   %ebp
 863a7c3:	89 e5                	mov    %esp,%ebp
 863a7c5:	83 ec 28             	sub    $0x28,%esp
 863a7c8:	e8 af bc ab ff       	call   80f647c <_Z12G_TimerQueuev>
 863a7cd:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 863a7d4:	00 
 863a7d5:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 863a7dc:	00 
 863a7dd:	c7 44 24 10 3c 00 00 	movl   $0x3c,0x10(%esp)
 863a7e4:	00 
 863a7e5:	c7 44 24 0c 96 00 00 	movl   $0x96,0xc(%esp)
 863a7ec:	00 
 863a7ed:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 863a7f4:	00 
 863a7f5:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 863a7fc:	00 
 863a7fd:	89 04 24             	mov    %eax,(%esp)
 863a800:	e8 11 66 ff ff       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 863a805:	c9                   	leave
 863a806:	c3                   	ret
 863a807:	90                   	nop

```

```c
// Timer_HadesHeartBeat::registNextTimer @ 0x863a7c2

/* Timer_HadesHeartBeat::registNextTimer() */

void Timer_HadesHeartBeat::registNextTimer(void)

{
  TimerQueue *pTVar1;
  
  pTVar1 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar1,2,0,0x96,0x3c,0,0);
  return;
}

```

