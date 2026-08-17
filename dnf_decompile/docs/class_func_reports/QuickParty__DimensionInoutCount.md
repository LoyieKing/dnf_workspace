# QuickParty__DimensionInoutCount

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## process

```asm
// === 0826d5ac QuickParty::DimensionInoutCount::process  [0x0826d5ac-0x826d687] ===
 826d5ac:	55                   	push   %ebp
 826d5ad:	89 e5                	mov    %esp,%ebp
 826d5af:	53                   	push   %ebx
 826d5b0:	83 ec 24             	sub    $0x24,%esp
 826d5b3:	8b 45 08             	mov    0x8(%ebp),%eax
 826d5b6:	8d 48 08             	lea    0x8(%eax),%ecx
 826d5b9:	8b 45 08             	mov    0x8(%ebp),%eax
 826d5bc:	8b 40 04             	mov    0x4(%eax),%eax
 826d5bf:	8d 50 38             	lea    0x38(%eax),%edx
 826d5c2:	8d 45 e8             	lea    -0x18(%ebp),%eax
 826d5c5:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 826d5c9:	89 54 24 04          	mov    %edx,0x4(%esp)
 826d5cd:	89 04 24             	mov    %eax,(%esp)
 826d5d0:	e8 19 0a 00 00       	call   826dfee <_ZNKSt3mapIN10QuickParty14RandomBuffTypeENS0_21LevelDataRandomRewardESt4lessIS1_ESaISt4pairIKS1_S2_EEE4findERS6_>
 826d5d5:	83 ec 04             	sub    $0x4,%esp
 826d5d8:	8b 45 08             	mov    0x8(%ebp),%eax
 826d5db:	8b 40 04             	mov    0x4(%eax),%eax
 826d5de:	8d 50 38             	lea    0x38(%eax),%edx
 826d5e1:	8d 45 ec             	lea    -0x14(%ebp),%eax
 826d5e4:	89 54 24 04          	mov    %edx,0x4(%esp)
 826d5e8:	89 04 24             	mov    %eax,(%esp)
 826d5eb:	e8 2a 0a 00 00       	call   826e01a <_ZNKSt3mapIN10QuickParty14RandomBuffTypeENS0_21LevelDataRandomRewardESt4lessIS1_ESaISt4pairIKS1_S2_EEE3endEv>
 826d5f0:	83 ec 04             	sub    $0x4,%esp
 826d5f3:	8d 45 ec             	lea    -0x14(%ebp),%eax
 826d5f6:	89 44 24 04          	mov    %eax,0x4(%esp)
 826d5fa:	8d 45 e8             	lea    -0x18(%ebp),%eax
 826d5fd:	89 04 24             	mov    %eax,(%esp)
 826d600:	e8 3b 0a 00 00       	call   826e040 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKN10QuickParty14RandomBuffTypeENS1_21LevelDataRandomRewardEEEeqERKS6_>
 826d605:	84 c0                	test   %al,%al
 826d607:	75 73                	jne    826d67c <_ZN10QuickParty19DimensionInoutCount7processENS_16RewardData_ParamERNS_17RewardData_ResultE+0xd0>
 826d609:	8d 45 e8             	lea    -0x18(%ebp),%eax
 826d60c:	89 04 24             	mov    %eax,(%esp)
 826d60f:	e8 40 0a 00 00       	call   826e054 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKN10QuickParty14RandomBuffTypeENS1_21LevelDataRandomRewardEEEptEv>
 826d614:	83 c0 0c             	add    $0xc,%eax
 826d617:	89 04 24             	mov    %eax,(%esp)
 826d61a:	e8 73 09 00 00       	call   826df92 <_ZNKSt6vectorIN10QuickParty9LevelDataESaIS1_EE4sizeEv>
 826d61f:	89 45 f0             	mov    %eax,-0x10(%ebp)
 826d622:	8b 45 0c             	mov    0xc(%ebp),%eax
 826d625:	89 04 24             	mov    %eax,(%esp)
 826d628:	e8 3d cb 32 00       	call   859a16a <_ZN6CParty16get_member_countEv>
 826d62d:	83 e8 02             	sub    $0x2,%eax
 826d630:	89 45 f4             	mov    %eax,-0xc(%ebp)
 826d633:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 826d637:	78 46                	js     826d67f <_ZN10QuickParty19DimensionInoutCount7processENS_16RewardData_ParamERNS_17RewardData_ResultE+0xd3>
 826d639:	8b 45 f4             	mov    -0xc(%ebp),%eax
 826d63c:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 826d63f:	7d 41                	jge    826d682 <_ZN10QuickParty19DimensionInoutCount7processENS_16RewardData_ParamERNS_17RewardData_ResultE+0xd6>
 826d641:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 826d644:	8d 45 e8             	lea    -0x18(%ebp),%eax
 826d647:	89 04 24             	mov    %eax,(%esp)
 826d64a:	e8 05 0a 00 00       	call   826e054 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKN10QuickParty14RandomBuffTypeENS1_21LevelDataRandomRewardEEEptEv>
 826d64f:	83 c0 0c             	add    $0xc,%eax
 826d652:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 826d656:	89 04 24             	mov    %eax,(%esp)
 826d659:	e8 50 09 00 00       	call   826dfae <_ZNKSt6vectorIN10QuickParty9LevelDataESaIS1_EEixEj>
 826d65e:	8b 50 04             	mov    0x4(%eax),%edx
 826d661:	8b 45 14             	mov    0x14(%ebp),%eax
 826d664:	89 10                	mov    %edx,(%eax)
 826d666:	8b 45 14             	mov    0x14(%ebp),%eax
 826d669:	8b 10                	mov    (%eax),%edx
 826d66b:	8b 45 0c             	mov    0xc(%ebp),%eax
 826d66e:	89 54 24 04          	mov    %edx,0x4(%esp)
 826d672:	89 04 24             	mov    %eax,(%esp)
 826d675:	e8 68 e9 32 00       	call   859bfe2 <_ZN6CParty30increase_dimension_inout_countEi>
 826d67a:	eb 07                	jmp    826d683 <_ZN10QuickParty19DimensionInoutCount7processENS_16RewardData_ParamERNS_17RewardData_ResultE+0xd7>
 826d67c:	90                   	nop
 826d67d:	eb 04                	jmp    826d683 <_ZN10QuickParty19DimensionInoutCount7processENS_16RewardData_ParamERNS_17RewardData_ResultE+0xd7>
 826d67f:	90                   	nop
 826d680:	eb 01                	jmp    826d683 <_ZN10QuickParty19DimensionInoutCount7processENS_16RewardData_ParamERNS_17RewardData_ResultE+0xd7>
 826d682:	90                   	nop
 826d683:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 826d686:	c9                   	leave
 826d687:	c3                   	ret

```

```c
// QuickParty::DimensionInoutCount::process @ 0x826d5ac

/* QuickParty::DimensionInoutCount::process(QuickParty::RewardData_Param,
   QuickParty::RewardData_Result&) */

void QuickParty::DimensionInoutCount::process
               (undefined4 param_1,CParty *param_2,undefined4 param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
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
      local_10 = uVar3;
      iVar2 = std::
              _Rb_tree_const_iterator<std::pair<QuickParty::RandomBuffType_const,QuickParty::LevelDataRandomReward>>
              ::operator->(local_1c);
      iVar2 = std::vector<QuickParty::LevelData,std::allocator<QuickParty::LevelData>>::operator[]
                        ((vector<QuickParty::LevelData,std::allocator<QuickParty::LevelData>> *)
                         (iVar2 + 0xc),uVar3);
      *param_4 = *(int *)(iVar2 + 4);
      CParty::increase_dimension_inout_count(param_2,*param_4);
    }
  }
  return;
}

```

