# GuildParameterScript

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 7

---

## getExpWeight

```asm
// === 08979864 GuildParameterScript::getExpWeight  [0x08979864-0x89798ef] ===
 8979864:	55                   	push   %ebp
 8979865:	89 e5                	mov    %esp,%ebp
 8979867:	83 ec 28             	sub    $0x28,%esp
 897986a:	8b 45 08             	mov    0x8(%ebp),%eax
 897986d:	05 e4 00 00 00       	add    $0xe4,%eax
 8979872:	89 04 24             	mov    %eax,(%esp)
 8979875:	e8 c2 03 00 00       	call   8979c3c <_ZNKSt6vectorISt4pairIidESaIS1_EE4sizeEv>
 897987a:	83 e8 01             	sub    $0x1,%eax
 897987d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8979880:	eb 45                	jmp    89798c7 <_ZN20GuildParameterScript12getExpWeightEi+0x63>
 8979882:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8979885:	8b 55 08             	mov    0x8(%ebp),%edx
 8979888:	81 c2 e4 00 00 00    	add    $0xe4,%edx
 897988e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8979892:	89 14 24             	mov    %edx,(%esp)
 8979895:	e8 c4 03 00 00       	call   8979c5e <_ZNSt6vectorISt4pairIidESaIS1_EEixEj>
 897989a:	8b 00                	mov    (%eax),%eax
 897989c:	3b 45 0c             	cmp    0xc(%ebp),%eax
 897989f:	0f 9e c0             	setle  %al
 89798a2:	84 c0                	test   %al,%al
 89798a4:	74 1d                	je     89798c3 <_ZN20GuildParameterScript12getExpWeightEi+0x5f>
 89798a6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 89798a9:	8b 55 08             	mov    0x8(%ebp),%edx
 89798ac:	81 c2 e4 00 00 00    	add    $0xe4,%edx
 89798b2:	89 44 24 04          	mov    %eax,0x4(%esp)
 89798b6:	89 14 24             	mov    %edx,(%esp)
 89798b9:	e8 a0 03 00 00       	call   8979c5e <_ZNSt6vectorISt4pairIidESaIS1_EEixEj>
 89798be:	dd 40 04             	fldl   0x4(%eax)
 89798c1:	eb 2b                	jmp    89798ee <_ZN20GuildParameterScript12getExpWeightEi+0x8a>
 89798c3:	83 6d f4 01          	subl   $0x1,-0xc(%ebp)
 89798c7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 89798ca:	f7 d0                	not    %eax
 89798cc:	c1 e8 1f             	shr    $0x1f,%eax
 89798cf:	84 c0                	test   %al,%al
 89798d1:	75 af                	jne    8979882 <_ZN20GuildParameterScript12getExpWeightEi+0x1e>
 89798d3:	8b 45 08             	mov    0x8(%ebp),%eax
 89798d6:	05 e4 00 00 00       	add    $0xe4,%eax
 89798db:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 89798e2:	00 
 89798e3:	89 04 24             	mov    %eax,(%esp)
 89798e6:	e8 73 03 00 00       	call   8979c5e <_ZNSt6vectorISt4pairIidESaIS1_EEixEj>
 89798eb:	dd 40 04             	fldl   0x4(%eax)
 89798ee:	c9                   	leave
 89798ef:	c3                   	ret

```

