# DB_UpdateCeraShopPurchaseCount

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## _insertPurchaseCount

```asm
// === 0844b808 DB_UpdateCeraShopPurchaseCount::_insertPurchaseCount  [0x0844b808-0x844b981] ===
 844b808:	55                   	push   %ebp
 844b809:	89 e5                	mov    %esp,%ebp
 844b80b:	56                   	push   %esi
 844b80c:	53                   	push   %ebx
 844b80d:	83 ec 30             	sub    $0x30,%esp
 844b810:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 844b815:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 844b81c:	00 
 844b81d:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 844b824:	00 
 844b825:	89 04 24             	mov    %eax,(%esp)
 844b828:	e8 11 9a fa ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 844b82d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 844b830:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 844b834:	75 2c                	jne    844b862 <_ZN30DB_UpdateCeraShopPurchaseCount20_insertPurchaseCountEj+0x5a>
 844b836:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 844b83d:	e8 be 9f 2d 00       	call   8725800 <__cxa_allocate_exception>
 844b842:	89 c2                	mov    %eax,%edx
 844b844:	c7 02 c9 94 c5 08    	movl   $0x8c594c9,(%edx)
 844b84a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 844b851:	00 
 844b852:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 844b859:	09 
 844b85a:	89 04 24             	mov    %eax,(%esp)
 844b85d:	e8 ee 93 2d 00       	call   8724c50 <__cxa_throw>
 844b862:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 844b869:	00 
 844b86a:	8b 45 0c             	mov    0xc(%ebp),%eax
 844b86d:	89 04 24             	mov    %eax,(%esp)
 844b870:	e8 d6 d7 cb ff       	call   810904b <_Z14NumberToStringji>
 844b875:	89 44 24 08          	mov    %eax,0x8(%esp)
 844b879:	c7 44 24 04 e0 95 c5 	movl   $0x8c595e0,0x4(%esp)
 844b880:	08 
 844b881:	8b 45 f0             	mov    -0x10(%ebp),%eax
 844b884:	89 04 24             	mov    %eax,(%esp)
 844b887:	e8 34 89 fa ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 844b88c:	83 f0 01             	xor    $0x1,%eax
 844b88f:	84 c0                	test   %al,%al
 844b891:	74 2c                	je     844b8bf <_ZN30DB_UpdateCeraShopPurchaseCount20_insertPurchaseCountEj+0xb7>
 844b893:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 844b89a:	e8 61 9f 2d 00       	call   8725800 <__cxa_allocate_exception>
 844b89f:	89 c2                	mov    %eax,%edx
 844b8a1:	c7 02 16 95 c5 08    	movl   $0x8c59516,(%edx)
 844b8a7:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 844b8ae:	00 
 844b8af:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 844b8b6:	09 
 844b8b7:	89 04 24             	mov    %eax,(%esp)
 844b8ba:	e8 91 93 2d 00       	call   8724c50 <__cxa_throw>
 844b8bf:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 844b8c6:	00 
 844b8c7:	8b 45 f0             	mov    -0x10(%ebp),%eax
 844b8ca:	89 04 24             	mov    %eax,(%esp)
 844b8cd:	e8 54 8a fa ff       	call   83f4326 <_ZN5MySQL4execEb>
 844b8d2:	83 f0 01             	xor    $0x1,%eax
 844b8d5:	84 c0                	test   %al,%al
 844b8d7:	0f 84 9d 00 00 00    	je     844b97a <_ZN30DB_UpdateCeraShopPurchaseCount20_insertPurchaseCountEj+0x172>
 844b8dd:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 844b8e4:	e8 17 9f 2d 00       	call   8725800 <__cxa_allocate_exception>
 844b8e9:	89 c2                	mov    %eax,%edx
 844b8eb:	c7 02 20 95 c5 08    	movl   $0x8c59520,(%edx)
 844b8f1:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 844b8f8:	00 
 844b8f9:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 844b900:	09 
 844b901:	89 04 24             	mov    %eax,(%esp)
 844b904:	e8 47 93 2d 00       	call   8724c50 <__cxa_throw>
 844b909:	83 fa 01             	cmp    $0x1,%edx
 844b90c:	74 08                	je     844b916 <_ZN30DB_UpdateCeraShopPurchaseCount20_insertPurchaseCountEj+0x10e>
 844b90e:	89 04 24             	mov    %eax,(%esp)
 844b911:	e8 3a 7e 69 00       	call   8ae3750 <_Unwind_Resume>
 844b916:	89 04 24             	mov    %eax,(%esp)
 844b919:	e8 c2 a3 2d 00       	call   8725ce0 <__cxa_begin_catch>
 844b91e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 844b921:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 844b928:	00 
 844b929:	c7 44 24 08 39 bc 00 	movl   $0xbc39,0x8(%esp)
 844b930:	00 
 844b931:	c7 44 24 04 c0 aa c5 	movl   $0x8c5aac0,0x4(%esp)
 844b938:	08 
 844b939:	8d 45 e0             	lea    -0x20(%ebp),%eax
 844b93c:	89 04 24             	mov    %eax,(%esp)
 844b93f:	e8 d4 3d 10 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 844b944:	8b 45 f4             	mov    -0xc(%ebp),%eax
 844b947:	89 44 24 08          	mov    %eax,0x8(%esp)
 844b94b:	c7 44 24 04 ac 95 c5 	movl   $0x8c595ac,0x4(%esp)
 844b952:	08 
 844b953:	8d 45 e0             	lea    -0x20(%ebp),%eax
 844b956:	89 04 24             	mov    %eax,(%esp)
 844b959:	e8 2a 3e 10 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 844b95e:	eb 15                	jmp    844b975 <_ZN30DB_UpdateCeraShopPurchaseCount20_insertPurchaseCountEj+0x16d>
 844b960:	89 d3                	mov    %edx,%ebx
 844b962:	89 c6                	mov    %eax,%esi
 844b964:	e8 c7 a2 2d 00       	call   8725c30 <__cxa_end_catch>
 844b969:	89 f0                	mov    %esi,%eax
 844b96b:	89 da                	mov    %ebx,%edx
 844b96d:	89 04 24             	mov    %eax,(%esp)
 844b970:	e8 db 7d 69 00       	call   8ae3750 <_Unwind_Resume>
 844b975:	e8 b6 a2 2d 00       	call   8725c30 <__cxa_end_catch>
 844b97a:	83 c4 30             	add    $0x30,%esp
 844b97d:	5b                   	pop    %ebx
 844b97e:	5e                   	pop    %esi
 844b97f:	5d                   	pop    %ebp
 844b980:	c3                   	ret
 844b981:	90                   	nop

```

