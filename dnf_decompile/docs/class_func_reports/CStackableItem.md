# CStackableItem

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 19

---

## IsAvatarOptionChangeItem

```asm
// === 0850eb42 CStackableItem::IsAvatarOptionChangeItem  [0x0850eb42-0x850eb51] ===
 850eb42:	55                   	push   %ebp
 850eb43:	89 e5                	mov    %esp,%ebp
 850eb45:	8b 45 08             	mov    0x8(%ebp),%eax
 850eb48:	0f b6 80 98 03 00 00 	movzbl 0x398(%eax),%eax
 850eb4f:	5d                   	pop    %ebp
 850eb50:	c3                   	ret
 850eb51:	90                   	nop

```

```c
// CStackableItem::IsAvatarOptionChangeItem @ 0x850eb42

/* CStackableItem::IsAvatarOptionChangeItem() const */

CStackableItem __thiscall CStackableItem::IsAvatarOptionChangeItem(CStackableItem *this)

{
  return this[0x398];
}

```

---

## check_able_To_use

```asm
// === 0850eb52 CStackableItem::check_able_To_use  [0x0850eb52-0x850eba1] ===
 850eb52:	55                   	push   %ebp
 850eb53:	89 e5                	mov    %esp,%ebp
 850eb55:	83 ec 18             	sub    $0x18,%esp
 850eb58:	8b 45 0c             	mov    0xc(%ebp),%eax
 850eb5b:	0f be d0             	movsbl %al,%edx
 850eb5e:	8b 45 08             	mov    0x8(%ebp),%eax
 850eb61:	89 54 24 04          	mov    %edx,0x4(%esp)
 850eb65:	89 04 24             	mov    %eax,(%esp)
 850eb68:	e8 bb eb ff ff       	call   850d728 <_ZNK5CItem14check_job_typeEc>
 850eb6d:	83 f0 01             	xor    $0x1,%eax
 850eb70:	84 c0                	test   %al,%al
 850eb72:	74 07                	je     850eb7b <_ZN14CStackableItem17check_able_To_useEii+0x29>
 850eb74:	b8 01 00 00 00       	mov    $0x1,%eax
 850eb79:	eb 25                	jmp    850eba0 <_ZN14CStackableItem17check_able_To_useEii+0x4e>
 850eb7b:	8b 45 08             	mov    0x8(%ebp),%eax
 850eb7e:	8b 55 10             	mov    0x10(%ebp),%edx
 850eb81:	89 54 24 04          	mov    %edx,0x4(%esp)
 850eb85:	89 04 24             	mov    %eax,(%esp)
 850eb88:	e8 2f aa fd ff       	call   84e95bc <_ZNK5CItem15check_low_levelEi>
 850eb8d:	83 f0 01             	xor    $0x1,%eax
 850eb90:	84 c0                	test   %al,%al
 850eb92:	74 07                	je     850eb9b <_ZN14CStackableItem17check_able_To_useEii+0x49>
 850eb94:	b8 02 00 00 00       	mov    $0x2,%eax
 850eb99:	eb 05                	jmp    850eba0 <_ZN14CStackableItem17check_able_To_useEii+0x4e>
 850eb9b:	b8 00 00 00 00       	mov    $0x0,%eax
 850eba0:	c9                   	leave
 850eba1:	c3                   	ret

```

```c
// CStackableItem::check_able_To_use @ 0x850eb52

/* CStackableItem::check_able_To_use(int, int) */

undefined4 __thiscall
CStackableItem::check_able_To_use(CStackableItem *this,int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = CItem::check_job_type((CItem *)this,(char)param_1);
  if (cVar1 == '\x01') {
    cVar1 = CItem::check_low_level((CItem *)this,param_2);
    if (cVar1 == '\x01') {
      uVar2 = 0;
    }
    else {
      uVar2 = 2;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

```

---

## check_change_job_type

```asm
// === 0850eba2 CStackableItem::check_change_job_type  [0x0850eba2-0x850ebfb] ===
 850eba2:	55                   	push   %ebp
 850eba3:	89 e5                	mov    %esp,%ebp
 850eba5:	83 ec 10             	sub    $0x10,%esp
 850eba8:	8b 55 0c             	mov    0xc(%ebp),%edx
 850ebab:	8b 45 10             	mov    0x10(%ebp),%eax
 850ebae:	88 55 fc             	mov    %dl,-0x4(%ebp)
 850ebb1:	88 45 f8             	mov    %al,-0x8(%ebp)
 850ebb4:	0f be 55 f8          	movsbl -0x8(%ebp),%edx
 850ebb8:	8b 45 08             	mov    0x8(%ebp),%eax
 850ebbb:	89 54 24 04          	mov    %edx,0x4(%esp)
 850ebbf:	89 04 24             	mov    %eax,(%esp)
 850ebc2:	e8 61 eb ff ff       	call   850d728 <_ZNK5CItem14check_job_typeEc>
 850ebc7:	83 f0 01             	xor    $0x1,%eax
 850ebca:	84 c0                	test   %al,%al
 850ebcc:	74 07                	je     850ebd5 <_ZNK14CStackableItem21check_change_job_typeEcc+0x33>
 850ebce:	b8 00 00 00 00       	mov    $0x0,%eax
 850ebd3:	eb 25                	jmp    850ebfa <_ZNK14CStackableItem21check_change_job_typeEcc+0x58>
 850ebd5:	8b 45 08             	mov    0x8(%ebp),%eax
 850ebd8:	0f b6 80 4c 01 00 00 	movzbl 0x14c(%eax),%eax
 850ebdf:	84 c0                	test   %al,%al
 850ebe1:	79 07                	jns    850ebea <_ZNK14CStackableItem21check_change_job_typeEcc+0x48>
 850ebe3:	b8 01 00 00 00       	mov    $0x1,%eax
 850ebe8:	eb 10                	jmp    850ebfa <_ZNK14CStackableItem21check_change_job_typeEcc+0x58>
 850ebea:	8b 45 08             	mov    0x8(%ebp),%eax
 850ebed:	0f b6 80 4c 01 00 00 	movzbl 0x14c(%eax),%eax
 850ebf4:	3a 45 fc             	cmp    -0x4(%ebp),%al
 850ebf7:	0f 94 c0             	sete   %al
 850ebfa:	c9                   	leave
 850ebfb:	c3                   	ret

```

```c
// CStackableItem::check_change_job_type @ 0x850eba2

/* CStackableItem::check_change_job_type(char, char) const */

bool __thiscall
CStackableItem::check_change_job_type(CStackableItem *this,char param_1,char param_2)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = CItem::check_job_type((CItem *)this,param_2);
  if (cVar1 == '\x01') {
    if ((char)this[0x14c] < '\0') {
      bVar2 = true;
    }
    else {
      bVar2 = this[0x14c] == (CStackableItem)param_1;
    }
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

```

---

## getBoosterItem

```asm
// === 0850f75e CStackableItem::getBoosterItem  [0x0850f75e-0x850f8b7] ===
 850f75e:	55                   	push   %ebp
 850f75f:	89 e5                	mov    %esp,%ebp
 850f761:	53                   	push   %ebx
 850f762:	83 ec 34             	sub    $0x34,%esp
 850f765:	8b 45 08             	mov    0x8(%ebp),%eax
 850f768:	8d 90 40 02 00 00    	lea    0x240(%eax),%edx
 850f76e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 850f771:	89 54 24 04          	mov    %edx,0x4(%esp)
 850f775:	89 04 24             	mov    %eax,(%esp)
 850f778:	e8 01 83 00 00       	call   8517a7e <_ZNKSt6vectorI27stStackableBoosterElement_tSaIS0_EE5beginEv>
 850f77d:	83 ec 04             	sub    $0x4,%esp
 850f780:	8b 45 08             	mov    0x8(%ebp),%eax
 850f783:	8d 90 40 02 00 00    	lea    0x240(%eax),%edx
 850f789:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 850f78c:	89 54 24 04          	mov    %edx,0x4(%esp)
 850f790:	89 04 24             	mov    %eax,(%esp)
 850f793:	e8 12 83 00 00       	call   8517aaa <_ZNKSt6vectorI27stStackableBoosterElement_tSaIS0_EE3endEv>
 850f798:	83 ec 04             	sub    $0x4,%esp
 850f79b:	e9 f9 00 00 00       	jmp    850f899 <_ZNK14CStackableItem14getBoosterItemERSt6vectorI28stStackableBoosterItemInfo_tSaIS1_EE+0x13b>
 850f7a0:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 850f7a7:	e9 c6 00 00 00       	jmp    850f872 <_ZNK14CStackableItem14getBoosterItemERSt6vectorI28stStackableBoosterItemInfo_tSaIS1_EE+0x114>
 850f7ac:	8d 45 e8             	lea    -0x18(%ebp),%eax
 850f7af:	89 04 24             	mov    %eax,(%esp)
 850f7b2:	e8 f1 4f e8 ff       	call   83947a8 <_ZNK9__gnu_cxx17__normal_iteratorIPK27stStackableBoosterElement_tSt6vectorIS1_SaIS1_EEEptEv>
 850f7b7:	8b 40 08             	mov    0x8(%eax),%eax
 850f7ba:	89 04 24             	mov    %eax,(%esp)
 850f7bd:	e8 c5 23 1a 00       	call   86b1b87 <_Z12get_rand_inti>
 850f7c2:	89 45 f0             	mov    %eax,-0x10(%ebp)
 850f7c5:	8d 45 e8             	lea    -0x18(%ebp),%eax
 850f7c8:	89 04 24             	mov    %eax,(%esp)
 850f7cb:	e8 d8 4f e8 ff       	call   83947a8 <_ZNK9__gnu_cxx17__normal_iteratorIPK27stStackableBoosterElement_tSt6vectorIS1_SaIS1_EEEptEv>
 850f7d0:	8d 50 0c             	lea    0xc(%eax),%edx
 850f7d3:	8d 45 e0             	lea    -0x20(%ebp),%eax
 850f7d6:	89 54 24 04          	mov    %edx,0x4(%esp)
 850f7da:	89 04 24             	mov    %eax,(%esp)
 850f7dd:	e8 8c ba d2 ff       	call   823b26e <_ZNKSt6vectorI28stStackableBoosterItemInfo_tSaIS0_EE5beginEv>
 850f7e2:	83 ec 04             	sub    $0x4,%esp
 850f7e5:	8d 45 e8             	lea    -0x18(%ebp),%eax
 850f7e8:	89 04 24             	mov    %eax,(%esp)
 850f7eb:	e8 b8 4f e8 ff       	call   83947a8 <_ZNK9__gnu_cxx17__normal_iteratorIPK27stStackableBoosterElement_tSt6vectorIS1_SaIS1_EEEptEv>
 850f7f0:	8d 50 0c             	lea    0xc(%eax),%edx
 850f7f3:	8d 45 dc             	lea    -0x24(%ebp),%eax
 850f7f6:	89 54 24 04          	mov    %edx,0x4(%esp)
 850f7fa:	89 04 24             	mov    %eax,(%esp)
 850f7fd:	e8 40 ba d2 ff       	call   823b242 <_ZNKSt6vectorI28stStackableBoosterItemInfo_tSaIS0_EE3endEv>
 850f802:	83 ec 04             	sub    $0x4,%esp
 850f805:	eb 51                	jmp    850f858 <_ZNK14CStackableItem14getBoosterItemERSt6vectorI28stStackableBoosterItemInfo_tSaIS1_EE+0xfa>
 850f807:	8d 45 e0             	lea    -0x20(%ebp),%eax
 850f80a:	89 04 24             	mov    %eax,(%esp)
 850f80d:	e8 ae 23 c0 ff       	call   8111bc0 <_ZNK9__gnu_cxx17__normal_iteratorIPK28stStackableBoosterItemInfo_tSt6vectorIS1_SaIS1_EEEptEv>
 850f812:	8b 00                	mov    (%eax),%eax
 850f814:	89 45 f4             	mov    %eax,-0xc(%ebp)
 850f817:	8b 5d f0             	mov    -0x10(%ebp),%ebx
 850f81a:	8d 45 e0             	lea    -0x20(%ebp),%eax
 850f81d:	89 04 24             	mov    %eax,(%esp)
 850f820:	e8 9b 23 c0 ff       	call   8111bc0 <_ZNK9__gnu_cxx17__normal_iteratorIPK28stStackableBoosterItemInfo_tSt6vectorIS1_SaIS1_EEEptEv>
 850f825:	8b 40 04             	mov    0x4(%eax),%eax
 850f828:	39 c3                	cmp    %eax,%ebx
 850f82a:	0f 92 c0             	setb   %al
 850f82d:	84 c0                	test   %al,%al
 850f82f:	74 1c                	je     850f84d <_ZNK14CStackableItem14getBoosterItemERSt6vectorI28stStackableBoosterItemInfo_tSaIS1_EE+0xef>
 850f831:	8d 45 e0             	lea    -0x20(%ebp),%eax
 850f834:	89 04 24             	mov    %eax,(%esp)
 850f837:	e8 da 51 fa ff       	call   84b4a16 <_ZNK9__gnu_cxx17__normal_iteratorIPK28stStackableBoosterItemInfo_tSt6vectorIS1_SaIS1_EEEdeEv>
 850f83c:	89 44 24 04          	mov    %eax,0x4(%esp)
 850f840:	8b 45 0c             	mov    0xc(%ebp),%eax
 850f843:	89 04 24             	mov    %eax,(%esp)
 850f846:	e8 eb 8b e1 ff       	call   8328436 <_ZNSt6vectorI28stStackableBoosterItemInfo_tSaIS0_EE9push_backERKS0_>
 850f84b:	eb 21                	jmp    850f86e <_ZNK14CStackableItem14getBoosterItemERSt6vectorI28stStackableBoosterItemInfo_tSaIS1_EE+0x110>
 850f84d:	8d 45 e0             	lea    -0x20(%ebp),%eax
 850f850:	89 04 24             	mov    %eax,(%esp)
 850f853:	e8 52 23 c0 ff       	call   8111baa <_ZN9__gnu_cxx17__normal_iteratorIPK28stStackableBoosterItemInfo_tSt6vectorIS1_SaIS1_EEEppEv>
 850f858:	8d 45 dc             	lea    -0x24(%ebp),%eax
 850f85b:	89 44 24 04          	mov    %eax,0x4(%esp)
 850f85f:	8d 45 e0             	lea    -0x20(%ebp),%eax
 850f862:	89 04 24             	mov    %eax,(%esp)
 850f865:	e8 c3 83 d2 ff       	call   8237c2d <_ZN9__gnu_cxxneIPK28stStackableBoosterItemInfo_tSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 850f86a:	84 c0                	test   %al,%al
 850f86c:	75 99                	jne    850f807 <_ZNK14CStackableItem14getBoosterItemERSt6vectorI28stStackableBoosterItemInfo_tSaIS1_EE+0xa9>
 850f86e:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 850f872:	8d 45 e8             	lea    -0x18(%ebp),%eax
 850f875:	89 04 24             	mov    %eax,(%esp)
 850f878:	e8 2b 4f e8 ff       	call   83947a8 <_ZNK9__gnu_cxx17__normal_iteratorIPK27stStackableBoosterElement_tSt6vectorIS1_SaIS1_EEEptEv>
 850f87d:	8b 40 04             	mov    0x4(%eax),%eax
 850f880:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 850f883:	0f 97 c0             	seta   %al
 850f886:	84 c0                	test   %al,%al
 850f888:	0f 85 1e ff ff ff    	jne    850f7ac <_ZNK14CStackableItem14getBoosterItemERSt6vectorI28stStackableBoosterItemInfo_tSaIS1_EE+0x4e>
 850f88e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 850f891:	89 04 24             	mov    %eax,(%esp)
 850f894:	e8 f9 4e e8 ff       	call   8394792 <_ZN9__gnu_cxx17__normal_iteratorIPK27stStackableBoosterElement_tSt6vectorIS1_SaIS1_EEEppEv>
 850f899:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 850f89c:	89 44 24 04          	mov    %eax,0x4(%esp)
 850f8a0:	8d 45 e8             	lea    -0x18(%ebp),%eax
 850f8a3:	89 04 24             	mov    %eax,(%esp)
 850f8a6:	e8 bb 4e e8 ff       	call   8394766 <_ZN9__gnu_cxxneIPK27stStackableBoosterElement_tSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 850f8ab:	84 c0                	test   %al,%al
 850f8ad:	0f 85 ed fe ff ff    	jne    850f7a0 <_ZNK14CStackableItem14getBoosterItemERSt6vectorI28stStackableBoosterItemInfo_tSaIS1_EE+0x42>
 850f8b3:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 850f8b6:	c9                   	leave
 850f8b7:	c3                   	ret

```

```c
// CStackableItem::getBoosterItem @ 0x850f75e

/* CStackableItem::getBoosterItem(std::vector<stStackableBoosterItemInfo_t,
   std::allocator<stStackableBoosterItemInfo_t> >&) const */

void __thiscall CStackableItem::getBoosterItem(CStackableItem *this,vector *param_1)

{
  uint uVar1;
  bool bVar2;
  undefined4 *puVar3;
  stStackableBoosterItemInfo_t *psVar4;
  int iVar5;
  __normal_iterator local_28 [4];
  __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
  local_24 [4];
  __normal_iterator local_20 [4];
  __normal_iterator<stStackableBoosterElement_t_const*,std::vector<stStackableBoosterElement_t,std::allocator<stStackableBoosterElement_t>>>
  local_1c [4];
  uint local_18;
  uint local_14;
  undefined4 local_10;
  
  std::vector<stStackableBoosterElement_t,std::allocator<stStackableBoosterElement_t>>::begin();
  std::vector<stStackableBoosterElement_t,std::allocator<stStackableBoosterElement_t>>::end();
  do {
    bVar2 = __gnu_cxx::operator!=(local_1c,local_20);
    if (!bVar2) {
      return;
    }
    local_18 = 0;
    while( true ) {
      iVar5 = __gnu_cxx::
              __normal_iterator<stStackableBoosterElement_t_const*,std::vector<stStackableBoosterElement_t,std::allocator<stStackableBoosterElement_t>>>
              ::operator->(local_1c);
      if (*(uint *)(iVar5 + 4) <= local_18) break;
      iVar5 = __gnu_cxx::
              __normal_iterator<stStackableBoosterElement_t_const*,std::vector<stStackableBoosterElement_t,std::allocator<stStackableBoosterElement_t>>>
              ::operator->(local_1c);
      local_14 = get_rand_int(*(int *)(iVar5 + 8));
      __gnu_cxx::
      __normal_iterator<stStackableBoosterElement_t_const*,std::vector<stStackableBoosterElement_t,std::allocator<stStackableBoosterElement_t>>>
      ::operator->(local_1c);
      std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>::begin
                ();
      __gnu_cxx::
      __normal_iterator<stStackableBoosterElement_t_const*,std::vector<stStackableBoosterElement_t,std::allocator<stStackableBoosterElement_t>>>
      ::operator->(local_1c);
      std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>::end();
      while( true ) {
        bVar2 = __gnu_cxx::operator!=(local_24,local_28);
        if (!bVar2) break;
        puVar3 = (undefined4 *)
                 __gnu_cxx::
                 __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
                 ::operator->(local_24);
        uVar1 = local_14;
        local_10 = *puVar3;
        iVar5 = __gnu_cxx::
                __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
                ::operator->(local_24);
        if (uVar1 < *(uint *)(iVar5 + 4)) {
          psVar4 = (stStackableBoosterItemInfo_t *)
                   __gnu_cxx::
                   __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
                   ::operator*(local_24);
          std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>::
          push_back((vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>
                     *)param_1,psVar4);
          break;
        }
        __gnu_cxx::
        __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
        ::operator++(local_24);
      }
      local_18 = local_18 + 1;
    }
    __gnu_cxx::
    __normal_iterator<stStackableBoosterElement_t_const*,std::vector<stStackableBoosterElement_t,std::allocator<stStackableBoosterElement_t>>>
    ::operator++(local_1c);
  } while( true );
}

```

---

## getUsableItemType

```asm
// === 0850d780 CStackableItem::getUsableItemType  [0x0850d780-0x850d81d] ===
 850d780:	55                   	push   %ebp
 850d781:	89 e5                	mov    %esp,%ebp
 850d783:	83 ec 28             	sub    $0x28,%esp
 850d786:	8b 45 08             	mov    0x8(%ebp),%eax
 850d789:	8d 90 c0 02 00 00    	lea    0x2c0(%eax),%edx
 850d78f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 850d792:	89 54 24 04          	mov    %edx,0x4(%esp)
 850d796:	89 04 24             	mov    %eax,(%esp)
 850d799:	e8 dc fb bb ff       	call   80cd37a <_ZNKSt6vectorIiSaIiEE3endEv>
 850d79e:	83 ec 04             	sub    $0x4,%esp
 850d7a1:	8b 45 08             	mov    0x8(%ebp),%eax
 850d7a4:	8d 90 c0 02 00 00    	lea    0x2c0(%eax),%edx
 850d7aa:	8d 45 f0             	lea    -0x10(%ebp),%eax
 850d7ad:	89 54 24 04          	mov    %edx,0x4(%esp)
 850d7b1:	89 04 24             	mov    %eax,(%esp)
 850d7b4:	e8 95 fb bb ff       	call   80cd34e <_ZNKSt6vectorIiSaIiEE5beginEv>
 850d7b9:	83 ec 04             	sub    $0x4,%esp
 850d7bc:	8d 45 e8             	lea    -0x18(%ebp),%eax
 850d7bf:	8d 55 0c             	lea    0xc(%ebp),%edx
 850d7c2:	89 54 24 0c          	mov    %edx,0xc(%esp)
 850d7c6:	8b 55 ec             	mov    -0x14(%ebp),%edx
 850d7c9:	89 54 24 08          	mov    %edx,0x8(%esp)
 850d7cd:	8b 55 f0             	mov    -0x10(%ebp),%edx
 850d7d0:	89 54 24 04          	mov    %edx,0x4(%esp)
 850d7d4:	89 04 24             	mov    %eax,(%esp)
 850d7d7:	e8 57 73 e8 ff       	call   8394b33 <_ZSt4findIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEiET_S8_S8_RKT0_>
 850d7dc:	83 ec 04             	sub    $0x4,%esp
 850d7df:	8b 45 08             	mov    0x8(%ebp),%eax
 850d7e2:	8d 90 c0 02 00 00    	lea    0x2c0(%eax),%edx
 850d7e8:	8d 45 f4             	lea    -0xc(%ebp),%eax
 850d7eb:	89 54 24 04          	mov    %edx,0x4(%esp)
 850d7ef:	89 04 24             	mov    %eax,(%esp)
 850d7f2:	e8 83 fb bb ff       	call   80cd37a <_ZNKSt6vectorIiSaIiEE3endEv>
 850d7f7:	83 ec 04             	sub    $0x4,%esp
 850d7fa:	8d 45 f4             	lea    -0xc(%ebp),%eax
 850d7fd:	89 44 24 04          	mov    %eax,0x4(%esp)
 850d801:	8d 45 e8             	lea    -0x18(%ebp),%eax
 850d804:	89 04 24             	mov    %eax,(%esp)
 850d807:	e8 1a c2 be ff       	call   80f9a26 <_ZN9__gnu_cxxneIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_>
 850d80c:	84 c0                	test   %al,%al
 850d80e:	74 07                	je     850d817 <_ZNK14CStackableItem17getUsableItemTypeEi+0x97>
 850d810:	b8 01 00 00 00       	mov    $0x1,%eax
 850d815:	eb 05                	jmp    850d81c <_ZNK14CStackableItem17getUsableItemTypeEi+0x9c>
 850d817:	b8 00 00 00 00       	mov    $0x0,%eax
 850d81c:	c9                   	leave
 850d81d:	c3                   	ret

```

```c
// CStackableItem::getUsableItemType @ 0x850d780

/* CStackableItem::getUsableItemType(int) const */

bool CStackableItem::getUsableItemType(int param_1)

{
  bool bVar1;
  undefined1 local_1c [4];
  undefined4 local_18;
  undefined4 local_14;
  __normal_iterator local_10 [12];
  
  std::vector<int,std::allocator<int>>::end();
  std::vector<int,std::allocator<int>>::begin();
  std::find<__gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>,int>
            (local_1c,local_14,local_18,&stack0x00000008);
  std::vector<int,std::allocator<int>>::end();
  bVar1 = __gnu_cxx::operator!=(local_1c,local_10);
  return bVar1;
}

```

---

## get_1st_material_count

```asm
// === 0850fb32 CStackableItem::get_1st_material_count  [0x0850fb32-0x850fbe3] ===
 850fb32:	55                   	push   %ebp
 850fb33:	89 e5                	mov    %esp,%ebp
 850fb35:	83 ec 28             	sub    $0x28,%esp
 850fb38:	8b 45 08             	mov    0x8(%ebp),%eax
 850fb3b:	8d 90 90 02 00 00    	lea    0x290(%eax),%edx
 850fb41:	8d 45 ec             	lea    -0x14(%ebp),%eax
 850fb44:	89 54 24 04          	mov    %edx,0x4(%esp)
 850fb48:	89 04 24             	mov    %eax,(%esp)
 850fb4b:	e8 62 da bc ff       	call   80dd5b2 <_ZNSt6vectorISt4pairIiiESaIS1_EE5beginEv>
 850fb50:	83 ec 04             	sub    $0x4,%esp
 850fb53:	8d 45 ec             	lea    -0x14(%ebp),%eax
 850fb56:	89 44 24 04          	mov    %eax,0x4(%esp)
 850fb5a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 850fb5d:	89 04 24             	mov    %eax,(%esp)
 850fb60:	e8 bd 7d e7 ff       	call   8387922 <_ZN9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEC1IPS2_EERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameISB_SA_E7__valueES7_E6__typeEEE>
 850fb65:	eb 44                	jmp    850fbab <_ZN14CStackableItem22get_1st_material_countEj+0x79>
 850fb67:	8d 45 e8             	lea    -0x18(%ebp),%eax
 850fb6a:	89 04 24             	mov    %eax,(%esp)
 850fb6d:	e8 a0 3d c8 ff       	call   8193912 <_ZNK9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEptEv>
 850fb72:	8b 00                	mov    (%eax),%eax
 850fb74:	3b 45 0c             	cmp    0xc(%ebp),%eax
 850fb77:	0f 94 c0             	sete   %al
 850fb7a:	84 c0                	test   %al,%al
 850fb7c:	74 10                	je     850fb8e <_ZN14CStackableItem22get_1st_material_countEj+0x5c>
 850fb7e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 850fb81:	89 04 24             	mov    %eax,(%esp)
 850fb84:	e8 89 3d c8 ff       	call   8193912 <_ZNK9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEptEv>
 850fb89:	8b 40 04             	mov    0x4(%eax),%eax
 850fb8c:	eb 53                	jmp    850fbe1 <_ZN14CStackableItem22get_1st_material_countEj+0xaf>
 850fb8e:	8d 45 f4             	lea    -0xc(%ebp),%eax
 850fb91:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 850fb98:	00 
 850fb99:	8d 55 e8             	lea    -0x18(%ebp),%edx
 850fb9c:	89 54 24 04          	mov    %edx,0x4(%esp)
 850fba0:	89 04 24             	mov    %eax,(%esp)
 850fba3:	e8 ca 38 c8 ff       	call   8193472 <_ZN9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEppEi>
 850fba8:	83 ec 04             	sub    $0x4,%esp
 850fbab:	8b 45 08             	mov    0x8(%ebp),%eax
 850fbae:	8d 90 90 02 00 00    	lea    0x290(%eax),%edx
 850fbb4:	8d 45 f0             	lea    -0x10(%ebp),%eax
 850fbb7:	89 54 24 04          	mov    %edx,0x4(%esp)
 850fbbb:	89 04 24             	mov    %eax,(%esp)
 850fbbe:	e8 13 da bc ff       	call   80dd5d6 <_ZNSt6vectorISt4pairIiiESaIS1_EE3endEv>
 850fbc3:	83 ec 04             	sub    $0x4,%esp
 850fbc6:	8d 45 f0             	lea    -0x10(%ebp),%eax
 850fbc9:	89 44 24 04          	mov    %eax,0x4(%esp)
 850fbcd:	8d 45 e8             	lea    -0x18(%ebp),%eax
 850fbd0:	89 04 24             	mov    %eax,(%esp)
 850fbd3:	e8 64 7d e7 ff       	call   838793c <_ZN9__gnu_cxxneIPKSt4pairIiiEPS2_St6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T1_EERKNS9_IT0_SB_EE>
 850fbd8:	84 c0                	test   %al,%al
 850fbda:	75 8b                	jne    850fb67 <_ZN14CStackableItem22get_1st_material_countEj+0x35>
 850fbdc:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 850fbe1:	c9                   	leave
 850fbe2:	c3                   	ret
 850fbe3:	90                   	nop

```

```c
// CStackableItem::get_1st_material_count @ 0x850fb32

/* CStackableItem::get_1st_material_count(unsigned int) */

undefined4 __thiscall CStackableItem::get_1st_material_count(CStackableItem *this,uint param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_1c [4];
  __normal_iterator local_18 [4];
  __normal_iterator local_14 [4];
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_10 [12];
  
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
  __gnu_cxx::
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  ::__normal_iterator<std::pair<int,int>*>(local_1c,local_18);
  while( true ) {
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
    bVar1 = __gnu_cxx::operator!=(local_1c,local_14);
    if (!bVar1) {
      return 0xffffffff;
    }
    puVar2 = (uint *)__gnu_cxx::
                     __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                     ::operator->(local_1c);
    if (*puVar2 == param_1) break;
    __gnu_cxx::
    __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
    ::operator++(local_10,(int)local_1c);
  }
  iVar3 = __gnu_cxx::
          __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
          ::operator->(local_1c);
  return *(undefined4 *)(iVar3 + 4);
}

```

---

## get_amplify_reinforce_count

```asm
// === 08513444 CStackableItem::get_amplify_reinforce_count  [0x08513444-0x8513521] ===
 8513444:	55                   	push   %ebp
 8513445:	89 e5                	mov    %esp,%ebp
 8513447:	83 ec 38             	sub    $0x38,%esp
 851344a:	8b 45 08             	mov    0x8(%ebp),%eax
 851344d:	8d 90 48 03 00 00    	lea    0x348(%eax),%edx
 8513453:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8513456:	89 54 24 04          	mov    %edx,0x4(%esp)
 851345a:	89 04 24             	mov    %eax,(%esp)
 851345d:	e8 3e eb c3 ff       	call   8151fa0 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE5beginEv>
 8513462:	83 ec 04             	sub    $0x4,%esp
 8513465:	8b 45 08             	mov    0x8(%ebp),%eax
 8513468:	8d 90 48 03 00 00    	lea    0x348(%eax),%edx
 851346e:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8513471:	89 54 24 04          	mov    %edx,0x4(%esp)
 8513475:	89 04 24             	mov    %eax,(%esp)
 8513478:	e8 9d 9e bb ff       	call   80cd31a <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 851347d:	83 ec 04             	sub    $0x4,%esp
 8513480:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8513487:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 851348e:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8513495:	eb 6c                	jmp    8513503 <_ZN14CStackableItem27get_amplify_reinforce_countEi+0xbf>
 8513497:	8d 45 e8             	lea    -0x18(%ebp),%eax
 851349a:	89 04 24             	mov    %eax,(%esp)
 851349d:	e8 9e 9e bb ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 85134a2:	8b 40 04             	mov    0x4(%eax),%eax
 85134a5:	01 45 ec             	add    %eax,-0x14(%ebp)
 85134a8:	8b 45 0c             	mov    0xc(%ebp),%eax
 85134ab:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 85134ae:	7d 0f                	jge    85134bf <_ZN14CStackableItem27get_amplify_reinforce_countEi+0x7b>
 85134b0:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85134b3:	89 04 24             	mov    %eax,(%esp)
 85134b6:	e8 85 9e bb ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 85134bb:	8b 00                	mov    (%eax),%eax
 85134bd:	eb 61                	jmp    8513520 <_ZN14CStackableItem27get_amplify_reinforce_countEi+0xdc>
 85134bf:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85134c2:	89 04 24             	mov    %eax,(%esp)
 85134c5:	e8 76 9e bb ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 85134ca:	8b 40 04             	mov    0x4(%eax),%eax
 85134cd:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 85134d0:	0f 9f c0             	setg   %al
 85134d3:	84 c0                	test   %al,%al
 85134d5:	74 21                	je     85134f8 <_ZN14CStackableItem27get_amplify_reinforce_countEi+0xb4>
 85134d7:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85134da:	89 04 24             	mov    %eax,(%esp)
 85134dd:	e8 5e 9e bb ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 85134e2:	8b 40 04             	mov    0x4(%eax),%eax
 85134e5:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85134e8:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85134eb:	89 04 24             	mov    %eax,(%esp)
 85134ee:	e8 4d 9e bb ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 85134f3:	8b 00                	mov    (%eax),%eax
 85134f5:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85134f8:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85134fb:	89 04 24             	mov    %eax,(%esp)
 85134fe:	e8 43 72 bc ff       	call   80da746 <_ZNSt17_Rb_tree_iteratorISt4pairIKiiEEppEv>
 8513503:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8513506:	89 44 24 04          	mov    %eax,0x4(%esp)
 851350a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 851350d:	89 04 24             	mov    %eax,(%esp)
 8513510:	e8 b3 6e bc ff       	call   80da3c8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEneERKS3_>
 8513515:	84 c0                	test   %al,%al
 8513517:	0f 85 7a ff ff ff    	jne    8513497 <_ZN14CStackableItem27get_amplify_reinforce_countEi+0x53>
 851351d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8513520:	c9                   	leave
 8513521:	c3                   	ret

```

```c
// CStackableItem::get_amplify_reinforce_count @ 0x8513444

/* CStackableItem::get_amplify_reinforce_count(int) */

undefined4 __thiscall CStackableItem::get_amplify_reinforce_count(CStackableItem *this,int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_20 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_1c [4];
  int local_18;
  undefined4 local_14;
  int local_10;
  
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin(local_1c);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_20);
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  while( true ) {
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_1c,
                       (_Rb_tree_iterator *)local_20);
    if (cVar1 == '\0') {
      return local_14;
    }
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_1c);
    local_18 = local_18 + *(int *)(iVar2 + 4);
    if (param_1 < local_18) break;
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_1c);
    if (local_10 < *(int *)(iVar2 + 4)) {
      iVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_1c);
      local_10 = *(int *)(iVar2 + 4);
      puVar3 = (undefined4 *)
               std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                         ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_1c);
      local_14 = *puVar3;
    }
    std::_Rb_tree_iterator<std::pair<int_const,int>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_1c);
  }
  puVar3 = (undefined4 *)
           std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                     ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_1c);
  return *puVar3;
}

```

---

## get_limit_cube_item

