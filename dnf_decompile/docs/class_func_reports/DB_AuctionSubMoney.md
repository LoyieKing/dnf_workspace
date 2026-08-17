# DB_AuctionSubMoney

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 08448530 DB_AuctionSubMoney::dispatch  [0x08448530-0x844874d] ===
 8448530:	55                   	push   %ebp
 8448531:	89 e5                	mov    %esp,%ebp
 8448533:	57                   	push   %edi
 8448534:	56                   	push   %esi
 8448535:	53                   	push   %ebx
 8448536:	83 ec 7c             	sub    $0x7c,%esp
 8448539:	8b 45 14             	mov    0x14(%ebp),%eax
 844853c:	89 04 24             	mov    %eax,(%esp)
 844853f:	e8 e2 c0 00 00       	call   8454626 <_ZN6Stream12GetOutBufferI21SIG_AUCTION_MONEY_SUBEEPT_v>
 8448544:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8448547:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 844854e:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8448553:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 844855a:	00 
 844855b:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8448562:	00 
 8448563:	89 04 24             	mov    %eax,(%esp)
 8448566:	e8 d3 cc fa ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 844856b:	89 45 e0             	mov    %eax,-0x20(%ebp)
 844856e:	8d 55 95             	lea    -0x6b(%ebp),%edx
 8448571:	bb 3b 00 00 00       	mov    $0x3b,%ebx
 8448576:	b8 00 00 00 00       	mov    $0x0,%eax
 844857b:	89 d1                	mov    %edx,%ecx
 844857d:	83 e1 01             	and    $0x1,%ecx
 8448580:	85 c9                	test   %ecx,%ecx
 8448582:	74 08                	je     844858c <_ZN18DB_AuctionSubMoney8dispatchEiiP6Stream+0x5c>
 8448584:	88 02                	mov    %al,(%edx)
 8448586:	83 c2 01             	add    $0x1,%edx
 8448589:	83 eb 01             	sub    $0x1,%ebx
 844858c:	89 d1                	mov    %edx,%ecx
 844858e:	83 e1 02             	and    $0x2,%ecx
 8448591:	85 c9                	test   %ecx,%ecx
 8448593:	74 09                	je     844859e <_ZN18DB_AuctionSubMoney8dispatchEiiP6Stream+0x6e>
 8448595:	66 89 02             	mov    %ax,(%edx)
 8448598:	83 c2 02             	add    $0x2,%edx
 844859b:	83 eb 02             	sub    $0x2,%ebx
 844859e:	89 d9                	mov    %ebx,%ecx
 84485a0:	c1 e9 02             	shr    $0x2,%ecx
 84485a3:	89 d7                	mov    %edx,%edi
 84485a5:	f3 ab                	rep stos %eax,%es:(%edi)
 84485a7:	89 fa                	mov    %edi,%edx
 84485a9:	89 d9                	mov    %ebx,%ecx
 84485ab:	83 e1 02             	and    $0x2,%ecx
 84485ae:	85 c9                	test   %ecx,%ecx
 84485b0:	74 06                	je     84485b8 <_ZN18DB_AuctionSubMoney8dispatchEiiP6Stream+0x88>
 84485b2:	66 89 02             	mov    %ax,(%edx)
 84485b5:	83 c2 02             	add    $0x2,%edx
 84485b8:	89 d9                	mov    %ebx,%ecx
 84485ba:	83 e1 01             	and    $0x1,%ecx
 84485bd:	85 c9                	test   %ecx,%ecx
 84485bf:	74 05                	je     84485c6 <_ZN18DB_AuctionSubMoney8dispatchEiiP6Stream+0x96>
 84485c1:	88 02                	mov    %al,(%edx)
 84485c3:	83 c2 01             	add    $0x1,%edx
 84485c6:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84485c9:	83 c0 08             	add    $0x8,%eax
 84485cc:	89 44 24 08          	mov    %eax,0x8(%esp)
 84485d0:	8d 45 95             	lea    -0x6b(%ebp),%eax
 84485d3:	89 44 24 04          	mov    %eax,0x4(%esp)
 84485d7:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84485da:	89 04 24             	mov    %eax,(%esp)
 84485dd:	e8 c8 c2 fa ff       	call   83f48aa <_ZN5MySQL13escape_stringEPcPKc>
 84485e2:	8d 45 95             	lea    -0x6b(%ebp),%eax
 84485e5:	89 44 24 08          	mov    %eax,0x8(%esp)
 84485e9:	c7 44 24 04 50 38 c5 	movl   $0x8c53850,0x4(%esp)
 84485f0:	08 
 84485f1:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84485f4:	89 04 24             	mov    %eax,(%esp)
 84485f7:	e8 c4 bb fa ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84485fc:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8448603:	00 
 8448604:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8448607:	89 04 24             	mov    %eax,(%esp)
 844860a:	e8 17 bd fa ff       	call   83f4326 <_ZN5MySQL4execEb>
 844860f:	83 f0 01             	xor    $0x1,%eax
 8448612:	84 c0                	test   %al,%al
 8448614:	74 0a                	je     8448620 <_ZN18DB_AuctionSubMoney8dispatchEiiP6Stream+0xf0>
 8448616:	bb 00 00 00 00       	mov    $0x0,%ebx
 844861b:	e9 23 01 00 00       	jmp    8448743 <_ZN18DB_AuctionSubMoney8dispatchEiiP6Stream+0x213>
 8448620:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8448623:	89 04 24             	mov    %eax,(%esp)
 8448626:	e8 91 be fa ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 844862b:	83 f0 01             	xor    $0x1,%eax
 844862e:	84 c0                	test   %al,%al
 8448630:	74 0a                	je     844863c <_ZN18DB_AuctionSubMoney8dispatchEiiP6Stream+0x10c>
 8448632:	bb 00 00 00 00       	mov    $0x0,%ebx
 8448637:	e9 07 01 00 00       	jmp    8448743 <_ZN18DB_AuctionSubMoney8dispatchEiiP6Stream+0x213>
 844863c:	8d 45 d8             	lea    -0x28(%ebp),%eax
 844863f:	89 44 24 08          	mov    %eax,0x8(%esp)
 8448643:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 844864a:	00 
 844864b:	8b 45 e0             	mov    -0x20(%ebp),%eax
 844864e:	89 04 24             	mov    %eax,(%esp)
 8448651:	e8 58 9c c9 ff       	call   80e22ae <_ZN5MySQL7get_intEiRj>
 8448656:	83 f0 01             	xor    $0x1,%eax
 8448659:	84 c0                	test   %al,%al
 844865b:	74 0a                	je     8448667 <_ZN18DB_AuctionSubMoney8dispatchEiiP6Stream+0x137>
 844865d:	bb 00 00 00 00       	mov    $0x0,%ebx
 8448662:	e9 dc 00 00 00       	jmp    8448743 <_ZN18DB_AuctionSubMoney8dispatchEiiP6Stream+0x213>
 8448667:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 844866c:	c7 44 24 08 51 b5 00 	movl   $0xb551,0x8(%esp)
 8448673:	00 
 8448674:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 844867b:	08 
 844867c:	89 04 24             	mov    %eax,(%esp)
 844867f:	e8 02 74 e4 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8448684:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 844868b:	00 
 844868c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8448690:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8448693:	89 04 24             	mov    %eax,(%esp)
 8448696:	e8 8b 05 c8 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 844869b:	8d 45 d0             	lea    -0x30(%ebp),%eax
 844869e:	89 04 24             	mov    %eax,(%esp)
 84486a1:	e8 a0 05 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84486a6:	c7 44 24 04 09 03 00 	movl   $0x309,0x4(%esp)
 84486ad:	00 
 84486ae:	89 04 24             	mov    %eax,(%esp)
 84486b1:	e8 a0 05 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84486b6:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84486b9:	89 04 24             	mov    %eax,(%esp)
 84486bc:	e8 85 05 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84486c1:	8b 55 10             	mov    0x10(%ebp),%edx
 84486c4:	89 54 24 04          	mov    %edx,0x4(%esp)
 84486c8:	89 04 24             	mov    %eax,(%esp)
 84486cb:	e8 86 05 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84486d0:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84486d3:	89 04 24             	mov    %eax,(%esp)
 84486d6:	e8 73 05 c8 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 84486db:	89 04 24             	mov    %eax,(%esp)
 84486de:	e8 b3 f4 de ff       	call   8237b96 <_ZN12CStreamGuard11GetInBufferI21SIG_AUCTION_MONEY_SUBEEPT_v>
 84486e3:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84486e6:	8b 55 d8             	mov    -0x28(%ebp),%edx
 84486e9:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84486ec:	89 10                	mov    %edx,(%eax)
 84486ee:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84486f1:	8b 50 04             	mov    0x4(%eax),%edx
 84486f4:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84486f7:	89 50 04             	mov    %edx,0x4(%eax)
 84486fa:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 84486ff:	8d 55 d0             	lea    -0x30(%ebp),%edx
 8448702:	89 54 24 08          	mov    %edx,0x8(%esp)
 8448706:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 844870d:	00 
 844870e:	89 04 24             	mov    %eax,(%esp)
 8448711:	e8 c8 88 12 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8448716:	bb 01 00 00 00       	mov    $0x1,%ebx
 844871b:	8d 45 d0             	lea    -0x30(%ebp),%eax
 844871e:	89 04 24             	mov    %eax,(%esp)
 8448721:	e8 ac 41 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8448726:	eb 1b                	jmp    8448743 <_ZN18DB_AuctionSubMoney8dispatchEiiP6Stream+0x213>
 8448728:	89 d3                	mov    %edx,%ebx
 844872a:	89 c6                	mov    %eax,%esi
 844872c:	8d 45 d0             	lea    -0x30(%ebp),%eax
 844872f:	89 04 24             	mov    %eax,(%esp)
 8448732:	e8 9b 41 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8448737:	89 f0                	mov    %esi,%eax
 8448739:	89 da                	mov    %ebx,%edx
 844873b:	89 04 24             	mov    %eax,(%esp)
 844873e:	e8 0d b0 69 00       	call   8ae3750 <_Unwind_Resume>
 8448743:	89 d8                	mov    %ebx,%eax
 8448745:	83 c4 7c             	add    $0x7c,%esp
 8448748:	5b                   	pop    %ebx
 8448749:	5e                   	pop    %esi
 844874a:	5f                   	pop    %edi
 844874b:	5d                   	pop    %ebp
 844874c:	c3                   	ret
 844874d:	90                   	nop

