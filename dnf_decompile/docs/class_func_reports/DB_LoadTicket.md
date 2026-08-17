# DB_LoadTicket

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 6

---

## DB_LoadTicket

```asm
// === 08419572 DB_LoadTicket::DB_LoadTicket  [0x08419572-0x841958d] ===
 8419572:	55                   	push   %ebp
 8419573:	89 e5                	mov    %esp,%ebp
 8419575:	83 ec 18             	sub    $0x18,%esp
 8419578:	8b 45 08             	mov    0x8(%ebp),%eax
 841957b:	89 04 24             	mov    %eax,(%esp)
 841957e:	e8 23 42 03 00       	call   844d7a6 <_ZN12DBDispatcherC1Ev>
 8419583:	8b 45 08             	mov    0x8(%ebp),%eax
 8419586:	c7 00 78 f9 c5 08    	movl   $0x8c5f978,(%eax)
 841958c:	c9                   	leave
 841958d:	c3                   	ret

```

```c
// DB_LoadTicket::DB_LoadTicket @ 0x8419572

/* DB_LoadTicket::DB_LoadTicket() */

void __thiscall DB_LoadTicket::DB_LoadTicket(DB_LoadTicket *this)

{
  DBDispatcher::DBDispatcher((DBDispatcher *)this);
  *(undefined ***)this = &PTR_dispatch_08c5f978;
  return;
}

```

---

## LoadTicket

```asm
// === 0841968a DB_LoadTicket::LoadTicket  [0x0841968a-0x841976f] ===
 841968a:	55                   	push   %ebp
 841968b:	89 e5                	mov    %esp,%ebp
 841968d:	83 ec 28             	sub    $0x28,%esp
 8419690:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8419695:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 841969c:	00 
 841969d:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 84196a4:	00 
 84196a5:	89 04 24             	mov    %eax,(%esp)
 84196a8:	e8 91 bb fd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 84196ad:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84196b0:	8b 45 0c             	mov    0xc(%ebp),%eax
 84196b3:	8b 00                	mov    (%eax),%eax
 84196b5:	89 44 24 08          	mov    %eax,0x8(%esp)
 84196b9:	c7 44 24 04 58 a7 c4 	movl   $0x8c4a758,0x4(%esp)
 84196c0:	08 
 84196c1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84196c4:	89 04 24             	mov    %eax,(%esp)
 84196c7:	e8 f4 aa fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84196cc:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84196d3:	00 
 84196d4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84196d7:	89 04 24             	mov    %eax,(%esp)
 84196da:	e8 47 ac fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 84196df:	88 45 f3             	mov    %al,-0xd(%ebp)
 84196e2:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 84196e6:	83 f0 01             	xor    $0x1,%eax
 84196e9:	84 c0                	test   %al,%al
 84196eb:	74 07                	je     84196f4 <_ZN13DB_LoadTicket10LoadTicketEP15SIG_LOAD_TICKET+0x6a>
 84196ed:	b8 00 00 00 00       	mov    $0x0,%eax
 84196f2:	eb 7a                	jmp    841976e <_ZN13DB_LoadTicket10LoadTicketEP15SIG_LOAD_TICKET+0xe4>
 84196f4:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 84196fb:	eb 55                	jmp    8419752 <_ZN13DB_LoadTicket10LoadTicketEP15SIG_LOAD_TICKET+0xc8>
 84196fd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8419700:	89 04 24             	mov    %eax,(%esp)
 8419703:	e8 b4 ad fd ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 8419708:	88 45 f3             	mov    %al,-0xd(%ebp)
 841970b:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 841970f:	83 f0 01             	xor    $0x1,%eax
 8419712:	84 c0                	test   %al,%al
 8419714:	75 49                	jne    841975f <_ZN13DB_LoadTicket10LoadTicketEP15SIG_LOAD_TICKET+0xd5>
 8419716:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8419719:	c1 e0 02             	shl    $0x2,%eax
 841971c:	03 45 0c             	add    0xc(%ebp),%eax
 841971f:	83 c0 0c             	add    $0xc,%eax
 8419722:	89 44 24 08          	mov    %eax,0x8(%esp)
 8419726:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 841972d:	00 
 841972e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8419731:	89 04 24             	mov    %eax,(%esp)
 8419734:	e8 e3 88 d2 ff       	call   814201c <_ZN5MySQL9get_shortEiRi>
 8419739:	88 45 f3             	mov    %al,-0xd(%ebp)
 841973c:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 8419740:	83 f0 01             	xor    $0x1,%eax
 8419743:	84 c0                	test   %al,%al
 8419745:	74 07                	je     841974e <_ZN13DB_LoadTicket10LoadTicketEP15SIG_LOAD_TICKET+0xc4>
 8419747:	b8 00 00 00 00       	mov    $0x0,%eax
 841974c:	eb 20                	jmp    841976e <_ZN13DB_LoadTicket10LoadTicketEP15SIG_LOAD_TICKET+0xe4>
 841974e:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 8419752:	83 7d ec 63          	cmpl   $0x63,-0x14(%ebp)
 8419756:	0f 9e c0             	setle  %al
 8419759:	84 c0                	test   %al,%al
 841975b:	75 a0                	jne    84196fd <_ZN13DB_LoadTicket10LoadTicketEP15SIG_LOAD_TICKET+0x73>
 841975d:	eb 01                	jmp    8419760 <_ZN13DB_LoadTicket10LoadTicketEP15SIG_LOAD_TICKET+0xd6>
 841975f:	90                   	nop
 8419760:	8b 45 0c             	mov    0xc(%ebp),%eax
 8419763:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8419766:	89 50 08             	mov    %edx,0x8(%eax)
 8419769:	b8 01 00 00 00       	mov    $0x1,%eax
 841976e:	c9                   	leave
 841976f:	c3                   	ret

```

