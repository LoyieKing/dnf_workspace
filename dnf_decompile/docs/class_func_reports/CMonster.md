# CMonster

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 8

---

## deathTowerSpecifyItemDrop

```asm
// === 0834f84a CMonster::deathTowerSpecifyItemDrop  [0x0834f84a-0x834f875] ===
 834f84a:	55                   	push   %ebp
 834f84b:	89 e5                	mov    %esp,%ebp
 834f84d:	53                   	push   %ebx
 834f84e:	83 ec 14             	sub    $0x14,%esp
 834f851:	8b 45 08             	mov    0x8(%ebp),%eax
 834f854:	8d 58 48             	lea    0x48(%eax),%ebx
 834f857:	c7 04 24 10 27 00 00 	movl   $0x2710,(%esp)
 834f85e:	e8 24 23 36 00       	call   86b1b87 <_Z12get_rand_inti>
 834f863:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 834f867:	89 04 24             	mov    %eax,(%esp)
 834f86a:	e8 03 9e ff ff       	call   8349672 <_Z16_drop_item_indexiRKSt6vectorISt4pairIiiESaIS1_EE>
 834f86f:	83 c4 14             	add    $0x14,%esp
 834f872:	5b                   	pop    %ebx
 834f873:	5d                   	pop    %ebp
 834f874:	c3                   	ret
 834f875:	90                   	nop

```

```c
// CMonster::deathTowerSpecifyItemDrop @ 0x834f84a

/* CMonster::deathTowerSpecifyItemDrop() const */

void __thiscall CMonster::deathTowerSpecifyItemDrop(CMonster *this)

{
  int iVar1;
  
  iVar1 = get_rand_int(10000);
  _drop_item_index(iVar1,(vector *)(this + 0x48));
  return;
}

```

---

## drop_item_index

```asm
// === 0834f776 CMonster::drop_item_index  [0x0834f776-0x834f7e3] ===
 834f776:	55                   	push   %ebp
 834f777:	89 e5                	mov    %esp,%ebp
 834f779:	53                   	push   %ebx
 834f77a:	83 ec 14             	sub    $0x14,%esp
 834f77d:	8b 45 08             	mov    0x8(%ebp),%eax
 834f780:	83 c0 3c             	add    $0x3c,%eax
 834f783:	89 04 24             	mov    %eax,(%esp)
 834f786:	e8 0f 1a dc ff       	call   811119a <_ZNKSt6vectorISt4pairIiiESaIS1_EE5emptyEv>
 834f78b:	83 f0 01             	xor    $0x1,%eax
 834f78e:	84 c0                	test   %al,%al
 834f790:	74 22                	je     834f7b4 <_ZNK8CMonster15drop_item_indexEj+0x3e>
 834f792:	8b 45 08             	mov    0x8(%ebp),%eax
 834f795:	8d 58 3c             	lea    0x3c(%eax),%ebx
 834f798:	8b 45 08             	mov    0x8(%ebp),%eax
 834f79b:	8b 40 38             	mov    0x38(%eax),%eax
 834f79e:	89 04 24             	mov    %eax,(%esp)
 834f7a1:	e8 e1 23 36 00       	call   86b1b87 <_Z12get_rand_inti>
 834f7a6:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 834f7aa:	89 04 24             	mov    %eax,(%esp)
 834f7ad:	e8 c0 9e ff ff       	call   8349672 <_Z16_drop_item_indexiRKSt6vectorISt4pairIiiESaIS1_EE>
 834f7b2:	eb 2a                	jmp    834f7de <_ZNK8CMonster15drop_item_indexEj+0x68>
 834f7b4:	8b 55 0c             	mov    0xc(%ebp),%edx
 834f7b7:	89 d0                	mov    %edx,%eax
 834f7b9:	01 c0                	add    %eax,%eax
 834f7bb:	01 d0                	add    %edx,%eax
 834f7bd:	c1 e0 02             	shl    $0x2,%eax
 834f7c0:	03 45 08             	add    0x8(%ebp),%eax
 834f7c3:	8d 58 08             	lea    0x8(%eax),%ebx
 834f7c6:	c7 04 24 10 27 00 00 	movl   $0x2710,(%esp)
 834f7cd:	e8 b5 23 36 00       	call   86b1b87 <_Z12get_rand_inti>
 834f7d2:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 834f7d6:	89 04 24             	mov    %eax,(%esp)
 834f7d9:	e8 94 9e ff ff       	call   8349672 <_Z16_drop_item_indexiRKSt6vectorISt4pairIiiESaIS1_EE>
 834f7de:	83 c4 14             	add    $0x14,%esp
 834f7e1:	5b                   	pop    %ebx
 834f7e2:	5d                   	pop    %ebp
 834f7e3:	c3                   	ret

```

