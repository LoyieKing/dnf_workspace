# DB_SelectLevelUpReward

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 084423cc DB_SelectLevelUpReward::dispatch  [0x084423cc-0x8442719] ===
 84423cc:	55                   	push   %ebp
 84423cd:	89 e5                	mov    %esp,%ebp
 84423cf:	56                   	push   %esi
 84423d0:	53                   	push   %ebx
 84423d1:	83 ec 40             	sub    $0x40,%esp
 84423d4:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 84423d9:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84423e0:	00 
 84423e1:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84423e8:	00 
 84423e9:	89 04 24             	mov    %eax,(%esp)
 84423ec:	e8 4d 2e fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 84423f1:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84423f4:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 84423fb:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 8442402:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8442405:	89 44 24 04          	mov    %eax,0x4(%esp)
 8442409:	8b 45 14             	mov    0x14(%ebp),%eax
 844240c:	89 04 24             	mov    %eax,(%esp)
 844240f:	e8 82 a3 1d 00       	call   861c796 <_ZN6StreamrsERj>
 8442414:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8442417:	89 44 24 04          	mov    %eax,0x4(%esp)
 844241b:	8b 45 14             	mov    0x14(%ebp),%eax
 844241e:	89 04 24             	mov    %eax,(%esp)
 8442421:	e8 9e a1 1d 00       	call   861c5c4 <_ZN6StreamrsERi>
 8442426:	e8 70 9d c8 ff       	call   80cc19b <_Z14G_CDataManagerv>
 844242b:	89 04 24             	mov    %eax,(%esp)
 844242e:	e8 2f e7 cc ff       	call   8110b62 <_ZN12CDataManager20get_event_script_mngEv>
 8442433:	c7 44 24 04 94 01 00 	movl   $0x194,0x4(%esp)
 844243a:	00 
 844243b:	89 04 24             	mov    %eax,(%esp)
 844243e:	e8 cd 8c cc ff       	call   810b110 <_ZN13EventClassify15CEventScriptMng17get_db_table_nameEi>
 8442443:	89 44 24 04          	mov    %eax,0x4(%esp)
 8442447:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 844244a:	89 04 24             	mov    %eax,(%esp)
 844244d:	e8 5e 55 2c 00       	call   87079b0 <_ZNSsC1ERKSs>
 8442452:	8b 5d ec             	mov    -0x14(%ebp),%ebx
 8442455:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8442458:	89 04 24             	mov    %eax,(%esp)
 844245b:	e8 50 c6 69 00       	call   8adeab0 <_Z9toTStringRKSs>
 8442460:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8442464:	89 44 24 08          	mov    %eax,0x8(%esp)
 8442468:	c7 44 24 04 d4 69 c5 	movl   $0x8c569d4,0x4(%esp)
 844246f:	08 
 8442470:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8442473:	89 04 24             	mov    %eax,(%esp)
 8442476:	e8 45 1d fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 844247b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8442482:	00 
 8442483:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8442486:	89 04 24             	mov    %eax,(%esp)
 8442489:	e8 98 1e fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 844248e:	83 f0 01             	xor    $0x1,%eax
 8442491:	84 c0                	test   %al,%al
 8442493:	74 0a                	je     844249f <_ZN22DB_SelectLevelUpReward8dispatchEiiP6Stream+0xd3>
 8442495:	bb 00 00 00 00       	mov    $0x0,%ebx
 844249a:	e9 66 02 00 00       	jmp    8442705 <_ZN22DB_SelectLevelUpReward8dispatchEiiP6Stream+0x339>
 844249f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84424a2:	89 04 24             	mov    %eax,(%esp)
 84424a5:	e8 c2 fe c9 ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 84424aa:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84424ad:	c6 45 e3 00          	movb   $0x0,-0x1d(%ebp)
 84424b1:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 84424b5:	0f 84 f8 00 00 00    	je     84425b3 <_ZN22DB_SelectLevelUpReward8dispatchEiiP6Stream+0x1e7>
 84424bb:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84424be:	89 04 24             	mov    %eax,(%esp)
 84424c1:	e8 f6 1f fb ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 84424c6:	83 f0 01             	xor    $0x1,%eax
 84424c9:	84 c0                	test   %al,%al
 84424cb:	74 0a                	je     84424d7 <_ZN22DB_SelectLevelUpReward8dispatchEiiP6Stream+0x10b>
 84424cd:	bb 00 00 00 00       	mov    $0x0,%ebx
 84424d2:	e9 2e 02 00 00       	jmp    8442705 <_ZN22DB_SelectLevelUpReward8dispatchEiiP6Stream+0x339>
 84424d7:	8d 45 e3             	lea    -0x1d(%ebp),%eax
 84424da:	89 44 24 08          	mov    %eax,0x8(%esp)
 84424de:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84424e5:	00 
 84424e6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84424e9:	89 04 24             	mov    %eax,(%esp)
 84424ec:	e8 c9 b9 cb ff       	call   80fdeba <_ZN5MySQL9get_ubyteEiRh>
 84424f1:	83 f0 01             	xor    $0x1,%eax
 84424f4:	84 c0                	test   %al,%al
 84424f6:	74 0a                	je     8442502 <_ZN22DB_SelectLevelUpReward8dispatchEiiP6Stream+0x136>
 84424f8:	bb 00 00 00 00       	mov    $0x0,%ebx
 84424fd:	e9 03 02 00 00       	jmp    8442705 <_ZN22DB_SelectLevelUpReward8dispatchEiiP6Stream+0x339>
 8442502:	0f b6 45 e3          	movzbl -0x1d(%ebp),%eax
 8442506:	0f b6 d0             	movzbl %al,%edx
 8442509:	8b 45 e8             	mov    -0x18(%ebp),%eax
 844250c:	39 c2                	cmp    %eax,%edx
 844250e:	75 4f                	jne    844255f <_ZN22DB_SelectLevelUpReward8dispatchEiiP6Stream+0x193>
 8442510:	0f b6 45 e3          	movzbl -0x1d(%ebp),%eax
 8442514:	0f b6 c8             	movzbl %al,%ecx
 8442517:	8b 55 e8             	mov    -0x18(%ebp),%edx
 844251a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 844251d:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 8442521:	89 54 24 18          	mov    %edx,0x18(%esp)
 8442525:	89 44 24 14          	mov    %eax,0x14(%esp)
 8442529:	c7 44 24 10 04 6a c5 	movl   $0x8c56a04,0x10(%esp)
 8442530:	08 
 8442531:	c7 44 24 0c a5 a2 00 	movl   $0xa2a5,0xc(%esp)
 8442538:	00 
 8442539:	c7 44 24 08 20 b7 c5 	movl   $0x8c5b720,0x8(%esp)
 8442540:	08 
 8442541:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8442548:	08 
 8442549:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8442550:	e8 b5 16 69 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8442555:	bb 00 00 00 00       	mov    $0x0,%ebx
 844255a:	e9 a6 01 00 00       	jmp    8442705 <_ZN22DB_SelectLevelUpReward8dispatchEiiP6Stream+0x339>
 844255f:	8b 75 ec             	mov    -0x14(%ebp),%esi
 8442562:	8b 5d e8             	mov    -0x18(%ebp),%ebx
 8442565:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8442568:	89 04 24             	mov    %eax,(%esp)
 844256b:	e8 40 c5 69 00       	call   8adeab0 <_Z9toTStringRKSs>
 8442570:	89 74 24 10          	mov    %esi,0x10(%esp)
 8442574:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8442578:	89 44 24 08          	mov    %eax,0x8(%esp)
 844257c:	c7 44 24 04 3c 6a c5 	movl   $0x8c56a3c,0x4(%esp)
 8442583:	08 
 8442584:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8442587:	89 04 24             	mov    %eax,(%esp)
 844258a:	e8 31 1c fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 844258f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8442596:	00 
 8442597:	8b 45 f0             	mov    -0x10(%ebp),%eax
 844259a:	89 04 24             	mov    %eax,(%esp)
 844259d:	e8 84 1d fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 84425a2:	83 f0 01             	xor    $0x1,%eax
 84425a5:	84 c0                	test   %al,%al
 84425a7:	74 5e                	je     8442607 <_ZN22DB_SelectLevelUpReward8dispatchEiiP6Stream+0x23b>
 84425a9:	bb 00 00 00 00       	mov    $0x0,%ebx
 84425ae:	e9 52 01 00 00       	jmp    8442705 <_ZN22DB_SelectLevelUpReward8dispatchEiiP6Stream+0x339>
 84425b3:	8b 75 e8             	mov    -0x18(%ebp),%esi
 84425b6:	8b 5d ec             	mov    -0x14(%ebp),%ebx
 84425b9:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84425bc:	89 04 24             	mov    %eax,(%esp)
 84425bf:	e8 ec c4 69 00       	call   8adeab0 <_Z9toTStringRKSs>
 84425c4:	89 74 24 10          	mov    %esi,0x10(%esp)
 84425c8:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 84425cc:	89 44 24 08          	mov    %eax,0x8(%esp)
 84425d0:	c7 44 24 04 7c 6a c5 	movl   $0x8c56a7c,0x4(%esp)
 84425d7:	08 
 84425d8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84425db:	89 04 24             	mov    %eax,(%esp)
 84425de:	e8 dd 1b fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84425e3:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84425ea:	00 
 84425eb:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84425ee:	89 04 24             	mov    %eax,(%esp)
 84425f1:	e8 30 1d fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 84425f6:	83 f0 01             	xor    $0x1,%eax
 84425f9:	84 c0                	test   %al,%al
 84425fb:	74 0a                	je     8442607 <_ZN22DB_SelectLevelUpReward8dispatchEiiP6Stream+0x23b>
 84425fd:	bb 00 00 00 00       	mov    $0x0,%ebx
 8442602:	e9 fe 00 00 00       	jmp    8442705 <_ZN22DB_SelectLevelUpReward8dispatchEiiP6Stream+0x339>
 8442607:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 844260c:	c7 44 24 08 ba a2 00 	movl   $0xa2ba,0x8(%esp)
 8442613:	00 
 8442614:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 844261b:	08 
 844261c:	89 04 24             	mov    %eax,(%esp)
 844261f:	e8 62 d4 e4 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8442624:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 844262b:	00 
 844262c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8442630:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8442633:	89 04 24             	mov    %eax,(%esp)
 8442636:	e8 eb 65 c8 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 844263b:	8d 45 d8             	lea    -0x28(%ebp),%eax
 844263e:	89 04 24             	mov    %eax,(%esp)
 8442641:	e8 00 66 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8442646:	8b 55 0c             	mov    0xc(%ebp),%edx
 8442649:	89 54 24 04          	mov    %edx,0x4(%esp)
 844264d:	89 04 24             	mov    %eax,(%esp)
 8442650:	e8 01 66 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8442655:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8442658:	89 04 24             	mov    %eax,(%esp)
 844265b:	e8 e6 65 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8442660:	8b 55 10             	mov    0x10(%ebp),%edx
 8442663:	89 54 24 04          	mov    %edx,0x4(%esp)
 8442667:	89 04 24             	mov    %eax,(%esp)
 844266a:	e8 e7 65 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 844266f:	8b 5d e8             	mov    -0x18(%ebp),%ebx
 8442672:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8442675:	89 04 24             	mov    %eax,(%esp)
 8442678:	e8 c9 65 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 844267d:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8442681:	89 04 24             	mov    %eax,(%esp)
 8442684:	e8 cd 65 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8442689:	0f b6 45 e3          	movzbl -0x1d(%ebp),%eax
 844268d:	0f b6 d8             	movzbl %al,%ebx
 8442690:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8442693:	89 04 24             	mov    %eax,(%esp)
 8442696:	e8 ab 65 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 844269b:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 844269f:	89 04 24             	mov    %eax,(%esp)
 84426a2:	e8 af 65 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84426a7:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 84426ac:	8d 55 d8             	lea    -0x28(%ebp),%edx
 84426af:	89 54 24 08          	mov    %edx,0x8(%esp)
 84426b3:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84426ba:	00 
 84426bb:	89 04 24             	mov    %eax,(%esp)
 84426be:	e8 1b e9 12 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 84426c3:	bb 01 00 00 00       	mov    $0x1,%ebx
 84426c8:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84426cb:	89 04 24             	mov    %eax,(%esp)
 84426ce:	e8 ff a1 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84426d3:	eb 30                	jmp    8442705 <_ZN22DB_SelectLevelUpReward8dispatchEiiP6Stream+0x339>
 84426d5:	89 d3                	mov    %edx,%ebx
 84426d7:	89 c6                	mov    %eax,%esi
 84426d9:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84426dc:	89 04 24             	mov    %eax,(%esp)
 84426df:	e8 ee a1 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84426e4:	89 f0                	mov    %esi,%eax
 84426e6:	89 da                	mov    %ebx,%edx
 84426e8:	eb 00                	jmp    84426ea <_ZN22DB_SelectLevelUpReward8dispatchEiiP6Stream+0x31e>
 84426ea:	89 d3                	mov    %edx,%ebx
 84426ec:	89 c6                	mov    %eax,%esi
 84426ee:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84426f1:	89 04 24             	mov    %eax,(%esp)
 84426f4:	e8 e7 54 2c 00       	call   8707be0 <_ZNSsD1Ev>
 84426f9:	89 f0                	mov    %esi,%eax
 84426fb:	89 da                	mov    %ebx,%edx
 84426fd:	89 04 24             	mov    %eax,(%esp)
 8442700:	e8 4b 10 6a 00       	call   8ae3750 <_Unwind_Resume>
 8442705:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8442708:	89 04 24             	mov    %eax,(%esp)
 844270b:	e8 d0 54 2c 00       	call   8707be0 <_ZNSsD1Ev>
 8442710:	89 d8                	mov    %ebx,%eax
 8442712:	83 c4 40             	add    $0x40,%esp
 8442715:	5b                   	pop    %ebx
 8442716:	5e                   	pop    %esi
 8442717:	5d                   	pop    %ebp
 8442718:	c3                   	ret
 8442719:	90                   	nop

