# PcBangItemRentarData

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## getRewardSelectionList

```asm
// === 0891559c PcBangItemRentarData::getRewardSelectionList  [0x0891559c-0x8915605] ===
 891559c:	55                   	push   %ebp
 891559d:	89 e5                	mov    %esp,%ebp
 891559f:	83 ec 28             	sub    $0x28,%esp
 89155a2:	8b 45 08             	mov    0x8(%ebp),%eax
 89155a5:	8d 48 0c             	lea    0xc(%eax),%ecx
 89155a8:	8d 45 f0             	lea    -0x10(%ebp),%eax
 89155ab:	8d 55 0c             	lea    0xc(%ebp),%edx
 89155ae:	89 54 24 08          	mov    %edx,0x8(%esp)
 89155b2:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 89155b6:	89 04 24             	mov    %eax,(%esp)
 89155b9:	e8 6e c5 00 00       	call   8921b2c <_ZNSt3mapIiSt6vectorIS0_I19EventRewardItemInfoSaIS1_EESaIS3_EESt4lessIiESaISt4pairIKiS5_EEE4findERS9_>
 89155be:	83 ec 04             	sub    $0x4,%esp
 89155c1:	8b 45 08             	mov    0x8(%ebp),%eax
 89155c4:	8d 50 0c             	lea    0xc(%eax),%edx
 89155c7:	8d 45 f4             	lea    -0xc(%ebp),%eax
 89155ca:	89 54 24 04          	mov    %edx,0x4(%esp)
 89155ce:	89 04 24             	mov    %eax,(%esp)
 89155d1:	e8 48 a6 95 ff       	call   826fc1e <_ZNSt3mapIiSt6vectorIS0_I19EventRewardItemInfoSaIS1_EESaIS3_EESt4lessIiESaISt4pairIKiS5_EEE3endEv>
 89155d6:	83 ec 04             	sub    $0x4,%esp
 89155d9:	8d 45 f4             	lea    -0xc(%ebp),%eax
 89155dc:	89 44 24 04          	mov    %eax,0x4(%esp)
 89155e0:	8d 45 f0             	lea    -0x10(%ebp),%eax
 89155e3:	89 04 24             	mov    %eax,(%esp)
 89155e6:	e8 59 a6 95 ff       	call   826fc44 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt6vectorIS2_I19EventRewardItemInfoSaIS3_EESaIS5_EEEEneERKS9_>
 89155eb:	84 c0                	test   %al,%al
 89155ed:	74 10                	je     89155ff <_ZN20PcBangItemRentarData22getRewardSelectionListEi+0x63>
 89155ef:	8d 45 f0             	lea    -0x10(%ebp),%eax
 89155f2:	89 04 24             	mov    %eax,(%esp)
 89155f5:	e8 5e c5 00 00       	call   8921b58 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt6vectorIS2_I19EventRewardItemInfoSaIS3_EESaIS5_EEEEptEv>
 89155fa:	83 c0 04             	add    $0x4,%eax
 89155fd:	eb 05                	jmp    8915604 <_ZN20PcBangItemRentarData22getRewardSelectionListEi+0x68>
 89155ff:	b8 00 00 00 00       	mov    $0x0,%eax
 8915604:	c9                   	leave
 8915605:	c3                   	ret

```

```c
// PcBangItemRentarData::getRewardSelectionList @ 0x891559c

/* PcBangItemRentarData::getRewardSelectionList(int) */

int PcBangItemRentarData::getRewardSelectionList(int param_1)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator<std::pair<int_const,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>>>
  local_14 [4];
  map<int,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>>>>
  local_10 [12];
  
  std::
  map<int,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>>>>
  ::find((int *)local_14);
  std::
  map<int,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>>>>
  ::end(local_10);
  cVar1 = std::
          _Rb_tree_iterator<std::pair<int_const,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>>>
          ::operator!=(local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    iVar2 = 0;
  }
  else {
    iVar2 = std::
            _Rb_tree_iterator<std::pair<int_const,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>>>
            ::operator->(local_14);
    iVar2 = iVar2 + 4;
  }
  return iVar2;
}

```

---

## getSectionData

