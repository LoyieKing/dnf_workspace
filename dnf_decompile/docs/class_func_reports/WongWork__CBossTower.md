# WongWork__CBossTower

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 28

---

## CBossTower

```asm
// === 081429b4 WongWork::CBossTower::CBossTower  [0x081429b4-0x8142a73] ===
 81429b4:	55                   	push   %ebp
 81429b5:	89 e5                	mov    %esp,%ebp
 81429b7:	56                   	push   %esi
 81429b8:	53                   	push   %ebx
 81429b9:	83 ec 10             	sub    $0x10,%esp
 81429bc:	8b 45 08             	mov    0x8(%ebp),%eax
 81429bf:	89 04 24             	mov    %eax,(%esp)
 81429c2:	e8 45 93 00 00       	call   814bd0c <_ZN8WongWork10CBossStageC1Ev>
 81429c7:	8b 45 08             	mov    0x8(%ebp),%eax
 81429ca:	c7 00 68 02 b7 08    	movl   $0x8b70268,(%eax)
 81429d0:	8b 45 08             	mov    0x8(%ebp),%eax
 81429d3:	05 00 0b 00 00       	add    $0xb00,%eax
 81429d8:	89 04 24             	mov    %eax,(%esp)
 81429db:	e8 e2 2c 00 00       	call   81456c2 <_ZN23CBossDungeonEntranceLogC1Ev>
 81429e0:	8b 45 08             	mov    0x8(%ebp),%eax
 81429e3:	89 04 24             	mov    %eax,(%esp)
 81429e6:	e8 b7 94 00 00       	call   814bea2 <_ZN8WongWork10CBossStage5resetEv>
 81429eb:	8b 45 08             	mov    0x8(%ebp),%eax
 81429ee:	c7 80 f0 0a 00 00 00 	movl   $0x0,0xaf0(%eax)
 81429f5:	00 00 00 
 81429f8:	8b 45 08             	mov    0x8(%ebp),%eax
 81429fb:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 8142a02:	8b 45 08             	mov    0x8(%ebp),%eax
 8142a05:	83 c0 0d             	add    $0xd,%eax
 8142a08:	c7 44 24 08 04 00 00 	movl   $0x4,0x8(%esp)
 8142a0f:	00 
 8142a10:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8142a17:	00 
 8142a18:	89 04 24             	mov    %eax,(%esp)
 8142a1b:	e8 a0 b2 f3 ff       	call   807dcc0 <memset@plt>
 8142a20:	8b 45 08             	mov    0x8(%ebp),%eax
 8142a23:	c7 80 f0 09 00 00 00 	movl   $0x0,0x9f0(%eax)
 8142a2a:	00 00 00 
 8142a2d:	8b 45 08             	mov    0x8(%ebp),%eax
 8142a30:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 8142a37:	83 c4 10             	add    $0x10,%esp
 8142a3a:	5b                   	pop    %ebx
 8142a3b:	5e                   	pop    %esi
 8142a3c:	5d                   	pop    %ebp
 8142a3d:	c3                   	ret
 8142a3e:	89 d3                	mov    %edx,%ebx
 8142a40:	89 c6                	mov    %eax,%esi
 8142a42:	8b 45 08             	mov    0x8(%ebp),%eax
 8142a45:	05 00 0b 00 00       	add    $0xb00,%eax
 8142a4a:	89 04 24             	mov    %eax,(%esp)
 8142a4d:	e8 b2 2c 00 00       	call   8145704 <_ZN23CBossDungeonEntranceLogD1Ev>
 8142a52:	89 f0                	mov    %esi,%eax
 8142a54:	89 da                	mov    %ebx,%edx
 8142a56:	eb 00                	jmp    8142a58 <_ZN8WongWork10CBossTowerC1Ev+0xa4>
 8142a58:	89 d3                	mov    %edx,%ebx
 8142a5a:	89 c6                	mov    %eax,%esi
 8142a5c:	8b 45 08             	mov    0x8(%ebp),%eax
 8142a5f:	89 04 24             	mov    %eax,(%esp)
 8142a62:	e8 6f 93 00 00       	call   814bdd6 <_ZN8WongWork10CBossStageD1Ev>
 8142a67:	89 f0                	mov    %esi,%eax
 8142a69:	89 da                	mov    %ebx,%edx
 8142a6b:	89 04 24             	mov    %eax,(%esp)
 8142a6e:	e8 dd 0c 9a 00       	call   8ae3750 <_Unwind_Resume>
 8142a73:	90                   	nop

```

```c
// WongWork::CBossTower::CBossTower @ 0x81429b4

/* WongWork::CBossTower::CBossTower() */

void __thiscall WongWork::CBossTower::CBossTower(CBossTower *this)

{
  CBossStage::CBossStage((CBossStage *)this);
  *(undefined ***)this = &PTR_generateRewardItem_08b70268;
                    /* try { // try from 081429db to 081429df has its CatchHandler @ 08142a58 */
  CBossDungeonEntranceLog::CBossDungeonEntranceLog((CBossDungeonEntranceLog *)(this + 0xb00));
                    /* try { // try from 081429e6 to 081429ea has its CatchHandler @ 08142a3e */
  CBossStage::reset((CBossStage *)this);
  *(undefined4 *)(this + 0xaf0) = 0;
  *(undefined4 *)(this + 8) = 0;
  memset(this + 0xd,0,4);
  *(undefined4 *)(this + 0x9f0) = 0;
  *(undefined4 *)(this + 4) = 0;
  return;
}

```

---

## InitBossTower

```asm
// === 08142f32 WongWork::CBossTower::InitBossTower  [0x08142f32-0x8142fa5] ===
 8142f32:	55                   	push   %ebp
 8142f33:	89 e5                	mov    %esp,%ebp
 8142f35:	83 ec 18             	sub    $0x18,%esp
 8142f38:	e8 5e 92 f8 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8142f3d:	8b 55 10             	mov    0x10(%ebp),%edx
 8142f40:	89 54 24 04          	mov    %edx,0x4(%esp)
 8142f44:	89 04 24             	mov    %eax,(%esp)
 8142f47:	e8 ac ca 21 00       	call   835f9f8 <_ZNK12CDataManager12find_dungeonEi>
 8142f4c:	8b 55 08             	mov    0x8(%ebp),%edx
 8142f4f:	89 82 f0 09 00 00    	mov    %eax,0x9f0(%edx)
 8142f55:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8142f59:	74 0d                	je     8142f68 <_ZN8WongWork10CBossTower13InitBossTowerEP6CPartyi+0x36>
 8142f5b:	8b 45 08             	mov    0x8(%ebp),%eax
 8142f5e:	8b 80 f0 09 00 00    	mov    0x9f0(%eax),%eax
 8142f64:	85 c0                	test   %eax,%eax
 8142f66:	75 07                	jne    8142f6f <_ZN8WongWork10CBossTower13InitBossTowerEP6CPartyi+0x3d>
 8142f68:	b8 00 00 00 00       	mov    $0x0,%eax
 8142f6d:	eb 34                	jmp    8142fa3 <_ZN8WongWork10CBossTower13InitBossTowerEP6CPartyi+0x71>
 8142f6f:	8b 45 08             	mov    0x8(%ebp),%eax
 8142f72:	8b 55 0c             	mov    0xc(%ebp),%edx
 8142f75:	89 50 04             	mov    %edx,0x4(%eax)
 8142f78:	8b 45 08             	mov    0x8(%ebp),%eax
 8142f7b:	8b 80 f0 09 00 00    	mov    0x9f0(%eax),%eax
 8142f81:	89 04 24             	mov    %eax,(%esp)
 8142f84:	e8 33 26 00 00       	call   81455bc <_ZNK8CDungeon22getRandomTowerMaxStageEv>
 8142f89:	89 c2                	mov    %eax,%edx
 8142f8b:	8b 45 08             	mov    0x8(%ebp),%eax
 8142f8e:	89 90 e4 0a 00 00    	mov    %edx,0xae4(%eax)
 8142f94:	8b 45 08             	mov    0x8(%ebp),%eax
 8142f97:	c6 80 fc 0a 00 00 00 	movb   $0x0,0xafc(%eax)
 8142f9e:	b8 01 00 00 00       	mov    $0x1,%eax
 8142fa3:	c9                   	leave
 8142fa4:	c3                   	ret
 8142fa5:	90                   	nop

```

```c
// WongWork::CBossTower::InitBossTower @ 0x8142f32

/* WongWork::CBossTower::InitBossTower(CParty*, int) */

undefined4 WongWork::CBossTower::InitBossTower(CParty *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = G_CDataManager();
  uVar2 = CDataManager::find_dungeon(iVar1);
  *(undefined4 *)(param_1 + 0x9f0) = uVar2;
  if ((param_2 == 0) || (*(int *)(param_1 + 0x9f0) == 0)) {
    uVar2 = 0;
  }
  else {
    *(int *)(param_1 + 4) = param_2;
    uVar2 = CDungeon::getRandomTowerMaxStage(*(CDungeon **)(param_1 + 0x9f0));
    *(undefined4 *)(param_1 + 0xae4) = uVar2;
    param_1[0xafc] = (CParty)0x0;
    uVar2 = 1;
  }
  return uVar2;
}

```

---

## InsertRewardExp

```asm
// === 081446a2 WongWork::CBossTower::InsertRewardExp  [0x081446a2-0x814479f] ===
 81446a2:	55                   	push   %ebp
 81446a3:	89 e5                	mov    %esp,%ebp
 81446a5:	83 ec 48             	sub    $0x48,%esp
 81446a8:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 81446af:	e9 d5 00 00 00       	jmp    8144789 <_ZN8WongWork10CBossTower15InsertRewardExpEv+0xe7>
 81446b4:	8b 45 08             	mov    0x8(%ebp),%eax
 81446b7:	8b 40 04             	mov    0x4(%eax),%eax
 81446ba:	8b 55 ec             	mov    -0x14(%ebp),%edx
 81446bd:	89 54 24 04          	mov    %edx,0x4(%esp)
 81446c1:	89 04 24             	mov    %eax,(%esp)
 81446c4:	e8 9b 10 00 00       	call   8145764 <_ZN6CParty8get_userEi>
 81446c9:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81446cc:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 81446d0:	74 1c                	je     81446ee <_ZN8WongWork10CBossTower15InsertRewardExpEv+0x4c>
 81446d2:	8b 45 08             	mov    0x8(%ebp),%eax
 81446d5:	8b 40 04             	mov    0x4(%eax),%eax
 81446d8:	8b 55 ec             	mov    -0x14(%ebp),%edx
 81446db:	89 54 24 04          	mov    %edx,0x4(%esp)
 81446df:	89 04 24             	mov    %eax,(%esp)
 81446e2:	e8 81 11 00 00       	call   8145868 <_ZN6CParty14checkValidUserEi>
 81446e7:	83 f0 01             	xor    $0x1,%eax
 81446ea:	84 c0                	test   %al,%al
 81446ec:	74 07                	je     81446f5 <_ZN8WongWork10CBossTower15InsertRewardExpEv+0x53>
 81446ee:	b8 01 00 00 00       	mov    $0x1,%eax
 81446f3:	eb 05                	jmp    81446fa <_ZN8WongWork10CBossTower15InsertRewardExpEv+0x58>
 81446f5:	b8 00 00 00 00       	mov    $0x0,%eax
 81446fa:	84 c0                	test   %al,%al
 81446fc:	0f 85 82 00 00 00    	jne    8144784 <_ZN8WongWork10CBossTower15InsertRewardExpEv+0xe2>
 8144702:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 8144709:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8144710:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
 8144714:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8144717:	8b 45 08             	mov    0x8(%ebp),%eax
 814471a:	83 c2 04             	add    $0x4,%edx
 814471d:	8b 44 90 08          	mov    0x8(%eax,%edx,4),%eax
 8144721:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 8144728:	00 
 8144729:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 8144730:	00 
 8144731:	c7 44 24 10 02 00 00 	movl   $0x2,0x10(%esp)
 8144738:	00 
 8144739:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 814473c:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8144740:	8d 55 e8             	lea    -0x18(%ebp),%edx
 8144743:	89 54 24 08          	mov    %edx,0x8(%esp)
 8144747:	89 44 24 04          	mov    %eax,0x4(%esp)
 814474b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 814474e:	89 04 24             	mov    %eax,(%esp)
 8144751:	e8 a8 5c 52 00       	call   866a3fe <_ZN5CUser11gain_exp_spEiRiS0_13eExpAddReasonib>
 8144756:	88 45 f7             	mov    %al,-0x9(%ebp)
 8144759:	80 7d f7 00          	cmpb   $0x0,-0x9(%ebp)
 814475d:	74 26                	je     8144785 <_ZN8WongWork10CBossTower15InsertRewardExpEv+0xe3>
 814475f:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8144766:	00 
 8144767:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 814476e:	00 
 814476f:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8144776:	00 
 8144777:	8b 45 f0             	mov    -0x10(%ebp),%eax
 814477a:	89 04 24             	mov    %eax,(%esp)
 814477d:	e8 da 72 53 00       	call   867ba5c <_ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi>
 8144782:	eb 01                	jmp    8144785 <_ZN8WongWork10CBossTower15InsertRewardExpEv+0xe3>
 8144784:	90                   	nop
 8144785:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 8144789:	83 7d ec 03          	cmpl   $0x3,-0x14(%ebp)
 814478d:	0f 9e c0             	setle  %al
 8144790:	84 c0                	test   %al,%al
 8144792:	0f 85 1c ff ff ff    	jne    81446b4 <_ZN8WongWork10CBossTower15InsertRewardExpEv+0x12>
 8144798:	b8 01 00 00 00       	mov    $0x1,%eax
 814479d:	c9                   	leave
 814479e:	c3                   	ret
 814479f:	90                   	nop

```

```c
// WongWork::CBossTower::InsertRewardExp @ 0x81446a2

/* WongWork::CBossTower::InsertRewardExp() */

undefined4 __thiscall WongWork::CBossTower::InsertRewardExp(CBossTower *this)

{
  bool bVar1;
  char cVar2;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  CUser *local_14;
  char local_d;
  
  local_18 = 0;
  do {
    if (3 < local_18) {
      return 1;
    }
    local_14 = (CUser *)CParty::get_user(*(CParty **)(this + 4),local_18);
    if (local_14 == (CUser *)0x0) {
LAB_081446ee:
      bVar1 = true;
    }
    else {
      cVar2 = CParty::checkValidUser(*(CParty **)(this + 4),local_18);
      if (cVar2 != '\x01') goto LAB_081446ee;
      bVar1 = false;
    }
    if (!bVar1) {
      local_1c = 0;
      local_20 = 0;
      local_d = 0;
      local_d = CUser::gain_exp_sp(local_14,*(undefined4 *)(this + (local_18 + 4) * 4 + 8),&local_1c
                                   ,&local_20,2,0,0);
      if (local_d != '\0') {
        CUser::SendNotiPacket(local_14,2,2,1);
      }
    }
    local_18 = local_18 + 1;
  } while( true );
}

```

---

## InsertRewardItems

```asm
// === 081447a0 WongWork::CBossTower::InsertRewardItems  [0x081447a0-0x8144d53] ===
 81447a0:	55                   	push   %ebp
 81447a1:	89 e5                	mov    %esp,%ebp
 81447a3:	57                   	push   %edi
 81447a4:	56                   	push   %esi
 81447a5:	53                   	push   %ebx
 81447a6:	81 ec dc 01 00 00    	sub    $0x1dc,%esp
 81447ac:	c7 45 c0 00 00 00 00 	movl   $0x0,-0x40(%ebp)
 81447b3:	e9 7c 05 00 00       	jmp    8144d34 <_ZN8WongWork10CBossTower17InsertRewardItemsEv+0x594>
 81447b8:	8b 45 08             	mov    0x8(%ebp),%eax
 81447bb:	8b 40 04             	mov    0x4(%eax),%eax
 81447be:	8b 55 c0             	mov    -0x40(%ebp),%edx
 81447c1:	89 54 24 04          	mov    %edx,0x4(%esp)
 81447c5:	89 04 24             	mov    %eax,(%esp)
 81447c8:	e8 97 0f 00 00       	call   8145764 <_ZN6CParty8get_userEi>
 81447cd:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 81447d0:	83 7d c4 00          	cmpl   $0x0,-0x3c(%ebp)
 81447d4:	74 1c                	je     81447f2 <_ZN8WongWork10CBossTower17InsertRewardItemsEv+0x52>
 81447d6:	8b 45 08             	mov    0x8(%ebp),%eax
 81447d9:	8b 40 04             	mov    0x4(%eax),%eax
 81447dc:	8b 55 c0             	mov    -0x40(%ebp),%edx
 81447df:	89 54 24 04          	mov    %edx,0x4(%esp)
 81447e3:	89 04 24             	mov    %eax,(%esp)
 81447e6:	e8 7d 10 00 00       	call   8145868 <_ZN6CParty14checkValidUserEi>
 81447eb:	83 f0 01             	xor    $0x1,%eax
 81447ee:	84 c0                	test   %al,%al
 81447f0:	74 07                	je     81447f9 <_ZN8WongWork10CBossTower17InsertRewardItemsEv+0x59>
 81447f2:	b8 01 00 00 00       	mov    $0x1,%eax
 81447f7:	eb 05                	jmp    81447fe <_ZN8WongWork10CBossTower17InsertRewardItemsEv+0x5e>
 81447f9:	b8 00 00 00 00       	mov    $0x0,%eax
 81447fe:	84 c0                	test   %al,%al
 8144800:	0f 85 29 05 00 00    	jne    8144d2f <_ZN8WongWork10CBossTower17InsertRewardItemsEv+0x58f>
 8144806:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
 814480d:	e9 f9 04 00 00       	jmp    8144d0b <_ZN8WongWork10CBossTower17InsertRewardItemsEv+0x56b>
 8144812:	8b 45 c0             	mov    -0x40(%ebp),%eax
 8144815:	8b 55 c8             	mov    -0x38(%ebp),%edx
 8144818:	6b d2 3d             	imul   $0x3d,%edx,%edx
 814481b:	69 c0 68 02 00 00    	imul   $0x268,%eax,%eax
 8144821:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8144824:	83 c0 20             	add    $0x20,%eax
 8144827:	03 45 08             	add    0x8(%ebp),%eax
 814482a:	83 c0 0c             	add    $0xc,%eax
 814482d:	89 45 cc             	mov    %eax,-0x34(%ebp)
 8144830:	83 7d cc 00          	cmpl   $0x0,-0x34(%ebp)
 8144834:	0f 84 c6 04 00 00    	je     8144d00 <_ZN8WongWork10CBossTower17InsertRewardItemsEv+0x560>
 814483a:	8b 45 cc             	mov    -0x34(%ebp),%eax
 814483d:	8b 40 02             	mov    0x2(%eax),%eax
 8144840:	83 f8 ff             	cmp    $0xffffffff,%eax
 8144843:	0f 84 ba 04 00 00    	je     8144d03 <_ZN8WongWork10CBossTower17InsertRewardItemsEv+0x563>
 8144849:	c7 45 d0 ff ff ff ff 	movl   $0xffffffff,-0x30(%ebp)
 8144850:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8144853:	8b 40 02             	mov    0x2(%eax),%eax
 8144856:	85 c0                	test   %eax,%eax
 8144858:	0f 85 89 00 00 00    	jne    81448e7 <_ZN8WongWork10CBossTower17InsertRewardItemsEv+0x147>
 814485e:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8144861:	89 04 24             	mov    %eax,(%esp)
 8144864:	e8 d1 2f fb ff       	call   80f783a <_ZNK10Inven_Item12get_add_infoEv>
 8144869:	89 c3                	mov    %eax,%ebx
 814486b:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 814486e:	89 04 24             	mov    %eax,(%esp)
 8144871:	e8 18 5a f9 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8144876:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 814487d:	00 
 814487e:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8144885:	00 
 8144886:	c7 44 24 08 05 00 00 	movl   $0x5,0x8(%esp)
 814488d:	00 
 814488e:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8144892:	89 04 24             	mov    %eax,(%esp)
 8144895:	e8 02 aa 3b 00       	call   84ff29c <_ZN10CInventory10gain_moneyEi15eMoneyAddReasonbi>
 814489a:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 814489d:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81448a0:	89 04 24             	mov    %eax,(%esp)
 81448a3:	e8 92 2f fb ff       	call   80f783a <_ZNK10Inven_Item12get_add_infoEv>
 81448a8:	3b 45 d4             	cmp    -0x2c(%ebp),%eax
 81448ab:	0f 9f c0             	setg   %al
 81448ae:	84 c0                	test   %al,%al
 81448b0:	74 29                	je     81448db <_ZN8WongWork10CBossTower17InsertRewardItemsEv+0x13b>
 81448b2:	8b 5d d4             	mov    -0x2c(%ebp),%ebx
 81448b5:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81448b8:	89 04 24             	mov    %eax,(%esp)
 81448bb:	e8 7a 2f fb ff       	call   80f783a <_ZNK10Inven_Item12get_add_infoEv>
 81448c0:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 81448c4:	89 44 24 08          	mov    %eax,0x8(%esp)
 81448c8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81448cf:	00 
 81448d0:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81448d3:	89 04 24             	mov    %eax,(%esp)
 81448d6:	e8 69 7f 53 00       	call   867c844 <_ZN5CUser19SendMoneyFullReasonE22ENUM_MONEY_FULL_REASONmm>
 81448db:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 81448e2:	e9 a3 00 00 00       	jmp    814498a <_ZN8WongWork10CBossTower17InsertRewardItemsEv+0x1ea>
 81448e7:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81448ea:	89 04 24             	mov    %eax,(%esp)
 81448ed:	e8 9c 59 f9 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 81448f2:	89 c2                	mov    %eax,%edx
 81448f4:	c7 44 24 4c 01 00 00 	movl   $0x1,0x4c(%esp)
 81448fb:	00 
 81448fc:	c7 44 24 48 01 00 00 	movl   $0x1,0x48(%esp)
 8144903:	00 
 8144904:	c7 44 24 44 0b 00 00 	movl   $0xb,0x44(%esp)
 814490b:	00 
 814490c:	8b 45 cc             	mov    -0x34(%ebp),%eax
 814490f:	8b 08                	mov    (%eax),%ecx
 8144911:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8144915:	8b 48 04             	mov    0x4(%eax),%ecx
 8144918:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 814491c:	8b 48 08             	mov    0x8(%eax),%ecx
 814491f:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8144923:	8b 48 0c             	mov    0xc(%eax),%ecx
 8144926:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 814492a:	8b 48 10             	mov    0x10(%eax),%ecx
 814492d:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 8144931:	8b 48 14             	mov    0x14(%eax),%ecx
 8144934:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 8144938:	8b 48 18             	mov    0x18(%eax),%ecx
 814493b:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 814493f:	8b 48 1c             	mov    0x1c(%eax),%ecx
 8144942:	89 4c 24 20          	mov    %ecx,0x20(%esp)
 8144946:	8b 48 20             	mov    0x20(%eax),%ecx
 8144949:	89 4c 24 24          	mov    %ecx,0x24(%esp)
 814494d:	8b 48 24             	mov    0x24(%eax),%ecx
 8144950:	89 4c 24 28          	mov    %ecx,0x28(%esp)
 8144954:	8b 48 28             	mov    0x28(%eax),%ecx
 8144957:	89 4c 24 2c          	mov    %ecx,0x2c(%esp)
 814495b:	8b 48 2c             	mov    0x2c(%eax),%ecx
 814495e:	89 4c 24 30          	mov    %ecx,0x30(%esp)
 8144962:	8b 48 30             	mov    0x30(%eax),%ecx
 8144965:	89 4c 24 34          	mov    %ecx,0x34(%esp)
 8144969:	8b 48 34             	mov    0x34(%eax),%ecx
 814496c:	89 4c 24 38          	mov    %ecx,0x38(%esp)
 8144970:	8b 48 38             	mov    0x38(%eax),%ecx
 8144973:	89 4c 24 3c          	mov    %ecx,0x3c(%esp)
 8144977:	0f b6 40 3c          	movzbl 0x3c(%eax),%eax
 814497b:	88 44 24 40          	mov    %al,0x40(%esp)
 814497f:	89 14 24             	mov    %edx,(%esp)
 8144982:	e8 ff e3 3b 00       	call   8502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>
 8144987:	89 45 d0             	mov    %eax,-0x30(%ebp)
 814498a:	83 7d d0 00          	cmpl   $0x0,-0x30(%ebp)
 814498e:	0f 88 df 00 00 00    	js     8144a73 <_ZN8WongWork10CBossTower17InsertRewardItemsEv+0x2d3>
 8144994:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8144997:	89 04 24             	mov    %eax,(%esp)
 814499a:	e8 ad 93 44 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 814499f:	c7 44 24 08 0e 00 00 	movl   $0xe,0x8(%esp)
 81449a6:	00 
 81449a7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81449ae:	00 
 81449af:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 81449b2:	89 04 24             	mov    %eax,(%esp)
 81449b5:	e8 42 6f f8 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81449ba:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81449bd:	89 04 24             	mov    %eax,(%esp)
 81449c0:	e8 1d 38 20 00       	call   83481e2 <_ZNK10Inven_Item12GetItemSpaceEv>
 81449c5:	89 44 24 04          	mov    %eax,0x4(%esp)
 81449c9:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 81449cc:	89 04 24             	mov    %eax,(%esp)
 81449cf:	e8 4c 6f f8 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81449d4:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81449db:	00 
 81449dc:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 81449df:	89 04 24             	mov    %eax,(%esp)
 81449e2:	e8 bd 54 f9 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 81449e7:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81449ea:	89 04 24             	mov    %eax,(%esp)
 81449ed:	e8 f0 37 20 00       	call   83481e2 <_ZNK10Inven_Item12GetItemSpaceEv>
 81449f2:	89 04 24             	mov    %eax,(%esp)
 81449f5:	e8 4b 2e fb ff       	call   80f7845 <_Z25GetInvenTypeFromItemSpace14ENUM_ITEMSPACE>
 81449fa:	89 c3                	mov    %eax,%ebx
 81449fc:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81449ff:	89 04 24             	mov    %eax,(%esp)
 8144a02:	e8 77 58 f9 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8144a07:	8d 55 b4             	lea    -0x4c(%ebp),%edx
 8144a0a:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8144a0e:	8b 55 d0             	mov    -0x30(%ebp),%edx
 8144a11:	89 54 24 08          	mov    %edx,0x8(%esp)
 8144a15:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8144a19:	89 04 24             	mov    %eax,(%esp)
 8144a1c:	e8 9b 7c 3b 00       	call   84fc6bc <_ZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuard>
 8144a21:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8144a28:	00 
 8144a29:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8144a2c:	89 04 24             	mov    %eax,(%esp)
 8144a2f:	e8 24 6f f8 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8144a34:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8144a37:	89 44 24 04          	mov    %eax,0x4(%esp)
 8144a3b:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8144a3e:	89 04 24             	mov    %eax,(%esp)
 8144a41:	e8 74 3b 50 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8144a46:	eb 1b                	jmp    8144a63 <_ZN8WongWork10CBossTower17InsertRewardItemsEv+0x2c3>
 8144a48:	89 d3                	mov    %edx,%ebx
 8144a4a:	89 c6                	mov    %eax,%esi
 8144a4c:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8144a4f:	89 04 24             	mov    %eax,(%esp)
 8144a52:	e8 29 94 44 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8144a57:	89 f0                	mov    %esi,%eax
 8144a59:	89 da                	mov    %ebx,%edx
 8144a5b:	89 04 24             	mov    %eax,(%esp)
 8144a5e:	e8 ed ec 99 00       	call   8ae3750 <_Unwind_Resume>
 8144a63:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8144a66:	89 04 24             	mov    %eax,(%esp)
 8144a69:	e8 12 94 44 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8144a6e:	e9 94 02 00 00       	jmp    8144d07 <_ZN8WongWork10CBossTower17InsertRewardItemsEv+0x567>
 8144a73:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 8144a7a:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 8144a81:	8d 55 9c             	lea    -0x64(%ebp),%edx
 8144a84:	b9 00 00 00 00       	mov    $0x0,%ecx
 8144a89:	b8 18 00 00 00       	mov    $0x18,%eax
 8144a8e:	89 c3                	mov    %eax,%ebx
 8144a90:	83 e3 fc             	and    $0xfffffffc,%ebx
 8144a93:	b8 00 00 00 00       	mov    $0x0,%eax
 8144a98:	89 0c 02             	mov    %ecx,(%edx,%eax,1)
 8144a9b:	83 c0 04             	add    $0x4,%eax
 8144a9e:	39 d8                	cmp    %ebx,%eax
 8144aa0:	72 f6                	jb     8144a98 <_ZN8WongWork10CBossTower17InsertRewardItemsEv+0x2f8>
 8144aa2:	01 c2                	add    %eax,%edx
 8144aa4:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8144aa7:	8b 40 02             	mov    0x2(%eax),%eax
 8144aaa:	89 c3                	mov    %eax,%ebx
 8144aac:	e8 ea 76 f8 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8144ab1:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8144ab5:	89 04 24             	mov    %eax,(%esp)
 8144ab8:	e8 75 af 21 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 8144abd:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8144ac0:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 8144ac4:	0f 84 3c 02 00 00    	je     8144d06 <_ZN8WongWork10CBossTower17InsertRewardItemsEv+0x566>
 8144aca:	c7 44 24 08 00 01 00 	movl   $0x100,0x8(%esp)
 8144ad1:	00 
 8144ad2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8144ad9:	00 
 8144ada:	8d 85 7e fe ff ff    	lea    -0x182(%ebp),%eax
 8144ae0:	89 04 24             	mov    %eax,(%esp)
 8144ae3:	e8 d8 91 f3 ff       	call   807dcc0 <memset@plt>
 8144ae8:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 8144aef:	00 
 8144af0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8144af7:	00 
 8144af8:	8d 85 7e ff ff ff    	lea    -0x82(%ebp),%eax
 8144afe:	89 04 24             	mov    %eax,(%esp)
 8144b01:	e8 ba 91 f3 ff       	call   807dcc0 <memset@plt>
 8144b06:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8144b0d:	00 
 8144b0e:	c7 44 24 08 71 f5 b6 	movl   $0x8b6f571,0x8(%esp)
 8144b15:	08 
 8144b16:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8144b1d:	00 
 8144b1e:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 8144b25:	e8 d4 0c 96 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 8144b2a:	c7 44 24 08 1d 00 00 	movl   $0x1d,0x8(%esp)
 8144b31:	00 
 8144b32:	89 44 24 04          	mov    %eax,0x4(%esp)
 8144b36:	8d 85 7e ff ff ff    	lea    -0x82(%ebp),%eax
 8144b3c:	89 04 24             	mov    %eax,(%esp)
 8144b3f:	e8 8c 8d f3 ff       	call   807d8d0 <strncpy@plt>
 8144b44:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8144b4b:	00 
 8144b4c:	c7 44 24 08 88 f5 b6 	movl   $0x8b6f588,0x8(%esp)
 8144b53:	08 
 8144b54:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8144b5b:	00 
 8144b5c:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 8144b63:	e8 96 0c 96 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 8144b68:	c7 44 24 08 ff 00 00 	movl   $0xff,0x8(%esp)
 8144b6f:	00 
 8144b70:	89 44 24 04          	mov    %eax,0x4(%esp)
 8144b74:	8d 85 7e fe ff ff    	lea    -0x182(%ebp),%eax
 8144b7a:	89 04 24             	mov    %eax,(%esp)
 8144b7d:	e8 4e 8d f3 ff       	call   807d8d0 <strncpy@plt>
 8144b82:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8144b85:	8b 00                	mov    (%eax),%eax
 8144b87:	83 c0 10             	add    $0x10,%eax
 8144b8a:	8b 10                	mov    (%eax),%edx
 8144b8c:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8144b8f:	89 04 24             	mov    %eax,(%esp)
 8144b92:	ff d2                	call   *%edx
 8144b94:	84 c0                	test   %al,%al
 8144b96:	74 40                	je     8144bd8 <_ZN8WongWork10CBossTower17InsertRewardItemsEv+0x438>
 8144b98:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8144b9b:	89 04 24             	mov    %eax,(%esp)
 8144b9e:	e8 bd c0 fc ff       	call   8110c60 <_ZNK5CItem15getUsablePeriodEv>
 8144ba3:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8144ba6:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 8144baa:	74 25                	je     8144bd1 <_ZN8WongWork10CBossTower17InsertRewardItemsEv+0x431>
 8144bac:	81 7d e4 6d 01 00 00 	cmpl   $0x16d,-0x1c(%ebp)
 8144bb3:	74 1c                	je     8144bd1 <_ZN8WongWork10CBossTower17InsertRewardItemsEv+0x431>
 8144bb5:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8144bbc:	e8 dd 70 f8 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8144bc1:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8144bc4:	69 d2 80 51 01 00    	imul   $0x15180,%edx,%edx
 8144bca:	01 d0                	add    %edx,%eax
 8144bcc:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8144bcf:	eb 07                	jmp    8144bd8 <_ZN8WongWork10CBossTower17InsertRewardItemsEv+0x438>
 8144bd1:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 8144bd8:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8144bdb:	8b 00                	mov    (%eax),%eax
 8144bdd:	83 c0 10             	add    $0x10,%eax
 8144be0:	8b 10                	mov    (%eax),%edx
 8144be2:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8144be5:	89 04 24             	mov    %eax,(%esp)
 8144be8:	ff d2                	call   *%edx
 8144bea:	84 c0                	test   %al,%al
 8144bec:	0f 84 99 00 00 00    	je     8144c8b <_ZN8WongWork10CBossTower17InsertRewardItemsEv+0x4eb>
 8144bf2:	8d 85 7e fe ff ff    	lea    -0x182(%ebp),%eax
 8144bf8:	89 04 24             	mov    %eax,(%esp)
 8144bfb:	e8 b0 97 f3 ff       	call   807e3b0 <strlen@plt>
 8144c00:	89 85 74 fe ff ff    	mov    %eax,-0x18c(%ebp)
 8144c06:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8144c09:	89 04 24             	mov    %eax,(%esp)
 8144c0c:	e8 3d 70 f8 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8144c11:	8d 55 9c             	lea    -0x64(%ebp),%edx
 8144c14:	89 54 24 08          	mov    %edx,0x8(%esp)
 8144c18:	89 44 24 04          	mov    %eax,0x4(%esp)
 8144c1c:	c7 04 24 03 00 00 00 	movl   $0x3,(%esp)
 8144c23:	e8 28 2b 37 00       	call   84b7750 <_ZN8WongWork12CGenUniqueNo8genIPGNoENS0_15ENUM_IPGNO_TYPEEjPc>
 8144c28:	89 c3                	mov    %eax,%ebx
 8144c2a:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8144c2d:	89 04 24             	mov    %eax,(%esp)
 8144c30:	e8 63 a1 fd ff       	call   811ed98 <_ZNK10CEquipItem13get_enduranceEv>
 8144c35:	0f be f8             	movsbl %al,%edi
 8144c38:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8144c3b:	8b 40 02             	mov    0x2(%eax),%eax
 8144c3e:	89 c6                	mov    %eax,%esi
 8144c40:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8144c43:	89 04 24             	mov    %eax,(%esp)
 8144c46:	e8 03 70 f8 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8144c4b:	8b 95 74 fe ff ff    	mov    -0x18c(%ebp),%edx
 8144c51:	89 54 24 20          	mov    %edx,0x20(%esp)
 8144c55:	8d 95 7e fe ff ff    	lea    -0x182(%ebp),%edx
 8144c5b:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 8144c5f:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 8144c63:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 8144c6a:	00 
 8144c6b:	89 7c 24 10          	mov    %edi,0x10(%esp)
 8144c6f:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8144c72:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8144c76:	89 74 24 08          	mov    %esi,0x8(%esp)
 8144c7a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8144c7e:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8144c81:	89 04 24             	mov    %eax,(%esp)
 8144c84:	e8 27 15 41 00       	call   85561b0 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewAvatarMailEP5CUseriiiccPKcS4_i>
 8144c89:	eb 7c                	jmp    8144d07 <_ZN8WongWork10CBossTower17InsertRewardItemsEv+0x567>
 8144c8b:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8144c8e:	89 04 24             	mov    %eax,(%esp)
 8144c91:	e8 fa 6f f8 ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 8144c96:	89 c3                	mov    %eax,%ebx
 8144c98:	8d 85 7e fe ff ff    	lea    -0x182(%ebp),%eax
 8144c9e:	89 04 24             	mov    %eax,(%esp)
 8144ca1:	e8 0a 97 f3 ff       	call   807e3b0 <strlen@plt>
 8144ca6:	89 c6                	mov    %eax,%esi
 8144ca8:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8144cab:	89 04 24             	mov    %eax,(%esp)
 8144cae:	e8 9b 6f f8 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8144cb3:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 8144cba:	00 
 8144cbb:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 8144cc2:	00 
 8144cc3:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 8144cc7:	c7 44 24 18 0f 00 00 	movl   $0xf,0x18(%esp)
 8144cce:	00 
 8144ccf:	89 74 24 14          	mov    %esi,0x14(%esp)
 8144cd3:	8d 95 7e fe ff ff    	lea    -0x182(%ebp),%edx
 8144cd9:	89 54 24 10          	mov    %edx,0x10(%esp)
 8144cdd:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8144ce1:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8144ce8:	00 
 8144ce9:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8144cec:	89 44 24 04          	mov    %eax,0x4(%esp)
 8144cf0:	8d 85 7e ff ff ff    	lea    -0x82(%ebp),%eax
 8144cf6:	89 04 24             	mov    %eax,(%esp)
 8144cf9:	e8 ea 08 41 00       	call   85555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>
 8144cfe:	eb 07                	jmp    8144d07 <_ZN8WongWork10CBossTower17InsertRewardItemsEv+0x567>
 8144d00:	90                   	nop
 8144d01:	eb 04                	jmp    8144d07 <_ZN8WongWork10CBossTower17InsertRewardItemsEv+0x567>
 8144d03:	90                   	nop
 8144d04:	eb 01                	jmp    8144d07 <_ZN8WongWork10CBossTower17InsertRewardItemsEv+0x567>
 8144d06:	90                   	nop
 8144d07:	83 45 c8 01          	addl   $0x1,-0x38(%ebp)
 8144d0b:	8b 45 c0             	mov    -0x40(%ebp),%eax
 8144d0e:	8b 55 08             	mov    0x8(%ebp),%edx
 8144d11:	69 c0 68 02 00 00    	imul   $0x268,%eax,%eax
 8144d17:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8144d1a:	83 c0 28             	add    $0x28,%eax
 8144d1d:	8b 00                	mov    (%eax),%eax
 8144d1f:	3b 45 c8             	cmp    -0x38(%ebp),%eax
 8144d22:	0f 9f c0             	setg   %al
 8144d25:	84 c0                	test   %al,%al
 8144d27:	0f 85 e5 fa ff ff    	jne    8144812 <_ZN8WongWork10CBossTower17InsertRewardItemsEv+0x72>
 8144d2d:	eb 01                	jmp    8144d30 <_ZN8WongWork10CBossTower17InsertRewardItemsEv+0x590>
 8144d2f:	90                   	nop
 8144d30:	83 45 c0 01          	addl   $0x1,-0x40(%ebp)
 8144d34:	83 7d c0 03          	cmpl   $0x3,-0x40(%ebp)
 8144d38:	0f 9e c0             	setle  %al
 8144d3b:	84 c0                	test   %al,%al
 8144d3d:	0f 85 75 fa ff ff    	jne    81447b8 <_ZN8WongWork10CBossTower17InsertRewardItemsEv+0x18>
 8144d43:	b8 01 00 00 00       	mov    $0x1,%eax
 8144d48:	81 c4 dc 01 00 00    	add    $0x1dc,%esp
 8144d4e:	5b                   	pop    %ebx
 8144d4f:	5e                   	pop    %esi
 8144d50:	5f                   	pop    %edi
 8144d51:	5d                   	pop    %ebp
 8144d52:	c3                   	ret
 8144d53:	90                   	nop

```

