# DisPatcher_UseCoin

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 7

---

## Dungeon_check_error

```asm
// === 081ca63a DisPatcher_UseCoin::Dungeon_check_error  [0x081ca63a-0x81ca75b] ===
 81ca63a:	55                   	push   %ebp
 81ca63b:	89 e5                	mov    %esp,%ebp
 81ca63d:	83 ec 38             	sub    $0x38,%esp
 81ca640:	8b 45 10             	mov    0x10(%ebp),%eax
 81ca643:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81ca646:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ca649:	89 04 24             	mov    %eax,(%esp)
 81ca64c:	e8 fb aa 48 00       	call   865514c <_ZN5CUser8GetPartyEv>
 81ca651:	89 45 e8             	mov    %eax,-0x18(%ebp)
 81ca654:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 81ca658:	75 0a                	jne    81ca664 <_ZN18DisPatcher_UseCoin19Dungeon_check_errorEP5CUserR8MSG_BASER9ParamBase+0x2a>
 81ca65a:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81ca65f:	e9 f6 00 00 00       	jmp    81ca75a <_ZN18DisPatcher_UseCoin19Dungeon_check_errorEP5CUserR8MSG_BASER9ParamBase+0x120>
 81ca664:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ca667:	89 04 24             	mov    %eax,(%esp)
 81ca66a:	e8 dd aa 48 00       	call   865514c <_ZN5CUser8GetPartyEv>
 81ca66f:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81ca672:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 81ca676:	0f 84 84 00 00 00    	je     81ca700 <_ZN18DisPatcher_UseCoin19Dungeon_check_errorEP5CUserR8MSG_BASER9ParamBase+0xc6>
 81ca67c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81ca67f:	8b 80 ac 0c 00 00    	mov    0xcac(%eax),%eax
 81ca685:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81ca688:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81ca68c:	74 72                	je     81ca700 <_ZN18DisPatcher_UseCoin19Dungeon_check_errorEP5CUserR8MSG_BASER9ParamBase+0xc6>
 81ca68e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81ca691:	0f b6 80 9f 08 00 00 	movzbl 0x89f(%eax),%eax
 81ca698:	84 c0                	test   %al,%al
 81ca69a:	7e 1c                	jle    81ca6b8 <_ZN18DisPatcher_UseCoin19Dungeon_check_errorEP5CUserR8MSG_BASER9ParamBase+0x7e>
 81ca69c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81ca69f:	05 24 0b 00 00       	add    $0xb24,%eax
 81ca6a4:	89 04 24             	mov    %eax,(%esp)
 81ca6a7:	e8 6c 28 06 00       	call   822cf18 <_ZN13CBattle_Field13getBloodStateEv>
 81ca6ac:	83 f8 02             	cmp    $0x2,%eax
 81ca6af:	7e 07                	jle    81ca6b8 <_ZN18DisPatcher_UseCoin19Dungeon_check_errorEP5CUserR8MSG_BASER9ParamBase+0x7e>
 81ca6b1:	b8 01 00 00 00       	mov    $0x1,%eax
 81ca6b6:	eb 05                	jmp    81ca6bd <_ZN18DisPatcher_UseCoin19Dungeon_check_errorEP5CUserR8MSG_BASER9ParamBase+0x83>
 81ca6b8:	b8 00 00 00 00       	mov    $0x0,%eax
 81ca6bd:	84 c0                	test   %al,%al
 81ca6bf:	74 0a                	je     81ca6cb <_ZN18DisPatcher_UseCoin19Dungeon_check_errorEP5CUserR8MSG_BASER9ParamBase+0x91>
 81ca6c1:	b8 13 00 00 00       	mov    $0x13,%eax
 81ca6c6:	e9 8f 00 00 00       	jmp    81ca75a <_ZN18DisPatcher_UseCoin19Dungeon_check_errorEP5CUserR8MSG_BASER9ParamBase+0x120>
 81ca6cb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81ca6ce:	89 04 24             	mov    %eax,(%esp)
 81ca6d1:	e8 34 ab 19 00       	call   836520a <_ZNK8CDungeon19isTournamentDungeonEv>
 81ca6d6:	84 c0                	test   %al,%al
 81ca6d8:	74 16                	je     81ca6f0 <_ZN18DisPatcher_UseCoin19Dungeon_check_errorEP5CUserR8MSG_BASER9ParamBase+0xb6>
 81ca6da:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81ca6dd:	89 04 24             	mov    %eax,(%esp)
 81ca6e0:	e8 c7 2f 3f 00       	call   85bd6ac <_ZN6CParty30GetTournamentDungeonClearStateEv>
 81ca6e5:	84 c0                	test   %al,%al
 81ca6e7:	7e 07                	jle    81ca6f0 <_ZN18DisPatcher_UseCoin19Dungeon_check_errorEP5CUserR8MSG_BASER9ParamBase+0xb6>
 81ca6e9:	b8 01 00 00 00       	mov    $0x1,%eax
 81ca6ee:	eb 05                	jmp    81ca6f5 <_ZN18DisPatcher_UseCoin19Dungeon_check_errorEP5CUserR8MSG_BASER9ParamBase+0xbb>
 81ca6f0:	b8 00 00 00 00       	mov    $0x0,%eax
 81ca6f5:	84 c0                	test   %al,%al
 81ca6f7:	74 07                	je     81ca700 <_ZN18DisPatcher_UseCoin19Dungeon_check_errorEP5CUserR8MSG_BASER9ParamBase+0xc6>
 81ca6f9:	b8 13 00 00 00       	mov    $0x13,%eax
 81ca6fe:	eb 5a                	jmp    81ca75a <_ZN18DisPatcher_UseCoin19Dungeon_check_errorEP5CUserR8MSG_BASER9ParamBase+0x120>
 81ca700:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81ca703:	89 44 24 08          	mov    %eax,0x8(%esp)
 81ca707:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ca70a:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ca70e:	8b 45 08             	mov    0x8(%ebp),%eax
 81ca711:	89 04 24             	mov    %eax,(%esp)
 81ca714:	e8 21 04 00 00       	call   81cab3a <_ZN18DisPatcher_UseCoin20usedCoinDungeonCheckEP5CUserP6CParty>
 81ca719:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81ca71c:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 81ca720:	74 05                	je     81ca727 <_ZN18DisPatcher_UseCoin19Dungeon_check_errorEP5CUserR8MSG_BASER9ParamBase+0xed>
 81ca722:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81ca725:	eb 33                	jmp    81ca75a <_ZN18DisPatcher_UseCoin19Dungeon_check_errorEP5CUserR8MSG_BASER9ParamBase+0x120>
 81ca727:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81ca72a:	0f b7 40 0d          	movzwl 0xd(%eax),%eax
 81ca72e:	0f b7 c0             	movzwl %ax,%eax
 81ca731:	89 44 24 08          	mov    %eax,0x8(%esp)
 81ca735:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ca738:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ca73c:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81ca73f:	89 04 24             	mov    %eax,(%esp)
 81ca742:	e8 81 80 3e 00       	call   85b27c8 <_ZN6CParty10ReviveUserEP5CUsert>
 81ca747:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81ca74a:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 81ca74e:	7e 05                	jle    81ca755 <_ZN18DisPatcher_UseCoin19Dungeon_check_errorEP5CUserR8MSG_BASER9ParamBase+0x11b>
 81ca750:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81ca753:	eb 05                	jmp    81ca75a <_ZN18DisPatcher_UseCoin19Dungeon_check_errorEP5CUserR8MSG_BASER9ParamBase+0x120>
 81ca755:	b8 00 00 00 00       	mov    $0x0,%eax
 81ca75a:	c9                   	leave
 81ca75b:	c3                   	ret

```

