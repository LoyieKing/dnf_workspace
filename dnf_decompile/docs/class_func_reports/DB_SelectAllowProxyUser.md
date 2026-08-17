# DB_SelectAllowProxyUser

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 0844d17c DB_SelectAllowProxyUser::dispatch  [0x0844d17c-0x844d2d3] ===
 844d17c:	55                   	push   %ebp
 844d17d:	89 e5                	mov    %esp,%ebp
 844d17f:	56                   	push   %esi
 844d180:	53                   	push   %ebx
 844d181:	83 ec 20             	sub    $0x20,%esp
 844d184:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 844d18b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 844d18e:	89 44 24 04          	mov    %eax,0x4(%esp)
 844d192:	8b 45 14             	mov    0x14(%ebp),%eax
 844d195:	89 04 24             	mov    %eax,(%esp)
 844d198:	e8 f9 f5 1c 00       	call   861c796 <_ZN6StreamrsERj>
 844d19d:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 844d1a2:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 844d1a9:	00 
 844d1aa:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 844d1b1:	00 
 844d1b2:	89 04 24             	mov    %eax,(%esp)
 844d1b5:	e8 84 80 fa ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 844d1ba:	89 45 f4             	mov    %eax,-0xc(%ebp)
 844d1bd:	8b 45 f0             	mov    -0x10(%ebp),%eax
 844d1c0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 844d1c7:	00 
 844d1c8:	89 04 24             	mov    %eax,(%esp)
 844d1cb:	e8 7b be cb ff       	call   810904b <_Z14NumberToStringji>
 844d1d0:	89 44 24 08          	mov    %eax,0x8(%esp)
 844d1d4:	c7 44 24 04 74 9c c5 	movl   $0x8c59c74,0x4(%esp)
 844d1db:	08 
 844d1dc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 844d1df:	89 04 24             	mov    %eax,(%esp)
 844d1e2:	e8 d9 6f fa ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 844d1e7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 844d1ee:	00 
 844d1ef:	8b 45 f4             	mov    -0xc(%ebp),%eax
 844d1f2:	89 04 24             	mov    %eax,(%esp)
 844d1f5:	e8 2c 71 fa ff       	call   83f4326 <_ZN5MySQL4execEb>
 844d1fa:	84 c0                	test   %al,%al
 844d1fc:	0f 84 c5 00 00 00    	je     844d2c7 <_ZN23DB_SelectAllowProxyUser8dispatchEiiP6Stream+0x14b>
 844d202:	8b 45 f4             	mov    -0xc(%ebp),%eax
 844d205:	89 04 24             	mov    %eax,(%esp)
 844d208:	e8 5f 51 c9 ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 844d20d:	85 c0                	test   %eax,%eax
 844d20f:	0f 94 c0             	sete   %al
 844d212:	84 c0                	test   %al,%al
 844d214:	0f 84 ad 00 00 00    	je     844d2c7 <_ZN23DB_SelectAllowProxyUser8dispatchEiiP6Stream+0x14b>
 844d21a:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 844d21f:	c7 44 24 08 b7 c2 00 	movl   $0xc2b7,0x8(%esp)
 844d226:	00 
 844d227:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 844d22e:	08 
 844d22f:	89 04 24             	mov    %eax,(%esp)
 844d232:	e8 4f 28 e4 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 844d237:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 844d23e:	00 
 844d23f:	89 44 24 04          	mov    %eax,0x4(%esp)
 844d243:	8d 45 e8             	lea    -0x18(%ebp),%eax
 844d246:	89 04 24             	mov    %eax,(%esp)
 844d249:	e8 d8 b9 c7 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 844d24e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 844d251:	89 04 24             	mov    %eax,(%esp)
 844d254:	e8 ed b9 c7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 844d259:	c7 44 24 04 52 03 00 	movl   $0x352,0x4(%esp)
 844d260:	00 
 844d261:	89 04 24             	mov    %eax,(%esp)
 844d264:	e8 ed b9 c7 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 844d269:	8d 45 e8             	lea    -0x18(%ebp),%eax
 844d26c:	89 04 24             	mov    %eax,(%esp)
 844d26f:	e8 d2 b9 c7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 844d274:	8b 55 10             	mov    0x10(%ebp),%edx
 844d277:	89 54 24 04          	mov    %edx,0x4(%esp)
 844d27b:	89 04 24             	mov    %eax,(%esp)
 844d27e:	e8 d3 b9 c7 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 844d283:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 844d288:	8d 55 e8             	lea    -0x18(%ebp),%edx
 844d28b:	89 54 24 08          	mov    %edx,0x8(%esp)
 844d28f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 844d296:	00 
 844d297:	89 04 24             	mov    %eax,(%esp)
 844d29a:	e8 3f 3d 12 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 844d29f:	eb 1b                	jmp    844d2bc <_ZN23DB_SelectAllowProxyUser8dispatchEiiP6Stream+0x140>
 844d2a1:	89 d3                	mov    %edx,%ebx
 844d2a3:	89 c6                	mov    %eax,%esi
 844d2a5:	8d 45 e8             	lea    -0x18(%ebp),%eax
 844d2a8:	89 04 24             	mov    %eax,(%esp)
 844d2ab:	e8 22 f6 1c 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 844d2b0:	89 f0                	mov    %esi,%eax
 844d2b2:	89 da                	mov    %ebx,%edx
 844d2b4:	89 04 24             	mov    %eax,(%esp)
 844d2b7:	e8 94 64 69 00       	call   8ae3750 <_Unwind_Resume>
 844d2bc:	8d 45 e8             	lea    -0x18(%ebp),%eax
 844d2bf:	89 04 24             	mov    %eax,(%esp)
 844d2c2:	e8 0b f6 1c 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 844d2c7:	b8 01 00 00 00       	mov    $0x1,%eax
 844d2cc:	83 c4 20             	add    $0x20,%esp
 844d2cf:	5b                   	pop    %ebx
 844d2d0:	5e                   	pop    %esi
 844d2d1:	5d                   	pop    %ebp
 844d2d2:	c3                   	ret
 844d2d3:	90                   	nop