```asm
// === 0850fbe4 CStackableItem::get_limit_cube_item  [0x0850fbe4-0x850fd83] ===
 850fbe4:	55                   	push   %ebp
 850fbe5:	89 e5                	mov    %esp,%ebp
 850fbe7:	83 ec 58             	sub    $0x58,%esp
 850fbea:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 850fbf1:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 850fbf8:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 850fbff:	8b 45 08             	mov    0x8(%ebp),%eax
 850fc02:	8d 90 a4 02 00 00    	lea    0x2a4(%eax),%edx
 850fc08:	8d 45 bc             	lea    -0x44(%ebp),%eax
 850fc0b:	89 54 24 04          	mov    %edx,0x4(%esp)
 850fc0f:	89 04 24             	mov    %eax,(%esp)
 850fc12:	e8 03 7f 00 00       	call   8517b1a <_ZNSt6vectorI17stLimitCubeResultSaIS0_EE5beginEv>
 850fc17:	83 ec 04             	sub    $0x4,%esp
 850fc1a:	8d 45 bc             	lea    -0x44(%ebp),%eax
 850fc1d:	89 44 24 04          	mov    %eax,0x4(%esp)
 850fc21:	8d 45 b8             	lea    -0x48(%ebp),%eax
 850fc24:	89 04 24             	mov    %eax,(%esp)
 850fc27:	e8 12 7f 00 00       	call   8517b3e <_ZN9__gnu_cxx17__normal_iteratorIPK17stLimitCubeResultSt6vectorIS1_SaIS1_EEEC1IPS1_EERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameISA_S9_E7__valueES6_E6__typeEEE>
 850fc2c:	eb 34                	jmp    850fc62 <_ZN14CStackableItem19get_limit_cube_itemERSt4pairIiiE+0x7e>
 850fc2e:	8d 45 b8             	lea    -0x48(%ebp),%eax
 850fc31:	89 04 24             	mov    %eax,(%esp)
 850fc34:	e8 71 7f 00 00       	call   8517baa <_ZNK9__gnu_cxx17__normal_iteratorIPK17stLimitCubeResultSt6vectorIS1_SaIS1_EEEdeEv>
 850fc39:	89 45 f0             	mov    %eax,-0x10(%ebp)
 850fc3c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 850fc3f:	8b 40 08             	mov    0x8(%eax),%eax
 850fc42:	01 45 e4             	add    %eax,-0x1c(%ebp)
 850fc45:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 850fc48:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 850fc4f:	00 
 850fc50:	8d 55 b8             	lea    -0x48(%ebp),%edx
 850fc53:	89 54 24 04          	mov    %edx,0x4(%esp)
 850fc57:	89 04 24             	mov    %eax,(%esp)
 850fc5a:	e8 55 7f 00 00       	call   8517bb4 <_ZN9__gnu_cxx17__normal_iteratorIPK17stLimitCubeResultSt6vectorIS1_SaIS1_EEEppEi>
 850fc5f:	83 ec 04             	sub    $0x4,%esp
 850fc62:	8b 45 08             	mov    0x8(%ebp),%eax
 850fc65:	8d 90 a4 02 00 00    	lea    0x2a4(%eax),%edx
 850fc6b:	8d 45 c0             	lea    -0x40(%ebp),%eax
 850fc6e:	89 54 24 04          	mov    %edx,0x4(%esp)
 850fc72:	89 04 24             	mov    %eax,(%esp)
 850fc75:	e8 de 7e 00 00       	call   8517b58 <_ZNSt6vectorI17stLimitCubeResultSaIS0_EE3endEv>
 850fc7a:	83 ec 04             	sub    $0x4,%esp
 850fc7d:	8d 45 c0             	lea    -0x40(%ebp),%eax
 850fc80:	89 44 24 04          	mov    %eax,0x4(%esp)
 850fc84:	8d 45 b8             	lea    -0x48(%ebp),%eax
 850fc87:	89 04 24             	mov    %eax,(%esp)
 850fc8a:	e8 ef 7e 00 00       	call   8517b7e <_ZN9__gnu_cxxneIPK17stLimitCubeResultPS1_St6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T1_EERKNS8_IT0_SA_EE>
 850fc8f:	84 c0                	test   %al,%al
 850fc91:	75 9b                	jne    850fc2e <_ZN14CStackableItem19get_limit_cube_itemERSt4pairIiiE+0x4a>
 850fc93:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 850fc96:	89 45 c8             	mov    %eax,-0x38(%ebp)
 850fc99:	8b 45 08             	mov    0x8(%ebp),%eax
 850fc9c:	8b 80 e0 01 00 00    	mov    0x1e0(%eax),%eax
 850fca2:	8d 55 c8             	lea    -0x38(%ebp),%edx
 850fca5:	89 54 24 04          	mov    %edx,0x4(%esp)
 850fca9:	89 04 24             	mov    %eax,(%esp)
 850fcac:	e8 0d be bb ff       	call   80cbabe <_ZN7CMTRand7randIntERKm>
 850fcb1:	89 45 e8             	mov    %eax,-0x18(%ebp)
 850fcb4:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 850fcbb:	8b 45 08             	mov    0x8(%ebp),%eax
 850fcbe:	8d 90 a4 02 00 00    	lea    0x2a4(%eax),%edx
 850fcc4:	8d 45 d0             	lea    -0x30(%ebp),%eax
 850fcc7:	89 54 24 04          	mov    %edx,0x4(%esp)
 850fccb:	89 04 24             	mov    %eax,(%esp)
 850fcce:	e8 47 7e 00 00       	call   8517b1a <_ZNSt6vectorI17stLimitCubeResultSaIS0_EE5beginEv>
 850fcd3:	83 ec 04             	sub    $0x4,%esp
 850fcd6:	8d 45 d0             	lea    -0x30(%ebp),%eax
 850fcd9:	89 44 24 04          	mov    %eax,0x4(%esp)
 850fcdd:	8d 45 cc             	lea    -0x34(%ebp),%eax
 850fce0:	89 04 24             	mov    %eax,(%esp)
 850fce3:	e8 56 7e 00 00       	call   8517b3e <_ZN9__gnu_cxx17__normal_iteratorIPK17stLimitCubeResultSt6vectorIS1_SaIS1_EEEC1IPS1_EERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameISA_S9_E7__valueES6_E6__typeEEE>
 850fce8:	8b 45 cc             	mov    -0x34(%ebp),%eax
 850fceb:	89 45 b8             	mov    %eax,-0x48(%ebp)
 850fcee:	eb 4f                	jmp    850fd3f <_ZN14CStackableItem19get_limit_cube_itemERSt4pairIiiE+0x15b>
 850fcf0:	8d 45 b8             	lea    -0x48(%ebp),%eax
 850fcf3:	89 04 24             	mov    %eax,(%esp)
 850fcf6:	e8 af 7e 00 00       	call   8517baa <_ZNK9__gnu_cxx17__normal_iteratorIPK17stLimitCubeResultSt6vectorIS1_SaIS1_EEEdeEv>
 850fcfb:	89 45 f4             	mov    %eax,-0xc(%ebp)
 850fcfe:	8b 45 f4             	mov    -0xc(%ebp),%eax
 850fd01:	8b 40 08             	mov    0x8(%eax),%eax
 850fd04:	01 45 ec             	add    %eax,-0x14(%ebp)
 850fd07:	8b 45 e8             	mov    -0x18(%ebp),%eax
 850fd0a:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 850fd0d:	77 13                	ja     850fd22 <_ZN14CStackableItem19get_limit_cube_itemERSt4pairIiiE+0x13e>
 850fd0f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 850fd12:	8b 00                	mov    (%eax),%eax
 850fd14:	89 45 dc             	mov    %eax,-0x24(%ebp)
 850fd17:	8b 45 f4             	mov    -0xc(%ebp),%eax
 850fd1a:	8b 40 04             	mov    0x4(%eax),%eax
 850fd1d:	89 45 e0             	mov    %eax,-0x20(%ebp)
 850fd20:	eb 4e                	jmp    850fd70 <_ZN14CStackableItem19get_limit_cube_itemERSt4pairIiiE+0x18c>
 850fd22:	8d 45 d8             	lea    -0x28(%ebp),%eax
 850fd25:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 850fd2c:	00 
 850fd2d:	8d 55 b8             	lea    -0x48(%ebp),%edx
 850fd30:	89 54 24 04          	mov    %edx,0x4(%esp)
 850fd34:	89 04 24             	mov    %eax,(%esp)
 850fd37:	e8 78 7e 00 00       	call   8517bb4 <_ZN9__gnu_cxx17__normal_iteratorIPK17stLimitCubeResultSt6vectorIS1_SaIS1_EEEppEi>
 850fd3c:	83 ec 04             	sub    $0x4,%esp
 850fd3f:	8b 45 08             	mov    0x8(%ebp),%eax
 850fd42:	8d 90 a4 02 00 00    	lea    0x2a4(%eax),%edx
 850fd48:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 850fd4b:	89 54 24 04          	mov    %edx,0x4(%esp)
 850fd4f:	89 04 24             	mov    %eax,(%esp)
 850fd52:	e8 01 7e 00 00       	call   8517b58 <_ZNSt6vectorI17stLimitCubeResultSaIS0_EE3endEv>
 850fd57:	83 ec 04             	sub    $0x4,%esp
 850fd5a:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 850fd5d:	89 44 24 04          	mov    %eax,0x4(%esp)
 850fd61:	8d 45 b8             	lea    -0x48(%ebp),%eax
 850fd64:	89 04 24             	mov    %eax,(%esp)
 850fd67:	e8 12 7e 00 00       	call   8517b7e <_ZN9__gnu_cxxneIPK17stLimitCubeResultPS1_St6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T1_EERKNS8_IT0_SA_EE>
 850fd6c:	84 c0                	test   %al,%al
 850fd6e:	75 80                	jne    850fcf0 <_ZN14CStackableItem19get_limit_cube_itemERSt4pairIiiE+0x10c>
 850fd70:	8b 45 0c             	mov    0xc(%ebp),%eax
 850fd73:	8b 55 dc             	mov    -0x24(%ebp),%edx
 850fd76:	89 10                	mov    %edx,(%eax)
 850fd78:	8b 45 0c             	mov    0xc(%ebp),%eax
 850fd7b:	8b 55 e0             	mov    -0x20(%ebp),%edx
 850fd7e:	89 50 04             	mov    %edx,0x4(%eax)
 850fd81:	c9                   	leave
 850fd82:	c3                   	ret
 850fd83:	90                   	nop

```

```c
// CStackableItem::get_limit_cube_item @ 0x850fbe4

/* CStackableItem::get_limit_cube_item(std::pair<int, int>&) */

void __thiscall CStackableItem::get_limit_cube_item(CStackableItem *this,pair *param_1)

{
  bool bVar1;
  undefined4 local_4c;
  __normal_iterator local_48 [4];
  __normal_iterator local_44 [4];
  __normal_iterator<stLimitCubeResult_const*,std::vector<stLimitCubeResult,std::allocator<stLimitCubeResult>>>
  local_40 [4];
  ulong local_3c;
  undefined4 local_38;
  __normal_iterator local_34 [4];
  __normal_iterator local_30 [4];
  __normal_iterator<stLimitCubeResult_const*,std::vector<stLimitCubeResult,std::allocator<stLimitCubeResult>>>
  local_2c [4];
  undefined4 local_28;
  undefined4 local_24;
  ulong local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  undefined4 *local_10;
  
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  std::vector<stLimitCubeResult,std::allocator<stLimitCubeResult>>::begin();
  __gnu_cxx::
  __normal_iterator<stLimitCubeResult_const*,std::vector<stLimitCubeResult,std::allocator<stLimitCubeResult>>>
  ::__normal_iterator<stLimitCubeResult*>
            ((__normal_iterator<stLimitCubeResult_const*,std::vector<stLimitCubeResult,std::allocator<stLimitCubeResult>>>
              *)&local_4c,local_48);
  while( true ) {
    std::vector<stLimitCubeResult,std::allocator<stLimitCubeResult>>::end();
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_4c,local_44);
    if (!bVar1) break;
    local_14 = __gnu_cxx::
               __normal_iterator<stLimitCubeResult_const*,std::vector<stLimitCubeResult,std::allocator<stLimitCubeResult>>>
               ::operator*((__normal_iterator<stLimitCubeResult_const*,std::vector<stLimitCubeResult,std::allocator<stLimitCubeResult>>>
                            *)&local_4c);
    local_20 = local_20 + *(int *)(local_14 + 8);
    __gnu_cxx::
    __normal_iterator<stLimitCubeResult_const*,std::vector<stLimitCubeResult,std::allocator<stLimitCubeResult>>>
    ::operator++(local_40,(int)&local_4c);
  }
  local_3c = local_20;
  local_1c = CMTRand::randInt(*(CMTRand **)(this + 0x1e0),&local_3c);
  local_18 = 0;
  std::vector<stLimitCubeResult,std::allocator<stLimitCubeResult>>::begin();
  __gnu_cxx::
  __normal_iterator<stLimitCubeResult_const*,std::vector<stLimitCubeResult,std::allocator<stLimitCubeResult>>>
  ::__normal_iterator<stLimitCubeResult*>
            ((__normal_iterator<stLimitCubeResult_const*,std::vector<stLimitCubeResult,std::allocator<stLimitCubeResult>>>
              *)&local_38,local_34);
  local_4c = local_38;
  do {
    std::vector<stLimitCubeResult,std::allocator<stLimitCubeResult>>::end();
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_4c,local_30);
    if (!bVar1) {
LAB_0850fd70:
      *(undefined4 *)param_1 = local_28;
      *(undefined4 *)(param_1 + 4) = local_24;
      return;
    }
    local_10 = (undefined4 *)
               __gnu_cxx::
               __normal_iterator<stLimitCubeResult_const*,std::vector<stLimitCubeResult,std::allocator<stLimitCubeResult>>>
               ::operator*((__normal_iterator<stLimitCubeResult_const*,std::vector<stLimitCubeResult,std::allocator<stLimitCubeResult>>>
                            *)&local_4c);
    local_18 = local_18 + local_10[2];
    if (local_1c <= local_18) {
      local_28 = *local_10;
      local_24 = local_10[1];
      goto LAB_0850fd70;
    }
    __gnu_cxx::
    __normal_iterator<stLimitCubeResult_const*,std::vector<stLimitCubeResult,std::allocator<stLimitCubeResult>>>
    ::operator++(local_2c,(int)&local_4c);
  } while( true );
}

```

---

## get_lotto_item

```asm
// === 0850ebfc CStackableItem::get_lotto_item  [0x0850ebfc-0x850edd9] ===
 850ebfc:	55                   	push   %ebp
 850ebfd:	89 e5                	mov    %esp,%ebp
 850ebff:	83 ec 68             	sub    $0x68,%esp
 850ec02:	8b 45 0c             	mov    0xc(%ebp),%eax
 850ec05:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 850ec08:	c7 45 e8 ff ff ff ff 	movl   $0xffffffff,-0x18(%ebp)
 850ec0f:	c7 45 cc a0 86 01 00 	movl   $0x186a0,-0x34(%ebp)
 850ec16:	8b 45 08             	mov    0x8(%ebp),%eax
 850ec19:	8b 80 e0 01 00 00    	mov    0x1e0(%eax),%eax
 850ec1f:	8d 55 cc             	lea    -0x34(%ebp),%edx
 850ec22:	89 54 24 04          	mov    %edx,0x4(%esp)
 850ec26:	89 04 24             	mov    %eax,(%esp)
 850ec29:	e8 90 ce bb ff       	call   80cbabe <_ZN7CMTRand7randIntERKm>
 850ec2e:	89 45 ec             	mov    %eax,-0x14(%ebp)
 850ec31:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 850ec38:	8d 45 c8             	lea    -0x38(%ebp),%eax
 850ec3b:	89 04 24             	mov    %eax,(%esp)
 850ec3e:	e8 89 8a 00 00       	call   85176cc <_ZN9__gnu_cxx17__normal_iteratorIPSt4pairIiiESt6vectorIS2_SaIS2_EEEC1Ev>
 850ec43:	c7 45 f4 01 00 00 00 	movl   $0x1,-0xc(%ebp)
 850ec4a:	8b 45 08             	mov    0x8(%ebp),%eax
 850ec4d:	8d 90 d4 01 00 00    	lea    0x1d4(%eax),%edx
 850ec53:	8d 45 d0             	lea    -0x30(%ebp),%eax
 850ec56:	89 54 24 04          	mov    %edx,0x4(%esp)
 850ec5a:	89 04 24             	mov    %eax,(%esp)
 850ec5d:	e8 e6 f5 b7 ff       	call   808e248 <_ZNSt6vectorIiSaIiEE5beginEv>
 850ec62:	83 ec 04             	sub    $0x4,%esp
 850ec65:	8d 45 d0             	lea    -0x30(%ebp),%eax
 850ec68:	89 44 24 04          	mov    %eax,0x4(%esp)
 850ec6c:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 850ec6f:	89 04 24             	mov    %eax,(%esp)
 850ec72:	e8 75 ad be ff       	call   80f99ec <_ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC1IPiEERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameIS9_S8_E7__valueES5_E6__typeEEE>
 850ec77:	8d 45 bc             	lea    -0x44(%ebp),%eax
 850ec7a:	89 04 24             	mov    %eax,(%esp)
 850ec7d:	e8 0c 70 ca ff       	call   81b5c8e <_ZNSt4pairIiiEC1Ev>
 850ec82:	8b 45 08             	mov    0x8(%ebp),%eax
 850ec85:	8d 90 c4 01 00 00    	lea    0x1c4(%eax),%edx
 850ec8b:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 850ec8e:	89 54 24 04          	mov    %edx,0x4(%esp)
 850ec92:	89 04 24             	mov    %eax,(%esp)
 850ec95:	e8 18 e9 bc ff       	call   80dd5b2 <_ZNSt6vectorISt4pairIiiESaIS1_EE5beginEv>
 850ec9a:	83 ec 04             	sub    $0x4,%esp
 850ec9d:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 850eca0:	89 45 c8             	mov    %eax,-0x38(%ebp)
 850eca3:	eb 76                	jmp    850ed1b <_ZN14CStackableItem14get_lotto_itemEPc+0x11f>
 850eca5:	8d 45 c8             	lea    -0x38(%ebp),%eax
 850eca8:	89 04 24             	mov    %eax,(%esp)
 850ecab:	e8 4c e9 bc ff       	call   80dd5fc <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIiiESt6vectorIS2_SaIS2_EEEdeEv>
 850ecb0:	8b 50 04             	mov    0x4(%eax),%edx
 850ecb3:	8b 00                	mov    (%eax),%eax
 850ecb5:	89 45 d8             	mov    %eax,-0x28(%ebp)
 850ecb8:	89 55 dc             	mov    %edx,-0x24(%ebp)
 850ecbb:	8d 45 d8             	lea    -0x28(%ebp),%eax
 850ecbe:	89 44 24 04          	mov    %eax,0x4(%esp)
 850ecc2:	8d 45 bc             	lea    -0x44(%ebp),%eax
 850ecc5:	89 04 24             	mov    %eax,(%esp)
 850ecc8:	e8 4f f2 bc ff       	call   80ddf1c <_ZNSt4pairIiiEaSEOS0_>
 850eccd:	8b 45 c0             	mov    -0x40(%ebp),%eax
 850ecd0:	01 45 f0             	add    %eax,-0x10(%ebp)
 850ecd3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 850ecd6:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 850ecd9:	7e 18                	jle    850ecf3 <_ZN14CStackableItem14get_lotto_itemEPc+0xf7>
 850ecdb:	8b 45 bc             	mov    -0x44(%ebp),%eax
 850ecde:	89 45 e8             	mov    %eax,-0x18(%ebp)
 850ece1:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 850ece4:	89 04 24             	mov    %eax,(%esp)
 850ece7:	e8 30 ad be ff       	call   80f9a1c <_ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEdeEv>
 850ecec:	8b 00                	mov    (%eax),%eax
 850ecee:	89 45 f4             	mov    %eax,-0xc(%ebp)
 850ecf1:	eb 5d                	jmp    850ed50 <_ZN14CStackableItem14get_lotto_itemEPc+0x154>
 850ecf3:	8d 45 e0             	lea    -0x20(%ebp),%eax
 850ecf6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 850ecfd:	00 
 850ecfe:	8d 55 c8             	lea    -0x38(%ebp),%edx
 850ed01:	89 54 24 04          	mov    %edx,0x4(%esp)
 850ed05:	89 04 24             	mov    %eax,(%esp)
 850ed08:	e8 8f a0 e7 ff       	call   8388d9c <_ZN9__gnu_cxx17__normal_iteratorIPSt4pairIiiESt6vectorIS2_SaIS2_EEEppEi>
 850ed0d:	83 ec 04             	sub    $0x4,%esp
 850ed10:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 850ed13:	89 04 24             	mov    %eax,(%esp)
 850ed16:	e8 eb ac be ff       	call   80f9a06 <_ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEppEv>
 850ed1b:	8b 45 08             	mov    0x8(%ebp),%eax
 850ed1e:	8d 90 c4 01 00 00    	lea    0x1c4(%eax),%edx
 850ed24:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 850ed27:	89 54 24 04          	mov    %edx,0x4(%esp)
 850ed2b:	89 04 24             	mov    %eax,(%esp)
 850ed2e:	e8 a3 e8 bc ff       	call   80dd5d6 <_ZNSt6vectorISt4pairIiiESaIS1_EE3endEv>
 850ed33:	83 ec 04             	sub    $0x4,%esp
 850ed36:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 850ed39:	89 44 24 04          	mov    %eax,0x4(%esp)
 850ed3d:	8d 45 c8             	lea    -0x38(%ebp),%eax
 850ed40:	89 04 24             	mov    %eax,(%esp)
 850ed43:	e8 96 24 c0 ff       	call   81111de <_ZN9__gnu_cxxneIPSt4pairIiiESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 850ed48:	84 c0                	test   %al,%al
 850ed4a:	0f 85 55 ff ff ff    	jne    850eca5 <_ZN14CStackableItem14get_lotto_itemEPc+0xa9>
 850ed50:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 850ed54:	75 1b                	jne    850ed71 <_ZN14CStackableItem14get_lotto_itemEPc+0x175>
 850ed56:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 850ed5a:	7e 15                	jle    850ed71 <_ZN14CStackableItem14get_lotto_itemEPc+0x175>
 850ed5c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 850ed5f:	c7 40 02 00 00 00 00 	movl   $0x0,0x2(%eax)
 850ed66:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 850ed69:	8b 55 f4             	mov    -0xc(%ebp),%edx
 850ed6c:	89 50 07             	mov    %edx,0x7(%eax)
 850ed6f:	eb 67                	jmp    850edd8 <_ZN14CStackableItem14get_lotto_itemEPc+0x1dc>
 850ed71:	83 7d e8 ff          	cmpl   $0xffffffff,-0x18(%ebp)
 850ed75:	75 32                	jne    850eda9 <_ZN14CStackableItem14get_lotto_itemEPc+0x1ad>
 850ed77:	8b 45 08             	mov    0x8(%ebp),%eax
 850ed7a:	8b 80 c0 01 00 00    	mov    0x1c0(%eax),%eax
 850ed80:	89 45 e8             	mov    %eax,-0x18(%ebp)
 850ed83:	8b 45 08             	mov    0x8(%ebp),%eax
 850ed86:	8b 80 d0 01 00 00    	mov    0x1d0(%eax),%eax
 850ed8c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 850ed8f:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 850ed93:	75 14                	jne    850eda9 <_ZN14CStackableItem14get_lotto_itemEPc+0x1ad>
 850ed95:	8b 55 e8             	mov    -0x18(%ebp),%edx
 850ed98:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 850ed9b:	89 50 02             	mov    %edx,0x2(%eax)
 850ed9e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 850eda1:	8b 55 f4             	mov    -0xc(%ebp),%edx
 850eda4:	89 50 07             	mov    %edx,0x7(%eax)
 850eda7:	eb 2f                	jmp    850edd8 <_ZN14CStackableItem14get_lotto_itemEPc+0x1dc>
 850eda9:	8b 55 e8             	mov    -0x18(%ebp),%edx
 850edac:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 850edaf:	89 50 02             	mov    %edx,0x2(%eax)
 850edb2:	e8 e4 d3 bb ff       	call   80cc19b <_Z14G_CDataManagerv>
 850edb7:	8b 40 0c             	mov    0xc(%eax),%eax
 850edba:	8b 55 f4             	mov    -0xc(%ebp),%edx
 850edbd:	89 54 24 0c          	mov    %edx,0xc(%esp)
 850edc1:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 850edc4:	89 54 24 08          	mov    %edx,0x8(%esp)
 850edc8:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 850edcf:	00 
 850edd0:	89 04 24             	mov    %eax,(%esp)
 850edd3:	e8 e0 31 00 00       	call   8511fb8 <_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi>
 850edd8:	c9                   	leave
 850edd9:	c3                   	ret

```

```c
// CStackableItem::get_lotto_item @ 0x850ebfc

/* CStackableItem::get_lotto_item(char*) */

void __thiscall CStackableItem::get_lotto_item(CStackableItem *this,char *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int local_48;
  int local_44;
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_40 [4];
  __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_3c [4];
  ulong local_38;
  __normal_iterator local_34 [4];
  __normal_iterator local_30 [4];
  undefined4 local_2c;
  undefined4 local_28;
  __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_24 [4];
  char *local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_20 = param_1;
  local_1c = -1;
  local_38 = 100000;
  local_18 = CMTRand::randInt(*(CMTRand **)(this + 0x1e0),&local_38);
  local_14 = 0;
  __gnu_cxx::
  __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  ::__normal_iterator(local_3c);
  local_10 = 1;
  std::vector<int,std::allocator<int>>::begin();
  __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
  __normal_iterator<int*>(local_40,local_34);
  std::pair<int,int>::pair((pair<int,int> *)&local_48);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
  do {
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
    bVar1 = __gnu_cxx::operator!=(local_3c,local_30);
    if (!bVar1) {
LAB_0850ed50:
      if ((local_1c == 0) && (0 < local_10)) {
        local_20[2] = '\0';
        local_20[3] = '\0';
        local_20[4] = '\0';
        local_20[5] = '\0';
        *(int *)(local_20 + 7) = local_10;
      }
      else {
        if (local_1c == -1) {
          local_1c = *(int *)(this + 0x1c0);
          local_10 = *(int *)(this + 0x1d0);
          if (local_1c == 0) {
            local_20[2] = '\0';
            local_20[3] = '\0';
            local_20[4] = '\0';
            local_20[5] = '\0';
            *(int *)(local_20 + 7) = local_10;
            return;
          }
        }
        *(int *)(local_20 + 2) = local_1c;
        iVar4 = G_CDataManager();
        CItemList::create_item(*(CItemList **)(iVar4 + 0xc),2,local_20,local_10);
      }
      return;
    }
    puVar2 = (undefined4 *)
             __gnu_cxx::
             __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
             ::operator*(local_3c);
    local_28 = puVar2[1];
    local_2c = *puVar2;
    std::pair<int,int>::operator=((pair<int,int> *)&local_48,(pair *)&local_2c);
    local_14 = local_14 + local_44;
    if (local_18 < local_14) {
      local_1c = local_48;
      piVar3 = (int *)__gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>
                      ::operator*(local_40);
      local_10 = *piVar3;
      goto LAB_0850ed50;
    }
    __gnu_cxx::
    __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
    ::operator++(local_24,(int)local_3c);
    __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::operator++
              (local_40);
  } while( true );
}

```

---

## get_multibox_default_item

```asm
// === 0850f136 CStackableItem::get_multibox_default_item  [0x0850f136-0x850f389] ===
 850f136:	55                   	push   %ebp
 850f137:	89 e5                	mov    %esp,%ebp
 850f139:	81 ec b8 00 00 00    	sub    $0xb8,%esp
 850f13f:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 850f143:	0f 84 3e 02 00 00    	je     850f387 <_ZN14CStackableItem25get_multibox_default_itemEPSt6vectorISt4pairI10Inven_ItembESaIS3_EE+0x251>
 850f149:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 850f150:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 850f157:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 850f15e:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 850f165:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
 850f169:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 850f170:	e9 f9 01 00 00       	jmp    850f36e <_ZN14CStackableItem25get_multibox_default_itemEPSt6vectorISt4pairI10Inven_ItembESaIS3_EE+0x238>
 850f175:	8b 45 08             	mov    0x8(%ebp),%eax
 850f178:	8d 90 10 02 00 00    	lea    0x210(%eax),%edx
 850f17e:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 850f181:	89 54 24 04          	mov    %edx,0x4(%esp)
 850f185:	89 04 24             	mov    %eax,(%esp)
 850f188:	e8 8f 86 00 00       	call   851781c <_ZNSt6vectorIN19MultiBoxLotteryInfo13stDefaultItemESaIS1_EE5beginEv>
 850f18d:	83 ec 04             	sub    $0x4,%esp
 850f190:	c7 04 24 40 42 0f 00 	movl   $0xf4240,(%esp)
 850f197:	e8 eb 29 1a 00       	call   86b1b87 <_Z12get_rand_inti>
 850f19c:	89 45 e0             	mov    %eax,-0x20(%ebp)
 850f19f:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 850f1a6:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 850f1ad:	eb 76                	jmp    850f225 <_ZN14CStackableItem25get_multibox_default_itemEPSt6vectorISt4pairI10Inven_ItembESaIS3_EE+0xef>
 850f1af:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 850f1b2:	89 04 24             	mov    %eax,(%esp)
 850f1b5:	e8 d8 86 00 00       	call   8517892 <_ZNK9__gnu_cxx17__normal_iteratorIPN19MultiBoxLotteryInfo13stDefaultItemESt6vectorIS2_SaIS2_EEEdeEv>
 850f1ba:	8b 50 08             	mov    0x8(%eax),%edx
 850f1bd:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 850f1c0:	8d 04 02             	lea    (%edx,%eax,1),%eax
 850f1c3:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 850f1c6:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 850f1c9:	3b 45 e0             	cmp    -0x20(%ebp),%eax
 850f1cc:	7e 3a                	jle    850f208 <_ZN14CStackableItem25get_multibox_default_itemEPSt6vectorISt4pairI10Inven_ItembESaIS3_EE+0xd2>
 850f1ce:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 850f1d1:	89 04 24             	mov    %eax,(%esp)
 850f1d4:	e8 b9 86 00 00       	call   8517892 <_ZNK9__gnu_cxx17__normal_iteratorIPN19MultiBoxLotteryInfo13stDefaultItemESt6vectorIS2_SaIS2_EEEdeEv>
 850f1d9:	8b 00                	mov    (%eax),%eax
 850f1db:	89 45 e8             	mov    %eax,-0x18(%ebp)
 850f1de:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 850f1e1:	89 04 24             	mov    %eax,(%esp)
 850f1e4:	e8 a9 86 00 00       	call   8517892 <_ZNK9__gnu_cxx17__normal_iteratorIPN19MultiBoxLotteryInfo13stDefaultItemESt6vectorIS2_SaIS2_EEEdeEv>
 850f1e9:	8b 40 04             	mov    0x4(%eax),%eax
 850f1ec:	89 45 ec             	mov    %eax,-0x14(%ebp)
 850f1ef:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 850f1f2:	89 04 24             	mov    %eax,(%esp)
 850f1f5:	e8 98 86 00 00       	call   8517892 <_ZNK9__gnu_cxx17__normal_iteratorIPN19MultiBoxLotteryInfo13stDefaultItemESt6vectorIS2_SaIS2_EEEdeEv>
 850f1fa:	0f b6 40 0c          	movzbl 0xc(%eax),%eax
 850f1fe:	84 c0                	test   %al,%al
 850f200:	0f 95 c0             	setne  %al
 850f203:	88 45 f3             	mov    %al,-0xd(%ebp)
 850f206:	eb 52                	jmp    850f25a <_ZN14CStackableItem25get_multibox_default_itemEPSt6vectorISt4pairI10Inven_ItembESaIS3_EE+0x124>
 850f208:	8d 45 dc             	lea    -0x24(%ebp),%eax
 850f20b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 850f212:	00 
 850f213:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 850f216:	89 54 24 04          	mov    %edx,0x4(%esp)
 850f21a:	89 04 24             	mov    %eax,(%esp)
 850f21d:	e8 7a 86 00 00       	call   851789c <_ZN9__gnu_cxx17__normal_iteratorIPN19MultiBoxLotteryInfo13stDefaultItemESt6vectorIS2_SaIS2_EEEppEi>
 850f222:	83 ec 04             	sub    $0x4,%esp
 850f225:	8b 45 08             	mov    0x8(%ebp),%eax
 850f228:	8d 90 10 02 00 00    	lea    0x210(%eax),%edx
 850f22e:	8d 45 d8             	lea    -0x28(%ebp),%eax
 850f231:	89 54 24 04          	mov    %edx,0x4(%esp)
 850f235:	89 04 24             	mov    %eax,(%esp)
 850f238:	e8 03 86 00 00       	call   8517840 <_ZNSt6vectorIN19MultiBoxLotteryInfo13stDefaultItemESaIS1_EE3endEv>
 850f23d:	83 ec 04             	sub    $0x4,%esp
 850f240:	8d 45 d8             	lea    -0x28(%ebp),%eax
 850f243:	89 44 24 04          	mov    %eax,0x4(%esp)
 850f247:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 850f24a:	89 04 24             	mov    %eax,(%esp)
 850f24d:	e8 14 86 00 00       	call   8517866 <_ZN9__gnu_cxxneIPN19MultiBoxLotteryInfo13stDefaultItemESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 850f252:	84 c0                	test   %al,%al
 850f254:	0f 85 55 ff ff ff    	jne    850f1af <_ZN14CStackableItem25get_multibox_default_itemEPSt6vectorISt4pairI10Inven_ItembESaIS3_EE+0x79>
 850f25a:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 850f25e:	75 2a                	jne    850f28a <_ZN14CStackableItem25get_multibox_default_itemEPSt6vectorISt4pairI10Inven_ItembESaIS3_EE+0x154>
 850f260:	8b 45 08             	mov    0x8(%ebp),%eax
 850f263:	8b 80 04 02 00 00    	mov    0x204(%eax),%eax
 850f269:	89 45 e8             	mov    %eax,-0x18(%ebp)
 850f26c:	8b 45 08             	mov    0x8(%ebp),%eax
 850f26f:	8b 80 08 02 00 00    	mov    0x208(%eax),%eax
 850f275:	89 45 ec             	mov    %eax,-0x14(%ebp)
 850f278:	8b 45 08             	mov    0x8(%ebp),%eax
 850f27b:	0f b6 80 0c 02 00 00 	movzbl 0x20c(%eax),%eax
 850f282:	84 c0                	test   %al,%al
 850f284:	0f 95 c0             	setne  %al
 850f287:	88 45 f3             	mov    %al,-0xd(%ebp)
 850f28a:	8d 45 97             	lea    -0x69(%ebp),%eax
 850f28d:	89 04 24             	mov    %eax,(%esp)
 850f290:	e8 bf c5 bb ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 850f295:	8b 45 e8             	mov    -0x18(%ebp),%eax
 850f298:	89 45 99             	mov    %eax,-0x67(%ebp)
 850f29b:	e8 fb ce bb ff       	call   80cc19b <_Z14G_CDataManagerv>
 850f2a0:	8b 40 0c             	mov    0xc(%eax),%eax
 850f2a3:	8b 55 ec             	mov    -0x14(%ebp),%edx
 850f2a6:	89 54 24 0c          	mov    %edx,0xc(%esp)
 850f2aa:	8d 55 97             	lea    -0x69(%ebp),%edx
 850f2ad:	89 54 24 08          	mov    %edx,0x8(%esp)
 850f2b1:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 850f2b8:	00 
 850f2b9:	89 04 24             	mov    %eax,(%esp)
 850f2bc:	e8 f7 2c 00 00       	call   8511fb8 <_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi>
 850f2c1:	8d 85 59 ff ff ff    	lea    -0xa7(%ebp),%eax
 850f2c7:	89 04 24             	mov    %eax,(%esp)
 850f2ca:	e8 8b 84 00 00       	call   851775a <_ZNSt4pairI10Inven_ItembEC1Ev>
 850f2cf:	8b 45 97             	mov    -0x69(%ebp),%eax
 850f2d2:	89 85 59 ff ff ff    	mov    %eax,-0xa7(%ebp)
 850f2d8:	8b 45 9b             	mov    -0x65(%ebp),%eax
 850f2db:	89 85 5d ff ff ff    	mov    %eax,-0xa3(%ebp)
 850f2e1:	8b 45 9f             	mov    -0x61(%ebp),%eax
 850f2e4:	89 85 61 ff ff ff    	mov    %eax,-0x9f(%ebp)
 850f2ea:	8b 45 a3             	mov    -0x5d(%ebp),%eax
 850f2ed:	89 85 65 ff ff ff    	mov    %eax,-0x9b(%ebp)
 850f2f3:	8b 45 a7             	mov    -0x59(%ebp),%eax
 850f2f6:	89 85 69 ff ff ff    	mov    %eax,-0x97(%ebp)
 850f2fc:	8b 45 ab             	mov    -0x55(%ebp),%eax
 850f2ff:	89 85 6d ff ff ff    	mov    %eax,-0x93(%ebp)
 850f305:	8b 45 af             	mov    -0x51(%ebp),%eax
 850f308:	89 85 71 ff ff ff    	mov    %eax,-0x8f(%ebp)
 850f30e:	8b 45 b3             	mov    -0x4d(%ebp),%eax
 850f311:	89 85 75 ff ff ff    	mov    %eax,-0x8b(%ebp)
 850f317:	8b 45 b7             	mov    -0x49(%ebp),%eax
 850f31a:	89 85 79 ff ff ff    	mov    %eax,-0x87(%ebp)
 850f320:	8b 45 bb             	mov    -0x45(%ebp),%eax
 850f323:	89 85 7d ff ff ff    	mov    %eax,-0x83(%ebp)
 850f329:	8b 45 bf             	mov    -0x41(%ebp),%eax
 850f32c:	89 45 81             	mov    %eax,-0x7f(%ebp)
 850f32f:	8b 45 c3             	mov    -0x3d(%ebp),%eax
 850f332:	89 45 85             	mov    %eax,-0x7b(%ebp)
 850f335:	8b 45 c7             	mov    -0x39(%ebp),%eax
 850f338:	89 45 89             	mov    %eax,-0x77(%ebp)
 850f33b:	8b 45 cb             	mov    -0x35(%ebp),%eax
 850f33e:	89 45 8d             	mov    %eax,-0x73(%ebp)
 850f341:	8b 45 cf             	mov    -0x31(%ebp),%eax
 850f344:	89 45 91             	mov    %eax,-0x6f(%ebp)
 850f347:	0f b6 45 d3          	movzbl -0x2d(%ebp),%eax
 850f34b:	88 45 95             	mov    %al,-0x6b(%ebp)
 850f34e:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 850f352:	88 45 96             	mov    %al,-0x6a(%ebp)
 850f355:	8d 85 59 ff ff ff    	lea    -0xa7(%ebp),%eax
 850f35b:	89 44 24 04          	mov    %eax,0x4(%esp)
 850f35f:	8b 45 0c             	mov    0xc(%ebp),%eax
 850f362:	89 04 24             	mov    %eax,(%esp)
 850f365:	e8 0a 84 00 00       	call   8517774 <_ZNSt6vectorISt4pairI10Inven_ItembESaIS2_EE9push_backERKS2_>
 850f36a:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 850f36e:	8b 45 08             	mov    0x8(%ebp),%eax
 850f371:	8b 80 00 02 00 00    	mov    0x200(%eax),%eax
 850f377:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 850f37a:	0f 97 c0             	seta   %al
 850f37d:	84 c0                	test   %al,%al
 850f37f:	0f 85 f0 fd ff ff    	jne    850f175 <_ZN14CStackableItem25get_multibox_default_itemEPSt6vectorISt4pairI10Inven_ItembESaIS3_EE+0x3f>
 850f385:	eb 01                	jmp    850f388 <_ZN14CStackableItem25get_multibox_default_itemEPSt6vectorISt4pairI10Inven_ItembESaIS3_EE+0x252>
 850f387:	90                   	nop
 850f388:	c9                   	leave
 850f389:	c3                   	ret

```

