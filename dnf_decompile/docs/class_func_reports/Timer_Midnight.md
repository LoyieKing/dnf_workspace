# Timer_Midnight

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## RegistNextTimer

```asm
// === 08639554 Timer_Midnight::RegistNextTimer  [0x08639554-0x8639667] ===
 8639554:	55                   	push   %ebp
 8639555:	89 e5                	mov    %esp,%ebp
 8639557:	57                   	push   %edi
 8639558:	56                   	push   %esi
 8639559:	53                   	push   %ebx
 863955a:	83 ec 7c             	sub    $0x7c,%esp
 863955d:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8639564:	e8 35 27 a9 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8639569:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 863956c:	8d 45 98             	lea    -0x68(%ebp),%eax
 863956f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8639573:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8639576:	89 04 24             	mov    %eax,(%esp)
 8639579:	e8 e2 4d a4 ff       	call   807e360 <localtime_r@plt>
 863957e:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8639581:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8639584:	8b 40 08             	mov    0x8(%eax),%eax
 8639587:	89 45 dc             	mov    %eax,-0x24(%ebp)
 863958a:	8b 45 d8             	mov    -0x28(%ebp),%eax
 863958d:	8b 38                	mov    (%eax),%edi
 863958f:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8639592:	8b 70 04             	mov    0x4(%eax),%esi
 8639595:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8639598:	8b 58 08             	mov    0x8(%eax),%ebx
 863959b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 86395a2:	00 
 86395a3:	c7 44 24 08 93 12 00 	movl   $0x1293,0x8(%esp)
 86395aa:	00 
 86395ab:	c7 44 24 04 20 81 ce 	movl   $0x8ce8120,0x4(%esp)
 86395b2:	08 
 86395b3:	8d 45 c8             	lea    -0x38(%ebp),%eax
 86395b6:	89 04 24             	mov    %eax,(%esp)
 86395b9:	e8 5a 61 f1 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 86395be:	89 7c 24 10          	mov    %edi,0x10(%esp)
 86395c2:	89 74 24 0c          	mov    %esi,0xc(%esp)
 86395c6:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 86395ca:	c7 44 24 04 24 6d ce 	movl   $0x8ce6d24,0x4(%esp)
 86395d1:	08 
 86395d2:	8d 45 c8             	lea    -0x38(%ebp),%eax
 86395d5:	89 04 24             	mov    %eax,(%esp)
 86395d8:	e8 ab 61 f1 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 86395dd:	8b 45 d8             	mov    -0x28(%ebp),%eax
 86395e0:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 86395e7:	8b 45 d8             	mov    -0x28(%ebp),%eax
 86395ea:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 86395f1:	8b 45 d8             	mov    -0x28(%ebp),%eax
 86395f4:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 86395fa:	8b 45 d8             	mov    -0x28(%ebp),%eax
 86395fd:	89 04 24             	mov    %eax,(%esp)
 8639600:	e8 1b 52 a4 ff       	call   807e820 <mktime@plt>
 8639605:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8639608:	81 45 e0 80 51 01 00 	addl   $0x15180,-0x20(%ebp)
 863960f:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8639612:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8639615:	89 d1                	mov    %edx,%ecx
 8639617:	29 c1                	sub    %eax,%ecx
 8639619:	89 c8                	mov    %ecx,%eax
 863961b:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 863961e:	e8 59 ce ab ff       	call   80f647c <_Z12G_TimerQueuev>
 8639623:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 863962a:	00 
 863962b:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 8639632:	00 
 8639633:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8639636:	89 54 24 10          	mov    %edx,0x10(%esp)
 863963a:	c7 44 24 0c 8d 00 00 	movl   $0x8d,0xc(%esp)
 8639641:	00 
 8639642:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8639649:	00 
 863964a:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8639651:	00 
 8639652:	89 04 24             	mov    %eax,(%esp)
 8639655:	e8 bc 77 ff ff       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 863965a:	b8 01 00 00 00       	mov    $0x1,%eax
 863965f:	83 c4 7c             	add    $0x7c,%esp
 8639662:	5b                   	pop    %ebx
 8639663:	5e                   	pop    %esi
 8639664:	5f                   	pop    %edi
 8639665:	5d                   	pop    %ebp
 8639666:	c3                   	ret
 8639667:	90                   	nop

```

