# TrainingQuestScript

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## computeDayIndex

```asm
// === 08aafc64 TrainingQuestScript::computeDayIndex  [0x08aafc64-0x8aafc8f] ===
 8aafc64:	55                   	push   %ebp
 8aafc65:	89 e5                	mov    %esp,%ebp
 8aafc67:	83 ec 28             	sub    $0x28,%esp
 8aafc6a:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 8aafc71:	e8 da da 5c ff       	call   807d750 <time@plt>
 8aafc76:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8aafc79:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8aafc7c:	89 04 24             	mov    %eax,(%esp)
 8aafc7f:	e8 ac e6 5c ff       	call   807e330 <localtime@plt>
 8aafc84:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8aafc87:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8aafc8a:	8b 40 1c             	mov    0x1c(%eax),%eax
 8aafc8d:	c9                   	leave
 8aafc8e:	c3                   	ret
 8aafc8f:	90                   	nop

```

```c
// TrainingQuestScript::computeDayIndex @ 0x8aafc64

/* TrainingQuestScript::computeDayIndex() */

int TrainingQuestScript::computeDayIndex(void)

{
  tm *ptVar1;
  time_t local_14 [4];
  
  local_14[0] = time((time_t *)0x0);
  ptVar1 = localtime(local_14);
  return ptVar1->tm_yday;
}

```

---

## getApplyLevel

