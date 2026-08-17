# CLevelRewardTableMgr

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 8

---

## CLevelRewardTableMgr

```asm
// === 08687710 CLevelRewardTableMgr::CLevelRewardTableMgr  [0x08687710-0x868777b] ===
 8687710:	55                   	push   %ebp
 8687711:	89 e5                	mov    %esp,%ebp
 8687713:	56                   	push   %esi
 8687714:	53                   	push   %ebx
 8687715:	83 ec 10             	sub    $0x10,%esp
 8687718:	8b 45 08             	mov    0x8(%ebp),%eax
 868771b:	83 c0 08             	add    $0x8,%eax
 868771e:	89 04 24             	mov    %eax,(%esp)
 8687721:	e8 86 6a a0 ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 8687726:	8b 45 08             	mov    0x8(%ebp),%eax
 8687729:	c6 00 00             	movb   $0x0,(%eax)
 868772c:	8b 45 08             	mov    0x8(%ebp),%eax
 868772f:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 8687736:	c7 04 24 88 60 00 00 	movl   $0x6088,(%esp)
 868773d:	e8 0e cd 09 00       	call   8724450 <_Znwj>
 8687742:	89 c3                	mov    %eax,%ebx
 8687744:	89 d8                	mov    %ebx,%eax
 8687746:	89 04 24             	mov    %eax,(%esp)
 8687749:	e8 b0 fe 00 00       	call   86975fe <_ZN17CLevelRewardTableC1Ev>
 868774e:	89 da                	mov    %ebx,%edx
 8687750:	8b 45 08             	mov    0x8(%ebp),%eax
 8687753:	89 50 04             	mov    %edx,0x4(%eax)
 8687756:	83 c4 10             	add    $0x10,%esp
 8687759:	5b                   	pop    %ebx
 868775a:	5e                   	pop    %esi
 868775b:	5d                   	pop    %ebp
 868775c:	c3                   	ret
 868775d:	89 d3                	mov    %edx,%ebx
 868775f:	89 c6                	mov    %eax,%esi
 8687761:	8b 45 08             	mov    0x8(%ebp),%eax
 8687764:	83 c0 08             	add    $0x8,%eax
 8687767:	89 04 24             	mov    %eax,(%esp)
 868776a:	e8 6b c6 9f ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 868776f:	89 f0                	mov    %esi,%eax
 8687771:	89 da                	mov    %ebx,%edx
 8687773:	89 04 24             	mov    %eax,(%esp)
 8687776:	e8 d5 bf 45 00       	call   8ae3750 <_Unwind_Resume>
 868777b:	90                   	nop

```

```c
// CLevelRewardTableMgr::CLevelRewardTableMgr @ 0x8687710

/* CLevelRewardTableMgr::CLevelRewardTableMgr() */

void __thiscall CLevelRewardTableMgr::CLevelRewardTableMgr(CLevelRewardTableMgr *this)

{
  CLevelRewardTable *this_00;
  
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 8));
  *this = (CLevelRewardTableMgr)0x0;
  *(undefined4 *)(this + 4) = 0;
                    /* try { // try from 0868773d to 08687741 has its CatchHandler @ 0868775d */
  this_00 = operator_new(0x6088);
  CLevelRewardTable::CLevelRewardTable(this_00);
  *(CLevelRewardTable **)(this + 4) = this_00;
  return;
}

```

---

## GetProperLevelRewardTableR

```asm
// === 08687e62 CLevelRewardTableMgr::GetProperLevelRewardTableR  [0x08687e62-0x8687e6d] ===
 8687e62:	55                   	push   %ebp
 8687e63:	89 e5                	mov    %esp,%ebp
 8687e65:	8b 45 08             	mov    0x8(%ebp),%eax
 8687e68:	8b 40 04             	mov    0x4(%eax),%eax
 8687e6b:	5d                   	pop    %ebp
 8687e6c:	c3                   	ret
 8687e6d:	90                   	nop

```

```c
// CLevelRewardTableMgr::GetProperLevelRewardTableR @ 0x8687e62

/* CLevelRewardTableMgr::GetProperLevelRewardTableR() const */

undefined4 __thiscall CLevelRewardTableMgr::GetProperLevelRewardTableR(CLevelRewardTableMgr *this)

{
  return *(undefined4 *)(this + 4);
}

```

---

## GetProperLevelRewardTableR_08687e6e

```asm
// === 08687e6e CLevelRewardTableMgr::GetProperLevelRewardTableR  [0x08687e6e-0x8687e77] ===
 8687e6e:	55                   	push   %ebp
 8687e6f:	89 e5                	mov    %esp,%ebp
 8687e71:	b8 00 00 00 00       	mov    $0x0,%eax
 8687e76:	5d                   	pop    %ebp
 8687e77:	c3                   	ret

```

```c
// CLevelRewardTableMgr::GetProperLevelRewardTableR @ 0x8687e6e

/* CLevelRewardTableMgr::GetProperLevelRewardTableR(int) const */

undefined4 CLevelRewardTableMgr::GetProperLevelRewardTableR(int param_1)

{
  return 0;
}

```

---

## IsChallengingJob

```asm
// === 08687792 CLevelRewardTableMgr::IsChallengingJob  [0x08687792-0x8687827] ===
 8687792:	55                   	push   %ebp
 8687793:	89 e5                	mov    %esp,%ebp
 8687795:	83 ec 38             	sub    $0x38,%esp
 8687798:	8b 45 0c             	mov    0xc(%ebp),%eax
 868779b:	88 45 e4             	mov    %al,-0x1c(%ebp)
 868779e:	8b 45 08             	mov    0x8(%ebp),%eax
 86877a1:	89 04 24             	mov    %eax,(%esp)
 86877a4:	e8 b9 06 00 00       	call   8687e62 <_ZNK20CLevelRewardTableMgr26GetProperLevelRewardTableREv>
 86877a9:	89 45 ec             	mov    %eax,-0x14(%ebp)
 86877ac:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 86877b0:	75 07                	jne    86877b9 <_ZN20CLevelRewardTableMgr16IsChallengingJobEc+0x27>
 86877b2:	b8 00 00 00 00       	mov    $0x0,%eax
 86877b7:	eb 6d                	jmp    8687826 <_ZN20CLevelRewardTableMgr16IsChallengingJobEc+0x94>
 86877b9:	80 7d e4 0a          	cmpb   $0xa,-0x1c(%ebp)
 86877bd:	7f 06                	jg     86877c5 <_ZN20CLevelRewardTableMgr16IsChallengingJobEc+0x33>
 86877bf:	80 7d e4 00          	cmpb   $0x0,-0x1c(%ebp)
 86877c3:	79 07                	jns    86877cc <_ZN20CLevelRewardTableMgr16IsChallengingJobEc+0x3a>
 86877c5:	b8 00 00 00 00       	mov    $0x0,%eax
 86877ca:	eb 5a                	jmp    8687826 <_ZN20CLevelRewardTableMgr16IsChallengingJobEc+0x94>
 86877cc:	0f be 45 e4          	movsbl -0x1c(%ebp),%eax
 86877d0:	83 c0 01             	add    $0x1,%eax
 86877d3:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 86877da:	00 
 86877db:	89 44 24 04          	mov    %eax,0x4(%esp)
 86877df:	8b 45 ec             	mov    -0x14(%ebp),%eax
 86877e2:	89 04 24             	mov    %eax,(%esp)
 86877e5:	e8 0c ff 00 00       	call   86976f6 <_ZN17CLevelRewardTable15GetRewardItemNoEii>
 86877ea:	89 45 f0             	mov    %eax,-0x10(%ebp)
 86877ed:	0f be 45 e4          	movsbl -0x1c(%ebp),%eax
 86877f1:	83 c0 01             	add    $0x1,%eax
 86877f4:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 86877fb:	00 
 86877fc:	89 44 24 04          	mov    %eax,0x4(%esp)
 8687800:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8687803:	89 04 24             	mov    %eax,(%esp)
 8687806:	e8 07 ff 00 00       	call   8697712 <_ZN17CLevelRewardTable12GetItemCountEii>
 868780b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 868780e:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8687812:	75 0d                	jne    8687821 <_ZN20CLevelRewardTableMgr16IsChallengingJobEc+0x8f>
 8687814:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8687818:	75 07                	jne    8687821 <_ZN20CLevelRewardTableMgr16IsChallengingJobEc+0x8f>
 868781a:	b8 00 00 00 00       	mov    $0x0,%eax
 868781f:	eb 05                	jmp    8687826 <_ZN20CLevelRewardTableMgr16IsChallengingJobEc+0x94>
 8687821:	b8 01 00 00 00       	mov    $0x1,%eax
 8687826:	c9                   	leave
 8687827:	c3                   	ret

```

