# DB_InsertPoliceSaveChatting

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 0843c514 DB_InsertPoliceSaveChatting::dispatch  [0x0843c514-0x843c6a9] ===
 843c514:	55                   	push   %ebp
 843c515:	89 e5                	mov    %esp,%ebp
 843c517:	57                   	push   %edi
 843c518:	53                   	push   %ebx
 843c519:	81 ec 30 03 00 00    	sub    $0x330,%esp
 843c51f:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 843c526:	c6 45 ef 00          	movb   $0x0,-0x11(%ebp)
 843c52a:	8d 95 ef fe ff ff    	lea    -0x111(%ebp),%edx
 843c530:	bb 00 01 00 00       	mov    $0x100,%ebx
 843c535:	b8 00 00 00 00       	mov    $0x0,%eax
 843c53a:	89 d1                	mov    %edx,%ecx
 843c53c:	83 e1 01             	and    $0x1,%ecx
 843c53f:	85 c9                	test   %ecx,%ecx
 843c541:	74 08                	je     843c54b <_ZN27DB_InsertPoliceSaveChatting8dispatchEiiP6Stream+0x37>
 843c543:	88 02                	mov    %al,(%edx)
 843c545:	83 c2 01             	add    $0x1,%edx
 843c548:	83 eb 01             	sub    $0x1,%ebx
 843c54b:	89 d1                	mov    %edx,%ecx
 843c54d:	83 e1 02             	and    $0x2,%ecx
 843c550:	85 c9                	test   %ecx,%ecx
 843c552:	74 09                	je     843c55d <_ZN27DB_InsertPoliceSaveChatting8dispatchEiiP6Stream+0x49>
 843c554:	66 89 02             	mov    %ax,(%edx)
 843c557:	83 c2 02             	add    $0x2,%edx
 843c55a:	83 eb 02             	sub    $0x2,%ebx
 843c55d:	89 d9                	mov    %ebx,%ecx
 843c55f:	c1 e9 02             	shr    $0x2,%ecx
 843c562:	89 d7                	mov    %edx,%edi
 843c564:	f3 ab                	rep stos %eax,%es:(%edi)
 843c566:	89 fa                	mov    %edi,%edx
 843c568:	89 d9                	mov    %ebx,%ecx
 843c56a:	83 e1 02             	and    $0x2,%ecx
 843c56d:	85 c9                	test   %ecx,%ecx
 843c56f:	74 06                	je     843c577 <_ZN27DB_InsertPoliceSaveChatting8dispatchEiiP6Stream+0x63>
 843c571:	66 89 02             	mov    %ax,(%edx)
 843c574:	83 c2 02             	add    $0x2,%edx
 843c577:	89 d9                	mov    %ebx,%ecx
 843c579:	83 e1 01             	and    $0x1,%ecx
 843c57c:	85 c9                	test   %ecx,%ecx
 843c57e:	74 05                	je     843c585 <_ZN27DB_InsertPoliceSaveChatting8dispatchEiiP6Stream+0x71>
 843c580:	88 02                	mov    %al,(%edx)
 843c582:	83 c2 01             	add    $0x1,%edx
 843c585:	8d 95 ef fc ff ff    	lea    -0x311(%ebp),%edx
 843c58b:	bb 00 02 00 00       	mov    $0x200,%ebx
 843c590:	b8 00 00 00 00       	mov    $0x0,%eax
 843c595:	89 d1                	mov    %edx,%ecx
 843c597:	83 e1 01             	and    $0x1,%ecx
 843c59a:	85 c9                	test   %ecx,%ecx
 843c59c:	74 08                	je     843c5a6 <_ZN27DB_InsertPoliceSaveChatting8dispatchEiiP6Stream+0x92>
 843c59e:	88 02                	mov    %al,(%edx)
 843c5a0:	83 c2 01             	add    $0x1,%edx
 843c5a3:	83 eb 01             	sub    $0x1,%ebx
 843c5a6:	89 d1                	mov    %edx,%ecx
 843c5a8:	83 e1 02             	and    $0x2,%ecx
 843c5ab:	85 c9                	test   %ecx,%ecx
 843c5ad:	74 09                	je     843c5b8 <_ZN27DB_InsertPoliceSaveChatting8dispatchEiiP6Stream+0xa4>
 843c5af:	66 89 02             	mov    %ax,(%edx)
 843c5b2:	83 c2 02             	add    $0x2,%edx
 843c5b5:	83 eb 02             	sub    $0x2,%ebx
 843c5b8:	89 d9                	mov    %ebx,%ecx
 843c5ba:	c1 e9 02             	shr    $0x2,%ecx
 843c5bd:	89 d7                	mov    %edx,%edi
 843c5bf:	f3 ab                	rep stos %eax,%es:(%edi)
 843c5c1:	89 fa                	mov    %edi,%edx
 843c5c3:	89 d9                	mov    %ebx,%ecx
 843c5c5:	83 e1 02             	and    $0x2,%ecx
 843c5c8:	85 c9                	test   %ecx,%ecx
 843c5ca:	74 06                	je     843c5d2 <_ZN27DB_InsertPoliceSaveChatting8dispatchEiiP6Stream+0xbe>
 843c5cc:	66 89 02             	mov    %ax,(%edx)
 843c5cf:	83 c2 02             	add    $0x2,%edx
 843c5d2:	89 d9                	mov    %ebx,%ecx
 843c5d4:	83 e1 01             	and    $0x1,%ecx
 843c5d7:	85 c9                	test   %ecx,%ecx
 843c5d9:	74 05                	je     843c5e0 <_ZN27DB_InsertPoliceSaveChatting8dispatchEiiP6Stream+0xcc>
 843c5db:	88 02                	mov    %al,(%edx)
 843c5dd:	83 c2 01             	add    $0x1,%edx
 843c5e0:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843c5e3:	89 44 24 04          	mov    %eax,0x4(%esp)
 843c5e7:	8b 45 14             	mov    0x14(%ebp),%eax
 843c5ea:	89 04 24             	mov    %eax,(%esp)
 843c5ed:	e8 a4 01 1e 00       	call   861c796 <_ZN6StreamrsERj>
 843c5f2:	8d 45 ef             	lea    -0x11(%ebp),%eax
 843c5f5:	89 44 24 04          	mov    %eax,0x4(%esp)
 843c5f9:	8b 45 14             	mov    0x14(%ebp),%eax
 843c5fc:	89 04 24             	mov    %eax,(%esp)
 843c5ff:	e8 ec fe 1d 00       	call   861c4f0 <_ZN6StreamrsERc>
 843c604:	8d 85 ef fe ff ff    	lea    -0x111(%ebp),%eax
 843c60a:	89 44 24 04          	mov    %eax,0x4(%esp)
 843c60e:	8b 45 14             	mov    0x14(%ebp),%eax
 843c611:	89 04 24             	mov    %eax,(%esp)
 843c614:	e8 8f 00 1e 00       	call   861c6a8 <_ZN6StreamrsEPc>
 843c619:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 843c61e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 843c625:	00 
 843c626:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 843c62d:	00 
 843c62e:	89 04 24             	mov    %eax,(%esp)
 843c631:	e8 08 8c fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 843c636:	89 45 f4             	mov    %eax,-0xc(%ebp)
 843c639:	8d 85 ef fe ff ff    	lea    -0x111(%ebp),%eax
 843c63f:	89 44 24 08          	mov    %eax,0x8(%esp)
 843c643:	8d 85 ef fc ff ff    	lea    -0x311(%ebp),%eax
 843c649:	89 44 24 04          	mov    %eax,0x4(%esp)
 843c64d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843c650:	89 04 24             	mov    %eax,(%esp)
 843c653:	e8 52 82 fb ff       	call   83f48aa <_ZN5MySQL13escape_stringEPcPKc>
 843c658:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
 843c65c:	0f be d0             	movsbl %al,%edx
 843c65f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 843c662:	8d 8d ef fc ff ff    	lea    -0x311(%ebp),%ecx
 843c668:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 843c66c:	89 54 24 0c          	mov    %edx,0xc(%esp)
 843c670:	89 44 24 08          	mov    %eax,0x8(%esp)
 843c674:	c7 44 24 04 b4 50 c5 	movl   $0x8c550b4,0x4(%esp)
 843c67b:	08 
 843c67c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843c67f:	89 04 24             	mov    %eax,(%esp)
 843c682:	e8 39 7b fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 843c687:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843c68e:	00 
 843c68f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843c692:	89 04 24             	mov    %eax,(%esp)
 843c695:	e8 8c 7c fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 843c69a:	b8 01 00 00 00       	mov    $0x1,%eax
 843c69f:	81 c4 30 03 00 00    	add    $0x330,%esp
 843c6a5:	5b                   	pop    %ebx
 843c6a6:	5f                   	pop    %edi
 843c6a7:	5d                   	pop    %ebp
 843c6a8:	c3                   	ret
 843c6a9:	90                   	nop

