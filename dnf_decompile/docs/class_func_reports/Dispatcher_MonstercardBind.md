# Dispatcher_MonstercardBind

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 8

---

## _bind_process

```asm
// === 081d85fc Dispatcher_MonstercardBind::_bind_process  [0x081d85fc-0x81d88af] ===
 81d85fc:	55                   	push   %ebp
 81d85fd:	89 e5                	mov    %esp,%ebp
 81d85ff:	53                   	push   %ebx
 81d8600:	83 ec 74             	sub    $0x74,%esp
 81d8603:	e8 93 3b ef ff       	call   80cc19b <_Z14G_CDataManagerv>
 81d8608:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d860f:	00 
 81d8610:	89 04 24             	mov    %eax,(%esp)
 81d8613:	e8 da 2f 05 00       	call   822b5f2 <_ZN12CDataManager18GetExpertJobScriptEi>
 81d8618:	89 45 dc             	mov    %eax,-0x24(%ebp)
 81d861b:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 81d8622:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d8625:	85 c0                	test   %eax,%eax
 81d8627:	74 07                	je     81d8630 <_ZN26Dispatcher_MonstercardBind13_bind_processENS_27ENUM_MONSTER_CARD_BIND_TYPEE11ENUM_RARITYRSt6vectorISt4pairIiiESaIS4_EE+0x34>
 81d8629:	83 f8 01             	cmp    $0x1,%eax
 81d862c:	74 12                	je     81d8640 <_ZN26Dispatcher_MonstercardBind13_bind_processENS_27ENUM_MONSTER_CARD_BIND_TYPEE11ENUM_RARITYRSt6vectorISt4pairIiiESaIS4_EE+0x44>
 81d862e:	eb 20                	jmp    81d8650 <_ZN26Dispatcher_MonstercardBind13_bind_processENS_27ENUM_MONSTER_CARD_BIND_TYPEE11ENUM_RARITYRSt6vectorISt4pairIiiESaIS4_EE+0x54>
 81d8630:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81d8633:	89 04 24             	mov    %eax,(%esp)
 81d8636:	e8 1d 2d 05 00       	call   822b358 <_ZN17STExpertJobScript18GetSpecialBindInfoEv>
 81d863b:	89 45 e0             	mov    %eax,-0x20(%ebp)
 81d863e:	eb 25                	jmp    81d8665 <_ZN26Dispatcher_MonstercardBind13_bind_processENS_27ENUM_MONSTER_CARD_BIND_TYPEE11ENUM_RARITYRSt6vectorISt4pairIiiESaIS4_EE+0x69>
 81d8640:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81d8643:	89 04 24             	mov    %eax,(%esp)
 81d8646:	e8 1b 2d 05 00       	call   822b366 <_ZN17STExpertJobScript17GetCommonBindInfoEv>
 81d864b:	89 45 e0             	mov    %eax,-0x20(%ebp)
 81d864e:	eb 15                	jmp    81d8665 <_ZN26Dispatcher_MonstercardBind13_bind_processENS_27ENUM_MONSTER_CARD_BIND_TYPEE11ENUM_RARITYRSt6vectorISt4pairIiiESaIS4_EE+0x69>
 81d8650:	8b 45 14             	mov    0x14(%ebp),%eax
 81d8653:	89 04 24             	mov    %eax,(%esp)
 81d8656:	e8 e7 1c fa ff       	call   817a342 <_ZNSt6vectorISt4pairIiiESaIS1_EE5clearEv>
 81d865b:	b8 00 00 00 00       	mov    $0x0,%eax
 81d8660:	e9 46 02 00 00       	jmp    81d88ab <_ZN26Dispatcher_MonstercardBind13_bind_processENS_27ENUM_MONSTER_CARD_BIND_TYPEE11ENUM_RARITYRSt6vectorISt4pairIiiESaIS4_EE+0x2af>
 81d8665:	8b 55 10             	mov    0x10(%ebp),%edx
 81d8668:	89 d0                	mov    %edx,%eax
 81d866a:	01 c0                	add    %eax,%eax
 81d866c:	01 d0                	add    %edx,%eax
 81d866e:	c1 e0 02             	shl    $0x2,%eax
 81d8671:	83 c0 10             	add    $0x10,%eax
 81d8674:	03 45 e0             	add    -0x20(%ebp),%eax
 81d8677:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81d867a:	8b 55 10             	mov    0x10(%ebp),%edx
 81d867d:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81d8680:	8b 04 90             	mov    (%eax,%edx,4),%eax
 81d8683:	89 45 e8             	mov    %eax,-0x18(%ebp)
 81d8686:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81d8689:	89 04 24             	mov    %eax,(%esp)
 81d868c:	e8 25 ea 05 00       	call   82370b6 <_ZNKSt6vectorIN17STExpertJobScript23stMonsterCardBindResultESaIS1_EE4sizeEv>
 81d8691:	85 c0                	test   %eax,%eax
 81d8693:	0f 94 c0             	sete   %al
 81d8696:	84 c0                	test   %al,%al
 81d8698:	74 51                	je     81d86eb <_ZN26Dispatcher_MonstercardBind13_bind_processENS_27ENUM_MONSTER_CARD_BIND_TYPEE11ENUM_RARITYRSt6vectorISt4pairIiiESaIS4_EE+0xef>
 81d869a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81d869d:	89 04 24             	mov    %eax,(%esp)
 81d86a0:	e8 11 ea 05 00       	call   82370b6 <_ZNKSt6vectorIN17STExpertJobScript23stMonsterCardBindResultESaIS1_EE4sizeEv>
 81d86a5:	89 c3                	mov    %eax,%ebx
 81d86a7:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 81d86ae:	00 
 81d86af:	c7 44 24 08 b1 44 00 	movl   $0x44b1,0x8(%esp)
 81d86b6:	00 
 81d86b7:	c7 44 24 04 e0 25 bd 	movl   $0x8bd25e0,0x4(%esp)
 81d86be:	08 
 81d86bf:	8d 45 9c             	lea    -0x64(%ebp),%eax
 81d86c2:	89 04 24             	mov    %eax,(%esp)
 81d86c5:	e8 4e 70 37 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81d86ca:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81d86ce:	c7 44 24 04 48 19 bc 	movl   $0x8bc1948,0x4(%esp)
 81d86d5:	08 
 81d86d6:	8d 45 9c             	lea    -0x64(%ebp),%eax
 81d86d9:	89 04 24             	mov    %eax,(%esp)
 81d86dc:	e8 a7 70 37 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81d86e1:	b8 00 00 00 00       	mov    $0x0,%eax
 81d86e6:	e9 c0 01 00 00       	jmp    81d88ab <_ZN26Dispatcher_MonstercardBind13_bind_processENS_27ENUM_MONSTER_CARD_BIND_TYPEE11ENUM_RARITYRSt6vectorISt4pairIiiESaIS4_EE+0x2af>
 81d86eb:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81d86ee:	89 04 24             	mov    %eax,(%esp)
 81d86f1:	e8 c0 e9 05 00       	call   82370b6 <_ZNKSt6vectorIN17STExpertJobScript23stMonsterCardBindResultESaIS1_EE4sizeEv>
 81d86f6:	85 c0                	test   %eax,%eax
 81d86f8:	74 0d                	je     81d8707 <_ZN26Dispatcher_MonstercardBind13_bind_processENS_27ENUM_MONSTER_CARD_BIND_TYPEE11ENUM_RARITYRSt6vectorISt4pairIiiESaIS4_EE+0x10b>
 81d86fa:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 81d86fe:	75 07                	jne    81d8707 <_ZN26Dispatcher_MonstercardBind13_bind_processENS_27ENUM_MONSTER_CARD_BIND_TYPEE11ENUM_RARITYRSt6vectorISt4pairIiiESaIS4_EE+0x10b>
 81d8700:	b8 01 00 00 00       	mov    $0x1,%eax
 81d8705:	eb 05                	jmp    81d870c <_ZN26Dispatcher_MonstercardBind13_bind_processENS_27ENUM_MONSTER_CARD_BIND_TYPEE11ENUM_RARITYRSt6vectorISt4pairIiiESaIS4_EE+0x110>
 81d8707:	b8 00 00 00 00       	mov    $0x0,%eax
 81d870c:	84 c0                	test   %al,%al
 81d870e:	74 58                	je     81d8768 <_ZN26Dispatcher_MonstercardBind13_bind_processENS_27ENUM_MONSTER_CARD_BIND_TYPEE11ENUM_RARITYRSt6vectorISt4pairIiiESaIS4_EE+0x16c>
 81d8710:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81d8713:	89 04 24             	mov    %eax,(%esp)
 81d8716:	e8 9b e9 05 00       	call   82370b6 <_ZNKSt6vectorIN17STExpertJobScript23stMonsterCardBindResultESaIS1_EE4sizeEv>
 81d871b:	89 c3                	mov    %eax,%ebx
 81d871d:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 81d8724:	00 
 81d8725:	c7 44 24 08 b6 44 00 	movl   $0x44b6,0x8(%esp)
 81d872c:	00 
 81d872d:	c7 44 24 04 e0 25 bd 	movl   $0x8bd25e0,0x4(%esp)
 81d8734:	08 
 81d8735:	8d 45 ac             	lea    -0x54(%ebp),%eax
 81d8738:	89 04 24             	mov    %eax,(%esp)
 81d873b:	e8 d8 6f 37 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81d8740:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81d8743:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81d8747:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81d874b:	c7 44 24 04 6c 19 bc 	movl   $0x8bc196c,0x4(%esp)
 81d8752:	08 
 81d8753:	8d 45 ac             	lea    -0x54(%ebp),%eax
 81d8756:	89 04 24             	mov    %eax,(%esp)
 81d8759:	e8 2a 70 37 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81d875e:	b8 00 00 00 00       	mov    $0x0,%eax
 81d8763:	e9 43 01 00 00       	jmp    81d88ab <_ZN26Dispatcher_MonstercardBind13_bind_processENS_27ENUM_MONSTER_CARD_BIND_TYPEE11ENUM_RARITYRSt6vectorISt4pairIiiESaIS4_EE+0x2af>
 81d8768:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81d876b:	83 e8 01             	sub    $0x1,%eax
 81d876e:	89 45 bc             	mov    %eax,-0x44(%ebp)
 81d8771:	8b 45 08             	mov    0x8(%ebp),%eax
 81d8774:	8b 40 04             	mov    0x4(%eax),%eax
 81d8777:	8d 55 bc             	lea    -0x44(%ebp),%edx
 81d877a:	89 54 24 04          	mov    %edx,0x4(%esp)
 81d877e:	89 04 24             	mov    %eax,(%esp)
 81d8781:	e8 38 33 ef ff       	call   80cbabe <_ZN7CMTRand7randIntERKm>
 81d8786:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81d8789:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 81d878d:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 81d8794:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 81d879b:	e9 a1 00 00 00       	jmp    81d8841 <_ZN26Dispatcher_MonstercardBind13_bind_processENS_27ENUM_MONSTER_CARD_BIND_TYPEE11ENUM_RARITYRSt6vectorISt4pairIiiESaIS4_EE+0x245>
 81d87a0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d87a3:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 81d87a6:	7d 28                	jge    81d87d0 <_ZN26Dispatcher_MonstercardBind13_bind_processENS_27ENUM_MONSTER_CARD_BIND_TYPEE11ENUM_RARITYRSt6vectorISt4pairIiiESaIS4_EE+0x1d4>
 81d87a8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d87ab:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d87af:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81d87b2:	89 04 24             	mov    %eax,(%esp)
 81d87b5:	e8 18 e9 05 00       	call   82370d2 <_ZNKSt6vectorIN17STExpertJobScript23stMonsterCardBindResultESaIS1_EEixEj>
 81d87ba:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 81d87be:	0f b7 c0             	movzwl %ax,%eax
 81d87c1:	03 45 f0             	add    -0x10(%ebp),%eax
 81d87c4:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 81d87c7:	7c 07                	jl     81d87d0 <_ZN26Dispatcher_MonstercardBind13_bind_processENS_27ENUM_MONSTER_CARD_BIND_TYPEE11ENUM_RARITYRSt6vectorISt4pairIiiESaIS4_EE+0x1d4>
 81d87c9:	b8 01 00 00 00       	mov    $0x1,%eax
 81d87ce:	eb 05                	jmp    81d87d5 <_ZN26Dispatcher_MonstercardBind13_bind_processENS_27ENUM_MONSTER_CARD_BIND_TYPEE11ENUM_RARITYRSt6vectorISt4pairIiiESaIS4_EE+0x1d9>
 81d87d0:	b8 00 00 00 00       	mov    $0x0,%eax
 81d87d5:	84 c0                	test   %al,%al
 81d87d7:	74 48                	je     81d8821 <_ZN26Dispatcher_MonstercardBind13_bind_processENS_27ENUM_MONSTER_CARD_BIND_TYPEE11ENUM_RARITYRSt6vectorISt4pairIiiESaIS4_EE+0x225>
 81d87d9:	c7 45 c8 01 00 00 00 	movl   $0x1,-0x38(%ebp)
 81d87e0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d87e3:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d87e7:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81d87ea:	89 04 24             	mov    %eax,(%esp)
 81d87ed:	e8 e0 e8 05 00       	call   82370d2 <_ZNKSt6vectorIN17STExpertJobScript23stMonsterCardBindResultESaIS1_EEixEj>
 81d87f2:	89 c2                	mov    %eax,%edx
 81d87f4:	8d 45 c0             	lea    -0x40(%ebp),%eax
 81d87f7:	8d 4d c8             	lea    -0x38(%ebp),%ecx
 81d87fa:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 81d87fe:	89 54 24 04          	mov    %edx,0x4(%esp)
 81d8802:	89 04 24             	mov    %eax,(%esp)
 81d8805:	e8 9c d3 f5 ff       	call   8135ba6 <_ZSt9make_pairIRKiiESt4pairINSt17__decay_and_stripIT_E6__typeENS3_IT0_E6__typeEEOS4_OS7_>
 81d880a:	83 ec 04             	sub    $0x4,%esp
 81d880d:	8d 45 c0             	lea    -0x40(%ebp),%eax
 81d8810:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d8814:	8b 45 14             	mov    0x14(%ebp),%eax
 81d8817:	89 04 24             	mov    %eax,(%esp)
 81d881a:	e8 e7 4d f0 ff       	call   80dd606 <_ZNSt6vectorISt4pairIiiESaIS1_EE9push_backEOS1_>
 81d881f:	eb 39                	jmp    81d885a <_ZN26Dispatcher_MonstercardBind13_bind_processENS_27ENUM_MONSTER_CARD_BIND_TYPEE11ENUM_RARITYRSt6vectorISt4pairIiiESaIS4_EE+0x25e>
 81d8821:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d8824:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d8828:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81d882b:	89 04 24             	mov    %eax,(%esp)
 81d882e:	e8 9f e8 05 00       	call   82370d2 <_ZNKSt6vectorIN17STExpertJobScript23stMonsterCardBindResultESaIS1_EEixEj>
 81d8833:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 81d8837:	0f b7 c0             	movzwl %ax,%eax
 81d883a:	01 45 f0             	add    %eax,-0x10(%ebp)
 81d883d:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 81d8841:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81d8844:	89 04 24             	mov    %eax,(%esp)
 81d8847:	e8 6a e8 05 00       	call   82370b6 <_ZNKSt6vectorIN17STExpertJobScript23stMonsterCardBindResultESaIS1_EE4sizeEv>
 81d884c:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 81d884f:	0f 97 c0             	seta   %al
 81d8852:	84 c0                	test   %al,%al
 81d8854:	0f 85 46 ff ff ff    	jne    81d87a0 <_ZN26Dispatcher_MonstercardBind13_bind_processENS_27ENUM_MONSTER_CARD_BIND_TYPEE11ENUM_RARITYRSt6vectorISt4pairIiiESaIS4_EE+0x1a4>
 81d885a:	8b 45 14             	mov    0x14(%ebp),%eax
 81d885d:	89 04 24             	mov    %eax,(%esp)
 81d8860:	e8 35 89 f3 ff       	call   811119a <_ZNKSt6vectorISt4pairIiiESaIS1_EE5emptyEv>
 81d8865:	84 c0                	test   %al,%al
 81d8867:	74 3d                	je     81d88a6 <_ZN26Dispatcher_MonstercardBind13_bind_processENS_27ENUM_MONSTER_CARD_BIND_TYPEE11ENUM_RARITYRSt6vectorISt4pairIiiESaIS4_EE+0x2aa>
 81d8869:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 81d8870:	00 
 81d8871:	c7 44 24 08 ca 44 00 	movl   $0x44ca,0x8(%esp)
 81d8878:	00 
 81d8879:	c7 44 24 04 e0 25 bd 	movl   $0x8bd25e0,0x4(%esp)
 81d8880:	08 
 81d8881:	8d 45 cc             	lea    -0x34(%ebp),%eax
 81d8884:	89 04 24             	mov    %eax,(%esp)
 81d8887:	e8 8c 6e 37 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81d888c:	c7 44 24 04 98 19 bc 	movl   $0x8bc1998,0x4(%esp)
 81d8893:	08 
 81d8894:	8d 45 cc             	lea    -0x34(%ebp),%eax
 81d8897:	89 04 24             	mov    %eax,(%esp)
 81d889a:	e8 e9 6e 37 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81d889f:	b8 00 00 00 00       	mov    $0x0,%eax
 81d88a4:	eb 05                	jmp    81d88ab <_ZN26Dispatcher_MonstercardBind13_bind_processENS_27ENUM_MONSTER_CARD_BIND_TYPEE11ENUM_RARITYRSt6vectorISt4pairIiiESaIS4_EE+0x2af>
 81d88a6:	b8 01 00 00 00       	mov    $0x1,%eax
 81d88ab:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 81d88ae:	c9                   	leave
 81d88af:	c3                   	ret

```

