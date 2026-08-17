# CItemMakingSkill

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 14

---

## CItemMakingSkill

```asm
// === 08545108 CItemMakingSkill::CItemMakingSkill  [0x08545108-0x8545191] ===
 8545108:	55                   	push   %ebp
 8545109:	89 e5                	mov    %esp,%ebp
 854510b:	57                   	push   %edi
 854510c:	56                   	push   %esi
 854510d:	53                   	push   %ebx
 854510e:	83 ec 2c             	sub    $0x2c,%esp
 8545111:	8b 45 08             	mov    0x8(%ebp),%eax
 8545114:	89 04 24             	mov    %eax,(%esp)
 8545117:	e8 9e 3b b8 ff       	call   80c8cba <_ZN13charac_expand5CDataC1Ev>
 854511c:	8b 45 08             	mov    0x8(%ebp),%eax
 854511f:	c7 00 48 c3 c9 08    	movl   $0x8c9c348,(%eax)
 8545125:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 854512c:	e8 1f 86 b3 ff       	call   807d750 <time@plt>
 8545131:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8545134:	8d 75 e4             	lea    -0x1c(%ebp),%esi
 8545137:	c7 04 24 c8 09 00 00 	movl   $0x9c8,(%esp)
 854513e:	e8 0d f3 1d 00       	call   8724450 <_Znwj>
 8545143:	89 c3                	mov    %eax,%ebx
 8545145:	89 d8                	mov    %ebx,%eax
 8545147:	89 74 24 04          	mov    %esi,0x4(%esp)
 854514b:	89 04 24             	mov    %eax,(%esp)
 854514e:	e8 d7 68 b8 ff       	call   80cba2a <_ZN7CMTRandC1ERKm>
 8545153:	eb 12                	jmp    8545167 <_ZN16CItemMakingSkillC1Ev+0x5f>
 8545155:	89 d6                	mov    %edx,%esi
 8545157:	89 c7                	mov    %eax,%edi
 8545159:	89 1c 24             	mov    %ebx,(%esp)
 854515c:	e8 8f f3 1d 00       	call   87244f0 <_ZdlPv>
 8545161:	89 f8                	mov    %edi,%eax
 8545163:	89 f2                	mov    %esi,%edx
 8545165:	eb 10                	jmp    8545177 <_ZN16CItemMakingSkillC1Ev+0x6f>
 8545167:	89 da                	mov    %ebx,%edx
 8545169:	8b 45 08             	mov    0x8(%ebp),%eax
 854516c:	89 50 1c             	mov    %edx,0x1c(%eax)
 854516f:	83 c4 2c             	add    $0x2c,%esp
 8545172:	5b                   	pop    %ebx
 8545173:	5e                   	pop    %esi
 8545174:	5f                   	pop    %edi
 8545175:	5d                   	pop    %ebp
 8545176:	c3                   	ret
 8545177:	89 d3                	mov    %edx,%ebx
 8545179:	89 c6                	mov    %eax,%esi
 854517b:	8b 45 08             	mov    0x8(%ebp),%eax
 854517e:	89 04 24             	mov    %eax,(%esp)
 8545181:	e8 5c 3a b8 ff       	call   80c8be2 <_ZN13charac_expand5CDataD1Ev>
 8545186:	89 f0                	mov    %esi,%eax
 8545188:	89 da                	mov    %ebx,%edx
 854518a:	89 04 24             	mov    %eax,(%esp)
 854518d:	e8 be e5 59 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// CItemMakingSkill::CItemMakingSkill @ 0x8545108

/* CItemMakingSkill::CItemMakingSkill() */

void __thiscall CItemMakingSkill::CItemMakingSkill(CItemMakingSkill *this)

{
  CMTRand *this_00;
  ulong local_20 [4];
  
  charac_expand::CData::CData((CData *)this);
  *(undefined ***)this = &PTR_ResetDailyMidnight_08c9c348;
  local_20[0] = time((time_t *)0x0);
                    /* try { // try from 0854513e to 08545142 has its CatchHandler @ 08545177 */
  this_00 = operator_new(0x9c8);
                    /* try { // try from 0854514e to 08545152 has its CatchHandler @ 08545155 */
  CMTRand::CMTRand(this_00,local_20);
  *(CMTRand **)(this + 0x1c) = this_00;
  return;
}

```

---

## GainItemMakingSkillPoint

