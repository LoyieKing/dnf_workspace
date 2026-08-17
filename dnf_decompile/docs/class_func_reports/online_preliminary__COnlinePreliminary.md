# online_preliminary__COnlinePreliminary

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 55

---

## COnlinePreliminary

```asm
// === 0855fefe online_preliminary::COnlinePreliminary::COnlinePreliminary  [0x0855fefe-0x855ffd5] ===
 855fefe:	55                   	push   %ebp
 855feff:	89 e5                	mov    %esp,%ebp
 855ff01:	57                   	push   %edi
 855ff02:	56                   	push   %esi
 855ff03:	53                   	push   %ebx
 855ff04:	83 ec 1c             	sub    $0x1c,%esp
 855ff07:	8b 45 08             	mov    0x8(%ebp),%eax
 855ff0a:	89 04 24             	mov    %eax,(%esp)
 855ff0d:	e8 86 8a 00 00       	call   8568998 <_ZN6IMatchC1Ev>
 855ff12:	8b 45 08             	mov    0x8(%ebp),%eax
 855ff15:	c7 00 88 3c ca 08    	movl   $0x8ca3c88,(%eax)
 855ff1b:	8b 45 08             	mov    0x8(%ebp),%eax
 855ff1e:	83 c0 08             	add    $0x8,%eax
 855ff21:	89 04 24             	mov    %eax,(%esp)
 855ff24:	e8 ed 8f 00 00       	call   8568f16 <_ZN13PVP_ROOM_INFOC1Ev>
 855ff29:	a1 3c e1 43 09       	mov    0x943e13c,%eax
 855ff2e:	85 c0                	test   %eax,%eax
 855ff30:	75 5c                	jne    855ff8e <_ZN18online_preliminary18COnlinePreliminaryC1Ev+0x90>
 855ff32:	c7 04 24 1c 00 00 00 	movl   $0x1c,(%esp)
 855ff39:	e8 12 45 1c 00       	call   8724450 <_Znwj>
 855ff3e:	89 c3                	mov    %eax,%ebx
 855ff40:	89 d8                	mov    %ebx,%eax
 855ff42:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 855ff48:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 855ff4f:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 855ff56:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
 855ff5d:	c7 40 14 00 00 00 00 	movl   $0x0,0x14(%eax)
 855ff64:	c7 40 18 00 00 00 00 	movl   $0x0,0x18(%eax)
 855ff6b:	89 04 24             	mov    %eax,(%esp)
 855ff6e:	e8 3d 90 00 00       	call   8568fb0 <_ZN20CLeagueMatchRoomListC1Ev>
 855ff73:	eb 12                	jmp    855ff87 <_ZN18online_preliminary18COnlinePreliminaryC1Ev+0x89>
 855ff75:	89 d6                	mov    %edx,%esi
 855ff77:	89 c7                	mov    %eax,%edi
 855ff79:	89 1c 24             	mov    %ebx,(%esp)
 855ff7c:	e8 6f 45 1c 00       	call   87244f0 <_ZdlPv>
 855ff81:	89 f8                	mov    %edi,%eax
 855ff83:	89 f2                	mov    %esi,%edx
 855ff85:	eb 1c                	jmp    855ffa3 <_ZN18online_preliminary18COnlinePreliminaryC1Ev+0xa5>
 855ff87:	89 d8                	mov    %ebx,%eax
 855ff89:	a3 3c e1 43 09       	mov    %eax,0x943e13c
 855ff8e:	a1 40 e1 43 09       	mov    0x943e140,%eax
 855ff93:	83 c0 01             	add    $0x1,%eax
 855ff96:	a3 40 e1 43 09       	mov    %eax,0x943e140
 855ff9b:	83 c4 1c             	add    $0x1c,%esp
 855ff9e:	5b                   	pop    %ebx
 855ff9f:	5e                   	pop    %esi
 855ffa0:	5f                   	pop    %edi
 855ffa1:	5d                   	pop    %ebp
 855ffa2:	c3                   	ret
 855ffa3:	89 d3                	mov    %edx,%ebx
 855ffa5:	89 c6                	mov    %eax,%esi
 855ffa7:	8b 45 08             	mov    0x8(%ebp),%eax
 855ffaa:	83 c0 08             	add    $0x8,%eax
 855ffad:	89 04 24             	mov    %eax,(%esp)
 855ffb0:	e8 a7 8f 00 00       	call   8568f5c <_ZN13PVP_ROOM_INFOD1Ev>
 855ffb5:	89 f0                	mov    %esi,%eax
 855ffb7:	89 da                	mov    %ebx,%edx
 855ffb9:	eb 00                	jmp    855ffbb <_ZN18online_preliminary18COnlinePreliminaryC1Ev+0xbd>
 855ffbb:	89 d3                	mov    %edx,%ebx
 855ffbd:	89 c6                	mov    %eax,%esi
 855ffbf:	8b 45 08             	mov    0x8(%ebp),%eax
 855ffc2:	89 04 24             	mov    %eax,(%esp)
 855ffc5:	e8 9a 86 00 00       	call   8568664 <_ZN6IMatchD1Ev>
 855ffca:	89 f0                	mov    %esi,%eax
 855ffcc:	89 da                	mov    %ebx,%edx
 855ffce:	89 04 24             	mov    %eax,(%esp)
 855ffd1:	e8 7a 37 58 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// online_preliminary::COnlinePreliminary::COnlinePreliminary @ 0x855fefe

/* online_preliminary::COnlinePreliminary::COnlinePreliminary() */

void __thiscall online_preliminary::COnlinePreliminary::COnlinePreliminary(COnlinePreliminary *this)

{
  CLeagueMatchRoomList *this_00;
  
  IMatch::IMatch((IMatch *)this);
  *(undefined ***)this = &PTR__COnlinePreliminary_08ca3c88;
                    /* try { // try from 0855ff24 to 0855ff28 has its CatchHandler @ 0855ffbb */
  PVP_ROOM_INFO::PVP_ROOM_INFO((PVP_ROOM_INFO *)(this + 8));
  if (pWaitingRoomList_ == (CLeagueMatchRoomList *)0x0) {
                    /* try { // try from 0855ff39 to 0855ff3d has its CatchHandler @ 0855ffa3 */
    this_00 = operator_new(0x1c);
    *(undefined4 *)this_00 = 0;
    *(undefined4 *)(this_00 + 8) = 0;
    *(undefined4 *)(this_00 + 0xc) = 0;
    *(undefined4 *)(this_00 + 0x10) = 0;
    *(undefined4 *)(this_00 + 0x14) = 0;
    *(undefined4 *)(this_00 + 0x18) = 0;
                    /* try { // try from 0855ff6e to 0855ff72 has its CatchHandler @ 0855ff75 */
    CLeagueMatchRoomList::CLeagueMatchRoomList(this_00);
    pWaitingRoomList_ = this_00;
  }
  nWaitingRoomListRefCount_ = nWaitingRoomListRefCount_ + 1;
  return;
}

```

---

## CheckJoinable

```asm
// === 085607b2 online_preliminary::COnlinePreliminary::CheckJoinable  [0x085607b2-0x85608bb] ===
 85607b2:	55                   	push   %ebp
 85607b3:	89 e5                	mov    %esp,%ebp
 85607b5:	53                   	push   %ebx
 85607b6:	83 ec 14             	sub    $0x14,%esp
 85607b9:	8b 45 10             	mov    0x10(%ebp),%eax
 85607bc:	89 04 24             	mov    %eax,(%esp)
 85607bf:	e8 7e 02 00 00       	call   8560a42 <_ZN18online_preliminary18COnlinePreliminary28CheckUnusableEquipmentInUserEP5CUser>
 85607c4:	83 f0 01             	xor    $0x1,%eax
 85607c7:	84 c0                	test   %al,%al
 85607c9:	74 0a                	je     85607d5 <_ZN18online_preliminary18COnlinePreliminary13CheckJoinableEP8PvP_RoomP5CUser+0x23>
 85607cb:	b8 01 00 00 00       	mov    $0x1,%eax
 85607d0:	e9 e0 00 00 00       	jmp    85608b5 <_ZN18online_preliminary18COnlinePreliminary13CheckJoinableEP8PvP_RoomP5CUser+0x103>
 85607d5:	8b 45 0c             	mov    0xc(%ebp),%eax
 85607d8:	89 04 24             	mov    %eax,(%esp)
 85607db:	e8 c0 60 07 00       	call   85d68a0 <_ZN8PvP_Room16get_player_countEv>
 85607e0:	89 c3                	mov    %eax,%ebx
 85607e2:	e8 01 f7 ff ff       	call   855fee8 <_ZN18online_preliminary18COnlinePreliminary22GetPlayCountPerOneTeamEv>
 85607e7:	0f b6 c0             	movzbl %al,%eax
 85607ea:	01 c0                	add    %eax,%eax
 85607ec:	39 c3                	cmp    %eax,%ebx
 85607ee:	0f 9d c0             	setge  %al
 85607f1:	84 c0                	test   %al,%al
 85607f3:	74 0a                	je     85607ff <_ZN18online_preliminary18COnlinePreliminary13CheckJoinableEP8PvP_RoomP5CUser+0x4d>
 85607f5:	b8 04 00 00 00       	mov    $0x4,%eax
 85607fa:	e9 b6 00 00 00       	jmp    85608b5 <_ZN18online_preliminary18COnlinePreliminary13CheckJoinableEP8PvP_RoomP5CUser+0x103>
 85607ff:	8b 45 08             	mov    0x8(%ebp),%eax
 8560802:	83 c0 1c             	add    $0x1c,%eax
 8560805:	89 04 24             	mov    %eax,(%esp)
 8560808:	e8 9d f6 ff ff       	call   855feaa <_ZNK14TeamInfoSecond4sizeEv>
 856080d:	89 c3                	mov    %eax,%ebx
 856080f:	8b 45 08             	mov    0x8(%ebp),%eax
 8560812:	83 c0 44             	add    $0x44,%eax
 8560815:	89 04 24             	mov    %eax,(%esp)
 8560818:	e8 8d f6 ff ff       	call   855feaa <_ZNK14TeamInfoSecond4sizeEv>
 856081d:	01 c3                	add    %eax,%ebx
 856081f:	e8 c4 f6 ff ff       	call   855fee8 <_ZN18online_preliminary18COnlinePreliminary22GetPlayCountPerOneTeamEv>
 8560824:	0f b6 c0             	movzbl %al,%eax
 8560827:	01 c0                	add    %eax,%eax
 8560829:	39 c3                	cmp    %eax,%ebx
 856082b:	0f 9f c0             	setg   %al
 856082e:	84 c0                	test   %al,%al
 8560830:	74 07                	je     8560839 <_ZN18online_preliminary18COnlinePreliminary13CheckJoinableEP8PvP_RoomP5CUser+0x87>
 8560832:	b8 04 00 00 00       	mov    $0x4,%eax
 8560837:	eb 7c                	jmp    85608b5 <_ZN18online_preliminary18COnlinePreliminary13CheckJoinableEP8PvP_RoomP5CUser+0x103>
 8560839:	8b 45 08             	mov    0x8(%ebp),%eax
 856083c:	8b 40 04             	mov    0x4(%eax),%eax
 856083f:	83 f8 05             	cmp    $0x5,%eax
 8560842:	77 6c                	ja     85608b0 <_ZN18online_preliminary18COnlinePreliminary13CheckJoinableEP8PvP_RoomP5CUser+0xfe>
 8560844:	8b 04 85 0c 23 ca 08 	mov    0x8ca230c(,%eax,4),%eax
 856084b:	ff e0                	jmp    *%eax
 856084d:	8b 45 10             	mov    0x10(%ebp),%eax
 8560850:	89 44 24 08          	mov    %eax,0x8(%esp)
 8560854:	8b 45 0c             	mov    0xc(%ebp),%eax
 8560857:	89 44 24 04          	mov    %eax,0x4(%esp)
 856085b:	8b 45 08             	mov    0x8(%ebp),%eax
 856085e:	89 04 24             	mov    %eax,(%esp)
 8560861:	e8 7a fe ff ff       	call   85606e0 <_ZN18online_preliminary18COnlinePreliminary14_CheckSameTeamEP8PvP_RoomP5CUser>
 8560866:	83 f0 01             	xor    $0x1,%eax
 8560869:	84 c0                	test   %al,%al
 856086b:	74 07                	je     8560874 <_ZN18online_preliminary18COnlinePreliminary13CheckJoinableEP8PvP_RoomP5CUser+0xc2>
 856086d:	b8 04 00 00 00       	mov    $0x4,%eax
 8560872:	eb 41                	jmp    85608b5 <_ZN18online_preliminary18COnlinePreliminary13CheckJoinableEP8PvP_RoomP5CUser+0x103>
 8560874:	8b 45 10             	mov    0x10(%ebp),%eax
 8560877:	89 44 24 08          	mov    %eax,0x8(%esp)
 856087b:	8b 45 0c             	mov    0xc(%ebp),%eax
 856087e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8560882:	8b 45 08             	mov    0x8(%ebp),%eax
 8560885:	89 04 24             	mov    %eax,(%esp)
 8560888:	e8 a9 fe ff ff       	call   8560736 <_ZN18online_preliminary18COnlinePreliminary14_CheckObserverEP8PvP_RoomP5CUser>
 856088d:	83 f0 01             	xor    $0x1,%eax
 8560890:	84 c0                	test   %al,%al
 8560892:	74 07                	je     856089b <_ZN18online_preliminary18COnlinePreliminary13CheckJoinableEP8PvP_RoomP5CUser+0xe9>
 8560894:	b8 04 00 00 00       	mov    $0x4,%eax
 8560899:	eb 1a                	jmp    85608b5 <_ZN18online_preliminary18COnlinePreliminary13CheckJoinableEP8PvP_RoomP5CUser+0x103>
 856089b:	b8 00 00 00 00       	mov    $0x0,%eax
 85608a0:	eb 13                	jmp    85608b5 <_ZN18online_preliminary18COnlinePreliminary13CheckJoinableEP8PvP_RoomP5CUser+0x103>
 85608a2:	b8 00 00 00 00       	mov    $0x0,%eax
 85608a7:	eb 0c                	jmp    85608b5 <_ZN18online_preliminary18COnlinePreliminary13CheckJoinableEP8PvP_RoomP5CUser+0x103>
 85608a9:	b8 04 00 00 00       	mov    $0x4,%eax
 85608ae:	eb 05                	jmp    85608b5 <_ZN18online_preliminary18COnlinePreliminary13CheckJoinableEP8PvP_RoomP5CUser+0x103>
 85608b0:	b8 04 00 00 00       	mov    $0x4,%eax
 85608b5:	83 c4 14             	add    $0x14,%esp
 85608b8:	5b                   	pop    %ebx
 85608b9:	5d                   	pop    %ebp
 85608ba:	c3                   	ret
 85608bb:	90                   	nop

```

```c
// online_preliminary::COnlinePreliminary::CheckJoinable @ 0x85607b2

/* online_preliminary::COnlinePreliminary::CheckJoinable(PvP_Room*, CUser*) */

undefined4 __thiscall
online_preliminary::COnlinePreliminary::CheckJoinable
          (COnlinePreliminary *this,PvP_Room *param_1,CUser *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  cVar1 = CheckUnusableEquipmentInUser(param_2);
  if (cVar1 == '\x01') {
    iVar3 = PvP_Room::get_player_count(param_1);
    uVar4 = GetPlayCountPerOneTeam();
    if (iVar3 < (int)((uVar4 & 0xff) * 2)) {
      iVar3 = TeamInfoSecond::size((TeamInfoSecond *)(this + 0x1c));
      iVar5 = TeamInfoSecond::size((TeamInfoSecond *)(this + 0x44));
      uVar4 = GetPlayCountPerOneTeam();
      if ((int)((uVar4 & 0xff) * 2) < iVar3 + iVar5) {
        uVar2 = 4;
      }
      else {
        switch(*(undefined4 *)(this + 4)) {
        case 0:
          cVar1 = _CheckSameTeam(this,param_1,param_2);
          if (cVar1 == '\x01') {
            cVar1 = _CheckObserver((PvP_Room *)this,(CUser *)param_1);
            if (cVar1 == '\x01') {
              uVar2 = 0;
            }
            else {
              uVar2 = 4;
            }
          }
          else {
            uVar2 = 4;
          }
          break;
        case 1:
        case 4:
        case 5:
          uVar2 = 4;
          break;
        default:
          uVar2 = 4;
          break;
        case 3:
          uVar2 = 0;
        }
      }
    }
    else {
      uVar2 = 4;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

```

---

## CheckMatchable

```asm
// === 085623ec online_preliminary::COnlinePreliminary::CheckMatchable  [0x085623ec-0x85624dd] ===
 85623ec:	55                   	push   %ebp
 85623ed:	89 e5                	mov    %esp,%ebp
 85623ef:	53                   	push   %ebx
 85623f0:	83 ec 24             	sub    $0x24,%esp
 85623f3:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 85623fa:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8562401:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8562408:	eb 26                	jmp    8562430 <_ZN18online_preliminary18COnlinePreliminary14CheckMatchableEP6IMatch+0x44>
 856240a:	8b 45 0c             	mov    0xc(%ebp),%eax
 856240d:	8b 00                	mov    (%eax),%eax
 856240f:	83 c0 10             	add    $0x10,%eax
 8562412:	8b 10                	mov    (%eax),%edx
 8562414:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8562417:	89 44 24 04          	mov    %eax,0x4(%esp)
 856241b:	8b 45 0c             	mov    0xc(%ebp),%eax
 856241e:	89 04 24             	mov    %eax,(%esp)
 8562421:	ff d2                	call   *%edx
 8562423:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8562426:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 856242a:	75 11                	jne    856243d <_ZN18online_preliminary18COnlinePreliminary14CheckMatchableEP6IMatch+0x51>
 856242c:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8562430:	83 7d f4 03          	cmpl   $0x3,-0xc(%ebp)
 8562434:	0f 9e c0             	setle  %al
 8562437:	84 c0                	test   %al,%al
 8562439:	75 cf                	jne    856240a <_ZN18online_preliminary18COnlinePreliminary14CheckMatchableEP6IMatch+0x1e>
 856243b:	eb 01                	jmp    856243e <_ZN18online_preliminary18COnlinePreliminary14CheckMatchableEP6IMatch+0x52>
 856243d:	90                   	nop
 856243e:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8562442:	75 0a                	jne    856244e <_ZN18online_preliminary18COnlinePreliminary14CheckMatchableEP6IMatch+0x62>
 8562444:	b8 00 00 00 00       	mov    $0x0,%eax
 8562449:	e9 8a 00 00 00       	jmp    85624d8 <_ZN18online_preliminary18COnlinePreliminary14CheckMatchableEP6IMatch+0xec>
 856244e:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8562455:	eb 26                	jmp    856247d <_ZN18online_preliminary18COnlinePreliminary14CheckMatchableEP6IMatch+0x91>
 8562457:	8b 45 08             	mov    0x8(%ebp),%eax
 856245a:	8b 00                	mov    (%eax),%eax
 856245c:	83 c0 10             	add    $0x10,%eax
 856245f:	8b 10                	mov    (%eax),%edx
 8562461:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8562464:	89 44 24 04          	mov    %eax,0x4(%esp)
 8562468:	8b 45 08             	mov    0x8(%ebp),%eax
 856246b:	89 04 24             	mov    %eax,(%esp)
 856246e:	ff d2                	call   *%edx
 8562470:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8562473:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 8562477:	75 11                	jne    856248a <_ZN18online_preliminary18COnlinePreliminary14CheckMatchableEP6IMatch+0x9e>
 8562479:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 856247d:	83 7d f4 03          	cmpl   $0x3,-0xc(%ebp)
 8562481:	0f 9e c0             	setle  %al
 8562484:	84 c0                	test   %al,%al
 8562486:	75 cf                	jne    8562457 <_ZN18online_preliminary18COnlinePreliminary14CheckMatchableEP6IMatch+0x6b>
 8562488:	eb 01                	jmp    856248b <_ZN18online_preliminary18COnlinePreliminary14CheckMatchableEP6IMatch+0x9f>
 856248a:	90                   	nop
 856248b:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 856248f:	75 07                	jne    8562498 <_ZN18online_preliminary18COnlinePreliminary14CheckMatchableEP6IMatch+0xac>
 8562491:	b8 00 00 00 00       	mov    $0x0,%eax
 8562496:	eb 40                	jmp    85624d8 <_ZN18online_preliminary18COnlinePreliminary14CheckMatchableEP6IMatch+0xec>
 8562498:	8b 45 f0             	mov    -0x10(%ebp),%eax
 856249b:	89 44 24 08          	mov    %eax,0x8(%esp)
 856249f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85624a2:	89 44 24 04          	mov    %eax,0x4(%esp)
 85624a6:	8b 45 08             	mov    0x8(%ebp),%eax
 85624a9:	89 04 24             	mov    %eax,(%esp)
 85624ac:	e8 61 dd ff ff       	call   8560212 <_ZN18online_preliminary18COnlinePreliminary22_GetEachOtherPlayCountEP5CUserS2_>
 85624b1:	89 c3                	mov    %eax,%ebx
 85624b3:	e8 e3 9c b6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 85624b8:	83 c0 68             	add    $0x68,%eax
 85624bb:	89 04 24             	mov    %eax,(%esp)
 85624be:	e8 ed 66 00 00       	call   8568bb0 <_ZN21ServerParameterScript18GetDailyMatchCountEv>
 85624c3:	39 c3                	cmp    %eax,%ebx
 85624c5:	0f 9d c0             	setge  %al
 85624c8:	84 c0                	test   %al,%al
 85624ca:	74 07                	je     85624d3 <_ZN18online_preliminary18COnlinePreliminary14CheckMatchableEP6IMatch+0xe7>
 85624cc:	b8 00 00 00 00       	mov    $0x0,%eax
 85624d1:	eb 05                	jmp    85624d8 <_ZN18online_preliminary18COnlinePreliminary14CheckMatchableEP6IMatch+0xec>
 85624d3:	b8 01 00 00 00       	mov    $0x1,%eax
 85624d8:	83 c4 24             	add    $0x24,%esp
 85624db:	5b                   	pop    %ebx
 85624dc:	5d                   	pop    %ebp
 85624dd:	c3                   	ret

```

```c
// online_preliminary::COnlinePreliminary::CheckMatchable @ 0x85623ec

/* online_preliminary::COnlinePreliminary::CheckMatchable(IMatch*) */

undefined4 __thiscall
online_preliminary::COnlinePreliminary::CheckMatchable(COnlinePreliminary *this,IMatch *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  CUser *local_18;
  CUser *local_14;
  int local_10;
  
  local_18 = (CUser *)0x0;
  local_14 = (CUser *)0x0;
  local_10 = 0;
  while ((local_10 < 4 &&
         (local_14 = (CUser *)(**(code **)(*(int *)param_1 + 0x10))(param_1,local_10),
         local_14 == (CUser *)0x0))) {
    local_10 = local_10 + 1;
  }
  if (local_14 == (CUser *)0x0) {
    uVar1 = 0;
  }
  else {
    local_10 = 0;
    while ((local_10 < 4 &&
           (local_18 = (CUser *)(**(code **)(*(int *)this + 0x10))(this,local_10),
           local_18 == (CUser *)0x0))) {
      local_10 = local_10 + 1;
    }
    if (local_18 == (CUser *)0x0) {
      uVar1 = 0;
    }
    else {
      iVar2 = _GetEachOtherPlayCount(this,local_18,local_14);
      iVar3 = G_CDataManager();
      iVar3 = ServerParameterScript::GetDailyMatchCount((ServerParameterScript *)(iVar3 + 0x68));
      if (iVar2 < iVar3) {
        uVar1 = 1;
      }
      else {
        uVar1 = 0;
      }
    }
  }
  return uVar1;
}

```

---

## CheckSeat

```asm
// === 085608bc online_preliminary::COnlinePreliminary::CheckSeat  [0x085608bc-0x85608d3] ===
 85608bc:	55                   	push   %ebp
 85608bd:	89 e5                	mov    %esp,%ebp
 85608bf:	83 7d 0c 02          	cmpl   $0x2,0xc(%ebp)
 85608c3:	75 07                	jne    85608cc <_ZN18online_preliminary18COnlinePreliminary9CheckSeatEi+0x10>
 85608c5:	b8 00 00 00 00       	mov    $0x0,%eax
 85608ca:	eb 05                	jmp    85608d1 <_ZN18online_preliminary18COnlinePreliminary9CheckSeatEi+0x15>
 85608cc:	b8 01 00 00 00       	mov    $0x1,%eax
 85608d1:	5d                   	pop    %ebp
 85608d2:	c3                   	ret
 85608d3:	90                   	nop

```

```c
// online_preliminary::COnlinePreliminary::CheckSeat @ 0x85608bc

/* online_preliminary::COnlinePreliminary::CheckSeat(int) */

bool __thiscall
online_preliminary::COnlinePreliminary::CheckSeat(COnlinePreliminary *this,int param_1)

{
  return param_1 != 2;
}

```

---

## CheckUnusableEquipment

```asm
// === 08560920 online_preliminary::COnlinePreliminary::CheckUnusableEquipment  [0x08560920-0x8560a41] ===
 8560920:	55                   	push   %ebp
 8560921:	89 e5                	mov    %esp,%ebp
 8560923:	56                   	push   %esi
 8560924:	53                   	push   %ebx
 8560925:	83 ec 20             	sub    $0x20,%esp
 8560928:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
 856092c:	75 0a                	jne    8560938 <_ZN18online_preliminary18COnlinePreliminary22CheckUnusableEquipmentEPK10Inven_Item+0x18>
 856092e:	b8 00 00 00 00       	mov    $0x0,%eax
 8560933:	e9 03 01 00 00       	jmp    8560a3b <_ZN18online_preliminary18COnlinePreliminary22CheckUnusableEquipmentEPK10Inven_Item+0x11b>
 8560938:	8b 45 08             	mov    0x8(%ebp),%eax
 856093b:	8b 40 02             	mov    0x2(%eax),%eax
 856093e:	85 c0                	test   %eax,%eax
 8560940:	75 0a                	jne    856094c <_ZN18online_preliminary18COnlinePreliminary22CheckUnusableEquipmentEPK10Inven_Item+0x2c>
 8560942:	b8 01 00 00 00       	mov    $0x1,%eax
 8560947:	e9 ef 00 00 00       	jmp    8560a3b <_ZN18online_preliminary18COnlinePreliminary22CheckUnusableEquipmentEPK10Inven_Item+0x11b>
 856094c:	8b 45 08             	mov    0x8(%ebp),%eax
 856094f:	8b 40 02             	mov    0x2(%eax),%eax
 8560952:	89 c3                	mov    %eax,%ebx
 8560954:	e8 42 b8 b6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8560959:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 856095d:	89 04 24             	mov    %eax,(%esp)
 8560960:	e8 cd f0 df ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 8560965:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8560968:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 856096c:	75 0a                	jne    8560978 <_ZN18online_preliminary18COnlinePreliminary22CheckUnusableEquipmentEPK10Inven_Item+0x58>
 856096e:	b8 00 00 00 00       	mov    $0x0,%eax
 8560973:	e9 c3 00 00 00       	jmp    8560a3b <_ZN18online_preliminary18COnlinePreliminary22CheckUnusableEquipmentEPK10Inven_Item+0x11b>
 8560978:	8b 45 f4             	mov    -0xc(%ebp),%eax
 856097b:	89 04 24             	mov    %eax,(%esp)
 856097e:	e8 77 09 b9 ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 8560983:	84 c0                	test   %al,%al
 8560985:	74 0a                	je     8560991 <_ZN18online_preliminary18COnlinePreliminary22CheckUnusableEquipmentEPK10Inven_Item+0x71>
 8560987:	b8 00 00 00 00       	mov    $0x0,%eax
 856098c:	e9 aa 00 00 00       	jmp    8560a3b <_ZN18online_preliminary18COnlinePreliminary22CheckUnusableEquipmentEPK10Inven_Item+0x11b>
 8560991:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8560994:	89 04 24             	mov    %eax,(%esp)
 8560997:	e8 9a d6 dc ff       	call   832e036 <_ZNK10CEquipItem22GetUsableEquipmentTypeEv>
 856099c:	85 c0                	test   %eax,%eax
 856099e:	0f 94 c0             	sete   %al
 85609a1:	84 c0                	test   %al,%al
 85609a3:	74 0a                	je     85609af <_ZN18online_preliminary18COnlinePreliminary22CheckUnusableEquipmentEPK10Inven_Item+0x8f>
 85609a5:	b8 01 00 00 00       	mov    $0x1,%eax
 85609aa:	e9 8c 00 00 00       	jmp    8560a3b <_ZN18online_preliminary18COnlinePreliminary22CheckUnusableEquipmentEPK10Inven_Item+0x11b>
 85609af:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85609b2:	89 04 24             	mov    %eax,(%esp)
 85609b5:	e8 34 09 b9 ff       	call   80f12ee <_ZNK5CItem14getUsableLevelEv>
 85609ba:	89 c6                	mov    %eax,%esi
 85609bc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85609bf:	89 04 24             	mov    %eax,(%esp)
 85609c2:	e8 6f d6 dc ff       	call   832e036 <_ZNK10CEquipItem22GetUsableEquipmentTypeEv>
 85609c7:	89 c3                	mov    %eax,%ebx
 85609c9:	e8 cd b7 b6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 85609ce:	83 c0 68             	add    $0x68,%eax
 85609d1:	89 74 24 08          	mov    %esi,0x8(%esp)
 85609d5:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85609d9:	89 04 24             	mov    %eax,(%esp)
 85609dc:	e8 15 81 00 00       	call   8568af6 <_ZN21ServerParameterScript26CheckUnusableEquipmentInfoE28ENUM_UNUSABLE_EQUIPMENT_TYPEi>
 85609e1:	83 f0 01             	xor    $0x1,%eax
 85609e4:	84 c0                	test   %al,%al
 85609e6:	74 07                	je     85609ef <_ZN18online_preliminary18COnlinePreliminary22CheckUnusableEquipmentEPK10Inven_Item+0xcf>
 85609e8:	b8 00 00 00 00       	mov    $0x0,%eax
 85609ed:	eb 4c                	jmp    8560a3b <_ZN18online_preliminary18COnlinePreliminary22CheckUnusableEquipmentEPK10Inven_Item+0x11b>
 85609ef:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85609f2:	89 04 24             	mov    %eax,(%esp)
 85609f5:	e8 4e 02 bb ff       	call   8110c48 <_ZNK5CItem9get_indexEv>
 85609fa:	89 c6                	mov    %eax,%esi
 85609fc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85609ff:	8b 00                	mov    (%eax),%eax
 8560a01:	83 c0 0c             	add    $0xc,%eax
 8560a04:	8b 10                	mov    (%eax),%edx
 8560a06:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8560a09:	89 04 24             	mov    %eax,(%esp)
 8560a0c:	ff d2                	call   *%edx
 8560a0e:	89 c3                	mov    %eax,%ebx
 8560a10:	e8 86 b7 b6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8560a15:	83 c0 68             	add    $0x68,%eax
 8560a18:	89 74 24 08          	mov    %esi,0x8(%esp)
 8560a1c:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8560a20:	89 04 24             	mov    %eax,(%esp)
 8560a23:	e8 96 81 00 00       	call   8568bbe <_ZNK21ServerParameterScript17CheckUnusableItemE18ENUM_EQUIPMENTTYPEm>
 8560a28:	83 f0 01             	xor    $0x1,%eax
 8560a2b:	84 c0                	test   %al,%al
 8560a2d:	74 07                	je     8560a36 <_ZN18online_preliminary18COnlinePreliminary22CheckUnusableEquipmentEPK10Inven_Item+0x116>
 8560a2f:	b8 00 00 00 00       	mov    $0x0,%eax
 8560a34:	eb 05                	jmp    8560a3b <_ZN18online_preliminary18COnlinePreliminary22CheckUnusableEquipmentEPK10Inven_Item+0x11b>
 8560a36:	b8 01 00 00 00       	mov    $0x1,%eax
 8560a3b:	83 c4 20             	add    $0x20,%esp
 8560a3e:	5b                   	pop    %ebx
 8560a3f:	5e                   	pop    %esi
 8560a40:	5d                   	pop    %ebp
 8560a41:	c3                   	ret

```

```c
// online_preliminary::COnlinePreliminary::CheckUnusableEquipment @ 0x8560920

/* online_preliminary::COnlinePreliminary::CheckUnusableEquipment(Inven_Item const*) */

undefined4 online_preliminary::COnlinePreliminary::CheckUnusableEquipment(Inven_Item *param_1)

{
  char cVar1;
  undefined4 uVar2;
  CDataManager *this;
  CItem *this_00;
  int iVar3;
  undefined4 uVar4;
  
  if (param_1 == (Inven_Item *)0x0) {
    uVar2 = 0;
  }
  else if (*(int *)(param_1 + 2) == 0) {
    uVar2 = 1;
  }
  else {
    iVar3 = *(int *)(param_1 + 2);
    this = (CDataManager *)G_CDataManager();
    this_00 = (CItem *)CDataManager::find_item(this,iVar3);
    if (this_00 == (CItem *)0x0) {
      uVar2 = 0;
    }
    else {
      cVar1 = CItem::is_stackable(this_00);
      if (cVar1 == '\0') {
        iVar3 = CEquipItem::GetUsableEquipmentType((CEquipItem *)this_00);
        if (iVar3 == 0) {
          uVar2 = 1;
        }
        else {
          uVar2 = CItem::getUsableLevel(this_00);
          uVar4 = CEquipItem::GetUsableEquipmentType((CEquipItem *)this_00);
          iVar3 = G_CDataManager();
          cVar1 = ServerParameterScript::CheckUnusableEquipmentInfo
                            ((ServerParameterScript *)(iVar3 + 0x68),uVar4,uVar2);
          if (cVar1 == '\x01') {
            uVar2 = CItem::get_index(this_00);
            uVar4 = (**(code **)(*(int *)this_00 + 0xc))(this_00);
            iVar3 = G_CDataManager();
            cVar1 = ServerParameterScript::CheckUnusableItem(iVar3 + 0x68,uVar4,uVar2);
            if (cVar1 == '\x01') {
              uVar2 = 1;
            }
            else {
              uVar2 = 0;
            }
          }
          else {
            uVar2 = 0;
          }
        }
      }
      else {
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}

```

---

## CheckUnusableEquipmentInUser

