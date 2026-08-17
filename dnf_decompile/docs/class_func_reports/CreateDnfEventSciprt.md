# CreateDnfEventSciprt

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 6

---

## CreateDnfEventSciprt

```asm
// === 08ac000c CreateDnfEventSciprt::CreateDnfEventSciprt  [0x08ac000c-0x8ac001f] ===
 8ac000c:	55                   	push   %ebp
 8ac000d:	89 e5                	mov    %esp,%ebp
 8ac000f:	83 ec 18             	sub    $0x18,%esp
 8ac0012:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac0015:	89 04 24             	mov    %eax,(%esp)
 8ac0018:	e8 4f 06 00 00       	call   8ac066c <_ZNSt3mapIiPSt6vectorIN20CreateDnfEventSciprt8ItemInfoESaIS2_EESt4lessIiESaISt4pairIKiS5_EEEC1Ev>
 8ac001d:	c9                   	leave
 8ac001e:	c3                   	ret
 8ac001f:	90                   	nop

```

```c
// CreateDnfEventSciprt::CreateDnfEventSciprt @ 0x8ac000c

/* CreateDnfEventSciprt::CreateDnfEventSciprt() */

void __thiscall CreateDnfEventSciprt::CreateDnfEventSciprt(CreateDnfEventSciprt *this)

{
  std::
  map<int,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*>>>
  ::map((map<int,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*>>>
         *)this);
  return;
}

```

---

## GetItemInfo

```asm
// === 08ac03a6 CreateDnfEventSciprt::GetItemInfo  [0x08ac03a6-0x8ac04a3] ===
 8ac03a6:	55                   	push   %ebp
 8ac03a7:	89 e5                	mov    %esp,%ebp
 8ac03a9:	53                   	push   %ebx
 8ac03aa:	83 ec 44             	sub    $0x44,%esp
 8ac03ad:	8b 55 08             	mov    0x8(%ebp),%edx
 8ac03b0:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8ac03b3:	8d 4d 10             	lea    0x10(%ebp),%ecx
 8ac03b6:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8ac03ba:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ac03be:	89 04 24             	mov    %eax,(%esp)
 8ac03c1:	e8 b4 03 00 00       	call   8ac077a <_ZNSt3mapIiPSt6vectorIN20CreateDnfEventSciprt8ItemInfoESaIS2_EESt4lessIiESaISt4pairIKiS5_EEE4findERS9_>
 8ac03c6:	83 ec 04             	sub    $0x4,%esp
 8ac03c9:	8b 55 08             	mov    0x8(%ebp),%edx
 8ac03cc:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8ac03cf:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ac03d3:	89 04 24             	mov    %eax,(%esp)
 8ac03d6:	e8 cb 03 00 00       	call   8ac07a6 <_ZNSt3mapIiPSt6vectorIN20CreateDnfEventSciprt8ItemInfoESaIS2_EESt4lessIiESaISt4pairIKiS5_EEE3endEv>
 8ac03db:	83 ec 04             	sub    $0x4,%esp
 8ac03de:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8ac03e1:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac03e5:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8ac03e8:	89 04 24             	mov    %eax,(%esp)
 8ac03eb:	e8 dc 03 00 00       	call   8ac07cc <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPSt6vectorIN20CreateDnfEventSciprt8ItemInfoESaIS4_EEEEneERKS9_>
 8ac03f0:	84 c0                	test   %al,%al
 8ac03f2:	0f 84 a7 00 00 00    	je     8ac049f <_ZN20CreateDnfEventSciprt11GetItemInfoERSt6vectorISt4pairIiiESaIS2_EEi+0xf9>
 8ac03f8:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ac03fb:	89 04 24             	mov    %eax,(%esp)
 8ac03fe:	e8 3f 9f 6b ff       	call   817a342 <_ZNSt6vectorISt4pairIiiESaIS1_EE5clearEv>
 8ac0403:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8ac0406:	89 04 24             	mov    %eax,(%esp)
 8ac0409:	e8 c6 04 00 00       	call   8ac08d4 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPSt6vectorIN20CreateDnfEventSciprt8ItemInfoESaIS4_EEEEptEv>
 8ac040e:	8b 40 04             	mov    0x4(%eax),%eax
 8ac0411:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8ac0414:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8ac041b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8ac041e:	89 04 24             	mov    %eax,(%esp)
 8ac0421:	e8 d0 04 00 00       	call   8ac08f6 <_ZNKSt6vectorIN20CreateDnfEventSciprt8ItemInfoESaIS1_EE4sizeEv>
 8ac0426:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8ac0429:	eb 67                	jmp    8ac0492 <_ZN20CreateDnfEventSciprt11GetItemInfoERSt6vectorISt4pairIiiESaIS2_EEi+0xec>
 8ac042b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8ac042e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac0432:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8ac0435:	89 04 24             	mov    %eax,(%esp)
 8ac0438:	e8 d5 04 00 00       	call   8ac0912 <_ZNSt6vectorIN20CreateDnfEventSciprt8ItemInfoESaIS1_EE2atEj>
 8ac043d:	8d 58 04             	lea    0x4(%eax),%ebx
 8ac0440:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8ac0443:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac0447:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8ac044a:	89 04 24             	mov    %eax,(%esp)
 8ac044d:	e8 c0 04 00 00       	call   8ac0912 <_ZNSt6vectorIN20CreateDnfEventSciprt8ItemInfoESaIS1_EE2atEj>
 8ac0452:	89 c2                	mov    %eax,%edx
 8ac0454:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8ac0457:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8ac045b:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ac045f:	89 04 24             	mov    %eax,(%esp)
 8ac0462:	e8 d7 33 6d ff       	call   819383e <_ZSt9make_pairIRmRsESt4pairINSt17__decay_and_stripIT_E6__typeENS3_IT0_E6__typeEEOS4_OS7_>
 8ac0467:	83 ec 04             	sub    $0x4,%esp
 8ac046a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8ac046d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac0471:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8ac0474:	89 04 24             	mov    %eax,(%esp)
 8ac0477:	e8 00 34 6d ff       	call   819387c <_ZNSt4pairIiiEC1ImsEEOS_IT_T0_E>
 8ac047c:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8ac047f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac0483:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ac0486:	89 04 24             	mov    %eax,(%esp)
 8ac0489:	e8 78 d1 61 ff       	call   80dd606 <_ZNSt6vectorISt4pairIiiESaIS1_EE9push_backEOS1_>
 8ac048e:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8ac0492:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8ac0495:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 8ac0498:	0f 92 c0             	setb   %al
 8ac049b:	84 c0                	test   %al,%al
 8ac049d:	75 8c                	jne    8ac042b <_ZN20CreateDnfEventSciprt11GetItemInfoERSt6vectorISt4pairIiiESaIS2_EEi+0x85>
 8ac049f:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 8ac04a2:	c9                   	leave
 8ac04a3:	c3                   	ret

```