```c
// WongWork::CBossTower::InsertRewardItems @ 0x81447a0

/* WongWork::CBossTower::InsertRewardItems() */

undefined4 __thiscall WongWork::CBossTower::InsertRewardItems(CBossTower *this)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  CInventory *pCVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  CDataManager *this_00;
  char *pcVar8;
  size_t sVar9;
  undefined4 uVar10;
  char local_186 [256];
  char local_86 [30];
  undefined4 local_68 [6];
  PacketGuard local_50 [12];
  int local_44;
  CUserCharacInfo *local_40;
  int local_3c;
  Inven_Item *local_38;
  int local_34;
  int local_30;
  undefined4 local_2c;
  int local_28;
  CItem *local_24;
  int local_20;
  
  for (local_44 = 0; local_44 < 4; local_44 = local_44 + 1) {
    local_40 = (CUserCharacInfo *)CParty::get_user(*(CParty **)(this + 4),local_44);
    if ((local_40 == (CUserCharacInfo *)0x0) ||
       (cVar2 = CParty::checkValidUser(*(CParty **)(this + 4),local_44), cVar2 != '\x01')) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) {
      for (local_3c = 0; local_3c < *(int *)(this + local_44 * 0x268 + 0x28);
          local_3c = local_3c + 1) {
        iVar6 = local_3c * 0x3d + local_44 * 0x268;
        local_38 = (Inven_Item *)(this + iVar6 + 0x2c);
        if ((local_38 != (Inven_Item *)0x0) && (*(int *)(this + iVar6 + 0x2e) != -1)) {
          local_34 = 0xffffffff;
          if (*(int *)(this + iVar6 + 0x2e) == 0) {
            uVar3 = Inven_Item::get_add_info(local_38);
            pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW(local_40);
            local_30 = CInventory::gain_money(pCVar4,uVar3,5,1,0);
            iVar5 = Inven_Item::get_add_info(local_38);
            iVar6 = local_30;
            if (local_30 < iVar5) {
              uVar3 = Inven_Item::get_add_info(local_38);
              CUser::SendMoneyFullReason((CUser *)local_40,0,uVar3,iVar6);
            }
            local_34 = 0;
          }
          else {
            uVar3 = CUserCharacInfo::getCurCharacInvenW(local_40);
            local_34 = CInventory::insertItemIntoInventory
                                 (uVar3,*(undefined4 *)local_38,*(undefined4 *)(local_38 + 4),
                                  *(undefined4 *)(local_38 + 8),*(undefined4 *)(local_38 + 0xc),
                                  *(undefined4 *)(local_38 + 0x10),*(undefined4 *)(local_38 + 0x14),
                                  *(undefined4 *)(local_38 + 0x18),*(undefined4 *)(local_38 + 0x1c),
                                  *(undefined4 *)(local_38 + 0x20),*(undefined4 *)(local_38 + 0x24),
                                  *(undefined4 *)(local_38 + 0x28),*(undefined4 *)(local_38 + 0x2c),
                                  *(undefined4 *)(local_38 + 0x30),*(undefined4 *)(local_38 + 0x34),
                                  *(undefined4 *)(local_38 + 0x38),local_38[0x3c],0xb,1,1);
          }
          if (local_34 < 0) {
            local_2c = 0;
            local_28 = 0;
            uVar7 = 0;
            do {
              *(undefined4 *)((int)local_68 + uVar7) = 0;
              uVar7 = uVar7 + 4;
            } while (uVar7 < 0x18);
            iVar6 = *(int *)(local_38 + 2);
            this_00 = (CDataManager *)G_CDataManager();
            local_24 = (CItem *)CDataManager::find_item(this_00,iVar6);
            if (local_24 != (CItem *)0x0) {
              memset(local_186,0,0x100);
              memset(local_86,0,0x1e);
              pcVar8 = (char *)RDARScriptStringManager::findString
                                         ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                          "chn_game_server_msg_21",(bool *)0x0);
              strncpy(local_86,pcVar8,0x1d);
              pcVar8 = (char *)RDARScriptStringManager::findString
                                         ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                          "chn_game_server_msg_22",(bool *)0x0);
              strncpy(local_186,pcVar8,0xff);
              cVar2 = (**(code **)(*(int *)local_24 + 0x10))(local_24);
              if (cVar2 != '\0') {
                local_20 = CItem::getUsablePeriod(local_24);
                if ((local_20 == 0) || (local_20 == 0x16d)) {
                  local_28 = 0;
                }
                else {
                  local_28 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
                  local_28 = local_28 + local_20 * 0x15180;
                }
              }
              cVar2 = (**(code **)(*(int *)local_24 + 0x10))(local_24);
              if (cVar2 == '\0') {
                uVar3 = CUser::GetServerGroup((CUser *)local_40);
                sVar9 = strlen(local_186);
                uVar10 = CUserCharacInfo::getCurCharacNo(local_40);
                CMailBoxHelper::ReqDBSendNewSystemMail
                          (local_86,local_38,0,uVar10,local_186,sVar9,0xf,uVar3,0,0);
              }
              else {
                sVar9 = strlen(local_186);
                uVar3 = CUserCharacInfo::getCurCharacNo(local_40);
                pcVar8 = (char *)CGenUniqueNo::genIPGNo(3,uVar3,local_68);
                cVar2 = CEquipItem::get_endurance((CEquipItem *)local_24);
                iVar6 = *(int *)(local_38 + 2);
                iVar5 = CUserCharacInfo::getCurCharacNo(local_40);
                CMailBoxHelper::ReqDBSendNewAvatarMail
                          ((CUser *)local_40,iVar5,iVar6,local_28,cVar2,'\0',pcVar8,local_186,sVar9)
                ;
              }
            }
          }
          else {
            PacketGuard::PacketGuard(local_50);
                    /* try { // try from 081449b5 to 08144a45 has its CatchHandler @ 08144a48 */
            InterfacePacketBuf::put_header((InterfacePacketBuf *)local_50,0,0xe);
            iVar6 = Inven_Item::GetItemSpace(local_38);
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,iVar6);
            InterfacePacketBuf::put_short((InterfacePacketBuf *)local_50,1);
            uVar3 = Inven_Item::GetItemSpace(local_38);
            uVar3 = GetInvenTypeFromItemSpace(uVar3);
            pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenR(local_40);
            CInventory::MakeItemPacket(pCVar4,uVar3,local_34,local_50);
            InterfacePacketBuf::finalize((InterfacePacketBuf *)local_50,true);
            CUser::Send((CUser *)local_40,local_50);
            PacketGuard::~PacketGuard(local_50);
          }
        }
      }
    }
  }
  return 1;
}

```

---

## SendELPLPacket

```asm
// === 081441d4 WongWork::CBossTower::SendELPLPacket  [0x081441d4-0x8144329] ===
 81441d4:	55                   	push   %ebp
 81441d5:	89 e5                	mov    %esp,%ebp
 81441d7:	56                   	push   %esi
 81441d8:	53                   	push   %ebx
 81441d9:	83 ec 30             	sub    $0x30,%esp
 81441dc:	c6 45 ef 01          	movb   $0x1,-0x11(%ebp)
 81441e0:	8b 45 08             	mov    0x8(%ebp),%eax
 81441e3:	8b 40 04             	mov    0x4(%eax),%eax
 81441e6:	8b 80 d8 0c 00 00    	mov    0xcd8(%eax),%eax
 81441ec:	83 f8 01             	cmp    $0x1,%eax
 81441ef:	0f 84 92 00 00 00    	je     8144287 <_ZN8WongWork10CBossTower14SendELPLPacketEv+0xb3>
 81441f5:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 81441fc:	eb 7a                	jmp    8144278 <_ZN8WongWork10CBossTower14SendELPLPacketEv+0xa4>
 81441fe:	8b 45 08             	mov    0x8(%ebp),%eax
 8144201:	8b 40 04             	mov    0x4(%eax),%eax
 8144204:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8144207:	89 54 24 04          	mov    %edx,0x4(%esp)
 814420b:	89 04 24             	mov    %eax,(%esp)
 814420e:	e8 51 15 00 00       	call   8145764 <_ZN6CParty8get_userEi>
 8144213:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8144216:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 814421a:	74 1c                	je     8144238 <_ZN8WongWork10CBossTower14SendELPLPacketEv+0x64>
 814421c:	8b 45 08             	mov    0x8(%ebp),%eax
 814421f:	8b 40 04             	mov    0x4(%eax),%eax
 8144222:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8144225:	89 54 24 04          	mov    %edx,0x4(%esp)
 8144229:	89 04 24             	mov    %eax,(%esp)
 814422c:	e8 37 16 00 00       	call   8145868 <_ZN6CParty14checkValidUserEi>
 8144231:	83 f0 01             	xor    $0x1,%eax
 8144234:	84 c0                	test   %al,%al
 8144236:	74 07                	je     814423f <_ZN8WongWork10CBossTower14SendELPLPacketEv+0x6b>
 8144238:	b8 01 00 00 00       	mov    $0x1,%eax
 814423d:	eb 05                	jmp    8144244 <_ZN8WongWork10CBossTower14SendELPLPacketEv+0x70>
 814423f:	b8 00 00 00 00       	mov    $0x0,%eax
 8144244:	84 c0                	test   %al,%al
 8144246:	75 2b                	jne    8144273 <_ZN8WongWork10CBossTower14SendELPLPacketEv+0x9f>
 8144248:	c6 45 df 00          	movb   $0x0,-0x21(%ebp)
 814424c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8144253:	00 
 8144254:	8d 45 df             	lea    -0x21(%ebp),%eax
 8144257:	89 44 24 04          	mov    %eax,0x4(%esp)
 814425b:	8b 45 08             	mov    0x8(%ebp),%eax
 814425e:	89 04 24             	mov    %eax,(%esp)
 8144261:	e8 40 ed ff ff       	call   8142fa6 <_ZN8WongWork10CBossTower23checkStartGameConditionERhb>
 8144266:	83 f0 01             	xor    $0x1,%eax
 8144269:	84 c0                	test   %al,%al
 814426b:	74 07                	je     8144274 <_ZN8WongWork10CBossTower14SendELPLPacketEv+0xa0>
 814426d:	c6 45 ef 00          	movb   $0x0,-0x11(%ebp)
 8144271:	eb 14                	jmp    8144287 <_ZN8WongWork10CBossTower14SendELPLPacketEv+0xb3>
 8144273:	90                   	nop
 8144274:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8144278:	83 7d f0 03          	cmpl   $0x3,-0x10(%ebp)
 814427c:	0f 9e c0             	setle  %al
 814427f:	84 c0                	test   %al,%al
 8144281:	0f 85 77 ff ff ff    	jne    81441fe <_ZN8WongWork10CBossTower14SendELPLPacketEv+0x2a>
 8144287:	8d 45 e0             	lea    -0x20(%ebp),%eax
 814428a:	89 04 24             	mov    %eax,(%esp)
 814428d:	e8 ba 9a 44 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8144292:	c7 44 24 08 e4 01 00 	movl   $0x1e4,0x8(%esp)
 8144299:	00 
 814429a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81442a1:	00 
 81442a2:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81442a5:	89 04 24             	mov    %eax,(%esp)
 81442a8:	e8 4f 76 f8 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81442ad:	80 7d ef 00          	cmpb   $0x0,-0x11(%ebp)
 81442b1:	74 07                	je     81442ba <_ZN8WongWork10CBossTower14SendELPLPacketEv+0xe6>
 81442b3:	b8 01 00 00 00       	mov    $0x1,%eax
 81442b8:	eb 05                	jmp    81442bf <_ZN8WongWork10CBossTower14SendELPLPacketEv+0xeb>
 81442ba:	b8 00 00 00 00       	mov    $0x0,%eax
 81442bf:	89 44 24 04          	mov    %eax,0x4(%esp)
 81442c3:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81442c6:	89 04 24             	mov    %eax,(%esp)
 81442c9:	e8 52 76 f8 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81442ce:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81442d5:	00 
 81442d6:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81442d9:	89 04 24             	mov    %eax,(%esp)
 81442dc:	e8 77 76 f8 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81442e1:	8b 45 08             	mov    0x8(%ebp),%eax
 81442e4:	8b 40 04             	mov    0x4(%eax),%eax
 81442e7:	8d 55 e0             	lea    -0x20(%ebp),%edx
 81442ea:	89 54 24 04          	mov    %edx,0x4(%esp)
 81442ee:	89 04 24             	mov    %eax,(%esp)
 81442f1:	e8 58 8e 45 00       	call   859d14e <_ZN6CParty13send_to_partyER11PacketGuard>
 81442f6:	bb 01 00 00 00       	mov    $0x1,%ebx
 81442fb:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81442fe:	89 04 24             	mov    %eax,(%esp)
 8144301:	e8 7a 9b 44 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8144306:	89 d8                	mov    %ebx,%eax
 8144308:	83 c4 30             	add    $0x30,%esp
 814430b:	5b                   	pop    %ebx
 814430c:	5e                   	pop    %esi
 814430d:	5d                   	pop    %ebp
 814430e:	c3                   	ret
 814430f:	89 d3                	mov    %edx,%ebx
 8144311:	89 c6                	mov    %eax,%esi
 8144313:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8144316:	89 04 24             	mov    %eax,(%esp)
 8144319:	e8 62 9b 44 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 814431e:	89 f0                	mov    %esi,%eax
 8144320:	89 da                	mov    %ebx,%edx
 8144322:	89 04 24             	mov    %eax,(%esp)
 8144325:	e8 26 f4 99 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// WongWork::CBossTower::SendELPLPacket @ 0x81441d4

/* WongWork::CBossTower::SendELPLPacket() */

undefined4 __thiscall WongWork::CBossTower::SendELPLPacket(CBossTower *this)

{
  bool bVar1;
  char cVar2;
  uchar local_25;
  PacketGuard local_24 [15];
  char local_15;
  int local_14;
  int local_10;
  
  local_15 = '\x01';
  if (*(int *)(*(int *)(this + 4) + 0xcd8) != 1) {
    for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
      local_10 = CParty::get_user(*(CParty **)(this + 4),local_14);
      if ((local_10 == 0) ||
         (cVar2 = CParty::checkValidUser(*(CParty **)(this + 4),local_14), cVar2 != '\x01')) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (!bVar1) {
        local_25 = '\0';
        cVar2 = checkStartGameCondition(this,&local_25,false);
        if (cVar2 != '\x01') {
          local_15 = '\0';
          break;
        }
      }
    }
  }
  PacketGuard::PacketGuard(local_24);
                    /* try { // try from 081442a8 to 081442f5 has its CatchHandler @ 0814430f */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,0,0x1e4);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,(uint)(local_15 != '\0'));
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
  CParty::send_to_party(*(CParty **)(this + 4),local_24);
  PacketGuard::~PacketGuard(local_24);
  return 1;
}

```

---

## SendRewardPacket

```asm
// === 0814432a WongWork::CBossTower::SendRewardPacket  [0x0814432a-0x8144507] ===
 814432a:	55                   	push   %ebp
 814432b:	89 e5                	mov    %esp,%ebp
 814432d:	56                   	push   %esi
 814432e:	53                   	push   %ebx
 814432f:	83 ec 30             	sub    $0x30,%esp
 8144332:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 8144339:	e9 af 01 00 00       	jmp    81444ed <_ZN8WongWork10CBossTower16SendRewardPacketEv+0x1c3>
 814433e:	8b 45 08             	mov    0x8(%ebp),%eax
 8144341:	8b 40 04             	mov    0x4(%eax),%eax
 8144344:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8144347:	89 54 24 04          	mov    %edx,0x4(%esp)
 814434b:	89 04 24             	mov    %eax,(%esp)
 814434e:	e8 11 14 00 00       	call   8145764 <_ZN6CParty8get_userEi>
 8144353:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8144356:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 814435a:	74 1c                	je     8144378 <_ZN8WongWork10CBossTower16SendRewardPacketEv+0x4e>
 814435c:	8b 45 08             	mov    0x8(%ebp),%eax
 814435f:	8b 40 04             	mov    0x4(%eax),%eax
 8144362:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8144365:	89 54 24 04          	mov    %edx,0x4(%esp)
 8144369:	89 04 24             	mov    %eax,(%esp)
 814436c:	e8 f7 14 00 00       	call   8145868 <_ZN6CParty14checkValidUserEi>
 8144371:	83 f0 01             	xor    $0x1,%eax
 8144374:	84 c0                	test   %al,%al
 8144376:	74 07                	je     814437f <_ZN8WongWork10CBossTower16SendRewardPacketEv+0x55>
 8144378:	b8 01 00 00 00       	mov    $0x1,%eax
 814437d:	eb 05                	jmp    8144384 <_ZN8WongWork10CBossTower16SendRewardPacketEv+0x5a>
 814437f:	b8 00 00 00 00       	mov    $0x0,%eax
 8144384:	84 c0                	test   %al,%al
 8144386:	0f 85 5c 01 00 00    	jne    81444e8 <_ZN8WongWork10CBossTower16SendRewardPacketEv+0x1be>
 814438c:	8d 45 dc             	lea    -0x24(%ebp),%eax
 814438f:	89 04 24             	mov    %eax,(%esp)
 8144392:	e8 b5 99 44 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8144397:	c7 44 24 08 e3 01 00 	movl   $0x1e3,0x8(%esp)
 814439e:	00 
 814439f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81443a6:	00 
 81443a7:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81443aa:	89 04 24             	mov    %eax,(%esp)
 81443ad:	e8 4a 75 f8 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81443b2:	8b 55 e8             	mov    -0x18(%ebp),%edx
 81443b5:	8b 45 08             	mov    0x8(%ebp),%eax
 81443b8:	83 c2 04             	add    $0x4,%edx
 81443bb:	8b 44 90 08          	mov    0x8(%eax,%edx,4),%eax
 81443bf:	89 44 24 04          	mov    %eax,0x4(%esp)
 81443c3:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81443c6:	89 04 24             	mov    %eax,(%esp)
 81443c9:	e8 6e 75 f8 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81443ce:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 81443d5:	e9 b0 00 00 00       	jmp    814448a <_ZN8WongWork10CBossTower16SendRewardPacketEv+0x160>
 81443da:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81443dd:	8b 55 08             	mov    0x8(%ebp),%edx
 81443e0:	69 c0 68 02 00 00    	imul   $0x268,%eax,%eax
 81443e6:	8d 04 02             	lea    (%edx,%eax,1),%eax
 81443e9:	83 c0 28             	add    $0x28,%eax
 81443ec:	8b 00                	mov    (%eax),%eax
 81443ee:	89 44 24 04          	mov    %eax,0x4(%esp)
 81443f2:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81443f5:	89 04 24             	mov    %eax,(%esp)
 81443f8:	e8 23 75 f8 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81443fd:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8144404:	eb 62                	jmp    8144468 <_ZN8WongWork10CBossTower16SendRewardPacketEv+0x13e>
 8144406:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8144409:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 814440c:	8b 45 08             	mov    0x8(%ebp),%eax
 814440f:	6b c9 3d             	imul   $0x3d,%ecx,%ecx
 8144412:	69 d2 68 02 00 00    	imul   $0x268,%edx,%edx
 8144418:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 814441b:	01 d0                	add    %edx,%eax
 814441d:	83 c0 20             	add    $0x20,%eax
 8144420:	8b 40 0e             	mov    0xe(%eax),%eax
 8144423:	89 44 24 04          	mov    %eax,0x4(%esp)
 8144427:	8d 45 dc             	lea    -0x24(%ebp),%eax
 814442a:	89 04 24             	mov    %eax,(%esp)
 814442d:	e8 0a 75 f8 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8144432:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8144435:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8144438:	6b d2 3d             	imul   $0x3d,%edx,%edx
 814443b:	69 c0 68 02 00 00    	imul   $0x268,%eax,%eax
 8144441:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8144444:	83 c0 20             	add    $0x20,%eax
 8144447:	03 45 08             	add    0x8(%ebp),%eax
 814444a:	83 c0 0c             	add    $0xc,%eax
 814444d:	89 04 24             	mov    %eax,(%esp)
 8144450:	e8 e5 33 fb ff       	call   80f783a <_ZNK10Inven_Item12get_add_infoEv>
 8144455:	89 44 24 04          	mov    %eax,0x4(%esp)
 8144459:	8d 45 dc             	lea    -0x24(%ebp),%eax
 814445c:	89 04 24             	mov    %eax,(%esp)
 814445f:	e8 d8 74 f8 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8144464:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8144468:	8b 45 f0             	mov    -0x10(%ebp),%eax
 814446b:	8b 55 08             	mov    0x8(%ebp),%edx
 814446e:	69 c0 68 02 00 00    	imul   $0x268,%eax,%eax
 8144474:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8144477:	83 c0 28             	add    $0x28,%eax
 814447a:	8b 00                	mov    (%eax),%eax
 814447c:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 814447f:	0f 9f c0             	setg   %al
 8144482:	84 c0                	test   %al,%al
 8144484:	75 80                	jne    8144406 <_ZN8WongWork10CBossTower16SendRewardPacketEv+0xdc>
 8144486:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 814448a:	83 7d f0 03          	cmpl   $0x3,-0x10(%ebp)
 814448e:	0f 9e c0             	setle  %al
 8144491:	84 c0                	test   %al,%al
 8144493:	0f 85 41 ff ff ff    	jne    81443da <_ZN8WongWork10CBossTower16SendRewardPacketEv+0xb0>
 8144499:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81444a0:	00 
 81444a1:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81444a4:	89 04 24             	mov    %eax,(%esp)
 81444a7:	e8 ac 74 f8 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81444ac:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81444af:	89 44 24 04          	mov    %eax,0x4(%esp)
 81444b3:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81444b6:	89 04 24             	mov    %eax,(%esp)
 81444b9:	e8 fc 40 50 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81444be:	eb 1b                	jmp    81444db <_ZN8WongWork10CBossTower16SendRewardPacketEv+0x1b1>
 81444c0:	89 d3                	mov    %edx,%ebx
 81444c2:	89 c6                	mov    %eax,%esi
 81444c4:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81444c7:	89 04 24             	mov    %eax,(%esp)
 81444ca:	e8 b1 99 44 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81444cf:	89 f0                	mov    %esi,%eax
 81444d1:	89 da                	mov    %ebx,%edx
 81444d3:	89 04 24             	mov    %eax,(%esp)
 81444d6:	e8 75 f2 99 00       	call   8ae3750 <_Unwind_Resume>
 81444db:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81444de:	89 04 24             	mov    %eax,(%esp)
 81444e1:	e8 9a 99 44 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81444e6:	eb 01                	jmp    81444e9 <_ZN8WongWork10CBossTower16SendRewardPacketEv+0x1bf>
 81444e8:	90                   	nop
 81444e9:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 81444ed:	83 7d e8 03          	cmpl   $0x3,-0x18(%ebp)
 81444f1:	0f 9e c0             	setle  %al
 81444f4:	84 c0                	test   %al,%al
 81444f6:	0f 85 42 fe ff ff    	jne    814433e <_ZN8WongWork10CBossTower16SendRewardPacketEv+0x14>
 81444fc:	b8 01 00 00 00       	mov    $0x1,%eax
 8144501:	83 c4 30             	add    $0x30,%esp
 8144504:	5b                   	pop    %ebx
 8144505:	5e                   	pop    %esi
 8144506:	5d                   	pop    %ebp
 8144507:	c3                   	ret

```

```c
// WongWork::CBossTower::SendRewardPacket @ 0x814432a

/* WongWork::CBossTower::SendRewardPacket() */

undefined4 __thiscall WongWork::CBossTower::SendRewardPacket(CBossTower *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  PacketGuard local_28 [12];
  int local_1c;
  CUser *local_18;
  int local_14;
  int local_10;
  
  local_1c = 0;
  do {
    if (3 < local_1c) {
      return 1;
    }
    local_18 = (CUser *)CParty::get_user(*(CParty **)(this + 4),local_1c);
    if (local_18 == (CUser *)0x0) {
LAB_08144378:
      bVar1 = true;
    }
    else {
      cVar2 = CParty::checkValidUser(*(CParty **)(this + 4),local_1c);
      if (cVar2 != '\x01') goto LAB_08144378;
      bVar1 = false;
    }
    if (!bVar1) {
      PacketGuard::PacketGuard(local_28);
                    /* try { // try from 081443ad to 081444bd has its CatchHandler @ 081444c0 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,0,0x1e3);
      InterfacePacketBuf::put_int
                ((InterfacePacketBuf *)local_28,*(int *)(this + (local_1c + 4) * 4 + 8));
      for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
        InterfacePacketBuf::put_byte
                  ((InterfacePacketBuf *)local_28,*(int *)(this + local_14 * 0x268 + 0x28));
        for (local_10 = 0; local_10 < *(int *)(this + local_14 * 0x268 + 0x28);
            local_10 = local_10 + 1) {
          InterfacePacketBuf::put_int
                    ((InterfacePacketBuf *)local_28,
                     *(int *)(this + local_10 * 0x3d + local_14 * 0x268 + 0x2e));
          iVar3 = Inven_Item::get_add_info
                            ((Inven_Item *)(this + local_10 * 0x3d + local_14 * 0x268 + 0x2c));
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_28,iVar3);
        }
      }
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
      CUser::Send(local_18,local_28);
      PacketGuard::~PacketGuard(local_28);
    }
    local_1c = local_1c + 1;
  } while( true );
}

```

---

## _destroy

```asm
// === 08142b36 WongWork::CBossTower::_destroy  [0x08142b36-0x8142b71] ===
 8142b36:	55                   	push   %ebp
 8142b37:	89 e5                	mov    %esp,%ebp
 8142b39:	83 ec 18             	sub    $0x18,%esp
 8142b3c:	8b 45 08             	mov    0x8(%ebp),%eax
 8142b3f:	05 00 0b 00 00       	add    $0xb00,%eax
 8142b44:	89 04 24             	mov    %eax,(%esp)
 8142b47:	e8 80 3d 01 00       	call   81568cc <_ZN23CBossDungeonEntranceLog20BossTowerLogDBUpdateEv>
 8142b4c:	8b 45 08             	mov    0x8(%ebp),%eax
 8142b4f:	05 00 0b 00 00       	add    $0xb00,%eax
 8142b54:	89 04 24             	mov    %eax,(%esp)
 8142b57:	e8 ea 2b 00 00       	call   8145746 <_ZN23CBossDungeonEntranceLog5resetEv>
 8142b5c:	e8 2d 96 f8 ff       	call   80cc18e <_Z14G_CGameManagerv>
 8142b61:	8b 55 08             	mov    0x8(%ebp),%edx
 8142b64:	89 54 24 04          	mov    %edx,0x4(%esp)
 8142b68:	89 04 24             	mov    %eax,(%esp)
 8142b6b:	e8 20 2f 15 00       	call   8295a90 <_ZN12CGameManager15returnBossTowerEPN8WongWork10CBossTowerE>
 8142b70:	c9                   	leave
 8142b71:	c3                   	ret

```

```c
// WongWork::CBossTower::_destroy @ 0x8142b36

/* WongWork::CBossTower::_destroy() */

void __thiscall WongWork::CBossTower::_destroy(CBossTower *this)

{
  CGameManager *this_00;
  
  CBossDungeonEntranceLog::BossTowerLogDBUpdate((CBossDungeonEntranceLog *)(this + 0xb00));
  CBossDungeonEntranceLog::reset((CBossDungeonEntranceLog *)(this + 0xb00));
  this_00 = (CGameManager *)G_CGameManager();
  CGameManager::returnBossTower(this_00,this);
  return;
}

```

---

## _onPrepareFinishTower

