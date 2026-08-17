# DB_SaveItemDictionaryFlag

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 0844547e DB_SaveItemDictionaryFlag::dispatch  [0x0844547e-0x844565f] ===
 844547e:	55                   	push   %ebp
 844547f:	89 e5                	mov    %esp,%ebp
 8445481:	83 ec 38             	sub    $0x38,%esp
 8445484:	8b 45 14             	mov    0x14(%ebp),%eax
 8445487:	89 04 24             	mov    %eax,(%esp)
 844548a:	e8 fb ec 00 00       	call   845418a <_ZN6Stream12GetOutBufferI24SIG_ITEM_DICTIONARY_FLAGEEPT_v>
 844548f:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8445492:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 8445496:	75 0a                	jne    84454a2 <_ZN25DB_SaveItemDictionaryFlag8dispatchEiiP6Stream+0x24>
 8445498:	b8 00 00 00 00       	mov    $0x0,%eax
 844549d:	e9 bc 01 00 00       	jmp    844565e <_ZN25DB_SaveItemDictionaryFlag8dispatchEiiP6Stream+0x1e0>
 84454a2:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 84454a7:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84454ae:	00 
 84454af:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84454b6:	00 
 84454b7:	89 04 24             	mov    %eax,(%esp)
 84454ba:	e8 7f fd fa ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 84454bf:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84454c2:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
 84454c6:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 84454cd:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84454d0:	83 c0 04             	add    $0x4,%eax
 84454d3:	8d 55 e8             	lea    -0x18(%ebp),%edx
 84454d6:	89 54 24 10          	mov    %edx,0x10(%esp)
 84454da:	c7 44 24 0c 88 13 00 	movl   $0x1388,0xc(%esp)
 84454e1:	00 
 84454e2:	89 44 24 08          	mov    %eax,0x8(%esp)
 84454e6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84454ed:	00 
 84454ee:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84454f1:	89 04 24             	mov    %eax,(%esp)
 84454f4:	e8 0d 68 fb ff       	call   83fbd06 <_Z24put_compressed_blob_dataP5MySQLiPciPS1_>
 84454f9:	88 45 f7             	mov    %al,-0x9(%ebp)
 84454fc:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 8445500:	83 f0 01             	xor    $0x1,%eax
 8445503:	84 c0                	test   %al,%al
 8445505:	74 47                	je     844554e <_ZN25DB_SaveItemDictionaryFlag8dispatchEiiP6Stream+0xd0>
 8445507:	8b 45 ec             	mov    -0x14(%ebp),%eax
 844550a:	8b 00                	mov    (%eax),%eax
 844550c:	89 44 24 18          	mov    %eax,0x18(%esp)
 8445510:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 8445517:	00 
 8445518:	c7 44 24 10 54 74 c5 	movl   $0x8c57454,0x10(%esp)
 844551f:	08 
 8445520:	c7 44 24 0c 56 ac 00 	movl   $0xac56,0xc(%esp)
 8445527:	00 
 8445528:	c7 44 24 08 e0 b3 c5 	movl   $0x8c5b3e0,0x8(%esp)
 844552f:	08 
 8445530:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8445537:	08 
 8445538:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 844553f:	e8 c6 e6 68 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8445544:	b8 00 00 00 00       	mov    $0x0,%eax
 8445549:	e9 10 01 00 00       	jmp    844565e <_ZN25DB_SaveItemDictionaryFlag8dispatchEiiP6Stream+0x1e0>
 844554e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8445551:	8b 10                	mov    (%eax),%edx
 8445553:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8445556:	89 54 24 0c          	mov    %edx,0xc(%esp)
 844555a:	89 44 24 08          	mov    %eax,0x8(%esp)
 844555e:	c7 44 24 04 9c 74 c5 	movl   $0x8c5749c,0x4(%esp)
 8445565:	08 
 8445566:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8445569:	89 04 24             	mov    %eax,(%esp)
 844556c:	e8 4f ec fa ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8445571:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8445578:	00 
 8445579:	8b 45 f0             	mov    -0x10(%ebp),%eax
 844557c:	89 04 24             	mov    %eax,(%esp)
 844557f:	e8 a2 ed fa ff       	call   83f4326 <_ZN5MySQL4execEb>
 8445584:	83 f0 01             	xor    $0x1,%eax
 8445587:	84 c0                	test   %al,%al
 8445589:	74 3f                	je     84455ca <_ZN25DB_SaveItemDictionaryFlag8dispatchEiiP6Stream+0x14c>
 844558b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 844558e:	8b 00                	mov    (%eax),%eax
 8445590:	89 44 24 14          	mov    %eax,0x14(%esp)
 8445594:	c7 44 24 10 e0 74 c5 	movl   $0x8c574e0,0x10(%esp)
 844559b:	08 
 844559c:	c7 44 24 0c 5e ac 00 	movl   $0xac5e,0xc(%esp)
 84455a3:	00 
 84455a4:	c7 44 24 08 e0 b3 c5 	movl   $0x8c5b3e0,0x8(%esp)
 84455ab:	08 
 84455ac:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 84455b3:	08 
 84455b4:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84455bb:	e8 4a e6 68 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84455c0:	b8 00 00 00 00       	mov    $0x0,%eax
 84455c5:	e9 94 00 00 00       	jmp    844565e <_ZN25DB_SaveItemDictionaryFlag8dispatchEiiP6Stream+0x1e0>
 84455ca:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84455cd:	89 04 24             	mov    %eax,(%esp)
 84455d0:	e8 3b ed fa ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 84455d5:	09 d0                	or     %edx,%eax
 84455d7:	85 c0                	test   %eax,%eax
 84455d9:	0f 94 c0             	sete   %al
 84455dc:	84 c0                	test   %al,%al
 84455de:	74 79                	je     8445659 <_ZN25DB_SaveItemDictionaryFlag8dispatchEiiP6Stream+0x1db>
 84455e0:	8b 55 e8             	mov    -0x18(%ebp),%edx
 84455e3:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84455e6:	8b 00                	mov    (%eax),%eax
 84455e8:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84455ec:	89 44 24 08          	mov    %eax,0x8(%esp)
 84455f0:	c7 44 24 04 1c 75 c5 	movl   $0x8c5751c,0x4(%esp)
 84455f7:	08 
 84455f8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84455fb:	89 04 24             	mov    %eax,(%esp)
 84455fe:	e8 bd eb fa ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8445603:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 844560a:	00 
 844560b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 844560e:	89 04 24             	mov    %eax,(%esp)
 8445611:	e8 10 ed fa ff       	call   83f4326 <_ZN5MySQL4execEb>
 8445616:	83 f0 01             	xor    $0x1,%eax
 8445619:	84 c0                	test   %al,%al
 844561b:	74 3c                	je     8445659 <_ZN25DB_SaveItemDictionaryFlag8dispatchEiiP6Stream+0x1db>
 844561d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8445620:	8b 00                	mov    (%eax),%eax
 8445622:	89 44 24 14          	mov    %eax,0x14(%esp)
 8445626:	c7 44 24 10 64 75 c5 	movl   $0x8c57564,0x10(%esp)
 844562d:	08 
 844562e:	c7 44 24 0c 67 ac 00 	movl   $0xac67,0xc(%esp)
 8445635:	00 
 8445636:	c7 44 24 08 e0 b3 c5 	movl   $0x8c5b3e0,0x8(%esp)
 844563d:	08 
 844563e:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8445645:	08 
 8445646:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 844564d:	e8 b8 e5 68 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8445652:	b8 00 00 00 00       	mov    $0x0,%eax
 8445657:	eb 05                	jmp    844565e <_ZN25DB_SaveItemDictionaryFlag8dispatchEiiP6Stream+0x1e0>
 8445659:	b8 01 00 00 00       	mov    $0x1,%eax
 844565e:	c9                   	leave
 844565f:	c3                   	ret