```c
// CreateDnfEventSciprt::GetItemInfo @ 0x8ac03a6

/* CreateDnfEventSciprt::GetItemInfo(std::vector<std::pair<int, int>, std::allocator<std::pair<int,
   int> > >&, int) */

void CreateDnfEventSciprt::GetItemInfo(vector *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  short *psVar3;
  _Rb_tree_iterator<std::pair<int_const,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*>>
  local_30 [4];
  map<int,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*>>>
  local_2c [4];
  pair<int,int> local_28 [8];
  ulong local_20 [2];
  vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>> *local_18;
  uint local_14;
  uint local_10;
  
  std::
  map<int,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*>>>
  ::find((int *)local_30);
  std::
  map<int,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*>>>
  ::end(local_2c);
  cVar1 = std::
          _Rb_tree_iterator<std::pair<int_const,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*>>
          ::operator!=(local_30,(_Rb_tree_iterator *)local_2c);
  if (cVar1 != '\0') {
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::clear
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_2);
    iVar2 = std::
            _Rb_tree_iterator<std::pair<int_const,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*>>
            ::operator->(local_30);
    local_18 = *(vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>
                 **)(iVar2 + 4);
    local_14 = 0;
    local_10 = std::
               vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>
               ::size(local_18);
    for (; local_14 < local_10; local_14 = local_14 + 1) {
      std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>::at
                (local_18,local_14);
      psVar3 = (short *)std::
                        vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>
                        ::at(local_18,local_14);
      std::make_pair<unsigned_long&,short&>(local_20,psVar3);
      std::pair<int,int>::pair<unsigned_long,short>(local_28,(pair *)local_20);
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_2,local_28);
    }
  }
  return;
}

```

---

## GetItemInfo_08ac04a4

