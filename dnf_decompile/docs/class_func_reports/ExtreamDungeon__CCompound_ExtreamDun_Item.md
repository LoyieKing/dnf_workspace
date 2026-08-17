# ExtreamDungeon__CCompound_ExtreamDun_Item

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 22

---

## CCompound_ExtreamDun_Item

```asm
// === 0832c402 ExtreamDungeon::CCompound_ExtreamDun_Item::CCompound_ExtreamDun_Item  [0x0832c402-0x832c523] ===
 832c402:	55                   	push   %ebp
 832c403:	89 e5                	mov    %esp,%ebp
 832c405:	57                   	push   %edi
 832c406:	56                   	push   %esi
 832c407:	53                   	push   %ebx
 832c408:	83 ec 3c             	sub    $0x3c,%esp
 832c40b:	8b 45 08             	mov    0x8(%ebp),%eax
 832c40e:	83 c0 04             	add    $0x4,%eax
 832c411:	89 04 24             	mov    %eax,(%esp)
 832c414:	e8 3f 1c 00 00       	call   832e058 <_ZN14ExtreamDungeon19BindCube_ScriptDataC1Ev>
 832c419:	8b 45 08             	mov    0x8(%ebp),%eax
 832c41c:	8d b0 8c 0b 00 00    	lea    0xb8c(%eax),%esi
 832c422:	89 f7                	mov    %esi,%edi
 832c424:	bb 01 00 00 00       	mov    $0x1,%ebx
 832c429:	eb 0e                	jmp    832c439 <_ZN14ExtreamDungeon25CCompound_ExtreamDun_ItemC1Ev+0x37>
 832c42b:	89 3c 24             	mov    %edi,(%esp)
 832c42e:	e8 e5 1e 00 00       	call   832e318 <_ZN14ExtreamDungeon26BindCube_LvBonusScriptDataC1Ev>
 832c433:	83 c7 30             	add    $0x30,%edi
 832c436:	83 eb 01             	sub    $0x1,%ebx
 832c439:	83 fb ff             	cmp    $0xffffffff,%ebx
 832c43c:	0f 95 c0             	setne  %al
 832c43f:	84 c0                	test   %al,%al
 832c441:	75 e8                	jne    832c42b <_ZN14ExtreamDungeon25CCompound_ExtreamDun_ItemC1Ev+0x29>
 832c443:	eb 39                	jmp    832c47e <_ZN14ExtreamDungeon25CCompound_ExtreamDun_ItemC1Ev+0x7c>
 832c445:	89 d7                	mov    %edx,%edi
 832c447:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 832c44a:	85 f6                	test   %esi,%esi
 832c44c:	74 26                	je     832c474 <_ZN14ExtreamDungeon25CCompound_ExtreamDun_ItemC1Ev+0x72>
 832c44e:	b8 01 00 00 00       	mov    $0x1,%eax
 832c453:	29 d8                	sub    %ebx,%eax
 832c455:	89 c2                	mov    %eax,%edx
 832c457:	89 d0                	mov    %edx,%eax
 832c459:	01 c0                	add    %eax,%eax
 832c45b:	01 d0                	add    %edx,%eax
 832c45d:	c1 e0 04             	shl    $0x4,%eax
 832c460:	8d 1c 06             	lea    (%esi,%eax,1),%ebx
 832c463:	39 f3                	cmp    %esi,%ebx
 832c465:	74 0d                	je     832c474 <_ZN14ExtreamDungeon25CCompound_ExtreamDun_ItemC1Ev+0x72>
 832c467:	83 eb 30             	sub    $0x30,%ebx
 832c46a:	89 1c 24             	mov    %ebx,(%esp)
 832c46d:	e8 3a 1f 00 00       	call   832e3ac <_ZN14ExtreamDungeon26BindCube_LvBonusScriptDataD1Ev>
 832c472:	eb ef                	jmp    832c463 <_ZN14ExtreamDungeon25CCompound_ExtreamDun_ItemC1Ev+0x61>
 832c474:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 832c477:	89 fa                	mov    %edi,%edx
 832c479:	e9 87 00 00 00       	jmp    832c505 <_ZN14ExtreamDungeon25CCompound_ExtreamDun_ItemC1Ev+0x103>
 832c47e:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 832c485:	e8 c6 12 d5 ff       	call   807d750 <time@plt>
 832c48a:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 832c48d:	8d 75 e4             	lea    -0x1c(%ebp),%esi
 832c490:	c7 04 24 c8 09 00 00 	movl   $0x9c8,(%esp)
 832c497:	e8 b4 7f 3f 00       	call   8724450 <_Znwj>
 832c49c:	89 c3                	mov    %eax,%ebx
 832c49e:	89 d8                	mov    %ebx,%eax
 832c4a0:	89 74 24 04          	mov    %esi,0x4(%esp)
 832c4a4:	89 04 24             	mov    %eax,(%esp)
 832c4a7:	e8 7e f5 d9 ff       	call   80cba2a <_ZN7CMTRandC1ERKm>
 832c4ac:	eb 12                	jmp    832c4c0 <_ZN14ExtreamDungeon25CCompound_ExtreamDun_ItemC1Ev+0xbe>
 832c4ae:	89 d6                	mov    %edx,%esi
 832c4b0:	89 c7                	mov    %eax,%edi
 832c4b2:	89 1c 24             	mov    %ebx,(%esp)
 832c4b5:	e8 36 80 3f 00       	call   87244f0 <_ZdlPv>
 832c4ba:	89 f8                	mov    %edi,%eax
 832c4bc:	89 f2                	mov    %esi,%edx
 832c4be:	eb 0f                	jmp    832c4cf <_ZN14ExtreamDungeon25CCompound_ExtreamDun_ItemC1Ev+0xcd>
 832c4c0:	89 da                	mov    %ebx,%edx
 832c4c2:	8b 45 08             	mov    0x8(%ebp),%eax
 832c4c5:	89 10                	mov    %edx,(%eax)
 832c4c7:	83 c4 3c             	add    $0x3c,%esp
 832c4ca:	5b                   	pop    %ebx
 832c4cb:	5e                   	pop    %esi
 832c4cc:	5f                   	pop    %edi
 832c4cd:	5d                   	pop    %ebp
 832c4ce:	c3                   	ret
 832c4cf:	89 d6                	mov    %edx,%esi
 832c4d1:	89 c7                	mov    %eax,%edi
 832c4d3:	8b 45 08             	mov    0x8(%ebp),%eax
 832c4d6:	05 8c 0b 00 00       	add    $0xb8c,%eax
 832c4db:	85 c0                	test   %eax,%eax
 832c4dd:	74 22                	je     832c501 <_ZN14ExtreamDungeon25CCompound_ExtreamDun_ItemC1Ev+0xff>
 832c4df:	8b 45 08             	mov    0x8(%ebp),%eax
 832c4e2:	8d 98 ec 0b 00 00    	lea    0xbec(%eax),%ebx
 832c4e8:	8b 45 08             	mov    0x8(%ebp),%eax
 832c4eb:	05 8c 0b 00 00       	add    $0xb8c,%eax
 832c4f0:	39 c3                	cmp    %eax,%ebx
 832c4f2:	74 0d                	je     832c501 <_ZN14ExtreamDungeon25CCompound_ExtreamDun_ItemC1Ev+0xff>
 832c4f4:	83 eb 30             	sub    $0x30,%ebx
 832c4f7:	89 1c 24             	mov    %ebx,(%esp)
 832c4fa:	e8 ad 1e 00 00       	call   832e3ac <_ZN14ExtreamDungeon26BindCube_LvBonusScriptDataD1Ev>
 832c4ff:	eb e7                	jmp    832c4e8 <_ZN14ExtreamDungeon25CCompound_ExtreamDun_ItemC1Ev+0xe6>
 832c501:	89 f8                	mov    %edi,%eax
 832c503:	89 f2                	mov    %esi,%edx
 832c505:	89 d3                	mov    %edx,%ebx
 832c507:	89 c6                	mov    %eax,%esi
 832c509:	8b 45 08             	mov    0x8(%ebp),%eax
 832c50c:	83 c0 04             	add    $0x4,%eax
 832c50f:	89 04 24             	mov    %eax,(%esp)
 832c512:	e8 09 1d 00 00       	call   832e220 <_ZN14ExtreamDungeon19BindCube_ScriptDataD1Ev>
 832c517:	89 f0                	mov    %esi,%eax
 832c519:	89 da                	mov    %ebx,%edx
 832c51b:	89 04 24             	mov    %eax,(%esp)
 832c51e:	e8 2d 72 7b 00       	call   8ae3750 <_Unwind_Resume>
 832c523:	90                   	nop

```

```c
// ExtreamDungeon::CCompound_ExtreamDun_Item::CCompound_ExtreamDun_Item @ 0x832c402

/* ExtreamDungeon::CCompound_ExtreamDun_Item::CCompound_ExtreamDun_Item() */

void __thiscall
ExtreamDungeon::CCompound_ExtreamDun_Item::CCompound_ExtreamDun_Item
          (CCompound_ExtreamDun_Item *this)

{
  CMTRand *this_00;
  int iVar1;
  BindCube_LvBonusScriptData *this_01;
  ulong local_20 [4];
  
  BindCube_ScriptData::BindCube_ScriptData((BindCube_ScriptData *)(this + 4));
  this_01 = (BindCube_LvBonusScriptData *)(this + 0xb8c);
  for (iVar1 = 1; iVar1 != -1; iVar1 = iVar1 + -1) {
                    /* try { // try from 0832c42e to 0832c432 has its CatchHandler @ 0832c445 */
    BindCube_LvBonusScriptData::BindCube_LvBonusScriptData(this_01);
    this_01 = this_01 + 0x30;
  }
  local_20[0] = time((time_t *)0x0);
                    /* try { // try from 0832c497 to 0832c49b has its CatchHandler @ 0832c4cf */
  this_00 = operator_new(0x9c8);
                    /* try { // try from 0832c4a7 to 0832c4ab has its CatchHandler @ 0832c4ae */
  CMTRand::CMTRand(this_00,local_20);
  *(CMTRand **)this = this_00;
  return;
}

```

---

## ForceResultItemRule_Setting

```asm
// === 0832d784 ExtreamDungeon::CCompound_ExtreamDun_Item::ForceResultItemRule_Setting  [0x0832d784-0x832d7d5] ===
 832d784:	55                   	push   %ebp
 832d785:	89 e5                	mov    %esp,%ebp
 832d787:	53                   	push   %ebx
 832d788:	83 ec 34             	sub    $0x34,%esp
 832d78b:	8b 45 10             	mov    0x10(%ebp),%eax
 832d78e:	88 45 e4             	mov    %al,-0x1c(%ebp)
 832d791:	8b 45 08             	mov    0x8(%ebp),%eax
 832d794:	8d 90 74 0b 00 00    	lea    0xb74(%eax),%edx
 832d79a:	8d 45 0c             	lea    0xc(%ebp),%eax
 832d79d:	89 44 24 04          	mov    %eax,0x4(%esp)
 832d7a1:	89 14 24             	mov    %edx,(%esp)
 832d7a4:	e8 e1 11 00 00       	call   832e98a <_ZNSt3mapIiN14ExtreamDungeon20forceRule_ResultItemESt4lessIiESaISt4pairIKiS1_EEEixERS5_>
 832d7a9:	89 c3                	mov    %eax,%ebx
 832d7ab:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
 832d7af:	8b 55 14             	mov    0x14(%ebp),%edx
 832d7b2:	89 54 24 08          	mov    %edx,0x8(%esp)
 832d7b6:	89 44 24 04          	mov    %eax,0x4(%esp)
 832d7ba:	8d 45 f0             	lea    -0x10(%ebp),%eax
 832d7bd:	89 04 24             	mov    %eax,(%esp)
 832d7c0:	e8 45 08 00 00       	call   832e00a <_ZN14ExtreamDungeon20forceRule_ResultItemC1Ebi>
 832d7c5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 832d7c8:	8b 55 f4             	mov    -0xc(%ebp),%edx
 832d7cb:	89 03                	mov    %eax,(%ebx)
 832d7cd:	89 53 04             	mov    %edx,0x4(%ebx)
 832d7d0:	83 c4 34             	add    $0x34,%esp
 832d7d3:	5b                   	pop    %ebx
 832d7d4:	5d                   	pop    %ebp
 832d7d5:	c3                   	ret

```

```c
// ExtreamDungeon::CCompound_ExtreamDun_Item::ForceResultItemRule_Setting @ 0x832d784

/* ExtreamDungeon::CCompound_ExtreamDun_Item::ForceResultItemRule_Setting(int, bool, int) */

void __thiscall
ExtreamDungeon::CCompound_ExtreamDun_Item::ForceResultItemRule_Setting
          (CCompound_ExtreamDun_Item *this,int param_1,bool param_2,int param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined3 in_stack_0000000d;
  undefined4 local_14;
  undefined4 local_10;
  
  bVar1 = param_2;
  puVar2 = (undefined4 *)
           std::
           map<int,ExtreamDungeon::forceRule_ResultItem,std::less<int>,std::allocator<std::pair<int_const,ExtreamDungeon::forceRule_ResultItem>>>
           ::operator[]((map<int,ExtreamDungeon::forceRule_ResultItem,std::less<int>,std::allocator<std::pair<int_const,ExtreamDungeon::forceRule_ResultItem>>>
                         *)(this + 0xb74),&param_1);
  forceRule_ResultItem::forceRule_ResultItem((forceRule_ResultItem *)&local_14,bVar1,param_3);
  *puVar2 = local_14;
  puVar2[1] = local_10;
  return;
}

```

---

## LoadScript

```asm
// === 0832c65e ExtreamDungeon::CCompound_ExtreamDun_Item::LoadScript  [0x0832c65e-0x832c975] ===
 832c65e:	55                   	push   %ebp
 832c65f:	89 e5                	mov    %esp,%ebp
 832c661:	56                   	push   %esi
 832c662:	53                   	push   %ebx
 832c663:	83 ec 60             	sub    $0x60,%esp
 832c666:	8b 45 10             	mov    0x10(%ebp),%eax
 832c669:	89 44 24 04          	mov    %eax,0x4(%esp)
 832c66d:	8b 45 0c             	mov    0xc(%ebp),%eax
 832c670:	89 04 24             	mov    %eax,(%esp)
 832c673:	e8 b1 f6 58 00       	call   88bbd29 <_Z18loadRDARScriptFilePKcS0_>
 832c678:	83 f0 01             	xor    $0x1,%eax
 832c67b:	84 c0                	test   %al,%al
 832c67d:	74 0a                	je     832c689 <_ZN14ExtreamDungeon25CCompound_ExtreamDun_Item10LoadScriptEPKcS2_+0x2b>
 832c67f:	bb 62 00 00 00       	mov    $0x62,%ebx
 832c684:	e9 e3 02 00 00       	jmp    832c96c <_ZN14ExtreamDungeon25CCompound_ExtreamDun_Item10LoadScriptEPKcS2_+0x30e>
 832c689:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 832c68c:	89 04 24             	mov    %eax,(%esp)
 832c68f:	e8 3c 9f 3d 00       	call   87065d0 <_ZNSsC1Ev>
 832c694:	8d 45 b0             	lea    -0x50(%ebp),%eax
 832c697:	89 04 24             	mov    %eax,(%esp)
 832c69a:	e8 31 9f 3d 00       	call   87065d0 <_ZNSsC1Ev>
 832c69f:	c6 45 cb 00          	movb   $0x0,-0x35(%ebp)
 832c6a3:	eb 01                	jmp    832c6a6 <_ZN14ExtreamDungeon25CCompound_ExtreamDun_Item10LoadScriptEPKcS2_+0x48>
 832c6a5:	90                   	nop
 832c6a6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 832c6ad:	00 
 832c6ae:	8d 45 b0             	lea    -0x50(%ebp),%eax
 832c6b1:	89 04 24             	mov    %eax,(%esp)
 832c6b4:	e8 a6 01 59 00       	call   88bc85f <_Z8ScanTypeRSsb>
 832c6b9:	83 f0 01             	xor    $0x1,%eax
 832c6bc:	84 c0                	test   %al,%al
 832c6be:	0f 85 5a 02 00 00    	jne    832c91e <_ZN14ExtreamDungeon25CCompound_ExtreamDun_Item10LoadScriptEPKcS2_+0x2c0>
 832c6c4:	c7 44 24 04 00 ac c2 	movl   $0x8c2ac00,0x4(%esp)
 832c6cb:	08 
 832c6cc:	8d 45 b0             	lea    -0x50(%ebp),%eax
 832c6cf:	89 04 24             	mov    %eax,(%esp)
 832c6d2:	e8 ca 42 d5 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 832c6d7:	84 c0                	test   %al,%al
 832c6d9:	74 25                	je     832c700 <_ZN14ExtreamDungeon25CCompound_ExtreamDun_Item10LoadScriptEPKcS2_+0xa2>
 832c6db:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 832c6e2:	eb 0f                	jmp    832c6f3 <_ZN14ExtreamDungeon25CCompound_ExtreamDun_Item10LoadScriptEPKcS2_+0x95>
 832c6e4:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 832c6e7:	89 04 24             	mov    %eax,(%esp)
 832c6ea:	e8 b3 00 59 00       	call   88bc7a2 <_Z7ScanStrPSs>
 832c6ef:	83 45 cc 01          	addl   $0x1,-0x34(%ebp)
 832c6f3:	83 7d cc 02          	cmpl   $0x2,-0x34(%ebp)
 832c6f7:	0f 9e c0             	setle  %al
 832c6fa:	84 c0                	test   %al,%al
 832c6fc:	75 e6                	jne    832c6e4 <_ZN14ExtreamDungeon25CCompound_ExtreamDun_Item10LoadScriptEPKcS2_+0x86>
 832c6fe:	eb a6                	jmp    832c6a6 <_ZN14ExtreamDungeon25CCompound_ExtreamDun_Item10LoadScriptEPKcS2_+0x48>
 832c700:	c7 44 24 04 10 ac c2 	movl   $0x8c2ac10,0x4(%esp)
 832c707:	08 
 832c708:	8d 45 b0             	lea    -0x50(%ebp),%eax
 832c70b:	89 04 24             	mov    %eax,(%esp)
 832c70e:	e8 8e 42 d5 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 832c713:	84 c0                	test   %al,%al
 832c715:	74 59                	je     832c770 <_ZN14ExtreamDungeon25CCompound_ExtreamDun_Item10LoadScriptEPKcS2_+0x112>
 832c717:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 832c71e:	eb 40                	jmp    832c760 <_ZN14ExtreamDungeon25CCompound_ExtreamDun_Item10LoadScriptEPKcS2_+0x102>
 832c720:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 832c727:	eb 28                	jmp    832c751 <_ZN14ExtreamDungeon25CCompound_ExtreamDun_Item10LoadScriptEPKcS2_+0xf3>
 832c729:	8b 75 d0             	mov    -0x30(%ebp),%esi
 832c72c:	8b 5d d4             	mov    -0x2c(%ebp),%ebx
 832c72f:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 832c736:	e8 40 fc 58 00       	call   88bc37b <_Z7ScanIntPb>
 832c73b:	89 c2                	mov    %eax,%edx
 832c73d:	8b 45 08             	mov    0x8(%ebp),%eax
 832c740:	8d 0c b5 00 00 00 00 	lea    0x0(,%esi,4),%ecx
 832c747:	01 d9                	add    %ebx,%ecx
 832c749:	89 54 88 04          	mov    %edx,0x4(%eax,%ecx,4)
 832c74d:	83 45 d4 01          	addl   $0x1,-0x2c(%ebp)
 832c751:	83 7d d4 03          	cmpl   $0x3,-0x2c(%ebp)
 832c755:	0f 9e c0             	setle  %al
 832c758:	84 c0                	test   %al,%al
 832c75a:	75 cd                	jne    832c729 <_ZN14ExtreamDungeon25CCompound_ExtreamDun_Item10LoadScriptEPKcS2_+0xcb>
 832c75c:	83 45 d0 01          	addl   $0x1,-0x30(%ebp)
 832c760:	83 7d d0 02          	cmpl   $0x2,-0x30(%ebp)
 832c764:	0f 9e c0             	setle  %al
 832c767:	84 c0                	test   %al,%al
 832c769:	75 b5                	jne    832c720 <_ZN14ExtreamDungeon25CCompound_ExtreamDun_Item10LoadScriptEPKcS2_+0xc2>
 832c76b:	e9 36 ff ff ff       	jmp    832c6a6 <_ZN14ExtreamDungeon25CCompound_ExtreamDun_Item10LoadScriptEPKcS2_+0x48>
 832c770:	c7 44 24 04 22 ac c2 	movl   $0x8c2ac22,0x4(%esp)
 832c777:	08 
 832c778:	8d 45 b0             	lea    -0x50(%ebp),%eax
 832c77b:	89 04 24             	mov    %eax,(%esp)
 832c77e:	e8 1e 42 d5 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 832c783:	84 c0                	test   %al,%al
 832c785:	0f 84 bc 00 00 00    	je     832c847 <_ZN14ExtreamDungeon25CCompound_ExtreamDun_Item10LoadScriptEPKcS2_+0x1e9>
 832c78b:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 832c792:	e8 e4 fb 58 00       	call   88bc37b <_Z7ScanIntPb>
 832c797:	89 45 d8             	mov    %eax,-0x28(%ebp)
 832c79a:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 832c7a1:	eb 2b                	jmp    832c7ce <_ZN14ExtreamDungeon25CCompound_ExtreamDun_Item10LoadScriptEPKcS2_+0x170>
 832c7a3:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 832c7aa:	e8 cc fb 58 00       	call   88bc37b <_Z7ScanIntPb>
 832c7af:	89 45 b8             	mov    %eax,-0x48(%ebp)
 832c7b2:	8b 45 08             	mov    0x8(%ebp),%eax
 832c7b5:	8d 90 8c 0b 00 00    	lea    0xb8c(%eax),%edx
 832c7bb:	8d 45 b8             	lea    -0x48(%ebp),%eax
 832c7be:	89 44 24 04          	mov    %eax,0x4(%esp)
 832c7c2:	89 14 24             	mov    %edx,(%esp)
 832c7c5:	e8 fc 5f e2 ff       	call   81527c6 <_ZNSt6vectorIjSaIjEE9push_backEOj>
 832c7ca:	83 45 dc 01          	addl   $0x1,-0x24(%ebp)
 832c7ce:	8b 45 dc             	mov    -0x24(%ebp),%eax
 832c7d1:	3b 45 d8             	cmp    -0x28(%ebp),%eax
 832c7d4:	0f 92 c0             	setb   %al
 832c7d7:	84 c0                	test   %al,%al
 832c7d9:	75 c8                	jne    832c7a3 <_ZN14ExtreamDungeon25CCompound_ExtreamDun_Item10LoadScriptEPKcS2_+0x145>
 832c7db:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 832c7e2:	eb 53                	jmp    832c837 <_ZN14ExtreamDungeon25CCompound_ExtreamDun_Item10LoadScriptEPKcS2_+0x1d9>
 832c7e4:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 832c7eb:	eb 39                	jmp    832c826 <_ZN14ExtreamDungeon25CCompound_ExtreamDun_Item10LoadScriptEPKcS2_+0x1c8>
 832c7ed:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 832c7f4:	e8 82 fb 58 00       	call   88bc37b <_Z7ScanIntPb>
 832c7f9:	89 45 bc             	mov    %eax,-0x44(%ebp)
 832c7fc:	8b 55 e0             	mov    -0x20(%ebp),%edx
 832c7ff:	89 d0                	mov    %edx,%eax
 832c801:	01 c0                	add    %eax,%eax
 832c803:	01 d0                	add    %edx,%eax
 832c805:	c1 e0 02             	shl    $0x2,%eax
 832c808:	05 80 0b 00 00       	add    $0xb80,%eax
 832c80d:	03 45 08             	add    0x8(%ebp),%eax
 832c810:	8d 50 18             	lea    0x18(%eax),%edx
 832c813:	8d 45 bc             	lea    -0x44(%ebp),%eax
 832c816:	89 44 24 04          	mov    %eax,0x4(%esp)
 832c81a:	89 14 24             	mov    %edx,(%esp)
 832c81d:	e8 a4 5f e2 ff       	call   81527c6 <_ZNSt6vectorIjSaIjEE9push_backEOj>
 832c822:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 832c826:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 832c829:	3b 45 d8             	cmp    -0x28(%ebp),%eax
 832c82c:	0f 92 c0             	setb   %al
 832c82f:	84 c0                	test   %al,%al
 832c831:	75 ba                	jne    832c7ed <_ZN14ExtreamDungeon25CCompound_ExtreamDun_Item10LoadScriptEPKcS2_+0x18f>
 832c833:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 832c837:	83 7d e0 02          	cmpl   $0x2,-0x20(%ebp)
 832c83b:	0f 9e c0             	setle  %al
 832c83e:	84 c0                	test   %al,%al
 832c840:	75 a2                	jne    832c7e4 <_ZN14ExtreamDungeon25CCompound_ExtreamDun_Item10LoadScriptEPKcS2_+0x186>
 832c842:	e9 5f fe ff ff       	jmp    832c6a6 <_ZN14ExtreamDungeon25CCompound_ExtreamDun_Item10LoadScriptEPKcS2_+0x48>
 832c847:	c7 44 24 04 33 ac c2 	movl   $0x8c2ac33,0x4(%esp)
 832c84e:	08 
 832c84f:	8d 45 b0             	lea    -0x50(%ebp),%eax
 832c852:	89 04 24             	mov    %eax,(%esp)
 832c855:	e8 47 41 d5 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 832c85a:	84 c0                	test   %al,%al
 832c85c:	0f 84 43 fe ff ff    	je     832c6a5 <_ZN14ExtreamDungeon25CCompound_ExtreamDun_Item10LoadScriptEPKcS2_+0x47>
 832c862:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 832c869:	e8 0d fb 58 00       	call   88bc37b <_Z7ScanIntPb>
 832c86e:	89 45 e8             	mov    %eax,-0x18(%ebp)
 832c871:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 832c878:	eb 2b                	jmp    832c8a5 <_ZN14ExtreamDungeon25CCompound_ExtreamDun_Item10LoadScriptEPKcS2_+0x247>
 832c87a:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 832c881:	e8 f5 fa 58 00       	call   88bc37b <_Z7ScanIntPb>
 832c886:	89 45 c0             	mov    %eax,-0x40(%ebp)
 832c889:	8b 45 08             	mov    0x8(%ebp),%eax
 832c88c:	8d 90 bc 0b 00 00    	lea    0xbbc(%eax),%edx
 832c892:	8d 45 c0             	lea    -0x40(%ebp),%eax
 832c895:	89 44 24 04          	mov    %eax,0x4(%esp)
 832c899:	89 14 24             	mov    %edx,(%esp)
 832c89c:	e8 25 5f e2 ff       	call   81527c6 <_ZNSt6vectorIjSaIjEE9push_backEOj>
 832c8a1:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 832c8a5:	8b 45 ec             	mov    -0x14(%ebp),%eax
 832c8a8:	3b 45 e8             	cmp    -0x18(%ebp),%eax
 832c8ab:	0f 92 c0             	setb   %al
 832c8ae:	84 c0                	test   %al,%al
 832c8b0:	75 c8                	jne    832c87a <_ZN14ExtreamDungeon25CCompound_ExtreamDun_Item10LoadScriptEPKcS2_+0x21c>
 832c8b2:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 832c8b9:	eb 53                	jmp    832c90e <_ZN14ExtreamDungeon25CCompound_ExtreamDun_Item10LoadScriptEPKcS2_+0x2b0>
 832c8bb:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 832c8c2:	eb 39                	jmp    832c8fd <_ZN14ExtreamDungeon25CCompound_ExtreamDun_Item10LoadScriptEPKcS2_+0x29f>
 832c8c4:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 832c8cb:	e8 ab fa 58 00       	call   88bc37b <_Z7ScanIntPb>
 832c8d0:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 832c8d3:	8b 55 f0             	mov    -0x10(%ebp),%edx
 832c8d6:	89 d0                	mov    %edx,%eax
 832c8d8:	01 c0                	add    %eax,%eax
 832c8da:	01 d0                	add    %edx,%eax
 832c8dc:	c1 e0 02             	shl    $0x2,%eax
 832c8df:	05 b0 0b 00 00       	add    $0xbb0,%eax
 832c8e4:	03 45 08             	add    0x8(%ebp),%eax
 832c8e7:	8d 50 18             	lea    0x18(%eax),%edx
 832c8ea:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 832c8ed:	89 44 24 04          	mov    %eax,0x4(%esp)
 832c8f1:	89 14 24             	mov    %edx,(%esp)
 832c8f4:	e8 cd 5e e2 ff       	call   81527c6 <_ZNSt6vectorIjSaIjEE9push_backEOj>
 832c8f9:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 832c8fd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 832c900:	3b 45 e8             	cmp    -0x18(%ebp),%eax
 832c903:	0f 92 c0             	setb   %al
 832c906:	84 c0                	test   %al,%al
 832c908:	75 ba                	jne    832c8c4 <_ZN14ExtreamDungeon25CCompound_ExtreamDun_Item10LoadScriptEPKcS2_+0x266>
 832c90a:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 832c90e:	83 7d f0 02          	cmpl   $0x2,-0x10(%ebp)
 832c912:	0f 9e c0             	setle  %al
 832c915:	84 c0                	test   %al,%al
 832c917:	75 a2                	jne    832c8bb <_ZN14ExtreamDungeon25CCompound_ExtreamDun_Item10LoadScriptEPKcS2_+0x25d>
 832c919:	e9 88 fd ff ff       	jmp    832c6a6 <_ZN14ExtreamDungeon25CCompound_ExtreamDun_Item10LoadScriptEPKcS2_+0x48>
 832c91e:	90                   	nop
 832c91f:	bb 00 00 00 00       	mov    $0x0,%ebx
 832c924:	8d 45 b0             	lea    -0x50(%ebp),%eax
 832c927:	89 04 24             	mov    %eax,(%esp)
 832c92a:	e8 b1 b2 3d 00       	call   8707be0 <_ZNSsD1Ev>
 832c92f:	eb 30                	jmp    832c961 <_ZN14ExtreamDungeon25CCompound_ExtreamDun_Item10LoadScriptEPKcS2_+0x303>
 832c931:	89 d3                	mov    %edx,%ebx
 832c933:	89 c6                	mov    %eax,%esi
 832c935:	8d 45 b0             	lea    -0x50(%ebp),%eax
 832c938:	89 04 24             	mov    %eax,(%esp)
 832c93b:	e8 a0 b2 3d 00       	call   8707be0 <_ZNSsD1Ev>
 832c940:	89 f0                	mov    %esi,%eax
 832c942:	89 da                	mov    %ebx,%edx
 832c944:	eb 00                	jmp    832c946 <_ZN14ExtreamDungeon25CCompound_ExtreamDun_Item10LoadScriptEPKcS2_+0x2e8>
 832c946:	89 d3                	mov    %edx,%ebx
 832c948:	89 c6                	mov    %eax,%esi
 832c94a:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 832c94d:	89 04 24             	mov    %eax,(%esp)
 832c950:	e8 8b b2 3d 00       	call   8707be0 <_ZNSsD1Ev>
 832c955:	89 f0                	mov    %esi,%eax
 832c957:	89 da                	mov    %ebx,%edx
 832c959:	89 04 24             	mov    %eax,(%esp)
 832c95c:	e8 ef 6d 7b 00       	call   8ae3750 <_Unwind_Resume>
 832c961:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 832c964:	89 04 24             	mov    %eax,(%esp)
 832c967:	e8 74 b2 3d 00       	call   8707be0 <_ZNSsD1Ev>
 832c96c:	89 d8                	mov    %ebx,%eax
 832c96e:	83 c4 60             	add    $0x60,%esp
 832c971:	5b                   	pop    %ebx
 832c972:	5e                   	pop    %esi
 832c973:	5d                   	pop    %ebp
 832c974:	c3                   	ret
 832c975:	90                   	nop

```

