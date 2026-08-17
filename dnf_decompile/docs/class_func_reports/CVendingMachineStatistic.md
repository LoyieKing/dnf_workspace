# CVendingMachineStatistic

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## addOutputItem

```asm
// === 0860f5a4 CVendingMachineStatistic::addOutputItem  [0x0860f5a4-0x860f6dd] ===
 860f5a4:	55                   	push   %ebp
 860f5a5:	89 e5                	mov    %esp,%ebp
 860f5a7:	83 ec 48             	sub    $0x48,%esp
 860f5aa:	8b 55 08             	mov    0x8(%ebp),%edx
 860f5ad:	8d 45 d0             	lea    -0x30(%ebp),%eax
 860f5b0:	89 54 24 04          	mov    %edx,0x4(%esp)
 860f5b4:	89 04 24             	mov    %eax,(%esp)
 860f5b7:	e8 1e dc b8 ff       	call   819d1da <_ZNSt6vectorImSaImEE3endEv>
 860f5bc:	83 ec 04             	sub    $0x4,%esp
 860f5bf:	8b 55 08             	mov    0x8(%ebp),%edx
 860f5c2:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 860f5c5:	89 54 24 04          	mov    %edx,0x4(%esp)
 860f5c9:	89 04 24             	mov    %eax,(%esp)
 860f5cc:	e8 e5 db b8 ff       	call   819d1b6 <_ZNSt6vectorImSaImEE5beginEv>
 860f5d1:	83 ec 04             	sub    $0x4,%esp
 860f5d4:	8d 45 cc             	lea    -0x34(%ebp),%eax
 860f5d7:	8d 55 0c             	lea    0xc(%ebp),%edx
 860f5da:	89 54 24 0c          	mov    %edx,0xc(%esp)
 860f5de:	8b 55 d0             	mov    -0x30(%ebp),%edx
 860f5e1:	89 54 24 08          	mov    %edx,0x8(%esp)
 860f5e5:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 860f5e8:	89 54 24 04          	mov    %edx,0x4(%esp)
 860f5ec:	89 04 24             	mov    %eax,(%esp)
 860f5ef:	e8 0c dc b8 ff       	call   819d200 <_ZSt4findIN9__gnu_cxx17__normal_iteratorIPmSt6vectorImSaImEEEEmET_S7_S7_RKT0_>
 860f5f4:	83 ec 04             	sub    $0x4,%esp
 860f5f7:	8b 55 08             	mov    0x8(%ebp),%edx
 860f5fa:	8d 45 d8             	lea    -0x28(%ebp),%eax
 860f5fd:	89 54 24 04          	mov    %edx,0x4(%esp)
 860f601:	89 04 24             	mov    %eax,(%esp)
 860f604:	e8 d1 db b8 ff       	call   819d1da <_ZNSt6vectorImSaImEE3endEv>
 860f609:	83 ec 04             	sub    $0x4,%esp
 860f60c:	8d 45 d8             	lea    -0x28(%ebp),%eax
 860f60f:	89 44 24 04          	mov    %eax,0x4(%esp)
 860f613:	8d 45 cc             	lea    -0x34(%ebp),%eax
 860f616:	89 04 24             	mov    %eax,(%esp)
 860f619:	e8 37 24 00 00       	call   8611a55 <_ZN9__gnu_cxxeqIPmSt6vectorImSaImEEEEbRKNS_17__normal_iteratorIT_T0_EESA_>
 860f61e:	84 c0                	test   %al,%al
 860f620:	0f 85 b5 00 00 00    	jne    860f6db <_ZN24CVendingMachineStatistic13addOutputItemEmj+0x137>
 860f626:	8b 45 08             	mov    0x8(%ebp),%eax
 860f629:	8d 48 10             	lea    0x10(%eax),%ecx
 860f62c:	8d 45 c8             	lea    -0x38(%ebp),%eax
 860f62f:	8d 55 0c             	lea    0xc(%ebp),%edx
 860f632:	89 54 24 08          	mov    %edx,0x8(%esp)
 860f636:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 860f63a:	89 04 24             	mov    %eax,(%esp)
 860f63d:	e8 40 24 00 00       	call   8611a82 <_ZNSt3mapImjSt4lessImESaISt4pairIKmjEEE4findERS3_>
 860f642:	83 ec 04             	sub    $0x4,%esp
 860f645:	8b 45 08             	mov    0x8(%ebp),%eax
 860f648:	8d 50 10             	lea    0x10(%eax),%edx
 860f64b:	8d 45 dc             	lea    -0x24(%ebp),%eax
 860f64e:	89 54 24 04          	mov    %edx,0x4(%esp)
 860f652:	89 04 24             	mov    %eax,(%esp)
 860f655:	e8 54 24 00 00       	call   8611aae <_ZNSt3mapImjSt4lessImESaISt4pairIKmjEEE3endEv>
 860f65a:	83 ec 04             	sub    $0x4,%esp
 860f65d:	8d 45 dc             	lea    -0x24(%ebp),%eax
 860f660:	89 44 24 04          	mov    %eax,0x4(%esp)
 860f664:	8d 45 c8             	lea    -0x38(%ebp),%eax
 860f667:	89 04 24             	mov    %eax,(%esp)
 860f66a:	e8 65 24 00 00       	call   8611ad4 <_ZNKSt17_Rb_tree_iteratorISt4pairIKmjEEeqERKS3_>
 860f66f:	84 c0                	test   %al,%al
 860f671:	74 4f                	je     860f6c2 <_ZN24CVendingMachineStatistic13addOutputItemEmj+0x11e>
 860f673:	8d 45 f0             	lea    -0x10(%ebp),%eax
 860f676:	8d 55 10             	lea    0x10(%ebp),%edx
 860f679:	89 54 24 08          	mov    %edx,0x8(%esp)
 860f67d:	8d 55 0c             	lea    0xc(%ebp),%edx
 860f680:	89 54 24 04          	mov    %edx,0x4(%esp)
 860f684:	89 04 24             	mov    %eax,(%esp)
 860f687:	e8 c3 c0 f3 ff       	call   854b74f <_ZSt9make_pairIRmRjESt4pairINSt17__decay_and_stripIT_E6__typeENS3_IT0_E6__typeEEOS4_OS7_>
 860f68c:	83 ec 04             	sub    $0x4,%esp
 860f68f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 860f692:	89 44 24 04          	mov    %eax,0x4(%esp)
 860f696:	8d 45 e8             	lea    -0x18(%ebp),%eax
 860f699:	89 04 24             	mov    %eax,(%esp)
 860f69c:	e8 47 24 00 00       	call   8611ae8 <_ZNSt4pairIKmjEC1ImjEEOS_IT_T0_E>
 860f6a1:	8b 45 08             	mov    0x8(%ebp),%eax
 860f6a4:	8d 48 10             	lea    0x10(%eax),%ecx
 860f6a7:	8d 45 e0             	lea    -0x20(%ebp),%eax
 860f6aa:	8d 55 e8             	lea    -0x18(%ebp),%edx
 860f6ad:	89 54 24 08          	mov    %edx,0x8(%esp)
 860f6b1:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 860f6b5:	89 04 24             	mov    %eax,(%esp)
 860f6b8:	e8 5b 24 00 00       	call   8611b18 <_ZNSt3mapImjSt4lessImESaISt4pairIKmjEEE6insertERKS4_>
 860f6bd:	83 ec 04             	sub    $0x4,%esp
 860f6c0:	eb 1a                	jmp    860f6dc <_ZN24CVendingMachineStatistic13addOutputItemEmj+0x138>
 860f6c2:	8d 45 c8             	lea    -0x38(%ebp),%eax
 860f6c5:	89 04 24             	mov    %eax,(%esp)
 860f6c8:	e8 77 24 00 00       	call   8611b44 <_ZNKSt17_Rb_tree_iteratorISt4pairIKmjEEptEv>
 860f6cd:	8b 48 04             	mov    0x4(%eax),%ecx
 860f6d0:	8b 55 10             	mov    0x10(%ebp),%edx
 860f6d3:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 860f6d6:	89 50 04             	mov    %edx,0x4(%eax)
 860f6d9:	eb 01                	jmp    860f6dc <_ZN24CVendingMachineStatistic13addOutputItemEmj+0x138>
 860f6db:	90                   	nop
 860f6dc:	c9                   	leave
 860f6dd:	c3                   	ret

```

