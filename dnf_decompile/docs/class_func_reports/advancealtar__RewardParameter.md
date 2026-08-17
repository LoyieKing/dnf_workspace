# advancealtar__RewardParameter

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 6

---

## RewardParameter

```asm
// === 0889af74 advancealtar::RewardParameter::RewardParameter  [0x0889af74-0x889af87] ===
 889af74:	55                   	push   %ebp
 889af75:	89 e5                	mov    %esp,%ebp
 889af77:	83 ec 18             	sub    $0x18,%esp
 889af7a:	8b 45 08             	mov    0x8(%ebp),%eax
 889af7d:	89 04 24             	mov    %eax,(%esp)
 889af80:	e8 95 14 00 00       	call   889c41a <_ZNSt3mapIiN12advancealtar21AchievementRewardDataESt4lessIiESaISt4pairIKiS1_EEEC1Ev>
 889af85:	c9                   	leave
 889af86:	c3                   	ret
 889af87:	90                   	nop

```

```c
// advancealtar::RewardParameter::RewardParameter @ 0x889af74

/* advancealtar::RewardParameter::RewardParameter() */

void __thiscall advancealtar::RewardParameter::RewardParameter(RewardParameter *this)

{
  std::
  map<int,advancealtar::AchievementRewardData,std::less<int>,std::allocator<std::pair<int_const,advancealtar::AchievementRewardData>>>
  ::map((map<int,advancealtar::AchievementRewardData,std::less<int>,std::allocator<std::pair<int_const,advancealtar::AchievementRewardData>>>
         *)this);
  return;
}

```

---

## getAchievementRewardData

```asm
// === 0889b544 advancealtar::RewardParameter::getAchievementRewardData  [0x0889b544-0x889b5a7] ===
 889b544:	55                   	push   %ebp
 889b545:	89 e5                	mov    %esp,%ebp
 889b547:	83 ec 28             	sub    $0x28,%esp
 889b54a:	8b 55 08             	mov    0x8(%ebp),%edx
 889b54d:	8d 45 f0             	lea    -0x10(%ebp),%eax
 889b550:	8d 4d 0c             	lea    0xc(%ebp),%ecx
 889b553:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 889b557:	89 54 24 04          	mov    %edx,0x4(%esp)
 889b55b:	89 04 24             	mov    %eax,(%esp)
 889b55e:	e8 dd 10 00 00       	call   889c640 <_ZNKSt3mapIiN12advancealtar21AchievementRewardDataESt4lessIiESaISt4pairIKiS1_EEE4findERS5_>
 889b563:	83 ec 04             	sub    $0x4,%esp
 889b566:	8b 55 08             	mov    0x8(%ebp),%edx
 889b569:	8d 45 f4             	lea    -0xc(%ebp),%eax
 889b56c:	89 54 24 04          	mov    %edx,0x4(%esp)
 889b570:	89 04 24             	mov    %eax,(%esp)
 889b573:	e8 f4 10 00 00       	call   889c66c <_ZNKSt3mapIiN12advancealtar21AchievementRewardDataESt4lessIiESaISt4pairIKiS1_EEE3endEv>
 889b578:	83 ec 04             	sub    $0x4,%esp
 889b57b:	8d 45 f4             	lea    -0xc(%ebp),%eax
 889b57e:	89 44 24 04          	mov    %eax,0x4(%esp)
 889b582:	8d 45 f0             	lea    -0x10(%ebp),%eax
 889b585:	89 04 24             	mov    %eax,(%esp)
 889b588:	e8 05 11 00 00       	call   889c692 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiN12advancealtar21AchievementRewardDataEEEeqERKS5_>
 889b58d:	84 c0                	test   %al,%al
 889b58f:	74 07                	je     889b598 <_ZNK12advancealtar15RewardParameter24getAchievementRewardDataEi+0x54>
 889b591:	b8 00 00 00 00       	mov    $0x0,%eax
 889b596:	eb 0e                	jmp    889b5a6 <_ZNK12advancealtar15RewardParameter24getAchievementRewardDataEi+0x62>
 889b598:	8d 45 f0             	lea    -0x10(%ebp),%eax
 889b59b:	89 04 24             	mov    %eax,(%esp)
 889b59e:	e8 03 11 00 00       	call   889c6a6 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiN12advancealtar21AchievementRewardDataEEEptEv>
 889b5a3:	83 c0 04             	add    $0x4,%eax
 889b5a6:	c9                   	leave
 889b5a7:	c3                   	ret

```

```c
// advancealtar::RewardParameter::getAchievementRewardData @ 0x889b544

/* advancealtar::RewardParameter::getAchievementRewardData(int) const */

int advancealtar::RewardParameter::getAchievementRewardData(int param_1)

{
  char cVar1;
  int iVar2;
  _Rb_tree_const_iterator<std::pair<int_const,advancealtar::AchievementRewardData>> local_14 [4];
  map<int,advancealtar::AchievementRewardData,std::less<int>,std::allocator<std::pair<int_const,advancealtar::AchievementRewardData>>>
  local_10 [12];
  
  std::
  map<int,advancealtar::AchievementRewardData,std::less<int>,std::allocator<std::pair<int_const,advancealtar::AchievementRewardData>>>
  ::find((int *)local_14);
  std::
  map<int,advancealtar::AchievementRewardData,std::less<int>,std::allocator<std::pair<int_const,advancealtar::AchievementRewardData>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::AchievementRewardData>>::
          operator==(local_14,(_Rb_tree_const_iterator *)local_10);
  if (cVar1 == '\0') {
    iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::AchievementRewardData>>::
            operator->(local_14);
    iVar2 = iVar2 + 4;
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}

```

---

## getAchievementRewardData_0889b5a8

