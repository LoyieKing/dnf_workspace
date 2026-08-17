# online_preliminary__COnlinePreliminaryTeamMgr

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 7

---

## COnlinePreliminaryTeamMgr

```asm
// === 0858860c online_preliminary::COnlinePreliminaryTeamMgr::COnlinePreliminaryTeamMgr  [0x0858860c-0x85886fd] ===
 858860c:	55                   	push   %ebp
 858860d:	89 e5                	mov    %esp,%ebp
 858860f:	57                   	push   %edi
 8588610:	56                   	push   %esi
 8588611:	53                   	push   %ebx
 8588612:	83 ec 3c             	sub    $0x3c,%esp
 8588615:	8b 45 08             	mov    0x8(%ebp),%eax
 8588618:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 858861e:	8b 45 08             	mov    0x8(%ebp),%eax
 8588621:	83 c0 04             	add    $0x4,%eax
 8588624:	89 04 24             	mov    %eax,(%esp)
 8588627:	e8 20 0e 00 00       	call   858944c <_ZNSt3mapIiPN18online_preliminary22COnlinePreliminaryTeamESt4lessIiESaISt4pairIKiS2_EEEC1Ev>
 858862c:	c7 44 24 04 87 1a d0 	movl   $0x8d01a87,0x4(%esp)
 8588633:	08 
 8588634:	c7 04 24 30 00 00 00 	movl   $0x30,(%esp)
 858863b:	e8 10 d5 19 00       	call   8725b50 <_ZnwjRKSt9nothrow_t>
 8588640:	89 c3                	mov    %eax,%ebx
 8588642:	89 d8                	mov    %ebx,%eax
 8588644:	85 c0                	test   %eax,%eax
 8588646:	74 41                	je     8588689 <_ZN18online_preliminary25COnlinePreliminaryTeamMgrC1Ev+0x7d>
 8588648:	89 5d e4             	mov    %ebx,-0x1c(%ebp)
 858864b:	8b 75 e4             	mov    -0x1c(%ebp),%esi
 858864e:	b8 00 00 00 00       	mov    $0x0,%eax
 8588653:	ba 0c 00 00 00       	mov    $0xc,%edx
 8588658:	89 f7                	mov    %esi,%edi
 858865a:	89 d1                	mov    %edx,%ecx
 858865c:	f3 ab                	rep stos %eax,%es:(%edi)
 858865e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8588661:	89 04 24             	mov    %eax,(%esp)
 8588664:	e8 c5 07 00 00       	call   8588e2e <_ZN18online_preliminary12CTeamFactoryC1Ev>
 8588669:	eb 1a                	jmp    8588685 <_ZN18online_preliminary25COnlinePreliminaryTeamMgrC1Ev+0x79>
 858866b:	89 d6                	mov    %edx,%esi
 858866d:	89 c7                	mov    %eax,%edi
 858866f:	c7 44 24 04 87 1a d0 	movl   $0x8d01a87,0x4(%esp)
 8588676:	08 
 8588677:	89 1c 24             	mov    %ebx,(%esp)
 858867a:	e8 61 c1 19 00       	call   87247e0 <_ZdlPvRKSt9nothrow_t>
 858867f:	89 f8                	mov    %edi,%eax
 8588681:	89 f2                	mov    %esi,%edx
 8588683:	eb 52                	jmp    85886d7 <_ZN18online_preliminary25COnlinePreliminaryTeamMgrC1Ev+0xcb>
 8588685:	89 d8                	mov    %ebx,%eax
 8588687:	eb 02                	jmp    858868b <_ZN18online_preliminary25COnlinePreliminaryTeamMgrC1Ev+0x7f>
 8588689:	89 d8                	mov    %ebx,%eax
 858868b:	8b 55 08             	mov    0x8(%ebp),%edx
 858868e:	89 02                	mov    %eax,(%edx)
 8588690:	8b 45 08             	mov    0x8(%ebp),%eax
 8588693:	8b 00                	mov    (%eax),%eax
 8588695:	85 c0                	test   %eax,%eax
 8588697:	75 5c                	jne    85886f5 <_ZN18online_preliminary25COnlinePreliminaryTeamMgrC1Ev+0xe9>
 8588699:	c7 44 24 18 d9 00 00 	movl   $0xd9,0x18(%esp)
 85886a0:	00 
 85886a1:	c7 44 24 14 60 c6 ca 	movl   $0x8cac660,0x14(%esp)
 85886a8:	08 
 85886a9:	c7 44 24 10 3c b9 ca 	movl   $0x8cab93c,0x10(%esp)
 85886b0:	08 
 85886b1:	c7 44 24 0c d9 00 00 	movl   $0xd9,0xc(%esp)
 85886b8:	00 
 85886b9:	c7 44 24 08 60 c6 ca 	movl   $0x8cac660,0x8(%esp)
 85886c0:	08 
 85886c1:	c7 44 24 04 e0 b8 ca 	movl   $0x8cab8e0,0x4(%esp)
 85886c8:	08 
 85886c9:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 85886d0:	e8 35 b5 54 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 85886d5:	eb 1e                	jmp    85886f5 <_ZN18online_preliminary25COnlinePreliminaryTeamMgrC1Ev+0xe9>
 85886d7:	89 d3                	mov    %edx,%ebx
 85886d9:	89 c6                	mov    %eax,%esi
 85886db:	8b 45 08             	mov    0x8(%ebp),%eax
 85886de:	83 c0 04             	add    $0x4,%eax
 85886e1:	89 04 24             	mov    %eax,(%esp)
 85886e4:	e8 31 07 00 00       	call   8588e1a <_ZNSt3mapIiPN18online_preliminary22COnlinePreliminaryTeamESt4lessIiESaISt4pairIKiS2_EEED1Ev>
 85886e9:	89 f0                	mov    %esi,%eax
 85886eb:	89 da                	mov    %ebx,%edx
 85886ed:	89 04 24             	mov    %eax,(%esp)
 85886f0:	e8 5b b0 55 00       	call   8ae3750 <_Unwind_Resume>
 85886f5:	83 c4 3c             	add    $0x3c,%esp
 85886f8:	5b                   	pop    %ebx
 85886f9:	5e                   	pop    %esi
 85886fa:	5f                   	pop    %edi
 85886fb:	5d                   	pop    %ebp
 85886fc:	c3                   	ret
 85886fd:	90                   	nop

```

