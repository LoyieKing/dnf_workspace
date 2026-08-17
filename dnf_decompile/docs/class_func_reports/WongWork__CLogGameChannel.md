# WongWork__CLogGameChannel

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 8

---

## DoSaveLog

```asm
// === 08550612 WongWork::CLogGameChannel::DoSaveLog  [0x08550612-0x85506c5] ===
 8550612:	55                   	push   %ebp
 8550613:	89 e5                	mov    %esp,%ebp
 8550615:	57                   	push   %edi
 8550616:	56                   	push   %esi
 8550617:	53                   	push   %ebx
 8550618:	83 ec 5c             	sub    $0x5c,%esp
 855061b:	8b 45 08             	mov    0x8(%ebp),%eax
 855061e:	89 04 24             	mov    %eax,(%esp)
 8550621:	e8 9e fd ff ff       	call   85503c4 <_ZN8WongWork15CLogGameChannel14GetLogTargetDBEv>
 8550626:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8550629:	8b 45 0c             	mov    0xc(%ebp),%eax
 855062c:	0f b7 40 39          	movzwl 0x39(%eax),%eax
 8550630:	0f bf c8             	movswl %ax,%ecx
 8550633:	8b 45 0c             	mov    0xc(%ebp),%eax
 8550636:	0f b7 40 35          	movzwl 0x35(%eax),%eax
 855063a:	0f bf f8             	movswl %ax,%edi
 855063d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8550640:	0f b7 40 37          	movzwl 0x37(%eax),%eax
 8550644:	0f bf f0             	movswl %ax,%esi
 8550647:	8b 45 0c             	mov    0xc(%ebp),%eax
 855064a:	83 c0 25             	add    $0x25,%eax
 855064d:	89 45 d0             	mov    %eax,-0x30(%ebp)
 8550650:	8b 45 0c             	mov    0xc(%ebp),%eax
 8550653:	0f b7 40 23          	movzwl 0x23(%eax),%eax
 8550657:	0f bf d8             	movswl %ax,%ebx
 855065a:	8b 45 0c             	mov    0xc(%ebp),%eax
 855065d:	83 c0 05             	add    $0x5,%eax
 8550660:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8550663:	8b 45 0c             	mov    0xc(%ebp),%eax
 8550666:	8b 50 01             	mov    0x1(%eax),%edx
 8550669:	8b 45 0c             	mov    0xc(%ebp),%eax
 855066c:	0f b6 00             	movzbl (%eax),%eax
 855066f:	0f be c0             	movsbl %al,%eax
 8550672:	89 4c 24 24          	mov    %ecx,0x24(%esp)
 8550676:	89 7c 24 20          	mov    %edi,0x20(%esp)
 855067a:	89 74 24 1c          	mov    %esi,0x1c(%esp)
 855067e:	8b 4d d0             	mov    -0x30(%ebp),%ecx
 8550681:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 8550685:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 8550689:	8b 4d d4             	mov    -0x2c(%ebp),%ecx
 855068c:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8550690:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8550694:	89 44 24 08          	mov    %eax,0x8(%esp)
 8550698:	c7 44 24 04 58 f5 c9 	movl   $0x8c9f558,0x4(%esp)
 855069f:	08 
 85506a0:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85506a3:	89 04 24             	mov    %eax,(%esp)
 85506a6:	e8 15 3b ea ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 85506ab:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85506b2:	00 
 85506b3:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85506b6:	89 04 24             	mov    %eax,(%esp)
 85506b9:	e8 68 3c ea ff       	call   83f4326 <_ZN5MySQL4execEb>
 85506be:	83 c4 5c             	add    $0x5c,%esp
 85506c1:	5b                   	pop    %ebx
 85506c2:	5e                   	pop    %esi
 85506c3:	5f                   	pop    %edi
 85506c4:	5d                   	pop    %ebp
 85506c5:	c3                   	ret

```