```c
// ExtreamDungeon::CCompound_ExtreamDun_Item::LoadScript @ 0x832c65e

/* ExtreamDungeon::CCompound_ExtreamDun_Item::LoadScript(char const*, char const*) */

undefined4 __thiscall
ExtreamDungeon::CCompound_ExtreamDun_Item::LoadScript
          (CCompound_ExtreamDun_Item *this,char *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  string local_54;
  string local_50 [4];
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  undefined1 local_39;
  int local_38;
  int local_34;
  int local_30;
  uint local_2c;
  uint local_28;
  int local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  uint local_10;
  
  cVar3 = loadRDARScriptFile(param_1,param_2);
  if (cVar3 == '\x01') {
    std::string::string(local_50);
                    /* try { // try from 0832c69a to 0832c69e has its CatchHandler @ 0832c946 */
    std::string::string((string *)&local_54);
    local_39 = 0;
                    /* try { // try from 0832c6b4 to 0832c8f8 has its CatchHandler @ 0832c931 */
    while (cVar3 = ScanType((string *)&local_54,true), cVar3 == '\x01') {
      bVar4 = std::operator==(&local_54,"[insert rarity]");
      if (bVar4) {
        for (local_38 = 0; local_38 < 3; local_38 = local_38 + 1) {
          ScanStr(local_50);
        }
      }
      else {
        bVar4 = std::operator==(&local_54,"[rarity dicision]");
        if (bVar4) {
          for (local_34 = 0; local_34 < 3; local_34 = local_34 + 1) {
            for (local_30 = 0; iVar2 = local_30, iVar1 = local_34, local_30 < 4;
                local_30 = local_30 + 1) {
              uVar5 = ScanInt((bool *)0x0);
              *(undefined4 *)(this + (iVar1 * 4 + iVar2) * 4 + 4) = uVar5;
            }
          }
        }
        else {
          bVar4 = std::operator==(&local_54,"[level dicision]");
          if (bVar4) {
            local_2c = ScanInt((bool *)0x0);
            for (local_28 = 0; local_28 < local_2c; local_28 = local_28 + 1) {
              local_4c = ScanInt((bool *)0x0);
              std::vector<unsigned_int,std::allocator<unsigned_int>>::push_back
                        ((vector<unsigned_int,std::allocator<unsigned_int>> *)(this + 0xb8c),
                         &local_4c);
            }
            for (local_24 = 0; local_24 < 3; local_24 = local_24 + 1) {
              for (local_20 = 0; local_20 < local_2c; local_20 = local_20 + 1) {
                local_48 = ScanInt((bool *)0x0);
                std::vector<unsigned_int,std::allocator<unsigned_int>>::push_back
                          ((vector<unsigned_int,std::allocator<unsigned_int>> *)
                           (this + local_24 * 0xc + 0xb98),&local_48);
              }
            }
          }
          else {
            bVar4 = std::operator==(&local_54,"[silver level dicision]");
            if (bVar4) {
              local_1c = ScanInt((bool *)0x0);
              for (local_18 = 0; local_18 < local_1c; local_18 = local_18 + 1) {
                local_44 = ScanInt((bool *)0x0);
                std::vector<unsigned_int,std::allocator<unsigned_int>>::push_back
                          ((vector<unsigned_int,std::allocator<unsigned_int>> *)(this + 0xbbc),
                           &local_44);
              }
              for (local_14 = 0; local_14 < 3; local_14 = local_14 + 1) {
                for (local_10 = 0; local_10 < local_1c; local_10 = local_10 + 1) {
                  local_40 = ScanInt((bool *)0x0);
                  std::vector<unsigned_int,std::allocator<unsigned_int>>::push_back
                            ((vector<unsigned_int,std::allocator<unsigned_int>> *)
                             (this + local_14 * 0xc + 0xbc8),&local_40);
                }
              }
            }
          }
        }
      }
    }
    uVar5 = 0;
                    /* try { // try from 0832c92a to 0832c92e has its CatchHandler @ 0832c946 */
    std::string::~string((string *)&local_54);
    std::string::~string(local_50);
  }
  else {
    uVar5 = 0x62;
  }
  return uVar5;
}

```

---

## _AddItem

```asm
// === 0832dd1c ExtreamDungeon::CCompound_ExtreamDun_Item::_AddItem  [0x0832dd1c-0x832de17] ===
 832dd1c:	55                   	push   %ebp
 832dd1d:	89 e5                	mov    %esp,%ebp
 832dd1f:	53                   	push   %ebx
 832dd20:	83 ec 34             	sub    $0x34,%esp
 832dd23:	8b 45 0c             	mov    0xc(%ebp),%eax
 832dd26:	89 04 24             	mov    %eax,(%esp)
 832dd29:	e8 08 03 00 00       	call   832e036 <_ZNK10CEquipItem22GetUsableEquipmentTypeEv>
 832dd2e:	89 44 24 04          	mov    %eax,0x4(%esp)
 832dd32:	8b 45 08             	mov    0x8(%ebp),%eax
 832dd35:	89 04 24             	mov    %eax,(%esp)
 832dd38:	e8 6f e8 ff ff       	call   832c5ac <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item18_convertOutputItemE28ENUM_UNUSABLE_EQUIPMENT_TYPE>
 832dd3d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 832dd40:	83 7d f4 04          	cmpl   $0x4,-0xc(%ebp)
 832dd44:	75 0a                	jne    832dd50 <_ZN14ExtreamDungeon25CCompound_ExtreamDun_Item8_AddItemER10CEquipItem+0x34>
 832dd46:	b8 00 00 00 00       	mov    $0x0,%eax
 832dd4b:	e9 c2 00 00 00       	jmp    832de12 <_ZN14ExtreamDungeon25CCompound_ExtreamDun_Item8_AddItemER10CEquipItem+0xf6>
 832dd50:	8b 45 0c             	mov    0xc(%ebp),%eax
 832dd53:	89 04 24             	mov    %eax,(%esp)
 832dd56:	e8 ed 2e de ff       	call   8110c48 <_ZNK5CItem9get_indexEv>
 832dd5b:	89 c3                	mov    %eax,%ebx
 832dd5d:	8b 45 0c             	mov    0xc(%ebp),%eax
 832dd60:	89 04 24             	mov    %eax,(%esp)
 832dd63:	e8 86 35 dc ff       	call   80f12ee <_ZNK5CItem14getUsableLevelEv>
 832dd68:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 832dd6c:	89 44 24 04          	mov    %eax,0x4(%esp)
 832dd70:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 832dd73:	89 04 24             	mov    %eax,(%esp)
 832dd76:	e8 43 02 00 00       	call   832dfbe <_ZN14ExtreamDungeon15OUTPUT_ITEM_STRC1Eii>
 832dd7b:	8b 55 f4             	mov    -0xc(%ebp),%edx
 832dd7e:	89 d0                	mov    %edx,%eax
 832dd80:	01 c0                	add    %eax,%eax
 832dd82:	01 d0                	add    %edx,%eax
 832dd84:	c1 e0 02             	shl    $0x2,%eax
 832dd87:	05 40 0b 00 00       	add    $0xb40,%eax
 832dd8c:	03 45 08             	add    0x8(%ebp),%eax
 832dd8f:	8d 50 04             	lea    0x4(%eax),%edx
 832dd92:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 832dd95:	89 44 24 04          	mov    %eax,0x4(%esp)
 832dd99:	89 14 24             	mov    %edx,(%esp)
 832dd9c:	e8 f3 0c 00 00       	call   832ea94 <_ZNSt6vectorIN14ExtreamDungeon15OUTPUT_ITEM_STRESaIS1_EE9push_backEOS1_>
 832dda1:	8b 45 0c             	mov    0xc(%ebp),%eax
 832dda4:	89 04 24             	mov    %eax,(%esp)
 832dda7:	e8 9c 2e de ff       	call   8110c48 <_ZNK5CItem9get_indexEv>
 832ddac:	89 c3                	mov    %eax,%ebx
 832ddae:	8b 45 0c             	mov    0xc(%ebp),%eax
 832ddb1:	89 04 24             	mov    %eax,(%esp)
 832ddb4:	e8 35 35 dc ff       	call   80f12ee <_ZNK5CItem14getUsableLevelEv>
 832ddb9:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 832ddbd:	89 44 24 04          	mov    %eax,0x4(%esp)
 832ddc1:	8d 45 ec             	lea    -0x14(%ebp),%eax
 832ddc4:	89 04 24             	mov    %eax,(%esp)
 832ddc7:	e8 f2 01 00 00       	call   832dfbe <_ZN14ExtreamDungeon15OUTPUT_ITEM_STRC1Eii>
 832ddcc:	8b 45 0c             	mov    0xc(%ebp),%eax
 832ddcf:	89 04 24             	mov    %eax,(%esp)
 832ddd2:	e8 3b 35 dc ff       	call   80f1312 <_ZNK5CItem16getItemGroupNameEv>
 832ddd7:	89 c2                	mov    %eax,%edx
 832ddd9:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 832dddc:	89 c8                	mov    %ecx,%eax
 832ddde:	01 c0                	add    %eax,%eax
 832dde0:	01 c8                	add    %ecx,%eax
 832dde2:	8d 0c 85 00 00 00 00 	lea    0x0(,%eax,4),%ecx
 832dde9:	89 d0                	mov    %edx,%eax
 832ddeb:	01 c0                	add    %eax,%eax
 832dded:	01 d0                	add    %edx,%eax
 832ddef:	c1 e0 04             	shl    $0x4,%eax
 832ddf2:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 832ddf5:	83 c0 30             	add    $0x30,%eax
 832ddf8:	03 45 08             	add    0x8(%ebp),%eax
 832ddfb:	8d 50 04             	lea    0x4(%eax),%edx
 832ddfe:	8d 45 ec             	lea    -0x14(%ebp),%eax
 832de01:	89 44 24 04          	mov    %eax,0x4(%esp)
 832de05:	89 14 24             	mov    %edx,(%esp)
 832de08:	e8 87 0c 00 00       	call   832ea94 <_ZNSt6vectorIN14ExtreamDungeon15OUTPUT_ITEM_STRESaIS1_EE9push_backEOS1_>
 832de0d:	b8 01 00 00 00       	mov    $0x1,%eax
 832de12:	83 c4 34             	add    $0x34,%esp
 832de15:	5b                   	pop    %ebx
 832de16:	5d                   	pop    %ebp
 832de17:	c3                   	ret

```

```c
// ExtreamDungeon::CCompound_ExtreamDun_Item::_AddItem @ 0x832dd1c

/* ExtreamDungeon::CCompound_ExtreamDun_Item::_AddItem(CEquipItem&) */

bool __thiscall
ExtreamDungeon::CCompound_ExtreamDun_Item::_AddItem
          (CCompound_ExtreamDun_Item *this,CEquipItem *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  OUTPUT_ITEM_STR local_20 [8];
  OUTPUT_ITEM_STR local_18 [8];
  int local_10;
  
  uVar1 = CEquipItem::GetUsableEquipmentType(param_1);
  local_10 = _convertOutputItem(this,uVar1);
  bVar4 = local_10 != 4;
  if (bVar4) {
    iVar2 = CItem::get_index((CItem *)param_1);
    iVar3 = CItem::getUsableLevel((CItem *)param_1);
    OUTPUT_ITEM_STR::OUTPUT_ITEM_STR(local_20,iVar3,iVar2);
    std::vector<ExtreamDungeon::OUTPUT_ITEM_STR,std::allocator<ExtreamDungeon::OUTPUT_ITEM_STR>>::
    push_back((vector<ExtreamDungeon::OUTPUT_ITEM_STR,std::allocator<ExtreamDungeon::OUTPUT_ITEM_STR>>
               *)(this + local_10 * 0xc + 0xb44),local_20);
    iVar2 = CItem::get_index((CItem *)param_1);
    iVar3 = CItem::getUsableLevel((CItem *)param_1);
    OUTPUT_ITEM_STR::OUTPUT_ITEM_STR(local_18,iVar3,iVar2);
    iVar2 = CItem::getItemGroupName((CItem *)param_1);
    std::vector<ExtreamDungeon::OUTPUT_ITEM_STR,std::allocator<ExtreamDungeon::OUTPUT_ITEM_STR>>::
    push_back((vector<ExtreamDungeon::OUTPUT_ITEM_STR,std::allocator<ExtreamDungeon::OUTPUT_ITEM_STR>>
               *)(this + local_10 * 0xc + iVar2 * 0x30 + 0x34),local_18);
  }
  return bVar4;
}

```

---

## _FindItemAll_BindSphere

```asm
// === 0832d438 ExtreamDungeon::CCompound_ExtreamDun_Item::_FindItemAll_BindSphere  [0x0832d438-0x832d4b3] ===
 832d438:	55                   	push   %ebp
 832d439:	89 e5                	mov    %esp,%ebp
 832d43b:	83 ec 38             	sub    $0x38,%esp
 832d43e:	8b 45 10             	mov    0x10(%ebp),%eax
 832d441:	88 45 e4             	mov    %al,-0x1c(%ebp)
 832d444:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 832d44b:	80 7d e4 02          	cmpb   $0x2,-0x1c(%ebp)
 832d44f:	75 1e                	jne    832d46f <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item23_FindItemAll_BindSphereEPPK10CEquipItemcNS_23ENUM_OUTPUTITEMS_RARITYESt4pairIjjE+0x37>
 832d451:	8d 45 18             	lea    0x18(%ebp),%eax
 832d454:	89 44 24 08          	mov    %eax,0x8(%esp)
 832d458:	8b 45 14             	mov    0x14(%ebp),%eax
 832d45b:	89 44 24 04          	mov    %eax,0x4(%esp)
 832d45f:	8b 45 08             	mov    0x8(%ebp),%eax
 832d462:	89 04 24             	mov    %eax,(%esp)
 832d465:	e8 64 fe ff ff       	call   832d2ce <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item15_FindRandomItemENS_23ENUM_OUTPUTITEMS_RARITYERKSt4pairIjjE>
 832d46a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 832d46d:	eb 40                	jmp    832d4af <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item23_FindItemAll_BindSphereEPPK10CEquipItemcNS_23ENUM_OUTPUTITEMS_RARITYESt4pairIjjE+0x77>
 832d46f:	80 7d e4 00          	cmpb   $0x0,-0x1c(%ebp)
 832d473:	74 06                	je     832d47b <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item23_FindItemAll_BindSphereEPPK10CEquipItemcNS_23ENUM_OUTPUTITEMS_RARITYESt4pairIjjE+0x43>
 832d475:	80 7d e4 01          	cmpb   $0x1,-0x1c(%ebp)
 832d479:	75 34                	jne    832d4af <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item23_FindItemAll_BindSphereEPPK10CEquipItemcNS_23ENUM_OUTPUTITEMS_RARITYESt4pairIjjE+0x77>
 832d47b:	0f be 45 e4          	movsbl -0x1c(%ebp),%eax
 832d47f:	c1 e0 02             	shl    $0x2,%eax
 832d482:	03 45 0c             	add    0xc(%ebp),%eax
 832d485:	8b 00                	mov    (%eax),%eax
 832d487:	89 04 24             	mov    %eax,(%esp)
 832d48a:	e8 83 3e dc ff       	call   80f1312 <_ZNK5CItem16getItemGroupNameEv>
 832d48f:	8d 55 18             	lea    0x18(%ebp),%edx
 832d492:	89 54 24 0c          	mov    %edx,0xc(%esp)
 832d496:	8b 55 14             	mov    0x14(%ebp),%edx
 832d499:	89 54 24 08          	mov    %edx,0x8(%esp)
 832d49d:	89 44 24 04          	mov    %eax,0x4(%esp)
 832d4a1:	8b 45 08             	mov    0x8(%ebp),%eax
 832d4a4:	89 04 24             	mov    %eax,(%esp)
 832d4a7:	e8 b2 fc ff ff       	call   832d15e <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item15_FindSelectItemEjNS_23ENUM_OUTPUTITEMS_RARITYERKSt4pairIjjE>
 832d4ac:	89 45 f4             	mov    %eax,-0xc(%ebp)
 832d4af:	8b 45 f4             	mov    -0xc(%ebp),%eax
 832d4b2:	c9                   	leave
 832d4b3:	c3                   	ret

```

```c
// ExtreamDungeon::CCompound_ExtreamDun_Item::_FindItemAll_BindSphere @ 0x832d438

/* ExtreamDungeon::CCompound_ExtreamDun_Item::_FindItemAll_BindSphere(CEquipItem const**, char,
   ExtreamDungeon::ENUM_OUTPUTITEMS_RARITY, std::pair<unsigned int, unsigned int>) const */

undefined4
ExtreamDungeon::CCompound_ExtreamDun_Item::_FindItemAll_BindSphere
          (CCompound_ExtreamDun_Item *param_1,int param_2,char param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 local_10;
  
  local_10 = 0;
  if (param_3 == '\x02') {
    local_10 = _FindRandomItem(param_1,param_4,&stack0x00000014);
  }
  else if ((param_3 == '\0') || (param_3 == '\x01')) {
    uVar1 = CItem::getItemGroupName(*(CItem **)(param_3 * 4 + param_2));
    local_10 = _FindSelectItem(param_1,uVar1,param_4,&stack0x00000014);
  }
  return local_10;
}

```

---

## _FindItemRelateCreationRate

```asm
// === 0832d4b4 ExtreamDungeon::CCompound_ExtreamDun_Item::_FindItemRelateCreationRate  [0x0832d4b4-0x832d783] ===
 832d4b4:	55                   	push   %ebp
 832d4b5:	89 e5                	mov    %esp,%ebp
 832d4b7:	56                   	push   %esi
 832d4b8:	53                   	push   %ebx
 832d4b9:	83 ec 70             	sub    $0x70,%esp
 832d4bc:	8d 45 10             	lea    0x10(%ebp),%eax
 832d4bf:	89 44 24 04          	mov    %eax,0x4(%esp)
 832d4c3:	8d 45 0c             	lea    0xc(%ebp),%eax
 832d4c6:	89 04 24             	mov    %eax,(%esp)
 832d4c9:	e8 a0 12 00 00       	call   832e76e <_ZN9__gnu_cxxeqIPKN14ExtreamDungeon15OUTPUT_ITEM_STRESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_>
 832d4ce:	84 c0                	test   %al,%al
 832d4d0:	74 0a                	je     832d4dc <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item27_FindItemRelateCreationRateEN9__gnu_cxx17__normal_iteratorIPKNS_15OUTPUT_ITEM_STRESt6vectorIS3_SaIS3_EEEES9_+0x28>
 832d4d2:	bb 00 00 00 00       	mov    $0x0,%ebx
 832d4d7:	e9 9c 02 00 00       	jmp    832d778 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item27_FindItemRelateCreationRateEN9__gnu_cxx17__normal_iteratorIPKNS_15OUTPUT_ITEM_STRESt6vectorIS3_SaIS3_EEEES9_+0x2c4>
 832d4dc:	8d 45 c0             	lea    -0x40(%ebp),%eax
 832d4df:	89 04 24             	mov    %eax,(%esp)
 832d4e2:	e8 df 12 00 00       	call   832e7c6 <_ZNSt6vectorISt4pairIijESaIS1_EEC1Ev>
 832d4e7:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 832d4ee:	8b 45 0c             	mov    0xc(%ebp),%eax
 832d4f1:	89 45 bc             	mov    %eax,-0x44(%ebp)
 832d4f4:	e9 4f 01 00 00       	jmp    832d648 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item27_FindItemRelateCreationRateEN9__gnu_cxx17__normal_iteratorIPKNS_15OUTPUT_ITEM_STRESt6vectorIS3_SaIS3_EEEES9_+0x194>
 832d4f9:	8d 45 bc             	lea    -0x44(%ebp),%eax
 832d4fc:	89 04 24             	mov    %eax,(%esp)
 832d4ff:	e8 4a 13 00 00       	call   832e84e <_ZNK9__gnu_cxx17__normal_iteratorIPKN14ExtreamDungeon15OUTPUT_ITEM_STRESt6vectorIS2_SaIS2_EEEptEv>
 832d504:	8b 58 04             	mov    0x4(%eax),%ebx
 832d507:	e8 8f ec d9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 832d50c:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 832d510:	89 04 24             	mov    %eax,(%esp)
 832d513:	e8 1a 25 03 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 832d518:	89 45 f0             	mov    %eax,-0x10(%ebp)
 832d51b:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 832d51f:	0f 84 17 01 00 00    	je     832d63c <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item27_FindItemRelateCreationRateEN9__gnu_cxx17__normal_iteratorIPKNS_15OUTPUT_ITEM_STRESt6vectorIS3_SaIS3_EEEES9_+0x188>
 832d525:	8d 45 b8             	lea    -0x48(%ebp),%eax
 832d528:	89 04 24             	mov    %eax,(%esp)
 832d52b:	e8 28 13 00 00       	call   832e858 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiN14ExtreamDungeon20forceRule_ResultItemEEEC1Ev>
 832d530:	8b 45 08             	mov    0x8(%ebp),%eax
 832d533:	8d 90 74 0b 00 00    	lea    0xb74(%eax),%edx
 832d539:	8d 45 cc             	lea    -0x34(%ebp),%eax
 832d53c:	89 54 24 04          	mov    %edx,0x4(%esp)
 832d540:	89 04 24             	mov    %eax,(%esp)
 832d543:	e8 4a 13 00 00       	call   832e892 <_ZNKSt3mapIiN14ExtreamDungeon20forceRule_ResultItemESt4lessIiESaISt4pairIKiS1_EEE3endEv>
 832d548:	83 ec 04             	sub    $0x4,%esp
 832d54b:	8d 45 bc             	lea    -0x44(%ebp),%eax
 832d54e:	89 04 24             	mov    %eax,(%esp)
 832d551:	e8 f8 12 00 00       	call   832e84e <_ZNK9__gnu_cxx17__normal_iteratorIPKN14ExtreamDungeon15OUTPUT_ITEM_STRESt6vectorIS2_SaIS2_EEEptEv>
 832d556:	8d 48 04             	lea    0x4(%eax),%ecx
 832d559:	8b 45 08             	mov    0x8(%ebp),%eax
 832d55c:	8d 90 74 0b 00 00    	lea    0xb74(%eax),%edx
 832d562:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 832d565:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 832d569:	89 54 24 04          	mov    %edx,0x4(%esp)
 832d56d:	89 04 24             	mov    %eax,(%esp)
 832d570:	e8 f1 12 00 00       	call   832e866 <_ZNKSt3mapIiN14ExtreamDungeon20forceRule_ResultItemESt4lessIiESaISt4pairIKiS1_EEE4findERS5_>
 832d575:	83 ec 04             	sub    $0x4,%esp
 832d578:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 832d57b:	89 45 b8             	mov    %eax,-0x48(%ebp)
 832d57e:	8d 45 cc             	lea    -0x34(%ebp),%eax
 832d581:	89 44 24 04          	mov    %eax,0x4(%esp)
 832d585:	8d 45 b8             	lea    -0x48(%ebp),%eax
 832d588:	89 04 24             	mov    %eax,(%esp)
 832d58b:	e8 28 13 00 00       	call   832e8b8 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiN14ExtreamDungeon20forceRule_ResultItemEEEneERKS5_>
 832d590:	84 c0                	test   %al,%al
 832d592:	74 54                	je     832d5e8 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item27_FindItemRelateCreationRateEN9__gnu_cxx17__normal_iteratorIPKNS_15OUTPUT_ITEM_STRESt6vectorIS3_SaIS3_EEEES9_+0x134>
 832d594:	8d 45 bc             	lea    -0x44(%ebp),%eax
 832d597:	89 04 24             	mov    %eax,(%esp)
 832d59a:	e8 af 12 00 00       	call   832e84e <_ZNK9__gnu_cxx17__normal_iteratorIPKN14ExtreamDungeon15OUTPUT_ITEM_STRESt6vectorIS2_SaIS2_EEEptEv>
 832d59f:	8d 58 04             	lea    0x4(%eax),%ebx
 832d5a2:	8d 45 b8             	lea    -0x48(%ebp),%eax
 832d5a5:	89 04 24             	mov    %eax,(%esp)
 832d5a8:	e8 1f 13 00 00       	call   832e8cc <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiN14ExtreamDungeon20forceRule_ResultItemEEEptEv>
 832d5ad:	83 c0 08             	add    $0x8,%eax
 832d5b0:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 832d5b4:	89 44 24 04          	mov    %eax,0x4(%esp)
 832d5b8:	8d 45 d0             	lea    -0x30(%ebp),%eax
 832d5bb:	89 04 24             	mov    %eax,(%esp)
 832d5be:	e8 17 13 00 00       	call   832e8da <_ZNSt4pairIijEC1IRKiS3_EEOT_OT0_>
 832d5c3:	8d 45 d0             	lea    -0x30(%ebp),%eax
 832d5c6:	89 44 24 04          	mov    %eax,0x4(%esp)
 832d5ca:	8d 45 c0             	lea    -0x40(%ebp),%eax
 832d5cd:	89 04 24             	mov    %eax,(%esp)
 832d5d0:	e8 35 13 00 00       	call   832e90a <_ZNSt6vectorISt4pairIijESaIS1_EE9push_backEOS1_>
 832d5d5:	8d 45 b8             	lea    -0x48(%ebp),%eax
 832d5d8:	89 04 24             	mov    %eax,(%esp)
 832d5db:	e8 ec 12 00 00       	call   832e8cc <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiN14ExtreamDungeon20forceRule_ResultItemEEEptEv>
 832d5e0:	8b 40 08             	mov    0x8(%eax),%eax
 832d5e3:	01 45 e4             	add    %eax,-0x1c(%ebp)
 832d5e6:	eb 55                	jmp    832d63d <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item27_FindItemRelateCreationRateEN9__gnu_cxx17__normal_iteratorIPKNS_15OUTPUT_ITEM_STRESt6vectorIS3_SaIS3_EEEES9_+0x189>
 832d5e8:	8d 45 bc             	lea    -0x44(%ebp),%eax
 832d5eb:	89 04 24             	mov    %eax,(%esp)
 832d5ee:	e8 5b 12 00 00       	call   832e84e <_ZNK9__gnu_cxx17__normal_iteratorIPKN14ExtreamDungeon15OUTPUT_ITEM_STRESt6vectorIS2_SaIS2_EEEptEv>
 832d5f3:	8d 58 04             	lea    0x4(%eax),%ebx
 832d5f6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 832d5f9:	89 04 24             	mov    %eax,(%esp)
 832d5fc:	e8 29 0a 00 00       	call   832e02a <_ZNK5CItem12get_gen_rateEv>
 832d601:	89 45 e0             	mov    %eax,-0x20(%ebp)
 832d604:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 832d608:	8d 45 e0             	lea    -0x20(%ebp),%eax
 832d60b:	89 44 24 04          	mov    %eax,0x4(%esp)
 832d60f:	8d 45 d8             	lea    -0x28(%ebp),%eax
 832d612:	89 04 24             	mov    %eax,(%esp)
 832d615:	e8 12 13 00 00       	call   832e92c <_ZNSt4pairIijEC1IiRKiEEOT_OT0_>
 832d61a:	8d 45 d8             	lea    -0x28(%ebp),%eax
 832d61d:	89 44 24 04          	mov    %eax,0x4(%esp)
 832d621:	8d 45 c0             	lea    -0x40(%ebp),%eax
 832d624:	89 04 24             	mov    %eax,(%esp)
 832d627:	e8 de 12 00 00       	call   832e90a <_ZNSt6vectorISt4pairIijESaIS1_EE9push_backEOS1_>
 832d62c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 832d62f:	89 04 24             	mov    %eax,(%esp)
 832d632:	e8 f3 09 00 00       	call   832e02a <_ZNK5CItem12get_gen_rateEv>
 832d637:	01 45 e4             	add    %eax,-0x1c(%ebp)
 832d63a:	eb 01                	jmp    832d63d <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item27_FindItemRelateCreationRateEN9__gnu_cxx17__normal_iteratorIPKNS_15OUTPUT_ITEM_STRESt6vectorIS3_SaIS3_EEEES9_+0x189>
 832d63c:	90                   	nop
 832d63d:	8d 45 bc             	lea    -0x44(%ebp),%eax
 832d640:	89 04 24             	mov    %eax,(%esp)
 832d643:	e8 f0 11 00 00       	call   832e838 <_ZN9__gnu_cxx17__normal_iteratorIPKN14ExtreamDungeon15OUTPUT_ITEM_STRESt6vectorIS2_SaIS2_EEEppEv>
 832d648:	8d 45 10             	lea    0x10(%ebp),%eax
 832d64b:	89 44 24 04          	mov    %eax,0x4(%esp)
 832d64f:	8d 45 bc             	lea    -0x44(%ebp),%eax
 832d652:	89 04 24             	mov    %eax,(%esp)
 832d655:	e8 40 11 00 00       	call   832e79a <_ZN9__gnu_cxxneIPKN14ExtreamDungeon15OUTPUT_ITEM_STRESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_>
 832d65a:	84 c0                	test   %al,%al
 832d65c:	0f 85 97 fe ff ff    	jne    832d4f9 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item27_FindItemRelateCreationRateEN9__gnu_cxx17__normal_iteratorIPKNS_15OUTPUT_ITEM_STRESt6vectorIS3_SaIS3_EEEES9_+0x45>
 832d662:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 832d669:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 832d66d:	75 60                	jne    832d6cf <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item27_FindItemRelateCreationRateEN9__gnu_cxx17__normal_iteratorIPKNS_15OUTPUT_ITEM_STRESt6vectorIS3_SaIS3_EEEES9_+0x21b>
 832d66f:	8d 45 c0             	lea    -0x40(%ebp),%eax
 832d672:	89 04 24             	mov    %eax,(%esp)
 832d675:	e8 e2 12 00 00       	call   832e95c <_ZNKSt6vectorISt4pairIijESaIS1_EE4sizeEv>
 832d67a:	85 c0                	test   %eax,%eax
 832d67c:	0f 95 c0             	setne  %al
 832d67f:	84 c0                	test   %al,%al
 832d681:	74 42                	je     832d6c5 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item27_FindItemRelateCreationRateEN9__gnu_cxx17__normal_iteratorIPKNS_15OUTPUT_ITEM_STRESt6vectorIS3_SaIS3_EEEES9_+0x211>
 832d683:	8b 45 08             	mov    0x8(%ebp),%eax
 832d686:	8b 00                	mov    (%eax),%eax
 832d688:	89 04 24             	mov    %eax,(%esp)
 832d68b:	e8 b6 e3 d9 ff       	call   80cba46 <_ZN7CMTRand7randIntEv>
 832d690:	89 c3                	mov    %eax,%ebx
 832d692:	8d 45 c0             	lea    -0x40(%ebp),%eax
 832d695:	89 04 24             	mov    %eax,(%esp)
 832d698:	e8 bf 12 00 00       	call   832e95c <_ZNKSt6vectorISt4pairIijESaIS1_EE4sizeEv>
 832d69d:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 832d6a0:	89 d8                	mov    %ebx,%eax
 832d6a2:	ba 00 00 00 00       	mov    $0x0,%edx
 832d6a7:	f7 75 a4             	divl   -0x5c(%ebp)
 832d6aa:	89 d1                	mov    %edx,%ecx
 832d6ac:	89 c8                	mov    %ecx,%eax
 832d6ae:	89 44 24 04          	mov    %eax,0x4(%esp)
 832d6b2:	8d 45 c0             	lea    -0x40(%ebp),%eax
 832d6b5:	89 04 24             	mov    %eax,(%esp)
 832d6b8:	e8 bb 12 00 00       	call   832e978 <_ZNSt6vectorISt4pairIijESaIS1_EEixEj>
 832d6bd:	8b 58 04             	mov    0x4(%eax),%ebx
 832d6c0:	e9 a8 00 00 00       	jmp    832d76d <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item27_FindItemRelateCreationRateEN9__gnu_cxx17__normal_iteratorIPKNS_15OUTPUT_ITEM_STRESt6vectorIS3_SaIS3_EEEES9_+0x2b9>
 832d6c5:	bb 00 00 00 00       	mov    $0x0,%ebx
 832d6ca:	e9 9e 00 00 00       	jmp    832d76d <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item27_FindItemRelateCreationRateEN9__gnu_cxx17__normal_iteratorIPKNS_15OUTPUT_ITEM_STRESt6vectorIS3_SaIS3_EEEES9_+0x2b9>
 832d6cf:	8b 45 08             	mov    0x8(%ebp),%eax
 832d6d2:	8b 00                	mov    (%eax),%eax
 832d6d4:	89 04 24             	mov    %eax,(%esp)
 832d6d7:	e8 6a e3 d9 ff       	call   80cba46 <_ZN7CMTRand7randIntEv>
 832d6dc:	ba 00 00 00 00       	mov    $0x0,%edx
 832d6e1:	f7 75 e4             	divl   -0x1c(%ebp)
 832d6e4:	89 d0                	mov    %edx,%eax
 832d6e6:	83 c0 01             	add    $0x1,%eax
 832d6e9:	89 45 e8             	mov    %eax,-0x18(%ebp)
 832d6ec:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 832d6f3:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 832d6fa:	eb 3a                	jmp    832d736 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item27_FindItemRelateCreationRateEN9__gnu_cxx17__normal_iteratorIPKNS_15OUTPUT_ITEM_STRESt6vectorIS3_SaIS3_EEEES9_+0x282>
 832d6fc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 832d6ff:	89 44 24 04          	mov    %eax,0x4(%esp)
 832d703:	8d 45 c0             	lea    -0x40(%ebp),%eax
 832d706:	89 04 24             	mov    %eax,(%esp)
 832d709:	e8 6a 12 00 00       	call   832e978 <_ZNSt6vectorISt4pairIijESaIS1_EEixEj>
 832d70e:	8b 00                	mov    (%eax),%eax
 832d710:	01 45 ec             	add    %eax,-0x14(%ebp)
 832d713:	8b 45 e8             	mov    -0x18(%ebp),%eax
 832d716:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 832d719:	77 17                	ja     832d732 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item27_FindItemRelateCreationRateEN9__gnu_cxx17__normal_iteratorIPKNS_15OUTPUT_ITEM_STRESt6vectorIS3_SaIS3_EEEES9_+0x27e>
 832d71b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 832d71e:	89 44 24 04          	mov    %eax,0x4(%esp)
 832d722:	8d 45 c0             	lea    -0x40(%ebp),%eax
 832d725:	89 04 24             	mov    %eax,(%esp)
 832d728:	e8 4b 12 00 00       	call   832e978 <_ZNSt6vectorISt4pairIijESaIS1_EEixEj>
 832d72d:	8b 58 04             	mov    0x4(%eax),%ebx
 832d730:	eb 3b                	jmp    832d76d <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item27_FindItemRelateCreationRateEN9__gnu_cxx17__normal_iteratorIPKNS_15OUTPUT_ITEM_STRESt6vectorIS3_SaIS3_EEEES9_+0x2b9>
 832d732:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 832d736:	8d 45 c0             	lea    -0x40(%ebp),%eax
 832d739:	89 04 24             	mov    %eax,(%esp)
 832d73c:	e8 1b 12 00 00       	call   832e95c <_ZNKSt6vectorISt4pairIijESaIS1_EE4sizeEv>
 832d741:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 832d744:	0f 97 c0             	seta   %al
 832d747:	84 c0                	test   %al,%al
 832d749:	75 b1                	jne    832d6fc <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item27_FindItemRelateCreationRateEN9__gnu_cxx17__normal_iteratorIPKNS_15OUTPUT_ITEM_STRESt6vectorIS3_SaIS3_EEEES9_+0x248>
 832d74b:	bb 00 00 00 00       	mov    $0x0,%ebx
 832d750:	eb 1b                	jmp    832d76d <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item27_FindItemRelateCreationRateEN9__gnu_cxx17__normal_iteratorIPKNS_15OUTPUT_ITEM_STRESt6vectorIS3_SaIS3_EEEES9_+0x2b9>
 832d752:	89 d3                	mov    %edx,%ebx
 832d754:	89 c6                	mov    %eax,%esi
 832d756:	8d 45 c0             	lea    -0x40(%ebp),%eax
 832d759:	89 04 24             	mov    %eax,(%esp)
 832d75c:	e8 79 10 00 00       	call   832e7da <_ZNSt6vectorISt4pairIijESaIS1_EED1Ev>
 832d761:	89 f0                	mov    %esi,%eax
 832d763:	89 da                	mov    %ebx,%edx
 832d765:	89 04 24             	mov    %eax,(%esp)
 832d768:	e8 e3 5f 7b 00       	call   8ae3750 <_Unwind_Resume>
 832d76d:	8d 45 c0             	lea    -0x40(%ebp),%eax
 832d770:	89 04 24             	mov    %eax,(%esp)
 832d773:	e8 62 10 00 00       	call   832e7da <_ZNSt6vectorISt4pairIijESaIS1_EED1Ev>
 832d778:	89 d8                	mov    %ebx,%eax
 832d77a:	8d 65 f8             	lea    -0x8(%ebp),%esp
 832d77d:	83 c4 00             	add    $0x0,%esp
 832d780:	5b                   	pop    %ebx
 832d781:	5e                   	pop    %esi
 832d782:	5d                   	pop    %ebp
 832d783:	c3                   	ret

```

