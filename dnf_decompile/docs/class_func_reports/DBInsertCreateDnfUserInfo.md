# DBInsertCreateDnfUserInfo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 0815c3b0 DBInsertCreateDnfUserInfo::dispatch  [0x0815c3b0-0x815c585] ===
 815c3b0:	55                   	push   %ebp
 815c3b1:	89 e5                	mov    %esp,%ebp
 815c3b3:	56                   	push   %esi
 815c3b4:	53                   	push   %ebx
 815c3b5:	83 ec 40             	sub    $0x40,%esp
 815c3b8:	8b 45 14             	mov    0x14(%ebp),%eax
 815c3bb:	89 04 24             	mov    %eax,(%esp)
 815c3be:	e8 b3 27 00 00       	call   815eb76 <_ZN6Stream12GetOutBufferIN25DBInsertCreateDnfUserInfo3MSGEEEPT_v>
 815c3c3:	89 45 ec             	mov    %eax,-0x14(%ebp)
 815c3c6:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 815c3ca:	75 2c                	jne    815c3f8 <_ZN25DBInsertCreateDnfUserInfo8dispatchEiiP6Stream+0x48>
 815c3cc:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 815c3d3:	e8 28 94 5c 00       	call   8725800 <__cxa_allocate_exception>
 815c3d8:	89 c2                	mov    %eax,%edx
 815c3da:	c7 02 0d 78 b7 08    	movl   $0x8b7780d,(%edx)
 815c3e0:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 815c3e7:	00 
 815c3e8:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 815c3ef:	09 
 815c3f0:	89 04 24             	mov    %eax,(%esp)
 815c3f3:	e8 58 88 5c 00       	call   8724c50 <__cxa_throw>
 815c3f8:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 815c3fd:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 815c404:	00 
 815c405:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 815c40c:	00 
 815c40d:	89 04 24             	mov    %eax,(%esp)
 815c410:	e8 29 8e 29 00       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 815c415:	89 45 f0             	mov    %eax,-0x10(%ebp)
 815c418:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 815c41c:	75 2c                	jne    815c44a <_ZN25DBInsertCreateDnfUserInfo8dispatchEiiP6Stream+0x9a>
 815c41e:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 815c425:	e8 d6 93 5c 00       	call   8725800 <__cxa_allocate_exception>
 815c42a:	89 c2                	mov    %eax,%edx
 815c42c:	c7 02 03 72 b7 08    	movl   $0x8b77203,(%edx)
 815c432:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 815c439:	00 
 815c43a:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 815c441:	09 
 815c442:	89 04 24             	mov    %eax,(%esp)
 815c445:	e8 06 88 5c 00       	call   8724c50 <__cxa_throw>
 815c44a:	e8 32 fd f6 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 815c44f:	8b 98 78 03 00 00    	mov    0x378(%eax),%ebx
 815c455:	8b 45 ec             	mov    -0x14(%ebp),%eax
 815c458:	8b 00                	mov    (%eax),%eax
 815c45a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 815c461:	00 
 815c462:	89 04 24             	mov    %eax,(%esp)
 815c465:	e8 e1 cb fa ff       	call   810904b <_Z14NumberToStringji>
 815c46a:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 815c46e:	89 44 24 08          	mov    %eax,0x8(%esp)
 815c472:	c7 44 24 04 e8 78 b7 	movl   $0x8b778e8,0x4(%esp)
 815c479:	08 
 815c47a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 815c47d:	89 04 24             	mov    %eax,(%esp)
 815c480:	e8 3b 7d 29 00       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 815c485:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 815c48c:	00 
 815c48d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 815c490:	89 04 24             	mov    %eax,(%esp)
 815c493:	e8 8e 7e 29 00       	call   83f4326 <_ZN5MySQL4execEb>
 815c498:	83 f0 01             	xor    $0x1,%eax
 815c49b:	84 c0                	test   %al,%al
 815c49d:	74 2c                	je     815c4cb <_ZN25DBInsertCreateDnfUserInfo8dispatchEiiP6Stream+0x11b>
 815c49f:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 815c4a6:	e8 55 93 5c 00       	call   8725800 <__cxa_allocate_exception>
 815c4ab:	89 c2                	mov    %eax,%edx
 815c4ad:	c7 02 b2 73 b7 08    	movl   $0x8b773b2,(%edx)
 815c4b3:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 815c4ba:	00 
 815c4bb:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 815c4c2:	09 
 815c4c3:	89 04 24             	mov    %eax,(%esp)
 815c4c6:	e8 85 87 5c 00       	call   8724c50 <__cxa_throw>
 815c4cb:	8b 45 ec             	mov    -0x14(%ebp),%eax
 815c4ce:	8b 18                	mov    (%eax),%ebx
 815c4d0:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 815c4d7:	00 
 815c4d8:	c7 44 24 08 81 02 00 	movl   $0x281,0x8(%esp)
 815c4df:	00 
 815c4e0:	c7 44 24 04 80 8f b7 	movl   $0x8b78f80,0x4(%esp)
 815c4e7:	08 
 815c4e8:	8d 45 dc             	lea    -0x24(%ebp),%eax
 815c4eb:	89 04 24             	mov    %eax,(%esp)
 815c4ee:	e8 25 32 3f 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 815c4f3:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 815c4f7:	c7 44 24 04 50 79 b7 	movl   $0x8b77950,0x4(%esp)
 815c4fe:	08 
 815c4ff:	8d 45 dc             	lea    -0x24(%ebp),%eax
 815c502:	89 04 24             	mov    %eax,(%esp)
 815c505:	e8 7e 32 3f 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 815c50a:	bb 01 00 00 00       	mov    $0x1,%ebx
 815c50f:	eb 6c                	jmp    815c57d <_ZN25DBInsertCreateDnfUserInfo8dispatchEiiP6Stream+0x1cd>
 815c511:	83 fa 01             	cmp    $0x1,%edx
 815c514:	74 08                	je     815c51e <_ZN25DBInsertCreateDnfUserInfo8dispatchEiiP6Stream+0x16e>
 815c516:	89 04 24             	mov    %eax,(%esp)
 815c519:	e8 32 72 98 00       	call   8ae3750 <_Unwind_Resume>
 815c51e:	89 04 24             	mov    %eax,(%esp)
 815c521:	e8 ba 97 5c 00       	call   8725ce0 <__cxa_begin_catch>
 815c526:	89 45 f4             	mov    %eax,-0xc(%ebp)
 815c529:	8b 45 f4             	mov    -0xc(%ebp),%eax
 815c52c:	89 44 24 14          	mov    %eax,0x14(%esp)
 815c530:	c7 44 24 10 88 79 b7 	movl   $0x8b77988,0x10(%esp)
 815c537:	08 
 815c538:	c7 44 24 0c 86 02 00 	movl   $0x286,0xc(%esp)
 815c53f:	00 
 815c540:	c7 44 24 08 80 8f b7 	movl   $0x8b78f80,0x8(%esp)
 815c547:	08 
 815c548:	c7 44 24 04 d4 72 b7 	movl   $0x8b772d4,0x4(%esp)
 815c54f:	08 
 815c550:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 815c557:	e8 ae 76 97 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 815c55c:	bb 00 00 00 00       	mov    $0x0,%ebx
 815c561:	e8 ca 96 5c 00       	call   8725c30 <__cxa_end_catch>
 815c566:	eb 15                	jmp    815c57d <_ZN25DBInsertCreateDnfUserInfo8dispatchEiiP6Stream+0x1cd>
 815c568:	89 d3                	mov    %edx,%ebx
 815c56a:	89 c6                	mov    %eax,%esi
 815c56c:	e8 bf 96 5c 00       	call   8725c30 <__cxa_end_catch>
 815c571:	89 f0                	mov    %esi,%eax
 815c573:	89 da                	mov    %ebx,%edx
 815c575:	89 04 24             	mov    %eax,(%esp)
 815c578:	e8 d3 71 98 00       	call   8ae3750 <_Unwind_Resume>
 815c57d:	89 d8                	mov    %ebx,%eax
 815c57f:	83 c4 40             	add    $0x40,%esp
 815c582:	5b                   	pop    %ebx
 815c583:	5e                   	pop    %esi
 815c584:	5d                   	pop    %ebp
 815c585:	c3                   	ret

