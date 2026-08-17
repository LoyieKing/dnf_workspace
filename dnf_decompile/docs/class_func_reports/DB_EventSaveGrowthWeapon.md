# DB_EventSaveGrowthWeapon

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 084492fc DB_EventSaveGrowthWeapon::dispatch  [0x084492fc-0x84493e7] ===
 84492fc:	55                   	push   %ebp
 84492fd:	89 e5                	mov    %esp,%ebp
 84492ff:	53                   	push   %ebx
 8449300:	83 ec 34             	sub    $0x34,%esp
 8449303:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8449308:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 844930f:	00 
 8449310:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 8449317:	00 
 8449318:	89 04 24             	mov    %eax,(%esp)
 844931b:	e8 1e bf fa ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8449320:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8449323:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 844932a:	66 c7 45 ee 00 00    	movw   $0x0,-0x12(%ebp)
 8449330:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8449333:	89 44 24 04          	mov    %eax,0x4(%esp)
 8449337:	8b 45 14             	mov    0x14(%ebp),%eax
 844933a:	89 04 24             	mov    %eax,(%esp)
 844933d:	e8 54 34 1d 00       	call   861c796 <_ZN6StreamrsERj>
 8449342:	8d 45 ee             	lea    -0x12(%ebp),%eax
 8449345:	89 44 24 04          	mov    %eax,0x4(%esp)
 8449349:	8b 45 14             	mov    0x14(%ebp),%eax
 844934c:	89 04 24             	mov    %eax,(%esp)
 844934f:	e8 fe 31 1d 00       	call   861c552 <_ZN6StreamrsERs>
 8449354:	0f b7 45 ee          	movzwl -0x12(%ebp),%eax
 8449358:	0f bf d8             	movswl %ax,%ebx
 844935b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 844935e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8449365:	00 
 8449366:	89 04 24             	mov    %eax,(%esp)
 8449369:	e8 dd fc cb ff       	call   810904b <_Z14NumberToStringji>
 844936e:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8449372:	89 44 24 08          	mov    %eax,0x8(%esp)
 8449376:	c7 44 24 04 7c 8b c5 	movl   $0x8c58b7c,0x4(%esp)
 844937d:	08 
 844937e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8449381:	89 04 24             	mov    %eax,(%esp)
 8449384:	e8 37 ae fa ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8449389:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8449390:	00 
 8449391:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8449394:	89 04 24             	mov    %eax,(%esp)
 8449397:	e8 8a af fa ff       	call   83f4326 <_ZN5MySQL4execEb>
 844939c:	83 f0 01             	xor    $0x1,%eax
 844939f:	84 c0                	test   %al,%al
 84493a1:	74 3a                	je     84493dd <_ZN24DB_EventSaveGrowthWeapon8dispatchEiiP6Stream+0xe1>
 84493a3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84493a6:	89 44 24 14          	mov    %eax,0x14(%esp)
 84493aa:	c7 44 24 10 d4 8b c5 	movl   $0x8c58bd4,0x10(%esp)
 84493b1:	08 
 84493b2:	c7 44 24 0c e6 b8 00 	movl   $0xb8e6,0xc(%esp)
 84493b9:	00 
 84493ba:	c7 44 24 08 00 af c5 	movl   $0x8c5af00,0x8(%esp)
 84493c1:	08 
 84493c2:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 84493c9:	08 
 84493ca:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84493d1:	e8 34 a8 68 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84493d6:	b8 00 00 00 00       	mov    $0x0,%eax
 84493db:	eb 05                	jmp    84493e2 <_ZN24DB_EventSaveGrowthWeapon8dispatchEiiP6Stream+0xe6>
 84493dd:	b8 01 00 00 00       	mov    $0x1,%eax
 84493e2:	83 c4 34             	add    $0x34,%esp
 84493e5:	5b                   	pop    %ebx
 84493e6:	5d                   	pop    %ebp
 84493e7:	c3                   	ret

```

```c
// DB_EventSaveGrowthWeapon::dispatch @ 0x84492fc

/* DB_EventSaveGrowthWeapon::dispatch(int, int, Stream*) */

bool DB_EventSaveGrowthWeapon::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  Stream *in_stack_00000010;
  short local_16;
  uint local_14;
  MySQL *local_10;
  
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
  local_14 = 0;
  local_16 = 0;
  Stream::operator>>(in_stack_00000010,&local_14);
  Stream::operator>>(in_stack_00000010,&local_16);
  iVar3 = (int)local_16;
  uVar2 = NumberToString(local_14,0);
  MySQL::set_query(local_10,
                   "inSert into event_1207_growthweapon(m_id, server_id, occ_date) values(%s, %d, now())"
                   ,uVar2,iVar3);
  cVar1 = MySQL::exec(local_10,true);
  if (cVar1 != '\x01') {
    LogManager::logFormat
              (1,"DBThread.cpp","virtual bool DB_EventSaveGrowthWeapon::dispatch(int, int, Stream*)"
               ,0xb8e6,"DB_EventSaveGrowthWeapon Query Error : m_id(%d)",local_14);
  }
  return cVar1 == '\x01';
}