```c
// ExtreamDungeon::CCompound_ExtreamDun_Item::_FindItemRelateCreationRate @ 0x832d4b4

/* ExtreamDungeon::CCompound_ExtreamDun_Item::_FindItemRelateCreationRate(__gnu_cxx::__normal_iterator<ExtreamDungeon::OUTPUT_ITEM_STR
   const*, std::vector<ExtreamDungeon::OUTPUT_ITEM_STR,
   std::allocator<ExtreamDungeon::OUTPUT_ITEM_STR> > >,
   __gnu_cxx::__normal_iterator<ExtreamDungeon::OUTPUT_ITEM_STR const*,
   std::vector<ExtreamDungeon::OUTPUT_ITEM_STR, std::allocator<ExtreamDungeon::OUTPUT_ITEM_STR> > >)
   const */

undefined4
ExtreamDungeon::CCompound_ExtreamDun_Item::_FindItemRelateCreationRate
          (undefined4 *param_1,undefined4 param_2)

{
  bool bVar1;
  char cVar2;
  CDataManager *this;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  undefined4 uVar8;
  int local_50;
  int local_4c;
  undefined4 local_48;
  vector<std::pair<int,unsigned_int>,std::allocator<std::pair<int,unsigned_int>>> local_44 [12];
  map<int,ExtreamDungeon::forceRule_ResultItem,std::less<int>,std::allocator<std::pair<int_const,ExtreamDungeon::forceRule_ResultItem>>>
  local_38 [4];
  pair<int,unsigned_int> local_34 [8];
  pair<int,unsigned_int> local_2c [8];
  int local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  CItem *local_14;
  uint local_10;
  
  bVar1 = __gnu_cxx::operator==((__normal_iterator *)&param_2,&stack0x0000000c);
  if (bVar1) {
    uVar8 = 0;
  }
  else {
    std::vector<std::pair<int,unsigned_int>,std::allocator<std::pair<int,unsigned_int>>>::vector
              (local_44);
    local_20 = 0;
    local_48 = param_2;
    while( true ) {
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_48,&stack0x0000000c);
      if (!bVar1) break;
      iVar4 = __gnu_cxx::
              __normal_iterator<ExtreamDungeon::OUTPUT_ITEM_STR_const*,std::vector<ExtreamDungeon::OUTPUT_ITEM_STR,std::allocator<ExtreamDungeon::OUTPUT_ITEM_STR>>>
              ::operator->((__normal_iterator<ExtreamDungeon::OUTPUT_ITEM_STR_const*,std::vector<ExtreamDungeon::OUTPUT_ITEM_STR,std::allocator<ExtreamDungeon::OUTPUT_ITEM_STR>>>
                            *)&local_48);
      iVar4 = *(int *)(iVar4 + 4);
                    /* try { // try from 0832d507 to 0832d659 has its CatchHandler @ 0832d752 */
      this = (CDataManager *)G_CDataManager();
      local_14 = (CItem *)CDataManager::find_item(this,iVar4);
      if (local_14 != (CItem *)0x0) {
        std::_Rb_tree_const_iterator<std::pair<int_const,ExtreamDungeon::forceRule_ResultItem>>::
        _Rb_tree_const_iterator
                  ((_Rb_tree_const_iterator<std::pair<int_const,ExtreamDungeon::forceRule_ResultItem>>
                    *)&local_4c);
        std::
        map<int,ExtreamDungeon::forceRule_ResultItem,std::less<int>,std::allocator<std::pair<int_const,ExtreamDungeon::forceRule_ResultItem>>>
        ::end(local_38);
        __gnu_cxx::
        __normal_iterator<ExtreamDungeon::OUTPUT_ITEM_STR_const*,std::vector<ExtreamDungeon::OUTPUT_ITEM_STR,std::allocator<ExtreamDungeon::OUTPUT_ITEM_STR>>>
        ::operator->((__normal_iterator<ExtreamDungeon::OUTPUT_ITEM_STR_const*,std::vector<ExtreamDungeon::OUTPUT_ITEM_STR,std::allocator<ExtreamDungeon::OUTPUT_ITEM_STR>>>
                      *)&local_48);
        std::
        map<int,ExtreamDungeon::forceRule_ResultItem,std::less<int>,std::allocator<std::pair<int_const,ExtreamDungeon::forceRule_ResultItem>>>
        ::find(&local_50);
        local_4c = local_50;
        cVar2 = std::
                _Rb_tree_const_iterator<std::pair<int_const,ExtreamDungeon::forceRule_ResultItem>>::
                operator!=((_Rb_tree_const_iterator<std::pair<int_const,ExtreamDungeon::forceRule_ResultItem>>
                            *)&local_4c,(_Rb_tree_const_iterator *)local_38);
        if (cVar2 == '\0') {
          iVar4 = __gnu_cxx::
                  __normal_iterator<ExtreamDungeon::OUTPUT_ITEM_STR_const*,std::vector<ExtreamDungeon::OUTPUT_ITEM_STR,std::allocator<ExtreamDungeon::OUTPUT_ITEM_STR>>>
                  ::operator->((__normal_iterator<ExtreamDungeon::OUTPUT_ITEM_STR_const*,std::vector<ExtreamDungeon::OUTPUT_ITEM_STR,std::allocator<ExtreamDungeon::OUTPUT_ITEM_STR>>>
                                *)&local_48);
          local_24 = CItem::get_gen_rate(local_14);
          std::pair<int,unsigned_int>::pair<int,int_const&>(local_2c,&local_24,(int *)(iVar4 + 4));
          std::vector<std::pair<int,unsigned_int>,std::allocator<std::pair<int,unsigned_int>>>::
          push_back(local_44,local_2c);
          iVar4 = CItem::get_gen_rate(local_14);
          local_20 = local_20 + iVar4;
        }
        else {
          iVar4 = __gnu_cxx::
                  __normal_iterator<ExtreamDungeon::OUTPUT_ITEM_STR_const*,std::vector<ExtreamDungeon::OUTPUT_ITEM_STR,std::allocator<ExtreamDungeon::OUTPUT_ITEM_STR>>>
                  ::operator->((__normal_iterator<ExtreamDungeon::OUTPUT_ITEM_STR_const*,std::vector<ExtreamDungeon::OUTPUT_ITEM_STR,std::allocator<ExtreamDungeon::OUTPUT_ITEM_STR>>>
                                *)&local_48);
          iVar3 = std::
                  _Rb_tree_const_iterator<std::pair<int_const,ExtreamDungeon::forceRule_ResultItem>>
                  ::operator->((_Rb_tree_const_iterator<std::pair<int_const,ExtreamDungeon::forceRule_ResultItem>>
                                *)&local_4c);
          std::pair<int,unsigned_int>::pair<int_const&,int_const&>
                    (local_34,(int *)(iVar3 + 8),(int *)(iVar4 + 4));
          std::vector<std::pair<int,unsigned_int>,std::allocator<std::pair<int,unsigned_int>>>::
          push_back(local_44,local_34);
          iVar4 = std::
                  _Rb_tree_const_iterator<std::pair<int_const,ExtreamDungeon::forceRule_ResultItem>>
                  ::operator->((_Rb_tree_const_iterator<std::pair<int_const,ExtreamDungeon::forceRule_ResultItem>>
                                *)&local_4c);
          local_20 = local_20 + *(int *)(iVar4 + 8);
        }
      }
      __gnu_cxx::
      __normal_iterator<ExtreamDungeon::OUTPUT_ITEM_STR_const*,std::vector<ExtreamDungeon::OUTPUT_ITEM_STR,std::allocator<ExtreamDungeon::OUTPUT_ITEM_STR>>>
      ::operator++((__normal_iterator<ExtreamDungeon::OUTPUT_ITEM_STR_const*,std::vector<ExtreamDungeon::OUTPUT_ITEM_STR,std::allocator<ExtreamDungeon::OUTPUT_ITEM_STR>>>
                    *)&local_48);
    }
    local_1c = 0;
    if (local_20 == 0) {
      iVar4 = std::vector<std::pair<int,unsigned_int>,std::allocator<std::pair<int,unsigned_int>>>::
              size(local_44);
      if (iVar4 == 0) {
        uVar8 = 0;
      }
      else {
        uVar5 = CMTRand::randInt((CMTRand *)*param_1);
        uVar6 = std::vector<std::pair<int,unsigned_int>,std::allocator<std::pair<int,unsigned_int>>>
                ::size(local_44);
        iVar4 = std::vector<std::pair<int,unsigned_int>,std::allocator<std::pair<int,unsigned_int>>>
                ::operator[](local_44,uVar5 % uVar6);
        uVar8 = *(undefined4 *)(iVar4 + 4);
      }
    }
    else {
      uVar5 = CMTRand::randInt((CMTRand *)*param_1);
      local_1c = uVar5 % local_20 + 1;
      local_18 = 0;
      local_10 = 0;
      while( true ) {
        uVar5 = std::vector<std::pair<int,unsigned_int>,std::allocator<std::pair<int,unsigned_int>>>
                ::size(local_44);
        if (uVar5 <= local_10) break;
        piVar7 = (int *)std::
                        vector<std::pair<int,unsigned_int>,std::allocator<std::pair<int,unsigned_int>>>
                        ::operator[](local_44,local_10);
        local_18 = local_18 + *piVar7;
        if (local_1c <= local_18) {
          iVar4 = std::
                  vector<std::pair<int,unsigned_int>,std::allocator<std::pair<int,unsigned_int>>>::
                  operator[](local_44,local_10);
          uVar8 = *(undefined4 *)(iVar4 + 4);
          goto LAB_0832d76d;
        }
        local_10 = local_10 + 1;
      }
      uVar8 = 0;
    }
LAB_0832d76d:
    std::vector<std::pair<int,unsigned_int>,std::allocator<std::pair<int,unsigned_int>>>::~vector
              (local_44);
  }
  return uVar8;
}

```

---

## _FindRandomItem

```asm
// === 0832d2ce ExtreamDungeon::CCompound_ExtreamDun_Item::_FindRandomItem  [0x0832d2ce-0x832d437] ===
 832d2ce:	55                   	push   %ebp
 832d2cf:	89 e5                	mov    %esp,%ebp
 832d2d1:	83 ec 58             	sub    $0x58,%esp
 832d2d4:	8b 45 0c             	mov    0xc(%ebp),%eax
 832d2d7:	85 c0                	test   %eax,%eax
 832d2d9:	78 08                	js     832d2e3 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item15_FindRandomItemENS_23ENUM_OUTPUTITEMS_RARITYERKSt4pairIjjE+0x15>
 832d2db:	8b 45 0c             	mov    0xc(%ebp),%eax
 832d2de:	83 f8 03             	cmp    $0x3,%eax
 832d2e1:	7e 0a                	jle    832d2ed <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item15_FindRandomItemENS_23ENUM_OUTPUTITEMS_RARITYERKSt4pairIjjE+0x1f>
 832d2e3:	b8 00 00 00 00       	mov    $0x0,%eax
 832d2e8:	e9 48 01 00 00       	jmp    832d435 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item15_FindRandomItemENS_23ENUM_OUTPUTITEMS_RARITYERKSt4pairIjjE+0x167>
 832d2ed:	8b 55 0c             	mov    0xc(%ebp),%edx
 832d2f0:	89 d0                	mov    %edx,%eax
 832d2f2:	01 c0                	add    %eax,%eax
 832d2f4:	01 d0                	add    %edx,%eax
 832d2f6:	c1 e0 02             	shl    $0x2,%eax
 832d2f9:	05 40 0b 00 00       	add    $0xb40,%eax
 832d2fe:	03 45 08             	add    0x8(%ebp),%eax
 832d301:	83 c0 04             	add    $0x4,%eax
 832d304:	89 45 f4             	mov    %eax,-0xc(%ebp)
 832d307:	8b 45 10             	mov    0x10(%ebp),%eax
 832d30a:	8b 00                	mov    (%eax),%eax
 832d30c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 832d313:	00 
 832d314:	89 44 24 04          	mov    %eax,0x4(%esp)
 832d318:	8d 45 d0             	lea    -0x30(%ebp),%eax
 832d31b:	89 04 24             	mov    %eax,(%esp)
 832d31e:	e8 9b 0c 00 00       	call   832dfbe <_ZN14ExtreamDungeon15OUTPUT_ITEM_STRC1Eii>
 832d323:	8d 45 d8             	lea    -0x28(%ebp),%eax
 832d326:	8b 55 f4             	mov    -0xc(%ebp),%edx
 832d329:	89 54 24 04          	mov    %edx,0x4(%esp)
 832d32d:	89 04 24             	mov    %eax,(%esp)
 832d330:	e8 af 12 00 00       	call   832e5e4 <_ZNKSt6vectorIN14ExtreamDungeon15OUTPUT_ITEM_STRESaIS1_EE3endEv>
 832d335:	83 ec 04             	sub    $0x4,%esp
 832d338:	8d 45 dc             	lea    -0x24(%ebp),%eax
 832d33b:	8b 55 f4             	mov    -0xc(%ebp),%edx
 832d33e:	89 54 24 04          	mov    %edx,0x4(%esp)
 832d342:	89 04 24             	mov    %eax,(%esp)
 832d345:	e8 6e 12 00 00       	call   832e5b8 <_ZNKSt6vectorIN14ExtreamDungeon15OUTPUT_ITEM_STRESaIS1_EE5beginEv>
 832d34a:	83 ec 04             	sub    $0x4,%esp
 832d34d:	8d 45 cc             	lea    -0x34(%ebp),%eax
 832d350:	c7 44 24 10 cc c3 32 	movl   $0x832c3cc,0x10(%esp)
 832d357:	08 
 832d358:	8d 55 d0             	lea    -0x30(%ebp),%edx
 832d35b:	89 54 24 0c          	mov    %edx,0xc(%esp)
 832d35f:	8b 55 d8             	mov    -0x28(%ebp),%edx
 832d362:	89 54 24 08          	mov    %edx,0x8(%esp)
 832d366:	8b 55 dc             	mov    -0x24(%ebp),%edx
 832d369:	89 54 24 04          	mov    %edx,0x4(%esp)
 832d36d:	89 04 24             	mov    %eax,(%esp)
 832d370:	e8 9b 12 00 00       	call   832e610 <_ZSt11lower_boundIN9__gnu_cxx17__normal_iteratorIPKN14ExtreamDungeon15OUTPUT_ITEM_STRESt6vectorIS3_SaIS3_EEEES3_PFbRS4_SA_EET_SD_SD_RKT0_T1_>
 832d375:	83 ec 04             	sub    $0x4,%esp
 832d378:	8b 45 10             	mov    0x10(%ebp),%eax
 832d37b:	8b 40 04             	mov    0x4(%eax),%eax
 832d37e:	c7 44 24 08 ff ff ff 	movl   $0x7fffffff,0x8(%esp)
 832d385:	7f 
 832d386:	89 44 24 04          	mov    %eax,0x4(%esp)
 832d38a:	8d 45 e0             	lea    -0x20(%ebp),%eax
 832d38d:	89 04 24             	mov    %eax,(%esp)
 832d390:	e8 29 0c 00 00       	call   832dfbe <_ZN14ExtreamDungeon15OUTPUT_ITEM_STRC1Eii>
 832d395:	8d 45 e8             	lea    -0x18(%ebp),%eax
 832d398:	8b 55 f4             	mov    -0xc(%ebp),%edx
 832d39b:	89 54 24 04          	mov    %edx,0x4(%esp)
 832d39f:	89 04 24             	mov    %eax,(%esp)
 832d3a2:	e8 3d 12 00 00       	call   832e5e4 <_ZNKSt6vectorIN14ExtreamDungeon15OUTPUT_ITEM_STRESaIS1_EE3endEv>
 832d3a7:	83 ec 04             	sub    $0x4,%esp
 832d3aa:	8d 45 ec             	lea    -0x14(%ebp),%eax
 832d3ad:	8b 55 f4             	mov    -0xc(%ebp),%edx
 832d3b0:	89 54 24 04          	mov    %edx,0x4(%esp)
 832d3b4:	89 04 24             	mov    %eax,(%esp)
 832d3b7:	e8 fc 11 00 00       	call   832e5b8 <_ZNKSt6vectorIN14ExtreamDungeon15OUTPUT_ITEM_STRESaIS1_EE5beginEv>
 832d3bc:	83 ec 04             	sub    $0x4,%esp
 832d3bf:	8d 45 c8             	lea    -0x38(%ebp),%eax
 832d3c2:	c7 44 24 10 cc c3 32 	movl   $0x832c3cc,0x10(%esp)
 832d3c9:	08 
 832d3ca:	8d 55 e0             	lea    -0x20(%ebp),%edx
 832d3cd:	89 54 24 0c          	mov    %edx,0xc(%esp)
 832d3d1:	8b 55 e8             	mov    -0x18(%ebp),%edx
 832d3d4:	89 54 24 08          	mov    %edx,0x8(%esp)
 832d3d8:	8b 55 ec             	mov    -0x14(%ebp),%edx
 832d3db:	89 54 24 04          	mov    %edx,0x4(%esp)
 832d3df:	89 04 24             	mov    %eax,(%esp)
 832d3e2:	e8 d8 12 00 00       	call   832e6bf <_ZSt11upper_boundIN9__gnu_cxx17__normal_iteratorIPKN14ExtreamDungeon15OUTPUT_ITEM_STRESt6vectorIS3_SaIS3_EEEES3_PFbRS4_SA_EET_SD_SD_RKT0_T1_>
 832d3e7:	83 ec 04             	sub    $0x4,%esp
 832d3ea:	8d 45 f0             	lea    -0x10(%ebp),%eax
 832d3ed:	8b 55 f4             	mov    -0xc(%ebp),%edx
 832d3f0:	89 54 24 04          	mov    %edx,0x4(%esp)
 832d3f4:	89 04 24             	mov    %eax,(%esp)
 832d3f7:	e8 e8 11 00 00       	call   832e5e4 <_ZNKSt6vectorIN14ExtreamDungeon15OUTPUT_ITEM_STRESaIS1_EE3endEv>
 832d3fc:	83 ec 04             	sub    $0x4,%esp
 832d3ff:	8d 45 cc             	lea    -0x34(%ebp),%eax
 832d402:	89 44 24 04          	mov    %eax,0x4(%esp)
 832d406:	8d 45 f0             	lea    -0x10(%ebp),%eax
 832d409:	89 04 24             	mov    %eax,(%esp)
 832d40c:	e8 89 13 00 00       	call   832e79a <_ZN9__gnu_cxxneIPKN14ExtreamDungeon15OUTPUT_ITEM_STRESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_>
 832d411:	84 c0                	test   %al,%al
 832d413:	74 1b                	je     832d430 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item15_FindRandomItemENS_23ENUM_OUTPUTITEMS_RARITYERKSt4pairIjjE+0x162>
 832d415:	8b 45 c8             	mov    -0x38(%ebp),%eax
 832d418:	89 44 24 08          	mov    %eax,0x8(%esp)
 832d41c:	8b 45 cc             	mov    -0x34(%ebp),%eax
 832d41f:	89 44 24 04          	mov    %eax,0x4(%esp)
 832d423:	8b 45 08             	mov    0x8(%ebp),%eax
 832d426:	89 04 24             	mov    %eax,(%esp)
 832d429:	e8 86 00 00 00       	call   832d4b4 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item27_FindItemRelateCreationRateEN9__gnu_cxx17__normal_iteratorIPKNS_15OUTPUT_ITEM_STRESt6vectorIS3_SaIS3_EEEES9_>
 832d42e:	eb 05                	jmp    832d435 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item15_FindRandomItemENS_23ENUM_OUTPUTITEMS_RARITYERKSt4pairIjjE+0x167>
 832d430:	b8 00 00 00 00       	mov    $0x0,%eax
 832d435:	c9                   	leave
 832d436:	c3                   	ret
 832d437:	90                   	nop

```

