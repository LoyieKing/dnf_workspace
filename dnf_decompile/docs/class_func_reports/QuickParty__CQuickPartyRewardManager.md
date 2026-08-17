# QuickParty__CQuickPartyRewardManager

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 8

---

## CQuickPartyRewardManager

```asm
// === 0826d688 QuickParty::CQuickPartyRewardManager::CQuickPartyRewardManager  [0x0826d688-0x826d69b] ===
 826d688:	55                   	push   %ebp
 826d689:	89 e5                	mov    %esp,%ebp
 826d68b:	83 ec 18             	sub    $0x18,%esp
 826d68e:	8b 45 08             	mov    0x8(%ebp),%eax
 826d691:	89 04 24             	mov    %eax,(%esp)
 826d694:	e8 3b 04 00 00       	call   826dad4 <_ZN10QuickParty14QuickPartyDataC1Ev>
 826d699:	c9                   	leave
 826d69a:	c3                   	ret
 826d69b:	90                   	nop

```

```c
// QuickParty::CQuickPartyRewardManager::CQuickPartyRewardManager @ 0x826d688

/* QuickParty::CQuickPartyRewardManager::CQuickPartyRewardManager() */

void __thiscall
QuickParty::CQuickPartyRewardManager::CQuickPartyRewardManager(CQuickPartyRewardManager *this)

{
  QuickPartyData::QuickPartyData((QuickPartyData *)this);
  return;
}

```

---

## getRequireQuickPartyMinCount

```asm
// === 0826d8a2 QuickParty::CQuickPartyRewardManager::getRequireQuickPartyMinCount  [0x0826d8a2-0x826d8e1] ===
 826d8a2:	55                   	push   %ebp
 826d8a3:	89 e5                	mov    %esp,%ebp
 826d8a5:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 826d8a9:	78 06                	js     826d8b1 <_ZN10QuickParty24CQuickPartyRewardManager28getRequireQuickPartyMinCountEii+0xf>
 826d8ab:	83 7d 0c 01          	cmpl   $0x1,0xc(%ebp)
 826d8af:	7e 07                	jle    826d8b8 <_ZN10QuickParty24CQuickPartyRewardManager28getRequireQuickPartyMinCountEii+0x16>
 826d8b1:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 826d8b6:	eb 28                	jmp    826d8e0 <_ZN10QuickParty24CQuickPartyRewardManager28getRequireQuickPartyMinCountEii+0x3e>
 826d8b8:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 826d8bc:	78 06                	js     826d8c4 <_ZN10QuickParty24CQuickPartyRewardManager28getRequireQuickPartyMinCountEii+0x22>
 826d8be:	83 7d 10 03          	cmpl   $0x3,0x10(%ebp)
 826d8c2:	7e 07                	jle    826d8cb <_ZN10QuickParty24CQuickPartyRewardManager28getRequireQuickPartyMinCountEii+0x29>
 826d8c4:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 826d8c9:	eb 15                	jmp    826d8e0 <_ZN10QuickParty24CQuickPartyRewardManager28getRequireQuickPartyMinCountEii+0x3e>
 826d8cb:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 826d8ce:	8b 55 10             	mov    0x10(%ebp),%edx
 826d8d1:	8b 45 08             	mov    0x8(%ebp),%eax
 826d8d4:	c1 e1 02             	shl    $0x2,%ecx
 826d8d7:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 826d8da:	83 c2 68             	add    $0x68,%edx
 826d8dd:	8b 04 90             	mov    (%eax,%edx,4),%eax
 826d8e0:	5d                   	pop    %ebp
 826d8e1:	c3                   	ret

```

```c
// QuickParty::CQuickPartyRewardManager::getRequireQuickPartyMinCount @ 0x826d8a2

/* QuickParty::CQuickPartyRewardManager::getRequireQuickPartyMinCount(int, int) */

undefined4 __thiscall
QuickParty::CQuickPartyRewardManager::getRequireQuickPartyMinCount
          (CQuickPartyRewardManager *this,int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((param_1 < 0) || (1 < param_1)) {
    uVar1 = 0xffffffff;
  }
  else if ((param_2 < 0) || (3 < param_2)) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(this + (param_1 * 4 + param_2 + 0x68) * 4);
  }
  return uVar1;
}

```

