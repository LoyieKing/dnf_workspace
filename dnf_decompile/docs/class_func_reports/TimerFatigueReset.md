# TimerFatigueReset

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## RegistNextTimer

```asm
// === 08633a04 TimerFatigueReset::RegistNextTimer  [0x08633a04-0x8633b83] ===
 8633a04:	55                   	push   %ebp
 8633a05:	89 e5                	mov    %esp,%ebp
 8633a07:	57                   	push   %edi
 8633a08:	56                   	push   %esi
 8633a09:	53                   	push   %ebx
 8633a0a:	81 ec 8c 00 00 00    	sub    $0x8c,%esp
 8633a10:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8633a17:	e8 82 82 a9 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8633a1c:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 8633a1f:	8d 45 88             	lea    -0x78(%ebp),%eax
 8633a22:	89 44 24 04          	mov    %eax,0x4(%esp)
 8633a26:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8633a29:	89 04 24             	mov    %eax,(%esp)
 8633a2c:	e8 2f a9 a4 ff       	call   807e360 <localtime_r@plt>
 8633a31:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8633a34:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8633a37:	8b 40 08             	mov    0x8(%eax),%eax
 8633a3a:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8633a3d:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8633a40:	8b 38                	mov    (%eax),%edi
 8633a42:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8633a45:	8b 70 04             	mov    0x4(%eax),%esi
 8633a48:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8633a4b:	8b 58 08             	mov    0x8(%eax),%ebx
 8633a4e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8633a55:	00 
 8633a56:	c7 44 24 08 72 05 00 	movl   $0x572,0x8(%esp)
 8633a5d:	00 
 8633a5e:	c7 44 24 04 c0 84 ce 	movl   $0x8ce84c0,0x4(%esp)
 8633a65:	08 
 8633a66:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8633a69:	89 04 24             	mov    %eax,(%esp)
 8633a6c:	e8 a7 bc f1 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8633a71:	89 7c 24 10          	mov    %edi,0x10(%esp)
 8633a75:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8633a79:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8633a7d:	c7 44 24 04 24 6d ce 	movl   $0x8ce6d24,0x4(%esp)
 8633a84:	08 
 8633a85:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8633a88:	89 04 24             	mov    %eax,(%esp)
 8633a8b:	e8 f8 bc f1 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8633a90:	e8 ec 86 a9 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 8633a95:	8b 90 7c 03 00 00    	mov    0x37c(%eax),%edx
 8633a9b:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8633a9e:	89 50 08             	mov    %edx,0x8(%eax)
 8633aa1:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8633aa4:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 8633aab:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8633aae:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8633ab4:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8633ab7:	89 04 24             	mov    %eax,(%esp)
 8633aba:	e8 61 ad a4 ff       	call   807e820 <mktime@plt>
 8633abf:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8633ac2:	e8 ba 86 a9 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 8633ac7:	8b 80 7c 03 00 00    	mov    0x37c(%eax),%eax
 8633acd:	3b 45 dc             	cmp    -0x24(%ebp),%eax
 8633ad0:	0f 9e c0             	setle  %al
 8633ad3:	84 c0                	test   %al,%al
 8633ad5:	74 07                	je     8633ade <_ZN17TimerFatigueReset15RegistNextTimerEv+0xda>
 8633ad7:	81 45 e0 80 51 01 00 	addl   $0x15180,-0x20(%ebp)
 8633ade:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8633ae1:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8633ae4:	89 d1                	mov    %edx,%ecx
 8633ae6:	29 c1                	sub    %eax,%ecx
 8633ae8:	89 c8                	mov    %ecx,%eax
 8633aea:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8633aed:	8b 5d b4             	mov    -0x4c(%ebp),%ebx
 8633af0:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8633af7:	00 
 8633af8:	c7 44 24 08 87 05 00 	movl   $0x587,0x8(%esp)
 8633aff:	00 
 8633b00:	c7 44 24 04 c0 84 ce 	movl   $0x8ce84c0,0x4(%esp)
 8633b07:	08 
 8633b08:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8633b0b:	89 04 24             	mov    %eax,(%esp)
 8633b0e:	e8 05 bc f1 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8633b13:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8633b17:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8633b1a:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8633b1e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8633b21:	89 44 24 08          	mov    %eax,0x8(%esp)
 8633b25:	c7 44 24 04 50 6d ce 	movl   $0x8ce6d50,0x4(%esp)
 8633b2c:	08 
 8633b2d:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8633b30:	89 04 24             	mov    %eax,(%esp)
 8633b33:	e8 50 bc f1 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8633b38:	e8 3f 29 ac ff       	call   80f647c <_Z12G_TimerQueuev>
 8633b3d:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 8633b44:	00 
 8633b45:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 8633b4c:	00 
 8633b4d:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8633b50:	89 54 24 10          	mov    %edx,0x10(%esp)
 8633b54:	c7 44 24 0c 50 00 00 	movl   $0x50,0xc(%esp)
 8633b5b:	00 
 8633b5c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8633b63:	00 
 8633b64:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8633b6b:	00 
 8633b6c:	89 04 24             	mov    %eax,(%esp)
 8633b6f:	e8 a2 d2 ff ff       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 8633b74:	b8 01 00 00 00       	mov    $0x1,%eax
 8633b79:	81 c4 8c 00 00 00    	add    $0x8c,%esp
 8633b7f:	5b                   	pop    %ebx
 8633b80:	5e                   	pop    %esi
 8633b81:	5f                   	pop    %edi
 8633b82:	5d                   	pop    %ebp
 8633b83:	c3                   	ret

```