```

```c
// DBInsertCreateDnfUserInfo::dispatch @ 0x815c3b0

/* DBInsertCreateDnfUserInfo::dispatch(int, int, Stream*) */

undefined4 DBInsertCreateDnfUserInfo::dispatch(int param_1,int param_2,Stream *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  char cVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  Stream *in_stack_00000010;
  cMyTrace local_28 [16];
  MSG *local_18;
  MySQL *local_14;
  
                    /* try { // try from 0815c3be to 0815c509 has its CatchHandler @ 0815c511 */
  local_18 = Stream::GetOutBuffer<DBInsertCreateDnfUserInfo::MSG>(in_stack_00000010);
  if (local_18 == (MSG *)0x0) {
    puVar4 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar4 = "msg is null";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar4,&char_const*::typeinfo,0);
  }
  local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
  if (local_14 == (MySQL *)0x0) {
    puVar4 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar4 = "handle null";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar4,&char_const*::typeinfo,0);
  }
  iVar5 = G_CEnvironment();
  uVar1 = *(undefined4 *)(iVar5 + 0x378);
  uVar6 = NumberToString(*(uint *)local_18,0);
  MySQL::set_query(local_14,
                   "inSert into event_create_dnf_user(occ_date,m_id,server_id,occ_time) VALUES(CURDATE(),%s,%d,CURTIME())"
                   ,uVar6,uVar1);
  cVar3 = MySQL::exec(local_14,true);
  if (cVar3 != '\x01') {
    puVar4 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar4 = "insert_exec";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar4,&char_const*::typeinfo,0);
  }
  uVar2 = *(uint *)local_18;
  cMyTrace::cMyTrace(local_28,"virtual bool DBInsertCreateDnfUserInfo::dispatch(int, int, Stream*)",
                     0x281,0);
  cMyTrace::operator()(local_28,"[Taiwan, Event] insert event_create_dnf_user. m_id:%d",uVar2);
  return 1;
}

