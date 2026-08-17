# CExpertJobStatistic

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## UpdateExpertJob

```asm
// === 0860faca CExpertJobStatistic::UpdateExpertJob  [0x0860faca-0x860fcb5] ===
 860faca:	55                   	push   %ebp
 860facb:	89 e5                	mov    %esp,%ebp
 860facd:	56                   	push   %esi
 860face:	53                   	push   %ebx
 860facf:	83 ec 30             	sub    $0x30,%esp
 860fad2:	8b 45 08             	mov    0x8(%ebp),%eax
 860fad5:	89 04 24             	mov    %eax,(%esp)
 860fad8:	e8 19 22 00 00       	call   8611cf6 <_ZNKSt3mapIN19CExpertJobStatistic12ExpertJobKeyEiSt4lessIS1_ESaISt4pairIKS1_iEEE5emptyEv>
 860fadd:	84 c0                	test   %al,%al
 860fadf:	0f 85 c6 01 00 00    	jne    860fcab <_ZN19CExpertJobStatistic15UpdateExpertJobEv+0x1e1>
 860fae5:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 860faea:	c7 44 24 08 5a 06 00 	movl   $0x65a,0x8(%esp)
 860faf1:	00 
 860faf2:	c7 44 24 04 63 02 ce 	movl   $0x8ce0263,0x4(%esp)
 860faf9:	08 
 860fafa:	89 04 24             	mov    %eax,(%esp)
 860fafd:	e8 84 ff c7 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 860fb02:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 860fb09:	00 
 860fb0a:	89 44 24 04          	mov    %eax,0x4(%esp)
 860fb0e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 860fb11:	89 04 24             	mov    %eax,(%esp)
 860fb14:	e8 0d 91 ab ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 860fb19:	8d 45 e8             	lea    -0x18(%ebp),%eax
 860fb1c:	89 04 24             	mov    %eax,(%esp)
 860fb1f:	e8 22 91 ab ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 860fb24:	c7 44 24 04 82 01 00 	movl   $0x182,0x4(%esp)
 860fb2b:	00 
 860fb2c:	89 04 24             	mov    %eax,(%esp)
 860fb2f:	e8 22 91 ab ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 860fb34:	8d 45 e8             	lea    -0x18(%ebp),%eax
 860fb37:	89 04 24             	mov    %eax,(%esp)
 860fb3a:	e8 07 91 ab ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 860fb3f:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 860fb46:	ff 
 860fb47:	89 04 24             	mov    %eax,(%esp)
 860fb4a:	e8 07 91 ab ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 860fb4f:	8b 45 08             	mov    0x8(%ebp),%eax
 860fb52:	89 04 24             	mov    %eax,(%esp)
 860fb55:	e8 b0 21 00 00       	call   8611d0a <_ZNKSt3mapIN19CExpertJobStatistic12ExpertJobKeyEiSt4lessIS1_ESaISt4pairIKS1_iEEE4sizeEv>
 860fb5a:	89 c3                	mov    %eax,%ebx
 860fb5c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 860fb5f:	89 04 24             	mov    %eax,(%esp)
 860fb62:	e8 df 90 ab ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 860fb67:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 860fb6b:	89 04 24             	mov    %eax,(%esp)
 860fb6e:	e8 e3 90 ab ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 860fb73:	8b 55 08             	mov    0x8(%ebp),%edx
 860fb76:	8d 45 f0             	lea    -0x10(%ebp),%eax
 860fb79:	89 54 24 04          	mov    %edx,0x4(%esp)
 860fb7d:	89 04 24             	mov    %eax,(%esp)
 860fb80:	e8 99 21 00 00       	call   8611d1e <_ZNSt3mapIN19CExpertJobStatistic12ExpertJobKeyEiSt4lessIS1_ESaISt4pairIKS1_iEEE5beginEv>
 860fb85:	83 ec 04             	sub    $0x4,%esp
 860fb88:	8d 45 f0             	lea    -0x10(%ebp),%eax
 860fb8b:	89 44 24 04          	mov    %eax,0x4(%esp)
 860fb8f:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 860fb92:	89 04 24             	mov    %eax,(%esp)
 860fb95:	e8 aa 21 00 00       	call   8611d44 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKN19CExpertJobStatistic12ExpertJobKeyEiEEC1ERKSt17_Rb_tree_iteratorIS4_E>
 860fb9a:	8b 55 08             	mov    0x8(%ebp),%edx
 860fb9d:	8d 45 f4             	lea    -0xc(%ebp),%eax
 860fba0:	89 54 24 04          	mov    %edx,0x4(%esp)
 860fba4:	89 04 24             	mov    %eax,(%esp)
 860fba7:	e8 5c 20 00 00       	call   8611c08 <_ZNSt3mapIN19CExpertJobStatistic12ExpertJobKeyEiSt4lessIS1_ESaISt4pairIKS1_iEEE3endEv>
 860fbac:	83 ec 04             	sub    $0x4,%esp
 860fbaf:	8d 45 f4             	lea    -0xc(%ebp),%eax
 860fbb2:	89 44 24 04          	mov    %eax,0x4(%esp)
 860fbb6:	8d 45 e0             	lea    -0x20(%ebp),%eax
 860fbb9:	89 04 24             	mov    %eax,(%esp)
 860fbbc:	e8 83 21 00 00       	call   8611d44 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKN19CExpertJobStatistic12ExpertJobKeyEiEEC1ERKSt17_Rb_tree_iteratorIS4_E>
 860fbc1:	eb 7d                	jmp    860fc40 <_ZN19CExpertJobStatistic15UpdateExpertJobEv+0x176>
 860fbc3:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 860fbc6:	89 04 24             	mov    %eax,(%esp)
 860fbc9:	e8 b8 21 00 00       	call   8611d86 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKN19CExpertJobStatistic12ExpertJobKeyEiEEptEv>
 860fbce:	8b 00                	mov    (%eax),%eax
 860fbd0:	89 c3                	mov    %eax,%ebx
 860fbd2:	8d 45 e8             	lea    -0x18(%ebp),%eax
 860fbd5:	89 04 24             	mov    %eax,(%esp)
 860fbd8:	e8 69 90 ab ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 860fbdd:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 860fbe1:	89 04 24             	mov    %eax,(%esp)
 860fbe4:	e8 6d 90 ab ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 860fbe9:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 860fbec:	89 04 24             	mov    %eax,(%esp)
 860fbef:	e8 92 21 00 00       	call   8611d86 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKN19CExpertJobStatistic12ExpertJobKeyEiEEptEv>
 860fbf4:	8b 40 04             	mov    0x4(%eax),%eax
 860fbf7:	89 c3                	mov    %eax,%ebx
 860fbf9:	8d 45 e8             	lea    -0x18(%ebp),%eax
 860fbfc:	89 04 24             	mov    %eax,(%esp)
 860fbff:	e8 42 90 ab ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 860fc04:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 860fc08:	89 04 24             	mov    %eax,(%esp)
 860fc0b:	e8 46 90 ab ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 860fc10:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 860fc13:	89 04 24             	mov    %eax,(%esp)
 860fc16:	e8 6b 21 00 00       	call   8611d86 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKN19CExpertJobStatistic12ExpertJobKeyEiEEptEv>
 860fc1b:	8b 58 08             	mov    0x8(%eax),%ebx
 860fc1e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 860fc21:	89 04 24             	mov    %eax,(%esp)
 860fc24:	e8 1d 90 ab ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 860fc29:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 860fc2d:	89 04 24             	mov    %eax,(%esp)
 860fc30:	e8 21 90 ab ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 860fc35:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 860fc38:	89 04 24             	mov    %eax,(%esp)
 860fc3b:	e8 28 21 00 00       	call   8611d68 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKN19CExpertJobStatistic12ExpertJobKeyEiEEppEv>
 860fc40:	8d 45 e0             	lea    -0x20(%ebp),%eax
 860fc43:	89 44 24 04          	mov    %eax,0x4(%esp)
 860fc47:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 860fc4a:	89 04 24             	mov    %eax,(%esp)
 860fc4d:	e8 02 21 00 00       	call   8611d54 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKN19CExpertJobStatistic12ExpertJobKeyEiEEneERKS5_>
 860fc52:	84 c0                	test   %al,%al
 860fc54:	0f 85 69 ff ff ff    	jne    860fbc3 <_ZN19CExpertJobStatistic15UpdateExpertJobEv+0xf9>
 860fc5a:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 860fc5f:	8d 55 e8             	lea    -0x18(%ebp),%edx
 860fc62:	89 54 24 08          	mov    %edx,0x8(%esp)
 860fc66:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 860fc6d:	00 
 860fc6e:	89 04 24             	mov    %eax,(%esp)
 860fc71:	e8 68 13 f6 ff       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 860fc76:	8b 45 08             	mov    0x8(%ebp),%eax
 860fc79:	89 04 24             	mov    %eax,(%esp)
 860fc7c:	e8 a3 0f 00 00       	call   8610c24 <_ZNSt3mapIN19CExpertJobStatistic12ExpertJobKeyEiSt4lessIS1_ESaISt4pairIKS1_iEEE5clearEv>
 860fc81:	eb 1b                	jmp    860fc9e <_ZN19CExpertJobStatistic15UpdateExpertJobEv+0x1d4>
 860fc83:	89 d3                	mov    %edx,%ebx
 860fc85:	89 c6                	mov    %eax,%esi
 860fc87:	8d 45 e8             	lea    -0x18(%ebp),%eax
 860fc8a:	89 04 24             	mov    %eax,(%esp)
 860fc8d:	e8 40 cc 00 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 860fc92:	89 f0                	mov    %esi,%eax
 860fc94:	89 da                	mov    %ebx,%edx
 860fc96:	89 04 24             	mov    %eax,(%esp)
 860fc99:	e8 b2 3a 4d 00       	call   8ae3750 <_Unwind_Resume>
 860fc9e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 860fca1:	89 04 24             	mov    %eax,(%esp)
 860fca4:	e8 29 cc 00 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 860fca9:	eb 01                	jmp    860fcac <_ZN19CExpertJobStatistic15UpdateExpertJobEv+0x1e2>
 860fcab:	90                   	nop
 860fcac:	8d 65 f8             	lea    -0x8(%ebp),%esp
 860fcaf:	83 c4 00             	add    $0x0,%esp
 860fcb2:	5b                   	pop    %ebx
 860fcb3:	5e                   	pop    %esi
 860fcb4:	5d                   	pop    %ebp
 860fcb5:	c3                   	ret

```

