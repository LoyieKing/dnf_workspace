# DB_UpdateAvatarHistory

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 08445246 DB_UpdateAvatarHistory::dispatch  [0x08445246-0x8445369] ===
 8445246:	55                   	push   %ebp
 8445247:	89 e5                	mov    %esp,%ebp
 8445249:	56                   	push   %esi
 844524a:	53                   	push   %ebx
 844524b:	83 ec 50             	sub    $0x50,%esp
 844524e:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8445255:	8d 45 d3             	lea    -0x2d(%ebp),%eax
 8445258:	ba 19 00 00 00       	mov    $0x19,%edx
 844525d:	b9 00 00 00 00       	mov    $0x0,%ecx
 8445262:	89 c3                	mov    %eax,%ebx
 8445264:	83 e3 01             	and    $0x1,%ebx
 8445267:	85 db                	test   %ebx,%ebx
 8445269:	74 08                	je     8445273 <_ZN22DB_UpdateAvatarHistory8dispatchEiiP6Stream+0x2d>
 844526b:	88 08                	mov    %cl,(%eax)
 844526d:	83 c0 01             	add    $0x1,%eax
 8445270:	83 ea 01             	sub    $0x1,%edx
 8445273:	89 c3                	mov    %eax,%ebx
 8445275:	83 e3 02             	and    $0x2,%ebx
 8445278:	85 db                	test   %ebx,%ebx
 844527a:	74 09                	je     8445285 <_ZN22DB_UpdateAvatarHistory8dispatchEiiP6Stream+0x3f>
 844527c:	66 89 08             	mov    %cx,(%eax)
 844527f:	83 c0 02             	add    $0x2,%eax
 8445282:	83 ea 02             	sub    $0x2,%edx
 8445285:	89 d6                	mov    %edx,%esi
 8445287:	83 e6 fc             	and    $0xfffffffc,%esi
 844528a:	bb 00 00 00 00       	mov    $0x0,%ebx
 844528f:	89 0c 18             	mov    %ecx,(%eax,%ebx,1)
 8445292:	83 c3 04             	add    $0x4,%ebx
 8445295:	39 f3                	cmp    %esi,%ebx
 8445297:	72 f6                	jb     844528f <_ZN22DB_UpdateAvatarHistory8dispatchEiiP6Stream+0x49>
 8445299:	01 d8                	add    %ebx,%eax
 844529b:	89 d3                	mov    %edx,%ebx
 844529d:	83 e3 02             	and    $0x2,%ebx
 84452a0:	85 db                	test   %ebx,%ebx
 84452a2:	74 06                	je     84452aa <_ZN22DB_UpdateAvatarHistory8dispatchEiiP6Stream+0x64>
 84452a4:	66 89 08             	mov    %cx,(%eax)
 84452a7:	83 c0 02             	add    $0x2,%eax
 84452aa:	83 e2 01             	and    $0x1,%edx
 84452ad:	85 d2                	test   %edx,%edx
 84452af:	74 05                	je     84452b6 <_ZN22DB_UpdateAvatarHistory8dispatchEiiP6Stream+0x70>
 84452b1:	88 08                	mov    %cl,(%eax)
 84452b3:	83 c0 01             	add    $0x1,%eax
 84452b6:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84452b9:	89 44 24 04          	mov    %eax,0x4(%esp)
 84452bd:	8b 45 14             	mov    0x14(%ebp),%eax
 84452c0:	89 04 24             	mov    %eax,(%esp)
 84452c3:	e8 ce 74 1d 00       	call   861c796 <_ZN6StreamrsERj>
 84452c8:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84452cb:	89 44 24 04          	mov    %eax,0x4(%esp)
 84452cf:	8b 45 14             	mov    0x14(%ebp),%eax
 84452d2:	89 04 24             	mov    %eax,(%esp)
 84452d5:	e8 ea 72 1d 00       	call   861c5c4 <_ZN6StreamrsERi>
 84452da:	c7 44 24 08 18 00 00 	movl   $0x18,0x8(%esp)
 84452e1:	00 
 84452e2:	8d 45 d3             	lea    -0x2d(%ebp),%eax
 84452e5:	89 44 24 04          	mov    %eax,0x4(%esp)
 84452e9:	8b 45 14             	mov    0x14(%ebp),%eax
 84452ec:	89 04 24             	mov    %eax,(%esp)
 84452ef:	e8 06 75 1d 00       	call   861c7fa <_ZN6Stream10get_binaryEPvi>
 84452f4:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 84452f9:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8445300:	00 
 8445301:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 8445308:	00 
 8445309:	89 04 24             	mov    %eax,(%esp)
 844530c:	e8 2d ff fa ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8445311:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8445314:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8445317:	8b 45 ec             	mov    -0x14(%ebp),%eax
 844531a:	89 54 24 10          	mov    %edx,0x10(%esp)
 844531e:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8445322:	8d 45 d3             	lea    -0x2d(%ebp),%eax
 8445325:	89 44 24 08          	mov    %eax,0x8(%esp)
 8445329:	c7 44 24 04 f8 73 c5 	movl   $0x8c573f8,0x4(%esp)
 8445330:	08 
 8445331:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8445334:	89 04 24             	mov    %eax,(%esp)
 8445337:	e8 84 ee fa ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 844533c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8445343:	00 
 8445344:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8445347:	89 04 24             	mov    %eax,(%esp)
 844534a:	e8 d7 ef fa ff       	call   83f4326 <_ZN5MySQL4execEb>
 844534f:	83 f0 01             	xor    $0x1,%eax
 8445352:	84 c0                	test   %al,%al
 8445354:	74 07                	je     844535d <_ZN22DB_UpdateAvatarHistory8dispatchEiiP6Stream+0x117>
 8445356:	b8 00 00 00 00       	mov    $0x0,%eax
 844535b:	eb 05                	jmp    8445362 <_ZN22DB_UpdateAvatarHistory8dispatchEiiP6Stream+0x11c>
 844535d:	b8 01 00 00 00       	mov    $0x1,%eax
 8445362:	83 c4 50             	add    $0x50,%esp
 8445365:	5b                   	pop    %ebx
 8445366:	5e                   	pop    %esi
 8445367:	5d                   	pop    %ebp
 8445368:	c3                   	ret
 8445369:	90                   	nop

