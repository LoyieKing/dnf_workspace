# DB_UpdatePurchaseCashItemBonus

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 0843e252 DB_UpdatePurchaseCashItemBonus::dispatch  [0x0843e252-0x843e55f] ===
 843e252:	55                   	push   %ebp
 843e253:	89 e5                	mov    %esp,%ebp
 843e255:	56                   	push   %esi
 843e256:	53                   	push   %ebx
 843e257:	83 ec 40             	sub    $0x40,%esp
 843e25a:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 843e25f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 843e266:	00 
 843e267:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 843e26e:	00 
 843e26f:	89 04 24             	mov    %eax,(%esp)
 843e272:	e8 c7 6f fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 843e277:	89 45 f0             	mov    %eax,-0x10(%ebp)
 843e27a:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 843e281:	8d 45 ec             	lea    -0x14(%ebp),%eax
 843e284:	89 44 24 04          	mov    %eax,0x4(%esp)
 843e288:	8b 45 14             	mov    0x14(%ebp),%eax
 843e28b:	89 04 24             	mov    %eax,(%esp)
 843e28e:	e8 03 e5 1d 00       	call   861c796 <_ZN6StreamrsERj>
 843e293:	e8 03 df c8 ff       	call   80cc19b <_Z14G_CDataManagerv>
 843e298:	89 04 24             	mov    %eax,(%esp)
 843e29b:	e8 c2 28 cd ff       	call   8110b62 <_ZN12CDataManager20get_event_script_mngEv>
 843e2a0:	c7 44 24 04 9a 01 00 	movl   $0x19a,0x4(%esp)
 843e2a7:	00 
 843e2a8:	89 04 24             	mov    %eax,(%esp)
 843e2ab:	e8 60 ce cc ff       	call   810b110 <_ZN13EventClassify15CEventScriptMng17get_db_table_nameEi>
 843e2b0:	89 44 24 04          	mov    %eax,0x4(%esp)
 843e2b4:	8d 45 e8             	lea    -0x18(%ebp),%eax
 843e2b7:	89 04 24             	mov    %eax,(%esp)
 843e2ba:	e8 f1 96 2c 00       	call   87079b0 <_ZNSsC1ERKSs>
 843e2bf:	8b 45 ec             	mov    -0x14(%ebp),%eax
 843e2c2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 843e2c9:	00 
 843e2ca:	89 04 24             	mov    %eax,(%esp)
 843e2cd:	e8 79 ad cc ff       	call   810904b <_Z14NumberToStringji>
 843e2d2:	89 c3                	mov    %eax,%ebx
 843e2d4:	8d 45 e8             	lea    -0x18(%ebp),%eax
 843e2d7:	89 04 24             	mov    %eax,(%esp)
 843e2da:	e8 d1 07 6a 00       	call   8adeab0 <_Z9toTStringRKSs>
 843e2df:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 843e2e3:	89 44 24 08          	mov    %eax,0x8(%esp)
 843e2e7:	c7 44 24 04 50 56 c5 	movl   $0x8c55650,0x4(%esp)
 843e2ee:	08 
 843e2ef:	8b 45 f0             	mov    -0x10(%ebp),%eax
 843e2f2:	89 04 24             	mov    %eax,(%esp)
 843e2f5:	e8 c6 5e fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 843e2fa:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843e301:	00 
 843e302:	8b 45 f0             	mov    -0x10(%ebp),%eax
 843e305:	89 04 24             	mov    %eax,(%esp)
 843e308:	e8 19 60 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 843e30d:	83 f0 01             	xor    $0x1,%eax
 843e310:	84 c0                	test   %al,%al
 843e312:	74 0a                	je     843e31e <_ZN30DB_UpdatePurchaseCashItemBonus8dispatchEiiP6Stream+0xcc>
 843e314:	bb 00 00 00 00       	mov    $0x0,%ebx
 843e319:	e9 2d 02 00 00       	jmp    843e54b <_ZN30DB_UpdatePurchaseCashItemBonus8dispatchEiiP6Stream+0x2f9>
 843e31e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 843e321:	89 04 24             	mov    %eax,(%esp)
 843e324:	e8 e7 5f fb ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 843e329:	09 d0                	or     %edx,%eax
 843e32b:	85 c0                	test   %eax,%eax
 843e32d:	0f 94 c0             	sete   %al
 843e330:	84 c0                	test   %al,%al
 843e332:	74 67                	je     843e39b <_ZN30DB_UpdatePurchaseCashItemBonus8dispatchEiiP6Stream+0x149>
 843e334:	8b 45 ec             	mov    -0x14(%ebp),%eax
 843e337:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 843e33e:	00 
 843e33f:	89 04 24             	mov    %eax,(%esp)
 843e342:	e8 04 ad cc ff       	call   810904b <_Z14NumberToStringji>
 843e347:	89 c3                	mov    %eax,%ebx
 843e349:	8d 45 e8             	lea    -0x18(%ebp),%eax
 843e34c:	89 04 24             	mov    %eax,(%esp)
 843e34f:	e8 5c 07 6a 00       	call   8adeab0 <_Z9toTStringRKSs>
 843e354:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 843e35b:	00 
 843e35c:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 843e360:	89 44 24 08          	mov    %eax,0x8(%esp)
 843e364:	c7 44 24 04 8c 56 c5 	movl   $0x8c5568c,0x4(%esp)
 843e36b:	08 
 843e36c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 843e36f:	89 04 24             	mov    %eax,(%esp)
 843e372:	e8 49 5e fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 843e377:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843e37e:	00 
 843e37f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 843e382:	89 04 24             	mov    %eax,(%esp)
 843e385:	e8 9c 5f fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 843e38a:	83 f0 01             	xor    $0x1,%eax
 843e38d:	84 c0                	test   %al,%al
 843e38f:	74 0a                	je     843e39b <_ZN30DB_UpdatePurchaseCashItemBonus8dispatchEiiP6Stream+0x149>
 843e391:	bb 00 00 00 00       	mov    $0x0,%ebx
 843e396:	e9 b0 01 00 00       	jmp    843e54b <_ZN30DB_UpdatePurchaseCashItemBonus8dispatchEiiP6Stream+0x2f9>
 843e39b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 843e39e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 843e3a5:	00 
 843e3a6:	89 04 24             	mov    %eax,(%esp)
 843e3a9:	e8 9d ac cc ff       	call   810904b <_Z14NumberToStringji>
 843e3ae:	89 c3                	mov    %eax,%ebx
 843e3b0:	8d 45 e8             	lea    -0x18(%ebp),%eax
 843e3b3:	89 04 24             	mov    %eax,(%esp)
 843e3b6:	e8 f5 06 6a 00       	call   8adeab0 <_Z9toTStringRKSs>
 843e3bb:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 843e3bf:	89 44 24 08          	mov    %eax,0x8(%esp)
 843e3c3:	c7 44 24 04 c0 56 c5 	movl   $0x8c556c0,0x4(%esp)
 843e3ca:	08 
 843e3cb:	8b 45 f0             	mov    -0x10(%ebp),%eax
 843e3ce:	89 04 24             	mov    %eax,(%esp)
 843e3d1:	e8 ea 5d fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 843e3d6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843e3dd:	00 
 843e3de:	8b 45 f0             	mov    -0x10(%ebp),%eax
 843e3e1:	89 04 24             	mov    %eax,(%esp)
 843e3e4:	e8 3d 5f fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 843e3e9:	83 f0 01             	xor    $0x1,%eax
 843e3ec:	84 c0                	test   %al,%al
 843e3ee:	74 0a                	je     843e3fa <_ZN30DB_UpdatePurchaseCashItemBonus8dispatchEiiP6Stream+0x1a8>
 843e3f0:	bb 00 00 00 00       	mov    $0x0,%ebx
 843e3f5:	e9 51 01 00 00       	jmp    843e54b <_ZN30DB_UpdatePurchaseCashItemBonus8dispatchEiiP6Stream+0x2f9>
 843e3fa:	8b 45 f0             	mov    -0x10(%ebp),%eax
 843e3fd:	89 04 24             	mov    %eax,(%esp)
 843e400:	e8 67 3f ca ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 843e405:	85 c0                	test   %eax,%eax
 843e407:	0f 94 c0             	sete   %al
 843e40a:	84 c0                	test   %al,%al
 843e40c:	74 0a                	je     843e418 <_ZN30DB_UpdatePurchaseCashItemBonus8dispatchEiiP6Stream+0x1c6>
 843e40e:	bb 00 00 00 00       	mov    $0x0,%ebx
 843e413:	e9 33 01 00 00       	jmp    843e54b <_ZN30DB_UpdatePurchaseCashItemBonus8dispatchEiiP6Stream+0x2f9>
 843e418:	8b 45 f0             	mov    -0x10(%ebp),%eax
 843e41b:	89 04 24             	mov    %eax,(%esp)
 843e41e:	e8 99 60 fb ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 843e423:	83 f0 01             	xor    $0x1,%eax
 843e426:	84 c0                	test   %al,%al
 843e428:	74 0a                	je     843e434 <_ZN30DB_UpdatePurchaseCashItemBonus8dispatchEiiP6Stream+0x1e2>
 843e42a:	bb 00 00 00 00       	mov    $0x0,%ebx
 843e42f:	e9 17 01 00 00       	jmp    843e54b <_ZN30DB_UpdatePurchaseCashItemBonus8dispatchEiiP6Stream+0x2f9>
 843e434:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 843e43b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 843e43e:	89 44 24 08          	mov    %eax,0x8(%esp)
 843e442:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 843e449:	00 
 843e44a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 843e44d:	89 04 24             	mov    %eax,(%esp)
 843e450:	e8 9d 3e ca ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 843e455:	83 f0 01             	xor    $0x1,%eax
 843e458:	84 c0                	test   %al,%al
 843e45a:	74 0a                	je     843e466 <_ZN30DB_UpdatePurchaseCashItemBonus8dispatchEiiP6Stream+0x214>
 843e45c:	bb 00 00 00 00       	mov    $0x0,%ebx
 843e461:	e9 e5 00 00 00       	jmp    843e54b <_ZN30DB_UpdatePurchaseCashItemBonus8dispatchEiiP6Stream+0x2f9>
 843e466:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 843e46b:	c7 44 24 08 07 94 00 	movl   $0x9407,0x8(%esp)
 843e472:	00 
 843e473:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 843e47a:	08 
 843e47b:	89 04 24             	mov    %eax,(%esp)
 843e47e:	e8 03 16 e5 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 843e483:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 843e48a:	00 
 843e48b:	89 44 24 04          	mov    %eax,0x4(%esp)
 843e48f:	8d 45 dc             	lea    -0x24(%ebp),%eax
 843e492:	89 04 24             	mov    %eax,(%esp)
 843e495:	e8 8c a7 c8 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 843e49a:	8d 45 dc             	lea    -0x24(%ebp),%eax
 843e49d:	89 04 24             	mov    %eax,(%esp)
 843e4a0:	e8 a1 a7 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843e4a5:	c7 44 24 04 3c 02 00 	movl   $0x23c,0x4(%esp)
 843e4ac:	00 
 843e4ad:	89 04 24             	mov    %eax,(%esp)
 843e4b0:	e8 a1 a7 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843e4b5:	8d 45 dc             	lea    -0x24(%ebp),%eax
 843e4b8:	89 04 24             	mov    %eax,(%esp)
 843e4bb:	e8 86 a7 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843e4c0:	8b 55 10             	mov    0x10(%ebp),%edx
 843e4c3:	89 54 24 04          	mov    %edx,0x4(%esp)
 843e4c7:	89 04 24             	mov    %eax,(%esp)
 843e4ca:	e8 87 a7 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843e4cf:	8d 45 dc             	lea    -0x24(%ebp),%eax
 843e4d2:	89 04 24             	mov    %eax,(%esp)
 843e4d5:	e8 74 a7 c8 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 843e4da:	89 04 24             	mov    %eax,(%esp)
 843e4dd:	e8 c4 56 01 00       	call   8453ba6 <_ZN12CStreamGuard11GetInBufferI27SIG_PURCHASE_CASHITEM_BONUSEEPT_v>
 843e4e2:	89 45 f4             	mov    %eax,-0xc(%ebp)
 843e4e5:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 843e4e8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843e4eb:	89 10                	mov    %edx,(%eax)
 843e4ed:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 843e4f2:	8d 55 dc             	lea    -0x24(%ebp),%edx
 843e4f5:	89 54 24 08          	mov    %edx,0x8(%esp)
 843e4f9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843e500:	00 
 843e501:	89 04 24             	mov    %eax,(%esp)
 843e504:	e8 d5 2a 13 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 843e509:	bb 01 00 00 00       	mov    $0x1,%ebx
 843e50e:	8d 45 dc             	lea    -0x24(%ebp),%eax
 843e511:	89 04 24             	mov    %eax,(%esp)
 843e514:	e8 b9 e3 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 843e519:	eb 30                	jmp    843e54b <_ZN30DB_UpdatePurchaseCashItemBonus8dispatchEiiP6Stream+0x2f9>
 843e51b:	89 d3                	mov    %edx,%ebx
 843e51d:	89 c6                	mov    %eax,%esi
 843e51f:	8d 45 dc             	lea    -0x24(%ebp),%eax
 843e522:	89 04 24             	mov    %eax,(%esp)
 843e525:	e8 a8 e3 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 843e52a:	89 f0                	mov    %esi,%eax
 843e52c:	89 da                	mov    %ebx,%edx
 843e52e:	eb 00                	jmp    843e530 <_ZN30DB_UpdatePurchaseCashItemBonus8dispatchEiiP6Stream+0x2de>
 843e530:	89 d3                	mov    %edx,%ebx
 843e532:	89 c6                	mov    %eax,%esi
 843e534:	8d 45 e8             	lea    -0x18(%ebp),%eax
 843e537:	89 04 24             	mov    %eax,(%esp)
 843e53a:	e8 a1 96 2c 00       	call   8707be0 <_ZNSsD1Ev>
 843e53f:	89 f0                	mov    %esi,%eax
 843e541:	89 da                	mov    %ebx,%edx
 843e543:	89 04 24             	mov    %eax,(%esp)
 843e546:	e8 05 52 6a 00       	call   8ae3750 <_Unwind_Resume>
 843e54b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 843e54e:	89 04 24             	mov    %eax,(%esp)
 843e551:	e8 8a 96 2c 00       	call   8707be0 <_ZNSsD1Ev>
 843e556:	89 d8                	mov    %ebx,%eax
 843e558:	83 c4 40             	add    $0x40,%esp
 843e55b:	5b                   	pop    %ebx
 843e55c:	5e                   	pop    %esi
 843e55d:	5d                   	pop    %ebp
 843e55e:	c3                   	ret
 843e55f:	90                   	nop

