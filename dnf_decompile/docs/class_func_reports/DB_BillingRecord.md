# DB_BillingRecord

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## InsertBuyUser

```asm
// === 08424602 DB_BillingRecord::InsertBuyUser  [0x08424602-0x84247df] ===
 8424602:	55                   	push   %ebp
 8424603:	89 e5                	mov    %esp,%ebp
 8424605:	53                   	push   %ebx
 8424606:	83 ec 34             	sub    $0x34,%esp
 8424609:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 842460e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8424615:	00 
 8424616:	c7 44 24 04 07 00 00 	movl   $0x7,0x4(%esp)
 842461d:	00 
 842461e:	89 04 24             	mov    %eax,(%esp)
 8424621:	e8 18 0c fd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8424626:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8424629:	8b 45 10             	mov    0x10(%ebp),%eax
 842462c:	c6 00 00             	movb   $0x0,(%eax)
 842462f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8424632:	8b 50 2d             	mov    0x2d(%eax),%edx
 8424635:	8b 45 0c             	mov    0xc(%ebp),%eax
 8424638:	8d 58 56             	lea    0x56(%eax),%ebx
 842463b:	8b 45 0c             	mov    0xc(%ebp),%eax
 842463e:	8b 40 52             	mov    0x52(%eax),%eax
 8424641:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8424644:	83 c1 35             	add    $0x35,%ecx
 8424647:	89 54 24 14          	mov    %edx,0x14(%esp)
 842464b:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 842464f:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8424653:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8424657:	c7 44 24 04 fc db c4 	movl   $0x8c4dbfc,0x4(%esp)
 842465e:	08 
 842465f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8424662:	89 04 24             	mov    %eax,(%esp)
 8424665:	e8 56 fb fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 842466a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8424671:	00 
 8424672:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8424675:	89 04 24             	mov    %eax,(%esp)
 8424678:	e8 a9 fc fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 842467d:	83 f0 01             	xor    $0x1,%eax
 8424680:	84 c0                	test   %al,%al
 8424682:	74 3b                	je     84246bf <_ZN16DB_BillingRecord13InsertBuyUserEP18SIG_BILLING_RECORDRb+0xbd>
 8424684:	8b 45 0c             	mov    0xc(%ebp),%eax
 8424687:	8b 40 2d             	mov    0x2d(%eax),%eax
 842468a:	89 44 24 14          	mov    %eax,0x14(%esp)
 842468e:	c7 44 24 10 6c dc c4 	movl   $0x8c4dc6c,0x10(%esp)
 8424695:	08 
 8424696:	c7 44 24 0c 17 61 00 	movl   $0x6117,0xc(%esp)
 842469d:	00 
 842469e:	c7 44 24 08 80 c5 c5 	movl   $0x8c5c580,0x8(%esp)
 84246a5:	08 
 84246a6:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 84246ad:	08 
 84246ae:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84246b5:	e8 50 f5 6a 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84246ba:	e9 1b 01 00 00       	jmp    84247da <_ZN16DB_BillingRecord13InsertBuyUserEP18SIG_BILLING_RECORDRb+0x1d8>
 84246bf:	8b 45 0c             	mov    0xc(%ebp),%eax
 84246c2:	8b 40 2d             	mov    0x2d(%eax),%eax
 84246c5:	89 44 24 08          	mov    %eax,0x8(%esp)
 84246c9:	c7 44 24 04 9c dc c4 	movl   $0x8c4dc9c,0x4(%esp)
 84246d0:	08 
 84246d1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84246d4:	89 04 24             	mov    %eax,(%esp)
 84246d7:	e8 e4 fa fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84246dc:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84246e3:	00 
 84246e4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84246e7:	89 04 24             	mov    %eax,(%esp)
 84246ea:	e8 37 fc fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 84246ef:	83 f0 01             	xor    $0x1,%eax
 84246f2:	84 c0                	test   %al,%al
 84246f4:	74 3b                	je     8424731 <_ZN16DB_BillingRecord13InsertBuyUserEP18SIG_BILLING_RECORDRb+0x12f>
 84246f6:	8b 45 0c             	mov    0xc(%ebp),%eax
 84246f9:	8b 40 2d             	mov    0x2d(%eax),%eax
 84246fc:	89 44 24 14          	mov    %eax,0x14(%esp)
 8424700:	c7 44 24 10 d4 dc c4 	movl   $0x8c4dcd4,0x10(%esp)
 8424707:	08 
 8424708:	c7 44 24 0c 20 61 00 	movl   $0x6120,0xc(%esp)
 842470f:	00 
 8424710:	c7 44 24 08 80 c5 c5 	movl   $0x8c5c580,0x8(%esp)
 8424717:	08 
 8424718:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 842471f:	08 
 8424720:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8424727:	e8 de f4 6a 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 842472c:	e9 a9 00 00 00       	jmp    84247da <_ZN16DB_BillingRecord13InsertBuyUserEP18SIG_BILLING_RECORDRb+0x1d8>
 8424731:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8424734:	89 04 24             	mov    %eax,(%esp)
 8424737:	e8 30 dc cb ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 842473c:	85 c0                	test   %eax,%eax
 842473e:	0f 94 c0             	sete   %al
 8424741:	84 c0                	test   %al,%al
 8424743:	0f 84 91 00 00 00    	je     84247da <_ZN16DB_BillingRecord13InsertBuyUserEP18SIG_BILLING_RECORDRb+0x1d8>
 8424749:	8b 45 0c             	mov    0xc(%ebp),%eax
 842474c:	8d 58 56             	lea    0x56(%eax),%ebx
 842474f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8424752:	8b 50 52             	mov    0x52(%eax),%edx
 8424755:	8b 45 0c             	mov    0xc(%ebp),%eax
 8424758:	8d 48 35             	lea    0x35(%eax),%ecx
 842475b:	8b 45 0c             	mov    0xc(%ebp),%eax
 842475e:	8b 40 2d             	mov    0x2d(%eax),%eax
 8424761:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 8424765:	89 54 24 10          	mov    %edx,0x10(%esp)
 8424769:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 842476d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8424771:	c7 44 24 04 04 dd c4 	movl   $0x8c4dd04,0x4(%esp)
 8424778:	08 
 8424779:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842477c:	89 04 24             	mov    %eax,(%esp)
 842477f:	e8 3c fa fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8424784:	8b 45 10             	mov    0x10(%ebp),%eax
 8424787:	c6 00 01             	movb   $0x1,(%eax)
 842478a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8424791:	00 
 8424792:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8424795:	89 04 24             	mov    %eax,(%esp)
 8424798:	e8 89 fb fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 842479d:	83 f0 01             	xor    $0x1,%eax
 84247a0:	84 c0                	test   %al,%al
 84247a2:	74 36                	je     84247da <_ZN16DB_BillingRecord13InsertBuyUserEP18SIG_BILLING_RECORDRb+0x1d8>
 84247a4:	8b 45 0c             	mov    0xc(%ebp),%eax
 84247a7:	8b 40 2d             	mov    0x2d(%eax),%eax
 84247aa:	89 44 24 14          	mov    %eax,0x14(%esp)
 84247ae:	c7 44 24 10 8c dd c4 	movl   $0x8c4dd8c,0x10(%esp)
 84247b5:	08 
 84247b6:	c7 44 24 0c 34 61 00 	movl   $0x6134,0xc(%esp)
 84247bd:	00 
 84247be:	c7 44 24 08 80 c5 c5 	movl   $0x8c5c580,0x8(%esp)
 84247c5:	08 
 84247c6:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 84247cd:	08 
 84247ce:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84247d5:	e8 30 f4 6a 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84247da:	83 c4 34             	add    $0x34,%esp
 84247dd:	5b                   	pop    %ebx
 84247de:	5d                   	pop    %ebp
 84247df:	c3                   	ret

```

