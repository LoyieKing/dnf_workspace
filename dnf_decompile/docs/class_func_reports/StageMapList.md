# StageMapList

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## compare

```asm
// === 08364848 StageMapList::compare  [0x08364848-0x836485b] ===
 8364848:	55                   	push   %ebp
 8364849:	89 e5                	mov    %esp,%ebp
 836484b:	8b 45 08             	mov    0x8(%ebp),%eax
 836484e:	8b 10                	mov    (%eax),%edx
 8364850:	8b 45 0c             	mov    0xc(%ebp),%eax
 8364853:	8b 00                	mov    (%eax),%eax
 8364855:	39 c2                	cmp    %eax,%edx
 8364857:	0f 9c c0             	setl   %al
 836485a:	5d                   	pop    %ebp
 836485b:	c3                   	ret

```

```c
// StageMapList::compare @ 0x8364848

/* StageMapList::compare(StageMapList::_StageMapSummary const&, StageMapList::_StageMapSummary
   const&) */

undefined4 StageMapList::compare(_StageMapSummary *param_1,_StageMapSummary *param_2)

{
  return CONCAT31((int3)((uint)*(int *)param_2 >> 8),*(int *)param_1 < *(int *)param_2);
}

```

---

## getNextStage

```asm
// === 08364e58 StageMapList::getNextStage  [0x08364e58-0x8364f2d] ===
 8364e58:	55                   	push   %ebp
 8364e59:	89 e5                	mov    %esp,%ebp
 8364e5b:	83 ec 28             	sub    $0x28,%esp
 8364e5e:	8b 45 08             	mov    0x8(%ebp),%eax
 8364e61:	8d 48 04             	lea    0x4(%eax),%ecx
 8364e64:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8364e67:	8d 55 0c             	lea    0xc(%ebp),%edx
 8364e6a:	89 54 24 08          	mov    %edx,0x8(%esp)
 8364e6e:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8364e72:	89 04 24             	mov    %eax,(%esp)
 8364e75:	e8 86 0a 03 00       	call   8395900 <_ZNKSt3mapIiN12StageMapList16_StageMapSummaryESt4lessIiESaISt4pairIKiS1_EEE4findERS5_>
 8364e7a:	83 ec 04             	sub    $0x4,%esp
 8364e7d:	8b 45 08             	mov    0x8(%ebp),%eax
 8364e80:	8d 50 04             	lea    0x4(%eax),%edx
 8364e83:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8364e86:	89 54 24 04          	mov    %edx,0x4(%esp)
 8364e8a:	89 04 24             	mov    %eax,(%esp)
 8364e8d:	e8 9a 0a 03 00       	call   839592c <_ZNKSt3mapIiN12StageMapList16_StageMapSummaryESt4lessIiESaISt4pairIKiS1_EEE3endEv>
 8364e92:	83 ec 04             	sub    $0x4,%esp
 8364e95:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8364e98:	89 44 24 04          	mov    %eax,0x4(%esp)
 8364e9c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8364e9f:	89 04 24             	mov    %eax,(%esp)
 8364ea2:	e8 ab 0a 03 00       	call   8395952 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiN12StageMapList16_StageMapSummaryEEEeqERKS5_>
 8364ea7:	84 c0                	test   %al,%al
 8364ea9:	74 07                	je     8364eb2 <_ZNK12StageMapList12getNextStageEiRb+0x5a>
 8364eab:	b8 00 00 00 00       	mov    $0x0,%eax
 8364eb0:	eb 7a                	jmp    8364f2c <_ZNK12StageMapList12getNextStageEiRb+0xd4>
 8364eb2:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8364eb5:	89 04 24             	mov    %eax,(%esp)
 8364eb8:	e8 a9 0a 03 00       	call   8395966 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiN12StageMapList16_StageMapSummaryEEEptEv>
 8364ebd:	8d 48 0c             	lea    0xc(%eax),%ecx
 8364ec0:	8b 45 08             	mov    0x8(%ebp),%eax
 8364ec3:	8d 50 04             	lea    0x4(%eax),%edx
 8364ec6:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8364ec9:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8364ecd:	89 54 24 04          	mov    %edx,0x4(%esp)
 8364ed1:	89 04 24             	mov    %eax,(%esp)
 8364ed4:	e8 27 0a 03 00       	call   8395900 <_ZNKSt3mapIiN12StageMapList16_StageMapSummaryESt4lessIiESaISt4pairIKiS1_EEE4findERS5_>
 8364ed9:	83 ec 04             	sub    $0x4,%esp
 8364edc:	8b 45 08             	mov    0x8(%ebp),%eax
 8364edf:	8d 50 04             	lea    0x4(%eax),%edx
 8364ee2:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8364ee5:	89 54 24 04          	mov    %edx,0x4(%esp)
 8364ee9:	89 04 24             	mov    %eax,(%esp)
 8364eec:	e8 3b 0a 03 00       	call   839592c <_ZNKSt3mapIiN12StageMapList16_StageMapSummaryESt4lessIiESaISt4pairIKiS1_EEE3endEv>
 8364ef1:	83 ec 04             	sub    $0x4,%esp
 8364ef4:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8364ef7:	89 44 24 04          	mov    %eax,0x4(%esp)
 8364efb:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8364efe:	89 04 24             	mov    %eax,(%esp)
 8364f01:	e8 6e 0a 03 00       	call   8395974 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiN12StageMapList16_StageMapSummaryEEEneERKS5_>
 8364f06:	84 c0                	test   %al,%al
 8364f08:	74 14                	je     8364f1e <_ZNK12StageMapList12getNextStageEiRb+0xc6>
 8364f0a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8364f0d:	89 04 24             	mov    %eax,(%esp)
 8364f10:	e8 51 0a 03 00       	call   8395966 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiN12StageMapList16_StageMapSummaryEEEptEv>
 8364f15:	0f b6 50 10          	movzbl 0x10(%eax),%edx
 8364f19:	8b 45 10             	mov    0x10(%ebp),%eax
 8364f1c:	88 10                	mov    %dl,(%eax)
 8364f1e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8364f21:	89 04 24             	mov    %eax,(%esp)
 8364f24:	e8 3d 0a 03 00       	call   8395966 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiN12StageMapList16_StageMapSummaryEEEptEv>
 8364f29:	8b 40 0c             	mov    0xc(%eax),%eax
 8364f2c:	c9                   	leave
 8364f2d:	c3                   	ret

```