```c
// CMonster::drop_item_index @ 0x834f776

/* CMonster::drop_item_index(unsigned int) const */

void __thiscall CMonster::drop_item_index(CMonster *this,uint param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::empty();
  if (cVar1 == '\x01') {
    iVar2 = get_rand_int(10000);
    _drop_item_index(iVar2,(vector *)(this + param_1 * 0xc + 8));
  }
  else {
    iVar2 = get_rand_int(*(int *)(this + 0x38));
    _drop_item_index(iVar2,(vector *)(this + 0x3c));
  }
  return;
}

```

---

## drop_item_index_0834f7e4

```asm
// === 0834f7e4 CMonster::drop_item_index  [0x0834f7e4-0x834f849] ===
 834f7e4:	55                   	push   %ebp
 834f7e5:	89 e5                	mov    %esp,%ebp
 834f7e7:	53                   	push   %ebx
 834f7e8:	83 ec 14             	sub    $0x14,%esp
 834f7eb:	8b 45 08             	mov    0x8(%ebp),%eax
 834f7ee:	83 c0 3c             	add    $0x3c,%eax
 834f7f1:	89 04 24             	mov    %eax,(%esp)
 834f7f4:	e8 a1 19 dc ff       	call   811119a <_ZNKSt6vectorISt4pairIiiESaIS1_EE5emptyEv>
 834f7f9:	83 f0 01             	xor    $0x1,%eax
 834f7fc:	84 c0                	test   %al,%al
 834f7fe:	74 22                	je     834f822 <_ZNK8CMonster15drop_item_indexEji+0x3e>
 834f800:	8b 45 08             	mov    0x8(%ebp),%eax
 834f803:	8d 58 3c             	lea    0x3c(%eax),%ebx
 834f806:	8b 45 08             	mov    0x8(%ebp),%eax
 834f809:	8b 40 38             	mov    0x38(%eax),%eax
 834f80c:	89 04 24             	mov    %eax,(%esp)
 834f80f:	e8 73 23 36 00       	call   86b1b87 <_Z12get_rand_inti>
 834f814:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 834f818:	89 04 24             	mov    %eax,(%esp)
 834f81b:	e8 52 9e ff ff       	call   8349672 <_Z16_drop_item_indexiRKSt6vectorISt4pairIiiESaIS1_EE>
 834f820:	eb 21                	jmp    834f843 <_ZNK8CMonster15drop_item_indexEji+0x5f>
 834f822:	8b 55 0c             	mov    0xc(%ebp),%edx
 834f825:	89 d0                	mov    %edx,%eax
 834f827:	01 c0                	add    %eax,%eax
 834f829:	01 d0                	add    %edx,%eax
 834f82b:	c1 e0 02             	shl    $0x2,%eax
 834f82e:	03 45 08             	add    0x8(%ebp),%eax
 834f831:	83 c0 08             	add    $0x8,%eax
 834f834:	89 44 24 04          	mov    %eax,0x4(%esp)
 834f838:	8b 45 10             	mov    0x10(%ebp),%eax
 834f83b:	89 04 24             	mov    %eax,(%esp)
 834f83e:	e8 2f 9e ff ff       	call   8349672 <_Z16_drop_item_indexiRKSt6vectorISt4pairIiiESaIS1_EE>
 834f843:	83 c4 14             	add    $0x14,%esp
 834f846:	5b                   	pop    %ebx
 834f847:	5d                   	pop    %ebp
 834f848:	c3                   	ret
 834f849:	90                   	nop

```

