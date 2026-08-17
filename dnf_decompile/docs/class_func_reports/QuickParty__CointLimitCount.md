# QuickParty__CointLimitCount

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## process

```asm
// === 0826d4ac QuickParty::CointLimitCount::process  [0x0826d4ac-0x826d597] ===
 826d4ac:	55                   	push   %ebp
 826d4ad:	89 e5                	mov    %esp,%ebp
 826d4af:	56                   	push   %esi
 826d4b0:	53                   	push   %ebx
 826d4b1:	83 ec 20             	sub    $0x20,%esp
 826d4b4:	8b 45 08             	mov    0x8(%ebp),%eax
 826d4b7:	8d 48 08             	lea    0x8(%eax),%ecx
 826d4ba:	8b 45 08             	mov    0x8(%ebp),%eax
 826d4bd:	8b 40 04             	mov    0x4(%eax),%eax
 826d4c0:	8d 50 38             	lea    0x38(%eax),%edx
 826d4c3:	8d 45 e8             	lea    -0x18(%ebp),%eax
 826d4c6:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 826d4ca:	89 54 24 04          	mov    %edx,0x4(%esp)
 826d4ce:	89 04 24             	mov    %eax,(%esp)
 826d4d1:	e8 18 0b 00 00       	call   826dfee <_ZNKSt3mapIN10QuickParty14RandomBuffTypeENS0_21LevelDataRandomRewardESt4lessIS1_ESaISt4pairIKS1_S2_EEE4findERS6_>
 826d4d6:	83 ec 04             	sub    $0x4,%esp
 826d4d9:	8b 45 08             	mov    0x8(%ebp),%eax
 826d4dc:	8b 40 04             	mov    0x4(%eax),%eax
 826d4df:	8d 50 38             	lea    0x38(%eax),%edx
 826d4e2:	8d 45 ec             	lea    -0x14(%ebp),%eax
 826d4e5:	89 54 24 04          	mov    %edx,0x4(%esp)
 826d4e9:	89 04 24             	mov    %eax,(%esp)
 826d4ec:	e8 29 0b 00 00       	call   826e01a <_ZNKSt3mapIN10QuickParty14RandomBuffTypeENS0_21LevelDataRandomRewardESt4lessIS1_ESaISt4pairIKS1_S2_EEE3endEv>
 826d4f1:	83 ec 04             	sub    $0x4,%esp
 826d4f4:	8d 45 ec             	lea    -0x14(%ebp),%eax
 826d4f7:	89 44 24 04          	mov    %eax,0x4(%esp)
 826d4fb:	8d 45 e8             	lea    -0x18(%ebp),%eax
 826d4fe:	89 04 24             	mov    %eax,(%esp)
 826d501:	e8 3a 0b 00 00       	call   826e040 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKN10QuickParty14RandomBuffTypeENS1_21LevelDataRandomRewardEEEeqERKS6_>
 826d506:	84 c0                	test   %al,%al
 826d508:	75 7c                	jne    826d586 <_ZN10QuickParty15CointLimitCount7processENS_16RewardData_ParamERNS_17RewardData_ResultE+0xda>
 826d50a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 826d50d:	89 04 24             	mov    %eax,(%esp)
 826d510:	e8 3f 0b 00 00       	call   826e054 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKN10QuickParty14RandomBuffTypeENS1_21LevelDataRandomRewardEEEptEv>
 826d515:	83 c0 0c             	add    $0xc,%eax
 826d518:	89 04 24             	mov    %eax,(%esp)
 826d51b:	e8 72 0a 00 00       	call   826df92 <_ZNKSt6vectorIN10QuickParty9LevelDataESaIS1_EE4sizeEv>
 826d520:	89 45 f0             	mov    %eax,-0x10(%ebp)
 826d523:	8b 45 0c             	mov    0xc(%ebp),%eax
 826d526:	89 04 24             	mov    %eax,(%esp)
 826d529:	e8 3c cc 32 00       	call   859a16a <_ZN6CParty16get_member_countEv>
 826d52e:	83 e8 02             	sub    $0x2,%eax
 826d531:	89 45 f4             	mov    %eax,-0xc(%ebp)
 826d534:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 826d538:	78 4f                	js     826d589 <_ZN10QuickParty15CointLimitCount7processENS_16RewardData_ParamERNS_17RewardData_ResultE+0xdd>
 826d53a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 826d53d:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 826d540:	7d 4a                	jge    826d58c <_ZN10QuickParty15CointLimitCount7processENS_16RewardData_ParamERNS_17RewardData_ResultE+0xe0>
 826d542:	8b 45 14             	mov    0x14(%ebp),%eax
 826d545:	8b 30                	mov    (%eax),%esi
 826d547:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 826d54a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 826d54d:	89 04 24             	mov    %eax,(%esp)
 826d550:	e8 ff 0a 00 00       	call   826e054 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKN10QuickParty14RandomBuffTypeENS1_21LevelDataRandomRewardEEEptEv>
 826d555:	83 c0 0c             	add    $0xc,%eax
 826d558:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 826d55c:	89 04 24             	mov    %eax,(%esp)
 826d55f:	e8 4a 0a 00 00       	call   826dfae <_ZNKSt6vectorIN10QuickParty9LevelDataESaIS1_EEixEj>
 826d564:	8b 40 04             	mov    0x4(%eax),%eax
 826d567:	89 f2                	mov    %esi,%edx
 826d569:	29 c2                	sub    %eax,%edx
 826d56b:	8b 45 14             	mov    0x14(%ebp),%eax
 826d56e:	89 10                	mov    %edx,(%eax)
 826d570:	8b 45 14             	mov    0x14(%ebp),%eax
 826d573:	8b 10                	mov    (%eax),%edx
 826d575:	8b 45 0c             	mov    0xc(%ebp),%eax
 826d578:	89 54 24 04          	mov    %edx,0x4(%esp)
 826d57c:	89 04 24             	mov    %eax,(%esp)
 826d57f:	e8 d4 e6 32 00       	call   859bc58 <_ZN6CParty27increase_dungeon_coin_countEi>
 826d584:	eb 07                	jmp    826d58d <_ZN10QuickParty15CointLimitCount7processENS_16RewardData_ParamERNS_17RewardData_ResultE+0xe1>
 826d586:	90                   	nop
 826d587:	eb 04                	jmp    826d58d <_ZN10QuickParty15CointLimitCount7processENS_16RewardData_ParamERNS_17RewardData_ResultE+0xe1>
 826d589:	90                   	nop
 826d58a:	eb 01                	jmp    826d58d <_ZN10QuickParty15CointLimitCount7processENS_16RewardData_ParamERNS_17RewardData_ResultE+0xe1>
 826d58c:	90                   	nop
 826d58d:	8d 65 f8             	lea    -0x8(%ebp),%esp
 826d590:	83 c4 00             	add    $0x0,%esp
 826d593:	5b                   	pop    %ebx
 826d594:	5e                   	pop    %esi
 826d595:	5d                   	pop    %ebp
 826d596:	c3                   	ret
 826d597:	90                   	nop

```