```asm
// === 085453e0 CItemMakingSkill::GainItemMakingSkillPoint  [0x085453e0-0x854571b] ===
 85453e0:	55                   	push   %ebp
 85453e1:	89 e5                	mov    %esp,%ebp
 85453e3:	56                   	push   %esi
 85453e4:	53                   	push   %ebx
 85453e5:	83 ec 60             	sub    $0x60,%esp
 85453e8:	8b 45 0c             	mov    0xc(%ebp),%eax
 85453eb:	89 04 24             	mov    %eax,(%esp)
 85453ee:	e8 d9 0b 00 00       	call   8545fcc <_ZNK5CItem14GetUpSkillTypeEv>
 85453f3:	89 45 d8             	mov    %eax,-0x28(%ebp)
 85453f6:	8b 45 0c             	mov    0xc(%ebp),%eax
 85453f9:	89 04 24             	mov    %eax,(%esp)
 85453fc:	e8 d9 0b 00 00       	call   8545fda <_ZNK5CItem12GetNeedLevelEv>
 8545401:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8545404:	e8 92 6d b8 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8545409:	89 04 24             	mov    %eax,(%esp)
 854540c:	e8 bd 0a e2 ff       	call   8365ece <_ZNK12CDataManager18GetItemMakingSkillEv>
 8545411:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8545414:	8b 45 10             	mov    0x10(%ebp),%eax
 8545417:	89 44 24 08          	mov    %eax,0x8(%esp)
 854541b:	8b 45 0c             	mov    0xc(%ebp),%eax
 854541e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8545422:	8b 45 08             	mov    0x8(%ebp),%eax
 8545425:	89 04 24             	mov    %eax,(%esp)
 8545428:	e8 c7 08 00 00       	call   8545cf4 <_ZN16CItemMakingSkill23GetItemMakingSkillLevelEPK14CStackableItemP5CUser>
 854542d:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8545430:	8b 45 08             	mov    0x8(%ebp),%eax
 8545433:	8b 40 1c             	mov    0x1c(%eax),%eax
 8545436:	89 04 24             	mov    %eax,(%esp)
 8545439:	e8 08 66 b8 ff       	call   80cba46 <_ZN7CMTRand7randIntEv>
 854543e:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8545441:	8b 52 28             	mov    0x28(%edx),%edx
 8545444:	89 d1                	mov    %edx,%ecx
 8545446:	ba 00 00 00 00       	mov    $0x0,%edx
 854544b:	f7 f1                	div    %ecx
 854544d:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8545450:	8b 40 24             	mov    0x24(%eax),%eax
 8545453:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8545456:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8545459:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8545460:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8545463:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8545466:	29 c2                	sub    %eax,%edx
 8545468:	8b 45 e0             	mov    -0x20(%ebp),%eax
 854546b:	8b 40 2c             	mov    0x2c(%eax),%eax
 854546e:	39 c2                	cmp    %eax,%edx
 8545470:	7c 0e                	jl     8545480 <_ZN16CItemMakingSkill24GainItemMakingSkillPointEPK14CStackableItemP5CUser+0xa0>
 8545472:	c7 45 ec 0d 00 00 00 	movl   $0xd,-0x14(%ebp)
 8545479:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 8545480:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8545483:	8d 50 18             	lea    0x18(%eax),%edx
 8545486:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8545489:	89 54 24 04          	mov    %edx,0x4(%esp)
 854548d:	89 04 24             	mov    %eax,(%esp)
 8545490:	e8 ab 0b 00 00       	call   8546040 <_ZNKSt6vectorISt4pairIiiESaIS1_EE4rendEv>
 8545495:	83 ec 04             	sub    $0x4,%esp
 8545498:	8b 45 e0             	mov    -0x20(%ebp),%eax
 854549b:	8d 50 18             	lea    0x18(%eax),%edx
 854549e:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85454a1:	89 54 24 04          	mov    %edx,0x4(%esp)
 85454a5:	89 04 24             	mov    %eax,(%esp)
 85454a8:	e8 51 0b 00 00       	call   8545ffe <_ZNKSt6vectorISt4pairIiiESaIS1_EE6rbeginEv>
 85454ad:	83 ec 04             	sub    $0x4,%esp
 85454b0:	8d 45 cc             	lea    -0x34(%ebp),%eax
 85454b3:	89 44 24 04          	mov    %eax,0x4(%esp)
 85454b7:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85454ba:	89 04 24             	mov    %eax,(%esp)
 85454bd:	e8 bf 0b 00 00       	call   8546081 <_ZSteqIN9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS3_SaIS3_EEEEEbRKSt16reverse_iteratorIT_ESE_>
 85454c2:	84 c0                	test   %al,%al
 85454c4:	0f 85 47 02 00 00    	jne    8545711 <_ZN16CItemMakingSkill24GainItemMakingSkillPointEPK14CStackableItemP5CUser+0x331>
 85454ca:	8b 45 10             	mov    0x10(%ebp),%eax
 85454cd:	89 04 24             	mov    %eax,(%esp)
 85454d0:	e8 e3 4d b9 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 85454d5:	83 f8 46             	cmp    $0x46,%eax
 85454d8:	0f 94 c0             	sete   %al
 85454db:	84 c0                	test   %al,%al
 85454dd:	74 53                	je     8545532 <_ZN16CItemMakingSkill24GainItemMakingSkillPointEPK14CStackableItemP5CUser+0x152>
 85454df:	8b 55 d8             	mov    -0x28(%ebp),%edx
 85454e2:	8b 45 08             	mov    0x8(%ebp),%eax
 85454e5:	0f b7 44 50 06       	movzwl 0x6(%eax,%edx,2),%eax
 85454ea:	0f bf d8             	movswl %ax,%ebx
 85454ed:	8b 45 e0             	mov    -0x20(%ebp),%eax
 85454f0:	8d 50 18             	lea    0x18(%eax),%edx
 85454f3:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85454f6:	89 54 24 04          	mov    %edx,0x4(%esp)
 85454fa:	89 04 24             	mov    %eax,(%esp)
 85454fd:	e8 fc 0a 00 00       	call   8545ffe <_ZNKSt6vectorISt4pairIiiESaIS1_EE6rbeginEv>
 8545502:	83 ec 04             	sub    $0x4,%esp
 8545505:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8545508:	89 04 24             	mov    %eax,(%esp)
 854550b:	e8 b6 0b 00 00       	call   85460c6 <_ZNKSt16reverse_iteratorIN9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS3_SaIS3_EEEEEptEv>
 8545510:	8b 00                	mov    (%eax),%eax
 8545512:	39 c3                	cmp    %eax,%ebx
 8545514:	0f 9d c0             	setge  %al
 8545517:	84 c0                	test   %al,%al
 8545519:	0f 84 a8 00 00 00    	je     85455c7 <_ZN16CItemMakingSkill24GainItemMakingSkillPointEPK14CStackableItemP5CUser+0x1e7>
 854551f:	c7 45 ec 16 00 00 00 	movl   $0x16,-0x14(%ebp)
 8545526:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 854552d:	e9 95 00 00 00       	jmp    85455c7 <_ZN16CItemMakingSkill24GainItemMakingSkillPointEPK14CStackableItemP5CUser+0x1e7>
 8545532:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8545539:	eb 70                	jmp    85455ab <_ZN16CItemMakingSkill24GainItemMakingSkillPointEPK14CStackableItemP5CUser+0x1cb>
 854553b:	8b 45 10             	mov    0x10(%ebp),%eax
 854553e:	89 04 24             	mov    %eax,(%esp)
 8545541:	e8 72 4d b9 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 8545546:	89 c3                	mov    %eax,%ebx
 8545548:	8b 45 e0             	mov    -0x20(%ebp),%eax
 854554b:	8d 50 18             	lea    0x18(%eax),%edx
 854554e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8545551:	89 44 24 04          	mov    %eax,0x4(%esp)
 8545555:	89 14 24             	mov    %edx,(%esp)
 8545558:	e8 b5 f5 c6 ff       	call   81b4b12 <_ZNKSt6vectorISt4pairIiiESaIS1_EEixEj>
 854555d:	8b 40 04             	mov    0x4(%eax),%eax
 8545560:	39 c3                	cmp    %eax,%ebx
 8545562:	0f 9c c0             	setl   %al
 8545565:	84 c0                	test   %al,%al
 8545567:	74 3e                	je     85455a7 <_ZN16CItemMakingSkill24GainItemMakingSkillPointEPK14CStackableItemP5CUser+0x1c7>
 8545569:	8b 55 d8             	mov    -0x28(%ebp),%edx
 854556c:	8b 45 08             	mov    0x8(%ebp),%eax
 854556f:	0f b7 44 50 06       	movzwl 0x6(%eax,%edx,2),%eax
 8545574:	0f bf d8             	movswl %ax,%ebx
 8545577:	8b 45 e0             	mov    -0x20(%ebp),%eax
 854557a:	8d 50 18             	lea    0x18(%eax),%edx
 854557d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8545580:	89 44 24 04          	mov    %eax,0x4(%esp)
 8545584:	89 14 24             	mov    %edx,(%esp)
 8545587:	e8 86 f5 c6 ff       	call   81b4b12 <_ZNKSt6vectorISt4pairIiiESaIS1_EEixEj>
 854558c:	8b 00                	mov    (%eax),%eax
 854558e:	39 c3                	cmp    %eax,%ebx
 8545590:	0f 9d c0             	setge  %al
 8545593:	84 c0                	test   %al,%al
 8545595:	74 10                	je     85455a7 <_ZN16CItemMakingSkill24GainItemMakingSkillPointEPK14CStackableItemP5CUser+0x1c7>
 8545597:	c7 45 ec 16 00 00 00 	movl   $0x16,-0x14(%ebp)
 854559e:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 85455a5:	eb 20                	jmp    85455c7 <_ZN16CItemMakingSkill24GainItemMakingSkillPointEPK14CStackableItemP5CUser+0x1e7>
 85455a7:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 85455ab:	8b 45 e0             	mov    -0x20(%ebp),%eax
 85455ae:	83 c0 18             	add    $0x18,%eax
 85455b1:	89 04 24             	mov    %eax,(%esp)
 85455b4:	e8 5b 82 b9 ff       	call   80dd814 <_ZNKSt6vectorISt4pairIiiESaIS1_EE4sizeEv>
 85455b9:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 85455bc:	0f 97 c0             	seta   %al
 85455bf:	84 c0                	test   %al,%al
 85455c1:	0f 85 74 ff ff ff    	jne    854553b <_ZN16CItemMakingSkill24GainItemMakingSkillPointEPK14CStackableItemP5CUser+0x15b>
 85455c7:	8b 55 d8             	mov    -0x28(%ebp),%edx
 85455ca:	8b 45 08             	mov    0x8(%ebp),%eax
 85455cd:	0f b7 44 50 06       	movzwl 0x6(%eax,%edx,2),%eax
 85455d2:	66 3d e7 03          	cmp    $0x3e7,%ax
 85455d6:	7e 0e                	jle    85455e6 <_ZN16CItemMakingSkill24GainItemMakingSkillPointEPK14CStackableItemP5CUser+0x206>
 85455d8:	c7 45 ec 5f 00 00 00 	movl   $0x5f,-0x14(%ebp)
 85455df:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 85455e6:	8b 55 d8             	mov    -0x28(%ebp),%edx
 85455e9:	8b 45 08             	mov    0x8(%ebp),%eax
 85455ec:	0f b7 44 50 06       	movzwl 0x6(%eax,%edx,2),%eax
 85455f1:	66 89 45 f2          	mov    %ax,-0xe(%ebp)
 85455f5:	8b 45 10             	mov    0x10(%ebp),%eax
 85455f8:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85455fc:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85455ff:	89 44 24 08          	mov    %eax,0x8(%esp)
 8545603:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8545606:	89 44 24 04          	mov    %eax,0x4(%esp)
 854560a:	8b 45 08             	mov    0x8(%ebp),%eax
 854560d:	89 04 24             	mov    %eax,(%esp)
 8545610:	e8 07 01 00 00       	call   854571c <_ZN16CItemMakingSkill12UpSkillLevelE21ENUM_ITEM_MAKING_TYPEiP5CUser>
 8545615:	8b 55 d8             	mov    -0x28(%ebp),%edx
 8545618:	8b 45 08             	mov    0x8(%ebp),%eax
 854561b:	0f b7 44 50 06       	movzwl 0x6(%eax,%edx,2),%eax
 8545620:	0f bf d0             	movswl %ax,%edx
 8545623:	0f bf 45 f2          	movswl -0xe(%ebp),%eax
 8545627:	89 d1                	mov    %edx,%ecx
 8545629:	29 c1                	sub    %eax,%ecx
 854562b:	89 c8                	mov    %ecx,%eax
 854562d:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8545630:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8545633:	89 04 24             	mov    %eax,(%esp)
 8545636:	e8 11 87 04 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 854563b:	c7 44 24 08 5f 01 00 	movl   $0x15f,0x8(%esp)
 8545642:	00 
 8545643:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 854564a:	00 
 854564b:	8d 45 c0             	lea    -0x40(%ebp),%eax
 854564e:	89 04 24             	mov    %eax,(%esp)
 8545651:	e8 a6 62 b8 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8545656:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8545659:	89 44 24 04          	mov    %eax,0x4(%esp)
 854565d:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8545660:	89 04 24             	mov    %eax,(%esp)
 8545663:	e8 b8 62 b8 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8545668:	8b 45 d8             	mov    -0x28(%ebp),%eax
 854566b:	89 44 24 04          	mov    %eax,0x4(%esp)
 854566f:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8545672:	89 04 24             	mov    %eax,(%esp)
 8545675:	e8 a6 62 b8 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 854567a:	8b 45 e8             	mov    -0x18(%ebp),%eax
 854567d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8545681:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8545684:	89 04 24             	mov    %eax,(%esp)
 8545687:	e8 18 48 b9 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 854568c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8545693:	00 
 8545694:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8545697:	89 04 24             	mov    %eax,(%esp)
 854569a:	e8 b9 62 b8 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 854569f:	8d 45 c0             	lea    -0x40(%ebp),%eax
 85456a2:	89 44 24 04          	mov    %eax,0x4(%esp)
 85456a6:	8b 45 10             	mov    0x10(%ebp),%eax
 85456a9:	89 04 24             	mov    %eax,(%esp)
 85456ac:	e8 09 2f 10 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 85456b1:	8b 55 d8             	mov    -0x28(%ebp),%edx
 85456b4:	8b 45 08             	mov    0x8(%ebp),%eax
 85456b7:	0f b7 44 50 06       	movzwl 0x6(%eax,%edx,2),%eax
 85456bc:	98                   	cwtl
 85456bd:	8b 55 10             	mov    0x10(%ebp),%edx
 85456c0:	81 c2 00 97 07 00    	add    $0x79700,%edx
 85456c6:	89 44 24 10          	mov    %eax,0x10(%esp)
 85456ca:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85456cd:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85456d1:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85456d4:	89 44 24 08          	mov    %eax,0x8(%esp)
 85456d8:	8b 45 d8             	mov    -0x28(%ebp),%eax
 85456db:	89 44 24 04          	mov    %eax,0x4(%esp)
 85456df:	89 14 24             	mov    %edx,(%esp)
 85456e2:	e8 a1 13 14 00       	call   8686a88 <_ZN15cUserHistoryLog18ItemMakingSkillAddE21ENUM_ITEM_MAKING_TYPEiis>
 85456e7:	eb 1b                	jmp    8545704 <_ZN16CItemMakingSkill24GainItemMakingSkillPointEPK14CStackableItemP5CUser+0x324>
 85456e9:	89 d3                	mov    %edx,%ebx
 85456eb:	89 c6                	mov    %eax,%esi
 85456ed:	8d 45 c0             	lea    -0x40(%ebp),%eax
 85456f0:	89 04 24             	mov    %eax,(%esp)
 85456f3:	e8 88 87 04 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 85456f8:	89 f0                	mov    %esi,%eax
 85456fa:	89 da                	mov    %ebx,%edx
 85456fc:	89 04 24             	mov    %eax,(%esp)
 85456ff:	e8 4c e0 59 00       	call   8ae3750 <_Unwind_Resume>
 8545704:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8545707:	89 04 24             	mov    %eax,(%esp)
 854570a:	e8 71 87 04 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 854570f:	eb 01                	jmp    8545712 <_ZN16CItemMakingSkill24GainItemMakingSkillPointEPK14CStackableItemP5CUser+0x332>
 8545711:	90                   	nop
 8545712:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8545715:	83 c4 00             	add    $0x0,%esp
 8545718:	5b                   	pop    %ebx
 8545719:	5e                   	pop    %esi
 854571a:	5d                   	pop    %ebp
 854571b:	c3                   	ret

```

```c
// CItemMakingSkill::GainItemMakingSkillPoint @ 0x85453e0

/* CItemMakingSkill::GainItemMakingSkillPoint(CStackableItem const*, CUser*) */

void __thiscall
CItemMakingSkill::GainItemMakingSkillPoint
          (CItemMakingSkill *this,CStackableItem *param_1,CUser *param_2)

{
  short sVar1;
  bool bVar2;
  CDataManager *this_00;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  PacketGuard local_44 [12];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_38 [4];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_34 [4];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_30 [4];
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  short local_12;
  uint local_10;
  
  local_2c = CItem::GetUpSkillType((CItem *)param_1);
  local_28 = CItem::GetNeedLevel((CItem *)param_1);
  this_00 = (CDataManager *)G_CDataManager();
  local_24 = CDataManager::GetItemMakingSkill(this_00);
  local_20 = GetItemMakingSkillLevel(this,param_1,param_2);
  uVar3 = CMTRand::randInt(*(CMTRand **)(this + 0x1c));
  local_1c = uVar3 % *(uint *)(local_24 + 0x28) + *(int *)(local_24 + 0x24);
  local_18 = 0;
  if (*(int *)(local_24 + 0x2c) <= local_20 - local_28) {
    local_18 = 0xd;
    local_1c = 0;
  }
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::rend(local_38);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::rbegin(local_34);
  bVar2 = std::operator==((reverse_iterator *)local_34,(reverse_iterator *)local_38);
  if (!bVar2) {
    iVar4 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_2);
    if (iVar4 == 0x46) {
      sVar1 = *(short *)(this + local_2c * 2 + 6);
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::rbegin(local_30);
      piVar5 = (int *)std::
                      reverse_iterator<__gnu_cxx::__normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>>
                      ::operator->((reverse_iterator<__gnu_cxx::__normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>>
                                    *)local_30);
      if (*piVar5 <= (int)sVar1) {
        local_18 = 0x16;
        local_1c = 0;
      }
    }
    else {
      local_10 = 0;
      while( true ) {
        uVar3 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                          ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                           (local_24 + 0x18));
        if (uVar3 <= local_10) break;
        iVar4 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_2);
        iVar6 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                          ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                           (local_24 + 0x18),local_10);
        if (iVar4 < *(int *)(iVar6 + 4)) {
          sVar1 = *(short *)(this + local_2c * 2 + 6);
          piVar5 = (int *)std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::
                          operator[]((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                      *)(local_24 + 0x18),local_10);
          if (*piVar5 <= (int)sVar1) {
            local_18 = 0x16;
            local_1c = 0;
            break;
          }
        }
        local_10 = local_10 + 1;
      }
    }
    if (999 < *(short *)(this + local_2c * 2 + 6)) {
      local_18 = 0x5f;
      local_1c = 0;
    }
    local_12 = *(short *)(this + local_2c * 2 + 6);
    UpSkillLevel(this,local_2c,local_1c,param_2);
    local_1c = (int)*(short *)(this + local_2c * 2 + 6) - (int)local_12;
    PacketGuard::PacketGuard(local_44);
                    /* try { // try from 08545651 to 085456e6 has its CatchHandler @ 085456e9 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_44,0,0x15f);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_44,local_18);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_44,local_2c);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_44,local_1c);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_44,true);
    CUser::Send(param_2,local_44);
    cUserHistoryLog::ItemMakingSkillAdd
              ((cUserHistoryLog *)(param_2 + 0x79700),local_2c,local_18,local_1c,
               (int)*(short *)(this + local_2c * 2 + 6));
    PacketGuard::~PacketGuard(local_44);
  }
  return;
}

```

---

## GetItemMakingSkillLevel