```asm
// === 08aaf8b6 TrainingQuestScript::getApplyLevel  [0x08aaf8b6-0x8aafb43] ===
 8aaf8b6:	55                   	push   %ebp
 8aaf8b7:	89 e5                	mov    %esp,%ebp
 8aaf8b9:	56                   	push   %esi
 8aaf8ba:	53                   	push   %ebx
 8aaf8bb:	83 ec 50             	sub    $0x50,%esp
 8aaf8be:	8b 45 08             	mov    0x8(%ebp),%eax
 8aaf8c1:	8b 00                	mov    (%eax),%eax
 8aaf8c3:	85 c0                	test   %eax,%eax
 8aaf8c5:	7e 12                	jle    8aaf8d9 <_ZN19TrainingQuestScript13getApplyLevelEPSt8multisetIiSt4lessIiESaIiEE+0x23>
 8aaf8c7:	8b 45 08             	mov    0x8(%ebp),%eax
 8aaf8ca:	83 c0 04             	add    $0x4,%eax
 8aaf8cd:	89 04 24             	mov    %eax,(%esp)
 8aaf8d0:	e8 c5 18 66 ff       	call   811119a <_ZNKSt6vectorISt4pairIiiESaIS1_EE5emptyEv>
 8aaf8d5:	84 c0                	test   %al,%al
 8aaf8d7:	74 07                	je     8aaf8e0 <_ZN19TrainingQuestScript13getApplyLevelEPSt8multisetIiSt4lessIiESaIiEE+0x2a>
 8aaf8d9:	b8 01 00 00 00       	mov    $0x1,%eax
 8aaf8de:	eb 05                	jmp    8aaf8e5 <_ZN19TrainingQuestScript13getApplyLevelEPSt8multisetIiSt4lessIiESaIiEE+0x2f>
 8aaf8e0:	b8 00 00 00 00       	mov    $0x0,%eax
 8aaf8e5:	84 c0                	test   %al,%al
 8aaf8e7:	74 0a                	je     8aaf8f3 <_ZN19TrainingQuestScript13getApplyLevelEPSt8multisetIiSt4lessIiESaIiEE+0x3d>
 8aaf8e9:	bb 00 00 00 00       	mov    $0x0,%ebx
 8aaf8ee:	e9 44 02 00 00       	jmp    8aafb37 <_ZN19TrainingQuestScript13getApplyLevelEPSt8multisetIiSt4lessIiESaIiEE+0x281>
 8aaf8f3:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8aaf8f6:	89 04 24             	mov    %eax,(%esp)
 8aaf8f9:	e8 ae e8 5d ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 8aaf8fe:	8b 45 08             	mov    0x8(%ebp),%eax
 8aaf901:	89 04 24             	mov    %eax,(%esp)
 8aaf904:	e8 5b 03 00 00       	call   8aafc64 <_ZN19TrainingQuestScript15computeDayIndexEv>
 8aaf909:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8aaf90c:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 8aaf913:	e9 af 00 00 00       	jmp    8aaf9c7 <_ZN19TrainingQuestScript13getApplyLevelEPSt8multisetIiSt4lessIiESaIiEE+0x111>
 8aaf918:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8aaf91b:	89 44 24 08          	mov    %eax,0x8(%esp)
 8aaf91f:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8aaf922:	89 44 24 04          	mov    %eax,0x4(%esp)
 8aaf926:	8b 45 08             	mov    0x8(%ebp),%eax
 8aaf929:	89 04 24             	mov    %eax,(%esp)
 8aaf92c:	e8 5f 03 00 00       	call   8aafc90 <_ZN19TrainingQuestScript21get_random_fake_valueEii>
 8aaf931:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8aaf934:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8aaf93b:	8b 45 08             	mov    0x8(%ebp),%eax
 8aaf93e:	8d 50 04             	lea    0x4(%eax),%edx
 8aaf941:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8aaf944:	89 54 24 04          	mov    %edx,0x4(%esp)
 8aaf948:	89 04 24             	mov    %eax,(%esp)
 8aaf94b:	e8 62 dc 62 ff       	call   80dd5b2 <_ZNSt6vectorISt4pairIiiESaIS1_EE5beginEv>
 8aaf950:	83 ec 04             	sub    $0x4,%esp
 8aaf953:	eb 40                	jmp    8aaf995 <_ZN19TrainingQuestScript13getApplyLevelEPSt8multisetIiSt4lessIiESaIiEE+0xdf>
 8aaf955:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8aaf958:	89 04 24             	mov    %eax,(%esp)
 8aaf95b:	e8 9c dc 62 ff       	call   80dd5fc <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIiiESt6vectorIS2_SaIS2_EEEdeEv>
 8aaf960:	8b 40 04             	mov    0x4(%eax),%eax
 8aaf963:	01 45 f0             	add    %eax,-0x10(%ebp)
 8aaf966:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8aaf969:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 8aaf96c:	7d 1c                	jge    8aaf98a <_ZN19TrainingQuestScript13getApplyLevelEPSt8multisetIiSt4lessIiESaIiEE+0xd4>
 8aaf96e:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8aaf971:	89 04 24             	mov    %eax,(%esp)
 8aaf974:	e8 83 dc 62 ff       	call   80dd5fc <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIiiESt6vectorIS2_SaIS2_EEEdeEv>
 8aaf979:	89 44 24 04          	mov    %eax,0x4(%esp)
 8aaf97d:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8aaf980:	89 04 24             	mov    %eax,(%esp)
 8aaf983:	e8 9e 17 66 ff       	call   8111126 <_ZNSt6vectorIiSaIiEE9push_backERKi>
 8aaf988:	eb 39                	jmp    8aaf9c3 <_ZN19TrainingQuestScript13getApplyLevelEPSt8multisetIiSt4lessIiESaIiEE+0x10d>
 8aaf98a:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8aaf98d:	89 04 24             	mov    %eax,(%esp)
 8aaf990:	e8 75 18 66 ff       	call   811120a <_ZN9__gnu_cxx17__normal_iteratorIPSt4pairIiiESt6vectorIS2_SaIS2_EEEppEv>
 8aaf995:	8b 45 08             	mov    0x8(%ebp),%eax
 8aaf998:	8d 50 04             	lea    0x4(%eax),%edx
 8aaf99b:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8aaf99e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8aaf9a2:	89 04 24             	mov    %eax,(%esp)
 8aaf9a5:	e8 2c dc 62 ff       	call   80dd5d6 <_ZNSt6vectorISt4pairIiiESaIS1_EE3endEv>
 8aaf9aa:	83 ec 04             	sub    $0x4,%esp
 8aaf9ad:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8aaf9b0:	89 44 24 04          	mov    %eax,0x4(%esp)
 8aaf9b4:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8aaf9b7:	89 04 24             	mov    %eax,(%esp)
 8aaf9ba:	e8 1f 18 66 ff       	call   81111de <_ZN9__gnu_cxxneIPSt4pairIiiESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 8aaf9bf:	84 c0                	test   %al,%al
 8aaf9c1:	75 92                	jne    8aaf955 <_ZN19TrainingQuestScript13getApplyLevelEPSt8multisetIiSt4lessIiESaIiEE+0x9f>
 8aaf9c3:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 8aaf9c7:	8b 45 08             	mov    0x8(%ebp),%eax
 8aaf9ca:	8b 00                	mov    (%eax),%eax
 8aaf9cc:	3b 45 e8             	cmp    -0x18(%ebp),%eax
 8aaf9cf:	0f 9f c0             	setg   %al
 8aaf9d2:	84 c0                	test   %al,%al
 8aaf9d4:	0f 85 3e ff ff ff    	jne    8aaf918 <_ZN19TrainingQuestScript13getApplyLevelEPSt8multisetIiSt4lessIiESaIiEE+0x62>
 8aaf9da:	c7 45 f4 01 00 00 00 	movl   $0x1,-0xc(%ebp)
 8aaf9e1:	e9 15 01 00 00       	jmp    8aafafb <_ZN19TrainingQuestScript13getApplyLevelEPSt8multisetIiSt4lessIiESaIiEE+0x245>
 8aaf9e6:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8aaf9e9:	8d 55 c8             	lea    -0x38(%ebp),%edx
 8aaf9ec:	89 54 24 04          	mov    %edx,0x4(%esp)
 8aaf9f0:	89 04 24             	mov    %eax,(%esp)
 8aaf9f3:	e8 50 e8 5d ff       	call   808e248 <_ZNSt6vectorIiSaIiEE5beginEv>
 8aaf9f8:	83 ec 04             	sub    $0x4,%esp
 8aaf9fb:	e9 c8 00 00 00       	jmp    8aafac8 <_ZN19TrainingQuestScript13getApplyLevelEPSt8multisetIiSt4lessIiESaIiEE+0x212>
 8aafa00:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8aafa03:	89 04 24             	mov    %eax,(%esp)
 8aafa06:	e8 c1 ed 5d ff       	call   808e7cc <_ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv>
 8aafa0b:	8b 00                	mov    (%eax),%eax
 8aafa0d:	83 f8 9c             	cmp    $0xffffff9c,%eax
 8aafa10:	0f 94 c0             	sete   %al
 8aafa13:	84 c0                	test   %al,%al
 8aafa15:	74 39                	je     8aafa50 <_ZN19TrainingQuestScript13getApplyLevelEPSt8multisetIiSt4lessIiESaIiEE+0x19a>
 8aafa17:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8aafa1a:	89 04 24             	mov    %eax,(%esp)
 8aafa1d:	e8 aa ed 5d ff       	call   808e7cc <_ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv>
 8aafa22:	89 c2                	mov    %eax,%edx
 8aafa24:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8aafa27:	8d 48 ff             	lea    -0x1(%eax),%ecx
 8aafa2a:	89 c8                	mov    %ecx,%eax
 8aafa2c:	01 c0                	add    %eax,%eax
 8aafa2e:	01 c8                	add    %ecx,%eax
 8aafa30:	c1 e0 03             	shl    $0x3,%eax
 8aafa33:	89 c1                	mov    %eax,%ecx
 8aafa35:	03 4d 0c             	add    0xc(%ebp),%ecx
 8aafa38:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8aafa3b:	89 54 24 08          	mov    %edx,0x8(%esp)
 8aafa3f:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8aafa43:	89 04 24             	mov    %eax,(%esp)
 8aafa46:	e8 ef 03 00 00       	call   8aafe3a <_ZNSt8multisetIiSt4lessIiESaIiEE6insertERKi>
 8aafa4b:	83 ec 04             	sub    $0x4,%esp
 8aafa4e:	eb 6d                	jmp    8aafabd <_ZN19TrainingQuestScript13getApplyLevelEPSt8multisetIiSt4lessIiESaIiEE+0x207>
 8aafa50:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8aafa53:	89 04 24             	mov    %eax,(%esp)
 8aafa56:	e8 71 ed 5d ff       	call   808e7cc <_ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv>
 8aafa5b:	8b 00                	mov    (%eax),%eax
 8aafa5d:	83 f8 9c             	cmp    $0xffffff9c,%eax
 8aafa60:	74 1b                	je     8aafa7d <_ZN19TrainingQuestScript13getApplyLevelEPSt8multisetIiSt4lessIiESaIiEE+0x1c7>
 8aafa62:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8aafa65:	89 04 24             	mov    %eax,(%esp)
 8aafa68:	e8 5f ed 5d ff       	call   808e7cc <_ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv>
 8aafa6d:	8b 00                	mov    (%eax),%eax
 8aafa6f:	03 45 f4             	add    -0xc(%ebp),%eax
 8aafa72:	85 c0                	test   %eax,%eax
 8aafa74:	7e 07                	jle    8aafa7d <_ZN19TrainingQuestScript13getApplyLevelEPSt8multisetIiSt4lessIiESaIiEE+0x1c7>
 8aafa76:	b8 01 00 00 00       	mov    $0x1,%eax
 8aafa7b:	eb 05                	jmp    8aafa82 <_ZN19TrainingQuestScript13getApplyLevelEPSt8multisetIiSt4lessIiESaIiEE+0x1cc>
 8aafa7d:	b8 00 00 00 00       	mov    $0x0,%eax
 8aafa82:	84 c0                	test   %al,%al
 8aafa84:	74 37                	je     8aafabd <_ZN19TrainingQuestScript13getApplyLevelEPSt8multisetIiSt4lessIiESaIiEE+0x207>
 8aafa86:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8aafa89:	89 04 24             	mov    %eax,(%esp)
 8aafa8c:	e8 3b ed 5d ff       	call   808e7cc <_ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv>
 8aafa91:	89 c2                	mov    %eax,%edx
 8aafa93:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8aafa96:	8d 48 ff             	lea    -0x1(%eax),%ecx
 8aafa99:	89 c8                	mov    %ecx,%eax
 8aafa9b:	01 c0                	add    %eax,%eax
 8aafa9d:	01 c8                	add    %ecx,%eax
 8aafa9f:	c1 e0 03             	shl    $0x3,%eax
 8aafaa2:	89 c1                	mov    %eax,%ecx
 8aafaa4:	03 4d 0c             	add    0xc(%ebp),%ecx
 8aafaa7:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8aafaaa:	89 54 24 08          	mov    %edx,0x8(%esp)
 8aafaae:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8aafab2:	89 04 24             	mov    %eax,(%esp)
 8aafab5:	e8 80 03 00 00       	call   8aafe3a <_ZNSt8multisetIiSt4lessIiESaIiEE6insertERKi>
 8aafaba:	83 ec 04             	sub    $0x4,%esp
 8aafabd:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8aafac0:	89 04 24             	mov    %eax,(%esp)
 8aafac3:	e8 c4 ae 63 ff       	call   80ea98c <_ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv>
 8aafac8:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8aafacb:	8d 55 c8             	lea    -0x38(%ebp),%edx
 8aaface:	89 54 24 04          	mov    %edx,0x4(%esp)
 8aafad2:	89 04 24             	mov    %eax,(%esp)
 8aafad5:	e8 92 e7 5d ff       	call   808e26c <_ZNSt6vectorIiSaIiEE3endEv>
 8aafada:	83 ec 04             	sub    $0x4,%esp
 8aafadd:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8aafae0:	89 44 24 04          	mov    %eax,0x4(%esp)
 8aafae4:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8aafae7:	89 04 24             	mov    %eax,(%esp)
 8aafaea:	e8 73 a9 63 ff       	call   80ea462 <_ZN9__gnu_cxxneIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_>
 8aafaef:	84 c0                	test   %al,%al
 8aafaf1:	0f 85 09 ff ff ff    	jne    8aafa00 <_ZN19TrainingQuestScript13getApplyLevelEPSt8multisetIiSt4lessIiESaIiEE+0x14a>
 8aafaf7:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8aafafb:	83 7d f4 46          	cmpl   $0x46,-0xc(%ebp)
 8aafaff:	0f 9e c0             	setle  %al
 8aafb02:	84 c0                	test   %al,%al
 8aafb04:	0f 85 dc fe ff ff    	jne    8aaf9e6 <_ZN19TrainingQuestScript13getApplyLevelEPSt8multisetIiSt4lessIiESaIiEE+0x130>
 8aafb0a:	bb 01 00 00 00       	mov    $0x1,%ebx
 8aafb0f:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8aafb12:	89 04 24             	mov    %eax,(%esp)
 8aafb15:	e8 c0 42 5d ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 8aafb1a:	eb 1b                	jmp    8aafb37 <_ZN19TrainingQuestScript13getApplyLevelEPSt8multisetIiSt4lessIiESaIiEE+0x281>
 8aafb1c:	89 d3                	mov    %edx,%ebx
 8aafb1e:	89 c6                	mov    %eax,%esi
 8aafb20:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8aafb23:	89 04 24             	mov    %eax,(%esp)
 8aafb26:	e8 af 42 5d ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 8aafb2b:	89 f0                	mov    %esi,%eax
 8aafb2d:	89 da                	mov    %ebx,%edx
 8aafb2f:	89 04 24             	mov    %eax,(%esp)
 8aafb32:	e8 19 3c 03 00       	call   8ae3750 <_Unwind_Resume>
 8aafb37:	89 d8                	mov    %ebx,%eax
 8aafb39:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8aafb3c:	83 c4 00             	add    $0x0,%esp
 8aafb3f:	5b                   	pop    %ebx
 8aafb40:	5e                   	pop    %esi
 8aafb41:	5d                   	pop    %ebp
 8aafb42:	c3                   	ret
 8aafb43:	90                   	nop

```