```c
// Dispatcher_MonstercardBind::_bind_process @ 0x81d85fc

/* Dispatcher_MonstercardBind::_bind_process(Dispatcher_MonstercardBind::ENUM_MONSTER_CARD_BIND_TYPE,
   ENUM_RARITY, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&) */

undefined4 __thiscall
Dispatcher_MonstercardBind::_bind_process
          (Dispatcher_MonstercardBind *this,int param_2,int param_3,
          vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  cMyTrace local_68 [16];
  cMyTrace local_58 [16];
  ulong local_48;
  int local_44 [2];
  undefined4 local_3c;
  cMyTrace local_38 [16];
  STExpertJobScript *local_28;
  int local_24;
  vector<STExpertJobScript::stMonsterCardBindResult,std::allocator<STExpertJobScript::stMonsterCardBindResult>>
  *local_20;
  int local_1c;
  int local_18;
  int local_14;
  uint local_10;
  
  iVar3 = G_CDataManager();
  local_28 = (STExpertJobScript *)CDataManager::GetExpertJobScript(iVar3);
  local_24 = 0;
  if (param_2 == 0) {
    local_24 = STExpertJobScript::GetSpecialBindInfo(local_28);
  }
  else {
    if (param_2 != 1) {
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::clear(param_4);
      return 0;
    }
    local_24 = STExpertJobScript::GetCommonBindInfo(local_28);
  }
  local_20 = (vector<STExpertJobScript::stMonsterCardBindResult,std::allocator<STExpertJobScript::stMonsterCardBindResult>>
              *)(param_3 * 0xc + 0x10 + local_24);
  local_1c = *(int *)(local_24 + param_3 * 4);
  iVar3 = std::
          vector<STExpertJobScript::stMonsterCardBindResult,std::allocator<STExpertJobScript::stMonsterCardBindResult>>
          ::size(local_20);
  if (iVar3 == 0) {
    uVar4 = std::
            vector<STExpertJobScript::stMonsterCardBindResult,std::allocator<STExpertJobScript::stMonsterCardBindResult>>
            ::size(local_20);
    cMyTrace::cMyTrace(local_68,
                       "bool Dispatcher_MonstercardBind::_bind_process(Dispatcher_MonstercardBind::ENUM_MONSTER_CARD_BIND_TYPE, ENUM_RARITY, IntPairVector&)"
                       ,0x44b1,5);
    cMyTrace::operator()(local_68,"MonstercardBind Error : size(%d)",uVar4);
    uVar4 = 0;
  }
  else {
    iVar3 = std::
            vector<STExpertJobScript::stMonsterCardBindResult,std::allocator<STExpertJobScript::stMonsterCardBindResult>>
            ::size(local_20);
    if ((iVar3 == 0) || (local_1c != 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar4 = std::
              vector<STExpertJobScript::stMonsterCardBindResult,std::allocator<STExpertJobScript::stMonsterCardBindResult>>
              ::size(local_20);
      cMyTrace::cMyTrace(local_58,
                         "bool Dispatcher_MonstercardBind::_bind_process(Dispatcher_MonstercardBind::ENUM_MONSTER_CARD_BIND_TYPE, ENUM_RARITY, IntPairVector&)"
                         ,0x44b6,5);
      cMyTrace::operator()(local_58,"MonstercardBind Error : size(%d), sum(%d)",uVar4,local_1c);
      uVar4 = 0;
    }
    else {
      local_48 = local_1c - 1;
      local_18 = CMTRand::randInt(*(CMTRand **)(this + 4),&local_48);
      local_18 = local_18 + 1;
      local_14 = 0;
      local_10 = 0;
      while (uVar6 = std::
                     vector<STExpertJobScript::stMonsterCardBindResult,std::allocator<STExpertJobScript::stMonsterCardBindResult>>
                     ::size(local_20), local_10 < uVar6) {
        if ((local_14 < local_18) &&
           (iVar3 = std::
                    vector<STExpertJobScript::stMonsterCardBindResult,std::allocator<STExpertJobScript::stMonsterCardBindResult>>
                    ::operator[](local_20,local_10),
           local_18 <= (int)((uint)*(ushort *)(iVar3 + 4) + local_14))) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (bVar1) {
          local_3c = 1;
          piVar5 = (int *)std::
                          vector<STExpertJobScript::stMonsterCardBindResult,std::allocator<STExpertJobScript::stMonsterCardBindResult>>
                          ::operator[](local_20,local_10);
          std::make_pair<int_const&,int>(local_44,piVar5);
          std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                    (param_4,(pair *)local_44);
          break;
        }
        iVar3 = std::
                vector<STExpertJobScript::stMonsterCardBindResult,std::allocator<STExpertJobScript::stMonsterCardBindResult>>
                ::operator[](local_20,local_10);
        local_14 = local_14 + (uint)*(ushort *)(iVar3 + 4);
        local_10 = local_10 + 1;
      }
      cVar2 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::empty();
      if (cVar2 == '\0') {
        uVar4 = 1;
      }
      else {
        cMyTrace::cMyTrace(local_38,
                           "bool Dispatcher_MonstercardBind::_bind_process(Dispatcher_MonstercardBind::ENUM_MONSTER_CARD_BIND_TYPE, ENUM_RARITY, IntPairVector&)"
                           ,0x44ca,5);
        cMyTrace::operator()
                  (local_38,"Dispatcher_MonstercardBind::_bind_process ERROR : result is empty");
        uVar4 = 0;
      }
    }
  }
  return uVar4;
}

```

---

## calcurate_rarity

```asm
// === 081d842e Dispatcher_MonstercardBind::calcurate_rarity  [0x081d842e-0x81d849f] ===
 81d842e:	55                   	push   %ebp
 81d842f:	89 e5                	mov    %esp,%ebp
 81d8431:	83 ec 38             	sub    $0x38,%esp
 81d8434:	8b 45 10             	mov    0x10(%ebp),%eax
 81d8437:	66 89 45 e4          	mov    %ax,-0x1c(%ebp)
 81d843b:	c7 45 f4 10 27 00 00 	movl   $0x2710,-0xc(%ebp)
 81d8442:	8b 45 08             	mov    0x8(%ebp),%eax
 81d8445:	8b 40 04             	mov    0x4(%eax),%eax
 81d8448:	8d 55 f4             	lea    -0xc(%ebp),%edx
 81d844b:	89 54 24 04          	mov    %edx,0x4(%esp)
 81d844f:	89 04 24             	mov    %eax,(%esp)
 81d8452:	e8 67 36 ef ff       	call   80cbabe <_ZN7CMTRand7randIntERKm>
 81d8457:	0f b7 55 e4          	movzwl -0x1c(%ebp),%edx
 81d845b:	39 d0                	cmp    %edx,%eax
 81d845d:	0f 92 c0             	setb   %al
 81d8460:	84 c0                	test   %al,%al
 81d8462:	74 36                	je     81d849a <_ZN26Dispatcher_MonstercardBind16calcurate_rarityE11ENUM_RARITYt+0x6c>
 81d8464:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d8467:	83 f8 01             	cmp    $0x1,%eax
 81d846a:	74 19                	je     81d8485 <_ZN26Dispatcher_MonstercardBind16calcurate_rarityE11ENUM_RARITYt+0x57>
 81d846c:	83 f8 01             	cmp    $0x1,%eax
 81d846f:	7f 06                	jg     81d8477 <_ZN26Dispatcher_MonstercardBind16calcurate_rarityE11ENUM_RARITYt+0x49>
 81d8471:	85 c0                	test   %eax,%eax
 81d8473:	74 09                	je     81d847e <_ZN26Dispatcher_MonstercardBind16calcurate_rarityE11ENUM_RARITYt+0x50>
 81d8475:	eb 1c                	jmp    81d8493 <_ZN26Dispatcher_MonstercardBind16calcurate_rarityE11ENUM_RARITYt+0x65>
 81d8477:	83 f8 03             	cmp    $0x3,%eax
 81d847a:	7f 17                	jg     81d8493 <_ZN26Dispatcher_MonstercardBind16calcurate_rarityE11ENUM_RARITYt+0x65>
 81d847c:	eb 0e                	jmp    81d848c <_ZN26Dispatcher_MonstercardBind16calcurate_rarityE11ENUM_RARITYt+0x5e>
 81d847e:	b8 01 00 00 00       	mov    $0x1,%eax
 81d8483:	eb 18                	jmp    81d849d <_ZN26Dispatcher_MonstercardBind16calcurate_rarityE11ENUM_RARITYt+0x6f>
 81d8485:	b8 02 00 00 00       	mov    $0x2,%eax
 81d848a:	eb 11                	jmp    81d849d <_ZN26Dispatcher_MonstercardBind16calcurate_rarityE11ENUM_RARITYt+0x6f>
 81d848c:	b8 03 00 00 00       	mov    $0x3,%eax
 81d8491:	eb 0a                	jmp    81d849d <_ZN26Dispatcher_MonstercardBind16calcurate_rarityE11ENUM_RARITYt+0x6f>
 81d8493:	b8 00 00 00 00       	mov    $0x0,%eax
 81d8498:	eb 03                	jmp    81d849d <_ZN26Dispatcher_MonstercardBind16calcurate_rarityE11ENUM_RARITYt+0x6f>
 81d849a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d849d:	c9                   	leave
 81d849e:	c3                   	ret
 81d849f:	90                   	nop

```