```c
// CLevelRewardTableMgr::IsChallengingJob @ 0x8687792

/* CLevelRewardTableMgr::IsChallengingJob(char) */

undefined4 __thiscall
CLevelRewardTableMgr::IsChallengingJob(CLevelRewardTableMgr *this,char param_1)

{
  CLevelRewardTable *this_00;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  this_00 = (CLevelRewardTable *)GetProperLevelRewardTableR(this);
  if (this_00 == (CLevelRewardTable *)0x0) {
    uVar1 = 0;
  }
  else if ((param_1 < '\v') && (-1 < param_1)) {
    iVar2 = CLevelRewardTable::GetRewardItemNo(this_00,param_1 + 1,0);
    iVar3 = CLevelRewardTable::GetItemCount(this_00,param_1 + 1,0);
    if ((iVar2 == 0) && (iVar3 == 0)) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## IsHaveStartLevelReward

```asm
// === 08687d18 CLevelRewardTableMgr::IsHaveStartLevelReward  [0x08687d18-0x8687d6b] ===
 8687d18:	55                   	push   %ebp
 8687d19:	89 e5                	mov    %esp,%ebp
 8687d1b:	83 ec 10             	sub    $0x10,%esp
 8687d1e:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 8687d25:	eb 33                	jmp    8687d5a <_ZN20CLevelRewardTableMgr22IsHaveStartLevelRewardEv+0x42>
 8687d27:	8b 45 08             	mov    0x8(%ebp),%eax
 8687d2a:	8b 40 04             	mov    0x4(%eax),%eax
 8687d2d:	8b 55 fc             	mov    -0x4(%ebp),%edx
 8687d30:	8b 04 90             	mov    (%eax,%edx,4),%eax
 8687d33:	85 c0                	test   %eax,%eax
 8687d35:	75 07                	jne    8687d3e <_ZN20CLevelRewardTableMgr22IsHaveStartLevelRewardEv+0x26>
 8687d37:	b8 00 00 00 00       	mov    $0x0,%eax
 8687d3c:	eb 2c                	jmp    8687d6a <_ZN20CLevelRewardTableMgr22IsHaveStartLevelRewardEv+0x52>
 8687d3e:	8b 45 08             	mov    0x8(%ebp),%eax
 8687d41:	8b 40 04             	mov    0x4(%eax),%eax
 8687d44:	8b 55 fc             	mov    -0x4(%ebp),%edx
 8687d47:	8b 04 90             	mov    (%eax,%edx,4),%eax
 8687d4a:	83 f8 01             	cmp    $0x1,%eax
 8687d4d:	75 07                	jne    8687d56 <_ZN20CLevelRewardTableMgr22IsHaveStartLevelRewardEv+0x3e>
 8687d4f:	b8 01 00 00 00       	mov    $0x1,%eax
 8687d54:	eb 14                	jmp    8687d6a <_ZN20CLevelRewardTableMgr22IsHaveStartLevelRewardEv+0x52>
 8687d56:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 8687d5a:	83 7d fc 45          	cmpl   $0x45,-0x4(%ebp)
 8687d5e:	0f 9e c0             	setle  %al
 8687d61:	84 c0                	test   %al,%al
 8687d63:	75 c2                	jne    8687d27 <_ZN20CLevelRewardTableMgr22IsHaveStartLevelRewardEv+0xf>
 8687d65:	b8 00 00 00 00       	mov    $0x0,%eax
 8687d6a:	c9                   	leave
 8687d6b:	c3                   	ret

```

```c
// CLevelRewardTableMgr::IsHaveStartLevelReward @ 0x8687d18

/* CLevelRewardTableMgr::IsHaveStartLevelReward() */

undefined4 __thiscall CLevelRewardTableMgr::IsHaveStartLevelReward(CLevelRewardTableMgr *this)

{
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (0x45 < local_8) {
      return 0;
    }
    if (*(int *)(*(int *)(this + 4) + local_8 * 4) == 0) break;
    if (*(int *)(*(int *)(this + 4) + local_8 * 4) == 1) {
      return 1;
    }
    local_8 = local_8 + 1;
  }
  return 0;
}

