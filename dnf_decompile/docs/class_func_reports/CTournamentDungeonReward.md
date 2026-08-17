# CTournamentDungeonReward

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 16

---

## CTournamentDungeonReward

```asm
// === 08284770 CTournamentDungeonReward::CTournamentDungeonReward  [0x08284770-0x82847db] ===
 8284770:	55                   	push   %ebp
 8284771:	89 e5                	mov    %esp,%ebp
 8284773:	57                   	push   %edi
 8284774:	56                   	push   %esi
 8284775:	53                   	push   %ebx
 8284776:	83 ec 2c             	sub    $0x2c,%esp
 8284779:	8b 45 08             	mov    0x8(%ebp),%eax
 828477c:	c7 00 f0 cb c0 08    	movl   $0x8c0cbf0,(%eax)
 8284782:	8b 45 08             	mov    0x8(%ebp),%eax
 8284785:	83 c0 08             	add    $0x8,%eax
 8284788:	89 c7                	mov    %eax,%edi
 828478a:	be 01 00 00 00       	mov    $0x1,%esi
 828478f:	eb 2d                	jmp    82847be <_ZN24CTournamentDungeonRewardC1Ev+0x4e>
 8284791:	89 f8                	mov    %edi,%eax
 8284793:	89 c3                	mov    %eax,%ebx
 8284795:	c7 45 e4 01 00 00 00 	movl   $0x1,-0x1c(%ebp)
 828479c:	eb 0f                	jmp    82847ad <_ZN24CTournamentDungeonRewardC1Ev+0x3d>
 828479e:	89 1c 24             	mov    %ebx,(%esp)
 82847a1:	e8 a0 0d 00 00       	call   8285546 <_ZN20TournamentRewardTypeC1Ev>
 82847a6:	83 c3 0c             	add    $0xc,%ebx
 82847a9:	83 6d e4 01          	subl   $0x1,-0x1c(%ebp)
 82847ad:	83 7d e4 ff          	cmpl   $0xffffffff,-0x1c(%ebp)
 82847b1:	0f 95 c0             	setne  %al
 82847b4:	84 c0                	test   %al,%al
 82847b6:	75 e6                	jne    828479e <_ZN24CTournamentDungeonRewardC1Ev+0x2e>
 82847b8:	83 c7 18             	add    $0x18,%edi
 82847bb:	83 ee 01             	sub    $0x1,%esi
 82847be:	83 fe ff             	cmp    $0xffffffff,%esi
 82847c1:	0f 95 c0             	setne  %al
 82847c4:	84 c0                	test   %al,%al
 82847c6:	75 c9                	jne    8284791 <_ZN24CTournamentDungeonRewardC1Ev+0x21>
 82847c8:	8b 45 08             	mov    0x8(%ebp),%eax
 82847cb:	89 04 24             	mov    %eax,(%esp)
 82847ce:	e8 4d 00 00 00       	call   8284820 <_ZN24CTournamentDungeonReward11ResetRewardEv>
 82847d3:	83 c4 2c             	add    $0x2c,%esp
 82847d6:	5b                   	pop    %ebx
 82847d7:	5e                   	pop    %esi
 82847d8:	5f                   	pop    %edi
 82847d9:	5d                   	pop    %ebp
 82847da:	c3                   	ret
 82847db:	90                   	nop

```

```c
// CTournamentDungeonReward::CTournamentDungeonReward @ 0x8284770

/* CTournamentDungeonReward::CTournamentDungeonReward() */

void __thiscall CTournamentDungeonReward::CTournamentDungeonReward(CTournamentDungeonReward *this)

{
  TournamentRewardType *pTVar1;
  TournamentRewardType *this_00;
  int iVar2;
  int local_20;
  
  *(undefined ***)this = &PTR__CTournamentDungeonReward_08c0cbf0;
  pTVar1 = (TournamentRewardType *)(this + 8);
  for (iVar2 = 1; iVar2 != -1; iVar2 = iVar2 + -1) {
    this_00 = pTVar1;
    for (local_20 = 1; local_20 != -1; local_20 = local_20 + -1) {
      TournamentRewardType::TournamentRewardType(this_00);
      this_00 = this_00 + 0xc;
    }
    pTVar1 = pTVar1 + 0x18;
  }
  ResetReward(this);
  return;
}

```

---

## DecisionRewardType

```asm
// === 08284a24 CTournamentDungeonReward::DecisionRewardType  [0x08284a24-0x8284b8d] ===
 8284a24:	55                   	push   %ebp
 8284a25:	89 e5                	mov    %esp,%ebp
 8284a27:	56                   	push   %esi
 8284a28:	53                   	push   %ebx
 8284a29:	83 ec 30             	sub    $0x30,%esp
 8284a2c:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8284a33:	e9 40 01 00 00       	jmp    8284b78 <_ZN24CTournamentDungeonReward18DecisionRewardTypeE32ENUM_TOURNAMENT_REWARD_CARD_TYPER20TournamentRewardRatePK24TournamentRewardItemRate+0x154>
 8284a38:	8b 45 10             	mov    0x10(%ebp),%eax
 8284a3b:	8b 40 0c             	mov    0xc(%eax),%eax
 8284a3e:	83 c0 01             	add    $0x1,%eax
 8284a41:	89 04 24             	mov    %eax,(%esp)
 8284a44:	e8 3e d1 42 00       	call   86b1b87 <_Z12get_rand_inti>
 8284a49:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8284a4c:	8b 45 10             	mov    0x10(%ebp),%eax
 8284a4f:	8b 00                	mov    (%eax),%eax
 8284a51:	85 c0                	test   %eax,%eax
 8284a53:	74 3d                	je     8284a92 <_ZN24CTournamentDungeonReward18DecisionRewardTypeE32ENUM_TOURNAMENT_REWARD_CARD_TYPER20TournamentRewardRatePK24TournamentRewardItemRate+0x6e>
 8284a55:	8b 45 10             	mov    0x10(%ebp),%eax
 8284a58:	8b 00                	mov    (%eax),%eax
 8284a5a:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 8284a5d:	7c 33                	jl     8284a92 <_ZN24CTournamentDungeonReward18DecisionRewardTypeE32ENUM_TOURNAMENT_REWARD_CARD_TYPER20TournamentRewardRatePK24TournamentRewardItemRate+0x6e>
 8284a5f:	8b 55 0c             	mov    0xc(%ebp),%edx
 8284a62:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 8284a65:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8284a68:	89 c8                	mov    %ecx,%eax
 8284a6a:	01 c0                	add    %eax,%eax
 8284a6c:	01 c8                	add    %ecx,%eax
 8284a6e:	8d 0c 85 00 00 00 00 	lea    0x0(,%eax,4),%ecx
 8284a75:	89 d0                	mov    %edx,%eax
 8284a77:	01 c0                	add    %eax,%eax
 8284a79:	01 d0                	add    %edx,%eax
 8284a7b:	c1 e0 03             	shl    $0x3,%eax
 8284a7e:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8284a81:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 8284a84:	83 c0 08             	add    $0x8,%eax
 8284a87:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8284a8d:	e9 e2 00 00 00       	jmp    8284b74 <_ZN24CTournamentDungeonReward18DecisionRewardTypeE32ENUM_TOURNAMENT_REWARD_CARD_TYPER20TournamentRewardRatePK24TournamentRewardItemRate+0x150>
 8284a92:	8b 45 10             	mov    0x10(%ebp),%eax
 8284a95:	8b 10                	mov    (%eax),%edx
 8284a97:	8b 45 10             	mov    0x10(%ebp),%eax
 8284a9a:	8b 40 04             	mov    0x4(%eax),%eax
 8284a9d:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8284aa0:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 8284aa3:	0f 8c cb 00 00 00    	jl     8284b74 <_ZN24CTournamentDungeonReward18DecisionRewardTypeE32ENUM_TOURNAMENT_REWARD_CARD_TYPER20TournamentRewardRatePK24TournamentRewardItemRate+0x150>
 8284aa9:	8b 45 14             	mov    0x14(%ebp),%eax
 8284aac:	8b 40 0c             	mov    0xc(%eax),%eax
 8284aaf:	89 04 24             	mov    %eax,(%esp)
 8284ab2:	e8 d0 d0 42 00       	call   86b1b87 <_Z12get_rand_inti>
 8284ab7:	83 c0 01             	add    $0x1,%eax
 8284aba:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8284abd:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8284ac4:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8284acb:	e9 8b 00 00 00       	jmp    8284b5b <_ZN24CTournamentDungeonReward18DecisionRewardTypeE32ENUM_TOURNAMENT_REWARD_CARD_TYPER20TournamentRewardRatePK24TournamentRewardItemRate+0x137>
 8284ad0:	8b 45 14             	mov    0x14(%ebp),%eax
 8284ad3:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8284ad6:	89 54 24 04          	mov    %edx,0x4(%esp)
 8284ada:	89 04 24             	mov    %eax,(%esp)
 8284add:	e8 0e 0b 00 00       	call   82855f0 <_ZNKSt6vectorI20TournamentRewardItemSaIS0_EEixEj>
 8284ae2:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8284ae5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8284ae8:	8b 40 04             	mov    0x4(%eax),%eax
 8284aeb:	01 45 ec             	add    %eax,-0x14(%ebp)
 8284aee:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8284af1:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 8284af4:	7f 61                	jg     8284b57 <_ZN24CTournamentDungeonReward18DecisionRewardTypeE32ENUM_TOURNAMENT_REWARD_CARD_TYPER20TournamentRewardRatePK24TournamentRewardItemRate+0x133>
 8284af6:	8b 55 0c             	mov    0xc(%ebp),%edx
 8284af9:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 8284afc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8284aff:	8b 18                	mov    (%eax),%ebx
 8284b01:	8b 75 08             	mov    0x8(%ebp),%esi
 8284b04:	89 c8                	mov    %ecx,%eax
 8284b06:	01 c0                	add    %eax,%eax
 8284b08:	01 c8                	add    %ecx,%eax
 8284b0a:	8d 0c 85 00 00 00 00 	lea    0x0(,%eax,4),%ecx
 8284b11:	89 d0                	mov    %edx,%eax
 8284b13:	01 c0                	add    %eax,%eax
 8284b15:	01 d0                	add    %edx,%eax
 8284b17:	c1 e0 03             	shl    $0x3,%eax
 8284b1a:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8284b1d:	8d 04 06             	lea    (%esi,%eax,1),%eax
 8284b20:	83 c0 08             	add    $0x8,%eax
 8284b23:	89 18                	mov    %ebx,(%eax)
 8284b25:	8b 55 0c             	mov    0xc(%ebp),%edx
 8284b28:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 8284b2b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8284b2e:	8b 58 08             	mov    0x8(%eax),%ebx
 8284b31:	8b 75 08             	mov    0x8(%ebp),%esi
 8284b34:	89 c8                	mov    %ecx,%eax
 8284b36:	01 c0                	add    %eax,%eax
 8284b38:	01 c8                	add    %ecx,%eax
 8284b3a:	8d 0c 85 00 00 00 00 	lea    0x0(,%eax,4),%ecx
 8284b41:	89 d0                	mov    %edx,%eax
 8284b43:	01 c0                	add    %eax,%eax
 8284b45:	01 d0                	add    %edx,%eax
 8284b47:	c1 e0 03             	shl    $0x3,%eax
 8284b4a:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8284b4d:	8d 04 06             	lea    (%esi,%eax,1),%eax
 8284b50:	83 c0 0c             	add    $0xc,%eax
 8284b53:	89 18                	mov    %ebx,(%eax)
 8284b55:	eb 1d                	jmp    8284b74 <_ZN24CTournamentDungeonReward18DecisionRewardTypeE32ENUM_TOURNAMENT_REWARD_CARD_TYPER20TournamentRewardRatePK24TournamentRewardItemRate+0x150>
 8284b57:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8284b5b:	8b 45 14             	mov    0x14(%ebp),%eax
 8284b5e:	89 04 24             	mov    %eax,(%esp)
 8284b61:	e8 68 0a 00 00       	call   82855ce <_ZNKSt6vectorI20TournamentRewardItemSaIS0_EE4sizeEv>
 8284b66:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 8284b69:	0f 97 c0             	seta   %al
 8284b6c:	84 c0                	test   %al,%al
 8284b6e:	0f 85 5c ff ff ff    	jne    8284ad0 <_ZN24CTournamentDungeonReward18DecisionRewardTypeE32ENUM_TOURNAMENT_REWARD_CARD_TYPER20TournamentRewardRatePK24TournamentRewardItemRate+0xac>
 8284b74:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 8284b78:	83 7d e0 01          	cmpl   $0x1,-0x20(%ebp)
 8284b7c:	0f 9e c0             	setle  %al
 8284b7f:	84 c0                	test   %al,%al
 8284b81:	0f 85 b1 fe ff ff    	jne    8284a38 <_ZN24CTournamentDungeonReward18DecisionRewardTypeE32ENUM_TOURNAMENT_REWARD_CARD_TYPER20TournamentRewardRatePK24TournamentRewardItemRate+0x14>
 8284b87:	83 c4 30             	add    $0x30,%esp
 8284b8a:	5b                   	pop    %ebx
 8284b8b:	5e                   	pop    %esi
 8284b8c:	5d                   	pop    %ebp
 8284b8d:	c3                   	ret

```

