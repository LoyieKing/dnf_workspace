# TimerStatisticsDetailChannelInfo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## RegistNextTimer

```asm
// === 08635782 TimerStatisticsDetailChannelInfo::RegistNextTimer  [0x08635782-0x86358ab] ===
 8635782:	55                   	push   %ebp
 8635783:	89 e5                	mov    %esp,%ebp
 8635785:	57                   	push   %edi
 8635786:	56                   	push   %esi
 8635787:	53                   	push   %ebx
 8635788:	83 ec 7c             	sub    $0x7c,%esp
 863578b:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8635792:	e8 07 65 a9 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8635797:	89 45 cc             	mov    %eax,-0x34(%ebp)
 863579a:	8d 45 a0             	lea    -0x60(%ebp),%eax
 863579d:	89 44 24 04          	mov    %eax,0x4(%esp)
 86357a1:	8d 45 cc             	lea    -0x34(%ebp),%eax
 86357a4:	89 04 24             	mov    %eax,(%esp)
 86357a7:	e8 b4 8b a4 ff       	call   807e360 <localtime_r@plt>
 86357ac:	89 45 e0             	mov    %eax,-0x20(%ebp)
 86357af:	8b 45 e0             	mov    -0x20(%ebp),%eax
 86357b2:	8b 48 04             	mov    0x4(%eax),%ecx
 86357b5:	ba 89 88 88 88       	mov    $0x88888889,%edx
 86357ba:	89 c8                	mov    %ecx,%eax
 86357bc:	f7 ea                	imul   %edx
 86357be:	8d 04 0a             	lea    (%edx,%ecx,1),%eax
 86357c1:	89 c2                	mov    %eax,%edx
 86357c3:	c1 fa 04             	sar    $0x4,%edx
 86357c6:	89 c8                	mov    %ecx,%eax
 86357c8:	c1 f8 1f             	sar    $0x1f,%eax
 86357cb:	89 d3                	mov    %edx,%ebx
 86357cd:	29 c3                	sub    %eax,%ebx
 86357cf:	89 d8                	mov    %ebx,%eax
 86357d1:	8d 14 00             	lea    (%eax,%eax,1),%edx
 86357d4:	89 d0                	mov    %edx,%eax
 86357d6:	c1 e0 04             	shl    $0x4,%eax
 86357d9:	29 d0                	sub    %edx,%eax
 86357db:	89 ca                	mov    %ecx,%edx
 86357dd:	29 c2                	sub    %eax,%edx
 86357df:	89 d0                	mov    %edx,%eax
 86357e1:	6b c0 c4             	imul   $0xffffffc4,%eax,%eax
 86357e4:	8d 88 cc 06 00 00    	lea    0x6cc(%eax),%ecx
 86357ea:	8b 45 e0             	mov    -0x20(%ebp),%eax
 86357ed:	8b 00                	mov    (%eax),%eax
 86357ef:	ba 3c 00 00 00       	mov    $0x3c,%edx
 86357f4:	89 d3                	mov    %edx,%ebx
 86357f6:	29 c3                	sub    %eax,%ebx
 86357f8:	89 d8                	mov    %ebx,%eax
 86357fa:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 86357fd:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8635800:	e8 7c 69 a9 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 8635805:	89 04 24             	mov    %eax,(%esp)
 8635808:	e8 bd 52 b1 ff       	call   814aaca <_ZN12CEnvironment14get_channel_noEv>
 863580d:	89 c3                	mov    %eax,%ebx
 863580f:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8635812:	8b 38                	mov    (%eax),%edi
 8635814:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8635817:	8b 70 04             	mov    0x4(%eax),%esi
 863581a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8635821:	00 
 8635822:	c7 44 24 08 2c 09 00 	movl   $0x92c,0x8(%esp)
 8635829:	00 
 863582a:	c7 44 24 04 20 84 ce 	movl   $0x8ce8420,0x4(%esp)
 8635831:	08 
 8635832:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8635835:	89 04 24             	mov    %eax,(%esp)
 8635838:	e8 db 9e f1 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 863583d:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 8635841:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8635844:	89 44 24 10          	mov    %eax,0x10(%esp)
 8635848:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 863584c:	89 74 24 08          	mov    %esi,0x8(%esp)
 8635850:	c7 44 24 04 14 6e ce 	movl   $0x8ce6e14,0x4(%esp)
 8635857:	08 
 8635858:	8d 45 d0             	lea    -0x30(%ebp),%eax
 863585b:	89 04 24             	mov    %eax,(%esp)
 863585e:	e8 25 9f f1 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8635863:	e8 14 0c ac ff       	call   80f647c <_Z12G_TimerQueuev>
 8635868:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 863586f:	00 
 8635870:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 8635877:	00 
 8635878:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 863587b:	89 54 24 10          	mov    %edx,0x10(%esp)
 863587f:	c7 44 24 0c 54 00 00 	movl   $0x54,0xc(%esp)
 8635886:	00 
 8635887:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 863588e:	00 
 863588f:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8635896:	00 
 8635897:	89 04 24             	mov    %eax,(%esp)
 863589a:	e8 77 b5 ff ff       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 863589f:	b8 01 00 00 00       	mov    $0x1,%eax
 86358a4:	83 c4 7c             	add    $0x7c,%esp
 86358a7:	5b                   	pop    %ebx
 86358a8:	5e                   	pop    %esi
 86358a9:	5f                   	pop    %edi
 86358aa:	5d                   	pop    %ebp
 86358ab:	c3                   	ret

```