```c
// online_preliminary::COnlinePreliminaryTeamMgr::COnlinePreliminaryTeamMgr @ 0x858860c

/* online_preliminary::COnlinePreliminaryTeamMgr::COnlinePreliminaryTeamMgr() */

void __thiscall
online_preliminary::COnlinePreliminaryTeamMgr::COnlinePreliminaryTeamMgr
          (COnlinePreliminaryTeamMgr *this)

{
  CTeamFactory *this_00;
  int iVar1;
  CTeamFactory *pCVar2;
  byte bVar3;
  
  bVar3 = 0;
  *(undefined4 *)this = 0;
  std::
  map<int,online_preliminary::COnlinePreliminaryTeam*,std::less<int>,std::allocator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>>>
  ::map((map<int,online_preliminary::COnlinePreliminaryTeam*,std::less<int>,std::allocator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>>>
         *)(this + 4));
  this_00 = operator_new(0x30,(nothrow_t *)&std::nothrow);
  if (this_00 != (CTeamFactory *)0x0) {
    pCVar2 = this_00;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)pCVar2 = 0;
      pCVar2 = pCVar2 + (uint)bVar3 * -8 + 4;
    }
                    /* try { // try from 08588664 to 08588668 has its CatchHandler @ 0858866b */
    CTeamFactory::CTeamFactory(this_00);
  }
  *(CTeamFactory **)this = this_00;
  if (*(int *)this == 0) {
                    /* try { // try from 085886d0 to 085886d4 has its CatchHandler @ 085886d7 */
    LogManager::logFormat
              (1,"OnlinePreliminaryTeam.cpp",
               "online_preliminary::COnlinePreliminaryTeamMgr::COnlinePreliminaryTeamMgr()",0xd9,
               "memory error func(%s) line(%d)",
               "online_preliminary::COnlinePreliminaryTeamMgr::COnlinePreliminaryTeamMgr()",0xd9);
  }
  return;
}

```

---

## FindTeam

```asm
// === 0858875e online_preliminary::COnlinePreliminaryTeamMgr::FindTeam  [0x0858875e-0x85887c7] ===
 858875e:	55                   	push   %ebp
 858875f:	89 e5                	mov    %esp,%ebp
 8588761:	83 ec 28             	sub    $0x28,%esp
 8588764:	8b 45 08             	mov    0x8(%ebp),%eax
 8588767:	8d 48 04             	lea    0x4(%eax),%ecx
 858876a:	8d 45 f0             	lea    -0x10(%ebp),%eax
 858876d:	8d 55 0c             	lea    0xc(%ebp),%edx
 8588770:	89 54 24 08          	mov    %edx,0x8(%esp)
 8588774:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8588778:	89 04 24             	mov    %eax,(%esp)
 858877b:	e8 a8 0f 00 00       	call   8589728 <_ZNSt3mapIiPN18online_preliminary22COnlinePreliminaryTeamESt4lessIiESaISt4pairIKiS2_EEE4findERS6_>
 8588780:	83 ec 04             	sub    $0x4,%esp
 8588783:	8b 45 08             	mov    0x8(%ebp),%eax
 8588786:	8d 50 04             	lea    0x4(%eax),%edx
 8588789:	8d 45 f4             	lea    -0xc(%ebp),%eax
 858878c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8588790:	89 04 24             	mov    %eax,(%esp)
 8588793:	e8 bc 0f 00 00       	call   8589754 <_ZNSt3mapIiPN18online_preliminary22COnlinePreliminaryTeamESt4lessIiESaISt4pairIKiS2_EEE3endEv>
 8588798:	83 ec 04             	sub    $0x4,%esp
 858879b:	8d 45 f4             	lea    -0xc(%ebp),%eax
 858879e:	89 44 24 04          	mov    %eax,0x4(%esp)
 85887a2:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85887a5:	89 04 24             	mov    %eax,(%esp)
 85887a8:	e8 cd 0f 00 00       	call   858977a <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN18online_preliminary22COnlinePreliminaryTeamEEEneERKS6_>
 85887ad:	84 c0                	test   %al,%al
 85887af:	74 10                	je     85887c1 <_ZN18online_preliminary25COnlinePreliminaryTeamMgr8FindTeamEi+0x63>
 85887b1:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85887b4:	89 04 24             	mov    %eax,(%esp)
 85887b7:	e8 d2 0f 00 00       	call   858978e <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN18online_preliminary22COnlinePreliminaryTeamEEEptEv>
 85887bc:	8b 40 04             	mov    0x4(%eax),%eax
 85887bf:	eb 05                	jmp    85887c6 <_ZN18online_preliminary25COnlinePreliminaryTeamMgr8FindTeamEi+0x68>
 85887c1:	b8 00 00 00 00       	mov    $0x0,%eax
 85887c6:	c9                   	leave
 85887c7:	c3                   	ret

```

```c
// online_preliminary::COnlinePreliminaryTeamMgr::FindTeam @ 0x858875e

/* online_preliminary::COnlinePreliminaryTeamMgr::FindTeam(int) */

undefined4 online_preliminary::COnlinePreliminaryTeamMgr::FindTeam(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  _Rb_tree_iterator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>> local_14 [4];
  map<int,online_preliminary::COnlinePreliminaryTeam*,std::less<int>,std::allocator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>>>
  local_10 [12];
  
  std::
  map<int,online_preliminary::COnlinePreliminaryTeam*,std::less<int>,std::allocator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>>>
  ::find((int *)local_14);
  std::
  map<int,online_preliminary::COnlinePreliminaryTeam*,std::less<int>,std::allocator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>>::
          operator!=(local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>>
            ::operator->(local_14);
    uVar3 = *(undefined4 *)(iVar2 + 4);
  }
  return uVar3;
}

```

---

## OnEnterUser