---

## get_dungeon_idx_list

```asm
// === 0826d896 QuickParty::CQuickPartyRewardManager::get_dungeon_idx_list  [0x0826d896-0x826d8a1] ===
 826d896:	55                   	push   %ebp
 826d897:	89 e5                	mov    %esp,%ebp
 826d899:	8b 45 08             	mov    0x8(%ebp),%eax
 826d89c:	83 c0 0c             	add    $0xc,%eax
 826d89f:	5d                   	pop    %ebp
 826d8a0:	c3                   	ret
 826d8a1:	90                   	nop

```

```c
// QuickParty::CQuickPartyRewardManager::get_dungeon_idx_list @ 0x826d896

/* QuickParty::CQuickPartyRewardManager::get_dungeon_idx_list() */

CQuickPartyRewardManager * __thiscall
QuickParty::CQuickPartyRewardManager::get_dungeon_idx_list(CQuickPartyRewardManager *this)

{
  return this + 0xc;
}

```

---

## get_random_buff_prob

```asm
// === 0826d860 QuickParty::CQuickPartyRewardManager::get_random_buff_prob  [0x0826d860-0x826d895] ===
 826d860:	55                   	push   %ebp
 826d861:	89 e5                	mov    %esp,%ebp
 826d863:	53                   	push   %ebx
 826d864:	8b 45 0c             	mov    0xc(%ebp),%eax
 826d867:	83 f8 0b             	cmp    $0xb,%eax
 826d86a:	7f 08                	jg     826d874 <_ZN10QuickParty24CQuickPartyRewardManager20get_random_buff_probENS_14RandomBuffTypeENS_17RandomBuffDungeonE+0x14>
 826d86c:	8b 45 10             	mov    0x10(%ebp),%eax
 826d86f:	83 f8 06             	cmp    $0x6,%eax
 826d872:	7e 07                	jle    826d87b <_ZN10QuickParty24CQuickPartyRewardManager20get_random_buff_probENS_14RandomBuffTypeENS_17RandomBuffDungeonE+0x1b>
 826d874:	b8 00 00 00 00       	mov    $0x0,%eax
 826d879:	eb 18                	jmp    826d893 <_ZN10QuickParty24CQuickPartyRewardManager20get_random_buff_probENS_14RandomBuffTypeENS_17RandomBuffDungeonE+0x33>
 826d87b:	8b 55 0c             	mov    0xc(%ebp),%edx
 826d87e:	8b 5d 10             	mov    0x10(%ebp),%ebx
 826d881:	8b 4d 08             	mov    0x8(%ebp),%ecx
 826d884:	89 d0                	mov    %edx,%eax
 826d886:	c1 e0 03             	shl    $0x3,%eax
 826d889:	29 d0                	sub    %edx,%eax
 826d88b:	01 d8                	add    %ebx,%eax
 826d88d:	83 c0 14             	add    $0x14,%eax
 826d890:	8b 04 81             	mov    (%ecx,%eax,4),%eax
 826d893:	5b                   	pop    %ebx
 826d894:	5d                   	pop    %ebp
 826d895:	c3                   	ret

```

