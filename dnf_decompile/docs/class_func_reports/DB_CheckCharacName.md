# DB_CheckCharacName

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 0844317e DB_CheckCharacName::dispatch  [0x0844317e-0x8443351] ===
 844317e:	55                   	push   %ebp
 844317f:	89 e5                	mov    %esp,%ebp
 8443181:	56                   	push   %esi
 8443182:	53                   	push   %ebx
 8443183:	83 ec 30             	sub    $0x30,%esp
 8443186:	8b 45 14             	mov    0x14(%ebp),%eax
 8443189:	89 04 24             	mov    %eax,(%esp)
 844318c:	e8 f7 0c 01 00       	call   8453e88 <_ZN6Stream12GetOutBufferI21SIG_CHECK_CHARAC_NAMEEEPT_v>
 8443191:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8443194:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 844319b:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 84431a0:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84431a7:	00 
 84431a8:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84431af:	00 
 84431b0:	89 04 24             	mov    %eax,(%esp)
 84431b3:	e8 86 20 fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 84431b8:	89 45 ec             	mov    %eax,-0x14(%ebp)
 84431bb:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84431be:	83 c0 04             	add    $0x4,%eax
 84431c1:	89 44 24 08          	mov    %eax,0x8(%esp)
 84431c5:	c7 44 24 04 50 38 c5 	movl   $0x8c53850,0x4(%esp)
 84431cc:	08 
 84431cd:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84431d0:	89 04 24             	mov    %eax,(%esp)
 84431d3:	e8 e8 0f fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84431d8:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
 84431dc:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84431e3:	00 
 84431e4:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84431e7:	89 04 24             	mov    %eax,(%esp)
 84431ea:	e8 37 11 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 84431ef:	83 f0 01             	xor    $0x1,%eax
 84431f2:	84 c0                	test   %al,%al
 84431f4:	74 0a                	je     8443200 <_ZN18DB_CheckCharacName8dispatchEiiP6Stream+0x82>
 84431f6:	bb 00 00 00 00       	mov    $0x0,%ebx
 84431fb:	e9 49 01 00 00       	jmp    8443349 <_ZN18DB_CheckCharacName8dispatchEiiP6Stream+0x1cb>
 8443200:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8443203:	89 04 24             	mov    %eax,(%esp)
 8443206:	e8 61 f1 c9 ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 844320b:	85 c0                	test   %eax,%eax
 844320d:	0f 95 c0             	setne  %al
 8443210:	84 c0                	test   %al,%al
 8443212:	74 57                	je     844326b <_ZN18DB_CheckCharacName8dispatchEiiP6Stream+0xed>
 8443214:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8443217:	89 04 24             	mov    %eax,(%esp)
 844321a:	e8 9d 12 fb ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 844321f:	83 f0 01             	xor    $0x1,%eax
 8443222:	84 c0                	test   %al,%al
 8443224:	74 0a                	je     8443230 <_ZN18DB_CheckCharacName8dispatchEiiP6Stream+0xb2>
 8443226:	bb 00 00 00 00       	mov    $0x0,%ebx
 844322b:	e9 19 01 00 00       	jmp    8443349 <_ZN18DB_CheckCharacName8dispatchEiiP6Stream+0x1cb>
 8443230:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8443233:	89 44 24 08          	mov    %eax,0x8(%esp)
 8443237:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 844323e:	00 
 844323f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8443242:	89 04 24             	mov    %eax,(%esp)
 8443245:	e8 64 f0 c9 ff       	call   80e22ae <_ZN5MySQL7get_intEiRj>
 844324a:	83 f0 01             	xor    $0x1,%eax
 844324d:	84 c0                	test   %al,%al
 844324f:	74 0a                	je     844325b <_ZN18DB_CheckCharacName8dispatchEiiP6Stream+0xdd>
 8443251:	bb 00 00 00 00       	mov    $0x0,%ebx
 8443256:	e9 ee 00 00 00       	jmp    8443349 <_ZN18DB_CheckCharacName8dispatchEiiP6Stream+0x1cb>
 844325b:	8b 45 e8             	mov    -0x18(%ebp),%eax
 844325e:	8b 10                	mov    (%eax),%edx
 8443260:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8443263:	39 c2                	cmp    %eax,%edx
 8443265:	75 04                	jne    844326b <_ZN18DB_CheckCharacName8dispatchEiiP6Stream+0xed>
 8443267:	c6 45 f3 01          	movb   $0x1,-0xd(%ebp)
 844326b:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8443270:	c7 44 24 08 ec a4 00 	movl   $0xa4ec,0x8(%esp)
 8443277:	00 
 8443278:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 844327f:	08 
 8443280:	89 04 24             	mov    %eax,(%esp)
 8443283:	e8 fe c7 e4 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8443288:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 844328f:	00 
 8443290:	89 44 24 04          	mov    %eax,0x4(%esp)
 8443294:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8443297:	89 04 24             	mov    %eax,(%esp)
 844329a:	e8 87 59 c8 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 844329f:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84432a2:	89 04 24             	mov    %eax,(%esp)
 84432a5:	e8 9c 59 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84432aa:	c7 44 24 04 a3 02 00 	movl   $0x2a3,0x4(%esp)
 84432b1:	00 
 84432b2:	89 04 24             	mov    %eax,(%esp)
 84432b5:	e8 9c 59 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84432ba:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84432bd:	89 04 24             	mov    %eax,(%esp)
 84432c0:	e8 81 59 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84432c5:	8b 55 10             	mov    0x10(%ebp),%edx
 84432c8:	89 54 24 04          	mov    %edx,0x4(%esp)
 84432cc:	89 04 24             	mov    %eax,(%esp)
 84432cf:	e8 82 59 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84432d4:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84432d7:	89 04 24             	mov    %eax,(%esp)
 84432da:	e8 6f 59 c8 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 84432df:	89 04 24             	mov    %eax,(%esp)
 84432e2:	e8 f5 0b 01 00       	call   8453edc <_ZN12CStreamGuard11GetInBufferI30SIG_GOLD_CONTROL_EXCEPTION_MIDEEPT_v>
 84432e7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84432ea:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84432ed:	0f b6 55 f3          	movzbl -0xd(%ebp),%edx
 84432f1:	88 10                	mov    %dl,(%eax)
 84432f3:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84432f6:	0f b6 50 22          	movzbl 0x22(%eax),%edx
 84432fa:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84432fd:	88 50 01             	mov    %dl,0x1(%eax)
 8443300:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8443305:	8d 55 dc             	lea    -0x24(%ebp),%edx
 8443308:	89 54 24 08          	mov    %edx,0x8(%esp)
 844330c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8443313:	00 
 8443314:	89 04 24             	mov    %eax,(%esp)
 8443317:	e8 c2 dc 12 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 844331c:	bb 01 00 00 00       	mov    $0x1,%ebx
 8443321:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8443324:	89 04 24             	mov    %eax,(%esp)
 8443327:	e8 a6 95 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 844332c:	eb 1b                	jmp    8443349 <_ZN18DB_CheckCharacName8dispatchEiiP6Stream+0x1cb>
 844332e:	89 d3                	mov    %edx,%ebx
 8443330:	89 c6                	mov    %eax,%esi
 8443332:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8443335:	89 04 24             	mov    %eax,(%esp)
 8443338:	e8 95 95 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 844333d:	89 f0                	mov    %esi,%eax
 844333f:	89 da                	mov    %ebx,%edx
 8443341:	89 04 24             	mov    %eax,(%esp)
 8443344:	e8 07 04 6a 00       	call   8ae3750 <_Unwind_Resume>
 8443349:	89 d8                	mov    %ebx,%eax
 844334b:	83 c4 30             	add    $0x30,%esp
 844334e:	5b                   	pop    %ebx
 844334f:	5e                   	pop    %esi
 8443350:	5d                   	pop    %ebp
 8443351:	c3                   	ret