```c
// CExpertJobStatistic::UpdateExpertJob @ 0x860faca

/* CExpertJobStatistic::UpdateExpertJob() */

void __thiscall CExpertJobStatistic::UpdateExpertJob(CExpertJobStatistic *this)

{
  char cVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  int iVar4;
  int *piVar5;
  _Rb_tree_const_iterator<std::pair<CExpertJobStatistic::ExpertJobKey_const,int>> local_24 [4];
  _Rb_tree_const_iterator<std::pair<CExpertJobStatistic::ExpertJobKey_const,int>> local_20 [4];
  CStreamGuard local_1c [8];
  map<CExpertJobStatistic::ExpertJobKey,int,std::less<CExpertJobStatistic::ExpertJobKey>,std::allocator<std::pair<CExpertJobStatistic::ExpertJobKey_const,int>>>
  local_14 [4];
  map<CExpertJobStatistic::ExpertJobKey,int,std::less<CExpertJobStatistic::ExpertJobKey>,std::allocator<std::pair<CExpertJobStatistic::ExpertJobKey_const,int>>>
  local_10 [4];
  
  cVar1 = std::
          map<CExpertJobStatistic::ExpertJobKey,int,std::less<CExpertJobStatistic::ExpertJobKey>,std::allocator<std::pair<CExpertJobStatistic::ExpertJobKey_const,int>>>
          ::empty((map<CExpertJobStatistic::ExpertJobKey,int,std::less<CExpertJobStatistic::ExpertJobKey>,std::allocator<std::pair<CExpertJobStatistic::ExpertJobKey_const,int>>>
                   *)this);
  if (cVar1 == '\0') {
    pSVar2 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"Statistics.cpp",0x65a);
    CStreamGuard::CStreamGuard(local_1c,pSVar2,true);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
                    /* try { // try from 0860fb2f to 0860fc80 has its CatchHandler @ 0860fc83 */
    CStreamGuard::operator<<(pCVar3,0x182);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
    CStreamGuard::operator<<(pCVar3,-1);
    iVar4 = std::
            map<CExpertJobStatistic::ExpertJobKey,int,std::less<CExpertJobStatistic::ExpertJobKey>,std::allocator<std::pair<CExpertJobStatistic::ExpertJobKey_const,int>>>
            ::size((map<CExpertJobStatistic::ExpertJobKey,int,std::less<CExpertJobStatistic::ExpertJobKey>,std::allocator<std::pair<CExpertJobStatistic::ExpertJobKey_const,int>>>
                    *)this);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
    CStreamGuard::operator<<(pCVar3,iVar4);
    std::
    map<CExpertJobStatistic::ExpertJobKey,int,std::less<CExpertJobStatistic::ExpertJobKey>,std::allocator<std::pair<CExpertJobStatistic::ExpertJobKey_const,int>>>
    ::begin(local_14);
    std::_Rb_tree_const_iterator<std::pair<CExpertJobStatistic::ExpertJobKey_const,int>>::
    _Rb_tree_const_iterator(local_20,(_Rb_tree_iterator *)local_14);
    std::
    map<CExpertJobStatistic::ExpertJobKey,int,std::less<CExpertJobStatistic::ExpertJobKey>,std::allocator<std::pair<CExpertJobStatistic::ExpertJobKey_const,int>>>
    ::end(local_10);
    std::_Rb_tree_const_iterator<std::pair<CExpertJobStatistic::ExpertJobKey_const,int>>::
    _Rb_tree_const_iterator(local_24,(_Rb_tree_iterator *)local_10);
    while( true ) {
      cVar1 = std::_Rb_tree_const_iterator<std::pair<CExpertJobStatistic::ExpertJobKey_const,int>>::
              operator!=(local_20,(_Rb_tree_const_iterator *)local_24);
      if (cVar1 == '\0') break;
      piVar5 = (int *)std::
                      _Rb_tree_const_iterator<std::pair<CExpertJobStatistic::ExpertJobKey_const,int>>
                      ::operator->(local_20);
      iVar4 = *piVar5;
      pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
      CStreamGuard::operator<<(pCVar3,iVar4);
      iVar4 = std::_Rb_tree_const_iterator<std::pair<CExpertJobStatistic::ExpertJobKey_const,int>>::
              operator->(local_20);
      iVar4 = *(int *)(iVar4 + 4);
      pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
      CStreamGuard::operator<<(pCVar3,iVar4);
      iVar4 = std::_Rb_tree_const_iterator<std::pair<CExpertJobStatistic::ExpertJobKey_const,int>>::
              operator->(local_20);
      iVar4 = *(int *)(iVar4 + 8);
      pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
      CStreamGuard::operator<<(pCVar3,iVar4);
      std::_Rb_tree_const_iterator<std::pair<CExpertJobStatistic::ExpertJobKey_const,int>>::
      operator++(local_20);
    }
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,4,local_1c);
    std::
    map<CExpertJobStatistic::ExpertJobKey,int,std::less<CExpertJobStatistic::ExpertJobKey>,std::allocator<std::pair<CExpertJobStatistic::ExpertJobKey_const,int>>>
    ::clear((map<CExpertJobStatistic::ExpertJobKey,int,std::less<CExpertJobStatistic::ExpertJobKey>,std::allocator<std::pair<CExpertJobStatistic::ExpertJobKey_const,int>>>
             *)this);
    CStreamGuard::~CStreamGuard(local_1c);
  }
  return;
}

```

