# CRewardUserList

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## delete_mark

```asm
// === 081bb7bc CRewardUserList::delete_mark  [0x081bb7bc-0x81bb825] ===
 81bb7bc:	55                   	push   %ebp
 81bb7bd:	89 e5                	mov    %esp,%ebp
 81bb7bf:	83 ec 28             	sub    $0x28,%esp
 81bb7c2:	8b 55 08             	mov    0x8(%ebp),%edx
 81bb7c5:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81bb7c8:	8d 4d 0c             	lea    0xc(%ebp),%ecx
 81bb7cb:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 81bb7cf:	89 54 24 04          	mov    %edx,0x4(%esp)
 81bb7d3:	89 04 24             	mov    %eax,(%esp)
 81bb7d6:	e8 f5 0b 00 00       	call   81bc3d0 <_ZNSt3mapIj14RewardUserDataSt4lessIjESaISt4pairIKjS0_EEE4findERS4_>
 81bb7db:	83 ec 04             	sub    $0x4,%esp
 81bb7de:	8b 55 08             	mov    0x8(%ebp),%edx
 81bb7e1:	8d 45 f4             	lea    -0xc(%ebp),%eax
 81bb7e4:	89 54 24 04          	mov    %edx,0x4(%esp)
 81bb7e8:	89 04 24             	mov    %eax,(%esp)
 81bb7eb:	e8 1c 0c 00 00       	call   81bc40c <_ZNSt3mapIj14RewardUserDataSt4lessIjESaISt4pairIKjS0_EEE3endEv>
 81bb7f0:	83 ec 04             	sub    $0x4,%esp
 81bb7f3:	8d 45 f4             	lea    -0xc(%ebp),%eax
 81bb7f6:	89 44 24 04          	mov    %eax,0x4(%esp)
 81bb7fa:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81bb7fd:	89 04 24             	mov    %eax,(%esp)
 81bb800:	e8 41 0c 00 00       	call   81bc446 <_ZNKSt17_Rb_tree_iteratorISt4pairIKj14RewardUserDataEEneERKS4_>
 81bb805:	84 c0                	test   %al,%al
 81bb807:	74 16                	je     81bb81f <_ZN15CRewardUserList11delete_markEj+0x63>
 81bb809:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81bb80c:	89 04 24             	mov    %eax,(%esp)
 81bb80f:	e8 46 0c 00 00       	call   81bc45a <_ZNKSt17_Rb_tree_iteratorISt4pairIKj14RewardUserDataEEptEv>
 81bb814:	c6 40 0c 01          	movb   $0x1,0xc(%eax)
 81bb818:	b8 01 00 00 00       	mov    $0x1,%eax
 81bb81d:	eb 05                	jmp    81bb824 <_ZN15CRewardUserList11delete_markEj+0x68>
 81bb81f:	b8 00 00 00 00       	mov    $0x0,%eax
 81bb824:	c9                   	leave
 81bb825:	c3                   	ret

```

```c
// CRewardUserList::delete_mark @ 0x81bb7bc

/* CRewardUserList::delete_mark(unsigned int) */

bool CRewardUserList::delete_mark(uint param_1)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator<std::pair<unsigned_int_const,RewardUserData>> local_14 [4];
  map<unsigned_int,RewardUserData,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,RewardUserData>>>
  local_10 [12];
  
  std::
  map<unsigned_int,RewardUserData,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,RewardUserData>>>
  ::find((uint *)local_14);
  std::
  map<unsigned_int,RewardUserData,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,RewardUserData>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,RewardUserData>>::operator!=
                    (local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 != '\0') {
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,RewardUserData>>::operator->
                      (local_14);
    *(undefined1 *)(iVar2 + 0xc) = 1;
  }
  return cVar1 != '\0';
}

```

---

## insert