```asm
// === 08560a42 online_preliminary::COnlinePreliminary::CheckUnusableEquipmentInUser  [0x08560a42-0x8560ae3] ===
 8560a42:	55                   	push   %ebp
 8560a43:	89 e5                	mov    %esp,%ebp
 8560a45:	83 ec 28             	sub    $0x28,%esp
 8560a48:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8560a4f:	eb 7d                	jmp    8560ace <_ZN18online_preliminary18COnlinePreliminary28CheckUnusableEquipmentInUserEP5CUser+0x8c>
 8560a51:	8b 45 08             	mov    0x8(%ebp),%eax
 8560a54:	89 04 24             	mov    %eax,(%esp)
 8560a57:	e8 22 98 b7 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8560a5c:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8560a5f:	89 54 24 08          	mov    %edx,0x8(%esp)
 8560a63:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8560a6a:	00 
 8560a6b:	89 04 24             	mov    %eax,(%esp)
 8560a6e:	e8 6b b7 f9 ff       	call   84fc1de <_ZNK10CInventory11GetInvenRefEii>
 8560a73:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8560a76:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8560a79:	89 04 24             	mov    %eax,(%esp)
 8560a7c:	e8 9f fe ff ff       	call   8560920 <_ZN18online_preliminary18COnlinePreliminary22CheckUnusableEquipmentEPK10Inven_Item>
 8560a81:	83 f0 01             	xor    $0x1,%eax
 8560a84:	84 c0                	test   %al,%al
 8560a86:	74 42                	je     8560aca <_ZN18online_preliminary18COnlinePreliminary28CheckUnusableEquipmentInUserEP5CUser+0x88>
 8560a88:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8560a8f:	00 
 8560a90:	c7 44 24 08 24 23 ca 	movl   $0x8ca2324,0x8(%esp)
 8560a97:	08 
 8560a98:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8560a9f:	00 
 8560aa0:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 8560aa7:	e8 52 4d 54 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 8560aac:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8560ab3:	00 
 8560ab4:	89 44 24 04          	mov    %eax,0x4(%esp)
 8560ab8:	8b 45 08             	mov    0x8(%ebp),%eax
 8560abb:	89 04 24             	mov    %eax,(%esp)
 8560abe:	e8 0b 7c 12 00       	call   86886ce <_ZN5CUser21SendNotiPacketMessageEPKc17ENUM_MESSAGE_TYPE>
 8560ac3:	b8 00 00 00 00       	mov    $0x0,%eax
 8560ac8:	eb 18                	jmp    8560ae2 <_ZN18online_preliminary18COnlinePreliminary28CheckUnusableEquipmentInUserEP5CUser+0xa0>
 8560aca:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8560ace:	83 7d f0 16          	cmpl   $0x16,-0x10(%ebp)
 8560ad2:	0f 9e c0             	setle  %al
 8560ad5:	84 c0                	test   %al,%al
 8560ad7:	0f 85 74 ff ff ff    	jne    8560a51 <_ZN18online_preliminary18COnlinePreliminary28CheckUnusableEquipmentInUserEP5CUser+0xf>
 8560add:	b8 01 00 00 00       	mov    $0x1,%eax
 8560ae2:	c9                   	leave
 8560ae3:	c3                   	ret

```

```c
// online_preliminary::COnlinePreliminary::CheckUnusableEquipmentInUser @ 0x8560a42

/* online_preliminary::COnlinePreliminary::CheckUnusableEquipmentInUser(CUser*) */

undefined4 online_preliminary::COnlinePreliminary::CheckUnusableEquipmentInUser(CUser *param_1)

{
  char cVar1;
  CInventory *this;
  Inven_Item *pIVar2;
  undefined4 uVar3;
  int local_14;
  
  local_14 = 0;
  while( true ) {
    if (0x16 < local_14) {
      return 1;
    }
    this = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    pIVar2 = (Inven_Item *)CInventory::GetInvenRef(this,0,local_14);
    cVar1 = CheckUnusableEquipment(pIVar2);
    if (cVar1 != '\x01') break;
    local_14 = local_14 + 1;
  }
  uVar3 = RDARScriptStringManager::findString
                    ((RDARScriptStringManager *)g_scriptStringManager_,4,"game_server_msg_145",
                     (bool *)0x0);
  CUser::SendNotiPacketMessage(param_1,uVar3,0);
  return 0;
}

```

---

## GetGap

```asm
// === 08561a0e online_preliminary::COnlinePreliminary::GetGap  [0x08561a0e-0x8561a51] ===
 8561a0e:	55                   	push   %ebp
 8561a0f:	89 e5                	mov    %esp,%ebp
 8561a11:	83 ec 1c             	sub    $0x1c,%esp
 8561a14:	b8 00 00 00 00       	mov    $0x0,%eax
 8561a19:	89 45 f8             	mov    %eax,-0x8(%ebp)
 8561a1c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8561a1f:	89 45 fc             	mov    %eax,-0x4(%ebp)
 8561a22:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8561a29:	00 
 8561a2a:	8b 45 08             	mov    0x8(%ebp),%eax
 8561a2d:	89 04 24             	mov    %eax,(%esp)
 8561a30:	e8 0d e9 ff ff       	call   8560342 <_ZN18online_preliminary18COnlinePreliminary10_GetRatingE22ENUM_SCHOOL_MATCH_TEAM>
 8561a35:	d9 5d ec             	fstps  -0x14(%ebp)
 8561a38:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8561a3f:	00 
 8561a40:	8b 45 fc             	mov    -0x4(%ebp),%eax
 8561a43:	89 04 24             	mov    %eax,(%esp)
 8561a46:	e8 f7 e8 ff ff       	call   8560342 <_ZN18online_preliminary18COnlinePreliminary10_GetRatingE22ENUM_SCHOOL_MATCH_TEAM>
 8561a4b:	d8 6d ec             	fsubrs -0x14(%ebp)
 8561a4e:	d9 e1                	fabs
 8561a50:	c9                   	leave
 8561a51:	c3                   	ret

```

```c
// online_preliminary::COnlinePreliminary::GetGap @ 0x8561a0e

/* online_preliminary::COnlinePreliminary::GetGap(IMatch*) */

longdouble __thiscall
online_preliminary::COnlinePreliminary::GetGap(COnlinePreliminary *this,IMatch *param_1)

{
  longdouble lVar1;
  longdouble lVar2;
  
  lVar1 = (longdouble)_GetRating(this,0);
  lVar2 = (longdouble)_GetRating((COnlinePreliminary *)param_1,0);
  return ABS((longdouble)(float)lVar1 - lVar2);
}

```

---

## GetPlayCountPerOneTeam

```asm
// === 0855fee8 online_preliminary::COnlinePreliminary::GetPlayCountPerOneTeam  [0x0855fee8-0x855fefd] ===
 855fee8:	55                   	push   %ebp
 855fee9:	89 e5                	mov    %esp,%ebp
 855feeb:	83 ec 18             	sub    $0x18,%esp
 855feee:	e8 a8 c2 b6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 855fef3:	89 04 24             	mov    %eax,(%esp)
 855fef6:	e8 e5 8d 00 00       	call   8568ce0 <_ZN12CDataManager15GetPvPTeamCountEv>
 855fefb:	c9                   	leave
 855fefc:	c3                   	ret
 855fefd:	90                   	nop

```

```c
// online_preliminary::COnlinePreliminary::GetPlayCountPerOneTeam @ 0x855fee8

/* online_preliminary::COnlinePreliminary::GetPlayCountPerOneTeam() */

void online_preliminary::COnlinePreliminary::GetPlayCountPerOneTeam(void)

{
  CDataManager *this;
  
  this = (CDataManager *)G_CDataManager();
  CDataManager::GetPvPTeamCount(this);
  return;
}

```

---

## GetTeamId

```asm
// === 085623e0 online_preliminary::COnlinePreliminary::GetTeamId  [0x085623e0-0x85623eb] ===
 85623e0:	55                   	push   %ebp
 85623e1:	89 e5                	mov    %esp,%ebp
 85623e3:	8b 45 08             	mov    0x8(%ebp),%eax
 85623e6:	8b 40 1c             	mov    0x1c(%eax),%eax
 85623e9:	5d                   	pop    %ebp
 85623ea:	c3                   	ret
 85623eb:	90                   	nop

```

```c
// online_preliminary::COnlinePreliminary::GetTeamId @ 0x85623e0

/* online_preliminary::COnlinePreliminary::GetTeamId() */

undefined4 __thiscall online_preliminary::COnlinePreliminary::GetTeamId(COnlinePreliminary *this)

{
  return *(undefined4 *)(this + 0x1c);
}

```

---

## GetUser

```asm
// === 085620c8 online_preliminary::COnlinePreliminary::GetUser  [0x085620c8-0x8562103] ===
 85620c8:	55                   	push   %ebp
 85620c9:	89 e5                	mov    %esp,%ebp
 85620cb:	83 7d 0c 03          	cmpl   $0x3,0xc(%ebp)
 85620cf:	76 07                	jbe    85620d8 <_ZN18online_preliminary18COnlinePreliminary7GetUserEj+0x10>
 85620d1:	b8 00 00 00 00       	mov    $0x0,%eax
 85620d6:	eb 29                	jmp    8562101 <_ZN18online_preliminary18COnlinePreliminary7GetUserEj+0x39>
 85620d8:	8b 55 0c             	mov    0xc(%ebp),%edx
 85620db:	8b 45 08             	mov    0x8(%ebp),%eax
 85620de:	83 c2 02             	add    $0x2,%edx
 85620e1:	0f b6 44 d0 18       	movzbl 0x18(%eax,%edx,8),%eax
 85620e6:	83 f0 01             	xor    $0x1,%eax
 85620e9:	84 c0                	test   %al,%al
 85620eb:	74 07                	je     85620f4 <_ZN18online_preliminary18COnlinePreliminary7GetUserEj+0x2c>
 85620ed:	b8 00 00 00 00       	mov    $0x0,%eax
 85620f2:	eb 0d                	jmp    8562101 <_ZN18online_preliminary18COnlinePreliminary7GetUserEj+0x39>
 85620f4:	8b 55 0c             	mov    0xc(%ebp),%edx
 85620f7:	8b 45 08             	mov    0x8(%ebp),%eax
 85620fa:	83 c2 02             	add    $0x2,%edx
 85620fd:	8b 44 d0 14          	mov    0x14(%eax,%edx,8),%eax
 8562101:	5d                   	pop    %ebp
 8562102:	c3                   	ret
 8562103:	90                   	nop

```

```c
// online_preliminary::COnlinePreliminary::GetUser @ 0x85620c8

/* online_preliminary::COnlinePreliminary::GetUser(unsigned int) */

undefined4 __thiscall
online_preliminary::COnlinePreliminary::GetUser(COnlinePreliminary *this,uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 4) {
    if (this[(param_1 + 2) * 8 + 0x18] == (COnlinePreliminary)0x1) {
      uVar1 = *(undefined4 *)(this + (param_1 + 2) * 8 + 0x14);
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## GetUserList

```asm
// === 08562104 online_preliminary::COnlinePreliminary::GetUserList  [0x08562104-0x8562149] ===
 8562104:	55                   	push   %ebp
 8562105:	89 e5                	mov    %esp,%ebp
 8562107:	8b 45 0c             	mov    0xc(%ebp),%eax
 856210a:	8b 55 08             	mov    0x8(%ebp),%edx
 856210d:	8b 4a 1c             	mov    0x1c(%edx),%ecx
 8562110:	89 08                	mov    %ecx,(%eax)
 8562112:	8b 4a 20             	mov    0x20(%edx),%ecx
 8562115:	89 48 04             	mov    %ecx,0x4(%eax)
 8562118:	8b 4a 24             	mov    0x24(%edx),%ecx
 856211b:	89 48 08             	mov    %ecx,0x8(%eax)
 856211e:	8b 4a 28             	mov    0x28(%edx),%ecx
 8562121:	89 48 0c             	mov    %ecx,0xc(%eax)
 8562124:	8b 4a 2c             	mov    0x2c(%edx),%ecx
 8562127:	89 48 10             	mov    %ecx,0x10(%eax)
 856212a:	8b 4a 30             	mov    0x30(%edx),%ecx
 856212d:	89 48 14             	mov    %ecx,0x14(%eax)
 8562130:	8b 4a 34             	mov    0x34(%edx),%ecx
 8562133:	89 48 18             	mov    %ecx,0x18(%eax)
 8562136:	8b 4a 38             	mov    0x38(%edx),%ecx
 8562139:	89 48 1c             	mov    %ecx,0x1c(%eax)
 856213c:	8b 4a 3c             	mov    0x3c(%edx),%ecx
 856213f:	89 48 20             	mov    %ecx,0x20(%eax)
 8562142:	8b 52 40             	mov    0x40(%edx),%edx
 8562145:	89 50 24             	mov    %edx,0x24(%eax)
 8562148:	5d                   	pop    %ebp
 8562149:	c3                   	ret

```

```c
// online_preliminary::COnlinePreliminary::GetUserList @ 0x8562104

/* online_preliminary::COnlinePreliminary::GetUserList(void*) */

void __thiscall
online_preliminary::COnlinePreliminary::GetUserList(COnlinePreliminary *this,void *param_1)

{
  *(undefined4 *)param_1 = *(undefined4 *)(this + 0x1c);
  *(undefined4 *)((int)param_1 + 4) = *(undefined4 *)(this + 0x20);
  *(undefined4 *)((int)param_1 + 8) = *(undefined4 *)(this + 0x24);
  *(undefined4 *)((int)param_1 + 0xc) = *(undefined4 *)(this + 0x28);
  *(undefined4 *)((int)param_1 + 0x10) = *(undefined4 *)(this + 0x2c);
  *(undefined4 *)((int)param_1 + 0x14) = *(undefined4 *)(this + 0x30);
  *(undefined4 *)((int)param_1 + 0x18) = *(undefined4 *)(this + 0x34);
  *(undefined4 *)((int)param_1 + 0x1c) = *(undefined4 *)(this + 0x38);
  *(undefined4 *)((int)param_1 + 0x20) = *(undefined4 *)(this + 0x3c);
  *(undefined4 *)((int)param_1 + 0x24) = *(undefined4 *)(this + 0x40);
  return;
}

```

---

## OnCompleteLoad

```asm
// === 08561a70 online_preliminary::COnlinePreliminary::OnCompleteLoad  [0x08561a70-0x8561b7f] ===
 8561a70:	55                   	push   %ebp
 8561a71:	89 e5                	mov    %esp,%ebp
 8561a73:	56                   	push   %esi
 8561a74:	53                   	push   %ebx
 8561a75:	83 ec 30             	sub    $0x30,%esp
 8561a78:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8561a7b:	89 04 24             	mov    %eax,(%esp)
 8561a7e:	e8 c9 c2 02 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8561a83:	c7 44 24 08 16 01 00 	movl   $0x116,0x8(%esp)
 8561a8a:	00 
 8561a8b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8561a92:	00 
 8561a93:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8561a96:	89 04 24             	mov    %eax,(%esp)
 8561a99:	e8 5e 9e b6 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8561a9e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8561aa1:	89 04 24             	mov    %eax,(%esp)
 8561aa4:	e8 d3 88 b7 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 8561aa9:	0f b7 c0             	movzwl %ax,%eax
 8561aac:	89 44 24 04          	mov    %eax,0x4(%esp)
 8561ab0:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8561ab3:	89 04 24             	mov    %eax,(%esp)
 8561ab6:	e8 e9 83 b7 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8561abb:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8561ac2:	00 
 8561ac3:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8561ac6:	89 04 24             	mov    %eax,(%esp)
 8561ac9:	e8 8a 9e b6 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8561ace:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8561ad5:	eb 6e                	jmp    8561b45 <_ZN18online_preliminary18COnlinePreliminary14OnCompleteLoadEP5CUser+0xd5>
 8561ad7:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8561ade:	eb 56                	jmp    8561b36 <_ZN18online_preliminary18COnlinePreliminary14OnCompleteLoadEP5CUser+0xc6>
 8561ae0:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8561ae3:	8b 5d f0             	mov    -0x10(%ebp),%ebx
 8561ae6:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8561ae9:	89 d0                	mov    %edx,%eax
 8561aeb:	c1 e0 02             	shl    $0x2,%eax
 8561aee:	01 d0                	add    %edx,%eax
 8561af0:	01 d8                	add    %ebx,%eax
 8561af2:	83 c0 02             	add    $0x2,%eax
 8561af5:	8b 44 c1 14          	mov    0x14(%ecx,%eax,8),%eax
 8561af9:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8561afc:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8561aff:	8b 5d f0             	mov    -0x10(%ebp),%ebx
 8561b02:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8561b05:	89 d0                	mov    %edx,%eax
 8561b07:	c1 e0 02             	shl    $0x2,%eax
 8561b0a:	01 d0                	add    %edx,%eax
 8561b0c:	01 d8                	add    %ebx,%eax
 8561b0e:	83 c0 02             	add    $0x2,%eax
 8561b11:	0f b6 44 c1 18       	movzbl 0x18(%ecx,%eax,8),%eax
 8561b16:	84 c0                	test   %al,%al
 8561b18:	74 18                	je     8561b32 <_ZN18online_preliminary18COnlinePreliminary14OnCompleteLoadEP5CUser+0xc2>
 8561b1a:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8561b1e:	74 12                	je     8561b32 <_ZN18online_preliminary18COnlinePreliminary14OnCompleteLoadEP5CUser+0xc2>
 8561b20:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8561b23:	89 44 24 04          	mov    %eax,0x4(%esp)
 8561b27:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8561b2a:	89 04 24             	mov    %eax,(%esp)
 8561b2d:	e8 88 6a 0e 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8561b32:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8561b36:	83 7d f0 03          	cmpl   $0x3,-0x10(%ebp)
 8561b3a:	0f 9e c0             	setle  %al
 8561b3d:	84 c0                	test   %al,%al
 8561b3f:	75 9f                	jne    8561ae0 <_ZN18online_preliminary18COnlinePreliminary14OnCompleteLoadEP5CUser+0x70>
 8561b41:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 8561b45:	83 7d ec 01          	cmpl   $0x1,-0x14(%ebp)
 8561b49:	0f 9e c0             	setle  %al
 8561b4c:	84 c0                	test   %al,%al
 8561b4e:	75 87                	jne    8561ad7 <_ZN18online_preliminary18COnlinePreliminary14OnCompleteLoadEP5CUser+0x67>
 8561b50:	eb 1b                	jmp    8561b6d <_ZN18online_preliminary18COnlinePreliminary14OnCompleteLoadEP5CUser+0xfd>
 8561b52:	89 d3                	mov    %edx,%ebx
 8561b54:	89 c6                	mov    %eax,%esi
 8561b56:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8561b59:	89 04 24             	mov    %eax,(%esp)
 8561b5c:	e8 1f c3 02 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8561b61:	89 f0                	mov    %esi,%eax
 8561b63:	89 da                	mov    %ebx,%edx
 8561b65:	89 04 24             	mov    %eax,(%esp)
 8561b68:	e8 e3 1b 58 00       	call   8ae3750 <_Unwind_Resume>
 8561b6d:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8561b70:	89 04 24             	mov    %eax,(%esp)
 8561b73:	e8 08 c3 02 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8561b78:	83 c4 30             	add    $0x30,%esp
 8561b7b:	5b                   	pop    %ebx
 8561b7c:	5e                   	pop    %esi
 8561b7d:	5d                   	pop    %ebp
 8561b7e:	c3                   	ret
 8561b7f:	90                   	nop

```

```c
// online_preliminary::COnlinePreliminary::OnCompleteLoad @ 0x8561a70

/* online_preliminary::COnlinePreliminary::OnCompleteLoad(CUser*) */

void __thiscall
online_preliminary::COnlinePreliminary::OnCompleteLoad(COnlinePreliminary *this,CUser *param_1)

{
  uint uVar1;
  PacketGuard local_24 [12];
  int local_18;
  int local_14;
  CUser *local_10;
  
  PacketGuard::PacketGuard(local_24);
                    /* try { // try from 08561a99 to 08561b31 has its CatchHandler @ 08561b52 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,0,0x116);
  uVar1 = CUser::get_unique_id(param_1);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_24,uVar1 & 0xffff);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
  for (local_18 = 0; local_18 < 2; local_18 = local_18 + 1) {
    for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
      local_10 = *(CUser **)(this + (local_18 * 5 + local_14 + 2) * 8 + 0x14);
      if ((this[(local_18 * 5 + local_14 + 2) * 8 + 0x18] != (COnlinePreliminary)0x0) &&
         (local_10 != (CUser *)0x0)) {
        CUser::Send(local_10,local_24);
      }
    }
  }
  PacketGuard::~PacketGuard(local_24);
  return;
}

```

---

## OnConnectP2P

```asm
// === 08561b80 online_preliminary::COnlinePreliminary::OnConnectP2P  [0x08561b80-0x8561ded] ===
 8561b80:	55                   	push   %ebp
 8561b81:	89 e5                	mov    %esp,%ebp
 8561b83:	56                   	push   %esi
 8561b84:	53                   	push   %ebx
 8561b85:	83 ec 40             	sub    $0x40,%esp
 8561b88:	8b 45 08             	mov    0x8(%ebp),%eax
 8561b8b:	8b 40 04             	mov    0x4(%eax),%eax
 8561b8e:	83 f8 04             	cmp    $0x4,%eax
 8561b91:	0f 85 4f 02 00 00    	jne    8561de6 <_ZN18online_preliminary18COnlinePreliminary12OnConnectP2PEP5CUserP8PvP_RoomPci+0x266>
 8561b97:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8561b9e:	eb 4a                	jmp    8561bea <_ZN18online_preliminary18COnlinePreliminary12OnConnectP2PEP5CUserP8PvP_RoomPci+0x6a>
 8561ba0:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8561ba3:	03 45 14             	add    0x14(%ebp),%eax
 8561ba6:	0f b6 00             	movzbl (%eax),%eax
 8561ba9:	84 c0                	test   %al,%al
 8561bab:	75 39                	jne    8561be6 <_ZN18online_preliminary18COnlinePreliminary12OnConnectP2PEP5CUserP8PvP_RoomPci+0x66>
 8561bad:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 8561bb4:	00 
 8561bb5:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8561bbc:	00 
 8561bbd:	8b 45 08             	mov    0x8(%ebp),%eax
 8561bc0:	89 04 24             	mov    %eax,(%esp)
 8561bc3:	e8 82 05 00 00       	call   856214a <_ZN18online_preliminary18COnlinePreliminary21_SendMatchStatePacketEii>
 8561bc8:	8b 45 08             	mov    0x8(%ebp),%eax
 8561bcb:	8b 00                	mov    (%eax),%eax
 8561bcd:	83 c0 40             	add    $0x40,%eax
 8561bd0:	8b 10                	mov    (%eax),%edx
 8561bd2:	8b 45 10             	mov    0x10(%ebp),%eax
 8561bd5:	89 44 24 04          	mov    %eax,0x4(%esp)
 8561bd9:	8b 45 08             	mov    0x8(%ebp),%eax
 8561bdc:	89 04 24             	mov    %eax,(%esp)
 8561bdf:	ff d2                	call   *%edx
 8561be1:	e9 01 02 00 00       	jmp    8561de7 <_ZN18online_preliminary18COnlinePreliminary12OnConnectP2PEP5CUserP8PvP_RoomPci+0x267>
 8561be6:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 8561bea:	83 7d e4 07          	cmpl   $0x7,-0x1c(%ebp)
 8561bee:	7f 0f                	jg     8561bff <_ZN18online_preliminary18COnlinePreliminary12OnConnectP2PEP5CUserP8PvP_RoomPci+0x7f>
 8561bf0:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8561bf3:	3b 45 18             	cmp    0x18(%ebp),%eax
 8561bf6:	7d 07                	jge    8561bff <_ZN18online_preliminary18COnlinePreliminary12OnConnectP2PEP5CUserP8PvP_RoomPci+0x7f>
 8561bf8:	b8 01 00 00 00       	mov    $0x1,%eax
 8561bfd:	eb 05                	jmp    8561c04 <_ZN18online_preliminary18COnlinePreliminary12OnConnectP2PEP5CUserP8PvP_RoomPci+0x84>
 8561bff:	b8 00 00 00 00       	mov    $0x0,%eax
 8561c04:	84 c0                	test   %al,%al
 8561c06:	75 98                	jne    8561ba0 <_ZN18online_preliminary18COnlinePreliminary12OnConnectP2PEP5CUserP8PvP_RoomPci+0x20>
 8561c08:	8b 45 08             	mov    0x8(%ebp),%eax
 8561c0b:	8b 40 6c             	mov    0x6c(%eax),%eax
 8561c0e:	8d 50 01             	lea    0x1(%eax),%edx
 8561c11:	8b 45 08             	mov    0x8(%ebp),%eax
 8561c14:	89 50 6c             	mov    %edx,0x6c(%eax)
 8561c17:	8b 45 08             	mov    0x8(%ebp),%eax
 8561c1a:	8b 58 6c             	mov    0x6c(%eax),%ebx
 8561c1d:	e8 c6 e2 ff ff       	call   855fee8 <_ZN18online_preliminary18COnlinePreliminary22GetPlayCountPerOneTeamEv>
 8561c22:	0f b6 c0             	movzbl %al,%eax
 8561c25:	01 c0                	add    %eax,%eax
 8561c27:	39 c3                	cmp    %eax,%ebx
 8561c29:	0f 94 c0             	sete   %al
 8561c2c:	84 c0                	test   %al,%al
 8561c2e:	0f 84 e3 00 00 00    	je     8561d17 <_ZN18online_preliminary18COnlinePreliminary12OnConnectP2PEP5CUserP8PvP_RoomPci+0x197>
 8561c34:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8561c37:	89 04 24             	mov    %eax,(%esp)
 8561c3a:	e8 0d c1 02 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8561c3f:	c7 44 24 08 17 01 00 	movl   $0x117,0x8(%esp)
 8561c46:	00 
 8561c47:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8561c4e:	00 
 8561c4f:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8561c52:	89 04 24             	mov    %eax,(%esp)
 8561c55:	e8 a2 9c b6 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8561c5a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8561c61:	00 
 8561c62:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8561c65:	89 04 24             	mov    %eax,(%esp)
 8561c68:	e8 eb 9c b6 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8561c6d:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 8561c74:	eb 6e                	jmp    8561ce4 <_ZN18online_preliminary18COnlinePreliminary12OnConnectP2PEP5CUserP8PvP_RoomPci+0x164>
 8561c76:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8561c7d:	eb 56                	jmp    8561cd5 <_ZN18online_preliminary18COnlinePreliminary12OnConnectP2PEP5CUserP8PvP_RoomPci+0x155>
 8561c7f:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8561c82:	8b 5d ec             	mov    -0x14(%ebp),%ebx
 8561c85:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8561c88:	89 d0                	mov    %edx,%eax
 8561c8a:	c1 e0 02             	shl    $0x2,%eax
 8561c8d:	01 d0                	add    %edx,%eax
 8561c8f:	01 d8                	add    %ebx,%eax
 8561c91:	83 c0 02             	add    $0x2,%eax
 8561c94:	8b 44 c1 14          	mov    0x14(%ecx,%eax,8),%eax
 8561c98:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8561c9b:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8561c9e:	8b 5d ec             	mov    -0x14(%ebp),%ebx
 8561ca1:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8561ca4:	89 d0                	mov    %edx,%eax
 8561ca6:	c1 e0 02             	shl    $0x2,%eax
 8561ca9:	01 d0                	add    %edx,%eax
 8561cab:	01 d8                	add    %ebx,%eax
 8561cad:	83 c0 02             	add    $0x2,%eax
 8561cb0:	0f b6 44 c1 18       	movzbl 0x18(%ecx,%eax,8),%eax
 8561cb5:	84 c0                	test   %al,%al
 8561cb7:	74 18                	je     8561cd1 <_ZN18online_preliminary18COnlinePreliminary12OnConnectP2PEP5CUserP8PvP_RoomPci+0x151>
 8561cb9:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8561cbd:	74 12                	je     8561cd1 <_ZN18online_preliminary18COnlinePreliminary12OnConnectP2PEP5CUserP8PvP_RoomPci+0x151>
 8561cbf:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8561cc2:	89 44 24 04          	mov    %eax,0x4(%esp)
 8561cc6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8561cc9:	89 04 24             	mov    %eax,(%esp)
 8561ccc:	e8 e9 68 0e 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8561cd1:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 8561cd5:	83 7d ec 03          	cmpl   $0x3,-0x14(%ebp)
 8561cd9:	0f 9e c0             	setle  %al
 8561cdc:	84 c0                	test   %al,%al
 8561cde:	75 9f                	jne    8561c7f <_ZN18online_preliminary18COnlinePreliminary12OnConnectP2PEP5CUserP8PvP_RoomPci+0xff>
 8561ce0:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 8561ce4:	83 7d e8 01          	cmpl   $0x1,-0x18(%ebp)
 8561ce8:	0f 9e c0             	setle  %al
 8561ceb:	84 c0                	test   %al,%al
 8561ced:	75 87                	jne    8561c76 <_ZN18online_preliminary18COnlinePreliminary12OnConnectP2PEP5CUserP8PvP_RoomPci+0xf6>
 8561cef:	eb 1b                	jmp    8561d0c <_ZN18online_preliminary18COnlinePreliminary12OnConnectP2PEP5CUserP8PvP_RoomPci+0x18c>
 8561cf1:	89 d3                	mov    %edx,%ebx
 8561cf3:	89 c6                	mov    %eax,%esi
 8561cf5:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8561cf8:	89 04 24             	mov    %eax,(%esp)
 8561cfb:	e8 80 c1 02 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8561d00:	89 f0                	mov    %esi,%eax
 8561d02:	89 da                	mov    %ebx,%edx
 8561d04:	89 04 24             	mov    %eax,(%esp)
 8561d07:	e8 44 1a 58 00       	call   8ae3750 <_Unwind_Resume>
 8561d0c:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8561d0f:	89 04 24             	mov    %eax,(%esp)
 8561d12:	e8 69 c1 02 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8561d17:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8561d1a:	89 04 24             	mov    %eax,(%esp)
 8561d1d:	e8 2a c0 02 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8561d22:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8561d25:	89 04 24             	mov    %eax,(%esp)
 8561d28:	e8 b9 9b b6 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 8561d2d:	8b 45 10             	mov    0x10(%ebp),%eax
 8561d30:	89 04 24             	mov    %eax,(%esp)
 8561d33:	e8 f8 46 07 00       	call   85d6430 <_ZN8PvP_Room12battle_resetEv>
 8561d38:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8561d3f:	eb 3f                	jmp    8561d80 <_ZN18online_preliminary18COnlinePreliminary12OnConnectP2PEP5CUserP8PvP_RoomPci+0x200>
 8561d41:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8561d44:	89 44 24 04          	mov    %eax,0x4(%esp)
 8561d48:	8b 45 10             	mov    0x10(%ebp),%eax
 8561d4b:	89 04 24             	mov    %eax,(%esp)
 8561d4e:	e8 cb 74 07 00       	call   85d921e <_ZN8PvP_Room13get_user_seatEi>
 8561d53:	85 c0                	test   %eax,%eax
 8561d55:	0f 95 c0             	setne  %al
 8561d58:	84 c0                	test   %al,%al
 8561d5a:	74 20                	je     8561d7c <_ZN18online_preliminary18COnlinePreliminary12OnConnectP2PEP5CUserP8PvP_RoomPci+0x1fc>
 8561d5c:	8b 45 10             	mov    0x10(%ebp),%eax
 8561d5f:	8d 90 20 06 00 00    	lea    0x620(%eax),%edx
 8561d65:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8561d6c:	00 
 8561d6d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8561d70:	89 44 24 04          	mov    %eax,0x4(%esp)
 8561d74:	89 14 24             	mov    %edx,(%esp)
 8561d77:	e8 d6 c4 07 00       	call   85de252 <_ZN15CRelayBattleMgr7OnReadyEib>
 8561d7c:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8561d80:	83 7d f4 07          	cmpl   $0x7,-0xc(%ebp)
 8561d84:	0f 9e c0             	setle  %al
 8561d87:	84 c0                	test   %al,%al
 8561d89:	75 b6                	jne    8561d41 <_ZN18online_preliminary18COnlinePreliminary12OnConnectP2PEP5CUserP8PvP_RoomPci+0x1c1>
 8561d8b:	8b 45 10             	mov    0x10(%ebp),%eax
 8561d8e:	89 04 24             	mov    %eax,(%esp)
 8561d91:	e8 a4 6e 07 00       	call   85d8c3a <_ZN8PvP_Room9start_pvpEv>
 8561d96:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8561d99:	89 44 24 04          	mov    %eax,0x4(%esp)
 8561d9d:	8b 45 10             	mov    0x10(%ebp),%eax
 8561da0:	89 04 24             	mov    %eax,(%esp)
 8561da3:	e8 92 9f 07 00       	call   85dbd3a <_ZN8PvP_Room15make_state_infoEPc>
 8561da8:	e8 fa 85 b7 ff       	call   80da3a7 <_Z11G_GameWorldv>
 8561dad:	8d 55 cc             	lea    -0x34(%ebp),%edx
 8561db0:	89 54 24 04          	mov    %edx,0x4(%esp)
 8561db4:	89 04 24             	mov    %eax,(%esp)
 8561db7:	e8 58 6e 16 00       	call   86c8c14 <_ZN9GameWorld8send_allER11PacketGuard>
 8561dbc:	eb 1b                	jmp    8561dd9 <_ZN18online_preliminary18COnlinePreliminary12OnConnectP2PEP5CUserP8PvP_RoomPci+0x259>
 8561dbe:	89 d3                	mov    %edx,%ebx
 8561dc0:	89 c6                	mov    %eax,%esi
 8561dc2:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8561dc5:	89 04 24             	mov    %eax,(%esp)
 8561dc8:	e8 b3 c0 02 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8561dcd:	89 f0                	mov    %esi,%eax
 8561dcf:	89 da                	mov    %ebx,%edx
 8561dd1:	89 04 24             	mov    %eax,(%esp)
 8561dd4:	e8 77 19 58 00       	call   8ae3750 <_Unwind_Resume>
 8561dd9:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8561ddc:	89 04 24             	mov    %eax,(%esp)
 8561ddf:	e8 9c c0 02 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8561de4:	eb 01                	jmp    8561de7 <_ZN18online_preliminary18COnlinePreliminary12OnConnectP2PEP5CUserP8PvP_RoomPci+0x267>
 8561de6:	90                   	nop
 8561de7:	83 c4 40             	add    $0x40,%esp
 8561dea:	5b                   	pop    %ebx
 8561deb:	5e                   	pop    %esi
 8561dec:	5d                   	pop    %ebp
 8561ded:	c3                   	ret

```

```c
// online_preliminary::COnlinePreliminary::OnConnectP2P @ 0x8561b80

/* online_preliminary::COnlinePreliminary::OnConnectP2P(CUser*, PvP_Room*, char*, int) */

void __thiscall
online_preliminary::COnlinePreliminary::OnConnectP2P
          (COnlinePreliminary *this,CUser *param_1,PvP_Room *param_2,char *param_3,int param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  GameWorld *this_00;
  PacketGuard local_38 [12];
  PacketGuard local_2c [12];
  int local_20;
  int local_1c;
  int local_18;
  CUser *local_14;
  int local_10;
  
  if (*(int *)(this + 4) == 4) {
    local_20 = 0;
    while( true ) {
      if ((local_20 < 8) && (local_20 < param_4)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (!bVar1) {
        *(int *)(this + 0x6c) = *(int *)(this + 0x6c) + 1;
        iVar3 = *(int *)(this + 0x6c);
        uVar2 = GetPlayCountPerOneTeam();
        if (iVar3 == (uVar2 & 0xff) * 2) {
          PacketGuard::PacketGuard(local_2c);
                    /* try { // try from 08561c55 to 08561cd0 has its CatchHandler @ 08561cf1 */
          InterfacePacketBuf::put_header((InterfacePacketBuf *)local_2c,0,0x117);
          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_2c,true);
          for (local_1c = 0; local_1c < 2; local_1c = local_1c + 1) {
            for (local_18 = 0; local_18 < 4; local_18 = local_18 + 1) {
              local_14 = *(CUser **)(this + (local_1c * 5 + local_18 + 2) * 8 + 0x14);
              if ((this[(local_1c * 5 + local_18 + 2) * 8 + 0x18] != (COnlinePreliminary)0x0) &&
                 (local_14 != (CUser *)0x0)) {
                CUser::Send(local_14,local_2c);
              }
            }
          }
          PacketGuard::~PacketGuard(local_2c);
        }
        PacketGuard::PacketGuard(local_38);
                    /* try { // try from 08561d28 to 08561dbb has its CatchHandler @ 08561dbe */
        InterfacePacketBuf::clear((InterfacePacketBuf *)local_38);
        PvP_Room::battle_reset(param_2);
        for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
          iVar3 = PvP_Room::get_user_seat(param_2,local_10);
          if (iVar3 != 0) {
            CRelayBattleMgr::OnReady((CRelayBattleMgr *)(param_2 + 0x620),local_10,true);
          }
        }
        PvP_Room::start_pvp(param_2);
        PvP_Room::make_state_info(param_2,(char *)local_38);
        this_00 = (GameWorld *)G_GameWorld();
        GameWorld::send_all(this_00,local_38);
        PacketGuard::~PacketGuard(local_38);
        return;
      }
      if (param_3[local_20] == '\0') break;
      local_20 = local_20 + 1;
    }
    _SendMatchStatePacket(this,4,2);
    (**(code **)(*(int *)this + 0x40))(this,param_2);
  }
  return;
}