```c
// TrainingQuestScript::getApplyLevel @ 0x8aaf8b6

/* TrainingQuestScript::getApplyLevel(std::multiset<int, std::less<int>, std::allocator<int> >*) */

undefined4 TrainingQuestScript::getApplyLevel(multiset *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_44 [4];
  __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_40 [4];
  vector<int,std::allocator<int>> local_3c [12];
  __normal_iterator local_30 [4];
  __normal_iterator local_2c [4];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  if (0 < *(int *)param_1) {
    cVar1 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::empty();
    if (cVar1 == '\0') {
      bVar2 = false;
      goto LAB_08aaf8e5;
    }
  }
  bVar2 = true;
LAB_08aaf8e5:
  if (bVar2) {
    uVar5 = 0;
  }
  else {
    std::vector<int,std::allocator<int>>::vector(local_3c);
    local_20 = computeDayIndex();
    for (local_1c = 0; local_1c < *(int *)param_1; local_1c = local_1c + 1) {
                    /* try { // try from 08aaf92c to 08aafaee has its CatchHandler @ 08aafb1c */
      local_18 = get_random_fake_value((TrainingQuestScript *)param_1,local_1c,local_20);
      local_14 = 0;
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
      while( true ) {
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
        bVar2 = __gnu_cxx::operator!=(local_40,local_30);
        if (!bVar2) break;
        iVar3 = __gnu_cxx::
                __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                ::operator*(local_40);
        local_14 = local_14 + *(int *)(iVar3 + 4);
        if (local_18 < local_14) {
          piVar4 = (int *)__gnu_cxx::
                          __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                          ::operator*(local_40);
          std::vector<int,std::allocator<int>>::push_back(local_3c,piVar4);
          break;
        }
        __gnu_cxx::
        __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
        ::operator++(local_40);
      }
    }
    for (local_10 = 1; local_10 < 0x47; local_10 = local_10 + 1) {
      std::vector<int,std::allocator<int>>::begin();
      while( true ) {
        std::vector<int,std::allocator<int>>::end();
        bVar2 = __gnu_cxx::operator!=(local_44,local_2c);
        if (!bVar2) break;
        piVar4 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                        operator*(local_44);
        if (*piVar4 == -100) {
          __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator*
                    (local_44);
          std::multiset<int,std::less<int>,std::allocator<int>>::insert(&local_28);
        }
        else {
          piVar4 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                          operator*(local_44);
          if (*piVar4 == -100) {
LAB_08aafa7d:
            bVar2 = false;
          }
          else {
            piVar4 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>
                            ::operator*(local_44);
            if (*piVar4 + local_10 < 1) goto LAB_08aafa7d;
            bVar2 = true;
          }
          if (bVar2) {
            __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator*
                      (local_44);
            std::multiset<int,std::less<int>,std::allocator<int>>::insert(&local_24);
          }
        }
        __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                  (local_44);
      }
    }
    uVar5 = 1;
    std::vector<int,std::allocator<int>>::~vector(local_3c);
  }
  return uVar5;
}

```