```asm
// === 0889b5a8 advancealtar::RewardParameter::getAchievementRewardData  [0x0889b5a8-0x889b661] ===
 889b5a8:	55                   	push   %ebp
 889b5a9:	89 e5                	mov    %esp,%ebp
 889b5ab:	83 ec 28             	sub    $0x28,%esp
 889b5ae:	8b 55 08             	mov    0x8(%ebp),%edx
 889b5b1:	8d 45 ec             	lea    -0x14(%ebp),%eax
 889b5b4:	89 54 24 04          	mov    %edx,0x4(%esp)
 889b5b8:	89 04 24             	mov    %eax,(%esp)
 889b5bb:	e8 f4 10 00 00       	call   889c6b4 <_ZNKSt3mapIiN12advancealtar21AchievementRewardDataESt4lessIiESaISt4pairIKiS1_EEE5beginEv>
 889b5c0:	83 ec 04             	sub    $0x4,%esp
 889b5c3:	eb 67                	jmp    889b62c <_ZNK12advancealtar15RewardParameter24getAchievementRewardDataENS_15StageDifficulty1TEi+0x84>
 889b5c5:	8d 45 ec             	lea    -0x14(%ebp),%eax
 889b5c8:	89 04 24             	mov    %eax,(%esp)
 889b5cb:	e8 d6 10 00 00       	call   889c6a6 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiN12advancealtar21AchievementRewardDataEEEptEv>
 889b5d0:	8b 40 08             	mov    0x8(%eax),%eax
 889b5d3:	89 c2                	mov    %eax,%edx
 889b5d5:	8b 45 0c             	mov    0xc(%ebp),%eax
 889b5d8:	39 c2                	cmp    %eax,%edx
 889b5da:	75 1a                	jne    889b5f6 <_ZNK12advancealtar15RewardParameter24getAchievementRewardDataENS_15StageDifficulty1TEi+0x4e>
 889b5dc:	8d 45 ec             	lea    -0x14(%ebp),%eax
 889b5df:	89 04 24             	mov    %eax,(%esp)
 889b5e2:	e8 bf 10 00 00       	call   889c6a6 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiN12advancealtar21AchievementRewardDataEEEptEv>
 889b5e7:	8b 40 0c             	mov    0xc(%eax),%eax
 889b5ea:	3b 45 10             	cmp    0x10(%ebp),%eax
 889b5ed:	75 07                	jne    889b5f6 <_ZNK12advancealtar15RewardParameter24getAchievementRewardDataENS_15StageDifficulty1TEi+0x4e>
 889b5ef:	b8 01 00 00 00       	mov    $0x1,%eax
 889b5f4:	eb 05                	jmp    889b5fb <_ZNK12advancealtar15RewardParameter24getAchievementRewardDataENS_15StageDifficulty1TEi+0x53>
 889b5f6:	b8 00 00 00 00       	mov    $0x0,%eax
 889b5fb:	84 c0                	test   %al,%al
 889b5fd:	74 10                	je     889b60f <_ZNK12advancealtar15RewardParameter24getAchievementRewardDataENS_15StageDifficulty1TEi+0x67>
 889b5ff:	8d 45 ec             	lea    -0x14(%ebp),%eax
 889b602:	89 04 24             	mov    %eax,(%esp)
 889b605:	e8 9c 10 00 00       	call   889c6a6 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiN12advancealtar21AchievementRewardDataEEEptEv>
 889b60a:	83 c0 04             	add    $0x4,%eax
 889b60d:	eb 51                	jmp    889b660 <_ZNK12advancealtar15RewardParameter24getAchievementRewardDataENS_15StageDifficulty1TEi+0xb8>
 889b60f:	8d 45 f4             	lea    -0xc(%ebp),%eax
 889b612:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 889b619:	00 
 889b61a:	8d 55 ec             	lea    -0x14(%ebp),%edx
 889b61d:	89 54 24 04          	mov    %edx,0x4(%esp)
 889b621:	89 04 24             	mov    %eax,(%esp)
 889b624:	e8 c5 10 00 00       	call   889c6ee <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiN12advancealtar21AchievementRewardDataEEEppEi>
 889b629:	83 ec 04             	sub    $0x4,%esp
 889b62c:	8b 55 08             	mov    0x8(%ebp),%edx
 889b62f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 889b632:	89 54 24 04          	mov    %edx,0x4(%esp)
 889b636:	89 04 24             	mov    %eax,(%esp)
 889b639:	e8 2e 10 00 00       	call   889c66c <_ZNKSt3mapIiN12advancealtar21AchievementRewardDataESt4lessIiESaISt4pairIKiS1_EEE3endEv>
 889b63e:	83 ec 04             	sub    $0x4,%esp
 889b641:	8d 45 f0             	lea    -0x10(%ebp),%eax
 889b644:	89 44 24 04          	mov    %eax,0x4(%esp)
 889b648:	8d 45 ec             	lea    -0x14(%ebp),%eax
 889b64b:	89 04 24             	mov    %eax,(%esp)
 889b64e:	e8 87 10 00 00       	call   889c6da <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiN12advancealtar21AchievementRewardDataEEEneERKS5_>
 889b653:	84 c0                	test   %al,%al
 889b655:	0f 85 6a ff ff ff    	jne    889b5c5 <_ZNK12advancealtar15RewardParameter24getAchievementRewardDataENS_15StageDifficulty1TEi+0x1d>
 889b65b:	b8 00 00 00 00       	mov    $0x0,%eax
 889b660:	c9                   	leave
 889b661:	c3                   	ret

```

```c
// advancealtar::RewardParameter::getAchievementRewardData @ 0x889b5a8

/* advancealtar::RewardParameter::getAchievementRewardData(advancealtar::StageDifficulty::T, int)
   const */

int __thiscall
advancealtar::RewardParameter::getAchievementRewardData(undefined4 this,int param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  map<int,advancealtar::AchievementRewardData,std::less<int>,std::allocator<std::pair<int_const,advancealtar::AchievementRewardData>>>
  local_18 [4];
  map<int,advancealtar::AchievementRewardData,std::less<int>,std::allocator<std::pair<int_const,advancealtar::AchievementRewardData>>>
  local_14 [4];
  _Rb_tree_const_iterator<std::pair<int_const,advancealtar::AchievementRewardData>> local_10 [12];
  
  std::
  map<int,advancealtar::AchievementRewardData,std::less<int>,std::allocator<std::pair<int_const,advancealtar::AchievementRewardData>>>
  ::begin(local_18);
  while( true ) {
    std::
    map<int,advancealtar::AchievementRewardData,std::less<int>,std::allocator<std::pair<int_const,advancealtar::AchievementRewardData>>>
    ::end(local_14);
    cVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::AchievementRewardData>>::
            operator!=((_Rb_tree_const_iterator<std::pair<int_const,advancealtar::AchievementRewardData>>
                        *)local_18,(_Rb_tree_const_iterator *)local_14);
    if (cVar2 == '\0') {
      return 0;
    }
    iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::AchievementRewardData>>::
            operator->((_Rb_tree_const_iterator<std::pair<int_const,advancealtar::AchievementRewardData>>
                        *)local_18);
    if ((*(int *)(iVar3 + 8) == param_2) &&
       (iVar3 = std::
                _Rb_tree_const_iterator<std::pair<int_const,advancealtar::AchievementRewardData>>::
                operator->((_Rb_tree_const_iterator<std::pair<int_const,advancealtar::AchievementRewardData>>
                            *)local_18), *(int *)(iVar3 + 0xc) == param_3)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) break;
    std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::AchievementRewardData>>::
    operator++(local_10,(int)local_18);
  }
  iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::AchievementRewardData>>::
          operator->((_Rb_tree_const_iterator<std::pair<int_const,advancealtar::AchievementRewardData>>
                      *)local_18);
  return iVar3 + 4;
}

```

---

## importAchievementRewardParameter

