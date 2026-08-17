# DB_DeleteCharac

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 10

---

## CheckEventCharacter40

```asm
// === 08403324 DB_DeleteCharac::CheckEventCharacter40  [0x08403324-0x840340b] ===
 8403324:	55                   	push   %ebp
 8403325:	89 e5                	mov    %esp,%ebp
 8403327:	53                   	push   %ebx
 8403328:	83 ec 24             	sub    $0x24,%esp
 840332b:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8403330:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8403337:	00 
 8403338:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 840333f:	00 
 8403340:	89 04 24             	mov    %eax,(%esp)
 8403343:	e8 f6 1e ff ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8403348:	89 45 f4             	mov    %eax,-0xc(%ebp)
 840334b:	8b 45 0c             	mov    0xc(%ebp),%eax
 840334e:	8b 58 04             	mov    0x4(%eax),%ebx
 8403351:	8b 45 0c             	mov    0xc(%ebp),%eax
 8403354:	8b 00                	mov    (%eax),%eax
 8403356:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 840335d:	00 
 840335e:	89 04 24             	mov    %eax,(%esp)
 8403361:	e8 e5 5c d0 ff       	call   810904b <_Z14NumberToStringji>
 8403366:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 840336a:	89 44 24 08          	mov    %eax,0x8(%esp)
 840336e:	c7 44 24 04 e8 33 c4 	movl   $0x8c433e8,0x4(%esp)
 8403375:	08 
 8403376:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8403379:	89 04 24             	mov    %eax,(%esp)
 840337c:	e8 3f 0e ff ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8403381:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8403388:	00 
 8403389:	8b 45 f4             	mov    -0xc(%ebp),%eax
 840338c:	89 04 24             	mov    %eax,(%esp)
 840338f:	e8 92 0f ff ff       	call   83f4326 <_ZN5MySQL4execEb>
 8403394:	83 f0 01             	xor    $0x1,%eax
 8403397:	84 c0                	test   %al,%al
 8403399:	74 07                	je     84033a2 <_ZN15DB_DeleteCharac21CheckEventCharacter40EP17SIG_DELETE_CHARAC+0x7e>
 840339b:	b8 00 00 00 00       	mov    $0x0,%eax
 84033a0:	eb 64                	jmp    8403406 <_ZN15DB_DeleteCharac21CheckEventCharacter40EP17SIG_DELETE_CHARAC+0xe2>
 84033a2:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 84033a9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84033ac:	89 04 24             	mov    %eax,(%esp)
 84033af:	e8 08 11 ff ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 84033b4:	83 f0 01             	xor    $0x1,%eax
 84033b7:	84 c0                	test   %al,%al
 84033b9:	75 21                	jne    84033dc <_ZN15DB_DeleteCharac21CheckEventCharacter40EP17SIG_DELETE_CHARAC+0xb8>
 84033bb:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84033be:	89 44 24 08          	mov    %eax,0x8(%esp)
 84033c2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84033c9:	00 
 84033ca:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84033cd:	89 04 24             	mov    %eax,(%esp)
 84033d0:	e8 57 35 d1 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 84033d5:	83 f0 01             	xor    $0x1,%eax
 84033d8:	84 c0                	test   %al,%al
 84033da:	74 07                	je     84033e3 <_ZN15DB_DeleteCharac21CheckEventCharacter40EP17SIG_DELETE_CHARAC+0xbf>
 84033dc:	b8 01 00 00 00       	mov    $0x1,%eax
 84033e1:	eb 05                	jmp    84033e8 <_ZN15DB_DeleteCharac21CheckEventCharacter40EP17SIG_DELETE_CHARAC+0xc4>
 84033e3:	b8 00 00 00 00       	mov    $0x0,%eax
 84033e8:	84 c0                	test   %al,%al
 84033ea:	74 07                	je     84033f3 <_ZN15DB_DeleteCharac21CheckEventCharacter40EP17SIG_DELETE_CHARAC+0xcf>
 84033ec:	b8 00 00 00 00       	mov    $0x0,%eax
 84033f1:	eb 13                	jmp    8403406 <_ZN15DB_DeleteCharac21CheckEventCharacter40EP17SIG_DELETE_CHARAC+0xe2>
 84033f3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84033f6:	85 c0                	test   %eax,%eax
 84033f8:	74 07                	je     8403401 <_ZN15DB_DeleteCharac21CheckEventCharacter40EP17SIG_DELETE_CHARAC+0xdd>
 84033fa:	b8 01 00 00 00       	mov    $0x1,%eax
 84033ff:	eb 05                	jmp    8403406 <_ZN15DB_DeleteCharac21CheckEventCharacter40EP17SIG_DELETE_CHARAC+0xe2>
 8403401:	b8 00 00 00 00       	mov    $0x0,%eax
 8403406:	83 c4 24             	add    $0x24,%esp
 8403409:	5b                   	pop    %ebx
 840340a:	5d                   	pop    %ebp
 840340b:	c3                   	ret

```

```c
// DB_DeleteCharac::CheckEventCharacter40 @ 0x8403324

/* DB_DeleteCharac::CheckEventCharacter40(SIG_DELETE_CHARAC*) */

undefined4 __thiscall
DB_DeleteCharac::CheckEventCharacter40(DB_DeleteCharac *this,SIG_DELETE_CHARAC *param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int local_14;
  MySQL *local_10;
  
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  uVar4 = *(undefined4 *)(param_1 + 4);
  uVar3 = NumberToString(*(uint *)param_1,0);
  MySQL::set_query(local_10,
                   "seLect event_charac_level from charac_info where m_id=%s and charac_no=%d and delete_flag=0"
                   ,uVar3,uVar4);
  cVar2 = MySQL::exec(local_10,true);
  if (cVar2 == '\x01') {
    local_14 = 0;
    cVar2 = MySQL::fetch(local_10);
    if ((cVar2 == '\x01') && (cVar2 = MySQL::get_int(local_10,0,&local_14), cVar2 == '\x01')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar4 = 0;
    }
    else if (local_14 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
    return uVar4;
  }
  return 0;
}

```

---

## DB_DeleteCharac

```asm
// === 08402bce DB_DeleteCharac::DB_DeleteCharac  [0x08402bce-0x8402be9] ===
 8402bce:	55                   	push   %ebp
 8402bcf:	89 e5                	mov    %esp,%ebp
 8402bd1:	83 ec 18             	sub    $0x18,%esp
 8402bd4:	8b 45 08             	mov    0x8(%ebp),%eax
 8402bd7:	89 04 24             	mov    %eax,(%esp)
 8402bda:	e8 c7 ab 04 00       	call   844d7a6 <_ZN12DBDispatcherC1Ev>
 8402bdf:	8b 45 08             	mov    0x8(%ebp),%eax
 8402be2:	c7 00 48 fc c5 08    	movl   $0x8c5fc48,(%eax)
 8402be8:	c9                   	leave
 8402be9:	c3                   	ret

```

```c
// DB_DeleteCharac::DB_DeleteCharac @ 0x8402bce

/* DB_DeleteCharac::DB_DeleteCharac() */

void __thiscall DB_DeleteCharac::DB_DeleteCharac(DB_DeleteCharac *this)

{
  DBDispatcher::DBDispatcher((DBDispatcher *)this);
  *(undefined ***)this = &PTR_dispatch_08c5fc48;
  return;
}

```

---

## DeleteCharac

