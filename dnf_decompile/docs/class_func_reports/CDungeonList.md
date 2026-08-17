# CDungeonList

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 8

---

## CDungeonList

```asm
// === 0834d320 CDungeonList::CDungeonList  [0x0834d320-0x834d333] ===
 834d320:	55                   	push   %ebp
 834d321:	89 e5                	mov    %esp,%ebp
 834d323:	83 ec 18             	sub    $0x18,%esp
 834d326:	8b 45 08             	mov    0x8(%ebp),%eax
 834d329:	89 04 24             	mov    %eax,(%esp)
 834d32c:	e8 3f d3 03 00       	call   838a670 <_ZN9__gnu_cxx8hash_mapIiP8CDungeonNS_4hashIiEESt8equal_toIiESaIS2_EEC1Ev>
 834d331:	c9                   	leave
 834d332:	c3                   	ret
 834d333:	90                   	nop

```

```c
// CDungeonList::CDungeonList @ 0x834d320

/* CDungeonList::CDungeonList() */

void __thiscall CDungeonList::CDungeonList(CDungeonList *this)

{
  __gnu_cxx::
  hash_map<int,CDungeon*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CDungeon*>>::
  hash_map((hash_map<int,CDungeon*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CDungeon*>>
            *)this);
  return;
}

```

---

## destroy

```asm
// === 0834d610 CDungeonList::destroy  [0x0834d610-0x834d6cb] ===
 834d610:	55                   	push   %ebp
 834d611:	89 e5                	mov    %esp,%ebp
 834d613:	53                   	push   %ebx
 834d614:	83 ec 44             	sub    $0x44,%esp
 834d617:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 834d61e:	8d 45 dc             	lea    -0x24(%ebp),%eax
 834d621:	89 04 24             	mov    %eax,(%esp)
 834d624:	e8 1b d1 03 00       	call   838a744 <_ZN9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP8CDungeonEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEC1Ev>
 834d629:	8b 55 08             	mov    0x8(%ebp),%edx
 834d62c:	8d 45 d0             	lea    -0x30(%ebp),%eax
 834d62f:	89 54 24 04          	mov    %edx,0x4(%esp)
 834d633:	89 04 24             	mov    %eax,(%esp)
 834d636:	e8 0f d1 03 00       	call   838a74a <_ZN9__gnu_cxx8hash_mapIiP8CDungeonNS_4hashIiEESt8equal_toIiESaIS2_EE5beginEv>
 834d63b:	83 ec 04             	sub    $0x4,%esp
 834d63e:	8b 45 d0             	mov    -0x30(%ebp),%eax
 834d641:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 834d644:	89 45 dc             	mov    %eax,-0x24(%ebp)
 834d647:	89 55 e0             	mov    %edx,-0x20(%ebp)
 834d64a:	eb 45                	jmp    834d691 <_ZN12CDungeonList7destroyEv+0x81>
 834d64c:	8d 45 dc             	lea    -0x24(%ebp),%eax
 834d64f:	89 04 24             	mov    %eax,(%esp)
 834d652:	e8 53 d1 03 00       	call   838a7aa <_ZNK9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP8CDungeonEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEptEv>
 834d657:	8b 40 04             	mov    0x4(%eax),%eax
 834d65a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 834d65d:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 834d660:	85 db                	test   %ebx,%ebx
 834d662:	74 10                	je     834d674 <_ZN12CDungeonList7destroyEv+0x64>
 834d664:	89 1c 24             	mov    %ebx,(%esp)
 834d667:	e8 6c 99 02 00       	call   8376fd8 <_ZN8CDungeonD1Ev>
 834d66c:	89 1c 24             	mov    %ebx,(%esp)
 834d66f:	e8 7c 6e 3d 00       	call   87244f0 <_ZdlPv>
 834d674:	8d 45 ec             	lea    -0x14(%ebp),%eax
 834d677:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 834d67e:	00 
 834d67f:	8d 55 dc             	lea    -0x24(%ebp),%edx
 834d682:	89 54 24 04          	mov    %edx,0x4(%esp)
 834d686:	89 04 24             	mov    %eax,(%esp)
 834d689:	e8 30 d1 03 00       	call   838a7be <_ZN9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP8CDungeonEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEppEi>
 834d68e:	83 ec 04             	sub    $0x4,%esp
 834d691:	8b 55 08             	mov    0x8(%ebp),%edx
 834d694:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 834d697:	89 54 24 04          	mov    %edx,0x4(%esp)
 834d69b:	89 04 24             	mov    %eax,(%esp)
 834d69e:	e8 cd d0 03 00       	call   838a770 <_ZN9__gnu_cxx8hash_mapIiP8CDungeonNS_4hashIiEESt8equal_toIiESaIS2_EE3endEv>
 834d6a3:	83 ec 04             	sub    $0x4,%esp
 834d6a6:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 834d6a9:	89 44 24 04          	mov    %eax,0x4(%esp)
 834d6ad:	8d 45 dc             	lea    -0x24(%ebp),%eax
 834d6b0:	89 04 24             	mov    %eax,(%esp)
 834d6b3:	e8 de d0 03 00       	call   838a796 <_ZNK9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP8CDungeonEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEneERKSD_>
 834d6b8:	84 c0                	test   %al,%al
 834d6ba:	75 90                	jne    834d64c <_ZN12CDungeonList7destroyEv+0x3c>
 834d6bc:	8b 45 08             	mov    0x8(%ebp),%eax
 834d6bf:	89 04 24             	mov    %eax,(%esp)
 834d6c2:	e8 2d d1 03 00       	call   838a7f4 <_ZN9__gnu_cxx8hash_mapIiP8CDungeonNS_4hashIiEESt8equal_toIiESaIS2_EE5clearEv>
 834d6c7:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 834d6ca:	c9                   	leave
 834d6cb:	c3                   	ret

```

