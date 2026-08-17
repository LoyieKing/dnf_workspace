# DB_CheckSecuReward

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 084441e6 DB_CheckSecuReward::dispatch  [0x084441e6-0x8444407] ===
 84441e6:	55                   	push   %ebp
 84441e7:	89 e5                	mov    %esp,%ebp
 84441e9:	56                   	push   %esi
 84441ea:	53                   	push   %ebx
 84441eb:	83 ec 30             	sub    $0x30,%esp
 84441ee:	8b 45 14             	mov    0x14(%ebp),%eax
 84441f1:	89 04 24             	mov    %eax,(%esp)
 84441f4:	e8 0b fe 00 00       	call   8454004 <_ZN6Stream12GetOutBufferI26SIG_CHECK_USER_SECU_REWARDEEPT_v>
 84441f9:	89 45 e8             	mov    %eax,-0x18(%ebp)
 84441fc:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8444201:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8444208:	00 
 8444209:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8444210:	00 
 8444211:	89 04 24             	mov    %eax,(%esp)
 8444214:	e8 25 10 fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8444219:	89 45 ec             	mov    %eax,-0x14(%ebp)
 844421c:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8444223:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8444226:	8b 00                	mov    (%eax),%eax
 8444228:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 844422f:	00 
 8444230:	89 04 24             	mov    %eax,(%esp)
 8444233:	e8 13 4e cc ff       	call   810904b <_Z14NumberToStringji>
 8444238:	89 44 24 08          	mov    %eax,0x8(%esp)
 844423c:	c7 44 24 04 1c 71 c5 	movl   $0x8c5711c,0x4(%esp)
 8444243:	08 
 8444244:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8444247:	89 04 24             	mov    %eax,(%esp)
 844424a:	e8 71 ff fa ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 844424f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8444256:	00 
 8444257:	8b 45 ec             	mov    -0x14(%ebp),%eax
 844425a:	89 04 24             	mov    %eax,(%esp)
 844425d:	e8 c4 00 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 8444262:	83 f0 01             	xor    $0x1,%eax
 8444265:	84 c0                	test   %al,%al
 8444267:	75 21                	jne    844428a <_ZN18DB_CheckSecuReward8dispatchEiiP6Stream+0xa4>
 8444269:	8b 45 ec             	mov    -0x14(%ebp),%eax
 844426c:	89 04 24             	mov    %eax,(%esp)
 844426f:	e8 f8 e0 c9 ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8444274:	85 c0                	test   %eax,%eax
 8444276:	74 12                	je     844428a <_ZN18DB_CheckSecuReward8dispatchEiiP6Stream+0xa4>
 8444278:	8b 45 ec             	mov    -0x14(%ebp),%eax
 844427b:	89 04 24             	mov    %eax,(%esp)
 844427e:	e8 39 02 fb ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 8444283:	83 f0 01             	xor    $0x1,%eax
 8444286:	84 c0                	test   %al,%al
 8444288:	74 07                	je     8444291 <_ZN18DB_CheckSecuReward8dispatchEiiP6Stream+0xab>
 844428a:	b8 01 00 00 00       	mov    $0x1,%eax
 844428f:	eb 05                	jmp    8444296 <_ZN18DB_CheckSecuReward8dispatchEiiP6Stream+0xb0>
 8444291:	b8 00 00 00 00       	mov    $0x0,%eax
 8444296:	84 c0                	test   %al,%al
 8444298:	74 0a                	je     84442a4 <_ZN18DB_CheckSecuReward8dispatchEiiP6Stream+0xbe>
 844429a:	b8 01 00 00 00       	mov    $0x1,%eax
 844429f:	e9 5d 01 00 00       	jmp    8444401 <_ZN18DB_CheckSecuReward8dispatchEiiP6Stream+0x21b>
 84442a4:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84442a7:	89 44 24 08          	mov    %eax,0x8(%esp)
 84442ab:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84442b2:	00 
 84442b3:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84442b6:	89 04 24             	mov    %eax,(%esp)
 84442b9:	e8 34 e0 c9 ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 84442be:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84442c1:	89 04 24             	mov    %eax,(%esp)
 84442c4:	e8 87 94 c3 ff       	call   807d750 <time@plt>
 84442c9:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 84442cc:	ba 07 45 2e c2       	mov    $0xc22e4507,%edx
 84442d1:	89 c8                	mov    %ecx,%eax
 84442d3:	f7 ea                	imul   %edx
 84442d5:	8d 04 0a             	lea    (%edx,%ecx,1),%eax
 84442d8:	89 c2                	mov    %eax,%edx
 84442da:	c1 fa 10             	sar    $0x10,%edx
 84442dd:	89 c8                	mov    %ecx,%eax
 84442df:	c1 f8 1f             	sar    $0x1f,%eax
 84442e2:	89 d3                	mov    %edx,%ebx
 84442e4:	29 c3                	sub    %eax,%ebx
 84442e6:	89 d8                	mov    %ebx,%eax
 84442e8:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84442eb:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84442ee:	69 c0 80 51 01 00    	imul   $0x15180,%eax,%eax
 84442f4:	89 ca                	mov    %ecx,%edx
 84442f6:	29 c2                	sub    %eax,%edx
 84442f8:	89 d0                	mov    %edx,%eax
 84442fa:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84442fd:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8444300:	2b 45 f0             	sub    -0x10(%ebp),%eax
 8444303:	2d 30 2a 00 00       	sub    $0x2a30,%eax
 8444308:	89 45 e0             	mov    %eax,-0x20(%ebp)
 844430b:	81 7d f0 4f 27 01 00 	cmpl   $0x1274f,-0x10(%ebp)
 8444312:	7e 0b                	jle    844431f <_ZN18DB_CheckSecuReward8dispatchEiiP6Stream+0x139>
 8444314:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8444317:	05 80 51 01 00       	add    $0x15180,%eax
 844431c:	89 45 e0             	mov    %eax,-0x20(%ebp)
 844431f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8444322:	89 c2                	mov    %eax,%edx
 8444324:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8444327:	39 c2                	cmp    %eax,%edx
 8444329:	0f 8d cd 00 00 00    	jge    84443fc <_ZN18DB_CheckSecuReward8dispatchEiiP6Stream+0x216>
 844432f:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8444334:	c7 44 24 08 25 ab 00 	movl   $0xab25,0x8(%esp)
 844433b:	00 
 844433c:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8444343:	08 
 8444344:	89 04 24             	mov    %eax,(%esp)
 8444347:	e8 3a b7 e4 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 844434c:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8444353:	00 
 8444354:	89 44 24 04          	mov    %eax,0x4(%esp)
 8444358:	8d 45 d8             	lea    -0x28(%ebp),%eax
 844435b:	89 04 24             	mov    %eax,(%esp)
 844435e:	e8 c3 48 c8 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8444363:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8444366:	89 04 24             	mov    %eax,(%esp)
 8444369:	e8 d8 48 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 844436e:	8b 55 0c             	mov    0xc(%ebp),%edx
 8444371:	89 54 24 04          	mov    %edx,0x4(%esp)
 8444375:	89 04 24             	mov    %eax,(%esp)
 8444378:	e8 d9 48 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 844437d:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8444380:	89 04 24             	mov    %eax,(%esp)
 8444383:	e8 be 48 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8444388:	8b 55 10             	mov    0x10(%ebp),%edx
 844438b:	89 54 24 04          	mov    %edx,0x4(%esp)
 844438f:	89 04 24             	mov    %eax,(%esp)
 8444392:	e8 bf 48 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8444397:	8d 45 d8             	lea    -0x28(%ebp),%eax
 844439a:	89 04 24             	mov    %eax,(%esp)
 844439d:	e8 ac 48 c8 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 84443a2:	89 04 24             	mov    %eax,(%esp)
 84443a5:	e8 ae fc 00 00       	call   8454058 <_ZN12CStreamGuard11GetInBufferI20SIG_SEND_USER_REWARDEEPT_v>
 84443aa:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84443ad:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84443b0:	8b 50 04             	mov    0x4(%eax),%edx
 84443b3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84443b6:	89 10                	mov    %edx,(%eax)
 84443b8:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 84443bd:	8d 55 d8             	lea    -0x28(%ebp),%edx
 84443c0:	89 54 24 08          	mov    %edx,0x8(%esp)
 84443c4:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84443cb:	00 
 84443cc:	89 04 24             	mov    %eax,(%esp)
 84443cf:	e8 0a cc 12 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 84443d4:	eb 1b                	jmp    84443f1 <_ZN18DB_CheckSecuReward8dispatchEiiP6Stream+0x20b>
 84443d6:	89 d3                	mov    %edx,%ebx
 84443d8:	89 c6                	mov    %eax,%esi
 84443da:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84443dd:	89 04 24             	mov    %eax,(%esp)
 84443e0:	e8 ed 84 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84443e5:	89 f0                	mov    %esi,%eax
 84443e7:	89 da                	mov    %ebx,%edx
 84443e9:	89 04 24             	mov    %eax,(%esp)
 84443ec:	e8 5f f3 69 00       	call   8ae3750 <_Unwind_Resume>
 84443f1:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84443f4:	89 04 24             	mov    %eax,(%esp)
 84443f7:	e8 d6 84 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84443fc:	b8 01 00 00 00       	mov    $0x1,%eax
 8444401:	83 c4 30             	add    $0x30,%esp
 8444404:	5b                   	pop    %ebx
 8444405:	5e                   	pop    %esi
 8444406:	5d                   	pop    %ebp
 8444407:	c3                   	ret