```asm
// === 08ac04a4 CreateDnfEventSciprt::GetItemInfo  [0x08ac04a4-0x8ac05e0] ===
 8ac04a4:	55                   	push   %ebp
 8ac04a5:	89 e5                	mov    %esp,%ebp
 8ac04a7:	53                   	push   %ebx
 8ac04a8:	83 ec 44             	sub    $0x44,%esp
 8ac04ab:	8b 55 08             	mov    0x8(%ebp),%edx
 8ac04ae:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8ac04b1:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ac04b5:	89 04 24             	mov    %eax,(%esp)
 8ac04b8:	e8 f1 03 00 00       	call   8ac08ae <_ZNSt3mapIiPSt6vectorIN20CreateDnfEventSciprt8ItemInfoESaIS2_EESt4lessIiESaISt4pairIKiS5_EEE5beginEv>
 8ac04bd:	83 ec 04             	sub    $0x4,%esp
 8ac04c0:	8b 55 08             	mov    0x8(%ebp),%edx
 8ac04c3:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8ac04c6:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ac04ca:	89 04 24             	mov    %eax,(%esp)
 8ac04cd:	e8 d4 02 00 00       	call   8ac07a6 <_ZNSt3mapIiPSt6vectorIN20CreateDnfEventSciprt8ItemInfoESaIS2_EESt4lessIiESaISt4pairIKiS5_EEE3endEv>
 8ac04d2:	83 ec 04             	sub    $0x4,%esp
 8ac04d5:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ac04d8:	89 04 24             	mov    %eax,(%esp)
 8ac04db:	e8 62 9e 6b ff       	call   817a342 <_ZNSt6vectorISt4pairIiiESaIS1_EE5clearEv>
 8ac04e0:	8b 55 08             	mov    0x8(%ebp),%edx
 8ac04e3:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8ac04e6:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ac04ea:	89 04 24             	mov    %eax,(%esp)
 8ac04ed:	e8 bc 03 00 00       	call   8ac08ae <_ZNSt3mapIiPSt6vectorIN20CreateDnfEventSciprt8ItemInfoESaIS2_EESt4lessIiESaISt4pairIKiS5_EEE5beginEv>
 8ac04f2:	83 ec 04             	sub    $0x4,%esp
 8ac04f5:	e9 c8 00 00 00       	jmp    8ac05c2 <_ZN20CreateDnfEventSciprt11GetItemInfoERSt6vectorISt4pairIiiESaIS2_EE+0x11e>
 8ac04fa:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8ac0501:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8ac0504:	89 04 24             	mov    %eax,(%esp)
 8ac0507:	e8 c8 03 00 00       	call   8ac08d4 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPSt6vectorIN20CreateDnfEventSciprt8ItemInfoESaIS4_EEEEptEv>
 8ac050c:	8b 40 04             	mov    0x4(%eax),%eax
 8ac050f:	89 04 24             	mov    %eax,(%esp)
 8ac0512:	e8 df 03 00 00       	call   8ac08f6 <_ZNKSt6vectorIN20CreateDnfEventSciprt8ItemInfoESaIS1_EE4sizeEv>
 8ac0517:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8ac051a:	eb 78                	jmp    8ac0594 <_ZN20CreateDnfEventSciprt11GetItemInfoERSt6vectorISt4pairIiiESaIS2_EE+0xf0>
 8ac051c:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8ac051f:	89 04 24             	mov    %eax,(%esp)
 8ac0522:	e8 ad 03 00 00       	call   8ac08d4 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPSt6vectorIN20CreateDnfEventSciprt8ItemInfoESaIS4_EEEEptEv>
 8ac0527:	8b 40 04             	mov    0x4(%eax),%eax
 8ac052a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8ac052d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8ac0530:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac0534:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ac0537:	89 04 24             	mov    %eax,(%esp)
 8ac053a:	e8 d3 03 00 00       	call   8ac0912 <_ZNSt6vectorIN20CreateDnfEventSciprt8ItemInfoESaIS1_EE2atEj>
 8ac053f:	8d 58 04             	lea    0x4(%eax),%ebx
 8ac0542:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8ac0545:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac0549:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ac054c:	89 04 24             	mov    %eax,(%esp)
 8ac054f:	e8 be 03 00 00       	call   8ac0912 <_ZNSt6vectorIN20CreateDnfEventSciprt8ItemInfoESaIS1_EE2atEj>
 8ac0554:	89 c2                	mov    %eax,%edx
 8ac0556:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8ac0559:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8ac055d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ac0561:	89 04 24             	mov    %eax,(%esp)
 8ac0564:	e8 d5 32 6d ff       	call   819383e <_ZSt9make_pairIRmRsESt4pairINSt17__decay_and_stripIT_E6__typeENS3_IT0_E6__typeEEOS4_OS7_>
 8ac0569:	83 ec 04             	sub    $0x4,%esp
 8ac056c:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8ac056f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac0573:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8ac0576:	89 04 24             	mov    %eax,(%esp)
 8ac0579:	e8 fe 32 6d ff       	call   819387c <_ZNSt4pairIiiEC1ImsEEOS_IT_T0_E>
 8ac057e:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8ac0581:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac0585:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ac0588:	89 04 24             	mov    %eax,(%esp)
 8ac058b:	e8 76 d0 61 ff       	call   80dd606 <_ZNSt6vectorISt4pairIiiESaIS1_EE9push_backEOS1_>
 8ac0590:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 8ac0594:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8ac0597:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 8ac059a:	0f 92 c0             	setb   %al
 8ac059d:	84 c0                	test   %al,%al
 8ac059f:	0f 85 77 ff ff ff    	jne    8ac051c <_ZN20CreateDnfEventSciprt11GetItemInfoERSt6vectorISt4pairIiiESaIS2_EE+0x78>
 8ac05a5:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8ac05a8:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8ac05af:	00 
 8ac05b0:	8d 55 cc             	lea    -0x34(%ebp),%edx
 8ac05b3:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ac05b7:	89 04 24             	mov    %eax,(%esp)
 8ac05ba:	e8 7f 03 00 00       	call   8ac093e <_ZNSt17_Rb_tree_iteratorISt4pairIKiPSt6vectorIN20CreateDnfEventSciprt8ItemInfoESaIS4_EEEEppEi>
 8ac05bf:	83 ec 04             	sub    $0x4,%esp
 8ac05c2:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8ac05c5:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac05c9:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8ac05cc:	89 04 24             	mov    %eax,(%esp)
 8ac05cf:	e8 f8 01 00 00       	call   8ac07cc <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPSt6vectorIN20CreateDnfEventSciprt8ItemInfoESaIS4_EEEEneERKS9_>
 8ac05d4:	84 c0                	test   %al,%al
 8ac05d6:	0f 85 1e ff ff ff    	jne    8ac04fa <_ZN20CreateDnfEventSciprt11GetItemInfoERSt6vectorISt4pairIiiESaIS2_EE+0x56>
 8ac05dc:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 8ac05df:	c9                   	leave
 8ac05e0:	c3                   	ret

```

```c
// CreateDnfEventSciprt::GetItemInfo @ 0x8ac04a4

/* CreateDnfEventSciprt::GetItemInfo(std::vector<std::pair<int, int>, std::allocator<std::pair<int,
   int> > >&) */

void __thiscall CreateDnfEventSciprt::GetItemInfo(CreateDnfEventSciprt *this,vector *param_1)

{
  char cVar1;
  int iVar2;
  short *psVar3;
  map<int,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*>>>
  local_38 [4];
  map<int,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*>>>
  local_34 [4];
  map<int,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*>>>
  local_30 [4];
  pair<int,int> local_2c [8];
  ulong local_24 [2];
  _Rb_tree_iterator<std::pair<int_const,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*>>
  local_1c [4];
  uint local_18;
  uint local_14;
  vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>> *local_10;
  
  std::
  map<int,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*>>>
  ::begin(local_30);
  std::
  map<int,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*>>>
  ::end(local_34);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::clear
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_1);
  std::
  map<int,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*>>>
  ::begin(local_38);
  while( true ) {
    cVar1 = std::
            _Rb_tree_iterator<std::pair<int_const,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*>>
            ::operator!=((_Rb_tree_iterator<std::pair<int_const,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*>>
                          *)local_38,(_Rb_tree_iterator *)local_34);
    if (cVar1 == '\0') break;
    local_18 = 0;
    iVar2 = std::
            _Rb_tree_iterator<std::pair<int_const,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*>>
            ::operator->((_Rb_tree_iterator<std::pair<int_const,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*>>
                          *)local_38);
    local_14 = std::
               vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>
               ::size(*(vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>
                        **)(iVar2 + 4));
    for (; local_18 < local_14; local_18 = local_18 + 1) {
      iVar2 = std::
              _Rb_tree_iterator<std::pair<int_const,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*>>
              ::operator->((_Rb_tree_iterator<std::pair<int_const,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*>>
                            *)local_38);
      local_10 = *(vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>
                   **)(iVar2 + 4);
      std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>::at
                (local_10,local_18);
      psVar3 = (short *)std::
                        vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>
                        ::at(local_10,local_18);
      std::make_pair<unsigned_long&,short&>(local_24,psVar3);
      std::pair<int,int>::pair<unsigned_long,short>(local_2c,(pair *)local_24);
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_1,local_2c);
    }
    std::
    _Rb_tree_iterator<std::pair<int_const,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*>>
    ::operator++(local_1c,(int)local_38);
  }
  return;
}

```