```c
// CDungeonList::destroy @ 0x834d610

/* CDungeonList::destroy() */

void __thiscall CDungeonList::destroy(CDungeonList *this)

{
  CDungeon *this_00;
  char cVar1;
  int iVar2;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 local_24;
  hash_map<int,CDungeon*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CDungeon*>>
  local_20 [8];
  _Hashtable_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
  local_18 [8];
  CDungeon *local_10;
  
  local_10 = (CDungeon *)0x0;
  __gnu_cxx::
  _Hashtable_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
  ::_Hashtable_iterator();
  __gnu_cxx::
  hash_map<int,CDungeon*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CDungeon*>>::begin
            ((hash_map<int,CDungeon*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CDungeon*>>
              *)&local_34);
  local_28 = local_34;
  local_24 = local_30;
  while( true ) {
    __gnu_cxx::
    hash_map<int,CDungeon*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CDungeon*>>::end
              (local_20);
    cVar1 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
            ::operator!=((_Hashtable_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
                          *)&local_28,(_Hashtable_iterator *)local_20);
    if (cVar1 == '\0') break;
    iVar2 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
            ::operator->((_Hashtable_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
                          *)&local_28);
    this_00 = *(CDungeon **)(iVar2 + 4);
    local_10 = this_00;
    if (this_00 != (CDungeon *)0x0) {
      CDungeon::~CDungeon(this_00);
      operator_delete(this_00);
    }
    __gnu_cxx::
    _Hashtable_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
    ::operator++(local_18,(int)&local_28);
  }
  __gnu_cxx::
  hash_map<int,CDungeon*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CDungeon*>>::clear
            ((hash_map<int,CDungeon*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CDungeon*>>
              *)this);
  return;
}

```

---

## find_dungeon

```asm
// === 0834d7ca CDungeonList::find_dungeon  [0x0834d7ca-0x834d845] ===
 834d7ca:	55                   	push   %ebp
 834d7cb:	89 e5                	mov    %esp,%ebp
 834d7cd:	83 ec 38             	sub    $0x38,%esp
 834d7d0:	8d 45 e8             	lea    -0x18(%ebp),%eax
 834d7d3:	89 04 24             	mov    %eax,(%esp)
 834d7d6:	e8 c7 d0 03 00       	call   838a8a2 <_ZN9__gnu_cxx25_Hashtable_const_iteratorISt4pairIKiP8CDungeonEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEC1Ev>
 834d7db:	8b 55 08             	mov    0x8(%ebp),%edx
 834d7de:	8d 45 e0             	lea    -0x20(%ebp),%eax
 834d7e1:	8d 4d 0c             	lea    0xc(%ebp),%ecx
 834d7e4:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 834d7e8:	89 54 24 04          	mov    %edx,0x4(%esp)
 834d7ec:	89 04 24             	mov    %eax,(%esp)
 834d7ef:	e8 b4 d0 03 00       	call   838a8a8 <_ZNK9__gnu_cxx8hash_mapIiP8CDungeonNS_4hashIiEESt8equal_toIiESaIS2_EE4findERKi>
 834d7f4:	83 ec 04             	sub    $0x4,%esp
 834d7f7:	8b 45 e0             	mov    -0x20(%ebp),%eax
 834d7fa:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 834d7fd:	89 45 e8             	mov    %eax,-0x18(%ebp)
 834d800:	89 55 ec             	mov    %edx,-0x14(%ebp)
 834d803:	8b 55 08             	mov    0x8(%ebp),%edx
 834d806:	8d 45 f0             	lea    -0x10(%ebp),%eax
 834d809:	89 54 24 04          	mov    %edx,0x4(%esp)
 834d80d:	89 04 24             	mov    %eax,(%esp)
 834d810:	e8 bf d0 03 00       	call   838a8d4 <_ZNK9__gnu_cxx8hash_mapIiP8CDungeonNS_4hashIiEESt8equal_toIiESaIS2_EE3endEv>
 834d815:	83 ec 04             	sub    $0x4,%esp
 834d818:	8d 45 f0             	lea    -0x10(%ebp),%eax
 834d81b:	89 44 24 04          	mov    %eax,0x4(%esp)
 834d81f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 834d822:	89 04 24             	mov    %eax,(%esp)
 834d825:	e8 d0 d0 03 00       	call   838a8fa <_ZNK9__gnu_cxx25_Hashtable_const_iteratorISt4pairIKiP8CDungeonEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEeqERKSD_>
 834d82a:	84 c0                	test   %al,%al
 834d82c:	74 07                	je     834d835 <_ZNK12CDungeonList12find_dungeonEi+0x6b>
 834d82e:	b8 00 00 00 00       	mov    $0x0,%eax
 834d833:	eb 0e                	jmp    834d843 <_ZNK12CDungeonList12find_dungeonEi+0x79>
 834d835:	8d 45 e8             	lea    -0x18(%ebp),%eax
 834d838:	89 04 24             	mov    %eax,(%esp)
 834d83b:	e8 ce d0 03 00       	call   838a90e <_ZNK9__gnu_cxx25_Hashtable_const_iteratorISt4pairIKiP8CDungeonEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEptEv>
 834d840:	8b 40 04             	mov    0x4(%eax),%eax
 834d843:	c9                   	leave
 834d844:	c3                   	ret
 834d845:	90                   	nop

```

```c
// CDungeonList::find_dungeon @ 0x834d7ca

/* CDungeonList::find_dungeon(int) const */

undefined4 CDungeonList::find_dungeon(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  hash_map<int,CDungeon*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CDungeon*>>
  local_14 [16];
  
  __gnu_cxx::
  _Hashtable_const_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
  ::_Hashtable_const_iterator();
  __gnu_cxx::
  hash_map<int,CDungeon*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CDungeon*>>::find
            (&local_24);
  local_1c = local_24;
  local_18 = local_20;
  __gnu_cxx::
  hash_map<int,CDungeon*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CDungeon*>>::end
            (local_14);
  cVar1 = __gnu_cxx::
          _Hashtable_const_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
          ::operator==((_Hashtable_const_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
                        *)&local_1c,(_Hashtable_const_iterator *)local_14);
  if (cVar1 == '\0') {
    iVar3 = __gnu_cxx::
            _Hashtable_const_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
            ::operator->((_Hashtable_const_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
                          *)&local_1c);
    uVar2 = *(undefined4 *)(iVar3 + 4);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## getDungeonIndexList

```asm
// === 0836542c CDungeonList::getDungeonIndexList  [0x0836542c-0x8365433] ===
 836542c:	55                   	push   %ebp
 836542d:	89 e5                	mov    %esp,%ebp
 836542f:	8b 45 08             	mov    0x8(%ebp),%eax
 8365432:	5d                   	pop    %ebp
 8365433:	c3                   	ret

