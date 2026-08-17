# DB_EventUpdateGrowthWeaponCharac

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 084494e2 DB_EventUpdateGrowthWeaponCharac::dispatch  [0x084494e2-0x84495c5] ===
 84494e2:	55                   	push   %ebp
 84494e3:	89 e5                	mov    %esp,%ebp
 84494e5:	53                   	push   %ebx
 84494e6:	83 ec 44             	sub    $0x44,%esp
 84494e9:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 84494ee:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84494f5:	00 
 84494f6:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 84494fd:	00 
 84494fe:	89 04 24             	mov    %eax,(%esp)
 8449501:	e8 38 bd fa ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8449506:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8449509:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8449510:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8449517:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 844951e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8449521:	89 44 24 04          	mov    %eax,0x4(%esp)
 8449525:	8b 45 14             	mov    0x14(%ebp),%eax
 8449528:	89 04 24             	mov    %eax,(%esp)
 844952b:	e8 66 32 1d 00       	call   861c796 <_ZN6StreamrsERj>
 8449530:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8449533:	89 44 24 04          	mov    %eax,0x4(%esp)
 8449537:	8b 45 14             	mov    0x14(%ebp),%eax
 844953a:	89 04 24             	mov    %eax,(%esp)
 844953d:	e8 54 32 1d 00       	call   861c796 <_ZN6StreamrsERj>
 8449542:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8449545:	89 44 24 04          	mov    %eax,0x4(%esp)
 8449549:	8b 45 14             	mov    0x14(%ebp),%eax
 844954c:	89 04 24             	mov    %eax,(%esp)
 844954f:	e8 70 30 1d 00       	call   861c5c4 <_ZN6StreamrsERi>
 8449554:	8d 45 e6             	lea    -0x1a(%ebp),%eax
 8449557:	89 44 24 04          	mov    %eax,0x4(%esp)
 844955b:	8b 45 14             	mov    0x14(%ebp),%eax
 844955e:	89 04 24             	mov    %eax,(%esp)
 8449561:	e8 ec 2f 1d 00       	call   861c552 <_ZN6StreamrsERs>
 8449566:	8b 5d f0             	mov    -0x10(%ebp),%ebx
 8449569:	0f b7 45 e6          	movzwl -0x1a(%ebp),%eax
 844956d:	0f bf c8             	movswl %ax,%ecx
 8449570:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8449573:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8449576:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 844957a:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 844957e:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8449582:	89 44 24 08          	mov    %eax,0x8(%esp)
 8449586:	c7 44 24 04 04 8c c5 	movl   $0x8c58c04,0x4(%esp)
 844958d:	08 
 844958e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8449591:	89 04 24             	mov    %eax,(%esp)
 8449594:	e8 27 ac fa ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8449599:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84495a0:	00 
 84495a1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84495a4:	89 04 24             	mov    %eax,(%esp)
 84495a7:	e8 7a ad fa ff       	call   83f4326 <_ZN5MySQL4execEb>
 84495ac:	83 f0 01             	xor    $0x1,%eax
 84495af:	84 c0                	test   %al,%al
 84495b1:	74 07                	je     84495ba <_ZN32DB_EventUpdateGrowthWeaponCharac8dispatchEiiP6Stream+0xd8>
 84495b3:	b8 00 00 00 00       	mov    $0x0,%eax
 84495b8:	eb 05                	jmp    84495bf <_ZN32DB_EventUpdateGrowthWeaponCharac8dispatchEiiP6Stream+0xdd>
 84495ba:	b8 01 00 00 00       	mov    $0x1,%eax
 84495bf:	83 c4 44             	add    $0x44,%esp
 84495c2:	5b                   	pop    %ebx
 84495c3:	5d                   	pop    %ebp
 84495c4:	c3                   	ret
 84495c5:	90                   	nop

```

```c
// DB_EventUpdateGrowthWeaponCharac::dispatch @ 0x84494e2

/* DB_EventUpdateGrowthWeaponCharac::dispatch(int, int, Stream*) */

bool DB_EventUpdateGrowthWeaponCharac::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  Stream *in_stack_00000010;
  short local_1e;
  int local_1c;
  uint local_18;
  uint local_14;
  MySQL *local_10;
  
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  Stream::operator>>(in_stack_00000010,&local_14);
  Stream::operator>>(in_stack_00000010,&local_18);
  Stream::operator>>(in_stack_00000010,&local_1c);
  Stream::operator>>(in_stack_00000010,&local_1e);
  MySQL::set_query(local_10,
                   "upDate event_1207_growthweapon set occ_date = now(), charac_no = %d, growthweapon_id = %d, server_id = %d where m_id = %u"
                   ,local_18,local_1c,(int)local_1e,local_14);
  cVar1 = MySQL::exec(local_10,true);
  return cVar1 == '\x01';
}