```c
// CVendingMachineStatistic::addOutputItem @ 0x860f5a4

/* CVendingMachineStatistic::addOutputItem(unsigned long, unsigned int) */

void __thiscall
CVendingMachineStatistic::addOutputItem(CVendingMachineStatistic *this,ulong param_1,uint param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  _Rb_tree_iterator<std::pair<unsigned_long_const,unsigned_int>> local_3c [4];
  undefined1 local_38 [4];
  undefined4 local_34;
  undefined4 local_30;
  __normal_iterator local_2c [4];
  map<unsigned_long,unsigned_int,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,unsigned_int>>>
  local_28 [4];
  pair local_24 [8];
  pair<unsigned_long_const,unsigned_int> local_1c [8];
  ulong local_14 [4];
  
  std::vector<unsigned_long,std::allocator<unsigned_long>>::end();
  std::vector<unsigned_long,std::allocator<unsigned_long>>::begin();
  std::
  find<__gnu_cxx::__normal_iterator<unsigned_long*,std::vector<unsigned_long,std::allocator<unsigned_long>>>,unsigned_long>
            (local_38,local_30,local_34,&param_1);
  std::vector<unsigned_long,std::allocator<unsigned_long>>::end();
  bVar1 = __gnu_cxx::operator==(local_38,local_2c);
  if (!bVar1) {
    std::
    map<unsigned_long,unsigned_int,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,unsigned_int>>>
    ::find((ulong *)local_3c);
    std::
    map<unsigned_long,unsigned_int,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,unsigned_int>>>
    ::end(local_28);
    cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_long_const,unsigned_int>>::operator==
                      (local_3c,(_Rb_tree_iterator *)local_28);
    if (cVar2 == '\0') {
      iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_long_const,unsigned_int>>::operator->
                        (local_3c);
      *(uint *)(iVar3 + 4) = *(int *)(iVar3 + 4) + param_2;
    }
    else {
      std::make_pair<unsigned_long&,unsigned_int&>(local_14,&param_1);
      std::pair<unsigned_long_const,unsigned_int>::pair<unsigned_long,unsigned_int>
                (local_1c,(pair *)local_14);
      std::
      map<unsigned_long,unsigned_int,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,unsigned_int>>>
      ::insert(local_24);
    }
  }
  return;
}

```