```c
// ExtreamDungeon::CCompound_ExtreamDun_Item::_FindRandomItem @ 0x832d2ce

/* ExtreamDungeon::CCompound_ExtreamDun_Item::_FindRandomItem(ExtreamDungeon::ENUM_OUTPUTITEMS_RARITY,
   std::pair<unsigned int, unsigned int> const&) const */

undefined4 __thiscall
ExtreamDungeon::CCompound_ExtreamDun_Item::_FindRandomItem
          (CCompound_ExtreamDun_Item *this,int param_2,int *param_3)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 local_3c;
  undefined4 local_38;
  OUTPUT_ITEM_STR local_34 [8];
  undefined4 local_2c;
  undefined4 local_28;
  OUTPUT_ITEM_STR local_24 [8];
  undefined4 local_1c;
  undefined4 local_18;
  __normal_iterator local_14 [4];
  CCompound_ExtreamDun_Item *local_10;
  
  if ((param_2 < 0) || (3 < param_2)) {
    uVar2 = 0;
  }
  else {
    local_10 = this + param_2 * 0xc + 0xb44;
    OUTPUT_ITEM_STR::OUTPUT_ITEM_STR(local_34,*param_3,0);
    std::vector<ExtreamDungeon::OUTPUT_ITEM_STR,std::allocator<ExtreamDungeon::OUTPUT_ITEM_STR>>::
    end();
    std::vector<ExtreamDungeon::OUTPUT_ITEM_STR,std::allocator<ExtreamDungeon::OUTPUT_ITEM_STR>>::
    begin();
    std::
    lower_bound<__gnu_cxx::__normal_iterator<ExtreamDungeon::OUTPUT_ITEM_STR_const*,std::vector<ExtreamDungeon::OUTPUT_ITEM_STR,std::allocator<ExtreamDungeon::OUTPUT_ITEM_STR>>>,ExtreamDungeon::OUTPUT_ITEM_STR,bool(*)(ExtreamDungeon::OUTPUT_ITEM_STR_const&,ExtreamDungeon::OUTPUT_ITEM_STR_const&)>
              (&local_38,local_28,local_2c,local_34,BindTable_Predicate);
    OUTPUT_ITEM_STR::OUTPUT_ITEM_STR(local_24,param_3[1],0x7fffffff);
    std::vector<ExtreamDungeon::OUTPUT_ITEM_STR,std::allocator<ExtreamDungeon::OUTPUT_ITEM_STR>>::
    end();
    std::vector<ExtreamDungeon::OUTPUT_ITEM_STR,std::allocator<ExtreamDungeon::OUTPUT_ITEM_STR>>::
    begin();
    std::
    upper_bound<__gnu_cxx::__normal_iterator<ExtreamDungeon::OUTPUT_ITEM_STR_const*,std::vector<ExtreamDungeon::OUTPUT_ITEM_STR,std::allocator<ExtreamDungeon::OUTPUT_ITEM_STR>>>,ExtreamDungeon::OUTPUT_ITEM_STR,bool(*)(ExtreamDungeon::OUTPUT_ITEM_STR_const&,ExtreamDungeon::OUTPUT_ITEM_STR_const&)>
              (&local_3c,local_18,local_1c,local_24,BindTable_Predicate);
    std::vector<ExtreamDungeon::OUTPUT_ITEM_STR,std::allocator<ExtreamDungeon::OUTPUT_ITEM_STR>>::
    end();
    bVar1 = __gnu_cxx::operator!=(local_14,(__normal_iterator *)&local_38);
    if (bVar1) {
      uVar2 = _FindItemRelateCreationRate(this,local_38,local_3c);
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

```

---

## _FindSelectItem

```asm
// === 0832d15e ExtreamDungeon::CCompound_ExtreamDun_Item::_FindSelectItem  [0x0832d15e-0x832d2cd] ===
 832d15e:	55                   	push   %ebp
 832d15f:	89 e5                	mov    %esp,%ebp
 832d161:	83 ec 48             	sub    $0x48,%esp
 832d164:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 832d168:	74 06                	je     832d170 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item15_FindSelectItemEjNS_23ENUM_OUTPUTITEMS_RARITYERKSt4pairIjjE+0x12>
 832d16a:	83 7d 0c 3a          	cmpl   $0x3a,0xc(%ebp)
 832d16e:	76 0a                	jbe    832d17a <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item15_FindSelectItemEjNS_23ENUM_OUTPUTITEMS_RARITYERKSt4pairIjjE+0x1c>
 832d170:	b8 00 00 00 00       	mov    $0x0,%eax
 832d175:	e9 52 01 00 00       	jmp    832d2cc <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item15_FindSelectItemEjNS_23ENUM_OUTPUTITEMS_RARITYERKSt4pairIjjE+0x16e>
 832d17a:	8b 45 10             	mov    0x10(%ebp),%eax
 832d17d:	85 c0                	test   %eax,%eax
 832d17f:	78 08                	js     832d189 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item15_FindSelectItemEjNS_23ENUM_OUTPUTITEMS_RARITYERKSt4pairIjjE+0x2b>
 832d181:	8b 45 10             	mov    0x10(%ebp),%eax
 832d184:	83 f8 03             	cmp    $0x3,%eax
 832d187:	7e 0a                	jle    832d193 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item15_FindSelectItemEjNS_23ENUM_OUTPUTITEMS_RARITYERKSt4pairIjjE+0x35>
 832d189:	b8 00 00 00 00       	mov    $0x0,%eax
 832d18e:	e9 39 01 00 00       	jmp    832d2cc <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item15_FindSelectItemEjNS_23ENUM_OUTPUTITEMS_RARITYERKSt4pairIjjE+0x16e>
 832d193:	8b 55 0c             	mov    0xc(%ebp),%edx
 832d196:	8b 4d 10             	mov    0x10(%ebp),%ecx
 832d199:	89 c8                	mov    %ecx,%eax
 832d19b:	01 c0                	add    %eax,%eax
 832d19d:	01 c8                	add    %ecx,%eax
 832d19f:	8d 0c 85 00 00 00 00 	lea    0x0(,%eax,4),%ecx
 832d1a6:	89 d0                	mov    %edx,%eax
 832d1a8:	01 c0                	add    %eax,%eax
 832d1aa:	01 d0                	add    %edx,%eax
 832d1ac:	c1 e0 04             	shl    $0x4,%eax
 832d1af:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 832d1b2:	83 c0 30             	add    $0x30,%eax
 832d1b5:	03 45 08             	add    0x8(%ebp),%eax
 832d1b8:	8d 50 04             	lea    0x4(%eax),%edx
 832d1bb:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 832d1be:	89 54 24 04          	mov    %edx,0x4(%esp)
 832d1c2:	89 04 24             	mov    %eax,(%esp)
 832d1c5:	e8 ee 13 00 00       	call   832e5b8 <_ZNKSt6vectorIN14ExtreamDungeon15OUTPUT_ITEM_STRESaIS1_EE5beginEv>
 832d1ca:	83 ec 04             	sub    $0x4,%esp
 832d1cd:	8b 55 0c             	mov    0xc(%ebp),%edx
 832d1d0:	8b 4d 10             	mov    0x10(%ebp),%ecx
 832d1d3:	89 c8                	mov    %ecx,%eax
 832d1d5:	01 c0                	add    %eax,%eax
 832d1d7:	01 c8                	add    %ecx,%eax
 832d1d9:	8d 0c 85 00 00 00 00 	lea    0x0(,%eax,4),%ecx
 832d1e0:	89 d0                	mov    %edx,%eax
 832d1e2:	01 c0                	add    %eax,%eax
 832d1e4:	01 d0                	add    %edx,%eax
 832d1e6:	c1 e0 04             	shl    $0x4,%eax
 832d1e9:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 832d1ec:	83 c0 30             	add    $0x30,%eax
 832d1ef:	03 45 08             	add    0x8(%ebp),%eax
 832d1f2:	8d 50 04             	lea    0x4(%eax),%edx
 832d1f5:	8d 45 e0             	lea    -0x20(%ebp),%eax
 832d1f8:	89 54 24 04          	mov    %edx,0x4(%esp)
 832d1fc:	89 04 24             	mov    %eax,(%esp)
 832d1ff:	e8 e0 13 00 00       	call   832e5e4 <_ZNKSt6vectorIN14ExtreamDungeon15OUTPUT_ITEM_STRESaIS1_EE3endEv>
 832d204:	83 ec 04             	sub    $0x4,%esp
 832d207:	8b 45 14             	mov    0x14(%ebp),%eax
 832d20a:	8b 00                	mov    (%eax),%eax
 832d20c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 832d213:	00 
 832d214:	89 44 24 04          	mov    %eax,0x4(%esp)
 832d218:	8d 45 e8             	lea    -0x18(%ebp),%eax
 832d21b:	89 04 24             	mov    %eax,(%esp)
 832d21e:	e8 9b 0d 00 00       	call   832dfbe <_ZN14ExtreamDungeon15OUTPUT_ITEM_STRC1Eii>
 832d223:	8d 45 dc             	lea    -0x24(%ebp),%eax
 832d226:	c7 44 24 10 cc c3 32 	movl   $0x832c3cc,0x10(%esp)
 832d22d:	08 
 832d22e:	8d 55 e8             	lea    -0x18(%ebp),%edx
 832d231:	89 54 24 0c          	mov    %edx,0xc(%esp)
 832d235:	8b 55 e0             	mov    -0x20(%ebp),%edx
 832d238:	89 54 24 08          	mov    %edx,0x8(%esp)
 832d23c:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 832d23f:	89 54 24 04          	mov    %edx,0x4(%esp)
 832d243:	89 04 24             	mov    %eax,(%esp)
 832d246:	e8 c5 13 00 00       	call   832e610 <_ZSt11lower_boundIN9__gnu_cxx17__normal_iteratorIPKN14ExtreamDungeon15OUTPUT_ITEM_STRESt6vectorIS3_SaIS3_EEEES3_PFbRS4_SA_EET_SD_SD_RKT0_T1_>
 832d24b:	83 ec 04             	sub    $0x4,%esp
 832d24e:	8b 45 14             	mov    0x14(%ebp),%eax
 832d251:	8b 40 04             	mov    0x4(%eax),%eax
 832d254:	c7 44 24 08 ff ff ff 	movl   $0x7fffffff,0x8(%esp)
 832d25b:	7f 
 832d25c:	89 44 24 04          	mov    %eax,0x4(%esp)
 832d260:	8d 45 f0             	lea    -0x10(%ebp),%eax
 832d263:	89 04 24             	mov    %eax,(%esp)
 832d266:	e8 53 0d 00 00       	call   832dfbe <_ZN14ExtreamDungeon15OUTPUT_ITEM_STRC1Eii>
 832d26b:	8d 45 d8             	lea    -0x28(%ebp),%eax
 832d26e:	c7 44 24 10 cc c3 32 	movl   $0x832c3cc,0x10(%esp)
 832d275:	08 
 832d276:	8d 55 f0             	lea    -0x10(%ebp),%edx
 832d279:	89 54 24 0c          	mov    %edx,0xc(%esp)
 832d27d:	8b 55 e0             	mov    -0x20(%ebp),%edx
 832d280:	89 54 24 08          	mov    %edx,0x8(%esp)
 832d284:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 832d287:	89 54 24 04          	mov    %edx,0x4(%esp)
 832d28b:	89 04 24             	mov    %eax,(%esp)
 832d28e:	e8 2c 14 00 00       	call   832e6bf <_ZSt11upper_boundIN9__gnu_cxx17__normal_iteratorIPKN14ExtreamDungeon15OUTPUT_ITEM_STRESt6vectorIS3_SaIS3_EEEES3_PFbRS4_SA_EET_SD_SD_RKT0_T1_>
 832d293:	83 ec 04             	sub    $0x4,%esp
 832d296:	8d 45 e0             	lea    -0x20(%ebp),%eax
 832d299:	89 44 24 04          	mov    %eax,0x4(%esp)
 832d29d:	8d 45 dc             	lea    -0x24(%ebp),%eax
 832d2a0:	89 04 24             	mov    %eax,(%esp)
 832d2a3:	e8 c6 14 00 00       	call   832e76e <_ZN9__gnu_cxxeqIPKN14ExtreamDungeon15OUTPUT_ITEM_STRESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_>
 832d2a8:	84 c0                	test   %al,%al
 832d2aa:	74 07                	je     832d2b3 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item15_FindSelectItemEjNS_23ENUM_OUTPUTITEMS_RARITYERKSt4pairIjjE+0x155>
 832d2ac:	b8 00 00 00 00       	mov    $0x0,%eax
 832d2b1:	eb 19                	jmp    832d2cc <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item15_FindSelectItemEjNS_23ENUM_OUTPUTITEMS_RARITYERKSt4pairIjjE+0x16e>
 832d2b3:	8b 45 d8             	mov    -0x28(%ebp),%eax
 832d2b6:	89 44 24 08          	mov    %eax,0x8(%esp)
 832d2ba:	8b 45 dc             	mov    -0x24(%ebp),%eax
 832d2bd:	89 44 24 04          	mov    %eax,0x4(%esp)
 832d2c1:	8b 45 08             	mov    0x8(%ebp),%eax
 832d2c4:	89 04 24             	mov    %eax,(%esp)
 832d2c7:	e8 e8 01 00 00       	call   832d4b4 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item27_FindItemRelateCreationRateEN9__gnu_cxx17__normal_iteratorIPKNS_15OUTPUT_ITEM_STRESt6vectorIS3_SaIS3_EEEES9_>
 832d2cc:	c9                   	leave
 832d2cd:	c3                   	ret

```

```c
// ExtreamDungeon::CCompound_ExtreamDun_Item::_FindSelectItem @ 0x832d15e

/* ExtreamDungeon::CCompound_ExtreamDun_Item::_FindSelectItem(unsigned int,
   ExtreamDungeon::ENUM_OUTPUTITEMS_RARITY, std::pair<unsigned int, unsigned int> const&) const */

undefined4 __thiscall
ExtreamDungeon::CCompound_ExtreamDun_Item::_FindSelectItem
          (CCompound_ExtreamDun_Item *this,uint param_1,int param_3,int *param_4)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  OUTPUT_ITEM_STR local_1c [8];
  OUTPUT_ITEM_STR local_14 [16];
  
  if ((param_1 == 0) || (0x3a < param_1)) {
    uVar2 = 0;
  }
  else if ((param_3 < 0) || (3 < param_3)) {
    uVar2 = 0;
  }
  else {
    std::vector<ExtreamDungeon::OUTPUT_ITEM_STR,std::allocator<ExtreamDungeon::OUTPUT_ITEM_STR>>::
    begin();
    std::vector<ExtreamDungeon::OUTPUT_ITEM_STR,std::allocator<ExtreamDungeon::OUTPUT_ITEM_STR>>::
    end();
    OUTPUT_ITEM_STR::OUTPUT_ITEM_STR(local_1c,*param_4,0);
    std::
    lower_bound<__gnu_cxx::__normal_iterator<ExtreamDungeon::OUTPUT_ITEM_STR_const*,std::vector<ExtreamDungeon::OUTPUT_ITEM_STR,std::allocator<ExtreamDungeon::OUTPUT_ITEM_STR>>>,ExtreamDungeon::OUTPUT_ITEM_STR,bool(*)(ExtreamDungeon::OUTPUT_ITEM_STR_const&,ExtreamDungeon::OUTPUT_ITEM_STR_const&)>
              (&local_28,local_20,local_24,local_1c,BindTable_Predicate);
    OUTPUT_ITEM_STR::OUTPUT_ITEM_STR(local_14,param_4[1],0x7fffffff);
    std::
    upper_bound<__gnu_cxx::__normal_iterator<ExtreamDungeon::OUTPUT_ITEM_STR_const*,std::vector<ExtreamDungeon::OUTPUT_ITEM_STR,std::allocator<ExtreamDungeon::OUTPUT_ITEM_STR>>>,ExtreamDungeon::OUTPUT_ITEM_STR,bool(*)(ExtreamDungeon::OUTPUT_ITEM_STR_const&,ExtreamDungeon::OUTPUT_ITEM_STR_const&)>
              (&local_2c,local_20,local_24,local_14,BindTable_Predicate);
    bVar1 = __gnu_cxx::operator==((__normal_iterator *)&local_28,(__normal_iterator *)&local_24);
    if (bVar1) {
      uVar2 = 0;
    }
    else {
      uVar2 = _FindItemRelateCreationRate(this,local_28,local_2c);
    }
  }
  return uVar2;
}

```

---

## _convertInputItem

```asm
// === 0832c620 ExtreamDungeon::CCompound_ExtreamDun_Item::_convertInputItem  [0x0832c620-0x832c65d] ===
 832c620:	55                   	push   %ebp
 832c621:	89 e5                	mov    %esp,%ebp
 832c623:	8b 45 0c             	mov    0xc(%ebp),%eax
 832c626:	83 f8 02             	cmp    $0x2,%eax
 832c629:	74 1d                	je     832c648 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item17_convertInputItemE28ENUM_UNUSABLE_EQUIPMENT_TYPE+0x28>
 832c62b:	83 f8 02             	cmp    $0x2,%eax
 832c62e:	7f 07                	jg     832c637 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item17_convertInputItemE28ENUM_UNUSABLE_EQUIPMENT_TYPE+0x17>
 832c630:	83 f8 01             	cmp    $0x1,%eax
 832c633:	74 0c                	je     832c641 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item17_convertInputItemE28ENUM_UNUSABLE_EQUIPMENT_TYPE+0x21>
 832c635:	eb 1f                	jmp    832c656 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item17_convertInputItemE28ENUM_UNUSABLE_EQUIPMENT_TYPE+0x36>
 832c637:	83 f8 03             	cmp    $0x3,%eax
 832c63a:	74 13                	je     832c64f <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item17_convertInputItemE28ENUM_UNUSABLE_EQUIPMENT_TYPE+0x2f>
 832c63c:	83 f8 09             	cmp    $0x9,%eax
 832c63f:	75 15                	jne    832c656 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item17_convertInputItemE28ENUM_UNUSABLE_EQUIPMENT_TYPE+0x36>
 832c641:	b8 00 00 00 00       	mov    $0x0,%eax
 832c646:	eb 13                	jmp    832c65b <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item17_convertInputItemE28ENUM_UNUSABLE_EQUIPMENT_TYPE+0x3b>
 832c648:	b8 01 00 00 00       	mov    $0x1,%eax
 832c64d:	eb 0c                	jmp    832c65b <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item17_convertInputItemE28ENUM_UNUSABLE_EQUIPMENT_TYPE+0x3b>
 832c64f:	b8 02 00 00 00       	mov    $0x2,%eax
 832c654:	eb 05                	jmp    832c65b <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item17_convertInputItemE28ENUM_UNUSABLE_EQUIPMENT_TYPE+0x3b>
 832c656:	b8 03 00 00 00       	mov    $0x3,%eax
 832c65b:	5d                   	pop    %ebp
 832c65c:	c3                   	ret
 832c65d:	90                   	nop

```

```c
// ExtreamDungeon::CCompound_ExtreamDun_Item::_convertInputItem @ 0x832c620

/* ExtreamDungeon::CCompound_ExtreamDun_Item::_convertInputItem(ENUM_UNUSABLE_EQUIPMENT_TYPE) const
    */

undefined4 __thiscall
ExtreamDungeon::CCompound_ExtreamDun_Item::_convertInputItem(undefined4 this,int param_2)

{
  if (param_2 == 2) {
    return 1;
  }
  if (param_2 < 3) {
    if (param_2 == 1) {
      return 0;
    }
  }
  else {
    if (param_2 == 3) {
      return 2;
    }
    if (param_2 == 9) {
      return 0;
    }
  }
  return 3;
}

```

---

## _convertInput_To_Output

```asm
// === 0832c5f0 ExtreamDungeon::CCompound_ExtreamDun_Item::_convertInput_To_Output  [0x0832c5f0-0x832c61f] ===
 832c5f0:	55                   	push   %ebp
 832c5f1:	89 e5                	mov    %esp,%ebp
 832c5f3:	8b 45 0c             	mov    0xc(%ebp),%eax
 832c5f6:	83 f8 01             	cmp    $0x1,%eax
 832c5f9:	74 10                	je     832c60b <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item23_convertInput_To_OutputENS_22ENUM_INPUTITEMS_RARITYE+0x1b>
 832c5fb:	83 f8 02             	cmp    $0x2,%eax
 832c5fe:	74 12                	je     832c612 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item23_convertInput_To_OutputENS_22ENUM_INPUTITEMS_RARITYE+0x22>
 832c600:	85 c0                	test   %eax,%eax
 832c602:	75 15                	jne    832c619 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item23_convertInput_To_OutputENS_22ENUM_INPUTITEMS_RARITYE+0x29>
 832c604:	b8 00 00 00 00       	mov    $0x0,%eax
 832c609:	eb 13                	jmp    832c61e <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item23_convertInput_To_OutputENS_22ENUM_INPUTITEMS_RARITYE+0x2e>
 832c60b:	b8 02 00 00 00       	mov    $0x2,%eax
 832c610:	eb 0c                	jmp    832c61e <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item23_convertInput_To_OutputENS_22ENUM_INPUTITEMS_RARITYE+0x2e>
 832c612:	b8 03 00 00 00       	mov    $0x3,%eax
 832c617:	eb 05                	jmp    832c61e <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item23_convertInput_To_OutputENS_22ENUM_INPUTITEMS_RARITYE+0x2e>
 832c619:	b8 04 00 00 00       	mov    $0x4,%eax
 832c61e:	5d                   	pop    %ebp
 832c61f:	c3                   	ret

```

```c
// ExtreamDungeon::CCompound_ExtreamDun_Item::_convertInput_To_Output @ 0x832c5f0

/* ExtreamDungeon::CCompound_ExtreamDun_Item::_convertInput_To_Output(ExtreamDungeon::ENUM_INPUTITEMS_RARITY)
   const */

undefined4 __thiscall
ExtreamDungeon::CCompound_ExtreamDun_Item::_convertInput_To_Output(undefined4 this,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 1) {
    uVar1 = 2;
  }
  else if (param_2 == 2) {
    uVar1 = 3;
  }
  else if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 4;
  }
  return uVar1;
}

```

---

## _convertOutputItem

```asm
// === 0832c5ac ExtreamDungeon::CCompound_ExtreamDun_Item::_convertOutputItem  [0x0832c5ac-0x832c5ef] ===
 832c5ac:	55                   	push   %ebp
 832c5ad:	89 e5                	mov    %esp,%ebp
 832c5af:	8b 45 0c             	mov    0xc(%ebp),%eax
 832c5b2:	83 f8 02             	cmp    $0x2,%eax
 832c5b5:	74 24                	je     832c5db <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item18_convertOutputItemE28ENUM_UNUSABLE_EQUIPMENT_TYPE+0x2f>
 832c5b7:	83 f8 02             	cmp    $0x2,%eax
 832c5ba:	7f 07                	jg     832c5c3 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item18_convertOutputItemE28ENUM_UNUSABLE_EQUIPMENT_TYPE+0x17>
 832c5bc:	83 f8 01             	cmp    $0x1,%eax
 832c5bf:	74 13                	je     832c5d4 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item18_convertOutputItemE28ENUM_UNUSABLE_EQUIPMENT_TYPE+0x28>
 832c5c1:	eb 26                	jmp    832c5e9 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item18_convertOutputItemE28ENUM_UNUSABLE_EQUIPMENT_TYPE+0x3d>
 832c5c3:	83 f8 03             	cmp    $0x3,%eax
 832c5c6:	74 1a                	je     832c5e2 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item18_convertOutputItemE28ENUM_UNUSABLE_EQUIPMENT_TYPE+0x36>
 832c5c8:	83 f8 09             	cmp    $0x9,%eax
 832c5cb:	75 1c                	jne    832c5e9 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item18_convertOutputItemE28ENUM_UNUSABLE_EQUIPMENT_TYPE+0x3d>
 832c5cd:	b8 00 00 00 00       	mov    $0x0,%eax
 832c5d2:	eb 1a                	jmp    832c5ee <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item18_convertOutputItemE28ENUM_UNUSABLE_EQUIPMENT_TYPE+0x42>
 832c5d4:	b8 01 00 00 00       	mov    $0x1,%eax
 832c5d9:	eb 13                	jmp    832c5ee <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item18_convertOutputItemE28ENUM_UNUSABLE_EQUIPMENT_TYPE+0x42>
 832c5db:	b8 02 00 00 00       	mov    $0x2,%eax
 832c5e0:	eb 0c                	jmp    832c5ee <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item18_convertOutputItemE28ENUM_UNUSABLE_EQUIPMENT_TYPE+0x42>
 832c5e2:	b8 03 00 00 00       	mov    $0x3,%eax
 832c5e7:	eb 05                	jmp    832c5ee <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item18_convertOutputItemE28ENUM_UNUSABLE_EQUIPMENT_TYPE+0x42>
 832c5e9:	b8 04 00 00 00       	mov    $0x4,%eax
 832c5ee:	5d                   	pop    %ebp
 832c5ef:	c3                   	ret

```

```c
// ExtreamDungeon::CCompound_ExtreamDun_Item::_convertOutputItem @ 0x832c5ac

/* ExtreamDungeon::CCompound_ExtreamDun_Item::_convertOutputItem(ENUM_UNUSABLE_EQUIPMENT_TYPE) const
    */

undefined4 __thiscall
ExtreamDungeon::CCompound_ExtreamDun_Item::_convertOutputItem(undefined4 this,int param_2)

{
  if (param_2 == 2) {
    return 2;
  }
  if (param_2 < 3) {
    if (param_2 == 1) {
      return 1;
    }
  }
  else {
    if (param_2 == 3) {
      return 3;
    }
    if (param_2 == 9) {
      return 0;
    }
  }
  return 4;
}

```

---

## _determine_level_bonus

```asm
// === 0832c9ca ExtreamDungeon::CCompound_ExtreamDun_Item::_determine_level_bonus  [0x0832c9ca-0x832cadb] ===
 832c9ca:	55                   	push   %ebp
 832c9cb:	89 e5                	mov    %esp,%ebp
 832c9cd:	56                   	push   %esi
 832c9ce:	53                   	push   %ebx
 832c9cf:	83 ec 20             	sub    $0x20,%esp
 832c9d2:	8b 5d 08             	mov    0x8(%ebp),%ebx
 832c9d5:	8b 45 1c             	mov    0x1c(%ebp),%eax
 832c9d8:	89 44 24 0c          	mov    %eax,0xc(%esp)
 832c9dc:	8b 45 14             	mov    0x14(%ebp),%eax
 832c9df:	89 44 24 08          	mov    %eax,0x8(%esp)
 832c9e3:	8b 45 10             	mov    0x10(%ebp),%eax
 832c9e6:	89 44 24 04          	mov    %eax,0x4(%esp)
 832c9ea:	8b 45 0c             	mov    0xc(%ebp),%eax
 832c9ed:	89 04 24             	mov    %eax,(%esp)
 832c9f0:	e8 0d 02 00 00       	call   832cc02 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item28_determine_level_bonus_indexEjNS_22ENUM_INPUTITEMS_RARITYENS_15eBindSphereTypeE>
 832c9f5:	8b 55 18             	mov    0x18(%ebp),%edx
 832c9f8:	89 02                	mov    %eax,(%edx)
 832c9fa:	8b 45 18             	mov    0x18(%ebp),%eax
 832c9fd:	8b 00                	mov    (%eax),%eax
 832c9ff:	85 c0                	test   %eax,%eax
 832ca01:	74 28                	je     832ca2b <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item22_determine_level_bonusEjNS_22ENUM_INPUTITEMS_RARITYERjNS_15eBindSphereTypeE+0x61>
 832ca03:	8b 45 18             	mov    0x18(%ebp),%eax
 832ca06:	8b 30                	mov    (%eax),%esi
 832ca08:	8b 55 1c             	mov    0x1c(%ebp),%edx
 832ca0b:	89 d0                	mov    %edx,%eax
 832ca0d:	01 c0                	add    %eax,%eax
 832ca0f:	01 d0                	add    %edx,%eax
 832ca11:	c1 e0 04             	shl    $0x4,%eax
 832ca14:	05 80 0b 00 00       	add    $0xb80,%eax
 832ca19:	03 45 0c             	add    0xc(%ebp),%eax
 832ca1c:	83 c0 0c             	add    $0xc,%eax
 832ca1f:	89 04 24             	mov    %eax,(%esp)
 832ca22:	e8 3b 5a db ff       	call   80e2462 <_ZNKSt6vectorIjSaIjEE4sizeEv>
 832ca27:	39 c6                	cmp    %eax,%esi
 832ca29:	72 07                	jb     832ca32 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item22_determine_level_bonusEjNS_22ENUM_INPUTITEMS_RARITYERjNS_15eBindSphereTypeE+0x68>
 832ca2b:	b8 01 00 00 00       	mov    $0x1,%eax
 832ca30:	eb 05                	jmp    832ca37 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item22_determine_level_bonusEjNS_22ENUM_INPUTITEMS_RARITYERjNS_15eBindSphereTypeE+0x6d>
 832ca32:	b8 00 00 00 00       	mov    $0x0,%eax
 832ca37:	84 c0                	test   %al,%al
 832ca39:	74 26                	je     832ca61 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item22_determine_level_bonusEjNS_22ENUM_INPUTITEMS_RARITYERjNS_15eBindSphereTypeE+0x97>
 832ca3b:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 832ca42:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 832ca49:	8d 45 ec             	lea    -0x14(%ebp),%eax
 832ca4c:	89 44 24 08          	mov    %eax,0x8(%esp)
 832ca50:	8d 45 f0             	lea    -0x10(%ebp),%eax
 832ca53:	89 44 24 04          	mov    %eax,0x4(%esp)
 832ca57:	89 1c 24             	mov    %ebx,(%esp)
 832ca5a:	e8 cb 1a 00 00       	call   832e52a <_ZNSt4pairIjjEC1IiiEEOT_OT0_>
 832ca5f:	eb 70                	jmp    832cad1 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item22_determine_level_bonusEjNS_22ENUM_INPUTITEMS_RARITYERjNS_15eBindSphereTypeE+0x107>
 832ca61:	8b 45 18             	mov    0x18(%ebp),%eax
 832ca64:	8b 08                	mov    (%eax),%ecx
 832ca66:	8b 55 1c             	mov    0x1c(%ebp),%edx
 832ca69:	89 d0                	mov    %edx,%eax
 832ca6b:	01 c0                	add    %eax,%eax
 832ca6d:	01 d0                	add    %edx,%eax
 832ca6f:	c1 e0 04             	shl    $0x4,%eax
 832ca72:	05 80 0b 00 00       	add    $0xb80,%eax
 832ca77:	03 45 0c             	add    0xc(%ebp),%eax
 832ca7a:	83 c0 0c             	add    $0xc,%eax
 832ca7d:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 832ca81:	89 04 24             	mov    %eax,(%esp)
 832ca84:	e8 a9 8b dc ff       	call   80f5632 <_ZNKSt6vectorIjSaIjEEixEj>
 832ca89:	89 c6                	mov    %eax,%esi
 832ca8b:	8b 45 18             	mov    0x18(%ebp),%eax
 832ca8e:	8b 00                	mov    (%eax),%eax
 832ca90:	8d 48 ff             	lea    -0x1(%eax),%ecx
 832ca93:	8b 55 1c             	mov    0x1c(%ebp),%edx
 832ca96:	89 d0                	mov    %edx,%eax
 832ca98:	01 c0                	add    %eax,%eax
 832ca9a:	01 d0                	add    %edx,%eax
 832ca9c:	c1 e0 04             	shl    $0x4,%eax
 832ca9f:	05 80 0b 00 00       	add    $0xb80,%eax
 832caa4:	03 45 0c             	add    0xc(%ebp),%eax
 832caa7:	83 c0 0c             	add    $0xc,%eax
 832caaa:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 832caae:	89 04 24             	mov    %eax,(%esp)
 832cab1:	e8 7c 8b dc ff       	call   80f5632 <_ZNKSt6vectorIjSaIjEEixEj>
 832cab6:	8b 00                	mov    (%eax),%eax
 832cab8:	83 c0 01             	add    $0x1,%eax
 832cabb:	89 45 f4             	mov    %eax,-0xc(%ebp)
 832cabe:	89 74 24 08          	mov    %esi,0x8(%esp)
 832cac2:	8d 45 f4             	lea    -0xc(%ebp),%eax
 832cac5:	89 44 24 04          	mov    %eax,0x4(%esp)
 832cac9:	89 1c 24             	mov    %ebx,(%esp)
 832cacc:	e8 8b 1a 00 00       	call   832e55c <_ZNSt4pairIjjEC1IjRKjEEOT_OT0_>
 832cad1:	89 d8                	mov    %ebx,%eax
 832cad3:	83 c4 20             	add    $0x20,%esp
 832cad6:	5b                   	pop    %ebx
 832cad7:	5e                   	pop    %esi
 832cad8:	5d                   	pop    %ebp
 832cad9:	c2 04 00             	ret    $0x4

```

