# DB_SaveDungeonClear

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 6

---

## DB_SaveDungeonClear

```asm
// === 08419fec DB_SaveDungeonClear::DB_SaveDungeonClear  [0x08419fec-0x841a007] ===
 8419fec:	55                   	push   %ebp
 8419fed:	89 e5                	mov    %esp,%ebp
 8419fef:	83 ec 18             	sub    $0x18,%esp
 8419ff2:	8b 45 08             	mov    0x8(%ebp),%eax
 8419ff5:	89 04 24             	mov    %eax,(%esp)
 8419ff8:	e8 a9 37 03 00       	call   844d7a6 <_ZN12DBDispatcherC1Ev>
 8419ffd:	8b 45 08             	mov    0x8(%ebp),%eax
 841a000:	c7 00 48 f9 c5 08    	movl   $0x8c5f948,(%eax)
 841a006:	c9                   	leave
 841a007:	c3                   	ret

```

```c
// DB_SaveDungeonClear::DB_SaveDungeonClear @ 0x8419fec

/* DB_SaveDungeonClear::DB_SaveDungeonClear() */

void __thiscall DB_SaveDungeonClear::DB_SaveDungeonClear(DB_SaveDungeonClear *this)

{
  DBDispatcher::DBDispatcher((DBDispatcher *)this);
  *(undefined ***)this = &PTR_dispatch_08c5f948;
  return;
}

```

---

## SaveDungeonClear

```asm
// === 0841a0a6 DB_SaveDungeonClear::SaveDungeonClear  [0x0841a0a6-0x841a1a1] ===
 841a0a6:	55                   	push   %ebp
 841a0a7:	89 e5                	mov    %esp,%ebp
 841a0a9:	53                   	push   %ebx
 841a0aa:	83 ec 24             	sub    $0x24,%esp
 841a0ad:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 841a0b2:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 841a0b9:	00 
 841a0ba:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 841a0c1:	00 
 841a0c2:	89 04 24             	mov    %eax,(%esp)
 841a0c5:	e8 74 b1 fd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 841a0ca:	89 45 f4             	mov    %eax,-0xc(%ebp)
 841a0cd:	8b 45 0c             	mov    0xc(%ebp),%eax
 841a0d0:	8b 40 04             	mov    0x4(%eax),%eax
 841a0d3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 841a0da:	00 
 841a0db:	89 04 24             	mov    %eax,(%esp)
 841a0de:	e8 68 ef ce ff       	call   810904b <_Z14NumberToStringji>
 841a0e3:	8b 55 0c             	mov    0xc(%ebp),%edx
 841a0e6:	83 c2 0c             	add    $0xc,%edx
 841a0e9:	89 44 24 0c          	mov    %eax,0xc(%esp)
 841a0ed:	89 54 24 08          	mov    %edx,0x8(%esp)
 841a0f1:	c7 44 24 04 c0 a9 c4 	movl   $0x8c4a9c0,0x4(%esp)
 841a0f8:	08 
 841a0f9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 841a0fc:	89 04 24             	mov    %eax,(%esp)
 841a0ff:	e8 bc a0 fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 841a104:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 841a10b:	00 
 841a10c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 841a10f:	89 04 24             	mov    %eax,(%esp)
 841a112:	e8 0f a2 fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 841a117:	83 f0 01             	xor    $0x1,%eax
 841a11a:	84 c0                	test   %al,%al
 841a11c:	75 11                	jne    841a12f <_ZN19DB_SaveDungeonClear16SaveDungeonClearEP22SIG_SAVE_DUNGEON_CLEAR+0x89>
 841a11e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 841a121:	89 04 24             	mov    %eax,(%esp)
 841a124:	e8 e7 a1 fd ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 841a129:	09 d0                	or     %edx,%eax
 841a12b:	85 c0                	test   %eax,%eax
 841a12d:	75 07                	jne    841a136 <_ZN19DB_SaveDungeonClear16SaveDungeonClearEP22SIG_SAVE_DUNGEON_CLEAR+0x90>
 841a12f:	b8 01 00 00 00       	mov    $0x1,%eax
 841a134:	eb 05                	jmp    841a13b <_ZN19DB_SaveDungeonClear16SaveDungeonClearEP22SIG_SAVE_DUNGEON_CLEAR+0x95>
 841a136:	b8 00 00 00 00       	mov    $0x0,%eax
 841a13b:	84 c0                	test   %al,%al
 841a13d:	74 58                	je     841a197 <_ZN19DB_SaveDungeonClear16SaveDungeonClearEP22SIG_SAVE_DUNGEON_CLEAR+0xf1>
 841a13f:	8b 45 0c             	mov    0xc(%ebp),%eax
 841a142:	8d 58 0c             	lea    0xc(%eax),%ebx
 841a145:	8b 45 0c             	mov    0xc(%ebp),%eax
 841a148:	8b 40 04             	mov    0x4(%eax),%eax
 841a14b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 841a152:	00 
 841a153:	89 04 24             	mov    %eax,(%esp)
 841a156:	e8 f0 ee ce ff       	call   810904b <_Z14NumberToStringji>
 841a15b:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 841a15f:	89 44 24 08          	mov    %eax,0x8(%esp)
 841a163:	c7 44 24 04 f8 a9 c4 	movl   $0x8c4a9f8,0x4(%esp)
 841a16a:	08 
 841a16b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 841a16e:	89 04 24             	mov    %eax,(%esp)
 841a171:	e8 4a a0 fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 841a176:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 841a17d:	00 
 841a17e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 841a181:	89 04 24             	mov    %eax,(%esp)
 841a184:	e8 9d a1 fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 841a189:	83 f0 01             	xor    $0x1,%eax
 841a18c:	84 c0                	test   %al,%al
 841a18e:	74 07                	je     841a197 <_ZN19DB_SaveDungeonClear16SaveDungeonClearEP22SIG_SAVE_DUNGEON_CLEAR+0xf1>
 841a190:	b8 00 00 00 00       	mov    $0x0,%eax
 841a195:	eb 05                	jmp    841a19c <_ZN19DB_SaveDungeonClear16SaveDungeonClearEP22SIG_SAVE_DUNGEON_CLEAR+0xf6>
 841a197:	b8 01 00 00 00       	mov    $0x1,%eax
 841a19c:	83 c4 24             	add    $0x24,%esp
 841a19f:	5b                   	pop    %ebx
 841a1a0:	5d                   	pop    %ebp
 841a1a1:	c3                   	ret

```