---

## getTrainingQuest

```asm
// === 08aafb44 TrainingQuestScript::getTrainingQuest  [0x08aafb44-0x8aafc63] ===
 8aafb44:	55                   	push   %ebp
 8aafb45:	89 e5                	mov    %esp,%ebp
 8aafb47:	53                   	push   %ebx
 8aafb48:	83 ec 14             	sub    $0x14,%esp
 8aafb4b:	8b 45 10             	mov    0x10(%ebp),%eax
 8aafb4e:	3b 45 14             	cmp    0x14(%ebp),%eax
 8aafb51:	75 17                	jne    8aafb6a <_ZN19TrainingQuestScript16getTrainingQuestEiii+0x26>
 8aafb53:	8b 45 08             	mov    0x8(%ebp),%eax
 8aafb56:	8b 80 8c 14 00 00    	mov    0x148c(%eax),%eax
 8aafb5c:	8d 50 01             	lea    0x1(%eax),%edx
 8aafb5f:	8b 45 08             	mov    0x8(%ebp),%eax
 8aafb62:	89 90 8c 14 00 00    	mov    %edx,0x148c(%eax)
 8aafb68:	eb 0d                	jmp    8aafb77 <_ZN19TrainingQuestScript16getTrainingQuestEiii+0x33>
 8aafb6a:	8b 45 08             	mov    0x8(%ebp),%eax
 8aafb6d:	c7 80 8c 14 00 00 00 	movl   $0x0,0x148c(%eax)
 8aafb74:	00 00 00 
 8aafb77:	83 7d 10 9c          	cmpl   $0xffffff9c,0x10(%ebp)
 8aafb7b:	75 53                	jne    8aafbd0 <_ZN19TrainingQuestScript16getTrainingQuestEiii+0x8c>
 8aafb7d:	8b 45 08             	mov    0x8(%ebp),%eax
 8aafb80:	8b 80 8c 14 00 00    	mov    0x148c(%eax),%eax
 8aafb86:	89 c3                	mov    %eax,%ebx
 8aafb88:	8b 45 08             	mov    0x8(%ebp),%eax
 8aafb8b:	05 80 14 00 00       	add    $0x1480,%eax
 8aafb90:	89 04 24             	mov    %eax,(%esp)
 8aafb93:	e8 28 e6 5d ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 8aafb98:	39 c3                	cmp    %eax,%ebx
 8aafb9a:	0f 93 c0             	setae  %al
 8aafb9d:	84 c0                	test   %al,%al
 8aafb9f:	74 0a                	je     8aafbab <_ZN19TrainingQuestScript16getTrainingQuestEiii+0x67>
 8aafba1:	b8 ff ff ff 7f       	mov    $0x7fffffff,%eax
 8aafba6:	e9 b3 00 00 00       	jmp    8aafc5e <_ZN19TrainingQuestScript16getTrainingQuestEiii+0x11a>
 8aafbab:	8b 45 08             	mov    0x8(%ebp),%eax
 8aafbae:	8b 80 8c 14 00 00    	mov    0x148c(%eax),%eax
 8aafbb4:	8b 55 08             	mov    0x8(%ebp),%edx
 8aafbb7:	81 c2 80 14 00 00    	add    $0x1480,%edx
 8aafbbd:	89 44 24 04          	mov    %eax,0x4(%esp)
 8aafbc1:	89 14 24             	mov    %edx,(%esp)
 8aafbc4:	e8 a9 70 5e ff       	call   8096c72 <_ZNSt6vectorIiSaIiEE2atEj>
 8aafbc9:	8b 00                	mov    (%eax),%eax
 8aafbcb:	e9 8e 00 00 00       	jmp    8aafc5e <_ZN19TrainingQuestScript16getTrainingQuestEiii+0x11a>
 8aafbd0:	8b 45 0c             	mov    0xc(%ebp),%eax
 8aafbd3:	83 e8 01             	sub    $0x1,%eax
 8aafbd6:	03 45 10             	add    0x10(%ebp),%eax
 8aafbd9:	85 c0                	test   %eax,%eax
 8aafbdb:	79 07                	jns    8aafbe4 <_ZN19TrainingQuestScript16getTrainingQuestEiii+0xa0>
 8aafbdd:	b8 ff ff ff 7f       	mov    $0x7fffffff,%eax
 8aafbe2:	eb 7a                	jmp    8aafc5e <_ZN19TrainingQuestScript16getTrainingQuestEiii+0x11a>
 8aafbe4:	8b 45 08             	mov    0x8(%ebp),%eax
 8aafbe7:	8b 80 8c 14 00 00    	mov    0x148c(%eax),%eax
 8aafbed:	89 c3                	mov    %eax,%ebx
 8aafbef:	8b 45 0c             	mov    0xc(%ebp),%eax
 8aafbf2:	83 e8 01             	sub    $0x1,%eax
 8aafbf5:	89 c2                	mov    %eax,%edx
 8aafbf7:	03 55 10             	add    0x10(%ebp),%edx
 8aafbfa:	89 d0                	mov    %edx,%eax
 8aafbfc:	01 c0                	add    %eax,%eax
 8aafbfe:	01 d0                	add    %edx,%eax
 8aafc00:	c1 e0 02             	shl    $0x2,%eax
 8aafc03:	05 30 11 00 00       	add    $0x1130,%eax
 8aafc08:	03 45 08             	add    0x8(%ebp),%eax
 8aafc0b:	83 c0 08             	add    $0x8,%eax
 8aafc0e:	89 04 24             	mov    %eax,(%esp)
 8aafc11:	e8 aa e5 5d ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 8aafc16:	39 c3                	cmp    %eax,%ebx
 8aafc18:	0f 93 c0             	setae  %al
 8aafc1b:	84 c0                	test   %al,%al
 8aafc1d:	74 07                	je     8aafc26 <_ZN19TrainingQuestScript16getTrainingQuestEiii+0xe2>
 8aafc1f:	b8 ff ff ff 7f       	mov    $0x7fffffff,%eax
 8aafc24:	eb 38                	jmp    8aafc5e <_ZN19TrainingQuestScript16getTrainingQuestEiii+0x11a>
 8aafc26:	8b 45 08             	mov    0x8(%ebp),%eax
 8aafc29:	8b 80 8c 14 00 00    	mov    0x148c(%eax),%eax
 8aafc2f:	89 c1                	mov    %eax,%ecx
 8aafc31:	8b 45 0c             	mov    0xc(%ebp),%eax
 8aafc34:	83 e8 01             	sub    $0x1,%eax
 8aafc37:	89 c2                	mov    %eax,%edx
 8aafc39:	03 55 10             	add    0x10(%ebp),%edx
 8aafc3c:	89 d0                	mov    %edx,%eax
 8aafc3e:	01 c0                	add    %eax,%eax
 8aafc40:	01 d0                	add    %edx,%eax
 8aafc42:	c1 e0 02             	shl    $0x2,%eax
 8aafc45:	05 30 11 00 00       	add    $0x1130,%eax
 8aafc4a:	03 45 08             	add    0x8(%ebp),%eax
 8aafc4d:	83 c0 08             	add    $0x8,%eax
 8aafc50:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8aafc54:	89 04 24             	mov    %eax,(%esp)
 8aafc57:	e8 16 70 5e ff       	call   8096c72 <_ZNSt6vectorIiSaIiEE2atEj>
 8aafc5c:	8b 00                	mov    (%eax),%eax
 8aafc5e:	83 c4 14             	add    $0x14,%esp
 8aafc61:	5b                   	pop    %ebx
 8aafc62:	5d                   	pop    %ebp
 8aafc63:	c3                   	ret

```