---

## clearScript

```asm
// === 08ac032a CreateDnfEventSciprt::clearScript  [0x08ac032a-0x8ac03a5] ===
 8ac032a:	55                   	push   %ebp
 8ac032b:	89 e5                	mov    %esp,%ebp
 8ac032d:	53                   	push   %ebx
 8ac032e:	83 ec 24             	sub    $0x24,%esp
 8ac0331:	8b 55 08             	mov    0x8(%ebp),%edx
 8ac0334:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8ac0337:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ac033b:	89 04 24             	mov    %eax,(%esp)
 8ac033e:	e8 6b 05 00 00       	call   8ac08ae <_ZNSt3mapIiPSt6vectorIN20CreateDnfEventSciprt8ItemInfoESaIS2_EESt4lessIiESaISt4pairIKiS5_EEE5beginEv>
 8ac0343:	83 ec 04             	sub    $0x4,%esp
 8ac0346:	8b 55 08             	mov    0x8(%ebp),%edx
 8ac0349:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8ac034c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ac0350:	89 04 24             	mov    %eax,(%esp)
 8ac0353:	e8 4e 04 00 00       	call   8ac07a6 <_ZNSt3mapIiPSt6vectorIN20CreateDnfEventSciprt8ItemInfoESaIS2_EESt4lessIiESaISt4pairIKiS5_EEE3endEv>
 8ac0358:	83 ec 04             	sub    $0x4,%esp
 8ac035b:	eb 22                	jmp    8ac037f <_ZN20CreateDnfEventSciprt11clearScriptEv+0x55>
 8ac035d:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8ac0360:	89 04 24             	mov    %eax,(%esp)
 8ac0363:	e8 6c 05 00 00       	call   8ac08d4 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPSt6vectorIN20CreateDnfEventSciprt8ItemInfoESaIS4_EEEEptEv>
 8ac0368:	8b 58 04             	mov    0x4(%eax),%ebx
 8ac036b:	85 db                	test   %ebx,%ebx
 8ac036d:	74 10                	je     8ac037f <_ZN20CreateDnfEventSciprt11clearScriptEv+0x55>
 8ac036f:	89 1c 24             	mov    %ebx,(%esp)
 8ac0372:	e8 83 03 00 00       	call   8ac06fa <_ZNSt6vectorIN20CreateDnfEventSciprt8ItemInfoESaIS1_EED1Ev>
 8ac0377:	89 1c 24             	mov    %ebx,(%esp)
 8ac037a:	e8 71 41 c6 ff       	call   87244f0 <_ZdlPv>
 8ac037f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8ac0382:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac0386:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8ac0389:	89 04 24             	mov    %eax,(%esp)
 8ac038c:	e8 3b 04 00 00       	call   8ac07cc <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPSt6vectorIN20CreateDnfEventSciprt8ItemInfoESaIS4_EEEEneERKS9_>
 8ac0391:	84 c0                	test   %al,%al
 8ac0393:	75 c8                	jne    8ac035d <_ZN20CreateDnfEventSciprt11clearScriptEv+0x33>
 8ac0395:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac0398:	89 04 24             	mov    %eax,(%esp)
 8ac039b:	e8 42 05 00 00       	call   8ac08e2 <_ZNSt3mapIiPSt6vectorIN20CreateDnfEventSciprt8ItemInfoESaIS2_EESt4lessIiESaISt4pairIKiS5_EEE5clearEv>
 8ac03a0:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 8ac03a3:	c9                   	leave
 8ac03a4:	c3                   	ret
 8ac03a5:	90                   	nop

```

```c
// CreateDnfEventSciprt::clearScript @ 0x8ac032a

/* CreateDnfEventSciprt::clearScript() */

void __thiscall CreateDnfEventSciprt::clearScript(CreateDnfEventSciprt *this)

{
  vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>> *this_00;
  char cVar1;
  int iVar2;
  map<int,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*>>>
  local_14 [4];
  map<int,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*>>>
  local_10 [8];
  
  std::
  map<int,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*>>>
  ::begin(local_10);
  std::
  map<int,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*>>>
  ::end(local_14);
  while( true ) {
    cVar1 = std::
            _Rb_tree_iterator<std::pair<int_const,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*>>
            ::operator!=((_Rb_tree_iterator<std::pair<int_const,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*>>
                          *)local_10,(_Rb_tree_iterator *)local_14);
    if (cVar1 == '\0') break;
    iVar2 = std::
            _Rb_tree_iterator<std::pair<int_const,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*>>
            ::operator->((_Rb_tree_iterator<std::pair<int_const,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*>>
                          *)local_10);
    this_00 = *(vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>
                **)(iVar2 + 4);
    if (this_00 !=
        (vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>> *)0x0
       ) {
      std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>::
      ~vector(this_00);
      operator_delete(this_00);
    }
  }
  std::
  map<int,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*>>>
  ::clear((map<int,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*>>>
           *)this);
  return;
}

```