```c
// TimerFatigueReset::RegistNextTimer @ 0x8633a04

/* TimerFatigueReset::RegistNextTimer() */

undefined4 TimerFatigueReset::RegistNextTimer(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  TimerQueue *pTVar4;
  tm local_7c;
  int local_50;
  cMyTrace local_4c [16];
  cMyTrace local_3c [16];
  tm *local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  local_50 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  local_2c = localtime_r(&local_50,&local_7c);
  local_28 = local_2c->tm_hour;
  iVar2 = local_2c->tm_sec;
  iVar3 = local_2c->tm_min;
  iVar1 = local_2c->tm_hour;
  cMyTrace::cMyTrace(local_4c,"bool TimerFatigueReset::RegistNextTimer()",0x572,0);
  cMyTrace::operator()(local_4c,"Reset all user\'s fatigue!(%02d:%02d:%02d)",iVar1,iVar3,iVar2);
  iVar2 = G_CEnvironment();
  local_2c->tm_hour = *(int *)(iVar2 + 0x37c);
  local_2c->tm_min = 0;
  local_2c->tm_sec = 0;
  local_24 = mktime(local_2c);
  iVar3 = G_CEnvironment();
  iVar2 = local_50;
  if (*(int *)(iVar3 + 0x37c) <= local_28) {
    local_24 = local_24 + 0x15180;
  }
  local_20 = local_24 - local_50;
  cMyTrace::cMyTrace(local_3c,"bool TimerFatigueReset::RegistNextTimer()",0x587,0);
  cMyTrace::operator()(local_3c,"DELTA %d , CHECK_T %d , CUR_T %d\n",local_20,local_24,iVar2);
  pTVar4 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar4,2,0,0x50,local_20,0,0);
  return 1;
}

```

---

## dispatch_sig