```c
// TrainingQuestScript::getTrainingQuest @ 0x8aafb44

/* TrainingQuestScript::getTrainingQuest(int, int, int) */

undefined4 __thiscall
TrainingQuestScript::getTrainingQuest(TrainingQuestScript *this,int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  if (param_2 == param_3) {
    *(int *)(this + 0x148c) = *(int *)(this + 0x148c) + 1;
  }
  else {
    *(undefined4 *)(this + 0x148c) = 0;
  }
  if (param_2 == -100) {
    uVar1 = *(uint *)(this + 0x148c);
    uVar2 = std::vector<int,std::allocator<int>>::size
                      ((vector<int,std::allocator<int>> *)(this + 0x1480));
    if (uVar1 < uVar2) {
      puVar4 = (undefined4 *)
               std::vector<int,std::allocator<int>>::at
                         ((vector<int,std::allocator<int>> *)(this + 0x1480),
                          *(uint *)(this + 0x148c));
      uVar3 = *puVar4;
    }
    else {
      uVar3 = 0x7fffffff;
    }
  }
  else if (param_1 + -1 + param_2 < 0) {
    uVar3 = 0x7fffffff;
  }
  else {
    uVar1 = *(uint *)(this + 0x148c);
    uVar2 = std::vector<int,std::allocator<int>>::size
                      ((vector<int,std::allocator<int>> *)
                       (this + (param_1 + -1 + param_2) * 0xc + 0x1138));
    if (uVar1 < uVar2) {
      puVar4 = (undefined4 *)
               std::vector<int,std::allocator<int>>::at
                         ((vector<int,std::allocator<int>> *)
                          (this + (param_1 + -1 + param_2) * 0xc + 0x1138),*(uint *)(this + 0x148c))
      ;
      uVar3 = *puVar4;
    }
    else {
      uVar3 = 0x7fffffff;
    }
  }
  return uVar3;
}

```

