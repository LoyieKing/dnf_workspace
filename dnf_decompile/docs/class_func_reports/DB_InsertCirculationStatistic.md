# DB_InsertCirculationStatistic

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 084327ba DB_InsertCirculationStatistic::dispatch  [0x084327ba-0x8432ad1] ===
 84327ba:	55                   	push   %ebp
 84327bb:	89 e5                	mov    %esp,%ebp
 84327bd:	57                   	push   %edi
 84327be:	56                   	push   %esi
 84327bf:	53                   	push   %ebx
 84327c0:	81 ec 3c 01 00 00    	sub    $0x13c,%esp
 84327c6:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 84327cb:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84327d2:	00 
 84327d3:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 84327da:	00 
 84327db:	89 04 24             	mov    %eax,(%esp)
 84327de:	e8 5b 2a fc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 84327e3:	89 45 e0             	mov    %eax,-0x20(%ebp)
 84327e6:	8b 45 14             	mov    0x14(%ebp),%eax
 84327e9:	89 04 24             	mov    %eax,(%esp)
 84327ec:	e8 03 08 02 00       	call   8452ff4 <_ZN6Stream12GetOutBufferI25SIG_CIRCULATION_STATISTICEEPT_v>
 84327f1:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84327f4:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84327f7:	8b 80 a8 00 00 00    	mov    0xa8(%eax),%eax
 84327fd:	89 85 58 ff ff ff    	mov    %eax,-0xa8(%ebp)
 8432803:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8432806:	8b 80 a4 00 00 00    	mov    0xa4(%eax),%eax
 843280c:	89 85 5c ff ff ff    	mov    %eax,-0xa4(%ebp)
 8432812:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8432815:	8b 80 98 00 00 00    	mov    0x98(%eax),%eax
 843281b:	89 85 60 ff ff ff    	mov    %eax,-0xa0(%ebp)
 8432821:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8432824:	8b 80 94 00 00 00    	mov    0x94(%eax),%eax
 843282a:	89 85 64 ff ff ff    	mov    %eax,-0x9c(%ebp)
 8432830:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8432833:	8b 80 a0 00 00 00    	mov    0xa0(%eax),%eax
 8432839:	89 85 68 ff ff ff    	mov    %eax,-0x98(%ebp)
 843283f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8432842:	8b 80 9c 00 00 00    	mov    0x9c(%eax),%eax
 8432848:	89 85 6c ff ff ff    	mov    %eax,-0x94(%ebp)
 843284e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8432851:	8b 80 8c 00 00 00    	mov    0x8c(%eax),%eax
 8432857:	89 85 70 ff ff ff    	mov    %eax,-0x90(%ebp)
 843285d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8432860:	8b 80 88 00 00 00    	mov    0x88(%eax),%eax
 8432866:	89 85 74 ff ff ff    	mov    %eax,-0x8c(%ebp)
 843286c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 843286f:	8b 80 84 00 00 00    	mov    0x84(%eax),%eax
 8432875:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
 843287b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 843287e:	8b 80 80 00 00 00    	mov    0x80(%eax),%eax
 8432884:	89 85 7c ff ff ff    	mov    %eax,-0x84(%ebp)
 843288a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 843288d:	8b 40 7c             	mov    0x7c(%eax),%eax
 8432890:	89 45 80             	mov    %eax,-0x80(%ebp)
 8432893:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8432896:	8b 40 78             	mov    0x78(%eax),%eax
 8432899:	89 45 84             	mov    %eax,-0x7c(%ebp)
 843289c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 843289f:	8b 40 74             	mov    0x74(%eax),%eax
 84328a2:	89 45 88             	mov    %eax,-0x78(%ebp)
 84328a5:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84328a8:	8b 40 70             	mov    0x70(%eax),%eax
 84328ab:	89 45 8c             	mov    %eax,-0x74(%ebp)
 84328ae:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84328b1:	8b 40 6c             	mov    0x6c(%eax),%eax
 84328b4:	89 45 90             	mov    %eax,-0x70(%ebp)
 84328b7:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84328ba:	8b 40 68             	mov    0x68(%eax),%eax
 84328bd:	89 45 94             	mov    %eax,-0x6c(%ebp)
 84328c0:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84328c3:	8b 40 60             	mov    0x60(%eax),%eax
 84328c6:	89 45 98             	mov    %eax,-0x68(%ebp)
 84328c9:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84328cc:	8b 40 5c             	mov    0x5c(%eax),%eax
 84328cf:	89 45 9c             	mov    %eax,-0x64(%ebp)
 84328d2:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84328d5:	8b 40 58             	mov    0x58(%eax),%eax
 84328d8:	89 45 a0             	mov    %eax,-0x60(%ebp)
 84328db:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84328de:	8b 40 54             	mov    0x54(%eax),%eax
 84328e1:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 84328e4:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84328e7:	8b 40 50             	mov    0x50(%eax),%eax
 84328ea:	89 45 a8             	mov    %eax,-0x58(%ebp)
 84328ed:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84328f0:	8b 40 44             	mov    0x44(%eax),%eax
 84328f3:	89 45 ac             	mov    %eax,-0x54(%ebp)
 84328f6:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84328f9:	8b 40 40             	mov    0x40(%eax),%eax
 84328fc:	89 45 b0             	mov    %eax,-0x50(%ebp)
 84328ff:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8432902:	8b 40 3c             	mov    0x3c(%eax),%eax
 8432905:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 8432908:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 843290b:	8b 40 34             	mov    0x34(%eax),%eax
 843290e:	89 45 b8             	mov    %eax,-0x48(%ebp)
 8432911:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8432914:	8b 40 24             	mov    0x24(%eax),%eax
 8432917:	89 45 bc             	mov    %eax,-0x44(%ebp)
 843291a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 843291d:	8b 40 20             	mov    0x20(%eax),%eax
 8432920:	89 45 c0             	mov    %eax,-0x40(%ebp)
 8432923:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8432926:	8b 40 1c             	mov    0x1c(%eax),%eax
 8432929:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 843292c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 843292f:	8b 40 18             	mov    0x18(%eax),%eax
 8432932:	89 45 c8             	mov    %eax,-0x38(%ebp)
 8432935:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8432938:	8b 40 14             	mov    0x14(%eax),%eax
 843293b:	89 45 cc             	mov    %eax,-0x34(%ebp)
 843293e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8432941:	8b 40 10             	mov    0x10(%eax),%eax
 8432944:	89 45 d0             	mov    %eax,-0x30(%ebp)
 8432947:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 843294a:	8b 40 0c             	mov    0xc(%eax),%eax
 843294d:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8432950:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8432953:	8b 78 08             	mov    0x8(%eax),%edi
 8432956:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8432959:	8b 70 04             	mov    0x4(%eax),%esi
 843295c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 843295f:	8b 18                	mov    (%eax),%ebx
 8432961:	e8 1b 98 c9 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 8432966:	89 04 24             	mov    %eax,(%esp)
 8432969:	e8 5c 81 d1 ff       	call   814aaca <_ZN12CEnvironment14get_channel_noEv>
 843296e:	8b 95 58 ff ff ff    	mov    -0xa8(%ebp),%edx
 8432974:	89 94 24 94 00 00 00 	mov    %edx,0x94(%esp)
 843297b:	8b 95 5c ff ff ff    	mov    -0xa4(%ebp),%edx
 8432981:	89 94 24 90 00 00 00 	mov    %edx,0x90(%esp)
 8432988:	8b 95 60 ff ff ff    	mov    -0xa0(%ebp),%edx
 843298e:	89 94 24 8c 00 00 00 	mov    %edx,0x8c(%esp)
 8432995:	8b 95 64 ff ff ff    	mov    -0x9c(%ebp),%edx
 843299b:	89 94 24 88 00 00 00 	mov    %edx,0x88(%esp)
 84329a2:	8b 95 68 ff ff ff    	mov    -0x98(%ebp),%edx
 84329a8:	89 94 24 84 00 00 00 	mov    %edx,0x84(%esp)
 84329af:	8b 95 6c ff ff ff    	mov    -0x94(%ebp),%edx
 84329b5:	89 94 24 80 00 00 00 	mov    %edx,0x80(%esp)
 84329bc:	8b 95 70 ff ff ff    	mov    -0x90(%ebp),%edx
 84329c2:	89 54 24 7c          	mov    %edx,0x7c(%esp)
 84329c6:	8b 95 74 ff ff ff    	mov    -0x8c(%ebp),%edx
 84329cc:	89 54 24 78          	mov    %edx,0x78(%esp)
 84329d0:	8b 95 78 ff ff ff    	mov    -0x88(%ebp),%edx
 84329d6:	89 54 24 74          	mov    %edx,0x74(%esp)
 84329da:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
 84329e0:	89 54 24 70          	mov    %edx,0x70(%esp)
 84329e4:	8b 55 80             	mov    -0x80(%ebp),%edx
 84329e7:	89 54 24 6c          	mov    %edx,0x6c(%esp)
 84329eb:	8b 55 84             	mov    -0x7c(%ebp),%edx
 84329ee:	89 54 24 68          	mov    %edx,0x68(%esp)
 84329f2:	8b 55 88             	mov    -0x78(%ebp),%edx
 84329f5:	89 54 24 64          	mov    %edx,0x64(%esp)
 84329f9:	8b 55 8c             	mov    -0x74(%ebp),%edx
 84329fc:	89 54 24 60          	mov    %edx,0x60(%esp)
 8432a00:	8b 55 90             	mov    -0x70(%ebp),%edx
 8432a03:	89 54 24 5c          	mov    %edx,0x5c(%esp)
 8432a07:	8b 55 94             	mov    -0x6c(%ebp),%edx
 8432a0a:	89 54 24 58          	mov    %edx,0x58(%esp)
 8432a0e:	8b 55 98             	mov    -0x68(%ebp),%edx
 8432a11:	89 54 24 54          	mov    %edx,0x54(%esp)
 8432a15:	8b 55 9c             	mov    -0x64(%ebp),%edx
 8432a18:	89 54 24 50          	mov    %edx,0x50(%esp)
 8432a1c:	8b 55 a0             	mov    -0x60(%ebp),%edx
 8432a1f:	89 54 24 4c          	mov    %edx,0x4c(%esp)
 8432a23:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 8432a26:	89 54 24 48          	mov    %edx,0x48(%esp)
 8432a2a:	8b 55 a8             	mov    -0x58(%ebp),%edx
 8432a2d:	89 54 24 44          	mov    %edx,0x44(%esp)
 8432a31:	8b 55 ac             	mov    -0x54(%ebp),%edx
 8432a34:	89 54 24 40          	mov    %edx,0x40(%esp)
 8432a38:	8b 55 b0             	mov    -0x50(%ebp),%edx
 8432a3b:	89 54 24 3c          	mov    %edx,0x3c(%esp)
 8432a3f:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 8432a42:	89 54 24 38          	mov    %edx,0x38(%esp)
 8432a46:	8b 55 b8             	mov    -0x48(%ebp),%edx
 8432a49:	89 54 24 34          	mov    %edx,0x34(%esp)
 8432a4d:	8b 55 bc             	mov    -0x44(%ebp),%edx
 8432a50:	89 54 24 30          	mov    %edx,0x30(%esp)
 8432a54:	8b 55 c0             	mov    -0x40(%ebp),%edx
 8432a57:	89 54 24 2c          	mov    %edx,0x2c(%esp)
 8432a5b:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 8432a5e:	89 54 24 28          	mov    %edx,0x28(%esp)
 8432a62:	8b 55 c8             	mov    -0x38(%ebp),%edx
 8432a65:	89 54 24 24          	mov    %edx,0x24(%esp)
 8432a69:	8b 55 cc             	mov    -0x34(%ebp),%edx
 8432a6c:	89 54 24 20          	mov    %edx,0x20(%esp)
 8432a70:	8b 55 d0             	mov    -0x30(%ebp),%edx
 8432a73:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 8432a77:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 8432a7a:	89 54 24 18          	mov    %edx,0x18(%esp)
 8432a7e:	89 7c 24 14          	mov    %edi,0x14(%esp)
 8432a82:	89 74 24 10          	mov    %esi,0x10(%esp)
 8432a86:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8432a8a:	89 44 24 08          	mov    %eax,0x8(%esp)
 8432a8e:	c7 44 24 04 60 23 c5 	movl   $0x8c52360,0x4(%esp)
 8432a95:	08 
 8432a96:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8432a99:	89 04 24             	mov    %eax,(%esp)
 8432a9c:	e8 1f 17 fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8432aa1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8432aa8:	00 
 8432aa9:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8432aac:	89 04 24             	mov    %eax,(%esp)
 8432aaf:	e8 72 18 fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 8432ab4:	83 f0 01             	xor    $0x1,%eax
 8432ab7:	84 c0                	test   %al,%al
 8432ab9:	74 07                	je     8432ac2 <_ZN29DB_InsertCirculationStatistic8dispatchEiiP6Stream+0x308>
 8432abb:	b8 00 00 00 00       	mov    $0x0,%eax
 8432ac0:	eb 05                	jmp    8432ac7 <_ZN29DB_InsertCirculationStatistic8dispatchEiiP6Stream+0x30d>
 8432ac2:	b8 01 00 00 00       	mov    $0x1,%eax
 8432ac7:	81 c4 3c 01 00 00    	add    $0x13c,%esp
 8432acd:	5b                   	pop    %ebx
 8432ace:	5e                   	pop    %esi
 8432acf:	5f                   	pop    %edi
 8432ad0:	5d                   	pop    %ebp
 8432ad1:	c3                   	ret