```c
// DB_SaveDungeonClear::SaveDungeonClear @ 0x841a0a6

/* DB_SaveDungeonClear::SaveDungeonClear(SIG_SAVE_DUNGEON_CLEAR*) */

undefined4 __thiscall
DB_SaveDungeonClear::SaveDungeonClear(DB_SaveDungeonClear *this,SIG_SAVE_DUNGEON_CLEAR *param_1)

{
  bool bVar1;
  char cVar2;
  MySQL *this_00;
  undefined4 uVar3;
  longlong lVar4;
  
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  uVar3 = NumberToString(*(uint *)(param_1 + 4),0);
  MySQL::set_query(this_00,"upDate member_dungeon set dungeon=\'%s\' where m_id=%s",param_1 + 0xc,
                   uVar3);
  cVar2 = MySQL::exec(this_00,true);
  if ((cVar2 == '\x01') && (lVar4 = MySQL::getAffectedRowCount(this_00), lVar4 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    uVar3 = NumberToString(*(uint *)(param_1 + 4),0);
    MySQL::set_query(this_00,"inSert into member_dungeon (m_id,dungeon) values (%s,\'%s\')",uVar3,
                     param_1 + 0xc);
    cVar2 = MySQL::exec(this_00,true);
    if (cVar2 != '\x01') {
      return 0;
    }
  }
  return 1;
}

```

---

## SendResult

