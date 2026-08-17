# DimensionActivationRewardData

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## getRewardGiveItemList

```asm
// === 08916004 DimensionActivationRewardData::getRewardGiveItemList  [0x08916004-0x8916085] ===
 8916004:	55                   	push   %ebp
 8916005:	89 e5                	mov    %esp,%ebp
 8916007:	83 ec 28             	sub    $0x28,%esp
 891600a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 891600d:	89 04 24             	mov    %eax,(%esp)
 8916010:	e8 79 fc 89 ff       	call   81b5c8e <_ZNSt4pairIiiEC1Ev>
 8916015:	8b 45 0c             	mov    0xc(%ebp),%eax
 8916018:	89 45 ec             	mov    %eax,-0x14(%ebp)
 891601b:	8b 45 10             	mov    0x10(%ebp),%eax
 891601e:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8916021:	8b 45 08             	mov    0x8(%ebp),%eax
 8916024:	8d 48 24             	lea    0x24(%eax),%ecx
 8916027:	8d 45 e8             	lea    -0x18(%ebp),%eax
 891602a:	8d 55 ec             	lea    -0x14(%ebp),%edx
 891602d:	89 54 24 08          	mov    %edx,0x8(%esp)
 8916031:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8916035:	89 04 24             	mov    %eax,(%esp)
 8916038:	e8 57 bd 00 00       	call   8921d94 <_ZNSt3mapISt4pairIiiESt6vectorIS2_I19EventRewardItemInfoSaIS3_EESaIS5_EESt4lessIS1_ESaIS0_IKS1_S7_EEE4findERSA_>
 891603d:	83 ec 04             	sub    $0x4,%esp
 8916040:	8b 45 08             	mov    0x8(%ebp),%eax
 8916043:	8d 50 24             	lea    0x24(%eax),%edx
 8916046:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8916049:	89 54 24 04          	mov    %edx,0x4(%esp)
 891604d:	89 04 24             	mov    %eax,(%esp)
 8916050:	e8 55 9c 95 ff       	call   826fcaa <_ZNSt3mapISt4pairIiiESt6vectorIS2_I19EventRewardItemInfoSaIS3_EESaIS5_EESt4lessIS1_ESaIS0_IKS1_S7_EEE3endEv>
 8916055:	83 ec 04             	sub    $0x4,%esp
 8916058:	8d 45 f4             	lea    -0xc(%ebp),%eax
 891605b:	89 44 24 04          	mov    %eax,0x4(%esp)
 891605f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8916062:	89 04 24             	mov    %eax,(%esp)
 8916065:	e8 66 9c 95 ff       	call   826fcd0 <_ZNKSt17_Rb_tree_iteratorISt4pairIKS0_IiiESt6vectorIS3_I19EventRewardItemInfoSaIS4_EESaIS6_EEEEneERKSA_>
 891606a:	84 c0                	test   %al,%al
 891606c:	74 10                	je     891607e <_ZN29DimensionActivationRewardData21getRewardGiveItemListEii+0x7a>
 891606e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8916071:	89 04 24             	mov    %eax,(%esp)
 8916074:	e8 47 bd 00 00       	call   8921dc0 <_ZNKSt17_Rb_tree_iteratorISt4pairIKS0_IiiESt6vectorIS3_I19EventRewardItemInfoSaIS4_EESaIS6_EEEEptEv>
 8916079:	83 c0 08             	add    $0x8,%eax
 891607c:	eb 05                	jmp    8916083 <_ZN29DimensionActivationRewardData21getRewardGiveItemListEii+0x7f>
 891607e:	b8 00 00 00 00       	mov    $0x0,%eax
 8916083:	c9                   	leave
 8916084:	c3                   	ret
 8916085:	90                   	nop

```