```

```c
// DB_UpdateAvatarHistory::dispatch @ 0x8445246

/* DB_UpdateAvatarHistory::dispatch(int, int, Stream*) */

bool DB_UpdateAvatarHistory::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined2 *puVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  Stream *in_stack_00000010;
  undefined1 local_31 [25];
  int local_18;
  uint local_14;
  MySQL *local_10;
  
  local_14 = 0;
  puVar2 = (undefined2 *)local_31;
  uVar3 = 0x19;
  bVar5 = ((uint)puVar2 & 1) != 0;
  if (bVar5) {
    local_31[0] = 0;
    puVar2 = (undefined2 *)(local_31 + 1);
    uVar3 = 0x18;
  }
  if (((uint)puVar2 & 2) != 0) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
    uVar3 = uVar3 - 2;
  }
  uVar4 = 0;
  do {
    *(undefined4 *)((int)puVar2 + uVar4) = 0;
    uVar4 = uVar4 + 4;
  } while (uVar4 < (uVar3 & 0xfffffffc));
  puVar2 = (undefined2 *)((int)puVar2 + uVar4);
  if ((uVar3 & 2) != 0) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  if (!bVar5) {
    *(undefined1 *)puVar2 = 0;
  }
  Stream::operator>>(in_stack_00000010,&local_14);
  Stream::operator>>(in_stack_00000010,&local_18);
  Stream::get_binary(in_stack_00000010,local_31,0x18);
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  MySQL::set_query(local_10,
                   "upDate user_items set to_ipg_agency_no=\'%s\', m_time=now() where ui_id=%d and charac_no=%d"
                   ,local_31,local_18,local_14);
  cVar1 = MySQL::exec(local_10,true);
  return cVar1 == '\x01';
}