```

---

## makeRequest

```asm
// === 0815c25c DBInsertCreateDnfUserInfo::makeRequest  [0x0815c25c-0x815c3af] ===
 815c25c:	55                   	push   %ebp
 815c25d:	89 e5                	mov    %esp,%ebp
 815c25f:	56                   	push   %esi
 815c260:	53                   	push   %ebx
 815c261:	83 ec 30             	sub    $0x30,%esp
 815c264:	a1 30 f7 41 09       	mov    0x941f730,%eax
 815c269:	c7 44 24 04 a0 00 00 	movl   $0xa0,0x4(%esp)
 815c270:	00 
 815c271:	89 04 24             	mov    %eax,(%esp)
 815c274:	e8 1f 97 fb ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 815c279:	89 45 f0             	mov    %eax,-0x10(%ebp)
 815c27c:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 815c280:	74 21                	je     815c2a3 <_ZN25DBInsertCreateDnfUserInfo11makeRequestEij+0x47>
 815c282:	8b 45 f0             	mov    -0x10(%ebp),%eax
 815c285:	8b 00                	mov    (%eax),%eax
 815c287:	83 c0 34             	add    $0x34,%eax
 815c28a:	8b 10                	mov    (%eax),%edx
 815c28c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 815c293:	00 
 815c294:	8b 45 f0             	mov    -0x10(%ebp),%eax
 815c297:	89 04 24             	mov    %eax,(%esp)
 815c29a:	ff d2                	call   *%edx
 815c29c:	83 f0 01             	xor    $0x1,%eax
 815c29f:	84 c0                	test   %al,%al
 815c2a1:	74 07                	je     815c2aa <_ZN25DBInsertCreateDnfUserInfo11makeRequestEij+0x4e>
 815c2a3:	b8 01 00 00 00       	mov    $0x1,%eax
 815c2a8:	eb 05                	jmp    815c2af <_ZN25DBInsertCreateDnfUserInfo11makeRequestEij+0x53>
 815c2aa:	b8 00 00 00 00       	mov    $0x0,%eax
 815c2af:	84 c0                	test   %al,%al
 815c2b1:	0f 85 f0 00 00 00    	jne    815c3a7 <_ZN25DBInsertCreateDnfUserInfo11makeRequestEij+0x14b>
 815c2b7:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 815c2bc:	c7 44 24 08 61 02 00 	movl   $0x261,0x8(%esp)
 815c2c3:	00 
 815c2c4:	c7 44 24 04 d4 72 b7 	movl   $0x8b772d4,0x4(%esp)
 815c2cb:	08 
 815c2cc:	89 04 24             	mov    %eax,(%esp)
 815c2cf:	e8 b2 37 13 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 815c2d4:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 815c2db:	00 
 815c2dc:	89 44 24 04          	mov    %eax,0x4(%esp)
 815c2e0:	8d 45 d8             	lea    -0x28(%ebp),%eax
 815c2e3:	89 04 24             	mov    %eax,(%esp)
 815c2e6:	e8 3b c9 f6 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 815c2eb:	8b 45 08             	mov    0x8(%ebp),%eax
 815c2ee:	89 44 24 08          	mov    %eax,0x8(%esp)
 815c2f2:	c7 44 24 04 0b 00 00 	movl   $0xb,0x4(%esp)
 815c2f9:	00 
 815c2fa:	8d 45 d8             	lea    -0x28(%ebp),%eax
 815c2fd:	89 04 24             	mov    %eax,(%esp)
 815c300:	e8 4b 76 00 00       	call   8163950 <_ZN6Taiwan15internal_streamER12CStreamGuardN18TaiwanInternalPack1TEi>
 815c305:	8d 45 d8             	lea    -0x28(%ebp),%eax
 815c308:	89 04 24             	mov    %eax,(%esp)
 815c30b:	e8 3e c9 f6 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 815c310:	89 04 24             	mov    %eax,(%esp)
 815c313:	e8 48 28 00 00       	call   815eb60 <_ZN12CStreamGuard11GetInBufferIN25DBInsertCreateDnfUserInfo3MSGEEEPT_v>
 815c318:	89 45 f4             	mov    %eax,-0xc(%ebp)
 815c31b:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 815c31f:	75 38                	jne    815c359 <_ZN25DBInsertCreateDnfUserInfo11makeRequestEij+0xfd>
 815c321:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 815c328:	00 
 815c329:	c7 44 24 08 67 02 00 	movl   $0x267,0x8(%esp)
 815c330:	00 
 815c331:	c7 44 24 04 e0 8f b7 	movl   $0x8b78fe0,0x4(%esp)
 815c338:	08 
 815c339:	8d 45 e0             	lea    -0x20(%ebp),%eax
 815c33c:	89 04 24             	mov    %eax,(%esp)
 815c33f:	e8 d4 33 3f 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 815c344:	c7 44 24 04 f1 77 b7 	movl   $0x8b777f1,0x4(%esp)
 815c34b:	08 
 815c34c:	8d 45 e0             	lea    -0x20(%ebp),%eax
 815c34f:	89 04 24             	mov    %eax,(%esp)
 815c352:	e8 31 34 3f 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 815c357:	eb 41                	jmp    815c39a <_ZN25DBInsertCreateDnfUserInfo11makeRequestEij+0x13e>
 815c359:	8b 45 f4             	mov    -0xc(%ebp),%eax
 815c35c:	8b 55 0c             	mov    0xc(%ebp),%edx
 815c35f:	89 10                	mov    %edx,(%eax)
 815c361:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 815c366:	8d 55 d8             	lea    -0x28(%ebp),%edx
 815c369:	89 54 24 08          	mov    %edx,0x8(%esp)
 815c36d:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 815c374:	00 
 815c375:	89 04 24             	mov    %eax,(%esp)
 815c378:	e8 61 4c 41 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 815c37d:	eb 1b                	jmp    815c39a <_ZN25DBInsertCreateDnfUserInfo11makeRequestEij+0x13e>
 815c37f:	89 d3                	mov    %edx,%ebx
 815c381:	89 c6                	mov    %eax,%esi
 815c383:	8d 45 d8             	lea    -0x28(%ebp),%eax
 815c386:	89 04 24             	mov    %eax,(%esp)
 815c389:	e8 44 05 4c 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 815c38e:	89 f0                	mov    %esi,%eax
 815c390:	89 da                	mov    %ebx,%edx
 815c392:	89 04 24             	mov    %eax,(%esp)
 815c395:	e8 b6 73 98 00       	call   8ae3750 <_Unwind_Resume>
 815c39a:	8d 45 d8             	lea    -0x28(%ebp),%eax
 815c39d:	89 04 24             	mov    %eax,(%esp)
 815c3a0:	e8 2d 05 4c 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 815c3a5:	eb 01                	jmp    815c3a8 <_ZN25DBInsertCreateDnfUserInfo11makeRequestEij+0x14c>
 815c3a7:	90                   	nop
 815c3a8:	83 c4 30             	add    $0x30,%esp
 815c3ab:	5b                   	pop    %ebx
 815c3ac:	5e                   	pop    %esi
 815c3ad:	5d                   	pop    %ebp
 815c3ae:	c3                   	ret
 815c3af:	90                   	nop