```

```c
// DB_SelectLevelUpReward::dispatch @ 0x84423cc

/* DB_SelectLevelUpReward::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_SelectLevelUpReward::dispatch
          (DB_SelectLevelUpReward *this,int param_1,int param_2,Stream *param_3)

{
  uint uVar1;
  char cVar2;
  CDataManager *this_00;
  CEventScriptMng *this_01;
  string *psVar3;
  TCHAR *pTVar4;
  Stream *pSVar5;
  CStreamGuard *pCVar6;
  undefined4 uVar7;
  uint uVar8;
  CStreamGuard local_2c [11];
  byte local_21;
  string local_20;
  uint local_1c;
  uint local_18;
  MySQL *local_14;
  int local_10;
  
  local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  local_18 = 0;
  local_1c = 0;
  Stream::operator>>(param_3,&local_18);
  Stream::operator>>(param_3,(int *)&local_1c);
  this_00 = (CDataManager *)G_CDataManager();
  this_01 = (CEventScriptMng *)CDataManager::get_event_script_mng(this_00);
  psVar3 = (string *)EventClassify::CEventScriptMng::get_db_table_name(this_01,0x194);
  std::string::string((string *)&local_20,psVar3);
  uVar8 = local_18;
                    /* try { // try from 0844245b to 08442623 has its CatchHandler @ 084426ea */
  pTVar4 = toTString(&local_20);
  MySQL::set_query(local_14,"seLect  recv_level from %s where charac_no = %u",pTVar4,uVar8);
  cVar2 = MySQL::exec(local_14,true);
  if (cVar2 != '\x01') {
    uVar7 = 0;
    goto LAB_08442705;
  }
  local_10 = MySQL::get_n_rows(local_14);
  uVar1 = local_18;
  uVar8 = local_1c;
  local_21 = 0;
  if (local_10 == 0) {
    pTVar4 = toTString(&local_20);
    MySQL::set_query(local_14,"inSert into %s(charac_no,recv_level,occ_time) values (%u,%u,now() )",
                     pTVar4,uVar1,uVar8);
    cVar2 = MySQL::exec(local_14,true);
    if (cVar2 != '\x01') {
      uVar7 = 0;
      goto LAB_08442705;
    }
  }
  else {
    cVar2 = MySQL::fetch(local_14);
    if (cVar2 != '\x01') {
      uVar7 = 0;
      goto LAB_08442705;
    }
    cVar2 = MySQL::get_ubyte(local_14,0,&local_21);
    uVar1 = local_18;
    uVar8 = local_1c;
    if (cVar2 != '\x01') {
      uVar7 = 0;
      goto LAB_08442705;
    }
    if (local_21 == local_1c) {
      LogManager::logFormat
                (1,"DBThread.cpp","virtual bool DB_SelectLevelUpReward::dispatch(int, int, Stream*)"
                 ,0xa2a5,"DB_SelectLevelUpReward error char:%u lv:%u recv_lv:%u",local_18,local_1c,
                 (uint)local_21);
      uVar7 = 0;
      goto LAB_08442705;
    }
    pTVar4 = toTString(&local_20);
    MySQL::set_query(local_14,"upDate %s set recv_level=%u,occ_time=now() where charac_no=%u",pTVar4
                     ,uVar8,uVar1);
    cVar2 = MySQL::exec(local_14,true);
    if (cVar2 != '\x01') {
      uVar7 = 0;
      goto LAB_08442705;
    }
  }
  pSVar5 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xa2ba);
  CStreamGuard::CStreamGuard(local_2c,pSVar5,true);
  pCVar6 = (CStreamGuard *)CStreamGuard::operator*(local_2c);
                    /* try { // try from 08442650 to 084426c2 has its CatchHandler @ 084426d5 */
  CStreamGuard::operator<<(pCVar6,param_1);
  pCVar6 = (CStreamGuard *)CStreamGuard::operator*(local_2c);
  CStreamGuard::operator<<(pCVar6,param_2);
  uVar8 = local_1c;
  pCVar6 = (CStreamGuard *)CStreamGuard::operator*(local_2c);
  CStreamGuard::operator<<(pCVar6,uVar8);
  uVar8 = (uint)local_21;
  pCVar6 = (CStreamGuard *)CStreamGuard::operator*(local_2c);
  CStreamGuard::operator<<(pCVar6,uVar8);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_2c);
  uVar7 = 1;
                    /* try { // try from 084426ce to 084426d2 has its CatchHandler @ 084426ea */
  CStreamGuard::~CStreamGuard(local_2c);
