# Dispatcher_Select_Item_Grwoth_Power

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 081db580 Dispatcher_Select_Item_Grwoth_Power::check_error  [0x081db580-0x81db60b] ===
 81db580:	55                   	push   %ebp
 81db581:	89 e5                	mov    %esp,%ebp
 81db583:	56                   	push   %esi
 81db584:	53                   	push   %ebx
 81db585:	83 ec 10             	sub    $0x10,%esp
 81db588:	8b 45 0c             	mov    0xc(%ebp),%eax
 81db58b:	89 04 24             	mov    %eax,(%esp)
 81db58e:	e8 f9 ed ef ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81db593:	83 f8 02             	cmp    $0x2,%eax
 81db596:	7e 0f                	jle    81db5a7 <_ZN35Dispatcher_Select_Item_Grwoth_Power11check_errorEP5CUserR8MSG_BASER9ParamBase+0x27>
 81db598:	8b 45 0c             	mov    0xc(%ebp),%eax
 81db59b:	89 04 24             	mov    %eax,(%esp)
 81db59e:	e8 8f 4e f4 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 81db5a3:	85 c0                	test   %eax,%eax
 81db5a5:	75 07                	jne    81db5ae <_ZN35Dispatcher_Select_Item_Grwoth_Power11check_errorEP5CUserR8MSG_BASER9ParamBase+0x2e>
 81db5a7:	b8 01 00 00 00       	mov    $0x1,%eax
 81db5ac:	eb 05                	jmp    81db5b3 <_ZN35Dispatcher_Select_Item_Grwoth_Power11check_errorEP5CUserR8MSG_BASER9ParamBase+0x33>
 81db5ae:	b8 00 00 00 00       	mov    $0x0,%eax
 81db5b3:	84 c0                	test   %al,%al
 81db5b5:	74 07                	je     81db5be <_ZN35Dispatcher_Select_Item_Grwoth_Power11check_errorEP5CUserR8MSG_BASER9ParamBase+0x3e>
 81db5b7:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81db5bc:	eb 46                	jmp    81db604 <_ZN35Dispatcher_Select_Item_Grwoth_Power11check_errorEP5CUserR8MSG_BASER9ParamBase+0x84>
 81db5be:	8b 45 0c             	mov    0xc(%ebp),%eax
 81db5c1:	89 04 24             	mov    %eax,(%esp)
 81db5c4:	e8 37 45 05 00       	call   822fb00 <_ZNK15CUserCharacInfo23get_growth_power_rewardEv>
 81db5c9:	0f b6 f0             	movzbl %al,%esi
 81db5cc:	8b 45 0c             	mov    0xc(%ebp),%eax
 81db5cf:	89 04 24             	mov    %eax,(%esp)
 81db5d2:	e8 e1 ec ef ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 81db5d7:	89 c3                	mov    %eax,%ebx
 81db5d9:	e8 bd 0b ef ff       	call   80cc19b <_Z14G_CDataManagerv>
 81db5de:	05 10 87 00 00       	add    $0x8710,%eax
 81db5e3:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81db5e7:	89 04 24             	mov    %eax,(%esp)
 81db5ea:	e8 e7 f9 04 00       	call   822afd6 <_ZN17STGrowthPowerData32get_break_away_section_low_levelEi>
 81db5ef:	39 c6                	cmp    %eax,%esi
 81db5f1:	0f 9d c0             	setge  %al
 81db5f4:	84 c0                	test   %al,%al
 81db5f6:	74 07                	je     81db5ff <_ZN35Dispatcher_Select_Item_Grwoth_Power11check_errorEP5CUserR8MSG_BASER9ParamBase+0x7f>
 81db5f8:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81db5fd:	eb 05                	jmp    81db604 <_ZN35Dispatcher_Select_Item_Grwoth_Power11check_errorEP5CUserR8MSG_BASER9ParamBase+0x84>
 81db5ff:	b8 00 00 00 00       	mov    $0x0,%eax
 81db604:	83 c4 10             	add    $0x10,%esp
 81db607:	5b                   	pop    %ebx
 81db608:	5e                   	pop    %esi
 81db609:	5d                   	pop    %ebp
 81db60a:	c3                   	ret
 81db60b:	90                   	nop

```

```c
// Dispatcher_Select_Item_Grwoth_Power::check_error @ 0x81db580

/* Dispatcher_Select_Item_Grwoth_Power::check_error(CUser*, MSG_BASE&, ParamBase&) */

undefined4
Dispatcher_Select_Item_Grwoth_Power::check_error
          (CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (2 < iVar2) {
    iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if (iVar2 != 0) {
      bVar1 = false;
      goto LAB_081db5b3;
    }
  }
  bVar1 = true;
LAB_081db5b3:
  if (bVar1) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar4 = CUserCharacInfo::get_growth_power_reward((CUserCharacInfo *)param_2);
    iVar2 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_2);
    iVar5 = G_CDataManager();
    iVar2 = STGrowthPowerData::get_break_away_section_low_level
                      ((STGrowthPowerData *)(iVar5 + 0x8710),iVar2);
    if ((int)(uVar4 & 0xff) < iVar2) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0xffffffff;
    }
  }
  return uVar3;
}