```

```c
// DB_SelectAllowProxyUser::dispatch @ 0x844d17c

/* DB_SelectAllowProxyUser::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_SelectAllowProxyUser::dispatch
          (DB_SelectAllowProxyUser *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  Stream *pSVar4;
  CStreamGuard *pCVar5;
  CStreamGuard local_1c [8];
  uint local_14;
  MySQL *local_10;
  
  local_14 = 0;
  Stream::operator>>(param_3,&local_14);
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  uVar2 = NumberToString(local_14,0);
  MySQL::set_query(local_10,"seLect m_id from allow_proxy_user where m_id=%s",uVar2);
  cVar1 = MySQL::exec(local_10,true);
  if (cVar1 != '\0') {
    iVar3 = MySQL::get_n_rows(local_10);
    if (iVar3 == 0) {
      pSVar4 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xc2b7);
      CStreamGuard::CStreamGuard(local_1c,pSVar4,true);
      pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
                    /* try { // try from 0844d264 to 0844d29e has its CatchHandler @ 0844d2a1 */
      CStreamGuard::operator<<(pCVar5,0x352);
      pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
      CStreamGuard::operator<<(pCVar5,param_2);
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_1c);
      CStreamGuard::~CStreamGuard(local_1c);
    }
  }
  return 1;
}