```c
// DB_BillingRecord::InsertBuyUser @ 0x8424602

/* DB_BillingRecord::InsertBuyUser(SIG_BILLING_RECORD*, bool&) */

void __thiscall
DB_BillingRecord::InsertBuyUser(DB_BillingRecord *this,SIG_BILLING_RECORD *param_1,bool *param_2)

{
  char cVar1;
  MySQL *this_00;
  int iVar2;
  undefined4 uVar3;
  SIG_BILLING_RECORD *pSVar4;
  undefined4 uVar5;
  
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,7,0);
  *param_2 = false;
  uVar5 = *(undefined4 *)(param_1 + 0x2d);
  pSVar4 = param_1 + 0x56;
  uVar3 = *(undefined4 *)(param_1 + 0x52);
  MySQL::set_query(this_00,
                   " upDate prod_buy_user  set user_id = \'%s\', sex = %d, birthday = \'%s\', last_buy_time = now()  where m_id = %d "
                   ,param_1 + 0x35,uVar3,pSVar4,uVar5);
  cVar1 = MySQL::exec(this_00,true);
  if (cVar1 == '\x01') {
    MySQL::set_query(this_00,"seLect m_id, user_id from prod_buy_user where m_id = %d",
                     *(undefined4 *)(param_1 + 0x2d),uVar3,pSVar4,uVar5);
    cVar1 = MySQL::exec(this_00,true);
    if (cVar1 == '\x01') {
      iVar2 = MySQL::get_n_rows(this_00);
      if (iVar2 == 0) {
        MySQL::set_query(this_00,
                         " inSert into prod_buy_user ( m_id, user_id, sex, birthday, first_buy_time, last_buy_time )  values(%d, \'%s\', %d, \'%s\', now(), now() ) "
                         ,*(undefined4 *)(param_1 + 0x2d),param_1 + 0x35,
                         *(undefined4 *)(param_1 + 0x52),param_1 + 0x56);
        *param_2 = true;
        cVar1 = MySQL::exec(this_00,true);
        if (cVar1 != '\x01') {
          LogManager::logFormat
                    (1,"DBThread.cpp",
                     "void DB_BillingRecord::InsertBuyUser(SIG_BILLING_RECORD*, bool&)",0x6134,
                     "[QUERY_ERROR] (inSert into prod_buy_user m_id:%d)",
                     *(undefined4 *)(param_1 + 0x2d));
        }
      }
    }
    else {
      LogManager::logFormat
                (1,"DBThread.cpp","void DB_BillingRecord::InsertBuyUser(SIG_BILLING_RECORD*, bool&)"
                 ,0x6120,"[QUERY_ERROR] (seLect prod_buy_user m_id:%d)",
                 *(undefined4 *)(param_1 + 0x2d));
    }
  }
  else {
    LogManager::logFormat
              (1,"DBThread.cpp","void DB_BillingRecord::InsertBuyUser(SIG_BILLING_RECORD*, bool&)",
               0x6117,"[QUERY_ERROR] (upDate prod_buy_user m_id:%d)",*(undefined4 *)(param_1 + 0x2d)
              );
  }
  return;
}

```

---

## InsertSaleEntry