```c
// DisPatcher_UseCoin::Dungeon_check_error @ 0x81ca63a

/* DisPatcher_UseCoin::Dungeon_check_error(CUser*, MSG_BASE&, ParamBase&) */

int DisPatcher_UseCoin::Dungeon_check_error(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  CDungeon *this;
  bool bVar1;
  char cVar2;
  CParty *this_00;
  CParty *this_01;
  int iVar3;
  
  this_00 = (CParty *)CUser::GetParty((CUser *)param_2);
  if (this_00 == (CParty *)0x0) {
    return -1;
  }
  this_01 = (CParty *)CUser::GetParty((CUser *)param_2);
  if ((this_01 != (CParty *)0x0) &&
     (this = *(CDungeon **)(this_01 + 0xcac), this != (CDungeon *)0x0)) {
    if (((char)this[0x89f] < '\x01') ||
       (iVar3 = CBattle_Field::getBloodState((CBattle_Field *)(this_01 + 0xb24)), iVar3 < 3)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      return 0x13;
    }
    cVar2 = CDungeon::isTournamentDungeon(this);
    if ((cVar2 == '\0') || (cVar2 = CParty::GetTournamentDungeonClearState(this_01), cVar2 < '\x01')
       ) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      return 0x13;
    }
  }
  iVar3 = usedCoinDungeonCheck((DisPatcher_UseCoin *)param_1,(CUser *)param_2,this_00);
  if ((iVar3 == 0) &&
     (iVar3 = CParty::ReviveUser(this_00,(CUser *)param_2,*(ushort *)(param_3 + 0xd)), iVar3 < 1)) {
    iVar3 = 0;
  }
  return iVar3;
}

```

---

## WarRoom_check_error

```asm
// === 081ca75c DisPatcher_UseCoin::WarRoom_check_error  [0x081ca75c-0x81ca7d5] ===
 81ca75c:	55                   	push   %ebp
 81ca75d:	89 e5                	mov    %esp,%ebp
 81ca75f:	83 ec 28             	sub    $0x28,%esp
 81ca762:	8b 45 10             	mov    0x10(%ebp),%eax
 81ca765:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81ca768:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ca76b:	89 04 24             	mov    %eax,(%esp)
 81ca76e:	e8 6b aa 48 00       	call   86551de <_ZN5CUser10GetWarRoomEv>
 81ca773:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81ca776:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 81ca77a:	75 07                	jne    81ca783 <_ZN18DisPatcher_UseCoin19WarRoom_check_errorEP5CUserR8MSG_BASER9ParamBase+0x27>
 81ca77c:	b8 fe ff ff ff       	mov    $0xfffffffe,%eax
 81ca781:	eb 51                	jmp    81ca7d4 <_ZN18DisPatcher_UseCoin19WarRoom_check_errorEP5CUserR8MSG_BASER9ParamBase+0x78>
 81ca783:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ca786:	89 04 24             	mov    %eax,(%esp)
 81ca789:	e8 f0 fa f0 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 81ca78e:	89 04 24             	mov    %eax,(%esp)
 81ca791:	e8 00 2f 06 00       	call   822d696 <_ZNK10CInventory12IsCoinUsableEv>
 81ca796:	84 c0                	test   %al,%al
 81ca798:	74 35                	je     81ca7cf <_ZN18DisPatcher_UseCoin19WarRoom_check_errorEP5CUserR8MSG_BASER9ParamBase+0x73>
 81ca79a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81ca79d:	0f b7 40 0d          	movzwl 0xd(%eax),%eax
 81ca7a1:	0f b7 c0             	movzwl %ax,%eax
 81ca7a4:	89 44 24 08          	mov    %eax,0x8(%esp)
 81ca7a8:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ca7ab:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ca7af:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81ca7b2:	89 04 24             	mov    %eax,(%esp)
 81ca7b5:	e8 6a 4b 4f 00       	call   86bf324 <_ZN7WarRoom16ReviveUserByCoinEP5CUsert>
 81ca7ba:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81ca7bd:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81ca7c1:	7e 05                	jle    81ca7c8 <_ZN18DisPatcher_UseCoin19WarRoom_check_errorEP5CUserR8MSG_BASER9ParamBase+0x6c>
 81ca7c3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81ca7c6:	eb 0c                	jmp    81ca7d4 <_ZN18DisPatcher_UseCoin19WarRoom_check_errorEP5CUserR8MSG_BASER9ParamBase+0x78>
 81ca7c8:	b8 00 00 00 00       	mov    $0x0,%eax
 81ca7cd:	eb 05                	jmp    81ca7d4 <_ZN18DisPatcher_UseCoin19WarRoom_check_errorEP5CUserR8MSG_BASER9ParamBase+0x78>
 81ca7cf:	b8 11 00 00 00       	mov    $0x11,%eax
 81ca7d4:	c9                   	leave
 81ca7d5:	c3                   	ret

```

