# CDungeonDataManager

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 7

---

## InsertDungeonKey

```asm
// === 084856ac CDungeonDataManager::InsertDungeonKey  [0x084856ac-0x8485809] ===
 84856ac:	55                   	push   %ebp
 84856ad:	89 e5                	mov    %esp,%ebp
 84856af:	56                   	push   %esi
 84856b0:	53                   	push   %ebx
 84856b1:	81 ec f0 01 00 00    	sub    $0x1f0,%esp
 84856b7:	8b 55 08             	mov    0x8(%ebp),%edx
 84856ba:	8d 85 20 fe ff ff    	lea    -0x1e0(%ebp),%eax
 84856c0:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 84856c3:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 84856c7:	89 54 24 04          	mov    %edx,0x4(%esp)
 84856cb:	89 04 24             	mov    %eax,(%esp)
 84856ce:	e8 b3 22 00 00       	call   8487986 <_ZNSt3mapI10DungeonKey12CDungeonNodeSt4lessIS0_ESaISt4pairIKS0_S1_EEE4findERS5_>
 84856d3:	83 ec 04             	sub    $0x4,%esp
 84856d6:	8b 55 08             	mov    0x8(%ebp),%edx
 84856d9:	8d 85 24 fe ff ff    	lea    -0x1dc(%ebp),%eax
 84856df:	89 54 24 04          	mov    %edx,0x4(%esp)
 84856e3:	89 04 24             	mov    %eax,(%esp)
 84856e6:	e8 c7 22 00 00       	call   84879b2 <_ZNSt3mapI10DungeonKey12CDungeonNodeSt4lessIS0_ESaISt4pairIKS0_S1_EEE3endEv>
 84856eb:	83 ec 04             	sub    $0x4,%esp
 84856ee:	8d 85 24 fe ff ff    	lea    -0x1dc(%ebp),%eax
 84856f4:	89 44 24 04          	mov    %eax,0x4(%esp)
 84856f8:	8d 85 20 fe ff ff    	lea    -0x1e0(%ebp),%eax
 84856fe:	89 04 24             	mov    %eax,(%esp)
 8485701:	e8 d2 22 00 00       	call   84879d8 <_ZNKSt17_Rb_tree_iteratorISt4pairIK10DungeonKey12CDungeonNodeEEneERKS5_>
 8485706:	84 c0                	test   %al,%al
 8485708:	74 0a                	je     8485714 <_ZN19CDungeonDataManager16InsertDungeonKeyER10DungeonKey+0x68>
 848570a:	b8 00 00 00 00       	mov    $0x0,%eax
 848570f:	e9 eb 00 00 00       	jmp    84857ff <_ZN19CDungeonDataManager16InsertDungeonKeyER10DungeonKey+0x153>
 8485714:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 848571a:	89 04 24             	mov    %eax,(%esp)
 848571d:	e8 c4 13 00 00       	call   8486ae6 <_ZN12CDungeonNodeC1Ev>
 8485722:	8d 85 cc fe ff ff    	lea    -0x134(%ebp),%eax
 8485728:	8d 95 68 ff ff ff    	lea    -0x98(%ebp),%edx
 848572e:	89 54 24 08          	mov    %edx,0x8(%esp)
 8485732:	8b 55 0c             	mov    0xc(%ebp),%edx
 8485735:	89 54 24 04          	mov    %edx,0x4(%esp)
 8485739:	89 04 24             	mov    %eax,(%esp)
 848573c:	e8 ab 22 00 00       	call   84879ec <_ZSt9make_pairIR10DungeonKey12CDungeonNodeESt4pairINSt17__decay_and_stripIT_E6__typeENS4_IT0_E6__typeEEOS5_OS8_>
 8485741:	83 ec 04             	sub    $0x4,%esp
 8485744:	8d 85 cc fe ff ff    	lea    -0x134(%ebp),%eax
 848574a:	89 44 24 04          	mov    %eax,0x4(%esp)
 848574e:	8d 85 30 fe ff ff    	lea    -0x1d0(%ebp),%eax
 8485754:	89 04 24             	mov    %eax,(%esp)
 8485757:	e8 0a 24 00 00       	call   8487b66 <_ZNSt4pairIK10DungeonKey12CDungeonNodeEC1IS0_S2_EEOS_IT_T0_E>
 848575c:	8b 55 08             	mov    0x8(%ebp),%edx
 848575f:	8d 85 28 fe ff ff    	lea    -0x1d8(%ebp),%eax
 8485765:	8d 8d 30 fe ff ff    	lea    -0x1d0(%ebp),%ecx
 848576b:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 848576f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8485773:	89 04 24             	mov    %eax,(%esp)
 8485776:	e8 5f 24 00 00       	call   8487bda <_ZNSt3mapI10DungeonKey12CDungeonNodeSt4lessIS0_ESaISt4pairIKS0_S1_EEE6insertERKS6_>
 848577b:	83 ec 04             	sub    $0x4,%esp
 848577e:	8d 85 30 fe ff ff    	lea    -0x1d0(%ebp),%eax
 8485784:	89 04 24             	mov    %eax,(%esp)
 8485787:	e8 7e 16 00 00       	call   8486e0a <_ZNSt4pairIK10DungeonKey12CDungeonNodeED1Ev>
 848578c:	eb 30                	jmp    84857be <_ZN19CDungeonDataManager16InsertDungeonKeyER10DungeonKey+0x112>
 848578e:	89 d3                	mov    %edx,%ebx
 8485790:	89 c6                	mov    %eax,%esi
 8485792:	8d 85 30 fe ff ff    	lea    -0x1d0(%ebp),%eax
 8485798:	89 04 24             	mov    %eax,(%esp)
 848579b:	e8 6a 16 00 00       	call   8486e0a <_ZNSt4pairIK10DungeonKey12CDungeonNodeED1Ev>
 84857a0:	89 f0                	mov    %esi,%eax
 84857a2:	89 da                	mov    %ebx,%edx
 84857a4:	eb 00                	jmp    84857a6 <_ZN19CDungeonDataManager16InsertDungeonKeyER10DungeonKey+0xfa>
 84857a6:	89 d3                	mov    %edx,%ebx
 84857a8:	89 c6                	mov    %eax,%esi
 84857aa:	8d 85 cc fe ff ff    	lea    -0x134(%ebp),%eax
 84857b0:	89 04 24             	mov    %eax,(%esp)
 84857b3:	e8 0c 16 00 00       	call   8486dc4 <_ZNSt4pairI10DungeonKey12CDungeonNodeED1Ev>
 84857b8:	89 f0                	mov    %esi,%eax
 84857ba:	89 da                	mov    %ebx,%edx
 84857bc:	eb 10                	jmp    84857ce <_ZN19CDungeonDataManager16InsertDungeonKeyER10DungeonKey+0x122>
 84857be:	8d 85 cc fe ff ff    	lea    -0x134(%ebp),%eax
 84857c4:	89 04 24             	mov    %eax,(%esp)
 84857c7:	e8 f8 15 00 00       	call   8486dc4 <_ZNSt4pairI10DungeonKey12CDungeonNodeED1Ev>
 84857cc:	eb 1e                	jmp    84857ec <_ZN19CDungeonDataManager16InsertDungeonKeyER10DungeonKey+0x140>
 84857ce:	89 d3                	mov    %edx,%ebx
 84857d0:	89 c6                	mov    %eax,%esi
 84857d2:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 84857d8:	89 04 24             	mov    %eax,(%esp)
 84857db:	e8 5c 15 00 00       	call   8486d3c <_ZN12CDungeonNodeD1Ev>
 84857e0:	89 f0                	mov    %esi,%eax
 84857e2:	89 da                	mov    %ebx,%edx
 84857e4:	89 04 24             	mov    %eax,(%esp)
 84857e7:	e8 64 df 65 00       	call   8ae3750 <_Unwind_Resume>
 84857ec:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 84857f2:	89 04 24             	mov    %eax,(%esp)
 84857f5:	e8 42 15 00 00       	call   8486d3c <_ZN12CDungeonNodeD1Ev>
 84857fa:	b8 01 00 00 00       	mov    $0x1,%eax
 84857ff:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8485802:	83 c4 00             	add    $0x0,%esp
 8485805:	5b                   	pop    %ebx
 8485806:	5e                   	pop    %esi
 8485807:	5d                   	pop    %ebp
 8485808:	c3                   	ret
 8485809:	90                   	nop

```