```c
// DB_UpdateCeraShopPurchaseCount::_insertPurchaseCount @ 0x844b808

/* DB_UpdateCeraShopPurchaseCount::_insertPurchaseCount(unsigned int) */

void __thiscall
DB_UpdateCeraShopPurchaseCount::_insertPurchaseCount
          (DB_UpdateCeraShopPurchaseCount *this,uint param_1)

{
  char cVar1;
  MySQL *this_00;
  undefined4 *puVar2;
  undefined4 uVar3;
  
                    /* try { // try from 0844b828 to 0844b908 has its CatchHandler @ 0844b909 */
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
  if (this_00 == (MySQL *)0x0) {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = "handle_null";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&char_const*::typeinfo,0);
  }
  uVar3 = NumberToString(param_1,0);
  cVar1 = MySQL::set_query(this_00,
                           " inSert into event_purchase_cnt(m_id, purchase_cnt) values(%s, 1) ",
                           uVar3);
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = "set_query";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&char_const*::typeinfo,0);
  }
  cVar1 = MySQL::exec(this_00,true);
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = &DAT_08c59520;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&char_const*::typeinfo,0);
  }
  return;
}

```

---

## _selectPurchaseCount

```asm
// === 0844b450 DB_UpdateCeraShopPurchaseCount::_selectPurchaseCount  [0x0844b450-0x844b67f] ===
 844b450:	55                   	push   %ebp
 844b451:	89 e5                	mov    %esp,%ebp
 844b453:	56                   	push   %esi
 844b454:	53                   	push   %ebx
 844b455:	83 ec 30             	sub    $0x30,%esp
 844b458:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 844b45d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 844b464:	00 
 844b465:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 844b46c:	00 
 844b46d:	89 04 24             	mov    %eax,(%esp)
 844b470:	e8 c9 9d fa ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 844b475:	89 45 f0             	mov    %eax,-0x10(%ebp)
 844b478:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 844b47c:	75 2c                	jne    844b4aa <_ZN30DB_UpdateCeraShopPurchaseCount20_selectPurchaseCountEjRt+0x5a>
 844b47e:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 844b485:	e8 76 a3 2d 00       	call   8725800 <__cxa_allocate_exception>
 844b48a:	89 c2                	mov    %eax,%edx
 844b48c:	c7 02 c9 94 c5 08    	movl   $0x8c594c9,(%edx)
 844b492:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 844b499:	00 
 844b49a:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 844b4a1:	09 
 844b4a2:	89 04 24             	mov    %eax,(%esp)
 844b4a5:	e8 a6 97 2d 00       	call   8724c50 <__cxa_throw>
 844b4aa:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 844b4b1:	00 
 844b4b2:	8b 45 0c             	mov    0xc(%ebp),%eax
 844b4b5:	89 04 24             	mov    %eax,(%esp)
 844b4b8:	e8 8e db cb ff       	call   810904b <_Z14NumberToStringji>
 844b4bd:	89 44 24 08          	mov    %eax,0x8(%esp)
 844b4c1:	c7 44 24 04 d8 94 c5 	movl   $0x8c594d8,0x4(%esp)
 844b4c8:	08 
 844b4c9:	8b 45 f0             	mov    -0x10(%ebp),%eax
 844b4cc:	89 04 24             	mov    %eax,(%esp)
 844b4cf:	e8 ec 8c fa ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 844b4d4:	83 f0 01             	xor    $0x1,%eax
 844b4d7:	84 c0                	test   %al,%al
 844b4d9:	74 2c                	je     844b507 <_ZN30DB_UpdateCeraShopPurchaseCount20_selectPurchaseCountEjRt+0xb7>
 844b4db:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 844b4e2:	e8 19 a3 2d 00       	call   8725800 <__cxa_allocate_exception>
 844b4e7:	89 c2                	mov    %eax,%edx
 844b4e9:	c7 02 16 95 c5 08    	movl   $0x8c59516,(%edx)
 844b4ef:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 844b4f6:	00 
 844b4f7:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 844b4fe:	09 
 844b4ff:	89 04 24             	mov    %eax,(%esp)
 844b502:	e8 49 97 2d 00       	call   8724c50 <__cxa_throw>
 844b507:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 844b50e:	00 
 844b50f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 844b512:	89 04 24             	mov    %eax,(%esp)
 844b515:	e8 0c 8e fa ff       	call   83f4326 <_ZN5MySQL4execEb>
 844b51a:	83 f0 01             	xor    $0x1,%eax
 844b51d:	84 c0                	test   %al,%al
 844b51f:	74 2c                	je     844b54d <_ZN30DB_UpdateCeraShopPurchaseCount20_selectPurchaseCountEjRt+0xfd>
 844b521:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 844b528:	e8 d3 a2 2d 00       	call   8725800 <__cxa_allocate_exception>
 844b52d:	89 c2                	mov    %eax,%edx
 844b52f:	c7 02 20 95 c5 08    	movl   $0x8c59520,(%edx)
 844b535:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 844b53c:	00 
 844b53d:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 844b544:	09 
 844b545:	89 04 24             	mov    %eax,(%esp)
 844b548:	e8 03 97 2d 00       	call   8724c50 <__cxa_throw>
 844b54d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 844b550:	89 04 24             	mov    %eax,(%esp)
 844b553:	e8 14 6e c9 ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 844b558:	83 f8 01             	cmp    $0x1,%eax
 844b55b:	0f 94 c0             	sete   %al
 844b55e:	84 c0                	test   %al,%al
 844b560:	0f 84 8b 00 00 00    	je     844b5f1 <_ZN30DB_UpdateCeraShopPurchaseCount20_selectPurchaseCountEjRt+0x1a1>
 844b566:	8b 45 f0             	mov    -0x10(%ebp),%eax
 844b569:	89 04 24             	mov    %eax,(%esp)
 844b56c:	e8 4b 8f fa ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 844b571:	83 f0 01             	xor    $0x1,%eax
 844b574:	84 c0                	test   %al,%al
 844b576:	74 2c                	je     844b5a4 <_ZN30DB_UpdateCeraShopPurchaseCount20_selectPurchaseCountEjRt+0x154>
 844b578:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 844b57f:	e8 7c a2 2d 00       	call   8725800 <__cxa_allocate_exception>
 844b584:	89 c2                	mov    %eax,%edx
 844b586:	c7 02 25 95 c5 08    	movl   $0x8c59525,(%edx)
 844b58c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 844b593:	00 
 844b594:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 844b59b:	09 
 844b59c:	89 04 24             	mov    %eax,(%esp)
 844b59f:	e8 ac 96 2d 00       	call   8724c50 <__cxa_throw>
 844b5a4:	8b 45 10             	mov    0x10(%ebp),%eax
 844b5a7:	89 44 24 08          	mov    %eax,0x8(%esp)
 844b5ab:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 844b5b2:	00 
 844b5b3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 844b5b6:	89 04 24             	mov    %eax,(%esp)
 844b5b9:	e8 d2 b3 cc ff       	call   8116990 <_ZN5MySQL10get_ushortEiRt>
 844b5be:	83 f0 01             	xor    $0x1,%eax
 844b5c1:	84 c0                	test   %al,%al
 844b5c3:	74 34                	je     844b5f9 <_ZN30DB_UpdateCeraShopPurchaseCount20_selectPurchaseCountEjRt+0x1a9>
 844b5c5:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 844b5cc:	e8 2f a2 2d 00       	call   8725800 <__cxa_allocate_exception>
 844b5d1:	89 c2                	mov    %eax,%edx
 844b5d3:	c7 02 2b 95 c5 08    	movl   $0x8c5952b,(%edx)
 844b5d9:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 844b5e0:	00 
 844b5e1:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 844b5e8:	09 
 844b5e9:	89 04 24             	mov    %eax,(%esp)
 844b5ec:	e8 5f 96 2d 00       	call   8724c50 <__cxa_throw>
 844b5f1:	8b 45 10             	mov    0x10(%ebp),%eax
 844b5f4:	66 c7 00 00 00       	movw   $0x0,(%eax)
 844b5f9:	bb 01 00 00 00       	mov    $0x1,%ebx
 844b5fe:	eb 76                	jmp    844b676 <_ZN30DB_UpdateCeraShopPurchaseCount20_selectPurchaseCountEjRt+0x226>
 844b600:	83 fa 01             	cmp    $0x1,%edx
 844b603:	74 08                	je     844b60d <_ZN30DB_UpdateCeraShopPurchaseCount20_selectPurchaseCountEjRt+0x1bd>
 844b605:	89 04 24             	mov    %eax,(%esp)
 844b608:	e8 43 81 69 00       	call   8ae3750 <_Unwind_Resume>
 844b60d:	89 04 24             	mov    %eax,(%esp)
 844b610:	e8 cb a6 2d 00       	call   8725ce0 <__cxa_begin_catch>
 844b615:	89 45 f4             	mov    %eax,-0xc(%ebp)
 844b618:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 844b61f:	00 
 844b620:	c7 44 24 08 0b bc 00 	movl   $0xbc0b,0x8(%esp)
 844b627:	00 
 844b628:	c7 44 24 04 a0 ab c5 	movl   $0x8c5aba0,0x4(%esp)
 844b62f:	08 
 844b630:	8d 45 e0             	lea    -0x20(%ebp),%eax
 844b633:	89 04 24             	mov    %eax,(%esp)
 844b636:	e8 dd 40 10 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 844b63b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 844b63e:	89 44 24 08          	mov    %eax,0x8(%esp)
 844b642:	c7 44 24 04 38 95 c5 	movl   $0x8c59538,0x4(%esp)
 844b649:	08 
 844b64a:	8d 45 e0             	lea    -0x20(%ebp),%eax
 844b64d:	89 04 24             	mov    %eax,(%esp)
 844b650:	e8 33 41 10 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 844b655:	bb 00 00 00 00       	mov    $0x0,%ebx
 844b65a:	e8 d1 a5 2d 00       	call   8725c30 <__cxa_end_catch>
 844b65f:	eb 15                	jmp    844b676 <_ZN30DB_UpdateCeraShopPurchaseCount20_selectPurchaseCountEjRt+0x226>
 844b661:	89 d3                	mov    %edx,%ebx
 844b663:	89 c6                	mov    %eax,%esi
 844b665:	e8 c6 a5 2d 00       	call   8725c30 <__cxa_end_catch>
 844b66a:	89 f0                	mov    %esi,%eax
 844b66c:	89 da                	mov    %ebx,%edx
 844b66e:	89 04 24             	mov    %eax,(%esp)
 844b671:	e8 da 80 69 00       	call   8ae3750 <_Unwind_Resume>
 844b676:	89 d8                	mov    %ebx,%eax
 844b678:	83 c4 30             	add    $0x30,%esp
 844b67b:	5b                   	pop    %ebx
 844b67c:	5e                   	pop    %esi
 844b67d:	5d                   	pop    %ebp
 844b67e:	c3                   	ret
 844b67f:	90                   	nop

```