---

## loadScript

```asm
// === 08ac0034 CreateDnfEventSciprt::loadScript  [0x08ac0034-0x8ac0329] ===
 8ac0034:	55                   	push   %ebp
 8ac0035:	89 e5                	mov    %esp,%ebp
 8ac0037:	57                   	push   %edi
 8ac0038:	56                   	push   %esi
 8ac0039:	53                   	push   %ebx
 8ac003a:	83 ec 6c             	sub    $0x6c,%esp
 8ac003d:	c7 44 24 04 00 d9 e2 	movl   $0x8e2d900,0x4(%esp)
 8ac0044:	08 
 8ac0045:	c7 04 24 11 d9 e2 08 	movl   $0x8e2d911,(%esp)
 8ac004c:	e8 d8 bc df ff       	call   88bbd29 <_Z18loadRDARScriptFilePKcS0_>
 8ac0051:	83 f0 01             	xor    $0x1,%eax
 8ac0054:	84 c0                	test   %al,%al
 8ac0056:	74 0a                	je     8ac0062 <_ZN20CreateDnfEventSciprt10loadScriptEv+0x2e>
 8ac0058:	bb ff ff ff ff       	mov    $0xffffffff,%ebx
 8ac005d:	e9 ba 02 00 00       	jmp    8ac031c <_ZN20CreateDnfEventSciprt10loadScriptEv+0x2e8>
 8ac0062:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8ac0065:	89 04 24             	mov    %eax,(%esp)
 8ac0068:	e8 63 65 c4 ff       	call   87065d0 <_ZNSsC1Ev>
 8ac006d:	c6 45 bb 00          	movb   $0x0,-0x45(%ebp)
 8ac0071:	c6 45 ba 00          	movb   $0x0,-0x46(%ebp)
 8ac0075:	c7 45 b4 00 00 00 00 	movl   $0x0,-0x4c(%ebp)
 8ac007c:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8ac007f:	89 04 24             	mov    %eax,(%esp)
 8ac0082:	e8 5f 06 00 00       	call   8ac06e6 <_ZNSt6vectorIN20CreateDnfEventSciprt8ItemInfoESaIS1_EEC1Ev>
 8ac0087:	eb 04                	jmp    8ac008d <_ZN20CreateDnfEventSciprt10loadScriptEv+0x59>
 8ac0089:	90                   	nop
 8ac008a:	eb 01                	jmp    8ac008d <_ZN20CreateDnfEventSciprt10loadScriptEv+0x59>
 8ac008c:	90                   	nop
 8ac008d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8ac0094:	00 
 8ac0095:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8ac0098:	89 04 24             	mov    %eax,(%esp)
 8ac009b:	e8 bf c7 df ff       	call   88bc85f <_Z8ScanTypeRSsb>
 8ac00a0:	83 f0 01             	xor    $0x1,%eax
 8ac00a3:	84 c0                	test   %al,%al
 8ac00a5:	0f 85 13 02 00 00    	jne    8ac02be <_ZN20CreateDnfEventSciprt10loadScriptEv+0x28a>
 8ac00ab:	c7 44 24 04 18 d9 e2 	movl   $0x8e2d918,0x4(%esp)
 8ac00b2:	08 
 8ac00b3:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8ac00b6:	89 04 24             	mov    %eax,(%esp)
 8ac00b9:	e8 e3 08 5c ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8ac00be:	84 c0                	test   %al,%al
 8ac00c0:	74 c7                	je     8ac0089 <_ZN20CreateDnfEventSciprt10loadScriptEv+0x55>
 8ac00c2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8ac00c9:	00 
 8ac00ca:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8ac00cd:	89 04 24             	mov    %eax,(%esp)
 8ac00d0:	e8 8a c7 df ff       	call   88bc85f <_Z8ScanTypeRSsb>
 8ac00d5:	83 f0 01             	xor    $0x1,%eax
 8ac00d8:	84 c0                	test   %al,%al
 8ac00da:	0f 85 e1 01 00 00    	jne    8ac02c1 <_ZN20CreateDnfEventSciprt10loadScriptEv+0x28d>
 8ac00e0:	c7 44 24 04 1f d9 e2 	movl   $0x8e2d91f,0x4(%esp)
 8ac00e7:	08 
 8ac00e8:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8ac00eb:	89 04 24             	mov    %eax,(%esp)
 8ac00ee:	e8 ae 08 5c ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8ac00f3:	84 c0                	test   %al,%al
 8ac00f5:	74 0f                	je     8ac0106 <_ZN20CreateDnfEventSciprt10loadScriptEv+0xd2>
 8ac00f7:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 8ac00fe:	e8 78 c2 df ff       	call   88bc37b <_Z7ScanIntPb>
 8ac0103:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 8ac0106:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8ac010d:	00 
 8ac010e:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8ac0111:	89 04 24             	mov    %eax,(%esp)
 8ac0114:	e8 46 c7 df ff       	call   88bc85f <_Z8ScanTypeRSsb>
 8ac0119:	83 f0 01             	xor    $0x1,%eax
 8ac011c:	84 c0                	test   %al,%al
 8ac011e:	0f 85 a0 01 00 00    	jne    8ac02c4 <_ZN20CreateDnfEventSciprt10loadScriptEv+0x290>
 8ac0124:	c7 44 24 04 25 d9 e2 	movl   $0x8e2d925,0x4(%esp)
 8ac012b:	08 
 8ac012c:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8ac012f:	89 04 24             	mov    %eax,(%esp)
 8ac0132:	e8 6a 08 5c ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8ac0137:	84 c0                	test   %al,%al
 8ac0139:	74 69                	je     8ac01a4 <_ZN20CreateDnfEventSciprt10loadScriptEv+0x170>
 8ac013b:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8ac0142:	00 
 8ac0143:	8d 45 ba             	lea    -0x46(%ebp),%eax
 8ac0146:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ac014a:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8ac014d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac0151:	8d 45 bb             	lea    -0x45(%ebp),%eax
 8ac0154:	89 04 24             	mov    %eax,(%esp)
 8ac0157:	e8 53 cd df ff       	call   88bceaf <_Z13ScanTypeOrIntRbRSsS_b>
 8ac015c:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8ac015f:	0f b6 45 bb          	movzbl -0x45(%ebp),%eax
 8ac0163:	84 c0                	test   %al,%al
 8ac0165:	75 3c                	jne    8ac01a3 <_ZN20CreateDnfEventSciprt10loadScriptEv+0x16f>
 8ac0167:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 8ac016e:	e8 08 c2 df ff       	call   88bc37b <_Z7ScanIntPb>
 8ac0173:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8ac0176:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8ac0179:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ac017d:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8ac0180:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac0184:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8ac0187:	89 04 24             	mov    %eax,(%esp)
 8ac018a:	e8 af 04 00 00       	call   8ac063e <_ZN20CreateDnfEventSciprt8ItemInfoC1Eii>
 8ac018f:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8ac0192:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac0196:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8ac0199:	89 04 24             	mov    %eax,(%esp)
 8ac019c:	e8 b7 05 00 00       	call   8ac0758 <_ZNSt6vectorIN20CreateDnfEventSciprt8ItemInfoESaIS1_EE9push_backEOS1_>
 8ac01a1:	eb 98                	jmp    8ac013b <_ZN20CreateDnfEventSciprt10loadScriptEv+0x107>
 8ac01a3:	90                   	nop
 8ac01a4:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8ac01ab:	00 
 8ac01ac:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8ac01af:	89 04 24             	mov    %eax,(%esp)
 8ac01b2:	e8 a8 c6 df ff       	call   88bc85f <_Z8ScanTypeRSsb>
 8ac01b7:	83 f0 01             	xor    $0x1,%eax
 8ac01ba:	84 c0                	test   %al,%al
 8ac01bc:	0f 85 05 01 00 00    	jne    8ac02c7 <_ZN20CreateDnfEventSciprt10loadScriptEv+0x293>
 8ac01c2:	c7 44 24 04 2e d9 e2 	movl   $0x8e2d92e,0x4(%esp)
 8ac01c9:	08 
 8ac01ca:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8ac01cd:	89 04 24             	mov    %eax,(%esp)
 8ac01d0:	e8 cc 07 5c ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8ac01d5:	84 c0                	test   %al,%al
 8ac01d7:	0f 84 af fe ff ff    	je     8ac008c <_ZN20CreateDnfEventSciprt10loadScriptEv+0x58>
 8ac01dd:	8b 55 08             	mov    0x8(%ebp),%edx
 8ac01e0:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8ac01e3:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ac01e7:	89 04 24             	mov    %eax,(%esp)
 8ac01ea:	e8 b7 05 00 00       	call   8ac07a6 <_ZNSt3mapIiPSt6vectorIN20CreateDnfEventSciprt8ItemInfoESaIS2_EESt4lessIiESaISt4pairIKiS5_EEE3endEv>
 8ac01ef:	83 ec 04             	sub    $0x4,%esp
 8ac01f2:	8b 55 08             	mov    0x8(%ebp),%edx
 8ac01f5:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8ac01f8:	8d 4d b4             	lea    -0x4c(%ebp),%ecx
 8ac01fb:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8ac01ff:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ac0203:	89 04 24             	mov    %eax,(%esp)
 8ac0206:	e8 6f 05 00 00       	call   8ac077a <_ZNSt3mapIiPSt6vectorIN20CreateDnfEventSciprt8ItemInfoESaIS2_EESt4lessIiESaISt4pairIKiS5_EEE4findERS9_>
 8ac020b:	83 ec 04             	sub    $0x4,%esp
 8ac020e:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8ac0211:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac0215:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8ac0218:	89 04 24             	mov    %eax,(%esp)
 8ac021b:	e8 ac 05 00 00       	call   8ac07cc <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPSt6vectorIN20CreateDnfEventSciprt8ItemInfoESaIS4_EEEEneERKS9_>
 8ac0220:	84 c0                	test   %al,%al
 8ac0222:	74 1d                	je     8ac0241 <_ZN20CreateDnfEventSciprt10loadScriptEv+0x20d>
 8ac0224:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8ac0227:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac022b:	c7 04 24 36 d9 e2 08 	movl   $0x8e2d936,(%esp)
 8ac0232:	e8 29 d9 5b ff       	call   807db60 <printf@plt>
 8ac0237:	bb ff ff ff ff       	mov    $0xffffffff,%ebx
 8ac023c:	e9 a8 00 00 00       	jmp    8ac02e9 <_ZN20CreateDnfEventSciprt10loadScriptEv+0x2b5>
 8ac0241:	c7 04 24 0c 00 00 00 	movl   $0xc,(%esp)
 8ac0248:	e8 03 42 c6 ff       	call   8724450 <_Znwj>
 8ac024d:	89 c3                	mov    %eax,%ebx
 8ac024f:	89 d8                	mov    %ebx,%eax
 8ac0251:	89 04 24             	mov    %eax,(%esp)
 8ac0254:	e8 8d 04 00 00       	call   8ac06e6 <_ZNSt6vectorIN20CreateDnfEventSciprt8ItemInfoESaIS1_EEC1Ev>
 8ac0259:	eb 12                	jmp    8ac026d <_ZN20CreateDnfEventSciprt10loadScriptEv+0x239>
 8ac025b:	89 d6                	mov    %edx,%esi
 8ac025d:	89 c7                	mov    %eax,%edi
 8ac025f:	89 1c 24             	mov    %ebx,(%esp)
 8ac0262:	e8 89 42 c6 ff       	call   87244f0 <_ZdlPv>
 8ac0267:	89 f8                	mov    %edi,%eax
 8ac0269:	89 f2                	mov    %esi,%edx
 8ac026b:	eb 67                	jmp    8ac02d4 <_ZN20CreateDnfEventSciprt10loadScriptEv+0x2a0>
 8ac026d:	89 d8                	mov    %ebx,%eax
 8ac026f:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 8ac0272:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 8ac0275:	8d 55 a8             	lea    -0x58(%ebp),%edx
 8ac0278:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ac027c:	89 04 24             	mov    %eax,(%esp)
 8ac027f:	e8 5c 05 00 00       	call   8ac07e0 <_ZNSt6vectorIN20CreateDnfEventSciprt8ItemInfoESaIS1_EE4swapEOS3_>
 8ac0284:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8ac0287:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ac028b:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8ac028e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac0292:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8ac0295:	89 04 24             	mov    %eax,(%esp)
 8ac0298:	e8 b7 05 00 00       	call   8ac0854 <_ZNSt4pairIKiPSt6vectorIN20CreateDnfEventSciprt8ItemInfoESaIS3_EEEC1IRiRS6_EEOT_OT0_>
 8ac029d:	8b 55 08             	mov    0x8(%ebp),%edx
 8ac02a0:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8ac02a3:	8d 4d d8             	lea    -0x28(%ebp),%ecx
 8ac02a6:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8ac02aa:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ac02ae:	89 04 24             	mov    %eax,(%esp)
 8ac02b1:	e8 cc 05 00 00       	call   8ac0882 <_ZNSt3mapIiPSt6vectorIN20CreateDnfEventSciprt8ItemInfoESaIS2_EESt4lessIiESaISt4pairIKiS5_EEE6insertERKSA_>
 8ac02b6:	83 ec 04             	sub    $0x4,%esp
 8ac02b9:	e9 cf fd ff ff       	jmp    8ac008d <_ZN20CreateDnfEventSciprt10loadScriptEv+0x59>
 8ac02be:	90                   	nop
 8ac02bf:	eb 07                	jmp    8ac02c8 <_ZN20CreateDnfEventSciprt10loadScriptEv+0x294>
 8ac02c1:	90                   	nop
 8ac02c2:	eb 04                	jmp    8ac02c8 <_ZN20CreateDnfEventSciprt10loadScriptEv+0x294>
 8ac02c4:	90                   	nop
 8ac02c5:	eb 01                	jmp    8ac02c8 <_ZN20CreateDnfEventSciprt10loadScriptEv+0x294>
 8ac02c7:	90                   	nop
 8ac02c8:	e8 87 bd df ff       	call   88bc054 <_Z20unloadRDARScriptFilev>
 8ac02cd:	bb 00 00 00 00       	mov    $0x0,%ebx
 8ac02d2:	eb 15                	jmp    8ac02e9 <_ZN20CreateDnfEventSciprt10loadScriptEv+0x2b5>
 8ac02d4:	89 d3                	mov    %edx,%ebx
 8ac02d6:	89 c6                	mov    %eax,%esi
 8ac02d8:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8ac02db:	89 04 24             	mov    %eax,(%esp)
 8ac02de:	e8 17 04 00 00       	call   8ac06fa <_ZNSt6vectorIN20CreateDnfEventSciprt8ItemInfoESaIS1_EED1Ev>
 8ac02e3:	89 f0                	mov    %esi,%eax
 8ac02e5:	89 da                	mov    %ebx,%edx
 8ac02e7:	eb 0d                	jmp    8ac02f6 <_ZN20CreateDnfEventSciprt10loadScriptEv+0x2c2>
 8ac02e9:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8ac02ec:	89 04 24             	mov    %eax,(%esp)
 8ac02ef:	e8 06 04 00 00       	call   8ac06fa <_ZNSt6vectorIN20CreateDnfEventSciprt8ItemInfoESaIS1_EED1Ev>
 8ac02f4:	eb 1b                	jmp    8ac0311 <_ZN20CreateDnfEventSciprt10loadScriptEv+0x2dd>
 8ac02f6:	89 d3                	mov    %edx,%ebx
 8ac02f8:	89 c6                	mov    %eax,%esi
 8ac02fa:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8ac02fd:	89 04 24             	mov    %eax,(%esp)
 8ac0300:	e8 db 78 c4 ff       	call   8707be0 <_ZNSsD1Ev>
 8ac0305:	89 f0                	mov    %esi,%eax
 8ac0307:	89 da                	mov    %ebx,%edx
 8ac0309:	89 04 24             	mov    %eax,(%esp)
 8ac030c:	e8 3f 34 02 00       	call   8ae3750 <_Unwind_Resume>
 8ac0311:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8ac0314:	89 04 24             	mov    %eax,(%esp)
 8ac0317:	e8 c4 78 c4 ff       	call   8707be0 <_ZNSsD1Ev>
 8ac031c:	89 d8                	mov    %ebx,%eax
 8ac031e:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8ac0321:	83 c4 00             	add    $0x0,%esp
 8ac0324:	5b                   	pop    %ebx
 8ac0325:	5e                   	pop    %esi
 8ac0326:	5f                   	pop    %edi
 8ac0327:	5d                   	pop    %ebp
 8ac0328:	c3                   	ret
 8ac0329:	90                   	nop

```