```asm
// === 08545cf4 CItemMakingSkill::GetItemMakingSkillLevel  [0x08545cf4-0x8545d23] ===
 8545cf4:	55                   	push   %ebp
 8545cf5:	89 e5                	mov    %esp,%ebp
 8545cf7:	83 ec 28             	sub    $0x28,%esp
 8545cfa:	8b 45 0c             	mov    0xc(%ebp),%eax
 8545cfd:	89 04 24             	mov    %eax,(%esp)
 8545d00:	e8 c7 02 00 00       	call   8545fcc <_ZNK5CItem14GetUpSkillTypeEv>
 8545d05:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8545d08:	8b 45 10             	mov    0x10(%ebp),%eax
 8545d0b:	89 44 24 08          	mov    %eax,0x8(%esp)
 8545d0f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8545d12:	89 44 24 04          	mov    %eax,0x4(%esp)
 8545d16:	8b 45 08             	mov    0x8(%ebp),%eax
 8545d19:	89 04 24             	mov    %eax,(%esp)
 8545d1c:	e8 eb fe ff ff       	call   8545c0c <_ZNK16CItemMakingSkill13GetSkillLevelE21ENUM_ITEM_MAKING_TYPEP5CUser>
 8545d21:	c9                   	leave
 8545d22:	c3                   	ret
 8545d23:	90                   	nop

```

```c
// CItemMakingSkill::GetItemMakingSkillLevel @ 0x8545cf4

/* CItemMakingSkill::GetItemMakingSkillLevel(CStackableItem const*, CUser*) */

void __thiscall
CItemMakingSkill::GetItemMakingSkillLevel
          (CItemMakingSkill *this,CStackableItem *param_1,CUser *param_2)

{
  undefined4 uVar1;
  
  uVar1 = CItem::GetUpSkillType((CItem *)param_1);
  GetSkillLevel(this,uVar1,param_2);
  return;
}

```

---

## GetPrevExpGap

```asm
// === 08545b7e CItemMakingSkill::GetPrevExpGap  [0x08545b7e-0x8545c0b] ===
 8545b7e:	55                   	push   %ebp
 8545b7f:	89 e5                	mov    %esp,%ebp
 8545b81:	53                   	push   %ebx
 8545b82:	83 ec 24             	sub    $0x24,%esp
 8545b85:	e8 11 66 b8 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8545b8a:	89 04 24             	mov    %eax,(%esp)
 8545b8d:	e8 3c 03 e2 ff       	call   8365ece <_ZNK12CDataManager18GetItemMakingSkillEv>
 8545b92:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8545b95:	8b 45 0c             	mov    0xc(%ebp),%eax
 8545b98:	83 e8 01             	sub    $0x1,%eax
 8545b9b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8545b9e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8545ba1:	83 c0 18             	add    $0x18,%eax
 8545ba4:	89 04 24             	mov    %eax,(%esp)
 8545ba7:	e8 68 7c b9 ff       	call   80dd814 <_ZNKSt6vectorISt4pairIiiESaIS1_EE4sizeEv>
 8545bac:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 8545baf:	76 06                	jbe    8545bb7 <_ZN16CItemMakingSkill13GetPrevExpGapEi+0x39>
 8545bb1:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8545bb5:	75 07                	jne    8545bbe <_ZN16CItemMakingSkill13GetPrevExpGapEi+0x40>
 8545bb7:	b8 01 00 00 00       	mov    $0x1,%eax
 8545bbc:	eb 05                	jmp    8545bc3 <_ZN16CItemMakingSkill13GetPrevExpGapEi+0x45>
 8545bbe:	b8 00 00 00 00       	mov    $0x0,%eax
 8545bc3:	84 c0                	test   %al,%al
 8545bc5:	74 07                	je     8545bce <_ZN16CItemMakingSkill13GetPrevExpGapEi+0x50>
 8545bc7:	b8 00 00 00 00       	mov    $0x0,%eax
 8545bcc:	eb 37                	jmp    8545c05 <_ZN16CItemMakingSkill13GetPrevExpGapEi+0x87>
 8545bce:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8545bd1:	8d 50 18             	lea    0x18(%eax),%edx
 8545bd4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8545bd7:	89 44 24 04          	mov    %eax,0x4(%esp)
 8545bdb:	89 14 24             	mov    %edx,(%esp)
 8545bde:	e8 2f ef c6 ff       	call   81b4b12 <_ZNKSt6vectorISt4pairIiiESaIS1_EEixEj>
 8545be3:	8b 18                	mov    (%eax),%ebx
 8545be5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8545be8:	8d 50 ff             	lea    -0x1(%eax),%edx
 8545beb:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8545bee:	83 c0 18             	add    $0x18,%eax
 8545bf1:	89 54 24 04          	mov    %edx,0x4(%esp)
 8545bf5:	89 04 24             	mov    %eax,(%esp)
 8545bf8:	e8 15 ef c6 ff       	call   81b4b12 <_ZNKSt6vectorISt4pairIiiESaIS1_EEixEj>
 8545bfd:	8b 00                	mov    (%eax),%eax
 8545bff:	89 da                	mov    %ebx,%edx
 8545c01:	29 c2                	sub    %eax,%edx
 8545c03:	89 d0                	mov    %edx,%eax
 8545c05:	83 c4 24             	add    $0x24,%esp
 8545c08:	5b                   	pop    %ebx
 8545c09:	5d                   	pop    %ebp
 8545c0a:	c3                   	ret
 8545c0b:	90                   	nop

```

```c
// CItemMakingSkill::GetPrevExpGap @ 0x8545b7e

/* CItemMakingSkill::GetPrevExpGap(int) */

int __thiscall CItemMakingSkill::GetPrevExpGap(CItemMakingSkill *this,int param_1)

{
  bool bVar1;
  CDataManager *this_00;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  
  this_00 = (CDataManager *)G_CDataManager();
  iVar2 = CDataManager::GetItemMakingSkill(this_00);
  uVar3 = param_1 - 1;
  uVar4 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                    ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(iVar2 + 0x18)
                    );
  if ((uVar3 < uVar4) && (uVar3 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    iVar5 = 0;
  }
  else {
    piVar6 = (int *)std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                               (iVar2 + 0x18),uVar3);
    iVar5 = *piVar6;
    piVar6 = (int *)std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                               (iVar2 + 0x18),param_1 - 2);
    iVar5 = iVar5 - *piVar6;
  }
  return iVar5;
}

```

---

## GetSkillLevel

```asm
// === 08545c0c CItemMakingSkill::GetSkillLevel  [0x08545c0c-0x8545cf3] ===
 8545c0c:	55                   	push   %ebp
 8545c0d:	89 e5                	mov    %esp,%ebp
 8545c0f:	53                   	push   %ebx
 8545c10:	83 ec 24             	sub    $0x24,%esp
 8545c13:	e8 83 65 b8 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8545c18:	89 04 24             	mov    %eax,(%esp)
 8545c1b:	e8 ae 02 e2 ff       	call   8365ece <_ZNK12CDataManager18GetItemMakingSkillEv>
 8545c20:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8545c23:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8545c2a:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8545c31:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8545c38:	eb 32                	jmp    8545c6c <_ZNK16CItemMakingSkill13GetSkillLevelE21ENUM_ITEM_MAKING_TYPEP5CUser+0x60>
 8545c3a:	8b 55 0c             	mov    0xc(%ebp),%edx
 8545c3d:	8b 45 08             	mov    0x8(%ebp),%eax
 8545c40:	0f b7 44 50 06       	movzwl 0x6(%eax,%edx,2),%eax
 8545c45:	0f bf d8             	movswl %ax,%ebx
 8545c48:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8545c4b:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8545c4e:	83 c2 18             	add    $0x18,%edx
 8545c51:	89 44 24 04          	mov    %eax,0x4(%esp)
 8545c55:	89 14 24             	mov    %edx,(%esp)
 8545c58:	e8 b5 ee c6 ff       	call   81b4b12 <_ZNKSt6vectorISt4pairIiiESaIS1_EEixEj>
 8545c5d:	8b 00                	mov    (%eax),%eax
 8545c5f:	39 c3                	cmp    %eax,%ebx
 8545c61:	0f 9d c0             	setge  %al
 8545c64:	84 c0                	test   %al,%al
 8545c66:	74 1e                	je     8545c86 <_ZNK16CItemMakingSkill13GetSkillLevelE21ENUM_ITEM_MAKING_TYPEP5CUser+0x7a>
 8545c68:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8545c6c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8545c6f:	83 c0 18             	add    $0x18,%eax
 8545c72:	89 04 24             	mov    %eax,(%esp)
 8545c75:	e8 9a 7b b9 ff       	call   80dd814 <_ZNKSt6vectorISt4pairIiiESaIS1_EE4sizeEv>
 8545c7a:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 8545c7d:	0f 9f c0             	setg   %al
 8545c80:	84 c0                	test   %al,%al
 8545c82:	75 b6                	jne    8545c3a <_ZNK16CItemMakingSkill13GetSkillLevelE21ENUM_ITEM_MAKING_TYPEP5CUser+0x2e>
 8545c84:	eb 01                	jmp    8545c87 <_ZNK16CItemMakingSkill13GetSkillLevelE21ENUM_ITEM_MAKING_TYPEP5CUser+0x7b>
 8545c86:	90                   	nop
 8545c87:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8545c8e:	eb 32                	jmp    8545cc2 <_ZNK16CItemMakingSkill13GetSkillLevelE21ENUM_ITEM_MAKING_TYPEP5CUser+0xb6>
 8545c90:	8b 45 10             	mov    0x10(%ebp),%eax
 8545c93:	89 04 24             	mov    %eax,(%esp)
 8545c96:	e8 1d 46 b9 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 8545c9b:	89 c3                	mov    %eax,%ebx
 8545c9d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8545ca0:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8545ca3:	83 c2 18             	add    $0x18,%edx
 8545ca6:	89 44 24 04          	mov    %eax,0x4(%esp)
 8545caa:	89 14 24             	mov    %edx,(%esp)
 8545cad:	e8 60 ee c6 ff       	call   81b4b12 <_ZNKSt6vectorISt4pairIiiESaIS1_EEixEj>
 8545cb2:	8b 40 04             	mov    0x4(%eax),%eax
 8545cb5:	39 c3                	cmp    %eax,%ebx
 8545cb7:	0f 9d c0             	setge  %al
 8545cba:	84 c0                	test   %al,%al
 8545cbc:	74 1e                	je     8545cdc <_ZNK16CItemMakingSkill13GetSkillLevelE21ENUM_ITEM_MAKING_TYPEP5CUser+0xd0>
 8545cbe:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8545cc2:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8545cc5:	83 c0 18             	add    $0x18,%eax
 8545cc8:	89 04 24             	mov    %eax,(%esp)
 8545ccb:	e8 44 7b b9 ff       	call   80dd814 <_ZNKSt6vectorISt4pairIiiESaIS1_EE4sizeEv>
 8545cd0:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 8545cd3:	0f 9f c0             	setg   %al
 8545cd6:	84 c0                	test   %al,%al
 8545cd8:	75 b6                	jne    8545c90 <_ZNK16CItemMakingSkill13GetSkillLevelE21ENUM_ITEM_MAKING_TYPEP5CUser+0x84>
 8545cda:	eb 01                	jmp    8545cdd <_ZNK16CItemMakingSkill13GetSkillLevelE21ENUM_ITEM_MAKING_TYPEP5CUser+0xd1>
 8545cdc:	90                   	nop
 8545cdd:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8545ce0:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 8545ce3:	7f 05                	jg     8545cea <_ZNK16CItemMakingSkill13GetSkillLevelE21ENUM_ITEM_MAKING_TYPEP5CUser+0xde>
 8545ce5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8545ce8:	eb 03                	jmp    8545ced <_ZNK16CItemMakingSkill13GetSkillLevelE21ENUM_ITEM_MAKING_TYPEP5CUser+0xe1>
 8545cea:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8545ced:	83 c4 24             	add    $0x24,%esp
 8545cf0:	5b                   	pop    %ebx
 8545cf1:	5d                   	pop    %ebp
 8545cf2:	c3                   	ret
 8545cf3:	90                   	nop

```

```c
// CItemMakingSkill::GetSkillLevel @ 0x8545c0c

/* CItemMakingSkill::GetSkillLevel(ENUM_ITEM_MAKING_TYPE, CUser*) const */

uint __thiscall
CItemMakingSkill::GetSkillLevel(CItemMakingSkill *this,int param_2,CUserCharacInfo *param_3)

{
  short sVar1;
  CDataManager *this_00;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint local_14;
  uint local_10;
  
  this_00 = (CDataManager *)G_CDataManager();
  iVar2 = CDataManager::GetItemMakingSkill(this_00);
  local_14 = 0;
  while ((iVar4 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                             (iVar2 + 0x18)), (int)local_14 < iVar4 &&
         (sVar1 = *(short *)(this + param_2 * 2 + 6),
         piVar3 = (int *)std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::
                         operator[]((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *
                                    )(iVar2 + 0x18),local_14), *piVar3 <= (int)sVar1))) {
    local_14 = local_14 + 1;
  }
  for (local_10 = 0;
      iVar4 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                        ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                         (iVar2 + 0x18)), (int)local_10 < iVar4; local_10 = local_10 + 1) {
    iVar4 = CUserCharacInfo::get_charac_level(param_3);
    iVar5 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                      ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                       (iVar2 + 0x18),local_10);
    if (iVar4 < *(int *)(iVar5 + 4)) break;
  }
  if ((int)local_14 <= (int)local_10) {
    local_10 = local_14;
  }
  return local_10;
}

```

