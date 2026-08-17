# Quest

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 16

---

## CheckKillMonster

```asm
// === 083535d6 Quest::CheckKillMonster  [0x083535d6-0x83536f1] ===
 83535d6:	55                   	push   %ebp
 83535d7:	89 e5                	mov    %esp,%ebp
 83535d9:	83 ec 48             	sub    $0x48,%esp
 83535dc:	8b 45 08             	mov    0x8(%ebp),%eax
 83535df:	83 c0 54             	add    $0x54,%eax
 83535e2:	89 04 24             	mov    %eax,(%esp)
 83535e5:	e8 d2 d8 03 00       	call   8390ebc <_ZNKSt6vectorI15MonsterKillItemSaIS0_EE5emptyEv>
 83535ea:	84 c0                	test   %al,%al
 83535ec:	74 0a                	je     83535f8 <_ZNK5Quest16CheckKillMonsterEiii21ENUM_QUEST_ENEMY_TYPERSt6vectorI15MonsterKillItemSaIS2_EE+0x22>
 83535ee:	b8 00 00 00 00       	mov    $0x0,%eax
 83535f3:	e9 f8 00 00 00       	jmp    83536f0 <_ZNK5Quest16CheckKillMonsterEiii21ENUM_QUEST_ENEMY_TYPERSt6vectorI15MonsterKillItemSaIS2_EE+0x11a>
 83535f8:	8b 45 08             	mov    0x8(%ebp),%eax
 83535fb:	83 c0 54             	add    $0x54,%eax
 83535fe:	89 04 24             	mov    %eax,(%esp)
 8353601:	e8 fa d8 03 00       	call   8390f00 <_ZNKSt6vectorI15MonsterKillItemSaIS0_EE4sizeEv>
 8353606:	89 44 24 04          	mov    %eax,0x4(%esp)
 835360a:	8b 45 1c             	mov    0x1c(%ebp),%eax
 835360d:	89 04 24             	mov    %eax,(%esp)
 8353610:	e8 07 d9 03 00       	call   8390f1c <_ZNSt6vectorI15MonsterKillItemSaIS0_EE7reserveEj>
 8353615:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 835361c:	e9 93 00 00 00       	jmp    83536b4 <_ZNK5Quest16CheckKillMonsterEiii21ENUM_QUEST_ENEMY_TYPERSt6vectorI15MonsterKillItemSaIS2_EE+0xde>
 8353621:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8353624:	8b 55 08             	mov    0x8(%ebp),%edx
 8353627:	83 c2 54             	add    $0x54,%edx
 835362a:	89 44 24 04          	mov    %eax,0x4(%esp)
 835362e:	89 14 24             	mov    %edx,(%esp)
 8353631:	e8 0a da 03 00       	call   8391040 <_ZNKSt6vectorI15MonsterKillItemSaIS0_EEixEj>
 8353636:	8b 10                	mov    (%eax),%edx
 8353638:	89 55 d4             	mov    %edx,-0x2c(%ebp)
 835363b:	8b 50 04             	mov    0x4(%eax),%edx
 835363e:	89 55 d8             	mov    %edx,-0x28(%ebp)
 8353641:	8b 50 08             	mov    0x8(%eax),%edx
 8353644:	89 55 dc             	mov    %edx,-0x24(%ebp)
 8353647:	8b 50 0c             	mov    0xc(%eax),%edx
 835364a:	89 55 e0             	mov    %edx,-0x20(%ebp)
 835364d:	8b 50 10             	mov    0x10(%eax),%edx
 8353650:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 8353653:	8b 50 14             	mov    0x14(%eax),%edx
 8353656:	89 55 e8             	mov    %edx,-0x18(%ebp)
 8353659:	8b 50 18             	mov    0x18(%eax),%edx
 835365c:	89 55 ec             	mov    %edx,-0x14(%ebp)
 835365f:	8b 40 1c             	mov    0x1c(%eax),%eax
 8353662:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8353665:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8353668:	83 f8 ff             	cmp    $0xffffffff,%eax
 835366b:	74 08                	je     8353675 <_ZNK5Quest16CheckKillMonsterEiii21ENUM_QUEST_ENEMY_TYPERSt6vectorI15MonsterKillItemSaIS2_EE+0x9f>
 835366d:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8353670:	3b 45 10             	cmp    0x10(%ebp),%eax
 8353673:	75 34                	jne    83536a9 <_ZNK5Quest16CheckKillMonsterEiii21ENUM_QUEST_ENEMY_TYPERSt6vectorI15MonsterKillItemSaIS2_EE+0xd3>
 8353675:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8353678:	83 f8 ff             	cmp    $0xffffffff,%eax
 835367b:	74 08                	je     8353685 <_ZNK5Quest16CheckKillMonsterEiii21ENUM_QUEST_ENEMY_TYPERSt6vectorI15MonsterKillItemSaIS2_EE+0xaf>
 835367d:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8353680:	3b 45 0c             	cmp    0xc(%ebp),%eax
 8353683:	75 27                	jne    83536ac <_ZNK5Quest16CheckKillMonsterEiii21ENUM_QUEST_ENEMY_TYPERSt6vectorI15MonsterKillItemSaIS2_EE+0xd6>
 8353685:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8353688:	3b 45 18             	cmp    0x18(%ebp),%eax
 835368b:	75 22                	jne    83536af <_ZNK5Quest16CheckKillMonsterEiii21ENUM_QUEST_ENEMY_TYPERSt6vectorI15MonsterKillItemSaIS2_EE+0xd9>
 835368d:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8353690:	3b 45 14             	cmp    0x14(%ebp),%eax
 8353693:	75 1b                	jne    83536b0 <_ZNK5Quest16CheckKillMonsterEiii21ENUM_QUEST_ENEMY_TYPERSt6vectorI15MonsterKillItemSaIS2_EE+0xda>
 8353695:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8353698:	89 44 24 04          	mov    %eax,0x4(%esp)
 835369c:	8b 45 1c             	mov    0x1c(%ebp),%eax
 835369f:	89 04 24             	mov    %eax,(%esp)
 83536a2:	e8 ab d9 03 00       	call   8391052 <_ZNSt6vectorI15MonsterKillItemSaIS0_EE9push_backERKS0_>
 83536a7:	eb 07                	jmp    83536b0 <_ZNK5Quest16CheckKillMonsterEiii21ENUM_QUEST_ENEMY_TYPERSt6vectorI15MonsterKillItemSaIS2_EE+0xda>
 83536a9:	90                   	nop
 83536aa:	eb 04                	jmp    83536b0 <_ZNK5Quest16CheckKillMonsterEiii21ENUM_QUEST_ENEMY_TYPERSt6vectorI15MonsterKillItemSaIS2_EE+0xda>
 83536ac:	90                   	nop
 83536ad:	eb 01                	jmp    83536b0 <_ZNK5Quest16CheckKillMonsterEiii21ENUM_QUEST_ENEMY_TYPERSt6vectorI15MonsterKillItemSaIS2_EE+0xda>
 83536af:	90                   	nop
 83536b0:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 83536b4:	8b 45 08             	mov    0x8(%ebp),%eax
 83536b7:	83 c0 54             	add    $0x54,%eax
 83536ba:	89 04 24             	mov    %eax,(%esp)
 83536bd:	e8 3e d8 03 00       	call   8390f00 <_ZNKSt6vectorI15MonsterKillItemSaIS0_EE4sizeEv>
 83536c2:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 83536c5:	0f 9f c0             	setg   %al
 83536c8:	84 c0                	test   %al,%al
 83536ca:	0f 85 51 ff ff ff    	jne    8353621 <_ZNK5Quest16CheckKillMonsterEiii21ENUM_QUEST_ENEMY_TYPERSt6vectorI15MonsterKillItemSaIS2_EE+0x4b>
 83536d0:	8b 45 1c             	mov    0x1c(%ebp),%eax
 83536d3:	89 04 24             	mov    %eax,(%esp)
 83536d6:	e8 25 d8 03 00       	call   8390f00 <_ZNKSt6vectorI15MonsterKillItemSaIS0_EE4sizeEv>
 83536db:	85 c0                	test   %eax,%eax
 83536dd:	0f 94 c0             	sete   %al
 83536e0:	84 c0                	test   %al,%al
 83536e2:	74 07                	je     83536eb <_ZNK5Quest16CheckKillMonsterEiii21ENUM_QUEST_ENEMY_TYPERSt6vectorI15MonsterKillItemSaIS2_EE+0x115>
 83536e4:	b8 00 00 00 00       	mov    $0x0,%eax
 83536e9:	eb 05                	jmp    83536f0 <_ZNK5Quest16CheckKillMonsterEiii21ENUM_QUEST_ENEMY_TYPERSt6vectorI15MonsterKillItemSaIS2_EE+0x11a>
 83536eb:	b8 01 00 00 00       	mov    $0x1,%eax
 83536f0:	c9                   	leave
 83536f1:	c3                   	ret

```

```c
// Quest::CheckKillMonster @ 0x83535d6

/* Quest::CheckKillMonster(int, int, int, ENUM_QUEST_ENEMY_TYPE, std::vector<MonsterKillItem,
   std::allocator<MonsterKillItem> >&) const */

undefined4 __thiscall
Quest::CheckKillMonster
          (Quest *this,int param_1,int param_2,int param_3,int param_5,
          vector<MonsterKillItem,std::allocator<MonsterKillItem>> *param_6)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  uint local_10;
  
  cVar1 = std::vector<MonsterKillItem,std::allocator<MonsterKillItem>>::empty();
  if (cVar1 == '\0') {
    uVar3 = std::vector<MonsterKillItem,std::allocator<MonsterKillItem>>::size
                      ((vector<MonsterKillItem,std::allocator<MonsterKillItem>> *)(this + 0x54));
    std::vector<MonsterKillItem,std::allocator<MonsterKillItem>>::reserve(param_6,uVar3);
    local_10 = 0;
    while (iVar5 = std::vector<MonsterKillItem,std::allocator<MonsterKillItem>>::size
                             ((vector<MonsterKillItem,std::allocator<MonsterKillItem>> *)
                              (this + 0x54)), (int)local_10 < iVar5) {
      piVar4 = (int *)std::vector<MonsterKillItem,std::allocator<MonsterKillItem>>::operator[]
                                ((vector<MonsterKillItem,std::allocator<MonsterKillItem>> *)
                                 (this + 0x54),local_10);
      local_30 = *piVar4;
      local_2c = piVar4[1];
      local_28 = piVar4[2];
      local_24 = piVar4[3];
      local_20 = piVar4[4];
      local_1c = piVar4[5];
      local_18 = piVar4[6];
      local_14 = piVar4[7];
      if ((((local_24 == -1) || (local_24 == param_2)) &&
          ((local_28 == -1 || (local_28 == param_1)))) &&
         ((local_30 == param_5 && (local_2c == param_3)))) {
        std::vector<MonsterKillItem,std::allocator<MonsterKillItem>>::push_back
                  (param_6,(MonsterKillItem *)&local_30);
      }
      local_10 = local_10 + 1;
    }
    iVar5 = std::vector<MonsterKillItem,std::allocator<MonsterKillItem>>::size(param_6);
    if (iVar5 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## ConvertRewardSelectIndex

```asm
// === 083537c2 Quest::ConvertRewardSelectIndex  [0x083537c2-0x83538ef] ===
 83537c2:	55                   	push   %ebp
 83537c3:	89 e5                	mov    %esp,%ebp
 83537c5:	53                   	push   %ebx
 83537c6:	83 ec 24             	sub    $0x24,%esp
 83537c9:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 83537cd:	75 0a                	jne    83537d9 <_ZN5Quest24ConvertRewardSelectIndexEPK5CUseri+0x17>
 83537cf:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 83537d4:	e9 10 01 00 00       	jmp    83538e9 <_ZN5Quest24ConvertRewardSelectIndexEPK5CUseri+0x127>
 83537d9:	83 7d 10 ff          	cmpl   $0xffffffff,0x10(%ebp)
 83537dd:	74 09                	je     83537e8 <_ZN5Quest24ConvertRewardSelectIndexEPK5CUseri+0x26>
 83537df:	81 7d 10 ff ff 00 00 	cmpl   $0xffff,0x10(%ebp)
 83537e6:	75 0a                	jne    83537f2 <_ZN5Quest24ConvertRewardSelectIndexEPK5CUseri+0x30>
 83537e8:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 83537ed:	e9 f7 00 00 00       	jmp    83538e9 <_ZN5Quest24ConvertRewardSelectIndexEPK5CUseri+0x127>
 83537f2:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 83537f9:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8353800:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8353807:	e9 b9 00 00 00       	jmp    83538c5 <_ZN5Quest24ConvertRewardSelectIndexEPK5CUseri+0x103>
 835380c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 835380f:	8b 55 08             	mov    0x8(%ebp),%edx
 8353812:	81 c2 d0 00 00 00    	add    $0xd0,%edx
 8353818:	89 44 24 04          	mov    %eax,0x4(%esp)
 835381c:	89 14 24             	mov    %edx,(%esp)
 835381f:	e8 a2 d8 03 00       	call   83910c6 <_ZNSt6vectorI14RewardItemInfoSaIS0_EEixEj>
 8353824:	8b 40 08             	mov    0x8(%eax),%eax
 8353827:	83 f8 0b             	cmp    $0xb,%eax
 835382a:	74 79                	je     83538a5 <_ZN5Quest24ConvertRewardSelectIndexEPK5CUseri+0xe3>
 835382c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 835382f:	8b 55 08             	mov    0x8(%ebp),%edx
 8353832:	81 c2 d0 00 00 00    	add    $0xd0,%edx
 8353838:	89 44 24 04          	mov    %eax,0x4(%esp)
 835383c:	89 14 24             	mov    %edx,(%esp)
 835383f:	e8 82 d8 03 00       	call   83910c6 <_ZNSt6vectorI14RewardItemInfoSaIS0_EEixEj>
 8353844:	8b 40 08             	mov    0x8(%eax),%eax
 8353847:	89 c3                	mov    %eax,%ebx
 8353849:	8b 45 0c             	mov    0xc(%ebp),%eax
 835384c:	89 04 24             	mov    %eax,(%esp)
 835384f:	e8 cc a6 da ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 8353854:	39 c3                	cmp    %eax,%ebx
 8353856:	75 54                	jne    83538ac <_ZN5Quest24ConvertRewardSelectIndexEPK5CUseri+0xea>
 8353858:	8b 45 f0             	mov    -0x10(%ebp),%eax
 835385b:	8b 55 08             	mov    0x8(%ebp),%edx
 835385e:	81 c2 d0 00 00 00    	add    $0xd0,%edx
 8353864:	89 44 24 04          	mov    %eax,0x4(%esp)
 8353868:	89 14 24             	mov    %edx,(%esp)
 835386b:	e8 56 d8 03 00       	call   83910c6 <_ZNSt6vectorI14RewardItemInfoSaIS0_EEixEj>
 8353870:	8b 40 0c             	mov    0xc(%eax),%eax
 8353873:	83 f8 ff             	cmp    $0xffffffff,%eax
 8353876:	74 2d                	je     83538a5 <_ZN5Quest24ConvertRewardSelectIndexEPK5CUseri+0xe3>
 8353878:	8b 45 f0             	mov    -0x10(%ebp),%eax
 835387b:	8b 55 08             	mov    0x8(%ebp),%edx
 835387e:	81 c2 d0 00 00 00    	add    $0xd0,%edx
 8353884:	89 44 24 04          	mov    %eax,0x4(%esp)
 8353888:	89 14 24             	mov    %edx,(%esp)
 835388b:	e8 36 d8 03 00       	call   83910c6 <_ZNSt6vectorI14RewardItemInfoSaIS0_EEixEj>
 8353890:	8b 58 0c             	mov    0xc(%eax),%ebx
 8353893:	8b 45 0c             	mov    0xc(%ebp),%eax
 8353896:	89 04 24             	mov    %eax,(%esp)
 8353899:	e8 f6 d3 db ff       	call   8110c94 <_ZNK15CUserCharacInfo23getCurCharFirstGrowTypeEv>
 835389e:	0f be c0             	movsbl %al,%eax
 83538a1:	39 c3                	cmp    %eax,%ebx
 83538a3:	75 07                	jne    83538ac <_ZN5Quest24ConvertRewardSelectIndexEPK5CUseri+0xea>
 83538a5:	b8 01 00 00 00       	mov    $0x1,%eax
 83538aa:	eb 05                	jmp    83538b1 <_ZN5Quest24ConvertRewardSelectIndexEPK5CUseri+0xef>
 83538ac:	b8 00 00 00 00       	mov    $0x0,%eax
 83538b1:	84 c0                	test   %al,%al
 83538b3:	74 0c                	je     83538c1 <_ZN5Quest24ConvertRewardSelectIndexEPK5CUseri+0xff>
 83538b5:	8b 45 10             	mov    0x10(%ebp),%eax
 83538b8:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 83538bb:	74 28                	je     83538e5 <_ZN5Quest24ConvertRewardSelectIndexEPK5CUseri+0x123>
 83538bd:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 83538c1:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 83538c5:	8b 45 08             	mov    0x8(%ebp),%eax
 83538c8:	05 d0 00 00 00       	add    $0xd0,%eax
 83538cd:	89 04 24             	mov    %eax,(%esp)
 83538d0:	e8 6b d5 03 00       	call   8390e40 <_ZNKSt6vectorI14RewardItemInfoSaIS0_EE4sizeEv>
 83538d5:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 83538d8:	0f 9f c0             	setg   %al
 83538db:	84 c0                	test   %al,%al
 83538dd:	0f 85 29 ff ff ff    	jne    835380c <_ZN5Quest24ConvertRewardSelectIndexEPK5CUseri+0x4a>
 83538e3:	eb 01                	jmp    83538e6 <_ZN5Quest24ConvertRewardSelectIndexEPK5CUseri+0x124>
 83538e5:	90                   	nop
 83538e6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 83538e9:	83 c4 24             	add    $0x24,%esp
 83538ec:	5b                   	pop    %ebx
 83538ed:	5d                   	pop    %ebp
 83538ee:	c3                   	ret
 83538ef:	90                   	nop

```

```c
// Quest::ConvertRewardSelectIndex @ 0x83537c2

/* Quest::ConvertRewardSelectIndex(CUser const*, int) */

uint __thiscall Quest::ConvertRewardSelectIndex(Quest *this,CUser *param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint local_14;
  int local_10;
  
  if (param_1 == (CUser *)0x0) {
    local_14 = 0xffffffff;
  }
  else if ((param_2 == -1) || (param_2 == 0xffff)) {
    local_14 = 0xffffffff;
  }
  else {
    local_10 = 0;
    for (local_14 = 0;
        iVar4 = std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>::size
                          ((vector<RewardItemInfo,std::allocator<RewardItemInfo>> *)(this + 0xd0)),
        (int)local_14 < iVar4; local_14 = local_14 + 1) {
      iVar4 = std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>::operator[]
                        ((vector<RewardItemInfo,std::allocator<RewardItemInfo>> *)(this + 0xd0),
                         local_14);
      if (*(int *)(iVar4 + 8) == 0xb) {
LAB_083538a5:
        bVar1 = true;
      }
      else {
        iVar4 = std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>::operator[]
                          ((vector<RewardItemInfo,std::allocator<RewardItemInfo>> *)(this + 0xd0),
                           local_14);
        iVar4 = *(int *)(iVar4 + 8);
        iVar3 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
        if (iVar4 == iVar3) {
          iVar4 = std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>::operator[]
                            ((vector<RewardItemInfo,std::allocator<RewardItemInfo>> *)(this + 0xd0),
                             local_14);
          if (*(int *)(iVar4 + 0xc) != -1) {
            iVar4 = std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>::operator[]
                              ((vector<RewardItemInfo,std::allocator<RewardItemInfo>> *)
                               (this + 0xd0),local_14);
            iVar4 = *(int *)(iVar4 + 0xc);
            cVar2 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)param_1);
            if (iVar4 != cVar2) goto LAB_083538ac;
          }
          goto LAB_083538a5;
        }
LAB_083538ac:
        bVar1 = false;
      }
      if (bVar1) {
        if (param_2 == local_10) {
          return local_14;
        }
        local_10 = local_10 + 1;
      }
    }
  }
  return local_14;
}