```

---

## process

```asm
// === 081db60c Dispatcher_Select_Item_Grwoth_Power::process  [0x081db60c-0x81dbc65] ===
 81db60c:	55                   	push   %ebp
 81db60d:	89 e5                	mov    %esp,%ebp
 81db60f:	57                   	push   %edi
 81db610:	56                   	push   %esi
 81db611:	53                   	push   %ebx
 81db612:	81 ec ec 01 00 00    	sub    $0x1ec,%esp
 81db618:	8b 45 14             	mov    0x14(%ebp),%eax
 81db61b:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81db61f:	8b 45 10             	mov    0x10(%ebp),%eax
 81db622:	89 44 24 08          	mov    %eax,0x8(%esp)
 81db626:	8b 45 0c             	mov    0xc(%ebp),%eax
 81db629:	89 44 24 04          	mov    %eax,0x4(%esp)
 81db62d:	8b 45 08             	mov    0x8(%ebp),%eax
 81db630:	89 04 24             	mov    %eax,(%esp)
 81db633:	e8 48 ff ff ff       	call   81db580 <_ZN35Dispatcher_Select_Item_Grwoth_Power11check_errorEP5CUserR8MSG_BASER9ParamBase>
 81db638:	89 45 d0             	mov    %eax,-0x30(%ebp)
 81db63b:	83 7d d0 00          	cmpl   $0x0,-0x30(%ebp)
 81db63f:	7e 08                	jle    81db649 <_ZN35Dispatcher_Select_Item_Grwoth_Power7processEP5CUserR8MSG_BASER9ParamBase+0x3d>
 81db641:	8b 5d d0             	mov    -0x30(%ebp),%ebx
 81db644:	e9 10 06 00 00       	jmp    81dbc59 <_ZN35Dispatcher_Select_Item_Grwoth_Power7processEP5CUserR8MSG_BASER9ParamBase+0x64d>
 81db649:	83 7d d0 00          	cmpl   $0x0,-0x30(%ebp)
 81db64d:	79 0a                	jns    81db659 <_ZN35Dispatcher_Select_Item_Grwoth_Power7processEP5CUserR8MSG_BASER9ParamBase+0x4d>
 81db64f:	bb ff ff ff ff       	mov    $0xffffffff,%ebx
 81db654:	e9 00 06 00 00       	jmp    81dbc59 <_ZN35Dispatcher_Select_Item_Grwoth_Power7processEP5CUserR8MSG_BASER9ParamBase+0x64d>
 81db659:	8b 45 10             	mov    0x10(%ebp),%eax
 81db65c:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 81db65f:	8b 45 14             	mov    0x14(%ebp),%eax
 81db662:	89 45 d8             	mov    %eax,-0x28(%ebp)
 81db665:	c7 45 a0 00 00 00 00 	movl   $0x0,-0x60(%ebp)
 81db66c:	8d 45 9c             	lea    -0x64(%ebp),%eax
 81db66f:	89 04 24             	mov    %eax,(%esp)
 81db672:	e8 6d ba 05 00       	call   82370e4 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiSt6vectorIS2_I22STStackablePackageDataSaIS3_EESaIS5_EEEEC1Ev>
 81db677:	8b 45 0c             	mov    0xc(%ebp),%eax
 81db67a:	89 04 24             	mov    %eax,(%esp)
 81db67d:	e8 36 ec ef ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 81db682:	89 c3                	mov    %eax,%ebx
 81db684:	e8 12 0b ef ff       	call   80cc19b <_Z14G_CDataManagerv>
 81db689:	8d 90 10 87 00 00    	lea    0x8710(%eax),%edx
 81db68f:	8d 45 99             	lea    -0x67(%ebp),%eax
 81db692:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81db696:	89 54 24 04          	mov    %edx,0x4(%esp)
 81db69a:	89 04 24             	mov    %eax,(%esp)
 81db69d:	e8 dc f9 04 00       	call   822b07e <_ZN17STGrowthPowerData27get_break_away_section_dataEi>
 81db6a2:	83 ec 04             	sub    $0x4,%esp
 81db6a5:	0f b6 45 99          	movzbl -0x67(%ebp),%eax
 81db6a9:	0f b6 d8             	movzbl %al,%ebx
 81db6ac:	8b 45 0c             	mov    0xc(%ebp),%eax
 81db6af:	89 04 24             	mov    %eax,(%esp)
 81db6b2:	e8 69 28 f2 ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 81db6b7:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81db6bb:	89 04 24             	mov    %eax,(%esp)
 81db6be:	e8 ea 8e 6b 00       	call   88945ad <_Z30makeFairPVPEquipmentPackageKeyii>
 81db6c3:	89 45 a0             	mov    %eax,-0x60(%ebp)
 81db6c6:	e8 d0 0a ef ff       	call   80cc19b <_Z14G_CDataManagerv>
 81db6cb:	8d 88 28 87 00 00    	lea    0x8728(%eax),%ecx
 81db6d1:	8d 45 a8             	lea    -0x58(%ebp),%eax
 81db6d4:	8d 55 a0             	lea    -0x60(%ebp),%edx
 81db6d7:	89 54 24 08          	mov    %edx,0x8(%esp)
 81db6db:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 81db6df:	89 04 24             	mov    %eax,(%esp)
 81db6e2:	e8 0b ba 05 00       	call   82370f2 <_ZNSt3mapIiSt6vectorIS0_I22STStackablePackageDataSaIS1_EESaIS3_EESt4lessIiESaISt4pairIKiS5_EEE4findERS9_>
 81db6e7:	83 ec 04             	sub    $0x4,%esp
 81db6ea:	8d 45 a8             	lea    -0x58(%ebp),%eax
 81db6ed:	89 44 24 04          	mov    %eax,0x4(%esp)
 81db6f1:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 81db6f4:	89 04 24             	mov    %eax,(%esp)
 81db6f7:	e8 22 ba 05 00       	call   823711e <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiSt6vectorIS2_I22STStackablePackageDataSaIS3_EESaIS5_EEEEC1ERKSt17_Rb_tree_iteratorIS8_E>
 81db6fc:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 81db6ff:	89 45 9c             	mov    %eax,-0x64(%ebp)
 81db702:	e8 94 0a ef ff       	call   80cc19b <_Z14G_CDataManagerv>
 81db707:	8d 90 28 87 00 00    	lea    0x8728(%eax),%edx
 81db70d:	8d 45 b0             	lea    -0x50(%ebp),%eax
 81db710:	89 54 24 04          	mov    %edx,0x4(%esp)
 81db714:	89 04 24             	mov    %eax,(%esp)
 81db717:	e8 12 ba 05 00       	call   823712e <_ZNSt3mapIiSt6vectorIS0_I22STStackablePackageDataSaIS1_EESaIS3_EESt4lessIiESaISt4pairIKiS5_EEE3endEv>
 81db71c:	83 ec 04             	sub    $0x4,%esp
 81db71f:	8d 45 b0             	lea    -0x50(%ebp),%eax
 81db722:	89 44 24 04          	mov    %eax,0x4(%esp)
 81db726:	8d 45 ac             	lea    -0x54(%ebp),%eax
 81db729:	89 04 24             	mov    %eax,(%esp)
 81db72c:	e8 ed b9 05 00       	call   823711e <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiSt6vectorIS2_I22STStackablePackageDataSaIS3_EESaIS5_EEEEC1ERKSt17_Rb_tree_iteratorIS8_E>
 81db731:	8d 45 ac             	lea    -0x54(%ebp),%eax
 81db734:	89 44 24 04          	mov    %eax,0x4(%esp)
 81db738:	8d 45 9c             	lea    -0x64(%ebp),%eax
 81db73b:	89 04 24             	mov    %eax,(%esp)
 81db73e:	e8 11 ba 05 00       	call   8237154 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiSt6vectorIS2_I22STStackablePackageDataSaIS3_EESaIS5_EEEEeqERKS9_>
 81db743:	84 c0                	test   %al,%al
 81db745:	74 0a                	je     81db751 <_ZN35Dispatcher_Select_Item_Grwoth_Power7processEP5CUserR8MSG_BASER9ParamBase+0x145>
 81db747:	bb 00 00 00 00       	mov    $0x0,%ebx
 81db74c:	e9 08 05 00 00       	jmp    81dbc59 <_ZN35Dispatcher_Select_Item_Grwoth_Power7processEP5CUserR8MSG_BASER9ParamBase+0x64d>
 81db751:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 81db758:	8d 45 8c             	lea    -0x74(%ebp),%eax
 81db75b:	89 04 24             	mov    %eax,(%esp)
 81db75e:	e8 2f f5 f6 ff       	call   814ac92 <_ZNSt6vectorI10Inven_ItemSaIS0_EEC1Ev>
 81db763:	8d 45 9c             	lea    -0x64(%ebp),%eax
 81db766:	89 04 24             	mov    %eax,(%esp)
 81db769:	e8 fa b9 05 00       	call   8237168 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiSt6vectorIS2_I22STStackablePackageDataSaIS3_EESaIS5_EEEEptEv>
 81db76e:	8d 50 04             	lea    0x4(%eax),%edx
 81db771:	8d 45 88             	lea    -0x78(%ebp),%eax
 81db774:	89 54 24 04          	mov    %edx,0x4(%esp)
 81db778:	89 04 24             	mov    %eax,(%esp)
 81db77b:	e8 f6 b9 05 00       	call   8237176 <_ZNKSt6vectorIS_I22STStackablePackageDataSaIS0_EESaIS2_EE5beginEv>
 81db780:	83 ec 04             	sub    $0x4,%esp
 81db783:	e9 2c 02 00 00       	jmp    81db9b4 <_ZN35Dispatcher_Select_Item_Grwoth_Power7processEP5CUserR8MSG_BASER9ParamBase+0x3a8>
 81db788:	8d 45 88             	lea    -0x78(%ebp),%eax
 81db78b:	89 04 24             	mov    %eax,(%esp)
 81db78e:	e8 7d ba 05 00       	call   8237210 <_ZNK9__gnu_cxx17__normal_iteratorIPKSt6vectorI22STStackablePackageDataSaIS2_EES1_IS4_SaIS4_EEEptEv>
 81db793:	89 04 24             	mov    %eax,(%esp)
 81db796:	e8 7f ba 05 00       	call   823721a <_ZNKSt6vectorI22STStackablePackageDataSaIS0_EE4sizeEv>
 81db79b:	8b 55 dc             	mov    -0x24(%ebp),%edx
 81db79e:	8b 4d d4             	mov    -0x2c(%ebp),%ecx
 81db7a1:	0f b6 54 11 0e       	movzbl 0xe(%ecx,%edx,1),%edx
 81db7a6:	0f b6 d2             	movzbl %dl,%edx
 81db7a9:	39 d0                	cmp    %edx,%eax
 81db7ab:	0f 96 c0             	setbe  %al
 81db7ae:	84 c0                	test   %al,%al
 81db7b0:	0f 84 dc 00 00 00    	je     81db892 <_ZN35Dispatcher_Select_Item_Grwoth_Power7processEP5CUserR8MSG_BASER9ParamBase+0x286>
 81db7b6:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81db7b9:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 81db7bc:	0f b6 44 02 0e       	movzbl 0xe(%edx,%eax,1),%eax
 81db7c1:	0f b6 c0             	movzbl %al,%eax
 81db7c4:	89 85 60 fe ff ff    	mov    %eax,-0x1a0(%ebp)
 81db7ca:	8d 45 88             	lea    -0x78(%ebp),%eax
 81db7cd:	89 04 24             	mov    %eax,(%esp)
 81db7d0:	e8 3b ba 05 00       	call   8237210 <_ZNK9__gnu_cxx17__normal_iteratorIPKSt6vectorI22STStackablePackageDataSaIS2_EES1_IS4_SaIS4_EEEptEv>
 81db7d5:	89 04 24             	mov    %eax,(%esp)
 81db7d8:	e8 3d ba 05 00       	call   823721a <_ZNKSt6vectorI22STStackablePackageDataSaIS0_EE4sizeEv>
 81db7dd:	89 85 64 fe ff ff    	mov    %eax,-0x19c(%ebp)
 81db7e3:	8b 45 0c             	mov    0xc(%ebp),%eax
 81db7e6:	89 04 24             	mov    %eax,(%esp)
 81db7e9:	e8 ca ea ef ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 81db7ee:	89 c7                	mov    %eax,%edi
 81db7f0:	8b 45 0c             	mov    0xc(%ebp),%eax
 81db7f3:	89 04 24             	mov    %eax,(%esp)
 81db7f6:	e8 25 27 f2 ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 81db7fb:	89 c6                	mov    %eax,%esi
 81db7fd:	8b 45 0c             	mov    0xc(%ebp),%eax
 81db800:	89 04 24             	mov    %eax,(%esp)
 81db803:	e8 66 eb ef ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81db808:	89 c3                	mov    %eax,%ebx
 81db80a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81db811:	00 
 81db812:	c7 44 24 08 8b 4a 00 	movl   $0x4a8b,0x8(%esp)
 81db819:	00 
 81db81a:	c7 44 24 04 80 21 bd 	movl   $0x8bd2180,0x4(%esp)
 81db821:	08 
 81db822:	8d 45 b8             	lea    -0x48(%ebp),%eax
 81db825:	89 04 24             	mov    %eax,(%esp)
 81db828:	e8 eb 3e 37 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81db82d:	8b 85 60 fe ff ff    	mov    -0x1a0(%ebp),%eax
 81db833:	89 44 24 18          	mov    %eax,0x18(%esp)
 81db837:	8b 85 64 fe ff ff    	mov    -0x19c(%ebp),%eax
 81db83d:	89 44 24 14          	mov    %eax,0x14(%esp)
 81db841:	89 7c 24 10          	mov    %edi,0x10(%esp)
 81db845:	89 74 24 0c          	mov    %esi,0xc(%esp)
 81db849:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81db84d:	c7 44 24 04 0c 1a bc 	movl   $0x8bc1a0c,0x4(%esp)
 81db854:	08 
 81db855:	8d 45 b8             	lea    -0x48(%ebp),%eax
 81db858:	89 04 24             	mov    %eax,(%esp)
 81db85b:	e8 28 3f 37 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81db860:	8b 45 0c             	mov    0xc(%ebp),%eax
 81db863:	89 04 24             	mov    %eax,(%esp)
 81db866:	e8 03 eb ef ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81db86b:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81db86f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81db876:	00 
 81db877:	c7 44 24 04 80 21 bd 	movl   $0x8bd2180,0x4(%esp)
 81db87e:	08 
 81db87f:	c7 04 24 8c 4a 00 00 	movl   $0x4a8c,(%esp)
 81db886:	e8 4c 50 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81db88b:	89 c3                	mov    %eax,%ebx
 81db88d:	e9 bc 03 00 00       	jmp    81dbc4e <_ZN35Dispatcher_Select_Item_Grwoth_Power7processEP5CUserR8MSG_BASER9ParamBase+0x642>
 81db892:	83 7d dc 04          	cmpl   $0x4,-0x24(%ebp)
 81db896:	7e 32                	jle    81db8ca <_ZN35Dispatcher_Select_Item_Grwoth_Power7processEP5CUserR8MSG_BASER9ParamBase+0x2be>
 81db898:	8b 45 0c             	mov    0xc(%ebp),%eax
 81db89b:	89 04 24             	mov    %eax,(%esp)
 81db89e:	e8 cb ea ef ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81db8a3:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81db8a7:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81db8ae:	00 
 81db8af:	c7 44 24 04 80 21 bd 	movl   $0x8bd2180,0x4(%esp)
 81db8b6:	08 
 81db8b7:	c7 04 24 8f 4a 00 00 	movl   $0x4a8f,(%esp)
 81db8be:	e8 14 50 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81db8c3:	89 c3                	mov    %eax,%ebx
 81db8c5:	e9 84 03 00 00       	jmp    81dbc4e <_ZN35Dispatcher_Select_Item_Grwoth_Power7processEP5CUserR8MSG_BASER9ParamBase+0x642>
 81db8ca:	8d 85 6f fe ff ff    	lea    -0x191(%ebp),%eax
 81db8d0:	89 04 24             	mov    %eax,(%esp)
 81db8d3:	e8 7c ff ee ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 81db8d8:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81db8db:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 81db8de:	0f b6 44 02 0e       	movzbl 0xe(%edx,%eax,1),%eax
 81db8e3:	0f b6 d8             	movzbl %al,%ebx
 81db8e6:	8d 45 88             	lea    -0x78(%ebp),%eax
 81db8e9:	89 04 24             	mov    %eax,(%esp)
 81db8ec:	e8 1f b9 05 00       	call   8237210 <_ZNK9__gnu_cxx17__normal_iteratorIPKSt6vectorI22STStackablePackageDataSaIS2_EES1_IS4_SaIS4_EEEptEv>
 81db8f1:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81db8f5:	89 04 24             	mov    %eax,(%esp)
 81db8f8:	e8 39 b9 05 00       	call   8237236 <_ZNKSt6vectorI22STStackablePackageDataSaIS0_EE2atEj>
 81db8fd:	8b 00                	mov    (%eax),%eax
 81db8ff:	89 85 71 fe ff ff    	mov    %eax,-0x18f(%ebp)
 81db905:	8b 85 71 fe ff ff    	mov    -0x18f(%ebp),%eax
 81db90b:	89 c3                	mov    %eax,%ebx
 81db90d:	e8 89 08 ef ff       	call   80cc19b <_Z14G_CDataManagerv>
 81db912:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81db916:	89 04 24             	mov    %eax,(%esp)
 81db919:	e8 14 41 18 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 81db91e:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81db921:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 81db925:	75 14                	jne    81db93b <_ZN35Dispatcher_Select_Item_Grwoth_Power7processEP5CUserR8MSG_BASER9ParamBase+0x32f>
 81db927:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81db92a:	c7 40 04 11 00 00 00 	movl   $0x11,0x4(%eax)
 81db931:	bb 00 00 00 00       	mov    $0x0,%ebx
 81db936:	e9 13 03 00 00       	jmp    81dbc4e <_ZN35Dispatcher_Select_Item_Grwoth_Power7processEP5CUserR8MSG_BASER9ParamBase+0x642>
 81db93b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81db93e:	8b 00                	mov    (%eax),%eax
 81db940:	83 c0 08             	add    $0x8,%eax
 81db943:	8b 10                	mov    (%eax),%edx
 81db945:	8d 85 6f fe ff ff    	lea    -0x191(%ebp),%eax
 81db94b:	89 44 24 04          	mov    %eax,0x4(%esp)
 81db94f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81db952:	89 04 24             	mov    %eax,(%esp)
 81db955:	ff d2                	call   *%edx
 81db957:	0f b6 85 70 fe ff ff 	movzbl -0x190(%ebp),%eax
 81db95e:	3c 01                	cmp    $0x1,%al
 81db960:	74 2e                	je     81db990 <_ZN35Dispatcher_Select_Item_Grwoth_Power7processEP5CUserR8MSG_BASER9ParamBase+0x384>
 81db962:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81db965:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 81db968:	0f b6 44 02 0e       	movzbl 0xe(%edx,%eax,1),%eax
 81db96d:	0f b6 d8             	movzbl %al,%ebx
 81db970:	8d 45 88             	lea    -0x78(%ebp),%eax
 81db973:	89 04 24             	mov    %eax,(%esp)
 81db976:	e8 95 b8 05 00       	call   8237210 <_ZNK9__gnu_cxx17__normal_iteratorIPKSt6vectorI22STStackablePackageDataSaIS2_EES1_IS4_SaIS4_EEEptEv>
 81db97b:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81db97f:	89 04 24             	mov    %eax,(%esp)
 81db982:	e8 af b8 05 00       	call   8237236 <_ZNKSt6vectorI22STStackablePackageDataSaIS0_EE2atEj>
 81db987:	8b 40 04             	mov    0x4(%eax),%eax
 81db98a:	89 85 76 fe ff ff    	mov    %eax,-0x18a(%ebp)
 81db990:	8d 85 6f fe ff ff    	lea    -0x191(%ebp),%eax
 81db996:	89 44 24 04          	mov    %eax,0x4(%esp)
 81db99a:	8d 45 8c             	lea    -0x74(%ebp),%eax
 81db99d:	89 04 24             	mov    %eax,(%esp)
 81db9a0:	e8 bd b8 05 00       	call   8237262 <_ZNSt6vectorI10Inven_ItemSaIS0_EE9push_backERKS0_>
 81db9a5:	83 45 dc 01          	addl   $0x1,-0x24(%ebp)
 81db9a9:	8d 45 88             	lea    -0x78(%ebp),%eax
 81db9ac:	89 04 24             	mov    %eax,(%esp)
 81db9af:	e8 46 b8 05 00       	call   82371fa <_ZN9__gnu_cxx17__normal_iteratorIPKSt6vectorI22STStackablePackageDataSaIS2_EES1_IS4_SaIS4_EEEppEv>
 81db9b4:	8d 45 9c             	lea    -0x64(%ebp),%eax
 81db9b7:	89 04 24             	mov    %eax,(%esp)
 81db9ba:	e8 a9 b7 05 00       	call   8237168 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiSt6vectorIS2_I22STStackablePackageDataSaIS3_EESaIS5_EEEEptEv>
 81db9bf:	8d 50 04             	lea    0x4(%eax),%edx
 81db9c2:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 81db9c5:	89 54 24 04          	mov    %edx,0x4(%esp)
 81db9c9:	89 04 24             	mov    %eax,(%esp)
 81db9cc:	e8 d1 b7 05 00       	call   82371a2 <_ZNKSt6vectorIS_I22STStackablePackageDataSaIS0_EESaIS2_EE3endEv>
 81db9d1:	83 ec 04             	sub    $0x4,%esp
 81db9d4:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 81db9d7:	89 44 24 04          	mov    %eax,0x4(%esp)
 81db9db:	8d 45 88             	lea    -0x78(%ebp),%eax
 81db9de:	89 04 24             	mov    %eax,(%esp)
 81db9e1:	e8 e8 b7 05 00       	call   82371ce <_ZN9__gnu_cxxneIPKSt6vectorI22STStackablePackageDataSaIS2_EES1_IS4_SaIS4_EEEEbRKNS_17__normal_iteratorIT_T0_EESE_>
 81db9e6:	84 c0                	test   %al,%al
 81db9e8:	0f 85 9a fd ff ff    	jne    81db788 <_ZN35Dispatcher_Select_Item_Grwoth_Power7processEP5CUserR8MSG_BASER9ParamBase+0x17c>
 81db9ee:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 81db9f5:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81db9f8:	8d 55 8c             	lea    -0x74(%ebp),%edx
 81db9fb:	89 54 24 04          	mov    %edx,0x4(%esp)
 81db9ff:	89 04 24             	mov    %eax,(%esp)
 81dba02:	e8 fd f2 f6 ff       	call   814ad04 <_ZNSt6vectorI10Inven_ItemSaIS0_EE5beginEv>
 81dba07:	83 ec 04             	sub    $0x4,%esp
 81dba0a:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81dba0d:	89 44 24 04          	mov    %eax,0x4(%esp)
 81dba11:	8d 45 84             	lea    -0x7c(%ebp),%eax
 81dba14:	89 04 24             	mov    %eax,(%esp)
 81dba17:	e8 d0 70 f7 ff       	call   8152aec <_ZN9__gnu_cxx17__normal_iteratorIPK10Inven_ItemSt6vectorIS1_SaIS1_EEEC1IPS1_EERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameISA_S9_E7__valueES6_E6__typeEEE>
 81dba1c:	e9 dc 01 00 00       	jmp    81dbbfd <_ZN35Dispatcher_Select_Item_Grwoth_Power7processEP5CUserR8MSG_BASER9ParamBase+0x5f1>
 81dba21:	8d 45 84             	lea    -0x7c(%ebp),%eax
 81dba24:	89 04 24             	mov    %eax,(%esp)
 81dba27:	e8 1c 71 f7 ff       	call   8152b48 <_ZNK9__gnu_cxx17__normal_iteratorIPK10Inven_ItemSt6vectorIS1_SaIS1_EEEdeEv>
 81dba2c:	89 c3                	mov    %eax,%ebx
 81dba2e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dba31:	89 04 24             	mov    %eax,(%esp)
 81dba34:	e8 55 e8 ef ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 81dba39:	c7 44 24 4c 01 00 00 	movl   $0x1,0x4c(%esp)
 81dba40:	00 
 81dba41:	c7 44 24 48 01 00 00 	movl   $0x1,0x48(%esp)
 81dba48:	00 
 81dba49:	c7 44 24 44 08 00 00 	movl   $0x8,0x44(%esp)
 81dba50:	00 
 81dba51:	8b 13                	mov    (%ebx),%edx
 81dba53:	89 54 24 04          	mov    %edx,0x4(%esp)
 81dba57:	8b 53 04             	mov    0x4(%ebx),%edx
 81dba5a:	89 54 24 08          	mov    %edx,0x8(%esp)
 81dba5e:	8b 53 08             	mov    0x8(%ebx),%edx
 81dba61:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81dba65:	8b 53 0c             	mov    0xc(%ebx),%edx
 81dba68:	89 54 24 10          	mov    %edx,0x10(%esp)
 81dba6c:	8b 53 10             	mov    0x10(%ebx),%edx
 81dba6f:	89 54 24 14          	mov    %edx,0x14(%esp)
 81dba73:	8b 53 14             	mov    0x14(%ebx),%edx
 81dba76:	89 54 24 18          	mov    %edx,0x18(%esp)
 81dba7a:	8b 53 18             	mov    0x18(%ebx),%edx
 81dba7d:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 81dba81:	8b 53 1c             	mov    0x1c(%ebx),%edx
 81dba84:	89 54 24 20          	mov    %edx,0x20(%esp)
 81dba88:	8b 53 20             	mov    0x20(%ebx),%edx
 81dba8b:	89 54 24 24          	mov    %edx,0x24(%esp)
 81dba8f:	8b 53 24             	mov    0x24(%ebx),%edx
 81dba92:	89 54 24 28          	mov    %edx,0x28(%esp)
 81dba96:	8b 53 28             	mov    0x28(%ebx),%edx
 81dba99:	89 54 24 2c          	mov    %edx,0x2c(%esp)
 81dba9d:	8b 53 2c             	mov    0x2c(%ebx),%edx
 81dbaa0:	89 54 24 30          	mov    %edx,0x30(%esp)
 81dbaa4:	8b 53 30             	mov    0x30(%ebx),%edx
 81dbaa7:	89 54 24 34          	mov    %edx,0x34(%esp)
 81dbaab:	8b 53 34             	mov    0x34(%ebx),%edx
 81dbaae:	89 54 24 38          	mov    %edx,0x38(%esp)
 81dbab2:	8b 53 38             	mov    0x38(%ebx),%edx
 81dbab5:	89 54 24 3c          	mov    %edx,0x3c(%esp)
 81dbab9:	0f b6 53 3c          	movzbl 0x3c(%ebx),%edx
 81dbabd:	88 54 24 40          	mov    %dl,0x40(%esp)
 81dbac1:	89 04 24             	mov    %eax,(%esp)
 81dbac4:	e8 bd 72 32 00       	call   8502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>
 81dbac9:	89 45 e0             	mov    %eax,-0x20(%ebp)
 81dbacc:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 81dbad0:	78 27                	js     81dbaf9 <_ZN35Dispatcher_Select_Item_Grwoth_Power7processEP5CUserR8MSG_BASER9ParamBase+0x4ed>
 81dbad2:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81dbad5:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81dbad9:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81dbae0:	00 
 81dbae1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81dbae8:	00 
 81dbae9:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dbaec:	89 04 24             	mov    %eax,(%esp)
 81dbaef:	e8 66 0b 4a 00       	call   867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>
 81dbaf4:	e9 f9 00 00 00       	jmp    81dbbf2 <_ZN35Dispatcher_Select_Item_Grwoth_Power7processEP5CUserR8MSG_BASER9ParamBase+0x5e6>
 81dbaf9:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81dbb00:	00 
 81dbb01:	c7 44 24 08 36 1a bc 	movl   $0x8bc1a36,0x8(%esp)
 81dbb08:	08 
 81dbb09:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 81dbb10:	00 
 81dbb11:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 81dbb18:	e8 e1 9c 8c 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 81dbb1d:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 81dbb24:	00 
 81dbb25:	89 44 24 04          	mov    %eax,0x4(%esp)
 81dbb29:	8d 85 6f ff ff ff    	lea    -0x91(%ebp),%eax
 81dbb2f:	89 04 24             	mov    %eax,(%esp)
 81dbb32:	e8 99 1d ea ff       	call   807d8d0 <strncpy@plt>
 81dbb37:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81dbb3e:	00 
 81dbb3f:	c7 44 24 08 4a 1a bc 	movl   $0x8bc1a4a,0x8(%esp)
 81dbb46:	08 
 81dbb47:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 81dbb4e:	00 
 81dbb4f:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 81dbb56:	e8 a3 9c 8c 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 81dbb5b:	c7 44 24 08 ff 00 00 	movl   $0xff,0x8(%esp)
 81dbb62:	00 
 81dbb63:	89 44 24 04          	mov    %eax,0x4(%esp)
 81dbb67:	8d 85 6f fe ff ff    	lea    -0x191(%ebp),%eax
 81dbb6d:	89 04 24             	mov    %eax,(%esp)
 81dbb70:	e8 5b 1d ea ff       	call   807d8d0 <strncpy@plt>
 81dbb75:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dbb78:	89 04 24             	mov    %eax,(%esp)
 81dbb7b:	e8 10 01 ef ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 81dbb80:	89 c6                	mov    %eax,%esi
 81dbb82:	8d 85 6f fe ff ff    	lea    -0x191(%ebp),%eax
 81dbb88:	89 04 24             	mov    %eax,(%esp)
 81dbb8b:	e8 20 28 ea ff       	call   807e3b0 <strlen@plt>
 81dbb90:	89 c7                	mov    %eax,%edi
 81dbb92:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dbb95:	89 04 24             	mov    %eax,(%esp)
 81dbb98:	e8 b1 00 ef ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 81dbb9d:	89 c3                	mov    %eax,%ebx
 81dbb9f:	8d 45 84             	lea    -0x7c(%ebp),%eax
 81dbba2:	89 04 24             	mov    %eax,(%esp)
 81dbba5:	e8 9e 6f f7 ff       	call   8152b48 <_ZNK9__gnu_cxx17__normal_iteratorIPK10Inven_ItemSt6vectorIS1_SaIS1_EEEdeEv>
 81dbbaa:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 81dbbb1:	00 
 81dbbb2:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 81dbbb9:	00 
 81dbbba:	89 74 24 1c          	mov    %esi,0x1c(%esp)
 81dbbbe:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 81dbbc5:	00 
 81dbbc6:	89 7c 24 14          	mov    %edi,0x14(%esp)
 81dbbca:	8d 95 6f fe ff ff    	lea    -0x191(%ebp),%edx
 81dbbd0:	89 54 24 10          	mov    %edx,0x10(%esp)
 81dbbd4:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 81dbbd8:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81dbbdf:	00 
 81dbbe0:	89 44 24 04          	mov    %eax,0x4(%esp)
 81dbbe4:	8d 85 6f ff ff ff    	lea    -0x91(%ebp),%eax
 81dbbea:	89 04 24             	mov    %eax,(%esp)
 81dbbed:	e8 f6 99 37 00       	call   85555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>
 81dbbf2:	8d 45 84             	lea    -0x7c(%ebp),%eax
 81dbbf5:	89 04 24             	mov    %eax,(%esp)
 81dbbf8:	e8 35 6f f7 ff       	call   8152b32 <_ZN9__gnu_cxx17__normal_iteratorIPK10Inven_ItemSt6vectorIS1_SaIS1_EEEppEv>
 81dbbfd:	8d 45 cc             	lea    -0x34(%ebp),%eax
 81dbc00:	8d 55 8c             	lea    -0x74(%ebp),%edx
 81dbc03:	89 54 24 04          	mov    %edx,0x4(%esp)
 81dbc07:	89 04 24             	mov    %eax,(%esp)
 81dbc0a:	e8 db 6c f7 ff       	call   81528ea <_ZNSt6vectorI10Inven_ItemSaIS0_EE3endEv>
 81dbc0f:	83 ec 04             	sub    $0x4,%esp
 81dbc12:	8d 45 cc             	lea    -0x34(%ebp),%eax
 81dbc15:	89 44 24 04          	mov    %eax,0x4(%esp)
 81dbc19:	8d 45 84             	lea    -0x7c(%ebp),%eax
 81dbc1c:	89 04 24             	mov    %eax,(%esp)
 81dbc1f:	e8 b1 b6 05 00       	call   82372d5 <_ZN9__gnu_cxxneIPK10Inven_ItemPS1_St6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T1_EERKNS8_IT0_SA_EE>
 81dbc24:	84 c0                	test   %al,%al
 81dbc26:	0f 85 f5 fd ff ff    	jne    81dba21 <_ZN35Dispatcher_Select_Item_Grwoth_Power7processEP5CUserR8MSG_BASER9ParamBase+0x415>
 81dbc2c:	bb 00 00 00 00       	mov    $0x0,%ebx
 81dbc31:	eb 1b                	jmp    81dbc4e <_ZN35Dispatcher_Select_Item_Grwoth_Power7processEP5CUserR8MSG_BASER9ParamBase+0x642>
 81dbc33:	89 d3                	mov    %edx,%ebx
 81dbc35:	89 c6                	mov    %eax,%esi
 81dbc37:	8d 45 8c             	lea    -0x74(%ebp),%eax
 81dbc3a:	89 04 24             	mov    %eax,(%esp)
 81dbc3d:	e8 64 f0 f6 ff       	call   814aca6 <_ZNSt6vectorI10Inven_ItemSaIS0_EED1Ev>
 81dbc42:	89 f0                	mov    %esi,%eax
 81dbc44:	89 da                	mov    %ebx,%edx
 81dbc46:	89 04 24             	mov    %eax,(%esp)
 81dbc49:	e8 02 7b 90 00       	call   8ae3750 <_Unwind_Resume>
 81dbc4e:	8d 45 8c             	lea    -0x74(%ebp),%eax
 81dbc51:	89 04 24             	mov    %eax,(%esp)
 81dbc54:	e8 4d f0 f6 ff       	call   814aca6 <_ZNSt6vectorI10Inven_ItemSaIS0_EED1Ev>
 81dbc59:	89 d8                	mov    %ebx,%eax
 81dbc5b:	8d 65 f4             	lea    -0xc(%ebp),%esp
 81dbc5e:	83 c4 00             	add    $0x0,%esp
 81dbc61:	5b                   	pop    %ebx
 81dbc62:	5e                   	pop    %esi
 81dbc63:	5f                   	pop    %edi
 81dbc64:	5d                   	pop    %ebp
 81dbc65:	c3                   	ret