```asm
// === 0840340c DB_DeleteCharac::DeleteCharac  [0x0840340c-0x84034fd] ===
 840340c:	55                   	push   %ebp
 840340d:	89 e5                	mov    %esp,%ebp
 840340f:	53                   	push   %ebx
 8403410:	83 ec 34             	sub    $0x34,%esp
 8403413:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8403418:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 840341f:	00 
 8403420:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8403427:	00 
 8403428:	89 04 24             	mov    %eax,(%esp)
 840342b:	e8 0e 1e ff ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8403430:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8403433:	8b 45 0c             	mov    0xc(%ebp),%eax
 8403436:	8b 00                	mov    (%eax),%eax
 8403438:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 840343f:	00 
 8403440:	89 04 24             	mov    %eax,(%esp)
 8403443:	e8 03 5c d0 ff       	call   810904b <_Z14NumberToStringji>
 8403448:	8b 55 0c             	mov    0xc(%ebp),%edx
 840344b:	8b 52 04             	mov    0x4(%edx),%edx
 840344e:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8403452:	89 54 24 08          	mov    %edx,0x8(%esp)
 8403456:	c7 44 24 04 44 34 c4 	movl   $0x8c43444,0x4(%esp)
 840345d:	08 
 840345e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8403461:	89 04 24             	mov    %eax,(%esp)
 8403464:	e8 57 0d ff ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8403469:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8403470:	00 
 8403471:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8403474:	89 04 24             	mov    %eax,(%esp)
 8403477:	e8 aa 0e ff ff       	call   83f4326 <_ZN5MySQL4execEb>
 840347c:	83 f0 01             	xor    $0x1,%eax
 840347f:	84 c0                	test   %al,%al
 8403481:	74 07                	je     840348a <_ZN15DB_DeleteCharac12DeleteCharacEP17SIG_DELETE_CHARAC+0x7e>
 8403483:	b8 00 00 00 00       	mov    $0x0,%eax
 8403488:	eb 6d                	jmp    84034f7 <_ZN15DB_DeleteCharac12DeleteCharacEP17SIG_DELETE_CHARAC+0xeb>
 840348a:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 840348f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8403496:	00 
 8403497:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 840349e:	00 
 840349f:	89 04 24             	mov    %eax,(%esp)
 84034a2:	e8 97 1d ff ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 84034a7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84034aa:	8b 45 0c             	mov    0xc(%ebp),%eax
 84034ad:	8b 58 04             	mov    0x4(%eax),%ebx
 84034b0:	e8 cc 8c cc ff       	call   80cc181 <_Z14G_CEnvironmentv>
 84034b5:	8b 90 78 03 00 00    	mov    0x378(%eax),%edx
 84034bb:	8b 45 0c             	mov    0xc(%ebp),%eax
 84034be:	8b 00                	mov    (%eax),%eax
 84034c0:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 84034c4:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84034c8:	89 44 24 08          	mov    %eax,0x8(%esp)
 84034cc:	c7 44 24 04 9c 34 c4 	movl   $0x8c4349c,0x4(%esp)
 84034d3:	08 
 84034d4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84034d7:	89 04 24             	mov    %eax,(%esp)
 84034da:	e8 e1 0c ff ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84034df:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84034e6:	00 
 84034e7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84034ea:	89 04 24             	mov    %eax,(%esp)
 84034ed:	e8 34 0e ff ff       	call   83f4326 <_ZN5MySQL4execEb>
 84034f2:	b8 01 00 00 00       	mov    $0x1,%eax
 84034f7:	83 c4 34             	add    $0x34,%esp
 84034fa:	5b                   	pop    %ebx
 84034fb:	5d                   	pop    %ebp
 84034fc:	c3                   	ret
 84034fd:	90                   	nop

```

```c
// DB_DeleteCharac::DeleteCharac @ 0x840340c

/* DB_DeleteCharac::DeleteCharac(SIG_DELETE_CHARAC*) */

bool __thiscall DB_DeleteCharac::DeleteCharac(DB_DeleteCharac *this,SIG_DELETE_CHARAC *param_1)

{
  char cVar1;
  MySQL *pMVar2;
  undefined4 uVar3;
  int iVar4;
  
  pMVar2 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  uVar3 = NumberToString(*(uint *)param_1,0);
  MySQL::set_query(pMVar2,
                   "upDate charac_info set delete_time=now(),delete_flag=1 where charac_no=%u and m_id=%s"
                   ,*(undefined4 *)(param_1 + 4),uVar3);
  cVar1 = MySQL::exec(pMVar2,true);
  if (cVar1 == '\x01') {
    pMVar2 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
    uVar3 = *(undefined4 *)(param_1 + 4);
    iVar4 = G_CEnvironment();
    MySQL::set_query(pMVar2,
                     "deLete from dnf_master_charac where m_id=\'%u\' and server_id=\'%u\' and charac_no=\'%u\'"
                     ,*(undefined4 *)param_1,*(undefined4 *)(iVar4 + 0x378),uVar3);
    MySQL::exec(pMVar2,true);
  }
  return cVar1 == '\x01';
}

```

---

## DeleteCharacOption

```asm
// === 084035e0 DB_DeleteCharac::DeleteCharacOption  [0x084035e0-0x840364b] ===
 84035e0:	55                   	push   %ebp
 84035e1:	89 e5                	mov    %esp,%ebp
 84035e3:	83 ec 28             	sub    $0x28,%esp
 84035e6:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 84035eb:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84035f2:	00 
 84035f3:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84035fa:	00 
 84035fb:	89 04 24             	mov    %eax,(%esp)
 84035fe:	e8 3b 1c ff ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8403603:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8403606:	8b 45 0c             	mov    0xc(%ebp),%eax
 8403609:	8b 40 04             	mov    0x4(%eax),%eax
 840360c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8403610:	c7 44 24 04 f0 34 c4 	movl   $0x8c434f0,0x4(%esp)
 8403617:	08 
 8403618:	8b 45 f4             	mov    -0xc(%ebp),%eax
 840361b:	89 04 24             	mov    %eax,(%esp)
 840361e:	e8 9d 0b ff ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8403623:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 840362a:	00 
 840362b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 840362e:	89 04 24             	mov    %eax,(%esp)
 8403631:	e8 f0 0c ff ff       	call   83f4326 <_ZN5MySQL4execEb>
 8403636:	83 f0 01             	xor    $0x1,%eax
 8403639:	84 c0                	test   %al,%al
 840363b:	74 07                	je     8403644 <_ZN15DB_DeleteCharac18DeleteCharacOptionEP17SIG_DELETE_CHARAC+0x64>
 840363d:	b8 00 00 00 00       	mov    $0x0,%eax
 8403642:	eb 05                	jmp    8403649 <_ZN15DB_DeleteCharac18DeleteCharacOptionEP17SIG_DELETE_CHARAC+0x69>
 8403644:	b8 01 00 00 00       	mov    $0x1,%eax
 8403649:	c9                   	leave
 840364a:	c3                   	ret
 840364b:	90                   	nop

```

```c
// DB_DeleteCharac::DeleteCharacOption @ 0x84035e0

/* DB_DeleteCharac::DeleteCharacOption(SIG_DELETE_CHARAC*) */

bool __thiscall
DB_DeleteCharac::DeleteCharacOption(DB_DeleteCharac *this,SIG_DELETE_CHARAC *param_1)

{
  char cVar1;
  MySQL *this_00;
  
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  MySQL::set_query(this_00,"deLete from charac_option where charac_no = %u",
                   *(undefined4 *)(param_1 + 4));
  cVar1 = MySQL::exec(this_00,true);
  return cVar1 == '\x01';
}

```

---

## DeleteEventCharacFlag

```asm
// === 084032aa DB_DeleteCharac::DeleteEventCharacFlag  [0x084032aa-0x8403323] ===
 84032aa:	55                   	push   %ebp
 84032ab:	89 e5                	mov    %esp,%ebp
 84032ad:	83 ec 28             	sub    $0x28,%esp
 84032b0:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 84032b5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84032bc:	00 
 84032bd:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 84032c4:	00 
 84032c5:	89 04 24             	mov    %eax,(%esp)
 84032c8:	e8 71 1f ff ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 84032cd:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84032d0:	8b 45 0c             	mov    0xc(%ebp),%eax
 84032d3:	8b 00                	mov    (%eax),%eax
 84032d5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84032dc:	00 
 84032dd:	89 04 24             	mov    %eax,(%esp)
 84032e0:	e8 66 5d d0 ff       	call   810904b <_Z14NumberToStringji>
 84032e5:	89 44 24 08          	mov    %eax,0x8(%esp)
 84032e9:	c7 44 24 04 ac 33 c4 	movl   $0x8c433ac,0x4(%esp)
 84032f0:	08 
 84032f1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84032f4:	89 04 24             	mov    %eax,(%esp)
 84032f7:	e8 c4 0e ff ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84032fc:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8403303:	00 
 8403304:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8403307:	89 04 24             	mov    %eax,(%esp)
 840330a:	e8 17 10 ff ff       	call   83f4326 <_ZN5MySQL4execEb>
 840330f:	83 f0 01             	xor    $0x1,%eax
 8403312:	84 c0                	test   %al,%al
 8403314:	74 07                	je     840331d <_ZN15DB_DeleteCharac21DeleteEventCharacFlagEP17SIG_DELETE_CHARAC+0x73>
 8403316:	b8 00 00 00 00       	mov    $0x0,%eax
 840331b:	eb 05                	jmp    8403322 <_ZN15DB_DeleteCharac21DeleteEventCharacFlagEP17SIG_DELETE_CHARAC+0x78>
 840331d:	b8 01 00 00 00       	mov    $0x1,%eax
 8403322:	c9                   	leave
 8403323:	c3                   	ret

```