```c
// DimensionActivationRewardData::getRewardGiveItemList @ 0x8916004

/* DimensionActivationRewardData::getRewardGiveItemList(int, int) */

int __thiscall
DimensionActivationRewardData::getRewardGiveItemList
          (DimensionActivationRewardData *this,int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator<std::pair<std::pair<int,int>const,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>>>
  local_1c [4];
  int local_18;
  int local_14;
  map<std::pair<int,int>,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>,std::less<std::pair<int,int>>,std::allocator<std::pair<std::pair<int,int>const,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>>>>
  local_10 [12];
  
  std::pair<int,int>::pair((pair<int,int> *)&local_18);
  local_18 = param_1;
  local_14 = param_2;
  std::
  map<std::pair<int,int>,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>,std::less<std::pair<int,int>>,std::allocator<std::pair<std::pair<int,int>const,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>>>>
  ::find(local_1c);
  std::
  map<std::pair<int,int>,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>,std::less<std::pair<int,int>>,std::allocator<std::pair<std::pair<int,int>const,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>>>>
  ::end(local_10);
  cVar1 = std::
          _Rb_tree_iterator<std::pair<std::pair<int,int>const,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>>>
          ::operator!=(local_1c,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    iVar2 = 0;
  }
  else {
    iVar2 = std::
            _Rb_tree_iterator<std::pair<std::pair<int,int>const,std::vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>>>
            ::operator->(local_1c);
    iVar2 = iVar2 + 8;
  }
  return iVar2;
}

```

---

## getRewardGiveItems

```asm
// === 08915f9a DimensionActivationRewardData::getRewardGiveItems  [0x08915f9a-0x8916003] ===
 8915f9a:	55                   	push   %ebp
 8915f9b:	89 e5                	mov    %esp,%ebp
 8915f9d:	83 ec 28             	sub    $0x28,%esp
 8915fa0:	8b 45 14             	mov    0x14(%ebp),%eax
 8915fa3:	89 44 24 08          	mov    %eax,0x8(%esp)
 8915fa7:	8b 45 10             	mov    0x10(%ebp),%eax
 8915faa:	89 44 24 04          	mov    %eax,0x4(%esp)
 8915fae:	8b 45 08             	mov    0x8(%ebp),%eax
 8915fb1:	89 04 24             	mov    %eax,(%esp)
 8915fb4:	e8 4b 00 00 00       	call   8916004 <_ZN29DimensionActivationRewardData21getRewardGiveItemListEii>
 8915fb9:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8915fbc:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8915fc0:	74 3a                	je     8915ffc <_ZN29DimensionActivationRewardData18getRewardGiveItemsEiii+0x62>
 8915fc2:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8915fc6:	78 17                	js     8915fdf <_ZN29DimensionActivationRewardData18getRewardGiveItemsEiii+0x45>
 8915fc8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8915fcb:	89 04 24             	mov    %eax,(%esp)
 8915fce:	e8 85 9e 95 ff       	call   826fe58 <_ZNKSt6vectorIS_I19EventRewardItemInfoSaIS0_EESaIS2_EE4sizeEv>
 8915fd3:	3b 45 0c             	cmp    0xc(%ebp),%eax
 8915fd6:	7c 07                	jl     8915fdf <_ZN29DimensionActivationRewardData18getRewardGiveItemsEiii+0x45>
 8915fd8:	b8 01 00 00 00       	mov    $0x1,%eax
 8915fdd:	eb 05                	jmp    8915fe4 <_ZN29DimensionActivationRewardData18getRewardGiveItemsEiii+0x4a>
 8915fdf:	b8 00 00 00 00       	mov    $0x0,%eax
 8915fe4:	84 c0                	test   %al,%al
 8915fe6:	74 14                	je     8915ffc <_ZN29DimensionActivationRewardData18getRewardGiveItemsEiii+0x62>
 8915fe8:	8b 45 0c             	mov    0xc(%ebp),%eax
 8915feb:	89 44 24 04          	mov    %eax,0x4(%esp)
 8915fef:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8915ff2:	89 04 24             	mov    %eax,(%esp)
 8915ff5:	e8 80 9e 95 ff       	call   826fe7a <_ZNSt6vectorIS_I19EventRewardItemInfoSaIS0_EESaIS2_EE2atEj>
 8915ffa:	eb 05                	jmp    8916001 <_ZN29DimensionActivationRewardData18getRewardGiveItemsEiii+0x67>
 8915ffc:	b8 00 00 00 00       	mov    $0x0,%eax
 8916001:	c9                   	leave
 8916002:	c3                   	ret
 8916003:	90                   	nop

```