```c
// CDungeonDataManager::InsertDungeonKey @ 0x84856ac

/* CDungeonDataManager::InsertDungeonKey(DungeonKey&) */

bool __thiscall CDungeonDataManager::InsertDungeonKey(CDungeonDataManager *this,DungeonKey *param_1)

{
  char cVar1;
  DungeonKey local_1e4 [4];
  map<DungeonKey,CDungeonNode,std::less<DungeonKey>,std::allocator<std::pair<DungeonKey_const,CDungeonNode>>>
  local_1e0 [4];
  pair local_1dc [8];
  pair<DungeonKey_const,CDungeonNode> local_1d4 [156];
  DungeonKey local_138 [156];
  CDungeonNode local_9c [144];
  
  std::
  map<DungeonKey,CDungeonNode,std::less<DungeonKey>,std::allocator<std::pair<DungeonKey_const,CDungeonNode>>>
  ::find(local_1e4);
  std::
  map<DungeonKey,CDungeonNode,std::less<DungeonKey>,std::allocator<std::pair<DungeonKey_const,CDungeonNode>>>
  ::end(local_1e0);
  cVar1 = std::_Rb_tree_iterator<std::pair<DungeonKey_const,CDungeonNode>>::operator!=
                    ((_Rb_tree_iterator<std::pair<DungeonKey_const,CDungeonNode>> *)local_1e4,
                     (_Rb_tree_iterator *)local_1e0);
  if (cVar1 == '\0') {
    CDungeonNode::CDungeonNode(local_9c);
                    /* try { // try from 0848573c to 08485740 has its CatchHandler @ 084857ce */
    std::make_pair<DungeonKey&,CDungeonNode>(local_138,(CDungeonNode *)param_1);
                    /* try { // try from 08485757 to 0848575b has its CatchHandler @ 084857a6 */
    std::pair<DungeonKey_const,CDungeonNode>::pair<DungeonKey,CDungeonNode>(local_1d4,local_138);
                    /* try { // try from 08485776 to 0848577a has its CatchHandler @ 0848578e */
    std::
    map<DungeonKey,CDungeonNode,std::less<DungeonKey>,std::allocator<std::pair<DungeonKey_const,CDungeonNode>>>
    ::insert(local_1dc);
                    /* try { // try from 08485787 to 0848578b has its CatchHandler @ 084857a6 */
    std::pair<DungeonKey_const,CDungeonNode>::~pair(local_1d4);
                    /* try { // try from 084857c7 to 084857cb has its CatchHandler @ 084857ce */
    std::pair<DungeonKey,CDungeonNode>::~pair((pair<DungeonKey,CDungeonNode> *)local_138);
    CDungeonNode::~CDungeonNode(local_9c);
  }
  return cVar1 == '\0';
}

```