```c
// DB_DeleteCharac::DeleteEventCharacFlag @ 0x84032aa

/* DB_DeleteCharac::DeleteEventCharacFlag(SIG_DELETE_CHARAC*) */

bool __thiscall
DB_DeleteCharac::DeleteEventCharacFlag(DB_DeleteCharac *this,SIG_DELETE_CHARAC *param_1)

{
  char cVar1;
  MySQL *this_00;
  undefined4 uVar2;
  
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  uVar2 = NumberToString(*(uint *)param_1,0);
  MySQL::set_query(this_00,"upDate member_login set event_charac_flag = 0 where m_id=%s",uVar2);
  cVar1 = MySQL::exec(this_00,true);
  return cVar1 == '\x01';
}

```

---

## DeleteGuildInfo

```asm
// === 08402f4c DB_DeleteCharac::DeleteGuildInfo  [0x08402f4c-0x84032a9] ===
 8402f4c:	55                   	push   %ebp
 8402f4d:	89 e5                	mov    %esp,%ebp
 8402f4f:	83 ec 38             	sub    $0x38,%esp
 8402f52:	8b 45 0c             	mov    0xc(%ebp),%eax
 8402f55:	8b 40 0c             	mov    0xc(%eax),%eax
 8402f58:	85 c0                	test   %eax,%eax
 8402f5a:	0f 85 0f 01 00 00    	jne    840306f <_ZN15DB_DeleteCharac15DeleteGuildInfoEP17SIG_DELETE_CHARAC+0x123>
 8402f60:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8402f65:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8402f6c:	00 
 8402f6d:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8402f74:	00 
 8402f75:	89 04 24             	mov    %eax,(%esp)
 8402f78:	e8 c1 22 ff ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8402f7d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8402f80:	8b 45 0c             	mov    0xc(%ebp),%eax
 8402f83:	8b 40 04             	mov    0x4(%eax),%eax
 8402f86:	89 44 24 08          	mov    %eax,0x8(%esp)
 8402f8a:	c7 44 24 04 10 32 c4 	movl   $0x8c43210,0x4(%esp)
 8402f91:	08 
 8402f92:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8402f95:	89 04 24             	mov    %eax,(%esp)
 8402f98:	e8 23 12 ff ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8402f9d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8402fa4:	00 
 8402fa5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8402fa8:	89 04 24             	mov    %eax,(%esp)
 8402fab:	e8 76 13 ff ff       	call   83f4326 <_ZN5MySQL4execEb>
 8402fb0:	83 f0 01             	xor    $0x1,%eax
 8402fb3:	84 c0                	test   %al,%al
 8402fb5:	74 14                	je     8402fcb <_ZN15DB_DeleteCharac15DeleteGuildInfoEP17SIG_DELETE_CHARAC+0x7f>
 8402fb7:	8b 45 0c             	mov    0xc(%ebp),%eax
 8402fba:	c7 40 08 01 00 00 00 	movl   $0x1,0x8(%eax)
 8402fc1:	b8 00 00 00 00       	mov    $0x0,%eax
 8402fc6:	e9 dd 02 00 00       	jmp    84032a8 <_ZN15DB_DeleteCharac15DeleteGuildInfoEP17SIG_DELETE_CHARAC+0x35c>
 8402fcb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8402fce:	89 04 24             	mov    %eax,(%esp)
 8402fd1:	e8 e6 14 ff ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 8402fd6:	83 f0 01             	xor    $0x1,%eax
 8402fd9:	84 c0                	test   %al,%al
 8402fdb:	75 24                	jne    8403001 <_ZN15DB_DeleteCharac15DeleteGuildInfoEP17SIG_DELETE_CHARAC+0xb5>
 8402fdd:	8b 45 0c             	mov    0xc(%ebp),%eax
 8402fe0:	83 c0 0c             	add    $0xc,%eax
 8402fe3:	89 44 24 08          	mov    %eax,0x8(%esp)
 8402fe7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8402fee:	00 
 8402fef:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8402ff2:	89 04 24             	mov    %eax,(%esp)
 8402ff5:	e8 f8 f2 cd ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 8402ffa:	83 f0 01             	xor    $0x1,%eax
 8402ffd:	84 c0                	test   %al,%al
 8402fff:	74 07                	je     8403008 <_ZN15DB_DeleteCharac15DeleteGuildInfoEP17SIG_DELETE_CHARAC+0xbc>
 8403001:	b8 01 00 00 00       	mov    $0x1,%eax
 8403006:	eb 05                	jmp    840300d <_ZN15DB_DeleteCharac15DeleteGuildInfoEP17SIG_DELETE_CHARAC+0xc1>
 8403008:	b8 00 00 00 00       	mov    $0x0,%eax
 840300d:	84 c0                	test   %al,%al
 840300f:	74 14                	je     8403025 <_ZN15DB_DeleteCharac15DeleteGuildInfoEP17SIG_DELETE_CHARAC+0xd9>
 8403011:	8b 45 0c             	mov    0xc(%ebp),%eax
 8403014:	c7 40 08 01 00 00 00 	movl   $0x1,0x8(%eax)
 840301b:	b8 00 00 00 00       	mov    $0x0,%eax
 8403020:	e9 83 02 00 00       	jmp    84032a8 <_ZN15DB_DeleteCharac15DeleteGuildInfoEP17SIG_DELETE_CHARAC+0x35c>
 8403025:	8b 45 0c             	mov    0xc(%ebp),%eax
 8403028:	8b 40 0c             	mov    0xc(%eax),%eax
 840302b:	85 c0                	test   %eax,%eax
 840302d:	75 40                	jne    840306f <_ZN15DB_DeleteCharac15DeleteGuildInfoEP17SIG_DELETE_CHARAC+0x123>
 840302f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8403032:	8b 40 04             	mov    0x4(%eax),%eax
 8403035:	89 44 24 14          	mov    %eax,0x14(%esp)
 8403039:	c7 44 24 10 48 32 c4 	movl   $0x8c43248,0x10(%esp)
 8403040:	08 
 8403041:	c7 44 24 0c 12 13 00 	movl   $0x1312,0xc(%esp)
 8403048:	00 
 8403049:	c7 44 24 08 20 d7 c5 	movl   $0x8c5d720,0x8(%esp)
 8403050:	08 
 8403051:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8403058:	08 
 8403059:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8403060:	e8 a5 0b 6d 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8403065:	b8 01 00 00 00       	mov    $0x1,%eax
 840306a:	e9 39 02 00 00       	jmp    84032a8 <_ZN15DB_DeleteCharac15DeleteGuildInfoEP17SIG_DELETE_CHARAC+0x35c>
 840306f:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8403074:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 840307b:	00 
 840307c:	c7 44 24 04 08 00 00 	movl   $0x8,0x4(%esp)
 8403083:	00 
 8403084:	89 04 24             	mov    %eax,(%esp)
 8403087:	e8 b2 21 ff ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 840308c:	89 45 f0             	mov    %eax,-0x10(%ebp)
 840308f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8403092:	8b 40 0c             	mov    0xc(%eax),%eax
 8403095:	89 44 24 08          	mov    %eax,0x8(%esp)
 8403099:	c7 44 24 04 74 32 c4 	movl   $0x8c43274,0x4(%esp)
 84030a0:	08 
 84030a1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84030a4:	89 04 24             	mov    %eax,(%esp)
 84030a7:	e8 14 11 ff ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84030ac:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84030b3:	00 
 84030b4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84030b7:	89 04 24             	mov    %eax,(%esp)
 84030ba:	e8 67 12 ff ff       	call   83f4326 <_ZN5MySQL4execEb>
 84030bf:	83 f0 01             	xor    $0x1,%eax
 84030c2:	84 c0                	test   %al,%al
 84030c4:	74 14                	je     84030da <_ZN15DB_DeleteCharac15DeleteGuildInfoEP17SIG_DELETE_CHARAC+0x18e>
 84030c6:	8b 45 0c             	mov    0xc(%ebp),%eax
 84030c9:	c7 40 08 01 00 00 00 	movl   $0x1,0x8(%eax)
 84030d0:	b8 00 00 00 00       	mov    $0x0,%eax
 84030d5:	e9 ce 01 00 00       	jmp    84032a8 <_ZN15DB_DeleteCharac15DeleteGuildInfoEP17SIG_DELETE_CHARAC+0x35c>
 84030da:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 84030e1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84030e4:	89 04 24             	mov    %eax,(%esp)
 84030e7:	e8 d0 13 ff ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 84030ec:	83 f0 01             	xor    $0x1,%eax
 84030ef:	84 c0                	test   %al,%al
 84030f1:	75 21                	jne    8403114 <_ZN15DB_DeleteCharac15DeleteGuildInfoEP17SIG_DELETE_CHARAC+0x1c8>
 84030f3:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84030f6:	89 44 24 08          	mov    %eax,0x8(%esp)
 84030fa:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8403101:	00 
 8403102:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8403105:	89 04 24             	mov    %eax,(%esp)
 8403108:	e8 e5 f1 cd ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 840310d:	83 f0 01             	xor    $0x1,%eax
 8403110:	84 c0                	test   %al,%al
 8403112:	74 07                	je     840311b <_ZN15DB_DeleteCharac15DeleteGuildInfoEP17SIG_DELETE_CHARAC+0x1cf>
 8403114:	b8 01 00 00 00       	mov    $0x1,%eax
 8403119:	eb 05                	jmp    8403120 <_ZN15DB_DeleteCharac15DeleteGuildInfoEP17SIG_DELETE_CHARAC+0x1d4>
 840311b:	b8 00 00 00 00       	mov    $0x0,%eax
 8403120:	84 c0                	test   %al,%al
 8403122:	74 14                	je     8403138 <_ZN15DB_DeleteCharac15DeleteGuildInfoEP17SIG_DELETE_CHARAC+0x1ec>
 8403124:	8b 45 0c             	mov    0xc(%ebp),%eax
 8403127:	c7 40 08 01 00 00 00 	movl   $0x1,0x8(%eax)
 840312e:	b8 00 00 00 00       	mov    $0x0,%eax
 8403133:	e9 70 01 00 00       	jmp    84032a8 <_ZN15DB_DeleteCharac15DeleteGuildInfoEP17SIG_DELETE_CHARAC+0x35c>
 8403138:	8b 45 0c             	mov    0xc(%ebp),%eax
 840313b:	8b 50 04             	mov    0x4(%eax),%edx
 840313e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8403141:	39 c2                	cmp    %eax,%edx
 8403143:	75 14                	jne    8403159 <_ZN15DB_DeleteCharac15DeleteGuildInfoEP17SIG_DELETE_CHARAC+0x20d>
 8403145:	8b 45 0c             	mov    0xc(%ebp),%eax
 8403148:	c7 40 08 02 00 00 00 	movl   $0x2,0x8(%eax)
 840314f:	b8 00 00 00 00       	mov    $0x0,%eax
 8403154:	e9 4f 01 00 00       	jmp    84032a8 <_ZN15DB_DeleteCharac15DeleteGuildInfoEP17SIG_DELETE_CHARAC+0x35c>
 8403159:	8b 45 0c             	mov    0xc(%ebp),%eax
 840315c:	8b 50 04             	mov    0x4(%eax),%edx
 840315f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8403162:	8b 40 0c             	mov    0xc(%eax),%eax
 8403165:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8403169:	89 44 24 08          	mov    %eax,0x8(%esp)
 840316d:	c7 44 24 04 ac 32 c4 	movl   $0x8c432ac,0x4(%esp)
 8403174:	08 
 8403175:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8403178:	89 04 24             	mov    %eax,(%esp)
 840317b:	e8 40 10 ff ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8403180:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8403187:	00 
 8403188:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840318b:	89 04 24             	mov    %eax,(%esp)
 840318e:	e8 93 11 ff ff       	call   83f4326 <_ZN5MySQL4execEb>
 8403193:	83 f0 01             	xor    $0x1,%eax
 8403196:	84 c0                	test   %al,%al
 8403198:	74 14                	je     84031ae <_ZN15DB_DeleteCharac15DeleteGuildInfoEP17SIG_DELETE_CHARAC+0x262>
 840319a:	8b 45 0c             	mov    0xc(%ebp),%eax
 840319d:	c7 40 08 01 00 00 00 	movl   $0x1,0x8(%eax)
 84031a4:	b8 00 00 00 00       	mov    $0x0,%eax
 84031a9:	e9 fa 00 00 00       	jmp    84032a8 <_ZN15DB_DeleteCharac15DeleteGuildInfoEP17SIG_DELETE_CHARAC+0x35c>
 84031ae:	8b 45 0c             	mov    0xc(%ebp),%eax
 84031b1:	8b 40 0c             	mov    0xc(%eax),%eax
 84031b4:	89 44 24 08          	mov    %eax,0x8(%esp)
 84031b8:	c7 44 24 04 24 33 c4 	movl   $0x8c43324,0x4(%esp)
 84031bf:	08 
 84031c0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84031c3:	89 04 24             	mov    %eax,(%esp)
 84031c6:	e8 f5 0f ff ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84031cb:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84031d2:	00 
 84031d3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84031d6:	89 04 24             	mov    %eax,(%esp)
 84031d9:	e8 48 11 ff ff       	call   83f4326 <_ZN5MySQL4execEb>
 84031de:	83 f0 01             	xor    $0x1,%eax
 84031e1:	84 c0                	test   %al,%al
 84031e3:	74 14                	je     84031f9 <_ZN15DB_DeleteCharac15DeleteGuildInfoEP17SIG_DELETE_CHARAC+0x2ad>
 84031e5:	8b 45 0c             	mov    0xc(%ebp),%eax
 84031e8:	c7 40 08 01 00 00 00 	movl   $0x1,0x8(%eax)
 84031ef:	b8 00 00 00 00       	mov    $0x0,%eax
 84031f4:	e9 af 00 00 00       	jmp    84032a8 <_ZN15DB_DeleteCharac15DeleteGuildInfoEP17SIG_DELETE_CHARAC+0x35c>
 84031f9:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84031fc:	89 04 24             	mov    %eax,(%esp)
 84031ff:	e8 b8 12 ff ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 8403204:	83 f0 01             	xor    $0x1,%eax
 8403207:	84 c0                	test   %al,%al
 8403209:	75 21                	jne    840322c <_ZN15DB_DeleteCharac15DeleteGuildInfoEP17SIG_DELETE_CHARAC+0x2e0>
 840320b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 840320e:	89 44 24 08          	mov    %eax,0x8(%esp)
 8403212:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8403219:	00 
 840321a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840321d:	89 04 24             	mov    %eax,(%esp)
 8403220:	e8 07 37 d1 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8403225:	83 f0 01             	xor    $0x1,%eax
 8403228:	84 c0                	test   %al,%al
 840322a:	74 07                	je     8403233 <_ZN15DB_DeleteCharac15DeleteGuildInfoEP17SIG_DELETE_CHARAC+0x2e7>
 840322c:	b8 01 00 00 00       	mov    $0x1,%eax
 8403231:	eb 05                	jmp    8403238 <_ZN15DB_DeleteCharac15DeleteGuildInfoEP17SIG_DELETE_CHARAC+0x2ec>
 8403233:	b8 00 00 00 00       	mov    $0x0,%eax
 8403238:	84 c0                	test   %al,%al
 840323a:	74 11                	je     840324d <_ZN15DB_DeleteCharac15DeleteGuildInfoEP17SIG_DELETE_CHARAC+0x301>
 840323c:	8b 45 0c             	mov    0xc(%ebp),%eax
 840323f:	c7 40 08 01 00 00 00 	movl   $0x1,0x8(%eax)
 8403246:	b8 00 00 00 00       	mov    $0x0,%eax
 840324b:	eb 5b                	jmp    84032a8 <_ZN15DB_DeleteCharac15DeleteGuildInfoEP17SIG_DELETE_CHARAC+0x35c>
 840324d:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8403250:	85 c0                	test   %eax,%eax
 8403252:	74 4f                	je     84032a3 <_ZN15DB_DeleteCharac15DeleteGuildInfoEP17SIG_DELETE_CHARAC+0x357>
 8403254:	8b 45 0c             	mov    0xc(%ebp),%eax
 8403257:	8b 50 0c             	mov    0xc(%eax),%edx
 840325a:	8b 45 e8             	mov    -0x18(%ebp),%eax
 840325d:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8403261:	89 44 24 08          	mov    %eax,0x8(%esp)
 8403265:	c7 44 24 04 70 33 c4 	movl   $0x8c43370,0x4(%esp)
 840326c:	08 
 840326d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8403270:	89 04 24             	mov    %eax,(%esp)
 8403273:	e8 48 0f ff ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8403278:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 840327f:	00 
 8403280:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8403283:	89 04 24             	mov    %eax,(%esp)
 8403286:	e8 9b 10 ff ff       	call   83f4326 <_ZN5MySQL4execEb>
 840328b:	83 f0 01             	xor    $0x1,%eax
 840328e:	84 c0                	test   %al,%al
 8403290:	74 11                	je     84032a3 <_ZN15DB_DeleteCharac15DeleteGuildInfoEP17SIG_DELETE_CHARAC+0x357>
 8403292:	8b 45 0c             	mov    0xc(%ebp),%eax
 8403295:	c7 40 08 01 00 00 00 	movl   $0x1,0x8(%eax)
 840329c:	b8 00 00 00 00       	mov    $0x0,%eax
 84032a1:	eb 05                	jmp    84032a8 <_ZN15DB_DeleteCharac15DeleteGuildInfoEP17SIG_DELETE_CHARAC+0x35c>
 84032a3:	b8 01 00 00 00       	mov    $0x1,%eax
 84032a8:	c9                   	leave
 84032a9:	c3                   	ret

```