```c
// CMonster::drop_item_index @ 0x834f7e4

/* CMonster::drop_item_index(unsigned int, int) const */

void __thiscall CMonster::drop_item_index(CMonster *this,uint param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  cVar1 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::empty();
  if (cVar1 == '\x01') {
    _drop_item_index(param_2,(vector *)(this + param_1 * 0xc + 8));
  }
  else {
    iVar2 = get_rand_int(*(int *)(this + 0x38));
    _drop_item_index(iVar2,(vector *)(this + 0x3c));
  }
  return;
}

```

---

## generateCatchMonsterItem

```asm
// === 0834f8e8 CMonster::generateCatchMonsterItem  [0x0834f8e8-0x834f90d] ===
 834f8e8:	55                   	push   %ebp
 834f8e9:	89 e5                	mov    %esp,%ebp
 834f8eb:	83 ec 18             	sub    $0x18,%esp
 834f8ee:	8b 45 08             	mov    0x8(%ebp),%eax
 834f8f1:	89 04 24             	mov    %eax,(%esp)
 834f8f4:	e8 cd ed fb ff       	call   830e6c6 <_ZNK8CMonster16getMonsterScriptEv>
 834f8f9:	8d 50 70             	lea    0x70(%eax),%edx
 834f8fc:	8b 45 0c             	mov    0xc(%ebp),%eax
 834f8ff:	89 44 24 04          	mov    %eax,0x4(%esp)
 834f903:	89 14 24             	mov    %edx,(%esp)
 834f906:	e8 40 a6 ff ff       	call   8349f4b <_Z24generateCatchMonsterItemRKSt6vectorI13CatchItemInfoSaIS0_EERS_I10Inven_ItemSaIS5_EE>
 834f90b:	c9                   	leave
 834f90c:	c3                   	ret
 834f90d:	90                   	nop

```

```c
// CMonster::generateCatchMonsterItem @ 0x834f8e8

/* CMonster::generateCatchMonsterItem(std::vector<Inven_Item, std::allocator<Inven_Item> >&) const
    */

void __thiscall CMonster::generateCatchMonsterItem(CMonster *this,vector *param_1)

{
  int iVar1;
  
  iVar1 = getMonsterScript(this);
  ::generateCatchMonsterItem((vector *)(iVar1 + 0x70),param_1);
  return;
}

```

---

## generateDropAvatarItem

```asm
// === 0834f8a6 CMonster::generateDropAvatarItem  [0x0834f8a6-0x834f8e7] ===
 834f8a6:	55                   	push   %ebp
 834f8a7:	89 e5                	mov    %esp,%ebp
 834f8a9:	53                   	push   %ebx
 834f8aa:	83 ec 24             	sub    $0x24,%esp
 834f8ad:	8b 55 0c             	mov    0xc(%ebp),%edx
 834f8b0:	8b 45 10             	mov    0x10(%ebp),%eax
 834f8b3:	88 55 f4             	mov    %dl,-0xc(%ebp)
 834f8b6:	88 45 f0             	mov    %al,-0x10(%ebp)
 834f8b9:	0f b6 55 f0          	movzbl -0x10(%ebp),%edx
 834f8bd:	0f b6 45 f4          	movzbl -0xc(%ebp),%eax
 834f8c1:	8b 4d 08             	mov    0x8(%ebp),%ecx
 834f8c4:	8d 99 f8 0c 00 00    	lea    0xcf8(%ecx),%ebx
 834f8ca:	8b 4d 14             	mov    0x14(%ebp),%ecx
 834f8cd:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 834f8d1:	89 54 24 08          	mov    %edx,0x8(%esp)
 834f8d5:	89 44 24 04          	mov    %eax,0x4(%esp)
 834f8d9:	89 1c 24             	mov    %ebx,(%esp)
 834f8dc:	e8 bf a4 ff ff       	call   8349da0 <_Z22generateDropAvatarItemRK23stEnamyDropAvatarInfo_thhRSt6vectorI10Inven_ItemSaIS3_EE>
 834f8e1:	83 c4 24             	add    $0x24,%esp
 834f8e4:	5b                   	pop    %ebx
 834f8e5:	5d                   	pop    %ebp
 834f8e6:	c3                   	ret
 834f8e7:	90                   	nop

```