---

## increaseItemCount

```asm
// === 0860f9d4 CExpertJobStatistic::increaseItemCount  [0x0860f9d4-0x860fac9] ===
 860f9d4:	55                   	push   %ebp
 860f9d5:	89 e5                	mov    %esp,%ebp
 860f9d7:	53                   	push   %ebx
 860f9d8:	83 ec 54             	sub    $0x54,%esp
 860f9db:	8b 45 10             	mov    0x10(%ebp),%eax
 860f9de:	89 44 24 08          	mov    %eax,0x8(%esp)
 860f9e2:	8b 45 0c             	mov    0xc(%ebp),%eax
 860f9e5:	89 44 24 04          	mov    %eax,0x4(%esp)
 860f9e9:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 860f9ec:	89 04 24             	mov    %eax,(%esp)
 860f9ef:	e8 2c 0d 00 00       	call   8610720 <_ZN19CExpertJobStatistic12ExpertJobKeyC1E20ENUM_EXPERT_JOB_TYPEm>
 860f9f4:	8b 55 08             	mov    0x8(%ebp),%edx
 860f9f7:	8d 45 c0             	lea    -0x40(%ebp),%eax
 860f9fa:	8d 4d c4             	lea    -0x3c(%ebp),%ecx
 860f9fd:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 860fa01:	89 54 24 04          	mov    %edx,0x4(%esp)
 860fa05:	89 04 24             	mov    %eax,(%esp)
 860fa08:	e8 cf 21 00 00       	call   8611bdc <_ZNSt3mapIN19CExpertJobStatistic12ExpertJobKeyEiSt4lessIS1_ESaISt4pairIKS1_iEEE4findERS5_>
 860fa0d:	83 ec 04             	sub    $0x4,%esp
 860fa10:	8b 55 08             	mov    0x8(%ebp),%edx
 860fa13:	8d 45 cc             	lea    -0x34(%ebp),%eax
 860fa16:	89 54 24 04          	mov    %edx,0x4(%esp)
 860fa1a:	89 04 24             	mov    %eax,(%esp)
 860fa1d:	e8 e6 21 00 00       	call   8611c08 <_ZNSt3mapIN19CExpertJobStatistic12ExpertJobKeyEiSt4lessIS1_ESaISt4pairIKS1_iEEE3endEv>
 860fa22:	83 ec 04             	sub    $0x4,%esp
 860fa25:	8d 45 cc             	lea    -0x34(%ebp),%eax
 860fa28:	89 44 24 04          	mov    %eax,0x4(%esp)
 860fa2c:	8d 45 c0             	lea    -0x40(%ebp),%eax
 860fa2f:	89 04 24             	mov    %eax,(%esp)
 860fa32:	e8 f7 21 00 00       	call   8611c2e <_ZNKSt17_Rb_tree_iteratorISt4pairIKN19CExpertJobStatistic12ExpertJobKeyEiEEneERKS5_>
 860fa37:	84 c0                	test   %al,%al
 860fa39:	74 26                	je     860fa61 <_ZN19CExpertJobStatistic17increaseItemCountE20ENUM_EXPERT_JOB_TYPEmi+0x8d>
 860fa3b:	8d 45 c0             	lea    -0x40(%ebp),%eax
 860fa3e:	89 04 24             	mov    %eax,(%esp)
 860fa41:	e8 fc 21 00 00       	call   8611c42 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN19CExpertJobStatistic12ExpertJobKeyEiEEptEv>
 860fa46:	89 c3                	mov    %eax,%ebx
 860fa48:	8d 45 c0             	lea    -0x40(%ebp),%eax
 860fa4b:	89 04 24             	mov    %eax,(%esp)
 860fa4e:	e8 ef 21 00 00       	call   8611c42 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN19CExpertJobStatistic12ExpertJobKeyEiEEptEv>
 860fa53:	8b 50 08             	mov    0x8(%eax),%edx
 860fa56:	8b 45 14             	mov    0x14(%ebp),%eax
 860fa59:	8d 04 02             	lea    (%edx,%eax,1),%eax
 860fa5c:	89 43 08             	mov    %eax,0x8(%ebx)
 860fa5f:	eb 63                	jmp    860fac4 <_ZN19CExpertJobStatistic17increaseItemCountE20ENUM_EXPERT_JOB_TYPEmi+0xf0>
 860fa61:	8b 45 10             	mov    0x10(%ebp),%eax
 860fa64:	89 44 24 08          	mov    %eax,0x8(%esp)
 860fa68:	8b 45 0c             	mov    0xc(%ebp),%eax
 860fa6b:	89 44 24 04          	mov    %eax,0x4(%esp)
 860fa6f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 860fa72:	89 04 24             	mov    %eax,(%esp)
 860fa75:	e8 a6 0c 00 00       	call   8610720 <_ZN19CExpertJobStatistic12ExpertJobKeyC1E20ENUM_EXPERT_JOB_TYPEm>
 860fa7a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 860fa7d:	8d 55 14             	lea    0x14(%ebp),%edx
 860fa80:	89 54 24 08          	mov    %edx,0x8(%esp)
 860fa84:	8d 55 f0             	lea    -0x10(%ebp),%edx
 860fa87:	89 54 24 04          	mov    %edx,0x4(%esp)
 860fa8b:	89 04 24             	mov    %eax,(%esp)
 860fa8e:	e8 bc 21 00 00       	call   8611c4f <_ZSt9make_pairIN19CExpertJobStatistic12ExpertJobKeyERiESt4pairINSt17__decay_and_stripIT_E6__typeENS4_IT0_E6__typeEEOS5_OS8_>
 860fa93:	83 ec 04             	sub    $0x4,%esp
 860fa96:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 860fa99:	89 44 24 04          	mov    %eax,0x4(%esp)
 860fa9d:	8d 45 d8             	lea    -0x28(%ebp),%eax
 860faa0:	89 04 24             	mov    %eax,(%esp)
 860faa3:	e8 e6 21 00 00       	call   8611c8e <_ZNSt4pairIKN19CExpertJobStatistic12ExpertJobKeyEiEC1IS1_iEEOS_IT_T0_E>
 860faa8:	8b 55 08             	mov    0x8(%ebp),%edx
 860faab:	8d 45 d0             	lea    -0x30(%ebp),%eax
 860faae:	8d 4d d8             	lea    -0x28(%ebp),%ecx
 860fab1:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 860fab5:	89 54 24 04          	mov    %edx,0x4(%esp)
 860fab9:	89 04 24             	mov    %eax,(%esp)
 860fabc:	e8 09 22 00 00       	call   8611cca <_ZNSt3mapIN19CExpertJobStatistic12ExpertJobKeyEiSt4lessIS1_ESaISt4pairIKS1_iEEE6insertERKS6_>
 860fac1:	83 ec 04             	sub    $0x4,%esp
 860fac4:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 860fac7:	c9                   	leave
 860fac8:	c3                   	ret
 860fac9:	90                   	nop

```