```c
// DB_DeleteCharac::DeleteGuildInfo @ 0x8402f4c

/* DB_DeleteCharac::DeleteGuildInfo(SIG_DELETE_CHARAC*) */

undefined4 __thiscall
DB_DeleteCharac::DeleteGuildInfo(DB_DeleteCharac *this,SIG_DELETE_CHARAC *param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int local_1c;
  uint local_18;
  MySQL *local_14;
  MySQL *local_10;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
    MySQL::set_query(local_10,"seLect guild_id from charac_info where charac_no = %d",
                     *(undefined4 *)(param_1 + 4));
    cVar2 = MySQL::exec(local_10,true);
    if (cVar2 != '\x01') {
      *(undefined4 *)(param_1 + 8) = 1;
      return 0;
    }
    cVar2 = MySQL::fetch(local_10);
    if ((cVar2 == '\x01') &&
       (cVar2 = MySQL::get_uint(local_10,0,(uint *)(param_1 + 0xc)), cVar2 == '\x01')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      *(undefined4 *)(param_1 + 8) = 1;
      return 0;
    }
    if (*(int *)(param_1 + 0xc) == 0) {
      LogManager::logFormat
                (1,"DBThread.cpp","bool DB_DeleteCharac::DeleteGuildInfo(SIG_DELETE_CHARAC*)",0x1312
                 ,"[Guild Del Error] guild_id=0, charac_no:%d",*(undefined4 *)(param_1 + 4));
      return 1;
    }
  }
  local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,8,0);
  MySQL::set_query(local_14,"seLect master_no from guild_info where guild_id = %d",
                   *(undefined4 *)(param_1 + 0xc));
  cVar2 = MySQL::exec(local_14,true);
  if (cVar2 != '\x01') {
    *(undefined4 *)(param_1 + 8) = 1;
    return 0;
  }
  local_18 = 0;
  cVar2 = MySQL::fetch(local_14);
  if ((cVar2 == '\x01') && (cVar2 = MySQL::get_uint(local_14,0,&local_18), cVar2 == '\x01')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    if (*(uint *)(param_1 + 4) == local_18) {
      *(undefined4 *)(param_1 + 8) = 2;
      return 0;
    }
    uVar3 = *(undefined4 *)(param_1 + 4);
    MySQL::set_query(local_14,
                     "upDate guild_member set member_flag = 2, secede_time = now(), secede_type = 2 where guild_id = %d and charac_no = %d"
                     ,*(undefined4 *)(param_1 + 0xc),uVar3);
    cVar2 = MySQL::exec(local_14,true);
    if (cVar2 == '\x01') {
      MySQL::set_query(local_14,
                       "seLect count(*) from guild_member where guild_id = %d and member_flag = 1",
                       *(undefined4 *)(param_1 + 0xc),uVar3);
      cVar2 = MySQL::exec(local_14,true);
      if (cVar2 != '\x01') {
        *(undefined4 *)(param_1 + 8) = 1;
        return 0;
      }
      cVar2 = MySQL::fetch(local_14);
      if ((cVar2 == '\x01') && (cVar2 = MySQL::get_int(local_14,0,&local_1c), cVar2 == '\x01')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        *(undefined4 *)(param_1 + 8) = 1;
        uVar3 = 0;
      }
      else {
        if (local_1c != 0) {
          MySQL::set_query(local_14,"upDate guild_info set member_count = %d where guild_id = %d",
                           local_1c,*(undefined4 *)(param_1 + 0xc));
          cVar2 = MySQL::exec(local_14,true);
          if (cVar2 != '\x01') {
            *(undefined4 *)(param_1 + 8) = 1;
            return 0;
          }
        }
        uVar3 = 1;
      }
      return uVar3;
    }
    *(undefined4 *)(param_1 + 8) = 1;
    return 0;
  }
  *(undefined4 *)(param_1 + 8) = 1;
  return 0;
}

```