```c
// CStackableItem::get_multibox_default_item @ 0x850f136

/* CStackableItem::get_multibox_default_item(std::vector<std::pair<Inven_Item, bool>,
   std::allocator<std::pair<Inven_Item, bool> > >*) */

void __thiscall CStackableItem::get_multibox_default_item(CStackableItem *this,vector *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_ab;
  undefined4 local_a7;
  undefined4 local_a3;
  undefined4 local_9f;
  undefined4 local_9b;
  undefined4 local_97;
  undefined4 local_93;
  undefined4 local_8f;
  undefined4 local_8b;
  undefined4 local_87;
  undefined4 local_83;
  undefined4 local_7f;
  undefined4 local_7b;
  undefined4 local_77;
  undefined4 local_73;
  undefined1 local_6f;
  undefined1 local_6e;
  undefined2 local_6d;
  undefined2 uStack_6b;
  undefined2 uStack_69;
  undefined2 uStack_67;
  undefined4 local_65;
  undefined4 local_61;
  undefined4 local_5d;
  undefined4 local_59;
  undefined4 local_55;
  undefined4 local_51;
  undefined4 local_4d;
  undefined4 local_49;
  undefined4 local_45;
  undefined4 local_41;
  undefined4 local_3d;
  undefined4 local_39;
  undefined4 local_35;
  undefined1 local_31;
  __normal_iterator<MultiBoxLotteryInfo::stDefaultItem*,std::vector<MultiBoxLotteryInfo::stDefaultItem,std::allocator<MultiBoxLotteryInfo::stDefaultItem>>>
  local_30 [4];
  __normal_iterator local_2c [4];
  __normal_iterator<MultiBoxLotteryInfo::stDefaultItem*,std::vector<MultiBoxLotteryInfo::stDefaultItem,std::allocator<MultiBoxLotteryInfo::stDefaultItem>>>
  local_28 [4];
  int local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  undefined1 local_11;
  uint local_10;
  
  if (param_1 != (vector *)0x0) {
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    local_11 = 0;
    for (local_10 = 0; local_10 < *(uint *)(this + 0x200); local_10 = local_10 + 1) {
      std::
      vector<MultiBoxLotteryInfo::stDefaultItem,std::allocator<MultiBoxLotteryInfo::stDefaultItem>>
      ::begin();
      local_24 = get_rand_int(1000000);
      local_20 = 0;
      local_1c = 0;
      while( true ) {
        std::
        vector<MultiBoxLotteryInfo::stDefaultItem,std::allocator<MultiBoxLotteryInfo::stDefaultItem>>
        ::end();
        bVar1 = __gnu_cxx::operator!=(local_30,local_2c);
        if (!bVar1) break;
        iVar3 = __gnu_cxx::
                __normal_iterator<MultiBoxLotteryInfo::stDefaultItem*,std::vector<MultiBoxLotteryInfo::stDefaultItem,std::allocator<MultiBoxLotteryInfo::stDefaultItem>>>
                ::operator*(local_30);
        local_20 = *(int *)(iVar3 + 8) + local_20;
        if (local_24 < local_20) {
          piVar2 = (int *)__gnu_cxx::
                          __normal_iterator<MultiBoxLotteryInfo::stDefaultItem*,std::vector<MultiBoxLotteryInfo::stDefaultItem,std::allocator<MultiBoxLotteryInfo::stDefaultItem>>>
                          ::operator*(local_30);
          local_1c = *piVar2;
          iVar3 = __gnu_cxx::
                  __normal_iterator<MultiBoxLotteryInfo::stDefaultItem*,std::vector<MultiBoxLotteryInfo::stDefaultItem,std::allocator<MultiBoxLotteryInfo::stDefaultItem>>>
                  ::operator*(local_30);
          local_18 = *(undefined4 *)(iVar3 + 4);
          iVar3 = __gnu_cxx::
                  __normal_iterator<MultiBoxLotteryInfo::stDefaultItem*,std::vector<MultiBoxLotteryInfo::stDefaultItem,std::allocator<MultiBoxLotteryInfo::stDefaultItem>>>
                  ::operator*(local_30);
          local_11 = *(char *)(iVar3 + 0xc) != '\0';
          break;
        }
        __gnu_cxx::
        __normal_iterator<MultiBoxLotteryInfo::stDefaultItem*,std::vector<MultiBoxLotteryInfo::stDefaultItem,std::allocator<MultiBoxLotteryInfo::stDefaultItem>>>
        ::operator++(local_28,(int)local_30);
      }
      if (local_1c == 0) {
        local_1c = *(int *)(this + 0x204);
        local_18 = *(undefined4 *)(this + 0x208);
        local_11 = this[0x20c] != (CStackableItem)0x0;
      }
      Inven_Item::Inven_Item((Inven_Item *)&local_6d);
      uStack_6b = (undefined2)local_1c;
      uStack_69 = (undefined2)((uint)local_1c >> 0x10);
      iVar3 = G_CDataManager();
      CItemList::create_item(*(CItemList **)(iVar3 + 0xc),2,&local_6d,local_18);
      std::pair<Inven_Item,bool>::pair((pair<Inven_Item,bool> *)&local_ab);
      local_ab = CONCAT22(uStack_6b,local_6d);
      local_a7 = CONCAT22(uStack_67,uStack_69);
      local_a3 = local_65;
      local_9f = local_61;
      local_9b = local_5d;
      local_97 = local_59;
      local_93 = local_55;
      local_8f = local_51;
      local_8b = local_4d;
      local_87 = local_49;
      local_83 = local_45;
      local_7f = local_41;
      local_7b = local_3d;
      local_77 = local_39;
      local_73 = local_35;
      local_6f = local_31;
      local_6e = local_11;
      std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>::push_back
                ((vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>> *)
                 param_1,(pair *)&local_ab);
    }
  }
  return;
}

```

---

## get_multibox_default_item_arad

```asm
// === 0850f38a CStackableItem::get_multibox_default_item_arad  [0x0850f38a-0x850f731] ===
 850f38a:	55                   	push   %ebp
 850f38b:	89 e5                	mov    %esp,%ebp
 850f38d:	57                   	push   %edi
 850f38e:	56                   	push   %esi
 850f38f:	53                   	push   %ebx
 850f390:	81 ec ec 00 00 00    	sub    $0xec,%esp
 850f396:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
 850f39a:	0f 84 85 03 00 00    	je     850f725 <_ZN14CStackableItem30get_multibox_default_item_aradEPSt6vectorISt4pairI10Inven_ItembESaIS3_EE+0x39b>
 850f3a0:	b8 58 de 43 09       	mov    $0x943de58,%eax
 850f3a5:	0f b6 00             	movzbl (%eax),%eax
 850f3a8:	84 c0                	test   %al,%al
 850f3aa:	75 71                	jne    850f41d <_ZN14CStackableItem30get_multibox_default_item_aradEPSt6vectorISt4pairI10Inven_ItembESaIS3_EE+0x93>
 850f3ac:	c7 04 24 58 de 43 09 	movl   $0x943de58,(%esp)
 850f3b3:	e8 78 5f 21 00       	call   8725330 <__cxa_guard_acquire>
 850f3b8:	85 c0                	test   %eax,%eax
 850f3ba:	0f 95 c0             	setne  %al
 850f3bd:	84 c0                	test   %al,%al
 850f3bf:	74 5c                	je     850f41d <_ZN14CStackableItem30get_multibox_default_item_aradEPSt6vectorISt4pairI10Inven_ItembESaIS3_EE+0x93>
 850f3c1:	bb 00 00 00 00       	mov    $0x0,%ebx
 850f3c6:	c7 04 24 60 de 43 09 	movl   $0x943de60,(%esp)
 850f3cd:	e8 fe 84 00 00       	call   85178d0 <_ZNSt6vectorIN19MultiBoxLotteryInfo18LotteryDefaultAradESaIS1_EEC1Ev>
 850f3d2:	c7 04 24 58 de 43 09 	movl   $0x943de58,(%esp)
 850f3d9:	e8 72 5e 21 00       	call   8725250 <__cxa_guard_release>
 850f3de:	b8 e4 78 51 08       	mov    $0x85178e4,%eax
 850f3e3:	c7 44 24 08 48 58 ae 	movl   $0x8ae5848,0x8(%esp)
 850f3ea:	08 
 850f3eb:	c7 44 24 04 60 de 43 	movl   $0x943de60,0x4(%esp)
 850f3f2:	09 
 850f3f3:	89 04 24             	mov    %eax,(%esp)
 850f3f6:	e8 d5 e9 b6 ff       	call   807ddd0 <__cxa_atexit@plt>
 850f3fb:	eb 20                	jmp    850f41d <_ZN14CStackableItem30get_multibox_default_item_aradEPSt6vectorISt4pairI10Inven_ItembESaIS3_EE+0x93>
 850f3fd:	89 d6                	mov    %edx,%esi
 850f3ff:	89 c7                	mov    %eax,%edi
 850f401:	84 db                	test   %bl,%bl
 850f403:	75 0c                	jne    850f411 <_ZN14CStackableItem30get_multibox_default_item_aradEPSt6vectorISt4pairI10Inven_ItembESaIS3_EE+0x87>
 850f405:	c7 04 24 58 de 43 09 	movl   $0x943de58,(%esp)
 850f40c:	e8 af 5e 21 00       	call   87252c0 <__cxa_guard_abort>
 850f411:	89 f8                	mov    %edi,%eax
 850f413:	89 f2                	mov    %esi,%edx
 850f415:	89 04 24             	mov    %eax,(%esp)
 850f418:	e8 33 43 5d 00       	call   8ae3750 <_Unwind_Resume>
 850f41d:	c7 04 24 60 de 43 09 	movl   $0x943de60,(%esp)
 850f424:	e8 19 85 00 00       	call   8517942 <_ZNKSt6vectorIN19MultiBoxLotteryInfo18LotteryDefaultAradESaIS1_EE5emptyEv>
 850f429:	84 c0                	test   %al,%al
 850f42b:	0f 84 d8 00 00 00    	je     850f509 <_ZN14CStackableItem30get_multibox_default_item_aradEPSt6vectorISt4pairI10Inven_ItembESaIS3_EE+0x17f>
 850f431:	c7 44 24 0c 50 c3 00 	movl   $0xc350,0xc(%esp)
 850f438:	00 
 850f439:	c7 44 24 08 0a 00 00 	movl   $0xa,0x8(%esp)
 850f440:	00 
 850f441:	c7 44 24 04 16 be 28 	movl   $0x28be16,0x4(%esp)
 850f448:	00 
 850f449:	8d 45 9c             	lea    -0x64(%ebp),%eax
 850f44c:	89 04 24             	mov    %eax,(%esp)
 850f44f:	e8 dc 49 00 00       	call   8513e30 <_ZN19MultiBoxLotteryInfo18LotteryDefaultAradC1Ejjj>
 850f454:	8d 45 9c             	lea    -0x64(%ebp),%eax
 850f457:	89 44 24 04          	mov    %eax,0x4(%esp)
 850f45b:	c7 04 24 60 de 43 09 	movl   $0x943de60,(%esp)
 850f462:	e8 1f 85 00 00       	call   8517986 <_ZNSt6vectorIN19MultiBoxLotteryInfo18LotteryDefaultAradESaIS1_EE9push_backEOS1_>
 850f467:	c7 44 24 0c a8 61 00 	movl   $0x61a8,0xc(%esp)
 850f46e:	00 
 850f46f:	c7 44 24 08 32 00 00 	movl   $0x32,0x8(%esp)
 850f476:	00 
 850f477:	c7 44 24 04 16 be 28 	movl   $0x28be16,0x4(%esp)
 850f47e:	00 
 850f47f:	8d 45 a8             	lea    -0x58(%ebp),%eax
 850f482:	89 04 24             	mov    %eax,(%esp)
 850f485:	e8 a6 49 00 00       	call   8513e30 <_ZN19MultiBoxLotteryInfo18LotteryDefaultAradC1Ejjj>
 850f48a:	8d 45 a8             	lea    -0x58(%ebp),%eax
 850f48d:	89 44 24 04          	mov    %eax,0x4(%esp)
 850f491:	c7 04 24 60 de 43 09 	movl   $0x943de60,(%esp)
 850f498:	e8 e9 84 00 00       	call   8517986 <_ZNSt6vectorIN19MultiBoxLotteryInfo18LotteryDefaultAradESaIS1_EE9push_backEOS1_>
 850f49d:	c7 44 24 0c 88 13 00 	movl   $0x1388,0xc(%esp)
 850f4a4:	00 
 850f4a5:	c7 44 24 08 64 00 00 	movl   $0x64,0x8(%esp)
 850f4ac:	00 
 850f4ad:	c7 44 24 04 16 be 28 	movl   $0x28be16,0x4(%esp)
 850f4b4:	00 
 850f4b5:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 850f4b8:	89 04 24             	mov    %eax,(%esp)
 850f4bb:	e8 70 49 00 00       	call   8513e30 <_ZN19MultiBoxLotteryInfo18LotteryDefaultAradC1Ejjj>
 850f4c0:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 850f4c3:	89 44 24 04          	mov    %eax,0x4(%esp)
 850f4c7:	c7 04 24 60 de 43 09 	movl   $0x943de60,(%esp)
 850f4ce:	e8 b3 84 00 00       	call   8517986 <_ZNSt6vectorIN19MultiBoxLotteryInfo18LotteryDefaultAradESaIS1_EE9push_backEOS1_>
 850f4d3:	c7 44 24 0c 10 27 00 	movl   $0x2710,0xc(%esp)
 850f4da:	00 
 850f4db:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 850f4e2:	00 
 850f4e3:	c7 44 24 04 50 d1 28 	movl   $0x28d150,0x4(%esp)
 850f4ea:	00 
 850f4eb:	8d 45 c0             	lea    -0x40(%ebp),%eax
 850f4ee:	89 04 24             	mov    %eax,(%esp)
 850f4f1:	e8 3a 49 00 00       	call   8513e30 <_ZN19MultiBoxLotteryInfo18LotteryDefaultAradC1Ejjj>
 850f4f6:	8d 45 c0             	lea    -0x40(%ebp),%eax
 850f4f9:	89 44 24 04          	mov    %eax,0x4(%esp)
 850f4fd:	c7 04 24 60 de 43 09 	movl   $0x943de60,(%esp)
 850f504:	e8 7d 84 00 00       	call   8517986 <_ZNSt6vectorIN19MultiBoxLotteryInfo18LotteryDefaultAradESaIS1_EE9push_backEOS1_>
 850f509:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 850f510:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 850f517:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 850f51e:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 850f525:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 850f52c:	c7 04 24 60 de 43 09 	movl   $0x943de60,(%esp)
 850f533:	e8 70 84 00 00       	call   85179a8 <_ZNKSt6vectorIN19MultiBoxLotteryInfo18LotteryDefaultAradESaIS1_EE4sizeEv>
 850f538:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 850f53b:	0f 97 c0             	seta   %al
 850f53e:	84 c0                	test   %al,%al
 850f540:	0f 84 e0 01 00 00    	je     850f726 <_ZN14CStackableItem30get_multibox_default_item_aradEPSt6vectorISt4pairI10Inven_ItembESaIS3_EE+0x39c>
 850f546:	c7 04 24 a0 86 01 00 	movl   $0x186a0,(%esp)
 850f54d:	e8 35 26 1a 00       	call   86b1b87 <_Z12get_rand_inti>
 850f552:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 850f555:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 850f55c:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 850f563:	8d 45 98             	lea    -0x68(%ebp),%eax
 850f566:	c7 44 24 04 60 de 43 	movl   $0x943de60,0x4(%esp)
 850f56d:	09 
 850f56e:	89 04 24             	mov    %eax,(%esp)
 850f571:	e8 54 84 00 00       	call   85179ca <_ZNSt6vectorIN19MultiBoxLotteryInfo18LotteryDefaultAradESaIS1_EE5beginEv>
 850f576:	83 ec 04             	sub    $0x4,%esp
 850f579:	eb 5f                	jmp    850f5da <_ZN14CStackableItem30get_multibox_default_item_aradEPSt6vectorISt4pairI10Inven_ItembESaIS3_EE+0x250>
 850f57b:	8d 45 98             	lea    -0x68(%ebp),%eax
 850f57e:	89 04 24             	mov    %eax,(%esp)
 850f581:	e8 ba 84 00 00       	call   8517a40 <_ZNK9__gnu_cxx17__normal_iteratorIPN19MultiBoxLotteryInfo18LotteryDefaultAradESt6vectorIS2_SaIS2_EEEdeEv>
 850f586:	8b 50 08             	mov    0x8(%eax),%edx
 850f589:	8b 45 d8             	mov    -0x28(%ebp),%eax
 850f58c:	8d 04 02             	lea    (%edx,%eax,1),%eax
 850f58f:	89 45 d8             	mov    %eax,-0x28(%ebp)
 850f592:	8b 45 d8             	mov    -0x28(%ebp),%eax
 850f595:	3b 45 d4             	cmp    -0x2c(%ebp),%eax
 850f598:	7c 23                	jl     850f5bd <_ZN14CStackableItem30get_multibox_default_item_aradEPSt6vectorISt4pairI10Inven_ItembESaIS3_EE+0x233>
 850f59a:	8d 45 98             	lea    -0x68(%ebp),%eax
 850f59d:	89 04 24             	mov    %eax,(%esp)
 850f5a0:	e8 9b 84 00 00       	call   8517a40 <_ZNK9__gnu_cxx17__normal_iteratorIPN19MultiBoxLotteryInfo18LotteryDefaultAradESt6vectorIS2_SaIS2_EEEdeEv>
 850f5a5:	8b 00                	mov    (%eax),%eax
 850f5a7:	89 45 dc             	mov    %eax,-0x24(%ebp)
 850f5aa:	8d 45 98             	lea    -0x68(%ebp),%eax
 850f5ad:	89 04 24             	mov    %eax,(%esp)
 850f5b0:	e8 8b 84 00 00       	call   8517a40 <_ZNK9__gnu_cxx17__normal_iteratorIPN19MultiBoxLotteryInfo18LotteryDefaultAradESt6vectorIS2_SaIS2_EEEdeEv>
 850f5b5:	8b 40 04             	mov    0x4(%eax),%eax
 850f5b8:	89 45 e0             	mov    %eax,-0x20(%ebp)
 850f5bb:	eb 4d                	jmp    850f60a <_ZN14CStackableItem30get_multibox_default_item_aradEPSt6vectorISt4pairI10Inven_ItembESaIS3_EE+0x280>
 850f5bd:	8d 45 d0             	lea    -0x30(%ebp),%eax
 850f5c0:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 850f5c7:	00 
 850f5c8:	8d 55 98             	lea    -0x68(%ebp),%edx
 850f5cb:	89 54 24 04          	mov    %edx,0x4(%esp)
 850f5cf:	89 04 24             	mov    %eax,(%esp)
 850f5d2:	e8 73 84 00 00       	call   8517a4a <_ZN9__gnu_cxx17__normal_iteratorIPN19MultiBoxLotteryInfo18LotteryDefaultAradESt6vectorIS2_SaIS2_EEEppEi>
 850f5d7:	83 ec 04             	sub    $0x4,%esp
 850f5da:	8d 45 cc             	lea    -0x34(%ebp),%eax
 850f5dd:	c7 44 24 04 60 de 43 	movl   $0x943de60,0x4(%esp)
 850f5e4:	09 
 850f5e5:	89 04 24             	mov    %eax,(%esp)
 850f5e8:	e8 01 84 00 00       	call   85179ee <_ZNSt6vectorIN19MultiBoxLotteryInfo18LotteryDefaultAradESaIS1_EE3endEv>
 850f5ed:	83 ec 04             	sub    $0x4,%esp
 850f5f0:	8d 45 cc             	lea    -0x34(%ebp),%eax
 850f5f3:	89 44 24 04          	mov    %eax,0x4(%esp)
 850f5f7:	8d 45 98             	lea    -0x68(%ebp),%eax
 850f5fa:	89 04 24             	mov    %eax,(%esp)
 850f5fd:	e8 12 84 00 00       	call   8517a14 <_ZN9__gnu_cxxneIPN19MultiBoxLotteryInfo18LotteryDefaultAradESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 850f602:	84 c0                	test   %al,%al
 850f604:	0f 85 71 ff ff ff    	jne    850f57b <_ZN14CStackableItem30get_multibox_default_item_aradEPSt6vectorISt4pairI10Inven_ItembESaIS3_EE+0x1f1>
 850f60a:	8d 85 5b ff ff ff    	lea    -0xa5(%ebp),%eax
 850f610:	89 04 24             	mov    %eax,(%esp)
 850f613:	e8 3c c2 bb ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 850f618:	8b 45 dc             	mov    -0x24(%ebp),%eax
 850f61b:	89 85 5d ff ff ff    	mov    %eax,-0xa3(%ebp)
 850f621:	e8 75 cb bb ff       	call   80cc19b <_Z14G_CDataManagerv>
 850f626:	8b 40 0c             	mov    0xc(%eax),%eax
 850f629:	8b 55 e0             	mov    -0x20(%ebp),%edx
 850f62c:	89 54 24 0c          	mov    %edx,0xc(%esp)
 850f630:	8d 95 5b ff ff ff    	lea    -0xa5(%ebp),%edx
 850f636:	89 54 24 08          	mov    %edx,0x8(%esp)
 850f63a:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 850f641:	00 
 850f642:	89 04 24             	mov    %eax,(%esp)
 850f645:	e8 6e 29 00 00       	call   8511fb8 <_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi>
 850f64a:	8d 85 1d ff ff ff    	lea    -0xe3(%ebp),%eax
 850f650:	89 04 24             	mov    %eax,(%esp)
 850f653:	e8 02 81 00 00       	call   851775a <_ZNSt4pairI10Inven_ItembEC1Ev>
 850f658:	8b 85 5b ff ff ff    	mov    -0xa5(%ebp),%eax
 850f65e:	89 85 1d ff ff ff    	mov    %eax,-0xe3(%ebp)
 850f664:	8b 85 5f ff ff ff    	mov    -0xa1(%ebp),%eax
 850f66a:	89 85 21 ff ff ff    	mov    %eax,-0xdf(%ebp)
 850f670:	8b 85 63 ff ff ff    	mov    -0x9d(%ebp),%eax
 850f676:	89 85 25 ff ff ff    	mov    %eax,-0xdb(%ebp)
 850f67c:	8b 85 67 ff ff ff    	mov    -0x99(%ebp),%eax
 850f682:	89 85 29 ff ff ff    	mov    %eax,-0xd7(%ebp)
 850f688:	8b 85 6b ff ff ff    	mov    -0x95(%ebp),%eax
 850f68e:	89 85 2d ff ff ff    	mov    %eax,-0xd3(%ebp)
 850f694:	8b 85 6f ff ff ff    	mov    -0x91(%ebp),%eax
 850f69a:	89 85 31 ff ff ff    	mov    %eax,-0xcf(%ebp)
 850f6a0:	8b 85 73 ff ff ff    	mov    -0x8d(%ebp),%eax
 850f6a6:	89 85 35 ff ff ff    	mov    %eax,-0xcb(%ebp)
 850f6ac:	8b 85 77 ff ff ff    	mov    -0x89(%ebp),%eax
 850f6b2:	89 85 39 ff ff ff    	mov    %eax,-0xc7(%ebp)
 850f6b8:	8b 85 7b ff ff ff    	mov    -0x85(%ebp),%eax
 850f6be:	89 85 3d ff ff ff    	mov    %eax,-0xc3(%ebp)
 850f6c4:	8b 85 7f ff ff ff    	mov    -0x81(%ebp),%eax
 850f6ca:	89 85 41 ff ff ff    	mov    %eax,-0xbf(%ebp)
 850f6d0:	8b 45 83             	mov    -0x7d(%ebp),%eax
 850f6d3:	89 85 45 ff ff ff    	mov    %eax,-0xbb(%ebp)
 850f6d9:	8b 45 87             	mov    -0x79(%ebp),%eax
 850f6dc:	89 85 49 ff ff ff    	mov    %eax,-0xb7(%ebp)
 850f6e2:	8b 45 8b             	mov    -0x75(%ebp),%eax
 850f6e5:	89 85 4d ff ff ff    	mov    %eax,-0xb3(%ebp)
 850f6eb:	8b 45 8f             	mov    -0x71(%ebp),%eax
 850f6ee:	89 85 51 ff ff ff    	mov    %eax,-0xaf(%ebp)
 850f6f4:	8b 45 93             	mov    -0x6d(%ebp),%eax
 850f6f7:	89 85 55 ff ff ff    	mov    %eax,-0xab(%ebp)
 850f6fd:	0f b6 45 97          	movzbl -0x69(%ebp),%eax
 850f701:	88 85 59 ff ff ff    	mov    %al,-0xa7(%ebp)
 850f707:	c6 85 5a ff ff ff 00 	movb   $0x0,-0xa6(%ebp)
 850f70e:	8d 85 1d ff ff ff    	lea    -0xe3(%ebp),%eax
 850f714:	89 44 24 04          	mov    %eax,0x4(%esp)
 850f718:	8b 45 08             	mov    0x8(%ebp),%eax
 850f71b:	89 04 24             	mov    %eax,(%esp)
 850f71e:	e8 51 80 00 00       	call   8517774 <_ZNSt6vectorISt4pairI10Inven_ItembESaIS2_EE9push_backERKS2_>
 850f723:	eb 01                	jmp    850f726 <_ZN14CStackableItem30get_multibox_default_item_aradEPSt6vectorISt4pairI10Inven_ItembESaIS3_EE+0x39c>
 850f725:	90                   	nop
 850f726:	8d 65 f4             	lea    -0xc(%ebp),%esp
 850f729:	83 c4 00             	add    $0x0,%esp
 850f72c:	5b                   	pop    %ebx
 850f72d:	5e                   	pop    %esi
 850f72e:	5f                   	pop    %edi
 850f72f:	5d                   	pop    %ebp
 850f730:	c3                   	ret
 850f731:	90                   	nop

```

```c
// CStackableItem::get_multibox_default_item_arad @ 0x850f38a

/* CStackableItem::get_multibox_default_item_arad(std::vector<std::pair<Inven_Item, bool>,
   std::allocator<std::pair<Inven_Item, bool> > >*) */

void CStackableItem::get_multibox_default_item_arad(vector *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 local_e7;
  undefined4 local_e3;
  undefined4 local_df;
  undefined4 local_db;
  undefined4 local_d7;
  undefined4 local_d3;
  undefined4 local_cf;
  undefined4 local_cb;
  undefined4 local_c7;
  undefined4 local_c3;
  undefined4 local_bf;
  undefined4 local_bb;
  undefined4 local_b7;
  undefined4 local_b3;
  undefined4 local_af;
  undefined1 local_ab;
  undefined1 local_aa;
  undefined2 local_a9;
  undefined2 uStack_a7;
  undefined2 uStack_a5;
  undefined2 uStack_a3;
  undefined4 local_a1;
  undefined4 local_9d;
  undefined4 local_99;
  undefined4 local_95;
  undefined4 local_91;
  undefined4 local_8d;
  undefined4 local_89;
  undefined4 local_85;
  undefined4 local_81;
  undefined4 local_7d;
  undefined4 local_79;
  undefined4 local_75;
  undefined4 local_71;
  undefined1 local_6d;
  __normal_iterator<MultiBoxLotteryInfo::LotteryDefaultArad*,std::vector<MultiBoxLotteryInfo::LotteryDefaultArad,std::allocator<MultiBoxLotteryInfo::LotteryDefaultArad>>>
  local_6c [4];
  LotteryDefaultArad local_68 [12];
  LotteryDefaultArad local_5c [12];
  LotteryDefaultArad local_50 [12];
  LotteryDefaultArad local_44 [12];
  __normal_iterator local_38 [4];
  __normal_iterator<MultiBoxLotteryInfo::LotteryDefaultArad*,std::vector<MultiBoxLotteryInfo::LotteryDefaultArad,std::allocator<MultiBoxLotteryInfo::LotteryDefaultArad>>>
  local_34 [4];
  int local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  uint local_20;
  
  if (param_1 != (vector *)0x0) {
    if (get_multibox_default_item_arad(std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>*)
        ::defaultItemListArad == '\0') {
      iVar3 = __cxa_guard_acquire(&get_multibox_default_item_arad(std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>*)
                                   ::defaultItemListArad);
      if (iVar3 != 0) {
                    /* try { // try from 0850f3cd to 0850f3d1 has its CatchHandler @ 0850f3fd */
        std::
        vector<MultiBoxLotteryInfo::LotteryDefaultArad,std::allocator<MultiBoxLotteryInfo::LotteryDefaultArad>>
        ::vector((vector<MultiBoxLotteryInfo::LotteryDefaultArad,std::allocator<MultiBoxLotteryInfo::LotteryDefaultArad>>
                  *)get_multibox_default_item_arad(std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>*)
                    ::defaultItemListArad);
        __cxa_guard_release(&get_multibox_default_item_arad(std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>*)
                             ::defaultItemListArad);
        __cxa_atexit(std::
                     vector<MultiBoxLotteryInfo::LotteryDefaultArad,std::allocator<MultiBoxLotteryInfo::LotteryDefaultArad>>
                     ::~vector,
                     get_multibox_default_item_arad(std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>*)
                     ::defaultItemListArad,&__dso_handle);
      }
    }
    cVar1 = std::
            vector<MultiBoxLotteryInfo::LotteryDefaultArad,std::allocator<MultiBoxLotteryInfo::LotteryDefaultArad>>
            ::empty();
    if (cVar1 != '\0') {
      MultiBoxLotteryInfo::LotteryDefaultArad::LotteryDefaultArad(local_68,0x28be16,10,50000);
      std::
      vector<MultiBoxLotteryInfo::LotteryDefaultArad,std::allocator<MultiBoxLotteryInfo::LotteryDefaultArad>>
      ::push_back((vector<MultiBoxLotteryInfo::LotteryDefaultArad,std::allocator<MultiBoxLotteryInfo::LotteryDefaultArad>>
                   *)get_multibox_default_item_arad(std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>*)
                     ::defaultItemListArad,local_68);
      MultiBoxLotteryInfo::LotteryDefaultArad::LotteryDefaultArad(local_5c,0x28be16,0x32,25000);
      std::
      vector<MultiBoxLotteryInfo::LotteryDefaultArad,std::allocator<MultiBoxLotteryInfo::LotteryDefaultArad>>
      ::push_back((vector<MultiBoxLotteryInfo::LotteryDefaultArad,std::allocator<MultiBoxLotteryInfo::LotteryDefaultArad>>
                   *)get_multibox_default_item_arad(std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>*)
                     ::defaultItemListArad,local_5c);
      MultiBoxLotteryInfo::LotteryDefaultArad::LotteryDefaultArad(local_50,0x28be16,100,5000);
      std::
      vector<MultiBoxLotteryInfo::LotteryDefaultArad,std::allocator<MultiBoxLotteryInfo::LotteryDefaultArad>>
      ::push_back((vector<MultiBoxLotteryInfo::LotteryDefaultArad,std::allocator<MultiBoxLotteryInfo::LotteryDefaultArad>>
                   *)get_multibox_default_item_arad(std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>*)
                     ::defaultItemListArad,local_50);
      MultiBoxLotteryInfo::LotteryDefaultArad::LotteryDefaultArad(local_44,0x28d150,1,10000);
      std::
      vector<MultiBoxLotteryInfo::LotteryDefaultArad,std::allocator<MultiBoxLotteryInfo::LotteryDefaultArad>>
      ::push_back((vector<MultiBoxLotteryInfo::LotteryDefaultArad,std::allocator<MultiBoxLotteryInfo::LotteryDefaultArad>>
                   *)get_multibox_default_item_arad(std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>*)
                     ::defaultItemListArad,local_44);
    }
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    uVar4 = std::
            vector<MultiBoxLotteryInfo::LotteryDefaultArad,std::allocator<MultiBoxLotteryInfo::LotteryDefaultArad>>
            ::size((vector<MultiBoxLotteryInfo::LotteryDefaultArad,std::allocator<MultiBoxLotteryInfo::LotteryDefaultArad>>
                    *)get_multibox_default_item_arad(std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>*)
                      ::defaultItemListArad);
    if (local_20 < uVar4) {
      local_30 = get_rand_int(100000);
      local_2c = 0;
      local_28 = 0;
      std::
      vector<MultiBoxLotteryInfo::LotteryDefaultArad,std::allocator<MultiBoxLotteryInfo::LotteryDefaultArad>>
      ::begin();
      while( true ) {
        std::
        vector<MultiBoxLotteryInfo::LotteryDefaultArad,std::allocator<MultiBoxLotteryInfo::LotteryDefaultArad>>
        ::end();
        bVar2 = __gnu_cxx::operator!=(local_6c,local_38);
        if (!bVar2) break;
        iVar3 = __gnu_cxx::
                __normal_iterator<MultiBoxLotteryInfo::LotteryDefaultArad*,std::vector<MultiBoxLotteryInfo::LotteryDefaultArad,std::allocator<MultiBoxLotteryInfo::LotteryDefaultArad>>>
                ::operator*(local_6c);
        local_2c = *(int *)(iVar3 + 8) + local_2c;
        if (local_30 <= local_2c) {
          puVar5 = (undefined4 *)
                   __gnu_cxx::
                   __normal_iterator<MultiBoxLotteryInfo::LotteryDefaultArad*,std::vector<MultiBoxLotteryInfo::LotteryDefaultArad,std::allocator<MultiBoxLotteryInfo::LotteryDefaultArad>>>
                   ::operator*(local_6c);
          local_28 = *puVar5;
          iVar3 = __gnu_cxx::
                  __normal_iterator<MultiBoxLotteryInfo::LotteryDefaultArad*,std::vector<MultiBoxLotteryInfo::LotteryDefaultArad,std::allocator<MultiBoxLotteryInfo::LotteryDefaultArad>>>
                  ::operator*(local_6c);
          local_24 = *(undefined4 *)(iVar3 + 4);
          break;
        }
        __gnu_cxx::
        __normal_iterator<MultiBoxLotteryInfo::LotteryDefaultArad*,std::vector<MultiBoxLotteryInfo::LotteryDefaultArad,std::allocator<MultiBoxLotteryInfo::LotteryDefaultArad>>>
        ::operator++(local_34,(int)local_6c);
      }
      Inven_Item::Inven_Item((Inven_Item *)&local_a9);
      uStack_a7 = (undefined2)local_28;
      uStack_a5 = (undefined2)((uint)local_28 >> 0x10);
      iVar3 = G_CDataManager();
      CItemList::create_item(*(CItemList **)(iVar3 + 0xc),2,&local_a9,local_24);
      std::pair<Inven_Item,bool>::pair((pair<Inven_Item,bool> *)&local_e7);
      local_e7 = CONCAT22(uStack_a7,local_a9);
      local_e3 = CONCAT22(uStack_a3,uStack_a5);
      local_df = local_a1;
      local_db = local_9d;
      local_d7 = local_99;
      local_d3 = local_95;
      local_cf = local_91;
      local_cb = local_8d;
      local_c7 = local_89;
      local_c3 = local_85;
      local_bf = local_81;
      local_bb = local_7d;
      local_b7 = local_79;
      local_b3 = local_75;
      local_af = local_71;
      local_ab = local_6d;
      local_aa = 0;
      std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>::push_back
                ((vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>> *)
                 param_1,(pair *)&local_e7);
    }
  }
  return;
}

```