```c
// DisPatcher_UseCoin::WarRoom_check_error @ 0x81ca75c

/* DisPatcher_UseCoin::WarRoom_check_error(CUser*, MSG_BASE&, ParamBase&) */

int DisPatcher_UseCoin::WarRoom_check_error(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  char cVar1;
  WarRoom *this;
  int iVar2;
  CInventory *this_00;
  
  this = (WarRoom *)CUser::GetWarRoom((CUser *)param_2);
  if (this == (WarRoom *)0x0) {
    iVar2 = -2;
  }
  else {
    this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_2);
    cVar1 = CInventory::IsCoinUsable(this_00);
    if (cVar1 == '\0') {
      iVar2 = 0x11;
    }
    else {
      iVar2 = WarRoom::ReviveUserByCoin(this,(CUser *)param_2,*(ushort *)(param_3 + 0xd));
      if (iVar2 < 1) {
        iVar2 = 0;
      }
    }
  }
  return iVar2;
}

```

---

## check_error

```asm
// === 081ca7d6 DisPatcher_UseCoin::check_error  [0x081ca7d6-0x81ca851] ===
 81ca7d6:	55                   	push   %ebp
 81ca7d7:	89 e5                	mov    %esp,%ebp
 81ca7d9:	83 ec 18             	sub    $0x18,%esp
 81ca7dc:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ca7df:	89 04 24             	mov    %eax,(%esp)
 81ca7e2:	e8 a5 fb f0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81ca7e7:	83 f8 05             	cmp    $0x5,%eax
 81ca7ea:	0f 94 c0             	sete   %al
 81ca7ed:	84 c0                	test   %al,%al
 81ca7ef:	74 22                	je     81ca813 <_ZN18DisPatcher_UseCoin11check_errorEP5CUserR8MSG_BASER9ParamBase+0x3d>
 81ca7f1:	8b 45 14             	mov    0x14(%ebp),%eax
 81ca7f4:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81ca7f8:	8b 45 10             	mov    0x10(%ebp),%eax
 81ca7fb:	89 44 24 08          	mov    %eax,0x8(%esp)
 81ca7ff:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ca802:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ca806:	8b 45 08             	mov    0x8(%ebp),%eax
 81ca809:	89 04 24             	mov    %eax,(%esp)
 81ca80c:	e8 29 fe ff ff       	call   81ca63a <_ZN18DisPatcher_UseCoin19Dungeon_check_errorEP5CUserR8MSG_BASER9ParamBase>
 81ca811:	eb 3c                	jmp    81ca84f <_ZN18DisPatcher_UseCoin11check_errorEP5CUserR8MSG_BASER9ParamBase+0x79>
 81ca813:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ca816:	89 04 24             	mov    %eax,(%esp)
 81ca819:	e8 6e fb f0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81ca81e:	83 f8 08             	cmp    $0x8,%eax
 81ca821:	0f 94 c0             	sete   %al
 81ca824:	84 c0                	test   %al,%al
 81ca826:	74 22                	je     81ca84a <_ZN18DisPatcher_UseCoin11check_errorEP5CUserR8MSG_BASER9ParamBase+0x74>
 81ca828:	8b 45 14             	mov    0x14(%ebp),%eax
 81ca82b:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81ca82f:	8b 45 10             	mov    0x10(%ebp),%eax
 81ca832:	89 44 24 08          	mov    %eax,0x8(%esp)
 81ca836:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ca839:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ca83d:	8b 45 08             	mov    0x8(%ebp),%eax
 81ca840:	89 04 24             	mov    %eax,(%esp)
 81ca843:	e8 14 ff ff ff       	call   81ca75c <_ZN18DisPatcher_UseCoin19WarRoom_check_errorEP5CUserR8MSG_BASER9ParamBase>
 81ca848:	eb 05                	jmp    81ca84f <_ZN18DisPatcher_UseCoin11check_errorEP5CUserR8MSG_BASER9ParamBase+0x79>
 81ca84a:	b8 13 00 00 00       	mov    $0x13,%eax
 81ca84f:	c9                   	leave
 81ca850:	c3                   	ret
 81ca851:	90                   	nop

```

```c
// DisPatcher_UseCoin::check_error @ 0x81ca7d6

/* DisPatcher_UseCoin::check_error(CUser*, MSG_BASE&, ParamBase&) */

undefined4 DisPatcher_UseCoin::check_error(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (iVar1 == 5) {
    uVar2 = Dungeon_check_error(param_1,param_2,param_3);
  }
  else {
    iVar1 = CUser::get_state((CUser *)param_2);
    if (iVar1 == 8) {
      uVar2 = WarRoom_check_error(param_1,param_2,param_3);
    }
    else {
      uVar2 = 0x13;
    }
  }
  return uVar2;
}

```

