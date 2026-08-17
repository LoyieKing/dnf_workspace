# TimerDungeonDataStatistic

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## RegistNextTimer

```asm
// === 08636856 TimerDungeonDataStatistic::RegistNextTimer  [0x08636856-0x8636959] ===
 8636856:	55                   	push   %ebp
 8636857:	89 e5                	mov    %esp,%ebp
 8636859:	53                   	push   %ebx
 863685a:	83 ec 64             	sub    $0x64,%esp
 863685d:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8636864:	e8 35 54 a9 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8636869:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 863686c:	8d 45 b8             	lea    -0x48(%ebp),%eax
 863686f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8636873:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8636876:	89 04 24             	mov    %eax,(%esp)
 8636879:	e8 e2 7a a4 ff       	call   807e360 <localtime_r@plt>
 863687e:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8636881:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8636884:	8b 40 08             	mov    0x8(%eax),%eax
 8636887:	89 45 ec             	mov    %eax,-0x14(%ebp)
 863688a:	8b 45 e8             	mov    -0x18(%ebp),%eax
 863688d:	c7 40 08 05 00 00 00 	movl   $0x5,0x8(%eax)
 8636894:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8636897:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 863689e:	8b 45 e8             	mov    -0x18(%ebp),%eax
 86368a1:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 86368a7:	e8 d5 58 a9 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 86368ac:	8b 88 b0 01 00 00    	mov    0x1b0(%eax),%ecx
 86368b2:	ba 89 88 88 88       	mov    $0x88888889,%edx
 86368b7:	89 c8                	mov    %ecx,%eax
 86368b9:	f7 ea                	imul   %edx
 86368bb:	8d 04 0a             	lea    (%edx,%ecx,1),%eax
 86368be:	89 c2                	mov    %eax,%edx
 86368c0:	c1 fa 04             	sar    $0x4,%edx
 86368c3:	89 c8                	mov    %ecx,%eax
 86368c5:	c1 f8 1f             	sar    $0x1f,%eax
 86368c8:	89 d3                	mov    %edx,%ebx
 86368ca:	29 c3                	sub    %eax,%ebx
 86368cc:	89 d8                	mov    %ebx,%eax
 86368ce:	8d 14 00             	lea    (%eax,%eax,1),%edx
 86368d1:	89 d0                	mov    %edx,%eax
 86368d3:	c1 e0 04             	shl    $0x4,%eax
 86368d6:	29 d0                	sub    %edx,%eax
 86368d8:	89 ca                	mov    %ecx,%edx
 86368da:	29 c2                	sub    %eax,%edx
 86368dc:	89 d0                	mov    %edx,%eax
 86368de:	8b 55 e8             	mov    -0x18(%ebp),%edx
 86368e1:	89 42 04             	mov    %eax,0x4(%edx)
 86368e4:	8b 45 e8             	mov    -0x18(%ebp),%eax
 86368e7:	89 04 24             	mov    %eax,(%esp)
 86368ea:	e8 31 7f a4 ff       	call   807e820 <mktime@plt>
 86368ef:	89 45 f0             	mov    %eax,-0x10(%ebp)
 86368f2:	8b 45 e8             	mov    -0x18(%ebp),%eax
 86368f5:	8b 40 08             	mov    0x8(%eax),%eax
 86368f8:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 86368fb:	7f 07                	jg     8636904 <_ZN25TimerDungeonDataStatistic15RegistNextTimerEv+0xae>
 86368fd:	81 45 f0 80 51 01 00 	addl   $0x15180,-0x10(%ebp)
 8636904:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8636907:	8b 55 f0             	mov    -0x10(%ebp),%edx
 863690a:	89 d1                	mov    %edx,%ecx
 863690c:	29 c1                	sub    %eax,%ecx
 863690e:	89 c8                	mov    %ecx,%eax
 8636910:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8636913:	e8 64 fb ab ff       	call   80f647c <_Z12G_TimerQueuev>
 8636918:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 863691f:	00 
 8636920:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 8636927:	00 
 8636928:	8b 55 f4             	mov    -0xc(%ebp),%edx
 863692b:	89 54 24 10          	mov    %edx,0x10(%esp)
 863692f:	c7 44 24 0c 66 00 00 	movl   $0x66,0xc(%esp)
 8636936:	00 
 8636937:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 863693e:	00 
 863693f:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8636946:	00 
 8636947:	89 04 24             	mov    %eax,(%esp)
 863694a:	e8 c7 a4 ff ff       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 863694f:	b8 01 00 00 00       	mov    $0x1,%eax
 8636954:	83 c4 64             	add    $0x64,%esp
 8636957:	5b                   	pop    %ebx
 8636958:	5d                   	pop    %ebp
 8636959:	c3                   	ret

```

