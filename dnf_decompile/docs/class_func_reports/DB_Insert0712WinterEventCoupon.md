# DB_Insert0712WinterEventCoupon

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## _makeRequest

```asm
// === 0842e6e0 DB_Insert0712WinterEventCoupon::_makeRequest  [0x0842e6e0-0x842e7bd] ===
 842e6e0:	55                   	push   %ebp
 842e6e1:	89 e5                	mov    %esp,%ebp
 842e6e3:	56                   	push   %esi
 842e6e4:	53                   	push   %ebx
 842e6e5:	83 ec 20             	sub    $0x20,%esp
 842e6e8:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 842e6ed:	c7 44 24 08 31 73 00 	movl   $0x7331,0x8(%esp)
 842e6f4:	00 
 842e6f5:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 842e6fc:	08 
 842e6fd:	89 04 24             	mov    %eax,(%esp)
 842e700:	e8 81 13 e6 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 842e705:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 842e70c:	00 
 842e70d:	89 44 24 04          	mov    %eax,0x4(%esp)
 842e711:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842e714:	89 04 24             	mov    %eax,(%esp)
 842e717:	e8 0a a5 c9 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 842e71c:	8b 5d 08             	mov    0x8(%ebp),%ebx
 842e71f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842e722:	89 04 24             	mov    %eax,(%esp)
 842e725:	e8 1c a5 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 842e72a:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 842e72e:	89 04 24             	mov    %eax,(%esp)
 842e731:	e8 20 a5 c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 842e736:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842e739:	89 04 24             	mov    %eax,(%esp)
 842e73c:	e8 05 a5 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 842e741:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 842e748:	ff 
 842e749:	89 04 24             	mov    %eax,(%esp)
 842e74c:	e8 05 a5 c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 842e751:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842e754:	89 04 24             	mov    %eax,(%esp)
 842e757:	e8 f2 a4 c9 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 842e75c:	89 04 24             	mov    %eax,(%esp)
 842e75f:	e8 b6 41 02 00       	call   845291a <_ZN12CStreamGuard11GetInBufferI35SIG_INSERT_0712_WINTER_EVENT_COUPONEEPT_v>
 842e764:	89 45 f4             	mov    %eax,-0xc(%ebp)
 842e767:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842e76a:	8b 55 0c             	mov    0xc(%ebp),%edx
 842e76d:	89 10                	mov    %edx,(%eax)
 842e76f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842e772:	8b 55 10             	mov    0x10(%ebp),%edx
 842e775:	89 50 04             	mov    %edx,0x4(%eax)
 842e778:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842e77b:	8b 55 14             	mov    0x14(%ebp),%edx
 842e77e:	89 50 08             	mov    %edx,0x8(%eax)
 842e781:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842e784:	89 04 24             	mov    %eax,(%esp)
 842e787:	e8 6e 28 cd ff       	call   8100ffa <_ZN12CStreamGuard3GetEv>
 842e78c:	89 c3                	mov    %eax,%ebx
 842e78e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842e791:	89 04 24             	mov    %eax,(%esp)
 842e794:	e8 39 e1 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 842e799:	89 d8                	mov    %ebx,%eax
 842e79b:	83 c4 20             	add    $0x20,%esp
 842e79e:	5b                   	pop    %ebx
 842e79f:	5e                   	pop    %esi
 842e7a0:	5d                   	pop    %ebp
 842e7a1:	c3                   	ret
 842e7a2:	89 d3                	mov    %edx,%ebx
 842e7a4:	89 c6                	mov    %eax,%esi
 842e7a6:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842e7a9:	89 04 24             	mov    %eax,(%esp)
 842e7ac:	e8 21 e1 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 842e7b1:	89 f0                	mov    %esi,%eax
 842e7b3:	89 da                	mov    %ebx,%edx
 842e7b5:	89 04 24             	mov    %eax,(%esp)
 842e7b8:	e8 93 4f 6b 00       	call   8ae3750 <_Unwind_Resume>
 842e7bd:	90                   	nop

```