```c
// CTournamentDungeonReward::DecisionRewardType @ 0x8284a24

/* CTournamentDungeonReward::DecisionRewardType(ENUM_TOURNAMENT_REWARD_CARD_TYPE,
   TournamentRewardRate&, TournamentRewardItemRate const*) */

void __thiscall
CTournamentDungeonReward::DecisionRewardType
          (CTournamentDungeonReward *this,int param_2,int *param_3,
          vector<TournamentRewardItem,std::allocator<TournamentRewardItem>> *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int local_24;
  int local_18;
  uint local_14;
  
  local_24 = 0;
  do {
    if (1 < local_24) {
      return;
    }
    iVar1 = get_rand_int(param_3[3] + 1);
    if ((*param_3 == 0) || (*param_3 < iVar1)) {
      if (iVar1 <= *param_3 + param_3[1]) {
        iVar1 = get_rand_int(*(int *)(param_4 + 0xc));
        local_18 = 0;
        local_14 = 0;
        while( true ) {
          uVar3 = std::vector<TournamentRewardItem,std::allocator<TournamentRewardItem>>::size
                            (param_4);
          if (uVar3 <= local_14) break;
          puVar2 = (undefined4 *)
                   std::vector<TournamentRewardItem,std::allocator<TournamentRewardItem>>::
                   operator[](param_4,local_14);
          local_18 = local_18 + puVar2[1];
          if (iVar1 + 1 <= local_18) {
            *(undefined4 *)(this + local_24 * 0xc + param_2 * 0x18 + 8) = *puVar2;
            *(undefined4 *)(this + local_24 * 0xc + param_2 * 0x18 + 0xc) = puVar2[2];
            break;
          }
          local_14 = local_14 + 1;
        }
      }
    }
    else {
      *(undefined4 *)(this + local_24 * 0xc + param_2 * 0x18 + 8) = 0;
    }
    local_24 = local_24 + 1;
  } while( true );
}

```

---

## ForceSelectCard

```asm
// === 0828523c CTournamentDungeonReward::ForceSelectCard  [0x0828523c-0x8285283] ===
 828523c:	55                   	push   %ebp
 828523d:	89 e5                	mov    %esp,%ebp
 828523f:	83 ec 28             	sub    $0x28,%esp
 8285242:	8b 45 10             	mov    0x10(%ebp),%eax
 8285245:	88 45 f4             	mov    %al,-0xc(%ebp)
 8285248:	8b 45 0c             	mov    0xc(%ebp),%eax
 828524b:	89 44 24 08          	mov    %eax,0x8(%esp)
 828524f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8285256:	00 
 8285257:	8b 45 08             	mov    0x8(%ebp),%eax
 828525a:	89 04 24             	mov    %eax,(%esp)
 828525d:	e8 56 01 00 00       	call   82853b8 <_ZN24CTournamentDungeonReward16_ForceSelectCardE32ENUM_TOURNAMENT_REWARD_CARD_TYPERKSt6vectorIiSaIiEE>
 8285262:	80 7d f4 00          	cmpb   $0x0,-0xc(%ebp)
 8285266:	74 1a                	je     8285282 <_ZN24CTournamentDungeonReward15ForceSelectCardERSt6vectorIiSaIiEEb+0x46>
 8285268:	8b 45 0c             	mov    0xc(%ebp),%eax
 828526b:	89 44 24 08          	mov    %eax,0x8(%esp)
 828526f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8285276:	00 
 8285277:	8b 45 08             	mov    0x8(%ebp),%eax
 828527a:	89 04 24             	mov    %eax,(%esp)
 828527d:	e8 36 01 00 00       	call   82853b8 <_ZN24CTournamentDungeonReward16_ForceSelectCardE32ENUM_TOURNAMENT_REWARD_CARD_TYPERKSt6vectorIiSaIiEE>
 8285282:	c9                   	leave
 8285283:	c3                   	ret

```

```c
// CTournamentDungeonReward::ForceSelectCard @ 0x828523c

/* CTournamentDungeonReward::ForceSelectCard(std::vector<int, std::allocator<int> >&, bool) */

void __thiscall
CTournamentDungeonReward::ForceSelectCard
          (CTournamentDungeonReward *this,vector *param_1,bool param_2)

{
  _ForceSelectCard(this,0,param_1);
  if (param_2) {
    _ForceSelectCard(this,1,param_1);
  }
  return;
}

```

---

## GetItemFromCard

```asm
// === 0828502e CTournamentDungeonReward::GetItemFromCard  [0x0828502e-0x828523b] ===
 828502e:	55                   	push   %ebp
 828502f:	89 e5                	mov    %esp,%ebp
 8285031:	56                   	push   %esi
 8285032:	53                   	push   %ebx
 8285033:	83 ec 20             	sub    $0x20,%esp
 8285036:	83 7d 18 02          	cmpl   $0x2,0x18(%ebp)
 828503a:	76 0a                	jbe    8285046 <_ZN24CTournamentDungeonReward15GetItemFromCardE32ENUM_TOURNAMENT_REWARD_CARD_TYPEiP10Inven_Itemj+0x18>
 828503c:	b8 00 00 00 00       	mov    $0x0,%eax
 8285041:	e9 ef 01 00 00       	jmp    8285235 <_ZN24CTournamentDungeonReward15GetItemFromCardE32ENUM_TOURNAMENT_REWARD_CARD_TYPEiP10Inven_Itemj+0x207>
 8285046:	8b 45 0c             	mov    0xc(%ebp),%eax
 8285049:	85 c0                	test   %eax,%eax
 828504b:	78 08                	js     8285055 <_ZN24CTournamentDungeonReward15GetItemFromCardE32ENUM_TOURNAMENT_REWARD_CARD_TYPEiP10Inven_Itemj+0x27>
 828504d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8285050:	83 f8 01             	cmp    $0x1,%eax
 8285053:	7e 0a                	jle    828505f <_ZN24CTournamentDungeonReward15GetItemFromCardE32ENUM_TOURNAMENT_REWARD_CARD_TYPEiP10Inven_Itemj+0x31>
 8285055:	b8 00 00 00 00       	mov    $0x0,%eax
 828505a:	e9 d6 01 00 00       	jmp    8285235 <_ZN24CTournamentDungeonReward15GetItemFromCardE32ENUM_TOURNAMENT_REWARD_CARD_TYPEiP10Inven_Itemj+0x207>
 828505f:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8285066:	e9 b6 01 00 00       	jmp    8285221 <_ZN24CTournamentDungeonReward15GetItemFromCardE32ENUM_TOURNAMENT_REWARD_CARD_TYPEiP10Inven_Itemj+0x1f3>
 828506b:	8b 55 0c             	mov    0xc(%ebp),%edx
 828506e:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 8285071:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8285074:	89 c8                	mov    %ecx,%eax
 8285076:	01 c0                	add    %eax,%eax
 8285078:	01 c8                	add    %ecx,%eax
 828507a:	8d 0c 85 00 00 00 00 	lea    0x0(,%eax,4),%ecx
 8285081:	89 d0                	mov    %edx,%eax
 8285083:	01 c0                	add    %eax,%eax
 8285085:	01 d0                	add    %edx,%eax
 8285087:	c1 e0 03             	shl    $0x3,%eax
 828508a:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 828508d:	0f b6 44 18 10       	movzbl 0x10(%eax,%ebx,1),%eax
 8285092:	0f be c0             	movsbl %al,%eax
 8285095:	3b 45 10             	cmp    0x10(%ebp),%eax
 8285098:	0f 85 7f 01 00 00    	jne    828521d <_ZN24CTournamentDungeonReward15GetItemFromCardE32ENUM_TOURNAMENT_REWARD_CARD_TYPEiP10Inven_Itemj+0x1ef>
 828509e:	8b 55 0c             	mov    0xc(%ebp),%edx
 82850a1:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 82850a4:	8b 5d 08             	mov    0x8(%ebp),%ebx
 82850a7:	89 c8                	mov    %ecx,%eax
 82850a9:	01 c0                	add    %eax,%eax
 82850ab:	01 c8                	add    %ecx,%eax
 82850ad:	8d 0c 85 00 00 00 00 	lea    0x0(,%eax,4),%ecx
 82850b4:	89 d0                	mov    %edx,%eax
 82850b6:	01 c0                	add    %eax,%eax
 82850b8:	01 d0                	add    %edx,%eax
 82850ba:	c1 e0 03             	shl    $0x3,%eax
 82850bd:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 82850c0:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 82850c3:	83 c0 08             	add    $0x8,%eax
 82850c6:	8b 00                	mov    (%eax),%eax
 82850c8:	85 c0                	test   %eax,%eax
 82850ca:	75 5c                	jne    8285128 <_ZN24CTournamentDungeonReward15GetItemFromCardE32ENUM_TOURNAMENT_REWARD_CARD_TYPEiP10Inven_Itemj+0xfa>
 82850cc:	8b 45 14             	mov    0x14(%ebp),%eax
 82850cf:	89 04 24             	mov    %eax,(%esp)
 82850d2:	e8 01 67 e4 ff       	call   80cb7d8 <_ZN10Inven_Item5resetEv>
 82850d7:	8b 55 0c             	mov    0xc(%ebp),%edx
 82850da:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 82850dd:	8b 5d 08             	mov    0x8(%ebp),%ebx
 82850e0:	89 c8                	mov    %ecx,%eax
 82850e2:	01 c0                	add    %eax,%eax
 82850e4:	01 c8                	add    %ecx,%eax
 82850e6:	8d 0c 85 00 00 00 00 	lea    0x0(,%eax,4),%ecx
 82850ed:	89 d0                	mov    %edx,%eax
 82850ef:	01 c0                	add    %eax,%eax
 82850f1:	01 d0                	add    %edx,%eax
 82850f3:	c1 e0 03             	shl    $0x3,%eax
 82850f6:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 82850f9:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 82850fc:	83 c0 0c             	add    $0xc,%eax
 82850ff:	8b 00                	mov    (%eax),%eax
 8285101:	89 44 24 04          	mov    %eax,0x4(%esp)
 8285105:	8b 45 14             	mov    0x14(%ebp),%eax
 8285108:	89 04 24             	mov    %eax,(%esp)
 828510b:	e8 74 67 e4 ff       	call   80cb884 <_ZN10Inven_Item12set_add_infoEi>
 8285110:	8b 45 14             	mov    0x14(%ebp),%eax
 8285113:	83 c0 3d             	add    $0x3d,%eax
 8285116:	89 04 24             	mov    %eax,(%esp)
 8285119:	e8 ba 66 e4 ff       	call   80cb7d8 <_ZN10Inven_Item5resetEv>
 828511e:	b8 01 00 00 00       	mov    $0x1,%eax
 8285123:	e9 0d 01 00 00       	jmp    8285235 <_ZN24CTournamentDungeonReward15GetItemFromCardE32ENUM_TOURNAMENT_REWARD_CARD_TYPEiP10Inven_Itemj+0x207>
 8285128:	8b 55 0c             	mov    0xc(%ebp),%edx
 828512b:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 828512e:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8285131:	89 c8                	mov    %ecx,%eax
 8285133:	01 c0                	add    %eax,%eax
 8285135:	01 c8                	add    %ecx,%eax
 8285137:	8d 0c 85 00 00 00 00 	lea    0x0(,%eax,4),%ecx
 828513e:	89 d0                	mov    %edx,%eax
 8285140:	01 c0                	add    %eax,%eax
 8285142:	01 d0                	add    %edx,%eax
 8285144:	c1 e0 03             	shl    $0x3,%eax
 8285147:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 828514a:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 828514d:	83 c0 08             	add    $0x8,%eax
 8285150:	8b 00                	mov    (%eax),%eax
 8285152:	83 f8 ff             	cmp    $0xffffffff,%eax
 8285155:	75 23                	jne    828517a <_ZN24CTournamentDungeonReward15GetItemFromCardE32ENUM_TOURNAMENT_REWARD_CARD_TYPEiP10Inven_Itemj+0x14c>
 8285157:	8b 45 14             	mov    0x14(%ebp),%eax
 828515a:	89 04 24             	mov    %eax,(%esp)
 828515d:	e8 76 66 e4 ff       	call   80cb7d8 <_ZN10Inven_Item5resetEv>
 8285162:	8b 45 14             	mov    0x14(%ebp),%eax
 8285165:	83 c0 3d             	add    $0x3d,%eax
 8285168:	89 04 24             	mov    %eax,(%esp)
 828516b:	e8 68 66 e4 ff       	call   80cb7d8 <_ZN10Inven_Item5resetEv>
 8285170:	b8 00 00 00 00       	mov    $0x0,%eax
 8285175:	e9 bb 00 00 00       	jmp    8285235 <_ZN24CTournamentDungeonReward15GetItemFromCardE32ENUM_TOURNAMENT_REWARD_CARD_TYPEiP10Inven_Itemj+0x207>
 828517a:	8b 45 14             	mov    0x14(%ebp),%eax
 828517d:	89 04 24             	mov    %eax,(%esp)
 8285180:	e8 53 66 e4 ff       	call   80cb7d8 <_ZN10Inven_Item5resetEv>
 8285185:	8b 45 14             	mov    0x14(%ebp),%eax
 8285188:	83 c0 3d             	add    $0x3d,%eax
 828518b:	89 04 24             	mov    %eax,(%esp)
 828518e:	e8 45 66 e4 ff       	call   80cb7d8 <_ZN10Inven_Item5resetEv>
 8285193:	8b 45 14             	mov    0x14(%ebp),%eax
 8285196:	8d 58 3d             	lea    0x3d(%eax),%ebx
 8285199:	8b 55 0c             	mov    0xc(%ebp),%edx
 828519c:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 828519f:	8b 75 08             	mov    0x8(%ebp),%esi
 82851a2:	89 c8                	mov    %ecx,%eax
 82851a4:	01 c0                	add    %eax,%eax
 82851a6:	01 c8                	add    %ecx,%eax
 82851a8:	8d 0c 85 00 00 00 00 	lea    0x0(,%eax,4),%ecx
 82851af:	89 d0                	mov    %edx,%eax
 82851b1:	01 c0                	add    %eax,%eax
 82851b3:	01 d0                	add    %edx,%eax
 82851b5:	c1 e0 03             	shl    $0x3,%eax
 82851b8:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 82851bb:	8d 04 06             	lea    (%esi,%eax,1),%eax
 82851be:	83 c0 08             	add    $0x8,%eax
 82851c1:	8b 00                	mov    (%eax),%eax
 82851c3:	89 43 02             	mov    %eax,0x2(%ebx)
 82851c6:	8b 55 0c             	mov    0xc(%ebp),%edx
 82851c9:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 82851cc:	8b 5d 08             	mov    0x8(%ebp),%ebx
 82851cf:	89 c8                	mov    %ecx,%eax
 82851d1:	01 c0                	add    %eax,%eax
 82851d3:	01 c8                	add    %ecx,%eax
 82851d5:	8d 0c 85 00 00 00 00 	lea    0x0(,%eax,4),%ecx
 82851dc:	89 d0                	mov    %edx,%eax
 82851de:	01 c0                	add    %eax,%eax
 82851e0:	01 d0                	add    %edx,%eax
 82851e2:	c1 e0 03             	shl    $0x3,%eax
 82851e5:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 82851e8:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 82851eb:	83 c0 0c             	add    $0xc,%eax
 82851ee:	8b 18                	mov    (%eax),%ebx
 82851f0:	8b 45 14             	mov    0x14(%ebp),%eax
 82851f3:	8d 70 3d             	lea    0x3d(%eax),%esi
 82851f6:	e8 a0 6f e4 ff       	call   80cc19b <_Z14G_CDataManagerv>
 82851fb:	8b 40 0c             	mov    0xc(%eax),%eax
 82851fe:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8285202:	89 74 24 08          	mov    %esi,0x8(%esp)
 8285206:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 828520d:	00 
 828520e:	89 04 24             	mov    %eax,(%esp)
 8285211:	e8 a2 cd 28 00       	call   8511fb8 <_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi>
 8285216:	b8 01 00 00 00       	mov    $0x1,%eax
 828521b:	eb 18                	jmp    8285235 <_ZN24CTournamentDungeonReward15GetItemFromCardE32ENUM_TOURNAMENT_REWARD_CARD_TYPEiP10Inven_Itemj+0x207>
 828521d:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8285221:	83 7d f4 01          	cmpl   $0x1,-0xc(%ebp)
 8285225:	0f 9e c0             	setle  %al
 8285228:	84 c0                	test   %al,%al
 828522a:	0f 85 3b fe ff ff    	jne    828506b <_ZN24CTournamentDungeonReward15GetItemFromCardE32ENUM_TOURNAMENT_REWARD_CARD_TYPEiP10Inven_Itemj+0x3d>
 8285230:	b8 00 00 00 00       	mov    $0x0,%eax
 8285235:	83 c4 20             	add    $0x20,%esp
 8285238:	5b                   	pop    %ebx
 8285239:	5e                   	pop    %esi
 828523a:	5d                   	pop    %ebp
 828523b:	c3                   	ret

```