```

---

## IsOnServer

```asm
// === 08687d6c CLevelRewardTableMgr::IsOnServer  [0x08687d6c-0x8687e61] ===
 8687d6c:	55                   	push   %ebp
 8687d6d:	89 e5                	mov    %esp,%ebp
 8687d6f:	83 ec 28             	sub    $0x28,%esp
 8687d72:	8b 45 08             	mov    0x8(%ebp),%eax
 8687d75:	83 c0 08             	add    $0x8,%eax
 8687d78:	89 04 24             	mov    %eax,(%esp)
 8687d7b:	e8 40 64 a0 ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 8687d80:	83 f8 01             	cmp    $0x1,%eax
 8687d83:	74 1c                	je     8687da1 <_ZN20CLevelRewardTableMgr10IsOnServerEi+0x35>
 8687d85:	8b 45 08             	mov    0x8(%ebp),%eax
 8687d88:	83 c0 08             	add    $0x8,%eax
 8687d8b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8687d92:	00 
 8687d93:	89 04 24             	mov    %eax,(%esp)
 8687d96:	e8 41 64 a0 ff       	call   808e1dc <_ZNSt6vectorIiSaIiEEixEj>
 8687d9b:	8b 00                	mov    (%eax),%eax
 8687d9d:	85 c0                	test   %eax,%eax
 8687d9f:	75 07                	jne    8687da8 <_ZN20CLevelRewardTableMgr10IsOnServerEi+0x3c>
 8687da1:	b8 01 00 00 00       	mov    $0x1,%eax
 8687da6:	eb 05                	jmp    8687dad <_ZN20CLevelRewardTableMgr10IsOnServerEi+0x41>
 8687da8:	b8 00 00 00 00       	mov    $0x0,%eax
 8687dad:	84 c0                	test   %al,%al
 8687daf:	74 0a                	je     8687dbb <_ZN20CLevelRewardTableMgr10IsOnServerEi+0x4f>
 8687db1:	b8 01 00 00 00       	mov    $0x1,%eax
 8687db6:	e9 a4 00 00 00       	jmp    8687e5f <_ZN20CLevelRewardTableMgr10IsOnServerEi+0xf3>
 8687dbb:	8b 45 08             	mov    0x8(%ebp),%eax
 8687dbe:	83 c0 08             	add    $0x8,%eax
 8687dc1:	89 04 24             	mov    %eax,(%esp)
 8687dc4:	e8 97 4b a9 ff       	call   811c960 <_ZNKSt6vectorIiSaIiEE5emptyEv>
 8687dc9:	84 c0                	test   %al,%al
 8687dcb:	74 0a                	je     8687dd7 <_ZN20CLevelRewardTableMgr10IsOnServerEi+0x6b>
 8687dcd:	b8 00 00 00 00       	mov    $0x0,%eax
 8687dd2:	e9 88 00 00 00       	jmp    8687e5f <_ZN20CLevelRewardTableMgr10IsOnServerEi+0xf3>
 8687dd7:	8b 45 08             	mov    0x8(%ebp),%eax
 8687dda:	8d 50 08             	lea    0x8(%eax),%edx
 8687ddd:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8687de0:	89 54 24 04          	mov    %edx,0x4(%esp)
 8687de4:	89 04 24             	mov    %eax,(%esp)
 8687de7:	e8 5c 64 a0 ff       	call   808e248 <_ZNSt6vectorIiSaIiEE5beginEv>
 8687dec:	83 ec 04             	sub    $0x4,%esp
 8687def:	eb 3b                	jmp    8687e2c <_ZN20CLevelRewardTableMgr10IsOnServerEi+0xc0>
 8687df1:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8687df4:	89 04 24             	mov    %eax,(%esp)
 8687df7:	e8 d0 69 a0 ff       	call   808e7cc <_ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv>
 8687dfc:	8b 00                	mov    (%eax),%eax
 8687dfe:	3b 45 0c             	cmp    0xc(%ebp),%eax
 8687e01:	0f 94 c0             	sete   %al
 8687e04:	84 c0                	test   %al,%al
 8687e06:	74 07                	je     8687e0f <_ZN20CLevelRewardTableMgr10IsOnServerEi+0xa3>
 8687e08:	b8 01 00 00 00       	mov    $0x1,%eax
 8687e0d:	eb 50                	jmp    8687e5f <_ZN20CLevelRewardTableMgr10IsOnServerEi+0xf3>
 8687e0f:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8687e12:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8687e19:	00 
 8687e1a:	8d 55 ec             	lea    -0x14(%ebp),%edx
 8687e1d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8687e21:	89 04 24             	mov    %eax,(%esp)
 8687e24:	e8 dd 9a cb ff       	call   8341906 <_ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEi>
 8687e29:	83 ec 04             	sub    $0x4,%esp
 8687e2c:	8b 45 08             	mov    0x8(%ebp),%eax
 8687e2f:	8d 50 08             	lea    0x8(%eax),%edx
 8687e32:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8687e35:	89 54 24 04          	mov    %edx,0x4(%esp)
 8687e39:	89 04 24             	mov    %eax,(%esp)
 8687e3c:	e8 2b 64 a0 ff       	call   808e26c <_ZNSt6vectorIiSaIiEE3endEv>
 8687e41:	83 ec 04             	sub    $0x4,%esp
 8687e44:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8687e47:	89 44 24 04          	mov    %eax,0x4(%esp)
 8687e4b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8687e4e:	89 04 24             	mov    %eax,(%esp)
 8687e51:	e8 0c 26 a6 ff       	call   80ea462 <_ZN9__gnu_cxxneIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_>
 8687e56:	84 c0                	test   %al,%al
 8687e58:	75 97                	jne    8687df1 <_ZN20CLevelRewardTableMgr10IsOnServerEi+0x85>
 8687e5a:	b8 00 00 00 00       	mov    $0x0,%eax
 8687e5f:	c9                   	leave
 8687e60:	c3                   	ret
 8687e61:	90                   	nop

```

```c
// CLevelRewardTableMgr::IsOnServer @ 0x8687d6c

/* CLevelRewardTableMgr::IsOnServer(int) */

undefined4 __thiscall CLevelRewardTableMgr::IsOnServer(CLevelRewardTableMgr *this,int param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_18 [4];
  __normal_iterator local_14 [4];
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_10 [12];
  
  iVar3 = std::vector<int,std::allocator<int>>::size((vector<int,std::allocator<int>> *)(this + 8));
  if ((iVar3 == 1) ||
     (piVar4 = (int *)std::vector<int,std::allocator<int>>::operator[]
                                ((vector<int,std::allocator<int>> *)(this + 8),0), *piVar4 == 0)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    uVar5 = 1;
  }
  else {
    cVar1 = std::vector<int,std::allocator<int>>::empty();
    if (cVar1 == '\0') {
      std::vector<int,std::allocator<int>>::begin();
      while( true ) {
        std::vector<int,std::allocator<int>>::end();
        bVar2 = __gnu_cxx::operator!=(local_18,local_14);
        if (!bVar2) break;
        piVar4 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                        operator*(local_18);
        if (*piVar4 == param_1) {
          return 1;
        }
        __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                  (local_10,(int)local_18);
      }
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
    }
  }
  return uVar5;
}