---

## get_random_fake_value

```asm
// === 08aafc90 TrainingQuestScript::get_random_fake_value  [0x08aafc90-0x8aafcbb] ===
 8aafc90:	55                   	push   %ebp
 8aafc91:	89 e5                	mov    %esp,%ebp
 8aafc93:	83 ec 18             	sub    $0x18,%esp
 8aafc96:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8aafc99:	8b 55 10             	mov    0x10(%ebp),%edx
 8aafc9c:	89 d0                	mov    %edx,%eax
 8aafc9e:	01 c0                	add    %eax,%eax
 8aafca0:	01 d0                	add    %edx,%eax
 8aafca2:	c1 e0 02             	shl    $0x2,%eax
 8aafca5:	83 c0 10             	add    $0x10,%eax
 8aafca8:	03 45 08             	add    0x8(%ebp),%eax
 8aafcab:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8aafcaf:	89 04 24             	mov    %eax,(%esp)
 8aafcb2:	e8 bb 6f 5e ff       	call   8096c72 <_ZNSt6vectorIiSaIiEE2atEj>
 8aafcb7:	8b 00                	mov    (%eax),%eax
 8aafcb9:	c9                   	leave
 8aafcba:	c3                   	ret
 8aafcbb:	90                   	nop

```

```c
// TrainingQuestScript::get_random_fake_value @ 0x8aafc90

/* TrainingQuestScript::get_random_fake_value(int, int) */

undefined4 __thiscall
TrainingQuestScript::get_random_fake_value(TrainingQuestScript *this,int param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)
           std::vector<int,std::allocator<int>>::at
                     ((vector<int,std::allocator<int>> *)(this + param_2 * 0xc + 0x10),param_1);
  return *puVar1;
}

```

