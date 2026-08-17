# Taiwan__PurchaseQuery

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## PurchaseQuery

```asm
// === 0817454c Taiwan::PurchaseQuery::PurchaseQuery  [0x0817454c-0x81745a9] ===
 817454c:	55                   	push   %ebp
 817454d:	89 e5                	mov    %esp,%ebp
 817454f:	83 ec 28             	sub    $0x28,%esp
 8174552:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8174555:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8174558:	8b 45 20             	mov    0x20(%ebp),%eax
 817455b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 817455e:	8b 45 08             	mov    0x8(%ebp),%eax
 8174561:	8b 55 0c             	mov    0xc(%ebp),%edx
 8174564:	89 10                	mov    %edx,(%eax)
 8174566:	8b 45 08             	mov    0x8(%ebp),%eax
 8174569:	8b 55 10             	mov    0x10(%ebp),%edx
 817456c:	89 50 04             	mov    %edx,0x4(%eax)
 817456f:	8b 45 08             	mov    0x8(%ebp),%eax
 8174572:	8b 55 14             	mov    0x14(%ebp),%edx
 8174575:	89 50 08             	mov    %edx,0x8(%eax)
 8174578:	8b 45 f0             	mov    -0x10(%ebp),%eax
 817457b:	8b 55 f4             	mov    -0xc(%ebp),%edx
 817457e:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8174581:	89 41 0c             	mov    %eax,0xc(%ecx)
 8174584:	89 51 10             	mov    %edx,0x10(%ecx)
 8174587:	8b 45 08             	mov    0x8(%ebp),%eax
 817458a:	8b 55 18             	mov    0x18(%ebp),%edx
 817458d:	89 50 14             	mov    %edx,0x14(%eax)
 8174590:	8b 45 08             	mov    0x8(%ebp),%eax
 8174593:	c7 40 24 00 00 00 00 	movl   $0x0,0x24(%eax)
 817459a:	8b 45 08             	mov    0x8(%ebp),%eax
 817459d:	83 c0 18             	add    $0x18,%eax
 81745a0:	89 04 24             	mov    %eax,(%esp)
 81745a3:	e8 98 0f 00 00       	call   8175540 <_ZN6Taiwan15BillTransaction4initEv>
 81745a8:	c9                   	leave
 81745a9:	c3                   	ret

```

```c
// Taiwan::PurchaseQuery::PurchaseQuery @ 0x817454c

/* Taiwan::PurchaseQuery::PurchaseQuery(char const*, char const*, unsigned int, unsigned int, long
   long) */

void __thiscall
Taiwan::PurchaseQuery::PurchaseQuery
          (PurchaseQuery *this,char *param_1,char *param_2,uint param_3,uint param_4,
          longlong param_5)

{
  *(char **)this = param_1;
  *(char **)(this + 4) = param_2;
  *(uint *)(this + 8) = param_3;
  *(longlong *)(this + 0xc) = param_5;
  *(uint *)(this + 0x14) = param_4;
  *(undefined4 *)(this + 0x24) = 0;
  BillTransaction::init((BillTransaction *)(this + 0x18));
  return;
}

```

---

## execQuery

```asm
// === 081745f2 Taiwan::PurchaseQuery::execQuery  [0x081745f2-0x817460d] ===
 81745f2:	55                   	push   %ebp
 81745f3:	89 e5                	mov    %esp,%ebp
 81745f5:	83 ec 18             	sub    $0x18,%esp
 81745f8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81745ff:	00 
 8174600:	8b 45 0c             	mov    0xc(%ebp),%eax
 8174603:	89 04 24             	mov    %eax,(%esp)
 8174606:	e8 1b fd 27 00       	call   83f4326 <_ZN5MySQL4execEb>
 817460b:	c9                   	leave
 817460c:	c3                   	ret
 817460d:	90                   	nop

```