```c
// WongWork::CLogGameChannel::DoSaveLog @ 0x8550612

/* WongWork::CLogGameChannel::DoSaveLog(SIG_SAVE_LOGGAMECHANNEL*) */

void __thiscall
WongWork::CLogGameChannel::DoSaveLog(CLogGameChannel *this,SIG_SAVE_LOGGAMECHANNEL *param_1)

{
  MySQL *this_00;
  
  this_00 = (MySQL *)GetLogTargetDB();
  MySQL::set_query(this_00,
                   "inSert into log_game_channel(gc_up_time,gc_game,gc_no,gc_channel,gc_ch_group,gc_ip,gc_now,gc_new,gc_out) values(now(),%d,%d,\'%s\',%d,\'%s\',%d,%d,%d)"
                   ,(int)(char)*param_1,*(undefined4 *)(param_1 + 1),param_1 + 5,
                   (int)*(short *)(param_1 + 0x23),param_1 + 0x25,(int)*(short *)(param_1 + 0x37),
                   (int)*(short *)(param_1 + 0x35),(int)*(short *)(param_1 + 0x39));
  MySQL::exec(this_00,true);
  return;
}

```

---

## GetLogTargetDB

```asm
// === 085503c4 WongWork::CLogGameChannel::GetLogTargetDB  [0x085503c4-0x85503e9] ===
 85503c4:	55                   	push   %ebp
 85503c5:	89 e5                	mov    %esp,%ebp
 85503c7:	83 ec 18             	sub    $0x18,%esp
 85503ca:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 85503cf:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 85503d6:	00 
 85503d7:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 85503de:	00 
 85503df:	89 04 24             	mov    %eax,(%esp)
 85503e2:	e8 57 4e ea ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 85503e7:	c9                   	leave
 85503e8:	c3                   	ret
 85503e9:	90                   	nop

```

```c
// WongWork::CLogGameChannel::GetLogTargetDB @ 0x85503c4

/* WongWork::CLogGameChannel::GetLogTargetDB() */

void WongWork::CLogGameChannel::GetLogTargetDB(void)

{
  DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  return;
}

```

---

## IncInUser

```asm
// === 085506de WongWork::CLogGameChannel::IncInUser  [0x085506de-0x85506ff] ===
 85506de:	55                   	push   %ebp
 85506df:	89 e5                	mov    %esp,%ebp
 85506e1:	8b 45 08             	mov    0x8(%ebp),%eax
 85506e4:	8b 00                	mov    (%eax),%eax
 85506e6:	8d 50 01             	lea    0x1(%eax),%edx
 85506e9:	8b 45 08             	mov    0x8(%ebp),%eax
 85506ec:	89 10                	mov    %edx,(%eax)
 85506ee:	8b 45 08             	mov    0x8(%ebp),%eax
 85506f1:	8b 40 08             	mov    0x8(%eax),%eax
 85506f4:	8d 50 01             	lea    0x1(%eax),%edx
 85506f7:	8b 45 08             	mov    0x8(%ebp),%eax
 85506fa:	89 50 08             	mov    %edx,0x8(%eax)
 85506fd:	5d                   	pop    %ebp
 85506fe:	c3                   	ret
 85506ff:	90                   	nop

```

```c
// WongWork::CLogGameChannel::IncInUser @ 0x85506de

/* WongWork::CLogGameChannel::IncInUser() */

void __thiscall WongWork::CLogGameChannel::IncInUser(CLogGameChannel *this)

{
  *(int *)this = *(int *)this + 1;
  *(int *)(this + 8) = *(int *)(this + 8) + 1;
  return;
}

```

---

## IncOutUser

```asm
// === 08550700 WongWork::CLogGameChannel::IncOutUser  [0x08550700-0x8550722] ===
 8550700:	55                   	push   %ebp
 8550701:	89 e5                	mov    %esp,%ebp
 8550703:	8b 45 08             	mov    0x8(%ebp),%eax
 8550706:	8b 40 04             	mov    0x4(%eax),%eax
 8550709:	8d 50 01             	lea    0x1(%eax),%edx
 855070c:	8b 45 08             	mov    0x8(%ebp),%eax
 855070f:	89 50 04             	mov    %edx,0x4(%eax)
 8550712:	8b 45 08             	mov    0x8(%ebp),%eax
 8550715:	8b 40 08             	mov    0x8(%eax),%eax
 8550718:	8d 50 ff             	lea    -0x1(%eax),%edx
 855071b:	8b 45 08             	mov    0x8(%ebp),%eax
 855071e:	89 50 08             	mov    %edx,0x8(%eax)
 8550721:	5d                   	pop    %ebp
 8550722:	c3                   	ret

```

```c
// WongWork::CLogGameChannel::IncOutUser @ 0x8550700

/* WongWork::CLogGameChannel::IncOutUser() */

void __thiscall WongWork::CLogGameChannel::IncOutUser(CLogGameChannel *this)

{
  *(int *)(this + 4) = *(int *)(this + 4) + 1;
  *(int *)(this + 8) = *(int *)(this + 8) + -1;
  return;
}

```