```c
// CExpertJobStatistic::increaseItemCount @ 0x860f9d4

/* CExpertJobStatistic::increaseItemCount(ENUM_EXPERT_JOB_TYPE, unsigned long, int) */

void __thiscall
CExpertJobStatistic::increaseItemCount
          (undefined4 this,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  ExpertJobKey local_44 [4];
  ExpertJobKey local_40 [8];
  map<CExpertJobStatistic::ExpertJobKey,int,std::less<CExpertJobStatistic::ExpertJobKey>,std::allocator<std::pair<CExpertJobStatistic::ExpertJobKey_const,int>>>
  local_38 [4];
  pair local_34 [8];
  pair<CExpertJobStatistic::ExpertJobKey_const,int> local_2c [12];
  ExpertJobKey local_20 [12];
  ExpertJobKey local_14 [12];
  
  ExpertJobKey::ExpertJobKey(local_40,param_2,param_3);
  std::
  map<CExpertJobStatistic::ExpertJobKey,int,std::less<CExpertJobStatistic::ExpertJobKey>,std::allocator<std::pair<CExpertJobStatistic::ExpertJobKey_const,int>>>
  ::find(local_44);
  std::
  map<CExpertJobStatistic::ExpertJobKey,int,std::less<CExpertJobStatistic::ExpertJobKey>,std::allocator<std::pair<CExpertJobStatistic::ExpertJobKey_const,int>>>
  ::end(local_38);
  cVar1 = std::_Rb_tree_iterator<std::pair<CExpertJobStatistic::ExpertJobKey_const,int>>::operator!=
                    ((_Rb_tree_iterator<std::pair<CExpertJobStatistic::ExpertJobKey_const,int>> *)
                     local_44,(_Rb_tree_iterator *)local_38);
  if (cVar1 == '\0') {
    ExpertJobKey::ExpertJobKey(local_14,param_2,param_3);
    std::make_pair<CExpertJobStatistic::ExpertJobKey,int&>(local_20,(int *)local_14);
    std::pair<CExpertJobStatistic::ExpertJobKey_const,int>::
    pair<CExpertJobStatistic::ExpertJobKey,int>(local_2c,local_20);
    std::
    map<CExpertJobStatistic::ExpertJobKey,int,std::less<CExpertJobStatistic::ExpertJobKey>,std::allocator<std::pair<CExpertJobStatistic::ExpertJobKey_const,int>>>
    ::insert(local_34);
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<CExpertJobStatistic::ExpertJobKey_const,int>>::
            operator->((_Rb_tree_iterator<std::pair<CExpertJobStatistic::ExpertJobKey_const,int>> *)
                       local_44);
    iVar3 = std::_Rb_tree_iterator<std::pair<CExpertJobStatistic::ExpertJobKey_const,int>>::
            operator->((_Rb_tree_iterator<std::pair<CExpertJobStatistic::ExpertJobKey_const,int>> *)
                       local_44);
    *(int *)(iVar2 + 8) = *(int *)(iVar3 + 8) + param_4;
  }
  return;
}

```