```asm
// === 085887c8 online_preliminary::COnlinePreliminaryTeamMgr::OnEnterUser  [0x085887c8-0x8588ae7] ===
 85887c8:	55                   	push   %ebp
 85887c9:	89 e5                	mov    %esp,%ebp
 85887cb:	56                   	push   %esi
 85887cc:	53                   	push   %ebx
 85887cd:	83 ec 50             	sub    $0x50,%esp
 85887d0:	8b 45 10             	mov    0x10(%ebp),%eax
 85887d3:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85887d6:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85887d9:	8b 45 08             	mov    0x8(%ebp),%eax
 85887dc:	8d 48 04             	lea    0x4(%eax),%ecx
 85887df:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85887e2:	89 54 24 08          	mov    %edx,0x8(%esp)
 85887e6:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 85887ea:	89 04 24             	mov    %eax,(%esp)
 85887ed:	e8 36 0f 00 00       	call   8589728 <_ZNSt3mapIiPN18online_preliminary22COnlinePreliminaryTeamESt4lessIiESaISt4pairIKiS2_EEE4findERS6_>
 85887f2:	83 ec 04             	sub    $0x4,%esp
 85887f5:	8b 45 08             	mov    0x8(%ebp),%eax
 85887f8:	8d 50 04             	lea    0x4(%eax),%edx
 85887fb:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85887fe:	89 54 24 04          	mov    %edx,0x4(%esp)
 8588802:	89 04 24             	mov    %eax,(%esp)
 8588805:	e8 4a 0f 00 00       	call   8589754 <_ZNSt3mapIiPN18online_preliminary22COnlinePreliminaryTeamESt4lessIiESaISt4pairIKiS2_EEE3endEv>
 858880a:	83 ec 04             	sub    $0x4,%esp
 858880d:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8588810:	89 44 24 04          	mov    %eax,0x4(%esp)
 8588814:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8588817:	89 04 24             	mov    %eax,(%esp)
 858881a:	e8 5b 0f 00 00       	call   858977a <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN18online_preliminary22COnlinePreliminaryTeamEEEneERKS6_>
 858881f:	84 c0                	test   %al,%al
 8588821:	74 38                	je     858885b <_ZN18online_preliminary25COnlinePreliminaryTeamMgr11OnEnterUserEP5CUserPc+0x93>
 8588823:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8588826:	89 04 24             	mov    %eax,(%esp)
 8588829:	e8 60 0f 00 00       	call   858978e <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN18online_preliminary22COnlinePreliminaryTeamEEEptEv>
 858882e:	8b 50 04             	mov    0x4(%eax),%edx
 8588831:	8b 45 0c             	mov    0xc(%ebp),%eax
 8588834:	89 54 24 04          	mov    %edx,0x4(%esp)
 8588838:	89 04 24             	mov    %eax,(%esp)
 858883b:	e8 7a 05 00 00       	call   8588dba <_ZN15CUserCharacInfo33SetCurCharacOnlinePreliminaryTeamEPN18online_preliminary22COnlinePreliminaryTeamE>
 8588840:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8588843:	89 04 24             	mov    %eax,(%esp)
 8588846:	e8 43 0f 00 00       	call   858978e <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN18online_preliminary22COnlinePreliminaryTeamEEEptEv>
 858884b:	8b 40 04             	mov    0x4(%eax),%eax
 858884e:	89 04 24             	mov    %eax,(%esp)
 8588851:	e8 40 05 00 00       	call   8588d96 <_ZN18online_preliminary22COnlinePreliminaryTeam24IncreaseCurrentUserCountEv>
 8588856:	e9 87 01 00 00       	jmp    85889e2 <_ZN18online_preliminary25COnlinePreliminaryTeamMgr11OnEnterUserEP5CUserPc+0x21a>
 858885b:	8b 45 08             	mov    0x8(%ebp),%eax
 858885e:	8b 00                	mov    (%eax),%eax
 8588860:	89 04 24             	mov    %eax,(%esp)
 8588863:	e8 70 05 00 00       	call   8588dd8 <_ZN18online_preliminary12CTeamFactory7AcquireEv>
 8588868:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 858886b:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 858886e:	85 c0                	test   %eax,%eax
 8588870:	75 0a                	jne    858887c <_ZN18online_preliminary25COnlinePreliminaryTeamMgr11OnEnterUserEP5CUserPc+0xb4>
 8588872:	bb 00 00 00 00       	mov    $0x0,%ebx
 8588877:	e9 60 02 00 00       	jmp    8588adc <_ZN18online_preliminary25COnlinePreliminaryTeamMgr11OnEnterUserEP5CUserPc+0x314>
 858887c:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 858887f:	89 04 24             	mov    %eax,(%esp)
 8588882:	e8 03 fb ff ff       	call   858838a <_ZN18online_preliminary22COnlinePreliminaryTeam5ResetEv>
 8588887:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 858888a:	8b 45 0c             	mov    0xc(%ebp),%eax
 858888d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8588891:	89 04 24             	mov    %eax,(%esp)
 8588894:	e8 21 05 00 00       	call   8588dba <_ZN15CUserCharacInfo33SetCurCharacOnlinePreliminaryTeamEPN18online_preliminary22COnlinePreliminaryTeamE>
 8588899:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 858889c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85888a3:	00 
 85888a4:	89 04 24             	mov    %eax,(%esp)
 85888a7:	e8 dc 04 00 00       	call   8588d88 <_ZN18online_preliminary22COnlinePreliminaryTeam19SetCurrentUserCountEi>
 85888ac:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 85888af:	8b 55 10             	mov    0x10(%ebp),%edx
 85888b2:	89 54 24 04          	mov    %edx,0x4(%esp)
 85888b6:	89 04 24             	mov    %eax,(%esp)
 85888b9:	e8 fa f9 ff ff       	call   85882b8 <_ZN18online_preliminary22COnlinePreliminaryTeam23loadDataPreliminaryTeamEPc>
 85888be:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85888c1:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85888c4:	8d 4d c4             	lea    -0x3c(%ebp),%ecx
 85888c7:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 85888cb:	89 54 24 04          	mov    %edx,0x4(%esp)
 85888cf:	89 04 24             	mov    %eax,(%esp)
 85888d2:	e8 c4 0e 00 00       	call   858979b <_ZSt9make_pairIRiRPN18online_preliminary22COnlinePreliminaryTeamEESt4pairINSt17__decay_and_stripIT_E6__typeENS6_IT0_E6__typeEEOS7_OSA_>
 85888d7:	83 ec 04             	sub    $0x4,%esp
 85888da:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85888dd:	89 44 24 04          	mov    %eax,0x4(%esp)
 85888e1:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85888e4:	89 04 24             	mov    %eax,(%esp)
 85888e7:	e8 ee 0e 00 00       	call   85897da <_ZNSt4pairIKiPN18online_preliminary22COnlinePreliminaryTeamEEC1IiS3_EEOS_IT_T0_E>
 85888ec:	8b 45 08             	mov    0x8(%ebp),%eax
 85888ef:	8d 48 04             	lea    0x4(%eax),%ecx
 85888f2:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85888f5:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 85888f8:	89 54 24 08          	mov    %edx,0x8(%esp)
 85888fc:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8588900:	89 04 24             	mov    %eax,(%esp)
 8588903:	e8 02 0f 00 00       	call   858980a <_ZNSt3mapIiPN18online_preliminary22COnlinePreliminaryTeamESt4lessIiESaISt4pairIKiS2_EEE6insertERKS7_>
 8588908:	83 ec 04             	sub    $0x4,%esp
 858890b:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8588910:	c7 44 24 08 06 01 00 	movl   $0x106,0x8(%esp)
 8588917:	00 
 8588918:	c7 44 24 04 e0 b8 ca 	movl   $0x8cab8e0,0x4(%esp)
 858891f:	08 
 8588920:	89 04 24             	mov    %eax,(%esp)
 8588923:	e8 5e 71 d0 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8588928:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 858892f:	00 
 8588930:	89 44 24 04          	mov    %eax,0x4(%esp)
 8588934:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8588937:	89 04 24             	mov    %eax,(%esp)
 858893a:	e8 e7 02 b4 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 858893f:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8588942:	89 04 24             	mov    %eax,(%esp)
 8588945:	e8 fc 02 b4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 858894a:	c7 44 24 04 ec 01 00 	movl   $0x1ec,0x4(%esp)
 8588951:	00 
 8588952:	89 04 24             	mov    %eax,(%esp)
 8588955:	e8 fc 02 b4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 858895a:	8d 45 bc             	lea    -0x44(%ebp),%eax
 858895d:	89 04 24             	mov    %eax,(%esp)
 8588960:	e8 e1 02 b4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8588965:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 858896c:	ff 
 858896d:	89 04 24             	mov    %eax,(%esp)
 8588970:	e8 e1 02 b4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8588975:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8588978:	8b 18                	mov    (%eax),%ebx
 858897a:	8d 45 bc             	lea    -0x44(%ebp),%eax
 858897d:	89 04 24             	mov    %eax,(%esp)
 8588980:	e8 c1 02 b4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8588985:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8588989:	89 04 24             	mov    %eax,(%esp)
 858898c:	e8 c5 02 b4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8588991:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8588996:	8d 55 bc             	lea    -0x44(%ebp),%edx
 8588999:	89 54 24 08          	mov    %edx,0x8(%esp)
 858899d:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 85889a4:	00 
 85889a5:	89 04 24             	mov    %eax,(%esp)
 85889a8:	e8 31 86 fe ff       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 85889ad:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85889b0:	8b 00                	mov    (%eax),%eax
 85889b2:	89 04 24             	mov    %eax,(%esp)
 85889b5:	e8 c4 0d 0b 00       	call   863977e <_ZN33Timer_UpdateOnlinePreliminaryTeam15RegistNextTimerEi>
 85889ba:	eb 1b                	jmp    85889d7 <_ZN18online_preliminary25COnlinePreliminaryTeamMgr11OnEnterUserEP5CUserPc+0x20f>
 85889bc:	89 d3                	mov    %edx,%ebx
 85889be:	89 c6                	mov    %eax,%esi
 85889c0:	8d 45 bc             	lea    -0x44(%ebp),%eax
 85889c3:	89 04 24             	mov    %eax,(%esp)
 85889c6:	e8 07 3f 09 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 85889cb:	89 f0                	mov    %esi,%eax
 85889cd:	89 da                	mov    %ebx,%edx
 85889cf:	89 04 24             	mov    %eax,(%esp)
 85889d2:	e8 79 ad 55 00       	call   8ae3750 <_Unwind_Resume>
 85889d7:	8d 45 bc             	lea    -0x44(%ebp),%eax
 85889da:	89 04 24             	mov    %eax,(%esp)
 85889dd:	e8 f0 3e 09 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 85889e2:	8d 45 c8             	lea    -0x38(%ebp),%eax
 85889e5:	89 04 24             	mov    %eax,(%esp)
 85889e8:	e8 5f 53 00 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 85889ed:	8d 45 c8             	lea    -0x38(%ebp),%eax
 85889f0:	89 04 24             	mov    %eax,(%esp)
 85889f3:	e8 ee 2e b4 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 85889f8:	c7 44 24 08 18 01 00 	movl   $0x118,0x8(%esp)
 85889ff:	00 
 8588a00:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8588a07:	00 
 8588a08:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8588a0b:	89 04 24             	mov    %eax,(%esp)
 8588a0e:	e8 e9 2e b4 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8588a13:	8b 45 0c             	mov    0xc(%ebp),%eax
 8588a16:	89 04 24             	mov    %eax,(%esp)
 8588a19:	e8 5e 19 b5 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 8588a1e:	0f b7 c0             	movzwl %ax,%eax
 8588a21:	89 44 24 04          	mov    %eax,0x4(%esp)
 8588a25:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8588a28:	89 04 24             	mov    %eax,(%esp)
 8588a2b:	e8 74 14 b5 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8588a30:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8588a33:	8b 00                	mov    (%eax),%eax
 8588a35:	89 44 24 04          	mov    %eax,0x4(%esp)
 8588a39:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8588a3c:	89 04 24             	mov    %eax,(%esp)
 8588a3f:	e8 f8 2e b4 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8588a44:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8588a47:	83 c0 04             	add    $0x4,%eax
 8588a4a:	89 04 24             	mov    %eax,(%esp)
 8588a4d:	e8 5e 59 af ff       	call   807e3b0 <strlen@plt>
 8588a52:	89 44 24 04          	mov    %eax,0x4(%esp)
 8588a56:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8588a59:	89 04 24             	mov    %eax,(%esp)
 8588a5c:	e8 db 2e b4 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8588a61:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8588a64:	83 c0 04             	add    $0x4,%eax
 8588a67:	89 04 24             	mov    %eax,(%esp)
 8588a6a:	e8 41 59 af ff       	call   807e3b0 <strlen@plt>
 8588a6f:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8588a72:	83 c2 04             	add    $0x4,%edx
 8588a75:	89 44 24 08          	mov    %eax,0x8(%esp)
 8588a79:	89 54 24 04          	mov    %edx,0x4(%esp)
 8588a7d:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8588a80:	89 04 24             	mov    %eax,(%esp)
 8588a83:	e8 5c e9 c2 ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 8588a88:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8588a8f:	00 
 8588a90:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8588a93:	89 04 24             	mov    %eax,(%esp)
 8588a96:	e8 bd 2e b4 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8588a9b:	e8 07 19 b5 ff       	call   80da3a7 <_Z11G_GameWorldv>
 8588aa0:	8d 55 c8             	lea    -0x38(%ebp),%edx
 8588aa3:	89 54 24 04          	mov    %edx,0x4(%esp)
 8588aa7:	89 04 24             	mov    %eax,(%esp)
 8588aaa:	e8 65 01 14 00       	call   86c8c14 <_ZN9GameWorld8send_allER11PacketGuard>
 8588aaf:	bb 01 00 00 00       	mov    $0x1,%ebx
 8588ab4:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8588ab7:	89 04 24             	mov    %eax,(%esp)
 8588aba:	e8 c1 53 00 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8588abf:	eb 1b                	jmp    8588adc <_ZN18online_preliminary25COnlinePreliminaryTeamMgr11OnEnterUserEP5CUserPc+0x314>
 8588ac1:	89 d3                	mov    %edx,%ebx
 8588ac3:	89 c6                	mov    %eax,%esi
 8588ac5:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8588ac8:	89 04 24             	mov    %eax,(%esp)
 8588acb:	e8 b0 53 00 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8588ad0:	89 f0                	mov    %esi,%eax
 8588ad2:	89 da                	mov    %ebx,%edx
 8588ad4:	89 04 24             	mov    %eax,(%esp)
 8588ad7:	e8 74 ac 55 00       	call   8ae3750 <_Unwind_Resume>
 8588adc:	89 d8                	mov    %ebx,%eax
 8588ade:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8588ae1:	83 c4 00             	add    $0x0,%esp
 8588ae4:	5b                   	pop    %ebx
 8588ae5:	5e                   	pop    %esi
 8588ae6:	5d                   	pop    %ebp
 8588ae7:	c3                   	ret

```