```

---

## IsOpenScheduleQuest

```asm
// === 08353776 Quest::IsOpenScheduleQuest  [0x08353776-0x83537c1] ===
 8353776:	55                   	push   %ebp
 8353777:	89 e5                	mov    %esp,%ebp
 8353779:	83 ec 28             	sub    $0x28,%esp
 835377c:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8353783:	8b 45 08             	mov    0x8(%ebp),%eax
 8353786:	8b 40 04             	mov    0x4(%eax),%eax
 8353789:	89 c2                	mov    %eax,%edx
 835378b:	a1 84 f7 41 09       	mov    0x941f784,%eax
 8353790:	89 54 24 08          	mov    %edx,0x8(%esp)
 8353794:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 835379b:	00 
 835379c:	89 04 24             	mov    %eax,(%esp)
 835379f:	e8 3e 2f dd ff       	call   81266e2 <_ZNK21CDailyScheduleManager16GetScheduleStateE18_DailyScheduleTypej>
 83537a4:	89 45 f4             	mov    %eax,-0xc(%ebp)
 83537a7:	83 7d f4 01          	cmpl   $0x1,-0xc(%ebp)
 83537ab:	74 06                	je     83537b3 <_ZNK5Quest19IsOpenScheduleQuestEv+0x3d>
 83537ad:	83 7d f4 02          	cmpl   $0x2,-0xc(%ebp)
 83537b1:	75 07                	jne    83537ba <_ZNK5Quest19IsOpenScheduleQuestEv+0x44>
 83537b3:	b8 01 00 00 00       	mov    $0x1,%eax
 83537b8:	eb 05                	jmp    83537bf <_ZNK5Quest19IsOpenScheduleQuestEv+0x49>
 83537ba:	b8 00 00 00 00       	mov    $0x0,%eax
 83537bf:	c9                   	leave
 83537c0:	c3                   	ret
 83537c1:	90                   	nop

```

```c
// Quest::IsOpenScheduleQuest @ 0x8353776

/* Quest::IsOpenScheduleQuest() const */