```c
// DB_Insert0712WinterEventCoupon::_makeRequest @ 0x842e6e0

/* DB_Insert0712WinterEventCoupon::_makeRequest(ENUM_INTERNALPACKET, unsigned int, unsigned int,
   unsigned int) */

undefined4
DB_Insert0712WinterEventCoupon::_makeRequest
          (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  undefined4 uVar3;
  CStreamGuard local_18 [8];
  SIG_INSERT_0712_WINTER_EVENT_COUPON *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x7331);
  CStreamGuard::CStreamGuard(local_18,pSVar1,false);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0842e731 to 0842e763 has its CatchHandler @ 0842e7a2 */
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_INSERT_0712_WINTER_EVENT_COUPON>(pCVar2);
  *(undefined4 *)local_10 = param_2;
  *(undefined4 *)(local_10 + 4) = param_3;
  *(undefined4 *)(local_10 + 8) = param_4;
  uVar3 = CStreamGuard::Get(local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return uVar3;
}

```

---

## dispatch

```asm
// === 0842e45e DB_Insert0712WinterEventCoupon::dispatch  [0x0842e45e-0x842e647] ===
 842e45e:	55                   	push   %ebp
 842e45f:	89 e5                	mov    %esp,%ebp
 842e461:	53                   	push   %ebx
 842e462:	83 ec 24             	sub    $0x24,%esp
 842e465:	8b 45 14             	mov    0x14(%ebp),%eax
 842e468:	89 04 24             	mov    %eax,(%esp)
 842e46b:	e8 56 44 02 00       	call   84528c6 <_ZN6Stream12GetOutBufferI35SIG_INSERT_0712_WINTER_EVENT_COUPONEEPT_v>
 842e470:	89 45 ec             	mov    %eax,-0x14(%ebp)
 842e473:	81 7d 0c 12 01 00 00 	cmpl   $0x112,0xc(%ebp)
 842e47a:	0f 85 e3 00 00 00    	jne    842e563 <_ZN30DB_Insert0712WinterEventCoupon8dispatchEiiP6Stream+0x105>
 842e480:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 842e485:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 842e48c:	00 
 842e48d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842e494:	00 
 842e495:	89 04 24             	mov    %eax,(%esp)
 842e498:	e8 a1 6d fc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 842e49d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 842e4a0:	8b 45 ec             	mov    -0x14(%ebp),%eax
 842e4a3:	8b 00                	mov    (%eax),%eax
 842e4a5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 842e4ac:	00 
 842e4ad:	89 04 24             	mov    %eax,(%esp)
 842e4b0:	e8 96 ab cd ff       	call   810904b <_Z14NumberToStringji>
 842e4b5:	8b 55 ec             	mov    -0x14(%ebp),%edx
 842e4b8:	8b 52 08             	mov    0x8(%edx),%edx
 842e4bb:	89 44 24 0c          	mov    %eax,0xc(%esp)
 842e4bf:	89 54 24 08          	mov    %edx,0x8(%esp)
 842e4c3:	c7 44 24 04 9c 11 c5 	movl   $0x8c5119c,0x4(%esp)
 842e4ca:	08 
 842e4cb:	8b 45 f0             	mov    -0x10(%ebp),%eax
 842e4ce:	89 04 24             	mov    %eax,(%esp)
 842e4d1:	e8 ea 5c fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 842e4d6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842e4dd:	00 
 842e4de:	8b 45 f0             	mov    -0x10(%ebp),%eax
 842e4e1:	89 04 24             	mov    %eax,(%esp)
 842e4e4:	e8 3d 5e fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 842e4e9:	83 f0 01             	xor    $0x1,%eax
 842e4ec:	84 c0                	test   %al,%al
 842e4ee:	75 11                	jne    842e501 <_ZN30DB_Insert0712WinterEventCoupon8dispatchEiiP6Stream+0xa3>
 842e4f0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 842e4f3:	89 04 24             	mov    %eax,(%esp)
 842e4f6:	e8 15 5e fc ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 842e4fb:	09 d0                	or     %edx,%eax
 842e4fd:	85 c0                	test   %eax,%eax
 842e4ff:	75 07                	jne    842e508 <_ZN30DB_Insert0712WinterEventCoupon8dispatchEiiP6Stream+0xaa>
 842e501:	b8 01 00 00 00       	mov    $0x1,%eax
 842e506:	eb 05                	jmp    842e50d <_ZN30DB_Insert0712WinterEventCoupon8dispatchEiiP6Stream+0xaf>
 842e508:	b8 00 00 00 00       	mov    $0x0,%eax
 842e50d:	84 c0                	test   %al,%al
 842e50f:	0f 84 28 01 00 00    	je     842e63d <_ZN30DB_Insert0712WinterEventCoupon8dispatchEiiP6Stream+0x1df>
 842e515:	8b 45 ec             	mov    -0x14(%ebp),%eax
 842e518:	8b 58 08             	mov    0x8(%eax),%ebx
 842e51b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 842e51e:	8b 00                	mov    (%eax),%eax
 842e520:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 842e527:	00 
 842e528:	89 04 24             	mov    %eax,(%esp)
 842e52b:	e8 1b ab cd ff       	call   810904b <_Z14NumberToStringji>
 842e530:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 842e534:	89 44 24 08          	mov    %eax,0x8(%esp)
 842e538:	c7 44 24 04 dc 11 c5 	movl   $0x8c511dc,0x4(%esp)
 842e53f:	08 
 842e540:	8b 45 f0             	mov    -0x10(%ebp),%eax
 842e543:	89 04 24             	mov    %eax,(%esp)
 842e546:	e8 75 5c fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 842e54b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842e552:	00 
 842e553:	8b 45 f0             	mov    -0x10(%ebp),%eax
 842e556:	89 04 24             	mov    %eax,(%esp)
 842e559:	e8 c8 5d fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 842e55e:	e9 da 00 00 00       	jmp    842e63d <_ZN30DB_Insert0712WinterEventCoupon8dispatchEiiP6Stream+0x1df>
 842e563:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 842e568:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 842e56f:	00 
 842e570:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 842e577:	00 
 842e578:	89 04 24             	mov    %eax,(%esp)
 842e57b:	e8 be 6c fc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 842e580:	89 45 f4             	mov    %eax,-0xc(%ebp)
 842e583:	8b 45 ec             	mov    -0x14(%ebp),%eax
 842e586:	8b 00                	mov    (%eax),%eax
 842e588:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 842e58f:	00 
 842e590:	89 04 24             	mov    %eax,(%esp)
 842e593:	e8 b3 aa cd ff       	call   810904b <_Z14NumberToStringji>
 842e598:	8b 55 ec             	mov    -0x14(%ebp),%edx
 842e59b:	8b 52 08             	mov    0x8(%edx),%edx
 842e59e:	89 44 24 0c          	mov    %eax,0xc(%esp)
 842e5a2:	89 54 24 08          	mov    %edx,0x8(%esp)
 842e5a6:	c7 44 24 04 18 12 c5 	movl   $0x8c51218,0x4(%esp)
 842e5ad:	08 
 842e5ae:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842e5b1:	89 04 24             	mov    %eax,(%esp)
 842e5b4:	e8 07 5c fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 842e5b9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842e5c0:	00 
 842e5c1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842e5c4:	89 04 24             	mov    %eax,(%esp)
 842e5c7:	e8 5a 5d fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 842e5cc:	83 f0 01             	xor    $0x1,%eax
 842e5cf:	84 c0                	test   %al,%al
 842e5d1:	75 11                	jne    842e5e4 <_ZN30DB_Insert0712WinterEventCoupon8dispatchEiiP6Stream+0x186>
 842e5d3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842e5d6:	89 04 24             	mov    %eax,(%esp)
 842e5d9:	e8 32 5d fc ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 842e5de:	09 d0                	or     %edx,%eax
 842e5e0:	85 c0                	test   %eax,%eax
 842e5e2:	75 07                	jne    842e5eb <_ZN30DB_Insert0712WinterEventCoupon8dispatchEiiP6Stream+0x18d>
 842e5e4:	b8 01 00 00 00       	mov    $0x1,%eax
 842e5e9:	eb 05                	jmp    842e5f0 <_ZN30DB_Insert0712WinterEventCoupon8dispatchEiiP6Stream+0x192>
 842e5eb:	b8 00 00 00 00       	mov    $0x0,%eax
 842e5f0:	84 c0                	test   %al,%al
 842e5f2:	74 49                	je     842e63d <_ZN30DB_Insert0712WinterEventCoupon8dispatchEiiP6Stream+0x1df>
 842e5f4:	8b 45 ec             	mov    -0x14(%ebp),%eax
 842e5f7:	8b 58 08             	mov    0x8(%eax),%ebx
 842e5fa:	8b 45 ec             	mov    -0x14(%ebp),%eax
 842e5fd:	8b 00                	mov    (%eax),%eax
 842e5ff:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 842e606:	00 
 842e607:	89 04 24             	mov    %eax,(%esp)
 842e60a:	e8 3c aa cd ff       	call   810904b <_Z14NumberToStringji>
 842e60f:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 842e613:	89 44 24 08          	mov    %eax,0x8(%esp)
 842e617:	c7 44 24 04 64 12 c5 	movl   $0x8c51264,0x4(%esp)
 842e61e:	08 
 842e61f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842e622:	89 04 24             	mov    %eax,(%esp)
 842e625:	e8 96 5b fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 842e62a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842e631:	00 
 842e632:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842e635:	89 04 24             	mov    %eax,(%esp)
 842e638:	e8 e9 5c fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 842e63d:	b8 01 00 00 00       	mov    $0x1,%eax
 842e642:	83 c4 24             	add    $0x24,%esp
 842e645:	5b                   	pop    %ebx
 842e646:	5d                   	pop    %ebp
 842e647:	c3                   	ret

```