```c
// Taiwan::PurchaseQuery::execQuery @ 0x81745f2

/* Taiwan::PurchaseQuery::execQuery(MySQL&) */

void __thiscall Taiwan::PurchaseQuery::execQuery(PurchaseQuery *this,MySQL *param_1)

{
  MySQL::exec(param_1,true);
  return;
}

```

---

## getResult

```asm
// === 0817460e Taiwan::PurchaseQuery::getResult  [0x0817460e-0x81747fd] ===
 817460e:	55                   	push   %ebp
 817460f:	89 e5                	mov    %esp,%ebp
 8174611:	56                   	push   %esi
 8174612:	53                   	push   %ebx
 8174613:	83 ec 30             	sub    $0x30,%esp
 8174616:	c7 44 24 04 50 49 b8 	movl   $0x8b84950,0x4(%esp)
 817461d:	08 
 817461e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8174621:	89 04 24             	mov    %eax,(%esp)
 8174624:	e8 97 fb 27 00       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8174629:	83 f0 01             	xor    $0x1,%eax
 817462c:	84 c0                	test   %al,%al
 817462e:	74 2c                	je     817465c <_ZN6Taiwan13PurchaseQuery9getResultER5MySQL+0x4e>
 8174630:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8174637:	e8 c4 11 5b 00       	call   8725800 <__cxa_allocate_exception>
 817463c:	89 c2                	mov    %eax,%edx
 817463e:	c7 02 87 01 00 00    	movl   $0x187,(%edx)
 8174644:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 817464b:	00 
 817464c:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 8174653:	09 
 8174654:	89 04 24             	mov    %eax,(%esp)
 8174657:	e8 f4 05 5b 00       	call   8724c50 <__cxa_throw>
 817465c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8174663:	00 
 8174664:	8b 45 0c             	mov    0xc(%ebp),%eax
 8174667:	89 04 24             	mov    %eax,(%esp)
 817466a:	e8 b7 fc 27 00       	call   83f4326 <_ZN5MySQL4execEb>
 817466f:	83 f0 01             	xor    $0x1,%eax
 8174672:	84 c0                	test   %al,%al
 8174674:	74 2c                	je     81746a2 <_ZN6Taiwan13PurchaseQuery9getResultER5MySQL+0x94>
 8174676:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 817467d:	e8 7e 11 5b 00       	call   8725800 <__cxa_allocate_exception>
 8174682:	89 c2                	mov    %eax,%edx
 8174684:	c7 02 8a 01 00 00    	movl   $0x18a,(%edx)
 817468a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8174691:	00 
 8174692:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 8174699:	09 
 817469a:	89 04 24             	mov    %eax,(%esp)
 817469d:	e8 ae 05 5b 00       	call   8724c50 <__cxa_throw>
 81746a2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81746a5:	89 04 24             	mov    %eax,(%esp)
 81746a8:	e8 0f fe 27 00       	call   83f44bc <_ZN5MySQL5fetchEv>
 81746ad:	83 f0 01             	xor    $0x1,%eax
 81746b0:	84 c0                	test   %al,%al
 81746b2:	74 2c                	je     81746e0 <_ZN6Taiwan13PurchaseQuery9getResultER5MySQL+0xd2>
 81746b4:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 81746bb:	e8 40 11 5b 00       	call   8725800 <__cxa_allocate_exception>
 81746c0:	89 c2                	mov    %eax,%edx
 81746c2:	c7 02 8d 01 00 00    	movl   $0x18d,(%edx)
 81746c8:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81746cf:	00 
 81746d0:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 81746d7:	09 
 81746d8:	89 04 24             	mov    %eax,(%esp)
 81746db:	e8 70 05 5b 00       	call   8724c50 <__cxa_throw>
 81746e0:	8b 45 08             	mov    0x8(%ebp),%eax
 81746e3:	83 c0 1c             	add    $0x1c,%eax
 81746e6:	89 44 24 08          	mov    %eax,0x8(%esp)
 81746ea:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81746f1:	00 
 81746f2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81746f5:	89 04 24             	mov    %eax,(%esp)
 81746f8:	e8 cb 0d 00 00       	call   81754c8 <_ZN5MySQL13get_ulonglongEiRy>
 81746fd:	83 f0 01             	xor    $0x1,%eax
 8174700:	84 c0                	test   %al,%al
 8174702:	74 2c                	je     8174730 <_ZN6Taiwan13PurchaseQuery9getResultER5MySQL+0x122>
 8174704:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 817470b:	e8 f0 10 5b 00       	call   8725800 <__cxa_allocate_exception>
 8174710:	89 c2                	mov    %eax,%edx
 8174712:	c7 02 90 01 00 00    	movl   $0x190,(%edx)
 8174718:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 817471f:	00 
 8174720:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 8174727:	09 
 8174728:	89 04 24             	mov    %eax,(%esp)
 817472b:	e8 20 05 5b 00       	call   8724c50 <__cxa_throw>
 8174730:	8b 45 08             	mov    0x8(%ebp),%eax
 8174733:	83 c0 24             	add    $0x24,%eax
 8174736:	89 44 24 08          	mov    %eax,0x8(%esp)
 817473a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8174741:	00 
 8174742:	8b 45 0c             	mov    0xc(%ebp),%eax
 8174745:	89 04 24             	mov    %eax,(%esp)
 8174748:	e8 df 21 fa ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 817474d:	83 f0 01             	xor    $0x1,%eax
 8174750:	84 c0                	test   %al,%al
 8174752:	74 2c                	je     8174780 <_ZN6Taiwan13PurchaseQuery9getResultER5MySQL+0x172>
 8174754:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 817475b:	e8 a0 10 5b 00       	call   8725800 <__cxa_allocate_exception>
 8174760:	89 c2                	mov    %eax,%edx
 8174762:	c7 02 93 01 00 00    	movl   $0x193,(%edx)
 8174768:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 817476f:	00 
 8174770:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 8174777:	09 
 8174778:	89 04 24             	mov    %eax,(%esp)
 817477b:	e8 d0 04 5b 00       	call   8724c50 <__cxa_throw>
 8174780:	bb 01 00 00 00       	mov    $0x1,%ebx
 8174785:	eb 6e                	jmp    81747f5 <_ZN6Taiwan13PurchaseQuery9getResultER5MySQL+0x1e7>
 8174787:	83 fa 01             	cmp    $0x1,%edx
 817478a:	74 08                	je     8174794 <_ZN6Taiwan13PurchaseQuery9getResultER5MySQL+0x186>
 817478c:	89 04 24             	mov    %eax,(%esp)
 817478f:	e8 bc ef 96 00       	call   8ae3750 <_Unwind_Resume>
 8174794:	89 04 24             	mov    %eax,(%esp)
 8174797:	e8 44 15 5b 00       	call   8725ce0 <__cxa_begin_catch>
 817479c:	8b 00                	mov    (%eax),%eax
 817479e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81747a1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81747a4:	89 44 24 14          	mov    %eax,0x14(%esp)
 81747a8:	c7 44 24 10 6c 49 b8 	movl   $0x8b8496c,0x10(%esp)
 81747af:	08 
 81747b0:	c7 44 24 0c 99 01 00 	movl   $0x199,0xc(%esp)
 81747b7:	00 
 81747b8:	c7 44 24 08 82 52 b8 	movl   $0x8b85282,0x8(%esp)
 81747bf:	08 
 81747c0:	c7 44 24 04 7c 48 b8 	movl   $0x8b8487c,0x4(%esp)
 81747c7:	08 
 81747c8:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 81747cf:	e8 36 f4 95 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 81747d4:	bb 00 00 00 00       	mov    $0x0,%ebx
 81747d9:	e8 52 14 5b 00       	call   8725c30 <__cxa_end_catch>
 81747de:	eb 15                	jmp    81747f5 <_ZN6Taiwan13PurchaseQuery9getResultER5MySQL+0x1e7>
 81747e0:	89 d3                	mov    %edx,%ebx
 81747e2:	89 c6                	mov    %eax,%esi
 81747e4:	e8 47 14 5b 00       	call   8725c30 <__cxa_end_catch>
 81747e9:	89 f0                	mov    %esi,%eax
 81747eb:	89 da                	mov    %ebx,%edx
 81747ed:	89 04 24             	mov    %eax,(%esp)
 81747f0:	e8 5b ef 96 00       	call   8ae3750 <_Unwind_Resume>
 81747f5:	89 d8                	mov    %ebx,%eax
 81747f7:	83 c4 30             	add    $0x30,%esp
 81747fa:	5b                   	pop    %ebx
 81747fb:	5e                   	pop    %esi
 81747fc:	5d                   	pop    %ebp
 81747fd:	c3                   	ret

```

