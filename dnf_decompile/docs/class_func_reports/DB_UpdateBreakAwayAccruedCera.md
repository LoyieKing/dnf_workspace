# DB_UpdateBreakAwayAccruedCera

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 0843865c DB_UpdateBreakAwayAccruedCera::dispatch  [0x0843865c-0x8438739] ===
 843865c:	55                   	push   %ebp
 843865d:	89 e5                	mov    %esp,%ebp
 843865f:	83 ec 38             	sub    $0x38,%esp
 8438662:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8438667:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 843866e:	00 
 843866f:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 8438676:	00 
 8438677:	89 04 24             	mov    %eax,(%esp)
 843867a:	e8 bf cb fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 843867f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8438682:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8438689:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8438690:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8438693:	89 44 24 04          	mov    %eax,0x4(%esp)
 8438697:	8b 45 14             	mov    0x14(%ebp),%eax
 843869a:	89 04 24             	mov    %eax,(%esp)
 843869d:	e8 f4 40 1e 00       	call   861c796 <_ZN6StreamrsERj>
 84386a2:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84386a5:	89 44 24 04          	mov    %eax,0x4(%esp)
 84386a9:	8b 45 14             	mov    0x14(%ebp),%eax
 84386ac:	89 04 24             	mov    %eax,(%esp)
 84386af:	e8 e2 40 1e 00       	call   861c796 <_ZN6StreamrsERj>
 84386b4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84386b7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84386be:	00 
 84386bf:	89 04 24             	mov    %eax,(%esp)
 84386c2:	e8 84 09 cd ff       	call   810904b <_Z14NumberToStringji>
 84386c7:	8b 55 ec             	mov    -0x14(%ebp),%edx
 84386ca:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84386ce:	89 54 24 08          	mov    %edx,0x8(%esp)
 84386d2:	c7 44 24 04 a0 42 c5 	movl   $0x8c542a0,0x4(%esp)
 84386d9:	08 
 84386da:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84386dd:	89 04 24             	mov    %eax,(%esp)
 84386e0:	e8 db ba fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84386e5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84386ec:	00 
 84386ed:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84386f0:	89 04 24             	mov    %eax,(%esp)
 84386f3:	e8 2e bc fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 84386f8:	83 f0 01             	xor    $0x1,%eax
 84386fb:	84 c0                	test   %al,%al
 84386fd:	74 33                	je     8438732 <_ZN29DB_UpdateBreakAwayAccruedCera8dispatchEiiP6Stream+0xd6>
 84386ff:	c7 44 24 10 e8 42 c5 	movl   $0x8c542e8,0x10(%esp)
 8438706:	08 
 8438707:	c7 44 24 0c 19 86 00 	movl   $0x8619,0xc(%esp)
 843870e:	00 
 843870f:	c7 44 24 08 20 bc c5 	movl   $0x8c5bc20,0x8(%esp)
 8438716:	08 
 8438717:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 843871e:	08 
 843871f:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8438726:	e8 df b4 69 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 843872b:	b8 00 00 00 00       	mov    $0x0,%eax
 8438730:	eb 05                	jmp    8438737 <_ZN29DB_UpdateBreakAwayAccruedCera8dispatchEiiP6Stream+0xdb>
 8438732:	b8 01 00 00 00       	mov    $0x1,%eax
 8438737:	c9                   	leave
 8438738:	c3                   	ret
 8438739:	90                   	nop

```

```c
// DB_UpdateBreakAwayAccruedCera::dispatch @ 0x843865c

/* DB_UpdateBreakAwayAccruedCera::dispatch(int, int, Stream*) */

bool DB_UpdateBreakAwayAccruedCera::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  Stream *in_stack_00000010;
  uint local_18;
  uint local_14;
  MySQL *local_10;
  
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  local_14 = 0;
  local_18 = 0;
  Stream::operator>>(in_stack_00000010,&local_14);
  Stream::operator>>(in_stack_00000010,&local_18);
  uVar2 = NumberToString(local_14,0);
  MySQL::set_query(local_10,"upDate churn_member_info set accrue_cera= accrue_cera+%u where m_id=%s"
                   ,local_18,uVar2);
  cVar1 = MySQL::exec(local_10,true);
  if (cVar1 != '\x01') {
    LogManager::logFormat
              (1,"DBThread.cpp",
               "virtual bool DB_UpdateBreakAwayAccruedCera::dispatch(int, int, Stream*)",0x8619,
               "BREAK_AWAY : UPDATE CERA ERROR!!");
  }
  return cVar1 == '\x01';
}