---

## ReqSaveLog

```asm
// === 08550456 WongWork::CLogGameChannel::ReqSaveLog  [0x08550456-0x8550611] ===
 8550456:	55                   	push   %ebp
 8550457:	89 e5                	mov    %esp,%ebp
 8550459:	56                   	push   %esi
 855045a:	53                   	push   %ebx
 855045b:	83 ec 20             	sub    $0x20,%esp
 855045e:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8550463:	c7 44 24 08 20 00 00 	movl   $0x20,0x8(%esp)
 855046a:	00 
 855046b:	c7 44 24 04 43 f5 c9 	movl   $0x8c9f543,0x4(%esp)
 8550472:	08 
 8550473:	89 04 24             	mov    %eax,(%esp)
 8550476:	e8 0b f6 d3 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 855047b:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8550482:	00 
 8550483:	89 44 24 04          	mov    %eax,0x4(%esp)
 8550487:	8d 45 ec             	lea    -0x14(%ebp),%eax
 855048a:	89 04 24             	mov    %eax,(%esp)
 855048d:	e8 94 87 b7 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8550492:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8550495:	89 04 24             	mov    %eax,(%esp)
 8550498:	e8 a9 87 b7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 855049d:	c7 44 24 04 79 00 00 	movl   $0x79,0x4(%esp)
 85504a4:	00 
 85504a5:	89 04 24             	mov    %eax,(%esp)
 85504a8:	e8 a9 87 b7 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 85504ad:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85504b0:	89 04 24             	mov    %eax,(%esp)
 85504b3:	e8 8e 87 b7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 85504b8:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 85504bf:	ff 
 85504c0:	89 04 24             	mov    %eax,(%esp)
 85504c3:	e8 8e 87 b7 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 85504c8:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85504cb:	89 04 24             	mov    %eax,(%esp)
 85504ce:	e8 7b 87 b7 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 85504d3:	89 04 24             	mov    %eax,(%esp)
 85504d6:	e8 a5 02 00 00       	call   8550780 <_ZN12CStreamGuard11GetInBufferI23SIG_SAVE_LOGGAMECHANNELEEPT_v>
 85504db:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85504de:	c7 44 24 08 3b 00 00 	movl   $0x3b,0x8(%esp)
 85504e5:	00 
 85504e6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85504ed:	00 
 85504ee:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85504f1:	89 04 24             	mov    %eax,(%esp)
 85504f4:	e8 c7 d7 b2 ff       	call   807dcc0 <memset@plt>
 85504f9:	e8 83 bc b7 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 85504fe:	8b 80 78 03 00 00    	mov    0x378(%eax),%eax
 8550504:	89 c2                	mov    %eax,%edx
 8550506:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8550509:	88 10                	mov    %dl,(%eax)
 855050b:	e8 71 bc b7 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 8550510:	8b 80 b0 01 00 00    	mov    0x1b0(%eax),%eax
 8550516:	89 c2                	mov    %eax,%edx
 8550518:	8b 45 f4             	mov    -0xc(%ebp),%eax
 855051b:	66 89 50 23          	mov    %dx,0x23(%eax)
 855051f:	e8 5d bc b7 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 8550524:	8b 90 98 01 00 00    	mov    0x198(%eax),%edx
 855052a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 855052d:	89 50 01             	mov    %edx,0x1(%eax)
 8550530:	e8 4c bc b7 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 8550535:	05 84 03 00 00       	add    $0x384,%eax
 855053a:	89 04 24             	mov    %eax,(%esp)
 855053d:	e8 6e de b2 ff       	call   807e3b0 <strlen@plt>
 8550542:	89 c3                	mov    %eax,%ebx
 8550544:	e8 38 bc b7 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 8550549:	8d 90 84 03 00 00    	lea    0x384(%eax),%edx
 855054f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8550552:	83 c0 05             	add    $0x5,%eax
 8550555:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8550559:	89 54 24 04          	mov    %edx,0x4(%esp)
 855055d:	89 04 24             	mov    %eax,(%esp)
 8550560:	e8 3b d3 b2 ff       	call   807d8a0 <memcpy@plt>
 8550565:	e8 17 bc b7 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 855056a:	05 b4 01 00 00       	add    $0x1b4,%eax
 855056f:	89 04 24             	mov    %eax,(%esp)
 8550572:	e8 39 de b2 ff       	call   807e3b0 <strlen@plt>
 8550577:	89 c3                	mov    %eax,%ebx
 8550579:	e8 03 bc b7 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 855057e:	8d 90 b4 01 00 00    	lea    0x1b4(%eax),%edx
 8550584:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8550587:	83 c0 25             	add    $0x25,%eax
 855058a:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 855058e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8550592:	89 04 24             	mov    %eax,(%esp)
 8550595:	e8 06 d3 b2 ff       	call   807d8a0 <memcpy@plt>
 855059a:	8b 45 08             	mov    0x8(%ebp),%eax
 855059d:	8b 40 08             	mov    0x8(%eax),%eax
 85505a0:	89 c2                	mov    %eax,%edx
 85505a2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85505a5:	66 89 50 37          	mov    %dx,0x37(%eax)
 85505a9:	8b 45 08             	mov    0x8(%ebp),%eax
 85505ac:	8b 00                	mov    (%eax),%eax
 85505ae:	89 c2                	mov    %eax,%edx
 85505b0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85505b3:	66 89 50 35          	mov    %dx,0x35(%eax)
 85505b7:	8b 45 08             	mov    0x8(%ebp),%eax
 85505ba:	8b 40 04             	mov    0x4(%eax),%eax
 85505bd:	89 c2                	mov    %eax,%edx
 85505bf:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85505c2:	66 89 50 39          	mov    %dx,0x39(%eax)
 85505c6:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 85505cb:	8d 55 ec             	lea    -0x14(%ebp),%edx
 85505ce:	89 54 24 08          	mov    %edx,0x8(%esp)
 85505d2:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 85505d9:	00 
 85505da:	89 04 24             	mov    %eax,(%esp)
 85505dd:	e8 fc 09 02 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 85505e2:	eb 1b                	jmp    85505ff <_ZN8WongWork15CLogGameChannel10ReqSaveLogEv+0x1a9>
 85505e4:	89 d3                	mov    %edx,%ebx
 85505e6:	89 c6                	mov    %eax,%esi
 85505e8:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85505eb:	89 04 24             	mov    %eax,(%esp)
 85505ee:	e8 df c2 0c 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 85505f3:	89 f0                	mov    %esi,%eax
 85505f5:	89 da                	mov    %ebx,%edx
 85505f7:	89 04 24             	mov    %eax,(%esp)
 85505fa:	e8 51 31 59 00       	call   8ae3750 <_Unwind_Resume>
 85505ff:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8550602:	89 04 24             	mov    %eax,(%esp)
 8550605:	e8 c8 c2 0c 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 855060a:	83 c4 20             	add    $0x20,%esp
 855060d:	5b                   	pop    %ebx
 855060e:	5e                   	pop    %esi
 855060f:	5d                   	pop    %ebp
 8550610:	c3                   	ret
 8550611:	90                   	nop

```