undefined4 __thiscall Quest::IsOpenScheduleQuest(Quest *this)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CDailyScheduleManager::GetScheduleState
                    (GlobalData::s_DailyScheduleManager,1,*(undefined4 *)(this + 4));
  if ((iVar1 == 1) || (iVar1 == 2)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## _isNeededCheckGrowType

```asm
// === 08352c10 Quest::_isNeededCheckGrowType  [0x08352c10-0x8352cc1] ===
 8352c10:	55                   	push   %ebp
 8352c11:	89 e5                	mov    %esp,%ebp
 8352c13:	83 ec 28             	sub    $0x28,%esp
 8352c16:	8b 45 08             	mov    0x8(%ebp),%eax
 8352c19:	8d 50 10             	lea    0x10(%eax),%edx
 8352c1c:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8352c1f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8352c23:	89 04 24             	mov    %eax,(%esp)
 8352c26:	e8 71 e1 03 00       	call   8390d9c <_ZNKSt6vectorI24stQuestTargetCharacter_tSaIS0_EE5beginEv>
 8352c2b:	83 ec 04             	sub    $0x4,%esp
 8352c2e:	8b 45 08             	mov    0x8(%ebp),%eax
 8352c31:	8d 50 10             	lea    0x10(%eax),%edx
 8352c34:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8352c37:	89 54 24 04          	mov    %edx,0x4(%esp)
 8352c3b:	89 04 24             	mov    %eax,(%esp)
 8352c3e:	e8 85 e1 03 00       	call   8390dc8 <_ZNKSt6vectorI24stQuestTargetCharacter_tSaIS0_EE3endEv>
 8352c43:	83 ec 04             	sub    $0x4,%esp
 8352c46:	eb 5d                	jmp    8352ca5 <_ZNK5Quest22_isNeededCheckGrowTypeE17ENUM_CHARACTERJOB+0x95>
 8352c48:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8352c4b:	89 04 24             	mov    %eax,(%esp)
 8352c4e:	e8 e3 e1 03 00       	call   8390e36 <_ZNK9__gnu_cxx17__normal_iteratorIPK24stQuestTargetCharacter_tSt6vectorIS1_SaIS1_EEEptEv>
 8352c53:	8b 00                	mov    (%eax),%eax
 8352c55:	89 c2                	mov    %eax,%edx
 8352c57:	8b 45 0c             	mov    0xc(%ebp),%eax
 8352c5a:	39 c2                	cmp    %eax,%edx
 8352c5c:	74 12                	je     8352c70 <_ZNK5Quest22_isNeededCheckGrowTypeE17ENUM_CHARACTERJOB+0x60>
 8352c5e:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8352c61:	89 04 24             	mov    %eax,(%esp)
 8352c64:	e8 cd e1 03 00       	call   8390e36 <_ZNK9__gnu_cxx17__normal_iteratorIPK24stQuestTargetCharacter_tSt6vectorIS1_SaIS1_EEEptEv>
 8352c69:	8b 00                	mov    (%eax),%eax
 8352c6b:	83 f8 0b             	cmp    $0xb,%eax
 8352c6e:	75 1a                	jne    8352c8a <_ZNK5Quest22_isNeededCheckGrowTypeE17ENUM_CHARACTERJOB+0x7a>
 8352c70:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8352c73:	89 04 24             	mov    %eax,(%esp)
 8352c76:	e8 bb e1 03 00       	call   8390e36 <_ZNK9__gnu_cxx17__normal_iteratorIPK24stQuestTargetCharacter_tSt6vectorIS1_SaIS1_EEEptEv>
 8352c7b:	8b 40 04             	mov    0x4(%eax),%eax
 8352c7e:	83 f8 ff             	cmp    $0xffffffff,%eax
 8352c81:	75 07                	jne    8352c8a <_ZNK5Quest22_isNeededCheckGrowTypeE17ENUM_CHARACTERJOB+0x7a>
 8352c83:	b8 01 00 00 00       	mov    $0x1,%eax
 8352c88:	eb 05                	jmp    8352c8f <_ZNK5Quest22_isNeededCheckGrowTypeE17ENUM_CHARACTERJOB+0x7f>
 8352c8a:	b8 00 00 00 00       	mov    $0x0,%eax
 8352c8f:	84 c0                	test   %al,%al
 8352c91:	74 07                	je     8352c9a <_ZNK5Quest22_isNeededCheckGrowTypeE17ENUM_CHARACTERJOB+0x8a>
 8352c93:	b8 00 00 00 00       	mov    $0x0,%eax
 8352c98:	eb 26                	jmp    8352cc0 <_ZNK5Quest22_isNeededCheckGrowTypeE17ENUM_CHARACTERJOB+0xb0>
 8352c9a:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8352c9d:	89 04 24             	mov    %eax,(%esp)
 8352ca0:	e8 7b e1 03 00       	call   8390e20 <_ZN9__gnu_cxx17__normal_iteratorIPK24stQuestTargetCharacter_tSt6vectorIS1_SaIS1_EEEppEv>
 8352ca5:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8352ca8:	89 44 24 04          	mov    %eax,0x4(%esp)
 8352cac:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8352caf:	89 04 24             	mov    %eax,(%esp)
 8352cb2:	e8 3d e1 03 00       	call   8390df4 <_ZN9__gnu_cxxneIPK24stQuestTargetCharacter_tSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 8352cb7:	84 c0                	test   %al,%al
 8352cb9:	75 8d                	jne    8352c48 <_ZNK5Quest22_isNeededCheckGrowTypeE17ENUM_CHARACTERJOB+0x38>
 8352cbb:	b8 01 00 00 00       	mov    $0x1,%eax
 8352cc0:	c9                   	leave
 8352cc1:	c3                   	ret

```

```c
// Quest::_isNeededCheckGrowType @ 0x8352c10

/* Quest::_isNeededCheckGrowType(ENUM_CHARACTERJOB) const */

undefined4 __thiscall Quest::_isNeededCheckGrowType(undefined4 this,int param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  __normal_iterator local_14 [4];
  __normal_iterator<stQuestTargetCharacter_t_const*,std::vector<stQuestTargetCharacter_t,std::allocator<stQuestTargetCharacter_t>>>
  local_10 [12];
  
  std::vector<stQuestTargetCharacter_t,std::allocator<stQuestTargetCharacter_t>>::begin();
  std::vector<stQuestTargetCharacter_t,std::allocator<stQuestTargetCharacter_t>>::end();
  while( true ) {
    bVar1 = __gnu_cxx::operator!=(local_10,local_14);
    if (!bVar1) {
      return 1;
    }
    piVar2 = (int *)__gnu_cxx::
                    __normal_iterator<stQuestTargetCharacter_t_const*,std::vector<stQuestTargetCharacter_t,std::allocator<stQuestTargetCharacter_t>>>
                    ::operator->(local_10);
    if (((*piVar2 == param_2) ||
        (piVar2 = (int *)__gnu_cxx::
                         __normal_iterator<stQuestTargetCharacter_t_const*,std::vector<stQuestTargetCharacter_t,std::allocator<stQuestTargetCharacter_t>>>
                         ::operator->(local_10), *piVar2 == 0xb)) &&
       (iVar3 = __gnu_cxx::
                __normal_iterator<stQuestTargetCharacter_t_const*,std::vector<stQuestTargetCharacter_t,std::allocator<stQuestTargetCharacter_t>>>
                ::operator->(local_10), *(int *)(iVar3 + 4) == -1)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) break;
    __gnu_cxx::
    __normal_iterator<stQuestTargetCharacter_t_const*,std::vector<stQuestTargetCharacter_t,std::allocator<stQuestTargetCharacter_t>>>
    ::operator++(local_10);
  }
  return 0;
}

```

---

## checkMatchedGrowType

```asm
// === 08352afc Quest::checkMatchedGrowType  [0x08352afc-0x8352bed] ===
 8352afc:	55                   	push   %ebp
 8352afd:	89 e5                	mov    %esp,%ebp
 8352aff:	83 ec 28             	sub    $0x28,%esp
 8352b02:	8b 45 08             	mov    0x8(%ebp),%eax
 8352b05:	8d 50 10             	lea    0x10(%eax),%edx
 8352b08:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8352b0b:	89 54 24 04          	mov    %edx,0x4(%esp)
 8352b0f:	89 04 24             	mov    %eax,(%esp)
 8352b12:	e8 85 e2 03 00       	call   8390d9c <_ZNKSt6vectorI24stQuestTargetCharacter_tSaIS0_EE5beginEv>
 8352b17:	83 ec 04             	sub    $0x4,%esp
 8352b1a:	8b 45 08             	mov    0x8(%ebp),%eax
 8352b1d:	8d 50 10             	lea    0x10(%eax),%edx
 8352b20:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8352b23:	89 54 24 04          	mov    %edx,0x4(%esp)
 8352b27:	89 04 24             	mov    %eax,(%esp)
 8352b2a:	e8 99 e2 03 00       	call   8390dc8 <_ZNKSt6vectorI24stQuestTargetCharacter_tSaIS0_EE3endEv>
 8352b2f:	83 ec 04             	sub    $0x4,%esp
 8352b32:	e9 96 00 00 00       	jmp    8352bcd <_ZNK5Quest20checkMatchedGrowTypeE17ENUM_CHARACTERJOBii+0xd1>
 8352b37:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8352b3a:	89 04 24             	mov    %eax,(%esp)
 8352b3d:	e8 f4 e2 03 00       	call   8390e36 <_ZNK9__gnu_cxx17__normal_iteratorIPK24stQuestTargetCharacter_tSt6vectorIS1_SaIS1_EEEptEv>
 8352b42:	8b 00                	mov    (%eax),%eax
 8352b44:	89 c2                	mov    %eax,%edx
 8352b46:	8b 45 0c             	mov    0xc(%ebp),%eax
 8352b49:	39 c2                	cmp    %eax,%edx
 8352b4b:	74 12                	je     8352b5f <_ZNK5Quest20checkMatchedGrowTypeE17ENUM_CHARACTERJOBii+0x63>
 8352b4d:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8352b50:	89 04 24             	mov    %eax,(%esp)
 8352b53:	e8 de e2 03 00       	call   8390e36 <_ZNK9__gnu_cxx17__normal_iteratorIPK24stQuestTargetCharacter_tSt6vectorIS1_SaIS1_EEEptEv>
 8352b58:	8b 00                	mov    (%eax),%eax
 8352b5a:	83 f8 0b             	cmp    $0xb,%eax
 8352b5d:	75 53                	jne    8352bb2 <_ZNK5Quest20checkMatchedGrowTypeE17ENUM_CHARACTERJOBii+0xb6>
 8352b5f:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8352b62:	89 04 24             	mov    %eax,(%esp)
 8352b65:	e8 cc e2 03 00       	call   8390e36 <_ZNK9__gnu_cxx17__normal_iteratorIPK24stQuestTargetCharacter_tSt6vectorIS1_SaIS1_EEEptEv>
 8352b6a:	8b 40 04             	mov    0x4(%eax),%eax
 8352b6d:	3b 45 10             	cmp    0x10(%ebp),%eax
 8352b70:	74 13                	je     8352b85 <_ZNK5Quest20checkMatchedGrowTypeE17ENUM_CHARACTERJOBii+0x89>
 8352b72:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8352b75:	89 04 24             	mov    %eax,(%esp)
 8352b78:	e8 b9 e2 03 00       	call   8390e36 <_ZNK9__gnu_cxx17__normal_iteratorIPK24stQuestTargetCharacter_tSt6vectorIS1_SaIS1_EEEptEv>
 8352b7d:	8b 40 04             	mov    0x4(%eax),%eax
 8352b80:	83 f8 ff             	cmp    $0xffffffff,%eax
 8352b83:	75 2d                	jne    8352bb2 <_ZNK5Quest20checkMatchedGrowTypeE17ENUM_CHARACTERJOBii+0xb6>
 8352b85:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8352b88:	89 04 24             	mov    %eax,(%esp)
 8352b8b:	e8 a6 e2 03 00       	call   8390e36 <_ZNK9__gnu_cxx17__normal_iteratorIPK24stQuestTargetCharacter_tSt6vectorIS1_SaIS1_EEEptEv>
 8352b90:	8b 40 08             	mov    0x8(%eax),%eax
 8352b93:	3b 45 14             	cmp    0x14(%ebp),%eax
 8352b96:	74 13                	je     8352bab <_ZNK5Quest20checkMatchedGrowTypeE17ENUM_CHARACTERJOBii+0xaf>
 8352b98:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8352b9b:	89 04 24             	mov    %eax,(%esp)
 8352b9e:	e8 93 e2 03 00       	call   8390e36 <_ZNK9__gnu_cxx17__normal_iteratorIPK24stQuestTargetCharacter_tSt6vectorIS1_SaIS1_EEEptEv>
 8352ba3:	8b 40 08             	mov    0x8(%eax),%eax
 8352ba6:	83 f8 ff             	cmp    $0xffffffff,%eax
 8352ba9:	75 07                	jne    8352bb2 <_ZNK5Quest20checkMatchedGrowTypeE17ENUM_CHARACTERJOBii+0xb6>
 8352bab:	b8 01 00 00 00       	mov    $0x1,%eax
 8352bb0:	eb 05                	jmp    8352bb7 <_ZNK5Quest20checkMatchedGrowTypeE17ENUM_CHARACTERJOBii+0xbb>
 8352bb2:	b8 00 00 00 00       	mov    $0x0,%eax
 8352bb7:	84 c0                	test   %al,%al
 8352bb9:	74 07                	je     8352bc2 <_ZNK5Quest20checkMatchedGrowTypeE17ENUM_CHARACTERJOBii+0xc6>
 8352bbb:	b8 01 00 00 00       	mov    $0x1,%eax
 8352bc0:	eb 2a                	jmp    8352bec <_ZNK5Quest20checkMatchedGrowTypeE17ENUM_CHARACTERJOBii+0xf0>
 8352bc2:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8352bc5:	89 04 24             	mov    %eax,(%esp)
 8352bc8:	e8 53 e2 03 00       	call   8390e20 <_ZN9__gnu_cxx17__normal_iteratorIPK24stQuestTargetCharacter_tSt6vectorIS1_SaIS1_EEEppEv>
 8352bcd:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8352bd0:	89 44 24 04          	mov    %eax,0x4(%esp)
 8352bd4:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8352bd7:	89 04 24             	mov    %eax,(%esp)
 8352bda:	e8 15 e2 03 00       	call   8390df4 <_ZN9__gnu_cxxneIPK24stQuestTargetCharacter_tSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 8352bdf:	84 c0                	test   %al,%al
 8352be1:	0f 85 50 ff ff ff    	jne    8352b37 <_ZNK5Quest20checkMatchedGrowTypeE17ENUM_CHARACTERJOBii+0x3b>
 8352be7:	b8 00 00 00 00       	mov    $0x0,%eax
 8352bec:	c9                   	leave
 8352bed:	c3                   	ret

```

```c
// Quest::checkMatchedGrowType @ 0x8352afc

/* Quest::checkMatchedGrowType(ENUM_CHARACTERJOB, int, int) const */

undefined4 __thiscall
Quest::checkMatchedGrowType(undefined4 this,int param_2,int param_3,int param_4)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  __normal_iterator local_14 [4];
  __normal_iterator<stQuestTargetCharacter_t_const*,std::vector<stQuestTargetCharacter_t,std::allocator<stQuestTargetCharacter_t>>>
  local_10 [12];
  
  std::vector<stQuestTargetCharacter_t,std::allocator<stQuestTargetCharacter_t>>::begin();
  std::vector<stQuestTargetCharacter_t,std::allocator<stQuestTargetCharacter_t>>::end();
  while( true ) {
    bVar1 = __gnu_cxx::operator!=(local_10,local_14);
    if (!bVar1) {
      return 0;
    }
    piVar2 = (int *)__gnu_cxx::
                    __normal_iterator<stQuestTargetCharacter_t_const*,std::vector<stQuestTargetCharacter_t,std::allocator<stQuestTargetCharacter_t>>>
                    ::operator->(local_10);
    if ((((*piVar2 == param_2) ||
         (piVar2 = (int *)__gnu_cxx::
                          __normal_iterator<stQuestTargetCharacter_t_const*,std::vector<stQuestTargetCharacter_t,std::allocator<stQuestTargetCharacter_t>>>
                          ::operator->(local_10), *piVar2 == 0xb)) &&
        ((iVar3 = __gnu_cxx::
                  __normal_iterator<stQuestTargetCharacter_t_const*,std::vector<stQuestTargetCharacter_t,std::allocator<stQuestTargetCharacter_t>>>
                  ::operator->(local_10), *(int *)(iVar3 + 4) == param_3 ||
         (iVar3 = __gnu_cxx::
                  __normal_iterator<stQuestTargetCharacter_t_const*,std::vector<stQuestTargetCharacter_t,std::allocator<stQuestTargetCharacter_t>>>
                  ::operator->(local_10), *(int *)(iVar3 + 4) == -1)))) &&
       ((iVar3 = __gnu_cxx::
                 __normal_iterator<stQuestTargetCharacter_t_const*,std::vector<stQuestTargetCharacter_t,std::allocator<stQuestTargetCharacter_t>>>
                 ::operator->(local_10), *(int *)(iVar3 + 8) == param_4 ||
        (iVar3 = __gnu_cxx::
                 __normal_iterator<stQuestTargetCharacter_t_const*,std::vector<stQuestTargetCharacter_t,std::allocator<stQuestTargetCharacter_t>>>
                 ::operator->(local_10), *(int *)(iVar3 + 8) == -1)))) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) break;
    __gnu_cxx::
    __normal_iterator<stQuestTargetCharacter_t_const*,std::vector<stQuestTargetCharacter_t,std::allocator<stQuestTargetCharacter_t>>>
    ::operator++(local_10);
  }
  return 1;
}

```

---

## checkPossibleJob

```asm
// === 08352a5c Quest::checkPossibleJob  [0x08352a5c-0x8352afb] ===
 8352a5c:	55                   	push   %ebp
 8352a5d:	89 e5                	mov    %esp,%ebp
 8352a5f:	83 ec 28             	sub    $0x28,%esp
 8352a62:	8b 45 08             	mov    0x8(%ebp),%eax
 8352a65:	8d 50 10             	lea    0x10(%eax),%edx
 8352a68:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8352a6b:	89 54 24 04          	mov    %edx,0x4(%esp)
 8352a6f:	89 04 24             	mov    %eax,(%esp)
 8352a72:	e8 25 e3 03 00       	call   8390d9c <_ZNKSt6vectorI24stQuestTargetCharacter_tSaIS0_EE5beginEv>
 8352a77:	83 ec 04             	sub    $0x4,%esp
 8352a7a:	8b 45 08             	mov    0x8(%ebp),%eax
 8352a7d:	8d 50 10             	lea    0x10(%eax),%edx
 8352a80:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8352a83:	89 54 24 04          	mov    %edx,0x4(%esp)
 8352a87:	89 04 24             	mov    %eax,(%esp)
 8352a8a:	e8 39 e3 03 00       	call   8390dc8 <_ZNKSt6vectorI24stQuestTargetCharacter_tSaIS0_EE3endEv>
 8352a8f:	83 ec 04             	sub    $0x4,%esp
 8352a92:	eb 4a                	jmp    8352ade <_ZNK5Quest16checkPossibleJobE17ENUM_CHARACTERJOB+0x82>
 8352a94:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8352a97:	89 04 24             	mov    %eax,(%esp)
 8352a9a:	e8 97 e3 03 00       	call   8390e36 <_ZNK9__gnu_cxx17__normal_iteratorIPK24stQuestTargetCharacter_tSt6vectorIS1_SaIS1_EEEptEv>
 8352a9f:	8b 00                	mov    (%eax),%eax
 8352aa1:	89 c2                	mov    %eax,%edx
 8352aa3:	8b 45 0c             	mov    0xc(%ebp),%eax
 8352aa6:	39 c2                	cmp    %eax,%edx
 8352aa8:	74 12                	je     8352abc <_ZNK5Quest16checkPossibleJobE17ENUM_CHARACTERJOB+0x60>
 8352aaa:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8352aad:	89 04 24             	mov    %eax,(%esp)
 8352ab0:	e8 81 e3 03 00       	call   8390e36 <_ZNK9__gnu_cxx17__normal_iteratorIPK24stQuestTargetCharacter_tSt6vectorIS1_SaIS1_EEEptEv>
 8352ab5:	8b 00                	mov    (%eax),%eax
 8352ab7:	83 f8 0b             	cmp    $0xb,%eax
 8352aba:	75 07                	jne    8352ac3 <_ZNK5Quest16checkPossibleJobE17ENUM_CHARACTERJOB+0x67>
 8352abc:	b8 01 00 00 00       	mov    $0x1,%eax
 8352ac1:	eb 05                	jmp    8352ac8 <_ZNK5Quest16checkPossibleJobE17ENUM_CHARACTERJOB+0x6c>
 8352ac3:	b8 00 00 00 00       	mov    $0x0,%eax
 8352ac8:	84 c0                	test   %al,%al
 8352aca:	74 07                	je     8352ad3 <_ZNK5Quest16checkPossibleJobE17ENUM_CHARACTERJOB+0x77>
 8352acc:	b8 01 00 00 00       	mov    $0x1,%eax
 8352ad1:	eb 26                	jmp    8352af9 <_ZNK5Quest16checkPossibleJobE17ENUM_CHARACTERJOB+0x9d>
 8352ad3:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8352ad6:	89 04 24             	mov    %eax,(%esp)
 8352ad9:	e8 42 e3 03 00       	call   8390e20 <_ZN9__gnu_cxx17__normal_iteratorIPK24stQuestTargetCharacter_tSt6vectorIS1_SaIS1_EEEppEv>
 8352ade:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8352ae1:	89 44 24 04          	mov    %eax,0x4(%esp)
 8352ae5:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8352ae8:	89 04 24             	mov    %eax,(%esp)
 8352aeb:	e8 04 e3 03 00       	call   8390df4 <_ZN9__gnu_cxxneIPK24stQuestTargetCharacter_tSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 8352af0:	84 c0                	test   %al,%al
 8352af2:	75 a0                	jne    8352a94 <_ZNK5Quest16checkPossibleJobE17ENUM_CHARACTERJOB+0x38>
 8352af4:	b8 00 00 00 00       	mov    $0x0,%eax
 8352af9:	c9                   	leave
 8352afa:	c3                   	ret
 8352afb:	90                   	nop

```

```c
// Quest::checkPossibleJob @ 0x8352a5c

/* Quest::checkPossibleJob(ENUM_CHARACTERJOB) const */

undefined4 __thiscall Quest::checkPossibleJob(undefined4 this,int param_2)

{
  bool bVar1;
  int *piVar2;
  __normal_iterator local_14 [4];
  __normal_iterator<stQuestTargetCharacter_t_const*,std::vector<stQuestTargetCharacter_t,std::allocator<stQuestTargetCharacter_t>>>
  local_10 [12];
  
  std::vector<stQuestTargetCharacter_t,std::allocator<stQuestTargetCharacter_t>>::begin();
  std::vector<stQuestTargetCharacter_t,std::allocator<stQuestTargetCharacter_t>>::end();
  while( true ) {
    bVar1 = __gnu_cxx::operator!=(local_10,local_14);
    if (!bVar1) {
      return 0;
    }
    piVar2 = (int *)__gnu_cxx::
                    __normal_iterator<stQuestTargetCharacter_t_const*,std::vector<stQuestTargetCharacter_t,std::allocator<stQuestTargetCharacter_t>>>
                    ::operator->(local_10);
    if ((*piVar2 == param_2) ||
       (piVar2 = (int *)__gnu_cxx::
                        __normal_iterator<stQuestTargetCharacter_t_const*,std::vector<stQuestTargetCharacter_t,std::allocator<stQuestTargetCharacter_t>>>
                        ::operator->(local_10), *piVar2 == 0xb)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) break;
    __gnu_cxx::
    __normal_iterator<stQuestTargetCharacter_t_const*,std::vector<stQuestTargetCharacter_t,std::allocator<stQuestTargetCharacter_t>>>
    ::operator++(local_10);
  }
  return 1;
}

```

---

## check_clear_item

```asm
// === 08353342 Quest::check_clear_item  [0x08353342-0x8353403] ===
 8353342:	55                   	push   %ebp
 8353343:	89 e5                	mov    %esp,%ebp
 8353345:	83 ec 38             	sub    $0x38,%esp
 8353348:	8b 45 08             	mov    0x8(%ebp),%eax
 835334b:	83 c0 48             	add    $0x48,%eax
 835334e:	89 04 24             	mov    %eax,(%esp)
 8353351:	e8 18 db 03 00       	call   8390e6e <_ZNKSt6vectorI16DungeonClearItemSaIS0_EE4sizeEv>
 8353356:	85 c0                	test   %eax,%eax
 8353358:	0f 95 c0             	setne  %al
 835335b:	84 c0                	test   %al,%al
 835335d:	0f 84 9a 00 00 00    	je     83533fd <_ZNK5Quest16check_clear_itemEii+0xbb>
 8353363:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8353366:	89 04 24             	mov    %eax,(%esp)
 8353369:	e8 94 aa 01 00       	call   836de02 <_ZN16DungeonClearItemC1Ev>
 835336e:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8353375:	eb 6a                	jmp    83533e1 <_ZNK5Quest16check_clear_itemEii+0x9f>
 8353377:	8b 45 f4             	mov    -0xc(%ebp),%eax
 835337a:	8b 55 08             	mov    0x8(%ebp),%edx
 835337d:	83 c2 48             	add    $0x48,%edx
 8353380:	89 44 24 04          	mov    %eax,0x4(%esp)
 8353384:	89 14 24             	mov    %edx,(%esp)
 8353387:	e8 04 db 03 00       	call   8390e90 <_ZNKSt6vectorI16DungeonClearItemSaIS0_EE2atEj>
 835338c:	8b 10                	mov    (%eax),%edx
 835338e:	89 55 dc             	mov    %edx,-0x24(%ebp)
 8353391:	8b 50 04             	mov    0x4(%eax),%edx
 8353394:	89 55 e0             	mov    %edx,-0x20(%ebp)
 8353397:	8b 50 08             	mov    0x8(%eax),%edx
 835339a:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 835339d:	8b 50 0c             	mov    0xc(%eax),%edx
 83533a0:	89 55 e8             	mov    %edx,-0x18(%ebp)
 83533a3:	8b 50 10             	mov    0x10(%eax),%edx
 83533a6:	89 55 ec             	mov    %edx,-0x14(%ebp)
 83533a9:	8b 40 14             	mov    0x14(%eax),%eax
 83533ac:	89 45 f0             	mov    %eax,-0x10(%ebp)
 83533af:	8b 45 e0             	mov    -0x20(%ebp),%eax
 83533b2:	83 f8 ff             	cmp    $0xffffffff,%eax
 83533b5:	75 0f                	jne    83533c6 <_ZNK5Quest16check_clear_itemEii+0x84>
 83533b7:	8b 45 dc             	mov    -0x24(%ebp),%eax
 83533ba:	3b 45 0c             	cmp    0xc(%ebp),%eax
 83533bd:	75 1e                	jne    83533dd <_ZNK5Quest16check_clear_itemEii+0x9b>
 83533bf:	b8 01 00 00 00       	mov    $0x1,%eax
 83533c4:	eb 3c                	jmp    8353402 <_ZNK5Quest16check_clear_itemEii+0xc0>
 83533c6:	8b 45 dc             	mov    -0x24(%ebp),%eax
 83533c9:	3b 45 0c             	cmp    0xc(%ebp),%eax
 83533cc:	75 0f                	jne    83533dd <_ZNK5Quest16check_clear_itemEii+0x9b>
 83533ce:	8b 45 e0             	mov    -0x20(%ebp),%eax
 83533d1:	3b 45 10             	cmp    0x10(%ebp),%eax
 83533d4:	75 07                	jne    83533dd <_ZNK5Quest16check_clear_itemEii+0x9b>
 83533d6:	b8 01 00 00 00       	mov    $0x1,%eax
 83533db:	eb 25                	jmp    8353402 <_ZNK5Quest16check_clear_itemEii+0xc0>
 83533dd:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 83533e1:	8b 45 08             	mov    0x8(%ebp),%eax
 83533e4:	83 c0 48             	add    $0x48,%eax
 83533e7:	89 04 24             	mov    %eax,(%esp)
 83533ea:	e8 7f da 03 00       	call   8390e6e <_ZNKSt6vectorI16DungeonClearItemSaIS0_EE4sizeEv>
 83533ef:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 83533f2:	0f 9f c0             	setg   %al
 83533f5:	84 c0                	test   %al,%al
 83533f7:	0f 85 7a ff ff ff    	jne    8353377 <_ZNK5Quest16check_clear_itemEii+0x35>
 83533fd:	b8 00 00 00 00       	mov    $0x0,%eax
 8353402:	c9                   	leave
 8353403:	c3                   	ret

```

```c
// Quest::check_clear_item @ 0x8353342

/* Quest::check_clear_item(int, int) const */

undefined4 __thiscall Quest::check_clear_item(Quest *this,int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  uint local_10;
  
  iVar1 = std::vector<DungeonClearItem,std::allocator<DungeonClearItem>>::size
                    ((vector<DungeonClearItem,std::allocator<DungeonClearItem>> *)(this + 0x48));
  if (iVar1 != 0) {
    DungeonClearItem::DungeonClearItem((DungeonClearItem *)&local_28);
    local_10 = 0;
    while (iVar1 = std::vector<DungeonClearItem,std::allocator<DungeonClearItem>>::size
                             ((vector<DungeonClearItem,std::allocator<DungeonClearItem>> *)
                              (this + 0x48)), (int)local_10 < iVar1) {
      piVar2 = (int *)std::vector<DungeonClearItem,std::allocator<DungeonClearItem>>::at
                                ((vector<DungeonClearItem,std::allocator<DungeonClearItem>> *)
                                 (this + 0x48),local_10);
      local_28 = *piVar2;
      local_24 = piVar2[1];
      local_20 = piVar2[2];
      local_1c = piVar2[3];
      local_18 = piVar2[4];
      local_14 = piVar2[5];
      if (local_24 == -1) {
        if (local_28 == param_1) {
          return 1;
        }
      }
      else if ((local_28 == param_1) && (local_24 == param_2)) {
        return 1;
      }
      local_10 = local_10 + 1;
    }
  }
  return 0;
}

```

---

## check_possible

```asm
// === 08352d86 Quest::check_possible  [0x08352d86-0x8352fb3] ===
 8352d86:	55                   	push   %ebp
 8352d87:	89 e5                	mov    %esp,%ebp
 8352d89:	53                   	push   %ebx
 8352d8a:	83 ec 44             	sub    $0x44,%esp
 8352d8d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8352d90:	8b 40 04             	mov    0x4(%eax),%eax
 8352d93:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8352d96:	8b 45 0c             	mov    0xc(%ebp),%eax
 8352d99:	8b 40 08             	mov    0x8(%eax),%eax
 8352d9c:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8352d9f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8352da2:	8b 40 0c             	mov    0xc(%eax),%eax
 8352da5:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8352da8:	8b 45 0c             	mov    0xc(%ebp),%eax
 8352dab:	8b 00                	mov    (%eax),%eax
 8352dad:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8352db0:	8b 45 0c             	mov    0xc(%ebp),%eax
 8352db3:	8b 40 10             	mov    0x10(%eax),%eax
 8352db6:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8352db9:	8b 45 0c             	mov    0xc(%ebp),%eax
 8352dbc:	8b 40 1c             	mov    0x1c(%eax),%eax
 8352dbf:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8352dc2:	8b 45 0c             	mov    0xc(%ebp),%eax
 8352dc5:	8b 40 20             	mov    0x20(%eax),%eax
 8352dc8:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8352dcb:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8352dce:	89 44 24 04          	mov    %eax,0x4(%esp)
 8352dd2:	8b 45 08             	mov    0x8(%ebp),%eax
 8352dd5:	89 04 24             	mov    %eax,(%esp)
 8352dd8:	e8 7f fc ff ff       	call   8352a5c <_ZNK5Quest16checkPossibleJobE17ENUM_CHARACTERJOB>
 8352ddd:	83 f0 01             	xor    $0x1,%eax
 8352de0:	84 c0                	test   %al,%al
 8352de2:	74 0a                	je     8352dee <_ZNK5Quest14check_possibleERK18stSelectQuestParam+0x68>
 8352de4:	b8 00 00 00 00       	mov    $0x0,%eax
 8352de9:	e9 c0 01 00 00       	jmp    8352fae <_ZNK5Quest14check_possibleERK18stSelectQuestParam+0x228>
 8352dee:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8352df1:	89 44 24 04          	mov    %eax,0x4(%esp)
 8352df5:	8b 45 08             	mov    0x8(%ebp),%eax
 8352df8:	89 04 24             	mov    %eax,(%esp)
 8352dfb:	e8 10 fe ff ff       	call   8352c10 <_ZNK5Quest22_isNeededCheckGrowTypeE17ENUM_CHARACTERJOB>
 8352e00:	84 c0                	test   %al,%al
 8352e02:	0f 84 c6 00 00 00    	je     8352ece <_ZNK5Quest14check_possibleERK18stSelectQuestParam+0x148>
 8352e08:	8b 45 08             	mov    0x8(%ebp),%eax
 8352e0b:	8b 40 1c             	mov    0x1c(%eax),%eax
 8352e0e:	83 f8 01             	cmp    $0x1,%eax
 8352e11:	75 36                	jne    8352e49 <_ZNK5Quest14check_possibleERK18stSelectQuestParam+0xc3>
 8352e13:	c7 44 24 10 5c 01 c3 	movl   $0x8c3015c,0x10(%esp)
 8352e1a:	08 
 8352e1b:	c7 44 24 0c 93 11 00 	movl   $0x1193,0xc(%esp)
 8352e22:	00 
 8352e23:	c7 44 24 08 20 46 c3 	movl   $0x8c34620,0x8(%esp)
 8352e2a:	08 
 8352e2b:	c7 44 24 04 0a f9 c2 	movl   $0x8c2f90a,0x4(%esp)
 8352e32:	08 
 8352e33:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8352e3a:	e8 cb 0d 78 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8352e3f:	b8 00 00 00 00       	mov    $0x0,%eax
 8352e44:	e9 65 01 00 00       	jmp    8352fae <_ZNK5Quest14check_possibleERK18stSelectQuestParam+0x228>
 8352e49:	8b 45 08             	mov    0x8(%ebp),%eax
 8352e4c:	8b 40 1c             	mov    0x1c(%eax),%eax
 8352e4f:	83 f8 02             	cmp    $0x2,%eax
 8352e52:	75 32                	jne    8352e86 <_ZNK5Quest14check_possibleERK18stSelectQuestParam+0x100>
 8352e54:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8352e57:	c7 44 24 0c ff ff ff 	movl   $0xffffffff,0xc(%esp)
 8352e5e:	ff 
 8352e5f:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8352e62:	89 54 24 08          	mov    %edx,0x8(%esp)
 8352e66:	89 44 24 04          	mov    %eax,0x4(%esp)
 8352e6a:	8b 45 08             	mov    0x8(%ebp),%eax
 8352e6d:	89 04 24             	mov    %eax,(%esp)
 8352e70:	e8 87 fc ff ff       	call   8352afc <_ZNK5Quest20checkMatchedGrowTypeE17ENUM_CHARACTERJOBii>
 8352e75:	83 f0 01             	xor    $0x1,%eax
 8352e78:	84 c0                	test   %al,%al
 8352e7a:	74 52                	je     8352ece <_ZNK5Quest14check_possibleERK18stSelectQuestParam+0x148>
 8352e7c:	b8 00 00 00 00       	mov    $0x0,%eax
 8352e81:	e9 28 01 00 00       	jmp    8352fae <_ZNK5Quest14check_possibleERK18stSelectQuestParam+0x228>
 8352e86:	8b 45 08             	mov    0x8(%ebp),%eax
 8352e89:	8b 40 1c             	mov    0x1c(%eax),%eax
 8352e8c:	83 f8 0a             	cmp    $0xa,%eax
 8352e8f:	74 3d                	je     8352ece <_ZNK5Quest14check_possibleERK18stSelectQuestParam+0x148>
 8352e91:	8b 45 08             	mov    0x8(%ebp),%eax
 8352e94:	8b 40 1c             	mov    0x1c(%eax),%eax
 8352e97:	83 f8 14             	cmp    $0x14,%eax
 8352e9a:	74 32                	je     8352ece <_ZNK5Quest14check_possibleERK18stSelectQuestParam+0x148>
 8352e9c:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8352e9f:	c7 44 24 0c ff ff ff 	movl   $0xffffffff,0xc(%esp)
 8352ea6:	ff 
 8352ea7:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8352eaa:	89 54 24 08          	mov    %edx,0x8(%esp)
 8352eae:	89 44 24 04          	mov    %eax,0x4(%esp)
 8352eb2:	8b 45 08             	mov    0x8(%ebp),%eax
 8352eb5:	89 04 24             	mov    %eax,(%esp)
 8352eb8:	e8 3f fc ff ff       	call   8352afc <_ZNK5Quest20checkMatchedGrowTypeE17ENUM_CHARACTERJOBii>
 8352ebd:	83 f0 01             	xor    $0x1,%eax
 8352ec0:	84 c0                	test   %al,%al
 8352ec2:	74 0a                	je     8352ece <_ZNK5Quest14check_possibleERK18stSelectQuestParam+0x148>
 8352ec4:	b8 00 00 00 00       	mov    $0x0,%eax
 8352ec9:	e9 e0 00 00 00       	jmp    8352fae <_ZNK5Quest14check_possibleERK18stSelectQuestParam+0x228>
 8352ece:	8b 45 08             	mov    0x8(%ebp),%eax
 8352ed1:	8b 40 20             	mov    0x20(%eax),%eax
 8352ed4:	3b 45 e8             	cmp    -0x18(%ebp),%eax
 8352ed7:	7e 0a                	jle    8352ee3 <_ZNK5Quest14check_possibleERK18stSelectQuestParam+0x15d>
 8352ed9:	b8 00 00 00 00       	mov    $0x0,%eax
 8352ede:	e9 cb 00 00 00       	jmp    8352fae <_ZNK5Quest14check_possibleERK18stSelectQuestParam+0x228>
 8352ee3:	8b 45 08             	mov    0x8(%ebp),%eax
 8352ee6:	8b 40 24             	mov    0x24(%eax),%eax
 8352ee9:	3b 45 e8             	cmp    -0x18(%ebp),%eax
 8352eec:	7d 0a                	jge    8352ef8 <_ZNK5Quest14check_possibleERK18stSelectQuestParam+0x172>
 8352eee:	b8 00 00 00 00       	mov    $0x0,%eax
 8352ef3:	e9 b6 00 00 00       	jmp    8352fae <_ZNK5Quest14check_possibleERK18stSelectQuestParam+0x228>
 8352ef8:	8b 45 08             	mov    0x8(%ebp),%eax
 8352efb:	8b 40 28             	mov    0x28(%eax),%eax
 8352efe:	85 c0                	test   %eax,%eax
 8352f00:	74 15                	je     8352f17 <_ZNK5Quest14check_possibleERK18stSelectQuestParam+0x191>
 8352f02:	8b 45 08             	mov    0x8(%ebp),%eax
 8352f05:	8b 40 28             	mov    0x28(%eax),%eax
 8352f08:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 8352f0b:	7e 0a                	jle    8352f17 <_ZNK5Quest14check_possibleERK18stSelectQuestParam+0x191>
 8352f0d:	b8 00 00 00 00       	mov    $0x0,%eax
 8352f12:	e9 97 00 00 00       	jmp    8352fae <_ZNK5Quest14check_possibleERK18stSelectQuestParam+0x228>
 8352f17:	8b 45 08             	mov    0x8(%ebp),%eax
 8352f1a:	8b 40 08             	mov    0x8(%eax),%eax
 8352f1d:	83 f8 01             	cmp    $0x1,%eax
 8352f20:	75 2c                	jne    8352f4e <_ZNK5Quest14check_possibleERK18stSelectQuestParam+0x1c8>
 8352f22:	8b 45 08             	mov    0x8(%ebp),%eax
 8352f25:	8b 58 04             	mov    0x4(%eax),%ebx
 8352f28:	e8 6e 92 d7 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8352f2d:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8352f31:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8352f34:	89 54 24 04          	mov    %edx,0x4(%esp)
 8352f38:	89 04 24             	mov    %eax,(%esp)
 8352f3b:	e8 de 11 01 00       	call   836411e <_ZN12CDataManager29isThereDailyTrainingQuestListEii>
 8352f40:	83 f0 01             	xor    $0x1,%eax
 8352f43:	84 c0                	test   %al,%al
 8352f45:	74 07                	je     8352f4e <_ZNK5Quest14check_possibleERK18stSelectQuestParam+0x1c8>
 8352f47:	b8 00 00 00 00       	mov    $0x0,%eax
 8352f4c:	eb 60                	jmp    8352fae <_ZNK5Quest14check_possibleERK18stSelectQuestParam+0x228>
 8352f4e:	8b 45 08             	mov    0x8(%ebp),%eax
 8352f51:	8b 80 3c 01 00 00    	mov    0x13c(%eax),%eax
 8352f57:	85 c0                	test   %eax,%eax
 8352f59:	74 4e                	je     8352fa9 <_ZNK5Quest14check_possibleERK18stSelectQuestParam+0x223>
 8352f5b:	8b 45 08             	mov    0x8(%ebp),%eax
 8352f5e:	8b 80 40 01 00 00    	mov    0x140(%eax),%eax
 8352f64:	83 f8 ff             	cmp    $0xffffffff,%eax
 8352f67:	74 40                	je     8352fa9 <_ZNK5Quest14check_possibleERK18stSelectQuestParam+0x223>
 8352f69:	8b 45 08             	mov    0x8(%ebp),%eax
 8352f6c:	8b 80 3c 01 00 00    	mov    0x13c(%eax),%eax
 8352f72:	83 f8 ff             	cmp    $0xffffffff,%eax
 8352f75:	74 0e                	je     8352f85 <_ZNK5Quest14check_possibleERK18stSelectQuestParam+0x1ff>
 8352f77:	8b 45 08             	mov    0x8(%ebp),%eax
 8352f7a:	8b 80 3c 01 00 00    	mov    0x13c(%eax),%eax
 8352f80:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 8352f83:	75 15                	jne    8352f9a <_ZNK5Quest14check_possibleERK18stSelectQuestParam+0x214>
 8352f85:	8b 45 08             	mov    0x8(%ebp),%eax
 8352f88:	8b 80 40 01 00 00    	mov    0x140(%eax),%eax
 8352f8e:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 8352f91:	7e 0e                	jle    8352fa1 <_ZNK5Quest14check_possibleERK18stSelectQuestParam+0x21b>
 8352f93:	b8 00 00 00 00       	mov    $0x0,%eax
 8352f98:	eb 14                	jmp    8352fae <_ZNK5Quest14check_possibleERK18stSelectQuestParam+0x228>
 8352f9a:	b8 00 00 00 00       	mov    $0x0,%eax
 8352f9f:	eb 0d                	jmp    8352fae <_ZNK5Quest14check_possibleERK18stSelectQuestParam+0x228>
 8352fa1:	90                   	nop
 8352fa2:	b8 01 00 00 00       	mov    $0x1,%eax
 8352fa7:	eb 05                	jmp    8352fae <_ZNK5Quest14check_possibleERK18stSelectQuestParam+0x228>
 8352fa9:	b8 01 00 00 00       	mov    $0x1,%eax
 8352fae:	83 c4 44             	add    $0x44,%esp
 8352fb1:	5b                   	pop    %ebx
 8352fb2:	5d                   	pop    %ebp
 8352fb3:	c3                   	ret

```

```c
// Quest::check_possible @ 0x8352d86

/* Quest::check_possible(stSelectQuestParam const&) const */

undefined4 __thiscall Quest::check_possible(Quest *this,stSelectQuestParam *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  undefined4 uVar7;
  CDataManager *this_00;
  
  uVar7 = *(undefined4 *)(param_1 + 4);
  uVar1 = *(undefined4 *)(param_1 + 8);
  iVar2 = *(int *)param_1;
  iVar3 = *(int *)(param_1 + 0x10);
  iVar4 = *(int *)(param_1 + 0x1c);
  iVar5 = *(int *)(param_1 + 0x20);
  cVar6 = checkPossibleJob(this,uVar7);
  if (cVar6 == '\x01') {
    cVar6 = _isNeededCheckGrowType(this,uVar7);
    if (cVar6 != '\0') {
      if (*(int *)(this + 0x1c) == 1) {
        LogManager::logFormat
                  (1,"data_manager.cpp",
                   "bool Quest::check_possible(const stSelectQuestParam&) const",0x1193,
                   "Quest Script Error Break !, [grow type] != -1 and [job change quest] = 1");
        return 0;
      }
      if (*(int *)(this + 0x1c) == 2) {
        cVar6 = checkMatchedGrowType(this,uVar7,uVar1,0xffffffff);
        if (cVar6 != '\x01') {
          return 0;
        }
      }
      else if (((*(int *)(this + 0x1c) != 10) && (*(int *)(this + 0x1c) != 0x14)) &&
              (cVar6 = checkMatchedGrowType(this,uVar7,uVar1,0xffffffff), cVar6 != '\x01')) {
        return 0;
      }
    }
    if (iVar2 < *(int *)(this + 0x20)) {
      uVar7 = 0;
    }
    else if (*(int *)(this + 0x24) < iVar2) {
      uVar7 = 0;
    }
    else if ((*(int *)(this + 0x28) == 0) || (*(int *)(this + 0x28) <= iVar3)) {
      if (*(int *)(this + 8) == 1) {
        iVar3 = *(int *)(this + 4);
        this_00 = (CDataManager *)G_CDataManager();
        cVar6 = CDataManager::isThereDailyTrainingQuestList(this_00,iVar2,iVar3);
        if (cVar6 != '\x01') {
          return 0;
        }
      }
      if ((*(int *)(this + 0x13c) == 0) || (*(int *)(this + 0x140) == -1)) {
        uVar7 = 1;
      }
      else if ((*(int *)(this + 0x13c) == -1) || (*(int *)(this + 0x13c) == iVar4)) {
        if (iVar5 < *(int *)(this + 0x140)) {
          uVar7 = 0;
        }
        else {
          uVar7 = 1;
        }
      }
      else {
        uVar7 = 0;
      }
    }
    else {
      uVar7 = 0;
    }
  }
  else {
    uVar7 = 0;
  }
  return uVar7;
}

```

---

## check_power_side

```asm
// === 08352cc2 Quest::check_power_side  [0x08352cc2-0x8352d85] ===
 8352cc2:	55                   	push   %ebp
 8352cc3:	89 e5                	mov    %esp,%ebp
 8352cc5:	83 ec 48             	sub    $0x48,%esp
 8352cc8:	8b 45 0c             	mov    0xc(%ebp),%eax
 8352ccb:	88 45 e4             	mov    %al,-0x1c(%ebp)
 8352cce:	8b 45 08             	mov    0x8(%ebp),%eax
 8352cd1:	0f b6 80 31 01 00 00 	movzbl 0x131(%eax),%eax
 8352cd8:	3c ff                	cmp    $0xff,%al
 8352cda:	75 0a                	jne    8352ce6 <_ZN5Quest16check_power_sideEc+0x24>
 8352cdc:	b8 01 00 00 00       	mov    $0x1,%eax
 8352ce1:	e9 9e 00 00 00       	jmp    8352d84 <_ZN5Quest16check_power_sideEc+0xc2>
 8352ce6:	a1 50 be 40 09       	mov    0x940be50,%eax
 8352ceb:	89 04 24             	mov    %eax,(%esp)
 8352cee:	e8 27 23 02 00       	call   837501a <_ZN13CPowerManager13GetWinnerSideEv>
 8352cf3:	88 45 f6             	mov    %al,-0xa(%ebp)
 8352cf6:	8b 45 08             	mov    0x8(%ebp),%eax
 8352cf9:	0f b6 80 31 01 00 00 	movzbl 0x131(%eax),%eax
 8352d00:	84 c0                	test   %al,%al
 8352d02:	75 10                	jne    8352d14 <_ZN5Quest16check_power_sideEc+0x52>
 8352d04:	0f b6 45 f6          	movzbl -0xa(%ebp),%eax
 8352d08:	3a 45 e4             	cmp    -0x1c(%ebp),%al
 8352d0b:	75 72                	jne    8352d7f <_ZN5Quest16check_power_sideEc+0xbd>
 8352d0d:	b8 01 00 00 00       	mov    $0x1,%eax
 8352d12:	eb 70                	jmp    8352d84 <_ZN5Quest16check_power_sideEc+0xc2>
 8352d14:	8b 45 08             	mov    0x8(%ebp),%eax
 8352d17:	0f b6 80 31 01 00 00 	movzbl 0x131(%eax),%eax
 8352d1e:	3c 01                	cmp    $0x1,%al
 8352d20:	75 20                	jne    8352d42 <_ZN5Quest16check_power_sideEc+0x80>
 8352d22:	a1 50 be 40 09       	mov    0x940be50,%eax
 8352d27:	89 04 24             	mov    %eax,(%esp)
 8352d2a:	e8 eb 22 02 00       	call   837501a <_ZN13CPowerManager13GetWinnerSideEv>
 8352d2f:	88 45 f7             	mov    %al,-0x9(%ebp)
 8352d32:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 8352d36:	3a 45 e4             	cmp    -0x1c(%ebp),%al
 8352d39:	74 44                	je     8352d7f <_ZN5Quest16check_power_sideEc+0xbd>
 8352d3b:	b8 01 00 00 00       	mov    $0x1,%eax
 8352d40:	eb 42                	jmp    8352d84 <_ZN5Quest16check_power_sideEc+0xc2>
 8352d42:	8b 45 08             	mov    0x8(%ebp),%eax
 8352d45:	8b 40 04             	mov    0x4(%eax),%eax
 8352d48:	89 44 24 14          	mov    %eax,0x14(%esp)
 8352d4c:	c7 44 24 10 3c 01 c3 	movl   $0x8c3013c,0x10(%esp)
 8352d53:	08 
 8352d54:	c7 44 24 0c 61 11 00 	movl   $0x1161,0xc(%esp)
 8352d5b:	00 
 8352d5c:	c7 44 24 08 60 46 c3 	movl   $0x8c34660,0x8(%esp)
 8352d63:	08 
 8352d64:	c7 44 24 04 0a f9 c2 	movl   $0x8c2f90a,0x4(%esp)
 8352d6b:	08 
 8352d6c:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8352d73:	e8 92 0e 78 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8352d78:	b8 00 00 00 00       	mov    $0x0,%eax
 8352d7d:	eb 05                	jmp    8352d84 <_ZN5Quest16check_power_sideEc+0xc2>
 8352d7f:	b8 00 00 00 00       	mov    $0x0,%eax
 8352d84:	c9                   	leave
 8352d85:	c3                   	ret

```

```c
// Quest::check_power_side @ 0x8352cc2

/* Quest::check_power_side(char) */

undefined4 __thiscall Quest::check_power_side(Quest *this,char param_1)

{
  char cVar1;
  
  if (this[0x131] == (Quest)0xff) {
    return 1;
  }
  cVar1 = CPowerManager::GetWinnerSide(GlobalData::s_power_manager);
  if (this[0x131] == (Quest)0x0) {
    if (cVar1 == param_1) {
      return 1;
    }
  }
  else {
    if (this[0x131] != (Quest)0x1) {
      LogManager::logFormat
                (1,"data_manager.cpp","bool Quest::check_power_side(char)",0x1161,
                 "Quest Script Error q_index(%d)",*(undefined4 *)(this + 4));
      return 0;
    }
    cVar1 = CPowerManager::GetWinnerSide(GlobalData::s_power_manager);
    if (cVar1 != param_1) {
      return 1;
    }
  }
  return 0;
}

```

---

## get_appearmap

```asm
// === 083536f2 Quest::get_appearmap  [0x083536f2-0x8353775] ===
 83536f2:	55                   	push   %ebp
 83536f3:	89 e5                	mov    %esp,%ebp
 83536f5:	53                   	push   %ebx
 83536f6:	83 ec 14             	sub    $0x14,%esp
 83536f9:	8b 45 08             	mov    0x8(%ebp),%eax
 83536fc:	8b 40 64             	mov    0x64(%eax),%eax
 83536ff:	83 f8 ff             	cmp    $0xffffffff,%eax
 8353702:	75 2e                	jne    8353732 <_ZNK5Quest13get_appearmapEii+0x40>
 8353704:	8b 45 08             	mov    0x8(%ebp),%eax
 8353707:	8b 40 60             	mov    0x60(%eax),%eax
 835370a:	3b 45 0c             	cmp    0xc(%ebp),%eax
 835370d:	75 5c                	jne    835376b <_ZNK5Quest13get_appearmapEii+0x79>
 835370f:	8b 45 08             	mov    0x8(%ebp),%eax
 8353712:	8b 58 6c             	mov    0x6c(%eax),%ebx
 8353715:	c7 04 24 64 00 00 00 	movl   $0x64,(%esp)
 835371c:	e8 66 e4 35 00       	call   86b1b87 <_Z12get_rand_inti>
 8353721:	39 c3                	cmp    %eax,%ebx
 8353723:	0f 9d c0             	setge  %al
 8353726:	84 c0                	test   %al,%al
 8353728:	74 41                	je     835376b <_ZNK5Quest13get_appearmapEii+0x79>
 835372a:	8b 45 08             	mov    0x8(%ebp),%eax
 835372d:	8b 40 68             	mov    0x68(%eax),%eax
 8353730:	eb 3e                	jmp    8353770 <_ZNK5Quest13get_appearmapEii+0x7e>
 8353732:	8b 45 08             	mov    0x8(%ebp),%eax
 8353735:	8b 40 64             	mov    0x64(%eax),%eax
 8353738:	3b 45 0c             	cmp    0xc(%ebp),%eax
 835373b:	75 2e                	jne    835376b <_ZNK5Quest13get_appearmapEii+0x79>
 835373d:	8b 45 08             	mov    0x8(%ebp),%eax
 8353740:	8b 40 64             	mov    0x64(%eax),%eax
 8353743:	3b 45 10             	cmp    0x10(%ebp),%eax
 8353746:	75 23                	jne    835376b <_ZNK5Quest13get_appearmapEii+0x79>
 8353748:	8b 45 08             	mov    0x8(%ebp),%eax
 835374b:	8b 58 6c             	mov    0x6c(%eax),%ebx
 835374e:	c7 04 24 64 00 00 00 	movl   $0x64,(%esp)
 8353755:	e8 2d e4 35 00       	call   86b1b87 <_Z12get_rand_inti>
 835375a:	39 c3                	cmp    %eax,%ebx
 835375c:	0f 9d c0             	setge  %al
 835375f:	84 c0                	test   %al,%al
 8353761:	74 08                	je     835376b <_ZNK5Quest13get_appearmapEii+0x79>
 8353763:	8b 45 08             	mov    0x8(%ebp),%eax
 8353766:	8b 40 68             	mov    0x68(%eax),%eax
 8353769:	eb 05                	jmp    8353770 <_ZNK5Quest13get_appearmapEii+0x7e>
 835376b:	b8 00 00 00 00       	mov    $0x0,%eax
 8353770:	83 c4 14             	add    $0x14,%esp
 8353773:	5b                   	pop    %ebx
 8353774:	5d                   	pop    %ebp
 8353775:	c3                   	ret

```

```c
// Quest::get_appearmap @ 0x83536f2

/* Quest::get_appearmap(int, int) const */

undefined4 __thiscall Quest::get_appearmap(Quest *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(this + 100) == -1) {
    if ((*(int *)(this + 0x60) == param_1) &&
       (iVar1 = *(int *)(this + 0x6c), iVar2 = get_rand_int(100), iVar2 <= iVar1)) {
      return *(undefined4 *)(this + 0x68);
    }
  }
  else if (((*(int *)(this + 100) == param_1) && (*(int *)(this + 100) == param_2)) &&
          (iVar1 = *(int *)(this + 0x6c), iVar2 = get_rand_int(100), iVar2 <= iVar1)) {
    return *(undefined4 *)(this + 0x68);
  }
  return 0;
}

```

---

## get_clear_itemlist

```asm
// === 08353404 Quest::get_clear_itemlist  [0x08353404-0x83535d5] ===
 8353404:	55                   	push   %ebp
 8353405:	89 e5                	mov    %esp,%ebp
 8353407:	57                   	push   %edi
 8353408:	56                   	push   %esi
 8353409:	53                   	push   %ebx
 835340a:	83 ec 6c             	sub    $0x6c,%esp
 835340d:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8353410:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8353413:	89 04 24             	mov    %eax,(%esp)
 8353416:	e8 e7 a9 01 00       	call   836de02 <_ZN16DungeonClearItemC1Ev>
 835341b:	89 d8                	mov    %ebx,%eax
 835341d:	89 04 24             	mov    %eax,(%esp)
 8353420:	e8 b1 15 de ff       	call   81349d6 <_ZNSt6vectorISt4pairIiiESaIS1_EEC1Ev>
 8353425:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8353428:	89 04 24             	mov    %eax,(%esp)
 835342b:	e8 5e 28 e6 ff       	call   81b5c8e <_ZNSt4pairIiiEC1Ev>
 8353430:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 8353437:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 835343e:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 8353445:	e9 45 01 00 00       	jmp    835358f <_ZNK5Quest18get_clear_itemlistEi+0x18b>
 835344a:	8b 45 dc             	mov    -0x24(%ebp),%eax
 835344d:	8b 55 0c             	mov    0xc(%ebp),%edx
 8353450:	83 c2 48             	add    $0x48,%edx
 8353453:	89 44 24 04          	mov    %eax,0x4(%esp)
 8353457:	89 14 24             	mov    %edx,(%esp)
 835345a:	e8 31 da 03 00       	call   8390e90 <_ZNKSt6vectorI16DungeonClearItemSaIS0_EE2atEj>
 835345f:	8b 10                	mov    (%eax),%edx
 8353461:	89 55 bc             	mov    %edx,-0x44(%ebp)
 8353464:	8b 50 04             	mov    0x4(%eax),%edx
 8353467:	89 55 c0             	mov    %edx,-0x40(%ebp)
 835346a:	8b 50 08             	mov    0x8(%eax),%edx
 835346d:	89 55 c4             	mov    %edx,-0x3c(%ebp)
 8353470:	8b 50 0c             	mov    0xc(%eax),%edx
 8353473:	89 55 c8             	mov    %edx,-0x38(%ebp)
 8353476:	8b 50 10             	mov    0x10(%eax),%edx
 8353479:	89 55 cc             	mov    %edx,-0x34(%ebp)
 835347c:	8b 40 14             	mov    0x14(%eax),%eax
 835347f:	89 45 d0             	mov    %eax,-0x30(%ebp)
 8353482:	8b 45 bc             	mov    -0x44(%ebp),%eax
 8353485:	3b 45 10             	cmp    0x10(%ebp),%eax
 8353488:	0f 85 fc 00 00 00    	jne    835358a <_ZNK5Quest18get_clear_itemlistEi+0x186>
 835348e:	8b 75 c4             	mov    -0x3c(%ebp),%esi
 8353491:	e8 05 8d d7 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8353496:	89 74 24 04          	mov    %esi,0x4(%esp)
 835349a:	89 04 24             	mov    %eax,(%esp)
 835349d:	e8 90 c5 00 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 83534a2:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 83534a5:	83 7d d4 00          	cmpl   $0x0,-0x2c(%ebp)
 83534a9:	75 38                	jne    83534e3 <_ZNK5Quest18get_clear_itemlistEi+0xdf>
 83534ab:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 83534ae:	89 44 24 14          	mov    %eax,0x14(%esp)
 83534b2:	c7 44 24 10 a8 01 c3 	movl   $0x8c301a8,0x10(%esp)
 83534b9:	08 
 83534ba:	c7 44 24 0c 79 12 00 	movl   $0x1279,0xc(%esp)
 83534c1:	00 
 83534c2:	c7 44 24 08 e0 45 c3 	movl   $0x8c345e0,0x8(%esp)
 83534c9:	08 
 83534ca:	c7 44 24 04 0a f9 c2 	movl   $0x8c2f90a,0x4(%esp)
 83534d1:	08 
 83534d2:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 83534d9:	e8 2c 07 78 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 83534de:	e9 a8 00 00 00       	jmp    835358b <_ZNK5Quest18get_clear_itemlistEi+0x187>
 83534e3:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 83534e6:	89 04 24             	mov    %eax,(%esp)
 83534e9:	e8 0c de d9 ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 83534ee:	84 c0                	test   %al,%al
 83534f0:	74 61                	je     8353553 <_ZNK5Quest18get_clear_itemlistEi+0x14f>
 83534f2:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 83534f9:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8353500:	eb 1f                	jmp    8353521 <_ZNK5Quest18get_clear_itemlistEi+0x11d>
 8353502:	c7 04 24 64 00 00 00 	movl   $0x64,(%esp)
 8353509:	e8 79 e6 35 00       	call   86b1b87 <_Z12get_rand_inti>
 835350e:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8353511:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8353514:	3b 45 d8             	cmp    -0x28(%ebp),%eax
 8353517:	7c 04                	jl     835351d <_ZNK5Quest18get_clear_itemlistEi+0x119>
 8353519:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 835351d:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 8353521:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8353524:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 8353527:	0f 9f c0             	setg   %al
 835352a:	84 c0                	test   %al,%al
 835352c:	75 d4                	jne    8353502 <_ZNK5Quest18get_clear_itemlistEi+0xfe>
 835352e:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 8353532:	7e 57                	jle    835358b <_ZNK5Quest18get_clear_itemlistEi+0x187>
 8353534:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8353537:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 835353a:	8b 45 e0             	mov    -0x20(%ebp),%eax
 835353d:	89 45 b8             	mov    %eax,-0x48(%ebp)
 8353540:	89 d8                	mov    %ebx,%eax
 8353542:	8d 55 b4             	lea    -0x4c(%ebp),%edx
 8353545:	89 54 24 04          	mov    %edx,0x4(%esp)
 8353549:	89 04 24             	mov    %eax,(%esp)
 835354c:	e8 1f c5 fb ff       	call   830fa70 <_ZNSt6vectorISt4pairIiiESaIS1_EE9push_backERKS1_>
 8353551:	eb 38                	jmp    835358b <_ZNK5Quest18get_clear_itemlistEi+0x187>
 8353553:	c7 04 24 64 00 00 00 	movl   $0x64,(%esp)
 835355a:	e8 28 e6 35 00       	call   86b1b87 <_Z12get_rand_inti>
 835355f:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8353562:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8353565:	3b 45 d8             	cmp    -0x28(%ebp),%eax
 8353568:	7c 21                	jl     835358b <_ZNK5Quest18get_clear_itemlistEi+0x187>
 835356a:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 835356d:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 8353570:	c7 45 b8 01 00 00 00 	movl   $0x1,-0x48(%ebp)
 8353577:	89 d8                	mov    %ebx,%eax
 8353579:	8d 55 b4             	lea    -0x4c(%ebp),%edx
 835357c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8353580:	89 04 24             	mov    %eax,(%esp)
 8353583:	e8 e8 c4 fb ff       	call   830fa70 <_ZNSt6vectorISt4pairIiiESaIS1_EE9push_backERKS1_>
 8353588:	eb 01                	jmp    835358b <_ZNK5Quest18get_clear_itemlistEi+0x187>
 835358a:	90                   	nop
 835358b:	83 45 dc 01          	addl   $0x1,-0x24(%ebp)
 835358f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8353592:	83 c0 48             	add    $0x48,%eax
 8353595:	89 04 24             	mov    %eax,(%esp)
 8353598:	e8 d1 d8 03 00       	call   8390e6e <_ZNKSt6vectorI16DungeonClearItemSaIS0_EE4sizeEv>
 835359d:	3b 45 dc             	cmp    -0x24(%ebp),%eax
 83535a0:	0f 9f c0             	setg   %al
 83535a3:	84 c0                	test   %al,%al
 83535a5:	0f 85 9f fe ff ff    	jne    835344a <_ZNK5Quest18get_clear_itemlistEi+0x46>
 83535ab:	eb 1a                	jmp    83535c7 <_ZNK5Quest18get_clear_itemlistEi+0x1c3>
 83535ad:	89 d6                	mov    %edx,%esi
 83535af:	89 c7                	mov    %eax,%edi
 83535b1:	89 d8                	mov    %ebx,%eax
 83535b3:	89 04 24             	mov    %eax,(%esp)
 83535b6:	e8 2f 14 de ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 83535bb:	89 f8                	mov    %edi,%eax
 83535bd:	89 f2                	mov    %esi,%edx
 83535bf:	89 04 24             	mov    %eax,(%esp)
 83535c2:	e8 89 01 79 00       	call   8ae3750 <_Unwind_Resume>
 83535c7:	89 d8                	mov    %ebx,%eax
 83535c9:	89 d8                	mov    %ebx,%eax
 83535cb:	83 c4 6c             	add    $0x6c,%esp
 83535ce:	5b                   	pop    %ebx
 83535cf:	5e                   	pop    %esi
 83535d0:	5f                   	pop    %edi
 83535d1:	5d                   	pop    %ebp
 83535d2:	c2 04 00             	ret    $0x4
 83535d5:	90                   	nop

```

```c
// Quest::get_clear_itemlist @ 0x8353404

/* Quest::get_clear_itemlist(int) const */

int Quest::get_clear_itemlist(int param_1)

{
  char cVar1;
  int *piVar2;
  CDataManager *this;
  int iVar3;
  int in_stack_00000008;
  int in_stack_0000000c;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  CItem *local_30;
  int local_2c;
  uint local_28;
  int local_24;
  int local_20;
  
  DungeonClearItem::DungeonClearItem((DungeonClearItem *)&local_48);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_1);
  std::pair<int,int>::pair((pair<int,int> *)&local_50);
  local_30 = (CItem *)0x0;
  local_2c = 0;
  local_28 = 0;
  while( true ) {
    iVar3 = std::vector<DungeonClearItem,std::allocator<DungeonClearItem>>::size
                      ((vector<DungeonClearItem,std::allocator<DungeonClearItem>> *)
                       (in_stack_00000008 + 0x48));
    if (iVar3 <= (int)local_28) break;
                    /* try { // try from 0835345a to 08353587 has its CatchHandler @ 083535ad */
    piVar2 = (int *)std::vector<DungeonClearItem,std::allocator<DungeonClearItem>>::at
                              ((vector<DungeonClearItem,std::allocator<DungeonClearItem>> *)
                               (in_stack_00000008 + 0x48),local_28);
    local_48 = *piVar2;
    local_44 = piVar2[1];
    iVar3 = piVar2[2];
    local_3c = piVar2[3];
    local_38 = piVar2[4];
    local_34 = piVar2[5];
    local_40 = iVar3;
    if (local_48 == in_stack_0000000c) {
      this = (CDataManager *)G_CDataManager();
      local_30 = (CItem *)CDataManager::find_item(this,iVar3);
      if (local_30 == (CItem *)0x0) {
        LogManager::logFormat
                  (1,"data_manager.cpp","IntPairVector Quest::get_clear_itemlist(int) const",0x1279,
                   "G_CDataManager()->find_item(%d)",local_40);
      }
      else {
        cVar1 = CItem::is_stackable(local_30);
        if (cVar1 == '\0') {
          local_2c = get_rand_int(100);
          if (local_2c <= local_38) {
            local_50 = local_40;
            local_4c = 1;
            std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                      ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_1,
                       (pair *)&local_50);
          }
        }
        else {
          local_24 = 0;
          for (local_20 = 0; local_20 < local_3c; local_20 = local_20 + 1) {
            local_2c = get_rand_int(100);
            if (local_2c <= local_38) {
              local_24 = local_24 + 1;
            }
          }
          if (0 < local_24) {
            local_50 = local_40;
            local_4c = local_24;
            std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                      ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_1,
                       (pair *)&local_50);
          }
        }
      }
    }
    local_28 = local_28 + 1;
  }
  return param_1;
}

```

---

## get_init_achievement_trigger

```asm
// === 08352fb4 Quest::get_init_achievement_trigger  [0x08352fb4-0x8353081] ===
 8352fb4:	55                   	push   %ebp
 8352fb5:	89 e5                	mov    %esp,%ebp
 8352fb7:	53                   	push   %ebx
 8352fb8:	83 ec 24             	sub    $0x24,%esp
 8352fbb:	8b 45 08             	mov    0x8(%ebp),%eax
 8352fbe:	8b 40 08             	mov    0x8(%eax),%eax
 8352fc1:	83 f8 07             	cmp    $0x7,%eax
 8352fc4:	74 0a                	je     8352fd0 <_ZNK5Quest28get_init_achievement_triggerERtS0_S0_+0x1c>
 8352fc6:	b8 00 00 00 00       	mov    $0x0,%eax
 8352fcb:	e9 ab 00 00 00       	jmp    835307b <_ZNK5Quest28get_init_achievement_triggerERtS0_S0_+0xc7>
 8352fd0:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 8352fd7:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8352fde:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8352fe5:	8b 45 0c             	mov    0xc(%ebp),%eax
 8352fe8:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8352feb:	8b 45 10             	mov    0x10(%ebp),%eax
 8352fee:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8352ff1:	8b 45 14             	mov    0x14(%ebp),%eax
 8352ff4:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8352ff7:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8352ffa:	66 c7 00 01 00       	movw   $0x1,(%eax)
 8352fff:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8353002:	66 c7 00 00 00       	movw   $0x0,(%eax)
 8353007:	8b 45 f0             	mov    -0x10(%ebp),%eax
 835300a:	66 c7 00 00 00       	movw   $0x0,(%eax)
 835300f:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8353016:	eb 28                	jmp    8353040 <_ZNK5Quest28get_init_achievement_triggerERtS0_S0_+0x8c>
 8353018:	8b 45 f4             	mov    -0xc(%ebp),%eax
 835301b:	8b 5c 85 e8          	mov    -0x18(%ebp,%eax,4),%ebx
 835301f:	8b 45 08             	mov    0x8(%ebp),%eax
 8353022:	8d 90 90 00 00 00    	lea    0x90(%eax),%edx
 8353028:	8b 45 f4             	mov    -0xc(%ebp),%eax
 835302b:	89 44 24 04          	mov    %eax,0x4(%esp)
 835302f:	89 14 24             	mov    %edx,(%esp)
 8353032:	e8 3d 75 d9 ff       	call   80ea574 <_ZNKSt6vectorIiSaIiEEixEj>
 8353037:	8b 00                	mov    (%eax),%eax
 8353039:	66 89 03             	mov    %ax,(%ebx)
 835303c:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8353040:	8b 45 08             	mov    0x8(%ebp),%eax
 8353043:	05 90 00 00 00       	add    $0x90,%eax
 8353048:	89 04 24             	mov    %eax,(%esp)
 835304b:	e8 70 b1 d3 ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 8353050:	83 f8 02             	cmp    $0x2,%eax
 8353053:	77 12                	ja     8353067 <_ZNK5Quest28get_init_achievement_triggerERtS0_S0_+0xb3>
 8353055:	8b 45 08             	mov    0x8(%ebp),%eax
 8353058:	05 90 00 00 00       	add    $0x90,%eax
 835305d:	89 04 24             	mov    %eax,(%esp)
 8353060:	e8 5b b1 d3 ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 8353065:	eb 05                	jmp    835306c <_ZNK5Quest28get_init_achievement_triggerERtS0_S0_+0xb8>
 8353067:	b8 03 00 00 00       	mov    $0x3,%eax
 835306c:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 835306f:	0f 97 c0             	seta   %al
 8353072:	84 c0                	test   %al,%al
 8353074:	75 a2                	jne    8353018 <_ZNK5Quest28get_init_achievement_triggerERtS0_S0_+0x64>
 8353076:	b8 01 00 00 00       	mov    $0x1,%eax
 835307b:	83 c4 24             	add    $0x24,%esp
 835307e:	5b                   	pop    %ebx
 835307f:	5d                   	pop    %ebp
 8353080:	c3                   	ret
 8353081:	90                   	nop

```

```c
// Quest::get_init_achievement_trigger @ 0x8352fb4

/* Quest::get_init_achievement_trigger(unsigned short&, unsigned short&, unsigned short&) const */

undefined4 __thiscall
Quest::get_init_achievement_trigger(Quest *this,ushort *param_1,ushort *param_2,ushort *param_3)

{
  ushort *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  ushort *local_1c [3];
  uint local_10;
  
  if (*(int *)(this + 8) == 7) {
    local_1c[0] = param_1;
    local_1c[1] = param_2;
    local_1c[2] = param_3;
    *param_1 = 1;
    *param_2 = 0;
    *param_3 = 0;
    local_10 = 0;
    while( true ) {
      uVar4 = std::vector<int,std::allocator<int>>::size
                        ((vector<int,std::allocator<int>> *)(this + 0x90));
      if (uVar4 < 3) {
        uVar4 = std::vector<int,std::allocator<int>>::size
                          ((vector<int,std::allocator<int>> *)(this + 0x90));
      }
      else {
        uVar4 = 3;
      }
      if (uVar4 <= local_10) break;
      puVar1 = local_1c[local_10];
      puVar3 = (undefined4 *)
               std::vector<int,std::allocator<int>>::operator[]
                         ((vector<int,std::allocator<int>> *)(this + 0x90),local_10);
      *puVar1 = (ushort)*puVar3;
      local_10 = local_10 + 1;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## get_init_trigger

```asm
// === 083530d6 Quest::get_init_trigger  [0x083530d6-0x8353341] ===
 83530d6:	55                   	push   %ebp
 83530d7:	89 e5                	mov    %esp,%ebp
 83530d9:	83 ec 68             	sub    $0x68,%esp
 83530dc:	8b 45 08             	mov    0x8(%ebp),%eax
 83530df:	8b 40 7c             	mov    0x7c(%eax),%eax
 83530e2:	83 f8 02             	cmp    $0x2,%eax
 83530e5:	74 0f                	je     83530f6 <_ZNK5Quest16get_init_triggerEv+0x20>
 83530e7:	8b 45 08             	mov    0x8(%ebp),%eax
 83530ea:	8b 40 7c             	mov    0x7c(%eax),%eax
 83530ed:	83 f8 06             	cmp    $0x6,%eax
 83530f0:	0f 85 a4 01 00 00    	jne    835329a <_ZNK5Quest16get_init_triggerEv+0x1c4>
 83530f6:	8b 45 08             	mov    0x8(%ebp),%eax
 83530f9:	8d 90 84 00 00 00    	lea    0x84(%eax),%edx
 83530ff:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8353102:	89 54 24 04          	mov    %edx,0x4(%esp)
 8353106:	89 04 24             	mov    %eax,(%esp)
 8353109:	e8 40 a2 d7 ff       	call   80cd34e <_ZNKSt6vectorIiSaIiEE5beginEv>
 835310e:	83 ec 04             	sub    $0x4,%esp
 8353111:	8b 45 08             	mov    0x8(%ebp),%eax
 8353114:	8d 90 84 00 00 00    	lea    0x84(%eax),%edx
 835311a:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 835311d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8353121:	89 04 24             	mov    %eax,(%esp)
 8353124:	e8 51 a2 d7 ff       	call   80cd37a <_ZNKSt6vectorIiSaIiEE3endEv>
 8353129:	83 ec 04             	sub    $0x4,%esp
 835312c:	c7 45 be 00 00 00 00 	movl   $0x0,-0x42(%ebp)
 8353133:	66 c7 45 c2 00 00    	movw   $0x0,-0x3e(%ebp)
 8353139:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8353140:	e9 f6 00 00 00       	jmp    835323b <_ZNK5Quest16get_init_triggerEv+0x165>
 8353145:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8353148:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 835314f:	00 
 8353150:	8d 55 c8             	lea    -0x38(%ebp),%edx
 8353153:	89 54 24 04          	mov    %edx,0x4(%esp)
 8353157:	89 04 24             	mov    %eax,(%esp)
 835315a:	e8 53 07 e4 ff       	call   81938b2 <_ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEppEi>
 835315f:	83 ec 04             	sub    $0x4,%esp
 8353162:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8353165:	89 04 24             	mov    %eax,(%esp)
 8353168:	e8 af 68 da ff       	call   80f9a1c <_ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEdeEv>
 835316d:	8b 00                	mov    (%eax),%eax
 835316f:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8353172:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8353175:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 835317c:	00 
 835317d:	8d 55 c8             	lea    -0x38(%ebp),%edx
 8353180:	89 54 24 04          	mov    %edx,0x4(%esp)
 8353184:	89 04 24             	mov    %eax,(%esp)
 8353187:	e8 26 07 e4 ff       	call   81938b2 <_ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEppEi>
 835318c:	83 ec 04             	sub    $0x4,%esp
 835318f:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8353192:	89 04 24             	mov    %eax,(%esp)
 8353195:	e8 82 68 da ff       	call   80f9a1c <_ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEdeEv>
 835319a:	8b 00                	mov    (%eax),%eax
 835319c:	89 45 e8             	mov    %eax,-0x18(%ebp)
 835319f:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 83531a2:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 83531a9:	00 
 83531aa:	8d 55 c8             	lea    -0x38(%ebp),%edx
 83531ad:	89 54 24 04          	mov    %edx,0x4(%esp)
 83531b1:	89 04 24             	mov    %eax,(%esp)
 83531b4:	e8 f9 06 e4 ff       	call   81938b2 <_ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEppEi>
 83531b9:	83 ec 04             	sub    $0x4,%esp
 83531bc:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 83531bf:	89 04 24             	mov    %eax,(%esp)
 83531c2:	e8 55 68 da ff       	call   80f9a1c <_ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEdeEv>
 83531c7:	8b 00                	mov    (%eax),%eax
 83531c9:	89 45 ec             	mov    %eax,-0x14(%ebp)
 83531cc:	8b 45 08             	mov    0x8(%ebp),%eax
 83531cf:	8b 40 7c             	mov    0x7c(%eax),%eax
 83531d2:	83 f8 06             	cmp    $0x6,%eax
 83531d5:	75 28                	jne    83531ff <_ZNK5Quest16get_init_triggerEv+0x129>
 83531d7:	8d 45 d8             	lea    -0x28(%ebp),%eax
 83531da:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 83531e1:	00 
 83531e2:	8d 55 c8             	lea    -0x38(%ebp),%edx
 83531e5:	89 54 24 04          	mov    %edx,0x4(%esp)
 83531e9:	89 04 24             	mov    %eax,(%esp)
 83531ec:	e8 c1 06 e4 ff       	call   81938b2 <_ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEppEi>
 83531f1:	83 ec 04             	sub    $0x4,%esp
 83531f4:	8d 45 d8             	lea    -0x28(%ebp),%eax
 83531f7:	89 04 24             	mov    %eax,(%esp)
 83531fa:	e8 1d 68 da ff       	call   80f9a1c <_ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEdeEv>
 83531ff:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8353202:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8353209:	00 
 835320a:	8d 55 c8             	lea    -0x38(%ebp),%edx
 835320d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8353211:	89 04 24             	mov    %eax,(%esp)
 8353214:	e8 99 06 e4 ff       	call   81938b2 <_ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEppEi>
 8353219:	83 ec 04             	sub    $0x4,%esp
 835321c:	8d 45 dc             	lea    -0x24(%ebp),%eax
 835321f:	89 04 24             	mov    %eax,(%esp)
 8353222:	e8 f5 67 da ff       	call   80f9a1c <_ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEdeEv>
 8353227:	8b 00                	mov    (%eax),%eax
 8353229:	89 45 f0             	mov    %eax,-0x10(%ebp)
 835322c:	8b 45 e0             	mov    -0x20(%ebp),%eax
 835322f:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8353232:	66 89 54 45 be       	mov    %dx,-0x42(%ebp,%eax,2)
 8353237:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 835323b:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 835323e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8353242:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8353245:	89 04 24             	mov    %eax,(%esp)
 8353248:	e8 d9 67 da ff       	call   80f9a26 <_ZN9__gnu_cxxneIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_>
 835324d:	84 c0                	test   %al,%al
 835324f:	0f 85 f0 fe ff ff    	jne    8353145 <_ZNK5Quest16get_init_triggerEv+0x6f>
 8353255:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8353258:	89 04 24             	mov    %eax,(%esp)
 835325b:	e8 4c ab 01 00       	call   836ddac <_ZN21stQuestTriggerState_tC1Ev>
 8353260:	0f b7 45 c2          	movzwl -0x3e(%ebp),%eax
 8353264:	0f bf c8             	movswl %ax,%ecx
 8353267:	0f b7 45 c0          	movzwl -0x40(%ebp),%eax
 835326b:	0f bf d0             	movswl %ax,%edx
 835326e:	0f b7 45 be          	movzwl -0x42(%ebp),%eax
 8353272:	98                   	cwtl
 8353273:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8353277:	89 54 24 08          	mov    %edx,0x8(%esp)
 835327b:	89 44 24 04          	mov    %eax,0x4(%esp)
 835327f:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8353282:	89 04 24             	mov    %eax,(%esp)
 8353285:	e8 56 aa 01 00       	call   836dce0 <_ZN21stQuestTriggerState_t10setTriggerEsss>
 835328a:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 835328d:	89 04 24             	mov    %eax,(%esp)
 8353290:	e8 d3 aa 01 00       	call   836dd68 <_ZN21stQuestTriggerState_t10getTriggerEv>
 8353295:	e9 a6 00 00 00       	jmp    8353340 <_ZNK5Quest16get_init_triggerEv+0x26a>
 835329a:	8b 45 08             	mov    0x8(%ebp),%eax
 835329d:	8b 40 7c             	mov    0x7c(%eax),%eax
 83532a0:	83 f8 19             	cmp    $0x19,%eax
 83532a3:	75 3b                	jne    83532e0 <_ZNK5Quest16get_init_triggerEv+0x20a>
 83532a5:	8d 45 ac             	lea    -0x54(%ebp),%eax
 83532a8:	89 04 24             	mov    %eax,(%esp)
 83532ab:	e8 fc aa 01 00       	call   836ddac <_ZN21stQuestTriggerState_tC1Ev>
 83532b0:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 83532b7:	00 
 83532b8:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 83532bf:	00 
 83532c0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 83532c7:	00 
 83532c8:	8d 45 ac             	lea    -0x54(%ebp),%eax
 83532cb:	89 04 24             	mov    %eax,(%esp)
 83532ce:	e8 0d aa 01 00       	call   836dce0 <_ZN21stQuestTriggerState_t10setTriggerEsss>
 83532d3:	8d 45 ac             	lea    -0x54(%ebp),%eax
 83532d6:	89 04 24             	mov    %eax,(%esp)
 83532d9:	e8 8a aa 01 00       	call   836dd68 <_ZN21stQuestTriggerState_t10getTriggerEv>
 83532de:	eb 60                	jmp    8353340 <_ZNK5Quest16get_init_triggerEv+0x26a>
 83532e0:	8b 45 08             	mov    0x8(%ebp),%eax
 83532e3:	8b 40 7c             	mov    0x7c(%eax),%eax
 83532e6:	83 f8 01             	cmp    $0x1,%eax
 83532e9:	75 50                	jne    835333b <_ZNK5Quest16get_init_triggerEv+0x265>
 83532eb:	8b 45 08             	mov    0x8(%ebp),%eax
 83532ee:	8b 80 80 00 00 00    	mov    0x80(%eax),%eax
 83532f4:	83 f8 06             	cmp    $0x6,%eax
 83532f7:	75 42                	jne    835333b <_ZNK5Quest16get_init_triggerEv+0x265>
 83532f9:	8b 45 08             	mov    0x8(%ebp),%eax
 83532fc:	05 84 00 00 00       	add    $0x84,%eax
 8353301:	89 04 24             	mov    %eax,(%esp)
 8353304:	e8 b7 ae d3 ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 8353309:	83 f8 03             	cmp    $0x3,%eax
 835330c:	0f 94 c0             	sete   %al
 835330f:	84 c0                	test   %al,%al
 8353311:	74 28                	je     835333b <_ZNK5Quest16get_init_triggerEv+0x265>
 8353313:	8b 45 08             	mov    0x8(%ebp),%eax
 8353316:	05 84 00 00 00       	add    $0x84,%eax
 835331b:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8353322:	00 
 8353323:	89 04 24             	mov    %eax,(%esp)
 8353326:	e8 cb 45 03 00       	call   83878f6 <_ZNKSt6vectorIiSaIiEE2atEj>
 835332b:	8b 00                	mov    (%eax),%eax
 835332d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8353330:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8353334:	7e 05                	jle    835333b <_ZNK5Quest16get_init_triggerEv+0x265>
 8353336:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8353339:	eb 05                	jmp    8353340 <_ZNK5Quest16get_init_triggerEv+0x26a>
 835333b:	b8 01 00 00 00       	mov    $0x1,%eax
 8353340:	c9                   	leave
 8353341:	c3                   	ret

```

```c
// Quest::get_init_trigger @ 0x83530d6

/* Quest::get_init_trigger() const */

int __thiscall Quest::get_init_trigger(Quest *this)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  stQuestTriggerState_t local_58 [8];
  stQuestTriggerState_t local_50 [10];
  short local_46 [3];
  __normal_iterator local_40 [4];
  undefined1 local_3c [4];
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_38 [4];
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_34 [4];
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_30 [4];
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_2c [4];
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_28 [4];
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if ((*(int *)(this + 0x7c) == 2) || (*(int *)(this + 0x7c) == 6)) {
    std::vector<int,std::allocator<int>>::begin();
    std::vector<int,std::allocator<int>>::end();
    local_46[0] = 0;
    local_46[1] = 0;
    local_46[2] = 0;
    local_24 = 0;
    while (bVar1 = __gnu_cxx::operator!=(local_3c,local_40), bVar1) {
      __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::operator++
                (local_38,(int)local_3c);
      puVar2 = (undefined4 *)
               __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
               operator*(local_38);
      local_20 = *puVar2;
      __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::operator++
                (local_34,(int)local_3c);
      puVar2 = (undefined4 *)
               __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
               operator*(local_34);
      local_1c = *puVar2;
      __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::operator++
                (local_30,(int)local_3c);
      puVar2 = (undefined4 *)
               __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
               operator*(local_30);
      local_18 = *puVar2;
      if (*(int *)(this + 0x7c) == 6) {
        __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::operator++
                  (local_2c,(int)local_3c);
        __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::operator*
                  (local_2c);
      }
      __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::operator++
                (local_28,(int)local_3c);
      puVar2 = (undefined4 *)
               __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
               operator*(local_28);
      local_14 = *puVar2;
      local_46[local_24] = (short)local_14;
      local_24 = local_24 + 1;
    }
    stQuestTriggerState_t::stQuestTriggerState_t(local_50);
    stQuestTriggerState_t::setTrigger(local_50,local_46[0],local_46[1],local_46[2]);
    iVar3 = stQuestTriggerState_t::getTrigger(local_50);
  }
  else if (*(int *)(this + 0x7c) == 0x19) {
    stQuestTriggerState_t::stQuestTriggerState_t(local_58);
    stQuestTriggerState_t::setTrigger(local_58,1,1,0);
    iVar3 = stQuestTriggerState_t::getTrigger(local_58);
  }
  else {
    if (((*(int *)(this + 0x7c) == 1) && (*(int *)(this + 0x80) == 6)) &&
       (iVar3 = std::vector<int,std::allocator<int>>::size
                          ((vector<int,std::allocator<int>> *)(this + 0x84)), iVar3 == 3)) {
      piVar4 = (int *)std::vector<int,std::allocator<int>>::at
                                ((vector<int,std::allocator<int>> *)(this + 0x84),2);
      if (0 < *piVar4) {
        return *piVar4;
      }
    }
    iVar3 = 1;
  }
  return iVar3;
}

