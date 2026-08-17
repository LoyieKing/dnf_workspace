# WongWork__EventAlttle

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## ArrangeAlttleEventItem

```asm
// === 083fb595 WongWork::EventAlttle::ArrangeAlttleEventItem  [0x083fb595-0x83fb882] ===
 83fb595:	55                   	push   %ebp
 83fb596:	89 e5                	mov    %esp,%ebp
 83fb598:	53                   	push   %ebx
 83fb599:	81 ec f4 00 00 00    	sub    $0xf4,%esp
 83fb59f:	c7 45 e0 0a 00 00 00 	movl   $0xa,-0x20(%ebp)
 83fb5a6:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 83fb5ab:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 83fb5b2:	00 
 83fb5b3:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 83fb5ba:	00 
 83fb5bb:	89 04 24             	mov    %eax,(%esp)
 83fb5be:	e8 7b 9c ff ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 83fb5c3:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 83fb5c6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 83fb5cd:	00 
 83fb5ce:	8b 45 08             	mov    0x8(%ebp),%eax
 83fb5d1:	89 04 24             	mov    %eax,(%esp)
 83fb5d4:	e8 72 da d0 ff       	call   810904b <_Z14NumberToStringji>
 83fb5d9:	c7 44 24 0c 0a 00 00 	movl   $0xa,0xc(%esp)
 83fb5e0:	00 
 83fb5e1:	89 44 24 08          	mov    %eax,0x8(%esp)
 83fb5e5:	c7 44 24 04 e8 64 c3 	movl   $0x8c364e8,0x4(%esp)
 83fb5ec:	08 
 83fb5ed:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 83fb5f0:	89 04 24             	mov    %eax,(%esp)
 83fb5f3:	e8 c8 8b ff ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 83fb5f8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 83fb5ff:	00 
 83fb600:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 83fb603:	89 04 24             	mov    %eax,(%esp)
 83fb606:	e8 1b 8d ff ff       	call   83f4326 <_ZN5MySQL4execEb>
 83fb60b:	83 f0 01             	xor    $0x1,%eax
 83fb60e:	84 c0                	test   %al,%al
 83fb610:	74 5c                	je     83fb66e <_ZN8WongWork11EventAlttle22ArrangeAlttleEventItemEjj+0xd9>
 83fb612:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 83fb619:	00 
 83fb61a:	8b 45 08             	mov    0x8(%ebp),%eax
 83fb61d:	89 04 24             	mov    %eax,(%esp)
 83fb620:	e8 26 da d0 ff       	call   810904b <_Z14NumberToStringji>
 83fb625:	89 c3                	mov    %eax,%ebx
 83fb627:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 83fb62e:	00 
 83fb62f:	c7 44 24 08 1b 02 00 	movl   $0x21b,0x8(%esp)
 83fb636:	00 
 83fb637:	c7 44 24 04 c0 db c5 	movl   $0x8c5dbc0,0x4(%esp)
 83fb63e:	08 
 83fb63f:	8d 45 d0             	lea    -0x30(%ebp),%eax
 83fb642:	89 04 24             	mov    %eax,(%esp)
 83fb645:	e8 ce 40 15 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 83fb64a:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 83fb64e:	c7 44 24 08 c0 db c5 	movl   $0x8c5dbc0,0x8(%esp)
 83fb655:	08 
 83fb656:	c7 44 24 04 9d 60 c3 	movl   $0x8c3609d,0x4(%esp)
 83fb65d:	08 
 83fb65e:	8d 45 d0             	lea    -0x30(%ebp),%eax
 83fb661:	89 04 24             	mov    %eax,(%esp)
 83fb664:	e8 1f 41 15 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 83fb669:	e9 0c 02 00 00       	jmp    83fb87a <_ZN8WongWork11EventAlttle22ArrangeAlttleEventItemEjj+0x2e5>
 83fb66e:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 83fb675:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 83fb67c:	e9 35 01 00 00       	jmp    83fb7b6 <_ZN8WongWork11EventAlttle22ArrangeAlttleEventItemEjj+0x221>
 83fb681:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 83fb684:	89 04 24             	mov    %eax,(%esp)
 83fb687:	e8 30 8e ff ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 83fb68c:	83 f0 01             	xor    $0x1,%eax
 83fb68f:	84 c0                	test   %al,%al
 83fb691:	0f 85 3a 01 00 00    	jne    83fb7d1 <_ZN8WongWork11EventAlttle22ArrangeAlttleEventItemEjj+0x23c>
 83fb697:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 83fb69e:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 83fb6a5:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
 83fb6ac:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 83fb6b3:	c7 45 c0 00 00 00 00 	movl   $0x0,-0x40(%ebp)
 83fb6ba:	c7 45 bc 00 00 00 00 	movl   $0x0,-0x44(%ebp)
 83fb6c1:	8d 45 cc             	lea    -0x34(%ebp),%eax
 83fb6c4:	89 44 24 08          	mov    %eax,0x8(%esp)
 83fb6c8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 83fb6cf:	00 
 83fb6d0:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 83fb6d3:	89 04 24             	mov    %eax,(%esp)
 83fb6d6:	e8 51 b2 d1 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 83fb6db:	8d 45 c8             	lea    -0x38(%ebp),%eax
 83fb6de:	89 44 24 08          	mov    %eax,0x8(%esp)
 83fb6e2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 83fb6e9:	00 
 83fb6ea:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 83fb6ed:	89 04 24             	mov    %eax,(%esp)
 83fb6f0:	e8 37 b2 d1 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 83fb6f5:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 83fb6f8:	89 44 24 08          	mov    %eax,0x8(%esp)
 83fb6fc:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 83fb703:	00 
 83fb704:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 83fb707:	89 04 24             	mov    %eax,(%esp)
 83fb70a:	e8 1d b2 d1 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 83fb70f:	8d 45 c0             	lea    -0x40(%ebp),%eax
 83fb712:	89 44 24 08          	mov    %eax,0x8(%esp)
 83fb716:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 83fb71d:	00 
 83fb71e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 83fb721:	89 04 24             	mov    %eax,(%esp)
 83fb724:	e8 03 b2 d1 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 83fb729:	8d 45 bc             	lea    -0x44(%ebp),%eax
 83fb72c:	89 44 24 08          	mov    %eax,0x8(%esp)
 83fb730:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 83fb737:	00 
 83fb738:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 83fb73b:	89 04 24             	mov    %eax,(%esp)
 83fb73e:	e8 e9 b1 d1 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 83fb743:	8b 45 c0             	mov    -0x40(%ebp),%eax
 83fb746:	85 c0                	test   %eax,%eax
 83fb748:	75 68                	jne    83fb7b2 <_ZN8WongWork11EventAlttle22ArrangeAlttleEventItemEjj+0x21d>
 83fb74a:	8b 45 cc             	mov    -0x34(%ebp),%eax
 83fb74d:	3b 45 0c             	cmp    0xc(%ebp),%eax
 83fb750:	75 60                	jne    83fb7b2 <_ZN8WongWork11EventAlttle22ArrangeAlttleEventItemEjj+0x21d>
 83fb752:	8b 45 e8             	mov    -0x18(%ebp),%eax
 83fb755:	c1 e0 04             	shl    $0x4,%eax
 83fb758:	8d 55 f8             	lea    -0x8(%ebp),%edx
 83fb75b:	8d 04 02             	lea    (%edx,%eax,1),%eax
 83fb75e:	8d 90 24 ff ff ff    	lea    -0xdc(%eax),%edx
 83fb764:	8b 45 08             	mov    0x8(%ebp),%eax
 83fb767:	89 02                	mov    %eax,(%edx)
 83fb769:	8b 55 e8             	mov    -0x18(%ebp),%edx
 83fb76c:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 83fb76f:	c1 e2 04             	shl    $0x4,%edx
 83fb772:	8d 4d f8             	lea    -0x8(%ebp),%ecx
 83fb775:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 83fb778:	81 ea d4 00 00 00    	sub    $0xd4,%edx
 83fb77e:	89 02                	mov    %eax,(%edx)
 83fb780:	8b 55 e8             	mov    -0x18(%ebp),%edx
 83fb783:	8b 45 bc             	mov    -0x44(%ebp),%eax
 83fb786:	c1 e2 04             	shl    $0x4,%edx
 83fb789:	8d 5d f8             	lea    -0x8(%ebp),%ebx
 83fb78c:	8d 14 13             	lea    (%ebx,%edx,1),%edx
 83fb78f:	81 ea d0 00 00 00    	sub    $0xd0,%edx
 83fb795:	89 02                	mov    %eax,(%edx)
 83fb797:	8b 55 e8             	mov    -0x18(%ebp),%edx
 83fb79a:	8b 45 c8             	mov    -0x38(%ebp),%eax
 83fb79d:	c1 e2 04             	shl    $0x4,%edx
 83fb7a0:	8d 4d f8             	lea    -0x8(%ebp),%ecx
 83fb7a3:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 83fb7a6:	81 ea d8 00 00 00    	sub    $0xd8,%edx
 83fb7ac:	89 02                	mov    %eax,(%edx)
 83fb7ae:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 83fb7b2:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 83fb7b6:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 83fb7b9:	89 04 24             	mov    %eax,(%esp)
 83fb7bc:	e8 ab 6b ce ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 83fb7c1:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 83fb7c4:	0f 97 c0             	seta   %al
 83fb7c7:	84 c0                	test   %al,%al
 83fb7c9:	0f 85 b2 fe ff ff    	jne    83fb681 <_ZN8WongWork11EventAlttle22ArrangeAlttleEventItemEjj+0xec>
 83fb7cf:	eb 01                	jmp    83fb7d2 <_ZN8WongWork11EventAlttle22ArrangeAlttleEventItemEjj+0x23d>
 83fb7d1:	90                   	nop
 83fb7d2:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 83fb7d9:	e9 8b 00 00 00       	jmp    83fb869 <_ZN8WongWork11EventAlttle22ArrangeAlttleEventItemEjj+0x2d4>
 83fb7de:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83fb7e1:	c1 e0 04             	shl    $0x4,%eax
 83fb7e4:	8d 5d f8             	lea    -0x8(%ebp),%ebx
 83fb7e7:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 83fb7ea:	2d d4 00 00 00       	sub    $0xd4,%eax
 83fb7ef:	8b 10                	mov    (%eax),%edx
 83fb7f1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83fb7f4:	c1 e0 04             	shl    $0x4,%eax
 83fb7f7:	8d 4d f8             	lea    -0x8(%ebp),%ecx
 83fb7fa:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 83fb7fd:	2d dc 00 00 00       	sub    $0xdc,%eax
 83fb802:	8b 00                	mov    (%eax),%eax
 83fb804:	89 54 24 04          	mov    %edx,0x4(%esp)
 83fb808:	89 04 24             	mov    %eax,(%esp)
 83fb80b:	e8 20 fd ff ff       	call   83fb530 <_ZN8WongWork11EventAlttle21UpdateEventAlttleInfoEji>
 83fb810:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83fb813:	c1 e0 04             	shl    $0x4,%eax
 83fb816:	8d 5d f8             	lea    -0x8(%ebp),%ebx
 83fb819:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 83fb81c:	2d d0 00 00 00       	sub    $0xd0,%eax
 83fb821:	8b 00                	mov    (%eax),%eax
 83fb823:	89 c1                	mov    %eax,%ecx
 83fb825:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83fb828:	c1 e0 04             	shl    $0x4,%eax
 83fb82b:	8d 55 f8             	lea    -0x8(%ebp),%edx
 83fb82e:	8d 04 02             	lea    (%edx,%eax,1),%eax
 83fb831:	2d d4 00 00 00       	sub    $0xd4,%eax
 83fb836:	8b 00                	mov    (%eax),%eax
 83fb838:	89 c2                	mov    %eax,%edx
 83fb83a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83fb83d:	c1 e0 04             	shl    $0x4,%eax
 83fb840:	8d 5d f8             	lea    -0x8(%ebp),%ebx
 83fb843:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 83fb846:	2d d8 00 00 00       	sub    $0xd8,%eax
 83fb84b:	8b 00                	mov    (%eax),%eax
 83fb84d:	c7 44 24 0c 06 00 00 	movl   $0x6,0xc(%esp)
 83fb854:	00 
 83fb855:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 83fb859:	89 54 24 04          	mov    %edx,0x4(%esp)
 83fb85d:	89 04 24             	mov    %eax,(%esp)
 83fb860:	e8 ef e2 ff ff       	call   83f9b54 <_ZN8WongWork11EventCommon26InsertEventItem2EventTableEjjjj>
 83fb865:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 83fb869:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83fb86c:	3b 45 e8             	cmp    -0x18(%ebp),%eax
 83fb86f:	0f 9c c0             	setl   %al
 83fb872:	84 c0                	test   %al,%al
 83fb874:	0f 85 64 ff ff ff    	jne    83fb7de <_ZN8WongWork11EventAlttle22ArrangeAlttleEventItemEjj+0x249>
 83fb87a:	81 c4 f4 00 00 00    	add    $0xf4,%esp
 83fb880:	5b                   	pop    %ebx
 83fb881:	5d                   	pop    %ebp
 83fb882:	c3                   	ret

```