```asm
// === 081bb690 CRewardUserList::insert  [0x081bb690-0x81bb73b] ===
 81bb690:	55                   	push   %ebp
 81bb691:	89 e5                	mov    %esp,%ebp
 81bb693:	83 ec 58             	sub    $0x58,%esp
 81bb696:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bb699:	89 44 24 04          	mov    %eax,0x4(%esp)
 81bb69d:	8b 45 08             	mov    0x8(%ebp),%eax
 81bb6a0:	89 04 24             	mov    %eax,(%esp)
 81bb6a3:	e8 94 00 00 00       	call   81bb73c <_ZN15CRewardUserList8is_existEj>
 81bb6a8:	83 f0 01             	xor    $0x1,%eax
 81bb6ab:	84 c0                	test   %al,%al
 81bb6ad:	0f 84 81 00 00 00    	je     81bb734 <_ZN15CRewardUserList6insertEjii+0xa4>
 81bb6b3:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 81bb6b6:	89 04 24             	mov    %eax,(%esp)
 81bb6b9:	e8 c4 08 00 00       	call   81bbf82 <_ZN14RewardUserDataC1Ev>
 81bb6be:	8b 45 10             	mov    0x10(%ebp),%eax
 81bb6c1:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 81bb6c4:	8b 45 14             	mov    0x14(%ebp),%eax
 81bb6c7:	89 45 c8             	mov    %eax,-0x38(%ebp)
 81bb6ca:	c6 45 cc 00          	movb   $0x0,-0x34(%ebp)
 81bb6ce:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81bb6d1:	8d 55 c4             	lea    -0x3c(%ebp),%edx
 81bb6d4:	89 54 24 08          	mov    %edx,0x8(%esp)
 81bb6d8:	8d 55 0c             	lea    0xc(%ebp),%edx
 81bb6db:	89 54 24 04          	mov    %edx,0x4(%esp)
 81bb6df:	89 04 24             	mov    %eax,(%esp)
 81bb6e2:	e8 e7 0b 00 00       	call   81bc2ce <_ZSt9make_pairIRjR14RewardUserDataESt4pairINSt17__decay_and_stripIT_E6__typeENS4_IT0_E6__typeEEOS5_OS8_>
 81bb6e7:	83 ec 04             	sub    $0x4,%esp
 81bb6ea:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81bb6ed:	89 44 24 04          	mov    %eax,0x4(%esp)
 81bb6f1:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81bb6f4:	89 04 24             	mov    %eax,(%esp)
 81bb6f7:	e8 10 0c 00 00       	call   81bc30c <_ZNSt4pairIKj14RewardUserDataEC1IjS1_EEOS_IT_T0_E>
 81bb6fc:	8b 55 08             	mov    0x8(%ebp),%edx
 81bb6ff:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81bb702:	8d 4d d8             	lea    -0x28(%ebp),%ecx
 81bb705:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 81bb709:	89 54 24 04          	mov    %edx,0x4(%esp)
 81bb70d:	89 04 24             	mov    %eax,(%esp)
 81bb710:	e8 35 0c 00 00       	call   81bc34a <_ZNSt3mapIj14RewardUserDataSt4lessIjESaISt4pairIKjS0_EEE6insertERKS5_>
 81bb715:	83 ec 04             	sub    $0x4,%esp
 81bb718:	8b 45 08             	mov    0x8(%ebp),%eax
 81bb71b:	8d 50 18             	lea    0x18(%eax),%edx
 81bb71e:	8d 45 0c             	lea    0xc(%ebp),%eax
 81bb721:	89 44 24 04          	mov    %eax,0x4(%esp)
 81bb725:	89 14 24             	mov    %edx,(%esp)
 81bb728:	e8 49 0c 00 00       	call   81bc376 <_ZNSt5dequeIjSaIjEE9push_backERKj>
 81bb72d:	b8 01 00 00 00       	mov    $0x1,%eax
 81bb732:	eb 05                	jmp    81bb739 <_ZN15CRewardUserList6insertEjii+0xa9>
 81bb734:	b8 00 00 00 00       	mov    $0x0,%eax
 81bb739:	c9                   	leave
 81bb73a:	c3                   	ret
 81bb73b:	90                   	nop

```

```c
// CRewardUserList::insert @ 0x81bb690

/* CRewardUserList::insert(unsigned int, int, int) */

bool __thiscall CRewardUserList::insert(CRewardUserList *this,uint param_1,int param_2,int param_3)

{
  char cVar1;
  int local_40;
  int local_3c;
  undefined1 local_38;
  pair local_34 [8];
  pair<unsigned_int_const,RewardUserData> local_2c [16];
  uint local_1c [6];
  
  cVar1 = is_exist((uint)this);
  if (cVar1 != '\x01') {
    RewardUserData::RewardUserData((RewardUserData *)&local_40);
    local_40 = param_2;
    local_3c = param_3;
    local_38 = 0;
    std::make_pair<unsigned_int&,RewardUserData&>(local_1c,(RewardUserData *)&param_1);
    std::pair<unsigned_int_const,RewardUserData>::pair<unsigned_int,RewardUserData>
              (local_2c,(pair *)local_1c);
    std::
    map<unsigned_int,RewardUserData,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,RewardUserData>>>
    ::insert(local_34);
    std::deque<unsigned_int,std::allocator<unsigned_int>>::push_back
              ((deque<unsigned_int,std::allocator<unsigned_int>> *)(this + 0x18),&param_1);
  }
  return cVar1 != '\x01';
}

```

