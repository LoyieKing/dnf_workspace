# QuickParty__QuestItemDropRate

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## process

```asm
// === 0826d398 QuickParty::QuestItemDropRate::process  [0x0826d398-0x826d4ab] ===
 826d398:	55                   	push   %ebp
 826d399:	89 e5                	mov    %esp,%ebp
 826d39b:	53                   	push   %ebx
 826d39c:	83 ec 44             	sub    $0x44,%esp
 826d39f:	8b 45 08             	mov    0x8(%ebp),%eax
 826d3a2:	8d 48 08             	lea    0x8(%eax),%ecx
 826d3a5:	8b 45 08             	mov    0x8(%ebp),%eax
 826d3a8:	8b 40 04             	mov    0x4(%eax),%eax
 826d3ab:	8d 50 38             	lea    0x38(%eax),%edx
 826d3ae:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 826d3b1:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 826d3b5:	89 54 24 04          	mov    %edx,0x4(%esp)
 826d3b9:	89 04 24             	mov    %eax,(%esp)
 826d3bc:	e8 2d 0c 00 00       	call   826dfee <_ZNKSt3mapIN10QuickParty14RandomBuffTypeENS0_21LevelDataRandomRewardESt4lessIS1_ESaISt4pairIKS1_S2_EEE4findERS6_>
 826d3c1:	83 ec 04             	sub    $0x4,%esp
 826d3c4:	8b 45 08             	mov    0x8(%ebp),%eax
 826d3c7:	8b 40 04             	mov    0x4(%eax),%eax
 826d3ca:	8d 50 38             	lea    0x38(%eax),%edx
 826d3cd:	8d 45 e8             	lea    -0x18(%ebp),%eax
 826d3d0:	89 54 24 04          	mov    %edx,0x4(%esp)
 826d3d4:	89 04 24             	mov    %eax,(%esp)
 826d3d7:	e8 3e 0c 00 00       	call   826e01a <_ZNKSt3mapIN10QuickParty14RandomBuffTypeENS0_21LevelDataRandomRewardESt4lessIS1_ESaISt4pairIKS1_S2_EEE3endEv>
 826d3dc:	83 ec 04             	sub    $0x4,%esp
 826d3df:	8d 45 e8             	lea    -0x18(%ebp),%eax
 826d3e2:	89 44 24 04          	mov    %eax,0x4(%esp)
 826d3e6:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 826d3e9:	89 04 24             	mov    %eax,(%esp)
 826d3ec:	e8 4f 0c 00 00       	call   826e040 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKN10QuickParty14RandomBuffTypeENS1_21LevelDataRandomRewardEEEeqERKS6_>
 826d3f1:	84 c0                	test   %al,%al
 826d3f3:	0f 85 a6 00 00 00    	jne    826d49f <_ZN10QuickParty17QuestItemDropRate7processENS_16RewardData_ParamERNS_17RewardData_ResultE+0x107>
 826d3f9:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 826d3fc:	89 04 24             	mov    %eax,(%esp)
 826d3ff:	e8 50 0c 00 00       	call   826e054 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKN10QuickParty14RandomBuffTypeENS1_21LevelDataRandomRewardEEEptEv>
 826d404:	83 c0 0c             	add    $0xc,%eax
 826d407:	89 04 24             	mov    %eax,(%esp)
 826d40a:	e8 83 0b 00 00       	call   826df92 <_ZNKSt6vectorIN10QuickParty9LevelDataESaIS1_EE4sizeEv>
 826d40f:	89 45 ec             	mov    %eax,-0x14(%ebp)
 826d412:	8b 45 0c             	mov    0xc(%ebp),%eax
 826d415:	89 04 24             	mov    %eax,(%esp)
 826d418:	e8 4d cd 32 00       	call   859a16a <_ZN6CParty16get_member_countEv>
 826d41d:	83 e8 02             	sub    $0x2,%eax
 826d420:	89 45 f0             	mov    %eax,-0x10(%ebp)
 826d423:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 826d427:	78 79                	js     826d4a2 <_ZN10QuickParty17QuestItemDropRate7processENS_16RewardData_ParamERNS_17RewardData_ResultE+0x10a>
 826d429:	8b 45 f0             	mov    -0x10(%ebp),%eax
 826d42c:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 826d42f:	7d 74                	jge    826d4a5 <_ZN10QuickParty17QuestItemDropRate7processENS_16RewardData_ParamERNS_17RewardData_ResultE+0x10d>
 826d431:	b8 00 00 80 3f       	mov    $0x3f800000,%eax
 826d436:	89 45 f4             	mov    %eax,-0xc(%ebp)
 826d439:	8b 5d f0             	mov    -0x10(%ebp),%ebx
 826d43c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 826d43f:	89 04 24             	mov    %eax,(%esp)
 826d442:	e8 0d 0c 00 00       	call   826e054 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKN10QuickParty14RandomBuffTypeENS1_21LevelDataRandomRewardEEEptEv>
 826d447:	83 c0 0c             	add    $0xc,%eax
 826d44a:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 826d44e:	89 04 24             	mov    %eax,(%esp)
 826d451:	e8 58 0b 00 00       	call   826dfae <_ZNKSt6vectorIN10QuickParty9LevelDataESaIS1_EEixEj>
 826d456:	8b 40 04             	mov    0x4(%eax),%eax
 826d459:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 826d45c:	db 45 d4             	fildl  -0x2c(%ebp)
 826d45f:	d9 05 58 74 bf 08    	flds   0x8bf7458
 826d465:	de f9                	fdivrp %st,%st(1)
 826d467:	d9 45 f4             	flds   -0xc(%ebp)
 826d46a:	de c1                	faddp  %st,%st(1)
 826d46c:	d9 5d f4             	fstps  -0xc(%ebp)
 826d46f:	8b 45 14             	mov    0x14(%ebp),%eax
 826d472:	8b 40 18             	mov    0x18(%eax),%eax
 826d475:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 826d478:	db 45 d4             	fildl  -0x2c(%ebp)
 826d47b:	d8 4d f4             	fmuls  -0xc(%ebp)
 826d47e:	d9 7d d2             	fnstcw -0x2e(%ebp)
 826d481:	0f b7 45 d2          	movzwl -0x2e(%ebp),%eax
 826d485:	b4 0c                	mov    $0xc,%ah
 826d487:	66 89 45 d0          	mov    %ax,-0x30(%ebp)
 826d48b:	d9 6d d0             	fldcw  -0x30(%ebp)
 826d48e:	db 5d d4             	fistpl -0x2c(%ebp)
 826d491:	d9 6d d2             	fldcw  -0x2e(%ebp)
 826d494:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 826d497:	8b 45 14             	mov    0x14(%ebp),%eax
 826d49a:	89 50 18             	mov    %edx,0x18(%eax)
 826d49d:	eb 07                	jmp    826d4a6 <_ZN10QuickParty17QuestItemDropRate7processENS_16RewardData_ParamERNS_17RewardData_ResultE+0x10e>
 826d49f:	90                   	nop
 826d4a0:	eb 04                	jmp    826d4a6 <_ZN10QuickParty17QuestItemDropRate7processENS_16RewardData_ParamERNS_17RewardData_ResultE+0x10e>
 826d4a2:	90                   	nop
 826d4a3:	eb 01                	jmp    826d4a6 <_ZN10QuickParty17QuestItemDropRate7processENS_16RewardData_ParamERNS_17RewardData_ResultE+0x10e>
 826d4a5:	90                   	nop
 826d4a6:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 826d4a9:	c9                   	leave
 826d4aa:	c3                   	ret
 826d4ab:	90                   	nop

```