```c
// Dispatcher_MonstercardBind::calcurate_rarity @ 0x81d842e

/* Dispatcher_MonstercardBind::calcurate_rarity(ENUM_RARITY, unsigned short) */

int __thiscall
Dispatcher_MonstercardBind::calcurate_rarity
          (Dispatcher_MonstercardBind *this,int param_2,uint param_3)

{
  uint uVar1;
  ulong local_10 [3];
  
  local_10[0] = 10000;
  uVar1 = CMTRand::randInt(*(CMTRand **)(this + 4),local_10);
  if (uVar1 < (param_3 & 0xffff)) {
    if (param_2 == 1) {
      param_2 = 2;
    }
    else {
      if (param_2 < 2) {
        if (param_2 == 0) {
          return 1;
        }
      }
      else if (param_2 < 4) {
        return 3;
      }
      param_2 = 0;
    }
  }
  return param_2;
}

```

---

## check_error

```asm
// === 081d8de2 Dispatcher_MonstercardBind::check_error  [0x081d8de2-0x81d9147] ===
 81d8de2:	55                   	push   %ebp
 81d8de3:	89 e5                	mov    %esp,%ebp
 81d8de5:	53                   	push   %ebx
 81d8de6:	81 ec f4 00 00 00    	sub    $0xf4,%esp
 81d8dec:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81d8df0:	75 0a                	jne    81d8dfc <_ZN26Dispatcher_MonstercardBind11check_errorEP5CUserR8MSG_BASE+0x1a>
 81d8df2:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81d8df7:	e9 46 03 00 00       	jmp    81d9142 <_ZN26Dispatcher_MonstercardBind11check_errorEP5CUserR8MSG_BASE+0x360>
 81d8dfc:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d8dff:	89 04 24             	mov    %eax,(%esp)
 81d8e02:	e8 85 15 f0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81d8e07:	83 f8 02             	cmp    $0x2,%eax
 81d8e0a:	0f 9e c0             	setle  %al
 81d8e0d:	84 c0                	test   %al,%al
 81d8e0f:	74 0a                	je     81d8e1b <_ZN26Dispatcher_MonstercardBind11check_errorEP5CUserR8MSG_BASE+0x39>
 81d8e11:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81d8e16:	e9 27 03 00 00       	jmp    81d9142 <_ZN26Dispatcher_MonstercardBind11check_errorEP5CUserR8MSG_BASE+0x360>
 81d8e1b:	8b 45 10             	mov    0x10(%ebp),%eax
 81d8e1e:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81d8e21:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81d8e24:	0f b7 40 0d          	movzwl 0xd(%eax),%eax
 81d8e28:	0f bf d8             	movswl %ax,%ebx
 81d8e2b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d8e2e:	89 04 24             	mov    %eax,(%esp)
 81d8e31:	e8 48 14 f0 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 81d8e36:	8d 55 a7             	lea    -0x59(%ebp),%edx
 81d8e39:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 81d8e3d:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81d8e44:	00 
 81d8e45:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d8e49:	89 14 24             	mov    %edx,(%esp)
 81d8e4c:	e8 c7 2a 32 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 81d8e51:	83 ec 04             	sub    $0x4,%esp
 81d8e54:	8b 45 a9             	mov    -0x57(%ebp),%eax
 81d8e57:	89 c3                	mov    %eax,%ebx
 81d8e59:	e8 3d 33 ef ff       	call   80cc19b <_Z14G_CDataManagerv>
 81d8e5e:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81d8e62:	89 04 24             	mov    %eax,(%esp)
 81d8e65:	e8 c8 6b 18 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 81d8e6a:	89 45 e8             	mov    %eax,-0x18(%ebp)
 81d8e6d:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 81d8e71:	75 0a                	jne    81d8e7d <_ZN26Dispatcher_MonstercardBind11check_errorEP5CUserR8MSG_BASE+0x9b>
 81d8e73:	b8 11 00 00 00       	mov    $0x11,%eax
 81d8e78:	e9 c5 02 00 00       	jmp    81d9142 <_ZN26Dispatcher_MonstercardBind11check_errorEP5CUserR8MSG_BASE+0x360>
 81d8e7d:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81d8e80:	89 04 24             	mov    %eax,(%esp)
 81d8e83:	e8 72 84 f1 ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 81d8e88:	83 f0 01             	xor    $0x1,%eax
 81d8e8b:	84 c0                	test   %al,%al
 81d8e8d:	74 0a                	je     81d8e99 <_ZN26Dispatcher_MonstercardBind11check_errorEP5CUserR8MSG_BASE+0xb7>
 81d8e8f:	b8 11 00 00 00       	mov    $0x11,%eax
 81d8e94:	e9 a9 02 00 00       	jmp    81d9142 <_ZN26Dispatcher_MonstercardBind11check_errorEP5CUserR8MSG_BASE+0x360>
 81d8e99:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81d8e9c:	8b 80 30 03 00 00    	mov    0x330(%eax),%eax
 81d8ea2:	83 f8 ff             	cmp    $0xffffffff,%eax
 81d8ea5:	75 0a                	jne    81d8eb1 <_ZN26Dispatcher_MonstercardBind11check_errorEP5CUserR8MSG_BASE+0xcf>
 81d8ea7:	b8 11 00 00 00       	mov    $0x11,%eax
 81d8eac:	e9 91 02 00 00       	jmp    81d9142 <_ZN26Dispatcher_MonstercardBind11check_errorEP5CUserR8MSG_BASE+0x360>
 81d8eb1:	8b 45 ae             	mov    -0x52(%ebp),%eax
 81d8eb4:	85 c0                	test   %eax,%eax
 81d8eb6:	7f 0a                	jg     81d8ec2 <_ZN26Dispatcher_MonstercardBind11check_errorEP5CUserR8MSG_BASE+0xe0>
 81d8eb8:	b8 16 00 00 00       	mov    $0x16,%eax
 81d8ebd:	e9 80 02 00 00       	jmp    81d9142 <_ZN26Dispatcher_MonstercardBind11check_errorEP5CUserR8MSG_BASE+0x360>
 81d8ec2:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81d8ec5:	0f b7 40 0f          	movzwl 0xf(%eax),%eax
 81d8ec9:	0f bf d8             	movswl %ax,%ebx
 81d8ecc:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d8ecf:	89 04 24             	mov    %eax,(%esp)
 81d8ed2:	e8 a7 13 f0 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 81d8ed7:	8d 95 6a ff ff ff    	lea    -0x96(%ebp),%edx
 81d8edd:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 81d8ee1:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81d8ee8:	00 
 81d8ee9:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d8eed:	89 14 24             	mov    %edx,(%esp)
 81d8ef0:	e8 23 2a 32 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 81d8ef5:	83 ec 04             	sub    $0x4,%esp
 81d8ef8:	8b 85 6c ff ff ff    	mov    -0x94(%ebp),%eax
 81d8efe:	89 c3                	mov    %eax,%ebx
 81d8f00:	e8 96 32 ef ff       	call   80cc19b <_Z14G_CDataManagerv>
 81d8f05:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81d8f09:	89 04 24             	mov    %eax,(%esp)
 81d8f0c:	e8 21 6b 18 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 81d8f11:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81d8f14:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 81d8f18:	75 0a                	jne    81d8f24 <_ZN26Dispatcher_MonstercardBind11check_errorEP5CUserR8MSG_BASE+0x142>
 81d8f1a:	b8 11 00 00 00       	mov    $0x11,%eax
 81d8f1f:	e9 1e 02 00 00       	jmp    81d9142 <_ZN26Dispatcher_MonstercardBind11check_errorEP5CUserR8MSG_BASE+0x360>
 81d8f24:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81d8f27:	89 04 24             	mov    %eax,(%esp)
 81d8f2a:	e8 cb 83 f1 ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 81d8f2f:	83 f0 01             	xor    $0x1,%eax
 81d8f32:	84 c0                	test   %al,%al
 81d8f34:	74 0a                	je     81d8f40 <_ZN26Dispatcher_MonstercardBind11check_errorEP5CUserR8MSG_BASE+0x15e>
 81d8f36:	b8 11 00 00 00       	mov    $0x11,%eax
 81d8f3b:	e9 02 02 00 00       	jmp    81d9142 <_ZN26Dispatcher_MonstercardBind11check_errorEP5CUserR8MSG_BASE+0x360>
 81d8f40:	8b 85 71 ff ff ff    	mov    -0x8f(%ebp),%eax
 81d8f46:	85 c0                	test   %eax,%eax
 81d8f48:	7f 0a                	jg     81d8f54 <_ZN26Dispatcher_MonstercardBind11check_errorEP5CUserR8MSG_BASE+0x172>
 81d8f4a:	b8 16 00 00 00       	mov    $0x16,%eax
 81d8f4f:	e9 ee 01 00 00       	jmp    81d9142 <_ZN26Dispatcher_MonstercardBind11check_errorEP5CUserR8MSG_BASE+0x360>
 81d8f54:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81d8f57:	0f b7 40 11          	movzwl 0x11(%eax),%eax
 81d8f5b:	0f bf d8             	movswl %ax,%ebx
 81d8f5e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d8f61:	89 04 24             	mov    %eax,(%esp)
 81d8f64:	e8 15 13 f0 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 81d8f69:	8d 95 2d ff ff ff    	lea    -0xd3(%ebp),%edx
 81d8f6f:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 81d8f73:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81d8f7a:	00 
 81d8f7b:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d8f7f:	89 14 24             	mov    %edx,(%esp)
 81d8f82:	e8 91 29 32 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 81d8f87:	83 ec 04             	sub    $0x4,%esp
 81d8f8a:	8b 85 2f ff ff ff    	mov    -0xd1(%ebp),%eax
 81d8f90:	89 c3                	mov    %eax,%ebx
 81d8f92:	e8 04 32 ef ff       	call   80cc19b <_Z14G_CDataManagerv>
 81d8f97:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81d8f9b:	89 04 24             	mov    %eax,(%esp)
 81d8f9e:	e8 8f 6a 18 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 81d8fa3:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81d8fa6:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 81d8faa:	75 0a                	jne    81d8fb6 <_ZN26Dispatcher_MonstercardBind11check_errorEP5CUserR8MSG_BASE+0x1d4>
 81d8fac:	b8 11 00 00 00       	mov    $0x11,%eax
 81d8fb1:	e9 8c 01 00 00       	jmp    81d9142 <_ZN26Dispatcher_MonstercardBind11check_errorEP5CUserR8MSG_BASE+0x360>
 81d8fb6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d8fb9:	89 04 24             	mov    %eax,(%esp)
 81d8fbc:	e8 39 83 f1 ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 81d8fc1:	83 f0 01             	xor    $0x1,%eax
 81d8fc4:	84 c0                	test   %al,%al
 81d8fc6:	74 0a                	je     81d8fd2 <_ZN26Dispatcher_MonstercardBind11check_errorEP5CUserR8MSG_BASE+0x1f0>
 81d8fc8:	b8 11 00 00 00       	mov    $0x11,%eax
 81d8fcd:	e9 70 01 00 00       	jmp    81d9142 <_ZN26Dispatcher_MonstercardBind11check_errorEP5CUserR8MSG_BASE+0x360>
 81d8fd2:	8b 85 34 ff ff ff    	mov    -0xcc(%ebp),%eax
 81d8fd8:	85 c0                	test   %eax,%eax
 81d8fda:	7f 0a                	jg     81d8fe6 <_ZN26Dispatcher_MonstercardBind11check_errorEP5CUserR8MSG_BASE+0x204>
 81d8fdc:	b8 16 00 00 00       	mov    $0x16,%eax
 81d8fe1:	e9 5c 01 00 00       	jmp    81d9142 <_ZN26Dispatcher_MonstercardBind11check_errorEP5CUserR8MSG_BASE+0x360>
 81d8fe6:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81d8fe9:	89 04 24             	mov    %eax,(%esp)
 81d8fec:	e8 e5 82 f1 ff       	call   80f12d6 <_ZNK5CItem10get_rarityEv>
 81d8ff1:	89 c3                	mov    %eax,%ebx
 81d8ff3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d8ff6:	89 04 24             	mov    %eax,(%esp)
 81d8ff9:	e8 d8 82 f1 ff       	call   80f12d6 <_ZNK5CItem10get_rarityEv>
 81d8ffe:	39 c3                	cmp    %eax,%ebx
 81d9000:	0f 95 c0             	setne  %al
 81d9003:	84 c0                	test   %al,%al
 81d9005:	74 0a                	je     81d9011 <_ZN26Dispatcher_MonstercardBind11check_errorEP5CUserR8MSG_BASE+0x22f>
 81d9007:	b8 13 00 00 00       	mov    $0x13,%eax
 81d900c:	e9 31 01 00 00       	jmp    81d9142 <_ZN26Dispatcher_MonstercardBind11check_errorEP5CUserR8MSG_BASE+0x360>
 81d9011:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d9014:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d9018:	8b 45 08             	mov    0x8(%ebp),%eax
 81d901b:	89 04 24             	mov    %eax,(%esp)
 81d901e:	e8 a1 f3 ff ff       	call   81d83c4 <_ZN26Dispatcher_MonstercardBind15check_need_slotEP5CUser>
 81d9023:	83 f0 01             	xor    $0x1,%eax
 81d9026:	84 c0                	test   %al,%al
 81d9028:	74 0a                	je     81d9034 <_ZN26Dispatcher_MonstercardBind11check_errorEP5CUserR8MSG_BASE+0x252>
 81d902a:	b8 04 00 00 00       	mov    $0x4,%eax
 81d902f:	e9 0e 01 00 00       	jmp    81d9142 <_ZN26Dispatcher_MonstercardBind11check_errorEP5CUserR8MSG_BASE+0x360>
 81d9034:	e8 6e 13 f0 ff       	call   80da3a7 <_Z11G_GameWorldv>
 81d9039:	89 04 24             	mov    %eax,(%esp)
 81d903c:	e8 a7 94 f6 ff       	call   81424e8 <_ZNK9GameWorld12IsPVPChannelEv>
 81d9041:	84 c0                	test   %al,%al
 81d9043:	75 10                	jne    81d9055 <_ZN26Dispatcher_MonstercardBind11check_errorEP5CUserR8MSG_BASE+0x273>
 81d9045:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d9048:	89 04 24             	mov    %eax,(%esp)
 81d904b:	e8 3c 13 f0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81d9050:	83 f8 03             	cmp    $0x3,%eax
 81d9053:	74 07                	je     81d905c <_ZN26Dispatcher_MonstercardBind11check_errorEP5CUserR8MSG_BASE+0x27a>
 81d9055:	b8 01 00 00 00       	mov    $0x1,%eax
 81d905a:	eb 05                	jmp    81d9061 <_ZN26Dispatcher_MonstercardBind11check_errorEP5CUserR8MSG_BASE+0x27f>
 81d905c:	b8 00 00 00 00       	mov    $0x0,%eax
 81d9061:	84 c0                	test   %al,%al
 81d9063:	74 0a                	je     81d906f <_ZN26Dispatcher_MonstercardBind11check_errorEP5CUserR8MSG_BASE+0x28d>
 81d9065:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81d906a:	e9 d3 00 00 00       	jmp    81d9142 <_ZN26Dispatcher_MonstercardBind11check_errorEP5CUserR8MSG_BASE+0x360>
 81d906f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81d9072:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d9079:	00 
 81d907a:	89 04 24             	mov    %eax,(%esp)
 81d907d:	e8 f8 38 05 00       	call   822c97a <_ZNK5CItem11hasCategoryEN12STItemScript18ENUM_ITEM_CATEGORYE>
 81d9082:	83 f0 01             	xor    $0x1,%eax
 81d9085:	84 c0                	test   %al,%al
 81d9087:	75 1a                	jne    81d90a3 <_ZN26Dispatcher_MonstercardBind11check_errorEP5CUserR8MSG_BASE+0x2c1>
 81d9089:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d908c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d9093:	00 
 81d9094:	89 04 24             	mov    %eax,(%esp)
 81d9097:	e8 de 38 05 00       	call   822c97a <_ZNK5CItem11hasCategoryEN12STItemScript18ENUM_ITEM_CATEGORYE>
 81d909c:	83 f0 01             	xor    $0x1,%eax
 81d909f:	84 c0                	test   %al,%al
 81d90a1:	74 07                	je     81d90aa <_ZN26Dispatcher_MonstercardBind11check_errorEP5CUserR8MSG_BASE+0x2c8>
 81d90a3:	b8 01 00 00 00       	mov    $0x1,%eax
 81d90a8:	eb 05                	jmp    81d90af <_ZN26Dispatcher_MonstercardBind11check_errorEP5CUserR8MSG_BASE+0x2cd>
 81d90aa:	b8 00 00 00 00       	mov    $0x0,%eax
 81d90af:	84 c0                	test   %al,%al
 81d90b1:	74 0a                	je     81d90bd <_ZN26Dispatcher_MonstercardBind11check_errorEP5CUserR8MSG_BASE+0x2db>
 81d90b3:	b8 17 00 00 00       	mov    $0x17,%eax
 81d90b8:	e9 85 00 00 00       	jmp    81d9142 <_ZN26Dispatcher_MonstercardBind11check_errorEP5CUserR8MSG_BASE+0x360>
 81d90bd:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81d90c0:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 81d90c7:	00 
 81d90c8:	89 04 24             	mov    %eax,(%esp)
 81d90cb:	e8 aa 38 05 00       	call   822c97a <_ZNK5CItem11hasCategoryEN12STItemScript18ENUM_ITEM_CATEGORYE>
 81d90d0:	84 c0                	test   %al,%al
 81d90d2:	75 17                	jne    81d90eb <_ZN26Dispatcher_MonstercardBind11check_errorEP5CUserR8MSG_BASE+0x309>
 81d90d4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d90d7:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 81d90de:	00 
 81d90df:	89 04 24             	mov    %eax,(%esp)
 81d90e2:	e8 93 38 05 00       	call   822c97a <_ZNK5CItem11hasCategoryEN12STItemScript18ENUM_ITEM_CATEGORYE>
 81d90e7:	84 c0                	test   %al,%al
 81d90e9:	74 07                	je     81d90f2 <_ZN26Dispatcher_MonstercardBind11check_errorEP5CUserR8MSG_BASE+0x310>
 81d90eb:	b8 01 00 00 00       	mov    $0x1,%eax
 81d90f0:	eb 05                	jmp    81d90f7 <_ZN26Dispatcher_MonstercardBind11check_errorEP5CUserR8MSG_BASE+0x315>
 81d90f2:	b8 00 00 00 00       	mov    $0x0,%eax
 81d90f7:	84 c0                	test   %al,%al
 81d90f9:	74 07                	je     81d9102 <_ZN26Dispatcher_MonstercardBind11check_errorEP5CUserR8MSG_BASE+0x320>
 81d90fb:	b8 17 00 00 00       	mov    $0x17,%eax
 81d9100:	eb 40                	jmp    81d9142 <_ZN26Dispatcher_MonstercardBind11check_errorEP5CUserR8MSG_BASE+0x360>
 81d9102:	8b 55 ec             	mov    -0x14(%ebp),%edx
 81d9105:	a1 cc f7 41 09       	mov    0x941f7cc,%eax
 81d910a:	8d 8d 6a ff ff ff    	lea    -0x96(%ebp),%ecx
 81d9110:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 81d9114:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81d9118:	c7 44 24 08 28 00 00 	movl   $0x28,0x8(%esp)
 81d911f:	00 
 81d9120:	8b 55 0c             	mov    0xc(%ebp),%edx
 81d9123:	89 54 24 04          	mov    %edx,0x4(%esp)
 81d9127:	89 04 24             	mov    %eax,(%esp)
 81d912a:	e8 a1 f6 0a 00       	call   82887d0 <_ZN21CSecu_ProtectionField15CheckItemRarityEP5CUser18SECURITY_PROTCTIONPK5CItemPK10Inven_Item>
 81d912f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d9132:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81d9136:	74 05                	je     81d913d <_ZN26Dispatcher_MonstercardBind11check_errorEP5CUserR8MSG_BASE+0x35b>
 81d9138:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d913b:	eb 05                	jmp    81d9142 <_ZN26Dispatcher_MonstercardBind11check_errorEP5CUserR8MSG_BASE+0x360>
 81d913d:	b8 00 00 00 00       	mov    $0x0,%eax
 81d9142:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 81d9145:	c9                   	leave
 81d9146:	c3                   	ret
 81d9147:	90                   	nop

```