```c
// WongWork::CLogGameChannel::ReqSaveLog @ 0x8550456

/* WongWork::CLogGameChannel::ReqSaveLog() */

void __thiscall WongWork::CLogGameChannel::ReqSaveLog(CLogGameChannel *this)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  int iVar3;
  size_t sVar4;
  CStreamGuard local_18 [8];
  SIG_SAVE_LOGGAMECHANNEL *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"LogGameChannel.cpp",0x20);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 085504a8 to 085505e1 has its CatchHandler @ 085505e4 */
  CStreamGuard::operator<<(pCVar2,0x79);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_SAVE_LOGGAMECHANNEL>(pCVar2);
  memset(local_10,0,0x3b);
  iVar3 = G_CEnvironment();
  *local_10 = SUB41(*(undefined4 *)(iVar3 + 0x378),0);
  iVar3 = G_CEnvironment();
  *(short *)(local_10 + 0x23) = (short)*(undefined4 *)(iVar3 + 0x1b0);
  iVar3 = G_CEnvironment();
  *(undefined4 *)(local_10 + 1) = *(undefined4 *)(iVar3 + 0x198);
  iVar3 = G_CEnvironment();
  sVar4 = strlen((char *)(iVar3 + 900));
  iVar3 = G_CEnvironment();
  memcpy(local_10 + 5,(void *)(iVar3 + 900),sVar4);
  iVar3 = G_CEnvironment();
  sVar4 = strlen((char *)(iVar3 + 0x1b4));
  iVar3 = G_CEnvironment();
  memcpy(local_10 + 0x25,(void *)(iVar3 + 0x1b4),sVar4);
  *(short *)(local_10 + 0x37) = (short)*(undefined4 *)(this + 8);
  *(short *)(local_10 + 0x35) = (short)*(undefined4 *)this;
  *(short *)(local_10 + 0x39) = (short)*(undefined4 *)(this + 4);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,4,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}

```