```c
// CreateDnfEventSciprt::loadScript @ 0x8ac0034

/* CreateDnfEventSciprt::loadScript() */

undefined4 CreateDnfEventSciprt::loadScript(void)

{
  char cVar1;
  bool bVar2;
  vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>> *this;
  undefined4 uVar3;
  int *piVar4;
  vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>> *local_60;
  vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>
  local_5c [12];
  int local_50;
  bool local_4a;
  bool local_49;
  string local_48;
  ItemInfo local_44 [8];
  map<int,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*>>>
  local_3c [4];
  _Rb_tree_iterator<std::pair<int_const,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*>>
  local_38 [4];
  pair local_34 [8];
  pair<int_const,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*>
  local_2c [8];
  int local_24;
  int local_20;
  
  cVar1 = loadRDARScriptFile("Event/","tw_CreateDnf.evt");
  if (cVar1 == '\x01') {
    std::string::string((string *)&local_48);
    local_49 = false;
    local_4a = false;
    local_50 = 0;
                    /* try { // try from 08ac0082 to 08ac0086 has its CatchHandler @ 08ac02f6 */
    std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>::
    vector(local_5c);
                    /* try { // try from 08ac009b to 08ac024c has its CatchHandler @ 08ac02d4 */
    while (cVar1 = ScanType((string *)&local_48,true), cVar1 == '\x01') {
      bVar2 = std::operator==(&local_48,"[step]");
      if (bVar2) {
        cVar1 = ScanType((string *)&local_48,true);
        if (cVar1 != '\x01') break;
        bVar2 = std::operator==(&local_48,"[day]");
        if (bVar2) {
          local_50 = ScanInt((bool *)0x0);
        }
        cVar1 = ScanType((string *)&local_48,true);
        if (cVar1 != '\x01') break;
        bVar2 = std::operator==(&local_48,"[reward]");
        if (bVar2) {
          while (local_24 = ScanTypeOrInt(&local_49,(string *)&local_48,&local_4a,true),
                local_49 == false) {
            local_20 = ScanInt((bool *)0x0);
            ItemInfo::ItemInfo(local_44,local_24,local_20);
            std::
            vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>::
            push_back(local_5c,local_44);
          }
        }
        cVar1 = ScanType((string *)&local_48,true);
        if (cVar1 != '\x01') break;
        bVar2 = std::operator==(&local_48,"[/step]");
        if (bVar2) {
          std::
          map<int,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*>>>
          ::end(local_3c);
          piVar4 = &local_50;
          std::
          map<int,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*>>>
          ::find((int *)local_38);
          cVar1 = std::
                  _Rb_tree_iterator<std::pair<int_const,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*>>
                  ::operator!=(local_38,(_Rb_tree_iterator *)local_3c);
          if (cVar1 != '\0') {
            printf("duplicate [level] %d",local_50,piVar4);
            uVar3 = 0xffffffff;
            goto LAB_08ac02e9;
          }
          this = operator_new(0xc);
                    /* try { // try from 08ac0254 to 08ac0258 has its CatchHandler @ 08ac025b */
          std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>
          ::vector(this);
          local_60 = this;
                    /* try { // try from 08ac027f to 08ac02cc has its CatchHandler @ 08ac02d4 */
          std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>
          ::swap(this,(vector *)local_5c);
          std::
          pair<int_const,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*>
          ::
          pair<int&,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*&>
                    (local_2c,&local_50,(vector **)&local_60);
          std::
          map<int,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*>>>
          ::insert(local_34);
        }
      }
    }
    unloadRDARScriptFile();
    uVar3 = 0;
LAB_08ac02e9:
                    /* try { // try from 08ac02ef to 08ac02f3 has its CatchHandler @ 08ac02f6 */
    std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>::
    ~vector(local_5c);
    std::string::~string((string *)&local_48);
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

```