```asm
// === 0841a1a2 DB_SaveDungeonClear::SendResult  [0x0841a1a2-0x841a283] ===
 841a1a2:	55                   	push   %ebp
 841a1a3:	89 e5                	mov    %esp,%ebp
 841a1a5:	56                   	push   %esi
 841a1a6:	53                   	push   %ebx
 841a1a7:	83 ec 20             	sub    $0x20,%esp
 841a1aa:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 841a1af:	c7 44 24 08 23 4c 00 	movl   $0x4c23,0x8(%esp)
 841a1b6:	00 
 841a1b7:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 841a1be:	08 
 841a1bf:	89 04 24             	mov    %eax,(%esp)
 841a1c2:	e8 bf 58 e7 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 841a1c7:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 841a1ce:	00 
 841a1cf:	89 44 24 04          	mov    %eax,0x4(%esp)
 841a1d3:	8d 45 f0             	lea    -0x10(%ebp),%eax
 841a1d6:	89 04 24             	mov    %eax,(%esp)
 841a1d9:	e8 48 ea ca ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 841a1de:	8d 45 f0             	lea    -0x10(%ebp),%eax
 841a1e1:	89 04 24             	mov    %eax,(%esp)
 841a1e4:	e8 5d ea ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 841a1e9:	8b 55 0c             	mov    0xc(%ebp),%edx
 841a1ec:	89 54 24 04          	mov    %edx,0x4(%esp)
 841a1f0:	89 04 24             	mov    %eax,(%esp)
 841a1f3:	e8 5e ea ca ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 841a1f8:	8d 45 f0             	lea    -0x10(%ebp),%eax
 841a1fb:	89 04 24             	mov    %eax,(%esp)
 841a1fe:	e8 43 ea ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 841a203:	8b 55 10             	mov    0x10(%ebp),%edx
 841a206:	89 54 24 04          	mov    %edx,0x4(%esp)
 841a20a:	89 04 24             	mov    %eax,(%esp)
 841a20d:	e8 44 ea ca ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 841a212:	8d 45 f0             	lea    -0x10(%ebp),%eax
 841a215:	89 04 24             	mov    %eax,(%esp)
 841a218:	e8 31 ea ca ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 841a21d:	c7 44 24 08 0c 18 00 	movl   $0x180c,0x8(%esp)
 841a224:	00 
 841a225:	8b 55 14             	mov    0x14(%ebp),%edx
 841a228:	89 54 24 04          	mov    %edx,0x4(%esp)
 841a22c:	89 04 24             	mov    %eax,(%esp)
 841a22f:	e8 1e 44 cc ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 841a234:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 841a239:	8d 55 f0             	lea    -0x10(%ebp),%edx
 841a23c:	89 54 24 08          	mov    %edx,0x8(%esp)
 841a240:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 841a247:	00 
 841a248:	89 04 24             	mov    %eax,(%esp)
 841a24b:	e8 8e 6d 15 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 841a250:	bb 01 00 00 00       	mov    $0x1,%ebx
 841a255:	8d 45 f0             	lea    -0x10(%ebp),%eax
 841a258:	89 04 24             	mov    %eax,(%esp)
 841a25b:	e8 72 26 20 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 841a260:	89 d8                	mov    %ebx,%eax
 841a262:	83 c4 20             	add    $0x20,%esp
 841a265:	5b                   	pop    %ebx
 841a266:	5e                   	pop    %esi
 841a267:	5d                   	pop    %ebp
 841a268:	c3                   	ret
 841a269:	89 d3                	mov    %edx,%ebx
 841a26b:	89 c6                	mov    %eax,%esi
 841a26d:	8d 45 f0             	lea    -0x10(%ebp),%eax
 841a270:	89 04 24             	mov    %eax,(%esp)
 841a273:	e8 5a 26 20 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 841a278:	89 f0                	mov    %esi,%eax
 841a27a:	89 da                	mov    %ebx,%edx
 841a27c:	89 04 24             	mov    %eax,(%esp)
 841a27f:	e8 cc 94 6c 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// DB_SaveDungeonClear::SendResult @ 0x841a1a2

/* DB_SaveDungeonClear::SendResult(int, int, SIG_SAVE_DUNGEON_CLEAR*) */

undefined4 __thiscall
DB_SaveDungeonClear::SendResult
          (DB_SaveDungeonClear *this,int param_1,int param_2,SIG_SAVE_DUNGEON_CLEAR *param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x4c23);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0841a1f3 to 0841a24f has its CatchHandler @ 0841a269 */
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_14);
  CStreamGuard::put_binary(pCVar2,param_3,0x180c);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return 1;
}

```

---

## dispatch

```asm
// === 0841a056 DB_SaveDungeonClear::dispatch  [0x0841a056-0x841a0a5] ===
 841a056:	55                   	push   %ebp
 841a057:	89 e5                	mov    %esp,%ebp
 841a059:	83 ec 28             	sub    $0x28,%esp
 841a05c:	8b 45 14             	mov    0x14(%ebp),%eax
 841a05f:	89 04 24             	mov    %eax,(%esp)
 841a062:	e8 61 6f 03 00       	call   8450fc8 <_ZN6Stream12GetOutBufferI22SIG_SAVE_DUNGEON_CLEAREEPT_v>
 841a067:	89 45 f4             	mov    %eax,-0xc(%ebp)
 841a06a:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 841a06e:	75 07                	jne    841a077 <_ZN19DB_SaveDungeonClear8dispatchEiiP6Stream+0x21>
 841a070:	b8 00 00 00 00       	mov    $0x0,%eax
 841a075:	eb 2c                	jmp    841a0a3 <_ZN19DB_SaveDungeonClear8dispatchEiiP6Stream+0x4d>
 841a077:	8b 45 f4             	mov    -0xc(%ebp),%eax
 841a07a:	89 44 24 04          	mov    %eax,0x4(%esp)
 841a07e:	8b 45 08             	mov    0x8(%ebp),%eax
 841a081:	89 04 24             	mov    %eax,(%esp)
 841a084:	e8 1d 00 00 00       	call   841a0a6 <_ZN19DB_SaveDungeonClear16SaveDungeonClearEP22SIG_SAVE_DUNGEON_CLEAR>
 841a089:	88 45 f3             	mov    %al,-0xd(%ebp)
 841a08c:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 841a090:	83 f0 01             	xor    $0x1,%eax
 841a093:	84 c0                	test   %al,%al
 841a095:	74 07                	je     841a09e <_ZN19DB_SaveDungeonClear8dispatchEiiP6Stream+0x48>
 841a097:	b8 00 00 00 00       	mov    $0x0,%eax
 841a09c:	eb 05                	jmp    841a0a3 <_ZN19DB_SaveDungeonClear8dispatchEiiP6Stream+0x4d>
 841a09e:	b8 01 00 00 00       	mov    $0x1,%eax
 841a0a3:	c9                   	leave
 841a0a4:	c3                   	ret
 841a0a5:	90                   	nop

```

