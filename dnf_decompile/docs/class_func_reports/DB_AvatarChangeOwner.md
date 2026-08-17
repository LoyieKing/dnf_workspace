# DB_AvatarChangeOwner

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 084004bc DB_AvatarChangeOwner::dispatch  [0x084004bc-0x840055b] ===
 84004bc:	55                   	push   %ebp
 84004bd:	89 e5                	mov    %esp,%ebp
 84004bf:	53                   	push   %ebx
 84004c0:	83 ec 34             	sub    $0x34,%esp
 84004c3:	8b 45 14             	mov    0x14(%ebp),%eax
 84004c6:	89 04 24             	mov    %eax,(%esp)
 84004c9:	e8 4a ff 04 00       	call   8450418 <_ZN6Stream12GetOutBufferI23SIG_AVATAR_CHANGE_OWNEREEPT_v>
 84004ce:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84004d1:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 84004d6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84004dd:	00 
 84004de:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 84004e5:	00 
 84004e6:	89 04 24             	mov    %eax,(%esp)
 84004e9:	e8 50 4d ff ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 84004ee:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84004f1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84004f4:	8b 58 04             	mov    0x4(%eax),%ebx
 84004f7:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84004fa:	8b 08                	mov    (%eax),%ecx
 84004fc:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84004ff:	0f b6 40 0c          	movzbl 0xc(%eax),%eax
 8400503:	0f b6 d0             	movzbl %al,%edx
 8400506:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8400509:	8b 40 08             	mov    0x8(%eax),%eax
 840050c:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 8400510:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8400514:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8400518:	89 44 24 08          	mov    %eax,0x8(%esp)
 840051c:	c7 44 24 04 5c 29 c4 	movl   $0x8c4295c,0x4(%esp)
 8400523:	08 
 8400524:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8400527:	89 04 24             	mov    %eax,(%esp)
 840052a:	e8 91 3c ff ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 840052f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8400536:	00 
 8400537:	8b 45 f4             	mov    -0xc(%ebp),%eax
 840053a:	89 04 24             	mov    %eax,(%esp)
 840053d:	e8 e4 3d ff ff       	call   83f4326 <_ZN5MySQL4execEb>
 8400542:	83 f0 01             	xor    $0x1,%eax
 8400545:	84 c0                	test   %al,%al
 8400547:	74 07                	je     8400550 <_ZN20DB_AvatarChangeOwner8dispatchEiiP6Stream+0x94>
 8400549:	b8 00 00 00 00       	mov    $0x0,%eax
 840054e:	eb 05                	jmp    8400555 <_ZN20DB_AvatarChangeOwner8dispatchEiiP6Stream+0x99>
 8400550:	b8 01 00 00 00       	mov    $0x1,%eax
 8400555:	83 c4 34             	add    $0x34,%esp
 8400558:	5b                   	pop    %ebx
 8400559:	5d                   	pop    %ebp
 840055a:	c3                   	ret
 840055b:	90                   	nop

```

```c
// DB_AvatarChangeOwner::dispatch @ 0x84004bc

/* DB_AvatarChangeOwner::dispatch(int, int, Stream*) */

bool DB_AvatarChangeOwner::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  SIG_AVATAR_CHANGE_OWNER *pSVar2;
  MySQL *this;
  Stream *in_stack_00000010;
  
  pSVar2 = Stream::GetOutBuffer<SIG_AVATAR_CHANGE_OWNER>(in_stack_00000010);
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  MySQL::set_query(this,"upDate user_items set charac_no=%u,slot=%d where ui_id=%d && charac_no=%u",
                   *(undefined4 *)(pSVar2 + 8),(uint)(byte)pSVar2[0xc],*(undefined4 *)pSVar2,
                   *(undefined4 *)(pSVar2 + 4));
  cVar1 = MySQL::exec(this,true);
  return cVar1 == '\x01';
}