```c
// CTournamentDungeonReward::GetItemFromCard @ 0x828502e

/* CTournamentDungeonReward::GetItemFromCard(ENUM_TOURNAMENT_REWARD_CARD_TYPE, int, Inven_Item*,
   unsigned int) */

undefined4 __thiscall
CTournamentDungeonReward::GetItemFromCard
          (CTournamentDungeonReward *this,int param_2,int param_3,Inven_Item *param_4,uint param_5)

{
  undefined4 uVar1;
  int iVar2;
  int local_10;
  
  if (((param_5 < 3) && (-1 < param_2)) && (param_2 < 2)) {
    for (local_10 = 0; local_10 < 2; local_10 = local_10 + 1) {
      if ((char)this[local_10 * 0xc + param_2 * 0x18 + 0x10] == param_3) {
        if (*(int *)(this + local_10 * 0xc + param_2 * 0x18 + 8) == 0) {
          Inven_Item::reset(param_4);
          Inven_Item::set_add_info(param_4,*(int *)(this + local_10 * 0xc + param_2 * 0x18 + 0xc));
          Inven_Item::reset(param_4 + 0x3d);
          return 1;
        }
        if (*(int *)(this + local_10 * 0xc + param_2 * 0x18 + 8) != -1) {
          Inven_Item::reset(param_4);
          Inven_Item::reset(param_4 + 0x3d);
          *(undefined4 *)(param_4 + 0x3f) =
               *(undefined4 *)(this + local_10 * 0xc + param_2 * 0x18 + 8);
          uVar1 = *(undefined4 *)(this + local_10 * 0xc + param_2 * 0x18 + 0xc);
          iVar2 = G_CDataManager();
          CItemList::create_item(*(CItemList **)(iVar2 + 0xc),1,param_4 + 0x3d,uVar1);
          return 1;
        }
        Inven_Item::reset(param_4);
        Inven_Item::reset(param_4 + 0x3d);
        return 0;
      }
    }
  }
  return 0;
}

```

---

## MakeReward

```asm
// === 08284890 CTournamentDungeonReward::MakeReward  [0x08284890-0x8284a23] ===
 8284890:	55                   	push   %ebp
 8284891:	89 e5                	mov    %esp,%ebp
 8284893:	83 ec 68             	sub    $0x68,%esp
 8284896:	8b 45 18             	mov    0x18(%ebp),%eax
 8284899:	88 45 b4             	mov    %al,-0x4c(%ebp)
 828489c:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 82848a0:	0f 84 74 01 00 00    	je     8284a1a <_ZN24CTournamentDungeonReward10MakeRewardEPKSt3mapIi20TournamentRewardRateSt4lessIiESaISt4pairIKiS1_EEEPK24TournamentRewardItemRateib+0x18a>
 82848a6:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 82848ad:	80 7d b4 00          	cmpb   $0x0,-0x4c(%ebp)
 82848b1:	74 08                	je     82848bb <_ZN24CTournamentDungeonReward10MakeRewardEPKSt3mapIi20TournamentRewardRateSt4lessIiESaISt4pairIKiS1_EEEPK24TournamentRewardItemRateib+0x2b>
 82848b3:	8b 45 14             	mov    0x14(%ebp),%eax
 82848b6:	89 45 e8             	mov    %eax,-0x18(%ebp)
 82848b9:	eb 09                	jmp    82848c4 <_ZN24CTournamentDungeonReward10MakeRewardEPKSt3mapIi20TournamentRewardRateSt4lessIiESaISt4pairIKiS1_EEEPK24TournamentRewardItemRateib+0x34>
 82848bb:	8b 45 14             	mov    0x14(%ebp),%eax
 82848be:	83 e8 01             	sub    $0x1,%eax
 82848c1:	89 45 e8             	mov    %eax,-0x18(%ebp)
 82848c4:	8b 45 e8             	mov    -0x18(%ebp),%eax
 82848c7:	85 c0                	test   %eax,%eax
 82848c9:	79 09                	jns    82848d4 <_ZN24CTournamentDungeonReward10MakeRewardEPKSt3mapIi20TournamentRewardRateSt4lessIiESaISt4pairIKiS1_EEEPK24TournamentRewardItemRateib+0x44>
 82848cb:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 82848d2:	eb 0f                	jmp    82848e3 <_ZN24CTournamentDungeonReward10MakeRewardEPKSt3mapIi20TournamentRewardRateSt4lessIiESaISt4pairIKiS1_EEEPK24TournamentRewardItemRateib+0x53>
 82848d4:	8b 45 e8             	mov    -0x18(%ebp),%eax
 82848d7:	83 f8 04             	cmp    $0x4,%eax
 82848da:	7e 07                	jle    82848e3 <_ZN24CTournamentDungeonReward10MakeRewardEPKSt3mapIi20TournamentRewardRateSt4lessIiESaISt4pairIKiS1_EEEPK24TournamentRewardItemRateib+0x53>
 82848dc:	c7 45 e8 04 00 00 00 	movl   $0x4,-0x18(%ebp)
 82848e3:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82848e6:	8d 55 e8             	lea    -0x18(%ebp),%edx
 82848e9:	89 54 24 08          	mov    %edx,0x8(%esp)
 82848ed:	8b 55 0c             	mov    0xc(%ebp),%edx
 82848f0:	89 54 24 04          	mov    %edx,0x4(%esp)
 82848f4:	89 04 24             	mov    %eax,(%esp)
 82848f7:	e8 5e 0c 00 00       	call   828555a <_ZNKSt3mapIi20TournamentRewardRateSt4lessIiESaISt4pairIKiS0_EEE4findERS4_>
 82848fc:	83 ec 04             	sub    $0x4,%esp
 82848ff:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8284902:	8b 55 0c             	mov    0xc(%ebp),%edx
 8284905:	89 54 24 04          	mov    %edx,0x4(%esp)
 8284909:	89 04 24             	mov    %eax,(%esp)
 828490c:	e8 75 0c 00 00       	call   8285586 <_ZNKSt3mapIi20TournamentRewardRateSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 8284911:	83 ec 04             	sub    $0x4,%esp
 8284914:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8284917:	89 44 24 04          	mov    %eax,0x4(%esp)
 828491b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 828491e:	89 04 24             	mov    %eax,(%esp)
 8284921:	e8 86 0c 00 00       	call   82855ac <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKi20TournamentRewardRateEEeqERKS4_>
 8284926:	84 c0                	test   %al,%al
 8284928:	0f 85 ef 00 00 00    	jne    8284a1d <_ZN24CTournamentDungeonReward10MakeRewardEPKSt3mapIi20TournamentRewardRateSt4lessIiESaISt4pairIKiS1_EEEPK24TournamentRewardItemRateib+0x18d>
 828492e:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8284931:	89 04 24             	mov    %eax,(%esp)
 8284934:	e8 87 0c 00 00       	call   82855c0 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKi20TournamentRewardRateEEptEv>
 8284939:	8b 50 04             	mov    0x4(%eax),%edx
 828493c:	89 55 d4             	mov    %edx,-0x2c(%ebp)
 828493f:	8b 50 08             	mov    0x8(%eax),%edx
 8284942:	89 55 d8             	mov    %edx,-0x28(%ebp)
 8284945:	8b 50 0c             	mov    0xc(%eax),%edx
 8284948:	89 55 dc             	mov    %edx,-0x24(%ebp)
 828494b:	8b 40 10             	mov    0x10(%eax),%eax
 828494e:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8284951:	8b 45 10             	mov    0x10(%ebp),%eax
 8284954:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8284958:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 828495b:	89 44 24 08          	mov    %eax,0x8(%esp)
 828495f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8284966:	00 
 8284967:	8b 45 08             	mov    0x8(%ebp),%eax
 828496a:	89 04 24             	mov    %eax,(%esp)
 828496d:	e8 b2 00 00 00       	call   8284a24 <_ZN24CTournamentDungeonReward18DecisionRewardTypeE32ENUM_TOURNAMENT_REWARD_CARD_TYPER20TournamentRewardRatePK24TournamentRewardItemRate>
 8284972:	83 7d 14 04          	cmpl   $0x4,0x14(%ebp)
 8284976:	0f 85 a5 00 00 00    	jne    8284a21 <_ZN24CTournamentDungeonReward10MakeRewardEPKSt3mapIi20TournamentRewardRateSt4lessIiESaISt4pairIKiS1_EEEPK24TournamentRewardItemRateib+0x191>
 828497c:	80 7d b4 00          	cmpb   $0x0,-0x4c(%ebp)
 8284980:	0f 84 9b 00 00 00    	je     8284a21 <_ZN24CTournamentDungeonReward10MakeRewardEPKSt3mapIi20TournamentRewardRateSt4lessIiESaISt4pairIKiS1_EEEPK24TournamentRewardItemRateib+0x191>
 8284986:	c7 45 f0 05 00 00 00 	movl   $0x5,-0x10(%ebp)
 828498d:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8284990:	8d 55 f0             	lea    -0x10(%ebp),%edx
 8284993:	89 54 24 08          	mov    %edx,0x8(%esp)
 8284997:	8b 55 0c             	mov    0xc(%ebp),%edx
 828499a:	89 54 24 04          	mov    %edx,0x4(%esp)
 828499e:	89 04 24             	mov    %eax,(%esp)
 82849a1:	e8 b4 0b 00 00       	call   828555a <_ZNKSt3mapIi20TournamentRewardRateSt4lessIiESaISt4pairIKiS0_EEE4findERS4_>
 82849a6:	83 ec 04             	sub    $0x4,%esp
 82849a9:	8d 45 f4             	lea    -0xc(%ebp),%eax
 82849ac:	8b 55 0c             	mov    0xc(%ebp),%edx
 82849af:	89 54 24 04          	mov    %edx,0x4(%esp)
 82849b3:	89 04 24             	mov    %eax,(%esp)
 82849b6:	e8 cb 0b 00 00       	call   8285586 <_ZNKSt3mapIi20TournamentRewardRateSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 82849bb:	83 ec 04             	sub    $0x4,%esp
 82849be:	8d 45 f4             	lea    -0xc(%ebp),%eax
 82849c1:	89 44 24 04          	mov    %eax,0x4(%esp)
 82849c5:	8d 45 d0             	lea    -0x30(%ebp),%eax
 82849c8:	89 04 24             	mov    %eax,(%esp)
 82849cb:	e8 dc 0b 00 00       	call   82855ac <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKi20TournamentRewardRateEEeqERKS4_>
 82849d0:	84 c0                	test   %al,%al
 82849d2:	75 4c                	jne    8284a20 <_ZN24CTournamentDungeonReward10MakeRewardEPKSt3mapIi20TournamentRewardRateSt4lessIiESaISt4pairIKiS1_EEEPK24TournamentRewardItemRateib+0x190>
 82849d4:	8d 45 d0             	lea    -0x30(%ebp),%eax
 82849d7:	89 04 24             	mov    %eax,(%esp)
 82849da:	e8 e1 0b 00 00       	call   82855c0 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKi20TournamentRewardRateEEptEv>
 82849df:	8b 50 04             	mov    0x4(%eax),%edx
 82849e2:	89 55 c0             	mov    %edx,-0x40(%ebp)
 82849e5:	8b 50 08             	mov    0x8(%eax),%edx
 82849e8:	89 55 c4             	mov    %edx,-0x3c(%ebp)
 82849eb:	8b 50 0c             	mov    0xc(%eax),%edx
 82849ee:	89 55 c8             	mov    %edx,-0x38(%ebp)
 82849f1:	8b 40 10             	mov    0x10(%eax),%eax
 82849f4:	89 45 cc             	mov    %eax,-0x34(%ebp)
 82849f7:	8b 45 10             	mov    0x10(%ebp),%eax
 82849fa:	89 44 24 0c          	mov    %eax,0xc(%esp)
 82849fe:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8284a01:	89 44 24 08          	mov    %eax,0x8(%esp)
 8284a05:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8284a0c:	00 
 8284a0d:	8b 45 08             	mov    0x8(%ebp),%eax
 8284a10:	89 04 24             	mov    %eax,(%esp)
 8284a13:	e8 0c 00 00 00       	call   8284a24 <_ZN24CTournamentDungeonReward18DecisionRewardTypeE32ENUM_TOURNAMENT_REWARD_CARD_TYPER20TournamentRewardRatePK24TournamentRewardItemRate>
 8284a18:	eb 07                	jmp    8284a21 <_ZN24CTournamentDungeonReward10MakeRewardEPKSt3mapIi20TournamentRewardRateSt4lessIiESaISt4pairIKiS1_EEEPK24TournamentRewardItemRateib+0x191>
 8284a1a:	90                   	nop
 8284a1b:	eb 04                	jmp    8284a21 <_ZN24CTournamentDungeonReward10MakeRewardEPKSt3mapIi20TournamentRewardRateSt4lessIiESaISt4pairIKiS1_EEEPK24TournamentRewardItemRateib+0x191>
 8284a1d:	90                   	nop
 8284a1e:	eb 01                	jmp    8284a21 <_ZN24CTournamentDungeonReward10MakeRewardEPKSt3mapIi20TournamentRewardRateSt4lessIiESaISt4pairIKiS1_EEEPK24TournamentRewardItemRateib+0x191>
 8284a20:	90                   	nop
 8284a21:	c9                   	leave
 8284a22:	c3                   	ret
 8284a23:	90                   	nop

```