```c
// ExtreamDungeon::CCompound_ExtreamDun_Item::_determine_level_bonus @ 0x832c9ca

/* ExtreamDungeon::CCompound_ExtreamDun_Item::_determine_level_bonus(unsigned int,
   ExtreamDungeon::ENUM_INPUTITEMS_RARITY, unsigned int&, ExtreamDungeon::eBindSphereType) const */

pair<unsigned_int,unsigned_int> *
ExtreamDungeon::CCompound_ExtreamDun_Item::_determine_level_bonus
          (pair<unsigned_int,unsigned_int> *param_1,CCompound_ExtreamDun_Item *param_2,
          undefined4 param_3,undefined4 param_4,uint *param_5,int param_6)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  int *piVar5;
  int local_18 [3];
  
  uVar2 = _determine_level_bonus_index(param_2,param_3,param_4,param_6);
  *param_5 = uVar2;
  if (*param_5 != 0) {
    uVar2 = *param_5;
    uVar3 = std::vector<unsigned_int,std::allocator<unsigned_int>>::size
                      ((vector<unsigned_int,std::allocator<unsigned_int>> *)
                       (param_2 + param_6 * 0x30 + 0xb8c));
    if (uVar2 < uVar3) {
      bVar1 = false;
      goto LAB_0832ca37;
    }
  }
  bVar1 = true;
LAB_0832ca37:
  if (bVar1) {
    local_18[0] = 0;
    local_18[1] = 0;
    std::pair<unsigned_int,unsigned_int>::pair<int,int>(param_1,local_18 + 1,local_18);
  }
  else {
    puVar4 = (uint *)std::vector<unsigned_int,std::allocator<unsigned_int>>::operator[]
                               ((vector<unsigned_int,std::allocator<unsigned_int>> *)
                                (param_2 + param_6 * 0x30 + 0xb8c),*param_5);
    piVar5 = (int *)std::vector<unsigned_int,std::allocator<unsigned_int>>::operator[]
                              ((vector<unsigned_int,std::allocator<unsigned_int>> *)
                               (param_2 + param_6 * 0x30 + 0xb8c),*param_5 - 1);
    local_18[2] = *piVar5 + 1;
    std::pair<unsigned_int,unsigned_int>::pair<unsigned_int,unsigned_int_const&>
              (param_1,(uint *)(local_18 + 2),puVar4);
  }
  return param_1;
}

```

---

## _determine_level_bonus_0832cadc

```asm
// === 0832cadc ExtreamDungeon::CCompound_ExtreamDun_Item::_determine_level_bonus  [0x0832cadc-0x832cc01] ===
 832cadc:	55                   	push   %ebp
 832cadd:	89 e5                	mov    %esp,%ebp
 832cadf:	56                   	push   %esi
 832cae0:	53                   	push   %ebx
 832cae1:	83 ec 20             	sub    $0x20,%esp
 832cae4:	8b 5d 08             	mov    0x8(%ebp),%ebx
 832cae7:	8b 45 1c             	mov    0x1c(%ebp),%eax
 832caea:	89 44 24 0c          	mov    %eax,0xc(%esp)
 832caee:	8b 45 10             	mov    0x10(%ebp),%eax
 832caf1:	89 44 24 08          	mov    %eax,0x8(%esp)
 832caf5:	8b 45 14             	mov    0x14(%ebp),%eax
 832caf8:	89 44 24 04          	mov    %eax,0x4(%esp)
 832cafc:	8b 45 0c             	mov    0xc(%ebp),%eax
 832caff:	89 04 24             	mov    %eax,(%esp)
 832cb02:	e8 fb 00 00 00       	call   832cc02 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item28_determine_level_bonus_indexEjNS_22ENUM_INPUTITEMS_RARITYENS_15eBindSphereTypeE>
 832cb07:	89 45 f4             	mov    %eax,-0xc(%ebp)
 832cb0a:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 832cb0e:	75 1a                	jne    832cb2a <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item22_determine_level_bonusENS_22ENUM_INPUTITEMS_RARITYEjNS_23ENUM_OUTPUTITEMS_RARITYENS_15eBindSphereTypeE+0x4e>
 832cb10:	8b 45 18             	mov    0x18(%ebp),%eax
 832cb13:	83 f8 01             	cmp    $0x1,%eax
 832cb16:	7e 12                	jle    832cb2a <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item22_determine_level_bonusENS_22ENUM_INPUTITEMS_RARITYEjNS_23ENUM_OUTPUTITEMS_RARITYENS_15eBindSphereTypeE+0x4e>
 832cb18:	8b 45 18             	mov    0x18(%ebp),%eax
 832cb1b:	83 f8 03             	cmp    $0x3,%eax
 832cb1e:	7f 0a                	jg     832cb2a <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item22_determine_level_bonusENS_22ENUM_INPUTITEMS_RARITYEjNS_23ENUM_OUTPUTITEMS_RARITYENS_15eBindSphereTypeE+0x4e>
 832cb20:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 832cb24:	74 04                	je     832cb2a <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item22_determine_level_bonusENS_22ENUM_INPUTITEMS_RARITYEjNS_23ENUM_OUTPUTITEMS_RARITYENS_15eBindSphereTypeE+0x4e>
 832cb26:	83 6d f4 01          	subl   $0x1,-0xc(%ebp)
 832cb2a:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 832cb2e:	74 24                	je     832cb54 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item22_determine_level_bonusENS_22ENUM_INPUTITEMS_RARITYEjNS_23ENUM_OUTPUTITEMS_RARITYENS_15eBindSphereTypeE+0x78>
 832cb30:	8b 55 1c             	mov    0x1c(%ebp),%edx
 832cb33:	89 d0                	mov    %edx,%eax
 832cb35:	01 c0                	add    %eax,%eax
 832cb37:	01 d0                	add    %edx,%eax
 832cb39:	c1 e0 04             	shl    $0x4,%eax
 832cb3c:	05 80 0b 00 00       	add    $0xb80,%eax
 832cb41:	03 45 0c             	add    0xc(%ebp),%eax
 832cb44:	83 c0 0c             	add    $0xc,%eax
 832cb47:	89 04 24             	mov    %eax,(%esp)
 832cb4a:	e8 13 59 db ff       	call   80e2462 <_ZNKSt6vectorIjSaIjEE4sizeEv>
 832cb4f:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 832cb52:	77 07                	ja     832cb5b <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item22_determine_level_bonusENS_22ENUM_INPUTITEMS_RARITYEjNS_23ENUM_OUTPUTITEMS_RARITYENS_15eBindSphereTypeE+0x7f>
 832cb54:	b8 01 00 00 00       	mov    $0x1,%eax
 832cb59:	eb 05                	jmp    832cb60 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item22_determine_level_bonusENS_22ENUM_INPUTITEMS_RARITYEjNS_23ENUM_OUTPUTITEMS_RARITYENS_15eBindSphereTypeE+0x84>
 832cb5b:	b8 00 00 00 00       	mov    $0x0,%eax
 832cb60:	84 c0                	test   %al,%al
 832cb62:	74 26                	je     832cb8a <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item22_determine_level_bonusENS_22ENUM_INPUTITEMS_RARITYEjNS_23ENUM_OUTPUTITEMS_RARITYENS_15eBindSphereTypeE+0xae>
 832cb64:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 832cb6b:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 832cb72:	8d 45 e8             	lea    -0x18(%ebp),%eax
 832cb75:	89 44 24 08          	mov    %eax,0x8(%esp)
 832cb79:	8d 45 ec             	lea    -0x14(%ebp),%eax
 832cb7c:	89 44 24 04          	mov    %eax,0x4(%esp)
 832cb80:	89 1c 24             	mov    %ebx,(%esp)
 832cb83:	e8 a2 19 00 00       	call   832e52a <_ZNSt4pairIjjEC1IiiEEOT_OT0_>
 832cb88:	eb 6c                	jmp    832cbf6 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item22_determine_level_bonusENS_22ENUM_INPUTITEMS_RARITYEjNS_23ENUM_OUTPUTITEMS_RARITYENS_15eBindSphereTypeE+0x11a>
 832cb8a:	8b 55 1c             	mov    0x1c(%ebp),%edx
 832cb8d:	89 d0                	mov    %edx,%eax
 832cb8f:	01 c0                	add    %eax,%eax
 832cb91:	01 d0                	add    %edx,%eax
 832cb93:	c1 e0 04             	shl    $0x4,%eax
 832cb96:	05 80 0b 00 00       	add    $0xb80,%eax
 832cb9b:	03 45 0c             	add    0xc(%ebp),%eax
 832cb9e:	8d 50 0c             	lea    0xc(%eax),%edx
 832cba1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 832cba4:	89 44 24 04          	mov    %eax,0x4(%esp)
 832cba8:	89 14 24             	mov    %edx,(%esp)
 832cbab:	e8 82 8a dc ff       	call   80f5632 <_ZNKSt6vectorIjSaIjEEixEj>
 832cbb0:	89 c6                	mov    %eax,%esi
 832cbb2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 832cbb5:	8d 48 ff             	lea    -0x1(%eax),%ecx
 832cbb8:	8b 55 1c             	mov    0x1c(%ebp),%edx
 832cbbb:	89 d0                	mov    %edx,%eax
 832cbbd:	01 c0                	add    %eax,%eax
 832cbbf:	01 d0                	add    %edx,%eax
 832cbc1:	c1 e0 04             	shl    $0x4,%eax
 832cbc4:	05 80 0b 00 00       	add    $0xb80,%eax
 832cbc9:	03 45 0c             	add    0xc(%ebp),%eax
 832cbcc:	83 c0 0c             	add    $0xc,%eax
 832cbcf:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 832cbd3:	89 04 24             	mov    %eax,(%esp)
 832cbd6:	e8 57 8a dc ff       	call   80f5632 <_ZNKSt6vectorIjSaIjEEixEj>
 832cbdb:	8b 00                	mov    (%eax),%eax
 832cbdd:	83 c0 01             	add    $0x1,%eax
 832cbe0:	89 45 f0             	mov    %eax,-0x10(%ebp)
 832cbe3:	89 74 24 08          	mov    %esi,0x8(%esp)
 832cbe7:	8d 45 f0             	lea    -0x10(%ebp),%eax
 832cbea:	89 44 24 04          	mov    %eax,0x4(%esp)
 832cbee:	89 1c 24             	mov    %ebx,(%esp)
 832cbf1:	e8 66 19 00 00       	call   832e55c <_ZNSt4pairIjjEC1IjRKjEEOT_OT0_>
 832cbf6:	89 d8                	mov    %ebx,%eax
 832cbf8:	83 c4 20             	add    $0x20,%esp
 832cbfb:	5b                   	pop    %ebx
 832cbfc:	5e                   	pop    %esi
 832cbfd:	5d                   	pop    %ebp
 832cbfe:	c2 04 00             	ret    $0x4
 832cc01:	90                   	nop

```

```c
// ExtreamDungeon::CCompound_ExtreamDun_Item::_determine_level_bonus @ 0x832cadc

/* ExtreamDungeon::CCompound_ExtreamDun_Item::_determine_level_bonus(ExtreamDungeon::ENUM_INPUTITEMS_RARITY,
   unsigned int, ExtreamDungeon::ENUM_OUTPUTITEMS_RARITY, ExtreamDungeon::eBindSphereType) const */

pair<unsigned_int,unsigned_int> *
ExtreamDungeon::CCompound_ExtreamDun_Item::_determine_level_bonus
          (pair<unsigned_int,unsigned_int> *param_1,CCompound_ExtreamDun_Item *param_2,int param_3,
          undefined4 param_4,int param_5,int param_6)

{
  bool bVar1;
  uint uVar2;
  uint *puVar3;
  int *piVar4;
  int local_1c [3];
  uint local_10;
  
  local_10 = _determine_level_bonus_index(param_2,param_4,param_3,param_6);
  if ((((param_3 == 0) && (1 < param_5)) && (param_5 < 4)) && (local_10 != 0)) {
    local_10 = local_10 - 1;
  }
  if (local_10 != 0) {
    uVar2 = std::vector<unsigned_int,std::allocator<unsigned_int>>::size
                      ((vector<unsigned_int,std::allocator<unsigned_int>> *)
                       (param_2 + param_6 * 0x30 + 0xb8c));
    if (local_10 < uVar2) {
      bVar1 = false;
      goto LAB_0832cb60;
    }
  }
  bVar1 = true;
LAB_0832cb60:
  if (bVar1) {
    local_1c[0] = 0;
    local_1c[1] = 0;
    std::pair<unsigned_int,unsigned_int>::pair<int,int>(param_1,local_1c + 1,local_1c);
  }
  else {
    puVar3 = (uint *)std::vector<unsigned_int,std::allocator<unsigned_int>>::operator[]
                               ((vector<unsigned_int,std::allocator<unsigned_int>> *)
                                (param_2 + param_6 * 0x30 + 0xb8c),local_10);
    piVar4 = (int *)std::vector<unsigned_int,std::allocator<unsigned_int>>::operator[]
                              ((vector<unsigned_int,std::allocator<unsigned_int>> *)
                               (param_2 + param_6 * 0x30 + 0xb8c),local_10 - 1);
    local_1c[2] = *piVar4 + 1;
    std::pair<unsigned_int,unsigned_int>::pair<unsigned_int,unsigned_int_const&>
              (param_1,(uint *)(local_1c + 2),puVar3);
  }
  return param_1;
}

```

---

## _determine_level_bonus_index

```asm
// === 0832cc02 ExtreamDungeon::CCompound_ExtreamDun_Item::_determine_level_bonus_index  [0x0832cc02-0x832ccbf] ===
 832cc02:	55                   	push   %ebp
 832cc03:	89 e5                	mov    %esp,%ebp
 832cc05:	53                   	push   %ebx
 832cc06:	83 ec 24             	sub    $0x24,%esp
 832cc09:	8b 45 10             	mov    0x10(%ebp),%eax
 832cc0c:	85 c0                	test   %eax,%eax
 832cc0e:	78 08                	js     832cc18 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item28_determine_level_bonus_indexEjNS_22ENUM_INPUTITEMS_RARITYENS_15eBindSphereTypeE+0x16>
 832cc10:	8b 45 10             	mov    0x10(%ebp),%eax
 832cc13:	83 f8 02             	cmp    $0x2,%eax
 832cc16:	7e 0a                	jle    832cc22 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item28_determine_level_bonus_indexEjNS_22ENUM_INPUTITEMS_RARITYENS_15eBindSphereTypeE+0x20>
 832cc18:	b8 00 00 00 00       	mov    $0x0,%eax
 832cc1d:	e9 97 00 00 00       	jmp    832ccb9 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item28_determine_level_bonus_indexEjNS_22ENUM_INPUTITEMS_RARITYENS_15eBindSphereTypeE+0xb7>
 832cc22:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 832cc29:	eb 49                	jmp    832cc74 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item28_determine_level_bonus_indexEjNS_22ENUM_INPUTITEMS_RARITYENS_15eBindSphereTypeE+0x72>
 832cc2b:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 832cc2e:	8b 55 14             	mov    0x14(%ebp),%edx
 832cc31:	8b 4d 10             	mov    0x10(%ebp),%ecx
 832cc34:	89 c8                	mov    %ecx,%eax
 832cc36:	01 c0                	add    %eax,%eax
 832cc38:	01 c8                	add    %ecx,%eax
 832cc3a:	8d 0c 85 00 00 00 00 	lea    0x0(,%eax,4),%ecx
 832cc41:	89 d0                	mov    %edx,%eax
 832cc43:	01 c0                	add    %eax,%eax
 832cc45:	01 d0                	add    %edx,%eax
 832cc47:	c1 e0 04             	shl    $0x4,%eax
 832cc4a:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 832cc4d:	05 80 0b 00 00       	add    $0xb80,%eax
 832cc52:	03 45 08             	add    0x8(%ebp),%eax
 832cc55:	83 c0 18             	add    $0x18,%eax
 832cc58:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 832cc5c:	89 04 24             	mov    %eax,(%esp)
 832cc5f:	e8 ce 89 dc ff       	call   80f5632 <_ZNKSt6vectorIjSaIjEEixEj>
 832cc64:	8b 00                	mov    (%eax),%eax
 832cc66:	3b 45 0c             	cmp    0xc(%ebp),%eax
 832cc69:	0f 93 c0             	setae  %al
 832cc6c:	84 c0                	test   %al,%al
 832cc6e:	75 45                	jne    832ccb5 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item28_determine_level_bonus_indexEjNS_22ENUM_INPUTITEMS_RARITYENS_15eBindSphereTypeE+0xb3>
 832cc70:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 832cc74:	8b 55 14             	mov    0x14(%ebp),%edx
 832cc77:	8b 4d 10             	mov    0x10(%ebp),%ecx
 832cc7a:	89 c8                	mov    %ecx,%eax
 832cc7c:	01 c0                	add    %eax,%eax
 832cc7e:	01 c8                	add    %ecx,%eax
 832cc80:	8d 0c 85 00 00 00 00 	lea    0x0(,%eax,4),%ecx
 832cc87:	89 d0                	mov    %edx,%eax
 832cc89:	01 c0                	add    %eax,%eax
 832cc8b:	01 d0                	add    %edx,%eax
 832cc8d:	c1 e0 04             	shl    $0x4,%eax
 832cc90:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 832cc93:	05 80 0b 00 00       	add    $0xb80,%eax
 832cc98:	03 45 08             	add    0x8(%ebp),%eax
 832cc9b:	83 c0 18             	add    $0x18,%eax
 832cc9e:	89 04 24             	mov    %eax,(%esp)
 832cca1:	e8 bc 57 db ff       	call   80e2462 <_ZNKSt6vectorIjSaIjEE4sizeEv>
 832cca6:	85 c0                	test   %eax,%eax
 832cca8:	0f 95 c0             	setne  %al
 832ccab:	84 c0                	test   %al,%al
 832ccad:	0f 85 78 ff ff ff    	jne    832cc2b <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item28_determine_level_bonus_indexEjNS_22ENUM_INPUTITEMS_RARITYENS_15eBindSphereTypeE+0x29>
 832ccb3:	eb 01                	jmp    832ccb6 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item28_determine_level_bonus_indexEjNS_22ENUM_INPUTITEMS_RARITYENS_15eBindSphereTypeE+0xb4>
 832ccb5:	90                   	nop
 832ccb6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 832ccb9:	83 c4 24             	add    $0x24,%esp
 832ccbc:	5b                   	pop    %ebx
 832ccbd:	5d                   	pop    %ebp
 832ccbe:	c3                   	ret
 832ccbf:	90                   	nop

```

```c
// ExtreamDungeon::CCompound_ExtreamDun_Item::_determine_level_bonus_index @ 0x832cc02

/* ExtreamDungeon::CCompound_ExtreamDun_Item::_determine_level_bonus_index(unsigned int,
   ExtreamDungeon::ENUM_INPUTITEMS_RARITY, ExtreamDungeon::eBindSphereType) const */

uint __thiscall
ExtreamDungeon::CCompound_ExtreamDun_Item::_determine_level_bonus_index
          (CCompound_ExtreamDun_Item *this,uint param_1,int param_3,int param_4)

{
  uint *puVar1;
  int iVar2;
  uint local_10;
  
  if ((param_3 < 0) || (2 < param_3)) {
    local_10 = 0;
  }
  else {
    local_10 = 0;
    while ((iVar2 = std::vector<unsigned_int,std::allocator<unsigned_int>>::size
                              ((vector<unsigned_int,std::allocator<unsigned_int>> *)
                               (this + param_3 * 0xc + param_4 * 0x30 + 0xb98)), iVar2 != 0 &&
           (puVar1 = (uint *)std::vector<unsigned_int,std::allocator<unsigned_int>>::operator[]
                                       ((vector<unsigned_int,std::allocator<unsigned_int>> *)
                                        (this + param_3 * 0xc + param_4 * 0x30 + 0xb98),local_10),
           *puVar1 < param_1))) {
      local_10 = local_10 + 1;
    }
  }
  return local_10;
}

```

---

## _determine_rarity

```asm
// === 0832c976 ExtreamDungeon::CCompound_ExtreamDun_Item::_determine_rarity  [0x0832c976-0x832c9c9] ===
 832c976:	55                   	push   %ebp
 832c977:	89 e5                	mov    %esp,%ebp
 832c979:	83 ec 10             	sub    $0x10,%esp
 832c97c:	8b 45 10             	mov    0x10(%ebp),%eax
 832c97f:	85 c0                	test   %eax,%eax
 832c981:	78 08                	js     832c98b <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item17_determine_rarityEjNS_22ENUM_INPUTITEMS_RARITYE+0x15>
 832c983:	8b 45 10             	mov    0x10(%ebp),%eax
 832c986:	83 f8 02             	cmp    $0x2,%eax
 832c989:	7e 07                	jle    832c992 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item17_determine_rarityEjNS_22ENUM_INPUTITEMS_RARITYE+0x1c>
 832c98b:	b8 00 00 00 00       	mov    $0x0,%eax
 832c990:	eb 36                	jmp    832c9c8 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item17_determine_rarityEjNS_22ENUM_INPUTITEMS_RARITYE+0x52>
 832c992:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 832c999:	eb 1c                	jmp    832c9b7 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item17_determine_rarityEjNS_22ENUM_INPUTITEMS_RARITYE+0x41>
 832c99b:	8b 4d 10             	mov    0x10(%ebp),%ecx
 832c99e:	8b 55 fc             	mov    -0x4(%ebp),%edx
 832c9a1:	8b 45 08             	mov    0x8(%ebp),%eax
 832c9a4:	c1 e1 02             	shl    $0x2,%ecx
 832c9a7:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 832c9aa:	8b 44 90 04          	mov    0x4(%eax,%edx,4),%eax
 832c9ae:	3b 45 0c             	cmp    0xc(%ebp),%eax
 832c9b1:	73 11                	jae    832c9c4 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item17_determine_rarityEjNS_22ENUM_INPUTITEMS_RARITYE+0x4e>
 832c9b3:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 832c9b7:	83 7d fc 03          	cmpl   $0x3,-0x4(%ebp)
 832c9bb:	0f 9e c0             	setle  %al
 832c9be:	84 c0                	test   %al,%al
 832c9c0:	75 d9                	jne    832c99b <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item17_determine_rarityEjNS_22ENUM_INPUTITEMS_RARITYE+0x25>
 832c9c2:	eb 01                	jmp    832c9c5 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item17_determine_rarityEjNS_22ENUM_INPUTITEMS_RARITYE+0x4f>
 832c9c4:	90                   	nop
 832c9c5:	8b 45 fc             	mov    -0x4(%ebp),%eax
 832c9c8:	c9                   	leave
 832c9c9:	c3                   	ret

```

```c
// ExtreamDungeon::CCompound_ExtreamDun_Item::_determine_rarity @ 0x832c976

/* ExtreamDungeon::CCompound_ExtreamDun_Item::_determine_rarity(unsigned int,
   ExtreamDungeon::ENUM_INPUTITEMS_RARITY) const */

int __thiscall
ExtreamDungeon::CCompound_ExtreamDun_Item::_determine_rarity
          (CCompound_ExtreamDun_Item *this,uint param_1,int param_3)

{
  int local_8;
  
  if ((param_3 < 0) || (2 < param_3)) {
    local_8 = 0;
  }
  else {
    local_8 = 0;
    while ((local_8 < 4 && (*(uint *)(this + (param_3 * 4 + local_8) * 4 + 4) < param_1))) {
      local_8 = local_8 + 1;
    }
  }
  return local_8;
}

```

---

## _exception_Rare

```asm
// === 0832cffe ExtreamDungeon::CCompound_ExtreamDun_Item::_exception_Rare  [0x0832cffe-0x832d15d] ===
 832cffe:	55                   	push   %ebp
 832cfff:	89 e5                	mov    %esp,%ebp
 832d001:	53                   	push   %ebx
 832d002:	83 ec 64             	sub    $0x64,%esp
 832d005:	8b 45 10             	mov    0x10(%ebp),%eax
 832d008:	88 45 c4             	mov    %al,-0x3c(%ebp)
 832d00b:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 832d012:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 832d019:	e9 28 01 00 00       	jmp    832d146 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item15_exception_RareEPPK10CEquipItemcNS_23ENUM_OUTPUTITEMS_RARITYEj+0x148>
 832d01e:	8b 45 14             	mov    0x14(%ebp),%eax
 832d021:	89 45 f4             	mov    %eax,-0xc(%ebp)
 832d024:	e9 09 01 00 00       	jmp    832d132 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item15_exception_RareEPPK10CEquipItemcNS_23ENUM_OUTPUTITEMS_RARITYEj+0x134>
 832d029:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 832d02d:	0f 8f 83 00 00 00    	jg     832d0b6 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item15_exception_RareEPPK10CEquipItemcNS_23ENUM_OUTPUTITEMS_RARITYEj+0xb8>
 832d033:	8b 55 f0             	mov    -0x10(%ebp),%edx
 832d036:	89 d0                	mov    %edx,%eax
 832d038:	c1 e0 02             	shl    $0x2,%eax
 832d03b:	01 d0                	add    %edx,%eax
 832d03d:	03 45 18             	add    0x18(%ebp),%eax
 832d040:	83 c0 05             	add    $0x5,%eax
 832d043:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 832d046:	8b 55 f0             	mov    -0x10(%ebp),%edx
 832d049:	89 d0                	mov    %edx,%eax
 832d04b:	c1 e0 02             	shl    $0x2,%eax
 832d04e:	01 d0                	add    %edx,%eax
 832d050:	03 45 18             	add    0x18(%ebp),%eax
 832d053:	83 c0 01             	add    $0x1,%eax
 832d056:	89 45 d8             	mov    %eax,-0x28(%ebp)
 832d059:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 832d05c:	89 44 24 08          	mov    %eax,0x8(%esp)
 832d060:	8d 45 d8             	lea    -0x28(%ebp),%eax
 832d063:	89 44 24 04          	mov    %eax,0x4(%esp)
 832d067:	8d 45 cc             	lea    -0x34(%ebp),%eax
 832d06a:	89 04 24             	mov    %eax,(%esp)
 832d06d:	e8 18 15 00 00       	call   832e58a <_ZNSt4pairIjjEC1IjjEEOT_OT0_>
 832d072:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 832d075:	0f be 4d c4          	movsbl -0x3c(%ebp),%ecx
 832d079:	8b 45 cc             	mov    -0x34(%ebp),%eax
 832d07c:	8b 55 d0             	mov    -0x30(%ebp),%edx
 832d07f:	89 44 24 10          	mov    %eax,0x10(%esp)
 832d083:	89 54 24 14          	mov    %edx,0x14(%esp)
 832d087:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 832d08b:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 832d08f:	8b 45 0c             	mov    0xc(%ebp),%eax
 832d092:	89 44 24 04          	mov    %eax,0x4(%esp)
 832d096:	8b 45 08             	mov    0x8(%ebp),%eax
 832d099:	89 04 24             	mov    %eax,(%esp)
 832d09c:	e8 97 03 00 00       	call   832d438 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item23_FindItemAll_BindSphereEPPK10CEquipItemcNS_23ENUM_OUTPUTITEMS_RARITYESt4pairIjjE>
 832d0a1:	89 45 ec             	mov    %eax,-0x14(%ebp)
 832d0a4:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 832d0a8:	0f 84 80 00 00 00    	je     832d12e <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item15_exception_RareEPPK10CEquipItemcNS_23ENUM_OUTPUTITEMS_RARITYEj+0x130>
 832d0ae:	8b 45 ec             	mov    -0x14(%ebp),%eax
 832d0b1:	e9 a2 00 00 00       	jmp    832d158 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item15_exception_RareEPPK10CEquipItemcNS_23ENUM_OUTPUTITEMS_RARITYEj+0x15a>
 832d0b6:	83 7d f4 01          	cmpl   $0x1,-0xc(%ebp)
 832d0ba:	7e 72                	jle    832d12e <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item15_exception_RareEPPK10CEquipItemcNS_23ENUM_OUTPUTITEMS_RARITYEj+0x130>
 832d0bc:	8b 55 f0             	mov    -0x10(%ebp),%edx
 832d0bf:	89 d0                	mov    %edx,%eax
 832d0c1:	c1 e0 02             	shl    $0x2,%eax
 832d0c4:	01 d0                	add    %edx,%eax
 832d0c6:	03 45 18             	add    0x18(%ebp),%eax
 832d0c9:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 832d0cc:	8b 45 f0             	mov    -0x10(%ebp),%eax
 832d0cf:	8b 55 18             	mov    0x18(%ebp),%edx
 832d0d2:	8d 04 02             	lea    (%edx,%eax,1),%eax
 832d0d5:	89 45 e8             	mov    %eax,-0x18(%ebp)
 832d0d8:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 832d0db:	89 44 24 08          	mov    %eax,0x8(%esp)
 832d0df:	8d 45 e8             	lea    -0x18(%ebp),%eax
 832d0e2:	89 44 24 04          	mov    %eax,0x4(%esp)
 832d0e6:	8d 45 dc             	lea    -0x24(%ebp),%eax
 832d0e9:	89 04 24             	mov    %eax,(%esp)
 832d0ec:	e8 99 14 00 00       	call   832e58a <_ZNSt4pairIjjEC1IjjEEOT_OT0_>
 832d0f1:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 832d0f4:	0f be 4d c4          	movsbl -0x3c(%ebp),%ecx
 832d0f8:	8b 45 dc             	mov    -0x24(%ebp),%eax
 832d0fb:	8b 55 e0             	mov    -0x20(%ebp),%edx
 832d0fe:	89 44 24 10          	mov    %eax,0x10(%esp)
 832d102:	89 54 24 14          	mov    %edx,0x14(%esp)
 832d106:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 832d10a:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 832d10e:	8b 45 0c             	mov    0xc(%ebp),%eax
 832d111:	89 44 24 04          	mov    %eax,0x4(%esp)
 832d115:	8b 45 08             	mov    0x8(%ebp),%eax
 832d118:	89 04 24             	mov    %eax,(%esp)
 832d11b:	e8 18 03 00 00       	call   832d438 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item23_FindItemAll_BindSphereEPPK10CEquipItemcNS_23ENUM_OUTPUTITEMS_RARITYESt4pairIjjE>
 832d120:	89 45 ec             	mov    %eax,-0x14(%ebp)
 832d123:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 832d127:	74 05                	je     832d12e <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item15_exception_RareEPPK10CEquipItemcNS_23ENUM_OUTPUTITEMS_RARITYEj+0x130>
 832d129:	8b 45 ec             	mov    -0x14(%ebp),%eax
 832d12c:	eb 2a                	jmp    832d158 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item15_exception_RareEPPK10CEquipItemcNS_23ENUM_OUTPUTITEMS_RARITYEj+0x15a>
 832d12e:	83 6d f4 01          	subl   $0x1,-0xc(%ebp)
 832d132:	8b 45 f4             	mov    -0xc(%ebp),%eax
 832d135:	f7 d0                	not    %eax
 832d137:	c1 e8 1f             	shr    $0x1f,%eax
 832d13a:	84 c0                	test   %al,%al
 832d13c:	0f 85 e7 fe ff ff    	jne    832d029 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item15_exception_RareEPPK10CEquipItemcNS_23ENUM_OUTPUTITEMS_RARITYEj+0x2b>
 832d142:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 832d146:	83 7d f0 01          	cmpl   $0x1,-0x10(%ebp)
 832d14a:	0f 96 c0             	setbe  %al
 832d14d:	84 c0                	test   %al,%al
 832d14f:	0f 85 c9 fe ff ff    	jne    832d01e <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item15_exception_RareEPPK10CEquipItemcNS_23ENUM_OUTPUTITEMS_RARITYEj+0x20>
 832d155:	8b 45 ec             	mov    -0x14(%ebp),%eax
 832d158:	83 c4 64             	add    $0x64,%esp
 832d15b:	5b                   	pop    %ebx
 832d15c:	5d                   	pop    %ebp
 832d15d:	c3                   	ret

```