```c
// Dispatcher_MonstercardBind::check_error @ 0x81d8de2

/* Dispatcher_MonstercardBind::check_error(CUser*, MSG_BASE&) */

int __thiscall
Dispatcher_MonstercardBind::check_error
          (Dispatcher_MonstercardBind *this,CUser *param_1,MSG_BASE *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  CDataManager *pCVar4;
  int iVar5;
  GameWorld *this_00;
  undefined1 local_d7 [2];
  int local_d5;
  int local_d0;
  undefined1 local_9a [2];
  int local_98;
  int local_93;
  undefined1 local_5d [2];
  int local_5b;
  int local_56;
  MSG_BASE *local_20;
  CItem *local_1c;
  CItem *local_18;
  CItem *local_14;
  
  if (param_1 == (CUser *)0x0) {
    iVar3 = -1;
  }
  else {
    iVar3 = CUser::get_state(param_1);
    if (iVar3 < 3) {
      iVar3 = -1;
    }
    else {
      local_20 = param_2;
      iVar3 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      CInventory::GetInvenSlot((int)local_5d,iVar3);
      pCVar4 = (CDataManager *)G_CDataManager();
      local_1c = (CItem *)CDataManager::find_item(pCVar4,local_5b);
      if (local_1c == (CItem *)0x0) {
        iVar3 = 0x11;
      }
      else {
        cVar2 = CItem::is_stackable(local_1c);
        if (cVar2 == '\x01') {
          if (*(int *)(local_1c + 0x330) == -1) {
            iVar3 = 0x11;
          }
          else if (local_56 < 1) {
            iVar3 = 0x16;
          }
          else {
            iVar3 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
            CInventory::GetInvenSlot((int)local_9a,iVar3);
            pCVar4 = (CDataManager *)G_CDataManager();
            local_18 = (CItem *)CDataManager::find_item(pCVar4,local_98);
            if (local_18 == (CItem *)0x0) {
              iVar3 = 0x11;
            }
            else {
              cVar2 = CItem::is_stackable(local_18);
              if (cVar2 == '\x01') {
                if (local_93 < 1) {
                  iVar3 = 0x16;
                }
                else {
                  iVar3 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
                  CInventory::GetInvenSlot((int)local_d7,iVar3);
                  pCVar4 = (CDataManager *)G_CDataManager();
                  local_14 = (CItem *)CDataManager::find_item(pCVar4,local_d5);
                  if (local_14 == (CItem *)0x0) {
                    iVar3 = 0x11;
                  }
                  else {
                    cVar2 = CItem::is_stackable(local_14);
                    if (cVar2 == '\x01') {
                      if (local_d0 < 1) {
                        iVar3 = 0x16;
                      }
                      else {
                        iVar3 = CItem::get_rarity(local_18);
                        iVar5 = CItem::get_rarity(local_14);
                        if (iVar3 == iVar5) {
                          cVar2 = check_need_slot(this,param_1);
                          if (cVar2 == '\x01') {
                            this_00 = (GameWorld *)G_GameWorld();
                            cVar2 = GameWorld::IsPVPChannel(this_00);
                            if ((cVar2 == '\0') && (iVar3 = CUser::get_state(param_1), iVar3 == 3))
                            {
                              bVar1 = false;
                            }
                            else {
                              bVar1 = true;
                            }
                            if (bVar1) {
                              iVar3 = -1;
                            }
                            else {
                              cVar2 = CItem::hasCategory(local_18,1);
                              if ((cVar2 == '\x01') &&
                                 (cVar2 = CItem::hasCategory(local_14,1), cVar2 == '\x01')) {
                                bVar1 = false;
                              }
                              else {
                                bVar1 = true;
                              }
                              if (bVar1) {
                                iVar3 = 0x17;
                              }
                              else {
                                cVar2 = CItem::hasCategory(local_18,2);
                                if ((cVar2 == '\0') &&
                                   (cVar2 = CItem::hasCategory(local_14,2), cVar2 == '\0')) {
                                  bVar1 = false;
                                }
                                else {
                                  bVar1 = true;
                                }
                                if (bVar1) {
                                  iVar3 = 0x17;
                                }
                                else {
                                  iVar3 = CSecu_ProtectionField::CheckItemRarity
                                                    (GlobalData::s_pSecuProtectionField,param_1,0x28
                                                     ,local_18,local_9a);
                                  if (iVar3 == 0) {
                                    iVar3 = 0;
                                  }
                                }
                              }
                            }
                          }
                          else {
                            iVar3 = 4;
                          }
                        }
                        else {
                          iVar3 = 0x13;
                        }
                      }
                    }
                    else {
                      iVar3 = 0x11;
                    }
                  }
                }
              }
              else {
                iVar3 = 0x11;
              }
            }
          }
        }
        else {
          iVar3 = 0x11;
        }
      }
    }
  }
  return iVar3;
}

```

---

## check_need_slot