```c
// CTournamentDungeonReward::MakeReward @ 0x8284890

/* CTournamentDungeonReward::MakeReward(std::map<int, TournamentRewardRate, std::less<int>,
   std::allocator<std::pair<int const, TournamentRewardRate> > > const*, TournamentRewardItemRate
   const*, int, bool) */

void __thiscall
CTournamentDungeonReward::MakeReward
          (CTournamentDungeonReward *this,map *param_1,TournamentRewardItemRate *param_2,int param_3
          ,bool param_4)

{
  char cVar1;
  int iVar2;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  _Rb_tree_const_iterator<std::pair<int_const,TournamentRewardRate>> local_34 [4];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  _Rb_tree_const_iterator<std::pair<int_const,TournamentRewardRate>> local_20 [4];
  int local_1c;
  map<int,TournamentRewardRate,std::less<int>,std::allocator<std::pair<int_const,TournamentRewardRate>>>
  local_18 [4];
  undefined4 local_14;
  map<int,TournamentRewardRate,std::less<int>,std::allocator<std::pair<int_const,TournamentRewardRate>>>
  local_10 [12];
  
  if (param_1 != (map *)0x0) {
    if (param_4) {
      local_1c = param_3;
    }
    else {
      local_1c = param_3 + -1;
    }
    if (local_1c < 0) {
      local_1c = 0;
    }
    else if (4 < local_1c) {
      local_1c = 4;
    }
    std::
    map<int,TournamentRewardRate,std::less<int>,std::allocator<std::pair<int_const,TournamentRewardRate>>>
    ::find((int *)local_20);
    std::
    map<int,TournamentRewardRate,std::less<int>,std::allocator<std::pair<int_const,TournamentRewardRate>>>
    ::end(local_18);
    cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,TournamentRewardRate>>::operator==
                      (local_20,(_Rb_tree_const_iterator *)local_18);
    if (cVar1 == '\0') {
      iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,TournamentRewardRate>>::operator->
                        (local_20);
      local_30 = *(undefined4 *)(iVar2 + 4);
      local_2c = *(undefined4 *)(iVar2 + 8);
      local_28 = *(undefined4 *)(iVar2 + 0xc);
      local_24 = *(undefined4 *)(iVar2 + 0x10);
      DecisionRewardType(this,0,&local_30,param_2);
      if ((param_3 == 4) && (param_4)) {
        local_14 = 5;
        std::
        map<int,TournamentRewardRate,std::less<int>,std::allocator<std::pair<int_const,TournamentRewardRate>>>
        ::find((int *)local_34);
        std::
        map<int,TournamentRewardRate,std::less<int>,std::allocator<std::pair<int_const,TournamentRewardRate>>>
        ::end(local_10);
        cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,TournamentRewardRate>>::operator==
                          (local_34,(_Rb_tree_const_iterator *)local_10);
        if (cVar1 == '\0') {
          iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,TournamentRewardRate>>::
                  operator->(local_34);
          local_44 = *(undefined4 *)(iVar2 + 4);
          local_40 = *(undefined4 *)(iVar2 + 8);
          local_3c = *(undefined4 *)(iVar2 + 0xc);
          local_38 = *(undefined4 *)(iVar2 + 0x10);
          DecisionRewardType(this,1,&local_44,param_2);
        }
      }
    }
  }
  return;
}

```

---

## MakeRewardPacket

```asm
// === 08284caa CTournamentDungeonReward::MakeRewardPacket  [0x08284caa-0x8284d07] ===
 8284caa:	55                   	push   %ebp
 8284cab:	89 e5                	mov    %esp,%ebp
 8284cad:	83 ec 28             	sub    $0x28,%esp
 8284cb0:	8b 45 10             	mov    0x10(%ebp),%eax
 8284cb3:	88 45 f4             	mov    %al,-0xc(%ebp)
 8284cb6:	8b 45 0c             	mov    0xc(%ebp),%eax
 8284cb9:	89 44 24 08          	mov    %eax,0x8(%esp)
 8284cbd:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8284cc4:	00 
 8284cc5:	8b 45 08             	mov    0x8(%ebp),%eax
 8284cc8:	89 04 24             	mov    %eax,(%esp)
 8284ccb:	e8 14 06 00 00       	call   82852e4 <_ZN24CTournamentDungeonReward17_MakeRewardPacketE32ENUM_TOURNAMENT_REWARD_CARD_TYPEP11PacketGuard>
 8284cd0:	80 7d f4 00          	cmpb   $0x0,-0xc(%ebp)
 8284cd4:	74 1c                	je     8284cf2 <_ZN24CTournamentDungeonReward16MakeRewardPacketEP11PacketGuardb+0x48>
 8284cd6:	8b 45 0c             	mov    0xc(%ebp),%eax
 8284cd9:	89 44 24 08          	mov    %eax,0x8(%esp)
 8284cdd:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8284ce4:	00 
 8284ce5:	8b 45 08             	mov    0x8(%ebp),%eax
 8284ce8:	89 04 24             	mov    %eax,(%esp)
 8284ceb:	e8 f4 05 00 00       	call   82852e4 <_ZN24CTournamentDungeonReward17_MakeRewardPacketE32ENUM_TOURNAMENT_REWARD_CARD_TYPEP11PacketGuard>
 8284cf0:	eb 13                	jmp    8284d05 <_ZN24CTournamentDungeonReward16MakeRewardPacketEP11PacketGuardb+0x5b>
 8284cf2:	8b 45 0c             	mov    0xc(%ebp),%eax
 8284cf5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8284cfc:	00 
 8284cfd:	89 04 24             	mov    %eax,(%esp)
 8284d00:	e8 1b 6c e4 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8284d05:	c9                   	leave
 8284d06:	c3                   	ret
 8284d07:	90                   	nop

```

```c
// CTournamentDungeonReward::MakeRewardPacket @ 0x8284caa

/* CTournamentDungeonReward::MakeRewardPacket(PacketGuard*, bool) */

void __thiscall
CTournamentDungeonReward::MakeRewardPacket
          (CTournamentDungeonReward *this,PacketGuard *param_1,bool param_2)

{
  _MakeRewardPacket(this,0,param_1);
  if (param_2) {
    _MakeRewardPacket(this,1,param_1);
  }
  else {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,0);
  }
  return;
}

```

---

## MakeSelectPacket

```asm
// === 08284fa4 CTournamentDungeonReward::MakeSelectPacket  [0x08284fa4-0x828502d] ===
 8284fa4:	55                   	push   %ebp
 8284fa5:	89 e5                	mov    %esp,%ebp
 8284fa7:	53                   	push   %ebx
 8284fa8:	83 ec 24             	sub    $0x24,%esp
 8284fab:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8284fb2:	eb 68                	jmp    828501c <_ZN24CTournamentDungeonReward16MakeSelectPacketEP11PacketGuard+0x78>
 8284fb4:	8b 45 0c             	mov    0xc(%ebp),%eax
 8284fb7:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8284fbe:	00 
 8284fbf:	89 04 24             	mov    %eax,(%esp)
 8284fc2:	e8 59 69 e4 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8284fc7:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8284fce:	eb 3d                	jmp    828500d <_ZN24CTournamentDungeonReward16MakeSelectPacketEP11PacketGuard+0x69>
 8284fd0:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8284fd3:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 8284fd6:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8284fd9:	89 c8                	mov    %ecx,%eax
 8284fdb:	01 c0                	add    %eax,%eax
 8284fdd:	01 c8                	add    %ecx,%eax
 8284fdf:	8d 0c 85 00 00 00 00 	lea    0x0(,%eax,4),%ecx
 8284fe6:	89 d0                	mov    %edx,%eax
 8284fe8:	01 c0                	add    %eax,%eax
 8284fea:	01 d0                	add    %edx,%eax
 8284fec:	c1 e0 03             	shl    $0x3,%eax
 8284fef:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8284ff2:	0f b6 44 18 10       	movzbl 0x10(%eax,%ebx,1),%eax
 8284ff7:	0f be d0             	movsbl %al,%edx
 8284ffa:	8b 45 0c             	mov    0xc(%ebp),%eax
 8284ffd:	89 54 24 04          	mov    %edx,0x4(%esp)
 8285001:	89 04 24             	mov    %eax,(%esp)
 8285004:	e8 17 69 e4 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8285009:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 828500d:	83 7d f4 01          	cmpl   $0x1,-0xc(%ebp)
 8285011:	0f 9e c0             	setle  %al
 8285014:	84 c0                	test   %al,%al
 8285016:	75 b8                	jne    8284fd0 <_ZN24CTournamentDungeonReward16MakeSelectPacketEP11PacketGuard+0x2c>
 8285018:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 828501c:	83 7d f0 01          	cmpl   $0x1,-0x10(%ebp)
 8285020:	0f 9e c0             	setle  %al
 8285023:	84 c0                	test   %al,%al
 8285025:	75 8d                	jne    8284fb4 <_ZN24CTournamentDungeonReward16MakeSelectPacketEP11PacketGuard+0x10>
 8285027:	83 c4 24             	add    $0x24,%esp
 828502a:	5b                   	pop    %ebx
 828502b:	5d                   	pop    %ebp
 828502c:	c3                   	ret
 828502d:	90                   	nop

```

```c
// CTournamentDungeonReward::MakeSelectPacket @ 0x8284fa4

/* CTournamentDungeonReward::MakeSelectPacket(PacketGuard*) */

void __thiscall
CTournamentDungeonReward::MakeSelectPacket(CTournamentDungeonReward *this,PacketGuard *param_1)

{
  int local_14;
  int local_10;
  
  for (local_14 = 0; local_14 < 2; local_14 = local_14 + 1) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,2);
    for (local_10 = 0; local_10 < 2; local_10 = local_10 + 1) {
      InterfacePacketBuf::put_byte
                ((InterfacePacketBuf *)param_1,
                 (int)(char)this[local_10 * 0xc + local_14 * 0x18 + 0x10]);
    }
  }
  return;
}

```