---

## Send_ItemMakingSkillList

```asm
// === 08545a62 CItemMakingSkill::Send_ItemMakingSkillList  [0x08545a62-0x8545b41] ===
 8545a62:	55                   	push   %ebp
 8545a63:	89 e5                	mov    %esp,%ebp
 8545a65:	56                   	push   %esi
 8545a66:	53                   	push   %ebx
 8545a67:	83 ec 20             	sub    $0x20,%esp
 8545a6a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8545a6d:	89 04 24             	mov    %eax,(%esp)
 8545a70:	e8 d7 82 04 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8545a75:	c7 44 24 08 5e 01 00 	movl   $0x15e,0x8(%esp)
 8545a7c:	00 
 8545a7d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8545a84:	00 
 8545a85:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8545a88:	89 04 24             	mov    %eax,(%esp)
 8545a8b:	e8 6c 5e b8 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8545a90:	c7 44 24 04 0b 00 00 	movl   $0xb,0x4(%esp)
 8545a97:	00 
 8545a98:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8545a9b:	89 04 24             	mov    %eax,(%esp)
 8545a9e:	e8 7d 5e b8 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8545aa3:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8545aaa:	eb 31                	jmp    8545add <_ZNK16CItemMakingSkill24Send_ItemMakingSkillListEP5CUser+0x7b>
 8545aac:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8545aaf:	89 44 24 04          	mov    %eax,0x4(%esp)
 8545ab3:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8545ab6:	89 04 24             	mov    %eax,(%esp)
 8545ab9:	e8 62 5e b8 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8545abe:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8545ac1:	8b 45 08             	mov    0x8(%ebp),%eax
 8545ac4:	0f b7 44 50 06       	movzwl 0x6(%eax,%edx,2),%eax
 8545ac9:	98                   	cwtl
 8545aca:	89 44 24 04          	mov    %eax,0x4(%esp)
 8545ace:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8545ad1:	89 04 24             	mov    %eax,(%esp)
 8545ad4:	e8 cb 43 b9 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8545ad9:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8545add:	83 7d f4 0a          	cmpl   $0xa,-0xc(%ebp)
 8545ae1:	0f 9e c0             	setle  %al
 8545ae4:	84 c0                	test   %al,%al
 8545ae6:	75 c4                	jne    8545aac <_ZNK16CItemMakingSkill24Send_ItemMakingSkillListEP5CUser+0x4a>
 8545ae8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8545aef:	00 
 8545af0:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8545af3:	89 04 24             	mov    %eax,(%esp)
 8545af6:	e8 5d 5e b8 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8545afb:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8545afe:	89 44 24 04          	mov    %eax,0x4(%esp)
 8545b02:	8b 45 0c             	mov    0xc(%ebp),%eax
 8545b05:	89 04 24             	mov    %eax,(%esp)
 8545b08:	e8 ad 2a 10 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8545b0d:	bb 01 00 00 00       	mov    $0x1,%ebx
 8545b12:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8545b15:	89 04 24             	mov    %eax,(%esp)
 8545b18:	e8 63 83 04 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8545b1d:	89 d8                	mov    %ebx,%eax
 8545b1f:	83 c4 20             	add    $0x20,%esp
 8545b22:	5b                   	pop    %ebx
 8545b23:	5e                   	pop    %esi
 8545b24:	5d                   	pop    %ebp
 8545b25:	c3                   	ret
 8545b26:	89 d3                	mov    %edx,%ebx
 8545b28:	89 c6                	mov    %eax,%esi
 8545b2a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8545b2d:	89 04 24             	mov    %eax,(%esp)
 8545b30:	e8 4b 83 04 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8545b35:	89 f0                	mov    %esi,%eax
 8545b37:	89 da                	mov    %ebx,%edx
 8545b39:	89 04 24             	mov    %eax,(%esp)
 8545b3c:	e8 0f dc 59 00       	call   8ae3750 <_Unwind_Resume>
 8545b41:	90                   	nop

```

```c
// CItemMakingSkill::Send_ItemMakingSkillList @ 0x8545a62

/* CItemMakingSkill::Send_ItemMakingSkillList(CUser*) const */

undefined4 __thiscall
CItemMakingSkill::Send_ItemMakingSkillList(CItemMakingSkill *this,CUser *param_1)

{
  PacketGuard local_1c [12];
  int local_10;
  
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 08545a8b to 08545b0c has its CatchHandler @ 08545b26 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0x15e);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0xb);
  for (local_10 = 0; local_10 < 0xb; local_10 = local_10 + 1) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,local_10);
    InterfacePacketBuf::put_short
              ((InterfacePacketBuf *)local_1c,(int)*(short *)(this + local_10 * 2 + 6));
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  CUser::Send(param_1,local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return 1;
}

```

---

## SetItemMakingSkillPoint

```asm
// === 08545d24 CItemMakingSkill::SetItemMakingSkillPoint  [0x08545d24-0x8545f6e] ===
 8545d24:	55                   	push   %ebp
 8545d25:	89 e5                	mov    %esp,%ebp
 8545d27:	53                   	push   %ebx
 8545d28:	83 ec 34             	sub    $0x34,%esp
 8545d2b:	e8 6b 64 b8 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8545d30:	89 04 24             	mov    %eax,(%esp)
 8545d33:	e8 96 01 e2 ff       	call   8365ece <_ZNK12CDataManager18GetItemMakingSkillEv>
 8545d38:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8545d3b:	83 7d 0c 0a          	cmpl   $0xa,0xc(%ebp)
 8545d3f:	0f 8f 1e 02 00 00    	jg     8545f63 <_ZN16CItemMakingSkill23SetItemMakingSkillPointEiiP5CUser+0x23f>
 8545d45:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8545d48:	8d 50 18             	lea    0x18(%eax),%edx
 8545d4b:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8545d4e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8545d52:	89 04 24             	mov    %eax,(%esp)
 8545d55:	e8 e6 02 00 00       	call   8546040 <_ZNKSt6vectorISt4pairIiiESaIS1_EE4rendEv>
 8545d5a:	83 ec 04             	sub    $0x4,%esp
 8545d5d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8545d60:	8d 50 18             	lea    0x18(%eax),%edx
 8545d63:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8545d66:	89 54 24 04          	mov    %edx,0x4(%esp)
 8545d6a:	89 04 24             	mov    %eax,(%esp)
 8545d6d:	e8 8c 02 00 00       	call   8545ffe <_ZNKSt6vectorISt4pairIiiESaIS1_EE6rbeginEv>
 8545d72:	83 ec 04             	sub    $0x4,%esp
 8545d75:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8545d78:	89 44 24 04          	mov    %eax,0x4(%esp)
 8545d7c:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8545d7f:	89 04 24             	mov    %eax,(%esp)
 8545d82:	e8 fa 02 00 00       	call   8546081 <_ZSteqIN9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS3_SaIS3_EEEEEbRKSt16reverse_iteratorIT_ESE_>
 8545d87:	84 c0                	test   %al,%al
 8545d89:	0f 85 d7 01 00 00    	jne    8545f66 <_ZN16CItemMakingSkill23SetItemMakingSkillPointEiiP5CUser+0x242>
 8545d8f:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 8545d93:	7e 33                	jle    8545dc8 <_ZN16CItemMakingSkill23SetItemMakingSkillPointEiiP5CUser+0xa4>
 8545d95:	81 7d 10 e8 03 00 00 	cmpl   $0x3e8,0x10(%ebp)
 8545d9c:	7f 2a                	jg     8545dc8 <_ZN16CItemMakingSkill23SetItemMakingSkillPointEiiP5CUser+0xa4>
 8545d9e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8545da1:	8d 50 18             	lea    0x18(%eax),%edx
 8545da4:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8545da7:	89 54 24 04          	mov    %edx,0x4(%esp)
 8545dab:	89 04 24             	mov    %eax,(%esp)
 8545dae:	e8 4b 02 00 00       	call   8545ffe <_ZNKSt6vectorISt4pairIiiESaIS1_EE6rbeginEv>
 8545db3:	83 ec 04             	sub    $0x4,%esp
 8545db6:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8545db9:	89 04 24             	mov    %eax,(%esp)
 8545dbc:	e8 05 03 00 00       	call   85460c6 <_ZNKSt16reverse_iteratorIN9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS3_SaIS3_EEEEEptEv>
 8545dc1:	8b 00                	mov    (%eax),%eax
 8545dc3:	3b 45 10             	cmp    0x10(%ebp),%eax
 8545dc6:	7d 07                	jge    8545dcf <_ZN16CItemMakingSkill23SetItemMakingSkillPointEiiP5CUser+0xab>
 8545dc8:	b8 01 00 00 00       	mov    $0x1,%eax
 8545dcd:	eb 05                	jmp    8545dd4 <_ZN16CItemMakingSkill23SetItemMakingSkillPointEiiP5CUser+0xb0>
 8545dcf:	b8 00 00 00 00       	mov    $0x0,%eax
 8545dd4:	84 c0                	test   %al,%al
 8545dd6:	0f 85 8d 01 00 00    	jne    8545f69 <_ZN16CItemMakingSkill23SetItemMakingSkillPointEiiP5CUser+0x245>
 8545ddc:	8b 55 0c             	mov    0xc(%ebp),%edx
 8545ddf:	8b 45 10             	mov    0x10(%ebp),%eax
 8545de2:	89 c1                	mov    %eax,%ecx
 8545de4:	8b 45 08             	mov    0x8(%ebp),%eax
 8545de7:	66 89 4c 50 06       	mov    %cx,0x6(%eax,%edx,2)
 8545dec:	8b 45 14             	mov    0x14(%ebp),%eax
 8545def:	89 04 24             	mov    %eax,(%esp)
 8545df2:	e8 c1 44 b9 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 8545df7:	83 f8 46             	cmp    $0x46,%eax
 8545dfa:	0f 94 c0             	sete   %al
 8545dfd:	84 c0                	test   %al,%al
 8545dff:	74 77                	je     8545e78 <_ZN16CItemMakingSkill23SetItemMakingSkillPointEiiP5CUser+0x154>
 8545e01:	8b 55 0c             	mov    0xc(%ebp),%edx
 8545e04:	8b 45 08             	mov    0x8(%ebp),%eax
 8545e07:	0f b7 44 50 06       	movzwl 0x6(%eax,%edx,2),%eax
 8545e0c:	0f bf d8             	movswl %ax,%ebx
 8545e0f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8545e12:	8d 50 18             	lea    0x18(%eax),%edx
 8545e15:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8545e18:	89 54 24 04          	mov    %edx,0x4(%esp)
 8545e1c:	89 04 24             	mov    %eax,(%esp)
 8545e1f:	e8 da 01 00 00       	call   8545ffe <_ZNKSt6vectorISt4pairIiiESaIS1_EE6rbeginEv>
 8545e24:	83 ec 04             	sub    $0x4,%esp
 8545e27:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8545e2a:	89 04 24             	mov    %eax,(%esp)
 8545e2d:	e8 94 02 00 00       	call   85460c6 <_ZNKSt16reverse_iteratorIN9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS3_SaIS3_EEEEEptEv>
 8545e32:	8b 00                	mov    (%eax),%eax
 8545e34:	39 c3                	cmp    %eax,%ebx
 8545e36:	0f 9f c0             	setg   %al
 8545e39:	84 c0                	test   %al,%al
 8545e3b:	0f 84 e5 00 00 00    	je     8545f26 <_ZN16CItemMakingSkill23SetItemMakingSkillPointEiiP5CUser+0x202>
 8545e41:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 8545e44:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8545e47:	8d 50 18             	lea    0x18(%eax),%edx
 8545e4a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8545e4d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8545e51:	89 04 24             	mov    %eax,(%esp)
 8545e54:	e8 a5 01 00 00       	call   8545ffe <_ZNKSt6vectorISt4pairIiiESaIS1_EE6rbeginEv>
 8545e59:	83 ec 04             	sub    $0x4,%esp
 8545e5c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8545e5f:	89 04 24             	mov    %eax,(%esp)
 8545e62:	e8 5f 02 00 00       	call   85460c6 <_ZNKSt16reverse_iteratorIN9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS3_SaIS3_EEEEEptEv>
 8545e67:	8b 00                	mov    (%eax),%eax
 8545e69:	89 c2                	mov    %eax,%edx
 8545e6b:	8b 45 08             	mov    0x8(%ebp),%eax
 8545e6e:	66 89 54 58 06       	mov    %dx,0x6(%eax,%ebx,2)
 8545e73:	e9 ae 00 00 00       	jmp    8545f26 <_ZN16CItemMakingSkill23SetItemMakingSkillPointEiiP5CUser+0x202>
 8545e78:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8545e7f:	e9 86 00 00 00       	jmp    8545f0a <_ZN16CItemMakingSkill23SetItemMakingSkillPointEiiP5CUser+0x1e6>
 8545e84:	8b 45 14             	mov    0x14(%ebp),%eax
 8545e87:	89 04 24             	mov    %eax,(%esp)
 8545e8a:	e8 29 44 b9 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 8545e8f:	89 c3                	mov    %eax,%ebx
 8545e91:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8545e94:	8d 50 18             	lea    0x18(%eax),%edx
 8545e97:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8545e9a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8545e9e:	89 14 24             	mov    %edx,(%esp)
 8545ea1:	e8 6c ec c6 ff       	call   81b4b12 <_ZNKSt6vectorISt4pairIiiESaIS1_EEixEj>
 8545ea6:	8b 40 04             	mov    0x4(%eax),%eax
 8545ea9:	39 c3                	cmp    %eax,%ebx
 8545eab:	0f 9c c0             	setl   %al
 8545eae:	84 c0                	test   %al,%al
 8545eb0:	74 54                	je     8545f06 <_ZN16CItemMakingSkill23SetItemMakingSkillPointEiiP5CUser+0x1e2>
 8545eb2:	8b 55 0c             	mov    0xc(%ebp),%edx
 8545eb5:	8b 45 08             	mov    0x8(%ebp),%eax
 8545eb8:	0f b7 44 50 06       	movzwl 0x6(%eax,%edx,2),%eax
 8545ebd:	0f bf d8             	movswl %ax,%ebx
 8545ec0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8545ec3:	8d 50 18             	lea    0x18(%eax),%edx
 8545ec6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8545ec9:	89 44 24 04          	mov    %eax,0x4(%esp)
 8545ecd:	89 14 24             	mov    %edx,(%esp)
 8545ed0:	e8 3d ec c6 ff       	call   81b4b12 <_ZNKSt6vectorISt4pairIiiESaIS1_EEixEj>
 8545ed5:	8b 00                	mov    (%eax),%eax
 8545ed7:	39 c3                	cmp    %eax,%ebx
 8545ed9:	0f 9f c0             	setg   %al
 8545edc:	84 c0                	test   %al,%al
 8545ede:	74 26                	je     8545f06 <_ZN16CItemMakingSkill23SetItemMakingSkillPointEiiP5CUser+0x1e2>
 8545ee0:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 8545ee3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8545ee6:	8d 50 18             	lea    0x18(%eax),%edx
 8545ee9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8545eec:	89 44 24 04          	mov    %eax,0x4(%esp)
 8545ef0:	89 14 24             	mov    %edx,(%esp)
 8545ef3:	e8 1a ec c6 ff       	call   81b4b12 <_ZNKSt6vectorISt4pairIiiESaIS1_EEixEj>
 8545ef8:	8b 00                	mov    (%eax),%eax
 8545efa:	89 c2                	mov    %eax,%edx
 8545efc:	8b 45 08             	mov    0x8(%ebp),%eax
 8545eff:	66 89 54 58 06       	mov    %dx,0x6(%eax,%ebx,2)
 8545f04:	eb 20                	jmp    8545f26 <_ZN16CItemMakingSkill23SetItemMakingSkillPointEiiP5CUser+0x202>
 8545f06:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8545f0a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8545f0d:	83 c0 18             	add    $0x18,%eax
 8545f10:	89 04 24             	mov    %eax,(%esp)
 8545f13:	e8 fc 78 b9 ff       	call   80dd814 <_ZNKSt6vectorISt4pairIiiESaIS1_EE4sizeEv>
 8545f18:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 8545f1b:	0f 97 c0             	seta   %al
 8545f1e:	84 c0                	test   %al,%al
 8545f20:	0f 85 5e ff ff ff    	jne    8545e84 <_ZN16CItemMakingSkill23SetItemMakingSkillPointEiiP5CUser+0x160>
 8545f26:	8b 55 0c             	mov    0xc(%ebp),%edx
 8545f29:	8b 45 08             	mov    0x8(%ebp),%eax
 8545f2c:	0f b7 44 50 06       	movzwl 0x6(%eax,%edx,2),%eax
 8545f31:	66 3d e8 03          	cmp    $0x3e8,%ax
 8545f35:	7e 0d                	jle    8545f44 <_ZN16CItemMakingSkill23SetItemMakingSkillPointEiiP5CUser+0x220>
 8545f37:	8b 55 0c             	mov    0xc(%ebp),%edx
 8545f3a:	8b 45 08             	mov    0x8(%ebp),%eax
 8545f3d:	66 c7 44 50 06 e8 03 	movw   $0x3e8,0x6(%eax,%edx,2)
 8545f44:	8b 45 08             	mov    0x8(%ebp),%eax
 8545f47:	89 04 24             	mov    %eax,(%esp)
 8545f4a:	e8 75 2c b8 ff       	call   80c8bc4 <_ZN13charac_expand5CData5alterEv>
 8545f4f:	8b 45 14             	mov    0x14(%ebp),%eax
 8545f52:	89 44 24 04          	mov    %eax,0x4(%esp)
 8545f56:	8b 45 08             	mov    0x8(%ebp),%eax
 8545f59:	89 04 24             	mov    %eax,(%esp)
 8545f5c:	e8 01 fb ff ff       	call   8545a62 <_ZNK16CItemMakingSkill24Send_ItemMakingSkillListEP5CUser>
 8545f61:	eb 07                	jmp    8545f6a <_ZN16CItemMakingSkill23SetItemMakingSkillPointEiiP5CUser+0x246>
 8545f63:	90                   	nop
 8545f64:	eb 04                	jmp    8545f6a <_ZN16CItemMakingSkill23SetItemMakingSkillPointEiiP5CUser+0x246>
 8545f66:	90                   	nop
 8545f67:	eb 01                	jmp    8545f6a <_ZN16CItemMakingSkill23SetItemMakingSkillPointEiiP5CUser+0x246>
 8545f69:	90                   	nop
 8545f6a:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 8545f6d:	c9                   	leave
 8545f6e:	c3                   	ret

```