```

```c
// CDungeonList::getDungeonIndexList @ 0x836542c

/* CDungeonList::getDungeonIndexList() */

CDungeonList * __thiscall CDungeonList::getDungeonIndexList(CDungeonList *this)

{
  return this;
}

```

---

## get_dungeon_at_index

```asm
// === 0834d846 CDungeonList::get_dungeon_at_index  [0x0834d846-0x834d8eb] ===
 834d846:	55                   	push   %ebp
 834d847:	89 e5                	mov    %esp,%ebp
 834d849:	83 ec 48             	sub    $0x48,%esp
 834d84c:	8d 45 dc             	lea    -0x24(%ebp),%eax
 834d84f:	89 04 24             	mov    %eax,(%esp)
 834d852:	e8 4b d0 03 00       	call   838a8a2 <_ZN9__gnu_cxx25_Hashtable_const_iteratorISt4pairIKiP8CDungeonEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEC1Ev>
 834d857:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 834d85e:	8b 55 08             	mov    0x8(%ebp),%edx
 834d861:	8d 45 d0             	lea    -0x30(%ebp),%eax
 834d864:	89 54 24 04          	mov    %edx,0x4(%esp)
 834d868:	89 04 24             	mov    %eax,(%esp)
 834d86b:	e8 b2 d0 03 00       	call   838a922 <_ZNK9__gnu_cxx8hash_mapIiP8CDungeonNS_4hashIiEESt8equal_toIiESaIS2_EE5beginEv>
 834d870:	83 ec 04             	sub    $0x4,%esp
 834d873:	8b 45 d0             	mov    -0x30(%ebp),%eax
 834d876:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 834d879:	89 45 dc             	mov    %eax,-0x24(%ebp)
 834d87c:	89 55 e0             	mov    %edx,-0x20(%ebp)
 834d87f:	eb 39                	jmp    834d8ba <_ZNK12CDungeonList20get_dungeon_at_indexEi+0x74>
 834d881:	8b 45 0c             	mov    0xc(%ebp),%eax
 834d884:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 834d887:	75 10                	jne    834d899 <_ZNK12CDungeonList20get_dungeon_at_indexEi+0x53>
 834d889:	8d 45 dc             	lea    -0x24(%ebp),%eax
 834d88c:	89 04 24             	mov    %eax,(%esp)
 834d88f:	e8 7a d0 03 00       	call   838a90e <_ZNK9__gnu_cxx25_Hashtable_const_iteratorISt4pairIKiP8CDungeonEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEptEv>
 834d894:	8b 40 04             	mov    0x4(%eax),%eax
 834d897:	eb 51                	jmp    834d8ea <_ZNK12CDungeonList20get_dungeon_at_indexEi+0xa4>
 834d899:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 834d89d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 834d8a0:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 834d8a7:	00 
 834d8a8:	8d 55 dc             	lea    -0x24(%ebp),%edx
 834d8ab:	89 54 24 04          	mov    %edx,0x4(%esp)
 834d8af:	89 04 24             	mov    %eax,(%esp)
 834d8b2:	e8 a5 d0 03 00       	call   838a95c <_ZN9__gnu_cxx25_Hashtable_const_iteratorISt4pairIKiP8CDungeonEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEppEi>
 834d8b7:	83 ec 04             	sub    $0x4,%esp
 834d8ba:	8b 55 08             	mov    0x8(%ebp),%edx
 834d8bd:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 834d8c0:	89 54 24 04          	mov    %edx,0x4(%esp)
 834d8c4:	89 04 24             	mov    %eax,(%esp)
 834d8c7:	e8 08 d0 03 00       	call   838a8d4 <_ZNK9__gnu_cxx8hash_mapIiP8CDungeonNS_4hashIiEESt8equal_toIiESaIS2_EE3endEv>
 834d8cc:	83 ec 04             	sub    $0x4,%esp
 834d8cf:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 834d8d2:	89 44 24 04          	mov    %eax,0x4(%esp)
 834d8d6:	8d 45 dc             	lea    -0x24(%ebp),%eax
 834d8d9:	89 04 24             	mov    %eax,(%esp)
 834d8dc:	e8 67 d0 03 00       	call   838a948 <_ZNK9__gnu_cxx25_Hashtable_const_iteratorISt4pairIKiP8CDungeonEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEneERKSD_>
 834d8e1:	84 c0                	test   %al,%al
 834d8e3:	75 9c                	jne    834d881 <_ZNK12CDungeonList20get_dungeon_at_indexEi+0x3b>
 834d8e5:	b8 00 00 00 00       	mov    $0x0,%eax
 834d8ea:	c9                   	leave
 834d8eb:	c3                   	ret

```

```c
// CDungeonList::get_dungeon_at_index @ 0x834d846

/* CDungeonList::get_dungeon_at_index(int) const */

