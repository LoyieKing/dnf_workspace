# DB_SelectCharacMid

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 08446516 DB_SelectCharacMid::dispatch  [0x08446516-0x844676b] ===
 8446516:	55                   	push   %ebp
 8446517:	89 e5                	mov    %esp,%ebp
 8446519:	57                   	push   %edi
 844651a:	56                   	push   %esi
 844651b:	53                   	push   %ebx
 844651c:	83 ec 7c             	sub    $0x7c,%esp
 844651f:	8b 45 14             	mov    0x14(%ebp),%eax
 8446522:	89 04 24             	mov    %eax,(%esp)
 8446525:	e8 72 dd 00 00       	call   845429c <_ZN6Stream12GetOutBufferI18SIG_CHECK_CHAR_MIDEEPT_v>
 844652a:	89 45 d8             	mov    %eax,-0x28(%ebp)
 844652d:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8446532:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8446539:	00 
 844653a:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8446541:	00 
 8446542:	89 04 24             	mov    %eax,(%esp)
 8446545:	e8 f4 ec fa ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 844654a:	89 45 dc             	mov    %eax,-0x24(%ebp)
 844654d:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 8446554:	8d 55 91             	lea    -0x6f(%ebp),%edx
 8446557:	bb 3b 00 00 00       	mov    $0x3b,%ebx
 844655c:	b8 00 00 00 00       	mov    $0x0,%eax
 8446561:	89 d1                	mov    %edx,%ecx
 8446563:	83 e1 01             	and    $0x1,%ecx
 8446566:	85 c9                	test   %ecx,%ecx
 8446568:	74 08                	je     8446572 <_ZN18DB_SelectCharacMid8dispatchEiiP6Stream+0x5c>
 844656a:	88 02                	mov    %al,(%edx)
 844656c:	83 c2 01             	add    $0x1,%edx
 844656f:	83 eb 01             	sub    $0x1,%ebx
 8446572:	89 d1                	mov    %edx,%ecx
 8446574:	83 e1 02             	and    $0x2,%ecx
 8446577:	85 c9                	test   %ecx,%ecx
 8446579:	74 09                	je     8446584 <_ZN18DB_SelectCharacMid8dispatchEiiP6Stream+0x6e>
 844657b:	66 89 02             	mov    %ax,(%edx)
 844657e:	83 c2 02             	add    $0x2,%edx
 8446581:	83 eb 02             	sub    $0x2,%ebx
 8446584:	89 d9                	mov    %ebx,%ecx
 8446586:	c1 e9 02             	shr    $0x2,%ecx
 8446589:	89 d7                	mov    %edx,%edi
 844658b:	f3 ab                	rep stos %eax,%es:(%edi)
 844658d:	89 fa                	mov    %edi,%edx
 844658f:	89 d9                	mov    %ebx,%ecx
 8446591:	83 e1 02             	and    $0x2,%ecx
 8446594:	85 c9                	test   %ecx,%ecx
 8446596:	74 06                	je     844659e <_ZN18DB_SelectCharacMid8dispatchEiiP6Stream+0x88>
 8446598:	66 89 02             	mov    %ax,(%edx)
 844659b:	83 c2 02             	add    $0x2,%edx
 844659e:	89 d9                	mov    %ebx,%ecx
 84465a0:	83 e1 01             	and    $0x1,%ecx
 84465a3:	85 c9                	test   %ecx,%ecx
 84465a5:	74 05                	je     84465ac <_ZN18DB_SelectCharacMid8dispatchEiiP6Stream+0x96>
 84465a7:	88 02                	mov    %al,(%edx)
 84465a9:	83 c2 01             	add    $0x1,%edx
 84465ac:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84465af:	83 c0 10             	add    $0x10,%eax
 84465b2:	89 44 24 08          	mov    %eax,0x8(%esp)
 84465b6:	8d 45 91             	lea    -0x6f(%ebp),%eax
 84465b9:	89 44 24 04          	mov    %eax,0x4(%esp)
 84465bd:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84465c0:	89 04 24             	mov    %eax,(%esp)
 84465c3:	e8 e2 e2 fa ff       	call   83f48aa <_ZN5MySQL13escape_stringEPcPKc>
 84465c8:	8d 45 91             	lea    -0x6f(%ebp),%eax
 84465cb:	89 44 24 08          	mov    %eax,0x8(%esp)
 84465cf:	c7 44 24 04 50 38 c5 	movl   $0x8c53850,0x4(%esp)
 84465d6:	08 
 84465d7:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84465da:	89 04 24             	mov    %eax,(%esp)
 84465dd:	e8 de db fa ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84465e2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84465e9:	00 
 84465ea:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84465ed:	89 04 24             	mov    %eax,(%esp)
 84465f0:	e8 31 dd fa ff       	call   83f4326 <_ZN5MySQL4execEb>
 84465f5:	83 f0 01             	xor    $0x1,%eax
 84465f8:	84 c0                	test   %al,%al
 84465fa:	74 0a                	je     8446606 <_ZN18DB_SelectCharacMid8dispatchEiiP6Stream+0xf0>
 84465fc:	b8 00 00 00 00       	mov    $0x0,%eax
 8446601:	e9 5d 01 00 00       	jmp    8446763 <_ZN18DB_SelectCharacMid8dispatchEiiP6Stream+0x24d>
 8446606:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8446609:	89 04 24             	mov    %eax,(%esp)
 844660c:	e8 5b bd c9 ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8446611:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8446614:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 8446618:	0f 84 40 01 00 00    	je     844675e <_ZN18DB_SelectCharacMid8dispatchEiiP6Stream+0x248>
 844661e:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8446621:	89 04 24             	mov    %eax,(%esp)
 8446624:	e8 93 de fa ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 8446629:	83 f0 01             	xor    $0x1,%eax
 844662c:	84 c0                	test   %al,%al
 844662e:	74 0a                	je     844663a <_ZN18DB_SelectCharacMid8dispatchEiiP6Stream+0x124>
 8446630:	b8 00 00 00 00       	mov    $0x0,%eax
 8446635:	e9 29 01 00 00       	jmp    8446763 <_ZN18DB_SelectCharacMid8dispatchEiiP6Stream+0x24d>
 844663a:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 844663d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8446641:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8446648:	00 
 8446649:	8b 45 dc             	mov    -0x24(%ebp),%eax
 844664c:	89 04 24             	mov    %eax,(%esp)
 844664f:	e8 5a bc c9 ff       	call   80e22ae <_ZN5MySQL7get_intEiRj>
 8446654:	83 f0 01             	xor    $0x1,%eax
 8446657:	84 c0                	test   %al,%al
 8446659:	74 0a                	je     8446665 <_ZN18DB_SelectCharacMid8dispatchEiiP6Stream+0x14f>
 844665b:	b8 00 00 00 00       	mov    $0x0,%eax
 8446660:	e9 fe 00 00 00       	jmp    8446763 <_ZN18DB_SelectCharacMid8dispatchEiiP6Stream+0x24d>
 8446665:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 844666a:	c7 44 24 08 30 ae 00 	movl   $0xae30,0x8(%esp)
 8446671:	00 
 8446672:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8446679:	08 
 844667a:	89 04 24             	mov    %eax,(%esp)
 844667d:	e8 04 94 e4 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8446682:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8446689:	00 
 844668a:	89 44 24 04          	mov    %eax,0x4(%esp)
 844668e:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8446691:	89 04 24             	mov    %eax,(%esp)
 8446694:	e8 8d 25 c8 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8446699:	8d 45 cc             	lea    -0x34(%ebp),%eax
 844669c:	89 04 24             	mov    %eax,(%esp)
 844669f:	e8 a2 25 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84466a4:	8b 55 0c             	mov    0xc(%ebp),%edx
 84466a7:	89 54 24 04          	mov    %edx,0x4(%esp)
 84466ab:	89 04 24             	mov    %eax,(%esp)
 84466ae:	e8 a3 25 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84466b3:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84466b6:	89 04 24             	mov    %eax,(%esp)
 84466b9:	e8 88 25 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84466be:	8b 55 10             	mov    0x10(%ebp),%edx
 84466c1:	89 54 24 04          	mov    %edx,0x4(%esp)
 84466c5:	89 04 24             	mov    %eax,(%esp)
 84466c8:	e8 89 25 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84466cd:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84466d0:	89 04 24             	mov    %eax,(%esp)
 84466d3:	e8 76 25 c8 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 84466d8:	89 04 24             	mov    %eax,(%esp)
 84466db:	e8 10 dc 00 00       	call   84542f0 <_ZN12CStreamGuard11GetInBufferI25SIG_CHECK_CHAR_MID_RESULTEEPT_v>
 84466e0:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84466e3:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 84466e6:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84466e9:	89 50 10             	mov    %edx,0x10(%eax)
 84466ec:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84466ef:	8b 50 04             	mov    0x4(%eax),%edx
 84466f2:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84466f5:	89 50 04             	mov    %edx,0x4(%eax)
 84466f8:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84466fb:	8b 50 08             	mov    0x8(%eax),%edx
 84466fe:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8446701:	89 50 08             	mov    %edx,0x8(%eax)
 8446704:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8446707:	8b 50 0c             	mov    0xc(%eax),%edx
 844670a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 844670d:	89 50 0c             	mov    %edx,0xc(%eax)
 8446710:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8446713:	8b 10                	mov    (%eax),%edx
 8446715:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8446718:	89 10                	mov    %edx,(%eax)
 844671a:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 844671f:	8d 55 cc             	lea    -0x34(%ebp),%edx
 8446722:	89 54 24 08          	mov    %edx,0x8(%esp)
 8446726:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 844672d:	00 
 844672e:	89 04 24             	mov    %eax,(%esp)
 8446731:	e8 a8 a8 12 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8446736:	eb 1b                	jmp    8446753 <_ZN18DB_SelectCharacMid8dispatchEiiP6Stream+0x23d>
 8446738:	89 d3                	mov    %edx,%ebx
 844673a:	89 c6                	mov    %eax,%esi
 844673c:	8d 45 cc             	lea    -0x34(%ebp),%eax
 844673f:	89 04 24             	mov    %eax,(%esp)
 8446742:	e8 8b 61 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8446747:	89 f0                	mov    %esi,%eax
 8446749:	89 da                	mov    %ebx,%edx
 844674b:	89 04 24             	mov    %eax,(%esp)
 844674e:	e8 fd cf 69 00       	call   8ae3750 <_Unwind_Resume>
 8446753:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8446756:	89 04 24             	mov    %eax,(%esp)
 8446759:	e8 74 61 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 844675e:	b8 01 00 00 00       	mov    $0x1,%eax
 8446763:	83 c4 7c             	add    $0x7c,%esp
 8446766:	5b                   	pop    %ebx
 8446767:	5e                   	pop    %esi
 8446768:	5f                   	pop    %edi
 8446769:	5d                   	pop    %ebp
 844676a:	c3                   	ret
 844676b:	90                   	nop