```c
// QuickParty::QuestItemDropRate::process @ 0x826d398

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* QuickParty::QuestItemDropRate::process(QuickParty::RewardData_Param,
   QuickParty::RewardData_Result&) */

void QuickParty::QuestItemDropRate::process
               (undefined4 param_1,CParty *param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  _Rb_tree_const_iterator<std::pair<QuickParty::RandomBuffType_const,QuickParty::LevelDataRandomReward>>
  local_20 [4];
  map<QuickParty::RandomBuffType,QuickParty::LevelDataRandomReward,std::less<QuickParty::RandomBuffType>,std::allocator<std::pair<QuickParty::RandomBuffType_const,QuickParty::LevelDataRandomReward>>>
  local_1c [4];
  int local_18;
  uint local_14;
  float local_10;
  
  std::
  map<QuickParty::RandomBuffType,QuickParty::LevelDataRandomReward,std::less<QuickParty::RandomBuffType>,std::allocator<std::pair<QuickParty::RandomBuffType_const,QuickParty::LevelDataRandomReward>>>
  ::find(local_20);
  std::
  map<QuickParty::RandomBuffType,QuickParty::LevelDataRandomReward,std::less<QuickParty::RandomBuffType>,std::allocator<std::pair<QuickParty::RandomBuffType_const,QuickParty::LevelDataRandomReward>>>
  ::end(local_1c);
  cVar1 = std::
          _Rb_tree_const_iterator<std::pair<QuickParty::RandomBuffType_const,QuickParty::LevelDataRandomReward>>
          ::operator==(local_20,(_Rb_tree_const_iterator *)local_1c);
  if (cVar1 == '\0') {
    iVar2 = std::
            _Rb_tree_const_iterator<std::pair<QuickParty::RandomBuffType_const,QuickParty::LevelDataRandomReward>>
            ::operator->(local_20);
    local_18 = std::vector<QuickParty::LevelData,std::allocator<QuickParty::LevelData>>::size
                         ((vector<QuickParty::LevelData,std::allocator<QuickParty::LevelData>> *)
                          (iVar2 + 0xc));
    iVar2 = CParty::get_member_count(param_2);
    uVar3 = iVar2 - 2;
    if ((-1 < (int)uVar3) && ((int)uVar3 < local_18)) {
      local_10 = 1.0;
      local_14 = uVar3;
      iVar2 = std::
              _Rb_tree_const_iterator<std::pair<QuickParty::RandomBuffType_const,QuickParty::LevelDataRandomReward>>
              ::operator->(local_20);
      iVar2 = std::vector<QuickParty::LevelData,std::allocator<QuickParty::LevelData>>::operator[]
                        ((vector<QuickParty::LevelData,std::allocator<QuickParty::LevelData>> *)
                         (iVar2 + 0xc),uVar3);
      *(int *)(param_4 + 0x18) =
           (int)ROUND((float)*(int *)(param_4 + 0x18) *
                      (local_10 + (float)*(int *)(iVar2 + 4) / _DAT_08bf7458));
    }
  }
  return;
}

```

