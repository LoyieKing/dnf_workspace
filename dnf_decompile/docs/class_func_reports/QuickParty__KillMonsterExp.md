# QuickParty__KillMonsterExp

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## process

```asm
// === 0826d198 QuickParty::KillMonsterExp::process  [0x0826d198-0x826d2a9] ===
 826d198:	55                   	push   %ebp
 826d199:	89 e5                	mov    %esp,%ebp
 826d19b:	53                   	push   %ebx
 826d19c:	83 ec 44             	sub    $0x44,%esp
 826d19f:	8b 45 08             	mov    0x8(%ebp),%eax
 826d1a2:	8d 48 08             	lea    0x8(%eax),%ecx
 826d1a5:	8b 45 08             	mov    0x8(%ebp),%eax
 826d1a8:	8b 40 04             	mov    0x4(%eax),%eax
 826d1ab:	8d 50 38             	lea    0x38(%eax),%edx
 826d1ae:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 826d1b1:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 826d1b5:	89 54 24 04          	mov    %edx,0x4(%esp)
 826d1b9:	89 04 24             	mov    %eax,(%esp)
 826d1bc:	e8 2d 0e 00 00       	call   826dfee <_ZNKSt3mapIN10QuickParty14RandomBuffTypeENS0_21LevelDataRandomRewardESt4lessIS1_ESaISt4pairIKS1_S2_EEE4findERS6_>
 826d1c1:	83 ec 04             	sub    $0x4,%esp
 826d1c4:	8b 45 08             	mov    0x8(%ebp),%eax
 826d1c7:	8b 40 04             	mov    0x4(%eax),%eax
 826d1ca:	8d 50 38             	lea    0x38(%eax),%edx
 826d1cd:	8d 45 e8             	lea    -0x18(%ebp),%eax
 826d1d0:	89 54 24 04          	mov    %edx,0x4(%esp)
 826d1d4:	89 04 24             	mov    %eax,(%esp)
 826d1d7:	e8 3e 0e 00 00       	call   826e01a <_ZNKSt3mapIN10QuickParty14RandomBuffTypeENS0_21LevelDataRandomRewardESt4lessIS1_ESaISt4pairIKS1_S2_EEE3endEv>
 826d1dc:	83 ec 04             	sub    $0x4,%esp
 826d1df:	8d 45 e8             	lea    -0x18(%ebp),%eax
 826d1e2:	89 44 24 04          	mov    %eax,0x4(%esp)
 826d1e6:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 826d1e9:	89 04 24             	mov    %eax,(%esp)
 826d1ec:	e8 4f 0e 00 00       	call   826e040 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKN10QuickParty14RandomBuffTypeENS1_21LevelDataRandomRewardEEEeqERKS6_>
 826d1f1:	84 c0                	test   %al,%al
 826d1f3:	0f 85 a4 00 00 00    	jne    826d29d <_ZN10QuickParty14KillMonsterExp7processENS_16RewardData_ParamERNS_17RewardData_ResultE+0x105>
 826d1f9:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 826d1fc:	89 04 24             	mov    %eax,(%esp)
 826d1ff:	e8 50 0e 00 00       	call   826e054 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKN10QuickParty14RandomBuffTypeENS1_21LevelDataRandomRewardEEEptEv>
 826d204:	83 c0 0c             	add    $0xc,%eax
 826d207:	89 04 24             	mov    %eax,(%esp)
 826d20a:	e8 83 0d 00 00       	call   826df92 <_ZNKSt6vectorIN10QuickParty9LevelDataESaIS1_EE4sizeEv>
 826d20f:	89 45 ec             	mov    %eax,-0x14(%ebp)
 826d212:	8b 45 0c             	mov    0xc(%ebp),%eax
 826d215:	89 04 24             	mov    %eax,(%esp)
 826d218:	e8 4d cf 32 00       	call   859a16a <_ZN6CParty16get_member_countEv>
 826d21d:	83 e8 02             	sub    $0x2,%eax
 826d220:	89 45 f0             	mov    %eax,-0x10(%ebp)
 826d223:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 826d227:	78 77                	js     826d2a0 <_ZN10QuickParty14KillMonsterExp7processENS_16RewardData_ParamERNS_17RewardData_ResultE+0x108>
 826d229:	8b 45 f0             	mov    -0x10(%ebp),%eax
 826d22c:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 826d22f:	7d 72                	jge    826d2a3 <_ZN10QuickParty14KillMonsterExp7processENS_16RewardData_ParamERNS_17RewardData_ResultE+0x10b>
 826d231:	b8 00 00 80 3f       	mov    $0x3f800000,%eax
 826d236:	89 45 f4             	mov    %eax,-0xc(%ebp)
 826d239:	8b 5d f0             	mov    -0x10(%ebp),%ebx
 826d23c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 826d23f:	89 04 24             	mov    %eax,(%esp)
 826d242:	e8 0d 0e 00 00       	call   826e054 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKN10QuickParty14RandomBuffTypeENS1_21LevelDataRandomRewardEEEptEv>
 826d247:	83 c0 0c             	add    $0xc,%eax
 826d24a:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 826d24e:	89 04 24             	mov    %eax,(%esp)
 826d251:	e8 58 0d 00 00       	call   826dfae <_ZNKSt6vectorIN10QuickParty9LevelDataESaIS1_EEixEj>
 826d256:	8b 40 04             	mov    0x4(%eax),%eax
 826d259:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 826d25c:	db 45 d4             	fildl  -0x2c(%ebp)
 826d25f:	d9 05 58 74 bf 08    	flds   0x8bf7458
 826d265:	de f9                	fdivrp %st,%st(1)
 826d267:	d9 45 f4             	flds   -0xc(%ebp)
 826d26a:	de c1                	faddp  %st,%st(1)
 826d26c:	d9 5d f4             	fstps  -0xc(%ebp)
 826d26f:	8b 45 14             	mov    0x14(%ebp),%eax
 826d272:	8b 00                	mov    (%eax),%eax
 826d274:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 826d277:	db 45 d4             	fildl  -0x2c(%ebp)
 826d27a:	d8 4d f4             	fmuls  -0xc(%ebp)
 826d27d:	d9 7d d2             	fnstcw -0x2e(%ebp)
 826d280:	0f b7 45 d2          	movzwl -0x2e(%ebp),%eax
 826d284:	b4 0c                	mov    $0xc,%ah
 826d286:	66 89 45 d0          	mov    %ax,-0x30(%ebp)
 826d28a:	d9 6d d0             	fldcw  -0x30(%ebp)
 826d28d:	db 5d d4             	fistpl -0x2c(%ebp)
 826d290:	d9 6d d2             	fldcw  -0x2e(%ebp)
 826d293:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 826d296:	8b 45 14             	mov    0x14(%ebp),%eax
 826d299:	89 10                	mov    %edx,(%eax)
 826d29b:	eb 07                	jmp    826d2a4 <_ZN10QuickParty14KillMonsterExp7processENS_16RewardData_ParamERNS_17RewardData_ResultE+0x10c>
 826d29d:	90                   	nop
 826d29e:	eb 04                	jmp    826d2a4 <_ZN10QuickParty14KillMonsterExp7processENS_16RewardData_ParamERNS_17RewardData_ResultE+0x10c>
 826d2a0:	90                   	nop
 826d2a1:	eb 01                	jmp    826d2a4 <_ZN10QuickParty14KillMonsterExp7processENS_16RewardData_ParamERNS_17RewardData_ResultE+0x10c>
 826d2a3:	90                   	nop
 826d2a4:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 826d2a7:	c9                   	leave
 826d2a8:	c3                   	ret
 826d2a9:	90                   	nop

```

```c
// QuickParty::KillMonsterExp::process @ 0x826d198

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* QuickParty::KillMonsterExp::process(QuickParty::RewardData_Param, QuickParty::RewardData_Result&)
    */

void QuickParty::KillMonsterExp::process
               (undefined4 param_1,CParty *param_2,undefined4 param_3,int *param_4)

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
      *param_4 = (int)ROUND((float)*param_4 *
                            (local_10 + (float)*(int *)(iVar2 + 4) / _DAT_08bf7458));
    }
  }
  return;
}

```