---

## process

```asm
// === 081ca852 DisPatcher_UseCoin::process  [0x081ca852-0x81caa41] ===
 81ca852:	55                   	push   %ebp
 81ca853:	89 e5                	mov    %esp,%ebp
 81ca855:	83 ec 28             	sub    $0x28,%esp
 81ca858:	8b 45 14             	mov    0x14(%ebp),%eax
 81ca85b:	89 45 e8             	mov    %eax,-0x18(%ebp)
 81ca85e:	8b 45 14             	mov    0x14(%ebp),%eax
 81ca861:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81ca865:	8b 45 10             	mov    0x10(%ebp),%eax
 81ca868:	89 44 24 08          	mov    %eax,0x8(%esp)
 81ca86c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ca86f:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ca873:	8b 45 08             	mov    0x8(%ebp),%eax
 81ca876:	89 04 24             	mov    %eax,(%esp)
 81ca879:	e8 58 ff ff ff       	call   81ca7d6 <_ZN18DisPatcher_UseCoin11check_errorEP5CUserR8MSG_BASER9ParamBase>
 81ca87e:	89 c2                	mov    %eax,%edx
 81ca880:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81ca883:	89 50 04             	mov    %edx,0x4(%eax)
 81ca886:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81ca889:	8b 40 04             	mov    0x4(%eax),%eax
 81ca88c:	85 c0                	test   %eax,%eax
 81ca88e:	7e 0a                	jle    81ca89a <_ZN18DisPatcher_UseCoin7processEP5CUserR8MSG_BASER9ParamBase+0x48>
 81ca890:	b8 00 00 00 00       	mov    $0x0,%eax
 81ca895:	e9 a6 01 00 00       	jmp    81caa40 <_ZN18DisPatcher_UseCoin7processEP5CUserR8MSG_BASER9ParamBase+0x1ee>
 81ca89a:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81ca89d:	8b 40 04             	mov    0x4(%eax),%eax
 81ca8a0:	85 c0                	test   %eax,%eax
 81ca8a2:	79 32                	jns    81ca8d6 <_ZN18DisPatcher_UseCoin7processEP5CUserR8MSG_BASER9ParamBase+0x84>
 81ca8a4:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ca8a7:	89 04 24             	mov    %eax,(%esp)
 81ca8aa:	e8 bf fa f0 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81ca8af:	8b 55 e8             	mov    -0x18(%ebp),%edx
 81ca8b2:	8b 52 04             	mov    0x4(%edx),%edx
 81ca8b5:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81ca8b9:	89 54 24 08          	mov    %edx,0x8(%esp)
 81ca8bd:	c7 44 24 04 a0 52 bd 	movl   $0x8bd52a0,0x4(%esp)
 81ca8c4:	08 
 81ca8c5:	c7 04 24 4d 1f 00 00 	movl   $0x1f4d,(%esp)
 81ca8cc:	e8 06 60 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81ca8d1:	e9 6a 01 00 00       	jmp    81caa40 <_ZN18DisPatcher_UseCoin7processEP5CUserR8MSG_BASER9ParamBase+0x1ee>
 81ca8d6:	8b 45 10             	mov    0x10(%ebp),%eax
 81ca8d9:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81ca8dc:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81ca8df:	0f b7 50 0d          	movzwl 0xd(%eax),%edx
 81ca8e3:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81ca8e6:	66 89 50 08          	mov    %dx,0x8(%eax)
 81ca8ea:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ca8ed:	89 04 24             	mov    %eax,(%esp)
 81ca8f0:	e8 97 fa f0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81ca8f5:	83 f8 05             	cmp    $0x5,%eax
 81ca8f8:	74 0e                	je     81ca908 <_ZN18DisPatcher_UseCoin7processEP5CUserR8MSG_BASER9ParamBase+0xb6>
 81ca8fa:	83 f8 08             	cmp    $0x8,%eax
 81ca8fd:	0f 84 e4 00 00 00    	je     81ca9e7 <_ZN18DisPatcher_UseCoin7processEP5CUserR8MSG_BASER9ParamBase+0x195>
 81ca903:	e9 33 01 00 00       	jmp    81caa3b <_ZN18DisPatcher_UseCoin7processEP5CUserR8MSG_BASER9ParamBase+0x1e9>
 81ca908:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ca90b:	89 04 24             	mov    %eax,(%esp)
 81ca90e:	e8 39 a8 48 00       	call   865514c <_ZN5CUser8GetPartyEv>
 81ca913:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81ca916:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 81ca91a:	75 30                	jne    81ca94c <_ZN18DisPatcher_UseCoin7processEP5CUserR8MSG_BASER9ParamBase+0xfa>
 81ca91c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ca91f:	89 04 24             	mov    %eax,(%esp)
 81ca922:	e8 47 fa f0 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81ca927:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81ca92b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81ca932:	00 
 81ca933:	c7 44 24 04 a0 52 bd 	movl   $0x8bd52a0,0x4(%esp)
 81ca93a:	08 
 81ca93b:	c7 04 24 5a 1f 00 00 	movl   $0x1f5a,(%esp)
 81ca942:	e8 90 5f 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81ca947:	e9 f4 00 00 00       	jmp    81caa40 <_ZN18DisPatcher_UseCoin7processEP5CUserR8MSG_BASER9ParamBase+0x1ee>
 81ca94c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81ca953:	00 
 81ca954:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81ca957:	89 04 24             	mov    %eax,(%esp)
 81ca95a:	e8 3b 3a 3f 00       	call   85be39a <_ZN6CParty25checkFreeRevivalConditionEPK8CDungeon>
 81ca95f:	88 45 f7             	mov    %al,-0x9(%ebp)
 81ca962:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 81ca966:	83 f0 01             	xor    $0x1,%eax
 81ca969:	84 c0                	test   %al,%al
 81ca96b:	0f 84 c9 00 00 00    	je     81caa3a <_ZN18DisPatcher_UseCoin7processEP5CUserR8MSG_BASER9ParamBase+0x1e8>
 81ca971:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ca974:	89 04 24             	mov    %eax,(%esp)
 81ca977:	e8 12 f9 f0 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 81ca97c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81ca983:	00 
 81ca984:	89 04 24             	mov    %eax,(%esp)
 81ca987:	e8 0c 01 33 00       	call   84faa98 <_ZN10CInventory7UseCoinE14eCoinSubReason>
 81ca98c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ca98f:	89 04 24             	mov    %eax,(%esp)
 81ca992:	e8 c7 00 f8 ff       	call   814aa5e <_ZN5CUser18getCurCharacQuestWEv>
 81ca997:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81ca99e:	00 
 81ca99f:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81ca9a6:	00 
 81ca9a7:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 81ca9ae:	00 
 81ca9af:	89 04 24             	mov    %eax,(%esp)
 81ca9b2:	e8 f9 13 4e 00       	call   86abdb0 <_ZN9UserQuest15set_authen_dataE15QUEST_CONDITIONii>
 81ca9b7:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81ca9ba:	89 04 24             	mov    %eax,(%esp)
 81ca9bd:	e8 0c 2f 06 00       	call   822d8ce <_ZN6CParty21IncreaseUsedCoinCountEv>
 81ca9c2:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81ca9c9:	00 
 81ca9ca:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81ca9d1:	00 
 81ca9d2:	c7 44 24 04 25 00 00 	movl   $0x25,0x4(%esp)
 81ca9d9:	00 
 81ca9da:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ca9dd:	89 04 24             	mov    %eax,(%esp)
 81ca9e0:	e8 ab 79 f5 ff       	call   8122390 <_ZN8APSystem9CUserProc24ClearActionAndSendtoUserEP5CUserNS_17_ActionGroupIndexEi16ENUM_PACKETCLASS>
 81ca9e5:	eb 54                	jmp    81caa3b <_ZN18DisPatcher_UseCoin7processEP5CUserR8MSG_BASER9ParamBase+0x1e9>
 81ca9e7:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ca9ea:	89 04 24             	mov    %eax,(%esp)
 81ca9ed:	e8 9c f8 f0 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 81ca9f2:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 81ca9f9:	00 
 81ca9fa:	89 04 24             	mov    %eax,(%esp)
 81ca9fd:	e8 96 00 33 00       	call   84faa98 <_ZN10CInventory7UseCoinE14eCoinSubReason>
 81caa02:	8b 45 0c             	mov    0xc(%ebp),%eax
 81caa05:	89 04 24             	mov    %eax,(%esp)
 81caa08:	e8 51 00 f8 ff       	call   814aa5e <_ZN5CUser18getCurCharacQuestWEv>
 81caa0d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81caa14:	00 
 81caa15:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81caa1c:	00 
 81caa1d:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 81caa24:	00 
 81caa25:	89 04 24             	mov    %eax,(%esp)
 81caa28:	e8 83 13 4e 00       	call   86abdb0 <_ZN9UserQuest15set_authen_dataE15QUEST_CONDITIONii>
 81caa2d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81caa30:	89 04 24             	mov    %eax,(%esp)
 81caa33:	e8 f2 5d 06 00       	call   823082a <_ZN5CUser21IncreaseUsedCoinCountEv>
 81caa38:	eb 01                	jmp    81caa3b <_ZN18DisPatcher_UseCoin7processEP5CUserR8MSG_BASER9ParamBase+0x1e9>
 81caa3a:	90                   	nop
 81caa3b:	b8 00 00 00 00       	mov    $0x0,%eax
 81caa40:	c9                   	leave
 81caa41:	c3                   	ret

```