```asm
// === 08633750 TimerFatigueReset::dispatch_sig  [0x08633750-0x86339f9] ===
 8633750:	55                   	push   %ebp
 8633751:	89 e5                	mov    %esp,%ebp
 8633753:	56                   	push   %esi
 8633754:	53                   	push   %ebx
 8633755:	83 ec 30             	sub    $0x30,%esp
 8633758:	e8 24 8a a9 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 863375d:	8b 98 7c 03 00 00    	mov    0x37c(%eax),%ebx
 8633763:	e8 33 8a a9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8633768:	89 04 24             	mov    %eax,(%esp)
 863376b:	e8 f2 d3 ad ff       	call   8110b62 <_ZN12CDataManager20get_event_script_mngEv>
 8633770:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8633774:	89 04 24             	mov    %eax,(%esp)
 8633777:	e8 56 8e ad ff       	call   810c5d2 <_ZN13EventClassify15CEventScriptMng18update_time_valuesEi>
 863377c:	e8 26 6c aa ff       	call   80da3a7 <_Z11G_GameWorldv>
 8633781:	89 04 24             	mov    %eax,(%esp)
 8633784:	e8 63 8c 09 00       	call   86cc3ec <_ZN9GameWorld15ResetAllFatigueEv>
 8633789:	e8 19 6c aa ff       	call   80da3a7 <_Z11G_GameWorldv>
 863378e:	89 04 24             	mov    %eax,(%esp)
 8633791:	e8 8c 93 09 00       	call   86ccb22 <_ZN9GameWorld13ResetAllCoinsEv>
 8633796:	e8 0c 6c aa ff       	call   80da3a7 <_Z11G_GameWorldv>
 863379b:	89 04 24             	mov    %eax,(%esp)
 863379e:	e8 61 98 09 00       	call   86cd004 <_ZN9GameWorld16DailyEventModifyEv>
 86337a3:	e8 ff 6b aa ff       	call   80da3a7 <_Z11G_GameWorldv>
 86337a8:	89 04 24             	mov    %eax,(%esp)
 86337ab:	e8 c8 94 09 00       	call   86ccc78 <_ZN9GameWorld17ResetAllEventDataEv>
 86337b0:	e8 f2 6b aa ff       	call   80da3a7 <_Z11G_GameWorldv>
 86337b5:	89 04 24             	mov    %eax,(%esp)
 86337b8:	e8 53 98 09 00       	call   86cd010 <_ZN9GameWorld18ReselectDailyQuestEv>
 86337bd:	e8 e5 6b aa ff       	call   80da3a7 <_Z11G_GameWorldv>
 86337c2:	89 04 24             	mov    %eax,(%esp)
 86337c5:	e8 c4 94 09 00       	call   86ccc8e <_ZN9GameWorld15DeleteDailyItemEv>
 86337ca:	e8 d8 6b aa ff       	call   80da3a7 <_Z11G_GameWorldv>
 86337cf:	89 04 24             	mov    %eax,(%esp)
 86337d2:	e8 d5 90 09 00       	call   86cc8ac <_ZN9GameWorld21ResetAllCleadpadPointEv>
 86337d7:	e8 cb 6b aa ff       	call   80da3a7 <_Z11G_GameWorldv>
 86337dc:	89 04 24             	mov    %eax,(%esp)
 86337df:	e8 ae 91 09 00       	call   86cc992 <_ZN9GameWorld24ResetAllPassPadFailCountEv>
 86337e4:	e8 be 6b aa ff       	call   80da3a7 <_Z11G_GameWorldv>
 86337e9:	89 04 24             	mov    %eax,(%esp)
 86337ec:	e8 dd 95 09 00       	call   86ccdce <_ZN9GameWorld12AddDailyItemEv>
 86337f1:	e8 b1 6b aa ff       	call   80da3a7 <_Z11G_GameWorldv>
 86337f6:	89 04 24             	mov    %eax,(%esp)
 86337f9:	e8 5a 97 09 00       	call   86ccf58 <_ZN9GameWorld14resetDailyDataEv>
 86337fe:	e8 a4 6b aa ff       	call   80da3a7 <_Z11G_GameWorldv>
 8633803:	89 04 24             	mov    %eax,(%esp)
 8633806:	e8 fd b2 09 00       	call   86ceb08 <_ZN9GameWorld25ResetEntireReliablePersonEv>
 863380b:	e8 4b a9 fd ff       	call   860e15b <_Z29GetInstanceDungeonEntranceLogv>
 8633810:	89 04 24             	mov    %eax,(%esp)
 8633813:	e8 84 ad fd ff       	call   860e59c <_ZN19CDungeonEntranceLog21InsertDungeonEntranceEv>
 8633818:	e8 48 af fd ff       	call   860e765 <_Z30GetInstanceCommonStatisticsMgrv>
 863381d:	89 04 24             	mov    %eax,(%esp)
 8633820:	e8 49 b0 fd ff       	call   860e86e <_ZN20CCommonStatisticsMgr14InsertDatabaseEv>
 8633825:	a1 64 f7 41 09       	mov    0x941f764,%eax
 863382a:	89 04 24             	mov    %eax,(%esp)
 863382d:	e8 c2 b5 fd ff       	call   860edf4 <_ZN26CLevelDungeonPlayStatistic14InsertDatabaseEv>
 8633832:	a1 64 f7 41 09       	mov    0x941f764,%eax
 8633837:	83 c0 18             	add    $0x18,%eax
 863383a:	89 04 24             	mov    %eax,(%esp)
 863383d:	e8 ce b8 fd ff       	call   860f110 <_ZN20CDungeonExpStatistic14InsertDatabaseEv>
 8633842:	e8 f9 c0 fd ff       	call   860f940 <_Z29GetInstanceExpertJobStatisticv>
 8633847:	89 04 24             	mov    %eax,(%esp)
 863384a:	e8 7b c2 fd ff       	call   860faca <_ZN19CExpertJobStatistic15UpdateExpertJobEv>
 863384f:	e8 dc 05 b0 ff       	call   8133e30 <_ZN12advancealtar10HistoryLog16updateStatisticsEv>
 8633854:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8633859:	c7 44 24 08 12 05 00 	movl   $0x512,0x8(%esp)
 8633860:	00 
 8633861:	c7 44 24 04 0e 6d ce 	movl   $0x8ce6d0e,0x4(%esp)
 8633868:	08 
 8633869:	89 04 24             	mov    %eax,(%esp)
 863386c:	e8 15 c2 c5 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8633871:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8633878:	00 
 8633879:	89 44 24 04          	mov    %eax,0x4(%esp)
 863387d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8633880:	89 04 24             	mov    %eax,(%esp)
 8633883:	e8 9e 53 a9 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8633888:	8d 45 ec             	lea    -0x14(%ebp),%eax
 863388b:	89 04 24             	mov    %eax,(%esp)
 863388e:	e8 b3 53 a9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8633893:	c7 44 24 04 4e 00 00 	movl   $0x4e,0x4(%esp)
 863389a:	00 
 863389b:	89 04 24             	mov    %eax,(%esp)
 863389e:	e8 b3 53 a9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 86338a3:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86338a6:	89 04 24             	mov    %eax,(%esp)
 86338a9:	e8 98 53 a9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 86338ae:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 86338b5:	ff 
 86338b6:	89 04 24             	mov    %eax,(%esp)
 86338b9:	e8 98 53 a9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 86338be:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 86338c3:	8d 55 ec             	lea    -0x14(%ebp),%edx
 86338c6:	89 54 24 08          	mov    %edx,0x8(%esp)
 86338ca:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 86338d1:	00 
 86338d2:	89 04 24             	mov    %eax,(%esp)
 86338d5:	e8 04 d7 f3 ff       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 86338da:	eb 1b                	jmp    86338f7 <_ZN17TimerFatigueReset12dispatch_sigEiij+0x1a7>
 86338dc:	89 d3                	mov    %edx,%ebx
 86338de:	89 c6                	mov    %eax,%esi
 86338e0:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86338e3:	89 04 24             	mov    %eax,(%esp)
 86338e6:	e8 e7 8f fe ff       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 86338eb:	89 f0                	mov    %esi,%eax
 86338ed:	89 da                	mov    %ebx,%edx
 86338ef:	89 04 24             	mov    %eax,(%esp)
 86338f2:	e8 59 fe 4a 00       	call   8ae3750 <_Unwind_Resume>
 86338f7:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86338fa:	89 04 24             	mov    %eax,(%esp)
 86338fd:	e8 d0 8f fe ff       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8633902:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8633907:	c7 44 24 08 1c 05 00 	movl   $0x51c,0x8(%esp)
 863390e:	00 
 863390f:	c7 44 24 04 0e 6d ce 	movl   $0x8ce6d0e,0x4(%esp)
 8633916:	08 
 8633917:	89 04 24             	mov    %eax,(%esp)
 863391a:	e8 67 c1 c5 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 863391f:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8633926:	00 
 8633927:	89 44 24 04          	mov    %eax,0x4(%esp)
 863392b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 863392e:	89 04 24             	mov    %eax,(%esp)
 8633931:	e8 f0 52 a9 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8633936:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8633939:	89 04 24             	mov    %eax,(%esp)
 863393c:	e8 05 53 a9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8633941:	c7 44 24 04 50 00 00 	movl   $0x50,0x4(%esp)
 8633948:	00 
 8633949:	89 04 24             	mov    %eax,(%esp)
 863394c:	e8 05 53 a9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8633951:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8633954:	89 04 24             	mov    %eax,(%esp)
 8633957:	e8 ea 52 a9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 863395c:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8633963:	ff 
 8633964:	89 04 24             	mov    %eax,(%esp)
 8633967:	e8 ea 52 a9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 863396c:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8633971:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 8633974:	89 54 24 08          	mov    %edx,0x8(%esp)
 8633978:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 863397f:	00 
 8633980:	89 04 24             	mov    %eax,(%esp)
 8633983:	e8 56 d6 f3 ff       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8633988:	eb 1b                	jmp    86339a5 <_ZN17TimerFatigueReset12dispatch_sigEiij+0x255>
 863398a:	89 d3                	mov    %edx,%ebx
 863398c:	89 c6                	mov    %eax,%esi
 863398e:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8633991:	89 04 24             	mov    %eax,(%esp)
 8633994:	e8 39 8f fe ff       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8633999:	89 f0                	mov    %esi,%eax
 863399b:	89 da                	mov    %ebx,%edx
 863399d:	89 04 24             	mov    %eax,(%esp)
 86339a0:	e8 ab fd 4a 00       	call   8ae3750 <_Unwind_Resume>
 86339a5:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 86339a8:	89 04 24             	mov    %eax,(%esp)
 86339ab:	e8 22 8f fe ff       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 86339b0:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 86339b7:	e8 1e 01 e0 ff       	call   8433ada <_ZN34DB_LoadAutoMarketConditionsControl11makeRequestEb>
 86339bc:	e8 a3 de dc ff       	call   8401864 <_ZN15DB_CreateCharac30makeRequestResetLimitCreateMidEv>
 86339c1:	e8 e1 69 aa ff       	call   80da3a7 <_Z11G_GameWorldv>
 86339c6:	89 04 24             	mov    %eax,(%esp)
 86339c9:	e8 2a be 09 00       	call   86cf7f8 <_ZN9GameWorld20ResetOneADayItemShopEv>
 86339ce:	8b 45 08             	mov    0x8(%ebp),%eax
 86339d1:	89 04 24             	mov    %eax,(%esp)
 86339d4:	e8 2b 00 00 00       	call   8633a04 <_ZN17TimerFatigueReset15RegistNextTimerEv>
 86339d9:	88 45 f7             	mov    %al,-0x9(%ebp)
 86339dc:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 86339e0:	83 f0 01             	xor    $0x1,%eax
 86339e3:	84 c0                	test   %al,%al
 86339e5:	74 07                	je     86339ee <_ZN17TimerFatigueReset12dispatch_sigEiij+0x29e>
 86339e7:	b8 00 00 00 00       	mov    $0x0,%eax
 86339ec:	eb 05                	jmp    86339f3 <_ZN17TimerFatigueReset12dispatch_sigEiij+0x2a3>
 86339ee:	b8 01 00 00 00       	mov    $0x1,%eax
 86339f3:	83 c4 30             	add    $0x30,%esp
 86339f6:	5b                   	pop    %ebx
 86339f7:	5e                   	pop    %esi
 86339f8:	5d                   	pop    %ebp
 86339f9:	c3                   	ret

```

