# Timer_TenMinuteSchedule

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## RegistNextTimer

```asm
// === 086396d2 Timer_TenMinuteSchedule::RegistNextTimer  [0x086396d2-0x8639721] ===
 86396d2:	55                   	push   %ebp
 86396d3:	89 e5                	mov    %esp,%ebp
 86396d5:	83 ec 38             	sub    $0x38,%esp
 86396d8:	c7 45 f4 58 02 00 00 	movl   $0x258,-0xc(%ebp)
 86396df:	e8 98 cd ab ff       	call   80f647c <_Z12G_TimerQueuev>
 86396e4:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 86396eb:	00 
 86396ec:	8b 55 08             	mov    0x8(%ebp),%edx
 86396ef:	89 54 24 14          	mov    %edx,0x14(%esp)
 86396f3:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86396f6:	89 54 24 10          	mov    %edx,0x10(%esp)
 86396fa:	c7 44 24 0c 8e 00 00 	movl   $0x8e,0xc(%esp)
 8639701:	00 
 8639702:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8639709:	00 
 863970a:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8639711:	00 
 8639712:	89 04 24             	mov    %eax,(%esp)
 8639715:	e8 fc 76 ff ff       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 863971a:	b8 01 00 00 00       	mov    $0x1,%eax
 863971f:	c9                   	leave
 8639720:	c3                   	ret
 8639721:	90                   	nop

```

```c
// Timer_TenMinuteSchedule::RegistNextTimer @ 0x86396d2

/* Timer_TenMinuteSchedule::RegistNextTimer(int) */

undefined4 Timer_TenMinuteSchedule::RegistNextTimer(int param_1)

{
  TimerQueue *pTVar1;
  
  pTVar1 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar1,2,0,0x8e,600,param_1,0);
  return 1;
}

```

---

## dispatch_sig

```asm
// === 08639668 Timer_TenMinuteSchedule::dispatch_sig  [0x08639668-0x86396d1] ===
 8639668:	55                   	push   %ebp
 8639669:	89 e5                	mov    %esp,%ebp
 863966b:	83 ec 28             	sub    $0x28,%esp
 863966e:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
 8639672:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 8639676:	75 1e                	jne    8639696 <_ZN23Timer_TenMinuteSchedule12dispatch_sigEiij+0x2e>
 8639678:	e8 72 3f fd ff       	call   860d5ef <_Z25GetInstanceValueStatisticv>
 863967d:	89 04 24             	mov    %eax,(%esp)
 8639680:	e8 1f 42 fd ff       	call   860d8a4 <_ZN15CValueStatistic20InsertValueStatisticEv>
 8639685:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 863968c:	e8 41 00 00 00       	call   86396d2 <_ZN23Timer_TenMinuteSchedule15RegistNextTimerEi>
 8639691:	88 45 f7             	mov    %al,-0x9(%ebp)
 8639694:	eb 22                	jmp    86396b8 <_ZN23Timer_TenMinuteSchedule12dispatch_sigEiij+0x50>
 8639696:	83 7d 10 01          	cmpl   $0x1,0x10(%ebp)
 863969a:	75 1c                	jne    86396b8 <_ZN23Timer_TenMinuteSchedule12dispatch_sigEiij+0x50>
 863969c:	e8 76 43 fd ff       	call   860da17 <_Z31GetInstanceCirculationStatisticv>
 86396a1:	89 04 24             	mov    %eax,(%esp)
 86396a4:	e8 23 46 fd ff       	call   860dccc <_ZN21CCirculationStatistic26InsertCirculationStatisticEv>
 86396a9:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 86396b0:	e8 1d 00 00 00       	call   86396d2 <_ZN23Timer_TenMinuteSchedule15RegistNextTimerEi>
 86396b5:	88 45 f7             	mov    %al,-0x9(%ebp)
 86396b8:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 86396bc:	83 f0 01             	xor    $0x1,%eax
 86396bf:	84 c0                	test   %al,%al
 86396c1:	74 07                	je     86396ca <_ZN23Timer_TenMinuteSchedule12dispatch_sigEiij+0x62>
 86396c3:	b8 00 00 00 00       	mov    $0x0,%eax
 86396c8:	eb 05                	jmp    86396cf <_ZN23Timer_TenMinuteSchedule12dispatch_sigEiij+0x67>
 86396ca:	b8 01 00 00 00       	mov    $0x1,%eax
 86396cf:	c9                   	leave
 86396d0:	c3                   	ret
 86396d1:	90                   	nop

```

```c
// Timer_TenMinuteSchedule::dispatch_sig @ 0x8639668

/* Timer_TenMinuteSchedule::dispatch_sig(int, int, unsigned int) */

bool Timer_TenMinuteSchedule::dispatch_sig(int param_1,int param_2,uint param_3)

{
  char local_d;
  
  local_d = '\0';
  if (param_3 == 0) {
    GetInstanceValueStatistic();
    CValueStatistic::InsertValueStatistic();
    local_d = RegistNextTimer(1);
  }
  else if (param_3 == 1) {
    GetInstanceCirculationStatistic();
    CCirculationStatistic::InsertCirculationStatistic();
    local_d = RegistNextTimer(0);
  }
  return local_d == '\x01';
}

```

