# DB_DeleteAccountCargo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 0843b24e DB_DeleteAccountCargo::dispatch  [0x0843b24e-0x843b2df] ===
 843b24e:	55                   	push   %ebp
 843b24f:	89 e5                	mov    %esp,%ebp
 843b251:	83 ec 28             	sub    $0x28,%esp
 843b254:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 843b25b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843b25e:	89 44 24 04          	mov    %eax,0x4(%esp)
 843b262:	8b 45 14             	mov    0x14(%ebp),%eax
 843b265:	89 04 24             	mov    %eax,(%esp)
 843b268:	e8 29 15 1e 00       	call   861c796 <_ZN6StreamrsERj>
 843b26d:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 843b272:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 843b279:	00 
 843b27a:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 843b281:	00 
 843b282:	89 04 24             	mov    %eax,(%esp)
 843b285:	e8 b4 9f fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 843b28a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 843b28d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 843b290:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 843b297:	00 
 843b298:	89 04 24             	mov    %eax,(%esp)
 843b29b:	e8 ab dd cc ff       	call   810904b <_Z14NumberToStringji>
 843b2a0:	89 44 24 08          	mov    %eax,0x8(%esp)
 843b2a4:	c7 44 24 04 98 4f c5 	movl   $0x8c54f98,0x4(%esp)
 843b2ab:	08 
 843b2ac:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843b2af:	89 04 24             	mov    %eax,(%esp)
 843b2b2:	e8 09 8f fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 843b2b7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843b2be:	00 
 843b2bf:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843b2c2:	89 04 24             	mov    %eax,(%esp)
 843b2c5:	e8 5c 90 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 843b2ca:	83 f0 01             	xor    $0x1,%eax
 843b2cd:	84 c0                	test   %al,%al
 843b2cf:	74 07                	je     843b2d8 <_ZN21DB_DeleteAccountCargo8dispatchEiiP6Stream+0x8a>
 843b2d1:	b8 00 00 00 00       	mov    $0x0,%eax
 843b2d6:	eb 05                	jmp    843b2dd <_ZN21DB_DeleteAccountCargo8dispatchEiiP6Stream+0x8f>
 843b2d8:	b8 01 00 00 00       	mov    $0x1,%eax
 843b2dd:	c9                   	leave
 843b2de:	c3                   	ret
 843b2df:	90                   	nop

```

```c
// DB_DeleteAccountCargo::dispatch @ 0x843b24e

/* DB_DeleteAccountCargo::dispatch(int, int, Stream*) */

bool DB_DeleteAccountCargo::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  Stream *in_stack_00000010;
  uint local_14;
  MySQL *local_10;
  
  local_14 = 0;
  Stream::operator>>(in_stack_00000010,&local_14);
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  uVar2 = NumberToString(local_14,0);
  MySQL::set_query(local_10,"deLete from account_cargo where m_id = %s",uVar2);
  cVar1 = MySQL::exec(local_10,true);
  return cVar1 == '\x01';
}

```

---

## makeRequest

```asm
// === 0843b2e0 DB_DeleteAccountCargo::makeRequest  [0x0843b2e0-0x843b3b5] ===
 843b2e0:	55                   	push   %ebp
 843b2e1:	89 e5                	mov    %esp,%ebp
 843b2e3:	56                   	push   %esi
 843b2e4:	53                   	push   %ebx
 843b2e5:	83 ec 20             	sub    $0x20,%esp
 843b2e8:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 843b2ed:	c7 44 24 08 38 8c 00 	movl   $0x8c38,0x8(%esp)
 843b2f4:	00 
 843b2f5:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 843b2fc:	08 
 843b2fd:	89 04 24             	mov    %eax,(%esp)
 843b300:	e8 81 47 e5 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 843b305:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 843b30c:	00 
 843b30d:	89 44 24 04          	mov    %eax,0x4(%esp)
 843b311:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843b314:	89 04 24             	mov    %eax,(%esp)
 843b317:	e8 0a d9 c8 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 843b31c:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843b31f:	89 04 24             	mov    %eax,(%esp)
 843b322:	e8 1f d9 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843b327:	c7 44 24 04 f0 01 00 	movl   $0x1f0,0x4(%esp)
 843b32e:	00 
 843b32f:	89 04 24             	mov    %eax,(%esp)
 843b332:	e8 1f d9 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843b337:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843b33a:	89 04 24             	mov    %eax,(%esp)
 843b33d:	e8 04 d9 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843b342:	8b 55 08             	mov    0x8(%ebp),%edx
 843b345:	89 54 24 04          	mov    %edx,0x4(%esp)
 843b349:	89 04 24             	mov    %eax,(%esp)
 843b34c:	e8 05 d9 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843b351:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843b354:	89 04 24             	mov    %eax,(%esp)
 843b357:	e8 ea d8 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843b35c:	8b 55 0c             	mov    0xc(%ebp),%edx
 843b35f:	89 54 24 04          	mov    %edx,0x4(%esp)
 843b363:	89 04 24             	mov    %eax,(%esp)
 843b366:	e8 27 6f ca ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 843b36b:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 843b370:	8d 55 f0             	lea    -0x10(%ebp),%edx
 843b373:	89 54 24 08          	mov    %edx,0x8(%esp)
 843b377:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 843b37e:	00 
 843b37f:	89 04 24             	mov    %eax,(%esp)
 843b382:	e8 57 5c 13 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 843b387:	eb 1b                	jmp    843b3a4 <_ZN21DB_DeleteAccountCargo11makeRequestEij+0xc4>
 843b389:	89 d3                	mov    %edx,%ebx
 843b38b:	89 c6                	mov    %eax,%esi
 843b38d:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843b390:	89 04 24             	mov    %eax,(%esp)
 843b393:	e8 3a 15 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 843b398:	89 f0                	mov    %esi,%eax
 843b39a:	89 da                	mov    %ebx,%edx
 843b39c:	89 04 24             	mov    %eax,(%esp)
 843b39f:	e8 ac 83 6a 00       	call   8ae3750 <_Unwind_Resume>
 843b3a4:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843b3a7:	89 04 24             	mov    %eax,(%esp)
 843b3aa:	e8 23 15 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 843b3af:	83 c4 20             	add    $0x20,%esp
 843b3b2:	5b                   	pop    %ebx
 843b3b3:	5e                   	pop    %esi
 843b3b4:	5d                   	pop    %ebp
 843b3b5:	c3                   	ret

```

```c
// DB_DeleteAccountCargo::makeRequest @ 0x843b2e0

/* DB_DeleteAccountCargo::makeRequest(int, unsigned int) */

void DB_DeleteAccountCargo::makeRequest(int param_1,uint param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x8c38);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0843b332 to 0843b386 has its CatchHandler @ 0843b389 */
  CStreamGuard::operator<<(pCVar2,0x1f0);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}

```

