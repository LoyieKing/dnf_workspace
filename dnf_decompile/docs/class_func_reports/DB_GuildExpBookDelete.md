# DB_GuildExpBookDelete

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 0843c35a DB_GuildExpBookDelete::dispatch  [0x0843c35a-0x843c407] ===
 843c35a:	55                   	push   %ebp
 843c35b:	89 e5                	mov    %esp,%ebp
 843c35d:	83 ec 28             	sub    $0x28,%esp
 843c360:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 843c367:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 843c36e:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 843c375:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843c378:	89 44 24 04          	mov    %eax,0x4(%esp)
 843c37c:	8b 45 14             	mov    0x14(%ebp),%eax
 843c37f:	89 04 24             	mov    %eax,(%esp)
 843c382:	e8 0f 04 1e 00       	call   861c796 <_ZN6StreamrsERj>
 843c387:	8d 45 ec             	lea    -0x14(%ebp),%eax
 843c38a:	89 44 24 04          	mov    %eax,0x4(%esp)
 843c38e:	8b 45 14             	mov    0x14(%ebp),%eax
 843c391:	89 04 24             	mov    %eax,(%esp)
 843c394:	e8 2b 02 1e 00       	call   861c5c4 <_ZN6StreamrsERi>
 843c399:	8d 45 e8             	lea    -0x18(%ebp),%eax
 843c39c:	89 44 24 04          	mov    %eax,0x4(%esp)
 843c3a0:	8b 45 14             	mov    0x14(%ebp),%eax
 843c3a3:	89 04 24             	mov    %eax,(%esp)
 843c3a6:	e8 19 02 1e 00       	call   861c5c4 <_ZN6StreamrsERi>
 843c3ab:	8b 45 e8             	mov    -0x18(%ebp),%eax
 843c3ae:	89 c2                	mov    %eax,%edx
 843c3b0:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 843c3b5:	89 54 24 08          	mov    %edx,0x8(%esp)
 843c3b9:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 843c3c0:	00 
 843c3c1:	89 04 24             	mov    %eax,(%esp)
 843c3c4:	e8 75 8e fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 843c3c9:	89 45 f4             	mov    %eax,-0xc(%ebp)
 843c3cc:	8b 55 f0             	mov    -0x10(%ebp),%edx
 843c3cf:	8b 45 ec             	mov    -0x14(%ebp),%eax
 843c3d2:	89 54 24 0c          	mov    %edx,0xc(%esp)
 843c3d6:	89 44 24 08          	mov    %eax,0x8(%esp)
 843c3da:	c7 44 24 04 74 50 c5 	movl   $0x8c55074,0x4(%esp)
 843c3e1:	08 
 843c3e2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843c3e5:	89 04 24             	mov    %eax,(%esp)
 843c3e8:	e8 d3 7d fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 843c3ed:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843c3f4:	00 
 843c3f5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843c3f8:	89 04 24             	mov    %eax,(%esp)
 843c3fb:	e8 26 7f fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 843c400:	b8 01 00 00 00       	mov    $0x1,%eax
 843c405:	c9                   	leave
 843c406:	c3                   	ret
 843c407:	90                   	nop

```

```c
// DB_GuildExpBookDelete::dispatch @ 0x843c35a

/* DB_GuildExpBookDelete::dispatch(int, int, Stream*) */

undefined4 DB_GuildExpBookDelete::dispatch(int param_1,int param_2,Stream *param_3)

{
  Stream *in_stack_00000010;
  int local_1c;
  int local_18;
  uint local_14;
  MySQL *local_10;
  
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  Stream::operator>>(in_stack_00000010,&local_14);
  Stream::operator>>(in_stack_00000010,&local_18);
  Stream::operator>>(in_stack_00000010,&local_1c);
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,local_1c);
  MySQL::set_query(local_10,"upDate charac_info set guild_secede = %d where charac_no = %u",local_18
                   ,local_14);
  MySQL::exec(local_10,true);
  return 1;
}

