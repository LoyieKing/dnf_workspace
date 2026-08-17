# DB_JoinGuildInfo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 0843d286 DB_JoinGuildInfo::dispatch  [0x0843d286-0x843d5f9] ===
 843d286:	55                   	push   %ebp
 843d287:	89 e5                	mov    %esp,%ebp
 843d289:	56                   	push   %esi
 843d28a:	53                   	push   %ebx
 843d28b:	83 ec 30             	sub    $0x30,%esp
 843d28e:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 843d293:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 843d29a:	00 
 843d29b:	c7 44 24 04 08 00 00 	movl   $0x8,0x4(%esp)
 843d2a2:	00 
 843d2a3:	89 04 24             	mov    %eax,(%esp)
 843d2a6:	e8 93 7f fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 843d2ab:	89 45 f0             	mov    %eax,-0x10(%ebp)
 843d2ae:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 843d2b5:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 843d2bc:	8d 45 ec             	lea    -0x14(%ebp),%eax
 843d2bf:	89 44 24 04          	mov    %eax,0x4(%esp)
 843d2c3:	8b 45 14             	mov    0x14(%ebp),%eax
 843d2c6:	89 04 24             	mov    %eax,(%esp)
 843d2c9:	e8 f6 f2 1d 00       	call   861c5c4 <_ZN6StreamrsERi>
 843d2ce:	8d 45 e8             	lea    -0x18(%ebp),%eax
 843d2d1:	89 44 24 04          	mov    %eax,0x4(%esp)
 843d2d5:	8b 45 14             	mov    0x14(%ebp),%eax
 843d2d8:	89 04 24             	mov    %eax,(%esp)
 843d2db:	e8 b6 f4 1d 00       	call   861c796 <_ZN6StreamrsERj>
 843d2e0:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 843d2e5:	c7 44 24 08 bd 91 00 	movl   $0x91bd,0x8(%esp)
 843d2ec:	00 
 843d2ed:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 843d2f4:	08 
 843d2f5:	89 04 24             	mov    %eax,(%esp)
 843d2f8:	e8 89 27 e5 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 843d2fd:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 843d304:	00 
 843d305:	89 44 24 04          	mov    %eax,0x4(%esp)
 843d309:	8d 45 e0             	lea    -0x20(%ebp),%eax
 843d30c:	89 04 24             	mov    %eax,(%esp)
 843d30f:	e8 12 b9 c8 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 843d314:	8d 45 e0             	lea    -0x20(%ebp),%eax
 843d317:	89 04 24             	mov    %eax,(%esp)
 843d31a:	e8 27 b9 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843d31f:	c7 44 24 04 19 02 00 	movl   $0x219,0x4(%esp)
 843d326:	00 
 843d327:	89 04 24             	mov    %eax,(%esp)
 843d32a:	e8 27 b9 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843d32f:	8d 45 e0             	lea    -0x20(%ebp),%eax
 843d332:	89 04 24             	mov    %eax,(%esp)
 843d335:	e8 0c b9 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843d33a:	8b 55 10             	mov    0x10(%ebp),%edx
 843d33d:	89 54 24 04          	mov    %edx,0x4(%esp)
 843d341:	89 04 24             	mov    %eax,(%esp)
 843d344:	e8 0d b9 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843d349:	8d 45 e0             	lea    -0x20(%ebp),%eax
 843d34c:	89 04 24             	mov    %eax,(%esp)
 843d34f:	e8 fa b8 c8 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 843d354:	89 04 24             	mov    %eax,(%esp)
 843d357:	e8 1e 68 01 00       	call   8453b7a <_ZN12CStreamGuard11GetInBufferI19SIG_JOIN_GUILD_INFOEEPT_v>
 843d35c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 843d35f:	8b 55 ec             	mov    -0x14(%ebp),%edx
 843d362:	8b 45 e8             	mov    -0x18(%ebp),%eax
 843d365:	89 54 24 0c          	mov    %edx,0xc(%esp)
 843d369:	89 44 24 08          	mov    %eax,0x8(%esp)
 843d36d:	c7 44 24 04 b4 53 c5 	movl   $0x8c553b4,0x4(%esp)
 843d374:	08 
 843d375:	8b 45 f0             	mov    -0x10(%ebp),%eax
 843d378:	89 04 24             	mov    %eax,(%esp)
 843d37b:	e8 40 6e fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 843d380:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843d387:	00 
 843d388:	8b 45 f0             	mov    -0x10(%ebp),%eax
 843d38b:	89 04 24             	mov    %eax,(%esp)
 843d38e:	e8 93 6f fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 843d393:	83 f0 01             	xor    $0x1,%eax
 843d396:	84 c0                	test   %al,%al
 843d398:	74 0a                	je     843d3a4 <_ZN16DB_JoinGuildInfo8dispatchEiiP6Stream+0x11e>
 843d39a:	bb 00 00 00 00       	mov    $0x0,%ebx
 843d39f:	e9 41 02 00 00       	jmp    843d5e5 <_ZN16DB_JoinGuildInfo8dispatchEiiP6Stream+0x35f>
 843d3a4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 843d3a7:	89 04 24             	mov    %eax,(%esp)
 843d3aa:	e8 bd 4f ca ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 843d3af:	85 c0                	test   %eax,%eax
 843d3b1:	0f 94 c0             	sete   %al
 843d3b4:	84 c0                	test   %al,%al
 843d3b6:	74 2c                	je     843d3e4 <_ZN16DB_JoinGuildInfo8dispatchEiiP6Stream+0x15e>
 843d3b8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843d3bb:	c6 00 00             	movb   $0x0,(%eax)
 843d3be:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 843d3c3:	8d 55 e0             	lea    -0x20(%ebp),%edx
 843d3c6:	89 54 24 08          	mov    %edx,0x8(%esp)
 843d3ca:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843d3d1:	00 
 843d3d2:	89 04 24             	mov    %eax,(%esp)
 843d3d5:	e8 04 3c 13 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 843d3da:	bb 01 00 00 00       	mov    $0x1,%ebx
 843d3df:	e9 01 02 00 00       	jmp    843d5e5 <_ZN16DB_JoinGuildInfo8dispatchEiiP6Stream+0x35f>
 843d3e4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 843d3e7:	89 04 24             	mov    %eax,(%esp)
 843d3ea:	e8 cd 70 fb ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 843d3ef:	83 f0 01             	xor    $0x1,%eax
 843d3f2:	84 c0                	test   %al,%al
 843d3f4:	74 0a                	je     843d400 <_ZN16DB_JoinGuildInfo8dispatchEiiP6Stream+0x17a>
 843d3f6:	bb 00 00 00 00       	mov    $0x0,%ebx
 843d3fb:	e9 e5 01 00 00       	jmp    843d5e5 <_ZN16DB_JoinGuildInfo8dispatchEiiP6Stream+0x35f>
 843d400:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843d403:	83 c0 04             	add    $0x4,%eax
 843d406:	89 44 24 08          	mov    %eax,0x8(%esp)
 843d40a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 843d411:	00 
 843d412:	8b 45 f0             	mov    -0x10(%ebp),%eax
 843d415:	89 04 24             	mov    %eax,(%esp)
 843d418:	e8 d5 4e ca ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 843d41d:	83 f0 01             	xor    $0x1,%eax
 843d420:	84 c0                	test   %al,%al
 843d422:	74 0a                	je     843d42e <_ZN16DB_JoinGuildInfo8dispatchEiiP6Stream+0x1a8>
 843d424:	bb 00 00 00 00       	mov    $0x0,%ebx
 843d429:	e9 b7 01 00 00       	jmp    843d5e5 <_ZN16DB_JoinGuildInfo8dispatchEiiP6Stream+0x35f>
 843d42e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843d431:	83 c0 48             	add    $0x48,%eax
 843d434:	c7 44 24 0c 1a 00 00 	movl   $0x1a,0xc(%esp)
 843d43b:	00 
 843d43c:	89 44 24 08          	mov    %eax,0x8(%esp)
 843d440:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843d447:	00 
 843d448:	8b 45 f0             	mov    -0x10(%ebp),%eax
 843d44b:	89 04 24             	mov    %eax,(%esp)
 843d44e:	e8 97 f9 ca ff       	call   80ecdea <_ZN5MySQL7get_strEiPci>
 843d453:	83 f0 01             	xor    $0x1,%eax
 843d456:	84 c0                	test   %al,%al
 843d458:	74 0a                	je     843d464 <_ZN16DB_JoinGuildInfo8dispatchEiiP6Stream+0x1de>
 843d45a:	bb 00 00 00 00       	mov    $0x0,%ebx
 843d45f:	e9 81 01 00 00       	jmp    843d5e5 <_ZN16DB_JoinGuildInfo8dispatchEiiP6Stream+0x35f>
 843d464:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843d467:	8b 40 04             	mov    0x4(%eax),%eax
 843d46a:	89 44 24 08          	mov    %eax,0x8(%esp)
 843d46e:	c7 44 24 04 08 54 c5 	movl   $0x8c55408,0x4(%esp)
 843d475:	08 
 843d476:	8b 45 f0             	mov    -0x10(%ebp),%eax
 843d479:	89 04 24             	mov    %eax,(%esp)
 843d47c:	e8 3f 6d fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 843d481:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843d488:	00 
 843d489:	8b 45 f0             	mov    -0x10(%ebp),%eax
 843d48c:	89 04 24             	mov    %eax,(%esp)
 843d48f:	e8 92 6e fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 843d494:	83 f0 01             	xor    $0x1,%eax
 843d497:	84 c0                	test   %al,%al
 843d499:	74 0a                	je     843d4a5 <_ZN16DB_JoinGuildInfo8dispatchEiiP6Stream+0x21f>
 843d49b:	bb 00 00 00 00       	mov    $0x0,%ebx
 843d4a0:	e9 40 01 00 00       	jmp    843d5e5 <_ZN16DB_JoinGuildInfo8dispatchEiiP6Stream+0x35f>
 843d4a5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 843d4a8:	89 04 24             	mov    %eax,(%esp)
 843d4ab:	e8 bc 4e ca ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 843d4b0:	85 c0                	test   %eax,%eax
 843d4b2:	0f 94 c0             	sete   %al
 843d4b5:	84 c0                	test   %al,%al
 843d4b7:	74 0a                	je     843d4c3 <_ZN16DB_JoinGuildInfo8dispatchEiiP6Stream+0x23d>
 843d4b9:	bb 01 00 00 00       	mov    $0x1,%ebx
 843d4be:	e9 22 01 00 00       	jmp    843d5e5 <_ZN16DB_JoinGuildInfo8dispatchEiiP6Stream+0x35f>
 843d4c3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 843d4c6:	89 04 24             	mov    %eax,(%esp)
 843d4c9:	e8 ee 6f fb ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 843d4ce:	83 f0 01             	xor    $0x1,%eax
 843d4d1:	84 c0                	test   %al,%al
 843d4d3:	74 0a                	je     843d4df <_ZN16DB_JoinGuildInfo8dispatchEiiP6Stream+0x259>
 843d4d5:	bb 00 00 00 00       	mov    $0x0,%ebx
 843d4da:	e9 06 01 00 00       	jmp    843d5e5 <_ZN16DB_JoinGuildInfo8dispatchEiiP6Stream+0x35f>
 843d4df:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843d4e2:	83 c0 26             	add    $0x26,%eax
 843d4e5:	c7 44 24 0c 17 00 00 	movl   $0x17,0xc(%esp)
 843d4ec:	00 
 843d4ed:	89 44 24 08          	mov    %eax,0x8(%esp)
 843d4f1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 843d4f8:	00 
 843d4f9:	8b 45 f0             	mov    -0x10(%ebp),%eax
 843d4fc:	89 04 24             	mov    %eax,(%esp)
 843d4ff:	e8 e6 f8 ca ff       	call   80ecdea <_ZN5MySQL7get_strEiPci>
 843d504:	83 f0 01             	xor    $0x1,%eax
 843d507:	84 c0                	test   %al,%al
 843d509:	74 0a                	je     843d515 <_ZN16DB_JoinGuildInfo8dispatchEiiP6Stream+0x28f>
 843d50b:	bb 00 00 00 00       	mov    $0x0,%ebx
 843d510:	e9 d0 00 00 00       	jmp    843d5e5 <_ZN16DB_JoinGuildInfo8dispatchEiiP6Stream+0x35f>
 843d515:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843d518:	83 c0 08             	add    $0x8,%eax
 843d51b:	c7 44 24 0c 1e 00 00 	movl   $0x1e,0xc(%esp)
 843d522:	00 
 843d523:	89 44 24 08          	mov    %eax,0x8(%esp)
 843d527:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843d52e:	00 
 843d52f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 843d532:	89 04 24             	mov    %eax,(%esp)
 843d535:	e8 b0 f8 ca ff       	call   80ecdea <_ZN5MySQL7get_strEiPci>
 843d53a:	83 f0 01             	xor    $0x1,%eax
 843d53d:	84 c0                	test   %al,%al
 843d53f:	74 0a                	je     843d54b <_ZN16DB_JoinGuildInfo8dispatchEiiP6Stream+0x2c5>
 843d541:	bb 00 00 00 00       	mov    $0x0,%ebx
 843d546:	e9 9a 00 00 00       	jmp    843d5e5 <_ZN16DB_JoinGuildInfo8dispatchEiiP6Stream+0x35f>
 843d54b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843d54e:	83 c0 40             	add    $0x40,%eax
 843d551:	89 44 24 08          	mov    %eax,0x8(%esp)
 843d555:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 843d55c:	00 
 843d55d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 843d560:	89 04 24             	mov    %eax,(%esp)
 843d563:	e8 c4 93 cd ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 843d568:	83 f0 01             	xor    $0x1,%eax
 843d56b:	84 c0                	test   %al,%al
 843d56d:	74 07                	je     843d576 <_ZN16DB_JoinGuildInfo8dispatchEiiP6Stream+0x2f0>
 843d56f:	bb 00 00 00 00       	mov    $0x0,%ebx
 843d574:	eb 6f                	jmp    843d5e5 <_ZN16DB_JoinGuildInfo8dispatchEiiP6Stream+0x35f>
 843d576:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843d579:	83 c0 44             	add    $0x44,%eax
 843d57c:	89 44 24 08          	mov    %eax,0x8(%esp)
 843d580:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 843d587:	00 
 843d588:	8b 45 f0             	mov    -0x10(%ebp),%eax
 843d58b:	89 04 24             	mov    %eax,(%esp)
 843d58e:	e8 99 93 cd ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 843d593:	83 f0 01             	xor    $0x1,%eax
 843d596:	84 c0                	test   %al,%al
 843d598:	74 07                	je     843d5a1 <_ZN16DB_JoinGuildInfo8dispatchEiiP6Stream+0x31b>
 843d59a:	bb 00 00 00 00       	mov    $0x0,%ebx
 843d59f:	eb 44                	jmp    843d5e5 <_ZN16DB_JoinGuildInfo8dispatchEiiP6Stream+0x35f>
 843d5a1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843d5a4:	c6 00 01             	movb   $0x1,(%eax)
 843d5a7:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 843d5ac:	8d 55 e0             	lea    -0x20(%ebp),%edx
 843d5af:	89 54 24 08          	mov    %edx,0x8(%esp)
 843d5b3:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843d5ba:	00 
 843d5bb:	89 04 24             	mov    %eax,(%esp)
 843d5be:	e8 1b 3a 13 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 843d5c3:	bb 01 00 00 00       	mov    $0x1,%ebx
 843d5c8:	eb 1b                	jmp    843d5e5 <_ZN16DB_JoinGuildInfo8dispatchEiiP6Stream+0x35f>
 843d5ca:	89 d3                	mov    %edx,%ebx
 843d5cc:	89 c6                	mov    %eax,%esi
 843d5ce:	8d 45 e0             	lea    -0x20(%ebp),%eax
 843d5d1:	89 04 24             	mov    %eax,(%esp)
 843d5d4:	e8 f9 f2 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 843d5d9:	89 f0                	mov    %esi,%eax
 843d5db:	89 da                	mov    %ebx,%edx
 843d5dd:	89 04 24             	mov    %eax,(%esp)
 843d5e0:	e8 6b 61 6a 00       	call   8ae3750 <_Unwind_Resume>
 843d5e5:	8d 45 e0             	lea    -0x20(%ebp),%eax
 843d5e8:	89 04 24             	mov    %eax,(%esp)
 843d5eb:	e8 e2 f2 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 843d5f0:	89 d8                	mov    %ebx,%eax
 843d5f2:	83 c4 30             	add    $0x30,%esp
 843d5f5:	5b                   	pop    %ebx
 843d5f6:	5e                   	pop    %esi
 843d5f7:	5d                   	pop    %ebp
 843d5f8:	c3                   	ret
 843d5f9:	90                   	nop