```

---

## SetChallengeInfo

```asm
// === 08687828 CLevelRewardTableMgr::SetChallengeInfo  [0x08687828-0x8687d17] ===
 8687828:	55                   	push   %ebp
 8687829:	89 e5                	mov    %esp,%ebp
 868782b:	57                   	push   %edi
 868782c:	56                   	push   %esi
 868782d:	53                   	push   %ebx
 868782e:	81 ec 8c 00 00 00    	sub    $0x8c,%esp
 8687834:	8b 45 0c             	mov    0xc(%ebp),%eax
 8687837:	0f b6 10             	movzbl (%eax),%edx
 868783a:	8b 45 08             	mov    0x8(%ebp),%eax
 868783d:	88 10                	mov    %dl,(%eax)
 868783f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8687842:	8d 50 04             	lea    0x4(%eax),%edx
 8687845:	8b 45 08             	mov    0x8(%ebp),%eax
 8687848:	83 c0 08             	add    $0x8,%eax
 868784b:	89 54 24 04          	mov    %edx,0x4(%esp)
 868784f:	89 04 24             	mov    %eax,(%esp)
 8687852:	e8 7b 57 a4 ff       	call   80ccfd2 <_ZNSt6vectorIiSaIiEEaSERKS1_>
 8687857:	8b 45 08             	mov    0x8(%ebp),%eax
 868785a:	8b 40 04             	mov    0x4(%eax),%eax
 868785d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8687864:	00 
 8687865:	89 04 24             	mov    %eax,(%esp)
 8687868:	e8 f9 fe 00 00       	call   8697766 <_ZN17CLevelRewardTable15SetJobAffectionEb>
 868786d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8687870:	83 c0 10             	add    $0x10,%eax
 8687873:	89 04 24             	mov    %eax,(%esp)
 8687876:	e8 45 69 a0 ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 868787b:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 868787e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8687881:	8d 50 10             	lea    0x10(%eax),%edx
 8687884:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8687887:	89 54 24 04          	mov    %edx,0x4(%esp)
 868788b:	89 04 24             	mov    %eax,(%esp)
 868788e:	e8 b5 69 a0 ff       	call   808e248 <_ZNSt6vectorIiSaIiEE5beginEv>
 8687893:	83 ec 04             	sub    $0x4,%esp
 8687896:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8687899:	89 44 24 04          	mov    %eax,0x4(%esp)
 868789d:	8d 45 9c             	lea    -0x64(%ebp),%eax
 86878a0:	89 04 24             	mov    %eax,(%esp)
 86878a3:	e8 44 21 a7 ff       	call   80f99ec <_ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC1IPiEERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameIS9_S8_E7__valueES5_E6__typeEEE>
 86878a8:	8b 45 0c             	mov    0xc(%ebp),%eax
 86878ab:	8d 50 10             	lea    0x10(%eax),%edx
 86878ae:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 86878b1:	89 54 24 04          	mov    %edx,0x4(%esp)
 86878b5:	89 04 24             	mov    %eax,(%esp)
 86878b8:	e8 af 69 a0 ff       	call   808e26c <_ZNSt6vectorIiSaIiEE3endEv>
 86878bd:	83 ec 04             	sub    $0x4,%esp
 86878c0:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 86878c3:	89 44 24 04          	mov    %eax,0x4(%esp)
 86878c7:	8d 45 98             	lea    -0x68(%ebp),%eax
 86878ca:	89 04 24             	mov    %eax,(%esp)
 86878cd:	e8 1a 21 a7 ff       	call   80f99ec <_ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC1IPiEERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameIS9_S8_E7__valueES5_E6__typeEEE>
 86878d2:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 86878d9:	eb 3a                	jmp    8687915 <_ZN20CLevelRewardTableMgr16SetChallengeInfoER22stUnlimitChallengeInfo+0xed>
 86878db:	8b 45 08             	mov    0x8(%ebp),%eax
 86878de:	8b 58 04             	mov    0x4(%eax),%ebx
 86878e1:	8b 75 d0             	mov    -0x30(%ebp),%esi
 86878e4:	8d 45 9c             	lea    -0x64(%ebp),%eax
 86878e7:	89 04 24             	mov    %eax,(%esp)
 86878ea:	e8 2d 21 a7 ff       	call   80f9a1c <_ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEdeEv>
 86878ef:	8b 00                	mov    (%eax),%eax
 86878f1:	89 04 b3             	mov    %eax,(%ebx,%esi,4)
 86878f4:	83 45 d0 01          	addl   $0x1,-0x30(%ebp)
 86878f8:	8d 45 a8             	lea    -0x58(%ebp),%eax
 86878fb:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8687902:	00 
 8687903:	8d 55 9c             	lea    -0x64(%ebp),%edx
 8687906:	89 54 24 04          	mov    %edx,0x4(%esp)
 868790a:	89 04 24             	mov    %eax,(%esp)
 868790d:	e8 a0 bf b0 ff       	call   81938b2 <_ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEppEi>
 8687912:	83 ec 04             	sub    $0x4,%esp
 8687915:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8687918:	3b 45 c4             	cmp    -0x3c(%ebp),%eax
 868791b:	7d 1d                	jge    868793a <_ZN20CLevelRewardTableMgr16SetChallengeInfoER22stUnlimitChallengeInfo+0x112>
 868791d:	8d 45 98             	lea    -0x68(%ebp),%eax
 8687920:	89 44 24 04          	mov    %eax,0x4(%esp)
 8687924:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8687927:	89 04 24             	mov    %eax,(%esp)
 868792a:	e8 f7 20 a7 ff       	call   80f9a26 <_ZN9__gnu_cxxneIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_>
 868792f:	84 c0                	test   %al,%al
 8687931:	74 07                	je     868793a <_ZN20CLevelRewardTableMgr16SetChallengeInfoER22stUnlimitChallengeInfo+0x112>
 8687933:	b8 01 00 00 00       	mov    $0x1,%eax
 8687938:	eb 05                	jmp    868793f <_ZN20CLevelRewardTableMgr16SetChallengeInfoER22stUnlimitChallengeInfo+0x117>
 868793a:	b8 00 00 00 00       	mov    $0x0,%eax
 868793f:	84 c0                	test   %al,%al
 8687941:	75 98                	jne    86878db <_ZN20CLevelRewardTableMgr16SetChallengeInfoER22stUnlimitChallengeInfo+0xb3>
 8687943:	8b 45 0c             	mov    0xc(%ebp),%eax
 8687946:	83 c0 1c             	add    $0x1c,%eax
 8687949:	89 04 24             	mov    %eax,(%esp)
 868794c:	e8 8b 48 01 00       	call   869c1dc <_ZNKSt6vectorI28stUnlimitChallengeRewardInfoSaIS0_EE4sizeEv>
 8687951:	89 45 c8             	mov    %eax,-0x38(%ebp)
 8687954:	8b 45 0c             	mov    0xc(%ebp),%eax
 8687957:	8d 50 1c             	lea    0x1c(%eax),%edx
 868795a:	8d 45 ac             	lea    -0x54(%ebp),%eax
 868795d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8687961:	89 04 24             	mov    %eax,(%esp)
 8687964:	e8 95 48 01 00       	call   869c1fe <_ZNSt6vectorI28stUnlimitChallengeRewardInfoSaIS0_EE5beginEv>
 8687969:	83 ec 04             	sub    $0x4,%esp
 868796c:	8d 45 ac             	lea    -0x54(%ebp),%eax
 868796f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8687973:	8d 45 94             	lea    -0x6c(%ebp),%eax
 8687976:	89 04 24             	mov    %eax,(%esp)
 8687979:	e8 a4 48 01 00       	call   869c222 <_ZN9__gnu_cxx17__normal_iteratorIPK28stUnlimitChallengeRewardInfoSt6vectorIS1_SaIS1_EEEC1IPS1_EERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameISA_S9_E7__valueES6_E6__typeEEE>
 868797e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8687981:	8d 50 1c             	lea    0x1c(%eax),%edx
 8687984:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8687987:	89 54 24 04          	mov    %edx,0x4(%esp)
 868798b:	89 04 24             	mov    %eax,(%esp)
 868798e:	e8 a9 48 01 00       	call   869c23c <_ZNSt6vectorI28stUnlimitChallengeRewardInfoSaIS0_EE3endEv>
 8687993:	83 ec 04             	sub    $0x4,%esp
 8687996:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8687999:	89 44 24 04          	mov    %eax,0x4(%esp)
 868799d:	8d 45 90             	lea    -0x70(%ebp),%eax
 86879a0:	89 04 24             	mov    %eax,(%esp)
 86879a3:	e8 7a 48 01 00       	call   869c222 <_ZN9__gnu_cxx17__normal_iteratorIPK28stUnlimitChallengeRewardInfoSt6vectorIS1_SaIS1_EEEC1IPS1_EERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameISA_S9_E7__valueES6_E6__typeEEE>
 86879a8:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 86879af:	e9 ee 00 00 00       	jmp    8687aa2 <_ZN20CLevelRewardTableMgr16SetChallengeInfoER22stUnlimitChallengeInfo+0x27a>
 86879b4:	8d 45 94             	lea    -0x6c(%ebp),%eax
 86879b7:	89 04 24             	mov    %eax,(%esp)
 86879ba:	e8 03 49 01 00       	call   869c2c2 <_ZNK9__gnu_cxx17__normal_iteratorIPK28stUnlimitChallengeRewardInfoSt6vectorIS1_SaIS1_EEEptEv>
 86879bf:	0f b7 00             	movzwl (%eax),%eax
 86879c2:	0f b7 c0             	movzwl %ax,%eax
 86879c5:	89 45 d8             	mov    %eax,-0x28(%ebp)
 86879c8:	8d 45 94             	lea    -0x6c(%ebp),%eax
 86879cb:	89 04 24             	mov    %eax,(%esp)
 86879ce:	e8 ef 48 01 00       	call   869c2c2 <_ZNK9__gnu_cxx17__normal_iteratorIPK28stUnlimitChallengeRewardInfoSt6vectorIS1_SaIS1_EEEptEv>
 86879d3:	0f b6 40 02          	movzbl 0x2(%eax),%eax
 86879d7:	0f b6 c0             	movzbl %al,%eax
 86879da:	89 45 dc             	mov    %eax,-0x24(%ebp)
 86879dd:	8b 45 08             	mov    0x8(%ebp),%eax
 86879e0:	8b 58 04             	mov    0x4(%eax),%ebx
 86879e3:	8b 45 dc             	mov    -0x24(%ebp),%eax
 86879e6:	0f be d0             	movsbl %al,%edx
 86879e9:	8b 45 08             	mov    0x8(%ebp),%eax
 86879ec:	8b 40 04             	mov    0x4(%eax),%eax
 86879ef:	89 54 24 04          	mov    %edx,0x4(%esp)
 86879f3:	89 04 24             	mov    %eax,(%esp)
 86879f6:	e8 7d 04 00 00       	call   8687e78 <_ZN17CLevelRewardTable17GetProperJobIndexEc>
 86879fb:	89 c7                	mov    %eax,%edi
 86879fd:	8b 55 d8             	mov    -0x28(%ebp),%edx
 8687a00:	8b 45 08             	mov    0x8(%ebp),%eax
 8687a03:	8b 40 04             	mov    0x4(%eax),%eax
 8687a06:	89 54 24 04          	mov    %edx,0x4(%esp)
 8687a0a:	89 04 24             	mov    %eax,(%esp)
 8687a0d:	e8 b6 fc ff ff       	call   86876c8 <_ZN17CLevelRewardTable19GetProperLevelIndexEj>
 8687a12:	89 c6                	mov    %eax,%esi
 8687a14:	8d 45 94             	lea    -0x6c(%ebp),%eax
 8687a17:	89 04 24             	mov    %eax,(%esp)
 8687a1a:	e8 a3 48 01 00       	call   869c2c2 <_ZNK9__gnu_cxx17__normal_iteratorIPK28stUnlimitChallengeRewardInfoSt6vectorIS1_SaIS1_EEEptEv>
 8687a1f:	8b 40 04             	mov    0x4(%eax),%eax
 8687a22:	6b d7 46             	imul   $0x46,%edi,%edx
 8687a25:	01 f2                	add    %esi,%edx
 8687a27:	83 c2 44             	add    $0x44,%edx
 8687a2a:	89 44 93 08          	mov    %eax,0x8(%ebx,%edx,4)
 8687a2e:	8b 45 08             	mov    0x8(%ebp),%eax
 8687a31:	8b 58 04             	mov    0x4(%eax),%ebx
 8687a34:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8687a37:	0f be d0             	movsbl %al,%edx
 8687a3a:	8b 45 08             	mov    0x8(%ebp),%eax
 8687a3d:	8b 40 04             	mov    0x4(%eax),%eax
 8687a40:	89 54 24 04          	mov    %edx,0x4(%esp)
 8687a44:	89 04 24             	mov    %eax,(%esp)
 8687a47:	e8 2c 04 00 00       	call   8687e78 <_ZN17CLevelRewardTable17GetProperJobIndexEc>
 8687a4c:	89 c7                	mov    %eax,%edi
 8687a4e:	8b 55 d8             	mov    -0x28(%ebp),%edx
 8687a51:	8b 45 08             	mov    0x8(%ebp),%eax
 8687a54:	8b 40 04             	mov    0x4(%eax),%eax
 8687a57:	89 54 24 04          	mov    %edx,0x4(%esp)
 8687a5b:	89 04 24             	mov    %eax,(%esp)
 8687a5e:	e8 65 fc ff ff       	call   86876c8 <_ZN17CLevelRewardTable19GetProperLevelIndexEj>
 8687a63:	89 c6                	mov    %eax,%esi
 8687a65:	8d 45 94             	lea    -0x6c(%ebp),%eax
 8687a68:	89 04 24             	mov    %eax,(%esp)
 8687a6b:	e8 52 48 01 00       	call   869c2c2 <_ZNK9__gnu_cxx17__normal_iteratorIPK28stUnlimitChallengeRewardInfoSt6vectorIS1_SaIS1_EEEptEv>
 8687a70:	8b 40 08             	mov    0x8(%eax),%eax
 8687a73:	6b d7 46             	imul   $0x46,%edi,%edx
 8687a76:	01 f2                	add    %esi,%edx
 8687a78:	81 c2 bc 02 00 00    	add    $0x2bc,%edx
 8687a7e:	89 04 93             	mov    %eax,(%ebx,%edx,4)
 8687a81:	83 45 d4 01          	addl   $0x1,-0x2c(%ebp)
 8687a85:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8687a88:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8687a8f:	00 
 8687a90:	8d 55 94             	lea    -0x6c(%ebp),%edx
 8687a93:	89 54 24 04          	mov    %edx,0x4(%esp)
 8687a97:	89 04 24             	mov    %eax,(%esp)
 8687a9a:	e8 ef 47 01 00       	call   869c28e <_ZN9__gnu_cxx17__normal_iteratorIPK28stUnlimitChallengeRewardInfoSt6vectorIS1_SaIS1_EEEppEi>
 8687a9f:	83 ec 04             	sub    $0x4,%esp
 8687aa2:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8687aa5:	3b 45 c8             	cmp    -0x38(%ebp),%eax
 8687aa8:	7d 1d                	jge    8687ac7 <_ZN20CLevelRewardTableMgr16SetChallengeInfoER22stUnlimitChallengeInfo+0x29f>
 8687aaa:	8d 45 90             	lea    -0x70(%ebp),%eax
 8687aad:	89 44 24 04          	mov    %eax,0x4(%esp)
 8687ab1:	8d 45 94             	lea    -0x6c(%ebp),%eax
 8687ab4:	89 04 24             	mov    %eax,(%esp)
 8687ab7:	e8 a6 47 01 00       	call   869c262 <_ZN9__gnu_cxxneIPK28stUnlimitChallengeRewardInfoSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 8687abc:	84 c0                	test   %al,%al
 8687abe:	74 07                	je     8687ac7 <_ZN20CLevelRewardTableMgr16SetChallengeInfoER22stUnlimitChallengeInfo+0x29f>
 8687ac0:	b8 01 00 00 00       	mov    $0x1,%eax
 8687ac5:	eb 05                	jmp    8687acc <_ZN20CLevelRewardTableMgr16SetChallengeInfoER22stUnlimitChallengeInfo+0x2a4>
 8687ac7:	b8 00 00 00 00       	mov    $0x0,%eax
 8687acc:	84 c0                	test   %al,%al
 8687ace:	0f 85 e0 fe ff ff    	jne    86879b4 <_ZN20CLevelRewardTableMgr16SetChallengeInfoER22stUnlimitChallengeInfo+0x18c>
 8687ad4:	8b 45 0c             	mov    0xc(%ebp),%eax
 8687ad7:	83 c0 28             	add    $0x28,%eax
 8687ada:	89 04 24             	mov    %eax,(%esp)
 8687add:	e8 ea 47 01 00       	call   869c2cc <_ZNKSt6vectorI29stUnlimitChallengeMessageInfoSaIS0_EE4sizeEv>
 8687ae2:	89 45 cc             	mov    %eax,-0x34(%ebp)
 8687ae5:	8b 45 0c             	mov    0xc(%ebp),%eax
 8687ae8:	8d 50 28             	lea    0x28(%eax),%edx
 8687aeb:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8687aee:	89 54 24 04          	mov    %edx,0x4(%esp)
 8687af2:	89 04 24             	mov    %eax,(%esp)
 8687af5:	e8 f4 47 01 00       	call   869c2ee <_ZNSt6vectorI29stUnlimitChallengeMessageInfoSaIS0_EE5beginEv>
 8687afa:	83 ec 04             	sub    $0x4,%esp
 8687afd:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8687b00:	89 44 24 04          	mov    %eax,0x4(%esp)
 8687b04:	8d 45 8c             	lea    -0x74(%ebp),%eax
 8687b07:	89 04 24             	mov    %eax,(%esp)
 8687b0a:	e8 03 48 01 00       	call   869c312 <_ZN9__gnu_cxx17__normal_iteratorIPK29stUnlimitChallengeMessageInfoSt6vectorIS1_SaIS1_EEEC1IPS1_EERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameISA_S9_E7__valueES6_E6__typeEEE>
 8687b0f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8687b12:	8d 50 28             	lea    0x28(%eax),%edx
 8687b15:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8687b18:	89 54 24 04          	mov    %edx,0x4(%esp)
 8687b1c:	89 04 24             	mov    %eax,(%esp)
 8687b1f:	e8 08 48 01 00       	call   869c32c <_ZNSt6vectorI29stUnlimitChallengeMessageInfoSaIS0_EE3endEv>
 8687b24:	83 ec 04             	sub    $0x4,%esp
 8687b27:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8687b2a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8687b2e:	8d 45 88             	lea    -0x78(%ebp),%eax
 8687b31:	89 04 24             	mov    %eax,(%esp)
 8687b34:	e8 d9 47 01 00       	call   869c312 <_ZN9__gnu_cxx17__normal_iteratorIPK29stUnlimitChallengeMessageInfoSt6vectorIS1_SaIS1_EEEC1IPS1_EERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameISA_S9_E7__valueES6_E6__typeEEE>
 8687b39:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8687b40:	e9 96 01 00 00       	jmp    8687cdb <_ZN20CLevelRewardTableMgr16SetChallengeInfoER22stUnlimitChallengeInfo+0x4b3>
 8687b45:	8d 45 8c             	lea    -0x74(%ebp),%eax
 8687b48:	89 04 24             	mov    %eax,(%esp)
 8687b4b:	e8 62 48 01 00       	call   869c3b2 <_ZNK9__gnu_cxx17__normal_iteratorIPK29stUnlimitChallengeMessageInfoSt6vectorIS1_SaIS1_EEEptEv>
 8687b50:	0f b7 00             	movzwl (%eax),%eax
 8687b53:	0f b7 c0             	movzwl %ax,%eax
 8687b56:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8687b59:	8d 45 8c             	lea    -0x74(%ebp),%eax
 8687b5c:	89 04 24             	mov    %eax,(%esp)
 8687b5f:	e8 4e 48 01 00       	call   869c3b2 <_ZNK9__gnu_cxx17__normal_iteratorIPK29stUnlimitChallengeMessageInfoSt6vectorIS1_SaIS1_EEEptEv>
 8687b64:	83 c0 04             	add    $0x4,%eax
 8687b67:	89 44 24 04          	mov    %eax,0x4(%esp)
 8687b6b:	8d 45 84             	lea    -0x7c(%ebp),%eax
 8687b6e:	89 04 24             	mov    %eax,(%esp)
 8687b71:	e8 3a fe 07 00       	call   87079b0 <_ZNSsC1ERKSs>
 8687b76:	8d 45 8c             	lea    -0x74(%ebp),%eax
 8687b79:	89 04 24             	mov    %eax,(%esp)
 8687b7c:	e8 31 48 01 00       	call   869c3b2 <_ZNK9__gnu_cxx17__normal_iteratorIPK29stUnlimitChallengeMessageInfoSt6vectorIS1_SaIS1_EEEptEv>
 8687b81:	83 c0 08             	add    $0x8,%eax
 8687b84:	89 44 24 04          	mov    %eax,0x4(%esp)
 8687b88:	8d 45 80             	lea    -0x80(%ebp),%eax
 8687b8b:	89 04 24             	mov    %eax,(%esp)
 8687b8e:	e8 1d fe 07 00       	call   87079b0 <_ZNSsC1ERKSs>
 8687b93:	8d 45 84             	lea    -0x7c(%ebp),%eax
 8687b96:	89 04 24             	mov    %eax,(%esp)
 8687b99:	e8 52 e9 07 00       	call   87064f0 <_ZNKSs5c_strEv>
 8687b9e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8687ba5:	00 
 8687ba6:	89 44 24 08          	mov    %eax,0x8(%esp)
 8687baa:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8687bb1:	00 
 8687bb2:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 8687bb9:	e8 40 dc 41 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 8687bbe:	89 c3                	mov    %eax,%ebx
 8687bc0:	8b 45 08             	mov    0x8(%ebp),%eax
 8687bc3:	8b 70 04             	mov    0x4(%eax),%esi
 8687bc6:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8687bc9:	8b 45 08             	mov    0x8(%ebp),%eax
 8687bcc:	8b 40 04             	mov    0x4(%eax),%eax
 8687bcf:	89 54 24 04          	mov    %edx,0x4(%esp)
 8687bd3:	89 04 24             	mov    %eax,(%esp)
 8687bd6:	e8 ed fa ff ff       	call   86876c8 <_ZN17CLevelRewardTable19GetProperLevelIndexEj>
 8687bdb:	89 c2                	mov    %eax,%edx
 8687bdd:	89 d0                	mov    %edx,%eax
 8687bdf:	c1 e0 02             	shl    $0x2,%eax
 8687be2:	01 d0                	add    %edx,%eax
 8687be4:	c1 e0 02             	shl    $0x2,%eax
 8687be7:	01 d0                	add    %edx,%eax
 8687be9:	05 c0 14 00 00       	add    $0x14c0,%eax
 8687bee:	8d 04 06             	lea    (%esi,%eax,1),%eax
 8687bf1:	83 c0 08             	add    $0x8,%eax
 8687bf4:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 8687bfb:	00 
 8687bfc:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8687c00:	89 04 24             	mov    %eax,(%esp)
 8687c03:	e8 c8 5c 9f ff       	call   807d8d0 <strncpy@plt>
 8687c08:	8d 45 80             	lea    -0x80(%ebp),%eax
 8687c0b:	89 04 24             	mov    %eax,(%esp)
 8687c0e:	e8 dd e8 07 00       	call   87064f0 <_ZNKSs5c_strEv>
 8687c13:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8687c1a:	00 
 8687c1b:	89 44 24 08          	mov    %eax,0x8(%esp)
 8687c1f:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8687c26:	00 
 8687c27:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 8687c2e:	e8 cb db 41 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 8687c33:	89 c3                	mov    %eax,%ebx
 8687c35:	8b 45 08             	mov    0x8(%ebp),%eax
 8687c38:	8b 70 04             	mov    0x4(%eax),%esi
 8687c3b:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8687c3e:	8b 45 08             	mov    0x8(%ebp),%eax
 8687c41:	8b 40 04             	mov    0x4(%eax),%eax
 8687c44:	89 54 24 04          	mov    %edx,0x4(%esp)
 8687c48:	89 04 24             	mov    %eax,(%esp)
 8687c4b:	e8 78 fa ff ff       	call   86876c8 <_ZN17CLevelRewardTable19GetProperLevelIndexEj>
 8687c50:	c1 e0 08             	shl    $0x8,%eax
 8687c53:	05 80 1a 00 00       	add    $0x1a80,%eax
 8687c58:	8d 04 06             	lea    (%esi,%eax,1),%eax
 8687c5b:	83 c0 06             	add    $0x6,%eax
 8687c5e:	c7 44 24 08 ff 00 00 	movl   $0xff,0x8(%esp)
 8687c65:	00 
 8687c66:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8687c6a:	89 04 24             	mov    %eax,(%esp)
 8687c6d:	e8 5e 5c 9f ff       	call   807d8d0 <strncpy@plt>
 8687c72:	8d 45 80             	lea    -0x80(%ebp),%eax
 8687c75:	89 04 24             	mov    %eax,(%esp)
 8687c78:	e8 63 ff 07 00       	call   8707be0 <_ZNSsD1Ev>
 8687c7d:	eb 30                	jmp    8687caf <_ZN20CLevelRewardTableMgr16SetChallengeInfoER22stUnlimitChallengeInfo+0x487>
 8687c7f:	89 d3                	mov    %edx,%ebx
 8687c81:	89 c6                	mov    %eax,%esi
 8687c83:	8d 45 80             	lea    -0x80(%ebp),%eax
 8687c86:	89 04 24             	mov    %eax,(%esp)
 8687c89:	e8 52 ff 07 00       	call   8707be0 <_ZNSsD1Ev>
 8687c8e:	89 f0                	mov    %esi,%eax
 8687c90:	89 da                	mov    %ebx,%edx
 8687c92:	eb 00                	jmp    8687c94 <_ZN20CLevelRewardTableMgr16SetChallengeInfoER22stUnlimitChallengeInfo+0x46c>
 8687c94:	89 d3                	mov    %edx,%ebx
 8687c96:	89 c6                	mov    %eax,%esi
 8687c98:	8d 45 84             	lea    -0x7c(%ebp),%eax
 8687c9b:	89 04 24             	mov    %eax,(%esp)
 8687c9e:	e8 3d ff 07 00       	call   8707be0 <_ZNSsD1Ev>
 8687ca3:	89 f0                	mov    %esi,%eax
 8687ca5:	89 da                	mov    %ebx,%edx
 8687ca7:	89 04 24             	mov    %eax,(%esp)
 8687caa:	e8 a1 ba 45 00       	call   8ae3750 <_Unwind_Resume>
 8687caf:	8d 45 84             	lea    -0x7c(%ebp),%eax
 8687cb2:	89 04 24             	mov    %eax,(%esp)
 8687cb5:	e8 26 ff 07 00       	call   8707be0 <_ZNSsD1Ev>
 8687cba:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 8687cbe:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8687cc1:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8687cc8:	00 
 8687cc9:	8d 55 8c             	lea    -0x74(%ebp),%edx
 8687ccc:	89 54 24 04          	mov    %edx,0x4(%esp)
 8687cd0:	89 04 24             	mov    %eax,(%esp)
 8687cd3:	e8 a6 46 01 00       	call   869c37e <_ZN9__gnu_cxx17__normal_iteratorIPK29stUnlimitChallengeMessageInfoSt6vectorIS1_SaIS1_EEEppEi>
 8687cd8:	83 ec 04             	sub    $0x4,%esp
 8687cdb:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8687cde:	3b 45 cc             	cmp    -0x34(%ebp),%eax
 8687ce1:	7d 1d                	jge    8687d00 <_ZN20CLevelRewardTableMgr16SetChallengeInfoER22stUnlimitChallengeInfo+0x4d8>
 8687ce3:	8d 45 88             	lea    -0x78(%ebp),%eax
 8687ce6:	89 44 24 04          	mov    %eax,0x4(%esp)
 8687cea:	8d 45 8c             	lea    -0x74(%ebp),%eax
 8687ced:	89 04 24             	mov    %eax,(%esp)
 8687cf0:	e8 5d 46 01 00       	call   869c352 <_ZN9__gnu_cxxneIPK29stUnlimitChallengeMessageInfoSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 8687cf5:	84 c0                	test   %al,%al
 8687cf7:	74 07                	je     8687d00 <_ZN20CLevelRewardTableMgr16SetChallengeInfoER22stUnlimitChallengeInfo+0x4d8>
 8687cf9:	b8 01 00 00 00       	mov    $0x1,%eax
 8687cfe:	eb 05                	jmp    8687d05 <_ZN20CLevelRewardTableMgr16SetChallengeInfoER22stUnlimitChallengeInfo+0x4dd>
 8687d00:	b8 00 00 00 00       	mov    $0x0,%eax
 8687d05:	84 c0                	test   %al,%al
 8687d07:	0f 85 38 fe ff ff    	jne    8687b45 <_ZN20CLevelRewardTableMgr16SetChallengeInfoER22stUnlimitChallengeInfo+0x31d>
 8687d0d:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8687d10:	83 c4 00             	add    $0x0,%esp
 8687d13:	5b                   	pop    %ebx
 8687d14:	5e                   	pop    %esi
 8687d15:	5f                   	pop    %edi
 8687d16:	5d                   	pop    %ebp
 8687d17:	c3                   	ret

