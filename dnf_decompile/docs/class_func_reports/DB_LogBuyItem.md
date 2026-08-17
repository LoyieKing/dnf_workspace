# DB_LogBuyItem

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 0812859a DB_LogBuyItem::dispatch  [0x0812859a-0x812887d] ===
 812859a:	55                   	push   %ebp
 812859b:	89 e5                	mov    %esp,%ebp
 812859d:	57                   	push   %edi
 812859e:	56                   	push   %esi
 812859f:	53                   	push   %ebx
 81285a0:	81 ec 8c 00 00 00    	sub    $0x8c,%esp
 81285a6:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 81285a9:	89 04 24             	mov    %eax,(%esp)
 81285ac:	e8 9f 51 f5 ff       	call   807d750 <time@plt>
 81285b1:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 81285b4:	89 04 24             	mov    %eax,(%esp)
 81285b7:	e8 74 5d f5 ff       	call   807e330 <localtime@plt>
 81285bc:	89 45 d8             	mov    %eax,-0x28(%ebp)
 81285bf:	e8 bd 3b fa ff       	call   80cc181 <_Z14G_CEnvironmentv>
 81285c4:	8b 80 7c 03 00 00    	mov    0x37c(%eax),%eax
 81285ca:	89 45 e0             	mov    %eax,-0x20(%ebp)
 81285cd:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81285d0:	8b 40 08             	mov    0x8(%eax),%eax
 81285d3:	3b 45 e0             	cmp    -0x20(%ebp),%eax
 81285d6:	7d 20                	jge    81285f8 <_ZN13DB_LogBuyItem8dispatchEiiP6Stream+0x5e>
 81285d8:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 81285df:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81285e2:	2d 80 51 01 00       	sub    $0x15180,%eax
 81285e7:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 81285ea:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 81285ed:	89 04 24             	mov    %eax,(%esp)
 81285f0:	e8 3b 5d f5 ff       	call   807e330 <localtime@plt>
 81285f5:	89 45 d8             	mov    %eax,-0x28(%ebp)
 81285f8:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81285fb:	8b 55 e0             	mov    -0x20(%ebp),%edx
 81285fe:	89 50 08             	mov    %edx,0x8(%eax)
 8128601:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8128604:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 812860b:	8b 45 d8             	mov    -0x28(%ebp),%eax
 812860e:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8128614:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8128617:	89 04 24             	mov    %eax,(%esp)
 812861a:	e8 01 62 f5 ff       	call   807e820 <mktime@plt>
 812861f:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8128622:	c7 45 c0 00 00 00 00 	movl   $0x0,-0x40(%ebp)
 8128629:	c7 45 bc 00 00 00 00 	movl   $0x0,-0x44(%ebp)
 8128630:	c7 45 b8 00 00 00 00 	movl   $0x0,-0x48(%ebp)
 8128637:	c7 45 b4 00 00 00 00 	movl   $0x0,-0x4c(%ebp)
 812863e:	c7 45 b0 00 00 00 00 	movl   $0x0,-0x50(%ebp)
 8128645:	c7 44 24 08 0c 00 00 	movl   $0xc,0x8(%esp)
 812864c:	00 
 812864d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8128654:	00 
 8128655:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8128658:	89 04 24             	mov    %eax,(%esp)
 812865b:	e8 60 56 f5 ff       	call   807dcc0 <memset@plt>
 8128660:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8128663:	8b 40 0c             	mov    0xc(%eax),%eax
 8128666:	8b 55 d8             	mov    -0x28(%ebp),%edx
 8128669:	8b 52 10             	mov    0x10(%edx),%edx
 812866c:	8d 4a 01             	lea    0x1(%edx),%ecx
 812866f:	8b 55 d8             	mov    -0x28(%ebp),%edx
 8128672:	8b 52 14             	mov    0x14(%edx),%edx
 8128675:	81 c2 6c 07 00 00    	add    $0x76c,%edx
 812867b:	89 44 24 10          	mov    %eax,0x10(%esp)
 812867f:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8128683:	89 54 24 08          	mov    %edx,0x8(%esp)
 8128687:	c7 44 24 04 80 2a b6 	movl   $0x8b62a80,0x4(%esp)
 812868e:	08 
 812868f:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8128692:	89 04 24             	mov    %eax,(%esp)
 8128695:	e8 a6 5d f5 ff       	call   807e440 <sprintf@plt>
 812869a:	8d 45 c0             	lea    -0x40(%ebp),%eax
 812869d:	89 44 24 04          	mov    %eax,0x4(%esp)
 81286a1:	8b 45 14             	mov    0x14(%ebp),%eax
 81286a4:	89 04 24             	mov    %eax,(%esp)
 81286a7:	e8 ea 40 4f 00       	call   861c796 <_ZN6StreamrsERj>
 81286ac:	8d 45 bc             	lea    -0x44(%ebp),%eax
 81286af:	89 44 24 04          	mov    %eax,0x4(%esp)
 81286b3:	8b 45 14             	mov    0x14(%ebp),%eax
 81286b6:	89 04 24             	mov    %eax,(%esp)
 81286b9:	e8 d8 40 4f 00       	call   861c796 <_ZN6StreamrsERj>
 81286be:	8d 45 b8             	lea    -0x48(%ebp),%eax
 81286c1:	89 44 24 04          	mov    %eax,0x4(%esp)
 81286c5:	8b 45 14             	mov    0x14(%ebp),%eax
 81286c8:	89 04 24             	mov    %eax,(%esp)
 81286cb:	e8 c6 40 4f 00       	call   861c796 <_ZN6StreamrsERj>
 81286d0:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 81286d3:	89 44 24 04          	mov    %eax,0x4(%esp)
 81286d7:	8b 45 14             	mov    0x14(%ebp),%eax
 81286da:	89 04 24             	mov    %eax,(%esp)
 81286dd:	e8 b4 40 4f 00       	call   861c796 <_ZN6StreamrsERj>
 81286e2:	8d 45 b0             	lea    -0x50(%ebp),%eax
 81286e5:	89 44 24 04          	mov    %eax,0x4(%esp)
 81286e9:	8b 45 14             	mov    0x14(%ebp),%eax
 81286ec:	89 04 24             	mov    %eax,(%esp)
 81286ef:	e8 d0 3e 4f 00       	call   861c5c4 <_ZN6StreamrsERi>
 81286f4:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 81286f9:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8128700:	00 
 8128701:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8128708:	00 
 8128709:	89 04 24             	mov    %eax,(%esp)
 812870c:	e8 2d cb 2c 00       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8128711:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8128714:	8b 4d b8             	mov    -0x48(%ebp),%ecx
 8128717:	8b 55 bc             	mov    -0x44(%ebp),%edx
 812871a:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 812871d:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 8128721:	89 54 24 10          	mov    %edx,0x10(%esp)
 8128725:	8d 55 a4             	lea    -0x5c(%ebp),%edx
 8128728:	89 54 24 0c          	mov    %edx,0xc(%esp)
 812872c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8128730:	c7 44 24 04 3c 2c b6 	movl   $0x8b62c3c,0x4(%esp)
 8128737:	08 
 8128738:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 812873b:	89 04 24             	mov    %eax,(%esp)
 812873e:	e8 7d ba 2c 00       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8128743:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 812874a:	00 
 812874b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 812874e:	89 04 24             	mov    %eax,(%esp)
 8128751:	e8 d0 bb 2c 00       	call   83f4326 <_ZN5MySQL4execEb>
 8128756:	83 f0 01             	xor    $0x1,%eax
 8128759:	84 c0                	test   %al,%al
 812875b:	75 11                	jne    812876e <_ZN13DB_LogBuyItem8dispatchEiiP6Stream+0x1d4>
 812875d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8128760:	89 04 24             	mov    %eax,(%esp)
 8128763:	e8 a8 bb 2c 00       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 8128768:	09 d0                	or     %edx,%eax
 812876a:	85 c0                	test   %eax,%eax
 812876c:	75 07                	jne    8128775 <_ZN13DB_LogBuyItem8dispatchEiiP6Stream+0x1db>
 812876e:	b8 01 00 00 00       	mov    $0x1,%eax
 8128773:	eb 05                	jmp    812877a <_ZN13DB_LogBuyItem8dispatchEiiP6Stream+0x1e0>
 8128775:	b8 00 00 00 00       	mov    $0x0,%eax
 812877a:	84 c0                	test   %al,%al
 812877c:	0f 84 eb 00 00 00    	je     812886d <_ZN13DB_LogBuyItem8dispatchEiiP6Stream+0x2d3>
 8128782:	8b 45 b0             	mov    -0x50(%ebp),%eax
 8128785:	89 45 8c             	mov    %eax,-0x74(%ebp)
 8128788:	8b 7d b4             	mov    -0x4c(%ebp),%edi
 812878b:	8b 75 b8             	mov    -0x48(%ebp),%esi
 812878e:	8b 5d bc             	mov    -0x44(%ebp),%ebx
 8128791:	8b 45 c0             	mov    -0x40(%ebp),%eax
 8128794:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 812879b:	00 
 812879c:	89 04 24             	mov    %eax,(%esp)
 812879f:	e8 a7 08 fe ff       	call   810904b <_Z14NumberToStringji>
 81287a4:	8b 55 8c             	mov    -0x74(%ebp),%edx
 81287a7:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 81287ab:	89 7c 24 18          	mov    %edi,0x18(%esp)
 81287af:	89 74 24 14          	mov    %esi,0x14(%esp)
 81287b3:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 81287b7:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81287bb:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 81287be:	89 44 24 08          	mov    %eax,0x8(%esp)
 81287c2:	c7 44 24 04 bc 2c b6 	movl   $0x8b62cbc,0x4(%esp)
 81287c9:	08 
 81287ca:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81287cd:	89 04 24             	mov    %eax,(%esp)
 81287d0:	e8 eb b9 2c 00       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 81287d5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81287dc:	00 
 81287dd:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81287e0:	89 04 24             	mov    %eax,(%esp)
 81287e3:	e8 3e bb 2c 00       	call   83f4326 <_ZN5MySQL4execEb>
 81287e8:	83 f0 01             	xor    $0x1,%eax
 81287eb:	84 c0                	test   %al,%al
 81287ed:	74 7e                	je     812886d <_ZN13DB_LogBuyItem8dispatchEiiP6Stream+0x2d3>
 81287ef:	8b 45 b0             	mov    -0x50(%ebp),%eax
 81287f2:	89 45 90             	mov    %eax,-0x70(%ebp)
 81287f5:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 81287f8:	89 55 94             	mov    %edx,-0x6c(%ebp)
 81287fb:	8b 7d b8             	mov    -0x48(%ebp),%edi
 81287fe:	8b 75 bc             	mov    -0x44(%ebp),%esi
 8128801:	8b 45 c0             	mov    -0x40(%ebp),%eax
 8128804:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 812880b:	00 
 812880c:	89 04 24             	mov    %eax,(%esp)
 812880f:	e8 37 08 fe ff       	call   810904b <_Z14NumberToStringji>
 8128814:	89 c3                	mov    %eax,%ebx
 8128816:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 812881d:	00 
 812881e:	c7 44 24 08 66 05 00 	movl   $0x566,0x8(%esp)
 8128825:	00 
 8128826:	c7 44 24 04 80 3a b6 	movl   $0x8b63a80,0x4(%esp)
 812882d:	08 
 812882e:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8128831:	89 04 24             	mov    %eax,(%esp)
 8128834:	e8 df 6e 42 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8128839:	8b 45 90             	mov    -0x70(%ebp),%eax
 812883c:	89 44 24 18          	mov    %eax,0x18(%esp)
 8128840:	8b 55 94             	mov    -0x6c(%ebp),%edx
 8128843:	89 54 24 14          	mov    %edx,0x14(%esp)
 8128847:	89 7c 24 10          	mov    %edi,0x10(%esp)
 812884b:	89 74 24 0c          	mov    %esi,0xc(%esp)
 812884f:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8128853:	c7 44 24 04 44 2d b6 	movl   $0x8b62d44,0x4(%esp)
 812885a:	08 
 812885b:	8d 45 c8             	lea    -0x38(%ebp),%eax
 812885e:	89 04 24             	mov    %eax,(%esp)
 8128861:	e8 22 6f 42 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8128866:	b8 00 00 00 00       	mov    $0x0,%eax
 812886b:	eb 05                	jmp    8128872 <_ZN13DB_LogBuyItem8dispatchEiiP6Stream+0x2d8>
 812886d:	b8 01 00 00 00       	mov    $0x1,%eax
 8128872:	81 c4 8c 00 00 00    	add    $0x8c,%esp
 8128878:	5b                   	pop    %ebx
 8128879:	5e                   	pop    %esi
 812887a:	5f                   	pop    %edi
 812887b:	5d                   	pop    %ebp
 812887c:	c3                   	ret
 812887d:	90                   	nop