---

## ~CreateDnfEventSciprt

```asm
// === 08ac0020 CreateDnfEventSciprt::~CreateDnfEventSciprt  [0x08ac0020-0x8ac0033] ===
 8ac0020:	55                   	push   %ebp
 8ac0021:	89 e5                	mov    %esp,%ebp
 8ac0023:	83 ec 18             	sub    $0x18,%esp
 8ac0026:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac0029:	89 04 24             	mov    %eax,(%esp)
 8ac002c:	e8 27 06 00 00       	call   8ac0658 <_ZNSt3mapIiPSt6vectorIN20CreateDnfEventSciprt8ItemInfoESaIS2_EESt4lessIiESaISt4pairIKiS5_EEED1Ev>
 8ac0031:	c9                   	leave
 8ac0032:	c3                   	ret
 8ac0033:	90                   	nop

```

```c
// CreateDnfEventSciprt::~CreateDnfEventSciprt @ 0x8ac0020

/* CreateDnfEventSciprt::~CreateDnfEventSciprt() */

void __thiscall CreateDnfEventSciprt::~CreateDnfEventSciprt(CreateDnfEventSciprt *this)

{
  std::
  map<int,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*>>>
  ::~map((map<int,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<CreateDnfEventSciprt::ItemInfo,std::allocator<CreateDnfEventSciprt::ItemInfo>>*>>>
          *)this);
  return;
}

```

