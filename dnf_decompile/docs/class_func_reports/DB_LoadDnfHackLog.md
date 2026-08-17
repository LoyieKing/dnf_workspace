# DB_LoadDnfHackLog

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 08422242 DB_LoadDnfHackLog::dispatch  [0x08422242-0x84224cd] ===
 8422242:	55                   	push   %ebp
 8422243:	89 e5                	mov    %esp,%ebp
 8422245:	56                   	push   %esi
 8422246:	53                   	push   %ebx
 8422247:	83 ec 50             	sub    $0x50,%esp
 842224a:	8b 45 08             	mov    0x8(%ebp),%eax
 842224d:	8b 55 14             	mov    0x14(%ebp),%edx
 8422250:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8422254:	8b 55 10             	mov    0x10(%ebp),%edx
 8422257:	89 54 24 08          	mov    %edx,0x8(%esp)
 842225b:	8b 55 0c             	mov    0xc(%ebp),%edx
 842225e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8422262:	89 04 24             	mov    %eax,(%esp)
 8422265:	e8 12 9d fd ff       	call   83fbf7c <_ZN12DBDispatcher8dispatchEiiP6Stream>
 842226a:	83 f0 01             	xor    $0x1,%eax
 842226d:	84 c0                	test   %al,%al
 842226f:	74 0a                	je     842227b <_ZN17DB_LoadDnfHackLog8dispatchEiiP6Stream+0x39>
 8422271:	bb 00 00 00 00       	mov    $0x0,%ebx
 8422276:	e9 49 02 00 00       	jmp    84224c4 <_ZN17DB_LoadDnfHackLog8dispatchEiiP6Stream+0x282>
 842227b:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8422280:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8422287:	00 
 8422288:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 842228f:	00 
 8422290:	89 04 24             	mov    %eax,(%esp)
 8422293:	e8 a6 2f fd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8422298:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 842229b:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 84222a2:	8b 45 14             	mov    0x14(%ebp),%eax
 84222a5:	89 04 24             	mov    %eax,(%esp)
 84222a8:	e8 49 f9 02 00       	call   8451bf6 <_ZN6Stream12GetOutBufferI21SIG_LOAD_DNF_HACK_LOGEEPT_v>
 84222ad:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84222b0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84222b3:	8b 00                	mov    (%eax),%eax
 84222b5:	89 45 e8             	mov    %eax,-0x18(%ebp)
 84222b8:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 84222bd:	c7 44 24 08 8e 5a 00 	movl   $0x5a8e,0x8(%esp)
 84222c4:	00 
 84222c5:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 84222cc:	08 
 84222cd:	89 04 24             	mov    %eax,(%esp)
 84222d0:	e8 b1 d7 e6 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 84222d5:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84222dc:	00 
 84222dd:	89 44 24 04          	mov    %eax,0x4(%esp)
 84222e1:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84222e4:	89 04 24             	mov    %eax,(%esp)
 84222e7:	e8 3a 69 ca ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 84222ec:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84222ef:	89 04 24             	mov    %eax,(%esp)
 84222f2:	e8 4f 69 ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84222f7:	c7 44 24 04 06 01 00 	movl   $0x106,0x4(%esp)
 84222fe:	00 
 84222ff:	89 04 24             	mov    %eax,(%esp)
 8422302:	e8 4f 69 ca ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8422307:	8d 45 dc             	lea    -0x24(%ebp),%eax
 842230a:	89 04 24             	mov    %eax,(%esp)
 842230d:	e8 34 69 ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8422312:	8b 55 10             	mov    0x10(%ebp),%edx
 8422315:	89 54 24 04          	mov    %edx,0x4(%esp)
 8422319:	89 04 24             	mov    %eax,(%esp)
 842231c:	e8 35 69 ca ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8422321:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8422324:	89 04 24             	mov    %eax,(%esp)
 8422327:	e8 22 69 ca ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 842232c:	89 04 24             	mov    %eax,(%esp)
 842232f:	e8 16 f9 02 00       	call   8451c4a <_ZN12CStreamGuard11GetInBufferI21SIG_LOAD_DNF_HACK_LOGEEPT_v>
 8422334:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8422337:	c7 44 24 08 f4 3c 00 	movl   $0x3cf4,0x8(%esp)
 842233e:	00 
 842233f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8422346:	00 
 8422347:	8b 45 ec             	mov    -0x14(%ebp),%eax
 842234a:	89 04 24             	mov    %eax,(%esp)
 842234d:	e8 6e b9 c5 ff       	call   807dcc0 <memset@plt>
 8422352:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8422355:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8422358:	89 10                	mov    %edx,(%eax)
 842235a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8422361:	00 
 8422362:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8422365:	89 04 24             	mov    %eax,(%esp)
 8422368:	e8 de 6c ce ff       	call   810904b <_Z14NumberToStringji>
 842236d:	c7 44 24 10 a1 0f 00 	movl   $0xfa1,0x10(%esp)
 8422374:	00 
 8422375:	c7 44 24 0c 65 00 00 	movl   $0x65,0xc(%esp)
 842237c:	00 
 842237d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8422381:	c7 44 24 04 30 d2 c4 	movl   $0x8c4d230,0x4(%esp)
 8422388:	08 
 8422389:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 842238c:	89 04 24             	mov    %eax,(%esp)
 842238f:	e8 2c 1e fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8422394:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842239b:	00 
 842239c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 842239f:	89 04 24             	mov    %eax,(%esp)
 84223a2:	e8 7f 1f fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 84223a7:	83 f0 01             	xor    $0x1,%eax
 84223aa:	84 c0                	test   %al,%al
 84223ac:	74 0a                	je     84223b8 <_ZN17DB_LoadDnfHackLog8dispatchEiiP6Stream+0x176>
 84223ae:	bb 00 00 00 00       	mov    $0x0,%ebx
 84223b3:	e9 01 01 00 00       	jmp    84224b9 <_ZN17DB_LoadDnfHackLog8dispatchEiiP6Stream+0x277>
 84223b8:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 84223bf:	e9 9e 00 00 00       	jmp    8422462 <_ZN17DB_LoadDnfHackLog8dispatchEiiP6Stream+0x220>
 84223c4:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 84223cb:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 84223d2:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84223d5:	89 04 24             	mov    %eax,(%esp)
 84223d8:	e8 df 20 fd ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 84223dd:	83 f0 01             	xor    $0x1,%eax
 84223e0:	84 c0                	test   %al,%al
 84223e2:	74 0a                	je     84223ee <_ZN17DB_LoadDnfHackLog8dispatchEiiP6Stream+0x1ac>
 84223e4:	bb 00 00 00 00       	mov    $0x0,%ebx
 84223e9:	e9 cb 00 00 00       	jmp    84224b9 <_ZN17DB_LoadDnfHackLog8dispatchEiiP6Stream+0x277>
 84223ee:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84223f1:	89 44 24 08          	mov    %eax,0x8(%esp)
 84223f5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84223fc:	00 
 84223fd:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8422400:	89 04 24             	mov    %eax,(%esp)
 8422403:	e8 ea fe cb ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 8422408:	83 f0 01             	xor    $0x1,%eax
 842240b:	84 c0                	test   %al,%al
 842240d:	74 0a                	je     8422419 <_ZN17DB_LoadDnfHackLog8dispatchEiiP6Stream+0x1d7>
 842240f:	bb 00 00 00 00       	mov    $0x0,%ebx
 8422414:	e9 a0 00 00 00       	jmp    84224b9 <_ZN17DB_LoadDnfHackLog8dispatchEiiP6Stream+0x277>
 8422419:	8b 45 d8             	mov    -0x28(%ebp),%eax
 842241c:	3d a0 0f 00 00       	cmp    $0xfa0,%eax
 8422421:	77 3a                	ja     842245d <_ZN17DB_LoadDnfHackLog8dispatchEiiP6Stream+0x21b>
 8422423:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8422426:	89 44 24 08          	mov    %eax,0x8(%esp)
 842242a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8422431:	00 
 8422432:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8422435:	89 04 24             	mov    %eax,(%esp)
 8422438:	e8 b5 fe cb ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 842243d:	83 f0 01             	xor    $0x1,%eax
 8422440:	84 c0                	test   %al,%al
 8422442:	74 07                	je     842244b <_ZN17DB_LoadDnfHackLog8dispatchEiiP6Stream+0x209>
 8422444:	bb 00 00 00 00       	mov    $0x0,%ebx
 8422449:	eb 6e                	jmp    84224b9 <_ZN17DB_LoadDnfHackLog8dispatchEiiP6Stream+0x277>
 842244b:	8b 45 d8             	mov    -0x28(%ebp),%eax
 842244e:	8d 48 9b             	lea    -0x65(%eax),%ecx
 8422451:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 8422454:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8422457:	89 54 88 04          	mov    %edx,0x4(%eax,%ecx,4)
 842245b:	eb 01                	jmp    842245e <_ZN17DB_LoadDnfHackLog8dispatchEiiP6Stream+0x21c>
 842245d:	90                   	nop
 842245e:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8422462:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8422465:	89 04 24             	mov    %eax,(%esp)
 8422468:	e8 ff fe cb ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 842246d:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 8422470:	0f 97 c0             	seta   %al
 8422473:	84 c0                	test   %al,%al
 8422475:	0f 85 49 ff ff ff    	jne    84223c4 <_ZN17DB_LoadDnfHackLog8dispatchEiiP6Stream+0x182>
 842247b:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8422480:	8d 55 dc             	lea    -0x24(%ebp),%edx
 8422483:	89 54 24 08          	mov    %edx,0x8(%esp)
 8422487:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842248e:	00 
 842248f:	89 04 24             	mov    %eax,(%esp)
 8422492:	e8 47 eb 14 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8422497:	bb 01 00 00 00       	mov    $0x1,%ebx
 842249c:	eb 1b                	jmp    84224b9 <_ZN17DB_LoadDnfHackLog8dispatchEiiP6Stream+0x277>
 842249e:	89 d3                	mov    %edx,%ebx
 84224a0:	89 c6                	mov    %eax,%esi
 84224a2:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84224a5:	89 04 24             	mov    %eax,(%esp)
 84224a8:	e8 25 a4 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84224ad:	89 f0                	mov    %esi,%eax
 84224af:	89 da                	mov    %ebx,%edx
 84224b1:	89 04 24             	mov    %eax,(%esp)
 84224b4:	e8 97 12 6c 00       	call   8ae3750 <_Unwind_Resume>
 84224b9:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84224bc:	89 04 24             	mov    %eax,(%esp)
 84224bf:	e8 0e a4 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84224c4:	89 d8                	mov    %ebx,%eax
 84224c6:	83 c4 50             	add    $0x50,%esp
 84224c9:	5b                   	pop    %ebx
 84224ca:	5e                   	pop    %esi
 84224cb:	5d                   	pop    %ebp
 84224cc:	c3                   	ret
 84224cd:	90                   	nop