```c
// TimerDungeonDataStatistic::RegistNextTimer @ 0x8636856

/* TimerDungeonDataStatistic::RegistNextTimer() */

undefined4 TimerDungeonDataStatistic::RegistNextTimer(void)

{
  int iVar1;
  TimerQueue *pTVar2;
  tm local_4c;
  int local_20;
  tm *local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_20 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  local_1c = localtime_r(&local_20,&local_4c);
  local_18 = local_1c->tm_hour;
  local_1c->tm_hour = 5;
  local_1c->tm_min = 0;
  local_1c->tm_sec = 0;
  iVar1 = G_CEnvironment();
  local_1c->tm_min = *(int *)(iVar1 + 0x1b0) % 0x1e;
  local_14 = mktime(local_1c);
  if (local_1c->tm_hour <= local_18) {
    local_14 = local_14 + 0x15180;
  }
  local_10 = local_14 - local_20;
  pTVar2 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar2,2,0,0x66,local_10,0,0);
  return 1;
}

```

---

## dispatch_sig

```asm
// === 0863672a TimerDungeonDataStatistic::dispatch_sig  [0x0863672a-0x8636855] ===
 863672a:	55                   	push   %ebp
 863672b:	89 e5                	mov    %esp,%ebp
 863672d:	56                   	push   %esi
 863672e:	53                   	push   %ebx
 863672f:	83 ec 20             	sub    $0x20,%esp
 8636732:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8636737:	c7 44 24 08 1a 0b 00 	movl   $0xb1a,0x8(%esp)
 863673e:	00 
 863673f:	c7 44 24 04 0e 6d ce 	movl   $0x8ce6d0e,0x4(%esp)
 8636746:	08 
 8636747:	89 04 24             	mov    %eax,(%esp)
 863674a:	e8 37 93 c5 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 863674f:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8636756:	00 
 8636757:	89 44 24 04          	mov    %eax,0x4(%esp)
 863675b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 863675e:	89 04 24             	mov    %eax,(%esp)
 8636761:	e8 c0 24 a9 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8636766:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8636769:	89 04 24             	mov    %eax,(%esp)
 863676c:	e8 d5 24 a9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8636771:	c7 44 24 04 af 00 00 	movl   $0xaf,0x4(%esp)
 8636778:	00 
 8636779:	89 04 24             	mov    %eax,(%esp)
 863677c:	e8 d5 24 a9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8636781:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8636784:	89 04 24             	mov    %eax,(%esp)
 8636787:	e8 ba 24 a9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 863678c:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8636793:	ff 
 8636794:	89 04 24             	mov    %eax,(%esp)
 8636797:	e8 ba 24 a9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 863679c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 863679f:	89 04 24             	mov    %eax,(%esp)
 86367a2:	e8 a7 24 a9 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 86367a7:	89 04 24             	mov    %eax,(%esp)
 86367aa:	e8 cd 6a 00 00       	call   863d27c <_ZN12CStreamGuard11GetInBufferI26SIG_DUNGEON_DATA_STATISTICEEPT_v>
 86367af:	89 45 f0             	mov    %eax,-0x10(%ebp)
 86367b2:	c7 44 24 08 80 00 00 	movl   $0x80,0x8(%esp)
 86367b9:	00 
 86367ba:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86367c1:	00 
 86367c2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 86367c5:	89 04 24             	mov    %eax,(%esp)
 86367c8:	e8 f3 74 a4 ff       	call   807dcc0 <memset@plt>
 86367cd:	8b 45 f0             	mov    -0x10(%ebp),%eax
 86367d0:	c7 00 03 00 00 00    	movl   $0x3,(%eax)
 86367d6:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 86367db:	8d 55 e8             	lea    -0x18(%ebp),%edx
 86367de:	89 54 24 08          	mov    %edx,0x8(%esp)
 86367e2:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 86367e9:	00 
 86367ea:	89 04 24             	mov    %eax,(%esp)
 86367ed:	e8 ec a7 f3 ff       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 86367f2:	e8 b6 90 fd ff       	call   860f8ad <_Z34GetInstanceVendingMachineStatisticv>
 86367f7:	89 04 24             	mov    %eax,(%esp)
 86367fa:	e8 df 8e fd ff       	call   860f6de <_ZN24CVendingMachineStatistic16updateDataIntoDBEv>
 86367ff:	8b 45 08             	mov    0x8(%ebp),%eax
 8636802:	89 04 24             	mov    %eax,(%esp)
 8636805:	e8 4c 00 00 00       	call   8636856 <_ZN25TimerDungeonDataStatistic15RegistNextTimerEv>
 863680a:	88 45 f7             	mov    %al,-0x9(%ebp)
 863680d:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 8636811:	83 f0 01             	xor    $0x1,%eax
 8636814:	84 c0                	test   %al,%al
 8636816:	74 07                	je     863681f <_ZN25TimerDungeonDataStatistic12dispatch_sigEiij+0xf5>
 8636818:	bb 00 00 00 00       	mov    $0x0,%ebx
 863681d:	eb 22                	jmp    8636841 <_ZN25TimerDungeonDataStatistic12dispatch_sigEiij+0x117>
 863681f:	bb 01 00 00 00       	mov    $0x1,%ebx
 8636824:	eb 1b                	jmp    8636841 <_ZN25TimerDungeonDataStatistic12dispatch_sigEiij+0x117>
 8636826:	89 d3                	mov    %edx,%ebx
 8636828:	89 c6                	mov    %eax,%esi
 863682a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 863682d:	89 04 24             	mov    %eax,(%esp)
 8636830:	e8 9d 60 fe ff       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8636835:	89 f0                	mov    %esi,%eax
 8636837:	89 da                	mov    %ebx,%edx
 8636839:	89 04 24             	mov    %eax,(%esp)
 863683c:	e8 0f cf 4a 00       	call   8ae3750 <_Unwind_Resume>
 8636841:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8636844:	89 04 24             	mov    %eax,(%esp)
 8636847:	e8 86 60 fe ff       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 863684c:	89 d8                	mov    %ebx,%eax
 863684e:	83 c4 20             	add    $0x20,%esp
 8636851:	5b                   	pop    %ebx
 8636852:	5e                   	pop    %esi
 8636853:	5d                   	pop    %ebp
 8636854:	c3                   	ret
 8636855:	90                   	nop

```

