# DB_CountOfHumanCertify

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 084282a0 DB_CountOfHumanCertify::dispatch  [0x084282a0-0x84283c9] ===
 84282a0:	55                   	push   %ebp
 84282a1:	89 e5                	mov    %esp,%ebp
 84282a3:	83 ec 38             	sub    $0x38,%esp
 84282a6:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 84282ab:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84282b2:	00 
 84282b3:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 84282ba:	00 
 84282bb:	89 04 24             	mov    %eax,(%esp)
 84282be:	e8 7b cf fc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 84282c3:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84282c6:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84282c9:	89 44 24 04          	mov    %eax,0x4(%esp)
 84282cd:	8b 45 14             	mov    0x14(%ebp),%eax
 84282d0:	89 04 24             	mov    %eax,(%esp)
 84282d3:	e8 be 44 1f 00       	call   861c796 <_ZN6StreamrsERj>
 84282d8:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84282db:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84282e2:	00 
 84282e3:	89 04 24             	mov    %eax,(%esp)
 84282e6:	e8 60 0d ce ff       	call   810904b <_Z14NumberToStringji>
 84282eb:	89 44 24 08          	mov    %eax,0x8(%esp)
 84282ef:	c7 44 24 04 b4 ee c4 	movl   $0x8c4eeb4,0x4(%esp)
 84282f6:	08 
 84282f7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84282fa:	89 04 24             	mov    %eax,(%esp)
 84282fd:	e8 be be fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8428302:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8428309:	00 
 842830a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842830d:	89 04 24             	mov    %eax,(%esp)
 8428310:	e8 11 c0 fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 8428315:	83 f0 01             	xor    $0x1,%eax
 8428318:	84 c0                	test   %al,%al
 842831a:	75 11                	jne    842832d <_ZN22DB_CountOfHumanCertify8dispatchEiiP6Stream+0x8d>
 842831c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842831f:	89 04 24             	mov    %eax,(%esp)
 8428322:	e8 e9 bf fc ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 8428327:	09 d0                	or     %edx,%eax
 8428329:	85 c0                	test   %eax,%eax
 842832b:	75 07                	jne    8428334 <_ZN22DB_CountOfHumanCertify8dispatchEiiP6Stream+0x94>
 842832d:	b8 01 00 00 00       	mov    $0x1,%eax
 8428332:	eb 05                	jmp    8428339 <_ZN22DB_CountOfHumanCertify8dispatchEiiP6Stream+0x99>
 8428334:	b8 00 00 00 00       	mov    $0x0,%eax
 8428339:	84 c0                	test   %al,%al
 842833b:	0f 84 81 00 00 00    	je     84283c2 <_ZN22DB_CountOfHumanCertify8dispatchEiiP6Stream+0x122>
 8428341:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8428344:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 842834b:	00 
 842834c:	89 04 24             	mov    %eax,(%esp)
 842834f:	e8 f7 0c ce ff       	call   810904b <_Z14NumberToStringji>
 8428354:	89 44 24 08          	mov    %eax,0x8(%esp)
 8428358:	c7 44 24 04 fc ee c4 	movl   $0x8c4eefc,0x4(%esp)
 842835f:	08 
 8428360:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8428363:	89 04 24             	mov    %eax,(%esp)
 8428366:	e8 55 be fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 842836b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8428372:	00 
 8428373:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8428376:	89 04 24             	mov    %eax,(%esp)
 8428379:	e8 a8 bf fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 842837e:	83 f0 01             	xor    $0x1,%eax
 8428381:	84 c0                	test   %al,%al
 8428383:	74 3d                	je     84283c2 <_ZN22DB_CountOfHumanCertify8dispatchEiiP6Stream+0x122>
 8428385:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 842838c:	00 
 842838d:	c7 44 24 08 cd 69 00 	movl   $0x69cd,0x8(%esp)
 8428394:	00 
 8428395:	c7 44 24 04 20 c4 c5 	movl   $0x8c5c420,0x4(%esp)
 842839c:	08 
 842839d:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84283a0:	89 04 24             	mov    %eax,(%esp)
 84283a3:	e8 70 73 12 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84283a8:	c7 44 24 04 3c ef c4 	movl   $0x8c4ef3c,0x4(%esp)
 84283af:	08 
 84283b0:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84283b3:	89 04 24             	mov    %eax,(%esp)
 84283b6:	e8 cd 73 12 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84283bb:	b8 00 00 00 00       	mov    $0x0,%eax
 84283c0:	eb 05                	jmp    84283c7 <_ZN22DB_CountOfHumanCertify8dispatchEiiP6Stream+0x127>
 84283c2:	b8 01 00 00 00       	mov    $0x1,%eax
 84283c7:	c9                   	leave
 84283c8:	c3                   	ret
 84283c9:	90                   	nop

```

```c
// DB_CountOfHumanCertify::dispatch @ 0x84282a0

/* DB_CountOfHumanCertify::dispatch(int, int, Stream*) */