```c
// DB_SaveDungeonClear::dispatch @ 0x841a056

/* DB_SaveDungeonClear::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_SaveDungeonClear::dispatch(DB_SaveDungeonClear *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  SIG_SAVE_DUNGEON_CLEAR *pSVar2;
  undefined4 uVar3;
  
  pSVar2 = Stream::GetOutBuffer<SIG_SAVE_DUNGEON_CLEAR>(param_3);
  if (pSVar2 == (SIG_SAVE_DUNGEON_CLEAR *)0x0) {
    uVar3 = 0;
  }
  else {
    cVar1 = SaveDungeonClear(this,pSVar2);
    if (cVar1 == '\x01') {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

```

---

## ~DB_SaveDungeonClear

```asm
// === 0841a008 DB_SaveDungeonClear::~DB_SaveDungeonClear  [0x0841a008-0x841a037] ===
 841a008:	55                   	push   %ebp
 841a009:	89 e5                	mov    %esp,%ebp
 841a00b:	83 ec 18             	sub    $0x18,%esp
 841a00e:	8b 45 08             	mov    0x8(%ebp),%eax
 841a011:	c7 00 48 f9 c5 08    	movl   $0x8c5f948,(%eax)
 841a017:	8b 45 08             	mov    0x8(%ebp),%eax
 841a01a:	89 04 24             	mov    %eax,(%esp)
 841a01d:	e8 56 83 cc ff       	call   80e2378 <_ZN12DBDispatcherD1Ev>
 841a022:	b8 00 00 00 00       	mov    $0x0,%eax
 841a027:	84 c0                	test   %al,%al
 841a029:	74 0b                	je     841a036 <_ZN19DB_SaveDungeonClearD1Ev+0x2e>
 841a02b:	8b 45 08             	mov    0x8(%ebp),%eax
 841a02e:	89 04 24             	mov    %eax,(%esp)
 841a031:	e8 ba a4 30 00       	call   87244f0 <_ZdlPv>
 841a036:	c9                   	leave
 841a037:	c3                   	ret

```

```c
// DB_SaveDungeonClear::~DB_SaveDungeonClear @ 0x841a008

/* WARNING: Removing unreachable block (ram,0x0841a02b) */
/* DB_SaveDungeonClear::~DB_SaveDungeonClear() */

void __thiscall DB_SaveDungeonClear::~DB_SaveDungeonClear(DB_SaveDungeonClear *this)

{
  *(undefined ***)this = &PTR_dispatch_08c5f948;
  DBDispatcher::~DBDispatcher((DBDispatcher *)this);
  return;
}

```

---

## ~DB_SaveDungeonClear_0841a038

```asm
// === 0841a038 DB_SaveDungeonClear::~DB_SaveDungeonClear  [0x0841a038-0x841a055] ===
 841a038:	55                   	push   %ebp
 841a039:	89 e5                	mov    %esp,%ebp
 841a03b:	83 ec 18             	sub    $0x18,%esp
 841a03e:	8b 45 08             	mov    0x8(%ebp),%eax
 841a041:	89 04 24             	mov    %eax,(%esp)
 841a044:	e8 bf ff ff ff       	call   841a008 <_ZN19DB_SaveDungeonClearD1Ev>
 841a049:	8b 45 08             	mov    0x8(%ebp),%eax
 841a04c:	89 04 24             	mov    %eax,(%esp)
 841a04f:	e8 9c a4 30 00       	call   87244f0 <_ZdlPv>
 841a054:	c9                   	leave
 841a055:	c3                   	ret

```

```c
// DB_SaveDungeonClear::~DB_SaveDungeonClear @ 0x841a038

/* DB_SaveDungeonClear::~DB_SaveDungeonClear() */

void __thiscall DB_SaveDungeonClear::~DB_SaveDungeonClear(DB_SaveDungeonClear *this)

{
  ~DB_SaveDungeonClear(this);
  operator_delete(this);
  return;
}

```

