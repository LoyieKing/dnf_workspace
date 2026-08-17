# DB_SaveGiveAvengerTitleFlag

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 08442226 DB_SaveGiveAvengerTitleFlag::dispatch  [0x08442226-0x84422db] ===
 8442226:	55                   	push   %ebp
 8442227:	89 e5                	mov    %esp,%ebp
 8442229:	53                   	push   %ebx
 844222a:	83 ec 24             	sub    $0x24,%esp
 844222d:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8442232:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8442239:	00 
 844223a:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 8442241:	00 
 8442242:	89 04 24             	mov    %eax,(%esp)
 8442245:	e8 f4 2f fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 844224a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 844224d:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8442254:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 844225b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 844225e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8442262:	8b 45 14             	mov    0x14(%ebp),%eax
 8442265:	89 04 24             	mov    %eax,(%esp)
 8442268:	e8 29 a5 1d 00       	call   861c796 <_ZN6StreamrsERj>
 844226d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8442270:	89 44 24 04          	mov    %eax,0x4(%esp)
 8442274:	8b 45 14             	mov    0x14(%ebp),%eax
 8442277:	89 04 24             	mov    %eax,(%esp)
 844227a:	e8 17 a5 1d 00       	call   861c796 <_ZN6StreamrsERj>
 844227f:	8b 5d ec             	mov    -0x14(%ebp),%ebx
 8442282:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8442285:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 844228c:	00 
 844228d:	89 04 24             	mov    %eax,(%esp)
 8442290:	e8 b6 6d cc ff       	call   810904b <_Z14NumberToStringji>
 8442295:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8442299:	89 44 24 08          	mov    %eax,0x8(%esp)
 844229d:	c7 44 24 04 7c 69 c5 	movl   $0x8c5697c,0x4(%esp)
 84422a4:	08 
 84422a5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84422a8:	89 04 24             	mov    %eax,(%esp)
 84422ab:	e8 10 1f fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84422b0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84422b7:	00 
 84422b8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84422bb:	89 04 24             	mov    %eax,(%esp)
 84422be:	e8 63 20 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 84422c3:	83 f0 01             	xor    $0x1,%eax
 84422c6:	84 c0                	test   %al,%al
 84422c8:	74 07                	je     84422d1 <_ZN27DB_SaveGiveAvengerTitleFlag8dispatchEiiP6Stream+0xab>
 84422ca:	b8 00 00 00 00       	mov    $0x0,%eax
 84422cf:	eb 05                	jmp    84422d6 <_ZN27DB_SaveGiveAvengerTitleFlag8dispatchEiiP6Stream+0xb0>
 84422d1:	b8 01 00 00 00       	mov    $0x1,%eax
 84422d6:	83 c4 24             	add    $0x24,%esp
 84422d9:	5b                   	pop    %ebx
 84422da:	5d                   	pop    %ebp
 84422db:	c3                   	ret

```

```c
// DB_SaveGiveAvengerTitleFlag::dispatch @ 0x8442226

/* DB_SaveGiveAvengerTitleFlag::dispatch(int, int, Stream*) */

bool DB_SaveGiveAvengerTitleFlag::dispatch(int param_1,int param_2,Stream *param_3)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  Stream *in_stack_00000010;
  uint local_18;
  uint local_14;
  MySQL *local_10;
  
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
  local_14 = 0;
  local_18 = 0;
  Stream::operator>>(in_stack_00000010,&local_14);
  Stream::operator>>(in_stack_00000010,&local_18);
  uVar1 = local_18;
  uVar3 = NumberToString(local_14,0);
  MySQL::set_query(local_10,
                   "inSert into event_1107_avenger_plan(m_id, charac_no, occ_date) values(%s, %u, now())"
                   ,uVar3,uVar1);
  cVar2 = MySQL::exec(local_10,true);
  return cVar2 == '\x01';
}