undefined4 __thiscall CDungeonList::get_dungeon_at_index(CDungeonList *this,int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 local_24;
  hash_map<int,CDungeon*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CDungeon*>>
  local_20 [8];
  _Hashtable_const_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
  local_18 [8];
  int local_10;
  
  __gnu_cxx::
  _Hashtable_const_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
  ::_Hashtable_const_iterator();
  local_10 = 0;
  __gnu_cxx::
  hash_map<int,CDungeon*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CDungeon*>>::begin
            ((hash_map<int,CDungeon*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CDungeon*>>
              *)&local_34);
  local_28 = local_34;
  local_24 = local_30;
  while( true ) {
    __gnu_cxx::
    hash_map<int,CDungeon*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CDungeon*>>::end
              (local_20);
    cVar1 = __gnu_cxx::
            _Hashtable_const_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
            ::operator!=((_Hashtable_const_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
                          *)&local_28,(_Hashtable_const_iterator *)local_20);
    if (cVar1 == '\0') {
      return 0;
    }
    if (param_1 == local_10) break;
    local_10 = local_10 + 1;
    __gnu_cxx::
    _Hashtable_const_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
    ::operator++(local_18,(int)&local_28);
  }
  iVar2 = __gnu_cxx::
          _Hashtable_const_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
          ::operator->((_Hashtable_const_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
                        *)&local_28);
  return *(undefined4 *)(iVar2 + 4);
}

```

---

## insert_dungeon

```asm
// === 0834d6cc CDungeonList::insert_dungeon  [0x0834d6cc-0x834d7c9] ===
 834d6cc:	55                   	push   %ebp
 834d6cd:	89 e5                	mov    %esp,%ebp
 834d6cf:	83 ec 68             	sub    $0x68,%esp
 834d6d2:	8d 45 cc             	lea    -0x34(%ebp),%eax
 834d6d5:	89 04 24             	mov    %eax,(%esp)
 834d6d8:	e8 67 d0 03 00       	call   838a744 <_ZN9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP8CDungeonEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEC1Ev>
 834d6dd:	8b 45 0c             	mov    0xc(%ebp),%eax
 834d6e0:	89 04 24             	mov    %eax,(%esp)
 834d6e3:	e8 08 06 db ff       	call   80fdcf0 <_ZNK8CDungeon9get_indexEv>
 834d6e8:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 834d6eb:	8b 55 08             	mov    0x8(%ebp),%edx
 834d6ee:	8d 45 c0             	lea    -0x40(%ebp),%eax
 834d6f1:	8d 4d d4             	lea    -0x2c(%ebp),%ecx
 834d6f4:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 834d6f8:	89 54 24 04          	mov    %edx,0x4(%esp)
 834d6fc:	89 04 24             	mov    %eax,(%esp)
 834d6ff:	e8 04 d1 03 00       	call   838a808 <_ZN9__gnu_cxx8hash_mapIiP8CDungeonNS_4hashIiEESt8equal_toIiESaIS2_EE4findERKi>
 834d704:	83 ec 04             	sub    $0x4,%esp
 834d707:	8b 45 c0             	mov    -0x40(%ebp),%eax
 834d70a:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 834d70d:	89 45 cc             	mov    %eax,-0x34(%ebp)
 834d710:	89 55 d0             	mov    %edx,-0x30(%ebp)
 834d713:	8b 55 08             	mov    0x8(%ebp),%edx
 834d716:	8d 45 d8             	lea    -0x28(%ebp),%eax
 834d719:	89 54 24 04          	mov    %edx,0x4(%esp)
 834d71d:	89 04 24             	mov    %eax,(%esp)
 834d720:	e8 4b d0 03 00       	call   838a770 <_ZN9__gnu_cxx8hash_mapIiP8CDungeonNS_4hashIiEESt8equal_toIiESaIS2_EE3endEv>
 834d725:	83 ec 04             	sub    $0x4,%esp
 834d728:	8d 45 d8             	lea    -0x28(%ebp),%eax
 834d72b:	89 44 24 04          	mov    %eax,0x4(%esp)
 834d72f:	8d 45 cc             	lea    -0x34(%ebp),%eax
 834d732:	89 04 24             	mov    %eax,(%esp)
 834d735:	e8 fa d0 03 00       	call   838a834 <_ZNK9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP8CDungeonEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEeqERKSD_>
 834d73a:	84 c0                	test   %al,%al
 834d73c:	74 4a                	je     834d788 <_ZN12CDungeonList14insert_dungeonEP8CDungeon+0xbc>
 834d73e:	8b 45 0c             	mov    0xc(%ebp),%eax
 834d741:	89 04 24             	mov    %eax,(%esp)
 834d744:	e8 a7 05 db ff       	call   80fdcf0 <_ZNK8CDungeon9get_indexEv>
 834d749:	89 45 f4             	mov    %eax,-0xc(%ebp)
 834d74c:	8d 45 0c             	lea    0xc(%ebp),%eax
 834d74f:	89 44 24 08          	mov    %eax,0x8(%esp)
 834d753:	8d 45 f4             	lea    -0xc(%ebp),%eax
 834d756:	89 44 24 04          	mov    %eax,0x4(%esp)
 834d75a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 834d75d:	89 04 24             	mov    %eax,(%esp)
 834d760:	e8 e3 d0 03 00       	call   838a848 <_ZNSt4pairIKiP8CDungeonEC1IiRS2_EEOT_OT0_>
 834d765:	8b 55 08             	mov    0x8(%ebp),%edx
 834d768:	8d 45 e0             	lea    -0x20(%ebp),%eax
 834d76b:	8d 4d ec             	lea    -0x14(%ebp),%ecx
 834d76e:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 834d772:	89 54 24 04          	mov    %edx,0x4(%esp)
 834d776:	89 04 24             	mov    %eax,(%esp)
 834d779:	e8 f8 d0 03 00       	call   838a876 <_ZN9__gnu_cxx8hash_mapIiP8CDungeonNS_4hashIiEESt8equal_toIiESaIS2_EE6insertERKSt4pairIKiS2_E>
 834d77e:	83 ec 04             	sub    $0x4,%esp
 834d781:	b8 01 00 00 00       	mov    $0x1,%eax
 834d786:	eb 40                	jmp    834d7c8 <_ZN12CDungeonList14insert_dungeonEP8CDungeon+0xfc>
 834d788:	8b 45 0c             	mov    0xc(%ebp),%eax
 834d78b:	89 04 24             	mov    %eax,(%esp)
 834d78e:	e8 5d 05 db ff       	call   80fdcf0 <_ZNK8CDungeon9get_indexEv>
 834d793:	89 44 24 14          	mov    %eax,0x14(%esp)
 834d797:	c7 44 24 10 24 ff c2 	movl   $0x8c2ff24,0x10(%esp)
 834d79e:	08 
 834d79f:	c7 44 24 0c 21 09 00 	movl   $0x921,0xc(%esp)
 834d7a6:	00 
 834d7a7:	c7 44 24 08 60 48 c3 	movl   $0x8c34860,0x8(%esp)
 834d7ae:	08 
 834d7af:	c7 44 24 04 0a f9 c2 	movl   $0x8c2f90a,0x4(%esp)
 834d7b6:	08 
 834d7b7:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 834d7be:	e8 47 64 78 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 834d7c3:	b8 00 00 00 00       	mov    $0x0,%eax
 834d7c8:	c9                   	leave
 834d7c9:	c3                   	ret