---

## updateDataIntoDB

```asm
// === 0860f6de CVendingMachineStatistic::updateDataIntoDB  [0x0860f6de-0x860f8ac] ===
 860f6de:	55                   	push   %ebp
 860f6df:	89 e5                	mov    %esp,%ebp
 860f6e1:	56                   	push   %esi
 860f6e2:	53                   	push   %ebx
 860f6e3:	83 ec 30             	sub    $0x30,%esp
 860f6e6:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 860f6eb:	c7 44 24 08 24 06 00 	movl   $0x624,0x8(%esp)
 860f6f2:	00 
 860f6f3:	c7 44 24 04 63 02 ce 	movl   $0x8ce0263,0x4(%esp)
 860f6fa:	08 
 860f6fb:	89 04 24             	mov    %eax,(%esp)
 860f6fe:	e8 83 03 c8 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 860f703:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 860f70a:	00 
 860f70b:	89 44 24 04          	mov    %eax,0x4(%esp)
 860f70f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 860f712:	89 04 24             	mov    %eax,(%esp)
 860f715:	e8 0c 95 ab ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 860f71a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 860f71d:	89 04 24             	mov    %eax,(%esp)
 860f720:	e8 21 95 ab ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 860f725:	c7 44 24 04 63 01 00 	movl   $0x163,0x4(%esp)
 860f72c:	00 
 860f72d:	89 04 24             	mov    %eax,(%esp)
 860f730:	e8 21 95 ab ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 860f735:	8d 45 e8             	lea    -0x18(%ebp),%eax
 860f738:	89 04 24             	mov    %eax,(%esp)
 860f73b:	e8 06 95 ab ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 860f740:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 860f747:	ff 
 860f748:	89 04 24             	mov    %eax,(%esp)
 860f74b:	e8 06 95 ab ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 860f750:	8b 45 08             	mov    0x8(%ebp),%eax
 860f753:	8b 58 0c             	mov    0xc(%eax),%ebx
 860f756:	8d 45 e8             	lea    -0x18(%ebp),%eax
 860f759:	89 04 24             	mov    %eax,(%esp)
 860f75c:	e8 e5 94 ab ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 860f761:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 860f765:	89 04 24             	mov    %eax,(%esp)
 860f768:	e8 25 2b ad ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 860f76d:	8b 45 08             	mov    0x8(%ebp),%eax
 860f770:	83 c0 10             	add    $0x10,%eax
 860f773:	89 04 24             	mov    %eax,(%esp)
 860f776:	e8 d7 23 00 00       	call   8611b52 <_ZNKSt3mapImjSt4lessImESaISt4pairIKmjEEE4sizeEv>
 860f77b:	89 c3                	mov    %eax,%ebx
 860f77d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 860f780:	89 04 24             	mov    %eax,(%esp)
 860f783:	e8 be 94 ab ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 860f788:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 860f78c:	89 04 24             	mov    %eax,(%esp)
 860f78f:	e8 fe 2a ad ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 860f794:	8b 45 08             	mov    0x8(%ebp),%eax
 860f797:	8d 50 10             	lea    0x10(%eax),%edx
 860f79a:	8d 45 f0             	lea    -0x10(%ebp),%eax
 860f79d:	89 54 24 04          	mov    %edx,0x4(%esp)
 860f7a1:	89 04 24             	mov    %eax,(%esp)
 860f7a4:	e8 bd 23 00 00       	call   8611b66 <_ZNSt3mapImjSt4lessImESaISt4pairIKmjEEE5beginEv>
 860f7a9:	83 ec 04             	sub    $0x4,%esp
 860f7ac:	8d 45 f0             	lea    -0x10(%ebp),%eax
 860f7af:	89 44 24 04          	mov    %eax,0x4(%esp)
 860f7b3:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 860f7b6:	89 04 24             	mov    %eax,(%esp)
 860f7b9:	e8 ce 23 00 00       	call   8611b8c <_ZNSt23_Rb_tree_const_iteratorISt4pairIKmjEEC1ERKSt17_Rb_tree_iteratorIS2_E>
 860f7be:	8b 45 08             	mov    0x8(%ebp),%eax
 860f7c1:	8d 50 10             	lea    0x10(%eax),%edx
 860f7c4:	8d 45 f4             	lea    -0xc(%ebp),%eax
 860f7c7:	89 54 24 04          	mov    %edx,0x4(%esp)
 860f7cb:	89 04 24             	mov    %eax,(%esp)
 860f7ce:	e8 db 22 00 00       	call   8611aae <_ZNSt3mapImjSt4lessImESaISt4pairIKmjEEE3endEv>
 860f7d3:	83 ec 04             	sub    $0x4,%esp
 860f7d6:	8d 45 f4             	lea    -0xc(%ebp),%eax
 860f7d9:	89 44 24 04          	mov    %eax,0x4(%esp)
 860f7dd:	8d 45 e0             	lea    -0x20(%ebp),%eax
 860f7e0:	89 04 24             	mov    %eax,(%esp)
 860f7e3:	e8 a4 23 00 00       	call   8611b8c <_ZNSt23_Rb_tree_const_iteratorISt4pairIKmjEEC1ERKSt17_Rb_tree_iteratorIS2_E>
 860f7e8:	eb 54                	jmp    860f83e <_ZN24CVendingMachineStatistic16updateDataIntoDBEv+0x160>
 860f7ea:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 860f7ed:	89 04 24             	mov    %eax,(%esp)
 860f7f0:	e8 d9 23 00 00       	call   8611bce <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKmjEEptEv>
 860f7f5:	8b 18                	mov    (%eax),%ebx
 860f7f7:	8d 45 e8             	lea    -0x18(%ebp),%eax
 860f7fa:	89 04 24             	mov    %eax,(%esp)
 860f7fd:	e8 44 94 ab ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 860f802:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 860f806:	89 04 24             	mov    %eax,(%esp)
 860f809:	e8 98 b5 c1 ff       	call   822ada6 <_ZN12CStreamGuardlsEm>
 860f80e:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 860f811:	89 04 24             	mov    %eax,(%esp)
 860f814:	e8 b5 23 00 00       	call   8611bce <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKmjEEptEv>
 860f819:	8b 58 04             	mov    0x4(%eax),%ebx
 860f81c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 860f81f:	89 04 24             	mov    %eax,(%esp)
 860f822:	e8 1f 94 ab ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 860f827:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 860f82b:	89 04 24             	mov    %eax,(%esp)
 860f82e:	e8 5f 2a ad ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 860f833:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 860f836:	89 04 24             	mov    %eax,(%esp)
 860f839:	e8 72 23 00 00       	call   8611bb0 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKmjEEppEv>
 860f83e:	8d 45 e0             	lea    -0x20(%ebp),%eax
 860f841:	89 44 24 04          	mov    %eax,0x4(%esp)
 860f845:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 860f848:	89 04 24             	mov    %eax,(%esp)
 860f84b:	e8 4c 23 00 00       	call   8611b9c <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKmjEEneERKS3_>
 860f850:	84 c0                	test   %al,%al
 860f852:	75 96                	jne    860f7ea <_ZN24CVendingMachineStatistic16updateDataIntoDBEv+0x10c>
 860f854:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 860f859:	8d 55 e8             	lea    -0x18(%ebp),%edx
 860f85c:	89 54 24 08          	mov    %edx,0x8(%esp)
 860f860:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 860f867:	00 
 860f868:	89 04 24             	mov    %eax,(%esp)
 860f86b:	e8 6e 17 f6 ff       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 860f870:	8b 45 08             	mov    0x8(%ebp),%eax
 860f873:	89 04 24             	mov    %eax,(%esp)
 860f876:	e8 31 0d 00 00       	call   86105ac <_ZN24CVendingMachineStatistic5_initEv>
 860f87b:	eb 1b                	jmp    860f898 <_ZN24CVendingMachineStatistic16updateDataIntoDBEv+0x1ba>
 860f87d:	89 d3                	mov    %edx,%ebx
 860f87f:	89 c6                	mov    %eax,%esi
 860f881:	8d 45 e8             	lea    -0x18(%ebp),%eax
 860f884:	89 04 24             	mov    %eax,(%esp)
 860f887:	e8 46 d0 00 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 860f88c:	89 f0                	mov    %esi,%eax
 860f88e:	89 da                	mov    %ebx,%edx
 860f890:	89 04 24             	mov    %eax,(%esp)
 860f893:	e8 b8 3e 4d 00       	call   8ae3750 <_Unwind_Resume>
 860f898:	8d 45 e8             	lea    -0x18(%ebp),%eax
 860f89b:	89 04 24             	mov    %eax,(%esp)
 860f89e:	e8 2f d0 00 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 860f8a3:	8d 65 f8             	lea    -0x8(%ebp),%esp
 860f8a6:	83 c4 00             	add    $0x0,%esp
 860f8a9:	5b                   	pop    %ebx
 860f8aa:	5e                   	pop    %esi
 860f8ab:	5d                   	pop    %ebp
 860f8ac:	c3                   	ret

```