```c
// TimerDungeonDataStatistic::dispatch_sig @ 0x863672a

/* TimerDungeonDataStatistic::dispatch_sig(int, int, unsigned int) */

bool TimerDungeonDataStatistic::dispatch_sig(int param_1,int param_2,uint param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CVendingMachineStatistic *this;
  bool bVar3;
  CStreamGuard local_1c [8];
  SIG_DUNGEON_DATA_STATISTIC *local_14;
  char local_d;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"TimerDispatcher.cpp",0xb1a);
  CStreamGuard::CStreamGuard(local_1c,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
                    /* try { // try from 0863677c to 08636809 has its CatchHandler @ 08636826 */
  CStreamGuard::operator<<(pCVar2,0xaf);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_1c);
  local_14 = CStreamGuard::GetInBuffer<SIG_DUNGEON_DATA_STATISTIC>(pCVar2);
  memset(local_14,0,0x80);
  *(undefined4 *)local_14 = 3;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,4,local_1c);
  this = (CVendingMachineStatistic *)GetInstanceVendingMachineStatistic();
  CVendingMachineStatistic::updateDataIntoDB(this);
  local_d = RegistNextTimer();
  bVar3 = local_d == '\x01';
  CStreamGuard::~CStreamGuard(local_1c);
  return bVar3;
}

```