```

---

## makeRequest

```asm
// === 0843c408 DB_GuildExpBookDelete::makeRequest  [0x0843c408-0x843c513] ===
 843c408:	55                   	push   %ebp
 843c409:	89 e5                	mov    %esp,%ebp
 843c40b:	56                   	push   %esi
 843c40c:	53                   	push   %ebx
 843c40d:	83 ec 20             	sub    $0x20,%esp
 843c410:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 843c415:	c7 44 24 08 2a 90 00 	movl   $0x902a,0x8(%esp)
 843c41c:	00 
 843c41d:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 843c424:	08 
 843c425:	89 04 24             	mov    %eax,(%esp)
 843c428:	e8 59 36 e5 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 843c42d:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 843c434:	00 
 843c435:	89 44 24 04          	mov    %eax,0x4(%esp)
 843c439:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843c43c:	89 04 24             	mov    %eax,(%esp)
 843c43f:	e8 e2 c7 c8 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 843c444:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843c447:	89 04 24             	mov    %eax,(%esp)
 843c44a:	e8 f7 c7 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843c44f:	c7 44 24 04 09 02 00 	movl   $0x209,0x4(%esp)
 843c456:	00 
 843c457:	89 04 24             	mov    %eax,(%esp)
 843c45a:	e8 f7 c7 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843c45f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843c462:	89 04 24             	mov    %eax,(%esp)
 843c465:	e8 dc c7 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843c46a:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 843c471:	ff 
 843c472:	89 04 24             	mov    %eax,(%esp)
 843c475:	e8 dc c7 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843c47a:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843c47d:	89 04 24             	mov    %eax,(%esp)
 843c480:	e8 c1 c7 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843c485:	8b 55 08             	mov    0x8(%ebp),%edx
 843c488:	89 54 24 04          	mov    %edx,0x4(%esp)
 843c48c:	89 04 24             	mov    %eax,(%esp)
 843c48f:	e8 fe 5d ca ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 843c494:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843c497:	89 04 24             	mov    %eax,(%esp)
 843c49a:	e8 a7 c7 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843c49f:	8b 55 0c             	mov    0xc(%ebp),%edx
 843c4a2:	89 54 24 04          	mov    %edx,0x4(%esp)
 843c4a6:	89 04 24             	mov    %eax,(%esp)
 843c4a9:	e8 a8 c7 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843c4ae:	8b 5d 10             	mov    0x10(%ebp),%ebx
 843c4b1:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843c4b4:	89 04 24             	mov    %eax,(%esp)
 843c4b7:	e8 8a c7 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843c4bc:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 843c4c0:	89 04 24             	mov    %eax,(%esp)
 843c4c3:	e8 8e c7 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843c4c8:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 843c4cd:	8d 55 f0             	lea    -0x10(%ebp),%edx
 843c4d0:	89 54 24 08          	mov    %edx,0x8(%esp)
 843c4d4:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 843c4db:	00 
 843c4dc:	89 04 24             	mov    %eax,(%esp)
 843c4df:	e8 fa 4a 13 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 843c4e4:	eb 1b                	jmp    843c501 <_ZN21DB_GuildExpBookDelete11makeRequestEji17ENUM_SERVER_GROUP+0xf9>
 843c4e6:	89 d3                	mov    %edx,%ebx
 843c4e8:	89 c6                	mov    %eax,%esi
 843c4ea:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843c4ed:	89 04 24             	mov    %eax,(%esp)
 843c4f0:	e8 dd 03 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 843c4f5:	89 f0                	mov    %esi,%eax
 843c4f7:	89 da                	mov    %ebx,%edx
 843c4f9:	89 04 24             	mov    %eax,(%esp)
 843c4fc:	e8 4f 72 6a 00       	call   8ae3750 <_Unwind_Resume>
 843c501:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843c504:	89 04 24             	mov    %eax,(%esp)
 843c507:	e8 c6 03 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 843c50c:	83 c4 20             	add    $0x20,%esp
 843c50f:	5b                   	pop    %ebx
 843c510:	5e                   	pop    %esi
 843c511:	5d                   	pop    %ebp
 843c512:	c3                   	ret
 843c513:	90                   	nop

```

```c
// DB_GuildExpBookDelete::makeRequest @ 0x843c408

/* DB_GuildExpBookDelete::makeRequest(unsigned int, int, ENUM_SERVER_GROUP) */

void DB_GuildExpBookDelete::makeRequest(uint param_1,int param_2,int param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x902a);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0843c45a to 0843c4e3 has its CatchHandler @ 0843c4e6 */
  CStreamGuard::operator<<(pCVar2,0x209);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_3);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}

```