```asm
// === 0889afb0 advancealtar::RewardParameter::importAchievementRewardParameter  [0x0889afb0-0x889b543] ===
 889afb0:	55                   	push   %ebp
 889afb1:	89 e5                	mov    %esp,%ebp
 889afb3:	56                   	push   %esi
 889afb4:	53                   	push   %ebx
 889afb5:	81 ec c0 00 00 00    	sub    $0xc0,%esp
 889afbb:	8d 45 90             	lea    -0x70(%ebp),%eax
 889afbe:	89 04 24             	mov    %eax,(%esp)
 889afc1:	e8 0a b6 e6 ff       	call   87065d0 <_ZNSsC1Ev>
 889afc6:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 889afcd:	c6 45 8f 00          	movb   $0x0,-0x71(%ebp)
 889afd1:	8b 45 08             	mov    0x8(%ebp),%eax
 889afd4:	89 04 24             	mov    %eax,(%esp)
 889afd7:	e8 c0 ff ff ff       	call   889af9c <_ZN12advancealtar15RewardParameter5resetEv>
 889afdc:	8b 45 0c             	mov    0xc(%ebp),%eax
 889afdf:	89 44 24 04          	mov    %eax,0x4(%esp)
 889afe3:	c7 04 24 c1 52 e0 08 	movl   $0x8e052c1,(%esp)
 889afea:	e8 3a 0d 02 00       	call   88bbd29 <_Z18loadRDARScriptFilePKcS0_>
 889afef:	83 f0 01             	xor    $0x1,%eax
 889aff2:	84 c0                	test   %al,%al
 889aff4:	74 0b                	je     889b001 <_ZN12advancealtar15RewardParameter32importAchievementRewardParameterEPKc+0x51>
 889aff6:	bb 00 00 00 00       	mov    $0x0,%ebx
 889affb:	e9 2c 05 00 00       	jmp    889b52c <_ZN12advancealtar15RewardParameter32importAchievementRewardParameterEPKc+0x57c>
 889b000:	90                   	nop
 889b001:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 889b008:	00 
 889b009:	8d 45 90             	lea    -0x70(%ebp),%eax
 889b00c:	89 04 24             	mov    %eax,(%esp)
 889b00f:	e8 4b 18 02 00       	call   88bc85f <_Z8ScanTypeRSsb>
 889b014:	83 f0 01             	xor    $0x1,%eax
 889b017:	84 c0                	test   %al,%al
 889b019:	0f 85 ea 04 00 00    	jne    889b509 <_ZN12advancealtar15RewardParameter32importAchievementRewardParameterEPKc+0x559>
 889b01f:	c7 44 24 04 bf 54 e0 	movl   $0x8e054bf,0x4(%esp)
 889b026:	08 
 889b027:	8d 45 90             	lea    -0x70(%ebp),%eax
 889b02a:	89 04 24             	mov    %eax,(%esp)
 889b02d:	e8 6f 59 7e ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 889b032:	84 c0                	test   %al,%al
 889b034:	74 ca                	je     889b000 <_ZN12advancealtar15RewardParameter32importAchievementRewardParameterEPKc+0x50>
 889b036:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 889b03c:	89 04 24             	mov    %eax,(%esp)
 889b03f:	e8 c2 fc ff ff       	call   889ad06 <_ZN12advancealtar21AchievementRewardDataC1Ev>
 889b044:	eb 19                	jmp    889b05f <_ZN12advancealtar15RewardParameter32importAchievementRewardParameterEPKc+0xaf>
 889b046:	90                   	nop
 889b047:	eb 16                	jmp    889b05f <_ZN12advancealtar15RewardParameter32importAchievementRewardParameterEPKc+0xaf>
 889b049:	90                   	nop
 889b04a:	eb 13                	jmp    889b05f <_ZN12advancealtar15RewardParameter32importAchievementRewardParameterEPKc+0xaf>
 889b04c:	90                   	nop
 889b04d:	eb 10                	jmp    889b05f <_ZN12advancealtar15RewardParameter32importAchievementRewardParameterEPKc+0xaf>
 889b04f:	90                   	nop
 889b050:	eb 0d                	jmp    889b05f <_ZN12advancealtar15RewardParameter32importAchievementRewardParameterEPKc+0xaf>
 889b052:	90                   	nop
 889b053:	eb 0a                	jmp    889b05f <_ZN12advancealtar15RewardParameter32importAchievementRewardParameterEPKc+0xaf>
 889b055:	90                   	nop
 889b056:	eb 07                	jmp    889b05f <_ZN12advancealtar15RewardParameter32importAchievementRewardParameterEPKc+0xaf>
 889b058:	90                   	nop
 889b059:	eb 04                	jmp    889b05f <_ZN12advancealtar15RewardParameter32importAchievementRewardParameterEPKc+0xaf>
 889b05b:	90                   	nop
 889b05c:	eb 01                	jmp    889b05f <_ZN12advancealtar15RewardParameter32importAchievementRewardParameterEPKc+0xaf>
 889b05e:	90                   	nop
 889b05f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 889b066:	00 
 889b067:	8d 45 90             	lea    -0x70(%ebp),%eax
 889b06a:	89 04 24             	mov    %eax,(%esp)
 889b06d:	e8 ed 17 02 00       	call   88bc85f <_Z8ScanTypeRSsb>
 889b072:	83 f0 01             	xor    $0x1,%eax
 889b075:	84 c0                	test   %al,%al
 889b077:	0f 85 55 04 00 00    	jne    889b4d2 <_ZN12advancealtar15RewardParameter32importAchievementRewardParameterEPKc+0x522>
 889b07d:	c7 44 24 04 cd 54 e0 	movl   $0x8e054cd,0x4(%esp)
 889b084:	08 
 889b085:	8d 45 90             	lea    -0x70(%ebp),%eax
 889b088:	89 04 24             	mov    %eax,(%esp)
 889b08b:	e8 11 59 7e ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 889b090:	84 c0                	test   %al,%al
 889b092:	0f 84 9a 00 00 00    	je     889b132 <_ZN12advancealtar15RewardParameter32importAchievementRewardParameterEPKc+0x182>
 889b098:	8d 45 c8             	lea    -0x38(%ebp),%eax
 889b09b:	8d 95 4c ff ff ff    	lea    -0xb4(%ebp),%edx
 889b0a1:	89 54 24 08          	mov    %edx,0x8(%esp)
 889b0a5:	8d 95 4c ff ff ff    	lea    -0xb4(%ebp),%edx
 889b0ab:	89 54 24 04          	mov    %edx,0x4(%esp)
 889b0af:	89 04 24             	mov    %eax,(%esp)
 889b0b2:	e8 f0 13 00 00       	call   889c4a7 <_ZSt9make_pairIRiRN12advancealtar21AchievementRewardDataEESt4pairINSt17__decay_and_stripIT_E6__typeENS5_IT0_E6__typeEEOS6_OS9_>
 889b0b7:	83 ec 04             	sub    $0x4,%esp
 889b0ba:	8d 45 c8             	lea    -0x38(%ebp),%eax
 889b0bd:	89 44 24 04          	mov    %eax,0x4(%esp)
 889b0c1:	8d 45 9c             	lea    -0x64(%ebp),%eax
 889b0c4:	89 04 24             	mov    %eax,(%esp)
 889b0c7:	e8 0e 15 00 00       	call   889c5da <_ZNSt4pairIKiN12advancealtar21AchievementRewardDataEEC1IiS2_EEOS_IT_T0_E>
 889b0cc:	8b 55 08             	mov    0x8(%ebp),%edx
 889b0cf:	8d 45 94             	lea    -0x6c(%ebp),%eax
 889b0d2:	8d 4d 9c             	lea    -0x64(%ebp),%ecx
 889b0d5:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 889b0d9:	89 54 24 04          	mov    %edx,0x4(%esp)
 889b0dd:	89 04 24             	mov    %eax,(%esp)
 889b0e0:	e8 2f 15 00 00       	call   889c614 <_ZNSt3mapIiN12advancealtar21AchievementRewardDataESt4lessIiESaISt4pairIKiS1_EEE6insertERKS6_>
 889b0e5:	83 ec 04             	sub    $0x4,%esp
 889b0e8:	8d 45 9c             	lea    -0x64(%ebp),%eax
 889b0eb:	89 04 24             	mov    %eax,(%esp)
 889b0ee:	e8 6f 09 00 00       	call   889ba62 <_ZNSt4pairIKiN12advancealtar21AchievementRewardDataEED1Ev>
 889b0f3:	eb 2d                	jmp    889b122 <_ZN12advancealtar15RewardParameter32importAchievementRewardParameterEPKc+0x172>
 889b0f5:	89 d3                	mov    %edx,%ebx
 889b0f7:	89 c6                	mov    %eax,%esi
 889b0f9:	8d 45 9c             	lea    -0x64(%ebp),%eax
 889b0fc:	89 04 24             	mov    %eax,(%esp)
 889b0ff:	e8 5e 09 00 00       	call   889ba62 <_ZNSt4pairIKiN12advancealtar21AchievementRewardDataEED1Ev>
 889b104:	89 f0                	mov    %esi,%eax
 889b106:	89 da                	mov    %ebx,%edx
 889b108:	eb 00                	jmp    889b10a <_ZN12advancealtar15RewardParameter32importAchievementRewardParameterEPKc+0x15a>
 889b10a:	89 d3                	mov    %edx,%ebx
 889b10c:	89 c6                	mov    %eax,%esi
 889b10e:	8d 45 c8             	lea    -0x38(%ebp),%eax
 889b111:	89 04 24             	mov    %eax,(%esp)
 889b114:	e8 33 09 00 00       	call   889ba4c <_ZNSt4pairIiN12advancealtar21AchievementRewardDataEED1Ev>
 889b119:	89 f0                	mov    %esi,%eax
 889b11b:	89 da                	mov    %ebx,%edx
 889b11d:	e9 b8 03 00 00       	jmp    889b4da <_ZN12advancealtar15RewardParameter32importAchievementRewardParameterEPKc+0x52a>
 889b122:	8d 45 c8             	lea    -0x38(%ebp),%eax
 889b125:	89 04 24             	mov    %eax,(%esp)
 889b128:	e8 1f 09 00 00       	call   889ba4c <_ZNSt4pairIiN12advancealtar21AchievementRewardDataEED1Ev>
 889b12d:	e9 a1 03 00 00       	jmp    889b4d3 <_ZN12advancealtar15RewardParameter32importAchievementRewardParameterEPKc+0x523>
 889b132:	c7 44 24 04 a2 54 e0 	movl   $0x8e054a2,0x4(%esp)
 889b139:	08 
 889b13a:	8d 45 90             	lea    -0x70(%ebp),%eax
 889b13d:	89 04 24             	mov    %eax,(%esp)
 889b140:	e8 5c 58 7e ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 889b145:	84 c0                	test   %al,%al
 889b147:	74 48                	je     889b191 <_ZN12advancealtar15RewardParameter32importAchievementRewardParameterEPKc+0x1e1>
 889b149:	8d 45 8f             	lea    -0x71(%ebp),%eax
 889b14c:	89 04 24             	mov    %eax,(%esp)
 889b14f:	e8 27 12 02 00       	call   88bc37b <_Z7ScanIntPb>
 889b154:	89 85 4c ff ff ff    	mov    %eax,-0xb4(%ebp)
 889b15a:	0f b6 45 8f          	movzbl -0x71(%ebp),%eax
 889b15e:	83 f0 01             	xor    $0x1,%eax
 889b161:	84 c0                	test   %al,%al
 889b163:	74 0f                	je     889b174 <_ZN12advancealtar15RewardParameter32importAchievementRewardParameterEPKc+0x1c4>
 889b165:	bb 62 03 00 00       	mov    $0x362,%ebx
 889b16a:	be 00 00 00 00       	mov    $0x0,%esi
 889b16f:	e9 7e 03 00 00       	jmp    889b4f2 <_ZN12advancealtar15RewardParameter32importAchievementRewardParameterEPKc+0x542>
 889b174:	8b 85 4c ff ff ff    	mov    -0xb4(%ebp),%eax
 889b17a:	85 c0                	test   %eax,%eax
 889b17c:	0f 8f c4 fe ff ff    	jg     889b046 <_ZN12advancealtar15RewardParameter32importAchievementRewardParameterEPKc+0x96>
 889b182:	bb 64 03 00 00       	mov    $0x364,%ebx
 889b187:	be 00 00 00 00       	mov    $0x0,%esi
 889b18c:	e9 61 03 00 00       	jmp    889b4f2 <_ZN12advancealtar15RewardParameter32importAchievementRewardParameterEPKc+0x542>
 889b191:	c7 44 24 04 dc 54 e0 	movl   $0x8e054dc,0x4(%esp)
 889b198:	08 
 889b199:	8d 45 90             	lea    -0x70(%ebp),%eax
 889b19c:	89 04 24             	mov    %eax,(%esp)
 889b19f:	e8 fd 57 7e ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 889b1a4:	84 c0                	test   %al,%al
 889b1a6:	0f 84 90 00 00 00    	je     889b23c <_ZN12advancealtar15RewardParameter32importAchievementRewardParameterEPKc+0x28c>
 889b1ac:	8d 45 88             	lea    -0x78(%ebp),%eax
 889b1af:	89 04 24             	mov    %eax,(%esp)
 889b1b2:	e8 19 b4 e6 ff       	call   87065d0 <_ZNSsC1Ev>
 889b1b7:	8d 45 88             	lea    -0x78(%ebp),%eax
 889b1ba:	89 04 24             	mov    %eax,(%esp)
 889b1bd:	e8 e0 15 02 00       	call   88bc7a2 <_Z7ScanStrPSs>
 889b1c2:	83 f0 01             	xor    $0x1,%eax
 889b1c5:	84 c0                	test   %al,%al
 889b1c7:	74 0c                	je     889b1d5 <_ZN12advancealtar15RewardParameter32importAchievementRewardParameterEPKc+0x225>
 889b1c9:	bb 6a 03 00 00       	mov    $0x36a,%ebx
 889b1ce:	be 00 00 00 00       	mov    $0x0,%esi
 889b1d3:	eb 4a                	jmp    889b21f <_ZN12advancealtar15RewardParameter32importAchievementRewardParameterEPKc+0x26f>
 889b1d5:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 889b1db:	83 c0 04             	add    $0x4,%eax
 889b1de:	89 44 24 04          	mov    %eax,0x4(%esp)
 889b1e2:	8d 45 88             	lea    -0x78(%ebp),%eax
 889b1e5:	89 04 24             	mov    %eax,(%esp)
 889b1e8:	e8 4b de ff ff       	call   8899038 <_ZN12advancealtar15StageDifficulty13getDifficultyERKSsRNS0_1TE>
 889b1ed:	83 f0 01             	xor    $0x1,%eax
 889b1f0:	84 c0                	test   %al,%al
 889b1f2:	74 0c                	je     889b200 <_ZN12advancealtar15RewardParameter32importAchievementRewardParameterEPKc+0x250>
 889b1f4:	bb 6d 03 00 00       	mov    $0x36d,%ebx
 889b1f9:	be 00 00 00 00       	mov    $0x0,%esi
 889b1fe:	eb 1f                	jmp    889b21f <_ZN12advancealtar15RewardParameter32importAchievementRewardParameterEPKc+0x26f>
 889b200:	be 01 00 00 00       	mov    $0x1,%esi
 889b205:	eb 18                	jmp    889b21f <_ZN12advancealtar15RewardParameter32importAchievementRewardParameterEPKc+0x26f>
 889b207:	89 d3                	mov    %edx,%ebx
 889b209:	89 c6                	mov    %eax,%esi
 889b20b:	8d 45 88             	lea    -0x78(%ebp),%eax
 889b20e:	89 04 24             	mov    %eax,(%esp)
 889b211:	e8 ca c9 e6 ff       	call   8707be0 <_ZNSsD1Ev>
 889b216:	89 f0                	mov    %esi,%eax
 889b218:	89 da                	mov    %ebx,%edx
 889b21a:	e9 bb 02 00 00       	jmp    889b4da <_ZN12advancealtar15RewardParameter32importAchievementRewardParameterEPKc+0x52a>
 889b21f:	8d 45 88             	lea    -0x78(%ebp),%eax
 889b222:	89 04 24             	mov    %eax,(%esp)
 889b225:	e8 b6 c9 e6 ff       	call   8707be0 <_ZNSsD1Ev>
 889b22a:	85 f6                	test   %esi,%esi
 889b22c:	0f 85 17 fe ff ff    	jne    889b049 <_ZN12advancealtar15RewardParameter32importAchievementRewardParameterEPKc+0x99>
 889b232:	be 00 00 00 00       	mov    $0x0,%esi
 889b237:	e9 b6 02 00 00       	jmp    889b4f2 <_ZN12advancealtar15RewardParameter32importAchievementRewardParameterEPKc+0x542>
 889b23c:	c7 44 24 04 ef 54 e0 	movl   $0x8e054ef,0x4(%esp)
 889b243:	08 
 889b244:	8d 45 90             	lea    -0x70(%ebp),%eax
 889b247:	89 04 24             	mov    %eax,(%esp)
 889b24a:	e8 52 57 7e ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 889b24f:	84 c0                	test   %al,%al
 889b251:	74 2f                	je     889b282 <_ZN12advancealtar15RewardParameter32importAchievementRewardParameterEPKc+0x2d2>
 889b253:	8d 45 8f             	lea    -0x71(%ebp),%eax
 889b256:	89 04 24             	mov    %eax,(%esp)
 889b259:	e8 1d 11 02 00       	call   88bc37b <_Z7ScanIntPb>
 889b25e:	89 85 54 ff ff ff    	mov    %eax,-0xac(%ebp)
 889b264:	0f b6 45 8f          	movzbl -0x71(%ebp),%eax
 889b268:	83 f0 01             	xor    $0x1,%eax
 889b26b:	84 c0                	test   %al,%al
 889b26d:	0f 84 d9 fd ff ff    	je     889b04c <_ZN12advancealtar15RewardParameter32importAchievementRewardParameterEPKc+0x9c>
 889b273:	bb 73 03 00 00       	mov    $0x373,%ebx
 889b278:	be 00 00 00 00       	mov    $0x0,%esi
 889b27d:	e9 70 02 00 00       	jmp    889b4f2 <_ZN12advancealtar15RewardParameter32importAchievementRewardParameterEPKc+0x542>
 889b282:	c7 44 24 04 03 55 e0 	movl   $0x8e05503,0x4(%esp)
 889b289:	08 
 889b28a:	8d 45 90             	lea    -0x70(%ebp),%eax
 889b28d:	89 04 24             	mov    %eax,(%esp)
 889b290:	e8 0c 57 7e ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 889b295:	84 c0                	test   %al,%al
 889b297:	74 2f                	je     889b2c8 <_ZN12advancealtar15RewardParameter32importAchievementRewardParameterEPKc+0x318>
 889b299:	8d 45 8f             	lea    -0x71(%ebp),%eax
 889b29c:	89 04 24             	mov    %eax,(%esp)
 889b29f:	e8 d7 10 02 00       	call   88bc37b <_Z7ScanIntPb>
 889b2a4:	89 85 58 ff ff ff    	mov    %eax,-0xa8(%ebp)
 889b2aa:	0f b6 45 8f          	movzbl -0x71(%ebp),%eax
 889b2ae:	83 f0 01             	xor    $0x1,%eax
 889b2b1:	84 c0                	test   %al,%al
 889b2b3:	0f 84 96 fd ff ff    	je     889b04f <_ZN12advancealtar15RewardParameter32importAchievementRewardParameterEPKc+0x9f>
 889b2b9:	bb 7a 03 00 00       	mov    $0x37a,%ebx
 889b2be:	be 00 00 00 00       	mov    $0x0,%esi
 889b2c3:	e9 2a 02 00 00       	jmp    889b4f2 <_ZN12advancealtar15RewardParameter32importAchievementRewardParameterEPKc+0x542>
 889b2c8:	c7 44 24 04 10 55 e0 	movl   $0x8e05510,0x4(%esp)
 889b2cf:	08 
 889b2d0:	8d 45 90             	lea    -0x70(%ebp),%eax
 889b2d3:	89 04 24             	mov    %eax,(%esp)
 889b2d6:	e8 c6 56 7e ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 889b2db:	84 c0                	test   %al,%al
 889b2dd:	0f 84 2b 01 00 00    	je     889b40e <_ZN12advancealtar15RewardParameter32importAchievementRewardParameterEPKc+0x45e>
 889b2e3:	eb 01                	jmp    889b2e6 <_ZN12advancealtar15RewardParameter32importAchievementRewardParameterEPKc+0x336>
 889b2e5:	90                   	nop
 889b2e6:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 889b2ec:	89 04 24             	mov    %eax,(%esp)
 889b2ef:	e8 cc 06 00 00       	call   889b9c0 <_ZN12advancealtar11_RewardItemC1Ev>
 889b2f4:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 889b2fa:	89 04 24             	mov    %eax,(%esp)
 889b2fd:	e8 ce b2 e6 ff       	call   87065d0 <_ZNSsC1Ev>
 889b302:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 889b308:	89 04 24             	mov    %eax,(%esp)
 889b30b:	e8 92 14 02 00       	call   88bc7a2 <_Z7ScanStrPSs>
 889b310:	83 f0 01             	xor    $0x1,%eax
 889b313:	84 c0                	test   %al,%al
 889b315:	74 0a                	je     889b321 <_ZN12advancealtar15RewardParameter32importAchievementRewardParameterEPKc+0x371>
 889b317:	be 00 00 00 00       	mov    $0x0,%esi
 889b31c:	e9 c4 00 00 00       	jmp    889b3e5 <_ZN12advancealtar15RewardParameter32importAchievementRewardParameterEPKc+0x435>
 889b321:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 889b327:	89 44 24 04          	mov    %eax,0x4(%esp)
 889b32b:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 889b331:	89 04 24             	mov    %eax,(%esp)
 889b334:	e8 71 f9 ff ff       	call   889acaa <_ZN12advancealtar14RewardItemType17getRewardItemTypeERKSsRNS0_1TE>
 889b339:	88 85 77 ff ff ff    	mov    %al,-0x89(%ebp)
 889b33f:	0f b6 85 77 ff ff ff 	movzbl -0x89(%ebp),%eax
 889b346:	83 f0 01             	xor    $0x1,%eax
 889b349:	84 c0                	test   %al,%al
 889b34b:	74 0a                	je     889b357 <_ZN12advancealtar15RewardParameter32importAchievementRewardParameterEPKc+0x3a7>
 889b34d:	be 00 00 00 00       	mov    $0x0,%esi
 889b352:	e9 8e 00 00 00       	jmp    889b3e5 <_ZN12advancealtar15RewardParameter32importAchievementRewardParameterEPKc+0x435>
 889b357:	8d 85 77 ff ff ff    	lea    -0x89(%ebp),%eax
 889b35d:	89 04 24             	mov    %eax,(%esp)
 889b360:	e8 16 10 02 00       	call   88bc37b <_Z7ScanIntPb>
 889b365:	89 45 80             	mov    %eax,-0x80(%ebp)
 889b368:	0f b6 85 77 ff ff ff 	movzbl -0x89(%ebp),%eax
 889b36f:	83 f0 01             	xor    $0x1,%eax
 889b372:	84 c0                	test   %al,%al
 889b374:	74 07                	je     889b37d <_ZN12advancealtar15RewardParameter32importAchievementRewardParameterEPKc+0x3cd>
 889b376:	be 00 00 00 00       	mov    $0x0,%esi
 889b37b:	eb 68                	jmp    889b3e5 <_ZN12advancealtar15RewardParameter32importAchievementRewardParameterEPKc+0x435>
 889b37d:	8d 85 77 ff ff ff    	lea    -0x89(%ebp),%eax
 889b383:	89 04 24             	mov    %eax,(%esp)
 889b386:	e8 f0 0f 02 00       	call   88bc37b <_Z7ScanIntPb>
 889b38b:	89 45 84             	mov    %eax,-0x7c(%ebp)
 889b38e:	0f b6 85 77 ff ff ff 	movzbl -0x89(%ebp),%eax
 889b395:	83 f0 01             	xor    $0x1,%eax
 889b398:	84 c0                	test   %al,%al
 889b39a:	74 0c                	je     889b3a8 <_ZN12advancealtar15RewardParameter32importAchievementRewardParameterEPKc+0x3f8>
 889b39c:	bb 91 03 00 00       	mov    $0x391,%ebx
 889b3a1:	be 01 00 00 00       	mov    $0x1,%esi
 889b3a6:	eb 3d                	jmp    889b3e5 <_ZN12advancealtar15RewardParameter32importAchievementRewardParameterEPKc+0x435>
 889b3a8:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 889b3ae:	89 44 24 04          	mov    %eax,0x4(%esp)
 889b3b2:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 889b3b8:	83 c0 10             	add    $0x10,%eax
 889b3bb:	89 04 24             	mov    %eax,(%esp)
 889b3be:	e8 25 a8 89 ff       	call   8135be8 <_ZNSt6vectorIN12advancealtar11_RewardItemESaIS1_EE9push_backERKS1_>
 889b3c3:	be 02 00 00 00       	mov    $0x2,%esi
 889b3c8:	eb 1b                	jmp    889b3e5 <_ZN12advancealtar15RewardParameter32importAchievementRewardParameterEPKc+0x435>
 889b3ca:	89 d3                	mov    %edx,%ebx
 889b3cc:	89 c6                	mov    %eax,%esi
 889b3ce:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 889b3d4:	89 04 24             	mov    %eax,(%esp)
 889b3d7:	e8 04 c8 e6 ff       	call   8707be0 <_ZNSsD1Ev>
 889b3dc:	89 f0                	mov    %esi,%eax
 889b3de:	89 da                	mov    %ebx,%edx
 889b3e0:	e9 f5 00 00 00       	jmp    889b4da <_ZN12advancealtar15RewardParameter32importAchievementRewardParameterEPKc+0x52a>
 889b3e5:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 889b3eb:	89 04 24             	mov    %eax,(%esp)
 889b3ee:	e8 ed c7 e6 ff       	call   8707be0 <_ZNSsD1Ev>
 889b3f3:	85 f6                	test   %esi,%esi
 889b3f5:	0f 84 57 fc ff ff    	je     889b052 <_ZN12advancealtar15RewardParameter32importAchievementRewardParameterEPKc+0xa2>
 889b3fb:	83 fe 01             	cmp    $0x1,%esi
 889b3fe:	0f 85 e1 fe ff ff    	jne    889b2e5 <_ZN12advancealtar15RewardParameter32importAchievementRewardParameterEPKc+0x335>
 889b404:	be 00 00 00 00       	mov    $0x0,%esi
 889b409:	e9 e4 00 00 00       	jmp    889b4f2 <_ZN12advancealtar15RewardParameter32importAchievementRewardParameterEPKc+0x542>
 889b40e:	c7 44 24 04 1e 55 e0 	movl   $0x8e0551e,0x4(%esp)
 889b415:	08 
 889b416:	8d 45 90             	lea    -0x70(%ebp),%eax
 889b419:	89 04 24             	mov    %eax,(%esp)
 889b41c:	e8 80 55 7e ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 889b421:	84 c0                	test   %al,%al
 889b423:	74 2b                	je     889b450 <_ZN12advancealtar15RewardParameter32importAchievementRewardParameterEPKc+0x4a0>
 889b425:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 889b42b:	83 c0 1c             	add    $0x1c,%eax
 889b42e:	89 04 24             	mov    %eax,(%esp)
 889b431:	e8 6c 13 02 00       	call   88bc7a2 <_Z7ScanStrPSs>
 889b436:	83 f0 01             	xor    $0x1,%eax
 889b439:	84 c0                	test   %al,%al
 889b43b:	0f 84 14 fc ff ff    	je     889b055 <_ZN12advancealtar15RewardParameter32importAchievementRewardParameterEPKc+0xa5>
 889b441:	bb 99 03 00 00       	mov    $0x399,%ebx
 889b446:	be 00 00 00 00       	mov    $0x0,%esi
 889b44b:	e9 a2 00 00 00       	jmp    889b4f2 <_ZN12advancealtar15RewardParameter32importAchievementRewardParameterEPKc+0x542>
 889b450:	c7 44 24 04 2d 55 e0 	movl   $0x8e0552d,0x4(%esp)
 889b457:	08 
 889b458:	8d 45 90             	lea    -0x70(%ebp),%eax
 889b45b:	89 04 24             	mov    %eax,(%esp)
 889b45e:	e8 3e 55 7e ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 889b463:	84 c0                	test   %al,%al
 889b465:	74 28                	je     889b48f <_ZN12advancealtar15RewardParameter32importAchievementRewardParameterEPKc+0x4df>
 889b467:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 889b46d:	83 c0 20             	add    $0x20,%eax
 889b470:	89 04 24             	mov    %eax,(%esp)
 889b473:	e8 2a 13 02 00       	call   88bc7a2 <_Z7ScanStrPSs>
 889b478:	83 f0 01             	xor    $0x1,%eax
 889b47b:	84 c0                	test   %al,%al
 889b47d:	0f 84 d5 fb ff ff    	je     889b058 <_ZN12advancealtar15RewardParameter32importAchievementRewardParameterEPKc+0xa8>
 889b483:	bb 9e 03 00 00       	mov    $0x39e,%ebx
 889b488:	be 00 00 00 00       	mov    $0x0,%esi
 889b48d:	eb 63                	jmp    889b4f2 <_ZN12advancealtar15RewardParameter32importAchievementRewardParameterEPKc+0x542>
 889b48f:	c7 44 24 04 3c 55 e0 	movl   $0x8e0553c,0x4(%esp)
 889b496:	08 
 889b497:	8d 45 90             	lea    -0x70(%ebp),%eax
 889b49a:	89 04 24             	mov    %eax,(%esp)
 889b49d:	e8 ff 54 7e ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 889b4a2:	84 c0                	test   %al,%al
 889b4a4:	0f 84 b1 fb ff ff    	je     889b05b <_ZN12advancealtar15RewardParameter32importAchievementRewardParameterEPKc+0xab>
 889b4aa:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 889b4b0:	83 c0 24             	add    $0x24,%eax
 889b4b3:	89 04 24             	mov    %eax,(%esp)
 889b4b6:	e8 e7 12 02 00       	call   88bc7a2 <_Z7ScanStrPSs>
 889b4bb:	83 f0 01             	xor    $0x1,%eax
 889b4be:	84 c0                	test   %al,%al
 889b4c0:	0f 84 98 fb ff ff    	je     889b05e <_ZN12advancealtar15RewardParameter32importAchievementRewardParameterEPKc+0xae>
 889b4c6:	bb a3 03 00 00       	mov    $0x3a3,%ebx
 889b4cb:	be 00 00 00 00       	mov    $0x0,%esi
 889b4d0:	eb 20                	jmp    889b4f2 <_ZN12advancealtar15RewardParameter32importAchievementRewardParameterEPKc+0x542>
 889b4d2:	90                   	nop
 889b4d3:	be 01 00 00 00       	mov    $0x1,%esi
 889b4d8:	eb 18                	jmp    889b4f2 <_ZN12advancealtar15RewardParameter32importAchievementRewardParameterEPKc+0x542>
 889b4da:	89 d3                	mov    %edx,%ebx
 889b4dc:	89 c6                	mov    %eax,%esi
 889b4de:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 889b4e4:	89 04 24             	mov    %eax,(%esp)
 889b4e7:	e8 ce f8 ff ff       	call   889adba <_ZN12advancealtar21AchievementRewardDataD1Ev>
 889b4ec:	89 f0                	mov    %esi,%eax
 889b4ee:	89 da                	mov    %ebx,%edx
 889b4f0:	eb 1f                	jmp    889b511 <_ZN12advancealtar15RewardParameter32importAchievementRewardParameterEPKc+0x561>
 889b4f2:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 889b4f8:	89 04 24             	mov    %eax,(%esp)
 889b4fb:	e8 ba f8 ff ff       	call   889adba <_ZN12advancealtar21AchievementRewardDataD1Ev>
 889b500:	85 f6                	test   %esi,%esi
 889b502:	74 28                	je     889b52c <_ZN12advancealtar15RewardParameter32importAchievementRewardParameterEPKc+0x57c>
 889b504:	e9 f8 fa ff ff       	jmp    889b001 <_ZN12advancealtar15RewardParameter32importAchievementRewardParameterEPKc+0x51>
 889b509:	90                   	nop
 889b50a:	bb 00 00 00 00       	mov    $0x0,%ebx
 889b50f:	eb 1b                	jmp    889b52c <_ZN12advancealtar15RewardParameter32importAchievementRewardParameterEPKc+0x57c>
 889b511:	89 d3                	mov    %edx,%ebx
 889b513:	89 c6                	mov    %eax,%esi
 889b515:	8d 45 90             	lea    -0x70(%ebp),%eax
 889b518:	89 04 24             	mov    %eax,(%esp)
 889b51b:	e8 c0 c6 e6 ff       	call   8707be0 <_ZNSsD1Ev>
 889b520:	89 f0                	mov    %esi,%eax
 889b522:	89 da                	mov    %ebx,%edx
 889b524:	89 04 24             	mov    %eax,(%esp)
 889b527:	e8 24 82 24 00       	call   8ae3750 <_Unwind_Resume>
 889b52c:	8d 45 90             	lea    -0x70(%ebp),%eax
 889b52f:	89 04 24             	mov    %eax,(%esp)
 889b532:	e8 a9 c6 e6 ff       	call   8707be0 <_ZNSsD1Ev>
 889b537:	89 d8                	mov    %ebx,%eax
 889b539:	8d 65 f8             	lea    -0x8(%ebp),%esp
 889b53c:	83 c4 00             	add    $0x0,%esp
 889b53f:	5b                   	pop    %ebx
 889b540:	5e                   	pop    %esi
 889b541:	5d                   	pop    %ebp
 889b542:	c3                   	ret
 889b543:	90                   	nop

```