```

```c
// Dispatcher_Select_Item_Grwoth_Power::process @ 0x81db60c

/* Dispatcher_Select_Item_Grwoth_Power::process(CUser*, MSG_BASE&, ParamBase&) */

int __thiscall
Dispatcher_Select_Item_Grwoth_Power::process
          (Dispatcher_Select_Item_Grwoth_Power *this,CUser *param_1,MSG_BASE *param_2,
          ParamBase *param_3)

{
  MSG_BASE MVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  vector<STStackablePackageData,std::allocator<STStackablePackageData>> *pvVar5;
  uint uVar6;
  undefined4 uVar7;
  int *piVar8;
  CDataManager *this_00;
  undefined4 *puVar9;
  undefined4 uVar10;
  char *pcVar11;
  size_t sVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  Inven_Item local_195;
  char local_194;
  int local_193;
  undefined4 local_18e;
  char local_95 [21];
  __normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
  local_80 [4];
  __normal_iterator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>const*,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>
  local_7c [4];
  vector<Inven_Item,std::allocator<Inven_Item>> local_78 [13];
  byte local_6b [3];
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  _Rb_tree_iterator local_5c [4];
  _Rb_tree_const_iterator<std::pair<int_const,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>>
  local_58 [4];
  map<int,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>>>
  local_54 [4];
  __normal_iterator local_50 [4];
  cMyTrace local_4c [16];
  __normal_iterator local_3c [4];
  __normal_iterator local_38 [4];
  int local_34;
  MSG_BASE *local_30;
  ParamBase *local_2c;
  int local_28;
  int local_24;
  int *local_20;
  
  iVar4 = check_error((CUser *)this,(MSG_BASE *)param_1,(ParamBase *)param_2);
  if (iVar4 < 1) {
    if (iVar4 < 0) {
      iVar4 = -1;
    }
    else {
      local_30 = param_2;
      local_2c = param_3;
      local_64 = 0;
      local_34 = iVar4;
      std::
      _Rb_tree_const_iterator<std::pair<int_const,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>>
      ::_Rb_tree_const_iterator
                ((_Rb_tree_const_iterator<std::pair<int_const,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>>
                  *)&local_68);
      CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
      G_CDataManager();
      STGrowthPowerData::get_break_away_section_data((int)local_6b);
      iVar4 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
      local_64 = makeFairPVPEquipmentPackageKey(iVar4,(uint)local_6b[0]);
      G_CDataManager();
      std::
      map<int,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>>>
      ::find((int *)local_5c);
      std::
      _Rb_tree_const_iterator<std::pair<int_const,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>>
      ::_Rb_tree_const_iterator
                ((_Rb_tree_const_iterator<std::pair<int_const,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>>
                  *)&local_60,local_5c);
      local_68 = local_60;
      G_CDataManager();
      std::
      map<int,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>>>
      ::end(local_54);
      std::
      _Rb_tree_const_iterator<std::pair<int_const,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>>
      ::_Rb_tree_const_iterator(local_58,(_Rb_tree_iterator *)local_54);
      cVar2 = std::
              _Rb_tree_const_iterator<std::pair<int_const,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>>
              ::operator==((_Rb_tree_const_iterator<std::pair<int_const,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>>
                            *)&local_68,(_Rb_tree_const_iterator *)local_58);
      if (cVar2 == '\0') {
        local_28 = 0;
        std::vector<Inven_Item,std::allocator<Inven_Item>>::vector(local_78);
        std::
        _Rb_tree_const_iterator<std::pair<int_const,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>>
        ::operator->((_Rb_tree_const_iterator<std::pair<int_const,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>>
                      *)&local_68);
                    /* try { // try from 081db77b to 081dbc23 has its CatchHandler @ 081dbc33 */
        std::
        vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>
        ::begin();
        while( true ) {
          std::
          _Rb_tree_const_iterator<std::pair<int_const,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>>
          ::operator->((_Rb_tree_const_iterator<std::pair<int_const,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>>
                        *)&local_68);
          std::
          vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>
          ::end();
          bVar3 = __gnu_cxx::operator!=(local_7c,local_50);
          if (!bVar3) break;
          pvVar5 = (vector<STStackablePackageData,std::allocator<STStackablePackageData>> *)
                   __gnu_cxx::
                   __normal_iterator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>const*,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>
                   ::operator->(local_7c);
          uVar6 = std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>::size
                            (pvVar5);
          if (uVar6 <= (byte)local_30[local_28 + 0xe]) {
            MVar1 = local_30[local_28 + 0xe];
            pvVar5 = (vector<STStackablePackageData,std::allocator<STStackablePackageData>> *)
                     __gnu_cxx::
                     __normal_iterator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>const*,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>
                     ::operator->(local_7c);
            uVar10 = std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>::
                     size(pvVar5);
            uVar13 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
            uVar14 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
            uVar7 = CUser::get_acc_id(param_1);
            cMyTrace::cMyTrace(local_4c,
                               "virtual int Dispatcher_Select_Item_Grwoth_Power::process(CUser*, MSG_BASE&, ParamBase&)"
                               ,0x4a8b,0);
            cMyTrace::operator()
                      (local_4c,"[GrowthPower](%d)(j:%d)(l:%d)(s:%d)(p:%d)",uVar7,uVar14,uVar13,
                       uVar10,(uint)(byte)MVar1);
            uVar6 = CUser::get_acc_id(param_1);
            iVar4 = LineFunc(0x4a8c,
                             "virtual int Dispatcher_Select_Item_Grwoth_Power::process(CUser*, MSG_BASE&, ParamBase&)"
                             ,0,uVar6);
            goto LAB_081dbc4e;
          }
          if (4 < local_28) {
            uVar6 = CUser::get_acc_id(param_1);
            iVar4 = LineFunc(0x4a8f,
                             "virtual int Dispatcher_Select_Item_Grwoth_Power::process(CUser*, MSG_BASE&, ParamBase&)"
                             ,0,uVar6);
            goto LAB_081dbc4e;
          }
          Inven_Item::Inven_Item(&local_195);
          MVar1 = local_30[local_28 + 0xe];
          pvVar5 = (vector<STStackablePackageData,std::allocator<STStackablePackageData>> *)
                   __gnu_cxx::
                   __normal_iterator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>const*,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>
                   ::operator->(local_7c);
          piVar8 = (int *)std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>
                          ::at(pvVar5,(uint)(byte)MVar1);
          iVar4 = *piVar8;
          local_193 = iVar4;
          this_00 = (CDataManager *)G_CDataManager();
          local_20 = (int *)CDataManager::find_item(this_00,iVar4);
          if (local_20 == (int *)0x0) {
            *(undefined4 *)(local_2c + 4) = 0x11;
            iVar4 = 0;
            goto LAB_081dbc4e;
          }
          (**(code **)(*local_20 + 8))(local_20,&local_195);
          if (local_194 != '\x01') {
            MVar1 = local_30[local_28 + 0xe];
            pvVar5 = (vector<STStackablePackageData,std::allocator<STStackablePackageData>> *)
                     __gnu_cxx::
                     __normal_iterator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>const*,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>
                     ::operator->(local_7c);
            iVar4 = std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>::at
                              (pvVar5,(uint)(byte)MVar1);
            local_18e = *(undefined4 *)(iVar4 + 4);
          }
          std::vector<Inven_Item,std::allocator<Inven_Item>>::push_back(local_78,&local_195);
          local_28 = local_28 + 1;
          __gnu_cxx::
          __normal_iterator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>const*,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>
          ::operator++(local_7c);
        }
        local_24 = 0;
        std::vector<Inven_Item,std::allocator<Inven_Item>>::begin();
        __gnu_cxx::
        __normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>::
        __normal_iterator<Inven_Item*>(local_80,local_3c);
        while( true ) {
          std::vector<Inven_Item,std::allocator<Inven_Item>>::end();
          bVar3 = __gnu_cxx::operator!=(local_80,local_38);
          if (!bVar3) break;
          puVar9 = (undefined4 *)
                   __gnu_cxx::
                   __normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
                   ::operator*(local_80);
          uVar10 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
          local_24 = CInventory::insertItemIntoInventory
                               (uVar10,*puVar9,puVar9[1],puVar9[2],puVar9[3],puVar9[4],puVar9[5],
                                puVar9[6],puVar9[7],puVar9[8],puVar9[9],puVar9[10],puVar9[0xb],
                                puVar9[0xc],puVar9[0xd],puVar9[0xe],*(undefined1 *)(puVar9 + 0xf),8,
                                1,1);
          if (local_24 < 0) {
            pcVar11 = (char *)RDARScriptStringManager::findString
                                        ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                         "game_server_msg_213",(bool *)0x0);
            strncpy(local_95,pcVar11,0x14);
            pcVar11 = (char *)RDARScriptStringManager::findString
                                        ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                         "game_server_msg_214",(bool *)0x0);
            strncpy((char *)&local_195,pcVar11,0xff);
            uVar10 = CUser::GetServerGroup(param_1);
            sVar12 = strlen((char *)&local_195);
            uVar13 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
            uVar14 = __gnu_cxx::
                     __normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
                     ::operator*(local_80);
            WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                      (local_95,uVar14,0,uVar13,&local_195,sVar12,0,uVar10,0,0);
          }
          else {
            CUser::SendUpdateItemList(param_1,1,0,local_24);
          }
          __gnu_cxx::
          __normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>::
          operator++(local_80);
        }
        iVar4 = 0;
LAB_081dbc4e:
        std::vector<Inven_Item,std::allocator<Inven_Item>>::~vector(local_78);
      }
      else {
        iVar4 = 0;
      }
    }
  }
  return iVar4;
}