```c
// DisPatcher_UseCoin::process @ 0x81ca852

/* DisPatcher_UseCoin::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
DisPatcher_UseCoin::process
          (DisPatcher_UseCoin *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  CParty *this_00;
  CInventory *pCVar5;
  UserQuest *pUVar6;
  MSG_BASE *pMVar7;
  ParamBase *pPVar8;
  
  pMVar7 = param_2;
  pPVar8 = param_3;
  uVar2 = check_error((CUser *)this,(MSG_BASE *)param_1,(ParamBase *)param_2);
  *(undefined4 *)(param_3 + 4) = uVar2;
  if (*(int *)(param_3 + 4) < 1) {
    if (*(int *)(param_3 + 4) < 0) {
      uVar3 = CUser::get_acc_id(param_1);
      uVar2 = LineFunc(0x1f4d,
                       "virtual int DisPatcher_UseCoin::process(CUser*, MSG_BASE&, ParamBase&)",
                       *(int *)(param_3 + 4),uVar3);
    }
    else {
      *(undefined2 *)(param_3 + 8) = *(undefined2 *)(param_2 + 0xd);
      iVar4 = CUser::get_state(param_1);
      if (iVar4 == 5) {
        this_00 = (CParty *)CUser::GetParty(param_1);
        if (this_00 == (CParty *)0x0) {
          uVar3 = CUser::get_acc_id(param_1);
          uVar2 = LineFunc(0x1f5a,
                           "virtual int DisPatcher_UseCoin::process(CUser*, MSG_BASE&, ParamBase&)",
                           0,uVar3);
          return uVar2;
        }
        cVar1 = CParty::checkFreeRevivalCondition(this_00,(CDungeon *)0x0);
        if (cVar1 != '\x01') {
          pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
          CInventory::UseCoin(pCVar5,0);
          pUVar6 = (UserQuest *)CUser::getCurCharacQuestW(param_1);
          UserQuest::set_authen_data(pUVar6,3,1,0);
          CParty::IncreaseUsedCoinCount(this_00);
          APSystem::CUserProc::ClearActionAndSendtoUser(param_1,0x25,0,0);
        }
      }
      else if (iVar4 == 8) {
        pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
        CInventory::UseCoin(pCVar5,4,pMVar7,pPVar8);
        pUVar6 = (UserQuest *)CUser::getCurCharacQuestW(param_1);
        UserQuest::set_authen_data(pUVar6,3,1,0);
        CUser::IncreaseUsedCoinCount(param_1);
      }
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## read

```asm
// === 081ca5e4 DisPatcher_UseCoin::read  [0x081ca5e4-0x81ca639] ===
 81ca5e4:	55                   	push   %ebp
 81ca5e5:	89 e5                	mov    %esp,%ebp
 81ca5e7:	83 ec 28             	sub    $0x28,%esp
 81ca5ea:	8b 45 10             	mov    0x10(%ebp),%eax
 81ca5ed:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81ca5f0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81ca5f3:	83 c0 0d             	add    $0xd,%eax
 81ca5f6:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ca5fa:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ca5fd:	89 04 24             	mov    %eax,(%esp)
 81ca600:	e8 ab 2a 3c 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 81ca605:	83 f0 01             	xor    $0x1,%eax
 81ca608:	84 c0                	test   %al,%al
 81ca60a:	74 26                	je     81ca632 <_ZN18DisPatcher_UseCoin4readER9PacketBufR8MSG_BASE+0x4e>
 81ca60c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81ca613:	00 
 81ca614:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81ca61b:	00 
 81ca61c:	c7 44 24 04 00 53 bd 	movl   $0x8bd5300,0x4(%esp)
 81ca623:	08 
 81ca624:	c7 04 24 bb 1e 00 00 	movl   $0x1ebb,(%esp)
 81ca62b:	e8 a7 62 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81ca630:	eb 05                	jmp    81ca637 <_ZN18DisPatcher_UseCoin4readER9PacketBufR8MSG_BASE+0x53>
 81ca632:	b8 00 00 00 00       	mov    $0x0,%eax
 81ca637:	c9                   	leave
 81ca638:	c3                   	ret
 81ca639:	90                   	nop