---

## InsertMonsterKey

```asm
// === 0848580a CDungeonDataManager::InsertMonsterKey  [0x0848580a-0x8485899] ===
 848580a:	55                   	push   %ebp
 848580b:	89 e5                	mov    %esp,%ebp
 848580d:	83 ec 28             	sub    $0x28,%esp
 8485810:	8b 55 08             	mov    0x8(%ebp),%edx
 8485813:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8485816:	89 54 24 04          	mov    %edx,0x4(%esp)
 848581a:	89 04 24             	mov    %eax,(%esp)
 848581d:	e8 e4 23 00 00       	call   8487c06 <_ZNSt3mapI10DungeonKey12CDungeonNodeSt4lessIS0_ESaISt4pairIKS0_S1_EEE5beginEv>
 8485822:	83 ec 04             	sub    $0x4,%esp
 8485825:	eb 40                	jmp    8485867 <_ZN19CDungeonDataManager16InsertMonsterKeyEi+0x5d>
 8485827:	8d 45 e8             	lea    -0x18(%ebp),%eax
 848582a:	89 04 24             	mov    %eax,(%esp)
 848582d:	e8 38 24 00 00       	call   8487c6a <_ZNKSt17_Rb_tree_iteratorISt4pairIK10DungeonKey12CDungeonNodeEEptEv>
 8485832:	83 c0 0c             	add    $0xc,%eax
 8485835:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8485838:	8b 45 0c             	mov    0xc(%ebp),%eax
 848583b:	89 44 24 04          	mov    %eax,0x4(%esp)
 848583f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8485842:	89 04 24             	mov    %eax,(%esp)
 8485845:	e8 94 fa ff ff       	call   84852de <_ZN12CDungeonNode16InsertMonsterKeyEi>
 848584a:	8d 45 f0             	lea    -0x10(%ebp),%eax
 848584d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8485854:	00 
 8485855:	8d 55 e8             	lea    -0x18(%ebp),%edx
 8485858:	89 54 24 04          	mov    %edx,0x4(%esp)
 848585c:	89 04 24             	mov    %eax,(%esp)
 848585f:	e8 c8 23 00 00       	call   8487c2c <_ZNSt17_Rb_tree_iteratorISt4pairIK10DungeonKey12CDungeonNodeEEppEi>
 8485864:	83 ec 04             	sub    $0x4,%esp
 8485867:	8b 55 08             	mov    0x8(%ebp),%edx
 848586a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 848586d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8485871:	89 04 24             	mov    %eax,(%esp)
 8485874:	e8 39 21 00 00       	call   84879b2 <_ZNSt3mapI10DungeonKey12CDungeonNodeSt4lessIS0_ESaISt4pairIKS0_S1_EEE3endEv>
 8485879:	83 ec 04             	sub    $0x4,%esp
 848587c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 848587f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8485883:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8485886:	89 04 24             	mov    %eax,(%esp)
 8485889:	e8 4a 21 00 00       	call   84879d8 <_ZNKSt17_Rb_tree_iteratorISt4pairIK10DungeonKey12CDungeonNodeEEneERKS5_>
 848588e:	84 c0                	test   %al,%al
 8485890:	75 95                	jne    8485827 <_ZN19CDungeonDataManager16InsertMonsterKeyEi+0x1d>
 8485892:	b8 01 00 00 00       	mov    $0x1,%eax
 8485897:	c9                   	leave
 8485898:	c3                   	ret
 8485899:	90                   	nop

```

```c
// CDungeonDataManager::InsertMonsterKey @ 0x848580a

/* CDungeonDataManager::InsertMonsterKey(int) */

undefined4 CDungeonDataManager::InsertMonsterKey(int param_1)

{
  char cVar1;
  map<DungeonKey,CDungeonNode,std::less<DungeonKey>,std::allocator<std::pair<DungeonKey_const,CDungeonNode>>>
  local_1c [4];
  map<DungeonKey,CDungeonNode,std::less<DungeonKey>,std::allocator<std::pair<DungeonKey_const,CDungeonNode>>>
  local_18 [4];
  _Rb_tree_iterator<std::pair<DungeonKey_const,CDungeonNode>> local_14 [4];
  int local_10;
  
  std::
  map<DungeonKey,CDungeonNode,std::less<DungeonKey>,std::allocator<std::pair<DungeonKey_const,CDungeonNode>>>
  ::begin(local_1c);
  while( true ) {
    std::
    map<DungeonKey,CDungeonNode,std::less<DungeonKey>,std::allocator<std::pair<DungeonKey_const,CDungeonNode>>>
    ::end(local_18);
    cVar1 = std::_Rb_tree_iterator<std::pair<DungeonKey_const,CDungeonNode>>::operator!=
                      ((_Rb_tree_iterator<std::pair<DungeonKey_const,CDungeonNode>> *)local_1c,
                       (_Rb_tree_iterator *)local_18);
    if (cVar1 == '\0') break;
    local_10 = std::_Rb_tree_iterator<std::pair<DungeonKey_const,CDungeonNode>>::operator->
                         ((_Rb_tree_iterator<std::pair<DungeonKey_const,CDungeonNode>> *)local_1c);
    local_10 = local_10 + 0xc;
    CDungeonNode::InsertMonsterKey(local_10);
    std::_Rb_tree_iterator<std::pair<DungeonKey_const,CDungeonNode>>::operator++
              (local_14,(int)local_1c);
  }
  return 1;
}

```

---

## InsertSkillKey