```c
// GuildParameterScript::getExpWeight @ 0x8979864

/* GuildParameterScript::getExpWeight(int) */

longdouble __thiscall GuildParameterScript::getExpWeight(GuildParameterScript *this,int param_1)

{
  double dVar1;
  int *piVar2;
  int iVar3;
  uint local_10;
  
  local_10 = std::vector<std::pair<int,double>,std::allocator<std::pair<int,double>>>::size
                       ((vector<std::pair<int,double>,std::allocator<std::pair<int,double>>> *)
                        (this + 0xe4));
  do {
    local_10 = local_10 - 1;
    if ((int)local_10 < 0) {
      iVar3 = std::vector<std::pair<int,double>,std::allocator<std::pair<int,double>>>::operator[]
                        ((vector<std::pair<int,double>,std::allocator<std::pair<int,double>>> *)
                         (this + 0xe4),0);
      dVar1 = *(double *)(iVar3 + 4);
      goto LAB_089798ee;
    }
    piVar2 = (int *)std::vector<std::pair<int,double>,std::allocator<std::pair<int,double>>>::
                    operator[]((vector<std::pair<int,double>,std::allocator<std::pair<int,double>>>
                                *)(this + 0xe4),local_10);
  } while (param_1 < *piVar2);
  iVar3 = std::vector<std::pair<int,double>,std::allocator<std::pair<int,double>>>::operator[]
                    ((vector<std::pair<int,double>,std::allocator<std::pair<int,double>>> *)
                     (this + 0xe4),local_10);
  dVar1 = *(double *)(iVar3 + 4);
LAB_089798ee:
  return (longdouble)dVar1;
}

```

---

## getGuildAgitUpgradeInfo

```asm
// === 089796dc GuildParameterScript::getGuildAgitUpgradeInfo  [0x089796dc-0x8979725] ===
 89796dc:	55                   	push   %ebp
 89796dd:	89 e5                	mov    %esp,%ebp
 89796df:	53                   	push   %ebx
 89796e0:	83 ec 14             	sub    $0x14,%esp
 89796e3:	8b 45 0c             	mov    0xc(%ebp),%eax
 89796e6:	8d 58 ff             	lea    -0x1(%eax),%ebx
 89796e9:	8b 45 08             	mov    0x8(%ebp),%eax
 89796ec:	83 c0 2c             	add    $0x2c,%eax
 89796ef:	89 04 24             	mov    %eax,(%esp)
 89796f2:	e8 39 04 00 00       	call   8979b30 <_ZNKSt6vectorI17STAgitUpgradeInfoSaIS0_EE4sizeEv>
 89796f7:	39 c3                	cmp    %eax,%ebx
 89796f9:	0f 9c c0             	setl   %al
 89796fc:	84 c0                	test   %al,%al
 89796fe:	74 1a                	je     897971a <_ZN20GuildParameterScript23getGuildAgitUpgradeInfoEi+0x3e>
 8979700:	8b 45 0c             	mov    0xc(%ebp),%eax
 8979703:	83 e8 01             	sub    $0x1,%eax
 8979706:	8b 55 08             	mov    0x8(%ebp),%edx
 8979709:	83 c2 2c             	add    $0x2c,%edx
 897970c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8979710:	89 14 24             	mov    %edx,(%esp)
 8979713:	e8 34 04 00 00       	call   8979b4c <_ZNSt6vectorI17STAgitUpgradeInfoSaIS0_EE2atEj>
 8979718:	eb 05                	jmp    897971f <_ZN20GuildParameterScript23getGuildAgitUpgradeInfoEi+0x43>
 897971a:	b8 00 00 00 00       	mov    $0x0,%eax
 897971f:	83 c4 14             	add    $0x14,%esp
 8979722:	5b                   	pop    %ebx
 8979723:	5d                   	pop    %ebp
 8979724:	c3                   	ret
 8979725:	90                   	nop

```