```c
// StageMapList::getNextStage @ 0x8364e58

/* StageMapList::getNextStage(int, bool&) const */

undefined4 __thiscall StageMapList::getNextStage(StageMapList *this,int param_1,bool *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  _Rb_tree_const_iterator<std::pair<int_const,StageMapList::_StageMapSummary>> local_1c [4];
  _Rb_tree_const_iterator<std::pair<int_const,StageMapList::_StageMapSummary>> local_18 [4];
  map<int,StageMapList::_StageMapSummary,std::less<int>,std::allocator<std::pair<int_const,StageMapList::_StageMapSummary>>>
  local_14 [4];
  map<int,StageMapList::_StageMapSummary,std::less<int>,std::allocator<std::pair<int_const,StageMapList::_StageMapSummary>>>
  local_10 [12];
  
  std::
  map<int,StageMapList::_StageMapSummary,std::less<int>,std::allocator<std::pair<int_const,StageMapList::_StageMapSummary>>>
  ::find((int *)local_18);
  std::
  map<int,StageMapList::_StageMapSummary,std::less<int>,std::allocator<std::pair<int_const,StageMapList::_StageMapSummary>>>
  ::end(local_14);
  cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,StageMapList::_StageMapSummary>>::
          operator==(local_18,(_Rb_tree_const_iterator *)local_14);
  if (cVar1 == '\0') {
    std::_Rb_tree_const_iterator<std::pair<int_const,StageMapList::_StageMapSummary>>::operator->
              (local_18);
    std::
    map<int,StageMapList::_StageMapSummary,std::less<int>,std::allocator<std::pair<int_const,StageMapList::_StageMapSummary>>>
    ::find((int *)local_1c);
    std::
    map<int,StageMapList::_StageMapSummary,std::less<int>,std::allocator<std::pair<int_const,StageMapList::_StageMapSummary>>>
    ::end(local_10);
    cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,StageMapList::_StageMapSummary>>::
            operator!=(local_1c,(_Rb_tree_const_iterator *)local_10);
    if (cVar1 != '\0') {
      iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,StageMapList::_StageMapSummary>>::
              operator->(local_1c);
      *param_2 = *(bool *)(iVar3 + 0x10);
    }
    iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,StageMapList::_StageMapSummary>>::
            operator->(local_18);
    uVar2 = *(undefined4 *)(iVar3 + 0xc);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## isExist

```asm
// === 08364df6 StageMapList::isExist  [0x08364df6-0x8364e57] ===
 8364df6:	55                   	push   %ebp
 8364df7:	89 e5                	mov    %esp,%ebp
 8364df9:	83 ec 28             	sub    $0x28,%esp
 8364dfc:	8b 45 08             	mov    0x8(%ebp),%eax
 8364dff:	8d 48 04             	lea    0x4(%eax),%ecx
 8364e02:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8364e05:	8d 55 0c             	lea    0xc(%ebp),%edx
 8364e08:	89 54 24 08          	mov    %edx,0x8(%esp)
 8364e0c:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8364e10:	89 04 24             	mov    %eax,(%esp)
 8364e13:	e8 e8 0a 03 00       	call   8395900 <_ZNKSt3mapIiN12StageMapList16_StageMapSummaryESt4lessIiESaISt4pairIKiS1_EEE4findERS5_>
 8364e18:	83 ec 04             	sub    $0x4,%esp
 8364e1b:	8b 45 08             	mov    0x8(%ebp),%eax
 8364e1e:	8d 50 04             	lea    0x4(%eax),%edx
 8364e21:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8364e24:	89 54 24 04          	mov    %edx,0x4(%esp)
 8364e28:	89 04 24             	mov    %eax,(%esp)
 8364e2b:	e8 fc 0a 03 00       	call   839592c <_ZNKSt3mapIiN12StageMapList16_StageMapSummaryESt4lessIiESaISt4pairIKiS1_EEE3endEv>
 8364e30:	83 ec 04             	sub    $0x4,%esp
 8364e33:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8364e36:	89 44 24 04          	mov    %eax,0x4(%esp)
 8364e3a:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8364e3d:	89 04 24             	mov    %eax,(%esp)
 8364e40:	e8 0d 0b 03 00       	call   8395952 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiN12StageMapList16_StageMapSummaryEEEeqERKS5_>
 8364e45:	84 c0                	test   %al,%al
 8364e47:	74 07                	je     8364e50 <_ZNK12StageMapList7isExistEi+0x5a>
 8364e49:	b8 00 00 00 00       	mov    $0x0,%eax
 8364e4e:	eb 05                	jmp    8364e55 <_ZNK12StageMapList7isExistEi+0x5f>
 8364e50:	b8 01 00 00 00       	mov    $0x1,%eax
 8364e55:	c9                   	leave
 8364e56:	c3                   	ret
 8364e57:	90                   	nop

```

```c
// StageMapList::isExist @ 0x8364df6

/* StageMapList::isExist(int) const */

bool StageMapList::isExist(int param_1)

{
  char cVar1;
  _Rb_tree_const_iterator<std::pair<int_const,StageMapList::_StageMapSummary>> local_14 [4];
  map<int,StageMapList::_StageMapSummary,std::less<int>,std::allocator<std::pair<int_const,StageMapList::_StageMapSummary>>>
  local_10 [12];
  
  std::
  map<int,StageMapList::_StageMapSummary,std::less<int>,std::allocator<std::pair<int_const,StageMapList::_StageMapSummary>>>
  ::find((int *)local_14);
  std::
  map<int,StageMapList::_StageMapSummary,std::less<int>,std::allocator<std::pair<int_const,StageMapList::_StageMapSummary>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,StageMapList::_StageMapSummary>>::
          operator==(local_14,(_Rb_tree_const_iterator *)local_10);
  return cVar1 == '\0';
}