```asm
// === 084247e0 DB_BillingRecord::InsertSaleEntry  [0x084247e0-0x8424ce5] ===
 84247e0:	55                   	push   %ebp
 84247e1:	89 e5                	mov    %esp,%ebp
 84247e3:	57                   	push   %edi
 84247e4:	56                   	push   %esi
 84247e5:	53                   	push   %ebx
 84247e6:	81 ec 6c 01 00 00    	sub    $0x16c,%esp
 84247ec:	8b 45 10             	mov    0x10(%ebp),%eax
 84247ef:	88 45 a4             	mov    %al,-0x5c(%ebp)
 84247f2:	c7 45 df 00 00 00 00 	movl   $0x0,-0x21(%ebp)
 84247f9:	c6 45 e3 00          	movb   $0x0,-0x1d(%ebp)
 84247fd:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8424800:	89 04 24             	mov    %eax,(%esp)
 8424803:	e8 48 8f c5 ff       	call   807d750 <time@plt>
 8424808:	8d 45 ac             	lea    -0x54(%ebp),%eax
 842480b:	89 44 24 04          	mov    %eax,0x4(%esp)
 842480f:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8424812:	89 04 24             	mov    %eax,(%esp)
 8424815:	e8 46 9b c5 ff       	call   807e360 <localtime_r@plt>
 842481a:	8b 4d bc             	mov    -0x44(%ebp),%ecx
 842481d:	ba 56 55 55 55       	mov    $0x55555556,%edx
 8424822:	89 c8                	mov    %ecx,%eax
 8424824:	f7 ea                	imul   %edx
 8424826:	89 c8                	mov    %ecx,%eax
 8424828:	c1 f8 1f             	sar    $0x1f,%eax
 842482b:	89 d1                	mov    %edx,%ecx
 842482d:	29 c1                	sub    %eax,%ecx
 842482f:	89 c8                	mov    %ecx,%eax
 8424831:	8d 58 01             	lea    0x1(%eax),%ebx
 8424834:	8b 45 c0             	mov    -0x40(%ebp),%eax
 8424837:	8d 88 6c 07 00 00    	lea    0x76c(%eax),%ecx
 842483d:	ba d3 4d 62 10       	mov    $0x10624dd3,%edx
 8424842:	89 c8                	mov    %ecx,%eax
 8424844:	f7 ea                	imul   %edx
 8424846:	c1 fa 07             	sar    $0x7,%edx
 8424849:	89 c8                	mov    %ecx,%eax
 842484b:	c1 f8 1f             	sar    $0x1f,%eax
 842484e:	89 d6                	mov    %edx,%esi
 8424850:	29 c6                	sub    %eax,%esi
 8424852:	89 f0                	mov    %esi,%eax
 8424854:	69 c0 d0 07 00 00    	imul   $0x7d0,%eax,%eax
 842485a:	89 ca                	mov    %ecx,%edx
 842485c:	29 c2                	sub    %eax,%edx
 842485e:	89 d0                	mov    %edx,%eax
 8424860:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8424864:	89 44 24 08          	mov    %eax,0x8(%esp)
 8424868:	c7 44 24 04 be dd c4 	movl   $0x8c4ddbe,0x4(%esp)
 842486f:	08 
 8424870:	8d 45 df             	lea    -0x21(%ebp),%eax
 8424873:	89 04 24             	mov    %eax,(%esp)
 8424876:	e8 c5 9b c5 ff       	call   807e440 <sprintf@plt>
 842487b:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8424880:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8424887:	00 
 8424888:	c7 44 24 04 07 00 00 	movl   $0x7,0x4(%esp)
 842488f:	00 
 8424890:	89 04 24             	mov    %eax,(%esp)
 8424893:	e8 a6 09 fd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8424898:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 842489b:	8b 45 0c             	mov    0xc(%ebp),%eax
 842489e:	8b 90 05 01 00 00    	mov    0x105(%eax),%edx
 84248a4:	8b 88 09 01 00 00    	mov    0x109(%eax),%ecx
 84248aa:	8b 45 0c             	mov    0xc(%ebp),%eax
 84248ad:	0f b6 80 0d 01 00 00 	movzbl 0x10d(%eax),%eax
 84248b4:	0f be c0             	movsbl %al,%eax
 84248b7:	89 85 20 ff ff ff    	mov    %eax,-0xe0(%ebp)
 84248bd:	8b 45 0c             	mov    0xc(%ebp),%eax
 84248c0:	05 f5 00 00 00       	add    $0xf5,%eax
 84248c5:	89 85 24 ff ff ff    	mov    %eax,-0xdc(%ebp)
 84248cb:	8b 45 0c             	mov    0xc(%ebp),%eax
 84248ce:	8b 80 f1 00 00 00    	mov    0xf1(%eax),%eax
 84248d4:	89 85 28 ff ff ff    	mov    %eax,-0xd8(%ebp)
 84248da:	8b 45 0c             	mov    0xc(%ebp),%eax
 84248dd:	8b 80 ed 00 00 00    	mov    0xed(%eax),%eax
 84248e3:	89 85 2c ff ff ff    	mov    %eax,-0xd4(%ebp)
 84248e9:	8b 45 0c             	mov    0xc(%ebp),%eax
 84248ec:	8b 80 e9 00 00 00    	mov    0xe9(%eax),%eax
 84248f2:	89 85 30 ff ff ff    	mov    %eax,-0xd0(%ebp)
 84248f8:	8b 45 0c             	mov    0xc(%ebp),%eax
 84248fb:	8b 80 e5 00 00 00    	mov    0xe5(%eax),%eax
 8424901:	89 85 34 ff ff ff    	mov    %eax,-0xcc(%ebp)
 8424907:	8b 45 0c             	mov    0xc(%ebp),%eax
 842490a:	8b 80 e1 00 00 00    	mov    0xe1(%eax),%eax
 8424910:	89 85 38 ff ff ff    	mov    %eax,-0xc8(%ebp)
 8424916:	8b 45 0c             	mov    0xc(%ebp),%eax
 8424919:	8b 80 dd 00 00 00    	mov    0xdd(%eax),%eax
 842491f:	89 85 3c ff ff ff    	mov    %eax,-0xc4(%ebp)
 8424925:	8b 45 0c             	mov    0xc(%ebp),%eax
 8424928:	8b 80 d9 00 00 00    	mov    0xd9(%eax),%eax
 842492e:	89 85 40 ff ff ff    	mov    %eax,-0xc0(%ebp)
 8424934:	8b 45 0c             	mov    0xc(%ebp),%eax
 8424937:	83 c0 69             	add    $0x69,%eax
 842493a:	89 85 44 ff ff ff    	mov    %eax,-0xbc(%ebp)
 8424940:	8b 45 0c             	mov    0xc(%ebp),%eax
 8424943:	8b 40 65             	mov    0x65(%eax),%eax
 8424946:	89 85 48 ff ff ff    	mov    %eax,-0xb8(%ebp)
 842494c:	80 7d a4 00          	cmpb   $0x0,-0x5c(%ebp)
 8424950:	74 0c                	je     842495e <_ZN16DB_BillingRecord15InsertSaleEntryEP18SIG_BILLING_RECORDb+0x17e>
 8424952:	c7 85 4c ff ff ff 01 	movl   $0x1,-0xb4(%ebp)
 8424959:	00 00 00 
 842495c:	eb 0a                	jmp    8424968 <_ZN16DB_BillingRecord15InsertSaleEntryEP18SIG_BILLING_RECORDb+0x188>
 842495e:	c7 85 4c ff ff ff 02 	movl   $0x2,-0xb4(%ebp)
 8424965:	00 00 00 
 8424968:	8b 45 0c             	mov    0xc(%ebp),%eax
 842496b:	8b 40 61             	mov    0x61(%eax),%eax
 842496e:	89 85 50 ff ff ff    	mov    %eax,-0xb0(%ebp)
 8424974:	8b 45 0c             	mov    0xc(%ebp),%eax
 8424977:	8b 80 d5 00 00 00    	mov    0xd5(%eax),%eax
 842497d:	89 85 54 ff ff ff    	mov    %eax,-0xac(%ebp)
 8424983:	8b 45 0c             	mov    0xc(%ebp),%eax
 8424986:	8b 80 d1 00 00 00    	mov    0xd1(%eax),%eax
 842498c:	89 85 58 ff ff ff    	mov    %eax,-0xa8(%ebp)
 8424992:	8b 45 0c             	mov    0xc(%ebp),%eax
 8424995:	8b 40 4e             	mov    0x4e(%eax),%eax
 8424998:	89 85 5c ff ff ff    	mov    %eax,-0xa4(%ebp)
 842499e:	8b 45 0c             	mov    0xc(%ebp),%eax
 84249a1:	8b 40 31             	mov    0x31(%eax),%eax
 84249a4:	89 85 60 ff ff ff    	mov    %eax,-0xa0(%ebp)
 84249aa:	8b 45 0c             	mov    0xc(%ebp),%eax
 84249ad:	8b 80 cd 00 00 00    	mov    0xcd(%eax),%eax
 84249b3:	89 85 64 ff ff ff    	mov    %eax,-0x9c(%ebp)
 84249b9:	8b 45 0c             	mov    0xc(%ebp),%eax
 84249bc:	83 c0 35             	add    $0x35,%eax
 84249bf:	89 85 68 ff ff ff    	mov    %eax,-0x98(%ebp)
 84249c5:	8b 45 0c             	mov    0xc(%ebp),%eax
 84249c8:	8b 40 2d             	mov    0x2d(%eax),%eax
 84249cb:	89 85 6c ff ff ff    	mov    %eax,-0x94(%ebp)
 84249d1:	8b 45 0c             	mov    0xc(%ebp),%eax
 84249d4:	8b 40 29             	mov    0x29(%eax),%eax
 84249d7:	89 85 70 ff ff ff    	mov    %eax,-0x90(%ebp)
 84249dd:	8b 45 0c             	mov    0xc(%ebp),%eax
 84249e0:	8b 40 25             	mov    0x25(%eax),%eax
 84249e3:	89 85 74 ff ff ff    	mov    %eax,-0x8c(%ebp)
 84249e9:	8b 45 0c             	mov    0xc(%ebp),%eax
 84249ec:	8b 40 21             	mov    0x21(%eax),%eax
 84249ef:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
 84249f5:	8b 45 0c             	mov    0xc(%ebp),%eax
 84249f8:	8b 78 1d             	mov    0x1d(%eax),%edi
 84249fb:	8b 45 0c             	mov    0xc(%ebp),%eax
 84249fe:	8b 70 19             	mov    0x19(%eax),%esi
 8424a01:	8b 45 0c             	mov    0xc(%ebp),%eax
 8424a04:	8b 58 15             	mov    0x15(%eax),%ebx
 8424a07:	8b 45 0c             	mov    0xc(%ebp),%eax
 8424a0a:	89 54 24 78          	mov    %edx,0x78(%esp)
 8424a0e:	89 4c 24 7c          	mov    %ecx,0x7c(%esp)
 8424a12:	8b 8d 20 ff ff ff    	mov    -0xe0(%ebp),%ecx
 8424a18:	89 4c 24 74          	mov    %ecx,0x74(%esp)
 8424a1c:	8b 95 24 ff ff ff    	mov    -0xdc(%ebp),%edx
 8424a22:	89 54 24 70          	mov    %edx,0x70(%esp)
 8424a26:	8b 8d 28 ff ff ff    	mov    -0xd8(%ebp),%ecx
 8424a2c:	89 4c 24 6c          	mov    %ecx,0x6c(%esp)
 8424a30:	8b 95 2c ff ff ff    	mov    -0xd4(%ebp),%edx
 8424a36:	89 54 24 68          	mov    %edx,0x68(%esp)
 8424a3a:	8b 8d 30 ff ff ff    	mov    -0xd0(%ebp),%ecx
 8424a40:	89 4c 24 64          	mov    %ecx,0x64(%esp)
 8424a44:	8b 95 34 ff ff ff    	mov    -0xcc(%ebp),%edx
 8424a4a:	89 54 24 60          	mov    %edx,0x60(%esp)
 8424a4e:	8b 8d 38 ff ff ff    	mov    -0xc8(%ebp),%ecx
 8424a54:	89 4c 24 5c          	mov    %ecx,0x5c(%esp)
 8424a58:	8b 95 3c ff ff ff    	mov    -0xc4(%ebp),%edx
 8424a5e:	89 54 24 58          	mov    %edx,0x58(%esp)
 8424a62:	8b 8d 40 ff ff ff    	mov    -0xc0(%ebp),%ecx
 8424a68:	89 4c 24 54          	mov    %ecx,0x54(%esp)
 8424a6c:	8b 95 44 ff ff ff    	mov    -0xbc(%ebp),%edx
 8424a72:	89 54 24 50          	mov    %edx,0x50(%esp)
 8424a76:	8b 8d 48 ff ff ff    	mov    -0xb8(%ebp),%ecx
 8424a7c:	89 4c 24 4c          	mov    %ecx,0x4c(%esp)
 8424a80:	8b 95 4c ff ff ff    	mov    -0xb4(%ebp),%edx
 8424a86:	89 54 24 48          	mov    %edx,0x48(%esp)
 8424a8a:	8b 8d 50 ff ff ff    	mov    -0xb0(%ebp),%ecx
 8424a90:	89 4c 24 44          	mov    %ecx,0x44(%esp)
 8424a94:	8b 95 54 ff ff ff    	mov    -0xac(%ebp),%edx
 8424a9a:	89 54 24 40          	mov    %edx,0x40(%esp)
 8424a9e:	8b 8d 58 ff ff ff    	mov    -0xa8(%ebp),%ecx
 8424aa4:	89 4c 24 3c          	mov    %ecx,0x3c(%esp)
 8424aa8:	8b 95 5c ff ff ff    	mov    -0xa4(%ebp),%edx
 8424aae:	89 54 24 38          	mov    %edx,0x38(%esp)
 8424ab2:	8b 8d 60 ff ff ff    	mov    -0xa0(%ebp),%ecx
 8424ab8:	89 4c 24 34          	mov    %ecx,0x34(%esp)
 8424abc:	8b 95 64 ff ff ff    	mov    -0x9c(%ebp),%edx
 8424ac2:	89 54 24 30          	mov    %edx,0x30(%esp)
 8424ac6:	8b 8d 68 ff ff ff    	mov    -0x98(%ebp),%ecx
 8424acc:	89 4c 24 2c          	mov    %ecx,0x2c(%esp)
 8424ad0:	8b 95 6c ff ff ff    	mov    -0x94(%ebp),%edx
 8424ad6:	89 54 24 28          	mov    %edx,0x28(%esp)
 8424ada:	8b 8d 70 ff ff ff    	mov    -0x90(%ebp),%ecx
 8424ae0:	89 4c 24 24          	mov    %ecx,0x24(%esp)
 8424ae4:	8b 95 74 ff ff ff    	mov    -0x8c(%ebp),%edx
 8424aea:	89 54 24 20          	mov    %edx,0x20(%esp)
 8424aee:	8b 8d 78 ff ff ff    	mov    -0x88(%ebp),%ecx
 8424af4:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 8424af8:	89 7c 24 18          	mov    %edi,0x18(%esp)
 8424afc:	89 74 24 14          	mov    %esi,0x14(%esp)
 8424b00:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8424b04:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8424b08:	8d 45 df             	lea    -0x21(%ebp),%eax
 8424b0b:	89 44 24 08          	mov    %eax,0x8(%esp)
 8424b0f:	c7 44 24 04 c8 dd c4 	movl   $0x8c4ddc8,0x4(%esp)
 8424b16:	08 
 8424b17:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8424b1a:	89 04 24             	mov    %eax,(%esp)
 8424b1d:	e8 9e f6 fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8424b22:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8424b29:	00 
 8424b2a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8424b2d:	89 04 24             	mov    %eax,(%esp)
 8424b30:	e8 f1 f7 fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 8424b35:	83 f0 01             	xor    $0x1,%eax
 8424b38:	84 c0                	test   %al,%al
 8424b3a:	0f 84 9a 01 00 00    	je     8424cda <_ZN16DB_BillingRecord15InsertSaleEntryEP18SIG_BILLING_RECORDb+0x4fa>
 8424b40:	8b 45 0c             	mov    0xc(%ebp),%eax
 8424b43:	8b 40 2d             	mov    0x2d(%eax),%eax
 8424b46:	89 44 24 18          	mov    %eax,0x18(%esp)
 8424b4a:	8d 45 df             	lea    -0x21(%ebp),%eax
 8424b4d:	89 44 24 14          	mov    %eax,0x14(%esp)
 8424b51:	c7 44 24 10 c8 df c4 	movl   $0x8c4dfc8,0x10(%esp)
 8424b58:	08 
 8424b59:	c7 44 24 0c 91 61 00 	movl   $0x6191,0xc(%esp)
 8424b60:	00 
 8424b61:	c7 44 24 08 20 c5 c5 	movl   $0x8c5c520,0x8(%esp)
 8424b68:	08 
 8424b69:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8424b70:	08 
 8424b71:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8424b78:	e8 8d f0 6a 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8424b7d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8424b80:	83 c0 69             	add    $0x69,%eax
 8424b83:	89 85 7c ff ff ff    	mov    %eax,-0x84(%ebp)
 8424b89:	8b 45 0c             	mov    0xc(%ebp),%eax
 8424b8c:	8b 40 65             	mov    0x65(%eax),%eax
 8424b8f:	89 45 80             	mov    %eax,-0x80(%ebp)
 8424b92:	80 7d a4 00          	cmpb   $0x0,-0x5c(%ebp)
 8424b96:	74 07                	je     8424b9f <_ZN16DB_BillingRecord15InsertSaleEntryEP18SIG_BILLING_RECORDb+0x3bf>
 8424b98:	bb 01 00 00 00       	mov    $0x1,%ebx
 8424b9d:	eb 05                	jmp    8424ba4 <_ZN16DB_BillingRecord15InsertSaleEntryEP18SIG_BILLING_RECORDb+0x3c4>
 8424b9f:	bb 02 00 00 00       	mov    $0x2,%ebx
 8424ba4:	8b 45 0c             	mov    0xc(%ebp),%eax
 8424ba7:	8b 40 61             	mov    0x61(%eax),%eax
 8424baa:	89 45 84             	mov    %eax,-0x7c(%ebp)
 8424bad:	8b 45 0c             	mov    0xc(%ebp),%eax
 8424bb0:	8b 40 4e             	mov    0x4e(%eax),%eax
 8424bb3:	89 45 88             	mov    %eax,-0x78(%ebp)
 8424bb6:	8b 45 0c             	mov    0xc(%ebp),%eax
 8424bb9:	8b 40 31             	mov    0x31(%eax),%eax
 8424bbc:	89 45 8c             	mov    %eax,-0x74(%ebp)
 8424bbf:	8b 45 0c             	mov    0xc(%ebp),%eax
 8424bc2:	8b 80 cd 00 00 00    	mov    0xcd(%eax),%eax
 8424bc8:	89 45 90             	mov    %eax,-0x70(%ebp)
 8424bcb:	8b 45 0c             	mov    0xc(%ebp),%eax
 8424bce:	83 c0 35             	add    $0x35,%eax
 8424bd1:	89 45 94             	mov    %eax,-0x6c(%ebp)
 8424bd4:	8b 45 0c             	mov    0xc(%ebp),%eax
 8424bd7:	8b 40 2d             	mov    0x2d(%eax),%eax
 8424bda:	89 45 98             	mov    %eax,-0x68(%ebp)
 8424bdd:	8b 45 0c             	mov    0xc(%ebp),%eax
 8424be0:	8b 40 29             	mov    0x29(%eax),%eax
 8424be3:	89 45 9c             	mov    %eax,-0x64(%ebp)
 8424be6:	8b 45 0c             	mov    0xc(%ebp),%eax
 8424be9:	8b 40 25             	mov    0x25(%eax),%eax
 8424bec:	89 45 a0             	mov    %eax,-0x60(%ebp)
 8424bef:	8b 45 0c             	mov    0xc(%ebp),%eax
 8424bf2:	8b 78 21             	mov    0x21(%eax),%edi
 8424bf5:	8b 45 0c             	mov    0xc(%ebp),%eax
 8424bf8:	8b 70 1d             	mov    0x1d(%eax),%esi
 8424bfb:	8b 45 0c             	mov    0xc(%ebp),%eax
 8424bfe:	8b 48 19             	mov    0x19(%eax),%ecx
 8424c01:	8b 45 0c             	mov    0xc(%ebp),%eax
 8424c04:	8b 50 15             	mov    0x15(%eax),%edx
 8424c07:	8b 45 0c             	mov    0xc(%ebp),%eax
 8424c0a:	89 85 14 ff ff ff    	mov    %eax,-0xec(%ebp)
 8424c10:	8b 85 7c ff ff ff    	mov    -0x84(%ebp),%eax
 8424c16:	89 44 24 44          	mov    %eax,0x44(%esp)
 8424c1a:	8b 45 80             	mov    -0x80(%ebp),%eax
 8424c1d:	89 44 24 40          	mov    %eax,0x40(%esp)
 8424c21:	89 5c 24 3c          	mov    %ebx,0x3c(%esp)
 8424c25:	8b 45 84             	mov    -0x7c(%ebp),%eax
 8424c28:	89 44 24 38          	mov    %eax,0x38(%esp)
 8424c2c:	8b 45 88             	mov    -0x78(%ebp),%eax
 8424c2f:	89 44 24 34          	mov    %eax,0x34(%esp)
 8424c33:	8b 45 8c             	mov    -0x74(%ebp),%eax
 8424c36:	89 44 24 30          	mov    %eax,0x30(%esp)
 8424c3a:	8b 45 90             	mov    -0x70(%ebp),%eax
 8424c3d:	89 44 24 2c          	mov    %eax,0x2c(%esp)
 8424c41:	8b 45 94             	mov    -0x6c(%ebp),%eax
 8424c44:	89 44 24 28          	mov    %eax,0x28(%esp)
 8424c48:	8b 45 98             	mov    -0x68(%ebp),%eax
 8424c4b:	89 44 24 24          	mov    %eax,0x24(%esp)
 8424c4f:	8b 45 9c             	mov    -0x64(%ebp),%eax
 8424c52:	89 44 24 20          	mov    %eax,0x20(%esp)
 8424c56:	8b 45 a0             	mov    -0x60(%ebp),%eax
 8424c59:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 8424c5d:	89 7c 24 18          	mov    %edi,0x18(%esp)
 8424c61:	89 74 24 14          	mov    %esi,0x14(%esp)
 8424c65:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8424c69:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8424c6d:	8b 95 14 ff ff ff    	mov    -0xec(%ebp),%edx
 8424c73:	89 54 24 08          	mov    %edx,0x8(%esp)
 8424c77:	c7 44 24 04 f4 df c4 	movl   $0x8c4dff4,0x4(%esp)
 8424c7e:	08 
 8424c7f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8424c82:	89 04 24             	mov    %eax,(%esp)
 8424c85:	e8 36 f5 fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8424c8a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8424c91:	00 
 8424c92:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8424c95:	89 04 24             	mov    %eax,(%esp)
 8424c98:	e8 89 f6 fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 8424c9d:	83 f0 01             	xor    $0x1,%eax
 8424ca0:	84 c0                	test   %al,%al
 8424ca2:	74 36                	je     8424cda <_ZN16DB_BillingRecord15InsertSaleEntryEP18SIG_BILLING_RECORDb+0x4fa>
 8424ca4:	8b 45 0c             	mov    0xc(%ebp),%eax
 8424ca7:	8b 40 2d             	mov    0x2d(%eax),%eax
 8424caa:	89 44 24 14          	mov    %eax,0x14(%esp)
 8424cae:	c7 44 24 10 2c e1 c4 	movl   $0x8c4e12c,0x10(%esp)
 8424cb5:	08 
 8424cb6:	c7 44 24 0c ab 61 00 	movl   $0x61ab,0xc(%esp)
 8424cbd:	00 
 8424cbe:	c7 44 24 08 20 c5 c5 	movl   $0x8c5c520,0x8(%esp)
 8424cc5:	08 
 8424cc6:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8424ccd:	08 
 8424cce:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8424cd5:	e8 30 ef 6a 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8424cda:	81 c4 6c 01 00 00    	add    $0x16c,%esp
 8424ce0:	5b                   	pop    %ebx
 8424ce1:	5e                   	pop    %esi
 8424ce2:	5f                   	pop    %edi
 8424ce3:	5d                   	pop    %ebp
 8424ce4:	c3                   	ret
 8424ce5:	90                   	nop

```