```c
// GuildParameterScript::getGuildAgitUpgradeInfo @ 0x89796dc

/* GuildParameterScript::getGuildAgitUpgradeInfo(int) */

undefined4 __thiscall
GuildParameterScript::getGuildAgitUpgradeInfo(GuildParameterScript *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = std::vector<STAgitUpgradeInfo,std::allocator<STAgitUpgradeInfo>>::size
                    ((vector<STAgitUpgradeInfo,std::allocator<STAgitUpgradeInfo>> *)(this + 0x2c));
  if (param_1 + -1 < iVar1) {
    uVar2 = std::vector<STAgitUpgradeInfo,std::allocator<STAgitUpgradeInfo>>::at
                      ((vector<STAgitUpgradeInfo,std::allocator<STAgitUpgradeInfo>> *)(this + 0x2c),
                       param_1 - 1);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## getGuildCargoUpradeInfo

```asm
// === 08979726 GuildParameterScript::getGuildCargoUpradeInfo  [0x08979726-0x89797a3] ===
 8979726:	55                   	push   %ebp
 8979727:	89 e5                	mov    %esp,%ebp
 8979729:	83 ec 28             	sub    $0x28,%esp
 897972c:	8b 45 08             	mov    0x8(%ebp),%eax
 897972f:	8d 50 38             	lea    0x38(%eax),%edx
 8979732:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8979735:	89 54 24 04          	mov    %edx,0x4(%esp)
 8979739:	89 04 24             	mov    %eax,(%esp)
 897973c:	e8 37 04 00 00       	call   8979b78 <_ZNSt6vectorI25STGuildStorageUpgradeInfoSaIS0_EE5beginEv>
 8979741:	83 ec 04             	sub    $0x4,%esp
 8979744:	eb 28                	jmp    897976e <_ZN20GuildParameterScript23getGuildCargoUpradeInfoEi+0x48>
 8979746:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8979749:	89 04 24             	mov    %eax,(%esp)
 897974c:	e8 9d 04 00 00       	call   8979bee <_ZNK9__gnu_cxx17__normal_iteratorIP25STGuildStorageUpgradeInfoSt6vectorIS1_SaIS1_EEEdeEv>
 8979751:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8979754:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8979757:	8b 00                	mov    (%eax),%eax
 8979759:	3b 45 0c             	cmp    0xc(%ebp),%eax
 897975c:	75 05                	jne    8979763 <_ZN20GuildParameterScript23getGuildCargoUpradeInfoEi+0x3d>
 897975e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8979761:	eb 3e                	jmp    89797a1 <_ZN20GuildParameterScript23getGuildCargoUpradeInfoEi+0x7b>
 8979763:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8979766:	89 04 24             	mov    %eax,(%esp)
 8979769:	e8 8a 04 00 00       	call   8979bf8 <_ZN9__gnu_cxx17__normal_iteratorIP25STGuildStorageUpgradeInfoSt6vectorIS1_SaIS1_EEEppEv>
 897976e:	8b 45 08             	mov    0x8(%ebp),%eax
 8979771:	8d 50 38             	lea    0x38(%eax),%edx
 8979774:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8979777:	89 54 24 04          	mov    %edx,0x4(%esp)
 897977b:	89 04 24             	mov    %eax,(%esp)
 897977e:	e8 19 04 00 00       	call   8979b9c <_ZNSt6vectorI25STGuildStorageUpgradeInfoSaIS0_EE3endEv>
 8979783:	83 ec 04             	sub    $0x4,%esp
 8979786:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8979789:	89 44 24 04          	mov    %eax,0x4(%esp)
 897978d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8979790:	89 04 24             	mov    %eax,(%esp)
 8979793:	e8 2a 04 00 00       	call   8979bc2 <_ZN9__gnu_cxxneIP25STGuildStorageUpgradeInfoSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESB_>
 8979798:	84 c0                	test   %al,%al
 897979a:	75 aa                	jne    8979746 <_ZN20GuildParameterScript23getGuildCargoUpradeInfoEi+0x20>
 897979c:	b8 00 00 00 00       	mov    $0x0,%eax
 89797a1:	c9                   	leave
 89797a2:	c3                   	ret
 89797a3:	90                   	nop

```

```c
// GuildParameterScript::getGuildCargoUpradeInfo @ 0x8979726

/* GuildParameterScript::getGuildCargoUpradeInfo(int) */

int * __thiscall
GuildParameterScript::getGuildCargoUpradeInfo(GuildParameterScript *this,int param_1)