```c
// advancealtar::RewardParameter::importAchievementRewardParameter @ 0x889afb0

/* advancealtar::RewardParameter::importAchievementRewardParameter(char const*) */

undefined4 __thiscall
advancealtar::RewardParameter::importAchievementRewardParameter(RewardParameter *this,char *param_1)

{
  char cVar1;
  bool bVar2;
  undefined4 unaff_EBX;
  int iVar3;
  int local_b8;
  T aTStack_b4 [4];
  undefined4 local_b0;
  undefined4 local_ac;
  vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>> avStack_a8 [12];
  string asStack_9c [4];
  string asStack_98 [4];
  string asStack_94 [7];
  bool local_8d;
  string local_8c [4];
  _RewardItem local_88 [4];
  undefined4 local_84;
  undefined4 local_80;
  string local_7c [7];
  bool local_75;
  string local_74;
  pair local_70 [8];
  pair<int_const,advancealtar::AchievementRewardData> local_68 [44];
  pair<int,advancealtar::AchievementRewardData> local_3c [44];
  undefined4 local_10;
  
  std::string::string((string *)&local_74);
  local_10 = 0;
  local_75 = false;
                    /* try { // try from 0889afd7 to 0889b043 has its CatchHandler @ 0889b511 */
  reset(this);
  cVar1 = loadRDARScriptFile("",param_1);
  if (cVar1 == '\x01') {
    do {
      do {
        cVar1 = ScanType((string *)&local_74,true);
        if (cVar1 != '\x01') {
          unaff_EBX = 0;
          goto LAB_0889b52c;
        }
        bVar2 = std::operator==(&local_74,"[reward data]");
      } while (!bVar2);
      AchievementRewardData::AchievementRewardData((AchievementRewardData *)&local_b8);
LAB_0889b05f:
      do {
                    /* try { // try from 0889b06d to 0889b0b6 has its CatchHandler @ 0889b4da */
        cVar1 = ScanType((string *)&local_74,true);
        if (cVar1 != '\x01') {
LAB_0889b4d3:
          bVar2 = true;
          goto LAB_0889b4f2;
        }
        bVar2 = std::operator==(&local_74,"[/reward data]");
        if (bVar2) {
          std::make_pair<int&,advancealtar::AchievementRewardData&>
                    ((int *)local_3c,(AchievementRewardData *)&local_b8);
                    /* try { // try from 0889b0c7 to 0889b0cb has its CatchHandler @ 0889b10a */
          std::pair<int_const,advancealtar::AchievementRewardData>::
          pair<int,advancealtar::AchievementRewardData>(local_68,local_3c);
                    /* try { // try from 0889b0e0 to 0889b0e4 has its CatchHandler @ 0889b0f5 */
          std::
          map<int,advancealtar::AchievementRewardData,std::less<int>,std::allocator<std::pair<int_const,advancealtar::AchievementRewardData>>>
          ::insert(local_70);
                    /* try { // try from 0889b0ee to 0889b0f2 has its CatchHandler @ 0889b10a */
          std::pair<int_const,advancealtar::AchievementRewardData>::~pair(local_68);
                    /* try { // try from 0889b128 to 0889b1b6 has its CatchHandler @ 0889b4da */
          std::pair<int,advancealtar::AchievementRewardData>::~pair(local_3c);
          goto LAB_0889b4d3;
        }
        bVar2 = std::operator==(&local_74,"[type]");
        if (!bVar2) {
          bVar2 = std::operator==(&local_74,"[stage difficulty]");
          if (bVar2) {
            std::string::string(local_7c);
                    /* try { // try from 0889b1bd to 0889b1ec has its CatchHandler @ 0889b207 */
            cVar1 = ScanStr(local_7c);
            if (cVar1 == '\x01') {
              cVar1 = StageDifficulty::getDifficulty(local_7c,aTStack_b4);
              if (cVar1 == '\x01') {
                bVar2 = true;
              }
              else {
                unaff_EBX = 0x36d;
                bVar2 = false;
              }
            }
            else {
              unaff_EBX = 0x36a;
              bVar2 = false;
            }
                    /* try { // try from 0889b225 to 0889b301 has its CatchHandler @ 0889b4da */
            std::string::~string(local_7c);
            if (!bVar2) {
              bVar2 = false;
              goto LAB_0889b4f2;
            }
          }
          else {
            bVar2 = std::operator==(&local_74,"[stage clear count]");
            if (bVar2) {
              local_b0 = ScanInt(&local_75);
              if (local_75 != true) {
                unaff_EBX = 0x373;
                bVar2 = false;
                goto LAB_0889b4f2;
              }
            }
            else {
              bVar2 = std::operator==(&local_74,"[icon image]");
              if (bVar2) {
                local_ac = ScanInt(&local_75);
                if (local_75 != true) {
                  unaff_EBX = 0x37a;
                  bVar2 = false;
                  goto LAB_0889b4f2;
                }
              }
              else {
                bVar2 = std::operator==(&local_74,"[reward item]");
                if (bVar2) {
                  while( true ) {
                    _RewardItem::_RewardItem(local_88);
                    std::string::string(local_8c);
                    /* try { // try from 0889b30b to 0889b3c2 has its CatchHandler @ 0889b3ca */
                    cVar1 = ScanStr(local_8c);
                    if (cVar1 == '\x01') {
                      local_8d = (bool)RewardItemType::getRewardItemType(local_8c,(T *)local_88);
                      if (local_8d == true) {
                        local_84 = ScanInt(&local_8d);
                        if (local_8d == true) {
                          local_80 = ScanInt(&local_8d);
                          if (local_8d == true) {
                            std::
                            vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>
                            ::push_back(avStack_a8,local_88);
                            iVar3 = 2;
                          }
                          else {
                            unaff_EBX = 0x391;
                            iVar3 = 1;
                          }
                        }
                        else {
                          iVar3 = 0;
                        }
                      }
                      else {
                        iVar3 = 0;
                      }
                    }
                    else {
                      iVar3 = 0;
                    }
                    /* try { // try from 0889b3ee to 0889b4ba has its CatchHandler @ 0889b4da */
                    std::string::~string(local_8c);
                    if (iVar3 == 0) break;
                    if (iVar3 == 1) {
                      bVar2 = false;
                      goto LAB_0889b4f2;
                    }
                  }
                }
                else {
                  bVar2 = std::operator==(&local_74,"[reward title]");
                  if (bVar2) {
                    cVar1 = ScanStr(asStack_9c);
                    if (cVar1 != '\x01') {
                      unaff_EBX = 0x399;
                      bVar2 = false;
                      goto LAB_0889b4f2;
                    }
                  }
                  else {
                    bVar2 = std::operator==(&local_74,"[postal title]");
                    if (bVar2) {
                      cVar1 = ScanStr(asStack_98);
                      if (cVar1 != '\x01') {
                        unaff_EBX = 0x39e;
                        bVar2 = false;
                        goto LAB_0889b4f2;
                      }
                    }
                    else {
                      bVar2 = std::operator==(&local_74,"[postal letter]");
                      if ((bVar2) && (cVar1 = ScanStr(asStack_94), cVar1 != '\x01')) {
                        unaff_EBX = 0x3a3;
                        bVar2 = false;
                        goto LAB_0889b4f2;
                      }
                    }
                  }
                }
              }
            }
          }
          goto LAB_0889b05f;
        }
        local_b8 = ScanInt(&local_75);
        if (local_75 != true) {
          unaff_EBX = 0x362;
          bVar2 = false;
          goto LAB_0889b4f2;
        }
      } while (0 < local_b8);
      unaff_EBX = 0x364;
      bVar2 = false;
LAB_0889b4f2:
                    /* try { // try from 0889b4fb to 0889b4ff has its CatchHandler @ 0889b511 */
      AchievementRewardData::~AchievementRewardData((AchievementRewardData *)&local_b8);
    } while (bVar2);
  }
  else {
    unaff_EBX = 0;
  }
LAB_0889b52c:
  std::string::~string((string *)&local_74);
  return unaff_EBX;
}

```