```c
// WongWork::EventAlttle::ArrangeAlttleEventItem @ 0x83fb595

/* WongWork::EventAlttle::ArrangeAlttleEventItem(unsigned int, unsigned int) */

void WongWork::EventAlttle::ArrangeAlttleEventItem(uint param_1,uint param_2)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint auStack_e8 [40];
  uint local_48;
  int local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  cMyTrace local_34 [16];
  undefined4 local_24;
  MySQL *local_20;
  int local_1c;
  uint local_18;
  undefined4 local_14;
  int local_10;
  
  local_24 = 10;
  local_20 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  uVar2 = NumberToString(param_1,0);
  MySQL::set_query(local_20,
                   "seLect item_server_id,item_charac_no,item_no,item_check,item_cnt from event_alttle_info where m_id=%s and occ_check!=0 limit %d"
                   ,uVar2,10);
  cVar1 = MySQL::exec(local_20,true);
  if (cVar1 == '\x01') {
    local_1c = 0;
    local_18 = 0;
    while ((uVar3 = MySQL::get_n_rows(local_20), local_18 < uVar3 &&
           (cVar1 = MySQL::fetch(local_20), cVar1 == '\x01'))) {
      local_14 = 0;
      local_38 = 0;
      local_3c = 0;
      local_40 = 0;
      local_44 = 0;
      local_48 = 0;
      MySQL::get_int(local_20,0,(int *)&local_38);
      MySQL::get_int(local_20,1,(int *)&local_3c);
      MySQL::get_int(local_20,2,(int *)&local_40);
      MySQL::get_int(local_20,3,&local_44);
      MySQL::get_int(local_20,4,(int *)&local_48);
      if ((local_44 == 0) && (local_38 == param_2)) {
        auStack_e8[local_1c * 4] = param_1;
        auStack_e8[local_1c * 4 + 2] = local_40;
        auStack_e8[local_1c * 4 + 3] = local_48;
        auStack_e8[local_1c * 4 + 1] = local_3c;
        local_1c = local_1c + 1;
      }
      local_18 = local_18 + 1;
    }
    for (local_10 = 0; local_10 < local_1c; local_10 = local_10 + 1) {
      UpdateEventAlttleInfo(auStack_e8[local_10 * 4],auStack_e8[local_10 * 4 + 2]);
      EventCommon::InsertEventItem2EventTable
                (auStack_e8[local_10 * 4 + 1],auStack_e8[local_10 * 4 + 2],
                 auStack_e8[local_10 * 4 + 3],6);
    }
  }
  else {
    uVar2 = NumberToString(param_1,0);
    cMyTrace::cMyTrace(local_34,
                       "void WongWork::EventAlttle::ArrangeAlttleEventItem(memberIdentificationNumber_t, unsigned int)"
                       ,0x21b,5);
    cMyTrace::operator()
              (local_34,"%s, exec ERROR m_id=%s",
               "void WongWork::EventAlttle::ArrangeAlttleEventItem(memberIdentificationNumber_t, unsigned int)"
               ,uVar2);
  }
  return;
}

```

