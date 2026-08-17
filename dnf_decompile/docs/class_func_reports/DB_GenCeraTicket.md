# DB_GenCeraTicket

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 0841a2f8 DB_GenCeraTicket::dispatch  [0x0841a2f8-0x841a519] ===
 841a2f8:	55                   	push   %ebp
 841a2f9:	89 e5                	mov    %esp,%ebp
 841a2fb:	56                   	push   %esi
 841a2fc:	53                   	push   %ebx
 841a2fd:	83 ec 60             	sub    $0x60,%esp
 841a300:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 841a307:	8d 45 e8             	lea    -0x18(%ebp),%eax
 841a30a:	89 44 24 04          	mov    %eax,0x4(%esp)
 841a30e:	8b 45 14             	mov    0x14(%ebp),%eax
 841a311:	89 04 24             	mov    %eax,(%esp)
 841a314:	e8 7d 24 20 00       	call   861c796 <_ZN6StreamrsERj>
 841a319:	8d 45 ec             	lea    -0x14(%ebp),%eax
 841a31c:	89 44 24 04          	mov    %eax,0x4(%esp)
 841a320:	8b 45 14             	mov    0x14(%ebp),%eax
 841a323:	89 04 24             	mov    %eax,(%esp)
 841a326:	e8 99 22 20 00       	call   861c5c4 <_ZN6StreamrsERi>
 841a32b:	8d 45 c0             	lea    -0x40(%ebp),%eax
 841a32e:	89 44 24 04          	mov    %eax,0x4(%esp)
 841a332:	8b 45 14             	mov    0x14(%ebp),%eax
 841a335:	89 04 24             	mov    %eax,(%esp)
 841a338:	e8 6b 23 20 00       	call   861c6a8 <_ZN6StreamrsEPc>
 841a33d:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 841a342:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 841a349:	00 
 841a34a:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 841a351:	00 
 841a352:	89 04 24             	mov    %eax,(%esp)
 841a355:	e8 e4 ae fd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 841a35a:	89 45 f0             	mov    %eax,-0x10(%ebp)
 841a35d:	8b 5d ec             	mov    -0x14(%ebp),%ebx
 841a360:	8b 45 e8             	mov    -0x18(%ebp),%eax
 841a363:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 841a36a:	00 
 841a36b:	89 04 24             	mov    %eax,(%esp)
 841a36e:	e8 d8 ec ce ff       	call   810904b <_Z14NumberToStringji>
 841a373:	c7 44 24 14 03 00 00 	movl   $0x3,0x14(%esp)
 841a37a:	00 
 841a37b:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 841a37f:	8d 55 c0             	lea    -0x40(%ebp),%edx
 841a382:	89 54 24 0c          	mov    %edx,0xc(%esp)
 841a386:	89 44 24 08          	mov    %eax,0x8(%esp)
 841a38a:	c7 44 24 04 34 aa c4 	movl   $0x8c4aa34,0x4(%esp)
 841a391:	08 
 841a392:	8b 45 f0             	mov    -0x10(%ebp),%eax
 841a395:	89 04 24             	mov    %eax,(%esp)
 841a398:	e8 23 9e fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 841a39d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 841a3a4:	00 
 841a3a5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 841a3a8:	89 04 24             	mov    %eax,(%esp)
 841a3ab:	e8 76 9f fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 841a3b0:	88 45 f7             	mov    %al,-0x9(%ebp)
 841a3b3:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 841a3b7:	83 f0 01             	xor    $0x1,%eax
 841a3ba:	84 c0                	test   %al,%al
 841a3bc:	74 70                	je     841a42e <_ZN16DB_GenCeraTicket8dispatchEiiP6Stream+0x136>
 841a3be:	8b 45 e8             	mov    -0x18(%ebp),%eax
 841a3c1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 841a3c8:	00 
 841a3c9:	89 04 24             	mov    %eax,(%esp)
 841a3cc:	e8 7a ec ce ff       	call   810904b <_Z14NumberToStringji>
 841a3d1:	8b 55 ec             	mov    -0x14(%ebp),%edx
 841a3d4:	89 44 24 18          	mov    %eax,0x18(%esp)
 841a3d8:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 841a3df:	00 
 841a3e0:	c7 44 24 10 03 00 00 	movl   $0x3,0x10(%esp)
 841a3e7:	00 
 841a3e8:	89 54 24 0c          	mov    %edx,0xc(%esp)
 841a3ec:	8d 45 c0             	lea    -0x40(%ebp),%eax
 841a3ef:	89 44 24 08          	mov    %eax,0x8(%esp)
 841a3f3:	c7 44 24 04 cc aa c4 	movl   $0x8c4aacc,0x4(%esp)
 841a3fa:	08 
 841a3fb:	8b 45 f0             	mov    -0x10(%ebp),%eax
 841a3fe:	89 04 24             	mov    %eax,(%esp)
 841a401:	e8 ba 9d fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 841a406:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 841a40d:	00 
 841a40e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 841a411:	89 04 24             	mov    %eax,(%esp)
 841a414:	e8 0d 9f fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 841a419:	88 45 f7             	mov    %al,-0x9(%ebp)
 841a41c:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 841a420:	83 f0 01             	xor    $0x1,%eax
 841a423:	84 c0                	test   %al,%al
 841a425:	74 07                	je     841a42e <_ZN16DB_GenCeraTicket8dispatchEiiP6Stream+0x136>
 841a427:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 841a42e:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 841a433:	c7 44 24 08 6d 4c 00 	movl   $0x4c6d,0x8(%esp)
 841a43a:	00 
 841a43b:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 841a442:	08 
 841a443:	89 04 24             	mov    %eax,(%esp)
 841a446:	e8 3b 56 e7 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 841a44b:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 841a452:	00 
 841a453:	89 44 24 04          	mov    %eax,0x4(%esp)
 841a457:	8d 45 e0             	lea    -0x20(%ebp),%eax
 841a45a:	89 04 24             	mov    %eax,(%esp)
 841a45d:	e8 c4 e7 ca ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 841a462:	8d 45 e0             	lea    -0x20(%ebp),%eax
 841a465:	89 04 24             	mov    %eax,(%esp)
 841a468:	e8 d9 e7 ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 841a46d:	8b 55 0c             	mov    0xc(%ebp),%edx
 841a470:	89 54 24 04          	mov    %edx,0x4(%esp)
 841a474:	89 04 24             	mov    %eax,(%esp)
 841a477:	e8 da e7 ca ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 841a47c:	8d 45 e0             	lea    -0x20(%ebp),%eax
 841a47f:	89 04 24             	mov    %eax,(%esp)
 841a482:	e8 bf e7 ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 841a487:	8b 55 10             	mov    0x10(%ebp),%edx
 841a48a:	89 54 24 04          	mov    %edx,0x4(%esp)
 841a48e:	89 04 24             	mov    %eax,(%esp)
 841a491:	e8 c0 e7 ca ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 841a496:	8b 5d ec             	mov    -0x14(%ebp),%ebx
 841a499:	8d 45 e0             	lea    -0x20(%ebp),%eax
 841a49c:	89 04 24             	mov    %eax,(%esp)
 841a49f:	e8 a2 e7 ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 841a4a4:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 841a4a8:	89 04 24             	mov    %eax,(%esp)
 841a4ab:	e8 a6 e7 ca ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 841a4b0:	8d 45 e0             	lea    -0x20(%ebp),%eax
 841a4b3:	89 04 24             	mov    %eax,(%esp)
 841a4b6:	e8 8b e7 ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 841a4bb:	8d 55 c0             	lea    -0x40(%ebp),%edx
 841a4be:	89 54 24 04          	mov    %edx,0x4(%esp)
 841a4c2:	89 04 24             	mov    %eax,(%esp)
 841a4c5:	e8 c0 08 e1 ff       	call   822ad8a <_ZN12CStreamGuardlsEPc>
 841a4ca:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 841a4cf:	8d 55 e0             	lea    -0x20(%ebp),%edx
 841a4d2:	89 54 24 08          	mov    %edx,0x8(%esp)
 841a4d6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 841a4dd:	00 
 841a4de:	89 04 24             	mov    %eax,(%esp)
 841a4e1:	e8 f8 6a 15 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 841a4e6:	bb 01 00 00 00       	mov    $0x1,%ebx
 841a4eb:	8d 45 e0             	lea    -0x20(%ebp),%eax
 841a4ee:	89 04 24             	mov    %eax,(%esp)
 841a4f1:	e8 dc 23 20 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 841a4f6:	89 d8                	mov    %ebx,%eax
 841a4f8:	83 c4 60             	add    $0x60,%esp
 841a4fb:	5b                   	pop    %ebx
 841a4fc:	5e                   	pop    %esi
 841a4fd:	5d                   	pop    %ebp
 841a4fe:	c3                   	ret
 841a4ff:	89 d3                	mov    %edx,%ebx
 841a501:	89 c6                	mov    %eax,%esi
 841a503:	8d 45 e0             	lea    -0x20(%ebp),%eax
 841a506:	89 04 24             	mov    %eax,(%esp)
 841a509:	e8 c4 23 20 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 841a50e:	89 f0                	mov    %esi,%eax
 841a510:	89 da                	mov    %ebx,%edx
 841a512:	89 04 24             	mov    %eax,(%esp)
 841a515:	e8 36 92 6c 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// DB_GenCeraTicket::dispatch @ 0x841a2f8