---

## SendResult

```asm
// === 084034fe DB_DeleteCharac::SendResult  [0x084034fe-0x84035df] ===
 84034fe:	55                   	push   %ebp
 84034ff:	89 e5                	mov    %esp,%ebp
 8403501:	56                   	push   %esi
 8403502:	53                   	push   %ebx
 8403503:	83 ec 20             	sub    $0x20,%esp
 8403506:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 840350b:	c7 44 24 08 b0 13 00 	movl   $0x13b0,0x8(%esp)
 8403512:	00 
 8403513:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 840351a:	08 
 840351b:	89 04 24             	mov    %eax,(%esp)
 840351e:	e8 63 c5 e8 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8403523:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 840352a:	00 
 840352b:	89 44 24 04          	mov    %eax,0x4(%esp)
 840352f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8403532:	89 04 24             	mov    %eax,(%esp)
 8403535:	e8 ec 56 cc ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 840353a:	8d 45 f0             	lea    -0x10(%ebp),%eax
 840353d:	89 04 24             	mov    %eax,(%esp)
 8403540:	e8 01 57 cc ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8403545:	8b 55 0c             	mov    0xc(%ebp),%edx
 8403548:	89 54 24 04          	mov    %edx,0x4(%esp)
 840354c:	89 04 24             	mov    %eax,(%esp)
 840354f:	e8 02 57 cc ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8403554:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8403557:	89 04 24             	mov    %eax,(%esp)
 840355a:	e8 e7 56 cc ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 840355f:	8b 55 10             	mov    0x10(%ebp),%edx
 8403562:	89 54 24 04          	mov    %edx,0x4(%esp)
 8403566:	89 04 24             	mov    %eax,(%esp)
 8403569:	e8 e8 56 cc ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 840356e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8403571:	89 04 24             	mov    %eax,(%esp)
 8403574:	e8 d5 56 cc ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8403579:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 8403580:	00 
 8403581:	8b 55 14             	mov    0x14(%ebp),%edx
 8403584:	89 54 24 04          	mov    %edx,0x4(%esp)
 8403588:	89 04 24             	mov    %eax,(%esp)
 840358b:	e8 c2 b0 cd ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8403590:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8403595:	8d 55 f0             	lea    -0x10(%ebp),%edx
 8403598:	89 54 24 08          	mov    %edx,0x8(%esp)
 840359c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84035a3:	00 
 84035a4:	89 04 24             	mov    %eax,(%esp)
 84035a7:	e8 32 da 16 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 84035ac:	bb 01 00 00 00       	mov    $0x1,%ebx
 84035b1:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84035b4:	89 04 24             	mov    %eax,(%esp)
 84035b7:	e8 16 93 21 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84035bc:	89 d8                	mov    %ebx,%eax
 84035be:	83 c4 20             	add    $0x20,%esp
 84035c1:	5b                   	pop    %ebx
 84035c2:	5e                   	pop    %esi
 84035c3:	5d                   	pop    %ebp
 84035c4:	c3                   	ret
 84035c5:	89 d3                	mov    %edx,%ebx
 84035c7:	89 c6                	mov    %eax,%esi
 84035c9:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84035cc:	89 04 24             	mov    %eax,(%esp)
 84035cf:	e8 fe 92 21 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84035d4:	89 f0                	mov    %esi,%eax
 84035d6:	89 da                	mov    %ebx,%edx
 84035d8:	89 04 24             	mov    %eax,(%esp)
 84035db:	e8 70 01 6e 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// DB_DeleteCharac::SendResult @ 0x84034fe

/* DB_DeleteCharac::SendResult(int, int, SIG_DELETE_CHARAC*) */

undefined4 __thiscall
DB_DeleteCharac::SendResult
          (DB_DeleteCharac *this,int param_1,int param_2,SIG_DELETE_CHARAC *param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x13b0);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0840354f to 084035ab has its CatchHandler @ 084035c5 */
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_14);
  CStreamGuard::put_binary(pCVar2,param_3,0x14);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return 1;
}

```