```

---

## makeRequest

```asm
// === 0840055c DB_AvatarChangeOwner::makeRequest  [0x0840055c-0x840065d] ===
 840055c:	55                   	push   %ebp
 840055d:	89 e5                	mov    %esp,%ebp
 840055f:	56                   	push   %esi
 8400560:	53                   	push   %ebx
 8400561:	83 ec 30             	sub    $0x30,%esp
 8400564:	8b 45 14             	mov    0x14(%ebp),%eax
 8400567:	88 45 e4             	mov    %al,-0x1c(%ebp)
 840056a:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 840056f:	c7 44 24 08 7f 0b 00 	movl   $0xb7f,0x8(%esp)
 8400576:	00 
 8400577:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 840057e:	08 
 840057f:	89 04 24             	mov    %eax,(%esp)
 8400582:	e8 ff f4 e8 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8400587:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 840058e:	00 
 840058f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8400593:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8400596:	89 04 24             	mov    %eax,(%esp)
 8400599:	e8 88 86 cc ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 840059e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84005a1:	89 04 24             	mov    %eax,(%esp)
 84005a4:	e8 9d 86 cc ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84005a9:	c7 44 24 04 35 00 00 	movl   $0x35,0x4(%esp)
 84005b0:	00 
 84005b1:	89 04 24             	mov    %eax,(%esp)
 84005b4:	e8 9d 86 cc ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84005b9:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84005bc:	89 04 24             	mov    %eax,(%esp)
 84005bf:	e8 82 86 cc ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84005c4:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84005cb:	ff 
 84005cc:	89 04 24             	mov    %eax,(%esp)
 84005cf:	e8 82 86 cc ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84005d4:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84005d7:	89 04 24             	mov    %eax,(%esp)
 84005da:	e8 6f 86 cc ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 84005df:	89 04 24             	mov    %eax,(%esp)
 84005e2:	e8 85 fe 04 00       	call   845046c <_ZN12CStreamGuard11GetInBufferI23SIG_AVATAR_CHANGE_OWNEREEPT_v>
 84005e7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84005ea:	80 45 e4 0a          	addb   $0xa,-0x1c(%ebp)
 84005ee:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84005f1:	8b 55 08             	mov    0x8(%ebp),%edx
 84005f4:	89 10                	mov    %edx,(%eax)
 84005f6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84005f9:	8b 55 0c             	mov    0xc(%ebp),%edx
 84005fc:	89 50 04             	mov    %edx,0x4(%eax)
 84005ff:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8400602:	8b 55 10             	mov    0x10(%ebp),%edx
 8400605:	89 50 08             	mov    %edx,0x8(%eax)
 8400608:	8b 45 f4             	mov    -0xc(%ebp),%eax
 840060b:	0f b6 55 e4          	movzbl -0x1c(%ebp),%edx
 840060f:	88 50 0c             	mov    %dl,0xc(%eax)
 8400612:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8400617:	8d 55 ec             	lea    -0x14(%ebp),%edx
 840061a:	89 54 24 08          	mov    %edx,0x8(%esp)
 840061e:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8400625:	00 
 8400626:	89 04 24             	mov    %eax,(%esp)
 8400629:	e8 b0 09 17 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 840062e:	eb 1b                	jmp    840064b <_ZN20DB_AvatarChangeOwner11makeRequestEjjjh+0xef>
 8400630:	89 d3                	mov    %edx,%ebx
 8400632:	89 c6                	mov    %eax,%esi
 8400634:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8400637:	89 04 24             	mov    %eax,(%esp)
 840063a:	e8 93 c2 21 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 840063f:	89 f0                	mov    %esi,%eax
 8400641:	89 da                	mov    %ebx,%edx
 8400643:	89 04 24             	mov    %eax,(%esp)
 8400646:	e8 05 31 6e 00       	call   8ae3750 <_Unwind_Resume>
 840064b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 840064e:	89 04 24             	mov    %eax,(%esp)
 8400651:	e8 7c c2 21 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8400656:	83 c4 30             	add    $0x30,%esp
 8400659:	5b                   	pop    %ebx
 840065a:	5e                   	pop    %esi
 840065b:	5d                   	pop    %ebp
 840065c:	c3                   	ret
 840065d:	90                   	nop

```

```c
// DB_AvatarChangeOwner::makeRequest @ 0x840055c

/* DB_AvatarChangeOwner::makeRequest(unsigned int, unsigned int, unsigned int, unsigned char) */

void DB_AvatarChangeOwner::makeRequest(uint param_1,uint param_2,uint param_3,uchar param_4)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_AVATAR_CHANGE_OWNER *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xb7f);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 084005b4 to 0840062d has its CatchHandler @ 08400630 */
  CStreamGuard::operator<<(pCVar2,0x35);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_AVATAR_CHANGE_OWNER>(pCVar2);
  *(uint *)local_10 = param_1;
  *(uint *)(local_10 + 4) = param_2;
  *(uint *)(local_10 + 8) = param_3;
  local_10[0xc] = (SIG_AVATAR_CHANGE_OWNER)(param_4 + '\n');
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}

```