```

```c
// DisPatcher_UseCoin::read @ 0x81ca5e4

/* DisPatcher_UseCoin::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
DisPatcher_UseCoin::read(DisPatcher_UseCoin *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    uVar2 = 0;
  }
  else {
    uVar2 = LineFunc(0x1ebb,"virtual int DisPatcher_UseCoin::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}

```

---

## send

```asm
// === 081caa42 DisPatcher_UseCoin::send  [0x081caa42-0x81cab39] ===
 81caa42:	55                   	push   %ebp
 81caa43:	89 e5                	mov    %esp,%ebp
 81caa45:	56                   	push   %esi
 81caa46:	53                   	push   %ebx
 81caa47:	83 ec 20             	sub    $0x20,%esp
 81caa4a:	8b 45 10             	mov    0x10(%ebp),%eax
 81caa4d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81caa50:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81caa53:	8b 40 04             	mov    0x4(%eax),%eax
 81caa56:	3d ff ff ff 7f       	cmp    $0x7fffffff,%eax
 81caa5b:	0f 84 d1 00 00 00    	je     81cab32 <_ZN18DisPatcher_UseCoin4sendEP5CUserR9ParamBase+0xf0>
 81caa61:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81caa64:	8b 40 04             	mov    0x4(%eax),%eax
 81caa67:	85 c0                	test   %eax,%eax
 81caa69:	0f 85 a1 00 00 00    	jne    81cab10 <_ZN18DisPatcher_UseCoin4sendEP5CUserR9ParamBase+0xce>
 81caa6f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81caa72:	89 04 24             	mov    %eax,(%esp)
 81caa75:	e8 d2 32 3c 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81caa7a:	c7 44 24 08 2c 00 00 	movl   $0x2c,0x8(%esp)
 81caa81:	00 
 81caa82:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81caa89:	00 
 81caa8a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81caa8d:	89 04 24             	mov    %eax,(%esp)
 81caa90:	e8 67 0e f0 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81caa95:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81caa9c:	00 
 81caa9d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81caaa0:	89 04 24             	mov    %eax,(%esp)
 81caaa3:	e8 78 0e f0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81caaa8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81caaab:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 81caaaf:	0f b7 c0             	movzwl %ax,%eax
 81caab2:	89 44 24 04          	mov    %eax,0x4(%esp)
 81caab6:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81caab9:	89 04 24             	mov    %eax,(%esp)
 81caabc:	e8 e3 f3 f0 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 81caac1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81caac8:	00 
 81caac9:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81caacc:	89 04 24             	mov    %eax,(%esp)
 81caacf:	e8 84 0e f0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81caad4:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81caad7:	89 44 24 04          	mov    %eax,0x4(%esp)
 81caadb:	8b 45 0c             	mov    0xc(%ebp),%eax
 81caade:	89 04 24             	mov    %eax,(%esp)
 81caae1:	e8 d4 da 47 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81caae6:	eb 1b                	jmp    81cab03 <_ZN18DisPatcher_UseCoin4sendEP5CUserR9ParamBase+0xc1>
 81caae8:	89 d3                	mov    %edx,%ebx
 81caaea:	89 c6                	mov    %eax,%esi
 81caaec:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81caaef:	89 04 24             	mov    %eax,(%esp)
 81caaf2:	e8 89 33 3c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81caaf7:	89 f0                	mov    %esi,%eax
 81caaf9:	89 da                	mov    %ebx,%edx
 81caafb:	89 04 24             	mov    %eax,(%esp)
 81caafe:	e8 4d 8c 91 00       	call   8ae3750 <_Unwind_Resume>
 81cab03:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81cab06:	89 04 24             	mov    %eax,(%esp)
 81cab09:	e8 72 33 3c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81cab0e:	eb 23                	jmp    81cab33 <_ZN18DisPatcher_UseCoin4sendEP5CUserR9ParamBase+0xf1>
 81cab10:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cab13:	8b 40 04             	mov    0x4(%eax),%eax
 81cab16:	0f b6 c0             	movzbl %al,%eax
 81cab19:	89 44 24 08          	mov    %eax,0x8(%esp)
 81cab1d:	c7 44 24 04 2c 00 00 	movl   $0x2c,0x4(%esp)
 81cab24:	00 
 81cab25:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cab28:	89 04 24             	mov    %eax,(%esp)
 81cab2b:	e8 12 14 4b 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81cab30:	eb 01                	jmp    81cab33 <_ZN18DisPatcher_UseCoin4sendEP5CUserR9ParamBase+0xf1>
 81cab32:	90                   	nop
 81cab33:	83 c4 20             	add    $0x20,%esp
 81cab36:	5b                   	pop    %ebx
 81cab37:	5e                   	pop    %esi
 81cab38:	5d                   	pop    %ebp
 81cab39:	c3                   	ret

```

```c
// DisPatcher_UseCoin::send @ 0x81caa42

/* DisPatcher_UseCoin::send(CUser*, ParamBase&) */