```asm
// === 08142d24 WongWork::CBossTower::_onPrepareFinishTower  [0x08142d24-0x8142f31] ===
 8142d24:	55                   	push   %ebp
 8142d25:	89 e5                	mov    %esp,%ebp
 8142d27:	57                   	push   %edi
 8142d28:	53                   	push   %ebx
 8142d29:	81 ec 40 01 00 00    	sub    $0x140,%esp
 8142d2f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8142d32:	88 85 e4 fe ff ff    	mov    %al,-0x11c(%ebp)
 8142d38:	8b 45 08             	mov    0x8(%ebp),%eax
 8142d3b:	0f b6 95 e4 fe ff ff 	movzbl -0x11c(%ebp),%edx
 8142d42:	88 90 fc 0a 00 00    	mov    %dl,0xafc(%eax)
 8142d48:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8142d4f:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8142d56:	e8 51 2b 00 00       	call   81458ac <_ZN11CSystemTime15getCurTickCountEv>
 8142d5b:	89 c2                	mov    %eax,%edx
 8142d5d:	8b 45 08             	mov    0x8(%ebp),%eax
 8142d60:	89 90 f8 0a 00 00    	mov    %edx,0xaf8(%eax)
 8142d66:	8b 45 08             	mov    0x8(%ebp),%eax
 8142d69:	8b 90 f8 0a 00 00    	mov    0xaf8(%eax),%edx
 8142d6f:	8b 45 08             	mov    0x8(%ebp),%eax
 8142d72:	8b 80 f4 0a 00 00    	mov    0xaf4(%eax),%eax
 8142d78:	89 d1                	mov    %edx,%ecx
 8142d7a:	29 c1                	sub    %eax,%ecx
 8142d7c:	ba d3 4d 62 10       	mov    $0x10624dd3,%edx
 8142d81:	89 c8                	mov    %ecx,%eax
 8142d83:	f7 ea                	imul   %edx
 8142d85:	c1 fa 06             	sar    $0x6,%edx
 8142d88:	89 c8                	mov    %ecx,%eax
 8142d8a:	c1 f8 1f             	sar    $0x1f,%eax
 8142d8d:	89 d1                	mov    %edx,%ecx
 8142d8f:	29 c1                	sub    %eax,%ecx
 8142d91:	89 c8                	mov    %ecx,%eax
 8142d93:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8142d96:	8d 95 ed fe ff ff    	lea    -0x113(%ebp),%edx
 8142d9c:	bb ff 00 00 00       	mov    $0xff,%ebx
 8142da1:	b8 00 00 00 00       	mov    $0x0,%eax
 8142da6:	89 d1                	mov    %edx,%ecx
 8142da8:	83 e1 01             	and    $0x1,%ecx
 8142dab:	85 c9                	test   %ecx,%ecx
 8142dad:	74 08                	je     8142db7 <_ZN8WongWork10CBossTower21_onPrepareFinishTowerEb+0x93>
 8142daf:	88 02                	mov    %al,(%edx)
 8142db1:	83 c2 01             	add    $0x1,%edx
 8142db4:	83 eb 01             	sub    $0x1,%ebx
 8142db7:	89 d1                	mov    %edx,%ecx
 8142db9:	83 e1 02             	and    $0x2,%ecx
 8142dbc:	85 c9                	test   %ecx,%ecx
 8142dbe:	74 09                	je     8142dc9 <_ZN8WongWork10CBossTower21_onPrepareFinishTowerEb+0xa5>
 8142dc0:	66 89 02             	mov    %ax,(%edx)
 8142dc3:	83 c2 02             	add    $0x2,%edx
 8142dc6:	83 eb 02             	sub    $0x2,%ebx
 8142dc9:	89 d9                	mov    %ebx,%ecx
 8142dcb:	c1 e9 02             	shr    $0x2,%ecx
 8142dce:	89 d7                	mov    %edx,%edi
 8142dd0:	f3 ab                	rep stos %eax,%es:(%edi)
 8142dd2:	89 fa                	mov    %edi,%edx
 8142dd4:	89 d9                	mov    %ebx,%ecx
 8142dd6:	83 e1 02             	and    $0x2,%ecx
 8142dd9:	85 c9                	test   %ecx,%ecx
 8142ddb:	74 06                	je     8142de3 <_ZN8WongWork10CBossTower21_onPrepareFinishTowerEb+0xbf>
 8142ddd:	66 89 02             	mov    %ax,(%edx)
 8142de0:	83 c2 02             	add    $0x2,%edx
 8142de3:	89 d9                	mov    %ebx,%ecx
 8142de5:	83 e1 01             	and    $0x1,%ecx
 8142de8:	85 c9                	test   %ecx,%ecx
 8142dea:	74 05                	je     8142df1 <_ZN8WongWork10CBossTower21_onPrepareFinishTowerEb+0xcd>
 8142dec:	88 02                	mov    %al,(%edx)
 8142dee:	83 c2 01             	add    $0x1,%edx
 8142df1:	8b 45 08             	mov    0x8(%ebp),%eax
 8142df4:	8b 40 04             	mov    0x4(%eax),%eax
 8142df7:	8d 95 ed fe ff ff    	lea    -0x113(%ebp),%edx
 8142dfd:	89 54 24 04          	mov    %edx,0x4(%esp)
 8142e01:	89 04 24             	mov    %eax,(%esp)
 8142e04:	e8 79 2a 00 00       	call   8145882 <_ZN6CParty14getMemberNamesEPc>
 8142e09:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8142e10:	e9 c2 00 00 00       	jmp    8142ed7 <_ZN8WongWork10CBossTower21_onPrepareFinishTowerEb+0x1b3>
 8142e15:	8b 45 08             	mov    0x8(%ebp),%eax
 8142e18:	8b 40 04             	mov    0x4(%eax),%eax
 8142e1b:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8142e1e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8142e22:	89 04 24             	mov    %eax,(%esp)
 8142e25:	e8 3a 29 00 00       	call   8145764 <_ZN6CParty8get_userEi>
 8142e2a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8142e2d:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8142e31:	74 1c                	je     8142e4f <_ZN8WongWork10CBossTower21_onPrepareFinishTowerEb+0x12b>
 8142e33:	8b 45 08             	mov    0x8(%ebp),%eax
 8142e36:	8b 40 04             	mov    0x4(%eax),%eax
 8142e39:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8142e3c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8142e40:	89 04 24             	mov    %eax,(%esp)
 8142e43:	e8 20 2a 00 00       	call   8145868 <_ZN6CParty14checkValidUserEi>
 8142e48:	83 f0 01             	xor    $0x1,%eax
 8142e4b:	84 c0                	test   %al,%al
 8142e4d:	74 07                	je     8142e56 <_ZN8WongWork10CBossTower21_onPrepareFinishTowerEb+0x132>
 8142e4f:	b8 01 00 00 00       	mov    $0x1,%eax
 8142e54:	eb 05                	jmp    8142e5b <_ZN8WongWork10CBossTower21_onPrepareFinishTowerEb+0x137>
 8142e56:	b8 00 00 00 00       	mov    $0x0,%eax
 8142e5b:	84 c0                	test   %al,%al
 8142e5d:	75 73                	jne    8142ed2 <_ZN8WongWork10CBossTower21_onPrepareFinishTowerEb+0x1ae>
 8142e5f:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8142e62:	8b 45 08             	mov    0x8(%ebp),%eax
 8142e65:	81 c2 74 02 00 00    	add    $0x274,%edx
 8142e6b:	8b 44 90 08          	mov    0x8(%eax,%edx,4),%eax
 8142e6f:	85 c0                	test   %eax,%eax
 8142e71:	75 3a                	jne    8142ead <_ZN8WongWork10CBossTower21_onPrepareFinishTowerEb+0x189>
 8142e73:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8142e76:	89 04 24             	mov    %eax,(%esp)
 8142e79:	e8 dc 6a fb ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 8142e7e:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 8142e85:	00 
 8142e86:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 8142e8d:	00 
 8142e8e:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8142e95:	00 
 8142e96:	c7 44 24 08 3a 01 00 	movl   $0x13a,0x8(%esp)
 8142e9d:	00 
 8142e9e:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8142ea1:	89 54 24 04          	mov    %edx,0x4(%esp)
 8142ea5:	89 04 24             	mov    %eax,(%esp)
 8142ea8:	e8 d1 5d fb ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 8142ead:	0f b6 85 e4 fe ff ff 	movzbl -0x11c(%ebp),%eax
 8142eb4:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8142eb7:	8d 8a 00 97 07 00    	lea    0x79700(%edx),%ecx
 8142ebd:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8142ec0:	89 54 24 08          	mov    %edx,0x8(%esp)
 8142ec4:	89 44 24 04          	mov    %eax,0x4(%esp)
 8142ec8:	89 0c 24             	mov    %ecx,(%esp)
 8142ecb:	e8 f4 1b 54 00       	call   8684ac4 <_ZN15cUserHistoryLog16DungeonClearInfoEil>
 8142ed0:	eb 01                	jmp    8142ed3 <_ZN8WongWork10CBossTower21_onPrepareFinishTowerEb+0x1af>
 8142ed2:	90                   	nop
 8142ed3:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8142ed7:	83 7d f0 03          	cmpl   $0x3,-0x10(%ebp)
 8142edb:	0f 9e c0             	setle  %al
 8142ede:	84 c0                	test   %al,%al
 8142ee0:	0f 85 2f ff ff ff    	jne    8142e15 <_ZN8WongWork10CBossTower21_onPrepareFinishTowerEb+0xf1>
 8142ee6:	8b 45 08             	mov    0x8(%ebp),%eax
 8142ee9:	8b 98 f0 0a 00 00    	mov    0xaf0(%eax),%ebx
 8142eef:	e8 88 35 fb ff       	call   80f647c <_Z12G_TimerQueuev>
 8142ef4:	c7 44 24 18 a3 00 00 	movl   $0xa3,0x18(%esp)
 8142efb:	00 
 8142efc:	c7 44 24 14 a3 00 00 	movl   $0xa3,0x14(%esp)
 8142f03:	00 
 8142f04:	c7 44 24 10 05 00 00 	movl   $0x5,0x10(%esp)
 8142f0b:	00 
 8142f0c:	c7 44 24 0c a3 00 00 	movl   $0xa3,0xc(%esp)
 8142f13:	00 
 8142f14:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8142f18:	c7 44 24 04 07 00 00 	movl   $0x7,0x4(%esp)
 8142f1f:	00 
 8142f20:	89 04 24             	mov    %eax,(%esp)
 8142f23:	e8 ee de 4e 00       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 8142f28:	81 c4 40 01 00 00    	add    $0x140,%esp
 8142f2e:	5b                   	pop    %ebx
 8142f2f:	5f                   	pop    %edi
 8142f30:	5d                   	pop    %ebp
 8142f31:	c3                   	ret

```

```c
// WongWork::CBossTower::_onPrepareFinishTower @ 0x8142d24

/* WongWork::CBossTower::_onPrepareFinishTower(bool) */

void __thiscall WongWork::CBossTower::_onPrepareFinishTower(CBossTower *this,bool param_1)

{
  char cVar1;
  undefined4 uVar2;
  CHackAnalyzer *pCVar3;
  TimerQueue *pTVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  bool bVar8;
  byte bVar9;
  char local_117;
  char local_116 [254];
  int local_18;
  int local_14;
  CUser *local_10;
  
  bVar9 = 0;
  this[0xafc] = (CBossTower)param_1;
  local_18 = 0;
  uVar2 = CSystemTime::getCurTickCount((CSystemTime *)GlobalData::s_systemTime_);
  *(undefined4 *)(this + 0xaf8) = uVar2;
  local_18 = (*(int *)(this + 0xaf8) - *(int *)(this + 0xaf4)) / 1000;
  pcVar6 = &local_117;
  uVar7 = 0xff;
  bVar8 = ((uint)pcVar6 & 1) != 0;
  if (bVar8) {
    local_117 = '\0';
    pcVar6 = local_116;
    uVar7 = 0xfe;
  }
  if (((uint)pcVar6 & 2) != 0) {
    pcVar6[0] = '\0';
    pcVar6[1] = '\0';
    pcVar6 = pcVar6 + 2;
    uVar7 = uVar7 - 2;
  }
  for (uVar5 = uVar7 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    pcVar6[0] = '\0';
    pcVar6[1] = '\0';
    pcVar6[2] = '\0';
    pcVar6[3] = '\0';
    pcVar6 = pcVar6 + ((uint)bVar9 * -2 + 1) * 4;
  }
  if ((uVar7 & 2) != 0) {
    pcVar6[0] = '\0';
    pcVar6[1] = '\0';
    pcVar6 = pcVar6 + 2;
  }
  if (!bVar8) {
    *pcVar6 = '\0';
  }
  CParty::getMemberNames(*(CParty **)(this + 4),&local_117);
  local_14 = 0;
  do {
    if (3 < local_14) {
      uVar2 = *(undefined4 *)(this + 0xaf0);
      pTVar4 = (TimerQueue *)G_TimerQueue();
      TimerQueue::InsertTimer(pTVar4,7,uVar2,0xa3,5,0xa3,0xa3);
      return;
    }
    local_10 = (CUser *)CParty::get_user(*(CParty **)(this + 4),local_14);
    if (local_10 == (CUser *)0x0) {
LAB_08142e4f:
      bVar8 = true;
    }
    else {
      cVar1 = CParty::checkValidUser(*(CParty **)(this + 4),local_14);
      if (cVar1 != '\x01') goto LAB_08142e4f;
      bVar8 = false;
    }
    if (!bVar8) {
      if (*(int *)(this + (local_14 + 0x274) * 4 + 8) == 0) {
        pCVar3 = (CHackAnalyzer *)CUser::getHackAnalyzer(local_10);
        CHackAnalyzer::addServerHackCnt(pCVar3,local_10,0x13a,1,0,0);
      }
      cUserHistoryLog::DungeonClearInfo
                ((cUserHistoryLog *)(local_10 + 0x79700),(uint)param_1,local_18);
    }
    local_14 = local_14 + 1;
  } while( true );
}

```

---

## _onTimerProcess

```asm
// === 08142cde WongWork::CBossTower::_onTimerProcess  [0x08142cde-0x8142d23] ===
 8142cde:	55                   	push   %ebp
 8142cdf:	89 e5                	mov    %esp,%ebp
 8142ce1:	83 ec 18             	sub    $0x18,%esp
 8142ce4:	8b 45 0c             	mov    0xc(%ebp),%eax
 8142ce7:	3d a4 00 00 00       	cmp    $0xa4,%eax
 8142cec:	74 1b                	je     8142d09 <_ZN8WongWork10CBossTower15_onTimerProcessE13TIMER_MESSAGEj+0x2b>
 8142cee:	3d a5 00 00 00       	cmp    $0xa5,%eax
 8142cf3:	74 21                	je     8142d16 <_ZN8WongWork10CBossTower15_onTimerProcessE13TIMER_MESSAGEj+0x38>
 8142cf5:	3d a3 00 00 00       	cmp    $0xa3,%eax
 8142cfa:	75 25                	jne    8142d21 <_ZN8WongWork10CBossTower15_onTimerProcessE13TIMER_MESSAGEj+0x43>
 8142cfc:	8b 45 08             	mov    0x8(%ebp),%eax
 8142cff:	89 04 24             	mov    %eax,(%esp)
 8142d02:	e8 01 18 00 00       	call   8144508 <_ZN8WongWork10CBossTower16onClearBossTowerEv>
 8142d07:	eb 18                	jmp    8142d21 <_ZN8WongWork10CBossTower15_onTimerProcessE13TIMER_MESSAGEj+0x43>
 8142d09:	8b 45 08             	mov    0x8(%ebp),%eax
 8142d0c:	89 04 24             	mov    %eax,(%esp)
 8142d0f:	e8 b6 22 00 00       	call   8144fca <_ZN8WongWork10CBossTower15onReturnVillageEv>
 8142d14:	eb 0b                	jmp    8142d21 <_ZN8WongWork10CBossTower15_onTimerProcessE13TIMER_MESSAGEj+0x43>
 8142d16:	8b 45 08             	mov    0x8(%ebp),%eax
 8142d19:	89 04 24             	mov    %eax,(%esp)
 8142d1c:	e8 09 24 00 00       	call   814512a <_ZN8WongWork10CBossTower17onReadyTimerCheckEv>
 8142d21:	c9                   	leave
 8142d22:	c3                   	ret
 8142d23:	90                   	nop

```

```c
// WongWork::CBossTower::_onTimerProcess @ 0x8142cde

/* WongWork::CBossTower::_onTimerProcess(TIMER_MESSAGE, unsigned int) */

void WongWork::CBossTower::_onTimerProcess(CBossTower *param_1,int param_2)

{
  if (param_2 == 0xa4) {
    onReturnVillage();
  }
  else if (param_2 == 0xa5) {
    onReadyTimerCheck(param_1);
  }
  else if (param_2 == 0xa3) {
    onClearBossTower(param_1);
  }
  return;
}

```

---

## checkStartGameCondition

```asm
// === 08142fa6 WongWork::CBossTower::checkStartGameCondition  [0x08142fa6-0x81434f3] ===
 8142fa6:	55                   	push   %ebp
 8142fa7:	89 e5                	mov    %esp,%ebp
 8142fa9:	56                   	push   %esi
 8142faa:	53                   	push   %ebx
 8142fab:	81 ec 90 01 00 00    	sub    $0x190,%esp
 8142fb1:	8b 45 10             	mov    0x10(%ebp),%eax
 8142fb4:	88 85 94 fe ff ff    	mov    %al,-0x16c(%ebp)
 8142fba:	8d 85 98 fe ff ff    	lea    -0x168(%ebp),%eax
 8142fc0:	89 c3                	mov    %eax,%ebx
 8142fc2:	be 03 00 00 00       	mov    $0x3,%esi
 8142fc7:	eb 0e                	jmp    8142fd7 <_ZN8WongWork10CBossTower23checkStartGameConditionERhb+0x31>
 8142fc9:	89 1c 24             	mov    %ebx,(%esp)
 8142fcc:	e8 83 88 f8 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 8142fd1:	83 c3 3d             	add    $0x3d,%ebx
 8142fd4:	83 ee 01             	sub    $0x1,%esi
 8142fd7:	83 fe ff             	cmp    $0xffffffff,%esi
 8142fda:	0f 95 c0             	setne  %al
 8142fdd:	84 c0                	test   %al,%al
 8142fdf:	75 e8                	jne    8142fc9 <_ZN8WongWork10CBossTower23checkStartGameConditionERhb+0x23>
 8142fe1:	c7 44 24 08 f4 00 00 	movl   $0xf4,0x8(%esp)
 8142fe8:	00 
 8142fe9:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8142ff0:	00 
 8142ff1:	8d 85 98 fe ff ff    	lea    -0x168(%ebp),%eax
 8142ff7:	89 04 24             	mov    %eax,(%esp)
 8142ffa:	e8 c1 ac f3 ff       	call   807dcc0 <memset@plt>
 8142fff:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 8143006:	00 
 8143007:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 814300e:	00 
 814300f:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8143012:	89 04 24             	mov    %eax,(%esp)
 8143015:	e8 a6 ac f3 ff       	call   807dcc0 <memset@plt>
 814301a:	8b 45 08             	mov    0x8(%ebp),%eax
 814301d:	8b 80 f0 09 00 00    	mov    0x9f0(%eax),%eax
 8143023:	85 c0                	test   %eax,%eax
 8143025:	74 18                	je     814303f <_ZN8WongWork10CBossTower23checkStartGameConditionERhb+0x99>
 8143027:	8b 45 08             	mov    0x8(%ebp),%eax
 814302a:	8b 80 f0 09 00 00    	mov    0x9f0(%eax),%eax
 8143030:	89 04 24             	mov    %eax,(%esp)
 8143033:	e8 9c a2 20 00       	call   834d2d4 <_ZNK8CDungeon21IsOpenScheduleDungeonEv>
 8143038:	83 f0 01             	xor    $0x1,%eax
 814303b:	84 c0                	test   %al,%al
 814303d:	74 07                	je     8143046 <_ZN8WongWork10CBossTower23checkStartGameConditionERhb+0xa0>
 814303f:	b8 01 00 00 00       	mov    $0x1,%eax
 8143044:	eb 05                	jmp    814304b <_ZN8WongWork10CBossTower23checkStartGameConditionERhb+0xa5>
 8143046:	b8 00 00 00 00       	mov    $0x0,%eax
 814304b:	84 c0                	test   %al,%al
 814304d:	0f 84 e5 00 00 00    	je     8143138 <_ZN8WongWork10CBossTower23checkStartGameConditionERhb+0x192>
 8143053:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 814305a:	00 
 814305b:	c7 44 24 08 db 00 00 	movl   $0xdb,0x8(%esp)
 8143062:	00 
 8143063:	c7 44 24 04 00 02 b7 	movl   $0x8b70200,0x4(%esp)
 814306a:	08 
 814306b:	8d 45 cc             	lea    -0x34(%ebp),%eax
 814306e:	89 04 24             	mov    %eax,(%esp)
 8143071:	e8 a2 c6 40 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8143076:	c7 44 24 04 d8 f4 b6 	movl   $0x8b6f4d8,0x4(%esp)
 814307d:	08 
 814307e:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8143081:	89 04 24             	mov    %eax,(%esp)
 8143084:	e8 ff c6 40 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8143089:	8d 45 b0             	lea    -0x50(%ebp),%eax
 814308c:	89 04 24             	mov    %eax,(%esp)
 814308f:	e8 b8 ac 44 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8143094:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8143097:	89 04 24             	mov    %eax,(%esp)
 814309a:	e8 47 88 f8 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 814309f:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 81430a6:	00 
 81430a7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81430ae:	00 
 81430af:	8d 45 b0             	lea    -0x50(%ebp),%eax
 81430b2:	89 04 24             	mov    %eax,(%esp)
 81430b5:	e8 42 88 f8 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81430ba:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81430c1:	00 
 81430c2:	8d 45 b0             	lea    -0x50(%ebp),%eax
 81430c5:	89 04 24             	mov    %eax,(%esp)
 81430c8:	e8 53 88 f8 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81430cd:	c7 44 24 04 15 00 00 	movl   $0x15,0x4(%esp)
 81430d4:	00 
 81430d5:	8d 45 b0             	lea    -0x50(%ebp),%eax
 81430d8:	89 04 24             	mov    %eax,(%esp)
 81430db:	e8 5c 88 f8 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81430e0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81430e7:	00 
 81430e8:	8d 45 b0             	lea    -0x50(%ebp),%eax
 81430eb:	89 04 24             	mov    %eax,(%esp)
 81430ee:	e8 65 88 f8 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81430f3:	8b 45 08             	mov    0x8(%ebp),%eax
 81430f6:	8b 40 04             	mov    0x4(%eax),%eax
 81430f9:	8d 55 b0             	lea    -0x50(%ebp),%edx
 81430fc:	89 54 24 04          	mov    %edx,0x4(%esp)
 8143100:	89 04 24             	mov    %eax,(%esp)
 8143103:	e8 46 a0 45 00       	call   859d14e <_ZN6CParty13send_to_partyER11PacketGuard>
 8143108:	bb 00 00 00 00       	mov    $0x0,%ebx
 814310d:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8143110:	89 04 24             	mov    %eax,(%esp)
 8143113:	e8 68 ad 44 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8143118:	e9 ca 03 00 00       	jmp    81434e7 <_ZN8WongWork10CBossTower23checkStartGameConditionERhb+0x541>
 814311d:	89 d3                	mov    %edx,%ebx
 814311f:	89 c6                	mov    %eax,%esi
 8143121:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8143124:	89 04 24             	mov    %eax,(%esp)
 8143127:	e8 54 ad 44 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 814312c:	89 f0                	mov    %esi,%eax
 814312e:	89 da                	mov    %ebx,%edx
 8143130:	89 04 24             	mov    %eax,(%esp)
 8143133:	e8 18 06 9a 00       	call   8ae3750 <_Unwind_Resume>
 8143138:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 814313f:	e9 87 01 00 00       	jmp    81432cb <_ZN8WongWork10CBossTower23checkStartGameConditionERhb+0x325>
 8143144:	8b 45 08             	mov    0x8(%ebp),%eax
 8143147:	8b 40 04             	mov    0x4(%eax),%eax
 814314a:	8b 55 f0             	mov    -0x10(%ebp),%edx
 814314d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8143151:	89 04 24             	mov    %eax,(%esp)
 8143154:	e8 0b 26 00 00       	call   8145764 <_ZN6CParty8get_userEi>
 8143159:	89 45 f4             	mov    %eax,-0xc(%ebp)
 814315c:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8143160:	74 20                	je     8143182 <_ZN8WongWork10CBossTower23checkStartGameConditionERhb+0x1dc>
 8143162:	8b 45 08             	mov    0x8(%ebp),%eax
 8143165:	8b 40 04             	mov    0x4(%eax),%eax
 8143168:	8b 55 f0             	mov    -0x10(%ebp),%edx
 814316b:	89 54 24 04          	mov    %edx,0x4(%esp)
 814316f:	89 04 24             	mov    %eax,(%esp)
 8143172:	e8 f1 26 00 00       	call   8145868 <_ZN6CParty14checkValidUserEi>
 8143177:	84 c0                	test   %al,%al
 8143179:	74 07                	je     8143182 <_ZN8WongWork10CBossTower23checkStartGameConditionERhb+0x1dc>
 814317b:	b8 01 00 00 00       	mov    $0x1,%eax
 8143180:	eb 05                	jmp    8143187 <_ZN8WongWork10CBossTower23checkStartGameConditionERhb+0x1e1>
 8143182:	b8 00 00 00 00       	mov    $0x0,%eax
 8143187:	84 c0                	test   %al,%al
 8143189:	0f 84 38 01 00 00    	je     81432c7 <_ZN8WongWork10CBossTower23checkStartGameConditionERhb+0x321>
 814318f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8143192:	89 04 24             	mov    %eax,(%esp)
 8143195:	e8 1e 71 f9 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 814319a:	89 c3                	mov    %eax,%ebx
 814319c:	8b 45 08             	mov    0x8(%ebp),%eax
 814319f:	8b 80 f0 09 00 00    	mov    0x9f0(%eax),%eax
 81431a5:	89 04 24             	mov    %eax,(%esp)
 81431a8:	e8 ed 23 00 00       	call   814559a <_ZNK8CDungeon13get_min_levelEv>
 81431ad:	39 c3                	cmp    %eax,%ebx
 81431af:	0f 9c c0             	setl   %al
 81431b2:	84 c0                	test   %al,%al
 81431b4:	0f 84 0d 01 00 00    	je     81432c7 <_ZN8WongWork10CBossTower23checkStartGameConditionERhb+0x321>
 81431ba:	8b 45 08             	mov    0x8(%ebp),%eax
 81431bd:	8b 80 f0 09 00 00    	mov    0x9f0(%eax),%eax
 81431c3:	89 04 24             	mov    %eax,(%esp)
 81431c6:	e8 cf 23 00 00       	call   814559a <_ZNK8CDungeon13get_min_levelEv>
 81431cb:	89 c6                	mov    %eax,%esi
 81431cd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81431d0:	89 04 24             	mov    %eax,(%esp)
 81431d3:	e8 e0 70 f9 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 81431d8:	89 c3                	mov    %eax,%ebx
 81431da:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 81431e1:	00 
 81431e2:	c7 44 24 08 f0 00 00 	movl   $0xf0,0x8(%esp)
 81431e9:	00 
 81431ea:	c7 44 24 04 00 02 b7 	movl   $0x8b70200,0x4(%esp)
 81431f1:	08 
 81431f2:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81431f5:	89 04 24             	mov    %eax,(%esp)
 81431f8:	e8 1b c5 40 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81431fd:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8143201:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8143205:	c7 44 24 04 f8 f4 b6 	movl   $0x8b6f4f8,0x4(%esp)
 814320c:	08 
 814320d:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8143210:	89 04 24             	mov    %eax,(%esp)
 8143213:	e8 70 c5 40 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8143218:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 814321b:	89 04 24             	mov    %eax,(%esp)
 814321e:	e8 29 ab 44 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8143223:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8143226:	89 04 24             	mov    %eax,(%esp)
 8143229:	e8 b8 86 f8 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 814322e:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 8143235:	00 
 8143236:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 814323d:	00 
 814323e:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8143241:	89 04 24             	mov    %eax,(%esp)
 8143244:	e8 b3 86 f8 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8143249:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8143250:	00 
 8143251:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8143254:	89 04 24             	mov    %eax,(%esp)
 8143257:	e8 c4 86 f8 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 814325c:	c7 44 24 04 0e 00 00 	movl   $0xe,0x4(%esp)
 8143263:	00 
 8143264:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8143267:	89 04 24             	mov    %eax,(%esp)
 814326a:	e8 cd 86 f8 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 814326f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8143276:	00 
 8143277:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 814327a:	89 04 24             	mov    %eax,(%esp)
 814327d:	e8 d6 86 f8 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8143282:	8b 45 08             	mov    0x8(%ebp),%eax
 8143285:	8b 40 04             	mov    0x4(%eax),%eax
 8143288:	8d 55 a4             	lea    -0x5c(%ebp),%edx
 814328b:	89 54 24 04          	mov    %edx,0x4(%esp)
 814328f:	89 04 24             	mov    %eax,(%esp)
 8143292:	e8 b7 9e 45 00       	call   859d14e <_ZN6CParty13send_to_partyER11PacketGuard>
 8143297:	bb 00 00 00 00       	mov    $0x0,%ebx
 814329c:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 814329f:	89 04 24             	mov    %eax,(%esp)
 81432a2:	e8 d9 ab 44 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81432a7:	e9 3b 02 00 00       	jmp    81434e7 <_ZN8WongWork10CBossTower23checkStartGameConditionERhb+0x541>
 81432ac:	89 d3                	mov    %edx,%ebx
 81432ae:	89 c6                	mov    %eax,%esi
 81432b0:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 81432b3:	89 04 24             	mov    %eax,(%esp)
 81432b6:	e8 c5 ab 44 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81432bb:	89 f0                	mov    %esi,%eax
 81432bd:	89 da                	mov    %ebx,%edx
 81432bf:	89 04 24             	mov    %eax,(%esp)
 81432c2:	e8 89 04 9a 00       	call   8ae3750 <_Unwind_Resume>
 81432c7:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 81432cb:	83 7d f0 03          	cmpl   $0x3,-0x10(%ebp)
 81432cf:	0f 9e c0             	setle  %al
 81432d2:	84 c0                	test   %al,%al
 81432d4:	0f 85 6a fe ff ff    	jne    8143144 <_ZN8WongWork10CBossTower23checkStartGameConditionERhb+0x19e>
 81432da:	8b 45 08             	mov    0x8(%ebp),%eax
 81432dd:	8b 40 04             	mov    0x4(%eax),%eax
 81432e0:	8b 80 d8 0c 00 00    	mov    0xcd8(%eax),%eax
 81432e6:	83 f8 01             	cmp    $0x1,%eax
 81432e9:	75 0a                	jne    81432f5 <_ZN8WongWork10CBossTower23checkStartGameConditionERhb+0x34f>
 81432eb:	bb 01 00 00 00       	mov    $0x1,%ebx
 81432f0:	e9 f2 01 00 00       	jmp    81434e7 <_ZN8WongWork10CBossTower23checkStartGameConditionERhb+0x541>
 81432f5:	8b 45 08             	mov    0x8(%ebp),%eax
 81432f8:	8b 90 f0 09 00 00    	mov    0x9f0(%eax),%edx
 81432fe:	8b 45 08             	mov    0x8(%ebp),%eax
 8143301:	8b 40 04             	mov    0x4(%eax),%eax
 8143304:	8d 4d bc             	lea    -0x44(%ebp),%ecx
 8143307:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 814330b:	8d 8d 98 fe ff ff    	lea    -0x168(%ebp),%ecx
 8143311:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8143315:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8143318:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 814331c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8143320:	89 04 24             	mov    %eax,(%esp)
 8143323:	e8 00 b2 45 00       	call   859e528 <_ZN6CParty24CheckEnterAncientDungeonEPK8CDungeonRhP10Inven_ItemPi>
 8143328:	88 45 ef             	mov    %al,-0x11(%ebp)
 814332b:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
 814332f:	83 f0 01             	xor    $0x1,%eax
 8143332:	84 c0                	test   %al,%al
 8143334:	0f 84 bc 00 00 00    	je     81433f6 <_ZN8WongWork10CBossTower23checkStartGameConditionERhb+0x450>
 814333a:	8d 45 98             	lea    -0x68(%ebp),%eax
 814333d:	89 04 24             	mov    %eax,(%esp)
 8143340:	e8 07 aa 44 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8143345:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 814334c:	00 
 814334d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8143354:	00 
 8143355:	8d 45 98             	lea    -0x68(%ebp),%eax
 8143358:	89 04 24             	mov    %eax,(%esp)
 814335b:	e8 9c 85 f8 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8143360:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8143367:	00 
 8143368:	8d 45 98             	lea    -0x68(%ebp),%eax
 814336b:	89 04 24             	mov    %eax,(%esp)
 814336e:	e8 ad 85 f8 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8143373:	c7 44 24 04 11 00 00 	movl   $0x11,0x4(%esp)
 814337a:	00 
 814337b:	8d 45 98             	lea    -0x68(%ebp),%eax
 814337e:	89 04 24             	mov    %eax,(%esp)
 8143381:	e8 b6 85 f8 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8143386:	8b 45 0c             	mov    0xc(%ebp),%eax
 8143389:	0f b6 00             	movzbl (%eax),%eax
 814338c:	0f b6 c0             	movzbl %al,%eax
 814338f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8143393:	8d 45 98             	lea    -0x68(%ebp),%eax
 8143396:	89 04 24             	mov    %eax,(%esp)
 8143399:	e8 82 85 f8 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 814339e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81433a5:	00 
 81433a6:	8d 45 98             	lea    -0x68(%ebp),%eax
 81433a9:	89 04 24             	mov    %eax,(%esp)
 81433ac:	e8 a7 85 f8 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81433b1:	8b 45 08             	mov    0x8(%ebp),%eax
 81433b4:	8b 40 04             	mov    0x4(%eax),%eax
 81433b7:	8d 55 98             	lea    -0x68(%ebp),%edx
 81433ba:	89 54 24 04          	mov    %edx,0x4(%esp)
 81433be:	89 04 24             	mov    %eax,(%esp)
 81433c1:	e8 88 9d 45 00       	call   859d14e <_ZN6CParty13send_to_partyER11PacketGuard>
 81433c6:	bb 00 00 00 00       	mov    $0x0,%ebx
 81433cb:	8d 45 98             	lea    -0x68(%ebp),%eax
 81433ce:	89 04 24             	mov    %eax,(%esp)
 81433d1:	e8 aa aa 44 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81433d6:	e9 0c 01 00 00       	jmp    81434e7 <_ZN8WongWork10CBossTower23checkStartGameConditionERhb+0x541>
 81433db:	89 d3                	mov    %edx,%ebx
 81433dd:	89 c6                	mov    %eax,%esi
 81433df:	8d 45 98             	lea    -0x68(%ebp),%eax
 81433e2:	89 04 24             	mov    %eax,(%esp)
 81433e5:	e8 96 aa 44 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81433ea:	89 f0                	mov    %esi,%eax
 81433ec:	89 da                	mov    %ebx,%edx
 81433ee:	89 04 24             	mov    %eax,(%esp)
 81433f1:	e8 5a 03 9a 00       	call   8ae3750 <_Unwind_Resume>
 81433f6:	80 bd 94 fe ff ff 00 	cmpb   $0x0,-0x16c(%ebp)
 81433fd:	0f 84 df 00 00 00    	je     81434e2 <_ZN8WongWork10CBossTower23checkStartGameConditionERhb+0x53c>
 8143403:	8b 45 08             	mov    0x8(%ebp),%eax
 8143406:	8b 90 f0 09 00 00    	mov    0x9f0(%eax),%edx
 814340c:	8b 45 08             	mov    0x8(%ebp),%eax
 814340f:	8b 40 04             	mov    0x4(%eax),%eax
 8143412:	8d 4d bc             	lea    -0x44(%ebp),%ecx
 8143415:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8143419:	8d 8d 98 fe ff ff    	lea    -0x168(%ebp),%ecx
 814341f:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8143423:	89 54 24 04          	mov    %edx,0x4(%esp)
 8143427:	89 04 24             	mov    %eax,(%esp)
 814342a:	e8 93 b6 45 00       	call   859eac2 <_ZN6CParty22UseAncientDungeonItemsEPK8CDungeonP10Inven_ItemPi>
 814342f:	88 45 ef             	mov    %al,-0x11(%ebp)
 8143432:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
 8143436:	83 f0 01             	xor    $0x1,%eax
 8143439:	84 c0                	test   %al,%al
 814343b:	0f 84 a1 00 00 00    	je     81434e2 <_ZN8WongWork10CBossTower23checkStartGameConditionERhb+0x53c>
 8143441:	8d 45 8c             	lea    -0x74(%ebp),%eax
 8143444:	89 04 24             	mov    %eax,(%esp)
 8143447:	e8 00 a9 44 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 814344c:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 8143453:	00 
 8143454:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 814345b:	00 
 814345c:	8d 45 8c             	lea    -0x74(%ebp),%eax
 814345f:	89 04 24             	mov    %eax,(%esp)
 8143462:	e8 95 84 f8 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8143467:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 814346e:	00 
 814346f:	8d 45 8c             	lea    -0x74(%ebp),%eax
 8143472:	89 04 24             	mov    %eax,(%esp)
 8143475:	e8 a6 84 f8 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 814347a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8143481:	00 
 8143482:	8d 45 8c             	lea    -0x74(%ebp),%eax
 8143485:	89 04 24             	mov    %eax,(%esp)
 8143488:	e8 af 84 f8 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 814348d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8143494:	00 
 8143495:	8d 45 8c             	lea    -0x74(%ebp),%eax
 8143498:	89 04 24             	mov    %eax,(%esp)
 814349b:	e8 b8 84 f8 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81434a0:	8b 45 08             	mov    0x8(%ebp),%eax
 81434a3:	8b 40 04             	mov    0x4(%eax),%eax
 81434a6:	8d 55 8c             	lea    -0x74(%ebp),%edx
 81434a9:	89 54 24 04          	mov    %edx,0x4(%esp)
 81434ad:	89 04 24             	mov    %eax,(%esp)
 81434b0:	e8 99 9c 45 00       	call   859d14e <_ZN6CParty13send_to_partyER11PacketGuard>
 81434b5:	bb 00 00 00 00       	mov    $0x0,%ebx
 81434ba:	8d 45 8c             	lea    -0x74(%ebp),%eax
 81434bd:	89 04 24             	mov    %eax,(%esp)
 81434c0:	e8 bb a9 44 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81434c5:	eb 20                	jmp    81434e7 <_ZN8WongWork10CBossTower23checkStartGameConditionERhb+0x541>
 81434c7:	89 d3                	mov    %edx,%ebx
 81434c9:	89 c6                	mov    %eax,%esi
 81434cb:	8d 45 8c             	lea    -0x74(%ebp),%eax
 81434ce:	89 04 24             	mov    %eax,(%esp)
 81434d1:	e8 aa a9 44 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81434d6:	89 f0                	mov    %esi,%eax
 81434d8:	89 da                	mov    %ebx,%edx
 81434da:	89 04 24             	mov    %eax,(%esp)
 81434dd:	e8 6e 02 9a 00       	call   8ae3750 <_Unwind_Resume>
 81434e2:	bb 01 00 00 00       	mov    $0x1,%ebx
 81434e7:	89 d8                	mov    %ebx,%eax
 81434e9:	81 c4 90 01 00 00    	add    $0x190,%esp
 81434ef:	5b                   	pop    %ebx
 81434f0:	5e                   	pop    %esi
 81434f1:	5d                   	pop    %ebp
 81434f2:	c3                   	ret
 81434f3:	90                   	nop

```