LAB_08442705:
  std::string::~string((string *)&local_20);
  return uVar7;
}

```

---

## makeRequest

```asm
// === 0844271a DB_SelectLevelUpReward::makeRequest  [0x0844271a-0x8442809] ===
 844271a:	55                   	push   %ebp
 844271b:	89 e5                	mov    %esp,%ebp
 844271d:	56                   	push   %esi
 844271e:	53                   	push   %ebx
 844271f:	83 ec 20             	sub    $0x20,%esp
 8442722:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8442727:	c7 44 24 08 c6 a2 00 	movl   $0xa2c6,0x8(%esp)
 844272e:	00 
 844272f:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8442736:	08 
 8442737:	89 04 24             	mov    %eax,(%esp)
 844273a:	e8 47 d3 e4 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 844273f:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8442746:	00 
 8442747:	89 44 24 04          	mov    %eax,0x4(%esp)
 844274b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 844274e:	89 04 24             	mov    %eax,(%esp)
 8442751:	e8 d0 64 c8 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8442756:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8442759:	89 04 24             	mov    %eax,(%esp)
 844275c:	e8 e5 64 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8442761:	c7 44 24 04 8e 02 00 	movl   $0x28e,0x4(%esp)
 8442768:	00 
 8442769:	89 04 24             	mov    %eax,(%esp)
 844276c:	e8 e5 64 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8442771:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8442774:	89 04 24             	mov    %eax,(%esp)
 8442777:	e8 ca 64 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 844277c:	8b 55 08             	mov    0x8(%ebp),%edx
 844277f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8442783:	89 04 24             	mov    %eax,(%esp)
 8442786:	e8 cb 64 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 844278b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 844278e:	89 04 24             	mov    %eax,(%esp)
 8442791:	e8 b0 64 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8442796:	8b 55 0c             	mov    0xc(%ebp),%edx
 8442799:	89 54 24 04          	mov    %edx,0x4(%esp)
 844279d:	89 04 24             	mov    %eax,(%esp)
 84427a0:	e8 ed fa c9 ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 84427a5:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84427a8:	89 04 24             	mov    %eax,(%esp)
 84427ab:	e8 96 64 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84427b0:	8b 55 10             	mov    0x10(%ebp),%edx
 84427b3:	89 54 24 04          	mov    %edx,0x4(%esp)
 84427b7:	89 04 24             	mov    %eax,(%esp)
 84427ba:	e8 97 64 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84427bf:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 84427c4:	8d 55 f0             	lea    -0x10(%ebp),%edx
 84427c7:	89 54 24 08          	mov    %edx,0x8(%esp)
 84427cb:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84427d2:	00 
 84427d3:	89 04 24             	mov    %eax,(%esp)
 84427d6:	e8 03 e8 12 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 84427db:	eb 1b                	jmp    84427f8 <_ZN22DB_SelectLevelUpReward11makeRequestEiji+0xde>
 84427dd:	89 d3                	mov    %edx,%ebx
 84427df:	89 c6                	mov    %eax,%esi
 84427e1:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84427e4:	89 04 24             	mov    %eax,(%esp)
 84427e7:	e8 e6 a0 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84427ec:	89 f0                	mov    %esi,%eax
 84427ee:	89 da                	mov    %ebx,%edx
 84427f0:	89 04 24             	mov    %eax,(%esp)
 84427f3:	e8 58 0f 6a 00       	call   8ae3750 <_Unwind_Resume>
 84427f8:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84427fb:	89 04 24             	mov    %eax,(%esp)
 84427fe:	e8 cf a0 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8442803:	83 c4 20             	add    $0x20,%esp
 8442806:	5b                   	pop    %ebx
 8442807:	5e                   	pop    %esi
 8442808:	5d                   	pop    %ebp
 8442809:	c3                   	ret

```

```c
// DB_SelectLevelUpReward::makeRequest @ 0x844271a

/* DB_SelectLevelUpReward::makeRequest(int, unsigned int, int) */

void DB_SelectLevelUpReward::makeRequest(int param_1,uint param_2,int param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xa2c6);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0844276c to 084427da has its CatchHandler @ 084427dd */
  CStreamGuard::operator<<(pCVar2,0x28e);
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