```

```c
// DB_CheckSecuReward::dispatch @ 0x84441e6

/* DB_CheckSecuReward::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_CheckSecuReward::dispatch(DB_CheckSecuReward *this,int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  Stream *pSVar5;
  CStreamGuard *pCVar6;
  CStreamGuard local_2c [8];
  int local_24;
  uint local_20;
  SIG_CHECK_USER_SECU_REWARD *local_1c;
  MySQL *local_18;
  int local_14;
  SIG_SEND_USER_REWARD *local_10;
  
  local_1c = Stream::GetOutBuffer<SIG_CHECK_USER_SECU_REWARD>(param_3);
  local_18 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  local_20 = 0;
  uVar3 = NumberToString(*(uint *)local_1c,0);
  MySQL::set_query(local_18,
                   "seLect unix_timestamp(last_check_time) from member_security_grade where m_id=%s"
                   ,uVar3);
  cVar2 = MySQL::exec(local_18,true);
  if (((cVar2 == '\x01') && (iVar4 = MySQL::get_n_rows(local_18), iVar4 != 0)) &&
     (cVar2 = MySQL::fetch(local_18), cVar2 == '\x01')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    MySQL::get_uint(local_18,0,&local_20);
    time(&local_24);
    local_14 = local_24 % 0x15180;
    iVar4 = local_24 - local_14;
    local_24 = iVar4 + -0x2a30;
    if (0x1274f < local_14) {
      local_24 = iVar4 + 0x12750;
    }
    if ((int)local_20 < local_24) {
      pSVar5 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xab25);
      CStreamGuard::CStreamGuard(local_2c,pSVar5,true);
      pCVar6 = (CStreamGuard *)CStreamGuard::operator*(local_2c);
                    /* try { // try from 08444378 to 084443d3 has its CatchHandler @ 084443d6 */
      CStreamGuard::operator<<(pCVar6,param_1);
      pCVar6 = (CStreamGuard *)CStreamGuard::operator*(local_2c);
      CStreamGuard::operator<<(pCVar6,param_2);
      pCVar6 = (CStreamGuard *)CStreamGuard::operator->(local_2c);
      local_10 = CStreamGuard::GetInBuffer<SIG_SEND_USER_REWARD>(pCVar6);
      *(uint *)local_10 = *(uint *)(local_1c + 4);
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_2c);
      CStreamGuard::~CStreamGuard(local_2c);
    }
  }
  return 1;
}