```c
// WongWork::CBossTower::checkStartGameCondition @ 0x8142fa6

/* WongWork::CBossTower::checkStartGameCondition(unsigned char&, bool) */

undefined4 __thiscall
WongWork::CBossTower::checkStartGameCondition(CBossTower *this,uchar *param_1,bool param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  Inven_Item *this_00;
  undefined4 uVar5;
  int iVar6;
  Inven_Item local_16c [244];
  PacketGuard local_78 [12];
  PacketGuard local_6c [12];
  PacketGuard local_60 [12];
  PacketGuard local_54 [12];
  int local_48 [4];
  cMyTrace local_38 [16];
  cMyTrace local_28 [19];
  char local_15;
  int local_14;
  CUserCharacInfo *local_10;
  
  this_00 = local_16c;
  for (iVar6 = 3; iVar6 != -1; iVar6 = iVar6 + -1) {
    Inven_Item::Inven_Item(this_00);
    this_00 = this_00 + 0x3d;
  }
  memset(local_16c,0,0xf4);
  memset(local_48,0,0x10);
  if ((*(int *)(this + 0x9f0) == 0) ||
     (cVar2 = CDungeon::IsOpenScheduleDungeon(*(CDungeon **)(this + 0x9f0)), cVar2 != '\x01')) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    cMyTrace::cMyTrace(local_38,
                       "bool WongWork::CBossTower::checkStartGameCondition(unsigned char&, bool)",
                       0xdb,5);
    cMyTrace::operator()(local_38,"boss Tower dungeon is not open");
    PacketGuard::PacketGuard(local_54);
                    /* try { // try from 0814309a to 08143107 has its CatchHandler @ 0814311d */
    InterfacePacketBuf::clear((InterfacePacketBuf *)local_54);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_54,1,0x10);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_54,0);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_54,0x15);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_54,true);
    CParty::send_to_party(*(CParty **)(this + 4),local_54);
    uVar5 = 0;
    PacketGuard::~PacketGuard(local_54);
  }
  else {
    for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
      local_10 = (CUserCharacInfo *)CParty::get_user(*(CParty **)(this + 4),local_14);
      if ((local_10 == (CUserCharacInfo *)0x0) ||
         (cVar2 = CParty::checkValidUser(*(CParty **)(this + 4),local_14), cVar2 == '\0')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        iVar6 = CUserCharacInfo::get_charac_level(local_10);
        iVar3 = CDungeon::get_min_level(*(CDungeon **)(this + 0x9f0));
        if (iVar6 < iVar3) {
          uVar5 = CDungeon::get_min_level(*(CDungeon **)(this + 0x9f0));
          uVar4 = CUserCharacInfo::get_charac_level(local_10);
          cMyTrace::cMyTrace(local_28,
                             "bool WongWork::CBossTower::checkStartGameCondition(unsigned char&, bool)"
                             ,0xf0,5);
          cMyTrace::operator()
                    (local_28,"dungeon level check charac_level : %d, dungeon_min_level : %d",uVar4,
                     uVar5);
          PacketGuard::PacketGuard(local_60);
                    /* try { // try from 08143229 to 08143296 has its CatchHandler @ 081432ac */
          InterfacePacketBuf::clear((InterfacePacketBuf *)local_60);
          InterfacePacketBuf::put_header((InterfacePacketBuf *)local_60,1,0x10);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_60,0);
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_60,0xe);
          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_60,true);
          CParty::send_to_party(*(CParty **)(this + 4),local_60);
          PacketGuard::~PacketGuard(local_60);
          return 0;
        }
      }
    }
    if (*(int *)(*(int *)(this + 4) + 0xcd8) == 1) {
      uVar5 = 1;
    }
    else {
      local_15 = CParty::CheckEnterAncientDungeon
                           (*(CParty **)(this + 4),*(CDungeon **)(this + 0x9f0),param_1,local_16c,
                            local_48);
      if (local_15 == '\x01') {
        if ((param_2) &&
           (local_15 = CParty::UseAncientDungeonItems
                                 (*(CParty **)(this + 4),*(CDungeon **)(this + 0x9f0),local_16c,
                                  local_48), local_15 != '\x01')) {
          PacketGuard::PacketGuard(local_78);
                    /* try { // try from 08143462 to 081434b4 has its CatchHandler @ 081434c7 */
          InterfacePacketBuf::put_header((InterfacePacketBuf *)local_78,1,0x10);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_78,0);
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_78,1);
          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_78,true);
          CParty::send_to_party(*(CParty **)(this + 4),local_78);
          PacketGuard::~PacketGuard(local_78);
          return 0;
        }
        uVar5 = 1;
      }
      else {
        PacketGuard::PacketGuard(local_6c);
                    /* try { // try from 0814335b to 081433c5 has its CatchHandler @ 081433db */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_6c,1,0x10);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_6c,0);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_6c,0x11);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_6c,(uint)*param_1);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_6c,true);
        CParty::send_to_party(*(CParty **)(this + 4),local_6c);
        uVar5 = 0;
        PacketGuard::~PacketGuard(local_6c);
      }
    }
  }
  return uVar5;
}

```

---

## generateRewardExp

```asm
// === 08144d54 WongWork::CBossTower::generateRewardExp  [0x08144d54-0x8144e35] ===
 8144d54:	55                   	push   %ebp
 8144d55:	89 e5                	mov    %esp,%ebp
 8144d57:	53                   	push   %ebx
 8144d58:	83 ec 34             	sub    $0x34,%esp
 8144d5b:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8144d62:	e9 b5 00 00 00       	jmp    8144e1c <_ZN8WongWork10CBossTower17generateRewardExpEv+0xc8>
 8144d67:	8b 45 08             	mov    0x8(%ebp),%eax
 8144d6a:	8b 40 04             	mov    0x4(%eax),%eax
 8144d6d:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8144d70:	89 54 24 04          	mov    %edx,0x4(%esp)
 8144d74:	89 04 24             	mov    %eax,(%esp)
 8144d77:	e8 e8 09 00 00       	call   8145764 <_ZN6CParty8get_userEi>
 8144d7c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8144d7f:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8144d83:	74 1c                	je     8144da1 <_ZN8WongWork10CBossTower17generateRewardExpEv+0x4d>
 8144d85:	8b 45 08             	mov    0x8(%ebp),%eax
 8144d88:	8b 40 04             	mov    0x4(%eax),%eax
 8144d8b:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8144d8e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8144d92:	89 04 24             	mov    %eax,(%esp)
 8144d95:	e8 ce 0a 00 00       	call   8145868 <_ZN6CParty14checkValidUserEi>
 8144d9a:	83 f0 01             	xor    $0x1,%eax
 8144d9d:	84 c0                	test   %al,%al
 8144d9f:	74 07                	je     8144da8 <_ZN8WongWork10CBossTower17generateRewardExpEv+0x54>
 8144da1:	b8 01 00 00 00       	mov    $0x1,%eax
 8144da6:	eb 05                	jmp    8144dad <_ZN8WongWork10CBossTower17generateRewardExpEv+0x59>
 8144da8:	b8 00 00 00 00       	mov    $0x0,%eax
 8144dad:	84 c0                	test   %al,%al
 8144daf:	75 66                	jne    8144e17 <_ZN8WongWork10CBossTower17generateRewardExpEv+0xc3>
 8144db1:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8144db8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8144dbb:	89 04 24             	mov    %eax,(%esp)
 8144dbe:	e8 f5 54 f9 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 8144dc3:	89 c3                	mov    %eax,%ebx
 8144dc5:	e8 d1 73 f8 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8144dca:	8d 55 ec             	lea    -0x14(%ebp),%edx
 8144dcd:	89 54 24 08          	mov    %edx,0x8(%esp)
 8144dd1:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8144dd5:	89 04 24             	mov    %eax,(%esp)
 8144dd8:	e8 91 bc 21 00       	call   8360a6e <_ZNK12CDataManager14get_mob_rewardEiRj>
 8144ddd:	8b 45 08             	mov    0x8(%ebp),%eax
 8144de0:	8b 98 f0 09 00 00    	mov    0x9f0(%eax),%ebx
 8144de6:	8b 4d ec             	mov    -0x14(%ebp),%ecx
 8144de9:	8b 45 08             	mov    0x8(%ebp),%eax
 8144dec:	8b 90 e0 0a 00 00    	mov    0xae0(%eax),%edx
 8144df2:	8b 45 08             	mov    0x8(%ebp),%eax
 8144df5:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8144df9:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8144dfd:	89 54 24 08          	mov    %edx,0x8(%esp)
 8144e01:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8144e04:	89 54 24 04          	mov    %edx,0x4(%esp)
 8144e08:	89 04 24             	mov    %eax,(%esp)
 8144e0b:	e8 10 50 00 00       	call   8149e20 <_ZN8WongWork9CBossPlay17generateRewardExpEijjPK8CDungeon>
 8144e10:	83 f0 01             	xor    $0x1,%eax
 8144e13:	84 c0                	test   %al,%al
 8144e15:	eb 01                	jmp    8144e18 <_ZN8WongWork10CBossTower17generateRewardExpEv+0xc4>
 8144e17:	90                   	nop
 8144e18:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8144e1c:	83 7d f0 03          	cmpl   $0x3,-0x10(%ebp)
 8144e20:	0f 9e c0             	setle  %al
 8144e23:	84 c0                	test   %al,%al
 8144e25:	0f 85 3c ff ff ff    	jne    8144d67 <_ZN8WongWork10CBossTower17generateRewardExpEv+0x13>
 8144e2b:	b8 01 00 00 00       	mov    $0x1,%eax
 8144e30:	83 c4 34             	add    $0x34,%esp
 8144e33:	5b                   	pop    %ebx
 8144e34:	5d                   	pop    %ebp
 8144e35:	c3                   	ret

```

```c
// WongWork::CBossTower::generateRewardExp @ 0x8144d54

/* WongWork::CBossTower::generateRewardExp() */

undefined4 __thiscall WongWork::CBossTower::generateRewardExp(CBossTower *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  CDataManager *this_00;
  uint local_18;
  int local_14;
  CUserCharacInfo *local_10;
  
  local_14 = 0;
  do {
    if (3 < local_14) {
      return 1;
    }
    local_10 = (CUserCharacInfo *)CParty::get_user(*(CParty **)(this + 4),local_14);
    if (local_10 == (CUserCharacInfo *)0x0) {
LAB_08144da1:
      bVar1 = true;
    }
    else {
      cVar2 = CParty::checkValidUser(*(CParty **)(this + 4),local_14);
      if (cVar2 != '\x01') goto LAB_08144da1;
      bVar1 = false;
    }
    if (!bVar1) {
      local_18 = 0;
      iVar3 = CUserCharacInfo::get_charac_level(local_10);
      this_00 = (CDataManager *)G_CDataManager();
      CDataManager::get_mob_reward(this_00,iVar3,&local_18);
      CBossPlay::generateRewardExp
                ((CBossPlay *)this,local_14,*(uint *)(this + 0xae0),local_18,
                 *(CDungeon **)(this + 0x9f0));
    }
    local_14 = local_14 + 1;
  } while( true );
}

```

---

## generateRewardItem

```asm
// === 08144e36 WongWork::CBossTower::generateRewardItem  [0x08144e36-0x8144fc9] ===
 8144e36:	55                   	push   %ebp
 8144e37:	89 e5                	mov    %esp,%ebp
 8144e39:	57                   	push   %edi
 8144e3a:	56                   	push   %esi
 8144e3b:	53                   	push   %ebx
 8144e3c:	83 ec 5c             	sub    $0x5c,%esp
 8144e3f:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 8144e46:	e9 62 01 00 00       	jmp    8144fad <_ZN8WongWork10CBossTower18generateRewardItemEv+0x177>
 8144e4b:	8b 45 08             	mov    0x8(%ebp),%eax
 8144e4e:	8b 40 04             	mov    0x4(%eax),%eax
 8144e51:	8b 55 d8             	mov    -0x28(%ebp),%edx
 8144e54:	89 54 24 04          	mov    %edx,0x4(%esp)
 8144e58:	89 04 24             	mov    %eax,(%esp)
 8144e5b:	e8 04 09 00 00       	call   8145764 <_ZN6CParty8get_userEi>
 8144e60:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8144e63:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 8144e67:	74 1c                	je     8144e85 <_ZN8WongWork10CBossTower18generateRewardItemEv+0x4f>
 8144e69:	8b 45 08             	mov    0x8(%ebp),%eax
 8144e6c:	8b 40 04             	mov    0x4(%eax),%eax
 8144e6f:	8b 55 d8             	mov    -0x28(%ebp),%edx
 8144e72:	89 54 24 04          	mov    %edx,0x4(%esp)
 8144e76:	89 04 24             	mov    %eax,(%esp)
 8144e79:	e8 ea 09 00 00       	call   8145868 <_ZN6CParty14checkValidUserEi>
 8144e7e:	83 f0 01             	xor    $0x1,%eax
 8144e81:	84 c0                	test   %al,%al
 8144e83:	74 07                	je     8144e8c <_ZN8WongWork10CBossTower18generateRewardItemEv+0x56>
 8144e85:	b8 01 00 00 00       	mov    $0x1,%eax
 8144e8a:	eb 05                	jmp    8144e91 <_ZN8WongWork10CBossTower18generateRewardItemEv+0x5b>
 8144e8c:	b8 00 00 00 00       	mov    $0x0,%eax
 8144e91:	84 c0                	test   %al,%al
 8144e93:	0f 85 0f 01 00 00    	jne    8144fa8 <_ZN8WongWork10CBossTower18generateRewardItemEv+0x172>
 8144e99:	c7 45 c0 00 00 00 00 	movl   $0x0,-0x40(%ebp)
 8144ea0:	8b 45 08             	mov    0x8(%ebp),%eax
 8144ea3:	8b 80 f0 09 00 00    	mov    0x9f0(%eax),%eax
 8144ea9:	89 04 24             	mov    %eax,(%esp)
 8144eac:	e8 3f 8e fb ff       	call   80fdcf0 <_ZNK8CDungeon9get_indexEv>
 8144eb1:	89 c3                	mov    %eax,%ebx
 8144eb3:	e8 e3 72 f8 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8144eb8:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8144ebc:	89 04 24             	mov    %eax,(%esp)
 8144ebf:	e8 14 07 00 00       	call   81455d8 <_ZN12CDataManager14GetTowerScriptEj>
 8144ec4:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8144ec7:	8b 45 08             	mov    0x8(%ebp),%eax
 8144eca:	8b 90 e0 0a 00 00    	mov    0xae0(%eax),%edx
 8144ed0:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8144ed3:	81 c2 c8 00 00 00    	add    $0xc8,%edx
 8144ed9:	8b 44 90 04          	mov    0x4(%eax,%edx,4),%eax
 8144edd:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 8144ee0:	8b 45 08             	mov    0x8(%ebp),%eax
 8144ee3:	8b 80 f0 09 00 00    	mov    0x9f0(%eax),%eax
 8144ee9:	89 04 24             	mov    %eax,(%esp)
 8144eec:	e8 d9 06 00 00       	call   81455ca <_ZNK8CDungeon29getTowerMaxClearRewardItemNumEv>
 8144ef1:	89 45 c8             	mov    %eax,-0x38(%ebp)
 8144ef4:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8144ef7:	89 44 24 04          	mov    %eax,0x4(%esp)
 8144efb:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8144efe:	89 04 24             	mov    %eax,(%esp)
 8144f01:	e8 08 aa f9 ff       	call   80df90e <_ZSt3minIiERKT_S2_S2_>
 8144f06:	8b 00                	mov    (%eax),%eax
 8144f08:	89 45 c0             	mov    %eax,-0x40(%ebp)
 8144f0b:	c7 45 cc 0a 00 00 00 	movl   $0xa,-0x34(%ebp)
 8144f12:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8144f15:	89 44 24 04          	mov    %eax,0x4(%esp)
 8144f19:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8144f1c:	89 04 24             	mov    %eax,(%esp)
 8144f1f:	e8 ea a9 f9 ff       	call   80df90e <_ZSt3minIiERKT_S2_S2_>
 8144f24:	8b 00                	mov    (%eax),%eax
 8144f26:	89 45 c0             	mov    %eax,-0x40(%ebp)
 8144f29:	8b 45 08             	mov    0x8(%ebp),%eax
 8144f2c:	8b b8 f0 09 00 00    	mov    0x9f0(%eax),%edi
 8144f32:	8b 45 08             	mov    0x8(%ebp),%eax
 8144f35:	8b 80 e0 0a 00 00    	mov    0xae0(%eax),%eax
 8144f3b:	89 45 d0             	mov    %eax,-0x30(%ebp)
 8144f3e:	c7 45 d4 0a 00 00 00 	movl   $0xa,-0x2c(%ebp)
 8144f45:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8144f48:	89 44 24 04          	mov    %eax,0x4(%esp)
 8144f4c:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8144f4f:	89 04 24             	mov    %eax,(%esp)
 8144f52:	e8 b7 a9 f9 ff       	call   80df90e <_ZSt3minIiERKT_S2_S2_>
 8144f57:	8b 00                	mov    (%eax),%eax
 8144f59:	89 c6                	mov    %eax,%esi
 8144f5b:	8b 45 08             	mov    0x8(%ebp),%eax
 8144f5e:	8b 98 e8 0a 00 00    	mov    0xae8(%eax),%ebx
 8144f64:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8144f67:	89 04 24             	mov    %eax,(%esp)
 8144f6a:	e8 49 53 f9 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 8144f6f:	89 c1                	mov    %eax,%ecx
 8144f71:	8b 55 c0             	mov    -0x40(%ebp),%edx
 8144f74:	8b 45 08             	mov    0x8(%ebp),%eax
 8144f77:	89 7c 24 18          	mov    %edi,0x18(%esp)
 8144f7b:	89 74 24 14          	mov    %esi,0x14(%esp)
 8144f7f:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8144f83:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8144f87:	89 54 24 08          	mov    %edx,0x8(%esp)
 8144f8b:	8b 55 d8             	mov    -0x28(%ebp),%edx
 8144f8e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8144f92:	89 04 24             	mov    %eax,(%esp)
 8144f95:	e8 7a 49 00 00       	call   8149914 <_ZN8WongWork9CBossPlay18generateRewardItemEiij23ENUM_DUNGEON_DIFFICULTYjPK8CDungeon>
 8144f9a:	88 45 e7             	mov    %al,-0x19(%ebp)
 8144f9d:	0f b6 45 e7          	movzbl -0x19(%ebp),%eax
 8144fa1:	83 f0 01             	xor    $0x1,%eax
 8144fa4:	84 c0                	test   %al,%al
 8144fa6:	eb 01                	jmp    8144fa9 <_ZN8WongWork10CBossTower18generateRewardItemEv+0x173>
 8144fa8:	90                   	nop
 8144fa9:	83 45 d8 01          	addl   $0x1,-0x28(%ebp)
 8144fad:	83 7d d8 03          	cmpl   $0x3,-0x28(%ebp)
 8144fb1:	0f 9e c0             	setle  %al
 8144fb4:	84 c0                	test   %al,%al
 8144fb6:	0f 85 8f fe ff ff    	jne    8144e4b <_ZN8WongWork10CBossTower18generateRewardItemEv+0x15>
 8144fbc:	b8 01 00 00 00       	mov    $0x1,%eax
 8144fc1:	83 c4 5c             	add    $0x5c,%esp
 8144fc4:	5b                   	pop    %ebx
 8144fc5:	5e                   	pop    %esi
 8144fc6:	5f                   	pop    %edi
 8144fc7:	5d                   	pop    %ebp
 8144fc8:	c3                   	ret
 8144fc9:	90                   	nop

```

```c
// WongWork::CBossTower::generateRewardItem @ 0x8144e36

/* WongWork::CBossTower::generateRewardItem() */

undefined4 __thiscall WongWork::CBossTower::generateRewardItem(CBossTower *this)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  CDataManager *this_00;
  int *piVar7;
  undefined4 uVar8;
  int local_44;
  int local_40;
  int local_3c [3];
  int local_30;
  int local_2c;
  CUserCharacInfo *local_28;
  int local_24;
  undefined1 local_1d;
  
  local_2c = 0;
  do {
    if (3 < local_2c) {
      return 1;
    }
    local_28 = (CUserCharacInfo *)CParty::get_user(*(CParty **)(this + 4),local_2c);
    if (local_28 == (CUserCharacInfo *)0x0) {
LAB_08144e85:
      bVar4 = true;
    }
    else {
      cVar5 = CParty::checkValidUser(*(CParty **)(this + 4),local_2c);
      if (cVar5 != '\x01') goto LAB_08144e85;
      bVar4 = false;
    }
    if (!bVar4) {
      local_44 = 0;
      uVar6 = CDungeon::get_index(*(CDungeon **)(this + 0x9f0));
      this_00 = (CDataManager *)G_CDataManager();
      local_24 = CDataManager::GetTowerScript(this_00,uVar6);
      local_40 = *(int *)(local_24 + 4 + (*(int *)(this + 0xae0) + 200) * 4);
      local_3c[0] = CDungeon::getTowerMaxClearRewardItemNum(*(CDungeon **)(this + 0x9f0));
      piVar7 = std::min<int>(local_3c,&local_40);
      local_44 = *piVar7;
      local_3c[1] = 10;
      piVar7 = std::min<int>(local_3c + 1,&local_44);
      local_44 = *piVar7;
      uVar1 = *(undefined4 *)(this + 0x9f0);
      local_3c[2] = *(int *)(this + 0xae0);
      local_30 = 10;
      piVar7 = std::min<int>(&local_30,local_3c + 2);
      iVar2 = *piVar7;
      uVar3 = *(undefined4 *)(this + 0xae8);
      uVar8 = CUserCharacInfo::get_charac_level(local_28);
      local_1d = CBossPlay::generateRewardItem
                           ((CBossPlay *)this,local_2c,local_44,uVar8,uVar3,iVar2,uVar1);
    }
    local_2c = local_2c + 1;
  } while( true );
}

```

---

## handleDieUser

```asm
// === 08143a62 WongWork::CBossTower::handleDieUser  [0x08143a62-0x8143ae1] ===
 8143a62:	55                   	push   %ebp
 8143a63:	89 e5                	mov    %esp,%ebp
 8143a65:	83 ec 18             	sub    $0x18,%esp
 8143a68:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8143a6c:	75 07                	jne    8143a75 <_ZN8WongWork10CBossTower13handleDieUserEP5CUser+0x13>
 8143a6e:	b8 00 00 00 00       	mov    $0x0,%eax
 8143a73:	eb 6a                	jmp    8143adf <_ZN8WongWork10CBossTower13handleDieUserEP5CUser+0x7d>
 8143a75:	8b 45 08             	mov    0x8(%ebp),%eax
 8143a78:	8b 55 0c             	mov    0xc(%ebp),%edx
 8143a7b:	89 54 24 04          	mov    %edx,0x4(%esp)
 8143a7f:	89 04 24             	mov    %eax,(%esp)
 8143a82:	e8 1d 5a 00 00       	call   81494a4 <_ZN8WongWork9CBossPlay13handleDieUserEP5CUser>
 8143a87:	83 f0 01             	xor    $0x1,%eax
 8143a8a:	84 c0                	test   %al,%al
 8143a8c:	74 07                	je     8143a95 <_ZN8WongWork10CBossTower13handleDieUserEP5CUser+0x33>
 8143a8e:	b8 00 00 00 00       	mov    $0x0,%eax
 8143a93:	eb 4a                	jmp    8143adf <_ZN8WongWork10CBossTower13handleDieUserEP5CUser+0x7d>
 8143a95:	8b 45 08             	mov    0x8(%ebp),%eax
 8143a98:	8b 00                	mov    (%eax),%eax
 8143a9a:	83 c0 08             	add    $0x8,%eax
 8143a9d:	8b 10                	mov    (%eax),%edx
 8143a9f:	8b 45 08             	mov    0x8(%ebp),%eax
 8143aa2:	89 04 24             	mov    %eax,(%esp)
 8143aa5:	ff d2                	call   *%edx
 8143aa7:	84 c0                	test   %al,%al
 8143aa9:	74 2f                	je     8143ada <_ZN8WongWork10CBossTower13handleDieUserEP5CUser+0x78>
 8143aab:	8b 45 08             	mov    0x8(%ebp),%eax
 8143aae:	89 04 24             	mov    %eax,(%esp)
 8143ab1:	e8 fc 05 00 00       	call   81440b2 <_ZN8WongWork10CBossTower13onFinishStageEv>
 8143ab6:	8b 45 08             	mov    0x8(%ebp),%eax
 8143ab9:	0f b6 80 fc 0a 00 00 	movzbl 0xafc(%eax),%eax
 8143ac0:	83 f0 01             	xor    $0x1,%eax
 8143ac3:	84 c0                	test   %al,%al
 8143ac5:	74 13                	je     8143ada <_ZN8WongWork10CBossTower13handleDieUserEP5CUser+0x78>
 8143ac7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8143ace:	00 
 8143acf:	8b 45 08             	mov    0x8(%ebp),%eax
 8143ad2:	89 04 24             	mov    %eax,(%esp)
 8143ad5:	e8 4a f2 ff ff       	call   8142d24 <_ZN8WongWork10CBossTower21_onPrepareFinishTowerEb>
 8143ada:	b8 01 00 00 00       	mov    $0x1,%eax
 8143adf:	c9                   	leave
 8143ae0:	c3                   	ret
 8143ae1:	90                   	nop

```

```c
// WongWork::CBossTower::handleDieUser @ 0x8143a62

/* WongWork::CBossTower::handleDieUser(CUser*) */

undefined4 __thiscall WongWork::CBossTower::handleDieUser(CBossTower *this,CUser *param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  if (param_1 == (CUser *)0x0) {
    uVar2 = 0;
  }
  else {
    cVar1 = CBossPlay::handleDieUser((CBossPlay *)this,param_1);
    if (cVar1 == '\x01') {
      cVar1 = (**(code **)(*(int *)this + 8))(this);
      if (cVar1 != '\0') {
        onFinishStage(this);
        if (this[0xafc] != (CBossTower)0x1) {
          _onPrepareFinishTower(this,false);
        }
      }
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

```

---

## handleDropItem

```asm
// === 08143e5e WongWork::CBossTower::handleDropItem  [0x08143e5e-0x8143ebb] ===
 8143e5e:	55                   	push   %ebp
 8143e5f:	89 e5                	mov    %esp,%ebp
 8143e61:	83 ec 48             	sub    $0x48,%esp
 8143e64:	8b 45 18             	mov    0x18(%ebp),%eax
 8143e67:	88 45 e4             	mov    %al,-0x1c(%ebp)
 8143e6a:	0f be 55 e4          	movsbl -0x1c(%ebp),%edx
 8143e6e:	8b 45 08             	mov    0x8(%ebp),%eax
 8143e71:	8b 4d 20             	mov    0x20(%ebp),%ecx
 8143e74:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 8143e78:	8b 4d 1c             	mov    0x1c(%ebp),%ecx
 8143e7b:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 8143e7f:	89 54 24 10          	mov    %edx,0x10(%esp)
 8143e83:	8b 55 14             	mov    0x14(%ebp),%edx
 8143e86:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8143e8a:	8b 55 10             	mov    0x10(%ebp),%edx
 8143e8d:	89 54 24 08          	mov    %edx,0x8(%esp)
 8143e91:	8b 55 0c             	mov    0xc(%ebp),%edx
 8143e94:	89 54 24 04          	mov    %edx,0x4(%esp)
 8143e98:	89 04 24             	mov    %eax,(%esp)
 8143e9b:	e8 aa c0 00 00       	call   814ff4a <_ZN8WongWork10CBossStage14handleDropItemEP5CUseriicii>
 8143ea0:	88 45 f7             	mov    %al,-0x9(%ebp)
 8143ea3:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 8143ea7:	83 f0 01             	xor    $0x1,%eax
 8143eaa:	84 c0                	test   %al,%al
 8143eac:	74 07                	je     8143eb5 <_ZN8WongWork10CBossTower14handleDropItemEP5CUseriicii+0x57>
 8143eae:	b8 00 00 00 00       	mov    $0x0,%eax
 8143eb3:	eb 05                	jmp    8143eba <_ZN8WongWork10CBossTower14handleDropItemEP5CUseriicii+0x5c>
 8143eb5:	b8 01 00 00 00       	mov    $0x1,%eax
 8143eba:	c9                   	leave
 8143ebb:	c3                   	ret

```

```c
// WongWork::CBossTower::handleDropItem @ 0x8143e5e

/* WongWork::CBossTower::handleDropItem(CUser*, int, int, char, int, int) */

bool __thiscall
WongWork::CBossTower::handleDropItem
          (CBossTower *this,CUser *param_1,int param_2,int param_3,char param_4,int param_5,
          int param_6)

{
  char cVar1;
  
  cVar1 = CBossStage::handleDropItem
                    ((CBossStage *)this,param_1,param_2,param_3,param_4,param_5,param_6);
  return cVar1 == '\x01';
}

```

---

## handleEPLPCommand

```asm
// === 08142b72 WongWork::CBossTower::handleEPLPCommand  [0x08142b72-0x8142cdd] ===
 8142b72:	55                   	push   %ebp
 8142b73:	89 e5                	mov    %esp,%ebp
 8142b75:	57                   	push   %edi
 8142b76:	53                   	push   %ebx
 8142b77:	81 ec 30 01 00 00    	sub    $0x130,%esp
 8142b7d:	8b 45 08             	mov    0x8(%ebp),%eax
 8142b80:	8b 40 04             	mov    0x4(%eax),%eax
 8142b83:	85 c0                	test   %eax,%eax
 8142b85:	74 12                	je     8142b99 <_ZN8WongWork10CBossTower17handleEPLPCommandEi+0x27>
 8142b87:	8b 45 08             	mov    0x8(%ebp),%eax
 8142b8a:	8b 40 04             	mov    0x4(%eax),%eax
 8142b8d:	89 04 24             	mov    %eax,(%esp)
 8142b90:	e8 87 2c 00 00       	call   814581c <_ZN6CParty12GetEPLPStateEv>
 8142b95:	3c 02                	cmp    $0x2,%al
 8142b97:	74 07                	je     8142ba0 <_ZN8WongWork10CBossTower17handleEPLPCommandEi+0x2e>
 8142b99:	b8 01 00 00 00       	mov    $0x1,%eax
 8142b9e:	eb 05                	jmp    8142ba5 <_ZN8WongWork10CBossTower17handleEPLPCommandEi+0x33>
 8142ba0:	b8 00 00 00 00       	mov    $0x0,%eax
 8142ba5:	84 c0                	test   %al,%al
 8142ba7:	74 0a                	je     8142bb3 <_ZN8WongWork10CBossTower17handleEPLPCommandEi+0x41>
 8142ba9:	b8 00 00 00 00       	mov    $0x0,%eax
 8142bae:	e9 21 01 00 00       	jmp    8142cd4 <_ZN8WongWork10CBossTower17handleEPLPCommandEi+0x162>
 8142bb3:	8b 45 0c             	mov    0xc(%ebp),%eax
 8142bb6:	83 c0 00             	add    $0x0,%eax
 8142bb9:	83 f8 02             	cmp    $0x2,%eax
 8142bbc:	0f 87 02 01 00 00    	ja     8142cc4 <_ZN8WongWork10CBossTower17handleEPLPCommandEi+0x152>
 8142bc2:	8d 95 f0 fe ff ff    	lea    -0x110(%ebp),%edx
 8142bc8:	b8 00 00 00 00       	mov    $0x0,%eax
 8142bcd:	b9 3f 00 00 00       	mov    $0x3f,%ecx
 8142bd2:	89 d7                	mov    %edx,%edi
 8142bd4:	f3 ab                	rep stos %eax,%es:(%edi)
 8142bd6:	89 fa                	mov    %edi,%edx
 8142bd8:	66 89 02             	mov    %ax,(%edx)
 8142bdb:	83 c2 02             	add    $0x2,%edx
 8142bde:	88 02                	mov    %al,(%edx)
 8142be0:	83 c2 01             	add    $0x1,%edx
 8142be3:	8b 45 08             	mov    0x8(%ebp),%eax
 8142be6:	8b 40 04             	mov    0x4(%eax),%eax
 8142be9:	8b 80 d8 0c 00 00    	mov    0xcd8(%eax),%eax
 8142bef:	88 45 ef             	mov    %al,-0x11(%ebp)
 8142bf2:	8b 45 08             	mov    0x8(%ebp),%eax
 8142bf5:	8b 40 04             	mov    0x4(%eax),%eax
 8142bf8:	8d 95 f0 fe ff ff    	lea    -0x110(%ebp),%edx
 8142bfe:	89 54 24 04          	mov    %edx,0x4(%esp)
 8142c02:	89 04 24             	mov    %eax,(%esp)
 8142c05:	e8 78 2c 00 00       	call   8145882 <_ZN6CParty14getMemberNamesEPc>
 8142c0a:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8142c11:	e9 91 00 00 00       	jmp    8142ca7 <_ZN8WongWork10CBossTower17handleEPLPCommandEi+0x135>
 8142c16:	8b 45 08             	mov    0x8(%ebp),%eax
 8142c19:	8b 40 04             	mov    0x4(%eax),%eax
 8142c1c:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8142c1f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8142c23:	89 04 24             	mov    %eax,(%esp)
 8142c26:	e8 39 2b 00 00       	call   8145764 <_ZN6CParty8get_userEi>
 8142c2b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8142c2e:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8142c32:	74 1c                	je     8142c50 <_ZN8WongWork10CBossTower17handleEPLPCommandEi+0xde>
 8142c34:	8b 45 08             	mov    0x8(%ebp),%eax
 8142c37:	8b 40 04             	mov    0x4(%eax),%eax
 8142c3a:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8142c3d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8142c41:	89 04 24             	mov    %eax,(%esp)
 8142c44:	e8 1f 2c 00 00       	call   8145868 <_ZN6CParty14checkValidUserEi>
 8142c49:	83 f0 01             	xor    $0x1,%eax
 8142c4c:	84 c0                	test   %al,%al
 8142c4e:	74 07                	je     8142c57 <_ZN8WongWork10CBossTower17handleEPLPCommandEi+0xe5>
 8142c50:	b8 01 00 00 00       	mov    $0x1,%eax
 8142c55:	eb 05                	jmp    8142c5c <_ZN8WongWork10CBossTower17handleEPLPCommandEi+0xea>
 8142c57:	b8 00 00 00 00       	mov    $0x0,%eax
 8142c5c:	84 c0                	test   %al,%al
 8142c5e:	75 42                	jne    8142ca2 <_ZN8WongWork10CBossTower17handleEPLPCommandEi+0x130>
 8142c60:	0f be 5d ef          	movsbl -0x11(%ebp),%ebx
 8142c64:	8b 45 08             	mov    0x8(%ebp),%eax
 8142c67:	8b 80 f0 09 00 00    	mov    0x9f0(%eax),%eax
 8142c6d:	89 04 24             	mov    %eax,(%esp)
 8142c70:	e8 31 29 00 00       	call   81455a6 <_ZNK8CDungeon14GetDungeonNameEv>
 8142c75:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8142c78:	8d 8a 00 97 07 00    	lea    0x79700(%edx),%ecx
 8142c7e:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8142c82:	8d 95 f0 fe ff ff    	lea    -0x110(%ebp),%edx
 8142c88:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8142c8c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8142c93:	00 
 8142c94:	89 44 24 04          	mov    %eax,0x4(%esp)
 8142c98:	89 0c 24             	mov    %ecx,(%esp)
 8142c9b:	e8 3c 1d 54 00       	call   86849dc <_ZN15cUserHistoryLog12LeaveDungeonEPKciS1_i>
 8142ca0:	eb 01                	jmp    8142ca3 <_ZN8WongWork10CBossTower17handleEPLPCommandEi+0x131>
 8142ca2:	90                   	nop
 8142ca3:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8142ca7:	83 7d f0 03          	cmpl   $0x3,-0x10(%ebp)
 8142cab:	0f 9e c0             	setle  %al
 8142cae:	84 c0                	test   %al,%al
 8142cb0:	0f 85 60 ff ff ff    	jne    8142c16 <_ZN8WongWork10CBossTower17handleEPLPCommandEi+0xa4>
 8142cb6:	8b 45 08             	mov    0x8(%ebp),%eax
 8142cb9:	8b 40 04             	mov    0x4(%eax),%eax
 8142cbc:	89 04 24             	mov    %eax,(%esp)
 8142cbf:	e8 9c 9d 46 00       	call   85aca60 <_ZN6CParty15ReturnToVillageEv>
 8142cc4:	8b 45 08             	mov    0x8(%ebp),%eax
 8142cc7:	89 04 24             	mov    %eax,(%esp)
 8142cca:	e8 67 fe ff ff       	call   8142b36 <_ZN8WongWork10CBossTower8_destroyEv>
 8142ccf:	b8 01 00 00 00       	mov    $0x1,%eax
 8142cd4:	81 c4 30 01 00 00    	add    $0x130,%esp
 8142cda:	5b                   	pop    %ebx
 8142cdb:	5f                   	pop    %edi
 8142cdc:	5d                   	pop    %ebp
 8142cdd:	c3                   	ret

```