```c
// TimerStatisticsDetailChannelInfo::RegistNextTimer @ 0x8635782

/* TimerStatisticsDetailChannelInfo::RegistNextTimer() */

undefined4 TimerStatisticsDetailChannelInfo::RegistNextTimer(void)

{
  int iVar1;
  int iVar2;
  CEnvironment *this;
  undefined4 uVar3;
  TimerQueue *pTVar4;
  tm local_64;
  time_t local_38;
  cMyTrace local_34 [16];
  tm *local_24;
  int local_20;
  
  local_38 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  local_24 = localtime_r(&local_38,&local_64);
  local_20 = (local_24->tm_min % 0x1e) * -0x3c + (0x708 - local_24->tm_sec);
  this = (CEnvironment *)G_CEnvironment();
  uVar3 = CEnvironment::get_channel_no(this);
  iVar1 = local_24->tm_sec;
  iVar2 = local_24->tm_min;
  cMyTrace::cMyTrace(local_34,"bool TimerStatisticsDetailChannelInfo::RegistNextTimer()",0x92c,0);
  cMyTrace::operator()
            (local_34,"content min:%d sec:%d next sec:%d  (channel no:%d)\n",iVar2,iVar1,local_20,
             uVar3);
  pTVar4 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar4,2,0,0x54,local_20,0,0);
  return 1;
}

```

---

## dispatch_sig

```asm
// === 0863575c TimerStatisticsDetailChannelInfo::dispatch_sig  [0x0863575c-0x8635781] ===
 863575c:	55                   	push   %ebp
 863575d:	89 e5                	mov    %esp,%ebp
 863575f:	83 ec 18             	sub    $0x18,%esp
 8635762:	e8 40 4c aa ff       	call   80da3a7 <_Z11G_GameWorldv>
 8635767:	89 04 24             	mov    %eax,(%esp)
 863576a:	e8 0d 5a 09 00       	call   86cb17c <_ZN9GameWorld30updateDetailChannelServiceInfoEv>
 863576f:	8b 45 08             	mov    0x8(%ebp),%eax
 8635772:	89 04 24             	mov    %eax,(%esp)
 8635775:	e8 08 00 00 00       	call   8635782 <_ZN32TimerStatisticsDetailChannelInfo15RegistNextTimerEv>
 863577a:	b8 01 00 00 00       	mov    $0x1,%eax
 863577f:	c9                   	leave
 8635780:	c3                   	ret
 8635781:	90                   	nop

```

```c
// TimerStatisticsDetailChannelInfo::dispatch_sig @ 0x863575c

/* TimerStatisticsDetailChannelInfo::dispatch_sig(int, int, unsigned int) */

undefined4 TimerStatisticsDetailChannelInfo::dispatch_sig(int param_1,int param_2,uint param_3)

{
  G_GameWorld();
  GameWorld::updateDetailChannelServiceInfo();
  RegistNextTimer();
  return 1;
}

```