```

---

## makeRequest

```asm
// === 0843856a DB_UpdateBreakAwayAccruedCera::makeRequest  [0x0843856a-0x843865b] ===
 843856a:	55                   	push   %ebp
 843856b:	89 e5                	mov    %esp,%ebp
 843856d:	56                   	push   %esi
 843856e:	53                   	push   %ebx
 843856f:	83 ec 20             	sub    $0x20,%esp
 8438572:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8438577:	c7 44 24 08 fe 85 00 	movl   $0x85fe,0x8(%esp)
 843857e:	00 
 843857f:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8438586:	08 
 8438587:	89 04 24             	mov    %eax,(%esp)
 843858a:	e8 f7 74 e5 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 843858f:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8438596:	00 
 8438597:	89 44 24 04          	mov    %eax,0x4(%esp)
 843859b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843859e:	89 04 24             	mov    %eax,(%esp)
 84385a1:	e8 80 06 c9 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 84385a6:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84385a9:	89 04 24             	mov    %eax,(%esp)
 84385ac:	e8 95 06 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84385b1:	c7 44 24 04 46 01 00 	movl   $0x146,0x4(%esp)
 84385b8:	00 
 84385b9:	89 04 24             	mov    %eax,(%esp)
 84385bc:	e8 95 06 c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84385c1:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84385c4:	89 04 24             	mov    %eax,(%esp)
 84385c7:	e8 7a 06 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84385cc:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84385d3:	ff 
 84385d4:	89 04 24             	mov    %eax,(%esp)
 84385d7:	e8 7a 06 c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84385dc:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84385df:	89 04 24             	mov    %eax,(%esp)
 84385e2:	e8 5f 06 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84385e7:	8b 55 08             	mov    0x8(%ebp),%edx
 84385ea:	89 54 24 04          	mov    %edx,0x4(%esp)
 84385ee:	89 04 24             	mov    %eax,(%esp)
 84385f1:	e8 9c 9c ca ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 84385f6:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84385f9:	89 04 24             	mov    %eax,(%esp)
 84385fc:	e8 45 06 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8438601:	8b 55 0c             	mov    0xc(%ebp),%edx
 8438604:	89 54 24 04          	mov    %edx,0x4(%esp)
 8438608:	89 04 24             	mov    %eax,(%esp)
 843860b:	e8 82 9c ca ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 8438610:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8438615:	8d 55 f0             	lea    -0x10(%ebp),%edx
 8438618:	89 54 24 08          	mov    %edx,0x8(%esp)
 843861c:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8438623:	00 
 8438624:	89 04 24             	mov    %eax,(%esp)
 8438627:	e8 b2 89 13 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 843862c:	eb 1b                	jmp    8438649 <_ZN29DB_UpdateBreakAwayAccruedCera11makeRequestEjj+0xdf>
 843862e:	89 d3                	mov    %edx,%ebx
 8438630:	89 c6                	mov    %eax,%esi
 8438632:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8438635:	89 04 24             	mov    %eax,(%esp)
 8438638:	e8 95 42 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 843863d:	89 f0                	mov    %esi,%eax
 843863f:	89 da                	mov    %ebx,%edx
 8438641:	89 04 24             	mov    %eax,(%esp)
 8438644:	e8 07 b1 6a 00       	call   8ae3750 <_Unwind_Resume>
 8438649:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843864c:	89 04 24             	mov    %eax,(%esp)
 843864f:	e8 7e 42 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8438654:	83 c4 20             	add    $0x20,%esp
 8438657:	5b                   	pop    %ebx
 8438658:	5e                   	pop    %esi
 8438659:	5d                   	pop    %ebp
 843865a:	c3                   	ret
 843865b:	90                   	nop

```

```c
// DB_UpdateBreakAwayAccruedCera::makeRequest @ 0x843856a

/* DB_UpdateBreakAwayAccruedCera::makeRequest(unsigned int, unsigned int) */

void DB_UpdateBreakAwayAccruedCera::makeRequest(uint param_1,uint param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x85fe);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 084385bc to 0843862b has its CatchHandler @ 0843862e */
  CStreamGuard::operator<<(pCVar2,0x146);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}

```