```

```c
// DB_UpdatePurchaseCashItemBonus::dispatch @ 0x843e252

/* DB_UpdatePurchaseCashItemBonus::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_UpdatePurchaseCashItemBonus::dispatch
          (DB_UpdatePurchaseCashItemBonus *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  CDataManager *this_00;
  CEventScriptMng *this_01;
  string *psVar2;
  undefined4 uVar3;
  TCHAR *pTVar4;
  int iVar5;
  Stream *pSVar6;
  CStreamGuard *pCVar7;
  longlong lVar8;
  CStreamGuard local_28 [8];
  uint local_20;
  string local_1c;
  uint local_18;
  MySQL *local_14;
  SIG_PURCHASE_CASHITEM_BONUS *local_10;
  
  local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
  local_18 = 0;
  Stream::operator>>(param_3,&local_18);
  this_00 = (CDataManager *)G_CDataManager();
  this_01 = (CEventScriptMng *)CDataManager::get_event_script_mng(this_00);
  psVar2 = (string *)EventClassify::CEventScriptMng::get_db_table_name(this_01,0x19a);
  std::string::string((string *)&local_1c,psVar2);
                    /* try { // try from 0843e2cd to 0843e482 has its CatchHandler @ 0843e530 */
  uVar3 = NumberToString(local_18,0);
  pTVar4 = toTString(&local_1c);
  MySQL::set_query(local_14,"upDate %s set purchase_cnt = purchase_cnt + 1 where m_id=%s",pTVar4,
                   uVar3);
  cVar1 = MySQL::exec(local_14,true);
  if (cVar1 == '\x01') {
    lVar8 = MySQL::getAffectedRowCount(local_14);
    if (lVar8 == 0) {
      uVar3 = NumberToString(local_18,0);
      pTVar4 = toTString(&local_1c);
      MySQL::set_query(local_14,"inSert into %s(m_id, purchase_cnt) values(%s, %u)",pTVar4,uVar3,1);
      cVar1 = MySQL::exec(local_14,true);
      if (cVar1 != '\x01') {
        uVar3 = 0;
        goto LAB_0843e54b;
      }
    }
    uVar3 = NumberToString(local_18,0);
    pTVar4 = toTString(&local_1c);
    MySQL::set_query(local_14,"seLect purchase_cnt from %s where m_id=%s",pTVar4,uVar3);
    cVar1 = MySQL::exec(local_14,true);
    if (cVar1 == '\x01') {
      iVar5 = MySQL::get_n_rows(local_14);
      if (iVar5 == 0) {
        uVar3 = 0;
      }
      else {
        cVar1 = MySQL::fetch(local_14);
        if (cVar1 == '\x01') {
          local_20 = 0;
          cVar1 = MySQL::get_uint(local_14,0,&local_20);
          if (cVar1 == '\x01') {
            pSVar6 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x9407);
            CStreamGuard::CStreamGuard(local_28,pSVar6,true);
            pCVar7 = (CStreamGuard *)CStreamGuard::operator*(local_28);
                    /* try { // try from 0843e4b0 to 0843e508 has its CatchHandler @ 0843e51b */
            CStreamGuard::operator<<(pCVar7,0x23c);
            pCVar7 = (CStreamGuard *)CStreamGuard::operator*(local_28);
            CStreamGuard::operator<<(pCVar7,param_2);
            pCVar7 = (CStreamGuard *)CStreamGuard::operator->(local_28);
            local_10 = CStreamGuard::GetInBuffer<SIG_PURCHASE_CASHITEM_BONUS>(pCVar7);
            *(uint *)local_10 = local_20;
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_28);
            uVar3 = 1;
                    /* try { // try from 0843e514 to 0843e518 has its CatchHandler @ 0843e530 */
            CStreamGuard::~CStreamGuard(local_28);
          }
          else {
            uVar3 = 0;
          }
        }
        else {
          uVar3 = 0;
        }
      }
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0;
  }