```

---

## loadList

```asm
// === 0836485c StageMapList::loadList  [0x0836485c-0x8364df5] ===
 836485c:	55                   	push   %ebp
 836485d:	89 e5                	mov    %esp,%ebp
 836485f:	56                   	push   %esi
 8364860:	53                   	push   %ebx
 8364861:	81 ec f0 00 00 00    	sub    $0xf0,%esp
 8364867:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 836486d:	89 04 24             	mov    %eax,(%esp)
 8364870:	e8 f1 0b 03 00       	call   8395466 <_ZNSt6vectorIN12StageMapList16_StageMapSummaryESaIS1_EEC1Ev>
 8364875:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 836487c:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 8364882:	c7 44 24 04 20 4e 49 	movl   $0x9494e20,0x4(%esp)
 8364889:	09 
 836488a:	89 04 24             	mov    %eax,(%esp)
 836488d:	e8 60 18 d8 ff       	call   80e60f2 <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEE5beginEv>
 8364892:	83 ec 04             	sub    $0x4,%esp
 8364895:	e9 81 03 00 00       	jmp    8364c1b <_ZN12StageMapList8loadListEv+0x3bf>
 836489a:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 83648a0:	89 04 24             	mov    %eax,(%esp)
 83648a3:	e8 10 19 d8 ff       	call   80e61b8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSsEEptEv>
 83648a8:	83 c0 04             	add    $0x4,%eax
 83648ab:	89 04 24             	mov    %eax,(%esp)
 83648ae:	e8 3d 1c 3a 00       	call   87064f0 <_ZNKSs5c_strEv>
 83648b3:	89 45 d8             	mov    %eax,-0x28(%ebp)
 83648b6:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 83648ba:	0f 84 90 03 00 00    	je     8364c50 <_ZN12StageMapList8loadListEv+0x3f4>
 83648c0:	8d 85 24 ff ff ff    	lea    -0xdc(%ebp),%eax
 83648c6:	89 04 24             	mov    %eax,(%esp)
 83648c9:	e8 ba eb 00 00       	call   8373488 <_ZN8stagemap14StageMapScriptC1Ev>
 83648ce:	8b 45 d8             	mov    -0x28(%ebp),%eax
 83648d1:	89 44 24 04          	mov    %eax,0x4(%esp)
 83648d5:	8d 85 24 ff ff ff    	lea    -0xdc(%ebp),%eax
 83648db:	89 04 24             	mov    %eax,(%esp)
 83648de:	e8 45 56 54 00       	call   88a9f28 <_Z20importStageMapScriptPN8stagemap14StageMapScriptEPKc>
 83648e3:	83 f0 01             	xor    $0x1,%eax
 83648e6:	84 c0                	test   %al,%al
 83648e8:	74 22                	je     836490c <_ZN12StageMapList8loadListEv+0xb0>
 83648ea:	8b 45 d8             	mov    -0x28(%ebp),%eax
 83648ed:	89 44 24 04          	mov    %eax,0x4(%esp)
 83648f1:	c7 04 24 e3 31 c3 08 	movl   $0x8c331e3,(%esp)
 83648f8:	e8 63 92 d1 ff       	call   807db60 <printf@plt>
 83648fd:	be 00 00 00 00       	mov    $0x0,%esi
 8364902:	bb 00 00 00 00       	mov    $0x0,%ebx
 8364907:	e9 d9 02 00 00       	jmp    8364be5 <_ZN12StageMapList8loadListEv+0x389>
 836490c:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 8364912:	8d 95 24 ff ff ff    	lea    -0xdc(%ebp),%edx
 8364918:	83 c2 14             	add    $0x14,%edx
 836491b:	89 54 24 04          	mov    %edx,0x4(%esp)
 836491f:	89 04 24             	mov    %eax,(%esp)
 8364922:	e8 b1 0b 03 00       	call   83954d8 <_ZNSt6vectorIN8stagemap8AreaDataESaIS1_EE5beginEv>
 8364927:	83 ec 04             	sub    $0x4,%esp
 836492a:	e9 5c 02 00 00       	jmp    8364b8b <_ZN12StageMapList8loadListEv+0x32f>
 836492f:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8364936:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 836493c:	89 04 24             	mov    %eax,(%esp)
 836493f:	e8 3e 0c 03 00       	call   8395582 <_ZNK9__gnu_cxx17__normal_iteratorIPN8stagemap8AreaDataESt6vectorIS2_SaIS2_EEEptEv>
 8364944:	83 c0 20             	add    $0x20,%eax
 8364947:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 836494a:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 8364950:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8364953:	89 54 24 04          	mov    %edx,0x4(%esp)
 8364957:	89 04 24             	mov    %eax,(%esp)
 836495a:	e8 2d 0c 03 00       	call   839558c <_ZNSt6vectorIN8stagemap12DistrictDataESaIS1_EE5beginEv>
 836495f:	83 ec 04             	sub    $0x4,%esp
 8364962:	e9 3d 01 00 00       	jmp    8364aa4 <_ZN12StageMapList8loadListEv+0x248>
 8364967:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 836496d:	89 04 24             	mov    %eax,(%esp)
 8364970:	e8 c1 0c 03 00       	call   8395636 <_ZNK9__gnu_cxx17__normal_iteratorIPN8stagemap12DistrictDataESt6vectorIS2_SaIS2_EEEptEv>
 8364975:	83 c0 04             	add    $0x4,%eax
 8364978:	89 45 ec             	mov    %eax,-0x14(%ebp)
 836497b:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 8364981:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8364984:	89 54 24 04          	mov    %edx,0x4(%esp)
 8364988:	89 04 24             	mov    %eax,(%esp)
 836498b:	e8 b0 0c 03 00       	call   8395640 <_ZNSt6vectorIN8stagemap9StageDataESaIS1_EE5beginEv>
 8364990:	83 ec 04             	sub    $0x4,%esp
 8364993:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 836499a:	e9 a0 00 00 00       	jmp    8364a3f <_ZN12StageMapList8loadListEv+0x1e3>
 836499f:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 83649a5:	89 04 24             	mov    %eax,(%esp)
 83649a8:	e8 fd fe 00 00       	call   83748aa <_ZN12StageMapList16_StageMapSummaryC1Ev>
 83649ad:	c6 85 60 ff ff ff 00 	movb   $0x0,-0xa0(%ebp)
 83649b4:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 83649ba:	89 04 24             	mov    %eax,(%esp)
 83649bd:	e8 28 0d 03 00       	call   83956ea <_ZNK9__gnu_cxx17__normal_iteratorIPN8stagemap9StageDataESt6vectorIS2_SaIS2_EEEptEv>
 83649c2:	8b 00                	mov    (%eax),%eax
 83649c4:	89 85 58 ff ff ff    	mov    %eax,-0xa8(%ebp)
 83649ca:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 83649d0:	89 04 24             	mov    %eax,(%esp)
 83649d3:	e8 5e 0c 03 00       	call   8395636 <_ZNK9__gnu_cxx17__normal_iteratorIPN8stagemap12DistrictDataESt6vectorIS2_SaIS2_EEEptEv>
 83649d8:	8b 18                	mov    (%eax),%ebx
 83649da:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 83649e0:	89 04 24             	mov    %eax,(%esp)
 83649e3:	e8 9a 0b 03 00       	call   8395582 <_ZNK9__gnu_cxx17__normal_iteratorIPN8stagemap8AreaDataESt6vectorIS2_SaIS2_EEEptEv>
 83649e8:	8b 00                	mov    (%eax),%eax
 83649ea:	8b 55 f0             	mov    -0x10(%ebp),%edx
 83649ed:	89 54 24 08          	mov    %edx,0x8(%esp)
 83649f1:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 83649f5:	89 04 24             	mov    %eax,(%esp)
 83649f8:	e8 1b fe ff ff       	call   8364818 <_ZN12StageMapList20makeStageMapUniqueIdEiii>
 83649fd:	89 85 54 ff ff ff    	mov    %eax,-0xac(%ebp)
 8364a03:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 8364a09:	89 44 24 04          	mov    %eax,0x4(%esp)
 8364a0d:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 8364a13:	89 04 24             	mov    %eax,(%esp)
 8364a16:	e8 d9 0c 03 00       	call   83956f4 <_ZNSt6vectorIN12StageMapList16_StageMapSummaryESaIS1_EE9push_backERKS1_>
 8364a1b:	8d 45 90             	lea    -0x70(%ebp),%eax
 8364a1e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8364a25:	00 
 8364a26:	8d 95 64 ff ff ff    	lea    -0x9c(%ebp),%edx
 8364a2c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8364a30:	89 04 24             	mov    %eax,(%esp)
 8364a33:	e8 7e 0c 03 00       	call   83956b6 <_ZN9__gnu_cxx17__normal_iteratorIPN8stagemap9StageDataESt6vectorIS2_SaIS2_EEEppEi>
 8364a38:	83 ec 04             	sub    $0x4,%esp
 8364a3b:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8364a3f:	8d 45 8c             	lea    -0x74(%ebp),%eax
 8364a42:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8364a45:	89 54 24 04          	mov    %edx,0x4(%esp)
 8364a49:	89 04 24             	mov    %eax,(%esp)
 8364a4c:	e8 13 0c 03 00       	call   8395664 <_ZNSt6vectorIN8stagemap9StageDataESaIS1_EE3endEv>
 8364a51:	83 ec 04             	sub    $0x4,%esp
 8364a54:	8d 45 8c             	lea    -0x74(%ebp),%eax
 8364a57:	89 44 24 04          	mov    %eax,0x4(%esp)
 8364a5b:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 8364a61:	89 04 24             	mov    %eax,(%esp)
 8364a64:	e8 21 0c 03 00       	call   839568a <_ZN9__gnu_cxxneIPN8stagemap9StageDataESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 8364a69:	84 c0                	test   %al,%al
 8364a6b:	0f 85 2e ff ff ff    	jne    836499f <_ZN12StageMapList8loadListEv+0x143>
 8364a71:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 8364a77:	89 04 24             	mov    %eax,(%esp)
 8364a7a:	e8 b7 0b 03 00       	call   8395636 <_ZNK9__gnu_cxx17__normal_iteratorIPN8stagemap12DistrictDataESt6vectorIS2_SaIS2_EEEptEv>
 8364a7f:	8b 00                	mov    (%eax),%eax
 8364a81:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8364a84:	8d 45 94             	lea    -0x6c(%ebp),%eax
 8364a87:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8364a8e:	00 
 8364a8f:	8d 95 68 ff ff ff    	lea    -0x98(%ebp),%edx
 8364a95:	89 54 24 04          	mov    %edx,0x4(%esp)
 8364a99:	89 04 24             	mov    %eax,(%esp)
 8364a9c:	e8 61 0b 03 00       	call   8395602 <_ZN9__gnu_cxx17__normal_iteratorIPN8stagemap12DistrictDataESt6vectorIS2_SaIS2_EEEppEi>
 8364aa1:	83 ec 04             	sub    $0x4,%esp
 8364aa4:	8d 45 88             	lea    -0x78(%ebp),%eax
 8364aa7:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8364aaa:	89 54 24 04          	mov    %edx,0x4(%esp)
 8364aae:	89 04 24             	mov    %eax,(%esp)
 8364ab1:	e8 fa 0a 03 00       	call   83955b0 <_ZNSt6vectorIN8stagemap12DistrictDataESaIS1_EE3endEv>
 8364ab6:	83 ec 04             	sub    $0x4,%esp
 8364ab9:	8d 45 88             	lea    -0x78(%ebp),%eax
 8364abc:	89 44 24 04          	mov    %eax,0x4(%esp)
 8364ac0:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 8364ac6:	89 04 24             	mov    %eax,(%esp)
 8364ac9:	e8 08 0b 03 00       	call   83955d6 <_ZN9__gnu_cxxneIPN8stagemap12DistrictDataESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 8364ace:	84 c0                	test   %al,%al
 8364ad0:	0f 85 91 fe ff ff    	jne    8364967 <_ZN12StageMapList8loadListEv+0x10b>
 8364ad6:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 8364add:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 8364ae1:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 8364ae7:	89 04 24             	mov    %eax,(%esp)
 8364aea:	e8 93 0a 03 00       	call   8395582 <_ZNK9__gnu_cxx17__normal_iteratorIPN8stagemap8AreaDataESt6vectorIS2_SaIS2_EEEptEv>
 8364aef:	8b 40 2c             	mov    0x2c(%eax),%eax
 8364af2:	85 c0                	test   %eax,%eax
 8364af4:	0f 9f c0             	setg   %al
 8364af7:	84 c0                	test   %al,%al
 8364af9:	74 70                	je     8364b6b <_ZN12StageMapList8loadListEv+0x30f>
 8364afb:	8d 85 44 ff ff ff    	lea    -0xbc(%ebp),%eax
 8364b01:	89 04 24             	mov    %eax,(%esp)
 8364b04:	e8 a1 fd 00 00       	call   83748aa <_ZN12StageMapList16_StageMapSummaryC1Ev>
 8364b09:	c6 85 50 ff ff ff 01 	movb   $0x1,-0xb0(%ebp)
 8364b10:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 8364b16:	89 04 24             	mov    %eax,(%esp)
 8364b19:	e8 64 0a 03 00       	call   8395582 <_ZNK9__gnu_cxx17__normal_iteratorIPN8stagemap8AreaDataESt6vectorIS2_SaIS2_EEEptEv>
 8364b1e:	8b 40 2c             	mov    0x2c(%eax),%eax
 8364b21:	89 85 48 ff ff ff    	mov    %eax,-0xb8(%ebp)
 8364b27:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 8364b2d:	89 04 24             	mov    %eax,(%esp)
 8364b30:	e8 4d 0a 03 00       	call   8395582 <_ZNK9__gnu_cxx17__normal_iteratorIPN8stagemap8AreaDataESt6vectorIS2_SaIS2_EEEptEv>
 8364b35:	8b 00                	mov    (%eax),%eax
 8364b37:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8364b3a:	89 54 24 08          	mov    %edx,0x8(%esp)
 8364b3e:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8364b41:	89 54 24 04          	mov    %edx,0x4(%esp)
 8364b45:	89 04 24             	mov    %eax,(%esp)
 8364b48:	e8 cb fc ff ff       	call   8364818 <_ZN12StageMapList20makeStageMapUniqueIdEiii>
 8364b4d:	89 85 44 ff ff ff    	mov    %eax,-0xbc(%ebp)
 8364b53:	8d 85 44 ff ff ff    	lea    -0xbc(%ebp),%eax
 8364b59:	89 44 24 04          	mov    %eax,0x4(%esp)
 8364b5d:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 8364b63:	89 04 24             	mov    %eax,(%esp)
 8364b66:	e8 89 0b 03 00       	call   83956f4 <_ZNSt6vectorIN12StageMapList16_StageMapSummaryESaIS1_EE9push_backERKS1_>
 8364b6b:	8d 45 98             	lea    -0x68(%ebp),%eax
 8364b6e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8364b75:	00 
 8364b76:	8d 95 6c ff ff ff    	lea    -0x94(%ebp),%edx
 8364b7c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8364b80:	89 04 24             	mov    %eax,(%esp)
 8364b83:	e8 c6 09 03 00       	call   839554e <_ZN9__gnu_cxx17__normal_iteratorIPN8stagemap8AreaDataESt6vectorIS2_SaIS2_EEEppEi>
 8364b88:	83 ec 04             	sub    $0x4,%esp
 8364b8b:	8d 45 84             	lea    -0x7c(%ebp),%eax
 8364b8e:	8d 95 24 ff ff ff    	lea    -0xdc(%ebp),%edx
 8364b94:	83 c2 14             	add    $0x14,%edx
 8364b97:	89 54 24 04          	mov    %edx,0x4(%esp)
 8364b9b:	89 04 24             	mov    %eax,(%esp)
 8364b9e:	e8 59 09 03 00       	call   83954fc <_ZNSt6vectorIN8stagemap8AreaDataESaIS1_EE3endEv>
 8364ba3:	83 ec 04             	sub    $0x4,%esp
 8364ba6:	8d 45 84             	lea    -0x7c(%ebp),%eax
 8364ba9:	89 44 24 04          	mov    %eax,0x4(%esp)
 8364bad:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 8364bb3:	89 04 24             	mov    %eax,(%esp)
 8364bb6:	e8 67 09 03 00       	call   8395522 <_ZN9__gnu_cxxneIPN8stagemap8AreaDataESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 8364bbb:	84 c0                	test   %al,%al
 8364bbd:	0f 85 6c fd ff ff    	jne    836492f <_ZN12StageMapList8loadListEv+0xd3>
 8364bc3:	bb 01 00 00 00       	mov    $0x1,%ebx
 8364bc8:	eb 1b                	jmp    8364be5 <_ZN12StageMapList8loadListEv+0x389>
 8364bca:	89 d3                	mov    %edx,%ebx
 8364bcc:	89 c6                	mov    %eax,%esi
 8364bce:	8d 85 24 ff ff ff    	lea    -0xdc(%ebp),%eax
 8364bd4:	89 04 24             	mov    %eax,(%esp)
 8364bd7:	e8 a6 ab 01 00       	call   837f782 <_ZN8stagemap14StageMapScriptD1Ev>
 8364bdc:	89 f0                	mov    %esi,%eax
 8364bde:	89 da                	mov    %ebx,%edx
 8364be0:	e9 d9 01 00 00       	jmp    8364dbe <_ZN12StageMapList8loadListEv+0x562>
 8364be5:	8d 85 24 ff ff ff    	lea    -0xdc(%ebp),%eax
 8364beb:	89 04 24             	mov    %eax,(%esp)
 8364bee:	e8 8f ab 01 00       	call   837f782 <_ZN8stagemap14StageMapScriptD1Ev>
 8364bf3:	85 db                	test   %ebx,%ebx
 8364bf5:	0f 84 e1 01 00 00    	je     8364ddc <_ZN12StageMapList8loadListEv+0x580>
 8364bfb:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8364bfe:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8364c05:	00 
 8364c06:	8d 95 70 ff ff ff    	lea    -0x90(%ebp),%edx
 8364c0c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8364c10:	89 04 24             	mov    %eax,(%esp)
 8364c13:	e8 cc ca fd ff       	call   83416e4 <_ZNSt17_Rb_tree_iteratorISt4pairIKiSsEEppEi>
 8364c18:	83 ec 04             	sub    $0x4,%esp
 8364c1b:	8d 45 80             	lea    -0x80(%ebp),%eax
 8364c1e:	c7 44 24 04 20 4e 49 	movl   $0x9494e20,0x4(%esp)
 8364c25:	09 
 8364c26:	89 04 24             	mov    %eax,(%esp)
 8364c29:	e8 ea 14 d8 ff       	call   80e6118 <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEE3endEv>
 8364c2e:	83 ec 04             	sub    $0x4,%esp
 8364c31:	8d 45 80             	lea    -0x80(%ebp),%eax
 8364c34:	89 44 24 04          	mov    %eax,0x4(%esp)
 8364c38:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 8364c3e:	89 04 24             	mov    %eax,(%esp)
 8364c41:	e8 f8 14 d8 ff       	call   80e613e <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSsEEneERKS3_>
 8364c46:	84 c0                	test   %al,%al
 8364c48:	0f 85 4c fc ff ff    	jne    836489a <_ZN12StageMapList8loadListEv+0x3e>
 8364c4e:	eb 01                	jmp    8364c51 <_ZN12StageMapList8loadListEv+0x3f5>
 8364c50:	90                   	nop
 8364c51:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8364c54:	8d 95 74 ff ff ff    	lea    -0x8c(%ebp),%edx
 8364c5a:	89 54 24 04          	mov    %edx,0x4(%esp)
 8364c5e:	89 04 24             	mov    %eax,(%esp)
 8364c61:	e8 26 0b 03 00       	call   839578c <_ZNSt6vectorIN12StageMapList16_StageMapSummaryESaIS1_EE3endEv>
 8364c66:	83 ec 04             	sub    $0x4,%esp
 8364c69:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8364c6c:	8d 95 74 ff ff ff    	lea    -0x8c(%ebp),%edx
 8364c72:	89 54 24 04          	mov    %edx,0x4(%esp)
 8364c76:	89 04 24             	mov    %eax,(%esp)
 8364c79:	e8 ea 0a 03 00       	call   8395768 <_ZNSt6vectorIN12StageMapList16_StageMapSummaryESaIS1_EE5beginEv>
 8364c7e:	83 ec 04             	sub    $0x4,%esp
 8364c81:	c7 44 24 08 48 48 36 	movl   $0x8364848,0x8(%esp)
 8364c88:	08 
 8364c89:	8b 45 a0             	mov    -0x60(%ebp),%eax
 8364c8c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8364c90:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 8364c93:	89 04 24             	mov    %eax,(%esp)
 8364c96:	e8 17 0b 03 00       	call   83957b2 <_ZSt4sortIN9__gnu_cxx17__normal_iteratorIPN12StageMapList16_StageMapSummaryESt6vectorIS3_SaIS3_EEEEPFbRKS3_SA_EEvT_SD_T0_>
 8364c9b:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 8364ca2:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8364ca9:	e9 ed 00 00 00       	jmp    8364d9b <_ZN12StageMapList8loadListEv+0x53f>
 8364cae:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8364cb2:	75 1d                	jne    8364cd1 <_ZN12StageMapList8loadListEv+0x475>
 8364cb4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8364cb7:	89 44 24 04          	mov    %eax,0x4(%esp)
 8364cbb:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 8364cc1:	89 04 24             	mov    %eax,(%esp)
 8364cc4:	e8 77 0b 03 00       	call   8395840 <_ZNSt6vectorIN12StageMapList16_StageMapSummaryESaIS1_EEixEj>
 8364cc9:	8b 50 04             	mov    0x4(%eax),%edx
 8364ccc:	8b 45 08             	mov    0x8(%ebp),%eax
 8364ccf:	89 10                	mov    %edx,(%eax)
 8364cd1:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 8364cd7:	89 04 24             	mov    %eax,(%esp)
 8364cda:	e8 45 0b 03 00       	call   8395824 <_ZNKSt6vectorIN12StageMapList16_StageMapSummaryESaIS1_EE4sizeEv>
 8364cdf:	83 e8 01             	sub    $0x1,%eax
 8364ce2:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 8364ce5:	0f 95 c0             	setne  %al
 8364ce8:	84 c0                	test   %al,%al
 8364cea:	74 35                	je     8364d21 <_ZN12StageMapList8loadListEv+0x4c5>
 8364cec:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8364cef:	89 44 24 04          	mov    %eax,0x4(%esp)
 8364cf3:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 8364cf9:	89 04 24             	mov    %eax,(%esp)
 8364cfc:	e8 3f 0b 03 00       	call   8395840 <_ZNSt6vectorIN12StageMapList16_StageMapSummaryESaIS1_EEixEj>
 8364d01:	89 c3                	mov    %eax,%ebx
 8364d03:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8364d06:	83 c0 01             	add    $0x1,%eax
 8364d09:	89 44 24 04          	mov    %eax,0x4(%esp)
 8364d0d:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 8364d13:	89 04 24             	mov    %eax,(%esp)
 8364d16:	e8 25 0b 03 00       	call   8395840 <_ZNSt6vectorIN12StageMapList16_StageMapSummaryESaIS1_EEixEj>
 8364d1b:	8b 40 04             	mov    0x4(%eax),%eax
 8364d1e:	89 43 08             	mov    %eax,0x8(%ebx)
 8364d21:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8364d24:	89 44 24 04          	mov    %eax,0x4(%esp)
 8364d28:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 8364d2e:	89 04 24             	mov    %eax,(%esp)
 8364d31:	e8 0a 0b 03 00       	call   8395840 <_ZNSt6vectorIN12StageMapList16_StageMapSummaryESaIS1_EEixEj>
 8364d36:	89 c3                	mov    %eax,%ebx
 8364d38:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8364d3b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8364d3f:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 8364d45:	89 04 24             	mov    %eax,(%esp)
 8364d48:	e8 f3 0a 03 00       	call   8395840 <_ZNSt6vectorIN12StageMapList16_StageMapSummaryESaIS1_EEixEj>
 8364d4d:	8d 50 04             	lea    0x4(%eax),%edx
 8364d50:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8364d53:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8364d57:	89 54 24 04          	mov    %edx,0x4(%esp)
 8364d5b:	89 04 24             	mov    %eax,(%esp)
 8364d5e:	e8 ef 0a 03 00       	call   8395852 <_ZSt9make_pairIRiRN12StageMapList16_StageMapSummaryEESt4pairINSt17__decay_and_stripIT_E6__typeENS5_IT0_E6__typeEEOS6_OS9_>
 8364d63:	83 ec 04             	sub    $0x4,%esp
 8364d66:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8364d69:	89 44 24 04          	mov    %eax,0x4(%esp)
 8364d6d:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8364d70:	89 04 24             	mov    %eax,(%esp)
 8364d73:	e8 18 0b 03 00       	call   8395890 <_ZNSt4pairIKiN12StageMapList16_StageMapSummaryEEC1IiS2_EEOS_IT_T0_E>
 8364d78:	8b 45 08             	mov    0x8(%ebp),%eax
 8364d7b:	8d 48 04             	lea    0x4(%eax),%ecx
 8364d7e:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8364d81:	8d 55 b0             	lea    -0x50(%ebp),%edx
 8364d84:	89 54 24 08          	mov    %edx,0x8(%esp)
 8364d88:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8364d8c:	89 04 24             	mov    %eax,(%esp)
 8364d8f:	e8 40 0b 03 00       	call   83958d4 <_ZNSt3mapIiN12StageMapList16_StageMapSummaryESt4lessIiESaISt4pairIKiS1_EEE6insertERKS6_>
 8364d94:	83 ec 04             	sub    $0x4,%esp
 8364d97:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8364d9b:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 8364da1:	89 04 24             	mov    %eax,(%esp)
 8364da4:	e8 7b 0a 03 00       	call   8395824 <_ZNKSt6vectorIN12StageMapList16_StageMapSummaryESaIS1_EE4sizeEv>
 8364da9:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 8364dac:	0f 97 c0             	seta   %al
 8364daf:	84 c0                	test   %al,%al
 8364db1:	0f 85 f7 fe ff ff    	jne    8364cae <_ZN12StageMapList8loadListEv+0x452>
 8364db7:	be 01 00 00 00       	mov    $0x1,%esi
 8364dbc:	eb 1e                	jmp    8364ddc <_ZN12StageMapList8loadListEv+0x580>
 8364dbe:	89 d3                	mov    %edx,%ebx
 8364dc0:	89 c6                	mov    %eax,%esi
 8364dc2:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 8364dc8:	89 04 24             	mov    %eax,(%esp)
 8364dcb:	e8 aa 06 03 00       	call   839547a <_ZNSt6vectorIN12StageMapList16_StageMapSummaryESaIS1_EED1Ev>
 8364dd0:	89 f0                	mov    %esi,%eax
 8364dd2:	89 da                	mov    %ebx,%edx
 8364dd4:	89 04 24             	mov    %eax,(%esp)
 8364dd7:	e8 74 e9 77 00       	call   8ae3750 <_Unwind_Resume>
 8364ddc:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 8364de2:	89 04 24             	mov    %eax,(%esp)
 8364de5:	e8 90 06 03 00       	call   839547a <_ZNSt6vectorIN12StageMapList16_StageMapSummaryESaIS1_EED1Ev>
 8364dea:	89 f0                	mov    %esi,%eax
 8364dec:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8364def:	83 c4 00             	add    $0x0,%esp
 8364df2:	5b                   	pop    %ebx
 8364df3:	5e                   	pop    %esi
 8364df4:	5d                   	pop    %ebp
 8364df5:	c3                   	ret