```c
// DB_LoadTicket::LoadTicket @ 0x841968a

/* DB_LoadTicket::LoadTicket(SIG_LOAD_TICKET*) */

undefined4 __thiscall DB_LoadTicket::LoadTicket(DB_LoadTicket *this,SIG_LOAD_TICKET *param_1)

{
  char cVar1;
  MySQL *this_00;
  undefined4 uVar2;
  int local_18;
  
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  MySQL::set_query(this_00,"seLect village from village_ticket where charac_no=%u",
                   *(undefined4 *)param_1);
  cVar1 = MySQL::exec(this_00,true);
  if (cVar1 == '\x01') {
    local_18 = 0;
    while ((local_18 < 100 && (cVar1 = MySQL::fetch(this_00), cVar1 == '\x01'))) {
      cVar1 = MySQL::get_short(this_00,0,(int *)(param_1 + local_18 * 4 + 0xc));
      if (cVar1 != '\x01') {
        return 0;
      }
      local_18 = local_18 + 1;
    }
    *(int *)(param_1 + 8) = local_18;
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## SendResult

```asm
// === 08419770 DB_LoadTicket::SendResult  [0x08419770-0x8419851] ===
 8419770:	55                   	push   %ebp
 8419771:	89 e5                	mov    %esp,%ebp
 8419773:	56                   	push   %esi
 8419774:	53                   	push   %ebx
 8419775:	83 ec 20             	sub    $0x20,%esp
 8419778:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 841977d:	c7 44 24 08 17 4b 00 	movl   $0x4b17,0x8(%esp)
 8419784:	00 
 8419785:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 841978c:	08 
 841978d:	89 04 24             	mov    %eax,(%esp)
 8419790:	e8 f1 62 e7 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8419795:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 841979c:	00 
 841979d:	89 44 24 04          	mov    %eax,0x4(%esp)
 84197a1:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84197a4:	89 04 24             	mov    %eax,(%esp)
 84197a7:	e8 7a f4 ca ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 84197ac:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84197af:	89 04 24             	mov    %eax,(%esp)
 84197b2:	e8 8f f4 ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84197b7:	8b 55 0c             	mov    0xc(%ebp),%edx
 84197ba:	89 54 24 04          	mov    %edx,0x4(%esp)
 84197be:	89 04 24             	mov    %eax,(%esp)
 84197c1:	e8 90 f4 ca ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84197c6:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84197c9:	89 04 24             	mov    %eax,(%esp)
 84197cc:	e8 75 f4 ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84197d1:	8b 55 10             	mov    0x10(%ebp),%edx
 84197d4:	89 54 24 04          	mov    %edx,0x4(%esp)
 84197d8:	89 04 24             	mov    %eax,(%esp)
 84197db:	e8 76 f4 ca ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84197e0:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84197e3:	89 04 24             	mov    %eax,(%esp)
 84197e6:	e8 63 f4 ca ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 84197eb:	c7 44 24 08 9c 01 00 	movl   $0x19c,0x8(%esp)
 84197f2:	00 
 84197f3:	8b 55 14             	mov    0x14(%ebp),%edx
 84197f6:	89 54 24 04          	mov    %edx,0x4(%esp)
 84197fa:	89 04 24             	mov    %eax,(%esp)
 84197fd:	e8 50 4e cc ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8419802:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8419807:	8d 55 f0             	lea    -0x10(%ebp),%edx
 841980a:	89 54 24 08          	mov    %edx,0x8(%esp)
 841980e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8419815:	00 
 8419816:	89 04 24             	mov    %eax,(%esp)
 8419819:	e8 c0 77 15 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 841981e:	bb 01 00 00 00       	mov    $0x1,%ebx
 8419823:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8419826:	89 04 24             	mov    %eax,(%esp)
 8419829:	e8 a4 30 20 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 841982e:	89 d8                	mov    %ebx,%eax
 8419830:	83 c4 20             	add    $0x20,%esp
 8419833:	5b                   	pop    %ebx
 8419834:	5e                   	pop    %esi
 8419835:	5d                   	pop    %ebp
 8419836:	c3                   	ret
 8419837:	89 d3                	mov    %edx,%ebx
 8419839:	89 c6                	mov    %eax,%esi
 841983b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 841983e:	89 04 24             	mov    %eax,(%esp)
 8419841:	e8 8c 30 20 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8419846:	89 f0                	mov    %esi,%eax
 8419848:	89 da                	mov    %ebx,%edx
 841984a:	89 04 24             	mov    %eax,(%esp)
 841984d:	e8 fe 9e 6c 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// DB_LoadTicket::SendResult @ 0x8419770