```

```c
// DB_JoinGuildInfo::dispatch @ 0x843d286

/* DB_JoinGuildInfo::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_JoinGuildInfo::dispatch(DB_JoinGuildInfo *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  int iVar4;
  undefined4 uVar5;
  CStreamGuard local_24 [8];
  uint local_1c;
  int local_18;
  MySQL *local_14;
  SIG_JOIN_GUILD_INFO *local_10;
  
  local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,8,0);
  local_18 = 0;
  local_1c = 0;
  Stream::operator>>(param_3,&local_18);
  Stream::operator>>(param_3,&local_1c);
  pSVar2 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x91bd);
  CStreamGuard::CStreamGuard(local_24,pSVar2,true);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_24);
                    /* try { // try from 0843d32a to 0843d5c2 has its CatchHandler @ 0843d5ca */
  CStreamGuard::operator<<(pCVar3,0x219);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_24);
  CStreamGuard::operator<<(pCVar3,param_2);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_24);
  local_10 = CStreamGuard::GetInBuffer<SIG_JOIN_GUILD_INFO>(pCVar3);
  MySQL::set_query(local_14,
                   "seLect guild_id,memo from guild_join_list where charac_no=%d and server_group=%d"
                   ,local_1c,local_18);
  cVar1 = MySQL::exec(local_14,true);
  if (cVar1 == '\x01') {
    iVar4 = MySQL::get_n_rows(local_14);
    if (iVar4 == 0) {
      *local_10 = (SIG_JOIN_GUILD_INFO)0x0;
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_24);
      uVar5 = 1;
    }
    else {
      cVar1 = MySQL::fetch(local_14);
      if (cVar1 == '\x01') {
        cVar1 = MySQL::get_uint(local_14,0,(uint *)(local_10 + 4));
        if (cVar1 == '\x01') {
          cVar1 = MySQL::get_str(local_14,1,(char *)(local_10 + 0x48),0x1a);
          if (cVar1 == '\x01') {
            MySQL::set_query(local_14,
                             "seLect guild_name,master_name,lev,member_count from guild_info where expire_flag=0 and guild_id=%d"
                             ,*(undefined4 *)(local_10 + 4));
            cVar1 = MySQL::exec(local_14,true);
            if (cVar1 == '\x01') {
              iVar4 = MySQL::get_n_rows(local_14);
              if (iVar4 == 0) {
                uVar5 = 1;
              }
              else {
                cVar1 = MySQL::fetch(local_14);
                if (cVar1 == '\x01') {
                  cVar1 = MySQL::get_str(local_14,0,(char *)(local_10 + 0x26),0x17);
                  if (cVar1 == '\x01') {
                    cVar1 = MySQL::get_str(local_14,1,(char *)(local_10 + 8),0x1e);
                    if (cVar1 == '\x01') {
                      cVar1 = MySQL::get_int(local_14,2,(int *)(local_10 + 0x40));
                      if (cVar1 == '\x01') {
                        cVar1 = MySQL::get_int(local_14,3,(int *)(local_10 + 0x44));
                        if (cVar1 == '\x01') {
                          *local_10 = (SIG_JOIN_GUILD_INFO)0x1;
                          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_24);
                          uVar5 = 1;
                        }
                        else {
                          uVar5 = 0;
                        }
                      }
                      else {
                        uVar5 = 0;
                      }
                    }
                    else {
                      uVar5 = 0;
                    }
                  }
                  else {
                    uVar5 = 0;
                  }
                }
                else {
                  uVar5 = 0;
                }
              }
            }
            else {
              uVar5 = 0;
            }
          }
          else {
            uVar5 = 0;
          }
        }
        else {
          uVar5 = 0;
        }
      }
      else {
        uVar5 = 0;
      }
    }
  }
  else {
    uVar5 = 0;
  }
  CStreamGuard::~CStreamGuard(local_24);
  return uVar5;
}