```

```c
// CDungeonList::insert_dungeon @ 0x834d6cc

/* CDungeonList::insert_dungeon(CDungeon*) */

bool __thiscall CDungeonList::insert_dungeon(CDungeonList *this,CDungeon *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int local_44;
  undefined4 local_40;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  hash_map<int,CDungeon*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CDungeon*>>
  local_2c [8];
  hash_map<int,CDungeon*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CDungeon*>>
  local_24 [12];
  pair<int_const,CDungeon*> local_18 [8];
  int local_10 [3];
  
  __gnu_cxx::
  _Hashtable_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
  ::_Hashtable_iterator();
  local_30 = CDungeon::get_index(param_1);
  __gnu_cxx::
  hash_map<int,CDungeon*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CDungeon*>>::find
            (&local_44);
  local_38 = local_44;
  local_34 = local_40;
  __gnu_cxx::
  hash_map<int,CDungeon*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CDungeon*>>::end
            (local_2c);
  cVar1 = __gnu_cxx::
          _Hashtable_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
          ::operator==((_Hashtable_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
                        *)&local_38,(_Hashtable_iterator *)local_2c);
  if (cVar1 == '\0') {
    uVar2 = CDungeon::get_index(param_1);
    LogManager::logFormat
              (1,"data_manager.cpp","bool CDungeonList::insert_dungeon(CDungeon*)",0x921,
               "Already registed dungeon index detected : %d",uVar2);
  }
  else {
    local_10[0] = CDungeon::get_index(param_1);
    std::pair<int_const,CDungeon*>::pair<int,CDungeon*&>(local_18,local_10,&param_1);
    __gnu_cxx::
    hash_map<int,CDungeon*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CDungeon*>>::
    insert(local_24,this);
  }
  return cVar1 != '\0';
}