```c
// DB_UpdateCeraShopPurchaseCount::_selectPurchaseCount @ 0x844b450

/* DB_UpdateCeraShopPurchaseCount::_selectPurchaseCount(unsigned int, unsigned short&) */

undefined4 __thiscall
DB_UpdateCeraShopPurchaseCount::_selectPurchaseCount
          (DB_UpdateCeraShopPurchaseCount *this,uint param_1,ushort *param_2)

{
  char cVar1;
  MySQL *this_00;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  
                    /* try { // try from 0844b470 to 0844b5f0 has its CatchHandler @ 0844b600 */
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
  if (this_00 == (MySQL *)0x0) {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = "handle_null";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&char_const*::typeinfo,0);
  }
  uVar3 = NumberToString(param_1,0);
  cVar1 = MySQL::set_query(this_00," seLect purchase_cnt from event_purchase_cnt where m_id = %s ",
                           uVar3);
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = "set_query";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&char_const*::typeinfo,0);
  }
  cVar1 = MySQL::exec(this_00,true);
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = &DAT_08c59520;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&char_const*::typeinfo,0);
  }
  iVar4 = MySQL::get_n_rows(this_00);
  if (iVar4 == 1) {
    cVar1 = MySQL::fetch(this_00);
    if (cVar1 != '\x01') {
      puVar2 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar2 = "fetch";
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar2,&char_const*::typeinfo,0);
    }
    cVar1 = MySQL::get_ushort(this_00,0,param_2);
    if (cVar1 != '\x01') {
      puVar2 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar2 = "get_ushort";
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar2,&char_const*::typeinfo,0);
    }
  }
  else {
    *param_2 = 0;
  }
  return 1;
}

```