```asm
// === 0848589a CDungeonDataManager::InsertSkillKey  [0x0848589a-0x8485955] ===
 848589a:	55                   	push   %ebp
 848589b:	89 e5                	mov    %esp,%ebp
 848589d:	83 ec 48             	sub    $0x48,%esp
 84858a0:	8b 55 08             	mov    0x8(%ebp),%edx
 84858a3:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84858a6:	89 54 24 04          	mov    %edx,0x4(%esp)
 84858aa:	89 04 24             	mov    %eax,(%esp)
 84858ad:	e8 54 23 00 00       	call   8487c06 <_ZNSt3mapI10DungeonKey12CDungeonNodeSt4lessIS0_ESaISt4pairIKS0_S1_EEE5beginEv>
 84858b2:	83 ec 04             	sub    $0x4,%esp
 84858b5:	eb 68                	jmp    848591f <_ZN19CDungeonDataManager14InsertSkillKeyEii+0x85>
 84858b7:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84858ba:	89 04 24             	mov    %eax,(%esp)
 84858bd:	e8 a8 23 00 00       	call   8487c6a <_ZNKSt17_Rb_tree_iteratorISt4pairIK10DungeonKey12CDungeonNodeEEptEv>
 84858c2:	83 c0 0c             	add    $0xc,%eax
 84858c5:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84858c8:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84858cb:	89 04 24             	mov    %eax,(%esp)
 84858ce:	e8 97 23 00 00       	call   8487c6a <_ZNKSt17_Rb_tree_iteratorISt4pairIK10DungeonKey12CDungeonNodeEEptEv>
 84858d3:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84858d6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84858d9:	8b 50 04             	mov    0x4(%eax),%edx
 84858dc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84858df:	8b 00                	mov    (%eax),%eax
 84858e1:	89 54 24 10          	mov    %edx,0x10(%esp)
 84858e5:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84858e9:	8b 45 10             	mov    0x10(%ebp),%eax
 84858ec:	89 44 24 08          	mov    %eax,0x8(%esp)
 84858f0:	8b 45 0c             	mov    0xc(%ebp),%eax
 84858f3:	89 44 24 04          	mov    %eax,0x4(%esp)
 84858f7:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84858fa:	89 04 24             	mov    %eax,(%esp)
 84858fd:	e8 02 fb ff ff       	call   8485404 <_ZN12CDungeonNode14InsertSkillKeyEiiii>
 8485902:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8485905:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 848590c:	00 
 848590d:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 8485910:	89 54 24 04          	mov    %edx,0x4(%esp)
 8485914:	89 04 24             	mov    %eax,(%esp)
 8485917:	e8 10 23 00 00       	call   8487c2c <_ZNSt17_Rb_tree_iteratorISt4pairIK10DungeonKey12CDungeonNodeEEppEi>
 848591c:	83 ec 04             	sub    $0x4,%esp
 848591f:	8b 55 08             	mov    0x8(%ebp),%edx
 8485922:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8485925:	89 54 24 04          	mov    %edx,0x4(%esp)
 8485929:	89 04 24             	mov    %eax,(%esp)
 848592c:	e8 81 20 00 00       	call   84879b2 <_ZNSt3mapI10DungeonKey12CDungeonNodeSt4lessIS0_ESaISt4pairIKS0_S1_EEE3endEv>
 8485931:	83 ec 04             	sub    $0x4,%esp
 8485934:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8485937:	89 44 24 04          	mov    %eax,0x4(%esp)
 848593b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 848593e:	89 04 24             	mov    %eax,(%esp)
 8485941:	e8 92 20 00 00       	call   84879d8 <_ZNKSt17_Rb_tree_iteratorISt4pairIK10DungeonKey12CDungeonNodeEEneERKS5_>
 8485946:	84 c0                	test   %al,%al
 8485948:	0f 85 69 ff ff ff    	jne    84858b7 <_ZN19CDungeonDataManager14InsertSkillKeyEii+0x1d>
 848594e:	b8 01 00 00 00       	mov    $0x1,%eax
 8485953:	c9                   	leave
 8485954:	c3                   	ret
 8485955:	90                   	nop

```

```c
// CDungeonDataManager::InsertSkillKey @ 0x848589a

/* CDungeonDataManager::InsertSkillKey(int, int) */

undefined4 __thiscall
CDungeonDataManager::InsertSkillKey(CDungeonDataManager *this,int param_1,int param_2)

{
  char cVar1;
  map<DungeonKey,CDungeonNode,std::less<DungeonKey>,std::allocator<std::pair<DungeonKey_const,CDungeonNode>>>
  local_20 [4];
  map<DungeonKey,CDungeonNode,std::less<DungeonKey>,std::allocator<std::pair<DungeonKey_const,CDungeonNode>>>
  local_1c [4];
  _Rb_tree_iterator<std::pair<DungeonKey_const,CDungeonNode>> local_18 [4];
  int local_14;
  int *local_10;
  
  std::
  map<DungeonKey,CDungeonNode,std::less<DungeonKey>,std::allocator<std::pair<DungeonKey_const,CDungeonNode>>>
  ::begin(local_20);
  while( true ) {
    std::
    map<DungeonKey,CDungeonNode,std::less<DungeonKey>,std::allocator<std::pair<DungeonKey_const,CDungeonNode>>>
    ::end(local_1c);
    cVar1 = std::_Rb_tree_iterator<std::pair<DungeonKey_const,CDungeonNode>>::operator!=
                      ((_Rb_tree_iterator<std::pair<DungeonKey_const,CDungeonNode>> *)local_20,
                       (_Rb_tree_iterator *)local_1c);
    if (cVar1 == '\0') break;
    local_14 = std::_Rb_tree_iterator<std::pair<DungeonKey_const,CDungeonNode>>::operator->
                         ((_Rb_tree_iterator<std::pair<DungeonKey_const,CDungeonNode>> *)local_20);
    local_14 = local_14 + 0xc;
    local_10 = (int *)std::_Rb_tree_iterator<std::pair<DungeonKey_const,CDungeonNode>>::operator->
                                ((_Rb_tree_iterator<std::pair<DungeonKey_const,CDungeonNode>> *)
                                 local_20);
    CDungeonNode::InsertSkillKey(local_14,param_1,param_2,*local_10);
    std::_Rb_tree_iterator<std::pair<DungeonKey_const,CDungeonNode>>::operator++
              (local_18,(int)local_20);
  }
  return 1;
}

```