{
  bool bVar1;
  __normal_iterator<STGuildStorageUpgradeInfo*,std::vector<STGuildStorageUpgradeInfo,std::allocator<STGuildStorageUpgradeInfo>>>
  local_18 [4];
  __normal_iterator local_14 [4];
  int *local_10;
  
  std::vector<STGuildStorageUpgradeInfo,std::allocator<STGuildStorageUpgradeInfo>>::begin();
  while( true ) {
    std::vector<STGuildStorageUpgradeInfo,std::allocator<STGuildStorageUpgradeInfo>>::end();
    bVar1 = __gnu_cxx::operator!=(local_18,local_14);
    if (!bVar1) {
      return (int *)0x0;
    }
    local_10 = (int *)__gnu_cxx::
                      __normal_iterator<STGuildStorageUpgradeInfo*,std::vector<STGuildStorageUpgradeInfo,std::allocator<STGuildStorageUpgradeInfo>>>
                      ::operator*(local_18);
    if (*local_10 == param_1) break;
    __gnu_cxx::
    __normal_iterator<STGuildStorageUpgradeInfo*,std::vector<STGuildStorageUpgradeInfo,std::allocator<STGuildStorageUpgradeInfo>>>
    ::operator++(local_18);
  }
  return local_10;
}

```

---

## getGuildExpBook

```asm
// === 08979672 GuildParameterScript::getGuildExpBook  [0x08979672-0x89796db] ===
 8979672:	55                   	push   %ebp
 8979673:	89 e5                	mov    %esp,%ebp
 8979675:	83 ec 28             	sub    $0x28,%esp
 8979678:	8b 45 08             	mov    0x8(%ebp),%eax
 897967b:	8d 48 10             	lea    0x10(%eax),%ecx
 897967e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8979681:	8d 55 0c             	lea    0xc(%ebp),%edx
 8979684:	89 54 24 08          	mov    %edx,0x8(%esp)
 8979688:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 897968c:	89 04 24             	mov    %eax,(%esp)
 897968f:	e8 5a 3c 75 ff       	call   80cd2ee <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE4findERS3_>
 8979694:	83 ec 04             	sub    $0x4,%esp
 8979697:	8b 45 08             	mov    0x8(%ebp),%eax
 897969a:	8d 50 10             	lea    0x10(%eax),%edx
 897969d:	8d 45 f4             	lea    -0xc(%ebp),%eax
 89796a0:	89 54 24 04          	mov    %edx,0x4(%esp)
 89796a4:	89 04 24             	mov    %eax,(%esp)
 89796a7:	e8 6e 3c 75 ff       	call   80cd31a <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 89796ac:	83 ec 04             	sub    $0x4,%esp
 89796af:	8d 45 f4             	lea    -0xc(%ebp),%eax
 89796b2:	89 44 24 04          	mov    %eax,0x4(%esp)
 89796b6:	8d 45 f0             	lea    -0x10(%ebp),%eax
 89796b9:	89 04 24             	mov    %eax,(%esp)
 89796bc:	e8 07 0d 76 ff       	call   80da3c8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEneERKS3_>
 89796c1:	84 c0                	test   %al,%al
 89796c3:	74 10                	je     89796d5 <_ZN20GuildParameterScript15getGuildExpBookEi+0x63>
 89796c5:	8d 45 f0             	lea    -0x10(%ebp),%eax
 89796c8:	89 04 24             	mov    %eax,(%esp)
 89796cb:	e8 70 3c 75 ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 89796d0:	8b 40 04             	mov    0x4(%eax),%eax
 89796d3:	eb 05                	jmp    89796da <_ZN20GuildParameterScript15getGuildExpBookEi+0x68>
 89796d5:	b8 00 00 00 00       	mov    $0x0,%eax
 89796da:	c9                   	leave
 89796db:	c3                   	ret

```

```c
// GuildParameterScript::getGuildExpBook @ 0x8979672

/* GuildParameterScript::getGuildExpBook(int) */