/* DB_LoadTicket::SendResult(int, int, SIG_LOAD_TICKET*) */

undefined4 __thiscall
DB_LoadTicket::SendResult(DB_LoadTicket *this,int param_1,int param_2,SIG_LOAD_TICKET *param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x4b17);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 084197c1 to 0841981d has its CatchHandler @ 08419837 */
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_14);
  CStreamGuard::put_binary(pCVar2,param_3,0x19c);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return 1;
}

```

---

## dispatch

```asm
// === 084195dc DB_LoadTicket::dispatch  [0x084195dc-0x8419689] ===
 84195dc:	55                   	push   %ebp
 84195dd:	89 e5                	mov    %esp,%ebp
 84195df:	83 ec 28             	sub    $0x28,%esp
 84195e2:	8b 45 08             	mov    0x8(%ebp),%eax
 84195e5:	8b 55 14             	mov    0x14(%ebp),%edx
 84195e8:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84195ec:	8b 55 10             	mov    0x10(%ebp),%edx
 84195ef:	89 54 24 08          	mov    %edx,0x8(%esp)
 84195f3:	8b 55 0c             	mov    0xc(%ebp),%edx
 84195f6:	89 54 24 04          	mov    %edx,0x4(%esp)
 84195fa:	89 04 24             	mov    %eax,(%esp)
 84195fd:	e8 7a 29 fe ff       	call   83fbf7c <_ZN12DBDispatcher8dispatchEiiP6Stream>
 8419602:	83 f0 01             	xor    $0x1,%eax
 8419605:	84 c0                	test   %al,%al
 8419607:	74 07                	je     8419610 <_ZN13DB_LoadTicket8dispatchEiiP6Stream+0x34>
 8419609:	b8 00 00 00 00       	mov    $0x0,%eax
 841960e:	eb 78                	jmp    8419688 <_ZN13DB_LoadTicket8dispatchEiiP6Stream+0xac>
 8419610:	8b 45 14             	mov    0x14(%ebp),%eax
 8419613:	89 04 24             	mov    %eax,(%esp)
 8419616:	e8 05 79 03 00       	call   8450f20 <_ZN6Stream12GetOutBufferI15SIG_LOAD_TICKETEEPT_v>
 841961b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 841961e:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8419622:	75 07                	jne    841962b <_ZN13DB_LoadTicket8dispatchEiiP6Stream+0x4f>
 8419624:	b8 00 00 00 00       	mov    $0x0,%eax
 8419629:	eb 5d                	jmp    8419688 <_ZN13DB_LoadTicket8dispatchEiiP6Stream+0xac>
 841962b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 841962e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8419632:	8b 45 08             	mov    0x8(%ebp),%eax
 8419635:	89 04 24             	mov    %eax,(%esp)
 8419638:	e8 4d 00 00 00       	call   841968a <_ZN13DB_LoadTicket10LoadTicketEP15SIG_LOAD_TICKET>
 841963d:	83 f0 01             	xor    $0x1,%eax
 8419640:	84 c0                	test   %al,%al
 8419642:	74 0a                	je     841964e <_ZN13DB_LoadTicket8dispatchEiiP6Stream+0x72>
 8419644:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8419647:	c7 40 04 01 00 00 00 	movl   $0x1,0x4(%eax)
 841964e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8419651:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8419655:	8b 45 10             	mov    0x10(%ebp),%eax
 8419658:	89 44 24 08          	mov    %eax,0x8(%esp)
 841965c:	8b 45 0c             	mov    0xc(%ebp),%eax
 841965f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8419663:	8b 45 08             	mov    0x8(%ebp),%eax
 8419666:	89 04 24             	mov    %eax,(%esp)
 8419669:	e8 02 01 00 00       	call   8419770 <_ZN13DB_LoadTicket10SendResultEiiP15SIG_LOAD_TICKET>
 841966e:	88 45 f3             	mov    %al,-0xd(%ebp)
 8419671:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 8419675:	83 f0 01             	xor    $0x1,%eax
 8419678:	84 c0                	test   %al,%al
 841967a:	74 07                	je     8419683 <_ZN13DB_LoadTicket8dispatchEiiP6Stream+0xa7>
 841967c:	b8 00 00 00 00       	mov    $0x0,%eax
 8419681:	eb 05                	jmp    8419688 <_ZN13DB_LoadTicket8dispatchEiiP6Stream+0xac>
 8419683:	b8 01 00 00 00       	mov    $0x1,%eax
 8419688:	c9                   	leave
 8419689:	c3                   	ret