---

## UpdateCharacter

```asm
// === 08485956 CDungeonDataManager::UpdateCharacter  [0x08485956-0x84859d7] ===
 8485956:	55                   	push   %ebp
 8485957:	89 e5                	mov    %esp,%ebp
 8485959:	83 ec 28             	sub    $0x28,%esp
 848595c:	8b 45 0c             	mov    0xc(%ebp),%eax
 848595f:	8d 48 04             	lea    0x4(%eax),%ecx
 8485962:	8b 55 08             	mov    0x8(%ebp),%edx
 8485965:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8485968:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 848596c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8485970:	89 04 24             	mov    %eax,(%esp)
 8485973:	e8 0e 20 00 00       	call   8487986 <_ZNSt3mapI10DungeonKey12CDungeonNodeSt4lessIS0_ESaISt4pairIKS0_S1_EEE4findERS5_>
 8485978:	83 ec 04             	sub    $0x4,%esp
 848597b:	8b 55 08             	mov    0x8(%ebp),%edx
 848597e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8485981:	89 54 24 04          	mov    %edx,0x4(%esp)
 8485985:	89 04 24             	mov    %eax,(%esp)
 8485988:	e8 25 20 00 00       	call   84879b2 <_ZNSt3mapI10DungeonKey12CDungeonNodeSt4lessIS0_ESaISt4pairIKS0_S1_EEE3endEv>
 848598d:	83 ec 04             	sub    $0x4,%esp
 8485990:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8485993:	89 44 24 04          	mov    %eax,0x4(%esp)
 8485997:	8d 45 ec             	lea    -0x14(%ebp),%eax
 848599a:	89 04 24             	mov    %eax,(%esp)
 848599d:	e8 d6 22 00 00       	call   8487c78 <_ZNKSt17_Rb_tree_iteratorISt4pairIK10DungeonKey12CDungeonNodeEEeqERKS5_>
 84859a2:	84 c0                	test   %al,%al
 84859a4:	74 07                	je     84859ad <_ZN19CDungeonDataManager15UpdateCharacterEP26SIG_DUNGEON_DATA_STATISTIC+0x57>
 84859a6:	b8 00 00 00 00       	mov    $0x0,%eax
 84859ab:	eb 28                	jmp    84859d5 <_ZN19CDungeonDataManager15UpdateCharacterEP26SIG_DUNGEON_DATA_STATISTIC+0x7f>
 84859ad:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84859b0:	89 04 24             	mov    %eax,(%esp)
 84859b3:	e8 b2 22 00 00       	call   8487c6a <_ZNKSt17_Rb_tree_iteratorISt4pairIK10DungeonKey12CDungeonNodeEEptEv>
 84859b8:	83 c0 0c             	add    $0xc,%eax
 84859bb:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84859be:	8b 45 0c             	mov    0xc(%ebp),%eax
 84859c1:	89 44 24 04          	mov    %eax,0x4(%esp)
 84859c5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84859c8:	89 04 24             	mov    %eax,(%esp)
 84859cb:	e8 94 fb ff ff       	call   8485564 <_ZN12CDungeonNode15UpdateCharacterEP26SIG_DUNGEON_DATA_STATISTIC>
 84859d0:	b8 01 00 00 00       	mov    $0x1,%eax
 84859d5:	c9                   	leave
 84859d6:	c3                   	ret
 84859d7:	90                   	nop

```

```c
// CDungeonDataManager::UpdateCharacter @ 0x8485956

/* CDungeonDataManager::UpdateCharacter(SIG_DUNGEON_DATA_STATISTIC*) */

bool __thiscall
CDungeonDataManager::UpdateCharacter(CDungeonDataManager *this,SIG_DUNGEON_DATA_STATISTIC *param_1)

{
  char cVar1;
  int iVar2;
  DungeonKey local_18 [4];
  map<DungeonKey,CDungeonNode,std::less<DungeonKey>,std::allocator<std::pair<DungeonKey_const,CDungeonNode>>>
  local_14 [4];
  CDungeonNode *local_10;
  
  std::
  map<DungeonKey,CDungeonNode,std::less<DungeonKey>,std::allocator<std::pair<DungeonKey_const,CDungeonNode>>>
  ::find(local_18);
  std::
  map<DungeonKey,CDungeonNode,std::less<DungeonKey>,std::allocator<std::pair<DungeonKey_const,CDungeonNode>>>
  ::end(local_14);
  cVar1 = std::_Rb_tree_iterator<std::pair<DungeonKey_const,CDungeonNode>>::operator==
                    ((_Rb_tree_iterator<std::pair<DungeonKey_const,CDungeonNode>> *)local_18,
                     (_Rb_tree_iterator *)local_14);
  if (cVar1 == '\0') {
    iVar2 = std::_Rb_tree_iterator<std::pair<DungeonKey_const,CDungeonNode>>::operator->
                      ((_Rb_tree_iterator<std::pair<DungeonKey_const,CDungeonNode>> *)local_18);
    local_10 = (CDungeonNode *)(iVar2 + 0xc);
    CDungeonNode::UpdateCharacter(local_10,param_1);
  }
  return cVar1 == '\0';
}

```