undefined4 GuildParameterScript::getGuildExpBook(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  _Rb_tree_iterator<std::pair<int_const,int>> local_14 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_10 [12];
  
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find((int *)local_14);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                    (local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_14);
    uVar3 = *(undefined4 *)(iVar2 + 4);
  }
  return uVar3;
}

```

---

## getGuildExpWeight

```asm
// === 089795de GuildParameterScript::getGuildExpWeight  [0x089795de-0x8979647] ===
 89795de:	55                   	push   %ebp
 89795df:	89 e5                	mov    %esp,%ebp
 89795e1:	83 ec 28             	sub    $0x28,%esp
 89795e4:	8b 45 08             	mov    0x8(%ebp),%eax
 89795e7:	8d 48 44             	lea    0x44(%eax),%ecx
 89795ea:	8d 45 f0             	lea    -0x10(%ebp),%eax
 89795ed:	8d 55 0c             	lea    0xc(%ebp),%edx
 89795f0:	89 54 24 08          	mov    %edx,0x8(%esp)
 89795f4:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 89795f8:	89 04 24             	mov    %eax,(%esp)
 89795fb:	e8 ee 3c 75 ff       	call   80cd2ee <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE4findERS3_>
 8979600:	83 ec 04             	sub    $0x4,%esp
 8979603:	8b 45 08             	mov    0x8(%ebp),%eax
 8979606:	8d 50 44             	lea    0x44(%eax),%edx
 8979609:	8d 45 f4             	lea    -0xc(%ebp),%eax
 897960c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8979610:	89 04 24             	mov    %eax,(%esp)
 8979613:	e8 02 3d 75 ff       	call   80cd31a <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 8979618:	83 ec 04             	sub    $0x4,%esp
 897961b:	8d 45 f4             	lea    -0xc(%ebp),%eax
 897961e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8979622:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8979625:	89 04 24             	mov    %eax,(%esp)
 8979628:	e8 9b 0d 76 ff       	call   80da3c8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEneERKS3_>
 897962d:	84 c0                	test   %al,%al
 897962f:	74 10                	je     8979641 <_ZN20GuildParameterScript17getGuildExpWeightEi+0x63>
 8979631:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8979634:	89 04 24             	mov    %eax,(%esp)
 8979637:	e8 04 3d 75 ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 897963c:	8b 40 04             	mov    0x4(%eax),%eax
 897963f:	eb 05                	jmp    8979646 <_ZN20GuildParameterScript17getGuildExpWeightEi+0x68>
 8979641:	b8 00 00 00 00       	mov    $0x0,%eax
 8979646:	c9                   	leave
 8979647:	c3                   	ret

```

```c
// GuildParameterScript::getGuildExpWeight @ 0x89795de

/* GuildParameterScript::getGuildExpWeight(int) */

undefined4 GuildParameterScript::getGuildExpWeight(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  _Rb_tree_iterator<std::pair<int_const,int>> local_14 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_10 [12];
  
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find((int *)local_14);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                    (local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_14);
    uVar3 = *(undefined4 *)(iVar2 + 4);
  }
  return uVar3;
}

```

---

## getGuildLevelUpParam

```asm
// === 08979648 GuildParameterScript::getGuildLevelUpParam  [0x08979648-0x8979671] ===
 8979648:	55                   	push   %ebp
 8979649:	89 e5                	mov    %esp,%ebp
 897964b:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 897964f:	7e 1a                	jle    897966b <_ZN20GuildParameterScript20getGuildLevelUpParamEi+0x23>
 8979651:	83 7d 0c 10          	cmpl   $0x10,0xc(%ebp)
 8979655:	7f 14                	jg     897966b <_ZN20GuildParameterScript20getGuildLevelUpParamEi+0x23>
 8979657:	8b 45 08             	mov    0x8(%ebp),%eax
 897965a:	8d 50 5c             	lea    0x5c(%eax),%edx
 897965d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8979660:	83 e8 01             	sub    $0x1,%eax
 8979663:	c1 e0 03             	shl    $0x3,%eax
 8979666:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8979669:	eb 05                	jmp    8979670 <_ZN20GuildParameterScript20getGuildLevelUpParamEi+0x28>
 897966b:	b8 00 00 00 00       	mov    $0x0,%eax
 8979670:	5d                   	pop    %ebp
 8979671:	c3                   	ret