```

---

## makeRequest

```asm
// === 0844536a DB_UpdateAvatarHistory::makeRequest  [0x0844536a-0x844547d] ===
 844536a:	55                   	push   %ebp
 844536b:	89 e5                	mov    %esp,%ebp
 844536d:	56                   	push   %esi
 844536e:	53                   	push   %ebx
 844536f:	83 ec 20             	sub    $0x20,%esp
 8445372:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8445377:	c7 44 24 08 3b ac 00 	movl   $0xac3b,0x8(%esp)
 844537e:	00 
 844537f:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8445386:	08 
 8445387:	89 04 24             	mov    %eax,(%esp)
 844538a:	e8 f7 a6 e4 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 844538f:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8445396:	00 
 8445397:	89 44 24 04          	mov    %eax,0x4(%esp)
 844539b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 844539e:	89 04 24             	mov    %eax,(%esp)
 84453a1:	e8 80 38 c8 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 84453a6:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84453a9:	89 04 24             	mov    %eax,(%esp)
 84453ac:	e8 95 38 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84453b1:	c7 44 24 04 b0 02 00 	movl   $0x2b0,0x4(%esp)
 84453b8:	00 
 84453b9:	89 04 24             	mov    %eax,(%esp)
 84453bc:	e8 95 38 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84453c1:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84453c4:	89 04 24             	mov    %eax,(%esp)
 84453c7:	e8 7a 38 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84453cc:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84453d3:	ff 
 84453d4:	89 04 24             	mov    %eax,(%esp)
 84453d7:	e8 7a 38 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84453dc:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84453df:	89 04 24             	mov    %eax,(%esp)
 84453e2:	e8 5f 38 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84453e7:	8b 55 08             	mov    0x8(%ebp),%edx
 84453ea:	89 54 24 04          	mov    %edx,0x4(%esp)
 84453ee:	89 04 24             	mov    %eax,(%esp)
 84453f1:	e8 9c ce c9 ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 84453f6:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84453f9:	89 04 24             	mov    %eax,(%esp)
 84453fc:	e8 45 38 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8445401:	8b 55 0c             	mov    0xc(%ebp),%edx
 8445404:	89 54 24 04          	mov    %edx,0x4(%esp)
 8445408:	89 04 24             	mov    %eax,(%esp)
 844540b:	e8 46 38 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8445410:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8445413:	89 04 24             	mov    %eax,(%esp)
 8445416:	e8 33 38 c8 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 844541b:	c7 44 24 08 18 00 00 	movl   $0x18,0x8(%esp)
 8445422:	00 
 8445423:	8b 55 10             	mov    0x10(%ebp),%edx
 8445426:	89 54 24 04          	mov    %edx,0x4(%esp)
 844542a:	89 04 24             	mov    %eax,(%esp)
 844542d:	e8 20 92 c9 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8445432:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8445437:	8d 55 f0             	lea    -0x10(%ebp),%edx
 844543a:	89 54 24 08          	mov    %edx,0x8(%esp)
 844543e:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8445445:	00 
 8445446:	89 04 24             	mov    %eax,(%esp)
 8445449:	e8 90 bb 12 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 844544e:	eb 1b                	jmp    844546b <_ZN22DB_UpdateAvatarHistory11makeRequestEjiPc+0x101>
 8445450:	89 d3                	mov    %edx,%ebx
 8445452:	89 c6                	mov    %eax,%esi
 8445454:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8445457:	89 04 24             	mov    %eax,(%esp)
 844545a:	e8 73 74 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 844545f:	89 f0                	mov    %esi,%eax
 8445461:	89 da                	mov    %ebx,%edx
 8445463:	89 04 24             	mov    %eax,(%esp)
 8445466:	e8 e5 e2 69 00       	call   8ae3750 <_Unwind_Resume>
 844546b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 844546e:	89 04 24             	mov    %eax,(%esp)
 8445471:	e8 5c 74 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8445476:	83 c4 20             	add    $0x20,%esp
 8445479:	5b                   	pop    %ebx
 844547a:	5e                   	pop    %esi
 844547b:	5d                   	pop    %ebp
 844547c:	c3                   	ret
 844547d:	90                   	nop

```

```c
// DB_UpdateAvatarHistory::makeRequest @ 0x844536a

/* DB_UpdateAvatarHistory::makeRequest(unsigned int, int, char*) */

void DB_UpdateAvatarHistory::makeRequest(uint param_1,int param_2,char *param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xac3b);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 084453bc to 0844544d has its CatchHandler @ 08445450 */
  CStreamGuard::operator<<(pCVar2,0x2b0);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_14);
  CStreamGuard::put_binary(pCVar2,param_3,0x18);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}

```