```

```c
// DB_SaveItemDictionaryFlag::dispatch @ 0x844547e

/* DB_SaveItemDictionaryFlag::dispatch(int, int, Stream*) */

undefined4 DB_SaveItemDictionaryFlag::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  Stream *in_stack_00000010;
  char *local_1c;
  SIG_ITEM_DICTIONARY_FLAG *local_18;
  MySQL *local_14;
  char local_d;
  
  local_18 = Stream::GetOutBuffer<SIG_ITEM_DICTIONARY_FLAG>(in_stack_00000010);
  if (local_18 == (SIG_ITEM_DICTIONARY_FLAG *)0x0) {
    uVar2 = 0;
  }
  else {
    local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
    local_d = 0;
    local_1c = (char *)0x0;
    local_d = put_compressed_blob_data(local_14,0,(char *)(local_18 + 4),5000,&local_1c);
    if (local_d == '\x01') {
      MySQL::set_query(local_14,"upDate charac_item_stat set check_flag = \'%s\' where charac_no=%u"
                       ,local_1c,*(undefined4 *)local_18);
      cVar1 = MySQL::exec(local_14,true);
      if (cVar1 == '\x01') {
        lVar3 = MySQL::getAffectedRowCount(local_14);
        if (lVar3 == 0) {
          MySQL::set_query(local_14,
                           "inSert into charac_item_stat(charac_no, check_flag) values(%u, \'%s\')",
                           *(undefined4 *)local_18,local_1c);
          cVar1 = MySQL::exec(local_14,true);
          if (cVar1 != '\x01') {
            LogManager::logFormat
                      (1,"DBThread.cpp",
                       "virtual bool DB_SaveItemDictionaryFlag::dispatch(int, int, Stream*)",0xac67,
                       "DB_SaveItemDictionaryFalg->inSert Query ERROR charac_no=%u",
                       *(undefined4 *)local_18);
            return 0;
          }
        }
        uVar2 = 1;
      }
      else {
        LogManager::logFormat
                  (1,"DBThread.cpp",
                   "virtual bool DB_SaveItemDictionaryFlag::dispatch(int, int, Stream*)",0xac5e,
                   "DB_SaveItemDictionaryFalg->upDate Query ERROR charac_no=%u",
                   *(undefined4 *)local_18);
        uVar2 = 0;
      }
    }
    else {
      LogManager::logFormat
                (1,"DBThread.cpp",
                 "virtual bool DB_SaveItemDictionaryFlag::dispatch(int, int, Stream*)",0xac56,
                 "DB_SaveItemDictionaryFalg::dispatch compress_zip(%u) ERROR charac_no=%u",0,
                 *(undefined4 *)local_18);
      uVar2 = 0;
    }
  }
  return uVar2;
}

```