```c
// ExtreamDungeon::CCompound_ExtreamDun_Item::_exception_Rare @ 0x832cffe

/* ExtreamDungeon::CCompound_ExtreamDun_Item::_exception_Rare(CEquipItem const**, char,
   ExtreamDungeon::ENUM_OUTPUTITEMS_RARITY, unsigned int) const */

int __thiscall
ExtreamDungeon::CCompound_ExtreamDun_Item::_exception_Rare
          (CCompound_ExtreamDun_Item *this,undefined4 param_1,char param_2,int param_4,int param_5)

{
  undefined4 local_38;
  undefined4 local_34;
  uint local_30;
  uint local_2c;
  undefined4 local_28;
  undefined4 local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  int local_10;
  
  local_18 = 0;
  local_14 = 0;
  do {
    if (1 < local_14) {
      return local_18;
    }
    for (local_10 = param_4; -1 < local_10; local_10 = local_10 + -1) {
      if (local_10 < 1) {
        local_30 = local_14 * 5 + param_5 + 5;
        local_2c = local_14 * 5 + param_5 + 1;
        std::pair<unsigned_int,unsigned_int>::pair<unsigned_int,unsigned_int>
                  ((pair<unsigned_int,unsigned_int> *)&local_38,&local_2c,&local_30);
        local_18 = _FindItemAll_BindSphere(this,param_1,(int)param_2,local_10,local_38,local_34);
joined_r0x0832d127:
        if (local_18 != 0) {
          return local_18;
        }
      }
      else if (1 < local_10) {
        local_20 = local_14 * 5 + param_5;
        local_1c = param_5 + local_14;
        std::pair<unsigned_int,unsigned_int>::pair<unsigned_int,unsigned_int>
                  ((pair<unsigned_int,unsigned_int> *)&local_28,&local_1c,&local_20);
        local_18 = _FindItemAll_BindSphere(this,param_1,(int)param_2,local_10,local_28,local_24);
        goto joined_r0x0832d127;
      }
    }
    local_14 = local_14 + 1;
  } while( true );
}

```

---

## _isPossibleResultItem

```asm
// === 0832db4e ExtreamDungeon::CCompound_ExtreamDun_Item::_isPossibleResultItem  [0x0832db4e-0x832dd1b] ===
 832db4e:	55                   	push   %ebp
 832db4f:	89 e5                	mov    %esp,%ebp
 832db51:	83 ec 38             	sub    $0x38,%esp
 832db54:	8b 45 0c             	mov    0xc(%ebp),%eax
 832db57:	89 04 24             	mov    %eax,(%esp)
 832db5a:	e8 b3 37 dc ff       	call   80f1312 <_ZNK5CItem16getItemGroupNameEv>
 832db5f:	83 f8 3a             	cmp    $0x3a,%eax
 832db62:	77 0f                	ja     832db73 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item21_isPossibleResultItemER10CEquipItem+0x25>
 832db64:	8b 45 0c             	mov    0xc(%ebp),%eax
 832db67:	89 04 24             	mov    %eax,(%esp)
 832db6a:	e8 a3 37 dc ff       	call   80f1312 <_ZNK5CItem16getItemGroupNameEv>
 832db6f:	85 c0                	test   %eax,%eax
 832db71:	7f 07                	jg     832db7a <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item21_isPossibleResultItemER10CEquipItem+0x2c>
 832db73:	b8 01 00 00 00       	mov    $0x1,%eax
 832db78:	eb 05                	jmp    832db7f <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item21_isPossibleResultItemER10CEquipItem+0x31>
 832db7a:	b8 00 00 00 00       	mov    $0x0,%eax
 832db7f:	84 c0                	test   %al,%al
 832db81:	74 0a                	je     832db8d <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item21_isPossibleResultItemER10CEquipItem+0x3f>
 832db83:	b8 00 00 00 00       	mov    $0x0,%eax
 832db88:	e9 8c 01 00 00       	jmp    832dd19 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item21_isPossibleResultItemER10CEquipItem+0x1cb>
 832db8d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 832db90:	89 04 24             	mov    %eax,(%esp)
 832db93:	e8 c0 0c 00 00       	call   832e858 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiN14ExtreamDungeon20forceRule_ResultItemEEEC1Ev>
 832db98:	8b 45 08             	mov    0x8(%ebp),%eax
 832db9b:	8d 90 74 0b 00 00    	lea    0xb74(%eax),%edx
 832dba1:	8d 45 f0             	lea    -0x10(%ebp),%eax
 832dba4:	89 54 24 04          	mov    %edx,0x4(%esp)
 832dba8:	89 04 24             	mov    %eax,(%esp)
 832dbab:	e8 e2 0c 00 00       	call   832e892 <_ZNKSt3mapIiN14ExtreamDungeon20forceRule_ResultItemESt4lessIiESaISt4pairIKiS1_EEE3endEv>
 832dbb0:	83 ec 04             	sub    $0x4,%esp
 832dbb3:	8b 45 0c             	mov    0xc(%ebp),%eax
 832dbb6:	89 04 24             	mov    %eax,(%esp)
 832dbb9:	e8 8a 30 de ff       	call   8110c48 <_ZNK5CItem9get_indexEv>
 832dbbe:	89 45 f4             	mov    %eax,-0xc(%ebp)
 832dbc1:	8b 45 08             	mov    0x8(%ebp),%eax
 832dbc4:	8d 88 74 0b 00 00    	lea    0xb74(%eax),%ecx
 832dbca:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 832dbcd:	8d 55 f4             	lea    -0xc(%ebp),%edx
 832dbd0:	89 54 24 08          	mov    %edx,0x8(%esp)
 832dbd4:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 832dbd8:	89 04 24             	mov    %eax,(%esp)
 832dbdb:	e8 86 0c 00 00       	call   832e866 <_ZNKSt3mapIiN14ExtreamDungeon20forceRule_ResultItemESt4lessIiESaISt4pairIKiS1_EEE4findERS5_>
 832dbe0:	83 ec 04             	sub    $0x4,%esp
 832dbe3:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 832dbe6:	89 45 ec             	mov    %eax,-0x14(%ebp)
 832dbe9:	8d 45 f0             	lea    -0x10(%ebp),%eax
 832dbec:	89 44 24 04          	mov    %eax,0x4(%esp)
 832dbf0:	8d 45 ec             	lea    -0x14(%ebp),%eax
 832dbf3:	89 04 24             	mov    %eax,(%esp)
 832dbf6:	e8 bd 0c 00 00       	call   832e8b8 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiN14ExtreamDungeon20forceRule_ResultItemEEEneERKS5_>
 832dbfb:	84 c0                	test   %al,%al
 832dbfd:	74 3d                	je     832dc3c <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item21_isPossibleResultItemER10CEquipItem+0xee>
 832dbff:	8d 45 ec             	lea    -0x14(%ebp),%eax
 832dc02:	89 04 24             	mov    %eax,(%esp)
 832dc05:	e8 c2 0c 00 00       	call   832e8cc <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiN14ExtreamDungeon20forceRule_ResultItemEEEptEv>
 832dc0a:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 832dc0e:	84 c0                	test   %al,%al
 832dc10:	74 0a                	je     832dc1c <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item21_isPossibleResultItemER10CEquipItem+0xce>
 832dc12:	b8 00 00 00 00       	mov    $0x0,%eax
 832dc17:	e9 fd 00 00 00       	jmp    832dd19 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item21_isPossibleResultItemER10CEquipItem+0x1cb>
 832dc1c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 832dc1f:	89 04 24             	mov    %eax,(%esp)
 832dc22:	e8 a5 0c 00 00       	call   832e8cc <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiN14ExtreamDungeon20forceRule_ResultItemEEEptEv>
 832dc27:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 832dc2b:	83 f0 01             	xor    $0x1,%eax
 832dc2e:	84 c0                	test   %al,%al
 832dc30:	74 0a                	je     832dc3c <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item21_isPossibleResultItemER10CEquipItem+0xee>
 832dc32:	b8 01 00 00 00       	mov    $0x1,%eax
 832dc37:	e9 dd 00 00 00       	jmp    832dd19 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item21_isPossibleResultItemER10CEquipItem+0x1cb>
 832dc3c:	8b 45 0c             	mov    0xc(%ebp),%eax
 832dc3f:	89 04 24             	mov    %eax,(%esp)
 832dc42:	e8 ef 03 00 00       	call   832e036 <_ZNK10CEquipItem22GetUsableEquipmentTypeEv>
 832dc47:	89 44 24 04          	mov    %eax,0x4(%esp)
 832dc4b:	8b 45 08             	mov    0x8(%ebp),%eax
 832dc4e:	89 04 24             	mov    %eax,(%esp)
 832dc51:	e8 ca e9 ff ff       	call   832c620 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item17_convertInputItemE28ENUM_UNUSABLE_EQUIPMENT_TYPE>
 832dc56:	83 f8 02             	cmp    $0x2,%eax
 832dc59:	75 27                	jne    832dc82 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item21_isPossibleResultItemER10CEquipItem+0x134>
 832dc5b:	8b 45 0c             	mov    0xc(%ebp),%eax
 832dc5e:	89 04 24             	mov    %eax,(%esp)
 832dc61:	e8 ac 36 dc ff       	call   80f1312 <_ZNK5CItem16getItemGroupNameEv>
 832dc66:	83 f8 19             	cmp    $0x19,%eax
 832dc69:	7e 17                	jle    832dc82 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item21_isPossibleResultItemER10CEquipItem+0x134>
 832dc6b:	8b 45 0c             	mov    0xc(%ebp),%eax
 832dc6e:	89 04 24             	mov    %eax,(%esp)
 832dc71:	e8 9c 36 dc ff       	call   80f1312 <_ZNK5CItem16getItemGroupNameEv>
 832dc76:	83 f8 32             	cmp    $0x32,%eax
 832dc79:	7f 07                	jg     832dc82 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item21_isPossibleResultItemER10CEquipItem+0x134>
 832dc7b:	b8 01 00 00 00       	mov    $0x1,%eax
 832dc80:	eb 05                	jmp    832dc87 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item21_isPossibleResultItemER10CEquipItem+0x139>
 832dc82:	b8 00 00 00 00       	mov    $0x0,%eax
 832dc87:	84 c0                	test   %al,%al
 832dc89:	74 0a                	je     832dc95 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item21_isPossibleResultItemER10CEquipItem+0x147>
 832dc8b:	b8 00 00 00 00       	mov    $0x0,%eax
 832dc90:	e9 84 00 00 00       	jmp    832dd19 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item21_isPossibleResultItemER10CEquipItem+0x1cb>
 832dc95:	8b 45 0c             	mov    0xc(%ebp),%eax
 832dc98:	89 04 24             	mov    %eax,(%esp)
 832dc9b:	e8 4e 36 dc ff       	call   80f12ee <_ZNK5CItem14getUsableLevelEv>
 832dca0:	83 f8 46             	cmp    $0x46,%eax
 832dca3:	0f 9f c0             	setg   %al
 832dca6:	84 c0                	test   %al,%al
 832dca8:	74 07                	je     832dcb1 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item21_isPossibleResultItemER10CEquipItem+0x163>
 832dcaa:	b8 00 00 00 00       	mov    $0x0,%eax
 832dcaf:	eb 68                	jmp    832dd19 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item21_isPossibleResultItemER10CEquipItem+0x1cb>
 832dcb1:	8b 45 0c             	mov    0xc(%ebp),%eax
 832dcb4:	89 04 24             	mov    %eax,(%esp)
 832dcb7:	e8 6e 03 00 00       	call   832e02a <_ZNK5CItem12get_gen_rateEv>
 832dcbc:	85 c0                	test   %eax,%eax
 832dcbe:	0f 94 c0             	sete   %al
 832dcc1:	84 c0                	test   %al,%al
 832dcc3:	74 32                	je     832dcf7 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item21_isPossibleResultItemER10CEquipItem+0x1a9>
 832dcc5:	8b 45 0c             	mov    0xc(%ebp),%eax
 832dcc8:	89 04 24             	mov    %eax,(%esp)
 832dccb:	e8 66 03 00 00       	call   832e036 <_ZNK10CEquipItem22GetUsableEquipmentTypeEv>
 832dcd0:	89 44 24 04          	mov    %eax,0x4(%esp)
 832dcd4:	8b 45 08             	mov    0x8(%ebp),%eax
 832dcd7:	89 04 24             	mov    %eax,(%esp)
 832dcda:	e8 41 e9 ff ff       	call   832c620 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item17_convertInputItemE28ENUM_UNUSABLE_EQUIPMENT_TYPE>
 832dcdf:	83 f8 01             	cmp    $0x1,%eax
 832dce2:	0f 94 c0             	sete   %al
 832dce5:	84 c0                	test   %al,%al
 832dce7:	74 07                	je     832dcf0 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item21_isPossibleResultItemER10CEquipItem+0x1a2>
 832dce9:	b8 01 00 00 00       	mov    $0x1,%eax
 832dcee:	eb 29                	jmp    832dd19 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item21_isPossibleResultItemER10CEquipItem+0x1cb>
 832dcf0:	b8 00 00 00 00       	mov    $0x0,%eax
 832dcf5:	eb 22                	jmp    832dd19 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item21_isPossibleResultItemER10CEquipItem+0x1cb>
 832dcf7:	8b 45 0c             	mov    0xc(%ebp),%eax
 832dcfa:	8b 00                	mov    (%eax),%eax
 832dcfc:	83 c0 4c             	add    $0x4c,%eax
 832dcff:	8b 10                	mov    (%eax),%edx
 832dd01:	8b 45 0c             	mov    0xc(%ebp),%eax
 832dd04:	89 04 24             	mov    %eax,(%esp)
 832dd07:	ff d2                	call   *%edx
 832dd09:	84 c0                	test   %al,%al
 832dd0b:	74 07                	je     832dd14 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item21_isPossibleResultItemER10CEquipItem+0x1c6>
 832dd0d:	b8 00 00 00 00       	mov    $0x0,%eax
 832dd12:	eb 05                	jmp    832dd19 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item21_isPossibleResultItemER10CEquipItem+0x1cb>
 832dd14:	b8 01 00 00 00       	mov    $0x1,%eax
 832dd19:	c9                   	leave
 832dd1a:	c3                   	ret
 832dd1b:	90                   	nop

```

```c
// ExtreamDungeon::CCompound_ExtreamDun_Item::_isPossibleResultItem @ 0x832db4e

/* ExtreamDungeon::CCompound_ExtreamDun_Item::_isPossibleResultItem(CEquipItem&) const */

undefined4 __thiscall
ExtreamDungeon::CCompound_ExtreamDun_Item::_isPossibleResultItem
          (CCompound_ExtreamDun_Item *this,CEquipItem *param_1)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int local_20 [2];
  int local_18;
  map<int,ExtreamDungeon::forceRule_ResultItem,std::less<int>,std::allocator<std::pair<int_const,ExtreamDungeon::forceRule_ResultItem>>>
  local_14 [4];
  undefined4 local_10 [3];
  
  uVar3 = CItem::getItemGroupName((CItem *)param_1);
  if ((uVar3 < 0x3b) && (iVar4 = CItem::getItemGroupName((CItem *)param_1), 0 < iVar4)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    return 0;
  }
  std::_Rb_tree_const_iterator<std::pair<int_const,ExtreamDungeon::forceRule_ResultItem>>::
  _Rb_tree_const_iterator
            ((_Rb_tree_const_iterator<std::pair<int_const,ExtreamDungeon::forceRule_ResultItem>> *)
             &local_18);
  std::
  map<int,ExtreamDungeon::forceRule_ResultItem,std::less<int>,std::allocator<std::pair<int_const,ExtreamDungeon::forceRule_ResultItem>>>
  ::end(local_14);
  local_10[0] = CItem::get_index((CItem *)param_1);
  puVar6 = local_10;
  std::
  map<int,ExtreamDungeon::forceRule_ResultItem,std::less<int>,std::allocator<std::pair<int_const,ExtreamDungeon::forceRule_ResultItem>>>
  ::find(local_20);
  local_18 = local_20[0];
  cVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,ExtreamDungeon::forceRule_ResultItem>>::
          operator!=((_Rb_tree_const_iterator<std::pair<int_const,ExtreamDungeon::forceRule_ResultItem>>
                      *)&local_18,(_Rb_tree_const_iterator *)local_14);
  if (cVar2 != '\0') {
    iVar4 = std::_Rb_tree_const_iterator<std::pair<int_const,ExtreamDungeon::forceRule_ResultItem>>
            ::operator->((_Rb_tree_const_iterator<std::pair<int_const,ExtreamDungeon::forceRule_ResultItem>>
                          *)&local_18);
    if (*(char *)(iVar4 + 4) != '\0') {
      return 0;
    }
    iVar4 = std::_Rb_tree_const_iterator<std::pair<int_const,ExtreamDungeon::forceRule_ResultItem>>
            ::operator->((_Rb_tree_const_iterator<std::pair<int_const,ExtreamDungeon::forceRule_ResultItem>>
                          *)&local_18);
    if (*(char *)(iVar4 + 4) != '\x01') {
      return 1;
    }
  }
  uVar5 = CEquipItem::GetUsableEquipmentType(param_1);
  iVar4 = _convertInputItem(this,uVar5,puVar6);
  if (((iVar4 == 2) && (iVar4 = CItem::getItemGroupName((CItem *)param_1), 0x19 < iVar4)) &&
     (iVar4 = CItem::getItemGroupName((CItem *)param_1), iVar4 < 0x33)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    uVar5 = 0;
  }
  else {
    iVar4 = CItem::getUsableLevel((CItem *)param_1);
    if (iVar4 < 0x47) {
      iVar4 = CItem::get_gen_rate((CItem *)param_1);
      if (iVar4 == 0) {
        uVar5 = CEquipItem::GetUsableEquipmentType(param_1);
        iVar4 = _convertInputItem(this,uVar5);
        if (iVar4 == 1) {
          uVar5 = 1;
        }
        else {
          uVar5 = 0;
        }
      }
      else {
        cVar2 = (**(code **)(*(int *)param_1 + 0x4c))(param_1);
        if (cVar2 == '\0') {
          uVar5 = 1;
        }
        else {
          uVar5 = 0;
        }
      }
    }
    else {
      uVar5 = 0;
    }
  }
  return uVar5;
}

```

---

## after_addItem

```asm
// === 0832de18 ExtreamDungeon::CCompound_ExtreamDun_Item::after_addItem  [0x0832de18-0x832df61] ===
 832de18:	55                   	push   %ebp
 832de19:	89 e5                	mov    %esp,%ebp
 832de1b:	83 ec 38             	sub    $0x38,%esp
 832de1e:	c7 45 ec 01 00 00 00 	movl   $0x1,-0x14(%ebp)
 832de25:	e9 a9 00 00 00       	jmp    832ded3 <_ZN14ExtreamDungeon25CCompound_ExtreamDun_Item13after_addItemEv+0xbb>
 832de2a:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 832de31:	e9 8a 00 00 00       	jmp    832dec0 <_ZN14ExtreamDungeon25CCompound_ExtreamDun_Item13after_addItemEv+0xa8>
 832de36:	8b 55 ec             	mov    -0x14(%ebp),%edx
 832de39:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 832de3c:	89 c8                	mov    %ecx,%eax
 832de3e:	01 c0                	add    %eax,%eax
 832de40:	01 c8                	add    %ecx,%eax
 832de42:	8d 0c 85 00 00 00 00 	lea    0x0(,%eax,4),%ecx
 832de49:	89 d0                	mov    %edx,%eax
 832de4b:	01 c0                	add    %eax,%eax
 832de4d:	01 d0                	add    %edx,%eax
 832de4f:	c1 e0 04             	shl    $0x4,%eax
 832de52:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 832de55:	83 c0 30             	add    $0x30,%eax
 832de58:	03 45 08             	add    0x8(%ebp),%eax
 832de5b:	8d 50 04             	lea    0x4(%eax),%edx
 832de5e:	8d 45 dc             	lea    -0x24(%ebp),%eax
 832de61:	89 54 24 04          	mov    %edx,0x4(%esp)
 832de65:	89 04 24             	mov    %eax,(%esp)
 832de68:	e8 6d 0c 00 00       	call   832eada <_ZNSt6vectorIN14ExtreamDungeon15OUTPUT_ITEM_STRESaIS1_EE3endEv>
 832de6d:	83 ec 04             	sub    $0x4,%esp
 832de70:	8b 55 ec             	mov    -0x14(%ebp),%edx
 832de73:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 832de76:	89 c8                	mov    %ecx,%eax
 832de78:	01 c0                	add    %eax,%eax
 832de7a:	01 c8                	add    %ecx,%eax
 832de7c:	8d 0c 85 00 00 00 00 	lea    0x0(,%eax,4),%ecx
 832de83:	89 d0                	mov    %edx,%eax
 832de85:	01 c0                	add    %eax,%eax
 832de87:	01 d0                	add    %edx,%eax
 832de89:	c1 e0 04             	shl    $0x4,%eax
 832de8c:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 832de8f:	83 c0 30             	add    $0x30,%eax
 832de92:	03 45 08             	add    0x8(%ebp),%eax
 832de95:	8d 50 04             	lea    0x4(%eax),%edx
 832de98:	8d 45 e0             	lea    -0x20(%ebp),%eax
 832de9b:	89 54 24 04          	mov    %edx,0x4(%esp)
 832de9f:	89 04 24             	mov    %eax,(%esp)
 832dea2:	e8 0f 0c 00 00       	call   832eab6 <_ZNSt6vectorIN14ExtreamDungeon15OUTPUT_ITEM_STRESaIS1_EE5beginEv>
 832dea7:	83 ec 04             	sub    $0x4,%esp
 832deaa:	8b 45 dc             	mov    -0x24(%ebp),%eax
 832dead:	89 44 24 04          	mov    %eax,0x4(%esp)
 832deb1:	8b 45 e0             	mov    -0x20(%ebp),%eax
 832deb4:	89 04 24             	mov    %eax,(%esp)
 832deb7:	e8 44 0c 00 00       	call   832eb00 <_ZSt4sortIN9__gnu_cxx17__normal_iteratorIPN14ExtreamDungeon15OUTPUT_ITEM_STRESt6vectorIS3_SaIS3_EEEEEvT_S9_>
 832debc:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 832dec0:	83 7d f0 03          	cmpl   $0x3,-0x10(%ebp)
 832dec4:	0f 9e c0             	setle  %al
 832dec7:	84 c0                	test   %al,%al
 832dec9:	0f 85 67 ff ff ff    	jne    832de36 <_ZN14ExtreamDungeon25CCompound_ExtreamDun_Item13after_addItemEv+0x1e>
 832decf:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 832ded3:	8b 45 ec             	mov    -0x14(%ebp),%eax
 832ded6:	83 f8 3a             	cmp    $0x3a,%eax
 832ded9:	0f 96 c0             	setbe  %al
 832dedc:	84 c0                	test   %al,%al
 832dede:	0f 85 46 ff ff ff    	jne    832de2a <_ZN14ExtreamDungeon25CCompound_ExtreamDun_Item13after_addItemEv+0x12>
 832dee4:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 832deeb:	eb 68                	jmp    832df55 <_ZN14ExtreamDungeon25CCompound_ExtreamDun_Item13after_addItemEv+0x13d>
 832deed:	8b 55 f4             	mov    -0xc(%ebp),%edx
 832def0:	89 d0                	mov    %edx,%eax
 832def2:	01 c0                	add    %eax,%eax
 832def4:	01 d0                	add    %edx,%eax
 832def6:	c1 e0 02             	shl    $0x2,%eax
 832def9:	05 40 0b 00 00       	add    $0xb40,%eax
 832defe:	03 45 08             	add    0x8(%ebp),%eax
 832df01:	8d 50 04             	lea    0x4(%eax),%edx
 832df04:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 832df07:	89 54 24 04          	mov    %edx,0x4(%esp)
 832df0b:	89 04 24             	mov    %eax,(%esp)
 832df0e:	e8 c7 0b 00 00       	call   832eada <_ZNSt6vectorIN14ExtreamDungeon15OUTPUT_ITEM_STRESaIS1_EE3endEv>
 832df13:	83 ec 04             	sub    $0x4,%esp
 832df16:	8b 55 f4             	mov    -0xc(%ebp),%edx
 832df19:	89 d0                	mov    %edx,%eax
 832df1b:	01 c0                	add    %eax,%eax
 832df1d:	01 d0                	add    %edx,%eax
 832df1f:	c1 e0 02             	shl    $0x2,%eax
 832df22:	05 40 0b 00 00       	add    $0xb40,%eax
 832df27:	03 45 08             	add    0x8(%ebp),%eax
 832df2a:	8d 50 04             	lea    0x4(%eax),%edx
 832df2d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 832df30:	89 54 24 04          	mov    %edx,0x4(%esp)
 832df34:	89 04 24             	mov    %eax,(%esp)
 832df37:	e8 7a 0b 00 00       	call   832eab6 <_ZNSt6vectorIN14ExtreamDungeon15OUTPUT_ITEM_STRESaIS1_EE5beginEv>
 832df3c:	83 ec 04             	sub    $0x4,%esp
 832df3f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 832df42:	89 44 24 04          	mov    %eax,0x4(%esp)
 832df46:	8b 45 e8             	mov    -0x18(%ebp),%eax
 832df49:	89 04 24             	mov    %eax,(%esp)
 832df4c:	e8 af 0b 00 00       	call   832eb00 <_ZSt4sortIN9__gnu_cxx17__normal_iteratorIPN14ExtreamDungeon15OUTPUT_ITEM_STRESt6vectorIS3_SaIS3_EEEEEvT_S9_>
 832df51:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 832df55:	83 7d f4 03          	cmpl   $0x3,-0xc(%ebp)
 832df59:	0f 9e c0             	setle  %al
 832df5c:	84 c0                	test   %al,%al
 832df5e:	75 8d                	jne    832deed <_ZN14ExtreamDungeon25CCompound_ExtreamDun_Item13after_addItemEv+0xd5>
 832df60:	c9                   	leave
 832df61:	c3                   	ret

```

```c
// ExtreamDungeon::CCompound_ExtreamDun_Item::after_addItem @ 0x832de18

/* ExtreamDungeon::CCompound_ExtreamDun_Item::after_addItem() */

void ExtreamDungeon::CCompound_ExtreamDun_Item::after_addItem(void)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  for (local_18 = 1; local_18 < 0x3b; local_18 = local_18 + 1) {
    for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
      std::vector<ExtreamDungeon::OUTPUT_ITEM_STR,std::allocator<ExtreamDungeon::OUTPUT_ITEM_STR>>::
      end();
      std::vector<ExtreamDungeon::OUTPUT_ITEM_STR,std::allocator<ExtreamDungeon::OUTPUT_ITEM_STR>>::
      begin();
      std::
      sort<__gnu_cxx::__normal_iterator<ExtreamDungeon::OUTPUT_ITEM_STR*,std::vector<ExtreamDungeon::OUTPUT_ITEM_STR,std::allocator<ExtreamDungeon::OUTPUT_ITEM_STR>>>>
                (local_24,local_28);
    }
  }
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
    std::vector<ExtreamDungeon::OUTPUT_ITEM_STR,std::allocator<ExtreamDungeon::OUTPUT_ITEM_STR>>::
    end();
    std::vector<ExtreamDungeon::OUTPUT_ITEM_STR,std::allocator<ExtreamDungeon::OUTPUT_ITEM_STR>>::
    begin();
    std::
    sort<__gnu_cxx::__normal_iterator<ExtreamDungeon::OUTPUT_ITEM_STR*,std::vector<ExtreamDungeon::OUTPUT_ITEM_STR,std::allocator<ExtreamDungeon::OUTPUT_ITEM_STR>>>>
              (local_1c,local_20);
  }
  return;
}

```