```c
// TimerFatigueReset::dispatch_sig @ 0x8633750

/* TimerFatigueReset::dispatch_sig(int, int, unsigned int) */

bool TimerFatigueReset::dispatch_sig(int param_1,int param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  CDataManager *this;
  CEventScriptMng *this_00;
  GameWorld *pGVar3;
  CDungeonEntranceLog *this_01;
  CCommonStatisticsMgr *this_02;
  CExpertJobStatistic *this_03;
  Stream *pSVar4;
  CStreamGuard *pCVar5;
  CStreamGuard local_20 [8];
  CStreamGuard local_18 [12];
  
  iVar2 = G_CEnvironment();
  iVar2 = *(int *)(iVar2 + 0x37c);
  this = (CDataManager *)G_CDataManager();
  this_00 = (CEventScriptMng *)CDataManager::get_event_script_mng(this);
  EventClassify::CEventScriptMng::update_time_values(this_00,iVar2);
  pGVar3 = (GameWorld *)G_GameWorld();
  GameWorld::ResetAllFatigue(pGVar3);
  G_GameWorld();
  GameWorld::ResetAllCoins();
  G_GameWorld();
  GameWorld::DailyEventModify();
  G_GameWorld();
  GameWorld::ResetAllEventData();
  G_GameWorld();
  GameWorld::ReselectDailyQuest();
  pGVar3 = (GameWorld *)G_GameWorld();
  GameWorld::DeleteDailyItem(pGVar3);
  G_GameWorld();
  GameWorld::ResetAllCleadpadPoint();
  G_GameWorld();
  GameWorld::ResetAllPassPadFailCount();
  G_GameWorld();
  GameWorld::AddDailyItem();
  G_GameWorld();
  GameWorld::resetDailyData();
  G_GameWorld();
  GameWorld::ResetEntireReliablePerson();
  this_01 = (CDungeonEntranceLog *)GetInstanceDungeonEntranceLog();
  CDungeonEntranceLog::InsertDungeonEntrance(this_01);
  this_02 = (CCommonStatisticsMgr *)GetInstanceCommonStatisticsMgr();
  CCommonStatisticsMgr::InsertDatabase(this_02);
  CLevelDungeonPlayStatistic::InsertDatabase(GlobalData::s_statisticMgr);
  CDungeonExpStatistic::InsertDatabase((CDungeonExpStatistic *)(GlobalData::s_statisticMgr + 0x18));
  this_03 = (CExpertJobStatistic *)GetInstanceExpertJobStatistic();
  CExpertJobStatistic::UpdateExpertJob(this_03);
  advancealtar::HistoryLog::updateStatistics();
  pSVar4 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"TimerDispatcher.cpp",0x512);
  CStreamGuard::CStreamGuard(local_18,pSVar4,true);
  pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0863389e to 086338d9 has its CatchHandler @ 086338dc */
  CStreamGuard::operator<<(pCVar5,0x4e);
  pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar5,-1);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  pSVar4 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"TimerDispatcher.cpp",0x51c);
  CStreamGuard::CStreamGuard(local_20,pSVar4,true);
  pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_20);
                    /* try { // try from 0863394c to 08633987 has its CatchHandler @ 0863398a */
  CStreamGuard::operator<<(pCVar5,0x50);
  pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_20);
  CStreamGuard::operator<<(pCVar5,-1);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,4,local_20);
  CStreamGuard::~CStreamGuard(local_20);
  DB_LoadAutoMarketConditionsControl::makeRequest(false);
  DB_CreateCharac::makeRequestResetLimitCreateMid();
  G_GameWorld();
  GameWorld::ResetOneADayItemShop();
  cVar1 = RegistNextTimer();
  return cVar1 == '\x01';
}

```

---

## updateAbnormalClientCount

```asm
// === 086339fa TimerFatigueReset::updateAbnormalClientCount  [0x086339fa-0x8633a03] ===
 86339fa:	55                   	push   %ebp
 86339fb:	89 e5                	mov    %esp,%ebp
 86339fd:	b8 01 00 00 00       	mov    $0x1,%eax
 8633a02:	5d                   	pop    %ebp
 8633a03:	c3                   	ret

```

```c
// TimerFatigueReset::updateAbnormalClientCount @ 0x86339fa

/* TimerFatigueReset::updateAbnormalClientCount() */

undefined4 TimerFatigueReset::updateAbnormalClientCount(void)

{
  return 1;
}

```