---

## get_multibox_lottery_item

```asm
// === 0850edda CStackableItem::get_multibox_lottery_item  [0x0850edda-0x850f135] ===
 850edda:	55                   	push   %ebp
 850eddb:	89 e5                	mov    %esp,%ebp
 850eddd:	56                   	push   %esi
 850edde:	53                   	push   %ebx
 850eddf:	81 ec f0 00 00 00    	sub    $0xf0,%esp
 850ede5:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 850ede9:	0f 84 3b 03 00 00    	je     850f12a <_ZN14CStackableItem25get_multibox_lottery_itemEPSt6vectorISt4pairI10Inven_ItembESaIS3_EE+0x350>
 850edef:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 850edf6:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 850edfd:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 850ee04:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 850ee0b:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
 850ee0f:	8b 45 08             	mov    0x8(%ebp),%eax
 850ee12:	8d 90 f4 01 00 00    	lea    0x1f4(%eax),%edx
 850ee18:	8d 45 c8             	lea    -0x38(%ebp),%eax
 850ee1b:	89 54 24 04          	mov    %edx,0x4(%esp)
 850ee1f:	89 04 24             	mov    %eax,(%esp)
 850ee22:	e8 b3 88 00 00       	call   85176da <_ZNSt6vectorIN19MultiBoxLotteryInfo11LotteryUnitESaIS1_EE5beginEv>
 850ee27:	83 ec 04             	sub    $0x4,%esp
 850ee2a:	e9 c4 02 00 00       	jmp    850f0f3 <_ZN14CStackableItem25get_multibox_lottery_itemEPSt6vectorISt4pairI10Inven_ItembESaIS3_EE+0x319>
 850ee2f:	8d 45 c8             	lea    -0x38(%ebp),%eax
 850ee32:	89 04 24             	mov    %eax,(%esp)
 850ee35:	e8 16 89 00 00       	call   8517750 <_ZNK9__gnu_cxx17__normal_iteratorIPN19MultiBoxLotteryInfo11LotteryUnitESt6vectorIS2_SaIS2_EEEdeEv>
 850ee3a:	89 44 24 04          	mov    %eax,0x4(%esp)
 850ee3e:	8d 45 98             	lea    -0x68(%ebp),%eax
 850ee41:	89 04 24             	mov    %eax,(%esp)
 850ee44:	e8 5f 63 00 00       	call   85151a8 <_ZN19MultiBoxLotteryInfo11LotteryUnitC1ERKS0_>
 850ee49:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 850ee50:	e9 48 02 00 00       	jmp    850f09d <_ZN14CStackableItem25get_multibox_lottery_itemEPSt6vectorISt4pairI10Inven_ItembESaIS3_EE+0x2c3>
 850ee55:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 850ee58:	8d 55 98             	lea    -0x68(%ebp),%edx
 850ee5b:	83 c2 10             	add    $0x10,%edx
 850ee5e:	89 54 24 04          	mov    %edx,0x4(%esp)
 850ee62:	89 04 24             	mov    %eax,(%esp)
 850ee65:	e8 48 e7 bc ff       	call   80dd5b2 <_ZNSt6vectorISt4pairIiiESaIS1_EE5beginEv>
 850ee6a:	83 ec 04             	sub    $0x4,%esp
 850ee6d:	8d 45 c0             	lea    -0x40(%ebp),%eax
 850ee70:	8d 55 98             	lea    -0x68(%ebp),%edx
 850ee73:	83 c2 1c             	add    $0x1c,%edx
 850ee76:	89 54 24 04          	mov    %edx,0x4(%esp)
 850ee7a:	89 04 24             	mov    %eax,(%esp)
 850ee7d:	e8 30 e7 bc ff       	call   80dd5b2 <_ZNSt6vectorISt4pairIiiESaIS1_EE5beginEv>
 850ee82:	83 ec 04             	sub    $0x4,%esp
 850ee85:	c7 04 24 40 42 0f 00 	movl   $0xf4240,(%esp)
 850ee8c:	e8 f6 2c 1a 00       	call   86b1b87 <_Z12get_rand_inti>
 850ee91:	89 45 e0             	mov    %eax,-0x20(%ebp)
 850ee94:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 850ee9b:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 850eea2:	e9 8b 00 00 00       	jmp    850ef32 <_ZN14CStackableItem25get_multibox_lottery_itemEPSt6vectorISt4pairI10Inven_ItembESaIS3_EE+0x158>
 850eea7:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 850eeaa:	89 04 24             	mov    %eax,(%esp)
 850eead:	e8 4a e7 bc ff       	call   80dd5fc <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIiiESt6vectorIS2_SaIS2_EEEdeEv>
 850eeb2:	8b 40 04             	mov    0x4(%eax),%eax
 850eeb5:	01 45 e4             	add    %eax,-0x1c(%ebp)
 850eeb8:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 850eebb:	3b 45 e0             	cmp    -0x20(%ebp),%eax
 850eebe:	7e 38                	jle    850eef8 <_ZN14CStackableItem25get_multibox_lottery_itemEPSt6vectorISt4pairI10Inven_ItembESaIS3_EE+0x11e>
 850eec0:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 850eec3:	89 04 24             	mov    %eax,(%esp)
 850eec6:	e8 31 e7 bc ff       	call   80dd5fc <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIiiESt6vectorIS2_SaIS2_EEEdeEv>
 850eecb:	8b 00                	mov    (%eax),%eax
 850eecd:	89 45 e8             	mov    %eax,-0x18(%ebp)
 850eed0:	8d 45 c0             	lea    -0x40(%ebp),%eax
 850eed3:	89 04 24             	mov    %eax,(%esp)
 850eed6:	e8 21 e7 bc ff       	call   80dd5fc <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIiiESt6vectorIS2_SaIS2_EEEdeEv>
 850eedb:	8b 00                	mov    (%eax),%eax
 850eedd:	89 45 ec             	mov    %eax,-0x14(%ebp)
 850eee0:	8d 45 c0             	lea    -0x40(%ebp),%eax
 850eee3:	89 04 24             	mov    %eax,(%esp)
 850eee6:	e8 11 e7 bc ff       	call   80dd5fc <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIiiESt6vectorIS2_SaIS2_EEEdeEv>
 850eeeb:	8b 40 04             	mov    0x4(%eax),%eax
 850eeee:	85 c0                	test   %eax,%eax
 850eef0:	0f 95 c0             	setne  %al
 850eef3:	88 45 f3             	mov    %al,-0xd(%ebp)
 850eef6:	eb 6c                	jmp    850ef64 <_ZN14CStackableItem25get_multibox_lottery_itemEPSt6vectorISt4pairI10Inven_ItembESaIS3_EE+0x18a>
 850eef8:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 850eefb:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 850ef02:	00 
 850ef03:	8d 55 c4             	lea    -0x3c(%ebp),%edx
 850ef06:	89 54 24 04          	mov    %edx,0x4(%esp)
 850ef0a:	89 04 24             	mov    %eax,(%esp)
 850ef0d:	e8 8a 9e e7 ff       	call   8388d9c <_ZN9__gnu_cxx17__normal_iteratorIPSt4pairIiiESt6vectorIS2_SaIS2_EEEppEi>
 850ef12:	83 ec 04             	sub    $0x4,%esp
 850ef15:	8d 45 d8             	lea    -0x28(%ebp),%eax
 850ef18:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 850ef1f:	00 
 850ef20:	8d 55 c0             	lea    -0x40(%ebp),%edx
 850ef23:	89 54 24 04          	mov    %edx,0x4(%esp)
 850ef27:	89 04 24             	mov    %eax,(%esp)
 850ef2a:	e8 6d 9e e7 ff       	call   8388d9c <_ZN9__gnu_cxx17__normal_iteratorIPSt4pairIiiESt6vectorIS2_SaIS2_EEEppEi>
 850ef2f:	83 ec 04             	sub    $0x4,%esp
 850ef32:	8d 45 d0             	lea    -0x30(%ebp),%eax
 850ef35:	8d 55 98             	lea    -0x68(%ebp),%edx
 850ef38:	83 c2 10             	add    $0x10,%edx
 850ef3b:	89 54 24 04          	mov    %edx,0x4(%esp)
 850ef3f:	89 04 24             	mov    %eax,(%esp)
 850ef42:	e8 8f e6 bc ff       	call   80dd5d6 <_ZNSt6vectorISt4pairIiiESaIS1_EE3endEv>
 850ef47:	83 ec 04             	sub    $0x4,%esp
 850ef4a:	8d 45 d0             	lea    -0x30(%ebp),%eax
 850ef4d:	89 44 24 04          	mov    %eax,0x4(%esp)
 850ef51:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 850ef54:	89 04 24             	mov    %eax,(%esp)
 850ef57:	e8 82 22 c0 ff       	call   81111de <_ZN9__gnu_cxxneIPSt4pairIiiESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 850ef5c:	84 c0                	test   %al,%al
 850ef5e:	0f 85 43 ff ff ff    	jne    850eea7 <_ZN14CStackableItem25get_multibox_lottery_itemEPSt6vectorISt4pairI10Inven_ItembESaIS3_EE+0xcd>
 850ef64:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 850ef68:	75 13                	jne    850ef7d <_ZN14CStackableItem25get_multibox_lottery_itemEPSt6vectorISt4pairI10Inven_ItembESaIS3_EE+0x1a3>
 850ef6a:	8b 45 9c             	mov    -0x64(%ebp),%eax
 850ef6d:	89 45 e8             	mov    %eax,-0x18(%ebp)
 850ef70:	8b 45 a0             	mov    -0x60(%ebp),%eax
 850ef73:	89 45 ec             	mov    %eax,-0x14(%ebp)
 850ef76:	0f b6 45 a4          	movzbl -0x5c(%ebp),%eax
 850ef7a:	88 45 f3             	mov    %al,-0xd(%ebp)
 850ef7d:	8d 85 5b ff ff ff    	lea    -0xa5(%ebp),%eax
 850ef83:	89 04 24             	mov    %eax,(%esp)
 850ef86:	e8 c9 c8 bb ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 850ef8b:	8b 45 e8             	mov    -0x18(%ebp),%eax
 850ef8e:	89 85 5d ff ff ff    	mov    %eax,-0xa3(%ebp)
 850ef94:	e8 02 d2 bb ff       	call   80cc19b <_Z14G_CDataManagerv>
 850ef99:	8b 40 0c             	mov    0xc(%eax),%eax
 850ef9c:	8b 55 ec             	mov    -0x14(%ebp),%edx
 850ef9f:	89 54 24 0c          	mov    %edx,0xc(%esp)
 850efa3:	8d 95 5b ff ff ff    	lea    -0xa5(%ebp),%edx
 850efa9:	89 54 24 08          	mov    %edx,0x8(%esp)
 850efad:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 850efb4:	00 
 850efb5:	89 04 24             	mov    %eax,(%esp)
 850efb8:	e8 fb 2f 00 00       	call   8511fb8 <_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi>
 850efbd:	8d 85 1d ff ff ff    	lea    -0xe3(%ebp),%eax
 850efc3:	89 04 24             	mov    %eax,(%esp)
 850efc6:	e8 8f 87 00 00       	call   851775a <_ZNSt4pairI10Inven_ItembEC1Ev>
 850efcb:	8b 85 5b ff ff ff    	mov    -0xa5(%ebp),%eax
 850efd1:	89 85 1d ff ff ff    	mov    %eax,-0xe3(%ebp)
 850efd7:	8b 85 5f ff ff ff    	mov    -0xa1(%ebp),%eax
 850efdd:	89 85 21 ff ff ff    	mov    %eax,-0xdf(%ebp)
 850efe3:	8b 85 63 ff ff ff    	mov    -0x9d(%ebp),%eax
 850efe9:	89 85 25 ff ff ff    	mov    %eax,-0xdb(%ebp)
 850efef:	8b 85 67 ff ff ff    	mov    -0x99(%ebp),%eax
 850eff5:	89 85 29 ff ff ff    	mov    %eax,-0xd7(%ebp)
 850effb:	8b 85 6b ff ff ff    	mov    -0x95(%ebp),%eax
 850f001:	89 85 2d ff ff ff    	mov    %eax,-0xd3(%ebp)
 850f007:	8b 85 6f ff ff ff    	mov    -0x91(%ebp),%eax
 850f00d:	89 85 31 ff ff ff    	mov    %eax,-0xcf(%ebp)
 850f013:	8b 85 73 ff ff ff    	mov    -0x8d(%ebp),%eax
 850f019:	89 85 35 ff ff ff    	mov    %eax,-0xcb(%ebp)
 850f01f:	8b 85 77 ff ff ff    	mov    -0x89(%ebp),%eax
 850f025:	89 85 39 ff ff ff    	mov    %eax,-0xc7(%ebp)
 850f02b:	8b 85 7b ff ff ff    	mov    -0x85(%ebp),%eax
 850f031:	89 85 3d ff ff ff    	mov    %eax,-0xc3(%ebp)
 850f037:	8b 85 7f ff ff ff    	mov    -0x81(%ebp),%eax
 850f03d:	89 85 41 ff ff ff    	mov    %eax,-0xbf(%ebp)
 850f043:	8b 45 83             	mov    -0x7d(%ebp),%eax
 850f046:	89 85 45 ff ff ff    	mov    %eax,-0xbb(%ebp)
 850f04c:	8b 45 87             	mov    -0x79(%ebp),%eax
 850f04f:	89 85 49 ff ff ff    	mov    %eax,-0xb7(%ebp)
 850f055:	8b 45 8b             	mov    -0x75(%ebp),%eax
 850f058:	89 85 4d ff ff ff    	mov    %eax,-0xb3(%ebp)
 850f05e:	8b 45 8f             	mov    -0x71(%ebp),%eax
 850f061:	89 85 51 ff ff ff    	mov    %eax,-0xaf(%ebp)
 850f067:	8b 45 93             	mov    -0x6d(%ebp),%eax
 850f06a:	89 85 55 ff ff ff    	mov    %eax,-0xab(%ebp)
 850f070:	0f b6 45 97          	movzbl -0x69(%ebp),%eax
 850f074:	88 85 59 ff ff ff    	mov    %al,-0xa7(%ebp)
 850f07a:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 850f07e:	88 85 5a ff ff ff    	mov    %al,-0xa6(%ebp)
 850f084:	8d 85 1d ff ff ff    	lea    -0xe3(%ebp),%eax
 850f08a:	89 44 24 04          	mov    %eax,0x4(%esp)
 850f08e:	8b 45 0c             	mov    0xc(%ebp),%eax
 850f091:	89 04 24             	mov    %eax,(%esp)
 850f094:	e8 db 86 00 00       	call   8517774 <_ZNSt6vectorISt4pairI10Inven_ItembESaIS2_EE9push_backERKS2_>
 850f099:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 850f09d:	8b 45 98             	mov    -0x68(%ebp),%eax
 850f0a0:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 850f0a3:	0f 9f c0             	setg   %al
 850f0a6:	84 c0                	test   %al,%al
 850f0a8:	0f 85 a7 fd ff ff    	jne    850ee55 <_ZN14CStackableItem25get_multibox_lottery_itemEPSt6vectorISt4pairI10Inven_ItembESaIS3_EE+0x7b>
 850f0ae:	8d 45 dc             	lea    -0x24(%ebp),%eax
 850f0b1:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 850f0b8:	00 
 850f0b9:	8d 55 c8             	lea    -0x38(%ebp),%edx
 850f0bc:	89 54 24 04          	mov    %edx,0x4(%esp)
 850f0c0:	89 04 24             	mov    %eax,(%esp)
 850f0c3:	e8 20 87 00 00       	call   85177e8 <_ZN9__gnu_cxx17__normal_iteratorIPN19MultiBoxLotteryInfo11LotteryUnitESt6vectorIS2_SaIS2_EEEppEi>
 850f0c8:	83 ec 04             	sub    $0x4,%esp
 850f0cb:	8d 45 98             	lea    -0x68(%ebp),%eax
 850f0ce:	89 04 24             	mov    %eax,(%esp)
 850f0d1:	e8 60 61 00 00       	call   8515236 <_ZN19MultiBoxLotteryInfo11LotteryUnitD1Ev>
 850f0d6:	eb 1b                	jmp    850f0f3 <_ZN14CStackableItem25get_multibox_lottery_itemEPSt6vectorISt4pairI10Inven_ItembESaIS3_EE+0x319>
 850f0d8:	89 d3                	mov    %edx,%ebx
 850f0da:	89 c6                	mov    %eax,%esi
 850f0dc:	8d 45 98             	lea    -0x68(%ebp),%eax
 850f0df:	89 04 24             	mov    %eax,(%esp)
 850f0e2:	e8 4f 61 00 00       	call   8515236 <_ZN19MultiBoxLotteryInfo11LotteryUnitD1Ev>
 850f0e7:	89 f0                	mov    %esi,%eax
 850f0e9:	89 da                	mov    %ebx,%edx
 850f0eb:	89 04 24             	mov    %eax,(%esp)
 850f0ee:	e8 5d 46 5d 00       	call   8ae3750 <_Unwind_Resume>
 850f0f3:	8b 45 08             	mov    0x8(%ebp),%eax
 850f0f6:	8d 90 f4 01 00 00    	lea    0x1f4(%eax),%edx
 850f0fc:	8d 45 cc             	lea    -0x34(%ebp),%eax
 850f0ff:	89 54 24 04          	mov    %edx,0x4(%esp)
 850f103:	89 04 24             	mov    %eax,(%esp)
 850f106:	e8 f3 85 00 00       	call   85176fe <_ZNSt6vectorIN19MultiBoxLotteryInfo11LotteryUnitESaIS1_EE3endEv>
 850f10b:	83 ec 04             	sub    $0x4,%esp
 850f10e:	8d 45 cc             	lea    -0x34(%ebp),%eax
 850f111:	89 44 24 04          	mov    %eax,0x4(%esp)
 850f115:	8d 45 c8             	lea    -0x38(%ebp),%eax
 850f118:	89 04 24             	mov    %eax,(%esp)
 850f11b:	e8 04 86 00 00       	call   8517724 <_ZN9__gnu_cxxneIPN19MultiBoxLotteryInfo11LotteryUnitESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 850f120:	84 c0                	test   %al,%al
 850f122:	0f 85 07 fd ff ff    	jne    850ee2f <_ZN14CStackableItem25get_multibox_lottery_itemEPSt6vectorISt4pairI10Inven_ItembESaIS3_EE+0x55>
 850f128:	eb 01                	jmp    850f12b <_ZN14CStackableItem25get_multibox_lottery_itemEPSt6vectorISt4pairI10Inven_ItembESaIS3_EE+0x351>
 850f12a:	90                   	nop
 850f12b:	8d 65 f8             	lea    -0x8(%ebp),%esp
 850f12e:	83 c4 00             	add    $0x0,%esp
 850f131:	5b                   	pop    %ebx
 850f132:	5e                   	pop    %esi
 850f133:	5d                   	pop    %ebp
 850f134:	c3                   	ret
 850f135:	90                   	nop

```

```c
// CStackableItem::get_multibox_lottery_item @ 0x850edda

/* CStackableItem::get_multibox_lottery_item(std::vector<std::pair<Inven_Item, bool>,
   std::allocator<std::pair<Inven_Item, bool> > >*) */

void __thiscall CStackableItem::get_multibox_lottery_item(CStackableItem *this,vector *param_1)

{
  bool bVar1;
  LotteryUnit *pLVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 local_e7;
  undefined4 local_e3;
  undefined4 local_df;
  undefined4 local_db;
  undefined4 local_d7;
  undefined4 local_d3;
  undefined4 local_cf;
  undefined4 local_cb;
  undefined4 local_c7;
  undefined4 local_c3;
  undefined4 local_bf;
  undefined4 local_bb;
  undefined4 local_b7;
  undefined4 local_b3;
  undefined4 local_af;
  undefined1 local_ab;
  undefined1 local_aa;
  undefined2 local_a9;
  undefined2 uStack_a7;
  undefined2 uStack_a5;
  undefined2 uStack_a3;
  undefined4 local_a1;
  undefined4 local_9d;
  undefined4 local_99;
  undefined4 local_95;
  undefined4 local_91;
  undefined4 local_8d;
  undefined4 local_89;
  undefined4 local_85;
  undefined4 local_81;
  undefined4 local_7d;
  undefined4 local_79;
  undefined4 local_75;
  undefined4 local_71;
  undefined1 local_6d;
  int local_6c;
  int local_68;
  undefined4 local_64;
  undefined1 local_60;
  __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_44 [4];
  __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_40 [4];
  __normal_iterator<MultiBoxLotteryInfo::LotteryUnit*,std::vector<MultiBoxLotteryInfo::LotteryUnit,std::allocator<MultiBoxLotteryInfo::LotteryUnit>>>
  local_3c [4];
  __normal_iterator local_38 [4];
  __normal_iterator local_34 [4];
  __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_30 [4];
  __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_2c [4];
  __normal_iterator<MultiBoxLotteryInfo::LotteryUnit*,std::vector<MultiBoxLotteryInfo::LotteryUnit,std::allocator<MultiBoxLotteryInfo::LotteryUnit>>>
  local_28 [4];
  int local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  undefined1 local_11;
  int local_10;
  
  if (param_1 != (vector *)0x0) {
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    local_11 = 0;
    std::vector<MultiBoxLotteryInfo::LotteryUnit,std::allocator<MultiBoxLotteryInfo::LotteryUnit>>::
    begin();
    while( true ) {
      std::vector<MultiBoxLotteryInfo::LotteryUnit,std::allocator<MultiBoxLotteryInfo::LotteryUnit>>
      ::end();
      bVar1 = __gnu_cxx::operator!=(local_3c,local_38);
      if (!bVar1) break;
      pLVar2 = (LotteryUnit *)
               __gnu_cxx::
               __normal_iterator<MultiBoxLotteryInfo::LotteryUnit*,std::vector<MultiBoxLotteryInfo::LotteryUnit,std::allocator<MultiBoxLotteryInfo::LotteryUnit>>>
               ::operator*(local_3c);
      MultiBoxLotteryInfo::LotteryUnit::LotteryUnit((LotteryUnit *)&local_6c,pLVar2);
      for (local_10 = 0; local_10 < local_6c; local_10 = local_10 + 1) {
                    /* try { // try from 0850ee65 to 0850f0c7 has its CatchHandler @ 0850f0d8 */
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
        local_24 = get_rand_int(1000000);
        local_20 = 0;
        local_1c = 0;
        while( true ) {
          std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
          bVar1 = __gnu_cxx::operator!=(local_40,local_34);
          if (!bVar1) break;
          iVar5 = __gnu_cxx::
                  __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                  ::operator*(local_40);
          local_20 = local_20 + *(int *)(iVar5 + 4);
          if (local_24 < local_20) {
            piVar3 = (int *)__gnu_cxx::
                            __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                            ::operator*(local_40);
            local_1c = *piVar3;
            puVar4 = (undefined4 *)
                     __gnu_cxx::
                     __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                     ::operator*(local_44);
            local_18 = *puVar4;
            iVar5 = __gnu_cxx::
                    __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                    ::operator*(local_44);
            local_11 = *(int *)(iVar5 + 4) != 0;
            break;
          }
          __gnu_cxx::
          __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
          ::operator++(local_30,(int)local_40);
          __gnu_cxx::
          __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
          ::operator++(local_2c,(int)local_44);
        }
        if (local_1c == 0) {
          local_1c = local_68;
          local_18 = local_64;
          local_11 = local_60;
        }
        Inven_Item::Inven_Item((Inven_Item *)&local_a9);
        uStack_a7 = (undefined2)local_1c;
        uStack_a5 = (undefined2)((uint)local_1c >> 0x10);
        iVar5 = G_CDataManager();
        CItemList::create_item(*(CItemList **)(iVar5 + 0xc),2,&local_a9,local_18);
        std::pair<Inven_Item,bool>::pair((pair<Inven_Item,bool> *)&local_e7);
        local_e7 = CONCAT22(uStack_a7,local_a9);
        local_e3 = CONCAT22(uStack_a3,uStack_a5);
        local_df = local_a1;
        local_db = local_9d;
        local_d7 = local_99;
        local_d3 = local_95;
        local_cf = local_91;
        local_cb = local_8d;
        local_c7 = local_89;
        local_c3 = local_85;
        local_bf = local_81;
        local_bb = local_7d;
        local_b7 = local_79;
        local_b3 = local_75;
        local_af = local_71;
        local_ab = local_6d;
        local_aa = local_11;
        std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>::
        push_back((vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>> *)
                  param_1,(pair *)&local_e7);
      }
      __gnu_cxx::
      __normal_iterator<MultiBoxLotteryInfo::LotteryUnit*,std::vector<MultiBoxLotteryInfo::LotteryUnit,std::allocator<MultiBoxLotteryInfo::LotteryUnit>>>
      ::operator++(local_28,(int)local_3c);
      MultiBoxLotteryInfo::LotteryUnit::~LotteryUnit((LotteryUnit *)&local_6c);
    }
  }
  return;
}

```

---

## is_included_material_for_limit_cube

```asm
// === 0850fa8a CStackableItem::is_included_material_for_limit_cube  [0x0850fa8a-0x850fb31] ===
 850fa8a:	55                   	push   %ebp
 850fa8b:	89 e5                	mov    %esp,%ebp
 850fa8d:	83 ec 28             	sub    $0x28,%esp
 850fa90:	8b 45 08             	mov    0x8(%ebp),%eax
 850fa93:	8d 90 90 02 00 00    	lea    0x290(%eax),%edx
 850fa99:	8d 45 ec             	lea    -0x14(%ebp),%eax
 850fa9c:	89 54 24 04          	mov    %edx,0x4(%esp)
 850faa0:	89 04 24             	mov    %eax,(%esp)
 850faa3:	e8 0a db bc ff       	call   80dd5b2 <_ZNSt6vectorISt4pairIiiESaIS1_EE5beginEv>
 850faa8:	83 ec 04             	sub    $0x4,%esp
 850faab:	8d 45 ec             	lea    -0x14(%ebp),%eax
 850faae:	89 44 24 04          	mov    %eax,0x4(%esp)
 850fab2:	8d 45 e8             	lea    -0x18(%ebp),%eax
 850fab5:	89 04 24             	mov    %eax,(%esp)
 850fab8:	e8 65 7e e7 ff       	call   8387922 <_ZN9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEC1IPS2_EERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameISB_SA_E7__valueES7_E6__typeEEE>
 850fabd:	eb 3b                	jmp    850fafa <_ZN14CStackableItem35is_included_material_for_limit_cubeEj+0x70>
 850fabf:	8d 45 e8             	lea    -0x18(%ebp),%eax
 850fac2:	89 04 24             	mov    %eax,(%esp)
 850fac5:	e8 48 3e c8 ff       	call   8193912 <_ZNK9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEptEv>
 850faca:	8b 00                	mov    (%eax),%eax
 850facc:	3b 45 0c             	cmp    0xc(%ebp),%eax
 850facf:	0f 94 c0             	sete   %al
 850fad2:	84 c0                	test   %al,%al
 850fad4:	74 07                	je     850fadd <_ZN14CStackableItem35is_included_material_for_limit_cubeEj+0x53>
 850fad6:	b8 01 00 00 00       	mov    $0x1,%eax
 850fadb:	eb 53                	jmp    850fb30 <_ZN14CStackableItem35is_included_material_for_limit_cubeEj+0xa6>
 850fadd:	8d 45 f4             	lea    -0xc(%ebp),%eax
 850fae0:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 850fae7:	00 
 850fae8:	8d 55 e8             	lea    -0x18(%ebp),%edx
 850faeb:	89 54 24 04          	mov    %edx,0x4(%esp)
 850faef:	89 04 24             	mov    %eax,(%esp)
 850faf2:	e8 7b 39 c8 ff       	call   8193472 <_ZN9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEppEi>
 850faf7:	83 ec 04             	sub    $0x4,%esp
 850fafa:	8b 45 08             	mov    0x8(%ebp),%eax
 850fafd:	8d 90 90 02 00 00    	lea    0x290(%eax),%edx
 850fb03:	8d 45 f0             	lea    -0x10(%ebp),%eax
 850fb06:	89 54 24 04          	mov    %edx,0x4(%esp)
 850fb0a:	89 04 24             	mov    %eax,(%esp)
 850fb0d:	e8 c4 da bc ff       	call   80dd5d6 <_ZNSt6vectorISt4pairIiiESaIS1_EE3endEv>
 850fb12:	83 ec 04             	sub    $0x4,%esp
 850fb15:	8d 45 f0             	lea    -0x10(%ebp),%eax
 850fb18:	89 44 24 04          	mov    %eax,0x4(%esp)
 850fb1c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 850fb1f:	89 04 24             	mov    %eax,(%esp)
 850fb22:	e8 15 7e e7 ff       	call   838793c <_ZN9__gnu_cxxneIPKSt4pairIiiEPS2_St6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T1_EERKNS9_IT0_SB_EE>
 850fb27:	84 c0                	test   %al,%al
 850fb29:	75 94                	jne    850fabf <_ZN14CStackableItem35is_included_material_for_limit_cubeEj+0x35>
 850fb2b:	b8 00 00 00 00       	mov    $0x0,%eax
 850fb30:	c9                   	leave
 850fb31:	c3                   	ret

```

```c
// CStackableItem::is_included_material_for_limit_cube @ 0x850fa8a

/* CStackableItem::is_included_material_for_limit_cube(unsigned int) */

undefined4 __thiscall
CStackableItem::is_included_material_for_limit_cube(CStackableItem *this,uint param_1)

{
  bool bVar1;
  uint *puVar2;
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_1c [4];
  __normal_iterator local_18 [4];
  __normal_iterator local_14 [4];
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_10 [12];
  
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
  __gnu_cxx::
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  ::__normal_iterator<std::pair<int,int>*>(local_1c,local_18);
  while( true ) {
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
    bVar1 = __gnu_cxx::operator!=(local_1c,local_14);
    if (!bVar1) {
      return 0;
    }
    puVar2 = (uint *)__gnu_cxx::
                     __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                     ::operator->(local_1c);
    if (*puVar2 == param_1) break;
    __gnu_cxx::
    __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
    ::operator++(local_10,(int)local_1c);
  }
  return 1;
}

```

---

## make_item

```asm
// === 0850f8b8 CStackableItem::make_item  [0x0850f8b8-0x850fa13] ===
 850f8b8:	55                   	push   %ebp
 850f8b9:	89 e5                	mov    %esp,%ebp
 850f8bb:	53                   	push   %ebx
 850f8bc:	83 ec 24             	sub    $0x24,%esp
 850f8bf:	8b 45 08             	mov    0x8(%ebp),%eax
 850f8c2:	8b 80 b0 02 00 00    	mov    0x2b0(%eax),%eax
 850f8c8:	83 f8 14             	cmp    $0x14,%eax
 850f8cb:	77 36                	ja     850f903 <_ZNK14CStackableItem9make_itemER10Inven_Item+0x4b>
 850f8cd:	8b 04 85 a0 5a c9 08 	mov    0x8c95aa0(,%eax,4),%eax
 850f8d4:	ff e0                	jmp    *%eax
 850f8d6:	8b 45 0c             	mov    0xc(%ebp),%eax
 850f8d9:	c6 40 01 04          	movb   $0x4,0x1(%eax)
 850f8dd:	eb 2b                	jmp    850f90a <_ZNK14CStackableItem9make_itemER10Inven_Item+0x52>
 850f8df:	8b 45 0c             	mov    0xc(%ebp),%eax
 850f8e2:	c6 40 01 03          	movb   $0x3,0x1(%eax)
 850f8e6:	eb 22                	jmp    850f90a <_ZNK14CStackableItem9make_itemER10Inven_Item+0x52>
 850f8e8:	8b 45 0c             	mov    0xc(%ebp),%eax
 850f8eb:	c6 40 01 07          	movb   $0x7,0x1(%eax)
 850f8ef:	eb 19                	jmp    850f90a <_ZNK14CStackableItem9make_itemER10Inven_Item+0x52>
 850f8f1:	8b 45 0c             	mov    0xc(%ebp),%eax
 850f8f4:	c6 40 01 09          	movb   $0x9,0x1(%eax)
 850f8f8:	eb 10                	jmp    850f90a <_ZNK14CStackableItem9make_itemER10Inven_Item+0x52>
 850f8fa:	8b 45 0c             	mov    0xc(%ebp),%eax
 850f8fd:	c6 40 01 0a          	movb   $0xa,0x1(%eax)
 850f901:	eb 07                	jmp    850f90a <_ZNK14CStackableItem9make_itemER10Inven_Item+0x52>
 850f903:	8b 45 0c             	mov    0xc(%ebp),%eax
 850f906:	c6 40 01 02          	movb   $0x2,0x1(%eax)
 850f90a:	8b 45 0c             	mov    0xc(%ebp),%eax
 850f90d:	66 c7 40 0b 00 00    	movw   $0x0,0xb(%eax)
 850f913:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 850f91a:	8b 45 08             	mov    0x8(%ebp),%eax
 850f91d:	89 04 24             	mov    %eax,(%esp)
 850f920:	e8 3b 13 c0 ff       	call   8110c60 <_ZNK5CItem15getUsablePeriodEv>
 850f925:	85 c0                	test   %eax,%eax
 850f927:	0f 95 c0             	setne  %al
 850f92a:	84 c0                	test   %al,%al
 850f92c:	74 27                	je     850f955 <_ZNK14CStackableItem9make_itemER10Inven_Item+0x9d>
 850f92e:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 850f935:	e8 64 c3 bb ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 850f93a:	89 c3                	mov    %eax,%ebx
 850f93c:	8b 45 08             	mov    0x8(%ebp),%eax
 850f93f:	89 04 24             	mov    %eax,(%esp)
 850f942:	e8 19 13 c0 ff       	call   8110c60 <_ZNK5CItem15getUsablePeriodEv>
 850f947:	69 c0 80 51 01 00    	imul   $0x15180,%eax,%eax
 850f94d:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 850f950:	89 45 f4             	mov    %eax,-0xc(%ebp)
 850f953:	eb 22                	jmp    850f977 <_ZNK14CStackableItem9make_itemER10Inven_Item+0xbf>
 850f955:	8b 45 08             	mov    0x8(%ebp),%eax
 850f958:	89 04 24             	mov    %eax,(%esp)
 850f95b:	e8 a6 19 be ff       	call   80f1306 <_ZNK5CItem17getExpirationDateEv>
 850f960:	85 c0                	test   %eax,%eax
 850f962:	0f 95 c0             	setne  %al
 850f965:	84 c0                	test   %al,%al
 850f967:	74 0e                	je     850f977 <_ZNK14CStackableItem9make_itemER10Inven_Item+0xbf>
 850f969:	8b 45 08             	mov    0x8(%ebp),%eax
 850f96c:	89 04 24             	mov    %eax,(%esp)
 850f96f:	e8 92 19 be ff       	call   80f1306 <_ZNK5CItem17getExpirationDateEv>
 850f974:	89 45 f4             	mov    %eax,-0xc(%ebp)
 850f977:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 850f97b:	74 2e                	je     850f9ab <_ZNK14CStackableItem9make_itemER10Inven_Item+0xf3>
 850f97d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 850f980:	8d 88 80 b5 5a bb    	lea    -0x44a54a80(%eax),%ecx
 850f986:	ba 07 45 2e c2       	mov    $0xc22e4507,%edx
 850f98b:	89 c8                	mov    %ecx,%eax
 850f98d:	f7 ea                	imul   %edx
 850f98f:	8d 04 0a             	lea    (%edx,%ecx,1),%eax
 850f992:	89 c2                	mov    %eax,%edx
 850f994:	c1 fa 10             	sar    $0x10,%edx
 850f997:	89 c8                	mov    %ecx,%eax
 850f999:	c1 f8 1f             	sar    $0x1f,%eax
 850f99c:	89 d1                	mov    %edx,%ecx
 850f99e:	29 c1                	sub    %eax,%ecx
 850f9a0:	89 c8                	mov    %ecx,%eax
 850f9a2:	89 c2                	mov    %eax,%edx
 850f9a4:	8b 45 0c             	mov    0xc(%ebp),%eax
 850f9a7:	66 89 50 0b          	mov    %dx,0xb(%eax)
 850f9ab:	8b 45 0c             	mov    0xc(%ebp),%eax
 850f9ae:	89 04 24             	mov    %eax,(%esp)
 850f9b1:	e8 dc be bb ff       	call   80cb892 <_ZN10Inven_Item13ResetItemAttrEv>
 850f9b6:	8b 45 0c             	mov    0xc(%ebp),%eax
 850f9b9:	c7 40 0d 00 00 00 00 	movl   $0x0,0xd(%eax)
 850f9c0:	8b 45 0c             	mov    0xc(%ebp),%eax
 850f9c3:	83 c0 15             	add    $0x15,%eax
 850f9c6:	89 04 24             	mov    %eax,(%esp)
 850f9c9:	e8 1a 40 00 00       	call   85139e8 <_ZN30itemGloballyUniqueIdentifier_t5resetEv>
 850f9ce:	8b 45 0c             	mov    0xc(%ebp),%eax
 850f9d1:	83 c0 11             	add    $0x11,%eax
 850f9d4:	89 04 24             	mov    %eax,(%esp)
 850f9d7:	e8 80 bd bb ff       	call   80cb75c <_ZN17stAmplifyOption_t5resetEv>
 850f9dc:	8b 45 08             	mov    0x8(%ebp),%eax
 850f9df:	89 04 24             	mov    %eax,(%esp)
 850f9e2:	e8 fb 18 be ff       	call   80f12e2 <_ZNK5CItem13GetAttachTypeEv>
 850f9e7:	83 f8 07             	cmp    $0x7,%eax
 850f9ea:	0f 94 c0             	sete   %al
 850f9ed:	84 c0                	test   %al,%al
 850f9ef:	74 1d                	je     850fa0e <_ZNK14CStackableItem9make_itemER10Inven_Item+0x156>
 850f9f1:	8b 45 08             	mov    0x8(%ebp),%eax
 850f9f4:	89 04 24             	mov    %eax,(%esp)
 850f9f7:	e8 3c 51 00 00       	call   8514b38 <_ZNK14CStackableItem18getTradeLimitCountEv>
 850f9fc:	0f b6 c0             	movzbl %al,%eax
 850f9ff:	89 44 24 04          	mov    %eax,0x4(%esp)
 850fa03:	8b 45 0c             	mov    0xc(%ebp),%eax
 850fa06:	89 04 24             	mov    %eax,(%esp)
 850fa09:	e8 e8 09 c1 ff       	call   81203f6 <_ZN10Inven_Item18SetTradeLimitCountEh>
 850fa0e:	83 c4 24             	add    $0x24,%esp
 850fa11:	5b                   	pop    %ebx
 850fa12:	5d                   	pop    %ebp
 850fa13:	c3                   	ret

```

