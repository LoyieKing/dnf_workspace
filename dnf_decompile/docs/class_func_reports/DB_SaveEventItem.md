# DB_SaveEventItem

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## _CheckAlreadyGetYegamItem

```asm
// === 0841a51a DB_SaveEventItem::_CheckAlreadyGetYegamItem  [0x0841a51a-0x841a5e9] ===
 841a51a:	55                   	push   %ebp
 841a51b:	89 e5                	mov    %esp,%ebp
 841a51d:	83 ec 28             	sub    $0x28,%esp
 841a520:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 841a525:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 841a52c:	00 
 841a52d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 841a534:	00 
 841a535:	89 04 24             	mov    %eax,(%esp)
 841a538:	e8 01 ad fd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 841a53d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 841a540:	83 7d 10 01          	cmpl   $0x1,0x10(%ebp)
 841a544:	75 1c                	jne    841a562 <_ZN16DB_SaveEventItem25_CheckAlreadyGetYegamItemEii+0x48>
 841a546:	8b 45 0c             	mov    0xc(%ebp),%eax
 841a549:	89 44 24 08          	mov    %eax,0x8(%esp)
 841a54d:	c7 44 24 04 64 ab c4 	movl   $0x8c4ab64,0x4(%esp)
 841a554:	08 
 841a555:	8b 45 f4             	mov    -0xc(%ebp),%eax
 841a558:	89 04 24             	mov    %eax,(%esp)
 841a55b:	e8 60 9c fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 841a560:	eb 1a                	jmp    841a57c <_ZN16DB_SaveEventItem25_CheckAlreadyGetYegamItemEii+0x62>
 841a562:	8b 45 0c             	mov    0xc(%ebp),%eax
 841a565:	89 44 24 08          	mov    %eax,0x8(%esp)
 841a569:	c7 44 24 04 98 ab c4 	movl   $0x8c4ab98,0x4(%esp)
 841a570:	08 
 841a571:	8b 45 f4             	mov    -0xc(%ebp),%eax
 841a574:	89 04 24             	mov    %eax,(%esp)
 841a577:	e8 44 9c fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 841a57c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 841a583:	00 
 841a584:	8b 45 f4             	mov    -0xc(%ebp),%eax
 841a587:	89 04 24             	mov    %eax,(%esp)
 841a58a:	e8 97 9d fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 841a58f:	83 f0 01             	xor    $0x1,%eax
 841a592:	84 c0                	test   %al,%al
 841a594:	74 07                	je     841a59d <_ZN16DB_SaveEventItem25_CheckAlreadyGetYegamItemEii+0x83>
 841a596:	b8 00 00 00 00       	mov    $0x0,%eax
 841a59b:	eb 4b                	jmp    841a5e8 <_ZN16DB_SaveEventItem25_CheckAlreadyGetYegamItemEii+0xce>
 841a59d:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 841a5a4:	8d 45 f0             	lea    -0x10(%ebp),%eax
 841a5a7:	89 44 24 08          	mov    %eax,0x8(%esp)
 841a5ab:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 841a5b2:	00 
 841a5b3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 841a5b6:	89 04 24             	mov    %eax,(%esp)
 841a5b9:	e8 6e c3 cf ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 841a5be:	83 f0 01             	xor    $0x1,%eax
 841a5c1:	84 c0                	test   %al,%al
 841a5c3:	75 07                	jne    841a5cc <_ZN16DB_SaveEventItem25_CheckAlreadyGetYegamItemEii+0xb2>
 841a5c5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 841a5c8:	85 c0                	test   %eax,%eax
 841a5ca:	75 07                	jne    841a5d3 <_ZN16DB_SaveEventItem25_CheckAlreadyGetYegamItemEii+0xb9>
 841a5cc:	b8 01 00 00 00       	mov    $0x1,%eax
 841a5d1:	eb 05                	jmp    841a5d8 <_ZN16DB_SaveEventItem25_CheckAlreadyGetYegamItemEii+0xbe>
 841a5d3:	b8 00 00 00 00       	mov    $0x0,%eax
 841a5d8:	84 c0                	test   %al,%al
 841a5da:	74 07                	je     841a5e3 <_ZN16DB_SaveEventItem25_CheckAlreadyGetYegamItemEii+0xc9>
 841a5dc:	b8 00 00 00 00       	mov    $0x0,%eax
 841a5e1:	eb 05                	jmp    841a5e8 <_ZN16DB_SaveEventItem25_CheckAlreadyGetYegamItemEii+0xce>
 841a5e3:	b8 01 00 00 00       	mov    $0x1,%eax
 841a5e8:	c9                   	leave
 841a5e9:	c3                   	ret

```