```

---

## get_title_reward

```asm
// === 08353082 Quest::get_title_reward  [0x08353082-0x83530d5] ===
 8353082:	55                   	push   %ebp
 8353083:	89 e5                	mov    %esp,%ebp
 8353085:	83 ec 18             	sub    $0x18,%esp
 8353088:	8b 45 08             	mov    0x8(%ebp),%eax
 835308b:	8b 40 08             	mov    0x8(%eax),%eax
 835308e:	83 f8 07             	cmp    $0x7,%eax
 8353091:	74 07                	je     835309a <_ZNK5Quest16get_title_rewardEv+0x18>
 8353093:	b8 00 00 00 00       	mov    $0x0,%eax
 8353098:	eb 3a                	jmp    83530d4 <_ZNK5Quest16get_title_rewardEv+0x52>
 835309a:	8b 45 08             	mov    0x8(%ebp),%eax
 835309d:	05 c4 00 00 00       	add    $0xc4,%eax
 83530a2:	89 04 24             	mov    %eax,(%esp)
 83530a5:	e8 96 dd 03 00       	call   8390e40 <_ZNKSt6vectorI14RewardItemInfoSaIS0_EE4sizeEv>
 83530aa:	85 c0                	test   %eax,%eax
 83530ac:	0f 94 c0             	sete   %al
 83530af:	84 c0                	test   %al,%al
 83530b1:	74 07                	je     83530ba <_ZNK5Quest16get_title_rewardEv+0x38>
 83530b3:	b8 00 00 00 00       	mov    $0x0,%eax
 83530b8:	eb 1a                	jmp    83530d4 <_ZNK5Quest16get_title_rewardEv+0x52>
 83530ba:	8b 45 08             	mov    0x8(%ebp),%eax
 83530bd:	05 c4 00 00 00       	add    $0xc4,%eax
 83530c2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 83530c9:	00 
 83530ca:	89 04 24             	mov    %eax,(%esp)
 83530cd:	e8 8a dd 03 00       	call   8390e5c <_ZNKSt6vectorI14RewardItemInfoSaIS0_EEixEj>
 83530d2:	8b 00                	mov    (%eax),%eax
 83530d4:	c9                   	leave
 83530d5:	c3                   	ret