void __thiscall DisPatcher_UseCoin::send(DisPatcher_UseCoin *this,CUser *param_1,ParamBase *param_2)

{
  PacketGuard local_1c [12];
  ParamBase *local_10;
  
  local_10 = param_2;
  if (*(int *)(param_2 + 4) != 0x7fffffff) {
    if (*(int *)(param_2 + 4) == 0) {
      PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 081caa90 to 081caae5 has its CatchHandler @ 081caae8 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x2c);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,(uint)*(ushort *)(local_10 + 8));
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
      CUser::Send(param_1,local_1c);
      PacketGuard::~PacketGuard(local_1c);
    }
    else {
      CUser::SendCmdErrorPacket(param_1,0x2c,*(uint *)(param_2 + 4) & 0xff);
    }
  }
  return;
}

```

---

## usedCoinDungeonCheck

```asm
// === 081cab3a DisPatcher_UseCoin::usedCoinDungeonCheck  [0x081cab3a-0x81cac5d] ===
 81cab3a:	55                   	push   %ebp
 81cab3b:	89 e5                	mov    %esp,%ebp
 81cab3d:	83 ec 38             	sub    $0x38,%esp
 81cab40:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81cab44:	75 0a                	jne    81cab50 <_ZN18DisPatcher_UseCoin20usedCoinDungeonCheckEP5CUserP6CParty+0x16>
 81cab46:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81cab4b:	e9 0c 01 00 00       	jmp    81cac5c <_ZN18DisPatcher_UseCoin20usedCoinDungeonCheckEP5CUserP6CParty+0x122>
 81cab50:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 81cab54:	75 0a                	jne    81cab60 <_ZN18DisPatcher_UseCoin20usedCoinDungeonCheckEP5CUserP6CParty+0x26>
 81cab56:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81cab5b:	e9 fc 00 00 00       	jmp    81cac5c <_ZN18DisPatcher_UseCoin20usedCoinDungeonCheckEP5CUserP6CParty+0x122>
 81cab60:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cab63:	89 04 24             	mov    %eax,(%esp)
 81cab66:	e8 17 20 4b 00       	call   867cb82 <_ZN5CUser22getPlayingDungeonIndexEv>
 81cab6b:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81cab6e:	83 7d ec ff          	cmpl   $0xffffffff,-0x14(%ebp)
 81cab72:	75 13                	jne    81cab87 <_ZN18DisPatcher_UseCoin20usedCoinDungeonCheckEP5CUserP6CParty+0x4d>
 81cab74:	8b 45 10             	mov    0x10(%ebp),%eax
 81cab77:	05 24 0b 00 00       	add    $0xb24,%eax
 81cab7c:	89 04 24             	mov    %eax,(%esp)
 81cab7f:	e8 54 25 06 00       	call   822d0d8 <_ZN13CBattle_Field17get_dungeon_indexEv>
 81cab84:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81cab87:	e8 0f 16 f0 ff       	call   80cc19b <_Z14G_CDataManagerv>
 81cab8c:	8b 55 ec             	mov    -0x14(%ebp),%edx
 81cab8f:	89 54 24 04          	mov    %edx,0x4(%esp)
 81cab93:	89 04 24             	mov    %eax,(%esp)
 81cab96:	e8 5d 4e 19 00       	call   835f9f8 <_ZNK12CDataManager12find_dungeonEi>
 81cab9b:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81cab9e:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 81caba2:	75 3b                	jne    81cabdf <_ZN18DisPatcher_UseCoin20usedCoinDungeonCheckEP5CUserP6CParty+0xa5>
 81caba4:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81cabab:	00 
 81cabac:	c7 44 24 10 60 17 bc 	movl   $0x8bc1760,0x10(%esp)
 81cabb3:	08 
 81cabb4:	c7 44 24 0c a9 1f 00 	movl   $0x1fa9,0xc(%esp)
 81cabbb:	00 
 81cabbc:	c7 44 24 08 60 52 bd 	movl   $0x8bd5260,0x8(%esp)
 81cabc3:	08 
 81cabc4:	c7 44 24 04 64 14 bc 	movl   $0x8bc1464,0x4(%esp)
 81cabcb:	08 
 81cabcc:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 81cabd3:	e8 32 90 90 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 81cabd8:	b8 ff ff ff 7f       	mov    $0x7fffffff,%eax
 81cabdd:	eb 7d                	jmp    81cac5c <_ZN18DisPatcher_UseCoin20usedCoinDungeonCheckEP5CUserP6CParty+0x122>
 81cabdf:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81cabe2:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cabe6:	8b 45 10             	mov    0x10(%ebp),%eax
 81cabe9:	89 04 24             	mov    %eax,(%esp)
 81cabec:	e8 a9 37 3f 00       	call   85be39a <_ZN6CParty25checkFreeRevivalConditionEPK8CDungeon>
 81cabf1:	84 c0                	test   %al,%al
 81cabf3:	74 07                	je     81cabfc <_ZN18DisPatcher_UseCoin20usedCoinDungeonCheckEP5CUserP6CParty+0xc2>
 81cabf5:	b8 00 00 00 00       	mov    $0x0,%eax
 81cabfa:	eb 60                	jmp    81cac5c <_ZN18DisPatcher_UseCoin20usedCoinDungeonCheckEP5CUserP6CParty+0x122>
 81cabfc:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cabff:	89 04 24             	mov    %eax,(%esp)
 81cac02:	e8 77 f6 f0 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 81cac07:	89 04 24             	mov    %eax,(%esp)
 81cac0a:	e8 87 2a 06 00       	call   822d696 <_ZNK10CInventory12IsCoinUsableEv>
 81cac0f:	84 c0                	test   %al,%al
 81cac11:	74 3d                	je     81cac50 <_ZN18DisPatcher_UseCoin20usedCoinDungeonCheckEP5CUserP6CParty+0x116>
 81cac13:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81cac16:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cac1a:	8b 45 10             	mov    0x10(%ebp),%eax
 81cac1d:	89 04 24             	mov    %eax,(%esp)
 81cac20:	e8 89 38 3f 00       	call   85be4ae <_ZN6CParty29checkUnLimitUsedCoinConditionEPK8CDungeon>
 81cac25:	84 c0                	test   %al,%al
 81cac27:	74 07                	je     81cac30 <_ZN18DisPatcher_UseCoin20usedCoinDungeonCheckEP5CUserP6CParty+0xf6>
 81cac29:	b8 00 00 00 00       	mov    $0x0,%eax
 81cac2e:	eb 2c                	jmp    81cac5c <_ZN18DisPatcher_UseCoin20usedCoinDungeonCheckEP5CUserP6CParty+0x122>
 81cac30:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81cac33:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cac37:	8b 45 10             	mov    0x10(%ebp),%eax
 81cac3a:	89 04 24             	mov    %eax,(%esp)
 81cac3d:	e8 2a 39 3f 00       	call   85be56c <_ZN6CParty27checkLimitUsedCoinConditionEPK8CDungeon>
 81cac42:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81cac45:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81cac49:	74 0c                	je     81cac57 <_ZN18DisPatcher_UseCoin20usedCoinDungeonCheckEP5CUserP6CParty+0x11d>
 81cac4b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cac4e:	eb 0c                	jmp    81cac5c <_ZN18DisPatcher_UseCoin20usedCoinDungeonCheckEP5CUserP6CParty+0x122>
 81cac50:	b8 11 00 00 00       	mov    $0x11,%eax
 81cac55:	eb 05                	jmp    81cac5c <_ZN18DisPatcher_UseCoin20usedCoinDungeonCheckEP5CUserP6CParty+0x122>
 81cac57:	b8 00 00 00 00       	mov    $0x0,%eax
 81cac5c:	c9                   	leave
 81cac5d:	c3                   	ret