---

## _updatePurchaseCount

```asm
// === 0844b680 DB_UpdateCeraShopPurchaseCount::_updatePurchaseCount  [0x0844b680-0x844b807] ===
 844b680:	55                   	push   %ebp
 844b681:	89 e5                	mov    %esp,%ebp
 844b683:	56                   	push   %esi
 844b684:	53                   	push   %ebx
 844b685:	83 ec 40             	sub    $0x40,%esp
 844b688:	8b 45 10             	mov    0x10(%ebp),%eax
 844b68b:	66 89 45 d4          	mov    %ax,-0x2c(%ebp)
 844b68f:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 844b694:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 844b69b:	00 
 844b69c:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 844b6a3:	00 
 844b6a4:	89 04 24             	mov    %eax,(%esp)
 844b6a7:	e8 92 9b fa ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 844b6ac:	89 45 f0             	mov    %eax,-0x10(%ebp)
 844b6af:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 844b6b3:	75 2c                	jne    844b6e1 <_ZN30DB_UpdateCeraShopPurchaseCount20_updatePurchaseCountEjt+0x61>
 844b6b5:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 844b6bc:	e8 3f a1 2d 00       	call   8725800 <__cxa_allocate_exception>
 844b6c1:	89 c2                	mov    %eax,%edx
 844b6c3:	c7 02 c9 94 c5 08    	movl   $0x8c594c9,(%edx)
 844b6c9:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 844b6d0:	00 
 844b6d1:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 844b6d8:	09 
 844b6d9:	89 04 24             	mov    %eax,(%esp)
 844b6dc:	e8 6f 95 2d 00       	call   8724c50 <__cxa_throw>
 844b6e1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 844b6e8:	00 
 844b6e9:	8b 45 0c             	mov    0xc(%ebp),%eax
 844b6ec:	89 04 24             	mov    %eax,(%esp)
 844b6ef:	e8 57 d9 cb ff       	call   810904b <_Z14NumberToStringji>
 844b6f4:	0f b7 55 d4          	movzwl -0x2c(%ebp),%edx
 844b6f8:	89 44 24 0c          	mov    %eax,0xc(%esp)
 844b6fc:	89 54 24 08          	mov    %edx,0x8(%esp)
 844b700:	c7 44 24 04 6c 95 c5 	movl   $0x8c5956c,0x4(%esp)
 844b707:	08 
 844b708:	8b 45 f0             	mov    -0x10(%ebp),%eax
 844b70b:	89 04 24             	mov    %eax,(%esp)
 844b70e:	e8 ad 8a fa ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 844b713:	83 f0 01             	xor    $0x1,%eax
 844b716:	84 c0                	test   %al,%al
 844b718:	74 2c                	je     844b746 <_ZN30DB_UpdateCeraShopPurchaseCount20_updatePurchaseCountEjt+0xc6>
 844b71a:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 844b721:	e8 da a0 2d 00       	call   8725800 <__cxa_allocate_exception>
 844b726:	89 c2                	mov    %eax,%edx
 844b728:	c7 02 16 95 c5 08    	movl   $0x8c59516,(%edx)
 844b72e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 844b735:	00 
 844b736:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 844b73d:	09 
 844b73e:	89 04 24             	mov    %eax,(%esp)
 844b741:	e8 0a 95 2d 00       	call   8724c50 <__cxa_throw>
 844b746:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 844b74d:	00 
 844b74e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 844b751:	89 04 24             	mov    %eax,(%esp)
 844b754:	e8 cd 8b fa ff       	call   83f4326 <_ZN5MySQL4execEb>
 844b759:	83 f0 01             	xor    $0x1,%eax
 844b75c:	84 c0                	test   %al,%al
 844b75e:	0f 84 9d 00 00 00    	je     844b801 <_ZN30DB_UpdateCeraShopPurchaseCount20_updatePurchaseCountEjt+0x181>
 844b764:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 844b76b:	e8 90 a0 2d 00       	call   8725800 <__cxa_allocate_exception>
 844b770:	89 c2                	mov    %eax,%edx
 844b772:	c7 02 20 95 c5 08    	movl   $0x8c59520,(%edx)
 844b778:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 844b77f:	00 
 844b780:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 844b787:	09 
 844b788:	89 04 24             	mov    %eax,(%esp)
 844b78b:	e8 c0 94 2d 00       	call   8724c50 <__cxa_throw>
 844b790:	83 fa 01             	cmp    $0x1,%edx
 844b793:	74 08                	je     844b79d <_ZN30DB_UpdateCeraShopPurchaseCount20_updatePurchaseCountEjt+0x11d>
 844b795:	89 04 24             	mov    %eax,(%esp)
 844b798:	e8 b3 7f 69 00       	call   8ae3750 <_Unwind_Resume>
 844b79d:	89 04 24             	mov    %eax,(%esp)
 844b7a0:	e8 3b a5 2d 00       	call   8725ce0 <__cxa_begin_catch>
 844b7a5:	89 45 f4             	mov    %eax,-0xc(%ebp)
 844b7a8:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 844b7af:	00 
 844b7b0:	c7 44 24 08 22 bc 00 	movl   $0xbc22,0x8(%esp)
 844b7b7:	00 
 844b7b8:	c7 44 24 04 20 ab c5 	movl   $0x8c5ab20,0x4(%esp)
 844b7bf:	08 
 844b7c0:	8d 45 e0             	lea    -0x20(%ebp),%eax
 844b7c3:	89 04 24             	mov    %eax,(%esp)
 844b7c6:	e8 4d 3f 10 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 844b7cb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 844b7ce:	89 44 24 08          	mov    %eax,0x8(%esp)
 844b7d2:	c7 44 24 04 ac 95 c5 	movl   $0x8c595ac,0x4(%esp)
 844b7d9:	08 
 844b7da:	8d 45 e0             	lea    -0x20(%ebp),%eax
 844b7dd:	89 04 24             	mov    %eax,(%esp)
 844b7e0:	e8 a3 3f 10 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 844b7e5:	eb 15                	jmp    844b7fc <_ZN30DB_UpdateCeraShopPurchaseCount20_updatePurchaseCountEjt+0x17c>
 844b7e7:	89 d3                	mov    %edx,%ebx
 844b7e9:	89 c6                	mov    %eax,%esi
 844b7eb:	e8 40 a4 2d 00       	call   8725c30 <__cxa_end_catch>
 844b7f0:	89 f0                	mov    %esi,%eax
 844b7f2:	89 da                	mov    %ebx,%edx
 844b7f4:	89 04 24             	mov    %eax,(%esp)
 844b7f7:	e8 54 7f 69 00       	call   8ae3750 <_Unwind_Resume>
 844b7fc:	e8 2f a4 2d 00       	call   8725c30 <__cxa_end_catch>
 844b801:	83 c4 40             	add    $0x40,%esp
 844b804:	5b                   	pop    %ebx
 844b805:	5e                   	pop    %esi
 844b806:	5d                   	pop    %ebp
 844b807:	c3                   	ret

```