---

## reset

```asm
// === 0889af9c advancealtar::RewardParameter::reset  [0x0889af9c-0x889afaf] ===
 889af9c:	55                   	push   %ebp
 889af9d:	89 e5                	mov    %esp,%ebp
 889af9f:	83 ec 18             	sub    $0x18,%esp
 889afa2:	8b 45 08             	mov    0x8(%ebp),%eax
 889afa5:	89 04 24             	mov    %eax,(%esp)
 889afa8:	e8 e7 14 00 00       	call   889c494 <_ZNSt3mapIiN12advancealtar21AchievementRewardDataESt4lessIiESaISt4pairIKiS1_EEE5clearEv>
 889afad:	c9                   	leave
 889afae:	c3                   	ret
 889afaf:	90                   	nop

```

```c
// advancealtar::RewardParameter::reset @ 0x889af9c

/* advancealtar::RewardParameter::reset() */

void __thiscall advancealtar::RewardParameter::reset(RewardParameter *this)

{
  std::
  map<int,advancealtar::AchievementRewardData,std::less<int>,std::allocator<std::pair<int_const,advancealtar::AchievementRewardData>>>
  ::clear((map<int,advancealtar::AchievementRewardData,std::less<int>,std::allocator<std::pair<int_const,advancealtar::AchievementRewardData>>>
           *)this);
  return;
}

```

