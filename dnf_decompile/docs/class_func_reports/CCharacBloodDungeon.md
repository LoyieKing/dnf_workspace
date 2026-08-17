# CCharacBloodDungeon

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## ResetDaily

```asm
// === 0832a5b6 CCharacBloodDungeon::ResetDaily  [0x0832a5b6-0x832a638] ===
 832a5b6:	55                   	push   %ebp
 832a5b7:	89 e5                	mov    %esp,%ebp
 832a5b9:	83 ec 58             	sub    $0x58,%esp
 832a5bc:	8b 45 08             	mov    0x8(%ebp),%eax
 832a5bf:	c7 40 18 00 00 00 00 	movl   $0x0,0x18(%eax)
 832a5c6:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 832a5cd:	e8 cc 16 da ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 832a5d2:	89 45 f0             	mov    %eax,-0x10(%ebp)
 832a5d5:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 832a5d8:	89 44 24 04          	mov    %eax,0x4(%esp)
 832a5dc:	8d 45 f0             	lea    -0x10(%ebp),%eax
 832a5df:	89 04 24             	mov    %eax,(%esp)
 832a5e2:	e8 79 3d d5 ff       	call   807e360 <localtime_r@plt>
 832a5e7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 832a5ea:	8b 45 f4             	mov    -0xc(%ebp),%eax
 832a5ed:	8b 40 18             	mov    0x18(%eax),%eax
 832a5f0:	83 f8 01             	cmp    $0x1,%eax
 832a5f3:	75 25                	jne    832a61a <_ZN19CCharacBloodDungeon10ResetDailyEv+0x64>
 832a5f5:	8b 45 08             	mov    0x8(%ebp),%eax
 832a5f8:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 832a5ff:	8b 45 08             	mov    0x8(%ebp),%eax
 832a602:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 832a609:	8b 45 08             	mov    0x8(%ebp),%eax
 832a60c:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
 832a613:	8b 45 08             	mov    0x8(%ebp),%eax
 832a616:	c6 40 20 00          	movb   $0x0,0x20(%eax)
 832a61a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 832a61d:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 832a624:	8b 45 f4             	mov    -0xc(%ebp),%eax
 832a627:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 832a62e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 832a631:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 832a637:	c9                   	leave
 832a638:	c3                   	ret

```

```c
// CCharacBloodDungeon::ResetDaily @ 0x832a5b6

/* CCharacBloodDungeon::ResetDaily() */

void __thiscall CCharacBloodDungeon::ResetDaily(CCharacBloodDungeon *this)

{
  tm *ptVar1;
  tm local_40;
  time_t local_14 [4];
  
  *(undefined4 *)(this + 0x18) = 0;
  local_14[0] = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  ptVar1 = localtime_r(local_14,&local_40);
  if (ptVar1->tm_wday == 1) {
    *(undefined4 *)(this + 8) = 0;
    *(undefined4 *)(this + 0xc) = 0;
    *(undefined4 *)(this + 0x10) = 0;
    this[0x20] = (CCharacBloodDungeon)0x0;
  }
  ptVar1->tm_hour = 0;
  ptVar1->tm_min = 0;
  ptVar1->tm_sec = 0;
  return;
}

```

---

## _reset

```asm
// === 0832a2d4 CCharacBloodDungeon::_reset  [0x0832a2d4-0x832a32f] ===
 832a2d4:	55                   	push   %ebp
 832a2d5:	89 e5                	mov    %esp,%ebp
 832a2d7:	8b 45 08             	mov    0x8(%ebp),%eax
 832a2da:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 832a2e1:	8b 45 08             	mov    0x8(%ebp),%eax
 832a2e4:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 832a2eb:	8b 45 08             	mov    0x8(%ebp),%eax
 832a2ee:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
 832a2f5:	8b 45 08             	mov    0x8(%ebp),%eax
 832a2f8:	c7 40 14 00 00 00 00 	movl   $0x0,0x14(%eax)
 832a2ff:	8b 45 08             	mov    0x8(%ebp),%eax
 832a302:	c7 40 18 00 00 00 00 	movl   $0x0,0x18(%eax)
 832a309:	8b 45 08             	mov    0x8(%ebp),%eax
 832a30c:	c7 40 1c 00 00 00 00 	movl   $0x0,0x1c(%eax)
 832a313:	8b 45 08             	mov    0x8(%ebp),%eax
 832a316:	c6 40 20 00          	movb   $0x0,0x20(%eax)
 832a31a:	8b 45 08             	mov    0x8(%ebp),%eax
 832a31d:	c7 40 24 00 00 00 00 	movl   $0x0,0x24(%eax)
 832a324:	8b 45 08             	mov    0x8(%ebp),%eax
 832a327:	c7 40 28 00 00 00 00 	movl   $0x0,0x28(%eax)
 832a32e:	5d                   	pop    %ebp
 832a32f:	c3                   	ret

```

