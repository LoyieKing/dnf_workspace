# advancealtar__ProcStage

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 25

---

## ProcStage

```asm
// === 0812dc18 advancealtar::ProcStage::ProcStage  [0x0812dc18-0x812dd25] ===
 812dc18:	55                   	push   %ebp
 812dc19:	89 e5                	mov    %esp,%ebp
 812dc1b:	56                   	push   %esi
 812dc1c:	53                   	push   %ebx
 812dc1d:	83 ec 10             	sub    $0x10,%esp
 812dc20:	8b 45 08             	mov    0x8(%ebp),%eax
 812dc23:	8b 55 0c             	mov    0xc(%ebp),%edx
 812dc26:	89 10                	mov    %edx,(%eax)
 812dc28:	8b 45 08             	mov    0x8(%ebp),%eax
 812dc2b:	c7 40 04 07 00 00 00 	movl   $0x7,0x4(%eax)
 812dc32:	8b 45 08             	mov    0x8(%ebp),%eax
 812dc35:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 812dc3c:	8b 45 08             	mov    0x8(%ebp),%eax
 812dc3f:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 812dc46:	8b 45 08             	mov    0x8(%ebp),%eax
 812dc49:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
 812dc50:	8b 45 08             	mov    0x8(%ebp),%eax
 812dc53:	66 c7 40 14 00 00    	movw   $0x0,0x14(%eax)
 812dc59:	8b 45 08             	mov    0x8(%ebp),%eax
 812dc5c:	8d 48 08             	lea    0x8(%eax),%ecx
 812dc5f:	8b 45 08             	mov    0x8(%ebp),%eax
 812dc62:	8b 00                	mov    (%eax),%eax
 812dc64:	8b 55 08             	mov    0x8(%ebp),%edx
 812dc67:	83 c2 18             	add    $0x18,%edx
 812dc6a:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 812dc6e:	89 44 24 04          	mov    %eax,0x4(%esp)
 812dc72:	89 14 24             	mov    %edx,(%esp)
 812dc75:	e8 fe f6 ff ff       	call   812d378 <_ZN12advancealtar9ProcStage18ProcSummonObjectMsC1ERNS_10CharacDataERKi>
 812dc7a:	8b 45 08             	mov    0x8(%ebp),%eax
 812dc7d:	83 c0 50             	add    $0x50,%eax
 812dc80:	89 04 24             	mov    %eax,(%esp)
 812dc83:	e8 c6 77 00 00       	call   813544e <_ZNSt3mapIsN12advancealtar18_MapMonsterSummaryESt4lessIsESaISt4pairIKsS1_EEEC1Ev>
 812dc88:	8b 45 08             	mov    0x8(%ebp),%eax
 812dc8b:	c7 40 68 ff ff ff ff 	movl   $0xffffffff,0x68(%eax)
 812dc92:	8b 45 08             	mov    0x8(%ebp),%eax
 812dc95:	c7 40 6c 00 00 00 00 	movl   $0x0,0x6c(%eax)
 812dc9c:	8b 45 08             	mov    0x8(%ebp),%eax
 812dc9f:	c7 40 70 00 00 00 00 	movl   $0x0,0x70(%eax)
 812dca6:	8b 45 08             	mov    0x8(%ebp),%eax
 812dca9:	c7 40 74 00 00 00 00 	movl   $0x0,0x74(%eax)
 812dcb0:	8b 45 08             	mov    0x8(%ebp),%eax
 812dcb3:	c6 40 78 01          	movb   $0x1,0x78(%eax)
 812dcb7:	8b 45 08             	mov    0x8(%ebp),%eax
 812dcba:	c7 40 7c 00 00 00 00 	movl   $0x0,0x7c(%eax)
 812dcc1:	8b 45 08             	mov    0x8(%ebp),%eax
 812dcc4:	83 e8 80             	sub    $0xffffff80,%eax
 812dcc7:	89 04 24             	mov    %eax,(%esp)
 812dcca:	e8 dd 04 f6 ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 812dccf:	8b 45 08             	mov    0x8(%ebp),%eax
 812dcd2:	c7 80 8c 00 00 00 00 	movl   $0x0,0x8c(%eax)
 812dcd9:	00 00 00 
 812dcdc:	8b 45 08             	mov    0x8(%ebp),%eax
 812dcdf:	c7 80 90 00 00 00 00 	movl   $0x0,0x90(%eax)
 812dce6:	00 00 00 
 812dce9:	83 c4 10             	add    $0x10,%esp
 812dcec:	5b                   	pop    %ebx
 812dced:	5e                   	pop    %esi
 812dcee:	5d                   	pop    %ebp
 812dcef:	c3                   	ret
 812dcf0:	89 d3                	mov    %edx,%ebx
 812dcf2:	89 c6                	mov    %eax,%esi
 812dcf4:	8b 45 08             	mov    0x8(%ebp),%eax
 812dcf7:	83 c0 50             	add    $0x50,%eax
 812dcfa:	89 04 24             	mov    %eax,(%esp)
 812dcfd:	e8 c0 6c 00 00       	call   81349c2 <_ZNSt3mapIsN12advancealtar18_MapMonsterSummaryESt4lessIsESaISt4pairIKsS1_EEED1Ev>
 812dd02:	89 f0                	mov    %esi,%eax
 812dd04:	89 da                	mov    %ebx,%edx
 812dd06:	eb 00                	jmp    812dd08 <_ZN12advancealtar9ProcStageC1ERNS_10CharacDataE+0xf0>
 812dd08:	89 d3                	mov    %edx,%ebx
 812dd0a:	89 c6                	mov    %eax,%esi
 812dd0c:	8b 45 08             	mov    0x8(%ebp),%eax
 812dd0f:	83 c0 18             	add    $0x18,%eax
 812dd12:	89 04 24             	mov    %eax,(%esp)
 812dd15:	e8 d6 f6 ff ff       	call   812d3f0 <_ZN12advancealtar9ProcStage18ProcSummonObjectMsD1Ev>
 812dd1a:	89 f0                	mov    %esi,%eax
 812dd1c:	89 da                	mov    %ebx,%edx
 812dd1e:	89 04 24             	mov    %eax,(%esp)
 812dd21:	e8 2a 5a 9b 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// advancealtar::ProcStage::ProcStage @ 0x812dc18

/* advancealtar::ProcStage::ProcStage(advancealtar::CharacData&) */

void __thiscall advancealtar::ProcStage::ProcStage(ProcStage *this,CharacData *param_1)

{
  *(CharacData **)this = param_1;
  *(undefined4 *)(this + 4) = 7;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined2 *)(this + 0x14) = 0;
  ProcSummonObjectMs::ProcSummonObjectMs
            ((ProcSummonObjectMs *)(this + 0x18),*(CharacData **)this,(int *)(this + 8));
                    /* try { // try from 0812dc83 to 0812dc87 has its CatchHandler @ 0812dd08 */
  std::
  map<short,advancealtar::_MapMonsterSummary,std::less<short>,std::allocator<std::pair<short_const,advancealtar::_MapMonsterSummary>>>
  ::map((map<short,advancealtar::_MapMonsterSummary,std::less<short>,std::allocator<std::pair<short_const,advancealtar::_MapMonsterSummary>>>
         *)(this + 0x50));
  *(undefined4 *)(this + 0x68) = 0xffffffff;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  this[0x78] = (ProcStage)0x1;
  *(undefined4 *)(this + 0x7c) = 0;
                    /* try { // try from 0812dcca to 0812dcce has its CatchHandler @ 0812dcf0 */
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 0x80));
  *(undefined4 *)(this + 0x8c) = 0;
  *(undefined4 *)(this + 0x90) = 0;
  return;
}

```

---

## addAchievementReward

```asm
// === 0812f3ae advancealtar::ProcStage::addAchievementReward  [0x0812f3ae-0x812f479] ===
 812f3ae:	55                   	push   %ebp
 812f3af:	89 e5                	mov    %esp,%ebp
 812f3b1:	83 ec 38             	sub    $0x38,%esp
 812f3b4:	8b 45 08             	mov    0x8(%ebp),%eax
 812f3b7:	8b 00                	mov    (%eax),%eax
 812f3b9:	89 04 24             	mov    %eax,(%esp)
 812f3bc:	e8 53 54 00 00       	call   8134814 <_ZNK12advancealtar10CharacData7getUserEv>
 812f3c1:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 812f3c4:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 812f3c8:	0f 84 a8 00 00 00    	je     812f476 <_ZN12advancealtar9ProcStage20addAchievementRewardERSt3mapIiNS_7_RewardESt4lessIiESaISt4pairIKiS2_EEE+0xc8>
 812f3ce:	c7 44 24 08 0c 00 00 	movl   $0xc,0x8(%esp)
 812f3d5:	00 
 812f3d6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 812f3dd:	00 
 812f3de:	8d 45 d8             	lea    -0x28(%ebp),%eax
 812f3e1:	89 04 24             	mov    %eax,(%esp)
 812f3e4:	e8 d7 e8 f4 ff       	call   807dcc0 <memset@plt>
 812f3e9:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 812f3ec:	8d 90 60 df 08 00    	lea    0x8df60(%eax),%edx
 812f3f2:	8d 45 d8             	lea    -0x28(%ebp),%eax
 812f3f5:	89 44 24 04          	mov    %eax,0x4(%esp)
 812f3f9:	89 14 24             	mov    %edx,(%esp)
 812f3fc:	e8 e1 24 00 00       	call   81318e2 <_ZNK12advancealtar25CharacAdvanceAltarManager20getClearStageSummaryEPi>
 812f401:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 812f408:	eb 5f                	jmp    812f469 <_ZN12advancealtar9ProcStage20addAchievementRewardERSt3mapIiNS_7_RewardESt4lessIiESaISt4pairIKiS2_EEE+0xbb>
 812f40a:	8b 45 e8             	mov    -0x18(%ebp),%eax
 812f40d:	89 45 ec             	mov    %eax,-0x14(%ebp)
 812f410:	8b 45 ec             	mov    -0x14(%ebp),%eax
 812f413:	8b 44 85 d8          	mov    -0x28(%ebp,%eax,4),%eax
 812f417:	89 45 f0             	mov    %eax,-0x10(%ebp)
 812f41a:	e8 7c cd f9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 812f41f:	8d 90 4c 63 00 00    	lea    0x634c(%eax),%edx
 812f425:	8b 45 f0             	mov    -0x10(%ebp),%eax
 812f428:	89 44 24 08          	mov    %eax,0x8(%esp)
 812f42c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 812f42f:	89 44 24 04          	mov    %eax,0x4(%esp)
 812f433:	89 14 24             	mov    %edx,(%esp)
 812f436:	e8 6d c1 76 00       	call   889b5a8 <_ZNK12advancealtar15RewardParameter24getAchievementRewardDataENS_15StageDifficulty1TEi>
 812f43b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 812f43e:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 812f442:	74 21                	je     812f465 <_ZN12advancealtar9ProcStage20addAchievementRewardERSt3mapIiNS_7_RewardESt4lessIiESaISt4pairIKiS2_EEE+0xb7>
 812f444:	8b 45 f4             	mov    -0xc(%ebp),%eax
 812f447:	8b 00                	mov    (%eax),%eax
 812f449:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 812f44c:	8d 8a 60 df 08 00    	lea    0x8df60(%edx),%ecx
 812f452:	8b 55 0c             	mov    0xc(%ebp),%edx
 812f455:	89 54 24 08          	mov    %edx,0x8(%esp)
 812f459:	89 44 24 04          	mov    %eax,0x4(%esp)
 812f45d:	89 0c 24             	mov    %ecx,(%esp)
 812f460:	e8 59 36 00 00       	call   8132abe <_ZN12advancealtar25CharacAdvanceAltarManager13addRewardDataEiRSt3mapIiNS_7_RewardESt4lessIiESaISt4pairIKiS2_EEE>
 812f465:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 812f469:	83 7d e8 02          	cmpl   $0x2,-0x18(%ebp)
 812f46d:	0f 9e c0             	setle  %al
 812f470:	84 c0                	test   %al,%al
 812f472:	75 96                	jne    812f40a <_ZN12advancealtar9ProcStage20addAchievementRewardERSt3mapIiNS_7_RewardESt4lessIiESaISt4pairIKiS2_EEE+0x5c>
 812f474:	eb 01                	jmp    812f477 <_ZN12advancealtar9ProcStage20addAchievementRewardERSt3mapIiNS_7_RewardESt4lessIiESaISt4pairIKiS2_EEE+0xc9>
 812f476:	90                   	nop
 812f477:	c9                   	leave
 812f478:	c3                   	ret
 812f479:	90                   	nop

```

```c
// advancealtar::ProcStage::addAchievementReward @ 0x812f3ae

/* advancealtar::ProcStage::addAchievementReward(std::map<int, advancealtar::_Reward,
   std::less<int>, std::allocator<std::pair<int const, advancealtar::_Reward> > >&) */

void __thiscall advancealtar::ProcStage::addAchievementReward(ProcStage *this,map *param_1)

{
  int iVar1;
  int local_2c [4];
  int local_1c;
  int local_18;
  int local_14;
  int *local_10;
  
  local_2c[3] = CharacData::getUser(*(CharacData **)this);
  if (local_2c[3] != 0) {
    memset(local_2c,0,0xc);
    CharacAdvanceAltarManager::getClearStageSummary
              ((CharacAdvanceAltarManager *)(local_2c[3] + 0x8df60),local_2c);
    for (local_1c = 0; local_1c < 3; local_1c = local_1c + 1) {
      local_18 = local_1c;
      local_14 = local_2c[local_1c];
      iVar1 = G_CDataManager();
      local_10 = (int *)RewardParameter::getAchievementRewardData
                                  ((RewardParameter *)(iVar1 + 0x634c),local_18,local_14);
      if (local_10 != (int *)0x0) {
        CharacAdvanceAltarManager::addRewardData
                  ((CharacAdvanceAltarManager *)(local_2c[3] + 0x8df60),*local_10,param_1);
      }
    }
  }
  return;
}

```

---

## addCreatedMapMonster

```asm
// === 0812e16e advancealtar::ProcStage::addCreatedMapMonster  [0x0812e16e-0x812e1dd] ===
 812e16e:	55                   	push   %ebp
 812e16f:	89 e5                	mov    %esp,%ebp
 812e171:	83 ec 48             	sub    $0x48,%esp
 812e174:	8b 45 08             	mov    0x8(%ebp),%eax
 812e177:	0f b7 40 14          	movzwl 0x14(%eax),%eax
 812e17b:	8b 55 0c             	mov    0xc(%ebp),%edx
 812e17e:	66 89 42 04          	mov    %ax,0x4(%edx)
 812e182:	8d 50 01             	lea    0x1(%eax),%edx
 812e185:	8b 45 08             	mov    0x8(%ebp),%eax
 812e188:	66 89 50 14          	mov    %dx,0x14(%eax)
 812e18c:	8b 45 0c             	mov    0xc(%ebp),%eax
 812e18f:	8d 48 04             	lea    0x4(%eax),%ecx
 812e192:	8d 45 e8             	lea    -0x18(%ebp),%eax
 812e195:	8b 55 0c             	mov    0xc(%ebp),%edx
 812e198:	89 54 24 08          	mov    %edx,0x8(%esp)
 812e19c:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 812e1a0:	89 04 24             	mov    %eax,(%esp)
 812e1a3:	e8 33 73 00 00       	call   81354db <_ZSt9make_pairIRsRN12advancealtar18_MapMonsterSummaryEESt4pairINSt17__decay_and_stripIT_E6__typeENS5_IT0_E6__typeEEOS6_OS9_>
 812e1a8:	83 ec 04             	sub    $0x4,%esp
 812e1ab:	8d 45 e8             	lea    -0x18(%ebp),%eax
 812e1ae:	89 44 24 04          	mov    %eax,0x4(%esp)
 812e1b2:	8d 45 d8             	lea    -0x28(%ebp),%eax
 812e1b5:	89 04 24             	mov    %eax,(%esp)
 812e1b8:	e8 5d 73 00 00       	call   813551a <_ZNSt4pairIKsN12advancealtar18_MapMonsterSummaryEEC1IsS2_EEOS_IT_T0_E>
 812e1bd:	8b 45 08             	mov    0x8(%ebp),%eax
 812e1c0:	8d 48 50             	lea    0x50(%eax),%ecx
 812e1c3:	8d 45 d0             	lea    -0x30(%ebp),%eax
 812e1c6:	8d 55 d8             	lea    -0x28(%ebp),%edx
 812e1c9:	89 54 24 08          	mov    %edx,0x8(%esp)
 812e1cd:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 812e1d1:	89 04 24             	mov    %eax,(%esp)
 812e1d4:	e8 87 73 00 00       	call   8135560 <_ZNSt3mapIsN12advancealtar18_MapMonsterSummaryESt4lessIsESaISt4pairIKsS1_EEE6insertERKS6_>
 812e1d9:	83 ec 04             	sub    $0x4,%esp
 812e1dc:	c9                   	leave
 812e1dd:	c3                   	ret

```

```c
// advancealtar::ProcStage::addCreatedMapMonster @ 0x812e16e

/* advancealtar::ProcStage::addCreatedMapMonster(advancealtar::_MapMonsterSummary&) */

void __thiscall
advancealtar::ProcStage::addCreatedMapMonster(ProcStage *this,_MapMonsterSummary *param_1)

{
  short sVar1;
  pair local_34 [8];
  pair<short_const,advancealtar::_MapMonsterSummary> local_2c [16];
  short local_1c [12];
  
  sVar1 = *(short *)(this + 0x14);
  *(short *)(param_1 + 4) = sVar1;
  *(short *)(this + 0x14) = sVar1 + 1;
  std::make_pair<short&,advancealtar::_MapMonsterSummary&>(local_1c,param_1 + 4);
  std::pair<short_const,advancealtar::_MapMonsterSummary>::
  pair<short,advancealtar::_MapMonsterSummary>(local_2c,(pair *)local_1c);
  std::
  map<short,advancealtar::_MapMonsterSummary,std::less<short>,std::allocator<std::pair<short_const,advancealtar::_MapMonsterSummary>>>
  ::insert(local_34);
  return;
}

```

---

## clearStageAndReward

```asm
// === 0812e3f6 advancealtar::ProcStage::clearStageAndReward  [0x0812e3f6-0x812e6dd] ===
 812e3f6:	55                   	push   %ebp
 812e3f7:	89 e5                	mov    %esp,%ebp
 812e3f9:	57                   	push   %edi
 812e3fa:	56                   	push   %esi
 812e3fb:	53                   	push   %ebx
 812e3fc:	83 ec 6c             	sub    $0x6c,%esp
 812e3ff:	8b 45 08             	mov    0x8(%ebp),%eax
 812e402:	8b 40 70             	mov    0x70(%eax),%eax
 812e405:	85 c0                	test   %eax,%eax
 812e407:	0f 84 c4 02 00 00    	je     812e6d1 <_ZN12advancealtar9ProcStage19clearStageAndRewardEv+0x2db>
 812e40d:	8b 45 08             	mov    0x8(%ebp),%eax
 812e410:	8b 00                	mov    (%eax),%eax
 812e412:	89 04 24             	mov    %eax,(%esp)
 812e415:	e8 fa 63 00 00       	call   8134814 <_ZNK12advancealtar10CharacData7getUserEv>
 812e41a:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 812e41d:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 812e421:	0f 84 ad 02 00 00    	je     812e6d4 <_ZN12advancealtar9ProcStage19clearStageAndRewardEv+0x2de>
 812e427:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 812e42e:	c6 45 df 00          	movb   $0x0,-0x21(%ebp)
 812e432:	c6 45 de 00          	movb   $0x0,-0x22(%ebp)
 812e436:	8b 45 08             	mov    0x8(%ebp),%eax
 812e439:	89 04 24             	mov    %eax,(%esp)
 812e43c:	e8 0d 07 00 00       	call   812eb4e <_ZNK12advancealtar9ProcStage23getClearSurvivalRoundNoEv>
 812e441:	89 c6                	mov    %eax,%esi
 812e443:	8b 45 08             	mov    0x8(%ebp),%eax
 812e446:	89 04 24             	mov    %eax,(%esp)
 812e449:	e8 b6 06 00 00       	call   812eb04 <_ZNK12advancealtar9ProcStage12getStageTypeEv>
 812e44e:	89 c3                	mov    %eax,%ebx
 812e450:	8b 45 08             	mov    0x8(%ebp),%eax
 812e453:	8b 78 68             	mov    0x68(%eax),%edi
 812e456:	8b 45 08             	mov    0x8(%ebp),%eax
 812e459:	89 04 24             	mov    %eax,(%esp)
 812e45c:	e8 c5 06 00 00       	call   812eb26 <_ZNK12advancealtar9ProcStage13getStageIndexEv>
 812e461:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 812e464:	8d 8a 60 df 08 00    	lea    0x8df60(%edx),%ecx
 812e46a:	8d 55 de             	lea    -0x22(%ebp),%edx
 812e46d:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 812e471:	8d 55 df             	lea    -0x21(%ebp),%edx
 812e474:	89 54 24 18          	mov    %edx,0x18(%esp)
 812e478:	8d 55 e0             	lea    -0x20(%ebp),%edx
 812e47b:	89 54 24 14          	mov    %edx,0x14(%esp)
 812e47f:	89 74 24 10          	mov    %esi,0x10(%esp)
 812e483:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 812e487:	89 7c 24 08          	mov    %edi,0x8(%esp)
 812e48b:	89 44 24 04          	mov    %eax,0x4(%esp)
 812e48f:	89 0c 24             	mov    %ecx,(%esp)
 812e492:	e8 c3 32 00 00       	call   813175a <_ZN12advancealtar25CharacAdvanceAltarManager10clearStageEiNS_15StageDifficulty1TENS_9StageType1TEiRiRbS6_>
 812e497:	84 c0                	test   %al,%al
 812e499:	0f 84 36 02 00 00    	je     812e6d5 <_ZN12advancealtar9ProcStage19clearStageAndRewardEv+0x2df>
 812e49f:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 812e4a2:	89 04 24             	mov    %eax,(%esp)
 812e4a5:	e8 02 72 00 00       	call   81356ac <_ZNSt3mapIiN12advancealtar7_RewardESt4lessIiESaISt4pairIKiS1_EEEC1Ev>
 812e4aa:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 812e4ad:	89 44 24 04          	mov    %eax,0x4(%esp)
 812e4b1:	8b 45 08             	mov    0x8(%ebp),%eax
 812e4b4:	89 04 24             	mov    %eax,(%esp)
 812e4b7:	e8 f2 0e 00 00       	call   812f3ae <_ZN12advancealtar9ProcStage20addAchievementRewardERSt3mapIiNS_7_RewardESt4lessIiESaISt4pairIKiS2_EEE>
 812e4bc:	8d 45 b8             	lea    -0x48(%ebp),%eax
 812e4bf:	89 04 24             	mov    %eax,(%esp)
 812e4c2:	e8 19 67 00 00       	call   8134be0 <_ZNSt6vectorIN12advancealtar11_RewardItemESaIS1_EEC1Ev>
 812e4c7:	8d 45 b8             	lea    -0x48(%ebp),%eax
 812e4ca:	89 44 24 04          	mov    %eax,0x4(%esp)
 812e4ce:	8b 45 08             	mov    0x8(%ebp),%eax
 812e4d1:	89 04 24             	mov    %eax,(%esp)
 812e4d4:	e8 21 0c 00 00       	call   812f0fa <_ZN12advancealtar9ProcStage16rewardClearStageERSt6vectorINS_11_RewardItemESaIS2_EE>
 812e4d9:	8b 45 08             	mov    0x8(%ebp),%eax
 812e4dc:	89 04 24             	mov    %eax,(%esp)
 812e4df:	e8 42 06 00 00       	call   812eb26 <_ZNK12advancealtar9ProcStage13getStageIndexEv>
 812e4e4:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 812e4e7:	81 c2 60 df 08 00    	add    $0x8df60,%edx
 812e4ed:	89 44 24 04          	mov    %eax,0x4(%esp)
 812e4f1:	89 14 24             	mov    %edx,(%esp)
 812e4f4:	e8 db 4c 00 00       	call   81331d4 <_ZN12advancealtar25CharacAdvanceAltarManager12setNextStageEi>
 812e4f9:	8b 45 08             	mov    0x8(%ebp),%eax
 812e4fc:	89 04 24             	mov    %eax,(%esp)
 812e4ff:	e8 00 06 00 00       	call   812eb04 <_ZNK12advancealtar9ProcStage12getStageTypeEv>
 812e504:	85 c0                	test   %eax,%eax
 812e506:	74 1f                	je     812e527 <_ZN12advancealtar9ProcStage19clearStageAndRewardEv+0x131>
 812e508:	8b 45 08             	mov    0x8(%ebp),%eax
 812e50b:	89 04 24             	mov    %eax,(%esp)
 812e50e:	e8 f1 05 00 00       	call   812eb04 <_ZNK12advancealtar9ProcStage12getStageTypeEv>
 812e513:	83 f8 01             	cmp    $0x1,%eax
 812e516:	75 16                	jne    812e52e <_ZN12advancealtar9ProcStage19clearStageAndRewardEv+0x138>
 812e518:	8d 45 b8             	lea    -0x48(%ebp),%eax
 812e51b:	89 04 24             	mov    %eax,(%esp)
 812e51e:	e8 9d 71 00 00       	call   81356c0 <_ZNKSt6vectorIN12advancealtar11_RewardItemESaIS1_EE4sizeEv>
 812e523:	85 c0                	test   %eax,%eax
 812e525:	74 07                	je     812e52e <_ZN12advancealtar9ProcStage19clearStageAndRewardEv+0x138>
 812e527:	b8 01 00 00 00       	mov    $0x1,%eax
 812e52c:	eb 05                	jmp    812e533 <_ZN12advancealtar9ProcStage19clearStageAndRewardEv+0x13d>
 812e52e:	b8 00 00 00 00       	mov    $0x0,%eax
 812e533:	84 c0                	test   %al,%al
 812e535:	74 21                	je     812e558 <_ZN12advancealtar9ProcStage19clearStageAndRewardEv+0x162>
 812e537:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 812e53a:	05 60 df 08 00       	add    $0x8df60,%eax
 812e53f:	89 04 24             	mov    %eax,(%esp)
 812e542:	e8 6f 2e 00 00       	call   81313b6 <_ZN12advancealtar25CharacAdvanceAltarManager9decTicketEv>
 812e547:	83 f0 01             	xor    $0x1,%eax
 812e54a:	84 c0                	test   %al,%al
 812e54c:	74 0a                	je     812e558 <_ZN12advancealtar9ProcStage19clearStageAndRewardEv+0x162>
 812e54e:	bb 00 00 00 00       	mov    $0x0,%ebx
 812e553:	e9 44 01 00 00       	jmp    812e69c <_ZN12advancealtar9ProcStage19clearStageAndRewardEv+0x2a6>
 812e558:	8d 45 ac             	lea    -0x54(%ebp),%eax
 812e55b:	89 04 24             	mov    %eax,(%esp)
 812e55e:	e8 7f 71 00 00       	call   81356e2 <_ZNSt6vectorIN12advancealtar8_BuyItemESaIS1_EEC1Ev>
 812e563:	0f b6 45 df          	movzbl -0x21(%ebp),%eax
 812e567:	84 c0                	test   %al,%al
 812e569:	0f 84 8d 00 00 00    	je     812e5fc <_ZN12advancealtar9ProcStage19clearStageAndRewardEv+0x206>
 812e56f:	8b 45 08             	mov    0x8(%ebp),%eax
 812e572:	89 04 24             	mov    %eax,(%esp)
 812e575:	e8 ac 05 00 00       	call   812eb26 <_ZNK12advancealtar9ProcStage13getStageIndexEv>
 812e57a:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 812e57d:	8d 8a 60 df 08 00    	lea    0x8df60(%edx),%ecx
 812e583:	8d 55 ac             	lea    -0x54(%ebp),%edx
 812e586:	89 54 24 0c          	mov    %edx,0xc(%esp)
 812e58a:	89 44 24 08          	mov    %eax,0x8(%esp)
 812e58e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 812e595:	00 
 812e596:	89 0c 24             	mov    %ecx,(%esp)
 812e599:	e8 82 47 00 00       	call   8132d20 <_ZN12advancealtar25CharacAdvanceAltarManager16setUnlockBuyItemENS_20AdvanceAltarShopType1TEiPSt6vectorINS_8_BuyItemESaIS4_EE>
 812e59e:	8b 45 08             	mov    0x8(%ebp),%eax
 812e5a1:	89 04 24             	mov    %eax,(%esp)
 812e5a4:	e8 7d 05 00 00       	call   812eb26 <_ZNK12advancealtar9ProcStage13getStageIndexEv>
 812e5a9:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 812e5ac:	8d 8a 60 df 08 00    	lea    0x8df60(%edx),%ecx
 812e5b2:	8d 55 ac             	lea    -0x54(%ebp),%edx
 812e5b5:	89 54 24 0c          	mov    %edx,0xc(%esp)
 812e5b9:	89 44 24 08          	mov    %eax,0x8(%esp)
 812e5bd:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 812e5c4:	00 
 812e5c5:	89 0c 24             	mov    %ecx,(%esp)
 812e5c8:	e8 53 47 00 00       	call   8132d20 <_ZN12advancealtar25CharacAdvanceAltarManager16setUnlockBuyItemENS_20AdvanceAltarShopType1TEiPSt6vectorINS_8_BuyItemESaIS4_EE>
 812e5cd:	8b 45 08             	mov    0x8(%ebp),%eax
 812e5d0:	89 04 24             	mov    %eax,(%esp)
 812e5d3:	e8 4e 05 00 00       	call   812eb26 <_ZNK12advancealtar9ProcStage13getStageIndexEv>
 812e5d8:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 812e5db:	8d 8a 60 df 08 00    	lea    0x8df60(%edx),%ecx
 812e5e1:	8d 55 ac             	lea    -0x54(%ebp),%edx
 812e5e4:	89 54 24 0c          	mov    %edx,0xc(%esp)
 812e5e8:	89 44 24 08          	mov    %eax,0x8(%esp)
 812e5ec:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 812e5f3:	00 
 812e5f4:	89 0c 24             	mov    %ecx,(%esp)
 812e5f7:	e8 24 47 00 00       	call   8132d20 <_ZN12advancealtar25CharacAdvanceAltarManager16setUnlockBuyItemENS_20AdvanceAltarShopType1TEiPSt6vectorINS_8_BuyItemESaIS4_EE>
 812e5fc:	0f b6 45 de          	movzbl -0x22(%ebp),%eax
 812e600:	0f b6 d0             	movzbl %al,%edx
 812e603:	8b 45 e0             	mov    -0x20(%ebp),%eax
 812e606:	89 54 24 14          	mov    %edx,0x14(%esp)
 812e60a:	89 44 24 10          	mov    %eax,0x10(%esp)
 812e60e:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 812e611:	89 44 24 0c          	mov    %eax,0xc(%esp)
 812e615:	8d 45 ac             	lea    -0x54(%ebp),%eax
 812e618:	89 44 24 08          	mov    %eax,0x8(%esp)
 812e61c:	8d 45 b8             	lea    -0x48(%ebp),%eax
 812e61f:	89 44 24 04          	mov    %eax,0x4(%esp)
 812e623:	8b 45 08             	mov    0x8(%ebp),%eax
 812e626:	89 04 24             	mov    %eax,(%esp)
 812e629:	e8 b0 00 00 00       	call   812e6de <_ZNK12advancealtar9ProcStage14sendClearStageERKSt6vectorINS_11_RewardItemESaIS2_EERKS1_INS_8_BuyItemESaIS7_EERKSt3mapIiNS_7_RewardESt4lessIiESaISt4pairIKiSD_EEEib>
 812e62e:	8b 45 e0             	mov    -0x20(%ebp),%eax
 812e631:	85 c0                	test   %eax,%eax
 812e633:	7e 40                	jle    812e675 <_ZN12advancealtar9ProcStage19clearStageAndRewardEv+0x27f>
 812e635:	8b 5d e0             	mov    -0x20(%ebp),%ebx
 812e638:	8b 45 08             	mov    0x8(%ebp),%eax
 812e63b:	89 04 24             	mov    %eax,(%esp)
 812e63e:	e8 e3 04 00 00       	call   812eb26 <_ZNK12advancealtar9ProcStage13getStageIndexEv>
 812e643:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 812e647:	89 44 24 08          	mov    %eax,0x8(%esp)
 812e64b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 812e652:	00 
 812e653:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 812e656:	89 04 24             	mov    %eax,(%esp)
 812e659:	e8 f8 56 00 00       	call   8133d56 <_ZN12advancealtar10HistoryLog7starAddER5CUserNS_11AddStarType1TEii>
 812e65e:	eb 15                	jmp    812e675 <_ZN12advancealtar9ProcStage19clearStageAndRewardEv+0x27f>
 812e660:	89 d3                	mov    %edx,%ebx
 812e662:	89 c6                	mov    %eax,%esi
 812e664:	8d 45 ac             	lea    -0x54(%ebp),%eax
 812e667:	89 04 24             	mov    %eax,(%esp)
 812e66a:	e8 87 70 00 00       	call   81356f6 <_ZNSt6vectorIN12advancealtar8_BuyItemESaIS1_EED1Ev>
 812e66f:	89 f0                	mov    %esi,%eax
 812e671:	89 da                	mov    %ebx,%edx
 812e673:	eb 12                	jmp    812e687 <_ZN12advancealtar9ProcStage19clearStageAndRewardEv+0x291>
 812e675:	8d 45 ac             	lea    -0x54(%ebp),%eax
 812e678:	89 04 24             	mov    %eax,(%esp)
 812e67b:	e8 76 70 00 00       	call   81356f6 <_ZNSt6vectorIN12advancealtar8_BuyItemESaIS1_EED1Ev>
 812e680:	bb 01 00 00 00       	mov    $0x1,%ebx
 812e685:	eb 15                	jmp    812e69c <_ZN12advancealtar9ProcStage19clearStageAndRewardEv+0x2a6>
 812e687:	89 d3                	mov    %edx,%ebx
 812e689:	89 c6                	mov    %eax,%esi
 812e68b:	8d 45 b8             	lea    -0x48(%ebp),%eax
 812e68e:	89 04 24             	mov    %eax,(%esp)
 812e691:	e8 5e 65 00 00       	call   8134bf4 <_ZNSt6vectorIN12advancealtar11_RewardItemESaIS1_EED1Ev>
 812e696:	89 f0                	mov    %esi,%eax
 812e698:	89 da                	mov    %ebx,%edx
 812e69a:	eb 1a                	jmp    812e6b6 <_ZN12advancealtar9ProcStage19clearStageAndRewardEv+0x2c0>
 812e69c:	8d 45 b8             	lea    -0x48(%ebp),%eax
 812e69f:	89 04 24             	mov    %eax,(%esp)
 812e6a2:	e8 4d 65 00 00       	call   8134bf4 <_ZNSt6vectorIN12advancealtar11_RewardItemESaIS1_EED1Ev>
 812e6a7:	85 db                	test   %ebx,%ebx
 812e6a9:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 812e6ac:	89 04 24             	mov    %eax,(%esp)
 812e6af:	e8 6a 5e 00 00       	call   813451e <_ZNSt3mapIiN12advancealtar7_RewardESt4lessIiESaISt4pairIKiS1_EEED1Ev>
 812e6b4:	eb 1f                	jmp    812e6d5 <_ZN12advancealtar9ProcStage19clearStageAndRewardEv+0x2df>
 812e6b6:	89 d3                	mov    %edx,%ebx
 812e6b8:	89 c6                	mov    %eax,%esi
 812e6ba:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 812e6bd:	89 04 24             	mov    %eax,(%esp)
 812e6c0:	e8 59 5e 00 00       	call   813451e <_ZNSt3mapIiN12advancealtar7_RewardESt4lessIiESaISt4pairIKiS1_EEED1Ev>
 812e6c5:	89 f0                	mov    %esi,%eax
 812e6c7:	89 da                	mov    %ebx,%edx
 812e6c9:	89 04 24             	mov    %eax,(%esp)
 812e6cc:	e8 7f 50 9b 00       	call   8ae3750 <_Unwind_Resume>
 812e6d1:	90                   	nop
 812e6d2:	eb 01                	jmp    812e6d5 <_ZN12advancealtar9ProcStage19clearStageAndRewardEv+0x2df>
 812e6d4:	90                   	nop
 812e6d5:	83 c4 6c             	add    $0x6c,%esp
 812e6d8:	5b                   	pop    %ebx
 812e6d9:	5e                   	pop    %esi
 812e6da:	5f                   	pop    %edi
 812e6db:	5d                   	pop    %ebp
 812e6dc:	c3                   	ret
 812e6dd:	90                   	nop

```