undefined4 DB_CountOfHumanCertify::dispatch(int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  Stream *in_stack_00000010;
  uint local_24;
  cMyTrace local_20 [16];
  MySQL *local_10;
  
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  Stream::operator>>(in_stack_00000010,&local_24);
  uVar3 = NumberToString(local_24,0);
  MySQL::set_query(local_10,"upDate human_certify_try_count set count = count + 1 where m_id = %s",
                   uVar3);
  cVar2 = MySQL::exec(local_10,true);
  if ((cVar2 == '\x01') && (lVar4 = MySQL::getAffectedRowCount(local_10), lVar4 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    uVar3 = NumberToString(local_24,0);
    MySQL::set_query(local_10,"inSert into human_certify_try_count(m_id, count) values(%s, 1)",uVar3
                    );
    cVar2 = MySQL::exec(local_10,true);
    if (cVar2 != '\x01') {
      cMyTrace::cMyTrace(local_20,"virtual bool DB_CountOfHumanCertify::dispatch(int, int, Stream*)"
                         ,0x69cd,5);
      cMyTrace::operator()(local_20,"Update and Insert into HumanCertifyCount failed");
      return 0;
    }
  }
  return 1;
}

```

---

## makeRequest

```asm
// === 084283ca DB_CountOfHumanCertify::makeRequest  [0x084283ca-0x84284a1] ===
 84283ca:	55                   	push   %ebp
 84283cb:	89 e5                	mov    %esp,%ebp
 84283cd:	56                   	push   %esi
 84283ce:	53                   	push   %ebx
 84283cf:	83 ec 20             	sub    $0x20,%esp
 84283d2:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 84283d7:	c7 44 24 08 d6 69 00 	movl   $0x69d6,0x8(%esp)
 84283de:	00 
 84283df:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 84283e6:	08 
 84283e7:	89 04 24             	mov    %eax,(%esp)
 84283ea:	e8 97 76 e6 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 84283ef:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84283f6:	00 
 84283f7:	89 44 24 04          	mov    %eax,0x4(%esp)
 84283fb:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84283fe:	89 04 24             	mov    %eax,(%esp)
 8428401:	e8 20 08 ca ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8428406:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8428409:	89 04 24             	mov    %eax,(%esp)
 842840c:	e8 35 08 ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8428411:	c7 44 24 04 11 01 00 	movl   $0x111,0x4(%esp)
 8428418:	00 
 8428419:	89 04 24             	mov    %eax,(%esp)
 842841c:	e8 35 08 ca ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8428421:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8428424:	89 04 24             	mov    %eax,(%esp)
 8428427:	e8 1a 08 ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 842842c:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8428433:	ff 
 8428434:	89 04 24             	mov    %eax,(%esp)
 8428437:	e8 1a 08 ca ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 842843c:	8d 45 f0             	lea    -0x10(%ebp),%eax
 842843f:	89 04 24             	mov    %eax,(%esp)
 8428442:	e8 ff 07 ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8428447:	8b 55 08             	mov    0x8(%ebp),%edx
 842844a:	89 54 24 04          	mov    %edx,0x4(%esp)
 842844e:	89 04 24             	mov    %eax,(%esp)
 8428451:	e8 3c 9e cb ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 8428456:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 842845b:	8d 55 f0             	lea    -0x10(%ebp),%edx
 842845e:	89 54 24 08          	mov    %edx,0x8(%esp)
 8428462:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8428469:	00 
 842846a:	89 04 24             	mov    %eax,(%esp)
 842846d:	e8 6c 8b 14 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8428472:	eb 1b                	jmp    842848f <_ZN22DB_CountOfHumanCertify11makeRequestEj+0xc5>
 8428474:	89 d3                	mov    %edx,%ebx
 8428476:	89 c6                	mov    %eax,%esi
 8428478:	8d 45 f0             	lea    -0x10(%ebp),%eax
 842847b:	89 04 24             	mov    %eax,(%esp)
 842847e:	e8 4f 44 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8428483:	89 f0                	mov    %esi,%eax
 8428485:	89 da                	mov    %ebx,%edx
 8428487:	89 04 24             	mov    %eax,(%esp)
 842848a:	e8 c1 b2 6b 00       	call   8ae3750 <_Unwind_Resume>
 842848f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8428492:	89 04 24             	mov    %eax,(%esp)
 8428495:	e8 38 44 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 842849a:	83 c4 20             	add    $0x20,%esp
 842849d:	5b                   	pop    %ebx
 842849e:	5e                   	pop    %esi
 842849f:	5d                   	pop    %ebp
 84284a0:	c3                   	ret
 84284a1:	90                   	nop

```

```c
// DB_CountOfHumanCertify::makeRequest @ 0x84283ca

/* DB_CountOfHumanCertify::makeRequest(unsigned int) */

void DB_CountOfHumanCertify::makeRequest(uint param_1)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x69d6);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0842841c to 08428471 has its CatchHandler @ 08428474 */
  CStreamGuard::operator<<(pCVar2,0x111);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}

```