```asm
// === 081d83c4 Dispatcher_MonstercardBind::check_need_slot  [0x081d83c4-0x81d842d] ===
 81d83c4:	55                   	push   %ebp
 81d83c5:	89 e5                	mov    %esp,%ebp
 81d83c7:	83 ec 28             	sub    $0x28,%esp
 81d83ca:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d83cd:	89 04 24             	mov    %eax,(%esp)
 81d83d0:	e8 a9 1e f0 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 81d83d5:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81d83d8:	c7 44 24 08 0a 00 00 	movl   $0xa,0x8(%esp)
 81d83df:	00 
 81d83e0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d83e7:	00 
 81d83e8:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81d83eb:	89 04 24             	mov    %eax,(%esp)
 81d83ee:	e8 31 34 32 00       	call   84fb824 <_ZNK10CInventory14get_empty_slotE10INVEN_TYPEN10Inven_Item9ITEM_TYPEE>
 81d83f3:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81d83f6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d83fd:	00 
 81d83fe:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d8405:	00 
 81d8406:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81d8409:	89 04 24             	mov    %eax,(%esp)
 81d840c:	e8 13 34 32 00       	call   84fb824 <_ZNK10CInventory14get_empty_slotE10INVEN_TYPEN10Inven_Item9ITEM_TYPEE>
 81d8411:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d8414:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 81d8418:	79 06                	jns    81d8420 <_ZN26Dispatcher_MonstercardBind15check_need_slotEP5CUser+0x5c>
 81d841a:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81d841e:	78 07                	js     81d8427 <_ZN26Dispatcher_MonstercardBind15check_need_slotEP5CUser+0x63>
 81d8420:	b8 01 00 00 00       	mov    $0x1,%eax
 81d8425:	eb 05                	jmp    81d842c <_ZN26Dispatcher_MonstercardBind15check_need_slotEP5CUser+0x68>
 81d8427:	b8 00 00 00 00       	mov    $0x0,%eax
 81d842c:	c9                   	leave
 81d842d:	c3                   	ret

```

```c
// Dispatcher_MonstercardBind::check_need_slot @ 0x81d83c4

/* Dispatcher_MonstercardBind::check_need_slot(CUser*) */

undefined4 __thiscall
Dispatcher_MonstercardBind::check_need_slot(Dispatcher_MonstercardBind *this,CUser *param_1)

{
  CInventory *pCVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  pCVar1 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  iVar2 = CInventory::get_empty_slot(pCVar1,1,10);
  iVar3 = CInventory::get_empty_slot(pCVar1,1,0);
  if ((iVar2 < 0) && (iVar3 < 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}

```

---

## get_bind_result

```asm
// === 081d84a0 Dispatcher_MonstercardBind::get_bind_result  [0x081d84a0-0x81d85fb] ===
 81d84a0:	55                   	push   %ebp
 81d84a1:	89 e5                	mov    %esp,%ebp
 81d84a3:	53                   	push   %ebx
 81d84a4:	81 ec 84 00 00 00    	sub    $0x84,%esp
 81d84aa:	8b 45 10             	mov    0x10(%ebp),%eax
 81d84ad:	66 89 45 94          	mov    %ax,-0x6c(%ebp)
 81d84b1:	0f bf 5d 94          	movswl -0x6c(%ebp),%ebx
 81d84b5:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d84b8:	89 04 24             	mov    %eax,(%esp)
 81d84bb:	e8 be 1d f0 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 81d84c0:	8d 55 9f             	lea    -0x61(%ebp),%edx
 81d84c3:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 81d84c7:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81d84ce:	00 
 81d84cf:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d84d3:	89 14 24             	mov    %edx,(%esp)
 81d84d6:	e8 3d 34 32 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 81d84db:	83 ec 04             	sub    $0x4,%esp
 81d84de:	8b 45 a1             	mov    -0x5f(%ebp),%eax
 81d84e1:	89 c3                	mov    %eax,%ebx
 81d84e3:	e8 b3 3c ef ff       	call   80cc19b <_Z14G_CDataManagerv>
 81d84e8:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81d84ec:	89 04 24             	mov    %eax,(%esp)
 81d84ef:	e8 3e 75 18 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 81d84f4:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81d84f7:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81d84fa:	8b 80 30 03 00 00    	mov    0x330(%eax),%eax
 81d8500:	89 45 e8             	mov    %eax,-0x18(%ebp)
 81d8503:	e8 93 3c ef ff       	call   80cc19b <_Z14G_CDataManagerv>
 81d8508:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d850f:	00 
 81d8510:	89 04 24             	mov    %eax,(%esp)
 81d8513:	e8 da 30 05 00       	call   822b5f2 <_ZN12CDataManager18GetExpertJobScriptEi>
 81d8518:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81d851b:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81d851e:	89 04 24             	mov    %eax,(%esp)
 81d8521:	e8 b8 2c 05 00       	call   822b1de <_ZN17STExpertJobScript21stMonsterCardBindRateC1Ev>
 81d8526:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
 81d852a:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81d852d:	89 44 24 08          	mov    %eax,0x8(%esp)
 81d8531:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81d8534:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d8538:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81d853b:	89 04 24             	mov    %eax,(%esp)
 81d853e:	e8 8d 2d 05 00       	call   822b2d0 <_ZN17STExpertJobScript22GetMonsterCardBindRateEiRNS_21stMonsterCardBindRateE>
 81d8543:	88 45 f3             	mov    %al,-0xd(%ebp)
 81d8546:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 81d854a:	83 f0 01             	xor    $0x1,%eax
 81d854d:	84 c0                	test   %al,%al
 81d854f:	74 0a                	je     81d855b <_ZN26Dispatcher_MonstercardBind15get_bind_resultEP5CUsers11ENUM_RARITYRSt6vectorISt4pairIiiESaIS5_EE+0xbb>
 81d8551:	b8 00 00 00 00       	mov    $0x0,%eax
 81d8556:	e9 9b 00 00 00       	jmp    81d85f6 <_ZN26Dispatcher_MonstercardBind15get_bind_resultEP5CUsers11ENUM_RARITYRSt6vectorISt4pairIiiESaIS5_EE+0x156>
 81d855b:	8b 45 18             	mov    0x18(%ebp),%eax
 81d855e:	89 04 24             	mov    %eax,(%esp)
 81d8561:	e8 dc 1d fa ff       	call   817a342 <_ZNSt6vectorISt4pairIiiESaIS1_EE5clearEv>
 81d8566:	0f b7 45 dc          	movzwl -0x24(%ebp),%eax
 81d856a:	0f b7 c0             	movzwl %ax,%eax
 81d856d:	89 44 24 08          	mov    %eax,0x8(%esp)
 81d8571:	8b 45 14             	mov    0x14(%ebp),%eax
 81d8574:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d8578:	8b 45 08             	mov    0x8(%ebp),%eax
 81d857b:	89 04 24             	mov    %eax,(%esp)
 81d857e:	e8 ab fe ff ff       	call   81d842e <_ZN26Dispatcher_MonstercardBind16calcurate_rarityE11ENUM_RARITYt>
 81d8583:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d8586:	c7 45 e0 10 27 00 00 	movl   $0x2710,-0x20(%ebp)
 81d858d:	8b 45 08             	mov    0x8(%ebp),%eax
 81d8590:	8b 40 04             	mov    0x4(%eax),%eax
 81d8593:	8d 55 e0             	lea    -0x20(%ebp),%edx
 81d8596:	89 54 24 04          	mov    %edx,0x4(%esp)
 81d859a:	89 04 24             	mov    %eax,(%esp)
 81d859d:	e8 1c 35 ef ff       	call   80cbabe <_ZN7CMTRand7randIntERKm>
 81d85a2:	0f b7 55 de          	movzwl -0x22(%ebp),%edx
 81d85a6:	0f b7 d2             	movzwl %dx,%edx
 81d85a9:	39 d0                	cmp    %edx,%eax
 81d85ab:	0f 92 c0             	setb   %al
 81d85ae:	84 c0                	test   %al,%al
 81d85b0:	74 23                	je     81d85d5 <_ZN26Dispatcher_MonstercardBind15get_bind_resultEP5CUsers11ENUM_RARITYRSt6vectorISt4pairIiiESaIS5_EE+0x135>
 81d85b2:	8b 45 18             	mov    0x18(%ebp),%eax
 81d85b5:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81d85b9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d85bc:	89 44 24 08          	mov    %eax,0x8(%esp)
 81d85c0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81d85c7:	00 
 81d85c8:	8b 45 08             	mov    0x8(%ebp),%eax
 81d85cb:	89 04 24             	mov    %eax,(%esp)
 81d85ce:	e8 29 00 00 00       	call   81d85fc <_ZN26Dispatcher_MonstercardBind13_bind_processENS_27ENUM_MONSTER_CARD_BIND_TYPEE11ENUM_RARITYRSt6vectorISt4pairIiiESaIS4_EE>
 81d85d3:	eb 21                	jmp    81d85f6 <_ZN26Dispatcher_MonstercardBind15get_bind_resultEP5CUsers11ENUM_RARITYRSt6vectorISt4pairIiiESaIS5_EE+0x156>
 81d85d5:	8b 45 18             	mov    0x18(%ebp),%eax
 81d85d8:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81d85dc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d85df:	89 44 24 08          	mov    %eax,0x8(%esp)
 81d85e3:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d85ea:	00 
 81d85eb:	8b 45 08             	mov    0x8(%ebp),%eax
 81d85ee:	89 04 24             	mov    %eax,(%esp)
 81d85f1:	e8 06 00 00 00       	call   81d85fc <_ZN26Dispatcher_MonstercardBind13_bind_processENS_27ENUM_MONSTER_CARD_BIND_TYPEE11ENUM_RARITYRSt6vectorISt4pairIiiESaIS4_EE>
 81d85f6:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 81d85f9:	c9                   	leave
 81d85fa:	c3                   	ret
 81d85fb:	90                   	nop

```