```

```c
// DB_SelectCharacMid::dispatch @ 0x8446516

/* DB_SelectCharacMid::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_SelectCharacMid::dispatch(DB_SelectCharacMid *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  bool bVar7;
  byte bVar8;
  char local_73;
  char local_72 [58];
  CStreamGuard local_38 [8];
  uint local_30;
  SIG_CHECK_CHAR_MID *local_2c;
  MySQL *local_28;
  int local_24;
  SIG_CHECK_CHAR_MID_RESULT *local_20;
  
  bVar8 = 0;
  local_2c = Stream::GetOutBuffer<SIG_CHECK_CHAR_MID>(param_3);
  local_28 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  local_30 = 0;
  pcVar5 = &local_73;
  uVar6 = 0x3b;
  bVar7 = ((uint)pcVar5 & 1) != 0;
  if (bVar7) {
    local_73 = '\0';
    pcVar5 = local_72;
    uVar6 = 0x3a;
  }
  if (((uint)pcVar5 & 2) != 0) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5 = pcVar5 + 2;
    uVar6 = uVar6 - 2;
  }
  for (uVar4 = uVar6 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5[2] = '\0';
    pcVar5[3] = '\0';
    pcVar5 = pcVar5 + ((uint)bVar8 * -2 + 1) * 4;
  }
  if ((uVar6 & 2) != 0) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5 = pcVar5 + 2;
  }
  if (!bVar7) {
    *pcVar5 = '\0';
  }
  MySQL::escape_string(local_28,&local_73,(char *)(local_2c + 0x10));
  MySQL::set_query(local_28,"seLect m_id from charac_info where charac_name=\'%s\' limit 1",
                   &local_73);
  cVar1 = MySQL::exec(local_28,true);
  if (cVar1 != '\x01') {
    return 0;
  }
  local_24 = MySQL::get_n_rows(local_28);
  if (local_24 != 0) {
    cVar1 = MySQL::fetch(local_28);
    if (cVar1 != '\x01') {
      return 0;
    }
    cVar1 = MySQL::get_int(local_28,0,&local_30);
    if (cVar1 != '\x01') {
      return 0;
    }
    pSVar2 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xae30);
    CStreamGuard::CStreamGuard(local_38,pSVar2,true);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_38);
                    /* try { // try from 084466ae to 08446735 has its CatchHandler @ 08446738 */
    CStreamGuard::operator<<(pCVar3,param_1);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_38);
    CStreamGuard::operator<<(pCVar3,param_2);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_38);
    local_20 = CStreamGuard::GetInBuffer<SIG_CHECK_CHAR_MID_RESULT>(pCVar3);
    *(uint *)(local_20 + 0x10) = local_30;
    *(undefined4 *)(local_20 + 4) = *(undefined4 *)(local_2c + 4);
    *(undefined4 *)(local_20 + 8) = *(undefined4 *)(local_2c + 8);
    *(undefined4 *)(local_20 + 0xc) = *(undefined4 *)(local_2c + 0xc);
    *(undefined4 *)local_20 = *(undefined4 *)local_2c;
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_38);
    CStreamGuard::~CStreamGuard(local_38);
  }
  return 1;
}