```c
// CItemMakingSkill::SetItemMakingSkillPoint @ 0x8545d24

/* CItemMakingSkill::SetItemMakingSkillPoint(int, int, CUser*) */

void __thiscall
CItemMakingSkill::SetItemMakingSkillPoint
          (CItemMakingSkill *this,int param_1,int param_2,CUser *param_3)

{
  short sVar1;
  bool bVar2;
  CDataManager *this_00;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_28 [4];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_24 [4];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_20 [4];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_1c [4];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_18 [4];
  int local_14;
  uint local_10;
  
  this_00 = (CDataManager *)G_CDataManager();
  local_14 = CDataManager::GetItemMakingSkill(this_00);
  if (10 < param_1) {
    return;
  }
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::rend(local_28);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::rbegin(local_24);
  bVar2 = std::operator==((reverse_iterator *)local_24,(reverse_iterator *)local_28);
  if (bVar2) {
    return;
  }
  if ((0 < param_2) && (param_2 < 0x3e9)) {
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::rbegin(local_20);
    piVar3 = (int *)std::
                    reverse_iterator<__gnu_cxx::__normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>>
                    ::operator->((reverse_iterator<__gnu_cxx::__normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>>
                                  *)local_20);
    if (param_2 <= *piVar3) {
      bVar2 = false;
      goto LAB_08545dd4;
    }
  }
  bVar2 = true;
LAB_08545dd4:
  if (!bVar2) {
    *(short *)(this + param_1 * 2 + 6) = (short)param_2;
    iVar4 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_3);
    if (iVar4 == 0x46) {
      sVar1 = *(short *)(this + param_1 * 2 + 6);
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::rbegin(local_1c);
      piVar3 = (int *)std::
                      reverse_iterator<__gnu_cxx::__normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>>
                      ::operator->((reverse_iterator<__gnu_cxx::__normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>>
                                    *)local_1c);
      if (*piVar3 < (int)sVar1) {
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::rbegin(local_18);
        puVar5 = (undefined4 *)
                 std::
                 reverse_iterator<__gnu_cxx::__normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>>
                 ::operator->((reverse_iterator<__gnu_cxx::__normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>>
                               *)local_18);
        *(short *)(this + param_1 * 2 + 6) = (short)*puVar5;
      }
    }
    else {
      local_10 = 0;
      while (uVar7 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                               ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                                (local_14 + 0x18)), local_10 < uVar7) {
        iVar4 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_3);
        iVar6 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                          ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                           (local_14 + 0x18),local_10);
        if ((iVar4 < *(int *)(iVar6 + 4)) &&
           (sVar1 = *(short *)(this + param_1 * 2 + 6),
           piVar3 = (int *)std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::
                           operator[]((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                       *)(local_14 + 0x18),local_10), *piVar3 < (int)sVar1)) {
          puVar5 = (undefined4 *)
                   std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                             ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                              (local_14 + 0x18),local_10);
          *(short *)(this + param_1 * 2 + 6) = (short)*puVar5;
          break;
        }
        local_10 = local_10 + 1;
      }
    }
    if (1000 < *(short *)(this + param_1 * 2 + 6)) {
      *(undefined2 *)(this + param_1 * 2 + 6) = 1000;
    }
    charac_expand::CData::alter((CData *)this);
    Send_ItemMakingSkillList(this,param_3);
  }
  return;
}

```

---

## UpSkillLevel

