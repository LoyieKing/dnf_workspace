# QuickParty__RewardCardGold

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## process

```asm
// === 0826d070 QuickParty::RewardCardGold::process  [0x0826d070-0x826d115] ===
 826d070:	55                   	push   %ebp
 826d071:	89 e5                	mov    %esp,%ebp
 826d073:	83 ec 38             	sub    $0x38,%esp
 826d076:	8b 45 08             	mov    0x8(%ebp),%eax
 826d079:	8b 40 04             	mov    0x4(%eax),%eax
 826d07c:	83 c0 18             	add    $0x18,%eax
 826d07f:	89 04 24             	mov    %eax,(%esp)
 826d082:	e8 0b 0f 00 00       	call   826df92 <_ZNKSt6vectorIN10QuickParty9LevelDataESaIS1_EE4sizeEv>
 826d087:	89 45 ec             	mov    %eax,-0x14(%ebp)
 826d08a:	8b 45 0c             	mov    0xc(%ebp),%eax
 826d08d:	89 04 24             	mov    %eax,(%esp)
 826d090:	e8 d5 d0 32 00       	call   859a16a <_ZN6CParty16get_member_countEv>
 826d095:	83 e8 02             	sub    $0x2,%eax
 826d098:	89 45 f0             	mov    %eax,-0x10(%ebp)
 826d09b:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 826d09f:	78 6f                	js     826d110 <_ZN10QuickParty14RewardCardGold7processENS_16RewardData_ParamERNS_17RewardData_ResultE+0xa0>
 826d0a1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 826d0a4:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 826d0a7:	7d 6a                	jge    826d113 <_ZN10QuickParty14RewardCardGold7processENS_16RewardData_ParamERNS_17RewardData_ResultE+0xa3>
 826d0a9:	b8 00 00 80 3f       	mov    $0x3f800000,%eax
 826d0ae:	89 45 f4             	mov    %eax,-0xc(%ebp)
 826d0b1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 826d0b4:	8b 55 08             	mov    0x8(%ebp),%edx
 826d0b7:	8b 52 04             	mov    0x4(%edx),%edx
 826d0ba:	83 c2 18             	add    $0x18,%edx
 826d0bd:	89 44 24 04          	mov    %eax,0x4(%esp)
 826d0c1:	89 14 24             	mov    %edx,(%esp)
 826d0c4:	e8 e5 0e 00 00       	call   826dfae <_ZNKSt6vectorIN10QuickParty9LevelDataESaIS1_EEixEj>
 826d0c9:	8b 40 04             	mov    0x4(%eax),%eax
 826d0cc:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 826d0cf:	db 45 e4             	fildl  -0x1c(%ebp)
 826d0d2:	d9 05 58 74 bf 08    	flds   0x8bf7458
 826d0d8:	de f9                	fdivrp %st,%st(1)
 826d0da:	d9 45 f4             	flds   -0xc(%ebp)
 826d0dd:	de c1                	faddp  %st,%st(1)
 826d0df:	d9 5d f4             	fstps  -0xc(%ebp)
 826d0e2:	8b 45 14             	mov    0x14(%ebp),%eax
 826d0e5:	8b 00                	mov    (%eax),%eax
 826d0e7:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 826d0ea:	db 45 e4             	fildl  -0x1c(%ebp)
 826d0ed:	d8 4d f4             	fmuls  -0xc(%ebp)
 826d0f0:	d9 7d e2             	fnstcw -0x1e(%ebp)
 826d0f3:	0f b7 45 e2          	movzwl -0x1e(%ebp),%eax
 826d0f7:	b4 0c                	mov    $0xc,%ah
 826d0f9:	66 89 45 e0          	mov    %ax,-0x20(%ebp)
 826d0fd:	d9 6d e0             	fldcw  -0x20(%ebp)
 826d100:	db 5d e4             	fistpl -0x1c(%ebp)
 826d103:	d9 6d e2             	fldcw  -0x1e(%ebp)
 826d106:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 826d109:	8b 45 14             	mov    0x14(%ebp),%eax
 826d10c:	89 10                	mov    %edx,(%eax)
 826d10e:	eb 04                	jmp    826d114 <_ZN10QuickParty14RewardCardGold7processENS_16RewardData_ParamERNS_17RewardData_ResultE+0xa4>
 826d110:	90                   	nop
 826d111:	eb 01                	jmp    826d114 <_ZN10QuickParty14RewardCardGold7processENS_16RewardData_ParamERNS_17RewardData_ResultE+0xa4>
 826d113:	90                   	nop
 826d114:	c9                   	leave
 826d115:	c3                   	ret

```

```c
// QuickParty::RewardCardGold::process @ 0x826d070

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* QuickParty::RewardCardGold::process(QuickParty::RewardData_Param, QuickParty::RewardData_Result&)
    */

void QuickParty::RewardCardGold::process
               (int param_1,CParty *param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = std::vector<QuickParty::LevelData,std::allocator<QuickParty::LevelData>>::size
                    ((vector<QuickParty::LevelData,std::allocator<QuickParty::LevelData>> *)
                     (*(int *)(param_1 + 4) + 0x18));
  iVar2 = CParty::get_member_count(param_2);
  uVar3 = iVar2 - 2;
  if ((-1 < (int)uVar3) && ((int)uVar3 < iVar1)) {
    iVar1 = std::vector<QuickParty::LevelData,std::allocator<QuickParty::LevelData>>::operator[]
                      ((vector<QuickParty::LevelData,std::allocator<QuickParty::LevelData>> *)
                       (*(int *)(param_1 + 4) + 0x18),uVar3);
    *param_4 = (int)ROUND((float)*param_4 * ((float)*(int *)(iVar1 + 4) / _DAT_08bf7458 + 1.0));
  }
  return;
}

```