```

```c
// DB_LoadTicket::dispatch @ 0x84195dc

/* DB_LoadTicket::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_LoadTicket::dispatch(DB_LoadTicket *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  SIG_LOAD_TICKET *pSVar3;
  
  cVar1 = DBDispatcher::dispatch((int)this,param_1,(Stream *)param_2);
  if (cVar1 == '\x01') {
    pSVar3 = Stream::GetOutBuffer<SIG_LOAD_TICKET>(param_3);
    if (pSVar3 == (SIG_LOAD_TICKET *)0x0) {
      uVar2 = 0;
    }
    else {
      cVar1 = LoadTicket(this,pSVar3);
      if (cVar1 != '\x01') {
        *(undefined4 *)(pSVar3 + 4) = 1;
      }
      cVar1 = SendResult(this,param_1,param_2,pSVar3);
      if (cVar1 == '\x01') {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## ~DB_LoadTicket

```asm
// === 0841958e DB_LoadTicket::~DB_LoadTicket  [0x0841958e-0x84195bd] ===
 841958e:	55                   	push   %ebp
 841958f:	89 e5                	mov    %esp,%ebp
 8419591:	83 ec 18             	sub    $0x18,%esp
 8419594:	8b 45 08             	mov    0x8(%ebp),%eax
 8419597:	c7 00 78 f9 c5 08    	movl   $0x8c5f978,(%eax)
 841959d:	8b 45 08             	mov    0x8(%ebp),%eax
 84195a0:	89 04 24             	mov    %eax,(%esp)
 84195a3:	e8 d0 8d cc ff       	call   80e2378 <_ZN12DBDispatcherD1Ev>
 84195a8:	b8 00 00 00 00       	mov    $0x0,%eax
 84195ad:	84 c0                	test   %al,%al
 84195af:	74 0b                	je     84195bc <_ZN13DB_LoadTicketD1Ev+0x2e>
 84195b1:	8b 45 08             	mov    0x8(%ebp),%eax
 84195b4:	89 04 24             	mov    %eax,(%esp)
 84195b7:	e8 34 af 30 00       	call   87244f0 <_ZdlPv>
 84195bc:	c9                   	leave
 84195bd:	c3                   	ret

```

```c
// DB_LoadTicket::~DB_LoadTicket @ 0x841958e

/* WARNING: Removing unreachable block (ram,0x084195b1) */
/* DB_LoadTicket::~DB_LoadTicket() */

void __thiscall DB_LoadTicket::~DB_LoadTicket(DB_LoadTicket *this)

{
  *(undefined ***)this = &PTR_dispatch_08c5f978;
  DBDispatcher::~DBDispatcher((DBDispatcher *)this);
  return;
}

```

---

## ~DB_LoadTicket_084195be

```asm
// === 084195be DB_LoadTicket::~DB_LoadTicket  [0x084195be-0x84195db] ===
 84195be:	55                   	push   %ebp
 84195bf:	89 e5                	mov    %esp,%ebp
 84195c1:	83 ec 18             	sub    $0x18,%esp
 84195c4:	8b 45 08             	mov    0x8(%ebp),%eax
 84195c7:	89 04 24             	mov    %eax,(%esp)
 84195ca:	e8 bf ff ff ff       	call   841958e <_ZN13DB_LoadTicketD1Ev>
 84195cf:	8b 45 08             	mov    0x8(%ebp),%eax
 84195d2:	89 04 24             	mov    %eax,(%esp)
 84195d5:	e8 16 af 30 00       	call   87244f0 <_ZdlPv>
 84195da:	c9                   	leave
 84195db:	c3                   	ret

```

```c
// DB_LoadTicket::~DB_LoadTicket @ 0x84195be

/* DB_LoadTicket::~DB_LoadTicket() */

void __thiscall DB_LoadTicket::~DB_LoadTicket(DB_LoadTicket *this)

{
  ~DB_LoadTicket(this);
  operator_delete(this);
  return;
}

```