```

```c
// DB_AuctionSubMoney::dispatch @ 0x8448530

/* DB_AuctionSubMoney::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_AuctionSubMoney::dispatch(DB_AuctionSubMoney *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  undefined4 uVar7;
  bool bVar8;
  byte bVar9;
  char local_6f;
  char local_6e [58];
  CStreamGuard local_34 [8];
  uint local_2c;
  SIG_AUCTION_MONEY_SUB *local_28;
  MySQL *local_24;
  SIG_AUCTION_MONEY_SUB *local_20;
  
  bVar9 = 0;
  local_28 = Stream::GetOutBuffer<SIG_AUCTION_MONEY_SUB>(param_3);
  local_2c = 0;
  local_24 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  pcVar5 = &local_6f;
  uVar6 = 0x3b;
  bVar8 = ((uint)pcVar5 & 1) != 0;
  if (bVar8) {
    local_6f = '\0';
    pcVar5 = local_6e;
    uVar6 = 0x3a;
  }
  if (((uint)pcVar5 & 2) != 0) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5 = pcVar5 + 2;
    uVar6 = uVar6 - 2;
  }
  for (uVar4 = uVar6 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5[2] = '\0';
    pcVar5[3] = '\0';
    pcVar5 = pcVar5 + ((uint)bVar9 * -2 + 1) * 4;
  }
  if ((uVar6 & 2) != 0) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5 = pcVar5 + 2;
  }
  if (!bVar8) {
    *pcVar5 = '\0';
  }
  MySQL::escape_string(local_24,&local_6f,(char *)(local_28 + 8));
  MySQL::set_query(local_24,"seLect m_id from charac_info where charac_name=\'%s\' limit 1",
                   &local_6f);
  cVar1 = MySQL::exec(local_24,true);
  if (cVar1 == '\x01') {
    cVar1 = MySQL::fetch(local_24);
    if (cVar1 == '\x01') {
      cVar1 = MySQL::get_int(local_24,0,&local_2c);
      if (cVar1 == '\x01') {
        pSVar2 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xb551);
        CStreamGuard::CStreamGuard(local_34,pSVar2,true);
        pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_34);
                    /* try { // try from 084486b1 to 08448715 has its CatchHandler @ 08448728 */
        CStreamGuard::operator<<(pCVar3,0x309);
        pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_34);
        CStreamGuard::operator<<(pCVar3,param_2);
        pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_34);
        local_20 = CStreamGuard::GetInBuffer<SIG_AUCTION_MONEY_SUB>(pCVar3);
        *(uint *)local_20 = local_2c;
        *(undefined4 *)(local_20 + 4) = *(undefined4 *)(local_28 + 4);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_34);
        uVar7 = 1;
        CStreamGuard::~CStreamGuard(local_34);
      }
      else {
        uVar7 = 0;
      }
    }
    else {
      uVar7 = 0;
    }
  }
  else {
    uVar7 = 0;
  }
  return uVar7;
}

```

