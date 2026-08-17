# DB_TestTradeRestrict

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 0844a0be DB_TestTradeRestrict::dispatch  [0x0844a0be-0x844a131] ===
 844a0be:	55                   	push   %ebp
 844a0bf:	89 e5                	mov    %esp,%ebp
 844a0c1:	83 ec 28             	sub    $0x28,%esp
 844a0c4:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 844a0c9:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 844a0d0:	00 
 844a0d1:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 844a0d8:	00 
 844a0d9:	89 04 24             	mov    %eax,(%esp)
 844a0dc:	e8 5d b1 fa ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 844a0e1:	89 45 f4             	mov    %eax,-0xc(%ebp)
 844a0e4:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 844a0eb:	8d 45 f0             	lea    -0x10(%ebp),%eax
 844a0ee:	89 44 24 04          	mov    %eax,0x4(%esp)
 844a0f2:	8b 45 14             	mov    0x14(%ebp),%eax
 844a0f5:	89 04 24             	mov    %eax,(%esp)
 844a0f8:	e8 99 26 1d 00       	call   861c796 <_ZN6StreamrsERj>
 844a0fd:	8b 45 f0             	mov    -0x10(%ebp),%eax
 844a100:	89 44 24 08          	mov    %eax,0x8(%esp)
 844a104:	c7 44 24 04 fc 8e c5 	movl   $0x8c58efc,0x4(%esp)
 844a10b:	08 
 844a10c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 844a10f:	89 04 24             	mov    %eax,(%esp)
 844a112:	e8 a9 a0 fa ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 844a117:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 844a11e:	00 
 844a11f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 844a122:	89 04 24             	mov    %eax,(%esp)
 844a125:	e8 fc a1 fa ff       	call   83f4326 <_ZN5MySQL4execEb>
 844a12a:	b8 01 00 00 00       	mov    $0x1,%eax
 844a12f:	c9                   	leave
 844a130:	c3                   	ret
 844a131:	90                   	nop

```

```c
// DB_TestTradeRestrict::dispatch @ 0x844a0be

/* DB_TestTradeRestrict::dispatch(int, int, Stream*) */

undefined4 DB_TestTradeRestrict::dispatch(int param_1,int param_2,Stream *param_3)

{
  Stream *in_stack_00000010;
  uint local_14;
  MySQL *local_10;
  
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  local_14 = 0;
  Stream::operator>>(in_stack_00000010,&local_14);
  MySQL::set_query(local_10,"upDate user_items set trade_restrict = 1 where charac_no = %u",local_14
                  );
  MySQL::exec(local_10,true);
  return 1;
}

```

---

## makeRequest

```asm
// === 0844a132 DB_TestTradeRestrict::makeRequest  [0x0844a132-0x844a209] ===
 844a132:	55                   	push   %ebp
 844a133:	89 e5                	mov    %esp,%ebp
 844a135:	56                   	push   %esi
 844a136:	53                   	push   %ebx
 844a137:	83 ec 20             	sub    $0x20,%esp
 844a13a:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 844a13f:	c7 44 24 08 73 ba 00 	movl   $0xba73,0x8(%esp)
 844a146:	00 
 844a147:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 844a14e:	08 
 844a14f:	89 04 24             	mov    %eax,(%esp)
 844a152:	e8 2f 59 e4 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 844a157:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 844a15e:	00 
 844a15f:	89 44 24 04          	mov    %eax,0x4(%esp)
 844a163:	8d 45 f0             	lea    -0x10(%ebp),%eax
 844a166:	89 04 24             	mov    %eax,(%esp)
 844a169:	e8 b8 ea c7 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 844a16e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 844a171:	89 04 24             	mov    %eax,(%esp)
 844a174:	e8 cd ea c7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 844a179:	c7 44 24 04 1c 03 00 	movl   $0x31c,0x4(%esp)
 844a180:	00 
 844a181:	89 04 24             	mov    %eax,(%esp)
 844a184:	e8 cd ea c7 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 844a189:	8d 45 f0             	lea    -0x10(%ebp),%eax
 844a18c:	89 04 24             	mov    %eax,(%esp)
 844a18f:	e8 b2 ea c7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 844a194:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 844a19b:	ff 
 844a19c:	89 04 24             	mov    %eax,(%esp)
 844a19f:	e8 b2 ea c7 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 844a1a4:	8d 45 f0             	lea    -0x10(%ebp),%eax
 844a1a7:	89 04 24             	mov    %eax,(%esp)
 844a1aa:	e8 97 ea c7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 844a1af:	8b 55 08             	mov    0x8(%ebp),%edx
 844a1b2:	89 54 24 04          	mov    %edx,0x4(%esp)
 844a1b6:	89 04 24             	mov    %eax,(%esp)
 844a1b9:	e8 d4 80 c9 ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 844a1be:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 844a1c3:	8d 55 f0             	lea    -0x10(%ebp),%edx
 844a1c6:	89 54 24 08          	mov    %edx,0x8(%esp)
 844a1ca:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 844a1d1:	00 
 844a1d2:	89 04 24             	mov    %eax,(%esp)
 844a1d5:	e8 04 6e 12 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 844a1da:	eb 1b                	jmp    844a1f7 <_ZN20DB_TestTradeRestrict11makeRequestEj+0xc5>
 844a1dc:	89 d3                	mov    %edx,%ebx
 844a1de:	89 c6                	mov    %eax,%esi
 844a1e0:	8d 45 f0             	lea    -0x10(%ebp),%eax
 844a1e3:	89 04 24             	mov    %eax,(%esp)
 844a1e6:	e8 e7 26 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 844a1eb:	89 f0                	mov    %esi,%eax
 844a1ed:	89 da                	mov    %ebx,%edx
 844a1ef:	89 04 24             	mov    %eax,(%esp)
 844a1f2:	e8 59 95 69 00       	call   8ae3750 <_Unwind_Resume>
 844a1f7:	8d 45 f0             	lea    -0x10(%ebp),%eax
 844a1fa:	89 04 24             	mov    %eax,(%esp)
 844a1fd:	e8 d0 26 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 844a202:	83 c4 20             	add    $0x20,%esp
 844a205:	5b                   	pop    %ebx
 844a206:	5e                   	pop    %esi
 844a207:	5d                   	pop    %ebp
 844a208:	c3                   	ret
 844a209:	90                   	nop

```

```c
// DB_TestTradeRestrict::makeRequest @ 0x844a132

/* DB_TestTradeRestrict::makeRequest(unsigned int) */

void DB_TestTradeRestrict::makeRequest(uint param_1)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xba73);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0844a184 to 0844a1d9 has its CatchHandler @ 0844a1dc */
  CStreamGuard::operator<<(pCVar2,0x31c);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}

```

