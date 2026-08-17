# DB_InsertValueStatistic

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 0842945e DB_InsertValueStatistic::dispatch  [0x0842945e-0x8429695] ===
 842945e:	55                   	push   %ebp
 842945f:	89 e5                	mov    %esp,%ebp
 8429461:	57                   	push   %edi
 8429462:	56                   	push   %esi
 8429463:	53                   	push   %ebx
 8429464:	81 ec fc 00 00 00    	sub    $0xfc,%esp
 842946a:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 842946f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8429476:	00 
 8429477:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 842947e:	00 
 842947f:	89 04 24             	mov    %eax,(%esp)
 8429482:	e8 b7 bd fc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8429487:	89 45 e0             	mov    %eax,-0x20(%ebp)
 842948a:	8b 45 14             	mov    0x14(%ebp),%eax
 842948d:	89 04 24             	mov    %eax,(%esp)
 8429490:	e8 23 8f 02 00       	call   84523b8 <_ZN6Stream12GetOutBufferI19SIG_VALUE_STATISTICEEPT_v>
 8429495:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8429498:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 842949b:	8b 40 68             	mov    0x68(%eax),%eax
 842949e:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
 84294a4:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84294a7:	8b 40 64             	mov    0x64(%eax),%eax
 84294aa:	89 85 7c ff ff ff    	mov    %eax,-0x84(%ebp)
 84294b0:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84294b3:	8b 40 60             	mov    0x60(%eax),%eax
 84294b6:	89 45 80             	mov    %eax,-0x80(%ebp)
 84294b9:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84294bc:	8b 40 5c             	mov    0x5c(%eax),%eax
 84294bf:	89 45 84             	mov    %eax,-0x7c(%ebp)
 84294c2:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84294c5:	8b 40 58             	mov    0x58(%eax),%eax
 84294c8:	89 45 88             	mov    %eax,-0x78(%ebp)
 84294cb:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84294ce:	8b 40 54             	mov    0x54(%eax),%eax
 84294d1:	89 45 8c             	mov    %eax,-0x74(%ebp)
 84294d4:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84294d7:	8b 40 50             	mov    0x50(%eax),%eax
 84294da:	89 45 90             	mov    %eax,-0x70(%ebp)
 84294dd:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84294e0:	8b 40 4c             	mov    0x4c(%eax),%eax
 84294e3:	89 45 94             	mov    %eax,-0x6c(%ebp)
 84294e6:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84294e9:	8b 40 48             	mov    0x48(%eax),%eax
 84294ec:	89 45 98             	mov    %eax,-0x68(%ebp)
 84294ef:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84294f2:	8b 40 44             	mov    0x44(%eax),%eax
 84294f5:	89 45 9c             	mov    %eax,-0x64(%ebp)
 84294f8:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84294fb:	8b 40 40             	mov    0x40(%eax),%eax
 84294fe:	89 45 a0             	mov    %eax,-0x60(%ebp)
 8429501:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8429504:	8b 40 3c             	mov    0x3c(%eax),%eax
 8429507:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 842950a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 842950d:	8b 40 38             	mov    0x38(%eax),%eax
 8429510:	89 45 a8             	mov    %eax,-0x58(%ebp)
 8429513:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8429516:	8b 40 34             	mov    0x34(%eax),%eax
 8429519:	89 45 ac             	mov    %eax,-0x54(%ebp)
 842951c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 842951f:	8b 40 30             	mov    0x30(%eax),%eax
 8429522:	89 45 b0             	mov    %eax,-0x50(%ebp)
 8429525:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8429528:	8b 40 2c             	mov    0x2c(%eax),%eax
 842952b:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 842952e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8429531:	8b 40 28             	mov    0x28(%eax),%eax
 8429534:	89 45 b8             	mov    %eax,-0x48(%ebp)
 8429537:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 842953a:	8b 40 24             	mov    0x24(%eax),%eax
 842953d:	89 45 bc             	mov    %eax,-0x44(%ebp)
 8429540:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8429543:	8b 40 20             	mov    0x20(%eax),%eax
 8429546:	89 45 c0             	mov    %eax,-0x40(%ebp)
 8429549:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 842954c:	8b 40 1c             	mov    0x1c(%eax),%eax
 842954f:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 8429552:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8429555:	8b 40 18             	mov    0x18(%eax),%eax
 8429558:	89 45 c8             	mov    %eax,-0x38(%ebp)
 842955b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 842955e:	8b 40 14             	mov    0x14(%eax),%eax
 8429561:	89 45 cc             	mov    %eax,-0x34(%ebp)
 8429564:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8429567:	8b 40 10             	mov    0x10(%eax),%eax
 842956a:	89 45 d0             	mov    %eax,-0x30(%ebp)
 842956d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8429570:	8b 40 0c             	mov    0xc(%eax),%eax
 8429573:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8429576:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8429579:	8b 78 08             	mov    0x8(%eax),%edi
 842957c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 842957f:	8b 70 04             	mov    0x4(%eax),%esi
 8429582:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8429585:	8b 18                	mov    (%eax),%ebx
 8429587:	e8 f5 2b ca ff       	call   80cc181 <_Z14G_CEnvironmentv>
 842958c:	89 04 24             	mov    %eax,(%esp)
 842958f:	e8 36 15 d2 ff       	call   814aaca <_ZN12CEnvironment14get_channel_noEv>
 8429594:	8b 95 78 ff ff ff    	mov    -0x88(%ebp),%edx
 842959a:	89 54 24 74          	mov    %edx,0x74(%esp)
 842959e:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
 84295a4:	89 54 24 70          	mov    %edx,0x70(%esp)
 84295a8:	8b 55 80             	mov    -0x80(%ebp),%edx
 84295ab:	89 54 24 6c          	mov    %edx,0x6c(%esp)
 84295af:	8b 55 84             	mov    -0x7c(%ebp),%edx
 84295b2:	89 54 24 68          	mov    %edx,0x68(%esp)
 84295b6:	8b 55 88             	mov    -0x78(%ebp),%edx
 84295b9:	89 54 24 64          	mov    %edx,0x64(%esp)
 84295bd:	8b 55 8c             	mov    -0x74(%ebp),%edx
 84295c0:	89 54 24 60          	mov    %edx,0x60(%esp)
 84295c4:	8b 55 90             	mov    -0x70(%ebp),%edx
 84295c7:	89 54 24 5c          	mov    %edx,0x5c(%esp)
 84295cb:	8b 55 94             	mov    -0x6c(%ebp),%edx
 84295ce:	89 54 24 58          	mov    %edx,0x58(%esp)
 84295d2:	8b 55 98             	mov    -0x68(%ebp),%edx
 84295d5:	89 54 24 54          	mov    %edx,0x54(%esp)
 84295d9:	8b 55 9c             	mov    -0x64(%ebp),%edx
 84295dc:	89 54 24 50          	mov    %edx,0x50(%esp)
 84295e0:	8b 55 a0             	mov    -0x60(%ebp),%edx
 84295e3:	89 54 24 4c          	mov    %edx,0x4c(%esp)
 84295e7:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 84295ea:	89 54 24 48          	mov    %edx,0x48(%esp)
 84295ee:	8b 55 a8             	mov    -0x58(%ebp),%edx
 84295f1:	89 54 24 44          	mov    %edx,0x44(%esp)
 84295f5:	8b 55 ac             	mov    -0x54(%ebp),%edx
 84295f8:	89 54 24 40          	mov    %edx,0x40(%esp)
 84295fc:	8b 55 b0             	mov    -0x50(%ebp),%edx
 84295ff:	89 54 24 3c          	mov    %edx,0x3c(%esp)
 8429603:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 8429606:	89 54 24 38          	mov    %edx,0x38(%esp)
 842960a:	8b 55 b8             	mov    -0x48(%ebp),%edx
 842960d:	89 54 24 34          	mov    %edx,0x34(%esp)
 8429611:	8b 55 bc             	mov    -0x44(%ebp),%edx
 8429614:	89 54 24 30          	mov    %edx,0x30(%esp)
 8429618:	8b 55 c0             	mov    -0x40(%ebp),%edx
 842961b:	89 54 24 2c          	mov    %edx,0x2c(%esp)
 842961f:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 8429622:	89 54 24 28          	mov    %edx,0x28(%esp)
 8429626:	8b 55 c8             	mov    -0x38(%ebp),%edx
 8429629:	89 54 24 24          	mov    %edx,0x24(%esp)
 842962d:	8b 55 cc             	mov    -0x34(%ebp),%edx
 8429630:	89 54 24 20          	mov    %edx,0x20(%esp)
 8429634:	8b 55 d0             	mov    -0x30(%ebp),%edx
 8429637:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 842963b:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 842963e:	89 54 24 18          	mov    %edx,0x18(%esp)
 8429642:	89 7c 24 14          	mov    %edi,0x14(%esp)
 8429646:	89 74 24 10          	mov    %esi,0x10(%esp)
 842964a:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 842964e:	89 44 24 08          	mov    %eax,0x8(%esp)
 8429652:	c7 44 24 04 b8 f3 c4 	movl   $0x8c4f3b8,0x4(%esp)
 8429659:	08 
 842965a:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842965d:	89 04 24             	mov    %eax,(%esp)
 8429660:	e8 5b ab fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8429665:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842966c:	00 
 842966d:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8429670:	89 04 24             	mov    %eax,(%esp)
 8429673:	e8 ae ac fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 8429678:	83 f0 01             	xor    $0x1,%eax
 842967b:	84 c0                	test   %al,%al
 842967d:	74 07                	je     8429686 <_ZN23DB_InsertValueStatistic8dispatchEiiP6Stream+0x228>
 842967f:	b8 00 00 00 00       	mov    $0x0,%eax
 8429684:	eb 05                	jmp    842968b <_ZN23DB_InsertValueStatistic8dispatchEiiP6Stream+0x22d>
 8429686:	b8 01 00 00 00       	mov    $0x1,%eax
 842968b:	81 c4 fc 00 00 00    	add    $0xfc,%esp
 8429691:	5b                   	pop    %ebx
 8429692:	5e                   	pop    %esi
 8429693:	5f                   	pop    %edi
 8429694:	5d                   	pop    %ebp
 8429695:	c3                   	ret