```

```c
// Quest::get_title_reward @ 0x8353082

/* Quest::get_title_reward() const */

undefined4 __thiscall Quest::get_title_reward(Quest *this)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (*(int *)(this + 8) == 7) {
    iVar2 = std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>::size
                      ((vector<RewardItemInfo,std::allocator<RewardItemInfo>> *)(this + 0xc4));
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      puVar3 = (undefined4 *)
               std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>::operator[]
                         ((vector<RewardItemInfo,std::allocator<RewardItemInfo>> *)(this + 0xc4),0);
      uVar1 = *puVar3;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## isRepeatableQuest

```asm
// === 08352bee Quest::isRepeatableQuest  [0x08352bee-0x8352c0f] ===
 8352bee:	55                   	push   %ebp
 8352bef:	89 e5                	mov    %esp,%ebp
 8352bf1:	8b 45 08             	mov    0x8(%ebp),%eax
 8352bf4:	8b 40 08             	mov    0x8(%eax),%eax
 8352bf7:	83 f8 04             	cmp    $0x4,%eax
 8352bfa:	74 05                	je     8352c01 <_ZNK5Quest17isRepeatableQuestEv+0x13>
 8352bfc:	83 f8 08             	cmp    $0x8,%eax
 8352bff:	75 07                	jne    8352c08 <_ZNK5Quest17isRepeatableQuestEv+0x1a>
 8352c01:	b8 01 00 00 00       	mov    $0x1,%eax
 8352c06:	eb 05                	jmp    8352c0d <_ZNK5Quest17isRepeatableQuestEv+0x1f>
 8352c08:	b8 00 00 00 00       	mov    $0x0,%eax
 8352c0d:	5d                   	pop    %ebp
 8352c0e:	c3                   	ret
 8352c0f:	90                   	nop

```

```c
// Quest::isRepeatableQuest @ 0x8352bee

/* Quest::isRepeatableQuest() const */

undefined4 __thiscall Quest::isRepeatableQuest(Quest *this)

{
  undefined4 uVar1;
  
  if ((*(int *)(this + 8) == 4) || (*(int *)(this + 8) == 8)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## set_quest

```asm
// === 0835233e Quest::set_quest  [0x0835233e-0x8352a5b] ===
 835233e:	55                   	push   %ebp
 835233f:	89 e5                	mov    %esp,%ebp
 8352341:	83 ec 68             	sub    $0x68,%esp
 8352344:	8b 45 0c             	mov    0xc(%ebp),%eax
 8352347:	8d 50 04             	lea    0x4(%eax),%edx
 835234a:	8b 45 08             	mov    0x8(%ebp),%eax
 835234d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8352351:	89 04 24             	mov    %eax,(%esp)
 8352354:	e8 a7 59 3b 00       	call   8707d00 <_ZNSsaSERKSs>
 8352359:	8b 45 0c             	mov    0xc(%ebp),%eax
 835235c:	8b 10                	mov    (%eax),%edx
 835235e:	8b 45 08             	mov    0x8(%ebp),%eax
 8352361:	89 50 04             	mov    %edx,0x4(%eax)
 8352364:	8b 45 0c             	mov    0xc(%ebp),%eax
 8352367:	8b 90 d4 00 00 00    	mov    0xd4(%eax),%edx
 835236d:	8b 45 08             	mov    0x8(%ebp),%eax
 8352370:	89 50 08             	mov    %edx,0x8(%eax)
 8352373:	8b 45 0c             	mov    0xc(%ebp),%eax
 8352376:	8b 90 e4 00 00 00    	mov    0xe4(%eax),%edx
 835237c:	8b 45 08             	mov    0x8(%ebp),%eax
 835237f:	89 50 0c             	mov    %edx,0xc(%eax)
 8352382:	8b 45 0c             	mov    0xc(%ebp),%eax
 8352385:	8d 90 f4 00 00 00    	lea    0xf4(%eax),%edx
 835238b:	8b 45 08             	mov    0x8(%ebp),%eax
 835238e:	83 c0 10             	add    $0x10,%eax
 8352391:	89 54 24 04          	mov    %edx,0x4(%esp)
 8352395:	89 04 24             	mov    %eax,(%esp)
 8352398:	e8 df db 03 00       	call   838ff7c <_ZNSt6vectorI24stQuestTargetCharacter_tSaIS0_EEaSERKS2_>
 835239d:	8b 45 0c             	mov    0xc(%ebp),%eax
 83523a0:	8b 90 dc 00 00 00    	mov    0xdc(%eax),%edx
 83523a6:	8b 45 08             	mov    0x8(%ebp),%eax
 83523a9:	89 50 1c             	mov    %edx,0x1c(%eax)
 83523ac:	8b 45 0c             	mov    0xc(%ebp),%eax
 83523af:	8b 90 24 01 00 00    	mov    0x124(%eax),%edx
 83523b5:	8b 45 08             	mov    0x8(%ebp),%eax
 83523b8:	89 50 28             	mov    %edx,0x28(%eax)
 83523bb:	8b 45 0c             	mov    0xc(%ebp),%eax
 83523be:	8b 90 00 01 00 00    	mov    0x100(%eax),%edx
 83523c4:	8b 45 08             	mov    0x8(%ebp),%eax
 83523c7:	89 50 20             	mov    %edx,0x20(%eax)
 83523ca:	8b 45 0c             	mov    0xc(%ebp),%eax
 83523cd:	8b 90 04 01 00 00    	mov    0x104(%eax),%edx
 83523d3:	8b 45 08             	mov    0x8(%ebp),%eax
 83523d6:	89 50 24             	mov    %edx,0x24(%eax)
 83523d9:	8b 45 0c             	mov    0xc(%ebp),%eax
 83523dc:	8d 90 0c 01 00 00    	lea    0x10c(%eax),%edx
 83523e2:	8b 45 08             	mov    0x8(%ebp),%eax
 83523e5:	83 c0 2c             	add    $0x2c,%eax
 83523e8:	89 54 24 04          	mov    %edx,0x4(%esp)
 83523ec:	89 04 24             	mov    %eax,(%esp)
 83523ef:	e8 ea c3 03 00       	call   838e7de <_ZNSt6vectorIS_IiSaIiEESaIS1_EEaSERKS3_>
 83523f4:	8b 45 0c             	mov    0xc(%ebp),%eax
 83523f7:	8d 90 18 01 00 00    	lea    0x118(%eax),%edx
 83523fd:	8b 45 08             	mov    0x8(%ebp),%eax
 8352400:	83 c0 38             	add    $0x38,%eax
 8352403:	89 54 24 04          	mov    %edx,0x4(%esp)
 8352407:	89 04 24             	mov    %eax,(%esp)
 835240a:	e8 c3 ab d7 ff       	call   80ccfd2 <_ZNSt6vectorIiSaIiEEaSERKS1_>
 835240f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8352412:	0f b6 90 30 01 00 00 	movzbl 0x130(%eax),%edx
 8352419:	8b 45 08             	mov    0x8(%ebp),%eax
 835241c:	88 50 44             	mov    %dl,0x44(%eax)
 835241f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8352422:	8d 90 38 01 00 00    	lea    0x138(%eax),%edx
 8352428:	8b 45 08             	mov    0x8(%ebp),%eax
 835242b:	83 c0 48             	add    $0x48,%eax
 835242e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8352432:	89 04 24             	mov    %eax,(%esp)
 8352435:	e8 b4 dd 03 00       	call   83901ee <_ZNSt6vectorI16DungeonClearItemSaIS0_EEaSERKS2_>
 835243a:	8b 45 0c             	mov    0xc(%ebp),%eax
 835243d:	8d 90 44 01 00 00    	lea    0x144(%eax),%edx
 8352443:	8b 45 08             	mov    0x8(%ebp),%eax
 8352446:	83 c0 54             	add    $0x54,%eax
 8352449:	89 54 24 04          	mov    %edx,0x4(%esp)
 835244d:	89 04 24             	mov    %eax,(%esp)
 8352450:	e8 0b e0 03 00       	call   8390460 <_ZNSt6vectorI15MonsterKillItemSaIS0_EEaSERKS2_>
 8352455:	8b 45 08             	mov    0x8(%ebp),%eax
 8352458:	8b 55 0c             	mov    0xc(%ebp),%edx
 835245b:	8b 8a 50 01 00 00    	mov    0x150(%edx),%ecx
 8352461:	89 48 60             	mov    %ecx,0x60(%eax)
 8352464:	8b 8a 54 01 00 00    	mov    0x154(%edx),%ecx
 835246a:	89 48 64             	mov    %ecx,0x64(%eax)
 835246d:	8b 8a 58 01 00 00    	mov    0x158(%edx),%ecx
 8352473:	89 48 68             	mov    %ecx,0x68(%eax)
 8352476:	8b 92 5c 01 00 00    	mov    0x15c(%edx),%edx
 835247c:	89 50 6c             	mov    %edx,0x6c(%eax)
 835247f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8352482:	8d 90 60 01 00 00    	lea    0x160(%eax),%edx
 8352488:	8b 45 08             	mov    0x8(%ebp),%eax
 835248b:	83 c0 70             	add    $0x70,%eax
 835248e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8352492:	89 04 24             	mov    %eax,(%esp)
 8352495:	e8 f2 cb fb ff       	call   830f08c <_ZNSt6vectorISt4pairIiiESaIS1_EEaSERKS3_>
 835249a:	8b 45 0c             	mov    0xc(%ebp),%eax
 835249d:	8b 90 78 01 00 00    	mov    0x178(%eax),%edx
 83524a3:	8b 45 08             	mov    0x8(%ebp),%eax
 83524a6:	89 50 7c             	mov    %edx,0x7c(%eax)
 83524a9:	8b 45 0c             	mov    0xc(%ebp),%eax
 83524ac:	8b 90 7c 01 00 00    	mov    0x17c(%eax),%edx
 83524b2:	8b 45 08             	mov    0x8(%ebp),%eax
 83524b5:	89 90 80 00 00 00    	mov    %edx,0x80(%eax)
 83524bb:	8b 45 0c             	mov    0xc(%ebp),%eax
 83524be:	8d 90 80 01 00 00    	lea    0x180(%eax),%edx
 83524c4:	8b 45 08             	mov    0x8(%ebp),%eax
 83524c7:	05 84 00 00 00       	add    $0x84,%eax
 83524cc:	89 54 24 04          	mov    %edx,0x4(%esp)
 83524d0:	89 04 24             	mov    %eax,(%esp)
 83524d3:	e8 fa aa d7 ff       	call   80ccfd2 <_ZNSt6vectorIiSaIiEEaSERKS1_>
 83524d8:	8b 45 0c             	mov    0xc(%ebp),%eax
 83524db:	8d 90 b0 01 00 00    	lea    0x1b0(%eax),%edx
 83524e1:	8b 45 08             	mov    0x8(%ebp),%eax
 83524e4:	05 90 00 00 00       	add    $0x90,%eax
 83524e9:	89 54 24 04          	mov    %edx,0x4(%esp)
 83524ed:	89 04 24             	mov    %eax,(%esp)
 83524f0:	e8 dd aa d7 ff       	call   80ccfd2 <_ZNSt6vectorIiSaIiEEaSERKS1_>
 83524f5:	8b 45 0c             	mov    0xc(%ebp),%eax
 83524f8:	8d 90 98 02 00 00    	lea    0x298(%eax),%edx
 83524fe:	8b 45 08             	mov    0x8(%ebp),%eax
 8352501:	05 9c 00 00 00       	add    $0x9c,%eax
 8352506:	89 54 24 04          	mov    %edx,0x4(%esp)
 835250a:	89 04 24             	mov    %eax,(%esp)
 835250d:	e8 6c 81 02 00       	call   837a67e <_ZN12PostalRewardaSERKS_>
 8352512:	8b 45 0c             	mov    0xc(%ebp),%eax
 8352515:	0f b6 90 2e 02 00 00 	movzbl 0x22e(%eax),%edx
 835251c:	8b 45 08             	mov    0x8(%ebp),%eax
 835251f:	88 90 01 01 00 00    	mov    %dl,0x101(%eax)
 8352525:	8b 45 0c             	mov    0xc(%ebp),%eax
 8352528:	0f b6 90 08 01 00 00 	movzbl 0x108(%eax),%edx
 835252f:	8b 45 08             	mov    0x8(%ebp),%eax
 8352532:	88 90 30 01 00 00    	mov    %dl,0x130(%eax)
 8352538:	8b 45 08             	mov    0x8(%ebp),%eax
 835253b:	8b 40 7c             	mov    0x7c(%eax),%eax
 835253e:	85 c0                	test   %eax,%eax
 8352540:	0f 85 54 01 00 00    	jne    835269a <_ZN5Quest9set_questE11QuestScript+0x35c>
 8352546:	8b 45 08             	mov    0x8(%ebp),%eax
 8352549:	8d 90 84 00 00 00    	lea    0x84(%eax),%edx
 835254f:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8352552:	89 54 24 04          	mov    %edx,0x4(%esp)
 8352556:	89 04 24             	mov    %eax,(%esp)
 8352559:	e8 ea bc d3 ff       	call   808e248 <_ZNSt6vectorIiSaIiEE5beginEv>
 835255e:	83 ec 04             	sub    $0x4,%esp
 8352561:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8352564:	89 04 24             	mov    %eax,(%esp)
 8352567:	e8 22 37 e6 ff       	call   81b5c8e <_ZNSt4pairIiiEC1Ev>
 835256c:	e9 ef 00 00 00       	jmp    8352660 <_ZN5Quest9set_questE11QuestScript+0x322>
 8352571:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8352574:	89 04 24             	mov    %eax,(%esp)
 8352577:	e8 50 c2 d3 ff       	call   808e7cc <_ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv>
 835257c:	8b 00                	mov    (%eax),%eax
 835257e:	89 45 b8             	mov    %eax,-0x48(%ebp)
 8352581:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8352584:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 835258b:	00 
 835258c:	8d 55 c0             	lea    -0x40(%ebp),%edx
 835258f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8352593:	89 04 24             	mov    %eax,(%esp)
 8352596:	e8 6b f3 fe ff       	call   8341906 <_ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEi>
 835259b:	83 ec 04             	sub    $0x4,%esp
 835259e:	8b 45 08             	mov    0x8(%ebp),%eax
 83525a1:	8d 90 84 00 00 00    	lea    0x84(%eax),%edx
 83525a7:	8d 45 cc             	lea    -0x34(%ebp),%eax
 83525aa:	89 54 24 04          	mov    %edx,0x4(%esp)
 83525ae:	89 04 24             	mov    %eax,(%esp)
 83525b1:	e8 b6 bc d3 ff       	call   808e26c <_ZNSt6vectorIiSaIiEE3endEv>
 83525b6:	83 ec 04             	sub    $0x4,%esp
 83525b9:	8d 45 cc             	lea    -0x34(%ebp),%eax
 83525bc:	89 44 24 04          	mov    %eax,0x4(%esp)
 83525c0:	8d 45 c0             	lea    -0x40(%ebp),%eax
 83525c3:	89 04 24             	mov    %eax,(%esp)
 83525c6:	e8 0f 63 f1 ff       	call   82688da <_ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_>
 83525cb:	84 c0                	test   %al,%al
 83525cd:	74 4c                	je     835261b <_ZN5Quest9set_questE11QuestScript+0x2dd>
 83525cf:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 83525d6:	00 
 83525d7:	c7 44 24 08 9d 10 00 	movl   $0x109d,0x8(%esp)
 83525de:	00 
 83525df:	c7 44 24 04 a0 46 c3 	movl   $0x8c346a0,0x4(%esp)
 83525e6:	08 
 83525e7:	8d 45 d0             	lea    -0x30(%ebp),%eax
 83525ea:	89 04 24             	mov    %eax,(%esp)
 83525ed:	e8 26 d1 1f 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 83525f2:	c7 44 24 0c 9d 10 00 	movl   $0x109d,0xc(%esp)
 83525f9:	00 
 83525fa:	c7 44 24 08 a0 46 c3 	movl   $0x8c346a0,0x8(%esp)
 8352601:	08 
 8352602:	c7 44 24 04 18 01 c3 	movl   $0x8c30118,0x4(%esp)
 8352609:	08 
 835260a:	8d 45 d0             	lea    -0x30(%ebp),%eax
 835260d:	89 04 24             	mov    %eax,(%esp)
 8352610:	e8 73 d1 1f 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8352615:	90                   	nop
 8352616:	e9 a5 01 00 00       	jmp    83527c0 <_ZN5Quest9set_questE11QuestScript+0x482>
 835261b:	8d 45 c0             	lea    -0x40(%ebp),%eax
 835261e:	89 04 24             	mov    %eax,(%esp)
 8352621:	e8 a6 c1 d3 ff       	call   808e7cc <_ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv>
 8352626:	8b 00                	mov    (%eax),%eax
 8352628:	89 45 bc             	mov    %eax,-0x44(%ebp)
 835262b:	8d 45 e0             	lea    -0x20(%ebp),%eax
 835262e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8352635:	00 
 8352636:	8d 55 c0             	lea    -0x40(%ebp),%edx
 8352639:	89 54 24 04          	mov    %edx,0x4(%esp)
 835263d:	89 04 24             	mov    %eax,(%esp)
 8352640:	e8 c1 f2 fe ff       	call   8341906 <_ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEi>
 8352645:	83 ec 04             	sub    $0x4,%esp
 8352648:	8b 45 08             	mov    0x8(%ebp),%eax
 835264b:	8d 90 ac 00 00 00    	lea    0xac(%eax),%edx
 8352651:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8352654:	89 44 24 04          	mov    %eax,0x4(%esp)
 8352658:	89 14 24             	mov    %edx,(%esp)
 835265b:	e8 10 d4 fb ff       	call   830fa70 <_ZNSt6vectorISt4pairIiiESaIS1_EE9push_backERKS1_>
 8352660:	8b 45 08             	mov    0x8(%ebp),%eax
 8352663:	8d 90 84 00 00 00    	lea    0x84(%eax),%edx
 8352669:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 835266c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8352670:	89 04 24             	mov    %eax,(%esp)
 8352673:	e8 f4 bb d3 ff       	call   808e26c <_ZNSt6vectorIiSaIiEE3endEv>
 8352678:	83 ec 04             	sub    $0x4,%esp
 835267b:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 835267e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8352682:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8352685:	89 04 24             	mov    %eax,(%esp)
 8352688:	e8 d5 7d d9 ff       	call   80ea462 <_ZN9__gnu_cxxneIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_>
 835268d:	84 c0                	test   %al,%al
 835268f:	0f 85 dc fe ff ff    	jne    8352571 <_ZN5Quest9set_questE11QuestScript+0x233>
 8352695:	e9 26 01 00 00       	jmp    83527c0 <_ZN5Quest9set_questE11QuestScript+0x482>
 835269a:	8b 45 08             	mov    0x8(%ebp),%eax
 835269d:	8b 40 7c             	mov    0x7c(%eax),%eax
 83526a0:	83 f8 19             	cmp    $0x19,%eax
 83526a3:	0f 85 17 01 00 00    	jne    83527c0 <_ZN5Quest9set_questE11QuestScript+0x482>
 83526a9:	8b 45 08             	mov    0x8(%ebp),%eax
 83526ac:	05 ac 00 00 00       	add    $0xac,%eax
 83526b1:	89 04 24             	mov    %eax,(%esp)
 83526b4:	e8 89 7c e2 ff       	call   817a342 <_ZNSt6vectorISt4pairIiiESaIS1_EE5clearEv>
 83526b9:	8d 45 b0             	lea    -0x50(%ebp),%eax
 83526bc:	89 04 24             	mov    %eax,(%esp)
 83526bf:	e8 ca 35 e6 ff       	call   81b5c8e <_ZNSt4pairIiiEC1Ev>
 83526c4:	8b 45 08             	mov    0x8(%ebp),%eax
 83526c7:	05 84 00 00 00       	add    $0x84,%eax
 83526cc:	89 04 24             	mov    %eax,(%esp)
 83526cf:	e8 ec ba d3 ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 83526d4:	d1 e8                	shr    $1,%eax
 83526d6:	89 45 f0             	mov    %eax,-0x10(%ebp)
 83526d9:	8b 45 08             	mov    0x8(%ebp),%eax
 83526dc:	8d 90 84 00 00 00    	lea    0x84(%eax),%edx
 83526e2:	8d 45 ac             	lea    -0x54(%ebp),%eax
 83526e5:	89 54 24 04          	mov    %edx,0x4(%esp)
 83526e9:	89 04 24             	mov    %eax,(%esp)
 83526ec:	e8 57 bb d3 ff       	call   808e248 <_ZNSt6vectorIiSaIiEE5beginEv>
 83526f1:	83 ec 04             	sub    $0x4,%esp
 83526f4:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 83526fb:	eb 76                	jmp    8352773 <_ZN5Quest9set_questE11QuestScript+0x435>
 83526fd:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8352700:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8352707:	00 
 8352708:	8d 55 ac             	lea    -0x54(%ebp),%edx
 835270b:	89 54 24 04          	mov    %edx,0x4(%esp)
 835270f:	89 04 24             	mov    %eax,(%esp)
 8352712:	e8 ef f1 fe ff       	call   8341906 <_ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEi>
 8352717:	83 ec 04             	sub    $0x4,%esp
 835271a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 835271d:	89 04 24             	mov    %eax,(%esp)
 8352720:	e8 a7 c0 d3 ff       	call   808e7cc <_ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv>
 8352725:	8b 00                	mov    (%eax),%eax
 8352727:	89 45 b0             	mov    %eax,-0x50(%ebp)
 835272a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 835272d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8352734:	00 
 8352735:	8d 55 ac             	lea    -0x54(%ebp),%edx
 8352738:	89 54 24 04          	mov    %edx,0x4(%esp)
 835273c:	89 04 24             	mov    %eax,(%esp)
 835273f:	e8 c2 f1 fe ff       	call   8341906 <_ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEi>
 8352744:	83 ec 04             	sub    $0x4,%esp
 8352747:	8d 45 ec             	lea    -0x14(%ebp),%eax
 835274a:	89 04 24             	mov    %eax,(%esp)
 835274d:	e8 7a c0 d3 ff       	call   808e7cc <_ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv>
 8352752:	8b 00                	mov    (%eax),%eax
 8352754:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 8352757:	8b 45 08             	mov    0x8(%ebp),%eax
 835275a:	8d 90 ac 00 00 00    	lea    0xac(%eax),%edx
 8352760:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8352763:	89 44 24 04          	mov    %eax,0x4(%esp)
 8352767:	89 14 24             	mov    %edx,(%esp)
 835276a:	e8 01 d3 fb ff       	call   830fa70 <_ZNSt6vectorISt4pairIiiESaIS1_EE9push_backERKS1_>
 835276f:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8352773:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8352776:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 8352779:	7d 38                	jge    83527b3 <_ZN5Quest9set_questE11QuestScript+0x475>
 835277b:	8b 45 08             	mov    0x8(%ebp),%eax
 835277e:	8d 90 84 00 00 00    	lea    0x84(%eax),%edx
 8352784:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8352787:	89 54 24 04          	mov    %edx,0x4(%esp)
 835278b:	89 04 24             	mov    %eax,(%esp)
 835278e:	e8 d9 ba d3 ff       	call   808e26c <_ZNSt6vectorIiSaIiEE3endEv>
 8352793:	83 ec 04             	sub    $0x4,%esp
 8352796:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8352799:	89 44 24 04          	mov    %eax,0x4(%esp)
 835279d:	8d 45 ac             	lea    -0x54(%ebp),%eax
 83527a0:	89 04 24             	mov    %eax,(%esp)
 83527a3:	e8 ba 7c d9 ff       	call   80ea462 <_ZN9__gnu_cxxneIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_>
 83527a8:	84 c0                	test   %al,%al
 83527aa:	74 07                	je     83527b3 <_ZN5Quest9set_questE11QuestScript+0x475>
 83527ac:	b8 01 00 00 00       	mov    $0x1,%eax
 83527b1:	eb 05                	jmp    83527b8 <_ZN5Quest9set_questE11QuestScript+0x47a>
 83527b3:	b8 00 00 00 00       	mov    $0x0,%eax
 83527b8:	84 c0                	test   %al,%al
 83527ba:	0f 85 3d ff ff ff    	jne    83526fd <_ZN5Quest9set_questE11QuestScript+0x3bf>
 83527c0:	8b 45 08             	mov    0x8(%ebp),%eax
 83527c3:	05 dc 00 00 00       	add    $0xdc,%eax
 83527c8:	89 04 24             	mov    %eax,(%esp)
 83527cb:	e8 9e 43 d4 ff       	call   8096b6e <_ZNSt6vectorIiSaIiEE5clearEv>
 83527d0:	8b 45 08             	mov    0x8(%ebp),%eax
 83527d3:	c7 80 e8 00 00 00 00 	movl   $0x0,0xe8(%eax)
 83527da:	00 00 00 
 83527dd:	8b 45 08             	mov    0x8(%ebp),%eax
 83527e0:	05 ec 00 00 00       	add    $0xec,%eax
 83527e5:	89 04 24             	mov    %eax,(%esp)
 83527e8:	e8 55 0d 03 00       	call   8383542 <_ZNSt6vectorI14RewardItemInfoSaIS0_EE5clearEv>
 83527ed:	8b 45 0c             	mov    0xc(%ebp),%eax
 83527f0:	8b 90 d4 01 00 00    	mov    0x1d4(%eax),%edx
 83527f6:	8b 45 08             	mov    0x8(%ebp),%eax
 83527f9:	89 90 b8 00 00 00    	mov    %edx,0xb8(%eax)
 83527ff:	8b 45 0c             	mov    0xc(%ebp),%eax
 8352802:	8b 90 e4 01 00 00    	mov    0x1e4(%eax),%edx
 8352808:	8b 45 08             	mov    0x8(%ebp),%eax
 835280b:	89 90 c0 00 00 00    	mov    %edx,0xc0(%eax)
 8352811:	8b 45 0c             	mov    0xc(%ebp),%eax
 8352814:	8b 90 28 02 00 00    	mov    0x228(%eax),%edx
 835281a:	8b 45 08             	mov    0x8(%ebp),%eax
 835281d:	89 90 bc 00 00 00    	mov    %edx,0xbc(%eax)
 8352823:	8b 45 08             	mov    0x8(%ebp),%eax
 8352826:	8b 80 b8 00 00 00    	mov    0xb8(%eax),%eax
 835282c:	85 c0                	test   %eax,%eax
 835282e:	74 12                	je     8352842 <_ZN5Quest9set_questE11QuestScript+0x504>
 8352830:	8b 45 08             	mov    0x8(%ebp),%eax
 8352833:	8b 80 b8 00 00 00    	mov    0xb8(%eax),%eax
 8352839:	83 f8 19             	cmp    $0x19,%eax
 835283c:	0f 85 86 00 00 00    	jne    83528c8 <_ZN5Quest9set_questE11QuestScript+0x58a>
 8352842:	8b 45 0c             	mov    0xc(%ebp),%eax
 8352845:	8d 90 d8 01 00 00    	lea    0x1d8(%eax),%edx
 835284b:	8b 45 08             	mov    0x8(%ebp),%eax
 835284e:	05 c4 00 00 00       	add    $0xc4,%eax
 8352853:	89 54 24 04          	mov    %edx,0x4(%esp)
 8352857:	89 04 24             	mov    %eax,(%esp)
 835285a:	e8 4f de 03 00       	call   83906ae <_ZNSt6vectorI14RewardItemInfoSaIS0_EEaSERKS2_>
 835285f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8352862:	8d 90 e8 01 00 00    	lea    0x1e8(%eax),%edx
 8352868:	8b 45 08             	mov    0x8(%ebp),%eax
 835286b:	05 d0 00 00 00       	add    $0xd0,%eax
 8352870:	89 54 24 04          	mov    %edx,0x4(%esp)
 8352874:	89 04 24             	mov    %eax,(%esp)
 8352877:	e8 32 de 03 00       	call   83906ae <_ZNSt6vectorI14RewardItemInfoSaIS0_EEaSERKS2_>
 835287c:	8b 45 0c             	mov    0xc(%ebp),%eax
 835287f:	8d 90 0c 02 00 00    	lea    0x20c(%eax),%edx
 8352885:	8b 45 08             	mov    0x8(%ebp),%eax
 8352888:	05 dc 00 00 00       	add    $0xdc,%eax
 835288d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8352891:	89 04 24             	mov    %eax,(%esp)
 8352894:	e8 39 a7 d7 ff       	call   80ccfd2 <_ZNSt6vectorIiSaIiEEaSERKS1_>
 8352899:	8b 45 0c             	mov    0xc(%ebp),%eax
 835289c:	8b 90 18 02 00 00    	mov    0x218(%eax),%edx
 83528a2:	8b 45 08             	mov    0x8(%ebp),%eax
 83528a5:	89 90 e8 00 00 00    	mov    %edx,0xe8(%eax)
 83528ab:	8b 45 08             	mov    0x8(%ebp),%eax
 83528ae:	8d 90 ec 00 00 00    	lea    0xec(%eax),%edx
 83528b4:	8b 45 0c             	mov    0xc(%ebp),%eax
 83528b7:	05 1c 02 00 00       	add    $0x21c,%eax
 83528bc:	89 54 24 04          	mov    %edx,0x4(%esp)
 83528c0:	89 04 24             	mov    %eax,(%esp)
 83528c3:	e8 3b f9 ff ff       	call   8352203 <_Z18makeRewardItemInfoRKSt6vectorIiSaIiEERS_I14RewardItemInfoSaIS4_EE>
 83528c8:	8b 45 0c             	mov    0xc(%ebp),%eax
 83528cb:	8b 90 28 01 00 00    	mov    0x128(%eax),%edx
 83528d1:	8b 45 08             	mov    0x8(%ebp),%eax
 83528d4:	89 90 f8 00 00 00    	mov    %edx,0xf8(%eax)
 83528da:	8b 45 0c             	mov    0xc(%ebp),%eax
 83528dd:	8b 90 2c 01 00 00    	mov    0x12c(%eax),%edx
 83528e3:	8b 45 08             	mov    0x8(%ebp),%eax
 83528e6:	89 90 fc 00 00 00    	mov    %edx,0xfc(%eax)
 83528ec:	8b 45 0c             	mov    0xc(%ebp),%eax
 83528ef:	0f b6 90 2d 02 00 00 	movzbl 0x22d(%eax),%edx
 83528f6:	8b 45 08             	mov    0x8(%ebp),%eax
 83528f9:	88 90 00 01 00 00    	mov    %dl,0x100(%eax)
 83528ff:	8b 45 0c             	mov    0xc(%ebp),%eax
 8352902:	0f b6 90 3d 02 00 00 	movzbl 0x23d(%eax),%edx
 8352909:	8b 45 08             	mov    0x8(%ebp),%eax
 835290c:	88 90 02 01 00 00    	mov    %dl,0x102(%eax)
 8352912:	8b 45 0c             	mov    0xc(%ebp),%eax
 8352915:	8b 90 40 02 00 00    	mov    0x240(%eax),%edx
 835291b:	8b 45 08             	mov    0x8(%ebp),%eax
 835291e:	89 90 04 01 00 00    	mov    %edx,0x104(%eax)
 8352924:	8b 45 0c             	mov    0xc(%ebp),%eax
 8352927:	0f b6 90 58 02 00 00 	movzbl 0x258(%eax),%edx
 835292e:	8b 45 08             	mov    0x8(%ebp),%eax
 8352931:	88 90 08 01 00 00    	mov    %dl,0x108(%eax)
 8352937:	8b 45 0c             	mov    0xc(%ebp),%eax
 835293a:	8d 90 5c 02 00 00    	lea    0x25c(%eax),%edx
 8352940:	8b 45 08             	mov    0x8(%ebp),%eax
 8352943:	05 0c 01 00 00       	add    $0x10c,%eax
 8352948:	89 54 24 04          	mov    %edx,0x4(%esp)
 835294c:	89 04 24             	mov    %eax,(%esp)
 835294f:	e8 ac 53 3b 00       	call   8707d00 <_ZNSsaSERKSs>
 8352954:	8b 45 0c             	mov    0xc(%ebp),%eax
 8352957:	8d 90 60 02 00 00    	lea    0x260(%eax),%edx
 835295d:	8b 45 08             	mov    0x8(%ebp),%eax
 8352960:	05 10 01 00 00       	add    $0x110,%eax
 8352965:	89 54 24 04          	mov    %edx,0x4(%esp)
 8352969:	89 04 24             	mov    %eax,(%esp)
 835296c:	e8 8f 53 3b 00       	call   8707d00 <_ZNSsaSERKSs>
 8352971:	8b 45 0c             	mov    0xc(%ebp),%eax
 8352974:	8d 90 64 02 00 00    	lea    0x264(%eax),%edx
 835297a:	8b 45 08             	mov    0x8(%ebp),%eax
 835297d:	05 14 01 00 00       	add    $0x114,%eax
 8352982:	89 54 24 04          	mov    %edx,0x4(%esp)
 8352986:	89 04 24             	mov    %eax,(%esp)
 8352989:	e8 44 a6 d7 ff       	call   80ccfd2 <_ZNSt6vectorIiSaIiEEaSERKS1_>
 835298e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8352991:	0f b6 90 70 02 00 00 	movzbl 0x270(%eax),%edx
 8352998:	8b 45 08             	mov    0x8(%ebp),%eax
 835299b:	88 90 20 01 00 00    	mov    %dl,0x120(%eax)
 83529a1:	8b 45 0c             	mov    0xc(%ebp),%eax
 83529a4:	8d 90 00 02 00 00    	lea    0x200(%eax),%edx
 83529aa:	8b 45 08             	mov    0x8(%ebp),%eax
 83529ad:	05 24 01 00 00       	add    $0x124,%eax
 83529b2:	89 54 24 04          	mov    %edx,0x4(%esp)
 83529b6:	89 04 24             	mov    %eax,(%esp)
 83529b9:	e8 3e df 03 00       	call   83908fc <_ZNSt6vectorI24dungeonEventHanaseStructSaIS0_EEaSERKS2_>
 83529be:	8b 45 0c             	mov    0xc(%ebp),%eax
 83529c1:	0f b6 90 72 02 00 00 	movzbl 0x272(%eax),%edx
 83529c8:	8b 45 08             	mov    0x8(%ebp),%eax
 83529cb:	88 90 31 01 00 00    	mov    %dl,0x131(%eax)
 83529d1:	8b 45 08             	mov    0x8(%ebp),%eax
 83529d4:	c7 80 34 01 00 00 00 	movl   $0x0,0x134(%eax)
 83529db:	00 00 00 
 83529de:	8b 45 0c             	mov    0xc(%ebp),%eax
 83529e1:	8b 90 d8 00 00 00    	mov    0xd8(%eax),%edx
 83529e7:	8b 45 08             	mov    0x8(%ebp),%eax
 83529ea:	89 90 34 01 00 00    	mov    %edx,0x134(%eax)
 83529f0:	8b 45 0c             	mov    0xc(%ebp),%eax
 83529f3:	0f b7 90 80 02 00 00 	movzwl 0x280(%eax),%edx
 83529fa:	8b 45 08             	mov    0x8(%ebp),%eax
 83529fd:	66 89 90 38 01 00 00 	mov    %dx,0x138(%eax)
 8352a04:	8b 45 0c             	mov    0xc(%ebp),%eax
 8352a07:	0f b7 90 82 02 00 00 	movzwl 0x282(%eax),%edx
 8352a0e:	8b 45 08             	mov    0x8(%ebp),%eax
 8352a11:	66 89 90 3a 01 00 00 	mov    %dx,0x13a(%eax)
 8352a18:	8b 45 0c             	mov    0xc(%ebp),%eax
 8352a1b:	8b 90 a8 02 00 00    	mov    0x2a8(%eax),%edx
 8352a21:	8b 45 08             	mov    0x8(%ebp),%eax
 8352a24:	89 90 3c 01 00 00    	mov    %edx,0x13c(%eax)
 8352a2a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8352a2d:	8b 90 ac 02 00 00    	mov    0x2ac(%eax),%edx
 8352a33:	8b 45 08             	mov    0x8(%ebp),%eax
 8352a36:	89 90 40 01 00 00    	mov    %edx,0x140(%eax)
 8352a3c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8352a3f:	8d 90 d0 02 00 00    	lea    0x2d0(%eax),%edx
 8352a45:	8b 45 08             	mov    0x8(%ebp),%eax
 8352a48:	05 44 01 00 00       	add    $0x144,%eax
 8352a4d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8352a51:	89 04 24             	mov    %eax,(%esp)
 8352a54:	e8 f5 e0 03 00       	call   8390b4e <_ZNSt6vectorI25ENUM_QUEST_EXCEPTION_TYPESaIS0_EEaSERKS2_>
 8352a59:	c9                   	leave
 8352a5a:	c3                   	ret
 8352a5b:	90                   	nop

```

```c
// Quest::set_quest @ 0x835233e

/* Quest::set_quest(QuestScript) */

void __thiscall Quest::set_quest(Quest *this,undefined4 *param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined1 local_58 [4];
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_44 [4];
  __normal_iterator local_40 [4];
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_3c [4];
  __normal_iterator local_38 [4];
  cMyTrace local_34 [16];
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_24 [4];
  __normal_iterator local_20 [4];
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_1c [4];
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_18 [4];
  uint local_14;
  int local_10;
  
  std::string::operator=((string *)this,(string *)(param_2 + 1));
  *(undefined4 *)(this + 4) = *param_2;
  *(undefined4 *)(this + 8) = param_2[0x35];
  *(undefined4 *)(this + 0xc) = param_2[0x39];
  std::vector<stQuestTargetCharacter_t,std::allocator<stQuestTargetCharacter_t>>::operator=
            ((vector<stQuestTargetCharacter_t,std::allocator<stQuestTargetCharacter_t>> *)
             (this + 0x10),(vector *)(param_2 + 0x3d));
  *(undefined4 *)(this + 0x1c) = param_2[0x37];
  *(undefined4 *)(this + 0x28) = param_2[0x49];
  *(undefined4 *)(this + 0x20) = param_2[0x40];
  *(undefined4 *)(this + 0x24) = param_2[0x41];
  std::
  vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
  ::operator=((vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
               *)(this + 0x2c),(vector *)(param_2 + 0x43));
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x38),(vector *)(param_2 + 0x46));
  this[0x44] = *(Quest *)(param_2 + 0x4c);
  std::vector<DungeonClearItem,std::allocator<DungeonClearItem>>::operator=
            ((vector<DungeonClearItem,std::allocator<DungeonClearItem>> *)(this + 0x48),
             (vector *)(param_2 + 0x4e));
  std::vector<MonsterKillItem,std::allocator<MonsterKillItem>>::operator=
            ((vector<MonsterKillItem,std::allocator<MonsterKillItem>> *)(this + 0x54),
             (vector *)(param_2 + 0x51));
  *(undefined4 *)(this + 0x60) = param_2[0x54];
  *(undefined4 *)(this + 100) = param_2[0x55];
  *(undefined4 *)(this + 0x68) = param_2[0x56];
  *(undefined4 *)(this + 0x6c) = param_2[0x57];
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator=
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x70),
             (vector *)(param_2 + 0x58));
  *(undefined4 *)(this + 0x7c) = param_2[0x5e];
  *(undefined4 *)(this + 0x80) = param_2[0x5f];
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x84),(vector *)(param_2 + 0x60));
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x90),(vector *)(param_2 + 0x6c));
  PostalReward::operator=((PostalReward *)(this + 0x9c),(PostalReward *)(param_2 + 0xa6));
  this[0x101] = *(Quest *)((int)param_2 + 0x22e);
  this[0x130] = *(Quest *)(param_2 + 0x42);
  if (*(int *)(this + 0x7c) == 0) {
    std::vector<int,std::allocator<int>>::begin();
    std::pair<int,int>::pair((pair<int,int> *)&local_4c);
    while( true ) {
      std::vector<int,std::allocator<int>>::end();
      bVar1 = __gnu_cxx::operator!=(local_44,local_40);
      if (!bVar1) break;
      puVar2 = (undefined4 *)
               __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator*
                         (local_44);
      local_4c = *puVar2;
      __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                (local_3c,(int)local_44);
      std::vector<int,std::allocator<int>>::end();
      bVar1 = __gnu_cxx::operator==(local_44,local_38);
      if (bVar1) {
        cMyTrace::cMyTrace(local_34,"void Quest::set_quest(QuestScript)",0x109d,5);
        cMyTrace::operator()
                  (local_34,"[%s][%d]_(it == intDatas_.end())","void Quest::set_quest(QuestScript)",
                   0x109d);
        break;
      }
      puVar2 = (undefined4 *)
               __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator*
                         (local_44);
      local_48 = *puVar2;
      __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                (local_24,(int)local_44);
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0xac),
                 (pair *)&local_4c);
    }
  }
  else if (*(int *)(this + 0x7c) == 0x19) {
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::clear
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0xac));
    std::pair<int,int>::pair((pair<int,int> *)&local_54);
    local_14 = std::vector<int,std::allocator<int>>::size
                         ((vector<int,std::allocator<int>> *)(this + 0x84));
    local_14 = local_14 >> 1;
    std::vector<int,std::allocator<int>>::begin();
    local_10 = 0;
    do {
      if (local_10 < (int)local_14) {
        std::vector<int,std::allocator<int>>::end();
        bVar1 = __gnu_cxx::operator!=(local_58,local_20);
        if (!bVar1) goto LAB_083527b3;
        bVar1 = true;
      }
      else {
LAB_083527b3:
        bVar1 = false;
      }
      if (!bVar1) break;
      __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                (local_1c,(int)local_58);
      puVar2 = (undefined4 *)
               __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator*
                         (local_1c);
      local_54 = *puVar2;
      __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                (local_18,(int)local_58);
      puVar2 = (undefined4 *)
               __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator*
                         (local_18);
      local_50 = *puVar2;
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0xac),
                 (pair *)&local_54);
      local_10 = local_10 + 1;
    } while( true );
  }
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0xdc));
  *(undefined4 *)(this + 0xe8) = 0;
  std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>::clear
            ((vector<RewardItemInfo,std::allocator<RewardItemInfo>> *)(this + 0xec));
  *(undefined4 *)(this + 0xb8) = param_2[0x75];
  *(undefined4 *)(this + 0xc0) = param_2[0x79];
  *(undefined4 *)(this + 0xbc) = param_2[0x8a];
  if ((*(int *)(this + 0xb8) == 0) || (*(int *)(this + 0xb8) == 0x19)) {
    std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>::operator=
              ((vector<RewardItemInfo,std::allocator<RewardItemInfo>> *)(this + 0xc4),
               (vector *)(param_2 + 0x76));
    std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>::operator=
              ((vector<RewardItemInfo,std::allocator<RewardItemInfo>> *)(this + 0xd0),
               (vector *)(param_2 + 0x7a));
    std::vector<int,std::allocator<int>>::operator=
              ((vector<int,std::allocator<int>> *)(this + 0xdc),(vector *)(param_2 + 0x83));
    *(undefined4 *)(this + 0xe8) = param_2[0x86];
    makeRewardItemInfo((vector *)(param_2 + 0x87),(vector *)(this + 0xec));
  }
  *(undefined4 *)(this + 0xf8) = param_2[0x4a];
  *(undefined4 *)(this + 0xfc) = param_2[0x4b];
  this[0x100] = *(Quest *)((int)param_2 + 0x22d);
  this[0x102] = *(Quest *)((int)param_2 + 0x23d);
  *(undefined4 *)(this + 0x104) = param_2[0x90];
  this[0x108] = *(Quest *)(param_2 + 0x96);
  std::string::operator=((string *)(this + 0x10c),(string *)(param_2 + 0x97));
  std::string::operator=((string *)(this + 0x110),(string *)(param_2 + 0x98));
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x114),(vector *)(param_2 + 0x99));
  this[0x120] = *(Quest *)(param_2 + 0x9c);
  std::vector<dungeonEventHanaseStruct,std::allocator<dungeonEventHanaseStruct>>::operator=
            ((vector<dungeonEventHanaseStruct,std::allocator<dungeonEventHanaseStruct>> *)
             (this + 0x124),(vector *)(param_2 + 0x80));
  this[0x131] = *(Quest *)((int)param_2 + 0x272);
  *(undefined4 *)(this + 0x134) = 0;
  *(undefined4 *)(this + 0x134) = param_2[0x36];
  *(undefined2 *)(this + 0x138) = *(undefined2 *)(param_2 + 0xa0);
  *(undefined2 *)(this + 0x13a) = *(undefined2 *)((int)param_2 + 0x282);
  *(undefined4 *)(this + 0x13c) = param_2[0xaa];
  *(undefined4 *)(this + 0x140) = param_2[0xab];
  std::vector<ENUM_QUEST_EXCEPTION_TYPE,std::allocator<ENUM_QUEST_EXCEPTION_TYPE>>::operator=
            ((vector<ENUM_QUEST_EXCEPTION_TYPE,std::allocator<ENUM_QUEST_EXCEPTION_TYPE>> *)
             (this + 0x144),(vector *)(param_2 + 0xb4));
  return;
}

```