```

```c
// CLevelRewardTableMgr::SetChallengeInfo @ 0x8687828

/* CLevelRewardTableMgr::SetChallengeInfo(stUnlimitChallengeInfo&) */

void __thiscall
CLevelRewardTableMgr::SetChallengeInfo(CLevelRewardTableMgr *this,stUnlimitChallengeInfo *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  string local_84 [4];
  string local_80 [4];
  __normal_iterator<stUnlimitChallengeMessageInfo_const*,std::vector<stUnlimitChallengeMessageInfo,std::allocator<stUnlimitChallengeMessageInfo>>>
  local_7c [4];
  __normal_iterator<stUnlimitChallengeMessageInfo_const*,std::vector<stUnlimitChallengeMessageInfo,std::allocator<stUnlimitChallengeMessageInfo>>>
  local_78 [4];
  __normal_iterator<stUnlimitChallengeRewardInfo_const*,std::vector<stUnlimitChallengeRewardInfo,std::allocator<stUnlimitChallengeRewardInfo>>>
  local_74 [4];
  __normal_iterator<stUnlimitChallengeRewardInfo_const*,std::vector<stUnlimitChallengeRewardInfo,std::allocator<stUnlimitChallengeRewardInfo>>>
  local_70 [4];
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_6c [4];
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_68 [4];
  __normal_iterator local_64 [4];
  __normal_iterator local_60 [4];
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_5c [4];
  __normal_iterator local_58 [4];
  __normal_iterator local_54 [4];
  __normal_iterator<stUnlimitChallengeRewardInfo_const*,std::vector<stUnlimitChallengeRewardInfo,std::allocator<stUnlimitChallengeRewardInfo>>>
  local_50 [4];
  __normal_iterator local_4c [4];
  __normal_iterator local_48 [4];
  __normal_iterator<stUnlimitChallengeMessageInfo_const*,std::vector<stUnlimitChallengeMessageInfo,std::allocator<stUnlimitChallengeMessageInfo>>>
  local_44 [4];
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  uint local_2c;
  uint local_28;
  int local_24;
  uint local_20;
  
  *this = *(CLevelRewardTableMgr *)param_1;
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 8),(vector *)(param_1 + 4));
  CLevelRewardTable::SetJobAffection(*(CLevelRewardTable **)(this + 4),true);
  local_40 = std::vector<int,std::allocator<int>>::size
                       ((vector<int,std::allocator<int>> *)(param_1 + 0x10));
  std::vector<int,std::allocator<int>>::begin();
  __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
  __normal_iterator<int*>(local_68,local_64);
  std::vector<int,std::allocator<int>>::end();
  __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
  __normal_iterator<int*>(local_6c,local_60);
  local_34 = 0;
  do {
    if (local_34 < local_40) {
      bVar1 = __gnu_cxx::operator!=(local_68,local_6c);
      if (!bVar1) goto LAB_0868793a;
      bVar1 = true;
    }
    else {
LAB_0868793a:
      bVar1 = false;
    }
    iVar6 = local_34;
    if (!bVar1) break;
    iVar8 = *(int *)(this + 4);
    puVar2 = (undefined4 *)
             __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
             operator*(local_68);
    *(undefined4 *)(iVar8 + iVar6 * 4) = *puVar2;
    local_34 = local_34 + 1;
    __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::operator++
              (local_5c,(int)local_68);
  } while( true );
  local_3c = std::vector<stUnlimitChallengeRewardInfo,std::allocator<stUnlimitChallengeRewardInfo>>
             ::size((vector<stUnlimitChallengeRewardInfo,std::allocator<stUnlimitChallengeRewardInfo>>
                     *)(param_1 + 0x1c));
  std::vector<stUnlimitChallengeRewardInfo,std::allocator<stUnlimitChallengeRewardInfo>>::begin();
  __gnu_cxx::
  __normal_iterator<stUnlimitChallengeRewardInfo_const*,std::vector<stUnlimitChallengeRewardInfo,std::allocator<stUnlimitChallengeRewardInfo>>>
  ::__normal_iterator<stUnlimitChallengeRewardInfo*>(local_70,local_58);
  std::vector<stUnlimitChallengeRewardInfo,std::allocator<stUnlimitChallengeRewardInfo>>::end();
  __gnu_cxx::
  __normal_iterator<stUnlimitChallengeRewardInfo_const*,std::vector<stUnlimitChallengeRewardInfo,std::allocator<stUnlimitChallengeRewardInfo>>>
  ::__normal_iterator<stUnlimitChallengeRewardInfo*>(local_74,local_54);
  local_30 = 0;
  do {
    if (local_30 < local_3c) {
      bVar1 = __gnu_cxx::operator!=(local_70,local_74);
      if (!bVar1) goto LAB_08687ac7;
      bVar1 = true;
    }
    else {
LAB_08687ac7:
      bVar1 = false;
    }
    if (!bVar1) break;
    puVar5 = (ushort *)
             __gnu_cxx::
             __normal_iterator<stUnlimitChallengeRewardInfo_const*,std::vector<stUnlimitChallengeRewardInfo,std::allocator<stUnlimitChallengeRewardInfo>>>
             ::operator->(local_70);
    local_2c = (uint)*puVar5;
    iVar8 = __gnu_cxx::
            __normal_iterator<stUnlimitChallengeRewardInfo_const*,std::vector<stUnlimitChallengeRewardInfo,std::allocator<stUnlimitChallengeRewardInfo>>>
            ::operator->(local_70);
    local_28 = (uint)*(byte *)(iVar8 + 2);
    iVar6 = *(int *)(this + 4);
    iVar8 = CLevelRewardTable::GetProperJobIndex
                      (*(CLevelRewardTable **)(this + 4),*(byte *)(iVar8 + 2));
    iVar3 = CLevelRewardTable::GetProperLevelIndex(*(CLevelRewardTable **)(this + 4),local_2c);
    iVar4 = __gnu_cxx::
            __normal_iterator<stUnlimitChallengeRewardInfo_const*,std::vector<stUnlimitChallengeRewardInfo,std::allocator<stUnlimitChallengeRewardInfo>>>
            ::operator->(local_70);
    *(undefined4 *)(iVar6 + 8 + (iVar8 * 0x46 + iVar3 + 0x44) * 4) = *(undefined4 *)(iVar4 + 4);
    iVar6 = *(int *)(this + 4);
    iVar8 = CLevelRewardTable::GetProperJobIndex(*(CLevelRewardTable **)(this + 4),(char)local_28);
    iVar3 = CLevelRewardTable::GetProperLevelIndex(*(CLevelRewardTable **)(this + 4),local_2c);
    iVar4 = __gnu_cxx::
            __normal_iterator<stUnlimitChallengeRewardInfo_const*,std::vector<stUnlimitChallengeRewardInfo,std::allocator<stUnlimitChallengeRewardInfo>>>
            ::operator->(local_70);
    *(undefined4 *)(iVar6 + (iVar8 * 0x46 + iVar3 + 700) * 4) = *(undefined4 *)(iVar4 + 8);
    local_30 = local_30 + 1;
    __gnu_cxx::
    __normal_iterator<stUnlimitChallengeRewardInfo_const*,std::vector<stUnlimitChallengeRewardInfo,std::allocator<stUnlimitChallengeRewardInfo>>>
    ::operator++(local_50,(int)local_70);
  } while( true );
  local_38 = std::
             vector<stUnlimitChallengeMessageInfo,std::allocator<stUnlimitChallengeMessageInfo>>::
             size((vector<stUnlimitChallengeMessageInfo,std::allocator<stUnlimitChallengeMessageInfo>>
                   *)(param_1 + 0x28));
  std::vector<stUnlimitChallengeMessageInfo,std::allocator<stUnlimitChallengeMessageInfo>>::begin();
  __gnu_cxx::
  __normal_iterator<stUnlimitChallengeMessageInfo_const*,std::vector<stUnlimitChallengeMessageInfo,std::allocator<stUnlimitChallengeMessageInfo>>>
  ::__normal_iterator<stUnlimitChallengeMessageInfo*>(local_78,local_4c);
  std::vector<stUnlimitChallengeMessageInfo,std::allocator<stUnlimitChallengeMessageInfo>>::end();
  __gnu_cxx::
  __normal_iterator<stUnlimitChallengeMessageInfo_const*,std::vector<stUnlimitChallengeMessageInfo,std::allocator<stUnlimitChallengeMessageInfo>>>
  ::__normal_iterator<stUnlimitChallengeMessageInfo*>(local_7c,local_48);
  local_24 = 0;
  do {
    if (local_24 < local_38) {
      bVar1 = __gnu_cxx::operator!=(local_78,local_7c);
      if (!bVar1) goto LAB_08687d00;
      bVar1 = true;
    }
    else {
LAB_08687d00:
      bVar1 = false;
    }
    if (!bVar1) {
      return;
    }
    puVar5 = (ushort *)
             __gnu_cxx::
             __normal_iterator<stUnlimitChallengeMessageInfo_const*,std::vector<stUnlimitChallengeMessageInfo,std::allocator<stUnlimitChallengeMessageInfo>>>
             ::operator->(local_78);
    local_20 = (uint)*puVar5;
    iVar6 = __gnu_cxx::
            __normal_iterator<stUnlimitChallengeMessageInfo_const*,std::vector<stUnlimitChallengeMessageInfo,std::allocator<stUnlimitChallengeMessageInfo>>>
            ::operator->(local_78);
    std::string::string(local_80,(string *)(iVar6 + 4));
    iVar6 = __gnu_cxx::
            __normal_iterator<stUnlimitChallengeMessageInfo_const*,std::vector<stUnlimitChallengeMessageInfo,std::allocator<stUnlimitChallengeMessageInfo>>>
            ::operator->(local_78);
                    /* try { // try from 08687b8e to 08687b92 has its CatchHandler @ 08687c94 */
    std::string::string(local_84,(string *)(iVar6 + 8));
                    /* try { // try from 08687b99 to 08687c32 has its CatchHandler @ 08687c7f */
    pcVar7 = (char *)std::string::c_str(local_80);
    pcVar7 = (char *)RDARScriptStringManager::findString
                               ((RDARScriptStringManager *)g_scriptStringManager_,4,pcVar7,
                                (bool *)0x0);
    iVar6 = *(int *)(this + 4);
    iVar8 = CLevelRewardTable::GetProperLevelIndex(*(CLevelRewardTable **)(this + 4),local_20);
    strncpy((char *)(iVar6 + iVar8 * 0x15 + 0x14c8),pcVar7,0x14);
    pcVar7 = (char *)std::string::c_str(local_84);
    pcVar7 = (char *)RDARScriptStringManager::findString
                               ((RDARScriptStringManager *)g_scriptStringManager_,4,pcVar7,
                                (bool *)0x0);
    iVar6 = *(int *)(this + 4);
    iVar8 = CLevelRewardTable::GetProperLevelIndex(*(CLevelRewardTable **)(this + 4),local_20);
    strncpy((char *)(iVar6 + iVar8 * 0x100 + 0x1a86),pcVar7,0xff);
                    /* try { // try from 08687c78 to 08687c7c has its CatchHandler @ 08687c94 */
    std::string::~string(local_84);
    std::string::~string(local_80);
    local_24 = local_24 + 1;
    __gnu_cxx::
    __normal_iterator<stUnlimitChallengeMessageInfo_const*,std::vector<stUnlimitChallengeMessageInfo,std::allocator<stUnlimitChallengeMessageInfo>>>
    ::operator++(local_44,(int)local_78);
  } while( true );
}

```

---

## ~CLevelRewardTableMgr

```asm
// === 0868777c CLevelRewardTableMgr::~CLevelRewardTableMgr  [0x0868777c-0x8687791] ===
 868777c:	55                   	push   %ebp
 868777d:	89 e5                	mov    %esp,%ebp
 868777f:	83 ec 18             	sub    $0x18,%esp
 8687782:	8b 45 08             	mov    0x8(%ebp),%eax
 8687785:	83 c0 08             	add    $0x8,%eax
 8687788:	89 04 24             	mov    %eax,(%esp)
 868778b:	e8 4a c6 9f ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 8687790:	c9                   	leave
 8687791:	c3                   	ret

```

```c
// CLevelRewardTableMgr::~CLevelRewardTableMgr @ 0x868777c

/* CLevelRewardTableMgr::~CLevelRewardTableMgr() */

void __thiscall CLevelRewardTableMgr::~CLevelRewardTableMgr(CLevelRewardTableMgr *this)

{
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 8));
  return;
}

```