---

## ~RewardParameter

```asm
// === 0889af88 advancealtar::RewardParameter::~RewardParameter  [0x0889af88-0x889af9b] ===
 889af88:	55                   	push   %ebp
 889af89:	89 e5                	mov    %esp,%ebp
 889af8b:	83 ec 18             	sub    $0x18,%esp
 889af8e:	8b 45 08             	mov    0x8(%ebp),%eax
 889af91:	89 04 24             	mov    %eax,(%esp)
 889af94:	e8 9f 0a 00 00       	call   889ba38 <_ZNSt3mapIiN12advancealtar21AchievementRewardDataESt4lessIiESaISt4pairIKiS1_EEED1Ev>
 889af99:	c9                   	leave
 889af9a:	c3                   	ret
 889af9b:	90                   	nop

```

```c
// advancealtar::RewardParameter::~RewardParameter @ 0x889af88

/* advancealtar::RewardParameter::~RewardParameter() */

void __thiscall advancealtar::RewardParameter::~RewardParameter(RewardParameter *this)

{
  std::
  map<int,advancealtar::AchievementRewardData,std::less<int>,std::allocator<std::pair<int_const,advancealtar::AchievementRewardData>>>
  ::~map((map<int,advancealtar::AchievementRewardData,std::less<int>,std::allocator<std::pair<int_const,advancealtar::AchievementRewardData>>>
          *)this);
  return;
}

```