```c
// CStackableItem::make_item @ 0x850f8b8

/* CStackableItem::make_item(Inven_Item&) const */

void __thiscall CStackableItem::make_item(CStackableItem *this,Inven_Item *param_1)

{
  uchar uVar1;
  int iVar2;
  int local_10;
  
  switch(*(undefined4 *)(this + 0x2b0)) {
  default:
    param_1[1] = (Inven_Item)0x2;
    break;
  case 1:
    param_1[1] = (Inven_Item)0x3;
    break;
  case 2:
    param_1[1] = (Inven_Item)0xa;
    break;
  case 8:
    param_1[1] = (Inven_Item)0x4;
    break;
  case 9:
  case 10:
    param_1[1] = (Inven_Item)0x7;
    break;
  case 0x14:
    param_1[1] = (Inven_Item)0x9;
  }
  *(undefined2 *)(param_1 + 0xb) = 0;
  local_10 = 0;
  iVar2 = CItem::getUsablePeriod((CItem *)this);
  if (iVar2 == 0) {
    iVar2 = CItem::getExpirationDate((CItem *)this);
    if (iVar2 != 0) {
      local_10 = CItem::getExpirationDate((CItem *)this);
    }
  }
  else {
    local_10 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    iVar2 = CItem::getUsablePeriod((CItem *)this);
    local_10 = local_10 + iVar2 * 0x15180;
  }
  if (local_10 != 0) {
    *(short *)(param_1 + 0xb) = (short)((local_10 + -0x44a54a80) / 0x15180);
  }
  Inven_Item::ResetItemAttr(param_1);
  *(undefined4 *)(param_1 + 0xd) = 0;
  itemGloballyUniqueIdentifier_t::reset((itemGloballyUniqueIdentifier_t *)(param_1 + 0x15));
  stAmplifyOption_t::reset((stAmplifyOption_t *)(param_1 + 0x11));
  iVar2 = CItem::GetAttachType((CItem *)this);
  if (iVar2 == 7) {
    uVar1 = getTradeLimitCount(this);
    Inven_Item::SetTradeLimitCount(param_1,uVar1);
  }
  return;
}

```

---

## quickslot_priority

```asm
// === 0850f732 CStackableItem::quickslot_priority  [0x0850f732-0x850f75d] ===
 850f732:	55                   	push   %ebp
 850f733:	89 e5                	mov    %esp,%ebp
 850f735:	8b 45 08             	mov    0x8(%ebp),%eax
 850f738:	8b 80 b0 02 00 00    	mov    0x2b0(%eax),%eax
 850f73e:	85 c0                	test   %eax,%eax
 850f740:	74 0e                	je     850f750 <_ZN14CStackableItem18quickslot_priorityEv+0x1e>
 850f742:	8b 45 08             	mov    0x8(%ebp),%eax
 850f745:	8b 80 b0 02 00 00    	mov    0x2b0(%eax),%eax
 850f74b:	83 f8 04             	cmp    $0x4,%eax
 850f74e:	75 07                	jne    850f757 <_ZN14CStackableItem18quickslot_priorityEv+0x25>
 850f750:	b8 01 00 00 00       	mov    $0x1,%eax
 850f755:	eb 05                	jmp    850f75c <_ZN14CStackableItem18quickslot_priorityEv+0x2a>
 850f757:	b8 00 00 00 00       	mov    $0x0,%eax
 850f75c:	5d                   	pop    %ebp
 850f75d:	c3                   	ret

```

