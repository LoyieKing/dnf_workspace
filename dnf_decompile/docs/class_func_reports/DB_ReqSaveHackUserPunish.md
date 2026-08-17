# DB_ReqSaveHackUserPunish

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 08425374 DB_ReqSaveHackUserPunish::dispatch  [0x08425374-0x8425493] ===
 8425374:	55                   	push   %ebp
 8425375:	89 e5                	mov    %esp,%ebp
 8425377:	83 ec 28             	sub    $0x28,%esp
 842537a:	8b 45 14             	mov    0x14(%ebp),%eax
 842537d:	89 04 24             	mov    %eax,(%esp)
 8425380:	e8 11 cc 02 00       	call   8451f96 <_ZN6Stream12GetOutBufferI25SIG_SAVE_HACK_USER_PUNISHEEPT_v>
 8425385:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8425388:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 842538d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8425394:	00 
 8425395:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 842539c:	00 
 842539d:	89 04 24             	mov    %eax,(%esp)
 84253a0:	e8 99 fe fc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 84253a5:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84253a8:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 84253ad:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84253b4:	00 
 84253b5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84253bc:	00 
 84253bd:	89 04 24             	mov    %eax,(%esp)
 84253c0:	e8 79 fe fc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 84253c5:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84253c8:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84253cb:	8b 00                	mov    (%eax),%eax
 84253cd:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84253d4:	00 
 84253d5:	89 04 24             	mov    %eax,(%esp)
 84253d8:	e8 6e 3c ce ff       	call   810904b <_Z14NumberToStringji>
 84253dd:	c7 44 24 0c 02 00 00 	movl   $0x2,0xc(%esp)
 84253e4:	00 
 84253e5:	89 44 24 08          	mov    %eax,0x8(%esp)
 84253e9:	c7 44 24 04 e8 e4 c4 	movl   $0x8c4e4e8,0x4(%esp)
 84253f0:	08 
 84253f1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84253f4:	89 04 24             	mov    %eax,(%esp)
 84253f7:	e8 c4 ed fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84253fc:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8425403:	00 
 8425404:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8425407:	89 04 24             	mov    %eax,(%esp)
 842540a:	e8 17 ef fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 842540f:	83 f0 01             	xor    $0x1,%eax
 8425412:	84 c0                	test   %al,%al
 8425414:	75 11                	jne    8425427 <_ZN24DB_ReqSaveHackUserPunish8dispatchEiiP6Stream+0xb3>
 8425416:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8425419:	89 04 24             	mov    %eax,(%esp)
 842541c:	e8 ef ee fc ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 8425421:	09 d0                	or     %edx,%eax
 8425423:	85 c0                	test   %eax,%eax
 8425425:	75 07                	jne    842542e <_ZN24DB_ReqSaveHackUserPunish8dispatchEiiP6Stream+0xba>
 8425427:	b8 01 00 00 00       	mov    $0x1,%eax
 842542c:	eb 05                	jmp    8425433 <_ZN24DB_ReqSaveHackUserPunish8dispatchEiiP6Stream+0xbf>
 842542e:	b8 00 00 00 00       	mov    $0x0,%eax
 8425433:	84 c0                	test   %al,%al
 8425435:	74 55                	je     842548c <_ZN24DB_ReqSaveHackUserPunish8dispatchEiiP6Stream+0x118>
 8425437:	8b 45 ec             	mov    -0x14(%ebp),%eax
 842543a:	8b 00                	mov    (%eax),%eax
 842543c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8425443:	00 
 8425444:	89 04 24             	mov    %eax,(%esp)
 8425447:	e8 ff 3b ce ff       	call   810904b <_Z14NumberToStringji>
 842544c:	c7 44 24 0c 02 00 00 	movl   $0x2,0xc(%esp)
 8425453:	00 
 8425454:	89 44 24 08          	mov    %eax,0x8(%esp)
 8425458:	c7 44 24 04 88 e5 c4 	movl   $0x8c4e588,0x4(%esp)
 842545f:	08 
 8425460:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8425463:	89 04 24             	mov    %eax,(%esp)
 8425466:	e8 55 ed fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 842546b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8425472:	00 
 8425473:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8425476:	89 04 24             	mov    %eax,(%esp)
 8425479:	e8 a8 ee fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 842547e:	83 f0 01             	xor    $0x1,%eax
 8425481:	84 c0                	test   %al,%al
 8425483:	74 07                	je     842548c <_ZN24DB_ReqSaveHackUserPunish8dispatchEiiP6Stream+0x118>
 8425485:	b8 00 00 00 00       	mov    $0x0,%eax
 842548a:	eb 05                	jmp    8425491 <_ZN24DB_ReqSaveHackUserPunish8dispatchEiiP6Stream+0x11d>
 842548c:	b8 01 00 00 00       	mov    $0x1,%eax
 8425491:	c9                   	leave
 8425492:	c3                   	ret
 8425493:	90                   	nop