```c
// CMonster::generateDropAvatarItem @ 0x834f8a6

/* CMonster::generateDropAvatarItem(unsigned char, unsigned char, std::vector<Inven_Item,
   std::allocator<Inven_Item> >&) const */

void __thiscall
CMonster::generateDropAvatarItem(CMonster *this,uchar param_1,uchar param_2,vector *param_3)

{
  ::generateDropAvatarItem((stEnamyDropAvatarInfo_t *)(this + 0xcf8),param_1,param_2,param_3);
  return;
}

```

---

## generateIndependentItem

```asm
// === 0834f876 CMonster::generateIndependentItem  [0x0834f876-0x834f8a5] ===
 834f876:	55                   	push   %ebp
 834f877:	89 e5                	mov    %esp,%ebp
 834f879:	83 ec 18             	sub    $0x18,%esp
 834f87c:	8b 45 08             	mov    0x8(%ebp),%eax
 834f87f:	89 04 24             	mov    %eax,(%esp)
 834f882:	e8 3f ee fb ff       	call   830e6c6 <_ZNK8CMonster16getMonsterScriptEv>
 834f887:	8d 90 ac 03 00 00    	lea    0x3ac(%eax),%edx
 834f88d:	8b 45 10             	mov    0x10(%ebp),%eax
 834f890:	89 44 24 08          	mov    %eax,0x8(%esp)
 834f894:	8b 45 0c             	mov    0xc(%ebp),%eax
 834f897:	89 44 24 04          	mov    %eax,0x4(%esp)
 834f89b:	89 14 24             	mov    %edx,(%esp)
 834f89e:	e8 f7 9f ff ff       	call   834989a <_Z23generateIndependentItemRKSt6vectorI26stMonsterIndependentDrop_tSaIS0_EERKN8WongWork19stGenerateRefData_tERS_I10Inven_ItemSaIS9_EE>
 834f8a3:	c9                   	leave
 834f8a4:	c3                   	ret
 834f8a5:	90                   	nop

```

```c
// CMonster::generateIndependentItem @ 0x834f876

/* CMonster::generateIndependentItem(WongWork::stGenerateRefData_t const&, std::vector<Inven_Item,
   std::allocator<Inven_Item> >&) const */

void __thiscall
CMonster::generateIndependentItem(CMonster *this,stGenerateRefData_t *param_1,vector *param_2)

{
  int iVar1;
  
  iVar1 = getMonsterScript(this);
  ::generateIndependentItem((vector *)(iVar1 + 0x3ac),param_1,param_2);
  return;
}

```

---

## get_specialItem_list_size

```asm
// === 0834f746 CMonster::get_specialItem_list_size  [0x0834f746-0x834f775] ===
 834f746:	55                   	push   %ebp
 834f747:	89 e5                	mov    %esp,%ebp
 834f749:	83 ec 18             	sub    $0x18,%esp
 834f74c:	83 7d 0c 03          	cmpl   $0x3,0xc(%ebp)
 834f750:	77 1c                	ja     834f76e <_ZNK8CMonster25get_specialItem_list_sizeEj+0x28>
 834f752:	8b 55 0c             	mov    0xc(%ebp),%edx
 834f755:	89 d0                	mov    %edx,%eax
 834f757:	01 c0                	add    %eax,%eax
 834f759:	01 d0                	add    %edx,%eax
 834f75b:	c1 e0 02             	shl    $0x2,%eax
 834f75e:	03 45 08             	add    0x8(%ebp),%eax
 834f761:	83 c0 08             	add    $0x8,%eax
 834f764:	89 04 24             	mov    %eax,(%esp)
 834f767:	e8 a8 e0 d8 ff       	call   80dd814 <_ZNKSt6vectorISt4pairIiiESaIS1_EE4sizeEv>
 834f76c:	eb 05                	jmp    834f773 <_ZNK8CMonster25get_specialItem_list_sizeEj+0x2d>
 834f76e:	b8 00 00 00 00       	mov    $0x0,%eax
 834f773:	c9                   	leave
 834f774:	c3                   	ret
 834f775:	90                   	nop

```