```

---

## makeRequest

```asm
// === 0844d2d4 DB_SelectAllowProxyUser::makeRequest  [0x0844d2d4-0x844d3a9] ===
 844d2d4:	55                   	push   %ebp
 844d2d5:	89 e5                	mov    %esp,%ebp
 844d2d7:	56                   	push   %esi
 844d2d8:	53                   	push   %ebx
 844d2d9:	83 ec 20             	sub    $0x20,%esp
 844d2dc:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 844d2e1:	c7 44 24 08 c6 c2 00 	movl   $0xc2c6,0x8(%esp)
 844d2e8:	00 
 844d2e9:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 844d2f0:	08 
 844d2f1:	89 04 24             	mov    %eax,(%esp)
 844d2f4:	e8 8d 27 e4 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 844d2f9:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 844d300:	00 
 844d301:	89 44 24 04          	mov    %eax,0x4(%esp)
 844d305:	8d 45 f0             	lea    -0x10(%ebp),%eax
 844d308:	89 04 24             	mov    %eax,(%esp)
 844d30b:	e8 16 b9 c7 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 844d310:	8d 45 f0             	lea    -0x10(%ebp),%eax
 844d313:	89 04 24             	mov    %eax,(%esp)
 844d316:	e8 2b b9 c7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 844d31b:	c7 44 24 04 52 03 00 	movl   $0x352,0x4(%esp)
 844d322:	00 
 844d323:	89 04 24             	mov    %eax,(%esp)
 844d326:	e8 2b b9 c7 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 844d32b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 844d32e:	89 04 24             	mov    %eax,(%esp)
 844d331:	e8 10 b9 c7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 844d336:	8b 55 08             	mov    0x8(%ebp),%edx
 844d339:	89 54 24 04          	mov    %edx,0x4(%esp)
 844d33d:	89 04 24             	mov    %eax,(%esp)
 844d340:	e8 11 b9 c7 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 844d345:	8d 45 f0             	lea    -0x10(%ebp),%eax
 844d348:	89 04 24             	mov    %eax,(%esp)
 844d34b:	e8 f6 b8 c7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 844d350:	8b 55 0c             	mov    0xc(%ebp),%edx
 844d353:	89 54 24 04          	mov    %edx,0x4(%esp)
 844d357:	89 04 24             	mov    %eax,(%esp)
 844d35a:	e8 33 4f c9 ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 844d35f:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 844d364:	8d 55 f0             	lea    -0x10(%ebp),%edx
 844d367:	89 54 24 08          	mov    %edx,0x8(%esp)
 844d36b:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 844d372:	00 
 844d373:	89 04 24             	mov    %eax,(%esp)
 844d376:	e8 63 3c 12 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 844d37b:	eb 1b                	jmp    844d398 <_ZN23DB_SelectAllowProxyUser11makeRequestEij+0xc4>
 844d37d:	89 d3                	mov    %edx,%ebx
 844d37f:	89 c6                	mov    %eax,%esi
 844d381:	8d 45 f0             	lea    -0x10(%ebp),%eax
 844d384:	89 04 24             	mov    %eax,(%esp)
 844d387:	e8 46 f5 1c 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 844d38c:	89 f0                	mov    %esi,%eax
 844d38e:	89 da                	mov    %ebx,%edx
 844d390:	89 04 24             	mov    %eax,(%esp)
 844d393:	e8 b8 63 69 00       	call   8ae3750 <_Unwind_Resume>
 844d398:	8d 45 f0             	lea    -0x10(%ebp),%eax
 844d39b:	89 04 24             	mov    %eax,(%esp)
 844d39e:	e8 2f f5 1c 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 844d3a3:	83 c4 20             	add    $0x20,%esp
 844d3a6:	5b                   	pop    %ebx
 844d3a7:	5e                   	pop    %esi
 844d3a8:	5d                   	pop    %ebp
 844d3a9:	c3                   	ret

```

```c
// DB_SelectAllowProxyUser::makeRequest @ 0x844d2d4

/* DB_SelectAllowProxyUser::makeRequest(int, unsigned int) */

void DB_SelectAllowProxyUser::makeRequest(int param_1,uint param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xc2c6);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0844d326 to 0844d37a has its CatchHandler @ 0844d37d */
  CStreamGuard::operator<<(pCVar2,0x352);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}

```