```

```c
// DisPatcher_UseCoin::usedCoinDungeonCheck @ 0x81cab3a

/* DisPatcher_UseCoin::usedCoinDungeonCheck(CUser*, CParty*) */

int __thiscall
DisPatcher_UseCoin::usedCoinDungeonCheck(DisPatcher_UseCoin *this,CUser *param_1,CParty *param_2)

{
  char cVar1;
  int iVar2;
  CDungeon *pCVar3;
  CInventory *this_00;
  
  if (param_1 == (CUser *)0x0) {
    iVar2 = -1;
  }
  else if (param_2 == (CParty *)0x0) {
    iVar2 = -1;
  }
  else {
    iVar2 = CUser::getPlayingDungeonIndex(param_1);
    if (iVar2 == -1) {
      CBattle_Field::get_dungeon_index((CBattle_Field *)(param_2 + 0xb24));
    }
    iVar2 = G_CDataManager();
    pCVar3 = (CDungeon *)CDataManager::find_dungeon(iVar2);
    if (pCVar3 == (CDungeon *)0x0) {
      LogManager::logFormat
                (1,"PacketDispatcher_Impl_1.cpp",
                 "int DisPatcher_UseCoin::usedCoinDungeonCheck(CUser*, CParty*)",0x1fa9,
                 "DisPatcher_UseCoin G_CDataManager()->find_dungeon( %d) fail",0);
      iVar2 = 0x7fffffff;
    }
    else {
      cVar1 = CParty::checkFreeRevivalCondition(param_2,pCVar3);
      if (cVar1 == '\0') {
        this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
        cVar1 = CInventory::IsCoinUsable(this_00);
        if (cVar1 == '\0') {
          iVar2 = 0x11;
        }
        else {
          cVar1 = CParty::checkUnLimitUsedCoinCondition(param_2,pCVar3);
          if (cVar1 == '\0') {
            iVar2 = CParty::checkLimitUsedCoinCondition(param_2,pCVar3);
            if (iVar2 == 0) {
              iVar2 = 0;
            }
          }
          else {
            iVar2 = 0;
          }
        }
      }
      else {
        iVar2 = 0;
      }
    }
  }
  return iVar2;
}

```