```c
// CStackableItem::quickslot_priority @ 0x850f732

/* CStackableItem::quickslot_priority() */

undefined4 __thiscall CStackableItem::quickslot_priority(CStackableItem *this)

{
  undefined4 uVar1;
  
  if ((*(int *)(this + 0x2b0) == 0) || (*(int *)(this + 0x2b0) == 4)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## set_item

```asm
// === 0850d81e CStackableItem::set_item  [0x0850d81e-0x850e8dd] ===
 850d81e:	55                   	push   %ebp
 850d81f:	89 e5                	mov    %esp,%ebp
 850d821:	57                   	push   %edi
 850d822:	56                   	push   %esi
 850d823:	53                   	push   %ebx
 850d824:	81 ec 6c 02 00 00    	sub    $0x26c,%esp
 850d82a:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 850d831:	e8 1a ff b6 ff       	call   807d750 <time@plt>
 850d836:	8b 55 0c             	mov    0xc(%ebp),%edx
 850d839:	8b 12                	mov    (%edx),%edx
 850d83b:	01 d0                	add    %edx,%eax
 850d83d:	89 45 9c             	mov    %eax,-0x64(%ebp)
 850d840:	8d 75 9c             	lea    -0x64(%ebp),%esi
 850d843:	c7 04 24 c8 09 00 00 	movl   $0x9c8,(%esp)
 850d84a:	e8 01 6c 21 00       	call   8724450 <_Znwj>
 850d84f:	89 c3                	mov    %eax,%ebx
 850d851:	89 d8                	mov    %ebx,%eax
 850d853:	89 74 24 04          	mov    %esi,0x4(%esp)
 850d857:	89 04 24             	mov    %eax,(%esp)
 850d85a:	e8 cb e1 bb ff       	call   80cba2a <_ZN7CMTRandC1ERKm>
 850d85f:	eb 18                	jmp    850d879 <_ZN14CStackableItem8set_itemER17STStackableScript+0x5b>
 850d861:	89 d6                	mov    %edx,%esi
 850d863:	89 c7                	mov    %eax,%edi
 850d865:	89 1c 24             	mov    %ebx,(%esp)
 850d868:	e8 83 6c 21 00       	call   87244f0 <_ZdlPv>
 850d86d:	89 f8                	mov    %edi,%eax
 850d86f:	89 f2                	mov    %esi,%edx
 850d871:	89 04 24             	mov    %eax,(%esp)
 850d874:	e8 d7 5e 5d 00       	call   8ae3750 <_Unwind_Resume>
 850d879:	89 da                	mov    %ebx,%edx
 850d87b:	8b 45 08             	mov    0x8(%ebp),%eax
 850d87e:	89 90 e0 01 00 00    	mov    %edx,0x1e0(%eax)
 850d884:	8b 45 0c             	mov    0xc(%ebp),%eax
 850d887:	8b 10                	mov    (%eax),%edx
 850d889:	8b 45 08             	mov    0x8(%ebp),%eax
 850d88c:	89 50 04             	mov    %edx,0x4(%eax)
 850d88f:	8b 45 0c             	mov    0xc(%ebp),%eax
 850d892:	8b 50 04             	mov    0x4(%eax),%edx
 850d895:	8b 45 08             	mov    0x8(%ebp),%eax
 850d898:	89 50 08             	mov    %edx,0x8(%eax)
 850d89b:	8b 45 0c             	mov    0xc(%ebp),%eax
 850d89e:	8b 50 14             	mov    0x14(%eax),%edx
 850d8a1:	8b 45 08             	mov    0x8(%ebp),%eax
 850d8a4:	89 50 0c             	mov    %edx,0xc(%eax)
 850d8a7:	8b 45 0c             	mov    0xc(%ebp),%eax
 850d8aa:	8b 50 18             	mov    0x18(%eax),%edx
 850d8ad:	8b 45 08             	mov    0x8(%ebp),%eax
 850d8b0:	89 50 10             	mov    %edx,0x10(%eax)
 850d8b3:	8b 45 0c             	mov    0xc(%ebp),%eax
 850d8b6:	8b 50 1c             	mov    0x1c(%eax),%edx
 850d8b9:	8b 45 08             	mov    0x8(%ebp),%eax
 850d8bc:	89 50 14             	mov    %edx,0x14(%eax)
 850d8bf:	8b 45 0c             	mov    0xc(%ebp),%eax
 850d8c2:	8b 50 24             	mov    0x24(%eax),%edx
 850d8c5:	8b 45 08             	mov    0x8(%ebp),%eax
 850d8c8:	89 50 30             	mov    %edx,0x30(%eax)
 850d8cb:	8b 45 0c             	mov    0xc(%ebp),%eax
 850d8ce:	8b 50 10             	mov    0x10(%eax),%edx
 850d8d1:	8b 45 08             	mov    0x8(%ebp),%eax
 850d8d4:	89 50 38             	mov    %edx,0x38(%eax)
 850d8d7:	8b 45 0c             	mov    0xc(%ebp),%eax
 850d8da:	0f b6 90 fc 00 00 00 	movzbl 0xfc(%eax),%edx
 850d8e1:	8b 45 08             	mov    0x8(%ebp),%eax
 850d8e4:	88 50 60             	mov    %dl,0x60(%eax)
 850d8e7:	8b 45 0c             	mov    0xc(%ebp),%eax
 850d8ea:	0f b6 40 30          	movzbl 0x30(%eax),%eax
 850d8ee:	84 c0                	test   %al,%al
 850d8f0:	74 19                	je     850d90b <_ZN14CStackableItem8set_itemER17STStackableScript+0xed>
 850d8f2:	8b 45 08             	mov    0x8(%ebp),%eax
 850d8f5:	8b 40 04             	mov    0x4(%eax),%eax
 850d8f8:	89 c3                	mov    %eax,%ebx
 850d8fa:	e8 9c e8 bb ff       	call   80cc19b <_Z14G_CDataManagerv>
 850d8ff:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 850d903:	89 04 24             	mov    %eax,(%esp)
 850d906:	e8 b1 66 00 00       	call   8513fbc <_ZN12CDataManager26set_AuctionRegFreeCeraItemEj>
 850d90b:	8d 9d a8 fd ff ff    	lea    -0x258(%ebp),%ebx
 850d911:	b8 00 00 00 00       	mov    $0x0,%eax
 850d916:	ba 7d 00 00 00       	mov    $0x7d,%edx
 850d91b:	89 df                	mov    %ebx,%edi
 850d91d:	89 d1                	mov    %edx,%ecx
 850d91f:	f3 ab                	rep stos %eax,%es:(%edi)
 850d921:	8b 45 0c             	mov    0xc(%ebp),%eax
 850d924:	05 ac 00 00 00       	add    $0xac,%eax
 850d929:	89 04 24             	mov    %eax,(%esp)
 850d92c:	e8 bf 8b 1f 00       	call   87064f0 <_ZNKSs5c_strEv>
 850d931:	89 44 24 04          	mov    %eax,0x4(%esp)
 850d935:	8d 85 a8 fd ff ff    	lea    -0x258(%ebp),%eax
 850d93b:	89 04 24             	mov    %eax,(%esp)
 850d93e:	e8 ad 05 b7 ff       	call   807def0 <strcpy@plt>
 850d943:	8b 45 0c             	mov    0xc(%ebp),%eax
 850d946:	05 ac 00 00 00       	add    $0xac,%eax
 850d94b:	89 04 24             	mov    %eax,(%esp)
 850d94e:	e8 9d 8b 1f 00       	call   87064f0 <_ZNKSs5c_strEv>
 850d953:	8d 95 a8 fd ff ff    	lea    -0x258(%ebp),%edx
 850d959:	89 54 24 04          	mov    %edx,0x4(%esp)
 850d95d:	89 04 24             	mov    %eax,(%esp)
 850d960:	e8 a3 b4 bf ff       	call   8108e08 <_ZN8CodePage15script2DatabaseEPcS0_>
 850d965:	83 f0 01             	xor    $0x1,%eax
 850d968:	84 c0                	test   %al,%al
 850d96a:	74 72                	je     850d9de <_ZN14CStackableItem8set_itemER17STStackableScript+0x1c0>
 850d96c:	8b 45 0c             	mov    0xc(%ebp),%eax
 850d96f:	05 ac 00 00 00       	add    $0xac,%eax
 850d974:	89 04 24             	mov    %eax,(%esp)
 850d977:	e8 74 8b 1f 00       	call   87064f0 <_ZNKSs5c_strEv>
 850d97c:	89 c7                	mov    %eax,%edi
 850d97e:	e8 5d b4 bf ff       	call   8108de0 <_ZN8CodePage8databaseEv>
 850d983:	89 c6                	mov    %eax,%esi
 850d985:	e8 42 b4 bf ff       	call   8108dcc <_ZN8CodePage6scriptEv>
 850d98a:	89 c3                	mov    %eax,%ebx
 850d98c:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 850d993:	00 
 850d994:	c7 44 24 08 80 00 00 	movl   $0x80,0x8(%esp)
 850d99b:	00 
 850d99c:	c7 44 24 04 60 6d c9 	movl   $0x8c96d60,0x4(%esp)
 850d9a3:	08 
 850d9a4:	8d 45 a0             	lea    -0x60(%ebp),%eax
 850d9a7:	89 04 24             	mov    %eax,(%esp)
 850d9aa:	e8 69 1d 04 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 850d9af:	c7 44 24 18 80 00 00 	movl   $0x80,0x18(%esp)
 850d9b6:	00 
 850d9b7:	c7 44 24 14 60 6d c9 	movl   $0x8c96d60,0x14(%esp)
 850d9be:	08 
 850d9bf:	89 7c 24 10          	mov    %edi,0x10(%esp)
 850d9c3:	89 74 24 0c          	mov    %esi,0xc(%esp)
 850d9c7:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 850d9cb:	c7 44 24 04 83 5a c9 	movl   $0x8c95a83,0x4(%esp)
 850d9d2:	08 
 850d9d3:	8d 45 a0             	lea    -0x60(%ebp),%eax
 850d9d6:	89 04 24             	mov    %eax,(%esp)
 850d9d9:	e8 aa 1d 04 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 850d9de:	8b 45 08             	mov    0x8(%ebp),%eax
 850d9e1:	8d 50 2c             	lea    0x2c(%eax),%edx
 850d9e4:	8d 85 a8 fd ff ff    	lea    -0x258(%ebp),%eax
 850d9ea:	89 44 24 04          	mov    %eax,0x4(%esp)
 850d9ee:	89 14 24             	mov    %edx,(%esp)
 850d9f1:	e8 2a ad 1f 00       	call   8708720 <_ZNSsaSEPKc>
 850d9f6:	8b 45 0c             	mov    0xc(%ebp),%eax
 850d9f9:	8b 90 f4 00 00 00    	mov    0xf4(%eax),%edx
 850d9ff:	8b 45 08             	mov    0x8(%ebp),%eax
 850da02:	89 50 6c             	mov    %edx,0x6c(%eax)
 850da05:	8b 45 0c             	mov    0xc(%ebp),%eax
 850da08:	8b 90 f8 00 00 00    	mov    0xf8(%eax),%edx
 850da0e:	8b 45 08             	mov    0x8(%ebp),%eax
 850da11:	89 50 70             	mov    %edx,0x70(%eax)
 850da14:	8b 45 0c             	mov    0xc(%ebp),%eax
 850da17:	8b 50 20             	mov    0x20(%eax),%edx
 850da1a:	8b 45 08             	mov    0x8(%ebp),%eax
 850da1d:	89 50 64             	mov    %edx,0x64(%eax)
 850da20:	8b 45 0c             	mov    0xc(%ebp),%eax
 850da23:	8b 90 ec 04 00 00    	mov    0x4ec(%eax),%edx
 850da29:	8b 45 08             	mov    0x8(%ebp),%eax
 850da2c:	89 50 68             	mov    %edx,0x68(%eax)
 850da2f:	8b 45 0c             	mov    0xc(%ebp),%eax
 850da32:	8b 90 8c 01 00 00    	mov    0x18c(%eax),%edx
 850da38:	8b 45 08             	mov    0x8(%ebp),%eax
 850da3b:	89 90 cc 02 00 00    	mov    %edx,0x2cc(%eax)
 850da41:	8b 45 0c             	mov    0xc(%ebp),%eax
 850da44:	8b 50 28             	mov    0x28(%eax),%edx
 850da47:	8b 45 08             	mov    0x8(%ebp),%eax
 850da4a:	89 50 24             	mov    %edx,0x24(%eax)
 850da4d:	8b 45 0c             	mov    0xc(%ebp),%eax
 850da50:	8b 50 2c             	mov    0x2c(%eax),%edx
 850da53:	8b 45 08             	mov    0x8(%ebp),%eax
 850da56:	89 50 28             	mov    %edx,0x28(%eax)
 850da59:	8b 45 0c             	mov    0xc(%ebp),%eax
 850da5c:	8b 50 0c             	mov    0xc(%eax),%edx
 850da5f:	8b 45 08             	mov    0x8(%ebp),%eax
 850da62:	89 50 50             	mov    %edx,0x50(%eax)
 850da65:	8b 45 0c             	mov    0xc(%ebp),%eax
 850da68:	8b 50 08             	mov    0x8(%eax),%edx
 850da6b:	8b 45 08             	mov    0x8(%ebp),%eax
 850da6e:	89 50 34             	mov    %edx,0x34(%eax)
 850da71:	8b 45 0c             	mov    0xc(%ebp),%eax
 850da74:	8b 90 e0 01 00 00    	mov    0x1e0(%eax),%edx
 850da7a:	8b 45 08             	mov    0x8(%ebp),%eax
 850da7d:	89 90 b0 02 00 00    	mov    %edx,0x2b0(%eax)
 850da83:	8b 45 0c             	mov    0xc(%ebp),%eax
 850da86:	8b 90 cc 03 00 00    	mov    0x3cc(%eax),%edx
 850da8c:	8b 45 08             	mov    0x8(%ebp),%eax
 850da8f:	89 90 b8 02 00 00    	mov    %edx,0x2b8(%eax)
 850da95:	8b 45 08             	mov    0x8(%ebp),%eax
 850da98:	8b 80 b0 02 00 00    	mov    0x2b0(%eax),%eax
 850da9e:	83 f8 03             	cmp    $0x3,%eax
 850daa1:	75 5a                	jne    850dafd <_ZN14CStackableItem8set_itemER17STStackableScript+0x2df>
 850daa3:	8b 45 0c             	mov    0xc(%ebp),%eax
 850daa6:	8d 90 88 00 00 00    	lea    0x88(%eax),%edx
 850daac:	8b 45 08             	mov    0x8(%ebp),%eax
 850daaf:	05 74 01 00 00       	add    $0x174,%eax
 850dab4:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 850dabb:	00 
 850dabc:	89 54 24 04          	mov    %edx,0x4(%esp)
 850dac0:	89 04 24             	mov    %eax,(%esp)
 850dac3:	e8 74 cd 4a 00       	call   89ba83c <_Z16createRecipeInfoP10RecipeInfoPSt6vectorIiSaIiEEPS1_ISt4pairIiiESaIS6_EE>
 850dac8:	8b 45 0c             	mov    0xc(%ebp),%eax
 850dacb:	8d 90 c0 03 00 00    	lea    0x3c0(%eax),%edx
 850dad1:	8b 45 08             	mov    0x8(%ebp),%eax
 850dad4:	05 9c 01 00 00       	add    $0x19c,%eax
 850dad9:	89 54 24 04          	mov    %edx,0x4(%esp)
 850dadd:	89 04 24             	mov    %eax,(%esp)
 850dae0:	e8 a7 15 e0 ff       	call   830f08c <_ZNSt6vectorISt4pairIiiESaIS1_EEaSERKS3_>
 850dae5:	8b 45 08             	mov    0x8(%ebp),%eax
 850dae8:	8d 90 74 01 00 00    	lea    0x174(%eax),%edx
 850daee:	8b 45 0c             	mov    0xc(%ebp),%eax
 850daf1:	89 44 24 04          	mov    %eax,0x4(%esp)
 850daf5:	89 14 24             	mov    %edx,(%esp)
 850daf8:	e8 47 62 00 00       	call   8513d44 <_ZN10RecipeInfo14additionalInfoER17STStackableScript>
 850dafd:	8b 45 08             	mov    0x8(%ebp),%eax
 850db00:	8b 80 b0 02 00 00    	mov    0x2b0(%eax),%eax
 850db06:	83 f8 06             	cmp    $0x6,%eax
 850db09:	75 22                	jne    850db2d <_ZN14CStackableItem8set_itemER17STStackableScript+0x30f>
 850db0b:	8b 45 0c             	mov    0xc(%ebp),%eax
 850db0e:	8d 90 88 00 00 00    	lea    0x88(%eax),%edx
 850db14:	8b 45 08             	mov    0x8(%ebp),%eax
 850db17:	05 c0 01 00 00       	add    $0x1c0,%eax
 850db1c:	89 54 24 04          	mov    %edx,0x4(%esp)
 850db20:	89 04 24             	mov    %eax,(%esp)
 850db23:	e8 3c d0 4a 00       	call   89bab64 <_Z17createLotteryInfoP11LotteryInfoPSt6vectorIiSaIiEE>
 850db28:	e9 c3 02 00 00       	jmp    850ddf0 <_ZN14CStackableItem8set_itemER17STStackableScript+0x5d2>
 850db2d:	8b 45 08             	mov    0x8(%ebp),%eax
 850db30:	8b 80 b0 02 00 00    	mov    0x2b0(%eax),%eax
 850db36:	83 f8 07             	cmp    $0x7,%eax
 850db39:	75 22                	jne    850db5d <_ZN14CStackableItem8set_itemER17STStackableScript+0x33f>
 850db3b:	8b 45 0c             	mov    0xc(%ebp),%eax
 850db3e:	8d 90 88 00 00 00    	lea    0x88(%eax),%edx
 850db44:	8b 45 08             	mov    0x8(%ebp),%eax
 850db47:	05 c0 01 00 00       	add    $0x1c0,%eax
 850db4c:	89 54 24 04          	mov    %edx,0x4(%esp)
 850db50:	89 04 24             	mov    %eax,(%esp)
 850db53:	e8 69 d1 4a 00       	call   89bacc1 <_Z26createStackableLotteryInfoP11LotteryInfoPSt6vectorIiSaIiEE>
 850db58:	e9 93 02 00 00       	jmp    850ddf0 <_ZN14CStackableItem8set_itemER17STStackableScript+0x5d2>
 850db5d:	8b 45 08             	mov    0x8(%ebp),%eax
 850db60:	8b 80 b0 02 00 00    	mov    0x2b0(%eax),%eax
 850db66:	83 f8 0d             	cmp    $0xd,%eax
 850db69:	75 22                	jne    850db8d <_ZN14CStackableItem8set_itemER17STStackableScript+0x36f>
 850db6b:	8b 45 0c             	mov    0xc(%ebp),%eax
 850db6e:	8d 90 88 00 00 00    	lea    0x88(%eax),%edx
 850db74:	8b 45 08             	mov    0x8(%ebp),%eax
 850db77:	05 c0 01 00 00       	add    $0x1c0,%eax
 850db7c:	89 54 24 04          	mov    %edx,0x4(%esp)
 850db80:	89 04 24             	mov    %eax,(%esp)
 850db83:	e8 39 d1 4a 00       	call   89bacc1 <_Z26createStackableLotteryInfoP11LotteryInfoPSt6vectorIiSaIiEE>
 850db88:	e9 63 02 00 00       	jmp    850ddf0 <_ZN14CStackableItem8set_itemER17STStackableScript+0x5d2>
 850db8d:	8b 45 08             	mov    0x8(%ebp),%eax
 850db90:	8b 80 b0 02 00 00    	mov    0x2b0(%eax),%eax
 850db96:	83 f8 1a             	cmp    $0x1a,%eax
 850db99:	74 0e                	je     850dba9 <_ZN14CStackableItem8set_itemER17STStackableScript+0x38b>
 850db9b:	8b 45 08             	mov    0x8(%ebp),%eax
 850db9e:	8b 80 b0 02 00 00    	mov    0x2b0(%eax),%eax
 850dba4:	83 f8 1b             	cmp    $0x1b,%eax
 850dba7:	75 3c                	jne    850dbe5 <_ZN14CStackableItem8set_itemER17STStackableScript+0x3c7>
 850dba9:	8b 45 0c             	mov    0xc(%ebp),%eax
 850dbac:	8d 98 5c 02 00 00    	lea    0x25c(%eax),%ebx
 850dbb2:	8b 45 0c             	mov    0xc(%ebp),%eax
 850dbb5:	8d 88 50 02 00 00    	lea    0x250(%eax),%ecx
 850dbbb:	8b 45 0c             	mov    0xc(%ebp),%eax
 850dbbe:	8d 90 44 02 00 00    	lea    0x244(%eax),%edx
 850dbc4:	8b 45 08             	mov    0x8(%ebp),%eax
 850dbc7:	05 e4 01 00 00       	add    $0x1e4,%eax
 850dbcc:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 850dbd0:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 850dbd4:	89 54 24 04          	mov    %edx,0x4(%esp)
 850dbd8:	89 04 24             	mov    %eax,(%esp)
 850dbdb:	e8 f1 d3 4a 00       	call   89bafd1 <_Z34createStackableMultiBoxLotteryInfoP19MultiBoxLotteryInfoPSt6vectorIS1_IiSaIiEESaIS3_EEPS3_S7_>
 850dbe0:	e9 0b 02 00 00       	jmp    850ddf0 <_ZN14CStackableItem8set_itemER17STStackableScript+0x5d2>
 850dbe5:	8b 45 08             	mov    0x8(%ebp),%eax
 850dbe8:	8b 80 b0 02 00 00    	mov    0x2b0(%eax),%eax
 850dbee:	83 f8 0e             	cmp    $0xe,%eax
 850dbf1:	74 12                	je     850dc05 <_ZN14CStackableItem8set_itemER17STStackableScript+0x3e7>
 850dbf3:	8b 45 08             	mov    0x8(%ebp),%eax
 850dbf6:	8b 80 b0 02 00 00    	mov    0x2b0(%eax),%eax
 850dbfc:	83 f8 26             	cmp    $0x26,%eax
 850dbff:	0f 85 87 00 00 00    	jne    850dc8c <_ZN14CStackableItem8set_itemER17STStackableScript+0x46e>
 850dc05:	8b 45 0c             	mov    0xc(%ebp),%eax
 850dc08:	8d 90 68 02 00 00    	lea    0x268(%eax),%edx
 850dc0e:	8b 45 08             	mov    0x8(%ebp),%eax
 850dc11:	05 1c 02 00 00       	add    $0x21c,%eax
 850dc16:	89 54 24 04          	mov    %edx,0x4(%esp)
 850dc1a:	89 04 24             	mov    %eax,(%esp)
 850dc1d:	e8 32 85 00 00       	call   8516154 <_ZNSt6vectorI22STStackablePackageDataSaIS0_EEaSERKS2_>
 850dc22:	8b 45 0c             	mov    0xc(%ebp),%eax
 850dc25:	8d 90 74 02 00 00    	lea    0x274(%eax),%edx
 850dc2b:	8b 45 08             	mov    0x8(%ebp),%eax
 850dc2e:	05 34 02 00 00       	add    $0x234,%eax
 850dc33:	89 54 24 04          	mov    %edx,0x4(%esp)
 850dc37:	89 04 24             	mov    %eax,(%esp)
 850dc3a:	e8 63 87 00 00       	call   85163a2 <_ZNSt6vectorIS_I22STStackablePackageDataSaIS0_EESaIS2_EEaSERKS4_>
 850dc3f:	8b 45 0c             	mov    0xc(%ebp),%eax
 850dc42:	05 a4 02 00 00       	add    $0x2a4,%eax
 850dc47:	89 04 24             	mov    %eax,(%esp)
 850dc4a:	e8 c5 89 00 00       	call   8516614 <_ZNKSt6vectorI22STStackablePackageDataSaIS0_EE5emptyEv>
 850dc4f:	83 f0 01             	xor    $0x1,%eax
 850dc52:	84 c0                	test   %al,%al
 850dc54:	0f 84 95 01 00 00    	je     850ddef <_ZN14CStackableItem8set_itemER17STStackableScript+0x5d1>
 850dc5a:	8b 45 0c             	mov    0xc(%ebp),%eax
 850dc5d:	8d 90 a4 02 00 00    	lea    0x2a4(%eax),%edx
 850dc63:	8b 45 08             	mov    0x8(%ebp),%eax
 850dc66:	05 28 02 00 00       	add    $0x228,%eax
 850dc6b:	89 54 24 04          	mov    %edx,0x4(%esp)
 850dc6f:	89 04 24             	mov    %eax,(%esp)
 850dc72:	e8 dd 84 00 00       	call   8516154 <_ZNSt6vectorI22STStackablePackageDataSaIS0_EEaSERKS2_>
 850dc77:	8b 45 0c             	mov    0xc(%ebp),%eax
 850dc7a:	05 a4 02 00 00       	add    $0x2a4,%eax
 850dc7f:	89 04 24             	mov    %eax,(%esp)
 850dc82:	e8 d1 89 00 00       	call   8516658 <_ZNSt6vectorI22STStackablePackageDataSaIS0_EE5clearEv>
 850dc87:	e9 64 01 00 00       	jmp    850ddf0 <_ZN14CStackableItem8set_itemER17STStackableScript+0x5d2>
 850dc8c:	8b 45 08             	mov    0x8(%ebp),%eax
 850dc8f:	8b 80 b0 02 00 00    	mov    0x2b0(%eax),%eax
 850dc95:	83 f8 0f             	cmp    $0xf,%eax
 850dc98:	74 0e                	je     850dca8 <_ZN14CStackableItem8set_itemER17STStackableScript+0x48a>
 850dc9a:	8b 45 08             	mov    0x8(%ebp),%eax
 850dc9d:	8b 80 b0 02 00 00    	mov    0x2b0(%eax),%eax
 850dca3:	83 f8 10             	cmp    $0x10,%eax
 850dca6:	75 22                	jne    850dcca <_ZN14CStackableItem8set_itemER17STStackableScript+0x4ac>
 850dca8:	8b 45 0c             	mov    0xc(%ebp),%eax
 850dcab:	8d 90 80 02 00 00    	lea    0x280(%eax),%edx
 850dcb1:	8b 45 08             	mov    0x8(%ebp),%eax
 850dcb4:	05 40 02 00 00       	add    $0x240,%eax
 850dcb9:	89 54 24 04          	mov    %edx,0x4(%esp)
 850dcbd:	89 04 24             	mov    %eax,(%esp)
 850dcc0:	e8 2d 74 00 00       	call   85150f2 <_ZN20stStackableBooster_taSERKS_>
 850dcc5:	e9 26 01 00 00       	jmp    850ddf0 <_ZN14CStackableItem8set_itemER17STStackableScript+0x5d2>
 850dcca:	8b 45 08             	mov    0x8(%ebp),%eax
 850dccd:	8b 80 b0 02 00 00    	mov    0x2b0(%eax),%eax
 850dcd3:	83 f8 11             	cmp    $0x11,%eax
 850dcd6:	75 2f                	jne    850dd07 <_ZN14CStackableItem8set_itemER17STStackableScript+0x4e9>
 850dcd8:	8b 45 0c             	mov    0xc(%ebp),%eax
 850dcdb:	8d 90 80 02 00 00    	lea    0x280(%eax),%edx
 850dce1:	8b 45 08             	mov    0x8(%ebp),%eax
 850dce4:	05 40 02 00 00       	add    $0x240,%eax
 850dce9:	89 54 24 04          	mov    %edx,0x4(%esp)
 850dced:	89 04 24             	mov    %eax,(%esp)
 850dcf0:	e8 fd 73 00 00       	call   85150f2 <_ZN20stStackableBooster_taSERKS_>
 850dcf5:	8b 45 08             	mov    0x8(%ebp),%eax
 850dcf8:	c7 80 b0 02 00 00 10 	movl   $0x10,0x2b0(%eax)
 850dcff:	00 00 00 
 850dd02:	e9 e9 00 00 00       	jmp    850ddf0 <_ZN14CStackableItem8set_itemER17STStackableScript+0x5d2>
 850dd07:	8b 45 08             	mov    0x8(%ebp),%eax
 850dd0a:	8b 80 b0 02 00 00    	mov    0x2b0(%eax),%eax
 850dd10:	83 f8 22             	cmp    $0x22,%eax
 850dd13:	75 3f                	jne    850dd54 <_ZN14CStackableItem8set_itemER17STStackableScript+0x536>
 850dd15:	8b 45 0c             	mov    0xc(%ebp),%eax
 850dd18:	8d 90 80 02 00 00    	lea    0x280(%eax),%edx
 850dd1e:	8b 45 08             	mov    0x8(%ebp),%eax
 850dd21:	05 40 02 00 00       	add    $0x240,%eax
 850dd26:	89 54 24 04          	mov    %edx,0x4(%esp)
 850dd2a:	89 04 24             	mov    %eax,(%esp)
 850dd2d:	e8 c0 73 00 00       	call   85150f2 <_ZN20stStackableBooster_taSERKS_>
 850dd32:	8b 45 0c             	mov    0xc(%ebp),%eax
 850dd35:	8d 90 1c 04 00 00    	lea    0x41c(%eax),%edx
 850dd3b:	8b 45 08             	mov    0x8(%ebp),%eax
 850dd3e:	05 64 02 00 00       	add    $0x264,%eax
 850dd43:	89 54 24 04          	mov    %edx,0x4(%esp)
 850dd47:	89 04 24             	mov    %eax,(%esp)
 850dd4a:	e8 d9 73 00 00       	call   8515128 <_ZN17BoosterSelectInfoaSERKS_>
 850dd4f:	e9 9c 00 00 00       	jmp    850ddf0 <_ZN14CStackableItem8set_itemER17STStackableScript+0x5d2>
 850dd54:	8b 45 08             	mov    0x8(%ebp),%eax
 850dd57:	8b 80 b0 02 00 00    	mov    0x2b0(%eax),%eax
 850dd5d:	83 f8 17             	cmp    $0x17,%eax
 850dd60:	75 1f                	jne    850dd81 <_ZN14CStackableItem8set_itemER17STStackableScript+0x563>
 850dd62:	8b 45 0c             	mov    0xc(%ebp),%eax
 850dd65:	8d 90 88 00 00 00    	lea    0x88(%eax),%edx
 850dd6b:	8b 45 08             	mov    0x8(%ebp),%eax
 850dd6e:	05 80 02 00 00       	add    $0x280,%eax
 850dd73:	89 54 24 04          	mov    %edx,0x4(%esp)
 850dd77:	89 04 24             	mov    %eax,(%esp)
 850dd7a:	e8 15 d1 4a 00       	call   89bae94 <_Z22createGlobalEffectInfoRSt6vectorI16stGlobalEffect_tSaIS0_EEPS_IiSaIiEE>
 850dd7f:	eb 6f                	jmp    850ddf0 <_ZN14CStackableItem8set_itemER17STStackableScript+0x5d2>
 850dd81:	8b 45 08             	mov    0x8(%ebp),%eax
 850dd84:	8b 80 b0 02 00 00    	mov    0x2b0(%eax),%eax
 850dd8a:	83 f8 1d             	cmp    $0x1d,%eax
 850dd8d:	75 61                	jne    850ddf0 <_ZN14CStackableItem8set_itemER17STStackableScript+0x5d2>
 850dd8f:	8b 45 0c             	mov    0xc(%ebp),%eax
 850dd92:	8d 90 d4 03 00 00    	lea    0x3d4(%eax),%edx
 850dd98:	8b 45 08             	mov    0x8(%ebp),%eax
 850dd9b:	05 90 02 00 00       	add    $0x290,%eax
 850dda0:	89 54 24 04          	mov    %edx,0x4(%esp)
 850dda4:	89 04 24             	mov    %eax,(%esp)
 850dda7:	e8 e0 12 e0 ff       	call   830f08c <_ZNSt6vectorISt4pairIiiESaIS1_EEaSERKS3_>
 850ddac:	8b 45 0c             	mov    0xc(%ebp),%eax
 850ddaf:	8b 90 e0 03 00 00    	mov    0x3e0(%eax),%edx
 850ddb5:	8b 45 08             	mov    0x8(%ebp),%eax
 850ddb8:	89 90 9c 02 00 00    	mov    %edx,0x29c(%eax)
 850ddbe:	8b 45 0c             	mov    0xc(%ebp),%eax
 850ddc1:	8b 90 e4 03 00 00    	mov    0x3e4(%eax),%edx
 850ddc7:	8b 45 08             	mov    0x8(%ebp),%eax
 850ddca:	89 90 a0 02 00 00    	mov    %edx,0x2a0(%eax)
 850ddd0:	8b 45 0c             	mov    0xc(%ebp),%eax
 850ddd3:	8d 90 e8 03 00 00    	lea    0x3e8(%eax),%edx
 850ddd9:	8b 45 08             	mov    0x8(%ebp),%eax
 850dddc:	05 a4 02 00 00       	add    $0x2a4,%eax
 850dde1:	89 54 24 04          	mov    %edx,0x4(%esp)
 850dde5:	89 04 24             	mov    %eax,(%esp)
 850dde8:	e8 17 8b 00 00       	call   8516904 <_ZNSt6vectorI17stLimitCubeResultSaIS0_EEaSERKS2_>
 850dded:	eb 01                	jmp    850ddf0 <_ZN14CStackableItem8set_itemER17STStackableScript+0x5d2>
 850ddef:	90                   	nop
 850ddf0:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 850ddf7:	eb 19                	jmp    850de12 <_ZN14CStackableItem8set_itemER17STStackableScript+0x5f4>
 850ddf9:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 850ddfc:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 850ddff:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 850de02:	0f b6 4c 11 38       	movzbl 0x38(%ecx,%edx,1),%ecx
 850de07:	8b 55 08             	mov    0x8(%ebp),%edx
 850de0a:	88 4c 02 3c          	mov    %cl,0x3c(%edx,%eax,1)
 850de0e:	83 45 d4 01          	addl   $0x1,-0x2c(%ebp)
 850de12:	83 7d d4 0a          	cmpl   $0xa,-0x2c(%ebp)
 850de16:	0f 9e c0             	setle  %al
 850de19:	84 c0                	test   %al,%al
 850de1b:	75 dc                	jne    850ddf9 <_ZN14CStackableItem8set_itemER17STStackableScript+0x5db>
 850de1d:	8b 45 0c             	mov    0xc(%ebp),%eax
 850de20:	8b 50 5c             	mov    0x5c(%eax),%edx
 850de23:	8b 45 08             	mov    0x8(%ebp),%eax
 850de26:	89 50 48             	mov    %edx,0x48(%eax)
 850de29:	8b 45 0c             	mov    0xc(%ebp),%eax
 850de2c:	8b 50 60             	mov    0x60(%eax),%edx
 850de2f:	8b 45 08             	mov    0x8(%ebp),%eax
 850de32:	89 50 4c             	mov    %edx,0x4c(%eax)
 850de35:	8b 45 08             	mov    0x8(%ebp),%eax
 850de38:	c6 40 54 01          	movb   $0x1,0x54(%eax)
 850de3c:	8b 45 0c             	mov    0xc(%ebp),%eax
 850de3f:	8b 90 64 03 00 00    	mov    0x364(%eax),%edx
 850de45:	8b 45 08             	mov    0x8(%ebp),%eax
 850de48:	89 90 8c 02 00 00    	mov    %edx,0x28c(%eax)
 850de4e:	8b 45 0c             	mov    0xc(%ebp),%eax
 850de51:	8b 90 e4 01 00 00    	mov    0x1e4(%eax),%edx
 850de57:	8b 45 08             	mov    0x8(%ebp),%eax
 850de5a:	89 90 bc 02 00 00    	mov    %edx,0x2bc(%eax)
 850de60:	8b 45 08             	mov    0x8(%ebp),%eax
 850de63:	05 c0 02 00 00       	add    $0x2c0,%eax
 850de68:	89 04 24             	mov    %eax,(%esp)
 850de6b:	e8 fe 8c b8 ff       	call   8096b6e <_ZNSt6vectorIiSaIiEE5clearEv>
 850de70:	8b 45 08             	mov    0x8(%ebp),%eax
 850de73:	8b 80 b0 02 00 00    	mov    0x2b0(%eax),%eax
 850de79:	83 f8 02             	cmp    $0x2,%eax
 850de7c:	0f 85 9a 00 00 00    	jne    850df1c <_ZN14CStackableItem8set_itemER17STStackableScript+0x6fe>
 850de82:	8b 45 08             	mov    0x8(%ebp),%eax
 850de85:	8b 80 bc 02 00 00    	mov    0x2bc(%eax),%eax
 850de8b:	83 f8 01             	cmp    $0x1,%eax
 850de8e:	0f 85 88 00 00 00    	jne    850df1c <_ZN14CStackableItem8set_itemER17STStackableScript+0x6fe>
 850de94:	8b 45 0c             	mov    0xc(%ebp),%eax
 850de97:	05 94 00 00 00       	add    $0x94,%eax
 850de9c:	89 04 24             	mov    %eax,(%esp)
 850de9f:	e8 ec 9b d2 ff       	call   8237a90 <_ZNKSt6vectorISsSaISsEE4sizeEv>
 850dea4:	83 f8 01             	cmp    $0x1,%eax
 850dea7:	0f 97 c0             	seta   %al
 850deaa:	84 c0                	test   %al,%al
 850deac:	74 6e                	je     850df1c <_ZN14CStackableItem8set_itemER17STStackableScript+0x6fe>
 850deae:	c7 45 d8 01 00 00 00 	movl   $0x1,-0x28(%ebp)
 850deb5:	eb 4b                	jmp    850df02 <_ZN14CStackableItem8set_itemER17STStackableScript+0x6e4>
 850deb7:	8b 45 0c             	mov    0xc(%ebp),%eax
 850deba:	8d 90 94 00 00 00    	lea    0x94(%eax),%edx
 850dec0:	8b 45 d8             	mov    -0x28(%ebp),%eax
 850dec3:	89 44 24 04          	mov    %eax,0x4(%esp)
 850dec7:	89 14 24             	mov    %edx,(%esp)
 850deca:	e8 ff 9b d2 ff       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 850decf:	89 04 24             	mov    %eax,(%esp)
 850ded2:	e8 51 8e 57 00       	call   8a86d28 <_Z28GetEquipmentTypeStringToEnumRSs>
 850ded7:	89 45 dc             	mov    %eax,-0x24(%ebp)
 850deda:	83 7d dc 16          	cmpl   $0x16,-0x24(%ebp)
 850dede:	74 1e                	je     850defe <_ZN14CStackableItem8set_itemER17STStackableScript+0x6e0>
 850dee0:	8b 45 dc             	mov    -0x24(%ebp),%eax
 850dee3:	89 45 b0             	mov    %eax,-0x50(%ebp)
 850dee6:	8b 45 08             	mov    0x8(%ebp),%eax
 850dee9:	8d 90 c0 02 00 00    	lea    0x2c0(%eax),%edx
 850deef:	8d 45 b0             	lea    -0x50(%ebp),%eax
 850def2:	89 44 24 04          	mov    %eax,0x4(%esp)
 850def6:	89 14 24             	mov    %edx,(%esp)
 850def9:	e8 f0 02 b8 ff       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 850defe:	83 45 d8 01          	addl   $0x1,-0x28(%ebp)
 850df02:	8b 45 0c             	mov    0xc(%ebp),%eax
 850df05:	05 94 00 00 00       	add    $0x94,%eax
 850df0a:	89 04 24             	mov    %eax,(%esp)
 850df0d:	e8 7e 9b d2 ff       	call   8237a90 <_ZNKSt6vectorISsSaISsEE4sizeEv>
 850df12:	3b 45 d8             	cmp    -0x28(%ebp),%eax
 850df15:	0f 97 c0             	seta   %al
 850df18:	84 c0                	test   %al,%al
 850df1a:	75 9b                	jne    850deb7 <_ZN14CStackableItem8set_itemER17STStackableScript+0x699>
 850df1c:	8b 45 0c             	mov    0xc(%ebp),%eax
 850df1f:	8b 50 68             	mov    0x68(%eax),%edx
 850df22:	8b 45 08             	mov    0x8(%ebp),%eax
 850df25:	89 90 d0 02 00 00    	mov    %edx,0x2d0(%eax)
 850df2b:	8b 45 0c             	mov    0xc(%ebp),%eax
 850df2e:	8b 90 b4 01 00 00    	mov    0x1b4(%eax),%edx
 850df34:	8b 45 08             	mov    0x8(%ebp),%eax
 850df37:	89 90 d4 02 00 00    	mov    %edx,0x2d4(%eax)
 850df3d:	8b 45 0c             	mov    0xc(%ebp),%eax
 850df40:	0f b6 90 b9 01 00 00 	movzbl 0x1b9(%eax),%edx
 850df47:	8b 45 08             	mov    0x8(%ebp),%eax
 850df4a:	88 90 d8 02 00 00    	mov    %dl,0x2d8(%eax)
 850df50:	8b 45 0c             	mov    0xc(%ebp),%eax
 850df53:	0f b6 90 ba 01 00 00 	movzbl 0x1ba(%eax),%edx
 850df5a:	8b 45 08             	mov    0x8(%ebp),%eax
 850df5d:	88 90 d9 02 00 00    	mov    %dl,0x2d9(%eax)
 850df63:	8b 45 0c             	mov    0xc(%ebp),%eax
 850df66:	0f b6 90 bb 01 00 00 	movzbl 0x1bb(%eax),%edx
 850df6d:	8b 45 08             	mov    0x8(%ebp),%eax
 850df70:	88 90 da 02 00 00    	mov    %dl,0x2da(%eax)
 850df76:	8b 45 0c             	mov    0xc(%ebp),%eax
 850df79:	0f b6 90 60 03 00 00 	movzbl 0x360(%eax),%edx
 850df80:	8b 45 08             	mov    0x8(%ebp),%eax
 850df83:	88 90 e0 02 00 00    	mov    %dl,0x2e0(%eax)
 850df89:	8b 45 0c             	mov    0xc(%ebp),%eax
 850df8c:	8b 80 58 03 00 00    	mov    0x358(%eax),%eax
 850df92:	89 c2                	mov    %eax,%edx
 850df94:	8b 45 08             	mov    0x8(%ebp),%eax
 850df97:	89 90 dc 02 00 00    	mov    %edx,0x2dc(%eax)
 850df9d:	8b 45 0c             	mov    0xc(%ebp),%eax
 850dfa0:	0f b6 90 bf 01 00 00 	movzbl 0x1bf(%eax),%edx
 850dfa7:	8b 45 08             	mov    0x8(%ebp),%eax
 850dfaa:	88 90 e1 02 00 00    	mov    %dl,0x2e1(%eax)
 850dfb0:	8b 45 0c             	mov    0xc(%ebp),%eax
 850dfb3:	0f b6 90 bc 01 00 00 	movzbl 0x1bc(%eax),%edx
 850dfba:	8b 45 08             	mov    0x8(%ebp),%eax
 850dfbd:	88 90 e4 02 00 00    	mov    %dl,0x2e4(%eax)
 850dfc3:	8b 45 0c             	mov    0xc(%ebp),%eax
 850dfc6:	0f b6 90 bd 01 00 00 	movzbl 0x1bd(%eax),%edx
 850dfcd:	8b 45 08             	mov    0x8(%ebp),%eax
 850dfd0:	88 90 e5 02 00 00    	mov    %dl,0x2e5(%eax)
 850dfd6:	8b 45 0c             	mov    0xc(%ebp),%eax
 850dfd9:	0f b6 90 be 01 00 00 	movzbl 0x1be(%eax),%edx
 850dfe0:	8b 45 08             	mov    0x8(%ebp),%eax
 850dfe3:	88 90 e6 02 00 00    	mov    %dl,0x2e6(%eax)
 850dfe9:	8b 45 0c             	mov    0xc(%ebp),%eax
 850dfec:	0f b6 90 c0 01 00 00 	movzbl 0x1c0(%eax),%edx
 850dff3:	8b 45 08             	mov    0x8(%ebp),%eax
 850dff6:	88 90 e7 02 00 00    	mov    %dl,0x2e7(%eax)
 850dffc:	8b 45 0c             	mov    0xc(%ebp),%eax
 850dfff:	8b 90 c4 01 00 00    	mov    0x1c4(%eax),%edx
 850e005:	8b 45 08             	mov    0x8(%ebp),%eax
 850e008:	89 90 e8 02 00 00    	mov    %edx,0x2e8(%eax)
 850e00e:	8b 45 0c             	mov    0xc(%ebp),%eax
 850e011:	0f b6 90 d0 01 00 00 	movzbl 0x1d0(%eax),%edx
 850e018:	8b 45 08             	mov    0x8(%ebp),%eax
 850e01b:	88 90 ec 02 00 00    	mov    %dl,0x2ec(%eax)
 850e021:	8b 45 0c             	mov    0xc(%ebp),%eax
 850e024:	0f b7 90 80 03 00 00 	movzwl 0x380(%eax),%edx
 850e02b:	8b 45 08             	mov    0x8(%ebp),%eax
 850e02e:	66 89 90 b4 02 00 00 	mov    %dx,0x2b4(%eax)
 850e035:	8b 45 0c             	mov    0xc(%ebp),%eax
 850e038:	8b 90 00 01 00 00    	mov    0x100(%eax),%edx
 850e03e:	8b 45 08             	mov    0x8(%ebp),%eax
 850e041:	89 50 74             	mov    %edx,0x74(%eax)
 850e044:	8b 45 0c             	mov    0xc(%ebp),%eax
 850e047:	0f b6 90 04 01 00 00 	movzbl 0x104(%eax),%edx
 850e04e:	8b 45 08             	mov    0x8(%ebp),%eax
 850e051:	88 50 78             	mov    %dl,0x78(%eax)
 850e054:	8b 45 08             	mov    0x8(%ebp),%eax
 850e057:	c7 40 58 ff ff ff ff 	movl   $0xffffffff,0x58(%eax)
 850e05e:	8b 45 08             	mov    0x8(%ebp),%eax
 850e061:	c6 40 79 00          	movb   $0x0,0x79(%eax)
 850e065:	8b 45 0c             	mov    0xc(%ebp),%eax
 850e068:	8b 90 c8 00 00 00    	mov    0xc8(%eax),%edx
 850e06e:	8b 45 08             	mov    0x8(%ebp),%eax
 850e071:	89 90 80 00 00 00    	mov    %edx,0x80(%eax)
 850e077:	8b 45 0c             	mov    0xc(%ebp),%eax
 850e07a:	8b 90 cc 00 00 00    	mov    0xcc(%eax),%edx
 850e080:	8b 45 08             	mov    0x8(%ebp),%eax
 850e083:	89 50 7c             	mov    %edx,0x7c(%eax)
 850e086:	8b 45 0c             	mov    0xc(%ebp),%eax
 850e089:	0f b6 90 d0 00 00 00 	movzbl 0xd0(%eax),%edx
 850e090:	8b 45 08             	mov    0x8(%ebp),%eax
 850e093:	88 90 87 00 00 00    	mov    %dl,0x87(%eax)
 850e099:	8b 45 0c             	mov    0xc(%ebp),%eax
 850e09c:	8d 50 6c             	lea    0x6c(%eax),%edx
 850e09f:	8b 45 08             	mov    0x8(%ebp),%eax
 850e0a2:	05 b0 00 00 00       	add    $0xb0,%eax
 850e0a7:	89 54 24 04          	mov    %edx,0x4(%esp)
 850e0ab:	89 04 24             	mov    %eax,(%esp)
 850e0ae:	e8 4d 9c 1f 00       	call   8707d00 <_ZNSsaSERKSs>
 850e0b3:	8b 45 08             	mov    0x8(%ebp),%eax
 850e0b6:	8b 55 0c             	mov    0xc(%ebp),%edx
 850e0b9:	8b 8a 05 01 00 00    	mov    0x105(%edx),%ecx
 850e0bf:	89 88 b4 00 00 00    	mov    %ecx,0xb4(%eax)
 850e0c5:	8b 8a 09 01 00 00    	mov    0x109(%edx),%ecx
 850e0cb:	89 88 b8 00 00 00    	mov    %ecx,0xb8(%eax)
 850e0d1:	0f b6 92 0d 01 00 00 	movzbl 0x10d(%edx),%edx
 850e0d8:	88 90 bc 00 00 00    	mov    %dl,0xbc(%eax)
 850e0de:	8b 45 0c             	mov    0xc(%ebp),%eax
 850e0e1:	05 05 01 00 00       	add    $0x105,%eax
 850e0e6:	89 04 24             	mov    %eax,(%esp)
 850e0e9:	e8 36 59 00 00       	call   8513a24 <_ZN20STSpecialMonsterDrop5clearEv>
 850e0ee:	8b 45 0c             	mov    0xc(%ebp),%eax
 850e0f1:	0f b6 90 0e 01 00 00 	movzbl 0x10e(%eax),%edx
 850e0f8:	8b 45 08             	mov    0x8(%ebp),%eax
 850e0fb:	88 90 f0 02 00 00    	mov    %dl,0x2f0(%eax)
 850e101:	8b 45 0c             	mov    0xc(%ebp),%eax
 850e104:	0f b7 90 94 03 00 00 	movzwl 0x394(%eax),%edx
 850e10b:	8b 45 08             	mov    0x8(%ebp),%eax
 850e10e:	66 89 90 ee 02 00 00 	mov    %dx,0x2ee(%eax)
 850e115:	8b 45 0c             	mov    0xc(%ebp),%eax
 850e118:	8d 90 f4 03 00 00    	lea    0x3f4(%eax),%edx
 850e11e:	8b 45 08             	mov    0x8(%ebp),%eax
 850e121:	05 f4 02 00 00       	add    $0x2f4,%eax
 850e126:	89 54 24 04          	mov    %edx,0x4(%esp)
 850e12a:	89 04 24             	mov    %eax,(%esp)
 850e12d:	e8 44 8a 00 00       	call   8516b76 <_ZNSt3mapI21STEnchantSystemMapKey22STEnchantSystemMapDataSt4lessIS0_ESaISt4pairIKS0_S1_EEEaSERKS8_>
 850e132:	8b 45 0c             	mov    0xc(%ebp),%eax
 850e135:	0f b6 90 0c 04 00 00 	movzbl 0x40c(%eax),%edx
 850e13c:	8b 45 08             	mov    0x8(%ebp),%eax
 850e13f:	88 90 0c 03 00 00    	mov    %dl,0x30c(%eax)
 850e145:	8b 45 0c             	mov    0xc(%ebp),%eax
 850e148:	8d 90 0d 04 00 00    	lea    0x40d(%eax),%edx
 850e14e:	8b 45 08             	mov    0x8(%ebp),%eax
 850e151:	05 0d 03 00 00       	add    $0x30d,%eax
 850e156:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 850e15d:	00 
 850e15e:	89 54 24 04          	mov    %edx,0x4(%esp)
 850e162:	89 04 24             	mov    %eax,(%esp)
 850e165:	e8 36 f7 b6 ff       	call   807d8a0 <memcpy@plt>
 850e16a:	8b 45 0c             	mov    0xc(%ebp),%eax
 850e16d:	0f b6 90 96 03 00 00 	movzbl 0x396(%eax),%edx
 850e174:	8b 45 08             	mov    0x8(%ebp),%eax
 850e177:	88 90 0f 03 00 00    	mov    %dl,0x30f(%eax)
 850e17d:	8b 45 0c             	mov    0xc(%ebp),%eax
 850e180:	0f b7 90 98 03 00 00 	movzwl 0x398(%eax),%edx
 850e187:	8b 45 08             	mov    0x8(%ebp),%eax
 850e18a:	66 89 90 10 03 00 00 	mov    %dx,0x310(%eax)
 850e191:	8b 45 0c             	mov    0xc(%ebp),%eax
 850e194:	0f b6 90 9a 03 00 00 	movzbl 0x39a(%eax),%edx
 850e19b:	8b 45 08             	mov    0x8(%ebp),%eax
 850e19e:	88 90 12 03 00 00    	mov    %dl,0x312(%eax)
 850e1a4:	8b 45 0c             	mov    0xc(%ebp),%eax
 850e1a7:	0f b6 90 9b 03 00 00 	movzbl 0x39b(%eax),%edx
 850e1ae:	8b 45 08             	mov    0x8(%ebp),%eax
 850e1b1:	88 90 13 03 00 00    	mov    %dl,0x313(%eax)
 850e1b7:	8b 45 0c             	mov    0xc(%ebp),%eax
 850e1ba:	8b 80 9c 03 00 00    	mov    0x39c(%eax),%eax
 850e1c0:	89 c2                	mov    %eax,%edx
 850e1c2:	8b 45 08             	mov    0x8(%ebp),%eax
 850e1c5:	66 89 90 14 03 00 00 	mov    %dx,0x314(%eax)
 850e1cc:	8b 45 0c             	mov    0xc(%ebp),%eax
 850e1cf:	0f b6 90 a0 03 00 00 	movzbl 0x3a0(%eax),%edx
 850e1d6:	8b 45 08             	mov    0x8(%ebp),%eax
 850e1d9:	88 90 16 03 00 00    	mov    %dl,0x316(%eax)
 850e1df:	8b 45 0c             	mov    0xc(%ebp),%eax
 850e1e2:	0f b6 90 38 04 00 00 	movzbl 0x438(%eax),%edx
 850e1e9:	8b 45 08             	mov    0x8(%ebp),%eax
 850e1ec:	88 90 20 03 00 00    	mov    %dl,0x320(%eax)
 850e1f2:	8b 45 08             	mov    0x8(%ebp),%eax
 850e1f5:	0f b6 80 20 03 00 00 	movzbl 0x320(%eax),%eax
 850e1fc:	84 c0                	test   %al,%al
 850e1fe:	74 24                	je     850e224 <_ZN14CStackableItem8set_itemER17STStackableScript+0xa06>
 850e200:	8b 45 0c             	mov    0xc(%ebp),%eax
 850e203:	8b 90 3c 04 00 00    	mov    0x43c(%eax),%edx
 850e209:	8b 45 08             	mov    0x8(%ebp),%eax
 850e20c:	89 90 18 03 00 00    	mov    %edx,0x318(%eax)
 850e212:	8b 45 0c             	mov    0xc(%ebp),%eax
 850e215:	8b 90 40 04 00 00    	mov    0x440(%eax),%edx
 850e21b:	8b 45 08             	mov    0x8(%ebp),%eax
 850e21e:	89 90 1c 03 00 00    	mov    %edx,0x31c(%eax)
 850e224:	8b 45 0c             	mov    0xc(%ebp),%eax
 850e227:	0f b6 90 0f 01 00 00 	movzbl 0x10f(%eax),%edx
 850e22e:	8b 45 08             	mov    0x8(%ebp),%eax
 850e231:	88 90 bd 00 00 00    	mov    %dl,0xbd(%eax)
 850e237:	8b 45 0c             	mov    0xc(%ebp),%eax
 850e23a:	8d 90 10 01 00 00    	lea    0x110(%eax),%edx
 850e240:	8b 45 08             	mov    0x8(%ebp),%eax
 850e243:	05 c0 00 00 00       	add    $0xc0,%eax
 850e248:	89 54 24 04          	mov    %edx,0x4(%esp)
 850e24c:	89 04 24             	mov    %eax,(%esp)
 850e24f:	e8 38 0e e0 ff       	call   830f08c <_ZNSt6vectorISt4pairIiiESaIS1_EEaSERKS3_>
 850e254:	8b 45 08             	mov    0x8(%ebp),%eax
 850e257:	c7 80 cc 00 00 00 00 	movl   $0x0,0xcc(%eax)
 850e25e:	00 00 00 
 850e261:	8b 45 0c             	mov    0xc(%ebp),%eax
 850e264:	0f b6 90 d0 03 00 00 	movzbl 0x3d0(%eax),%edx
 850e26b:	8b 45 08             	mov    0x8(%ebp),%eax
 850e26e:	88 90 d0 00 00 00    	mov    %dl,0xd0(%eax)
 850e274:	8b 45 0c             	mov    0xc(%ebp),%eax
 850e277:	0f b6 90 d1 03 00 00 	movzbl 0x3d1(%eax),%edx
 850e27e:	8b 45 08             	mov    0x8(%ebp),%eax
 850e281:	88 90 21 03 00 00    	mov    %dl,0x321(%eax)
 850e287:	8b 45 0c             	mov    0xc(%ebp),%eax
 850e28a:	8d 90 dc 00 00 00    	lea    0xdc(%eax),%edx
 850e290:	8b 45 08             	mov    0x8(%ebp),%eax
 850e293:	05 d4 00 00 00       	add    $0xd4,%eax
 850e298:	89 54 24 04          	mov    %edx,0x4(%esp)
 850e29c:	89 04 24             	mov    %eax,(%esp)
 850e29f:	e8 f0 88 00 00       	call   8516b94 <_ZNSt3setIiSt4lessIiESaIiEEaSERKS3_>
 850e2a4:	8b 45 0c             	mov    0xc(%ebp),%eax
 850e2a7:	8b 50 64             	mov    0x64(%eax),%edx
 850e2aa:	8b 45 08             	mov    0x8(%ebp),%eax
 850e2ad:	89 90 ec 00 00 00    	mov    %edx,0xec(%eax)
 850e2b3:	8b 45 0c             	mov    0xc(%ebp),%eax
 850e2b6:	8b 90 44 04 00 00    	mov    0x444(%eax),%edx
 850e2bc:	8b 45 08             	mov    0x8(%ebp),%eax
 850e2bf:	89 90 f0 00 00 00    	mov    %edx,0xf0(%eax)
 850e2c5:	8b 45 0c             	mov    0xc(%ebp),%eax
 850e2c8:	8b 90 48 04 00 00    	mov    0x448(%eax),%edx
 850e2ce:	8b 45 08             	mov    0x8(%ebp),%eax
 850e2d1:	89 90 f4 00 00 00    	mov    %edx,0xf4(%eax)
 850e2d7:	8b 45 0c             	mov    0xc(%ebp),%eax
 850e2da:	8b 90 50 01 00 00    	mov    0x150(%eax),%edx
 850e2e0:	8b 45 08             	mov    0x8(%ebp),%eax
 850e2e3:	89 90 fc 00 00 00    	mov    %edx,0xfc(%eax)
 850e2e9:	8b 45 0c             	mov    0xc(%ebp),%eax
 850e2ec:	8b 90 54 01 00 00    	mov    0x154(%eax),%edx
 850e2f2:	8b 45 08             	mov    0x8(%ebp),%eax
 850e2f5:	89 90 00 01 00 00    	mov    %edx,0x100(%eax)
 850e2fb:	8b 45 08             	mov    0x8(%ebp),%eax
 850e2fe:	05 04 01 00 00       	add    $0x104,%eax
 850e303:	89 04 24             	mov    %eax,(%esp)
 850e306:	e8 a7 88 00 00       	call   8516bb2 <_ZNSt6vectorIN12STItemScript10SEXPERTJOB7SUSABLEESaIS2_EE5clearEv>
 850e30b:	8b 45 0c             	mov    0xc(%ebp),%eax
 850e30e:	8d 90 58 01 00 00    	lea    0x158(%eax),%edx
 850e314:	8b 45 08             	mov    0x8(%ebp),%eax
 850e317:	05 04 01 00 00       	add    $0x104,%eax
 850e31c:	89 54 24 04          	mov    %edx,0x4(%esp)
 850e320:	89 04 24             	mov    %eax,(%esp)
 850e323:	e8 a6 88 00 00       	call   8516bce <_ZNSt6vectorIN12STItemScript10SEXPERTJOB7SUSABLEESaIS2_EEaSERKS4_>
 850e328:	8b 45 0c             	mov    0xc(%ebp),%eax
 850e32b:	8b 90 4c 04 00 00    	mov    0x44c(%eax),%edx
 850e331:	8b 45 08             	mov    0x8(%ebp),%eax
 850e334:	89 90 24 03 00 00    	mov    %edx,0x324(%eax)
 850e33a:	8b 45 0c             	mov    0xc(%ebp),%eax
 850e33d:	8b 90 54 04 00 00    	mov    0x454(%eax),%edx
 850e343:	8b 45 08             	mov    0x8(%ebp),%eax
 850e346:	89 90 28 03 00 00    	mov    %edx,0x328(%eax)
 850e34c:	8b 45 0c             	mov    0xc(%ebp),%eax
 850e34f:	8b 90 50 04 00 00    	mov    0x450(%eax),%edx
 850e355:	8b 45 08             	mov    0x8(%ebp),%eax
 850e358:	89 90 2c 03 00 00    	mov    %edx,0x32c(%eax)
 850e35e:	8b 45 0c             	mov    0xc(%ebp),%eax
 850e361:	8b 90 58 04 00 00    	mov    0x458(%eax),%edx
 850e367:	8b 45 08             	mov    0x8(%ebp),%eax
 850e36a:	89 90 30 03 00 00    	mov    %edx,0x330(%eax)
 850e370:	8b 45 0c             	mov    0xc(%ebp),%eax
 850e373:	8b 90 5c 04 00 00    	mov    0x45c(%eax),%edx
 850e379:	8b 45 08             	mov    0x8(%ebp),%eax
 850e37c:	89 90 34 03 00 00    	mov    %edx,0x334(%eax)
 850e382:	8b 45 0c             	mov    0xc(%ebp),%eax
 850e385:	8b 90 60 04 00 00    	mov    0x460(%eax),%edx
 850e38b:	8b 45 08             	mov    0x8(%ebp),%eax
 850e38e:	89 90 38 03 00 00    	mov    %edx,0x338(%eax)
 850e394:	8b 45 0c             	mov    0xc(%ebp),%eax
 850e397:	8b 90 64 04 00 00    	mov    0x464(%eax),%edx
 850e39d:	8b 45 08             	mov    0x8(%ebp),%eax
 850e3a0:	89 90 3c 03 00 00    	mov    %edx,0x33c(%eax)
 850e3a6:	8b 45 0c             	mov    0xc(%ebp),%eax
 850e3a9:	8d 90 1c 01 00 00    	lea    0x11c(%eax),%edx
 850e3af:	8b 45 08             	mov    0x8(%ebp),%eax
 850e3b2:	05 28 01 00 00       	add    $0x128,%eax
 850e3b7:	89 54 24 04          	mov    %edx,0x4(%esp)
 850e3bb:	89 04 24             	mov    %eax,(%esp)
 850e3be:	e8 59 8a 00 00       	call   8516e1c <_ZNSt3setIN12STItemScript18ENUM_ITEM_CATEGORYESt4lessIS1_ESaIS1_EEaSERKS5_>
 850e3c3:	8b 45 0c             	mov    0xc(%ebp),%eax
 850e3c6:	8b 80 74 04 00 00    	mov    0x474(%eax),%eax
 850e3cc:	85 c0                	test   %eax,%eax
 850e3ce:	74 25                	je     850e3f5 <_ZN14CStackableItem8set_itemER17STStackableScript+0xbd7>
 850e3d0:	8b 45 0c             	mov    0xc(%ebp),%eax
 850e3d3:	8b b0 74 04 00 00    	mov    0x474(%eax),%esi
 850e3d9:	8b 45 0c             	mov    0xc(%ebp),%eax
 850e3dc:	8b 00                	mov    (%eax),%eax
 850e3de:	89 c3                	mov    %eax,%ebx
 850e3e0:	e8 b6 dd bb ff       	call   80cc19b <_Z14G_CDataManagerv>
 850e3e5:	89 74 24 08          	mov    %esi,0x8(%esp)
 850e3e9:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 850e3ed:	89 04 24             	mov    %eax,(%esp)
 850e3f0:	e8 85 17 e5 ff       	call   835fb7a <_ZN12CDataManager20set_lottery_use_costEjj>
 850e3f5:	8b 45 0c             	mov    0xc(%ebp),%eax
 850e3f8:	8b 90 78 04 00 00    	mov    0x478(%eax),%edx
 850e3fe:	8b 45 08             	mov    0x8(%ebp),%eax
 850e401:	89 90 40 03 00 00    	mov    %edx,0x340(%eax)
 850e407:	8b 45 0c             	mov    0xc(%ebp),%eax
 850e40a:	0f b6 90 a1 03 00 00 	movzbl 0x3a1(%eax),%edx
 850e411:	8b 45 08             	mov    0x8(%ebp),%eax
 850e414:	88 90 44 03 00 00    	mov    %dl,0x344(%eax)
 850e41a:	8b 45 0c             	mov    0xc(%ebp),%eax
 850e41d:	8d 90 a4 03 00 00    	lea    0x3a4(%eax),%edx
 850e423:	8b 45 08             	mov    0x8(%ebp),%eax
 850e426:	05 48 03 00 00       	add    $0x348,%eax
 850e42b:	89 54 24 04          	mov    %edx,0x4(%esp)
 850e42f:	89 04 24             	mov    %eax,(%esp)
 850e432:	e8 89 42 c4 ff       	call   81526c0 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEEaSERKS6_>
 850e437:	8b 45 0c             	mov    0xc(%ebp),%eax
 850e43a:	8b 90 78 01 00 00    	mov    0x178(%eax),%edx
 850e440:	8b 45 08             	mov    0x8(%ebp),%eax
 850e443:	89 90 48 01 00 00    	mov    %edx,0x148(%eax)
 850e449:	8b 45 0c             	mov    0xc(%ebp),%eax
 850e44c:	0f b6 90 7c 01 00 00 	movzbl 0x17c(%eax),%edx
 850e453:	8b 45 08             	mov    0x8(%ebp),%eax
 850e456:	88 90 4c 01 00 00    	mov    %dl,0x14c(%eax)
 850e45c:	8b 45 0c             	mov    0xc(%ebp),%eax
 850e45f:	8d 90 80 01 00 00    	lea    0x180(%eax),%edx
 850e465:	8b 45 08             	mov    0x8(%ebp),%eax
 850e468:	05 50 01 00 00       	add    $0x150,%eax
 850e46d:	89 54 24 04          	mov    %edx,0x4(%esp)
 850e471:	89 04 24             	mov    %eax,(%esp)
 850e474:	e8 87 98 1f 00       	call   8707d00 <_ZNSsaSERKSs>
 850e479:	8b 45 0c             	mov    0xc(%ebp),%eax
 850e47c:	8d 90 84 01 00 00    	lea    0x184(%eax),%edx
 850e482:	8b 45 08             	mov    0x8(%ebp),%eax
 850e485:	05 54 01 00 00       	add    $0x154,%eax
 850e48a:	89 54 24 04          	mov    %edx,0x4(%esp)
 850e48e:	89 04 24             	mov    %eax,(%esp)
 850e491:	e8 6a 98 1f 00       	call   8707d00 <_ZNSsaSERKSs>
 850e496:	8b 45 0c             	mov    0xc(%ebp),%eax
 850e499:	8d 90 88 01 00 00    	lea    0x188(%eax),%edx
 850e49f:	8b 45 08             	mov    0x8(%ebp),%eax
 850e4a2:	05 58 01 00 00       	add    $0x158,%eax
 850e4a7:	89 54 24 04          	mov    %edx,0x4(%esp)
 850e4ab:	89 04 24             	mov    %eax,(%esp)
 850e4ae:	e8 4d 98 1f 00       	call   8707d00 <_ZNSsaSERKSs>
 850e4b3:	8b 45 0c             	mov    0xc(%ebp),%eax
 850e4b6:	05 9c 01 00 00       	add    $0x19c,%eax
 850e4bb:	89 04 24             	mov    %eax,(%esp)
 850e4be:	e8 e1 9a c8 ff       	call   8197fa4 <_ZNKSt6vectorI10CRabbitBoxSaIS0_EE5emptyEv>
 850e4c3:	83 f0 01             	xor    $0x1,%eax
 850e4c6:	84 c0                	test   %al,%al
 850e4c8:	0f 84 99 00 00 00    	je     850e567 <_ZN14CStackableItem8set_itemER17STStackableScript+0xd49>
 850e4ce:	8b 45 0c             	mov    0xc(%ebp),%eax
 850e4d1:	05 9c 01 00 00       	add    $0x19c,%eax
 850e4d6:	89 04 24             	mov    %eax,(%esp)
 850e4d9:	e8 5c 89 00 00       	call   8516e3a <_ZNKSt6vectorI10CRabbitBoxSaIS0_EE4sizeEv>
 850e4de:	8b 55 08             	mov    0x8(%ebp),%edx
 850e4e1:	81 c2 68 01 00 00    	add    $0x168,%edx
 850e4e7:	89 44 24 04          	mov    %eax,0x4(%esp)
 850e4eb:	89 14 24             	mov    %edx,(%esp)
 850e4ee:	e8 69 89 00 00       	call   8516e5c <_ZNSt6vectorI10CRabbitBoxSaIS0_EE7reserveEj>
 850e4f3:	8b 45 08             	mov    0x8(%ebp),%eax
 850e4f6:	8d 90 68 01 00 00    	lea    0x168(%eax),%edx
 850e4fc:	8d 45 b8             	lea    -0x48(%ebp),%eax
 850e4ff:	89 54 24 04          	mov    %edx,0x4(%esp)
 850e503:	89 04 24             	mov    %eax,(%esp)
 850e506:	e8 88 8a 00 00       	call   8516f93 <_ZSt13back_inserterISt6vectorI10CRabbitBoxSaIS1_EEESt20back_insert_iteratorIT_ERS5_>
 850e50b:	83 ec 04             	sub    $0x4,%esp
 850e50e:	8b 45 0c             	mov    0xc(%ebp),%eax
 850e511:	8d 90 9c 01 00 00    	lea    0x19c(%eax),%edx
 850e517:	8d 45 bc             	lea    -0x44(%ebp),%eax
 850e51a:	89 54 24 04          	mov    %edx,0x4(%esp)
 850e51e:	89 04 24             	mov    %eax,(%esp)
 850e521:	e8 f4 9a c8 ff       	call   819801a <_ZNSt6vectorI10CRabbitBoxSaIS0_EE3endEv>
 850e526:	83 ec 04             	sub    $0x4,%esp
 850e529:	8b 45 0c             	mov    0xc(%ebp),%eax
 850e52c:	8d 90 9c 01 00 00    	lea    0x19c(%eax),%edx
 850e532:	8d 45 c0             	lea    -0x40(%ebp),%eax
 850e535:	89 54 24 04          	mov    %edx,0x4(%esp)
 850e539:	89 04 24             	mov    %eax,(%esp)
 850e53c:	e8 b5 9a c8 ff       	call   8197ff6 <_ZNSt6vectorI10CRabbitBoxSaIS0_EE5beginEv>
 850e541:	83 ec 04             	sub    $0x4,%esp
 850e544:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 850e547:	8b 55 b8             	mov    -0x48(%ebp),%edx
 850e54a:	89 54 24 0c          	mov    %edx,0xc(%esp)
 850e54e:	8b 55 bc             	mov    -0x44(%ebp),%edx
 850e551:	89 54 24 08          	mov    %edx,0x8(%esp)
 850e555:	8b 55 c0             	mov    -0x40(%ebp),%edx
 850e558:	89 54 24 04          	mov    %edx,0x4(%esp)
 850e55c:	89 04 24             	mov    %eax,(%esp)
 850e55f:	e8 52 8a 00 00       	call   8516fb6 <_ZSt4copyIN9__gnu_cxx17__normal_iteratorIP10CRabbitBoxSt6vectorIS2_SaIS2_EEEESt20back_insert_iteratorIS6_EET0_T_SB_SA_>
 850e564:	83 ec 04             	sub    $0x4,%esp
 850e567:	8b 45 0c             	mov    0xc(%ebp),%eax
 850e56a:	05 90 01 00 00       	add    $0x190,%eax
 850e56f:	89 04 24             	mov    %eax,(%esp)
 850e572:	e8 e9 e3 c0 ff       	call   811c960 <_ZNKSt6vectorIiSaIiEE5emptyEv>
 850e577:	83 f0 01             	xor    $0x1,%eax
 850e57a:	84 c0                	test   %al,%al
 850e57c:	0f 84 99 00 00 00    	je     850e61b <_ZN14CStackableItem8set_itemER17STStackableScript+0xdfd>
 850e582:	8b 45 0c             	mov    0xc(%ebp),%eax
 850e585:	05 90 01 00 00       	add    $0x190,%eax
 850e58a:	89 04 24             	mov    %eax,(%esp)
 850e58d:	e8 2e fc b7 ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 850e592:	8b 55 08             	mov    0x8(%ebp),%edx
 850e595:	81 c2 5c 01 00 00    	add    $0x15c,%edx
 850e59b:	89 44 24 04          	mov    %eax,0x4(%esp)
 850e59f:	89 14 24             	mov    %edx,(%esp)
 850e5a2:	e8 9d 08 c7 ff       	call   817ee44 <_ZNSt6vectorIiSaIiEE7reserveEj>
 850e5a7:	8b 45 08             	mov    0x8(%ebp),%eax
 850e5aa:	8d 90 5c 01 00 00    	lea    0x15c(%eax),%edx
 850e5b0:	8d 45 c8             	lea    -0x38(%ebp),%eax
 850e5b3:	89 54 24 04          	mov    %edx,0x4(%esp)
 850e5b7:	89 04 24             	mov    %eax,(%esp)
 850e5ba:	e8 5b 39 c0 ff       	call   8111f1a <_ZSt13back_inserterISt6vectorIiSaIiEEESt20back_insert_iteratorIT_ERS4_>
 850e5bf:	83 ec 04             	sub    $0x4,%esp
 850e5c2:	8b 45 0c             	mov    0xc(%ebp),%eax
 850e5c5:	8d 90 90 01 00 00    	lea    0x190(%eax),%edx
 850e5cb:	8d 45 cc             	lea    -0x34(%ebp),%eax
 850e5ce:	89 54 24 04          	mov    %edx,0x4(%esp)
 850e5d2:	89 04 24             	mov    %eax,(%esp)
 850e5d5:	e8 92 fc b7 ff       	call   808e26c <_ZNSt6vectorIiSaIiEE3endEv>
 850e5da:	83 ec 04             	sub    $0x4,%esp
 850e5dd:	8b 45 0c             	mov    0xc(%ebp),%eax
 850e5e0:	8d 90 90 01 00 00    	lea    0x190(%eax),%edx
 850e5e6:	8d 45 d0             	lea    -0x30(%ebp),%eax
 850e5e9:	89 54 24 04          	mov    %edx,0x4(%esp)
 850e5ed:	89 04 24             	mov    %eax,(%esp)
 850e5f0:	e8 53 fc b7 ff       	call   808e248 <_ZNSt6vectorIiSaIiEE5beginEv>
 850e5f5:	83 ec 04             	sub    $0x4,%esp
 850e5f8:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 850e5fb:	8b 55 c8             	mov    -0x38(%ebp),%edx
 850e5fe:	89 54 24 0c          	mov    %edx,0xc(%esp)
 850e602:	8b 55 cc             	mov    -0x34(%ebp),%edx
 850e605:	89 54 24 08          	mov    %edx,0x8(%esp)
 850e609:	8b 55 d0             	mov    -0x30(%ebp),%edx
 850e60c:	89 54 24 04          	mov    %edx,0x4(%esp)
 850e610:	89 04 24             	mov    %eax,(%esp)
 850e613:	e8 25 39 c0 ff       	call   8111f3d <_ZSt4copyIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEESt20back_insert_iteratorIS5_EET0_T_SA_S9_>
 850e618:	83 ec 04             	sub    $0x4,%esp
 850e61b:	8b 45 0c             	mov    0xc(%ebp),%eax
 850e61e:	8b 90 18 04 00 00    	mov    0x418(%eax),%edx
 850e624:	8b 45 08             	mov    0x8(%ebp),%eax
 850e627:	89 90 60 03 00 00    	mov    %edx,0x360(%eax)
 850e62d:	8b 45 0c             	mov    0xc(%ebp),%eax
 850e630:	0f b6 90 2c 03 00 00 	movzbl 0x32c(%eax),%edx
 850e637:	8b 45 08             	mov    0x8(%ebp),%eax
 850e63a:	88 90 64 03 00 00    	mov    %dl,0x364(%eax)
 850e640:	8b 45 08             	mov    0x8(%ebp),%eax
 850e643:	8b 55 0c             	mov    0xc(%ebp),%edx
 850e646:	0f b7 8a 7c 04 00 00 	movzwl 0x47c(%edx),%ecx
 850e64d:	66 89 88 65 03 00 00 	mov    %cx,0x365(%eax)
 850e654:	0f b6 92 7e 04 00 00 	movzbl 0x47e(%edx),%edx
 850e65b:	88 90 67 03 00 00    	mov    %dl,0x367(%eax)
 850e661:	8b 45 0c             	mov    0xc(%ebp),%eax
 850e664:	8d 90 80 04 00 00    	lea    0x480(%eax),%edx
 850e66a:	8b 45 08             	mov    0x8(%ebp),%eax
 850e66d:	05 68 03 00 00       	add    $0x368,%eax
 850e672:	89 54 24 04          	mov    %edx,0x4(%esp)
 850e676:	89 04 24             	mov    %eax,(%esp)
 850e679:	e8 16 85 00 00       	call   8516b94 <_ZNSt3setIiSt4lessIiESaIiEEaSERKS3_>
 850e67e:	8b 45 0c             	mov    0xc(%ebp),%eax
 850e681:	8d 90 98 04 00 00    	lea    0x498(%eax),%edx
 850e687:	8b 45 08             	mov    0x8(%ebp),%eax
 850e68a:	05 80 03 00 00       	add    $0x380,%eax
 850e68f:	89 54 24 04          	mov    %edx,0x4(%esp)
 850e693:	89 04 24             	mov    %eax,(%esp)
 850e696:	e8 f9 84 00 00       	call   8516b94 <_ZNSt3setIiSt4lessIiESaIiEEaSERKS3_>
 850e69b:	8b 45 0c             	mov    0xc(%ebp),%eax
 850e69e:	0f b6 90 b0 04 00 00 	movzbl 0x4b0(%eax),%edx
 850e6a5:	8b 45 08             	mov    0x8(%ebp),%eax
 850e6a8:	88 90 98 03 00 00    	mov    %dl,0x398(%eax)
 850e6ae:	8b 45 0c             	mov    0xc(%ebp),%eax
 850e6b1:	8b 90 e8 01 00 00    	mov    0x1e8(%eax),%edx
 850e6b7:	8b 45 08             	mov    0x8(%ebp),%eax
 850e6ba:	89 90 9c 03 00 00    	mov    %edx,0x39c(%eax)
 850e6c0:	8b 45 0c             	mov    0xc(%ebp),%eax
 850e6c3:	8d 90 ec 01 00 00    	lea    0x1ec(%eax),%edx
 850e6c9:	8b 45 08             	mov    0x8(%ebp),%eax
 850e6cc:	05 a0 03 00 00       	add    $0x3a0,%eax
 850e6d1:	89 54 24 04          	mov    %edx,0x4(%esp)
 850e6d5:	89 04 24             	mov    %eax,(%esp)
 850e6d8:	e8 f5 e8 bb ff       	call   80ccfd2 <_ZNSt6vectorIiSaIiEEaSERKS1_>
 850e6dd:	8b 45 0c             	mov    0xc(%ebp),%eax
 850e6e0:	8d 90 f8 01 00 00    	lea    0x1f8(%eax),%edx
 850e6e6:	8b 45 08             	mov    0x8(%ebp),%eax
 850e6e9:	05 ac 03 00 00       	add    $0x3ac,%eax
 850e6ee:	89 54 24 04          	mov    %edx,0x4(%esp)
 850e6f2:	89 04 24             	mov    %eax,(%esp)
 850e6f5:	e8 1a 89 00 00       	call   8517014 <_ZNSt6vectorIN15StackableAction11UsablePlaceESaIS1_EEaSERKS3_>
 850e6fa:	8b 45 08             	mov    0x8(%ebp),%eax
 850e6fd:	8b 80 9c 03 00 00    	mov    0x39c(%eax),%eax
 850e703:	83 f8 2c             	cmp    $0x2c,%eax
 850e706:	75 74                	jne    850e77c <_ZN14CStackableItem8set_itemER17STStackableScript+0xf5e>
 850e708:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 850e70f:	eb 51                	jmp    850e762 <_ZN14CStackableItem8set_itemER17STStackableScript+0xf44>
 850e711:	8b 45 08             	mov    0x8(%ebp),%eax
 850e714:	8d 90 a0 03 00 00    	lea    0x3a0(%eax),%edx
 850e71a:	8b 45 e0             	mov    -0x20(%ebp),%eax
 850e71d:	89 44 24 04          	mov    %eax,0x4(%esp)
 850e721:	89 14 24             	mov    %edx,(%esp)
 850e724:	e8 b3 fa b7 ff       	call   808e1dc <_ZNSt6vectorIiSaIiEEixEj>
 850e729:	8b 18                	mov    (%eax),%ebx
 850e72b:	e8 6b da bb ff       	call   80cc19b <_Z14G_CDataManagerv>
 850e730:	8b 40 28             	mov    0x28(%eax),%eax
 850e733:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 850e737:	89 04 24             	mov    %eax,(%esp)
 850e73a:	e8 dd 70 bd ff       	call   80e581c <_ZN21CChattingEmoticonList13find_emoticonEi>
 850e73f:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 850e742:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 850e745:	8b 00                	mov    (%eax),%eax
 850e747:	83 c0 18             	add    $0x18,%eax
 850e74a:	8b 10                	mov    (%eax),%edx
 850e74c:	8b 45 08             	mov    0x8(%ebp),%eax
 850e74f:	8b 40 04             	mov    0x4(%eax),%eax
 850e752:	89 44 24 04          	mov    %eax,0x4(%esp)
 850e756:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 850e759:	89 04 24             	mov    %eax,(%esp)
 850e75c:	ff d2                	call   *%edx
 850e75e:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 850e762:	8b 45 08             	mov    0x8(%ebp),%eax
 850e765:	05 a0 03 00 00       	add    $0x3a0,%eax
 850e76a:	89 04 24             	mov    %eax,(%esp)
 850e76d:	e8 4e fa b7 ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 850e772:	3b 45 e0             	cmp    -0x20(%ebp),%eax
 850e775:	0f 97 c0             	seta   %al
 850e778:	84 c0                	test   %al,%al
 850e77a:	75 95                	jne    850e711 <_ZN14CStackableItem8set_itemER17STStackableScript+0xef3>
 850e77c:	8b 45 0c             	mov    0xc(%ebp),%eax
 850e77f:	8d 90 14 02 00 00    	lea    0x214(%eax),%edx
 850e785:	8b 45 08             	mov    0x8(%ebp),%eax
 850e788:	05 b8 03 00 00       	add    $0x3b8,%eax
 850e78d:	89 54 24 04          	mov    %edx,0x4(%esp)
 850e791:	89 04 24             	mov    %eax,(%esp)
 850e794:	e8 c9 8a 00 00       	call   8517262 <_ZNSt6vectorIN15StackableAction16UsableServerTypeESaIS1_EEaSERKS3_>
 850e799:	8b 45 0c             	mov    0xc(%ebp),%eax
 850e79c:	0f b6 90 05 02 00 00 	movzbl 0x205(%eax),%edx
 850e7a3:	8b 45 08             	mov    0x8(%ebp),%eax
 850e7a6:	88 90 c5 03 00 00    	mov    %dl,0x3c5(%eax)
 850e7ac:	8b 45 0c             	mov    0xc(%ebp),%eax
 850e7af:	0f b6 90 da 00 00 00 	movzbl 0xda(%eax),%edx
 850e7b6:	8b 45 08             	mov    0x8(%ebp),%eax
 850e7b9:	88 90 88 00 00 00    	mov    %dl,0x88(%eax)
 850e7bf:	8b 45 0c             	mov    0xc(%ebp),%eax
 850e7c2:	8b 90 20 02 00 00    	mov    0x220(%eax),%edx
 850e7c8:	8b 45 08             	mov    0x8(%ebp),%eax
 850e7cb:	89 90 8c 00 00 00    	mov    %edx,0x8c(%eax)
 850e7d1:	8b 45 0c             	mov    0xc(%ebp),%eax
 850e7d4:	8d 90 24 02 00 00    	lea    0x224(%eax),%edx
 850e7da:	8b 45 08             	mov    0x8(%ebp),%eax
 850e7dd:	05 90 00 00 00       	add    $0x90,%eax
 850e7e2:	89 54 24 04          	mov    %edx,0x4(%esp)
 850e7e6:	89 04 24             	mov    %eax,(%esp)
 850e7e9:	e8 e4 e7 bb ff       	call   80ccfd2 <_ZNSt6vectorIiSaIiEEaSERKS1_>
 850e7ee:	8b 45 0c             	mov    0xc(%ebp),%eax
 850e7f1:	8d 90 64 01 00 00    	lea    0x164(%eax),%edx
 850e7f7:	8b 45 08             	mov    0x8(%ebp),%eax
 850e7fa:	05 9c 00 00 00       	add    $0x9c,%eax
 850e7ff:	89 54 24 04          	mov    %edx,0x4(%esp)
 850e803:	89 04 24             	mov    %eax,(%esp)
 850e806:	e8 6f 69 00 00       	call   851517a <_ZN7DyeInfoaSERKS_>
 850e80b:	8b 45 0c             	mov    0xc(%ebp),%eax
 850e80e:	8b 80 b8 04 00 00    	mov    0x4b8(%eax),%eax
 850e814:	85 c0                	test   %eax,%eax
 850e816:	0f 95 c2             	setne  %dl
 850e819:	8b 45 08             	mov    0x8(%ebp),%eax
 850e81c:	88 90 c4 03 00 00    	mov    %dl,0x3c4(%eax)
 850e822:	8b 45 0c             	mov    0xc(%ebp),%eax
 850e825:	0f b6 90 d8 00 00 00 	movzbl 0xd8(%eax),%edx
 850e82c:	8b 45 08             	mov    0x8(%ebp),%eax
 850e82f:	88 90 44 01 00 00    	mov    %dl,0x144(%eax)
 850e835:	8b 45 08             	mov    0x8(%ebp),%eax
 850e838:	c7 80 40 01 00 00 00 	movl   $0x0,0x140(%eax)
 850e83f:	00 00 00 
 850e842:	8b 45 0c             	mov    0xc(%ebp),%eax
 850e845:	8b 90 68 04 00 00    	mov    0x468(%eax),%edx
 850e84b:	8b 45 08             	mov    0x8(%ebp),%eax
 850e84e:	89 90 d0 03 00 00    	mov    %edx,0x3d0(%eax)
 850e854:	8b 45 0c             	mov    0xc(%ebp),%eax
 850e857:	8b 90 6c 04 00 00    	mov    0x46c(%eax),%edx
 850e85d:	8b 45 08             	mov    0x8(%ebp),%eax
 850e860:	89 90 c8 03 00 00    	mov    %edx,0x3c8(%eax)
 850e866:	8b 45 08             	mov    0x8(%ebp),%eax
 850e869:	8b 80 c8 03 00 00    	mov    0x3c8(%eax),%eax
 850e86f:	83 f8 01             	cmp    $0x1,%eax
 850e872:	7e 1d                	jle    850e891 <_ZN14CStackableItem8set_itemER17STStackableScript+0x1073>
 850e874:	8b 45 0c             	mov    0xc(%ebp),%eax
 850e877:	8d 90 80 02 00 00    	lea    0x280(%eax),%edx
 850e87d:	8b 45 08             	mov    0x8(%ebp),%eax
 850e880:	05 40 02 00 00       	add    $0x240,%eax
 850e885:	89 54 24 04          	mov    %edx,0x4(%esp)
 850e889:	89 04 24             	mov    %eax,(%esp)
 850e88c:	e8 61 68 00 00       	call   85150f2 <_ZN20stStackableBooster_taSERKS_>
 850e891:	8b 45 0c             	mov    0xc(%ebp),%eax
 850e894:	8b 90 ac 01 00 00    	mov    0x1ac(%eax),%edx
 850e89a:	8b 45 08             	mov    0x8(%ebp),%eax
 850e89d:	89 90 cc 03 00 00    	mov    %edx,0x3cc(%eax)
 850e8a3:	8b 45 0c             	mov    0xc(%ebp),%eax
 850e8a6:	8b 90 08 05 00 00    	mov    0x508(%eax),%edx
 850e8ac:	8b 45 08             	mov    0x8(%ebp),%eax
 850e8af:	89 90 d4 03 00 00    	mov    %edx,0x3d4(%eax)
 850e8b5:	8b 45 0c             	mov    0xc(%ebp),%eax
 850e8b8:	8d 90 0c 05 00 00    	lea    0x50c(%eax),%edx
 850e8be:	8b 45 08             	mov    0x8(%ebp),%eax
 850e8c1:	05 d8 03 00 00       	add    $0x3d8,%eax
 850e8c6:	89 54 24 04          	mov    %edx,0x4(%esp)
 850e8ca:	89 04 24             	mov    %eax,(%esp)
 850e8cd:	e8 c2 82 00 00       	call   8516b94 <_ZNSt3setIiSt4lessIiESaIiEEaSERKS3_>
 850e8d2:	8d 65 f4             	lea    -0xc(%ebp),%esp
 850e8d5:	83 c4 00             	add    $0x0,%esp
 850e8d8:	5b                   	pop    %ebx
 850e8d9:	5e                   	pop    %esi
 850e8da:	5f                   	pop    %edi
 850e8db:	5d                   	pop    %ebp
 850e8dc:	c3                   	ret
 850e8dd:	90                   	nop