```c
// Taiwan::PurchaseQuery::getResult @ 0x817460e

/* Taiwan::PurchaseQuery::getResult(MySQL&) */

undefined4 __thiscall Taiwan::PurchaseQuery::getResult(PurchaseQuery *this,MySQL *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  
                    /* try { // try from 08174624 to 0817477f has its CatchHandler @ 08174787 */
  cVar1 = MySQL::set_query(param_1,"select @out_tran, @out_code");
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 0x187;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&int::typeinfo,0);
  }
  cVar1 = MySQL::exec(param_1,true);
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 0x18a;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&int::typeinfo,0);
  }
  cVar1 = MySQL::fetch(param_1);
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 0x18d;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&int::typeinfo,0);
  }
  cVar1 = MySQL::get_ulonglong(param_1,0,(ulonglong *)(this + 0x1c));
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 400;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&int::typeinfo,0);
  }
  cVar1 = MySQL::get_int(param_1,1,(int *)(this + 0x24));
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 0x193;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&int::typeinfo,0);
  }
  return 1;
}

```

---

## setQuery

```asm
// === 081745aa Taiwan::PurchaseQuery::setQuery  [0x081745aa-0x81745f1] ===
 81745aa:	55                   	push   %ebp
 81745ab:	89 e5                	mov    %esp,%ebp
 81745ad:	53                   	push   %ebx
 81745ae:	83 ec 24             	sub    $0x24,%esp
 81745b1:	8b 45 08             	mov    0x8(%ebp),%eax
 81745b4:	8b 58 14             	mov    0x14(%eax),%ebx
 81745b7:	8b 45 08             	mov    0x8(%ebp),%eax
 81745ba:	8b 48 08             	mov    0x8(%eax),%ecx
 81745bd:	8b 45 08             	mov    0x8(%ebp),%eax
 81745c0:	8b 50 04             	mov    0x4(%eax),%edx
 81745c3:	8b 45 08             	mov    0x8(%ebp),%eax
 81745c6:	8b 00                	mov    (%eax),%eax
 81745c8:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 81745cc:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 81745d0:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81745d4:	89 44 24 08          	mov    %eax,0x8(%esp)
 81745d8:	c7 44 24 04 14 49 b8 	movl   $0x8b84914,0x4(%esp)
 81745df:	08 
 81745e0:	8b 45 0c             	mov    0xc(%ebp),%eax
 81745e3:	89 04 24             	mov    %eax,(%esp)
 81745e6:	e8 d5 fb 27 00       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 81745eb:	83 c4 24             	add    $0x24,%esp
 81745ee:	5b                   	pop    %ebx
 81745ef:	5d                   	pop    %ebp
 81745f0:	c3                   	ret
 81745f1:	90                   	nop

```

```c
// Taiwan::PurchaseQuery::setQuery @ 0x81745aa

/* Taiwan::PurchaseQuery::setQuery(MySQL&) */

void __thiscall Taiwan::PurchaseQuery::setQuery(PurchaseQuery *this,MySQL *param_1)

{
  MySQL::set_query(param_1,"call usp_purchase(\'%s\', \'%s\', %u, %u, @out_tran, @out_code)",
                   *(undefined4 *)this,*(undefined4 *)(this + 4),*(undefined4 *)(this + 8),
                   *(undefined4 *)(this + 0x14));
  return;
}

```

