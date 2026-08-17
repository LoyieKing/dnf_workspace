# Inter_CodeChecksumRange

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084d0648 Inter_CodeChecksumRange::dispatch_sig  [0x084d0648-0x84d07d1] ===
 84d0648:	55                   	push   %ebp
 84d0649:	89 e5                	mov    %esp,%ebp
 84d064b:	56                   	push   %esi
 84d064c:	53                   	push   %ebx
 84d064d:	81 ec 60 02 00 00    	sub    $0x260,%esp
 84d0653:	8d 85 d8 fe ff ff    	lea    -0x128(%ebp),%eax
 84d0659:	89 04 24             	mov    %eax,(%esp)
 84d065c:	e8 05 a3 bb ff       	call   808a966 <_ZN20CodeHackCheckRangeExC1Ev>
 84d0661:	8d 85 c0 fd ff ff    	lea    -0x240(%ebp),%eax
 84d0667:	89 04 24             	mov    %eax,(%esp)
 84d066a:	e8 91 a0 bb ff       	call   808a700 <_ZN18CodeHackChecksumExC1Ev>
 84d066f:	8b 45 10             	mov    0x10(%ebp),%eax
 84d0672:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d0676:	8d 85 d8 fe ff ff    	lea    -0x128(%ebp),%eax
 84d067c:	89 04 24             	mov    %eax,(%esp)
 84d067f:	e8 48 a3 bb ff       	call   808a9cc <_ZN20CodeHackCheckRangeEx7setDataEPKc>
 84d0684:	89 45 ec             	mov    %eax,-0x14(%ebp)
 84d0687:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84d068a:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d068e:	8d 85 c0 fd ff ff    	lea    -0x240(%ebp),%eax
 84d0694:	89 04 24             	mov    %eax,(%esp)
 84d0697:	e8 66 a1 bb ff       	call   808a802 <_ZN18CodeHackChecksumEx7setDataEPKc>
 84d069c:	e8 ed ba bf ff       	call   80cc18e <_Z14G_CGameManagerv>
 84d06a1:	8d 90 2c 02 00 00    	lea    0x22c(%eax),%edx
 84d06a7:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d06aa:	89 54 24 04          	mov    %edx,0x4(%esp)
 84d06ae:	89 04 24             	mov    %eax,(%esp)
 84d06b1:	e8 fe 33 c0 ff       	call   80d3ab4 <_ZNSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE5beginEv>
 84d06b6:	83 ec 04             	sub    $0x4,%esp
 84d06b9:	e9 9f 00 00 00       	jmp    84d075d <_ZN23Inter_CodeChecksumRange12dispatch_sigEP5CUserPci+0x115>
 84d06be:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d06c1:	89 04 24             	mov    %eax,(%esp)
 84d06c4:	e8 cf 00 de ff       	call   82b0798 <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEptEv>
 84d06c9:	8b 40 04             	mov    0x4(%eax),%eax
 84d06cc:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84d06cf:	8d 85 d8 fe ff ff    	lea    -0x128(%ebp),%eax
 84d06d5:	89 44 24 08          	mov    %eax,0x8(%esp)
 84d06d9:	8d 85 c0 fd ff ff    	lea    -0x240(%ebp),%eax
 84d06df:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d06e3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d06e6:	89 04 24             	mov    %eax,(%esp)
 84d06e9:	e8 6e e3 1a 00       	call   867ea5c <_ZN5CUser22checkCodeChecksumRangeERK18CodeHackChecksumExRK20CodeHackCheckRangeEx>
 84d06ee:	83 f0 01             	xor    $0x1,%eax
 84d06f1:	84 c0                	test   %al,%al
 84d06f3:	74 5d                	je     84d0752 <_ZN23Inter_CodeChecksumRange12dispatch_sigEP5CUserPci+0x10a>
 84d06f5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d06f8:	89 04 24             	mov    %eax,(%esp)
 84d06fb:	e8 8c 9c c0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84d0700:	83 f8 01             	cmp    $0x1,%eax
 84d0703:	0f 9f c0             	setg   %al
 84d0706:	84 c0                	test   %al,%al
 84d0708:	74 48                	je     84d0752 <_ZN23Inter_CodeChecksumRange12dispatch_sigEP5CUserPci+0x10a>
 84d070a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d070d:	89 04 24             	mov    %eax,(%esp)
 84d0710:	e8 79 c2 01 00       	call   84ec98e <_ZN5CUser22GetChecksumAnswerCountEv>
 84d0715:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84d0718:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d071b:	89 04 24             	mov    %eax,(%esp)
 84d071e:	e8 37 92 c2 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 84d0723:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 84d072a:	00 
 84d072b:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 84d0732:	00 
 84d0733:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 84d073a:	00 
 84d073b:	c7 44 24 08 b7 03 00 	movl   $0x3b7,0x8(%esp)
 84d0742:	00 
 84d0743:	8b 55 f0             	mov    -0x10(%ebp),%edx
 84d0746:	89 54 24 04          	mov    %edx,0x4(%esp)
 84d074a:	89 04 24             	mov    %eax,(%esp)
 84d074d:	e8 2c 85 c2 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 84d0752:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d0755:	89 04 24             	mov    %eax,(%esp)
 84d0758:	e8 f5 05 c0 ff       	call   80d0d52 <_ZNSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEppEv>
 84d075d:	e8 2c ba bf ff       	call   80cc18e <_Z14G_CGameManagerv>
 84d0762:	8d 90 2c 02 00 00    	lea    0x22c(%eax),%edx
 84d0768:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d076b:	89 54 24 04          	mov    %edx,0x4(%esp)
 84d076f:	89 04 24             	mov    %eax,(%esp)
 84d0772:	e8 63 33 c0 ff       	call   80d3ada <_ZNSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE3endEv>
 84d0777:	83 ec 04             	sub    $0x4,%esp
 84d077a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d077d:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d0781:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d0784:	89 04 24             	mov    %eax,(%esp)
 84d0787:	e8 70 00 de ff       	call   82b07fc <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEneERKS5_>
 84d078c:	84 c0                	test   %al,%al
 84d078e:	0f 85 2a ff ff ff    	jne    84d06be <_ZN23Inter_CodeChecksumRange12dispatch_sigEP5CUserPci+0x76>
 84d0794:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d0799:	8d 85 c0 fd ff ff    	lea    -0x240(%ebp),%eax
 84d079f:	89 04 24             	mov    %eax,(%esp)
 84d07a2:	e8 c5 9f bb ff       	call   808a76c <_ZN18CodeHackChecksumExD1Ev>
 84d07a7:	89 d8                	mov    %ebx,%eax
 84d07a9:	8d 65 f8             	lea    -0x8(%ebp),%esp
 84d07ac:	83 c4 00             	add    $0x0,%esp
 84d07af:	5b                   	pop    %ebx
 84d07b0:	5e                   	pop    %esi
 84d07b1:	5d                   	pop    %ebp
 84d07b2:	c3                   	ret
 84d07b3:	89 d3                	mov    %edx,%ebx
 84d07b5:	89 c6                	mov    %eax,%esi
 84d07b7:	8d 85 c0 fd ff ff    	lea    -0x240(%ebp),%eax
 84d07bd:	89 04 24             	mov    %eax,(%esp)
 84d07c0:	e8 a7 9f bb ff       	call   808a76c <_ZN18CodeHackChecksumExD1Ev>
 84d07c5:	89 f0                	mov    %esi,%eax
 84d07c7:	89 da                	mov    %ebx,%edx
 84d07c9:	89 04 24             	mov    %eax,(%esp)
 84d07cc:	e8 7f 2f 61 00       	call   8ae3750 <_Unwind_Resume>
 84d07d1:	90                   	nop