```c
// online_preliminary::COnlinePreliminaryTeamMgr::OnEnterUser @ 0x85887c8

/* online_preliminary::COnlinePreliminaryTeamMgr::OnEnterUser(CUser*, char*) */

undefined4 __thiscall
online_preliminary::COnlinePreliminaryTeamMgr::OnEnterUser
          (COnlinePreliminaryTeamMgr *this,CUser *param_1,char *param_2)

{
  COnlinePreliminaryTeam *pCVar1;
  char cVar2;
  int iVar3;
  Stream *pSVar4;
  CStreamGuard *pCVar5;
  uint uVar6;
  size_t sVar7;
  GameWorld *this_00;
  CStreamGuard local_48 [8];
  COnlinePreliminaryTeam *local_40;
  PacketGuard local_3c [12];
  _Rb_tree_iterator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>> local_30 [4];
  map<int,online_preliminary::COnlinePreliminaryTeam*,std::less<int>,std::allocator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>>>
  local_2c [4];
  pair local_28 [8];
  pair<int_const,online_preliminary::COnlinePreliminaryTeam*> local_20 [8];
  int local_18 [2];
  COnlinePreliminaryTeam **local_10;
  
  local_10 = (COnlinePreliminaryTeam **)param_2;
  std::
  map<int,online_preliminary::COnlinePreliminaryTeam*,std::less<int>,std::allocator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>>>
  ::find((int *)local_30);
  std::
  map<int,online_preliminary::COnlinePreliminaryTeam*,std::less<int>,std::allocator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>>>
  ::end(local_2c);
  cVar2 = std::_Rb_tree_iterator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>>::
          operator!=(local_30,(_Rb_tree_iterator *)local_2c);
  if (cVar2 == '\0') {
    local_40 = (COnlinePreliminaryTeam *)CTeamFactory::Acquire(*(CTeamFactory **)this);
    if (local_40 == (COnlinePreliminaryTeam *)0x0) {
      return 0;
    }
    COnlinePreliminaryTeam::Reset(local_40);
    CUserCharacInfo::SetCurCharacOnlinePreliminaryTeam((CUserCharacInfo *)param_1,local_40);
    COnlinePreliminaryTeam::SetCurrentUserCount(local_40,1);
    COnlinePreliminaryTeam::loadDataPreliminaryTeam(local_40,param_2);
    std::make_pair<int&,online_preliminary::COnlinePreliminaryTeam*&>(local_18,local_10);
    std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>::
    pair<int,online_preliminary::COnlinePreliminaryTeam*>(local_20,(pair *)local_18);
    std::
    map<int,online_preliminary::COnlinePreliminaryTeam*,std::less<int>,std::allocator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>>>
    ::insert(local_28);
    pSVar4 = (Stream *)
             StreamPool::Acquire(GlobalData::s_stream_pool,"OnlinePreliminaryTeam.cpp",0x106);
    CStreamGuard::CStreamGuard(local_48,pSVar4,true);
    pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_48);
                    /* try { // try from 08588955 to 085889b9 has its CatchHandler @ 085889bc */
    CStreamGuard::operator<<(pCVar5,0x1ec);
    pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_48);
    CStreamGuard::operator<<(pCVar5,-1);
    pCVar1 = *local_10;
    pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_48);
    CStreamGuard::operator<<(pCVar5,(int)pCVar1);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_48);
    Timer_UpdateOnlinePreliminaryTeam::RegistNextTimer((int)*local_10);
    CStreamGuard::~CStreamGuard(local_48);
  }
  else {
    iVar3 = std::_Rb_tree_iterator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>>
            ::operator->(local_30);
    CUserCharacInfo::SetCurCharacOnlinePreliminaryTeam
              ((CUserCharacInfo *)param_1,*(COnlinePreliminaryTeam **)(iVar3 + 4));
    iVar3 = std::_Rb_tree_iterator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>>
            ::operator->(local_30);
    COnlinePreliminaryTeam::IncreaseCurrentUserCount(*(COnlinePreliminaryTeam **)(iVar3 + 4));
  }
  PacketGuard::PacketGuard(local_3c);
                    /* try { // try from 085889f3 to 08588aae has its CatchHandler @ 08588ac1 */
  InterfacePacketBuf::clear((InterfacePacketBuf *)local_3c);
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_3c,0,0x118);
  uVar6 = CUser::get_unique_id(param_1);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_3c,uVar6 & 0xffff);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_3c,(int)*local_10);
  sVar7 = strlen((char *)(local_10 + 1));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_3c,sVar7);
  sVar7 = strlen((char *)(local_10 + 1));
  InterfacePacketBuf::put_str((InterfacePacketBuf *)local_3c,(char *)(local_10 + 1),sVar7);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_3c,true);
  this_00 = (GameWorld *)G_GameWorld();
  GameWorld::send_all(this_00,local_3c);
  PacketGuard::~PacketGuard(local_3c);
  return 1;
}

```