```

```c
// StageMapList::loadList @ 0x836485c

/* StageMapList::loadList() */

undefined4 __thiscall StageMapList::loadList(StageMapList *this)

{
  bool bVar1;
  char cVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 unaff_ESI;
  StageMapScript local_e0 [32];
  undefined4 local_c0;
  undefined4 local_bc;
  undefined1 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined1 local_a4;
  __normal_iterator<stagemap::StageData*,std::vector<stagemap::StageData,std::allocator<stagemap::StageData>>>
  local_a0 [4];
  __normal_iterator<stagemap::DistrictData*,std::vector<stagemap::DistrictData,std::allocator<stagemap::DistrictData>>>
  local_9c [4];
  __normal_iterator<stagemap::AreaData*,std::vector<stagemap::AreaData,std::allocator<stagemap::AreaData>>>
  local_98 [4];
  map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> local_94 [4];
  vector<StageMapList::_StageMapSummary,std::allocator<StageMapList::_StageMapSummary>>
  local_90 [12];
  map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> local_84 [4];
  __normal_iterator local_80 [4];
  __normal_iterator local_7c [4];
  __normal_iterator local_78 [4];
  __normal_iterator<stagemap::StageData*,std::vector<stagemap::StageData,std::allocator<stagemap::StageData>>>
  local_74 [4];
  __normal_iterator<stagemap::DistrictData*,std::vector<stagemap::DistrictData,std::allocator<stagemap::DistrictData>>>
  local_70 [4];
  __normal_iterator<stagemap::AreaData*,std::vector<stagemap::AreaData,std::allocator<stagemap::AreaData>>>
  local_6c [4];
  _Rb_tree_iterator<std::pair<int_const,std::string>> local_68 [4];
  undefined4 local_64;
  undefined4 local_60;
  pair local_5c [8];
  pair<int_const,StageMapList::_StageMapSummary> local_54 [20];
  int local_40 [5];
  char *local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  uint local_10;
  
  std::vector<StageMapList::_StageMapSummary,std::allocator<StageMapList::_StageMapSummary>>::vector
            (local_90);
  local_2c = (char *)0x0;
                    /* try { // try from 0836488d to 083648cd has its CatchHandler @ 08364dbe */
  std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::begin
            (local_94);
  while( true ) {
    std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::end
              (local_84);
    cVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)local_94,
                       (_Rb_tree_iterator *)local_84);
    if (cVar2 == '\0') break;
    iVar5 = std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)local_94);
    local_2c = (char *)std::string::c_str((string *)(iVar5 + 4));
    if (local_2c == (char *)0x0) break;
    stagemap::StageMapScript::StageMapScript(local_e0);
                    /* try { // try from 083648de to 08364bba has its CatchHandler @ 08364bca */
    cVar2 = importStageMapScript(local_e0,local_2c);
    if (cVar2 == '\x01') {
      std::vector<stagemap::AreaData,std::allocator<stagemap::AreaData>>::begin();
      while( true ) {
        std::vector<stagemap::AreaData,std::allocator<stagemap::AreaData>>::end();
        bVar1 = __gnu_cxx::operator!=(local_98,local_80);
        if (!bVar1) break;
        local_24 = 0;
        local_20 = __gnu_cxx::
                   __normal_iterator<stagemap::AreaData*,std::vector<stagemap::AreaData,std::allocator<stagemap::AreaData>>>
                   ::operator->(local_98);
        local_20 = local_20 + 0x20;
        std::vector<stagemap::DistrictData,std::allocator<stagemap::DistrictData>>::begin();
        while( true ) {
          std::vector<stagemap::DistrictData,std::allocator<stagemap::DistrictData>>::end();
          bVar1 = __gnu_cxx::operator!=(local_9c,local_7c);
          if (!bVar1) break;
          local_18 = __gnu_cxx::
                     __normal_iterator<stagemap::DistrictData*,std::vector<stagemap::DistrictData,std::allocator<stagemap::DistrictData>>>
                     ::operator->(local_9c);
          local_18 = local_18 + 4;
          std::vector<stagemap::StageData,std::allocator<stagemap::StageData>>::begin();
          local_14 = 0;
          while( true ) {
            std::vector<stagemap::StageData,std::allocator<stagemap::StageData>>::end();
            bVar1 = __gnu_cxx::operator!=(local_a0,local_78);
            if (!bVar1) break;
            _StageMapSummary::_StageMapSummary((_StageMapSummary *)&local_b0);
            local_a4 = 0;
            puVar3 = (undefined4 *)
                     __gnu_cxx::
                     __normal_iterator<stagemap::StageData*,std::vector<stagemap::StageData,std::allocator<stagemap::StageData>>>
                     ::operator->(local_a0);
            local_ac = *puVar3;
            piVar4 = (int *)__gnu_cxx::
                            __normal_iterator<stagemap::DistrictData*,std::vector<stagemap::DistrictData,std::allocator<stagemap::DistrictData>>>
                            ::operator->(local_9c);
            iVar5 = *piVar4;
            piVar4 = (int *)__gnu_cxx::
                            __normal_iterator<stagemap::AreaData*,std::vector<stagemap::AreaData,std::allocator<stagemap::AreaData>>>
                            ::operator->(local_98);
            local_b0 = makeStageMapUniqueId(*piVar4,iVar5,local_14);
            std::
            vector<StageMapList::_StageMapSummary,std::allocator<StageMapList::_StageMapSummary>>::
            push_back(local_90,(_StageMapSummary *)&local_b0);
            __gnu_cxx::
            __normal_iterator<stagemap::StageData*,std::vector<stagemap::StageData,std::allocator<stagemap::StageData>>>
            ::operator++(local_74,(int)local_a0);
            local_14 = local_14 + 1;
          }
          piVar4 = (int *)__gnu_cxx::
                          __normal_iterator<stagemap::DistrictData*,std::vector<stagemap::DistrictData,std::allocator<stagemap::DistrictData>>>
                          ::operator->(local_9c);
          local_24 = *piVar4;
          __gnu_cxx::
          __normal_iterator<stagemap::DistrictData*,std::vector<stagemap::DistrictData,std::allocator<stagemap::DistrictData>>>
          ::operator++(local_70,(int)local_9c);
        }
        local_1c = 0;
        local_24 = local_24 + 1;
        iVar5 = __gnu_cxx::
                __normal_iterator<stagemap::AreaData*,std::vector<stagemap::AreaData,std::allocator<stagemap::AreaData>>>
                ::operator->(local_98);
        if (0 < *(int *)(iVar5 + 0x2c)) {
          _StageMapSummary::_StageMapSummary((_StageMapSummary *)&local_c0);
          local_b4 = 1;
          iVar5 = __gnu_cxx::
                  __normal_iterator<stagemap::AreaData*,std::vector<stagemap::AreaData,std::allocator<stagemap::AreaData>>>
                  ::operator->(local_98);
          local_bc = *(undefined4 *)(iVar5 + 0x2c);
          piVar4 = (int *)__gnu_cxx::
                          __normal_iterator<stagemap::AreaData*,std::vector<stagemap::AreaData,std::allocator<stagemap::AreaData>>>
                          ::operator->(local_98);
          local_c0 = makeStageMapUniqueId(*piVar4,local_24,local_1c);
          std::vector<StageMapList::_StageMapSummary,std::allocator<StageMapList::_StageMapSummary>>
          ::push_back(local_90,(_StageMapSummary *)&local_c0);
        }
        __gnu_cxx::
        __normal_iterator<stagemap::AreaData*,std::vector<stagemap::AreaData,std::allocator<stagemap::AreaData>>>
        ::operator++(local_6c,(int)local_98);
      }
      bVar1 = true;
    }
    else {
      printf("Stage Map Script Error: %s\n",local_2c);
      unaff_ESI = 0;
      bVar1 = false;
    }
                    /* try { // try from 08364bee to 08364d93 has its CatchHandler @ 08364dbe */
    stagemap::StageMapScript::~StageMapScript(local_e0);
    if (!bVar1) goto LAB_08364ddc;
    std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator++(local_68,(int)local_94);
  }
  std::vector<StageMapList::_StageMapSummary,std::allocator<StageMapList::_StageMapSummary>>::end();
  std::vector<StageMapList::_StageMapSummary,std::allocator<StageMapList::_StageMapSummary>>::begin
            ();
  std::
  sort<__gnu_cxx::__normal_iterator<StageMapList::_StageMapSummary*,std::vector<StageMapList::_StageMapSummary,std::allocator<StageMapList::_StageMapSummary>>>,bool(*)(StageMapList::_StageMapSummary_const&,StageMapList::_StageMapSummary_const&)>
            (local_60,local_64,compare);
  local_28 = 0;
  local_10 = 0;
  while (uVar7 = std::
                 vector<StageMapList::_StageMapSummary,std::allocator<StageMapList::_StageMapSummary>>
                 ::size(local_90), local_10 < uVar7) {
    if (local_10 == 0) {
      iVar5 = std::
              vector<StageMapList::_StageMapSummary,std::allocator<StageMapList::_StageMapSummary>>
              ::operator[](local_90,0);
      *(undefined4 *)this = *(undefined4 *)(iVar5 + 4);
    }
    iVar5 = std::
            vector<StageMapList::_StageMapSummary,std::allocator<StageMapList::_StageMapSummary>>::
            size(local_90);
    if (iVar5 - 1U != local_10) {
      iVar5 = std::
              vector<StageMapList::_StageMapSummary,std::allocator<StageMapList::_StageMapSummary>>
              ::operator[](local_90,local_10);
      iVar6 = std::
              vector<StageMapList::_StageMapSummary,std::allocator<StageMapList::_StageMapSummary>>
              ::operator[](local_90,local_10 + 1);
      *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(iVar6 + 4);
    }
    std::vector<StageMapList::_StageMapSummary,std::allocator<StageMapList::_StageMapSummary>>::
    operator[](local_90,local_10);
    iVar5 = std::
            vector<StageMapList::_StageMapSummary,std::allocator<StageMapList::_StageMapSummary>>::
            operator[](local_90,local_10);
    std::make_pair<int&,StageMapList::_StageMapSummary&>(local_40,(_StageMapSummary *)(iVar5 + 4));
    std::pair<int_const,StageMapList::_StageMapSummary>::pair<int,StageMapList::_StageMapSummary>
              (local_54,(pair *)local_40);
    std::
    map<int,StageMapList::_StageMapSummary,std::less<int>,std::allocator<std::pair<int_const,StageMapList::_StageMapSummary>>>
    ::insert(local_5c);
    local_10 = local_10 + 1;
  }
  unaff_ESI = 1;
