# DB_SecurityCardAddCertCnt

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 0843630e DB_SecurityCardAddCertCnt::dispatch  [0x0843630e-0x8436387] ===
 843630e:	55                   	push   %ebp
 843630f:	89 e5                	mov    %esp,%ebp
 8436311:	83 ec 28             	sub    $0x28,%esp
 8436314:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8436319:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8436320:	00 
 8436321:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 8436328:	00 
 8436329:	89 04 24             	mov    %eax,(%esp)
 843632c:	e8 0d ef fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8436331:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8436334:	8b 45 14             	mov    0x14(%ebp),%eax
 8436337:	89 04 24             	mov    %eax,(%esp)
 843633a:	e8 9b cf 01 00       	call   84532da <_ZN6Stream12GetOutBufferI30SIG_SECURITY_CARD_ADD_CERT_CNTEEPT_v>
 843633f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8436342:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8436345:	8b 00                	mov    (%eax),%eax
 8436347:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 843634e:	00 
 843634f:	89 04 24             	mov    %eax,(%esp)
 8436352:	e8 f4 2c cd ff       	call   810904b <_Z14NumberToStringji>
 8436357:	89 44 24 08          	mov    %eax,0x8(%esp)
 843635b:	c7 44 24 04 fc 34 c5 	movl   $0x8c534fc,0x4(%esp)
 8436362:	08 
 8436363:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8436366:	89 04 24             	mov    %eax,(%esp)
 8436369:	e8 52 de fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 843636e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8436375:	00 
 8436376:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8436379:	89 04 24             	mov    %eax,(%esp)
 843637c:	e8 a5 df fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 8436381:	b8 01 00 00 00       	mov    $0x1,%eax
 8436386:	c9                   	leave
 8436387:	c3                   	ret

```

```c
// DB_SecurityCardAddCertCnt::dispatch @ 0x843630e

/* DB_SecurityCardAddCertCnt::dispatch(int, int, Stream*) */

undefined4 DB_SecurityCardAddCertCnt::dispatch(int param_1,int param_2,Stream *param_3)

{
  MySQL *this;
  SIG_SECURITY_CARD_ADD_CERT_CNT *pSVar1;
  undefined4 uVar2;
  Stream *in_stack_00000010;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  pSVar1 = Stream::GetOutBuffer<SIG_SECURITY_CARD_ADD_CERT_CNT>(in_stack_00000010);
  uVar2 = NumberToString(*(uint *)pSVar1,0);
  MySQL::set_query(this,
                   "upDate member_security_card set cert_cnt = cert_cnt+1  where m_id=%s and apply_flag=1"
                   ,uVar2);
  MySQL::exec(this,true);
  return 1;
}

```

---

## makeRequest

```asm
// === 08436388 DB_SecurityCardAddCertCnt::makeRequest  [0x08436388-0x8436463] ===
 8436388:	55                   	push   %ebp
 8436389:	89 e5                	mov    %esp,%ebp
 843638b:	56                   	push   %esi
 843638c:	53                   	push   %ebx
 843638d:	83 ec 20             	sub    $0x20,%esp
 8436390:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8436395:	c7 44 24 08 99 81 00 	movl   $0x8199,0x8(%esp)
 843639c:	00 
 843639d:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 84363a4:	08 
 84363a5:	89 04 24             	mov    %eax,(%esp)
 84363a8:	e8 d9 96 e5 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 84363ad:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84363b4:	00 
 84363b5:	89 44 24 04          	mov    %eax,0x4(%esp)
 84363b9:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84363bc:	89 04 24             	mov    %eax,(%esp)
 84363bf:	e8 62 28 c9 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 84363c4:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84363c7:	89 04 24             	mov    %eax,(%esp)
 84363ca:	e8 77 28 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84363cf:	c7 44 24 04 7c 01 00 	movl   $0x17c,0x4(%esp)
 84363d6:	00 
 84363d7:	89 04 24             	mov    %eax,(%esp)
 84363da:	e8 77 28 c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84363df:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84363e2:	89 04 24             	mov    %eax,(%esp)
 84363e5:	e8 5c 28 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84363ea:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84363f1:	ff 
 84363f2:	89 04 24             	mov    %eax,(%esp)
 84363f5:	e8 5c 28 c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84363fa:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84363fd:	89 04 24             	mov    %eax,(%esp)
 8436400:	e8 49 28 c9 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8436405:	89 04 24             	mov    %eax,(%esp)
 8436408:	e8 21 cf 01 00       	call   845332e <_ZN12CStreamGuard11GetInBufferI30SIG_SECURITY_CARD_ADD_CERT_CNTEEPT_v>
 843640d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8436410:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8436413:	8b 55 08             	mov    0x8(%ebp),%edx
 8436416:	89 10                	mov    %edx,(%eax)
 8436418:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 843641d:	8d 55 ec             	lea    -0x14(%ebp),%edx
 8436420:	89 54 24 08          	mov    %edx,0x8(%esp)
 8436424:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 843642b:	00 
 843642c:	89 04 24             	mov    %eax,(%esp)
 843642f:	e8 aa ab 13 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8436434:	eb 1b                	jmp    8436451 <_ZN25DB_SecurityCardAddCertCnt11makeRequestEj+0xc9>
 8436436:	89 d3                	mov    %edx,%ebx
 8436438:	89 c6                	mov    %eax,%esi
 843643a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 843643d:	89 04 24             	mov    %eax,(%esp)
 8436440:	e8 8d 64 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8436445:	89 f0                	mov    %esi,%eax
 8436447:	89 da                	mov    %ebx,%edx
 8436449:	89 04 24             	mov    %eax,(%esp)
 843644c:	e8 ff d2 6a 00       	call   8ae3750 <_Unwind_Resume>
 8436451:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8436454:	89 04 24             	mov    %eax,(%esp)
 8436457:	e8 76 64 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 843645c:	83 c4 20             	add    $0x20,%esp
 843645f:	5b                   	pop    %ebx
 8436460:	5e                   	pop    %esi
 8436461:	5d                   	pop    %ebp
 8436462:	c3                   	ret
 8436463:	90                   	nop

```

```c
// DB_SecurityCardAddCertCnt::makeRequest @ 0x8436388

/* DB_SecurityCardAddCertCnt::makeRequest(unsigned int) */

void DB_SecurityCardAddCertCnt::makeRequest(uint param_1)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_SECURITY_CARD_ADD_CERT_CNT *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x8199);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 084363da to 08436433 has its CatchHandler @ 08436436 */
  CStreamGuard::operator<<(pCVar2,0x17c);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_SECURITY_CARD_ADD_CERT_CNT>(pCVar2);
  *(uint *)local_10 = param_1;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}

```