```c
// Timer_Midnight::RegistNextTimer @ 0x8639554

/* Timer_Midnight::RegistNextTimer() */

undefined4 Timer_Midnight::RegistNextTimer(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  time_t tVar4;
  TimerQueue *pTVar5;
  tm local_6c;
  int local_40;
  cMyTrace local_3c [16];
  tm *local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  local_40 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  local_2c = localtime_r(&local_40,&local_6c);
  local_28 = local_2c->tm_hour;
  iVar1 = local_2c->tm_sec;
  iVar2 = local_2c->tm_min;
  iVar3 = local_2c->tm_hour;
  cMyTrace::cMyTrace(local_3c,"static bool Timer_Midnight::RegistNextTimer()",0x1293,0);
  cMyTrace::operator()(local_3c,"Reset all user\'s fatigue!(%02d:%02d:%02d)",iVar3,iVar2,iVar1);
  local_2c->tm_hour = 0;
  local_2c->tm_min = 0;
  local_2c->tm_sec = 0;
  tVar4 = mktime(local_2c);
  local_24 = tVar4 + 0x15180;
  local_20 = local_24 - local_40;
  pTVar5 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar5,2,0,0x8d,local_20,0,0);
  return 1;
}

```

---

## dispatch_sig

```asm
// === 08639512 Timer_Midnight::dispatch_sig  [0x08639512-0x8639553] ===
 8639512:	55                   	push   %ebp
 8639513:	89 e5                	mov    %esp,%ebp
 8639515:	83 ec 28             	sub    $0x28,%esp
 8639518:	e8 8a 0e aa ff       	call   80da3a7 <_Z11G_GameWorldv>
 863951d:	89 04 24             	mov    %eax,(%esp)
 8639520:	e8 1b 2e 09 00       	call   86cc340 <_ZN9GameWorld13ResetMidnightEv>
 8639525:	a1 88 f7 41 09       	mov    0x941f788,%eax
 863952a:	89 04 24             	mov    %eax,(%esp)
 863952d:	e8 2a f7 f4 ff       	call   8588c5c <_ZN18online_preliminary25COnlinePreliminaryTeamMgr18ResetDailyMidnightEv>
 8639532:	e8 1d 00 00 00       	call   8639554 <_ZN14Timer_Midnight15RegistNextTimerEv>
 8639537:	88 45 f7             	mov    %al,-0x9(%ebp)
 863953a:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 863953e:	83 f0 01             	xor    $0x1,%eax
 8639541:	84 c0                	test   %al,%al
 8639543:	74 07                	je     863954c <_ZN14Timer_Midnight12dispatch_sigEiij+0x3a>
 8639545:	b8 00 00 00 00       	mov    $0x0,%eax
 863954a:	eb 05                	jmp    8639551 <_ZN14Timer_Midnight12dispatch_sigEiij+0x3f>
 863954c:	b8 01 00 00 00       	mov    $0x1,%eax
 8639551:	c9                   	leave
 8639552:	c3                   	ret
 8639553:	90                   	nop

```

```c
// Timer_Midnight::dispatch_sig @ 0x8639512

/* Timer_Midnight::dispatch_sig(int, int, unsigned int) */

bool Timer_Midnight::dispatch_sig(int param_1,int param_2,uint param_3)

{
  char cVar1;
  
  G_GameWorld();
  GameWorld::ResetMidnight();
  online_preliminary::COnlinePreliminaryTeamMgr::ResetDailyMidnight();
  cVar1 = RegistNextTimer();
  return cVar1 == '\x01';
}

```