```

```c
// CStackableItem::set_item @ 0x850d81e

/* CStackableItem::set_item(STStackableScript&) */

void __thiscall CStackableItem::set_item(CStackableItem *this,STStackableScript *param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  char cVar3;
  time_t tVar4;
  CMTRand *this_00;
  uint uVar5;
  char *pcVar6;
  string *psVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  byte bVar13;
  int local_288 [3];
  char local_25c [500];
  ulong local_68;
  cMyTrace local_64 [16];
  int local_54 [2];
  vector local_4c [12];
  undefined1 local_40 [4];
  int local_3c;
  int local_38;
  undefined4 local_34;
  int local_30;
  uint local_2c;
  int local_28;
  uint local_24;
  int *local_20;
  
  bVar13 = 0;
  piVar12 = (int *)&stack0xfffffd84;
  local_288[2] = 0x850d836;
  tVar4 = time((time_t *)0x0);
  local_68 = tVar4 + *(int *)param_1;
  local_288[2] = 0x850d84f;
  this_00 = operator_new(0x9c8);
                    /* try { // try from 0850d85a to 0850d85e has its CatchHandler @ 0850d861 */
  local_288[2] = 0x850d85f;
  CMTRand::CMTRand(this_00,&local_68);
  *(CMTRand **)(this + 0x1e0) = this_00;
  *(undefined4 *)(this + 4) = *(undefined4 *)param_1;
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x10);
  this[0x60] = *(CStackableItem *)(param_1 + 0xfc);
  if (param_1[0x30] != (STStackableScript)0x0) {
    local_288[2] = 0x850d8ff;
    uVar5 = G_CDataManager();
    local_288[2] = 0x850d90b;
    CDataManager::set_AuctionRegFreeCeraItem(uVar5);
  }
  pcVar6 = local_25c;
  for (iVar11 = 0x7d; iVar11 != 0; iVar11 = iVar11 + -1) {
    pcVar6[0] = '\0';
    pcVar6[1] = '\0';
    pcVar6[2] = '\0';
    pcVar6[3] = '\0';
    pcVar6 = pcVar6 + ((uint)bVar13 * -2 + 1) * 4;
  }
  local_288[2] = 0x850d931;
  pcVar6 = (char *)std::string::c_str((string *)(param_1 + 0xac));
  local_288[2] = 0x850d943;
  strcpy(local_25c,pcVar6);
  local_288[2] = 0x850d953;
  pcVar6 = (char *)std::string::c_str((string *)(param_1 + 0xac));
  local_288[2] = 0x850d965;
  cVar3 = CodePage::script2Database(pcVar6,local_25c);
  if (cVar3 != '\x01') {
    local_288[2] = 0x850d97c;
    std::string::c_str((string *)(param_1 + 0xac));
    local_288[2] = 0x850d983;
    CodePage::database();
    local_288[2] = 0x850d98a;
    CodePage::script();
    local_288[2] = 0x850d9af;
    cMyTrace::cMyTrace(local_64,"void CStackableItem::set_item(STStackableScript&)",0x80,5);
    local_288[2] = 0x850d9de;
    cMyTrace::operator()(local_64,"Error!!! %s->%s [%s][%s][%d]");
  }
  local_288[2] = 0x850d9f6;
  std::string::operator=((string *)(this + 0x2c),local_25c);
  *(undefined4 *)(this + 0x6c) = *(undefined4 *)(param_1 + 0xf4);
  *(undefined4 *)(this + 0x70) = *(undefined4 *)(param_1 + 0xf8);
  *(undefined4 *)(this + 100) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x68) = *(undefined4 *)(param_1 + 0x4ec);
  *(undefined4 *)(this + 0x2cc) = *(undefined4 *)(param_1 + 0x18c);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0x2b0) = *(undefined4 *)(param_1 + 0x1e0);
  *(undefined4 *)(this + 0x2b8) = *(undefined4 *)(param_1 + 0x3cc);
  if (*(int *)(this + 0x2b0) == 3) {
    local_288[2] = 0x850dac8;
    createRecipeInfo((RecipeInfo *)(this + 0x174),(vector *)(param_1 + 0x88),(vector *)0x0);
    local_288[2] = 0x850dae5;
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator=
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x19c),
               (vector *)(param_1 + 0x3c0));
    local_288[2] = 0x850dafd;
    RecipeInfo::additionalInfo((RecipeInfo *)(this + 0x174),param_1);
  }
  if (*(int *)(this + 0x2b0) == 6) {
    local_288[2] = 0x850db28;
    createLotteryInfo((LotteryInfo *)(this + 0x1c0),(vector *)(param_1 + 0x88));
  }
  else if (*(int *)(this + 0x2b0) == 7) {
    local_288[2] = 0x850db58;
    createStackableLotteryInfo((LotteryInfo *)(this + 0x1c0),(vector *)(param_1 + 0x88));
  }
  else if (*(int *)(this + 0x2b0) == 0xd) {
    local_288[2] = 0x850db88;
    createStackableLotteryInfo((LotteryInfo *)(this + 0x1c0),(vector *)(param_1 + 0x88));
  }
  else if ((*(int *)(this + 0x2b0) == 0x1a) || (*(int *)(this + 0x2b0) == 0x1b)) {
    local_288[2] = 0x850dbe0;
    createStackableMultiBoxLotteryInfo
              ((MultiBoxLotteryInfo *)(this + 0x1e4),(vector *)(param_1 + 0x244),
               (vector *)(param_1 + 0x250),(vector *)(param_1 + 0x25c));
  }
  else if ((*(int *)(this + 0x2b0) == 0xe) || (*(int *)(this + 0x2b0) == 0x26)) {
    local_288[2] = 0x850dc22;
    std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>::operator=
              ((vector<STStackablePackageData,std::allocator<STStackablePackageData>> *)
               (this + 0x21c),(vector *)(param_1 + 0x268));
    local_288[2] = 0x850dc3f;
    std::
    vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>
    ::operator=((vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>
                 *)(this + 0x234),(vector *)(param_1 + 0x274));
    local_288[2] = 0x850dc4f;
    cVar3 = std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>::empty();
    if (cVar3 != '\x01') {
      local_288[2] = 0x850dc77;
      std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>::operator=
                ((vector<STStackablePackageData,std::allocator<STStackablePackageData>> *)
                 (this + 0x228),(vector *)(param_1 + 0x2a4));
      local_288[2] = 0x850dc87;
      std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>::clear
                ((vector<STStackablePackageData,std::allocator<STStackablePackageData>> *)
                 (param_1 + 0x2a4));
    }
  }
  else if ((*(int *)(this + 0x2b0) == 0xf) || (*(int *)(this + 0x2b0) == 0x10)) {
    local_288[2] = 0x850dcc5;
    stStackableBooster_t::operator=
              ((stStackableBooster_t *)(this + 0x240),(stStackableBooster_t *)(param_1 + 0x280));
  }
  else if (*(int *)(this + 0x2b0) == 0x11) {
    local_288[2] = 0x850dcf5;
    stStackableBooster_t::operator=
              ((stStackableBooster_t *)(this + 0x240),(stStackableBooster_t *)(param_1 + 0x280));
    *(undefined4 *)(this + 0x2b0) = 0x10;
  }
  else if (*(int *)(this + 0x2b0) == 0x22) {
    local_288[2] = 0x850dd32;
    stStackableBooster_t::operator=
              ((stStackableBooster_t *)(this + 0x240),(stStackableBooster_t *)(param_1 + 0x280));
    local_288[2] = 0x850dd4f;
    BoosterSelectInfo::operator=
              ((BoosterSelectInfo *)(this + 0x264),(BoosterSelectInfo *)(param_1 + 0x41c));
  }
  else if (*(int *)(this + 0x2b0) == 0x17) {
    local_288[2] = 0x850dd7f;
    createGlobalEffectInfo((vector *)(this + 0x280),(vector *)(param_1 + 0x88));
  }
  else if (*(int *)(this + 0x2b0) == 0x1d) {
    local_288[2] = 0x850ddac;
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator=
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x290),
               (vector *)(param_1 + 0x3d4));
    *(undefined4 *)(this + 0x29c) = *(undefined4 *)(param_1 + 0x3e0);
    *(undefined4 *)(this + 0x2a0) = *(undefined4 *)(param_1 + 0x3e4);
    local_288[2] = 0x850dded;
    std::vector<stLimitCubeResult,std::allocator<stLimitCubeResult>>::operator=
              ((vector<stLimitCubeResult,std::allocator<stLimitCubeResult>> *)(this + 0x2a4),
               (vector *)(param_1 + 1000));
  }
  for (local_30 = 0; local_30 < 0xb; local_30 = local_30 + 1) {
    this[local_30 + 0x3c] = *(CStackableItem *)(param_1 + local_30 + 0x38);
  }
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(this + 0x4c) = *(undefined4 *)(param_1 + 0x60);
  this[0x54] = (CStackableItem)0x1;
  *(undefined4 *)(this + 0x28c) = *(undefined4 *)(param_1 + 0x364);
  *(undefined4 *)(this + 700) = *(undefined4 *)(param_1 + 0x1e4);
  local_288[2] = 0x850de70;
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x2c0));
  if ((*(int *)(this + 0x2b0) == 2) && (*(int *)(this + 700) == 1)) {
    local_288[2] = 0x850dea4;
    uVar5 = std::vector<std::string,std::allocator<std::string>>::size
                      ((vector<std::string,std::allocator<std::string>> *)(param_1 + 0x94));
    if (1 < uVar5) {
      local_2c = 1;
      while( true ) {
        local_288[2] = 0x850df12;
        uVar5 = std::vector<std::string,std::allocator<std::string>>::size
                          ((vector<std::string,std::allocator<std::string>> *)(param_1 + 0x94));
        if (uVar5 <= local_2c) break;
        local_288[2] = 0x850decf;
        psVar7 = (string *)
                 std::vector<std::string,std::allocator<std::string>>::operator[]
                           ((vector<std::string,std::allocator<std::string>> *)(param_1 + 0x94),
                            local_2c);
        local_288[2] = 0x850ded7;
        local_28 = GetEquipmentTypeStringToEnum(psVar7);
        if (local_28 != 0x16) {
          local_288[2] = 0x850defe;
          local_54[0] = local_28;
          std::vector<int,std::allocator<int>>::push_back
                    ((vector<int,std::allocator<int>> *)(this + 0x2c0),local_54);
        }
        local_2c = local_2c + 1;
      }
    }
  }
  *(undefined4 *)(this + 0x2d0) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(this + 0x2d4) = *(undefined4 *)(param_1 + 0x1b4);
  this[0x2d8] = *(CStackableItem *)(param_1 + 0x1b9);
  this[0x2d9] = *(CStackableItem *)(param_1 + 0x1ba);
  this[0x2da] = *(CStackableItem *)(param_1 + 0x1bb);
  this[0x2e0] = *(CStackableItem *)(param_1 + 0x360);
  *(undefined4 *)(this + 0x2dc) = *(undefined4 *)(param_1 + 0x358);
  this[0x2e1] = *(CStackableItem *)(param_1 + 0x1bf);
  this[0x2e4] = *(CStackableItem *)(param_1 + 0x1bc);
  this[0x2e5] = *(CStackableItem *)(param_1 + 0x1bd);
  this[0x2e6] = *(CStackableItem *)(param_1 + 0x1be);
  this[0x2e7] = *(CStackableItem *)(param_1 + 0x1c0);
  *(undefined4 *)(this + 0x2e8) = *(undefined4 *)(param_1 + 0x1c4);
  this[0x2ec] = *(CStackableItem *)(param_1 + 0x1d0);
  *(undefined2 *)(this + 0x2b4) = *(undefined2 *)(param_1 + 0x380);
  *(undefined4 *)(this + 0x74) = *(undefined4 *)(param_1 + 0x100);
  this[0x78] = *(CStackableItem *)(param_1 + 0x104);
  *(undefined4 *)(this + 0x58) = 0xffffffff;
  this[0x79] = (CStackableItem)0x0;
  *(undefined4 *)(this + 0x80) = *(undefined4 *)(param_1 + 200);
  *(undefined4 *)(this + 0x7c) = *(undefined4 *)(param_1 + 0xcc);
  this[0x87] = *(CStackableItem *)(param_1 + 0xd0);
  local_288[2] = 0x850e0b3;
  std::string::operator=((string *)(this + 0xb0),(string *)(param_1 + 0x6c));
  *(undefined4 *)(this + 0xb4) = *(undefined4 *)(param_1 + 0x105);
  *(undefined4 *)(this + 0xb8) = *(undefined4 *)(param_1 + 0x109);
  this[0xbc] = *(CStackableItem *)(param_1 + 0x10d);
  local_288[2] = 0x850e0ee;
  STSpecialMonsterDrop::clear((STSpecialMonsterDrop *)(param_1 + 0x105));
  this[0x2f0] = *(CStackableItem *)(param_1 + 0x10e);
  *(undefined2 *)(this + 0x2ee) = *(undefined2 *)(param_1 + 0x394);
  local_288[2] = 0x850e132;
  std::
  map<STEnchantSystemMapKey,STEnchantSystemMapData,std::less<STEnchantSystemMapKey>,std::allocator<std::pair<STEnchantSystemMapKey_const,STEnchantSystemMapData>>>
  ::operator=((map<STEnchantSystemMapKey,STEnchantSystemMapData,std::less<STEnchantSystemMapKey>,std::allocator<std::pair<STEnchantSystemMapKey_const,STEnchantSystemMapData>>>
               *)(this + 0x2f4),(map *)(param_1 + 0x3f4));
  this[0x30c] = *(CStackableItem *)(param_1 + 0x40c);
  local_288[2] = 0x850e16a;
  memcpy(this + 0x30d,param_1 + 0x40d,2);
  this[0x30f] = *(CStackableItem *)(param_1 + 0x396);
  *(undefined2 *)(this + 0x310) = *(undefined2 *)(param_1 + 0x398);
  this[0x312] = *(CStackableItem *)(param_1 + 0x39a);
  this[0x313] = *(CStackableItem *)(param_1 + 0x39b);
  *(short *)(this + 0x314) = (short)*(undefined4 *)(param_1 + 0x39c);
  this[0x316] = *(CStackableItem *)(param_1 + 0x3a0);
  this[800] = *(CStackableItem *)(param_1 + 0x438);
  if (this[800] != (CStackableItem)0x0) {
    *(undefined4 *)(this + 0x318) = *(undefined4 *)(param_1 + 0x43c);
    *(undefined4 *)(this + 0x31c) = *(undefined4 *)(param_1 + 0x440);
  }
  this[0xbd] = *(CStackableItem *)(param_1 + 0x10f);
  local_288[2] = 0x850e254;
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator=
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0xc0),
             (vector *)(param_1 + 0x110));
  *(undefined4 *)(this + 0xcc) = 0;
  this[0xd0] = *(CStackableItem *)(param_1 + 0x3d0);
  this[0x321] = *(CStackableItem *)(param_1 + 0x3d1);
  local_288[2] = 0x850e2a4;
  std::set<int,std::less<int>,std::allocator<int>>::operator=
            ((set<int,std::less<int>,std::allocator<int>> *)(this + 0xd4),(set *)(param_1 + 0xdc));
  *(undefined4 *)(this + 0xec) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(this + 0xf0) = *(undefined4 *)(param_1 + 0x444);
  *(undefined4 *)(this + 0xf4) = *(undefined4 *)(param_1 + 0x448);
  *(undefined4 *)(this + 0xfc) = *(undefined4 *)(param_1 + 0x150);
  *(undefined4 *)(this + 0x100) = *(undefined4 *)(param_1 + 0x154);
  local_288[2] = 0x850e30b;
  std::vector<STItemScript::SEXPERTJOB::SUSABLE,std::allocator<STItemScript::SEXPERTJOB::SUSABLE>>::
  clear((vector<STItemScript::SEXPERTJOB::SUSABLE,std::allocator<STItemScript::SEXPERTJOB::SUSABLE>>
         *)(this + 0x104));
  local_288[2] = 0x850e328;
  std::vector<STItemScript::SEXPERTJOB::SUSABLE,std::allocator<STItemScript::SEXPERTJOB::SUSABLE>>::
  operator=((vector<STItemScript::SEXPERTJOB::SUSABLE,std::allocator<STItemScript::SEXPERTJOB::SUSABLE>>
             *)(this + 0x104),(vector *)(param_1 + 0x158));
  *(undefined4 *)(this + 0x324) = *(undefined4 *)(param_1 + 0x44c);
  *(undefined4 *)(this + 0x328) = *(undefined4 *)(param_1 + 0x454);
  *(undefined4 *)(this + 0x32c) = *(undefined4 *)(param_1 + 0x450);
  *(undefined4 *)(this + 0x330) = *(undefined4 *)(param_1 + 0x458);
  *(undefined4 *)(this + 0x334) = *(undefined4 *)(param_1 + 0x45c);
  *(undefined4 *)(this + 0x338) = *(undefined4 *)(param_1 + 0x460);
  *(undefined4 *)(this + 0x33c) = *(undefined4 *)(param_1 + 0x464);
  local_288[2] = 0x850e3c3;
  std::
  set<STItemScript::ENUM_ITEM_CATEGORY,std::less<STItemScript::ENUM_ITEM_CATEGORY>,std::allocator<STItemScript::ENUM_ITEM_CATEGORY>>
  ::operator=((set<STItemScript::ENUM_ITEM_CATEGORY,std::less<STItemScript::ENUM_ITEM_CATEGORY>,std::allocator<STItemScript::ENUM_ITEM_CATEGORY>>
               *)(this + 0x128),(set *)(param_1 + 0x11c));
  if (*(int *)(param_1 + 0x474) != 0) {
    uVar5 = *(uint *)param_1;
    local_288[2] = 0x850e3e5;
    uVar8 = G_CDataManager();
    local_288[2] = 0x850e3f5;
    CDataManager::set_lottery_use_cost(uVar8,uVar5);
  }
  *(undefined4 *)(this + 0x340) = *(undefined4 *)(param_1 + 0x478);
  this[0x344] = *(CStackableItem *)(param_1 + 0x3a1);
  local_288[2] = 0x850e437;
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::operator=
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x348),
             (map *)(param_1 + 0x3a4));
  *(undefined4 *)(this + 0x148) = *(undefined4 *)(param_1 + 0x178);
  this[0x14c] = *(CStackableItem *)(param_1 + 0x17c);
  local_288[2] = 0x850e479;
  std::string::operator=((string *)(this + 0x150),(string *)(param_1 + 0x180));
  local_288[2] = 0x850e496;
  std::string::operator=((string *)(this + 0x154),(string *)(param_1 + 0x184));
  local_288[2] = 0x850e4b3;
  std::string::operator=((string *)(this + 0x158),(string *)(param_1 + 0x188));
  local_288[2] = 0x850e4c3;
  cVar3 = std::vector<CRabbitBox,std::allocator<CRabbitBox>>::empty();
  if (cVar3 != '\x01') {
    local_288[2] = 0x850e4de;
    uVar5 = std::vector<CRabbitBox,std::allocator<CRabbitBox>>::size
                      ((vector<CRabbitBox,std::allocator<CRabbitBox>> *)(param_1 + 0x19c));
    local_288[2] = 0x850e4f3;
    std::vector<CRabbitBox,std::allocator<CRabbitBox>>::reserve
              ((vector<CRabbitBox,std::allocator<CRabbitBox>> *)(this + 0x168),uVar5);
    local_288[2] = 0x850e50b;
    std::back_inserter<std::vector<CRabbitBox,std::allocator<CRabbitBox>>>(local_4c);
    local_288[2] = 0x850e526;
    std::vector<CRabbitBox,std::allocator<CRabbitBox>>::end();
    local_288[2] = 0x850e541;
    std::vector<CRabbitBox,std::allocator<CRabbitBox>>::begin();
    local_288[2] = 0x850e564;
    std::
    copy<__gnu_cxx::__normal_iterator<CRabbitBox*,std::vector<CRabbitBox,std::allocator<CRabbitBox>>>,std::back_insert_iterator<std::vector<CRabbitBox,std::allocator<CRabbitBox>>>>
              ();
    piVar12 = local_288 + 2;
  }
  *piVar12 = (int)(param_1 + 400);
  piVar12[-1] = 0x850e577;
  cVar3 = std::vector<int,std::allocator<int>>::empty();
  if (cVar3 != '\x01') {
    *piVar12 = (int)(param_1 + 400);
    piVar12[-1] = 0x850e592;
    iVar11 = std::vector<int,std::allocator<int>>::size((vector<int,std::allocator<int>> *)*piVar12)
    ;
    piVar12[1] = iVar11;
    *piVar12 = (int)(this + 0x15c);
    piVar12[-1] = 0x850e5a7;
    std::vector<int,std::allocator<int>>::reserve
              ((vector<int,std::allocator<int>> *)*piVar12,piVar12[1]);
    piVar12[1] = (int)(this + 0x15c);
    *piVar12 = (int)&local_3c;
    piVar12[-1] = 0x850e5bf;
    std::back_inserter<std::vector<int,std::allocator<int>>>((vector *)*piVar12);
    piVar12[1] = (int)(param_1 + 400);
    *piVar12 = (int)&local_38;
    piVar12[-1] = 0x850e5da;
    std::vector<int,std::allocator<int>>::end();
    piVar12[1] = (int)(param_1 + 400);
    *piVar12 = (int)&local_34;
    piVar12[-1] = 0x850e5f5;
    std::vector<int,std::allocator<int>>::begin();
    piVar12[3] = local_3c;
    piVar12[2] = local_38;
    piVar12[1] = local_34;
    *piVar12 = (int)local_40;
    piVar12[-1] = 0x850e618;
    std::
    copy<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,std::back_insert_iterator<std::vector<int,std::allocator<int>>>>
              ();
    piVar12 = piVar12 + -1;
  }
  *(undefined4 *)(this + 0x360) = *(undefined4 *)(param_1 + 0x418);
  this[0x364] = *(CStackableItem *)(param_1 + 0x32c);
  *(undefined2 *)(this + 0x365) = *(undefined2 *)(param_1 + 0x47c);
  this[0x367] = *(CStackableItem *)(param_1 + 0x47e);
  piVar12[1] = (int)(param_1 + 0x480);
  *piVar12 = (int)(this + 0x368);
  piVar12[-1] = 0x850e67e;
  std::set<int,std::less<int>,std::allocator<int>>::operator=
            ((set<int,std::less<int>,std::allocator<int>> *)*piVar12,(set *)piVar12[1]);
  piVar12[1] = (int)(param_1 + 0x498);
  *piVar12 = (int)(this + 0x380);
  piVar12[-1] = 0x850e69b;
  std::set<int,std::less<int>,std::allocator<int>>::operator=
            ((set<int,std::less<int>,std::allocator<int>> *)*piVar12,(set *)piVar12[1]);
  this[0x398] = *(CStackableItem *)(param_1 + 0x4b0);
  *(undefined4 *)(this + 0x39c) = *(undefined4 *)(param_1 + 0x1e8);
  piVar12[1] = (int)(param_1 + 0x1ec);
  *piVar12 = (int)(this + 0x3a0);
  piVar12[-1] = 0x850e6dd;
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)*piVar12,(vector *)piVar12[1]);
  piVar12[1] = (int)(param_1 + 0x1f8);
  *piVar12 = (int)(this + 0x3ac);
  piVar12[-1] = 0x850e6fa;
  std::vector<StackableAction::UsablePlace,std::allocator<StackableAction::UsablePlace>>::operator=
            ((vector<StackableAction::UsablePlace,std::allocator<StackableAction::UsablePlace>> *)
             *piVar12,(vector *)piVar12[1]);
  if (*(int *)(this + 0x39c) == 0x2c) {
    local_24 = 0;
    while( true ) {
      *piVar12 = (int)(this + 0x3a0);
      piVar12[-1] = 0x850e772;
      uVar5 = std::vector<int,std::allocator<int>>::size
                        ((vector<int,std::allocator<int>> *)*piVar12);
      if (uVar5 <= local_24) break;
      piVar12[1] = local_24;
      *piVar12 = (int)(this + 0x3a0);
      piVar12[-1] = 0x850e729;
      piVar9 = (int *)std::vector<int,std::allocator<int>>::operator[]
                                ((vector<int,std::allocator<int>> *)*piVar12,piVar12[1]);
      iVar11 = *piVar9;
      piVar12[-1] = 0x850e730;
      iVar10 = G_CDataManager();
      uVar1 = *(undefined4 *)(iVar10 + 0x28);
      piVar12[1] = iVar11;
      *piVar12 = uVar1;
      piVar12[-1] = 0x850e73f;
      local_20 = (int *)CChattingEmoticonList::find_emoticon(*piVar12);
      pcVar2 = *(code **)(*local_20 + 0x18);
      piVar12[1] = *(int *)(this + 4);
      *piVar12 = (int)local_20;
      piVar12[-1] = 0x850e75e;
      (*pcVar2)();
      local_24 = local_24 + 1;
    }
  }
  piVar12[1] = (int)(param_1 + 0x214);
  *piVar12 = (int)(this + 0x3b8);
  piVar12[-1] = 0x850e799;
  std::vector<StackableAction::UsableServerType,std::allocator<StackableAction::UsableServerType>>::
  operator=((vector<StackableAction::UsableServerType,std::allocator<StackableAction::UsableServerType>>
             *)*piVar12,(vector *)piVar12[1]);
  this[0x3c5] = *(CStackableItem *)(param_1 + 0x205);
  this[0x88] = *(CStackableItem *)(param_1 + 0xda);
  *(undefined4 *)(this + 0x8c) = *(undefined4 *)(param_1 + 0x220);
  piVar12[1] = (int)(param_1 + 0x224);
  *piVar12 = (int)(this + 0x90);
  piVar12[-1] = 0x850e7ee;
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)*piVar12,(vector *)piVar12[1]);
  piVar12[1] = (int)(param_1 + 0x164);
  *piVar12 = (int)(this + 0x9c);
  piVar12[-1] = 0x850e80b;
  DyeInfo::operator=((DyeInfo *)*piVar12,(DyeInfo *)piVar12[1]);
  this[0x3c4] = (CStackableItem)(*(int *)(param_1 + 0x4b8) != 0);
  this[0x144] = *(CStackableItem *)(param_1 + 0xd8);
  *(undefined4 *)(this + 0x140) = 0;
  *(undefined4 *)(this + 0x3d0) = *(undefined4 *)(param_1 + 0x468);
  *(undefined4 *)(this + 0x3c8) = *(undefined4 *)(param_1 + 0x46c);
  if (1 < *(int *)(this + 0x3c8)) {
    piVar12[1] = (int)(param_1 + 0x280);
    *piVar12 = (int)(this + 0x240);
    piVar12[-1] = 0x850e891;
    stStackableBooster_t::operator=
              ((stStackableBooster_t *)*piVar12,(stStackableBooster_t *)piVar12[1]);
  }
  *(undefined4 *)(this + 0x3cc) = *(undefined4 *)(param_1 + 0x1ac);
  *(undefined4 *)(this + 0x3d4) = *(undefined4 *)(param_1 + 0x508);
  piVar12[1] = (int)(param_1 + 0x50c);
  *piVar12 = (int)(this + 0x3d8);
  piVar12[-1] = 0x850e8d2;
  std::set<int,std::less<int>,std::allocator<int>>::operator=
            ((set<int,std::less<int>,std::allocator<int>> *)*piVar12,(set *)piVar12[1]);
  return;
}