```c
// DB_SaveEventItem::_CheckAlreadyGetYegamItem @ 0x841a51a

/* DB_SaveEventItem::_CheckAlreadyGetYegamItem(int, int) */

undefined4 __thiscall
DB_SaveEventItem::_CheckAlreadyGetYegamItem(DB_SaveEventItem *this,int param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int local_14;
  MySQL *local_10;
  
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  if (param_2 == 1) {
    MySQL::set_query(local_10,"seLect coin_check from event_yegam_info where id=%d",param_1);
  }
  else {
    MySQL::set_query(local_10,"seLect item_check from event_yegam_info where id=%d",param_1);
  }
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

## _HardCodeEventItems

```asm
// === 0841a662 DB_SaveEventItem::_HardCodeEventItems  [0x0841a662-0x841a7e3] ===
 841a662:	55                   	push   %ebp
 841a663:	89 e5                	mov    %esp,%ebp
 841a665:	53                   	push   %ebx
 841a666:	83 ec 34             	sub    $0x34,%esp
 841a669:	8b 45 0c             	mov    0xc(%ebp),%eax
 841a66c:	8b 40 0c             	mov    0xc(%eax),%eax
 841a66f:	3d ae 65 00 00       	cmp    $0x65ae,%eax
 841a674:	74 0a                	je     841a680 <_ZN16DB_SaveEventItem19_HardCodeEventItemsEP18SIG_SAVE_EVENTITEM+0x1e>
 841a676:	b8 00 00 00 00       	mov    $0x0,%eax
 841a67b:	e9 5e 01 00 00       	jmp    841a7de <_ZN16DB_SaveEventItem19_HardCodeEventItemsEP18SIG_SAVE_EVENTITEM+0x17c>
 841a680:	90                   	nop
 841a681:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 841a686:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 841a68d:	00 
 841a68e:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 841a695:	00 
 841a696:	89 04 24             	mov    %eax,(%esp)
 841a699:	e8 a0 ab fd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 841a69e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 841a6a1:	8b 45 0c             	mov    0xc(%ebp),%eax
 841a6a4:	8b 50 0c             	mov    0xc(%eax),%edx
 841a6a7:	8b 45 0c             	mov    0xc(%ebp),%eax
 841a6aa:	8b 40 04             	mov    0x4(%eax),%eax
 841a6ad:	89 54 24 0c          	mov    %edx,0xc(%esp)
 841a6b1:	89 44 24 08          	mov    %eax,0x8(%esp)
 841a6b5:	c7 44 24 04 70 ac c4 	movl   $0x8c4ac70,0x4(%esp)
 841a6bc:	08 
 841a6bd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 841a6c0:	89 04 24             	mov    %eax,(%esp)
 841a6c3:	e8 f8 9a fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 841a6c8:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 841a6cf:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 841a6d6:	00 
 841a6d7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 841a6da:	89 04 24             	mov    %eax,(%esp)
 841a6dd:	e8 44 9c fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 841a6e2:	83 f0 01             	xor    $0x1,%eax
 841a6e5:	84 c0                	test   %al,%al
 841a6e7:	75 49                	jne    841a732 <_ZN16DB_SaveEventItem19_HardCodeEventItemsEP18SIG_SAVE_EVENTITEM+0xd0>
 841a6e9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 841a6ec:	89 04 24             	mov    %eax,(%esp)
 841a6ef:	e8 78 7c cc ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 841a6f4:	85 c0                	test   %eax,%eax
 841a6f6:	74 3a                	je     841a732 <_ZN16DB_SaveEventItem19_HardCodeEventItemsEP18SIG_SAVE_EVENTITEM+0xd0>
 841a6f8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 841a6fb:	89 04 24             	mov    %eax,(%esp)
 841a6fe:	e8 b9 9d fd ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 841a703:	83 f0 01             	xor    $0x1,%eax
 841a706:	84 c0                	test   %al,%al
 841a708:	75 28                	jne    841a732 <_ZN16DB_SaveEventItem19_HardCodeEventItemsEP18SIG_SAVE_EVENTITEM+0xd0>
 841a70a:	8d 45 f0             	lea    -0x10(%ebp),%eax
 841a70d:	89 44 24 08          	mov    %eax,0x8(%esp)
 841a711:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 841a718:	00 
 841a719:	8b 45 f4             	mov    -0xc(%ebp),%eax
 841a71c:	89 04 24             	mov    %eax,(%esp)
 841a71f:	e8 08 c2 cf ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 841a724:	83 f0 01             	xor    $0x1,%eax
 841a727:	84 c0                	test   %al,%al
 841a729:	75 07                	jne    841a732 <_ZN16DB_SaveEventItem19_HardCodeEventItemsEP18SIG_SAVE_EVENTITEM+0xd0>
 841a72b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 841a72e:	85 c0                	test   %eax,%eax
 841a730:	75 07                	jne    841a739 <_ZN16DB_SaveEventItem19_HardCodeEventItemsEP18SIG_SAVE_EVENTITEM+0xd7>
 841a732:	b8 01 00 00 00       	mov    $0x1,%eax
 841a737:	eb 05                	jmp    841a73e <_ZN16DB_SaveEventItem19_HardCodeEventItemsEP18SIG_SAVE_EVENTITEM+0xdc>
 841a739:	b8 00 00 00 00       	mov    $0x0,%eax
 841a73e:	84 c0                	test   %al,%al
 841a740:	74 5c                	je     841a79e <_ZN16DB_SaveEventItem19_HardCodeEventItemsEP18SIG_SAVE_EVENTITEM+0x13c>
 841a742:	8b 45 0c             	mov    0xc(%ebp),%eax
 841a745:	8b 58 08             	mov    0x8(%eax),%ebx
 841a748:	8b 45 0c             	mov    0xc(%ebp),%eax
 841a74b:	8b 48 10             	mov    0x10(%eax),%ecx
 841a74e:	8b 45 0c             	mov    0xc(%ebp),%eax
 841a751:	8b 50 0c             	mov    0xc(%eax),%edx
 841a754:	8b 45 0c             	mov    0xc(%ebp),%eax
 841a757:	8b 40 04             	mov    0x4(%eax),%eax
 841a75a:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 841a75e:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 841a762:	89 54 24 0c          	mov    %edx,0xc(%esp)
 841a766:	89 44 24 08          	mov    %eax,0x8(%esp)
 841a76a:	c7 44 24 04 b4 ac c4 	movl   $0x8c4acb4,0x4(%esp)
 841a771:	08 
 841a772:	8b 45 f4             	mov    -0xc(%ebp),%eax
 841a775:	89 04 24             	mov    %eax,(%esp)
 841a778:	e8 43 9a fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 841a77d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 841a784:	00 
 841a785:	8b 45 f4             	mov    -0xc(%ebp),%eax
 841a788:	89 04 24             	mov    %eax,(%esp)
 841a78b:	e8 96 9b fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 841a790:	83 f0 01             	xor    $0x1,%eax
 841a793:	84 c0                	test   %al,%al
 841a795:	74 42                	je     841a7d9 <_ZN16DB_SaveEventItem19_HardCodeEventItemsEP18SIG_SAVE_EVENTITEM+0x177>
 841a797:	b8 01 00 00 00       	mov    $0x1,%eax
 841a79c:	eb 40                	jmp    841a7de <_ZN16DB_SaveEventItem19_HardCodeEventItemsEP18SIG_SAVE_EVENTITEM+0x17c>
 841a79e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 841a7a1:	89 44 24 08          	mov    %eax,0x8(%esp)
 841a7a5:	c7 44 24 04 40 ad c4 	movl   $0x8c4ad40,0x4(%esp)
 841a7ac:	08 
 841a7ad:	8b 45 f4             	mov    -0xc(%ebp),%eax
 841a7b0:	89 04 24             	mov    %eax,(%esp)
 841a7b3:	e8 08 9a fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 841a7b8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 841a7bf:	00 
 841a7c0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 841a7c3:	89 04 24             	mov    %eax,(%esp)
 841a7c6:	e8 5b 9b fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 841a7cb:	83 f0 01             	xor    $0x1,%eax
 841a7ce:	84 c0                	test   %al,%al
 841a7d0:	74 07                	je     841a7d9 <_ZN16DB_SaveEventItem19_HardCodeEventItemsEP18SIG_SAVE_EVENTITEM+0x177>
 841a7d2:	b8 01 00 00 00       	mov    $0x1,%eax
 841a7d7:	eb 05                	jmp    841a7de <_ZN16DB_SaveEventItem19_HardCodeEventItemsEP18SIG_SAVE_EVENTITEM+0x17c>
 841a7d9:	b8 01 00 00 00       	mov    $0x1,%eax
 841a7de:	83 c4 34             	add    $0x34,%esp
 841a7e1:	5b                   	pop    %ebx
 841a7e2:	5d                   	pop    %ebp
 841a7e3:	c3                   	ret