```

```c
// Inter_CodeChecksumRange::dispatch_sig @ 0x84d0648

/* Inter_CodeChecksumRange::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_CodeChecksumRange::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  CHackAnalyzer *pCVar3;
  CodeHackChecksumEx local_244 [280];
  CodeHackCheckRangeEx local_12c [268];
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  local_20 [4];
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  local_1c [4];
  char *local_18;
  CUser *local_14;
  undefined4 local_10;
  
  CodeHackCheckRangeEx::CodeHackCheckRangeEx(local_12c);
  CodeHackChecksumEx::CodeHackChecksumEx(local_244);
                    /* try { // try from 084d067f to 084d0776 has its CatchHandler @ 084d07b3 */
  local_18 = (char *)CodeHackCheckRangeEx::setData(local_12c,(char *)param_3);
  CodeHackChecksumEx::setData(local_244,local_18);
  G_CGameManager();
  std::
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  ::begin(local_20);
  while( true ) {
    G_CGameManager();
    std::
    map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
    ::end(local_1c);
    cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)local_20,
                       (_Rb_tree_iterator *)local_1c);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)local_20);
    local_14 = *(CUser **)(iVar2 + 4);
    cVar1 = CUser::checkCodeChecksumRange(local_14,local_244,local_12c);
    if (cVar1 != '\x01') {
      iVar2 = CUser::get_state(local_14);
      if (1 < iVar2) {
        local_10 = CUser::GetChecksumAnswerCount(local_14);
        pCVar3 = (CHackAnalyzer *)CUser::getHackAnalyzer(local_14);
        WongWork::CHackAnalyzer::addServerHackCnt(pCVar3,local_14,0x3b7,1,0,0);
      }
    }
    std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator++
              ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)local_20);
  }
  CodeHackChecksumEx::~CodeHackChecksumEx(local_244);
  return 0;
}

```