---

## UpdateDungeonDataStatistic

```asm
// === 08485adc CDungeonDataManager::UpdateDungeonDataStatistic  [0x08485adc-0x8485b78] ===
 8485adc:	55                   	push   %ebp
 8485add:	89 e5                	mov    %esp,%ebp
 8485adf:	83 ec 38             	sub    $0x38,%esp
 8485ae2:	8b 55 08             	mov    0x8(%ebp),%edx
 8485ae5:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8485ae8:	89 54 24 04          	mov    %edx,0x4(%esp)
 8485aec:	89 04 24             	mov    %eax,(%esp)
 8485aef:	e8 12 21 00 00       	call   8487c06 <_ZNSt3mapI10DungeonKey12CDungeonNodeSt4lessIS0_ESaISt4pairIKS0_S1_EEE5beginEv>
 8485af4:	83 ec 04             	sub    $0x4,%esp
 8485af7:	eb 4e                	jmp    8485b47 <_ZN19CDungeonDataManager26UpdateDungeonDataStatisticEv+0x6b>
 8485af9:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8485afc:	89 04 24             	mov    %eax,(%esp)
 8485aff:	e8 66 21 00 00       	call   8487c6a <_ZNKSt17_Rb_tree_iteratorISt4pairIK10DungeonKey12CDungeonNodeEEptEv>
 8485b04:	83 c0 0c             	add    $0xc,%eax
 8485b07:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8485b0a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8485b0d:	89 04 24             	mov    %eax,(%esp)
 8485b10:	e8 55 21 00 00       	call   8487c6a <_ZNKSt17_Rb_tree_iteratorISt4pairIK10DungeonKey12CDungeonNodeEEptEv>
 8485b15:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8485b18:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8485b1b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8485b1f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8485b22:	89 04 24             	mov    %eax,(%esp)
 8485b25:	e8 7a 00 00 00       	call   8485ba4 <_ZN12CDungeonNode8InsertDBERK10DungeonKey>
 8485b2a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8485b2d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8485b34:	00 
 8485b35:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 8485b38:	89 54 24 04          	mov    %edx,0x4(%esp)
 8485b3c:	89 04 24             	mov    %eax,(%esp)
 8485b3f:	e8 e8 20 00 00       	call   8487c2c <_ZNSt17_Rb_tree_iteratorISt4pairIK10DungeonKey12CDungeonNodeEEppEi>
 8485b44:	83 ec 04             	sub    $0x4,%esp
 8485b47:	8b 55 08             	mov    0x8(%ebp),%edx
 8485b4a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8485b4d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8485b51:	89 04 24             	mov    %eax,(%esp)
 8485b54:	e8 59 1e 00 00       	call   84879b2 <_ZNSt3mapI10DungeonKey12CDungeonNodeSt4lessIS0_ESaISt4pairIKS0_S1_EEE3endEv>
 8485b59:	83 ec 04             	sub    $0x4,%esp
 8485b5c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8485b5f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8485b63:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8485b66:	89 04 24             	mov    %eax,(%esp)
 8485b69:	e8 6a 1e 00 00       	call   84879d8 <_ZNKSt17_Rb_tree_iteratorISt4pairIK10DungeonKey12CDungeonNodeEEneERKS5_>
 8485b6e:	84 c0                	test   %al,%al
 8485b70:	75 87                	jne    8485af9 <_ZN19CDungeonDataManager26UpdateDungeonDataStatisticEv+0x1d>
 8485b72:	b8 01 00 00 00       	mov    $0x1,%eax
 8485b77:	c9                   	leave
 8485b78:	c3                   	ret

```

```c
// CDungeonDataManager::UpdateDungeonDataStatistic @ 0x8485adc

/* CDungeonDataManager::UpdateDungeonDataStatistic() */

undefined4 CDungeonDataManager::UpdateDungeonDataStatistic(void)

{
  char cVar1;
  int iVar2;
  map<DungeonKey,CDungeonNode,std::less<DungeonKey>,std::allocator<std::pair<DungeonKey_const,CDungeonNode>>>
  local_20 [4];
  map<DungeonKey,CDungeonNode,std::less<DungeonKey>,std::allocator<std::pair<DungeonKey_const,CDungeonNode>>>
  local_1c [4];
  _Rb_tree_iterator<std::pair<DungeonKey_const,CDungeonNode>> local_18 [4];
  CDungeonNode *local_14;
  DungeonKey *local_10;
  
  std::
  map<DungeonKey,CDungeonNode,std::less<DungeonKey>,std::allocator<std::pair<DungeonKey_const,CDungeonNode>>>
  ::begin(local_20);
  while( true ) {
    std::
    map<DungeonKey,CDungeonNode,std::less<DungeonKey>,std::allocator<std::pair<DungeonKey_const,CDungeonNode>>>
    ::end(local_1c);
    cVar1 = std::_Rb_tree_iterator<std::pair<DungeonKey_const,CDungeonNode>>::operator!=
                      ((_Rb_tree_iterator<std::pair<DungeonKey_const,CDungeonNode>> *)local_20,
                       (_Rb_tree_iterator *)local_1c);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_iterator<std::pair<DungeonKey_const,CDungeonNode>>::operator->
                      ((_Rb_tree_iterator<std::pair<DungeonKey_const,CDungeonNode>> *)local_20);
    local_14 = (CDungeonNode *)(iVar2 + 0xc);
    local_10 = (DungeonKey *)
               std::_Rb_tree_iterator<std::pair<DungeonKey_const,CDungeonNode>>::operator->
                         ((_Rb_tree_iterator<std::pair<DungeonKey_const,CDungeonNode>> *)local_20);
    CDungeonNode::InsertDB(local_14,local_10);
    std::_Rb_tree_iterator<std::pair<DungeonKey_const,CDungeonNode>>::operator++
              (local_18,(int)local_20);
  }
  return 1;
}

```