---

## OnLeaveUser

```asm
// === 08588ae8 online_preliminary::COnlinePreliminaryTeamMgr::OnLeaveUser  [0x08588ae8-0x8588be3] ===
 8588ae8:	55                   	push   %ebp
 8588ae9:	89 e5                	mov    %esp,%ebp
 8588aeb:	83 ec 28             	sub    $0x28,%esp
 8588aee:	8b 45 0c             	mov    0xc(%ebp),%eax
 8588af1:	89 04 24             	mov    %eax,(%esp)
 8588af4:	e8 e9 d2 0b 00       	call   8645de2 <_ZNK15CUserCharacInfo35GetCurCharacOnlinePreliminaryTeamIdEv>
 8588af9:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8588afc:	8b 45 08             	mov    0x8(%ebp),%eax
 8588aff:	8d 48 04             	lea    0x4(%eax),%ecx
 8588b02:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8588b05:	8d 55 f0             	lea    -0x10(%ebp),%edx
 8588b08:	89 54 24 08          	mov    %edx,0x8(%esp)
 8588b0c:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8588b10:	89 04 24             	mov    %eax,(%esp)
 8588b13:	e8 10 0c 00 00       	call   8589728 <_ZNSt3mapIiPN18online_preliminary22COnlinePreliminaryTeamESt4lessIiESaISt4pairIKiS2_EEE4findERS6_>
 8588b18:	83 ec 04             	sub    $0x4,%esp
 8588b1b:	8b 45 08             	mov    0x8(%ebp),%eax
 8588b1e:	8d 50 04             	lea    0x4(%eax),%edx
 8588b21:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8588b24:	89 54 24 04          	mov    %edx,0x4(%esp)
 8588b28:	89 04 24             	mov    %eax,(%esp)
 8588b2b:	e8 24 0c 00 00       	call   8589754 <_ZNSt3mapIiPN18online_preliminary22COnlinePreliminaryTeamESt4lessIiESaISt4pairIKiS2_EEE3endEv>
 8588b30:	83 ec 04             	sub    $0x4,%esp
 8588b33:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8588b36:	89 44 24 04          	mov    %eax,0x4(%esp)
 8588b3a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8588b3d:	89 04 24             	mov    %eax,(%esp)
 8588b40:	e8 35 0c 00 00       	call   858977a <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN18online_preliminary22COnlinePreliminaryTeamEEEneERKS6_>
 8588b45:	84 c0                	test   %al,%al
 8588b47:	0f 84 95 00 00 00    	je     8588be2 <_ZN18online_preliminary25COnlinePreliminaryTeamMgr11OnLeaveUserEP5CUser+0xfa>
 8588b4d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8588b50:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8588b57:	00 
 8588b58:	89 04 24             	mov    %eax,(%esp)
 8588b5b:	e8 5a 02 00 00       	call   8588dba <_ZN15CUserCharacInfo33SetCurCharacOnlinePreliminaryTeamEPN18online_preliminary22COnlinePreliminaryTeamE>
 8588b60:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8588b63:	89 04 24             	mov    %eax,(%esp)
 8588b66:	e8 23 0c 00 00       	call   858978e <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN18online_preliminary22COnlinePreliminaryTeamEEEptEv>
 8588b6b:	8b 40 04             	mov    0x4(%eax),%eax
 8588b6e:	89 04 24             	mov    %eax,(%esp)
 8588b71:	e8 08 02 00 00       	call   8588d7e <_ZN18online_preliminary22COnlinePreliminaryTeam19GetCurrentUserCountEv>
 8588b76:	83 f8 01             	cmp    $0x1,%eax
 8588b79:	0f 94 c0             	sete   %al
 8588b7c:	84 c0                	test   %al,%al
 8588b7e:	74 4c                	je     8588bcc <_ZN18online_preliminary25COnlinePreliminaryTeamMgr11OnLeaveUserEP5CUser+0xe4>
 8588b80:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8588b83:	89 04 24             	mov    %eax,(%esp)
 8588b86:	e8 03 0c 00 00       	call   858978e <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN18online_preliminary22COnlinePreliminaryTeamEEEptEv>
 8588b8b:	8b 40 04             	mov    0x4(%eax),%eax
 8588b8e:	89 04 24             	mov    %eax,(%esp)
 8588b91:	e8 ca 01 00 00       	call   8588d60 <_ZN18online_preliminary22COnlinePreliminaryTeam8saveDataEv>
 8588b96:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8588b99:	89 04 24             	mov    %eax,(%esp)
 8588b9c:	e8 ed 0b 00 00       	call   858978e <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN18online_preliminary22COnlinePreliminaryTeamEEEptEv>
 8588ba1:	8b 50 04             	mov    0x4(%eax),%edx
 8588ba4:	8b 45 08             	mov    0x8(%ebp),%eax
 8588ba7:	8b 00                	mov    (%eax),%eax
 8588ba9:	89 54 24 04          	mov    %edx,0x4(%esp)
 8588bad:	89 04 24             	mov    %eax,(%esp)
 8588bb0:	e8 37 02 00 00       	call   8588dec <_ZN18online_preliminary12CTeamFactory4FreeEPNS_22COnlinePreliminaryTeamE>
 8588bb5:	8b 45 08             	mov    0x8(%ebp),%eax
 8588bb8:	8d 50 04             	lea    0x4(%eax),%edx
 8588bbb:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8588bbe:	89 44 24 04          	mov    %eax,0x4(%esp)
 8588bc2:	89 14 24             	mov    %edx,(%esp)
 8588bc5:	e8 6c 0c 00 00       	call   8589836 <_ZNSt3mapIiPN18online_preliminary22COnlinePreliminaryTeamESt4lessIiESaISt4pairIKiS2_EEE5eraseESt17_Rb_tree_iteratorIS7_E>
 8588bca:	eb 16                	jmp    8588be2 <_ZN18online_preliminary25COnlinePreliminaryTeamMgr11OnLeaveUserEP5CUser+0xfa>
 8588bcc:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8588bcf:	89 04 24             	mov    %eax,(%esp)
 8588bd2:	e8 b7 0b 00 00       	call   858978e <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN18online_preliminary22COnlinePreliminaryTeamEEEptEv>
 8588bd7:	8b 40 04             	mov    0x4(%eax),%eax
 8588bda:	89 04 24             	mov    %eax,(%esp)
 8588bdd:	e8 c6 01 00 00       	call   8588da8 <_ZN18online_preliminary22COnlinePreliminaryTeam24DecreaseCurrentUserCountEv>
 8588be2:	c9                   	leave
 8588be3:	c3                   	ret

```