---

## suffleTrainingQuests

```asm
// === 08aafcbc TrainingQuestScript::suffleTrainingQuests  [0x08aafcbc-0x8aafdba] ===
 8aafcbc:	55                   	push   %ebp
 8aafcbd:	89 e5                	mov    %esp,%ebp
 8aafcbf:	83 ec 38             	sub    $0x38,%esp
 8aafcc2:	8b 45 08             	mov    0x8(%ebp),%eax
 8aafcc5:	89 04 24             	mov    %eax,(%esp)
 8aafcc8:	e8 97 ff ff ff       	call   8aafc64 <_ZN19TrainingQuestScript15computeDayIndexEv>
 8aafccd:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8aafcd0:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8aafcd3:	89 d0                	mov    %edx,%eax
 8aafcd5:	01 c0                	add    %eax,%eax
 8aafcd7:	01 d0                	add    %edx,%eax
 8aafcd9:	c1 e0 02             	shl    $0x2,%eax
 8aafcdc:	83 c0 10             	add    $0x10,%eax
 8aafcdf:	03 45 08             	add    0x8(%ebp),%eax
 8aafce2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8aafce9:	00 
 8aafcea:	89 04 24             	mov    %eax,(%esp)
 8aafced:	e8 80 6f 5e ff       	call   8096c72 <_ZNSt6vectorIiSaIiEE2atEj>
 8aafcf2:	8b 00                	mov    (%eax),%eax
 8aafcf4:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8aafcf7:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8aafcfa:	89 44 24 04          	mov    %eax,0x4(%esp)
 8aafcfe:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8aafd01:	89 04 24             	mov    %eax,(%esp)
 8aafd04:	e8 0f 01 00 00       	call   8aafe18 <_ZN8MyRandomC1Ei>
 8aafd09:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8aafd10:	e9 95 00 00 00       	jmp    8aafdaa <_ZN19TrainingQuestScript20suffleTrainingQuestsEv+0xee>
 8aafd15:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8aafd18:	89 d0                	mov    %edx,%eax
 8aafd1a:	01 c0                	add    %eax,%eax
 8aafd1c:	01 d0                	add    %edx,%eax
 8aafd1e:	c1 e0 02             	shl    $0x2,%eax
 8aafd21:	05 30 11 00 00       	add    $0x1130,%eax
 8aafd26:	03 45 08             	add    0x8(%ebp),%eax
 8aafd29:	83 c0 08             	add    $0x8,%eax
 8aafd2c:	89 04 24             	mov    %eax,(%esp)
 8aafd2f:	e8 2c cc 66 ff       	call   811c960 <_ZNKSt6vectorIiSaIiEE5emptyEv>
 8aafd34:	84 c0                	test   %al,%al
 8aafd36:	75 6d                	jne    8aafda5 <_ZN19TrainingQuestScript20suffleTrainingQuestsEv+0xe9>
 8aafd38:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8aafd3b:	89 d0                	mov    %edx,%eax
 8aafd3d:	01 c0                	add    %eax,%eax
 8aafd3f:	01 d0                	add    %edx,%eax
 8aafd41:	c1 e0 02             	shl    $0x2,%eax
 8aafd44:	05 30 11 00 00       	add    $0x1130,%eax
 8aafd49:	03 45 08             	add    0x8(%ebp),%eax
 8aafd4c:	8d 50 08             	lea    0x8(%eax),%edx
 8aafd4f:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8aafd52:	89 54 24 04          	mov    %edx,0x4(%esp)
 8aafd56:	89 04 24             	mov    %eax,(%esp)
 8aafd59:	e8 0e e5 5d ff       	call   808e26c <_ZNSt6vectorIiSaIiEE3endEv>
 8aafd5e:	83 ec 04             	sub    $0x4,%esp
 8aafd61:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8aafd64:	89 d0                	mov    %edx,%eax
 8aafd66:	01 c0                	add    %eax,%eax
 8aafd68:	01 d0                	add    %edx,%eax
 8aafd6a:	c1 e0 02             	shl    $0x2,%eax
 8aafd6d:	05 30 11 00 00       	add    $0x1130,%eax
 8aafd72:	03 45 08             	add    0x8(%ebp),%eax
 8aafd75:	8d 50 08             	lea    0x8(%eax),%edx
 8aafd78:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8aafd7b:	89 54 24 04          	mov    %edx,0x4(%esp)
 8aafd7f:	89 04 24             	mov    %eax,(%esp)
 8aafd82:	e8 c1 e4 5d ff       	call   808e248 <_ZNSt6vectorIiSaIiEE5beginEv>
 8aafd87:	83 ec 04             	sub    $0x4,%esp
 8aafd8a:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8aafd8d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8aafd91:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8aafd94:	89 44 24 04          	mov    %eax,0x4(%esp)
 8aafd98:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8aafd9b:	89 04 24             	mov    %eax,(%esp)
 8aafd9e:	e8 d5 00 00 00       	call   8aafe78 <_ZSt14random_shuffleIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEE8MyRandomEvT_S8_RT0_>
 8aafda3:	eb 01                	jmp    8aafda6 <_ZN19TrainingQuestScript20suffleTrainingQuestsEv+0xea>
 8aafda5:	90                   	nop
 8aafda6:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8aafdaa:	83 7d f4 45          	cmpl   $0x45,-0xc(%ebp)
 8aafdae:	0f 9e c0             	setle  %al
 8aafdb1:	84 c0                	test   %al,%al
 8aafdb3:	0f 85 5c ff ff ff    	jne    8aafd15 <_ZN19TrainingQuestScript20suffleTrainingQuestsEv+0x59>
 8aafdb9:	c9                   	leave
 8aafdba:	c3                   	ret

```

```c
// TrainingQuestScript::suffleTrainingQuests @ 0x8aafcbc

/* TrainingQuestScript::suffleTrainingQuests() */

void __thiscall TrainingQuestScript::suffleTrainingQuests(TrainingQuestScript *this)

{
  char cVar1;
  int *piVar2;
  MyRandom local_24 [4];
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_18 = computeDayIndex();
  piVar2 = (int *)std::vector<int,std::allocator<int>>::at
                            ((vector<int,std::allocator<int>> *)(this + local_18 * 0xc + 0x10),0);
  local_14 = *piVar2;
  MyRandom::MyRandom(local_24,local_14);
  for (local_10 = 0; local_10 < 0x46; local_10 = local_10 + 1) {
    cVar1 = std::vector<int,std::allocator<int>>::empty();
    if (cVar1 == '\0') {
      std::vector<int,std::allocator<int>>::end();
      std::vector<int,std::allocator<int>>::begin();
      std::
      random_shuffle<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,MyRandom>
                (local_1c,local_20,local_24);
    }
  }
  return;
}

```