---

## UpdateMonster

```asm
// === 08485a5a CDungeonDataManager::UpdateMonster  [0x08485a5a-0x8485adb] ===
 8485a5a:	55                   	push   %ebp
 8485a5b:	89 e5                	mov    %esp,%ebp
 8485a5d:	83 ec 28             	sub    $0x28,%esp
 8485a60:	8b 45 0c             	mov    0xc(%ebp),%eax
 8485a63:	8d 48 04             	lea    0x4(%eax),%ecx
 8485a66:	8b 55 08             	mov    0x8(%ebp),%edx
 8485a69:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8485a6c:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8485a70:	89 54 24 04          	mov    %edx,0x4(%esp)
 8485a74:	89 04 24             	mov    %eax,(%esp)
 8485a77:	e8 0a 1f 00 00       	call   8487986 <_ZNSt3mapI10DungeonKey12CDungeonNodeSt4lessIS0_ESaISt4pairIKS0_S1_EEE4findERS5_>
 8485a7c:	83 ec 04             	sub    $0x4,%esp
 8485a7f:	8b 55 08             	mov    0x8(%ebp),%edx
 8485a82:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8485a85:	89 54 24 04          	mov    %edx,0x4(%esp)
 8485a89:	89 04 24             	mov    %eax,(%esp)
 8485a8c:	e8 21 1f 00 00       	call   84879b2 <_ZNSt3mapI10DungeonKey12CDungeonNodeSt4lessIS0_ESaISt4pairIKS0_S1_EEE3endEv>
 8485a91:	83 ec 04             	sub    $0x4,%esp
 8485a94:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8485a97:	89 44 24 04          	mov    %eax,0x4(%esp)
 8485a9b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8485a9e:	89 04 24             	mov    %eax,(%esp)
 8485aa1:	e8 d2 21 00 00       	call   8487c78 <_ZNKSt17_Rb_tree_iteratorISt4pairIK10DungeonKey12CDungeonNodeEEeqERKS5_>
 8485aa6:	84 c0                	test   %al,%al
 8485aa8:	74 07                	je     8485ab1 <_ZN19CDungeonDataManager13UpdateMonsterEP26SIG_DUNGEON_DATA_STATISTIC+0x57>
 8485aaa:	b8 00 00 00 00       	mov    $0x0,%eax
 8485aaf:	eb 28                	jmp    8485ad9 <_ZN19CDungeonDataManager13UpdateMonsterEP26SIG_DUNGEON_DATA_STATISTIC+0x7f>
 8485ab1:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8485ab4:	89 04 24             	mov    %eax,(%esp)
 8485ab7:	e8 ae 21 00 00       	call   8487c6a <_ZNKSt17_Rb_tree_iteratorISt4pairIK10DungeonKey12CDungeonNodeEEptEv>
 8485abc:	83 c0 0c             	add    $0xc,%eax
 8485abf:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8485ac2:	8b 45 0c             	mov    0xc(%ebp),%eax
 8485ac5:	89 44 24 04          	mov    %eax,0x4(%esp)
 8485ac9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8485acc:	89 04 24             	mov    %eax,(%esp)
 8485acf:	e8 54 fb ff ff       	call   8485628 <_ZN12CDungeonNode13UpdateMonsterEP26SIG_DUNGEON_DATA_STATISTIC>
 8485ad4:	b8 01 00 00 00       	mov    $0x1,%eax
 8485ad9:	c9                   	leave
 8485ada:	c3                   	ret
 8485adb:	90                   	nop

```

```c
// CDungeonDataManager::UpdateMonster @ 0x8485a5a

/* CDungeonDataManager::UpdateMonster(SIG_DUNGEON_DATA_STATISTIC*) */

bool __thiscall
CDungeonDataManager::UpdateMonster(CDungeonDataManager *this,SIG_DUNGEON_DATA_STATISTIC *param_1)

{
  char cVar1;
  int iVar2;
  DungeonKey local_18 [4];
  map<DungeonKey,CDungeonNode,std::less<DungeonKey>,std::allocator<std::pair<DungeonKey_const,CDungeonNode>>>
  local_14 [4];
  CDungeonNode *local_10;
  
  std::
  map<DungeonKey,CDungeonNode,std::less<DungeonKey>,std::allocator<std::pair<DungeonKey_const,CDungeonNode>>>
  ::find(local_18);
  std::
  map<DungeonKey,CDungeonNode,std::less<DungeonKey>,std::allocator<std::pair<DungeonKey_const,CDungeonNode>>>
  ::end(local_14);
  cVar1 = std::_Rb_tree_iterator<std::pair<DungeonKey_const,CDungeonNode>>::operator==
                    ((_Rb_tree_iterator<std::pair<DungeonKey_const,CDungeonNode>> *)local_18,
                     (_Rb_tree_iterator *)local_14);
  if (cVar1 == '\0') {
    iVar2 = std::_Rb_tree_iterator<std::pair<DungeonKey_const,CDungeonNode>>::operator->
                      ((_Rb_tree_iterator<std::pair<DungeonKey_const,CDungeonNode>> *)local_18);
    local_10 = (CDungeonNode *)(iVar2 + 0xc);
    CDungeonNode::UpdateMonster(local_10,param_1);
  }
  return cVar1 == '\0';
}

```