```c
// DimensionActivationRewardData::getRewardGiveItems @ 0x8915f9a

/* DimensionActivationRewardData::getRewardGiveItems(int, int, int) */

undefined4 __thiscall
DimensionActivationRewardData::getRewardGiveItems
          (DimensionActivationRewardData *this,int param_1,int param_2,int param_3)

{
  bool bVar1;
  vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>
  *this_00;
  int iVar2;
  undefined4 uVar3;
  
  this_00 = (vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>
             *)getRewardGiveItemList(this,param_2,param_3);
  if (this_00 !=
      (vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>
       *)0x0) {
    if ((param_1 < 0) ||
       (iVar2 = std::
                vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>
                ::size(this_00), iVar2 < param_1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar3 = std::
              vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>
              ::at(this_00,param_1);
      return uVar3;
    }
  }
  return 0;
}

```

---

## getRewardSelectItemList

```asm
// === 08916086 DimensionActivationRewardData::getRewardSelectItemList  [0x08916086-0x89160ef] ===
 8916086:	55                   	push   %ebp
 8916087:	89 e5                	mov    %esp,%ebp
 8916089:	83 ec 28             	sub    $0x28,%esp
 891608c:	8b 45 08             	mov    0x8(%ebp),%eax
 891608f:	8d 48 0c             	lea    0xc(%eax),%ecx
 8916092:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8916095:	8d 55 0c             	lea    0xc(%ebp),%edx
 8916098:	89 54 24 08          	mov    %edx,0x8(%esp)
 891609c:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 89160a0:	89 04 24             	mov    %eax,(%esp)
 89160a3:	e8 84 ba 00 00       	call   8921b2c <_ZNSt3mapIiSt6vectorIS0_I19EventRewardItemInfoSaIS1_EESaIS3_EESt4lessIiESaISt4pairIKiS5_EEE4findERS9_>
 89160a8:	83 ec 04             	sub    $0x4,%esp
 89160ab:	8b 45 08             	mov    0x8(%ebp),%eax
 89160ae:	8d 50 0c             	lea    0xc(%eax),%edx
 89160b1:	8d 45 f4             	lea    -0xc(%ebp),%eax
 89160b4:	89 54 24 04          	mov    %edx,0x4(%esp)
 89160b8:	89 04 24             	mov    %eax,(%esp)
 89160bb:	e8 5e 9b 95 ff       	call   826fc1e <_ZNSt3mapIiSt6vectorIS0_I19EventRewardItemInfoSaIS1_EESaIS3_EESt4lessIiESaISt4pairIKiS5_EEE3endEv>
 89160c0:	83 ec 04             	sub    $0x4,%esp
 89160c3:	8d 45 f4             	lea    -0xc(%ebp),%eax
 89160c6:	89 44 24 04          	mov    %eax,0x4(%esp)
 89160ca:	8d 45 f0             	lea    -0x10(%ebp),%eax
 89160cd:	89 04 24             	mov    %eax,(%esp)
 89160d0:	e8 6f 9b 95 ff       	call   826fc44 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt6vectorIS2_I19EventRewardItemInfoSaIS3_EESaIS5_EEEEneERKS9_>
 89160d5:	84 c0                	test   %al,%al
 89160d7:	74 10                	je     89160e9 <_ZN29DimensionActivationRewardData23getRewardSelectItemListEi+0x63>
 89160d9:	8d 45 f0             	lea    -0x10(%ebp),%eax
 89160dc:	89 04 24             	mov    %eax,(%esp)
 89160df:	e8 74 ba 00 00       	call   8921b58 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt6vectorIS2_I19EventRewardItemInfoSaIS3_EESaIS5_EEEEptEv>
 89160e4:	83 c0 04             	add    $0x4,%eax
 89160e7:	eb 05                	jmp    89160ee <_ZN29DimensionActivationRewardData23getRewardSelectItemListEi+0x68>
 89160e9:	b8 00 00 00 00       	mov    $0x0,%eax
 89160ee:	c9                   	leave
 89160ef:	c3                   	ret

```