```

---

## makeRequest

```asm
// === 0843d5fa DB_JoinGuildInfo::makeRequest  [0x0843d5fa-0x843d6e9] ===
 843d5fa:	55                   	push   %ebp
 843d5fb:	89 e5                	mov    %esp,%ebp
 843d5fd:	56                   	push   %esi
 843d5fe:	53                   	push   %ebx
 843d5ff:	83 ec 20             	sub    $0x20,%esp
 843d602:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 843d607:	c7 44 24 08 18 92 00 	movl   $0x9218,0x8(%esp)
 843d60e:	00 
 843d60f:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 843d616:	08 
 843d617:	89 04 24             	mov    %eax,(%esp)
 843d61a:	e8 67 24 e5 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 843d61f:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 843d626:	00 
 843d627:	89 44 24 04          	mov    %eax,0x4(%esp)
 843d62b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843d62e:	89 04 24             	mov    %eax,(%esp)
 843d631:	e8 f0 b5 c8 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 843d636:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843d639:	89 04 24             	mov    %eax,(%esp)
 843d63c:	e8 05 b6 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843d641:	c7 44 24 04 19 02 00 	movl   $0x219,0x4(%esp)
 843d648:	00 
 843d649:	89 04 24             	mov    %eax,(%esp)
 843d64c:	e8 05 b6 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843d651:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843d654:	89 04 24             	mov    %eax,(%esp)
 843d657:	e8 ea b5 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843d65c:	8b 55 08             	mov    0x8(%ebp),%edx
 843d65f:	89 54 24 04          	mov    %edx,0x4(%esp)
 843d663:	89 04 24             	mov    %eax,(%esp)
 843d666:	e8 eb b5 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843d66b:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 843d66e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843d671:	89 04 24             	mov    %eax,(%esp)
 843d674:	e8 cd b5 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843d679:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 843d67d:	89 04 24             	mov    %eax,(%esp)
 843d680:	e8 d1 b5 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843d685:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843d688:	89 04 24             	mov    %eax,(%esp)
 843d68b:	e8 b6 b5 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843d690:	8b 55 10             	mov    0x10(%ebp),%edx
 843d693:	89 54 24 04          	mov    %edx,0x4(%esp)
 843d697:	89 04 24             	mov    %eax,(%esp)
 843d69a:	e8 f3 4b ca ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 843d69f:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 843d6a4:	8d 55 f0             	lea    -0x10(%ebp),%edx
 843d6a7:	89 54 24 08          	mov    %edx,0x8(%esp)
 843d6ab:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 843d6b2:	00 
 843d6b3:	89 04 24             	mov    %eax,(%esp)
 843d6b6:	e8 23 39 13 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 843d6bb:	eb 1b                	jmp    843d6d8 <_ZN16DB_JoinGuildInfo11makeRequestEi17ENUM_SERVER_GROUPj+0xde>
 843d6bd:	89 d3                	mov    %edx,%ebx
 843d6bf:	89 c6                	mov    %eax,%esi
 843d6c1:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843d6c4:	89 04 24             	mov    %eax,(%esp)
 843d6c7:	e8 06 f2 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 843d6cc:	89 f0                	mov    %esi,%eax
 843d6ce:	89 da                	mov    %ebx,%edx
 843d6d0:	89 04 24             	mov    %eax,(%esp)
 843d6d3:	e8 78 60 6a 00       	call   8ae3750 <_Unwind_Resume>
 843d6d8:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843d6db:	89 04 24             	mov    %eax,(%esp)
 843d6de:	e8 ef f1 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 843d6e3:	83 c4 20             	add    $0x20,%esp
 843d6e6:	5b                   	pop    %ebx
 843d6e7:	5e                   	pop    %esi
 843d6e8:	5d                   	pop    %ebp
 843d6e9:	c3                   	ret

```

```c
// DB_JoinGuildInfo::makeRequest @ 0x843d5fa

/* DB_JoinGuildInfo::makeRequest(int, ENUM_SERVER_GROUP, unsigned int) */

void DB_JoinGuildInfo::makeRequest(int param_1,int param_2,uint param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x9218);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0843d64c to 0843d6ba has its CatchHandler @ 0843d6bd */
  CStreamGuard::operator<<(pCVar2,0x219);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_3);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}

```