```c
// DB_Insert0712WinterEventCoupon::dispatch @ 0x842e45e

/* DB_Insert0712WinterEventCoupon::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_Insert0712WinterEventCoupon::dispatch
          (DB_Insert0712WinterEventCoupon *this,int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  char cVar2;
  SIG_INSERT_0712_WINTER_EVENT_COUPON *pSVar3;
  MySQL *pMVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  
  pSVar3 = Stream::GetOutBuffer<SIG_INSERT_0712_WINTER_EVENT_COUPON>(param_3);
  if (param_1 == 0x112) {
    pMVar4 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
    uVar5 = NumberToString(*(uint *)pSVar3,0);
    MySQL::set_query(pMVar4,"upDate event_goldcard_info set coupon=coupon+%d where m_id=%s",
                     *(undefined4 *)(pSVar3 + 8),uVar5);
    cVar2 = MySQL::exec(pMVar4,true);
    if ((cVar2 == '\x01') && (lVar7 = MySQL::getAffectedRowCount(pMVar4), lVar7 != 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar5 = *(undefined4 *)(pSVar3 + 8);
      uVar6 = NumberToString(*(uint *)pSVar3,0);
      MySQL::set_query(pMVar4,"inSert into event_goldcard_info(m_id,coupon) values(%s,%d)",uVar6,
                       uVar5);
      MySQL::exec(pMVar4,true);
    }
    return 1;
  }
  pMVar4 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  uVar5 = NumberToString(*(uint *)pSVar3,0);
  MySQL::set_query(pMVar4,
                   "upDate event_goldcard_log set cnt=cnt+%d where m_id=%s and occ_date=now()",
                   *(undefined4 *)(pSVar3 + 8),uVar5);
  cVar2 = MySQL::exec(pMVar4,true);
  if ((cVar2 == '\x01') && (lVar7 = MySQL::getAffectedRowCount(pMVar4), lVar7 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    return 1;
  }
  uVar5 = *(undefined4 *)(pSVar3 + 8);
  uVar6 = NumberToString(*(uint *)pSVar3,0);
  MySQL::set_query(pMVar4,"inSert into event_goldcard_log(m_id,cnt,occ_date) values(%s,%d,now())",
                   uVar6,uVar5);
  MySQL::exec(pMVar4,true);
  return 1;
}

```