```

```c
// DB_CheckCharacName::dispatch @ 0x844317e

/* DB_CheckCharacName::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_CheckCharacName::dispatch(DB_CheckCharacName *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  int iVar2;
  Stream *pSVar3;
  CStreamGuard *pCVar4;
  CStreamGuard local_28 [8];
  uint local_20;
  SIG_CHECK_CHARAC_NAME *local_1c;
  MySQL *local_18;
  SIG_GOLD_CONTROL_EXCEPTION_MID local_11;
  SIG_GOLD_CONTROL_EXCEPTION_MID *local_10;
  
  local_1c = Stream::GetOutBuffer<SIG_CHECK_CHARAC_NAME>(param_3);
  local_20 = 0;
  local_18 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  MySQL::set_query(local_18,"seLect m_id from charac_info where charac_name=\'%s\' limit 1",
                   local_1c + 4);
  local_11 = (SIG_GOLD_CONTROL_EXCEPTION_MID)0x0;
  cVar1 = MySQL::exec(local_18,true);
  if (cVar1 != '\x01') {
    return 0;
  }
  iVar2 = MySQL::get_n_rows(local_18);
  if (iVar2 != 0) {
    cVar1 = MySQL::fetch(local_18);
    if (cVar1 != '\x01') {
      return 0;
    }
    cVar1 = MySQL::get_int(local_18,0,&local_20);
    if (cVar1 != '\x01') {
      return 0;
    }
    if (*(uint *)local_1c == local_20) {
      local_11 = (SIG_GOLD_CONTROL_EXCEPTION_MID)0x1;
    }
  }
  pSVar3 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xa4ec);
  CStreamGuard::CStreamGuard(local_28,pSVar3,true);
  pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_28);
                    /* try { // try from 084432b5 to 0844331b has its CatchHandler @ 0844332e */
  CStreamGuard::operator<<(pCVar4,0x2a3);
  pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_28);
  CStreamGuard::operator<<(pCVar4,param_2);
  pCVar4 = (CStreamGuard *)CStreamGuard::operator->(local_28);
  local_10 = CStreamGuard::GetInBuffer<SIG_GOLD_CONTROL_EXCEPTION_MID>(pCVar4);
  *local_10 = local_11;
  *(SIG_CHECK_CHARAC_NAME *)(local_10 + 1) = local_1c[0x22];
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_28);
  CStreamGuard::~CStreamGuard(local_28);
  return 1;
}