```

```c
// DB_InsertPoliceSaveChatting::dispatch @ 0x843c514

/* DB_InsertPoliceSaveChatting::dispatch(int, int, Stream*) */

undefined4 DB_InsertPoliceSaveChatting::dispatch(int param_1,int param_2,Stream *param_3)

{
  uint uVar1;
  char *pcVar2;
  uint uVar3;
  bool bVar4;
  Stream *in_stack_00000010;
  char local_315;
  char local_314 [511];
  char local_115;
  char local_114 [255];
  char local_15;
  uint local_14;
  MySQL *local_10;
  
  local_14 = 0;
  local_15 = '\0';
  pcVar2 = &local_115;
  uVar3 = 0x100;
  bVar4 = ((uint)pcVar2 & 1) != 0;
  if (bVar4) {
    local_115 = '\0';
    pcVar2 = local_114;
    uVar3 = 0xff;
  }
  if (((uint)pcVar2 & 2) != 0) {
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2 = pcVar2 + 2;
    uVar3 = uVar3 - 2;
  }
  for (uVar1 = uVar3 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2 = pcVar2 + 4;
  }
  if ((uVar3 & 2) != 0) {
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2 = pcVar2 + 2;
  }
  if (bVar4) {
    *pcVar2 = '\0';
  }
  pcVar2 = &local_315;
  uVar3 = 0x200;
  bVar4 = ((uint)pcVar2 & 1) != 0;
  if (bVar4) {
    local_315 = '\0';
    pcVar2 = local_314;
    uVar3 = 0x1ff;
  }
  if (((uint)pcVar2 & 2) != 0) {
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2 = pcVar2 + 2;
    uVar3 = uVar3 - 2;
  }
  for (uVar1 = uVar3 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2 = pcVar2 + 4;
  }
  if ((uVar3 & 2) != 0) {
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2 = pcVar2 + 2;
  }
  if (bVar4) {
    *pcVar2 = '\0';
  }
  Stream::operator>>(in_stack_00000010,&local_14);
  Stream::operator>>(in_stack_00000010,&local_15);
  Stream::operator>>(in_stack_00000010,&local_115);
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  MySQL::escape_string(local_10,&local_315,&local_115);
  MySQL::set_query(local_10,
                   "inSert into log_police_chatting(charac_no, msg_type, occ_time, message) values(%u, %d, unix_timestamp(now()), \'%s\')"
                   ,local_14,(int)local_15,&local_315);
  MySQL::exec(local_10,true);
  return 1;
}