```

---

## read

```asm
// === 081db4c4 Dispatcher_Select_Item_Grwoth_Power::read  [0x081db4c4-0x81db57f] ===
 81db4c4:	55                   	push   %ebp
 81db4c5:	89 e5                	mov    %esp,%ebp
 81db4c7:	83 ec 28             	sub    $0x28,%esp
 81db4ca:	8b 45 10             	mov    0x10(%ebp),%eax
 81db4cd:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81db4d0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81db4d3:	83 c0 0d             	add    $0xd,%eax
 81db4d6:	89 44 24 04          	mov    %eax,0x4(%esp)
 81db4da:	8b 45 0c             	mov    0xc(%ebp),%eax
 81db4dd:	89 04 24             	mov    %eax,(%esp)
 81db4e0:	e8 8b 1a 3b 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 81db4e5:	83 f0 01             	xor    $0x1,%eax
 81db4e8:	84 c0                	test   %al,%al
 81db4ea:	74 26                	je     81db512 <_ZN35Dispatcher_Select_Item_Grwoth_Power4readER9PacketBufR8MSG_BASE+0x4e>
 81db4ec:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81db4f3:	00 
 81db4f4:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81db4fb:	00 
 81db4fc:	c7 44 24 04 e0 21 bd 	movl   $0x8bd21e0,0x4(%esp)
 81db503:	08 
 81db504:	c7 04 24 55 4a 00 00 	movl   $0x4a55,(%esp)
 81db50b:	e8 c7 53 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81db510:	eb 6b                	jmp    81db57d <_ZN35Dispatcher_Select_Item_Grwoth_Power4readER9PacketBufR8MSG_BASE+0xb9>
 81db512:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 81db519:	eb 49                	jmp    81db564 <_ZN35Dispatcher_Select_Item_Grwoth_Power4readER9PacketBufR8MSG_BASE+0xa0>
 81db51b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81db51e:	03 45 f0             	add    -0x10(%ebp),%eax
 81db521:	83 c0 0e             	add    $0xe,%eax
 81db524:	89 44 24 04          	mov    %eax,0x4(%esp)
 81db528:	8b 45 0c             	mov    0xc(%ebp),%eax
 81db52b:	89 04 24             	mov    %eax,(%esp)
 81db52e:	e8 3d 1a 3b 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 81db533:	83 f0 01             	xor    $0x1,%eax
 81db536:	84 c0                	test   %al,%al
 81db538:	74 26                	je     81db560 <_ZN35Dispatcher_Select_Item_Grwoth_Power4readER9PacketBufR8MSG_BASE+0x9c>
 81db53a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81db541:	00 
 81db542:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81db549:	00 
 81db54a:	c7 44 24 04 e0 21 bd 	movl   $0x8bd21e0,0x4(%esp)
 81db551:	08 
 81db552:	c7 04 24 5a 4a 00 00 	movl   $0x4a5a,(%esp)
 81db559:	e8 79 53 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81db55e:	eb 1d                	jmp    81db57d <_ZN35Dispatcher_Select_Item_Grwoth_Power4readER9PacketBufR8MSG_BASE+0xb9>
 81db560:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 81db564:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81db567:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81db56b:	0f b6 c0             	movzbl %al,%eax
 81db56e:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 81db571:	0f 9f c0             	setg   %al
 81db574:	84 c0                	test   %al,%al
 81db576:	75 a3                	jne    81db51b <_ZN35Dispatcher_Select_Item_Grwoth_Power4readER9PacketBufR8MSG_BASE+0x57>
 81db578:	b8 00 00 00 00       	mov    $0x0,%eax
 81db57d:	c9                   	leave
 81db57e:	c3                   	ret
 81db57f:	90                   	nop