LAB_08364ddc:
  std::vector<StageMapList::_StageMapSummary,std::allocator<StageMapList::_StageMapSummary>>::
  ~vector(local_90);
  return unaff_ESI;
}

```

---

## makeStageMapUniqueId

```asm
// === 08364818 StageMapList::makeStageMapUniqueId  [0x08364818-0x8364847] ===
 8364818:	55                   	push   %ebp
 8364819:	89 e5                	mov    %esp,%ebp
 836481b:	83 45 08 64          	addl   $0x64,0x8(%ebp)
 836481f:	81 45 0c e8 03 00 00 	addl   $0x3e8,0xc(%ebp)
 8364826:	81 45 10 e8 03 00 00 	addl   $0x3e8,0x10(%ebp)
 836482d:	8b 45 08             	mov    0x8(%ebp),%eax
 8364830:	69 d0 00 e1 f5 05    	imul   $0x5f5e100,%eax,%edx
 8364836:	8b 45 0c             	mov    0xc(%ebp),%eax
 8364839:	69 c0 10 27 00 00    	imul   $0x2710,%eax,%eax
 836483f:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8364842:	03 45 10             	add    0x10(%ebp),%eax
 8364845:	5d                   	pop    %ebp
 8364846:	c3                   	ret
 8364847:	90                   	nop

```

```c
// StageMapList::makeStageMapUniqueId @ 0x8364818

/* StageMapList::makeStageMapUniqueId(int, int, int) */

int StageMapList::makeStageMapUniqueId(int param_1,int param_2,int param_3)

{
  return (param_1 + 100) * 100000000 + (param_2 + 1000) * 10000 + param_3 + 1000;
}

```