```

---

## makeRequest

```asm
// === 0844676c DB_SelectCharacMid::makeRequest  [0x0844676c-0x844687d] ===
 844676c:	55                   	push   %ebp
 844676d:	89 e5                	mov    %esp,%ebp
 844676f:	56                   	push   %esi
 8446770:	53                   	push   %ebx
 8446771:	83 ec 20             	sub    $0x20,%esp
 8446774:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8446779:	c7 44 24 08 42 ae 00 	movl   $0xae42,0x8(%esp)
 8446780:	00 
 8446781:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8446788:	08 
 8446789:	89 04 24             	mov    %eax,(%esp)
 844678c:	e8 f5 92 e4 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8446791:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8446798:	00 
 8446799:	89 44 24 04          	mov    %eax,0x4(%esp)
 844679d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84467a0:	89 04 24             	mov    %eax,(%esp)
 84467a3:	e8 7e 24 c8 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 84467a8:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84467ab:	89 04 24             	mov    %eax,(%esp)
 84467ae:	e8 93 24 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84467b3:	c7 44 24 04 b9 02 00 	movl   $0x2b9,0x4(%esp)
 84467ba:	00 
 84467bb:	89 04 24             	mov    %eax,(%esp)
 84467be:	e8 93 24 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84467c3:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84467c6:	89 04 24             	mov    %eax,(%esp)
 84467c9:	e8 78 24 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84467ce:	8b 55 08             	mov    0x8(%ebp),%edx
 84467d1:	89 54 24 04          	mov    %edx,0x4(%esp)
 84467d5:	89 04 24             	mov    %eax,(%esp)
 84467d8:	e8 79 24 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84467dd:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84467e0:	89 04 24             	mov    %eax,(%esp)
 84467e3:	e8 66 24 c8 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 84467e8:	89 04 24             	mov    %eax,(%esp)
 84467eb:	e8 16 db 00 00       	call   8454306 <_ZN12CStreamGuard11GetInBufferI18SIG_CHECK_CHAR_MIDEEPT_v>
 84467f0:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84467f3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84467f6:	8b 55 0c             	mov    0xc(%ebp),%edx
 84467f9:	89 10                	mov    %edx,(%eax)
 84467fb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84467fe:	8b 55 14             	mov    0x14(%ebp),%edx
 8446801:	89 50 04             	mov    %edx,0x4(%eax)
 8446804:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8446807:	8b 55 18             	mov    0x18(%ebp),%edx
 844680a:	89 50 08             	mov    %edx,0x8(%eax)
 844680d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8446810:	8b 55 1c             	mov    0x1c(%ebp),%edx
 8446813:	89 50 0c             	mov    %edx,0xc(%eax)
 8446816:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8446819:	8d 50 10             	lea    0x10(%eax),%edx
 844681c:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 8446823:	00 
 8446824:	8b 45 10             	mov    0x10(%ebp),%eax
 8446827:	89 44 24 04          	mov    %eax,0x4(%esp)
 844682b:	89 14 24             	mov    %edx,(%esp)
 844682e:	e8 9d 70 c3 ff       	call   807d8d0 <strncpy@plt>
 8446833:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8446838:	8d 55 ec             	lea    -0x14(%ebp),%edx
 844683b:	89 54 24 08          	mov    %edx,0x8(%esp)
 844683f:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8446846:	00 
 8446847:	89 04 24             	mov    %eax,(%esp)
 844684a:	e8 8f a7 12 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 844684f:	eb 1b                	jmp    844686c <_ZN18DB_SelectCharacMid11makeRequestEijPKcjjj+0x100>
 8446851:	89 d3                	mov    %edx,%ebx
 8446853:	89 c6                	mov    %eax,%esi
 8446855:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8446858:	89 04 24             	mov    %eax,(%esp)
 844685b:	e8 72 60 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8446860:	89 f0                	mov    %esi,%eax
 8446862:	89 da                	mov    %ebx,%edx
 8446864:	89 04 24             	mov    %eax,(%esp)
 8446867:	e8 e4 ce 69 00       	call   8ae3750 <_Unwind_Resume>
 844686c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 844686f:	89 04 24             	mov    %eax,(%esp)
 8446872:	e8 5b 60 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8446877:	83 c4 20             	add    $0x20,%esp
 844687a:	5b                   	pop    %ebx
 844687b:	5e                   	pop    %esi
 844687c:	5d                   	pop    %ebp
 844687d:	c3                   	ret

```

```c
// DB_SelectCharacMid::makeRequest @ 0x844676c

/* DB_SelectCharacMid::makeRequest(int, unsigned int, char const*, unsigned int, unsigned int,
   unsigned int) */

void DB_SelectCharacMid::makeRequest
               (int param_1,uint param_2,char *param_3,uint param_4,uint param_5,uint param_6)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_CHECK_CHAR_MID *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xae42);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 084467be to 0844684e has its CatchHandler @ 08446851 */
  CStreamGuard::operator<<(pCVar2,0x2b9);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_CHECK_CHAR_MID>(pCVar2);
  *(uint *)local_10 = param_2;
  *(uint *)(local_10 + 4) = param_4;
  *(uint *)(local_10 + 8) = param_5;
  *(uint *)(local_10 + 0xc) = param_6;
  strncpy((char *)(local_10 + 0x10),param_3,0x1e);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}

```