/* DB_GenCeraTicket::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_GenCeraTicket::dispatch(DB_GenCeraTicket *this,int param_1,int param_2,Stream *param_3)

{
  int iVar1;
  undefined4 uVar2;
  Stream *pSVar3;
  CStreamGuard *pCVar4;
  char local_44 [32];
  CStreamGuard local_24 [8];
  uint local_1c;
  int local_18;
  MySQL *local_14;
  char local_d;
  
  local_18 = 0;
  Stream::operator>>(param_3,&local_1c);
  Stream::operator>>(param_3,&local_18);
  Stream::operator>>(param_3,local_44);
  local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  iVar1 = local_18;
  uVar2 = NumberToString(local_1c,0);
  MySQL::set_query(local_14,
                   "inSert into user_cera_ticket(m_id,ticket_id,ticketKey,expire_time,delete_flag,update_time) values(%s,\'%s\',%d,adddate(now(),interval %d hour), 0, now())"
                   ,uVar2,local_44,iVar1,3);
  local_d = MySQL::exec(local_14,true);
  if (local_d != '\x01') {
    uVar2 = NumberToString(local_1c,0);
    MySQL::set_query(local_14,
                     "upDate user_cera_ticket set ticket_id=\'%s\',ticketKey=%d,expire_time=adddate(now(),interval %d hour), delete_flag=%d, update_time=now() where m_id=%s"
                     ,local_44,local_18,3,0,uVar2);
    local_d = MySQL::exec(local_14,true);
    if (local_d != '\x01') {
      local_18 = 0;
    }
  }
  pSVar3 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x4c6d);
  CStreamGuard::CStreamGuard(local_24,pSVar3,true);
  pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_24);
                    /* try { // try from 0841a477 to 0841a4e5 has its CatchHandler @ 0841a4ff */
  CStreamGuard::operator<<(pCVar4,param_1);
  pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_24);
  CStreamGuard::operator<<(pCVar4,param_2);
  iVar1 = local_18;
  pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_24);
  CStreamGuard::operator<<(pCVar4,iVar1);
  pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_24);
  CStreamGuard::operator<<(pCVar4,local_44);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_24);
  CStreamGuard::~CStreamGuard(local_24);
  return 1;
}

```