```

```c
// DB_LoadDnfHackLog::dispatch @ 0x8422242

/* DB_LoadDnfHackLog::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_LoadDnfHackLog::dispatch(DB_LoadDnfHackLog *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  uint uVar4;
  undefined4 uVar5;
  uint local_30;
  uint local_2c;
  CStreamGuard local_28 [8];
  MySQL *local_20;
  uint local_1c;
  SIG_LOAD_DNF_HACK_LOG *local_18;
  SIG_LOAD_DNF_HACK_LOG *local_14;
  uint local_10;
  
  pSVar2 = param_3;
  cVar1 = DBDispatcher::dispatch((int)this,param_1,(Stream *)param_2);
  if (cVar1 == '\x01') {
    local_20 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0,pSVar2);
    local_1c = 0;
    local_14 = Stream::GetOutBuffer<SIG_LOAD_DNF_HACK_LOG>(param_3);
    local_1c = *(uint *)local_14;
    pSVar2 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x5a8e);
    CStreamGuard::CStreamGuard(local_28,pSVar2,true);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_28);
                    /* try { // try from 08422302 to 08422496 has its CatchHandler @ 0842249e */
    CStreamGuard::operator<<(pCVar3,0x106);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_28);
    CStreamGuard::operator<<(pCVar3,param_2);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_28);
    local_18 = CStreamGuard::GetInBuffer<SIG_LOAD_DNF_HACK_LOG>(pCVar3);
    memset(local_18,0,0x3cf4);
    *(uint *)local_18 = local_1c;
    uVar5 = NumberToString(local_1c,0);
    MySQL::set_query(local_20,
                     "seLect hack_type,cnt from dnf_hack_log where m_id=%s and (hack_type>=%d and hack_type<%d) and occ_date=CAST(DATE_FORMAT(now(), \'%%Y-%%m-%%d\') AS CHAR)"
                     ,uVar5,0x65,0xfa1);
    cVar1 = MySQL::exec(local_20,true);
    if (cVar1 == '\x01') {
      local_10 = 0;
      while( true ) {
        uVar4 = MySQL::get_n_rows(local_20);
        if (uVar4 <= local_10) break;
        local_2c = 0;
        local_30 = 0;
        cVar1 = MySQL::fetch(local_20);
        if (cVar1 != '\x01') {
          uVar5 = 0;
          goto LAB_084224b9;
        }
        cVar1 = MySQL::get_uint(local_20,0,&local_2c);
        if (cVar1 != '\x01') {
          uVar5 = 0;
          goto LAB_084224b9;
        }
        if (local_2c < 0xfa1) {
          cVar1 = MySQL::get_uint(local_20,1,&local_30);
          if (cVar1 != '\x01') {
            uVar5 = 0;
            goto LAB_084224b9;
          }
          *(uint *)(local_18 + (local_2c - 0x65) * 4 + 4) = local_30;
        }
        local_10 = local_10 + 1;
      }
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_28);
      uVar5 = 1;
    }
    else {
      uVar5 = 0;
    }