```

```c
// DB_InsertCirculationStatistic::dispatch @ 0x84327ba

/* DB_InsertCirculationStatistic::dispatch(int, int, Stream*) */

bool DB_InsertCirculationStatistic::dispatch(int param_1,int param_2,Stream *param_3)

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
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  char cVar36;
  MySQL *this;
  SIG_CIRCULATION_STATISTIC *pSVar37;
  CEnvironment *this_00;
  undefined4 uVar38;
  Stream *in_stack_00000010;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  pSVar37 = Stream::GetOutBuffer<SIG_CIRCULATION_STATISTIC>(in_stack_00000010);
  uVar1 = *(undefined4 *)(pSVar37 + 0xa8);
  uVar2 = *(undefined4 *)(pSVar37 + 0xa4);
  uVar3 = *(undefined4 *)(pSVar37 + 0x98);
  uVar4 = *(undefined4 *)(pSVar37 + 0x94);
  uVar5 = *(undefined4 *)(pSVar37 + 0xa0);
  uVar6 = *(undefined4 *)(pSVar37 + 0x9c);
  uVar7 = *(undefined4 *)(pSVar37 + 0x8c);
  uVar8 = *(undefined4 *)(pSVar37 + 0x88);
  uVar9 = *(undefined4 *)(pSVar37 + 0x84);
  uVar10 = *(undefined4 *)(pSVar37 + 0x80);
  uVar11 = *(undefined4 *)(pSVar37 + 0x7c);
  uVar12 = *(undefined4 *)(pSVar37 + 0x78);
  uVar13 = *(undefined4 *)(pSVar37 + 0x74);
  uVar14 = *(undefined4 *)(pSVar37 + 0x70);
  uVar15 = *(undefined4 *)(pSVar37 + 0x6c);
  uVar16 = *(undefined4 *)(pSVar37 + 0x68);
  uVar17 = *(undefined4 *)(pSVar37 + 0x60);
  uVar18 = *(undefined4 *)(pSVar37 + 0x5c);
  uVar19 = *(undefined4 *)(pSVar37 + 0x58);
  uVar20 = *(undefined4 *)(pSVar37 + 0x54);
  uVar21 = *(undefined4 *)(pSVar37 + 0x50);
  uVar22 = *(undefined4 *)(pSVar37 + 0x44);
  uVar23 = *(undefined4 *)(pSVar37 + 0x40);
  uVar24 = *(undefined4 *)(pSVar37 + 0x3c);
  uVar25 = *(undefined4 *)(pSVar37 + 0x34);
  uVar26 = *(undefined4 *)(pSVar37 + 0x24);
  uVar27 = *(undefined4 *)(pSVar37 + 0x20);
  uVar28 = *(undefined4 *)(pSVar37 + 0x1c);
  uVar29 = *(undefined4 *)(pSVar37 + 0x18);
  uVar30 = *(undefined4 *)(pSVar37 + 0x14);
  uVar31 = *(undefined4 *)(pSVar37 + 0x10);
  uVar32 = *(undefined4 *)(pSVar37 + 0xc);
  uVar33 = *(undefined4 *)(pSVar37 + 8);
  uVar34 = *(undefined4 *)(pSVar37 + 4);
  uVar35 = *(undefined4 *)pSVar37;
  this_00 = (CEnvironment *)G_CEnvironment();
  uVar38 = CEnvironment::get_channel_no(this_00);
  MySQL::set_query(this,
                   "inSert into log_gold_stat(channel_no,occ_time ,level,dungeon_drop,result_card,sell_store,quest_reward,death_tower_reward,illusion_tower_reward,war_area_drop,member_tax,blood_dungeon_reward,blood_dungeon_lotto,power_dungeon_drop,power_dungeon_result_card,buy_store,stamina_recovery,repair_item,private_store_commission,gold_card,gold_drop,upgrade,quest_use,mail_commission,punish_user,restrict_trade,guild_level_up,guild_skill,guild_mail,item_compound,blood_dungeon_enter,buy_cerashop,war_area_enter,assault_gold,upgrade_guild_agit,upgrade_guild_cargo) values(%d,from_unixtime(%d),%d,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u)"
                   ,uVar38,uVar35,uVar34,uVar33,uVar32,uVar31,uVar30,uVar29,uVar28,uVar27,uVar26,
                   uVar25,uVar24,uVar23,uVar22,uVar21,uVar20,uVar19,uVar18,uVar17,uVar16,uVar15,
                   uVar14,uVar13,uVar12,uVar11,uVar10,uVar9,uVar8,uVar7,uVar6,uVar5,uVar4,uVar3,
                   uVar2,uVar1);
  cVar36 = MySQL::exec(this,true);
  return cVar36 == '\x01';
}

```