```c
// WongWork::CBossTower::handleEPLPCommand @ 0x8142b72

/* WongWork::CBossTower::handleEPLPCommand(int) */

undefined4 __thiscall WongWork::CBossTower::handleEPLPCommand(CBossTower *this,int param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  byte bVar6;
  char local_114 [255];
  char local_15;
  int local_14;
  int local_10;
  
  bVar6 = 0;
  if (*(int *)(this + 4) != 0) {
    cVar2 = CParty::GetEPLPState(*(CParty **)(this + 4));
    if (cVar2 == '\x02') {
      bVar1 = false;
      goto LAB_08142ba5;
    }
  }
  bVar1 = true;
LAB_08142ba5:
  if (bVar1) {
    uVar3 = 0;
  }
  else {
    if ((uint)param_1 < 3) {
      pcVar4 = local_114;
      for (iVar5 = 0x3f; iVar5 != 0; iVar5 = iVar5 + -1) {
        pcVar4[0] = '\0';
        pcVar4[1] = '\0';
        pcVar4[2] = '\0';
        pcVar4[3] = '\0';
        pcVar4 = pcVar4 + ((uint)bVar6 * -2 + 1) * 4;
      }
      pcVar4[0] = '\0';
      pcVar4[1] = '\0';
      pcVar4[2] = '\0';
      local_15 = (char)*(undefined4 *)(*(int *)(this + 4) + 0xcd8);
      CParty::getMemberNames(*(CParty **)(this + 4),local_114);
      for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
        local_10 = CParty::get_user(*(CParty **)(this + 4),local_14);
        if (local_10 == 0) {
LAB_08142c50:
          bVar1 = true;
        }
        else {
          cVar2 = CParty::checkValidUser(*(CParty **)(this + 4),local_14);
          if (cVar2 != '\x01') goto LAB_08142c50;
          bVar1 = false;
        }
        if (!bVar1) {
          iVar5 = (int)local_15;
          pcVar4 = (char *)CDungeon::GetDungeonName(*(CDungeon **)(this + 0x9f0));
          cUserHistoryLog::LeaveDungeon
                    ((cUserHistoryLog *)(local_10 + 0x79700),pcVar4,0,local_114,iVar5);
        }
      }
      CParty::ReturnToVillage(*(CParty **)(this + 4));
    }
    _destroy(this);
    uVar3 = 1;
  }
  return uVar3;
}

```

---

## handleFinishLoading

```asm
// === 08143f6a WongWork::CBossTower::handleFinishLoading  [0x08143f6a-0x81440b1] ===
 8143f6a:	55                   	push   %ebp
 8143f6b:	89 e5                	mov    %esp,%ebp
 8143f6d:	56                   	push   %esi
 8143f6e:	53                   	push   %ebx
 8143f6f:	83 ec 20             	sub    $0x20,%esp
 8143f72:	8b 45 08             	mov    0x8(%ebp),%eax
 8143f75:	8b 40 04             	mov    0x4(%eax),%eax
 8143f78:	8b 55 0c             	mov    0xc(%ebp),%edx
 8143f7b:	89 54 24 04          	mov    %edx,0x4(%esp)
 8143f7f:	89 04 24             	mov    %eax,(%esp)
 8143f82:	e8 f5 6c 45 00       	call   859ac7c <_ZNK6CParty15GetMemberSlotNoEPK5CUser>
 8143f87:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8143f8a:	83 7d f4 ff          	cmpl   $0xffffffff,-0xc(%ebp)
 8143f8e:	74 20                	je     8143fb0 <_ZN8WongWork10CBossTower19handleFinishLoadingEP5CUser+0x46>
 8143f90:	8b 45 08             	mov    0x8(%ebp),%eax
 8143f93:	8b 40 04             	mov    0x4(%eax),%eax
 8143f96:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8143f99:	89 54 24 04          	mov    %edx,0x4(%esp)
 8143f9d:	89 04 24             	mov    %eax,(%esp)
 8143fa0:	e8 c3 18 00 00       	call   8145868 <_ZN6CParty14checkValidUserEi>
 8143fa5:	84 c0                	test   %al,%al
 8143fa7:	74 07                	je     8143fb0 <_ZN8WongWork10CBossTower19handleFinishLoadingEP5CUser+0x46>
 8143fa9:	b8 01 00 00 00       	mov    $0x1,%eax
 8143fae:	eb 05                	jmp    8143fb5 <_ZN8WongWork10CBossTower19handleFinishLoadingEP5CUser+0x4b>
 8143fb0:	b8 00 00 00 00       	mov    $0x0,%eax
 8143fb5:	84 c0                	test   %al,%al
 8143fb7:	0f 84 e9 00 00 00    	je     81440a6 <_ZN8WongWork10CBossTower19handleFinishLoadingEP5CUser+0x13c>
 8143fbd:	8b 45 08             	mov    0x8(%ebp),%eax
 8143fc0:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8143fc7:	00 
 8143fc8:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8143fcb:	89 54 24 04          	mov    %edx,0x4(%esp)
 8143fcf:	89 04 24             	mov    %eax,(%esp)
 8143fd2:	e8 bb 16 00 00       	call   8145692 <_ZN8WongWork9CBossPlay14setMemberReadyEib>
 8143fd7:	c7 44 24 04 28 00 00 	movl   $0x28,0x4(%esp)
 8143fde:	00 
 8143fdf:	8b 45 0c             	mov    0xc(%ebp),%eax
 8143fe2:	89 04 24             	mov    %eax,(%esp)
 8143fe5:	e8 b6 7e 53 00       	call   867bea0 <_ZN5CUser15SendCmdOkPacketE14ENUM_CMDPACKET>
 8143fea:	8b 45 08             	mov    0x8(%ebp),%eax
 8143fed:	8b 00                	mov    (%eax),%eax
 8143fef:	83 c0 0c             	add    $0xc,%eax
 8143ff2:	8b 18                	mov    (%eax),%ebx
 8143ff4:	8b 45 08             	mov    0x8(%ebp),%eax
 8143ff7:	8b 40 04             	mov    0x4(%eax),%eax
 8143ffa:	89 04 24             	mov    %eax,(%esp)
 8143ffd:	e8 68 61 45 00       	call   859a16a <_ZN6CParty16get_member_countEv>
 8144002:	8b 55 08             	mov    0x8(%ebp),%edx
 8144005:	89 44 24 04          	mov    %eax,0x4(%esp)
 8144009:	89 14 24             	mov    %edx,(%esp)
 814400c:	ff d3                	call   *%ebx
 814400e:	84 c0                	test   %al,%al
 8144010:	0f 84 89 00 00 00    	je     814409f <_ZN8WongWork10CBossTower19handleFinishLoadingEP5CUser+0x135>
 8144016:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8144019:	89 04 24             	mov    %eax,(%esp)
 814401c:	e8 2b 9d 44 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8144021:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 8144028:	00 
 8144029:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8144030:	00 
 8144031:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8144034:	89 04 24             	mov    %eax,(%esp)
 8144037:	e8 c0 78 f8 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 814403c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8144043:	00 
 8144044:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8144047:	89 04 24             	mov    %eax,(%esp)
 814404a:	e8 ed 78 f8 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 814404f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8144056:	00 
 8144057:	8d 45 e8             	lea    -0x18(%ebp),%eax
 814405a:	89 04 24             	mov    %eax,(%esp)
 814405d:	e8 f6 78 f8 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8144062:	8b 45 08             	mov    0x8(%ebp),%eax
 8144065:	8b 40 04             	mov    0x4(%eax),%eax
 8144068:	8d 55 e8             	lea    -0x18(%ebp),%edx
 814406b:	89 54 24 04          	mov    %edx,0x4(%esp)
 814406f:	89 04 24             	mov    %eax,(%esp)
 8144072:	e8 d7 90 45 00       	call   859d14e <_ZN6CParty13send_to_partyER11PacketGuard>
 8144077:	eb 1b                	jmp    8144094 <_ZN8WongWork10CBossTower19handleFinishLoadingEP5CUser+0x12a>
 8144079:	89 d3                	mov    %edx,%ebx
 814407b:	89 c6                	mov    %eax,%esi
 814407d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8144080:	89 04 24             	mov    %eax,(%esp)
 8144083:	e8 f8 9d 44 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8144088:	89 f0                	mov    %esi,%eax
 814408a:	89 da                	mov    %ebx,%edx
 814408c:	89 04 24             	mov    %eax,(%esp)
 814408f:	e8 bc f6 99 00       	call   8ae3750 <_Unwind_Resume>
 8144094:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8144097:	89 04 24             	mov    %eax,(%esp)
 814409a:	e8 e1 9d 44 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 814409f:	b8 01 00 00 00       	mov    $0x1,%eax
 81440a4:	eb 05                	jmp    81440ab <_ZN8WongWork10CBossTower19handleFinishLoadingEP5CUser+0x141>
 81440a6:	b8 00 00 00 00       	mov    $0x0,%eax
 81440ab:	83 c4 20             	add    $0x20,%esp
 81440ae:	5b                   	pop    %ebx
 81440af:	5e                   	pop    %esi
 81440b0:	5d                   	pop    %ebp
 81440b1:	c3                   	ret

```

```c
// WongWork::CBossTower::handleFinishLoading @ 0x8143f6a

/* WongWork::CBossTower::handleFinishLoading(CUser*) */

undefined4 __thiscall WongWork::CBossTower::handleFinishLoading(CBossTower *this,CUser *param_1)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  PacketGuard local_1c [12];
  int local_10;
  
  local_10 = CParty::GetMemberSlotNo(*(CParty **)(this + 4),param_1);
  if (local_10 != -1) {
    cVar3 = CParty::checkValidUser(*(CParty **)(this + 4),local_10);
    if (cVar3 != '\0') {
      bVar2 = true;
      goto LAB_08143fb5;
    }
  }
  bVar2 = false;
LAB_08143fb5:
  if (bVar2) {
    CBossPlay::setMemberReady((CBossPlay *)this,local_10,true);
    CUser::SendCmdOkPacket(param_1,0x28);
    pcVar1 = *(code **)(*(int *)this + 0xc);
    uVar4 = CParty::get_member_count(*(CParty **)(this + 4));
    cVar3 = (*pcVar1)(this,uVar4);
    if (cVar3 != '\0') {
      PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 08144037 to 08144076 has its CatchHandler @ 08144079 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0x1e);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,0);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
      CParty::send_to_party(*(CParty **)(this + 4),local_1c);
      PacketGuard::~PacketGuard(local_1c);
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

## handleKillMonster

```asm
// === 08143ebc WongWork::CBossTower::handleKillMonster  [0x08143ebc-0x8143f69] ===
 8143ebc:	55                   	push   %ebp
 8143ebd:	89 e5                	mov    %esp,%ebp
 8143ebf:	53                   	push   %ebx
 8143ec0:	83 ec 44             	sub    $0x44,%esp
 8143ec3:	8b 55 10             	mov    0x10(%ebp),%edx
 8143ec6:	8b 45 14             	mov    0x14(%ebp),%eax
 8143ec9:	66 89 55 e4          	mov    %dx,-0x1c(%ebp)
 8143ecd:	66 89 45 e0          	mov    %ax,-0x20(%ebp)
 8143ed1:	0f b7 4d e0          	movzwl -0x20(%ebp),%ecx
 8143ed5:	0f b7 55 e4          	movzwl -0x1c(%ebp),%edx
 8143ed9:	8b 45 08             	mov    0x8(%ebp),%eax
 8143edc:	8b 5d 1c             	mov    0x1c(%ebp),%ebx
 8143edf:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 8143ee3:	8b 5d 18             	mov    0x18(%ebp),%ebx
 8143ee6:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8143eea:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8143eee:	89 54 24 08          	mov    %edx,0x8(%esp)
 8143ef2:	8b 55 0c             	mov    0xc(%ebp),%edx
 8143ef5:	89 54 24 04          	mov    %edx,0x4(%esp)
 8143ef9:	89 04 24             	mov    %eax,(%esp)
 8143efc:	e8 87 c4 00 00       	call   8150388 <_ZN8WongWork10CBossStage17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi>
 8143f01:	88 45 f7             	mov    %al,-0x9(%ebp)
 8143f04:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 8143f08:	83 f0 01             	xor    $0x1,%eax
 8143f0b:	84 c0                	test   %al,%al
 8143f0d:	74 07                	je     8143f16 <_ZN8WongWork10CBossTower17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi+0x5a>
 8143f0f:	b8 00 00 00 00       	mov    $0x0,%eax
 8143f14:	eb 4d                	jmp    8143f63 <_ZN8WongWork10CBossTower17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi+0xa7>
 8143f16:	8b 45 08             	mov    0x8(%ebp),%eax
 8143f19:	05 00 0a 00 00       	add    $0xa00,%eax
 8143f1e:	89 04 24             	mov    %eax,(%esp)
 8143f21:	e8 94 1a 00 00       	call   81459ba <_ZNKSt3mapIi11map_monsterSt4lessIiESaISt4pairIKiS0_EEE5emptyEv>
 8143f26:	84 c0                	test   %al,%al
 8143f28:	74 34                	je     8143f5e <_ZN8WongWork10CBossTower17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi+0xa2>
 8143f2a:	8b 45 08             	mov    0x8(%ebp),%eax
 8143f2d:	89 04 24             	mov    %eax,(%esp)
 8143f30:	e8 7d 01 00 00       	call   81440b2 <_ZN8WongWork10CBossTower13onFinishStageEv>
 8143f35:	8b 45 08             	mov    0x8(%ebp),%eax
 8143f38:	8b 90 e0 0a 00 00    	mov    0xae0(%eax),%edx
 8143f3e:	8b 45 08             	mov    0x8(%ebp),%eax
 8143f41:	8b 80 e4 0a 00 00    	mov    0xae4(%eax),%eax
 8143f47:	39 c2                	cmp    %eax,%edx
 8143f49:	72 13                	jb     8143f5e <_ZN8WongWork10CBossTower17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi+0xa2>
 8143f4b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8143f52:	00 
 8143f53:	8b 45 08             	mov    0x8(%ebp),%eax
 8143f56:	89 04 24             	mov    %eax,(%esp)
 8143f59:	e8 c6 ed ff ff       	call   8142d24 <_ZN8WongWork10CBossTower21_onPrepareFinishTowerEb>
 8143f5e:	b8 01 00 00 00       	mov    $0x1,%eax
 8143f63:	83 c4 44             	add    $0x44,%esp
 8143f66:	5b                   	pop    %ebx
 8143f67:	5d                   	pop    %ebp
 8143f68:	c3                   	ret
 8143f69:	90                   	nop

```

```c
// WongWork::CBossTower::handleKillMonster @ 0x8143ebc

/* WongWork::CBossTower::handleKillMonster(CUser*, unsigned short, unsigned short, MSG_MONSTER_DIE
   const&, int*) */