```

---

## makeRequest

```asm
// === 08443352 DB_CheckCharacName::makeRequest  [0x08443352-0x8443469] ===
 8443352:	55                   	push   %ebp
 8443353:	89 e5                	mov    %esp,%ebp
 8443355:	56                   	push   %esi
 8443356:	53                   	push   %ebx
 8443357:	83 ec 30             	sub    $0x30,%esp
 844335a:	8b 45 14             	mov    0x14(%ebp),%eax
 844335d:	88 45 e4             	mov    %al,-0x1c(%ebp)
 8443360:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8443365:	c7 44 24 08 f9 a4 00 	movl   $0xa4f9,0x8(%esp)
 844336c:	00 
 844336d:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8443374:	08 
 8443375:	89 04 24             	mov    %eax,(%esp)
 8443378:	e8 09 c7 e4 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 844337d:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8443384:	00 
 8443385:	89 44 24 04          	mov    %eax,0x4(%esp)
 8443389:	8d 45 ec             	lea    -0x14(%ebp),%eax
 844338c:	89 04 24             	mov    %eax,(%esp)
 844338f:	e8 92 58 c8 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8443394:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8443397:	89 04 24             	mov    %eax,(%esp)
 844339a:	e8 a7 58 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 844339f:	c7 44 24 04 a2 02 00 	movl   $0x2a2,0x4(%esp)
 84433a6:	00 
 84433a7:	89 04 24             	mov    %eax,(%esp)
 84433aa:	e8 a7 58 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84433af:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84433b2:	89 04 24             	mov    %eax,(%esp)
 84433b5:	e8 8c 58 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84433ba:	8b 55 08             	mov    0x8(%ebp),%edx
 84433bd:	89 54 24 04          	mov    %edx,0x4(%esp)
 84433c1:	89 04 24             	mov    %eax,(%esp)
 84433c4:	e8 8d 58 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84433c9:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84433cc:	89 04 24             	mov    %eax,(%esp)
 84433cf:	e8 7a 58 c8 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 84433d4:	89 04 24             	mov    %eax,(%esp)
 84433d7:	e8 16 0b 01 00       	call   8453ef2 <_ZN12CStreamGuard11GetInBufferI21SIG_CHECK_CHARAC_NAMEEEPT_v>
 84433dc:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84433df:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84433e2:	8b 55 0c             	mov    0xc(%ebp),%edx
 84433e5:	89 10                	mov    %edx,(%eax)
 84433e7:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 84433eb:	74 27                	je     8443414 <_ZN18DB_CheckCharacName11makeRequestEijPKcb+0xc2>
 84433ed:	8b 45 10             	mov    0x10(%ebp),%eax
 84433f0:	0f b6 00             	movzbl (%eax),%eax
 84433f3:	84 c0                	test   %al,%al
 84433f5:	74 1d                	je     8443414 <_ZN18DB_CheckCharacName11makeRequestEijPKcb+0xc2>
 84433f7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84433fa:	8d 50 04             	lea    0x4(%eax),%edx
 84433fd:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 8443404:	00 
 8443405:	8b 45 10             	mov    0x10(%ebp),%eax
 8443408:	89 44 24 04          	mov    %eax,0x4(%esp)
 844340c:	89 14 24             	mov    %edx,(%esp)
 844340f:	e8 bc a4 c3 ff       	call   807d8d0 <strncpy@plt>
 8443414:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8443417:	0f b6 55 e4          	movzbl -0x1c(%ebp),%edx
 844341b:	88 50 22             	mov    %dl,0x22(%eax)
 844341e:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8443423:	8d 55 ec             	lea    -0x14(%ebp),%edx
 8443426:	89 54 24 08          	mov    %edx,0x8(%esp)
 844342a:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8443431:	00 
 8443432:	89 04 24             	mov    %eax,(%esp)
 8443435:	e8 a4 db 12 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 844343a:	eb 1b                	jmp    8443457 <_ZN18DB_CheckCharacName11makeRequestEijPKcb+0x105>
 844343c:	89 d3                	mov    %edx,%ebx
 844343e:	89 c6                	mov    %eax,%esi
 8443440:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8443443:	89 04 24             	mov    %eax,(%esp)
 8443446:	e8 87 94 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 844344b:	89 f0                	mov    %esi,%eax
 844344d:	89 da                	mov    %ebx,%edx
 844344f:	89 04 24             	mov    %eax,(%esp)
 8443452:	e8 f9 02 6a 00       	call   8ae3750 <_Unwind_Resume>
 8443457:	8d 45 ec             	lea    -0x14(%ebp),%eax
 844345a:	89 04 24             	mov    %eax,(%esp)
 844345d:	e8 70 94 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8443462:	83 c4 30             	add    $0x30,%esp
 8443465:	5b                   	pop    %ebx
 8443466:	5e                   	pop    %esi
 8443467:	5d                   	pop    %ebp
 8443468:	c3                   	ret
 8443469:	90                   	nop

```

```c
// DB_CheckCharacName::makeRequest @ 0x8443352

/* DB_CheckCharacName::makeRequest(int, unsigned int, char const*, bool) */

void DB_CheckCharacName::makeRequest(int param_1,uint param_2,char *param_3,bool param_4)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_CHECK_CHARAC_NAME *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xa4f9);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 084433aa to 08443439 has its CatchHandler @ 0844343c */
  CStreamGuard::operator<<(pCVar2,0x2a2);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_CHECK_CHARAC_NAME>(pCVar2);
  *(uint *)local_10 = param_2;
  if ((param_3 != (char *)0x0) && (*param_3 != '\0')) {
    strncpy((char *)(local_10 + 4),param_3,0x1e);
  }
  local_10[0x22] = (SIG_CHECK_CHARAC_NAME)param_4;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}

```