```c
// advancealtar::ProcStage::clearStageAndReward @ 0x812e3f6

/* advancealtar::ProcStage::clearStageAndReward() */

void __thiscall advancealtar::ProcStage::clearStageAndReward(ProcStage *this)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  vector<advancealtar::_BuyItem,std::allocator<advancealtar::_BuyItem>> local_58 [12];
  vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>> local_4c [12];
  map<int,advancealtar::_Reward,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Reward>>>
  local_40 [26];
  bool local_26;
  char local_25;
  int local_24;
  int local_20;
  
  if ((*(int *)(this + 0x70) != 0) &&
     (local_20 = CharacData::getUser(*(CharacData **)this), local_20 != 0)) {
    local_24 = 0;
    local_25 = '\0';
    local_26 = false;
    uVar3 = getClearSurvivalRoundNo(this);
    uVar4 = getStageType(this);
    uVar7 = *(undefined4 *)(this + 0x68);
    uVar5 = getStageIndex(this);
    cVar2 = CharacAdvanceAltarManager::clearStage
                      ((CharacAdvanceAltarManager *)(local_20 + 0x8df60),uVar5,uVar7,uVar4,uVar3,
                       &local_24,&local_25,&local_26);
    if (cVar2 != '\0') {
      std::
      map<int,advancealtar::_Reward,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Reward>>>
      ::map(local_40);
                    /* try { // try from 0812e4b7 to 0812e4c6 has its CatchHandler @ 0812e6b6 */
      addAchievementReward(this,(map *)local_40);
      std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>::vector
                (local_4c);
                    /* try { // try from 0812e4d4 to 0812e562 has its CatchHandler @ 0812e687 */
      rewardClearStage(this,(vector *)local_4c);
      iVar6 = getStageIndex(this);
      CharacAdvanceAltarManager::setNextStage
                ((CharacAdvanceAltarManager *)(local_20 + 0x8df60),iVar6);
      iVar6 = getStageType(this);
      if ((iVar6 == 0) ||
         ((iVar6 = getStageType(this), iVar6 == 1 &&
          (iVar6 = std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>
                   ::size(local_4c), iVar6 != 0)))) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if ((!bVar1) ||
         (cVar2 = CharacAdvanceAltarManager::decTicket
                            ((CharacAdvanceAltarManager *)(local_20 + 0x8df60)), cVar2 == '\x01')) {
        std::vector<advancealtar::_BuyItem,std::allocator<advancealtar::_BuyItem>>::vector(local_58)
        ;
        if (local_25 != '\0') {
          uVar7 = getStageIndex(this);
                    /* try { // try from 0812e599 to 0812e65d has its CatchHandler @ 0812e660 */
          CharacAdvanceAltarManager::setUnlockBuyItem
                    ((CharacAdvanceAltarManager *)(local_20 + 0x8df60),0,uVar7,local_58);
          uVar7 = getStageIndex(this);
          CharacAdvanceAltarManager::setUnlockBuyItem
                    ((CharacAdvanceAltarManager *)(local_20 + 0x8df60),1,uVar7,local_58);
          uVar7 = getStageIndex(this);
          CharacAdvanceAltarManager::setUnlockBuyItem
                    ((CharacAdvanceAltarManager *)(local_20 + 0x8df60),2,uVar7,local_58);
        }
        sendClearStage(this,(vector *)local_4c,(vector *)local_58,(map *)local_40,local_24,local_26)
        ;
        iVar6 = local_24;
        if (0 < local_24) {
          uVar7 = getStageIndex(this);
          HistoryLog::starAdd(local_20,0,uVar7,iVar6);
        }
                    /* try { // try from 0812e67b to 0812e67f has its CatchHandler @ 0812e687 */
        std::vector<advancealtar::_BuyItem,std::allocator<advancealtar::_BuyItem>>::~vector
                  (local_58);
      }
                    /* try { // try from 0812e6a2 to 0812e6a6 has its CatchHandler @ 0812e6b6 */
      std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>::~vector
                (local_4c);
      std::
      map<int,advancealtar::_Reward,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Reward>>>
      ::~map(local_40);
    }
  }
  return;
}

```

---

## dieMob

```asm
// === 0812e1de advancealtar::ProcStage::dieMob  [0x0812e1de-0x812e2c5] ===
 812e1de:	55                   	push   %ebp
 812e1df:	89 e5                	mov    %esp,%ebp
 812e1e1:	53                   	push   %ebx
 812e1e2:	83 ec 34             	sub    $0x34,%esp
 812e1e5:	8b 55 0c             	mov    0xc(%ebp),%edx
 812e1e8:	8b 45 10             	mov    0x10(%ebp),%eax
 812e1eb:	66 89 55 e4          	mov    %dx,-0x1c(%ebp)
 812e1ef:	66 89 45 e0          	mov    %ax,-0x20(%ebp)
 812e1f3:	0f b7 55 e0          	movzwl -0x20(%ebp),%edx
 812e1f7:	0f b7 45 e4          	movzwl -0x1c(%ebp),%eax
 812e1fb:	8b 4d 08             	mov    0x8(%ebp),%ecx
 812e1fe:	8d 59 18             	lea    0x18(%ecx),%ebx
 812e201:	8b 4d 14             	mov    0x14(%ebp),%ecx
 812e204:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 812e208:	89 54 24 08          	mov    %edx,0x8(%esp)
 812e20c:	89 44 24 04          	mov    %eax,0x4(%esp)
 812e210:	89 1c 24             	mov    %ebx,(%esp)
 812e213:	e8 e8 f8 ff ff       	call   812db00 <_ZN12advancealtar9ProcStage18ProcSummonObjectMs6dieMobEttRK15MSG_MONSTER_DIE>
 812e218:	83 f0 01             	xor    $0x1,%eax
 812e21b:	84 c0                	test   %al,%al
 812e21d:	0f 84 98 00 00 00    	je     812e2bb <_ZN12advancealtar9ProcStage6dieMobEttRK15MSG_MONSTER_DIE+0xdd>
 812e223:	0f b7 45 e4          	movzwl -0x1c(%ebp),%eax
 812e227:	66 89 45 f2          	mov    %ax,-0xe(%ebp)
 812e22b:	8b 45 08             	mov    0x8(%ebp),%eax
 812e22e:	8d 48 50             	lea    0x50(%eax),%ecx
 812e231:	8d 45 ec             	lea    -0x14(%ebp),%eax
 812e234:	8d 55 f2             	lea    -0xe(%ebp),%edx
 812e237:	89 54 24 08          	mov    %edx,0x8(%esp)
 812e23b:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 812e23f:	89 04 24             	mov    %eax,(%esp)
 812e242:	e8 45 73 00 00       	call   813558c <_ZNSt3mapIsN12advancealtar18_MapMonsterSummaryESt4lessIsESaISt4pairIKsS1_EEE4findERS5_>
 812e247:	83 ec 04             	sub    $0x4,%esp
 812e24a:	8b 45 08             	mov    0x8(%ebp),%eax
 812e24d:	8d 50 50             	lea    0x50(%eax),%edx
 812e250:	8d 45 f4             	lea    -0xc(%ebp),%eax
 812e253:	89 54 24 04          	mov    %edx,0x4(%esp)
 812e257:	89 04 24             	mov    %eax,(%esp)
 812e25a:	e8 59 73 00 00       	call   81355b8 <_ZNSt3mapIsN12advancealtar18_MapMonsterSummaryESt4lessIsESaISt4pairIKsS1_EEE3endEv>
 812e25f:	83 ec 04             	sub    $0x4,%esp
 812e262:	8d 45 f4             	lea    -0xc(%ebp),%eax
 812e265:	89 44 24 04          	mov    %eax,0x4(%esp)
 812e269:	8d 45 ec             	lea    -0x14(%ebp),%eax
 812e26c:	89 04 24             	mov    %eax,(%esp)
 812e26f:	e8 6a 73 00 00       	call   81355de <_ZNKSt17_Rb_tree_iteratorISt4pairIKsN12advancealtar18_MapMonsterSummaryEEEneERKS5_>
 812e274:	84 c0                	test   %al,%al
 812e276:	74 1d                	je     812e295 <_ZN12advancealtar9ProcStage6dieMobEttRK15MSG_MONSTER_DIE+0xb7>
 812e278:	8d 45 ec             	lea    -0x14(%ebp),%eax
 812e27b:	89 04 24             	mov    %eax,(%esp)
 812e27e:	e8 6f 73 00 00       	call   81355f2 <_ZNKSt17_Rb_tree_iteratorISt4pairIKsN12advancealtar18_MapMonsterSummaryEEEptEv>
 812e283:	0f b6 40 0e          	movzbl 0xe(%eax),%eax
 812e287:	83 f0 01             	xor    $0x1,%eax
 812e28a:	84 c0                	test   %al,%al
 812e28c:	74 07                	je     812e295 <_ZN12advancealtar9ProcStage6dieMobEttRK15MSG_MONSTER_DIE+0xb7>
 812e28e:	b8 01 00 00 00       	mov    $0x1,%eax
 812e293:	eb 05                	jmp    812e29a <_ZN12advancealtar9ProcStage6dieMobEttRK15MSG_MONSTER_DIE+0xbc>
 812e295:	b8 00 00 00 00       	mov    $0x0,%eax
 812e29a:	84 c0                	test   %al,%al
 812e29c:	74 16                	je     812e2b4 <_ZN12advancealtar9ProcStage6dieMobEttRK15MSG_MONSTER_DIE+0xd6>
 812e29e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 812e2a1:	89 04 24             	mov    %eax,(%esp)
 812e2a4:	e8 49 73 00 00       	call   81355f2 <_ZNKSt17_Rb_tree_iteratorISt4pairIKsN12advancealtar18_MapMonsterSummaryEEEptEv>
 812e2a9:	c6 40 0e 01          	movb   $0x1,0xe(%eax)
 812e2ad:	b8 01 00 00 00       	mov    $0x1,%eax
 812e2b2:	eb 0c                	jmp    812e2c0 <_ZN12advancealtar9ProcStage6dieMobEttRK15MSG_MONSTER_DIE+0xe2>
 812e2b4:	b8 00 00 00 00       	mov    $0x0,%eax
 812e2b9:	eb 05                	jmp    812e2c0 <_ZN12advancealtar9ProcStage6dieMobEttRK15MSG_MONSTER_DIE+0xe2>
 812e2bb:	b8 01 00 00 00       	mov    $0x1,%eax
 812e2c0:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 812e2c3:	c9                   	leave
 812e2c4:	c3                   	ret
 812e2c5:	90                   	nop

```

```c
// advancealtar::ProcStage::dieMob @ 0x812e1de

/* advancealtar::ProcStage::dieMob(unsigned short, unsigned short, MSG_MONSTER_DIE const&) */

bool __thiscall
advancealtar::ProcStage::dieMob
          (ProcStage *this,ushort param_1,ushort param_2,MSG_MONSTER_DIE *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  _Rb_tree_iterator<std::pair<short_const,advancealtar::_MapMonsterSummary>> local_18 [6];
  ushort local_12;
  map<short,advancealtar::_MapMonsterSummary,std::less<short>,std::allocator<std::pair<short_const,advancealtar::_MapMonsterSummary>>>
  local_10 [8];
  
  cVar2 = ProcSummonObjectMs::dieMob((ProcSummonObjectMs *)(this + 0x18),param_1,param_2,param_3);
  if (cVar2 == '\x01') {
    return true;
  }
  local_12 = param_1;
  std::
  map<short,advancealtar::_MapMonsterSummary,std::less<short>,std::allocator<std::pair<short_const,advancealtar::_MapMonsterSummary>>>
  ::find((short *)local_18);
  std::
  map<short,advancealtar::_MapMonsterSummary,std::less<short>,std::allocator<std::pair<short_const,advancealtar::_MapMonsterSummary>>>
  ::end(local_10);
  cVar2 = std::_Rb_tree_iterator<std::pair<short_const,advancealtar::_MapMonsterSummary>>::
          operator!=(local_18,(_Rb_tree_iterator *)local_10);
  if ((cVar2 == '\0') ||
     (iVar3 = std::_Rb_tree_iterator<std::pair<short_const,advancealtar::_MapMonsterSummary>>::
              operator->(local_18), *(char *)(iVar3 + 0xe) == '\x01')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    iVar3 = std::_Rb_tree_iterator<std::pair<short_const,advancealtar::_MapMonsterSummary>>::
            operator->(local_18);
    *(undefined1 *)(iVar3 + 0xe) = 1;
  }
  return bVar1;
}

```

---

## endProcAllKillMonster

```asm
// === 0812ea00 advancealtar::ProcStage::endProcAllKillMonster  [0x0812ea00-0x812eaa5] ===
 812ea00:	55                   	push   %ebp
 812ea01:	89 e5                	mov    %esp,%ebp
 812ea03:	53                   	push   %ebx
 812ea04:	83 ec 24             	sub    $0x24,%esp
 812ea07:	8b 45 08             	mov    0x8(%ebp),%eax
 812ea0a:	8b 00                	mov    (%eax),%eax
 812ea0c:	89 04 24             	mov    %eax,(%esp)
 812ea0f:	e8 00 5e 00 00       	call   8134814 <_ZNK12advancealtar10CharacData7getUserEv>
 812ea14:	89 45 f4             	mov    %eax,-0xc(%ebp)
 812ea17:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 812ea1b:	75 07                	jne    812ea24 <_ZN12advancealtar9ProcStage21endProcAllKillMonsterEv+0x24>
 812ea1d:	b8 01 00 00 00       	mov    $0x1,%eax
 812ea22:	eb 7c                	jmp    812eaa0 <_ZN12advancealtar9ProcStage21endProcAllKillMonsterEv+0xa0>
 812ea24:	8b 45 08             	mov    0x8(%ebp),%eax
 812ea27:	89 04 24             	mov    %eax,(%esp)
 812ea2a:	e8 d5 00 00 00       	call   812eb04 <_ZNK12advancealtar9ProcStage12getStageTypeEv>
 812ea2f:	83 f8 01             	cmp    $0x1,%eax
 812ea32:	0f 94 c0             	sete   %al
 812ea35:	84 c0                	test   %al,%al
 812ea37:	74 57                	je     812ea90 <_ZN12advancealtar9ProcStage21endProcAllKillMonsterEv+0x90>
 812ea39:	8b 45 08             	mov    0x8(%ebp),%eax
 812ea3c:	89 04 24             	mov    %eax,(%esp)
 812ea3f:	e8 28 5e 00 00       	call   813486c <_ZNK12advancealtar9ProcStage18getStageDifficultyEv>
 812ea44:	89 c3                	mov    %eax,%ebx
 812ea46:	8b 45 08             	mov    0x8(%ebp),%eax
 812ea49:	89 04 24             	mov    %eax,(%esp)
 812ea4c:	e8 d5 00 00 00       	call   812eb26 <_ZNK12advancealtar9ProcStage13getStageIndexEv>
 812ea51:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 812ea55:	89 44 24 04          	mov    %eax,0x4(%esp)
 812ea59:	8b 45 08             	mov    0x8(%ebp),%eax
 812ea5c:	89 04 24             	mov    %eax,(%esp)
 812ea5f:	e8 0c f4 ff ff       	call   812de70 <_ZN12advancealtar9ProcStage10startStageEiNS_15StageDifficulty1TE>
 812ea64:	85 c0                	test   %eax,%eax
 812ea66:	0f 95 c0             	setne  %al
 812ea69:	84 c0                	test   %al,%al
 812ea6b:	74 12                	je     812ea7f <_ZN12advancealtar9ProcStage21endProcAllKillMonsterEv+0x7f>
 812ea6d:	8b 45 08             	mov    0x8(%ebp),%eax
 812ea70:	89 04 24             	mov    %eax,(%esp)
 812ea73:	e8 7e f9 ff ff       	call   812e3f6 <_ZN12advancealtar9ProcStage19clearStageAndRewardEv>
 812ea78:	b8 01 00 00 00       	mov    $0x1,%eax
 812ea7d:	eb 21                	jmp    812eaa0 <_ZN12advancealtar9ProcStage21endProcAllKillMonsterEv+0xa0>
 812ea7f:	8b 45 08             	mov    0x8(%ebp),%eax
 812ea82:	c7 40 04 03 00 00 00 	movl   $0x3,0x4(%eax)
 812ea89:	b8 00 00 00 00       	mov    $0x0,%eax
 812ea8e:	eb 10                	jmp    812eaa0 <_ZN12advancealtar9ProcStage21endProcAllKillMonsterEv+0xa0>
 812ea90:	8b 45 08             	mov    0x8(%ebp),%eax
 812ea93:	89 04 24             	mov    %eax,(%esp)
 812ea96:	e8 5b f9 ff ff       	call   812e3f6 <_ZN12advancealtar9ProcStage19clearStageAndRewardEv>
 812ea9b:	b8 01 00 00 00       	mov    $0x1,%eax
 812eaa0:	83 c4 24             	add    $0x24,%esp
 812eaa3:	5b                   	pop    %ebx
 812eaa4:	5d                   	pop    %ebp
 812eaa5:	c3                   	ret

```

```c
// advancealtar::ProcStage::endProcAllKillMonster @ 0x812ea00

/* advancealtar::ProcStage::endProcAllKillMonster() */

undefined4 __thiscall advancealtar::ProcStage::endProcAllKillMonster(ProcStage *this)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = CharacData::getUser(*(CharacData **)this);
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    iVar1 = getStageType(this);
    if (iVar1 == 1) {
      uVar2 = getStageDifficulty(this);
      uVar3 = getStageIndex(this);
      iVar1 = startStage(this,uVar3,uVar2);
      if (iVar1 == 0) {
        *(undefined4 *)(this + 4) = 3;
        uVar2 = 0;
      }
      else {
        clearStageAndReward(this);
        uVar2 = 1;
      }
    }
    else {
      clearStageAndReward(this);
      uVar2 = 1;
    }
  }
  return uVar2;
}

```

---

## getClearSurvivalRoundNo

```asm
// === 0812eb4e advancealtar::ProcStage::getClearSurvivalRoundNo  [0x0812eb4e-0x812eb59] ===
 812eb4e:	55                   	push   %ebp
 812eb4f:	89 e5                	mov    %esp,%ebp
 812eb51:	8b 45 08             	mov    0x8(%ebp),%eax
 812eb54:	8b 40 7c             	mov    0x7c(%eax),%eax
 812eb57:	5d                   	pop    %ebp
 812eb58:	c3                   	ret
 812eb59:	90                   	nop

```

```c
// advancealtar::ProcStage::getClearSurvivalRoundNo @ 0x812eb4e

/* advancealtar::ProcStage::getClearSurvivalRoundNo() const */

undefined4 __thiscall advancealtar::ProcStage::getClearSurvivalRoundNo(ProcStage *this)

{
  return *(undefined4 *)(this + 0x7c);
}

```

---

## getStageIndex

```asm
// === 0812eb26 advancealtar::ProcStage::getStageIndex  [0x0812eb26-0x812eb4d] ===
 812eb26:	55                   	push   %ebp
 812eb27:	89 e5                	mov    %esp,%ebp
 812eb29:	83 ec 18             	sub    $0x18,%esp
 812eb2c:	8b 45 08             	mov    0x8(%ebp),%eax
 812eb2f:	8b 40 70             	mov    0x70(%eax),%eax
 812eb32:	85 c0                	test   %eax,%eax
 812eb34:	75 07                	jne    812eb3d <_ZNK12advancealtar9ProcStage13getStageIndexEv+0x17>
 812eb36:	b8 00 00 00 00       	mov    $0x0,%eax
 812eb3b:	eb 0e                	jmp    812eb4b <_ZNK12advancealtar9ProcStage13getStageIndexEv+0x25>
 812eb3d:	8b 45 08             	mov    0x8(%ebp),%eax
 812eb40:	8b 40 70             	mov    0x70(%eax),%eax
 812eb43:	89 04 24             	mov    %eax,(%esp)
 812eb46:	e8 a5 f1 fc ff       	call   80fdcf0 <_ZNK8CDungeon9get_indexEv>
 812eb4b:	c9                   	leave
 812eb4c:	c3                   	ret
 812eb4d:	90                   	nop

```

```c
// advancealtar::ProcStage::getStageIndex @ 0x812eb26

/* advancealtar::ProcStage::getStageIndex() const */

undefined4 __thiscall advancealtar::ProcStage::getStageIndex(ProcStage *this)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 0x70) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = CDungeon::get_index(*(CDungeon **)(this + 0x70));
  }
  return uVar1;
}

```

---

## getStageType