---

## ResetReward

```asm
// === 08284820 CTournamentDungeonReward::ResetReward  [0x08284820-0x828488f] ===
 8284820:	55                   	push   %ebp
 8284821:	89 e5                	mov    %esp,%ebp
 8284823:	83 ec 14             	sub    $0x14,%esp
 8284826:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%ebp)
 828482d:	eb 49                	jmp    8284878 <_ZN24CTournamentDungeonReward11ResetRewardEv+0x58>
 828482f:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 8284836:	eb 31                	jmp    8284869 <_ZN24CTournamentDungeonReward11ResetRewardEv+0x49>
 8284838:	8b 55 f8             	mov    -0x8(%ebp),%edx
 828483b:	8b 4d fc             	mov    -0x4(%ebp),%ecx
 828483e:	89 c8                	mov    %ecx,%eax
 8284840:	01 c0                	add    %eax,%eax
 8284842:	01 c8                	add    %ecx,%eax
 8284844:	8d 0c 85 00 00 00 00 	lea    0x0(,%eax,4),%ecx
 828484b:	89 d0                	mov    %edx,%eax
 828484d:	01 c0                	add    %eax,%eax
 828484f:	01 d0                	add    %edx,%eax
 8284851:	c1 e0 03             	shl    $0x3,%eax
 8284854:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8284857:	03 45 08             	add    0x8(%ebp),%eax
 828485a:	83 c0 08             	add    $0x8,%eax
 828485d:	89 04 24             	mov    %eax,(%esp)
 8284860:	e8 eb fe ff ff       	call   8284750 <_ZN20TournamentRewardType5ClearEv>
 8284865:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 8284869:	83 7d fc 01          	cmpl   $0x1,-0x4(%ebp)
 828486d:	0f 9e c0             	setle  %al
 8284870:	84 c0                	test   %al,%al
 8284872:	75 c4                	jne    8284838 <_ZN24CTournamentDungeonReward11ResetRewardEv+0x18>
 8284874:	83 45 f8 01          	addl   $0x1,-0x8(%ebp)
 8284878:	83 7d f8 01          	cmpl   $0x1,-0x8(%ebp)
 828487c:	0f 9e c0             	setle  %al
 828487f:	84 c0                	test   %al,%al
 8284881:	75 ac                	jne    828482f <_ZN24CTournamentDungeonReward11ResetRewardEv+0xf>
 8284883:	8b 45 08             	mov    0x8(%ebp),%eax
 8284886:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 828488d:	c9                   	leave
 828488e:	c3                   	ret
 828488f:	90                   	nop

```

```c
// CTournamentDungeonReward::ResetReward @ 0x8284820

/* CTournamentDungeonReward::ResetReward() */

void __thiscall CTournamentDungeonReward::ResetReward(CTournamentDungeonReward *this)

{
  int local_c;
  int local_8;
  
  for (local_c = 0; local_c < 2; local_c = local_c + 1) {
    for (local_8 = 0; local_8 < 2; local_8 = local_8 + 1) {
      TournamentRewardType::Clear
                ((TournamentRewardType *)(this + local_8 * 0xc + local_c * 0x18 + 8));
    }
  }
  *(undefined4 *)(this + 4) = 0;
  return;
}

```

---

## SelectCard

```asm
// === 08284ee4 CTournamentDungeonReward::SelectCard  [0x08284ee4-0x8284fa3] ===
 8284ee4:	55                   	push   %ebp
 8284ee5:	89 e5                	mov    %esp,%ebp
 8284ee7:	56                   	push   %esi
 8284ee8:	53                   	push   %ebx
 8284ee9:	83 ec 08             	sub    $0x8,%esp
 8284eec:	8b 55 10             	mov    0x10(%ebp),%edx
 8284eef:	8b 45 14             	mov    0x14(%ebp),%eax
 8284ef2:	88 55 f4             	mov    %dl,-0xc(%ebp)
 8284ef5:	88 45 f0             	mov    %al,-0x10(%ebp)
 8284ef8:	80 7d f4 00          	cmpb   $0x0,-0xc(%ebp)
 8284efc:	78 06                	js     8284f04 <_ZN24CTournamentDungeonReward10SelectCardEicc+0x20>
 8284efe:	80 7d f4 01          	cmpb   $0x1,-0xc(%ebp)
 8284f02:	7e 0a                	jle    8284f0e <_ZN24CTournamentDungeonReward10SelectCardEicc+0x2a>
 8284f04:	b8 00 00 00 00       	mov    $0x0,%eax
 8284f09:	e9 8e 00 00 00       	jmp    8284f9c <_ZN24CTournamentDungeonReward10SelectCardEicc+0xb8>
 8284f0e:	80 7d f0 00          	cmpb   $0x0,-0x10(%ebp)
 8284f12:	78 06                	js     8284f1a <_ZN24CTournamentDungeonReward10SelectCardEicc+0x36>
 8284f14:	80 7d f0 01          	cmpb   $0x1,-0x10(%ebp)
 8284f18:	7e 07                	jle    8284f21 <_ZN24CTournamentDungeonReward10SelectCardEicc+0x3d>
 8284f1a:	b8 00 00 00 00       	mov    $0x0,%eax
 8284f1f:	eb 7b                	jmp    8284f9c <_ZN24CTournamentDungeonReward10SelectCardEicc+0xb8>
 8284f21:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8284f25:	78 06                	js     8284f2d <_ZN24CTournamentDungeonReward10SelectCardEicc+0x49>
 8284f27:	83 7d 0c 03          	cmpl   $0x3,0xc(%ebp)
 8284f2b:	7e 07                	jle    8284f34 <_ZN24CTournamentDungeonReward10SelectCardEicc+0x50>
 8284f2d:	b8 00 00 00 00       	mov    $0x0,%eax
 8284f32:	eb 68                	jmp    8284f9c <_ZN24CTournamentDungeonReward10SelectCardEicc+0xb8>
 8284f34:	0f be 55 f4          	movsbl -0xc(%ebp),%edx
 8284f38:	0f be 4d f0          	movsbl -0x10(%ebp),%ecx
 8284f3c:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8284f3f:	89 c8                	mov    %ecx,%eax
 8284f41:	01 c0                	add    %eax,%eax
 8284f43:	01 c8                	add    %ecx,%eax
 8284f45:	8d 0c 85 00 00 00 00 	lea    0x0(,%eax,4),%ecx
 8284f4c:	89 d0                	mov    %edx,%eax
 8284f4e:	01 c0                	add    %eax,%eax
 8284f50:	01 d0                	add    %edx,%eax
 8284f52:	c1 e0 03             	shl    $0x3,%eax
 8284f55:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8284f58:	0f b6 44 18 10       	movzbl 0x10(%eax,%ebx,1),%eax
 8284f5d:	3c ff                	cmp    $0xff,%al
 8284f5f:	75 36                	jne    8284f97 <_ZN24CTournamentDungeonReward10SelectCardEicc+0xb3>
 8284f61:	0f be 55 f4          	movsbl -0xc(%ebp),%edx
 8284f65:	0f be 4d f0          	movsbl -0x10(%ebp),%ecx
 8284f69:	8b 45 0c             	mov    0xc(%ebp),%eax
 8284f6c:	89 c6                	mov    %eax,%esi
 8284f6e:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8284f71:	89 c8                	mov    %ecx,%eax
 8284f73:	01 c0                	add    %eax,%eax
 8284f75:	01 c8                	add    %ecx,%eax
 8284f77:	8d 0c 85 00 00 00 00 	lea    0x0(,%eax,4),%ecx
 8284f7e:	89 d0                	mov    %edx,%eax
 8284f80:	01 c0                	add    %eax,%eax
 8284f82:	01 d0                	add    %edx,%eax
 8284f84:	c1 e0 03             	shl    $0x3,%eax
 8284f87:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8284f8a:	89 f2                	mov    %esi,%edx
 8284f8c:	88 54 18 10          	mov    %dl,0x10(%eax,%ebx,1)
 8284f90:	b8 01 00 00 00       	mov    $0x1,%eax
 8284f95:	eb 05                	jmp    8284f9c <_ZN24CTournamentDungeonReward10SelectCardEicc+0xb8>
 8284f97:	b8 00 00 00 00       	mov    $0x0,%eax
 8284f9c:	83 c4 08             	add    $0x8,%esp
 8284f9f:	5b                   	pop    %ebx
 8284fa0:	5e                   	pop    %esi
 8284fa1:	5d                   	pop    %ebp
 8284fa2:	c3                   	ret
 8284fa3:	90                   	nop

```

```c
// CTournamentDungeonReward::SelectCard @ 0x8284ee4

/* CTournamentDungeonReward::SelectCard(int, char, char) */

undefined4 __thiscall
CTournamentDungeonReward::SelectCard
          (CTournamentDungeonReward *this,int param_1,char param_2,char param_3)

{
  undefined4 uVar1;
  
  if ((param_2 < '\0') || ('\x01' < param_2)) {
    uVar1 = 0;
  }
  else if ((param_3 < '\0') || ('\x01' < param_3)) {
    uVar1 = 0;
  }
  else if ((param_1 < 0) || (3 < param_1)) {
    uVar1 = 0;
  }
  else if (this[param_3 * 0xc + param_2 * 0x18 + 0x10] == (CTournamentDungeonReward)0xff) {
    this[param_3 * 0xc + param_2 * 0x18 + 0x10] = SUB41(param_1,0);
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## SetRewardGold

```asm
// === 08284b8e CTournamentDungeonReward::SetRewardGold  [0x08284b8e-0x8284ca9] ===
 8284b8e:	55                   	push   %ebp
 8284b8f:	89 e5                	mov    %esp,%ebp
 8284b91:	56                   	push   %esi
 8284b92:	53                   	push   %ebx
 8284b93:	83 ec 30             	sub    $0x30,%esp
 8284b96:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8284b9d:	e9 ef 00 00 00       	jmp    8284c91 <_ZN24CTournamentDungeonReward13SetRewardGoldERN8WongWork18stGenerateResult_tEf+0x103>
 8284ba2:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8284ba9:	e9 d0 00 00 00       	jmp    8284c7e <_ZN24CTournamentDungeonReward13SetRewardGoldERN8WongWork18stGenerateResult_tEf+0xf0>
 8284bae:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8284bb1:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 8284bb4:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8284bb7:	89 c8                	mov    %ecx,%eax
 8284bb9:	01 c0                	add    %eax,%eax
 8284bbb:	01 c8                	add    %ecx,%eax
 8284bbd:	8d 0c 85 00 00 00 00 	lea    0x0(,%eax,4),%ecx
 8284bc4:	89 d0                	mov    %edx,%eax
 8284bc6:	01 c0                	add    %eax,%eax
 8284bc8:	01 d0                	add    %edx,%eax
 8284bca:	c1 e0 03             	shl    $0x3,%eax
 8284bcd:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8284bd0:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 8284bd3:	83 c0 08             	add    $0x8,%eax
 8284bd6:	8b 00                	mov    (%eax),%eax
 8284bd8:	85 c0                	test   %eax,%eax
 8284bda:	0f 85 9a 00 00 00    	jne    8284c7a <_ZN24CTournamentDungeonReward13SetRewardGoldERN8WongWork18stGenerateResult_tEf+0xec>
 8284be0:	8b 55 0c             	mov    0xc(%ebp),%edx
 8284be3:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8284be6:	89 54 24 04          	mov    %edx,0x4(%esp)
 8284bea:	89 04 24             	mov    %eax,(%esp)
 8284bed:	e8 12 61 ec ff       	call   814ad04 <_ZNSt6vectorI10Inven_ItemSaIS0_EE5beginEv>
 8284bf2:	83 ec 04             	sub    $0x4,%esp
 8284bf5:	8b 55 0c             	mov    0xc(%ebp),%edx
 8284bf8:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8284bfb:	89 54 24 04          	mov    %edx,0x4(%esp)
 8284bff:	89 04 24             	mov    %eax,(%esp)
 8284c02:	e8 e3 dc ec ff       	call   81528ea <_ZNSt6vectorI10Inven_ItemSaIS0_EE3endEv>
 8284c07:	83 ec 04             	sub    $0x4,%esp
 8284c0a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8284c0d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8284c11:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8284c14:	89 04 24             	mov    %eax,(%esp)
 8284c17:	e8 f4 dc ec ff       	call   8152910 <_ZN9__gnu_cxxneIP10Inven_ItemSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESB_>
 8284c1c:	84 c0                	test   %al,%al
 8284c1e:	74 5a                	je     8284c7a <_ZN24CTournamentDungeonReward13SetRewardGoldERN8WongWork18stGenerateResult_tEf+0xec>
 8284c20:	8b 5d f0             	mov    -0x10(%ebp),%ebx
 8284c23:	8b 75 f4             	mov    -0xc(%ebp),%esi
 8284c26:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8284c29:	89 04 24             	mov    %eax,(%esp)
 8284c2c:	e8 55 2e fb ff       	call   8237a86 <_ZNK9__gnu_cxx17__normal_iteratorIP10Inven_ItemSt6vectorIS1_SaIS1_EEEptEv>
 8284c31:	8b 40 07             	mov    0x7(%eax),%eax
 8284c34:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8284c37:	db 45 e4             	fildl  -0x1c(%ebp)
 8284c3a:	d8 4d 10             	fmuls  0x10(%ebp)
 8284c3d:	d9 7d e2             	fnstcw -0x1e(%ebp)
 8284c40:	0f b7 45 e2          	movzwl -0x1e(%ebp),%eax
 8284c44:	b4 0c                	mov    $0xc,%ah
 8284c46:	66 89 45 e0          	mov    %ax,-0x20(%ebp)
 8284c4a:	d9 6d e0             	fldcw  -0x20(%ebp)
 8284c4d:	db 5d e4             	fistpl -0x1c(%ebp)
 8284c50:	d9 6d e2             	fldcw  -0x1e(%ebp)
 8284c53:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8284c56:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8284c59:	89 f0                	mov    %esi,%eax
 8284c5b:	01 c0                	add    %eax,%eax
 8284c5d:	01 f0                	add    %esi,%eax
 8284c5f:	8d 34 85 00 00 00 00 	lea    0x0(,%eax,4),%esi
 8284c66:	89 d8                	mov    %ebx,%eax
 8284c68:	01 c0                	add    %eax,%eax
 8284c6a:	01 d8                	add    %ebx,%eax
 8284c6c:	c1 e0 03             	shl    $0x3,%eax
 8284c6f:	8d 04 06             	lea    (%esi,%eax,1),%eax
 8284c72:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8284c75:	83 c0 0c             	add    $0xc,%eax
 8284c78:	89 10                	mov    %edx,(%eax)
 8284c7a:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8284c7e:	83 7d f4 01          	cmpl   $0x1,-0xc(%ebp)
 8284c82:	0f 9e c0             	setle  %al
 8284c85:	84 c0                	test   %al,%al
 8284c87:	0f 85 21 ff ff ff    	jne    8284bae <_ZN24CTournamentDungeonReward13SetRewardGoldERN8WongWork18stGenerateResult_tEf+0x20>
 8284c8d:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8284c91:	83 7d f0 01          	cmpl   $0x1,-0x10(%ebp)
 8284c95:	0f 9e c0             	setle  %al
 8284c98:	84 c0                	test   %al,%al
 8284c9a:	0f 85 02 ff ff ff    	jne    8284ba2 <_ZN24CTournamentDungeonReward13SetRewardGoldERN8WongWork18stGenerateResult_tEf+0x14>
 8284ca0:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8284ca3:	83 c4 00             	add    $0x0,%esp
 8284ca6:	5b                   	pop    %ebx
 8284ca7:	5e                   	pop    %esi
 8284ca8:	5d                   	pop    %ebp
 8284ca9:	c3                   	ret