---

## is_exist

```asm
// === 081bb73c CRewardUserList::is_exist  [0x081bb73c-0x81bb7bb] ===
 81bb73c:	55                   	push   %ebp
 81bb73d:	89 e5                	mov    %esp,%ebp
 81bb73f:	83 ec 28             	sub    $0x28,%esp
 81bb742:	8b 55 08             	mov    0x8(%ebp),%edx
 81bb745:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81bb748:	8d 4d 0c             	lea    0xc(%ebp),%ecx
 81bb74b:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 81bb74f:	89 54 24 04          	mov    %edx,0x4(%esp)
 81bb753:	89 04 24             	mov    %eax,(%esp)
 81bb756:	e8 75 0c 00 00       	call   81bc3d0 <_ZNSt3mapIj14RewardUserDataSt4lessIjESaISt4pairIKjS0_EEE4findERS4_>
 81bb75b:	83 ec 04             	sub    $0x4,%esp
 81bb75e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81bb761:	89 44 24 04          	mov    %eax,0x4(%esp)
 81bb765:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81bb768:	89 04 24             	mov    %eax,(%esp)
 81bb76b:	e8 8c 0c 00 00       	call   81bc3fc <_ZNSt23_Rb_tree_const_iteratorISt4pairIKj14RewardUserDataEEC1ERKSt17_Rb_tree_iteratorIS3_E>
 81bb770:	8b 55 08             	mov    0x8(%ebp),%edx
 81bb773:	8d 45 f4             	lea    -0xc(%ebp),%eax
 81bb776:	89 54 24 04          	mov    %edx,0x4(%esp)
 81bb77a:	89 04 24             	mov    %eax,(%esp)
 81bb77d:	e8 8a 0c 00 00       	call   81bc40c <_ZNSt3mapIj14RewardUserDataSt4lessIjESaISt4pairIKjS0_EEE3endEv>
 81bb782:	83 ec 04             	sub    $0x4,%esp
 81bb785:	8d 45 f4             	lea    -0xc(%ebp),%eax
 81bb788:	89 44 24 04          	mov    %eax,0x4(%esp)
 81bb78c:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81bb78f:	89 04 24             	mov    %eax,(%esp)
 81bb792:	e8 65 0c 00 00       	call   81bc3fc <_ZNSt23_Rb_tree_const_iteratorISt4pairIKj14RewardUserDataEEC1ERKSt17_Rb_tree_iteratorIS3_E>
 81bb797:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81bb79a:	89 44 24 04          	mov    %eax,0x4(%esp)
 81bb79e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81bb7a1:	89 04 24             	mov    %eax,(%esp)
 81bb7a4:	e8 89 0c 00 00       	call   81bc432 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKj14RewardUserDataEEeqERKS4_>
 81bb7a9:	84 c0                	test   %al,%al
 81bb7ab:	74 07                	je     81bb7b4 <_ZN15CRewardUserList8is_existEj+0x78>
 81bb7ad:	b8 00 00 00 00       	mov    $0x0,%eax
 81bb7b2:	eb 05                	jmp    81bb7b9 <_ZN15CRewardUserList8is_existEj+0x7d>
 81bb7b4:	b8 01 00 00 00       	mov    $0x1,%eax
 81bb7b9:	c9                   	leave
 81bb7ba:	c3                   	ret
 81bb7bb:	90                   	nop

```

```c
// CRewardUserList::is_exist @ 0x81bb73c

/* CRewardUserList::is_exist(unsigned int) */

bool CRewardUserList::is_exist(uint param_1)

{
  char cVar1;
  _Rb_tree_const_iterator<std::pair<unsigned_int_const,RewardUserData>> local_1c [4];
  _Rb_tree_iterator local_18 [4];
  _Rb_tree_const_iterator<std::pair<unsigned_int_const,RewardUserData>> local_14 [4];
  map<unsigned_int,RewardUserData,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,RewardUserData>>>
  local_10 [12];
  
  std::
  map<unsigned_int,RewardUserData,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,RewardUserData>>>
  ::find((uint *)local_18);
  std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,RewardUserData>>::
  _Rb_tree_const_iterator(local_1c,local_18);
  std::
  map<unsigned_int,RewardUserData,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,RewardUserData>>>
  ::end(local_10);
  std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,RewardUserData>>::
  _Rb_tree_const_iterator(local_14,(_Rb_tree_iterator *)local_10);
  cVar1 = std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,RewardUserData>>::operator==
                    (local_1c,(_Rb_tree_const_iterator *)local_14);
  return cVar1 == '\0';
}

```