LAB_084224b9:
    CStreamGuard::~CStreamGuard(local_28);
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}

```

---

## makeRequest

```asm
// === 084224ce DB_LoadDnfHackLog::makeRequest  [0x084224ce-0x84225a7] ===
 84224ce:	55                   	push   %ebp
 84224cf:	89 e5                	mov    %esp,%ebp
 84224d1:	56                   	push   %esi
 84224d2:	53                   	push   %ebx
 84224d3:	83 ec 20             	sub    $0x20,%esp
 84224d6:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 84224db:	c7 44 24 08 bf 5a 00 	movl   $0x5abf,0x8(%esp)
 84224e2:	00 
 84224e3:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 84224ea:	08 
 84224eb:	89 04 24             	mov    %eax,(%esp)
 84224ee:	e8 93 d5 e6 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 84224f3:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84224fa:	00 
 84224fb:	89 44 24 04          	mov    %eax,0x4(%esp)
 84224ff:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8422502:	89 04 24             	mov    %eax,(%esp)
 8422505:	e8 1c 67 ca ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 842250a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842250d:	89 04 24             	mov    %eax,(%esp)
 8422510:	e8 31 67 ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8422515:	c7 44 24 04 06 01 00 	movl   $0x106,0x4(%esp)
 842251c:	00 
 842251d:	89 04 24             	mov    %eax,(%esp)
 8422520:	e8 31 67 ca ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8422525:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8422528:	89 04 24             	mov    %eax,(%esp)
 842252b:	e8 16 67 ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8422530:	8b 55 08             	mov    0x8(%ebp),%edx
 8422533:	89 54 24 04          	mov    %edx,0x4(%esp)
 8422537:	89 04 24             	mov    %eax,(%esp)
 842253a:	e8 17 67 ca ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 842253f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8422542:	89 04 24             	mov    %eax,(%esp)
 8422545:	e8 04 67 ca ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 842254a:	89 04 24             	mov    %eax,(%esp)
 842254d:	e8 f8 f6 02 00       	call   8451c4a <_ZN12CStreamGuard11GetInBufferI21SIG_LOAD_DNF_HACK_LOGEEPT_v>
 8422552:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8422555:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8422558:	8b 55 0c             	mov    0xc(%ebp),%edx
 842255b:	89 10                	mov    %edx,(%eax)
 842255d:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8422562:	8d 55 ec             	lea    -0x14(%ebp),%edx
 8422565:	89 54 24 08          	mov    %edx,0x8(%esp)
 8422569:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8422570:	00 
 8422571:	89 04 24             	mov    %eax,(%esp)
 8422574:	e8 65 ea 14 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8422579:	eb 1b                	jmp    8422596 <_ZN17DB_LoadDnfHackLog11makeRequestEij+0xc8>
 842257b:	89 d3                	mov    %edx,%ebx
 842257d:	89 c6                	mov    %eax,%esi
 842257f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8422582:	89 04 24             	mov    %eax,(%esp)
 8422585:	e8 48 a3 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 842258a:	89 f0                	mov    %esi,%eax
 842258c:	89 da                	mov    %ebx,%edx
 842258e:	89 04 24             	mov    %eax,(%esp)
 8422591:	e8 ba 11 6c 00       	call   8ae3750 <_Unwind_Resume>
 8422596:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8422599:	89 04 24             	mov    %eax,(%esp)
 842259c:	e8 31 a3 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84225a1:	83 c4 20             	add    $0x20,%esp
 84225a4:	5b                   	pop    %ebx
 84225a5:	5e                   	pop    %esi
 84225a6:	5d                   	pop    %ebp
 84225a7:	c3                   	ret

```

```c
// DB_LoadDnfHackLog::makeRequest @ 0x84224ce

/* DB_LoadDnfHackLog::makeRequest(int, unsigned int) */

void DB_LoadDnfHackLog::makeRequest(int param_1,uint param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_LOAD_DNF_HACK_LOG *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x5abf);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 08422520 to 08422578 has its CatchHandler @ 0842257b */
  CStreamGuard::operator<<(pCVar2,0x106);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_LOAD_DNF_HACK_LOG>(pCVar2);
  *(uint *)local_10 = param_2;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,4,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}

```