```

```c
// GuildParameterScript::getGuildLevelUpParam @ 0x8979648

/* GuildParameterScript::getGuildLevelUpParam(int) */

GuildParameterScript * __thiscall
GuildParameterScript::getGuildLevelUpParam(GuildParameterScript *this,int param_1)

{
  GuildParameterScript *pGVar1;
  
  if ((param_1 < 1) || (0x10 < param_1)) {
    pGVar1 = (GuildParameterScript *)0x0;
  }
  else {
    pGVar1 = this + (param_1 + -1) * 8 + 0x5c;
  }
  return pGVar1;
}

```

---

## getLevelupPrice

```asm
// === 089797a4 GuildParameterScript::getLevelupPrice  [0x089797a4-0x8979863] ===
 89797a4:	55                   	push   %ebp
 89797a5:	89 e5                	mov    %esp,%ebp
 89797a7:	53                   	push   %ebx
 89797a8:	83 ec 24             	sub    $0x24,%esp
 89797ab:	8b 45 08             	mov    0x8(%ebp),%eax
 89797ae:	05 f0 00 00 00       	add    $0xf0,%eax
 89797b3:	89 04 24             	mov    %eax,(%esp)
 89797b6:	e8 53 04 00 00       	call   8979c0e <_ZNKSt6vectorISt4pairIiS_IiSaIiEEESaIS3_EE4sizeEv>
 89797bb:	83 e8 01             	sub    $0x1,%eax
 89797be:	89 45 f4             	mov    %eax,-0xc(%ebp)
 89797c1:	eb 5c                	jmp    897981f <_ZN20GuildParameterScript15getLevelupPriceEii+0x7b>
 89797c3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 89797c6:	8b 55 08             	mov    0x8(%ebp),%edx
 89797c9:	81 c2 f0 00 00 00    	add    $0xf0,%edx
 89797cf:	89 44 24 04          	mov    %eax,0x4(%esp)
 89797d3:	89 14 24             	mov    %edx,(%esp)
 89797d6:	e8 4f 04 00 00       	call   8979c2a <_ZNSt6vectorISt4pairIiS_IiSaIiEEESaIS3_EEixEj>
 89797db:	8b 00                	mov    (%eax),%eax
 89797dd:	3b 45 10             	cmp    0x10(%ebp),%eax
 89797e0:	0f 9e c0             	setle  %al
 89797e3:	84 c0                	test   %al,%al
 89797e5:	74 34                	je     897981b <_ZN20GuildParameterScript15getLevelupPriceEii+0x77>
 89797e7:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 89797ea:	8b 45 f4             	mov    -0xc(%ebp),%eax
 89797ed:	8b 55 08             	mov    0x8(%ebp),%edx
 89797f0:	81 c2 f0 00 00 00    	add    $0xf0,%edx
 89797f6:	89 44 24 04          	mov    %eax,0x4(%esp)
 89797fa:	89 14 24             	mov    %edx,(%esp)
 89797fd:	e8 28 04 00 00       	call   8979c2a <_ZNSt6vectorISt4pairIiS_IiSaIiEEESaIS3_EEixEj>
 8979802:	83 c0 04             	add    $0x4,%eax
 8979805:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8979809:	89 04 24             	mov    %eax,(%esp)
 897980c:	e8 cb 49 71 ff       	call   808e1dc <_ZNSt6vectorIiSaIiEEixEj>
 8979811:	8b 00                	mov    (%eax),%eax
 8979813:	69 c0 10 27 00 00    	imul   $0x2710,%eax,%eax
 8979819:	eb 42                	jmp    897985d <_ZN20GuildParameterScript15getLevelupPriceEii+0xb9>
 897981b:	83 6d f4 01          	subl   $0x1,-0xc(%ebp)
 897981f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8979822:	f7 d0                	not    %eax
 8979824:	c1 e8 1f             	shr    $0x1f,%eax
 8979827:	84 c0                	test   %al,%al
 8979829:	75 98                	jne    89797c3 <_ZN20GuildParameterScript15getLevelupPriceEii+0x1f>
 897982b:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 897982e:	8b 45 08             	mov    0x8(%ebp),%eax
 8979831:	05 f0 00 00 00       	add    $0xf0,%eax
 8979836:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 897983d:	00 
 897983e:	89 04 24             	mov    %eax,(%esp)
 8979841:	e8 e4 03 00 00       	call   8979c2a <_ZNSt6vectorISt4pairIiS_IiSaIiEEESaIS3_EEixEj>
 8979846:	83 c0 04             	add    $0x4,%eax
 8979849:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 897984d:	89 04 24             	mov    %eax,(%esp)
 8979850:	e8 87 49 71 ff       	call   808e1dc <_ZNSt6vectorIiSaIiEEixEj>
 8979855:	8b 00                	mov    (%eax),%eax
 8979857:	69 c0 10 27 00 00    	imul   $0x2710,%eax,%eax
 897985d:	83 c4 24             	add    $0x24,%esp
 8979860:	5b                   	pop    %ebx
 8979861:	5d                   	pop    %ebp
 8979862:	c3                   	ret
 8979863:	90                   	nop