```

---

## load_list

```asm
// === 0834d376 CDungeonList::load_list  [0x0834d376-0x834d60f] ===
 834d376:	55                   	push   %ebp
 834d377:	89 e5                	mov    %esp,%ebp
 834d379:	57                   	push   %edi
 834d37a:	56                   	push   %esi
 834d37b:	53                   	push   %ebx
 834d37c:	81 ec 6c 05 00 00    	sub    $0x56c,%esp
 834d382:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 834d389:	8d 85 b4 fa ff ff    	lea    -0x54c(%ebp),%eax
 834d38f:	89 04 24             	mov    %eax,(%esp)
 834d392:	e8 4b e2 01 00       	call   836b5e2 <_ZN15STDungeonScriptC1Ev>
 834d397:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 834d39e:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 834d3a1:	89 04 24             	mov    %eax,(%esp)
 834d3a4:	e8 2f 69 f6 ff       	call   82b3cd8 <_ZNSt17_Rb_tree_iteratorISt4pairIKiSsEEC1Ev>
 834d3a9:	8d 85 a4 fa ff ff    	lea    -0x55c(%ebp),%eax
 834d3af:	c7 44 24 04 a0 6e 4f 	movl   $0x94f6ea0,0x4(%esp)
 834d3b6:	09 
 834d3b7:	89 04 24             	mov    %eax,(%esp)
 834d3ba:	e8 33 8d d9 ff       	call   80e60f2 <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEE5beginEv>
 834d3bf:	83 ec 04             	sub    $0x4,%esp
 834d3c2:	8b 85 a4 fa ff ff    	mov    -0x55c(%ebp),%eax
 834d3c8:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 834d3cb:	e9 cd 01 00 00       	jmp    834d59d <_ZN12CDungeonList9load_listEv+0x227>
 834d3d0:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 834d3d3:	89 04 24             	mov    %eax,(%esp)
 834d3d6:	e8 dd 8d d9 ff       	call   80e61b8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSsEEptEv>
 834d3db:	83 c0 04             	add    $0x4,%eax
 834d3de:	89 04 24             	mov    %eax,(%esp)
 834d3e1:	e8 0a 91 3b 00       	call   87064f0 <_ZNKSs5c_strEv>
 834d3e6:	89 45 e0             	mov    %eax,-0x20(%ebp)
 834d3e9:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 834d3ed:	0f 84 dc 01 00 00    	je     834d5cf <_ZN12CDungeonList9load_listEv+0x259>
 834d3f3:	8b 45 e0             	mov    -0x20(%ebp),%eax
 834d3f6:	89 44 24 04          	mov    %eax,0x4(%esp)
 834d3fa:	8d 85 b4 fa ff ff    	lea    -0x54c(%ebp),%eax
 834d400:	89 04 24             	mov    %eax,(%esp)
 834d403:	e8 a2 8b 59 00       	call   88e5faa <_Z19ImportDungeonScriptP15STDungeonScriptPKc>
 834d408:	83 f0 01             	xor    $0x1,%eax
 834d40b:	84 c0                	test   %al,%al
 834d40d:	74 1d                	je     834d42c <_ZN12CDungeonList9load_listEv+0xb6>
 834d40f:	8b 45 e0             	mov    -0x20(%ebp),%eax
 834d412:	89 44 24 04          	mov    %eax,0x4(%esp)
 834d416:	c7 04 24 d3 fe c2 08 	movl   $0x8c2fed3,(%esp)
 834d41d:	e8 3e 07 d3 ff       	call   807db60 <printf@plt>
 834d422:	bb 00 00 00 00       	mov    $0x0,%ebx
 834d427:	e9 c9 01 00 00       	jmp    834d5f5 <_ZN12CDungeonList9load_listEv+0x27f>
 834d42c:	8d 85 b4 fa ff ff    	lea    -0x54c(%ebp),%eax
 834d432:	05 18 03 00 00       	add    $0x318,%eax
 834d437:	89 04 24             	mov    %eax,(%esp)
 834d43a:	e8 c7 9e dd ff       	call   8127306 <_ZNKSt6vectorI14_DailyScheduleSaIS0_EE4sizeEv>
 834d43f:	85 c0                	test   %eax,%eax
 834d441:	0f 95 c0             	setne  %al
 834d444:	84 c0                	test   %al,%al
 834d446:	74 1d                	je     834d465 <_ZN12CDungeonList9load_listEv+0xef>
 834d448:	a1 84 f7 41 09       	mov    0x941f784,%eax
 834d44d:	8d 95 b4 fa ff ff    	lea    -0x54c(%ebp),%edx
 834d453:	81 c2 18 03 00 00    	add    $0x318,%edx
 834d459:	89 54 24 04          	mov    %edx,0x4(%esp)
 834d45d:	89 04 24             	mov    %eax,(%esp)
 834d460:	e8 d7 87 dd ff       	call   8125c3c <_ZN21CDailyScheduleManager15AddDailScheduleERKSt6vectorI14_DailyScheduleSaIS1_EE>
 834d465:	0f b6 85 5d fd ff ff 	movzbl -0x2a3(%ebp),%eax
 834d46c:	84 c0                	test   %al,%al
 834d46e:	74 36                	je     834d4a6 <_ZN12CDungeonList9load_listEv+0x130>
 834d470:	c7 04 24 34 09 00 00 	movl   $0x934,(%esp)
 834d477:	e8 d4 6f 3d 00       	call   8724450 <_Znwj>
 834d47c:	89 c3                	mov    %eax,%ebx
 834d47e:	89 d8                	mov    %ebx,%eax
 834d480:	89 04 24             	mov    %eax,(%esp)
 834d483:	e8 7e a1 02 00       	call   8377606 <_ZN23CDungeon_TowerOfDespairC1Ev>
 834d488:	eb 15                	jmp    834d49f <_ZN12CDungeonList9load_listEv+0x129>
 834d48a:	89 d6                	mov    %edx,%esi
 834d48c:	89 c7                	mov    %eax,%edi
 834d48e:	89 1c 24             	mov    %ebx,(%esp)
 834d491:	e8 5a 70 3d 00       	call   87244f0 <_ZdlPv>
 834d496:	89 f8                	mov    %edi,%eax
 834d498:	89 f2                	mov    %esi,%edx
 834d49a:	e9 38 01 00 00       	jmp    834d5d7 <_ZN12CDungeonList9load_listEv+0x261>
 834d49f:	89 d8                	mov    %ebx,%eax
 834d4a1:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 834d4a4:	eb 32                	jmp    834d4d8 <_ZN12CDungeonList9load_listEv+0x162>
 834d4a6:	c7 04 24 34 09 00 00 	movl   $0x934,(%esp)
 834d4ad:	e8 9e 6f 3d 00       	call   8724450 <_Znwj>
 834d4b2:	89 c3                	mov    %eax,%ebx
 834d4b4:	89 d8                	mov    %ebx,%eax
 834d4b6:	89 04 24             	mov    %eax,(%esp)
 834d4b9:	e8 7e 6a 02 00       	call   8373f3c <_ZN8CDungeonC1Ev>
 834d4be:	eb 15                	jmp    834d4d5 <_ZN12CDungeonList9load_listEv+0x15f>
 834d4c0:	89 d6                	mov    %edx,%esi
 834d4c2:	89 c7                	mov    %eax,%edi
 834d4c4:	89 1c 24             	mov    %ebx,(%esp)
 834d4c7:	e8 24 70 3d 00       	call   87244f0 <_ZdlPv>
 834d4cc:	89 f8                	mov    %edi,%eax
 834d4ce:	89 f2                	mov    %esi,%edx
 834d4d0:	e9 02 01 00 00       	jmp    834d5d7 <_ZN12CDungeonList9load_listEv+0x261>
 834d4d5:	89 5d e4             	mov    %ebx,-0x1c(%ebp)
 834d4d8:	8d 85 b4 fa ff ff    	lea    -0x54c(%ebp),%eax
 834d4de:	89 44 24 04          	mov    %eax,0x4(%esp)
 834d4e2:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 834d4e5:	89 04 24             	mov    %eax,(%esp)
 834d4e8:	e8 d7 d7 ff ff       	call   834acc4 <_ZN8CDungeon11set_dungeonER15STDungeonScript>
 834d4ed:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 834d4f0:	89 44 24 04          	mov    %eax,0x4(%esp)
 834d4f4:	8b 45 08             	mov    0x8(%ebp),%eax
 834d4f7:	89 04 24             	mov    %eax,(%esp)
 834d4fa:	e8 cd 01 00 00       	call   834d6cc <_ZN12CDungeonList14insert_dungeonEP8CDungeon>
 834d4ff:	e8 8a ec d7 ff       	call   80cc18e <_Z14G_CGameManagerv>
 834d504:	89 04 24             	mov    %eax,(%esp)
 834d507:	e8 b4 b8 f4 ff       	call   8298dc0 <_ZN12CGameManager26GetQuickPartySystemManagerEv>
 834d50c:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 834d50f:	89 54 24 04          	mov    %edx,0x4(%esp)
 834d513:	89 04 24             	mov    %eax,(%esp)
 834d516:	e8 f1 c6 f1 ff       	call   8269c0c <_ZN10QuickParty24CQuickPartySystemManager21init_quick_party_poolEPK8CDungeon>
 834d51b:	8b 45 08             	mov    0x8(%ebp),%eax
 834d51e:	89 04 24             	mov    %eax,(%esp)
 834d521:	e8 72 71 02 00       	call   8374698 <_ZN12CDungeonList4sizeEv>
 834d526:	3d e8 03 00 00       	cmp    $0x3e8,%eax
 834d52b:	0f 9f c0             	setg   %al
 834d52e:	84 c0                	test   %al,%al
 834d530:	74 4e                	je     834d580 <_ZN12CDungeonList9load_listEv+0x20a>
 834d532:	8b 45 08             	mov    0x8(%ebp),%eax
 834d535:	89 04 24             	mov    %eax,(%esp)
 834d538:	e8 5b 71 02 00       	call   8374698 <_ZN12CDungeonList4sizeEv>
 834d53d:	89 c3                	mov    %eax,%ebx
 834d53f:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 834d546:	00 
 834d547:	c7 44 24 08 ec 08 00 	movl   $0x8ec,0x8(%esp)
 834d54e:	00 
 834d54f:	c7 44 24 04 90 48 c3 	movl   $0x8c34890,0x4(%esp)
 834d556:	08 
 834d557:	8d 45 cc             	lea    -0x34(%ebp),%eax
 834d55a:	89 04 24             	mov    %eax,(%esp)
 834d55d:	e8 b6 21 20 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 834d562:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 834d566:	c7 44 24 04 f0 fe c2 	movl   $0x8c2fef0,0x4(%esp)
 834d56d:	08 
 834d56e:	8d 45 cc             	lea    -0x34(%ebp),%eax
 834d571:	89 04 24             	mov    %eax,(%esp)
 834d574:	e8 0f 22 20 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 834d579:	bb 00 00 00 00       	mov    $0x0,%ebx
 834d57e:	eb 75                	jmp    834d5f5 <_ZN12CDungeonList9load_listEv+0x27f>
 834d580:	8d 45 dc             	lea    -0x24(%ebp),%eax
 834d583:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 834d58a:	00 
 834d58b:	8d 55 c4             	lea    -0x3c(%ebp),%edx
 834d58e:	89 54 24 04          	mov    %edx,0x4(%esp)
 834d592:	89 04 24             	mov    %eax,(%esp)
 834d595:	e8 4a 41 ff ff       	call   83416e4 <_ZNSt17_Rb_tree_iteratorISt4pairIKiSsEEppEi>
 834d59a:	83 ec 04             	sub    $0x4,%esp
 834d59d:	8d 45 c8             	lea    -0x38(%ebp),%eax
 834d5a0:	c7 44 24 04 a0 6e 4f 	movl   $0x94f6ea0,0x4(%esp)
 834d5a7:	09 
 834d5a8:	89 04 24             	mov    %eax,(%esp)
 834d5ab:	e8 68 8b d9 ff       	call   80e6118 <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEE3endEv>
 834d5b0:	83 ec 04             	sub    $0x4,%esp
 834d5b3:	8d 45 c8             	lea    -0x38(%ebp),%eax
 834d5b6:	89 44 24 04          	mov    %eax,0x4(%esp)
 834d5ba:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 834d5bd:	89 04 24             	mov    %eax,(%esp)
 834d5c0:	e8 79 8b d9 ff       	call   80e613e <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSsEEneERKS3_>
 834d5c5:	84 c0                	test   %al,%al
 834d5c7:	0f 85 03 fe ff ff    	jne    834d3d0 <_ZN12CDungeonList9load_listEv+0x5a>
 834d5cd:	eb 01                	jmp    834d5d0 <_ZN12CDungeonList9load_listEv+0x25a>
 834d5cf:	90                   	nop
 834d5d0:	bb 01 00 00 00       	mov    $0x1,%ebx
 834d5d5:	eb 1e                	jmp    834d5f5 <_ZN12CDungeonList9load_listEv+0x27f>
 834d5d7:	89 d3                	mov    %edx,%ebx
 834d5d9:	89 c6                	mov    %eax,%esi
 834d5db:	8d 85 b4 fa ff ff    	lea    -0x54c(%ebp),%eax
 834d5e1:	89 04 24             	mov    %eax,(%esp)
 834d5e4:	e8 73 e7 01 00       	call   836bd5c <_ZN15STDungeonScriptD1Ev>
 834d5e9:	89 f0                	mov    %esi,%eax
 834d5eb:	89 da                	mov    %ebx,%edx
 834d5ed:	89 04 24             	mov    %eax,(%esp)
 834d5f0:	e8 5b 61 79 00       	call   8ae3750 <_Unwind_Resume>
 834d5f5:	8d 85 b4 fa ff ff    	lea    -0x54c(%ebp),%eax
 834d5fb:	89 04 24             	mov    %eax,(%esp)
 834d5fe:	e8 59 e7 01 00       	call   836bd5c <_ZN15STDungeonScriptD1Ev>
 834d603:	89 d8                	mov    %ebx,%eax
 834d605:	8d 65 f4             	lea    -0xc(%ebp),%esp
 834d608:	83 c4 00             	add    $0x0,%esp
 834d60b:	5b                   	pop    %ebx
 834d60c:	5e                   	pop    %esi
 834d60d:	5f                   	pop    %edi
 834d60e:	5d                   	pop    %ebp
 834d60f:	c3                   	ret