```c
// DB_UpdateCeraShopPurchaseCount::_updatePurchaseCount @ 0x844b680

/* DB_UpdateCeraShopPurchaseCount::_updatePurchaseCount(unsigned int, unsigned short) */

void __thiscall
DB_UpdateCeraShopPurchaseCount::_updatePurchaseCount
          (DB_UpdateCeraShopPurchaseCount *this,uint param_1,ushort param_2)

{
  char cVar1;
  MySQL *this_00;
  undefined4 *puVar2;
  undefined4 uVar3;
  
                    /* try { // try from 0844b6a7 to 0844b78f has its CatchHandler @ 0844b790 */
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
  if (this_00 == (MySQL *)0x0) {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = "handle_null";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&char_const*::typeinfo,0);
  }
  uVar3 = NumberToString(param_1,0);
  cVar1 = MySQL::set_query(this_00," upDate event_purchase_cnt set purchase_cnt=%d where m_id = %s "
                           ,(uint)param_2,uVar3);
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = "set_query";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&char_const*::typeinfo,0);
  }
  cVar1 = MySQL::exec(this_00,true);
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = &DAT_08c59520;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&char_const*::typeinfo,0);
  }
  return;
}

```

---

## dispatch

```asm
// === 0844b0cc DB_UpdateCeraShopPurchaseCount::dispatch  [0x0844b0cc-0x844b31b] ===
 844b0cc:	55                   	push   %ebp
 844b0cd:	89 e5                	mov    %esp,%ebp
 844b0cf:	56                   	push   %esi
 844b0d0:	53                   	push   %ebx
 844b0d1:	83 ec 50             	sub    $0x50,%esp
 844b0d4:	8b 45 14             	mov    0x14(%ebp),%eax
 844b0d7:	89 04 24             	mov    %eax,(%esp)
 844b0da:	e8 c3 96 00 00       	call   84547a2 <_ZN6Stream12GetOutBufferI27SIG_CERASHOP_PURCHASE_COUNTEEPT_v>
 844b0df:	89 45 f0             	mov    %eax,-0x10(%ebp)
 844b0e2:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 844b0e6:	75 40                	jne    844b128 <_ZN30DB_UpdateCeraShopPurchaseCount8dispatchEiiP6Stream+0x5c>
 844b0e8:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 844b0ef:	00 
 844b0f0:	c7 44 24 08 ac bb 00 	movl   $0xbbac,0x8(%esp)
 844b0f7:	00 
 844b0f8:	c7 44 24 04 a0 ac c5 	movl   $0x8c5aca0,0x4(%esp)
 844b0ff:	08 
 844b100:	8d 45 c0             	lea    -0x40(%ebp),%eax
 844b103:	89 04 24             	mov    %eax,(%esp)
 844b106:	e8 0d 46 10 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 844b10b:	c7 44 24 04 60 94 c5 	movl   $0x8c59460,0x4(%esp)
 844b112:	08 
 844b113:	8d 45 c0             	lea    -0x40(%ebp),%eax
 844b116:	89 04 24             	mov    %eax,(%esp)
 844b119:	e8 6a 46 10 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 844b11e:	bb 00 00 00 00       	mov    $0x0,%ebx
 844b123:	e9 ea 01 00 00       	jmp    844b312 <_ZN30DB_UpdateCeraShopPurchaseCount8dispatchEiiP6Stream+0x246>
 844b128:	8b 45 f0             	mov    -0x10(%ebp),%eax
 844b12b:	8d 50 08             	lea    0x8(%eax),%edx
 844b12e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 844b131:	8b 00                	mov    (%eax),%eax
 844b133:	89 54 24 08          	mov    %edx,0x8(%esp)
 844b137:	89 44 24 04          	mov    %eax,0x4(%esp)
 844b13b:	8b 45 08             	mov    0x8(%ebp),%eax
 844b13e:	89 04 24             	mov    %eax,(%esp)
 844b141:	e8 0a 03 00 00       	call   844b450 <_ZN30DB_UpdateCeraShopPurchaseCount20_selectPurchaseCountEjRt>
 844b146:	83 f0 01             	xor    $0x1,%eax
 844b149:	84 c0                	test   %al,%al
 844b14b:	74 40                	je     844b18d <_ZN30DB_UpdateCeraShopPurchaseCount8dispatchEiiP6Stream+0xc1>
 844b14d:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 844b154:	00 
 844b155:	c7 44 24 08 b2 bb 00 	movl   $0xbbb2,0x8(%esp)
 844b15c:	00 
 844b15d:	c7 44 24 04 a0 ac c5 	movl   $0x8c5aca0,0x4(%esp)
 844b164:	08 
 844b165:	8d 45 d0             	lea    -0x30(%ebp),%eax
 844b168:	89 04 24             	mov    %eax,(%esp)
 844b16b:	e8 a8 45 10 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 844b170:	c7 44 24 04 84 94 c5 	movl   $0x8c59484,0x4(%esp)
 844b177:	08 
 844b178:	8d 45 d0             	lea    -0x30(%ebp),%eax
 844b17b:	89 04 24             	mov    %eax,(%esp)
 844b17e:	e8 05 46 10 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 844b183:	bb 00 00 00 00       	mov    $0x0,%ebx
 844b188:	e9 85 01 00 00       	jmp    844b312 <_ZN30DB_UpdateCeraShopPurchaseCount8dispatchEiiP6Stream+0x246>
 844b18d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 844b190:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 844b194:	66 85 c0             	test   %ax,%ax
 844b197:	75 1f                	jne    844b1b8 <_ZN30DB_UpdateCeraShopPurchaseCount8dispatchEiiP6Stream+0xec>
 844b199:	8b 45 f0             	mov    -0x10(%ebp),%eax
 844b19c:	66 c7 40 08 01 00    	movw   $0x1,0x8(%eax)
 844b1a2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 844b1a5:	8b 00                	mov    (%eax),%eax
 844b1a7:	89 44 24 04          	mov    %eax,0x4(%esp)
 844b1ab:	8b 45 08             	mov    0x8(%ebp),%eax
 844b1ae:	89 04 24             	mov    %eax,(%esp)
 844b1b1:	e8 52 06 00 00       	call   844b808 <_ZN30DB_UpdateCeraShopPurchaseCount20_insertPurchaseCountEj>
 844b1b6:	eb 33                	jmp    844b1eb <_ZN30DB_UpdateCeraShopPurchaseCount8dispatchEiiP6Stream+0x11f>
 844b1b8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 844b1bb:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 844b1bf:	8d 50 01             	lea    0x1(%eax),%edx
 844b1c2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 844b1c5:	66 89 50 08          	mov    %dx,0x8(%eax)
 844b1c9:	8b 45 f0             	mov    -0x10(%ebp),%eax
 844b1cc:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 844b1d0:	0f b7 d0             	movzwl %ax,%edx
 844b1d3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 844b1d6:	8b 00                	mov    (%eax),%eax
 844b1d8:	89 54 24 08          	mov    %edx,0x8(%esp)
 844b1dc:	89 44 24 04          	mov    %eax,0x4(%esp)
 844b1e0:	8b 45 08             	mov    0x8(%ebp),%eax
 844b1e3:	89 04 24             	mov    %eax,(%esp)
 844b1e6:	e8 95 04 00 00       	call   844b680 <_ZN30DB_UpdateCeraShopPurchaseCount20_updatePurchaseCountEjt>
 844b1eb:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 844b1f0:	c7 44 24 08 c1 bb 00 	movl   $0xbbc1,0x8(%esp)
 844b1f7:	00 
 844b1f8:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 844b1ff:	08 
 844b200:	89 04 24             	mov    %eax,(%esp)
 844b203:	e8 7e 48 e4 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 844b208:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 844b20f:	00 
 844b210:	89 44 24 04          	mov    %eax,0x4(%esp)
 844b214:	8d 45 b8             	lea    -0x48(%ebp),%eax
 844b217:	89 04 24             	mov    %eax,(%esp)
 844b21a:	e8 07 da c7 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 844b21f:	8d 45 b8             	lea    -0x48(%ebp),%eax
 844b222:	89 04 24             	mov    %eax,(%esp)
 844b225:	e8 1c da c7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 844b22a:	c7 44 24 04 d9 02 00 	movl   $0x2d9,0x4(%esp)
 844b231:	00 
 844b232:	89 04 24             	mov    %eax,(%esp)
 844b235:	e8 1c da c7 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 844b23a:	8d 45 b8             	lea    -0x48(%ebp),%eax
 844b23d:	89 04 24             	mov    %eax,(%esp)
 844b240:	e8 01 da c7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 844b245:	8b 55 10             	mov    0x10(%ebp),%edx
 844b248:	89 54 24 04          	mov    %edx,0x4(%esp)
 844b24c:	89 04 24             	mov    %eax,(%esp)
 844b24f:	e8 02 da c7 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 844b254:	8d 45 b8             	lea    -0x48(%ebp),%eax
 844b257:	89 04 24             	mov    %eax,(%esp)
 844b25a:	e8 ef d9 c7 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 844b25f:	89 04 24             	mov    %eax,(%esp)
 844b262:	e8 8f 95 00 00       	call   84547f6 <_ZN12CStreamGuard11GetInBufferI27SIG_CERASHOP_PURCHASE_COUNTEEPT_v>
 844b267:	89 45 f4             	mov    %eax,-0xc(%ebp)
 844b26a:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 844b26e:	75 3d                	jne    844b2ad <_ZN30DB_UpdateCeraShopPurchaseCount8dispatchEiiP6Stream+0x1e1>
 844b270:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 844b277:	00 
 844b278:	c7 44 24 08 c9 bb 00 	movl   $0xbbc9,0x8(%esp)
 844b27f:	00 
 844b280:	c7 44 24 04 a0 ac c5 	movl   $0x8c5aca0,0x4(%esp)
 844b287:	08 
 844b288:	8d 45 e0             	lea    -0x20(%ebp),%eax
 844b28b:	89 04 24             	mov    %eax,(%esp)
 844b28e:	e8 85 44 10 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 844b293:	c7 44 24 04 a8 94 c5 	movl   $0x8c594a8,0x4(%esp)
 844b29a:	08 
 844b29b:	8d 45 e0             	lea    -0x20(%ebp),%eax
 844b29e:	89 04 24             	mov    %eax,(%esp)
 844b2a1:	e8 e2 44 10 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 844b2a6:	bb 00 00 00 00       	mov    $0x0,%ebx
 844b2ab:	eb 5a                	jmp    844b307 <_ZN30DB_UpdateCeraShopPurchaseCount8dispatchEiiP6Stream+0x23b>
 844b2ad:	8b 45 f4             	mov    -0xc(%ebp),%eax
 844b2b0:	8b 55 f0             	mov    -0x10(%ebp),%edx
 844b2b3:	8b 0a                	mov    (%edx),%ecx
 844b2b5:	89 08                	mov    %ecx,(%eax)
 844b2b7:	8b 4a 04             	mov    0x4(%edx),%ecx
 844b2ba:	89 48 04             	mov    %ecx,0x4(%eax)
 844b2bd:	8b 4a 08             	mov    0x8(%edx),%ecx
 844b2c0:	89 48 08             	mov    %ecx,0x8(%eax)
 844b2c3:	8b 52 0c             	mov    0xc(%edx),%edx
 844b2c6:	89 50 0c             	mov    %edx,0xc(%eax)
 844b2c9:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 844b2ce:	8d 55 b8             	lea    -0x48(%ebp),%edx
 844b2d1:	89 54 24 08          	mov    %edx,0x8(%esp)
 844b2d5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 844b2dc:	00 
 844b2dd:	89 04 24             	mov    %eax,(%esp)
 844b2e0:	e8 f9 5c 12 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 844b2e5:	bb 01 00 00 00       	mov    $0x1,%ebx
 844b2ea:	eb 1b                	jmp    844b307 <_ZN30DB_UpdateCeraShopPurchaseCount8dispatchEiiP6Stream+0x23b>
 844b2ec:	89 d3                	mov    %edx,%ebx
 844b2ee:	89 c6                	mov    %eax,%esi
 844b2f0:	8d 45 b8             	lea    -0x48(%ebp),%eax
 844b2f3:	89 04 24             	mov    %eax,(%esp)
 844b2f6:	e8 d7 15 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 844b2fb:	89 f0                	mov    %esi,%eax
 844b2fd:	89 da                	mov    %ebx,%edx
 844b2ff:	89 04 24             	mov    %eax,(%esp)
 844b302:	e8 49 84 69 00       	call   8ae3750 <_Unwind_Resume>
 844b307:	8d 45 b8             	lea    -0x48(%ebp),%eax
 844b30a:	89 04 24             	mov    %eax,(%esp)
 844b30d:	e8 c0 15 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 844b312:	89 d8                	mov    %ebx,%eax
 844b314:	83 c4 50             	add    $0x50,%esp
 844b317:	5b                   	pop    %ebx
 844b318:	5e                   	pop    %esi
 844b319:	5d                   	pop    %ebp
 844b31a:	c3                   	ret
 844b31b:	90                   	nop

```