LAB_0843e54b:
  std::string::~string((string *)&local_1c);
  return uVar3;
}

```

---

## makeRequest

```asm
// === 0843e560 DB_UpdatePurchaseCashItemBonus::makeRequest  [0x0843e560-0x843e635] ===
 843e560:	55                   	push   %ebp
 843e561:	89 e5                	mov    %esp,%ebp
 843e563:	56                   	push   %esi
 843e564:	53                   	push   %ebx
 843e565:	83 ec 20             	sub    $0x20,%esp
 843e568:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 843e56d:	c7 44 24 08 15 94 00 	movl   $0x9415,0x8(%esp)
 843e574:	00 
 843e575:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 843e57c:	08 
 843e57d:	89 04 24             	mov    %eax,(%esp)
 843e580:	e8 01 15 e5 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 843e585:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 843e58c:	00 
 843e58d:	89 44 24 04          	mov    %eax,0x4(%esp)
 843e591:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843e594:	89 04 24             	mov    %eax,(%esp)
 843e597:	e8 8a a6 c8 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 843e59c:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843e59f:	89 04 24             	mov    %eax,(%esp)
 843e5a2:	e8 9f a6 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843e5a7:	c7 44 24 04 3c 02 00 	movl   $0x23c,0x4(%esp)
 843e5ae:	00 
 843e5af:	89 04 24             	mov    %eax,(%esp)
 843e5b2:	e8 9f a6 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843e5b7:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843e5ba:	89 04 24             	mov    %eax,(%esp)
 843e5bd:	e8 84 a6 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843e5c2:	8b 55 08             	mov    0x8(%ebp),%edx
 843e5c5:	89 54 24 04          	mov    %edx,0x4(%esp)
 843e5c9:	89 04 24             	mov    %eax,(%esp)
 843e5cc:	e8 85 a6 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843e5d1:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843e5d4:	89 04 24             	mov    %eax,(%esp)
 843e5d7:	e8 6a a6 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843e5dc:	8b 55 0c             	mov    0xc(%ebp),%edx
 843e5df:	89 54 24 04          	mov    %edx,0x4(%esp)
 843e5e3:	89 04 24             	mov    %eax,(%esp)
 843e5e6:	e8 a7 3c ca ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 843e5eb:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 843e5f0:	8d 55 f0             	lea    -0x10(%ebp),%edx
 843e5f3:	89 54 24 08          	mov    %edx,0x8(%esp)
 843e5f7:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 843e5fe:	00 
 843e5ff:	89 04 24             	mov    %eax,(%esp)
 843e602:	e8 d7 29 13 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 843e607:	eb 1b                	jmp    843e624 <_ZN30DB_UpdatePurchaseCashItemBonus11makeRequestEij+0xc4>
 843e609:	89 d3                	mov    %edx,%ebx
 843e60b:	89 c6                	mov    %eax,%esi
 843e60d:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843e610:	89 04 24             	mov    %eax,(%esp)
 843e613:	e8 ba e2 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 843e618:	89 f0                	mov    %esi,%eax
 843e61a:	89 da                	mov    %ebx,%edx
 843e61c:	89 04 24             	mov    %eax,(%esp)
 843e61f:	e8 2c 51 6a 00       	call   8ae3750 <_Unwind_Resume>
 843e624:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843e627:	89 04 24             	mov    %eax,(%esp)
 843e62a:	e8 a3 e2 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 843e62f:	83 c4 20             	add    $0x20,%esp
 843e632:	5b                   	pop    %ebx
 843e633:	5e                   	pop    %esi
 843e634:	5d                   	pop    %ebp
 843e635:	c3                   	ret

```

```c
// DB_UpdatePurchaseCashItemBonus::makeRequest @ 0x843e560

/* DB_UpdatePurchaseCashItemBonus::makeRequest(int, unsigned int) */

void DB_UpdatePurchaseCashItemBonus::makeRequest(int param_1,uint param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x9415);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0843e5b2 to 0843e606 has its CatchHandler @ 0843e609 */
  CStreamGuard::operator<<(pCVar2,0x23c);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}

```

