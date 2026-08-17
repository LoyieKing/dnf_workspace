# CLocalGlobal_DB_STATICS_BOSSTOWER

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 0812825e CLocalGlobal_DB_STATICS_BOSSTOWER::dispatch  [0x0812825e-0x8128599] ===
 812825e:	55                   	push   %ebp
 812825f:	89 e5                	mov    %esp,%ebp
 8128261:	57                   	push   %edi
 8128262:	56                   	push   %esi
 8128263:	53                   	push   %ebx
 8128264:	81 ec dc 00 00 00    	sub    $0xdc,%esp
 812826a:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 812826f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8128276:	00 
 8128277:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 812827e:	00 
 812827f:	89 04 24             	mov    %eax,(%esp)
 8128282:	e8 b7 cf 2c 00       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8128287:	89 45 dc             	mov    %eax,-0x24(%ebp)
 812828a:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
 8128291:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8128294:	89 44 24 04          	mov    %eax,0x4(%esp)
 8128298:	8b 45 14             	mov    0x14(%ebp),%eax
 812829b:	89 04 24             	mov    %eax,(%esp)
 812829e:	e8 21 43 4f 00       	call   861c5c4 <_ZN6StreamrsERi>
 81282a3:	8b 45 c8             	mov    -0x38(%ebp),%eax
 81282a6:	85 c0                	test   %eax,%eax
 81282a8:	7f 0a                	jg     81282b4 <_ZN33CLocalGlobal_DB_STATICS_BOSSTOWER8dispatchEiiP6Stream+0x56>
 81282aa:	b8 00 00 00 00       	mov    $0x0,%eax
 81282af:	e9 da 02 00 00       	jmp    812858e <_ZN33CLocalGlobal_DB_STATICS_BOSSTOWER8dispatchEiiP6Stream+0x330>
 81282b4:	8d 45 8c             	lea    -0x74(%ebp),%eax
 81282b7:	89 04 24             	mov    %eax,(%esp)
 81282ba:	e8 01 9d 58 00       	call   86b1fc0 <_Z19__GetCurrentDNFDateR2tm>
 81282bf:	c7 44 24 08 0c 00 00 	movl   $0xc,0x8(%esp)
 81282c6:	00 
 81282c7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81282ce:	00 
 81282cf:	8d 45 bc             	lea    -0x44(%ebp),%eax
 81282d2:	89 04 24             	mov    %eax,(%esp)
 81282d5:	e8 e6 59 f5 ff       	call   807dcc0 <memset@plt>
 81282da:	8b 45 98             	mov    -0x68(%ebp),%eax
 81282dd:	8b 55 9c             	mov    -0x64(%ebp),%edx
 81282e0:	8d 4a 01             	lea    0x1(%edx),%ecx
 81282e3:	8b 55 a0             	mov    -0x60(%ebp),%edx
 81282e6:	81 c2 6c 07 00 00    	add    $0x76c,%edx
 81282ec:	89 44 24 10          	mov    %eax,0x10(%esp)
 81282f0:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 81282f4:	89 54 24 08          	mov    %edx,0x8(%esp)
 81282f8:	c7 44 24 04 80 2a b6 	movl   $0x8b62a80,0x4(%esp)
 81282ff:	08 
 8128300:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8128303:	89 04 24             	mov    %eax,(%esp)
 8128306:	e8 35 61 f5 ff       	call   807e440 <sprintf@plt>
 812830b:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8128312:	e9 61 02 00 00       	jmp    8128578 <_ZN33CLocalGlobal_DB_STATICS_BOSSTOWER8dispatchEiiP6Stream+0x31a>
 8128317:	8d 45 b8             	lea    -0x48(%ebp),%eax
 812831a:	89 44 24 04          	mov    %eax,0x4(%esp)
 812831e:	8b 45 14             	mov    0x14(%ebp),%eax
 8128321:	89 04 24             	mov    %eax,(%esp)
 8128324:	e8 6d 44 4f 00       	call   861c796 <_ZN6StreamrsERj>
 8128329:	8b 45 14             	mov    0x14(%ebp),%eax
 812832c:	89 04 24             	mov    %eax,(%esp)
 812832f:	e8 5e 07 00 00       	call   8128a92 <_ZN6Stream12GetOutBufferI21STBossDungeonTowerLogEEPT_v>
 8128334:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8128337:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 812833a:	8b 40 08             	mov    0x8(%eax),%eax
 812833d:	89 85 5c ff ff ff    	mov    %eax,-0xa4(%ebp)
 8128343:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8128346:	8b 40 0c             	mov    0xc(%eax),%eax
 8128349:	89 85 60 ff ff ff    	mov    %eax,-0xa0(%ebp)
 812834f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8128352:	8b 40 04             	mov    0x4(%eax),%eax
 8128355:	89 85 64 ff ff ff    	mov    %eax,-0x9c(%ebp)
 812835b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 812835e:	8b 00                	mov    (%eax),%eax
 8128360:	89 85 68 ff ff ff    	mov    %eax,-0x98(%ebp)
 8128366:	0f b6 45 b9          	movzbl -0x47(%ebp),%eax
 812836a:	0f b6 c0             	movzbl %al,%eax
 812836d:	89 85 6c ff ff ff    	mov    %eax,-0x94(%ebp)
 8128373:	0f b6 45 ba          	movzbl -0x46(%ebp),%eax
 8128377:	0f b6 c0             	movzbl %al,%eax
 812837a:	89 85 70 ff ff ff    	mov    %eax,-0x90(%ebp)
 8128380:	0f b6 45 bb          	movzbl -0x45(%ebp),%eax
 8128384:	83 e0 0f             	and    $0xf,%eax
 8128387:	0f b6 c0             	movzbl %al,%eax
 812838a:	89 85 74 ff ff ff    	mov    %eax,-0x8c(%ebp)
 8128390:	0f b6 45 bb          	movzbl -0x45(%ebp),%eax
 8128394:	c0 e8 04             	shr    $0x4,%al
 8128397:	0f b6 f8             	movzbl %al,%edi
 812839a:	0f b6 45 b8          	movzbl -0x48(%ebp),%eax
 812839e:	0f b6 f0             	movzbl %al,%esi
 81283a1:	8b 5d b8             	mov    -0x48(%ebp),%ebx
 81283a4:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 81283ab:	00 
 81283ac:	c7 44 24 08 f9 04 00 	movl   $0x4f9,0x8(%esp)
 81283b3:	00 
 81283b4:	c7 44 24 04 c0 3a b6 	movl   $0x8b63ac0,0x4(%esp)
 81283bb:	08 
 81283bc:	8d 45 cc             	lea    -0x34(%ebp),%eax
 81283bf:	89 04 24             	mov    %eax,(%esp)
 81283c2:	e8 51 73 42 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81283c7:	8b 85 5c ff ff ff    	mov    -0xa4(%ebp),%eax
 81283cd:	89 44 24 2c          	mov    %eax,0x2c(%esp)
 81283d1:	8b 85 60 ff ff ff    	mov    -0xa0(%ebp),%eax
 81283d7:	89 44 24 28          	mov    %eax,0x28(%esp)
 81283db:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 81283e1:	89 44 24 24          	mov    %eax,0x24(%esp)
 81283e5:	8b 85 68 ff ff ff    	mov    -0x98(%ebp),%eax
 81283eb:	89 44 24 20          	mov    %eax,0x20(%esp)
 81283ef:	8b 85 6c ff ff ff    	mov    -0x94(%ebp),%eax
 81283f5:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 81283f9:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 81283ff:	89 44 24 18          	mov    %eax,0x18(%esp)
 8128403:	8b 85 74 ff ff ff    	mov    -0x8c(%ebp),%eax
 8128409:	89 44 24 14          	mov    %eax,0x14(%esp)
 812840d:	89 7c 24 10          	mov    %edi,0x10(%esp)
 8128411:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8128415:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8128419:	c7 44 24 04 8f 2a b6 	movl   $0x8b62a8f,0x4(%esp)
 8128420:	08 
 8128421:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8128424:	89 04 24             	mov    %eax,(%esp)
 8128427:	e8 5c 73 42 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 812842c:	8b 75 b8             	mov    -0x48(%ebp),%esi
 812842f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8128432:	8b 58 08             	mov    0x8(%eax),%ebx
 8128435:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8128438:	8b 48 0c             	mov    0xc(%eax),%ecx
 812843b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 812843e:	8b 50 04             	mov    0x4(%eax),%edx
 8128441:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8128444:	8b 00                	mov    (%eax),%eax
 8128446:	89 74 24 1c          	mov    %esi,0x1c(%esp)
 812844a:	8d 75 bc             	lea    -0x44(%ebp),%esi
 812844d:	89 74 24 18          	mov    %esi,0x18(%esp)
 8128451:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 8128455:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8128459:	89 54 24 0c          	mov    %edx,0xc(%esp)
 812845d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8128461:	c7 44 24 04 b0 2a b6 	movl   $0x8b62ab0,0x4(%esp)
 8128468:	08 
 8128469:	8b 45 dc             	mov    -0x24(%ebp),%eax
 812846c:	89 04 24             	mov    %eax,(%esp)
 812846f:	e8 4c bd 2c 00       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8128474:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 812847b:	00 
 812847c:	8b 45 dc             	mov    -0x24(%ebp),%eax
 812847f:	89 04 24             	mov    %eax,(%esp)
 8128482:	e8 9f be 2c 00       	call   83f4326 <_ZN5MySQL4execEb>
 8128487:	83 f0 01             	xor    $0x1,%eax
 812848a:	84 c0                	test   %al,%al
 812848c:	75 11                	jne    812849f <_ZN33CLocalGlobal_DB_STATICS_BOSSTOWER8dispatchEiiP6Stream+0x241>
 812848e:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8128491:	89 04 24             	mov    %eax,(%esp)
 8128494:	e8 77 be 2c 00       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 8128499:	09 d0                	or     %edx,%eax
 812849b:	85 c0                	test   %eax,%eax
 812849d:	75 07                	jne    81284a6 <_ZN33CLocalGlobal_DB_STATICS_BOSSTOWER8dispatchEiiP6Stream+0x248>
 812849f:	b8 01 00 00 00       	mov    $0x1,%eax
 81284a4:	eb 05                	jmp    81284ab <_ZN33CLocalGlobal_DB_STATICS_BOSSTOWER8dispatchEiiP6Stream+0x24d>
 81284a6:	b8 00 00 00 00       	mov    $0x0,%eax
 81284ab:	84 c0                	test   %al,%al
 81284ad:	0f 84 c1 00 00 00    	je     8128574 <_ZN33CLocalGlobal_DB_STATICS_BOSSTOWER8dispatchEiiP6Stream+0x316>
 81284b3:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81284b6:	8b 58 08             	mov    0x8(%eax),%ebx
 81284b9:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81284bc:	8b 78 0c             	mov    0xc(%eax),%edi
 81284bf:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81284c2:	8b 40 04             	mov    0x4(%eax),%eax
 81284c5:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
 81284cb:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81284ce:	8b 00                	mov    (%eax),%eax
 81284d0:	89 85 7c ff ff ff    	mov    %eax,-0x84(%ebp)
 81284d6:	0f b6 45 b9          	movzbl -0x47(%ebp),%eax
 81284da:	0f b6 c0             	movzbl %al,%eax
 81284dd:	89 45 80             	mov    %eax,-0x80(%ebp)
 81284e0:	0f b6 45 ba          	movzbl -0x46(%ebp),%eax
 81284e4:	0f b6 c0             	movzbl %al,%eax
 81284e7:	89 45 84             	mov    %eax,-0x7c(%ebp)
 81284ea:	0f b6 45 bb          	movzbl -0x45(%ebp),%eax
 81284ee:	83 e0 0f             	and    $0xf,%eax
 81284f1:	0f b6 f0             	movzbl %al,%esi
 81284f4:	0f b6 45 bb          	movzbl -0x45(%ebp),%eax
 81284f8:	c0 e8 04             	shr    $0x4,%al
 81284fb:	0f b6 c8             	movzbl %al,%ecx
 81284fe:	0f b6 45 b8          	movzbl -0x48(%ebp),%eax
 8128502:	0f b6 d0             	movzbl %al,%edx
 8128505:	8b 45 b8             	mov    -0x48(%ebp),%eax
 8128508:	89 5c 24 30          	mov    %ebx,0x30(%esp)
 812850c:	89 7c 24 2c          	mov    %edi,0x2c(%esp)
 8128510:	8b 9d 78 ff ff ff    	mov    -0x88(%ebp),%ebx
 8128516:	89 5c 24 28          	mov    %ebx,0x28(%esp)
 812851a:	8b 9d 7c ff ff ff    	mov    -0x84(%ebp),%ebx
 8128520:	89 5c 24 24          	mov    %ebx,0x24(%esp)
 8128524:	8b 5d 80             	mov    -0x80(%ebp),%ebx
 8128527:	89 5c 24 20          	mov    %ebx,0x20(%esp)
 812852b:	8b 5d 84             	mov    -0x7c(%ebp),%ebx
 812852e:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 8128532:	89 74 24 18          	mov    %esi,0x18(%esp)
 8128536:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 812853a:	89 54 24 10          	mov    %edx,0x10(%esp)
 812853e:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8128542:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8128545:	89 44 24 08          	mov    %eax,0x8(%esp)
 8128549:	c7 44 24 04 6c 2b b6 	movl   $0x8b62b6c,0x4(%esp)
 8128550:	08 
 8128551:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8128554:	89 04 24             	mov    %eax,(%esp)
 8128557:	e8 64 bc 2c 00       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 812855c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8128563:	00 
 8128564:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8128567:	89 04 24             	mov    %eax,(%esp)
 812856a:	e8 b7 bd 2c 00       	call   83f4326 <_ZN5MySQL4execEb>
 812856f:	83 f0 01             	xor    $0x1,%eax
 8128572:	84 c0                	test   %al,%al
 8128574:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 8128578:	8b 45 c8             	mov    -0x38(%ebp),%eax
 812857b:	39 45 e0             	cmp    %eax,-0x20(%ebp)
 812857e:	0f 9c c0             	setl   %al
 8128581:	84 c0                	test   %al,%al
 8128583:	0f 85 8e fd ff ff    	jne    8128317 <_ZN33CLocalGlobal_DB_STATICS_BOSSTOWER8dispatchEiiP6Stream+0xb9>
 8128589:	b8 01 00 00 00       	mov    $0x1,%eax
 812858e:	81 c4 dc 00 00 00    	add    $0xdc,%esp
 8128594:	5b                   	pop    %ebx
 8128595:	5e                   	pop    %esi
 8128596:	5f                   	pop    %edi
 8128597:	5d                   	pop    %ebp
 8128598:	c3                   	ret
 8128599:	90                   	nop