```

```c
// CTournamentDungeonReward::SetRewardGold @ 0x8284b8e

/* CTournamentDungeonReward::SetRewardGold(WongWork::stGenerateResult_t&, float) */

void __thiscall
CTournamentDungeonReward::SetRewardGold
          (CTournamentDungeonReward *this,stGenerateResult_t *param_1,float param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  __normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>> local_1c [4];
  __normal_iterator local_18 [4];
  int local_14;
  int local_10;
  
  for (local_14 = 0; local_14 < 2; local_14 = local_14 + 1) {
    for (local_10 = 0; local_10 < 2; local_10 = local_10 + 1) {
      if (*(int *)(this + local_10 * 0xc + local_14 * 0x18 + 8) == 0) {
        std::vector<Inven_Item,std::allocator<Inven_Item>>::begin();
        std::vector<Inven_Item,std::allocator<Inven_Item>>::end();
        bVar3 = __gnu_cxx::operator!=(local_1c,local_18);
        iVar2 = local_10;
        iVar1 = local_14;
        if (bVar3) {
          iVar4 = __gnu_cxx::
                  __normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
                  ::operator->(local_1c);
          *(int *)(this + iVar2 * 0xc + iVar1 * 0x18 + 0xc) =
               (int)ROUND((float)*(int *)(iVar4 + 7) * param_2);
        }
      }
    }
  }
  return;
}

```

---

## _ForceSelectCard

```asm
// === 082853b8 CTournamentDungeonReward::_ForceSelectCard  [0x082853b8-0x82854e8] ===
 82853b8:	55                   	push   %ebp
 82853b9:	89 e5                	mov    %esp,%ebp
 82853bb:	56                   	push   %esi
 82853bc:	53                   	push   %ebx
 82853bd:	83 ec 20             	sub    $0x20,%esp
 82853c0:	8b 45 0c             	mov    0xc(%ebp),%eax
 82853c3:	83 f8 01             	cmp    $0x1,%eax
 82853c6:	0f 8f 12 01 00 00    	jg     82854de <_ZN24CTournamentDungeonReward16_ForceSelectCardE32ENUM_TOURNAMENT_REWARD_CARD_TYPERKSt6vectorIiSaIiEE+0x126>
 82853cc:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 82853d3:	e9 f5 00 00 00       	jmp    82854cd <_ZN24CTournamentDungeonReward16_ForceSelectCardE32ENUM_TOURNAMENT_REWARD_CARD_TYPERKSt6vectorIiSaIiEE+0x115>
 82853d8:	8b 55 0c             	mov    0xc(%ebp),%edx
 82853db:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 82853de:	8b 5d 08             	mov    0x8(%ebp),%ebx
 82853e1:	89 c8                	mov    %ecx,%eax
 82853e3:	01 c0                	add    %eax,%eax
 82853e5:	01 c8                	add    %ecx,%eax
 82853e7:	8d 0c 85 00 00 00 00 	lea    0x0(,%eax,4),%ecx
 82853ee:	89 d0                	mov    %edx,%eax
 82853f0:	01 c0                	add    %eax,%eax
 82853f2:	01 d0                	add    %edx,%eax
 82853f4:	c1 e0 03             	shl    $0x3,%eax
 82853f7:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 82853fa:	0f b6 44 18 10       	movzbl 0x10(%eax,%ebx,1),%eax
 82853ff:	3c ff                	cmp    $0xff,%al
 8285401:	0f 85 c2 00 00 00    	jne    82854c9 <_ZN24CTournamentDungeonReward16_ForceSelectCardE32ENUM_TOURNAMENT_REWARD_CARD_TYPERKSt6vectorIiSaIiEE+0x111>
 8285407:	8d 45 e8             	lea    -0x18(%ebp),%eax
 828540a:	8b 55 10             	mov    0x10(%ebp),%edx
 828540d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8285411:	89 04 24             	mov    %eax,(%esp)
 8285414:	e8 35 7f e4 ff       	call   80cd34e <_ZNKSt6vectorIiSaIiEE5beginEv>
 8285419:	83 ec 04             	sub    $0x4,%esp
 828541c:	eb 7c                	jmp    828549a <_ZN24CTournamentDungeonReward16_ForceSelectCardE32ENUM_TOURNAMENT_REWARD_CARD_TYPERKSt6vectorIiSaIiEE+0xe2>
 828541e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8285421:	89 04 24             	mov    %eax,(%esp)
 8285424:	e8 f3 45 e7 ff       	call   80f9a1c <_ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEdeEv>
 8285429:	8b 00                	mov    (%eax),%eax
 828542b:	89 44 24 08          	mov    %eax,0x8(%esp)
 828542f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8285432:	89 44 24 04          	mov    %eax,0x4(%esp)
 8285436:	8b 45 08             	mov    0x8(%ebp),%eax
 8285439:	89 04 24             	mov    %eax,(%esp)
 828543c:	e8 43 fe ff ff       	call   8285284 <_ZN24CTournamentDungeonReward18isMemberSelectCardE32ENUM_TOURNAMENT_REWARD_CARD_TYPEi>
 8285441:	83 f0 01             	xor    $0x1,%eax
 8285444:	84 c0                	test   %al,%al
 8285446:	74 35                	je     828547d <_ZN24CTournamentDungeonReward16_ForceSelectCardE32ENUM_TOURNAMENT_REWARD_CARD_TYPERKSt6vectorIiSaIiEE+0xc5>
 8285448:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 828544b:	8b 75 f4             	mov    -0xc(%ebp),%esi
 828544e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8285451:	89 04 24             	mov    %eax,(%esp)
 8285454:	e8 c3 45 e7 ff       	call   80f9a1c <_ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEdeEv>
 8285459:	8b 00                	mov    (%eax),%eax
 828545b:	89 c1                	mov    %eax,%ecx
 828545d:	8b 55 08             	mov    0x8(%ebp),%edx
 8285460:	89 f0                	mov    %esi,%eax
 8285462:	01 c0                	add    %eax,%eax
 8285464:	01 f0                	add    %esi,%eax
 8285466:	8d 34 85 00 00 00 00 	lea    0x0(,%eax,4),%esi
 828546d:	89 d8                	mov    %ebx,%eax
 828546f:	01 c0                	add    %eax,%eax
 8285471:	01 d8                	add    %ebx,%eax
 8285473:	c1 e0 03             	shl    $0x3,%eax
 8285476:	8d 04 06             	lea    (%esi,%eax,1),%eax
 8285479:	88 4c 10 10          	mov    %cl,0x10(%eax,%edx,1)
 828547d:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8285480:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8285487:	00 
 8285488:	8d 55 e8             	lea    -0x18(%ebp),%edx
 828548b:	89 54 24 04          	mov    %edx,0x4(%esp)
 828548f:	89 04 24             	mov    %eax,(%esp)
 8285492:	e8 1b e4 f0 ff       	call   81938b2 <_ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEppEi>
 8285497:	83 ec 04             	sub    $0x4,%esp
 828549a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 828549d:	8b 55 10             	mov    0x10(%ebp),%edx
 82854a0:	89 54 24 04          	mov    %edx,0x4(%esp)
 82854a4:	89 04 24             	mov    %eax,(%esp)
 82854a7:	e8 ce 7e e4 ff       	call   80cd37a <_ZNKSt6vectorIiSaIiEE3endEv>
 82854ac:	83 ec 04             	sub    $0x4,%esp
 82854af:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82854b2:	89 44 24 04          	mov    %eax,0x4(%esp)
 82854b6:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82854b9:	89 04 24             	mov    %eax,(%esp)
 82854bc:	e8 65 45 e7 ff       	call   80f9a26 <_ZN9__gnu_cxxneIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_>
 82854c1:	84 c0                	test   %al,%al
 82854c3:	0f 85 55 ff ff ff    	jne    828541e <_ZN24CTournamentDungeonReward16_ForceSelectCardE32ENUM_TOURNAMENT_REWARD_CARD_TYPERKSt6vectorIiSaIiEE+0x66>
 82854c9:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 82854cd:	83 7d f4 01          	cmpl   $0x1,-0xc(%ebp)
 82854d1:	0f 9e c0             	setle  %al
 82854d4:	84 c0                	test   %al,%al
 82854d6:	0f 85 fc fe ff ff    	jne    82853d8 <_ZN24CTournamentDungeonReward16_ForceSelectCardE32ENUM_TOURNAMENT_REWARD_CARD_TYPERKSt6vectorIiSaIiEE+0x20>
 82854dc:	eb 01                	jmp    82854df <_ZN24CTournamentDungeonReward16_ForceSelectCardE32ENUM_TOURNAMENT_REWARD_CARD_TYPERKSt6vectorIiSaIiEE+0x127>
 82854de:	90                   	nop
 82854df:	8d 65 f8             	lea    -0x8(%ebp),%esp
 82854e2:	83 c4 00             	add    $0x0,%esp
 82854e5:	5b                   	pop    %ebx
 82854e6:	5e                   	pop    %esi
 82854e7:	5d                   	pop    %ebp
 82854e8:	c3                   	ret

```

```c
// CTournamentDungeonReward::_ForceSelectCard @ 0x82853b8

/* CTournamentDungeonReward::_ForceSelectCard(ENUM_TOURNAMENT_REWARD_CARD_TYPE, std::vector<int,
   std::allocator<int> > const&) */

void CTournamentDungeonReward::_ForceSelectCard(CTournamentDungeonReward *param_1,int param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined4 *puVar4;
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_1c [4];
  __normal_iterator local_18 [4];
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_14 [4];
  int local_10;
  
  if (param_2 < 2) {
    for (local_10 = 0; local_10 < 2; local_10 = local_10 + 1) {
      if (param_1[local_10 * 0xc + param_2 * 0x18 + 0x10] == (CTournamentDungeonReward)0xff) {
        std::vector<int,std::allocator<int>>::begin();
        while( true ) {
          std::vector<int,std::allocator<int>>::end();
          bVar3 = __gnu_cxx::operator!=(local_1c,local_18);
          if (!bVar3) break;
          puVar4 = (undefined4 *)
                   __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
                   operator*(local_1c);
          cVar2 = isMemberSelectCard(param_1,param_2,*puVar4);
          iVar1 = local_10;
          if (cVar2 != '\x01') {
            puVar4 = (undefined4 *)
                     __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
                     operator*(local_1c);
            param_1[iVar1 * 0xc + param_2 * 0x18 + 0x10] = SUB41(*puVar4,0);
          }
          __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::operator++
                    (local_14,(int)local_1c);
        }
      }
    }
  }
  return;
}