```

---

## OnConnectP2PTimeout

```asm
// === 08561dee online_preliminary::COnlinePreliminary::OnConnectP2PTimeout  [0x08561dee-0x8561e35] ===
 8561dee:	55                   	push   %ebp
 8561def:	89 e5                	mov    %esp,%ebp
 8561df1:	83 ec 18             	sub    $0x18,%esp
 8561df4:	8b 45 08             	mov    0x8(%ebp),%eax
 8561df7:	8b 40 04             	mov    0x4(%eax),%eax
 8561dfa:	83 f8 04             	cmp    $0x4,%eax
 8561dfd:	75 34                	jne    8561e33 <_ZN18online_preliminary18COnlinePreliminary19OnConnectP2PTimeoutEP8PvP_Room+0x45>
 8561dff:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 8561e06:	00 
 8561e07:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8561e0e:	00 
 8561e0f:	8b 45 08             	mov    0x8(%ebp),%eax
 8561e12:	89 04 24             	mov    %eax,(%esp)
 8561e15:	e8 30 03 00 00       	call   856214a <_ZN18online_preliminary18COnlinePreliminary21_SendMatchStatePacketEii>
 8561e1a:	8b 45 08             	mov    0x8(%ebp),%eax
 8561e1d:	8b 00                	mov    (%eax),%eax
 8561e1f:	83 c0 40             	add    $0x40,%eax
 8561e22:	8b 10                	mov    (%eax),%edx
 8561e24:	8b 45 0c             	mov    0xc(%ebp),%eax
 8561e27:	89 44 24 04          	mov    %eax,0x4(%esp)
 8561e2b:	8b 45 08             	mov    0x8(%ebp),%eax
 8561e2e:	89 04 24             	mov    %eax,(%esp)
 8561e31:	ff d2                	call   *%edx
 8561e33:	c9                   	leave
 8561e34:	c3                   	ret
 8561e35:	90                   	nop

```

```c
// online_preliminary::COnlinePreliminary::OnConnectP2PTimeout @ 0x8561dee

/* online_preliminary::COnlinePreliminary::OnConnectP2PTimeout(PvP_Room*) */

void __thiscall
online_preliminary::COnlinePreliminary::OnConnectP2PTimeout
          (COnlinePreliminary *this,PvP_Room *param_1)

{
  if (*(int *)(this + 4) == 4) {
    _SendMatchStatePacket(this,4,2);
    (**(code **)(*(int *)this + 0x40))(this,param_1);
  }
  return;
}

```

---

## OnCreateRoom

```asm
// === 08560ae4 online_preliminary::COnlinePreliminary::OnCreateRoom  [0x08560ae4-0x8560b89] ===
 8560ae4:	55                   	push   %ebp
 8560ae5:	89 e5                	mov    %esp,%ebp
 8560ae7:	83 ec 18             	sub    $0x18,%esp
 8560aea:	8b 45 0c             	mov    0xc(%ebp),%eax
 8560aed:	89 04 24             	mov    %eax,(%esp)
 8560af0:	e8 4d ff ff ff       	call   8560a42 <_ZN18online_preliminary18COnlinePreliminary28CheckUnusableEquipmentInUserEP5CUser>
 8560af5:	83 f0 01             	xor    $0x1,%eax
 8560af8:	84 c0                	test   %al,%al
 8560afa:	74 0a                	je     8560b06 <_ZN18online_preliminary18COnlinePreliminary12OnCreateRoomEP5CUser+0x22>
 8560afc:	b8 13 00 00 00       	mov    $0x13,%eax
 8560b01:	e9 82 00 00 00       	jmp    8560b88 <_ZN18online_preliminary18COnlinePreliminary12OnCreateRoomEP5CUser+0xa4>
 8560b06:	a1 44 e1 43 09       	mov    0x943e144,%eax
 8560b0b:	83 c0 01             	add    $0x1,%eax
 8560b0e:	a3 44 e1 43 09       	mov    %eax,0x943e144
 8560b13:	8b 15 44 e1 43 09    	mov    0x943e144,%edx
 8560b19:	8b 45 08             	mov    0x8(%ebp),%eax
 8560b1c:	89 50 18             	mov    %edx,0x18(%eax)
 8560b1f:	8b 45 08             	mov    0x8(%ebp),%eax
 8560b22:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 8560b29:	8b 45 08             	mov    0x8(%ebp),%eax
 8560b2c:	83 c0 44             	add    $0x44,%eax
 8560b2f:	89 04 24             	mov    %eax,(%esp)
 8560b32:	e8 89 f2 ff ff       	call   855fdc0 <_ZN14TeamInfoSecond5resetEv>
 8560b37:	8b 45 08             	mov    0x8(%ebp),%eax
 8560b3a:	83 c0 1c             	add    $0x1c,%eax
 8560b3d:	89 04 24             	mov    %eax,(%esp)
 8560b40:	e8 7b f2 ff ff       	call   855fdc0 <_ZN14TeamInfoSecond5resetEv>
 8560b45:	8b 45 08             	mov    0x8(%ebp),%eax
 8560b48:	8d 50 1c             	lea    0x1c(%eax),%edx
 8560b4b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8560b4e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8560b52:	89 14 24             	mov    %edx,(%esp)
 8560b55:	e8 a4 f2 ff ff       	call   855fdfe <_ZN14TeamInfoSecond3addEP5CUser>
 8560b5a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8560b5d:	89 04 24             	mov    %eax,(%esp)
 8560b60:	e8 7d 52 0e 00       	call   8645de2 <_ZNK15CUserCharacInfo35GetCurCharacOnlinePreliminaryTeamIdEv>
 8560b65:	8b 55 08             	mov    0x8(%ebp),%edx
 8560b68:	89 42 1c             	mov    %eax,0x1c(%edx)
 8560b6b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8560b6e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8560b72:	8b 45 08             	mov    0x8(%ebp),%eax
 8560b75:	89 04 24             	mov    %eax,(%esp)
 8560b78:	e8 05 f5 ff ff       	call   8560082 <_ZN18online_preliminary18COnlinePreliminary10_GetRatingEP5CUser>
 8560b7d:	8b 45 08             	mov    0x8(%ebp),%eax
 8560b80:	d9 58 20             	fstps  0x20(%eax)
 8560b83:	b8 00 00 00 00       	mov    $0x0,%eax
 8560b88:	c9                   	leave
 8560b89:	c3                   	ret

```

```c
// online_preliminary::COnlinePreliminary::OnCreateRoom @ 0x8560ae4

/* online_preliminary::COnlinePreliminary::OnCreateRoom(CUser*) */

undefined4 __thiscall
online_preliminary::COnlinePreliminary::OnCreateRoom(COnlinePreliminary *this,CUser *param_1)

{
  char cVar1;
  undefined4 uVar2;
  longdouble lVar3;
  
  cVar1 = CheckUnusableEquipmentInUser(param_1);
  if (cVar1 == '\x01') {
    nextAuthValue_ = nextAuthValue_ + 1;
    *(int *)(this + 0x18) = nextAuthValue_;
    *(undefined4 *)(this + 4) = 0;
    TeamInfoSecond::reset((TeamInfoSecond *)(this + 0x44));
    TeamInfoSecond::reset((TeamInfoSecond *)(this + 0x1c));
    TeamInfoSecond::add((TeamInfoSecond *)(this + 0x1c),param_1);
    uVar2 = CUserCharacInfo::GetCurCharacOnlinePreliminaryTeamId((CUserCharacInfo *)param_1);
    *(undefined4 *)(this + 0x1c) = uVar2;
    lVar3 = (longdouble)_GetRating(this,param_1);
    *(float *)(this + 0x20) = (float)lVar3;
    uVar2 = 0;
  }
  else {
    uVar2 = 0x13;
  }
  return uVar2;
}

```

---

## OnDestroyRoom

```asm
// === 08560b8a online_preliminary::COnlinePreliminary::OnDestroyRoom  [0x08560b8a-0x8560bb9] ===
 8560b8a:	55                   	push   %ebp
 8560b8b:	89 e5                	mov    %esp,%ebp
 8560b8d:	83 ec 18             	sub    $0x18,%esp
 8560b90:	8b 45 08             	mov    0x8(%ebp),%eax
 8560b93:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 8560b9a:	a1 3c e1 43 09       	mov    0x943e13c,%eax
 8560b9f:	8b 00                	mov    (%eax),%eax
 8560ba1:	83 c0 04             	add    $0x4,%eax
 8560ba4:	8b 08                	mov    (%eax),%ecx
 8560ba6:	8b 55 08             	mov    0x8(%ebp),%edx
 8560ba9:	a1 3c e1 43 09       	mov    0x943e13c,%eax
 8560bae:	89 54 24 04          	mov    %edx,0x4(%esp)
 8560bb2:	89 04 24             	mov    %eax,(%esp)
 8560bb5:	ff d1                	call   *%ecx
 8560bb7:	c9                   	leave
 8560bb8:	c3                   	ret
 8560bb9:	90                   	nop

```

```c
// online_preliminary::COnlinePreliminary::OnDestroyRoom @ 0x8560b8a

/* online_preliminary::COnlinePreliminary::OnDestroyRoom(CUser*) */

void online_preliminary::COnlinePreliminary::OnDestroyRoom(CUser *param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  (**(code **)(*pWaitingRoomList_ + 4))(pWaitingRoomList_,param_1);
  return;
}

```

---

## OnEndFight

```asm
// === 08562022 online_preliminary::COnlinePreliminary::OnEndFight  [0x08562022-0x85620c7] ===
 8562022:	55                   	push   %ebp
 8562023:	89 e5                	mov    %esp,%ebp
 8562025:	83 ec 28             	sub    $0x28,%esp
 8562028:	8b 45 0c             	mov    0xc(%ebp),%eax
 856202b:	89 04 24             	mov    %eax,(%esp)
 856202e:	e8 0f 72 07 00       	call   85d9242 <_ZN8PvP_Room16get_manager_teamEv>
 8562033:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8562036:	8b 45 08             	mov    0x8(%ebp),%eax
 8562039:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 8562040:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8562043:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 856204a:	00 
 856204b:	89 44 24 08          	mov    %eax,0x8(%esp)
 856204f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8562052:	89 44 24 04          	mov    %eax,0x4(%esp)
 8562056:	8b 45 08             	mov    0x8(%ebp),%eax
 8562059:	89 04 24             	mov    %eax,(%esp)
 856205c:	e8 df fd ff ff       	call   8561e40 <_ZN18online_preliminary18COnlinePreliminary11_ReturnTeamEP8PvP_RoomiP5CUser>
 8562061:	83 7d f4 01          	cmpl   $0x1,-0xc(%ebp)
 8562065:	74 42                	je     85620a9 <_ZN18online_preliminary18COnlinePreliminary10OnEndFightEP8PvP_Room+0x87>
 8562067:	8b 45 08             	mov    0x8(%ebp),%eax
 856206a:	8b 55 08             	mov    0x8(%ebp),%edx
 856206d:	8b 4a 44             	mov    0x44(%edx),%ecx
 8562070:	89 48 1c             	mov    %ecx,0x1c(%eax)
 8562073:	8b 4a 48             	mov    0x48(%edx),%ecx
 8562076:	89 48 20             	mov    %ecx,0x20(%eax)
 8562079:	8b 4a 4c             	mov    0x4c(%edx),%ecx
 856207c:	89 48 24             	mov    %ecx,0x24(%eax)
 856207f:	8b 4a 50             	mov    0x50(%edx),%ecx
 8562082:	89 48 28             	mov    %ecx,0x28(%eax)
 8562085:	8b 4a 54             	mov    0x54(%edx),%ecx
 8562088:	89 48 2c             	mov    %ecx,0x2c(%eax)
 856208b:	8b 4a 58             	mov    0x58(%edx),%ecx
 856208e:	89 48 30             	mov    %ecx,0x30(%eax)
 8562091:	8b 4a 5c             	mov    0x5c(%edx),%ecx
 8562094:	89 48 34             	mov    %ecx,0x34(%eax)
 8562097:	8b 4a 60             	mov    0x60(%edx),%ecx
 856209a:	89 48 38             	mov    %ecx,0x38(%eax)
 856209d:	8b 4a 64             	mov    0x64(%edx),%ecx
 85620a0:	89 48 3c             	mov    %ecx,0x3c(%eax)
 85620a3:	8b 52 68             	mov    0x68(%edx),%edx
 85620a6:	89 50 40             	mov    %edx,0x40(%eax)
 85620a9:	8b 45 08             	mov    0x8(%ebp),%eax
 85620ac:	83 c0 1c             	add    $0x1c,%eax
 85620af:	89 04 24             	mov    %eax,(%esp)
 85620b2:	e8 3f dc ff ff       	call   855fcf6 <_ZN14TeamInfoSecond7refreshEv>
 85620b7:	8b 45 08             	mov    0x8(%ebp),%eax
 85620ba:	83 c0 44             	add    $0x44,%eax
 85620bd:	89 04 24             	mov    %eax,(%esp)
 85620c0:	e8 fb dc ff ff       	call   855fdc0 <_ZN14TeamInfoSecond5resetEv>
 85620c5:	c9                   	leave
 85620c6:	c3                   	ret
 85620c7:	90                   	nop

```

```c
// online_preliminary::COnlinePreliminary::OnEndFight @ 0x8562022

/* online_preliminary::COnlinePreliminary::OnEndFight(PvP_Room*) */

void __thiscall
online_preliminary::COnlinePreliminary::OnEndFight(COnlinePreliminary *this,PvP_Room *param_1)

{
  int iVar1;
  
  iVar1 = PvP_Room::get_manager_team(param_1);
  *(undefined4 *)(this + 4) = 0;
  _ReturnTeam(this,param_1,iVar1,(CUser *)0x0);
  if (iVar1 != 1) {
    *(undefined4 *)(this + 0x1c) = *(undefined4 *)(this + 0x44);
    *(undefined4 *)(this + 0x20) = *(undefined4 *)(this + 0x48);
    *(undefined4 *)(this + 0x24) = *(undefined4 *)(this + 0x4c);
    *(undefined4 *)(this + 0x28) = *(undefined4 *)(this + 0x50);
    *(undefined4 *)(this + 0x2c) = *(undefined4 *)(this + 0x54);
    *(undefined4 *)(this + 0x30) = *(undefined4 *)(this + 0x58);
    *(undefined4 *)(this + 0x34) = *(undefined4 *)(this + 0x5c);
    *(undefined4 *)(this + 0x38) = *(undefined4 *)(this + 0x60);
    *(undefined4 *)(this + 0x3c) = *(undefined4 *)(this + 100);
    *(undefined4 *)(this + 0x40) = *(undefined4 *)(this + 0x68);
  }
  TeamInfoSecond::refresh((TeamInfoSecond *)(this + 0x1c));
  TeamInfoSecond::reset((TeamInfoSecond *)(this + 0x44));
  return;
}

```

---

## OnGiveup

```asm
// === 08561e36 online_preliminary::COnlinePreliminary::OnGiveup  [0x08561e36-0x8561e3f] ===
 8561e36:	55                   	push   %ebp
 8561e37:	89 e5                	mov    %esp,%ebp
 8561e39:	b8 01 00 00 00       	mov    $0x1,%eax
 8561e3e:	5d                   	pop    %ebp
 8561e3f:	c3                   	ret

```

```c
// online_preliminary::COnlinePreliminary::OnGiveup @ 0x8561e36

/* online_preliminary::COnlinePreliminary::OnGiveup(CUser*) */

undefined4 online_preliminary::COnlinePreliminary::OnGiveup(CUser *param_1)

{
  return 1;
}

```

---

## OnJoinRoom

```asm
// === 08560bba online_preliminary::COnlinePreliminary::OnJoinRoom  [0x08560bba-0x8560be1] ===
 8560bba:	55                   	push   %ebp
 8560bbb:	89 e5                	mov    %esp,%ebp
 8560bbd:	83 ec 08             	sub    $0x8,%esp
 8560bc0:	8b 45 08             	mov    0x8(%ebp),%eax
 8560bc3:	8b 40 04             	mov    0x4(%eax),%eax
 8560bc6:	83 f8 03             	cmp    $0x3,%eax
 8560bc9:	74 15                	je     8560be0 <_ZN18online_preliminary18COnlinePreliminary10OnJoinRoomEP5CUser+0x26>
 8560bcb:	8b 45 08             	mov    0x8(%ebp),%eax
 8560bce:	8d 50 1c             	lea    0x1c(%eax),%edx
 8560bd1:	8b 45 0c             	mov    0xc(%ebp),%eax
 8560bd4:	89 44 24 04          	mov    %eax,0x4(%esp)
 8560bd8:	89 14 24             	mov    %edx,(%esp)
 8560bdb:	e8 1e f2 ff ff       	call   855fdfe <_ZN14TeamInfoSecond3addEP5CUser>
 8560be0:	c9                   	leave
 8560be1:	c3                   	ret

```

```c
// online_preliminary::COnlinePreliminary::OnJoinRoom @ 0x8560bba

/* online_preliminary::COnlinePreliminary::OnJoinRoom(CUser*) */

void __thiscall
online_preliminary::COnlinePreliminary::OnJoinRoom(COnlinePreliminary *this,CUser *param_1)

{
  if (*(int *)(this + 4) != 3) {
    TeamInfoSecond::add((TeamInfoSecond *)(this + 0x1c),param_1);
  }
  return;
}

```

---

## OnLeaveRoom

```asm
// === 08560cd2 online_preliminary::COnlinePreliminary::OnLeaveRoom  [0x08560cd2-0x8560df1] ===
 8560cd2:	55                   	push   %ebp
 8560cd3:	89 e5                	mov    %esp,%ebp
 8560cd5:	83 ec 18             	sub    $0x18,%esp
 8560cd8:	8b 45 08             	mov    0x8(%ebp),%eax
 8560cdb:	8b 40 04             	mov    0x4(%eax),%eax
 8560cde:	83 f8 04             	cmp    $0x4,%eax
 8560ce1:	75 4f                	jne    8560d32 <_ZN18online_preliminary18COnlinePreliminary11OnLeaveRoomEP5CUserP8PvP_Roomii+0x60>
 8560ce3:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 8560cea:	00 
 8560ceb:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8560cf2:	00 
 8560cf3:	8b 45 08             	mov    0x8(%ebp),%eax
 8560cf6:	89 04 24             	mov    %eax,(%esp)
 8560cf9:	e8 4c 14 00 00       	call   856214a <_ZN18online_preliminary18COnlinePreliminary21_SendMatchStatePacketEii>
 8560cfe:	8b 45 08             	mov    0x8(%ebp),%eax
 8560d01:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 8560d08:	8b 45 10             	mov    0x10(%ebp),%eax
 8560d0b:	89 04 24             	mov    %eax,(%esp)
 8560d0e:	e8 2f 85 07 00       	call   85d9242 <_ZN8PvP_Room16get_manager_teamEv>
 8560d13:	8b 55 0c             	mov    0xc(%ebp),%edx
 8560d16:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8560d1a:	89 44 24 08          	mov    %eax,0x8(%esp)
 8560d1e:	8b 45 10             	mov    0x10(%ebp),%eax
 8560d21:	89 44 24 04          	mov    %eax,0x4(%esp)
 8560d25:	8b 45 08             	mov    0x8(%ebp),%eax
 8560d28:	89 04 24             	mov    %eax,(%esp)
 8560d2b:	e8 10 11 00 00       	call   8561e40 <_ZN18online_preliminary18COnlinePreliminary11_ReturnTeamEP8PvP_RoomiP5CUser>
 8560d30:	eb 6e                	jmp    8560da0 <_ZN18online_preliminary18COnlinePreliminary11OnLeaveRoomEP5CUserP8PvP_Roomii+0xce>
 8560d32:	8b 45 08             	mov    0x8(%ebp),%eax
 8560d35:	8b 40 04             	mov    0x4(%eax),%eax
 8560d38:	83 f8 05             	cmp    $0x5,%eax
 8560d3b:	75 59                	jne    8560d96 <_ZN18online_preliminary18COnlinePreliminary11OnLeaveRoomEP5CUserP8PvP_Roomii+0xc4>
 8560d3d:	8b 45 14             	mov    0x14(%ebp),%eax
 8560d40:	89 44 24 04          	mov    %eax,0x4(%esp)
 8560d44:	8b 45 10             	mov    0x10(%ebp),%eax
 8560d47:	89 04 24             	mov    %eax,(%esp)
 8560d4a:	e8 d3 7f 00 00       	call   8568d22 <_ZN8PvP_Room12GetTeamCountEi>
 8560d4f:	83 f8 01             	cmp    $0x1,%eax
 8560d52:	0f 94 c0             	sete   %al
 8560d55:	84 c0                	test   %al,%al
 8560d57:	74 47                	je     8560da0 <_ZN18online_preliminary18COnlinePreliminary11OnLeaveRoomEP5CUserP8PvP_Roomii+0xce>
 8560d59:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8560d60:	00 
 8560d61:	8b 45 14             	mov    0x14(%ebp),%eax
 8560d64:	89 44 24 04          	mov    %eax,0x4(%esp)
 8560d68:	8b 45 08             	mov    0x8(%ebp),%eax
 8560d6b:	89 04 24             	mov    %eax,(%esp)
 8560d6e:	e8 6f fe ff ff       	call   8560be2 <_ZN18online_preliminary18COnlinePreliminary13_UpdateRatingEi22ENUM_ELO_RATING_SYSTEM>
 8560d73:	8b 45 14             	mov    0x14(%ebp),%eax
 8560d76:	89 44 24 04          	mov    %eax,0x4(%esp)
 8560d7a:	8b 45 08             	mov    0x8(%ebp),%eax
 8560d7d:	89 04 24             	mov    %eax,(%esp)
 8560d80:	e8 e1 7a 00 00       	call   8568866 <_ZN18online_preliminary18COnlinePreliminary8_GetTeamE15ENUM_SEAT_STATE>
 8560d85:	89 44 24 04          	mov    %eax,0x4(%esp)
 8560d89:	8b 45 08             	mov    0x8(%ebp),%eax
 8560d8c:	89 04 24             	mov    %eax,(%esp)
 8560d8f:	e8 f0 f6 ff ff       	call   8560484 <_ZN18online_preliminary18COnlinePreliminary18_IncreaseLoseCountE22ENUM_SCHOOL_MATCH_TEAM>
 8560d94:	eb 0a                	jmp    8560da0 <_ZN18online_preliminary18COnlinePreliminary11OnLeaveRoomEP5CUserP8PvP_Roomii+0xce>
 8560d96:	8b 45 08             	mov    0x8(%ebp),%eax
 8560d99:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 8560da0:	83 7d 14 01          	cmpl   $0x1,0x14(%ebp)
 8560da4:	75 17                	jne    8560dbd <_ZN18online_preliminary18COnlinePreliminary11OnLeaveRoomEP5CUserP8PvP_Roomii+0xeb>
 8560da6:	8b 45 08             	mov    0x8(%ebp),%eax
 8560da9:	8d 50 1c             	lea    0x1c(%eax),%edx
 8560dac:	8b 45 0c             	mov    0xc(%ebp),%eax
 8560daf:	89 44 24 04          	mov    %eax,0x4(%esp)
 8560db3:	89 14 24             	mov    %edx,(%esp)
 8560db6:	e8 99 f0 ff ff       	call   855fe54 <_ZN14TeamInfoSecond3delEP5CUser>
 8560dbb:	eb 15                	jmp    8560dd2 <_ZN18online_preliminary18COnlinePreliminary11OnLeaveRoomEP5CUserP8PvP_Roomii+0x100>
 8560dbd:	8b 45 08             	mov    0x8(%ebp),%eax
 8560dc0:	8d 50 44             	lea    0x44(%eax),%edx
 8560dc3:	8b 45 0c             	mov    0xc(%ebp),%eax
 8560dc6:	89 44 24 04          	mov    %eax,0x4(%esp)
 8560dca:	89 14 24             	mov    %edx,(%esp)
 8560dcd:	e8 82 f0 ff ff       	call   855fe54 <_ZN14TeamInfoSecond3delEP5CUser>
 8560dd2:	a1 3c e1 43 09       	mov    0x943e13c,%eax
 8560dd7:	8b 00                	mov    (%eax),%eax
 8560dd9:	83 c0 04             	add    $0x4,%eax
 8560ddc:	8b 08                	mov    (%eax),%ecx
 8560dde:	8b 55 08             	mov    0x8(%ebp),%edx
 8560de1:	a1 3c e1 43 09       	mov    0x943e13c,%eax
 8560de6:	89 54 24 04          	mov    %edx,0x4(%esp)
 8560dea:	89 04 24             	mov    %eax,(%esp)
 8560ded:	ff d1                	call   *%ecx
 8560def:	c9                   	leave
 8560df0:	c3                   	ret
 8560df1:	90                   	nop

```

```c
// online_preliminary::COnlinePreliminary::OnLeaveRoom @ 0x8560cd2

/* online_preliminary::COnlinePreliminary::OnLeaveRoom(CUser*, PvP_Room*, int, int) */