```c
// QuickParty::CointLimitCount::process @ 0x826d4ac

/* QuickParty::CointLimitCount::process(QuickParty::RewardData_Param,
   QuickParty::RewardData_Result&) */

void QuickParty::CointLimitCount::process
               (undefined4 param_1,CParty *param_2,undefined4 param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  _Rb_tree_const_iterator<std::pair<QuickParty::RandomBuffType_const,QuickParty::LevelDataRandomReward>>
  local_1c [4];
  map<QuickParty::RandomBuffType,QuickParty::LevelDataRandomReward,std::less<QuickParty::RandomBuffType>,std::allocator<std::pair<QuickParty::RandomBuffType_const,QuickParty::LevelDataRandomReward>>>
  local_18 [4];
  int local_14;
  uint local_10;
  
  std::
  map<QuickParty::RandomBuffType,QuickParty::LevelDataRandomReward,std::less<QuickParty::RandomBuffType>,std::allocator<std::pair<QuickParty::RandomBuffType_const,QuickParty::LevelDataRandomReward>>>
  ::find(local_1c);
  std::
  map<QuickParty::RandomBuffType,QuickParty::LevelDataRandomReward,std::less<QuickParty::RandomBuffType>,std::allocator<std::pair<QuickParty::RandomBuffType_const,QuickParty::LevelDataRandomReward>>>
  ::end(local_18);
  cVar1 = std::
          _Rb_tree_const_iterator<std::pair<QuickParty::RandomBuffType_const,QuickParty::LevelDataRandomReward>>
          ::operator==(local_1c,(_Rb_tree_const_iterator *)local_18);
  if (cVar1 == '\0') {
    iVar2 = std::
            _Rb_tree_const_iterator<std::pair<QuickParty::RandomBuffType_const,QuickParty::LevelDataRandomReward>>
            ::operator->(local_1c);
    local_14 = std::vector<QuickParty::LevelData,std::allocator<QuickParty::LevelData>>::size
                         ((vector<QuickParty::LevelData,std::allocator<QuickParty::LevelData>> *)
                          (iVar2 + 0xc));
    iVar2 = CParty::get_member_count(param_2);
    uVar3 = iVar2 - 2;
    if ((-1 < (int)uVar3) && ((int)uVar3 < local_14)) {
      iVar2 = *param_4;
      local_10 = uVar3;
      iVar4 = std::
              _Rb_tree_const_iterator<std::pair<QuickParty::RandomBuffType_const,QuickParty::LevelDataRandomReward>>
              ::operator->(local_1c);
      iVar4 = std::vector<QuickParty::LevelData,std::allocator<QuickParty::LevelData>>::operator[]
                        ((vector<QuickParty::LevelData,std::allocator<QuickParty::LevelData>> *)
                         (iVar4 + 0xc),uVar3);
      *param_4 = iVar2 - *(int *)(iVar4 + 4);
      CParty::increase_dungeon_coin_count(param_2,*param_4);
    }
  }
  return;
}

```