```asm
// === 08915518 PcBangItemRentarData::getSectionData  [0x08915518-0x891559b] ===
 8915518:	55                   	push   %ebp
 8915519:	89 e5                	mov    %esp,%ebp
 891551b:	83 ec 28             	sub    $0x28,%esp
 891551e:	8b 55 08             	mov    0x8(%ebp),%edx
 8915521:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8915524:	89 54 24 04          	mov    %edx,0x4(%esp)
 8915528:	89 04 24             	mov    %eax,(%esp)
 891552b:	e8 08 c5 00 00       	call   8921a38 <_ZNSt6vectorI18EventRewardSectionSaIS0_EE6rbeginEv>
 8915530:	83 ec 04             	sub    $0x4,%esp
 8915533:	eb 34                	jmp    8915569 <_ZN20PcBangItemRentarData14getSectionDataEi+0x51>
 8915535:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8915538:	89 04 24             	mov    %eax,(%esp)
 891553b:	e8 b4 c5 00 00       	call   8921af4 <_ZNKSt16reverse_iteratorIN9__gnu_cxx17__normal_iteratorIP18EventRewardSectionSt6vectorIS2_SaIS2_EEEEEptEv>
 8915540:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 8915544:	0f b6 c0             	movzbl %al,%eax
 8915547:	3b 45 0c             	cmp    0xc(%ebp),%eax
 891554a:	0f 9e c0             	setle  %al
 891554d:	84 c0                	test   %al,%al
 891554f:	74 0d                	je     891555e <_ZN20PcBangItemRentarData14getSectionDataEi+0x46>
 8915551:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8915554:	89 04 24             	mov    %eax,(%esp)
 8915557:	e8 ac c5 00 00       	call   8921b08 <_ZNKSt16reverse_iteratorIN9__gnu_cxx17__normal_iteratorIP18EventRewardSectionSt6vectorIS2_SaIS2_EEEEEdeEv>
 891555c:	eb 3b                	jmp    8915599 <_ZN20PcBangItemRentarData14getSectionDataEi+0x81>
 891555e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8915561:	89 04 24             	mov    %eax,(%esp)
 8915564:	e8 75 c5 00 00       	call   8921ade <_ZNSt16reverse_iteratorIN9__gnu_cxx17__normal_iteratorIP18EventRewardSectionSt6vectorIS2_SaIS2_EEEEEppEv>
 8915569:	8b 55 08             	mov    0x8(%ebp),%edx
 891556c:	8d 45 f4             	lea    -0xc(%ebp),%eax
 891556f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8915573:	89 04 24             	mov    %eax,(%esp)
 8915576:	e8 05 c5 00 00       	call   8921a80 <_ZNSt6vectorI18EventRewardSectionSaIS0_EE4rendEv>
 891557b:	83 ec 04             	sub    $0x4,%esp
 891557e:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8915581:	89 44 24 04          	mov    %eax,0x4(%esp)
 8915585:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8915588:	89 04 24             	mov    %eax,(%esp)
 891558b:	e8 31 c5 00 00       	call   8921ac1 <_ZStneIN9__gnu_cxx17__normal_iteratorIP18EventRewardSectionSt6vectorIS2_SaIS2_EEEEEbRKSt16reverse_iteratorIT_ESC_>
 8915590:	84 c0                	test   %al,%al
 8915592:	75 a1                	jne    8915535 <_ZN20PcBangItemRentarData14getSectionDataEi+0x1d>
 8915594:	b8 00 00 00 00       	mov    $0x0,%eax
 8915599:	c9                   	leave
 891559a:	c3                   	ret
 891559b:	90                   	nop

```

```c
// PcBangItemRentarData::getSectionData @ 0x8915518

/* PcBangItemRentarData::getSectionData(int) */

undefined4 __thiscall PcBangItemRentarData::getSectionData(PcBangItemRentarData *this,int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  vector<EventRewardSection,std::allocator<EventRewardSection>> local_14 [4];
  vector<EventRewardSection,std::allocator<EventRewardSection>> local_10 [12];
  
  std::vector<EventRewardSection,std::allocator<EventRewardSection>>::rbegin(local_14);
  while( true ) {
    std::vector<EventRewardSection,std::allocator<EventRewardSection>>::rend(local_10);
    bVar1 = std::operator!=((reverse_iterator *)local_14,(reverse_iterator *)local_10);
    if (!bVar1) {
      return 0;
    }
    iVar2 = std::
            reverse_iterator<__gnu_cxx::__normal_iterator<EventRewardSection*,std::vector<EventRewardSection,std::allocator<EventRewardSection>>>>
            ::operator->((reverse_iterator<__gnu_cxx::__normal_iterator<EventRewardSection*,std::vector<EventRewardSection,std::allocator<EventRewardSection>>>>
                          *)local_14);
    if ((int)(uint)*(byte *)(iVar2 + 1) <= param_1) break;
    std::
    reverse_iterator<__gnu_cxx::__normal_iterator<EventRewardSection*,std::vector<EventRewardSection,std::allocator<EventRewardSection>>>>
    ::operator++((reverse_iterator<__gnu_cxx::__normal_iterator<EventRewardSection*,std::vector<EventRewardSection,std::allocator<EventRewardSection>>>>
                  *)local_14);
  }
  uVar3 = std::
          reverse_iterator<__gnu_cxx::__normal_iterator<EventRewardSection*,std::vector<EventRewardSection,std::allocator<EventRewardSection>>>>
          ::operator*((reverse_iterator<__gnu_cxx::__normal_iterator<EventRewardSection*,std::vector<EventRewardSection,std::allocator<EventRewardSection>>>>
                       *)local_14);
  return uVar3;
}

```