```c
// CMonster::get_specialItem_list_size @ 0x834f746

/* CMonster::get_specialItem_list_size(unsigned int) const */

undefined4 __thiscall CMonster::get_specialItem_list_size(CMonster *this,uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 4) {
    uVar1 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                      ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                       (this + param_1 * 0xc + 8));
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## set_monster

```asm
// === 0834f650 CMonster::set_monster  [0x0834f650-0x834f745] ===
 834f650:	55                   	push   %ebp
 834f651:	89 e5                	mov    %esp,%ebp
 834f653:	83 ec 28             	sub    $0x28,%esp
 834f656:	8b 45 0c             	mov    0xc(%ebp),%eax
 834f659:	8b 10                	mov    (%eax),%edx
 834f65b:	8b 45 08             	mov    0x8(%ebp),%eax
 834f65e:	89 50 04             	mov    %edx,0x4(%eax)
 834f661:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 834f668:	eb 37                	jmp    834f6a1 <_ZN8CMonster11set_monsterER15STMonsterScript+0x51>
 834f66a:	8b 55 f4             	mov    -0xc(%ebp),%edx
 834f66d:	89 d0                	mov    %edx,%eax
 834f66f:	01 c0                	add    %eax,%eax
 834f671:	01 d0                	add    %edx,%eax
 834f673:	c1 e0 02             	shl    $0x2,%eax
 834f676:	83 c0 20             	add    $0x20,%eax
 834f679:	03 45 0c             	add    0xc(%ebp),%eax
 834f67c:	8d 48 08             	lea    0x8(%eax),%ecx
 834f67f:	8b 55 f4             	mov    -0xc(%ebp),%edx
 834f682:	89 d0                	mov    %edx,%eax
 834f684:	01 c0                	add    %eax,%eax
 834f686:	01 d0                	add    %edx,%eax
 834f688:	c1 e0 02             	shl    $0x2,%eax
 834f68b:	03 45 08             	add    0x8(%ebp),%eax
 834f68e:	83 c0 08             	add    $0x8,%eax
 834f691:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 834f695:	89 04 24             	mov    %eax,(%esp)
 834f698:	e8 ef f9 fb ff       	call   830f08c <_ZNSt6vectorISt4pairIiiESaIS1_EEaSERKS3_>
 834f69d:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 834f6a1:	83 7d f4 03          	cmpl   $0x3,-0xc(%ebp)
 834f6a5:	0f 9e c0             	setle  %al
 834f6a8:	84 c0                	test   %al,%al
 834f6aa:	75 be                	jne    834f66a <_ZN8CMonster11set_monsterER15STMonsterScript+0x1a>
 834f6ac:	8b 45 0c             	mov    0xc(%ebp),%eax
 834f6af:	8b 90 88 00 00 00    	mov    0x88(%eax),%edx
 834f6b5:	8b 45 08             	mov    0x8(%ebp),%eax
 834f6b8:	89 50 38             	mov    %edx,0x38(%eax)
 834f6bb:	8b 45 0c             	mov    0xc(%ebp),%eax
 834f6be:	8d 90 8c 00 00 00    	lea    0x8c(%eax),%edx
 834f6c4:	8b 45 08             	mov    0x8(%ebp),%eax
 834f6c7:	83 c0 3c             	add    $0x3c,%eax
 834f6ca:	89 54 24 04          	mov    %edx,0x4(%esp)
 834f6ce:	89 04 24             	mov    %eax,(%esp)
 834f6d1:	e8 b6 f9 fb ff       	call   830f08c <_ZNSt6vectorISt4pairIiiESaIS1_EEaSERKS3_>
 834f6d6:	8b 45 0c             	mov    0xc(%ebp),%eax
 834f6d9:	8b 90 ec 03 00 00    	mov    0x3ec(%eax),%edx
 834f6df:	8b 45 08             	mov    0x8(%ebp),%eax
 834f6e2:	89 50 58             	mov    %edx,0x58(%eax)
 834f6e5:	8b 45 0c             	mov    0xc(%ebp),%eax
 834f6e8:	8b 90 f0 03 00 00    	mov    0x3f0(%eax),%edx
 834f6ee:	8b 45 08             	mov    0x8(%ebp),%eax
 834f6f1:	89 50 5c             	mov    %edx,0x5c(%eax)
 834f6f4:	8b 45 0c             	mov    0xc(%ebp),%eax
 834f6f7:	8b 90 4c 0c 00 00    	mov    0xc4c(%eax),%edx
 834f6fd:	8b 45 08             	mov    0x8(%ebp),%eax
 834f700:	89 90 24 1d 00 00    	mov    %edx,0x1d24(%eax)
 834f706:	8b 45 0c             	mov    0xc(%ebp),%eax
 834f709:	0f b6 90 a8 03 00 00 	movzbl 0x3a8(%eax),%edx
 834f710:	8b 45 08             	mov    0x8(%ebp),%eax
 834f713:	88 50 54             	mov    %dl,0x54(%eax)
 834f716:	8b 45 0c             	mov    0xc(%ebp),%eax
 834f719:	8d 50 58             	lea    0x58(%eax),%edx
 834f71c:	8b 45 08             	mov    0x8(%ebp),%eax
 834f71f:	83 c0 48             	add    $0x48,%eax
 834f722:	89 54 24 04          	mov    %edx,0x4(%esp)
 834f726:	89 04 24             	mov    %eax,(%esp)
 834f729:	e8 5e f9 fb ff       	call   830f08c <_ZNSt6vectorISt4pairIiiESaIS1_EEaSERKS3_>
 834f72e:	8b 45 08             	mov    0x8(%ebp),%eax
 834f731:	8d 50 60             	lea    0x60(%eax),%edx
 834f734:	8b 45 0c             	mov    0xc(%ebp),%eax
 834f737:	89 44 24 04          	mov    %eax,0x4(%esp)
 834f73b:	89 14 24             	mov    %edx,(%esp)
 834f73e:	e8 51 82 02 00       	call   8377994 <_ZN15STMonsterScriptaSERKS_>
 834f743:	c9                   	leave
 834f744:	c3                   	ret
 834f745:	90                   	nop

```

```c
// CMonster::set_monster @ 0x834f650

/* CMonster::set_monster(STMonsterScript&) */

void __thiscall CMonster::set_monster(CMonster *this,STMonsterScript *param_1)

{
  int local_10;
  
  *(undefined4 *)(this + 4) = *(undefined4 *)param_1;
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator=
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
               (this + local_10 * 0xc + 8),(vector *)(param_1 + local_10 * 0xc + 0x28));
  }
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x88);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator=
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x3c),
             (vector *)(param_1 + 0x8c));
  *(undefined4 *)(this + 0x58) = *(undefined4 *)(param_1 + 0x3ec);
  *(undefined4 *)(this + 0x5c) = *(undefined4 *)(param_1 + 0x3f0);
  *(undefined4 *)(this + 0x1d24) = *(undefined4 *)(param_1 + 0xc4c);
  this[0x54] = *(CMonster *)(param_1 + 0x3a8);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator=
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x48),
             (vector *)(param_1 + 0x58));
  STMonsterScript::operator=((STMonsterScript *)(this + 0x60),param_1);
  return;
}

```