---

## dispatch

```asm
// === 08402c38 DB_DeleteCharac::dispatch  [0x08402c38-0x8402f4b] ===
 8402c38:	55                   	push   %ebp
 8402c39:	89 e5                	mov    %esp,%ebp
 8402c3b:	56                   	push   %esi
 8402c3c:	53                   	push   %ebx
 8402c3d:	81 ec 70 03 00 00    	sub    $0x370,%esp
 8402c43:	8b 45 08             	mov    0x8(%ebp),%eax
 8402c46:	8b 55 14             	mov    0x14(%ebp),%edx
 8402c49:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8402c4d:	8b 55 10             	mov    0x10(%ebp),%edx
 8402c50:	89 54 24 08          	mov    %edx,0x8(%esp)
 8402c54:	8b 55 0c             	mov    0xc(%ebp),%edx
 8402c57:	89 54 24 04          	mov    %edx,0x4(%esp)
 8402c5b:	89 04 24             	mov    %eax,(%esp)
 8402c5e:	e8 19 93 ff ff       	call   83fbf7c <_ZN12DBDispatcher8dispatchEiiP6Stream>
 8402c63:	83 f0 01             	xor    $0x1,%eax
 8402c66:	84 c0                	test   %al,%al
 8402c68:	74 0a                	je     8402c74 <_ZN15DB_DeleteCharac8dispatchEiiP6Stream+0x3c>
 8402c6a:	b8 00 00 00 00       	mov    $0x0,%eax
 8402c6f:	e9 ce 02 00 00       	jmp    8402f42 <_ZN15DB_DeleteCharac8dispatchEiiP6Stream+0x30a>
 8402c74:	8b 45 14             	mov    0x14(%ebp),%eax
 8402c77:	89 04 24             	mov    %eax,(%esp)
 8402c7a:	e8 c1 d8 04 00       	call   8450540 <_ZN6Stream12GetOutBufferI17SIG_DELETE_CHARACEEPT_v>
 8402c7f:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8402c82:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 8402c86:	75 0a                	jne    8402c92 <_ZN15DB_DeleteCharac8dispatchEiiP6Stream+0x5a>
 8402c88:	b8 00 00 00 00       	mov    $0x0,%eax
 8402c8d:	e9 b0 02 00 00       	jmp    8402f42 <_ZN15DB_DeleteCharac8dispatchEiiP6Stream+0x30a>
 8402c92:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8402c95:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 8402c9c:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8402ca3:	e8 f6 8f cc ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8402ca8:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8402cab:	8d 85 a8 fc ff ff    	lea    -0x358(%ebp),%eax
 8402cb1:	89 c3                	mov    %eax,%ebx
 8402cb3:	be 63 00 00 00       	mov    $0x63,%esi
 8402cb8:	eb 0e                	jmp    8402cc8 <_ZN15DB_DeleteCharac8dispatchEiiP6Stream+0x90>
 8402cba:	89 1c 24             	mov    %ebx,(%esp)
 8402cbd:	e8 44 a7 04 00       	call   844d406 <_ZN14stItemLockInfoC1Ev>
 8402cc2:	83 c3 08             	add    $0x8,%ebx
 8402cc5:	83 ee 01             	sub    $0x1,%esi
 8402cc8:	83 fe ff             	cmp    $0xffffffff,%esi
 8402ccb:	0f 95 c0             	setne  %al
 8402cce:	84 c0                	test   %al,%al
 8402cd0:	75 e8                	jne    8402cba <_ZN15DB_DeleteCharac8dispatchEiiP6Stream+0x82>
 8402cd2:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8402cd5:	8b 40 04             	mov    0x4(%eax),%eax
 8402cd8:	8d 95 a8 fc ff ff    	lea    -0x358(%ebp),%edx
 8402cde:	89 54 24 04          	mov    %edx,0x4(%esp)
 8402ce2:	89 04 24             	mov    %eax,(%esp)
 8402ce5:	e8 7c aa 00 00       	call   840d766 <_ZN16DB_LoadInventory11GetItemLockEjP14stItemLockInfo>
 8402cea:	85 c0                	test   %eax,%eax
 8402cec:	0f 94 c0             	sete   %al
 8402cef:	84 c0                	test   %al,%al
 8402cf1:	0f 84 93 00 00 00    	je     8402d8a <_ZN15DB_DeleteCharac8dispatchEiiP6Stream+0x152>
 8402cf7:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8402cfe:	eb 7b                	jmp    8402d7b <_ZN15DB_DeleteCharac8dispatchEiiP6Stream+0x143>
 8402d00:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8402d03:	0f b6 84 c5 ac fc ff 	movzbl -0x354(%ebp,%eax,8),%eax
 8402d0a:	ff 
 8402d0b:	3c 01                	cmp    $0x1,%al
 8402d0d:	74 23                	je     8402d32 <_ZN15DB_DeleteCharac8dispatchEiiP6Stream+0xfa>
 8402d0f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8402d12:	0f b6 84 c5 ac fc ff 	movzbl -0x354(%ebp,%eax,8),%eax
 8402d19:	ff 
 8402d1a:	3c 02                	cmp    $0x2,%al
 8402d1c:	75 59                	jne    8402d77 <_ZN15DB_DeleteCharac8dispatchEiiP6Stream+0x13f>
 8402d1e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8402d21:	8b 84 c5 a8 fc ff ff 	mov    -0x358(%ebp,%eax,8),%eax
 8402d28:	05 80 f4 03 00       	add    $0x3f480,%eax
 8402d2d:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 8402d30:	7e 45                	jle    8402d77 <_ZN15DB_DeleteCharac8dispatchEiiP6Stream+0x13f>
 8402d32:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8402d35:	c7 40 08 03 00 00 00 	movl   $0x3,0x8(%eax)
 8402d3c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8402d3f:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8402d43:	8b 45 10             	mov    0x10(%ebp),%eax
 8402d46:	89 44 24 08          	mov    %eax,0x8(%esp)
 8402d4a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8402d4d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8402d51:	8b 45 08             	mov    0x8(%ebp),%eax
 8402d54:	89 04 24             	mov    %eax,(%esp)
 8402d57:	e8 a2 07 00 00       	call   84034fe <_ZN15DB_DeleteCharac10SendResultEiiP17SIG_DELETE_CHARAC>
 8402d5c:	83 f0 01             	xor    $0x1,%eax
 8402d5f:	84 c0                	test   %al,%al
 8402d61:	74 0a                	je     8402d6d <_ZN15DB_DeleteCharac8dispatchEiiP6Stream+0x135>
 8402d63:	b8 00 00 00 00       	mov    $0x0,%eax
 8402d68:	e9 d5 01 00 00       	jmp    8402f42 <_ZN15DB_DeleteCharac8dispatchEiiP6Stream+0x30a>
 8402d6d:	b8 01 00 00 00       	mov    $0x1,%eax
 8402d72:	e9 cb 01 00 00       	jmp    8402f42 <_ZN15DB_DeleteCharac8dispatchEiiP6Stream+0x30a>
 8402d77:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8402d7b:	83 7d f4 63          	cmpl   $0x63,-0xc(%ebp)
 8402d7f:	0f 9e c0             	setle  %al
 8402d82:	84 c0                	test   %al,%al
 8402d84:	0f 85 76 ff ff ff    	jne    8402d00 <_ZN15DB_DeleteCharac8dispatchEiiP6Stream+0xc8>
 8402d8a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8402d8d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8402d91:	8b 45 08             	mov    0x8(%ebp),%eax
 8402d94:	89 04 24             	mov    %eax,(%esp)
 8402d97:	e8 b0 01 00 00       	call   8402f4c <_ZN15DB_DeleteCharac15DeleteGuildInfoEP17SIG_DELETE_CHARAC>
 8402d9c:	83 f0 01             	xor    $0x1,%eax
 8402d9f:	84 c0                	test   %al,%al
 8402da1:	0f 84 95 00 00 00    	je     8402e3c <_ZN15DB_DeleteCharac8dispatchEiiP6Stream+0x204>
 8402da7:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8402daa:	8b 70 0c             	mov    0xc(%eax),%esi
 8402dad:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8402db0:	8b 58 04             	mov    0x4(%eax),%ebx
 8402db3:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8402dba:	00 
 8402dbb:	c7 44 24 08 a7 12 00 	movl   $0x12a7,0x8(%esp)
 8402dc2:	00 
 8402dc3:	c7 44 24 04 60 d7 c5 	movl   $0x8c5d760,0x4(%esp)
 8402dca:	08 
 8402dcb:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8402dce:	89 04 24             	mov    %eax,(%esp)
 8402dd1:	e8 42 c9 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8402dd6:	89 74 24 14          	mov    %esi,0x14(%esp)
 8402dda:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8402dde:	c7 44 24 0c a7 12 00 	movl   $0x12a7,0xc(%esp)
 8402de5:	00 
 8402de6:	c7 44 24 08 60 d7 c5 	movl   $0x8c5d760,0x8(%esp)
 8402ded:	08 
 8402dee:	c7 44 24 04 b8 31 c4 	movl   $0x8c431b8,0x4(%esp)
 8402df5:	08 
 8402df6:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8402df9:	89 04 24             	mov    %eax,(%esp)
 8402dfc:	e8 87 c9 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8402e01:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8402e04:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8402e08:	8b 45 10             	mov    0x10(%ebp),%eax
 8402e0b:	89 44 24 08          	mov    %eax,0x8(%esp)
 8402e0f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8402e12:	89 44 24 04          	mov    %eax,0x4(%esp)
 8402e16:	8b 45 08             	mov    0x8(%ebp),%eax
 8402e19:	89 04 24             	mov    %eax,(%esp)
 8402e1c:	e8 dd 06 00 00       	call   84034fe <_ZN15DB_DeleteCharac10SendResultEiiP17SIG_DELETE_CHARAC>
 8402e21:	83 f0 01             	xor    $0x1,%eax
 8402e24:	84 c0                	test   %al,%al
 8402e26:	74 0a                	je     8402e32 <_ZN15DB_DeleteCharac8dispatchEiiP6Stream+0x1fa>
 8402e28:	b8 00 00 00 00       	mov    $0x0,%eax
 8402e2d:	e9 10 01 00 00       	jmp    8402f42 <_ZN15DB_DeleteCharac8dispatchEiiP6Stream+0x30a>
 8402e32:	b8 01 00 00 00       	mov    $0x1,%eax
 8402e37:	e9 06 01 00 00       	jmp    8402f42 <_ZN15DB_DeleteCharac8dispatchEiiP6Stream+0x30a>
 8402e3c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8402e3f:	c6 40 10 00          	movb   $0x0,0x10(%eax)
 8402e43:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8402e46:	89 44 24 04          	mov    %eax,0x4(%esp)
 8402e4a:	8b 45 08             	mov    0x8(%ebp),%eax
 8402e4d:	89 04 24             	mov    %eax,(%esp)
 8402e50:	e8 cf 04 00 00       	call   8403324 <_ZN15DB_DeleteCharac21CheckEventCharacter40EP17SIG_DELETE_CHARAC>
 8402e55:	84 c0                	test   %al,%al
 8402e57:	74 19                	je     8402e72 <_ZN15DB_DeleteCharac8dispatchEiiP6Stream+0x23a>
 8402e59:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8402e5c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8402e60:	8b 45 08             	mov    0x8(%ebp),%eax
 8402e63:	89 04 24             	mov    %eax,(%esp)
 8402e66:	e8 3f 04 00 00       	call   84032aa <_ZN15DB_DeleteCharac21DeleteEventCharacFlagEP17SIG_DELETE_CHARAC>
 8402e6b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8402e6e:	c6 40 10 01          	movb   $0x1,0x10(%eax)
 8402e72:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8402e75:	89 44 24 04          	mov    %eax,0x4(%esp)
 8402e79:	8b 45 08             	mov    0x8(%ebp),%eax
 8402e7c:	89 04 24             	mov    %eax,(%esp)
 8402e7f:	e8 88 05 00 00       	call   840340c <_ZN15DB_DeleteCharac12DeleteCharacEP17SIG_DELETE_CHARAC>
 8402e84:	88 45 eb             	mov    %al,-0x15(%ebp)
 8402e87:	0f b6 45 eb          	movzbl -0x15(%ebp),%eax
 8402e8b:	83 f0 01             	xor    $0x1,%eax
 8402e8e:	84 c0                	test   %al,%al
 8402e90:	74 0a                	je     8402e9c <_ZN15DB_DeleteCharac8dispatchEiiP6Stream+0x264>
 8402e92:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8402e95:	c7 40 08 01 00 00 00 	movl   $0x1,0x8(%eax)
 8402e9c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8402e9f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8402ea3:	8b 45 08             	mov    0x8(%ebp),%eax
 8402ea6:	89 04 24             	mov    %eax,(%esp)
 8402ea9:	e8 32 07 00 00       	call   84035e0 <_ZN15DB_DeleteCharac18DeleteCharacOptionEP17SIG_DELETE_CHARAC>
 8402eae:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8402eb1:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8402eb5:	8b 45 10             	mov    0x10(%ebp),%eax
 8402eb8:	89 44 24 08          	mov    %eax,0x8(%esp)
 8402ebc:	8b 45 0c             	mov    0xc(%ebp),%eax
 8402ebf:	89 44 24 04          	mov    %eax,0x4(%esp)
 8402ec3:	8b 45 08             	mov    0x8(%ebp),%eax
 8402ec6:	89 04 24             	mov    %eax,(%esp)
 8402ec9:	e8 30 06 00 00       	call   84034fe <_ZN15DB_DeleteCharac10SendResultEiiP17SIG_DELETE_CHARAC>
 8402ece:	88 45 eb             	mov    %al,-0x15(%ebp)
 8402ed1:	0f b6 45 eb          	movzbl -0x15(%ebp),%eax
 8402ed5:	83 f0 01             	xor    $0x1,%eax
 8402ed8:	84 c0                	test   %al,%al
 8402eda:	74 07                	je     8402ee3 <_ZN15DB_DeleteCharac8dispatchEiiP6Stream+0x2ab>
 8402edc:	b8 00 00 00 00       	mov    $0x0,%eax
 8402ee1:	eb 5f                	jmp    8402f42 <_ZN15DB_DeleteCharac8dispatchEiiP6Stream+0x30a>
 8402ee3:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8402ee6:	8b 70 0c             	mov    0xc(%eax),%esi
 8402ee9:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8402eec:	8b 58 04             	mov    0x4(%eax),%ebx
 8402eef:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8402ef6:	00 
 8402ef7:	c7 44 24 08 ce 12 00 	movl   $0x12ce,0x8(%esp)
 8402efe:	00 
 8402eff:	c7 44 24 04 60 d7 c5 	movl   $0x8c5d760,0x4(%esp)
 8402f06:	08 
 8402f07:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8402f0a:	89 04 24             	mov    %eax,(%esp)
 8402f0d:	e8 06 c8 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8402f12:	89 74 24 14          	mov    %esi,0x14(%esp)
 8402f16:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8402f1a:	c7 44 24 0c ce 12 00 	movl   $0x12ce,0xc(%esp)
 8402f21:	00 
 8402f22:	c7 44 24 08 60 d7 c5 	movl   $0x8c5d760,0x8(%esp)
 8402f29:	08 
 8402f2a:	c7 44 24 04 e8 31 c4 	movl   $0x8c431e8,0x4(%esp)
 8402f31:	08 
 8402f32:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8402f35:	89 04 24             	mov    %eax,(%esp)
 8402f38:	e8 4b c8 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8402f3d:	b8 01 00 00 00       	mov    $0x1,%eax
 8402f42:	81 c4 70 03 00 00    	add    $0x370,%esp
 8402f48:	5b                   	pop    %ebx
 8402f49:	5e                   	pop    %esi
 8402f4a:	5d                   	pop    %ebp
 8402f4b:	c3                   	ret

```