```

---

## _MakeRewardPacket

```asm
// === 082852e4 CTournamentDungeonReward::_MakeRewardPacket  [0x082852e4-0x82853b7] ===
 82852e4:	55                   	push   %ebp
 82852e5:	89 e5                	mov    %esp,%ebp
 82852e7:	53                   	push   %ebx
 82852e8:	83 ec 24             	sub    $0x24,%esp
 82852eb:	8b 45 0c             	mov    0xc(%ebp),%eax
 82852ee:	83 f8 01             	cmp    $0x1,%eax
 82852f1:	0f 8f b9 00 00 00    	jg     82853b0 <_ZN24CTournamentDungeonReward17_MakeRewardPacketE32ENUM_TOURNAMENT_REWARD_CARD_TYPEP11PacketGuard+0xcc>
 82852f7:	8b 45 10             	mov    0x10(%ebp),%eax
 82852fa:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8285301:	00 
 8285302:	89 04 24             	mov    %eax,(%esp)
 8285305:	e8 16 66 e4 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 828530a:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8285311:	e9 89 00 00 00       	jmp    828539f <_ZN24CTournamentDungeonReward17_MakeRewardPacketE32ENUM_TOURNAMENT_REWARD_CARD_TYPEP11PacketGuard+0xbb>
 8285316:	8b 55 0c             	mov    0xc(%ebp),%edx
 8285319:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 828531c:	8b 5d 08             	mov    0x8(%ebp),%ebx
 828531f:	89 c8                	mov    %ecx,%eax
 8285321:	01 c0                	add    %eax,%eax
 8285323:	01 c8                	add    %ecx,%eax
 8285325:	8d 0c 85 00 00 00 00 	lea    0x0(,%eax,4),%ecx
 828532c:	89 d0                	mov    %edx,%eax
 828532e:	01 c0                	add    %eax,%eax
 8285330:	01 d0                	add    %edx,%eax
 8285332:	c1 e0 03             	shl    $0x3,%eax
 8285335:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8285338:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 828533b:	83 c0 08             	add    $0x8,%eax
 828533e:	8b 10                	mov    (%eax),%edx
 8285340:	8b 45 10             	mov    0x10(%ebp),%eax
 8285343:	89 54 24 04          	mov    %edx,0x4(%esp)
 8285347:	89 04 24             	mov    %eax,(%esp)
 828534a:	e8 ed 65 e4 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 828534f:	8b 55 0c             	mov    0xc(%ebp),%edx
 8285352:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 8285355:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8285358:	89 c8                	mov    %ecx,%eax
 828535a:	01 c0                	add    %eax,%eax
 828535c:	01 c8                	add    %ecx,%eax
 828535e:	8d 0c 85 00 00 00 00 	lea    0x0(,%eax,4),%ecx
 8285365:	89 d0                	mov    %edx,%eax
 8285367:	01 c0                	add    %eax,%eax
 8285369:	01 d0                	add    %edx,%eax
 828536b:	c1 e0 03             	shl    $0x3,%eax
 828536e:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8285371:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 8285374:	83 c0 0c             	add    $0xc,%eax
 8285377:	8b 10                	mov    (%eax),%edx
 8285379:	8b 45 10             	mov    0x10(%ebp),%eax
 828537c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8285380:	89 04 24             	mov    %eax,(%esp)
 8285383:	e8 b4 65 e4 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8285388:	8b 45 10             	mov    0x10(%ebp),%eax
 828538b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8285392:	00 
 8285393:	89 04 24             	mov    %eax,(%esp)
 8285396:	e8 09 4b e5 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 828539b:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 828539f:	83 7d f4 01          	cmpl   $0x1,-0xc(%ebp)
 82853a3:	0f 9e c0             	setle  %al
 82853a6:	84 c0                	test   %al,%al
 82853a8:	0f 85 68 ff ff ff    	jne    8285316 <_ZN24CTournamentDungeonReward17_MakeRewardPacketE32ENUM_TOURNAMENT_REWARD_CARD_TYPEP11PacketGuard+0x32>
 82853ae:	eb 01                	jmp    82853b1 <_ZN24CTournamentDungeonReward17_MakeRewardPacketE32ENUM_TOURNAMENT_REWARD_CARD_TYPEP11PacketGuard+0xcd>
 82853b0:	90                   	nop
 82853b1:	83 c4 24             	add    $0x24,%esp
 82853b4:	5b                   	pop    %ebx
 82853b5:	5d                   	pop    %ebp
 82853b6:	c3                   	ret
 82853b7:	90                   	nop

```

```c
// CTournamentDungeonReward::_MakeRewardPacket @ 0x82852e4

/* CTournamentDungeonReward::_MakeRewardPacket(ENUM_TOURNAMENT_REWARD_CARD_TYPE, PacketGuard*) */

void __thiscall
CTournamentDungeonReward::_MakeRewardPacket
          (CTournamentDungeonReward *this,int param_2,InterfacePacketBuf *param_3)

{
  int local_10;
  
  if (param_2 < 2) {
    InterfacePacketBuf::put_byte(param_3,2);
    for (local_10 = 0; local_10 < 2; local_10 = local_10 + 1) {
      InterfacePacketBuf::put_int(param_3,*(int *)(this + local_10 * 0xc + param_2 * 0x18 + 8));
      InterfacePacketBuf::put_int(param_3,*(int *)(this + local_10 * 0xc + param_2 * 0x18 + 0xc));
      InterfacePacketBuf::put_short(param_3,0);
    }
  }
  return;
}

```

---

## isCardSelectComplete

```asm
// === 08284d08 CTournamentDungeonReward::isCardSelectComplete  [0x08284d08-0x8284ee3] ===
 8284d08:	55                   	push   %ebp
 8284d09:	89 e5                	mov    %esp,%ebp
 8284d0b:	53                   	push   %ebx
 8284d0c:	83 ec 44             	sub    $0x44,%esp
 8284d0f:	8b 45 10             	mov    0x10(%ebp),%eax
 8284d12:	89 04 24             	mov    %eax,(%esp)
 8284d15:	e8 46 7c e9 ff       	call   811c960 <_ZNKSt6vectorIiSaIiEE5emptyEv>
 8284d1a:	84 c0                	test   %al,%al
 8284d1c:	74 0a                	je     8284d28 <_ZN24CTournamentDungeonReward20isCardSelectCompleteE32ENUM_TOURNAMENT_REWARD_CARD_TYPERKSt6vectorIiSaIiEE+0x20>
 8284d1e:	b8 00 00 00 00       	mov    $0x0,%eax
 8284d23:	e9 b6 01 00 00       	jmp    8284ede <_ZN24CTournamentDungeonReward20isCardSelectCompleteE32ENUM_TOURNAMENT_REWARD_CARD_TYPERKSt6vectorIiSaIiEE+0x1d6>
 8284d28:	83 7d 0c 02          	cmpl   $0x2,0xc(%ebp)
 8284d2c:	0f 85 e7 00 00 00    	jne    8284e19 <_ZN24CTournamentDungeonReward20isCardSelectCompleteE32ENUM_TOURNAMENT_REWARD_CARD_TYPERKSt6vectorIiSaIiEE+0x111>
 8284d32:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8284d39:	e9 c7 00 00 00       	jmp    8284e05 <_ZN24CTournamentDungeonReward20isCardSelectCompleteE32ENUM_TOURNAMENT_REWARD_CARD_TYPERKSt6vectorIiSaIiEE+0xfd>
 8284d3e:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8284d45:	e9 a8 00 00 00       	jmp    8284df2 <_ZN24CTournamentDungeonReward20isCardSelectCompleteE32ENUM_TOURNAMENT_REWARD_CARD_TYPERKSt6vectorIiSaIiEE+0xea>
 8284d4a:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8284d4d:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 8284d50:	89 c8                	mov    %ecx,%eax
 8284d52:	01 c0                	add    %eax,%eax
 8284d54:	01 c8                	add    %ecx,%eax
 8284d56:	8d 0c 85 00 00 00 00 	lea    0x0(,%eax,4),%ecx
 8284d5d:	89 d0                	mov    %edx,%eax
 8284d5f:	01 c0                	add    %eax,%eax
 8284d61:	01 d0                	add    %edx,%eax
 8284d63:	c1 e0 03             	shl    $0x3,%eax
 8284d66:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8284d69:	03 45 08             	add    0x8(%ebp),%eax
 8284d6c:	8d 58 10             	lea    0x10(%eax),%ebx
 8284d6f:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8284d72:	8b 55 10             	mov    0x10(%ebp),%edx
 8284d75:	89 54 24 04          	mov    %edx,0x4(%esp)
 8284d79:	89 04 24             	mov    %eax,(%esp)
 8284d7c:	e8 f9 85 e4 ff       	call   80cd37a <_ZNKSt6vectorIiSaIiEE3endEv>
 8284d81:	83 ec 04             	sub    $0x4,%esp
 8284d84:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8284d87:	8b 55 10             	mov    0x10(%ebp),%edx
 8284d8a:	89 54 24 04          	mov    %edx,0x4(%esp)
 8284d8e:	89 04 24             	mov    %eax,(%esp)
 8284d91:	e8 b8 85 e4 ff       	call   80cd34e <_ZNKSt6vectorIiSaIiEE5beginEv>
 8284d96:	83 ec 04             	sub    $0x4,%esp
 8284d99:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8284d9c:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8284da0:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 8284da3:	89 54 24 08          	mov    %edx,0x8(%esp)
 8284da7:	8b 55 d8             	mov    -0x28(%ebp),%edx
 8284daa:	89 54 24 04          	mov    %edx,0x4(%esp)
 8284dae:	89 04 24             	mov    %eax,(%esp)
 8284db1:	e8 53 08 00 00       	call   8285609 <_ZSt4findIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEcET_S8_S8_RKT0_>
 8284db6:	83 ec 04             	sub    $0x4,%esp
 8284db9:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8284dbc:	8b 55 10             	mov    0x10(%ebp),%edx
 8284dbf:	89 54 24 04          	mov    %edx,0x4(%esp)
 8284dc3:	89 04 24             	mov    %eax,(%esp)
 8284dc6:	e8 af 85 e4 ff       	call   80cd37a <_ZNKSt6vectorIiSaIiEE3endEv>
 8284dcb:	83 ec 04             	sub    $0x4,%esp
 8284dce:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8284dd1:	89 44 24 04          	mov    %eax,0x4(%esp)
 8284dd5:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8284dd8:	89 04 24             	mov    %eax,(%esp)
 8284ddb:	e8 bc 4d e7 ff       	call   80f9b9c <_ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_>
 8284de0:	84 c0                	test   %al,%al
 8284de2:	74 0a                	je     8284dee <_ZN24CTournamentDungeonReward20isCardSelectCompleteE32ENUM_TOURNAMENT_REWARD_CARD_TYPERKSt6vectorIiSaIiEE+0xe6>
 8284de4:	b8 00 00 00 00       	mov    $0x0,%eax
 8284de9:	e9 f0 00 00 00       	jmp    8284ede <_ZN24CTournamentDungeonReward20isCardSelectCompleteE32ENUM_TOURNAMENT_REWARD_CARD_TYPERKSt6vectorIiSaIiEE+0x1d6>
 8284dee:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8284df2:	83 7d f0 01          	cmpl   $0x1,-0x10(%ebp)
 8284df6:	0f 9e c0             	setle  %al
 8284df9:	84 c0                	test   %al,%al
 8284dfb:	0f 85 49 ff ff ff    	jne    8284d4a <_ZN24CTournamentDungeonReward20isCardSelectCompleteE32ENUM_TOURNAMENT_REWARD_CARD_TYPERKSt6vectorIiSaIiEE+0x42>
 8284e01:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 8284e05:	83 7d ec 01          	cmpl   $0x1,-0x14(%ebp)
 8284e09:	0f 9e c0             	setle  %al
 8284e0c:	84 c0                	test   %al,%al
 8284e0e:	0f 85 2a ff ff ff    	jne    8284d3e <_ZN24CTournamentDungeonReward20isCardSelectCompleteE32ENUM_TOURNAMENT_REWARD_CARD_TYPERKSt6vectorIiSaIiEE+0x36>
 8284e14:	e9 c0 00 00 00       	jmp    8284ed9 <_ZN24CTournamentDungeonReward20isCardSelectCompleteE32ENUM_TOURNAMENT_REWARD_CARD_TYPERKSt6vectorIiSaIiEE+0x1d1>
 8284e19:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8284e20:	e9 a5 00 00 00       	jmp    8284eca <_ZN24CTournamentDungeonReward20isCardSelectCompleteE32ENUM_TOURNAMENT_REWARD_CARD_TYPERKSt6vectorIiSaIiEE+0x1c2>
 8284e25:	8b 55 0c             	mov    0xc(%ebp),%edx
 8284e28:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 8284e2b:	89 c8                	mov    %ecx,%eax
 8284e2d:	01 c0                	add    %eax,%eax
 8284e2f:	01 c8                	add    %ecx,%eax
 8284e31:	8d 0c 85 00 00 00 00 	lea    0x0(,%eax,4),%ecx
 8284e38:	89 d0                	mov    %edx,%eax
 8284e3a:	01 c0                	add    %eax,%eax
 8284e3c:	01 d0                	add    %edx,%eax
 8284e3e:	c1 e0 03             	shl    $0x3,%eax
 8284e41:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8284e44:	03 45 08             	add    0x8(%ebp),%eax
 8284e47:	8d 58 10             	lea    0x10(%eax),%ebx
 8284e4a:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8284e4d:	8b 55 10             	mov    0x10(%ebp),%edx
 8284e50:	89 54 24 04          	mov    %edx,0x4(%esp)
 8284e54:	89 04 24             	mov    %eax,(%esp)
 8284e57:	e8 1e 85 e4 ff       	call   80cd37a <_ZNKSt6vectorIiSaIiEE3endEv>
 8284e5c:	83 ec 04             	sub    $0x4,%esp
 8284e5f:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8284e62:	8b 55 10             	mov    0x10(%ebp),%edx
 8284e65:	89 54 24 04          	mov    %edx,0x4(%esp)
 8284e69:	89 04 24             	mov    %eax,(%esp)
 8284e6c:	e8 dd 84 e4 ff       	call   80cd34e <_ZNKSt6vectorIiSaIiEE5beginEv>
 8284e71:	83 ec 04             	sub    $0x4,%esp
 8284e74:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8284e77:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8284e7b:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8284e7e:	89 54 24 08          	mov    %edx,0x8(%esp)
 8284e82:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8284e85:	89 54 24 04          	mov    %edx,0x4(%esp)
 8284e89:	89 04 24             	mov    %eax,(%esp)
 8284e8c:	e8 78 07 00 00       	call   8285609 <_ZSt4findIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEcET_S8_S8_RKT0_>
 8284e91:	83 ec 04             	sub    $0x4,%esp
 8284e94:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8284e97:	8b 55 10             	mov    0x10(%ebp),%edx
 8284e9a:	89 54 24 04          	mov    %edx,0x4(%esp)
 8284e9e:	89 04 24             	mov    %eax,(%esp)
 8284ea1:	e8 d4 84 e4 ff       	call   80cd37a <_ZNKSt6vectorIiSaIiEE3endEv>
 8284ea6:	83 ec 04             	sub    $0x4,%esp
 8284ea9:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8284eac:	89 44 24 04          	mov    %eax,0x4(%esp)
 8284eb0:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8284eb3:	89 04 24             	mov    %eax,(%esp)
 8284eb6:	e8 e1 4c e7 ff       	call   80f9b9c <_ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_>
 8284ebb:	84 c0                	test   %al,%al
 8284ebd:	74 07                	je     8284ec6 <_ZN24CTournamentDungeonReward20isCardSelectCompleteE32ENUM_TOURNAMENT_REWARD_CARD_TYPERKSt6vectorIiSaIiEE+0x1be>
 8284ebf:	b8 00 00 00 00       	mov    $0x0,%eax
 8284ec4:	eb 18                	jmp    8284ede <_ZN24CTournamentDungeonReward20isCardSelectCompleteE32ENUM_TOURNAMENT_REWARD_CARD_TYPERKSt6vectorIiSaIiEE+0x1d6>
 8284ec6:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8284eca:	83 7d f4 01          	cmpl   $0x1,-0xc(%ebp)
 8284ece:	0f 9e c0             	setle  %al
 8284ed1:	84 c0                	test   %al,%al
 8284ed3:	0f 85 4c ff ff ff    	jne    8284e25 <_ZN24CTournamentDungeonReward20isCardSelectCompleteE32ENUM_TOURNAMENT_REWARD_CARD_TYPERKSt6vectorIiSaIiEE+0x11d>
 8284ed9:	b8 01 00 00 00       	mov    $0x1,%eax
 8284ede:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 8284ee1:	c9                   	leave
 8284ee2:	c3                   	ret
 8284ee3:	90                   	nop