```c
// Dispatcher_MonstercardBind::get_bind_result @ 0x81d84a0

/* Dispatcher_MonstercardBind::get_bind_result(CUser*, short, ENUM_RARITY,
   std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&) */

undefined4 __thiscall
Dispatcher_MonstercardBind::get_bind_result
          (Dispatcher_MonstercardBind *this,CUserCharacInfo *param_1,undefined4 param_2,
          undefined4 param_4,vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *param_5)

{
  int iVar1;
  CDataManager *this_00;
  undefined4 uVar2;
  uint uVar3;
  undefined1 local_65 [2];
  int local_63;
  undefined2 local_28;
  ushort local_26;
  ulong local_24;
  int local_20;
  int local_1c;
  STExpertJobScript *local_18;
  char local_11;
  undefined4 local_10;
  
  iVar1 = CUserCharacInfo::getCurCharacInvenR(param_1);
  CInventory::GetInvenSlot((int)local_65,iVar1);
  this_00 = (CDataManager *)G_CDataManager();
  local_20 = CDataManager::find_item(this_00,local_63);
  local_1c = *(int *)(local_20 + 0x330);
  iVar1 = G_CDataManager();
  local_18 = (STExpertJobScript *)CDataManager::GetExpertJobScript(iVar1);
  STExpertJobScript::stMonsterCardBindRate::stMonsterCardBindRate
            ((stMonsterCardBindRate *)&local_28);
  local_11 = 0;
  local_11 = STExpertJobScript::GetMonsterCardBindRate
                       (local_18,local_1c,(stMonsterCardBindRate *)&local_28);
  if (local_11 == '\x01') {
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::clear(param_5);
    local_10 = calcurate_rarity(this,param_4,local_28);
    local_24 = 10000;
    uVar3 = CMTRand::randInt(*(CMTRand **)(this + 4),&local_24);
    if (uVar3 < local_26) {
      uVar2 = _bind_process(this,0,local_10,param_5);
    }
    else {
      uVar2 = _bind_process(this,1,local_10,param_5);
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## process

```asm
// === 081d88b0 Dispatcher_MonstercardBind::process  [0x081d88b0-0x81d8de1] ===
 81d88b0:	55                   	push   %ebp
 81d88b1:	89 e5                	mov    %esp,%ebp
 81d88b3:	56                   	push   %esi
 81d88b4:	53                   	push   %ebx
 81d88b5:	81 ec 00 ca 00 00    	sub    $0xca00,%esp
 81d88bb:	8b 45 14             	mov    0x14(%ebp),%eax
 81d88be:	89 45 e0             	mov    %eax,-0x20(%ebp)
 81d88c1:	8b 45 10             	mov    0x10(%ebp),%eax
 81d88c4:	89 44 24 08          	mov    %eax,0x8(%esp)
 81d88c8:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d88cb:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d88cf:	8b 45 08             	mov    0x8(%ebp),%eax
 81d88d2:	89 04 24             	mov    %eax,(%esp)
 81d88d5:	e8 08 05 00 00       	call   81d8de2 <_ZN26Dispatcher_MonstercardBind11check_errorEP5CUserR8MSG_BASE>
 81d88da:	8b 55 e0             	mov    -0x20(%ebp),%edx
 81d88dd:	89 42 04             	mov    %eax,0x4(%edx)
 81d88e0:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81d88e3:	8b 40 04             	mov    0x4(%eax),%eax
 81d88e6:	85 c0                	test   %eax,%eax
 81d88e8:	7e 0a                	jle    81d88f4 <_ZN26Dispatcher_MonstercardBind7processEP5CUserR8MSG_BASER9ParamBase+0x44>
 81d88ea:	bb 00 00 00 00       	mov    $0x0,%ebx
 81d88ef:	e9 e1 04 00 00       	jmp    81d8dd5 <_ZN26Dispatcher_MonstercardBind7processEP5CUserR8MSG_BASER9ParamBase+0x525>
 81d88f4:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81d88f7:	8b 40 04             	mov    0x4(%eax),%eax
 81d88fa:	85 c0                	test   %eax,%eax
 81d88fc:	79 2d                	jns    81d892b <_ZN26Dispatcher_MonstercardBind7processEP5CUserR8MSG_BASER9ParamBase+0x7b>
 81d88fe:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81d8901:	8b 40 04             	mov    0x4(%eax),%eax
 81d8904:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d890b:	00 
 81d890c:	89 44 24 08          	mov    %eax,0x8(%esp)
 81d8910:	c7 44 24 04 80 25 bd 	movl   $0x8bd2580,0x4(%esp)
 81d8917:	08 
 81d8918:	c7 04 24 db 44 00 00 	movl   $0x44db,(%esp)
 81d891f:	e8 b3 7f 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d8924:	89 c3                	mov    %eax,%ebx
 81d8926:	e9 aa 04 00 00       	jmp    81d8dd5 <_ZN26Dispatcher_MonstercardBind7processEP5CUserR8MSG_BASER9ParamBase+0x525>
 81d892b:	8b 45 10             	mov    0x10(%ebp),%eax
 81d892e:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81d8931:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81d8934:	0f b7 40 0d          	movzwl 0xd(%eax),%eax
 81d8938:	0f bf d8             	movswl %ax,%ebx
 81d893b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d893e:	89 04 24             	mov    %eax,(%esp)
 81d8941:	e8 38 19 f0 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 81d8946:	8d 55 8b             	lea    -0x75(%ebp),%edx
 81d8949:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 81d894d:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81d8954:	00 
 81d8955:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d8959:	89 14 24             	mov    %edx,(%esp)
 81d895c:	e8 b7 2f 32 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 81d8961:	83 ec 04             	sub    $0x4,%esp
 81d8964:	8b 45 8d             	mov    -0x73(%ebp),%eax
 81d8967:	89 c3                	mov    %eax,%ebx
 81d8969:	e8 2d 38 ef ff       	call   80cc19b <_Z14G_CDataManagerv>
 81d896e:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81d8972:	89 04 24             	mov    %eax,(%esp)
 81d8975:	e8 b8 70 18 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 81d897a:	89 45 e8             	mov    %eax,-0x18(%ebp)
 81d897d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81d8980:	0f b7 40 0f          	movzwl 0xf(%eax),%eax
 81d8984:	0f bf d8             	movswl %ax,%ebx
 81d8987:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d898a:	89 04 24             	mov    %eax,(%esp)
 81d898d:	e8 ec 18 f0 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 81d8992:	8d 95 4e ff ff ff    	lea    -0xb2(%ebp),%edx
 81d8998:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 81d899c:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81d89a3:	00 
 81d89a4:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d89a8:	89 14 24             	mov    %edx,(%esp)
 81d89ab:	e8 68 2f 32 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 81d89b0:	83 ec 04             	sub    $0x4,%esp
 81d89b3:	8b 85 50 ff ff ff    	mov    -0xb0(%ebp),%eax
 81d89b9:	89 c3                	mov    %eax,%ebx
 81d89bb:	e8 db 37 ef ff       	call   80cc19b <_Z14G_CDataManagerv>
 81d89c0:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81d89c4:	89 04 24             	mov    %eax,(%esp)
 81d89c7:	e8 66 70 18 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 81d89cc:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81d89cf:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81d89d2:	0f b7 40 11          	movzwl 0x11(%eax),%eax
 81d89d6:	0f bf d8             	movswl %ax,%ebx
 81d89d9:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d89dc:	89 04 24             	mov    %eax,(%esp)
 81d89df:	e8 9a 18 f0 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 81d89e4:	8d 95 11 ff ff ff    	lea    -0xef(%ebp),%edx
 81d89ea:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 81d89ee:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81d89f5:	00 
 81d89f6:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d89fa:	89 14 24             	mov    %edx,(%esp)
 81d89fd:	e8 16 2f 32 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 81d8a02:	83 ec 04             	sub    $0x4,%esp
 81d8a05:	8b 85 13 ff ff ff    	mov    -0xed(%ebp),%eax
 81d8a0b:	89 c3                	mov    %eax,%ebx
 81d8a0d:	e8 89 37 ef ff       	call   80cc19b <_Z14G_CDataManagerv>
 81d8a12:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81d8a16:	89 04 24             	mov    %eax,(%esp)
 81d8a19:	e8 14 70 18 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 81d8a1e:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81d8a21:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81d8a24:	89 04 24             	mov    %eax,(%esp)
 81d8a27:	e8 aa bf f5 ff       	call   81349d6 <_ZNSt6vectorISt4pairIiiESaIS1_EEC1Ev>
 81d8a2c:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81d8a2f:	89 04 24             	mov    %eax,(%esp)
 81d8a32:	e8 0b 19 fa ff       	call   817a342 <_ZNSt6vectorISt4pairIiiESaIS1_EE5clearEv>
 81d8a37:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81d8a3a:	89 04 24             	mov    %eax,(%esp)
 81d8a3d:	e8 94 88 f1 ff       	call   80f12d6 <_ZNK5CItem10get_rarityEv>
 81d8a42:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 81d8a45:	0f b7 52 0d          	movzwl 0xd(%edx),%edx
 81d8a49:	0f bf d2             	movswl %dx,%edx
 81d8a4c:	8d 4d d4             	lea    -0x2c(%ebp),%ecx
 81d8a4f:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 81d8a53:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81d8a57:	89 54 24 08          	mov    %edx,0x8(%esp)
 81d8a5b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d8a5e:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d8a62:	8b 45 08             	mov    0x8(%ebp),%eax
 81d8a65:	89 04 24             	mov    %eax,(%esp)
 81d8a68:	e8 33 fa ff ff       	call   81d84a0 <_ZN26Dispatcher_MonstercardBind15get_bind_resultEP5CUsers11ENUM_RARITYRSt6vectorISt4pairIiiESaIS5_EE>
 81d8a6d:	83 f0 01             	xor    $0x1,%eax
 81d8a70:	84 c0                	test   %al,%al
 81d8a72:	74 14                	je     81d8a88 <_ZN26Dispatcher_MonstercardBind7processEP5CUserR8MSG_BASER9ParamBase+0x1d8>
 81d8a74:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81d8a77:	c7 40 04 13 00 00 00 	movl   $0x13,0x4(%eax)
 81d8a7e:	bb 00 00 00 00       	mov    $0x0,%ebx
 81d8a83:	e9 42 03 00 00       	jmp    81d8dca <_ZN26Dispatcher_MonstercardBind7processEP5CUserR8MSG_BASER9ParamBase+0x51a>
 81d8a88:	8d 85 58 f7 ff ff    	lea    -0x8a8(%ebp),%eax
 81d8a8e:	89 04 24             	mov    %eax,(%esp)
 81d8a91:	e8 96 4a 05 00       	call   822d52c <_ZN10CInventoryC1Ev>
 81d8a96:	8d 85 19 36 ff ff    	lea    -0xc9e7(%ebp),%eax
 81d8a9c:	89 04 24             	mov    %eax,(%esp)
 81d8a9f:	e8 14 49 05 00       	call   822d3b8 <_ZN15InventoryMemoryC1Ev>
 81d8aa4:	8d 85 19 36 ff ff    	lea    -0xc9e7(%ebp),%eax
 81d8aaa:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d8aae:	8d 85 58 f7 ff ff    	lea    -0x8a8(%ebp),%eax
 81d8ab4:	89 04 24             	mov    %eax,(%esp)
 81d8ab7:	e8 3a 4a 05 00       	call   822d4f6 <_ZN10CInventory18SetInventoryMemoryEP15InventoryMemory>
 81d8abc:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d8abf:	89 04 24             	mov    %eax,(%esp)
 81d8ac2:	e8 03 79 fa ff       	call   81803ca <_ZNK15CUserCharacInfo21getCurCharacInvenRefREv>
 81d8ac7:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d8acb:	8d 85 58 f7 ff ff    	lea    -0x8a8(%ebp),%eax
 81d8ad1:	89 04 24             	mov    %eax,(%esp)
 81d8ad4:	e8 3b 18 32 00       	call   84fa314 <_ZN10CInventory7setCopyERKS_>
 81d8ad9:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81d8adc:	0f b7 40 0d          	movzwl 0xd(%eax),%eax
 81d8ae0:	98                   	cwtl
 81d8ae1:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81d8ae8:	00 
 81d8ae9:	c7 44 24 10 2c 00 00 	movl   $0x2c,0x10(%esp)
 81d8af0:	00 
 81d8af1:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81d8af8:	00 
 81d8af9:	89 44 24 08          	mov    %eax,0x8(%esp)
 81d8afd:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d8b04:	00 
 81d8b05:	8d 85 58 f7 ff ff    	lea    -0x8a8(%ebp),%eax
 81d8b0b:	89 04 24             	mov    %eax,(%esp)
 81d8b0e:	e8 f9 b4 32 00       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 81d8b13:	83 f0 01             	xor    $0x1,%eax
 81d8b16:	84 c0                	test   %al,%al
 81d8b18:	74 14                	je     81d8b2e <_ZN26Dispatcher_MonstercardBind7processEP5CUserR8MSG_BASER9ParamBase+0x27e>
 81d8b1a:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81d8b1d:	c7 40 04 11 00 00 00 	movl   $0x11,0x4(%eax)
 81d8b24:	bb 00 00 00 00       	mov    $0x0,%ebx
 81d8b29:	e9 71 02 00 00       	jmp    81d8d9f <_ZN26Dispatcher_MonstercardBind7processEP5CUserR8MSG_BASER9ParamBase+0x4ef>
 81d8b2e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81d8b31:	0f b7 40 0f          	movzwl 0xf(%eax),%eax
 81d8b35:	98                   	cwtl
 81d8b36:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81d8b3d:	00 
 81d8b3e:	c7 44 24 10 2c 00 00 	movl   $0x2c,0x10(%esp)
 81d8b45:	00 
 81d8b46:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81d8b4d:	00 
 81d8b4e:	89 44 24 08          	mov    %eax,0x8(%esp)
 81d8b52:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d8b59:	00 
 81d8b5a:	8d 85 58 f7 ff ff    	lea    -0x8a8(%ebp),%eax
 81d8b60:	89 04 24             	mov    %eax,(%esp)
 81d8b63:	e8 a4 b4 32 00       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 81d8b68:	83 f0 01             	xor    $0x1,%eax
 81d8b6b:	84 c0                	test   %al,%al
 81d8b6d:	74 14                	je     81d8b83 <_ZN26Dispatcher_MonstercardBind7processEP5CUserR8MSG_BASER9ParamBase+0x2d3>
 81d8b6f:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81d8b72:	c7 40 04 11 00 00 00 	movl   $0x11,0x4(%eax)
 81d8b79:	bb 00 00 00 00       	mov    $0x0,%ebx
 81d8b7e:	e9 1c 02 00 00       	jmp    81d8d9f <_ZN26Dispatcher_MonstercardBind7processEP5CUserR8MSG_BASER9ParamBase+0x4ef>
 81d8b83:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81d8b86:	0f b7 40 11          	movzwl 0x11(%eax),%eax
 81d8b8a:	98                   	cwtl
 81d8b8b:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81d8b92:	00 
 81d8b93:	c7 44 24 10 2c 00 00 	movl   $0x2c,0x10(%esp)
 81d8b9a:	00 
 81d8b9b:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81d8ba2:	00 
 81d8ba3:	89 44 24 08          	mov    %eax,0x8(%esp)
 81d8ba7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d8bae:	00 
 81d8baf:	8d 85 58 f7 ff ff    	lea    -0x8a8(%ebp),%eax
 81d8bb5:	89 04 24             	mov    %eax,(%esp)
 81d8bb8:	e8 4f b4 32 00       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 81d8bbd:	83 f0 01             	xor    $0x1,%eax
 81d8bc0:	84 c0                	test   %al,%al
 81d8bc2:	74 14                	je     81d8bd8 <_ZN26Dispatcher_MonstercardBind7processEP5CUserR8MSG_BASER9ParamBase+0x328>
 81d8bc4:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81d8bc7:	c7 40 04 11 00 00 00 	movl   $0x11,0x4(%eax)
 81d8bce:	bb 00 00 00 00       	mov    $0x0,%ebx
 81d8bd3:	e9 c7 01 00 00       	jmp    81d8d9f <_ZN26Dispatcher_MonstercardBind7processEP5CUserR8MSG_BASER9ParamBase+0x4ef>
 81d8bd8:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81d8bdb:	89 04 24             	mov    %eax,(%esp)
 81d8bde:	e8 31 4c f0 ff       	call   80dd814 <_ZNKSt6vectorISt4pairIiiESaIS1_EE4sizeEv>
 81d8be3:	89 c3                	mov    %eax,%ebx
 81d8be5:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81d8be8:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d8bec:	8d 85 58 f7 ff ff    	lea    -0x8a8(%ebp),%eax
 81d8bf2:	89 04 24             	mov    %eax,(%esp)
 81d8bf5:	e8 64 db 32 00       	call   850675e <_ZN10CInventory19tryInsertEventItemsERKSt6vectorISt4pairIiiESaIS2_EE>
 81d8bfa:	39 c3                	cmp    %eax,%ebx
 81d8bfc:	0f 95 c0             	setne  %al
 81d8bff:	84 c0                	test   %al,%al
 81d8c01:	74 14                	je     81d8c17 <_ZN26Dispatcher_MonstercardBind7processEP5CUserR8MSG_BASER9ParamBase+0x367>
 81d8c03:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81d8c06:	c7 40 04 11 00 00 00 	movl   $0x11,0x4(%eax)
 81d8c0d:	bb 00 00 00 00       	mov    $0x0,%ebx
 81d8c12:	e9 88 01 00 00       	jmp    81d8d9f <_ZN26Dispatcher_MonstercardBind7processEP5CUserR8MSG_BASER9ParamBase+0x4ef>
 81d8c17:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d8c1a:	89 04 24             	mov    %eax,(%esp)
 81d8c1d:	e8 6c 16 f0 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 81d8c22:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d8c25:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81d8c28:	0f b7 40 0d          	movzwl 0xd(%eax),%eax
 81d8c2c:	98                   	cwtl
 81d8c2d:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 81d8c34:	00 
 81d8c35:	c7 44 24 10 2c 00 00 	movl   $0x2c,0x10(%esp)
 81d8c3c:	00 
 81d8c3d:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81d8c44:	00 
 81d8c45:	89 44 24 08          	mov    %eax,0x8(%esp)
 81d8c49:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d8c50:	00 
 81d8c51:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d8c54:	89 04 24             	mov    %eax,(%esp)
 81d8c57:	e8 b0 b3 32 00       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 81d8c5c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81d8c5f:	0f b7 40 0f          	movzwl 0xf(%eax),%eax
 81d8c63:	98                   	cwtl
 81d8c64:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 81d8c6b:	00 
 81d8c6c:	c7 44 24 10 2c 00 00 	movl   $0x2c,0x10(%esp)
 81d8c73:	00 
 81d8c74:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81d8c7b:	00 
 81d8c7c:	89 44 24 08          	mov    %eax,0x8(%esp)
 81d8c80:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d8c87:	00 
 81d8c88:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d8c8b:	89 04 24             	mov    %eax,(%esp)
 81d8c8e:	e8 79 b3 32 00       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 81d8c93:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81d8c96:	0f b7 40 11          	movzwl 0x11(%eax),%eax
 81d8c9a:	98                   	cwtl
 81d8c9b:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 81d8ca2:	00 
 81d8ca3:	c7 44 24 10 2c 00 00 	movl   $0x2c,0x10(%esp)
 81d8caa:	00 
 81d8cab:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81d8cb2:	00 
 81d8cb3:	89 44 24 08          	mov    %eax,0x8(%esp)
 81d8cb7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d8cbe:	00 
 81d8cbf:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d8cc2:	89 04 24             	mov    %eax,(%esp)
 81d8cc5:	e8 42 b3 32 00       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 81d8cca:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81d8ccd:	89 04 24             	mov    %eax,(%esp)
 81d8cd0:	e8 d7 54 eb ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 81d8cd5:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81d8cd8:	89 04 24             	mov    %eax,(%esp)
 81d8cdb:	e8 8e de eb ff       	call   8096b6e <_ZNSt6vectorIiSaIiEE5clearEv>
 81d8ce0:	c7 44 24 1c f9 13 bc 	movl   $0x8bc13f9,0x1c(%esp)
 81d8ce7:	08 
 81d8ce8:	c7 44 24 18 f9 13 bc 	movl   $0x8bc13f9,0x18(%esp)
 81d8cef:	08 
 81d8cf0:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81d8cf7:	00 
 81d8cf8:	c7 44 24 10 34 00 00 	movl   $0x34,0x10(%esp)
 81d8cff:	00 
 81d8d00:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d8d07:	00 
 81d8d08:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81d8d0b:	89 44 24 08          	mov    %eax,0x8(%esp)
 81d8d0f:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81d8d12:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d8d16:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d8d19:	89 04 24             	mov    %eax,(%esp)
 81d8d1c:	e8 91 de 32 00       	call   8506bb2 <_ZN10CInventory18insert_event_itemsERKSt6vectorISt4pairIiiESaIS2_EERS0_IiSaIiEE15eMoneyAddReason14eItemAddReasonbPKcSD_>
 81d8d21:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81d8d24:	0f b7 50 0d          	movzwl 0xd(%eax),%edx
 81d8d28:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81d8d2b:	66 89 50 08          	mov    %dx,0x8(%eax)
 81d8d2f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81d8d32:	0f b7 50 0f          	movzwl 0xf(%eax),%edx
 81d8d36:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81d8d39:	66 89 50 0a          	mov    %dx,0xa(%eax)
 81d8d3d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81d8d40:	0f b7 50 11          	movzwl 0x11(%eax),%edx
 81d8d44:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81d8d47:	66 89 50 0c          	mov    %dx,0xc(%eax)
 81d8d4b:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81d8d4e:	8d 50 10             	lea    0x10(%eax),%edx
 81d8d51:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81d8d54:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d8d58:	89 14 24             	mov    %edx,(%esp)
 81d8d5b:	e8 72 42 ef ff       	call   80ccfd2 <_ZNSt6vectorIiSaIiEEaSERKS1_>
 81d8d60:	bb 00 00 00 00       	mov    $0x0,%ebx
 81d8d65:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81d8d68:	89 04 24             	mov    %eax,(%esp)
 81d8d6b:	e8 6a b0 ea ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 81d8d70:	eb 2d                	jmp    81d8d9f <_ZN26Dispatcher_MonstercardBind7processEP5CUserR8MSG_BASER9ParamBase+0x4ef>
 81d8d72:	89 d3                	mov    %edx,%ebx
 81d8d74:	89 c6                	mov    %eax,%esi
 81d8d76:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81d8d79:	89 04 24             	mov    %eax,(%esp)
 81d8d7c:	e8 59 b0 ea ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 81d8d81:	89 f0                	mov    %esi,%eax
 81d8d83:	89 da                	mov    %ebx,%edx
 81d8d85:	eb 00                	jmp    81d8d87 <_ZN26Dispatcher_MonstercardBind7processEP5CUserR8MSG_BASER9ParamBase+0x4d7>
 81d8d87:	89 d3                	mov    %edx,%ebx
 81d8d89:	89 c6                	mov    %eax,%esi
 81d8d8b:	8d 85 58 f7 ff ff    	lea    -0x8a8(%ebp),%eax
 81d8d91:	89 04 24             	mov    %eax,(%esp)
 81d8d94:	e8 67 48 05 00       	call   822d600 <_ZN10CInventoryD1Ev>
 81d8d99:	89 f0                	mov    %esi,%eax
 81d8d9b:	89 da                	mov    %ebx,%edx
 81d8d9d:	eb 10                	jmp    81d8daf <_ZN26Dispatcher_MonstercardBind7processEP5CUserR8MSG_BASER9ParamBase+0x4ff>
 81d8d9f:	8d 85 58 f7 ff ff    	lea    -0x8a8(%ebp),%eax
 81d8da5:	89 04 24             	mov    %eax,(%esp)
 81d8da8:	e8 53 48 05 00       	call   822d600 <_ZN10CInventoryD1Ev>
 81d8dad:	eb 1b                	jmp    81d8dca <_ZN26Dispatcher_MonstercardBind7processEP5CUserR8MSG_BASER9ParamBase+0x51a>
 81d8daf:	89 d3                	mov    %edx,%ebx
 81d8db1:	89 c6                	mov    %eax,%esi
 81d8db3:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81d8db6:	89 04 24             	mov    %eax,(%esp)
 81d8db9:	e8 2c bc f5 ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 81d8dbe:	89 f0                	mov    %esi,%eax
 81d8dc0:	89 da                	mov    %ebx,%edx
 81d8dc2:	89 04 24             	mov    %eax,(%esp)
 81d8dc5:	e8 86 a9 90 00       	call   8ae3750 <_Unwind_Resume>
 81d8dca:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81d8dcd:	89 04 24             	mov    %eax,(%esp)
 81d8dd0:	e8 15 bc f5 ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 81d8dd5:	89 d8                	mov    %ebx,%eax
 81d8dd7:	8d 65 f8             	lea    -0x8(%ebp),%esp
 81d8dda:	83 c4 00             	add    $0x0,%esp
 81d8ddd:	5b                   	pop    %ebx
 81d8dde:	5e                   	pop    %esi
 81d8ddf:	5d                   	pop    %ebp
 81d8de0:	c3                   	ret
 81d8de1:	90                   	nop