```

```c
// DB_ReqSaveHackUserPunish::dispatch @ 0x8425374

/* DB_ReqSaveHackUserPunish::dispatch(int, int, Stream*) */

undefined4 DB_ReqSaveHackUserPunish::dispatch(int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  char cVar2;
  SIG_SAVE_HACK_USER_PUNISH *pSVar3;
  MySQL *this;
  undefined4 uVar4;
  longlong lVar5;
  Stream *in_stack_00000010;
  
  pSVar3 = Stream::GetOutBuffer<SIG_SAVE_HACK_USER_PUNISH>(in_stack_00000010);
  DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  uVar4 = NumberToString(*(uint *)pSVar3,0);
  MySQL::set_query(this,
                   "upDate member_punish_info set occ_time=now(), start_time=now(), end_time=\'9999-12-31 23:59:59\', punish_value=0, apply_flag=2 where m_id=%s and punish_type=%d"
                   ,uVar4,2);
  cVar2 = MySQL::exec(this,true);
  if ((cVar2 == '\x01') && (lVar5 = MySQL::getAffectedRowCount(this), lVar5 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    uVar4 = NumberToString(*(uint *)pSVar3,0);
    MySQL::set_query(this,
                     "inSert into member_punish_info(m_id, punish_type, occ_time, start_time, end_time, punish_value, apply_flag) values(%s, %d, now(), now(), \'9999-12-31 23:59:59\', 0, 2)"
                     ,uVar4,2);
    cVar2 = MySQL::exec(this,true);
    if (cVar2 != '\x01') {
      return 0;
    }
  }
  return 1;
}

```

---

## makeRequest

```asm
// === 08425494 DB_ReqSaveHackUserPunish::makeRequest  [0x08425494-0x84255ba] ===
 8425494:	55                   	push   %ebp
 8425495:	89 e5                	mov    %esp,%ebp
 8425497:	56                   	push   %esi
 8425498:	53                   	push   %ebx
 8425499:	83 ec 20             	sub    $0x20,%esp
 842549c:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 84254a1:	c7 44 24 08 04 63 00 	movl   $0x6304,0x8(%esp)
 84254a8:	00 
 84254a9:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 84254b0:	08 
 84254b1:	89 04 24             	mov    %eax,(%esp)
 84254b4:	e8 cd a5 e6 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 84254b9:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84254c0:	00 
 84254c1:	89 44 24 04          	mov    %eax,0x4(%esp)
 84254c5:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84254c8:	89 04 24             	mov    %eax,(%esp)
 84254cb:	e8 56 37 ca ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 84254d0:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84254d3:	89 04 24             	mov    %eax,(%esp)
 84254d6:	e8 6b 37 ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84254db:	c7 44 24 04 b5 00 00 	movl   $0xb5,0x4(%esp)
 84254e2:	00 
 84254e3:	89 04 24             	mov    %eax,(%esp)
 84254e6:	e8 6b 37 ca ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84254eb:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84254ee:	89 04 24             	mov    %eax,(%esp)
 84254f1:	e8 50 37 ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84254f6:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84254fd:	ff 
 84254fe:	89 04 24             	mov    %eax,(%esp)
 8425501:	e8 50 37 ca ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8425506:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8425509:	89 04 24             	mov    %eax,(%esp)
 842550c:	e8 3d 37 ca ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8425511:	89 04 24             	mov    %eax,(%esp)
 8425514:	e8 d1 ca 02 00       	call   8451fea <_ZN12CStreamGuard11GetInBufferI25SIG_SAVE_HACK_USER_PUNISHEEPT_v>
 8425519:	89 45 f4             	mov    %eax,-0xc(%ebp)
 842551c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842551f:	8b 55 08             	mov    0x8(%ebp),%edx
 8425522:	89 10                	mov    %edx,(%eax)
 8425524:	8b 55 0c             	mov    0xc(%ebp),%edx
 8425527:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842552a:	89 50 04             	mov    %edx,0x4(%eax)
 842552d:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 8425531:	75 20                	jne    8425553 <_ZN24DB_ReqSaveHackUserPunish11makeRequestEjjPKc+0xbf>
 8425533:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8425536:	83 c0 08             	add    $0x8,%eax
 8425539:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 8425540:	00 
 8425541:	c7 44 24 04 2e e6 c4 	movl   $0x8c4e62e,0x4(%esp)
 8425548:	08 
 8425549:	89 04 24             	mov    %eax,(%esp)
 842554c:	e8 4f 83 c5 ff       	call   807d8a0 <memcpy@plt>
 8425551:	eb 1d                	jmp    8425570 <_ZN24DB_ReqSaveHackUserPunish11makeRequestEjjPKc+0xdc>
 8425553:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8425556:	8d 50 08             	lea    0x8(%eax),%edx
 8425559:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 8425560:	00 
 8425561:	8b 45 10             	mov    0x10(%ebp),%eax
 8425564:	89 44 24 04          	mov    %eax,0x4(%esp)
 8425568:	89 14 24             	mov    %edx,(%esp)
 842556b:	e8 60 83 c5 ff       	call   807d8d0 <strncpy@plt>
 8425570:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8425575:	8d 55 ec             	lea    -0x14(%ebp),%edx
 8425578:	89 54 24 08          	mov    %edx,0x8(%esp)
 842557c:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8425583:	00 
 8425584:	89 04 24             	mov    %eax,(%esp)
 8425587:	e8 52 ba 14 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 842558c:	eb 1b                	jmp    84255a9 <_ZN24DB_ReqSaveHackUserPunish11makeRequestEjjPKc+0x115>
 842558e:	89 d3                	mov    %edx,%ebx
 8425590:	89 c6                	mov    %eax,%esi
 8425592:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8425595:	89 04 24             	mov    %eax,(%esp)
 8425598:	e8 35 73 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 842559d:	89 f0                	mov    %esi,%eax
 842559f:	89 da                	mov    %ebx,%edx
 84255a1:	89 04 24             	mov    %eax,(%esp)
 84255a4:	e8 a7 e1 6b 00       	call   8ae3750 <_Unwind_Resume>
 84255a9:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84255ac:	89 04 24             	mov    %eax,(%esp)
 84255af:	e8 1e 73 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84255b4:	83 c4 20             	add    $0x20,%esp
 84255b7:	5b                   	pop    %ebx
 84255b8:	5e                   	pop    %esi
 84255b9:	5d                   	pop    %ebp
 84255ba:	c3                   	ret

```

```c
// DB_ReqSaveHackUserPunish::makeRequest @ 0x8425494

/* DB_ReqSaveHackUserPunish::makeRequest(unsigned int, unsigned int, char const*) */

void DB_ReqSaveHackUserPunish::makeRequest(uint param_1,uint param_2,char *param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_SAVE_HACK_USER_PUNISH *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x6304);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 084254e6 to 0842558b has its CatchHandler @ 0842558e */
  CStreamGuard::operator<<(pCVar2,0xb5);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_SAVE_HACK_USER_PUNISH>(pCVar2);
  *(uint *)local_10 = param_1;
  *(uint *)(local_10 + 4) = param_2;
  if (param_3 == (char *)0x0) {
    memcpy(local_10 + 8,"000.000.000.000",0x10);
  }
  else {
    strncpy((char *)(local_10 + 8),param_3,0x10);
  }
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}

```