---

## CheckAlreadyGetAlttleItem

```asm
// === 083fb472 WongWork::EventAlttle::CheckAlreadyGetAlttleItem  [0x083fb472-0x83fb52f] ===
 83fb472:	55                   	push   %ebp
 83fb473:	89 e5                	mov    %esp,%ebp
 83fb475:	83 ec 28             	sub    $0x28,%esp
 83fb478:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 83fb47d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 83fb484:	00 
 83fb485:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 83fb48c:	00 
 83fb48d:	89 04 24             	mov    %eax,(%esp)
 83fb490:	e8 a9 9d ff ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 83fb495:	89 45 f4             	mov    %eax,-0xc(%ebp)
 83fb498:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 83fb49f:	00 
 83fb4a0:	8b 45 08             	mov    0x8(%ebp),%eax
 83fb4a3:	89 04 24             	mov    %eax,(%esp)
 83fb4a6:	e8 a0 db d0 ff       	call   810904b <_Z14NumberToStringji>
 83fb4ab:	89 44 24 08          	mov    %eax,0x8(%esp)
 83fb4af:	c7 44 24 04 64 64 c3 	movl   $0x8c36464,0x4(%esp)
 83fb4b6:	08 
 83fb4b7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83fb4ba:	89 04 24             	mov    %eax,(%esp)
 83fb4bd:	e8 fe 8c ff ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 83fb4c2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 83fb4c9:	00 
 83fb4ca:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83fb4cd:	89 04 24             	mov    %eax,(%esp)
 83fb4d0:	e8 51 8e ff ff       	call   83f4326 <_ZN5MySQL4execEb>
 83fb4d5:	83 f0 01             	xor    $0x1,%eax
 83fb4d8:	84 c0                	test   %al,%al
 83fb4da:	74 07                	je     83fb4e3 <_ZN8WongWork11EventAlttle25CheckAlreadyGetAlttleItemEji+0x71>
 83fb4dc:	b8 00 00 00 00       	mov    $0x0,%eax
 83fb4e1:	eb 4b                	jmp    83fb52e <_ZN8WongWork11EventAlttle25CheckAlreadyGetAlttleItemEji+0xbc>
 83fb4e3:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 83fb4ea:	8d 45 f0             	lea    -0x10(%ebp),%eax
 83fb4ed:	89 44 24 08          	mov    %eax,0x8(%esp)
 83fb4f1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 83fb4f8:	00 
 83fb4f9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83fb4fc:	89 04 24             	mov    %eax,(%esp)
 83fb4ff:	e8 28 b4 d1 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 83fb504:	83 f0 01             	xor    $0x1,%eax
 83fb507:	84 c0                	test   %al,%al
 83fb509:	75 07                	jne    83fb512 <_ZN8WongWork11EventAlttle25CheckAlreadyGetAlttleItemEji+0xa0>
 83fb50b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 83fb50e:	85 c0                	test   %eax,%eax
 83fb510:	75 07                	jne    83fb519 <_ZN8WongWork11EventAlttle25CheckAlreadyGetAlttleItemEji+0xa7>
 83fb512:	b8 01 00 00 00       	mov    $0x1,%eax
 83fb517:	eb 05                	jmp    83fb51e <_ZN8WongWork11EventAlttle25CheckAlreadyGetAlttleItemEji+0xac>
 83fb519:	b8 00 00 00 00       	mov    $0x0,%eax
 83fb51e:	84 c0                	test   %al,%al
 83fb520:	74 07                	je     83fb529 <_ZN8WongWork11EventAlttle25CheckAlreadyGetAlttleItemEji+0xb7>
 83fb522:	b8 00 00 00 00       	mov    $0x0,%eax
 83fb527:	eb 05                	jmp    83fb52e <_ZN8WongWork11EventAlttle25CheckAlreadyGetAlttleItemEji+0xbc>
 83fb529:	b8 01 00 00 00       	mov    $0x1,%eax
 83fb52e:	c9                   	leave
 83fb52f:	c3                   	ret

```