```

```c
// DB_InsertValueStatistic::dispatch @ 0x842945e

/* DB_InsertValueStatistic::dispatch(int, int, Stream*) */

bool DB_InsertValueStatistic::dispatch(int param_1,int param_2,Stream *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  char cVar28;
  MySQL *this;
  SIG_VALUE_STATISTIC *pSVar29;
  CEnvironment *this_00;
  undefined4 uVar30;
  Stream *in_stack_00000010;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  pSVar29 = Stream::GetOutBuffer<SIG_VALUE_STATISTIC>(in_stack_00000010);
  uVar1 = *(undefined4 *)(pSVar29 + 0x68);
  uVar2 = *(undefined4 *)(pSVar29 + 100);
  uVar3 = *(undefined4 *)(pSVar29 + 0x60);
  uVar4 = *(undefined4 *)(pSVar29 + 0x5c);
  uVar5 = *(undefined4 *)(pSVar29 + 0x58);
  uVar6 = *(undefined4 *)(pSVar29 + 0x54);
  uVar7 = *(undefined4 *)(pSVar29 + 0x50);
  uVar8 = *(undefined4 *)(pSVar29 + 0x4c);
  uVar9 = *(undefined4 *)(pSVar29 + 0x48);
  uVar10 = *(undefined4 *)(pSVar29 + 0x44);
  uVar11 = *(undefined4 *)(pSVar29 + 0x40);
  uVar12 = *(undefined4 *)(pSVar29 + 0x3c);
  uVar13 = *(undefined4 *)(pSVar29 + 0x38);
  uVar14 = *(undefined4 *)(pSVar29 + 0x34);
  uVar15 = *(undefined4 *)(pSVar29 + 0x30);
  uVar16 = *(undefined4 *)(pSVar29 + 0x2c);
  uVar17 = *(undefined4 *)(pSVar29 + 0x28);
  uVar18 = *(undefined4 *)(pSVar29 + 0x24);
  uVar19 = *(undefined4 *)(pSVar29 + 0x20);
  uVar20 = *(undefined4 *)(pSVar29 + 0x1c);
  uVar21 = *(undefined4 *)(pSVar29 + 0x18);
  uVar22 = *(undefined4 *)(pSVar29 + 0x14);
  uVar23 = *(undefined4 *)(pSVar29 + 0x10);
  uVar24 = *(undefined4 *)(pSVar29 + 0xc);
  uVar25 = *(undefined4 *)(pSVar29 + 8);
  uVar26 = *(undefined4 *)(pSVar29 + 4);
  uVar27 = *(undefined4 *)pSVar29;
  this_00 = (CEnvironment *)G_CEnvironment();
  uVar30 = CEnvironment::get_channel_no(this_00);
  MySQL::set_query(this,
                   "inSert into log_value_stat(channel_no,occ_time ,level,uv,drop_gold,drop_item,result_card_gold,result_card_item,gold_card_item,store_item_buy,jar_item,disjoint_create,upgrade_faild_forced_disjoint,quest_reward,deathtower_card_gold,deathtower_card_item,consume_store_item_buy,consume_upgrade_attempt,consume_upgrade_faild,consume_stamina_recovery,consume_quest_consume,consume_auction_commision,consume_item_disjoint,consume_item_repair,consume_item_use,consume_item_drop,consume_gold_drop,consume_gold_card_price) values(%d,from_unixtime(%d),%d,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u)"
                   ,uVar30,uVar27,uVar26,uVar25,uVar24,uVar23,uVar22,uVar21,uVar20,uVar19,uVar18,
                   uVar17,uVar16,uVar15,uVar14,uVar13,uVar12,uVar11,uVar10,uVar9,uVar8,uVar7,uVar6,
                   uVar5,uVar4,uVar3,uVar2,uVar1);
  cVar28 = MySQL::exec(this,true);
  return cVar28 == '\x01';
}

```