```c
// CVendingMachineStatistic::updateDataIntoDB @ 0x860f6de

/* CVendingMachineStatistic::updateDataIntoDB() */

void __thiscall CVendingMachineStatistic::updateDataIntoDB(CVendingMachineStatistic *this)

{
  ulong uVar1;
  char cVar2;
  Stream *pSVar3;
  CStreamGuard *pCVar4;
  uint uVar5;
  ulong *puVar6;
  int iVar7;
  _Rb_tree_const_iterator<std::pair<unsigned_long_const,unsigned_int>> local_24 [4];
  _Rb_tree_const_iterator<std::pair<unsigned_long_const,unsigned_int>> local_20 [4];
  CStreamGuard local_1c [8];
  map<unsigned_long,unsigned_int,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,unsigned_int>>>
  local_14 [4];
  map<unsigned_long,unsigned_int,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,unsigned_int>>>
  local_10 [4];
  
  pSVar3 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"Statistics.cpp",0x624);
  CStreamGuard::CStreamGuard(local_1c,pSVar3,true);
  pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
                    /* try { // try from 0860f730 to 0860f87a has its CatchHandler @ 0860f87d */
  CStreamGuard::operator<<(pCVar4,0x163);
  pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
  CStreamGuard::operator<<(pCVar4,-1);
  uVar5 = *(uint *)(this + 0xc);
  pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
  CStreamGuard::operator<<(pCVar4,uVar5);
  uVar5 = std::
          map<unsigned_long,unsigned_int,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,unsigned_int>>>
          ::size((map<unsigned_long,unsigned_int,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,unsigned_int>>>
                  *)(this + 0x10));
  pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
  CStreamGuard::operator<<(pCVar4,uVar5);
  std::
  map<unsigned_long,unsigned_int,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,unsigned_int>>>
  ::begin(local_14);
  std::_Rb_tree_const_iterator<std::pair<unsigned_long_const,unsigned_int>>::_Rb_tree_const_iterator
            (local_20,(_Rb_tree_iterator *)local_14);
  std::
  map<unsigned_long,unsigned_int,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,unsigned_int>>>
  ::end(local_10);
  std::_Rb_tree_const_iterator<std::pair<unsigned_long_const,unsigned_int>>::_Rb_tree_const_iterator
            (local_24,(_Rb_tree_iterator *)local_10);
  while( true ) {
    cVar2 = std::_Rb_tree_const_iterator<std::pair<unsigned_long_const,unsigned_int>>::operator!=
                      (local_20,(_Rb_tree_const_iterator *)local_24);
    if (cVar2 == '\0') break;
    puVar6 = (ulong *)std::_Rb_tree_const_iterator<std::pair<unsigned_long_const,unsigned_int>>::
                      operator->(local_20);
    uVar1 = *puVar6;
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
    CStreamGuard::operator<<(pCVar4,uVar1);
    iVar7 = std::_Rb_tree_const_iterator<std::pair<unsigned_long_const,unsigned_int>>::operator->
                      (local_20);
    uVar5 = *(uint *)(iVar7 + 4);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
    CStreamGuard::operator<<(pCVar4,uVar5);
    std::_Rb_tree_const_iterator<std::pair<unsigned_long_const,unsigned_int>>::operator++(local_20);
  }
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,4,local_1c);
  _init(this);
  CStreamGuard::~CStreamGuard(local_1c);
  return;
}

```