```c
// DB_BillingRecord::InsertSaleEntry @ 0x84247e0

/* DB_BillingRecord::InsertSaleEntry(SIG_BILLING_RECORD*, bool) */

void __thiscall
DB_BillingRecord::InsertSaleEntry(DB_BillingRecord *this,SIG_BILLING_RECORD *param_1,bool param_2)

{
  char cVar1;
  int iVar2;
  SIG_BILLING_RECORD *pSVar3;
  SIG_BILLING_RECORD *pSVar4;
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
  undefined4 local_b8;
  tm local_58;
  time_t local_2c;
  char local_25 [5];
  MySQL *local_20;
  
  local_25[0] = '\0';
  local_25[1] = '\0';
  local_25[2] = '\0';
  local_25[3] = '\0';
  local_25[4] = 0;
  time(&local_2c);
  localtime_r(&local_2c,&local_58);
  sprintf(local_25,"%02d%d",(local_58.tm_year + 0x76c) % 2000,local_58.tm_mon / 3 + 1);
  local_20 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,7,0);
  uVar14 = *(undefined4 *)(param_1 + 0x105);
  uVar15 = *(undefined4 *)(param_1 + 0x109);
  iVar2 = (int)(char)param_1[0x10d];
  pSVar3 = param_1 + 0xf5;
  uVar13 = *(undefined4 *)(param_1 + 0xf1);
  uVar12 = *(undefined4 *)(param_1 + 0xed);
  uVar11 = *(undefined4 *)(param_1 + 0xe9);
  uVar10 = *(undefined4 *)(param_1 + 0xe5);
  uVar9 = *(undefined4 *)(param_1 + 0xe1);
  uVar8 = *(undefined4 *)(param_1 + 0xdd);
  uVar7 = *(undefined4 *)(param_1 + 0xd9);
  pSVar4 = param_1 + 0x69;
  uVar6 = *(undefined4 *)(param_1 + 0x65);
  if (param_2) {
    local_b8 = 1;
  }
  else {
    local_b8 = 2;
  }
  MySQL::set_query(local_20,
                   " insert into prod_sale_entry_%s  ( agency_no, seal_flag, sale_time, price, slot_part_type, slot_part_code, ipg_no, bonus_ipg_no, m_id, user_id  , server_id, charac_no, job, grow_type, level, prize_flag, new_flag, result_code, result_message, gift_server_info, gift_get_charac_no  , charge_price, free_price, count_no, each_price, price_type, user_ip, buy_type, tran_id )  values( \'%s\', %d, now(), %d, %d, %d, %d, %d, %d, \'%s\', %d, %d, %d, %d, %d, %d, %d, %d, \'%s\', %d, %d, %d, %d, %d, %d, %d, \'%s\', %u, %u ) "
                   ,local_25,param_1,*(undefined4 *)(param_1 + 0x15),*(undefined4 *)(param_1 + 0x19)
                   ,*(undefined4 *)(param_1 + 0x1d),*(undefined4 *)(param_1 + 0x21),
                   *(undefined4 *)(param_1 + 0x25),*(undefined4 *)(param_1 + 0x29),
                   *(undefined4 *)(param_1 + 0x2d),param_1 + 0x35,*(undefined4 *)(param_1 + 0xcd),
                   *(undefined4 *)(param_1 + 0x31),*(undefined4 *)(param_1 + 0x4e),
                   *(undefined4 *)(param_1 + 0xd1),*(undefined4 *)(param_1 + 0xd5),
                   *(undefined4 *)(param_1 + 0x61),local_b8,uVar6,pSVar4,uVar7,uVar8,uVar9,uVar10,
                   uVar11,uVar12,uVar13,pSVar3,iVar2,uVar14,uVar15);
  cVar1 = MySQL::exec(local_20,true);
  if (cVar1 != '\x01') {
    LogManager::logFormat
              (1,"DBThread.cpp","void DB_BillingRecord::InsertSaleEntry(SIG_BILLING_RECORD*, bool)",
               0x6191,"db insert error prod_sale_entry_%s m_id: %d",local_25,
               *(undefined4 *)(param_1 + 0x2d));
    if (param_2) {
      uVar5 = 1;
    }
    else {
      uVar5 = 2;
    }
    MySQL::set_query(local_20,
                     " insert into prod_sale_entry_073 ( agency_no, seal_flag, sale_time, price, slot_part_type, slot_part_code, ipg_no, bonus_ipg_no, m_id, user_id, server_id, charac_no, job, prize_flag, new_flag, result_code, result_message )  values( \'%s\', %d, now(), %d, %d, %d, %d, %d, %d, \'%s\', %d, %d, %d, %d, %d, %d, \'%s\' ) "
                     ,param_1,*(undefined4 *)(param_1 + 0x15),*(undefined4 *)(param_1 + 0x19),
                     *(undefined4 *)(param_1 + 0x1d),*(undefined4 *)(param_1 + 0x21),
                     *(undefined4 *)(param_1 + 0x25),*(undefined4 *)(param_1 + 0x29),
                     *(undefined4 *)(param_1 + 0x2d),param_1 + 0x35,*(undefined4 *)(param_1 + 0xcd),
                     *(undefined4 *)(param_1 + 0x31),*(undefined4 *)(param_1 + 0x4e),
                     *(undefined4 *)(param_1 + 0x61),uVar5,*(undefined4 *)(param_1 + 0x65),
                     param_1 + 0x69,local_b8,uVar6,pSVar4,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12,
                     uVar13,pSVar3,iVar2,uVar14,uVar15);
    cVar1 = MySQL::exec(local_20,true);
    if (cVar1 != '\x01') {
      LogManager::logFormat
                (1,"DBThread.cpp",
                 "void DB_BillingRecord::InsertSaleEntry(SIG_BILLING_RECORD*, bool)",0x61ab,
                 "db insert error prod_sale_entry_073 m_id: %d",*(undefined4 *)(param_1 + 0x2d));
    }
  }
  return;
}

```