```c
// DB_DeleteCharac::dispatch @ 0x8402c38

/* DB_DeleteCharac::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_DeleteCharac::dispatch(DB_DeleteCharac *this,int param_1,int param_2,Stream *param_3)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 uVar3;
  stItemLockInfo *this_00;
  int iVar4;
  stItemLockInfo local_35c [4];
  char acStack_358 [796];
  cMyTrace local_3c [16];
  cMyTrace local_2c [19];
  char local_19;
  SIG_DELETE_CHARAC *local_18;
  int local_14;
  int local_10;
  
  cVar2 = DBDispatcher::dispatch((int)this,param_1,(Stream *)param_2);
  if (cVar2 == '\x01') {
    local_18 = Stream::GetOutBuffer<SIG_DELETE_CHARAC>(param_3);
    if (local_18 == (SIG_DELETE_CHARAC *)0x0) {
      uVar3 = 0;
    }
    else {
      *(undefined4 *)(local_18 + 8) = 0;
      local_14 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      this_00 = local_35c;
      for (iVar4 = 99; iVar4 != -1; iVar4 = iVar4 + -1) {
        stItemLockInfo::stItemLockInfo(this_00);
        this_00 = this_00 + 8;
      }
      iVar4 = DB_LoadInventory::GetItemLock(*(uint *)(local_18 + 4),local_35c);
      if (iVar4 == 0) {
        for (local_10 = 0; local_10 < 100; local_10 = local_10 + 1) {
          if ((acStack_358[local_10 * 8] == '\x01') ||
             ((acStack_358[local_10 * 8] == '\x02' &&
              (local_14 < *(int *)(acStack_358 + local_10 * 8 + -4) + 0x3f480)))) {
            *(undefined4 *)(local_18 + 8) = 3;
            cVar2 = SendResult(this,param_1,param_2,local_18);
            if (cVar2 != '\x01') {
              return 0;
            }
            return 1;
          }
        }
      }
      cVar2 = DeleteGuildInfo(this,local_18);
      if (cVar2 == '\x01') {
        local_18[0x10] = (SIG_DELETE_CHARAC)0x0;
        cVar2 = CheckEventCharacter40(this,local_18);
        if (cVar2 != '\0') {
          DeleteEventCharacFlag(this,local_18);
          local_18[0x10] = (SIG_DELETE_CHARAC)0x1;
        }
        local_19 = DeleteCharac(this,local_18);
        if (local_19 != '\x01') {
          *(undefined4 *)(local_18 + 8) = 1;
        }
        DeleteCharacOption(this,local_18);
        local_19 = SendResult(this,param_1,param_2,local_18);
        if (local_19 == '\x01') {
          uVar3 = *(undefined4 *)(local_18 + 0xc);
          uVar1 = *(undefined4 *)(local_18 + 4);
          cMyTrace::cMyTrace(local_2c,"virtual bool DB_DeleteCharac::dispatch(int, int, Stream*)",
                             0x12ce,0);
          cMyTrace::operator()
                    (local_2c,"[%s][%d] deLete charac(%d),guild_id(%d)",
                     "virtual bool DB_DeleteCharac::dispatch(int, int, Stream*)",0x12ce,uVar1,uVar3)
          ;
          uVar3 = 1;
        }
        else {
          uVar3 = 0;
        }
      }
      else {
        uVar3 = *(undefined4 *)(local_18 + 0xc);
        uVar1 = *(undefined4 *)(local_18 + 4);
        cMyTrace::cMyTrace((cMyTrace *)(acStack_358 + 0x31c),
                           "virtual bool DB_DeleteCharac::dispatch(int, int, Stream*)",0x12a7,0);
        cMyTrace::operator()
                  ((cMyTrace *)(acStack_358 + 0x31c),"[%s][%d] deLete charac(%d),guild_id(%d) FAIL",
                   "virtual bool DB_DeleteCharac::dispatch(int, int, Stream*)",0x12a7,uVar1,uVar3);
        cVar2 = SendResult(this,param_1,param_2,local_18);
        if (cVar2 == '\x01') {
          uVar3 = 1;
        }
        else {
          uVar3 = 0;
        }
      }
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

```