```

```c
// CDungeonList::load_list @ 0x834d376

/* CDungeonList::load_list() */

undefined4 __thiscall CDungeonList::load_list(CDungeonList *this)

{
  char cVar1;
  int iVar2;
  CDungeon_TowerOfDespair *this_00;
  CDungeon *this_01;
  CGameManager *this_02;
  CQuickPartySystemManager *this_03;
  undefined4 uVar3;
  undefined4 local_560 [4];
  STDungeonScript local_550 [681];
  char local_2a7;
  vector<_DailySchedule,std::allocator<_DailySchedule>> avStack_238 [504];
  undefined4 local_40;
  map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> local_3c [4];
  cMyTrace local_38 [16];
  _Rb_tree_iterator<std::pair<int_const,std::string>> local_28 [4];
  char *local_24;
  CDungeon *local_20;
  
  local_24 = (char *)0x0;
  STDungeonScript::STDungeonScript(local_550);
  local_20 = (CDungeon *)0x0;
  std::_Rb_tree_iterator<std::pair<int_const,std::string>>::_Rb_tree_iterator
            ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)&local_40);
                    /* try { // try from 0834d3ba to 0834d47b has its CatchHandler @ 0834d5d7 */
  std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::begin
            ((map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> *
             )local_560);
  local_40 = local_560[0];
  while( true ) {
    std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::end
              (local_3c);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)&local_40,
                       (_Rb_tree_iterator *)local_3c);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)&local_40);
    local_24 = (char *)std::string::c_str((string *)(iVar2 + 4));
    if (local_24 == (char *)0x0) break;
    cVar1 = ImportDungeonScript(local_550,local_24);
    if (cVar1 != '\x01') {
      printf("Dungeon Script Error: %s\n",local_24);
      uVar3 = 0;
      goto LAB_0834d5f5;
    }
    iVar2 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::size(avStack_238);
    if (iVar2 != 0) {
      CDailyScheduleManager::AddDailSchedule
                (GlobalData::s_DailyScheduleManager,(vector *)avStack_238);
    }
    if (local_2a7 == '\0') {
                    /* try { // try from 0834d4ad to 0834d4b1 has its CatchHandler @ 0834d5d7 */
      this_01 = operator_new(0x934);
                    /* try { // try from 0834d4b9 to 0834d4bd has its CatchHandler @ 0834d4c0 */
      CDungeon::CDungeon(this_01);
      local_20 = this_01;
    }
    else {
      this_00 = operator_new(0x934);
                    /* try { // try from 0834d483 to 0834d487 has its CatchHandler @ 0834d48a */
      CDungeon_TowerOfDespair::CDungeon_TowerOfDespair(this_00);
      local_20 = (CDungeon *)this_00;
    }
                    /* try { // try from 0834d4e8 to 0834d5af has its CatchHandler @ 0834d5d7 */
    CDungeon::set_dungeon(local_20,local_550);
    insert_dungeon(this,local_20);
    this_02 = (CGameManager *)G_CGameManager();
    this_03 = (CQuickPartySystemManager *)CGameManager::GetQuickPartySystemManager(this_02);
    QuickParty::CQuickPartySystemManager::init_quick_party_pool(this_03,local_20);
    iVar2 = size(this);
    if (1000 < iVar2) {
      uVar3 = size(this);
      cMyTrace::cMyTrace(local_38,"bool CDungeonList::load_list()",0x8ec,5);
      cMyTrace::operator()(local_38,"Best Clear Time Save Dungeon Index Over Error: %d\n",uVar3);
      uVar3 = 0;
      goto LAB_0834d5f5;
    }
    std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator++(local_28,(int)&local_40);
  }
  uVar3 = 1;