```

```c
// Dispatcher_MonstercardBind::process @ 0x81d88b0

/* Dispatcher_MonstercardBind::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_MonstercardBind::process
          (Dispatcher_MonstercardBind *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  CDataManager *pCVar4;
  CInventory *pCVar5;
  int iVar6;
  InventoryMemory local_c9eb [49471];
  CInventory local_8ac [1977];
  undefined1 local_f3 [2];
  int local_f1;
  undefined1 local_b6 [2];
  int local_b4;
  undefined1 local_79 [2];
  int local_77;
  vector<int,std::allocator<int>> local_3c [12];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_30 [12];
  ParamBase *local_24;
  MSG_BASE *local_20;
  undefined4 local_1c;
  CItem *local_18;
  undefined4 local_14;
  CInventory *local_10;
  
  local_24 = param_3;
  uVar2 = check_error(this,param_1,param_2);
  *(undefined4 *)(local_24 + 4) = uVar2;
  if (*(int *)(local_24 + 4) < 1) {
    if (*(int *)(local_24 + 4) < 0) {
      uVar2 = LineFunc(0x44db,
                       "virtual int Dispatcher_MonstercardBind::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(local_24 + 4),0);
    }
    else {
      local_20 = param_2;
      iVar3 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      CInventory::GetInvenSlot((int)local_79,iVar3);
      pCVar4 = (CDataManager *)G_CDataManager();
      local_1c = CDataManager::find_item(pCVar4,local_77);
      iVar3 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      CInventory::GetInvenSlot((int)local_b6,iVar3);
      pCVar4 = (CDataManager *)G_CDataManager();
      local_18 = (CItem *)CDataManager::find_item(pCVar4,local_b4);
      iVar3 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      CInventory::GetInvenSlot((int)local_f3,iVar3);
      pCVar4 = (CDataManager *)G_CDataManager();
      local_14 = CDataManager::find_item(pCVar4,local_f1);
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_30);
                    /* try { // try from 081d8a32 to 081d8a95 has its CatchHandler @ 081d8daf */
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::clear(local_30);
      uVar2 = CItem::get_rarity(local_18);
      cVar1 = get_bind_result(this,param_1,(int)*(short *)(local_20 + 0xd),uVar2,local_30);
      if (cVar1 == '\x01') {
        CInventory::CInventory(local_8ac);
        InventoryMemory::InventoryMemory(local_c9eb);
        CInventory::SetInventoryMemory(local_8ac,local_c9eb);
        pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenRefR((CUserCharacInfo *)param_1);
                    /* try { // try from 081d8ad4 to 081d8cd4 has its CatchHandler @ 081d8d87 */
        CInventory::setCopy(local_8ac,pCVar5);
        cVar1 = CInventory::delete_item(local_8ac,1,(int)*(short *)(local_20 + 0xd),1,0x2c,0);
        if (cVar1 == '\x01') {
          cVar1 = CInventory::delete_item(local_8ac,1,(int)*(short *)(local_20 + 0xf),1,0x2c,0);
          if (cVar1 == '\x01') {
            cVar1 = CInventory::delete_item(local_8ac,1,(int)*(short *)(local_20 + 0x11),1,0x2c,0);
            if (cVar1 == '\x01') {
              iVar3 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                                (local_30);
              iVar6 = CInventory::tryInsertEventItems(local_8ac,(vector *)local_30);
              if (iVar3 == iVar6) {
                local_10 = (CInventory *)
                           CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                CInventory::delete_item(local_10,1,(int)*(short *)(local_20 + 0xd),1,0x2c,1);
                CInventory::delete_item(local_10,1,(int)*(short *)(local_20 + 0xf),1,0x2c,1);
                CInventory::delete_item(local_10,1,(int)*(short *)(local_20 + 0x11),1,0x2c,1);
                std::vector<int,std::allocator<int>>::vector(local_3c);
                    /* try { // try from 081d8cdb to 081d8d5f has its CatchHandler @ 081d8d72 */
                std::vector<int,std::allocator<int>>::clear(local_3c);
                CInventory::insert_event_items
                          (local_10,local_30,local_3c,0,0x34,0,&DAT_08bc13f9,&DAT_08bc13f9);
                *(undefined2 *)(local_24 + 8) = *(undefined2 *)(local_20 + 0xd);
                *(undefined2 *)(local_24 + 10) = *(undefined2 *)(local_20 + 0xf);
                *(undefined2 *)(local_24 + 0xc) = *(undefined2 *)(local_20 + 0x11);
                std::vector<int,std::allocator<int>>::operator=
                          ((vector<int,std::allocator<int>> *)(local_24 + 0x10),(vector *)local_3c);
                    /* try { // try from 081d8d6b to 081d8d6f has its CatchHandler @ 081d8d87 */
                std::vector<int,std::allocator<int>>::~vector(local_3c);
              }
              else {
                *(undefined4 *)(local_24 + 4) = 0x11;
              }
            }
            else {
              *(undefined4 *)(local_24 + 4) = 0x11;
            }
          }
          else {
            *(undefined4 *)(local_24 + 4) = 0x11;
          }
        }
        else {
          *(undefined4 *)(local_24 + 4) = 0x11;
        }
                    /* try { // try from 081d8da8 to 081d8dac has its CatchHandler @ 081d8daf */
        CInventory::~CInventory(local_8ac);
      }
      else {
        *(undefined4 *)(local_24 + 4) = 0x13;
      }
      uVar2 = 0;
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_30);
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## read