```c
// DB_UpdateCeraShopPurchaseCount::dispatch @ 0x844b0cc

/* DB_UpdateCeraShopPurchaseCount::dispatch(int, int, Stream*) */

bool __thiscall
DB_UpdateCeraShopPurchaseCount::dispatch
          (DB_UpdateCeraShopPurchaseCount *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  bool bVar4;
  CStreamGuard local_4c [8];
  cMyTrace local_44 [16];
  cMyTrace local_34 [16];
  cMyTrace local_24 [16];
  SIG_CERASHOP_PURCHASE_COUNT *local_14;
  SIG_CERASHOP_PURCHASE_COUNT *local_10;
  
  local_14 = Stream::GetOutBuffer<SIG_CERASHOP_PURCHASE_COUNT>(param_3);
  if (local_14 == (SIG_CERASHOP_PURCHASE_COUNT *)0x0) {
    cMyTrace::cMyTrace(local_44,
                       "virtual bool DB_UpdateCeraShopPurchaseCount::dispatch(int, int, Stream*)",
                       0xbbac,5);
    cMyTrace::operator()(local_44,"[PURCAHSE BONUS] ptrData is null.");
    bVar4 = false;
  }
  else {
    cVar1 = _selectPurchaseCount(this,*(uint *)local_14,(ushort *)(local_14 + 8));
    if (cVar1 == '\x01') {
      if (*(short *)(local_14 + 8) == 0) {
        *(undefined2 *)(local_14 + 8) = 1;
        _insertPurchaseCount(this,*(uint *)local_14);
      }
      else {
        *(short *)(local_14 + 8) = *(short *)(local_14 + 8) + 1;
        _updatePurchaseCount(this,*(uint *)local_14,*(ushort *)(local_14 + 8));
      }
      pSVar2 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xbbc1);
      CStreamGuard::CStreamGuard(local_4c,pSVar2,true);
      pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_4c);
                    /* try { // try from 0844b235 to 0844b2e4 has its CatchHandler @ 0844b2ec */
      CStreamGuard::operator<<(pCVar3,0x2d9);
      pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_4c);
      CStreamGuard::operator<<(pCVar3,param_2);
      pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_4c);
      local_10 = CStreamGuard::GetInBuffer<SIG_CERASHOP_PURCHASE_COUNT>(pCVar3);
      bVar4 = local_10 != (SIG_CERASHOP_PURCHASE_COUNT *)0x0;
      if (bVar4) {
        *(uint *)local_10 = *(uint *)local_14;
        *(uint *)(local_10 + 4) = *(uint *)(local_14 + 4);
        *(uint *)(local_10 + 8) = *(uint *)(local_14 + 8);
        *(uint *)(local_10 + 0xc) = *(uint *)(local_14 + 0xc);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_4c);
      }
      else {
        cMyTrace::cMyTrace(local_24,
                           "virtual bool DB_UpdateCeraShopPurchaseCount::dispatch(int, int, Stream*)"
                           ,0xbbc9,5);
        cMyTrace::operator()(local_24,"[PURCAHSE BONUS] ptrData is null");
      }
      CStreamGuard::~CStreamGuard(local_4c);
    }
    else {
      cMyTrace::cMyTrace(local_34,
                         "virtual bool DB_UpdateCeraShopPurchaseCount::dispatch(int, int, Stream*)",
                         0xbbb2,5);
      cMyTrace::operator()(local_34,"[PURCAHSE BONUS] select query fail.");
      bVar4 = false;
    }
  }
  return bVar4;
}

```