```

```c
// Dispatcher_Select_Item_Grwoth_Power::read @ 0x81db4c4

/* Dispatcher_Select_Item_Grwoth_Power::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_Select_Item_Grwoth_Power::read
          (Dispatcher_Select_Item_Grwoth_Power *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int local_10;
  
  cVar1 = PacketBuf::get_byte(param_1,(uchar *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    for (local_10 = 0; local_10 < (int)(uint)(byte)param_2[0xd]; local_10 = local_10 + 1) {
      cVar1 = PacketBuf::get_byte(param_1,(uchar *)(param_2 + local_10 + 0xe));
      if (cVar1 != '\x01') {
        uVar2 = LineFunc(0x4a5a,
                         "virtual int Dispatcher_Select_Item_Grwoth_Power::read(PacketBuf&, MSG_BASE&)"
                         ,0,0);
        return uVar2;
      }
    }
    uVar2 = 0;
  }
  else {
    uVar2 = LineFunc(0x4a55,
                     "virtual int Dispatcher_Select_Item_Grwoth_Power::read(PacketBuf&, MSG_BASE&)",
                     0,0);
  }
  return uVar2;
}

```

---

## send

```asm
// === 081dbc66 Dispatcher_Select_Item_Grwoth_Power::send  [0x081dbc66-0x81dbccd] ===
 81dbc66:	55                   	push   %ebp
 81dbc67:	89 e5                	mov    %esp,%ebp
 81dbc69:	83 ec 28             	sub    $0x28,%esp
 81dbc6c:	8b 45 10             	mov    0x10(%ebp),%eax
 81dbc6f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81dbc72:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81dbc75:	8b 40 04             	mov    0x4(%eax),%eax
 81dbc78:	85 c0                	test   %eax,%eax
 81dbc7a:	75 2f                	jne    81dbcab <_ZN35Dispatcher_Select_Item_Grwoth_Power4sendEP5CUserR9ParamBase+0x45>
 81dbc7c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dbc7f:	89 04 24             	mov    %eax,(%esp)
 81dbc82:	e8 31 e6 ef ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 81dbc87:	8b 55 0c             	mov    0xc(%ebp),%edx
 81dbc8a:	89 44 24 04          	mov    %eax,0x4(%esp)
 81dbc8e:	89 14 24             	mov    %edx,(%esp)
 81dbc91:	e8 8e 3e 05 00       	call   822fb24 <_ZN15CUserCharacInfo23set_growth_power_rewardEi>
 81dbc96:	c7 44 24 04 b0 01 00 	movl   $0x1b0,0x4(%esp)
 81dbc9d:	00 
 81dbc9e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dbca1:	89 04 24             	mov    %eax,(%esp)
 81dbca4:	e8 f7 01 4a 00       	call   867bea0 <_ZN5CUser15SendCmdOkPacketE14ENUM_CMDPACKET>
 81dbca9:	eb 20                	jmp    81dbccb <_ZN35Dispatcher_Select_Item_Grwoth_Power4sendEP5CUserR9ParamBase+0x65>
 81dbcab:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81dbcae:	8b 40 04             	mov    0x4(%eax),%eax
 81dbcb1:	0f b6 c0             	movzbl %al,%eax
 81dbcb4:	89 44 24 08          	mov    %eax,0x8(%esp)
 81dbcb8:	c7 44 24 04 b0 01 00 	movl   $0x1b0,0x4(%esp)
 81dbcbf:	00 
 81dbcc0:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dbcc3:	89 04 24             	mov    %eax,(%esp)
 81dbcc6:	e8 77 02 4a 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81dbccb:	c9                   	leave
 81dbccc:	c3                   	ret
 81dbccd:	90                   	nop

```

```c
// Dispatcher_Select_Item_Grwoth_Power::send @ 0x81dbc66

/* Dispatcher_Select_Item_Grwoth_Power::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_Select_Item_Grwoth_Power::send
          (Dispatcher_Select_Item_Grwoth_Power *this,CUser *param_1,ParamBase *param_2)

{
  int iVar1;
  
  if (*(int *)(param_2 + 4) == 0) {
    iVar1 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
    CUserCharacInfo::set_growth_power_reward((CUserCharacInfo *)param_1,iVar1);
    CUser::SendCmdOkPacket(param_1,0x1b0);
  }
  else {
    CUser::SendCmdErrorPacket(param_1,0x1b0,*(uint *)(param_2 + 4) & 0xff);
  }
  return;
}

```