```c
// DimensionActivationRewardData::getRewardSelectItemList @ 0x8916086

/* DimensionActivationRewardData::getRewardSelectItemList(int) */

int DimensionActivationRewardData::getRewardSelectItemList(int param_1)

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
// === 08915f16 DimensionActivationRewardData::getSectionData  [0x08915f16-0x8915f99] ===
 8915f16:	55                   	push   %ebp
 8915f17:	89 e5                	mov    %esp,%ebp
 8915f19:	83 ec 28             	sub    $0x28,%esp
 8915f1c:	8b 55 08             	mov    0x8(%ebp),%edx
 8915f1f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8915f22:	89 54 24 04          	mov    %edx,0x4(%esp)
 8915f26:	89 04 24             	mov    %eax,(%esp)
 8915f29:	e8 0a bb 00 00       	call   8921a38 <_ZNSt6vectorI18EventRewardSectionSaIS0_EE6rbeginEv>
 8915f2e:	83 ec 04             	sub    $0x4,%esp
 8915f31:	eb 34                	jmp    8915f67 <_ZN29DimensionActivationRewardData14getSectionDataEi+0x51>
 8915f33:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8915f36:	89 04 24             	mov    %eax,(%esp)
 8915f39:	e8 b6 bb 00 00       	call   8921af4 <_ZNKSt16reverse_iteratorIN9__gnu_cxx17__normal_iteratorIP18EventRewardSectionSt6vectorIS2_SaIS2_EEEEEptEv>
 8915f3e:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 8915f42:	0f b6 c0             	movzbl %al,%eax
 8915f45:	3b 45 0c             	cmp    0xc(%ebp),%eax
 8915f48:	0f 9e c0             	setle  %al
 8915f4b:	84 c0                	test   %al,%al
 8915f4d:	74 0d                	je     8915f5c <_ZN29DimensionActivationRewardData14getSectionDataEi+0x46>
 8915f4f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8915f52:	89 04 24             	mov    %eax,(%esp)
 8915f55:	e8 ae bb 00 00       	call   8921b08 <_ZNKSt16reverse_iteratorIN9__gnu_cxx17__normal_iteratorIP18EventRewardSectionSt6vectorIS2_SaIS2_EEEEEdeEv>
 8915f5a:	eb 3b                	jmp    8915f97 <_ZN29DimensionActivationRewardData14getSectionDataEi+0x81>
 8915f5c:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8915f5f:	89 04 24             	mov    %eax,(%esp)
 8915f62:	e8 77 bb 00 00       	call   8921ade <_ZNSt16reverse_iteratorIN9__gnu_cxx17__normal_iteratorIP18EventRewardSectionSt6vectorIS2_SaIS2_EEEEEppEv>
 8915f67:	8b 55 08             	mov    0x8(%ebp),%edx
 8915f6a:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8915f6d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8915f71:	89 04 24             	mov    %eax,(%esp)
 8915f74:	e8 07 bb 00 00       	call   8921a80 <_ZNSt6vectorI18EventRewardSectionSaIS0_EE4rendEv>
 8915f79:	83 ec 04             	sub    $0x4,%esp
 8915f7c:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8915f7f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8915f83:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8915f86:	89 04 24             	mov    %eax,(%esp)
 8915f89:	e8 33 bb 00 00       	call   8921ac1 <_ZStneIN9__gnu_cxx17__normal_iteratorIP18EventRewardSectionSt6vectorIS2_SaIS2_EEEEEbRKSt16reverse_iteratorIT_ESC_>
 8915f8e:	84 c0                	test   %al,%al
 8915f90:	75 a1                	jne    8915f33 <_ZN29DimensionActivationRewardData14getSectionDataEi+0x1d>
 8915f92:	b8 00 00 00 00       	mov    $0x0,%eax
 8915f97:	c9                   	leave
 8915f98:	c3                   	ret
 8915f99:	90                   	nop

```

```c
// DimensionActivationRewardData::getSectionData @ 0x8915f16

/* DimensionActivationRewardData::getSectionData(int) */

undefined4 __thiscall
DimensionActivationRewardData::getSectionData(DimensionActivationRewardData *this,int param_1)

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