```c
// WongWork::EventAlttle::CheckAlreadyGetAlttleItem @ 0x83fb472

/* WongWork::EventAlttle::CheckAlreadyGetAlttleItem(unsigned int, int) */

undefined4 WongWork::EventAlttle::CheckAlreadyGetAlttleItem(uint param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int local_14;
  MySQL *local_10;
  
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  uVar3 = NumberToString(param_1,0);
  MySQL::set_query(local_10,"seLect item_check from event_alttle_info where m_id=%s",uVar3);
  cVar2 = MySQL::exec(local_10,true);
  if (cVar2 == '\x01') {
    local_14 = 0;
    cVar2 = MySQL::get_int(local_10,0,&local_14);
    if ((cVar2 == '\x01') && (local_14 != 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

```

---

## UpdateEventAlttleInfo

```asm
// === 083fb530 WongWork::EventAlttle::UpdateEventAlttleInfo  [0x083fb530-0x83fb594] ===
 83fb530:	55                   	push   %ebp
 83fb531:	89 e5                	mov    %esp,%ebp
 83fb533:	83 ec 28             	sub    $0x28,%esp
 83fb536:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 83fb53b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 83fb542:	00 
 83fb543:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 83fb54a:	00 
 83fb54b:	89 04 24             	mov    %eax,(%esp)
 83fb54e:	e8 eb 9c ff ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 83fb553:	89 45 f4             	mov    %eax,-0xc(%ebp)
 83fb556:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 83fb55d:	00 
 83fb55e:	8b 45 08             	mov    0x8(%ebp),%eax
 83fb561:	89 04 24             	mov    %eax,(%esp)
 83fb564:	e8 e2 da d0 ff       	call   810904b <_Z14NumberToStringji>
 83fb569:	89 44 24 08          	mov    %eax,0x8(%esp)
 83fb56d:	c7 44 24 04 9c 64 c3 	movl   $0x8c3649c,0x4(%esp)
 83fb574:	08 
 83fb575:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83fb578:	89 04 24             	mov    %eax,(%esp)
 83fb57b:	e8 40 8c ff ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 83fb580:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 83fb587:	00 
 83fb588:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83fb58b:	89 04 24             	mov    %eax,(%esp)
 83fb58e:	e8 93 8d ff ff       	call   83f4326 <_ZN5MySQL4execEb>
 83fb593:	c9                   	leave
 83fb594:	c3                   	ret

```

```c
// WongWork::EventAlttle::UpdateEventAlttleInfo @ 0x83fb530

/* WongWork::EventAlttle::UpdateEventAlttleInfo(unsigned int, int) */

void WongWork::EventAlttle::UpdateEventAlttleInfo(uint param_1,int param_2)

{
  MySQL *this;
  undefined4 uVar1;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  uVar1 = NumberToString(param_1,0);
  MySQL::set_query(this,
                   "upDate event_alttle_info set item_check=unix_timestamp(now()) where m_id=%s",
                   uVar1);
  MySQL::exec(this,true);
  return;
}

```