```c
// online_preliminary::COnlinePreliminaryTeamMgr::OnLeaveUser @ 0x8588ae8

/* online_preliminary::COnlinePreliminaryTeamMgr::OnLeaveUser(CUser*) */

void __thiscall
online_preliminary::COnlinePreliminaryTeamMgr::OnLeaveUser
          (COnlinePreliminaryTeamMgr *this,CUser *param_1)

{
  char cVar1;
  int iVar2;
  int local_18;
  undefined4 local_14;
  map<int,online_preliminary::COnlinePreliminaryTeam*,std::less<int>,std::allocator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>>>
  local_10 [12];
  
  local_14 = CUserCharacInfo::GetCurCharacOnlinePreliminaryTeamId((CUserCharacInfo *)param_1);
  std::
  map<int,online_preliminary::COnlinePreliminaryTeam*,std::less<int>,std::allocator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>>>
  ::find(&local_18);
  std::
  map<int,online_preliminary::COnlinePreliminaryTeam*,std::less<int>,std::allocator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>>::
          operator!=((_Rb_tree_iterator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>>
                      *)&local_18,(_Rb_tree_iterator *)local_10);
  if (cVar1 != '\0') {
    CUserCharacInfo::SetCurCharacOnlinePreliminaryTeam
              ((CUserCharacInfo *)param_1,(COnlinePreliminaryTeam *)0x0);
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>>
            ::operator->((_Rb_tree_iterator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>>
                          *)&local_18);
    iVar2 = COnlinePreliminaryTeam::GetCurrentUserCount(*(COnlinePreliminaryTeam **)(iVar2 + 4));
    if (iVar2 == 1) {
      iVar2 = std::
              _Rb_tree_iterator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>>::
              operator->((_Rb_tree_iterator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>>
                          *)&local_18);
      COnlinePreliminaryTeam::saveData(*(COnlinePreliminaryTeam **)(iVar2 + 4));
      iVar2 = std::
              _Rb_tree_iterator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>>::
              operator->((_Rb_tree_iterator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>>
                          *)&local_18);
      CTeamFactory::Free(*(CTeamFactory **)this,*(COnlinePreliminaryTeam **)(iVar2 + 4));
      std::
      map<int,online_preliminary::COnlinePreliminaryTeam*,std::less<int>,std::allocator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>>>
      ::erase((map<int,online_preliminary::COnlinePreliminaryTeam*,std::less<int>,std::allocator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>>>
               *)(this + 4),local_18);
    }
    else {
      iVar2 = std::
              _Rb_tree_iterator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>>::
              operator->((_Rb_tree_iterator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>>
                          *)&local_18);
      COnlinePreliminaryTeam::DecreaseCurrentUserCount(*(COnlinePreliminaryTeam **)(iVar2 + 4));
    }
  }
  return;
}

```