```asm
// === 0812eb04 advancealtar::ProcStage::getStageType  [0x0812eb04-0x812eb25] ===
 812eb04:	55                   	push   %ebp
 812eb05:	89 e5                	mov    %esp,%ebp
 812eb07:	8b 45 08             	mov    0x8(%ebp),%eax
 812eb0a:	8b 40 70             	mov    0x70(%eax),%eax
 812eb0d:	85 c0                	test   %eax,%eax
 812eb0f:	75 07                	jne    812eb18 <_ZNK12advancealtar9ProcStage12getStageTypeEv+0x14>
 812eb11:	b8 00 00 00 00       	mov    $0x0,%eax
 812eb16:	eb 0c                	jmp    812eb24 <_ZNK12advancealtar9ProcStage12getStageTypeEv+0x20>
 812eb18:	8b 45 08             	mov    0x8(%ebp),%eax
 812eb1b:	8b 40 70             	mov    0x70(%eax),%eax
 812eb1e:	8b 80 04 08 00 00    	mov    0x804(%eax),%eax
 812eb24:	5d                   	pop    %ebp
 812eb25:	c3                   	ret

```

```c
// advancealtar::ProcStage::getStageType @ 0x812eb04

/* advancealtar::ProcStage::getStageType() const */

undefined4 __thiscall advancealtar::ProcStage::getStageType(ProcStage *this)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 0x70) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(this + 0x70) + 0x804);
  }
  return uVar1;
}

```

---

## incCurrentMs

```asm
// === 0812e146 advancealtar::ProcStage::incCurrentMs  [0x0812e146-0x812e16d] ===
 812e146:	55                   	push   %ebp
 812e147:	89 e5                	mov    %esp,%ebp
 812e149:	83 ec 10             	sub    $0x10,%esp
 812e14c:	a1 94 00 37 09       	mov    0x9370094,%eax
 812e151:	69 c0 e8 03 00 00    	imul   $0x3e8,%eax,%eax
 812e157:	89 45 fc             	mov    %eax,-0x4(%ebp)
 812e15a:	8b 45 08             	mov    0x8(%ebp),%eax
 812e15d:	8b 40 08             	mov    0x8(%eax),%eax
 812e160:	89 c2                	mov    %eax,%edx
 812e162:	03 55 fc             	add    -0x4(%ebp),%edx
 812e165:	8b 45 08             	mov    0x8(%ebp),%eax
 812e168:	89 50 08             	mov    %edx,0x8(%eax)
 812e16b:	c9                   	leave
 812e16c:	c3                   	ret
 812e16d:	90                   	nop

```

```c
// advancealtar::ProcStage::incCurrentMs @ 0x812e146

/* advancealtar::ProcStage::incCurrentMs() */

void __thiscall advancealtar::ProcStage::incCurrentMs(ProcStage *this)

{
  *(int *)(this + 8) = *(int *)(this + 8) + Manager::gmTimeSpeed_ * 1000;
  return;
}

```

---

## isEndAllPhase

```asm
// === 0812eb5a advancealtar::ProcStage::isEndAllPhase  [0x0812eb5a-0x812eba7] ===
 812eb5a:	55                   	push   %ebp
 812eb5b:	89 e5                	mov    %esp,%ebp
 812eb5d:	53                   	push   %ebx
 812eb5e:	83 ec 14             	sub    $0x14,%esp
 812eb61:	8b 45 08             	mov    0x8(%ebp),%eax
 812eb64:	8b 80 90 00 00 00    	mov    0x90(%eax),%eax
 812eb6a:	85 c0                	test   %eax,%eax
 812eb6c:	75 07                	jne    812eb75 <_ZNK12advancealtar9ProcStage13isEndAllPhaseEv+0x1b>
 812eb6e:	b8 00 00 00 00       	mov    $0x0,%eax
 812eb73:	eb 2c                	jmp    812eba1 <_ZNK12advancealtar9ProcStage13isEndAllPhaseEv+0x47>
 812eb75:	8b 45 08             	mov    0x8(%ebp),%eax
 812eb78:	8b 58 0c             	mov    0xc(%eax),%ebx
 812eb7b:	8b 45 08             	mov    0x8(%ebp),%eax
 812eb7e:	8b 80 90 00 00 00    	mov    0x90(%eax),%eax
 812eb84:	89 04 24             	mov    %eax,(%esp)
 812eb87:	e8 2e 6e 00 00       	call   81359ba <_ZNKSt6vectorIN12advancealtar5PhaseESaIS1_EE4sizeEv>
 812eb8c:	39 c3                	cmp    %eax,%ebx
 812eb8e:	0f 93 c0             	setae  %al
 812eb91:	84 c0                	test   %al,%al
 812eb93:	74 07                	je     812eb9c <_ZNK12advancealtar9ProcStage13isEndAllPhaseEv+0x42>
 812eb95:	b8 01 00 00 00       	mov    $0x1,%eax
 812eb9a:	eb 05                	jmp    812eba1 <_ZNK12advancealtar9ProcStage13isEndAllPhaseEv+0x47>
 812eb9c:	b8 00 00 00 00       	mov    $0x0,%eax
 812eba1:	83 c4 14             	add    $0x14,%esp
 812eba4:	5b                   	pop    %ebx
 812eba5:	5d                   	pop    %ebp
 812eba6:	c3                   	ret
 812eba7:	90                   	nop

```

```c
// advancealtar::ProcStage::isEndAllPhase @ 0x812eb5a

/* advancealtar::ProcStage::isEndAllPhase() const */

undefined4 __thiscall advancealtar::ProcStage::isEndAllPhase(ProcStage *this)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (*(int *)(this + 0x90) == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(uint *)(this + 0xc);
    uVar3 = std::vector<advancealtar::Phase,std::allocator<advancealtar::Phase>>::size
                      (*(vector<advancealtar::Phase,std::allocator<advancealtar::Phase>> **)
                        (this + 0x90));
    if (uVar1 < uVar3) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}

```

---

## isEndStage

```asm
// === 0812e2c6 advancealtar::ProcStage::isEndStage  [0x0812e2c6-0x812e3f5] ===
 812e2c6:	55                   	push   %ebp
 812e2c7:	89 e5                	mov    %esp,%ebp
 812e2c9:	83 ec 38             	sub    $0x38,%esp
 812e2cc:	8b 45 08             	mov    0x8(%ebp),%eax
 812e2cf:	89 04 24             	mov    %eax,(%esp)
 812e2d2:	e8 83 08 00 00       	call   812eb5a <_ZNK12advancealtar9ProcStage13isEndAllPhaseEv>
 812e2d7:	88 45 ee             	mov    %al,-0x12(%ebp)
 812e2da:	8b 45 08             	mov    0x8(%ebp),%eax
 812e2dd:	83 c0 18             	add    $0x18,%eax
 812e2e0:	89 04 24             	mov    %eax,(%esp)
 812e2e3:	e8 22 f2 ff ff       	call   812d50a <_ZNK12advancealtar9ProcStage18ProcSummonObjectMs11isEndSummonEv>
 812e2e8:	88 45 ef             	mov    %al,-0x11(%ebp)
 812e2eb:	8b 45 08             	mov    0x8(%ebp),%eax
 812e2ee:	83 c0 18             	add    $0x18,%eax
 812e2f1:	89 04 24             	mov    %eax,(%esp)
 812e2f4:	e8 27 65 00 00       	call   8134820 <_ZNK12advancealtar9ProcStage18ProcSummonObjectMs20getAliveMonsterCountEv>
 812e2f9:	89 45 f0             	mov    %eax,-0x10(%ebp)
 812e2fc:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 812e303:	8b 45 08             	mov    0x8(%ebp),%eax
 812e306:	8d 50 50             	lea    0x50(%eax),%edx
 812e309:	8d 45 e0             	lea    -0x20(%ebp),%eax
 812e30c:	89 54 24 04          	mov    %edx,0x4(%esp)
 812e310:	89 04 24             	mov    %eax,(%esp)
 812e313:	e8 e8 72 00 00       	call   8135600 <_ZNKSt3mapIsN12advancealtar18_MapMonsterSummaryESt4lessIsESaISt4pairIKsS1_EEE5beginEv>
 812e318:	83 ec 04             	sub    $0x4,%esp
 812e31b:	eb 68                	jmp    812e385 <_ZNK12advancealtar9ProcStage10isEndStageERNS_12StageEndType1TE+0xbf>
 812e31d:	8b 45 08             	mov    0x8(%ebp),%eax
 812e320:	8b 40 74             	mov    0x74(%eax),%eax
 812e323:	85 c0                	test   %eax,%eax
 812e325:	74 41                	je     812e368 <_ZNK12advancealtar9ProcStage10isEndStageERNS_12StageEndType1TE+0xa2>
 812e327:	8d 45 e0             	lea    -0x20(%ebp),%eax
 812e32a:	89 04 24             	mov    %eax,(%esp)
 812e32d:	e8 6c 73 00 00       	call   813569e <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKsN12advancealtar18_MapMonsterSummaryEEEptEv>
 812e332:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 812e336:	0f b7 d0             	movzwl %ax,%edx
 812e339:	8b 45 08             	mov    0x8(%ebp),%eax
 812e33c:	8b 40 74             	mov    0x74(%eax),%eax
 812e33f:	8b 80 10 01 00 00    	mov    0x110(%eax),%eax
 812e345:	39 c2                	cmp    %eax,%edx
 812e347:	0f 94 c0             	sete   %al
 812e34a:	84 c0                	test   %al,%al
 812e34c:	74 1a                	je     812e368 <_ZNK12advancealtar9ProcStage10isEndStageERNS_12StageEndType1TE+0xa2>
 812e34e:	8d 45 e0             	lea    -0x20(%ebp),%eax
 812e351:	89 04 24             	mov    %eax,(%esp)
 812e354:	e8 45 73 00 00       	call   813569e <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKsN12advancealtar18_MapMonsterSummaryEEEptEv>
 812e359:	0f b6 40 0e          	movzbl 0xe(%eax),%eax
 812e35d:	83 f0 01             	xor    $0x1,%eax
 812e360:	84 c0                	test   %al,%al
 812e362:	74 04                	je     812e368 <_ZNK12advancealtar9ProcStage10isEndStageERNS_12StageEndType1TE+0xa2>
 812e364:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 812e368:	8d 45 e8             	lea    -0x18(%ebp),%eax
 812e36b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 812e372:	00 
 812e373:	8d 55 e0             	lea    -0x20(%ebp),%edx
 812e376:	89 54 24 04          	mov    %edx,0x4(%esp)
 812e37a:	89 04 24             	mov    %eax,(%esp)
 812e37d:	e8 de 72 00 00       	call   8135660 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKsN12advancealtar18_MapMonsterSummaryEEEppEi>
 812e382:	83 ec 04             	sub    $0x4,%esp
 812e385:	8b 45 08             	mov    0x8(%ebp),%eax
 812e388:	8d 50 50             	lea    0x50(%eax),%edx
 812e38b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 812e38e:	89 54 24 04          	mov    %edx,0x4(%esp)
 812e392:	89 04 24             	mov    %eax,(%esp)
 812e395:	e8 8c 72 00 00       	call   8135626 <_ZNKSt3mapIsN12advancealtar18_MapMonsterSummaryESt4lessIsESaISt4pairIKsS1_EEE3endEv>
 812e39a:	83 ec 04             	sub    $0x4,%esp
 812e39d:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 812e3a0:	89 44 24 04          	mov    %eax,0x4(%esp)
 812e3a4:	8d 45 e0             	lea    -0x20(%ebp),%eax
 812e3a7:	89 04 24             	mov    %eax,(%esp)
 812e3aa:	e8 9d 72 00 00       	call   813564c <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKsN12advancealtar18_MapMonsterSummaryEEEneERKS5_>
 812e3af:	84 c0                	test   %al,%al
 812e3b1:	0f 85 66 ff ff ff    	jne    812e31d <_ZNK12advancealtar9ProcStage10isEndStageERNS_12StageEndType1TE+0x57>
 812e3b7:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 812e3bb:	75 10                	jne    812e3cd <_ZNK12advancealtar9ProcStage10isEndStageERNS_12StageEndType1TE+0x107>
 812e3bd:	8b 45 0c             	mov    0xc(%ebp),%eax
 812e3c0:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 812e3c6:	b8 01 00 00 00       	mov    $0x1,%eax
 812e3cb:	eb 27                	jmp    812e3f4 <_ZNK12advancealtar9ProcStage10isEndStageERNS_12StageEndType1TE+0x12e>
 812e3cd:	80 7d ee 00          	cmpb   $0x0,-0x12(%ebp)
 812e3d1:	74 1c                	je     812e3ef <_ZNK12advancealtar9ProcStage10isEndStageERNS_12StageEndType1TE+0x129>
 812e3d3:	80 7d ef 00          	cmpb   $0x0,-0x11(%ebp)
 812e3d7:	74 16                	je     812e3ef <_ZNK12advancealtar9ProcStage10isEndStageERNS_12StageEndType1TE+0x129>
 812e3d9:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 812e3dd:	75 10                	jne    812e3ef <_ZNK12advancealtar9ProcStage10isEndStageERNS_12StageEndType1TE+0x129>
 812e3df:	8b 45 0c             	mov    0xc(%ebp),%eax
 812e3e2:	c7 00 03 00 00 00    	movl   $0x3,(%eax)
 812e3e8:	b8 01 00 00 00       	mov    $0x1,%eax
 812e3ed:	eb 05                	jmp    812e3f4 <_ZNK12advancealtar9ProcStage10isEndStageERNS_12StageEndType1TE+0x12e>
 812e3ef:	b8 00 00 00 00       	mov    $0x0,%eax
 812e3f4:	c9                   	leave
 812e3f5:	c3                   	ret

```

```c
// advancealtar::ProcStage::isEndStage @ 0x812e2c6

/* advancealtar::ProcStage::isEndStage(advancealtar::StageEndType::T&) const */

undefined4 __thiscall advancealtar::ProcStage::isEndStage(ProcStage *this,T *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  map<short,advancealtar::_MapMonsterSummary,std::less<short>,std::allocator<std::pair<short_const,advancealtar::_MapMonsterSummary>>>
  local_24 [4];
  map<short,advancealtar::_MapMonsterSummary,std::less<short>,std::allocator<std::pair<short_const,advancealtar::_MapMonsterSummary>>>
  local_20 [4];
  _Rb_tree_const_iterator<std::pair<short_const,advancealtar::_MapMonsterSummary>> local_1c [6];
  char local_16;
  char local_15;
  int local_14;
  int local_10;
  
  local_16 = isEndAllPhase(this);
  local_15 = ProcSummonObjectMs::isEndSummon((ProcSummonObjectMs *)(this + 0x18));
  local_14 = ProcSummonObjectMs::getAliveMonsterCount((ProcSummonObjectMs *)(this + 0x18));
  local_10 = 0;
  std::
  map<short,advancealtar::_MapMonsterSummary,std::less<short>,std::allocator<std::pair<short_const,advancealtar::_MapMonsterSummary>>>
  ::begin(local_24);
  while( true ) {
    std::
    map<short,advancealtar::_MapMonsterSummary,std::less<short>,std::allocator<std::pair<short_const,advancealtar::_MapMonsterSummary>>>
    ::end(local_20);
    cVar1 = std::_Rb_tree_const_iterator<std::pair<short_const,advancealtar::_MapMonsterSummary>>::
            operator!=((_Rb_tree_const_iterator<std::pair<short_const,advancealtar::_MapMonsterSummary>>
                        *)local_24,(_Rb_tree_const_iterator *)local_20);
    if (cVar1 == '\0') break;
    if (*(int *)(this + 0x74) != 0) {
      iVar2 = std::_Rb_tree_const_iterator<std::pair<short_const,advancealtar::_MapMonsterSummary>>
              ::operator->((_Rb_tree_const_iterator<std::pair<short_const,advancealtar::_MapMonsterSummary>>
                            *)local_24);
      if ((uint)*(ushort *)(iVar2 + 8) == *(uint *)(*(int *)(this + 0x74) + 0x110)) {
        iVar2 = std::
                _Rb_tree_const_iterator<std::pair<short_const,advancealtar::_MapMonsterSummary>>::
                operator->((_Rb_tree_const_iterator<std::pair<short_const,advancealtar::_MapMonsterSummary>>
                            *)local_24);
        if (*(char *)(iVar2 + 0xe) != '\x01') {
          local_10 = local_10 + 1;
        }
      }
    }
    std::_Rb_tree_const_iterator<std::pair<short_const,advancealtar::_MapMonsterSummary>>::
    operator++(local_1c,(int)local_24);
  }
  if (local_10 == 0) {
    *(undefined4 *)param_1 = 0;
    uVar3 = 1;
  }
  else if (((local_16 == '\0') || (local_15 == '\0')) || (local_14 != 0)) {
    uVar3 = 0;
  }
  else {
    *(undefined4 *)param_1 = 3;
    uVar3 = 1;
  }
  return uVar3;
}

```

---

## isRewardState

```asm
// === 0812f770 advancealtar::ProcStage::isRewardState  [0x0812f770-0x812f797] ===
 812f770:	55                   	push   %ebp
 812f771:	89 e5                	mov    %esp,%ebp
 812f773:	8b 45 08             	mov    0x8(%ebp),%eax
 812f776:	8b 40 04             	mov    0x4(%eax),%eax
 812f779:	83 f8 03             	cmp    $0x3,%eax
 812f77c:	74 0b                	je     812f789 <_ZNK12advancealtar9ProcStage13isRewardStateEv+0x19>
 812f77e:	8b 45 08             	mov    0x8(%ebp),%eax
 812f781:	8b 40 04             	mov    0x4(%eax),%eax
 812f784:	83 f8 04             	cmp    $0x4,%eax
 812f787:	75 07                	jne    812f790 <_ZNK12advancealtar9ProcStage13isRewardStateEv+0x20>
 812f789:	b8 01 00 00 00       	mov    $0x1,%eax
 812f78e:	eb 05                	jmp    812f795 <_ZNK12advancealtar9ProcStage13isRewardStateEv+0x25>
 812f790:	b8 00 00 00 00       	mov    $0x0,%eax
 812f795:	5d                   	pop    %ebp
 812f796:	c3                   	ret
 812f797:	90                   	nop

```

```c
// advancealtar::ProcStage::isRewardState @ 0x812f770

/* advancealtar::ProcStage::isRewardState() const */

undefined4 __thiscall advancealtar::ProcStage::isRewardState(ProcStage *this)

{
  undefined4 uVar1;
  
  if ((*(int *)(this + 4) == 3) || (*(int *)(this + 4) == 4)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## isSurvivalModeFirstRound

```asm
// === 0812f70c advancealtar::ProcStage::isSurvivalModeFirstRound  [0x0812f70c-0x812f74b] ===
 812f70c:	55                   	push   %ebp
 812f70d:	89 e5                	mov    %esp,%ebp
 812f70f:	83 ec 04             	sub    $0x4,%esp
 812f712:	8b 45 08             	mov    0x8(%ebp),%eax
 812f715:	89 04 24             	mov    %eax,(%esp)
 812f718:	e8 e7 f3 ff ff       	call   812eb04 <_ZNK12advancealtar9ProcStage12getStageTypeEv>
 812f71d:	83 f8 01             	cmp    $0x1,%eax
 812f720:	75 12                	jne    812f734 <_ZNK12advancealtar9ProcStage24isSurvivalModeFirstRoundEv+0x28>
 812f722:	8b 45 08             	mov    0x8(%ebp),%eax
 812f725:	0f b6 40 78          	movzbl 0x78(%eax),%eax
 812f729:	84 c0                	test   %al,%al
 812f72b:	74 07                	je     812f734 <_ZNK12advancealtar9ProcStage24isSurvivalModeFirstRoundEv+0x28>
 812f72d:	b8 01 00 00 00       	mov    $0x1,%eax
 812f732:	eb 05                	jmp    812f739 <_ZNK12advancealtar9ProcStage24isSurvivalModeFirstRoundEv+0x2d>
 812f734:	b8 00 00 00 00       	mov    $0x0,%eax
 812f739:	84 c0                	test   %al,%al
 812f73b:	74 07                	je     812f744 <_ZNK12advancealtar9ProcStage24isSurvivalModeFirstRoundEv+0x38>
 812f73d:	b8 01 00 00 00       	mov    $0x1,%eax
 812f742:	eb 05                	jmp    812f749 <_ZNK12advancealtar9ProcStage24isSurvivalModeFirstRoundEv+0x3d>
 812f744:	b8 00 00 00 00       	mov    $0x0,%eax
 812f749:	c9                   	leave
 812f74a:	c3                   	ret
 812f74b:	90                   	nop

```

```c
// advancealtar::ProcStage::isSurvivalModeFirstRound @ 0x812f70c

/* advancealtar::ProcStage::isSurvivalModeFirstRound() const */

