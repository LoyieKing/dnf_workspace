# QuickParty__HellPartyDifficulty

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## process

```asm
// === 0826d116 QuickParty::HellPartyDifficulty::process  [0x0826d116-0x826d197] ===
 826d116:	55                   	push   %ebp
 826d117:	89 e5                	mov    %esp,%ebp
 826d119:	83 ec 28             	sub    $0x28,%esp
 826d11c:	8b 45 08             	mov    0x8(%ebp),%eax
 826d11f:	8b 40 04             	mov    0x4(%eax),%eax
 826d122:	83 c0 24             	add    $0x24,%eax
 826d125:	89 04 24             	mov    %eax,(%esp)
 826d128:	e8 93 0e 00 00       	call   826dfc0 <_ZNKSt6vectorIN10QuickParty13LevelDataHellESaIS1_EE4sizeEv>
 826d12d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 826d130:	8b 45 0c             	mov    0xc(%ebp),%eax
 826d133:	89 04 24             	mov    %eax,(%esp)
 826d136:	e8 2f d0 32 00       	call   859a16a <_ZN6CParty16get_member_countEv>
 826d13b:	83 e8 02             	sub    $0x2,%eax
 826d13e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 826d141:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 826d145:	78 4a                	js     826d191 <_ZN10QuickParty19HellPartyDifficulty7processENS_16RewardData_ParamERNS_17RewardData_ResultE+0x7b>
 826d147:	8b 45 f4             	mov    -0xc(%ebp),%eax
 826d14a:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 826d14d:	7d 45                	jge    826d194 <_ZN10QuickParty19HellPartyDifficulty7processENS_16RewardData_ParamERNS_17RewardData_ResultE+0x7e>
 826d14f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 826d152:	8b 55 08             	mov    0x8(%ebp),%edx
 826d155:	8b 52 04             	mov    0x4(%edx),%edx
 826d158:	83 c2 24             	add    $0x24,%edx
 826d15b:	89 44 24 04          	mov    %eax,0x4(%esp)
 826d15f:	89 14 24             	mov    %edx,(%esp)
 826d162:	e8 75 0e 00 00       	call   826dfdc <_ZNKSt6vectorIN10QuickParty13LevelDataHellESaIS1_EEixEj>
 826d167:	8b 50 04             	mov    0x4(%eax),%edx
 826d16a:	8b 45 14             	mov    0x14(%ebp),%eax
 826d16d:	89 10                	mov    %edx,(%eax)
 826d16f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 826d172:	8b 55 08             	mov    0x8(%ebp),%edx
 826d175:	8b 52 04             	mov    0x4(%edx),%edx
 826d178:	83 c2 24             	add    $0x24,%edx
 826d17b:	89 44 24 04          	mov    %eax,0x4(%esp)
 826d17f:	89 14 24             	mov    %edx,(%esp)
 826d182:	e8 55 0e 00 00       	call   826dfdc <_ZNKSt6vectorIN10QuickParty13LevelDataHellESaIS1_EEixEj>
 826d187:	8b 10                	mov    (%eax),%edx
 826d189:	8b 45 14             	mov    0x14(%ebp),%eax
 826d18c:	89 50 04             	mov    %edx,0x4(%eax)
 826d18f:	eb 04                	jmp    826d195 <_ZN10QuickParty19HellPartyDifficulty7processENS_16RewardData_ParamERNS_17RewardData_ResultE+0x7f>
 826d191:	90                   	nop
 826d192:	eb 01                	jmp    826d195 <_ZN10QuickParty19HellPartyDifficulty7processENS_16RewardData_ParamERNS_17RewardData_ResultE+0x7f>
 826d194:	90                   	nop
 826d195:	c9                   	leave
 826d196:	c3                   	ret
 826d197:	90                   	nop

```

```c
// QuickParty::HellPartyDifficulty::process @ 0x826d116

/* QuickParty::HellPartyDifficulty::process(QuickParty::RewardData_Param,
   QuickParty::RewardData_Result&) */

void QuickParty::HellPartyDifficulty::process
               (int param_1,CParty *param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  iVar1 = std::vector<QuickParty::LevelDataHell,std::allocator<QuickParty::LevelDataHell>>::size
                    ((vector<QuickParty::LevelDataHell,std::allocator<QuickParty::LevelDataHell>> *)
                     (*(int *)(param_1 + 4) + 0x24));
  iVar2 = CParty::get_member_count(param_2);
  uVar3 = iVar2 - 2;
  if ((-1 < (int)uVar3) && ((int)uVar3 < iVar1)) {
    iVar1 = std::vector<QuickParty::LevelDataHell,std::allocator<QuickParty::LevelDataHell>>::
            operator[]((vector<QuickParty::LevelDataHell,std::allocator<QuickParty::LevelDataHell>>
                        *)(*(int *)(param_1 + 4) + 0x24),uVar3);
    *param_4 = *(undefined4 *)(iVar1 + 4);
    puVar4 = (undefined4 *)
             std::vector<QuickParty::LevelDataHell,std::allocator<QuickParty::LevelDataHell>>::
             operator[]((vector<QuickParty::LevelDataHell,std::allocator<QuickParty::LevelDataHell>>
                         *)(*(int *)(param_1 + 4) + 0x24),uVar3);
    param_4[1] = *puVar4;
  }
  return;
}

```