```

```c
// CLocalGlobal_DB_STATICS_BOSSTOWER::dispatch @ 0x812825e

/* CLocalGlobal_DB_STATICS_BOSSTOWER::dispatch(int, int, Stream*) */

undefined4 CLocalGlobal_DB_STATICS_BOSSTOWER::dispatch(int param_1,int param_2,Stream *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  byte bVar9;
  char cVar10;
  undefined4 uVar11;
  uint uVar12;
  longlong lVar13;
  Stream *in_stack_00000010;
  tm local_78;
  undefined4 local_4c;
  char local_48 [12];
  int local_3c;
  cMyTrace local_38 [16];
  MySQL *local_28;
  int local_24;
  STBossDungeonTowerLog *local_20;
  
  local_28 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  local_3c = 0;
  Stream::operator>>(in_stack_00000010,&local_3c);
  if (local_3c < 1) {
    uVar11 = 0;
  }
  else {
    __GetCurrentDNFDate(&local_78);
    memset(local_48,0,0xc);
    sprintf(local_48,"%04d-%02d-%02d",local_78.tm_year + 0x76c,local_78.tm_mon + 1,local_78.tm_mday)
    ;
    for (local_24 = 0; local_24 < local_3c; local_24 = local_24 + 1) {
      Stream::operator>>(in_stack_00000010,&local_4c);
      local_20 = Stream::GetOutBuffer<STBossDungeonTowerLog>(in_stack_00000010);
      uVar7 = local_4c;
      uVar11 = *(undefined4 *)(local_20 + 8);
      uVar1 = *(undefined4 *)(local_20 + 0xc);
      uVar2 = *(undefined4 *)(local_20 + 4);
      uVar3 = *(undefined4 *)local_20;
      uVar5 = local_4c >> 8;
      uVar6 = local_4c >> 0x10;
      bVar8 = local_4c._3_1_ & 0xf;
      bVar9 = local_4c._3_1_ >> 4;
      uVar12 = local_4c & 0xff;
      cMyTrace::cMyTrace(local_38,
                         "virtual bool CLocalGlobal_DB_STATICS_BOSSTOWER::dispatch(int, int, Stream*)"
                         ,0x4f9,5);
      cMyTrace::operator()
                (local_38,"%d,%d,%d,%d,%d,%d,%d,%d,%d,%d",uVar7,uVar12,(uint)bVar9,(uint)bVar8,
                 uVar6 & 0xff,uVar5 & 0xff,uVar3,uVar2,uVar1,uVar11);
      MySQL::set_query(local_28,
                       "upDate log_monstertower_layer_stat SET play_cnt = play_cnt + %u, success_cnt = success_cnt + %u, play_time = play_time + %u, uniq_cnt = uniq_cnt + %u WHERE occ_date = \'%s\' and key_id = %u"
                       ,*(undefined4 *)local_20,*(undefined4 *)(local_20 + 4),
                       *(undefined4 *)(local_20 + 0xc),*(undefined4 *)(local_20 + 8),local_48,
                       local_4c);
      cVar10 = MySQL::exec(local_28,true);
      if (cVar10 == '\x01') {
        lVar13 = MySQL::getAffectedRowCount(local_28);
        if (lVar13 == 0) goto LAB_0812849f;
        bVar4 = false;
      }
      else {
LAB_0812849f:
        bVar4 = true;
      }
      if (bVar4) {
        MySQL::set_query(local_28,
                         "inSert into log_monstertower_layer_stat(occ_date, key_id, layer, monster_diff, charac_job, charac_grow, level, play_cnt, success_cnt, play_time, uniq_cnt) values(\'%s\', %u, %u, %u, %u, %u, %u, %u, %u, %u, %u)"
                         ,local_48,local_4c,local_4c & 0xff,(uint)(local_4c._3_1_ >> 4),
                         (uint)(local_4c._3_1_ & 0xf),local_4c >> 0x10 & 0xff,local_4c >> 8 & 0xff,
                         *(undefined4 *)local_20,*(undefined4 *)(local_20 + 4),
                         *(undefined4 *)(local_20 + 0xc),*(undefined4 *)(local_20 + 8));
        MySQL::exec(local_28,true);
      }
    }
    uVar11 = 1;
  }
  return uVar11;
}

```