```c
// QuickParty::CQuickPartyRewardManager::get_random_buff_prob @ 0x826d860

/* QuickParty::CQuickPartyRewardManager::get_random_buff_prob(QuickParty::RandomBuffType,
   QuickParty::RandomBuffDungeon) */

undefined4 __thiscall
QuickParty::CQuickPartyRewardManager::get_random_buff_prob
          (CQuickPartyRewardManager *this,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((param_2 < 0xc) && (param_3 < 7)) {
    uVar1 = *(undefined4 *)(this + (param_2 * 7 + param_3 + 0x14) * 4);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## get_reward_type_object

```asm
// === 0826d8e2 QuickParty::CQuickPartyRewardManager::get_reward_type_object  [0x0826d8e2-0x826d919] ===
 826d8e2:	55                   	push   %ebp
 826d8e3:	89 e5                	mov    %esp,%ebp
 826d8e5:	53                   	push   %ebx
 826d8e6:	8b 45 0c             	mov    0xc(%ebp),%eax
 826d8e9:	83 f8 01             	cmp    $0x1,%eax
 826d8ec:	7f 06                	jg     826d8f4 <_ZN10QuickParty24CQuickPartyRewardManager22get_reward_type_objectENS_16ENUM_REWARD_TYPEEj+0x12>
 826d8ee:	83 7d 10 0c          	cmpl   $0xc,0x10(%ebp)
 826d8f2:	76 07                	jbe    826d8fb <_ZN10QuickParty24CQuickPartyRewardManager22get_reward_type_objectENS_16ENUM_REWARD_TYPEEj+0x19>
 826d8f4:	b8 00 00 00 00       	mov    $0x0,%eax
 826d8f9:	eb 1c                	jmp    826d917 <_ZN10QuickParty24CQuickPartyRewardManager22get_reward_type_objectENS_16ENUM_REWARD_TYPEEj+0x35>
 826d8fb:	8b 55 0c             	mov    0xc(%ebp),%edx
 826d8fe:	8b 5d 10             	mov    0x10(%ebp),%ebx
 826d901:	8b 4d 08             	mov    0x8(%ebp),%ecx
 826d904:	89 d0                	mov    %edx,%eax
 826d906:	01 c0                	add    %eax,%eax
 826d908:	01 d0                	add    %edx,%eax
 826d90a:	c1 e0 02             	shl    $0x2,%eax
 826d90d:	01 d0                	add    %edx,%eax
 826d90f:	01 d8                	add    %ebx,%eax
 826d911:	83 c0 70             	add    $0x70,%eax
 826d914:	8b 04 81             	mov    (%ecx,%eax,4),%eax
 826d917:	5b                   	pop    %ebx
 826d918:	5d                   	pop    %ebp
 826d919:	c3                   	ret

```

```c
// QuickParty::CQuickPartyRewardManager::get_reward_type_object @ 0x826d8e2

/* QuickParty::CQuickPartyRewardManager::get_reward_type_object(QuickParty::ENUM_REWARD_TYPE,
   unsigned int) */

undefined4 __thiscall
QuickParty::CQuickPartyRewardManager::get_reward_type_object
          (CQuickPartyRewardManager *this,int param_2,uint param_3)