```

---

## makeRequest

```asm
// === 0843c6aa DB_InsertPoliceSaveChatting::makeRequest  [0x0843c6aa-0x843c7bb] ===
 843c6aa:	55                   	push   %ebp
 843c6ab:	89 e5                	mov    %esp,%ebp
 843c6ad:	56                   	push   %esi
 843c6ae:	53                   	push   %ebx
 843c6af:	83 ec 30             	sub    $0x30,%esp
 843c6b2:	8b 45 0c             	mov    0xc(%ebp),%eax
 843c6b5:	88 45 e4             	mov    %al,-0x1c(%ebp)
 843c6b8:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 843c6bd:	c7 44 24 08 4c 90 00 	movl   $0x904c,0x8(%esp)
 843c6c4:	00 
 843c6c5:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 843c6cc:	08 
 843c6cd:	89 04 24             	mov    %eax,(%esp)
 843c6d0:	e8 b1 33 e5 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 843c6d5:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 843c6dc:	00 
 843c6dd:	89 44 24 04          	mov    %eax,0x4(%esp)
 843c6e1:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843c6e4:	89 04 24             	mov    %eax,(%esp)
 843c6e7:	e8 3a c5 c8 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 843c6ec:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843c6ef:	89 04 24             	mov    %eax,(%esp)
 843c6f2:	e8 4f c5 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843c6f7:	c7 44 24 04 0c 02 00 	movl   $0x20c,0x4(%esp)
 843c6fe:	00 
 843c6ff:	89 04 24             	mov    %eax,(%esp)
 843c702:	e8 4f c5 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843c707:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843c70a:	89 04 24             	mov    %eax,(%esp)
 843c70d:	e8 34 c5 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843c712:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 843c719:	ff 
 843c71a:	89 04 24             	mov    %eax,(%esp)
 843c71d:	e8 34 c5 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843c722:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843c725:	89 04 24             	mov    %eax,(%esp)
 843c728:	e8 19 c5 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843c72d:	8b 55 08             	mov    0x8(%ebp),%edx
 843c730:	89 54 24 04          	mov    %edx,0x4(%esp)
 843c734:	89 04 24             	mov    %eax,(%esp)
 843c737:	e8 56 5b ca ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 843c73c:	0f be 5d e4          	movsbl -0x1c(%ebp),%ebx
 843c740:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843c743:	89 04 24             	mov    %eax,(%esp)
 843c746:	e8 fb c4 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843c74b:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 843c74f:	89 04 24             	mov    %eax,(%esp)
 843c752:	e8 ad 48 cc ff       	call   8101004 <_ZN12CStreamGuardlsEc>
 843c757:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843c75a:	89 04 24             	mov    %eax,(%esp)
 843c75d:	e8 e4 c4 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843c762:	8b 55 10             	mov    0x10(%ebp),%edx
 843c765:	89 54 24 04          	mov    %edx,0x4(%esp)
 843c769:	89 04 24             	mov    %eax,(%esp)
 843c76c:	e8 19 e6 de ff       	call   822ad8a <_ZN12CStreamGuardlsEPc>
 843c771:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 843c776:	8d 55 f0             	lea    -0x10(%ebp),%edx
 843c779:	89 54 24 08          	mov    %edx,0x8(%esp)
 843c77d:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 843c784:	00 
 843c785:	89 04 24             	mov    %eax,(%esp)
 843c788:	e8 51 48 13 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 843c78d:	eb 1b                	jmp    843c7aa <_ZN27DB_InsertPoliceSaveChatting11makeRequestEjcPc+0x100>
 843c78f:	89 d3                	mov    %edx,%ebx
 843c791:	89 c6                	mov    %eax,%esi
 843c793:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843c796:	89 04 24             	mov    %eax,(%esp)
 843c799:	e8 34 01 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 843c79e:	89 f0                	mov    %esi,%eax
 843c7a0:	89 da                	mov    %ebx,%edx
 843c7a2:	89 04 24             	mov    %eax,(%esp)
 843c7a5:	e8 a6 6f 6a 00       	call   8ae3750 <_Unwind_Resume>
 843c7aa:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843c7ad:	89 04 24             	mov    %eax,(%esp)
 843c7b0:	e8 1d 01 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 843c7b5:	83 c4 30             	add    $0x30,%esp
 843c7b8:	5b                   	pop    %ebx
 843c7b9:	5e                   	pop    %esi
 843c7ba:	5d                   	pop    %ebp
 843c7bb:	c3                   	ret

```

```c
// DB_InsertPoliceSaveChatting::makeRequest @ 0x843c6aa

/* DB_InsertPoliceSaveChatting::makeRequest(unsigned int, char, char*) */

void DB_InsertPoliceSaveChatting::makeRequest(uint param_1,char param_2,char *param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x904c);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0843c702 to 0843c78c has its CatchHandler @ 0843c78f */
  CStreamGuard::operator<<(pCVar2,0x20c);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_3);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,4,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}

```