---

## checkCompoundable

```asm
// === 0832d7d6 ExtreamDungeon::CCompound_ExtreamDun_Item::checkCompoundable  [0x0832d7d6-0x832daff] ===
 832d7d6:	55                   	push   %ebp
 832d7d7:	89 e5                	mov    %esp,%ebp
 832d7d9:	53                   	push   %ebx
 832d7da:	83 ec 34             	sub    $0x34,%esp
 832d7dd:	8b 45 14             	mov    0x14(%ebp),%eax
 832d7e0:	88 45 e4             	mov    %al,-0x1c(%ebp)
 832d7e3:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 832d7ea:	e9 15 02 00 00       	jmp    832da04 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item17checkCompoundableEP10Inven_ItemPPK10CEquipItemc+0x22e>
 832d7ef:	8b 45 f4             	mov    -0xc(%ebp),%eax
 832d7f2:	6b c0 3d             	imul   $0x3d,%eax,%eax
 832d7f5:	03 45 0c             	add    0xc(%ebp),%eax
 832d7f8:	89 04 24             	mov    %eax,(%esp)
 832d7fb:	e8 66 15 df ff       	call   811ed66 <_ZNK10Inven_Item7isEmptyEv>
 832d800:	84 c0                	test   %al,%al
 832d802:	75 0f                	jne    832d813 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item17checkCompoundableEP10Inven_ItemPPK10CEquipItemc+0x3d>
 832d804:	8b 45 f4             	mov    -0xc(%ebp),%eax
 832d807:	c1 e0 02             	shl    $0x2,%eax
 832d80a:	03 45 10             	add    0x10(%ebp),%eax
 832d80d:	8b 00                	mov    (%eax),%eax
 832d80f:	85 c0                	test   %eax,%eax
 832d811:	75 07                	jne    832d81a <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item17checkCompoundableEP10Inven_ItemPPK10CEquipItemc+0x44>
 832d813:	b8 01 00 00 00       	mov    $0x1,%eax
 832d818:	eb 05                	jmp    832d81f <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item17checkCompoundableEP10Inven_ItemPPK10CEquipItemc+0x49>
 832d81a:	b8 00 00 00 00       	mov    $0x0,%eax
 832d81f:	84 c0                	test   %al,%al
 832d821:	74 0a                	je     832d82d <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item17checkCompoundableEP10Inven_ItemPPK10CEquipItemc+0x57>
 832d823:	b8 31 00 00 00       	mov    $0x31,%eax
 832d828:	e9 cc 02 00 00       	jmp    832daf9 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item17checkCompoundableEP10Inven_ItemPPK10CEquipItemc+0x323>
 832d82d:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 832d830:	8b 45 f4             	mov    -0xc(%ebp),%eax
 832d833:	c1 e0 02             	shl    $0x2,%eax
 832d836:	03 45 10             	add    0x10(%ebp),%eax
 832d839:	8b 00                	mov    (%eax),%eax
 832d83b:	89 04 24             	mov    %eax,(%esp)
 832d83e:	e8 f3 07 00 00       	call   832e036 <_ZNK10CEquipItem22GetUsableEquipmentTypeEv>
 832d843:	89 44 24 04          	mov    %eax,0x4(%esp)
 832d847:	8b 45 08             	mov    0x8(%ebp),%eax
 832d84a:	89 04 24             	mov    %eax,(%esp)
 832d84d:	e8 ce ed ff ff       	call   832c620 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item17_convertInputItemE28ENUM_UNUSABLE_EQUIPMENT_TYPE>
 832d852:	89 44 9d ec          	mov    %eax,-0x14(%ebp,%ebx,4)
 832d856:	8b 45 f4             	mov    -0xc(%ebp),%eax
 832d859:	c1 e0 02             	shl    $0x2,%eax
 832d85c:	03 45 10             	add    0x10(%ebp),%eax
 832d85f:	8b 00                	mov    (%eax),%eax
 832d861:	8b 00                	mov    (%eax),%eax
 832d863:	83 c0 4c             	add    $0x4c,%eax
 832d866:	8b 10                	mov    (%eax),%edx
 832d868:	8b 45 f4             	mov    -0xc(%ebp),%eax
 832d86b:	c1 e0 02             	shl    $0x2,%eax
 832d86e:	03 45 10             	add    0x10(%ebp),%eax
 832d871:	8b 00                	mov    (%eax),%eax
 832d873:	89 04 24             	mov    %eax,(%esp)
 832d876:	ff d2                	call   *%edx
 832d878:	84 c0                	test   %al,%al
 832d87a:	74 0a                	je     832d886 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item17checkCompoundableEP10Inven_ItemPPK10CEquipItemc+0xb0>
 832d87c:	b8 07 00 00 00       	mov    $0x7,%eax
 832d881:	e9 73 02 00 00       	jmp    832daf9 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item17checkCompoundableEP10Inven_ItemPPK10CEquipItemc+0x323>
 832d886:	8b 45 f4             	mov    -0xc(%ebp),%eax
 832d889:	8b 44 85 ec          	mov    -0x14(%ebp,%eax,4),%eax
 832d88d:	83 f8 03             	cmp    $0x3,%eax
 832d890:	75 0a                	jne    832d89c <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item17checkCompoundableEP10Inven_ItemPPK10CEquipItemc+0xc6>
 832d892:	b8 17 00 00 00       	mov    $0x17,%eax
 832d897:	e9 5d 02 00 00       	jmp    832daf9 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item17checkCompoundableEP10Inven_ItemPPK10CEquipItemc+0x323>
 832d89c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 832d89f:	8b 44 85 ec          	mov    -0x14(%ebp,%eax,4),%eax
 832d8a3:	83 f8 02             	cmp    $0x2,%eax
 832d8a6:	75 37                	jne    832d8df <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item17checkCompoundableEP10Inven_ItemPPK10CEquipItemc+0x109>
 832d8a8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 832d8ab:	c1 e0 02             	shl    $0x2,%eax
 832d8ae:	03 45 10             	add    0x10(%ebp),%eax
 832d8b1:	8b 00                	mov    (%eax),%eax
 832d8b3:	89 04 24             	mov    %eax,(%esp)
 832d8b6:	e8 57 3a dc ff       	call   80f1312 <_ZNK5CItem16getItemGroupNameEv>
 832d8bb:	83 f8 19             	cmp    $0x19,%eax
 832d8be:	7e 1f                	jle    832d8df <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item17checkCompoundableEP10Inven_ItemPPK10CEquipItemc+0x109>
 832d8c0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 832d8c3:	c1 e0 02             	shl    $0x2,%eax
 832d8c6:	03 45 10             	add    0x10(%ebp),%eax
 832d8c9:	8b 00                	mov    (%eax),%eax
 832d8cb:	89 04 24             	mov    %eax,(%esp)
 832d8ce:	e8 3f 3a dc ff       	call   80f1312 <_ZNK5CItem16getItemGroupNameEv>
 832d8d3:	83 f8 32             	cmp    $0x32,%eax
 832d8d6:	7f 07                	jg     832d8df <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item17checkCompoundableEP10Inven_ItemPPK10CEquipItemc+0x109>
 832d8d8:	b8 01 00 00 00       	mov    $0x1,%eax
 832d8dd:	eb 05                	jmp    832d8e4 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item17checkCompoundableEP10Inven_ItemPPK10CEquipItemc+0x10e>
 832d8df:	b8 00 00 00 00       	mov    $0x0,%eax
 832d8e4:	84 c0                	test   %al,%al
 832d8e6:	74 0a                	je     832d8f2 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item17checkCompoundableEP10Inven_ItemPPK10CEquipItemc+0x11c>
 832d8e8:	b8 17 00 00 00       	mov    $0x17,%eax
 832d8ed:	e9 07 02 00 00       	jmp    832daf9 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item17checkCompoundableEP10Inven_ItemPPK10CEquipItemc+0x323>
 832d8f2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 832d8f5:	6b c0 3d             	imul   $0x3d,%eax,%eax
 832d8f8:	03 45 0c             	add    0xc(%ebp),%eax
 832d8fb:	83 c0 11             	add    $0x11,%eax
 832d8fe:	89 04 24             	mov    %eax,(%esp)
 832d901:	e8 b6 2e e2 ff       	call   81507bc <_ZNK17stAmplifyOption_t12isIdentifiedEv>
 832d906:	83 f0 01             	xor    $0x1,%eax
 832d909:	84 c0                	test   %al,%al
 832d90b:	74 0a                	je     832d917 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item17checkCompoundableEP10Inven_ItemPPK10CEquipItemc+0x141>
 832d90d:	b8 13 00 00 00       	mov    $0x13,%eax
 832d912:	e9 e2 01 00 00       	jmp    832daf9 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item17checkCompoundableEP10Inven_ItemPPK10CEquipItemc+0x323>
 832d917:	8b 45 f4             	mov    -0xc(%ebp),%eax
 832d91a:	6b c0 3d             	imul   $0x3d,%eax,%eax
 832d91d:	03 45 0c             	add    0xc(%ebp),%eax
 832d920:	0f b6 00             	movzbl (%eax),%eax
 832d923:	83 f0 01             	xor    $0x1,%eax
 832d926:	84 c0                	test   %al,%al
 832d928:	74 0a                	je     832d934 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item17checkCompoundableEP10Inven_ItemPPK10CEquipItemc+0x15e>
 832d92a:	b8 12 00 00 00       	mov    $0x12,%eax
 832d92f:	e9 c5 01 00 00       	jmp    832daf9 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item17checkCompoundableEP10Inven_ItemPPK10CEquipItemc+0x323>
 832d934:	8b 45 f4             	mov    -0xc(%ebp),%eax
 832d937:	c1 e0 02             	shl    $0x2,%eax
 832d93a:	03 45 10             	add    0x10(%ebp),%eax
 832d93d:	8b 00                	mov    (%eax),%eax
 832d93f:	89 04 24             	mov    %eax,(%esp)
 832d942:	e8 cb 39 dc ff       	call   80f1312 <_ZNK5CItem16getItemGroupNameEv>
 832d947:	85 c0                	test   %eax,%eax
 832d949:	7e 18                	jle    832d963 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item17checkCompoundableEP10Inven_ItemPPK10CEquipItemc+0x18d>
 832d94b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 832d94e:	c1 e0 02             	shl    $0x2,%eax
 832d951:	03 45 10             	add    0x10(%ebp),%eax
 832d954:	8b 00                	mov    (%eax),%eax
 832d956:	89 04 24             	mov    %eax,(%esp)
 832d959:	e8 b4 39 dc ff       	call   80f1312 <_ZNK5CItem16getItemGroupNameEv>
 832d95e:	83 f8 3a             	cmp    $0x3a,%eax
 832d961:	76 07                	jbe    832d96a <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item17checkCompoundableEP10Inven_ItemPPK10CEquipItemc+0x194>
 832d963:	b8 01 00 00 00       	mov    $0x1,%eax
 832d968:	eb 05                	jmp    832d96f <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item17checkCompoundableEP10Inven_ItemPPK10CEquipItemc+0x199>
 832d96a:	b8 00 00 00 00       	mov    $0x0,%eax
 832d96f:	84 c0                	test   %al,%al
 832d971:	74 0a                	je     832d97d <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item17checkCompoundableEP10Inven_ItemPPK10CEquipItemc+0x1a7>
 832d973:	b8 11 00 00 00       	mov    $0x11,%eax
 832d978:	e9 7c 01 00 00       	jmp    832daf9 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item17checkCompoundableEP10Inven_ItemPPK10CEquipItemc+0x323>
 832d97d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 832d980:	c1 e0 02             	shl    $0x2,%eax
 832d983:	03 45 10             	add    0x10(%ebp),%eax
 832d986:	8b 00                	mov    (%eax),%eax
 832d988:	89 04 24             	mov    %eax,(%esp)
 832d98b:	e8 52 39 dc ff       	call   80f12e2 <_ZNK5CItem13GetAttachTypeEv>
 832d990:	83 f8 01             	cmp    $0x1,%eax
 832d993:	0f 94 c0             	sete   %al
 832d996:	84 c0                	test   %al,%al
 832d998:	74 0a                	je     832d9a4 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item17checkCompoundableEP10Inven_ItemPPK10CEquipItemc+0x1ce>
 832d99a:	b8 01 00 00 00       	mov    $0x1,%eax
 832d99f:	e9 55 01 00 00       	jmp    832daf9 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item17checkCompoundableEP10Inven_ItemPPK10CEquipItemc+0x323>
 832d9a4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 832d9a7:	c1 e0 02             	shl    $0x2,%eax
 832d9aa:	03 45 10             	add    0x10(%ebp),%eax
 832d9ad:	8b 00                	mov    (%eax),%eax
 832d9af:	8b 00                	mov    (%eax),%eax
 832d9b1:	83 c0 48             	add    $0x48,%eax
 832d9b4:	8b 10                	mov    (%eax),%edx
 832d9b6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 832d9b9:	c1 e0 02             	shl    $0x2,%eax
 832d9bc:	03 45 10             	add    0x10(%ebp),%eax
 832d9bf:	8b 00                	mov    (%eax),%eax
 832d9c1:	89 04 24             	mov    %eax,(%esp)
 832d9c4:	ff d2                	call   *%edx
 832d9c6:	85 c0                	test   %eax,%eax
 832d9c8:	0f 95 c0             	setne  %al
 832d9cb:	84 c0                	test   %al,%al
 832d9cd:	74 0a                	je     832d9d9 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item17checkCompoundableEP10Inven_ItemPPK10CEquipItemc+0x203>
 832d9cf:	b8 01 00 00 00       	mov    $0x1,%eax
 832d9d4:	e9 20 01 00 00       	jmp    832daf9 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item17checkCompoundableEP10Inven_ItemPPK10CEquipItemc+0x323>
 832d9d9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 832d9dc:	6b c0 3d             	imul   $0x3d,%eax,%eax
 832d9df:	03 45 0c             	add    0xc(%ebp),%eax
 832d9e2:	83 c0 33             	add    $0x33,%eax
 832d9e5:	89 04 24             	mov    %eax,(%esp)
 832d9e8:	e8 1d 31 de ff       	call   8110b0a <_ZNK19UpgradeSeparateInfo18IsTradeRestrictionEv>
 832d9ed:	84 c0                	test   %al,%al
 832d9ef:	0f 95 c0             	setne  %al
 832d9f2:	84 c0                	test   %al,%al
 832d9f4:	74 0a                	je     832da00 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item17checkCompoundableEP10Inven_ItemPPK10CEquipItemc+0x22a>
 832d9f6:	b8 01 00 00 00       	mov    $0x1,%eax
 832d9fb:	e9 f9 00 00 00       	jmp    832daf9 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item17checkCompoundableEP10Inven_ItemPPK10CEquipItemc+0x323>
 832da00:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 832da04:	83 7d f4 01          	cmpl   $0x1,-0xc(%ebp)
 832da08:	0f 9e c0             	setle  %al
 832da0b:	84 c0                	test   %al,%al
 832da0d:	0f 85 dc fd ff ff    	jne    832d7ef <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item17checkCompoundableEP10Inven_ItemPPK10CEquipItemc+0x19>
 832da13:	8b 55 ec             	mov    -0x14(%ebp),%edx
 832da16:	8b 45 f0             	mov    -0x10(%ebp),%eax
 832da19:	39 c2                	cmp    %eax,%edx
 832da1b:	74 0a                	je     832da27 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item17checkCompoundableEP10Inven_ItemPPK10CEquipItemc+0x251>
 832da1d:	b8 16 00 00 00       	mov    $0x16,%eax
 832da22:	e9 d2 00 00 00       	jmp    832daf9 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item17checkCompoundableEP10Inven_ItemPPK10CEquipItemc+0x323>
 832da27:	80 7d e4 00          	cmpb   $0x0,-0x1c(%ebp)
 832da2b:	75 11                	jne    832da3e <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item17checkCompoundableEP10Inven_ItemPPK10CEquipItemc+0x268>
 832da2d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 832da30:	85 c0                	test   %eax,%eax
 832da32:	74 3e                	je     832da72 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item17checkCompoundableEP10Inven_ItemPPK10CEquipItemc+0x29c>
 832da34:	b8 11 00 00 00       	mov    $0x11,%eax
 832da39:	e9 bb 00 00 00       	jmp    832daf9 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item17checkCompoundableEP10Inven_ItemPPK10CEquipItemc+0x323>
 832da3e:	80 7d e4 01          	cmpb   $0x1,-0x1c(%ebp)
 832da42:	74 06                	je     832da4a <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item17checkCompoundableEP10Inven_ItemPPK10CEquipItemc+0x274>
 832da44:	80 7d e4 03          	cmpb   $0x3,-0x1c(%ebp)
 832da48:	75 1a                	jne    832da64 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item17checkCompoundableEP10Inven_ItemPPK10CEquipItemc+0x28e>
 832da4a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 832da4d:	83 f8 01             	cmp    $0x1,%eax
 832da50:	74 1c                	je     832da6e <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item17checkCompoundableEP10Inven_ItemPPK10CEquipItemc+0x298>
 832da52:	8b 45 ec             	mov    -0x14(%ebp),%eax
 832da55:	83 f8 02             	cmp    $0x2,%eax
 832da58:	74 17                	je     832da71 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item17checkCompoundableEP10Inven_ItemPPK10CEquipItemc+0x29b>
 832da5a:	b8 11 00 00 00       	mov    $0x11,%eax
 832da5f:	e9 95 00 00 00       	jmp    832daf9 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item17checkCompoundableEP10Inven_ItemPPK10CEquipItemc+0x323>
 832da64:	b8 11 00 00 00       	mov    $0x11,%eax
 832da69:	e9 8b 00 00 00       	jmp    832daf9 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item17checkCompoundableEP10Inven_ItemPPK10CEquipItemc+0x323>
 832da6e:	90                   	nop
 832da6f:	eb 01                	jmp    832da72 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item17checkCompoundableEP10Inven_ItemPPK10CEquipItemc+0x29c>
 832da71:	90                   	nop
 832da72:	80 7d e4 03          	cmpb   $0x3,-0x1c(%ebp)
 832da76:	75 3e                	jne    832dab6 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item17checkCompoundableEP10Inven_ItemPPK10CEquipItemc+0x2e0>
 832da78:	8b 45 10             	mov    0x10(%ebp),%eax
 832da7b:	8b 00                	mov    (%eax),%eax
 832da7d:	89 04 24             	mov    %eax,(%esp)
 832da80:	e8 69 38 dc ff       	call   80f12ee <_ZNK5CItem14getUsableLevelEv>
 832da85:	83 f8 3c             	cmp    $0x3c,%eax
 832da88:	7f 15                	jg     832da9f <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item17checkCompoundableEP10Inven_ItemPPK10CEquipItemc+0x2c9>
 832da8a:	8b 45 10             	mov    0x10(%ebp),%eax
 832da8d:	83 c0 04             	add    $0x4,%eax
 832da90:	8b 00                	mov    (%eax),%eax
 832da92:	89 04 24             	mov    %eax,(%esp)
 832da95:	e8 54 38 dc ff       	call   80f12ee <_ZNK5CItem14getUsableLevelEv>
 832da9a:	83 f8 3c             	cmp    $0x3c,%eax
 832da9d:	7e 07                	jle    832daa6 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item17checkCompoundableEP10Inven_ItemPPK10CEquipItemc+0x2d0>
 832da9f:	b8 01 00 00 00       	mov    $0x1,%eax
 832daa4:	eb 05                	jmp    832daab <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item17checkCompoundableEP10Inven_ItemPPK10CEquipItemc+0x2d5>
 832daa6:	b8 00 00 00 00       	mov    $0x0,%eax
 832daab:	84 c0                	test   %al,%al
 832daad:	74 45                	je     832daf4 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item17checkCompoundableEP10Inven_ItemPPK10CEquipItemc+0x31e>
 832daaf:	b8 11 00 00 00       	mov    $0x11,%eax
 832dab4:	eb 43                	jmp    832daf9 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item17checkCompoundableEP10Inven_ItemPPK10CEquipItemc+0x323>
 832dab6:	8b 45 10             	mov    0x10(%ebp),%eax
 832dab9:	8b 00                	mov    (%eax),%eax
 832dabb:	89 04 24             	mov    %eax,(%esp)
 832dabe:	e8 2b 38 dc ff       	call   80f12ee <_ZNK5CItem14getUsableLevelEv>
 832dac3:	83 f8 45             	cmp    $0x45,%eax
 832dac6:	7e 1c                	jle    832dae4 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item17checkCompoundableEP10Inven_ItemPPK10CEquipItemc+0x30e>
 832dac8:	8b 45 10             	mov    0x10(%ebp),%eax
 832dacb:	83 c0 04             	add    $0x4,%eax
 832dace:	8b 00                	mov    (%eax),%eax
 832dad0:	89 04 24             	mov    %eax,(%esp)
 832dad3:	e8 16 38 dc ff       	call   80f12ee <_ZNK5CItem14getUsableLevelEv>
 832dad8:	83 f8 45             	cmp    $0x45,%eax
 832dadb:	7e 07                	jle    832dae4 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item17checkCompoundableEP10Inven_ItemPPK10CEquipItemc+0x30e>
 832dadd:	b8 01 00 00 00       	mov    $0x1,%eax
 832dae2:	eb 05                	jmp    832dae9 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item17checkCompoundableEP10Inven_ItemPPK10CEquipItemc+0x313>
 832dae4:	b8 00 00 00 00       	mov    $0x0,%eax
 832dae9:	84 c0                	test   %al,%al
 832daeb:	74 07                	je     832daf4 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item17checkCompoundableEP10Inven_ItemPPK10CEquipItemc+0x31e>
 832daed:	b8 11 00 00 00       	mov    $0x11,%eax
 832daf2:	eb 05                	jmp    832daf9 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item17checkCompoundableEP10Inven_ItemPPK10CEquipItemc+0x323>
 832daf4:	b8 00 00 00 00       	mov    $0x0,%eax
 832daf9:	83 c4 34             	add    $0x34,%esp
 832dafc:	5b                   	pop    %ebx
 832dafd:	5d                   	pop    %ebp
 832dafe:	c3                   	ret
 832daff:	90                   	nop

```

```c
// ExtreamDungeon::CCompound_ExtreamDun_Item::checkCompoundable @ 0x832d7d6

/* ExtreamDungeon::CCompound_ExtreamDun_Item::checkCompoundable(Inven_Item*, CEquipItem const**,
   char) const */

undefined4 __thiscall
ExtreamDungeon::CCompound_ExtreamDun_Item::checkCompoundable
          (CCompound_ExtreamDun_Item *this,Inven_Item *param_1,CEquipItem **param_2,char param_3)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int local_18 [4];
  
  local_18[2] = 0;
  while( true ) {
    if (1 < local_18[2]) {
      if (local_18[0] != local_18[1]) {
        return 0x16;
      }
      if (param_3 == '\0') {
        if (local_18[0] != 0) {
          return 0x11;
        }
      }
      else {
        if ((param_3 != '\x01') && (param_3 != '\x03')) {
          return 0x11;
        }
        if ((local_18[0] != 1) && (local_18[0] != 2)) {
          return 0x11;
        }
      }
      if (param_3 == '\x03') {
        iVar6 = CItem::getUsableLevel((CItem *)*param_2);
        if ((iVar6 < 0x3d) && (iVar6 = CItem::getUsableLevel((CItem *)param_2[1]), iVar6 < 0x3d)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          return 0x11;
        }
      }
      else {
        iVar6 = CItem::getUsableLevel((CItem *)*param_2);
        if ((iVar6 < 0x46) || (iVar6 = CItem::getUsableLevel((CItem *)param_2[1]), iVar6 < 0x46)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          return 0x11;
        }
      }
      return 0;
    }
    cVar2 = Inven_Item::isEmpty(param_1 + local_18[2] * 0x3d);
    iVar6 = local_18[2];
    if ((cVar2 == '\0') && (param_2[local_18[2]] != (CEquipItem *)0x0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      return 0x31;
    }
    uVar3 = CEquipItem::GetUsableEquipmentType(param_2[local_18[2]]);
    iVar4 = _convertInputItem(this,uVar3);
    local_18[iVar6] = iVar4;
    cVar2 = (**(code **)(*(int *)param_2[local_18[2]] + 0x4c))(param_2[local_18[2]]);
    if (cVar2 != '\0') {
      return 7;
    }
    if (local_18[local_18[2]] == 3) {
      return 0x17;
    }
    if (((local_18[local_18[2]] == 2) &&
        (iVar6 = CItem::getItemGroupName((CItem *)param_2[local_18[2]]), 0x19 < iVar6)) &&
       (iVar6 = CItem::getItemGroupName((CItem *)param_2[local_18[2]]), iVar6 < 0x33)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      return 0x17;
    }
    cVar2 = stAmplifyOption_t::isIdentified
                      ((stAmplifyOption_t *)(param_1 + local_18[2] * 0x3d + 0x11));
    if (cVar2 != '\x01') {
      return 0x13;
    }
    if (param_1[local_18[2] * 0x3d] != (Inven_Item)0x1) {
      return 0x12;
    }
    iVar6 = CItem::getItemGroupName((CItem *)param_2[local_18[2]]);
    if ((iVar6 < 1) ||
       (uVar5 = CItem::getItemGroupName((CItem *)param_2[local_18[2]]), 0x3a < uVar5)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      return 0x11;
    }
    iVar6 = CItem::GetAttachType((CItem *)param_2[local_18[2]]);
    if (iVar6 == 1) {
      return 1;
    }
    iVar6 = (**(code **)(*(int *)param_2[local_18[2]] + 0x48))(param_2[local_18[2]]);
    if (iVar6 != 0) break;
    cVar2 = UpgradeSeparateInfo::IsTradeRestriction
                      ((UpgradeSeparateInfo *)(param_1 + local_18[2] * 0x3d + 0x33));
    if (cVar2 != '\0') {
      return 1;
    }
    local_18[2] = local_18[2] + 1;
  }
  return 1;
}

```

---

## check_N_addItem

```asm
// === 0832db00 ExtreamDungeon::CCompound_ExtreamDun_Item::check_N_addItem  [0x0832db00-0x832db4d] ===
 832db00:	55                   	push   %ebp
 832db01:	89 e5                	mov    %esp,%ebp
 832db03:	83 ec 18             	sub    $0x18,%esp
 832db06:	8b 45 0c             	mov    0xc(%ebp),%eax
 832db09:	89 44 24 04          	mov    %eax,0x4(%esp)
 832db0d:	8b 45 08             	mov    0x8(%ebp),%eax
 832db10:	89 04 24             	mov    %eax,(%esp)
 832db13:	e8 36 00 00 00       	call   832db4e <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item21_isPossibleResultItemER10CEquipItem>
 832db18:	83 f0 01             	xor    $0x1,%eax
 832db1b:	84 c0                	test   %al,%al
 832db1d:	74 07                	je     832db26 <_ZN14ExtreamDungeon25CCompound_ExtreamDun_Item15check_N_addItemER10CEquipItem+0x26>
 832db1f:	b8 00 00 00 00       	mov    $0x0,%eax
 832db24:	eb 25                	jmp    832db4b <_ZN14ExtreamDungeon25CCompound_ExtreamDun_Item15check_N_addItemER10CEquipItem+0x4b>
 832db26:	8b 45 0c             	mov    0xc(%ebp),%eax
 832db29:	89 44 24 04          	mov    %eax,0x4(%esp)
 832db2d:	8b 45 08             	mov    0x8(%ebp),%eax
 832db30:	89 04 24             	mov    %eax,(%esp)
 832db33:	e8 e4 01 00 00       	call   832dd1c <_ZN14ExtreamDungeon25CCompound_ExtreamDun_Item8_AddItemER10CEquipItem>
 832db38:	83 f0 01             	xor    $0x1,%eax
 832db3b:	84 c0                	test   %al,%al
 832db3d:	74 07                	je     832db46 <_ZN14ExtreamDungeon25CCompound_ExtreamDun_Item15check_N_addItemER10CEquipItem+0x46>
 832db3f:	b8 00 00 00 00       	mov    $0x0,%eax
 832db44:	eb 05                	jmp    832db4b <_ZN14ExtreamDungeon25CCompound_ExtreamDun_Item15check_N_addItemER10CEquipItem+0x4b>
 832db46:	b8 01 00 00 00       	mov    $0x1,%eax
 832db4b:	c9                   	leave
 832db4c:	c3                   	ret
 832db4d:	90                   	nop

```