```

```c
// DBInsertCreateDnfUserInfo::makeRequest @ 0x815c25c

/* DBInsertCreateDnfUserInfo::makeRequest(int, unsigned int) */

void DBInsertCreateDnfUserInfo::makeRequest(int param_1,uint param_2)

{
  bool bVar1;
  char cVar2;
  Stream *pSVar3;
  CStreamGuard *this;
  CStreamGuard local_2c [8];
  cMyTrace local_24 [16];
  int *local_14;
  MSG *local_10;
  
  local_14 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0xa0);
  if (local_14 != (int *)0x0) {
    cVar2 = (**(code **)(*local_14 + 0x34))(local_14,0);
    if (cVar2 == '\x01') {
      bVar1 = false;
      goto LAB_0815c2af;
    }
  }
  bVar1 = true;
LAB_0815c2af:
  if (!bVar1) {
    pSVar3 = (Stream *)
             StreamPool::Acquire(GlobalData::s_stream_pool,
                                 "localtaiwan/Dispatcher/Taiwan_DbThread.cpp",0x261);
    CStreamGuard::CStreamGuard(local_2c,pSVar3,true);
                    /* try { // try from 0815c300 to 0815c37c has its CatchHandler @ 0815c37f */
    Taiwan::internal_stream(local_2c,0xb,param_1);
    this = (CStreamGuard *)CStreamGuard::operator->(local_2c);
    local_10 = CStreamGuard::GetInBuffer<DBInsertCreateDnfUserInfo::MSG>(this);
    if (local_10 == (MSG *)0x0) {
      cMyTrace::cMyTrace(local_24,
                         "static void DBInsertCreateDnfUserInfo::makeRequest(int, memberIdentificationNumber_t)"
                         ,0x267,0);
      cMyTrace::operator()(local_24,"[Taiwan, Event] msg is null");
    }
    else {
      *(uint *)local_10 = param_2;
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_2c);
    }
    CStreamGuard::~CStreamGuard(local_2c);
  }
  return;
}

```