```c
// CCharacBloodDungeon::_reset @ 0x832a2d4

/* CCharacBloodDungeon::_reset() */

void __thiscall CCharacBloodDungeon::_reset(CCharacBloodDungeon *this)

{
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  this[0x20] = (CCharacBloodDungeon)0x0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  return;
}

```

---

## _saveData

```asm
// === 0832a330 CCharacBloodDungeon::_saveData  [0x0832a330-0x832a4c5] ===
 832a330:	55                   	push   %ebp
 832a331:	89 e5                	mov    %esp,%ebp
 832a333:	56                   	push   %esi
 832a334:	53                   	push   %ebx
 832a335:	83 ec 20             	sub    $0x20,%esp
 832a338:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 832a33d:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 832a344:	00 
 832a345:	c7 44 24 04 80 6d c2 	movl   $0x8c26d80,0x4(%esp)
 832a34c:	08 
 832a34d:	89 04 24             	mov    %eax,(%esp)
 832a350:	e8 31 57 f6 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 832a355:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 832a35c:	00 
 832a35d:	89 44 24 04          	mov    %eax,0x4(%esp)
 832a361:	8d 45 ec             	lea    -0x14(%ebp),%eax
 832a364:	89 04 24             	mov    %eax,(%esp)
 832a367:	e8 ba e8 d9 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 832a36c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 832a36f:	89 04 24             	mov    %eax,(%esp)
 832a372:	e8 cf e8 d9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 832a377:	c7 44 24 04 97 01 00 	movl   $0x197,0x4(%esp)
 832a37e:	00 
 832a37f:	89 04 24             	mov    %eax,(%esp)
 832a382:	e8 cf e8 d9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 832a387:	8b 45 0c             	mov    0xc(%ebp),%eax
 832a38a:	89 04 24             	mov    %eax,(%esp)
 832a38d:	e8 04 e9 d9 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 832a392:	89 c3                	mov    %eax,%ebx
 832a394:	8d 45 ec             	lea    -0x14(%ebp),%eax
 832a397:	89 04 24             	mov    %eax,(%esp)
 832a39a:	e8 a7 e8 d9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 832a39f:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 832a3a3:	89 04 24             	mov    %eax,(%esp)
 832a3a6:	e8 ab e8 d9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 832a3ab:	8d 45 ec             	lea    -0x14(%ebp),%eax
 832a3ae:	89 04 24             	mov    %eax,(%esp)
 832a3b1:	e8 98 e8 d9 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 832a3b6:	89 04 24             	mov    %eax,(%esp)
 832a3b9:	e8 d8 02 00 00       	call   832a696 <_ZN12CStreamGuard11GetInBufferI17SIG_BLOOD_DUNGEONEEPT_v>
 832a3be:	89 45 f4             	mov    %eax,-0xc(%ebp)
 832a3c1:	c7 44 24 08 28 00 00 	movl   $0x28,0x8(%esp)
 832a3c8:	00 
 832a3c9:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 832a3d0:	00 
 832a3d1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 832a3d4:	89 04 24             	mov    %eax,(%esp)
 832a3d7:	e8 e4 38 d5 ff       	call   807dcc0 <memset@plt>
 832a3dc:	8b 45 0c             	mov    0xc(%ebp),%eax
 832a3df:	89 04 24             	mov    %eax,(%esp)
 832a3e2:	e8 67 18 da ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 832a3e7:	8b 55 f4             	mov    -0xc(%ebp),%edx
 832a3ea:	89 02                	mov    %eax,(%edx)
 832a3ec:	8b 45 08             	mov    0x8(%ebp),%eax
 832a3ef:	8b 50 08             	mov    0x8(%eax),%edx
 832a3f2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 832a3f5:	89 50 04             	mov    %edx,0x4(%eax)
 832a3f8:	8b 45 08             	mov    0x8(%ebp),%eax
 832a3fb:	8b 50 0c             	mov    0xc(%eax),%edx
 832a3fe:	8b 45 f4             	mov    -0xc(%ebp),%eax
 832a401:	89 50 08             	mov    %edx,0x8(%eax)
 832a404:	8b 45 08             	mov    0x8(%ebp),%eax
 832a407:	8b 50 10             	mov    0x10(%eax),%edx
 832a40a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 832a40d:	89 50 0c             	mov    %edx,0xc(%eax)
 832a410:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 832a417:	00 
 832a418:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 832a41f:	00 
 832a420:	c7 04 24 06 00 00 00 	movl   $0x6,(%esp)
 832a427:	e8 2e 7b 38 00       	call   86b1f5a <_Z22getDailyInitializeTimeiii>
 832a42c:	8b 55 f4             	mov    -0xc(%ebp),%edx
 832a42f:	89 42 10             	mov    %eax,0x10(%edx)
 832a432:	8b 45 08             	mov    0x8(%ebp),%eax
 832a435:	8b 50 18             	mov    0x18(%eax),%edx
 832a438:	8b 45 f4             	mov    -0xc(%ebp),%eax
 832a43b:	89 50 14             	mov    %edx,0x14(%eax)
 832a43e:	8b 45 08             	mov    0x8(%ebp),%eax
 832a441:	8b 50 1c             	mov    0x1c(%eax),%edx
 832a444:	8b 45 f4             	mov    -0xc(%ebp),%eax
 832a447:	89 50 18             	mov    %edx,0x18(%eax)
 832a44a:	8b 45 08             	mov    0x8(%ebp),%eax
 832a44d:	0f b6 50 20          	movzbl 0x20(%eax),%edx
 832a451:	8b 45 f4             	mov    -0xc(%ebp),%eax
 832a454:	88 50 1c             	mov    %dl,0x1c(%eax)
 832a457:	8b 45 08             	mov    0x8(%ebp),%eax
 832a45a:	8b 50 24             	mov    0x24(%eax),%edx
 832a45d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 832a460:	89 50 20             	mov    %edx,0x20(%eax)
 832a463:	8b 45 08             	mov    0x8(%ebp),%eax
 832a466:	8b 50 28             	mov    0x28(%eax),%edx
 832a469:	8b 45 f4             	mov    -0xc(%ebp),%eax
 832a46c:	89 50 24             	mov    %edx,0x24(%eax)
 832a46f:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 832a474:	8d 55 ec             	lea    -0x14(%ebp),%edx
 832a477:	89 54 24 08          	mov    %edx,0x8(%esp)
 832a47b:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 832a482:	00 
 832a483:	89 04 24             	mov    %eax,(%esp)
 832a486:	e8 53 6b 24 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 832a48b:	8b 45 08             	mov    0x8(%ebp),%eax
 832a48e:	c6 40 20 00          	movb   $0x0,0x20(%eax)
 832a492:	bb 01 00 00 00       	mov    $0x1,%ebx
 832a497:	8d 45 ec             	lea    -0x14(%ebp),%eax
 832a49a:	89 04 24             	mov    %eax,(%esp)
 832a49d:	e8 30 24 2f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 832a4a2:	89 d8                	mov    %ebx,%eax
 832a4a4:	83 c4 20             	add    $0x20,%esp
 832a4a7:	5b                   	pop    %ebx
 832a4a8:	5e                   	pop    %esi
 832a4a9:	5d                   	pop    %ebp
 832a4aa:	c3                   	ret
 832a4ab:	89 d3                	mov    %edx,%ebx
 832a4ad:	89 c6                	mov    %eax,%esi
 832a4af:	8d 45 ec             	lea    -0x14(%ebp),%eax
 832a4b2:	89 04 24             	mov    %eax,(%esp)
 832a4b5:	e8 18 24 2f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 832a4ba:	89 f0                	mov    %esi,%eax
 832a4bc:	89 da                	mov    %ebx,%edx
 832a4be:	89 04 24             	mov    %eax,(%esp)
 832a4c1:	e8 8a 92 7b 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// CCharacBloodDungeon::_saveData @ 0x832a330

/* CCharacBloodDungeon::_saveData(CUser*) */

undefined4 __thiscall CCharacBloodDungeon::_saveData(CCharacBloodDungeon *this,CUser *param_1)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  int iVar3;
  undefined4 uVar4;
  CStreamGuard local_18 [8];
  SIG_BLOOD_DUNGEON *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"CharacBloodDungeon.cpp",0x1e);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0832a382 to 0832a48a has its CatchHandler @ 0832a4ab */
  CStreamGuard::operator<<(pCVar2,0x197);
  iVar3 = CUser::GetUID(param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,iVar3);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_BLOOD_DUNGEON>(pCVar2);
  memset(local_10,0,0x28);
  uVar4 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
  *(undefined4 *)local_10 = uVar4;
  *(undefined4 *)(local_10 + 4) = *(undefined4 *)(this + 8);
  *(undefined4 *)(local_10 + 8) = *(undefined4 *)(this + 0xc);
  *(undefined4 *)(local_10 + 0xc) = *(undefined4 *)(this + 0x10);
  uVar4 = getDailyInitializeTime(6,0,0);
  *(undefined4 *)(local_10 + 0x10) = uVar4;
  *(undefined4 *)(local_10 + 0x14) = *(undefined4 *)(this + 0x18);
  *(undefined4 *)(local_10 + 0x18) = *(undefined4 *)(this + 0x1c);
  local_10[0x1c] = *(SIG_BLOOD_DUNGEON *)(this + 0x20);
  *(undefined4 *)(local_10 + 0x20) = *(undefined4 *)(this + 0x24);
  *(undefined4 *)(local_10 + 0x24) = *(undefined4 *)(this + 0x28);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  this[0x20] = (CCharacBloodDungeon)0x0;
  CStreamGuard::~CStreamGuard(local_18);
  return 1;
}

```