```

---

## makeRequest

```asm
// === 084422dc DB_SaveGiveAvengerTitleFlag::makeRequest  [0x084422dc-0x84423cb] ===
 84422dc:	55                   	push   %ebp
 84422dd:	89 e5                	mov    %esp,%ebp
 84422df:	56                   	push   %esi
 84422e0:	53                   	push   %ebx
 84422e1:	83 ec 20             	sub    $0x20,%esp
 84422e4:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 84422e9:	c7 44 24 08 76 a2 00 	movl   $0xa276,0x8(%esp)
 84422f0:	00 
 84422f1:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 84422f8:	08 
 84422f9:	89 04 24             	mov    %eax,(%esp)
 84422fc:	e8 85 d7 e4 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8442301:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8442308:	00 
 8442309:	89 44 24 04          	mov    %eax,0x4(%esp)
 844230d:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8442310:	89 04 24             	mov    %eax,(%esp)
 8442313:	e8 0e 69 c8 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8442318:	8d 45 f0             	lea    -0x10(%ebp),%eax
 844231b:	89 04 24             	mov    %eax,(%esp)
 844231e:	e8 23 69 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8442323:	c7 44 24 04 8d 02 00 	movl   $0x28d,0x4(%esp)
 844232a:	00 
 844232b:	89 04 24             	mov    %eax,(%esp)
 844232e:	e8 23 69 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8442333:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8442336:	89 04 24             	mov    %eax,(%esp)
 8442339:	e8 08 69 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 844233e:	8b 55 08             	mov    0x8(%ebp),%edx
 8442341:	89 54 24 04          	mov    %edx,0x4(%esp)
 8442345:	89 04 24             	mov    %eax,(%esp)
 8442348:	e8 09 69 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 844234d:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8442350:	89 04 24             	mov    %eax,(%esp)
 8442353:	e8 ee 68 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8442358:	8b 55 0c             	mov    0xc(%ebp),%edx
 844235b:	89 54 24 04          	mov    %edx,0x4(%esp)
 844235f:	89 04 24             	mov    %eax,(%esp)
 8442362:	e8 2b ff c9 ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 8442367:	8d 45 f0             	lea    -0x10(%ebp),%eax
 844236a:	89 04 24             	mov    %eax,(%esp)
 844236d:	e8 d4 68 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8442372:	8b 55 10             	mov    0x10(%ebp),%edx
 8442375:	89 54 24 04          	mov    %edx,0x4(%esp)
 8442379:	89 04 24             	mov    %eax,(%esp)
 844237c:	e8 11 ff c9 ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 8442381:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8442386:	8d 55 f0             	lea    -0x10(%ebp),%edx
 8442389:	89 54 24 08          	mov    %edx,0x8(%esp)
 844238d:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8442394:	00 
 8442395:	89 04 24             	mov    %eax,(%esp)
 8442398:	e8 41 ec 12 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 844239d:	eb 1b                	jmp    84423ba <_ZN27DB_SaveGiveAvengerTitleFlag11makeRequestEijj+0xde>
 844239f:	89 d3                	mov    %edx,%ebx
 84423a1:	89 c6                	mov    %eax,%esi
 84423a3:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84423a6:	89 04 24             	mov    %eax,(%esp)
 84423a9:	e8 24 a5 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84423ae:	89 f0                	mov    %esi,%eax
 84423b0:	89 da                	mov    %ebx,%edx
 84423b2:	89 04 24             	mov    %eax,(%esp)
 84423b5:	e8 96 13 6a 00       	call   8ae3750 <_Unwind_Resume>
 84423ba:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84423bd:	89 04 24             	mov    %eax,(%esp)
 84423c0:	e8 0d a5 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84423c5:	83 c4 20             	add    $0x20,%esp
 84423c8:	5b                   	pop    %ebx
 84423c9:	5e                   	pop    %esi
 84423ca:	5d                   	pop    %ebp
 84423cb:	c3                   	ret

```

```c
// DB_SaveGiveAvengerTitleFlag::makeRequest @ 0x84422dc

/* DB_SaveGiveAvengerTitleFlag::makeRequest(int, unsigned int, unsigned int) */

void DB_SaveGiveAvengerTitleFlag::makeRequest(int param_1,uint param_2,uint param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xa276);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0844232e to 0844239c has its CatchHandler @ 0844239f */
  CStreamGuard::operator<<(pCVar2,0x28d);
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