```

```c
// DB_SaveEventItem::_HardCodeEventItems @ 0x841a662

/* DB_SaveEventItem::_HardCodeEventItems(SIG_SAVE_EVENTITEM*) */

undefined4 __thiscall
DB_SaveEventItem::_HardCodeEventItems(DB_SaveEventItem *this,SIG_SAVE_EVENTITEM *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int local_14;
  MySQL *local_10;
  
  if (*(int *)(param_1 + 0xc) != 0x65ae) {
    return 0;
  }
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  MySQL::set_query(local_10,"seLect id from charac_event_items where charac_no=%d and it_id=%d",
                   *(undefined4 *)(param_1 + 4),uVar4);
  local_14 = 0;
  cVar2 = MySQL::exec(local_10,true);
  if ((((cVar2 == '\x01') && (iVar3 = MySQL::get_n_rows(local_10), iVar3 != 0)) &&
      (cVar2 = MySQL::fetch(local_10), cVar2 == '\x01')) &&
     ((cVar2 = MySQL::get_int(local_10,0,&local_14), cVar2 == '\x01' && (local_14 != 0)))) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    MySQL::set_query(local_10,
                     "inSert into charac_event_items(charac_no,it_id,stack_count,event_code,reg_time,delete_time,delete_flag) values(%d,%d,%d,%d,now(),now(),1)"
                     ,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0xc),
                     *(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 8));
    cVar2 = MySQL::exec(local_10,true);
    if (cVar2 != '\x01') {
      return 1;
    }
  }
  else {
    MySQL::set_query(local_10,"upDate charac_event_items set stack_count=stack_count+1 where id=%d",
                     local_14,uVar4);
    cVar2 = MySQL::exec(local_10,true);
    if (cVar2 != '\x01') {
      return 1;
    }
  }
  return 1;
}

```

---

## _UpdateEventYegamInfo

```asm
// === 0841a5ea DB_SaveEventItem::_UpdateEventYegamInfo  [0x0841a5ea-0x841a661] ===
 841a5ea:	55                   	push   %ebp
 841a5eb:	89 e5                	mov    %esp,%ebp
 841a5ed:	83 ec 28             	sub    $0x28,%esp
 841a5f0:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 841a5f5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 841a5fc:	00 
 841a5fd:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 841a604:	00 
 841a605:	89 04 24             	mov    %eax,(%esp)
 841a608:	e8 31 ac fd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 841a60d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 841a610:	83 7d 10 01          	cmpl   $0x1,0x10(%ebp)
 841a614:	75 1c                	jne    841a632 <_ZN16DB_SaveEventItem21_UpdateEventYegamInfoEii+0x48>
 841a616:	8b 45 0c             	mov    0xc(%ebp),%eax
 841a619:	89 44 24 08          	mov    %eax,0x8(%esp)
 841a61d:	c7 44 24 04 cc ab c4 	movl   $0x8c4abcc,0x4(%esp)
 841a624:	08 
 841a625:	8b 45 f4             	mov    -0xc(%ebp),%eax
 841a628:	89 04 24             	mov    %eax,(%esp)
 841a62b:	e8 90 9b fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 841a630:	eb 1a                	jmp    841a64c <_ZN16DB_SaveEventItem21_UpdateEventYegamInfoEii+0x62>
 841a632:	8b 45 0c             	mov    0xc(%ebp),%eax
 841a635:	89 44 24 08          	mov    %eax,0x8(%esp)
 841a639:	c7 44 24 04 18 ac c4 	movl   $0x8c4ac18,0x4(%esp)
 841a640:	08 
 841a641:	8b 45 f4             	mov    -0xc(%ebp),%eax
 841a644:	89 04 24             	mov    %eax,(%esp)
 841a647:	e8 74 9b fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 841a64c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 841a653:	00 
 841a654:	8b 45 f4             	mov    -0xc(%ebp),%eax
 841a657:	89 04 24             	mov    %eax,(%esp)
 841a65a:	e8 c7 9c fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 841a65f:	c9                   	leave
 841a660:	c3                   	ret
 841a661:	90                   	nop