---

## getData

```asm
// === 0832a53a CCharacBloodDungeon::getData  [0x0832a53a-0x832a5b5] ===
 832a53a:	55                   	push   %ebp
 832a53b:	89 e5                	mov    %esp,%ebp
 832a53d:	83 ec 10             	sub    $0x10,%esp
 832a540:	8b 45 0c             	mov    0xc(%ebp),%eax
 832a543:	89 45 fc             	mov    %eax,-0x4(%ebp)
 832a546:	8b 45 08             	mov    0x8(%ebp),%eax
 832a549:	8b 50 08             	mov    0x8(%eax),%edx
 832a54c:	8b 45 fc             	mov    -0x4(%ebp),%eax
 832a54f:	89 50 04             	mov    %edx,0x4(%eax)
 832a552:	8b 45 08             	mov    0x8(%ebp),%eax
 832a555:	8b 50 0c             	mov    0xc(%eax),%edx
 832a558:	8b 45 fc             	mov    -0x4(%ebp),%eax
 832a55b:	89 50 08             	mov    %edx,0x8(%eax)
 832a55e:	8b 45 08             	mov    0x8(%ebp),%eax
 832a561:	8b 50 10             	mov    0x10(%eax),%edx
 832a564:	8b 45 fc             	mov    -0x4(%ebp),%eax
 832a567:	89 50 0c             	mov    %edx,0xc(%eax)
 832a56a:	8b 45 08             	mov    0x8(%ebp),%eax
 832a56d:	8b 50 14             	mov    0x14(%eax),%edx
 832a570:	8b 45 fc             	mov    -0x4(%ebp),%eax
 832a573:	89 50 10             	mov    %edx,0x10(%eax)
 832a576:	8b 45 08             	mov    0x8(%ebp),%eax
 832a579:	8b 50 18             	mov    0x18(%eax),%edx
 832a57c:	8b 45 fc             	mov    -0x4(%ebp),%eax
 832a57f:	89 50 14             	mov    %edx,0x14(%eax)
 832a582:	8b 45 08             	mov    0x8(%ebp),%eax
 832a585:	8b 50 1c             	mov    0x1c(%eax),%edx
 832a588:	8b 45 fc             	mov    -0x4(%ebp),%eax
 832a58b:	89 50 18             	mov    %edx,0x18(%eax)
 832a58e:	8b 45 08             	mov    0x8(%ebp),%eax
 832a591:	0f b6 50 20          	movzbl 0x20(%eax),%edx
 832a595:	8b 45 fc             	mov    -0x4(%ebp),%eax
 832a598:	88 50 1c             	mov    %dl,0x1c(%eax)
 832a59b:	8b 45 08             	mov    0x8(%ebp),%eax
 832a59e:	8b 50 24             	mov    0x24(%eax),%edx
 832a5a1:	8b 45 fc             	mov    -0x4(%ebp),%eax
 832a5a4:	89 50 20             	mov    %edx,0x20(%eax)
 832a5a7:	8b 45 08             	mov    0x8(%ebp),%eax
 832a5aa:	8b 50 28             	mov    0x28(%eax),%edx
 832a5ad:	8b 45 fc             	mov    -0x4(%ebp),%eax
 832a5b0:	89 50 24             	mov    %edx,0x24(%eax)
 832a5b3:	c9                   	leave
 832a5b4:	c3                   	ret
 832a5b5:	90                   	nop

```