---

## OnLoadTeamInfo

```asm
// === 08588be4 online_preliminary::COnlinePreliminaryTeamMgr::OnLoadTeamInfo  [0x08588be4-0x8588c5b] ===
 8588be4:	55                   	push   %ebp
 8588be5:	89 e5                	mov    %esp,%ebp
 8588be7:	83 ec 28             	sub    $0x28,%esp
 8588bea:	8b 45 10             	mov    0x10(%ebp),%eax
 8588bed:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8588bf0:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8588bf3:	8b 45 08             	mov    0x8(%ebp),%eax
 8588bf6:	8d 48 04             	lea    0x4(%eax),%ecx
 8588bf9:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8588bfc:	89 54 24 08          	mov    %edx,0x8(%esp)
 8588c00:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8588c04:	89 04 24             	mov    %eax,(%esp)
 8588c07:	e8 1c 0b 00 00       	call   8589728 <_ZNSt3mapIiPN18online_preliminary22COnlinePreliminaryTeamESt4lessIiESaISt4pairIKiS2_EEE4findERS6_>
 8588c0c:	83 ec 04             	sub    $0x4,%esp
 8588c0f:	8b 45 08             	mov    0x8(%ebp),%eax
 8588c12:	8d 50 04             	lea    0x4(%eax),%edx
 8588c15:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8588c18:	89 54 24 04          	mov    %edx,0x4(%esp)
 8588c1c:	89 04 24             	mov    %eax,(%esp)
 8588c1f:	e8 30 0b 00 00       	call   8589754 <_ZNSt3mapIiPN18online_preliminary22COnlinePreliminaryTeamESt4lessIiESaISt4pairIKiS2_EEE3endEv>
 8588c24:	83 ec 04             	sub    $0x4,%esp
 8588c27:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8588c2a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8588c2e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8588c31:	89 04 24             	mov    %eax,(%esp)
 8588c34:	e8 41 0b 00 00       	call   858977a <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN18online_preliminary22COnlinePreliminaryTeamEEEneERKS6_>
 8588c39:	84 c0                	test   %al,%al
 8588c3b:	74 1d                	je     8588c5a <_ZN18online_preliminary25COnlinePreliminaryTeamMgr14OnLoadTeamInfoEP5CUserPc+0x76>
 8588c3d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8588c40:	89 04 24             	mov    %eax,(%esp)
 8588c43:	e8 46 0b 00 00       	call   858978e <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN18online_preliminary22COnlinePreliminaryTeamEEEptEv>
 8588c48:	8b 40 04             	mov    0x4(%eax),%eax
 8588c4b:	8b 55 10             	mov    0x10(%ebp),%edx
 8588c4e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8588c52:	89 04 24             	mov    %eax,(%esp)
 8588c55:	e8 c0 f6 ff ff       	call   858831a <_ZN18online_preliminary22COnlinePreliminaryTeam32loadDataPreliminaryTeamMatchListEPc>
 8588c5a:	c9                   	leave
 8588c5b:	c3                   	ret

```

```c
// online_preliminary::COnlinePreliminaryTeamMgr::OnLoadTeamInfo @ 0x8588be4

/* online_preliminary::COnlinePreliminaryTeamMgr::OnLoadTeamInfo(CUser*, char*) */

void __thiscall
online_preliminary::COnlinePreliminaryTeamMgr::OnLoadTeamInfo
          (COnlinePreliminaryTeamMgr *this,CUser *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>> local_18 [4];
  map<int,online_preliminary::COnlinePreliminaryTeam*,std::less<int>,std::allocator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>>>
  local_14 [4];
  char *local_10;
  
  local_10 = param_2;
  std::
  map<int,online_preliminary::COnlinePreliminaryTeam*,std::less<int>,std::allocator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>>>
  ::find((int *)local_18);
  std::
  map<int,online_preliminary::COnlinePreliminaryTeam*,std::less<int>,std::allocator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>>>
  ::end(local_14);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>>::
          operator!=(local_18,(_Rb_tree_iterator *)local_14);
  if (cVar1 != '\0') {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>>
            ::operator->(local_18);
    COnlinePreliminaryTeam::loadDataPreliminaryTeamMatchList
              (*(COnlinePreliminaryTeam **)(iVar2 + 4),param_2);
  }
  return;
}

```

---

## ResetDailyMidnight

```asm
// === 08588c5c online_preliminary::COnlinePreliminaryTeamMgr::ResetDailyMidnight  [0x08588c5c-0x8588ccc] ===
 8588c5c:	55                   	push   %ebp
 8588c5d:	89 e5                	mov    %esp,%ebp
 8588c5f:	83 ec 28             	sub    $0x28,%esp
 8588c62:	8b 45 08             	mov    0x8(%ebp),%eax
 8588c65:	8d 50 04             	lea    0x4(%eax),%edx
 8588c68:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8588c6b:	89 54 24 04          	mov    %edx,0x4(%esp)
 8588c6f:	89 04 24             	mov    %eax,(%esp)
 8588c72:	e8 d9 0b 00 00       	call   8589850 <_ZNSt3mapIiPN18online_preliminary22COnlinePreliminaryTeamESt4lessIiESaISt4pairIKiS2_EEE5beginEv>
 8588c77:	83 ec 04             	sub    $0x4,%esp
 8588c7a:	eb 21                	jmp    8588c9d <_ZN18online_preliminary25COnlinePreliminaryTeamMgr18ResetDailyMidnightEv+0x41>
 8588c7c:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8588c7f:	89 04 24             	mov    %eax,(%esp)
 8588c82:	e8 07 0b 00 00       	call   858978e <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN18online_preliminary22COnlinePreliminaryTeamEEEptEv>
 8588c87:	8b 40 04             	mov    0x4(%eax),%eax
 8588c8a:	89 04 24             	mov    %eax,(%esp)
 8588c8d:	e8 e2 f6 ff ff       	call   8588374 <_ZN18online_preliminary22COnlinePreliminaryTeam18ResetDailyMidnightEv>
 8588c92:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8588c95:	89 04 24             	mov    %eax,(%esp)
 8588c98:	e8 d9 0b 00 00       	call   8589876 <_ZNSt17_Rb_tree_iteratorISt4pairIKiPN18online_preliminary22COnlinePreliminaryTeamEEEppEv>
 8588c9d:	8b 45 08             	mov    0x8(%ebp),%eax
 8588ca0:	8d 50 04             	lea    0x4(%eax),%edx
 8588ca3:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8588ca6:	89 54 24 04          	mov    %edx,0x4(%esp)
 8588caa:	89 04 24             	mov    %eax,(%esp)
 8588cad:	e8 a2 0a 00 00       	call   8589754 <_ZNSt3mapIiPN18online_preliminary22COnlinePreliminaryTeamESt4lessIiESaISt4pairIKiS2_EEE3endEv>
 8588cb2:	83 ec 04             	sub    $0x4,%esp
 8588cb5:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8588cb8:	89 44 24 04          	mov    %eax,0x4(%esp)
 8588cbc:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8588cbf:	89 04 24             	mov    %eax,(%esp)
 8588cc2:	e8 b3 0a 00 00       	call   858977a <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN18online_preliminary22COnlinePreliminaryTeamEEEneERKS6_>
 8588cc7:	84 c0                	test   %al,%al
 8588cc9:	75 b1                	jne    8588c7c <_ZN18online_preliminary25COnlinePreliminaryTeamMgr18ResetDailyMidnightEv+0x20>
 8588ccb:	c9                   	leave
 8588ccc:	c3                   	ret

```