---

## UpdateSkill

```asm
// === 084859d8 CDungeonDataManager::UpdateSkill  [0x084859d8-0x8485a59] ===
 84859d8:	55                   	push   %ebp
 84859d9:	89 e5                	mov    %esp,%ebp
 84859db:	83 ec 28             	sub    $0x28,%esp
 84859de:	8b 45 0c             	mov    0xc(%ebp),%eax
 84859e1:	8d 48 04             	lea    0x4(%eax),%ecx
 84859e4:	8b 55 08             	mov    0x8(%ebp),%edx
 84859e7:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84859ea:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 84859ee:	89 54 24 04          	mov    %edx,0x4(%esp)
 84859f2:	89 04 24             	mov    %eax,(%esp)
 84859f5:	e8 8c 1f 00 00       	call   8487986 <_ZNSt3mapI10DungeonKey12CDungeonNodeSt4lessIS0_ESaISt4pairIKS0_S1_EEE4findERS5_>
 84859fa:	83 ec 04             	sub    $0x4,%esp
 84859fd:	8b 55 08             	mov    0x8(%ebp),%edx
 8485a00:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8485a03:	89 54 24 04          	mov    %edx,0x4(%esp)
 8485a07:	89 04 24             	mov    %eax,(%esp)
 8485a0a:	e8 a3 1f 00 00       	call   84879b2 <_ZNSt3mapI10DungeonKey12CDungeonNodeSt4lessIS0_ESaISt4pairIKS0_S1_EEE3endEv>
 8485a0f:	83 ec 04             	sub    $0x4,%esp
 8485a12:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8485a15:	89 44 24 04          	mov    %eax,0x4(%esp)
 8485a19:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8485a1c:	89 04 24             	mov    %eax,(%esp)
 8485a1f:	e8 54 22 00 00       	call   8487c78 <_ZNKSt17_Rb_tree_iteratorISt4pairIK10DungeonKey12CDungeonNodeEEeqERKS5_>
 8485a24:	84 c0                	test   %al,%al
 8485a26:	74 07                	je     8485a2f <_ZN19CDungeonDataManager11UpdateSkillEP26SIG_DUNGEON_DATA_STATISTIC+0x57>
 8485a28:	b8 00 00 00 00       	mov    $0x0,%eax
 8485a2d:	eb 28                	jmp    8485a57 <_ZN19CDungeonDataManager11UpdateSkillEP26SIG_DUNGEON_DATA_STATISTIC+0x7f>
 8485a2f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8485a32:	89 04 24             	mov    %eax,(%esp)
 8485a35:	e8 30 22 00 00       	call   8487c6a <_ZNKSt17_Rb_tree_iteratorISt4pairIK10DungeonKey12CDungeonNodeEEptEv>
 8485a3a:	83 c0 0c             	add    $0xc,%eax
 8485a3d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8485a40:	8b 45 0c             	mov    0xc(%ebp),%eax
 8485a43:	89 44 24 04          	mov    %eax,0x4(%esp)
 8485a47:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8485a4a:	89 04 24             	mov    %eax,(%esp)
 8485a4d:	e8 48 fb ff ff       	call   848559a <_ZN12CDungeonNode11UpdateSkillEP26SIG_DUNGEON_DATA_STATISTIC>
 8485a52:	b8 01 00 00 00       	mov    $0x1,%eax
 8485a57:	c9                   	leave
 8485a58:	c3                   	ret
 8485a59:	90                   	nop

```

```c
// CDungeonDataManager::UpdateSkill @ 0x84859d8

/* CDungeonDataManager::UpdateSkill(SIG_DUNGEON_DATA_STATISTIC*) */

bool __thiscall
CDungeonDataManager::UpdateSkill(CDungeonDataManager *this,SIG_DUNGEON_DATA_STATISTIC *param_1)

{
  char cVar1;
  int iVar2;
  DungeonKey local_18 [4];
  map<DungeonKey,CDungeonNode,std::less<DungeonKey>,std::allocator<std::pair<DungeonKey_const,CDungeonNode>>>
  local_14 [4];
  CDungeonNode *local_10;
  
  std::
  map<DungeonKey,CDungeonNode,std::less<DungeonKey>,std::allocator<std::pair<DungeonKey_const,CDungeonNode>>>
  ::find(local_18);
  std::
  map<DungeonKey,CDungeonNode,std::less<DungeonKey>,std::allocator<std::pair<DungeonKey_const,CDungeonNode>>>
  ::end(local_14);
  cVar1 = std::_Rb_tree_iterator<std::pair<DungeonKey_const,CDungeonNode>>::operator==
                    ((_Rb_tree_iterator<std::pair<DungeonKey_const,CDungeonNode>> *)local_18,
                     (_Rb_tree_iterator *)local_14);
  if (cVar1 == '\0') {
    iVar2 = std::_Rb_tree_iterator<std::pair<DungeonKey_const,CDungeonNode>>::operator->
                      ((_Rb_tree_iterator<std::pair<DungeonKey_const,CDungeonNode>> *)local_18);
    local_10 = (CDungeonNode *)(iVar2 + 0xc);
    CDungeonNode::UpdateSkill(local_10,param_1);
  }
  return cVar1 == '\0';
}

```