{
  undefined4 uVar1;
  
  if ((param_2 < 2) && (param_3 < 0xd)) {
    uVar1 = *(undefined4 *)(this + (param_2 * 0xd + param_3 + 0x70) * 4);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## init

```asm
// === 0826d6b0 QuickParty::CQuickPartyRewardManager::init  [0x0826d6b0-0x826d85f] ===
 826d6b0:	55                   	push   %ebp
 826d6b1:	89 e5                	mov    %esp,%ebp
 826d6b3:	53                   	push   %ebx
 826d6b4:	83 ec 24             	sub    $0x24,%esp
 826d6b7:	8b 45 08             	mov    0x8(%ebp),%eax
 826d6ba:	89 44 24 04          	mov    %eax,0x4(%esp)
 826d6be:	c7 04 24 c0 67 bf 08 	movl   $0x8bf67c0,(%esp)
 826d6c5:	e8 b8 0b 80 00       	call   8a6e282 <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE>
 826d6ca:	83 f0 01             	xor    $0x1,%eax
 826d6cd:	84 c0                	test   %al,%al
 826d6cf:	74 40                	je     826d711 <_ZN10QuickParty24CQuickPartyRewardManager4initEv+0x61>
 826d6d1:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 826d6d8:	00 
 826d6d9:	c7 44 24 08 92 00 00 	movl   $0x92,0x8(%esp)
 826d6e0:	00 
 826d6e1:	c7 44 24 04 20 74 bf 	movl   $0x8bf7420,0x4(%esp)
 826d6e8:	08 
 826d6e9:	8d 45 e8             	lea    -0x18(%ebp),%eax
 826d6ec:	89 04 24             	mov    %eax,(%esp)
 826d6ef:	e8 24 20 2e 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 826d6f4:	c7 44 24 04 d4 67 bf 	movl   $0x8bf67d4,0x4(%esp)
 826d6fb:	08 
 826d6fc:	8d 45 e8             	lea    -0x18(%ebp),%eax
 826d6ff:	89 04 24             	mov    %eax,(%esp)
 826d702:	e8 81 20 2e 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 826d707:	b8 00 00 00 00       	mov    $0x0,%eax
 826d70c:	e9 48 01 00 00       	jmp    826d859 <_ZN10QuickParty24CQuickPartyRewardManager4initEv+0x1a9>
 826d711:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 826d718:	e8 33 6d 4b 00       	call   8724450 <_Znwj>
 826d71d:	89 c3                	mov    %eax,%ebx
 826d71f:	8b 55 08             	mov    0x8(%ebp),%edx
 826d722:	89 d8                	mov    %ebx,%eax
 826d724:	89 54 24 08          	mov    %edx,0x8(%esp)
 826d728:	c7 44 24 04 0b 00 00 	movl   $0xb,0x4(%esp)
 826d72f:	00 
 826d730:	89 04 24             	mov    %eax,(%esp)
 826d733:	e8 f8 04 00 00       	call   826dc30 <_ZN10QuickParty14RewardCardGoldC1ENS_15BasicRewardTypeERNS_14QuickPartyDataE>
 826d738:	89 d8                	mov    %ebx,%eax
 826d73a:	89 c2                	mov    %eax,%edx
 826d73c:	8b 45 08             	mov    0x8(%ebp),%eax
 826d73f:	89 90 ec 01 00 00    	mov    %edx,0x1ec(%eax)
 826d745:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 826d74c:	e8 ff 6c 4b 00       	call   8724450 <_Znwj>
 826d751:	89 c3                	mov    %eax,%ebx
 826d753:	8b 55 08             	mov    0x8(%ebp),%edx
 826d756:	89 d8                	mov    %ebx,%eax
 826d758:	89 54 24 08          	mov    %edx,0x8(%esp)
 826d75c:	c7 44 24 04 0c 00 00 	movl   $0xc,0x4(%esp)
 826d763:	00 
 826d764:	89 04 24             	mov    %eax,(%esp)
 826d767:	e8 e8 04 00 00       	call   826dc54 <_ZN10QuickParty19HellPartyDifficultyC1ENS_15BasicRewardTypeERNS_14QuickPartyDataE>
 826d76c:	89 d8                	mov    %ebx,%eax
 826d76e:	89 c2                	mov    %eax,%edx
 826d770:	8b 45 08             	mov    0x8(%ebp),%eax
 826d773:	89 90 f0 01 00 00    	mov    %edx,0x1f0(%eax)
 826d779:	c7 04 24 0c 00 00 00 	movl   $0xc,(%esp)
 826d780:	e8 cb 6c 4b 00       	call   8724450 <_Znwj>
 826d785:	89 c3                	mov    %eax,%ebx
 826d787:	8b 55 08             	mov    0x8(%ebp),%edx
 826d78a:	89 d8                	mov    %ebx,%eax
 826d78c:	89 54 24 08          	mov    %edx,0x8(%esp)
 826d790:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 826d797:	00 
 826d798:	89 04 24             	mov    %eax,(%esp)
 826d79b:	e8 02 05 00 00       	call   826dca2 <_ZN10QuickParty14KillMonsterExpC1ENS_14RandomBuffTypeERNS_14QuickPartyDataE>
 826d7a0:	89 d8                	mov    %ebx,%eax
 826d7a2:	89 c2                	mov    %eax,%edx
 826d7a4:	8b 45 08             	mov    0x8(%ebp),%eax
 826d7a7:	89 90 f4 01 00 00    	mov    %edx,0x1f4(%eax)
 826d7ad:	c7 04 24 0c 00 00 00 	movl   $0xc,(%esp)
 826d7b4:	e8 97 6c 4b 00       	call   8724450 <_Znwj>
 826d7b9:	89 c3                	mov    %eax,%ebx
 826d7bb:	8b 55 08             	mov    0x8(%ebp),%edx
 826d7be:	89 d8                	mov    %ebx,%eax
 826d7c0:	89 54 24 08          	mov    %edx,0x8(%esp)
 826d7c4:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 826d7cb:	00 
 826d7cc:	89 04 24             	mov    %eax,(%esp)
 826d7cf:	e8 fa 04 00 00       	call   826dcce <_ZN10QuickParty17EquipItemDropRateC1ENS_14RandomBuffTypeERNS_14QuickPartyDataE>
 826d7d4:	89 d8                	mov    %ebx,%eax
 826d7d6:	89 c2                	mov    %eax,%edx
 826d7d8:	8b 45 08             	mov    0x8(%ebp),%eax
 826d7db:	89 90 00 02 00 00    	mov    %edx,0x200(%eax)
 826d7e1:	c7 04 24 0c 00 00 00 	movl   $0xc,(%esp)
 826d7e8:	e8 63 6c 4b 00       	call   8724450 <_Znwj>
 826d7ed:	89 c3                	mov    %eax,%ebx
 826d7ef:	8b 55 08             	mov    0x8(%ebp),%edx
 826d7f2:	89 d8                	mov    %ebx,%eax
 826d7f4:	89 54 24 08          	mov    %edx,0x8(%esp)
 826d7f8:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 826d7ff:	00 
 826d800:	89 04 24             	mov    %eax,(%esp)
 826d803:	e8 f2 04 00 00       	call   826dcfa <_ZN10QuickParty15CointLimitCountC1ENS_14RandomBuffTypeERNS_14QuickPartyDataE>
 826d808:	89 d8                	mov    %ebx,%eax
 826d80a:	89 c2                	mov    %eax,%edx
 826d80c:	8b 45 08             	mov    0x8(%ebp),%eax
 826d80f:	89 90 18 02 00 00    	mov    %edx,0x218(%eax)
 826d815:	c7 04 24 0c 00 00 00 	movl   $0xc,(%esp)
 826d81c:	e8 2f 6c 4b 00       	call   8724450 <_Znwj>
 826d821:	89 c3                	mov    %eax,%ebx
 826d823:	8b 55 08             	mov    0x8(%ebp),%edx
 826d826:	89 d8                	mov    %ebx,%eax
 826d828:	89 54 24 08          	mov    %edx,0x8(%esp)
 826d82c:	c7 44 24 04 0a 00 00 	movl   $0xa,0x4(%esp)
 826d833:	00 
 826d834:	89 04 24             	mov    %eax,(%esp)
 826d837:	e8 ea 04 00 00       	call   826dd26 <_ZN10QuickParty26ReturnAncientDungeonTicketC1ENS_14RandomBuffTypeERNS_14QuickPartyDataE>
 826d83c:	89 d8                	mov    %ebx,%eax
 826d83e:	89 c2                	mov    %eax,%edx
 826d840:	8b 45 08             	mov    0x8(%ebp),%eax
 826d843:	89 90 1c 02 00 00    	mov    %edx,0x21c(%eax)
 826d849:	8b 45 08             	mov    0x8(%ebp),%eax
 826d84c:	89 04 24             	mov    %eax,(%esp)
 826d84f:	e8 c6 00 00 00       	call   826d91a <_ZN10QuickParty24CQuickPartyRewardManager24set_rand_buff_total_probEv>
 826d854:	b8 01 00 00 00       	mov    $0x1,%eax
 826d859:	83 c4 24             	add    $0x24,%esp
 826d85c:	5b                   	pop    %ebx
 826d85d:	5d                   	pop    %ebp
 826d85e:	c3                   	ret
 826d85f:	90                   	nop

```

```c
// QuickParty::CQuickPartyRewardManager::init @ 0x826d6b0

/* QuickParty::CQuickPartyRewardManager::init() */

bool __thiscall QuickParty::CQuickPartyRewardManager::init(CQuickPartyRewardManager *this)

{
  char cVar1;
  RewardCardGold *pRVar2;
  HellPartyDifficulty *pHVar3;
  KillMonsterExp *pKVar4;
  EquipItemDropRate *pEVar5;
  CointLimitCount *pCVar6;
  ReturnAncientDungeonTicket *pRVar7;
  cMyTrace local_1c [20];
  
  cVar1 = importQuickPartyScript("Etc/QuickParty.etc",(QuickPartyData *)this);
  if (cVar1 == '\x01') {
    pRVar2 = operator_new(8);
    RewardCardGold::RewardCardGold(pRVar2,0xb,this);
    *(RewardCardGold **)(this + 0x1ec) = pRVar2;
    pHVar3 = operator_new(8);
    HellPartyDifficulty::HellPartyDifficulty(pHVar3,0xc,this);
    *(HellPartyDifficulty **)(this + 0x1f0) = pHVar3;
    pKVar4 = operator_new(0xc);
    KillMonsterExp::KillMonsterExp(pKVar4,0,this);
    *(KillMonsterExp **)(this + 500) = pKVar4;
    pEVar5 = operator_new(0xc);
    EquipItemDropRate::EquipItemDropRate(pEVar5,3,this);
    *(EquipItemDropRate **)(this + 0x200) = pEVar5;
    pCVar6 = operator_new(0xc);
    CointLimitCount::CointLimitCount(pCVar6,9,this);
    *(CointLimitCount **)(this + 0x218) = pCVar6;
    pRVar7 = operator_new(0xc);
    ReturnAncientDungeonTicket::ReturnAncientDungeonTicket(pRVar7,10,this);
    *(ReturnAncientDungeonTicket **)(this + 0x21c) = pRVar7;
    set_rand_buff_total_prob(this);
  }
  else {
    cMyTrace::cMyTrace(local_1c,"bool QuickParty::CQuickPartyRewardManager::init()",0x92,0);
    cMyTrace::operator()(local_1c,"QUICK_PARTY_LOG : QuickParty.etc FILE LOAD FAIL!!");
  }
  return cVar1 == '\x01';
}

```

---

## set_rand_buff_total_prob

```asm
// === 0826d91a QuickParty::CQuickPartyRewardManager::set_rand_buff_total_prob  [0x0826d91a-0x826d993] ===
 826d91a:	55                   	push   %ebp
 826d91b:	89 e5                	mov    %esp,%ebp
 826d91d:	53                   	push   %ebx
 826d91e:	83 ec 10             	sub    $0x10,%esp
 826d921:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 826d928:	eb 59                	jmp    826d983 <_ZN10QuickParty24CQuickPartyRewardManager24set_rand_buff_total_probEv+0x69>
 826d92a:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 826d931:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%ebp)
 826d938:	eb 1f                	jmp    826d959 <_ZN10QuickParty24CQuickPartyRewardManager24set_rand_buff_total_probEv+0x3f>
 826d93a:	8b 55 f8             	mov    -0x8(%ebp),%edx
 826d93d:	8b 5d f0             	mov    -0x10(%ebp),%ebx
 826d940:	8b 4d 08             	mov    0x8(%ebp),%ecx
 826d943:	89 d0                	mov    %edx,%eax
 826d945:	c1 e0 03             	shl    $0x3,%eax
 826d948:	29 d0                	sub    %edx,%eax
 826d94a:	01 d8                	add    %ebx,%eax
 826d94c:	83 c0 14             	add    $0x14,%eax
 826d94f:	8b 04 81             	mov    (%ecx,%eax,4),%eax
 826d952:	01 45 f4             	add    %eax,-0xc(%ebp)
 826d955:	83 45 f8 01          	addl   $0x1,-0x8(%ebp)
 826d959:	83 7d f8 0a          	cmpl   $0xa,-0x8(%ebp)
 826d95d:	0f 9e c0             	setle  %al
 826d960:	84 c0                	test   %al,%al
 826d962:	75 d6                	jne    826d93a <_ZN10QuickParty24CQuickPartyRewardManager24set_rand_buff_total_probEv+0x20>
 826d964:	8b 55 f8             	mov    -0x8(%ebp),%edx
 826d967:	8b 5d f0             	mov    -0x10(%ebp),%ebx
 826d96a:	8b 4d 08             	mov    0x8(%ebp),%ecx
 826d96d:	89 d0                	mov    %edx,%eax
 826d96f:	c1 e0 03             	shl    $0x3,%eax
 826d972:	29 d0                	sub    %edx,%eax
 826d974:	01 d8                	add    %ebx,%eax
 826d976:	8d 50 14             	lea    0x14(%eax),%edx
 826d979:	8b 45 f4             	mov    -0xc(%ebp),%eax
 826d97c:	89 04 91             	mov    %eax,(%ecx,%edx,4)
 826d97f:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 826d983:	83 7d f0 06          	cmpl   $0x6,-0x10(%ebp)
 826d987:	0f 9e c0             	setle  %al
 826d98a:	84 c0                	test   %al,%al
 826d98c:	75 9c                	jne    826d92a <_ZN10QuickParty24CQuickPartyRewardManager24set_rand_buff_total_probEv+0x10>
 826d98e:	83 c4 10             	add    $0x10,%esp
 826d991:	5b                   	pop    %ebx
 826d992:	5d                   	pop    %ebp
 826d993:	c3                   	ret

```

```c
// QuickParty::CQuickPartyRewardManager::set_rand_buff_total_prob @ 0x826d91a

/* QuickParty::CQuickPartyRewardManager::set_rand_buff_total_prob() */

void __thiscall
QuickParty::CQuickPartyRewardManager::set_rand_buff_total_prob(CQuickPartyRewardManager *this)

{
  int local_14;
  int local_10;
  int local_c;
  
  for (local_14 = 0; local_14 < 7; local_14 = local_14 + 1) {
    local_10 = 0;
    for (local_c = 0; local_c < 0xb; local_c = local_c + 1) {
      local_10 = local_10 + *(int *)(this + (local_c * 7 + local_14 + 0x14) * 4);
    }
    *(int *)(this + (local_c * 7 + local_14 + 0x14) * 4) = local_10;
  }
  return;
}

```

---

## ~CQuickPartyRewardManager

```asm
// === 0826d69c QuickParty::CQuickPartyRewardManager::~CQuickPartyRewardManager  [0x0826d69c-0x826d6af] ===
 826d69c:	55                   	push   %ebp
 826d69d:	89 e5                	mov    %esp,%ebp
 826d69f:	83 ec 18             	sub    $0x18,%esp
 826d6a2:	8b 45 08             	mov    0x8(%ebp),%eax
 826d6a5:	89 04 24             	mov    %eax,(%esp)
 826d6a8:	e8 a5 06 00 00       	call   826dd52 <_ZN10QuickParty14QuickPartyDataD1Ev>
 826d6ad:	c9                   	leave
 826d6ae:	c3                   	ret
 826d6af:	90                   	nop

```

```c
// QuickParty::CQuickPartyRewardManager::~CQuickPartyRewardManager @ 0x826d69c

/* QuickParty::CQuickPartyRewardManager::~CQuickPartyRewardManager() */

void __thiscall
QuickParty::CQuickPartyRewardManager::~CQuickPartyRewardManager(CQuickPartyRewardManager *this)

{
  QuickPartyData::~QuickPartyData((QuickPartyData *)this);
  return;
}

```