```asm
// === 0854571c CItemMakingSkill::UpSkillLevel  [0x0854571c-0x8545a61] ===
 854571c:	55                   	push   %ebp
 854571d:	89 e5                	mov    %esp,%ebp
 854571f:	56                   	push   %esi
 8545720:	53                   	push   %ebx
 8545721:	83 ec 60             	sub    $0x60,%esp
 8545724:	e8 72 6a b8 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8545729:	89 04 24             	mov    %eax,(%esp)
 854572c:	e8 9d 07 e2 ff       	call   8365ece <_ZNK12CDataManager18GetItemMakingSkillEv>
 8545731:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8545734:	8b 45 0c             	mov    0xc(%ebp),%eax
 8545737:	83 f8 0a             	cmp    $0xa,%eax
 854573a:	0f 8f 11 03 00 00    	jg     8545a51 <_ZN16CItemMakingSkill12UpSkillLevelE21ENUM_ITEM_MAKING_TYPEiP5CUser+0x335>
 8545740:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8545743:	8d 50 18             	lea    0x18(%eax),%edx
 8545746:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8545749:	89 54 24 04          	mov    %edx,0x4(%esp)
 854574d:	89 04 24             	mov    %eax,(%esp)
 8545750:	e8 eb 08 00 00       	call   8546040 <_ZNKSt6vectorISt4pairIiiESaIS1_EE4rendEv>
 8545755:	83 ec 04             	sub    $0x4,%esp
 8545758:	8b 45 f0             	mov    -0x10(%ebp),%eax
 854575b:	8d 50 18             	lea    0x18(%eax),%edx
 854575e:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8545761:	89 54 24 04          	mov    %edx,0x4(%esp)
 8545765:	89 04 24             	mov    %eax,(%esp)
 8545768:	e8 91 08 00 00       	call   8545ffe <_ZNKSt6vectorISt4pairIiiESaIS1_EE6rbeginEv>
 854576d:	83 ec 04             	sub    $0x4,%esp
 8545770:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8545773:	89 44 24 04          	mov    %eax,0x4(%esp)
 8545777:	8d 45 b0             	lea    -0x50(%ebp),%eax
 854577a:	89 04 24             	mov    %eax,(%esp)
 854577d:	e8 ff 08 00 00       	call   8546081 <_ZSteqIN9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS3_SaIS3_EEEEEbRKSt16reverse_iteratorIT_ESE_>
 8545782:	84 c0                	test   %al,%al
 8545784:	0f 85 ca 02 00 00    	jne    8545a54 <_ZN16CItemMakingSkill12UpSkillLevelE21ENUM_ITEM_MAKING_TYPEiP5CUser+0x338>
 854578a:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 854578e:	7e 35                	jle    85457c5 <_ZN16CItemMakingSkill12UpSkillLevelE21ENUM_ITEM_MAKING_TYPEiP5CUser+0xa9>
 8545790:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8545793:	8b 40 28             	mov    0x28(%eax),%eax
 8545796:	3b 45 10             	cmp    0x10(%ebp),%eax
 8545799:	7c 2a                	jl     85457c5 <_ZN16CItemMakingSkill12UpSkillLevelE21ENUM_ITEM_MAKING_TYPEiP5CUser+0xa9>
 854579b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 854579e:	8d 50 18             	lea    0x18(%eax),%edx
 85457a1:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 85457a4:	89 54 24 04          	mov    %edx,0x4(%esp)
 85457a8:	89 04 24             	mov    %eax,(%esp)
 85457ab:	e8 4e 08 00 00       	call   8545ffe <_ZNKSt6vectorISt4pairIiiESaIS1_EE6rbeginEv>
 85457b0:	83 ec 04             	sub    $0x4,%esp
 85457b3:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 85457b6:	89 04 24             	mov    %eax,(%esp)
 85457b9:	e8 08 09 00 00       	call   85460c6 <_ZNKSt16reverse_iteratorIN9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS3_SaIS3_EEEEEptEv>
 85457be:	8b 00                	mov    (%eax),%eax
 85457c0:	3b 45 10             	cmp    0x10(%ebp),%eax
 85457c3:	7d 07                	jge    85457cc <_ZN16CItemMakingSkill12UpSkillLevelE21ENUM_ITEM_MAKING_TYPEiP5CUser+0xb0>
 85457c5:	b8 01 00 00 00       	mov    $0x1,%eax
 85457ca:	eb 05                	jmp    85457d1 <_ZN16CItemMakingSkill12UpSkillLevelE21ENUM_ITEM_MAKING_TYPEiP5CUser+0xb5>
 85457cc:	b8 00 00 00 00       	mov    $0x0,%eax
 85457d1:	84 c0                	test   %al,%al
 85457d3:	0f 85 7e 02 00 00    	jne    8545a57 <_ZN16CItemMakingSkill12UpSkillLevelE21ENUM_ITEM_MAKING_TYPEiP5CUser+0x33b>
 85457d9:	8b 55 0c             	mov    0xc(%ebp),%edx
 85457dc:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 85457df:	8b 45 08             	mov    0x8(%ebp),%eax
 85457e2:	0f b7 44 48 06       	movzwl 0x6(%eax,%ecx,2),%eax
 85457e7:	89 c1                	mov    %eax,%ecx
 85457e9:	8b 45 10             	mov    0x10(%ebp),%eax
 85457ec:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 85457ef:	89 c1                	mov    %eax,%ecx
 85457f1:	8b 45 08             	mov    0x8(%ebp),%eax
 85457f4:	66 89 4c 50 06       	mov    %cx,0x6(%eax,%edx,2)
 85457f9:	8b 45 14             	mov    0x14(%ebp),%eax
 85457fc:	89 04 24             	mov    %eax,(%esp)
 85457ff:	e8 b4 4a b9 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 8545804:	83 f8 46             	cmp    $0x46,%eax
 8545807:	0f 94 c0             	sete   %al
 854580a:	84 c0                	test   %al,%al
 854580c:	0f 84 c6 00 00 00    	je     85458d8 <_ZN16CItemMakingSkill12UpSkillLevelE21ENUM_ITEM_MAKING_TYPEiP5CUser+0x1bc>
 8545812:	8b 55 0c             	mov    0xc(%ebp),%edx
 8545815:	8b 45 08             	mov    0x8(%ebp),%eax
 8545818:	0f b7 44 50 06       	movzwl 0x6(%eax,%edx,2),%eax
 854581d:	0f bf d8             	movswl %ax,%ebx
 8545820:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8545823:	8d 50 18             	lea    0x18(%eax),%edx
 8545826:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8545829:	89 54 24 04          	mov    %edx,0x4(%esp)
 854582d:	89 04 24             	mov    %eax,(%esp)
 8545830:	e8 c9 07 00 00       	call   8545ffe <_ZNKSt6vectorISt4pairIiiESaIS1_EE6rbeginEv>
 8545835:	83 ec 04             	sub    $0x4,%esp
 8545838:	8d 45 b8             	lea    -0x48(%ebp),%eax
 854583b:	89 04 24             	mov    %eax,(%esp)
 854583e:	e8 83 08 00 00       	call   85460c6 <_ZNKSt16reverse_iteratorIN9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS3_SaIS3_EEEEEptEv>
 8545843:	8b 00                	mov    (%eax),%eax
 8545845:	39 c3                	cmp    %eax,%ebx
 8545847:	0f 9f c0             	setg   %al
 854584a:	84 c0                	test   %al,%al
 854584c:	0f 84 85 01 00 00    	je     85459d7 <_ZN16CItemMakingSkill12UpSkillLevelE21ENUM_ITEM_MAKING_TYPEiP5CUser+0x2bb>
 8545852:	8b 55 0c             	mov    0xc(%ebp),%edx
 8545855:	8b 45 08             	mov    0x8(%ebp),%eax
 8545858:	0f b7 44 50 06       	movzwl 0x6(%eax,%edx,2),%eax
 854585d:	0f bf f0             	movswl %ax,%esi
 8545860:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 8545863:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 854586a:	00 
 854586b:	c7 44 24 08 b5 00 00 	movl   $0xb5,0x8(%esp)
 8545872:	00 
 8545873:	c7 44 24 04 e0 c2 c9 	movl   $0x8c9c2e0,0x4(%esp)
 854587a:	08 
 854587b:	8d 45 bc             	lea    -0x44(%ebp),%eax
 854587e:	89 04 24             	mov    %eax,(%esp)
 8545881:	e8 92 9e 00 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8545886:	89 74 24 0c          	mov    %esi,0xc(%esp)
 854588a:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 854588e:	c7 44 24 04 14 b6 c9 	movl   $0x8c9b614,0x4(%esp)
 8545895:	08 
 8545896:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8545899:	89 04 24             	mov    %eax,(%esp)
 854589c:	e8 e7 9e 00 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 85458a1:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 85458a4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85458a7:	8d 50 18             	lea    0x18(%eax),%edx
 85458aa:	8d 45 cc             	lea    -0x34(%ebp),%eax
 85458ad:	89 54 24 04          	mov    %edx,0x4(%esp)
 85458b1:	89 04 24             	mov    %eax,(%esp)
 85458b4:	e8 45 07 00 00       	call   8545ffe <_ZNKSt6vectorISt4pairIiiESaIS1_EE6rbeginEv>
 85458b9:	83 ec 04             	sub    $0x4,%esp
 85458bc:	8d 45 cc             	lea    -0x34(%ebp),%eax
 85458bf:	89 04 24             	mov    %eax,(%esp)
 85458c2:	e8 ff 07 00 00       	call   85460c6 <_ZNKSt16reverse_iteratorIN9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS3_SaIS3_EEEEEptEv>
 85458c7:	8b 00                	mov    (%eax),%eax
 85458c9:	89 c2                	mov    %eax,%edx
 85458cb:	8b 45 08             	mov    0x8(%ebp),%eax
 85458ce:	66 89 54 58 06       	mov    %dx,0x6(%eax,%ebx,2)
 85458d3:	e9 ff 00 00 00       	jmp    85459d7 <_ZN16CItemMakingSkill12UpSkillLevelE21ENUM_ITEM_MAKING_TYPEiP5CUser+0x2bb>
 85458d8:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 85458df:	e9 d7 00 00 00       	jmp    85459bb <_ZN16CItemMakingSkill12UpSkillLevelE21ENUM_ITEM_MAKING_TYPEiP5CUser+0x29f>
 85458e4:	8b 45 14             	mov    0x14(%ebp),%eax
 85458e7:	89 04 24             	mov    %eax,(%esp)
 85458ea:	e8 c9 49 b9 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 85458ef:	89 c3                	mov    %eax,%ebx
 85458f1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85458f4:	8d 50 18             	lea    0x18(%eax),%edx
 85458f7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85458fa:	89 44 24 04          	mov    %eax,0x4(%esp)
 85458fe:	89 14 24             	mov    %edx,(%esp)
 8545901:	e8 0c f2 c6 ff       	call   81b4b12 <_ZNKSt6vectorISt4pairIiiESaIS1_EEixEj>
 8545906:	8b 40 04             	mov    0x4(%eax),%eax
 8545909:	39 c3                	cmp    %eax,%ebx
 854590b:	0f 9c c0             	setl   %al
 854590e:	84 c0                	test   %al,%al
 8545910:	0f 84 a1 00 00 00    	je     85459b7 <_ZN16CItemMakingSkill12UpSkillLevelE21ENUM_ITEM_MAKING_TYPEiP5CUser+0x29b>
 8545916:	8b 55 0c             	mov    0xc(%ebp),%edx
 8545919:	8b 45 08             	mov    0x8(%ebp),%eax
 854591c:	0f b7 44 50 06       	movzwl 0x6(%eax,%edx,2),%eax
 8545921:	0f bf d8             	movswl %ax,%ebx
 8545924:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8545927:	8d 50 18             	lea    0x18(%eax),%edx
 854592a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 854592d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8545931:	89 14 24             	mov    %edx,(%esp)
 8545934:	e8 d9 f1 c6 ff       	call   81b4b12 <_ZNKSt6vectorISt4pairIiiESaIS1_EEixEj>
 8545939:	8b 00                	mov    (%eax),%eax
 854593b:	39 c3                	cmp    %eax,%ebx
 854593d:	0f 9f c0             	setg   %al
 8545940:	84 c0                	test   %al,%al
 8545942:	74 73                	je     85459b7 <_ZN16CItemMakingSkill12UpSkillLevelE21ENUM_ITEM_MAKING_TYPEiP5CUser+0x29b>
 8545944:	8b 55 0c             	mov    0xc(%ebp),%edx
 8545947:	8b 45 08             	mov    0x8(%ebp),%eax
 854594a:	0f b7 44 50 06       	movzwl 0x6(%eax,%edx,2),%eax
 854594f:	0f bf f0             	movswl %ax,%esi
 8545952:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 8545955:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 854595c:	00 
 854595d:	c7 44 24 08 c5 00 00 	movl   $0xc5,0x8(%esp)
 8545964:	00 
 8545965:	c7 44 24 04 e0 c2 c9 	movl   $0x8c9c2e0,0x4(%esp)
 854596c:	08 
 854596d:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8545970:	89 04 24             	mov    %eax,(%esp)
 8545973:	e8 a0 9d 00 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8545978:	89 74 24 0c          	mov    %esi,0xc(%esp)
 854597c:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8545980:	c7 44 24 04 50 b6 c9 	movl   $0x8c9b650,0x4(%esp)
 8545987:	08 
 8545988:	8d 45 d0             	lea    -0x30(%ebp),%eax
 854598b:	89 04 24             	mov    %eax,(%esp)
 854598e:	e8 f5 9d 00 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8545993:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 8545996:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8545999:	8d 50 18             	lea    0x18(%eax),%edx
 854599c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 854599f:	89 44 24 04          	mov    %eax,0x4(%esp)
 85459a3:	89 14 24             	mov    %edx,(%esp)
 85459a6:	e8 67 f1 c6 ff       	call   81b4b12 <_ZNKSt6vectorISt4pairIiiESaIS1_EEixEj>
 85459ab:	8b 00                	mov    (%eax),%eax
 85459ad:	89 c2                	mov    %eax,%edx
 85459af:	8b 45 08             	mov    0x8(%ebp),%eax
 85459b2:	66 89 54 58 06       	mov    %dx,0x6(%eax,%ebx,2)
 85459b7:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 85459bb:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85459be:	83 c0 18             	add    $0x18,%eax
 85459c1:	89 04 24             	mov    %eax,(%esp)
 85459c4:	e8 4b 7e b9 ff       	call   80dd814 <_ZNKSt6vectorISt4pairIiiESaIS1_EE4sizeEv>
 85459c9:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 85459cc:	0f 97 c0             	seta   %al
 85459cf:	84 c0                	test   %al,%al
 85459d1:	0f 85 0d ff ff ff    	jne    85458e4 <_ZN16CItemMakingSkill12UpSkillLevelE21ENUM_ITEM_MAKING_TYPEiP5CUser+0x1c8>
 85459d7:	8b 55 0c             	mov    0xc(%ebp),%edx
 85459da:	8b 45 08             	mov    0x8(%ebp),%eax
 85459dd:	0f b7 44 50 06       	movzwl 0x6(%eax,%edx,2),%eax
 85459e2:	66 3d e8 03          	cmp    $0x3e8,%ax
 85459e6:	7e 5c                	jle    8545a44 <_ZN16CItemMakingSkill12UpSkillLevelE21ENUM_ITEM_MAKING_TYPEiP5CUser+0x328>
 85459e8:	8b 55 0c             	mov    0xc(%ebp),%edx
 85459eb:	8b 45 08             	mov    0x8(%ebp),%eax
 85459ee:	0f b7 44 50 06       	movzwl 0x6(%eax,%edx,2),%eax
 85459f3:	0f bf f0             	movswl %ax,%esi
 85459f6:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 85459f9:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8545a00:	00 
 8545a01:	c7 44 24 08 ce 00 00 	movl   $0xce,0x8(%esp)
 8545a08:	00 
 8545a09:	c7 44 24 04 e0 c2 c9 	movl   $0x8c9c2e0,0x4(%esp)
 8545a10:	08 
 8545a11:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8545a14:	89 04 24             	mov    %eax,(%esp)
 8545a17:	e8 fc 9c 00 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8545a1c:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8545a20:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8545a24:	c7 44 24 04 90 b6 c9 	movl   $0x8c9b690,0x4(%esp)
 8545a2b:	08 
 8545a2c:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8545a2f:	89 04 24             	mov    %eax,(%esp)
 8545a32:	e8 51 9d 00 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8545a37:	8b 55 0c             	mov    0xc(%ebp),%edx
 8545a3a:	8b 45 08             	mov    0x8(%ebp),%eax
 8545a3d:	66 c7 44 50 06 e8 03 	movw   $0x3e8,0x6(%eax,%edx,2)
 8545a44:	8b 45 08             	mov    0x8(%ebp),%eax
 8545a47:	89 04 24             	mov    %eax,(%esp)
 8545a4a:	e8 75 31 b8 ff       	call   80c8bc4 <_ZN13charac_expand5CData5alterEv>
 8545a4f:	eb 07                	jmp    8545a58 <_ZN16CItemMakingSkill12UpSkillLevelE21ENUM_ITEM_MAKING_TYPEiP5CUser+0x33c>
 8545a51:	90                   	nop
 8545a52:	eb 04                	jmp    8545a58 <_ZN16CItemMakingSkill12UpSkillLevelE21ENUM_ITEM_MAKING_TYPEiP5CUser+0x33c>
 8545a54:	90                   	nop
 8545a55:	eb 01                	jmp    8545a58 <_ZN16CItemMakingSkill12UpSkillLevelE21ENUM_ITEM_MAKING_TYPEiP5CUser+0x33c>
 8545a57:	90                   	nop
 8545a58:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8545a5b:	83 c4 00             	add    $0x0,%esp
 8545a5e:	5b                   	pop    %ebx
 8545a5f:	5e                   	pop    %esi
 8545a60:	5d                   	pop    %ebp
 8545a61:	c3                   	ret

```