---

## makeRequest

```asm
// === 0844b31c DB_UpdateCeraShopPurchaseCount::makeRequest  [0x0844b31c-0x844b44f] ===
 844b31c:	55                   	push   %ebp
 844b31d:	89 e5                	mov    %esp,%ebp
 844b31f:	56                   	push   %esi
 844b320:	53                   	push   %ebx
 844b321:	83 ec 30             	sub    $0x30,%esp
 844b324:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 844b329:	c7 44 24 08 d6 bb 00 	movl   $0xbbd6,0x8(%esp)
 844b330:	00 
 844b331:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 844b338:	08 
 844b339:	89 04 24             	mov    %eax,(%esp)
 844b33c:	e8 45 47 e4 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 844b341:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 844b348:	00 
 844b349:	89 44 24 04          	mov    %eax,0x4(%esp)
 844b34d:	8d 45 dc             	lea    -0x24(%ebp),%eax
 844b350:	89 04 24             	mov    %eax,(%esp)
 844b353:	e8 ce d8 c7 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 844b358:	8d 45 dc             	lea    -0x24(%ebp),%eax
 844b35b:	89 04 24             	mov    %eax,(%esp)
 844b35e:	e8 e3 d8 c7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 844b363:	c7 44 24 04 d9 02 00 	movl   $0x2d9,0x4(%esp)
 844b36a:	00 
 844b36b:	89 04 24             	mov    %eax,(%esp)
 844b36e:	e8 e3 d8 c7 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 844b373:	8d 45 dc             	lea    -0x24(%ebp),%eax
 844b376:	89 04 24             	mov    %eax,(%esp)
 844b379:	e8 c8 d8 c7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 844b37e:	8b 55 14             	mov    0x14(%ebp),%edx
 844b381:	89 54 24 04          	mov    %edx,0x4(%esp)
 844b385:	89 04 24             	mov    %eax,(%esp)
 844b388:	e8 c9 d8 c7 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 844b38d:	8d 45 dc             	lea    -0x24(%ebp),%eax
 844b390:	89 04 24             	mov    %eax,(%esp)
 844b393:	e8 b6 d8 c7 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 844b398:	89 04 24             	mov    %eax,(%esp)
 844b39b:	e8 56 94 00 00       	call   84547f6 <_ZN12CStreamGuard11GetInBufferI27SIG_CERASHOP_PURCHASE_COUNTEEPT_v>
 844b3a0:	89 45 f4             	mov    %eax,-0xc(%ebp)
 844b3a3:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 844b3a7:	75 38                	jne    844b3e1 <_ZN30DB_UpdateCeraShopPurchaseCount11makeRequestEjmii+0xc5>
 844b3a9:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 844b3b0:	00 
 844b3b1:	c7 44 24 08 de bb 00 	movl   $0xbbde,0x8(%esp)
 844b3b8:	00 
 844b3b9:	c7 44 24 04 20 ac c5 	movl   $0x8c5ac20,0x4(%esp)
 844b3c0:	08 
 844b3c1:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 844b3c4:	89 04 24             	mov    %eax,(%esp)
 844b3c7:	e8 4c 43 10 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 844b3cc:	c7 44 24 04 a8 94 c5 	movl   $0x8c594a8,0x4(%esp)
 844b3d3:	08 
 844b3d4:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 844b3d7:	89 04 24             	mov    %eax,(%esp)
 844b3da:	e8 a9 43 10 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 844b3df:	eb 5c                	jmp    844b43d <_ZN30DB_UpdateCeraShopPurchaseCount11makeRequestEjmii+0x121>
 844b3e1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 844b3e4:	8b 55 10             	mov    0x10(%ebp),%edx
 844b3e7:	89 50 0c             	mov    %edx,0xc(%eax)
 844b3ea:	8b 45 f4             	mov    -0xc(%ebp),%eax
 844b3ed:	8b 55 08             	mov    0x8(%ebp),%edx
 844b3f0:	89 10                	mov    %edx,(%eax)
 844b3f2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 844b3f5:	8b 55 0c             	mov    0xc(%ebp),%edx
 844b3f8:	89 50 04             	mov    %edx,0x4(%eax)
 844b3fb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 844b3fe:	66 c7 40 08 00 00    	movw   $0x0,0x8(%eax)
 844b404:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 844b409:	8d 55 dc             	lea    -0x24(%ebp),%edx
 844b40c:	89 54 24 08          	mov    %edx,0x8(%esp)
 844b410:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 844b417:	00 
 844b418:	89 04 24             	mov    %eax,(%esp)
 844b41b:	e8 be 5b 12 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 844b420:	eb 1b                	jmp    844b43d <_ZN30DB_UpdateCeraShopPurchaseCount11makeRequestEjmii+0x121>
 844b422:	89 d3                	mov    %edx,%ebx
 844b424:	89 c6                	mov    %eax,%esi
 844b426:	8d 45 dc             	lea    -0x24(%ebp),%eax
 844b429:	89 04 24             	mov    %eax,(%esp)
 844b42c:	e8 a1 14 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 844b431:	89 f0                	mov    %esi,%eax
 844b433:	89 da                	mov    %ebx,%edx
 844b435:	89 04 24             	mov    %eax,(%esp)
 844b438:	e8 13 83 69 00       	call   8ae3750 <_Unwind_Resume>
 844b43d:	8d 45 dc             	lea    -0x24(%ebp),%eax
 844b440:	89 04 24             	mov    %eax,(%esp)
 844b443:	e8 8a 14 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 844b448:	83 c4 30             	add    $0x30,%esp
 844b44b:	5b                   	pop    %ebx
 844b44c:	5e                   	pop    %esi
 844b44d:	5d                   	pop    %ebp
 844b44e:	c3                   	ret
 844b44f:	90                   	nop

```