```

---

## makeRequest

```asm
// === 08444408 DB_CheckSecuReward::makeRequest  [0x08444408-0x84444eb] ===
 8444408:	55                   	push   %ebp
 8444409:	89 e5                	mov    %esp,%ebp
 844440b:	56                   	push   %esi
 844440c:	53                   	push   %ebx
 844440d:	83 ec 20             	sub    $0x20,%esp
 8444410:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8444415:	c7 44 24 08 34 ab 00 	movl   $0xab34,0x8(%esp)
 844441c:	00 
 844441d:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8444424:	08 
 8444425:	89 04 24             	mov    %eax,(%esp)
 8444428:	e8 59 b6 e4 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 844442d:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8444434:	00 
 8444435:	89 44 24 04          	mov    %eax,0x4(%esp)
 8444439:	8d 45 ec             	lea    -0x14(%ebp),%eax
 844443c:	89 04 24             	mov    %eax,(%esp)
 844443f:	e8 e2 47 c8 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8444444:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8444447:	89 04 24             	mov    %eax,(%esp)
 844444a:	e8 f7 47 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 844444f:	c7 44 24 04 ab 02 00 	movl   $0x2ab,0x4(%esp)
 8444456:	00 
 8444457:	89 04 24             	mov    %eax,(%esp)
 844445a:	e8 f7 47 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 844445f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8444462:	89 04 24             	mov    %eax,(%esp)
 8444465:	e8 dc 47 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 844446a:	8b 55 08             	mov    0x8(%ebp),%edx
 844446d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8444471:	89 04 24             	mov    %eax,(%esp)
 8444474:	e8 dd 47 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8444479:	8d 45 ec             	lea    -0x14(%ebp),%eax
 844447c:	89 04 24             	mov    %eax,(%esp)
 844447f:	e8 ca 47 c8 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8444484:	89 04 24             	mov    %eax,(%esp)
 8444487:	e8 e2 fb 00 00       	call   845406e <_ZN12CStreamGuard11GetInBufferI26SIG_CHECK_USER_SECU_REWARDEEPT_v>
 844448c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 844448f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8444492:	8b 55 0c             	mov    0xc(%ebp),%edx
 8444495:	89 10                	mov    %edx,(%eax)
 8444497:	8b 45 f4             	mov    -0xc(%ebp),%eax
 844449a:	8b 55 10             	mov    0x10(%ebp),%edx
 844449d:	89 50 04             	mov    %edx,0x4(%eax)
 84444a0:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 84444a5:	8d 55 ec             	lea    -0x14(%ebp),%edx
 84444a8:	89 54 24 08          	mov    %edx,0x8(%esp)
 84444ac:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84444b3:	00 
 84444b4:	89 04 24             	mov    %eax,(%esp)
 84444b7:	e8 22 cb 12 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 84444bc:	eb 1b                	jmp    84444d9 <_ZN18DB_CheckSecuReward11makeRequestEiji+0xd1>
 84444be:	89 d3                	mov    %edx,%ebx
 84444c0:	89 c6                	mov    %eax,%esi
 84444c2:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84444c5:	89 04 24             	mov    %eax,(%esp)
 84444c8:	e8 05 84 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84444cd:	89 f0                	mov    %esi,%eax
 84444cf:	89 da                	mov    %ebx,%edx
 84444d1:	89 04 24             	mov    %eax,(%esp)
 84444d4:	e8 77 f2 69 00       	call   8ae3750 <_Unwind_Resume>
 84444d9:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84444dc:	89 04 24             	mov    %eax,(%esp)
 84444df:	e8 ee 83 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84444e4:	83 c4 20             	add    $0x20,%esp
 84444e7:	5b                   	pop    %ebx
 84444e8:	5e                   	pop    %esi
 84444e9:	5d                   	pop    %ebp
 84444ea:	c3                   	ret
 84444eb:	90                   	nop

```

```c
// DB_CheckSecuReward::makeRequest @ 0x8444408

/* DB_CheckSecuReward::makeRequest(int, unsigned int, int) */

void DB_CheckSecuReward::makeRequest(int param_1,uint param_2,int param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_CHECK_USER_SECU_REWARD *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xab34);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0844445a to 084444bb has its CatchHandler @ 084444be */
  CStreamGuard::operator<<(pCVar2,0x2ab);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_CHECK_USER_SECU_REWARD>(pCVar2);
  *(uint *)local_10 = param_2;
  *(int *)(local_10 + 4) = param_3;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}

```