---

## makeRequest

```asm
// === 0842e648 DB_Insert0712WinterEventCoupon::makeRequest  [0x0842e648-0x842e6df] ===
 842e648:	55                   	push   %ebp
 842e649:	89 e5                	mov    %esp,%ebp
 842e64b:	83 ec 28             	sub    $0x28,%esp
 842e64e:	8b 45 10             	mov    0x10(%ebp),%eax
 842e651:	89 44 24 0c          	mov    %eax,0xc(%esp)
 842e655:	8b 45 0c             	mov    0xc(%ebp),%eax
 842e658:	89 44 24 08          	mov    %eax,0x8(%esp)
 842e65c:	8b 45 08             	mov    0x8(%ebp),%eax
 842e65f:	89 44 24 04          	mov    %eax,0x4(%esp)
 842e663:	c7 04 24 12 01 00 00 	movl   $0x112,(%esp)
 842e66a:	e8 71 00 00 00       	call   842e6e0 <_ZN30DB_Insert0712WinterEventCoupon12_makeRequestE19ENUM_INTERNALPACKETjjj>
 842e66f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 842e672:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 842e676:	74 64                	je     842e6dc <_ZN30DB_Insert0712WinterEventCoupon11makeRequestEjjj+0x94>
 842e678:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 842e67d:	8b 55 f4             	mov    -0xc(%ebp),%edx
 842e680:	89 54 24 08          	mov    %edx,0x8(%esp)
 842e684:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 842e68b:	00 
 842e68c:	89 04 24             	mov    %eax,(%esp)
 842e68f:	e8 74 29 14 00       	call   8571008 <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXEP6Stream>
 842e694:	8b 45 10             	mov    0x10(%ebp),%eax
 842e697:	89 44 24 0c          	mov    %eax,0xc(%esp)
 842e69b:	8b 45 0c             	mov    0xc(%ebp),%eax
 842e69e:	89 44 24 08          	mov    %eax,0x8(%esp)
 842e6a2:	8b 45 08             	mov    0x8(%ebp),%eax
 842e6a5:	89 44 24 04          	mov    %eax,0x4(%esp)
 842e6a9:	c7 04 24 13 01 00 00 	movl   $0x113,(%esp)
 842e6b0:	e8 2b 00 00 00       	call   842e6e0 <_ZN30DB_Insert0712WinterEventCoupon12_makeRequestE19ENUM_INTERNALPACKETjjj>
 842e6b5:	89 45 f4             	mov    %eax,-0xc(%ebp)
 842e6b8:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 842e6bc:	74 1f                	je     842e6dd <_ZN30DB_Insert0712WinterEventCoupon11makeRequestEjjj+0x95>
 842e6be:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 842e6c3:	8b 55 f4             	mov    -0xc(%ebp),%edx
 842e6c6:	89 54 24 08          	mov    %edx,0x8(%esp)
 842e6ca:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 842e6d1:	00 
 842e6d2:	89 04 24             	mov    %eax,(%esp)
 842e6d5:	e8 2e 29 14 00       	call   8571008 <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXEP6Stream>
 842e6da:	eb 01                	jmp    842e6dd <_ZN30DB_Insert0712WinterEventCoupon11makeRequestEjjj+0x95>
 842e6dc:	90                   	nop
 842e6dd:	c9                   	leave
 842e6de:	c3                   	ret
 842e6df:	90                   	nop

```

```c
// DB_Insert0712WinterEventCoupon::makeRequest @ 0x842e648

/* DB_Insert0712WinterEventCoupon::makeRequest(unsigned int, unsigned int, unsigned int) */

void DB_Insert0712WinterEventCoupon::makeRequest(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = _makeRequest(0x112,param_1,param_2,param_3);
  if (iVar1 != 0) {
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,iVar1);
    iVar1 = _makeRequest(0x113,param_1,param_2,param_3);
    if (iVar1 != 0) {
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,4,iVar1);
    }
  }
  return;
}

```