```c
// ExtreamDungeon::CCompound_ExtreamDun_Item::check_N_addItem @ 0x832db00

/* ExtreamDungeon::CCompound_ExtreamDun_Item::check_N_addItem(CEquipItem&) */

undefined4 __thiscall
ExtreamDungeon::CCompound_ExtreamDun_Item::check_N_addItem
          (CCompound_ExtreamDun_Item *this,CEquipItem *param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = _isPossibleResultItem(this,param_1);
  if (cVar1 == '\x01') {
    cVar1 = _AddItem(this,param_1);
    if (cVar1 == '\x01') {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## makeCompoundItem

```asm
// === 0832ccc0 ExtreamDungeon::CCompound_ExtreamDun_Item::makeCompoundItem  [0x0832ccc0-0x832cffd] ===
 832ccc0:	55                   	push   %ebp
 832ccc1:	89 e5                	mov    %esp,%ebp
 832ccc3:	53                   	push   %ebx
 832ccc4:	81 ec 94 00 00 00    	sub    $0x94,%esp
 832ccca:	8b 45 10             	mov    0x10(%ebp),%eax
 832cccd:	88 45 94             	mov    %al,-0x6c(%ebp)
 832ccd0:	8b 45 14             	mov    0x14(%ebp),%eax
 832ccd3:	89 04 24             	mov    %eax,(%esp)
 832ccd6:	e8 fd ea d9 ff       	call   80cb7d8 <_ZN10Inven_Item5resetEv>
 832ccdb:	8b 45 0c             	mov    0xc(%ebp),%eax
 832ccde:	89 44 24 04          	mov    %eax,0x4(%esp)
 832cce2:	8b 45 08             	mov    0x8(%ebp),%eax
 832cce5:	89 04 24             	mov    %eax,(%esp)
 832cce8:	e8 1f 17 00 00       	call   832e40c <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item15_get_base_levelEPKPK10CEquipItem>
 832cced:	89 45 d8             	mov    %eax,-0x28(%ebp)
 832ccf0:	8b 45 0c             	mov    0xc(%ebp),%eax
 832ccf3:	8b 00                	mov    (%eax),%eax
 832ccf5:	89 04 24             	mov    %eax,(%esp)
 832ccf8:	e8 39 13 00 00       	call   832e036 <_ZNK10CEquipItem22GetUsableEquipmentTypeEv>
 832ccfd:	89 44 24 04          	mov    %eax,0x4(%esp)
 832cd01:	8b 45 08             	mov    0x8(%ebp),%eax
 832cd04:	89 04 24             	mov    %eax,(%esp)
 832cd07:	e8 14 f9 ff ff       	call   832c620 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item17_convertInputItemE28ENUM_UNUSABLE_EQUIPMENT_TYPE>
 832cd0c:	89 45 dc             	mov    %eax,-0x24(%ebp)
 832cd0f:	c7 45 e0 04 00 00 00 	movl   $0x4,-0x20(%ebp)
 832cd16:	8b 45 08             	mov    0x8(%ebp),%eax
 832cd19:	8b 00                	mov    (%eax),%eax
 832cd1b:	89 04 24             	mov    %eax,(%esp)
 832cd1e:	e8 23 ed d9 ff       	call   80cba46 <_ZN7CMTRand7randIntEv>
 832cd23:	89 c1                	mov    %eax,%ecx
 832cd25:	ba 83 de 1b 43       	mov    $0x431bde83,%edx
 832cd2a:	89 c8                	mov    %ecx,%eax
 832cd2c:	f7 e2                	mul    %edx
 832cd2e:	89 d0                	mov    %edx,%eax
 832cd30:	c1 e8 12             	shr    $0x12,%eax
 832cd33:	69 c0 40 42 0f 00    	imul   $0xf4240,%eax,%eax
 832cd39:	89 ca                	mov    %ecx,%edx
 832cd3b:	29 c2                	sub    %eax,%edx
 832cd3d:	89 d0                	mov    %edx,%eax
 832cd3f:	83 c0 01             	add    $0x1,%eax
 832cd42:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 832cd45:	8b 45 08             	mov    0x8(%ebp),%eax
 832cd48:	8b 00                	mov    (%eax),%eax
 832cd4a:	89 04 24             	mov    %eax,(%esp)
 832cd4d:	e8 f4 ec d9 ff       	call   80cba46 <_ZN7CMTRand7randIntEv>
 832cd52:	89 c1                	mov    %eax,%ecx
 832cd54:	ba 83 de 1b 43       	mov    $0x431bde83,%edx
 832cd59:	89 c8                	mov    %ecx,%eax
 832cd5b:	f7 e2                	mul    %edx
 832cd5d:	89 d0                	mov    %edx,%eax
 832cd5f:	c1 e8 12             	shr    $0x12,%eax
 832cd62:	69 c0 40 42 0f 00    	imul   $0xf4240,%eax,%eax
 832cd68:	89 ca                	mov    %ecx,%edx
 832cd6a:	29 c2                	sub    %eax,%edx
 832cd6c:	89 d0                	mov    %edx,%eax
 832cd6e:	83 c0 01             	add    $0x1,%eax
 832cd71:	89 45 e8             	mov    %eax,-0x18(%ebp)
 832cd74:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 832cd7b:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 832cd7f:	75 1e                	jne    832cd9f <_ZN14ExtreamDungeon25CCompound_ExtreamDun_Item16makeCompoundItemEPPK10CEquipItemcR10Inven_ItemNS_15eBindSphereTypeE+0xdf>
 832cd81:	8b 45 dc             	mov    -0x24(%ebp),%eax
 832cd84:	89 44 24 08          	mov    %eax,0x8(%esp)
 832cd88:	8b 45 e8             	mov    -0x18(%ebp),%eax
 832cd8b:	89 44 24 04          	mov    %eax,0x4(%esp)
 832cd8f:	8b 45 08             	mov    0x8(%ebp),%eax
 832cd92:	89 04 24             	mov    %eax,(%esp)
 832cd95:	e8 dc fb ff ff       	call   832c976 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item17_determine_rarityEjNS_22ENUM_INPUTITEMS_RARITYE>
 832cd9a:	89 45 e0             	mov    %eax,-0x20(%ebp)
 832cd9d:	eb 15                	jmp    832cdb4 <_ZN14ExtreamDungeon25CCompound_ExtreamDun_Item16makeCompoundItemEPPK10CEquipItemcR10Inven_ItemNS_15eBindSphereTypeE+0xf4>
 832cd9f:	8b 45 dc             	mov    -0x24(%ebp),%eax
 832cda2:	89 44 24 04          	mov    %eax,0x4(%esp)
 832cda6:	8b 45 08             	mov    0x8(%ebp),%eax
 832cda9:	89 04 24             	mov    %eax,(%esp)
 832cdac:	e8 3f f8 ff ff       	call   832c5f0 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item23_convertInput_To_OutputENS_22ENUM_INPUTITEMS_RARITYE>
 832cdb1:	89 45 e0             	mov    %eax,-0x20(%ebp)
 832cdb4:	8d 45 a0             	lea    -0x60(%ebp),%eax
 832cdb7:	8b 55 18             	mov    0x18(%ebp),%edx
 832cdba:	89 54 24 14          	mov    %edx,0x14(%esp)
 832cdbe:	8b 55 e0             	mov    -0x20(%ebp),%edx
 832cdc1:	89 54 24 10          	mov    %edx,0x10(%esp)
 832cdc5:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 832cdc8:	89 54 24 0c          	mov    %edx,0xc(%esp)
 832cdcc:	8b 55 dc             	mov    -0x24(%ebp),%edx
 832cdcf:	89 54 24 08          	mov    %edx,0x8(%esp)
 832cdd3:	8b 55 08             	mov    0x8(%ebp),%edx
 832cdd6:	89 54 24 04          	mov    %edx,0x4(%esp)
 832cdda:	89 04 24             	mov    %eax,(%esp)
 832cddd:	e8 fa fc ff ff       	call   832cadc <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item22_determine_level_bonusENS_22ENUM_INPUTITEMS_RARITYEjNS_23ENUM_OUTPUTITEMS_RARITYENS_15eBindSphereTypeE>
 832cde2:	83 ec 04             	sub    $0x4,%esp
 832cde5:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 832cdec:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 832cdef:	83 f8 0a             	cmp    $0xa,%eax
 832cdf2:	75 30                	jne    832ce24 <_ZN14ExtreamDungeon25CCompound_ExtreamDun_Item16makeCompoundItemEPPK10CEquipItemcR10Inven_ItemNS_15eBindSphereTypeE+0x164>
 832cdf4:	83 7d dc 01          	cmpl   $0x1,-0x24(%ebp)
 832cdf8:	74 2a                	je     832ce24 <_ZN14ExtreamDungeon25CCompound_ExtreamDun_Item16makeCompoundItemEPPK10CEquipItemcR10Inven_ItemNS_15eBindSphereTypeE+0x164>
 832cdfa:	8b 4d d8             	mov    -0x28(%ebp),%ecx
 832cdfd:	ba cd cc cc cc       	mov    $0xcccccccd,%edx
 832ce02:	89 c8                	mov    %ecx,%eax
 832ce04:	f7 e2                	mul    %edx
 832ce06:	c1 ea 03             	shr    $0x3,%edx
 832ce09:	89 d0                	mov    %edx,%eax
 832ce0b:	c1 e0 02             	shl    $0x2,%eax
 832ce0e:	01 d0                	add    %edx,%eax
 832ce10:	01 c0                	add    %eax,%eax
 832ce12:	89 ca                	mov    %ecx,%edx
 832ce14:	29 c2                	sub    %eax,%edx
 832ce16:	83 fa 04             	cmp    $0x4,%edx
 832ce19:	76 09                	jbe    832ce24 <_ZN14ExtreamDungeon25CCompound_ExtreamDun_Item16makeCompoundItemEPPK10CEquipItemcR10Inven_ItemNS_15eBindSphereTypeE+0x164>
 832ce1b:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 832ce22:	eb 5d                	jmp    832ce81 <_ZN14ExtreamDungeon25CCompound_ExtreamDun_Item16makeCompoundItemEPPK10CEquipItemcR10Inven_ItemNS_15eBindSphereTypeE+0x1c1>
 832ce24:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 832ce27:	03 45 d8             	add    -0x28(%ebp),%eax
 832ce2a:	89 45 b0             	mov    %eax,-0x50(%ebp)
 832ce2d:	8b 45 a0             	mov    -0x60(%ebp),%eax
 832ce30:	03 45 d8             	add    -0x28(%ebp),%eax
 832ce33:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 832ce36:	8d 45 b0             	lea    -0x50(%ebp),%eax
 832ce39:	89 44 24 08          	mov    %eax,0x8(%esp)
 832ce3d:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 832ce40:	89 44 24 04          	mov    %eax,0x4(%esp)
 832ce44:	8d 45 a8             	lea    -0x58(%ebp),%eax
 832ce47:	89 04 24             	mov    %eax,(%esp)
 832ce4a:	e8 3b 17 00 00       	call   832e58a <_ZNSt4pairIjjEC1IjjEEOT_OT0_>
 832ce4f:	0f be 4d 94          	movsbl -0x6c(%ebp),%ecx
 832ce53:	8b 45 a8             	mov    -0x58(%ebp),%eax
 832ce56:	8b 55 ac             	mov    -0x54(%ebp),%edx
 832ce59:	89 44 24 10          	mov    %eax,0x10(%esp)
 832ce5d:	89 54 24 14          	mov    %edx,0x14(%esp)
 832ce61:	8b 45 e0             	mov    -0x20(%ebp),%eax
 832ce64:	89 44 24 0c          	mov    %eax,0xc(%esp)
 832ce68:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 832ce6c:	8b 45 0c             	mov    0xc(%ebp),%eax
 832ce6f:	89 44 24 04          	mov    %eax,0x4(%esp)
 832ce73:	8b 45 08             	mov    0x8(%ebp),%eax
 832ce76:	89 04 24             	mov    %eax,(%esp)
 832ce79:	e8 ba 05 00 00       	call   832d438 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item23_FindItemAll_BindSphereEPPK10CEquipItemcNS_23ENUM_OUTPUTITEMS_RARITYESt4pairIjjE>
 832ce7e:	89 45 f0             	mov    %eax,-0x10(%ebp)
 832ce81:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 832ce85:	0f 85 11 01 00 00    	jne    832cf9c <_ZN14ExtreamDungeon25CCompound_ExtreamDun_Item16makeCompoundItemEPPK10CEquipItemcR10Inven_ItemNS_15eBindSphereTypeE+0x2dc>
 832ce8b:	8b 45 dc             	mov    -0x24(%ebp),%eax
 832ce8e:	85 c0                	test   %eax,%eax
 832ce90:	0f 8e d2 00 00 00    	jle    832cf68 <_ZN14ExtreamDungeon25CCompound_ExtreamDun_Item16makeCompoundItemEPPK10CEquipItemcR10Inven_ItemNS_15eBindSphereTypeE+0x2a8>
 832ce96:	8b 45 dc             	mov    -0x24(%ebp),%eax
 832ce99:	83 f8 02             	cmp    $0x2,%eax
 832ce9c:	0f 8f c6 00 00 00    	jg     832cf68 <_ZN14ExtreamDungeon25CCompound_ExtreamDun_Item16makeCompoundItemEPPK10CEquipItemcR10Inven_ItemNS_15eBindSphereTypeE+0x2a8>
 832cea2:	8b 45 d8             	mov    -0x28(%ebp),%eax
 832cea5:	83 c0 05             	add    $0x5,%eax
 832cea8:	89 45 c0             	mov    %eax,-0x40(%ebp)
 832ceab:	8b 45 d8             	mov    -0x28(%ebp),%eax
 832ceae:	83 c0 01             	add    $0x1,%eax
 832ceb1:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 832ceb4:	8d 45 c0             	lea    -0x40(%ebp),%eax
 832ceb7:	89 44 24 08          	mov    %eax,0x8(%esp)
 832cebb:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 832cebe:	89 44 24 04          	mov    %eax,0x4(%esp)
 832cec2:	8d 45 b8             	lea    -0x48(%ebp),%eax
 832cec5:	89 04 24             	mov    %eax,(%esp)
 832cec8:	e8 bd 16 00 00       	call   832e58a <_ZNSt4pairIjjEC1IjjEEOT_OT0_>
 832cecd:	0f be 4d 94          	movsbl -0x6c(%ebp),%ecx
 832ced1:	8b 45 b8             	mov    -0x48(%ebp),%eax
 832ced4:	8b 55 bc             	mov    -0x44(%ebp),%edx
 832ced7:	89 44 24 10          	mov    %eax,0x10(%esp)
 832cedb:	89 54 24 14          	mov    %edx,0x14(%esp)
 832cedf:	8b 45 e0             	mov    -0x20(%ebp),%eax
 832cee2:	89 44 24 0c          	mov    %eax,0xc(%esp)
 832cee6:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 832ceea:	8b 45 0c             	mov    0xc(%ebp),%eax
 832ceed:	89 44 24 04          	mov    %eax,0x4(%esp)
 832cef1:	8b 45 08             	mov    0x8(%ebp),%eax
 832cef4:	89 04 24             	mov    %eax,(%esp)
 832cef7:	e8 3c 05 00 00       	call   832d438 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item23_FindItemAll_BindSphereEPPK10CEquipItemcNS_23ENUM_OUTPUTITEMS_RARITYESt4pairIjjE>
 832cefc:	89 45 f0             	mov    %eax,-0x10(%ebp)
 832ceff:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 832cf03:	0f 85 92 00 00 00    	jne    832cf9b <_ZN14ExtreamDungeon25CCompound_ExtreamDun_Item16makeCompoundItemEPPK10CEquipItemcR10Inven_ItemNS_15eBindSphereTypeE+0x2db>
 832cf09:	8b 45 d8             	mov    -0x28(%ebp),%eax
 832cf0c:	83 c0 0a             	add    $0xa,%eax
 832cf0f:	89 45 d0             	mov    %eax,-0x30(%ebp)
 832cf12:	8b 45 d8             	mov    -0x28(%ebp),%eax
 832cf15:	83 c0 06             	add    $0x6,%eax
 832cf18:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 832cf1b:	8d 45 d0             	lea    -0x30(%ebp),%eax
 832cf1e:	89 44 24 08          	mov    %eax,0x8(%esp)
 832cf22:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 832cf25:	89 44 24 04          	mov    %eax,0x4(%esp)
 832cf29:	8d 45 c8             	lea    -0x38(%ebp),%eax
 832cf2c:	89 04 24             	mov    %eax,(%esp)
 832cf2f:	e8 56 16 00 00       	call   832e58a <_ZNSt4pairIjjEC1IjjEEOT_OT0_>
 832cf34:	0f be 4d 94          	movsbl -0x6c(%ebp),%ecx
 832cf38:	8b 45 c8             	mov    -0x38(%ebp),%eax
 832cf3b:	8b 55 cc             	mov    -0x34(%ebp),%edx
 832cf3e:	89 44 24 10          	mov    %eax,0x10(%esp)
 832cf42:	89 54 24 14          	mov    %edx,0x14(%esp)
 832cf46:	8b 45 e0             	mov    -0x20(%ebp),%eax
 832cf49:	89 44 24 0c          	mov    %eax,0xc(%esp)
 832cf4d:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 832cf51:	8b 45 0c             	mov    0xc(%ebp),%eax
 832cf54:	89 44 24 04          	mov    %eax,0x4(%esp)
 832cf58:	8b 45 08             	mov    0x8(%ebp),%eax
 832cf5b:	89 04 24             	mov    %eax,(%esp)
 832cf5e:	e8 d5 04 00 00       	call   832d438 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item23_FindItemAll_BindSphereEPPK10CEquipItemcNS_23ENUM_OUTPUTITEMS_RARITYESt4pairIjjE>
 832cf63:	89 45 f0             	mov    %eax,-0x10(%ebp)
 832cf66:	eb 34                	jmp    832cf9c <_ZN14ExtreamDungeon25CCompound_ExtreamDun_Item16makeCompoundItemEPPK10CEquipItemcR10Inven_ItemNS_15eBindSphereTypeE+0x2dc>
 832cf68:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 832cf6c:	75 2e                	jne    832cf9c <_ZN14ExtreamDungeon25CCompound_ExtreamDun_Item16makeCompoundItemEPPK10CEquipItemcR10Inven_ItemNS_15eBindSphereTypeE+0x2dc>
 832cf6e:	0f be 45 94          	movsbl -0x6c(%ebp),%eax
 832cf72:	8b 55 d8             	mov    -0x28(%ebp),%edx
 832cf75:	89 54 24 10          	mov    %edx,0x10(%esp)
 832cf79:	8b 55 e0             	mov    -0x20(%ebp),%edx
 832cf7c:	89 54 24 0c          	mov    %edx,0xc(%esp)
 832cf80:	89 44 24 08          	mov    %eax,0x8(%esp)
 832cf84:	8b 45 0c             	mov    0xc(%ebp),%eax
 832cf87:	89 44 24 04          	mov    %eax,0x4(%esp)
 832cf8b:	8b 45 08             	mov    0x8(%ebp),%eax
 832cf8e:	89 04 24             	mov    %eax,(%esp)
 832cf91:	e8 68 00 00 00       	call   832cffe <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item15_exception_RareEPPK10CEquipItemcNS_23ENUM_OUTPUTITEMS_RARITYEj>
 832cf96:	89 45 f0             	mov    %eax,-0x10(%ebp)
 832cf99:	eb 01                	jmp    832cf9c <_ZN14ExtreamDungeon25CCompound_ExtreamDun_Item16makeCompoundItemEPPK10CEquipItemcR10Inven_ItemNS_15eBindSphereTypeE+0x2dc>
 832cf9b:	90                   	nop
 832cf9c:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 832cfa0:	75 07                	jne    832cfa9 <_ZN14ExtreamDungeon25CCompound_ExtreamDun_Item16makeCompoundItemEPPK10CEquipItemcR10Inven_ItemNS_15eBindSphereTypeE+0x2e9>
 832cfa2:	b8 00 00 00 00       	mov    $0x0,%eax
 832cfa7:	eb 50                	jmp    832cff9 <_ZN14ExtreamDungeon25CCompound_ExtreamDun_Item16makeCompoundItemEPPK10CEquipItemcR10Inven_ItemNS_15eBindSphereTypeE+0x339>
 832cfa9:	8b 45 14             	mov    0x14(%ebp),%eax
 832cfac:	8b 55 f0             	mov    -0x10(%ebp),%edx
 832cfaf:	89 50 02             	mov    %edx,0x2(%eax)
 832cfb2:	8b 45 14             	mov    0x14(%ebp),%eax
 832cfb5:	8b 40 02             	mov    0x2(%eax),%eax
 832cfb8:	89 c3                	mov    %eax,%ebx
 832cfba:	e8 dc f1 d9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 832cfbf:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 832cfc3:	89 04 24             	mov    %eax,(%esp)
 832cfc6:	e8 67 2a 03 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 832cfcb:	89 45 f4             	mov    %eax,-0xc(%ebp)
 832cfce:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 832cfd2:	75 07                	jne    832cfdb <_ZN14ExtreamDungeon25CCompound_ExtreamDun_Item16makeCompoundItemEPPK10CEquipItemcR10Inven_ItemNS_15eBindSphereTypeE+0x31b>
 832cfd4:	b8 00 00 00 00       	mov    $0x0,%eax
 832cfd9:	eb 1e                	jmp    832cff9 <_ZN14ExtreamDungeon25CCompound_ExtreamDun_Item16makeCompoundItemEPPK10CEquipItemcR10Inven_ItemNS_15eBindSphereTypeE+0x339>
 832cfdb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 832cfde:	8b 00                	mov    (%eax),%eax
 832cfe0:	83 c0 08             	add    $0x8,%eax
 832cfe3:	8b 10                	mov    (%eax),%edx
 832cfe5:	8b 45 14             	mov    0x14(%ebp),%eax
 832cfe8:	89 44 24 04          	mov    %eax,0x4(%esp)
 832cfec:	8b 45 f4             	mov    -0xc(%ebp),%eax
 832cfef:	89 04 24             	mov    %eax,(%esp)
 832cff2:	ff d2                	call   *%edx
 832cff4:	b8 01 00 00 00       	mov    $0x1,%eax
 832cff9:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 832cffc:	c9                   	leave
 832cffd:	c3                   	ret

```

```c
// ExtreamDungeon::CCompound_ExtreamDun_Item::makeCompoundItem @ 0x832ccc0

/* ExtreamDungeon::CCompound_ExtreamDun_Item::makeCompoundItem(CEquipItem const**, char,
   Inven_Item&, ExtreamDungeon::eBindSphereType) */

undefined4 __thiscall
ExtreamDungeon::CCompound_ExtreamDun_Item::makeCompoundItem
          (CCompound_ExtreamDun_Item *this,CEquipItem **param_1,char param_2,Inven_Item *param_3,
          undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  CDataManager *this_00;
  int local_64;
  int local_60;
  undefined4 local_5c;
  undefined4 local_58;
  uint local_54;
  uint local_50;
  undefined4 local_4c;
  undefined4 local_48;
  uint local_44;
  uint local_40;
  undefined4 local_3c;
  undefined4 local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  int local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  int *local_10;
  
  Inven_Item::reset(param_3);
  local_2c = _get_base_level(this,param_1);
  uVar2 = CEquipItem::GetUsableEquipmentType(*param_1);
  local_28 = _convertInputItem(this,uVar2);
  local_24 = 4;
  uVar3 = CMTRand::randInt(*(CMTRand **)this);
  local_20 = uVar3 % 1000000 + 1;
  uVar3 = CMTRand::randInt(*(CMTRand **)this);
  local_1c = uVar3 % 1000000 + 1;
  local_18 = 0;
  if (local_28 == 0) {
    local_24 = _determine_rarity(this,local_1c,0);
  }
  else {
    local_24 = _convertInput_To_Output(this,local_28);
  }
  _determine_level_bonus(&local_64,this,local_28,local_20,local_24,param_5);
  local_14 = 0;
  if (((local_60 == 10) && (local_28 != 1)) && (4 < local_2c % 10)) {
    local_14 = 0;
  }
  else {
    local_54 = local_60 + local_2c;
    local_50 = local_64 + local_2c;
    std::pair<unsigned_int,unsigned_int>::pair<unsigned_int,unsigned_int>
              ((pair<unsigned_int,unsigned_int> *)&local_5c,&local_50,&local_54);
    local_14 = _FindItemAll_BindSphere(this,param_1,(int)param_2,local_24,local_5c,local_58);
  }
  if (local_14 == 0) {
    if ((local_28 < 1) || (2 < local_28)) {
      if (local_28 == 0) {
        local_14 = _exception_Rare(this,param_1,(int)param_2,local_24,local_2c);
      }
    }
    else {
      local_44 = local_2c + 5;
      local_40 = local_2c + 1;
      std::pair<unsigned_int,unsigned_int>::pair<unsigned_int,unsigned_int>
                ((pair<unsigned_int,unsigned_int> *)&local_4c,&local_40,&local_44);
      local_14 = _FindItemAll_BindSphere(this,param_1,(int)param_2,local_24,local_4c,local_48);
      if (local_14 == 0) {
        local_34 = local_2c + 10;
        local_30 = local_2c + 6;
        std::pair<unsigned_int,unsigned_int>::pair<unsigned_int,unsigned_int>
                  ((pair<unsigned_int,unsigned_int> *)&local_3c,&local_30,&local_34);
        local_14 = _FindItemAll_BindSphere(this,param_1,(int)param_2,local_24,local_3c,local_38);
      }
    }
  }
  if (local_14 == 0) {
    uVar2 = 0;
  }
  else {
    *(int *)(param_3 + 2) = local_14;
    iVar1 = *(int *)(param_3 + 2);
    this_00 = (CDataManager *)G_CDataManager();
    local_10 = (int *)CDataManager::find_item(this_00,iVar1);
    if (local_10 == (int *)0x0) {
      uVar2 = 0;
    }
    else {
      (**(code **)(*local_10 + 8))(local_10,param_3);
      uVar2 = 1;
    }
  }
  return uVar2;
}

```

---

## ~CCompound_ExtreamDun_Item

```asm
// === 0832c524 ExtreamDungeon::CCompound_ExtreamDun_Item::~CCompound_ExtreamDun_Item  [0x0832c524-0x832c5ab] ===
 832c524:	55                   	push   %ebp
 832c525:	89 e5                	mov    %esp,%ebp
 832c527:	56                   	push   %esi
 832c528:	53                   	push   %ebx
 832c529:	83 ec 10             	sub    $0x10,%esp
 832c52c:	8b 45 08             	mov    0x8(%ebp),%eax
 832c52f:	8b 00                	mov    (%eax),%eax
 832c531:	85 c0                	test   %eax,%eax
 832c533:	74 0d                	je     832c542 <_ZN14ExtreamDungeon25CCompound_ExtreamDun_ItemD1Ev+0x1e>
 832c535:	8b 45 08             	mov    0x8(%ebp),%eax
 832c538:	8b 00                	mov    (%eax),%eax
 832c53a:	89 04 24             	mov    %eax,(%esp)
 832c53d:	e8 ae 7f 3f 00       	call   87244f0 <_ZdlPv>
 832c542:	8b 45 08             	mov    0x8(%ebp),%eax
 832c545:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 832c54b:	8b 45 08             	mov    0x8(%ebp),%eax
 832c54e:	05 8c 0b 00 00       	add    $0xb8c,%eax
 832c553:	85 c0                	test   %eax,%eax
 832c555:	74 40                	je     832c597 <_ZN14ExtreamDungeon25CCompound_ExtreamDun_ItemD1Ev+0x73>
 832c557:	8b 45 08             	mov    0x8(%ebp),%eax
 832c55a:	8d 98 ec 0b 00 00    	lea    0xbec(%eax),%ebx
 832c560:	8b 45 08             	mov    0x8(%ebp),%eax
 832c563:	05 8c 0b 00 00       	add    $0xb8c,%eax
 832c568:	39 c3                	cmp    %eax,%ebx
 832c56a:	74 2b                	je     832c597 <_ZN14ExtreamDungeon25CCompound_ExtreamDun_ItemD1Ev+0x73>
 832c56c:	83 eb 30             	sub    $0x30,%ebx
 832c56f:	89 1c 24             	mov    %ebx,(%esp)
 832c572:	e8 35 1e 00 00       	call   832e3ac <_ZN14ExtreamDungeon26BindCube_LvBonusScriptDataD1Ev>
 832c577:	eb e7                	jmp    832c560 <_ZN14ExtreamDungeon25CCompound_ExtreamDun_ItemD1Ev+0x3c>
 832c579:	89 d3                	mov    %edx,%ebx
 832c57b:	89 c6                	mov    %eax,%esi
 832c57d:	8b 45 08             	mov    0x8(%ebp),%eax
 832c580:	83 c0 04             	add    $0x4,%eax
 832c583:	89 04 24             	mov    %eax,(%esp)
 832c586:	e8 95 1c 00 00       	call   832e220 <_ZN14ExtreamDungeon19BindCube_ScriptDataD1Ev>
 832c58b:	89 f0                	mov    %esi,%eax
 832c58d:	89 da                	mov    %ebx,%edx
 832c58f:	89 04 24             	mov    %eax,(%esp)
 832c592:	e8 b9 71 7b 00       	call   8ae3750 <_Unwind_Resume>
 832c597:	8b 45 08             	mov    0x8(%ebp),%eax
 832c59a:	83 c0 04             	add    $0x4,%eax
 832c59d:	89 04 24             	mov    %eax,(%esp)
 832c5a0:	e8 7b 1c 00 00       	call   832e220 <_ZN14ExtreamDungeon19BindCube_ScriptDataD1Ev>
 832c5a5:	83 c4 10             	add    $0x10,%esp
 832c5a8:	5b                   	pop    %ebx
 832c5a9:	5e                   	pop    %esi
 832c5aa:	5d                   	pop    %ebp
 832c5ab:	c3                   	ret

```

```c
// ExtreamDungeon::CCompound_ExtreamDun_Item::~CCompound_ExtreamDun_Item @ 0x832c524

/* ExtreamDungeon::CCompound_ExtreamDun_Item::~CCompound_ExtreamDun_Item() */

void __thiscall
ExtreamDungeon::CCompound_ExtreamDun_Item::~CCompound_ExtreamDun_Item
          (CCompound_ExtreamDun_Item *this)

{
  BindCube_LvBonusScriptData *this_00;
  
  if (*(int *)this != 0) {
    operator_delete(*(void **)this);
  }
  *(undefined4 *)this = 0;
  if (this != (CCompound_ExtreamDun_Item *)0xfffff474) {
    this_00 = (BindCube_LvBonusScriptData *)(this + 0xbec);
    while (this_00 != (BindCube_LvBonusScriptData *)(this + 0xb8c)) {
      this_00 = this_00 + -0x30;
                    /* try { // try from 0832c572 to 0832c576 has its CatchHandler @ 0832c579 */
      BindCube_LvBonusScriptData::~BindCube_LvBonusScriptData(this_00);
    }
  }
  BindCube_ScriptData::~BindCube_ScriptData((BindCube_ScriptData *)(this + 4));
  return;
}

```