undefined4
WongWork::CBossTower::handleKillMonster
          (CUser *param_1,ushort param_2,ushort param_3,MSG_MONSTER_DIE *param_4,int *param_5)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = CBossStage::handleKillMonster
                    (param_1,param_2,param_3,(MSG_MONSTER_DIE *)((uint)param_4 & 0xffff),param_5);
  if (cVar1 == '\x01') {
    cVar1 = std::
            map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::
            empty((map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>
                   *)(param_1 + 0xa00));
    if (cVar1 != '\0') {
      onFinishStage((CBossTower *)param_1);
      if (*(uint *)(param_1 + 0xae4) <= *(uint *)(param_1 + 0xae0)) {
        _onPrepareFinishTower((CBossTower *)param_1,true);
      }
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

## handleLeaveUser

```asm
// === 08143ae2 WongWork::CBossTower::handleLeaveUser  [0x08143ae2-0x8143d2b] ===
 8143ae2:	55                   	push   %ebp
 8143ae3:	89 e5                	mov    %esp,%ebp
 8143ae5:	57                   	push   %edi
 8143ae6:	56                   	push   %esi
 8143ae7:	53                   	push   %ebx
 8143ae8:	81 ec 3c 01 00 00    	sub    $0x13c,%esp
 8143aee:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8143af2:	75 0a                	jne    8143afe <_ZN8WongWork10CBossTower15handleLeaveUserEP5CUser+0x1c>
 8143af4:	b8 00 00 00 00       	mov    $0x0,%eax
 8143af9:	e9 22 02 00 00       	jmp    8143d20 <_ZN8WongWork10CBossTower15handleLeaveUserEP5CUser+0x23e>
 8143afe:	8b 45 08             	mov    0x8(%ebp),%eax
 8143b01:	8b 55 0c             	mov    0xc(%ebp),%edx
 8143b04:	89 54 24 04          	mov    %edx,0x4(%esp)
 8143b08:	89 04 24             	mov    %eax,(%esp)
 8143b0b:	e8 14 5c 00 00       	call   8149724 <_ZN8WongWork9CBossPlay15handleLeaveUserEP5CUser>
 8143b10:	84 c0                	test   %al,%al
 8143b12:	0f 84 03 02 00 00    	je     8143d1b <_ZN8WongWork10CBossTower15handleLeaveUserEP5CUser+0x239>
 8143b18:	8d 95 e3 fe ff ff    	lea    -0x11d(%ebp),%edx
 8143b1e:	bb ff 00 00 00       	mov    $0xff,%ebx
 8143b23:	b8 00 00 00 00       	mov    $0x0,%eax
 8143b28:	89 d1                	mov    %edx,%ecx
 8143b2a:	83 e1 01             	and    $0x1,%ecx
 8143b2d:	85 c9                	test   %ecx,%ecx
 8143b2f:	74 08                	je     8143b39 <_ZN8WongWork10CBossTower15handleLeaveUserEP5CUser+0x57>
 8143b31:	88 02                	mov    %al,(%edx)
 8143b33:	83 c2 01             	add    $0x1,%edx
 8143b36:	83 eb 01             	sub    $0x1,%ebx
 8143b39:	89 d1                	mov    %edx,%ecx
 8143b3b:	83 e1 02             	and    $0x2,%ecx
 8143b3e:	85 c9                	test   %ecx,%ecx
 8143b40:	74 09                	je     8143b4b <_ZN8WongWork10CBossTower15handleLeaveUserEP5CUser+0x69>
 8143b42:	66 89 02             	mov    %ax,(%edx)
 8143b45:	83 c2 02             	add    $0x2,%edx
 8143b48:	83 eb 02             	sub    $0x2,%ebx
 8143b4b:	89 d9                	mov    %ebx,%ecx
 8143b4d:	c1 e9 02             	shr    $0x2,%ecx
 8143b50:	89 d7                	mov    %edx,%edi
 8143b52:	f3 ab                	rep stos %eax,%es:(%edi)
 8143b54:	89 fa                	mov    %edi,%edx
 8143b56:	89 d9                	mov    %ebx,%ecx
 8143b58:	83 e1 02             	and    $0x2,%ecx
 8143b5b:	85 c9                	test   %ecx,%ecx
 8143b5d:	74 06                	je     8143b65 <_ZN8WongWork10CBossTower15handleLeaveUserEP5CUser+0x83>
 8143b5f:	66 89 02             	mov    %ax,(%edx)
 8143b62:	83 c2 02             	add    $0x2,%edx
 8143b65:	89 d9                	mov    %ebx,%ecx
 8143b67:	83 e1 01             	and    $0x1,%ecx
 8143b6a:	85 c9                	test   %ecx,%ecx
 8143b6c:	74 05                	je     8143b73 <_ZN8WongWork10CBossTower15handleLeaveUserEP5CUser+0x91>
 8143b6e:	88 02                	mov    %al,(%edx)
 8143b70:	83 c2 01             	add    $0x1,%edx
 8143b73:	8b 45 08             	mov    0x8(%ebp),%eax
 8143b76:	8b 40 04             	mov    0x4(%eax),%eax
 8143b79:	8b 80 d8 0c 00 00    	mov    0xcd8(%eax),%eax
 8143b7f:	88 45 e3             	mov    %al,-0x1d(%ebp)
 8143b82:	8b 45 08             	mov    0x8(%ebp),%eax
 8143b85:	8b 40 04             	mov    0x4(%eax),%eax
 8143b88:	8d 95 e3 fe ff ff    	lea    -0x11d(%ebp),%edx
 8143b8e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8143b92:	89 04 24             	mov    %eax,(%esp)
 8143b95:	e8 e8 1c 00 00       	call   8145882 <_ZN6CParty14getMemberNamesEPc>
 8143b9a:	0f be 75 e3          	movsbl -0x1d(%ebp),%esi
 8143b9e:	8b 45 08             	mov    0x8(%ebp),%eax
 8143ba1:	8b 80 e8 0a 00 00    	mov    0xae8(%eax),%eax
 8143ba7:	89 c3                	mov    %eax,%ebx
 8143ba9:	8b 45 08             	mov    0x8(%ebp),%eax
 8143bac:	8b 80 f0 09 00 00    	mov    0x9f0(%eax),%eax
 8143bb2:	89 04 24             	mov    %eax,(%esp)
 8143bb5:	e8 ec 19 00 00       	call   81455a6 <_ZNK8CDungeon14GetDungeonNameEv>
 8143bba:	8b 55 0c             	mov    0xc(%ebp),%edx
 8143bbd:	8d 8a 00 97 07 00    	lea    0x79700(%edx),%ecx
 8143bc3:	89 74 24 10          	mov    %esi,0x10(%esp)
 8143bc7:	8d 95 e3 fe ff ff    	lea    -0x11d(%ebp),%edx
 8143bcd:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8143bd1:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8143bd5:	89 44 24 04          	mov    %eax,0x4(%esp)
 8143bd9:	89 0c 24             	mov    %ecx,(%esp)
 8143bdc:	e8 fb 0d 54 00       	call   86849dc <_ZN15cUserHistoryLog12LeaveDungeonEPKciS1_i>
 8143be1:	8b 45 08             	mov    0x8(%ebp),%eax
 8143be4:	8b 40 04             	mov    0x4(%eax),%eax
 8143be7:	89 04 24             	mov    %eax,(%esp)
 8143bea:	e8 7b 65 45 00       	call   859a16a <_ZN6CParty16get_member_countEv>
 8143bef:	89 44 24 08          	mov    %eax,0x8(%esp)
 8143bf3:	c7 44 24 04 36 f5 b6 	movl   $0x8b6f536,0x4(%esp)
 8143bfa:	08 
 8143bfb:	8d 45 e2             	lea    -0x1e(%ebp),%eax
 8143bfe:	89 04 24             	mov    %eax,(%esp)
 8143c01:	e8 8a bd 40 00       	call   854f990 <_ZN13cHistoryTraceclEPKcz>
 8143c06:	8b 45 08             	mov    0x8(%ebp),%eax
 8143c09:	8b 40 04             	mov    0x4(%eax),%eax
 8143c0c:	85 c0                	test   %eax,%eax
 8143c0e:	74 12                	je     8143c22 <_ZN8WongWork10CBossTower15handleLeaveUserEP5CUser+0x140>
 8143c10:	8b 45 08             	mov    0x8(%ebp),%eax
 8143c13:	8b 40 04             	mov    0x4(%eax),%eax
 8143c16:	89 04 24             	mov    %eax,(%esp)
 8143c19:	e8 4c 65 45 00       	call   859a16a <_ZN6CParty16get_member_countEv>
 8143c1e:	85 c0                	test   %eax,%eax
 8143c20:	7f 07                	jg     8143c29 <_ZN8WongWork10CBossTower15handleLeaveUserEP5CUser+0x147>
 8143c22:	b8 01 00 00 00       	mov    $0x1,%eax
 8143c27:	eb 05                	jmp    8143c2e <_ZN8WongWork10CBossTower15handleLeaveUserEP5CUser+0x14c>
 8143c29:	b8 00 00 00 00       	mov    $0x0,%eax
 8143c2e:	84 c0                	test   %al,%al
 8143c30:	74 15                	je     8143c47 <_ZN8WongWork10CBossTower15handleLeaveUserEP5CUser+0x165>
 8143c32:	8b 45 08             	mov    0x8(%ebp),%eax
 8143c35:	89 04 24             	mov    %eax,(%esp)
 8143c38:	e8 f9 ee ff ff       	call   8142b36 <_ZN8WongWork10CBossTower8_destroyEv>
 8143c3d:	b8 00 00 00 00       	mov    $0x0,%eax
 8143c42:	e9 d9 00 00 00       	jmp    8143d20 <_ZN8WongWork10CBossTower15handleLeaveUserEP5CUser+0x23e>
 8143c47:	8b 45 08             	mov    0x8(%ebp),%eax
 8143c4a:	8b 40 04             	mov    0x4(%eax),%eax
 8143c4d:	85 c0                	test   %eax,%eax
 8143c4f:	74 28                	je     8143c79 <_ZN8WongWork10CBossTower15handleLeaveUserEP5CUser+0x197>
 8143c51:	8b 45 08             	mov    0x8(%ebp),%eax
 8143c54:	8b 40 04             	mov    0x4(%eax),%eax
 8143c57:	89 04 24             	mov    %eax,(%esp)
 8143c5a:	e8 0b 65 45 00       	call   859a16a <_ZN6CParty16get_member_countEv>
 8143c5f:	85 c0                	test   %eax,%eax
 8143c61:	7e 1d                	jle    8143c80 <_ZN8WongWork10CBossTower15handleLeaveUserEP5CUser+0x19e>
 8143c63:	8b 45 08             	mov    0x8(%ebp),%eax
 8143c66:	8b 00                	mov    (%eax),%eax
 8143c68:	83 c0 08             	add    $0x8,%eax
 8143c6b:	8b 10                	mov    (%eax),%edx
 8143c6d:	8b 45 08             	mov    0x8(%ebp),%eax
 8143c70:	89 04 24             	mov    %eax,(%esp)
 8143c73:	ff d2                	call   *%edx
 8143c75:	84 c0                	test   %al,%al
 8143c77:	74 07                	je     8143c80 <_ZN8WongWork10CBossTower15handleLeaveUserEP5CUser+0x19e>
 8143c79:	b8 01 00 00 00       	mov    $0x1,%eax
 8143c7e:	eb 05                	jmp    8143c85 <_ZN8WongWork10CBossTower15handleLeaveUserEP5CUser+0x1a3>
 8143c80:	b8 00 00 00 00       	mov    $0x0,%eax
 8143c85:	84 c0                	test   %al,%al
 8143c87:	74 20                	je     8143ca9 <_ZN8WongWork10CBossTower15handleLeaveUserEP5CUser+0x1c7>
 8143c89:	8b 45 08             	mov    0x8(%ebp),%eax
 8143c8c:	89 04 24             	mov    %eax,(%esp)
 8143c8f:	e8 1e 04 00 00       	call   81440b2 <_ZN8WongWork10CBossTower13onFinishStageEv>
 8143c94:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8143c9b:	00 
 8143c9c:	8b 45 08             	mov    0x8(%ebp),%eax
 8143c9f:	89 04 24             	mov    %eax,(%esp)
 8143ca2:	e8 7d f0 ff ff       	call   8142d24 <_ZN8WongWork10CBossTower21_onPrepareFinishTowerEb>
 8143ca7:	eb 6b                	jmp    8143d14 <_ZN8WongWork10CBossTower15handleLeaveUserEP5CUser+0x232>
 8143ca9:	8b 45 08             	mov    0x8(%ebp),%eax
 8143cac:	8b 40 04             	mov    0x4(%eax),%eax
 8143caf:	89 04 24             	mov    %eax,(%esp)
 8143cb2:	e8 b3 64 45 00       	call   859a16a <_ZN6CParty16get_member_countEv>
 8143cb7:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8143cba:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8143cbd:	83 f8 02             	cmp    $0x2,%eax
 8143cc0:	74 27                	je     8143ce9 <_ZN8WongWork10CBossTower15handleLeaveUserEP5CUser+0x207>
 8143cc2:	83 f8 02             	cmp    $0x2,%eax
 8143cc5:	7f 07                	jg     8143cce <_ZN8WongWork10CBossTower15handleLeaveUserEP5CUser+0x1ec>
 8143cc7:	83 f8 01             	cmp    $0x1,%eax
 8143cca:	74 0e                	je     8143cda <_ZN8WongWork10CBossTower15handleLeaveUserEP5CUser+0x1f8>
 8143ccc:	eb 46                	jmp    8143d14 <_ZN8WongWork10CBossTower15handleLeaveUserEP5CUser+0x232>
 8143cce:	83 f8 03             	cmp    $0x3,%eax
 8143cd1:	74 25                	je     8143cf8 <_ZN8WongWork10CBossTower15handleLeaveUserEP5CUser+0x216>
 8143cd3:	83 f8 04             	cmp    $0x4,%eax
 8143cd6:	74 2f                	je     8143d07 <_ZN8WongWork10CBossTower15handleLeaveUserEP5CUser+0x225>
 8143cd8:	eb 3a                	jmp    8143d14 <_ZN8WongWork10CBossTower15handleLeaveUserEP5CUser+0x232>
 8143cda:	8b 45 08             	mov    0x8(%ebp),%eax
 8143cdd:	c7 80 e8 0a 00 00 00 	movl   $0x0,0xae8(%eax)
 8143ce4:	00 00 00 
 8143ce7:	eb 2b                	jmp    8143d14 <_ZN8WongWork10CBossTower15handleLeaveUserEP5CUser+0x232>
 8143ce9:	8b 45 08             	mov    0x8(%ebp),%eax
 8143cec:	c7 80 e8 0a 00 00 01 	movl   $0x1,0xae8(%eax)
 8143cf3:	00 00 00 
 8143cf6:	eb 1c                	jmp    8143d14 <_ZN8WongWork10CBossTower15handleLeaveUserEP5CUser+0x232>
 8143cf8:	8b 45 08             	mov    0x8(%ebp),%eax
 8143cfb:	c7 80 e8 0a 00 00 02 	movl   $0x2,0xae8(%eax)
 8143d02:	00 00 00 
 8143d05:	eb 0d                	jmp    8143d14 <_ZN8WongWork10CBossTower15handleLeaveUserEP5CUser+0x232>
 8143d07:	8b 45 08             	mov    0x8(%ebp),%eax
 8143d0a:	c7 80 e8 0a 00 00 03 	movl   $0x3,0xae8(%eax)
 8143d11:	00 00 00 
 8143d14:	b8 01 00 00 00       	mov    $0x1,%eax
 8143d19:	eb 05                	jmp    8143d20 <_ZN8WongWork10CBossTower15handleLeaveUserEP5CUser+0x23e>
 8143d1b:	b8 00 00 00 00       	mov    $0x0,%eax
 8143d20:	81 c4 3c 01 00 00    	add    $0x13c,%esp
 8143d26:	5b                   	pop    %ebx
 8143d27:	5e                   	pop    %esi
 8143d28:	5f                   	pop    %edi
 8143d29:	5d                   	pop    %ebp
 8143d2a:	c3                   	ret
 8143d2b:	90                   	nop

```

```c
// WongWork::CBossTower::handleLeaveUser @ 0x8143ae2

/* WongWork::CBossTower::handleLeaveUser(CUser*) */

undefined4 __thiscall WongWork::CBossTower::handleLeaveUser(CBossTower *this,CUser *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  byte bVar9;
  char local_121;
  char local_120 [254];
  cHistoryTrace local_22;
  char local_21;
  
  bVar9 = 0;
  if (param_1 == (CUser *)0x0) {
    uVar2 = 0;
  }
  else {
    cVar1 = CBossPlay::handleLeaveUser((CBossPlay *)this,param_1);
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      pcVar5 = &local_121;
      uVar6 = 0xff;
      bVar8 = ((uint)pcVar5 & 1) != 0;
      if (bVar8) {
        local_121 = '\0';
        pcVar5 = local_120;
        uVar6 = 0xfe;
      }
      if (((uint)pcVar5 & 2) != 0) {
        pcVar5[0] = '\0';
        pcVar5[1] = '\0';
        pcVar5 = pcVar5 + 2;
        uVar6 = uVar6 - 2;
      }
      for (uVar4 = uVar6 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        pcVar5[0] = '\0';
        pcVar5[1] = '\0';
        pcVar5[2] = '\0';
        pcVar5[3] = '\0';
        pcVar5 = pcVar5 + ((uint)bVar9 * -2 + 1) * 4;
      }
      if ((uVar6 & 2) != 0) {
        pcVar5[0] = '\0';
        pcVar5[1] = '\0';
        pcVar5 = pcVar5 + 2;
      }
      if (!bVar8) {
        *pcVar5 = '\0';
      }
      local_21 = (char)*(undefined4 *)(*(int *)(this + 4) + 0xcd8);
      CParty::getMemberNames(*(CParty **)(this + 4),&local_121);
      iVar7 = (int)local_21;
      iVar3 = *(int *)(this + 0xae8);
      pcVar5 = (char *)CDungeon::GetDungeonName(*(CDungeon **)(this + 0x9f0));
      cUserHistoryLog::LeaveDungeon
                ((cUserHistoryLog *)(param_1 + 0x79700),pcVar5,iVar3,&local_121,iVar7);
      uVar2 = CParty::get_member_count(*(CParty **)(this + 4));
      cHistoryTrace::operator()(&local_22,"member_count : %d",uVar2);
      if ((*(int *)(this + 4) == 0) ||
         (iVar3 = CParty::get_member_count(*(CParty **)(this + 4)), iVar3 < 1)) {
        bVar8 = true;
      }
      else {
        bVar8 = false;
      }
      if (bVar8) {
        _destroy(this);
        uVar2 = 0;
      }
      else {
        if ((*(int *)(this + 4) == 0) ||
           ((iVar3 = CParty::get_member_count(*(CParty **)(this + 4)), 0 < iVar3 &&
            (cVar1 = (**(code **)(*(int *)this + 8))(this), cVar1 != '\0')))) {
          bVar8 = true;
        }
        else {
          bVar8 = false;
        }
        if (bVar8) {
          onFinishStage(this);
          _onPrepareFinishTower(this,false);
        }
        else {
          iVar3 = CParty::get_member_count(*(CParty **)(this + 4));
          if (iVar3 == 2) {
            *(undefined4 *)(this + 0xae8) = 1;
          }
          else if (iVar3 < 3) {
            if (iVar3 == 1) {
              *(undefined4 *)(this + 0xae8) = 0;
            }
          }
          else if (iVar3 == 3) {
            *(undefined4 *)(this + 0xae8) = 2;
          }
          else if (iVar3 == 4) {
            *(undefined4 *)(this + 0xae8) = 3;
          }
        }
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}

```

---

## handleMoveMap

```asm
// === 08143996 WongWork::CBossTower::handleMoveMap  [0x08143996-0x8143a61] ===
 8143996:	55                   	push   %ebp
 8143997:	89 e5                	mov    %esp,%ebp
 8143999:	83 ec 28             	sub    $0x28,%esp
 814399c:	8b 45 08             	mov    0x8(%ebp),%eax
 814399f:	8b 55 0c             	mov    0xc(%ebp),%edx
 81439a2:	89 54 24 04          	mov    %edx,0x4(%esp)
 81439a6:	89 04 24             	mov    %eax,(%esp)
 81439a9:	e8 bc bc 00 00       	call   814f66a <_ZN8WongWork10CBossStage13handleMoveMapEPt>
 81439ae:	83 f0 01             	xor    $0x1,%eax
 81439b1:	84 c0                	test   %al,%al
 81439b3:	74 0a                	je     81439bf <_ZN8WongWork10CBossTower13handleMoveMapEPt+0x29>
 81439b5:	b8 00 00 00 00       	mov    $0x0,%eax
 81439ba:	e9 a0 00 00 00       	jmp    8143a5f <_ZN8WongWork10CBossTower13handleMoveMapEPt+0xc9>
 81439bf:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 81439c6:	e9 80 00 00 00       	jmp    8143a4b <_ZN8WongWork10CBossTower13handleMoveMapEPt+0xb5>
 81439cb:	8b 45 08             	mov    0x8(%ebp),%eax
 81439ce:	8b 40 04             	mov    0x4(%eax),%eax
 81439d1:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81439d4:	89 54 24 04          	mov    %edx,0x4(%esp)
 81439d8:	89 04 24             	mov    %eax,(%esp)
 81439db:	e8 84 1d 00 00       	call   8145764 <_ZN6CParty8get_userEi>
 81439e0:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81439e3:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81439e7:	74 1d                	je     8143a06 <_ZN8WongWork10CBossTower13handleMoveMapEPt+0x70>
 81439e9:	8b 45 08             	mov    0x8(%ebp),%eax
 81439ec:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81439ef:	89 54 24 04          	mov    %edx,0x4(%esp)
 81439f3:	89 04 24             	mov    %eax,(%esp)
 81439f6:	e8 87 1c 00 00       	call   8145682 <_ZN8WongWork9CBossPlay13isMemberAliveEi>
 81439fb:	84 c0                	test   %al,%al
 81439fd:	74 07                	je     8143a06 <_ZN8WongWork10CBossTower13handleMoveMapEPt+0x70>
 81439ff:	b8 01 00 00 00       	mov    $0x1,%eax
 8143a04:	eb 05                	jmp    8143a0b <_ZN8WongWork10CBossTower13handleMoveMapEPt+0x75>
 8143a06:	b8 00 00 00 00       	mov    $0x0,%eax
 8143a0b:	84 c0                	test   %al,%al
 8143a0d:	74 38                	je     8143a47 <_ZN8WongWork10CBossTower13handleMoveMapEPt+0xb1>
 8143a0f:	8b 45 08             	mov    0x8(%ebp),%eax
 8143a12:	8b 80 e8 0a 00 00    	mov    0xae8(%eax),%eax
 8143a18:	0f b6 d0             	movzbl %al,%edx
 8143a1b:	8b 45 08             	mov    0x8(%ebp),%eax
 8143a1e:	8b 80 e0 0a 00 00    	mov    0xae0(%eax),%eax
 8143a24:	0f b6 c0             	movzbl %al,%eax
 8143a27:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8143a2a:	81 c1 00 0b 00 00    	add    $0xb00,%ecx
 8143a30:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8143a34:	89 44 24 08          	mov    %eax,0x8(%esp)
 8143a38:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8143a3b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8143a3f:	89 0c 24             	mov    %ecx,(%esp)
 8143a42:	e8 a9 2a 01 00       	call   81564f0 <_ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh>
 8143a47:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8143a4b:	83 7d f0 03          	cmpl   $0x3,-0x10(%ebp)
 8143a4f:	0f 9e c0             	setle  %al
 8143a52:	84 c0                	test   %al,%al
 8143a54:	0f 85 71 ff ff ff    	jne    81439cb <_ZN8WongWork10CBossTower13handleMoveMapEPt+0x35>
 8143a5a:	b8 01 00 00 00       	mov    $0x1,%eax
 8143a5f:	c9                   	leave
 8143a60:	c3                   	ret
 8143a61:	90                   	nop

```

```c
// WongWork::CBossTower::handleMoveMap @ 0x8143996

/* WongWork::CBossTower::handleMoveMap(unsigned short*) */

undefined4 __thiscall WongWork::CBossTower::handleMoveMap(CBossTower *this,ushort *param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  CUser *pCVar4;
  int local_14;
  
  cVar2 = CBossStage::handleMoveMap((CBossStage *)this,param_1);
  if (cVar2 == '\x01') {
    for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
      pCVar4 = (CUser *)CParty::get_user(*(CParty **)(this + 4),local_14);
      if (pCVar4 == (CUser *)0x0) {
LAB_08143a06:
        bVar1 = false;
      }
      else {
        cVar2 = CBossPlay::isMemberAlive((CBossPlay *)this,local_14);
        if (cVar2 == '\0') goto LAB_08143a06;
        bVar1 = true;
      }
      if (bVar1) {
        CBossDungeonEntranceLog::IncrementBossStageStart
                  ((CBossDungeonEntranceLog *)(this + 0xb00),pCVar4,
                   (uchar)*(undefined4 *)(this + 0xae0),(uchar)*(undefined4 *)(this + 0xae8));
      }
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

```

---

## handlePickupItem

```asm
// === 08143d2c WongWork::CBossTower::handlePickupItem  [0x08143d2c-0x8143e5d] ===
 8143d2c:	55                   	push   %ebp
 8143d2d:	89 e5                	mov    %esp,%ebp
 8143d2f:	83 ec 58             	sub    $0x58,%esp
 8143d32:	8b 55 14             	mov    0x14(%ebp),%edx
 8143d35:	8b 45 18             	mov    0x18(%ebp),%eax
 8143d38:	88 55 d4             	mov    %dl,-0x2c(%ebp)
 8143d3b:	88 45 d0             	mov    %al,-0x30(%ebp)
 8143d3e:	8b 45 08             	mov    0x8(%ebp),%eax
 8143d41:	8b 40 04             	mov    0x4(%eax),%eax
 8143d44:	85 c0                	test   %eax,%eax
 8143d46:	74 12                	je     8143d5a <_ZN8WongWork10CBossTower16handlePickupItemEP5CUseribc+0x2e>
 8143d48:	8b 45 08             	mov    0x8(%ebp),%eax
 8143d4b:	8b 40 04             	mov    0x4(%eax),%eax
 8143d4e:	89 04 24             	mov    %eax,(%esp)
 8143d51:	e8 ea 1a 00 00       	call   8145840 <_ZN6CParty14IsRoutingStateEv>
 8143d56:	84 c0                	test   %al,%al
 8143d58:	74 07                	je     8143d61 <_ZN8WongWork10CBossTower16handlePickupItemEP5CUseribc+0x35>
 8143d5a:	b8 01 00 00 00       	mov    $0x1,%eax
 8143d5f:	eb 05                	jmp    8143d66 <_ZN8WongWork10CBossTower16handlePickupItemEP5CUseribc+0x3a>
 8143d61:	b8 00 00 00 00       	mov    $0x0,%eax
 8143d66:	84 c0                	test   %al,%al
 8143d68:	74 25                	je     8143d8f <_ZN8WongWork10CBossTower16handlePickupItemEP5CUseribc+0x63>
 8143d6a:	c7 44 24 08 d8 00 00 	movl   $0xd8,0x8(%esp)
 8143d71:	00 
 8143d72:	c7 44 24 04 2e 00 00 	movl   $0x2e,0x4(%esp)
 8143d79:	00 
 8143d7a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8143d7d:	89 04 24             	mov    %eax,(%esp)
 8143d80:	e8 bd 81 53 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8143d85:	b8 00 00 00 00       	mov    $0x0,%eax
 8143d8a:	e9 cc 00 00 00       	jmp    8143e5b <_ZN8WongWork10CBossTower16handlePickupItemEP5CUseribc+0x12f>
 8143d8f:	c6 45 e3 00          	movb   $0x0,-0x1d(%ebp)
 8143d93:	0f b6 55 d4          	movzbl -0x2c(%ebp),%edx
 8143d97:	8b 45 08             	mov    0x8(%ebp),%eax
 8143d9a:	8d 4d e3             	lea    -0x1d(%ebp),%ecx
 8143d9d:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8143da1:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8143da5:	8b 55 10             	mov    0x10(%ebp),%edx
 8143da8:	89 54 24 08          	mov    %edx,0x8(%esp)
 8143dac:	8b 55 0c             	mov    0xc(%ebp),%edx
 8143daf:	89 54 24 04          	mov    %edx,0x4(%esp)
 8143db3:	89 04 24             	mov    %eax,(%esp)
 8143db6:	e8 bb bc 00 00       	call   814fa76 <_ZN8WongWork10CBossStage16handlePickupItemEP5CUseribRc>
 8143dbb:	88 45 f7             	mov    %al,-0x9(%ebp)
 8143dbe:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 8143dc2:	83 f0 01             	xor    $0x1,%eax
 8143dc5:	84 c0                	test   %al,%al
 8143dc7:	74 0a                	je     8143dd3 <_ZN8WongWork10CBossTower16handlePickupItemEP5CUseribc+0xa7>
 8143dc9:	b8 00 00 00 00       	mov    $0x0,%eax
 8143dce:	e9 88 00 00 00       	jmp    8143e5b <_ZN8WongWork10CBossTower16handlePickupItemEP5CUseribc+0x12f>
 8143dd3:	0f b6 45 e3          	movzbl -0x1d(%ebp),%eax
 8143dd7:	3a 45 d0             	cmp    -0x30(%ebp),%al
 8143dda:	74 36                	je     8143e12 <_ZN8WongWork10CBossTower16handlePickupItemEP5CUseribc+0xe6>
 8143ddc:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8143de3:	00 
 8143de4:	c7 44 24 08 58 02 00 	movl   $0x258,0x8(%esp)
 8143deb:	00 
 8143dec:	c7 44 24 04 a0 01 b7 	movl   $0x8b701a0,0x4(%esp)
 8143df3:	08 
 8143df4:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8143df7:	89 04 24             	mov    %eax,(%esp)
 8143dfa:	e8 19 b9 40 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8143dff:	c7 44 24 04 48 f5 b6 	movl   $0x8b6f548,0x4(%esp)
 8143e06:	08 
 8143e07:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8143e0a:	89 04 24             	mov    %eax,(%esp)
 8143e0d:	e8 76 b9 40 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8143e12:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8143e16:	74 3e                	je     8143e56 <_ZN8WongWork10CBossTower16handlePickupItemEP5CUseribc+0x12a>
 8143e18:	80 7d d0 03          	cmpb   $0x3,-0x30(%ebp)
 8143e1c:	75 38                	jne    8143e56 <_ZN8WongWork10CBossTower16handlePickupItemEP5CUseribc+0x12a>
 8143e1e:	8b 45 08             	mov    0x8(%ebp),%eax
 8143e21:	8b 80 e8 0a 00 00    	mov    0xae8(%eax),%eax
 8143e27:	0f b6 d0             	movzbl %al,%edx
 8143e2a:	8b 45 08             	mov    0x8(%ebp),%eax
 8143e2d:	8b 80 e0 0a 00 00    	mov    0xae0(%eax),%eax
 8143e33:	0f b6 c0             	movzbl %al,%eax
 8143e36:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8143e39:	81 c1 00 0b 00 00    	add    $0xb00,%ecx
 8143e3f:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8143e43:	89 44 24 08          	mov    %eax,0x8(%esp)
 8143e47:	8b 45 0c             	mov    0xc(%ebp),%eax
 8143e4a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8143e4e:	89 0c 24             	mov    %ecx,(%esp)
 8143e51:	e8 38 29 01 00       	call   815678e <_ZN23CBossDungeonEntranceLog23IncrementBossPickUpItemER5CUserhh>
 8143e56:	b8 01 00 00 00       	mov    $0x1,%eax
 8143e5b:	c9                   	leave
 8143e5c:	c3                   	ret
 8143e5d:	90                   	nop

```

```c
// WongWork::CBossTower::handlePickupItem @ 0x8143d2c

/* WongWork::CBossTower::handlePickupItem(CUser*, int, bool, char) */

undefined4 __thiscall
WongWork::CBossTower::handlePickupItem
          (CBossTower *this,CUser *param_1,int param_2,bool param_3,char param_4)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  char local_21;
  cMyTrace local_20 [19];
  char local_d;
  
  if (*(int *)(this + 4) != 0) {
    cVar2 = CParty::IsRoutingState(*(CParty **)(this + 4));
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_08143d66;
    }
  }
  bVar1 = true;
LAB_08143d66:
  if (bVar1) {
    CUser::SendCmdErrorPacket(param_1,0x2e,0xd8);
    uVar3 = 0;
  }
  else {
    local_21 = '\0';
    local_d = CBossStage::handlePickupItem((CBossStage *)this,param_1,param_2,param_3,&local_21);
    if (local_d == '\x01') {
      if (local_21 != param_4) {
        cMyTrace::cMyTrace(local_20,
                           "virtual bool WongWork::CBossTower::handlePickupItem(CUser*, int, bool, char)"
                           ,600,5);
        cMyTrace::operator()(local_20,"server_item_rarity != client_item_rarity");
      }
      if ((param_1 != (CUser *)0x0) && (param_4 == '\x03')) {
        CBossDungeonEntranceLog::IncrementBossPickUpItem
                  ((CBossDungeonEntranceLog *)(this + 0xb00),param_1,
                   (uchar)*(undefined4 *)(this + 0xae0),(uchar)*(undefined4 *)(this + 0xae8));
      }
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

```

---

## handleStartGame

```asm
// === 081434f4 WongWork::CBossTower::handleStartGame  [0x081434f4-0x8143995] ===
 81434f4:	55                   	push   %ebp
 81434f5:	89 e5                	mov    %esp,%ebp
 81434f7:	57                   	push   %edi
 81434f8:	56                   	push   %esi
 81434f9:	53                   	push   %ebx
 81434fa:	81 ec 5c 01 00 00    	sub    $0x15c,%esp
 8143500:	8b 45 14             	mov    0x14(%ebp),%eax
 8143503:	88 85 c4 fe ff ff    	mov    %al,-0x13c(%ebp)
 8143509:	83 7d 18 01          	cmpl   $0x1,0x18(%ebp)
 814350d:	75 0a                	jne    8143519 <_ZN8WongWork10CBossTower15handleStartGameEP6CPartyic17ENUM_DUNGEON_TYPE+0x25>
 814350f:	bb 00 00 00 00       	mov    $0x0,%ebx
 8143514:	e9 70 04 00 00       	jmp    8143989 <_ZN8WongWork10CBossTower15handleStartGameEP6CPartyic17ENUM_DUNGEON_TYPE+0x495>
 8143519:	8b 45 0c             	mov    0xc(%ebp),%eax
 814351c:	8b 80 d8 0c 00 00    	mov    0xcd8(%eax),%eax
 8143522:	83 f8 01             	cmp    $0x1,%eax
 8143525:	75 0a                	jne    8143531 <_ZN8WongWork10CBossTower15handleStartGameEP6CPartyic17ENUM_DUNGEON_TYPE+0x3d>
 8143527:	bb 00 00 00 00       	mov    $0x0,%ebx
 814352c:	e9 58 04 00 00       	jmp    8143989 <_ZN8WongWork10CBossTower15handleStartGameEP6CPartyic17ENUM_DUNGEON_TYPE+0x495>
 8143531:	8b 45 08             	mov    0x8(%ebp),%eax
 8143534:	8b 55 18             	mov    0x18(%ebp),%edx
 8143537:	89 90 ec 0a 00 00    	mov    %edx,0xaec(%eax)
 814353d:	0f be 95 c4 fe ff ff 	movsbl -0x13c(%ebp),%edx
 8143544:	8b 45 08             	mov    0x8(%ebp),%eax
 8143547:	89 90 e8 0a 00 00    	mov    %edx,0xae8(%eax)
 814354d:	8b 45 08             	mov    0x8(%ebp),%eax
 8143550:	89 04 24             	mov    %eax,(%esp)
 8143553:	e8 c8 5b 00 00       	call   8149120 <_ZN8WongWork9CBossPlay5resetEv>
 8143558:	8b 45 08             	mov    0x8(%ebp),%eax
 814355b:	89 04 24             	mov    %eax,(%esp)
 814355e:	e8 3f 89 00 00       	call   814bea2 <_ZN8WongWork10CBossStage5resetEv>
 8143563:	8b 45 08             	mov    0x8(%ebp),%eax
 8143566:	05 00 0b 00 00       	add    $0xb00,%eax
 814356b:	89 04 24             	mov    %eax,(%esp)
 814356e:	e8 d3 21 00 00       	call   8145746 <_ZN23CBossDungeonEntranceLog5resetEv>
 8143573:	8b 45 08             	mov    0x8(%ebp),%eax
 8143576:	c7 80 e0 0a 00 00 01 	movl   $0x1,0xae0(%eax)
 814357d:	00 00 00 
 8143580:	8b 45 10             	mov    0x10(%ebp),%eax
 8143583:	89 44 24 08          	mov    %eax,0x8(%esp)
 8143587:	8b 45 0c             	mov    0xc(%ebp),%eax
 814358a:	89 44 24 04          	mov    %eax,0x4(%esp)
 814358e:	8b 45 08             	mov    0x8(%ebp),%eax
 8143591:	89 04 24             	mov    %eax,(%esp)
 8143594:	e8 99 f9 ff ff       	call   8142f32 <_ZN8WongWork10CBossTower13InitBossTowerEP6CPartyi>
 8143599:	83 f0 01             	xor    $0x1,%eax
 814359c:	84 c0                	test   %al,%al
 814359e:	74 0a                	je     81435aa <_ZN8WongWork10CBossTower15handleStartGameEP6CPartyic17ENUM_DUNGEON_TYPE+0xb6>
 81435a0:	bb 00 00 00 00       	mov    $0x0,%ebx
 81435a5:	e9 df 03 00 00       	jmp    8143989 <_ZN8WongWork10CBossTower15handleStartGameEP6CPartyic17ENUM_DUNGEON_TYPE+0x495>
 81435aa:	c6 45 d7 00          	movb   $0x0,-0x29(%ebp)
 81435ae:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81435b5:	00 
 81435b6:	8d 45 d7             	lea    -0x29(%ebp),%eax
 81435b9:	89 44 24 04          	mov    %eax,0x4(%esp)
 81435bd:	8b 45 08             	mov    0x8(%ebp),%eax
 81435c0:	89 04 24             	mov    %eax,(%esp)
 81435c3:	e8 de f9 ff ff       	call   8142fa6 <_ZN8WongWork10CBossTower23checkStartGameConditionERhb>
 81435c8:	83 f0 01             	xor    $0x1,%eax
 81435cb:	84 c0                	test   %al,%al
 81435cd:	74 0a                	je     81435d9 <_ZN8WongWork10CBossTower15handleStartGameEP6CPartyic17ENUM_DUNGEON_TYPE+0xe5>
 81435cf:	bb 00 00 00 00       	mov    $0x0,%ebx
 81435d4:	e9 b0 03 00 00       	jmp    8143989 <_ZN8WongWork10CBossTower15handleStartGameEP6CPartyic17ENUM_DUNGEON_TYPE+0x495>
 81435d9:	8b 45 0c             	mov    0xc(%ebp),%eax
 81435dc:	89 04 24             	mov    %eax,(%esp)
 81435df:	e8 9c 21 00 00       	call   8145780 <_ZN6CParty10getManagerEv>
 81435e4:	89 45 d8             	mov    %eax,-0x28(%ebp)
 81435e7:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81435ea:	89 04 24             	mov    %eax,(%esp)
 81435ed:	e8 aa 22 00 00       	call   814589c <_ZN5CUser8isGMUserEv>
 81435f2:	84 c0                	test   %al,%al
 81435f4:	74 28                	je     814361e <_ZN8WongWork10CBossTower15handleStartGameEP6CPartyic17ENUM_DUNGEON_TYPE+0x12a>
 81435f6:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81435f9:	0f b6 80 cc 96 07 00 	movzbl 0x796cc(%eax),%eax
 8143600:	84 c0                	test   %al,%al
 8143602:	74 1a                	je     814361e <_ZN8WongWork10CBossTower15handleStartGameEP6CPartyic17ENUM_DUNGEON_TYPE+0x12a>
 8143604:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8143607:	0f b6 80 cc 96 07 00 	movzbl 0x796cc(%eax),%eax
 814360e:	88 85 c4 fe ff ff    	mov    %al,-0x13c(%ebp)
 8143614:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8143617:	c6 80 cc 96 07 00 00 	movb   $0x0,0x796cc(%eax)
 814361e:	8b 45 08             	mov    0x8(%ebp),%eax
 8143621:	8b 55 d8             	mov    -0x28(%ebp),%edx
 8143624:	89 54 24 04          	mov    %edx,0x4(%esp)
 8143628:	89 04 24             	mov    %eax,(%esp)
 814362b:	e8 f6 bd 00 00       	call   814f426 <_ZN8WongWork10CBossStage16RandomConsistMapER5CUser>
 8143630:	83 f0 01             	xor    $0x1,%eax
 8143633:	84 c0                	test   %al,%al
 8143635:	74 0a                	je     8143641 <_ZN8WongWork10CBossTower15handleStartGameEP6CPartyic17ENUM_DUNGEON_TYPE+0x14d>
 8143637:	bb 00 00 00 00       	mov    $0x0,%ebx
 814363c:	e9 48 03 00 00       	jmp    8143989 <_ZN8WongWork10CBossTower15handleStartGameEP6CPartyic17ENUM_DUNGEON_TYPE+0x495>
 8143641:	8b 45 08             	mov    0x8(%ebp),%eax
 8143644:	8b 90 f0 0a 00 00    	mov    0xaf0(%eax),%edx
 814364a:	8b 45 08             	mov    0x8(%ebp),%eax
 814364d:	89 54 24 08          	mov    %edx,0x8(%esp)
 8143651:	8b 55 10             	mov    0x10(%ebp),%edx
 8143654:	89 54 24 04          	mov    %edx,0x4(%esp)
 8143658:	89 04 24             	mov    %eax,(%esp)
 814365b:	e8 0e 5c 00 00       	call   814926e <_ZN8WongWork9CBossPlay12InitPlayUserEii>
 8143660:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8143667:	e8 40 22 00 00       	call   81458ac <_ZN11CSystemTime15getCurTickCountEv>
 814366c:	89 c2                	mov    %eax,%edx
 814366e:	8b 45 08             	mov    0x8(%ebp),%eax
 8143671:	89 90 f4 0a 00 00    	mov    %edx,0xaf4(%eax)
 8143677:	8b 45 08             	mov    0x8(%ebp),%eax
 814367a:	c7 80 f8 0a 00 00 00 	movl   $0x0,0xaf8(%eax)
 8143681:	00 00 00 
 8143684:	8d 9d c8 fe ff ff    	lea    -0x138(%ebp),%ebx
 814368a:	b8 00 00 00 00       	mov    $0x0,%eax
 814368f:	ba 40 00 00 00       	mov    $0x40,%edx
 8143694:	89 df                	mov    %ebx,%edi
 8143696:	89 d1                	mov    %edx,%ecx
 8143698:	f3 ab                	rep stos %eax,%es:(%edi)
 814369a:	8b 45 08             	mov    0x8(%ebp),%eax
 814369d:	8b 40 04             	mov    0x4(%eax),%eax
 81436a0:	8d 95 c8 fe ff ff    	lea    -0x138(%ebp),%edx
 81436a6:	89 54 24 04          	mov    %edx,0x4(%esp)
 81436aa:	89 04 24             	mov    %eax,(%esp)
 81436ad:	e8 2c 15 47 00       	call   85b4bde <_ZN6CParty15_getMemberNamesEPc>
 81436b2:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 81436b9:	e9 29 01 00 00       	jmp    81437e7 <_ZN8WongWork10CBossTower15handleStartGameEP6CPartyic17ENUM_DUNGEON_TYPE+0x2f3>
 81436be:	8b 45 08             	mov    0x8(%ebp),%eax
 81436c1:	8b 40 04             	mov    0x4(%eax),%eax
 81436c4:	8b 55 e0             	mov    -0x20(%ebp),%edx
 81436c7:	89 54 24 04          	mov    %edx,0x4(%esp)
 81436cb:	89 04 24             	mov    %eax,(%esp)
 81436ce:	e8 91 20 00 00       	call   8145764 <_ZN6CParty8get_userEi>
 81436d3:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81436d6:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 81436da:	74 1c                	je     81436f8 <_ZN8WongWork10CBossTower15handleStartGameEP6CPartyic17ENUM_DUNGEON_TYPE+0x204>
 81436dc:	8b 45 08             	mov    0x8(%ebp),%eax
 81436df:	8b 40 04             	mov    0x4(%eax),%eax
 81436e2:	8b 55 e0             	mov    -0x20(%ebp),%edx
 81436e5:	89 54 24 04          	mov    %edx,0x4(%esp)
 81436e9:	89 04 24             	mov    %eax,(%esp)
 81436ec:	e8 77 21 00 00       	call   8145868 <_ZN6CParty14checkValidUserEi>
 81436f1:	83 f0 01             	xor    $0x1,%eax
 81436f4:	84 c0                	test   %al,%al
 81436f6:	74 07                	je     81436ff <_ZN8WongWork10CBossTower15handleStartGameEP6CPartyic17ENUM_DUNGEON_TYPE+0x20b>
 81436f8:	b8 01 00 00 00       	mov    $0x1,%eax
 81436fd:	eb 05                	jmp    8143704 <_ZN8WongWork10CBossTower15handleStartGameEP6CPartyic17ENUM_DUNGEON_TYPE+0x210>
 81436ff:	b8 00 00 00 00       	mov    $0x0,%eax
 8143704:	84 c0                	test   %al,%al
 8143706:	0f 85 d6 00 00 00    	jne    81437e2 <_ZN8WongWork10CBossTower15handleStartGameEP6CPartyic17ENUM_DUNGEON_TYPE+0x2ee>
 814370c:	8b 45 08             	mov    0x8(%ebp),%eax
 814370f:	8b 80 e8 0a 00 00    	mov    0xae8(%eax),%eax
 8143715:	0f b6 d0             	movzbl %al,%edx
 8143718:	8b 45 08             	mov    0x8(%ebp),%eax
 814371b:	8b 80 e0 0a 00 00    	mov    0xae0(%eax),%eax
 8143721:	0f b6 c0             	movzbl %al,%eax
 8143724:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8143727:	81 c1 00 0b 00 00    	add    $0xb00,%ecx
 814372d:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8143731:	89 44 24 08          	mov    %eax,0x8(%esp)
 8143735:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8143738:	89 44 24 04          	mov    %eax,0x4(%esp)
 814373c:	89 0c 24             	mov    %ecx,(%esp)
 814373f:	e8 ac 2d 01 00       	call   81564f0 <_ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh>
 8143744:	8b 45 08             	mov    0x8(%ebp),%eax
 8143747:	8b 40 04             	mov    0x4(%eax),%eax
 814374a:	8b 80 d8 0c 00 00    	mov    0xcd8(%eax),%eax
 8143750:	83 f8 01             	cmp    $0x1,%eax
 8143753:	74 1e                	je     8143773 <_ZN8WongWork10CBossTower15handleStartGameEP6CPartyic17ENUM_DUNGEON_TYPE+0x27f>
 8143755:	e8 01 aa 4c 00       	call   860e15b <_Z29GetInstanceDungeonEntranceLogv>
 814375a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8143761:	00 
 8143762:	8b 55 10             	mov    0x10(%ebp),%edx
 8143765:	89 54 24 04          	mov    %edx,0x4(%esp)
 8143769:	89 04 24             	mov    %eax,(%esp)
 814376c:	e8 7d aa 4c 00       	call   860e1ee <_ZN19CDungeonEntranceLog24IncrementDungeonEntranceEib>
 8143771:	eb 1c                	jmp    814378f <_ZN8WongWork10CBossTower15handleStartGameEP6CPartyic17ENUM_DUNGEON_TYPE+0x29b>
 8143773:	e8 e3 a9 4c 00       	call   860e15b <_Z29GetInstanceDungeonEntranceLogv>
 8143778:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 814377f:	00 
 8143780:	8b 55 10             	mov    0x10(%ebp),%edx
 8143783:	89 54 24 04          	mov    %edx,0x4(%esp)
 8143787:	89 04 24             	mov    %eax,(%esp)
 814378a:	e8 5f aa 4c 00       	call   860e1ee <_ZN19CDungeonEntranceLog24IncrementDungeonEntranceEib>
 814378f:	8b 45 08             	mov    0x8(%ebp),%eax
 8143792:	8b 40 04             	mov    0x4(%eax),%eax
 8143795:	8b 80 d8 0c 00 00    	mov    0xcd8(%eax),%eax
 814379b:	89 c6                	mov    %eax,%esi
 814379d:	8b 45 08             	mov    0x8(%ebp),%eax
 81437a0:	8b 80 e8 0a 00 00    	mov    0xae8(%eax),%eax
 81437a6:	89 c3                	mov    %eax,%ebx
 81437a8:	8b 45 08             	mov    0x8(%ebp),%eax
 81437ab:	8b 80 f0 09 00 00    	mov    0x9f0(%eax),%eax
 81437b1:	89 04 24             	mov    %eax,(%esp)
 81437b4:	e8 ed 1d 00 00       	call   81455a6 <_ZNK8CDungeon14GetDungeonNameEv>
 81437b9:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 81437bc:	8d 8a 00 97 07 00    	lea    0x79700(%edx),%ecx
 81437c2:	89 74 24 10          	mov    %esi,0x10(%esp)
 81437c6:	8d 95 c8 fe ff ff    	lea    -0x138(%ebp),%edx
 81437cc:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81437d0:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81437d4:	89 44 24 04          	mov    %eax,0x4(%esp)
 81437d8:	89 0c 24             	mov    %ecx,(%esp)
 81437db:	e8 c2 11 54 00       	call   86849a2 <_ZN15cUserHistoryLog12EnterDungeonEPKciS1_i>
 81437e0:	eb 01                	jmp    81437e3 <_ZN8WongWork10CBossTower15handleStartGameEP6CPartyic17ENUM_DUNGEON_TYPE+0x2ef>
 81437e2:	90                   	nop
 81437e3:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 81437e7:	83 7d e0 03          	cmpl   $0x3,-0x20(%ebp)
 81437eb:	0f 9e c0             	setle  %al
 81437ee:	84 c0                	test   %al,%al
 81437f0:	0f 85 c8 fe ff ff    	jne    81436be <_ZN8WongWork10CBossTower15handleStartGameEP6CPartyic17ENUM_DUNGEON_TYPE+0x1ca>
 81437f6:	8b 45 08             	mov    0x8(%ebp),%eax
 81437f9:	8b 40 04             	mov    0x4(%eax),%eax
 81437fc:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8143803:	00 
 8143804:	89 04 24             	mov    %eax,(%esp)
 8143807:	e8 80 1f 00 00       	call   814578c <_ZN6CParty12SetEPLPStateEc>
 814380c:	8b 45 08             	mov    0x8(%ebp),%eax
 814380f:	8b 40 04             	mov    0x4(%eax),%eax
 8143812:	c7 44 24 04 2d 00 00 	movl   $0x2d,0x4(%esp)
 8143819:	00 
 814381a:	89 04 24             	mov    %eax,(%esp)
 814381d:	e8 54 76 45 00       	call   859ae76 <_ZN6CParty13gen_timer_keyE13TIMER_MESSAGE>
 8143822:	8b 45 08             	mov    0x8(%ebp),%eax
 8143825:	8b 40 04             	mov    0x4(%eax),%eax
 8143828:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 814382f:	ff 
 8143830:	89 04 24             	mov    %eax,(%esp)
 8143833:	e8 f0 1f 00 00       	call   8145828 <_ZN6CParty18SetSelectedEPLPCmdEc>
 8143838:	8d 45 c8             	lea    -0x38(%ebp),%eax
 814383b:	89 04 24             	mov    %eax,(%esp)
 814383e:	e8 09 a5 44 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8143843:	c7 44 24 08 e1 01 00 	movl   $0x1e1,0x8(%esp)
 814384a:	00 
 814384b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8143852:	00 
 8143853:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8143856:	89 04 24             	mov    %eax,(%esp)
 8143859:	e8 9e 80 f8 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 814385e:	8b 45 10             	mov    0x10(%ebp),%eax
 8143861:	89 44 24 04          	mov    %eax,0x4(%esp)
 8143865:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8143868:	89 04 24             	mov    %eax,(%esp)
 814386b:	e8 cc 80 f8 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8143870:	8b 45 08             	mov    0x8(%ebp),%eax
 8143873:	8b 80 e4 0a 00 00    	mov    0xae4(%eax),%eax
 8143879:	89 44 24 04          	mov    %eax,0x4(%esp)
 814387d:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8143880:	89 04 24             	mov    %eax,(%esp)
 8143883:	e8 1c 66 f9 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8143888:	8b 45 08             	mov    0x8(%ebp),%eax
 814388b:	8b 40 04             	mov    0x4(%eax),%eax
 814388e:	8b 80 d8 0c 00 00    	mov    0xcd8(%eax),%eax
 8143894:	89 44 24 04          	mov    %eax,0x4(%esp)
 8143898:	8d 45 c8             	lea    -0x38(%ebp),%eax
 814389b:	89 04 24             	mov    %eax,(%esp)
 814389e:	e8 7d 80 f8 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81438a3:	0f be 85 c4 fe ff ff 	movsbl -0x13c(%ebp),%eax
 81438aa:	89 44 24 04          	mov    %eax,0x4(%esp)
 81438ae:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81438b1:	89 04 24             	mov    %eax,(%esp)
 81438b4:	e8 67 80 f8 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81438b9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81438c0:	00 
 81438c1:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81438c4:	89 04 24             	mov    %eax,(%esp)
 81438c7:	e8 8c 80 f8 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81438cc:	8b 45 08             	mov    0x8(%ebp),%eax
 81438cf:	8b 40 04             	mov    0x4(%eax),%eax
 81438d2:	8d 55 c8             	lea    -0x38(%ebp),%edx
 81438d5:	89 54 24 04          	mov    %edx,0x4(%esp)
 81438d9:	89 04 24             	mov    %eax,(%esp)
 81438dc:	e8 6d 98 45 00       	call   859d14e <_ZN6CParty13send_to_partyER11PacketGuard>
 81438e1:	8b 45 08             	mov    0x8(%ebp),%eax
 81438e4:	89 04 24             	mov    %eax,(%esp)
 81438e7:	e8 26 95 00 00       	call   814ce12 <_ZN8WongWork10CBossStage17SendMapInfoPacketEv>
 81438ec:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 81438f3:	8b 45 08             	mov    0x8(%ebp),%eax
 81438f6:	8b 40 04             	mov    0x4(%eax),%eax
 81438f9:	89 04 24             	mov    %eax,(%esp)
 81438fc:	e8 69 68 45 00       	call   859a16a <_ZN6CParty16get_member_countEv>
 8143901:	83 f8 01             	cmp    $0x1,%eax
 8143904:	0f 94 c0             	sete   %al
 8143907:	84 c0                	test   %al,%al
 8143909:	74 09                	je     8143914 <_ZN8WongWork10CBossTower15handleStartGameEP6CPartyic17ENUM_DUNGEON_TYPE+0x420>
 814390b:	c7 45 dc 5a 00 00 00 	movl   $0x5a,-0x24(%ebp)
 8143912:	eb 07                	jmp    814391b <_ZN8WongWork10CBossTower15handleStartGameEP6CPartyic17ENUM_DUNGEON_TYPE+0x427>
 8143914:	c7 45 dc 78 00 00 00 	movl   $0x78,-0x24(%ebp)
 814391b:	8b 45 08             	mov    0x8(%ebp),%eax
 814391e:	8b 98 f0 0a 00 00    	mov    0xaf0(%eax),%ebx
 8143924:	e8 53 2b fb ff       	call   80f647c <_Z12G_TimerQueuev>
 8143929:	c7 44 24 18 a5 00 00 	movl   $0xa5,0x18(%esp)
 8143930:	00 
 8143931:	c7 44 24 14 a5 00 00 	movl   $0xa5,0x14(%esp)
 8143938:	00 
 8143939:	8b 55 dc             	mov    -0x24(%ebp),%edx
 814393c:	89 54 24 10          	mov    %edx,0x10(%esp)
 8143940:	c7 44 24 0c a5 00 00 	movl   $0xa5,0xc(%esp)
 8143947:	00 
 8143948:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 814394c:	c7 44 24 04 07 00 00 	movl   $0x7,0x4(%esp)
 8143953:	00 
 8143954:	89 04 24             	mov    %eax,(%esp)
 8143957:	e8 ba d4 4e 00       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 814395c:	bb 01 00 00 00       	mov    $0x1,%ebx
 8143961:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8143964:	89 04 24             	mov    %eax,(%esp)
 8143967:	e8 14 a5 44 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 814396c:	eb 1b                	jmp    8143989 <_ZN8WongWork10CBossTower15handleStartGameEP6CPartyic17ENUM_DUNGEON_TYPE+0x495>
 814396e:	89 d3                	mov    %edx,%ebx
 8143970:	89 c6                	mov    %eax,%esi
 8143972:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8143975:	89 04 24             	mov    %eax,(%esp)
 8143978:	e8 03 a5 44 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 814397d:	89 f0                	mov    %esi,%eax
 814397f:	89 da                	mov    %ebx,%edx
 8143981:	89 04 24             	mov    %eax,(%esp)
 8143984:	e8 c7 fd 99 00       	call   8ae3750 <_Unwind_Resume>
 8143989:	89 d8                	mov    %ebx,%eax
 814398b:	81 c4 5c 01 00 00    	add    $0x15c,%esp
 8143991:	5b                   	pop    %ebx
 8143992:	5e                   	pop    %esi
 8143993:	5f                   	pop    %edi
 8143994:	5d                   	pop    %ebp
 8143995:	c3                   	ret

```

```c
// WongWork::CBossTower::handleStartGame @ 0x81434f4

/* WongWork::CBossTower::handleStartGame(CParty*, int, char, ENUM_DUNGEON_TYPE) */

undefined4 __thiscall
WongWork::CBossTower::handleStartGame
          (CBossTower *this,CParty *param_1,int param_2,CUser param_3,int param_5)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  CDungeonEntranceLog *pCVar4;
  char *pcVar5;
  TimerQueue *pTVar6;
  int iVar7;
  undefined4 uVar8;
  byte bVar9;
  CUser local_140;
  char local_13c [256];
  PacketGuard local_3c [15];
  uchar local_2d;
  CUser *local_2c;
  undefined4 local_28;
  int local_24;
  CUser *local_20;
  
  bVar9 = 0;
  local_140 = param_3;
  if (param_5 == 1) {
    uVar8 = 0;
  }
  else if (*(int *)(param_1 + 0xcd8) == 1) {
    uVar8 = 0;
  }
  else {
    *(int *)(this + 0xaec) = param_5;
    *(int *)(this + 0xae8) = (int)(char)param_3;
    CBossPlay::reset((CBossPlay *)this);
    CBossStage::reset((CBossStage *)this);
    CBossDungeonEntranceLog::reset((CBossDungeonEntranceLog *)(this + 0xb00));
    *(undefined4 *)(this + 0xae0) = 1;
    cVar3 = InitBossTower((CParty *)this,(int)param_1);
    if (cVar3 == '\x01') {
      local_2d = '\0';
      cVar3 = checkStartGameCondition(this,&local_2d,true);
      if (cVar3 == '\x01') {
        local_2c = (CUser *)CParty::getManager(param_1);
        cVar3 = CUser::isGMUser(local_2c);
        if ((cVar3 != '\0') && (local_2c[0x796cc] != (CUser)0x0)) {
          local_140 = local_2c[0x796cc];
          local_2c[0x796cc] = (CUser)0x0;
        }
        cVar3 = CBossStage::RandomConsistMap((CBossStage *)this,local_2c);
        if (cVar3 == '\x01') {
          CBossPlay::InitPlayUser((CBossPlay *)this,param_2,*(int *)(this + 0xaf0));
          uVar8 = CSystemTime::getCurTickCount((CSystemTime *)GlobalData::s_systemTime_);
          *(undefined4 *)(this + 0xaf4) = uVar8;
          *(undefined4 *)(this + 0xaf8) = 0;
          pcVar5 = local_13c;
          for (iVar7 = 0x40; iVar7 != 0; iVar7 = iVar7 + -1) {
            pcVar5[0] = '\0';
            pcVar5[1] = '\0';
            pcVar5[2] = '\0';
            pcVar5[3] = '\0';
            pcVar5 = pcVar5 + ((uint)bVar9 * -2 + 1) * 4;
          }
          CParty::_getMemberNames(*(CParty **)(this + 4),local_13c);
          for (local_24 = 0; local_24 < 4; local_24 = local_24 + 1) {
            local_20 = (CUser *)CParty::get_user(*(CParty **)(this + 4),local_24);
            if (local_20 == (CUser *)0x0) {
LAB_081436f8:
              bVar2 = true;
            }
            else {
              cVar3 = CParty::checkValidUser(*(CParty **)(this + 4),local_24);
              if (cVar3 != '\x01') goto LAB_081436f8;
              bVar2 = false;
            }
            if (!bVar2) {
              CBossDungeonEntranceLog::IncrementBossStageStart
                        ((CBossDungeonEntranceLog *)(this + 0xb00),local_20,
                         (uchar)*(undefined4 *)(this + 0xae0),(uchar)*(undefined4 *)(this + 0xae8));
              if (*(int *)(*(int *)(this + 4) + 0xcd8) == 1) {
                pCVar4 = (CDungeonEntranceLog *)GetInstanceDungeonEntranceLog();
                CDungeonEntranceLog::IncrementDungeonEntrance(pCVar4,param_2,true);
              }
              else {
                pCVar4 = (CDungeonEntranceLog *)GetInstanceDungeonEntranceLog();
                CDungeonEntranceLog::IncrementDungeonEntrance(pCVar4,param_2,false);
              }
              iVar7 = *(int *)(*(int *)(this + 4) + 0xcd8);
              iVar1 = *(int *)(this + 0xae8);
              pcVar5 = (char *)CDungeon::GetDungeonName(*(CDungeon **)(this + 0x9f0));
              cUserHistoryLog::EnterDungeon
                        ((cUserHistoryLog *)(local_20 + 0x79700),pcVar5,iVar1,local_13c,iVar7);
            }
          }
          CParty::SetEPLPState(*(CParty **)(this + 4),'\x01');
          CParty::gen_timer_key(*(CParty **)(this + 4),0x2d);
          CParty::SetSelectedEPLPCmd(*(CParty **)(this + 4),-1);
          PacketGuard::PacketGuard(local_3c);
                    /* try { // try from 08143859 to 0814395b has its CatchHandler @ 0814396e */
          InterfacePacketBuf::put_header((InterfacePacketBuf *)local_3c,0,0x1e1);
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_3c,param_2);
          InterfacePacketBuf::put_short((InterfacePacketBuf *)local_3c,*(int *)(this + 0xae4));
          InterfacePacketBuf::put_byte
                    ((InterfacePacketBuf *)local_3c,*(int *)(*(int *)(this + 4) + 0xcd8));
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,(int)(char)local_140);
          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_3c,true);
          CParty::send_to_party(*(CParty **)(this + 4),local_3c);
          CBossStage::SendMapInfoPacket((CBossStage *)this);
          local_28 = 0;
          iVar7 = CParty::get_member_count(*(CParty **)(this + 4));
          if (iVar7 == 1) {
            local_28 = 0x5a;
          }
          else {
            local_28 = 0x78;
          }
          uVar8 = *(undefined4 *)(this + 0xaf0);
          pTVar6 = (TimerQueue *)G_TimerQueue();
          TimerQueue::InsertTimer(pTVar6,7,uVar8,0xa5,local_28,0xa5,0xa5);
          uVar8 = 1;
          PacketGuard::~PacketGuard(local_3c);
        }
        else {
          uVar8 = 0;
        }
      }
      else {
        uVar8 = 0;
      }
    }
    else {
      uVar8 = 0;
    }
  }
  return uVar8;
}

```

---

## handleUseItem

```asm
// === 081454b8 WongWork::CBossTower::handleUseItem  [0x081454b8-0x814553c] ===
 81454b8:	55                   	push   %ebp
 81454b9:	89 e5                	mov    %esp,%ebp
 81454bb:	83 ec 38             	sub    $0x38,%esp
 81454be:	8b 45 14             	mov    0x14(%ebp),%eax
 81454c1:	88 45 e4             	mov    %al,-0x1c(%ebp)
 81454c4:	8b 45 08             	mov    0x8(%ebp),%eax
 81454c7:	8b 40 04             	mov    0x4(%eax),%eax
 81454ca:	8b 55 0c             	mov    0xc(%ebp),%edx
 81454cd:	89 54 24 04          	mov    %edx,0x4(%esp)
 81454d1:	89 04 24             	mov    %eax,(%esp)
 81454d4:	e8 a3 57 45 00       	call   859ac7c <_ZNK6CParty15GetMemberSlotNoEPK5CUser>
 81454d9:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81454dc:	83 7d f4 ff          	cmpl   $0xffffffff,-0xc(%ebp)
 81454e0:	75 07                	jne    81454e9 <_ZN8WongWork10CBossTower13handleUseItemEP5CUsermh+0x31>
 81454e2:	b8 00 00 00 00       	mov    $0x0,%eax
 81454e7:	eb 52                	jmp    814553b <_ZN8WongWork10CBossTower13handleUseItemEP5CUsermh+0x83>
 81454e9:	81 7d 10 dd 0b 00 00 	cmpl   $0xbdd,0x10(%ebp)
 81454f0:	75 1f                	jne    8145511 <_ZN8WongWork10CBossTower13handleUseItemEP5CUsermh+0x59>
 81454f2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81454f5:	8b 55 08             	mov    0x8(%ebp),%edx
 81454f8:	8d 88 70 02 00 00    	lea    0x270(%eax),%ecx
 81454fe:	8b 54 8a 08          	mov    0x8(%edx,%ecx,4),%edx
 8145502:	8d 4a 01             	lea    0x1(%edx),%ecx
 8145505:	8b 55 08             	mov    0x8(%ebp),%edx
 8145508:	05 70 02 00 00       	add    $0x270,%eax
 814550d:	89 4c 82 08          	mov    %ecx,0x8(%edx,%eax,4)
 8145511:	80 7d e4 02          	cmpb   $0x2,-0x1c(%ebp)
 8145515:	75 1f                	jne    8145536 <_ZN8WongWork10CBossTower13handleUseItemEP5CUsermh+0x7e>
 8145517:	8b 45 f4             	mov    -0xc(%ebp),%eax
 814551a:	8b 55 08             	mov    0x8(%ebp),%edx
 814551d:	8d 88 74 02 00 00    	lea    0x274(%eax),%ecx
 8145523:	8b 54 8a 08          	mov    0x8(%edx,%ecx,4),%edx
 8145527:	8d 4a 01             	lea    0x1(%edx),%ecx
 814552a:	8b 55 08             	mov    0x8(%ebp),%edx
 814552d:	05 74 02 00 00       	add    $0x274,%eax
 8145532:	89 4c 82 08          	mov    %ecx,0x8(%edx,%eax,4)
 8145536:	b8 01 00 00 00       	mov    $0x1,%eax
 814553b:	c9                   	leave
 814553c:	c3                   	ret

```

```c
// WongWork::CBossTower::handleUseItem @ 0x81454b8

/* WongWork::CBossTower::handleUseItem(CUser*, unsigned long, unsigned char) */

undefined4 __thiscall
WongWork::CBossTower::handleUseItem(CBossTower *this,CUser *param_1,ulong param_2,uchar param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CParty::GetMemberSlotNo(*(CParty **)(this + 4),param_1);
  if (iVar1 == -1) {
    uVar2 = 0;
  }
  else {
    if (param_2 == 0xbdd) {
      *(int *)(this + (iVar1 + 0x270) * 4 + 8) = *(int *)(this + (iVar1 + 0x270) * 4 + 8) + 1;
    }
    if (param_3 == '\x02') {
      *(int *)(this + (iVar1 + 0x274) * 4 + 8) = *(int *)(this + (iVar1 + 0x274) * 4 + 8) + 1;
    }
    uVar2 = 1;
  }
  return uVar2;
}

```

---

## onChargeRequireItem

```asm
// === 0814530c WongWork::CBossTower::onChargeRequireItem  [0x0814530c-0x81454b7] ===
 814530c:	55                   	push   %ebp
 814530d:	89 e5                	mov    %esp,%ebp
 814530f:	53                   	push   %ebx
 8145310:	81 ec a4 00 00 00    	sub    $0xa4,%esp
 8145316:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 814531a:	75 0a                	jne    8145326 <_ZN8WongWork10CBossTower19onChargeRequireItemEP5CUser+0x1a>
 814531c:	b8 00 00 00 00       	mov    $0x0,%eax
 8145321:	e9 88 01 00 00       	jmp    81454ae <_ZN8WongWork10CBossTower19onChargeRequireItemEP5CUser+0x1a2>
 8145326:	8b 45 08             	mov    0x8(%ebp),%eax
 8145329:	8b 40 04             	mov    0x4(%eax),%eax
 814532c:	8b 80 d8 0c 00 00    	mov    0xcd8(%eax),%eax
 8145332:	83 f8 01             	cmp    $0x1,%eax
 8145335:	75 0a                	jne    8145341 <_ZN8WongWork10CBossTower19onChargeRequireItemEP5CUser+0x35>
 8145337:	b8 01 00 00 00       	mov    $0x1,%eax
 814533c:	e9 6d 01 00 00       	jmp    81454ae <_ZN8WongWork10CBossTower19onChargeRequireItemEP5CUser+0x1a2>
 8145341:	8b 45 08             	mov    0x8(%ebp),%eax
 8145344:	8b 80 f0 09 00 00    	mov    0x9f0(%eax),%eax
 814534a:	0f b6 80 fc 07 00 00 	movzbl 0x7fc(%eax),%eax
 8145351:	84 c0                	test   %al,%al
 8145353:	0f 84 50 01 00 00    	je     81454a9 <_ZN8WongWork10CBossTower19onChargeRequireItemEP5CUser+0x19d>
 8145359:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8145360:	8d 45 b3             	lea    -0x4d(%ebp),%eax
 8145363:	89 04 24             	mov    %eax,(%esp)
 8145366:	e8 e9 64 f8 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 814536b:	8b 45 08             	mov    0x8(%ebp),%eax
 814536e:	8b 80 f0 09 00 00    	mov    0x9f0(%eax),%eax
 8145374:	8b 98 f4 07 00 00    	mov    0x7f4(%eax),%ebx
 814537a:	e8 1c 6e f8 ff       	call   80cc19b <_Z14G_CDataManagerv>
 814537f:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8145383:	89 04 24             	mov    %eax,(%esp)
 8145386:	e8 a7 a6 21 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 814538b:	89 45 f0             	mov    %eax,-0x10(%ebp)
 814538e:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8145392:	75 0a                	jne    814539e <_ZN8WongWork10CBossTower19onChargeRequireItemEP5CUser+0x92>
 8145394:	b8 00 00 00 00       	mov    $0x0,%eax
 8145399:	e9 10 01 00 00       	jmp    81454ae <_ZN8WongWork10CBossTower19onChargeRequireItemEP5CUser+0x1a2>
 814539e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81453a1:	8b 00                	mov    (%eax),%eax
 81453a3:	83 c0 08             	add    $0x8,%eax
 81453a6:	8b 10                	mov    (%eax),%edx
 81453a8:	8d 45 b3             	lea    -0x4d(%ebp),%eax
 81453ab:	89 44 24 04          	mov    %eax,0x4(%esp)
 81453af:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81453b2:	89 04 24             	mov    %eax,(%esp)
 81453b5:	ff d2                	call   *%edx
 81453b7:	8b 45 08             	mov    0x8(%ebp),%eax
 81453ba:	8b 80 f0 09 00 00    	mov    0x9f0(%eax),%eax
 81453c0:	8b 80 f8 07 00 00    	mov    0x7f8(%eax),%eax
 81453c6:	89 45 ba             	mov    %eax,-0x46(%ebp)
 81453c9:	8b 45 08             	mov    0x8(%ebp),%eax
 81453cc:	8b 80 f0 09 00 00    	mov    0x9f0(%eax),%eax
 81453d2:	8b 80 f4 07 00 00    	mov    0x7f4(%eax),%eax
 81453d8:	89 45 b5             	mov    %eax,-0x4b(%ebp)
 81453db:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
 81453e2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81453e5:	89 04 24             	mov    %eax,(%esp)
 81453e8:	e8 a1 4e f9 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 81453ed:	c7 44 24 4c 01 00 00 	movl   $0x1,0x4c(%esp)
 81453f4:	00 
 81453f5:	c7 44 24 48 01 00 00 	movl   $0x1,0x48(%esp)
 81453fc:	00 
 81453fd:	c7 44 24 44 04 00 00 	movl   $0x4,0x44(%esp)
 8145404:	00 
 8145405:	8b 55 b3             	mov    -0x4d(%ebp),%edx
 8145408:	89 54 24 04          	mov    %edx,0x4(%esp)
 814540c:	8b 55 b7             	mov    -0x49(%ebp),%edx
 814540f:	89 54 24 08          	mov    %edx,0x8(%esp)
 8145413:	8b 55 bb             	mov    -0x45(%ebp),%edx
 8145416:	89 54 24 0c          	mov    %edx,0xc(%esp)
 814541a:	8b 55 bf             	mov    -0x41(%ebp),%edx
 814541d:	89 54 24 10          	mov    %edx,0x10(%esp)
 8145421:	8b 55 c3             	mov    -0x3d(%ebp),%edx
 8145424:	89 54 24 14          	mov    %edx,0x14(%esp)
 8145428:	8b 55 c7             	mov    -0x39(%ebp),%edx
 814542b:	89 54 24 18          	mov    %edx,0x18(%esp)
 814542f:	8b 55 cb             	mov    -0x35(%ebp),%edx
 8145432:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 8145436:	8b 55 cf             	mov    -0x31(%ebp),%edx
 8145439:	89 54 24 20          	mov    %edx,0x20(%esp)
 814543d:	8b 55 d3             	mov    -0x2d(%ebp),%edx
 8145440:	89 54 24 24          	mov    %edx,0x24(%esp)
 8145444:	8b 55 d7             	mov    -0x29(%ebp),%edx
 8145447:	89 54 24 28          	mov    %edx,0x28(%esp)
 814544b:	8b 55 db             	mov    -0x25(%ebp),%edx
 814544e:	89 54 24 2c          	mov    %edx,0x2c(%esp)
 8145452:	8b 55 df             	mov    -0x21(%ebp),%edx
 8145455:	89 54 24 30          	mov    %edx,0x30(%esp)
 8145459:	8b 55 e3             	mov    -0x1d(%ebp),%edx
 814545c:	89 54 24 34          	mov    %edx,0x34(%esp)
 8145460:	8b 55 e7             	mov    -0x19(%ebp),%edx
 8145463:	89 54 24 38          	mov    %edx,0x38(%esp)
 8145467:	8b 55 eb             	mov    -0x15(%ebp),%edx
 814546a:	89 54 24 3c          	mov    %edx,0x3c(%esp)
 814546e:	0f b6 55 ef          	movzbl -0x11(%ebp),%edx
 8145472:	88 54 24 40          	mov    %dl,0x40(%esp)
 8145476:	89 04 24             	mov    %eax,(%esp)
 8145479:	e8 08 d9 3b 00       	call   8502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>
 814547e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8145481:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8145485:	78 22                	js     81454a9 <_ZN8WongWork10CBossTower19onChargeRequireItemEP5CUser+0x19d>
 8145487:	8b 45 f4             	mov    -0xc(%ebp),%eax
 814548a:	89 44 24 0c          	mov    %eax,0xc(%esp)
 814548e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8145495:	00 
 8145496:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 814549d:	00 
 814549e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81454a1:	89 04 24             	mov    %eax,(%esp)
 81454a4:	e8 b1 71 53 00       	call   867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>
 81454a9:	b8 01 00 00 00       	mov    $0x1,%eax
 81454ae:	81 c4 a4 00 00 00    	add    $0xa4,%esp
 81454b4:	5b                   	pop    %ebx
 81454b5:	5d                   	pop    %ebp
 81454b6:	c3                   	ret
 81454b7:	90                   	nop

```

```c
// WongWork::CBossTower::onChargeRequireItem @ 0x814530c

/* WongWork::CBossTower::onChargeRequireItem(CUser*) */

undefined4 __thiscall WongWork::CBossTower::onChargeRequireItem(CBossTower *this,CUser *param_1)

{
  int iVar1;
  undefined4 uVar2;
  CDataManager *this_00;
  undefined2 local_51;
  undefined2 uStack_4f;
  undefined2 uStack_4d;
  undefined1 uStack_4b;
  undefined4 uStack_4a;
  undefined1 uStack_46;
  undefined4 local_45;
  undefined4 local_41;
  undefined4 local_3d;
  undefined4 local_39;
  undefined4 local_35;
  undefined4 local_31;
  undefined4 local_2d;
  undefined4 local_29;
  undefined4 local_25;
  undefined4 local_21;
  undefined4 local_1d;
  undefined4 local_19;
  undefined1 local_15;
  int *local_14;
  int local_10;
  
  if (param_1 == (CUser *)0x0) {
    uVar2 = 0;
  }
  else if (*(int *)(*(int *)(this + 4) + 0xcd8) == 1) {
    uVar2 = 1;
  }
  else {
    if (*(char *)(*(int *)(this + 0x9f0) + 0x7fc) != '\0') {
      local_14 = (int *)0x0;
      Inven_Item::Inven_Item((Inven_Item *)&local_51);
      iVar1 = *(int *)(*(int *)(this + 0x9f0) + 0x7f4);
      this_00 = (CDataManager *)G_CDataManager();
      local_14 = (int *)CDataManager::find_item(this_00,iVar1);
      if (local_14 == (int *)0x0) {
        return 0;
      }
      (**(code **)(*local_14 + 8))(local_14,&local_51);
      uStack_4a = *(undefined4 *)(*(int *)(this + 0x9f0) + 0x7f8);
      uStack_4f = (undefined2)*(undefined4 *)(*(int *)(this + 0x9f0) + 0x7f4);
      uStack_4d = (undefined2)((uint)*(undefined4 *)(*(int *)(this + 0x9f0) + 0x7f4) >> 0x10);
      local_10 = 0xffffffff;
      uVar2 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      local_10 = CInventory::insertItemIntoInventory
                           (uVar2,CONCAT22(uStack_4f,local_51),
                            CONCAT13((undefined1)uStack_4a,CONCAT12(uStack_4b,uStack_4d)),
                            CONCAT13(uStack_46,uStack_4a._1_3_),local_45,local_41,local_3d,local_39,
                            local_35,local_31,local_2d,local_29,local_25,local_21,local_1d,local_19,
                            local_15,4,1,1);
      if (-1 < local_10) {
        CUser::SendUpdateItemList(param_1,1,0,local_10);
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}

```

---

## onClearBossTower

```asm
// === 08144508 WongWork::CBossTower::onClearBossTower  [0x08144508-0x81446a1] ===
 8144508:	55                   	push   %ebp
 8144509:	89 e5                	mov    %esp,%ebp
 814450b:	56                   	push   %esi
 814450c:	53                   	push   %ebx
 814450d:	83 ec 30             	sub    $0x30,%esp
 8144510:	8b 45 08             	mov    0x8(%ebp),%eax
 8144513:	8b 40 04             	mov    0x4(%eax),%eax
 8144516:	8b 80 d8 0c 00 00    	mov    0xcd8(%eax),%eax
 814451c:	83 f8 01             	cmp    $0x1,%eax
 814451f:	75 7b                	jne    814459c <_ZN8WongWork10CBossTower16onClearBossTowerEv+0x94>
 8144521:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8144524:	89 04 24             	mov    %eax,(%esp)
 8144527:	e8 20 98 44 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 814452c:	c7 44 24 08 fe 00 00 	movl   $0xfe,0x8(%esp)
 8144533:	00 
 8144534:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 814453b:	00 
 814453c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 814453f:	89 04 24             	mov    %eax,(%esp)
 8144542:	e8 b5 73 f8 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8144547:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 814454e:	00 
 814454f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8144552:	89 04 24             	mov    %eax,(%esp)
 8144555:	e8 fe 73 f8 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 814455a:	8b 45 08             	mov    0x8(%ebp),%eax
 814455d:	8b 40 04             	mov    0x4(%eax),%eax
 8144560:	8d 55 ec             	lea    -0x14(%ebp),%edx
 8144563:	89 54 24 04          	mov    %edx,0x4(%esp)
 8144567:	89 04 24             	mov    %eax,(%esp)
 814456a:	e8 df 8b 45 00       	call   859d14e <_ZN6CParty13send_to_partyER11PacketGuard>
 814456f:	eb 1b                	jmp    814458c <_ZN8WongWork10CBossTower16onClearBossTowerEv+0x84>
 8144571:	89 d3                	mov    %edx,%ebx
 8144573:	89 c6                	mov    %eax,%esi
 8144575:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8144578:	89 04 24             	mov    %eax,(%esp)
 814457b:	e8 00 99 44 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8144580:	89 f0                	mov    %esi,%eax
 8144582:	89 da                	mov    %ebx,%edx
 8144584:	89 04 24             	mov    %eax,(%esp)
 8144587:	e8 c4 f1 99 00       	call   8ae3750 <_Unwind_Resume>
 814458c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 814458f:	89 04 24             	mov    %eax,(%esp)
 8144592:	e8 e9 98 44 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8144597:	e9 89 00 00 00       	jmp    8144625 <_ZN8WongWork10CBossTower16onClearBossTowerEv+0x11d>
 814459c:	8b 45 08             	mov    0x8(%ebp),%eax
 814459f:	89 04 24             	mov    %eax,(%esp)
 81445a2:	e8 ad 07 00 00       	call   8144d54 <_ZN8WongWork10CBossTower17generateRewardExpEv>
 81445a7:	83 f0 01             	xor    $0x1,%eax
 81445aa:	84 c0                	test   %al,%al
 81445ac:	74 0a                	je     81445b8 <_ZN8WongWork10CBossTower16onClearBossTowerEv+0xb0>
 81445ae:	b8 00 00 00 00       	mov    $0x0,%eax
 81445b3:	e9 e3 00 00 00       	jmp    814469b <_ZN8WongWork10CBossTower16onClearBossTowerEv+0x193>
 81445b8:	8b 45 08             	mov    0x8(%ebp),%eax
 81445bb:	89 04 24             	mov    %eax,(%esp)
 81445be:	e8 73 08 00 00       	call   8144e36 <_ZN8WongWork10CBossTower18generateRewardItemEv>
 81445c3:	83 f0 01             	xor    $0x1,%eax
 81445c6:	84 c0                	test   %al,%al
 81445c8:	74 0a                	je     81445d4 <_ZN8WongWork10CBossTower16onClearBossTowerEv+0xcc>
 81445ca:	b8 00 00 00 00       	mov    $0x0,%eax
 81445cf:	e9 c7 00 00 00       	jmp    814469b <_ZN8WongWork10CBossTower16onClearBossTowerEv+0x193>
 81445d4:	8b 45 08             	mov    0x8(%ebp),%eax
 81445d7:	89 04 24             	mov    %eax,(%esp)
 81445da:	e8 4b fd ff ff       	call   814432a <_ZN8WongWork10CBossTower16SendRewardPacketEv>
 81445df:	83 f0 01             	xor    $0x1,%eax
 81445e2:	84 c0                	test   %al,%al
 81445e4:	74 0a                	je     81445f0 <_ZN8WongWork10CBossTower16onClearBossTowerEv+0xe8>
 81445e6:	b8 00 00 00 00       	mov    $0x0,%eax
 81445eb:	e9 ab 00 00 00       	jmp    814469b <_ZN8WongWork10CBossTower16onClearBossTowerEv+0x193>
 81445f0:	8b 45 08             	mov    0x8(%ebp),%eax
 81445f3:	89 04 24             	mov    %eax,(%esp)
 81445f6:	e8 a7 00 00 00       	call   81446a2 <_ZN8WongWork10CBossTower15InsertRewardExpEv>
 81445fb:	83 f0 01             	xor    $0x1,%eax
 81445fe:	84 c0                	test   %al,%al
 8144600:	74 0a                	je     814460c <_ZN8WongWork10CBossTower16onClearBossTowerEv+0x104>
 8144602:	b8 00 00 00 00       	mov    $0x0,%eax
 8144607:	e9 8f 00 00 00       	jmp    814469b <_ZN8WongWork10CBossTower16onClearBossTowerEv+0x193>
 814460c:	8b 45 08             	mov    0x8(%ebp),%eax
 814460f:	89 04 24             	mov    %eax,(%esp)
 8144612:	e8 89 01 00 00       	call   81447a0 <_ZN8WongWork10CBossTower17InsertRewardItemsEv>
 8144617:	83 f0 01             	xor    $0x1,%eax
 814461a:	84 c0                	test   %al,%al
 814461c:	74 07                	je     8144625 <_ZN8WongWork10CBossTower16onClearBossTowerEv+0x11d>
 814461e:	b8 00 00 00 00       	mov    $0x0,%eax
 8144623:	eb 76                	jmp    814469b <_ZN8WongWork10CBossTower16onClearBossTowerEv+0x193>
 8144625:	8b 45 08             	mov    0x8(%ebp),%eax
 8144628:	89 04 24             	mov    %eax,(%esp)
 814462b:	e8 a4 fb ff ff       	call   81441d4 <_ZN8WongWork10CBossTower14SendELPLPacketEv>
 8144630:	83 f0 01             	xor    $0x1,%eax
 8144633:	84 c0                	test   %al,%al
 8144635:	74 07                	je     814463e <_ZN8WongWork10CBossTower16onClearBossTowerEv+0x136>
 8144637:	b8 00 00 00 00       	mov    $0x0,%eax
 814463c:	eb 5d                	jmp    814469b <_ZN8WongWork10CBossTower16onClearBossTowerEv+0x193>
 814463e:	8b 45 08             	mov    0x8(%ebp),%eax
 8144641:	8b 40 04             	mov    0x4(%eax),%eax
 8144644:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 814464b:	00 
 814464c:	89 04 24             	mov    %eax,(%esp)
 814464f:	e8 38 11 00 00       	call   814578c <_ZN6CParty12SetEPLPStateEc>
 8144654:	8b 45 08             	mov    0x8(%ebp),%eax
 8144657:	8b 98 f0 0a 00 00    	mov    0xaf0(%eax),%ebx
 814465d:	e8 1a 1e fb ff       	call   80f647c <_Z12G_TimerQueuev>
 8144662:	c7 44 24 18 a4 00 00 	movl   $0xa4,0x18(%esp)
 8144669:	00 
 814466a:	c7 44 24 14 a4 00 00 	movl   $0xa4,0x14(%esp)
 8144671:	00 
 8144672:	c7 44 24 10 14 00 00 	movl   $0x14,0x10(%esp)
 8144679:	00 
 814467a:	c7 44 24 0c a4 00 00 	movl   $0xa4,0xc(%esp)
 8144681:	00 
 8144682:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8144686:	c7 44 24 04 07 00 00 	movl   $0x7,0x4(%esp)
 814468d:	00 
 814468e:	89 04 24             	mov    %eax,(%esp)
 8144691:	e8 80 c7 4e 00       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 8144696:	b8 01 00 00 00       	mov    $0x1,%eax
 814469b:	83 c4 30             	add    $0x30,%esp
 814469e:	5b                   	pop    %ebx
 814469f:	5e                   	pop    %esi
 81446a0:	5d                   	pop    %ebp
 81446a1:	c3                   	ret

```

```c
// WongWork::CBossTower::onClearBossTower @ 0x8144508

/* WongWork::CBossTower::onClearBossTower() */

bool __thiscall WongWork::CBossTower::onClearBossTower(CBossTower *this)

{
  undefined4 uVar1;
  char cVar2;
  TimerQueue *pTVar3;
  PacketGuard local_18 [12];
  
  if (*(int *)(*(int *)(this + 4) + 0xcd8) == 1) {
    PacketGuard::PacketGuard(local_18);
                    /* try { // try from 08144542 to 0814456e has its CatchHandler @ 08144571 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0xfe);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
    CParty::send_to_party(*(CParty **)(this + 4),local_18);
    PacketGuard::~PacketGuard(local_18);
  }
  else {
    cVar2 = generateRewardExp(this);
    if (cVar2 != '\x01') {
      return false;
    }
    cVar2 = generateRewardItem(this);
    if (cVar2 != '\x01') {
      return false;
    }
    cVar2 = SendRewardPacket(this);
    if (cVar2 != '\x01') {
      return false;
    }
    cVar2 = InsertRewardExp(this);
    if (cVar2 != '\x01') {
      return false;
    }
    cVar2 = InsertRewardItems(this);
    if (cVar2 != '\x01') {
      return false;
    }
  }
  cVar2 = SendELPLPacket(this);
  if (cVar2 == '\x01') {
    CParty::SetEPLPState(*(CParty **)(this + 4),'\x02');
    uVar1 = *(undefined4 *)(this + 0xaf0);
    pTVar3 = (TimerQueue *)G_TimerQueue();
    TimerQueue::InsertTimer(pTVar3,7,uVar1,0xa4,0x14,0xa4,0xa4);
  }
  return cVar2 == '\x01';
}

```

---

## onFinishStage

```asm
// === 081440b2 WongWork::CBossTower::onFinishStage  [0x081440b2-0x81441d3] ===
 81440b2:	55                   	push   %ebp
 81440b3:	89 e5                	mov    %esp,%ebp
 81440b5:	53                   	push   %ebx
 81440b6:	83 ec 34             	sub    $0x34,%esp
 81440b9:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 81440c0:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 81440c7:	e8 e0 17 00 00       	call   81458ac <_ZN11CSystemTime15getCurTickCountEv>
 81440cc:	89 c2                	mov    %eax,%edx
 81440ce:	8b 45 08             	mov    0x8(%ebp),%eax
 81440d1:	89 90 ec 09 00 00    	mov    %edx,0x9ec(%eax)
 81440d7:	8b 45 08             	mov    0x8(%ebp),%eax
 81440da:	8b 90 ec 09 00 00    	mov    0x9ec(%eax),%edx
 81440e0:	8b 45 08             	mov    0x8(%ebp),%eax
 81440e3:	8b 80 e8 09 00 00    	mov    0x9e8(%eax),%eax
 81440e9:	89 d1                	mov    %edx,%ecx
 81440eb:	29 c1                	sub    %eax,%ecx
 81440ed:	ba d3 4d 62 10       	mov    $0x10624dd3,%edx
 81440f2:	89 c8                	mov    %ecx,%eax
 81440f4:	f7 ea                	imul   %edx
 81440f6:	c1 fa 06             	sar    $0x6,%edx
 81440f9:	89 c8                	mov    %ecx,%eax
 81440fb:	c1 f8 1f             	sar    $0x1f,%eax
 81440fe:	89 d1                	mov    %edx,%ecx
 8144100:	29 c1                	sub    %eax,%ecx
 8144102:	89 c8                	mov    %ecx,%eax
 8144104:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8144107:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 814410e:	e9 a6 00 00 00       	jmp    81441b9 <_ZN8WongWork10CBossTower13onFinishStageEv+0x107>
 8144113:	8b 45 08             	mov    0x8(%ebp),%eax
 8144116:	8b 40 04             	mov    0x4(%eax),%eax
 8144119:	8b 55 f0             	mov    -0x10(%ebp),%edx
 814411c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8144120:	89 04 24             	mov    %eax,(%esp)
 8144123:	e8 3c 16 00 00       	call   8145764 <_ZN6CParty8get_userEi>
 8144128:	89 45 f4             	mov    %eax,-0xc(%ebp)
 814412b:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 814412f:	74 1c                	je     814414d <_ZN8WongWork10CBossTower13onFinishStageEv+0x9b>
 8144131:	8b 45 08             	mov    0x8(%ebp),%eax
 8144134:	8b 40 04             	mov    0x4(%eax),%eax
 8144137:	8b 55 f0             	mov    -0x10(%ebp),%edx
 814413a:	89 54 24 04          	mov    %edx,0x4(%esp)
 814413e:	89 04 24             	mov    %eax,(%esp)
 8144141:	e8 22 17 00 00       	call   8145868 <_ZN6CParty14checkValidUserEi>
 8144146:	83 f0 01             	xor    $0x1,%eax
 8144149:	84 c0                	test   %al,%al
 814414b:	74 07                	je     8144154 <_ZN8WongWork10CBossTower13onFinishStageEv+0xa2>
 814414d:	b8 01 00 00 00       	mov    $0x1,%eax
 8144152:	eb 05                	jmp    8144159 <_ZN8WongWork10CBossTower13onFinishStageEv+0xa7>
 8144154:	b8 00 00 00 00       	mov    $0x0,%eax
 8144159:	84 c0                	test   %al,%al
 814415b:	75 57                	jne    81441b4 <_ZN8WongWork10CBossTower13onFinishStageEv+0x102>
 814415d:	8b 45 08             	mov    0x8(%ebp),%eax
 8144160:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8144163:	89 54 24 04          	mov    %edx,0x4(%esp)
 8144167:	89 04 24             	mov    %eax,(%esp)
 814416a:	e8 13 15 00 00       	call   8145682 <_ZN8WongWork9CBossPlay13isMemberAliveEi>
 814416f:	84 c0                	test   %al,%al
 8144171:	74 42                	je     81441b5 <_ZN8WongWork10CBossTower13onFinishStageEv+0x103>
 8144173:	8b 45 08             	mov    0x8(%ebp),%eax
 8144176:	8b 80 e8 0a 00 00    	mov    0xae8(%eax),%eax
 814417c:	0f b6 c8             	movzbl %al,%ecx
 814417f:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8144182:	8b 45 08             	mov    0x8(%ebp),%eax
 8144185:	8b 80 e0 0a 00 00    	mov    0xae0(%eax),%eax
 814418b:	0f b6 c0             	movzbl %al,%eax
 814418e:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8144191:	81 c3 00 0b 00 00    	add    $0xb00,%ebx
 8144197:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 814419b:	89 54 24 0c          	mov    %edx,0xc(%esp)
 814419f:	89 44 24 08          	mov    %eax,0x8(%esp)
 81441a3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81441a6:	89 44 24 04          	mov    %eax,0x4(%esp)
 81441aa:	89 1c 24             	mov    %ebx,(%esp)
 81441ad:	e8 7c 24 01 00       	call   815662e <_ZN23CBossDungeonEntranceLog21IncrementBossStageEndER5CUserhjh>
 81441b2:	eb 01                	jmp    81441b5 <_ZN8WongWork10CBossTower13onFinishStageEv+0x103>
 81441b4:	90                   	nop
 81441b5:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 81441b9:	83 7d f0 03          	cmpl   $0x3,-0x10(%ebp)
 81441bd:	0f 9e c0             	setle  %al
 81441c0:	84 c0                	test   %al,%al
 81441c2:	0f 85 4b ff ff ff    	jne    8144113 <_ZN8WongWork10CBossTower13onFinishStageEv+0x61>
 81441c8:	b8 01 00 00 00       	mov    $0x1,%eax
 81441cd:	83 c4 34             	add    $0x34,%esp
 81441d0:	5b                   	pop    %ebx
 81441d1:	5d                   	pop    %ebp
 81441d2:	c3                   	ret
 81441d3:	90                   	nop

```

```c
// WongWork::CBossTower::onFinishStage @ 0x81440b2

/* WongWork::CBossTower::onFinishStage() */

undefined4 __thiscall WongWork::CBossTower::onFinishStage(CBossTower *this)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  undefined4 uVar5;
  CUser *pCVar6;
  int local_14;
  
  uVar5 = CSystemTime::getCurTickCount((CSystemTime *)GlobalData::s_systemTime_);
  *(undefined4 *)(this + 0x9ec) = uVar5;
  iVar1 = *(int *)(this + 0x9ec);
  iVar2 = *(int *)(this + 0x9e8);
  local_14 = 0;
  do {
    if (3 < local_14) {
      return 1;
    }
    pCVar6 = (CUser *)CParty::get_user(*(CParty **)(this + 4),local_14);
    if (pCVar6 == (CUser *)0x0) {
LAB_0814414d:
      bVar3 = true;
    }
    else {
      cVar4 = CParty::checkValidUser(*(CParty **)(this + 4),local_14);
      if (cVar4 != '\x01') goto LAB_0814414d;
      bVar3 = false;
    }
    if (!bVar3) {
      cVar4 = CBossPlay::isMemberAlive((CBossPlay *)this,local_14);
      if (cVar4 != '\0') {
        CBossDungeonEntranceLog::IncrementBossStageEnd
                  ((CBossDungeonEntranceLog *)(this + 0xb00),pCVar6,
                   (uchar)*(undefined4 *)(this + 0xae0),(iVar1 - iVar2) / 1000,
                   (uchar)*(undefined4 *)(this + 0xae8));
      }
    }
    local_14 = local_14 + 1;
  } while( true );
}

```

---

## onReadyTimerCheck

```asm
// === 0814512a WongWork::CBossTower::onReadyTimerCheck  [0x0814512a-0x814530b] ===
 814512a:	55                   	push   %ebp
 814512b:	89 e5                	mov    %esp,%ebp
 814512d:	56                   	push   %esi
 814512e:	53                   	push   %ebx
 814512f:	83 ec 30             	sub    $0x30,%esp
 8145132:	8b 45 08             	mov    0x8(%ebp),%eax
 8145135:	8b 00                	mov    (%eax),%eax
 8145137:	83 c0 0c             	add    $0xc,%eax
 814513a:	8b 18                	mov    (%eax),%ebx
 814513c:	8b 45 08             	mov    0x8(%ebp),%eax
 814513f:	8b 40 04             	mov    0x4(%eax),%eax
 8145142:	89 04 24             	mov    %eax,(%esp)
 8145145:	e8 20 50 45 00       	call   859a16a <_ZN6CParty16get_member_countEv>
 814514a:	8b 55 08             	mov    0x8(%ebp),%edx
 814514d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8145151:	89 14 24             	mov    %edx,(%esp)
 8145154:	ff d3                	call   *%ebx
 8145156:	84 c0                	test   %al,%al
 8145158:	74 0a                	je     8145164 <_ZN8WongWork10CBossTower17onReadyTimerCheckEv+0x3a>
 814515a:	b8 00 00 00 00       	mov    $0x0,%eax
 814515f:	e9 a0 01 00 00       	jmp    8145304 <_ZN8WongWork10CBossTower17onReadyTimerCheckEv+0x1da>
 8145164:	8b 45 08             	mov    0x8(%ebp),%eax
 8145167:	8b 40 04             	mov    0x4(%eax),%eax
 814516a:	85 c0                	test   %eax,%eax
 814516c:	74 12                	je     8145180 <_ZN8WongWork10CBossTower17onReadyTimerCheckEv+0x56>
 814516e:	8b 45 08             	mov    0x8(%ebp),%eax
 8145171:	8b 40 04             	mov    0x4(%eax),%eax
 8145174:	89 04 24             	mov    %eax,(%esp)
 8145177:	e8 ee 4f 45 00       	call   859a16a <_ZN6CParty16get_member_countEv>
 814517c:	85 c0                	test   %eax,%eax
 814517e:	7f 07                	jg     8145187 <_ZN8WongWork10CBossTower17onReadyTimerCheckEv+0x5d>
 8145180:	b8 01 00 00 00       	mov    $0x1,%eax
 8145185:	eb 05                	jmp    814518c <_ZN8WongWork10CBossTower17onReadyTimerCheckEv+0x62>
 8145187:	b8 00 00 00 00       	mov    $0x0,%eax
 814518c:	84 c0                	test   %al,%al
 814518e:	74 15                	je     81451a5 <_ZN8WongWork10CBossTower17onReadyTimerCheckEv+0x7b>
 8145190:	8b 45 08             	mov    0x8(%ebp),%eax
 8145193:	89 04 24             	mov    %eax,(%esp)
 8145196:	e8 9b d9 ff ff       	call   8142b36 <_ZN8WongWork10CBossTower8_destroyEv>
 814519b:	b8 00 00 00 00       	mov    $0x0,%eax
 81451a0:	e9 5f 01 00 00       	jmp    8145304 <_ZN8WongWork10CBossTower17onReadyTimerCheckEv+0x1da>
 81451a5:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 81451ac:	e9 8e 00 00 00       	jmp    814523f <_ZN8WongWork10CBossTower17onReadyTimerCheckEv+0x115>
 81451b1:	8b 45 08             	mov    0x8(%ebp),%eax
 81451b4:	8b 40 04             	mov    0x4(%eax),%eax
 81451b7:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81451ba:	89 54 24 04          	mov    %edx,0x4(%esp)
 81451be:	89 04 24             	mov    %eax,(%esp)
 81451c1:	e8 9e 05 00 00       	call   8145764 <_ZN6CParty8get_userEi>
 81451c6:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81451c9:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81451cd:	74 1c                	je     81451eb <_ZN8WongWork10CBossTower17onReadyTimerCheckEv+0xc1>
 81451cf:	8b 45 08             	mov    0x8(%ebp),%eax
 81451d2:	8b 40 04             	mov    0x4(%eax),%eax
 81451d5:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81451d8:	89 54 24 04          	mov    %edx,0x4(%esp)
 81451dc:	89 04 24             	mov    %eax,(%esp)
 81451df:	e8 84 06 00 00       	call   8145868 <_ZN6CParty14checkValidUserEi>
 81451e4:	83 f0 01             	xor    $0x1,%eax
 81451e7:	84 c0                	test   %al,%al
 81451e9:	74 07                	je     81451f2 <_ZN8WongWork10CBossTower17onReadyTimerCheckEv+0xc8>
 81451eb:	b8 01 00 00 00       	mov    $0x1,%eax
 81451f0:	eb 05                	jmp    81451f7 <_ZN8WongWork10CBossTower17onReadyTimerCheckEv+0xcd>
 81451f2:	b8 00 00 00 00       	mov    $0x0,%eax
 81451f7:	84 c0                	test   %al,%al
 81451f9:	75 3f                	jne    814523a <_ZN8WongWork10CBossTower17onReadyTimerCheckEv+0x110>
 81451fb:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81451fe:	8b 55 08             	mov    0x8(%ebp),%edx
 8145201:	0f b6 44 02 11       	movzbl 0x11(%edx,%eax,1),%eax
 8145206:	83 f0 01             	xor    $0x1,%eax
 8145209:	84 c0                	test   %al,%al
 814520b:	74 2e                	je     814523b <_ZN8WongWork10CBossTower17onReadyTimerCheckEv+0x111>
 814520d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8145210:	89 44 24 04          	mov    %eax,0x4(%esp)
 8145214:	8b 45 08             	mov    0x8(%ebp),%eax
 8145217:	89 04 24             	mov    %eax,(%esp)
 814521a:	e8 ed 00 00 00       	call   814530c <_ZN8WongWork10CBossTower19onChargeRequireItemEP5CUser>
 814521f:	8b 45 08             	mov    0x8(%ebp),%eax
 8145222:	8b 00                	mov    (%eax),%eax
 8145224:	83 c0 14             	add    $0x14,%eax
 8145227:	8b 10                	mov    (%eax),%edx
 8145229:	8b 45 f4             	mov    -0xc(%ebp),%eax
 814522c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8145230:	8b 45 08             	mov    0x8(%ebp),%eax
 8145233:	89 04 24             	mov    %eax,(%esp)
 8145236:	ff d2                	call   *%edx
 8145238:	eb 01                	jmp    814523b <_ZN8WongWork10CBossTower17onReadyTimerCheckEv+0x111>
 814523a:	90                   	nop
 814523b:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 814523f:	83 7d f0 03          	cmpl   $0x3,-0x10(%ebp)
 8145243:	0f 9e c0             	setle  %al
 8145246:	84 c0                	test   %al,%al
 8145248:	0f 85 63 ff ff ff    	jne    81451b1 <_ZN8WongWork10CBossTower17onReadyTimerCheckEv+0x87>
 814524e:	8b 45 08             	mov    0x8(%ebp),%eax
 8145251:	8b 40 04             	mov    0x4(%eax),%eax
 8145254:	89 04 24             	mov    %eax,(%esp)
 8145257:	e8 0e 4f 45 00       	call   859a16a <_ZN6CParty16get_member_countEv>
 814525c:	85 c0                	test   %eax,%eax
 814525e:	0f 9f c0             	setg   %al
 8145261:	84 c0                	test   %al,%al
 8145263:	0f 84 8b 00 00 00    	je     81452f4 <_ZN8WongWork10CBossTower17onReadyTimerCheckEv+0x1ca>
 8145269:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 814526c:	89 04 24             	mov    %eax,(%esp)
 814526f:	e8 d8 8a 44 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8145274:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 814527b:	00 
 814527c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8145283:	00 
 8145284:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8145287:	89 04 24             	mov    %eax,(%esp)
 814528a:	e8 6d 66 f8 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 814528f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8145296:	00 
 8145297:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 814529a:	89 04 24             	mov    %eax,(%esp)
 814529d:	e8 9a 66 f8 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81452a2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81452a9:	00 
 81452aa:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81452ad:	89 04 24             	mov    %eax,(%esp)
 81452b0:	e8 a3 66 f8 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81452b5:	8b 45 08             	mov    0x8(%ebp),%eax
 81452b8:	8b 40 04             	mov    0x4(%eax),%eax
 81452bb:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 81452be:	89 54 24 04          	mov    %edx,0x4(%esp)
 81452c2:	89 04 24             	mov    %eax,(%esp)
 81452c5:	e8 84 7e 45 00       	call   859d14e <_ZN6CParty13send_to_partyER11PacketGuard>
 81452ca:	eb 1b                	jmp    81452e7 <_ZN8WongWork10CBossTower17onReadyTimerCheckEv+0x1bd>
 81452cc:	89 d3                	mov    %edx,%ebx
 81452ce:	89 c6                	mov    %eax,%esi
 81452d0:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81452d3:	89 04 24             	mov    %eax,(%esp)
 81452d6:	e8 a5 8b 44 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81452db:	89 f0                	mov    %esi,%eax
 81452dd:	89 da                	mov    %ebx,%edx
 81452df:	89 04 24             	mov    %eax,(%esp)
 81452e2:	e8 69 e4 99 00       	call   8ae3750 <_Unwind_Resume>
 81452e7:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81452ea:	89 04 24             	mov    %eax,(%esp)
 81452ed:	e8 8e 8b 44 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81452f2:	eb 0b                	jmp    81452ff <_ZN8WongWork10CBossTower17onReadyTimerCheckEv+0x1d5>
 81452f4:	8b 45 08             	mov    0x8(%ebp),%eax
 81452f7:	89 04 24             	mov    %eax,(%esp)
 81452fa:	e8 37 d8 ff ff       	call   8142b36 <_ZN8WongWork10CBossTower8_destroyEv>
 81452ff:	b8 01 00 00 00       	mov    $0x1,%eax
 8145304:	83 c4 30             	add    $0x30,%esp
 8145307:	5b                   	pop    %ebx
 8145308:	5e                   	pop    %esi
 8145309:	5d                   	pop    %ebp
 814530a:	c3                   	ret
 814530b:	90                   	nop

```

```c
// WongWork::CBossTower::onReadyTimerCheck @ 0x814512a

/* WongWork::CBossTower::onReadyTimerCheck() */

undefined4 __thiscall WongWork::CBossTower::onReadyTimerCheck(CBossTower *this)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  PacketGuard local_20 [12];
  int local_14;
  CUser *local_10;
  
  pcVar1 = *(code **)(*(int *)this + 0xc);
  uVar4 = CParty::get_member_count(*(CParty **)(this + 4));
  cVar3 = (*pcVar1)(this,uVar4);
  if (cVar3 == '\0') {
    if ((*(int *)(this + 4) == 0) ||
       (iVar5 = CParty::get_member_count(*(CParty **)(this + 4)), iVar5 < 1)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      _destroy(this);
      uVar4 = 0;
    }
    else {
      for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
        local_10 = (CUser *)CParty::get_user(*(CParty **)(this + 4),local_14);
        if ((local_10 == (CUser *)0x0) ||
           (cVar3 = CParty::checkValidUser(*(CParty **)(this + 4),local_14), cVar3 != '\x01')) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if ((!bVar2) && (this[local_14 + 0x11] != (CBossTower)0x1)) {
          onChargeRequireItem(this,local_10);
          (**(code **)(*(int *)this + 0x14))(this,local_10);
        }
      }
      iVar5 = CParty::get_member_count(*(CParty **)(this + 4));
      if (iVar5 < 1) {
        _destroy(this);
      }
      else {
        PacketGuard::PacketGuard(local_20);
                    /* try { // try from 0814528a to 081452c9 has its CatchHandler @ 081452cc */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0x1e);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,0);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
        CParty::send_to_party(*(CParty **)(this + 4),local_20);
        PacketGuard::~PacketGuard(local_20);
      }
      uVar4 = 1;
    }
    return uVar4;
  }
  return 0;
}

```

---

## onReturnVillage

```asm
// === 08144fca WongWork::CBossTower::onReturnVillage  [0x08144fca-0x8145129] ===
 8144fca:	55                   	push   %ebp
 8144fcb:	89 e5                	mov    %esp,%ebp
 8144fcd:	57                   	push   %edi
 8144fce:	56                   	push   %esi
 8144fcf:	53                   	push   %ebx
 8144fd0:	81 ec 3c 01 00 00    	sub    $0x13c,%esp
 8144fd6:	8b 45 08             	mov    0x8(%ebp),%eax
 8144fd9:	8b 40 04             	mov    0x4(%eax),%eax
 8144fdc:	85 c0                	test   %eax,%eax
 8144fde:	e9 37 01 00 00       	jmp    814511a <_ZN8WongWork10CBossTower15onReturnVillageEv+0x150>
 8144fe3:	8b 40 04             	mov    0x4(%eax),%eax
 8144fe6:	89 04 24             	mov    %eax,(%esp)
 8144fe9:	e8 2e 08 00 00       	call   814581c <_ZN6CParty12GetEPLPStateEv>
 8144fee:	3c 02                	cmp    $0x2,%al
 8144ff0:	75 07                	jne    8144ff9 <_ZN8WongWork10CBossTower15onReturnVillageEv+0x2f>
 8144ff2:	b8 01 00 00 00       	mov    $0x1,%eax
 8144ff7:	eb 05                	jmp    8144ffe <_ZN8WongWork10CBossTower15onReturnVillageEv+0x34>
 8144ff9:	b8 00 00 00 00       	mov    $0x0,%eax
 8144ffe:	84 c0                	test   %al,%al
 8145000:	0f 84 14 01 00 00    	je     814511a <_ZN8WongWork10CBossTower15onReturnVillageEv+0x150>
 8145006:	8d 95 e0 fe ff ff    	lea    -0x120(%ebp),%edx
 814500c:	b8 00 00 00 00       	mov    $0x0,%eax
 8145011:	b9 3f 00 00 00       	mov    $0x3f,%ecx
 8145016:	89 d7                	mov    %edx,%edi
 8145018:	f3 ab                	rep stos %eax,%es:(%edi)
 814501a:	89 fa                	mov    %edi,%edx
 814501c:	66 89 02             	mov    %ax,(%edx)
 814501f:	83 c2 02             	add    $0x2,%edx
 8145022:	88 02                	mov    %al,(%edx)
 8145024:	83 c2 01             	add    $0x1,%edx
 8145027:	8b 45 08             	mov    0x8(%ebp),%eax
 814502a:	8b 40 04             	mov    0x4(%eax),%eax
 814502d:	8b 80 d8 0c 00 00    	mov    0xcd8(%eax),%eax
 8145033:	88 45 df             	mov    %al,-0x21(%ebp)
 8145036:	8b 45 08             	mov    0x8(%ebp),%eax
 8145039:	8b 40 04             	mov    0x4(%eax),%eax
 814503c:	8d 95 e0 fe ff ff    	lea    -0x120(%ebp),%edx
 8145042:	89 54 24 04          	mov    %edx,0x4(%esp)
 8145046:	89 04 24             	mov    %eax,(%esp)
 8145049:	e8 34 08 00 00       	call   8145882 <_ZN6CParty14getMemberNamesEPc>
 814504e:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8145055:	e9 98 00 00 00       	jmp    81450f2 <_ZN8WongWork10CBossTower15onReturnVillageEv+0x128>
 814505a:	8b 45 08             	mov    0x8(%ebp),%eax
 814505d:	8b 40 04             	mov    0x4(%eax),%eax
 8145060:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8145063:	89 54 24 04          	mov    %edx,0x4(%esp)
 8145067:	89 04 24             	mov    %eax,(%esp)
 814506a:	e8 f5 06 00 00       	call   8145764 <_ZN6CParty8get_userEi>
 814506f:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8145072:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 8145076:	74 1c                	je     8145094 <_ZN8WongWork10CBossTower15onReturnVillageEv+0xca>
 8145078:	8b 45 08             	mov    0x8(%ebp),%eax
 814507b:	8b 40 04             	mov    0x4(%eax),%eax
 814507e:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8145081:	89 54 24 04          	mov    %edx,0x4(%esp)
 8145085:	89 04 24             	mov    %eax,(%esp)
 8145088:	e8 db 07 00 00       	call   8145868 <_ZN6CParty14checkValidUserEi>
 814508d:	83 f0 01             	xor    $0x1,%eax
 8145090:	84 c0                	test   %al,%al
 8145092:	74 07                	je     814509b <_ZN8WongWork10CBossTower15onReturnVillageEv+0xd1>
 8145094:	b8 01 00 00 00       	mov    $0x1,%eax
 8145099:	eb 05                	jmp    81450a0 <_ZN8WongWork10CBossTower15onReturnVillageEv+0xd6>
 814509b:	b8 00 00 00 00       	mov    $0x0,%eax
 81450a0:	84 c0                	test   %al,%al
 81450a2:	75 49                	jne    81450ed <_ZN8WongWork10CBossTower15onReturnVillageEv+0x123>
 81450a4:	0f be 75 df          	movsbl -0x21(%ebp),%esi
 81450a8:	8b 45 08             	mov    0x8(%ebp),%eax
 81450ab:	8b 80 e8 0a 00 00    	mov    0xae8(%eax),%eax
 81450b1:	89 c3                	mov    %eax,%ebx
 81450b3:	8b 45 08             	mov    0x8(%ebp),%eax
 81450b6:	8b 80 f0 09 00 00    	mov    0x9f0(%eax),%eax
 81450bc:	89 04 24             	mov    %eax,(%esp)
 81450bf:	e8 e2 04 00 00       	call   81455a6 <_ZNK8CDungeon14GetDungeonNameEv>
 81450c4:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 81450c7:	8d 8a 00 97 07 00    	lea    0x79700(%edx),%ecx
 81450cd:	89 74 24 10          	mov    %esi,0x10(%esp)
 81450d1:	8d 95 e0 fe ff ff    	lea    -0x120(%ebp),%edx
 81450d7:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81450db:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81450df:	89 44 24 04          	mov    %eax,0x4(%esp)
 81450e3:	89 0c 24             	mov    %ecx,(%esp)
 81450e6:	e8 f1 f8 53 00       	call   86849dc <_ZN15cUserHistoryLog12LeaveDungeonEPKciS1_i>
 81450eb:	eb 01                	jmp    81450ee <_ZN8WongWork10CBossTower15onReturnVillageEv+0x124>
 81450ed:	90                   	nop
 81450ee:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 81450f2:	83 7d e0 03          	cmpl   $0x3,-0x20(%ebp)
 81450f6:	0f 9e c0             	setle  %al
 81450f9:	84 c0                	test   %al,%al
 81450fb:	0f 85 59 ff ff ff    	jne    814505a <_ZN8WongWork10CBossTower15onReturnVillageEv+0x90>
 8145101:	8b 45 08             	mov    0x8(%ebp),%eax
 8145104:	8b 40 04             	mov    0x4(%eax),%eax
 8145107:	89 04 24             	mov    %eax,(%esp)
 814510a:	e8 51 79 46 00       	call   85aca60 <_ZN6CParty15ReturnToVillageEv>
 814510f:	8b 45 08             	mov    0x8(%ebp),%eax
 8145112:	89 04 24             	mov    %eax,(%esp)
 8145115:	e8 1c da ff ff       	call   8142b36 <_ZN8WongWork10CBossTower8_destroyEv>
 814511a:	b8 01 00 00 00       	mov    $0x1,%eax
 814511f:	81 c4 3c 01 00 00    	add    $0x13c,%esp
 8145125:	5b                   	pop    %ebx
 8145126:	5e                   	pop    %esi
 8145127:	5f                   	pop    %edi
 8145128:	5d                   	pop    %ebp
 8145129:	c3                   	ret

```

```c
// WongWork::CBossTower::onReturnVillage @ 0x8144fca

/* WongWork::CBossTower::onReturnVillage() */

undefined4 WongWork::CBossTower::onReturnVillage(void)

{
  return 1;
}

```

---

## ~CBossTower

```asm
// === 08142a74 WongWork::CBossTower::~CBossTower  [0x08142a74-0x8142b35] ===
 8142a74:	55                   	push   %ebp
 8142a75:	89 e5                	mov    %esp,%ebp
 8142a77:	56                   	push   %esi
 8142a78:	53                   	push   %ebx
 8142a79:	83 ec 10             	sub    $0x10,%esp
 8142a7c:	8b 45 08             	mov    0x8(%ebp),%eax
 8142a7f:	c7 00 68 02 b7 08    	movl   $0x8b70268,(%eax)
 8142a85:	8b 45 08             	mov    0x8(%ebp),%eax
 8142a88:	89 04 24             	mov    %eax,(%esp)
 8142a8b:	e8 12 94 00 00       	call   814bea2 <_ZN8WongWork10CBossStage5resetEv>
 8142a90:	8b 45 08             	mov    0x8(%ebp),%eax
 8142a93:	c7 80 f0 0a 00 00 00 	movl   $0x0,0xaf0(%eax)
 8142a9a:	00 00 00 
 8142a9d:	8b 45 08             	mov    0x8(%ebp),%eax
 8142aa0:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 8142aa7:	8b 45 08             	mov    0x8(%ebp),%eax
 8142aaa:	83 c0 0d             	add    $0xd,%eax
 8142aad:	c7 44 24 08 04 00 00 	movl   $0x4,0x8(%esp)
 8142ab4:	00 
 8142ab5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8142abc:	00 
 8142abd:	89 04 24             	mov    %eax,(%esp)
 8142ac0:	e8 fb b1 f3 ff       	call   807dcc0 <memset@plt>
 8142ac5:	8b 45 08             	mov    0x8(%ebp),%eax
 8142ac8:	c7 80 f0 09 00 00 00 	movl   $0x0,0x9f0(%eax)
 8142acf:	00 00 00 
 8142ad2:	8b 45 08             	mov    0x8(%ebp),%eax
 8142ad5:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 8142adc:	8b 45 08             	mov    0x8(%ebp),%eax
 8142adf:	05 00 0b 00 00       	add    $0xb00,%eax
 8142ae4:	89 04 24             	mov    %eax,(%esp)
 8142ae7:	e8 18 2c 00 00       	call   8145704 <_ZN23CBossDungeonEntranceLogD1Ev>
 8142aec:	eb 35                	jmp    8142b23 <_ZN8WongWork10CBossTowerD1Ev+0xaf>
 8142aee:	89 d3                	mov    %edx,%ebx
 8142af0:	89 c6                	mov    %eax,%esi
 8142af2:	8b 45 08             	mov    0x8(%ebp),%eax
 8142af5:	05 00 0b 00 00       	add    $0xb00,%eax
 8142afa:	89 04 24             	mov    %eax,(%esp)
 8142afd:	e8 02 2c 00 00       	call   8145704 <_ZN23CBossDungeonEntranceLogD1Ev>
 8142b02:	89 f0                	mov    %esi,%eax
 8142b04:	89 da                	mov    %ebx,%edx
 8142b06:	eb 00                	jmp    8142b08 <_ZN8WongWork10CBossTowerD1Ev+0x94>
 8142b08:	89 d3                	mov    %edx,%ebx
 8142b0a:	89 c6                	mov    %eax,%esi
 8142b0c:	8b 45 08             	mov    0x8(%ebp),%eax
 8142b0f:	89 04 24             	mov    %eax,(%esp)
 8142b12:	e8 bf 92 00 00       	call   814bdd6 <_ZN8WongWork10CBossStageD1Ev>
 8142b17:	89 f0                	mov    %esi,%eax
 8142b19:	89 da                	mov    %ebx,%edx
 8142b1b:	89 04 24             	mov    %eax,(%esp)
 8142b1e:	e8 2d 0c 9a 00       	call   8ae3750 <_Unwind_Resume>
 8142b23:	8b 45 08             	mov    0x8(%ebp),%eax
 8142b26:	89 04 24             	mov    %eax,(%esp)
 8142b29:	e8 a8 92 00 00       	call   814bdd6 <_ZN8WongWork10CBossStageD1Ev>
 8142b2e:	83 c4 10             	add    $0x10,%esp
 8142b31:	5b                   	pop    %ebx
 8142b32:	5e                   	pop    %esi
 8142b33:	5d                   	pop    %ebp
 8142b34:	c3                   	ret
 8142b35:	90                   	nop

```

```c
// WongWork::CBossTower::~CBossTower @ 0x8142a74

/* WongWork::CBossTower::~CBossTower() */

void __thiscall WongWork::CBossTower::~CBossTower(CBossTower *this)

{
  *(undefined ***)this = &PTR_generateRewardItem_08b70268;
                    /* try { // try from 08142a8b to 08142a8f has its CatchHandler @ 08142aee */
  CBossStage::reset((CBossStage *)this);
  *(undefined4 *)(this + 0xaf0) = 0;
  *(undefined4 *)(this + 8) = 0;
  memset(this + 0xd,0,4);
  *(undefined4 *)(this + 0x9f0) = 0;
  *(undefined4 *)(this + 4) = 0;
                    /* try { // try from 08142ae7 to 08142aeb has its CatchHandler @ 08142b08 */
  CBossDungeonEntranceLog::~CBossDungeonEntranceLog((CBossDungeonEntranceLog *)(this + 0xb00));
  CBossStage::~CBossStage((CBossStage *)this);
  return;
}

```