```

---

## makeRequest

```asm
// === 084493e8 DB_EventSaveGrowthWeapon::makeRequest  [0x084493e8-0x84494e1] ===
 84493e8:	55                   	push   %ebp
 84493e9:	89 e5                	mov    %esp,%ebp
 84493eb:	56                   	push   %esi
 84493ec:	53                   	push   %ebx
 84493ed:	83 ec 30             	sub    $0x30,%esp
 84493f0:	8b 45 0c             	mov    0xc(%ebp),%eax
 84493f3:	66 89 45 e4          	mov    %ax,-0x1c(%ebp)
 84493f7:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 84493fc:	c7 44 24 08 ef b8 00 	movl   $0xb8ef,0x8(%esp)
 8449403:	00 
 8449404:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 844940b:	08 
 844940c:	89 04 24             	mov    %eax,(%esp)
 844940f:	e8 72 66 e4 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8449414:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 844941b:	00 
 844941c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8449420:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8449423:	89 04 24             	mov    %eax,(%esp)
 8449426:	e8 fb f7 c7 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 844942b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 844942e:	89 04 24             	mov    %eax,(%esp)
 8449431:	e8 10 f8 c7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8449436:	c7 44 24 04 13 03 00 	movl   $0x313,0x4(%esp)
 844943d:	00 
 844943e:	89 04 24             	mov    %eax,(%esp)
 8449441:	e8 10 f8 c7 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8449446:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8449449:	89 04 24             	mov    %eax,(%esp)
 844944c:	e8 f5 f7 c7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8449451:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8449458:	ff 
 8449459:	89 04 24             	mov    %eax,(%esp)
 844945c:	e8 f5 f7 c7 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8449461:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8449464:	89 04 24             	mov    %eax,(%esp)
 8449467:	e8 da f7 c7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 844946c:	8b 55 08             	mov    0x8(%ebp),%edx
 844946f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8449473:	89 04 24             	mov    %eax,(%esp)
 8449476:	e8 17 8e c9 ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 844947b:	0f bf 5d e4          	movswl -0x1c(%ebp),%ebx
 844947f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8449482:	89 04 24             	mov    %eax,(%esp)
 8449485:	e8 bc f7 c7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 844948a:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 844948e:	89 04 24             	mov    %eax,(%esp)
 8449491:	e8 d0 18 de ff       	call   822ad66 <_ZN12CStreamGuardlsEs>
 8449496:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 844949b:	8d 55 f0             	lea    -0x10(%ebp),%edx
 844949e:	89 54 24 08          	mov    %edx,0x8(%esp)
 84494a2:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84494a9:	00 
 84494aa:	89 04 24             	mov    %eax,(%esp)
 84494ad:	e8 2c 7b 12 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 84494b2:	eb 1b                	jmp    84494cf <_ZN24DB_EventSaveGrowthWeapon11makeRequestEjs+0xe7>
 84494b4:	89 d3                	mov    %edx,%ebx
 84494b6:	89 c6                	mov    %eax,%esi
 84494b8:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84494bb:	89 04 24             	mov    %eax,(%esp)
 84494be:	e8 0f 34 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84494c3:	89 f0                	mov    %esi,%eax
 84494c5:	89 da                	mov    %ebx,%edx
 84494c7:	89 04 24             	mov    %eax,(%esp)
 84494ca:	e8 81 a2 69 00       	call   8ae3750 <_Unwind_Resume>
 84494cf:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84494d2:	89 04 24             	mov    %eax,(%esp)
 84494d5:	e8 f8 33 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84494da:	83 c4 30             	add    $0x30,%esp
 84494dd:	5b                   	pop    %ebx
 84494de:	5e                   	pop    %esi
 84494df:	5d                   	pop    %ebp
 84494e0:	c3                   	ret
 84494e1:	90                   	nop

```

```c
// DB_EventSaveGrowthWeapon::makeRequest @ 0x84493e8

/* DB_EventSaveGrowthWeapon::makeRequest(unsigned int, short) */

void DB_EventSaveGrowthWeapon::makeRequest(uint param_1,short param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xb8ef);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 08449441 to 084494b1 has its CatchHandler @ 084494b4 */
  CStreamGuard::operator<<(pCVar2,0x313);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}

```

