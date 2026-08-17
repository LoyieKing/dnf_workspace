# QuickParty__EquipItemDropRate

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## process

```asm
// === 0826d2aa QuickParty::EquipItemDropRate::process  [0x0826d2aa-0x826d397] ===
 826d2aa:	55                   	push   %ebp
 826d2ab:	89 e5                	mov    %esp,%ebp
 826d2ad:	53                   	push   %ebx
 826d2ae:	83 ec 44             	sub    $0x44,%esp
 826d2b1:	8b 45 08             	mov    0x8(%ebp),%eax
 826d2b4:	8d 48 08             	lea    0x8(%eax),%ecx
 826d2b7:	8b 45 08             	mov    0x8(%ebp),%eax
 826d2ba:	8b 40 04             	mov    0x4(%eax),%eax
 826d2bd:	8d 50 38             	lea    0x38(%eax),%edx
 826d2c0:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 826d2c3:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 826d2c7:	89 54 24 04          	mov    %edx,0x4(%esp)
 826d2cb:	89 04 24             	mov    %eax,(%esp)
 826d2ce:	e8 1b 0d 00 00       	call   826dfee <_ZNKSt3mapIN10QuickParty14RandomBuffTypeENS0_21LevelDataRandomRewardESt4lessIS1_ESaISt4pairIKS1_S2_EEE4findERS6_>
 826d2d3:	83 ec 04             	sub    $0x4,%esp
 826d2d6:	8b 45 08             	mov    0x8(%ebp),%eax
 826d2d9:	8b 40 04             	mov    0x4(%eax),%eax
 826d2dc:	8d 50 38             	lea    0x38(%eax),%edx
 826d2df:	8d 45 e8             	lea    -0x18(%ebp),%eax
 826d2e2:	89 54 24 04          	mov    %edx,0x4(%esp)
 826d2e6:	89 04 24             	mov    %eax,(%esp)
 826d2e9:	e8 2c 0d 00 00       	call   826e01a <_ZNKSt3mapIN10QuickParty14RandomBuffTypeENS0_21LevelDataRandomRewardESt4lessIS1_ESaISt4pairIKS1_S2_EEE3endEv>
 826d2ee:	83 ec 04             	sub    $0x4,%esp
 826d2f1:	8d 45 e8             	lea    -0x18(%ebp),%eax
 826d2f4:	89 44 24 04          	mov    %eax,0x4(%esp)
 826d2f8:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 826d2fb:	89 04 24             	mov    %eax,(%esp)
 826d2fe:	e8 3d 0d 00 00       	call   826e040 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKN10QuickParty14RandomBuffTypeENS1_21LevelDataRandomRewardEEEeqERKS6_>
 826d303:	84 c0                	test   %al,%al
 826d305:	0f 85 81 00 00 00    	jne    826d38c <_ZN10QuickParty17EquipItemDropRate7processENS_16RewardData_ParamERNS_17RewardData_ResultE+0xe2>
 826d30b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 826d30e:	89 04 24             	mov    %eax,(%esp)
 826d311:	e8 3e 0d 00 00       	call   826e054 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKN10QuickParty14RandomBuffTypeENS1_21LevelDataRandomRewardEEEptEv>
 826d316:	83 c0 0c             	add    $0xc,%eax
 826d319:	89 04 24             	mov    %eax,(%esp)
 826d31c:	e8 71 0c 00 00       	call   826df92 <_ZNKSt6vectorIN10QuickParty9LevelDataESaIS1_EE4sizeEv>
 826d321:	89 45 ec             	mov    %eax,-0x14(%ebp)
 826d324:	8b 45 0c             	mov    0xc(%ebp),%eax
 826d327:	89 04 24             	mov    %eax,(%esp)
 826d32a:	e8 3b ce 32 00       	call   859a16a <_ZN6CParty16get_member_countEv>
 826d32f:	83 e8 02             	sub    $0x2,%eax
 826d332:	89 45 f0             	mov    %eax,-0x10(%ebp)
 826d335:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 826d339:	78 54                	js     826d38f <_ZN10QuickParty17EquipItemDropRate7processENS_16RewardData_ParamERNS_17RewardData_ResultE+0xe5>
 826d33b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 826d33e:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 826d341:	7d 4f                	jge    826d392 <_ZN10QuickParty17EquipItemDropRate7processENS_16RewardData_ParamERNS_17RewardData_ResultE+0xe8>
 826d343:	b8 00 00 80 3f       	mov    $0x3f800000,%eax
 826d348:	89 45 f4             	mov    %eax,-0xc(%ebp)
 826d34b:	8b 5d f0             	mov    -0x10(%ebp),%ebx
 826d34e:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 826d351:	89 04 24             	mov    %eax,(%esp)
 826d354:	e8 fb 0c 00 00       	call   826e054 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKN10QuickParty14RandomBuffTypeENS1_21LevelDataRandomRewardEEEptEv>
 826d359:	83 c0 0c             	add    $0xc,%eax
 826d35c:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 826d360:	89 04 24             	mov    %eax,(%esp)
 826d363:	e8 46 0c 00 00       	call   826dfae <_ZNKSt6vectorIN10QuickParty9LevelDataESaIS1_EEixEj>
 826d368:	8b 40 04             	mov    0x4(%eax),%eax
 826d36b:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 826d36e:	db 45 d4             	fildl  -0x2c(%ebp)
 826d371:	d9 05 58 74 bf 08    	flds   0x8bf7458
 826d377:	de f9                	fdivrp %st,%st(1)
 826d379:	d9 45 f4             	flds   -0xc(%ebp)
 826d37c:	de c1                	faddp  %st,%st(1)
 826d37e:	d9 5d f4             	fstps  -0xc(%ebp)
 826d381:	8b 45 14             	mov    0x14(%ebp),%eax
 826d384:	8b 55 f4             	mov    -0xc(%ebp),%edx
 826d387:	89 50 14             	mov    %edx,0x14(%eax)
 826d38a:	eb 07                	jmp    826d393 <_ZN10QuickParty17EquipItemDropRate7processENS_16RewardData_ParamERNS_17RewardData_ResultE+0xe9>
 826d38c:	90                   	nop
 826d38d:	eb 04                	jmp    826d393 <_ZN10QuickParty17EquipItemDropRate7processENS_16RewardData_ParamERNS_17RewardData_ResultE+0xe9>
 826d38f:	90                   	nop
 826d390:	eb 01                	jmp    826d393 <_ZN10QuickParty17EquipItemDropRate7processENS_16RewardData_ParamERNS_17RewardData_ResultE+0xe9>
 826d392:	90                   	nop
 826d393:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 826d396:	c9                   	leave
 826d397:	c3                   	ret

```

```c
// QuickParty::EquipItemDropRate::process @ 0x826d2aa

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* QuickParty::EquipItemDropRate::process(QuickParty::RewardData_Param,
   QuickParty::RewardData_Result&) */

void QuickParty::EquipItemDropRate::process
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
      *(float *)(param_4 + 0x14) = local_10 + (float)*(int *)(iVar2 + 4) / _DAT_08bf7458;
    }
  }
  return;
}

```