```

```c
// CTournamentDungeonReward::isCardSelectComplete @ 0x8284d08

/* CTournamentDungeonReward::isCardSelectComplete(ENUM_TOURNAMENT_REWARD_CARD_TYPE, std::vector<int,
   std::allocator<int> > const&) */

undefined4 __thiscall
CTournamentDungeonReward::isCardSelectComplete
          (CTournamentDungeonReward *this,int param_2,int param_3)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int local_54 [7];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  int local_30;
  undefined4 local_2c;
  undefined1 local_28 [4];
  int local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  int local_18;
  int local_14;
  int local_10;
  
  piVar6 = local_54 + 2;
  local_54[2] = param_3;
  cVar2 = std::vector<int,std::allocator<int>>::empty();
  if (cVar2 == '\0') {
    if (param_2 == 2) {
      for (local_18 = 0; local_18 < 2; local_18 = local_18 + 1) {
        for (local_14 = 0; local_14 < 2; local_14 = local_14 + 1) {
          iVar1 = local_14 * 0xc;
          iVar5 = local_18 * 0x18;
          piVar6[1] = param_3;
          *piVar6 = (int)&local_30;
          piVar6[-1] = 0x8284d81;
          std::vector<int,std::allocator<int>>::end();
          piVar6[1] = param_3;
          *piVar6 = (int)&local_2c;
          piVar6[-1] = 0x8284d96;
          std::vector<int,std::allocator<int>>::begin();
          piVar6[3] = (int)(this + iVar1 + iVar5 + 0x10);
          piVar6[2] = local_30;
          piVar6[1] = local_2c;
          *piVar6 = (int)local_34;
          piVar6[-1] = 0x8284db6;
          std::
          find<__gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>,char>()
          ;
          *piVar6 = param_3;
          piVar6[-1] = (int)local_28;
          piVar6[-2] = 0x8284dcb;
          std::vector<int,std::allocator<int>>::end();
          *piVar6 = (int)local_28;
          piVar6[-1] = (int)local_34;
          piVar6[-2] = 0x8284de0;
          bVar3 = __gnu_cxx::operator==
                            ((__normal_iterator *)piVar6[-1],(__normal_iterator *)*piVar6);
          if (bVar3) {
            return 0;
          }
          piVar6 = piVar6 + -1;
        }
      }
    }
    else {
      piVar6 = local_54 + 2;
      for (local_10 = 0; local_10 < 2; local_10 = local_10 + 1) {
        iVar1 = local_10 * 0xc;
        piVar6[1] = param_3;
        *piVar6 = (int)&local_24;
        piVar6[-1] = 0x8284e5c;
        std::vector<int,std::allocator<int>>::end();
        piVar6[1] = param_3;
        *piVar6 = (int)&local_20;
        piVar6[-1] = 0x8284e71;
        std::vector<int,std::allocator<int>>::begin();
        piVar6[3] = (int)(this + iVar1 + param_2 * 0x18 + 0x10);
        piVar6[2] = local_24;
        piVar6[1] = local_20;
        *piVar6 = (int)local_38;
        piVar6[-1] = 0x8284e91;
        std::
        find<__gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>,char>();
        *piVar6 = param_3;
        piVar6[-1] = (int)local_1c;
        piVar6[-2] = 0x8284ea6;
        std::vector<int,std::allocator<int>>::end();
        *piVar6 = (int)local_1c;
        piVar6[-1] = (int)local_38;
        piVar6[-2] = 0x8284ebb;
        bVar3 = __gnu_cxx::operator==((__normal_iterator *)piVar6[-1],(__normal_iterator *)*piVar6);
        if (bVar3) {
          return 0;
        }
        piVar6 = piVar6 + -1;
      }
    }
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

```

---

## isMemberSelectCard

```asm
// === 08285284 CTournamentDungeonReward::isMemberSelectCard  [0x08285284-0x82852e3] ===
 8285284:	55                   	push   %ebp
 8285285:	89 e5                	mov    %esp,%ebp
 8285287:	53                   	push   %ebx
 8285288:	83 ec 10             	sub    $0x10,%esp
 828528b:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%ebp)
 8285292:	eb 3a                	jmp    82852ce <_ZN24CTournamentDungeonReward18isMemberSelectCardE32ENUM_TOURNAMENT_REWARD_CARD_TYPEi+0x4a>
 8285294:	8b 55 0c             	mov    0xc(%ebp),%edx
 8285297:	8b 4d f8             	mov    -0x8(%ebp),%ecx
 828529a:	8b 5d 08             	mov    0x8(%ebp),%ebx
 828529d:	89 c8                	mov    %ecx,%eax
 828529f:	01 c0                	add    %eax,%eax
 82852a1:	01 c8                	add    %ecx,%eax
 82852a3:	8d 0c 85 00 00 00 00 	lea    0x0(,%eax,4),%ecx
 82852aa:	89 d0                	mov    %edx,%eax
 82852ac:	01 c0                	add    %eax,%eax
 82852ae:	01 d0                	add    %edx,%eax
 82852b0:	c1 e0 03             	shl    $0x3,%eax
 82852b3:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 82852b6:	0f b6 44 18 10       	movzbl 0x10(%eax,%ebx,1),%eax
 82852bb:	0f be c0             	movsbl %al,%eax
 82852be:	3b 45 10             	cmp    0x10(%ebp),%eax
 82852c1:	75 07                	jne    82852ca <_ZN24CTournamentDungeonReward18isMemberSelectCardE32ENUM_TOURNAMENT_REWARD_CARD_TYPEi+0x46>
 82852c3:	b8 01 00 00 00       	mov    $0x1,%eax
 82852c8:	eb 14                	jmp    82852de <_ZN24CTournamentDungeonReward18isMemberSelectCardE32ENUM_TOURNAMENT_REWARD_CARD_TYPEi+0x5a>
 82852ca:	83 45 f8 01          	addl   $0x1,-0x8(%ebp)
 82852ce:	83 7d f8 01          	cmpl   $0x1,-0x8(%ebp)
 82852d2:	0f 9e c0             	setle  %al
 82852d5:	84 c0                	test   %al,%al
 82852d7:	75 bb                	jne    8285294 <_ZN24CTournamentDungeonReward18isMemberSelectCardE32ENUM_TOURNAMENT_REWARD_CARD_TYPEi+0x10>
 82852d9:	b8 00 00 00 00       	mov    $0x0,%eax
 82852de:	83 c4 10             	add    $0x10,%esp
 82852e1:	5b                   	pop    %ebx
 82852e2:	5d                   	pop    %ebp
 82852e3:	c3                   	ret

```

```c
// CTournamentDungeonReward::isMemberSelectCard @ 0x8285284

/* CTournamentDungeonReward::isMemberSelectCard(ENUM_TOURNAMENT_REWARD_CARD_TYPE, int) */

undefined4 __thiscall
CTournamentDungeonReward::isMemberSelectCard(CTournamentDungeonReward *this,int param_2,int param_3)

{
  int local_c;
  
  local_c = 0;
  while( true ) {
    if (1 < local_c) {
      return 0;
    }
    if ((char)this[local_c * 0xc + param_2 * 0x18 + 0x10] == param_3) break;
    local_c = local_c + 1;
  }
  return 1;
}

```

---

## ~CTournamentDungeonReward

```asm
// === 082847dc CTournamentDungeonReward::~CTournamentDungeonReward  [0x082847dc-0x8284801] ===
 82847dc:	55                   	push   %ebp
 82847dd:	89 e5                	mov    %esp,%ebp
 82847df:	83 ec 18             	sub    $0x18,%esp
 82847e2:	8b 45 08             	mov    0x8(%ebp),%eax
 82847e5:	c7 00 f0 cb c0 08    	movl   $0x8c0cbf0,(%eax)
 82847eb:	b8 00 00 00 00       	mov    $0x0,%eax
 82847f0:	84 c0                	test   %al,%al
 82847f2:	74 0b                	je     82847ff <_ZN24CTournamentDungeonRewardD1Ev+0x23>
 82847f4:	8b 45 08             	mov    0x8(%ebp),%eax
 82847f7:	89 04 24             	mov    %eax,(%esp)
 82847fa:	e8 f1 fc 49 00       	call   87244f0 <_ZdlPv>
 82847ff:	c9                   	leave
 8284800:	c3                   	ret
 8284801:	90                   	nop

```

```c
// CTournamentDungeonReward::~CTournamentDungeonReward @ 0x82847dc

/* WARNING: Removing unreachable block (ram,0x082847f4) */
/* CTournamentDungeonReward::~CTournamentDungeonReward() */

void __thiscall CTournamentDungeonReward::~CTournamentDungeonReward(CTournamentDungeonReward *this)

{
  *(undefined ***)this = &PTR__CTournamentDungeonReward_08c0cbf0;
  return;
}

```

---

## ~CTournamentDungeonReward_08284802

```asm
// === 08284802 CTournamentDungeonReward::~CTournamentDungeonReward  [0x08284802-0x828481f] ===
 8284802:	55                   	push   %ebp
 8284803:	89 e5                	mov    %esp,%ebp
 8284805:	83 ec 18             	sub    $0x18,%esp
 8284808:	8b 45 08             	mov    0x8(%ebp),%eax
 828480b:	89 04 24             	mov    %eax,(%esp)
 828480e:	e8 c9 ff ff ff       	call   82847dc <_ZN24CTournamentDungeonRewardD1Ev>
 8284813:	8b 45 08             	mov    0x8(%ebp),%eax
 8284816:	89 04 24             	mov    %eax,(%esp)
 8284819:	e8 d2 fc 49 00       	call   87244f0 <_ZdlPv>
 828481e:	c9                   	leave
 828481f:	c3                   	ret

```

```c
// CTournamentDungeonReward::~CTournamentDungeonReward @ 0x8284802

/* CTournamentDungeonReward::~CTournamentDungeonReward() */

void __thiscall CTournamentDungeonReward::~CTournamentDungeonReward(CTournamentDungeonReward *this)

{
  ~CTournamentDungeonReward(this);
  operator_delete(this);
  return;
}

```