---

## dispatch

```asm
// === 08424574 DB_BillingRecord::dispatch  [0x08424574-0x8424601] ===
 8424574:	55                   	push   %ebp
 8424575:	89 e5                	mov    %esp,%ebp
 8424577:	83 ec 38             	sub    $0x38,%esp
 842457a:	8b 45 14             	mov    0x14(%ebp),%eax
 842457d:	89 04 24             	mov    %eax,(%esp)
 8424580:	e8 15 d9 02 00       	call   8451e9a <_ZN6Stream12GetOutBufferI18SIG_BILLING_RECORDEEPT_v>
 8424585:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8424588:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 842458c:	74 41                	je     84245cf <_ZN16DB_BillingRecord8dispatchEiiP6Stream+0x5b>
 842458e:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
 8424592:	8d 45 f3             	lea    -0xd(%ebp),%eax
 8424595:	89 44 24 08          	mov    %eax,0x8(%esp)
 8424599:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842459c:	89 44 24 04          	mov    %eax,0x4(%esp)
 84245a0:	8b 45 08             	mov    0x8(%ebp),%eax
 84245a3:	89 04 24             	mov    %eax,(%esp)
 84245a6:	e8 57 00 00 00       	call   8424602 <_ZN16DB_BillingRecord13InsertBuyUserEP18SIG_BILLING_RECORDRb>
 84245ab:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 84245af:	0f b6 c0             	movzbl %al,%eax
 84245b2:	89 44 24 08          	mov    %eax,0x8(%esp)
 84245b6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84245b9:	89 44 24 04          	mov    %eax,0x4(%esp)
 84245bd:	8b 45 08             	mov    0x8(%ebp),%eax
 84245c0:	89 04 24             	mov    %eax,(%esp)
 84245c3:	e8 18 02 00 00       	call   84247e0 <_ZN16DB_BillingRecord15InsertSaleEntryEP18SIG_BILLING_RECORDb>
 84245c8:	b8 01 00 00 00       	mov    $0x1,%eax
 84245cd:	eb 31                	jmp    8424600 <_ZN16DB_BillingRecord8dispatchEiiP6Stream+0x8c>
 84245cf:	c7 44 24 10 e0 db c4 	movl   $0x8c4dbe0,0x10(%esp)
 84245d6:	08 
 84245d7:	c7 44 24 0c 6e 60 00 	movl   $0x606e,0xc(%esp)
 84245de:	00 
 84245df:	c7 44 24 08 e0 c5 c5 	movl   $0x8c5c5e0,0x8(%esp)
 84245e6:	08 
 84245e7:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 84245ee:	08 
 84245ef:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84245f6:	e8 0f f6 6a 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84245fb:	b8 00 00 00 00       	mov    $0x0,%eax
 8424600:	c9                   	leave
 8424601:	c3                   	ret

```

```c
// DB_BillingRecord::dispatch @ 0x8424574

/* DB_BillingRecord::dispatch(int, int, Stream*) */

bool __thiscall
DB_BillingRecord::dispatch(DB_BillingRecord *this,int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  bool local_11;
  SIG_BILLING_RECORD *local_10;
  
  local_10 = Stream::GetOutBuffer<SIG_BILLING_RECORD>(param_3);
  bVar1 = local_10 == (SIG_BILLING_RECORD *)0x0;
  if (bVar1) {
    LogManager::logFormat
              (1,"DBThread.cpp","virtual bool DB_BillingRecord::dispatch(int, int, Stream*)",0x606e,
               "SIG_BILLING_RECORD is NULL");
  }
  else {
    local_11 = false;
    InsertBuyUser(this,local_10,&local_11);
    InsertSaleEntry(this,local_10,local_11);
  }
  return !bVar1;
}

```