undefined1 __thiscall advancealtar::ProcStage::isSurvivalModeFirstRound(ProcStage *this)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = getStageType(this);
  if ((iVar2 == 1) && (this[0x78] != (ProcStage)0x0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## makeCurrentPhaseSummonObject

```asm
// === 0812eba8 advancealtar::ProcStage::makeCurrentPhaseSummonObject  [0x0812eba8-0x812f0f9] ===
 812eba8:	55                   	push   %ebp
 812eba9:	89 e5                	mov    %esp,%ebp
 812ebab:	56                   	push   %esi
 812ebac:	53                   	push   %ebx
 812ebad:	81 ec b0 00 00 00    	sub    $0xb0,%esp
 812ebb3:	8b 45 08             	mov    0x8(%ebp),%eax
 812ebb6:	8b 80 90 00 00 00    	mov    0x90(%eax),%eax
 812ebbc:	85 c0                	test   %eax,%eax
 812ebbe:	75 0a                	jne    812ebca <_ZN12advancealtar9ProcStage28makeCurrentPhaseSummonObjectEv+0x22>
 812ebc0:	bb 00 00 00 00       	mov    $0x0,%ebx
 812ebc5:	e9 23 05 00 00       	jmp    812f0ed <_ZN12advancealtar9ProcStage28makeCurrentPhaseSummonObjectEv+0x545>
 812ebca:	8b 45 08             	mov    0x8(%ebp),%eax
 812ebcd:	8b 80 90 00 00 00    	mov    0x90(%eax),%eax
 812ebd3:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 812ebd6:	8b 45 08             	mov    0x8(%ebp),%eax
 812ebd9:	89 04 24             	mov    %eax,(%esp)
 812ebdc:	e8 79 ff ff ff       	call   812eb5a <_ZNK12advancealtar9ProcStage13isEndAllPhaseEv>
 812ebe1:	84 c0                	test   %al,%al
 812ebe3:	74 0a                	je     812ebef <_ZN12advancealtar9ProcStage28makeCurrentPhaseSummonObjectEv+0x47>
 812ebe5:	bb 00 00 00 00       	mov    $0x0,%ebx
 812ebea:	e9 fe 04 00 00       	jmp    812f0ed <_ZN12advancealtar9ProcStage28makeCurrentPhaseSummonObjectEv+0x545>
 812ebef:	8b 45 08             	mov    0x8(%ebp),%eax
 812ebf2:	8b 40 0c             	mov    0xc(%eax),%eax
 812ebf5:	89 44 24 04          	mov    %eax,0x4(%esp)
 812ebf9:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 812ebfc:	89 04 24             	mov    %eax,(%esp)
 812ebff:	e8 d8 6d 00 00       	call   81359dc <_ZNKSt6vectorIN12advancealtar5PhaseESaIS1_EEixEj>
 812ec04:	89 45 c8             	mov    %eax,-0x38(%ebp)
 812ec07:	8b 45 08             	mov    0x8(%ebp),%eax
 812ec0a:	8b 40 0c             	mov    0xc(%eax),%eax
 812ec0d:	8d 50 01             	lea    0x1(%eax),%edx
 812ec10:	8b 45 08             	mov    0x8(%ebp),%eax
 812ec13:	89 50 0c             	mov    %edx,0xc(%eax)
 812ec16:	8b 45 08             	mov    0x8(%ebp),%eax
 812ec19:	83 c0 18             	add    $0x18,%eax
 812ec1c:	89 04 24             	mov    %eax,(%esp)
 812ec1f:	e8 fc 5b 00 00       	call   8134820 <_ZNK12advancealtar9ProcStage18ProcSummonObjectMs20getAliveMonsterCountEv>
 812ec24:	89 45 cc             	mov    %eax,-0x34(%ebp)
 812ec27:	8b 45 c8             	mov    -0x38(%ebp),%eax
 812ec2a:	8b 00                	mov    (%eax),%eax
 812ec2c:	89 45 d0             	mov    %eax,-0x30(%ebp)
 812ec2f:	8b 45 d0             	mov    -0x30(%ebp),%eax
 812ec32:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 812ec35:	8b 45 08             	mov    0x8(%ebp),%eax
 812ec38:	8b 40 10             	mov    0x10(%eax),%eax
 812ec3b:	01 45 d0             	add    %eax,-0x30(%ebp)
 812ec3e:	8b 45 c8             	mov    -0x38(%ebp),%eax
 812ec41:	83 c0 08             	add    $0x8,%eax
 812ec44:	89 45 d8             	mov    %eax,-0x28(%ebp)
 812ec47:	8d 45 88             	lea    -0x78(%ebp),%eax
 812ec4a:	8b 55 d8             	mov    -0x28(%ebp),%edx
 812ec4d:	89 54 24 04          	mov    %edx,0x4(%esp)
 812ec51:	89 04 24             	mov    %eax,(%esp)
 812ec54:	e8 9d 6d 00 00       	call   81359f6 <_ZNKSt6vectorIN12advancealtar13_ActionAssignESaIS1_EE5beginEv>
 812ec59:	83 ec 04             	sub    $0x4,%esp
 812ec5c:	8d 45 84             	lea    -0x7c(%ebp),%eax
 812ec5f:	8b 55 d8             	mov    -0x28(%ebp),%edx
 812ec62:	89 54 24 04          	mov    %edx,0x4(%esp)
 812ec66:	89 04 24             	mov    %eax,(%esp)
 812ec69:	e8 b4 6d 00 00       	call   8135a22 <_ZNKSt6vectorIN12advancealtar13_ActionAssignESaIS1_EE3endEv>
 812ec6e:	83 ec 04             	sub    $0x4,%esp
 812ec71:	8d 45 80             	lea    -0x80(%ebp),%eax
 812ec74:	8b 55 d8             	mov    -0x28(%ebp),%edx
 812ec77:	89 54 24 04          	mov    %edx,0x4(%esp)
 812ec7b:	89 04 24             	mov    %eax,(%esp)
 812ec7e:	e8 9f 6d 00 00       	call   8135a22 <_ZNKSt6vectorIN12advancealtar13_ActionAssignESaIS1_EE3endEv>
 812ec83:	83 ec 04             	sub    $0x4,%esp
 812ec86:	e9 9f 00 00 00       	jmp    812ed2a <_ZN12advancealtar9ProcStage28makeCurrentPhaseSummonObjectEv+0x182>
 812ec8b:	8d 45 88             	lea    -0x78(%ebp),%eax
 812ec8e:	89 04 24             	mov    %eax,(%esp)
 812ec91:	e8 18 6e 00 00       	call   8135aae <_ZNK9__gnu_cxx17__normal_iteratorIPKN12advancealtar13_ActionAssignESt6vectorIS2_SaIS2_EEEptEv>
 812ec96:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 812ec9a:	66 83 f8 ff          	cmp    $0xffff,%ax
 812ec9e:	75 1c                	jne    812ecbc <_ZN12advancealtar9ProcStage28makeCurrentPhaseSummonObjectEv+0x114>
 812eca0:	8d 45 88             	lea    -0x78(%ebp),%eax
 812eca3:	89 04 24             	mov    %eax,(%esp)
 812eca6:	e8 03 6e 00 00       	call   8135aae <_ZNK9__gnu_cxx17__normal_iteratorIPKN12advancealtar13_ActionAssignESt6vectorIS2_SaIS2_EEEptEv>
 812ecab:	0f b7 40 0a          	movzwl 0xa(%eax),%eax
 812ecaf:	66 83 f8 ff          	cmp    $0xffff,%ax
 812ecb3:	75 07                	jne    812ecbc <_ZN12advancealtar9ProcStage28makeCurrentPhaseSummonObjectEv+0x114>
 812ecb5:	b8 01 00 00 00       	mov    $0x1,%eax
 812ecba:	eb 05                	jmp    812ecc1 <_ZN12advancealtar9ProcStage28makeCurrentPhaseSummonObjectEv+0x119>
 812ecbc:	b8 00 00 00 00       	mov    $0x0,%eax
 812ecc1:	84 c0                	test   %al,%al
 812ecc3:	74 08                	je     812eccd <_ZN12advancealtar9ProcStage28makeCurrentPhaseSummonObjectEv+0x125>
 812ecc5:	8b 45 88             	mov    -0x78(%ebp),%eax
 812ecc8:	89 45 80             	mov    %eax,-0x80(%ebp)
 812eccb:	eb 40                	jmp    812ed0d <_ZN12advancealtar9ProcStage28makeCurrentPhaseSummonObjectEv+0x165>
 812eccd:	8d 45 88             	lea    -0x78(%ebp),%eax
 812ecd0:	89 04 24             	mov    %eax,(%esp)
 812ecd3:	e8 d6 6d 00 00       	call   8135aae <_ZNK9__gnu_cxx17__normal_iteratorIPKN12advancealtar13_ActionAssignESt6vectorIS2_SaIS2_EEEptEv>
 812ecd8:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 812ecdc:	98                   	cwtl
 812ecdd:	3b 45 cc             	cmp    -0x34(%ebp),%eax
 812ece0:	7f 1c                	jg     812ecfe <_ZN12advancealtar9ProcStage28makeCurrentPhaseSummonObjectEv+0x156>
 812ece2:	8d 45 88             	lea    -0x78(%ebp),%eax
 812ece5:	89 04 24             	mov    %eax,(%esp)
 812ece8:	e8 c1 6d 00 00       	call   8135aae <_ZNK9__gnu_cxx17__normal_iteratorIPKN12advancealtar13_ActionAssignESt6vectorIS2_SaIS2_EEEptEv>
 812eced:	0f b7 40 0a          	movzwl 0xa(%eax),%eax
 812ecf1:	98                   	cwtl
 812ecf2:	3b 45 cc             	cmp    -0x34(%ebp),%eax
 812ecf5:	7c 07                	jl     812ecfe <_ZN12advancealtar9ProcStage28makeCurrentPhaseSummonObjectEv+0x156>
 812ecf7:	b8 01 00 00 00       	mov    $0x1,%eax
 812ecfc:	eb 05                	jmp    812ed03 <_ZN12advancealtar9ProcStage28makeCurrentPhaseSummonObjectEv+0x15b>
 812ecfe:	b8 00 00 00 00       	mov    $0x0,%eax
 812ed03:	84 c0                	test   %al,%al
 812ed05:	74 06                	je     812ed0d <_ZN12advancealtar9ProcStage28makeCurrentPhaseSummonObjectEv+0x165>
 812ed07:	8b 45 88             	mov    -0x78(%ebp),%eax
 812ed0a:	89 45 84             	mov    %eax,-0x7c(%ebp)
 812ed0d:	8d 45 90             	lea    -0x70(%ebp),%eax
 812ed10:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 812ed17:	00 
 812ed18:	8d 55 88             	lea    -0x78(%ebp),%edx
 812ed1b:	89 54 24 04          	mov    %edx,0x4(%esp)
 812ed1f:	89 04 24             	mov    %eax,(%esp)
 812ed22:	e8 53 6d 00 00       	call   8135a7a <_ZN9__gnu_cxx17__normal_iteratorIPKN12advancealtar13_ActionAssignESt6vectorIS2_SaIS2_EEEppEi>
 812ed27:	83 ec 04             	sub    $0x4,%esp
 812ed2a:	8d 45 8c             	lea    -0x74(%ebp),%eax
 812ed2d:	8b 55 d8             	mov    -0x28(%ebp),%edx
 812ed30:	89 54 24 04          	mov    %edx,0x4(%esp)
 812ed34:	89 04 24             	mov    %eax,(%esp)
 812ed37:	e8 e6 6c 00 00       	call   8135a22 <_ZNKSt6vectorIN12advancealtar13_ActionAssignESaIS1_EE3endEv>
 812ed3c:	83 ec 04             	sub    $0x4,%esp
 812ed3f:	8d 45 8c             	lea    -0x74(%ebp),%eax
 812ed42:	89 44 24 04          	mov    %eax,0x4(%esp)
 812ed46:	8d 45 88             	lea    -0x78(%ebp),%eax
 812ed49:	89 04 24             	mov    %eax,(%esp)
 812ed4c:	e8 fd 6c 00 00       	call   8135a4e <_ZN9__gnu_cxxneIPKN12advancealtar13_ActionAssignESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_>
 812ed51:	84 c0                	test   %al,%al
 812ed53:	0f 85 32 ff ff ff    	jne    812ec8b <_ZN12advancealtar9ProcStage28makeCurrentPhaseSummonObjectEv+0xe3>
 812ed59:	8d 45 94             	lea    -0x6c(%ebp),%eax
 812ed5c:	8b 55 d8             	mov    -0x28(%ebp),%edx
 812ed5f:	89 54 24 04          	mov    %edx,0x4(%esp)
 812ed63:	89 04 24             	mov    %eax,(%esp)
 812ed66:	e8 b7 6c 00 00       	call   8135a22 <_ZNKSt6vectorIN12advancealtar13_ActionAssignESaIS1_EE3endEv>
 812ed6b:	83 ec 04             	sub    $0x4,%esp
 812ed6e:	8d 45 94             	lea    -0x6c(%ebp),%eax
 812ed71:	89 44 24 04          	mov    %eax,0x4(%esp)
 812ed75:	8d 45 84             	lea    -0x7c(%ebp),%eax
 812ed78:	89 04 24             	mov    %eax,(%esp)
 812ed7b:	e8 38 6d 00 00       	call   8135ab8 <_ZN9__gnu_cxxeqIPKN12advancealtar13_ActionAssignESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_>
 812ed80:	84 c0                	test   %al,%al
 812ed82:	74 06                	je     812ed8a <_ZN12advancealtar9ProcStage28makeCurrentPhaseSummonObjectEv+0x1e2>
 812ed84:	8b 45 80             	mov    -0x80(%ebp),%eax
 812ed87:	89 45 84             	mov    %eax,-0x7c(%ebp)
 812ed8a:	8d 45 98             	lea    -0x68(%ebp),%eax
 812ed8d:	8b 55 d8             	mov    -0x28(%ebp),%edx
 812ed90:	89 54 24 04          	mov    %edx,0x4(%esp)
 812ed94:	89 04 24             	mov    %eax,(%esp)
 812ed97:	e8 86 6c 00 00       	call   8135a22 <_ZNKSt6vectorIN12advancealtar13_ActionAssignESaIS1_EE3endEv>
 812ed9c:	83 ec 04             	sub    $0x4,%esp
 812ed9f:	8d 45 98             	lea    -0x68(%ebp),%eax
 812eda2:	89 44 24 04          	mov    %eax,0x4(%esp)
 812eda6:	8d 45 84             	lea    -0x7c(%ebp),%eax
 812eda9:	89 04 24             	mov    %eax,(%esp)
 812edac:	e8 07 6d 00 00       	call   8135ab8 <_ZN9__gnu_cxxeqIPKN12advancealtar13_ActionAssignESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_>
 812edb1:	84 c0                	test   %al,%al
 812edb3:	74 0a                	je     812edbf <_ZN12advancealtar9ProcStage28makeCurrentPhaseSummonObjectEv+0x217>
 812edb5:	bb 00 00 00 00       	mov    $0x0,%ebx
 812edba:	e9 2e 03 00 00       	jmp    812f0ed <_ZN12advancealtar9ProcStage28makeCurrentPhaseSummonObjectEv+0x545>
 812edbf:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 812edc5:	89 04 24             	mov    %eax,(%esp)
 812edc8:	e8 97 7e f9 ff       	call   80c6c64 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEEC1Ev>
 812edcd:	c7 45 dc ff ff ff ff 	movl   $0xffffffff,-0x24(%ebp)
 812edd4:	8d 45 84             	lea    -0x7c(%ebp),%eax
 812edd7:	89 04 24             	mov    %eax,(%esp)
 812edda:	e8 cf 6c 00 00       	call   8135aae <_ZNK9__gnu_cxx17__normal_iteratorIPKN12advancealtar13_ActionAssignESt6vectorIS2_SaIS2_EEEptEv>
 812eddf:	8b 40 04             	mov    0x4(%eax),%eax
 812ede2:	89 45 e0             	mov    %eax,-0x20(%ebp)
 812ede5:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 812ede9:	0f 84 97 02 00 00    	je     812f086 <_ZN12advancealtar9ProcStage28makeCurrentPhaseSummonObjectEv+0x4de>
 812edef:	8b 45 e0             	mov    -0x20(%ebp),%eax
 812edf2:	83 c0 04             	add    $0x4,%eax
 812edf5:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 812edf8:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 812edfe:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 812ee01:	89 54 24 04          	mov    %edx,0x4(%esp)
 812ee05:	89 04 24             	mov    %eax,(%esp)
 812ee08:	e8 d7 6c 00 00       	call   8135ae4 <_ZNKSt6vectorIN12advancealtar7_ActionESaIS1_EE5beginEv>
 812ee0d:	83 ec 04             	sub    $0x4,%esp
 812ee10:	e9 3f 02 00 00       	jmp    812f054 <_ZN12advancealtar9ProcStage28makeCurrentPhaseSummonObjectEv+0x4ac>
 812ee15:	8b 45 08             	mov    0x8(%ebp),%eax
 812ee18:	8b 40 10             	mov    0x10(%eax),%eax
 812ee1b:	89 45 e8             	mov    %eax,-0x18(%ebp)
 812ee1e:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 812ee24:	89 04 24             	mov    %eax,(%esp)
 812ee27:	e8 70 6d 00 00       	call   8135b9c <_ZNK9__gnu_cxx17__normal_iteratorIPKN12advancealtar7_ActionESt6vectorIS2_SaIS2_EEEptEv>
 812ee2c:	8b 40 04             	mov    0x4(%eax),%eax
 812ee2f:	89 45 ec             	mov    %eax,-0x14(%ebp)
 812ee32:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 812ee36:	0f 84 f8 01 00 00    	je     812f034 <_ZN12advancealtar9ProcStage28makeCurrentPhaseSummonObjectEv+0x48c>
 812ee3c:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 812ee42:	89 04 24             	mov    %eax,(%esp)
 812ee45:	e8 52 6d 00 00       	call   8135b9c <_ZNK9__gnu_cxx17__normal_iteratorIPKN12advancealtar7_ActionESt6vectorIS2_SaIS2_EEEptEv>
 812ee4a:	8b 40 08             	mov    0x8(%eax),%eax
 812ee4d:	01 45 e8             	add    %eax,-0x18(%ebp)
 812ee50:	e9 ce 01 00 00       	jmp    812f023 <_ZN12advancealtar9ProcStage28makeCurrentPhaseSummonObjectEv+0x47b>
 812ee55:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 812ee5b:	89 04 24             	mov    %eax,(%esp)
 812ee5e:	e8 39 6d 00 00       	call   8135b9c <_ZNK9__gnu_cxx17__normal_iteratorIPKN12advancealtar7_ActionESt6vectorIS2_SaIS2_EEEptEv>
 812ee63:	0f b6 40 10          	movzbl 0x10(%eax),%eax
 812ee67:	84 c0                	test   %al,%al
 812ee69:	0f 84 0a 01 00 00    	je     812ef79 <_ZN12advancealtar9ProcStage28makeCurrentPhaseSummonObjectEv+0x3d1>
 812ee6f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 812ee72:	8d 50 0c             	lea    0xc(%eax),%edx
 812ee75:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 812ee7b:	89 54 24 08          	mov    %edx,0x8(%esp)
 812ee7f:	8d 95 68 ff ff ff    	lea    -0x98(%ebp),%edx
 812ee85:	89 54 24 04          	mov    %edx,0x4(%esp)
 812ee89:	89 04 24             	mov    %eax,(%esp)
 812ee8c:	e8 5d e4 f9 ff       	call   80cd2ee <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE4findERS3_>
 812ee91:	83 ec 04             	sub    $0x4,%esp
 812ee94:	8d 45 a0             	lea    -0x60(%ebp),%eax
 812ee97:	8d 95 68 ff ff ff    	lea    -0x98(%ebp),%edx
 812ee9d:	89 54 24 04          	mov    %edx,0x4(%esp)
 812eea1:	89 04 24             	mov    %eax,(%esp)
 812eea4:	e8 71 e4 f9 ff       	call   80cd31a <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 812eea9:	83 ec 04             	sub    $0x4,%esp
 812eeac:	8d 45 a0             	lea    -0x60(%ebp),%eax
 812eeaf:	89 44 24 04          	mov    %eax,0x4(%esp)
 812eeb3:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 812eeb9:	89 04 24             	mov    %eax,(%esp)
 812eebc:	e8 2f 8a f9 ff       	call   80c78f0 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEeqERKS3_>
 812eec1:	84 c0                	test   %al,%al
 812eec3:	74 59                	je     812ef1e <_ZN12advancealtar9ProcStage28makeCurrentPhaseSummonObjectEv+0x376>
 812eec5:	c7 45 bc 01 00 00 00 	movl   $0x1,-0x44(%ebp)
 812eecc:	8b 45 ec             	mov    -0x14(%ebp),%eax
 812eecf:	8d 48 0c             	lea    0xc(%eax),%ecx
 812eed2:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 812eed5:	8d 55 bc             	lea    -0x44(%ebp),%edx
 812eed8:	89 54 24 08          	mov    %edx,0x8(%esp)
 812eedc:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 812eee0:	89 04 24             	mov    %eax,(%esp)
 812eee3:	e8 be 6c 00 00       	call   8135ba6 <_ZSt9make_pairIRKiiESt4pairINSt17__decay_and_stripIT_E6__typeENS3_IT0_E6__typeEEOS4_OS7_>
 812eee8:	83 ec 04             	sub    $0x4,%esp
 812eeeb:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 812eeee:	89 44 24 04          	mov    %eax,0x4(%esp)
 812eef2:	8d 45 ac             	lea    -0x54(%ebp),%eax
 812eef5:	89 04 24             	mov    %eax,(%esp)
 812eef8:	e8 23 7e f9 ff       	call   80c6d20 <_ZNSt4pairIKiiEC1IiiEEOS_IT_T0_E>
 812eefd:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 812ef00:	8d 55 ac             	lea    -0x54(%ebp),%edx
 812ef03:	89 54 24 08          	mov    %edx,0x8(%esp)
 812ef07:	8d 95 68 ff ff ff    	lea    -0x98(%ebp),%edx
 812ef0d:	89 54 24 04          	mov    %edx,0x4(%esp)
 812ef11:	89 04 24             	mov    %eax,(%esp)
 812ef14:	e8 37 7e f9 ff       	call   80c6d50 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE6insertERKS4_>
 812ef19:	83 ec 04             	sub    $0x4,%esp
 812ef1c:	eb 5b                	jmp    812ef79 <_ZN12advancealtar9ProcStage28makeCurrentPhaseSummonObjectEv+0x3d1>
 812ef1e:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 812ef24:	89 04 24             	mov    %eax,(%esp)
 812ef27:	e8 14 e4 f9 ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 812ef2c:	83 c0 04             	add    $0x4,%eax
 812ef2f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 812ef32:	8b 45 f4             	mov    -0xc(%ebp),%eax
 812ef35:	8b 18                	mov    (%eax),%ebx
 812ef37:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 812ef3d:	89 04 24             	mov    %eax,(%esp)
 812ef40:	e8 57 6c 00 00       	call   8135b9c <_ZNK9__gnu_cxx17__normal_iteratorIPKN12advancealtar7_ActionESt6vectorIS2_SaIS2_EEEptEv>
 812ef45:	0f b7 40 12          	movzwl 0x12(%eax),%eax
 812ef49:	98                   	cwtl
 812ef4a:	39 c3                	cmp    %eax,%ebx
 812ef4c:	0f 9d c0             	setge  %al
 812ef4f:	84 c0                	test   %al,%al
 812ef51:	74 19                	je     812ef6c <_ZN12advancealtar9ProcStage28makeCurrentPhaseSummonObjectEv+0x3c4>
 812ef53:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 812ef59:	89 04 24             	mov    %eax,(%esp)
 812ef5c:	e8 3b 6c 00 00       	call   8135b9c <_ZNK9__gnu_cxx17__normal_iteratorIPKN12advancealtar7_ActionESt6vectorIS2_SaIS2_EEEptEv>
 812ef61:	8b 40 0c             	mov    0xc(%eax),%eax
 812ef64:	01 45 e8             	add    %eax,-0x18(%ebp)
 812ef67:	e9 b7 00 00 00       	jmp    812f023 <_ZN12advancealtar9ProcStage28makeCurrentPhaseSummonObjectEv+0x47b>
 812ef6c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 812ef6f:	8b 00                	mov    (%eax),%eax
 812ef71:	8d 50 01             	lea    0x1(%eax),%edx
 812ef74:	8b 45 f4             	mov    -0xc(%ebp),%eax
 812ef77:	89 10                	mov    %edx,(%eax)
 812ef79:	c7 04 24 38 00 00 00 	movl   $0x38,(%esp)
 812ef80:	e8 cb 54 5f 00       	call   8724450 <_Znwj>
 812ef85:	89 c3                	mov    %eax,%ebx
 812ef87:	89 d8                	mov    %ebx,%eax
 812ef89:	89 04 24             	mov    %eax,(%esp)
 812ef8c:	e8 e3 56 00 00       	call   8134674 <_ZN12advancealtar15_SummonObjectMsC1Ev>
 812ef91:	89 5d f0             	mov    %ebx,-0x10(%ebp)
 812ef94:	8b 45 f0             	mov    -0x10(%ebp),%eax
 812ef97:	8b 55 e8             	mov    -0x18(%ebp),%edx
 812ef9a:	89 10                	mov    %edx,(%eax)
 812ef9c:	8b 45 08             	mov    0x8(%ebp),%eax
 812ef9f:	0f b7 40 14          	movzwl 0x14(%eax),%eax
 812efa3:	8b 55 f0             	mov    -0x10(%ebp),%edx
 812efa6:	66 89 42 04          	mov    %ax,0x4(%edx)
 812efaa:	8d 50 01             	lea    0x1(%eax),%edx
 812efad:	8b 45 08             	mov    0x8(%ebp),%eax
 812efb0:	66 89 50 14          	mov    %dx,0x14(%eax)
 812efb4:	8b 45 e0             	mov    -0x20(%ebp),%eax
 812efb7:	8b 10                	mov    (%eax),%edx
 812efb9:	8b 45 f0             	mov    -0x10(%ebp),%eax
 812efbc:	89 50 08             	mov    %edx,0x8(%eax)
 812efbf:	8b 45 f0             	mov    -0x10(%ebp),%eax
 812efc2:	c6 40 0c 00          	movb   $0x0,0xc(%eax)
 812efc6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 812efc9:	8d 50 14             	lea    0x14(%eax),%edx
 812efcc:	c7 44 24 08 24 00 00 	movl   $0x24,0x8(%esp)
 812efd3:	00 
 812efd4:	8b 45 ec             	mov    -0x14(%ebp),%eax
 812efd7:	89 44 24 04          	mov    %eax,0x4(%esp)
 812efdb:	89 14 24             	mov    %edx,(%esp)
 812efde:	e8 bd e8 f4 ff       	call   807d8a0 <memcpy@plt>
 812efe3:	8b 45 08             	mov    0x8(%ebp),%eax
 812efe6:	8d 50 18             	lea    0x18(%eax),%edx
 812efe9:	8b 45 f0             	mov    -0x10(%ebp),%eax
 812efec:	89 44 24 04          	mov    %eax,0x4(%esp)
 812eff0:	89 14 24             	mov    %edx,(%esp)
 812eff3:	e8 48 e5 ff ff       	call   812d540 <_ZN12advancealtar9ProcStage18ProcSummonObjectMs18insertSummonObjectERNS_15_SummonObjectMsE>
 812eff8:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 812effe:	89 04 24             	mov    %eax,(%esp)
 812f001:	e8 96 6b 00 00       	call   8135b9c <_ZNK9__gnu_cxx17__normal_iteratorIPKN12advancealtar7_ActionESt6vectorIS2_SaIS2_EEEptEv>
 812f006:	8b 40 0c             	mov    0xc(%eax),%eax
 812f009:	01 45 e8             	add    %eax,-0x18(%ebp)
 812f00c:	83 7d dc ff          	cmpl   $0xffffffff,-0x24(%ebp)
 812f010:	75 11                	jne    812f023 <_ZN12advancealtar9ProcStage28makeCurrentPhaseSummonObjectEv+0x47b>
 812f012:	8b 45 08             	mov    0x8(%ebp),%eax
 812f015:	83 c0 18             	add    $0x18,%eax
 812f018:	89 04 24             	mov    %eax,(%esp)
 812f01b:	e8 9a e5 ff ff       	call   812d5ba <_ZN12advancealtar9ProcStage18ProcSummonObjectMs22getLastInsertDataIndexEv>
 812f020:	89 45 dc             	mov    %eax,-0x24(%ebp)
 812f023:	8b 45 e8             	mov    -0x18(%ebp),%eax
 812f026:	3b 45 d0             	cmp    -0x30(%ebp),%eax
 812f029:	0f 9c c0             	setl   %al
 812f02c:	84 c0                	test   %al,%al
 812f02e:	0f 85 21 fe ff ff    	jne    812ee55 <_ZN12advancealtar9ProcStage28makeCurrentPhaseSummonObjectEv+0x2ad>
 812f034:	8d 45 c0             	lea    -0x40(%ebp),%eax
 812f037:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 812f03e:	00 
 812f03f:	8d 95 64 ff ff ff    	lea    -0x9c(%ebp),%edx
 812f045:	89 54 24 04          	mov    %edx,0x4(%esp)
 812f049:	89 04 24             	mov    %eax,(%esp)
 812f04c:	e8 17 6b 00 00       	call   8135b68 <_ZN9__gnu_cxx17__normal_iteratorIPKN12advancealtar7_ActionESt6vectorIS2_SaIS2_EEEppEi>
 812f051:	83 ec 04             	sub    $0x4,%esp
 812f054:	8d 45 9c             	lea    -0x64(%ebp),%eax
 812f057:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 812f05a:	89 54 24 04          	mov    %edx,0x4(%esp)
 812f05e:	89 04 24             	mov    %eax,(%esp)
 812f061:	e8 aa 6a 00 00       	call   8135b10 <_ZNKSt6vectorIN12advancealtar7_ActionESaIS1_EE3endEv>
 812f066:	83 ec 04             	sub    $0x4,%esp
 812f069:	8d 45 9c             	lea    -0x64(%ebp),%eax
 812f06c:	89 44 24 04          	mov    %eax,0x4(%esp)
 812f070:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 812f076:	89 04 24             	mov    %eax,(%esp)
 812f079:	e8 be 6a 00 00       	call   8135b3c <_ZN9__gnu_cxxneIPKN12advancealtar7_ActionESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_>
 812f07e:	84 c0                	test   %al,%al
 812f080:	0f 85 8f fd ff ff    	jne    812ee15 <_ZN12advancealtar9ProcStage28makeCurrentPhaseSummonObjectEv+0x26d>
 812f086:	8b 45 08             	mov    0x8(%ebp),%eax
 812f089:	8d 50 18             	lea    0x18(%eax),%edx
 812f08c:	8b 45 dc             	mov    -0x24(%ebp),%eax
 812f08f:	89 44 24 04          	mov    %eax,0x4(%esp)
 812f093:	89 14 24             	mov    %edx,(%esp)
 812f096:	e8 35 e5 ff ff       	call   812d5d0 <_ZN12advancealtar9ProcStage18ProcSummonObjectMs24completePushSummonObjectEi>
 812f09b:	8b 45 08             	mov    0x8(%ebp),%eax
 812f09e:	8b 40 10             	mov    0x10(%eax),%eax
 812f0a1:	89 c2                	mov    %eax,%edx
 812f0a3:	03 55 d4             	add    -0x2c(%ebp),%edx
 812f0a6:	8b 45 08             	mov    0x8(%ebp),%eax
 812f0a9:	89 50 10             	mov    %edx,0x10(%eax)
 812f0ac:	8b 45 08             	mov    0x8(%ebp),%eax
 812f0af:	83 c0 18             	add    $0x18,%eax
 812f0b2:	89 04 24             	mov    %eax,(%esp)
 812f0b5:	e8 4a e7 ff ff       	call   812d804 <_ZNK12advancealtar9ProcStage18ProcSummonObjectMs8debugLogEv>
 812f0ba:	bb 01 00 00 00       	mov    $0x1,%ebx
 812f0bf:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 812f0c5:	89 04 24             	mov    %eax,(%esp)
 812f0c8:	e8 f9 79 f9 ff       	call   80c6ac6 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 812f0cd:	eb 1e                	jmp    812f0ed <_ZN12advancealtar9ProcStage28makeCurrentPhaseSummonObjectEv+0x545>
 812f0cf:	89 d3                	mov    %edx,%ebx
 812f0d1:	89 c6                	mov    %eax,%esi
 812f0d3:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 812f0d9:	89 04 24             	mov    %eax,(%esp)
 812f0dc:	e8 e5 79 f9 ff       	call   80c6ac6 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 812f0e1:	89 f0                	mov    %esi,%eax
 812f0e3:	89 da                	mov    %ebx,%edx
 812f0e5:	89 04 24             	mov    %eax,(%esp)
 812f0e8:	e8 63 46 9b 00       	call   8ae3750 <_Unwind_Resume>
 812f0ed:	89 d8                	mov    %ebx,%eax
 812f0ef:	8d 65 f8             	lea    -0x8(%ebp),%esp
 812f0f2:	83 c4 00             	add    $0x0,%esp
 812f0f5:	5b                   	pop    %ebx
 812f0f6:	5e                   	pop    %esi
 812f0f7:	5d                   	pop    %ebp
 812f0f8:	c3                   	ret
 812f0f9:	90                   	nop

```

```c
// advancealtar::ProcStage::makeCurrentPhaseSummonObject @ 0x812eba8

/* advancealtar::ProcStage::makeCurrentPhaseSummonObject() */

undefined4 __thiscall advancealtar::ProcStage::makeCurrentPhaseSummonObject(ProcStage *this)

{
  short sVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  _SummonObjectMs *this_00;
  undefined4 uVar6;
  _Rb_tree_iterator<std::pair<int_const,int>> local_a4 [4];
  __normal_iterator<advancealtar::_Action_const*,std::vector<advancealtar::_Action,std::allocator<advancealtar::_Action>>>
  local_a0 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_9c [24];
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  __normal_iterator local_78 [4];
  __normal_iterator<advancealtar::_ActionAssign_const*,std::vector<advancealtar::_ActionAssign,std::allocator<advancealtar::_ActionAssign>>>
  local_74 [4];
  __normal_iterator local_70 [4];
  __normal_iterator local_6c [4];
  __normal_iterator local_68 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_64 [4];
  pair local_60 [8];
  pair<int_const,int> local_58 [8];
  int local_50 [2];
  undefined4 local_48;
  __normal_iterator<advancealtar::_Action_const*,std::vector<advancealtar::_Action,std::allocator<advancealtar::_Action>>>
  local_44 [4];
  vector<advancealtar::Phase,std::allocator<advancealtar::Phase>> *local_40;
  int *local_3c;
  int local_38;
  int local_34;
  int local_30;
  int *local_2c;
  int local_28;
  undefined4 *local_24;
  undefined4 *local_20;
  int local_1c;
  void *local_18;
  _SummonObjectMs *local_14;
  int *local_10;
  
  if (*(int *)(this + 0x90) == 0) {
    uVar6 = 0;
  }
  else {
    local_40 = *(vector<advancealtar::Phase,std::allocator<advancealtar::Phase>> **)(this + 0x90);
    cVar2 = isEndAllPhase(this);
    if (cVar2 == '\0') {
      local_3c = (int *)std::vector<advancealtar::Phase,std::allocator<advancealtar::Phase>>::
                        operator[](local_40,*(uint *)(this + 0xc));
      *(int *)(this + 0xc) = *(int *)(this + 0xc) + 1;
      local_38 = ProcSummonObjectMs::getAliveMonsterCount((ProcSummonObjectMs *)(this + 0x18));
      local_30 = *local_3c;
      local_34 = local_30 + *(int *)(this + 0x10);
      local_2c = local_3c + 2;
      std::vector<advancealtar::_ActionAssign,std::allocator<advancealtar::_ActionAssign>>::begin();
      std::vector<advancealtar::_ActionAssign,std::allocator<advancealtar::_ActionAssign>>::end();
      std::vector<advancealtar::_ActionAssign,std::allocator<advancealtar::_ActionAssign>>::end();
      while( true ) {
        std::vector<advancealtar::_ActionAssign,std::allocator<advancealtar::_ActionAssign>>::end();
        bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_7c,local_78);
        if (!bVar3) break;
        iVar4 = __gnu_cxx::
                __normal_iterator<advancealtar::_ActionAssign_const*,std::vector<advancealtar::_ActionAssign,std::allocator<advancealtar::_ActionAssign>>>
                ::operator->((__normal_iterator<advancealtar::_ActionAssign_const*,std::vector<advancealtar::_ActionAssign,std::allocator<advancealtar::_ActionAssign>>>
                              *)&local_7c);
        if (*(short *)(iVar4 + 8) == -1) {
          iVar4 = __gnu_cxx::
                  __normal_iterator<advancealtar::_ActionAssign_const*,std::vector<advancealtar::_ActionAssign,std::allocator<advancealtar::_ActionAssign>>>
                  ::operator->((__normal_iterator<advancealtar::_ActionAssign_const*,std::vector<advancealtar::_ActionAssign,std::allocator<advancealtar::_ActionAssign>>>
                                *)&local_7c);
          if (*(short *)(iVar4 + 10) != -1) goto LAB_0812ecbc;
          bVar3 = true;
        }
        else {
LAB_0812ecbc:
          bVar3 = false;
        }
        if (bVar3) {
          local_84 = local_7c;
        }
        else {
          iVar4 = __gnu_cxx::
                  __normal_iterator<advancealtar::_ActionAssign_const*,std::vector<advancealtar::_ActionAssign,std::allocator<advancealtar::_ActionAssign>>>
                  ::operator->((__normal_iterator<advancealtar::_ActionAssign_const*,std::vector<advancealtar::_ActionAssign,std::allocator<advancealtar::_ActionAssign>>>
                                *)&local_7c);
          if (local_38 < *(short *)(iVar4 + 8)) {
LAB_0812ecfe:
            bVar3 = false;
          }
          else {
            iVar4 = __gnu_cxx::
                    __normal_iterator<advancealtar::_ActionAssign_const*,std::vector<advancealtar::_ActionAssign,std::allocator<advancealtar::_ActionAssign>>>
                    ::operator->((__normal_iterator<advancealtar::_ActionAssign_const*,std::vector<advancealtar::_ActionAssign,std::allocator<advancealtar::_ActionAssign>>>
                                  *)&local_7c);
            if (*(short *)(iVar4 + 10) < local_38) goto LAB_0812ecfe;
            bVar3 = true;
          }
          if (bVar3) {
            local_80 = local_7c;
          }
        }
        __gnu_cxx::
        __normal_iterator<advancealtar::_ActionAssign_const*,std::vector<advancealtar::_ActionAssign,std::allocator<advancealtar::_ActionAssign>>>
        ::operator++(local_74,(int)&local_7c);
      }
      std::vector<advancealtar::_ActionAssign,std::allocator<advancealtar::_ActionAssign>>::end();
      bVar3 = __gnu_cxx::operator==((__normal_iterator *)&local_80,local_70);
      if (bVar3) {
        local_80 = local_84;
      }
      std::vector<advancealtar::_ActionAssign,std::allocator<advancealtar::_ActionAssign>>::end();
      bVar3 = __gnu_cxx::operator==((__normal_iterator *)&local_80,local_6c);
      if (bVar3) {
        uVar6 = 0;
      }
      else {
        std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::map(local_9c);
        local_28 = -1;
        iVar4 = __gnu_cxx::
                __normal_iterator<advancealtar::_ActionAssign_const*,std::vector<advancealtar::_ActionAssign,std::allocator<advancealtar::_ActionAssign>>>
                ::operator->((__normal_iterator<advancealtar::_ActionAssign_const*,std::vector<advancealtar::_ActionAssign,std::allocator<advancealtar::_ActionAssign>>>
                              *)&local_80);
        local_24 = *(undefined4 **)(iVar4 + 4);
        if (local_24 != (undefined4 *)0x0) {
          local_20 = local_24 + 1;
                    /* try { // try from 0812ee08 to 0812f0b9 has its CatchHandler @ 0812f0cf */
          std::vector<advancealtar::_Action,std::allocator<advancealtar::_Action>>::begin();
          while( true ) {
            std::vector<advancealtar::_Action,std::allocator<advancealtar::_Action>>::end();
            bVar3 = __gnu_cxx::operator!=(local_a0,local_68);
            if (!bVar3) break;
            local_1c = *(int *)(this + 0x10);
            iVar4 = __gnu_cxx::
                    __normal_iterator<advancealtar::_Action_const*,std::vector<advancealtar::_Action,std::allocator<advancealtar::_Action>>>
                    ::operator->(local_a0);
            local_18 = *(void **)(iVar4 + 4);
            if (local_18 != (void *)0x0) {
              iVar4 = __gnu_cxx::
                      __normal_iterator<advancealtar::_Action_const*,std::vector<advancealtar::_Action,std::allocator<advancealtar::_Action>>>
                      ::operator->(local_a0);
              local_1c = local_1c + *(int *)(iVar4 + 8);
              while (local_1c < local_34) {
                iVar4 = __gnu_cxx::
                        __normal_iterator<advancealtar::_Action_const*,std::vector<advancealtar::_Action,std::allocator<advancealtar::_Action>>>
                        ::operator->(local_a0);
                if (*(char *)(iVar4 + 0x10) == '\0') {
LAB_0812ef79:
                  this_00 = operator_new(0x38);
                  _SummonObjectMs::_SummonObjectMs(this_00);
                  *(int *)this_00 = local_1c;
                  sVar1 = *(short *)(this + 0x14);
                  *(short *)(this_00 + 4) = sVar1;
                  *(short *)(this + 0x14) = sVar1 + 1;
                  *(undefined4 *)(this_00 + 8) = *local_24;
                  this_00[0xc] = (_SummonObjectMs)0x0;
                  local_14 = this_00;
                  memcpy(this_00 + 0x14,local_18,0x24);
                  ProcSummonObjectMs::insertSummonObject
                            ((ProcSummonObjectMs *)(this + 0x18),local_14);
                  iVar4 = __gnu_cxx::
                          __normal_iterator<advancealtar::_Action_const*,std::vector<advancealtar::_Action,std::allocator<advancealtar::_Action>>>
                          ::operator->(local_a0);
                  local_1c = local_1c + *(int *)(iVar4 + 0xc);
                  if (local_28 == -1) {
                    local_28 = ProcSummonObjectMs::getLastInsertDataIndex
                                         ((ProcSummonObjectMs *)(this + 0x18));
                  }
                }
                else {
                  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find
                            ((int *)local_a4);
                  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end
                            (local_64);
                  cVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator==
                                    (local_a4,(_Rb_tree_iterator *)local_64);
                  if (cVar2 != '\0') {
                    local_48 = 1;
                    std::make_pair<int_const&,int>(local_50,(int *)((int)local_18 + 0xc));
                    std::pair<int_const,int>::pair<int,int>(local_58,(pair *)local_50);
                    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                    insert(local_60);
                    goto LAB_0812ef79;
                  }
                  iVar4 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_a4);
                  local_10 = (int *)(iVar4 + 4);
                  iVar4 = *local_10;
                  iVar5 = __gnu_cxx::
                          __normal_iterator<advancealtar::_Action_const*,std::vector<advancealtar::_Action,std::allocator<advancealtar::_Action>>>
                          ::operator->(local_a0);
                  if (iVar4 < *(short *)(iVar5 + 0x12)) {
                    *local_10 = *local_10 + 1;
                    goto LAB_0812ef79;
                  }
                  iVar4 = __gnu_cxx::
                          __normal_iterator<advancealtar::_Action_const*,std::vector<advancealtar::_Action,std::allocator<advancealtar::_Action>>>
                          ::operator->(local_a0);
                  local_1c = local_1c + *(int *)(iVar4 + 0xc);
                }
              }
            }
            __gnu_cxx::
            __normal_iterator<advancealtar::_Action_const*,std::vector<advancealtar::_Action,std::allocator<advancealtar::_Action>>>
            ::operator++(local_44,(int)local_a0);
          }
        }
        ProcSummonObjectMs::completePushSummonObject((ProcSummonObjectMs *)(this + 0x18),local_28);
        *(int *)(this + 0x10) = *(int *)(this + 0x10) + local_30;
        ProcSummonObjectMs::debugLog();
        uVar6 = 1;
        std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map(local_9c);
      }
    }
    else {
      uVar6 = 0;
    }
  }
  return uVar6;
}

```

---

## pause

```asm
// === 0812eaa6 advancealtar::ProcStage::pause  [0x0812eaa6-0x812eb03] ===
 812eaa6:	55                   	push   %ebp
 812eaa7:	89 e5                	mov    %esp,%ebp
 812eaa9:	83 ec 04             	sub    $0x4,%esp
 812eaac:	8b 45 0c             	mov    0xc(%ebp),%eax
 812eaaf:	88 45 fc             	mov    %al,-0x4(%ebp)
 812eab2:	80 7d fc 00          	cmpb   $0x0,-0x4(%ebp)
 812eab6:	74 1e                	je     812ead6 <_ZN12advancealtar9ProcStage5pauseEb+0x30>
 812eab8:	8b 45 08             	mov    0x8(%ebp),%eax
 812eabb:	8b 40 04             	mov    0x4(%eax),%eax
 812eabe:	83 f8 03             	cmp    $0x3,%eax
 812eac1:	74 07                	je     812eaca <_ZN12advancealtar9ProcStage5pauseEb+0x24>
 812eac3:	b8 00 00 00 00       	mov    $0x0,%eax
 812eac8:	eb 38                	jmp    812eb02 <_ZN12advancealtar9ProcStage5pauseEb+0x5c>
 812eaca:	8b 45 08             	mov    0x8(%ebp),%eax
 812eacd:	c7 40 04 02 00 00 00 	movl   $0x2,0x4(%eax)
 812ead4:	eb 27                	jmp    812eafd <_ZN12advancealtar9ProcStage5pauseEb+0x57>
 812ead6:	8b 45 08             	mov    0x8(%ebp),%eax
 812ead9:	8b 40 04             	mov    0x4(%eax),%eax
 812eadc:	83 f8 02             	cmp    $0x2,%eax
 812eadf:	74 12                	je     812eaf3 <_ZN12advancealtar9ProcStage5pauseEb+0x4d>
 812eae1:	8b 45 08             	mov    0x8(%ebp),%eax
 812eae4:	8b 40 04             	mov    0x4(%eax),%eax
 812eae7:	83 f8 01             	cmp    $0x1,%eax
 812eaea:	74 07                	je     812eaf3 <_ZN12advancealtar9ProcStage5pauseEb+0x4d>
 812eaec:	b8 00 00 00 00       	mov    $0x0,%eax
 812eaf1:	eb 0f                	jmp    812eb02 <_ZN12advancealtar9ProcStage5pauseEb+0x5c>
 812eaf3:	8b 45 08             	mov    0x8(%ebp),%eax
 812eaf6:	c7 40 04 03 00 00 00 	movl   $0x3,0x4(%eax)
 812eafd:	b8 01 00 00 00       	mov    $0x1,%eax
 812eb02:	c9                   	leave
 812eb03:	c3                   	ret

```

```c
// advancealtar::ProcStage::pause @ 0x812eaa6

/* advancealtar::ProcStage::pause(bool) */

undefined4 __thiscall advancealtar::ProcStage::pause(ProcStage *this,bool param_1)

{
  if (param_1) {
    if (*(int *)(this + 4) != 3) {
      return 0;
    }
    *(undefined4 *)(this + 4) = 2;
  }
  else {
    if ((*(int *)(this + 4) != 2) && (*(int *)(this + 4) != 1)) {
      return 0;
    }
    *(undefined4 *)(this + 4) = 3;
  }
  return 1;
}

```

---

## procTimeLine

```asm
// === 0812e0d6 advancealtar::ProcStage::procTimeLine  [0x0812e0d6-0x812e145] ===
 812e0d6:	55                   	push   %ebp
 812e0d7:	89 e5                	mov    %esp,%ebp
 812e0d9:	83 ec 28             	sub    $0x28,%esp
 812e0dc:	8b 45 08             	mov    0x8(%ebp),%eax
 812e0df:	8b 40 04             	mov    0x4(%eax),%eax
 812e0e2:	83 f8 03             	cmp    $0x3,%eax
 812e0e5:	75 5b                	jne    812e142 <_ZN12advancealtar9ProcStage12procTimeLineEv+0x6c>
 812e0e7:	8b 45 08             	mov    0x8(%ebp),%eax
 812e0ea:	83 c0 18             	add    $0x18,%eax
 812e0ed:	89 04 24             	mov    %eax,(%esp)
 812e0f0:	e8 15 f4 ff ff       	call   812d50a <_ZNK12advancealtar9ProcStage18ProcSummonObjectMs11isEndSummonEv>
 812e0f5:	84 c0                	test   %al,%al
 812e0f7:	74 23                	je     812e11c <_ZN12advancealtar9ProcStage12procTimeLineEv+0x46>
 812e0f9:	8b 45 08             	mov    0x8(%ebp),%eax
 812e0fc:	89 04 24             	mov    %eax,(%esp)
 812e0ff:	e8 a4 0a 00 00       	call   812eba8 <_ZN12advancealtar9ProcStage28makeCurrentPhaseSummonObjectEv>
 812e104:	88 45 f7             	mov    %al,-0x9(%ebp)
 812e107:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 812e10b:	83 f0 01             	xor    $0x1,%eax
 812e10e:	84 c0                	test   %al,%al
 812e110:	74 0a                	je     812e11c <_ZN12advancealtar9ProcStage12procTimeLineEv+0x46>
 812e112:	8b 45 08             	mov    0x8(%ebp),%eax
 812e115:	c7 40 04 04 00 00 00 	movl   $0x4,0x4(%eax)
 812e11c:	8b 45 08             	mov    0x8(%ebp),%eax
 812e11f:	89 04 24             	mov    %eax,(%esp)
 812e122:	e8 1f 00 00 00       	call   812e146 <_ZN12advancealtar9ProcStage12incCurrentMsEv>
 812e127:	8b 45 08             	mov    0x8(%ebp),%eax
 812e12a:	8b 40 04             	mov    0x4(%eax),%eax
 812e12d:	83 f8 03             	cmp    $0x3,%eax
 812e130:	75 11                	jne    812e143 <_ZN12advancealtar9ProcStage12procTimeLineEv+0x6d>
 812e132:	8b 45 08             	mov    0x8(%ebp),%eax
 812e135:	83 c0 18             	add    $0x18,%eax
 812e138:	89 04 24             	mov    %eax,(%esp)
 812e13b:	e8 18 f5 ff ff       	call   812d658 <_ZN12advancealtar9ProcStage18ProcSummonObjectMs25summonObjectAndSendPacketEv>
 812e140:	eb 01                	jmp    812e143 <_ZN12advancealtar9ProcStage12procTimeLineEv+0x6d>
 812e142:	90                   	nop
 812e143:	c9                   	leave
 812e144:	c3                   	ret
 812e145:	90                   	nop

```

```c
// advancealtar::ProcStage::procTimeLine @ 0x812e0d6

/* advancealtar::ProcStage::procTimeLine() */

void __thiscall advancealtar::ProcStage::procTimeLine(ProcStage *this)

{
  char cVar1;
  
  if (*(int *)(this + 4) == 3) {
    cVar1 = ProcSummonObjectMs::isEndSummon((ProcSummonObjectMs *)(this + 0x18));
    if (cVar1 != '\0') {
      cVar1 = makeCurrentPhaseSummonObject(this);
      if (cVar1 != '\x01') {
        *(undefined4 *)(this + 4) = 4;
      }
    }
    incCurrentMs(this);
    if (*(int *)(this + 4) == 3) {
      ProcSummonObjectMs::summonObjectAndSendPacket((ProcSummonObjectMs *)(this + 0x18));
    }
  }
  return;
}

```

---

## reset

```asm
// === 0812dde0 advancealtar::ProcStage::reset  [0x0812dde0-0x812de6f] ===
 812dde0:	55                   	push   %ebp
 812dde1:	89 e5                	mov    %esp,%ebp
 812dde3:	83 ec 18             	sub    $0x18,%esp
 812dde6:	8b 45 08             	mov    0x8(%ebp),%eax
 812dde9:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 812ddf0:	8b 45 08             	mov    0x8(%ebp),%eax
 812ddf3:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 812ddfa:	8b 45 08             	mov    0x8(%ebp),%eax
 812ddfd:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
 812de04:	8b 45 08             	mov    0x8(%ebp),%eax
 812de07:	c7 40 68 ff ff ff ff 	movl   $0xffffffff,0x68(%eax)
 812de0e:	8b 45 08             	mov    0x8(%ebp),%eax
 812de11:	c7 40 74 00 00 00 00 	movl   $0x0,0x74(%eax)
 812de18:	8b 45 08             	mov    0x8(%ebp),%eax
 812de1b:	83 c0 18             	add    $0x18,%eax
 812de1e:	89 04 24             	mov    %eax,(%esp)
 812de21:	e8 16 f6 ff ff       	call   812d43c <_ZN12advancealtar9ProcStage18ProcSummonObjectMs5resetEv>
 812de26:	8b 45 0c             	mov    0xc(%ebp),%eax
 812de29:	83 f8 01             	cmp    $0x1,%eax
 812de2c:	74 40                	je     812de6e <_ZN12advancealtar9ProcStage5resetENS_9StageType1TE+0x8e>
 812de2e:	8b 45 08             	mov    0x8(%ebp),%eax
 812de31:	c7 40 04 07 00 00 00 	movl   $0x7,0x4(%eax)
 812de38:	8b 45 08             	mov    0x8(%ebp),%eax
 812de3b:	66 c7 40 14 00 00    	movw   $0x0,0x14(%eax)
 812de41:	8b 45 08             	mov    0x8(%ebp),%eax
 812de44:	83 c0 50             	add    $0x50,%eax
 812de47:	89 04 24             	mov    %eax,(%esp)
 812de4a:	e8 79 76 00 00       	call   81354c8 <_ZNSt3mapIsN12advancealtar18_MapMonsterSummaryESt4lessIsESaISt4pairIKsS1_EEE5clearEv>
 812de4f:	8b 45 08             	mov    0x8(%ebp),%eax
 812de52:	c6 40 78 01          	movb   $0x1,0x78(%eax)
 812de56:	8b 45 08             	mov    0x8(%ebp),%eax
 812de59:	c7 40 7c 00 00 00 00 	movl   $0x0,0x7c(%eax)
 812de60:	8b 45 08             	mov    0x8(%ebp),%eax
 812de63:	83 e8 80             	sub    $0xffffff80,%eax
 812de66:	89 04 24             	mov    %eax,(%esp)
 812de69:	e8 00 8d f6 ff       	call   8096b6e <_ZNSt6vectorIiSaIiEE5clearEv>
 812de6e:	c9                   	leave
 812de6f:	c3                   	ret

```

```c
// advancealtar::ProcStage::reset @ 0x812dde0

/* advancealtar::ProcStage::reset(advancealtar::StageType::T) */

void __thiscall advancealtar::ProcStage::reset(ProcStage *this,int param_2)

{
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x68) = 0xffffffff;
  *(undefined4 *)(this + 0x74) = 0;
  ProcSummonObjectMs::reset((ProcSummonObjectMs *)(this + 0x18));
  if (param_2 != 1) {
    *(undefined4 *)(this + 4) = 7;
    *(undefined2 *)(this + 0x14) = 0;
    std::
    map<short,advancealtar::_MapMonsterSummary,std::less<short>,std::allocator<std::pair<short_const,advancealtar::_MapMonsterSummary>>>
    ::clear((map<short,advancealtar::_MapMonsterSummary,std::less<short>,std::allocator<std::pair<short_const,advancealtar::_MapMonsterSummary>>>
             *)(this + 0x50));
    this[0x78] = (ProcStage)0x1;
    *(undefined4 *)(this + 0x7c) = 0;
    std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x80));
  }
  return;
}

```

---

## resetAll

```asm
// === 0812dd9a advancealtar::ProcStage::resetAll  [0x0812dd9a-0x812dddf] ===
 812dd9a:	55                   	push   %ebp
 812dd9b:	89 e5                	mov    %esp,%ebp
 812dd9d:	83 ec 18             	sub    $0x18,%esp
 812dda0:	8b 45 08             	mov    0x8(%ebp),%eax
 812dda3:	c7 40 70 00 00 00 00 	movl   $0x0,0x70(%eax)
 812ddaa:	8b 45 08             	mov    0x8(%ebp),%eax
 812ddad:	c7 80 8c 00 00 00 00 	movl   $0x0,0x8c(%eax)
 812ddb4:	00 00 00 
 812ddb7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 812ddbe:	00 
 812ddbf:	8b 45 08             	mov    0x8(%ebp),%eax
 812ddc2:	89 04 24             	mov    %eax,(%esp)
 812ddc5:	e8 16 00 00 00       	call   812dde0 <_ZN12advancealtar9ProcStage5resetENS_9StageType1TE>
 812ddca:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 812ddd1:	00 
 812ddd2:	8b 45 08             	mov    0x8(%ebp),%eax
 812ddd5:	89 04 24             	mov    %eax,(%esp)
 812ddd8:	e8 03 00 00 00       	call   812dde0 <_ZN12advancealtar9ProcStage5resetENS_9StageType1TE>
 812dddd:	c9                   	leave
 812ddde:	c3                   	ret
 812dddf:	90                   	nop

```

```c
// advancealtar::ProcStage::resetAll @ 0x812dd9a

/* advancealtar::ProcStage::resetAll() */

void __thiscall advancealtar::ProcStage::resetAll(ProcStage *this)

{
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x8c) = 0;
  reset(this,0);
  reset(this,1);
  return;
}

```

---

## rewardClearStage

```asm
// === 0812f0fa advancealtar::ProcStage::rewardClearStage  [0x0812f0fa-0x812f3ad] ===
 812f0fa:	55                   	push   %ebp
 812f0fb:	89 e5                	mov    %esp,%ebp
 812f0fd:	56                   	push   %esi
 812f0fe:	53                   	push   %ebx
 812f0ff:	83 ec 40             	sub    $0x40,%esp
 812f102:	8b 45 08             	mov    0x8(%ebp),%eax
 812f105:	8b 40 70             	mov    0x70(%eax),%eax
 812f108:	85 c0                	test   %eax,%eax
 812f10a:	0f 84 92 02 00 00    	je     812f3a2 <_ZN12advancealtar9ProcStage16rewardClearStageERSt6vectorINS_11_RewardItemESaIS2_EE+0x2a8>
 812f110:	8b 45 0c             	mov    0xc(%ebp),%eax
 812f113:	89 04 24             	mov    %eax,(%esp)
 812f116:	e8 37 5b 00 00       	call   8134c52 <_ZNSt6vectorIN12advancealtar11_RewardItemESaIS1_EE5clearEv>
 812f11b:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 812f122:	8b 45 08             	mov    0x8(%ebp),%eax
 812f125:	89 04 24             	mov    %eax,(%esp)
 812f128:	e8 d7 f9 ff ff       	call   812eb04 <_ZNK12advancealtar9ProcStage12getStageTypeEv>
 812f12d:	83 f8 01             	cmp    $0x1,%eax
 812f130:	74 27                	je     812f159 <_ZN12advancealtar9ProcStage16rewardClearStageERSt6vectorINS_11_RewardItemESaIS2_EE+0x5f>
 812f132:	8b 45 08             	mov    0x8(%ebp),%eax
 812f135:	8b 48 70             	mov    0x70(%eax),%ecx
 812f138:	8b 45 08             	mov    0x8(%ebp),%eax
 812f13b:	8b 40 68             	mov    0x68(%eax),%eax
 812f13e:	89 c2                	mov    %eax,%edx
 812f140:	89 d0                	mov    %edx,%eax
 812f142:	01 c0                	add    %eax,%eax
 812f144:	01 d0                	add    %edx,%eax
 812f146:	c1 e0 02             	shl    $0x2,%eax
 812f149:	05 20 08 00 00       	add    $0x820,%eax
 812f14e:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 812f151:	83 c0 0c             	add    $0xc,%eax
 812f154:	89 45 f0             	mov    %eax,-0x10(%ebp)
 812f157:	eb 21                	jmp    812f17a <_ZN12advancealtar9ProcStage16rewardClearStageERSt6vectorINS_11_RewardItemESaIS2_EE+0x80>
 812f159:	8b 45 08             	mov    0x8(%ebp),%eax
 812f15c:	8b 40 7c             	mov    0x7c(%eax),%eax
 812f15f:	8b 55 08             	mov    0x8(%ebp),%edx
 812f162:	8b 52 70             	mov    0x70(%edx),%edx
 812f165:	81 c2 50 08 00 00    	add    $0x850,%edx
 812f16b:	89 44 24 04          	mov    %eax,0x4(%esp)
 812f16f:	89 14 24             	mov    %edx,(%esp)
 812f172:	e8 47 bd 76 00       	call   889aebe <_ZNK12advancealtar18SurvivalRewardData18getRoundRewardDataEi>
 812f177:	89 45 f0             	mov    %eax,-0x10(%ebp)
 812f17a:	8d 45 dc             	lea    -0x24(%ebp),%eax
 812f17d:	89 04 24             	mov    %eax,(%esp)
 812f180:	e8 5b 5a 00 00       	call   8134be0 <_ZNSt6vectorIN12advancealtar11_RewardItemESaIS1_EEC1Ev>
 812f185:	8d 45 d0             	lea    -0x30(%ebp),%eax
 812f188:	89 04 24             	mov    %eax,(%esp)
 812f18b:	e8 50 5a 00 00       	call   8134be0 <_ZNSt6vectorIN12advancealtar11_RewardItemESaIS1_EEC1Ev>
 812f190:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 812f194:	0f 84 28 01 00 00    	je     812f2c2 <_ZN12advancealtar9ProcStage16rewardClearStageERSt6vectorINS_11_RewardItemESaIS2_EE+0x1c8>
 812f19a:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 812f1a1:	8d 45 cc             	lea    -0x34(%ebp),%eax
 812f1a4:	8b 55 f0             	mov    -0x10(%ebp),%edx
 812f1a7:	89 54 24 04          	mov    %edx,0x4(%esp)
 812f1ab:	89 04 24             	mov    %eax,(%esp)
 812f1ae:	e8 a1 65 00 00       	call   8135754 <_ZNKSt6vectorIN12advancealtar11_RewardItemESaIS1_EE5beginEv>
 812f1b3:	83 ec 04             	sub    $0x4,%esp
 812f1b6:	e9 d8 00 00 00       	jmp    812f293 <_ZN12advancealtar9ProcStage16rewardClearStageERSt6vectorINS_11_RewardItemESaIS2_EE+0x199>
 812f1bb:	e8 e6 dd ff ff       	call   812cfa6 <_ZN12advancealtar9isOnEventEv>
 812f1c0:	84 c0                	test   %al,%al
 812f1c2:	74 68                	je     812f22c <_ZN12advancealtar9ProcStage16rewardClearStageERSt6vectorINS_11_RewardItemESaIS2_EE+0x132>
 812f1c4:	8d 45 cc             	lea    -0x34(%ebp),%eax
 812f1c7:	89 04 24             	mov    %eax,(%esp)
 812f1ca:	e8 3d 66 00 00       	call   813580c <_ZNK9__gnu_cxx17__normal_iteratorIPKN12advancealtar11_RewardItemESt6vectorIS2_SaIS2_EEEdeEv>
 812f1cf:	89 44 24 04          	mov    %eax,0x4(%esp)
 812f1d3:	8b 45 0c             	mov    0xc(%ebp),%eax
 812f1d6:	89 04 24             	mov    %eax,(%esp)
 812f1d9:	e8 0a 6a 00 00       	call   8135be8 <_ZNSt6vectorIN12advancealtar11_RewardItemESaIS1_EE9push_backERKS1_>
 812f1de:	8d 45 cc             	lea    -0x34(%ebp),%eax
 812f1e1:	89 04 24             	mov    %eax,(%esp)
 812f1e4:	e8 73 6a 00 00       	call   8135c5c <_ZNK9__gnu_cxx17__normal_iteratorIPKN12advancealtar11_RewardItemESt6vectorIS2_SaIS2_EEEptEv>
 812f1e9:	8b 00                	mov    (%eax),%eax
 812f1eb:	85 c0                	test   %eax,%eax
 812f1ed:	0f 94 c0             	sete   %al
 812f1f0:	84 c0                	test   %al,%al
 812f1f2:	74 1c                	je     812f210 <_ZN12advancealtar9ProcStage16rewardClearStageERSt6vectorINS_11_RewardItemESaIS2_EE+0x116>
 812f1f4:	8d 45 cc             	lea    -0x34(%ebp),%eax
 812f1f7:	89 04 24             	mov    %eax,(%esp)
 812f1fa:	e8 0d 66 00 00       	call   813580c <_ZNK9__gnu_cxx17__normal_iteratorIPKN12advancealtar11_RewardItemESt6vectorIS2_SaIS2_EEEdeEv>
 812f1ff:	89 44 24 04          	mov    %eax,0x4(%esp)
 812f203:	8d 45 dc             	lea    -0x24(%ebp),%eax
 812f206:	89 04 24             	mov    %eax,(%esp)
 812f209:	e8 da 69 00 00       	call   8135be8 <_ZNSt6vectorIN12advancealtar11_RewardItemESaIS1_EE9push_backERKS1_>
 812f20e:	eb 66                	jmp    812f276 <_ZN12advancealtar9ProcStage16rewardClearStageERSt6vectorINS_11_RewardItemESaIS2_EE+0x17c>
 812f210:	8d 45 cc             	lea    -0x34(%ebp),%eax
 812f213:	89 04 24             	mov    %eax,(%esp)
 812f216:	e8 f1 65 00 00       	call   813580c <_ZNK9__gnu_cxx17__normal_iteratorIPKN12advancealtar11_RewardItemESt6vectorIS2_SaIS2_EEEdeEv>
 812f21b:	89 44 24 04          	mov    %eax,0x4(%esp)
 812f21f:	8d 45 d0             	lea    -0x30(%ebp),%eax
 812f222:	89 04 24             	mov    %eax,(%esp)
 812f225:	e8 be 69 00 00       	call   8135be8 <_ZNSt6vectorIN12advancealtar11_RewardItemESaIS1_EE9push_backERKS1_>
 812f22a:	eb 4a                	jmp    812f276 <_ZN12advancealtar9ProcStage16rewardClearStageERSt6vectorINS_11_RewardItemESaIS2_EE+0x17c>
 812f22c:	8d 45 cc             	lea    -0x34(%ebp),%eax
 812f22f:	89 04 24             	mov    %eax,(%esp)
 812f232:	e8 25 6a 00 00       	call   8135c5c <_ZNK9__gnu_cxx17__normal_iteratorIPKN12advancealtar11_RewardItemESt6vectorIS2_SaIS2_EEEptEv>
 812f237:	8b 00                	mov    (%eax),%eax
 812f239:	85 c0                	test   %eax,%eax
 812f23b:	0f 94 c0             	sete   %al
 812f23e:	84 c0                	test   %al,%al
 812f240:	74 34                	je     812f276 <_ZN12advancealtar9ProcStage16rewardClearStageERSt6vectorINS_11_RewardItemESaIS2_EE+0x17c>
 812f242:	8d 45 cc             	lea    -0x34(%ebp),%eax
 812f245:	89 04 24             	mov    %eax,(%esp)
 812f248:	e8 bf 65 00 00       	call   813580c <_ZNK9__gnu_cxx17__normal_iteratorIPKN12advancealtar11_RewardItemESt6vectorIS2_SaIS2_EEEdeEv>
 812f24d:	89 44 24 04          	mov    %eax,0x4(%esp)
 812f251:	8b 45 0c             	mov    0xc(%ebp),%eax
 812f254:	89 04 24             	mov    %eax,(%esp)
 812f257:	e8 8c 69 00 00       	call   8135be8 <_ZNSt6vectorIN12advancealtar11_RewardItemESaIS1_EE9push_backERKS1_>
 812f25c:	8d 45 cc             	lea    -0x34(%ebp),%eax
 812f25f:	89 04 24             	mov    %eax,(%esp)
 812f262:	e8 a5 65 00 00       	call   813580c <_ZNK9__gnu_cxx17__normal_iteratorIPKN12advancealtar11_RewardItemESt6vectorIS2_SaIS2_EEEdeEv>
 812f267:	89 44 24 04          	mov    %eax,0x4(%esp)
 812f26b:	8d 45 dc             	lea    -0x24(%ebp),%eax
 812f26e:	89 04 24             	mov    %eax,(%esp)
 812f271:	e8 72 69 00 00       	call   8135be8 <_ZNSt6vectorIN12advancealtar11_RewardItemESaIS1_EE9push_backERKS1_>
 812f276:	8d 45 ec             	lea    -0x14(%ebp),%eax
 812f279:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 812f280:	00 
 812f281:	8d 55 cc             	lea    -0x34(%ebp),%edx
 812f284:	89 54 24 04          	mov    %edx,0x4(%esp)
 812f288:	89 04 24             	mov    %eax,(%esp)
 812f28b:	e8 48 65 00 00       	call   81357d8 <_ZN9__gnu_cxx17__normal_iteratorIPKN12advancealtar11_RewardItemESt6vectorIS2_SaIS2_EEEppEi>
 812f290:	83 ec 04             	sub    $0x4,%esp
 812f293:	8d 45 e8             	lea    -0x18(%ebp),%eax
 812f296:	8b 55 f0             	mov    -0x10(%ebp),%edx
 812f299:	89 54 24 04          	mov    %edx,0x4(%esp)
 812f29d:	89 04 24             	mov    %eax,(%esp)
 812f2a0:	e8 db 64 00 00       	call   8135780 <_ZNKSt6vectorIN12advancealtar11_RewardItemESaIS1_EE3endEv>
 812f2a5:	83 ec 04             	sub    $0x4,%esp
 812f2a8:	8d 45 e8             	lea    -0x18(%ebp),%eax
 812f2ab:	89 44 24 04          	mov    %eax,0x4(%esp)
 812f2af:	8d 45 cc             	lea    -0x34(%ebp),%eax
 812f2b2:	89 04 24             	mov    %eax,(%esp)
 812f2b5:	e8 f2 64 00 00       	call   81357ac <_ZN9__gnu_cxxneIPKN12advancealtar11_RewardItemESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_>
 812f2ba:	84 c0                	test   %al,%al
 812f2bc:	0f 85 f9 fe ff ff    	jne    812f1bb <_ZN12advancealtar9ProcStage16rewardClearStageERSt6vectorINS_11_RewardItemESaIS2_EE+0xc1>
 812f2c2:	8d 45 dc             	lea    -0x24(%ebp),%eax
 812f2c5:	89 04 24             	mov    %eax,(%esp)
 812f2c8:	e8 f3 63 00 00       	call   81356c0 <_ZNKSt6vectorIN12advancealtar11_RewardItemESaIS1_EE4sizeEv>
 812f2cd:	85 c0                	test   %eax,%eax
 812f2cf:	0f 95 c0             	setne  %al
 812f2d2:	84 c0                	test   %al,%al
 812f2d4:	74 2c                	je     812f302 <_ZN12advancealtar9ProcStage16rewardClearStageERSt6vectorINS_11_RewardItemESaIS2_EE+0x208>
 812f2d6:	8b 45 08             	mov    0x8(%ebp),%eax
 812f2d9:	8b 00                	mov    (%eax),%eax
 812f2db:	89 04 24             	mov    %eax,(%esp)
 812f2de:	e8 31 55 00 00       	call   8134814 <_ZNK12advancealtar10CharacData7getUserEv>
 812f2e3:	c7 44 24 0c dd c6 b6 	movl   $0x8b6c6dd,0xc(%esp)
 812f2ea:	08 
 812f2eb:	c7 44 24 08 f4 c6 b6 	movl   $0x8b6c6f4,0x8(%esp)
 812f2f2:	08 
 812f2f3:	8d 55 dc             	lea    -0x24(%ebp),%edx
 812f2f6:	89 54 24 04          	mov    %edx,0x4(%esp)
 812f2fa:	89 04 24             	mov    %eax,(%esp)
 812f2fd:	e8 78 01 00 00       	call   812f47a <_ZN12advancealtar9ProcStage18sendMailRewardItemEP5CUserRKSt6vectorINS_11_RewardItemESaIS4_EEPKcSA_>
 812f302:	e8 9f dc ff ff       	call   812cfa6 <_ZN12advancealtar9isOnEventEv>
 812f307:	84 c0                	test   %al,%al
 812f309:	74 16                	je     812f321 <_ZN12advancealtar9ProcStage16rewardClearStageERSt6vectorINS_11_RewardItemESaIS2_EE+0x227>
 812f30b:	8d 45 d0             	lea    -0x30(%ebp),%eax
 812f30e:	89 04 24             	mov    %eax,(%esp)
 812f311:	e8 aa 63 00 00       	call   81356c0 <_ZNKSt6vectorIN12advancealtar11_RewardItemESaIS1_EE4sizeEv>
 812f316:	85 c0                	test   %eax,%eax
 812f318:	74 07                	je     812f321 <_ZN12advancealtar9ProcStage16rewardClearStageERSt6vectorINS_11_RewardItemESaIS2_EE+0x227>
 812f31a:	b8 01 00 00 00       	mov    $0x1,%eax
 812f31f:	eb 05                	jmp    812f326 <_ZN12advancealtar9ProcStage16rewardClearStageERSt6vectorINS_11_RewardItemESaIS2_EE+0x22c>
 812f321:	b8 00 00 00 00       	mov    $0x0,%eax
 812f326:	84 c0                	test   %al,%al
 812f328:	74 43                	je     812f36d <_ZN12advancealtar9ProcStage16rewardClearStageERSt6vectorINS_11_RewardItemESaIS2_EE+0x273>
 812f32a:	8b 45 08             	mov    0x8(%ebp),%eax
 812f32d:	8b 00                	mov    (%eax),%eax
 812f32f:	89 04 24             	mov    %eax,(%esp)
 812f332:	e8 dd 54 00 00       	call   8134814 <_ZNK12advancealtar10CharacData7getUserEv>
 812f337:	c7 44 24 0c 0b c7 b6 	movl   $0x8b6c70b,0xc(%esp)
 812f33e:	08 
 812f33f:	c7 44 24 08 22 c7 b6 	movl   $0x8b6c722,0x8(%esp)
 812f346:	08 
 812f347:	8d 55 d0             	lea    -0x30(%ebp),%edx
 812f34a:	89 54 24 04          	mov    %edx,0x4(%esp)
 812f34e:	89 04 24             	mov    %eax,(%esp)
 812f351:	e8 24 01 00 00       	call   812f47a <_ZN12advancealtar9ProcStage18sendMailRewardItemEP5CUserRKSt6vectorINS_11_RewardItemESaIS4_EEPKcSA_>
 812f356:	eb 15                	jmp    812f36d <_ZN12advancealtar9ProcStage16rewardClearStageERSt6vectorINS_11_RewardItemESaIS2_EE+0x273>
 812f358:	89 d3                	mov    %edx,%ebx
 812f35a:	89 c6                	mov    %eax,%esi
 812f35c:	8d 45 d0             	lea    -0x30(%ebp),%eax
 812f35f:	89 04 24             	mov    %eax,(%esp)
 812f362:	e8 8d 58 00 00       	call   8134bf4 <_ZNSt6vectorIN12advancealtar11_RewardItemESaIS1_EED1Ev>
 812f367:	89 f0                	mov    %esi,%eax
 812f369:	89 da                	mov    %ebx,%edx
 812f36b:	eb 0d                	jmp    812f37a <_ZN12advancealtar9ProcStage16rewardClearStageERSt6vectorINS_11_RewardItemESaIS2_EE+0x280>
 812f36d:	8d 45 d0             	lea    -0x30(%ebp),%eax
 812f370:	89 04 24             	mov    %eax,(%esp)
 812f373:	e8 7c 58 00 00       	call   8134bf4 <_ZNSt6vectorIN12advancealtar11_RewardItemESaIS1_EED1Ev>
 812f378:	eb 1b                	jmp    812f395 <_ZN12advancealtar9ProcStage16rewardClearStageERSt6vectorINS_11_RewardItemESaIS2_EE+0x29b>
 812f37a:	89 d3                	mov    %edx,%ebx
 812f37c:	89 c6                	mov    %eax,%esi
 812f37e:	8d 45 dc             	lea    -0x24(%ebp),%eax
 812f381:	89 04 24             	mov    %eax,(%esp)
 812f384:	e8 6b 58 00 00       	call   8134bf4 <_ZNSt6vectorIN12advancealtar11_RewardItemESaIS1_EED1Ev>
 812f389:	89 f0                	mov    %esi,%eax
 812f38b:	89 da                	mov    %ebx,%edx
 812f38d:	89 04 24             	mov    %eax,(%esp)
 812f390:	e8 bb 43 9b 00       	call   8ae3750 <_Unwind_Resume>
 812f395:	8d 45 dc             	lea    -0x24(%ebp),%eax
 812f398:	89 04 24             	mov    %eax,(%esp)
 812f39b:	e8 54 58 00 00       	call   8134bf4 <_ZNSt6vectorIN12advancealtar11_RewardItemESaIS1_EED1Ev>
 812f3a0:	eb 01                	jmp    812f3a3 <_ZN12advancealtar9ProcStage16rewardClearStageERSt6vectorINS_11_RewardItemESaIS2_EE+0x2a9>
 812f3a2:	90                   	nop
 812f3a3:	8d 65 f8             	lea    -0x8(%ebp),%esp
 812f3a6:	83 c4 00             	add    $0x0,%esp
 812f3a9:	5b                   	pop    %ebx
 812f3aa:	5e                   	pop    %esi
 812f3ab:	5d                   	pop    %ebp
 812f3ac:	c3                   	ret
 812f3ad:	90                   	nop

```

```c
// advancealtar::ProcStage::rewardClearStage @ 0x812f0fa

/* advancealtar::ProcStage::rewardClearStage(std::vector<advancealtar::_RewardItem,
   std::allocator<advancealtar::_RewardItem> >&) */

void __thiscall advancealtar::ProcStage::rewardClearStage(ProcStage *this,vector *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  _RewardItem *p_Var4;
  int *piVar5;
  CUser *pCVar6;
  __normal_iterator<advancealtar::_RewardItem_const*,std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>>
  local_38 [4];
  vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>> local_34 [12];
  vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>> local_28 [12];
  __normal_iterator local_1c [4];
  __normal_iterator<advancealtar::_RewardItem_const*,std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>>
  local_18 [4];
  int local_14;
  undefined4 local_10;
  
  if (*(int *)(this + 0x70) != 0) {
    std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>::clear
              ((vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>> *)
               param_1);
    local_14 = 0;
    iVar3 = getStageType(this);
    if (iVar3 == 1) {
      local_14 = SurvivalRewardData::getRoundRewardData
                           ((SurvivalRewardData *)(*(int *)(this + 0x70) + 0x850),
                            *(int *)(this + 0x7c));
    }
    else {
      local_14 = *(int *)(this + 0x70) + *(int *)(this + 0x68) * 0xc + 0x82c;
    }
    std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>::vector
              (local_28);
                    /* try { // try from 0812f18b to 0812f18f has its CatchHandler @ 0812f37a */
    std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>::vector
              (local_34);
    if (local_14 != 0) {
      local_10 = 0;
                    /* try { // try from 0812f1ae to 0812f355 has its CatchHandler @ 0812f358 */
      std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>::begin();
      while( true ) {
        std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>::end();
        bVar1 = __gnu_cxx::operator!=(local_38,local_1c);
        if (!bVar1) break;
        cVar2 = isOnEvent();
        if (cVar2 == '\0') {
          piVar5 = (int *)__gnu_cxx::
                          __normal_iterator<advancealtar::_RewardItem_const*,std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>>
                          ::operator->(local_38);
          if (*piVar5 == 0) {
            p_Var4 = (_RewardItem *)
                     __gnu_cxx::
                     __normal_iterator<advancealtar::_RewardItem_const*,std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>>
                     ::operator*(local_38);
            std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>::
            push_back((vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>> *
                      )param_1,p_Var4);
            p_Var4 = (_RewardItem *)
                     __gnu_cxx::
                     __normal_iterator<advancealtar::_RewardItem_const*,std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>>
                     ::operator*(local_38);
            std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>::
            push_back(local_28,p_Var4);
          }
        }
        else {
          p_Var4 = (_RewardItem *)
                   __gnu_cxx::
                   __normal_iterator<advancealtar::_RewardItem_const*,std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>>
                   ::operator*(local_38);
          std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>::
          push_back((vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>> *)
                    param_1,p_Var4);
          piVar5 = (int *)__gnu_cxx::
                          __normal_iterator<advancealtar::_RewardItem_const*,std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>>
                          ::operator->(local_38);
          if (*piVar5 == 0) {
            p_Var4 = (_RewardItem *)
                     __gnu_cxx::
                     __normal_iterator<advancealtar::_RewardItem_const*,std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>>
                     ::operator*(local_38);
            std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>::
            push_back(local_28,p_Var4);
          }
          else {
            p_Var4 = (_RewardItem *)
                     __gnu_cxx::
                     __normal_iterator<advancealtar::_RewardItem_const*,std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>>
                     ::operator*(local_38);
            std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>::
            push_back(local_34,p_Var4);
          }
        }
        __gnu_cxx::
        __normal_iterator<advancealtar::_RewardItem_const*,std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>>
        ::operator++(local_18,(int)local_38);
      }
    }
    iVar3 = std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>::size
                      (local_28);
    if (iVar3 != 0) {
      pCVar6 = (CUser *)CharacData::getUser(*(CharacData **)this);
      sendMailRewardItem(pCVar6,(vector *)local_28,"chn_game_server_msg_88","chn_game_server_msg_89"
                        );
    }
    cVar2 = isOnEvent();
    if ((cVar2 == '\0') ||
       (iVar3 = std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>::
                size(local_34), iVar3 == 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      pCVar6 = (CUser *)CharacData::getUser(*(CharacData **)this);
      sendMailRewardItem(pCVar6,(vector *)local_34,"chn_game_server_msg_86","chn_game_server_msg_87"
                        );
    }
                    /* try { // try from 0812f373 to 0812f377 has its CatchHandler @ 0812f37a */
    std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>::~vector
              (local_34);
    std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>::~vector
              (local_28);
    return;
  }
  return;
}

```

---

## sendClearStage

```asm
// === 0812e6de advancealtar::ProcStage::sendClearStage  [0x0812e6de-0x812e9ff] ===
 812e6de:	55                   	push   %ebp
 812e6df:	89 e5                	mov    %esp,%ebp
 812e6e1:	56                   	push   %esi
 812e6e2:	53                   	push   %ebx
 812e6e3:	83 c4 80             	add    $0xffffff80,%esp
 812e6e6:	8b 45 1c             	mov    0x1c(%ebp),%eax
 812e6e9:	88 45 94             	mov    %al,-0x6c(%ebp)
 812e6ec:	8b 45 08             	mov    0x8(%ebp),%eax
 812e6ef:	8b 00                	mov    (%eax),%eax
 812e6f1:	89 04 24             	mov    %eax,(%esp)
 812e6f4:	e8 1b 61 00 00       	call   8134814 <_ZNK12advancealtar10CharacData7getUserEv>
 812e6f9:	89 45 e8             	mov    %eax,-0x18(%ebp)
 812e6fc:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 812e700:	0f 84 ef 02 00 00    	je     812e9f5 <_ZNK12advancealtar9ProcStage14sendClearStageERKSt6vectorINS_11_RewardItemESaIS2_EERKS1_INS_8_BuyItemESaIS7_EERKSt3mapIiNS_7_RewardESt4lessIiESaISt4pairIKiSD_EEEib+0x317>
 812e706:	66 c7 45 ee 00 00    	movw   $0x0,-0x12(%ebp)
 812e70c:	8b 45 e8             	mov    -0x18(%ebp),%eax
 812e70f:	05 60 df 08 00       	add    $0x8df60,%eax
 812e714:	89 04 24             	mov    %eax,(%esp)
 812e717:	e8 a8 61 00 00       	call   81348c4 <_ZNK12advancealtar25CharacAdvanceAltarManager26getCurrentAdvanceAltarDataEv>
 812e71c:	89 45 f0             	mov    %eax,-0x10(%ebp)
 812e71f:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 812e723:	74 0b                	je     812e730 <_ZNK12advancealtar9ProcStage14sendClearStageERKSt6vectorINS_11_RewardItemESaIS2_EERKS1_INS_8_BuyItemESaIS7_EERKSt3mapIiNS_7_RewardESt4lessIiESaISt4pairIKiSD_EEEib+0x52>
 812e725:	8b 45 f0             	mov    -0x10(%ebp),%eax
 812e728:	0f b7 40 18          	movzwl 0x18(%eax),%eax
 812e72c:	66 89 45 ee          	mov    %ax,-0x12(%ebp)
 812e730:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 812e733:	89 04 24             	mov    %eax,(%esp)
 812e736:	e8 e5 5f 00 00       	call   8134720 <_ZN16NOTIPacketStruct27_NotiAdvanceAltarClearStageC1Ev>
 812e73b:	8b 45 08             	mov    0x8(%ebp),%eax
 812e73e:	89 04 24             	mov    %eax,(%esp)
 812e741:	e8 be 03 00 00       	call   812eb04 <_ZNK12advancealtar9ProcStage12getStageTypeEv>
 812e746:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 812e749:	8b 45 08             	mov    0x8(%ebp),%eax
 812e74c:	89 04 24             	mov    %eax,(%esp)
 812e74f:	e8 fa 03 00 00       	call   812eb4e <_ZNK12advancealtar9ProcStage23getClearSurvivalRoundNoEv>
 812e754:	89 45 b8             	mov    %eax,-0x48(%ebp)
 812e757:	0f bf 45 ee          	movswl -0x12(%ebp),%eax
 812e75b:	89 45 bc             	mov    %eax,-0x44(%ebp)
 812e75e:	0f b6 45 94          	movzbl -0x6c(%ebp),%eax
 812e762:	88 45 c0             	mov    %al,-0x40(%ebp)
 812e765:	8b 45 08             	mov    0x8(%ebp),%eax
 812e768:	89 04 24             	mov    %eax,(%esp)
 812e76b:	e8 b6 03 00 00       	call   812eb26 <_ZNK12advancealtar9ProcStage13getStageIndexEv>
 812e770:	89 45 c1             	mov    %eax,-0x3f(%ebp)
 812e773:	8b 45 08             	mov    0x8(%ebp),%eax
 812e776:	8b 40 68             	mov    0x68(%eax),%eax
 812e779:	89 45 c5             	mov    %eax,-0x3b(%ebp)
 812e77c:	8b 45 18             	mov    0x18(%ebp),%eax
 812e77f:	89 45 cc             	mov    %eax,-0x34(%ebp)
 812e782:	8d 45 a8             	lea    -0x58(%ebp),%eax
 812e785:	89 04 24             	mov    %eax,(%esp)
 812e788:	e8 bf f5 45 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 812e78d:	c7 44 24 08 0f 02 00 	movl   $0x20f,0x8(%esp)
 812e794:	00 
 812e795:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 812e79c:	00 
 812e79d:	8d 45 a8             	lea    -0x58(%ebp),%eax
 812e7a0:	89 04 24             	mov    %eax,(%esp)
 812e7a3:	e8 54 d1 f9 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 812e7a8:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 812e7ab:	c7 44 24 08 1c 00 00 	movl   $0x1c,0x8(%esp)
 812e7b2:	00 
 812e7b3:	89 44 24 04          	mov    %eax,0x4(%esp)
 812e7b7:	8d 45 a8             	lea    -0x58(%ebp),%eax
 812e7ba:	89 04 24             	mov    %eax,(%esp)
 812e7bd:	e8 46 f7 fe ff       	call   811df08 <_ZN18InterfacePacketBuf10put_binaryEPci>
 812e7c2:	8b 45 0c             	mov    0xc(%ebp),%eax
 812e7c5:	89 04 24             	mov    %eax,(%esp)
 812e7c8:	e8 f3 6e 00 00       	call   81356c0 <_ZNKSt6vectorIN12advancealtar11_RewardItemESaIS1_EE4sizeEv>
 812e7cd:	89 45 f4             	mov    %eax,-0xc(%ebp)
 812e7d0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 812e7d3:	89 44 24 04          	mov    %eax,0x4(%esp)
 812e7d7:	8d 45 a8             	lea    -0x58(%ebp),%eax
 812e7da:	89 04 24             	mov    %eax,(%esp)
 812e7dd:	e8 5a d1 f9 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 812e7e2:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 812e7e6:	0f 8e 81 00 00 00    	jle    812e86d <_ZNK12advancealtar9ProcStage14sendClearStageERKSt6vectorINS_11_RewardItemESaIS2_EERKS1_INS_8_BuyItemESaIS7_EERKSt3mapIiNS_7_RewardESt4lessIiESaISt4pairIKiSD_EEEib+0x18f>
 812e7ec:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 812e7ef:	8b 55 0c             	mov    0xc(%ebp),%edx
 812e7f2:	89 54 24 04          	mov    %edx,0x4(%esp)
 812e7f6:	89 04 24             	mov    %eax,(%esp)
 812e7f9:	e8 56 6f 00 00       	call   8135754 <_ZNKSt6vectorIN12advancealtar11_RewardItemESaIS1_EE5beginEv>
 812e7fe:	83 ec 04             	sub    $0x4,%esp
 812e801:	eb 3f                	jmp    812e842 <_ZNK12advancealtar9ProcStage14sendClearStageERKSt6vectorINS_11_RewardItemESaIS2_EERKS1_INS_8_BuyItemESaIS7_EERKSt3mapIiNS_7_RewardESt4lessIiESaISt4pairIKiSD_EEEib+0x164>
 812e803:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 812e806:	89 04 24             	mov    %eax,(%esp)
 812e809:	e8 fe 6f 00 00       	call   813580c <_ZNK9__gnu_cxx17__normal_iteratorIPKN12advancealtar11_RewardItemESt6vectorIS2_SaIS2_EEEdeEv>
 812e80e:	c7 44 24 08 0c 00 00 	movl   $0xc,0x8(%esp)
 812e815:	00 
 812e816:	89 44 24 04          	mov    %eax,0x4(%esp)
 812e81a:	8d 45 a8             	lea    -0x58(%ebp),%eax
 812e81d:	89 04 24             	mov    %eax,(%esp)
 812e820:	e8 e3 f6 fe ff       	call   811df08 <_ZN18InterfacePacketBuf10put_binaryEPci>
 812e825:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 812e828:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 812e82f:	00 
 812e830:	8d 55 a4             	lea    -0x5c(%ebp),%edx
 812e833:	89 54 24 04          	mov    %edx,0x4(%esp)
 812e837:	89 04 24             	mov    %eax,(%esp)
 812e83a:	e8 99 6f 00 00       	call   81357d8 <_ZN9__gnu_cxx17__normal_iteratorIPKN12advancealtar11_RewardItemESt6vectorIS2_SaIS2_EEEppEi>
 812e83f:	83 ec 04             	sub    $0x4,%esp
 812e842:	8d 45 d0             	lea    -0x30(%ebp),%eax
 812e845:	8b 55 0c             	mov    0xc(%ebp),%edx
 812e848:	89 54 24 04          	mov    %edx,0x4(%esp)
 812e84c:	89 04 24             	mov    %eax,(%esp)
 812e84f:	e8 2c 6f 00 00       	call   8135780 <_ZNKSt6vectorIN12advancealtar11_RewardItemESaIS1_EE3endEv>
 812e854:	83 ec 04             	sub    $0x4,%esp
 812e857:	8d 45 d0             	lea    -0x30(%ebp),%eax
 812e85a:	89 44 24 04          	mov    %eax,0x4(%esp)
 812e85e:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 812e861:	89 04 24             	mov    %eax,(%esp)
 812e864:	e8 43 6f 00 00       	call   81357ac <_ZN9__gnu_cxxneIPKN12advancealtar11_RewardItemESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_>
 812e869:	84 c0                	test   %al,%al
 812e86b:	75 96                	jne    812e803 <_ZNK12advancealtar9ProcStage14sendClearStageERKSt6vectorINS_11_RewardItemESaIS2_EERKS1_INS_8_BuyItemESaIS7_EERKSt3mapIiNS_7_RewardESt4lessIiESaISt4pairIKiSD_EEEib+0x125>
 812e86d:	8b 45 10             	mov    0x10(%ebp),%eax
 812e870:	89 04 24             	mov    %eax,(%esp)
 812e873:	e8 9e 6f 00 00       	call   8135816 <_ZNKSt6vectorIN12advancealtar8_BuyItemESaIS1_EE4sizeEv>
 812e878:	89 44 24 04          	mov    %eax,0x4(%esp)
 812e87c:	8d 45 a8             	lea    -0x58(%ebp),%eax
 812e87f:	89 04 24             	mov    %eax,(%esp)
 812e882:	e8 b5 d0 f9 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 812e887:	8d 45 a0             	lea    -0x60(%ebp),%eax
 812e88a:	8b 55 10             	mov    0x10(%ebp),%edx
 812e88d:	89 54 24 04          	mov    %edx,0x4(%esp)
 812e891:	89 04 24             	mov    %eax,(%esp)
 812e894:	e8 9f 6f 00 00       	call   8135838 <_ZNKSt6vectorIN12advancealtar8_BuyItemESaIS1_EE5beginEv>
 812e899:	83 ec 04             	sub    $0x4,%esp
 812e89c:	eb 3f                	jmp    812e8dd <_ZNK12advancealtar9ProcStage14sendClearStageERKSt6vectorINS_11_RewardItemESaIS2_EERKS1_INS_8_BuyItemESaIS7_EERKSt3mapIiNS_7_RewardESt4lessIiESaISt4pairIKiSD_EEEib+0x1ff>
 812e89e:	8d 45 a0             	lea    -0x60(%ebp),%eax
 812e8a1:	89 04 24             	mov    %eax,(%esp)
 812e8a4:	e8 47 70 00 00       	call   81358f0 <_ZNK9__gnu_cxx17__normal_iteratorIPKN12advancealtar8_BuyItemESt6vectorIS2_SaIS2_EEEdeEv>
 812e8a9:	c7 44 24 08 0c 00 00 	movl   $0xc,0x8(%esp)
 812e8b0:	00 
 812e8b1:	89 44 24 04          	mov    %eax,0x4(%esp)
 812e8b5:	8d 45 a8             	lea    -0x58(%ebp),%eax
 812e8b8:	89 04 24             	mov    %eax,(%esp)
 812e8bb:	e8 48 f6 fe ff       	call   811df08 <_ZN18InterfacePacketBuf10put_binaryEPci>
 812e8c0:	8d 45 dc             	lea    -0x24(%ebp),%eax
 812e8c3:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 812e8ca:	00 
 812e8cb:	8d 55 a0             	lea    -0x60(%ebp),%edx
 812e8ce:	89 54 24 04          	mov    %edx,0x4(%esp)
 812e8d2:	89 04 24             	mov    %eax,(%esp)
 812e8d5:	e8 e2 6f 00 00       	call   81358bc <_ZN9__gnu_cxx17__normal_iteratorIPKN12advancealtar8_BuyItemESt6vectorIS2_SaIS2_EEEppEi>
 812e8da:	83 ec 04             	sub    $0x4,%esp
 812e8dd:	8d 45 d8             	lea    -0x28(%ebp),%eax
 812e8e0:	8b 55 10             	mov    0x10(%ebp),%edx
 812e8e3:	89 54 24 04          	mov    %edx,0x4(%esp)
 812e8e7:	89 04 24             	mov    %eax,(%esp)
 812e8ea:	e8 75 6f 00 00       	call   8135864 <_ZNKSt6vectorIN12advancealtar8_BuyItemESaIS1_EE3endEv>
 812e8ef:	83 ec 04             	sub    $0x4,%esp
 812e8f2:	8d 45 d8             	lea    -0x28(%ebp),%eax
 812e8f5:	89 44 24 04          	mov    %eax,0x4(%esp)
 812e8f9:	8d 45 a0             	lea    -0x60(%ebp),%eax
 812e8fc:	89 04 24             	mov    %eax,(%esp)
 812e8ff:	e8 8c 6f 00 00       	call   8135890 <_ZN9__gnu_cxxneIPKN12advancealtar8_BuyItemESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_>
 812e904:	84 c0                	test   %al,%al
 812e906:	75 96                	jne    812e89e <_ZNK12advancealtar9ProcStage14sendClearStageERKSt6vectorINS_11_RewardItemESaIS2_EERKS1_INS_8_BuyItemESaIS7_EERKSt3mapIiNS_7_RewardESt4lessIiESaISt4pairIKiSD_EEEib+0x1c0>
 812e908:	8b 45 14             	mov    0x14(%ebp),%eax
 812e90b:	89 04 24             	mov    %eax,(%esp)
 812e90e:	e8 e7 6f 00 00       	call   81358fa <_ZNKSt3mapIiN12advancealtar7_RewardESt4lessIiESaISt4pairIKiS1_EEE4sizeEv>
 812e913:	89 44 24 04          	mov    %eax,0x4(%esp)
 812e917:	8d 45 a8             	lea    -0x58(%ebp),%eax
 812e91a:	89 04 24             	mov    %eax,(%esp)
 812e91d:	e8 1a d0 f9 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 812e922:	8d 45 9c             	lea    -0x64(%ebp),%eax
 812e925:	8b 55 14             	mov    0x14(%ebp),%edx
 812e928:	89 54 24 04          	mov    %edx,0x4(%esp)
 812e92c:	89 04 24             	mov    %eax,(%esp)
 812e92f:	e8 da 6f 00 00       	call   813590e <_ZNKSt3mapIiN12advancealtar7_RewardESt4lessIiESaISt4pairIKiS1_EEE5beginEv>
 812e934:	83 ec 04             	sub    $0x4,%esp
 812e937:	eb 42                	jmp    812e97b <_ZNK12advancealtar9ProcStage14sendClearStageERKSt6vectorINS_11_RewardItemESaIS2_EERKS1_INS_8_BuyItemESaIS7_EERKSt3mapIiNS_7_RewardESt4lessIiESaISt4pairIKiSD_EEEib+0x29d>
 812e939:	8d 45 9c             	lea    -0x64(%ebp),%eax
 812e93c:	89 04 24             	mov    %eax,(%esp)
 812e93f:	e8 68 70 00 00       	call   81359ac <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiN12advancealtar7_RewardEEEptEv>
 812e944:	83 c0 04             	add    $0x4,%eax
 812e947:	c7 44 24 08 05 00 00 	movl   $0x5,0x8(%esp)
 812e94e:	00 
 812e94f:	89 44 24 04          	mov    %eax,0x4(%esp)
 812e953:	8d 45 a8             	lea    -0x58(%ebp),%eax
 812e956:	89 04 24             	mov    %eax,(%esp)
 812e959:	e8 aa f5 fe ff       	call   811df08 <_ZN18InterfacePacketBuf10put_binaryEPci>
 812e95e:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 812e961:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 812e968:	00 
 812e969:	8d 55 9c             	lea    -0x64(%ebp),%edx
 812e96c:	89 54 24 04          	mov    %edx,0x4(%esp)
 812e970:	89 04 24             	mov    %eax,(%esp)
 812e973:	e8 f6 6f 00 00       	call   813596e <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiN12advancealtar7_RewardEEEppEi>
 812e978:	83 ec 04             	sub    $0x4,%esp
 812e97b:	8d 45 e0             	lea    -0x20(%ebp),%eax
 812e97e:	8b 55 14             	mov    0x14(%ebp),%edx
 812e981:	89 54 24 04          	mov    %edx,0x4(%esp)
 812e985:	89 04 24             	mov    %eax,(%esp)
 812e988:	e8 a7 6f 00 00       	call   8135934 <_ZNKSt3mapIiN12advancealtar7_RewardESt4lessIiESaISt4pairIKiS1_EEE3endEv>
 812e98d:	83 ec 04             	sub    $0x4,%esp
 812e990:	8d 45 e0             	lea    -0x20(%ebp),%eax
 812e993:	89 44 24 04          	mov    %eax,0x4(%esp)
 812e997:	8d 45 9c             	lea    -0x64(%ebp),%eax
 812e99a:	89 04 24             	mov    %eax,(%esp)
 812e99d:	e8 b8 6f 00 00       	call   813595a <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiN12advancealtar7_RewardEEEneERKS5_>
 812e9a2:	84 c0                	test   %al,%al
 812e9a4:	75 93                	jne    812e939 <_ZNK12advancealtar9ProcStage14sendClearStageERKSt6vectorINS_11_RewardItemESaIS2_EERKS1_INS_8_BuyItemESaIS7_EERKSt3mapIiNS_7_RewardESt4lessIiESaISt4pairIKiSD_EEEib+0x25b>
 812e9a6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 812e9ad:	00 
 812e9ae:	8d 45 a8             	lea    -0x58(%ebp),%eax
 812e9b1:	89 04 24             	mov    %eax,(%esp)
 812e9b4:	e8 9f cf f9 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 812e9b9:	8d 45 a8             	lea    -0x58(%ebp),%eax
 812e9bc:	89 44 24 04          	mov    %eax,0x4(%esp)
 812e9c0:	8b 45 e8             	mov    -0x18(%ebp),%eax
 812e9c3:	89 04 24             	mov    %eax,(%esp)
 812e9c6:	e8 ef 9b 51 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 812e9cb:	eb 1b                	jmp    812e9e8 <_ZNK12advancealtar9ProcStage14sendClearStageERKSt6vectorINS_11_RewardItemESaIS2_EERKS1_INS_8_BuyItemESaIS7_EERKSt3mapIiNS_7_RewardESt4lessIiESaISt4pairIKiSD_EEEib+0x30a>
 812e9cd:	89 d3                	mov    %edx,%ebx
 812e9cf:	89 c6                	mov    %eax,%esi
 812e9d1:	8d 45 a8             	lea    -0x58(%ebp),%eax
 812e9d4:	89 04 24             	mov    %eax,(%esp)
 812e9d7:	e8 a4 f4 45 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 812e9dc:	89 f0                	mov    %esi,%eax
 812e9de:	89 da                	mov    %ebx,%edx
 812e9e0:	89 04 24             	mov    %eax,(%esp)
 812e9e3:	e8 68 4d 9b 00       	call   8ae3750 <_Unwind_Resume>
 812e9e8:	8d 45 a8             	lea    -0x58(%ebp),%eax
 812e9eb:	89 04 24             	mov    %eax,(%esp)
 812e9ee:	e8 8d f4 45 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 812e9f3:	eb 01                	jmp    812e9f6 <_ZNK12advancealtar9ProcStage14sendClearStageERKSt6vectorINS_11_RewardItemESaIS2_EERKS1_INS_8_BuyItemESaIS7_EERKSt3mapIiNS_7_RewardESt4lessIiESaISt4pairIKiSD_EEEib+0x318>
 812e9f5:	90                   	nop
 812e9f6:	8d 65 f8             	lea    -0x8(%ebp),%esp
 812e9f9:	83 c4 00             	add    $0x0,%esp
 812e9fc:	5b                   	pop    %ebx
 812e9fd:	5e                   	pop    %esi
 812e9fe:	5d                   	pop    %ebp
 812e9ff:	c3                   	ret

```

```c
// advancealtar::ProcStage::sendClearStage @ 0x812e6de

/* advancealtar::ProcStage::sendClearStage(std::vector<advancealtar::_RewardItem,
   std::allocator<advancealtar::_RewardItem> > const&, std::vector<advancealtar::_BuyItem,
   std::allocator<advancealtar::_BuyItem> > const&, std::map<int, advancealtar::_Reward,
   std::less<int>, std::allocator<std::pair<int const, advancealtar::_Reward> > > const&, int, bool)
   const */

void __thiscall
advancealtar::ProcStage::sendClearStage
          (ProcStage *this,vector *param_1,vector *param_2,map *param_3,int param_4,bool param_5)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  map<int,advancealtar::_Reward,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Reward>>>
  local_68 [4];
  __normal_iterator<advancealtar::_BuyItem_const*,std::vector<advancealtar::_BuyItem,std::allocator<advancealtar::_BuyItem>>>
  local_64 [4];
  __normal_iterator<advancealtar::_RewardItem_const*,std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>>
  local_60 [4];
  PacketGuard local_5c [12];
  undefined4 local_50;
  undefined4 local_4c;
  int local_48;
  undefined1 local_44;
  undefined4 local_43;
  undefined4 local_3f;
  int local_38;
  __normal_iterator local_34 [4];
  __normal_iterator<advancealtar::_RewardItem_const*,std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>>
  local_30 [4];
  __normal_iterator local_2c [4];
  __normal_iterator<advancealtar::_BuyItem_const*,std::vector<advancealtar::_BuyItem,std::allocator<advancealtar::_BuyItem>>>
  local_28 [4];
  map<int,advancealtar::_Reward,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Reward>>>
  local_24 [4];
  _Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Reward>> local_20 [4];
  CUser *local_1c;
  short local_16;
  int local_14;
  int local_10;
  
  local_1c = (CUser *)CharacData::getUser(*(CharacData **)this);
  if (local_1c != (CUser *)0x0) {
    local_16 = 0;
    local_14 = CharacAdvanceAltarManager::getCurrentAdvanceAltarData
                         ((CharacAdvanceAltarManager *)(local_1c + 0x8df60));
    if (local_14 != 0) {
      local_16 = *(short *)(local_14 + 0x18);
    }
    NOTIPacketStruct::_NotiAdvanceAltarClearStage::_NotiAdvanceAltarClearStage
              ((_NotiAdvanceAltarClearStage *)&local_50);
    local_50 = getStageType(this);
    local_4c = getClearSurvivalRoundNo(this);
    local_48 = (int)local_16;
    local_44 = param_5;
    local_43 = getStageIndex(this);
    local_3f = *(undefined4 *)(this + 0x68);
    local_38 = param_4;
    PacketGuard::PacketGuard(local_5c);
                    /* try { // try from 0812e7a3 to 0812e9ca has its CatchHandler @ 0812e9cd */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_5c,0,0x20f);
    InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_5c,(char *)&local_50,0x1c);
    local_10 = std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>::
               size((vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>> *)
                    param_1);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_5c,local_10);
    if (0 < local_10) {
      std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>::begin();
      while( true ) {
        std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>::end();
        bVar1 = __gnu_cxx::operator!=(local_60,local_34);
        if (!bVar1) break;
        pcVar4 = (char *)__gnu_cxx::
                         __normal_iterator<advancealtar::_RewardItem_const*,std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>>
                         ::operator*(local_60);
        InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_5c,pcVar4,0xc);
        __gnu_cxx::
        __normal_iterator<advancealtar::_RewardItem_const*,std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>>
        ::operator++(local_30,(int)local_60);
      }
    }
    iVar3 = std::vector<advancealtar::_BuyItem,std::allocator<advancealtar::_BuyItem>>::size
                      ((vector<advancealtar::_BuyItem,std::allocator<advancealtar::_BuyItem>> *)
                       param_2);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_5c,iVar3);
    std::vector<advancealtar::_BuyItem,std::allocator<advancealtar::_BuyItem>>::begin();
    while( true ) {
      std::vector<advancealtar::_BuyItem,std::allocator<advancealtar::_BuyItem>>::end();
      bVar1 = __gnu_cxx::operator!=(local_64,local_2c);
      if (!bVar1) break;
      pcVar4 = (char *)__gnu_cxx::
                       __normal_iterator<advancealtar::_BuyItem_const*,std::vector<advancealtar::_BuyItem,std::allocator<advancealtar::_BuyItem>>>
                       ::operator*(local_64);
      InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_5c,pcVar4,0xc);
      __gnu_cxx::
      __normal_iterator<advancealtar::_BuyItem_const*,std::vector<advancealtar::_BuyItem,std::allocator<advancealtar::_BuyItem>>>
      ::operator++(local_28,(int)local_64);
    }
    iVar3 = std::
            map<int,advancealtar::_Reward,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Reward>>>
            ::size((map<int,advancealtar::_Reward,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Reward>>>
                    *)param_3);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_5c,iVar3);
    std::
    map<int,advancealtar::_Reward,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Reward>>>
    ::begin(local_68);
    while( true ) {
      std::
      map<int,advancealtar::_Reward,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Reward>>>
      ::end(local_24);
      cVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Reward>>::operator!=
                        ((_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Reward>> *)
                         local_68,(_Rb_tree_const_iterator *)local_24);
      if (cVar2 == '\0') break;
      iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Reward>>::operator->
                        ((_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Reward>> *)
                         local_68);
      InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_5c,(char *)(iVar3 + 4),5);
      std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Reward>>::operator++
                (local_20,(int)local_68);
    }
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_5c,true);
    CUser::Send(local_1c,local_5c);
    PacketGuard::~PacketGuard(local_5c);
  }
  return;
}

```

---

## sendMailRewardItem

```asm
// === 0812f47a advancealtar::ProcStage::sendMailRewardItem  [0x0812f47a-0x812f70b] ===
 812f47a:	55                   	push   %ebp
 812f47b:	89 e5                	mov    %esp,%ebp
 812f47d:	56                   	push   %esi
 812f47e:	53                   	push   %ebx
 812f47f:	81 ec f0 03 00 00    	sub    $0x3f0,%esp
 812f485:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
 812f489:	0f 84 6b 02 00 00    	je     812f6fa <_ZN12advancealtar9ProcStage18sendMailRewardItemEP5CUserRKSt6vectorINS_11_RewardItemESaIS4_EEPKcSA_+0x280>
 812f48f:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 812f493:	0f 84 64 02 00 00    	je     812f6fd <_ZN12advancealtar9ProcStage18sendMailRewardItemEP5CUserRKSt6vectorINS_11_RewardItemESaIS4_EEPKcSA_+0x283>
 812f499:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 812f49d:	0f 84 5d 02 00 00    	je     812f700 <_ZN12advancealtar9ProcStage18sendMailRewardItemEP5CUserRKSt6vectorINS_11_RewardItemESaIS4_EEPKcSA_+0x286>
 812f4a3:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 812f4aa:	00 
 812f4ab:	8b 45 10             	mov    0x10(%ebp),%eax
 812f4ae:	89 44 24 08          	mov    %eax,0x8(%esp)
 812f4b2:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 812f4b9:	00 
 812f4ba:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 812f4c1:	e8 38 63 97 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 812f4c6:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 812f4cd:	00 
 812f4ce:	89 44 24 04          	mov    %eax,0x4(%esp)
 812f4d2:	8d 45 b5             	lea    -0x4b(%ebp),%eax
 812f4d5:	89 04 24             	mov    %eax,(%esp)
 812f4d8:	e8 f3 e3 f4 ff       	call   807d8d0 <strncpy@plt>
 812f4dd:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 812f4e4:	00 
 812f4e5:	8b 45 14             	mov    0x14(%ebp),%eax
 812f4e8:	89 44 24 08          	mov    %eax,0x8(%esp)
 812f4ec:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 812f4f3:	00 
 812f4f4:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 812f4fb:	e8 fe 62 97 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 812f500:	c7 44 24 08 ff 00 00 	movl   $0xff,0x8(%esp)
 812f507:	00 
 812f508:	89 44 24 04          	mov    %eax,0x4(%esp)
 812f50c:	8d 85 a4 fe ff ff    	lea    -0x15c(%ebp),%eax
 812f512:	89 04 24             	mov    %eax,(%esp)
 812f515:	e8 b6 e3 f4 ff       	call   807d8d0 <strncpy@plt>
 812f51a:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 812f521:	8d 85 42 fc ff ff    	lea    -0x3be(%ebp),%eax
 812f527:	89 c3                	mov    %eax,%ebx
 812f529:	be 09 00 00 00       	mov    $0x9,%esi
 812f52e:	eb 0e                	jmp    812f53e <_ZN12advancealtar9ProcStage18sendMailRewardItemEP5CUserRKSt6vectorINS_11_RewardItemESaIS4_EEPKcSA_+0xc4>
 812f530:	89 1c 24             	mov    %ebx,(%esp)
 812f533:	e8 1c c3 f9 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 812f538:	83 c3 3d             	add    $0x3d,%ebx
 812f53b:	83 ee 01             	sub    $0x1,%esi
 812f53e:	83 fe ff             	cmp    $0xffffffff,%esi
 812f541:	0f 95 c0             	setne  %al
 812f544:	84 c0                	test   %al,%al
 812f546:	75 e8                	jne    812f530 <_ZN12advancealtar9ProcStage18sendMailRewardItemEP5CUserRKSt6vectorINS_11_RewardItemESaIS4_EEPKcSA_+0xb6>
 812f548:	8d 45 a8             	lea    -0x58(%ebp),%eax
 812f54b:	89 04 24             	mov    %eax,(%esp)
 812f54e:	e8 83 54 00 00       	call   81349d6 <_ZNSt6vectorISt4pairIiiESaIS1_EEC1Ev>
 812f553:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 812f55a:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 812f55d:	8b 55 0c             	mov    0xc(%ebp),%edx
 812f560:	89 54 24 04          	mov    %edx,0x4(%esp)
 812f564:	89 04 24             	mov    %eax,(%esp)
 812f567:	e8 e8 61 00 00       	call   8135754 <_ZNKSt6vectorIN12advancealtar11_RewardItemESaIS1_EE5beginEv>
 812f56c:	83 ec 04             	sub    $0x4,%esp
 812f56f:	eb 7b                	jmp    812f5ec <_ZN12advancealtar9ProcStage18sendMailRewardItemEP5CUserRKSt6vectorINS_11_RewardItemESaIS4_EEPKcSA_+0x172>
 812f571:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 812f575:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 812f578:	89 04 24             	mov    %eax,(%esp)
 812f57b:	e8 dc 66 00 00       	call   8135c5c <_ZNK9__gnu_cxx17__normal_iteratorIPKN12advancealtar11_RewardItemESt6vectorIS2_SaIS2_EEEptEv>
 812f580:	8d 58 08             	lea    0x8(%eax),%ebx
 812f583:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 812f586:	89 04 24             	mov    %eax,(%esp)
 812f589:	e8 ce 66 00 00       	call   8135c5c <_ZNK9__gnu_cxx17__normal_iteratorIPKN12advancealtar11_RewardItemESt6vectorIS2_SaIS2_EEEptEv>
 812f58e:	8d 50 04             	lea    0x4(%eax),%edx
 812f591:	8d 45 e0             	lea    -0x20(%ebp),%eax
 812f594:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 812f598:	89 54 24 04          	mov    %edx,0x4(%esp)
 812f59c:	89 04 24             	mov    %eax,(%esp)
 812f59f:	e8 c2 66 00 00       	call   8135c66 <_ZSt9make_pairIRKmRKiESt4pairINSt17__decay_and_stripIT_E6__typeENS5_IT0_E6__typeEEOS6_OS9_>
 812f5a4:	83 ec 04             	sub    $0x4,%esp
 812f5a7:	8d 45 e0             	lea    -0x20(%ebp),%eax
 812f5aa:	89 44 24 04          	mov    %eax,0x4(%esp)
 812f5ae:	8d 45 d8             	lea    -0x28(%ebp),%eax
 812f5b1:	89 04 24             	mov    %eax,(%esp)
 812f5b4:	e8 bd 24 fe ff       	call   8111a76 <_ZNSt4pairIiiEC1ImiEEOS_IT_T0_E>
 812f5b9:	8d 45 d8             	lea    -0x28(%ebp),%eax
 812f5bc:	89 44 24 04          	mov    %eax,0x4(%esp)
 812f5c0:	8d 45 a8             	lea    -0x58(%ebp),%eax
 812f5c3:	89 04 24             	mov    %eax,(%esp)
 812f5c6:	e8 3b e0 fa ff       	call   80dd606 <_ZNSt6vectorISt4pairIiiESaIS1_EE9push_backEOS1_>
 812f5cb:	8d 45 e8             	lea    -0x18(%ebp),%eax
 812f5ce:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 812f5d5:	00 
 812f5d6:	8d 55 a4             	lea    -0x5c(%ebp),%edx
 812f5d9:	89 54 24 04          	mov    %edx,0x4(%esp)
 812f5dd:	89 04 24             	mov    %eax,(%esp)
 812f5e0:	e8 f3 61 00 00       	call   81357d8 <_ZN9__gnu_cxx17__normal_iteratorIPKN12advancealtar11_RewardItemESt6vectorIS2_SaIS2_EEEppEi>
 812f5e5:	83 ec 04             	sub    $0x4,%esp
 812f5e8:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 812f5ec:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 812f5ef:	8b 55 0c             	mov    0xc(%ebp),%edx
 812f5f2:	89 54 24 04          	mov    %edx,0x4(%esp)
 812f5f6:	89 04 24             	mov    %eax,(%esp)
 812f5f9:	e8 82 61 00 00       	call   8135780 <_ZNKSt6vectorIN12advancealtar11_RewardItemESaIS1_EE3endEv>
 812f5fe:	83 ec 04             	sub    $0x4,%esp
 812f601:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 812f604:	89 44 24 04          	mov    %eax,0x4(%esp)
 812f608:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 812f60b:	89 04 24             	mov    %eax,(%esp)
 812f60e:	e8 99 61 00 00       	call   81357ac <_ZN9__gnu_cxxneIPKN12advancealtar11_RewardItemESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_>
 812f613:	84 c0                	test   %al,%al
 812f615:	74 0d                	je     812f624 <_ZN12advancealtar9ProcStage18sendMailRewardItemEP5CUserRKSt6vectorINS_11_RewardItemESaIS4_EEPKcSA_+0x1aa>
 812f617:	83 7d f0 09          	cmpl   $0x9,-0x10(%ebp)
 812f61b:	7f 07                	jg     812f624 <_ZN12advancealtar9ProcStage18sendMailRewardItemEP5CUserRKSt6vectorINS_11_RewardItemESaIS4_EEPKcSA_+0x1aa>
 812f61d:	b8 01 00 00 00       	mov    $0x1,%eax
 812f622:	eb 05                	jmp    812f629 <_ZN12advancealtar9ProcStage18sendMailRewardItemEP5CUserRKSt6vectorINS_11_RewardItemESaIS4_EEPKcSA_+0x1af>
 812f624:	b8 00 00 00 00       	mov    $0x0,%eax
 812f629:	84 c0                	test   %al,%al
 812f62b:	0f 85 40 ff ff ff    	jne    812f571 <_ZN12advancealtar9ProcStage18sendMailRewardItemEP5CUserRKSt6vectorINS_11_RewardItemESaIS4_EEPKcSA_+0xf7>
 812f631:	c7 45 f4 0f 00 00 00 	movl   $0xf,-0xc(%ebp)
 812f638:	8b 45 ec             	mov    -0x14(%ebp),%eax
 812f63b:	89 44 24 08          	mov    %eax,0x8(%esp)
 812f63f:	8d 85 42 fc ff ff    	lea    -0x3be(%ebp),%eax
 812f645:	89 44 24 04          	mov    %eax,0x4(%esp)
 812f649:	8d 45 a8             	lea    -0x58(%ebp),%eax
 812f64c:	89 04 24             	mov    %eax,(%esp)
 812f64f:	e8 c0 73 42 00       	call   8556a14 <_ZN8WongWork14CMailBoxHelper25MakeSystemMultiMailPostalERSt6vectorISt4pairIiiESaIS3_EEP10Inven_Itemj>
 812f654:	8b 45 08             	mov    0x8(%ebp),%eax
 812f657:	89 04 24             	mov    %eax,(%esp)
 812f65a:	e8 31 c6 f9 ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 812f65f:	89 c3                	mov    %eax,%ebx
 812f661:	8d 85 a4 fe ff ff    	lea    -0x15c(%ebp),%eax
 812f667:	89 04 24             	mov    %eax,(%esp)
 812f66a:	e8 41 ed f4 ff       	call   807e3b0 <strlen@plt>
 812f66f:	89 c6                	mov    %eax,%esi
 812f671:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 812f678:	ff 
 812f679:	8b 45 08             	mov    0x8(%ebp),%eax
 812f67c:	89 04 24             	mov    %eax,(%esp)
 812f67f:	e8 1c e9 51 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 812f684:	89 c2                	mov    %eax,%edx
 812f686:	8b 45 ec             	mov    -0x14(%ebp),%eax
 812f689:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 812f690:	00 
 812f691:	89 5c 24 20          	mov    %ebx,0x20(%esp)
 812f695:	c7 44 24 1c 0f 00 00 	movl   $0xf,0x1c(%esp)
 812f69c:	00 
 812f69d:	89 74 24 18          	mov    %esi,0x18(%esp)
 812f6a1:	8d 8d a4 fe ff ff    	lea    -0x15c(%ebp),%ecx
 812f6a7:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 812f6ab:	89 54 24 10          	mov    %edx,0x10(%esp)
 812f6af:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 812f6b6:	00 
 812f6b7:	89 44 24 08          	mov    %eax,0x8(%esp)
 812f6bb:	8d 85 42 fc ff ff    	lea    -0x3be(%ebp),%eax
 812f6c1:	89 44 24 04          	mov    %eax,0x4(%esp)
 812f6c5:	8d 45 b5             	lea    -0x4b(%ebp),%eax
 812f6c8:	89 04 24             	mov    %eax,(%esp)
 812f6cb:	e8 98 74 42 00       	call   8556b68 <_ZN8WongWork14CMailBoxHelper27ReqDBSendNewSystemMultiMailEPKcPK10Inven_ItemjjjS2_ij17ENUM_SERVER_GROUPb>
 812f6d0:	eb 1b                	jmp    812f6ed <_ZN12advancealtar9ProcStage18sendMailRewardItemEP5CUserRKSt6vectorINS_11_RewardItemESaIS4_EEPKcSA_+0x273>
 812f6d2:	89 d3                	mov    %edx,%ebx
 812f6d4:	89 c6                	mov    %eax,%esi
 812f6d6:	8d 45 a8             	lea    -0x58(%ebp),%eax
 812f6d9:	89 04 24             	mov    %eax,(%esp)
 812f6dc:	e8 09 53 00 00       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 812f6e1:	89 f0                	mov    %esi,%eax
 812f6e3:	89 da                	mov    %ebx,%edx
 812f6e5:	89 04 24             	mov    %eax,(%esp)
 812f6e8:	e8 63 40 9b 00       	call   8ae3750 <_Unwind_Resume>
 812f6ed:	8d 45 a8             	lea    -0x58(%ebp),%eax
 812f6f0:	89 04 24             	mov    %eax,(%esp)
 812f6f3:	e8 f2 52 00 00       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 812f6f8:	eb 07                	jmp    812f701 <_ZN12advancealtar9ProcStage18sendMailRewardItemEP5CUserRKSt6vectorINS_11_RewardItemESaIS4_EEPKcSA_+0x287>
 812f6fa:	90                   	nop
 812f6fb:	eb 04                	jmp    812f701 <_ZN12advancealtar9ProcStage18sendMailRewardItemEP5CUserRKSt6vectorINS_11_RewardItemESaIS4_EEPKcSA_+0x287>
 812f6fd:	90                   	nop
 812f6fe:	eb 01                	jmp    812f701 <_ZN12advancealtar9ProcStage18sendMailRewardItemEP5CUserRKSt6vectorINS_11_RewardItemESaIS4_EEPKcSA_+0x287>
 812f700:	90                   	nop
 812f701:	8d 65 f8             	lea    -0x8(%ebp),%esp
 812f704:	83 c4 00             	add    $0x0,%esp
 812f707:	5b                   	pop    %ebx
 812f708:	5e                   	pop    %esi
 812f709:	5d                   	pop    %ebp
 812f70a:	c3                   	ret
 812f70b:	90                   	nop

```

```c
// advancealtar::ProcStage::sendMailRewardItem @ 0x812f47a

/* advancealtar::ProcStage::sendMailRewardItem(CUser*, std::vector<advancealtar::_RewardItem,
   std::allocator<advancealtar::_RewardItem> > const&, char const*, char const*) */

void advancealtar::ProcStage::sendMailRewardItem
               (CUser *param_1,vector *param_2,char *param_3,char *param_4)

{
  bool bVar1;
  char *pcVar2;
  undefined4 uVar3;
  size_t sVar4;
  undefined4 uVar5;
  Inven_Item *this;
  int iVar6;
  Inven_Item local_3c2 [610];
  char local_160 [256];
  __normal_iterator<advancealtar::_RewardItem_const*,std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>>
  local_60 [4];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_5c [13];
  char local_4f [31];
  __normal_iterator local_30 [4];
  pair<int,int> local_2c [8];
  ulong local_24 [2];
  __normal_iterator<advancealtar::_RewardItem_const*,std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>>
  local_1c [4];
  uint local_18;
  int local_14;
  undefined4 local_10;
  
  if (((param_1 != (CUser *)0x0) && (param_3 != (char *)0x0)) && (param_4 != (char *)0x0)) {
    pcVar2 = (char *)RDARScriptStringManager::findString
                               ((RDARScriptStringManager *)g_scriptStringManager_,4,param_3,
                                (bool *)0x0);
    strncpy(local_4f,pcVar2,0x1e);
    pcVar2 = (char *)RDARScriptStringManager::findString
                               ((RDARScriptStringManager *)g_scriptStringManager_,4,param_4,
                                (bool *)0x0);
    strncpy(local_160,pcVar2,0xff);
    local_18 = 0;
    this = local_3c2;
    for (iVar6 = 9; iVar6 != -1; iVar6 = iVar6 + -1) {
      Inven_Item::Inven_Item(this);
      this = this + 0x3d;
    }
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_5c);
    local_14 = 0;
                    /* try { // try from 0812f567 to 0812f6cf has its CatchHandler @ 0812f6d2 */
    std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>::begin();
    while( true ) {
      std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>::end();
      bVar1 = __gnu_cxx::operator!=(local_60,local_30);
      if ((bVar1) && (local_14 < 10)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (!bVar1) break;
      local_18 = local_18 + 1;
      __gnu_cxx::
      __normal_iterator<advancealtar::_RewardItem_const*,std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>>
      ::operator->(local_60);
      iVar6 = __gnu_cxx::
              __normal_iterator<advancealtar::_RewardItem_const*,std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>>
              ::operator->(local_60);
      std::make_pair<unsigned_long_const&,int_const&>(local_24,(int *)(iVar6 + 4));
      std::pair<int,int>::pair<unsigned_long,int>(local_2c,(pair *)local_24);
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                (local_5c,local_2c);
      __gnu_cxx::
      __normal_iterator<advancealtar::_RewardItem_const*,std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>>
      ::operator++(local_1c,(int)local_60);
      local_14 = local_14 + 1;
    }
    local_10 = 0xf;
    WongWork::CMailBoxHelper::MakeSystemMultiMailPostal((vector *)local_5c,local_3c2,local_18);
    uVar3 = CUser::GetServerGroup(param_1);
    sVar4 = strlen(local_160);
    uVar5 = CUser::get_charac_no(param_1,-1);
    WongWork::CMailBoxHelper::ReqDBSendNewSystemMultiMail
              (local_4f,local_3c2,local_18,0,uVar5,local_160,sVar4,0xf,uVar3,0);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_5c);
  }
  return;
}

```

---

## setNotSurvivalModeFirstRound

```asm
// === 0812f74c advancealtar::ProcStage::setNotSurvivalModeFirstRound  [0x0812f74c-0x812f76f] ===
 812f74c:	55                   	push   %ebp
 812f74d:	89 e5                	mov    %esp,%ebp
 812f74f:	83 ec 04             	sub    $0x4,%esp
 812f752:	8b 45 08             	mov    0x8(%ebp),%eax
 812f755:	89 04 24             	mov    %eax,(%esp)
 812f758:	e8 a7 f3 ff ff       	call   812eb04 <_ZNK12advancealtar9ProcStage12getStageTypeEv>
 812f75d:	83 f8 01             	cmp    $0x1,%eax
 812f760:	0f 94 c0             	sete   %al
 812f763:	84 c0                	test   %al,%al
 812f765:	74 07                	je     812f76e <_ZN12advancealtar9ProcStage28setNotSurvivalModeFirstRoundEv+0x22>
 812f767:	8b 45 08             	mov    0x8(%ebp),%eax
 812f76a:	c6 40 78 00          	movb   $0x0,0x78(%eax)
 812f76e:	c9                   	leave
 812f76f:	c3                   	ret

```

```c
// advancealtar::ProcStage::setNotSurvivalModeFirstRound @ 0x812f74c

/* advancealtar::ProcStage::setNotSurvivalModeFirstRound() */

void __thiscall advancealtar::ProcStage::setNotSurvivalModeFirstRound(ProcStage *this)

{
  int iVar1;
  
  iVar1 = getStageType(this);
  if (iVar1 == 1) {
    this[0x78] = (ProcStage)0x0;
  }
  return;
}

```

---

## startStage

```asm
// === 0812de70 advancealtar::ProcStage::startStage  [0x0812de70-0x812e0d5] ===
 812de70:	55                   	push   %ebp
 812de71:	89 e5                	mov    %esp,%ebp
 812de73:	53                   	push   %ebx
 812de74:	83 ec 24             	sub    $0x24,%esp
 812de77:	8b 45 08             	mov    0x8(%ebp),%eax
 812de7a:	8b 00                	mov    (%eax),%eax
 812de7c:	89 04 24             	mov    %eax,(%esp)
 812de7f:	e8 90 69 00 00       	call   8134814 <_ZNK12advancealtar10CharacData7getUserEv>
 812de84:	89 45 f0             	mov    %eax,-0x10(%ebp)
 812de87:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 812de8b:	75 0a                	jne    812de97 <_ZN12advancealtar9ProcStage10startStageEiNS_15StageDifficulty1TE+0x27>
 812de8d:	b8 03 00 00 00       	mov    $0x3,%eax
 812de92:	e9 3a 02 00 00       	jmp    812e0d1 <_ZN12advancealtar9ProcStage10startStageEiNS_15StageDifficulty1TE+0x261>
 812de97:	e8 ff e2 f9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 812de9c:	8b 55 0c             	mov    0xc(%ebp),%edx
 812de9f:	89 54 24 04          	mov    %edx,0x4(%esp)
 812dea3:	89 04 24             	mov    %eax,(%esp)
 812dea6:	e8 4d 1b 23 00       	call   835f9f8 <_ZNK12CDataManager12find_dungeonEi>
 812deab:	8b 55 08             	mov    0x8(%ebp),%edx
 812deae:	89 42 70             	mov    %eax,0x70(%edx)
 812deb1:	8b 45 08             	mov    0x8(%ebp),%eax
 812deb4:	8b 40 70             	mov    0x70(%eax),%eax
 812deb7:	85 c0                	test   %eax,%eax
 812deb9:	75 0a                	jne    812dec5 <_ZN12advancealtar9ProcStage10startStageEiNS_15StageDifficulty1TE+0x55>
 812debb:	b8 15 00 00 00       	mov    $0x15,%eax
 812dec0:	e9 0c 02 00 00       	jmp    812e0d1 <_ZN12advancealtar9ProcStage10startStageEiNS_15StageDifficulty1TE+0x261>
 812dec5:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 812decc:	8b 45 08             	mov    0x8(%ebp),%eax
 812decf:	89 04 24             	mov    %eax,(%esp)
 812ded2:	e8 2d 0c 00 00       	call   812eb04 <_ZNK12advancealtar9ProcStage12getStageTypeEv>
 812ded7:	83 f8 01             	cmp    $0x1,%eax
 812deda:	0f 94 c0             	sete   %al
 812dedd:	84 c0                	test   %al,%al
 812dedf:	0f 84 2c 01 00 00    	je     812e011 <_ZN12advancealtar9ProcStage10startStageEiNS_15StageDifficulty1TE+0x1a1>
 812dee5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 812deec:	00 
 812deed:	8b 45 08             	mov    0x8(%ebp),%eax
 812def0:	89 04 24             	mov    %eax,(%esp)
 812def3:	e8 e8 fe ff ff       	call   812dde0 <_ZN12advancealtar9ProcStage5resetENS_9StageType1TE>
 812def8:	8b 45 08             	mov    0x8(%ebp),%eax
 812defb:	89 04 24             	mov    %eax,(%esp)
 812defe:	e8 09 18 00 00       	call   812f70c <_ZNK12advancealtar9ProcStage24isSurvivalModeFirstRoundEv>
 812df03:	84 c0                	test   %al,%al
 812df05:	0f 84 99 00 00 00    	je     812dfa4 <_ZN12advancealtar9ProcStage10startStageEiNS_15StageDifficulty1TE+0x134>
 812df0b:	8b 45 08             	mov    0x8(%ebp),%eax
 812df0e:	8b 40 70             	mov    0x70(%eax),%eax
 812df11:	8d 90 14 08 00 00    	lea    0x814(%eax),%edx
 812df17:	8b 45 08             	mov    0x8(%ebp),%eax
 812df1a:	83 e8 80             	sub    $0xffffff80,%eax
 812df1d:	89 54 24 04          	mov    %edx,0x4(%esp)
 812df21:	89 04 24             	mov    %eax,(%esp)
 812df24:	e8 a9 f0 f9 ff       	call   80ccfd2 <_ZNSt6vectorIiSaIiEEaSERKS1_>
 812df29:	8b 45 08             	mov    0x8(%ebp),%eax
 812df2c:	8d 90 80 00 00 00    	lea    0x80(%eax),%edx
 812df32:	8d 45 e8             	lea    -0x18(%ebp),%eax
 812df35:	89 54 24 04          	mov    %edx,0x4(%esp)
 812df39:	89 04 24             	mov    %eax,(%esp)
 812df3c:	e8 2b 03 f6 ff       	call   808e26c <_ZNSt6vectorIiSaIiEE3endEv>
 812df41:	83 ec 04             	sub    $0x4,%esp
 812df44:	8b 45 08             	mov    0x8(%ebp),%eax
 812df47:	8d 90 80 00 00 00    	lea    0x80(%eax),%edx
 812df4d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 812df50:	89 54 24 04          	mov    %edx,0x4(%esp)
 812df54:	89 04 24             	mov    %eax,(%esp)
 812df57:	e8 ec 02 f6 ff       	call   808e248 <_ZNSt6vectorIiSaIiEE5beginEv>
 812df5c:	83 ec 04             	sub    $0x4,%esp
 812df5f:	8b 45 e8             	mov    -0x18(%ebp),%eax
 812df62:	89 44 24 04          	mov    %eax,0x4(%esp)
 812df66:	8b 45 ec             	mov    -0x14(%ebp),%eax
 812df69:	89 04 24             	mov    %eax,(%esp)
 812df6c:	e8 1d 6e 00 00       	call   8134d8e <_ZSt14random_shuffleIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEEvT_S7_>
 812df71:	8b 45 08             	mov    0x8(%ebp),%eax
 812df74:	c7 40 04 01 00 00 00 	movl   $0x1,0x4(%eax)
 812df7b:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 812df82:	e8 17 dd f9 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 812df87:	8b 55 08             	mov    0x8(%ebp),%edx
 812df8a:	89 82 8c 00 00 00    	mov    %eax,0x8c(%edx)
 812df90:	8b 45 08             	mov    0x8(%ebp),%eax
 812df93:	89 44 24 04          	mov    %eax,0x4(%esp)
 812df97:	8b 45 f0             	mov    -0x10(%ebp),%eax
 812df9a:	89 04 24             	mov    %eax,(%esp)
 812df9d:	e8 0e 5a 00 00       	call   81339b0 <_ZN12advancealtar10HistoryLog12enterDungeonER5CUserRKNS_9ProcStageE>
 812dfa2:	eb 0f                	jmp    812dfb3 <_ZN12advancealtar9ProcStage10startStageEiNS_15StageDifficulty1TE+0x143>
 812dfa4:	8b 45 08             	mov    0x8(%ebp),%eax
 812dfa7:	8b 40 7c             	mov    0x7c(%eax),%eax
 812dfaa:	8d 50 01             	lea    0x1(%eax),%edx
 812dfad:	8b 45 08             	mov    0x8(%ebp),%eax
 812dfb0:	89 50 7c             	mov    %edx,0x7c(%eax)
 812dfb3:	8b 45 08             	mov    0x8(%ebp),%eax
 812dfb6:	8b 58 7c             	mov    0x7c(%eax),%ebx
 812dfb9:	8b 45 08             	mov    0x8(%ebp),%eax
 812dfbc:	83 e8 80             	sub    $0xffffff80,%eax
 812dfbf:	89 04 24             	mov    %eax,(%esp)
 812dfc2:	e8 f9 01 f6 ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 812dfc7:	39 c3                	cmp    %eax,%ebx
 812dfc9:	0f 93 c0             	setae  %al
 812dfcc:	84 c0                	test   %al,%al
 812dfce:	74 14                	je     812dfe4 <_ZN12advancealtar9ProcStage10startStageEiNS_15StageDifficulty1TE+0x174>
 812dfd0:	8b 45 08             	mov    0x8(%ebp),%eax
 812dfd3:	c7 40 04 07 00 00 00 	movl   $0x7,0x4(%eax)
 812dfda:	b8 15 00 00 00       	mov    $0x15,%eax
 812dfdf:	e9 ed 00 00 00       	jmp    812e0d1 <_ZN12advancealtar9ProcStage10startStageEiNS_15StageDifficulty1TE+0x261>
 812dfe4:	8b 45 08             	mov    0x8(%ebp),%eax
 812dfe7:	8b 40 7c             	mov    0x7c(%eax),%eax
 812dfea:	8b 55 08             	mov    0x8(%ebp),%edx
 812dfed:	83 ea 80             	sub    $0xffffff80,%edx
 812dff0:	89 44 24 04          	mov    %eax,0x4(%esp)
 812dff4:	89 14 24             	mov    %edx,(%esp)
 812dff7:	e8 e0 01 f6 ff       	call   808e1dc <_ZNSt6vectorIiSaIiEEixEj>
 812dffc:	8b 00                	mov    (%eax),%eax
 812dffe:	89 45 f4             	mov    %eax,-0xc(%ebp)
 812e001:	8b 45 08             	mov    0x8(%ebp),%eax
 812e004:	8b 40 7c             	mov    0x7c(%eax),%eax
 812e007:	89 c2                	mov    %eax,%edx
 812e009:	8b 45 08             	mov    0x8(%ebp),%eax
 812e00c:	89 50 6c             	mov    %edx,0x6c(%eax)
 812e00f:	eb 7b                	jmp    812e08c <_ZN12advancealtar9ProcStage10startStageEiNS_15StageDifficulty1TE+0x21c>
 812e011:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 812e018:	00 
 812e019:	8b 45 08             	mov    0x8(%ebp),%eax
 812e01c:	89 04 24             	mov    %eax,(%esp)
 812e01f:	e8 bc fd ff ff       	call   812dde0 <_ZN12advancealtar9ProcStage5resetENS_9StageType1TE>
 812e024:	8b 45 08             	mov    0x8(%ebp),%eax
 812e027:	8b 55 10             	mov    0x10(%ebp),%edx
 812e02a:	89 50 68             	mov    %edx,0x68(%eax)
 812e02d:	8b 45 08             	mov    0x8(%ebp),%eax
 812e030:	c7 40 04 01 00 00 00 	movl   $0x1,0x4(%eax)
 812e037:	8b 45 08             	mov    0x8(%ebp),%eax
 812e03a:	8b 40 70             	mov    0x70(%eax),%eax
 812e03d:	8b 55 10             	mov    0x10(%ebp),%edx
 812e040:	81 c2 00 02 00 00    	add    $0x200,%edx
 812e046:	8b 44 90 08          	mov    0x8(%eax,%edx,4),%eax
 812e04a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 812e04d:	8b 45 08             	mov    0x8(%ebp),%eax
 812e050:	8b 40 70             	mov    0x70(%eax),%eax
 812e053:	8b 55 10             	mov    0x10(%ebp),%edx
 812e056:	81 c2 08 02 00 00    	add    $0x208,%edx
 812e05c:	8b 14 90             	mov    (%eax,%edx,4),%edx
 812e05f:	8b 45 08             	mov    0x8(%ebp),%eax
 812e062:	89 50 6c             	mov    %edx,0x6c(%eax)
 812e065:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 812e06c:	e8 2d dc f9 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 812e071:	8b 55 08             	mov    0x8(%ebp),%edx
 812e074:	89 82 8c 00 00 00    	mov    %eax,0x8c(%edx)
 812e07a:	8b 45 08             	mov    0x8(%ebp),%eax
 812e07d:	89 44 24 04          	mov    %eax,0x4(%esp)
 812e081:	8b 45 f0             	mov    -0x10(%ebp),%eax
 812e084:	89 04 24             	mov    %eax,(%esp)
 812e087:	e8 24 59 00 00       	call   81339b0 <_ZN12advancealtar10HistoryLog12enterDungeonER5CUserRKNS_9ProcStageE>
 812e08c:	e8 0a e1 f9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 812e091:	8b 55 f4             	mov    -0xc(%ebp),%edx
 812e094:	89 54 24 04          	mov    %edx,0x4(%esp)
 812e098:	89 04 24             	mov    %eax,(%esp)
 812e09b:	e8 74 19 23 00       	call   835fa14 <_ZNK12CDataManager8find_mapEi>
 812e0a0:	8b 55 08             	mov    0x8(%ebp),%edx
 812e0a3:	89 42 74             	mov    %eax,0x74(%edx)
 812e0a6:	8b 45 08             	mov    0x8(%ebp),%eax
 812e0a9:	8b 40 74             	mov    0x74(%eax),%eax
 812e0ac:	85 c0                	test   %eax,%eax
 812e0ae:	75 07                	jne    812e0b7 <_ZN12advancealtar9ProcStage10startStageEiNS_15StageDifficulty1TE+0x247>
 812e0b0:	b8 15 00 00 00       	mov    $0x15,%eax
 812e0b5:	eb 1a                	jmp    812e0d1 <_ZN12advancealtar9ProcStage10startStageEiNS_15StageDifficulty1TE+0x261>
 812e0b7:	8b 45 08             	mov    0x8(%ebp),%eax
 812e0ba:	8b 40 74             	mov    0x74(%eax),%eax
 812e0bd:	8d 90 f4 00 00 00    	lea    0xf4(%eax),%edx
 812e0c3:	8b 45 08             	mov    0x8(%ebp),%eax
 812e0c6:	89 90 90 00 00 00    	mov    %edx,0x90(%eax)
 812e0cc:	b8 00 00 00 00       	mov    $0x0,%eax
 812e0d1:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 812e0d4:	c9                   	leave
 812e0d5:	c3                   	ret

```

```c
// advancealtar::ProcStage::startStage @ 0x812de70

/* advancealtar::ProcStage::startStage(int, advancealtar::StageDifficulty::T) */

undefined4 __thiscall
advancealtar::ProcStage::startStage(ProcStage *this,undefined4 param_1,int param_3)

{
  uint uVar1;
  char cVar2;
  CUser *pCVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 local_1c;
  undefined4 local_18;
  
  pCVar3 = (CUser *)CharacData::getUser(*(CharacData **)this);
  if (pCVar3 == (CUser *)0x0) {
    uVar4 = 3;
  }
  else {
    iVar5 = G_CDataManager();
    uVar4 = CDataManager::find_dungeon(iVar5);
    *(undefined4 *)(this + 0x70) = uVar4;
    if (*(int *)(this + 0x70) == 0) {
      uVar4 = 0x15;
    }
    else {
      iVar5 = getStageType(this);
      if (iVar5 == 1) {
        reset(this,1);
        cVar2 = isSurvivalModeFirstRound(this);
        if (cVar2 == '\0') {
          *(int *)(this + 0x7c) = *(int *)(this + 0x7c) + 1;
        }
        else {
          std::vector<int,std::allocator<int>>::operator=
                    ((vector<int,std::allocator<int>> *)(this + 0x80),
                     (vector *)(*(int *)(this + 0x70) + 0x814));
          std::vector<int,std::allocator<int>>::end();
          std::vector<int,std::allocator<int>>::begin();
          std::
          random_shuffle<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                    (local_18,local_1c);
          *(undefined4 *)(this + 4) = 1;
          uVar4 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
          *(undefined4 *)(this + 0x8c) = uVar4;
          HistoryLog::enterDungeon(pCVar3,this);
        }
        uVar1 = *(uint *)(this + 0x7c);
        uVar6 = std::vector<int,std::allocator<int>>::size
                          ((vector<int,std::allocator<int>> *)(this + 0x80));
        if (uVar6 <= uVar1) {
          *(undefined4 *)(this + 4) = 7;
          return 0x15;
        }
        std::vector<int,std::allocator<int>>::operator[]
                  ((vector<int,std::allocator<int>> *)(this + 0x80),*(uint *)(this + 0x7c));
        *(undefined4 *)(this + 0x6c) = *(undefined4 *)(this + 0x7c);
      }
      else {
        reset(this,0);
        *(int *)(this + 0x68) = param_3;
        *(undefined4 *)(this + 4) = 1;
        *(undefined4 *)(this + 0x6c) =
             *(undefined4 *)(*(int *)(this + 0x70) + (param_3 + 0x208) * 4);
        uVar4 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
        *(undefined4 *)(this + 0x8c) = uVar4;
        HistoryLog::enterDungeon(pCVar3,this);
      }
      iVar5 = G_CDataManager();
      uVar4 = CDataManager::find_map(iVar5);
      *(undefined4 *)(this + 0x74) = uVar4;
      if (*(int *)(this + 0x74) == 0) {
        uVar4 = 0x15;
      }
      else {
        *(int *)(this + 0x90) = *(int *)(this + 0x74) + 0xf4;
        uVar4 = 0;
      }
    }
  }
  return uVar4;
}

```

---

## ~ProcStage

```asm
// === 0812dd26 advancealtar::ProcStage::~ProcStage  [0x0812dd26-0x812dd99] ===
 812dd26:	55                   	push   %ebp
 812dd27:	89 e5                	mov    %esp,%ebp
 812dd29:	56                   	push   %esi
 812dd2a:	53                   	push   %ebx
 812dd2b:	83 ec 10             	sub    $0x10,%esp
 812dd2e:	8b 45 08             	mov    0x8(%ebp),%eax
 812dd31:	83 e8 80             	sub    $0xffffff80,%eax
 812dd34:	89 04 24             	mov    %eax,(%esp)
 812dd37:	e8 9e 60 f5 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 812dd3c:	eb 18                	jmp    812dd56 <_ZN12advancealtar9ProcStageD1Ev+0x30>
 812dd3e:	89 d3                	mov    %edx,%ebx
 812dd40:	89 c6                	mov    %eax,%esi
 812dd42:	8b 45 08             	mov    0x8(%ebp),%eax
 812dd45:	83 c0 50             	add    $0x50,%eax
 812dd48:	89 04 24             	mov    %eax,(%esp)
 812dd4b:	e8 72 6c 00 00       	call   81349c2 <_ZNSt3mapIsN12advancealtar18_MapMonsterSummaryESt4lessIsESaISt4pairIKsS1_EEED1Ev>
 812dd50:	89 f0                	mov    %esi,%eax
 812dd52:	89 da                	mov    %ebx,%edx
 812dd54:	eb 10                	jmp    812dd66 <_ZN12advancealtar9ProcStageD1Ev+0x40>
 812dd56:	8b 45 08             	mov    0x8(%ebp),%eax
 812dd59:	83 c0 50             	add    $0x50,%eax
 812dd5c:	89 04 24             	mov    %eax,(%esp)
 812dd5f:	e8 5e 6c 00 00       	call   81349c2 <_ZNSt3mapIsN12advancealtar18_MapMonsterSummaryESt4lessIsESaISt4pairIKsS1_EEED1Ev>
 812dd64:	eb 1e                	jmp    812dd84 <_ZN12advancealtar9ProcStageD1Ev+0x5e>
 812dd66:	89 d3                	mov    %edx,%ebx
 812dd68:	89 c6                	mov    %eax,%esi
 812dd6a:	8b 45 08             	mov    0x8(%ebp),%eax
 812dd6d:	83 c0 18             	add    $0x18,%eax
 812dd70:	89 04 24             	mov    %eax,(%esp)
 812dd73:	e8 78 f6 ff ff       	call   812d3f0 <_ZN12advancealtar9ProcStage18ProcSummonObjectMsD1Ev>
 812dd78:	89 f0                	mov    %esi,%eax
 812dd7a:	89 da                	mov    %ebx,%edx
 812dd7c:	89 04 24             	mov    %eax,(%esp)
 812dd7f:	e8 cc 59 9b 00       	call   8ae3750 <_Unwind_Resume>
 812dd84:	8b 45 08             	mov    0x8(%ebp),%eax
 812dd87:	83 c0 18             	add    $0x18,%eax
 812dd8a:	89 04 24             	mov    %eax,(%esp)
 812dd8d:	e8 5e f6 ff ff       	call   812d3f0 <_ZN12advancealtar9ProcStage18ProcSummonObjectMsD1Ev>
 812dd92:	83 c4 10             	add    $0x10,%esp
 812dd95:	5b                   	pop    %ebx
 812dd96:	5e                   	pop    %esi
 812dd97:	5d                   	pop    %ebp
 812dd98:	c3                   	ret
 812dd99:	90                   	nop

```

```c
// advancealtar::ProcStage::~ProcStage @ 0x812dd26

/* advancealtar::ProcStage::~ProcStage() */

void __thiscall advancealtar::ProcStage::~ProcStage(ProcStage *this)

{
                    /* try { // try from 0812dd37 to 0812dd3b has its CatchHandler @ 0812dd3e */
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x80));
                    /* try { // try from 0812dd5f to 0812dd63 has its CatchHandler @ 0812dd66 */
  std::
  map<short,advancealtar::_MapMonsterSummary,std::less<short>,std::allocator<std::pair<short_const,advancealtar::_MapMonsterSummary>>>
  ::~map((map<short,advancealtar::_MapMonsterSummary,std::less<short>,std::allocator<std::pair<short_const,advancealtar::_MapMonsterSummary>>>
          *)(this + 0x50));
  ProcSummonObjectMs::~ProcSummonObjectMs((ProcSummonObjectMs *)(this + 0x18));
  return;
}

```