void online_preliminary::COnlinePreliminary::OnLeaveRoom
               (CUser *param_1,PvP_Room *param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 4) == 4) {
    _SendMatchStatePacket((COnlinePreliminary *)param_1,4,2);
    *(undefined4 *)(param_1 + 4) = 0;
    iVar1 = PvP_Room::get_manager_team((PvP_Room *)param_3);
    _ReturnTeam((COnlinePreliminary *)param_1,(PvP_Room *)param_3,iVar1,(CUser *)param_2);
  }
  else if (*(int *)(param_1 + 4) == 5) {
    iVar1 = PvP_Room::GetTeamCount((PvP_Room *)param_3,param_4);
    if (iVar1 == 1) {
      _UpdateRating((COnlinePreliminary *)param_1,param_4,0);
      uVar2 = _GetTeam((COnlinePreliminary *)param_1,param_4);
      _IncreaseLoseCount((COnlinePreliminary *)param_1,uVar2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (param_4 == 1) {
    TeamInfoSecond::del((TeamInfoSecond *)(param_1 + 0x1c),(CUser *)param_2);
  }
  else {
    TeamInfoSecond::del((TeamInfoSecond *)(param_1 + 0x44),(CUser *)param_2);
  }
  (**(code **)(*pWaitingRoomList_ + 4))(pWaitingRoomList_,param_1);
  return;
}

```

---

## OnMatchRoom

```asm
// === 085614ea online_preliminary::COnlinePreliminary::OnMatchRoom  [0x085614ea-0x8561a0d] ===
 85614ea:	55                   	push   %ebp
 85614eb:	89 e5                	mov    %esp,%ebp
 85614ed:	56                   	push   %esi
 85614ee:	53                   	push   %ebx
 85614ef:	81 ec 90 00 00 00    	sub    $0x90,%esp
 85614f5:	8b 45 08             	mov    0x8(%ebp),%eax
 85614f8:	8b 40 18             	mov    0x18(%eax),%eax
 85614fb:	3b 45 10             	cmp    0x10(%ebp),%eax
 85614fe:	74 40                	je     8561540 <_ZN18online_preliminary18COnlinePreliminary11OnMatchRoomEP8PvP_Roomi+0x56>
 8561500:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8561507:	00 
 8561508:	c7 44 24 08 a6 07 00 	movl   $0x7a6,0x8(%esp)
 856150f:	00 
 8561510:	c7 44 24 04 c0 39 ca 	movl   $0x8ca39c0,0x4(%esp)
 8561517:	08 
 8561518:	8d 45 94             	lea    -0x6c(%ebp),%eax
 856151b:	89 04 24             	mov    %eax,(%esp)
 856151e:	e8 f5 e1 fe ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8561523:	c7 44 24 04 9d 22 ca 	movl   $0x8ca229d,0x4(%esp)
 856152a:	08 
 856152b:	8d 45 94             	lea    -0x6c(%ebp),%eax
 856152e:	89 04 24             	mov    %eax,(%esp)
 8561531:	e8 52 e2 fe ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8561536:	b8 00 00 00 00       	mov    $0x0,%eax
 856153b:	e9 c4 04 00 00       	jmp    8561a04 <_ZN18online_preliminary18COnlinePreliminary11OnMatchRoomEP8PvP_Roomi+0x51a>
 8561540:	8b 45 08             	mov    0x8(%ebp),%eax
 8561543:	8b 40 04             	mov    0x4(%eax),%eax
 8561546:	83 f8 01             	cmp    $0x1,%eax
 8561549:	74 0a                	je     8561555 <_ZN18online_preliminary18COnlinePreliminary11OnMatchRoomEP8PvP_Roomi+0x6b>
 856154b:	b8 00 00 00 00       	mov    $0x0,%eax
 8561550:	e9 af 04 00 00       	jmp    8561a04 <_ZN18online_preliminary18COnlinePreliminary11OnMatchRoomEP8PvP_Roomi+0x51a>
 8561555:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 856155c:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 8561563:	c7 45 90 00 00 00 00 	movl   $0x0,-0x70(%ebp)
 856156a:	a1 3c e1 43 09       	mov    0x943e13c,%eax
 856156f:	8b 00                	mov    (%eax),%eax
 8561571:	83 c0 08             	add    $0x8,%eax
 8561574:	8b 18                	mov    (%eax),%ebx
 8561576:	8b 55 08             	mov    0x8(%ebp),%edx
 8561579:	a1 3c e1 43 09       	mov    0x943e13c,%eax
 856157e:	8d 4d 90             	lea    -0x70(%ebp),%ecx
 8561581:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8561585:	89 54 24 04          	mov    %edx,0x4(%esp)
 8561589:	89 04 24             	mov    %eax,(%esp)
 856158c:	ff d3                	call   *%ebx
 856158e:	8b 45 90             	mov    -0x70(%ebp),%eax
 8561591:	85 c0                	test   %eax,%eax
 8561593:	75 2f                	jne    85615c4 <_ZN18online_preliminary18COnlinePreliminary11OnMatchRoomEP8PvP_Roomi+0xda>
 8561595:	8b 45 08             	mov    0x8(%ebp),%eax
 8561598:	c7 40 04 02 00 00 00 	movl   $0x2,0x4(%eax)
 856159f:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 85615a6:	00 
 85615a7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85615ae:	00 
 85615af:	8b 45 08             	mov    0x8(%ebp),%eax
 85615b2:	89 04 24             	mov    %eax,(%esp)
 85615b5:	e8 90 0b 00 00       	call   856214a <_ZN18online_preliminary18COnlinePreliminary21_SendMatchStatePacketEii>
 85615ba:	b8 00 00 00 00       	mov    $0x0,%eax
 85615bf:	e9 40 04 00 00       	jmp    8561a04 <_ZN18online_preliminary18COnlinePreliminary11OnMatchRoomEP8PvP_Roomi+0x51a>
 85615c4:	8b 45 90             	mov    -0x70(%ebp),%eax
 85615c7:	8b 00                	mov    (%eax),%eax
 85615c9:	83 c0 10             	add    $0x10,%eax
 85615cc:	8b 10                	mov    (%eax),%edx
 85615ce:	8b 45 90             	mov    -0x70(%ebp),%eax
 85615d1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85615d8:	00 
 85615d9:	89 04 24             	mov    %eax,(%esp)
 85615dc:	ff d2                	call   *%edx
 85615de:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 85615e1:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 85615e5:	75 75                	jne    856165c <_ZN18online_preliminary18COnlinePreliminary11OnMatchRoomEP8PvP_Roomi+0x172>
 85615e7:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 85615ee:	00 
 85615ef:	c7 44 24 08 c1 07 00 	movl   $0x7c1,0x8(%esp)
 85615f6:	00 
 85615f7:	c7 44 24 04 c0 39 ca 	movl   $0x8ca39c0,0x4(%esp)
 85615fe:	08 
 85615ff:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8561602:	89 04 24             	mov    %eax,(%esp)
 8561605:	e8 0e e1 fe ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 856160a:	c7 44 24 0c c1 07 00 	movl   $0x7c1,0xc(%esp)
 8561611:	00 
 8561612:	c7 44 24 08 62 22 ca 	movl   $0x8ca2262,0x8(%esp)
 8561619:	08 
 856161a:	c7 44 24 04 b1 22 ca 	movl   $0x8ca22b1,0x4(%esp)
 8561621:	08 
 8561622:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8561625:	89 04 24             	mov    %eax,(%esp)
 8561628:	e8 5b e1 fe ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 856162d:	8b 45 08             	mov    0x8(%ebp),%eax
 8561630:	c7 40 04 02 00 00 00 	movl   $0x2,0x4(%eax)
 8561637:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 856163e:	00 
 856163f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8561646:	00 
 8561647:	8b 45 08             	mov    0x8(%ebp),%eax
 856164a:	89 04 24             	mov    %eax,(%esp)
 856164d:	e8 f8 0a 00 00       	call   856214a <_ZN18online_preliminary18COnlinePreliminary21_SendMatchStatePacketEii>
 8561652:	b8 00 00 00 00       	mov    $0x0,%eax
 8561657:	e9 a8 03 00 00       	jmp    8561a04 <_ZN18online_preliminary18COnlinePreliminary11OnMatchRoomEP8PvP_Roomi+0x51a>
 856165c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 856165f:	89 04 24             	mov    %eax,(%esp)
 8561662:	e8 27 3b 0f 00       	call   865518e <_ZN5CUser10GetPVPRoomEv>
 8561667:	89 45 e8             	mov    %eax,-0x18(%ebp)
 856166a:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 856166e:	75 75                	jne    85616e5 <_ZN18online_preliminary18COnlinePreliminary11OnMatchRoomEP8PvP_Roomi+0x1fb>
 8561670:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8561677:	00 
 8561678:	c7 44 24 08 ca 07 00 	movl   $0x7ca,0x8(%esp)
 856167f:	00 
 8561680:	c7 44 24 04 c0 39 ca 	movl   $0x8ca39c0,0x4(%esp)
 8561687:	08 
 8561688:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 856168b:	89 04 24             	mov    %eax,(%esp)
 856168e:	e8 85 e0 fe ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8561693:	c7 44 24 0c ca 07 00 	movl   $0x7ca,0xc(%esp)
 856169a:	00 
 856169b:	c7 44 24 08 62 22 ca 	movl   $0x8ca2262,0x8(%esp)
 85616a2:	08 
 85616a3:	c7 44 24 04 b1 22 ca 	movl   $0x8ca22b1,0x4(%esp)
 85616aa:	08 
 85616ab:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 85616ae:	89 04 24             	mov    %eax,(%esp)
 85616b1:	e8 d2 e0 fe ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 85616b6:	8b 45 08             	mov    0x8(%ebp),%eax
 85616b9:	c7 40 04 02 00 00 00 	movl   $0x2,0x4(%eax)
 85616c0:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 85616c7:	00 
 85616c8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85616cf:	00 
 85616d0:	8b 45 08             	mov    0x8(%ebp),%eax
 85616d3:	89 04 24             	mov    %eax,(%esp)
 85616d6:	e8 6f 0a 00 00       	call   856214a <_ZN18online_preliminary18COnlinePreliminary21_SendMatchStatePacketEii>
 85616db:	b8 00 00 00 00       	mov    $0x0,%eax
 85616e0:	e9 1f 03 00 00       	jmp    8561a04 <_ZN18online_preliminary18COnlinePreliminary11OnMatchRoomEP8PvP_Roomi+0x51a>
 85616e5:	8b 45 0c             	mov    0xc(%ebp),%eax
 85616e8:	89 04 24             	mov    %eax,(%esp)
 85616eb:	e8 b0 51 07 00       	call   85d68a0 <_ZN8PvP_Room16get_player_countEv>
 85616f0:	89 c3                	mov    %eax,%ebx
 85616f2:	e8 f1 e7 ff ff       	call   855fee8 <_ZN18online_preliminary18COnlinePreliminary22GetPlayCountPerOneTeamEv>
 85616f7:	0f b6 c0             	movzbl %al,%eax
 85616fa:	39 c3                	cmp    %eax,%ebx
 85616fc:	0f 9f c0             	setg   %al
 85616ff:	84 c0                	test   %al,%al
 8561701:	74 75                	je     8561778 <_ZN18online_preliminary18COnlinePreliminary11OnMatchRoomEP8PvP_Roomi+0x28e>
 8561703:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 856170a:	00 
 856170b:	c7 44 24 08 d2 07 00 	movl   $0x7d2,0x8(%esp)
 8561712:	00 
 8561713:	c7 44 24 04 c0 39 ca 	movl   $0x8ca39c0,0x4(%esp)
 856171a:	08 
 856171b:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 856171e:	89 04 24             	mov    %eax,(%esp)
 8561721:	e8 f2 df fe ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8561726:	c7 44 24 0c d2 07 00 	movl   $0x7d2,0xc(%esp)
 856172d:	00 
 856172e:	c7 44 24 08 62 22 ca 	movl   $0x8ca2262,0x8(%esp)
 8561735:	08 
 8561736:	c7 44 24 04 b1 22 ca 	movl   $0x8ca22b1,0x4(%esp)
 856173d:	08 
 856173e:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8561741:	89 04 24             	mov    %eax,(%esp)
 8561744:	e8 3f e0 fe ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8561749:	8b 45 08             	mov    0x8(%ebp),%eax
 856174c:	c7 40 04 02 00 00 00 	movl   $0x2,0x4(%eax)
 8561753:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 856175a:	00 
 856175b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8561762:	00 
 8561763:	8b 45 08             	mov    0x8(%ebp),%eax
 8561766:	89 04 24             	mov    %eax,(%esp)
 8561769:	e8 dc 09 00 00       	call   856214a <_ZN18online_preliminary18COnlinePreliminary21_SendMatchStatePacketEii>
 856176e:	b8 00 00 00 00       	mov    $0x0,%eax
 8561773:	e9 8c 02 00 00       	jmp    8561a04 <_ZN18online_preliminary18COnlinePreliminary11OnMatchRoomEP8PvP_Roomi+0x51a>
 8561778:	8b 45 08             	mov    0x8(%ebp),%eax
 856177b:	83 c0 1c             	add    $0x1c,%eax
 856177e:	89 04 24             	mov    %eax,(%esp)
 8561781:	e8 24 e7 ff ff       	call   855feaa <_ZNK14TeamInfoSecond4sizeEv>
 8561786:	89 c3                	mov    %eax,%ebx
 8561788:	e8 5b e7 ff ff       	call   855fee8 <_ZN18online_preliminary18COnlinePreliminary22GetPlayCountPerOneTeamEv>
 856178d:	0f b6 c0             	movzbl %al,%eax
 8561790:	39 c3                	cmp    %eax,%ebx
 8561792:	7f 19                	jg     85617ad <_ZN18online_preliminary18COnlinePreliminary11OnMatchRoomEP8PvP_Roomi+0x2c3>
 8561794:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8561797:	89 04 24             	mov    %eax,(%esp)
 856179a:	e8 01 51 07 00       	call   85d68a0 <_ZN8PvP_Room16get_player_countEv>
 856179f:	89 c3                	mov    %eax,%ebx
 85617a1:	e8 42 e7 ff ff       	call   855fee8 <_ZN18online_preliminary18COnlinePreliminary22GetPlayCountPerOneTeamEv>
 85617a6:	0f b6 c0             	movzbl %al,%eax
 85617a9:	39 c3                	cmp    %eax,%ebx
 85617ab:	7e 07                	jle    85617b4 <_ZN18online_preliminary18COnlinePreliminary11OnMatchRoomEP8PvP_Roomi+0x2ca>
 85617ad:	b8 01 00 00 00       	mov    $0x1,%eax
 85617b2:	eb 05                	jmp    85617b9 <_ZN18online_preliminary18COnlinePreliminary11OnMatchRoomEP8PvP_Roomi+0x2cf>
 85617b4:	b8 00 00 00 00       	mov    $0x0,%eax
 85617b9:	84 c0                	test   %al,%al
 85617bb:	74 75                	je     8561832 <_ZN18online_preliminary18COnlinePreliminary11OnMatchRoomEP8PvP_Roomi+0x348>
 85617bd:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 85617c4:	00 
 85617c5:	c7 44 24 08 da 07 00 	movl   $0x7da,0x8(%esp)
 85617cc:	00 
 85617cd:	c7 44 24 04 c0 39 ca 	movl   $0x8ca39c0,0x4(%esp)
 85617d4:	08 
 85617d5:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85617d8:	89 04 24             	mov    %eax,(%esp)
 85617db:	e8 38 df fe ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 85617e0:	c7 44 24 0c da 07 00 	movl   $0x7da,0xc(%esp)
 85617e7:	00 
 85617e8:	c7 44 24 08 62 22 ca 	movl   $0x8ca2262,0x8(%esp)
 85617ef:	08 
 85617f0:	c7 44 24 04 b1 22 ca 	movl   $0x8ca22b1,0x4(%esp)
 85617f7:	08 
 85617f8:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85617fb:	89 04 24             	mov    %eax,(%esp)
 85617fe:	e8 85 df fe ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8561803:	8b 45 08             	mov    0x8(%ebp),%eax
 8561806:	c7 40 04 02 00 00 00 	movl   $0x2,0x4(%eax)
 856180d:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8561814:	00 
 8561815:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 856181c:	00 
 856181d:	8b 45 08             	mov    0x8(%ebp),%eax
 8561820:	89 04 24             	mov    %eax,(%esp)
 8561823:	e8 22 09 00 00       	call   856214a <_ZN18online_preliminary18COnlinePreliminary21_SendMatchStatePacketEii>
 8561828:	b8 00 00 00 00       	mov    $0x0,%eax
 856182d:	e9 d2 01 00 00       	jmp    8561a04 <_ZN18online_preliminary18COnlinePreliminary11OnMatchRoomEP8PvP_Roomi+0x51a>
 8561832:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8561835:	89 44 24 04          	mov    %eax,0x4(%esp)
 8561839:	8b 45 08             	mov    0x8(%ebp),%eax
 856183c:	89 04 24             	mov    %eax,(%esp)
 856183f:	e8 30 f7 ff ff       	call   8560f74 <_ZN18online_preliminary18COnlinePreliminary15_BackupRoomInfoEP8PvP_Room>
 8561844:	8b 45 08             	mov    0x8(%ebp),%eax
 8561847:	83 c0 44             	add    $0x44,%eax
 856184a:	89 04 24             	mov    %eax,(%esp)
 856184d:	e8 6e e5 ff ff       	call   855fdc0 <_ZN14TeamInfoSecond5resetEv>
 8561852:	8b 45 08             	mov    0x8(%ebp),%eax
 8561855:	83 c0 44             	add    $0x44,%eax
 8561858:	89 44 24 04          	mov    %eax,0x4(%esp)
 856185c:	8b 45 e8             	mov    -0x18(%ebp),%eax
 856185f:	89 04 24             	mov    %eax,(%esp)
 8561862:	e8 c3 7a 07 00       	call   85d932a <_ZN8PvP_Room13get_user_listEPv>
 8561867:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 856186e:	00 
 856186f:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 8561876:	00 
 8561877:	8b 45 08             	mov    0x8(%ebp),%eax
 856187a:	89 04 24             	mov    %eax,(%esp)
 856187d:	e8 c8 08 00 00       	call   856214a <_ZN18online_preliminary18COnlinePreliminary21_SendMatchStatePacketEii>
 8561882:	8b 45 08             	mov    0x8(%ebp),%eax
 8561885:	c7 40 04 03 00 00 00 	movl   $0x3,0x4(%eax)
 856188c:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8561893:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 856189a:	e9 ae 00 00 00       	jmp    856194d <_ZN18online_preliminary18COnlinePreliminary11OnMatchRoomEP8PvP_Roomi+0x463>
 856189f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85618a2:	89 44 24 04          	mov    %eax,0x4(%esp)
 85618a6:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85618a9:	89 04 24             	mov    %eax,(%esp)
 85618ac:	e8 6d 79 07 00       	call   85d921e <_ZN8PvP_Room13get_user_seatEi>
 85618b1:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 85618b4:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 85618b8:	0f 84 8a 00 00 00    	je     8561948 <_ZN18online_preliminary18COnlinePreliminary11OnMatchRoomEP8PvP_Roomi+0x45e>
 85618be:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85618c1:	89 44 24 04          	mov    %eax,0x4(%esp)
 85618c5:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85618c8:	89 04 24             	mov    %eax,(%esp)
 85618cb:	e8 a2 79 07 00       	call   85d9272 <_ZN8PvP_Room8get_teamEi>
 85618d0:	89 45 ec             	mov    %eax,-0x14(%ebp)
 85618d3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85618d6:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85618da:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85618dd:	89 44 24 08          	mov    %eax,0x8(%esp)
 85618e1:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85618e4:	89 44 24 04          	mov    %eax,0x4(%esp)
 85618e8:	8b 45 08             	mov    0x8(%ebp),%eax
 85618eb:	89 04 24             	mov    %eax,(%esp)
 85618ee:	e8 ff f4 ff ff       	call   8560df2 <_ZN18online_preliminary18COnlinePreliminary12_PullOutRoomEP5CUserP8PvP_Roomi>
 85618f3:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 85618fa:	00 
 85618fb:	8b 45 0c             	mov    0xc(%ebp),%eax
 85618fe:	89 44 24 08          	mov    %eax,0x8(%esp)
 8561902:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8561905:	89 44 24 04          	mov    %eax,0x4(%esp)
 8561909:	8b 45 08             	mov    0x8(%ebp),%eax
 856190c:	89 04 24             	mov    %eax,(%esp)
 856190f:	e8 36 f5 ff ff       	call   8560e4a <_ZN18online_preliminary18COnlinePreliminary10_PutInRoomEP5CUserP8PvP_Roomb>
 8561914:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8561917:	83 7d ec 03          	cmpl   $0x3,-0x14(%ebp)
 856191b:	75 2c                	jne    8561949 <_ZN18online_preliminary18COnlinePreliminary11OnMatchRoomEP8PvP_Roomi+0x45f>
 856191d:	c7 44 24 10 02 00 00 	movl   $0x2,0x10(%esp)
 8561924:	00 
 8561925:	c7 44 24 0c 03 00 00 	movl   $0x3,0xc(%esp)
 856192c:	00 
 856192d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8561930:	89 44 24 08          	mov    %eax,0x8(%esp)
 8561934:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8561937:	89 44 24 04          	mov    %eax,0x4(%esp)
 856193b:	8b 45 0c             	mov    0xc(%ebp),%eax
 856193e:	89 04 24             	mov    %eax,(%esp)
 8561941:	e8 2a b7 07 00       	call   85dd070 <_ZN8PvP_Room17OnSetPVPSeatStateEP5CUseri15ENUM_SEAT_STATE17ENUM_WALKOUT_TYPE>
 8561946:	eb 01                	jmp    8561949 <_ZN18online_preliminary18COnlinePreliminary11OnMatchRoomEP8PvP_Roomi+0x45f>
 8561948:	90                   	nop
 8561949:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 856194d:	83 7d f0 07          	cmpl   $0x7,-0x10(%ebp)
 8561951:	0f 96 c0             	setbe  %al
 8561954:	84 c0                	test   %al,%al
 8561956:	0f 85 43 ff ff ff    	jne    856189f <_ZN18online_preliminary18COnlinePreliminary11OnMatchRoomEP8PvP_Roomi+0x3b5>
 856195c:	a1 3c e1 43 09       	mov    0x943e13c,%eax
 8561961:	8b 00                	mov    (%eax),%eax
 8561963:	83 c0 04             	add    $0x4,%eax
 8561966:	8b 08                	mov    (%eax),%ecx
 8561968:	8b 55 08             	mov    0x8(%ebp),%edx
 856196b:	a1 3c e1 43 09       	mov    0x943e13c,%eax
 8561970:	89 54 24 04          	mov    %edx,0x4(%esp)
 8561974:	89 04 24             	mov    %eax,(%esp)
 8561977:	ff d1                	call   *%ecx
 8561979:	8b 45 08             	mov    0x8(%ebp),%eax
 856197c:	c7 40 04 04 00 00 00 	movl   $0x4,0x4(%eax)
 8561983:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 856198a:	00 
 856198b:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8561992:	00 
 8561993:	8b 45 08             	mov    0x8(%ebp),%eax
 8561996:	89 04 24             	mov    %eax,(%esp)
 8561999:	e8 ac 07 00 00       	call   856214a <_ZN18online_preliminary18COnlinePreliminary21_SendMatchStatePacketEii>
 856199e:	8b 45 08             	mov    0x8(%ebp),%eax
 85619a1:	c7 40 6c 00 00 00 00 	movl   $0x0,0x6c(%eax)
 85619a8:	c7 44 24 04 3b 00 00 	movl   $0x3b,0x4(%esp)
 85619af:	00 
 85619b0:	8b 45 0c             	mov    0xc(%ebp),%eax
 85619b3:	89 04 24             	mov    %eax,(%esp)
 85619b6:	e8 d5 73 00 00       	call   8568d90 <_ZN8PvP_Room13gen_timer_keyE13TIMER_MESSAGE>
 85619bb:	89 c6                	mov    %eax,%esi
 85619bd:	8b 45 0c             	mov    0xc(%ebp),%eax
 85619c0:	89 04 24             	mov    %eax,(%esp)
 85619c3:	e8 cc bf cc ff       	call   822d994 <_ZN8PvP_Room9get_indexEv>
 85619c8:	89 c3                	mov    %eax,%ebx
 85619ca:	e8 ad 4a b9 ff       	call   80f647c <_Z12G_TimerQueuev>
 85619cf:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 85619d6:	00 
 85619d7:	89 74 24 14          	mov    %esi,0x14(%esp)
 85619db:	c7 44 24 10 b4 00 00 	movl   $0xb4,0x10(%esp)
 85619e2:	00 
 85619e3:	c7 44 24 0c 3b 00 00 	movl   $0x3b,0xc(%esp)
 85619ea:	00 
 85619eb:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85619ef:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 85619f6:	00 
 85619f7:	89 04 24             	mov    %eax,(%esp)
 85619fa:	e8 17 f4 0c 00       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 85619ff:	b8 01 00 00 00       	mov    $0x1,%eax
 8561a04:	81 c4 90 00 00 00    	add    $0x90,%esp
 8561a0a:	5b                   	pop    %ebx
 8561a0b:	5e                   	pop    %esi
 8561a0c:	5d                   	pop    %ebp
 8561a0d:	c3                   	ret

```

```c
// online_preliminary::COnlinePreliminary::OnMatchRoom @ 0x85614ea

/* online_preliminary::COnlinePreliminary::OnMatchRoom(PvP_Room*, int) */

undefined4 __thiscall
online_preliminary::COnlinePreliminary::OnMatchRoom
          (COnlinePreliminary *this,PvP_Room *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  TimerQueue *pTVar6;
  int *local_74;
  cMyTrace local_70 [16];
  cMyTrace local_60 [16];
  cMyTrace local_50 [16];
  cMyTrace local_40 [16];
  cMyTrace local_30 [16];
  CUser *local_20;
  PvP_Room *local_1c;
  int local_18;
  uint local_14;
  undefined4 local_10;
  
  if (*(int *)(this + 0x18) != param_2) {
    cMyTrace::cMyTrace(local_70,
                       "virtual bool online_preliminary::COnlinePreliminary::OnMatchRoom(PvP_Room*, int)"
                       ,0x7a6,0);
    cMyTrace::operator()(local_70,"OnMatchRoom timeout");
    return 0;
  }
  if (*(int *)(this + 4) != 1) {
    return 0;
  }
  local_20 = (CUser *)0x0;
  local_1c = (PvP_Room *)0x0;
  local_74 = (int *)0x0;
  (**(code **)(*pWaitingRoomList_ + 8))(pWaitingRoomList_,this,&local_74);
  if (local_74 == (int *)0x0) {
    *(undefined4 *)(this + 4) = 2;
    _SendMatchStatePacket(this,1,1);
    return 0;
  }
  local_20 = (CUser *)(**(code **)(*local_74 + 0x10))(local_74,0);
  if (local_20 == (CUser *)0x0) {
    cMyTrace::cMyTrace(local_60,
                       "virtual bool online_preliminary::COnlinePreliminary::OnMatchRoom(PvP_Room*, int)"
                       ,0x7c1,0);
    cMyTrace::operator()(local_60,"error file(%s) line(%d)","MatchingSystem.cpp",0x7c1);
    *(undefined4 *)(this + 4) = 2;
    _SendMatchStatePacket(this,1,1);
    return 0;
  }
  local_1c = (PvP_Room *)CUser::GetPVPRoom(local_20);
  if (local_1c == (PvP_Room *)0x0) {
    cMyTrace::cMyTrace(local_50,
                       "virtual bool online_preliminary::COnlinePreliminary::OnMatchRoom(PvP_Room*, int)"
                       ,0x7ca,0);
    cMyTrace::operator()(local_50,"error file(%s) line(%d)","MatchingSystem.cpp",0x7ca);
    *(undefined4 *)(this + 4) = 2;
    _SendMatchStatePacket(this,1,1);
    return 0;
  }
  iVar2 = PvP_Room::get_player_count(param_1);
  uVar3 = GetPlayCountPerOneTeam();
  if ((int)(uVar3 & 0xff) < iVar2) {
    cMyTrace::cMyTrace(local_40,
                       "virtual bool online_preliminary::COnlinePreliminary::OnMatchRoom(PvP_Room*, int)"
                       ,0x7d2,0);
    cMyTrace::operator()(local_40,"error file(%s) line(%d)","MatchingSystem.cpp",0x7d2);
    *(undefined4 *)(this + 4) = 2;
    _SendMatchStatePacket(this,1,1);
    return 0;
  }
  iVar2 = TeamInfoSecond::size((TeamInfoSecond *)(this + 0x1c));
  uVar3 = GetPlayCountPerOneTeam();
  if (iVar2 <= (int)(uVar3 & 0xff)) {
    iVar2 = PvP_Room::get_player_count(local_1c);
    uVar3 = GetPlayCountPerOneTeam();
    if (iVar2 <= (int)(uVar3 & 0xff)) {
      bVar1 = false;
      goto LAB_085617b9;
    }
  }
  bVar1 = true;
LAB_085617b9:
  if (bVar1) {
    cMyTrace::cMyTrace(local_30,
                       "virtual bool online_preliminary::COnlinePreliminary::OnMatchRoom(PvP_Room*, int)"
                       ,0x7da,0);
    cMyTrace::operator()(local_30,"error file(%s) line(%d)","MatchingSystem.cpp",0x7da);
    *(undefined4 *)(this + 4) = 2;
    _SendMatchStatePacket(this,1,1);
    uVar4 = 0;
  }
  else {
    _BackupRoomInfo(this,local_1c);
    TeamInfoSecond::reset((TeamInfoSecond *)(this + 0x44));
    PvP_Room::get_user_list(local_1c,this + 0x44);
    _SendMatchStatePacket(this,3,2);
    *(undefined4 *)(this + 4) = 3;
    local_18 = 0;
    for (local_14 = 0; local_14 < 8; local_14 = local_14 + 1) {
      local_20 = (CUser *)PvP_Room::get_user_seat(local_1c,local_14);
      if (local_20 != (CUser *)0x0) {
        local_18 = PvP_Room::get_team(local_1c,local_14);
        _PullOutRoom(this,local_20,local_1c,local_14);
        local_10 = _PutInRoom(this,local_20,param_1,false);
        if (local_18 == 3) {
          PvP_Room::OnSetPVPSeatState(param_1,local_20,local_10,3,2);
        }
      }
    }
    (**(code **)(*pWaitingRoomList_ + 4))(pWaitingRoomList_,this);
    *(undefined4 *)(this + 4) = 4;
    _SendMatchStatePacket(this,2,2);
    *(undefined4 *)(this + 0x6c) = 0;
    uVar4 = PvP_Room::gen_timer_key(param_1,0x3b);
    uVar5 = PvP_Room::get_index(param_1);
    pTVar6 = (TimerQueue *)G_TimerQueue();
    TimerQueue::InsertTimer(pTVar6,5,uVar5,0x3b,0xb4,uVar4,0);
    uVar4 = 1;
  }
  return uVar4;
}

```

---

## OnReady

```asm
// === 08561ff2 online_preliminary::COnlinePreliminary::OnReady  [0x08561ff2-0x8562021] ===
 8561ff2:	55                   	push   %ebp
 8561ff3:	89 e5                	mov    %esp,%ebp
 8561ff5:	83 ec 04             	sub    $0x4,%esp
 8561ff8:	8b 45 10             	mov    0x10(%ebp),%eax
 8561ffb:	88 45 fc             	mov    %al,-0x4(%ebp)
 8561ffe:	0f b6 45 fc          	movzbl -0x4(%ebp),%eax
 8562002:	83 f0 01             	xor    $0x1,%eax
 8562005:	84 c0                	test   %al,%al
 8562007:	74 12                	je     856201b <_ZN18online_preliminary18COnlinePreliminary7OnReadyEP5CUserb+0x29>
 8562009:	8b 45 08             	mov    0x8(%ebp),%eax
 856200c:	8b 40 04             	mov    0x4(%eax),%eax
 856200f:	83 f8 04             	cmp    $0x4,%eax
 8562012:	75 07                	jne    856201b <_ZN18online_preliminary18COnlinePreliminary7OnReadyEP5CUserb+0x29>
 8562014:	b8 00 00 00 00       	mov    $0x0,%eax
 8562019:	eb 05                	jmp    8562020 <_ZN18online_preliminary18COnlinePreliminary7OnReadyEP5CUserb+0x2e>
 856201b:	b8 01 00 00 00       	mov    $0x1,%eax
 8562020:	c9                   	leave
 8562021:	c3                   	ret

```

```c
// online_preliminary::COnlinePreliminary::OnReady @ 0x8561ff2

/* online_preliminary::COnlinePreliminary::OnReady(CUser*, bool) */

undefined4 __thiscall
online_preliminary::COnlinePreliminary::OnReady
          (COnlinePreliminary *this,CUser *param_1,bool param_2)

{
  undefined4 uVar1;
  
  if ((param_2) || (*(int *)(this + 4) != 4)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## OnRegisterMatch

```asm
// === 085613de online_preliminary::COnlinePreliminary::OnRegisterMatch  [0x085613de-0x85614e9] ===
 85613de:	55                   	push   %ebp
 85613df:	89 e5                	mov    %esp,%ebp
 85613e1:	53                   	push   %ebx
 85613e2:	83 ec 24             	sub    $0x24,%esp
 85613e5:	8b 45 08             	mov    0x8(%ebp),%eax
 85613e8:	8b 40 04             	mov    0x4(%eax),%eax
 85613eb:	83 f8 01             	cmp    $0x1,%eax
 85613ee:	75 0a                	jne    85613fa <_ZN18online_preliminary18COnlinePreliminary15OnRegisterMatchEP5CUserP8PvP_Room+0x1c>
 85613f0:	b8 01 00 00 00       	mov    $0x1,%eax
 85613f5:	e9 ea 00 00 00       	jmp    85614e4 <_ZN18online_preliminary18COnlinePreliminary15OnRegisterMatchEP5CUserP8PvP_Room+0x106>
 85613fa:	0f b6 05 38 e1 43 09 	movzbl 0x943e138,%eax
 8561401:	83 f0 01             	xor    $0x1,%eax
 8561404:	84 c0                	test   %al,%al
 8561406:	74 25                	je     856142d <_ZN18online_preliminary18COnlinePreliminary15OnRegisterMatchEP5CUserP8PvP_Room+0x4f>
 8561408:	c7 44 24 08 13 00 00 	movl   $0x13,0x8(%esp)
 856140f:	00 
 8561410:	c7 44 24 04 c7 00 00 	movl   $0xc7,0x4(%esp)
 8561417:	00 
 8561418:	8b 45 0c             	mov    0xc(%ebp),%eax
 856141b:	89 04 24             	mov    %eax,(%esp)
 856141e:	e8 1f ab 11 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8561423:	b8 00 00 00 00       	mov    $0x0,%eax
 8561428:	e9 b7 00 00 00       	jmp    85614e4 <_ZN18online_preliminary18COnlinePreliminary15OnRegisterMatchEP5CUserP8PvP_Room+0x106>
 856142d:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8561434:	8b 45 10             	mov    0x10(%ebp),%eax
 8561437:	89 44 24 04          	mov    %eax,0x4(%esp)
 856143b:	8b 45 08             	mov    0x8(%ebp),%eax
 856143e:	89 04 24             	mov    %eax,(%esp)
 8561441:	e8 80 fe ff ff       	call   85612c6 <_ZNK18online_preliminary18COnlinePreliminary15_CheckMatchableEP8PvP_Room>
 8561446:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8561449:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 856144d:	0f 95 c0             	setne  %al
 8561450:	84 c0                	test   %al,%al
 8561452:	74 24                	je     8561478 <_ZN18online_preliminary18COnlinePreliminary15OnRegisterMatchEP5CUserP8PvP_Room+0x9a>
 8561454:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8561457:	0f b6 c0             	movzbl %al,%eax
 856145a:	89 44 24 08          	mov    %eax,0x8(%esp)
 856145e:	c7 44 24 04 c7 00 00 	movl   $0xc7,0x4(%esp)
 8561465:	00 
 8561466:	8b 45 0c             	mov    0xc(%ebp),%eax
 8561469:	89 04 24             	mov    %eax,(%esp)
 856146c:	e8 d1 aa 11 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8561471:	b8 00 00 00 00       	mov    $0x0,%eax
 8561476:	eb 6c                	jmp    85614e4 <_ZN18online_preliminary18COnlinePreliminary15OnRegisterMatchEP5CUserP8PvP_Room+0x106>
 8561478:	8b 45 08             	mov    0x8(%ebp),%eax
 856147b:	8b 40 04             	mov    0x4(%eax),%eax
 856147e:	83 f8 02             	cmp    $0x2,%eax
 8561481:	74 12                	je     8561495 <_ZN18online_preliminary18COnlinePreliminary15OnRegisterMatchEP5CUserP8PvP_Room+0xb7>
 8561483:	8b 45 10             	mov    0x10(%ebp),%eax
 8561486:	89 44 24 04          	mov    %eax,0x4(%esp)
 856148a:	8b 45 08             	mov    0x8(%ebp),%eax
 856148d:	89 04 24             	mov    %eax,(%esp)
 8561490:	e8 0f fe ff ff       	call   85612a4 <_ZN18online_preliminary18COnlinePreliminary20_RegisterWaitingRoomEP8PvP_Room>
 8561495:	8b 45 08             	mov    0x8(%ebp),%eax
 8561498:	c7 40 04 01 00 00 00 	movl   $0x1,0x4(%eax)
 856149f:	8b 45 08             	mov    0x8(%ebp),%eax
 85614a2:	8b 58 18             	mov    0x18(%eax),%ebx
 85614a5:	8b 45 10             	mov    0x10(%ebp),%eax
 85614a8:	89 04 24             	mov    %eax,(%esp)
 85614ab:	e8 e4 c4 cc ff       	call   822d994 <_ZN8PvP_Room9get_indexEv>
 85614b0:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85614b4:	89 44 24 04          	mov    %eax,0x4(%esp)
 85614b8:	c7 04 24 0a 00 00 00 	movl   $0xa,(%esp)
 85614bf:	e8 50 69 0d 00       	call   8637e14 <_ZN18TimerStartMatching15registNextTimerElii>
 85614c4:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 85614cb:	00 
 85614cc:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85614d3:	00 
 85614d4:	8b 45 08             	mov    0x8(%ebp),%eax
 85614d7:	89 04 24             	mov    %eax,(%esp)
 85614da:	e8 6b 0c 00 00       	call   856214a <_ZN18online_preliminary18COnlinePreliminary21_SendMatchStatePacketEii>
 85614df:	b8 01 00 00 00       	mov    $0x1,%eax
 85614e4:	83 c4 24             	add    $0x24,%esp
 85614e7:	5b                   	pop    %ebx
 85614e8:	5d                   	pop    %ebp
 85614e9:	c3                   	ret

```

```c
// online_preliminary::COnlinePreliminary::OnRegisterMatch @ 0x85613de

/* online_preliminary::COnlinePreliminary::OnRegisterMatch(CUser*, PvP_Room*) */

undefined4 __thiscall
online_preliminary::COnlinePreliminary::OnRegisterMatch
          (COnlinePreliminary *this,CUser *param_1,PvP_Room *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  if (*(int *)(this + 4) == 1) {
    uVar2 = 1;
  }
  else if (bMatchable_ == '\x01') {
    uVar3 = _CheckMatchable(this,param_2);
    if (uVar3 == 0) {
      if (*(int *)(this + 4) != 2) {
        _RegisterWaitingRoom((PvP_Room *)this);
      }
      *(undefined4 *)(this + 4) = 1;
      iVar1 = *(int *)(this + 0x18);
      iVar4 = PvP_Room::get_index(param_2);
      TimerStartMatching::registNextTimer(10,iVar4,iVar1);
      _SendMatchStatePacket(this,0,1);
      uVar2 = 1;
    }
    else {
      CUser::SendCmdErrorPacket(param_1,199,uVar3 & 0xff);
      uVar2 = 0;
    }
  }
  else {
    CUser::SendCmdErrorPacket(param_1,199,0x13);
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## OnReward

```asm
// === 08562250 online_preliminary::COnlinePreliminary::OnReward  [0x08562250-0x85623df] ===
 8562250:	55                   	push   %ebp
 8562251:	89 e5                	mov    %esp,%ebp
 8562253:	83 ec 28             	sub    $0x28,%esp
 8562256:	8b 45 14             	mov    0x14(%ebp),%eax
 8562259:	88 45 f4             	mov    %al,-0xc(%ebp)
 856225c:	80 7d f4 00          	cmpb   $0x0,-0xc(%ebp)
 8562260:	74 7f                	je     85622e1 <_ZN18online_preliminary18COnlinePreliminary8OnRewardEP8PvP_Roomib+0x91>
 8562262:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8562269:	00 
 856226a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8562271:	00 
 8562272:	8b 45 08             	mov    0x8(%ebp),%eax
 8562275:	89 04 24             	mov    %eax,(%esp)
 8562278:	e8 65 e9 ff ff       	call   8560be2 <_ZN18online_preliminary18COnlinePreliminary13_UpdateRatingEi22ENUM_ELO_RATING_SYSTEM>
 856227d:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8562284:	00 
 8562285:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 856228c:	00 
 856228d:	8b 45 08             	mov    0x8(%ebp),%eax
 8562290:	89 04 24             	mov    %eax,(%esp)
 8562293:	e8 4a e9 ff ff       	call   8560be2 <_ZN18online_preliminary18COnlinePreliminary13_UpdateRatingEi22ENUM_ELO_RATING_SYSTEM>
 8562298:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 856229f:	00 
 85622a0:	8b 45 08             	mov    0x8(%ebp),%eax
 85622a3:	89 04 24             	mov    %eax,(%esp)
 85622a6:	e8 bb 65 00 00       	call   8568866 <_ZN18online_preliminary18COnlinePreliminary8_GetTeamE15ENUM_SEAT_STATE>
 85622ab:	89 44 24 04          	mov    %eax,0x4(%esp)
 85622af:	8b 45 08             	mov    0x8(%ebp),%eax
 85622b2:	89 04 24             	mov    %eax,(%esp)
 85622b5:	e8 40 e1 ff ff       	call   85603fa <_ZN18online_preliminary18COnlinePreliminary17_IncreaseWinCountE22ENUM_SCHOOL_MATCH_TEAM>
 85622ba:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 85622c1:	00 
 85622c2:	8b 45 08             	mov    0x8(%ebp),%eax
 85622c5:	89 04 24             	mov    %eax,(%esp)
 85622c8:	e8 99 65 00 00       	call   8568866 <_ZN18online_preliminary18COnlinePreliminary8_GetTeamE15ENUM_SEAT_STATE>
 85622cd:	89 44 24 04          	mov    %eax,0x4(%esp)
 85622d1:	8b 45 08             	mov    0x8(%ebp),%eax
 85622d4:	89 04 24             	mov    %eax,(%esp)
 85622d7:	e8 1e e1 ff ff       	call   85603fa <_ZN18online_preliminary18COnlinePreliminary17_IncreaseWinCountE22ENUM_SCHOOL_MATCH_TEAM>
 85622dc:	e9 fc 00 00 00       	jmp    85623dd <_ZN18online_preliminary18COnlinePreliminary8OnRewardEP8PvP_Roomib+0x18d>
 85622e1:	83 7d 10 01          	cmpl   $0x1,0x10(%ebp)
 85622e5:	75 7c                	jne    8562363 <_ZN18online_preliminary18COnlinePreliminary8OnRewardEP8PvP_Roomib+0x113>
 85622e7:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 85622ee:	00 
 85622ef:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85622f6:	00 
 85622f7:	8b 45 08             	mov    0x8(%ebp),%eax
 85622fa:	89 04 24             	mov    %eax,(%esp)
 85622fd:	e8 e0 e8 ff ff       	call   8560be2 <_ZN18online_preliminary18COnlinePreliminary13_UpdateRatingEi22ENUM_ELO_RATING_SYSTEM>
 8562302:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8562309:	00 
 856230a:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8562311:	00 
 8562312:	8b 45 08             	mov    0x8(%ebp),%eax
 8562315:	89 04 24             	mov    %eax,(%esp)
 8562318:	e8 c5 e8 ff ff       	call   8560be2 <_ZN18online_preliminary18COnlinePreliminary13_UpdateRatingEi22ENUM_ELO_RATING_SYSTEM>
 856231d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8562324:	00 
 8562325:	8b 45 08             	mov    0x8(%ebp),%eax
 8562328:	89 04 24             	mov    %eax,(%esp)
 856232b:	e8 36 65 00 00       	call   8568866 <_ZN18online_preliminary18COnlinePreliminary8_GetTeamE15ENUM_SEAT_STATE>
 8562330:	89 44 24 04          	mov    %eax,0x4(%esp)
 8562334:	8b 45 08             	mov    0x8(%ebp),%eax
 8562337:	89 04 24             	mov    %eax,(%esp)
 856233a:	e8 bb e0 ff ff       	call   85603fa <_ZN18online_preliminary18COnlinePreliminary17_IncreaseWinCountE22ENUM_SCHOOL_MATCH_TEAM>
 856233f:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8562346:	00 
 8562347:	8b 45 08             	mov    0x8(%ebp),%eax
 856234a:	89 04 24             	mov    %eax,(%esp)
 856234d:	e8 14 65 00 00       	call   8568866 <_ZN18online_preliminary18COnlinePreliminary8_GetTeamE15ENUM_SEAT_STATE>
 8562352:	89 44 24 04          	mov    %eax,0x4(%esp)
 8562356:	8b 45 08             	mov    0x8(%ebp),%eax
 8562359:	89 04 24             	mov    %eax,(%esp)
 856235c:	e8 23 e1 ff ff       	call   8560484 <_ZN18online_preliminary18COnlinePreliminary18_IncreaseLoseCountE22ENUM_SCHOOL_MATCH_TEAM>
 8562361:	eb 7a                	jmp    85623dd <_ZN18online_preliminary18COnlinePreliminary8OnRewardEP8PvP_Roomib+0x18d>
 8562363:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 856236a:	00 
 856236b:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8562372:	00 
 8562373:	8b 45 08             	mov    0x8(%ebp),%eax
 8562376:	89 04 24             	mov    %eax,(%esp)
 8562379:	e8 64 e8 ff ff       	call   8560be2 <_ZN18online_preliminary18COnlinePreliminary13_UpdateRatingEi22ENUM_ELO_RATING_SYSTEM>
 856237e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8562385:	00 
 8562386:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 856238d:	00 
 856238e:	8b 45 08             	mov    0x8(%ebp),%eax
 8562391:	89 04 24             	mov    %eax,(%esp)
 8562394:	e8 49 e8 ff ff       	call   8560be2 <_ZN18online_preliminary18COnlinePreliminary13_UpdateRatingEi22ENUM_ELO_RATING_SYSTEM>
 8562399:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85623a0:	00 
 85623a1:	8b 45 08             	mov    0x8(%ebp),%eax
 85623a4:	89 04 24             	mov    %eax,(%esp)
 85623a7:	e8 ba 64 00 00       	call   8568866 <_ZN18online_preliminary18COnlinePreliminary8_GetTeamE15ENUM_SEAT_STATE>
 85623ac:	89 44 24 04          	mov    %eax,0x4(%esp)
 85623b0:	8b 45 08             	mov    0x8(%ebp),%eax
 85623b3:	89 04 24             	mov    %eax,(%esp)
 85623b6:	e8 c9 e0 ff ff       	call   8560484 <_ZN18online_preliminary18COnlinePreliminary18_IncreaseLoseCountE22ENUM_SCHOOL_MATCH_TEAM>
 85623bb:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 85623c2:	00 
 85623c3:	8b 45 08             	mov    0x8(%ebp),%eax
 85623c6:	89 04 24             	mov    %eax,(%esp)
 85623c9:	e8 98 64 00 00       	call   8568866 <_ZN18online_preliminary18COnlinePreliminary8_GetTeamE15ENUM_SEAT_STATE>
 85623ce:	89 44 24 04          	mov    %eax,0x4(%esp)
 85623d2:	8b 45 08             	mov    0x8(%ebp),%eax
 85623d5:	89 04 24             	mov    %eax,(%esp)
 85623d8:	e8 1d e0 ff ff       	call   85603fa <_ZN18online_preliminary18COnlinePreliminary17_IncreaseWinCountE22ENUM_SCHOOL_MATCH_TEAM>
 85623dd:	c9                   	leave
 85623de:	c3                   	ret
 85623df:	90                   	nop

```

```c
// online_preliminary::COnlinePreliminary::OnReward @ 0x8562250

/* online_preliminary::COnlinePreliminary::OnReward(PvP_Room*, int, bool) */

void __thiscall
online_preliminary::COnlinePreliminary::OnReward
          (COnlinePreliminary *this,PvP_Room *param_1,int param_2,bool param_3)

{
  undefined4 uVar1;
  
  if (param_3) {
    _UpdateRating(this,1,1);
    _UpdateRating(this,2,1);
    uVar1 = _GetTeam(this,1);
    _IncreaseWinCount(this,uVar1);
    uVar1 = _GetTeam(this,2);
    _IncreaseWinCount(this,uVar1);
  }
  else if (param_2 == 1) {
    _UpdateRating(this,1,2);
    _UpdateRating(this,2,0);
    uVar1 = _GetTeam(this,1);
    _IncreaseWinCount(this,uVar1);
    uVar1 = _GetTeam(this,2);
    _IncreaseLoseCount(this,uVar1);
  }
  else {
    _UpdateRating(this,2,2);
    _UpdateRating(this,1,0);
    uVar1 = _GetTeam(this,1);
    _IncreaseLoseCount(this,uVar1);
    uVar1 = _GetTeam(this,2);
    _IncreaseWinCount(this,uVar1);
  }
  return;
}

```

---

## OnStartFight

```asm
// === 08561a52 online_preliminary::COnlinePreliminary::OnStartFight  [0x08561a52-0x8561a6f] ===
 8561a52:	55                   	push   %ebp
 8561a53:	89 e5                	mov    %esp,%ebp
 8561a55:	83 ec 18             	sub    $0x18,%esp
 8561a58:	8b 45 08             	mov    0x8(%ebp),%eax
 8561a5b:	c7 40 04 05 00 00 00 	movl   $0x5,0x4(%eax)
 8561a62:	8b 45 08             	mov    0x8(%ebp),%eax
 8561a65:	89 04 24             	mov    %eax,(%esp)
 8561a68:	e8 81 eb ff ff       	call   85605ee <_ZN18online_preliminary18COnlinePreliminary27_IncreaseEachOtherPlayCountEv>
 8561a6d:	c9                   	leave
 8561a6e:	c3                   	ret
 8561a6f:	90                   	nop

```

```c
// online_preliminary::COnlinePreliminary::OnStartFight @ 0x8561a52

/* online_preliminary::COnlinePreliminary::OnStartFight() */

void __thiscall online_preliminary::COnlinePreliminary::OnStartFight(COnlinePreliminary *this)

{
  *(undefined4 *)(this + 4) = 5;
  _IncreaseEachOtherPlayCount(this);
  return;
}

```

---

## OnWalkOut

```asm
// === 08561f8c online_preliminary::COnlinePreliminary::OnWalkOut  [0x08561f8c-0x8561ff1] ===
 8561f8c:	55                   	push   %ebp
 8561f8d:	89 e5                	mov    %esp,%ebp
 8561f8f:	83 ec 38             	sub    $0x38,%esp
 8561f92:	8b 45 10             	mov    0x10(%ebp),%eax
 8561f95:	89 44 24 04          	mov    %eax,0x4(%esp)
 8561f99:	8b 45 0c             	mov    0xc(%ebp),%eax
 8561f9c:	89 04 24             	mov    %eax,(%esp)
 8561f9f:	e8 ce 72 07 00       	call   85d9272 <_ZN8PvP_Room8get_teamEi>
 8561fa4:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8561fa7:	8b 45 10             	mov    0x10(%ebp),%eax
 8561faa:	89 44 24 04          	mov    %eax,0x4(%esp)
 8561fae:	8b 45 0c             	mov    0xc(%ebp),%eax
 8561fb1:	89 04 24             	mov    %eax,(%esp)
 8561fb4:	e8 65 72 07 00       	call   85d921e <_ZN8PvP_Room13get_user_seatEi>
 8561fb9:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8561fbc:	8b 45 08             	mov    0x8(%ebp),%eax
 8561fbf:	8b 00                	mov    (%eax),%eax
 8561fc1:	83 c0 2c             	add    $0x2c,%eax
 8561fc4:	8b 08                	mov    (%eax),%ecx
 8561fc6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8561fc9:	8b 55 10             	mov    0x10(%ebp),%edx
 8561fcc:	89 54 24 10          	mov    %edx,0x10(%esp)
 8561fd0:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8561fd4:	8b 45 0c             	mov    0xc(%ebp),%eax
 8561fd7:	89 44 24 08          	mov    %eax,0x8(%esp)
 8561fdb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8561fde:	89 44 24 04          	mov    %eax,0x4(%esp)
 8561fe2:	8b 45 08             	mov    0x8(%ebp),%eax
 8561fe5:	89 04 24             	mov    %eax,(%esp)
 8561fe8:	ff d1                	call   *%ecx
 8561fea:	b8 01 00 00 00       	mov    $0x1,%eax
 8561fef:	c9                   	leave
 8561ff0:	c3                   	ret
 8561ff1:	90                   	nop

```

```c
// online_preliminary::COnlinePreliminary::OnWalkOut @ 0x8561f8c

/* online_preliminary::COnlinePreliminary::OnWalkOut(PvP_Room*, int) */

undefined4 __thiscall
online_preliminary::COnlinePreliminary::OnWalkOut
          (COnlinePreliminary *this,PvP_Room *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = PvP_Room::get_team(param_1,param_2);
  uVar2 = PvP_Room::get_user_seat(param_1,param_2);
  (**(code **)(*(int *)this + 0x2c))(this,uVar2,param_1,uVar1,param_2);
  return 1;
}

```

---

## RequestMap

```asm
// === 085608f2 online_preliminary::COnlinePreliminary::RequestMap  [0x085608f2-0x856091f] ===
 85608f2:	55                   	push   %ebp
 85608f3:	89 e5                	mov    %esp,%ebp
 85608f5:	83 ec 18             	sub    $0x18,%esp
 85608f8:	8b 45 0c             	mov    0xc(%ebp),%eax
 85608fb:	66 c7 00 00 00       	movw   $0x0,(%eax)
 8560900:	8b 45 10             	mov    0x10(%ebp),%eax
 8560903:	8b 00                	mov    (%eax),%eax
 8560905:	83 f8 06             	cmp    $0x6,%eax
 8560908:	74 14                	je     856091e <_ZN18online_preliminary18COnlinePreliminary10RequestMapERsR15PVP_BATTLE_MODE+0x2c>
 856090a:	e8 8c b8 b6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 856090f:	89 04 24             	mov    %eax,(%esp)
 8560912:	e8 97 cb ee ff       	call   844d4ae <_ZN12CDataManager10GetPvPModeEv>
 8560917:	89 c2                	mov    %eax,%edx
 8560919:	8b 45 10             	mov    0x10(%ebp),%eax
 856091c:	89 10                	mov    %edx,(%eax)
 856091e:	c9                   	leave
 856091f:	c3                   	ret

```

```c
// online_preliminary::COnlinePreliminary::RequestMap @ 0x85608f2

/* online_preliminary::COnlinePreliminary::RequestMap(short&, PVP_BATTLE_MODE&) */

void __thiscall
online_preliminary::COnlinePreliminary::RequestMap
          (COnlinePreliminary *this,short *param_1,PVP_BATTLE_MODE *param_2)

{
  CDataManager *this_00;
  undefined4 uVar1;
  
  *param_1 = 0;
  if (*(int *)param_2 != 6) {
    this_00 = (CDataManager *)G_CDataManager();
    uVar1 = CDataManager::GetPvPMode(this_00);
    *(undefined4 *)param_2 = uVar1;
  }
  return;
}

```

---

## SetMatchAble

```asm
// === 085608da online_preliminary::COnlinePreliminary::SetMatchAble  [0x085608da-0x85608f1] ===
 85608da:	55                   	push   %ebp
 85608db:	89 e5                	mov    %esp,%ebp
 85608dd:	83 ec 04             	sub    $0x4,%esp
 85608e0:	8b 45 08             	mov    0x8(%ebp),%eax
 85608e3:	88 45 fc             	mov    %al,-0x4(%ebp)
 85608e6:	0f b6 45 fc          	movzbl -0x4(%ebp),%eax
 85608ea:	a2 38 e1 43 09       	mov    %al,0x943e138
 85608ef:	c9                   	leave
 85608f0:	c3                   	ret
 85608f1:	90                   	nop

```

```c
// online_preliminary::COnlinePreliminary::SetMatchAble @ 0x85608da

/* online_preliminary::COnlinePreliminary::SetMatchAble(bool) */

void online_preliminary::COnlinePreliminary::SetMatchAble(bool param_1)

{
  bMatchable_ = param_1;
  return;
}

```

---

## SetPlayCountPerOneTeam

```asm
// === 085608d4 online_preliminary::COnlinePreliminary::SetPlayCountPerOneTeam  [0x085608d4-0x85608d9] ===
 85608d4:	55                   	push   %ebp
 85608d5:	89 e5                	mov    %esp,%ebp
 85608d7:	5d                   	pop    %ebp
 85608d8:	c3                   	ret
 85608d9:	90                   	nop

```

```c
// online_preliminary::COnlinePreliminary::SetPlayCountPerOneTeam @ 0x85608d4

/* online_preliminary::COnlinePreliminary::SetPlayCountPerOneTeam(unsigned int) */

void online_preliminary::COnlinePreliminary::SetPlayCountPerOneTeam(uint param_1)

{
  return;
}

```

---

## _BackupRoomInfo

```asm
// === 08560f74 online_preliminary::COnlinePreliminary::_BackupRoomInfo  [0x08560f74-0x8560f91] ===
 8560f74:	55                   	push   %ebp
 8560f75:	89 e5                	mov    %esp,%ebp
 8560f77:	83 ec 18             	sub    $0x18,%esp
 8560f7a:	8b 45 08             	mov    0x8(%ebp),%eax
 8560f7d:	83 c0 08             	add    $0x8,%eax
 8560f80:	89 44 24 04          	mov    %eax,0x4(%esp)
 8560f84:	8b 45 0c             	mov    0xc(%ebp),%eax
 8560f87:	89 04 24             	mov    %eax,(%esp)
 8560f8a:	e8 07 83 07 00       	call   85d9296 <_ZN8PvP_Room13get_room_infoEP13PVP_ROOM_INFO>
 8560f8f:	c9                   	leave
 8560f90:	c3                   	ret
 8560f91:	90                   	nop

```

```c
// online_preliminary::COnlinePreliminary::_BackupRoomInfo @ 0x8560f74

/* online_preliminary::COnlinePreliminary::_BackupRoomInfo(PvP_Room*) */

void __thiscall
online_preliminary::COnlinePreliminary::_BackupRoomInfo(COnlinePreliminary *this,PvP_Room *param_1)

{
  PvP_Room::get_room_info(param_1,(PVP_ROOM_INFO *)(this + 8));
  return;
}

```

---

## _CheckMatchable

```asm
// === 085612c6 online_preliminary::COnlinePreliminary::_CheckMatchable  [0x085612c6-0x85613dd] ===
 85612c6:	55                   	push   %ebp
 85612c7:	89 e5                	mov    %esp,%ebp
 85612c9:	53                   	push   %ebx
 85612ca:	83 ec 34             	sub    $0x34,%esp
 85612cd:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 85612d4:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 85612db:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 85612e2:	e9 b2 00 00 00       	jmp    8561399 <_ZNK18online_preliminary18COnlinePreliminary15_CheckMatchableEP8PvP_Room+0xd3>
 85612e7:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85612ea:	89 44 24 04          	mov    %eax,0x4(%esp)
 85612ee:	8b 45 0c             	mov    0xc(%ebp),%eax
 85612f1:	89 04 24             	mov    %eax,(%esp)
 85612f4:	e8 79 7f 07 00       	call   85d9272 <_ZN8PvP_Room8get_teamEi>
 85612f9:	83 f8 03             	cmp    $0x3,%eax
 85612fc:	0f 94 c0             	sete   %al
 85612ff:	84 c0                	test   %al,%al
 8561301:	74 09                	je     856130c <_ZNK18online_preliminary18COnlinePreliminary15_CheckMatchableEP8PvP_Room+0x46>
 8561303:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 8561307:	e9 89 00 00 00       	jmp    8561395 <_ZNK18online_preliminary18COnlinePreliminary15_CheckMatchableEP8PvP_Room+0xcf>
 856130c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 856130f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8561313:	8b 45 0c             	mov    0xc(%ebp),%eax
 8561316:	89 04 24             	mov    %eax,(%esp)
 8561319:	e8 00 7f 07 00       	call   85d921e <_ZN8PvP_Room13get_user_seatEi>
 856131e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8561321:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8561325:	74 6d                	je     8561394 <_ZNK18online_preliminary18COnlinePreliminary15_CheckMatchableEP8PvP_Room+0xce>
 8561327:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 856132b:	75 10                	jne    856133d <_ZNK18online_preliminary18COnlinePreliminary15_CheckMatchableEP8PvP_Room+0x77>
 856132d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8561330:	89 04 24             	mov    %eax,(%esp)
 8561333:	e8 aa 4a 0e 00       	call   8645de2 <_ZNK15CUserCharacInfo35GetCurCharacOnlinePreliminaryTeamIdEv>
 8561338:	89 45 ec             	mov    %eax,-0x14(%ebp)
 856133b:	eb 58                	jmp    8561395 <_ZNK18online_preliminary18COnlinePreliminary15_CheckMatchableEP8PvP_Room+0xcf>
 856133d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8561340:	89 04 24             	mov    %eax,(%esp)
 8561343:	e8 9a 4a 0e 00       	call   8645de2 <_ZNK15CUserCharacInfo35GetCurCharacOnlinePreliminaryTeamIdEv>
 8561348:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 856134b:	0f 95 c0             	setne  %al
 856134e:	84 c0                	test   %al,%al
 8561350:	74 43                	je     8561395 <_ZNK18online_preliminary18COnlinePreliminary15_CheckMatchableEP8PvP_Room+0xcf>
 8561352:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8561355:	89 04 24             	mov    %eax,(%esp)
 8561358:	e8 85 4a 0e 00       	call   8645de2 <_ZNK15CUserCharacInfo35GetCurCharacOnlinePreliminaryTeamIdEv>
 856135d:	89 44 24 14          	mov    %eax,0x14(%esp)
 8561361:	c7 44 24 10 38 23 ca 	movl   $0x8ca2338,0x10(%esp)
 8561368:	08 
 8561369:	c7 44 24 0c 71 07 00 	movl   $0x771,0xc(%esp)
 8561370:	00 
 8561371:	c7 44 24 08 20 3a ca 	movl   $0x8ca3a20,0x8(%esp)
 8561378:	08 
 8561379:	c7 44 24 04 62 22 ca 	movl   $0x8ca2262,0x4(%esp)
 8561380:	08 
 8561381:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8561388:	e8 7d 28 57 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 856138d:	b8 16 00 00 00       	mov    $0x16,%eax
 8561392:	eb 44                	jmp    85613d8 <_ZNK18online_preliminary18COnlinePreliminary15_CheckMatchableEP8PvP_Room+0x112>
 8561394:	90                   	nop
 8561395:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8561399:	83 7d f0 07          	cmpl   $0x7,-0x10(%ebp)
 856139d:	0f 9e c0             	setle  %al
 85613a0:	84 c0                	test   %al,%al
 85613a2:	0f 85 3f ff ff ff    	jne    85612e7 <_ZNK18online_preliminary18COnlinePreliminary15_CheckMatchableEP8PvP_Room+0x21>
 85613a8:	8b 45 08             	mov    0x8(%ebp),%eax
 85613ab:	83 c0 1c             	add    $0x1c,%eax
 85613ae:	89 04 24             	mov    %eax,(%esp)
 85613b1:	e8 f4 ea ff ff       	call   855feaa <_ZNK14TeamInfoSecond4sizeEv>
 85613b6:	89 c3                	mov    %eax,%ebx
 85613b8:	2b 5d e8             	sub    -0x18(%ebp),%ebx
 85613bb:	e8 28 eb ff ff       	call   855fee8 <_ZN18online_preliminary18COnlinePreliminary22GetPlayCountPerOneTeamEv>
 85613c0:	0f b6 c0             	movzbl %al,%eax
 85613c3:	39 c3                	cmp    %eax,%ebx
 85613c5:	0f 95 c0             	setne  %al
 85613c8:	84 c0                	test   %al,%al
 85613ca:	74 07                	je     85613d3 <_ZNK18online_preliminary18COnlinePreliminary15_CheckMatchableEP8PvP_Room+0x10d>
 85613cc:	b8 16 00 00 00       	mov    $0x16,%eax
 85613d1:	eb 05                	jmp    85613d8 <_ZNK18online_preliminary18COnlinePreliminary15_CheckMatchableEP8PvP_Room+0x112>
 85613d3:	b8 00 00 00 00       	mov    $0x0,%eax
 85613d8:	83 c4 34             	add    $0x34,%esp
 85613db:	5b                   	pop    %ebx
 85613dc:	5d                   	pop    %ebp
 85613dd:	c3                   	ret

```

```c
// online_preliminary::COnlinePreliminary::_CheckMatchable @ 0x85612c6

/* online_preliminary::COnlinePreliminary::_CheckMatchable(PvP_Room*) const */

undefined4 __thiscall
online_preliminary::COnlinePreliminary::_CheckMatchable(COnlinePreliminary *this,PvP_Room *param_1)

{
  CUserCharacInfo *this_00;
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int local_1c;
  int local_18;
  int local_14;
  
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  do {
    if (7 < local_14) {
      iVar1 = TeamInfoSecond::size((TeamInfoSecond *)(this + 0x1c));
      uVar2 = GetPlayCountPerOneTeam();
      if (iVar1 - local_1c == (uVar2 & 0xff)) {
        uVar3 = 0;
      }
      else {
        uVar3 = 0x16;
      }
      return uVar3;
    }
    iVar1 = PvP_Room::get_team(param_1,local_14);
    if (iVar1 == 3) {
      local_1c = local_1c + 1;
    }
    else {
      this_00 = (CUserCharacInfo *)PvP_Room::get_user_seat(param_1,local_14);
      if (this_00 != (CUserCharacInfo *)0x0) {
        if (local_18 == 0) {
          local_18 = CUserCharacInfo::GetCurCharacOnlinePreliminaryTeamId(this_00);
        }
        else {
          iVar1 = CUserCharacInfo::GetCurCharacOnlinePreliminaryTeamId(this_00);
          if (iVar1 != local_18) {
            uVar3 = CUserCharacInfo::GetCurCharacOnlinePreliminaryTeamId(this_00);
            LogManager::logFormat
                      (1,"MatchingSystem.cpp",
                       "int online_preliminary::COnlinePreliminary::_CheckMatchable(PvP_Room*) const"
                       ,0x771,"(%d) found a different team_id(%d)",uVar3);
            return 0x16;
          }
        }
      }
    }
    local_14 = local_14 + 1;
  } while( true );
}

```

---

## _CheckObserver

```asm
// === 08560736 online_preliminary::COnlinePreliminary::_CheckObserver  [0x08560736-0x85607b1] ===
 8560736:	55                   	push   %ebp
 8560737:	89 e5                	mov    %esp,%ebp
 8560739:	53                   	push   %ebx
 856073a:	83 ec 24             	sub    $0x24,%esp
 856073d:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8560744:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 856074b:	eb 24                	jmp    8560771 <_ZN18online_preliminary18COnlinePreliminary14_CheckObserverEP8PvP_RoomP5CUser+0x3b>
 856074d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8560750:	89 44 24 04          	mov    %eax,0x4(%esp)
 8560754:	8b 45 0c             	mov    0xc(%ebp),%eax
 8560757:	89 04 24             	mov    %eax,(%esp)
 856075a:	e8 13 8b 07 00       	call   85d9272 <_ZN8PvP_Room8get_teamEi>
 856075f:	83 f8 03             	cmp    $0x3,%eax
 8560762:	0f 94 c0             	sete   %al
 8560765:	84 c0                	test   %al,%al
 8560767:	74 04                	je     856076d <_ZN18online_preliminary18COnlinePreliminary14_CheckObserverEP8PvP_RoomP5CUser+0x37>
 8560769:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 856076d:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8560771:	83 7d f4 07          	cmpl   $0x7,-0xc(%ebp)
 8560775:	0f 9e c0             	setle  %al
 8560778:	84 c0                	test   %al,%al
 856077a:	75 d1                	jne    856074d <_ZN18online_preliminary18COnlinePreliminary14_CheckObserverEP8PvP_RoomP5CUser+0x17>
 856077c:	8b 45 08             	mov    0x8(%ebp),%eax
 856077f:	83 c0 1c             	add    $0x1c,%eax
 8560782:	89 04 24             	mov    %eax,(%esp)
 8560785:	e8 20 f7 ff ff       	call   855feaa <_ZNK14TeamInfoSecond4sizeEv>
 856078a:	89 c3                	mov    %eax,%ebx
 856078c:	2b 5d f0             	sub    -0x10(%ebp),%ebx
 856078f:	e8 54 f7 ff ff       	call   855fee8 <_ZN18online_preliminary18COnlinePreliminary22GetPlayCountPerOneTeamEv>
 8560794:	0f b6 c0             	movzbl %al,%eax
 8560797:	39 c3                	cmp    %eax,%ebx
 8560799:	0f 9d c0             	setge  %al
 856079c:	84 c0                	test   %al,%al
 856079e:	74 07                	je     85607a7 <_ZN18online_preliminary18COnlinePreliminary14_CheckObserverEP8PvP_RoomP5CUser+0x71>
 85607a0:	b8 00 00 00 00       	mov    $0x0,%eax
 85607a5:	eb 05                	jmp    85607ac <_ZN18online_preliminary18COnlinePreliminary14_CheckObserverEP8PvP_RoomP5CUser+0x76>
 85607a7:	b8 01 00 00 00       	mov    $0x1,%eax
 85607ac:	83 c4 24             	add    $0x24,%esp
 85607af:	5b                   	pop    %ebx
 85607b0:	5d                   	pop    %ebp
 85607b1:	c3                   	ret

```

```c
// online_preliminary::COnlinePreliminary::_CheckObserver @ 0x8560736

/* online_preliminary::COnlinePreliminary::_CheckObserver(PvP_Room*, CUser*) */

bool online_preliminary::COnlinePreliminary::_CheckObserver(PvP_Room *param_1,CUser *param_2)

{
  int iVar1;
  uint uVar2;
  int local_14;
  int local_10;
  
  local_14 = 0;
  for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
    iVar1 = PvP_Room::get_team((PvP_Room *)param_2,local_10);
    if (iVar1 == 3) {
      local_14 = local_14 + 1;
    }
  }
  iVar1 = TeamInfoSecond::size((TeamInfoSecond *)(param_1 + 0x1c));
  uVar2 = GetPlayCountPerOneTeam();
  return iVar1 - local_14 < (int)(uVar2 & 0xff);
}

```

---

## _CheckSameTeam

```asm
// === 085606e0 online_preliminary::COnlinePreliminary::_CheckSameTeam  [0x085606e0-0x8560735] ===
 85606e0:	55                   	push   %ebp
 85606e1:	89 e5                	mov    %esp,%ebp
 85606e3:	53                   	push   %ebx
 85606e4:	83 ec 14             	sub    $0x14,%esp
 85606e7:	8b 45 10             	mov    0x10(%ebp),%eax
 85606ea:	89 04 24             	mov    %eax,(%esp)
 85606ed:	e8 f0 56 0e 00       	call   8645de2 <_ZNK15CUserCharacInfo35GetCurCharacOnlinePreliminaryTeamIdEv>
 85606f2:	83 f8 ff             	cmp    $0xffffffff,%eax
 85606f5:	0f 94 c0             	sete   %al
 85606f8:	84 c0                	test   %al,%al
 85606fa:	74 07                	je     8560703 <_ZN18online_preliminary18COnlinePreliminary14_CheckSameTeamEP8PvP_RoomP5CUser+0x23>
 85606fc:	b8 00 00 00 00       	mov    $0x0,%eax
 8560701:	eb 2d                	jmp    8560730 <_ZN18online_preliminary18COnlinePreliminary14_CheckSameTeamEP8PvP_RoomP5CUser+0x50>
 8560703:	8b 45 10             	mov    0x10(%ebp),%eax
 8560706:	89 04 24             	mov    %eax,(%esp)
 8560709:	e8 d4 56 0e 00       	call   8645de2 <_ZNK15CUserCharacInfo35GetCurCharacOnlinePreliminaryTeamIdEv>
 856070e:	89 c3                	mov    %eax,%ebx
 8560710:	8b 45 08             	mov    0x8(%ebp),%eax
 8560713:	89 04 24             	mov    %eax,(%esp)
 8560716:	e8 c5 1c 00 00       	call   85623e0 <_ZN18online_preliminary18COnlinePreliminary9GetTeamIdEv>
 856071b:	39 c3                	cmp    %eax,%ebx
 856071d:	0f 95 c0             	setne  %al
 8560720:	84 c0                	test   %al,%al
 8560722:	74 07                	je     856072b <_ZN18online_preliminary18COnlinePreliminary14_CheckSameTeamEP8PvP_RoomP5CUser+0x4b>
 8560724:	b8 00 00 00 00       	mov    $0x0,%eax
 8560729:	eb 05                	jmp    8560730 <_ZN18online_preliminary18COnlinePreliminary14_CheckSameTeamEP8PvP_RoomP5CUser+0x50>
 856072b:	b8 01 00 00 00       	mov    $0x1,%eax
 8560730:	83 c4 14             	add    $0x14,%esp
 8560733:	5b                   	pop    %ebx
 8560734:	5d                   	pop    %ebp
 8560735:	c3                   	ret

```

```c
// online_preliminary::COnlinePreliminary::_CheckSameTeam @ 0x85606e0

/* online_preliminary::COnlinePreliminary::_CheckSameTeam(PvP_Room*, CUser*) */

undefined4 __thiscall
online_preliminary::COnlinePreliminary::_CheckSameTeam
          (COnlinePreliminary *this,PvP_Room *param_1,CUser *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = CUserCharacInfo::GetCurCharacOnlinePreliminaryTeamId((CUserCharacInfo *)param_2);
  if (iVar1 == -1) {
    uVar2 = 0;
  }
  else {
    iVar1 = CUserCharacInfo::GetCurCharacOnlinePreliminaryTeamId((CUserCharacInfo *)param_2);
    iVar3 = GetTeamId(this);
    if (iVar1 == iVar3) {
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

## _GetEachOtherPlayCount

```asm
// === 08560212 online_preliminary::COnlinePreliminary::_GetEachOtherPlayCount  [0x08560212-0x85602ad] ===
 8560212:	55                   	push   %ebp
 8560213:	89 e5                	mov    %esp,%ebp
 8560215:	56                   	push   %esi
 8560216:	53                   	push   %ebx
 8560217:	83 ec 10             	sub    $0x10,%esp
 856021a:	e8 c9 fc ff ff       	call   855fee8 <_ZN18online_preliminary18COnlinePreliminary22GetPlayCountPerOneTeamEv>
 856021f:	3c 01                	cmp    $0x1,%al
 8560221:	0f 94 c0             	sete   %al
 8560224:	84 c0                	test   %al,%al
 8560226:	74 3f                	je     8560267 <_ZN18online_preliminary18COnlinePreliminary22_GetEachOtherPlayCountEP5CUserS2_+0x55>
 8560228:	8b 45 10             	mov    0x10(%ebp),%eax
 856022b:	89 04 24             	mov    %eax,(%esp)
 856022e:	e8 1b ba b6 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8560233:	89 c3                	mov    %eax,%ebx
 8560235:	8b 45 10             	mov    0x10(%ebp),%eax
 8560238:	89 04 24             	mov    %eax,(%esp)
 856023b:	e8 50 ba b6 ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 8560240:	89 c6                	mov    %eax,%esi
 8560242:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 8560249:	00 
 856024a:	8b 45 0c             	mov    0xc(%ebp),%eax
 856024d:	89 04 24             	mov    %eax,(%esp)
 8560250:	e8 2f d3 b7 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 8560255:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8560259:	89 74 24 04          	mov    %esi,0x4(%esp)
 856025d:	89 04 24             	mov    %eax,(%esp)
 8560260:	e8 1f 5f 02 00       	call   8586184 <_ZNK18online_preliminary33COnlinePreliminaryMemberMatchList16GetPeerPlayCountEij>
 8560265:	eb 3f                	jmp    85602a6 <_ZN18online_preliminary18COnlinePreliminary22_GetEachOtherPlayCountEP5CUserS2_+0x94>
 8560267:	8b 45 0c             	mov    0xc(%ebp),%eax
 856026a:	89 04 24             	mov    %eax,(%esp)
 856026d:	e8 78 8b 00 00       	call   8568dea <_ZN15CUserCharacInfo33GetCurCharacOnlinePreliminaryTeamEv>
 8560272:	85 c0                	test   %eax,%eax
 8560274:	0f 95 c0             	setne  %al
 8560277:	84 c0                	test   %al,%al
 8560279:	74 26                	je     85602a1 <_ZN18online_preliminary18COnlinePreliminary22_GetEachOtherPlayCountEP5CUserS2_+0x8f>
 856027b:	8b 45 10             	mov    0x10(%ebp),%eax
 856027e:	89 04 24             	mov    %eax,(%esp)
 8560281:	e8 5c 5b 0e 00       	call   8645de2 <_ZNK15CUserCharacInfo35GetCurCharacOnlinePreliminaryTeamIdEv>
 8560286:	89 c3                	mov    %eax,%ebx
 8560288:	8b 45 0c             	mov    0xc(%ebp),%eax
 856028b:	89 04 24             	mov    %eax,(%esp)
 856028e:	e8 57 8b 00 00       	call   8568dea <_ZN15CUserCharacInfo33GetCurCharacOnlinePreliminaryTeamEv>
 8560293:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8560297:	89 04 24             	mov    %eax,(%esp)
 856029a:	e8 ad 81 02 00       	call   858844c <_ZNK18online_preliminary22COnlinePreliminaryTeam25GetEachOtherTeamPlayCountEi>
 856029f:	eb 05                	jmp    85602a6 <_ZN18online_preliminary18COnlinePreliminary22_GetEachOtherPlayCountEP5CUserS2_+0x94>
 85602a1:	b8 00 00 00 00       	mov    $0x0,%eax
 85602a6:	83 c4 10             	add    $0x10,%esp
 85602a9:	5b                   	pop    %ebx
 85602aa:	5e                   	pop    %esi
 85602ab:	5d                   	pop    %ebp
 85602ac:	c3                   	ret
 85602ad:	90                   	nop

```

```c
// online_preliminary::COnlinePreliminary::_GetEachOtherPlayCount @ 0x8560212

/* online_preliminary::COnlinePreliminary::_GetEachOtherPlayCount(CUser*, CUser*) */

undefined4 __thiscall
online_preliminary::COnlinePreliminary::_GetEachOtherPlayCount
          (COnlinePreliminary *this,CUser *param_1,CUser *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  COnlinePreliminaryMemberMatchList *this_00;
  undefined4 uVar4;
  
  cVar1 = GetPlayCountPerOneTeam();
  if (cVar1 == '\x01') {
    uVar2 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
    iVar3 = CUser::GetServerGroup(param_2);
    this_00 = (COnlinePreliminaryMemberMatchList *)CUser::GetCharacExpandData(param_1,5);
    uVar4 = COnlinePreliminaryMemberMatchList::GetPeerPlayCount(this_00,iVar3,uVar2);
  }
  else {
    iVar3 = CUserCharacInfo::GetCurCharacOnlinePreliminaryTeam((CUserCharacInfo *)param_1);
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    else {
      CUserCharacInfo::GetCurCharacOnlinePreliminaryTeamId((CUserCharacInfo *)param_2);
      iVar3 = CUserCharacInfo::GetCurCharacOnlinePreliminaryTeam((CUserCharacInfo *)param_1);
      uVar4 = COnlinePreliminaryTeam::GetEachOtherTeamPlayCount(iVar3);
    }
  }
  return uVar4;
}

```

---

## _GetEachOtherPlayCount_0856050e

```asm
// === 0856050e online_preliminary::COnlinePreliminary::_GetEachOtherPlayCount  [0x0856050e-0x85605ed] ===
 856050e:	55                   	push   %ebp
 856050f:	89 e5                	mov    %esp,%ebp
 8560511:	83 ec 28             	sub    $0x28,%esp
 8560514:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 856051b:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8560522:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8560529:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8560530:	eb 37                	jmp    8560569 <_ZN18online_preliminary18COnlinePreliminary22_GetEachOtherPlayCountEv+0x5b>
 8560532:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8560535:	8b 45 08             	mov    0x8(%ebp),%eax
 8560538:	83 c2 02             	add    $0x2,%edx
 856053b:	0f b6 44 d0 18       	movzbl 0x18(%eax,%edx,8),%eax
 8560540:	84 c0                	test   %al,%al
 8560542:	74 21                	je     8560565 <_ZN18online_preliminary18COnlinePreliminary22_GetEachOtherPlayCountEv+0x57>
 8560544:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8560547:	8b 45 08             	mov    0x8(%ebp),%eax
 856054a:	83 c2 02             	add    $0x2,%edx
 856054d:	8b 44 d0 14          	mov    0x14(%eax,%edx,8),%eax
 8560551:	85 c0                	test   %eax,%eax
 8560553:	74 10                	je     8560565 <_ZN18online_preliminary18COnlinePreliminary22_GetEachOtherPlayCountEv+0x57>
 8560555:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8560558:	8b 45 08             	mov    0x8(%ebp),%eax
 856055b:	83 c2 02             	add    $0x2,%edx
 856055e:	8b 44 d0 14          	mov    0x14(%eax,%edx,8),%eax
 8560562:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8560565:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8560569:	83 7d f4 03          	cmpl   $0x3,-0xc(%ebp)
 856056d:	0f 9e c0             	setle  %al
 8560570:	84 c0                	test   %al,%al
 8560572:	75 be                	jne    8560532 <_ZN18online_preliminary18COnlinePreliminary22_GetEachOtherPlayCountEv+0x24>
 8560574:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 856057b:	eb 37                	jmp    85605b4 <_ZN18online_preliminary18COnlinePreliminary22_GetEachOtherPlayCountEv+0xa6>
 856057d:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8560580:	8b 45 08             	mov    0x8(%ebp),%eax
 8560583:	83 c2 07             	add    $0x7,%edx
 8560586:	0f b6 44 d0 18       	movzbl 0x18(%eax,%edx,8),%eax
 856058b:	84 c0                	test   %al,%al
 856058d:	74 21                	je     85605b0 <_ZN18online_preliminary18COnlinePreliminary22_GetEachOtherPlayCountEv+0xa2>
 856058f:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8560592:	8b 45 08             	mov    0x8(%ebp),%eax
 8560595:	83 c2 07             	add    $0x7,%edx
 8560598:	8b 44 d0 14          	mov    0x14(%eax,%edx,8),%eax
 856059c:	85 c0                	test   %eax,%eax
 856059e:	74 10                	je     85605b0 <_ZN18online_preliminary18COnlinePreliminary22_GetEachOtherPlayCountEv+0xa2>
 85605a0:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85605a3:	8b 45 08             	mov    0x8(%ebp),%eax
 85605a6:	83 c2 07             	add    $0x7,%edx
 85605a9:	8b 44 d0 14          	mov    0x14(%eax,%edx,8),%eax
 85605ad:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85605b0:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 85605b4:	83 7d f4 03          	cmpl   $0x3,-0xc(%ebp)
 85605b8:	0f 9e c0             	setle  %al
 85605bb:	84 c0                	test   %al,%al
 85605bd:	75 be                	jne    856057d <_ZN18online_preliminary18COnlinePreliminary22_GetEachOtherPlayCountEv+0x6f>
 85605bf:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 85605c3:	74 21                	je     85605e6 <_ZN18online_preliminary18COnlinePreliminary22_GetEachOtherPlayCountEv+0xd8>
 85605c5:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 85605c9:	74 1b                	je     85605e6 <_ZN18online_preliminary18COnlinePreliminary22_GetEachOtherPlayCountEv+0xd8>
 85605cb:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85605ce:	89 44 24 08          	mov    %eax,0x8(%esp)
 85605d2:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85605d5:	89 44 24 04          	mov    %eax,0x4(%esp)
 85605d9:	8b 45 08             	mov    0x8(%ebp),%eax
 85605dc:	89 04 24             	mov    %eax,(%esp)
 85605df:	e8 2e fc ff ff       	call   8560212 <_ZN18online_preliminary18COnlinePreliminary22_GetEachOtherPlayCountEP5CUserS2_>
 85605e4:	eb 05                	jmp    85605eb <_ZN18online_preliminary18COnlinePreliminary22_GetEachOtherPlayCountEv+0xdd>
 85605e6:	b8 00 00 00 00       	mov    $0x0,%eax
 85605eb:	c9                   	leave
 85605ec:	c3                   	ret
 85605ed:	90                   	nop

```

```c
// online_preliminary::COnlinePreliminary::_GetEachOtherPlayCount @ 0x856050e

/* online_preliminary::COnlinePreliminary::_GetEachOtherPlayCount() */

undefined4 __thiscall
online_preliminary::COnlinePreliminary::_GetEachOtherPlayCount(COnlinePreliminary *this)

{
  undefined4 uVar1;
  CUser *local_18;
  CUser *local_14;
  int local_10;
  
  local_18 = (CUser *)0x0;
  local_14 = (CUser *)0x0;
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
    if ((this[(local_10 + 2) * 8 + 0x18] != (COnlinePreliminary)0x0) &&
       (*(int *)(this + (local_10 + 2) * 8 + 0x14) != 0)) {
      local_18 = *(CUser **)(this + (local_10 + 2) * 8 + 0x14);
    }
  }
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
    if ((this[(local_10 + 7) * 8 + 0x18] != (COnlinePreliminary)0x0) &&
       (*(int *)(this + (local_10 + 7) * 8 + 0x14) != 0)) {
      local_14 = *(CUser **)(this + (local_10 + 7) * 8 + 0x14);
    }
  }
  if ((local_18 == (CUser *)0x0) || (local_14 == (CUser *)0x0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = _GetEachOtherPlayCount(this,local_18,local_14);
  }
  return uVar1;
}

```

---

## _GetOppositeTeam

```asm
// === 08561f66 online_preliminary::COnlinePreliminary::_GetOppositeTeam  [0x08561f66-0x8561f8b] ===
 8561f66:	55                   	push   %ebp
 8561f67:	89 e5                	mov    %esp,%ebp
 8561f69:	8b 45 0c             	mov    0xc(%ebp),%eax
 8561f6c:	83 f8 01             	cmp    $0x1,%eax
 8561f6f:	74 07                	je     8561f78 <_ZN18online_preliminary18COnlinePreliminary16_GetOppositeTeamEi+0x12>
 8561f71:	83 f8 02             	cmp    $0x2,%eax
 8561f74:	74 09                	je     8561f7f <_ZN18online_preliminary18COnlinePreliminary16_GetOppositeTeamEi+0x19>
 8561f76:	eb 0e                	jmp    8561f86 <_ZN18online_preliminary18COnlinePreliminary16_GetOppositeTeamEi+0x20>
 8561f78:	b8 02 00 00 00       	mov    $0x2,%eax
 8561f7d:	eb 0a                	jmp    8561f89 <_ZN18online_preliminary18COnlinePreliminary16_GetOppositeTeamEi+0x23>
 8561f7f:	b8 01 00 00 00       	mov    $0x1,%eax
 8561f84:	eb 03                	jmp    8561f89 <_ZN18online_preliminary18COnlinePreliminary16_GetOppositeTeamEi+0x23>
 8561f86:	8b 45 0c             	mov    0xc(%ebp),%eax
 8561f89:	5d                   	pop    %ebp
 8561f8a:	c3                   	ret
 8561f8b:	90                   	nop

```

```c
// online_preliminary::COnlinePreliminary::_GetOppositeTeam @ 0x8561f66

/* online_preliminary::COnlinePreliminary::_GetOppositeTeam(int) */

int __thiscall
online_preliminary::COnlinePreliminary::_GetOppositeTeam(COnlinePreliminary *this,int param_1)

{
  if (param_1 == 1) {
    param_1 = 2;
  }
  else if (param_1 == 2) {
    param_1 = 1;
  }
  return param_1;
}

```

---

## _GetRating

```asm
// === 08560082 online_preliminary::COnlinePreliminary::_GetRating  [0x08560082-0x85600f5] ===
 8560082:	55                   	push   %ebp
 8560083:	89 e5                	mov    %esp,%ebp
 8560085:	83 ec 28             	sub    $0x28,%esp
 8560088:	e8 5b fe ff ff       	call   855fee8 <_ZN18online_preliminary18COnlinePreliminary22GetPlayCountPerOneTeamEv>
 856008d:	3c 01                	cmp    $0x1,%al
 856008f:	0f 94 c0             	sete   %al
 8560092:	84 c0                	test   %al,%al
 8560094:	74 23                	je     85600b9 <_ZN18online_preliminary18COnlinePreliminary10_GetRatingEP5CUser+0x37>
 8560096:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 856009d:	00 
 856009e:	8b 45 0c             	mov    0xc(%ebp),%eax
 85600a1:	89 04 24             	mov    %eax,(%esp)
 85600a4:	e8 db d4 b7 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 85600a9:	89 04 24             	mov    %eax,(%esp)
 85600ac:	e8 51 8e 00 00       	call   8568f02 <_ZNK18online_preliminary24COnlinePreliminaryMember9GetRatingEv>
 85600b1:	d9 5d f4             	fstps  -0xc(%ebp)
 85600b4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85600b7:	eb 34                	jmp    85600ed <_ZN18online_preliminary18COnlinePreliminary10_GetRatingEP5CUser+0x6b>
 85600b9:	8b 45 0c             	mov    0xc(%ebp),%eax
 85600bc:	89 04 24             	mov    %eax,(%esp)
 85600bf:	e8 26 8d 00 00       	call   8568dea <_ZN15CUserCharacInfo33GetCurCharacOnlinePreliminaryTeamEv>
 85600c4:	85 c0                	test   %eax,%eax
 85600c6:	0f 95 c0             	setne  %al
 85600c9:	84 c0                	test   %al,%al
 85600cb:	74 1b                	je     85600e8 <_ZN18online_preliminary18COnlinePreliminary10_GetRatingEP5CUser+0x66>
 85600cd:	8b 45 0c             	mov    0xc(%ebp),%eax
 85600d0:	89 04 24             	mov    %eax,(%esp)
 85600d3:	e8 12 8d 00 00       	call   8568dea <_ZN15CUserCharacInfo33GetCurCharacOnlinePreliminaryTeamEv>
 85600d8:	89 04 24             	mov    %eax,(%esp)
 85600db:	e8 0e 8e 00 00       	call   8568eee <_ZNK18online_preliminary22COnlinePreliminaryTeam9GetRatingEv>
 85600e0:	d9 5d f4             	fstps  -0xc(%ebp)
 85600e3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85600e6:	eb 05                	jmp    85600ed <_ZN18online_preliminary18COnlinePreliminary10_GetRatingEP5CUser+0x6b>
 85600e8:	b8 00 00 00 00       	mov    $0x0,%eax
 85600ed:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85600f0:	d9 45 f4             	flds   -0xc(%ebp)
 85600f3:	c9                   	leave
 85600f4:	c3                   	ret
 85600f5:	90                   	nop

```

```c
// online_preliminary::COnlinePreliminary::_GetRating @ 0x8560082

/* online_preliminary::COnlinePreliminary::_GetRating(CUser*) */

longdouble __thiscall
online_preliminary::COnlinePreliminary::_GetRating(COnlinePreliminary *this,CUser *param_1)

{
  char cVar1;
  COnlinePreliminaryMember *this_00;
  int iVar2;
  COnlinePreliminaryTeam *this_01;
  float fVar3;
  longdouble lVar4;
  
  cVar1 = GetPlayCountPerOneTeam();
  if (cVar1 == '\x01') {
    this_00 = (COnlinePreliminaryMember *)CUser::GetCharacExpandData(param_1,4);
    lVar4 = (longdouble)COnlinePreliminaryMember::GetRating(this_00);
    fVar3 = (float)lVar4;
  }
  else {
    iVar2 = CUserCharacInfo::GetCurCharacOnlinePreliminaryTeam((CUserCharacInfo *)param_1);
    if (iVar2 == 0) {
      fVar3 = 0.0;
    }
    else {
      this_01 = (COnlinePreliminaryTeam *)
                CUserCharacInfo::GetCurCharacOnlinePreliminaryTeam((CUserCharacInfo *)param_1);
      lVar4 = (longdouble)COnlinePreliminaryTeam::GetRating(this_01);
      fVar3 = (float)lVar4;
    }
  }
  return (longdouble)fVar3;
}

```

---

## _GetRating_08560342

```asm
// === 08560342 online_preliminary::COnlinePreliminary::_GetRating  [0x08560342-0x8560367] ===
 8560342:	55                   	push   %ebp
 8560343:	89 e5                	mov    %esp,%ebp
 8560345:	83 ec 04             	sub    $0x4,%esp
 8560348:	8b 55 0c             	mov    0xc(%ebp),%edx
 856034b:	8b 4d 08             	mov    0x8(%ebp),%ecx
 856034e:	89 d0                	mov    %edx,%eax
 8560350:	c1 e0 02             	shl    $0x2,%eax
 8560353:	01 d0                	add    %edx,%eax
 8560355:	c1 e0 03             	shl    $0x3,%eax
 8560358:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 856035b:	83 c0 20             	add    $0x20,%eax
 856035e:	8b 00                	mov    (%eax),%eax
 8560360:	89 45 fc             	mov    %eax,-0x4(%ebp)
 8560363:	d9 45 fc             	flds   -0x4(%ebp)
 8560366:	c9                   	leave
 8560367:	c3                   	ret

```

```c
// online_preliminary::COnlinePreliminary::_GetRating @ 0x8560342

/* online_preliminary::COnlinePreliminary::_GetRating(ENUM_SCHOOL_MATCH_TEAM) */

longdouble __thiscall
online_preliminary::COnlinePreliminary::_GetRating(COnlinePreliminary *this,int param_2)

{
  return (longdouble)*(float *)(this + param_2 * 0x28 + 0x20);
}

```

---

## _IncreaseEachOtherPlayCount

```asm
// === 085602ae online_preliminary::COnlinePreliminary::_IncreaseEachOtherPlayCount  [0x085602ae-0x8560341] ===
 85602ae:	55                   	push   %ebp
 85602af:	89 e5                	mov    %esp,%ebp
 85602b1:	56                   	push   %esi
 85602b2:	53                   	push   %ebx
 85602b3:	83 ec 10             	sub    $0x10,%esp
 85602b6:	e8 2d fc ff ff       	call   855fee8 <_ZN18online_preliminary18COnlinePreliminary22GetPlayCountPerOneTeamEv>
 85602bb:	3c 01                	cmp    $0x1,%al
 85602bd:	0f 94 c0             	sete   %al
 85602c0:	84 c0                	test   %al,%al
 85602c2:	74 3f                	je     8560303 <_ZN18online_preliminary18COnlinePreliminary27_IncreaseEachOtherPlayCountEP5CUserS2_+0x55>
 85602c4:	8b 45 10             	mov    0x10(%ebp),%eax
 85602c7:	89 04 24             	mov    %eax,(%esp)
 85602ca:	e8 7f b9 b6 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 85602cf:	89 c3                	mov    %eax,%ebx
 85602d1:	8b 45 10             	mov    0x10(%ebp),%eax
 85602d4:	89 04 24             	mov    %eax,(%esp)
 85602d7:	e8 b4 b9 b6 ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 85602dc:	89 c6                	mov    %eax,%esi
 85602de:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 85602e5:	00 
 85602e6:	8b 45 0c             	mov    0xc(%ebp),%eax
 85602e9:	89 04 24             	mov    %eax,(%esp)
 85602ec:	e8 93 d2 b7 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 85602f1:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85602f5:	89 74 24 04          	mov    %esi,0x4(%esp)
 85602f9:	89 04 24             	mov    %eax,(%esp)
 85602fc:	e8 07 5f 02 00       	call   8586208 <_ZN18online_preliminary33COnlinePreliminaryMemberMatchList21IncreasePeerPlayCountEij>
 8560301:	eb 38                	jmp    856033b <_ZN18online_preliminary18COnlinePreliminary27_IncreaseEachOtherPlayCountEP5CUserS2_+0x8d>
 8560303:	8b 45 0c             	mov    0xc(%ebp),%eax
 8560306:	89 04 24             	mov    %eax,(%esp)
 8560309:	e8 dc 8a 00 00       	call   8568dea <_ZN15CUserCharacInfo33GetCurCharacOnlinePreliminaryTeamEv>
 856030e:	85 c0                	test   %eax,%eax
 8560310:	0f 95 c0             	setne  %al
 8560313:	84 c0                	test   %al,%al
 8560315:	74 24                	je     856033b <_ZN18online_preliminary18COnlinePreliminary27_IncreaseEachOtherPlayCountEP5CUserS2_+0x8d>
 8560317:	8b 45 10             	mov    0x10(%ebp),%eax
 856031a:	89 04 24             	mov    %eax,(%esp)
 856031d:	e8 c0 5a 0e 00       	call   8645de2 <_ZNK15CUserCharacInfo35GetCurCharacOnlinePreliminaryTeamIdEv>
 8560322:	89 c3                	mov    %eax,%ebx
 8560324:	8b 45 0c             	mov    0xc(%ebp),%eax
 8560327:	89 04 24             	mov    %eax,(%esp)
 856032a:	e8 bb 8a 00 00       	call   8568dea <_ZN15CUserCharacInfo33GetCurCharacOnlinePreliminaryTeamEv>
 856032f:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8560333:	89 04 24             	mov    %eax,(%esp)
 8560336:	e8 7b 81 02 00       	call   85884b6 <_ZN18online_preliminary22COnlinePreliminaryTeam30IncreaseEachOtherTeamPlayCountEi>
 856033b:	83 c4 10             	add    $0x10,%esp
 856033e:	5b                   	pop    %ebx
 856033f:	5e                   	pop    %esi
 8560340:	5d                   	pop    %ebp
 8560341:	c3                   	ret

```

```c
// online_preliminary::COnlinePreliminary::_IncreaseEachOtherPlayCount @ 0x85602ae

/* online_preliminary::COnlinePreliminary::_IncreaseEachOtherPlayCount(CUser*, CUser*) */

void __thiscall
online_preliminary::COnlinePreliminary::_IncreaseEachOtherPlayCount
          (COnlinePreliminary *this,CUser *param_1,CUser *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  COnlinePreliminaryMemberMatchList *this_00;
  
  cVar1 = GetPlayCountPerOneTeam();
  if (cVar1 == '\x01') {
    uVar2 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
    iVar3 = CUser::GetServerGroup(param_2);
    this_00 = (COnlinePreliminaryMemberMatchList *)CUser::GetCharacExpandData(param_1,5);
    COnlinePreliminaryMemberMatchList::IncreasePeerPlayCount(this_00,iVar3,uVar2);
  }
  else {
    iVar3 = CUserCharacInfo::GetCurCharacOnlinePreliminaryTeam((CUserCharacInfo *)param_1);
    if (iVar3 != 0) {
      CUserCharacInfo::GetCurCharacOnlinePreliminaryTeamId((CUserCharacInfo *)param_2);
      iVar3 = CUserCharacInfo::GetCurCharacOnlinePreliminaryTeam((CUserCharacInfo *)param_1);
      COnlinePreliminaryTeam::IncreaseEachOtherTeamPlayCount(iVar3);
    }
  }
  return;
}

```

---

## _IncreaseEachOtherPlayCount_085605ee

```asm
// === 085605ee online_preliminary::COnlinePreliminary::_IncreaseEachOtherPlayCount  [0x085605ee-0x85606df] ===
 85605ee:	55                   	push   %ebp
 85605ef:	89 e5                	mov    %esp,%ebp
 85605f1:	83 ec 28             	sub    $0x28,%esp
 85605f4:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 85605fb:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8560602:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8560609:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8560610:	eb 37                	jmp    8560649 <_ZN18online_preliminary18COnlinePreliminary27_IncreaseEachOtherPlayCountEv+0x5b>
 8560612:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8560615:	8b 45 08             	mov    0x8(%ebp),%eax
 8560618:	83 c2 02             	add    $0x2,%edx
 856061b:	0f b6 44 d0 18       	movzbl 0x18(%eax,%edx,8),%eax
 8560620:	84 c0                	test   %al,%al
 8560622:	74 21                	je     8560645 <_ZN18online_preliminary18COnlinePreliminary27_IncreaseEachOtherPlayCountEv+0x57>
 8560624:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8560627:	8b 45 08             	mov    0x8(%ebp),%eax
 856062a:	83 c2 02             	add    $0x2,%edx
 856062d:	8b 44 d0 14          	mov    0x14(%eax,%edx,8),%eax
 8560631:	85 c0                	test   %eax,%eax
 8560633:	74 10                	je     8560645 <_ZN18online_preliminary18COnlinePreliminary27_IncreaseEachOtherPlayCountEv+0x57>
 8560635:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8560638:	8b 45 08             	mov    0x8(%ebp),%eax
 856063b:	83 c2 02             	add    $0x2,%edx
 856063e:	8b 44 d0 14          	mov    0x14(%eax,%edx,8),%eax
 8560642:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8560645:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8560649:	83 7d f4 03          	cmpl   $0x3,-0xc(%ebp)
 856064d:	0f 9e c0             	setle  %al
 8560650:	84 c0                	test   %al,%al
 8560652:	75 be                	jne    8560612 <_ZN18online_preliminary18COnlinePreliminary27_IncreaseEachOtherPlayCountEv+0x24>
 8560654:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 856065b:	eb 37                	jmp    8560694 <_ZN18online_preliminary18COnlinePreliminary27_IncreaseEachOtherPlayCountEv+0xa6>
 856065d:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8560660:	8b 45 08             	mov    0x8(%ebp),%eax
 8560663:	83 c2 07             	add    $0x7,%edx
 8560666:	0f b6 44 d0 18       	movzbl 0x18(%eax,%edx,8),%eax
 856066b:	84 c0                	test   %al,%al
 856066d:	74 21                	je     8560690 <_ZN18online_preliminary18COnlinePreliminary27_IncreaseEachOtherPlayCountEv+0xa2>
 856066f:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8560672:	8b 45 08             	mov    0x8(%ebp),%eax
 8560675:	83 c2 07             	add    $0x7,%edx
 8560678:	8b 44 d0 14          	mov    0x14(%eax,%edx,8),%eax
 856067c:	85 c0                	test   %eax,%eax
 856067e:	74 10                	je     8560690 <_ZN18online_preliminary18COnlinePreliminary27_IncreaseEachOtherPlayCountEv+0xa2>
 8560680:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8560683:	8b 45 08             	mov    0x8(%ebp),%eax
 8560686:	83 c2 07             	add    $0x7,%edx
 8560689:	8b 44 d0 14          	mov    0x14(%eax,%edx,8),%eax
 856068d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8560690:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8560694:	83 7d f4 03          	cmpl   $0x3,-0xc(%ebp)
 8560698:	0f 9e c0             	setle  %al
 856069b:	84 c0                	test   %al,%al
 856069d:	75 be                	jne    856065d <_ZN18online_preliminary18COnlinePreliminary27_IncreaseEachOtherPlayCountEv+0x6f>
 856069f:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 85606a3:	74 38                	je     85606dd <_ZN18online_preliminary18COnlinePreliminary27_IncreaseEachOtherPlayCountEv+0xef>
 85606a5:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 85606a9:	74 32                	je     85606dd <_ZN18online_preliminary18COnlinePreliminary27_IncreaseEachOtherPlayCountEv+0xef>
 85606ab:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85606ae:	89 44 24 08          	mov    %eax,0x8(%esp)
 85606b2:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85606b5:	89 44 24 04          	mov    %eax,0x4(%esp)
 85606b9:	8b 45 08             	mov    0x8(%ebp),%eax
 85606bc:	89 04 24             	mov    %eax,(%esp)
 85606bf:	e8 ea fb ff ff       	call   85602ae <_ZN18online_preliminary18COnlinePreliminary27_IncreaseEachOtherPlayCountEP5CUserS2_>
 85606c4:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85606c7:	89 44 24 08          	mov    %eax,0x8(%esp)
 85606cb:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85606ce:	89 44 24 04          	mov    %eax,0x4(%esp)
 85606d2:	8b 45 08             	mov    0x8(%ebp),%eax
 85606d5:	89 04 24             	mov    %eax,(%esp)
 85606d8:	e8 d1 fb ff ff       	call   85602ae <_ZN18online_preliminary18COnlinePreliminary27_IncreaseEachOtherPlayCountEP5CUserS2_>
 85606dd:	c9                   	leave
 85606de:	c3                   	ret
 85606df:	90                   	nop

```

```c
// online_preliminary::COnlinePreliminary::_IncreaseEachOtherPlayCount @ 0x85605ee

/* online_preliminary::COnlinePreliminary::_IncreaseEachOtherPlayCount() */

void __thiscall
online_preliminary::COnlinePreliminary::_IncreaseEachOtherPlayCount(COnlinePreliminary *this)

{
  CUser *local_18;
  CUser *local_14;
  int local_10;
  
  local_18 = (CUser *)0x0;
  local_14 = (CUser *)0x0;
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
    if ((this[(local_10 + 2) * 8 + 0x18] != (COnlinePreliminary)0x0) &&
       (*(int *)(this + (local_10 + 2) * 8 + 0x14) != 0)) {
      local_18 = *(CUser **)(this + (local_10 + 2) * 8 + 0x14);
    }
  }
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
    if ((this[(local_10 + 7) * 8 + 0x18] != (COnlinePreliminary)0x0) &&
       (*(int *)(this + (local_10 + 7) * 8 + 0x14) != 0)) {
      local_14 = *(CUser **)(this + (local_10 + 7) * 8 + 0x14);
    }
  }
  if ((local_18 != (CUser *)0x0) && (local_14 != (CUser *)0x0)) {
    _IncreaseEachOtherPlayCount(this,local_18,local_14);
    _IncreaseEachOtherPlayCount(this,local_14,local_18);
  }
  return;
}

```

---

## _IncreaseLoseCount

```asm
// === 085601b8 online_preliminary::COnlinePreliminary::_IncreaseLoseCount  [0x085601b8-0x8560211] ===
 85601b8:	55                   	push   %ebp
 85601b9:	89 e5                	mov    %esp,%ebp
 85601bb:	83 ec 18             	sub    $0x18,%esp
 85601be:	e8 25 fd ff ff       	call   855fee8 <_ZN18online_preliminary18COnlinePreliminary22GetPlayCountPerOneTeamEv>
 85601c3:	3c 01                	cmp    $0x1,%al
 85601c5:	0f 94 c0             	sete   %al
 85601c8:	84 c0                	test   %al,%al
 85601ca:	74 1d                	je     85601e9 <_ZN18online_preliminary18COnlinePreliminary18_IncreaseLoseCountEP5CUser+0x31>
 85601cc:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 85601d3:	00 
 85601d4:	8b 45 0c             	mov    0xc(%ebp),%eax
 85601d7:	89 04 24             	mov    %eax,(%esp)
 85601da:	e8 a5 d3 b7 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 85601df:	89 04 24             	mov    %eax,(%esp)
 85601e2:	e8 5f 5f 02 00       	call   8586146 <_ZN18online_preliminary24COnlinePreliminaryMember17IncreaseLoseCountEv>
 85601e7:	eb 27                	jmp    8560210 <_ZN18online_preliminary18COnlinePreliminary18_IncreaseLoseCountEP5CUser+0x58>
 85601e9:	8b 45 0c             	mov    0xc(%ebp),%eax
 85601ec:	89 04 24             	mov    %eax,(%esp)
 85601ef:	e8 f6 8b 00 00       	call   8568dea <_ZN15CUserCharacInfo33GetCurCharacOnlinePreliminaryTeamEv>
 85601f4:	85 c0                	test   %eax,%eax
 85601f6:	0f 95 c0             	setne  %al
 85601f9:	84 c0                	test   %al,%al
 85601fb:	74 13                	je     8560210 <_ZN18online_preliminary18COnlinePreliminary18_IncreaseLoseCountEP5CUser+0x58>
 85601fd:	8b 45 0c             	mov    0xc(%ebp),%eax
 8560200:	89 04 24             	mov    %eax,(%esp)
 8560203:	e8 e2 8b 00 00       	call   8568dea <_ZN15CUserCharacInfo33GetCurCharacOnlinePreliminaryTeamEv>
 8560208:	89 04 24             	mov    %eax,(%esp)
 856020b:	e8 0a 82 02 00       	call   858841a <_ZN18online_preliminary22COnlinePreliminaryTeam17IncreaseLoseCountEv>
 8560210:	c9                   	leave
 8560211:	c3                   	ret

```

```c
// online_preliminary::COnlinePreliminary::_IncreaseLoseCount @ 0x85601b8

/* online_preliminary::COnlinePreliminary::_IncreaseLoseCount(CUser*) */

void __thiscall
online_preliminary::COnlinePreliminary::_IncreaseLoseCount(COnlinePreliminary *this,CUser *param_1)

{
  char cVar1;
  COnlinePreliminaryMember *this_00;
  int iVar2;
  COnlinePreliminaryTeam *this_01;
  
  cVar1 = GetPlayCountPerOneTeam();
  if (cVar1 == '\x01') {
    this_00 = (COnlinePreliminaryMember *)CUser::GetCharacExpandData(param_1,4);
    COnlinePreliminaryMember::IncreaseLoseCount(this_00);
  }
  else {
    iVar2 = CUserCharacInfo::GetCurCharacOnlinePreliminaryTeam((CUserCharacInfo *)param_1);
    if (iVar2 != 0) {
      this_01 = (COnlinePreliminaryTeam *)
                CUserCharacInfo::GetCurCharacOnlinePreliminaryTeam((CUserCharacInfo *)param_1);
      COnlinePreliminaryTeam::IncreaseLoseCount(this_01);
    }
  }
  return;
}

```

---

## _IncreaseLoseCount_08560484

```asm
// === 08560484 online_preliminary::COnlinePreliminary::_IncreaseLoseCount  [0x08560484-0x856050d] ===
 8560484:	55                   	push   %ebp
 8560485:	89 e5                	mov    %esp,%ebp
 8560487:	53                   	push   %ebx
 8560488:	83 ec 24             	sub    $0x24,%esp
 856048b:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8560492:	eb 69                	jmp    85604fd <_ZN18online_preliminary18COnlinePreliminary18_IncreaseLoseCountE22ENUM_SCHOOL_MATCH_TEAM+0x79>
 8560494:	8b 55 0c             	mov    0xc(%ebp),%edx
 8560497:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 856049a:	8b 4d 08             	mov    0x8(%ebp),%ecx
 856049d:	89 d0                	mov    %edx,%eax
 856049f:	c1 e0 02             	shl    $0x2,%eax
 85604a2:	01 d0                	add    %edx,%eax
 85604a4:	01 d8                	add    %ebx,%eax
 85604a6:	83 c0 02             	add    $0x2,%eax
 85604a9:	0f b6 44 c1 18       	movzbl 0x18(%ecx,%eax,8),%eax
 85604ae:	84 c0                	test   %al,%al
 85604b0:	74 47                	je     85604f9 <_ZN18online_preliminary18COnlinePreliminary18_IncreaseLoseCountE22ENUM_SCHOOL_MATCH_TEAM+0x75>
 85604b2:	8b 55 0c             	mov    0xc(%ebp),%edx
 85604b5:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 85604b8:	8b 4d 08             	mov    0x8(%ebp),%ecx
 85604bb:	89 d0                	mov    %edx,%eax
 85604bd:	c1 e0 02             	shl    $0x2,%eax
 85604c0:	01 d0                	add    %edx,%eax
 85604c2:	01 d8                	add    %ebx,%eax
 85604c4:	83 c0 02             	add    $0x2,%eax
 85604c7:	8b 44 c1 14          	mov    0x14(%ecx,%eax,8),%eax
 85604cb:	85 c0                	test   %eax,%eax
 85604cd:	74 2a                	je     85604f9 <_ZN18online_preliminary18COnlinePreliminary18_IncreaseLoseCountE22ENUM_SCHOOL_MATCH_TEAM+0x75>
 85604cf:	8b 55 0c             	mov    0xc(%ebp),%edx
 85604d2:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 85604d5:	8b 4d 08             	mov    0x8(%ebp),%ecx
 85604d8:	89 d0                	mov    %edx,%eax
 85604da:	c1 e0 02             	shl    $0x2,%eax
 85604dd:	01 d0                	add    %edx,%eax
 85604df:	01 d8                	add    %ebx,%eax
 85604e1:	83 c0 02             	add    $0x2,%eax
 85604e4:	8b 44 c1 14          	mov    0x14(%ecx,%eax,8),%eax
 85604e8:	89 44 24 04          	mov    %eax,0x4(%esp)
 85604ec:	8b 45 08             	mov    0x8(%ebp),%eax
 85604ef:	89 04 24             	mov    %eax,(%esp)
 85604f2:	e8 c1 fc ff ff       	call   85601b8 <_ZN18online_preliminary18COnlinePreliminary18_IncreaseLoseCountEP5CUser>
 85604f7:	eb 0f                	jmp    8560508 <_ZN18online_preliminary18COnlinePreliminary18_IncreaseLoseCountE22ENUM_SCHOOL_MATCH_TEAM+0x84>
 85604f9:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 85604fd:	83 7d f4 03          	cmpl   $0x3,-0xc(%ebp)
 8560501:	0f 9e c0             	setle  %al
 8560504:	84 c0                	test   %al,%al
 8560506:	75 8c                	jne    8560494 <_ZN18online_preliminary18COnlinePreliminary18_IncreaseLoseCountE22ENUM_SCHOOL_MATCH_TEAM+0x10>
 8560508:	83 c4 24             	add    $0x24,%esp
 856050b:	5b                   	pop    %ebx
 856050c:	5d                   	pop    %ebp
 856050d:	c3                   	ret

```

```c
// online_preliminary::COnlinePreliminary::_IncreaseLoseCount @ 0x8560484

/* online_preliminary::COnlinePreliminary::_IncreaseLoseCount(ENUM_SCHOOL_MATCH_TEAM) */

void __thiscall
online_preliminary::COnlinePreliminary::_IncreaseLoseCount(COnlinePreliminary *this,int param_2)

{
  int local_10;
  
  local_10 = 0;
  while( true ) {
    if (3 < local_10) {
      return;
    }
    if ((this[(param_2 * 5 + local_10 + 2) * 8 + 0x18] != (COnlinePreliminary)0x0) &&
       (*(int *)(this + (param_2 * 5 + local_10 + 2) * 8 + 0x14) != 0)) break;
    local_10 = local_10 + 1;
  }
  _IncreaseLoseCount(this,*(CUser **)(this + (param_2 * 5 + local_10 + 2) * 8 + 0x14));
  return;
}

```

---

## _IncreaseWinCount

```asm
// === 0856015e online_preliminary::COnlinePreliminary::_IncreaseWinCount  [0x0856015e-0x85601b7] ===
 856015e:	55                   	push   %ebp
 856015f:	89 e5                	mov    %esp,%ebp
 8560161:	83 ec 18             	sub    $0x18,%esp
 8560164:	e8 7f fd ff ff       	call   855fee8 <_ZN18online_preliminary18COnlinePreliminary22GetPlayCountPerOneTeamEv>
 8560169:	3c 01                	cmp    $0x1,%al
 856016b:	0f 94 c0             	sete   %al
 856016e:	84 c0                	test   %al,%al
 8560170:	74 1d                	je     856018f <_ZN18online_preliminary18COnlinePreliminary17_IncreaseWinCountEP5CUser+0x31>
 8560172:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8560179:	00 
 856017a:	8b 45 0c             	mov    0xc(%ebp),%eax
 856017d:	89 04 24             	mov    %eax,(%esp)
 8560180:	e8 ff d3 b7 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 8560185:	89 04 24             	mov    %eax,(%esp)
 8560188:	e8 97 5f 02 00       	call   8586124 <_ZN18online_preliminary24COnlinePreliminaryMember16IncreaseWinCountEv>
 856018d:	eb 27                	jmp    85601b6 <_ZN18online_preliminary18COnlinePreliminary17_IncreaseWinCountEP5CUser+0x58>
 856018f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8560192:	89 04 24             	mov    %eax,(%esp)
 8560195:	e8 50 8c 00 00       	call   8568dea <_ZN15CUserCharacInfo33GetCurCharacOnlinePreliminaryTeamEv>
 856019a:	85 c0                	test   %eax,%eax
 856019c:	0f 95 c0             	setne  %al
 856019f:	84 c0                	test   %al,%al
 85601a1:	74 13                	je     85601b6 <_ZN18online_preliminary18COnlinePreliminary17_IncreaseWinCountEP5CUser+0x58>
 85601a3:	8b 45 0c             	mov    0xc(%ebp),%eax
 85601a6:	89 04 24             	mov    %eax,(%esp)
 85601a9:	e8 3c 8c 00 00       	call   8568dea <_ZN15CUserCharacInfo33GetCurCharacOnlinePreliminaryTeamEv>
 85601ae:	89 04 24             	mov    %eax,(%esp)
 85601b1:	e8 48 82 02 00       	call   85883fe <_ZN18online_preliminary22COnlinePreliminaryTeam16IncreaseWinCountEv>
 85601b6:	c9                   	leave
 85601b7:	c3                   	ret

```

```c
// online_preliminary::COnlinePreliminary::_IncreaseWinCount @ 0x856015e

/* online_preliminary::COnlinePreliminary::_IncreaseWinCount(CUser*) */

void __thiscall
online_preliminary::COnlinePreliminary::_IncreaseWinCount(COnlinePreliminary *this,CUser *param_1)

{
  char cVar1;
  COnlinePreliminaryMember *this_00;
  int iVar2;
  COnlinePreliminaryTeam *this_01;
  
  cVar1 = GetPlayCountPerOneTeam();
  if (cVar1 == '\x01') {
    this_00 = (COnlinePreliminaryMember *)CUser::GetCharacExpandData(param_1,4);
    COnlinePreliminaryMember::IncreaseWinCount(this_00);
  }
  else {
    iVar2 = CUserCharacInfo::GetCurCharacOnlinePreliminaryTeam((CUserCharacInfo *)param_1);
    if (iVar2 != 0) {
      this_01 = (COnlinePreliminaryTeam *)
                CUserCharacInfo::GetCurCharacOnlinePreliminaryTeam((CUserCharacInfo *)param_1);
      COnlinePreliminaryTeam::IncreaseWinCount(this_01);
    }
  }
  return;
}

```

---

## _IncreaseWinCount_085603fa

```asm
// === 085603fa online_preliminary::COnlinePreliminary::_IncreaseWinCount  [0x085603fa-0x8560483] ===
 85603fa:	55                   	push   %ebp
 85603fb:	89 e5                	mov    %esp,%ebp
 85603fd:	53                   	push   %ebx
 85603fe:	83 ec 24             	sub    $0x24,%esp
 8560401:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8560408:	eb 69                	jmp    8560473 <_ZN18online_preliminary18COnlinePreliminary17_IncreaseWinCountE22ENUM_SCHOOL_MATCH_TEAM+0x79>
 856040a:	8b 55 0c             	mov    0xc(%ebp),%edx
 856040d:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8560410:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8560413:	89 d0                	mov    %edx,%eax
 8560415:	c1 e0 02             	shl    $0x2,%eax
 8560418:	01 d0                	add    %edx,%eax
 856041a:	01 d8                	add    %ebx,%eax
 856041c:	83 c0 02             	add    $0x2,%eax
 856041f:	0f b6 44 c1 18       	movzbl 0x18(%ecx,%eax,8),%eax
 8560424:	84 c0                	test   %al,%al
 8560426:	74 47                	je     856046f <_ZN18online_preliminary18COnlinePreliminary17_IncreaseWinCountE22ENUM_SCHOOL_MATCH_TEAM+0x75>
 8560428:	8b 55 0c             	mov    0xc(%ebp),%edx
 856042b:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 856042e:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8560431:	89 d0                	mov    %edx,%eax
 8560433:	c1 e0 02             	shl    $0x2,%eax
 8560436:	01 d0                	add    %edx,%eax
 8560438:	01 d8                	add    %ebx,%eax
 856043a:	83 c0 02             	add    $0x2,%eax
 856043d:	8b 44 c1 14          	mov    0x14(%ecx,%eax,8),%eax
 8560441:	85 c0                	test   %eax,%eax
 8560443:	74 2a                	je     856046f <_ZN18online_preliminary18COnlinePreliminary17_IncreaseWinCountE22ENUM_SCHOOL_MATCH_TEAM+0x75>
 8560445:	8b 55 0c             	mov    0xc(%ebp),%edx
 8560448:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 856044b:	8b 4d 08             	mov    0x8(%ebp),%ecx
 856044e:	89 d0                	mov    %edx,%eax
 8560450:	c1 e0 02             	shl    $0x2,%eax
 8560453:	01 d0                	add    %edx,%eax
 8560455:	01 d8                	add    %ebx,%eax
 8560457:	83 c0 02             	add    $0x2,%eax
 856045a:	8b 44 c1 14          	mov    0x14(%ecx,%eax,8),%eax
 856045e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8560462:	8b 45 08             	mov    0x8(%ebp),%eax
 8560465:	89 04 24             	mov    %eax,(%esp)
 8560468:	e8 f1 fc ff ff       	call   856015e <_ZN18online_preliminary18COnlinePreliminary17_IncreaseWinCountEP5CUser>
 856046d:	eb 0f                	jmp    856047e <_ZN18online_preliminary18COnlinePreliminary17_IncreaseWinCountE22ENUM_SCHOOL_MATCH_TEAM+0x84>
 856046f:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8560473:	83 7d f4 03          	cmpl   $0x3,-0xc(%ebp)
 8560477:	0f 9e c0             	setle  %al
 856047a:	84 c0                	test   %al,%al
 856047c:	75 8c                	jne    856040a <_ZN18online_preliminary18COnlinePreliminary17_IncreaseWinCountE22ENUM_SCHOOL_MATCH_TEAM+0x10>
 856047e:	83 c4 24             	add    $0x24,%esp
 8560481:	5b                   	pop    %ebx
 8560482:	5d                   	pop    %ebp
 8560483:	c3                   	ret

```

```c
// online_preliminary::COnlinePreliminary::_IncreaseWinCount @ 0x85603fa

/* online_preliminary::COnlinePreliminary::_IncreaseWinCount(ENUM_SCHOOL_MATCH_TEAM) */

void __thiscall
online_preliminary::COnlinePreliminary::_IncreaseWinCount(COnlinePreliminary *this,int param_2)

{
  int local_10;
  
  local_10 = 0;
  while( true ) {
    if (3 < local_10) {
      return;
    }
    if ((this[(param_2 * 5 + local_10 + 2) * 8 + 0x18] != (COnlinePreliminary)0x0) &&
       (*(int *)(this + (param_2 * 5 + local_10 + 2) * 8 + 0x14) != 0)) break;
    local_10 = local_10 + 1;
  }
  _IncreaseWinCount(this,*(CUser **)(this + (param_2 * 5 + local_10 + 2) * 8 + 0x14));
  return;
}

```

---

## _MakeRoom

```asm
// === 08560f92 online_preliminary::COnlinePreliminary::_MakeRoom  [0x08560f92-0x85612a3] ===
 8560f92:	55                   	push   %ebp
 8560f93:	89 e5                	mov    %esp,%ebp
 8560f95:	57                   	push   %edi
 8560f96:	56                   	push   %esi
 8560f97:	53                   	push   %ebx
 8560f98:	83 ec 6c             	sub    $0x6c,%esp
 8560f9b:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8560f9e:	89 04 24             	mov    %eax,(%esp)
 8560fa1:	e8 a6 cd 02 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8560fa6:	c7 44 24 08 35 00 00 	movl   $0x35,0x8(%esp)
 8560fad:	00 
 8560fae:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8560fb5:	00 
 8560fb6:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8560fb9:	89 04 24             	mov    %eax,(%esp)
 8560fbc:	e8 3b a9 b6 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8560fc1:	e8 c8 b1 b6 ff       	call   80cc18e <_Z14G_CGameManagerv>
 8560fc6:	89 04 24             	mov    %eax,(%esp)
 8560fc9:	e8 ae 40 d3 ff       	call   829507c <_ZN12CGameManager6GetPvpEv>
 8560fce:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8560fd1:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 8560fd5:	75 55                	jne    856102c <_ZN18online_preliminary18COnlinePreliminary9_MakeRoomEP5CUser+0x9a>
 8560fd7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8560fde:	00 
 8560fdf:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8560fe2:	89 04 24             	mov    %eax,(%esp)
 8560fe5:	e8 36 a9 b6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8560fea:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8560ff1:	00 
 8560ff2:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8560ff5:	89 04 24             	mov    %eax,(%esp)
 8560ff8:	e8 23 a9 b6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8560ffd:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8561004:	00 
 8561005:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8561008:	89 04 24             	mov    %eax,(%esp)
 856100b:	e8 48 a9 b6 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8561010:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8561013:	89 44 24 04          	mov    %eax,0x4(%esp)
 8561017:	8b 45 0c             	mov    0xc(%ebp),%eax
 856101a:	89 04 24             	mov    %eax,(%esp)
 856101d:	e8 98 75 0e 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8561022:	bb 00 00 00 00       	mov    $0x0,%ebx
 8561027:	e9 63 02 00 00       	jmp    856128f <_ZN18online_preliminary18COnlinePreliminary9_MakeRoomEP5CUser+0x2fd>
 856102c:	8b 45 08             	mov    0x8(%ebp),%eax
 856102f:	83 c0 14             	add    $0x14,%eax
 8561032:	89 04 24             	mov    %eax,(%esp)
 8561035:	e8 36 56 1a 00       	call   8706670 <_ZNKSs6lengthEv>
 856103a:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 856103d:	8b 45 08             	mov    0x8(%ebp),%eax
 8561040:	83 c0 14             	add    $0x14,%eax
 8561043:	89 04 24             	mov    %eax,(%esp)
 8561046:	e8 a5 54 1a 00       	call   87064f0 <_ZNKSs5c_strEv>
 856104b:	89 c3                	mov    %eax,%ebx
 856104d:	8b 45 08             	mov    0x8(%ebp),%eax
 8561050:	0f b6 40 10          	movzbl 0x10(%eax),%eax
 8561054:	0f b6 f8             	movzbl %al,%edi
 8561057:	8b 45 08             	mov    0x8(%ebp),%eax
 856105a:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 856105e:	0f bf f0             	movswl %ax,%esi
 8561061:	8b 45 08             	mov    0x8(%ebp),%eax
 8561064:	83 c0 08             	add    $0x8,%eax
 8561067:	89 04 24             	mov    %eax,(%esp)
 856106a:	e8 81 54 1a 00       	call   87064f0 <_ZNKSs5c_strEv>
 856106f:	8b 55 08             	mov    0x8(%ebp),%edx
 8561072:	0f b6 52 0c          	movzbl 0xc(%edx),%edx
 8561076:	0f be d2             	movsbl %dl,%edx
 8561079:	c7 44 24 20 02 00 00 	movl   $0x2,0x20(%esp)
 8561080:	00 
 8561081:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 8561084:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 8561088:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 856108c:	89 7c 24 14          	mov    %edi,0x14(%esp)
 8561090:	89 74 24 10          	mov    %esi,0x10(%esp)
 8561094:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8561098:	89 54 24 08          	mov    %edx,0x8(%esp)
 856109c:	8b 45 0c             	mov    0xc(%ebp),%eax
 856109f:	89 44 24 04          	mov    %eax,0x4(%esp)
 85610a3:	8b 45 e0             	mov    -0x20(%ebp),%eax
 85610a6:	89 04 24             	mov    %eax,(%esp)
 85610a9:	e8 5a 58 07 00       	call   85d6908 <_ZN8PvP_Room11create_roomEP5CUsercPcsbPKci15PVP_BATTLE_MODE>
 85610ae:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 85610b1:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 85610b5:	0f 8e a3 00 00 00    	jle    856115e <_ZN18online_preliminary18COnlinePreliminary9_MakeRoomEP5CUser+0x1cc>
 85610bb:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85610c2:	00 
 85610c3:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85610c6:	89 04 24             	mov    %eax,(%esp)
 85610c9:	e8 52 a8 b6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85610ce:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85610d1:	89 44 24 04          	mov    %eax,0x4(%esp)
 85610d5:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85610d8:	89 04 24             	mov    %eax,(%esp)
 85610db:	e8 40 a8 b6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85610e0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85610e7:	00 
 85610e8:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85610eb:	89 04 24             	mov    %eax,(%esp)
 85610ee:	e8 65 a8 b6 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 85610f3:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85610f6:	89 44 24 04          	mov    %eax,0x4(%esp)
 85610fa:	8b 45 0c             	mov    0xc(%ebp),%eax
 85610fd:	89 04 24             	mov    %eax,(%esp)
 8561100:	e8 b5 74 0e 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8561105:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8561108:	89 04 24             	mov    %eax,(%esp)
 856110b:	e8 84 c8 cc ff       	call   822d994 <_ZN8PvP_Room9get_indexEv>
 8561110:	89 44 24 14          	mov    %eax,0x14(%esp)
 8561114:	c7 44 24 10 3c 22 ca 	movl   $0x8ca223c,0x10(%esp)
 856111b:	08 
 856111c:	c7 44 24 0c 3c 07 00 	movl   $0x73c,0xc(%esp)
 8561123:	00 
 8561124:	c7 44 24 08 80 3a ca 	movl   $0x8ca3a80,0x8(%esp)
 856112b:	08 
 856112c:	c7 44 24 04 62 22 ca 	movl   $0x8ca2262,0x4(%esp)
 8561133:	08 
 8561134:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 856113b:	e8 ca 2a 57 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8561140:	e8 49 b0 b6 ff       	call   80cc18e <_Z14G_CGameManagerv>
 8561145:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8561148:	89 54 24 04          	mov    %edx,0x4(%esp)
 856114c:	89 04 24             	mov    %eax,(%esp)
 856114f:	e8 f4 41 d3 ff       	call   8295348 <_ZN12CGameManager6PutPvpEP8PvP_Room>
 8561154:	bb 00 00 00 00       	mov    $0x0,%ebx
 8561159:	e9 31 01 00 00       	jmp    856128f <_ZN18online_preliminary18COnlinePreliminary9_MakeRoomEP5CUser+0x2fd>
 856115e:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8561161:	89 04 24             	mov    %eax,(%esp)
 8561164:	e8 7d a7 b6 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 8561169:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 8561170:	00 
 8561171:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8561178:	00 
 8561179:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 856117c:	89 04 24             	mov    %eax,(%esp)
 856117f:	e8 78 a7 b6 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8561184:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 856118b:	00 
 856118c:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 856118f:	89 04 24             	mov    %eax,(%esp)
 8561192:	e8 89 a7 b6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8561197:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 856119e:	00 
 856119f:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85611a2:	89 04 24             	mov    %eax,(%esp)
 85611a5:	e8 fa 8c b7 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 85611aa:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85611ad:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 85611b4:	00 
 85611b5:	89 44 24 04          	mov    %eax,0x4(%esp)
 85611b9:	8b 45 0c             	mov    0xc(%ebp),%eax
 85611bc:	89 04 24             	mov    %eax,(%esp)
 85611bf:	e8 8a 92 0f 00       	call   865a44e <_ZN5CUser15make_basic_infoEPcc>
 85611c4:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85611cb:	00 
 85611cc:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85611cf:	89 04 24             	mov    %eax,(%esp)
 85611d2:	e8 81 a7 b6 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 85611d7:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85611da:	89 44 24 04          	mov    %eax,0x4(%esp)
 85611de:	8b 45 0c             	mov    0xc(%ebp),%eax
 85611e1:	89 04 24             	mov    %eax,(%esp)
 85611e4:	e8 d1 73 0e 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 85611e9:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85611ec:	89 04 24             	mov    %eax,(%esp)
 85611ef:	e8 f2 a6 b6 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 85611f4:	c7 44 24 08 29 00 00 	movl   $0x29,0x8(%esp)
 85611fb:	00 
 85611fc:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8561203:	00 
 8561204:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8561207:	89 04 24             	mov    %eax,(%esp)
 856120a:	e8 ed a6 b6 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 856120f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8561216:	00 
 8561217:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 856121a:	89 04 24             	mov    %eax,(%esp)
 856121d:	e8 82 8c b7 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8561222:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8561225:	89 44 24 04          	mov    %eax,0x4(%esp)
 8561229:	8b 45 e0             	mov    -0x20(%ebp),%eax
 856122c:	89 04 24             	mov    %eax,(%esp)
 856122f:	e8 c2 a5 07 00       	call   85db7f6 <_ZN8PvP_Room14make_room_infoEPc>
 8561234:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 856123b:	00 
 856123c:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 856123f:	89 04 24             	mov    %eax,(%esp)
 8561242:	e8 11 a7 b6 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8561247:	e8 5b 91 b7 ff       	call   80da3a7 <_Z11G_GameWorldv>
 856124c:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 856124f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8561253:	89 04 24             	mov    %eax,(%esp)
 8561256:	e8 b9 79 16 00       	call   86c8c14 <_ZN9GameWorld8send_allER11PacketGuard>
 856125b:	e8 47 91 b7 ff       	call   80da3a7 <_Z11G_GameWorldv>
 8561260:	8b 55 0c             	mov    0xc(%ebp),%edx
 8561263:	89 54 24 04          	mov    %edx,0x4(%esp)
 8561267:	89 04 24             	mov    %eax,(%esp)
 856126a:	e8 7f 5a 16 00       	call   86c6cee <_ZN9GameWorld8goto_pvpEP5CUser>
 856126f:	8b 5d e0             	mov    -0x20(%ebp),%ebx
 8561272:	eb 1b                	jmp    856128f <_ZN18online_preliminary18COnlinePreliminary9_MakeRoomEP5CUser+0x2fd>
 8561274:	89 d3                	mov    %edx,%ebx
 8561276:	89 c6                	mov    %eax,%esi
 8561278:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 856127b:	89 04 24             	mov    %eax,(%esp)
 856127e:	e8 fd cb 02 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8561283:	89 f0                	mov    %esi,%eax
 8561285:	89 da                	mov    %ebx,%edx
 8561287:	89 04 24             	mov    %eax,(%esp)
 856128a:	e8 c1 24 58 00       	call   8ae3750 <_Unwind_Resume>
 856128f:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8561292:	89 04 24             	mov    %eax,(%esp)
 8561295:	e8 e6 cb 02 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 856129a:	89 d8                	mov    %ebx,%eax
 856129c:	83 c4 6c             	add    $0x6c,%esp
 856129f:	5b                   	pop    %ebx
 85612a0:	5e                   	pop    %esi
 85612a1:	5f                   	pop    %edi
 85612a2:	5d                   	pop    %ebp
 85612a3:	c3                   	ret

```

```c
// online_preliminary::COnlinePreliminary::_MakeRoom @ 0x8560f92

/* online_preliminary::COnlinePreliminary::_MakeRoom(CUser*) */

PvP_Room * __thiscall
online_preliminary::COnlinePreliminary::_MakeRoom(COnlinePreliminary *this,CUser *param_1)

{
  COnlinePreliminary CVar1;
  short sVar2;
  CGameManager *pCVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  GameWorld *pGVar7;
  PvP_Room *pPVar8;
  PacketGuard local_30 [12];
  PvP_Room *local_24;
  int local_20;
  
  PacketGuard::PacketGuard(local_30);
                    /* try { // try from 08560fbc to 0856126e has its CatchHandler @ 08561274 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,1,0x35);
  pCVar3 = (CGameManager *)G_CGameManager();
  local_24 = (PvP_Room *)CGameManager::GetPvp(pCVar3);
  if (local_24 == (PvP_Room *)0x0) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,4);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
    CUser::Send(param_1,local_30);
    pPVar8 = (PvP_Room *)0x0;
  }
  else {
    uVar4 = std::string::length((string *)(this + 0x14));
    uVar5 = std::string::c_str((string *)(this + 0x14));
    CVar1 = this[0x10];
    sVar2 = *(short *)(this + 0xe);
    uVar6 = std::string::c_str((string *)(this + 8));
    local_20 = PvP_Room::create_room
                         (local_24,param_1,(int)(char)this[0xc],uVar6,(int)sVar2,CVar1,uVar5,uVar4,2
                         );
    if (local_20 < 1) {
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_30);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,0,2);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,1);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_30,1);
      CUser::make_basic_info(param_1,(char *)local_30,'\x01');
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
      CUser::Send(param_1,local_30);
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_30);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,0,0x29);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_30,1);
      PvP_Room::make_room_info(local_24,(char *)local_30);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
      pGVar7 = (GameWorld *)G_GameWorld();
      GameWorld::send_all(pGVar7,local_30);
      pGVar7 = (GameWorld *)G_GameWorld();
      GameWorld::goto_pvp(pGVar7,param_1);
      pPVar8 = local_24;
    }
    else {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,local_20);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
      CUser::Send(param_1,local_30);
      uVar4 = PvP_Room::get_index(local_24);
      LogManager::logFormat
                (1,"MatchingSystem.cpp",
                 "PvP_Room* online_preliminary::COnlinePreliminary::_MakeRoom(CUser*)",0x73c,
                 &DAT_08ca223c,uVar4);
      pCVar3 = (CGameManager *)G_CGameManager();
      CGameManager::PutPvp(pCVar3,local_24);
      pPVar8 = (PvP_Room *)0x0;
    }
  }
  PacketGuard::~PacketGuard(local_30);
  return pPVar8;
}

```

---

## _PullOutRoom

```asm
// === 08560df2 online_preliminary::COnlinePreliminary::_PullOutRoom  [0x08560df2-0x8560e49] ===
 8560df2:	55                   	push   %ebp
 8560df3:	89 e5                	mov    %esp,%ebp
 8560df5:	83 ec 28             	sub    $0x28,%esp
 8560df8:	c7 44 24 10 02 00 00 	movl   $0x2,0x10(%esp)
 8560dff:	00 
 8560e00:	c7 44 24 0c fe 00 00 	movl   $0xfe,0xc(%esp)
 8560e07:	00 
 8560e08:	8b 45 14             	mov    0x14(%ebp),%eax
 8560e0b:	89 44 24 08          	mov    %eax,0x8(%esp)
 8560e0f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8560e12:	89 44 24 04          	mov    %eax,0x4(%esp)
 8560e16:	8b 45 10             	mov    0x10(%ebp),%eax
 8560e19:	89 04 24             	mov    %eax,(%esp)
 8560e1c:	e8 4f c2 07 00       	call   85dd070 <_ZN8PvP_Room17OnSetPVPSeatStateEP5CUseri15ENUM_SEAT_STATE17ENUM_WALKOUT_TYPE>
 8560e21:	83 f0 01             	xor    $0x1,%eax
 8560e24:	84 c0                	test   %al,%al
 8560e26:	74 1f                	je     8560e47 <_ZN18online_preliminary18COnlinePreliminary12_PullOutRoomEP5CUserP8PvP_Roomi+0x55>
 8560e28:	8b 45 10             	mov    0x10(%ebp),%eax
 8560e2b:	89 04 24             	mov    %eax,(%esp)
 8560e2e:	e8 95 54 07 00       	call   85d62c8 <_ZN8PvP_Room5resetEv>
 8560e33:	e8 56 b3 b6 ff       	call   80cc18e <_Z14G_CGameManagerv>
 8560e38:	8b 55 10             	mov    0x10(%ebp),%edx
 8560e3b:	89 54 24 04          	mov    %edx,0x4(%esp)
 8560e3f:	89 04 24             	mov    %eax,(%esp)
 8560e42:	e8 01 45 d3 ff       	call   8295348 <_ZN12CGameManager6PutPvpEP8PvP_Room>
 8560e47:	c9                   	leave
 8560e48:	c3                   	ret
 8560e49:	90                   	nop

```

```c
// online_preliminary::COnlinePreliminary::_PullOutRoom @ 0x8560df2

/* online_preliminary::COnlinePreliminary::_PullOutRoom(CUser*, PvP_Room*, int) */

void __thiscall
online_preliminary::COnlinePreliminary::_PullOutRoom
          (COnlinePreliminary *this,CUser *param_1,PvP_Room *param_2,int param_3)

{
  char cVar1;
  CGameManager *this_00;
  
  cVar1 = PvP_Room::OnSetPVPSeatState(param_2,param_1,param_3,0xfe,2);
  if (cVar1 != '\x01') {
    PvP_Room::reset(param_2);
    this_00 = (CGameManager *)G_CGameManager();
    CGameManager::PutPvp(this_00,param_2);
  }
  return;
}

```

---

## _PutInRoom

```asm
// === 08560e4a online_preliminary::COnlinePreliminary::_PutInRoom  [0x08560e4a-0x8560f73] ===
 8560e4a:	55                   	push   %ebp
 8560e4b:	89 e5                	mov    %esp,%ebp
 8560e4d:	56                   	push   %esi
 8560e4e:	53                   	push   %ebx
 8560e4f:	83 ec 40             	sub    $0x40,%esp
 8560e52:	8b 45 14             	mov    0x14(%ebp),%eax
 8560e55:	88 45 d4             	mov    %al,-0x2c(%ebp)
 8560e58:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8560e5b:	89 04 24             	mov    %eax,(%esp)
 8560e5e:	e8 e9 ce 02 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8560e63:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8560e6a:	0f b6 45 d4          	movzbl -0x2c(%ebp),%eax
 8560e6e:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8560e72:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8560e75:	89 44 24 08          	mov    %eax,0x8(%esp)
 8560e79:	8b 45 0c             	mov    0xc(%ebp),%eax
 8560e7c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8560e80:	8b 45 10             	mov    0x10(%ebp),%eax
 8560e83:	89 04 24             	mov    %eax,(%esp)
 8560e86:	e8 67 5e 07 00       	call   85d6cf2 <_ZN8PvP_Room9join_roomEP5CUserRib>
 8560e8b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8560e8e:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8560e92:	7e 6a                	jle    8560efe <_ZN18online_preliminary18COnlinePreliminary10_PutInRoomEP5CUserP8PvP_Roomb+0xb4>
 8560e94:	c7 44 24 08 36 00 00 	movl   $0x36,0x8(%esp)
 8560e9b:	00 
 8560e9c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8560ea3:	00 
 8560ea4:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8560ea7:	89 04 24             	mov    %eax,(%esp)
 8560eaa:	e8 4d aa b6 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8560eaf:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8560eb6:	00 
 8560eb7:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8560eba:	89 04 24             	mov    %eax,(%esp)
 8560ebd:	e8 5e aa b6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8560ec2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8560ec5:	89 44 24 04          	mov    %eax,0x4(%esp)
 8560ec9:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8560ecc:	89 04 24             	mov    %eax,(%esp)
 8560ecf:	e8 4c aa b6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8560ed4:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8560edb:	00 
 8560edc:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8560edf:	89 04 24             	mov    %eax,(%esp)
 8560ee2:	e8 71 aa b6 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8560ee7:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8560eea:	89 44 24 04          	mov    %eax,0x4(%esp)
 8560eee:	8b 45 0c             	mov    0xc(%ebp),%eax
 8560ef1:	89 04 24             	mov    %eax,(%esp)
 8560ef4:	e8 c1 76 0e 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8560ef9:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
 8560efc:	eb 61                	jmp    8560f5f <_ZN18online_preliminary18COnlinePreliminary10_PutInRoomEP5CUserP8PvP_Roomb+0x115>
 8560efe:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8560f01:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8560f04:	89 54 24 08          	mov    %edx,0x8(%esp)
 8560f08:	89 44 24 04          	mov    %eax,0x4(%esp)
 8560f0c:	8b 45 10             	mov    0x10(%ebp),%eax
 8560f0f:	89 04 24             	mov    %eax,(%esp)
 8560f12:	e8 cb aa 07 00       	call   85db9e2 <_ZN8PvP_Room14make_seat_infoEPci>
 8560f17:	e8 8b 94 b7 ff       	call   80da3a7 <_Z11G_GameWorldv>
 8560f1c:	8d 55 e8             	lea    -0x18(%ebp),%edx
 8560f1f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8560f23:	89 04 24             	mov    %eax,(%esp)
 8560f26:	e8 e9 7c 16 00       	call   86c8c14 <_ZN9GameWorld8send_allER11PacketGuard>
 8560f2b:	e8 77 94 b7 ff       	call   80da3a7 <_Z11G_GameWorldv>
 8560f30:	8b 55 0c             	mov    0xc(%ebp),%edx
 8560f33:	89 54 24 04          	mov    %edx,0x4(%esp)
 8560f37:	89 04 24             	mov    %eax,(%esp)
 8560f3a:	e8 af 5d 16 00       	call   86c6cee <_ZN9GameWorld8goto_pvpEP5CUser>
 8560f3f:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
 8560f42:	eb 1b                	jmp    8560f5f <_ZN18online_preliminary18COnlinePreliminary10_PutInRoomEP5CUserP8PvP_Roomb+0x115>
 8560f44:	89 d3                	mov    %edx,%ebx
 8560f46:	89 c6                	mov    %eax,%esi
 8560f48:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8560f4b:	89 04 24             	mov    %eax,(%esp)
 8560f4e:	e8 2d cf 02 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8560f53:	89 f0                	mov    %esi,%eax
 8560f55:	89 da                	mov    %ebx,%edx
 8560f57:	89 04 24             	mov    %eax,(%esp)
 8560f5a:	e8 f1 27 58 00       	call   8ae3750 <_Unwind_Resume>
 8560f5f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8560f62:	89 04 24             	mov    %eax,(%esp)
 8560f65:	e8 16 cf 02 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8560f6a:	89 d8                	mov    %ebx,%eax
 8560f6c:	83 c4 40             	add    $0x40,%esp
 8560f6f:	5b                   	pop    %ebx
 8560f70:	5e                   	pop    %esi
 8560f71:	5d                   	pop    %ebp
 8560f72:	c3                   	ret
 8560f73:	90                   	nop

```

```c
// online_preliminary::COnlinePreliminary::_PutInRoom @ 0x8560e4a

/* online_preliminary::COnlinePreliminary::_PutInRoom(CUser*, PvP_Room*, bool) */

int __thiscall
online_preliminary::COnlinePreliminary::_PutInRoom
          (COnlinePreliminary *this,CUser *param_1,PvP_Room *param_2,bool param_3)

{
  int iVar1;
  GameWorld *pGVar2;
  int local_20;
  PacketGuard local_1c [12];
  int local_10;
  
  PacketGuard::PacketGuard(local_1c);
  local_20 = 0;
                    /* try { // try from 08560e86 to 08560f3e has its CatchHandler @ 08560f44 */
  local_10 = PvP_Room::join_room(param_2,param_1,&local_20,param_3);
  if (local_10 < 1) {
    PvP_Room::make_seat_info(param_2,(char *)local_1c,local_20);
    pGVar2 = (GameWorld *)G_GameWorld();
    GameWorld::send_all(pGVar2,local_1c);
    pGVar2 = (GameWorld *)G_GameWorld();
    GameWorld::goto_pvp(pGVar2,param_1);
  }
  else {
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x36);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,local_10);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send(param_1,local_1c);
  }
  iVar1 = local_20;
  PacketGuard::~PacketGuard(local_1c);
  return iVar1;
}

```

---

## _RegisterWaitingRoom

```asm
// === 085612a4 online_preliminary::COnlinePreliminary::_RegisterWaitingRoom  [0x085612a4-0x85612c5] ===
 85612a4:	55                   	push   %ebp
 85612a5:	89 e5                	mov    %esp,%ebp
 85612a7:	83 ec 18             	sub    $0x18,%esp
 85612aa:	a1 3c e1 43 09       	mov    0x943e13c,%eax
 85612af:	8b 00                	mov    (%eax),%eax
 85612b1:	8b 08                	mov    (%eax),%ecx
 85612b3:	8b 55 08             	mov    0x8(%ebp),%edx
 85612b6:	a1 3c e1 43 09       	mov    0x943e13c,%eax
 85612bb:	89 54 24 04          	mov    %edx,0x4(%esp)
 85612bf:	89 04 24             	mov    %eax,(%esp)
 85612c2:	ff d1                	call   *%ecx
 85612c4:	c9                   	leave
 85612c5:	c3                   	ret

```

```c
// online_preliminary::COnlinePreliminary::_RegisterWaitingRoom @ 0x85612a4

/* online_preliminary::COnlinePreliminary::_RegisterWaitingRoom(PvP_Room*) */

void online_preliminary::COnlinePreliminary::_RegisterWaitingRoom(PvP_Room *param_1)

{
  (**(code **)*pWaitingRoomList_)(pWaitingRoomList_,param_1);
  return;
}

```

---

## _ReturnTeam

```asm
// === 08561e40 online_preliminary::COnlinePreliminary::_ReturnTeam  [0x08561e40-0x8561f65] ===
 8561e40:	55                   	push   %ebp
 8561e41:	89 e5                	mov    %esp,%ebp
 8561e43:	83 ec 38             	sub    $0x38,%esp
 8561e46:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 8561e4d:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8561e54:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8561e5b:	e9 ea 00 00 00       	jmp    8561f4a <_ZN18online_preliminary18COnlinePreliminary11_ReturnTeamEP8PvP_RoomiP5CUser+0x10a>
 8561e60:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8561e63:	89 44 24 04          	mov    %eax,0x4(%esp)
 8561e67:	8b 45 0c             	mov    0xc(%ebp),%eax
 8561e6a:	89 04 24             	mov    %eax,(%esp)
 8561e6d:	e8 ac 73 07 00       	call   85d921e <_ZN8PvP_Room13get_user_seatEi>
 8561e72:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8561e75:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 8561e79:	0f 84 c0 00 00 00    	je     8561f3f <_ZN18online_preliminary18COnlinePreliminary11_ReturnTeamEP8PvP_RoomiP5CUser+0xff>
 8561e7f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8561e82:	89 44 24 04          	mov    %eax,0x4(%esp)
 8561e86:	8b 45 0c             	mov    0xc(%ebp),%eax
 8561e89:	89 04 24             	mov    %eax,(%esp)
 8561e8c:	e8 e1 73 07 00       	call   85d9272 <_ZN8PvP_Room8get_teamEi>
 8561e91:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8561e94:	8b 45 10             	mov    0x10(%ebp),%eax
 8561e97:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 8561e9a:	75 35                	jne    8561ed1 <_ZN18online_preliminary18COnlinePreliminary11_ReturnTeamEP8PvP_RoomiP5CUser+0x91>
 8561e9c:	83 7d 10 02          	cmpl   $0x2,0x10(%ebp)
 8561ea0:	0f 85 9c 00 00 00    	jne    8561f42 <_ZN18online_preliminary18COnlinePreliminary11_ReturnTeamEP8PvP_RoomiP5CUser+0x102>
 8561ea6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8561ea9:	c7 44 24 10 02 00 00 	movl   $0x2,0x10(%esp)
 8561eb0:	00 
 8561eb1:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8561eb8:	00 
 8561eb9:	89 44 24 08          	mov    %eax,0x8(%esp)
 8561ebd:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8561ec0:	89 44 24 04          	mov    %eax,0x4(%esp)
 8561ec4:	8b 45 0c             	mov    0xc(%ebp),%eax
 8561ec7:	89 04 24             	mov    %eax,(%esp)
 8561eca:	e8 a1 b1 07 00       	call   85dd070 <_ZN8PvP_Room17OnSetPVPSeatStateEP5CUseri15ENUM_SEAT_STATE17ENUM_WALKOUT_TYPE>
 8561ecf:	eb 75                	jmp    8561f46 <_ZN18online_preliminary18COnlinePreliminary11_ReturnTeamEP8PvP_RoomiP5CUser+0x106>
 8561ed1:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 8561ed5:	74 08                	je     8561edf <_ZN18online_preliminary18COnlinePreliminary11_ReturnTeamEP8PvP_RoomiP5CUser+0x9f>
 8561ed7:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8561eda:	3b 45 14             	cmp    0x14(%ebp),%eax
 8561edd:	74 66                	je     8561f45 <_ZN18online_preliminary18COnlinePreliminary11_ReturnTeamEP8PvP_RoomiP5CUser+0x105>
 8561edf:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8561ee2:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8561ee6:	8b 45 0c             	mov    0xc(%ebp),%eax
 8561ee9:	89 44 24 08          	mov    %eax,0x8(%esp)
 8561eed:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8561ef0:	89 44 24 04          	mov    %eax,0x4(%esp)
 8561ef4:	8b 45 08             	mov    0x8(%ebp),%eax
 8561ef7:	89 04 24             	mov    %eax,(%esp)
 8561efa:	e8 f3 ee ff ff       	call   8560df2 <_ZN18online_preliminary18COnlinePreliminary12_PullOutRoomEP5CUserP8PvP_Roomi>
 8561eff:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 8561f03:	75 17                	jne    8561f1c <_ZN18online_preliminary18COnlinePreliminary11_ReturnTeamEP8PvP_RoomiP5CUser+0xdc>
 8561f05:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8561f08:	89 44 24 04          	mov    %eax,0x4(%esp)
 8561f0c:	8b 45 08             	mov    0x8(%ebp),%eax
 8561f0f:	89 04 24             	mov    %eax,(%esp)
 8561f12:	e8 7b f0 ff ff       	call   8560f92 <_ZN18online_preliminary18COnlinePreliminary9_MakeRoomEP5CUser>
 8561f17:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8561f1a:	eb 2a                	jmp    8561f46 <_ZN18online_preliminary18COnlinePreliminary11_ReturnTeamEP8PvP_RoomiP5CUser+0x106>
 8561f1c:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8561f23:	00 
 8561f24:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8561f27:	89 44 24 08          	mov    %eax,0x8(%esp)
 8561f2b:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8561f2e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8561f32:	8b 45 08             	mov    0x8(%ebp),%eax
 8561f35:	89 04 24             	mov    %eax,(%esp)
 8561f38:	e8 0d ef ff ff       	call   8560e4a <_ZN18online_preliminary18COnlinePreliminary10_PutInRoomEP5CUserP8PvP_Roomb>
 8561f3d:	eb 07                	jmp    8561f46 <_ZN18online_preliminary18COnlinePreliminary11_ReturnTeamEP8PvP_RoomiP5CUser+0x106>
 8561f3f:	90                   	nop
 8561f40:	eb 04                	jmp    8561f46 <_ZN18online_preliminary18COnlinePreliminary11_ReturnTeamEP8PvP_RoomiP5CUser+0x106>
 8561f42:	90                   	nop
 8561f43:	eb 01                	jmp    8561f46 <_ZN18online_preliminary18COnlinePreliminary11_ReturnTeamEP8PvP_RoomiP5CUser+0x106>
 8561f45:	90                   	nop
 8561f46:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8561f4a:	83 7d f0 07          	cmpl   $0x7,-0x10(%ebp)
 8561f4e:	0f 96 c0             	setbe  %al
 8561f51:	84 c0                	test   %al,%al
 8561f53:	0f 85 07 ff ff ff    	jne    8561e60 <_ZN18online_preliminary18COnlinePreliminary11_ReturnTeamEP8PvP_RoomiP5CUser+0x20>
 8561f59:	8b 45 08             	mov    0x8(%ebp),%eax
 8561f5c:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 8561f63:	c9                   	leave
 8561f64:	c3                   	ret
 8561f65:	90                   	nop

```

```c
// online_preliminary::COnlinePreliminary::_ReturnTeam @ 0x8561e40

/* online_preliminary::COnlinePreliminary::_ReturnTeam(PvP_Room*, int, CUser*) */

void __thiscall
online_preliminary::COnlinePreliminary::_ReturnTeam
          (COnlinePreliminary *this,PvP_Room *param_1,int param_2,CUser *param_3)

{
  CUser *pCVar1;
  int iVar2;
  PvP_Room *local_18;
  uint local_14;
  
  local_18 = (PvP_Room *)0x0;
  for (local_14 = 0; local_14 < 8; local_14 = local_14 + 1) {
    pCVar1 = (CUser *)PvP_Room::get_user_seat(param_1,local_14);
    if (pCVar1 != (CUser *)0x0) {
      iVar2 = PvP_Room::get_team(param_1,local_14);
      if (param_2 == iVar2) {
        if (param_2 == 2) {
          PvP_Room::OnSetPVPSeatState(param_1,pCVar1,local_14,1,2);
        }
      }
      else if ((param_3 == (CUser *)0x0) || (pCVar1 != param_3)) {
        _PullOutRoom(this,pCVar1,param_1,local_14);
        if (local_18 == (PvP_Room *)0x0) {
          local_18 = (PvP_Room *)_MakeRoom(this,pCVar1);
        }
        else {
          _PutInRoom(this,pCVar1,local_18,true);
        }
      }
    }
  }
  *(undefined4 *)(this + 4) = 0;
  return;
}

```

---

## _SendMatchStatePacket

```asm
// === 0856214a online_preliminary::COnlinePreliminary::_SendMatchStatePacket  [0x0856214a-0x856224f] ===
 856214a:	55                   	push   %ebp
 856214b:	89 e5                	mov    %esp,%ebp
 856214d:	56                   	push   %esi
 856214e:	53                   	push   %ebx
 856214f:	83 ec 30             	sub    $0x30,%esp
 8562152:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8562155:	89 04 24             	mov    %eax,(%esp)
 8562158:	e8 ef bb 02 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 856215d:	c7 44 24 08 af 00 00 	movl   $0xaf,0x8(%esp)
 8562164:	00 
 8562165:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 856216c:	00 
 856216d:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8562170:	89 04 24             	mov    %eax,(%esp)
 8562173:	e8 84 97 b6 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8562178:	8b 45 0c             	mov    0xc(%ebp),%eax
 856217b:	89 44 24 04          	mov    %eax,0x4(%esp)
 856217f:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8562182:	89 04 24             	mov    %eax,(%esp)
 8562185:	e8 96 97 b6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 856218a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8562191:	00 
 8562192:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8562195:	89 04 24             	mov    %eax,(%esp)
 8562198:	e8 bb 97 b6 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 856219d:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 85621a4:	eb 6e                	jmp    8562214 <_ZN18online_preliminary18COnlinePreliminary21_SendMatchStatePacketEii+0xca>
 85621a6:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 85621ad:	eb 56                	jmp    8562205 <_ZN18online_preliminary18COnlinePreliminary21_SendMatchStatePacketEii+0xbb>
 85621af:	8b 55 ec             	mov    -0x14(%ebp),%edx
 85621b2:	8b 5d f0             	mov    -0x10(%ebp),%ebx
 85621b5:	8b 4d 08             	mov    0x8(%ebp),%ecx
 85621b8:	89 d0                	mov    %edx,%eax
 85621ba:	c1 e0 02             	shl    $0x2,%eax
 85621bd:	01 d0                	add    %edx,%eax
 85621bf:	01 d8                	add    %ebx,%eax
 85621c1:	83 c0 02             	add    $0x2,%eax
 85621c4:	8b 44 c1 14          	mov    0x14(%ecx,%eax,8),%eax
 85621c8:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85621cb:	8b 55 ec             	mov    -0x14(%ebp),%edx
 85621ce:	8b 5d f0             	mov    -0x10(%ebp),%ebx
 85621d1:	8b 4d 08             	mov    0x8(%ebp),%ecx
 85621d4:	89 d0                	mov    %edx,%eax
 85621d6:	c1 e0 02             	shl    $0x2,%eax
 85621d9:	01 d0                	add    %edx,%eax
 85621db:	01 d8                	add    %ebx,%eax
 85621dd:	83 c0 02             	add    $0x2,%eax
 85621e0:	0f b6 44 c1 18       	movzbl 0x18(%ecx,%eax,8),%eax
 85621e5:	84 c0                	test   %al,%al
 85621e7:	74 18                	je     8562201 <_ZN18online_preliminary18COnlinePreliminary21_SendMatchStatePacketEii+0xb7>
 85621e9:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 85621ed:	74 12                	je     8562201 <_ZN18online_preliminary18COnlinePreliminary21_SendMatchStatePacketEii+0xb7>
 85621ef:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85621f2:	89 44 24 04          	mov    %eax,0x4(%esp)
 85621f6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85621f9:	89 04 24             	mov    %eax,(%esp)
 85621fc:	e8 b9 63 0e 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8562201:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8562205:	83 7d f0 03          	cmpl   $0x3,-0x10(%ebp)
 8562209:	0f 9e c0             	setle  %al
 856220c:	84 c0                	test   %al,%al
 856220e:	75 9f                	jne    85621af <_ZN18online_preliminary18COnlinePreliminary21_SendMatchStatePacketEii+0x65>
 8562210:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 8562214:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8562217:	3b 45 10             	cmp    0x10(%ebp),%eax
 856221a:	0f 9c c0             	setl   %al
 856221d:	84 c0                	test   %al,%al
 856221f:	75 85                	jne    85621a6 <_ZN18online_preliminary18COnlinePreliminary21_SendMatchStatePacketEii+0x5c>
 8562221:	eb 1b                	jmp    856223e <_ZN18online_preliminary18COnlinePreliminary21_SendMatchStatePacketEii+0xf4>
 8562223:	89 d3                	mov    %edx,%ebx
 8562225:	89 c6                	mov    %eax,%esi
 8562227:	8d 45 e0             	lea    -0x20(%ebp),%eax
 856222a:	89 04 24             	mov    %eax,(%esp)
 856222d:	e8 4e bc 02 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8562232:	89 f0                	mov    %esi,%eax
 8562234:	89 da                	mov    %ebx,%edx
 8562236:	89 04 24             	mov    %eax,(%esp)
 8562239:	e8 12 15 58 00       	call   8ae3750 <_Unwind_Resume>
 856223e:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8562241:	89 04 24             	mov    %eax,(%esp)
 8562244:	e8 37 bc 02 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8562249:	83 c4 30             	add    $0x30,%esp
 856224c:	5b                   	pop    %ebx
 856224d:	5e                   	pop    %esi
 856224e:	5d                   	pop    %ebp
 856224f:	c3                   	ret

```

```c
// online_preliminary::COnlinePreliminary::_SendMatchStatePacket @ 0x856214a

/* online_preliminary::COnlinePreliminary::_SendMatchStatePacket(int, int) */

void __thiscall
online_preliminary::COnlinePreliminary::_SendMatchStatePacket
          (COnlinePreliminary *this,int param_1,int param_2)

{
  PacketGuard local_24 [12];
  int local_18;
  int local_14;
  CUser *local_10;
  
  PacketGuard::PacketGuard(local_24);
                    /* try { // try from 08562173 to 08562200 has its CatchHandler @ 08562223 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,0,0xaf);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,param_1);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
  for (local_18 = 0; local_18 < param_2; local_18 = local_18 + 1) {
    for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
      local_10 = *(CUser **)(this + (local_18 * 5 + local_14 + 2) * 8 + 0x14);
      if ((this[(local_18 * 5 + local_14 + 2) * 8 + 0x18] != (COnlinePreliminary)0x0) &&
         (local_10 != (CUser *)0x0)) {
        CUser::Send(local_10,local_24);
      }
    }
  }
  PacketGuard::~PacketGuard(local_24);
  return;
}

```

---

## _SetRating

```asm
// === 085600f6 online_preliminary::COnlinePreliminary::_SetRating  [0x085600f6-0x856015d] ===
 85600f6:	55                   	push   %ebp
 85600f7:	89 e5                	mov    %esp,%ebp
 85600f9:	83 ec 18             	sub    $0x18,%esp
 85600fc:	e8 e7 fd ff ff       	call   855fee8 <_ZN18online_preliminary18COnlinePreliminary22GetPlayCountPerOneTeamEv>
 8560101:	3c 01                	cmp    $0x1,%al
 8560103:	0f 94 c0             	sete   %al
 8560106:	84 c0                	test   %al,%al
 8560108:	74 24                	je     856012e <_ZN18online_preliminary18COnlinePreliminary10_SetRatingEP5CUserf+0x38>
 856010a:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8560111:	00 
 8560112:	8b 45 0c             	mov    0xc(%ebp),%eax
 8560115:	89 04 24             	mov    %eax,(%esp)
 8560118:	e8 67 d4 b7 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 856011d:	8b 55 10             	mov    0x10(%ebp),%edx
 8560120:	89 54 24 04          	mov    %edx,0x4(%esp)
 8560124:	89 04 24             	mov    %eax,(%esp)
 8560127:	e8 3c 60 02 00       	call   8586168 <_ZN18online_preliminary24COnlinePreliminaryMember9SetRatingEf>
 856012c:	eb 2e                	jmp    856015c <_ZN18online_preliminary18COnlinePreliminary10_SetRatingEP5CUserf+0x66>
 856012e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8560131:	89 04 24             	mov    %eax,(%esp)
 8560134:	e8 b1 8c 00 00       	call   8568dea <_ZN15CUserCharacInfo33GetCurCharacOnlinePreliminaryTeamEv>
 8560139:	85 c0                	test   %eax,%eax
 856013b:	0f 95 c0             	setne  %al
 856013e:	84 c0                	test   %al,%al
 8560140:	74 1a                	je     856015c <_ZN18online_preliminary18COnlinePreliminary10_SetRatingEP5CUserf+0x66>
 8560142:	8b 45 0c             	mov    0xc(%ebp),%eax
 8560145:	89 04 24             	mov    %eax,(%esp)
 8560148:	e8 9d 8c 00 00       	call   8568dea <_ZN15CUserCharacInfo33GetCurCharacOnlinePreliminaryTeamEv>
 856014d:	8b 55 10             	mov    0x10(%ebp),%edx
 8560150:	89 54 24 04          	mov    %edx,0x4(%esp)
 8560154:	89 04 24             	mov    %eax,(%esp)
 8560157:	e8 da 82 02 00       	call   8588436 <_ZN18online_preliminary22COnlinePreliminaryTeam9SetRatingEf>
 856015c:	c9                   	leave
 856015d:	c3                   	ret

```

```c
// online_preliminary::COnlinePreliminary::_SetRating @ 0x85600f6

/* online_preliminary::COnlinePreliminary::_SetRating(CUser*, float) */

void __thiscall
online_preliminary::COnlinePreliminary::_SetRating
          (COnlinePreliminary *this,CUser *param_1,float param_2)

{
  char cVar1;
  COnlinePreliminaryMember *this_00;
  int iVar2;
  COnlinePreliminaryTeam *this_01;
  
  cVar1 = GetPlayCountPerOneTeam();
  if (cVar1 == '\x01') {
    this_00 = (COnlinePreliminaryMember *)CUser::GetCharacExpandData(param_1,4);
    COnlinePreliminaryMember::SetRating(this_00,param_2);
  }
  else {
    iVar2 = CUserCharacInfo::GetCurCharacOnlinePreliminaryTeam((CUserCharacInfo *)param_1);
    if (iVar2 != 0) {
      this_01 = (COnlinePreliminaryTeam *)
                CUserCharacInfo::GetCurCharacOnlinePreliminaryTeam((CUserCharacInfo *)param_1);
      COnlinePreliminaryTeam::SetRating(this_01,param_2);
    }
  }
  return;
}

```

---

## _SetRating_08560368

```asm
// === 08560368 online_preliminary::COnlinePreliminary::_SetRating  [0x08560368-0x85603f9] ===
 8560368:	55                   	push   %ebp
 8560369:	89 e5                	mov    %esp,%ebp
 856036b:	53                   	push   %ebx
 856036c:	83 ec 24             	sub    $0x24,%esp
 856036f:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8560376:	eb 70                	jmp    85603e8 <_ZN18online_preliminary18COnlinePreliminary10_SetRatingE22ENUM_SCHOOL_MATCH_TEAMf+0x80>
 8560378:	8b 55 0c             	mov    0xc(%ebp),%edx
 856037b:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 856037e:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8560381:	89 d0                	mov    %edx,%eax
 8560383:	c1 e0 02             	shl    $0x2,%eax
 8560386:	01 d0                	add    %edx,%eax
 8560388:	01 d8                	add    %ebx,%eax
 856038a:	83 c0 02             	add    $0x2,%eax
 856038d:	0f b6 44 c1 18       	movzbl 0x18(%ecx,%eax,8),%eax
 8560392:	84 c0                	test   %al,%al
 8560394:	74 4e                	je     85603e4 <_ZN18online_preliminary18COnlinePreliminary10_SetRatingE22ENUM_SCHOOL_MATCH_TEAMf+0x7c>
 8560396:	8b 55 0c             	mov    0xc(%ebp),%edx
 8560399:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 856039c:	8b 4d 08             	mov    0x8(%ebp),%ecx
 856039f:	89 d0                	mov    %edx,%eax
 85603a1:	c1 e0 02             	shl    $0x2,%eax
 85603a4:	01 d0                	add    %edx,%eax
 85603a6:	01 d8                	add    %ebx,%eax
 85603a8:	83 c0 02             	add    $0x2,%eax
 85603ab:	8b 44 c1 14          	mov    0x14(%ecx,%eax,8),%eax
 85603af:	85 c0                	test   %eax,%eax
 85603b1:	74 31                	je     85603e4 <_ZN18online_preliminary18COnlinePreliminary10_SetRatingE22ENUM_SCHOOL_MATCH_TEAMf+0x7c>
 85603b3:	8b 55 0c             	mov    0xc(%ebp),%edx
 85603b6:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 85603b9:	8b 4d 08             	mov    0x8(%ebp),%ecx
 85603bc:	89 d0                	mov    %edx,%eax
 85603be:	c1 e0 02             	shl    $0x2,%eax
 85603c1:	01 d0                	add    %edx,%eax
 85603c3:	01 d8                	add    %ebx,%eax
 85603c5:	83 c0 02             	add    $0x2,%eax
 85603c8:	8b 44 c1 14          	mov    0x14(%ecx,%eax,8),%eax
 85603cc:	8b 55 10             	mov    0x10(%ebp),%edx
 85603cf:	89 54 24 08          	mov    %edx,0x8(%esp)
 85603d3:	89 44 24 04          	mov    %eax,0x4(%esp)
 85603d7:	8b 45 08             	mov    0x8(%ebp),%eax
 85603da:	89 04 24             	mov    %eax,(%esp)
 85603dd:	e8 14 fd ff ff       	call   85600f6 <_ZN18online_preliminary18COnlinePreliminary10_SetRatingEP5CUserf>
 85603e2:	eb 0f                	jmp    85603f3 <_ZN18online_preliminary18COnlinePreliminary10_SetRatingE22ENUM_SCHOOL_MATCH_TEAMf+0x8b>
 85603e4:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 85603e8:	83 7d f4 03          	cmpl   $0x3,-0xc(%ebp)
 85603ec:	0f 9e c0             	setle  %al
 85603ef:	84 c0                	test   %al,%al
 85603f1:	75 85                	jne    8560378 <_ZN18online_preliminary18COnlinePreliminary10_SetRatingE22ENUM_SCHOOL_MATCH_TEAMf+0x10>
 85603f3:	83 c4 24             	add    $0x24,%esp
 85603f6:	5b                   	pop    %ebx
 85603f7:	5d                   	pop    %ebp
 85603f8:	c3                   	ret
 85603f9:	90                   	nop

```

```c
// online_preliminary::COnlinePreliminary::_SetRating @ 0x8560368

/* online_preliminary::COnlinePreliminary::_SetRating(ENUM_SCHOOL_MATCH_TEAM, float) */

void __thiscall
online_preliminary::COnlinePreliminary::_SetRating
          (COnlinePreliminary *this,int param_2,float param_3)

{
  int local_10;
  
  local_10 = 0;
  while( true ) {
    if (3 < local_10) {
      return;
    }
    if ((this[(param_2 * 5 + local_10 + 2) * 8 + 0x18] != (COnlinePreliminary)0x0) &&
       (*(int *)(this + (param_2 * 5 + local_10 + 2) * 8 + 0x14) != 0)) break;
    local_10 = local_10 + 1;
  }
  _SetRating(this,*(CUser **)(this + (param_2 * 5 + local_10 + 2) * 8 + 0x14),param_3);
  return;
}

```

---

## _UpdateRating

```asm
// === 08560be2 online_preliminary::COnlinePreliminary::_UpdateRating  [0x08560be2-0x8560cd1] ===
 8560be2:	55                   	push   %ebp
 8560be3:	89 e5                	mov    %esp,%ebp
 8560be5:	83 ec 28             	sub    $0x28,%esp
 8560be8:	b8 00 00 00 00       	mov    $0x0,%eax
 8560bed:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8560bf0:	b8 00 00 00 00       	mov    $0x0,%eax
 8560bf5:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8560bf8:	83 7d 0c 01          	cmpl   $0x1,0xc(%ebp)
 8560bfc:	75 6a                	jne    8560c68 <_ZN18online_preliminary18COnlinePreliminary13_UpdateRatingEi22ENUM_ELO_RATING_SYSTEM+0x86>
 8560bfe:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8560c05:	00 
 8560c06:	8b 45 08             	mov    0x8(%ebp),%eax
 8560c09:	89 04 24             	mov    %eax,(%esp)
 8560c0c:	e8 31 f7 ff ff       	call   8560342 <_ZN18online_preliminary18COnlinePreliminary10_GetRatingE22ENUM_SCHOOL_MATCH_TEAM>
 8560c11:	d9 5d f4             	fstps  -0xc(%ebp)
 8560c14:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8560c1b:	00 
 8560c1c:	8b 45 08             	mov    0x8(%ebp),%eax
 8560c1f:	89 04 24             	mov    %eax,(%esp)
 8560c22:	e8 1b f7 ff ff       	call   8560342 <_ZN18online_preliminary18COnlinePreliminary10_GetRatingE22ENUM_SCHOOL_MATCH_TEAM>
 8560c27:	d9 5d f0             	fstps  -0x10(%ebp)
 8560c2a:	a1 6c bb 3a 09       	mov    0x93abb6c,%eax
 8560c2f:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8560c33:	8b 45 10             	mov    0x10(%ebp),%eax
 8560c36:	89 44 24 08          	mov    %eax,0x8(%esp)
 8560c3a:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8560c3d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8560c41:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8560c44:	89 04 24             	mov    %eax,(%esp)
 8560c47:	e8 55 d0 ee ff       	call   844dca1 <_ZN10CEloRating4calcERfS0_22ENUM_ELO_RATING_SYSTEMi>
 8560c4c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8560c4f:	89 44 24 08          	mov    %eax,0x8(%esp)
 8560c53:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8560c5a:	00 
 8560c5b:	8b 45 08             	mov    0x8(%ebp),%eax
 8560c5e:	89 04 24             	mov    %eax,(%esp)
 8560c61:	e8 02 f7 ff ff       	call   8560368 <_ZN18online_preliminary18COnlinePreliminary10_SetRatingE22ENUM_SCHOOL_MATCH_TEAMf>
 8560c66:	eb 68                	jmp    8560cd0 <_ZN18online_preliminary18COnlinePreliminary13_UpdateRatingEi22ENUM_ELO_RATING_SYSTEM+0xee>
 8560c68:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8560c6f:	00 
 8560c70:	8b 45 08             	mov    0x8(%ebp),%eax
 8560c73:	89 04 24             	mov    %eax,(%esp)
 8560c76:	e8 c7 f6 ff ff       	call   8560342 <_ZN18online_preliminary18COnlinePreliminary10_GetRatingE22ENUM_SCHOOL_MATCH_TEAM>
 8560c7b:	d9 5d f4             	fstps  -0xc(%ebp)
 8560c7e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8560c85:	00 
 8560c86:	8b 45 08             	mov    0x8(%ebp),%eax
 8560c89:	89 04 24             	mov    %eax,(%esp)
 8560c8c:	e8 b1 f6 ff ff       	call   8560342 <_ZN18online_preliminary18COnlinePreliminary10_GetRatingE22ENUM_SCHOOL_MATCH_TEAM>
 8560c91:	d9 5d f0             	fstps  -0x10(%ebp)
 8560c94:	a1 6c bb 3a 09       	mov    0x93abb6c,%eax
 8560c99:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8560c9d:	8b 45 10             	mov    0x10(%ebp),%eax
 8560ca0:	89 44 24 08          	mov    %eax,0x8(%esp)
 8560ca4:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8560ca7:	89 44 24 04          	mov    %eax,0x4(%esp)
 8560cab:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8560cae:	89 04 24             	mov    %eax,(%esp)
 8560cb1:	e8 eb cf ee ff       	call   844dca1 <_ZN10CEloRating4calcERfS0_22ENUM_ELO_RATING_SYSTEMi>
 8560cb6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8560cb9:	89 44 24 08          	mov    %eax,0x8(%esp)
 8560cbd:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8560cc4:	00 
 8560cc5:	8b 45 08             	mov    0x8(%ebp),%eax
 8560cc8:	89 04 24             	mov    %eax,(%esp)
 8560ccb:	e8 98 f6 ff ff       	call   8560368 <_ZN18online_preliminary18COnlinePreliminary10_SetRatingE22ENUM_SCHOOL_MATCH_TEAMf>
 8560cd0:	c9                   	leave
 8560cd1:	c3                   	ret

```

```c
// online_preliminary::COnlinePreliminary::_UpdateRating @ 0x8560be2

/* online_preliminary::COnlinePreliminary::_UpdateRating(int, ENUM_ELO_RATING_SYSTEM) */

void __thiscall
online_preliminary::COnlinePreliminary::_UpdateRating
          (COnlinePreliminary *this,int param_1,undefined4 param_3)

{
  longdouble lVar1;
  float local_14;
  float local_10 [3];
  
  local_10[0] = 0.0;
  local_14 = 0.0;
  if (param_1 == 1) {
    lVar1 = (longdouble)_GetRating(this,0);
    local_10[0] = (float)lVar1;
    lVar1 = (longdouble)_GetRating(this,1);
    local_14 = (float)lVar1;
    CEloRating::calc(local_10,&local_14,param_3,PvPGlobalEnvironmentVariable::school_match_elo_k_);
    _SetRating(this,0,local_10[0]);
  }
  else {
    lVar1 = (longdouble)_GetRating(this,1);
    local_10[0] = (float)lVar1;
    lVar1 = (longdouble)_GetRating(this,0);
    local_14 = (float)lVar1;
    CEloRating::calc(local_10,&local_14,param_3,PvPGlobalEnvironmentVariable::school_match_elo_k_);
    _SetRating(this,1,local_10[0]);
  }
  return;
}

```

---

## ~COnlinePreliminary

```asm
// === 0855ffd6 online_preliminary::COnlinePreliminary::~COnlinePreliminary  [0x0855ffd6-0x8560063] ===
 855ffd6:	55                   	push   %ebp
 855ffd7:	89 e5                	mov    %esp,%ebp
 855ffd9:	56                   	push   %esi
 855ffda:	53                   	push   %ebx
 855ffdb:	83 ec 10             	sub    $0x10,%esp
 855ffde:	8b 45 08             	mov    0x8(%ebp),%eax
 855ffe1:	c7 00 88 3c ca 08    	movl   $0x8ca3c88,(%eax)
 855ffe7:	a1 40 e1 43 09       	mov    0x943e140,%eax
 855ffec:	83 e8 01             	sub    $0x1,%eax
 855ffef:	a3 40 e1 43 09       	mov    %eax,0x943e140
 855fff4:	a1 3c e1 43 09       	mov    0x943e13c,%eax
 855fff9:	85 c0                	test   %eax,%eax
 855fffb:	74 16                	je     8560013 <_ZN18online_preliminary18COnlinePreliminaryD1Ev+0x3d>
 855fffd:	a1 40 e1 43 09       	mov    0x943e140,%eax
 8560002:	85 c0                	test   %eax,%eax
 8560004:	75 0d                	jne    8560013 <_ZN18online_preliminary18COnlinePreliminaryD1Ev+0x3d>
 8560006:	a1 3c e1 43 09       	mov    0x943e13c,%eax
 856000b:	89 04 24             	mov    %eax,(%esp)
 856000e:	e8 dd 44 1c 00       	call   87244f0 <_ZdlPv>
 8560013:	8b 45 08             	mov    0x8(%ebp),%eax
 8560016:	83 c0 08             	add    $0x8,%eax
 8560019:	89 04 24             	mov    %eax,(%esp)
 856001c:	e8 3b 8f 00 00       	call   8568f5c <_ZN13PVP_ROOM_INFOD1Ev>
 8560021:	eb 1b                	jmp    856003e <_ZN18online_preliminary18COnlinePreliminaryD1Ev+0x68>
 8560023:	89 d3                	mov    %edx,%ebx
 8560025:	89 c6                	mov    %eax,%esi
 8560027:	8b 45 08             	mov    0x8(%ebp),%eax
 856002a:	89 04 24             	mov    %eax,(%esp)
 856002d:	e8 32 86 00 00       	call   8568664 <_ZN6IMatchD1Ev>
 8560032:	89 f0                	mov    %esi,%eax
 8560034:	89 da                	mov    %ebx,%edx
 8560036:	89 04 24             	mov    %eax,(%esp)
 8560039:	e8 12 37 58 00       	call   8ae3750 <_Unwind_Resume>
 856003e:	8b 45 08             	mov    0x8(%ebp),%eax
 8560041:	89 04 24             	mov    %eax,(%esp)
 8560044:	e8 1b 86 00 00       	call   8568664 <_ZN6IMatchD1Ev>
 8560049:	b8 00 00 00 00       	mov    $0x0,%eax
 856004e:	84 c0                	test   %al,%al
 8560050:	74 0b                	je     856005d <_ZN18online_preliminary18COnlinePreliminaryD1Ev+0x87>
 8560052:	8b 45 08             	mov    0x8(%ebp),%eax
 8560055:	89 04 24             	mov    %eax,(%esp)
 8560058:	e8 93 44 1c 00       	call   87244f0 <_ZdlPv>
 856005d:	83 c4 10             	add    $0x10,%esp
 8560060:	5b                   	pop    %ebx
 8560061:	5e                   	pop    %esi
 8560062:	5d                   	pop    %ebp
 8560063:	c3                   	ret

```

```c
// online_preliminary::COnlinePreliminary::~COnlinePreliminary @ 0x855ffd6

/* WARNING: Removing unreachable block (ram,0x08560052) */
/* online_preliminary::COnlinePreliminary::~COnlinePreliminary() */

void __thiscall
online_preliminary::COnlinePreliminary::~COnlinePreliminary(COnlinePreliminary *this)

{
  *(undefined ***)this = &PTR__COnlinePreliminary_08ca3c88;
  nWaitingRoomListRefCount_ = nWaitingRoomListRefCount_ + -1;
  if ((pWaitingRoomList_ != (void *)0x0) && (nWaitingRoomListRefCount_ == 0)) {
    operator_delete(pWaitingRoomList_);
  }
                    /* try { // try from 0856001c to 08560020 has its CatchHandler @ 08560023 */
  PVP_ROOM_INFO::~PVP_ROOM_INFO((PVP_ROOM_INFO *)(this + 8));
  IMatch::~IMatch((IMatch *)this);
  return;
}

```

---

## ~COnlinePreliminary_08560064

```asm
// === 08560064 online_preliminary::COnlinePreliminary::~COnlinePreliminary  [0x08560064-0x8560081] ===
 8560064:	55                   	push   %ebp
 8560065:	89 e5                	mov    %esp,%ebp
 8560067:	83 ec 18             	sub    $0x18,%esp
 856006a:	8b 45 08             	mov    0x8(%ebp),%eax
 856006d:	89 04 24             	mov    %eax,(%esp)
 8560070:	e8 61 ff ff ff       	call   855ffd6 <_ZN18online_preliminary18COnlinePreliminaryD1Ev>
 8560075:	8b 45 08             	mov    0x8(%ebp),%eax
 8560078:	89 04 24             	mov    %eax,(%esp)
 856007b:	e8 70 44 1c 00       	call   87244f0 <_ZdlPv>
 8560080:	c9                   	leave
 8560081:	c3                   	ret

```

```c
// online_preliminary::COnlinePreliminary::~COnlinePreliminary @ 0x8560064

/* online_preliminary::COnlinePreliminary::~COnlinePreliminary() */

void __thiscall
online_preliminary::COnlinePreliminary::~COnlinePreliminary(COnlinePreliminary *this)

{
  ~COnlinePreliminary(this);
  operator_delete(this);
  return;
}

```