```asm
// === 081d82e8 Dispatcher_MonstercardBind::read  [0x081d82e8-0x81d83c3] ===
 81d82e8:	55                   	push   %ebp
 81d82e9:	89 e5                	mov    %esp,%ebp
 81d82eb:	83 ec 28             	sub    $0x28,%esp
 81d82ee:	8b 45 10             	mov    0x10(%ebp),%eax
 81d82f1:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d82f4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d82f7:	83 c0 0d             	add    $0xd,%eax
 81d82fa:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d82fe:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d8301:	89 04 24             	mov    %eax,(%esp)
 81d8304:	e8 b7 4c 3b 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 81d8309:	83 f0 01             	xor    $0x1,%eax
 81d830c:	84 c0                	test   %al,%al
 81d830e:	74 29                	je     81d8339 <_ZN26Dispatcher_MonstercardBind4readER9PacketBufR8MSG_BASE+0x51>
 81d8310:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d8317:	00 
 81d8318:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d831f:	00 
 81d8320:	c7 44 24 04 80 26 bd 	movl   $0x8bd2680,0x4(%esp)
 81d8327:	08 
 81d8328:	c7 04 24 4a 44 00 00 	movl   $0x444a,(%esp)
 81d832f:	e8 a3 85 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d8334:	e9 89 00 00 00       	jmp    81d83c2 <_ZN26Dispatcher_MonstercardBind4readER9PacketBufR8MSG_BASE+0xda>
 81d8339:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d833c:	83 c0 0f             	add    $0xf,%eax
 81d833f:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d8343:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d8346:	89 04 24             	mov    %eax,(%esp)
 81d8349:	e8 72 4c 3b 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 81d834e:	83 f0 01             	xor    $0x1,%eax
 81d8351:	84 c0                	test   %al,%al
 81d8353:	74 26                	je     81d837b <_ZN26Dispatcher_MonstercardBind4readER9PacketBufR8MSG_BASE+0x93>
 81d8355:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d835c:	00 
 81d835d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d8364:	00 
 81d8365:	c7 44 24 04 80 26 bd 	movl   $0x8bd2680,0x4(%esp)
 81d836c:	08 
 81d836d:	c7 04 24 4c 44 00 00 	movl   $0x444c,(%esp)
 81d8374:	e8 5e 85 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d8379:	eb 47                	jmp    81d83c2 <_ZN26Dispatcher_MonstercardBind4readER9PacketBufR8MSG_BASE+0xda>
 81d837b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d837e:	83 c0 11             	add    $0x11,%eax
 81d8381:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d8385:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d8388:	89 04 24             	mov    %eax,(%esp)
 81d838b:	e8 30 4c 3b 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 81d8390:	83 f0 01             	xor    $0x1,%eax
 81d8393:	84 c0                	test   %al,%al
 81d8395:	74 26                	je     81d83bd <_ZN26Dispatcher_MonstercardBind4readER9PacketBufR8MSG_BASE+0xd5>
 81d8397:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d839e:	00 
 81d839f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d83a6:	00 
 81d83a7:	c7 44 24 04 80 26 bd 	movl   $0x8bd2680,0x4(%esp)
 81d83ae:	08 
 81d83af:	c7 04 24 4e 44 00 00 	movl   $0x444e,(%esp)
 81d83b6:	e8 1c 85 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d83bb:	eb 05                	jmp    81d83c2 <_ZN26Dispatcher_MonstercardBind4readER9PacketBufR8MSG_BASE+0xda>
 81d83bd:	b8 00 00 00 00       	mov    $0x0,%eax
 81d83c2:	c9                   	leave
 81d83c3:	c3                   	ret

```

```c
// Dispatcher_MonstercardBind::read @ 0x81d82e8

/* Dispatcher_MonstercardBind::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_MonstercardBind::read
          (Dispatcher_MonstercardBind *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0xf));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0x11));
      if (cVar1 == '\x01') {
        uVar2 = 0;
      }
      else {
        uVar2 = LineFunc(0x444e,
                         "virtual int Dispatcher_MonstercardBind::read(PacketBuf&, MSG_BASE&)",0,0);
      }
    }
    else {
      uVar2 = LineFunc(0x444c,"virtual int Dispatcher_MonstercardBind::read(PacketBuf&, MSG_BASE&)",
                       0,0);
    }
  }
  else {
    uVar2 = LineFunc(0x444a,"virtual int Dispatcher_MonstercardBind::read(PacketBuf&, MSG_BASE&)",0,
                     0);
  }
  return uVar2;
}

```

---

## send

```asm
// === 081d9148 Dispatcher_MonstercardBind::send  [0x081d9148-0x81d9335] ===
 81d9148:	55                   	push   %ebp
 81d9149:	89 e5                	mov    %esp,%ebp
 81d914b:	56                   	push   %esi
 81d914c:	53                   	push   %ebx
 81d914d:	83 ec 40             	sub    $0x40,%esp
 81d9150:	8b 45 10             	mov    0x10(%ebp),%eax
 81d9153:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81d9156:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81d9159:	8b 40 04             	mov    0x4(%eax),%eax
 81d915c:	85 c0                	test   %eax,%eax
 81d915e:	74 25                	je     81d9185 <_ZN26Dispatcher_MonstercardBind4sendEP5CUserR9ParamBase+0x3d>
 81d9160:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81d9163:	8b 40 04             	mov    0x4(%eax),%eax
 81d9166:	0f b6 c0             	movzbl %al,%eax
 81d9169:	89 44 24 08          	mov    %eax,0x8(%esp)
 81d916d:	c7 44 24 04 9e 01 00 	movl   $0x19e,0x4(%esp)
 81d9174:	00 
 81d9175:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d9178:	89 04 24             	mov    %eax,(%esp)
 81d917b:	e8 c2 2d 4a 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81d9180:	e9 aa 01 00 00       	jmp    81d932f <_ZN26Dispatcher_MonstercardBind4sendEP5CUserR9ParamBase+0x1e7>
 81d9185:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81d9188:	89 04 24             	mov    %eax,(%esp)
 81d918b:	e8 bc 4b 3b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81d9190:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81d9193:	89 04 24             	mov    %eax,(%esp)
 81d9196:	e8 4b 27 ef ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 81d919b:	c7 44 24 08 9e 01 00 	movl   $0x19e,0x8(%esp)
 81d91a2:	00 
 81d91a3:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d91aa:	00 
 81d91ab:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81d91ae:	89 04 24             	mov    %eax,(%esp)
 81d91b1:	e8 46 27 ef ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81d91b6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d91bd:	00 
 81d91be:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81d91c1:	89 04 24             	mov    %eax,(%esp)
 81d91c4:	e8 57 27 ef ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81d91c9:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81d91cc:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 81d91d0:	98                   	cwtl
 81d91d1:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d91d5:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81d91d8:	89 04 24             	mov    %eax,(%esp)
 81d91db:	e8 c4 0c f0 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 81d91e0:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81d91e3:	0f b7 40 0a          	movzwl 0xa(%eax),%eax
 81d91e7:	98                   	cwtl
 81d91e8:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d91ec:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81d91ef:	89 04 24             	mov    %eax,(%esp)
 81d91f2:	e8 ad 0c f0 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 81d91f7:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81d91fa:	0f b7 40 0c          	movzwl 0xc(%eax),%eax
 81d91fe:	98                   	cwtl
 81d91ff:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d9203:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81d9206:	89 04 24             	mov    %eax,(%esp)
 81d9209:	e8 96 0c f0 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 81d920e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81d9211:	83 c0 10             	add    $0x10,%eax
 81d9214:	89 45 e8             	mov    %eax,-0x18(%ebp)
 81d9217:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81d921a:	89 04 24             	mov    %eax,(%esp)
 81d921d:	e8 9e 4f eb ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 81d9222:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 81d9225:	ba ab aa aa aa       	mov    $0xaaaaaaab,%edx
 81d922a:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81d922d:	f7 e2                	mul    %edx
 81d922f:	89 d0                	mov    %edx,%eax
 81d9231:	d1 e8                	shr    $1,%eax
 81d9233:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81d9236:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81d9239:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d923d:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81d9240:	89 04 24             	mov    %eax,(%esp)
 81d9243:	e8 d8 26 ef ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81d9248:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 81d924f:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 81d9256:	eb 79                	jmp    81d92d1 <_ZN26Dispatcher_MonstercardBind4sendEP5CUserR9ParamBase+0x189>
 81d9258:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d925b:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 81d925f:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d9263:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81d9266:	89 04 24             	mov    %eax,(%esp)
 81d9269:	e8 6e 4f eb ff       	call   808e1dc <_ZNSt6vectorIiSaIiEEixEj>
 81d926e:	8b 00                	mov    (%eax),%eax
 81d9270:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d9274:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81d9277:	89 04 24             	mov    %eax,(%esp)
 81d927a:	e8 25 0c f0 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 81d927f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d9282:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 81d9286:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d928a:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81d928d:	89 04 24             	mov    %eax,(%esp)
 81d9290:	e8 47 4f eb ff       	call   808e1dc <_ZNSt6vectorIiSaIiEEixEj>
 81d9295:	8b 00                	mov    (%eax),%eax
 81d9297:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d929b:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81d929e:	89 04 24             	mov    %eax,(%esp)
 81d92a1:	e8 96 26 ef ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81d92a6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d92a9:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 81d92ad:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d92b1:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81d92b4:	89 04 24             	mov    %eax,(%esp)
 81d92b7:	e8 20 4f eb ff       	call   808e1dc <_ZNSt6vectorIiSaIiEEixEj>
 81d92bc:	8b 00                	mov    (%eax),%eax
 81d92be:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d92c2:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81d92c5:	89 04 24             	mov    %eax,(%esp)
 81d92c8:	e8 6f 26 ef ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81d92cd:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 81d92d1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d92d4:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 81d92d7:	0f 9c c0             	setl   %al
 81d92da:	84 c0                	test   %al,%al
 81d92dc:	0f 85 76 ff ff ff    	jne    81d9258 <_ZN26Dispatcher_MonstercardBind4sendEP5CUserR9ParamBase+0x110>
 81d92e2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d92e9:	00 
 81d92ea:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81d92ed:	89 04 24             	mov    %eax,(%esp)
 81d92f0:	e8 63 26 ef ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81d92f5:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81d92f8:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d92fc:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d92ff:	89 04 24             	mov    %eax,(%esp)
 81d9302:	e8 b3 f2 46 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81d9307:	eb 1b                	jmp    81d9324 <_ZN26Dispatcher_MonstercardBind4sendEP5CUserR9ParamBase+0x1dc>
 81d9309:	89 d3                	mov    %edx,%ebx
 81d930b:	89 c6                	mov    %eax,%esi
 81d930d:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81d9310:	89 04 24             	mov    %eax,(%esp)
 81d9313:	e8 68 4b 3b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81d9318:	89 f0                	mov    %esi,%eax
 81d931a:	89 da                	mov    %ebx,%edx
 81d931c:	89 04 24             	mov    %eax,(%esp)
 81d931f:	e8 2c a4 90 00       	call   8ae3750 <_Unwind_Resume>
 81d9324:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81d9327:	89 04 24             	mov    %eax,(%esp)
 81d932a:	e8 51 4b 3b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81d932f:	83 c4 40             	add    $0x40,%esp
 81d9332:	5b                   	pop    %ebx
 81d9333:	5e                   	pop    %esi
 81d9334:	5d                   	pop    %ebp
 81d9335:	c3                   	ret

```

```c
// Dispatcher_MonstercardBind::send @ 0x81d9148

/* Dispatcher_MonstercardBind::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_MonstercardBind::send(Dispatcher_MonstercardBind *this,CUser *param_1,ParamBase *param_2)

{
  uint uVar1;
  int *piVar2;
  PacketGuard local_2c [12];
  ParamBase *local_20;
  vector<int,std::allocator<int>> *local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  
  local_20 = param_2;
  if (*(int *)(param_2 + 4) == 0) {
    PacketGuard::PacketGuard(local_2c);
                    /* try { // try from 081d9196 to 081d9306 has its CatchHandler @ 081d9309 */
    InterfacePacketBuf::clear((InterfacePacketBuf *)local_2c);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_2c,1,0x19e);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_2c,(int)*(short *)(local_20 + 8));
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_2c,(int)*(short *)(local_20 + 10));
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_2c,(int)*(short *)(local_20 + 0xc));
    local_1c = (vector<int,std::allocator<int>> *)(local_20 + 0x10);
    local_18 = std::vector<int,std::allocator<int>>::size(local_1c);
    local_18 = local_18 / 3;
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,local_18);
    local_14 = 0;
    for (local_10 = 0; uVar1 = local_14, local_10 < (int)local_18; local_10 = local_10 + 1) {
      local_14 = local_14 + 1;
      piVar2 = (int *)std::vector<int,std::allocator<int>>::operator[](local_1c,uVar1);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_2c,*piVar2);
      uVar1 = local_14;
      local_14 = local_14 + 1;
      piVar2 = (int *)std::vector<int,std::allocator<int>>::operator[](local_1c,uVar1);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,*piVar2);
      uVar1 = local_14;
      local_14 = local_14 + 1;
      piVar2 = (int *)std::vector<int,std::allocator<int>>::operator[](local_1c,uVar1);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,*piVar2);
    }
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_2c,true);
    CUser::Send(param_1,local_2c);
    PacketGuard::~PacketGuard(local_2c);
  }
  else {
    CUser::SendCmdErrorPacket(param_1,0x19e,*(uint *)(param_2 + 4) & 0xff);
  }
  return;
}

```

