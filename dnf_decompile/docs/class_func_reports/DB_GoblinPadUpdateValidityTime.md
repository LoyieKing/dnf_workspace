# DB_GoblinPadUpdateValidityTime

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 0842f22a DB_GoblinPadUpdateValidityTime::dispatch  [0x0842f22a-0x842f2ad] ===
 842f22a:	55                   	push   %ebp
 842f22b:	89 e5                	mov    %esp,%ebp
 842f22d:	83 ec 28             	sub    $0x28,%esp
 842f230:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 842f235:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 842f23c:	00 
 842f23d:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 842f244:	00 
 842f245:	89 04 24             	mov    %eax,(%esp)
 842f248:	e8 f1 5f fc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 842f24d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 842f250:	8b 45 14             	mov    0x14(%ebp),%eax
 842f253:	89 04 24             	mov    %eax,(%esp)
 842f256:	e8 29 38 02 00       	call   8452a84 <_ZN6Stream12GetOutBufferI30SIG_GOBLIN_UPDATE_VALIDITYTIMEEEPT_v>
 842f25b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 842f25e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842f261:	8b 00                	mov    (%eax),%eax
 842f263:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 842f26a:	00 
 842f26b:	89 04 24             	mov    %eax,(%esp)
 842f26e:	e8 d8 9d cd ff       	call   810904b <_Z14NumberToStringji>
 842f273:	8b 55 f4             	mov    -0xc(%ebp),%edx
 842f276:	8b 52 04             	mov    0x4(%edx),%edx
 842f279:	89 44 24 0c          	mov    %eax,0xc(%esp)
 842f27d:	89 54 24 08          	mov    %edx,0x8(%esp)
 842f281:	c7 44 24 04 00 15 c5 	movl   $0x8c51500,0x4(%esp)
 842f288:	08 
 842f289:	8b 45 f0             	mov    -0x10(%ebp),%eax
 842f28c:	89 04 24             	mov    %eax,(%esp)
 842f28f:	e8 2c 4f fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 842f294:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842f29b:	00 
 842f29c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 842f29f:	89 04 24             	mov    %eax,(%esp)
 842f2a2:	e8 7f 50 fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 842f2a7:	b8 01 00 00 00       	mov    $0x1,%eax
 842f2ac:	c9                   	leave
 842f2ad:	c3                   	ret

```

```c
// DB_GoblinPadUpdateValidityTime::dispatch @ 0x842f22a

/* DB_GoblinPadUpdateValidityTime::dispatch(int, int, Stream*) */

undefined4 DB_GoblinPadUpdateValidityTime::dispatch(int param_1,int param_2,Stream *param_3)

{
  MySQL *this;
  SIG_GOBLIN_UPDATE_VALIDITYTIME *pSVar1;
  undefined4 uVar2;
  Stream *in_stack_00000010;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  pSVar1 = Stream::GetOutBuffer<SIG_GOBLIN_UPDATE_VALIDITYTIME>(in_stack_00000010);
  uVar2 = NumberToString(*(uint *)pSVar1,0);
  MySQL::set_query(this,
                   "upDate member_mousepass set validity_time=unix_timestamp(now())+%d where m_id=%s"
                   ,*(undefined4 *)(pSVar1 + 4),uVar2);
  MySQL::exec(this,true);
  return 1;
}