```

---

## makeRequest

```asm
// === 084495c6 DB_EventUpdateGrowthWeaponCharac::makeRequest  [0x084495c6-0x84496f3] ===
 84495c6:	55                   	push   %ebp
 84495c7:	89 e5                	mov    %esp,%ebp
 84495c9:	56                   	push   %esi
 84495ca:	53                   	push   %ebx
 84495cb:	83 ec 30             	sub    $0x30,%esp
 84495ce:	8b 45 14             	mov    0x14(%ebp),%eax
 84495d1:	66 89 45 e4          	mov    %ax,-0x1c(%ebp)
 84495d5:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 84495da:	c7 44 24 08 14 b9 00 	movl   $0xb914,0x8(%esp)
 84495e1:	00 
 84495e2:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 84495e9:	08 
 84495ea:	89 04 24             	mov    %eax,(%esp)
 84495ed:	e8 94 64 e4 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 84495f2:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84495f9:	00 
 84495fa:	89 44 24 04          	mov    %eax,0x4(%esp)
 84495fe:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8449601:	89 04 24             	mov    %eax,(%esp)
 8449604:	e8 1d f6 c7 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8449609:	8d 45 f0             	lea    -0x10(%ebp),%eax
 844960c:	89 04 24             	mov    %eax,(%esp)
 844960f:	e8 32 f6 c7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8449614:	c7 44 24 04 14 03 00 	movl   $0x314,0x4(%esp)
 844961b:	00 
 844961c:	89 04 24             	mov    %eax,(%esp)
 844961f:	e8 32 f6 c7 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8449624:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8449627:	89 04 24             	mov    %eax,(%esp)
 844962a:	e8 17 f6 c7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 844962f:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8449636:	ff 
 8449637:	89 04 24             	mov    %eax,(%esp)
 844963a:	e8 17 f6 c7 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 844963f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8449642:	89 04 24             	mov    %eax,(%esp)
 8449645:	e8 fc f5 c7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 844964a:	8b 55 08             	mov    0x8(%ebp),%edx
 844964d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8449651:	89 04 24             	mov    %eax,(%esp)
 8449654:	e8 39 8c c9 ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 8449659:	8d 45 f0             	lea    -0x10(%ebp),%eax
 844965c:	89 04 24             	mov    %eax,(%esp)
 844965f:	e8 e2 f5 c7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8449664:	8b 55 0c             	mov    0xc(%ebp),%edx
 8449667:	89 54 24 04          	mov    %edx,0x4(%esp)
 844966b:	89 04 24             	mov    %eax,(%esp)
 844966e:	e8 1f 8c c9 ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 8449673:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8449676:	89 04 24             	mov    %eax,(%esp)
 8449679:	e8 c8 f5 c7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 844967e:	8b 55 10             	mov    0x10(%ebp),%edx
 8449681:	89 54 24 04          	mov    %edx,0x4(%esp)
 8449685:	89 04 24             	mov    %eax,(%esp)
 8449688:	e8 c9 f5 c7 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 844968d:	0f bf 5d e4          	movswl -0x1c(%ebp),%ebx
 8449691:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8449694:	89 04 24             	mov    %eax,(%esp)
 8449697:	e8 aa f5 c7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 844969c:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84496a0:	89 04 24             	mov    %eax,(%esp)
 84496a3:	e8 be 16 de ff       	call   822ad66 <_ZN12CStreamGuardlsEs>
 84496a8:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 84496ad:	8d 55 f0             	lea    -0x10(%ebp),%edx
 84496b0:	89 54 24 08          	mov    %edx,0x8(%esp)
 84496b4:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84496bb:	00 
 84496bc:	89 04 24             	mov    %eax,(%esp)
 84496bf:	e8 1a 79 12 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 84496c4:	eb 1b                	jmp    84496e1 <_ZN32DB_EventUpdateGrowthWeaponCharac11makeRequestEjjis+0x11b>
 84496c6:	89 d3                	mov    %edx,%ebx
 84496c8:	89 c6                	mov    %eax,%esi
 84496ca:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84496cd:	89 04 24             	mov    %eax,(%esp)
 84496d0:	e8 fd 31 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84496d5:	89 f0                	mov    %esi,%eax
 84496d7:	89 da                	mov    %ebx,%edx
 84496d9:	89 04 24             	mov    %eax,(%esp)
 84496dc:	e8 6f a0 69 00       	call   8ae3750 <_Unwind_Resume>
 84496e1:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84496e4:	89 04 24             	mov    %eax,(%esp)
 84496e7:	e8 e6 31 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84496ec:	83 c4 30             	add    $0x30,%esp
 84496ef:	5b                   	pop    %ebx
 84496f0:	5e                   	pop    %esi
 84496f1:	5d                   	pop    %ebp
 84496f2:	c3                   	ret
 84496f3:	90                   	nop

```

```c
// DB_EventUpdateGrowthWeaponCharac::makeRequest @ 0x84495c6

/* DB_EventUpdateGrowthWeaponCharac::makeRequest(unsigned int, unsigned int, int, short) */

void DB_EventUpdateGrowthWeaponCharac::makeRequest
               (uint param_1,uint param_2,int param_3,short param_4)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xb914);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0844961f to 084496c3 has its CatchHandler @ 084496c6 */
  CStreamGuard::operator<<(pCVar2,0x314);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_3);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_4);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}

```