```

```c
// DB_SaveEventItem::_UpdateEventYegamInfo @ 0x841a5ea

/* DB_SaveEventItem::_UpdateEventYegamInfo(int, int) */

void __thiscall
DB_SaveEventItem::_UpdateEventYegamInfo(DB_SaveEventItem *this,int param_1,int param_2)

{
  MySQL *this_00;
  
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  if (param_2 == 1) {
    MySQL::set_query(this_00,
                     "upDate event_yegam_info set coin_check=unix_timestamp(now()) where id=%d",
                     param_1);
  }
  else {
    MySQL::set_query(this_00,
                     "upDate event_yegam_info set item_check=unix_timestamp(now()) where id=%d and item!=0"
                     ,param_1);
  }
  MySQL::exec(this_00,true);
  return;
}

```

---

## dispatch

```asm
// === 0841a7e4 DB_SaveEventItem::dispatch  [0x0841a7e4-0x841ab2f] ===
 841a7e4:	55                   	push   %ebp
 841a7e5:	89 e5                	mov    %esp,%ebp
 841a7e7:	53                   	push   %ebx
 841a7e8:	83 ec 24             	sub    $0x24,%esp
 841a7eb:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 841a7f0:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 841a7f7:	00 
 841a7f8:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 841a7ff:	00 
 841a800:	89 04 24             	mov    %eax,(%esp)
 841a803:	e8 36 aa fd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 841a808:	89 45 e8             	mov    %eax,-0x18(%ebp)
 841a80b:	8b 45 14             	mov    0x14(%ebp),%eax
 841a80e:	89 04 24             	mov    %eax,(%esp)
 841a811:	e8 06 68 03 00       	call   845101c <_ZN6Stream12GetOutBufferI18SIG_SAVE_EVENTITEMEEPT_v>
 841a816:	89 45 ec             	mov    %eax,-0x14(%ebp)
 841a819:	8b 45 ec             	mov    -0x14(%ebp),%eax
 841a81c:	8b 40 14             	mov    0x14(%eax),%eax
 841a81f:	85 c0                	test   %eax,%eax
 841a821:	0f 84 70 02 00 00    	je     841aa97 <_ZN16DB_SaveEventItem8dispatchEiiP6Stream+0x2b3>
 841a827:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
 841a82b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 841a82e:	8b 40 08             	mov    0x8(%eax),%eax
 841a831:	83 f8 01             	cmp    $0x1,%eax
 841a834:	75 58                	jne    841a88e <_ZN16DB_SaveEventItem8dispatchEiiP6Stream+0xaa>
 841a836:	8b 45 ec             	mov    -0x14(%ebp),%eax
 841a839:	8b 40 0c             	mov    0xc(%eax),%eax
 841a83c:	89 c2                	mov    %eax,%edx
 841a83e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 841a841:	8b 40 14             	mov    0x14(%eax),%eax
 841a844:	89 54 24 08          	mov    %edx,0x8(%esp)
 841a848:	89 44 24 04          	mov    %eax,0x4(%esp)
 841a84c:	8b 45 08             	mov    0x8(%ebp),%eax
 841a84f:	89 04 24             	mov    %eax,(%esp)
 841a852:	e8 c3 fc ff ff       	call   841a51a <_ZN16DB_SaveEventItem25_CheckAlreadyGetYegamItemEii>
 841a857:	84 c0                	test   %al,%al
 841a859:	74 0a                	je     841a865 <_ZN16DB_SaveEventItem8dispatchEiiP6Stream+0x81>
 841a85b:	b8 00 00 00 00       	mov    $0x0,%eax
 841a860:	e9 c5 02 00 00       	jmp    841ab2a <_ZN16DB_SaveEventItem8dispatchEiiP6Stream+0x346>
 841a865:	8b 45 ec             	mov    -0x14(%ebp),%eax
 841a868:	8b 40 0c             	mov    0xc(%eax),%eax
 841a86b:	89 c2                	mov    %eax,%edx
 841a86d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 841a870:	8b 40 14             	mov    0x14(%eax),%eax
 841a873:	89 54 24 08          	mov    %edx,0x8(%esp)
 841a877:	89 44 24 04          	mov    %eax,0x4(%esp)
 841a87b:	8b 45 08             	mov    0x8(%ebp),%eax
 841a87e:	89 04 24             	mov    %eax,(%esp)
 841a881:	e8 64 fd ff ff       	call   841a5ea <_ZN16DB_SaveEventItem21_UpdateEventYegamInfoEii>
 841a886:	88 45 f7             	mov    %al,-0x9(%ebp)
 841a889:	e9 f4 01 00 00       	jmp    841aa82 <_ZN16DB_SaveEventItem8dispatchEiiP6Stream+0x29e>
 841a88e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 841a891:	8b 40 08             	mov    0x8(%eax),%eax
 841a894:	83 f8 02             	cmp    $0x2,%eax
 841a897:	75 4a                	jne    841a8e3 <_ZN16DB_SaveEventItem8dispatchEiiP6Stream+0xff>
 841a899:	8b 45 ec             	mov    -0x14(%ebp),%eax
 841a89c:	8b 40 0c             	mov    0xc(%eax),%eax
 841a89f:	89 c2                	mov    %eax,%edx
 841a8a1:	8b 45 ec             	mov    -0x14(%ebp),%eax
 841a8a4:	8b 40 14             	mov    0x14(%eax),%eax
 841a8a7:	89 54 24 04          	mov    %edx,0x4(%esp)
 841a8ab:	89 04 24             	mov    %eax,(%esp)
 841a8ae:	e8 7b f6 fd ff       	call   83f9f2e <_ZN8WongWork8EventATI22CheckAlreadyGetATIItemEji>
 841a8b3:	84 c0                	test   %al,%al
 841a8b5:	74 0a                	je     841a8c1 <_ZN16DB_SaveEventItem8dispatchEiiP6Stream+0xdd>
 841a8b7:	b8 00 00 00 00       	mov    $0x0,%eax
 841a8bc:	e9 69 02 00 00       	jmp    841ab2a <_ZN16DB_SaveEventItem8dispatchEiiP6Stream+0x346>
 841a8c1:	8b 45 ec             	mov    -0x14(%ebp),%eax
 841a8c4:	8b 40 0c             	mov    0xc(%eax),%eax
 841a8c7:	89 c2                	mov    %eax,%edx
 841a8c9:	8b 45 ec             	mov    -0x14(%ebp),%eax
 841a8cc:	8b 40 14             	mov    0x14(%eax),%eax
 841a8cf:	89 54 24 04          	mov    %edx,0x4(%esp)
 841a8d3:	89 04 24             	mov    %eax,(%esp)
 841a8d6:	e8 d2 f7 fd ff       	call   83fa0ad <_ZN8WongWork8EventATI18UpdateEventATIInfoEji>
 841a8db:	88 45 f7             	mov    %al,-0x9(%ebp)
 841a8de:	e9 9f 01 00 00       	jmp    841aa82 <_ZN16DB_SaveEventItem8dispatchEiiP6Stream+0x29e>
 841a8e3:	8b 45 ec             	mov    -0x14(%ebp),%eax
 841a8e6:	8b 40 08             	mov    0x8(%eax),%eax
 841a8e9:	83 f8 03             	cmp    $0x3,%eax
 841a8ec:	75 4a                	jne    841a938 <_ZN16DB_SaveEventItem8dispatchEiiP6Stream+0x154>
 841a8ee:	8b 45 ec             	mov    -0x14(%ebp),%eax
 841a8f1:	8b 40 0c             	mov    0xc(%eax),%eax
 841a8f4:	89 c2                	mov    %eax,%edx
 841a8f6:	8b 45 ec             	mov    -0x14(%ebp),%eax
 841a8f9:	8b 40 14             	mov    0x14(%eax),%eax
 841a8fc:	89 54 24 04          	mov    %edx,0x4(%esp)
 841a900:	89 04 24             	mov    %eax,(%esp)
 841a903:	e8 94 fd fd ff       	call   83fa69c <_ZN8WongWork11EventSigong25CheckAlreadyGetSigongItemEji>
 841a908:	84 c0                	test   %al,%al
 841a90a:	74 0a                	je     841a916 <_ZN16DB_SaveEventItem8dispatchEiiP6Stream+0x132>
 841a90c:	b8 00 00 00 00       	mov    $0x0,%eax
 841a911:	e9 14 02 00 00       	jmp    841ab2a <_ZN16DB_SaveEventItem8dispatchEiiP6Stream+0x346>
 841a916:	8b 45 ec             	mov    -0x14(%ebp),%eax
 841a919:	8b 40 0c             	mov    0xc(%eax),%eax
 841a91c:	89 c2                	mov    %eax,%edx
 841a91e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 841a921:	8b 40 14             	mov    0x14(%eax),%eax
 841a924:	89 54 24 04          	mov    %edx,0x4(%esp)
 841a928:	89 04 24             	mov    %eax,(%esp)
 841a92b:	e8 75 fe fd ff       	call   83fa7a5 <_ZN8WongWork11EventSigong21UpdateEventSigongInfoEji>
 841a930:	88 45 f7             	mov    %al,-0x9(%ebp)
 841a933:	e9 4a 01 00 00       	jmp    841aa82 <_ZN16DB_SaveEventItem8dispatchEiiP6Stream+0x29e>
 841a938:	8b 45 ec             	mov    -0x14(%ebp),%eax
 841a93b:	8b 40 08             	mov    0x8(%eax),%eax
 841a93e:	83 f8 04             	cmp    $0x4,%eax
 841a941:	75 4a                	jne    841a98d <_ZN16DB_SaveEventItem8dispatchEiiP6Stream+0x1a9>
 841a943:	8b 45 ec             	mov    -0x14(%ebp),%eax
 841a946:	8b 40 0c             	mov    0xc(%eax),%eax
 841a949:	89 c2                	mov    %eax,%edx
 841a94b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 841a94e:	8b 40 14             	mov    0x14(%eax),%eax
 841a951:	89 54 24 04          	mov    %edx,0x4(%esp)
 841a955:	89 04 24             	mov    %eax,(%esp)
 841a958:	e8 b0 02 fe ff       	call   83fac0d <_ZN8WongWork13EventEverland27CheckAlreadyGetEverlandItemEji>
 841a95d:	84 c0                	test   %al,%al
 841a95f:	74 0a                	je     841a96b <_ZN16DB_SaveEventItem8dispatchEiiP6Stream+0x187>
 841a961:	b8 00 00 00 00       	mov    $0x0,%eax
 841a966:	e9 bf 01 00 00       	jmp    841ab2a <_ZN16DB_SaveEventItem8dispatchEiiP6Stream+0x346>
 841a96b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 841a96e:	8b 40 0c             	mov    0xc(%eax),%eax
 841a971:	89 c2                	mov    %eax,%edx
 841a973:	8b 45 ec             	mov    -0x14(%ebp),%eax
 841a976:	8b 40 14             	mov    0x14(%eax),%eax
 841a979:	89 54 24 04          	mov    %edx,0x4(%esp)
 841a97d:	89 04 24             	mov    %eax,(%esp)
 841a980:	e8 5e 03 fe ff       	call   83face3 <_ZN8WongWork13EventEverland23UpdateEventEverlandInfoEji>
 841a985:	88 45 f7             	mov    %al,-0x9(%ebp)
 841a988:	e9 f5 00 00 00       	jmp    841aa82 <_ZN16DB_SaveEventItem8dispatchEiiP6Stream+0x29e>
 841a98d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 841a990:	8b 40 08             	mov    0x8(%eax),%eax
 841a993:	83 f8 05             	cmp    $0x5,%eax
 841a996:	75 4a                	jne    841a9e2 <_ZN16DB_SaveEventItem8dispatchEiiP6Stream+0x1fe>
 841a998:	8b 45 ec             	mov    -0x14(%ebp),%eax
 841a99b:	8b 40 0c             	mov    0xc(%eax),%eax
 841a99e:	89 c2                	mov    %eax,%edx
 841a9a0:	8b 45 ec             	mov    -0x14(%ebp),%eax
 841a9a3:	8b 40 14             	mov    0x14(%eax),%eax
 841a9a6:	89 54 24 04          	mov    %edx,0x4(%esp)
 841a9aa:	89 04 24             	mov    %eax,(%esp)
 841a9ad:	e8 95 06 fe ff       	call   83fb047 <_ZN8WongWork8EventMuz22CheckAlreadyGetMuzItemEji>
 841a9b2:	84 c0                	test   %al,%al
 841a9b4:	74 0a                	je     841a9c0 <_ZN16DB_SaveEventItem8dispatchEiiP6Stream+0x1dc>
 841a9b6:	b8 00 00 00 00       	mov    $0x0,%eax
 841a9bb:	e9 6a 01 00 00       	jmp    841ab2a <_ZN16DB_SaveEventItem8dispatchEiiP6Stream+0x346>
 841a9c0:	8b 45 ec             	mov    -0x14(%ebp),%eax
 841a9c3:	8b 40 0c             	mov    0xc(%eax),%eax
 841a9c6:	89 c2                	mov    %eax,%edx
 841a9c8:	8b 45 ec             	mov    -0x14(%ebp),%eax
 841a9cb:	8b 40 14             	mov    0x14(%eax),%eax
 841a9ce:	89 54 24 04          	mov    %edx,0x4(%esp)
 841a9d2:	89 04 24             	mov    %eax,(%esp)
 841a9d5:	e8 2b 07 fe ff       	call   83fb105 <_ZN8WongWork8EventMuz18UpdateEventMuzInfoEji>
 841a9da:	88 45 f7             	mov    %al,-0x9(%ebp)
 841a9dd:	e9 a0 00 00 00       	jmp    841aa82 <_ZN16DB_SaveEventItem8dispatchEiiP6Stream+0x29e>
 841a9e2:	8b 45 ec             	mov    -0x14(%ebp),%eax
 841a9e5:	8b 40 08             	mov    0x8(%eax),%eax
 841a9e8:	83 f8 06             	cmp    $0x6,%eax
 841a9eb:	75 45                	jne    841aa32 <_ZN16DB_SaveEventItem8dispatchEiiP6Stream+0x24e>
 841a9ed:	8b 45 ec             	mov    -0x14(%ebp),%eax
 841a9f0:	8b 40 0c             	mov    0xc(%eax),%eax
 841a9f3:	89 c2                	mov    %eax,%edx
 841a9f5:	8b 45 ec             	mov    -0x14(%ebp),%eax
 841a9f8:	8b 00                	mov    (%eax),%eax
 841a9fa:	89 54 24 04          	mov    %edx,0x4(%esp)
 841a9fe:	89 04 24             	mov    %eax,(%esp)
 841aa01:	e8 6c 0a fe ff       	call   83fb472 <_ZN8WongWork11EventAlttle25CheckAlreadyGetAlttleItemEji>
 841aa06:	84 c0                	test   %al,%al
 841aa08:	74 0a                	je     841aa14 <_ZN16DB_SaveEventItem8dispatchEiiP6Stream+0x230>
 841aa0a:	b8 00 00 00 00       	mov    $0x0,%eax
 841aa0f:	e9 16 01 00 00       	jmp    841ab2a <_ZN16DB_SaveEventItem8dispatchEiiP6Stream+0x346>
 841aa14:	8b 45 ec             	mov    -0x14(%ebp),%eax
 841aa17:	8b 40 0c             	mov    0xc(%eax),%eax
 841aa1a:	89 c2                	mov    %eax,%edx
 841aa1c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 841aa1f:	8b 00                	mov    (%eax),%eax
 841aa21:	89 54 24 04          	mov    %edx,0x4(%esp)
 841aa25:	89 04 24             	mov    %eax,(%esp)
 841aa28:	e8 03 0b fe ff       	call   83fb530 <_ZN8WongWork11EventAlttle21UpdateEventAlttleInfoEji>
 841aa2d:	88 45 f7             	mov    %al,-0x9(%ebp)
 841aa30:	eb 50                	jmp    841aa82 <_ZN16DB_SaveEventItem8dispatchEiiP6Stream+0x29e>
 841aa32:	8b 45 ec             	mov    -0x14(%ebp),%eax
 841aa35:	8b 40 08             	mov    0x8(%eax),%eax
 841aa38:	83 f8 07             	cmp    $0x7,%eax
 841aa3b:	75 45                	jne    841aa82 <_ZN16DB_SaveEventItem8dispatchEiiP6Stream+0x29e>
 841aa3d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 841aa40:	8b 40 0c             	mov    0xc(%eax),%eax
 841aa43:	89 c2                	mov    %eax,%edx
 841aa45:	8b 45 ec             	mov    -0x14(%ebp),%eax
 841aa48:	8b 40 14             	mov    0x14(%eax),%eax
 841aa4b:	89 54 24 04          	mov    %edx,0x4(%esp)
 841aa4f:	89 04 24             	mov    %eax,(%esp)
 841aa52:	e8 2c 0e fe ff       	call   83fb883 <_ZN8WongWork12EventFCCombo28CheckAlreadyFCComboEventItemEji>
 841aa57:	84 c0                	test   %al,%al
 841aa59:	74 0a                	je     841aa65 <_ZN16DB_SaveEventItem8dispatchEiiP6Stream+0x281>
 841aa5b:	b8 00 00 00 00       	mov    $0x0,%eax
 841aa60:	e9 c5 00 00 00       	jmp    841ab2a <_ZN16DB_SaveEventItem8dispatchEiiP6Stream+0x346>
 841aa65:	8b 45 ec             	mov    -0x14(%ebp),%eax
 841aa68:	8b 40 0c             	mov    0xc(%eax),%eax
 841aa6b:	89 c2                	mov    %eax,%edx
 841aa6d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 841aa70:	8b 40 14             	mov    0x14(%eax),%eax
 841aa73:	89 54 24 04          	mov    %edx,0x4(%esp)
 841aa77:	89 04 24             	mov    %eax,(%esp)
 841aa7a:	e8 aa 0e fe ff       	call   83fb929 <_ZN8WongWork12EventFCCombo22UpdateFCComboEventInfoEji>
 841aa7f:	88 45 f7             	mov    %al,-0x9(%ebp)
 841aa82:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 841aa86:	83 f0 01             	xor    $0x1,%eax
 841aa89:	84 c0                	test   %al,%al
 841aa8b:	74 0a                	je     841aa97 <_ZN16DB_SaveEventItem8dispatchEiiP6Stream+0x2b3>
 841aa8d:	b8 00 00 00 00       	mov    $0x0,%eax
 841aa92:	e9 93 00 00 00       	jmp    841ab2a <_ZN16DB_SaveEventItem8dispatchEiiP6Stream+0x346>
 841aa97:	8b 45 ec             	mov    -0x14(%ebp),%eax
 841aa9a:	89 44 24 04          	mov    %eax,0x4(%esp)
 841aa9e:	8b 45 08             	mov    0x8(%ebp),%eax
 841aaa1:	89 04 24             	mov    %eax,(%esp)
 841aaa4:	e8 b9 fb ff ff       	call   841a662 <_ZN16DB_SaveEventItem19_HardCodeEventItemsEP18SIG_SAVE_EVENTITEM>
 841aaa9:	84 c0                	test   %al,%al
 841aaab:	74 07                	je     841aab4 <_ZN16DB_SaveEventItem8dispatchEiiP6Stream+0x2d0>
 841aaad:	b8 01 00 00 00       	mov    $0x1,%eax
 841aab2:	eb 76                	jmp    841ab2a <_ZN16DB_SaveEventItem8dispatchEiiP6Stream+0x346>
 841aab4:	8b 45 ec             	mov    -0x14(%ebp),%eax
 841aab7:	0f b6 40 18          	movzbl 0x18(%eax),%eax
 841aabb:	84 c0                	test   %al,%al
 841aabd:	74 07                	je     841aac6 <_ZN16DB_SaveEventItem8dispatchEiiP6Stream+0x2e2>
 841aabf:	b8 01 00 00 00       	mov    $0x1,%eax
 841aac4:	eb 64                	jmp    841ab2a <_ZN16DB_SaveEventItem8dispatchEiiP6Stream+0x346>
 841aac6:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 841aacd:	8b 45 ec             	mov    -0x14(%ebp),%eax
 841aad0:	8b 58 08             	mov    0x8(%eax),%ebx
 841aad3:	8b 45 ec             	mov    -0x14(%ebp),%eax
 841aad6:	8b 48 10             	mov    0x10(%eax),%ecx
 841aad9:	8b 45 ec             	mov    -0x14(%ebp),%eax
 841aadc:	8b 50 0c             	mov    0xc(%eax),%edx
 841aadf:	8b 45 ec             	mov    -0x14(%ebp),%eax
 841aae2:	8b 40 04             	mov    0x4(%eax),%eax
 841aae5:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 841aae9:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 841aaed:	89 54 24 04          	mov    %edx,0x4(%esp)
 841aaf1:	89 04 24             	mov    %eax,(%esp)
 841aaf4:	e8 5b f0 fd ff       	call   83f9b54 <_ZN8WongWork11EventCommon26InsertEventItem2EventTableEjjjj>
 841aaf9:	89 45 f0             	mov    %eax,-0x10(%ebp)
 841aafc:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 841ab00:	0f 95 c0             	setne  %al
 841ab03:	84 c0                	test   %al,%al
 841ab05:	74 1e                	je     841ab25 <_ZN16DB_SaveEventItem8dispatchEiiP6Stream+0x341>
 841ab07:	8b 45 ec             	mov    -0x14(%ebp),%eax
 841ab0a:	8b 50 04             	mov    0x4(%eax),%edx
 841ab0d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 841ab10:	8b 00                	mov    (%eax),%eax
 841ab12:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 841ab15:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 841ab19:	89 54 24 04          	mov    %edx,0x4(%esp)
 841ab1d:	89 04 24             	mov    %eax,(%esp)
 841ab20:	e8 56 f1 fd ff       	call   83f9c7b <_ZN8WongWork11EventCommon19LoadCharacEventItemEjjj>
 841ab25:	b8 01 00 00 00       	mov    $0x1,%eax
 841ab2a:	83 c4 24             	add    $0x24,%esp
 841ab2d:	5b                   	pop    %ebx
 841ab2e:	5d                   	pop    %ebp
 841ab2f:	c3                   	ret