```

---

## verify

```asm
// === 0850fa14 CStackableItem::verify  [0x0850fa14-0x850fa89] ===
 850fa14:	55                   	push   %ebp
 850fa15:	89 e5                	mov    %esp,%ebp
 850fa17:	83 ec 18             	sub    $0x18,%esp
 850fa1a:	8b 45 08             	mov    0x8(%ebp),%eax
 850fa1d:	8b 40 6c             	mov    0x6c(%eax),%eax
 850fa20:	85 c0                	test   %eax,%eax
 850fa22:	74 17                	je     850fa3b <_ZN14CStackableItem6verifyEv+0x27>
 850fa24:	8b 45 08             	mov    0x8(%ebp),%eax
 850fa27:	89 04 24             	mov    %eax,(%esp)
 850fa2a:	e8 cd cf d1 ff       	call   822c9fc <_ZNK14CStackableItem17getStackableLimitEv>
 850fa2f:	83 f8 01             	cmp    $0x1,%eax
 850fa32:	74 07                	je     850fa3b <_ZN14CStackableItem6verifyEv+0x27>
 850fa34:	b8 01 00 00 00       	mov    $0x1,%eax
 850fa39:	eb 05                	jmp    850fa40 <_ZN14CStackableItem6verifyEv+0x2c>
 850fa3b:	b8 00 00 00 00       	mov    $0x0,%eax
 850fa40:	84 c0                	test   %al,%al
 850fa42:	74 07                	je     850fa4b <_ZN14CStackableItem6verifyEv+0x37>
 850fa44:	b8 00 00 00 00       	mov    $0x0,%eax
 850fa49:	eb 3c                	jmp    850fa87 <_ZN14CStackableItem6verifyEv+0x73>
 850fa4b:	8b 45 08             	mov    0x8(%ebp),%eax
 850fa4e:	8b 80 b0 02 00 00    	mov    0x2b0(%eax),%eax
 850fa54:	83 f8 0f             	cmp    $0xf,%eax
 850fa57:	74 0e                	je     850fa67 <_ZN14CStackableItem6verifyEv+0x53>
 850fa59:	8b 45 08             	mov    0x8(%ebp),%eax
 850fa5c:	8b 80 b0 02 00 00    	mov    0x2b0(%eax),%eax
 850fa62:	83 f8 10             	cmp    $0x10,%eax
 850fa65:	75 1b                	jne    850fa82 <_ZN14CStackableItem6verifyEv+0x6e>
 850fa67:	8b 45 08             	mov    0x8(%ebp),%eax
 850fa6a:	05 40 02 00 00       	add    $0x240,%eax
 850fa6f:	89 04 24             	mov    %eax,(%esp)
 850fa72:	e8 5f 80 00 00       	call   8517ad6 <_ZNKSt6vectorI27stStackableBoosterElement_tSaIS0_EE5emptyEv>
 850fa77:	84 c0                	test   %al,%al
 850fa79:	74 07                	je     850fa82 <_ZN14CStackableItem6verifyEv+0x6e>
 850fa7b:	b8 00 00 00 00       	mov    $0x0,%eax
 850fa80:	eb 05                	jmp    850fa87 <_ZN14CStackableItem6verifyEv+0x73>
 850fa82:	b8 01 00 00 00       	mov    $0x1,%eax
 850fa87:	c9                   	leave
 850fa88:	c3                   	ret
 850fa89:	90                   	nop

```

```c
// CStackableItem::verify @ 0x850fa14

/* CStackableItem::verify() */

undefined4 __thiscall CStackableItem::verify(CStackableItem *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  
  if ((*(int *)(this + 0x6c) == 0) || (iVar3 = getStackableLimit(this), iVar3 == 1)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    uVar4 = 0;
  }
  else {
    if (((*(int *)(this + 0x2b0) == 0xf) || (*(int *)(this + 0x2b0) == 0x10)) &&
       (cVar2 = std::vector<stStackableBoosterElement_t,std::allocator<stStackableBoosterElement_t>>
                ::empty(), cVar2 != '\0')) {
      return 0;
    }
    uVar4 = 1;
  }
  return uVar4;
}

```

---

## verifyUsablePlace

```asm
// === 0850e9f4 CStackableItem::verifyUsablePlace  [0x0850e9f4-0x850eb41] ===
 850e9f4:	55                   	push   %ebp
 850e9f5:	89 e5                	mov    %esp,%ebp
 850e9f7:	83 ec 38             	sub    $0x38,%esp
 850e9fa:	8b 45 08             	mov    0x8(%ebp),%eax
 850e9fd:	05 ac 03 00 00       	add    $0x3ac,%eax
 850ea02:	89 04 24             	mov    %eax,(%esp)
 850ea05:	e8 b4 8b 00 00       	call   85175be <_ZNKSt6vectorIN15StackableAction11UsablePlaceESaIS1_EE5emptyEv>
 850ea0a:	84 c0                	test   %al,%al
 850ea0c:	74 0a                	je     850ea18 <_ZN14CStackableItem17verifyUsablePlaceEP5CUser+0x24>
 850ea0e:	b8 01 00 00 00       	mov    $0x1,%eax
 850ea13:	e9 28 01 00 00       	jmp    850eb40 <_ZN14CStackableItem17verifyUsablePlaceEP5CUser+0x14c>
 850ea18:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 850ea1f:	e8 83 b9 bc ff       	call   80da3a7 <_Z11G_GameWorldv>
 850ea24:	89 04 24             	mov    %eax,(%esp)
 850ea27:	e8 bc 3a c3 ff       	call   81424e8 <_ZNK9GameWorld12IsPVPChannelEv>
 850ea2c:	84 c0                	test   %al,%al
 850ea2e:	74 09                	je     850ea39 <_ZN14CStackableItem17verifyUsablePlaceEP5CUser+0x45>
 850ea30:	c7 45 e4 03 00 00 00 	movl   $0x3,-0x1c(%ebp)
 850ea37:	eb 25                	jmp    850ea5e <_ZN14CStackableItem17verifyUsablePlaceEP5CUser+0x6a>
 850ea39:	8b 45 0c             	mov    0xc(%ebp),%eax
 850ea3c:	89 04 24             	mov    %eax,(%esp)
 850ea3f:	e8 48 b9 bc ff       	call   80da38c <_ZN5CUser9get_stateEv>
 850ea44:	83 f8 03             	cmp    $0x3,%eax
 850ea47:	74 0e                	je     850ea57 <_ZN14CStackableItem17verifyUsablePlaceEP5CUser+0x63>
 850ea49:	83 f8 05             	cmp    $0x5,%eax
 850ea4c:	75 10                	jne    850ea5e <_ZN14CStackableItem17verifyUsablePlaceEP5CUser+0x6a>
 850ea4e:	c7 45 e4 02 00 00 00 	movl   $0x2,-0x1c(%ebp)
 850ea55:	eb 07                	jmp    850ea5e <_ZN14CStackableItem17verifyUsablePlaceEP5CUser+0x6a>
 850ea57:	c7 45 e4 01 00 00 00 	movl   $0x1,-0x1c(%ebp)
 850ea5e:	8b 45 08             	mov    0x8(%ebp),%eax
 850ea61:	8d 90 ac 03 00 00    	lea    0x3ac(%eax),%edx
 850ea67:	8d 45 e8             	lea    -0x18(%ebp),%eax
 850ea6a:	89 54 24 04          	mov    %edx,0x4(%esp)
 850ea6e:	89 04 24             	mov    %eax,(%esp)
 850ea71:	e8 b0 8b 00 00       	call   8517626 <_ZNSt6vectorIN15StackableAction11UsablePlaceESaIS1_EE3endEv>
 850ea76:	83 ec 04             	sub    $0x4,%esp
 850ea79:	8b 45 08             	mov    0x8(%ebp),%eax
 850ea7c:	8d 90 ac 03 00 00    	lea    0x3ac(%eax),%edx
 850ea82:	8d 45 f0             	lea    -0x10(%ebp),%eax
 850ea85:	89 54 24 04          	mov    %edx,0x4(%esp)
 850ea89:	89 04 24             	mov    %eax,(%esp)
 850ea8c:	e8 95 8b 00 00       	call   8517626 <_ZNSt6vectorIN15StackableAction11UsablePlaceESaIS1_EE3endEv>
 850ea91:	83 ec 04             	sub    $0x4,%esp
 850ea94:	8b 45 08             	mov    0x8(%ebp),%eax
 850ea97:	8d 90 ac 03 00 00    	lea    0x3ac(%eax),%edx
 850ea9d:	8d 45 f4             	lea    -0xc(%ebp),%eax
 850eaa0:	89 54 24 04          	mov    %edx,0x4(%esp)
 850eaa4:	89 04 24             	mov    %eax,(%esp)
 850eaa7:	e8 56 8b 00 00       	call   8517602 <_ZNSt6vectorIN15StackableAction11UsablePlaceESaIS1_EE5beginEv>
 850eaac:	83 ec 04             	sub    $0x4,%esp
 850eaaf:	8d 45 ec             	lea    -0x14(%ebp),%eax
 850eab2:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 850eab5:	89 54 24 0c          	mov    %edx,0xc(%esp)
 850eab9:	8b 55 f0             	mov    -0x10(%ebp),%edx
 850eabc:	89 54 24 08          	mov    %edx,0x8(%esp)
 850eac0:	8b 55 f4             	mov    -0xc(%ebp),%edx
 850eac3:	89 54 24 04          	mov    %edx,0x4(%esp)
 850eac7:	89 04 24             	mov    %eax,(%esp)
 850eaca:	e8 7d 8b 00 00       	call   851764c <_ZSt4findIN9__gnu_cxx17__normal_iteratorIPN15StackableAction11UsablePlaceESt6vectorIS3_SaIS3_EEEES3_ET_S9_S9_RKT0_>
 850eacf:	83 ec 04             	sub    $0x4,%esp
 850ead2:	8d 45 e8             	lea    -0x18(%ebp),%eax
 850ead5:	89 44 24 04          	mov    %eax,0x4(%esp)
 850ead9:	8d 45 ec             	lea    -0x14(%ebp),%eax
 850eadc:	89 04 24             	mov    %eax,(%esp)
 850eadf:	e8 bc 8b 00 00       	call   85176a0 <_ZN9__gnu_cxxeqIPN15StackableAction11UsablePlaceESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 850eae4:	84 c0                	test   %al,%al
 850eae6:	74 07                	je     850eaef <_ZN14CStackableItem17verifyUsablePlaceEP5CUser+0xfb>
 850eae8:	b8 00 00 00 00       	mov    $0x0,%eax
 850eaed:	eb 51                	jmp    850eb40 <_ZN14CStackableItem17verifyUsablePlaceEP5CUser+0x14c>
 850eaef:	8b 45 08             	mov    0x8(%ebp),%eax
 850eaf2:	0f b6 80 4c 01 00 00 	movzbl 0x14c(%eax),%eax
 850eaf9:	84 c0                	test   %al,%al
 850eafb:	78 27                	js     850eb24 <_ZN14CStackableItem17verifyUsablePlaceEP5CUser+0x130>
 850eafd:	8b 45 08             	mov    0x8(%ebp),%eax
 850eb00:	0f b6 80 4c 01 00 00 	movzbl 0x14c(%eax),%eax
 850eb07:	84 c0                	test   %al,%al
 850eb09:	78 20                	js     850eb2b <_ZN14CStackableItem17verifyUsablePlaceEP5CUser+0x137>
 850eb0b:	8b 45 0c             	mov    0xc(%ebp),%eax
 850eb0e:	89 04 24             	mov    %eax,(%esp)
 850eb11:	e8 7e 21 c0 ff       	call   8110c94 <_ZNK15CUserCharacInfo23getCurCharFirstGrowTypeEv>
 850eb16:	8b 55 08             	mov    0x8(%ebp),%edx
 850eb19:	0f b6 92 4c 01 00 00 	movzbl 0x14c(%edx),%edx
 850eb20:	38 d0                	cmp    %dl,%al
 850eb22:	75 07                	jne    850eb2b <_ZN14CStackableItem17verifyUsablePlaceEP5CUser+0x137>
 850eb24:	b8 01 00 00 00       	mov    $0x1,%eax
 850eb29:	eb 05                	jmp    850eb30 <_ZN14CStackableItem17verifyUsablePlaceEP5CUser+0x13c>
 850eb2b:	b8 00 00 00 00       	mov    $0x0,%eax
 850eb30:	84 c0                	test   %al,%al
 850eb32:	74 07                	je     850eb3b <_ZN14CStackableItem17verifyUsablePlaceEP5CUser+0x147>
 850eb34:	b8 01 00 00 00       	mov    $0x1,%eax
 850eb39:	eb 05                	jmp    850eb40 <_ZN14CStackableItem17verifyUsablePlaceEP5CUser+0x14c>
 850eb3b:	b8 00 00 00 00       	mov    $0x0,%eax
 850eb40:	c9                   	leave
 850eb41:	c3                   	ret

```

```c
// CStackableItem::verifyUsablePlace @ 0x850e9f4

/* CStackableItem::verifyUsablePlace(CUser*) */

undefined1 __thiscall CStackableItem::verifyUsablePlace(CStackableItem *this,CUser *param_1)

{
  undefined1 uVar1;
  char cVar2;
  bool bVar3;
  CStackableItem CVar4;
  GameWorld *this_00;
  int iVar5;
  undefined4 local_20;
  __normal_iterator local_1c [4];
  undefined1 local_18 [4];
  undefined4 local_14;
  undefined4 local_10;
  
  cVar2 = std::vector<StackableAction::UsablePlace,std::allocator<StackableAction::UsablePlace>>::
          empty();
  if (cVar2 != '\0') {
    return 1;
  }
  local_20 = 0;
  this_00 = (GameWorld *)G_GameWorld();
  cVar2 = GameWorld::IsPVPChannel(this_00);
  if (cVar2 == '\0') {
    iVar5 = CUser::get_state(param_1);
    if (iVar5 == 3) {
      local_20 = 1;
    }
    else if (iVar5 == 5) {
      local_20 = 2;
    }
  }
  else {
    local_20 = 3;
  }
  std::vector<StackableAction::UsablePlace,std::allocator<StackableAction::UsablePlace>>::end();
  std::vector<StackableAction::UsablePlace,std::allocator<StackableAction::UsablePlace>>::end();
  std::vector<StackableAction::UsablePlace,std::allocator<StackableAction::UsablePlace>>::begin();
  std::
  find<__gnu_cxx::__normal_iterator<StackableAction::UsablePlace*,std::vector<StackableAction::UsablePlace,std::allocator<StackableAction::UsablePlace>>>,StackableAction::UsablePlace>
            (local_18,local_10,local_14,&local_20);
  bVar3 = __gnu_cxx::operator==(local_18,local_1c);
  if (!bVar3) {
    if (((char)this[0x14c] < '\0') ||
       ((-1 < (char)this[0x14c] &&
        (CVar4 = (CStackableItem)
                 CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)param_1),
        CVar4 == this[0x14c])))) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
    return uVar1;
  }
  return 0;
}

```

---

## verifyUsableServerType

```asm
// === 0850e8de CStackableItem::verifyUsableServerType  [0x0850e8de-0x850e9f3] ===
 850e8de:	55                   	push   %ebp
 850e8df:	89 e5                	mov    %esp,%ebp
 850e8e1:	83 ec 38             	sub    $0x38,%esp
 850e8e4:	8b 45 08             	mov    0x8(%ebp),%eax
 850e8e7:	05 b8 03 00 00       	add    $0x3b8,%eax
 850e8ec:	89 04 24             	mov    %eax,(%esp)
 850e8ef:	e8 bc 8b 00 00       	call   85174b0 <_ZNKSt6vectorIN15StackableAction16UsableServerTypeESaIS1_EE5emptyEv>
 850e8f4:	84 c0                	test   %al,%al
 850e8f6:	74 0a                	je     850e902 <_ZN14CStackableItem22verifyUsableServerTypeEv+0x24>
 850e8f8:	b8 01 00 00 00       	mov    $0x1,%eax
 850e8fd:	e9 f0 00 00 00       	jmp    850e9f2 <_ZN14CStackableItem22verifyUsableServerTypeEv+0x114>
 850e902:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 850e909:	e8 73 d8 bb ff       	call   80cc181 <_Z14G_CEnvironmentv>
 850e90e:	8b 80 a8 01 00 00    	mov    0x1a8(%eax),%eax
 850e914:	85 c0                	test   %eax,%eax
 850e916:	0f 94 c0             	sete   %al
 850e919:	84 c0                	test   %al,%al
 850e91b:	74 07                	je     850e924 <_ZN14CStackableItem22verifyUsableServerTypeEv+0x46>
 850e91d:	c7 45 e4 01 00 00 00 	movl   $0x1,-0x1c(%ebp)
 850e924:	e8 58 d8 bb ff       	call   80cc181 <_Z14G_CEnvironmentv>
 850e929:	8b 80 a8 01 00 00    	mov    0x1a8(%eax),%eax
 850e92f:	83 f8 02             	cmp    $0x2,%eax
 850e932:	0f 94 c0             	sete   %al
 850e935:	84 c0                	test   %al,%al
 850e937:	74 07                	je     850e940 <_ZN14CStackableItem22verifyUsableServerTypeEv+0x62>
 850e939:	c7 45 e4 03 00 00 00 	movl   $0x3,-0x1c(%ebp)
 850e940:	e8 3c d8 bb ff       	call   80cc181 <_Z14G_CEnvironmentv>
 850e945:	8b 80 a8 01 00 00    	mov    0x1a8(%eax),%eax
 850e94b:	83 f8 01             	cmp    $0x1,%eax
 850e94e:	0f 94 c0             	sete   %al
 850e951:	84 c0                	test   %al,%al
 850e953:	74 07                	je     850e95c <_ZN14CStackableItem22verifyUsableServerTypeEv+0x7e>
 850e955:	c7 45 e4 02 00 00 00 	movl   $0x2,-0x1c(%ebp)
 850e95c:	8b 45 08             	mov    0x8(%ebp),%eax
 850e95f:	8d 90 b8 03 00 00    	lea    0x3b8(%eax),%edx
 850e965:	8d 45 e8             	lea    -0x18(%ebp),%eax
 850e968:	89 54 24 04          	mov    %edx,0x4(%esp)
 850e96c:	89 04 24             	mov    %eax,(%esp)
 850e96f:	e8 a4 8b 00 00       	call   8517518 <_ZNSt6vectorIN15StackableAction16UsableServerTypeESaIS1_EE3endEv>
 850e974:	83 ec 04             	sub    $0x4,%esp
 850e977:	8b 45 08             	mov    0x8(%ebp),%eax
 850e97a:	8d 90 b8 03 00 00    	lea    0x3b8(%eax),%edx
 850e980:	8d 45 f0             	lea    -0x10(%ebp),%eax
 850e983:	89 54 24 04          	mov    %edx,0x4(%esp)
 850e987:	89 04 24             	mov    %eax,(%esp)
 850e98a:	e8 89 8b 00 00       	call   8517518 <_ZNSt6vectorIN15StackableAction16UsableServerTypeESaIS1_EE3endEv>
 850e98f:	83 ec 04             	sub    $0x4,%esp
 850e992:	8b 45 08             	mov    0x8(%ebp),%eax
 850e995:	8d 90 b8 03 00 00    	lea    0x3b8(%eax),%edx
 850e99b:	8d 45 f4             	lea    -0xc(%ebp),%eax
 850e99e:	89 54 24 04          	mov    %edx,0x4(%esp)
 850e9a2:	89 04 24             	mov    %eax,(%esp)
 850e9a5:	e8 4a 8b 00 00       	call   85174f4 <_ZNSt6vectorIN15StackableAction16UsableServerTypeESaIS1_EE5beginEv>
 850e9aa:	83 ec 04             	sub    $0x4,%esp
 850e9ad:	8d 45 ec             	lea    -0x14(%ebp),%eax
 850e9b0:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 850e9b3:	89 54 24 0c          	mov    %edx,0xc(%esp)
 850e9b7:	8b 55 f0             	mov    -0x10(%ebp),%edx
 850e9ba:	89 54 24 08          	mov    %edx,0x8(%esp)
 850e9be:	8b 55 f4             	mov    -0xc(%ebp),%edx
 850e9c1:	89 54 24 04          	mov    %edx,0x4(%esp)
 850e9c5:	89 04 24             	mov    %eax,(%esp)
 850e9c8:	e8 71 8b 00 00       	call   851753e <_ZSt4findIN9__gnu_cxx17__normal_iteratorIPN15StackableAction16UsableServerTypeESt6vectorIS3_SaIS3_EEEES3_ET_S9_S9_RKT0_>
 850e9cd:	83 ec 04             	sub    $0x4,%esp
 850e9d0:	8d 45 e8             	lea    -0x18(%ebp),%eax
 850e9d3:	89 44 24 04          	mov    %eax,0x4(%esp)
 850e9d7:	8d 45 ec             	lea    -0x14(%ebp),%eax
 850e9da:	89 04 24             	mov    %eax,(%esp)
 850e9dd:	e8 b0 8b 00 00       	call   8517592 <_ZN9__gnu_cxxeqIPN15StackableAction16UsableServerTypeESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 850e9e2:	84 c0                	test   %al,%al
 850e9e4:	74 07                	je     850e9ed <_ZN14CStackableItem22verifyUsableServerTypeEv+0x10f>
 850e9e6:	b8 00 00 00 00       	mov    $0x0,%eax
 850e9eb:	eb 05                	jmp    850e9f2 <_ZN14CStackableItem22verifyUsableServerTypeEv+0x114>
 850e9ed:	b8 01 00 00 00       	mov    $0x1,%eax
 850e9f2:	c9                   	leave
 850e9f3:	c3                   	ret

```

```c
// CStackableItem::verifyUsableServerType @ 0x850e8de

/* CStackableItem::verifyUsableServerType() */

undefined4 CStackableItem::verifyUsableServerType(void)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_20;
  __normal_iterator local_1c [4];
  undefined1 local_18 [4];
  undefined4 local_14;
  undefined4 local_10;
  
  cVar1 = std::
          vector<StackableAction::UsableServerType,std::allocator<StackableAction::UsableServerType>>
          ::empty();
  if (cVar1 == '\0') {
    local_20 = 0;
    iVar4 = G_CEnvironment();
    if (*(int *)(iVar4 + 0x1a8) == 0) {
      local_20 = 1;
    }
    iVar4 = G_CEnvironment();
    if (*(int *)(iVar4 + 0x1a8) == 2) {
      local_20 = 3;
    }
    iVar4 = G_CEnvironment();
    if (*(int *)(iVar4 + 0x1a8) == 1) {
      local_20 = 2;
    }
    std::vector<StackableAction::UsableServerType,std::allocator<StackableAction::UsableServerType>>
    ::end();
    std::vector<StackableAction::UsableServerType,std::allocator<StackableAction::UsableServerType>>
    ::end();
    std::vector<StackableAction::UsableServerType,std::allocator<StackableAction::UsableServerType>>
    ::begin();
    std::
    find<__gnu_cxx::__normal_iterator<StackableAction::UsableServerType*,std::vector<StackableAction::UsableServerType,std::allocator<StackableAction::UsableServerType>>>,StackableAction::UsableServerType>
              (local_18,local_10,local_14,&local_20);
    bVar2 = __gnu_cxx::operator==(local_18,local_1c);
    if (bVar2) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}

```