```c
// DB_UpdateCeraShopPurchaseCount::makeRequest @ 0x844b31c

/* DB_UpdateCeraShopPurchaseCount::makeRequest(unsigned int, unsigned long, int, int) */

void DB_UpdateCeraShopPurchaseCount::makeRequest(uint param_1,ulong param_2,int param_3,int param_4)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_28 [8];
  cMyTrace local_20 [16];
  SIG_CERASHOP_PURCHASE_COUNT *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xbbd6);
  CStreamGuard::CStreamGuard(local_28,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_28);
                    /* try { // try from 0844b36e to 0844b41f has its CatchHandler @ 0844b422 */
  CStreamGuard::operator<<(pCVar2,0x2d9);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_28);
  CStreamGuard::operator<<(pCVar2,param_4);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_28);
  local_10 = CStreamGuard::GetInBuffer<SIG_CERASHOP_PURCHASE_COUNT>(pCVar2);
  if (local_10 == (SIG_CERASHOP_PURCHASE_COUNT *)0x0) {
    cMyTrace::cMyTrace(local_20,
                       "static void DB_UpdateCeraShopPurchaseCount::makeRequest(memberIdentificationNumber_t, itemIndexOnlyServer_t, int, int)"
                       ,0xbbde,5);
    cMyTrace::operator()(local_20,"[PURCAHSE BONUS] ptrData is null");
  }
  else {
    *(int *)(local_10 + 0xc) = param_3;
    *(uint *)local_10 = param_1;
    *(ulong *)(local_10 + 4) = param_2;
    *(undefined2 *)(local_10 + 8) = 0;
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_28);
  }
  CStreamGuard::~CStreamGuard(local_28);
  return;
}

```