```c
// CItemMakingSkill::UpSkillLevel @ 0x854571c

/* CItemMakingSkill::UpSkillLevel(ENUM_ITEM_MAKING_TYPE, int, CUser*) */

void __thiscall
CItemMakingSkill::UpSkillLevel
          (CItemMakingSkill *this,int param_2,int param_3,CUserCharacInfo *param_4)

{
  short sVar1;
  bool bVar2;
  CDataManager *this_00;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_58 [4];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_54 [4];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_50 [4];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_4c [4];
  cMyTrace local_48 [16];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_38 [4];
  cMyTrace local_34 [16];
  cMyTrace local_24 [16];
  int local_14;
  uint local_10;
  
  this_00 = (CDataManager *)G_CDataManager();
  local_14 = CDataManager::GetItemMakingSkill(this_00);
  if (10 < param_2) {
    return;
  }
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::rend(local_58);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::rbegin(local_54);
  bVar2 = std::operator==((reverse_iterator *)local_54,(reverse_iterator *)local_58);
  if (bVar2) {
    return;
  }
  if ((0 < param_3) && (param_3 <= *(int *)(local_14 + 0x28))) {
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::rbegin(local_50);
    piVar3 = (int *)std::
                    reverse_iterator<__gnu_cxx::__normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>>
                    ::operator->((reverse_iterator<__gnu_cxx::__normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>>
                                  *)local_50);
    if (param_3 <= *piVar3) {
      bVar2 = false;
      goto LAB_085457d1;
    }
  }
  bVar2 = true;
LAB_085457d1:
  if (!bVar2) {
    *(short *)(this + param_2 * 2 + 6) = *(short *)(this + param_2 * 2 + 6) + (short)param_3;
    iVar4 = CUserCharacInfo::get_charac_level(param_4);
    if (iVar4 == 0x46) {
      sVar1 = *(short *)(this + param_2 * 2 + 6);
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::rbegin(local_4c);
      piVar3 = (int *)std::
                      reverse_iterator<__gnu_cxx::__normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>>
                      ::operator->((reverse_iterator<__gnu_cxx::__normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>>
                                    *)local_4c);
      if (*piVar3 < (int)sVar1) {
        sVar1 = *(short *)(this + param_2 * 2 + 6);
        cMyTrace::cMyTrace(local_48,
                           "void CItemMakingSkill::UpSkillLevel(ENUM_ITEM_MAKING_TYPE, int, CUser*)"
                           ,0xb5,0);
        cMyTrace::operator()
                  (local_48,"CHARACTER_LEVEL_CURRENT_MAX :item_making_skill_[%d] = %d",param_2,
                   (int)sVar1);
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::rbegin(local_38);
        puVar5 = (undefined4 *)
                 std::
                 reverse_iterator<__gnu_cxx::__normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>>
                 ::operator->((reverse_iterator<__gnu_cxx::__normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>>
                               *)local_38);
        *(short *)(this + param_2 * 2 + 6) = (short)*puVar5;
      }
    }
    else {
      local_10 = 0;
      while (uVar7 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                               ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                                (local_14 + 0x18)), local_10 < uVar7) {
        iVar4 = CUserCharacInfo::get_charac_level(param_4);
        iVar6 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                          ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                           (local_14 + 0x18),local_10);
        if ((iVar4 < *(int *)(iVar6 + 4)) &&
           (sVar1 = *(short *)(this + param_2 * 2 + 6),
           piVar3 = (int *)std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::
                           operator[]((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                       *)(local_14 + 0x18),local_10), *piVar3 < (int)sVar1)) {
          sVar1 = *(short *)(this + param_2 * 2 + 6);
          cMyTrace::cMyTrace(local_34,
                             "void CItemMakingSkill::UpSkillLevel(ENUM_ITEM_MAKING_TYPE, int, CUser*)"
                             ,0xc5,0);
          cMyTrace::operator()
                    (local_34,"NO CHARACTER_LEVEL_CURRENT_MAX : item_making_skill_[%d] = %d",param_2
                     ,(int)sVar1);
          puVar5 = (undefined4 *)
                   std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                             ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                              (local_14 + 0x18),local_10);
          *(short *)(this + param_2 * 2 + 6) = (short)*puVar5;
        }
        local_10 = local_10 + 1;
      }
    }
    if (1000 < *(short *)(this + param_2 * 2 + 6)) {
      sVar1 = *(short *)(this + param_2 * 2 + 6);
      cMyTrace::cMyTrace(local_24,
                         "void CItemMakingSkill::UpSkillLevel(ENUM_ITEM_MAKING_TYPE, int, CUser*)",
                         0xce,0);
      cMyTrace::operator()
                (local_24,"ITEM_MAKING_SKILL_LEVEL_LIMIT : item_making_skill_[%d] = %d",param_2,
                 (int)sVar1);
      *(undefined2 *)(this + param_2 * 2 + 6) = 1000;
    }
    charac_expand::CData::alter((CData *)this);
  }
  return;
}

```

---

## _reset

```asm
// === 085453ba CItemMakingSkill::_reset  [0x085453ba-0x85453df] ===
 85453ba:	55                   	push   %ebp
 85453bb:	89 e5                	mov    %esp,%ebp
 85453bd:	83 ec 18             	sub    $0x18,%esp
 85453c0:	8b 45 08             	mov    0x8(%ebp),%eax
 85453c3:	83 c0 06             	add    $0x6,%eax
 85453c6:	c7 44 24 08 16 00 00 	movl   $0x16,0x8(%esp)
 85453cd:	00 
 85453ce:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85453d5:	00 
 85453d6:	89 04 24             	mov    %eax,(%esp)
 85453d9:	e8 e2 88 b3 ff       	call   807dcc0 <memset@plt>
 85453de:	c9                   	leave
 85453df:	c3                   	ret

```

```c
// CItemMakingSkill::_reset @ 0x85453ba

/* CItemMakingSkill::_reset() */

void __thiscall CItemMakingSkill::_reset(CItemMakingSkill *this)

{
  memset(this + 6,0,0x16);
  return;
}

```

---

## _saveData

```asm
// === 08545276 CItemMakingSkill::_saveData  [0x08545276-0x85453b9] ===
 8545276:	55                   	push   %ebp
 8545277:	89 e5                	mov    %esp,%ebp
 8545279:	56                   	push   %esi
 854527a:	53                   	push   %ebx
 854527b:	83 ec 20             	sub    $0x20,%esp
 854527e:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8545283:	c7 44 24 08 33 00 00 	movl   $0x33,0x8(%esp)
 854528a:	00 
 854528b:	c7 44 24 04 00 b6 c9 	movl   $0x8c9b600,0x4(%esp)
 8545292:	08 
 8545293:	89 04 24             	mov    %eax,(%esp)
 8545296:	e8 eb a7 d4 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 854529b:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 85452a2:	00 
 85452a3:	89 44 24 04          	mov    %eax,0x4(%esp)
 85452a7:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85452aa:	89 04 24             	mov    %eax,(%esp)
 85452ad:	e8 74 39 b8 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 85452b2:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85452b5:	89 04 24             	mov    %eax,(%esp)
 85452b8:	e8 89 39 b8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 85452bd:	c7 44 24 04 6e 02 00 	movl   $0x26e,0x4(%esp)
 85452c4:	00 
 85452c5:	89 04 24             	mov    %eax,(%esp)
 85452c8:	e8 89 39 b8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 85452cd:	8b 45 0c             	mov    0xc(%ebp),%eax
 85452d0:	89 04 24             	mov    %eax,(%esp)
 85452d3:	e8 be 39 b8 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 85452d8:	89 c3                	mov    %eax,%ebx
 85452da:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85452dd:	89 04 24             	mov    %eax,(%esp)
 85452e0:	e8 61 39 b8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 85452e5:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85452e9:	89 04 24             	mov    %eax,(%esp)
 85452ec:	e8 65 39 b8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 85452f1:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85452f4:	89 04 24             	mov    %eax,(%esp)
 85452f7:	e8 52 39 b8 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 85452fc:	89 04 24             	mov    %eax,(%esp)
 85452ff:	e8 e4 0c 00 00       	call   8545fe8 <_ZN12CStreamGuard11GetInBufferI21SIG_ITEM_MAKING_SKILLEEPT_v>
 8545304:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8545307:	c7 44 24 08 1c 00 00 	movl   $0x1c,0x8(%esp)
 854530e:	00 
 854530f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8545316:	00 
 8545317:	8b 45 f0             	mov    -0x10(%ebp),%eax
 854531a:	89 04 24             	mov    %eax,(%esp)
 854531d:	e8 9e 89 b3 ff       	call   807dcc0 <memset@plt>
 8545322:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8545329:	ff 
 854532a:	8b 45 0c             	mov    0xc(%ebp),%eax
 854532d:	89 04 24             	mov    %eax,(%esp)
 8545330:	e8 6b 8c 10 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 8545335:	89 c2                	mov    %eax,%edx
 8545337:	8b 45 f0             	mov    -0x10(%ebp),%eax
 854533a:	89 10                	mov    %edx,(%eax)
 854533c:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8545343:	eb 1a                	jmp    854535f <_ZN16CItemMakingSkill9_saveDataEP5CUser+0xe9>
 8545345:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8545348:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 854534b:	8b 45 08             	mov    0x8(%ebp),%eax
 854534e:	0f b7 4c 48 06       	movzwl 0x6(%eax,%ecx,2),%ecx
 8545353:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8545356:	66 89 4c 50 04       	mov    %cx,0x4(%eax,%edx,2)
 854535b:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 854535f:	83 7d f4 0a          	cmpl   $0xa,-0xc(%ebp)
 8545363:	0f 9e c0             	setle  %al
 8545366:	84 c0                	test   %al,%al
 8545368:	75 db                	jne    8545345 <_ZN16CItemMakingSkill9_saveDataEP5CUser+0xcf>
 854536a:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 854536f:	8d 55 e8             	lea    -0x18(%ebp),%edx
 8545372:	89 54 24 08          	mov    %edx,0x8(%esp)
 8545376:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 854537d:	00 
 854537e:	89 04 24             	mov    %eax,(%esp)
 8545381:	e8 58 bc 02 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8545386:	bb 01 00 00 00       	mov    $0x1,%ebx
 854538b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 854538e:	89 04 24             	mov    %eax,(%esp)
 8545391:	e8 3c 75 0d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8545396:	89 d8                	mov    %ebx,%eax
 8545398:	83 c4 20             	add    $0x20,%esp
 854539b:	5b                   	pop    %ebx
 854539c:	5e                   	pop    %esi
 854539d:	5d                   	pop    %ebp
 854539e:	c3                   	ret
 854539f:	89 d3                	mov    %edx,%ebx
 85453a1:	89 c6                	mov    %eax,%esi
 85453a3:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85453a6:	89 04 24             	mov    %eax,(%esp)
 85453a9:	e8 24 75 0d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 85453ae:	89 f0                	mov    %esi,%eax
 85453b0:	89 da                	mov    %ebx,%edx
 85453b2:	89 04 24             	mov    %eax,(%esp)
 85453b5:	e8 96 e3 59 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// CItemMakingSkill::_saveData @ 0x8545276

/* CItemMakingSkill::_saveData(CUser*) */

undefined4 __thiscall CItemMakingSkill::_saveData(CItemMakingSkill *this,CUser *param_1)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  int iVar3;
  undefined4 uVar4;
  CStreamGuard local_1c [8];
  SIG_ITEM_MAKING_SKILL *local_14;
  int local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"ItemMakingSkill.cpp",0x33);
  CStreamGuard::CStreamGuard(local_1c,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
                    /* try { // try from 085452c8 to 08545385 has its CatchHandler @ 0854539f */
  CStreamGuard::operator<<(pCVar2,0x26e);
  iVar3 = CUser::GetUID(param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
  CStreamGuard::operator<<(pCVar2,iVar3);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_1c);
  local_14 = CStreamGuard::GetInBuffer<SIG_ITEM_MAKING_SKILL>(pCVar2);
  memset(local_14,0,0x1c);
  uVar4 = CUser::get_charac_no(param_1,-1);
  *(undefined4 *)local_14 = uVar4;
  for (local_10 = 0; local_10 < 0xb; local_10 = local_10 + 1) {
    *(undefined2 *)(local_14 + local_10 * 2 + 4) = *(undefined2 *)(this + local_10 * 2 + 6);
  }
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_1c);
  CStreamGuard::~CStreamGuard(local_1c);
  return 1;
}

```