LAB_0834d5f5:
  STDungeonScript::~STDungeonScript(local_550);
  return uVar3;
}

```

---

## ~CDungeonList

```asm
// === 0834d334 CDungeonList::~CDungeonList  [0x0834d334-0x834d375] ===
 834d334:	55                   	push   %ebp
 834d335:	89 e5                	mov    %esp,%ebp
 834d337:	56                   	push   %esi
 834d338:	53                   	push   %ebx
 834d339:	83 ec 10             	sub    $0x10,%esp
 834d33c:	8b 45 08             	mov    0x8(%ebp),%eax
 834d33f:	89 04 24             	mov    %eax,(%esp)
 834d342:	e8 c9 02 00 00       	call   834d610 <_ZN12CDungeonList7destroyEv>
 834d347:	eb 1b                	jmp    834d364 <_ZN12CDungeonListD1Ev+0x30>
 834d349:	89 d3                	mov    %edx,%ebx
 834d34b:	89 c6                	mov    %eax,%esi
 834d34d:	8b 45 08             	mov    0x8(%ebp),%eax
 834d350:	89 04 24             	mov    %eax,(%esp)
 834d353:	e8 6c 9c 02 00       	call   8376fc4 <_ZN9__gnu_cxx8hash_mapIiP8CDungeonNS_4hashIiEESt8equal_toIiESaIS2_EED1Ev>
 834d358:	89 f0                	mov    %esi,%eax
 834d35a:	89 da                	mov    %ebx,%edx
 834d35c:	89 04 24             	mov    %eax,(%esp)
 834d35f:	e8 ec 63 79 00       	call   8ae3750 <_Unwind_Resume>
 834d364:	8b 45 08             	mov    0x8(%ebp),%eax
 834d367:	89 04 24             	mov    %eax,(%esp)
 834d36a:	e8 55 9c 02 00       	call   8376fc4 <_ZN9__gnu_cxx8hash_mapIiP8CDungeonNS_4hashIiEESt8equal_toIiESaIS2_EED1Ev>
 834d36f:	83 c4 10             	add    $0x10,%esp
 834d372:	5b                   	pop    %ebx
 834d373:	5e                   	pop    %esi
 834d374:	5d                   	pop    %ebp
 834d375:	c3                   	ret

```

```c
// CDungeonList::~CDungeonList @ 0x834d334

/* CDungeonList::~CDungeonList() */

void __thiscall CDungeonList::~CDungeonList(CDungeonList *this)

{
                    /* try { // try from 0834d342 to 0834d346 has its CatchHandler @ 0834d349 */
  destroy(this);
  __gnu_cxx::
  hash_map<int,CDungeon*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CDungeon*>>::
  ~hash_map((hash_map<int,CDungeon*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CDungeon*>>
             *)this);
  return;
}

```