```

```c
// GuildParameterScript::getLevelupPrice @ 0x89797a4

/* GuildParameterScript::getLevelupPrice(int, int) */

int __thiscall
GuildParameterScript::getLevelupPrice(GuildParameterScript *this,int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  uint local_10;
  
  local_10 = std::
             vector<std::pair<int,std::vector<int,std::allocator<int>>>,std::allocator<std::pair<int,std::vector<int,std::allocator<int>>>>>
             ::size((vector<std::pair<int,std::vector<int,std::allocator<int>>>,std::allocator<std::pair<int,std::vector<int,std::allocator<int>>>>>
                     *)(this + 0xf0));
  do {
    local_10 = local_10 - 1;
    if ((int)local_10 < 0) {
      iVar1 = std::
              vector<std::pair<int,std::vector<int,std::allocator<int>>>,std::allocator<std::pair<int,std::vector<int,std::allocator<int>>>>>
              ::operator[]((vector<std::pair<int,std::vector<int,std::allocator<int>>>,std::allocator<std::pair<int,std::vector<int,std::allocator<int>>>>>
                            *)(this + 0xf0),0);
      piVar2 = (int *)std::vector<int,std::allocator<int>>::operator[]
                                ((vector<int,std::allocator<int>> *)(iVar1 + 4),param_1);
      iVar1 = *piVar2;
      goto LAB_0897985d;
    }
    piVar2 = (int *)std::
                    vector<std::pair<int,std::vector<int,std::allocator<int>>>,std::allocator<std::pair<int,std::vector<int,std::allocator<int>>>>>
                    ::operator[]((vector<std::pair<int,std::vector<int,std::allocator<int>>>,std::allocator<std::pair<int,std::vector<int,std::allocator<int>>>>>
                                  *)(this + 0xf0),local_10);
  } while (param_2 < *piVar2);
  iVar1 = std::
          vector<std::pair<int,std::vector<int,std::allocator<int>>>,std::allocator<std::pair<int,std::vector<int,std::allocator<int>>>>>
          ::operator[]((vector<std::pair<int,std::vector<int,std::allocator<int>>>,std::allocator<std::pair<int,std::vector<int,std::allocator<int>>>>>
                        *)(this + 0xf0),local_10);
  piVar2 = (int *)std::vector<int,std::allocator<int>>::operator[]
                            ((vector<int,std::allocator<int>> *)(iVar1 + 4),param_1);
  iVar1 = *piVar2;
LAB_0897985d:
  return iVar1 * 10000;
}

```