---

## ~DB_DeleteCharac

```asm
// === 08402bea DB_DeleteCharac::~DB_DeleteCharac  [0x08402bea-0x8402c19] ===
 8402bea:	55                   	push   %ebp
 8402beb:	89 e5                	mov    %esp,%ebp
 8402bed:	83 ec 18             	sub    $0x18,%esp
 8402bf0:	8b 45 08             	mov    0x8(%ebp),%eax
 8402bf3:	c7 00 48 fc c5 08    	movl   $0x8c5fc48,(%eax)
 8402bf9:	8b 45 08             	mov    0x8(%ebp),%eax
 8402bfc:	89 04 24             	mov    %eax,(%esp)
 8402bff:	e8 74 f7 cd ff       	call   80e2378 <_ZN12DBDispatcherD1Ev>
 8402c04:	b8 00 00 00 00       	mov    $0x0,%eax
 8402c09:	84 c0                	test   %al,%al
 8402c0b:	74 0b                	je     8402c18 <_ZN15DB_DeleteCharacD1Ev+0x2e>
 8402c0d:	8b 45 08             	mov    0x8(%ebp),%eax
 8402c10:	89 04 24             	mov    %eax,(%esp)
 8402c13:	e8 d8 18 32 00       	call   87244f0 <_ZdlPv>
 8402c18:	c9                   	leave
 8402c19:	c3                   	ret

```

```c
// DB_DeleteCharac::~DB_DeleteCharac @ 0x8402bea

/* WARNING: Removing unreachable block (ram,0x08402c0d) */
/* DB_DeleteCharac::~DB_DeleteCharac() */

void __thiscall DB_DeleteCharac::~DB_DeleteCharac(DB_DeleteCharac *this)

{
  *(undefined ***)this = &PTR_dispatch_08c5fc48;
  DBDispatcher::~DBDispatcher((DBDispatcher *)this);
  return;
}

```

---

## ~DB_DeleteCharac_08402c1a

```asm
// === 08402c1a DB_DeleteCharac::~DB_DeleteCharac  [0x08402c1a-0x8402c37] ===
 8402c1a:	55                   	push   %ebp
 8402c1b:	89 e5                	mov    %esp,%ebp
 8402c1d:	83 ec 18             	sub    $0x18,%esp
 8402c20:	8b 45 08             	mov    0x8(%ebp),%eax
 8402c23:	89 04 24             	mov    %eax,(%esp)
 8402c26:	e8 bf ff ff ff       	call   8402bea <_ZN15DB_DeleteCharacD1Ev>
 8402c2b:	8b 45 08             	mov    0x8(%ebp),%eax
 8402c2e:	89 04 24             	mov    %eax,(%esp)
 8402c31:	e8 ba 18 32 00       	call   87244f0 <_ZdlPv>
 8402c36:	c9                   	leave
 8402c37:	c3                   	ret

```

```c
// DB_DeleteCharac::~DB_DeleteCharac @ 0x8402c1a

/* DB_DeleteCharac::~DB_DeleteCharac() */

void __thiscall DB_DeleteCharac::~DB_DeleteCharac(DB_DeleteCharac *this)

{
  ~DB_DeleteCharac(this);
  operator_delete(this);
  return;
}

```