---

## getData

```asm
// === 08545b42 CItemMakingSkill::getData  [0x08545b42-0x8545b7d] ===
 8545b42:	55                   	push   %ebp
 8545b43:	89 e5                	mov    %esp,%ebp
 8545b45:	83 ec 10             	sub    $0x10,%esp
 8545b48:	8b 45 0c             	mov    0xc(%ebp),%eax
 8545b4b:	89 45 f8             	mov    %eax,-0x8(%ebp)
 8545b4e:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 8545b55:	eb 1a                	jmp    8545b71 <_ZNK16CItemMakingSkill7getDataEPc+0x2f>
 8545b57:	8b 55 fc             	mov    -0x4(%ebp),%edx
 8545b5a:	8b 4d fc             	mov    -0x4(%ebp),%ecx
 8545b5d:	8b 45 08             	mov    0x8(%ebp),%eax
 8545b60:	0f b7 4c 48 06       	movzwl 0x6(%eax,%ecx,2),%ecx
 8545b65:	8b 45 f8             	mov    -0x8(%ebp),%eax
 8545b68:	66 89 4c 50 04       	mov    %cx,0x4(%eax,%edx,2)
 8545b6d:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 8545b71:	83 7d fc 0a          	cmpl   $0xa,-0x4(%ebp)
 8545b75:	0f 9e c0             	setle  %al
 8545b78:	84 c0                	test   %al,%al
 8545b7a:	75 db                	jne    8545b57 <_ZNK16CItemMakingSkill7getDataEPc+0x15>
 8545b7c:	c9                   	leave
 8545b7d:	c3                   	ret

```

```c
// CItemMakingSkill::getData @ 0x8545b42

/* CItemMakingSkill::getData(char*) const */

void __thiscall CItemMakingSkill::getData(CItemMakingSkill *this,char *param_1)

{
  int local_8;
  
  for (local_8 = 0; local_8 < 0xb; local_8 = local_8 + 1) {
    *(undefined2 *)(param_1 + local_8 * 2 + 4) = *(undefined2 *)(this + local_8 * 2 + 6);
  }
  return;
}

```

---

## loadData

```asm
// === 08545202 CItemMakingSkill::loadData  [0x08545202-0x8545275] ===
 8545202:	55                   	push   %ebp
 8545203:	89 e5                	mov    %esp,%ebp
 8545205:	83 ec 28             	sub    $0x28,%esp
 8545208:	8b 45 08             	mov    0x8(%ebp),%eax
 854520b:	8b 00                	mov    (%eax),%eax
 854520d:	83 c0 1c             	add    $0x1c,%eax
 8545210:	8b 10                	mov    (%eax),%edx
 8545212:	8b 45 08             	mov    0x8(%ebp),%eax
 8545215:	89 04 24             	mov    %eax,(%esp)
 8545218:	ff d2                	call   *%edx
 854521a:	8b 45 10             	mov    0x10(%ebp),%eax
 854521d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8545220:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8545227:	eb 3a                	jmp    8545263 <_ZN16CItemMakingSkill8loadDataEP5CUserPc+0x61>
 8545229:	8b 55 f4             	mov    -0xc(%ebp),%edx
 854522c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 854522f:	0f b7 44 50 04       	movzwl 0x4(%eax,%edx,2),%eax
 8545234:	66 3d e7 03          	cmp    $0x3e7,%ax
 8545238:	7e 0f                	jle    8545249 <_ZN16CItemMakingSkill8loadDataEP5CUserPc+0x47>
 854523a:	8b 55 f4             	mov    -0xc(%ebp),%edx
 854523d:	8b 45 08             	mov    0x8(%ebp),%eax
 8545240:	66 c7 44 50 06 e8 03 	movw   $0x3e8,0x6(%eax,%edx,2)
 8545247:	eb 16                	jmp    854525f <_ZN16CItemMakingSkill8loadDataEP5CUserPc+0x5d>
 8545249:	8b 55 f4             	mov    -0xc(%ebp),%edx
 854524c:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 854524f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8545252:	0f b7 4c 48 04       	movzwl 0x4(%eax,%ecx,2),%ecx
 8545257:	8b 45 08             	mov    0x8(%ebp),%eax
 854525a:	66 89 4c 50 06       	mov    %cx,0x6(%eax,%edx,2)
 854525f:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8545263:	83 7d f4 0a          	cmpl   $0xa,-0xc(%ebp)
 8545267:	0f 9e c0             	setle  %al
 854526a:	84 c0                	test   %al,%al
 854526c:	75 bb                	jne    8545229 <_ZN16CItemMakingSkill8loadDataEP5CUserPc+0x27>
 854526e:	b8 01 00 00 00       	mov    $0x1,%eax
 8545273:	c9                   	leave
 8545274:	c3                   	ret
 8545275:	90                   	nop

```

```c
// CItemMakingSkill::loadData @ 0x8545202

/* CItemMakingSkill::loadData(CUser*, char*) */

undefined4 __thiscall
CItemMakingSkill::loadData(CItemMakingSkill *this,CUser *param_1,char *param_2)

{
  int local_10;
  
  (**(code **)(*(int *)this + 0x1c))(this);
  for (local_10 = 0; local_10 < 0xb; local_10 = local_10 + 1) {
    if (*(short *)(param_2 + local_10 * 2 + 4) < 1000) {
      *(undefined2 *)(this + local_10 * 2 + 6) = *(undefined2 *)(param_2 + local_10 * 2 + 4);
    }
    else {
      *(undefined2 *)(this + local_10 * 2 + 6) = 1000;
    }
  }
  return 1;
}

```

---

## ~CItemMakingSkill

```asm
// === 08545192 CItemMakingSkill::~CItemMakingSkill  [0x08545192-0x85451e3] ===
 8545192:	55                   	push   %ebp
 8545193:	89 e5                	mov    %esp,%ebp
 8545195:	83 ec 18             	sub    $0x18,%esp
 8545198:	8b 45 08             	mov    0x8(%ebp),%eax
 854519b:	c7 00 48 c3 c9 08    	movl   $0x8c9c348,(%eax)
 85451a1:	8b 45 08             	mov    0x8(%ebp),%eax
 85451a4:	8b 40 1c             	mov    0x1c(%eax),%eax
 85451a7:	85 c0                	test   %eax,%eax
 85451a9:	74 0e                	je     85451b9 <_ZN16CItemMakingSkillD1Ev+0x27>
 85451ab:	8b 45 08             	mov    0x8(%ebp),%eax
 85451ae:	8b 40 1c             	mov    0x1c(%eax),%eax
 85451b1:	89 04 24             	mov    %eax,(%esp)
 85451b4:	e8 37 f3 1d 00       	call   87244f0 <_ZdlPv>
 85451b9:	8b 45 08             	mov    0x8(%ebp),%eax
 85451bc:	c7 40 1c 00 00 00 00 	movl   $0x0,0x1c(%eax)
 85451c3:	8b 45 08             	mov    0x8(%ebp),%eax
 85451c6:	89 04 24             	mov    %eax,(%esp)
 85451c9:	e8 14 3a b8 ff       	call   80c8be2 <_ZN13charac_expand5CDataD1Ev>
 85451ce:	b8 00 00 00 00       	mov    $0x0,%eax
 85451d3:	84 c0                	test   %al,%al
 85451d5:	74 0b                	je     85451e2 <_ZN16CItemMakingSkillD1Ev+0x50>
 85451d7:	8b 45 08             	mov    0x8(%ebp),%eax
 85451da:	89 04 24             	mov    %eax,(%esp)
 85451dd:	e8 0e f3 1d 00       	call   87244f0 <_ZdlPv>
 85451e2:	c9                   	leave
 85451e3:	c3                   	ret

```

```c
// CItemMakingSkill::~CItemMakingSkill @ 0x8545192

/* WARNING: Removing unreachable block (ram,0x085451d7) */
/* CItemMakingSkill::~CItemMakingSkill() */

void __thiscall CItemMakingSkill::~CItemMakingSkill(CItemMakingSkill *this)

{
  *(undefined ***)this = &PTR_ResetDailyMidnight_08c9c348;
  if (*(int *)(this + 0x1c) != 0) {
    operator_delete(*(void **)(this + 0x1c));
  }
  *(undefined4 *)(this + 0x1c) = 0;
  charac_expand::CData::~CData((CData *)this);
  return;
}

```

---

## ~CItemMakingSkill_085451e4

```asm
// === 085451e4 CItemMakingSkill::~CItemMakingSkill  [0x085451e4-0x8545201] ===
 85451e4:	55                   	push   %ebp
 85451e5:	89 e5                	mov    %esp,%ebp
 85451e7:	83 ec 18             	sub    $0x18,%esp
 85451ea:	8b 45 08             	mov    0x8(%ebp),%eax
 85451ed:	89 04 24             	mov    %eax,(%esp)
 85451f0:	e8 9d ff ff ff       	call   8545192 <_ZN16CItemMakingSkillD1Ev>
 85451f5:	8b 45 08             	mov    0x8(%ebp),%eax
 85451f8:	89 04 24             	mov    %eax,(%esp)
 85451fb:	e8 f0 f2 1d 00       	call   87244f0 <_ZdlPv>
 8545200:	c9                   	leave
 8545201:	c3                   	ret

```

```c
// CItemMakingSkill::~CItemMakingSkill @ 0x85451e4

/* CItemMakingSkill::~CItemMakingSkill() */

void __thiscall CItemMakingSkill::~CItemMakingSkill(CItemMakingSkill *this)

{
  ~CItemMakingSkill(this);
  operator_delete(this);
  return;
}

```