```c
// CCharacBloodDungeon::getData @ 0x832a53a

/* CCharacBloodDungeon::getData(char*) const */

void __thiscall CCharacBloodDungeon::getData(CCharacBloodDungeon *this,char *param_1)

{
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 8);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(this + 0xc);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(this + 0x10);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(this + 0x14);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(this + 0x18);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(this + 0x1c);
  *(CCharacBloodDungeon *)(param_1 + 0x1c) = this[0x20];
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(this + 0x24);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(this + 0x28);
  return;
}

```

---

## loadData

```asm
// === 0832a4c6 CCharacBloodDungeon::loadData  [0x0832a4c6-0x832a539] ===
 832a4c6:	55                   	push   %ebp
 832a4c7:	89 e5                	mov    %esp,%ebp
 832a4c9:	83 ec 10             	sub    $0x10,%esp
 832a4cc:	8b 45 10             	mov    0x10(%ebp),%eax
 832a4cf:	89 45 fc             	mov    %eax,-0x4(%ebp)
 832a4d2:	8b 45 fc             	mov    -0x4(%ebp),%eax
 832a4d5:	8b 50 04             	mov    0x4(%eax),%edx
 832a4d8:	8b 45 08             	mov    0x8(%ebp),%eax
 832a4db:	89 50 08             	mov    %edx,0x8(%eax)
 832a4de:	8b 45 fc             	mov    -0x4(%ebp),%eax
 832a4e1:	8b 50 08             	mov    0x8(%eax),%edx
 832a4e4:	8b 45 08             	mov    0x8(%ebp),%eax
 832a4e7:	89 50 0c             	mov    %edx,0xc(%eax)
 832a4ea:	8b 45 fc             	mov    -0x4(%ebp),%eax
 832a4ed:	8b 50 0c             	mov    0xc(%eax),%edx
 832a4f0:	8b 45 08             	mov    0x8(%ebp),%eax
 832a4f3:	89 50 10             	mov    %edx,0x10(%eax)
 832a4f6:	8b 45 fc             	mov    -0x4(%ebp),%eax
 832a4f9:	8b 50 10             	mov    0x10(%eax),%edx
 832a4fc:	8b 45 08             	mov    0x8(%ebp),%eax
 832a4ff:	89 50 14             	mov    %edx,0x14(%eax)
 832a502:	8b 45 fc             	mov    -0x4(%ebp),%eax
 832a505:	8b 50 14             	mov    0x14(%eax),%edx
 832a508:	8b 45 08             	mov    0x8(%ebp),%eax
 832a50b:	89 50 18             	mov    %edx,0x18(%eax)
 832a50e:	8b 45 fc             	mov    -0x4(%ebp),%eax
 832a511:	8b 50 18             	mov    0x18(%eax),%edx
 832a514:	8b 45 08             	mov    0x8(%ebp),%eax
 832a517:	89 50 1c             	mov    %edx,0x1c(%eax)
 832a51a:	8b 45 fc             	mov    -0x4(%ebp),%eax
 832a51d:	8b 50 20             	mov    0x20(%eax),%edx
 832a520:	8b 45 08             	mov    0x8(%ebp),%eax
 832a523:	89 50 24             	mov    %edx,0x24(%eax)
 832a526:	8b 45 fc             	mov    -0x4(%ebp),%eax
 832a529:	8b 50 24             	mov    0x24(%eax),%edx
 832a52c:	8b 45 08             	mov    0x8(%ebp),%eax
 832a52f:	89 50 28             	mov    %edx,0x28(%eax)
 832a532:	b8 01 00 00 00       	mov    $0x1,%eax
 832a537:	c9                   	leave
 832a538:	c3                   	ret
 832a539:	90                   	nop

```

```c
// CCharacBloodDungeon::loadData @ 0x832a4c6

/* CCharacBloodDungeon::loadData(CUser*, char*) */

undefined4 __thiscall
CCharacBloodDungeon::loadData(CCharacBloodDungeon *this,CUser *param_1,char *param_2)

{
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_2 + 0x24);
  return 1;
}

```