```

```c
// DB_SaveEventItem::dispatch @ 0x841a7e4

/* DB_SaveEventItem::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_SaveEventItem::dispatch(DB_SaveEventItem *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  SIG_SAVE_EVENTITEM *pSVar2;
  uint uVar3;
  char local_d;
  
  DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  pSVar2 = Stream::GetOutBuffer<SIG_SAVE_EVENTITEM>(param_3);
  if (*(int *)(pSVar2 + 0x14) != 0) {
    local_d = '\0';
    if (*(int *)(pSVar2 + 8) == 1) {
      cVar1 = _CheckAlreadyGetYegamItem(this,*(int *)(pSVar2 + 0x14),*(int *)(pSVar2 + 0xc));
      if (cVar1 != '\0') {
        return 0;
      }
      local_d = _UpdateEventYegamInfo(this,*(int *)(pSVar2 + 0x14),*(int *)(pSVar2 + 0xc));
    }
    else if (*(int *)(pSVar2 + 8) == 2) {
      cVar1 = WongWork::EventATI::CheckAlreadyGetATIItem
                        (*(uint *)(pSVar2 + 0x14),*(int *)(pSVar2 + 0xc));
      if (cVar1 != '\0') {
        return 0;
      }
      local_d = WongWork::EventATI::UpdateEventATIInfo
                          (*(uint *)(pSVar2 + 0x14),*(int *)(pSVar2 + 0xc));
    }
    else if (*(int *)(pSVar2 + 8) == 3) {
      cVar1 = WongWork::EventSigong::CheckAlreadyGetSigongItem
                        (*(uint *)(pSVar2 + 0x14),*(int *)(pSVar2 + 0xc));
      if (cVar1 != '\0') {
        return 0;
      }
      local_d = WongWork::EventSigong::UpdateEventSigongInfo
                          (*(uint *)(pSVar2 + 0x14),*(int *)(pSVar2 + 0xc));
    }
    else if (*(int *)(pSVar2 + 8) == 4) {
      cVar1 = WongWork::EventEverland::CheckAlreadyGetEverlandItem
                        (*(uint *)(pSVar2 + 0x14),*(int *)(pSVar2 + 0xc));
      if (cVar1 != '\0') {
        return 0;
      }
      local_d = WongWork::EventEverland::UpdateEventEverlandInfo
                          (*(uint *)(pSVar2 + 0x14),*(int *)(pSVar2 + 0xc));
    }
    else if (*(int *)(pSVar2 + 8) == 5) {
      cVar1 = WongWork::EventMuz::CheckAlreadyGetMuzItem
                        (*(uint *)(pSVar2 + 0x14),*(int *)(pSVar2 + 0xc));
      if (cVar1 != '\0') {
        return 0;
      }
      local_d = WongWork::EventMuz::UpdateEventMuzInfo
                          (*(uint *)(pSVar2 + 0x14),*(int *)(pSVar2 + 0xc));
    }
    else if (*(int *)(pSVar2 + 8) == 6) {
      cVar1 = WongWork::EventAlttle::CheckAlreadyGetAlttleItem
                        (*(uint *)pSVar2,*(int *)(pSVar2 + 0xc));
      if (cVar1 != '\0') {
        return 0;
      }
      local_d = WongWork::EventAlttle::UpdateEventAlttleInfo(*(uint *)pSVar2,*(int *)(pSVar2 + 0xc))
      ;
    }
    else if (*(int *)(pSVar2 + 8) == 7) {
      cVar1 = WongWork::EventFCCombo::CheckAlreadyFCComboEventItem
                        (*(uint *)(pSVar2 + 0x14),*(int *)(pSVar2 + 0xc));
      if (cVar1 != '\0') {
        return 0;
      }
      local_d = WongWork::EventFCCombo::UpdateFCComboEventInfo
                          (*(uint *)(pSVar2 + 0x14),*(int *)(pSVar2 + 0xc));
    }
    if (local_d != '\x01') {
      return 0;
    }
  }
  cVar1 = _HardCodeEventItems(this,pSVar2);
  if (((cVar1 == '\0') && (pSVar2[0x18] == (SIG_SAVE_EVENTITEM)0x0)) &&
     (uVar3 = WongWork::EventCommon::InsertEventItem2EventTable
                        (*(uint *)(pSVar2 + 4),*(uint *)(pSVar2 + 0xc),*(uint *)(pSVar2 + 0x10),
                         *(uint *)(pSVar2 + 8)), uVar3 != 0)) {
    WongWork::EventCommon::LoadCharacEventItem(*(uint *)pSVar2,*(uint *)(pSVar2 + 4),uVar3);
  }
  return 1;
}

```