```

```c
// DB_LogBuyItem::dispatch @ 0x812859a

/* DB_LogBuyItem::dispatch(int, int, Stream*) */

undefined4 DB_LogBuyItem::dispatch(int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  Stream *in_stack_00000010;
  char local_60 [12];
  int local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  int local_40;
  cMyTrace local_3c [16];
  tm *local_2c;
  time_t local_28;
  int local_24;
  MySQL *local_20;
  
  time(&local_40);
  local_2c = localtime(&local_40);
  iVar6 = G_CEnvironment();
  local_24 = *(int *)(iVar6 + 0x37c);
  if (local_2c->tm_hour < local_24) {
    local_2c = (tm *)0x0;
    local_40 = local_40 + -0x15180;
    local_2c = localtime(&local_40);
  }
  local_2c->tm_hour = local_24;
  local_2c->tm_min = 0;
  local_2c->tm_sec = 0;
  local_28 = mktime(local_2c);
  local_44 = 0;
  local_48 = 0;
  local_4c = 0;
  local_50 = 0;
  local_54 = 0;
  memset(local_60,0,0xc);
  sprintf(local_60,"%04d-%02d-%02d",local_2c->tm_year + 0x76c,local_2c->tm_mon + 1,local_2c->tm_mday
         );
  Stream::operator>>(in_stack_00000010,&local_44);
  Stream::operator>>(in_stack_00000010,&local_48);
  Stream::operator>>(in_stack_00000010,&local_4c);
  Stream::operator>>(in_stack_00000010,&local_50);
  Stream::operator>>(in_stack_00000010,&local_54);
  local_20 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  MySQL::set_query(local_20,
                   "update log_acquire_item\t\t\t\t\t\tset item_count = item_count + %d\t\t\t\t\t\twhere occ_date = \'%s\' and charac_no = %u and item_id = %u"
                   ,local_50,local_60,local_48,local_4c);
  cVar5 = MySQL::exec(local_20,true);
  if ((cVar5 == '\x01') && (lVar8 = MySQL::getAffectedRowCount(local_20), lVar8 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  uVar4 = local_48;
  uVar3 = local_4c;
  uVar2 = local_50;
  iVar6 = local_54;
  if (bVar1) {
    uVar7 = NumberToString(local_44,0);
    MySQL::set_query(local_20,
                     "insert into log_acquire_item\t\t\t\t\t\t\t(occ_date, m_id, charac_no, item_id, item_count, item_type)\t\t\t\t\t\t\tvalues (\'%s\', %s, %u, %u, %u, %d)"
                     ,local_60,uVar7,uVar4,uVar3,uVar2,iVar6);
    cVar5 = MySQL::exec(local_20,true);
    uVar4 = local_48;
    uVar3 = local_4c;
    uVar2 = local_50;
    iVar6 = local_54;
    if (cVar5 != '\x01') {
      uVar7 = NumberToString(local_44,0);
      cMyTrace::cMyTrace(local_3c,"virtual bool DB_LogBuyItem::dispatch(int, int, Stream*)",0x566,5)
      ;
      cMyTrace::operator()
                (local_3c,
                 "DB_LogBuyItem, exec ERROR m_id=%s charac_no=%u ItemID=%u Count=%u Type=%d",uVar7,
                 uVar4,uVar3,uVar2,iVar6);
      return 0;
    }
  }
  return 1;
}

```

---

## makeRequest

```asm
// === 0812887e DB_LogBuyItem::makeRequest  [0x0812887e-0x8128a34] ===
 812887e:	55                   	push   %ebp
 812887f:	89 e5                	mov    %esp,%ebp
 8128881:	56                   	push   %esi
 8128882:	53                   	push   %ebx
 8128883:	83 ec 40             	sub    $0x40,%esp
 8128886:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 812888a:	0f 84 9d 01 00 00    	je     8128a2d <_ZN13DB_LogBuyItem11makeRequestEjjjj20ENUM_DBLOG_ITEM_TYPE+0x1af>
 8128890:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8128895:	c7 44 24 08 9b 05 00 	movl   $0x59b,0x8(%esp)
 812889c:	00 
 812889d:	c7 44 24 04 0c 29 b6 	movl   $0x8b6290c,0x4(%esp)
 81288a4:	08 
 81288a5:	89 04 24             	mov    %eax,(%esp)
 81288a8:	e8 d9 71 16 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 81288ad:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81288b4:	00 
 81288b5:	89 44 24 04          	mov    %eax,0x4(%esp)
 81288b9:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81288bc:	89 04 24             	mov    %eax,(%esp)
 81288bf:	e8 62 03 fa ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 81288c4:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81288c7:	89 04 24             	mov    %eax,(%esp)
 81288ca:	e8 77 03 fa ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81288cf:	c7 44 24 04 51 02 00 	movl   $0x251,0x4(%esp)
 81288d6:	00 
 81288d7:	89 04 24             	mov    %eax,(%esp)
 81288da:	e8 77 03 fa ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 81288df:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81288e2:	89 04 24             	mov    %eax,(%esp)
 81288e5:	e8 5c 03 fa ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81288ea:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 81288f1:	ff 
 81288f2:	89 04 24             	mov    %eax,(%esp)
 81288f5:	e8 5c 03 fa ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 81288fa:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81288fd:	89 04 24             	mov    %eax,(%esp)
 8128900:	e8 41 03 fa ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8128905:	8b 55 08             	mov    0x8(%ebp),%edx
 8128908:	89 54 24 04          	mov    %edx,0x4(%esp)
 812890c:	89 04 24             	mov    %eax,(%esp)
 812890f:	e8 7e 99 fb ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 8128914:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8128917:	89 04 24             	mov    %eax,(%esp)
 812891a:	e8 27 03 fa ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 812891f:	8b 55 0c             	mov    0xc(%ebp),%edx
 8128922:	89 54 24 04          	mov    %edx,0x4(%esp)
 8128926:	89 04 24             	mov    %eax,(%esp)
 8128929:	e8 64 99 fb ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 812892e:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8128931:	89 04 24             	mov    %eax,(%esp)
 8128934:	e8 0d 03 fa ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8128939:	8b 55 10             	mov    0x10(%ebp),%edx
 812893c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8128940:	89 04 24             	mov    %eax,(%esp)
 8128943:	e8 4a 99 fb ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 8128948:	8d 45 e0             	lea    -0x20(%ebp),%eax
 812894b:	89 04 24             	mov    %eax,(%esp)
 812894e:	e8 f3 02 fa ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8128953:	8b 55 14             	mov    0x14(%ebp),%edx
 8128956:	89 54 24 04          	mov    %edx,0x4(%esp)
 812895a:	89 04 24             	mov    %eax,(%esp)
 812895d:	e8 30 99 fb ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 8128962:	8b 5d 18             	mov    0x18(%ebp),%ebx
 8128965:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8128968:	89 04 24             	mov    %eax,(%esp)
 812896b:	e8 d6 02 fa ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8128970:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8128974:	89 04 24             	mov    %eax,(%esp)
 8128977:	e8 da 02 fa ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 812897c:	8b 75 18             	mov    0x18(%ebp),%esi
 812897f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8128986:	00 
 8128987:	8b 45 08             	mov    0x8(%ebp),%eax
 812898a:	89 04 24             	mov    %eax,(%esp)
 812898d:	e8 b9 06 fe ff       	call   810904b <_Z14NumberToStringji>
 8128992:	89 c3                	mov    %eax,%ebx
 8128994:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 812899b:	00 
 812899c:	c7 44 24 08 af 05 00 	movl   $0x5af,0x8(%esp)
 81289a3:	00 
 81289a4:	c7 44 24 04 e0 39 b6 	movl   $0x8b639e0,0x4(%esp)
 81289ab:	08 
 81289ac:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81289af:	89 04 24             	mov    %eax,(%esp)
 81289b2:	e8 61 6d 42 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81289b7:	89 74 24 18          	mov    %esi,0x18(%esp)
 81289bb:	8b 45 14             	mov    0x14(%ebp),%eax
 81289be:	89 44 24 14          	mov    %eax,0x14(%esp)
 81289c2:	8b 45 10             	mov    0x10(%ebp),%eax
 81289c5:	89 44 24 10          	mov    %eax,0x10(%esp)
 81289c9:	8b 45 0c             	mov    0xc(%ebp),%eax
 81289cc:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81289d0:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81289d4:	c7 44 24 04 90 2d b6 	movl   $0x8b62d90,0x4(%esp)
 81289db:	08 
 81289dc:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81289df:	89 04 24             	mov    %eax,(%esp)
 81289e2:	e8 a1 6d 42 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81289e7:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 81289ec:	8d 55 e0             	lea    -0x20(%ebp),%edx
 81289ef:	89 54 24 08          	mov    %edx,0x8(%esp)
 81289f3:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 81289fa:	00 
 81289fb:	89 04 24             	mov    %eax,(%esp)
 81289fe:	e8 db 85 44 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8128a03:	eb 1b                	jmp    8128a20 <_ZN13DB_LogBuyItem11makeRequestEjjjj20ENUM_DBLOG_ITEM_TYPE+0x1a2>
 8128a05:	89 d3                	mov    %edx,%ebx
 8128a07:	89 c6                	mov    %eax,%esi
 8128a09:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8128a0c:	89 04 24             	mov    %eax,(%esp)
 8128a0f:	e8 be 3e 4f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8128a14:	89 f0                	mov    %esi,%eax
 8128a16:	89 da                	mov    %ebx,%edx
 8128a18:	89 04 24             	mov    %eax,(%esp)
 8128a1b:	e8 30 ad 9b 00       	call   8ae3750 <_Unwind_Resume>
 8128a20:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8128a23:	89 04 24             	mov    %eax,(%esp)
 8128a26:	e8 a7 3e 4f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8128a2b:	eb 01                	jmp    8128a2e <_ZN13DB_LogBuyItem11makeRequestEjjjj20ENUM_DBLOG_ITEM_TYPE+0x1b0>
 8128a2d:	90                   	nop
 8128a2e:	83 c4 40             	add    $0x40,%esp
 8128a31:	5b                   	pop    %ebx
 8128a32:	5e                   	pop    %esi
 8128a33:	5d                   	pop    %ebp
 8128a34:	c3                   	ret

```

```c
// DB_LogBuyItem::makeRequest @ 0x812887e

/* DB_LogBuyItem::makeRequest(unsigned int, unsigned int, unsigned int, unsigned int,
   ENUM_DBLOG_ITEM_TYPE) */

void DB_LogBuyItem::makeRequest(uint param_1,uint param_2,uint param_3,uint param_4,int param_5)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  undefined4 uVar3;
  CStreamGuard local_24 [8];
  cMyTrace local_1c [16];
  
  if (param_2 != 0) {
    pSVar1 = (Stream *)
             StreamPool::Acquire(GlobalData::s_stream_pool,"localchina/localchina_DBThread.cpp",
                                 0x59b);
    CStreamGuard::CStreamGuard(local_24,pSVar1,true);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_24);
                    /* try { // try from 081288da to 08128a02 has its CatchHandler @ 08128a05 */
    CStreamGuard::operator<<(pCVar2,0x251);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_24);
    CStreamGuard::operator<<(pCVar2,-1);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_24);
    CStreamGuard::operator<<(pCVar2,param_1);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_24);
    CStreamGuard::operator<<(pCVar2,param_2);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_24);
    CStreamGuard::operator<<(pCVar2,param_3);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_24);
    CStreamGuard::operator<<(pCVar2,param_4);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_24);
    CStreamGuard::operator<<(pCVar2,param_5);
    uVar3 = NumberToString(param_1,0);
    cMyTrace::cMyTrace(local_1c,
                       "static void DB_LogBuyItem::makeRequest(memberIdentificationNumber_t, unsigned int, unsigned int, unsigned int, ENUM_DBLOG_ITEM_TYPE)"
                       ,0x5af,0);
    cMyTrace::operator()
              (local_1c,
               "DB_LogBuyItem::makeRequest m_id=%s nCharacNo=%d nItemID=%u nCount=%u nType=%d",uVar3
               ,param_2,param_3,param_4,param_5);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,4,local_24);
    CStreamGuard::~CStreamGuard(local_24);
  }
  return;
}

```