---

## ResetInOutUser

```asm
// === 085506c6 WongWork::CLogGameChannel::ResetInOutUser  [0x085506c6-0x85506dd] ===
 85506c6:	55                   	push   %ebp
 85506c7:	89 e5                	mov    %esp,%ebp
 85506c9:	8b 45 08             	mov    0x8(%ebp),%eax
 85506cc:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 85506d2:	8b 45 08             	mov    0x8(%ebp),%eax
 85506d5:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 85506dc:	5d                   	pop    %ebp
 85506dd:	c3                   	ret

```

```c
// WongWork::CLogGameChannel::ResetInOutUser @ 0x85506c6

/* WongWork::CLogGameChannel::ResetInOutUser() */

void __thiscall WongWork::CLogGameChannel::ResetInOutUser(CLogGameChannel *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  return;
}

```

---

## SetNextLogTimer

```asm
// === 085503fe WongWork::CLogGameChannel::SetNextLogTimer  [0x085503fe-0x8550455] ===
 85503fe:	55                   	push   %ebp
 85503ff:	89 e5                	mov    %esp,%ebp
 8550401:	53                   	push   %ebx
 8550402:	83 ec 24             	sub    $0x24,%esp
 8550405:	8b 45 08             	mov    0x8(%ebp),%eax
 8550408:	8b 40 0c             	mov    0xc(%eax),%eax
 855040b:	c1 e0 02             	shl    $0x2,%eax
 855040e:	89 c2                	mov    %eax,%edx
 8550410:	c1 e2 04             	shl    $0x4,%edx
 8550413:	89 d3                	mov    %edx,%ebx
 8550415:	29 c3                	sub    %eax,%ebx
 8550417:	e8 60 60 ba ff       	call   80f647c <_Z12G_TimerQueuev>
 855041c:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 8550423:	00 
 8550424:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 855042b:	00 
 855042c:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8550430:	c7 44 24 0c 58 00 00 	movl   $0x58,0xc(%esp)
 8550437:	00 
 8550438:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 855043f:	00 
 8550440:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8550447:	00 
 8550448:	89 04 24             	mov    %eax,(%esp)
 855044b:	e8 c6 09 0e 00       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 8550450:	83 c4 24             	add    $0x24,%esp
 8550453:	5b                   	pop    %ebx
 8550454:	5d                   	pop    %ebp
 8550455:	c3                   	ret

```

```c
// WongWork::CLogGameChannel::SetNextLogTimer @ 0x85503fe

/* WongWork::CLogGameChannel::SetNextLogTimer() */

void __thiscall WongWork::CLogGameChannel::SetNextLogTimer(CLogGameChannel *this)

{
  int iVar1;
  TimerQueue *pTVar2;
  
  iVar1 = *(int *)(this + 0xc);
  pTVar2 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar2,2,0,0x58,iVar1 * 0x3c,0,0);
  return;
}

```

---

## StartLogTimer

```asm
// === 085503ea WongWork::CLogGameChannel::StartLogTimer  [0x085503ea-0x85503fd] ===
 85503ea:	55                   	push   %ebp
 85503eb:	89 e5                	mov    %esp,%ebp
 85503ed:	83 ec 18             	sub    $0x18,%esp
 85503f0:	8b 45 08             	mov    0x8(%ebp),%eax
 85503f3:	89 04 24             	mov    %eax,(%esp)
 85503f6:	e8 03 00 00 00       	call   85503fe <_ZN8WongWork15CLogGameChannel15SetNextLogTimerEv>
 85503fb:	c9                   	leave
 85503fc:	c3                   	ret
 85503fd:	90                   	nop

```

```c
// WongWork::CLogGameChannel::StartLogTimer @ 0x85503ea

/* WongWork::CLogGameChannel::StartLogTimer() */

void __thiscall WongWork::CLogGameChannel::StartLogTimer(CLogGameChannel *this)

{
  SetNextLogTimer(this);
  return;
}

```