```c
// online_preliminary::COnlinePreliminaryTeamMgr::ResetDailyMidnight @ 0x8588c5c

/* online_preliminary::COnlinePreliminaryTeamMgr::ResetDailyMidnight() */

void online_preliminary::COnlinePreliminaryTeamMgr::ResetDailyMidnight(void)

{
  char cVar1;
  int iVar2;
  map<int,online_preliminary::COnlinePreliminaryTeam*,std::less<int>,std::allocator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>>>
  local_14 [4];
  map<int,online_preliminary::COnlinePreliminaryTeam*,std::less<int>,std::allocator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>>>
  local_10 [12];
  
  std::
  map<int,online_preliminary::COnlinePreliminaryTeam*,std::less<int>,std::allocator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>>>
  ::begin(local_14);
  while( true ) {
    std::
    map<int,online_preliminary::COnlinePreliminaryTeam*,std::less<int>,std::allocator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>>>
    ::end(local_10);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>>
            ::operator!=((_Rb_tree_iterator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>>
                          *)local_14,(_Rb_tree_iterator *)local_10);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>>
            ::operator->((_Rb_tree_iterator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>>
                          *)local_14);
    COnlinePreliminaryTeam::ResetDailyMidnight(*(COnlinePreliminaryTeam **)(iVar2 + 4));
    std::_Rb_tree_iterator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>>::
    operator++((_Rb_tree_iterator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>>
                *)local_14);
  }
  return;
}

```

---

## ~COnlinePreliminaryTeamMgr

```asm
// === 085886fe online_preliminary::COnlinePreliminaryTeamMgr::~COnlinePreliminaryTeamMgr  [0x085886fe-0x858875d] ===
 85886fe:	55                   	push   %ebp
 85886ff:	89 e5                	mov    %esp,%ebp
 8588701:	56                   	push   %esi
 8588702:	53                   	push   %ebx
 8588703:	83 ec 10             	sub    $0x10,%esp
 8588706:	8b 45 08             	mov    0x8(%ebp),%eax
 8588709:	8b 00                	mov    (%eax),%eax
 858870b:	85 c0                	test   %eax,%eax
 858870d:	74 39                	je     8588748 <_ZN18online_preliminary25COnlinePreliminaryTeamMgrD1Ev+0x4a>
 858870f:	8b 45 08             	mov    0x8(%ebp),%eax
 8588712:	8b 18                	mov    (%eax),%ebx
 8588714:	85 db                	test   %ebx,%ebx
 8588716:	74 30                	je     8588748 <_ZN18online_preliminary25COnlinePreliminaryTeamMgrD1Ev+0x4a>
 8588718:	89 1c 24             	mov    %ebx,(%esp)
 858871b:	e8 22 07 00 00       	call   8588e42 <_ZN18online_preliminary12CTeamFactoryD1Ev>
 8588720:	89 1c 24             	mov    %ebx,(%esp)
 8588723:	e8 c8 bd 19 00       	call   87244f0 <_ZdlPv>
 8588728:	eb 1e                	jmp    8588748 <_ZN18online_preliminary25COnlinePreliminaryTeamMgrD1Ev+0x4a>
 858872a:	89 d3                	mov    %edx,%ebx
 858872c:	89 c6                	mov    %eax,%esi
 858872e:	8b 45 08             	mov    0x8(%ebp),%eax
 8588731:	83 c0 04             	add    $0x4,%eax
 8588734:	89 04 24             	mov    %eax,(%esp)
 8588737:	e8 de 06 00 00       	call   8588e1a <_ZNSt3mapIiPN18online_preliminary22COnlinePreliminaryTeamESt4lessIiESaISt4pairIKiS2_EEED1Ev>
 858873c:	89 f0                	mov    %esi,%eax
 858873e:	89 da                	mov    %ebx,%edx
 8588740:	89 04 24             	mov    %eax,(%esp)
 8588743:	e8 08 b0 55 00       	call   8ae3750 <_Unwind_Resume>
 8588748:	8b 45 08             	mov    0x8(%ebp),%eax
 858874b:	83 c0 04             	add    $0x4,%eax
 858874e:	89 04 24             	mov    %eax,(%esp)
 8588751:	e8 c4 06 00 00       	call   8588e1a <_ZNSt3mapIiPN18online_preliminary22COnlinePreliminaryTeamESt4lessIiESaISt4pairIKiS2_EEED1Ev>
 8588756:	83 c4 10             	add    $0x10,%esp
 8588759:	5b                   	pop    %ebx
 858875a:	5e                   	pop    %esi
 858875b:	5d                   	pop    %ebp
 858875c:	c3                   	ret
 858875d:	90                   	nop

```

```c
// online_preliminary::COnlinePreliminaryTeamMgr::~COnlinePreliminaryTeamMgr @ 0x85886fe

/* online_preliminary::COnlinePreliminaryTeamMgr::~COnlinePreliminaryTeamMgr() */

void __thiscall
online_preliminary::COnlinePreliminaryTeamMgr::~COnlinePreliminaryTeamMgr
          (COnlinePreliminaryTeamMgr *this)

{
  CTeamFactory *this_00;
  
  if ((*(int *)this != 0) && (this_00 = *(CTeamFactory **)this, this_00 != (CTeamFactory *)0x0)) {
                    /* try { // try from 0858871b to 0858871f has its CatchHandler @ 0858872a */
    CTeamFactory::~CTeamFactory(this_00);
    operator_delete(this_00);
  }
  std::
  map<int,online_preliminary::COnlinePreliminaryTeam*,std::less<int>,std::allocator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>>>
  ::~map((map<int,online_preliminary::COnlinePreliminaryTeam*,std::less<int>,std::allocator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>>>
          *)(this + 4));
  return;
}

```