```

---

## makeRequest

```asm
// === 0842f2ae DB_GoblinPadUpdateValidityTime::makeRequest  [0x0842f2ae-0x842f39f] ===
 842f2ae:	55                   	push   %ebp
 842f2af:	89 e5                	mov    %esp,%ebp
 842f2b1:	56                   	push   %esi
 842f2b2:	53                   	push   %ebx
 842f2b3:	83 ec 20             	sub    $0x20,%esp
 842f2b6:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
 842f2ba:	0f 84 d7 00 00 00    	je     842f397 <_ZN30DB_GoblinPadUpdateValidityTime11makeRequestEjj+0xe9>
 842f2c0:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 842f2c5:	c7 44 24 08 53 74 00 	movl   $0x7453,0x8(%esp)
 842f2cc:	00 
 842f2cd:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 842f2d4:	08 
 842f2d5:	89 04 24             	mov    %eax,(%esp)
 842f2d8:	e8 a9 07 e6 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 842f2dd:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 842f2e4:	00 
 842f2e5:	89 44 24 04          	mov    %eax,0x4(%esp)
 842f2e9:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842f2ec:	89 04 24             	mov    %eax,(%esp)
 842f2ef:	e8 32 99 c9 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 842f2f4:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842f2f7:	89 04 24             	mov    %eax,(%esp)
 842f2fa:	e8 47 99 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 842f2ff:	c7 44 24 04 2c 01 00 	movl   $0x12c,0x4(%esp)
 842f306:	00 
 842f307:	89 04 24             	mov    %eax,(%esp)
 842f30a:	e8 47 99 c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 842f30f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842f312:	89 04 24             	mov    %eax,(%esp)
 842f315:	e8 2c 99 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 842f31a:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 842f321:	ff 
 842f322:	89 04 24             	mov    %eax,(%esp)
 842f325:	e8 2c 99 c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 842f32a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842f32d:	89 04 24             	mov    %eax,(%esp)
 842f330:	e8 19 99 c9 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 842f335:	89 04 24             	mov    %eax,(%esp)
 842f338:	e8 9b 37 02 00       	call   8452ad8 <_ZN12CStreamGuard11GetInBufferI30SIG_GOBLIN_UPDATE_VALIDITYTIMEEEPT_v>
 842f33d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 842f340:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842f343:	8b 55 08             	mov    0x8(%ebp),%edx
 842f346:	89 10                	mov    %edx,(%eax)
 842f348:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842f34b:	8b 55 0c             	mov    0xc(%ebp),%edx
 842f34e:	89 50 04             	mov    %edx,0x4(%eax)
 842f351:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 842f356:	8d 55 ec             	lea    -0x14(%ebp),%edx
 842f359:	89 54 24 08          	mov    %edx,0x8(%esp)
 842f35d:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 842f364:	00 
 842f365:	89 04 24             	mov    %eax,(%esp)
 842f368:	e8 71 1c 14 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 842f36d:	eb 1b                	jmp    842f38a <_ZN30DB_GoblinPadUpdateValidityTime11makeRequestEjj+0xdc>
 842f36f:	89 d3                	mov    %edx,%ebx
 842f371:	89 c6                	mov    %eax,%esi
 842f373:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842f376:	89 04 24             	mov    %eax,(%esp)
 842f379:	e8 54 d5 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 842f37e:	89 f0                	mov    %esi,%eax
 842f380:	89 da                	mov    %ebx,%edx
 842f382:	89 04 24             	mov    %eax,(%esp)
 842f385:	e8 c6 43 6b 00       	call   8ae3750 <_Unwind_Resume>
 842f38a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842f38d:	89 04 24             	mov    %eax,(%esp)
 842f390:	e8 3d d5 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 842f395:	eb 01                	jmp    842f398 <_ZN30DB_GoblinPadUpdateValidityTime11makeRequestEjj+0xea>
 842f397:	90                   	nop
 842f398:	83 c4 20             	add    $0x20,%esp
 842f39b:	5b                   	pop    %ebx
 842f39c:	5e                   	pop    %esi
 842f39d:	5d                   	pop    %ebp
 842f39e:	c3                   	ret
 842f39f:	90                   	nop

```

```c
// DB_GoblinPadUpdateValidityTime::makeRequest @ 0x842f2ae

/* DB_GoblinPadUpdateValidityTime::makeRequest(unsigned int, unsigned int) */

void DB_GoblinPadUpdateValidityTime::makeRequest(uint param_1,uint param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_GOBLIN_UPDATE_VALIDITYTIME *local_10;
  
  if (param_1 != 0) {
    pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x7453);
    CStreamGuard::CStreamGuard(local_18,pSVar1,true);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0842f30a to 0842f36c has its CatchHandler @ 0842f36f */
    CStreamGuard::operator<<(pCVar2,300);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
    CStreamGuard::operator<<(pCVar2,-1);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
    local_10 = CStreamGuard::GetInBuffer<SIG_GOBLIN_UPDATE_VALIDITYTIME>(pCVar2);
    *(uint *)local_10 = param_1;
    *(uint *)(local_10 + 4) = param_2;
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
    CStreamGuard::~CStreamGuard(local_18);
  }
  return;
}

```

