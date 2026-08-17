# fair_pvp__CFairMatch

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 59

---

## CFairMatch

```asm
// === 0856284a fair_pvp::CFairMatch::CFairMatch  [0x0856284a-0x856292d] ===
 856284a:	55                   	push   %ebp
 856284b:	89 e5                	mov    %esp,%ebp
 856284d:	57                   	push   %edi
 856284e:	56                   	push   %esi
 856284f:	53                   	push   %ebx
 8562850:	83 ec 1c             	sub    $0x1c,%esp
 8562853:	8b 45 08             	mov    0x8(%ebp),%eax
 8562856:	89 04 24             	mov    %eax,(%esp)
 8562859:	e8 3a 61 00 00       	call   8568998 <_ZN6IMatchC1Ev>
 856285e:	8b 45 08             	mov    0x8(%ebp),%eax
 8562861:	c7 00 e8 3b ca 08    	movl   $0x8ca3be8,(%eax)
 8562867:	8b 45 08             	mov    0x8(%ebp),%eax
 856286a:	83 c0 08             	add    $0x8,%eax
 856286d:	89 04 24             	mov    %eax,(%esp)
 8562870:	e8 a1 66 00 00       	call   8568f16 <_ZN13PVP_ROOM_INFOC1Ev>
 8562875:	8b 45 08             	mov    0x8(%ebp),%eax
 8562878:	83 c0 1c             	add    $0x1c,%eax
 856287b:	89 c3                	mov    %eax,%ebx
 856287d:	be 01 00 00 00       	mov    $0x1,%esi
 8562882:	eb 0e                	jmp    8562892 <_ZN8fair_pvp10CFairMatchC1Ev+0x48>
 8562884:	89 1c 24             	mov    %ebx,(%esp)
 8562887:	e8 64 67 00 00       	call   8568ff0 <_ZN8fair_pvp13TeamInfoThirdC1Ev>
 856288c:	83 c3 48             	add    $0x48,%ebx
 856288f:	83 ee 01             	sub    $0x1,%esi
 8562892:	83 fe ff             	cmp    $0xffffffff,%esi
 8562895:	0f 95 c0             	setne  %al
 8562898:	84 c0                	test   %al,%al
 856289a:	75 e8                	jne    8562884 <_ZN8fair_pvp10CFairMatchC1Ev+0x3a>
 856289c:	a1 48 e1 43 09       	mov    0x943e148,%eax
 85628a1:	85 c0                	test   %eax,%eax
 85628a3:	75 33                	jne    85628d8 <_ZN8fair_pvp10CFairMatchC1Ev+0x8e>
 85628a5:	c7 04 24 1c 00 00 00 	movl   $0x1c,(%esp)
 85628ac:	e8 9f 1b 1c 00       	call   8724450 <_Znwj>
 85628b1:	89 c3                	mov    %eax,%ebx
 85628b3:	89 d8                	mov    %ebx,%eax
 85628b5:	89 04 24             	mov    %eax,(%esp)
 85628b8:	e8 3f 46 00 00       	call   8566efc <_ZN19CMultiMatchRoomListC1Ev>
 85628bd:	eb 12                	jmp    85628d1 <_ZN8fair_pvp10CFairMatchC1Ev+0x87>
 85628bf:	89 d6                	mov    %edx,%esi
 85628c1:	89 c7                	mov    %eax,%edi
 85628c3:	89 1c 24             	mov    %ebx,(%esp)
 85628c6:	e8 25 1c 1c 00       	call   87244f0 <_ZdlPv>
 85628cb:	89 f8                	mov    %edi,%eax
 85628cd:	89 f2                	mov    %esi,%edx
 85628cf:	eb 29                	jmp    85628fa <_ZN8fair_pvp10CFairMatchC1Ev+0xb0>
 85628d1:	89 d8                	mov    %ebx,%eax
 85628d3:	a3 48 e1 43 09       	mov    %eax,0x943e148
 85628d8:	a1 4c e1 43 09       	mov    0x943e14c,%eax
 85628dd:	83 c0 01             	add    $0x1,%eax
 85628e0:	a3 4c e1 43 09       	mov    %eax,0x943e14c
 85628e5:	8b 45 08             	mov    0x8(%ebp),%eax
 85628e8:	c7 80 c0 00 00 00 00 	movl   $0x0,0xc0(%eax)
 85628ef:	00 00 00 
 85628f2:	83 c4 1c             	add    $0x1c,%esp
 85628f5:	5b                   	pop    %ebx
 85628f6:	5e                   	pop    %esi
 85628f7:	5f                   	pop    %edi
 85628f8:	5d                   	pop    %ebp
 85628f9:	c3                   	ret
 85628fa:	89 d3                	mov    %edx,%ebx
 85628fc:	89 c6                	mov    %eax,%esi
 85628fe:	8b 45 08             	mov    0x8(%ebp),%eax
 8562901:	83 c0 08             	add    $0x8,%eax
 8562904:	89 04 24             	mov    %eax,(%esp)
 8562907:	e8 50 66 00 00       	call   8568f5c <_ZN13PVP_ROOM_INFOD1Ev>
 856290c:	89 f0                	mov    %esi,%eax
 856290e:	89 da                	mov    %ebx,%edx
 8562910:	eb 00                	jmp    8562912 <_ZN8fair_pvp10CFairMatchC1Ev+0xc8>
 8562912:	89 d3                	mov    %edx,%ebx
 8562914:	89 c6                	mov    %eax,%esi
 8562916:	8b 45 08             	mov    0x8(%ebp),%eax
 8562919:	89 04 24             	mov    %eax,(%esp)
 856291c:	e8 43 5d 00 00       	call   8568664 <_ZN6IMatchD1Ev>
 8562921:	89 f0                	mov    %esi,%eax
 8562923:	89 da                	mov    %ebx,%edx
 8562925:	89 04 24             	mov    %eax,(%esp)
 8562928:	e8 23 0e 58 00       	call   8ae3750 <_Unwind_Resume>
 856292d:	90                   	nop

```

```c
// fair_pvp::CFairMatch::CFairMatch @ 0x856284a

/* fair_pvp::CFairMatch::CFairMatch() */

void __thiscall fair_pvp::CFairMatch::CFairMatch(CFairMatch *this)

{
  TeamInfoThird *this_00;
  CMultiMatchRoomList *this_01;
  int iVar1;
  
  IMatch::IMatch((IMatch *)this);
  *(undefined ***)this = &PTR__CFairMatch_08ca3be8;
                    /* try { // try from 08562870 to 08562874 has its CatchHandler @ 08562912 */
  PVP_ROOM_INFO::PVP_ROOM_INFO((PVP_ROOM_INFO *)(this + 8));
  this_00 = (TeamInfoThird *)(this + 0x1c);
  for (iVar1 = 1; iVar1 != -1; iVar1 = iVar1 + -1) {
    TeamInfoThird::TeamInfoThird(this_00);
    this_00 = this_00 + 0x48;
  }
  if (pWaitingRoomList_ == (CMultiMatchRoomList *)0x0) {
                    /* try { // try from 085628ac to 085628b0 has its CatchHandler @ 085628fa */
    this_01 = operator_new(0x1c);
                    /* try { // try from 085628b8 to 085628bc has its CatchHandler @ 085628bf */
    CMultiMatchRoomList::CMultiMatchRoomList(this_01);
    pWaitingRoomList_ = this_01;
  }
  nWaitingRoomListRefCount_ = nWaitingRoomListRefCount_ + 1;
  *(undefined4 *)(this + 0xc0) = 0;
  return;
}

```

---

## CheckJoinable

```asm
// === 08562a6e fair_pvp::CFairMatch::CheckJoinable  [0x08562a6e-0x8562b77] ===
 8562a6e:	55                   	push   %ebp
 8562a6f:	89 e5                	mov    %esp,%ebp
 8562a71:	53                   	push   %ebx
 8562a72:	83 ec 14             	sub    $0x14,%esp
 8562a75:	8b 45 10             	mov    0x10(%ebp),%eax
 8562a78:	89 04 24             	mov    %eax,(%esp)
 8562a7b:	e8 7e 02 00 00       	call   8562cfe <_ZN8fair_pvp10CFairMatch28CheckUnusableEquipmentInUserEP5CUser>
 8562a80:	83 f0 01             	xor    $0x1,%eax
 8562a83:	84 c0                	test   %al,%al
 8562a85:	74 0a                	je     8562a91 <_ZN8fair_pvp10CFairMatch13CheckJoinableEP8PvP_RoomP5CUser+0x23>
 8562a87:	b8 01 00 00 00       	mov    $0x1,%eax
 8562a8c:	e9 e0 00 00 00       	jmp    8562b71 <_ZN8fair_pvp10CFairMatch13CheckJoinableEP8PvP_RoomP5CUser+0x103>
 8562a91:	8b 45 0c             	mov    0xc(%ebp),%eax
 8562a94:	89 04 24             	mov    %eax,(%esp)
 8562a97:	e8 04 3e 07 00       	call   85d68a0 <_ZN8PvP_Room16get_player_countEv>
 8562a9c:	89 c3                	mov    %eax,%ebx
 8562a9e:	e8 91 fd ff ff       	call   8562834 <_ZN8fair_pvp10CFairMatch22GetPlayCountPerOneTeamEv>
 8562aa3:	0f b6 c0             	movzbl %al,%eax
 8562aa6:	01 c0                	add    %eax,%eax
 8562aa8:	39 c3                	cmp    %eax,%ebx
 8562aaa:	0f 9d c0             	setge  %al
 8562aad:	84 c0                	test   %al,%al
 8562aaf:	74 0a                	je     8562abb <_ZN8fair_pvp10CFairMatch13CheckJoinableEP8PvP_RoomP5CUser+0x4d>
 8562ab1:	b8 04 00 00 00       	mov    $0x4,%eax
 8562ab6:	e9 b6 00 00 00       	jmp    8562b71 <_ZN8fair_pvp10CFairMatch13CheckJoinableEP8PvP_RoomP5CUser+0x103>
 8562abb:	8b 45 08             	mov    0x8(%ebp),%eax
 8562abe:	83 c0 1c             	add    $0x1c,%eax
 8562ac1:	89 04 24             	mov    %eax,(%esp)
 8562ac4:	e8 43 fc ff ff       	call   856270c <_ZNK8fair_pvp13TeamInfoThird4sizeEv>
 8562ac9:	89 c3                	mov    %eax,%ebx
 8562acb:	8b 45 08             	mov    0x8(%ebp),%eax
 8562ace:	83 c0 64             	add    $0x64,%eax
 8562ad1:	89 04 24             	mov    %eax,(%esp)
 8562ad4:	e8 33 fc ff ff       	call   856270c <_ZNK8fair_pvp13TeamInfoThird4sizeEv>
 8562ad9:	01 c3                	add    %eax,%ebx
 8562adb:	e8 54 fd ff ff       	call   8562834 <_ZN8fair_pvp10CFairMatch22GetPlayCountPerOneTeamEv>
 8562ae0:	0f b6 c0             	movzbl %al,%eax
 8562ae3:	01 c0                	add    %eax,%eax
 8562ae5:	39 c3                	cmp    %eax,%ebx
 8562ae7:	0f 9f c0             	setg   %al
 8562aea:	84 c0                	test   %al,%al
 8562aec:	74 07                	je     8562af5 <_ZN8fair_pvp10CFairMatch13CheckJoinableEP8PvP_RoomP5CUser+0x87>
 8562aee:	b8 04 00 00 00       	mov    $0x4,%eax
 8562af3:	eb 7c                	jmp    8562b71 <_ZN8fair_pvp10CFairMatch13CheckJoinableEP8PvP_RoomP5CUser+0x103>
 8562af5:	8b 45 08             	mov    0x8(%ebp),%eax
 8562af8:	8b 40 04             	mov    0x4(%eax),%eax
 8562afb:	83 f8 05             	cmp    $0x5,%eax
 8562afe:	77 6c                	ja     8562b6c <_ZN8fair_pvp10CFairMatch13CheckJoinableEP8PvP_RoomP5CUser+0xfe>
 8562b00:	8b 04 85 5c 23 ca 08 	mov    0x8ca235c(,%eax,4),%eax
 8562b07:	ff e0                	jmp    *%eax
 8562b09:	8b 45 10             	mov    0x10(%ebp),%eax
 8562b0c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8562b10:	8b 45 0c             	mov    0xc(%ebp),%eax
 8562b13:	89 44 24 04          	mov    %eax,0x4(%esp)
 8562b17:	8b 45 08             	mov    0x8(%ebp),%eax
 8562b1a:	89 04 24             	mov    %eax,(%esp)
 8562b1d:	e8 c6 fe ff ff       	call   85629e8 <_ZN8fair_pvp10CFairMatch14_CheckSameTeamEP8PvP_RoomP5CUser>
 8562b22:	83 f0 01             	xor    $0x1,%eax
 8562b25:	84 c0                	test   %al,%al
 8562b27:	74 07                	je     8562b30 <_ZN8fair_pvp10CFairMatch13CheckJoinableEP8PvP_RoomP5CUser+0xc2>
 8562b29:	b8 04 00 00 00       	mov    $0x4,%eax
 8562b2e:	eb 41                	jmp    8562b71 <_ZN8fair_pvp10CFairMatch13CheckJoinableEP8PvP_RoomP5CUser+0x103>
 8562b30:	8b 45 10             	mov    0x10(%ebp),%eax
 8562b33:	89 44 24 08          	mov    %eax,0x8(%esp)
 8562b37:	8b 45 0c             	mov    0xc(%ebp),%eax
 8562b3a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8562b3e:	8b 45 08             	mov    0x8(%ebp),%eax
 8562b41:	89 04 24             	mov    %eax,(%esp)
 8562b44:	e8 a9 fe ff ff       	call   85629f2 <_ZN8fair_pvp10CFairMatch14_CheckObserverEP8PvP_RoomP5CUser>
 8562b49:	83 f0 01             	xor    $0x1,%eax
 8562b4c:	84 c0                	test   %al,%al
 8562b4e:	74 07                	je     8562b57 <_ZN8fair_pvp10CFairMatch13CheckJoinableEP8PvP_RoomP5CUser+0xe9>
 8562b50:	b8 04 00 00 00       	mov    $0x4,%eax
 8562b55:	eb 1a                	jmp    8562b71 <_ZN8fair_pvp10CFairMatch13CheckJoinableEP8PvP_RoomP5CUser+0x103>
 8562b57:	b8 00 00 00 00       	mov    $0x0,%eax
 8562b5c:	eb 13                	jmp    8562b71 <_ZN8fair_pvp10CFairMatch13CheckJoinableEP8PvP_RoomP5CUser+0x103>
 8562b5e:	b8 00 00 00 00       	mov    $0x0,%eax
 8562b63:	eb 0c                	jmp    8562b71 <_ZN8fair_pvp10CFairMatch13CheckJoinableEP8PvP_RoomP5CUser+0x103>
 8562b65:	b8 04 00 00 00       	mov    $0x4,%eax
 8562b6a:	eb 05                	jmp    8562b71 <_ZN8fair_pvp10CFairMatch13CheckJoinableEP8PvP_RoomP5CUser+0x103>
 8562b6c:	b8 04 00 00 00       	mov    $0x4,%eax
 8562b71:	83 c4 14             	add    $0x14,%esp
 8562b74:	5b                   	pop    %ebx
 8562b75:	5d                   	pop    %ebp
 8562b76:	c3                   	ret
 8562b77:	90                   	nop

```

```c
// fair_pvp::CFairMatch::CheckJoinable @ 0x8562a6e

/* fair_pvp::CFairMatch::CheckJoinable(PvP_Room*, CUser*) */

undefined4 __thiscall
fair_pvp::CFairMatch::CheckJoinable(CFairMatch *this,PvP_Room *param_1,CUser *param_2)

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
      iVar3 = TeamInfoThird::size((TeamInfoThird *)(this + 0x1c));
      iVar5 = TeamInfoThird::size((TeamInfoThird *)(this + 100));
      uVar4 = GetPlayCountPerOneTeam();
      if ((int)((uVar4 & 0xff) * 2) < iVar3 + iVar5) {
        uVar2 = 4;
      }
      else {
        switch(*(undefined4 *)(this + 4)) {
        case 0:
          cVar1 = _CheckSameTeam((PvP_Room *)this,(CUser *)param_1);
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
// === 08565c54 fair_pvp::CFairMatch::CheckMatchable  [0x08565c54-0x8565d03] ===
 8565c54:	55                   	push   %ebp
 8565c55:	89 e5                	mov    %esp,%ebp
 8565c57:	83 ec 28             	sub    $0x28,%esp
 8565c5a:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8565c61:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8565c68:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8565c6f:	eb 26                	jmp    8565c97 <_ZN8fair_pvp10CFairMatch14CheckMatchableEP6IMatch+0x43>
 8565c71:	8b 45 0c             	mov    0xc(%ebp),%eax
 8565c74:	8b 00                	mov    (%eax),%eax
 8565c76:	83 c0 10             	add    $0x10,%eax
 8565c79:	8b 10                	mov    (%eax),%edx
 8565c7b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8565c7e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8565c82:	8b 45 0c             	mov    0xc(%ebp),%eax
 8565c85:	89 04 24             	mov    %eax,(%esp)
 8565c88:	ff d2                	call   *%edx
 8565c8a:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8565c8d:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8565c91:	75 11                	jne    8565ca4 <_ZN8fair_pvp10CFairMatch14CheckMatchableEP6IMatch+0x50>
 8565c93:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8565c97:	83 7d f4 03          	cmpl   $0x3,-0xc(%ebp)
 8565c9b:	0f 9e c0             	setle  %al
 8565c9e:	84 c0                	test   %al,%al
 8565ca0:	75 cf                	jne    8565c71 <_ZN8fair_pvp10CFairMatch14CheckMatchableEP6IMatch+0x1d>
 8565ca2:	eb 01                	jmp    8565ca5 <_ZN8fair_pvp10CFairMatch14CheckMatchableEP6IMatch+0x51>
 8565ca4:	90                   	nop
 8565ca5:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8565ca9:	75 07                	jne    8565cb2 <_ZN8fair_pvp10CFairMatch14CheckMatchableEP6IMatch+0x5e>
 8565cab:	b8 00 00 00 00       	mov    $0x0,%eax
 8565cb0:	eb 4f                	jmp    8565d01 <_ZN8fair_pvp10CFairMatch14CheckMatchableEP6IMatch+0xad>
 8565cb2:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8565cb9:	eb 26                	jmp    8565ce1 <_ZN8fair_pvp10CFairMatch14CheckMatchableEP6IMatch+0x8d>
 8565cbb:	8b 45 08             	mov    0x8(%ebp),%eax
 8565cbe:	8b 00                	mov    (%eax),%eax
 8565cc0:	83 c0 10             	add    $0x10,%eax
 8565cc3:	8b 10                	mov    (%eax),%edx
 8565cc5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8565cc8:	89 44 24 04          	mov    %eax,0x4(%esp)
 8565ccc:	8b 45 08             	mov    0x8(%ebp),%eax
 8565ccf:	89 04 24             	mov    %eax,(%esp)
 8565cd2:	ff d2                	call   *%edx
 8565cd4:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8565cd7:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 8565cdb:	75 11                	jne    8565cee <_ZN8fair_pvp10CFairMatch14CheckMatchableEP6IMatch+0x9a>
 8565cdd:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8565ce1:	83 7d f4 03          	cmpl   $0x3,-0xc(%ebp)
 8565ce5:	0f 9e c0             	setle  %al
 8565ce8:	84 c0                	test   %al,%al
 8565cea:	75 cf                	jne    8565cbb <_ZN8fair_pvp10CFairMatch14CheckMatchableEP6IMatch+0x67>
 8565cec:	eb 01                	jmp    8565cef <_ZN8fair_pvp10CFairMatch14CheckMatchableEP6IMatch+0x9b>
 8565cee:	90                   	nop
 8565cef:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 8565cf3:	75 07                	jne    8565cfc <_ZN8fair_pvp10CFairMatch14CheckMatchableEP6IMatch+0xa8>
 8565cf5:	b8 00 00 00 00       	mov    $0x0,%eax
 8565cfa:	eb 05                	jmp    8565d01 <_ZN8fair_pvp10CFairMatch14CheckMatchableEP6IMatch+0xad>
 8565cfc:	b8 01 00 00 00       	mov    $0x1,%eax
 8565d01:	c9                   	leave
 8565d02:	c3                   	ret
 8565d03:	90                   	nop

```

```c
// fair_pvp::CFairMatch::CheckMatchable @ 0x8565c54

/* fair_pvp::CFairMatch::CheckMatchable(IMatch*) */

undefined4 __thiscall fair_pvp::CFairMatch::CheckMatchable(CFairMatch *this,IMatch *param_1)

{
  undefined4 uVar1;
  int local_18;
  int local_14;
  int local_10;
  
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  while ((local_10 < 4 &&
         (local_14 = (**(code **)(*(int *)param_1 + 0x10))(param_1,local_10), local_14 == 0))) {
    local_10 = local_10 + 1;
  }
  if (local_14 == 0) {
    uVar1 = 0;
  }
  else {
    local_10 = 0;
    while ((local_10 < 4 &&
           (local_18 = (**(code **)(*(int *)this + 0x10))(this,local_10), local_18 == 0))) {
      local_10 = local_10 + 1;
    }
    if (local_18 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}

```

---

## CheckRematch

```asm
// === 08565d04 fair_pvp::CFairMatch::CheckRematch  [0x08565d04-0x8565d85] ===
 8565d04:	55                   	push   %ebp
 8565d05:	89 e5                	mov    %esp,%ebp
 8565d07:	83 ec 28             	sub    $0x28,%esp
 8565d0a:	8b 45 08             	mov    0x8(%ebp),%eax
 8565d0d:	8b 80 b0 00 00 00    	mov    0xb0(%eax),%eax
 8565d13:	83 f8 02             	cmp    $0x2,%eax
 8565d16:	7e 07                	jle    8565d1f <_ZN8fair_pvp10CFairMatch12CheckRematchEP8PvP_Room+0x1b>
 8565d18:	b8 00 00 00 00       	mov    $0x0,%eax
 8565d1d:	eb 65                	jmp    8565d84 <_ZN8fair_pvp10CFairMatch12CheckRematchEP8PvP_Room+0x80>
 8565d1f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8565d22:	89 44 24 04          	mov    %eax,0x4(%esp)
 8565d26:	8b 45 08             	mov    0x8(%ebp),%eax
 8565d29:	89 04 24             	mov    %eax,(%esp)
 8565d2c:	e8 e5 dd ff ff       	call   8563b16 <_ZNK8fair_pvp10CFairMatch17_CheckRematchableEP8PvP_Room>
 8565d31:	83 f0 01             	xor    $0x1,%eax
 8565d34:	84 c0                	test   %al,%al
 8565d36:	74 07                	je     8565d3f <_ZN8fair_pvp10CFairMatch12CheckRematchEP8PvP_Room+0x3b>
 8565d38:	b8 00 00 00 00       	mov    $0x0,%eax
 8565d3d:	eb 45                	jmp    8565d84 <_ZN8fair_pvp10CFairMatch12CheckRematchEP8PvP_Room+0x80>
 8565d3f:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8565d46:	eb 2c                	jmp    8565d74 <_ZN8fair_pvp10CFairMatch12CheckRematchEP8PvP_Room+0x70>
 8565d48:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8565d4b:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8565d4e:	89 d0                	mov    %edx,%eax
 8565d50:	c1 e0 03             	shl    $0x3,%eax
 8565d53:	01 d0                	add    %edx,%eax
 8565d55:	c1 e0 03             	shl    $0x3,%eax
 8565d58:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8565d5b:	83 c0 10             	add    $0x10,%eax
 8565d5e:	0f b6 40 0c          	movzbl 0xc(%eax),%eax
 8565d62:	83 f0 01             	xor    $0x1,%eax
 8565d65:	84 c0                	test   %al,%al
 8565d67:	74 07                	je     8565d70 <_ZN8fair_pvp10CFairMatch12CheckRematchEP8PvP_Room+0x6c>
 8565d69:	b8 00 00 00 00       	mov    $0x0,%eax
 8565d6e:	eb 14                	jmp    8565d84 <_ZN8fair_pvp10CFairMatch12CheckRematchEP8PvP_Room+0x80>
 8565d70:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8565d74:	83 7d f4 01          	cmpl   $0x1,-0xc(%ebp)
 8565d78:	0f 9e c0             	setle  %al
 8565d7b:	84 c0                	test   %al,%al
 8565d7d:	75 c9                	jne    8565d48 <_ZN8fair_pvp10CFairMatch12CheckRematchEP8PvP_Room+0x44>
 8565d7f:	b8 01 00 00 00       	mov    $0x1,%eax
 8565d84:	c9                   	leave
 8565d85:	c3                   	ret

```

```c
// fair_pvp::CFairMatch::CheckRematch @ 0x8565d04

/* fair_pvp::CFairMatch::CheckRematch(PvP_Room*) */

undefined4 __thiscall fair_pvp::CFairMatch::CheckRematch(CFairMatch *this,PvP_Room *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int local_10;
  
  if (*(int *)(this + 0xb0) < 3) {
    cVar1 = _CheckRematchable(this,param_1);
    if (cVar1 == '\x01') {
      for (local_10 = 0; local_10 < 2; local_10 = local_10 + 1) {
        if (this[local_10 * 0x48 + 0x1c] != (CFairMatch)0x1) {
          return 0;
        }
      }
      uVar2 = 1;
    }
    else {
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

## CheckSeat

```asm
// === 08562b78 fair_pvp::CFairMatch::CheckSeat  [0x08562b78-0x8562b8f] ===
 8562b78:	55                   	push   %ebp
 8562b79:	89 e5                	mov    %esp,%ebp
 8562b7b:	83 7d 0c 02          	cmpl   $0x2,0xc(%ebp)
 8562b7f:	75 07                	jne    8562b88 <_ZN8fair_pvp10CFairMatch9CheckSeatEi+0x10>
 8562b81:	b8 00 00 00 00       	mov    $0x0,%eax
 8562b86:	eb 05                	jmp    8562b8d <_ZN8fair_pvp10CFairMatch9CheckSeatEi+0x15>
 8562b88:	b8 01 00 00 00       	mov    $0x1,%eax
 8562b8d:	5d                   	pop    %ebp
 8562b8e:	c3                   	ret
 8562b8f:	90                   	nop

```

```c
// fair_pvp::CFairMatch::CheckSeat @ 0x8562b78

/* fair_pvp::CFairMatch::CheckSeat(int) */

bool __thiscall fair_pvp::CFairMatch::CheckSeat(CFairMatch *this,int param_1)

{
  return param_1 != 2;
}

```

---

## CheckUnusableEquipment

```asm
// === 08562bdc fair_pvp::CFairMatch::CheckUnusableEquipment  [0x08562bdc-0x8562cfd] ===
 8562bdc:	55                   	push   %ebp
 8562bdd:	89 e5                	mov    %esp,%ebp
 8562bdf:	56                   	push   %esi
 8562be0:	53                   	push   %ebx
 8562be1:	83 ec 20             	sub    $0x20,%esp
 8562be4:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
 8562be8:	75 0a                	jne    8562bf4 <_ZN8fair_pvp10CFairMatch22CheckUnusableEquipmentEPK10Inven_Item+0x18>
 8562bea:	b8 00 00 00 00       	mov    $0x0,%eax
 8562bef:	e9 03 01 00 00       	jmp    8562cf7 <_ZN8fair_pvp10CFairMatch22CheckUnusableEquipmentEPK10Inven_Item+0x11b>
 8562bf4:	8b 45 08             	mov    0x8(%ebp),%eax
 8562bf7:	8b 40 02             	mov    0x2(%eax),%eax
 8562bfa:	85 c0                	test   %eax,%eax
 8562bfc:	75 0a                	jne    8562c08 <_ZN8fair_pvp10CFairMatch22CheckUnusableEquipmentEPK10Inven_Item+0x2c>
 8562bfe:	b8 01 00 00 00       	mov    $0x1,%eax
 8562c03:	e9 ef 00 00 00       	jmp    8562cf7 <_ZN8fair_pvp10CFairMatch22CheckUnusableEquipmentEPK10Inven_Item+0x11b>
 8562c08:	8b 45 08             	mov    0x8(%ebp),%eax
 8562c0b:	8b 40 02             	mov    0x2(%eax),%eax
 8562c0e:	89 c3                	mov    %eax,%ebx
 8562c10:	e8 86 95 b6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8562c15:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8562c19:	89 04 24             	mov    %eax,(%esp)
 8562c1c:	e8 11 ce df ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 8562c21:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8562c24:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8562c28:	75 0a                	jne    8562c34 <_ZN8fair_pvp10CFairMatch22CheckUnusableEquipmentEPK10Inven_Item+0x58>
 8562c2a:	b8 00 00 00 00       	mov    $0x0,%eax
 8562c2f:	e9 c3 00 00 00       	jmp    8562cf7 <_ZN8fair_pvp10CFairMatch22CheckUnusableEquipmentEPK10Inven_Item+0x11b>
 8562c34:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8562c37:	89 04 24             	mov    %eax,(%esp)
 8562c3a:	e8 bb e6 b8 ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 8562c3f:	84 c0                	test   %al,%al
 8562c41:	74 0a                	je     8562c4d <_ZN8fair_pvp10CFairMatch22CheckUnusableEquipmentEPK10Inven_Item+0x71>
 8562c43:	b8 00 00 00 00       	mov    $0x0,%eax
 8562c48:	e9 aa 00 00 00       	jmp    8562cf7 <_ZN8fair_pvp10CFairMatch22CheckUnusableEquipmentEPK10Inven_Item+0x11b>
 8562c4d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8562c50:	89 04 24             	mov    %eax,(%esp)
 8562c53:	e8 de b3 dc ff       	call   832e036 <_ZNK10CEquipItem22GetUsableEquipmentTypeEv>
 8562c58:	85 c0                	test   %eax,%eax
 8562c5a:	0f 94 c0             	sete   %al
 8562c5d:	84 c0                	test   %al,%al
 8562c5f:	74 0a                	je     8562c6b <_ZN8fair_pvp10CFairMatch22CheckUnusableEquipmentEPK10Inven_Item+0x8f>
 8562c61:	b8 01 00 00 00       	mov    $0x1,%eax
 8562c66:	e9 8c 00 00 00       	jmp    8562cf7 <_ZN8fair_pvp10CFairMatch22CheckUnusableEquipmentEPK10Inven_Item+0x11b>
 8562c6b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8562c6e:	89 04 24             	mov    %eax,(%esp)
 8562c71:	e8 78 e6 b8 ff       	call   80f12ee <_ZNK5CItem14getUsableLevelEv>
 8562c76:	89 c6                	mov    %eax,%esi
 8562c78:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8562c7b:	89 04 24             	mov    %eax,(%esp)
 8562c7e:	e8 b3 b3 dc ff       	call   832e036 <_ZNK10CEquipItem22GetUsableEquipmentTypeEv>
 8562c83:	89 c3                	mov    %eax,%ebx
 8562c85:	e8 11 95 b6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8562c8a:	83 c0 68             	add    $0x68,%eax
 8562c8d:	89 74 24 08          	mov    %esi,0x8(%esp)
 8562c91:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8562c95:	89 04 24             	mov    %eax,(%esp)
 8562c98:	e8 59 5e 00 00       	call   8568af6 <_ZN21ServerParameterScript26CheckUnusableEquipmentInfoE28ENUM_UNUSABLE_EQUIPMENT_TYPEi>
 8562c9d:	83 f0 01             	xor    $0x1,%eax
 8562ca0:	84 c0                	test   %al,%al
 8562ca2:	74 07                	je     8562cab <_ZN8fair_pvp10CFairMatch22CheckUnusableEquipmentEPK10Inven_Item+0xcf>
 8562ca4:	b8 00 00 00 00       	mov    $0x0,%eax
 8562ca9:	eb 4c                	jmp    8562cf7 <_ZN8fair_pvp10CFairMatch22CheckUnusableEquipmentEPK10Inven_Item+0x11b>
 8562cab:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8562cae:	89 04 24             	mov    %eax,(%esp)
 8562cb1:	e8 92 df ba ff       	call   8110c48 <_ZNK5CItem9get_indexEv>
 8562cb6:	89 c6                	mov    %eax,%esi
 8562cb8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8562cbb:	8b 00                	mov    (%eax),%eax
 8562cbd:	83 c0 0c             	add    $0xc,%eax
 8562cc0:	8b 10                	mov    (%eax),%edx
 8562cc2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8562cc5:	89 04 24             	mov    %eax,(%esp)
 8562cc8:	ff d2                	call   *%edx
 8562cca:	89 c3                	mov    %eax,%ebx
 8562ccc:	e8 ca 94 b6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8562cd1:	83 c0 68             	add    $0x68,%eax
 8562cd4:	89 74 24 08          	mov    %esi,0x8(%esp)
 8562cd8:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8562cdc:	89 04 24             	mov    %eax,(%esp)
 8562cdf:	e8 da 5e 00 00       	call   8568bbe <_ZNK21ServerParameterScript17CheckUnusableItemE18ENUM_EQUIPMENTTYPEm>
 8562ce4:	83 f0 01             	xor    $0x1,%eax
 8562ce7:	84 c0                	test   %al,%al
 8562ce9:	74 07                	je     8562cf2 <_ZN8fair_pvp10CFairMatch22CheckUnusableEquipmentEPK10Inven_Item+0x116>
 8562ceb:	b8 00 00 00 00       	mov    $0x0,%eax
 8562cf0:	eb 05                	jmp    8562cf7 <_ZN8fair_pvp10CFairMatch22CheckUnusableEquipmentEPK10Inven_Item+0x11b>
 8562cf2:	b8 01 00 00 00       	mov    $0x1,%eax
 8562cf7:	83 c4 20             	add    $0x20,%esp
 8562cfa:	5b                   	pop    %ebx
 8562cfb:	5e                   	pop    %esi
 8562cfc:	5d                   	pop    %ebp
 8562cfd:	c3                   	ret

```

```c
// fair_pvp::CFairMatch::CheckUnusableEquipment @ 0x8562bdc

/* fair_pvp::CFairMatch::CheckUnusableEquipment(Inven_Item const*) */

undefined4 fair_pvp::CFairMatch::CheckUnusableEquipment(Inven_Item *param_1)

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
// === 08562cfe fair_pvp::CFairMatch::CheckUnusableEquipmentInUser  [0x08562cfe-0x8562d07] ===
 8562cfe:	55                   	push   %ebp
 8562cff:	89 e5                	mov    %esp,%ebp
 8562d01:	b8 01 00 00 00       	mov    $0x1,%eax
 8562d06:	5d                   	pop    %ebp
 8562d07:	c3                   	ret

```

```c
// fair_pvp::CFairMatch::CheckUnusableEquipmentInUser @ 0x8562cfe

/* fair_pvp::CFairMatch::CheckUnusableEquipmentInUser(CUser*) */

undefined4 fair_pvp::CFairMatch::CheckUnusableEquipmentInUser(CUser *param_1)

{
  return 1;
}

```

---

## GetGap

```asm
// === 0856491c fair_pvp::CFairMatch::GetGap  [0x0856491c-0x8564951] ===
 856491c:	55                   	push   %ebp
 856491d:	89 e5                	mov    %esp,%ebp
 856491f:	83 ec 28             	sub    $0x28,%esp
 8564922:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8564929:	00 
 856492a:	8b 45 08             	mov    0x8(%ebp),%eax
 856492d:	89 04 24             	mov    %eax,(%esp)
 8564930:	e8 31 40 00 00       	call   8568966 <_ZN8fair_pvp10CFairMatch10_GetRatingE22ENUM_SCHOOL_MATCH_TEAM>
 8564935:	d9 5d f4             	fstps  -0xc(%ebp)
 8564938:	8b 45 0c             	mov    0xc(%ebp),%eax
 856493b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8564942:	00 
 8564943:	89 04 24             	mov    %eax,(%esp)
 8564946:	e8 1b 40 00 00       	call   8568966 <_ZN8fair_pvp10CFairMatch10_GetRatingE22ENUM_SCHOOL_MATCH_TEAM>
 856494b:	d8 6d f4             	fsubrs -0xc(%ebp)
 856494e:	d9 e1                	fabs
 8564950:	c9                   	leave
 8564951:	c3                   	ret

```

```c
// fair_pvp::CFairMatch::GetGap @ 0x856491c

/* fair_pvp::CFairMatch::GetGap(IMatch*) */

longdouble __thiscall fair_pvp::CFairMatch::GetGap(CFairMatch *this,IMatch *param_1)

{
  longdouble lVar1;
  longdouble lVar2;
  
  lVar1 = (longdouble)_GetRating(this,0);
  lVar2 = (longdouble)_GetRating((CFairMatch *)param_1,0);
  return ABS((longdouble)(float)lVar1 - lVar2);
}

```

---

## GetPlayCountPerOneTeam

```asm
// === 08562834 fair_pvp::CFairMatch::GetPlayCountPerOneTeam  [0x08562834-0x8562849] ===
 8562834:	55                   	push   %ebp
 8562835:	89 e5                	mov    %esp,%ebp
 8562837:	b8 01 00 00 00       	mov    $0x1,%eax
 856283c:	5d                   	pop    %ebp
 856283d:	c3                   	ret
 856283e:	90                   	nop
 856283f:	90                   	nop
 8562840:	90                   	nop
 8562841:	90                   	nop
 8562842:	90                   	nop
 8562843:	90                   	nop
 8562844:	90                   	nop
 8562845:	90                   	nop
 8562846:	90                   	nop
 8562847:	90                   	nop
 8562848:	c3                   	ret
 8562849:	90                   	nop

```

```c
// fair_pvp::CFairMatch::GetPlayCountPerOneTeam @ 0x8562834

/* fair_pvp::CFairMatch::GetPlayCountPerOneTeam() */

undefined4 fair_pvp::CFairMatch::GetPlayCountPerOneTeam(void)

{
  return 1;
}

```

---

## GetPlayerCount

```asm
// === 08566d3e fair_pvp::CFairMatch::GetPlayerCount  [0x08566d3e-0x8566d9b] ===
 8566d3e:	55                   	push   %ebp
 8566d3f:	89 e5                	mov    %esp,%ebp
 8566d41:	83 ec 10             	sub    $0x10,%esp
 8566d44:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%ebp)
 8566d4b:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 8566d52:	eb 37                	jmp    8566d8b <_ZN8fair_pvp10CFairMatch14GetPlayerCountEv+0x4d>
 8566d54:	8b 55 fc             	mov    -0x4(%ebp),%edx
 8566d57:	8b 45 08             	mov    0x8(%ebp),%eax
 8566d5a:	83 c2 01             	add    $0x1,%edx
 8566d5d:	c1 e2 04             	shl    $0x4,%edx
 8566d60:	0f b6 44 02 18       	movzbl 0x18(%edx,%eax,1),%eax
 8566d65:	84 c0                	test   %al,%al
 8566d67:	74 04                	je     8566d6d <_ZN8fair_pvp10CFairMatch14GetPlayerCountEv+0x2f>
 8566d69:	83 45 f8 01          	addl   $0x1,-0x8(%ebp)
 8566d6d:	8b 55 fc             	mov    -0x4(%ebp),%edx
 8566d70:	8b 45 08             	mov    0x8(%ebp),%eax
 8566d73:	c1 e2 04             	shl    $0x4,%edx
 8566d76:	01 d0                	add    %edx,%eax
 8566d78:	83 c0 58             	add    $0x58,%eax
 8566d7b:	0f b6 40 18          	movzbl 0x18(%eax),%eax
 8566d7f:	84 c0                	test   %al,%al
 8566d81:	74 04                	je     8566d87 <_ZN8fair_pvp10CFairMatch14GetPlayerCountEv+0x49>
 8566d83:	83 45 f8 01          	addl   $0x1,-0x8(%ebp)
 8566d87:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 8566d8b:	83 7d fc 03          	cmpl   $0x3,-0x4(%ebp)
 8566d8f:	0f 9e c0             	setle  %al
 8566d92:	84 c0                	test   %al,%al
 8566d94:	75 be                	jne    8566d54 <_ZN8fair_pvp10CFairMatch14GetPlayerCountEv+0x16>
 8566d96:	8b 45 f8             	mov    -0x8(%ebp),%eax
 8566d99:	c9                   	leave
 8566d9a:	c3                   	ret
 8566d9b:	90                   	nop

```

```c
// fair_pvp::CFairMatch::GetPlayerCount @ 0x8566d3e

/* fair_pvp::CFairMatch::GetPlayerCount() */

int __thiscall fair_pvp::CFairMatch::GetPlayerCount(CFairMatch *this)

{
  int local_c;
  int local_8;
  
  local_c = 0;
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    if (this[(local_8 + 1) * 0x10 + 0x18] != (CFairMatch)0x0) {
      local_c = local_c + 1;
    }
    if (this[local_8 * 0x10 + 0x70] != (CFairMatch)0x0) {
      local_c = local_c + 1;
    }
  }
  return local_c;
}

```

---

## GetUser

```asm
// === 08565140 fair_pvp::CFairMatch::GetUser  [0x08565140-0x8565183] ===
 8565140:	55                   	push   %ebp
 8565141:	89 e5                	mov    %esp,%ebp
 8565143:	83 7d 0c 03          	cmpl   $0x3,0xc(%ebp)
 8565147:	76 07                	jbe    8565150 <_ZN8fair_pvp10CFairMatch7GetUserEj+0x10>
 8565149:	b8 00 00 00 00       	mov    $0x0,%eax
 856514e:	eb 32                	jmp    8565182 <_ZN8fair_pvp10CFairMatch7GetUserEj+0x42>
 8565150:	8b 55 0c             	mov    0xc(%ebp),%edx
 8565153:	8b 45 08             	mov    0x8(%ebp),%eax
 8565156:	83 c2 01             	add    $0x1,%edx
 8565159:	c1 e2 04             	shl    $0x4,%edx
 856515c:	0f b6 44 02 18       	movzbl 0x18(%edx,%eax,1),%eax
 8565161:	83 f0 01             	xor    $0x1,%eax
 8565164:	84 c0                	test   %al,%al
 8565166:	74 07                	je     856516f <_ZN8fair_pvp10CFairMatch7GetUserEj+0x2f>
 8565168:	b8 00 00 00 00       	mov    $0x0,%eax
 856516d:	eb 13                	jmp    8565182 <_ZN8fair_pvp10CFairMatch7GetUserEj+0x42>
 856516f:	8b 55 0c             	mov    0xc(%ebp),%edx
 8565172:	8b 45 08             	mov    0x8(%ebp),%eax
 8565175:	83 c2 01             	add    $0x1,%edx
 8565178:	c1 e2 04             	shl    $0x4,%edx
 856517b:	01 d0                	add    %edx,%eax
 856517d:	83 c0 14             	add    $0x14,%eax
 8565180:	8b 00                	mov    (%eax),%eax
 8565182:	5d                   	pop    %ebp
 8565183:	c3                   	ret

```

```c
// fair_pvp::CFairMatch::GetUser @ 0x8565140

/* fair_pvp::CFairMatch::GetUser(unsigned int) */

undefined4 __thiscall fair_pvp::CFairMatch::GetUser(CFairMatch *this,uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 4) {
    if (this[(param_1 + 1) * 0x10 + 0x18] == (CFairMatch)0x1) {
      uVar1 = *(undefined4 *)(this + (param_1 + 1) * 0x10 + 0x14);
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
// === 08565184 fair_pvp::CFairMatch::GetUserList  [0x08565184-0x85651a5] ===
 8565184:	55                   	push   %ebp
 8565185:	89 e5                	mov    %esp,%ebp
 8565187:	57                   	push   %edi
 8565188:	56                   	push   %esi
 8565189:	53                   	push   %ebx
 856518a:	8b 55 0c             	mov    0xc(%ebp),%edx
 856518d:	8b 45 08             	mov    0x8(%ebp),%eax
 8565190:	8d 58 1c             	lea    0x1c(%eax),%ebx
 8565193:	b8 12 00 00 00       	mov    $0x12,%eax
 8565198:	89 d7                	mov    %edx,%edi
 856519a:	89 de                	mov    %ebx,%esi
 856519c:	89 c1                	mov    %eax,%ecx
 856519e:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
 85651a0:	5b                   	pop    %ebx
 85651a1:	5e                   	pop    %esi
 85651a2:	5f                   	pop    %edi
 85651a3:	5d                   	pop    %ebp
 85651a4:	c3                   	ret
 85651a5:	90                   	nop

```

```c
// fair_pvp::CFairMatch::GetUserList @ 0x8565184

/* fair_pvp::CFairMatch::GetUserList(void*) */

void __thiscall fair_pvp::CFairMatch::GetUserList(CFairMatch *this,void *param_1)

{
  int iVar1;
  CFairMatch *pCVar2;
  
  pCVar2 = this + 0x1c;
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)param_1 = *(undefined4 *)pCVar2;
    pCVar2 = pCVar2 + 4;
    param_1 = (undefined4 *)((int)param_1 + 4);
  }
  return;
}

```

---

## GiveTrainingSeal

```asm
// === 085652c8 fair_pvp::CFairMatch::GiveTrainingSeal  [0x085652c8-0x85656ff] ===
 85652c8:	55                   	push   %ebp
 85652c9:	89 e5                	mov    %esp,%ebp
 85652cb:	56                   	push   %esi
 85652cc:	53                   	push   %ebx
 85652cd:	83 ec 70             	sub    $0x70,%esp
 85652d0:	8b 45 10             	mov    0x10(%ebp),%eax
 85652d3:	88 45 b4             	mov    %al,-0x4c(%ebp)
 85652d6:	8b 45 0c             	mov    0xc(%ebp),%eax
 85652d9:	89 04 24             	mov    %eax,(%esp)
 85652dc:	e8 51 b1 bb ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 85652e1:	85 c0                	test   %eax,%eax
 85652e3:	0f 94 c0             	sete   %al
 85652e6:	84 c0                	test   %al,%al
 85652e8:	0f 85 09 04 00 00    	jne    85656f7 <_ZN8fair_pvp10CFairMatch16GiveTrainingSealEP5CUserb+0x42f>
 85652ee:	c6 45 ef 01          	movb   $0x1,-0x11(%ebp)
 85652f2:	e8 a4 6e b6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 85652f7:	0f b7 80 e0 49 00 00 	movzwl 0x49e0(%eax),%eax
 85652fe:	0f b7 d8             	movzwl %ax,%ebx
 8565301:	c7 44 24 04 07 00 00 	movl   $0x7,0x4(%esp)
 8565308:	00 
 8565309:	8b 45 0c             	mov    0xc(%ebp),%eax
 856530c:	89 04 24             	mov    %eax,(%esp)
 856530f:	e8 70 82 b7 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 8565314:	89 04 24             	mov    %eax,(%esp)
 8565317:	e8 a6 3b 00 00       	call   8568ec2 <_ZN8fair_pvp13CFairPvPScore17GetDailyPlayCountEv>
 856531c:	89 da                	mov    %ebx,%edx
 856531e:	29 c2                	sub    %eax,%edx
 8565320:	89 d0                	mov    %edx,%eax
 8565322:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8565325:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8565329:	7f 29                	jg     8565354 <_ZN8fair_pvp10CFairMatch16GiveTrainingSealEP5CUserb+0x8c>
 856532b:	c7 44 24 04 07 00 00 	movl   $0x7,0x4(%esp)
 8565332:	00 
 8565333:	8b 45 0c             	mov    0xc(%ebp),%eax
 8565336:	89 04 24             	mov    %eax,(%esp)
 8565339:	e8 46 82 b7 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 856533e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8565345:	00 
 8565346:	89 04 24             	mov    %eax,(%esp)
 8565349:	e8 60 fc cc ff       	call   8234fae <_ZN8fair_pvp13CFairPvPScore19SetRemainBonusCountEi>
 856534e:	c6 45 ef 00          	movb   $0x0,-0x11(%ebp)
 8565352:	eb 22                	jmp    8565376 <_ZN8fair_pvp10CFairMatch16GiveTrainingSealEP5CUserb+0xae>
 8565354:	c7 44 24 04 07 00 00 	movl   $0x7,0x4(%esp)
 856535b:	00 
 856535c:	8b 45 0c             	mov    0xc(%ebp),%eax
 856535f:	89 04 24             	mov    %eax,(%esp)
 8565362:	e8 1d 82 b7 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 8565367:	8b 55 f0             	mov    -0x10(%ebp),%edx
 856536a:	89 54 24 04          	mov    %edx,0x4(%esp)
 856536e:	89 04 24             	mov    %eax,(%esp)
 8565371:	e8 38 fc cc ff       	call   8234fae <_ZN8fair_pvp13CFairPvPScore19SetRemainBonusCountEi>
 8565376:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 856537d:	e8 b2 d4 ff ff       	call   8562834 <_ZN8fair_pvp10CFairMatch22GetPlayCountPerOneTeamEv>
 8565382:	3c 01                	cmp    $0x1,%al
 8565384:	0f 94 c0             	sete   %al
 8565387:	84 c0                	test   %al,%al
 8565389:	0f 84 06 01 00 00    	je     8565495 <_ZN8fair_pvp10CFairMatch16GiveTrainingSealEP5CUserb+0x1cd>
 856538f:	80 7d b4 00          	cmpb   $0x0,-0x4c(%ebp)
 8565393:	74 1a                	je     85653af <_ZN8fair_pvp10CFairMatch16GiveTrainingSealEP5CUserb+0xe7>
 8565395:	e8 01 6e b6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 856539a:	0f b6 80 d8 49 00 00 	movzbl 0x49d8(%eax),%eax
 85653a1:	0f b6 d0             	movzbl %al,%edx
 85653a4:	8b 45 dc             	mov    -0x24(%ebp),%eax
 85653a7:	8d 04 02             	lea    (%edx,%eax,1),%eax
 85653aa:	89 45 dc             	mov    %eax,-0x24(%ebp)
 85653ad:	eb 18                	jmp    85653c7 <_ZN8fair_pvp10CFairMatch16GiveTrainingSealEP5CUserb+0xff>
 85653af:	e8 e7 6d b6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 85653b4:	0f b6 80 d9 49 00 00 	movzbl 0x49d9(%eax),%eax
 85653bb:	0f b6 d0             	movzbl %al,%edx
 85653be:	8b 45 dc             	mov    -0x24(%ebp),%eax
 85653c1:	8d 04 02             	lea    (%edx,%eax,1),%eax
 85653c4:	89 45 dc             	mov    %eax,-0x24(%ebp)
 85653c7:	80 7d ef 00          	cmpb   $0x0,-0x11(%ebp)
 85653cb:	0f 84 9c 00 00 00    	je     856546d <_ZN8fair_pvp10CFairMatch16GiveTrainingSealEP5CUserb+0x1a5>
 85653d1:	80 7d b4 00          	cmpb   $0x0,-0x4c(%ebp)
 85653d5:	74 4b                	je     8565422 <_ZN8fair_pvp10CFairMatch16GiveTrainingSealEP5CUserb+0x15a>
 85653d7:	e8 bf 6d b6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 85653dc:	0f b6 80 da 49 00 00 	movzbl 0x49da(%eax),%eax
 85653e3:	0f b6 d0             	movzbl %al,%edx
 85653e6:	8b 45 dc             	mov    -0x24(%ebp),%eax
 85653e9:	8d 04 02             	lea    (%edx,%eax,1),%eax
 85653ec:	89 45 dc             	mov    %eax,-0x24(%ebp)
 85653ef:	e8 a7 6d b6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 85653f4:	0f b6 80 da 49 00 00 	movzbl 0x49da(%eax),%eax
 85653fb:	0f b6 d8             	movzbl %al,%ebx
 85653fe:	c7 44 24 04 07 00 00 	movl   $0x7,0x4(%esp)
 8565405:	00 
 8565406:	8b 45 0c             	mov    0xc(%ebp),%eax
 8565409:	89 04 24             	mov    %eax,(%esp)
 856540c:	e8 73 81 b7 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 8565411:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8565415:	89 04 24             	mov    %eax,(%esp)
 8565418:	e8 c1 3a 00 00       	call   8568ede <_ZN8fair_pvp13CFairPvPScore29SetLastTrainingSealBonusCountEi>
 856541d:	e9 6e 01 00 00       	jmp    8565590 <_ZN8fair_pvp10CFairMatch16GiveTrainingSealEP5CUserb+0x2c8>
 8565422:	e8 74 6d b6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8565427:	0f b6 80 db 49 00 00 	movzbl 0x49db(%eax),%eax
 856542e:	0f b6 d0             	movzbl %al,%edx
 8565431:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8565434:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8565437:	89 45 dc             	mov    %eax,-0x24(%ebp)
 856543a:	e8 5c 6d b6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 856543f:	0f b6 80 db 49 00 00 	movzbl 0x49db(%eax),%eax
 8565446:	0f b6 d8             	movzbl %al,%ebx
 8565449:	c7 44 24 04 07 00 00 	movl   $0x7,0x4(%esp)
 8565450:	00 
 8565451:	8b 45 0c             	mov    0xc(%ebp),%eax
 8565454:	89 04 24             	mov    %eax,(%esp)
 8565457:	e8 28 81 b7 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 856545c:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8565460:	89 04 24             	mov    %eax,(%esp)
 8565463:	e8 76 3a 00 00       	call   8568ede <_ZN8fair_pvp13CFairPvPScore29SetLastTrainingSealBonusCountEi>
 8565468:	e9 23 01 00 00       	jmp    8565590 <_ZN8fair_pvp10CFairMatch16GiveTrainingSealEP5CUserb+0x2c8>
 856546d:	c7 44 24 04 07 00 00 	movl   $0x7,0x4(%esp)
 8565474:	00 
 8565475:	8b 45 0c             	mov    0xc(%ebp),%eax
 8565478:	89 04 24             	mov    %eax,(%esp)
 856547b:	e8 04 81 b7 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 8565480:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8565487:	00 
 8565488:	89 04 24             	mov    %eax,(%esp)
 856548b:	e8 4e 3a 00 00       	call   8568ede <_ZN8fair_pvp13CFairPvPScore29SetLastTrainingSealBonusCountEi>
 8565490:	e9 fb 00 00 00       	jmp    8565590 <_ZN8fair_pvp10CFairMatch16GiveTrainingSealEP5CUserb+0x2c8>
 8565495:	80 7d b4 00          	cmpb   $0x0,-0x4c(%ebp)
 8565499:	74 1a                	je     85654b5 <_ZN8fair_pvp10CFairMatch16GiveTrainingSealEP5CUserb+0x1ed>
 856549b:	e8 fb 6c b6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 85654a0:	0f b6 80 dc 49 00 00 	movzbl 0x49dc(%eax),%eax
 85654a7:	0f b6 d0             	movzbl %al,%edx
 85654aa:	8b 45 dc             	mov    -0x24(%ebp),%eax
 85654ad:	8d 04 02             	lea    (%edx,%eax,1),%eax
 85654b0:	89 45 dc             	mov    %eax,-0x24(%ebp)
 85654b3:	eb 18                	jmp    85654cd <_ZN8fair_pvp10CFairMatch16GiveTrainingSealEP5CUserb+0x205>
 85654b5:	e8 e1 6c b6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 85654ba:	0f b6 80 dd 49 00 00 	movzbl 0x49dd(%eax),%eax
 85654c1:	0f b6 d0             	movzbl %al,%edx
 85654c4:	8b 45 dc             	mov    -0x24(%ebp),%eax
 85654c7:	8d 04 02             	lea    (%edx,%eax,1),%eax
 85654ca:	89 45 dc             	mov    %eax,-0x24(%ebp)
 85654cd:	80 7d ef 00          	cmpb   $0x0,-0x11(%ebp)
 85654d1:	0f 84 96 00 00 00    	je     856556d <_ZN8fair_pvp10CFairMatch16GiveTrainingSealEP5CUserb+0x2a5>
 85654d7:	80 7d b4 00          	cmpb   $0x0,-0x4c(%ebp)
 85654db:	74 48                	je     8565525 <_ZN8fair_pvp10CFairMatch16GiveTrainingSealEP5CUserb+0x25d>
 85654dd:	e8 b9 6c b6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 85654e2:	0f b6 80 de 49 00 00 	movzbl 0x49de(%eax),%eax
 85654e9:	0f b6 d0             	movzbl %al,%edx
 85654ec:	8b 45 dc             	mov    -0x24(%ebp),%eax
 85654ef:	8d 04 02             	lea    (%edx,%eax,1),%eax
 85654f2:	89 45 dc             	mov    %eax,-0x24(%ebp)
 85654f5:	e8 a1 6c b6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 85654fa:	0f b6 80 de 49 00 00 	movzbl 0x49de(%eax),%eax
 8565501:	0f b6 d8             	movzbl %al,%ebx
 8565504:	c7 44 24 04 07 00 00 	movl   $0x7,0x4(%esp)
 856550b:	00 
 856550c:	8b 45 0c             	mov    0xc(%ebp),%eax
 856550f:	89 04 24             	mov    %eax,(%esp)
 8565512:	e8 6d 80 b7 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 8565517:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 856551b:	89 04 24             	mov    %eax,(%esp)
 856551e:	e8 bb 39 00 00       	call   8568ede <_ZN8fair_pvp13CFairPvPScore29SetLastTrainingSealBonusCountEi>
 8565523:	eb 6b                	jmp    8565590 <_ZN8fair_pvp10CFairMatch16GiveTrainingSealEP5CUserb+0x2c8>
 8565525:	e8 71 6c b6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 856552a:	0f b6 80 df 49 00 00 	movzbl 0x49df(%eax),%eax
 8565531:	0f b6 d0             	movzbl %al,%edx
 8565534:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8565537:	8d 04 02             	lea    (%edx,%eax,1),%eax
 856553a:	89 45 dc             	mov    %eax,-0x24(%ebp)
 856553d:	e8 59 6c b6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8565542:	0f b6 80 df 49 00 00 	movzbl 0x49df(%eax),%eax
 8565549:	0f b6 d8             	movzbl %al,%ebx
 856554c:	c7 44 24 04 07 00 00 	movl   $0x7,0x4(%esp)
 8565553:	00 
 8565554:	8b 45 0c             	mov    0xc(%ebp),%eax
 8565557:	89 04 24             	mov    %eax,(%esp)
 856555a:	e8 25 80 b7 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 856555f:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8565563:	89 04 24             	mov    %eax,(%esp)
 8565566:	e8 73 39 00 00       	call   8568ede <_ZN8fair_pvp13CFairPvPScore29SetLastTrainingSealBonusCountEi>
 856556b:	eb 23                	jmp    8565590 <_ZN8fair_pvp10CFairMatch16GiveTrainingSealEP5CUserb+0x2c8>
 856556d:	c7 44 24 04 07 00 00 	movl   $0x7,0x4(%esp)
 8565574:	00 
 8565575:	8b 45 0c             	mov    0xc(%ebp),%eax
 8565578:	89 04 24             	mov    %eax,(%esp)
 856557b:	e8 04 80 b7 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 8565580:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8565587:	00 
 8565588:	89 04 24             	mov    %eax,(%esp)
 856558b:	e8 4e 39 00 00       	call   8568ede <_ZN8fair_pvp13CFairPvPScore29SetLastTrainingSealBonusCountEi>
 8565590:	8b 5d dc             	mov    -0x24(%ebp),%ebx
 8565593:	c7 44 24 04 07 00 00 	movl   $0x7,0x4(%esp)
 856559a:	00 
 856559b:	8b 45 0c             	mov    0xc(%ebp),%eax
 856559e:	89 04 24             	mov    %eax,(%esp)
 85655a1:	e8 de 7f b7 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 85655a6:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85655aa:	89 04 24             	mov    %eax,(%esp)
 85655ad:	e8 1c 39 00 00       	call   8568ece <_ZN8fair_pvp13CFairPvPScore24SetLastTrainingSealCountEi>
 85655b2:	8b 45 dc             	mov    -0x24(%ebp),%eax
 85655b5:	85 c0                	test   %eax,%eax
 85655b7:	0f 8e 3b 01 00 00    	jle    85656f8 <_ZN8fair_pvp10CFairMatch16GiveTrainingSealEP5CUserb+0x430>
 85655bd:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85655c0:	89 04 24             	mov    %eax,(%esp)
 85655c3:	e8 e4 8b b2 ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 85655c8:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 85655cb:	89 04 24             	mov    %eax,(%esp)
 85655ce:	e8 03 f4 bc ff       	call   81349d6 <_ZNSt6vectorISt4pairIiiESaIS1_EEC1Ev>
 85655d3:	c7 45 e8 f0 0c 00 00 	movl   $0xcf0,-0x18(%ebp)
 85655da:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85655dd:	89 44 24 08          	mov    %eax,0x8(%esp)
 85655e1:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85655e4:	89 44 24 04          	mov    %eax,0x4(%esp)
 85655e8:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85655eb:	89 04 24             	mov    %eax,(%esp)
 85655ee:	e8 8f 58 b7 ff       	call   80dae82 <_ZNSt4pairIiiEC1IiRiEEOT_OT0_>
 85655f3:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85655f6:	89 44 24 04          	mov    %eax,0x4(%esp)
 85655fa:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 85655fd:	89 04 24             	mov    %eax,(%esp)
 8565600:	e8 01 80 b7 ff       	call   80dd606 <_ZNSt6vectorISt4pairIiiESaIS1_EE9push_backEOS1_>
 8565605:	8b 45 0c             	mov    0xc(%ebp),%eax
 8565608:	89 04 24             	mov    %eax,(%esp)
 856560b:	e8 7e 4c b7 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8565610:	c7 44 24 1c 5b 24 ca 	movl   $0x8ca245b,0x1c(%esp)
 8565617:	08 
 8565618:	c7 44 24 18 6f 24 ca 	movl   $0x8ca246f,0x18(%esp)
 856561f:	08 
 8565620:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 8565627:	00 
 8565628:	c7 44 24 10 08 00 00 	movl   $0x8,0x10(%esp)
 856562f:	00 
 8565630:	c7 44 24 0c 03 00 00 	movl   $0x3,0xc(%esp)
 8565637:	00 
 8565638:	8d 55 d0             	lea    -0x30(%ebp),%edx
 856563b:	89 54 24 08          	mov    %edx,0x8(%esp)
 856563f:	8d 55 c4             	lea    -0x3c(%ebp),%edx
 8565642:	89 54 24 04          	mov    %edx,0x4(%esp)
 8565646:	89 04 24             	mov    %eax,(%esp)
 8565649:	e8 64 15 fa ff       	call   8506bb2 <_ZN10CInventory18insert_event_itemsERKSt6vectorISt4pairIiiESaIS2_EERS0_IiSaIiEE15eMoneyAddReason14eItemAddReasonbPKcSD_>
 856564e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8565651:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8565655:	7e 17                	jle    856566e <_ZN8fair_pvp10CFairMatch16GiveTrainingSealEP5CUserb+0x3a6>
 8565657:	8d 45 d0             	lea    -0x30(%ebp),%eax
 856565a:	89 04 24             	mov    %eax,(%esp)
 856565d:	e8 5e 8b b2 ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 8565662:	83 f8 02             	cmp    $0x2,%eax
 8565665:	76 07                	jbe    856566e <_ZN8fair_pvp10CFairMatch16GiveTrainingSealEP5CUserb+0x3a6>
 8565667:	b8 01 00 00 00       	mov    $0x1,%eax
 856566c:	eb 05                	jmp    8565673 <_ZN8fair_pvp10CFairMatch16GiveTrainingSealEP5CUserb+0x3ab>
 856566e:	b8 00 00 00 00       	mov    $0x0,%eax
 8565673:	84 c0                	test   %al,%al
 8565675:	74 4b                	je     85656c2 <_ZN8fair_pvp10CFairMatch16GiveTrainingSealEP5CUserb+0x3fa>
 8565677:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 856567e:	00 
 856567f:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8565682:	89 04 24             	mov    %eax,(%esp)
 8565685:	e8 52 8b b2 ff       	call   808e1dc <_ZNSt6vectorIiSaIiEEixEj>
 856568a:	8b 00                	mov    (%eax),%eax
 856568c:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8565690:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8565697:	00 
 8565698:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 856569f:	00 
 85656a0:	8b 45 0c             	mov    0xc(%ebp),%eax
 85656a3:	89 04 24             	mov    %eax,(%esp)
 85656a6:	e8 2d 6c 11 00       	call   867c2d8 <_ZN5CUser14SendUpdateItemENS_11eSendTargetE14ENUM_ITEMSPACEi>
 85656ab:	eb 15                	jmp    85656c2 <_ZN8fair_pvp10CFairMatch16GiveTrainingSealEP5CUserb+0x3fa>
 85656ad:	89 d3                	mov    %edx,%ebx
 85656af:	89 c6                	mov    %eax,%esi
 85656b1:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 85656b4:	89 04 24             	mov    %eax,(%esp)
 85656b7:	e8 2e f3 bc ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 85656bc:	89 f0                	mov    %esi,%eax
 85656be:	89 da                	mov    %ebx,%edx
 85656c0:	eb 0d                	jmp    85656cf <_ZN8fair_pvp10CFairMatch16GiveTrainingSealEP5CUserb+0x407>
 85656c2:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 85656c5:	89 04 24             	mov    %eax,(%esp)
 85656c8:	e8 1d f3 bc ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 85656cd:	eb 1b                	jmp    85656ea <_ZN8fair_pvp10CFairMatch16GiveTrainingSealEP5CUserb+0x422>
 85656cf:	89 d3                	mov    %edx,%ebx
 85656d1:	89 c6                	mov    %eax,%esi
 85656d3:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85656d6:	89 04 24             	mov    %eax,(%esp)
 85656d9:	e8 fc e6 b1 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 85656de:	89 f0                	mov    %esi,%eax
 85656e0:	89 da                	mov    %ebx,%edx
 85656e2:	89 04 24             	mov    %eax,(%esp)
 85656e5:	e8 66 e0 57 00       	call   8ae3750 <_Unwind_Resume>
 85656ea:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85656ed:	89 04 24             	mov    %eax,(%esp)
 85656f0:	e8 e5 e6 b1 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 85656f5:	eb 01                	jmp    85656f8 <_ZN8fair_pvp10CFairMatch16GiveTrainingSealEP5CUserb+0x430>
 85656f7:	90                   	nop
 85656f8:	83 c4 70             	add    $0x70,%esp
 85656fb:	5b                   	pop    %ebx
 85656fc:	5e                   	pop    %esi
 85656fd:	5d                   	pop    %ebp
 85656fe:	c3                   	ret
 85656ff:	90                   	nop

```

```c
// fair_pvp::CFairMatch::GiveTrainingSeal @ 0x85652c8

/* fair_pvp::CFairMatch::GiveTrainingSeal(CUser*, bool) */

void __thiscall fair_pvp::CFairMatch::GiveTrainingSeal(CFairMatch *this,CUser *param_1,bool param_2)

{
  byte bVar1;
  ushort uVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  CFairPvPScore *pCVar6;
  CInventory *pCVar7;
  uint uVar8;
  undefined4 *puVar9;
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_40 [12];
  vector<int,std::allocator<int>> local_34 [12];
  int local_28;
  pair<int,int> local_24 [8];
  int local_1c;
  char local_15;
  int local_14;
  int local_10;
  
  iVar5 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
  if (iVar5 == 0) {
    return;
  }
  local_15 = '\x01';
  iVar5 = G_CDataManager();
  uVar2 = *(ushort *)(iVar5 + 0x49e0);
  pCVar6 = (CFairPvPScore *)CUser::GetCharacExpandData(param_1,7);
  local_14 = CFairPvPScore::GetDailyPlayCount(pCVar6);
  local_14 = (uint)uVar2 - local_14;
  if (local_14 < 1) {
    pCVar6 = (CFairPvPScore *)CUser::GetCharacExpandData(param_1,7);
    CFairPvPScore::SetRemainBonusCount(pCVar6,0);
    local_15 = '\0';
  }
  else {
    pCVar6 = (CFairPvPScore *)CUser::GetCharacExpandData(param_1,7);
    CFairPvPScore::SetRemainBonusCount(pCVar6,local_14);
  }
  local_28 = 0;
  cVar4 = GetPlayCountPerOneTeam();
  if (cVar4 == '\x01') {
    if (param_2) {
      iVar5 = G_CDataManager();
      local_28 = (uint)*(byte *)(iVar5 + 0x49d8) + local_28;
    }
    else {
      iVar5 = G_CDataManager();
      local_28 = (uint)*(byte *)(iVar5 + 0x49d9) + local_28;
    }
    if (local_15 == '\0') {
      pCVar6 = (CFairPvPScore *)CUser::GetCharacExpandData(param_1,7);
      CFairPvPScore::SetLastTrainingSealBonusCount(pCVar6,0);
    }
    else if (param_2) {
      iVar5 = G_CDataManager();
      local_28 = (uint)*(byte *)(iVar5 + 0x49da) + local_28;
      iVar5 = G_CDataManager();
      bVar1 = *(byte *)(iVar5 + 0x49da);
      pCVar6 = (CFairPvPScore *)CUser::GetCharacExpandData(param_1,7);
      CFairPvPScore::SetLastTrainingSealBonusCount(pCVar6,(uint)bVar1);
    }
    else {
      iVar5 = G_CDataManager();
      local_28 = (uint)*(byte *)(iVar5 + 0x49db) + local_28;
      iVar5 = G_CDataManager();
      bVar1 = *(byte *)(iVar5 + 0x49db);
      pCVar6 = (CFairPvPScore *)CUser::GetCharacExpandData(param_1,7);
      CFairPvPScore::SetLastTrainingSealBonusCount(pCVar6,(uint)bVar1);
    }
  }
  else {
    if (param_2) {
      iVar5 = G_CDataManager();
      local_28 = (uint)*(byte *)(iVar5 + 0x49dc) + local_28;
    }
    else {
      iVar5 = G_CDataManager();
      local_28 = (uint)*(byte *)(iVar5 + 0x49dd) + local_28;
    }
    if (local_15 == '\0') {
      pCVar6 = (CFairPvPScore *)CUser::GetCharacExpandData(param_1,7);
      CFairPvPScore::SetLastTrainingSealBonusCount(pCVar6,0);
    }
    else if (param_2) {
      iVar5 = G_CDataManager();
      local_28 = (uint)*(byte *)(iVar5 + 0x49de) + local_28;
      iVar5 = G_CDataManager();
      bVar1 = *(byte *)(iVar5 + 0x49de);
      pCVar6 = (CFairPvPScore *)CUser::GetCharacExpandData(param_1,7);
      CFairPvPScore::SetLastTrainingSealBonusCount(pCVar6,(uint)bVar1);
    }
    else {
      iVar5 = G_CDataManager();
      local_28 = (uint)*(byte *)(iVar5 + 0x49df) + local_28;
      iVar5 = G_CDataManager();
      bVar1 = *(byte *)(iVar5 + 0x49df);
      pCVar6 = (CFairPvPScore *)CUser::GetCharacExpandData(param_1,7);
      CFairPvPScore::SetLastTrainingSealBonusCount(pCVar6,(uint)bVar1);
    }
  }
  iVar5 = local_28;
  pCVar6 = (CFairPvPScore *)CUser::GetCharacExpandData(param_1,7);
  CFairPvPScore::SetLastTrainingSealCount(pCVar6,iVar5);
  if (0 < local_28) {
    std::vector<int,std::allocator<int>>::vector(local_34);
                    /* try { // try from 085655ce to 085655d2 has its CatchHandler @ 085656cf */
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_40);
    local_1c = 0xcf0;
                    /* try { // try from 085655ee to 085656aa has its CatchHandler @ 085656ad */
    std::pair<int,int>::pair<int,int&>(local_24,&local_1c,&local_28);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back(local_40,local_24)
    ;
    pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    local_10 = CInventory::insert_event_items
                         (pCVar7,local_40,local_34,3,8,1,"game_server_msg_171","game_server_msg_172"
                         );
    if ((local_10 < 1) || (uVar8 = std::vector<int,std::allocator<int>>::size(local_34), uVar8 < 3))
    {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      puVar9 = (undefined4 *)std::vector<int,std::allocator<int>>::operator[](local_34,0);
      CUser::SendUpdateItem(param_1,1,0,*puVar9);
    }
                    /* try { // try from 085656c8 to 085656cc has its CatchHandler @ 085656cf */
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_40);
    std::vector<int,std::allocator<int>>::~vector(local_34);
    return;
  }
  return;
}

```

---

## OnAskRematch

```asm
// === 085664a0 fair_pvp::CFairMatch::OnAskRematch  [0x085664a0-0x856694b] ===
 85664a0:	55                   	push   %ebp
 85664a1:	89 e5                	mov    %esp,%ebp
 85664a3:	57                   	push   %edi
 85664a4:	56                   	push   %esi
 85664a5:	53                   	push   %ebx
 85664a6:	83 ec 6c             	sub    $0x6c,%esp
 85664a9:	8b 45 0c             	mov    0xc(%ebp),%eax
 85664ac:	89 04 24             	mov    %eax,(%esp)
 85664af:	e8 da ec 0e 00       	call   865518e <_ZN5CUser10GetPVPRoomEv>
 85664b4:	89 45 dc             	mov    %eax,-0x24(%ebp)
 85664b7:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 85664bb:	75 31                	jne    85664ee <_ZN8fair_pvp10CFairMatch12OnAskRematchEP5CUseri+0x4e>
 85664bd:	c7 44 24 10 bb 24 ca 	movl   $0x8ca24bb,0x10(%esp)
 85664c4:	08 
 85664c5:	c7 44 24 0c 58 10 00 	movl   $0x1058,0xc(%esp)
 85664cc:	00 
 85664cd:	c7 44 24 08 40 36 ca 	movl   $0x8ca3640,0x8(%esp)
 85664d4:	08 
 85664d5:	c7 44 24 04 62 22 ca 	movl   $0x8ca2262,0x4(%esp)
 85664dc:	08 
 85664dd:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 85664e4:	e8 21 d7 56 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 85664e9:	e9 55 04 00 00       	jmp    8566943 <_ZN8fair_pvp10CFairMatch12OnAskRematchEP5CUseri+0x4a3>
 85664ee:	8b 45 dc             	mov    -0x24(%ebp),%eax
 85664f1:	89 04 24             	mov    %eax,(%esp)
 85664f4:	e8 d3 74 cc ff       	call   822d9cc <_ZN8PvP_Room19get_pvp_battle_modeEv>
 85664f9:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 85664fc:	8b 45 dc             	mov    -0x24(%ebp),%eax
 85664ff:	89 04 24             	mov    %eax,(%esp)
 8566502:	e8 8d 74 cc ff       	call   822d994 <_ZN8PvP_Room9get_indexEv>
 8566507:	89 c7                	mov    %eax,%edi
 8566509:	8b 45 0c             	mov    0xc(%ebp),%eax
 856650c:	89 04 24             	mov    %eax,(%esp)
 856650f:	e8 14 ab b9 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 8566514:	89 c6                	mov    %eax,%esi
 8566516:	8b 45 0c             	mov    0xc(%ebp),%eax
 8566519:	89 04 24             	mov    %eax,(%esp)
 856651c:	e8 51 ab b9 ff       	call   8101072 <_ZNK5CUser12get_acc_nameEv>
 8566521:	89 c3                	mov    %eax,%ebx
 8566523:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 856652a:	00 
 856652b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8566532:	00 
 8566533:	c7 44 24 08 5c 10 00 	movl   $0x105c,0x8(%esp)
 856653a:	00 
 856653b:	c7 44 24 04 40 36 ca 	movl   $0x8ca3640,0x4(%esp)
 8566542:	08 
 8566543:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8566546:	89 04 24             	mov    %eax,(%esp)
 8566549:	e8 ee 97 fe ff       	call   854fd3c <_ZN10CSwitchLogC1EPKciii>
 856654e:	8b 45 10             	mov    0x10(%ebp),%eax
 8566551:	89 44 24 18          	mov    %eax,0x18(%esp)
 8566555:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8566558:	89 44 24 14          	mov    %eax,0x14(%esp)
 856655c:	89 7c 24 10          	mov    %edi,0x10(%esp)
 8566560:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8566564:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8566568:	c7 44 24 04 98 23 ca 	movl   $0x8ca2398,0x4(%esp)
 856656f:	08 
 8566570:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8566573:	89 04 24             	mov    %eax,(%esp)
 8566576:	e8 e9 97 fe ff       	call   854fd64 <_ZN10CSwitchLogclEPKcz>
 856657b:	8b 45 0c             	mov    0xc(%ebp),%eax
 856657e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8566582:	8b 45 08             	mov    0x8(%ebp),%eax
 8566585:	89 04 24             	mov    %eax,(%esp)
 8566588:	e8 1b fe ff ff       	call   85663a8 <_ZN8fair_pvp10CFairMatch9_FindTeamEP5CUser>
 856658d:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8566590:	83 7d e0 02          	cmpl   $0x2,-0x20(%ebp)
 8566594:	75 31                	jne    85665c7 <_ZN8fair_pvp10CFairMatch12OnAskRematchEP5CUseri+0x127>
 8566596:	c7 44 24 10 74 23 ca 	movl   $0x8ca2374,0x10(%esp)
 856659d:	08 
 856659e:	c7 44 24 0c 62 10 00 	movl   $0x1062,0xc(%esp)
 85665a5:	00 
 85665a6:	c7 44 24 08 40 36 ca 	movl   $0x8ca3640,0x8(%esp)
 85665ad:	08 
 85665ae:	c7 44 24 04 62 22 ca 	movl   $0x8ca2262,0x4(%esp)
 85665b5:	08 
 85665b6:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 85665bd:	e8 48 d6 56 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 85665c2:	e9 7c 03 00 00       	jmp    8566943 <_ZN8fair_pvp10CFairMatch12OnAskRematchEP5CUseri+0x4a3>
 85665c7:	8b 45 e0             	mov    -0x20(%ebp),%eax
 85665ca:	89 44 24 04          	mov    %eax,0x4(%esp)
 85665ce:	8b 45 08             	mov    0x8(%ebp),%eax
 85665d1:	89 04 24             	mov    %eax,(%esp)
 85665d4:	e8 9d fe ff ff       	call   8566476 <_ZN8fair_pvp10CFairMatch13_GetOtherTeamE22ENUM_SCHOOL_MATCH_TEAM>
 85665d9:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 85665dc:	83 7d e4 02          	cmpl   $0x2,-0x1c(%ebp)
 85665e0:	75 31                	jne    8566613 <_ZN8fair_pvp10CFairMatch12OnAskRematchEP5CUseri+0x173>
 85665e2:	c7 44 24 10 84 23 ca 	movl   $0x8ca2384,0x10(%esp)
 85665e9:	08 
 85665ea:	c7 44 24 0c 69 10 00 	movl   $0x1069,0xc(%esp)
 85665f1:	00 
 85665f2:	c7 44 24 08 40 36 ca 	movl   $0x8ca3640,0x8(%esp)
 85665f9:	08 
 85665fa:	c7 44 24 04 62 22 ca 	movl   $0x8ca2262,0x4(%esp)
 8566601:	08 
 8566602:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8566609:	e8 fc d5 56 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 856660e:	e9 30 03 00 00       	jmp    8566943 <_ZN8fair_pvp10CFairMatch12OnAskRematchEP5CUseri+0x4a3>
 8566613:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8566616:	89 04 24             	mov    %eax,(%esp)
 8566619:	e8 2e 77 02 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 856661e:	8b 45 10             	mov    0x10(%ebp),%eax
 8566621:	85 c0                	test   %eax,%eax
 8566623:	0f 88 74 02 00 00    	js     856689d <_ZN8fair_pvp10CFairMatch12OnAskRematchEP5CUseri+0x3fd>
 8566629:	83 f8 01             	cmp    $0x1,%eax
 856662c:	7e 0e                	jle    856663c <_ZN8fair_pvp10CFairMatch12OnAskRematchEP5CUseri+0x19c>
 856662e:	83 f8 02             	cmp    $0x2,%eax
 8566631:	0f 84 ec 00 00 00    	je     8566723 <_ZN8fair_pvp10CFairMatch12OnAskRematchEP5CUseri+0x283>
 8566637:	e9 61 02 00 00       	jmp    856689d <_ZN8fair_pvp10CFairMatch12OnAskRematchEP5CUseri+0x3fd>
 856663c:	8d 45 c0             	lea    -0x40(%ebp),%eax
 856663f:	89 04 24             	mov    %eax,(%esp)
 8566642:	e8 9f 52 b6 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 8566647:	c7 44 24 08 3a 01 00 	movl   $0x13a,0x8(%esp)
 856664e:	00 
 856664f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8566656:	00 
 8566657:	8d 45 c0             	lea    -0x40(%ebp),%eax
 856665a:	89 04 24             	mov    %eax,(%esp)
 856665d:	e8 9a 52 b6 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8566662:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8566669:	00 
 856666a:	8d 45 c0             	lea    -0x40(%ebp),%eax
 856666d:	89 04 24             	mov    %eax,(%esp)
 8566670:	e8 e3 52 b6 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8566675:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8566678:	89 d0                	mov    %edx,%eax
 856667a:	c1 e0 03             	shl    $0x3,%eax
 856667d:	01 d0                	add    %edx,%eax
 856667f:	c1 e0 03             	shl    $0x3,%eax
 8566682:	83 c0 10             	add    $0x10,%eax
 8566685:	03 45 08             	add    0x8(%ebp),%eax
 8566688:	8d 50 0c             	lea    0xc(%eax),%edx
 856668b:	8d 45 c0             	lea    -0x40(%ebp),%eax
 856668e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8566692:	89 14 24             	mov    %edx,(%esp)
 8566695:	e8 b2 c0 ff ff       	call   856274c <_ZN8fair_pvp13TeamInfoThird10SendToTeamER11PacketGuard>
 856669a:	8b 55 e0             	mov    -0x20(%ebp),%edx
 856669d:	8b 4d 10             	mov    0x10(%ebp),%ecx
 85666a0:	8b 5d 08             	mov    0x8(%ebp),%ebx
 85666a3:	89 d0                	mov    %edx,%eax
 85666a5:	c1 e0 03             	shl    $0x3,%eax
 85666a8:	01 d0                	add    %edx,%eax
 85666aa:	c1 e0 03             	shl    $0x3,%eax
 85666ad:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 85666b0:	83 c0 20             	add    $0x20,%eax
 85666b3:	89 08                	mov    %ecx,(%eax)
 85666b5:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 85666b8:	8b 4d 08             	mov    0x8(%ebp),%ecx
 85666bb:	89 d0                	mov    %edx,%eax
 85666bd:	c1 e0 03             	shl    $0x3,%eax
 85666c0:	01 d0                	add    %edx,%eax
 85666c2:	c1 e0 03             	shl    $0x3,%eax
 85666c5:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 85666c8:	83 c0 10             	add    $0x10,%eax
 85666cb:	0f b6 40 0c          	movzbl 0xc(%eax),%eax
 85666cf:	84 c0                	test   %al,%al
 85666d1:	74 38                	je     856670b <_ZN8fair_pvp10CFairMatch12OnAskRematchEP5CUseri+0x26b>
 85666d3:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 85666d6:	89 d0                	mov    %edx,%eax
 85666d8:	c1 e0 03             	shl    $0x3,%eax
 85666db:	01 d0                	add    %edx,%eax
 85666dd:	c1 e0 03             	shl    $0x3,%eax
 85666e0:	83 c0 10             	add    $0x10,%eax
 85666e3:	03 45 08             	add    0x8(%ebp),%eax
 85666e6:	8d 50 0c             	lea    0xc(%eax),%edx
 85666e9:	8d 45 c0             	lea    -0x40(%ebp),%eax
 85666ec:	89 44 24 04          	mov    %eax,0x4(%esp)
 85666f0:	89 14 24             	mov    %edx,(%esp)
 85666f3:	e8 54 c0 ff ff       	call   856274c <_ZN8fair_pvp13TeamInfoThird10SendToTeamER11PacketGuard>
 85666f8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85666ff:	00 
 8566700:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8566703:	89 04 24             	mov    %eax,(%esp)
 8566706:	e8 57 26 00 00       	call   8568d62 <_ZN8PvP_Room14setReamtchableEb>
 856670b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8566712:	00 
 8566713:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8566716:	89 04 24             	mov    %eax,(%esp)
 8566719:	e8 18 78 07 00       	call   85ddf36 <_ZN8PvP_Room14revengeMissionEb>
 856671e:	e9 7a 01 00 00       	jmp    856689d <_ZN8fair_pvp10CFairMatch12OnAskRematchEP5CUseri+0x3fd>
 8566723:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8566726:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8566729:	89 d0                	mov    %edx,%eax
 856672b:	c1 e0 03             	shl    $0x3,%eax
 856672e:	01 d0                	add    %edx,%eax
 8566730:	c1 e0 03             	shl    $0x3,%eax
 8566733:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8566736:	83 c0 10             	add    $0x10,%eax
 8566739:	c6 40 0c 01          	movb   $0x1,0xc(%eax)
 856673d:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8566740:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8566743:	89 d0                	mov    %edx,%eax
 8566745:	c1 e0 03             	shl    $0x3,%eax
 8566748:	01 d0                	add    %edx,%eax
 856674a:	c1 e0 03             	shl    $0x3,%eax
 856674d:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8566750:	83 c0 20             	add    $0x20,%eax
 8566753:	8b 00                	mov    (%eax),%eax
 8566755:	83 f8 02             	cmp    $0x2,%eax
 8566758:	75 3b                	jne    8566795 <_ZN8fair_pvp10CFairMatch12OnAskRematchEP5CUseri+0x2f5>
 856675a:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 856675d:	89 d0                	mov    %edx,%eax
 856675f:	c1 e0 03             	shl    $0x3,%eax
 8566762:	01 d0                	add    %edx,%eax
 8566764:	c1 e0 03             	shl    $0x3,%eax
 8566767:	83 c0 10             	add    $0x10,%eax
 856676a:	03 45 08             	add    0x8(%ebp),%eax
 856676d:	83 c0 0c             	add    $0xc,%eax
 8566770:	89 04 24             	mov    %eax,(%esp)
 8566773:	e8 94 bf ff ff       	call   856270c <_ZNK8fair_pvp13TeamInfoThird4sizeEv>
 8566778:	85 c0                	test   %eax,%eax
 856677a:	74 19                	je     8566795 <_ZN8fair_pvp10CFairMatch12OnAskRematchEP5CUseri+0x2f5>
 856677c:	8b 45 dc             	mov    -0x24(%ebp),%eax
 856677f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8566783:	8b 45 08             	mov    0x8(%ebp),%eax
 8566786:	89 04 24             	mov    %eax,(%esp)
 8566789:	e8 88 d3 ff ff       	call   8563b16 <_ZNK8fair_pvp10CFairMatch17_CheckRematchableEP8PvP_Room>
 856678e:	83 f0 01             	xor    $0x1,%eax
 8566791:	84 c0                	test   %al,%al
 8566793:	74 07                	je     856679c <_ZN8fair_pvp10CFairMatch12OnAskRematchEP5CUseri+0x2fc>
 8566795:	b8 01 00 00 00       	mov    $0x1,%eax
 856679a:	eb 05                	jmp    85667a1 <_ZN8fair_pvp10CFairMatch12OnAskRematchEP5CUseri+0x301>
 856679c:	b8 00 00 00 00       	mov    $0x0,%eax
 85667a1:	84 c0                	test   %al,%al
 85667a3:	74 7c                	je     8566821 <_ZN8fair_pvp10CFairMatch12OnAskRematchEP5CUseri+0x381>
 85667a5:	8d 45 c0             	lea    -0x40(%ebp),%eax
 85667a8:	89 04 24             	mov    %eax,(%esp)
 85667ab:	e8 36 51 b6 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 85667b0:	c7 44 24 08 3a 01 00 	movl   $0x13a,0x8(%esp)
 85667b7:	00 
 85667b8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85667bf:	00 
 85667c0:	8d 45 c0             	lea    -0x40(%ebp),%eax
 85667c3:	89 04 24             	mov    %eax,(%esp)
 85667c6:	e8 31 51 b6 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 85667cb:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85667d2:	00 
 85667d3:	8d 45 c0             	lea    -0x40(%ebp),%eax
 85667d6:	89 04 24             	mov    %eax,(%esp)
 85667d9:	e8 7a 51 b6 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 85667de:	8b 55 e0             	mov    -0x20(%ebp),%edx
 85667e1:	89 d0                	mov    %edx,%eax
 85667e3:	c1 e0 03             	shl    $0x3,%eax
 85667e6:	01 d0                	add    %edx,%eax
 85667e8:	c1 e0 03             	shl    $0x3,%eax
 85667eb:	83 c0 10             	add    $0x10,%eax
 85667ee:	03 45 08             	add    0x8(%ebp),%eax
 85667f1:	8d 50 0c             	lea    0xc(%eax),%edx
 85667f4:	8d 45 c0             	lea    -0x40(%ebp),%eax
 85667f7:	89 44 24 04          	mov    %eax,0x4(%esp)
 85667fb:	89 14 24             	mov    %edx,(%esp)
 85667fe:	e8 49 bf ff ff       	call   856274c <_ZN8fair_pvp13TeamInfoThird10SendToTeamER11PacketGuard>
 8566803:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8566806:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8566809:	89 d0                	mov    %edx,%eax
 856680b:	c1 e0 03             	shl    $0x3,%eax
 856680e:	01 d0                	add    %edx,%eax
 8566810:	c1 e0 03             	shl    $0x3,%eax
 8566813:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8566816:	83 c0 20             	add    $0x20,%eax
 8566819:	c7 00 01 00 00 00    	movl   $0x1,(%eax)
 856681f:	eb 7c                	jmp    856689d <_ZN8fair_pvp10CFairMatch12OnAskRematchEP5CUseri+0x3fd>
 8566821:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8566824:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8566827:	89 d0                	mov    %edx,%eax
 8566829:	c1 e0 03             	shl    $0x3,%eax
 856682c:	01 d0                	add    %edx,%eax
 856682e:	c1 e0 03             	shl    $0x3,%eax
 8566831:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8566834:	83 c0 10             	add    $0x10,%eax
 8566837:	0f b6 40 0c          	movzbl 0xc(%eax),%eax
 856683b:	84 c0                	test   %al,%al
 856683d:	74 5e                	je     856689d <_ZN8fair_pvp10CFairMatch12OnAskRematchEP5CUseri+0x3fd>
 856683f:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8566842:	89 04 24             	mov    %eax,(%esp)
 8566845:	e8 9c 50 b6 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 856684a:	c7 44 24 08 3a 01 00 	movl   $0x13a,0x8(%esp)
 8566851:	00 
 8566852:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8566859:	00 
 856685a:	8d 45 c0             	lea    -0x40(%ebp),%eax
 856685d:	89 04 24             	mov    %eax,(%esp)
 8566860:	e8 97 50 b6 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8566865:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 856686c:	00 
 856686d:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8566870:	89 04 24             	mov    %eax,(%esp)
 8566873:	e8 e0 50 b6 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8566878:	8d 45 c0             	lea    -0x40(%ebp),%eax
 856687b:	89 44 24 04          	mov    %eax,0x4(%esp)
 856687f:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8566882:	89 04 24             	mov    %eax,(%esp)
 8566885:	e8 8e 55 07 00       	call   85dbe18 <_ZN8PvP_Room11send_to_pvpER11PacketGuard>
 856688a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8566891:	00 
 8566892:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8566895:	89 04 24             	mov    %eax,(%esp)
 8566898:	e8 99 76 07 00       	call   85ddf36 <_ZN8PvP_Room14revengeMissionEb>
 856689d:	8d 45 c0             	lea    -0x40(%ebp),%eax
 85668a0:	89 04 24             	mov    %eax,(%esp)
 85668a3:	e8 3e 50 b6 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 85668a8:	c7 44 24 08 37 01 00 	movl   $0x137,0x8(%esp)
 85668af:	00 
 85668b0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85668b7:	00 
 85668b8:	8d 45 c0             	lea    -0x40(%ebp),%eax
 85668bb:	89 04 24             	mov    %eax,(%esp)
 85668be:	e8 39 50 b6 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 85668c3:	8b 45 10             	mov    0x10(%ebp),%eax
 85668c6:	89 44 24 04          	mov    %eax,0x4(%esp)
 85668ca:	8d 45 c0             	lea    -0x40(%ebp),%eax
 85668cd:	89 04 24             	mov    %eax,(%esp)
 85668d0:	e8 4b 50 b6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85668d5:	8b 45 0c             	mov    0xc(%ebp),%eax
 85668d8:	89 44 24 04          	mov    %eax,0x4(%esp)
 85668dc:	8b 45 dc             	mov    -0x24(%ebp),%eax
 85668df:	89 04 24             	mov    %eax,(%esp)
 85668e2:	e8 fb 28 07 00       	call   85d91e2 <_ZN8PvP_Room13get_user_seatEP5CUser>
 85668e7:	89 44 24 04          	mov    %eax,0x4(%esp)
 85668eb:	8d 45 c0             	lea    -0x40(%ebp),%eax
 85668ee:	89 04 24             	mov    %eax,(%esp)
 85668f1:	e8 ae 35 b7 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 85668f6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85668fd:	00 
 85668fe:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8566901:	89 04 24             	mov    %eax,(%esp)
 8566904:	e8 4f 50 b6 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8566909:	8d 45 c0             	lea    -0x40(%ebp),%eax
 856690c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8566910:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8566913:	89 04 24             	mov    %eax,(%esp)
 8566916:	e8 fd 54 07 00       	call   85dbe18 <_ZN8PvP_Room11send_to_pvpER11PacketGuard>
 856691b:	eb 1b                	jmp    8566938 <_ZN8fair_pvp10CFairMatch12OnAskRematchEP5CUseri+0x498>
 856691d:	89 d3                	mov    %edx,%ebx
 856691f:	89 c6                	mov    %eax,%esi
 8566921:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8566924:	89 04 24             	mov    %eax,(%esp)
 8566927:	e8 54 75 02 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 856692c:	89 f0                	mov    %esi,%eax
 856692e:	89 da                	mov    %ebx,%edx
 8566930:	89 04 24             	mov    %eax,(%esp)
 8566933:	e8 18 ce 57 00       	call   8ae3750 <_Unwind_Resume>
 8566938:	8d 45 c0             	lea    -0x40(%ebp),%eax
 856693b:	89 04 24             	mov    %eax,(%esp)
 856693e:	e8 3d 75 02 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8566943:	83 c4 6c             	add    $0x6c,%esp
 8566946:	5b                   	pop    %ebx
 8566947:	5e                   	pop    %esi
 8566948:	5f                   	pop    %edi
 8566949:	5d                   	pop    %ebp
 856694a:	c3                   	ret
 856694b:	90                   	nop

```

```c
// fair_pvp::CFairMatch::OnAskRematch @ 0x85664a0

/* fair_pvp::CFairMatch::OnAskRematch(CUser*, int) */

void __thiscall fair_pvp::CFairMatch::OnAskRematch(CFairMatch *this,CUser *param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  PacketGuard local_44 [12];
  CSwitchLog local_38 [16];
  PvP_Room *local_28;
  int local_24;
  int local_20;
  
  local_28 = (PvP_Room *)CUser::GetPVPRoom(param_1);
  if (local_28 == (PvP_Room *)0x0) {
    LogManager::logFormat
              (1,"MatchingSystem.cpp","virtual void fair_pvp::CFairMatch::OnAskRematch(CUser*, int)"
               ,0x1058,"error GetPVPRoom");
  }
  else {
    uVar3 = PvP_Room::get_pvp_battle_mode(local_28);
    uVar4 = PvP_Room::get_index(local_28);
    uVar5 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
    uVar6 = CUser::get_acc_name(param_1);
    CSwitchLog::CSwitchLog
              (local_38,"virtual void fair_pvp::CFairMatch::OnAskRematch(CUser*, int)",0x105c,0,0);
    CSwitchLog::operator()(local_38,"pvp@log %s,%s,room(%d),%d,%d",uVar6,uVar5,uVar4,uVar3,param_2);
    local_24 = _FindTeam(this,param_1);
    if (local_24 == 2) {
      LogManager::logFormat
                (1,"MatchingSystem.cpp",
                 "virtual void fair_pvp::CFairMatch::OnAskRematch(CUser*, int)",0x1062,
                 "error _FindTeam");
    }
    else {
      local_20 = _GetOtherTeam(this,local_24);
      if (local_20 == 2) {
        LogManager::logFormat
                  (1,"MatchingSystem.cpp",
                   "virtual void fair_pvp::CFairMatch::OnAskRematch(CUser*, int)",0x1069,
                   "error _GetOtherTeam");
      }
      else {
        PacketGuard::PacketGuard(local_44);
        if (-1 < param_2) {
          if (param_2 < 2) {
                    /* try { // try from 08566642 to 0856691a has its CatchHandler @ 0856691d */
            InterfacePacketBuf::clear((InterfacePacketBuf *)local_44);
            InterfacePacketBuf::put_header((InterfacePacketBuf *)local_44,0,0x13a);
            InterfacePacketBuf::finalize((InterfacePacketBuf *)local_44,true);
            TeamInfoThird::SendToTeam((TeamInfoThird *)(this + local_24 * 0x48 + 0x1c),local_44);
            *(int *)(this + local_24 * 0x48 + 0x20) = param_2;
            if (this[local_20 * 0x48 + 0x1c] != (CFairMatch)0x0) {
              TeamInfoThird::SendToTeam((TeamInfoThird *)(this + local_20 * 0x48 + 0x1c),local_44);
              PvP_Room::setReamtchable(local_28,false);
            }
            PvP_Room::revengeMission(local_28,false);
          }
          else if (param_2 == 2) {
            this[local_24 * 0x48 + 0x1c] = (CFairMatch)0x1;
            if (((*(int *)(this + local_20 * 0x48 + 0x20) == 2) &&
                (iVar7 = TeamInfoThird::size((TeamInfoThird *)(this + local_20 * 0x48 + 0x1c)),
                iVar7 != 0)) && (cVar2 = _CheckRematchable(this,local_28), cVar2 == '\x01')) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if (bVar1) {
              InterfacePacketBuf::clear((InterfacePacketBuf *)local_44);
              InterfacePacketBuf::put_header((InterfacePacketBuf *)local_44,0,0x13a);
              InterfacePacketBuf::finalize((InterfacePacketBuf *)local_44,true);
              TeamInfoThird::SendToTeam((TeamInfoThird *)(this + local_24 * 0x48 + 0x1c),local_44);
              *(undefined4 *)(this + local_24 * 0x48 + 0x20) = 1;
            }
            else if (this[local_20 * 0x48 + 0x1c] != (CFairMatch)0x0) {
              InterfacePacketBuf::clear((InterfacePacketBuf *)local_44);
              InterfacePacketBuf::put_header((InterfacePacketBuf *)local_44,0,0x13a);
              InterfacePacketBuf::finalize((InterfacePacketBuf *)local_44,true);
              PvP_Room::send_to_pvp(local_28,local_44);
              PvP_Room::revengeMission(local_28,true);
            }
          }
        }
        InterfacePacketBuf::clear((InterfacePacketBuf *)local_44);
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_44,0,0x137);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_44,param_2);
        iVar7 = PvP_Room::get_user_seat(local_28,param_1);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_44,iVar7);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_44,true);
        PvP_Room::send_to_pvp(local_28,local_44);
        PacketGuard::~PacketGuard(local_44);
      }
    }
  }
  return;
}

```

---

## OnCompleteLoad

```asm
// === 08564962 fair_pvp::CFairMatch::OnCompleteLoad  [0x08564962-0x8564a8d] ===
 8564962:	55                   	push   %ebp
 8564963:	89 e5                	mov    %esp,%ebp
 8564965:	56                   	push   %esi
 8564966:	53                   	push   %ebx
 8564967:	83 ec 30             	sub    $0x30,%esp
 856496a:	8d 45 e0             	lea    -0x20(%ebp),%eax
 856496d:	89 04 24             	mov    %eax,(%esp)
 8564970:	e8 d7 93 02 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8564975:	c7 44 24 08 16 01 00 	movl   $0x116,0x8(%esp)
 856497c:	00 
 856497d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8564984:	00 
 8564985:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8564988:	89 04 24             	mov    %eax,(%esp)
 856498b:	e8 6c 6f b6 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8564990:	8b 45 0c             	mov    0xc(%ebp),%eax
 8564993:	89 04 24             	mov    %eax,(%esp)
 8564996:	e8 e1 59 b7 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 856499b:	0f b7 c0             	movzwl %ax,%eax
 856499e:	89 44 24 04          	mov    %eax,0x4(%esp)
 85649a2:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85649a5:	89 04 24             	mov    %eax,(%esp)
 85649a8:	e8 f7 54 b7 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 85649ad:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85649b4:	00 
 85649b5:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85649b8:	89 04 24             	mov    %eax,(%esp)
 85649bb:	e8 98 6f b6 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 85649c0:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 85649c7:	e9 83 00 00 00       	jmp    8564a4f <_ZN8fair_pvp10CFairMatch14OnCompleteLoadEP5CUser+0xed>
 85649cc:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 85649d3:	eb 6b                	jmp    8564a40 <_ZN8fair_pvp10CFairMatch14OnCompleteLoadEP5CUser+0xde>
 85649d5:	8b 55 ec             	mov    -0x14(%ebp),%edx
 85649d8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85649db:	8b 4d 08             	mov    0x8(%ebp),%ecx
 85649de:	89 c3                	mov    %eax,%ebx
 85649e0:	c1 e3 04             	shl    $0x4,%ebx
 85649e3:	89 d0                	mov    %edx,%eax
 85649e5:	c1 e0 03             	shl    $0x3,%eax
 85649e8:	01 d0                	add    %edx,%eax
 85649ea:	c1 e0 03             	shl    $0x3,%eax
 85649ed:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 85649f0:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 85649f3:	83 c0 24             	add    $0x24,%eax
 85649f6:	8b 00                	mov    (%eax),%eax
 85649f8:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85649fb:	8b 55 ec             	mov    -0x14(%ebp),%edx
 85649fe:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8564a01:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8564a04:	89 c3                	mov    %eax,%ebx
 8564a06:	c1 e3 04             	shl    $0x4,%ebx
 8564a09:	89 d0                	mov    %edx,%eax
 8564a0b:	c1 e0 03             	shl    $0x3,%eax
 8564a0e:	01 d0                	add    %edx,%eax
 8564a10:	c1 e0 03             	shl    $0x3,%eax
 8564a13:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 8564a16:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8564a19:	83 c0 10             	add    $0x10,%eax
 8564a1c:	0f b6 40 18          	movzbl 0x18(%eax),%eax
 8564a20:	84 c0                	test   %al,%al
 8564a22:	74 18                	je     8564a3c <_ZN8fair_pvp10CFairMatch14OnCompleteLoadEP5CUser+0xda>
 8564a24:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8564a28:	74 12                	je     8564a3c <_ZN8fair_pvp10CFairMatch14OnCompleteLoadEP5CUser+0xda>
 8564a2a:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8564a2d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8564a31:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8564a34:	89 04 24             	mov    %eax,(%esp)
 8564a37:	e8 7e 3b 0e 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8564a3c:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8564a40:	83 7d f0 03          	cmpl   $0x3,-0x10(%ebp)
 8564a44:	0f 9e c0             	setle  %al
 8564a47:	84 c0                	test   %al,%al
 8564a49:	75 8a                	jne    85649d5 <_ZN8fair_pvp10CFairMatch14OnCompleteLoadEP5CUser+0x73>
 8564a4b:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 8564a4f:	83 7d ec 01          	cmpl   $0x1,-0x14(%ebp)
 8564a53:	0f 9e c0             	setle  %al
 8564a56:	84 c0                	test   %al,%al
 8564a58:	0f 85 6e ff ff ff    	jne    85649cc <_ZN8fair_pvp10CFairMatch14OnCompleteLoadEP5CUser+0x6a>
 8564a5e:	eb 1b                	jmp    8564a7b <_ZN8fair_pvp10CFairMatch14OnCompleteLoadEP5CUser+0x119>
 8564a60:	89 d3                	mov    %edx,%ebx
 8564a62:	89 c6                	mov    %eax,%esi
 8564a64:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8564a67:	89 04 24             	mov    %eax,(%esp)
 8564a6a:	e8 11 94 02 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8564a6f:	89 f0                	mov    %esi,%eax
 8564a71:	89 da                	mov    %ebx,%edx
 8564a73:	89 04 24             	mov    %eax,(%esp)
 8564a76:	e8 d5 ec 57 00       	call   8ae3750 <_Unwind_Resume>
 8564a7b:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8564a7e:	89 04 24             	mov    %eax,(%esp)
 8564a81:	e8 fa 93 02 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8564a86:	83 c4 30             	add    $0x30,%esp
 8564a89:	5b                   	pop    %ebx
 8564a8a:	5e                   	pop    %esi
 8564a8b:	5d                   	pop    %ebp
 8564a8c:	c3                   	ret
 8564a8d:	90                   	nop

```

```c
// fair_pvp::CFairMatch::OnCompleteLoad @ 0x8564962

/* fair_pvp::CFairMatch::OnCompleteLoad(CUser*) */

void __thiscall fair_pvp::CFairMatch::OnCompleteLoad(CFairMatch *this,CUser *param_1)

{
  uint uVar1;
  PacketGuard local_24 [12];
  int local_18;
  int local_14;
  CUser *local_10;
  
  PacketGuard::PacketGuard(local_24);
                    /* try { // try from 0856498b to 08564a3b has its CatchHandler @ 08564a60 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,0,0x116);
  uVar1 = CUser::get_unique_id(param_1);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_24,uVar1 & 0xffff);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
  for (local_18 = 0; local_18 < 2; local_18 = local_18 + 1) {
    for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
      local_10 = *(CUser **)(this + local_14 * 0x10 + local_18 * 0x48 + 0x24);
      if ((this[local_14 * 0x10 + local_18 * 0x48 + 0x28] != (CFairMatch)0x0) &&
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
// === 08564a8e fair_pvp::CFairMatch::OnConnectP2P  [0x08564a8e-0x8564d39] ===
 8564a8e:	55                   	push   %ebp
 8564a8f:	89 e5                	mov    %esp,%ebp
 8564a91:	56                   	push   %esi
 8564a92:	53                   	push   %ebx
 8564a93:	83 ec 30             	sub    $0x30,%esp
 8564a96:	8b 45 08             	mov    0x8(%ebp),%eax
 8564a99:	8b 40 04             	mov    0x4(%eax),%eax
 8564a9c:	83 f8 04             	cmp    $0x4,%eax
 8564a9f:	74 53                	je     8564af4 <_ZN8fair_pvp10CFairMatch12OnConnectP2PEP5CUserP8PvP_RoomPci+0x66>
 8564aa1:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 8564aa8:	00 
 8564aa9:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8564ab0:	00 
 8564ab1:	8b 45 08             	mov    0x8(%ebp),%eax
 8564ab4:	89 04 24             	mov    %eax,(%esp)
 8564ab7:	e8 ea 06 00 00       	call   85651a6 <_ZN8fair_pvp10CFairMatch21_SendMatchStatePacketEii>
 8564abc:	8b 45 08             	mov    0x8(%ebp),%eax
 8564abf:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 8564ac6:	8b 45 10             	mov    0x10(%ebp),%eax
 8564ac9:	89 04 24             	mov    %eax,(%esp)
 8564acc:	e8 71 47 07 00       	call   85d9242 <_ZN8PvP_Room16get_manager_teamEv>
 8564ad1:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8564ad8:	00 
 8564ad9:	89 44 24 08          	mov    %eax,0x8(%esp)
 8564add:	8b 45 10             	mov    0x10(%ebp),%eax
 8564ae0:	89 44 24 04          	mov    %eax,0x4(%esp)
 8564ae4:	8b 45 08             	mov    0x8(%ebp),%eax
 8564ae7:	89 04 24             	mov    %eax,(%esp)
 8564aea:	e8 fb 02 00 00       	call   8564dea <_ZN8fair_pvp10CFairMatch11_ReturnTeamEP8PvP_RoomiP5CUser>
 8564aef:	e9 3f 02 00 00       	jmp    8564d33 <_ZN8fair_pvp10CFairMatch12OnConnectP2PEP5CUserP8PvP_RoomPci+0x2a5>
 8564af4:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8564afb:	eb 4a                	jmp    8564b47 <_ZN8fair_pvp10CFairMatch12OnConnectP2PEP5CUserP8PvP_RoomPci+0xb9>
 8564afd:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8564b00:	03 45 14             	add    0x14(%ebp),%eax
 8564b03:	0f b6 00             	movzbl (%eax),%eax
 8564b06:	84 c0                	test   %al,%al
 8564b08:	75 39                	jne    8564b43 <_ZN8fair_pvp10CFairMatch12OnConnectP2PEP5CUserP8PvP_RoomPci+0xb5>
 8564b0a:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 8564b11:	00 
 8564b12:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8564b19:	00 
 8564b1a:	8b 45 08             	mov    0x8(%ebp),%eax
 8564b1d:	89 04 24             	mov    %eax,(%esp)
 8564b20:	e8 81 06 00 00       	call   85651a6 <_ZN8fair_pvp10CFairMatch21_SendMatchStatePacketEii>
 8564b25:	8b 45 08             	mov    0x8(%ebp),%eax
 8564b28:	8b 00                	mov    (%eax),%eax
 8564b2a:	83 c0 40             	add    $0x40,%eax
 8564b2d:	8b 10                	mov    (%eax),%edx
 8564b2f:	8b 45 10             	mov    0x10(%ebp),%eax
 8564b32:	89 44 24 04          	mov    %eax,0x4(%esp)
 8564b36:	8b 45 08             	mov    0x8(%ebp),%eax
 8564b39:	89 04 24             	mov    %eax,(%esp)
 8564b3c:	ff d2                	call   *%edx
 8564b3e:	e9 f0 01 00 00       	jmp    8564d33 <_ZN8fair_pvp10CFairMatch12OnConnectP2PEP5CUserP8PvP_RoomPci+0x2a5>
 8564b43:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 8564b47:	83 7d e4 07          	cmpl   $0x7,-0x1c(%ebp)
 8564b4b:	7f 0f                	jg     8564b5c <_ZN8fair_pvp10CFairMatch12OnConnectP2PEP5CUserP8PvP_RoomPci+0xce>
 8564b4d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8564b50:	3b 45 18             	cmp    0x18(%ebp),%eax
 8564b53:	7d 07                	jge    8564b5c <_ZN8fair_pvp10CFairMatch12OnConnectP2PEP5CUserP8PvP_RoomPci+0xce>
 8564b55:	b8 01 00 00 00       	mov    $0x1,%eax
 8564b5a:	eb 05                	jmp    8564b61 <_ZN8fair_pvp10CFairMatch12OnConnectP2PEP5CUserP8PvP_RoomPci+0xd3>
 8564b5c:	b8 00 00 00 00       	mov    $0x0,%eax
 8564b61:	84 c0                	test   %al,%al
 8564b63:	75 98                	jne    8564afd <_ZN8fair_pvp10CFairMatch12OnConnectP2PEP5CUserP8PvP_RoomPci+0x6f>
 8564b65:	8b 45 08             	mov    0x8(%ebp),%eax
 8564b68:	8b 80 ac 00 00 00    	mov    0xac(%eax),%eax
 8564b6e:	8d 50 01             	lea    0x1(%eax),%edx
 8564b71:	8b 45 08             	mov    0x8(%ebp),%eax
 8564b74:	89 90 ac 00 00 00    	mov    %edx,0xac(%eax)
 8564b7a:	8b 45 08             	mov    0x8(%ebp),%eax
 8564b7d:	8b 98 ac 00 00 00    	mov    0xac(%eax),%ebx
 8564b83:	e8 ac dc ff ff       	call   8562834 <_ZN8fair_pvp10CFairMatch22GetPlayCountPerOneTeamEv>
 8564b88:	0f b6 c0             	movzbl %al,%eax
 8564b8b:	01 c0                	add    %eax,%eax
 8564b8d:	39 c3                	cmp    %eax,%ebx
 8564b8f:	0f 94 c0             	sete   %al
 8564b92:	84 c0                	test   %al,%al
 8564b94:	0f 84 99 01 00 00    	je     8564d33 <_ZN8fair_pvp10CFairMatch12OnConnectP2PEP5CUserP8PvP_RoomPci+0x2a5>
 8564b9a:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8564b9d:	89 04 24             	mov    %eax,(%esp)
 8564ba0:	e8 a7 91 02 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8564ba5:	c7 44 24 08 17 01 00 	movl   $0x117,0x8(%esp)
 8564bac:	00 
 8564bad:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8564bb4:	00 
 8564bb5:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8564bb8:	89 04 24             	mov    %eax,(%esp)
 8564bbb:	e8 3c 6d b6 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8564bc0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8564bc7:	00 
 8564bc8:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8564bcb:	89 04 24             	mov    %eax,(%esp)
 8564bce:	e8 85 6d b6 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8564bd3:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 8564bda:	e9 83 00 00 00       	jmp    8564c62 <_ZN8fair_pvp10CFairMatch12OnConnectP2PEP5CUserP8PvP_RoomPci+0x1d4>
 8564bdf:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8564be6:	eb 6b                	jmp    8564c53 <_ZN8fair_pvp10CFairMatch12OnConnectP2PEP5CUserP8PvP_RoomPci+0x1c5>
 8564be8:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8564beb:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8564bee:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8564bf1:	89 c3                	mov    %eax,%ebx
 8564bf3:	c1 e3 04             	shl    $0x4,%ebx
 8564bf6:	89 d0                	mov    %edx,%eax
 8564bf8:	c1 e0 03             	shl    $0x3,%eax
 8564bfb:	01 d0                	add    %edx,%eax
 8564bfd:	c1 e0 03             	shl    $0x3,%eax
 8564c00:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 8564c03:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8564c06:	83 c0 24             	add    $0x24,%eax
 8564c09:	8b 00                	mov    (%eax),%eax
 8564c0b:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8564c0e:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8564c11:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8564c14:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8564c17:	89 c3                	mov    %eax,%ebx
 8564c19:	c1 e3 04             	shl    $0x4,%ebx
 8564c1c:	89 d0                	mov    %edx,%eax
 8564c1e:	c1 e0 03             	shl    $0x3,%eax
 8564c21:	01 d0                	add    %edx,%eax
 8564c23:	c1 e0 03             	shl    $0x3,%eax
 8564c26:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 8564c29:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8564c2c:	83 c0 10             	add    $0x10,%eax
 8564c2f:	0f b6 40 18          	movzbl 0x18(%eax),%eax
 8564c33:	84 c0                	test   %al,%al
 8564c35:	74 18                	je     8564c4f <_ZN8fair_pvp10CFairMatch12OnConnectP2PEP5CUserP8PvP_RoomPci+0x1c1>
 8564c37:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8564c3b:	74 12                	je     8564c4f <_ZN8fair_pvp10CFairMatch12OnConnectP2PEP5CUserP8PvP_RoomPci+0x1c1>
 8564c3d:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8564c40:	89 44 24 04          	mov    %eax,0x4(%esp)
 8564c44:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8564c47:	89 04 24             	mov    %eax,(%esp)
 8564c4a:	e8 6b 39 0e 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8564c4f:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 8564c53:	83 7d ec 03          	cmpl   $0x3,-0x14(%ebp)
 8564c57:	0f 9e c0             	setle  %al
 8564c5a:	84 c0                	test   %al,%al
 8564c5c:	75 8a                	jne    8564be8 <_ZN8fair_pvp10CFairMatch12OnConnectP2PEP5CUserP8PvP_RoomPci+0x15a>
 8564c5e:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 8564c62:	83 7d e8 01          	cmpl   $0x1,-0x18(%ebp)
 8564c66:	0f 9e c0             	setle  %al
 8564c69:	84 c0                	test   %al,%al
 8564c6b:	0f 85 6e ff ff ff    	jne    8564bdf <_ZN8fair_pvp10CFairMatch12OnConnectP2PEP5CUserP8PvP_RoomPci+0x151>
 8564c71:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8564c74:	89 04 24             	mov    %eax,(%esp)
 8564c77:	e8 6a 6c b6 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 8564c7c:	8b 45 10             	mov    0x10(%ebp),%eax
 8564c7f:	89 04 24             	mov    %eax,(%esp)
 8564c82:	e8 a9 17 07 00       	call   85d6430 <_ZN8PvP_Room12battle_resetEv>
 8564c87:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8564c8e:	eb 3f                	jmp    8564ccf <_ZN8fair_pvp10CFairMatch12OnConnectP2PEP5CUserP8PvP_RoomPci+0x241>
 8564c90:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8564c93:	89 44 24 04          	mov    %eax,0x4(%esp)
 8564c97:	8b 45 10             	mov    0x10(%ebp),%eax
 8564c9a:	89 04 24             	mov    %eax,(%esp)
 8564c9d:	e8 7c 45 07 00       	call   85d921e <_ZN8PvP_Room13get_user_seatEi>
 8564ca2:	85 c0                	test   %eax,%eax
 8564ca4:	0f 95 c0             	setne  %al
 8564ca7:	84 c0                	test   %al,%al
 8564ca9:	74 20                	je     8564ccb <_ZN8fair_pvp10CFairMatch12OnConnectP2PEP5CUserP8PvP_RoomPci+0x23d>
 8564cab:	8b 45 10             	mov    0x10(%ebp),%eax
 8564cae:	8d 90 20 06 00 00    	lea    0x620(%eax),%edx
 8564cb4:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8564cbb:	00 
 8564cbc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8564cbf:	89 44 24 04          	mov    %eax,0x4(%esp)
 8564cc3:	89 14 24             	mov    %edx,(%esp)
 8564cc6:	e8 87 95 07 00       	call   85de252 <_ZN15CRelayBattleMgr7OnReadyEib>
 8564ccb:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8564ccf:	83 7d f4 07          	cmpl   $0x7,-0xc(%ebp)
 8564cd3:	0f 9e c0             	setle  %al
 8564cd6:	84 c0                	test   %al,%al
 8564cd8:	75 b6                	jne    8564c90 <_ZN8fair_pvp10CFairMatch12OnConnectP2PEP5CUserP8PvP_RoomPci+0x202>
 8564cda:	8b 45 10             	mov    0x10(%ebp),%eax
 8564cdd:	89 04 24             	mov    %eax,(%esp)
 8564ce0:	e8 55 3f 07 00       	call   85d8c3a <_ZN8PvP_Room9start_pvpEv>
 8564ce5:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8564ce8:	89 44 24 04          	mov    %eax,0x4(%esp)
 8564cec:	8b 45 10             	mov    0x10(%ebp),%eax
 8564cef:	89 04 24             	mov    %eax,(%esp)
 8564cf2:	e8 43 70 07 00       	call   85dbd3a <_ZN8PvP_Room15make_state_infoEPc>
 8564cf7:	e8 ab 56 b7 ff       	call   80da3a7 <_Z11G_GameWorldv>
 8564cfc:	8d 55 d8             	lea    -0x28(%ebp),%edx
 8564cff:	89 54 24 04          	mov    %edx,0x4(%esp)
 8564d03:	89 04 24             	mov    %eax,(%esp)
 8564d06:	e8 09 3f 16 00       	call   86c8c14 <_ZN9GameWorld8send_allER11PacketGuard>
 8564d0b:	eb 1b                	jmp    8564d28 <_ZN8fair_pvp10CFairMatch12OnConnectP2PEP5CUserP8PvP_RoomPci+0x29a>
 8564d0d:	89 d3                	mov    %edx,%ebx
 8564d0f:	89 c6                	mov    %eax,%esi
 8564d11:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8564d14:	89 04 24             	mov    %eax,(%esp)
 8564d17:	e8 64 91 02 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8564d1c:	89 f0                	mov    %esi,%eax
 8564d1e:	89 da                	mov    %ebx,%edx
 8564d20:	89 04 24             	mov    %eax,(%esp)
 8564d23:	e8 28 ea 57 00       	call   8ae3750 <_Unwind_Resume>
 8564d28:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8564d2b:	89 04 24             	mov    %eax,(%esp)
 8564d2e:	e8 4d 91 02 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8564d33:	83 c4 30             	add    $0x30,%esp
 8564d36:	5b                   	pop    %ebx
 8564d37:	5e                   	pop    %esi
 8564d38:	5d                   	pop    %ebp
 8564d39:	c3                   	ret

```

```c
// fair_pvp::CFairMatch::OnConnectP2P @ 0x8564a8e

/* fair_pvp::CFairMatch::OnConnectP2P(CUser*, PvP_Room*, char*, int) */

void __thiscall
fair_pvp::CFairMatch::OnConnectP2P
          (CFairMatch *this,CUser *param_1,PvP_Room *param_2,char *param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  GameWorld *this_00;
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
        *(int *)(this + 0xac) = *(int *)(this + 0xac) + 1;
        iVar2 = *(int *)(this + 0xac);
        uVar3 = GetPlayCountPerOneTeam();
        if (iVar2 != (uVar3 & 0xff) * 2) {
          return;
        }
        PacketGuard::PacketGuard(local_2c);
                    /* try { // try from 08564bbb to 08564d0a has its CatchHandler @ 08564d0d */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_2c,0,0x117);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_2c,true);
        for (local_1c = 0; local_1c < 2; local_1c = local_1c + 1) {
          for (local_18 = 0; local_18 < 4; local_18 = local_18 + 1) {
            local_14 = *(CUser **)(this + local_18 * 0x10 + local_1c * 0x48 + 0x24);
            if ((this[local_18 * 0x10 + local_1c * 0x48 + 0x28] != (CFairMatch)0x0) &&
               (local_14 != (CUser *)0x0)) {
              CUser::Send(local_14,local_2c);
            }
          }
        }
        InterfacePacketBuf::clear((InterfacePacketBuf *)local_2c);
        PvP_Room::battle_reset(param_2);
        for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
          iVar2 = PvP_Room::get_user_seat(param_2,local_10);
          if (iVar2 != 0) {
            CRelayBattleMgr::OnReady((CRelayBattleMgr *)(param_2 + 0x620),local_10,true);
          }
        }
        PvP_Room::start_pvp(param_2);
        PvP_Room::make_state_info(param_2,(char *)local_2c);
        this_00 = (GameWorld *)G_GameWorld();
        GameWorld::send_all(this_00,local_2c);
        PacketGuard::~PacketGuard(local_2c);
        return;
      }
      if (param_3[local_20] == '\0') break;
      local_20 = local_20 + 1;
    }
    _SendMatchStatePacket(this,4,2);
    (**(code **)(*(int *)this + 0x40))(this,param_2);
  }
  else {
    _SendMatchStatePacket(this,4,2);
    *(undefined4 *)(this + 4) = 0;
    iVar2 = PvP_Room::get_manager_team(param_2);
    _ReturnTeam(this,param_2,iVar2,(CUser *)0x0);
  }
  return;
}

```

---

## OnConnectP2PTimeout

```asm
// === 08564d3a fair_pvp::CFairMatch::OnConnectP2PTimeout  [0x08564d3a-0x8564ddf] ===
 8564d3a:	55                   	push   %ebp
 8564d3b:	89 e5                	mov    %esp,%ebp
 8564d3d:	57                   	push   %edi
 8564d3e:	56                   	push   %esi
 8564d3f:	53                   	push   %ebx
 8564d40:	83 ec 2c             	sub    $0x2c,%esp
 8564d43:	8b 45 08             	mov    0x8(%ebp),%eax
 8564d46:	8b 40 04             	mov    0x4(%eax),%eax
 8564d49:	83 f8 04             	cmp    $0x4,%eax
 8564d4c:	0f 85 85 00 00 00    	jne    8564dd7 <_ZN8fair_pvp10CFairMatch19OnConnectP2PTimeoutEP8PvP_Room+0x9d>
 8564d52:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 8564d59:	00 
 8564d5a:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8564d61:	00 
 8564d62:	8b 45 08             	mov    0x8(%ebp),%eax
 8564d65:	89 04 24             	mov    %eax,(%esp)
 8564d68:	e8 39 04 00 00       	call   85651a6 <_ZN8fair_pvp10CFairMatch21_SendMatchStatePacketEii>
 8564d6d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8564d70:	89 04 24             	mov    %eax,(%esp)
 8564d73:	e8 ca 44 07 00       	call   85d9242 <_ZN8PvP_Room16get_manager_teamEv>
 8564d78:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8564d7b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8564d7e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8564d85:	00 
 8564d86:	89 44 24 08          	mov    %eax,0x8(%esp)
 8564d8a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8564d8d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8564d91:	8b 45 08             	mov    0x8(%ebp),%eax
 8564d94:	89 04 24             	mov    %eax,(%esp)
 8564d97:	e8 4e 00 00 00       	call   8564dea <_ZN8fair_pvp10CFairMatch11_ReturnTeamEP8PvP_RoomiP5CUser>
 8564d9c:	83 7d e4 01          	cmpl   $0x1,-0x1c(%ebp)
 8564da0:	74 19                	je     8564dbb <_ZN8fair_pvp10CFairMatch19OnConnectP2PTimeoutEP8PvP_Room+0x81>
 8564da2:	8b 55 08             	mov    0x8(%ebp),%edx
 8564da5:	8b 45 08             	mov    0x8(%ebp),%eax
 8564da8:	83 c2 1c             	add    $0x1c,%edx
 8564dab:	8d 58 64             	lea    0x64(%eax),%ebx
 8564dae:	b8 12 00 00 00       	mov    $0x12,%eax
 8564db3:	89 d7                	mov    %edx,%edi
 8564db5:	89 de                	mov    %ebx,%esi
 8564db7:	89 c1                	mov    %eax,%ecx
 8564db9:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
 8564dbb:	8b 45 08             	mov    0x8(%ebp),%eax
 8564dbe:	83 c0 1c             	add    $0x1c,%eax
 8564dc1:	89 04 24             	mov    %eax,(%esp)
 8564dc4:	e8 15 d7 ff ff       	call   85624de <_ZN8fair_pvp13TeamInfoThird7refreshEv>
 8564dc9:	8b 45 08             	mov    0x8(%ebp),%eax
 8564dcc:	83 c0 64             	add    $0x64,%eax
 8564dcf:	89 04 24             	mov    %eax,(%esp)
 8564dd2:	e8 ab d7 ff ff       	call   8562582 <_ZN8fair_pvp13TeamInfoThird5resetEv>
 8564dd7:	83 c4 2c             	add    $0x2c,%esp
 8564dda:	5b                   	pop    %ebx
 8564ddb:	5e                   	pop    %esi
 8564ddc:	5f                   	pop    %edi
 8564ddd:	5d                   	pop    %ebp
 8564dde:	c3                   	ret
 8564ddf:	90                   	nop

```

```c
// fair_pvp::CFairMatch::OnConnectP2PTimeout @ 0x8564d3a

/* fair_pvp::CFairMatch::OnConnectP2PTimeout(PvP_Room*) */

void __thiscall fair_pvp::CFairMatch::OnConnectP2PTimeout(CFairMatch *this,PvP_Room *param_1)

{
  int iVar1;
  CFairMatch *pCVar2;
  CFairMatch *pCVar3;
  byte bVar4;
  
  bVar4 = 0;
  if (*(int *)(this + 4) == 4) {
    _SendMatchStatePacket(this,4,2);
    iVar1 = PvP_Room::get_manager_team(param_1);
    _ReturnTeam(this,param_1,iVar1,(CUser *)0x0);
    if (iVar1 != 1) {
      pCVar2 = this + 100;
      pCVar3 = this + 0x1c;
      for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
        *(undefined4 *)pCVar3 = *(undefined4 *)pCVar2;
        pCVar2 = pCVar2 + (uint)bVar4 * -8 + 4;
        pCVar3 = pCVar3 + (uint)bVar4 * -8 + 4;
      }
    }
    TeamInfoThird::refresh((TeamInfoThird *)(this + 0x1c));
    TeamInfoThird::reset((TeamInfoThird *)(this + 100));
  }
  return;
}

```

---

## OnCreateRoom

```asm
// === 08562d08 fair_pvp::CFairMatch::OnCreateRoom  [0x08562d08-0x8562dc5] ===
 8562d08:	55                   	push   %ebp
 8562d09:	89 e5                	mov    %esp,%ebp
 8562d0b:	83 ec 18             	sub    $0x18,%esp
 8562d0e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8562d11:	89 04 24             	mov    %eax,(%esp)
 8562d14:	e8 e5 ff ff ff       	call   8562cfe <_ZN8fair_pvp10CFairMatch28CheckUnusableEquipmentInUserEP5CUser>
 8562d19:	83 f0 01             	xor    $0x1,%eax
 8562d1c:	84 c0                	test   %al,%al
 8562d1e:	74 0a                	je     8562d2a <_ZN8fair_pvp10CFairMatch12OnCreateRoomEP5CUser+0x22>
 8562d20:	b8 13 00 00 00       	mov    $0x13,%eax
 8562d25:	e9 9a 00 00 00       	jmp    8562dc4 <_ZN8fair_pvp10CFairMatch12OnCreateRoomEP5CUser+0xbc>
 8562d2a:	a1 50 e1 43 09       	mov    0x943e150,%eax
 8562d2f:	83 c0 01             	add    $0x1,%eax
 8562d32:	a3 50 e1 43 09       	mov    %eax,0x943e150
 8562d37:	8b 15 50 e1 43 09    	mov    0x943e150,%edx
 8562d3d:	8b 45 08             	mov    0x8(%ebp),%eax
 8562d40:	89 50 18             	mov    %edx,0x18(%eax)
 8562d43:	8b 45 08             	mov    0x8(%ebp),%eax
 8562d46:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 8562d4d:	8b 45 08             	mov    0x8(%ebp),%eax
 8562d50:	83 c0 64             	add    $0x64,%eax
 8562d53:	89 04 24             	mov    %eax,(%esp)
 8562d56:	e8 27 f8 ff ff       	call   8562582 <_ZN8fair_pvp13TeamInfoThird5resetEv>
 8562d5b:	8b 45 08             	mov    0x8(%ebp),%eax
 8562d5e:	83 c0 1c             	add    $0x1c,%eax
 8562d61:	89 04 24             	mov    %eax,(%esp)
 8562d64:	e8 19 f8 ff ff       	call   8562582 <_ZN8fair_pvp13TeamInfoThird5resetEv>
 8562d69:	8b 45 08             	mov    0x8(%ebp),%eax
 8562d6c:	8d 50 1c             	lea    0x1c(%eax),%edx
 8562d6f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8562d72:	89 44 24 04          	mov    %eax,0x4(%esp)
 8562d76:	89 14 24             	mov    %edx,(%esp)
 8562d79:	e8 48 f8 ff ff       	call   85625c6 <_ZN8fair_pvp13TeamInfoThird3addEP5CUser>
 8562d7e:	8b 45 08             	mov    0x8(%ebp),%eax
 8562d81:	c7 80 b0 00 00 00 00 	movl   $0x0,0xb0(%eax)
 8562d88:	00 00 00 
 8562d8b:	8b 45 08             	mov    0x8(%ebp),%eax
 8562d8e:	c7 80 b4 00 00 00 00 	movl   $0x0,0xb4(%eax)
 8562d95:	00 00 00 
 8562d98:	8b 45 08             	mov    0x8(%ebp),%eax
 8562d9b:	c7 80 b8 00 00 00 00 	movl   $0x0,0xb8(%eax)
 8562da2:	00 00 00 
 8562da5:	8b 45 08             	mov    0x8(%ebp),%eax
 8562da8:	c7 80 bc 00 00 00 00 	movl   $0x0,0xbc(%eax)
 8562daf:	00 00 00 
 8562db2:	8b 45 08             	mov    0x8(%ebp),%eax
 8562db5:	c7 80 c0 00 00 00 00 	movl   $0x0,0xc0(%eax)
 8562dbc:	00 00 00 
 8562dbf:	b8 00 00 00 00       	mov    $0x0,%eax
 8562dc4:	c9                   	leave
 8562dc5:	c3                   	ret

```

```c
// fair_pvp::CFairMatch::OnCreateRoom @ 0x8562d08

/* fair_pvp::CFairMatch::OnCreateRoom(CUser*) */

undefined4 __thiscall fair_pvp::CFairMatch::OnCreateRoom(CFairMatch *this,CUser *param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = CheckUnusableEquipmentInUser(param_1);
  if (cVar1 == '\x01') {
    nextAuthValue_ = nextAuthValue_ + 1;
    *(int *)(this + 0x18) = nextAuthValue_;
    *(undefined4 *)(this + 4) = 0;
    TeamInfoThird::reset((TeamInfoThird *)(this + 100));
    TeamInfoThird::reset((TeamInfoThird *)(this + 0x1c));
    TeamInfoThird::add((TeamInfoThird *)(this + 0x1c),param_1);
    *(undefined4 *)(this + 0xb0) = 0;
    *(undefined4 *)(this + 0xb4) = 0;
    *(undefined4 *)(this + 0xb8) = 0;
    *(undefined4 *)(this + 0xbc) = 0;
    *(undefined4 *)(this + 0xc0) = 0;
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
// === 08562dc6 fair_pvp::CFairMatch::OnDestroyRoom  [0x08562dc6-0x8562df5] ===
 8562dc6:	55                   	push   %ebp
 8562dc7:	89 e5                	mov    %esp,%ebp
 8562dc9:	83 ec 18             	sub    $0x18,%esp
 8562dcc:	8b 45 08             	mov    0x8(%ebp),%eax
 8562dcf:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 8562dd6:	a1 48 e1 43 09       	mov    0x943e148,%eax
 8562ddb:	8b 00                	mov    (%eax),%eax
 8562ddd:	83 c0 04             	add    $0x4,%eax
 8562de0:	8b 08                	mov    (%eax),%ecx
 8562de2:	8b 55 08             	mov    0x8(%ebp),%edx
 8562de5:	a1 48 e1 43 09       	mov    0x943e148,%eax
 8562dea:	89 54 24 04          	mov    %edx,0x4(%esp)
 8562dee:	89 04 24             	mov    %eax,(%esp)
 8562df1:	ff d1                	call   *%ecx
 8562df3:	c9                   	leave
 8562df4:	c3                   	ret
 8562df5:	90                   	nop

```

```c
// fair_pvp::CFairMatch::OnDestroyRoom @ 0x8562dc6

/* fair_pvp::CFairMatch::OnDestroyRoom(CUser*) */

void fair_pvp::CFairMatch::OnDestroyRoom(CUser *param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  (**(code **)(*pWaitingRoomList_ + 4))(pWaitingRoomList_,param_1);
  return;
}

```

---

## OnEndFight

```asm
// === 08565048 fair_pvp::CFairMatch::OnEndFight  [0x08565048-0x856513f] ===
 8565048:	55                   	push   %ebp
 8565049:	89 e5                	mov    %esp,%ebp
 856504b:	57                   	push   %edi
 856504c:	56                   	push   %esi
 856504d:	53                   	push   %ebx
 856504e:	83 ec 3c             	sub    $0x3c,%esp
 8565051:	8b 45 0c             	mov    0xc(%ebp),%eax
 8565054:	89 04 24             	mov    %eax,(%esp)
 8565057:	e8 e6 41 07 00       	call   85d9242 <_ZN8PvP_Room16get_manager_teamEv>
 856505c:	89 45 e0             	mov    %eax,-0x20(%ebp)
 856505f:	8b 45 08             	mov    0x8(%ebp),%eax
 8565062:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 8565069:	e8 c6 d7 ff ff       	call   8562834 <_ZN8fair_pvp10CFairMatch22GetPlayCountPerOneTeamEv>
 856506e:	3c 01                	cmp    $0x1,%al
 8565070:	0f 95 c0             	setne  %al
 8565073:	84 c0                	test   %al,%al
 8565075:	74 61                	je     85650d8 <_ZN8fair_pvp10CFairMatch10OnEndFightEP8PvP_Room+0x90>
 8565077:	8b 45 e0             	mov    -0x20(%ebp),%eax
 856507a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8565081:	00 
 8565082:	89 44 24 08          	mov    %eax,0x8(%esp)
 8565086:	8b 45 0c             	mov    0xc(%ebp),%eax
 8565089:	89 44 24 04          	mov    %eax,0x4(%esp)
 856508d:	8b 45 08             	mov    0x8(%ebp),%eax
 8565090:	89 04 24             	mov    %eax,(%esp)
 8565093:	e8 52 fd ff ff       	call   8564dea <_ZN8fair_pvp10CFairMatch11_ReturnTeamEP8PvP_RoomiP5CUser>
 8565098:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 856509b:	83 7d e0 01          	cmpl   $0x1,-0x20(%ebp)
 856509f:	74 19                	je     85650ba <_ZN8fair_pvp10CFairMatch10OnEndFightEP8PvP_Room+0x72>
 85650a1:	8b 55 08             	mov    0x8(%ebp),%edx
 85650a4:	8b 45 08             	mov    0x8(%ebp),%eax
 85650a7:	83 c2 1c             	add    $0x1c,%edx
 85650aa:	8d 58 64             	lea    0x64(%eax),%ebx
 85650ad:	b8 12 00 00 00       	mov    $0x12,%eax
 85650b2:	89 d7                	mov    %edx,%edi
 85650b4:	89 de                	mov    %ebx,%esi
 85650b6:	89 c1                	mov    %eax,%ecx
 85650b8:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
 85650ba:	8b 45 08             	mov    0x8(%ebp),%eax
 85650bd:	83 c0 1c             	add    $0x1c,%eax
 85650c0:	89 04 24             	mov    %eax,(%esp)
 85650c3:	e8 16 d4 ff ff       	call   85624de <_ZN8fair_pvp13TeamInfoThird7refreshEv>
 85650c8:	8b 45 08             	mov    0x8(%ebp),%eax
 85650cb:	83 c0 64             	add    $0x64,%eax
 85650ce:	89 04 24             	mov    %eax,(%esp)
 85650d1:	e8 ac d4 ff ff       	call   8562582 <_ZN8fair_pvp13TeamInfoThird5resetEv>
 85650d6:	eb 5f                	jmp    8565137 <_ZN8fair_pvp10CFairMatch10OnEndFightEP8PvP_Room+0xef>
 85650d8:	c7 44 24 04 3e 00 00 	movl   $0x3e,0x4(%esp)
 85650df:	00 
 85650e0:	8b 45 0c             	mov    0xc(%ebp),%eax
 85650e3:	89 04 24             	mov    %eax,(%esp)
 85650e6:	e8 a5 3c 00 00       	call   8568d90 <_ZN8PvP_Room13gen_timer_keyE13TIMER_MESSAGE>
 85650eb:	89 c6                	mov    %eax,%esi
 85650ed:	8b 45 0c             	mov    0xc(%ebp),%eax
 85650f0:	89 04 24             	mov    %eax,(%esp)
 85650f3:	e8 9c 88 cc ff       	call   822d994 <_ZN8PvP_Room9get_indexEv>
 85650f8:	89 c3                	mov    %eax,%ebx
 85650fa:	e8 7d 13 b9 ff       	call   80f647c <_Z12G_TimerQueuev>
 85650ff:	c7 44 24 1c 00 00 00 	movl   $0x0,0x1c(%esp)
 8565106:	00 
 8565107:	89 74 24 18          	mov    %esi,0x18(%esp)
 856510b:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 8565112:	00 
 8565113:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 856511a:	00 
 856511b:	c7 44 24 0c 3e 00 00 	movl   $0x3e,0xc(%esp)
 8565122:	00 
 8565123:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8565127:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 856512e:	00 
 856512f:	89 04 24             	mov    %eax,(%esp)
 8565132:	e8 29 bd 0c 00       	call   8630e60 <_ZN10TimerQueue23InsertTimerInMilisecondEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGExij>
 8565137:	83 c4 3c             	add    $0x3c,%esp
 856513a:	5b                   	pop    %ebx
 856513b:	5e                   	pop    %esi
 856513c:	5f                   	pop    %edi
 856513d:	5d                   	pop    %ebp
 856513e:	c3                   	ret
 856513f:	90                   	nop

```

```c
// fair_pvp::CFairMatch::OnEndFight @ 0x8565048

/* fair_pvp::CFairMatch::OnEndFight(PvP_Room*) */

void __thiscall fair_pvp::CFairMatch::OnEndFight(CFairMatch *this,PvP_Room *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  CFairMatch *pCVar6;
  CFairMatch *pCVar7;
  byte bVar8;
  
  bVar8 = 0;
  iVar2 = PvP_Room::get_manager_team(param_1);
  *(undefined4 *)(this + 4) = 0;
  cVar1 = GetPlayCountPerOneTeam();
  if (cVar1 == '\x01') {
    uVar3 = PvP_Room::gen_timer_key(param_1,0x3e);
    uVar4 = PvP_Room::get_index(param_1);
    uVar5 = G_TimerQueue();
    TimerQueue::InsertTimerInMilisecond(uVar5,1,uVar4,0x3e,0,0,uVar3,0);
  }
  else {
    _ReturnTeam(this,param_1,iVar2,(CUser *)0x0);
    if (iVar2 != 1) {
      pCVar6 = this + 100;
      pCVar7 = this + 0x1c;
      for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(undefined4 *)pCVar7 = *(undefined4 *)pCVar6;
        pCVar6 = pCVar6 + (uint)bVar8 * -8 + 4;
        pCVar7 = pCVar7 + (uint)bVar8 * -8 + 4;
      }
    }
    TeamInfoThird::refresh((TeamInfoThird *)(this + 0x1c));
    TeamInfoThird::reset((TeamInfoThird *)(this + 100));
  }
  return;
}

```

---

## OnEndPvP

```asm
// === 08565c4e fair_pvp::CFairMatch::OnEndPvP  [0x08565c4e-0x8565c53] ===
 8565c4e:	55                   	push   %ebp
 8565c4f:	89 e5                	mov    %esp,%ebp
 8565c51:	5d                   	pop    %ebp
 8565c52:	c3                   	ret
 8565c53:	90                   	nop

```

```c
// fair_pvp::CFairMatch::OnEndPvP @ 0x8565c4e

/* fair_pvp::CFairMatch::OnEndPvP(PvP_Room*) */

void fair_pvp::CFairMatch::OnEndPvP(PvP_Room *param_1)

{
  return;
}

```

---

## OnEndPvPResult

```asm
// === 0856694c fair_pvp::CFairMatch::OnEndPvPResult  [0x0856694c-0x8566d3d] ===
 856694c:	55                   	push   %ebp
 856694d:	89 e5                	mov    %esp,%ebp
 856694f:	57                   	push   %edi
 8566950:	56                   	push   %esi
 8566951:	53                   	push   %ebx
 8566952:	83 ec 7c             	sub    $0x7c,%esp
 8566955:	8b 45 10             	mov    0x10(%ebp),%eax
 8566958:	89 44 24 04          	mov    %eax,0x4(%esp)
 856695c:	8b 45 0c             	mov    0xc(%ebp),%eax
 856695f:	89 04 24             	mov    %eax,(%esp)
 8566962:	e8 7b 28 07 00       	call   85d91e2 <_ZN8PvP_Room13get_user_seatEP5CUser>
 8566967:	89 45 d0             	mov    %eax,-0x30(%ebp)
 856696a:	83 7d d0 ff          	cmpl   $0xffffffff,-0x30(%ebp)
 856696e:	75 31                	jne    85669a1 <_ZN8fair_pvp10CFairMatch14OnEndPvPResultEP8PvP_RoomP5CUser+0x55>
 8566970:	c7 44 24 10 cc 24 ca 	movl   $0x8ca24cc,0x10(%esp)
 8566977:	08 
 8566978:	c7 44 24 0c b3 10 00 	movl   $0x10b3,0xc(%esp)
 856697f:	00 
 8566980:	c7 44 24 08 e0 35 ca 	movl   $0x8ca35e0,0x8(%esp)
 8566987:	08 
 8566988:	c7 44 24 04 62 22 ca 	movl   $0x8ca2262,0x4(%esp)
 856698f:	08 
 8566990:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8566997:	e8 6e d2 56 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 856699c:	e9 94 03 00 00       	jmp    8566d35 <_ZN8fair_pvp10CFairMatch14OnEndPvPResultEP8PvP_RoomP5CUser+0x3e9>
 85669a1:	8b 45 0c             	mov    0xc(%ebp),%eax
 85669a4:	89 04 24             	mov    %eax,(%esp)
 85669a7:	e8 b6 fe 06 00       	call   85d6862 <_ZNK8PvP_Room16get_waiter_countEv>
 85669ac:	89 45 a0             	mov    %eax,-0x60(%ebp)
 85669af:	8b 45 0c             	mov    0xc(%ebp),%eax
 85669b2:	89 04 24             	mov    %eax,(%esp)
 85669b5:	e8 12 70 cc ff       	call   822d9cc <_ZN8PvP_Room19get_pvp_battle_modeEv>
 85669ba:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 85669bd:	8b 45 0c             	mov    0xc(%ebp),%eax
 85669c0:	89 04 24             	mov    %eax,(%esp)
 85669c3:	e8 cc 6f cc ff       	call   822d994 <_ZN8PvP_Room9get_indexEv>
 85669c8:	89 c7                	mov    %eax,%edi
 85669ca:	8b 45 10             	mov    0x10(%ebp),%eax
 85669cd:	89 04 24             	mov    %eax,(%esp)
 85669d0:	e8 53 a6 b9 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 85669d5:	89 c6                	mov    %eax,%esi
 85669d7:	8b 45 10             	mov    0x10(%ebp),%eax
 85669da:	89 04 24             	mov    %eax,(%esp)
 85669dd:	e8 90 a6 b9 ff       	call   8101072 <_ZNK5CUser12get_acc_nameEv>
 85669e2:	89 c3                	mov    %eax,%ebx
 85669e4:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 85669eb:	00 
 85669ec:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 85669f3:	00 
 85669f4:	c7 44 24 08 b8 10 00 	movl   $0x10b8,0x8(%esp)
 85669fb:	00 
 85669fc:	c7 44 24 04 e0 35 ca 	movl   $0x8ca35e0,0x4(%esp)
 8566a03:	08 
 8566a04:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8566a07:	89 04 24             	mov    %eax,(%esp)
 8566a0a:	e8 2d 93 fe ff       	call   854fd3c <_ZN10CSwitchLogC1EPKciii>
 8566a0f:	8b 45 a0             	mov    -0x60(%ebp),%eax
 8566a12:	89 44 24 18          	mov    %eax,0x18(%esp)
 8566a16:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 8566a19:	89 44 24 14          	mov    %eax,0x14(%esp)
 8566a1d:	89 7c 24 10          	mov    %edi,0x10(%esp)
 8566a21:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8566a25:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8566a29:	c7 44 24 04 98 23 ca 	movl   $0x8ca2398,0x4(%esp)
 8566a30:	08 
 8566a31:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8566a34:	89 04 24             	mov    %eax,(%esp)
 8566a37:	e8 28 93 fe ff       	call   854fd64 <_ZN10CSwitchLogclEPKcz>
 8566a3c:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8566a3f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8566a43:	8b 45 0c             	mov    0xc(%ebp),%eax
 8566a46:	89 04 24             	mov    %eax,(%esp)
 8566a49:	e8 24 28 07 00       	call   85d9272 <_ZN8PvP_Room8get_teamEi>
 8566a4e:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8566a51:	81 7d d4 fe 00 00 00 	cmpl   $0xfe,-0x2c(%ebp)
 8566a58:	75 31                	jne    8566a8b <_ZN8fair_pvp10CFairMatch14OnEndPvPResultEP8PvP_RoomP5CUser+0x13f>
 8566a5a:	c7 44 24 10 e0 24 ca 	movl   $0x8ca24e0,0x10(%esp)
 8566a61:	08 
 8566a62:	c7 44 24 0c be 10 00 	movl   $0x10be,0xc(%esp)
 8566a69:	00 
 8566a6a:	c7 44 24 08 e0 35 ca 	movl   $0x8ca35e0,0x8(%esp)
 8566a71:	08 
 8566a72:	c7 44 24 04 62 22 ca 	movl   $0x8ca2262,0x4(%esp)
 8566a79:	08 
 8566a7a:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8566a81:	e8 84 d1 56 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8566a86:	e9 aa 02 00 00       	jmp    8566d35 <_ZN8fair_pvp10CFairMatch14OnEndPvPResultEP8PvP_RoomP5CUser+0x3e9>
 8566a8b:	8b 45 10             	mov    0x10(%ebp),%eax
 8566a8e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8566a92:	8b 45 08             	mov    0x8(%ebp),%eax
 8566a95:	89 04 24             	mov    %eax,(%esp)
 8566a98:	e8 0b f9 ff ff       	call   85663a8 <_ZN8fair_pvp10CFairMatch9_FindTeamEP5CUser>
 8566a9d:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8566aa0:	83 7d d8 02          	cmpl   $0x2,-0x28(%ebp)
 8566aa4:	75 31                	jne    8566ad7 <_ZN8fair_pvp10CFairMatch14OnEndPvPResultEP8PvP_RoomP5CUser+0x18b>
 8566aa6:	c7 44 24 10 74 23 ca 	movl   $0x8ca2374,0x10(%esp)
 8566aad:	08 
 8566aae:	c7 44 24 0c c5 10 00 	movl   $0x10c5,0xc(%esp)
 8566ab5:	00 
 8566ab6:	c7 44 24 08 e0 35 ca 	movl   $0x8ca35e0,0x8(%esp)
 8566abd:	08 
 8566abe:	c7 44 24 04 62 22 ca 	movl   $0x8ca2262,0x4(%esp)
 8566ac5:	08 
 8566ac6:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8566acd:	e8 38 d1 56 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8566ad2:	e9 5e 02 00 00       	jmp    8566d35 <_ZN8fair_pvp10CFairMatch14OnEndPvPResultEP8PvP_RoomP5CUser+0x3e9>
 8566ad7:	8b 55 d8             	mov    -0x28(%ebp),%edx
 8566ada:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8566add:	89 d0                	mov    %edx,%eax
 8566adf:	c1 e0 03             	shl    $0x3,%eax
 8566ae2:	01 d0                	add    %edx,%eax
 8566ae4:	c1 e0 03             	shl    $0x3,%eax
 8566ae7:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8566aea:	83 c0 20             	add    $0x20,%eax
 8566aed:	8b 00                	mov    (%eax),%eax
 8566aef:	83 f8 02             	cmp    $0x2,%eax
 8566af2:	0f 84 3c 02 00 00    	je     8566d34 <_ZN8fair_pvp10CFairMatch14OnEndPvPResultEP8PvP_RoomP5CUser+0x3e8>
 8566af8:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8566afb:	89 44 24 04          	mov    %eax,0x4(%esp)
 8566aff:	8b 45 08             	mov    0x8(%ebp),%eax
 8566b02:	89 04 24             	mov    %eax,(%esp)
 8566b05:	e8 6c f9 ff ff       	call   8566476 <_ZN8fair_pvp10CFairMatch13_GetOtherTeamE22ENUM_SCHOOL_MATCH_TEAM>
 8566b0a:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8566b0d:	83 7d dc 02          	cmpl   $0x2,-0x24(%ebp)
 8566b11:	75 31                	jne    8566b44 <_ZN8fair_pvp10CFairMatch14OnEndPvPResultEP8PvP_RoomP5CUser+0x1f8>
 8566b13:	c7 44 24 10 84 23 ca 	movl   $0x8ca2384,0x10(%esp)
 8566b1a:	08 
 8566b1b:	c7 44 24 0c d2 10 00 	movl   $0x10d2,0xc(%esp)
 8566b22:	00 
 8566b23:	c7 44 24 08 e0 35 ca 	movl   $0x8ca35e0,0x8(%esp)
 8566b2a:	08 
 8566b2b:	c7 44 24 04 62 22 ca 	movl   $0x8ca2262,0x4(%esp)
 8566b32:	08 
 8566b33:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8566b3a:	e8 cb d0 56 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8566b3f:	e9 f1 01 00 00       	jmp    8566d35 <_ZN8fair_pvp10CFairMatch14OnEndPvPResultEP8PvP_RoomP5CUser+0x3e9>
 8566b44:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8566b4b:	00 
 8566b4c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8566b4f:	89 04 24             	mov    %eax,(%esp)
 8566b52:	e8 27 22 00 00       	call   8568d7e <_ZN8PvP_Room9set_stateEi>
 8566b57:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8566b5e:	e9 87 00 00 00       	jmp    8566bea <_ZN8fair_pvp10CFairMatch14OnEndPvPResultEP8PvP_RoomP5CUser+0x29e>
 8566b63:	8b 55 d8             	mov    -0x28(%ebp),%edx
 8566b66:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8566b69:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8566b6c:	89 c3                	mov    %eax,%ebx
 8566b6e:	c1 e3 04             	shl    $0x4,%ebx
 8566b71:	89 d0                	mov    %edx,%eax
 8566b73:	c1 e0 03             	shl    $0x3,%eax
 8566b76:	01 d0                	add    %edx,%eax
 8566b78:	c1 e0 03             	shl    $0x3,%eax
 8566b7b:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 8566b7e:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8566b81:	83 c0 10             	add    $0x10,%eax
 8566b84:	0f b6 40 18          	movzbl 0x18(%eax),%eax
 8566b88:	84 c0                	test   %al,%al
 8566b8a:	74 5a                	je     8566be6 <_ZN8fair_pvp10CFairMatch14OnEndPvPResultEP8PvP_RoomP5CUser+0x29a>
 8566b8c:	8b 55 d8             	mov    -0x28(%ebp),%edx
 8566b8f:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8566b92:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8566b95:	89 c3                	mov    %eax,%ebx
 8566b97:	c1 e3 04             	shl    $0x4,%ebx
 8566b9a:	89 d0                	mov    %edx,%eax
 8566b9c:	c1 e0 03             	shl    $0x3,%eax
 8566b9f:	01 d0                	add    %edx,%eax
 8566ba1:	c1 e0 03             	shl    $0x3,%eax
 8566ba4:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 8566ba7:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8566baa:	83 c0 24             	add    $0x24,%eax
 8566bad:	8b 00                	mov    (%eax),%eax
 8566baf:	85 c0                	test   %eax,%eax
 8566bb1:	74 33                	je     8566be6 <_ZN8fair_pvp10CFairMatch14OnEndPvPResultEP8PvP_RoomP5CUser+0x29a>
 8566bb3:	8b 55 d8             	mov    -0x28(%ebp),%edx
 8566bb6:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8566bb9:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8566bbc:	89 c3                	mov    %eax,%ebx
 8566bbe:	c1 e3 04             	shl    $0x4,%ebx
 8566bc1:	89 d0                	mov    %edx,%eax
 8566bc3:	c1 e0 03             	shl    $0x3,%eax
 8566bc6:	01 d0                	add    %edx,%eax
 8566bc8:	c1 e0 03             	shl    $0x3,%eax
 8566bcb:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 8566bce:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8566bd1:	83 c0 24             	add    $0x24,%eax
 8566bd4:	8b 00                	mov    (%eax),%eax
 8566bd6:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 8566bdd:	00 
 8566bde:	89 04 24             	mov    %eax,(%esp)
 8566be1:	e8 cc 81 11 00       	call   867edb2 <_ZN5CUser9set_stateE8ch_state>
 8566be6:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 8566bea:	83 7d e0 03          	cmpl   $0x3,-0x20(%ebp)
 8566bee:	0f 9e c0             	setle  %al
 8566bf1:	84 c0                	test   %al,%al
 8566bf3:	0f 85 6a ff ff ff    	jne    8566b63 <_ZN8fair_pvp10CFairMatch14OnEndPvPResultEP8PvP_RoomP5CUser+0x217>
 8566bf9:	8b 55 d8             	mov    -0x28(%ebp),%edx
 8566bfc:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8566bff:	89 d0                	mov    %edx,%eax
 8566c01:	c1 e0 03             	shl    $0x3,%eax
 8566c04:	01 d0                	add    %edx,%eax
 8566c06:	c1 e0 03             	shl    $0x3,%eax
 8566c09:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8566c0c:	83 c0 20             	add    $0x20,%eax
 8566c0f:	8b 00                	mov    (%eax),%eax
 8566c11:	83 f8 01             	cmp    $0x1,%eax
 8566c14:	0f 85 b2 00 00 00    	jne    8566ccc <_ZN8fair_pvp10CFairMatch14OnEndPvPResultEP8PvP_RoomP5CUser+0x380>
 8566c1a:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8566c1d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8566c21:	8b 45 08             	mov    0x8(%ebp),%eax
 8566c24:	89 04 24             	mov    %eax,(%esp)
 8566c27:	e8 60 e3 ff ff       	call   8564f8c <_ZN8fair_pvp10CFairMatch16_GetOppositeTeamEi>
 8566c2c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8566c33:	00 
 8566c34:	89 44 24 08          	mov    %eax,0x8(%esp)
 8566c38:	8b 45 0c             	mov    0xc(%ebp),%eax
 8566c3b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8566c3f:	8b 45 08             	mov    0x8(%ebp),%eax
 8566c42:	89 04 24             	mov    %eax,(%esp)
 8566c45:	e8 a0 e1 ff ff       	call   8564dea <_ZN8fair_pvp10CFairMatch11_ReturnTeamEP8PvP_RoomiP5CUser>
 8566c4a:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8566c4d:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 8566c51:	0f 84 aa 00 00 00    	je     8566d01 <_ZN8fair_pvp10CFairMatch14OnEndPvPResultEP8PvP_RoomP5CUser+0x3b5>
 8566c57:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8566c5a:	89 04 24             	mov    %eax,(%esp)
 8566c5d:	e8 ea 70 02 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8566c62:	c7 44 24 08 3b 01 00 	movl   $0x13b,0x8(%esp)
 8566c69:	00 
 8566c6a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8566c71:	00 
 8566c72:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8566c75:	89 04 24             	mov    %eax,(%esp)
 8566c78:	e8 7f 4c b6 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8566c7d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8566c84:	00 
 8566c85:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8566c88:	89 04 24             	mov    %eax,(%esp)
 8566c8b:	e8 c8 4c b6 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8566c90:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8566c93:	89 44 24 04          	mov    %eax,0x4(%esp)
 8566c97:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8566c9a:	89 04 24             	mov    %eax,(%esp)
 8566c9d:	e8 76 51 07 00       	call   85dbe18 <_ZN8PvP_Room11send_to_pvpER11PacketGuard>
 8566ca2:	eb 1b                	jmp    8566cbf <_ZN8fair_pvp10CFairMatch14OnEndPvPResultEP8PvP_RoomP5CUser+0x373>
 8566ca4:	89 d3                	mov    %edx,%ebx
 8566ca6:	89 c6                	mov    %eax,%esi
 8566ca8:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8566cab:	89 04 24             	mov    %eax,(%esp)
 8566cae:	e8 cd 71 02 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8566cb3:	89 f0                	mov    %esi,%eax
 8566cb5:	89 da                	mov    %ebx,%edx
 8566cb7:	89 04 24             	mov    %eax,(%esp)
 8566cba:	e8 91 ca 57 00       	call   8ae3750 <_Unwind_Resume>
 8566cbf:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8566cc2:	89 04 24             	mov    %eax,(%esp)
 8566cc5:	e8 b6 71 02 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8566cca:	eb 35                	jmp    8566d01 <_ZN8fair_pvp10CFairMatch14OnEndPvPResultEP8PvP_RoomP5CUser+0x3b5>
 8566ccc:	8b 55 d8             	mov    -0x28(%ebp),%edx
 8566ccf:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8566cd2:	89 d0                	mov    %edx,%eax
 8566cd4:	c1 e0 03             	shl    $0x3,%eax
 8566cd7:	01 d0                	add    %edx,%eax
 8566cd9:	c1 e0 03             	shl    $0x3,%eax
 8566cdc:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8566cdf:	83 c0 20             	add    $0x20,%eax
 8566ce2:	8b 00                	mov    (%eax),%eax
 8566ce4:	85 c0                	test   %eax,%eax
 8566ce6:	75 19                	jne    8566d01 <_ZN8fair_pvp10CFairMatch14OnEndPvPResultEP8PvP_RoomP5CUser+0x3b5>
 8566ce8:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8566ceb:	89 44 24 08          	mov    %eax,0x8(%esp)
 8566cef:	8b 45 0c             	mov    0xc(%ebp),%eax
 8566cf2:	89 44 24 04          	mov    %eax,0x4(%esp)
 8566cf6:	8b 45 08             	mov    0x8(%ebp),%eax
 8566cf9:	89 04 24             	mov    %eax,(%esp)
 8566cfc:	e8 85 f0 ff ff       	call   8565d86 <_ZN8fair_pvp10CFairMatch16_PullOutRoomTeamEP8PvP_Room22ENUM_SCHOOL_MATCH_TEAM>
 8566d01:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8566d08:	00 
 8566d09:	8b 45 0c             	mov    0xc(%ebp),%eax
 8566d0c:	89 04 24             	mov    %eax,(%esp)
 8566d0f:	e8 6a 20 00 00       	call   8568d7e <_ZN8PvP_Room9set_stateEi>
 8566d14:	83 7d d4 01          	cmpl   $0x1,-0x2c(%ebp)
 8566d18:	75 1b                	jne    8566d35 <_ZN8fair_pvp10CFairMatch14OnEndPvPResultEP8PvP_RoomP5CUser+0x3e9>
 8566d1a:	8b 45 08             	mov    0x8(%ebp),%eax
 8566d1d:	8d 50 64             	lea    0x64(%eax),%edx
 8566d20:	8b 45 08             	mov    0x8(%ebp),%eax
 8566d23:	83 c0 1c             	add    $0x1c,%eax
 8566d26:	89 54 24 04          	mov    %edx,0x4(%esp)
 8566d2a:	89 04 24             	mov    %eax,(%esp)
 8566d2d:	e8 f9 26 00 00       	call   856942b <_ZSt4swapIN8fair_pvp13TeamInfoThirdEEvRT_S3_>
 8566d32:	eb 01                	jmp    8566d35 <_ZN8fair_pvp10CFairMatch14OnEndPvPResultEP8PvP_RoomP5CUser+0x3e9>
 8566d34:	90                   	nop
 8566d35:	83 c4 7c             	add    $0x7c,%esp
 8566d38:	5b                   	pop    %ebx
 8566d39:	5e                   	pop    %esi
 8566d3a:	5f                   	pop    %edi
 8566d3b:	5d                   	pop    %ebp
 8566d3c:	c3                   	ret
 8566d3d:	90                   	nop

```

```c
// fair_pvp::CFairMatch::OnEndPvPResult @ 0x856694c

/* fair_pvp::CFairMatch::OnEndPvPResult(PvP_Room*, CUser*) */

void __thiscall
fair_pvp::CFairMatch::OnEndPvPResult(CFairMatch *this,PvP_Room *param_1,CUser *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  PacketGuard local_50 [12];
  CSwitchLog local_44 [16];
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  PvP_Room *local_20;
  
  local_34 = PvP_Room::get_user_seat(param_1,param_2);
  if (local_34 == -1) {
    LogManager::logFormat
              (1,"MatchingSystem.cpp",
               "virtual void fair_pvp::CFairMatch::OnEndPvPResult(PvP_Room*, CUser*)",0x10b3,
               "error get_user_seat");
  }
  else {
    uVar1 = PvP_Room::get_waiter_count(param_1);
    uVar2 = PvP_Room::get_pvp_battle_mode(param_1);
    uVar3 = PvP_Room::get_index(param_1);
    uVar4 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_2);
    uVar5 = CUser::get_acc_name(param_2);
    CSwitchLog::CSwitchLog
              (local_44,"virtual void fair_pvp::CFairMatch::OnEndPvPResult(PvP_Room*, CUser*)",
               0x10b8,0,0);
    CSwitchLog::operator()(local_44,"pvp@log %s,%s,room(%d),%d,%d",uVar5,uVar4,uVar3,uVar2,uVar1);
    local_30 = PvP_Room::get_team(param_1,local_34);
    if (local_30 == 0xfe) {
      LogManager::logFormat
                (1,"MatchingSystem.cpp",
                 "virtual void fair_pvp::CFairMatch::OnEndPvPResult(PvP_Room*, CUser*)",0x10be,
                 "error get_team");
    }
    else {
      local_2c = _FindTeam(this,param_2);
      if (local_2c == 2) {
        LogManager::logFormat
                  (1,"MatchingSystem.cpp",
                   "virtual void fair_pvp::CFairMatch::OnEndPvPResult(PvP_Room*, CUser*)",0x10c5,
                   "error _FindTeam");
      }
      else if (*(int *)(this + local_2c * 0x48 + 0x20) != 2) {
        local_28 = _GetOtherTeam(this,local_2c);
        if (local_28 == 2) {
          LogManager::logFormat
                    (1,"MatchingSystem.cpp",
                     "virtual void fair_pvp::CFairMatch::OnEndPvPResult(PvP_Room*, CUser*)",0x10d2,
                     "error _GetOtherTeam");
        }
        else {
          PvP_Room::set_state(param_1,1);
          for (local_24 = 0; local_24 < 4; local_24 = local_24 + 1) {
            if ((this[local_24 * 0x10 + local_2c * 0x48 + 0x28] != (CFairMatch)0x0) &&
               (*(int *)(this + local_24 * 0x10 + local_2c * 0x48 + 0x24) != 0)) {
              CUser::set_state(*(CUser **)(this + local_24 * 0x10 + local_2c * 0x48 + 0x24),6);
            }
          }
          if (*(int *)(this + local_2c * 0x48 + 0x20) == 1) {
            iVar6 = _GetOppositeTeam(this,local_30);
            local_20 = (PvP_Room *)_ReturnTeam(this,param_1,iVar6,(CUser *)0x0);
            if (local_20 != (PvP_Room *)0x0) {
              PacketGuard::PacketGuard(local_50);
                    /* try { // try from 08566c78 to 08566ca1 has its CatchHandler @ 08566ca4 */
              InterfacePacketBuf::put_header((InterfacePacketBuf *)local_50,0,0x13b);
              InterfacePacketBuf::finalize((InterfacePacketBuf *)local_50,true);
              PvP_Room::send_to_pvp(local_20,local_50);
              PacketGuard::~PacketGuard(local_50);
            }
          }
          else if (*(int *)(this + local_2c * 0x48 + 0x20) == 0) {
            _PullOutRoomTeam(this,param_1,local_2c);
          }
          PvP_Room::set_state(param_1,2);
          if (local_30 == 1) {
            std::swap<fair_pvp::TeamInfoThird>
                      ((TeamInfoThird *)(this + 0x1c),(TeamInfoThird *)(this + 100));
          }
        }
      }
    }
  }
  return;
}

```

---

## OnGiveup

```asm
// === 08564de0 fair_pvp::CFairMatch::OnGiveup  [0x08564de0-0x8564de9] ===
 8564de0:	55                   	push   %ebp
 8564de1:	89 e5                	mov    %esp,%ebp
 8564de3:	b8 01 00 00 00       	mov    $0x1,%eax
 8564de8:	5d                   	pop    %ebp
 8564de9:	c3                   	ret

```

```c
// fair_pvp::CFairMatch::OnGiveup @ 0x8564de0

/* fair_pvp::CFairMatch::OnGiveup(CUser*) */

undefined4 fair_pvp::CFairMatch::OnGiveup(CUser *param_1)

{
  return 1;
}

```

---

## OnJoinRoom

```asm
// === 08562df6 fair_pvp::CFairMatch::OnJoinRoom  [0x08562df6-0x8562e1d] ===
 8562df6:	55                   	push   %ebp
 8562df7:	89 e5                	mov    %esp,%ebp
 8562df9:	83 ec 18             	sub    $0x18,%esp
 8562dfc:	8b 45 08             	mov    0x8(%ebp),%eax
 8562dff:	8b 40 04             	mov    0x4(%eax),%eax
 8562e02:	83 f8 03             	cmp    $0x3,%eax
 8562e05:	74 15                	je     8562e1c <_ZN8fair_pvp10CFairMatch10OnJoinRoomEP5CUser+0x26>
 8562e07:	8b 45 08             	mov    0x8(%ebp),%eax
 8562e0a:	8d 50 1c             	lea    0x1c(%eax),%edx
 8562e0d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8562e10:	89 44 24 04          	mov    %eax,0x4(%esp)
 8562e14:	89 14 24             	mov    %edx,(%esp)
 8562e17:	e8 aa f7 ff ff       	call   85625c6 <_ZN8fair_pvp13TeamInfoThird3addEP5CUser>
 8562e1c:	c9                   	leave
 8562e1d:	c3                   	ret

```

```c
// fair_pvp::CFairMatch::OnJoinRoom @ 0x8562df6

/* fair_pvp::CFairMatch::OnJoinRoom(CUser*) */

void __thiscall fair_pvp::CFairMatch::OnJoinRoom(CFairMatch *this,CUser *param_1)

{
  if (*(int *)(this + 4) != 3) {
    TeamInfoThird::add((TeamInfoThird *)(this + 0x1c),param_1);
  }
  return;
}

```

---

## OnLeaveRoom

```asm
// === 08562fbc fair_pvp::CFairMatch::OnLeaveRoom  [0x08562fbc-0x8563271] ===
 8562fbc:	55                   	push   %ebp
 8562fbd:	89 e5                	mov    %esp,%ebp
 8562fbf:	56                   	push   %esi
 8562fc0:	53                   	push   %ebx
 8562fc1:	83 ec 40             	sub    $0x40,%esp
 8562fc4:	8b 45 08             	mov    0x8(%ebp),%eax
 8562fc7:	8b 40 04             	mov    0x4(%eax),%eax
 8562fca:	83 f8 04             	cmp    $0x4,%eax
 8562fcd:	75 44                	jne    8563013 <_ZN8fair_pvp10CFairMatch11OnLeaveRoomEP5CUserP8PvP_Roomii+0x57>
 8562fcf:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 8562fd6:	00 
 8562fd7:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8562fde:	00 
 8562fdf:	8b 45 08             	mov    0x8(%ebp),%eax
 8562fe2:	89 04 24             	mov    %eax,(%esp)
 8562fe5:	e8 bc 21 00 00       	call   85651a6 <_ZN8fair_pvp10CFairMatch21_SendMatchStatePacketEii>
 8562fea:	8b 45 08             	mov    0x8(%ebp),%eax
 8562fed:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 8562ff4:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8562ffb:	00 
 8562ffc:	8b 45 10             	mov    0x10(%ebp),%eax
 8562fff:	89 44 24 04          	mov    %eax,0x4(%esp)
 8563003:	8b 45 08             	mov    0x8(%ebp),%eax
 8563006:	89 04 24             	mov    %eax,(%esp)
 8563009:	e8 78 2d 00 00       	call   8565d86 <_ZN8fair_pvp10CFairMatch16_PullOutRoomTeamEP8PvP_Room22ENUM_SCHOOL_MATCH_TEAM>
 856300e:	e9 ab 01 00 00       	jmp    85631be <_ZN8fair_pvp10CFairMatch11OnLeaveRoomEP5CUserP8PvP_Roomii+0x202>
 8563013:	8b 45 08             	mov    0x8(%ebp),%eax
 8563016:	8b 40 04             	mov    0x4(%eax),%eax
 8563019:	83 f8 05             	cmp    $0x5,%eax
 856301c:	0f 85 92 01 00 00    	jne    85631b4 <_ZN8fair_pvp10CFairMatch11OnLeaveRoomEP5CUserP8PvP_Roomii+0x1f8>
 8563022:	8b 45 14             	mov    0x14(%ebp),%eax
 8563025:	89 44 24 04          	mov    %eax,0x4(%esp)
 8563029:	8b 45 10             	mov    0x10(%ebp),%eax
 856302c:	89 04 24             	mov    %eax,(%esp)
 856302f:	e8 ee 5c 00 00       	call   8568d22 <_ZN8PvP_Room12GetTeamCountEi>
 8563034:	83 f8 01             	cmp    $0x1,%eax
 8563037:	0f 94 c0             	sete   %al
 856303a:	84 c0                	test   %al,%al
 856303c:	74 1a                	je     8563058 <_ZN8fair_pvp10CFairMatch11OnLeaveRoomEP5CUserP8PvP_Roomii+0x9c>
 856303e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8563045:	00 
 8563046:	8b 45 14             	mov    0x14(%ebp),%eax
 8563049:	89 44 24 04          	mov    %eax,0x4(%esp)
 856304d:	8b 45 08             	mov    0x8(%ebp),%eax
 8563050:	89 04 24             	mov    %eax,(%esp)
 8563053:	e8 c6 fd ff ff       	call   8562e1e <_ZN8fair_pvp10CFairMatch13_UpdateRatingEi22ENUM_ELO_RATING_SYSTEM>
 8563058:	8b 45 0c             	mov    0xc(%ebp),%eax
 856305b:	89 44 24 04          	mov    %eax,0x4(%esp)
 856305f:	8b 45 08             	mov    0x8(%ebp),%eax
 8563062:	89 04 24             	mov    %eax,(%esp)
 8563065:	e8 3e 33 00 00       	call   85663a8 <_ZN8fair_pvp10CFairMatch9_FindTeamEP5CUser>
 856306a:	89 45 f0             	mov    %eax,-0x10(%ebp)
 856306d:	83 7d f0 02          	cmpl   $0x2,-0x10(%ebp)
 8563071:	75 31                	jne    85630a4 <_ZN8fair_pvp10CFairMatch11OnLeaveRoomEP5CUserP8PvP_Roomii+0xe8>
 8563073:	c7 44 24 10 74 23 ca 	movl   $0x8ca2374,0x10(%esp)
 856307a:	08 
 856307b:	c7 44 24 0c 0b 0b 00 	movl   $0xb0b,0xc(%esp)
 8563082:	00 
 8563083:	c7 44 24 08 60 39 ca 	movl   $0x8ca3960,0x8(%esp)
 856308a:	08 
 856308b:	c7 44 24 04 62 22 ca 	movl   $0x8ca2262,0x4(%esp)
 8563092:	08 
 8563093:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 856309a:	e8 6b 0b 57 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 856309f:	e9 c6 01 00 00       	jmp    856326a <_ZN8fair_pvp10CFairMatch11OnLeaveRoomEP5CUserP8PvP_Roomii+0x2ae>
 85630a4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85630a7:	89 44 24 04          	mov    %eax,0x4(%esp)
 85630ab:	8b 45 08             	mov    0x8(%ebp),%eax
 85630ae:	89 04 24             	mov    %eax,(%esp)
 85630b1:	e8 c0 33 00 00       	call   8566476 <_ZN8fair_pvp10CFairMatch13_GetOtherTeamE22ENUM_SCHOOL_MATCH_TEAM>
 85630b6:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85630b9:	83 7d f4 02          	cmpl   $0x2,-0xc(%ebp)
 85630bd:	75 31                	jne    85630f0 <_ZN8fair_pvp10CFairMatch11OnLeaveRoomEP5CUserP8PvP_Roomii+0x134>
 85630bf:	c7 44 24 10 84 23 ca 	movl   $0x8ca2384,0x10(%esp)
 85630c6:	08 
 85630c7:	c7 44 24 0c 12 0b 00 	movl   $0xb12,0xc(%esp)
 85630ce:	00 
 85630cf:	c7 44 24 08 60 39 ca 	movl   $0x8ca3960,0x8(%esp)
 85630d6:	08 
 85630d7:	c7 44 24 04 62 22 ca 	movl   $0x8ca2262,0x4(%esp)
 85630de:	08 
 85630df:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 85630e6:	e8 1f 0b 57 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 85630eb:	e9 7a 01 00 00       	jmp    856326a <_ZN8fair_pvp10CFairMatch11OnLeaveRoomEP5CUserP8PvP_Roomii+0x2ae>
 85630f0:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85630f3:	8b 4d 08             	mov    0x8(%ebp),%ecx
 85630f6:	89 d0                	mov    %edx,%eax
 85630f8:	c1 e0 03             	shl    $0x3,%eax
 85630fb:	01 d0                	add    %edx,%eax
 85630fd:	c1 e0 03             	shl    $0x3,%eax
 8563100:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8563103:	83 c0 10             	add    $0x10,%eax
 8563106:	0f b6 40 0c          	movzbl 0xc(%eax),%eax
 856310a:	84 c0                	test   %al,%al
 856310c:	0f 84 ac 00 00 00    	je     85631be <_ZN8fair_pvp10CFairMatch11OnLeaveRoomEP5CUserP8PvP_Roomii+0x202>
 8563112:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8563115:	89 04 24             	mov    %eax,(%esp)
 8563118:	e8 2f ac 02 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 856311d:	c7 44 24 08 3a 01 00 	movl   $0x13a,0x8(%esp)
 8563124:	00 
 8563125:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 856312c:	00 
 856312d:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8563130:	89 04 24             	mov    %eax,(%esp)
 8563133:	e8 c4 87 b6 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8563138:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 856313f:	00 
 8563140:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8563143:	89 04 24             	mov    %eax,(%esp)
 8563146:	e8 0d 88 b6 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 856314b:	8b 55 f4             	mov    -0xc(%ebp),%edx
 856314e:	89 d0                	mov    %edx,%eax
 8563150:	c1 e0 03             	shl    $0x3,%eax
 8563153:	01 d0                	add    %edx,%eax
 8563155:	c1 e0 03             	shl    $0x3,%eax
 8563158:	83 c0 10             	add    $0x10,%eax
 856315b:	03 45 08             	add    0x8(%ebp),%eax
 856315e:	8d 50 0c             	lea    0xc(%eax),%edx
 8563161:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8563164:	89 44 24 04          	mov    %eax,0x4(%esp)
 8563168:	89 14 24             	mov    %edx,(%esp)
 856316b:	e8 dc f5 ff ff       	call   856274c <_ZN8fair_pvp13TeamInfoThird10SendToTeamER11PacketGuard>
 8563170:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8563173:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8563176:	89 d0                	mov    %edx,%eax
 8563178:	c1 e0 03             	shl    $0x3,%eax
 856317b:	01 d0                	add    %edx,%eax
 856317d:	c1 e0 03             	shl    $0x3,%eax
 8563180:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8563183:	83 c0 20             	add    $0x20,%eax
 8563186:	c7 00 01 00 00 00    	movl   $0x1,(%eax)
 856318c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 856318f:	89 04 24             	mov    %eax,(%esp)
 8563192:	e8 e9 ac 02 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8563197:	eb 25                	jmp    85631be <_ZN8fair_pvp10CFairMatch11OnLeaveRoomEP5CUserP8PvP_Roomii+0x202>
 8563199:	89 d3                	mov    %edx,%ebx
 856319b:	89 c6                	mov    %eax,%esi
 856319d:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85631a0:	89 04 24             	mov    %eax,(%esp)
 85631a3:	e8 d8 ac 02 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 85631a8:	89 f0                	mov    %esi,%eax
 85631aa:	89 da                	mov    %ebx,%edx
 85631ac:	89 04 24             	mov    %eax,(%esp)
 85631af:	e8 9c 05 58 00       	call   8ae3750 <_Unwind_Resume>
 85631b4:	8b 45 08             	mov    0x8(%ebp),%eax
 85631b7:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 85631be:	83 7d 14 01          	cmpl   $0x1,0x14(%ebp)
 85631c2:	75 38                	jne    85631fc <_ZN8fair_pvp10CFairMatch11OnLeaveRoomEP5CUserP8PvP_Roomii+0x240>
 85631c4:	8b 45 08             	mov    0x8(%ebp),%eax
 85631c7:	8d 50 1c             	lea    0x1c(%eax),%edx
 85631ca:	8b 45 0c             	mov    0xc(%ebp),%eax
 85631cd:	89 44 24 04          	mov    %eax,0x4(%esp)
 85631d1:	89 14 24             	mov    %edx,(%esp)
 85631d4:	e8 d1 f4 ff ff       	call   85626aa <_ZN8fair_pvp13TeamInfoThird3delEP5CUser>
 85631d9:	8b 45 18             	mov    0x18(%ebp),%eax
 85631dc:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85631e0:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 85631e7:	00 
 85631e8:	8b 45 10             	mov    0x10(%ebp),%eax
 85631eb:	89 44 24 04          	mov    %eax,0x4(%esp)
 85631ef:	8b 45 08             	mov    0x8(%ebp),%eax
 85631f2:	89 04 24             	mov    %eax,(%esp)
 85631f5:	e8 78 00 00 00       	call   8563272 <_ZN8fair_pvp10CFairMatch17_ChangeTeamLeaderEP8PvP_Room22ENUM_SCHOOL_MATCH_TEAMi>
 85631fa:	eb 36                	jmp    8563232 <_ZN8fair_pvp10CFairMatch11OnLeaveRoomEP5CUserP8PvP_Roomii+0x276>
 85631fc:	8b 45 08             	mov    0x8(%ebp),%eax
 85631ff:	8d 50 64             	lea    0x64(%eax),%edx
 8563202:	8b 45 0c             	mov    0xc(%ebp),%eax
 8563205:	89 44 24 04          	mov    %eax,0x4(%esp)
 8563209:	89 14 24             	mov    %edx,(%esp)
 856320c:	e8 99 f4 ff ff       	call   85626aa <_ZN8fair_pvp13TeamInfoThird3delEP5CUser>
 8563211:	8b 45 18             	mov    0x18(%ebp),%eax
 8563214:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8563218:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 856321f:	00 
 8563220:	8b 45 10             	mov    0x10(%ebp),%eax
 8563223:	89 44 24 04          	mov    %eax,0x4(%esp)
 8563227:	8b 45 08             	mov    0x8(%ebp),%eax
 856322a:	89 04 24             	mov    %eax,(%esp)
 856322d:	e8 40 00 00 00       	call   8563272 <_ZN8fair_pvp10CFairMatch17_ChangeTeamLeaderEP8PvP_Room22ENUM_SCHOOL_MATCH_TEAMi>
 8563232:	a1 48 e1 43 09       	mov    0x943e148,%eax
 8563237:	8b 00                	mov    (%eax),%eax
 8563239:	83 c0 04             	add    $0x4,%eax
 856323c:	8b 08                	mov    (%eax),%ecx
 856323e:	8b 55 08             	mov    0x8(%ebp),%edx
 8563241:	a1 48 e1 43 09       	mov    0x943e148,%eax
 8563246:	89 54 24 04          	mov    %edx,0x4(%esp)
 856324a:	89 04 24             	mov    %eax,(%esp)
 856324d:	ff d1                	call   *%ecx
 856324f:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8563256:	00 
 8563257:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 856325e:	00 
 856325f:	8b 45 08             	mov    0x8(%ebp),%eax
 8563262:	89 04 24             	mov    %eax,(%esp)
 8563265:	e8 3c 1f 00 00       	call   85651a6 <_ZN8fair_pvp10CFairMatch21_SendMatchStatePacketEii>
 856326a:	83 c4 40             	add    $0x40,%esp
 856326d:	5b                   	pop    %ebx
 856326e:	5e                   	pop    %esi
 856326f:	5d                   	pop    %ebp
 8563270:	c3                   	ret
 8563271:	90                   	nop

```

```c
// fair_pvp::CFairMatch::OnLeaveRoom @ 0x8562fbc

/* fair_pvp::CFairMatch::OnLeaveRoom(CUser*, PvP_Room*, int, int) */

void __thiscall
fair_pvp::CFairMatch::OnLeaveRoom
          (CFairMatch *this,CUser *param_1,PvP_Room *param_2,int param_3,int param_4)

{
  int iVar1;
  PacketGuard local_20 [12];
  int local_14;
  int local_10;
  
  if (*(int *)(this + 4) == 4) {
    _SendMatchStatePacket(this,4,2);
    *(undefined4 *)(this + 4) = 0;
    _PullOutRoomTeam(this,param_2,1);
  }
  else if (*(int *)(this + 4) == 5) {
    iVar1 = PvP_Room::GetTeamCount(param_2,param_3);
    if (iVar1 == 1) {
      _UpdateRating(this,param_3,0);
    }
    local_14 = _FindTeam(this,param_1);
    if (local_14 == 2) {
      LogManager::logFormat
                (1,"MatchingSystem.cpp",
                 "virtual void fair_pvp::CFairMatch::OnLeaveRoom(CUser*, PvP_Room*, int, int)",0xb0b
                 ,"error _FindTeam");
      return;
    }
    local_10 = _GetOtherTeam(this,local_14);
    if (local_10 == 2) {
      LogManager::logFormat
                (1,"MatchingSystem.cpp",
                 "virtual void fair_pvp::CFairMatch::OnLeaveRoom(CUser*, PvP_Room*, int, int)",0xb12
                 ,"error _GetOtherTeam");
      return;
    }
    if (this[local_10 * 0x48 + 0x1c] != (CFairMatch)0x0) {
      PacketGuard::PacketGuard(local_20);
                    /* try { // try from 08563133 to 0856316f has its CatchHandler @ 08563199 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0x13a);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
      TeamInfoThird::SendToTeam((TeamInfoThird *)(this + local_10 * 0x48 + 0x1c),local_20);
      *(undefined4 *)(this + local_10 * 0x48 + 0x20) = 1;
      PacketGuard::~PacketGuard(local_20);
    }
  }
  else {
    *(undefined4 *)(this + 4) = 0;
  }
  if (param_3 == 1) {
    TeamInfoThird::del((TeamInfoThird *)(this + 0x1c),param_1);
    _ChangeTeamLeader(this,param_2,0,param_4);
  }
  else {
    TeamInfoThird::del((TeamInfoThird *)(this + 100),param_1);
    _ChangeTeamLeader(this,param_2,1,param_4);
  }
  (**(code **)(*pWaitingRoomList_ + 4))(pWaitingRoomList_,this);
  _SendMatchStatePacket(this,5,1);
  return;
}

```

---

## OnMatchRoom

```asm
// === 08564150 fair_pvp::CFairMatch::OnMatchRoom  [0x08564150-0x856491b] ===
 8564150:	55                   	push   %ebp
 8564151:	89 e5                	mov    %esp,%ebp
 8564153:	57                   	push   %edi
 8564154:	56                   	push   %esi
 8564155:	53                   	push   %ebx
 8564156:	81 ec ac 01 00 00    	sub    $0x1ac,%esp
 856415c:	8b 45 08             	mov    0x8(%ebp),%eax
 856415f:	8b 40 18             	mov    0x18(%eax),%eax
 8564162:	3b 45 10             	cmp    0x10(%ebp),%eax
 8564165:	74 40                	je     85641a7 <_ZN8fair_pvp10CFairMatch11OnMatchRoomEP8PvP_Roomi+0x57>
 8564167:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 856416e:	00 
 856416f:	c7 44 24 08 8b 0c 00 	movl   $0xc8b,0x8(%esp)
 8564176:	00 
 8564177:	c7 44 24 04 00 38 ca 	movl   $0x8ca3800,0x4(%esp)
 856417e:	08 
 856417f:	8d 45 84             	lea    -0x7c(%ebp),%eax
 8564182:	89 04 24             	mov    %eax,(%esp)
 8564185:	e8 8e b5 fe ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 856418a:	c7 44 24 04 9d 22 ca 	movl   $0x8ca229d,0x4(%esp)
 8564191:	08 
 8564192:	8d 45 84             	lea    -0x7c(%ebp),%eax
 8564195:	89 04 24             	mov    %eax,(%esp)
 8564198:	e8 eb b5 fe ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 856419d:	bb 00 00 00 00       	mov    $0x0,%ebx
 85641a2:	e9 68 07 00 00       	jmp    856490f <_ZN8fair_pvp10CFairMatch11OnMatchRoomEP8PvP_Roomi+0x7bf>
 85641a7:	8b 45 08             	mov    0x8(%ebp),%eax
 85641aa:	8b 40 04             	mov    0x4(%eax),%eax
 85641ad:	83 f8 01             	cmp    $0x1,%eax
 85641b0:	74 0a                	je     85641bc <_ZN8fair_pvp10CFairMatch11OnMatchRoomEP8PvP_Roomi+0x6c>
 85641b2:	bb 00 00 00 00       	mov    $0x0,%ebx
 85641b7:	e9 53 07 00 00       	jmp    856490f <_ZN8fair_pvp10CFairMatch11OnMatchRoomEP8PvP_Roomi+0x7bf>
 85641bc:	e8 73 e6 ff ff       	call   8562834 <_ZN8fair_pvp10CFairMatch22GetPlayCountPerOneTeamEv>
 85641c1:	3c 01                	cmp    $0x1,%al
 85641c3:	0f 94 c0             	sete   %al
 85641c6:	0f b6 c0             	movzbl %al,%eax
 85641c9:	89 44 24 04          	mov    %eax,0x4(%esp)
 85641cd:	8b 45 0c             	mov    0xc(%ebp),%eax
 85641d0:	89 04 24             	mov    %eax,(%esp)
 85641d3:	e8 8a 4b 00 00       	call   8568d62 <_ZN8PvP_Room14setReamtchableEb>
 85641d8:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 85641df:	c7 45 80 00 00 00 00 	movl   $0x0,-0x80(%ebp)
 85641e6:	8b 45 0c             	mov    0xc(%ebp),%eax
 85641e9:	89 04 24             	mov    %eax,(%esp)
 85641ec:	e8 25 4b 00 00       	call   8568d16 <_ZNK8PvP_Room14GetManagerSeatEv>
 85641f1:	8b 55 08             	mov    0x8(%ebp),%edx
 85641f4:	89 82 b8 00 00 00    	mov    %eax,0xb8(%edx)
 85641fa:	c7 85 7c ff ff ff 00 	movl   $0x0,-0x84(%ebp)
 8564201:	00 00 00 
 8564204:	a1 48 e1 43 09       	mov    0x943e148,%eax
 8564209:	8b 00                	mov    (%eax),%eax
 856420b:	83 c0 08             	add    $0x8,%eax
 856420e:	8b 18                	mov    (%eax),%ebx
 8564210:	8b 55 08             	mov    0x8(%ebp),%edx
 8564213:	a1 48 e1 43 09       	mov    0x943e148,%eax
 8564218:	8d 8d 7c ff ff ff    	lea    -0x84(%ebp),%ecx
 856421e:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8564222:	89 54 24 04          	mov    %edx,0x4(%esp)
 8564226:	89 04 24             	mov    %eax,(%esp)
 8564229:	ff d3                	call   *%ebx
 856422b:	83 f0 01             	xor    $0x1,%eax
 856422e:	84 c0                	test   %al,%al
 8564230:	74 2f                	je     8564261 <_ZN8fair_pvp10CFairMatch11OnMatchRoomEP8PvP_Roomi+0x111>
 8564232:	8b 45 08             	mov    0x8(%ebp),%eax
 8564235:	c7 40 04 02 00 00 00 	movl   $0x2,0x4(%eax)
 856423c:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8564243:	00 
 8564244:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 856424b:	00 
 856424c:	8b 45 08             	mov    0x8(%ebp),%eax
 856424f:	89 04 24             	mov    %eax,(%esp)
 8564252:	e8 4f 0f 00 00       	call   85651a6 <_ZN8fair_pvp10CFairMatch21_SendMatchStatePacketEii>
 8564257:	bb 00 00 00 00       	mov    $0x0,%ebx
 856425c:	e9 ae 06 00 00       	jmp    856490f <_ZN8fair_pvp10CFairMatch11OnMatchRoomEP8PvP_Roomi+0x7bf>
 8564261:	c7 85 6c ff ff ff 00 	movl   $0x0,-0x94(%ebp)
 8564268:	00 00 00 
 856426b:	8b 85 7c ff ff ff    	mov    -0x84(%ebp),%eax
 8564271:	8d 95 6c ff ff ff    	lea    -0x94(%ebp),%edx
 8564277:	89 54 24 0c          	mov    %edx,0xc(%esp)
 856427b:	8b 55 0c             	mov    0xc(%ebp),%edx
 856427e:	89 54 24 08          	mov    %edx,0x8(%esp)
 8564282:	89 44 24 04          	mov    %eax,0x4(%esp)
 8564286:	8b 45 08             	mov    0x8(%ebp),%eax
 8564289:	89 04 24             	mov    %eax,(%esp)
 856428c:	e8 47 fc ff ff       	call   8563ed8 <_ZN8fair_pvp10CFairMatch17_CheckMovableRoomEP6IMatchP8PvP_RoomPS4_>
 8564291:	85 c0                	test   %eax,%eax
 8564293:	0f 94 c0             	sete   %al
 8564296:	84 c0                	test   %al,%al
 8564298:	0f 84 50 01 00 00    	je     85643ee <_ZN8fair_pvp10CFairMatch11OnMatchRoomEP8PvP_Roomi+0x29e>
 856429e:	8b 45 08             	mov    0x8(%ebp),%eax
 85642a1:	c7 40 04 02 00 00 00 	movl   $0x2,0x4(%eax)
 85642a8:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 85642af:	00 
 85642b0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85642b7:	00 
 85642b8:	8b 45 08             	mov    0x8(%ebp),%eax
 85642bb:	89 04 24             	mov    %eax,(%esp)
 85642be:	e8 e3 0e 00 00       	call   85651a6 <_ZN8fair_pvp10CFairMatch21_SendMatchStatePacketEii>
 85642c3:	8d 95 6d fe ff ff    	lea    -0x193(%ebp),%edx
 85642c9:	bb ff 00 00 00       	mov    $0xff,%ebx
 85642ce:	b8 00 00 00 00       	mov    $0x0,%eax
 85642d3:	89 d1                	mov    %edx,%ecx
 85642d5:	83 e1 01             	and    $0x1,%ecx
 85642d8:	85 c9                	test   %ecx,%ecx
 85642da:	74 08                	je     85642e4 <_ZN8fair_pvp10CFairMatch11OnMatchRoomEP8PvP_Roomi+0x194>
 85642dc:	88 02                	mov    %al,(%edx)
 85642de:	83 c2 01             	add    $0x1,%edx
 85642e1:	83 eb 01             	sub    $0x1,%ebx
 85642e4:	89 d1                	mov    %edx,%ecx
 85642e6:	83 e1 02             	and    $0x2,%ecx
 85642e9:	85 c9                	test   %ecx,%ecx
 85642eb:	74 09                	je     85642f6 <_ZN8fair_pvp10CFairMatch11OnMatchRoomEP8PvP_Roomi+0x1a6>
 85642ed:	66 89 02             	mov    %ax,(%edx)
 85642f0:	83 c2 02             	add    $0x2,%edx
 85642f3:	83 eb 02             	sub    $0x2,%ebx
 85642f6:	89 d9                	mov    %ebx,%ecx
 85642f8:	c1 e9 02             	shr    $0x2,%ecx
 85642fb:	89 d7                	mov    %edx,%edi
 85642fd:	f3 ab                	rep stos %eax,%es:(%edi)
 85642ff:	89 fa                	mov    %edi,%edx
 8564301:	89 d9                	mov    %ebx,%ecx
 8564303:	83 e1 02             	and    $0x2,%ecx
 8564306:	85 c9                	test   %ecx,%ecx
 8564308:	74 06                	je     8564310 <_ZN8fair_pvp10CFairMatch11OnMatchRoomEP8PvP_Roomi+0x1c0>
 856430a:	66 89 02             	mov    %ax,(%edx)
 856430d:	83 c2 02             	add    $0x2,%edx
 8564310:	89 d9                	mov    %ebx,%ecx
 8564312:	83 e1 01             	and    $0x1,%ecx
 8564315:	85 c9                	test   %ecx,%ecx
 8564317:	74 05                	je     856431e <_ZN8fair_pvp10CFairMatch11OnMatchRoomEP8PvP_Roomi+0x1ce>
 8564319:	88 02                	mov    %al,(%edx)
 856431b:	83 c2 01             	add    $0x1,%edx
 856431e:	8b 45 08             	mov    0x8(%ebp),%eax
 8564321:	8d 95 6d fe ff ff    	lea    -0x193(%ebp),%edx
 8564327:	89 54 24 04          	mov    %edx,0x4(%esp)
 856432b:	89 04 24             	mov    %eax,(%esp)
 856432e:	e8 c4 fc ff ff       	call   8563ff7 <_Z11GetUserNameP6IMatchPc>
 8564333:	89 c3                	mov    %eax,%ebx
 8564335:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 856433c:	00 
 856433d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8564344:	00 
 8564345:	c7 44 24 08 b0 0c 00 	movl   $0xcb0,0x8(%esp)
 856434c:	00 
 856434d:	c7 44 24 04 00 38 ca 	movl   $0x8ca3800,0x4(%esp)
 8564354:	08 
 8564355:	8d 45 94             	lea    -0x6c(%ebp),%eax
 8564358:	89 04 24             	mov    %eax,(%esp)
 856435b:	e8 dc b9 fe ff       	call   854fd3c <_ZN10CSwitchLogC1EPKciii>
 8564360:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8564364:	8b 45 08             	mov    0x8(%ebp),%eax
 8564367:	89 44 24 08          	mov    %eax,0x8(%esp)
 856436b:	c7 44 24 04 c1 23 ca 	movl   $0x8ca23c1,0x4(%esp)
 8564372:	08 
 8564373:	8d 45 94             	lea    -0x6c(%ebp),%eax
 8564376:	89 04 24             	mov    %eax,(%esp)
 8564379:	e8 e6 b9 fe ff       	call   854fd64 <_ZN10CSwitchLogclEPKcz>
 856437e:	8b 85 7c ff ff ff    	mov    -0x84(%ebp),%eax
 8564384:	8d 95 6d fe ff ff    	lea    -0x193(%ebp),%edx
 856438a:	89 54 24 04          	mov    %edx,0x4(%esp)
 856438e:	89 04 24             	mov    %eax,(%esp)
 8564391:	e8 61 fc ff ff       	call   8563ff7 <_Z11GetUserNameP6IMatchPc>
 8564396:	89 c3                	mov    %eax,%ebx
 8564398:	8b b5 7c ff ff ff    	mov    -0x84(%ebp),%esi
 856439e:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 85643a5:	00 
 85643a6:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 85643ad:	00 
 85643ae:	c7 44 24 08 b1 0c 00 	movl   $0xcb1,0x8(%esp)
 85643b5:	00 
 85643b6:	c7 44 24 04 00 38 ca 	movl   $0x8ca3800,0x4(%esp)
 85643bd:	08 
 85643be:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 85643c1:	89 04 24             	mov    %eax,(%esp)
 85643c4:	e8 73 b9 fe ff       	call   854fd3c <_ZN10CSwitchLogC1EPKciii>
 85643c9:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 85643cd:	89 74 24 08          	mov    %esi,0x8(%esp)
 85643d1:	c7 44 24 04 e0 23 ca 	movl   $0x8ca23e0,0x4(%esp)
 85643d8:	08 
 85643d9:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 85643dc:	89 04 24             	mov    %eax,(%esp)
 85643df:	e8 80 b9 fe ff       	call   854fd64 <_ZN10CSwitchLogclEPKcz>
 85643e4:	bb 00 00 00 00       	mov    $0x0,%ebx
 85643e9:	e9 21 05 00 00       	jmp    856490f <_ZN8fair_pvp10CFairMatch11OnMatchRoomEP8PvP_Roomi+0x7bf>
 85643ee:	8b 45 0c             	mov    0xc(%ebp),%eax
 85643f1:	89 04 24             	mov    %eax,(%esp)
 85643f4:	e8 9b 95 cc ff       	call   822d994 <_ZN8PvP_Room9get_indexEv>
 85643f9:	89 c3                	mov    %eax,%ebx
 85643fb:	8b 85 6c ff ff ff    	mov    -0x94(%ebp),%eax
 8564401:	89 04 24             	mov    %eax,(%esp)
 8564404:	e8 8b 95 cc ff       	call   822d994 <_ZN8PvP_Room9get_indexEv>
 8564409:	39 c3                	cmp    %eax,%ebx
 856440b:	0f 94 c0             	sete   %al
 856440e:	84 c0                	test   %al,%al
 8564410:	0f 84 50 01 00 00    	je     8564566 <_ZN8fair_pvp10CFairMatch11OnMatchRoomEP8PvP_Roomi+0x416>
 8564416:	8b 45 08             	mov    0x8(%ebp),%eax
 8564419:	c7 40 04 02 00 00 00 	movl   $0x2,0x4(%eax)
 8564420:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8564427:	00 
 8564428:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 856442f:	00 
 8564430:	8b 45 08             	mov    0x8(%ebp),%eax
 8564433:	89 04 24             	mov    %eax,(%esp)
 8564436:	e8 6b 0d 00 00       	call   85651a6 <_ZN8fair_pvp10CFairMatch21_SendMatchStatePacketEii>
 856443b:	8d 95 6d fe ff ff    	lea    -0x193(%ebp),%edx
 8564441:	bb ff 00 00 00       	mov    $0xff,%ebx
 8564446:	b8 00 00 00 00       	mov    $0x0,%eax
 856444b:	89 d1                	mov    %edx,%ecx
 856444d:	83 e1 01             	and    $0x1,%ecx
 8564450:	85 c9                	test   %ecx,%ecx
 8564452:	74 08                	je     856445c <_ZN8fair_pvp10CFairMatch11OnMatchRoomEP8PvP_Roomi+0x30c>
 8564454:	88 02                	mov    %al,(%edx)
 8564456:	83 c2 01             	add    $0x1,%edx
 8564459:	83 eb 01             	sub    $0x1,%ebx
 856445c:	89 d1                	mov    %edx,%ecx
 856445e:	83 e1 02             	and    $0x2,%ecx
 8564461:	85 c9                	test   %ecx,%ecx
 8564463:	74 09                	je     856446e <_ZN8fair_pvp10CFairMatch11OnMatchRoomEP8PvP_Roomi+0x31e>
 8564465:	66 89 02             	mov    %ax,(%edx)
 8564468:	83 c2 02             	add    $0x2,%edx
 856446b:	83 eb 02             	sub    $0x2,%ebx
 856446e:	89 d9                	mov    %ebx,%ecx
 8564470:	c1 e9 02             	shr    $0x2,%ecx
 8564473:	89 d7                	mov    %edx,%edi
 8564475:	f3 ab                	rep stos %eax,%es:(%edi)
 8564477:	89 fa                	mov    %edi,%edx
 8564479:	89 d9                	mov    %ebx,%ecx
 856447b:	83 e1 02             	and    $0x2,%ecx
 856447e:	85 c9                	test   %ecx,%ecx
 8564480:	74 06                	je     8564488 <_ZN8fair_pvp10CFairMatch11OnMatchRoomEP8PvP_Roomi+0x338>
 8564482:	66 89 02             	mov    %ax,(%edx)
 8564485:	83 c2 02             	add    $0x2,%edx
 8564488:	89 d9                	mov    %ebx,%ecx
 856448a:	83 e1 01             	and    $0x1,%ecx
 856448d:	85 c9                	test   %ecx,%ecx
 856448f:	74 05                	je     8564496 <_ZN8fair_pvp10CFairMatch11OnMatchRoomEP8PvP_Roomi+0x346>
 8564491:	88 02                	mov    %al,(%edx)
 8564493:	83 c2 01             	add    $0x1,%edx
 8564496:	8b 45 08             	mov    0x8(%ebp),%eax
 8564499:	8d 95 6d fe ff ff    	lea    -0x193(%ebp),%edx
 856449f:	89 54 24 04          	mov    %edx,0x4(%esp)
 85644a3:	89 04 24             	mov    %eax,(%esp)
 85644a6:	e8 4c fb ff ff       	call   8563ff7 <_Z11GetUserNameP6IMatchPc>
 85644ab:	89 c3                	mov    %eax,%ebx
 85644ad:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 85644b4:	00 
 85644b5:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 85644bc:	00 
 85644bd:	c7 44 24 08 bb 0c 00 	movl   $0xcbb,0x8(%esp)
 85644c4:	00 
 85644c5:	c7 44 24 04 00 38 ca 	movl   $0x8ca3800,0x4(%esp)
 85644cc:	08 
 85644cd:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 85644d0:	89 04 24             	mov    %eax,(%esp)
 85644d3:	e8 64 b8 fe ff       	call   854fd3c <_ZN10CSwitchLogC1EPKciii>
 85644d8:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 85644dc:	8b 45 08             	mov    0x8(%ebp),%eax
 85644df:	89 44 24 08          	mov    %eax,0x8(%esp)
 85644e3:	c7 44 24 04 02 24 ca 	movl   $0x8ca2402,0x4(%esp)
 85644ea:	08 
 85644eb:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 85644ee:	89 04 24             	mov    %eax,(%esp)
 85644f1:	e8 6e b8 fe ff       	call   854fd64 <_ZN10CSwitchLogclEPKcz>
 85644f6:	8b 85 7c ff ff ff    	mov    -0x84(%ebp),%eax
 85644fc:	8d 95 6d fe ff ff    	lea    -0x193(%ebp),%edx
 8564502:	89 54 24 04          	mov    %edx,0x4(%esp)
 8564506:	89 04 24             	mov    %eax,(%esp)
 8564509:	e8 e9 fa ff ff       	call   8563ff7 <_Z11GetUserNameP6IMatchPc>
 856450e:	89 c3                	mov    %eax,%ebx
 8564510:	8b b5 7c ff ff ff    	mov    -0x84(%ebp),%esi
 8564516:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 856451d:	00 
 856451e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8564525:	00 
 8564526:	c7 44 24 08 bc 0c 00 	movl   $0xcbc,0x8(%esp)
 856452d:	00 
 856452e:	c7 44 24 04 00 38 ca 	movl   $0x8ca3800,0x4(%esp)
 8564535:	08 
 8564536:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8564539:	89 04 24             	mov    %eax,(%esp)
 856453c:	e8 fb b7 fe ff       	call   854fd3c <_ZN10CSwitchLogC1EPKciii>
 8564541:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8564545:	89 74 24 08          	mov    %esi,0x8(%esp)
 8564549:	c7 44 24 04 20 24 ca 	movl   $0x8ca2420,0x4(%esp)
 8564550:	08 
 8564551:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8564554:	89 04 24             	mov    %eax,(%esp)
 8564557:	e8 08 b8 fe ff       	call   854fd64 <_ZN10CSwitchLogclEPKcz>
 856455c:	bb 00 00 00 00       	mov    $0x0,%ebx
 8564561:	e9 a9 03 00 00       	jmp    856490f <_ZN8fair_pvp10CFairMatch11OnMatchRoomEP8PvP_Roomi+0x7bf>
 8564566:	8b 45 08             	mov    0x8(%ebp),%eax
 8564569:	83 c0 64             	add    $0x64,%eax
 856456c:	89 04 24             	mov    %eax,(%esp)
 856456f:	e8 0e e0 ff ff       	call   8562582 <_ZN8fair_pvp13TeamInfoThird5resetEv>
 8564574:	8b 45 08             	mov    0x8(%ebp),%eax
 8564577:	c7 40 04 03 00 00 00 	movl   $0x3,0x4(%eax)
 856457e:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 8564585:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 856458c:	e9 8d 01 00 00       	jmp    856471e <_ZN8fair_pvp10CFairMatch11OnMatchRoomEP8PvP_Roomi+0x5ce>
 8564591:	8b 85 7c ff ff ff    	mov    -0x84(%ebp),%eax
 8564597:	8d 55 80             	lea    -0x80(%ebp),%edx
 856459a:	89 54 24 0c          	mov    %edx,0xc(%esp)
 856459e:	8b 55 0c             	mov    0xc(%ebp),%edx
 85645a1:	89 54 24 08          	mov    %edx,0x8(%esp)
 85645a5:	89 44 24 04          	mov    %eax,0x4(%esp)
 85645a9:	8b 45 08             	mov    0x8(%ebp),%eax
 85645ac:	89 04 24             	mov    %eax,(%esp)
 85645af:	e8 24 f9 ff ff       	call   8563ed8 <_ZN8fair_pvp10CFairMatch17_CheckMovableRoomEP6IMatchP8PvP_RoomPS4_>
 85645b4:	85 c0                	test   %eax,%eax
 85645b6:	0f 94 c0             	sete   %al
 85645b9:	84 c0                	test   %al,%al
 85645bb:	74 2f                	je     85645ec <_ZN8fair_pvp10CFairMatch11OnMatchRoomEP8PvP_Roomi+0x49c>
 85645bd:	8b 45 08             	mov    0x8(%ebp),%eax
 85645c0:	c7 40 04 02 00 00 00 	movl   $0x2,0x4(%eax)
 85645c7:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 85645ce:	00 
 85645cf:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85645d6:	00 
 85645d7:	8b 45 08             	mov    0x8(%ebp),%eax
 85645da:	89 04 24             	mov    %eax,(%esp)
 85645dd:	e8 c4 0b 00 00       	call   85651a6 <_ZN8fair_pvp10CFairMatch21_SendMatchStatePacketEii>
 85645e2:	bb 00 00 00 00       	mov    $0x0,%ebx
 85645e7:	e9 23 03 00 00       	jmp    856490f <_ZN8fair_pvp10CFairMatch11OnMatchRoomEP8PvP_Roomi+0x7bf>
 85645ec:	8b 45 08             	mov    0x8(%ebp),%eax
 85645ef:	8b 00                	mov    (%eax),%eax
 85645f1:	05 84 00 00 00       	add    $0x84,%eax
 85645f6:	8b 10                	mov    (%eax),%edx
 85645f8:	8b 45 08             	mov    0x8(%ebp),%eax
 85645fb:	89 04 24             	mov    %eax,(%esp)
 85645fe:	ff d2                	call   *%edx
 8564600:	89 c3                	mov    %eax,%ebx
 8564602:	e8 2d e2 ff ff       	call   8562834 <_ZN8fair_pvp10CFairMatch22GetPlayCountPerOneTeamEv>
 8564607:	0f b6 c0             	movzbl %al,%eax
 856460a:	39 c3                	cmp    %eax,%ebx
 856460c:	0f 94 c0             	sete   %al
 856460f:	84 c0                	test   %al,%al
 8564611:	74 27                	je     856463a <_ZN8fair_pvp10CFairMatch11OnMatchRoomEP8PvP_Roomi+0x4ea>
 8564613:	c7 45 d8 01 00 00 00 	movl   $0x1,-0x28(%ebp)
 856461a:	8b 45 80             	mov    -0x80(%ebp),%eax
 856461d:	89 04 24             	mov    %eax,(%esp)
 8564620:	e8 e5 46 00 00       	call   8568d0a <_ZNK8PvP_Room10GetManagerEv>
 8564625:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8564628:	8b 45 80             	mov    -0x80(%ebp),%eax
 856462b:	89 44 24 04          	mov    %eax,0x4(%esp)
 856462f:	8b 45 08             	mov    0x8(%ebp),%eax
 8564632:	89 04 24             	mov    %eax,(%esp)
 8564635:	e8 3a f0 ff ff       	call   8563674 <_ZN8fair_pvp10CFairMatch15_BackupRoomInfoEP8PvP_Room>
 856463a:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8564641:	eb 6e                	jmp    85646b1 <_ZN8fair_pvp10CFairMatch11OnMatchRoomEP8PvP_Roomi+0x561>
 8564643:	8b 85 7c ff ff ff    	mov    -0x84(%ebp),%eax
 8564649:	8b 55 e0             	mov    -0x20(%ebp),%edx
 856464c:	83 c2 01             	add    $0x1,%edx
 856464f:	c1 e2 04             	shl    $0x4,%edx
 8564652:	0f b6 44 02 18       	movzbl 0x18(%edx,%eax,1),%eax
 8564657:	84 c0                	test   %al,%al
 8564659:	74 52                	je     85646ad <_ZN8fair_pvp10CFairMatch11OnMatchRoomEP8PvP_Roomi+0x55d>
 856465b:	8b 85 7c ff ff ff    	mov    -0x84(%ebp),%eax
 8564661:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8564664:	83 c2 01             	add    $0x1,%edx
 8564667:	c1 e2 04             	shl    $0x4,%edx
 856466a:	01 d0                	add    %edx,%eax
 856466c:	83 c0 14             	add    $0x14,%eax
 856466f:	8b 00                	mov    (%eax),%eax
 8564671:	85 c0                	test   %eax,%eax
 8564673:	74 38                	je     85646ad <_ZN8fair_pvp10CFairMatch11OnMatchRoomEP8PvP_Roomi+0x55d>
 8564675:	8b 85 7c ff ff ff    	mov    -0x84(%ebp),%eax
 856467b:	8b 55 e0             	mov    -0x20(%ebp),%edx
 856467e:	83 c2 01             	add    $0x1,%edx
 8564681:	c1 e2 04             	shl    $0x4,%edx
 8564684:	01 d0                	add    %edx,%eax
 8564686:	83 c0 14             	add    $0x14,%eax
 8564689:	8b 08                	mov    (%eax),%ecx
 856468b:	8b 55 d8             	mov    -0x28(%ebp),%edx
 856468e:	89 d0                	mov    %edx,%eax
 8564690:	c1 e0 03             	shl    $0x3,%eax
 8564693:	01 d0                	add    %edx,%eax
 8564695:	c1 e0 03             	shl    $0x3,%eax
 8564698:	83 c0 10             	add    $0x10,%eax
 856469b:	03 45 08             	add    0x8(%ebp),%eax
 856469e:	83 c0 0c             	add    $0xc,%eax
 85646a1:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 85646a5:	89 04 24             	mov    %eax,(%esp)
 85646a8:	e8 19 df ff ff       	call   85625c6 <_ZN8fair_pvp13TeamInfoThird3addEP5CUser>
 85646ad:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 85646b1:	83 7d e0 03          	cmpl   $0x3,-0x20(%ebp)
 85646b5:	0f 9e c0             	setle  %al
 85646b8:	84 c0                	test   %al,%al
 85646ba:	75 87                	jne    8564643 <_ZN8fair_pvp10CFairMatch11OnMatchRoomEP8PvP_Roomi+0x4f3>
 85646bc:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 85646c3:	00 
 85646c4:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 85646cb:	00 
 85646cc:	8b 45 08             	mov    0x8(%ebp),%eax
 85646cf:	89 04 24             	mov    %eax,(%esp)
 85646d2:	e8 cf 0a 00 00       	call   85651a6 <_ZN8fair_pvp10CFairMatch21_SendMatchStatePacketEii>
 85646d7:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 85646db:	0f 94 c0             	sete   %al
 85646de:	0f b6 d0             	movzbl %al,%edx
 85646e1:	8b 45 80             	mov    -0x80(%ebp),%eax
 85646e4:	89 54 24 0c          	mov    %edx,0xc(%esp)
 85646e8:	89 44 24 08          	mov    %eax,0x8(%esp)
 85646ec:	8b 45 0c             	mov    0xc(%ebp),%eax
 85646ef:	89 44 24 04          	mov    %eax,0x4(%esp)
 85646f3:	8b 45 08             	mov    0x8(%ebp),%eax
 85646f6:	89 04 24             	mov    %eax,(%esp)
 85646f9:	e8 34 f6 ff ff       	call   8563d32 <_ZN8fair_pvp10CFairMatch9_MoveRoomEP8PvP_RoomS2_b>
 85646fe:	8b 85 7c ff ff ff    	mov    -0x84(%ebp),%eax
 8564704:	8b 00                	mov    (%eax),%eax
 8564706:	05 88 00 00 00       	add    $0x88,%eax
 856470b:	8b 10                	mov    (%eax),%edx
 856470d:	8b 85 7c ff ff ff    	mov    -0x84(%ebp),%eax
 8564713:	89 04 24             	mov    %eax,(%esp)
 8564716:	ff d2                	call   *%edx
 8564718:	89 85 7c ff ff ff    	mov    %eax,-0x84(%ebp)
 856471e:	8b 85 7c ff ff ff    	mov    -0x84(%ebp),%eax
 8564724:	85 c0                	test   %eax,%eax
 8564726:	0f 95 c0             	setne  %al
 8564729:	84 c0                	test   %al,%al
 856472b:	0f 85 60 fe ff ff    	jne    8564591 <_ZN8fair_pvp10CFairMatch11OnMatchRoomEP8PvP_Roomi+0x441>
 8564731:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8564734:	89 44 24 04          	mov    %eax,0x4(%esp)
 8564738:	8b 45 0c             	mov    0xc(%ebp),%eax
 856473b:	89 04 24             	mov    %eax,(%esp)
 856473e:	e8 9f 4a 07 00       	call   85d91e2 <_ZN8PvP_Room13get_user_seatEP5CUser>
 8564743:	8b 55 08             	mov    0x8(%ebp),%edx
 8564746:	89 82 bc 00 00 00    	mov    %eax,0xbc(%edx)
 856474c:	a1 48 e1 43 09       	mov    0x943e148,%eax
 8564751:	8b 00                	mov    (%eax),%eax
 8564753:	83 c0 04             	add    $0x4,%eax
 8564756:	8b 08                	mov    (%eax),%ecx
 8564758:	8b 55 08             	mov    0x8(%ebp),%edx
 856475b:	a1 48 e1 43 09       	mov    0x943e148,%eax
 8564760:	89 54 24 04          	mov    %edx,0x4(%esp)
 8564764:	89 04 24             	mov    %eax,(%esp)
 8564767:	ff d1                	call   *%ecx
 8564769:	8b 45 08             	mov    0x8(%ebp),%eax
 856476c:	c7 40 04 04 00 00 00 	movl   $0x4,0x4(%eax)
 8564773:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 856477a:	00 
 856477b:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8564782:	00 
 8564783:	8b 45 08             	mov    0x8(%ebp),%eax
 8564786:	89 04 24             	mov    %eax,(%esp)
 8564789:	e8 18 0a 00 00       	call   85651a6 <_ZN8fair_pvp10CFairMatch21_SendMatchStatePacketEii>
 856478e:	8b 45 08             	mov    0x8(%ebp),%eax
 8564791:	c7 80 ac 00 00 00 00 	movl   $0x0,0xac(%eax)
 8564798:	00 00 00 
 856479b:	c7 44 24 04 3b 00 00 	movl   $0x3b,0x4(%esp)
 85647a2:	00 
 85647a3:	8b 45 0c             	mov    0xc(%ebp),%eax
 85647a6:	89 04 24             	mov    %eax,(%esp)
 85647a9:	e8 e2 45 00 00       	call   8568d90 <_ZN8PvP_Room13gen_timer_keyE13TIMER_MESSAGE>
 85647ae:	89 c6                	mov    %eax,%esi
 85647b0:	8b 45 0c             	mov    0xc(%ebp),%eax
 85647b3:	89 04 24             	mov    %eax,(%esp)
 85647b6:	e8 d9 91 cc ff       	call   822d994 <_ZN8PvP_Room9get_indexEv>
 85647bb:	89 c3                	mov    %eax,%ebx
 85647bd:	e8 ba 1c b9 ff       	call   80f647c <_Z12G_TimerQueuev>
 85647c2:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 85647c9:	00 
 85647ca:	89 74 24 14          	mov    %esi,0x14(%esp)
 85647ce:	c7 44 24 10 b4 00 00 	movl   $0xb4,0x10(%esp)
 85647d5:	00 
 85647d6:	c7 44 24 0c 3b 00 00 	movl   $0x3b,0xc(%esp)
 85647dd:	00 
 85647de:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85647e2:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 85647e9:	00 
 85647ea:	89 04 24             	mov    %eax,(%esp)
 85647ed:	e8 24 c6 0c 00       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 85647f2:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 85647f8:	89 04 24             	mov    %eax,(%esp)
 85647fb:	e8 4c 95 02 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8564800:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 8564806:	c7 44 24 08 ff ff 00 	movl   $0xffff,0x8(%esp)
 856480d:	00 
 856480e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8564812:	8b 45 0c             	mov    0xc(%ebp),%eax
 8564815:	89 04 24             	mov    %eax,(%esp)
 8564818:	e8 c5 71 07 00       	call   85db9e2 <_ZN8PvP_Room14make_seat_infoEPci>
 856481d:	e8 85 5b b7 ff       	call   80da3a7 <_Z11G_GameWorldv>
 8564822:	8d 95 70 ff ff ff    	lea    -0x90(%ebp),%edx
 8564828:	89 54 24 04          	mov    %edx,0x4(%esp)
 856482c:	89 04 24             	mov    %eax,(%esp)
 856482f:	e8 e0 43 16 00       	call   86c8c14 <_ZN9GameWorld8send_allER11PacketGuard>
 8564834:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 856483b:	e9 8d 00 00 00       	jmp    85648cd <_ZN8fair_pvp10CFairMatch11OnMatchRoomEP8PvP_Roomi+0x77d>
 8564840:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 8564846:	89 04 24             	mov    %eax,(%esp)
 8564849:	e8 98 70 b6 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 856484e:	c7 44 24 08 3d 01 00 	movl   $0x13d,0x8(%esp)
 8564855:	00 
 8564856:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 856485d:	00 
 856485e:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 8564864:	89 04 24             	mov    %eax,(%esp)
 8564867:	e8 90 70 b6 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 856486c:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 856486f:	8b 45 08             	mov    0x8(%ebp),%eax
 8564872:	83 c2 2c             	add    $0x2c,%edx
 8564875:	8b 44 90 08          	mov    0x8(%eax,%edx,4),%eax
 8564879:	89 44 24 04          	mov    %eax,0x4(%esp)
 856487d:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 8564883:	89 04 24             	mov    %eax,(%esp)
 8564886:	e8 19 56 b7 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 856488b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8564892:	00 
 8564893:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 8564899:	89 04 24             	mov    %eax,(%esp)
 856489c:	e8 b7 70 b6 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 85648a1:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 85648a4:	89 d0                	mov    %edx,%eax
 85648a6:	c1 e0 03             	shl    $0x3,%eax
 85648a9:	01 d0                	add    %edx,%eax
 85648ab:	c1 e0 03             	shl    $0x3,%eax
 85648ae:	83 c0 10             	add    $0x10,%eax
 85648b1:	03 45 08             	add    0x8(%ebp),%eax
 85648b4:	8d 50 0c             	lea    0xc(%eax),%edx
 85648b7:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 85648bd:	89 44 24 04          	mov    %eax,0x4(%esp)
 85648c1:	89 14 24             	mov    %edx,(%esp)
 85648c4:	e8 83 de ff ff       	call   856274c <_ZN8fair_pvp13TeamInfoThird10SendToTeamER11PacketGuard>
 85648c9:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 85648cd:	83 7d e4 01          	cmpl   $0x1,-0x1c(%ebp)
 85648d1:	0f 9e c0             	setle  %al
 85648d4:	84 c0                	test   %al,%al
 85648d6:	0f 85 64 ff ff ff    	jne    8564840 <_ZN8fair_pvp10CFairMatch11OnMatchRoomEP8PvP_Roomi+0x6f0>
 85648dc:	bb 01 00 00 00       	mov    $0x1,%ebx
 85648e1:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 85648e7:	89 04 24             	mov    %eax,(%esp)
 85648ea:	e8 91 95 02 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 85648ef:	eb 1e                	jmp    856490f <_ZN8fair_pvp10CFairMatch11OnMatchRoomEP8PvP_Roomi+0x7bf>
 85648f1:	89 d3                	mov    %edx,%ebx
 85648f3:	89 c6                	mov    %eax,%esi
 85648f5:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 85648fb:	89 04 24             	mov    %eax,(%esp)
 85648fe:	e8 7d 95 02 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8564903:	89 f0                	mov    %esi,%eax
 8564905:	89 da                	mov    %ebx,%edx
 8564907:	89 04 24             	mov    %eax,(%esp)
 856490a:	e8 41 ee 57 00       	call   8ae3750 <_Unwind_Resume>
 856490f:	89 d8                	mov    %ebx,%eax
 8564911:	81 c4 ac 01 00 00    	add    $0x1ac,%esp
 8564917:	5b                   	pop    %ebx
 8564918:	5e                   	pop    %esi
 8564919:	5f                   	pop    %edi
 856491a:	5d                   	pop    %ebp
 856491b:	c3                   	ret

```

```c
// fair_pvp::CFairMatch::OnMatchRoom @ 0x8564150

/* fair_pvp::CFairMatch::OnMatchRoom(PvP_Room*, int) */

undefined4 __thiscall
fair_pvp::CFairMatch::OnMatchRoom(CFairMatch *this,PvP_Room *param_1,int param_2)

{
  IMatch *pIVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  TimerQueue *pTVar6;
  GameWorld *this_00;
  uint uVar7;
  char *pcVar8;
  undefined4 uVar9;
  uint uVar10;
  bool bVar11;
  byte bVar12;
  char local_197;
  char local_196 [254];
  PvP_Room *local_98;
  PacketGuard local_94 [12];
  IMatch *local_88;
  PvP_Room *local_84;
  cMyTrace local_80 [16];
  CSwitchLog local_70 [16];
  CSwitchLog local_60 [16];
  CSwitchLog local_50 [16];
  CSwitchLog local_40 [16];
  undefined4 local_30;
  int local_2c;
  CUser *local_28;
  int local_24;
  int local_20;
  
  bVar12 = 0;
  if (*(int *)(this + 0x18) == param_2) {
    if (*(int *)(this + 4) == 1) {
      cVar2 = GetPlayCountPerOneTeam();
      PvP_Room::setReamtchable(param_1,cVar2 == '\x01');
      local_30 = 0;
      local_84 = (PvP_Room *)0x0;
      uVar9 = PvP_Room::GetManagerSeat(param_1);
      *(undefined4 *)(this + 0xb8) = uVar9;
      local_88 = (IMatch *)0x0;
      cVar2 = (**(code **)(*pWaitingRoomList_ + 8))(pWaitingRoomList_,this,&local_88);
      if (cVar2 == '\x01') {
        local_98 = (PvP_Room *)0x0;
        iVar3 = _CheckMovableRoom(this,local_88,param_1,&local_98);
        if (iVar3 == 0) {
          *(undefined4 *)(this + 4) = 2;
          _SendMatchStatePacket(this,1,1);
          pcVar8 = &local_197;
          uVar10 = 0xff;
          bVar11 = ((uint)pcVar8 & 1) != 0;
          if (bVar11) {
            local_197 = '\0';
            pcVar8 = local_196;
            uVar10 = 0xfe;
          }
          if (((uint)pcVar8 & 2) != 0) {
            pcVar8[0] = '\0';
            pcVar8[1] = '\0';
            pcVar8 = pcVar8 + 2;
            uVar10 = uVar10 - 2;
          }
          for (uVar7 = uVar10 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            pcVar8[0] = '\0';
            pcVar8[1] = '\0';
            pcVar8[2] = '\0';
            pcVar8[3] = '\0';
            pcVar8 = pcVar8 + ((uint)bVar12 * -2 + 1) * 4;
          }
          if ((uVar10 & 2) != 0) {
            pcVar8[0] = '\0';
            pcVar8[1] = '\0';
            pcVar8 = pcVar8 + 2;
          }
          if (!bVar11) {
            *pcVar8 = '\0';
          }
          uVar9 = GetUserName((IMatch *)this,&local_197);
          CSwitchLog::CSwitchLog
                    (local_70,"virtual bool fair_pvp::CFairMatch::OnMatchRoom(PvP_Room*, int)",0xcb0
                     ,0,0);
          CSwitchLog::operator()(local_70,"pvp@log 1 call match(%x), %s ",this,uVar9);
          uVar9 = GetUserName(local_88,&local_197);
          pIVar1 = local_88;
          CSwitchLog::CSwitchLog
                    (local_60,"virtual bool fair_pvp::CFairMatch::OnMatchRoom(PvP_Room*, int)",0xcb1
                     ,0,0);
          CSwitchLog::operator()(local_60,"pvp@log 1 opposite match(%x), %s ",pIVar1,uVar9);
          uVar9 = 0;
        }
        else {
          iVar3 = PvP_Room::get_index(param_1);
          iVar4 = PvP_Room::get_index(local_98);
          if (iVar3 == iVar4) {
            *(undefined4 *)(this + 4) = 2;
            _SendMatchStatePacket(this,1,1);
            pcVar8 = &local_197;
            uVar10 = 0xff;
            bVar11 = ((uint)pcVar8 & 1) != 0;
            if (bVar11) {
              local_197 = '\0';
              pcVar8 = local_196;
              uVar10 = 0xfe;
            }
            if (((uint)pcVar8 & 2) != 0) {
              pcVar8[0] = '\0';
              pcVar8[1] = '\0';
              pcVar8 = pcVar8 + 2;
              uVar10 = uVar10 - 2;
            }
            for (uVar7 = uVar10 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
              pcVar8[0] = '\0';
              pcVar8[1] = '\0';
              pcVar8[2] = '\0';
              pcVar8[3] = '\0';
              pcVar8 = pcVar8 + ((uint)bVar12 * -2 + 1) * 4;
            }
            if ((uVar10 & 2) != 0) {
              pcVar8[0] = '\0';
              pcVar8[1] = '\0';
              pcVar8 = pcVar8 + 2;
            }
            if (!bVar11) {
              *pcVar8 = '\0';
            }
            uVar9 = GetUserName((IMatch *)this,&local_197);
            CSwitchLog::CSwitchLog
                      (local_50,"virtual bool fair_pvp::CFairMatch::OnMatchRoom(PvP_Room*, int)",
                       0xcbb,0,0);
            CSwitchLog::operator()(local_50,"pvp@log 2 call match(%x), %s ",this,uVar9);
            uVar9 = GetUserName(local_88,&local_197);
            pIVar1 = local_88;
            CSwitchLog::CSwitchLog
                      (local_40,"virtual bool fair_pvp::CFairMatch::OnMatchRoom(PvP_Room*, int)",
                       0xcbc,0,0);
            CSwitchLog::operator()(local_40,"pvp@log 2 opposite match(%x), %s ",pIVar1,uVar9);
            uVar9 = 0;
          }
          else {
            TeamInfoThird::reset((TeamInfoThird *)(this + 100));
            *(undefined4 *)(this + 4) = 3;
            local_2c = 0;
            local_28 = (CUser *)0x0;
            for (; local_88 != (IMatch *)0x0;
                local_88 = (IMatch *)(**(code **)(*(int *)local_88 + 0x88))(local_88)) {
              iVar3 = _CheckMovableRoom(this,local_88,param_1,&local_84);
              if (iVar3 == 0) {
                *(undefined4 *)(this + 4) = 2;
                _SendMatchStatePacket(this,1,1);
                return 0;
              }
              uVar10 = (**(code **)(*(int *)this + 0x84))(this);
              uVar7 = GetPlayCountPerOneTeam();
              if (uVar10 == (uVar7 & 0xff)) {
                local_2c = 1;
                local_28 = (CUser *)PvP_Room::GetManager(local_84);
                _BackupRoomInfo(this,local_84);
              }
              for (local_24 = 0; local_24 < 4; local_24 = local_24 + 1) {
                if ((local_88[(local_24 + 1) * 0x10 + 0x18] != (IMatch)0x0) &&
                   (*(int *)(local_88 + (local_24 + 1) * 0x10 + 0x14) != 0)) {
                  TeamInfoThird::add((TeamInfoThird *)(this + local_2c * 0x48 + 0x1c),
                                     *(CUser **)(local_88 + (local_24 + 1) * 0x10 + 0x14));
                }
              }
              _SendMatchStatePacket(this,3,2);
              _MoveRoom(this,param_1,local_84,local_2c == 0);
            }
            uVar9 = PvP_Room::get_user_seat(param_1,local_28);
            *(undefined4 *)(this + 0xbc) = uVar9;
            (**(code **)(*pWaitingRoomList_ + 4))(pWaitingRoomList_,this);
            *(undefined4 *)(this + 4) = 4;
            _SendMatchStatePacket(this,2,2);
            *(undefined4 *)(this + 0xac) = 0;
            uVar9 = PvP_Room::gen_timer_key(param_1,0x3b);
            uVar5 = PvP_Room::get_index(param_1);
            pTVar6 = (TimerQueue *)G_TimerQueue();
            TimerQueue::InsertTimer(pTVar6,5,uVar5,0x3b,0xb4,uVar9,0);
            PacketGuard::PacketGuard(local_94);
                    /* try { // try from 08564818 to 085648c8 has its CatchHandler @ 085648f1 */
            PvP_Room::make_seat_info(param_1,(char *)local_94,0xffff);
            this_00 = (GameWorld *)G_GameWorld();
            GameWorld::send_all(this_00,local_94);
            for (local_20 = 0; local_20 < 2; local_20 = local_20 + 1) {
              InterfacePacketBuf::clear((InterfacePacketBuf *)local_94);
              InterfacePacketBuf::put_header((InterfacePacketBuf *)local_94,0,0x13d);
              InterfacePacketBuf::put_short
                        ((InterfacePacketBuf *)local_94,*(int *)(this + (local_20 + 0x2c) * 4 + 8));
              InterfacePacketBuf::finalize((InterfacePacketBuf *)local_94,true);
              TeamInfoThird::SendToTeam((TeamInfoThird *)(this + local_20 * 0x48 + 0x1c),local_94);
            }
            uVar9 = 1;
            PacketGuard::~PacketGuard(local_94);
          }
        }
      }
      else {
        *(undefined4 *)(this + 4) = 2;
        _SendMatchStatePacket(this,1,1);
        uVar9 = 0;
      }
    }
    else {
      uVar9 = 0;
    }
  }
  else {
    cMyTrace::cMyTrace(local_80,"virtual bool fair_pvp::CFairMatch::OnMatchRoom(PvP_Room*, int)",
                       0xc8b,0);
    cMyTrace::operator()(local_80,"OnMatchRoom timeout");
    uVar9 = 0;
  }
  return uVar9;
}

```

---

## OnReady

```asm
// === 08565018 fair_pvp::CFairMatch::OnReady  [0x08565018-0x8565047] ===
 8565018:	55                   	push   %ebp
 8565019:	89 e5                	mov    %esp,%ebp
 856501b:	83 ec 04             	sub    $0x4,%esp
 856501e:	8b 45 10             	mov    0x10(%ebp),%eax
 8565021:	88 45 fc             	mov    %al,-0x4(%ebp)
 8565024:	0f b6 45 fc          	movzbl -0x4(%ebp),%eax
 8565028:	83 f0 01             	xor    $0x1,%eax
 856502b:	84 c0                	test   %al,%al
 856502d:	74 12                	je     8565041 <_ZN8fair_pvp10CFairMatch7OnReadyEP5CUserb+0x29>
 856502f:	8b 45 08             	mov    0x8(%ebp),%eax
 8565032:	8b 40 04             	mov    0x4(%eax),%eax
 8565035:	83 f8 04             	cmp    $0x4,%eax
 8565038:	75 07                	jne    8565041 <_ZN8fair_pvp10CFairMatch7OnReadyEP5CUserb+0x29>
 856503a:	b8 00 00 00 00       	mov    $0x0,%eax
 856503f:	eb 05                	jmp    8565046 <_ZN8fair_pvp10CFairMatch7OnReadyEP5CUserb+0x2e>
 8565041:	b8 01 00 00 00       	mov    $0x1,%eax
 8565046:	c9                   	leave
 8565047:	c3                   	ret

```

```c
// fair_pvp::CFairMatch::OnReady @ 0x8565018

/* fair_pvp::CFairMatch::OnReady(CUser*, bool) */

undefined4 __thiscall fair_pvp::CFairMatch::OnReady(CFairMatch *this,CUser *param_1,bool param_2)

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
// === 08563bba fair_pvp::CFairMatch::OnRegisterMatch  [0x08563bba-0x8563cc5] ===
 8563bba:	55                   	push   %ebp
 8563bbb:	89 e5                	mov    %esp,%ebp
 8563bbd:	53                   	push   %ebx
 8563bbe:	83 ec 24             	sub    $0x24,%esp
 8563bc1:	8b 45 08             	mov    0x8(%ebp),%eax
 8563bc4:	8b 40 04             	mov    0x4(%eax),%eax
 8563bc7:	83 f8 01             	cmp    $0x1,%eax
 8563bca:	75 0a                	jne    8563bd6 <_ZN8fair_pvp10CFairMatch15OnRegisterMatchEP5CUserP8PvP_Room+0x1c>
 8563bcc:	b8 01 00 00 00       	mov    $0x1,%eax
 8563bd1:	e9 ea 00 00 00       	jmp    8563cc0 <_ZN8fair_pvp10CFairMatch15OnRegisterMatchEP5CUserP8PvP_Room+0x106>
 8563bd6:	0f b6 05 76 bb 3a 09 	movzbl 0x93abb76,%eax
 8563bdd:	83 f0 01             	xor    $0x1,%eax
 8563be0:	84 c0                	test   %al,%al
 8563be2:	74 25                	je     8563c09 <_ZN8fair_pvp10CFairMatch15OnRegisterMatchEP5CUserP8PvP_Room+0x4f>
 8563be4:	c7 44 24 08 13 00 00 	movl   $0x13,0x8(%esp)
 8563beb:	00 
 8563bec:	c7 44 24 04 c7 00 00 	movl   $0xc7,0x4(%esp)
 8563bf3:	00 
 8563bf4:	8b 45 0c             	mov    0xc(%ebp),%eax
 8563bf7:	89 04 24             	mov    %eax,(%esp)
 8563bfa:	e8 43 83 11 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8563bff:	b8 00 00 00 00       	mov    $0x0,%eax
 8563c04:	e9 b7 00 00 00       	jmp    8563cc0 <_ZN8fair_pvp10CFairMatch15OnRegisterMatchEP5CUserP8PvP_Room+0x106>
 8563c09:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8563c10:	8b 45 10             	mov    0x10(%ebp),%eax
 8563c13:	89 44 24 04          	mov    %eax,0x4(%esp)
 8563c17:	8b 45 08             	mov    0x8(%ebp),%eax
 8563c1a:	89 04 24             	mov    %eax,(%esp)
 8563c1d:	e8 32 fe ff ff       	call   8563a54 <_ZNK8fair_pvp10CFairMatch15_CheckMatchableEP8PvP_Room>
 8563c22:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8563c25:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8563c29:	0f 95 c0             	setne  %al
 8563c2c:	84 c0                	test   %al,%al
 8563c2e:	74 24                	je     8563c54 <_ZN8fair_pvp10CFairMatch15OnRegisterMatchEP5CUserP8PvP_Room+0x9a>
 8563c30:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8563c33:	0f b6 c0             	movzbl %al,%eax
 8563c36:	89 44 24 08          	mov    %eax,0x8(%esp)
 8563c3a:	c7 44 24 04 c7 00 00 	movl   $0xc7,0x4(%esp)
 8563c41:	00 
 8563c42:	8b 45 0c             	mov    0xc(%ebp),%eax
 8563c45:	89 04 24             	mov    %eax,(%esp)
 8563c48:	e8 f5 82 11 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8563c4d:	b8 00 00 00 00       	mov    $0x0,%eax
 8563c52:	eb 6c                	jmp    8563cc0 <_ZN8fair_pvp10CFairMatch15OnRegisterMatchEP5CUserP8PvP_Room+0x106>
 8563c54:	8b 45 08             	mov    0x8(%ebp),%eax
 8563c57:	8b 40 04             	mov    0x4(%eax),%eax
 8563c5a:	83 f8 02             	cmp    $0x2,%eax
 8563c5d:	74 12                	je     8563c71 <_ZN8fair_pvp10CFairMatch15OnRegisterMatchEP5CUserP8PvP_Room+0xb7>
 8563c5f:	8b 45 10             	mov    0x10(%ebp),%eax
 8563c62:	89 44 24 04          	mov    %eax,0x4(%esp)
 8563c66:	8b 45 08             	mov    0x8(%ebp),%eax
 8563c69:	89 04 24             	mov    %eax,(%esp)
 8563c6c:	e8 c1 fd ff ff       	call   8563a32 <_ZN8fair_pvp10CFairMatch20_RegisterWaitingRoomEP8PvP_Room>
 8563c71:	8b 45 08             	mov    0x8(%ebp),%eax
 8563c74:	c7 40 04 01 00 00 00 	movl   $0x1,0x4(%eax)
 8563c7b:	8b 45 08             	mov    0x8(%ebp),%eax
 8563c7e:	8b 58 18             	mov    0x18(%eax),%ebx
 8563c81:	8b 45 10             	mov    0x10(%ebp),%eax
 8563c84:	89 04 24             	mov    %eax,(%esp)
 8563c87:	e8 08 9d cc ff       	call   822d994 <_ZN8PvP_Room9get_indexEv>
 8563c8c:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8563c90:	89 44 24 04          	mov    %eax,0x4(%esp)
 8563c94:	c7 04 24 0a 00 00 00 	movl   $0xa,(%esp)
 8563c9b:	e8 74 41 0d 00       	call   8637e14 <_ZN18TimerStartMatching15registNextTimerElii>
 8563ca0:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8563ca7:	00 
 8563ca8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8563caf:	00 
 8563cb0:	8b 45 08             	mov    0x8(%ebp),%eax
 8563cb3:	89 04 24             	mov    %eax,(%esp)
 8563cb6:	e8 eb 14 00 00       	call   85651a6 <_ZN8fair_pvp10CFairMatch21_SendMatchStatePacketEii>
 8563cbb:	b8 01 00 00 00       	mov    $0x1,%eax
 8563cc0:	83 c4 24             	add    $0x24,%esp
 8563cc3:	5b                   	pop    %ebx
 8563cc4:	5d                   	pop    %ebp
 8563cc5:	c3                   	ret

```

```c
// fair_pvp::CFairMatch::OnRegisterMatch @ 0x8563bba

/* fair_pvp::CFairMatch::OnRegisterMatch(CUser*, PvP_Room*) */

undefined4 __thiscall
fair_pvp::CFairMatch::OnRegisterMatch(CFairMatch *this,CUser *param_1,PvP_Room *param_2)

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

## OnRematchTimeout

```asm
// === 08565f92 fair_pvp::CFairMatch::OnRematchTimeout  [0x08565f92-0x85663a7] ===
 8565f92:	55                   	push   %ebp
 8565f93:	89 e5                	mov    %esp,%ebp
 8565f95:	57                   	push   %edi
 8565f96:	56                   	push   %esi
 8565f97:	53                   	push   %ebx
 8565f98:	83 ec 6c             	sub    $0x6c,%esp
 8565f9b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8565f9e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8565fa2:	8b 45 08             	mov    0x8(%ebp),%eax
 8565fa5:	89 04 24             	mov    %eax,(%esp)
 8565fa8:	e8 57 fd ff ff       	call   8565d04 <_ZN8fair_pvp10CFairMatch12CheckRematchEP8PvP_Room>
 8565fad:	0f b6 f8             	movzbl %al,%edi
 8565fb0:	8b 45 0c             	mov    0xc(%ebp),%eax
 8565fb3:	89 04 24             	mov    %eax,(%esp)
 8565fb6:	e8 11 7a cc ff       	call   822d9cc <_ZN8PvP_Room19get_pvp_battle_modeEv>
 8565fbb:	89 c6                	mov    %eax,%esi
 8565fbd:	8b 45 0c             	mov    0xc(%ebp),%eax
 8565fc0:	89 04 24             	mov    %eax,(%esp)
 8565fc3:	e8 cc 79 cc ff       	call   822d994 <_ZN8PvP_Room9get_indexEv>
 8565fc8:	89 c3                	mov    %eax,%ebx
 8565fca:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 8565fd1:	00 
 8565fd2:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8565fd9:	00 
 8565fda:	c7 44 24 08 d7 0f 00 	movl   $0xfd7,0x8(%esp)
 8565fe1:	00 
 8565fe2:	c7 44 24 04 80 36 ca 	movl   $0x8ca3680,0x4(%esp)
 8565fe9:	08 
 8565fea:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8565fed:	89 04 24             	mov    %eax,(%esp)
 8565ff0:	e8 47 9d fe ff       	call   854fd3c <_ZN10CSwitchLogC1EPKciii>
 8565ff5:	89 7c 24 10          	mov    %edi,0x10(%esp)
 8565ff9:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8565ffd:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8566001:	c7 44 24 04 a4 24 ca 	movl   $0x8ca24a4,0x4(%esp)
 8566008:	08 
 8566009:	8d 45 cc             	lea    -0x34(%ebp),%eax
 856600c:	89 04 24             	mov    %eax,(%esp)
 856600f:	e8 50 9d fe ff       	call   854fd64 <_ZN10CSwitchLogclEPKcz>
 8566014:	8b 45 0c             	mov    0xc(%ebp),%eax
 8566017:	89 44 24 04          	mov    %eax,0x4(%esp)
 856601b:	8b 45 08             	mov    0x8(%ebp),%eax
 856601e:	89 04 24             	mov    %eax,(%esp)
 8566021:	e8 de fc ff ff       	call   8565d04 <_ZN8fair_pvp10CFairMatch12CheckRematchEP8PvP_Room>
 8566026:	83 f0 01             	xor    $0x1,%eax
 8566029:	84 c0                	test   %al,%al
 856602b:	0f 84 8a 02 00 00    	je     85662bb <_ZN8fair_pvp10CFairMatch16OnRematchTimeoutEP8PvP_Room+0x329>
 8566031:	8b 45 08             	mov    0x8(%ebp),%eax
 8566034:	83 c0 64             	add    $0x64,%eax
 8566037:	89 04 24             	mov    %eax,(%esp)
 856603a:	e8 cd c6 ff ff       	call   856270c <_ZNK8fair_pvp13TeamInfoThird4sizeEv>
 856603f:	85 c0                	test   %eax,%eax
 8566041:	74 11                	je     8566054 <_ZN8fair_pvp10CFairMatch16OnRematchTimeoutEP8PvP_Room+0xc2>
 8566043:	8b 45 08             	mov    0x8(%ebp),%eax
 8566046:	8b 40 68             	mov    0x68(%eax),%eax
 8566049:	85 c0                	test   %eax,%eax
 856604b:	75 07                	jne    8566054 <_ZN8fair_pvp10CFairMatch16OnRematchTimeoutEP8PvP_Room+0xc2>
 856604d:	b8 01 00 00 00       	mov    $0x1,%eax
 8566052:	eb 05                	jmp    8566059 <_ZN8fair_pvp10CFairMatch16OnRematchTimeoutEP8PvP_Room+0xc7>
 8566054:	b8 00 00 00 00       	mov    $0x0,%eax
 8566059:	84 c0                	test   %al,%al
 856605b:	74 1a                	je     8566077 <_ZN8fair_pvp10CFairMatch16OnRematchTimeoutEP8PvP_Room+0xe5>
 856605d:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8566064:	00 
 8566065:	8b 45 0c             	mov    0xc(%ebp),%eax
 8566068:	89 44 24 04          	mov    %eax,0x4(%esp)
 856606c:	8b 45 08             	mov    0x8(%ebp),%eax
 856606f:	89 04 24             	mov    %eax,(%esp)
 8566072:	e8 0f fd ff ff       	call   8565d86 <_ZN8fair_pvp10CFairMatch16_PullOutRoomTeamEP8PvP_Room22ENUM_SCHOOL_MATCH_TEAM>
 8566077:	8b 45 08             	mov    0x8(%ebp),%eax
 856607a:	8b 40 20             	mov    0x20(%eax),%eax
 856607d:	85 c0                	test   %eax,%eax
 856607f:	74 16                	je     8566097 <_ZN8fair_pvp10CFairMatch16OnRematchTimeoutEP8PvP_Room+0x105>
 8566081:	85 c0                	test   %eax,%eax
 8566083:	0f 88 12 03 00 00    	js     856639b <_ZN8fair_pvp10CFairMatch16OnRematchTimeoutEP8PvP_Room+0x409>
 8566089:	83 f8 02             	cmp    $0x2,%eax
 856608c:	0f 8f 0c 03 00 00    	jg     856639e <_ZN8fair_pvp10CFairMatch16OnRematchTimeoutEP8PvP_Room+0x40c>
 8566092:	e9 f3 00 00 00       	jmp    856618a <_ZN8fair_pvp10CFairMatch16OnRematchTimeoutEP8PvP_Room+0x1f8>
 8566097:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 856609e:	00 
 856609f:	8b 45 0c             	mov    0xc(%ebp),%eax
 85660a2:	89 44 24 04          	mov    %eax,0x4(%esp)
 85660a6:	8b 45 08             	mov    0x8(%ebp),%eax
 85660a9:	89 04 24             	mov    %eax,(%esp)
 85660ac:	e8 d5 fc ff ff       	call   8565d86 <_ZN8fair_pvp10CFairMatch16_PullOutRoomTeamEP8PvP_Room22ENUM_SCHOOL_MATCH_TEAM>
 85660b1:	8b 45 08             	mov    0x8(%ebp),%eax
 85660b4:	83 c0 64             	add    $0x64,%eax
 85660b7:	89 04 24             	mov    %eax,(%esp)
 85660ba:	e8 4d c6 ff ff       	call   856270c <_ZNK8fair_pvp13TeamInfoThird4sizeEv>
 85660bf:	85 c0                	test   %eax,%eax
 85660c1:	0f 95 c0             	setne  %al
 85660c4:	84 c0                	test   %al,%al
 85660c6:	0f 84 b8 00 00 00    	je     8566184 <_ZN8fair_pvp10CFairMatch16OnRematchTimeoutEP8PvP_Room+0x1f2>
 85660cc:	8d 45 c0             	lea    -0x40(%ebp),%eax
 85660cf:	89 04 24             	mov    %eax,(%esp)
 85660d2:	e8 75 7c 02 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 85660d7:	c7 44 24 08 3b 01 00 	movl   $0x13b,0x8(%esp)
 85660de:	00 
 85660df:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85660e6:	00 
 85660e7:	8d 45 c0             	lea    -0x40(%ebp),%eax
 85660ea:	89 04 24             	mov    %eax,(%esp)
 85660ed:	e8 0a 58 b6 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 85660f2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85660f9:	00 
 85660fa:	8d 45 c0             	lea    -0x40(%ebp),%eax
 85660fd:	89 04 24             	mov    %eax,(%esp)
 8566100:	e8 53 58 b6 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8566105:	8b 45 08             	mov    0x8(%ebp),%eax
 8566108:	8d 50 64             	lea    0x64(%eax),%edx
 856610b:	8d 45 c0             	lea    -0x40(%ebp),%eax
 856610e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8566112:	89 14 24             	mov    %edx,(%esp)
 8566115:	e8 32 c6 ff ff       	call   856274c <_ZN8fair_pvp13TeamInfoThird10SendToTeamER11PacketGuard>
 856611a:	8b 55 08             	mov    0x8(%ebp),%edx
 856611d:	8b 45 08             	mov    0x8(%ebp),%eax
 8566120:	83 c2 1c             	add    $0x1c,%edx
 8566123:	8d 58 64             	lea    0x64(%eax),%ebx
 8566126:	b8 12 00 00 00       	mov    $0x12,%eax
 856612b:	89 d7                	mov    %edx,%edi
 856612d:	89 de                	mov    %ebx,%esi
 856612f:	89 c1                	mov    %eax,%ecx
 8566131:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
 8566133:	8b 45 08             	mov    0x8(%ebp),%eax
 8566136:	83 c0 1c             	add    $0x1c,%eax
 8566139:	89 04 24             	mov    %eax,(%esp)
 856613c:	e8 9d c3 ff ff       	call   85624de <_ZN8fair_pvp13TeamInfoThird7refreshEv>
 8566141:	8b 45 08             	mov    0x8(%ebp),%eax
 8566144:	83 c0 64             	add    $0x64,%eax
 8566147:	89 04 24             	mov    %eax,(%esp)
 856614a:	e8 33 c4 ff ff       	call   8562582 <_ZN8fair_pvp13TeamInfoThird5resetEv>
 856614f:	8b 45 08             	mov    0x8(%ebp),%eax
 8566152:	c7 80 b0 00 00 00 00 	movl   $0x0,0xb0(%eax)
 8566159:	00 00 00 
 856615c:	8d 45 c0             	lea    -0x40(%ebp),%eax
 856615f:	89 04 24             	mov    %eax,(%esp)
 8566162:	e8 19 7d 02 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8566167:	eb 1b                	jmp    8566184 <_ZN8fair_pvp10CFairMatch16OnRematchTimeoutEP8PvP_Room+0x1f2>
 8566169:	89 d3                	mov    %edx,%ebx
 856616b:	89 c6                	mov    %eax,%esi
 856616d:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8566170:	89 04 24             	mov    %eax,(%esp)
 8566173:	e8 08 7d 02 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8566178:	89 f0                	mov    %esi,%eax
 856617a:	89 da                	mov    %ebx,%edx
 856617c:	89 04 24             	mov    %eax,(%esp)
 856617f:	e8 cc d5 57 00       	call   8ae3750 <_Unwind_Resume>
 8566184:	90                   	nop
 8566185:	e9 15 02 00 00       	jmp    856639f <_ZN8fair_pvp10CFairMatch16OnRematchTimeoutEP8PvP_Room+0x40d>
 856618a:	8b 45 0c             	mov    0xc(%ebp),%eax
 856618d:	89 04 24             	mov    %eax,(%esp)
 8566190:	e8 ad 30 07 00       	call   85d9242 <_ZN8PvP_Room16get_manager_teamEv>
 8566195:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8566198:	8b 45 dc             	mov    -0x24(%ebp),%eax
 856619b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 85661a2:	00 
 85661a3:	89 44 24 08          	mov    %eax,0x8(%esp)
 85661a7:	8b 45 0c             	mov    0xc(%ebp),%eax
 85661aa:	89 44 24 04          	mov    %eax,0x4(%esp)
 85661ae:	8b 45 08             	mov    0x8(%ebp),%eax
 85661b1:	89 04 24             	mov    %eax,(%esp)
 85661b4:	e8 31 ec ff ff       	call   8564dea <_ZN8fair_pvp10CFairMatch11_ReturnTeamEP8PvP_RoomiP5CUser>
 85661b9:	89 45 e0             	mov    %eax,-0x20(%ebp)
 85661bc:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 85661bf:	89 04 24             	mov    %eax,(%esp)
 85661c2:	e8 85 7b 02 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 85661c7:	c7 44 24 08 3b 01 00 	movl   $0x13b,0x8(%esp)
 85661ce:	00 
 85661cf:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85661d6:	00 
 85661d7:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 85661da:	89 04 24             	mov    %eax,(%esp)
 85661dd:	e8 1a 57 b6 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 85661e2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85661e9:	00 
 85661ea:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 85661ed:	89 04 24             	mov    %eax,(%esp)
 85661f0:	e8 63 57 b6 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 85661f5:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 85661f9:	74 12                	je     856620d <_ZN8fair_pvp10CFairMatch16OnRematchTimeoutEP8PvP_Room+0x27b>
 85661fb:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 85661fe:	89 44 24 04          	mov    %eax,0x4(%esp)
 8566202:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8566205:	89 04 24             	mov    %eax,(%esp)
 8566208:	e8 0b 5c 07 00       	call   85dbe18 <_ZN8PvP_Room11send_to_pvpER11PacketGuard>
 856620d:	8b 45 08             	mov    0x8(%ebp),%eax
 8566210:	8d 50 1c             	lea    0x1c(%eax),%edx
 8566213:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8566216:	89 44 24 04          	mov    %eax,0x4(%esp)
 856621a:	89 14 24             	mov    %edx,(%esp)
 856621d:	e8 2a c5 ff ff       	call   856274c <_ZN8fair_pvp13TeamInfoThird10SendToTeamER11PacketGuard>
 8566222:	8b 45 08             	mov    0x8(%ebp),%eax
 8566225:	8d 50 64             	lea    0x64(%eax),%edx
 8566228:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 856622b:	89 44 24 04          	mov    %eax,0x4(%esp)
 856622f:	89 14 24             	mov    %edx,(%esp)
 8566232:	e8 15 c5 ff ff       	call   856274c <_ZN8fair_pvp13TeamInfoThird10SendToTeamER11PacketGuard>
 8566237:	8b 45 08             	mov    0x8(%ebp),%eax
 856623a:	83 c0 1c             	add    $0x1c,%eax
 856623d:	89 04 24             	mov    %eax,(%esp)
 8566240:	e8 c7 c4 ff ff       	call   856270c <_ZNK8fair_pvp13TeamInfoThird4sizeEv>
 8566245:	85 c0                	test   %eax,%eax
 8566247:	0f 94 c0             	sete   %al
 856624a:	84 c0                	test   %al,%al
 856624c:	74 19                	je     8566267 <_ZN8fair_pvp10CFairMatch16OnRematchTimeoutEP8PvP_Room+0x2d5>
 856624e:	8b 55 08             	mov    0x8(%ebp),%edx
 8566251:	8b 45 08             	mov    0x8(%ebp),%eax
 8566254:	83 c2 1c             	add    $0x1c,%edx
 8566257:	8d 58 64             	lea    0x64(%eax),%ebx
 856625a:	b8 12 00 00 00       	mov    $0x12,%eax
 856625f:	89 d7                	mov    %edx,%edi
 8566261:	89 de                	mov    %ebx,%esi
 8566263:	89 c1                	mov    %eax,%ecx
 8566265:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
 8566267:	8b 45 08             	mov    0x8(%ebp),%eax
 856626a:	83 c0 1c             	add    $0x1c,%eax
 856626d:	89 04 24             	mov    %eax,(%esp)
 8566270:	e8 69 c2 ff ff       	call   85624de <_ZN8fair_pvp13TeamInfoThird7refreshEv>
 8566275:	8b 45 08             	mov    0x8(%ebp),%eax
 8566278:	83 c0 64             	add    $0x64,%eax
 856627b:	89 04 24             	mov    %eax,(%esp)
 856627e:	e8 ff c2 ff ff       	call   8562582 <_ZN8fair_pvp13TeamInfoThird5resetEv>
 8566283:	8b 45 08             	mov    0x8(%ebp),%eax
 8566286:	c7 80 b0 00 00 00 00 	movl   $0x0,0xb0(%eax)
 856628d:	00 00 00 
 8566290:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8566293:	89 04 24             	mov    %eax,(%esp)
 8566296:	e8 e5 7b 02 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 856629b:	e9 ff 00 00 00       	jmp    856639f <_ZN8fair_pvp10CFairMatch16OnRematchTimeoutEP8PvP_Room+0x40d>
 85662a0:	89 d3                	mov    %edx,%ebx
 85662a2:	89 c6                	mov    %eax,%esi
 85662a4:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 85662a7:	89 04 24             	mov    %eax,(%esp)
 85662aa:	e8 d1 7b 02 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 85662af:	89 f0                	mov    %esi,%eax
 85662b1:	89 da                	mov    %ebx,%edx
 85662b3:	89 04 24             	mov    %eax,(%esp)
 85662b6:	e8 95 d4 57 00       	call   8ae3750 <_Unwind_Resume>
 85662bb:	8b 45 08             	mov    0x8(%ebp),%eax
 85662be:	83 c0 1c             	add    $0x1c,%eax
 85662c1:	89 04 24             	mov    %eax,(%esp)
 85662c4:	e8 15 c2 ff ff       	call   85624de <_ZN8fair_pvp13TeamInfoThird7refreshEv>
 85662c9:	8b 45 08             	mov    0x8(%ebp),%eax
 85662cc:	83 c0 64             	add    $0x64,%eax
 85662cf:	89 04 24             	mov    %eax,(%esp)
 85662d2:	e8 07 c2 ff ff       	call   85624de <_ZN8fair_pvp13TeamInfoThird7refreshEv>
 85662d7:	8d 45 a8             	lea    -0x58(%ebp),%eax
 85662da:	89 04 24             	mov    %eax,(%esp)
 85662dd:	e8 6a 7a 02 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 85662e2:	8b 45 0c             	mov    0xc(%ebp),%eax
 85662e5:	89 04 24             	mov    %eax,(%esp)
 85662e8:	e8 43 01 07 00       	call   85d6430 <_ZN8PvP_Room12battle_resetEv>
 85662ed:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 85662f4:	eb 3f                	jmp    8566335 <_ZN8fair_pvp10CFairMatch16OnRematchTimeoutEP8PvP_Room+0x3a3>
 85662f6:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85662f9:	89 44 24 04          	mov    %eax,0x4(%esp)
 85662fd:	8b 45 0c             	mov    0xc(%ebp),%eax
 8566300:	89 04 24             	mov    %eax,(%esp)
 8566303:	e8 16 2f 07 00       	call   85d921e <_ZN8PvP_Room13get_user_seatEi>
 8566308:	85 c0                	test   %eax,%eax
 856630a:	0f 95 c0             	setne  %al
 856630d:	84 c0                	test   %al,%al
 856630f:	74 20                	je     8566331 <_ZN8fair_pvp10CFairMatch16OnRematchTimeoutEP8PvP_Room+0x39f>
 8566311:	8b 45 0c             	mov    0xc(%ebp),%eax
 8566314:	8d 90 20 06 00 00    	lea    0x620(%eax),%edx
 856631a:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8566321:	00 
 8566322:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8566325:	89 44 24 04          	mov    %eax,0x4(%esp)
 8566329:	89 14 24             	mov    %edx,(%esp)
 856632c:	e8 21 7f 07 00       	call   85de252 <_ZN15CRelayBattleMgr7OnReadyEib>
 8566331:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 8566335:	83 7d e4 07          	cmpl   $0x7,-0x1c(%ebp)
 8566339:	0f 9e c0             	setle  %al
 856633c:	84 c0                	test   %al,%al
 856633e:	75 b6                	jne    85662f6 <_ZN8fair_pvp10CFairMatch16OnRematchTimeoutEP8PvP_Room+0x364>
 8566340:	8b 45 0c             	mov    0xc(%ebp),%eax
 8566343:	89 04 24             	mov    %eax,(%esp)
 8566346:	e8 ef 28 07 00       	call   85d8c3a <_ZN8PvP_Room9start_pvpEv>
 856634b:	8d 45 a8             	lea    -0x58(%ebp),%eax
 856634e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8566352:	8b 45 0c             	mov    0xc(%ebp),%eax
 8566355:	89 04 24             	mov    %eax,(%esp)
 8566358:	e8 dd 59 07 00       	call   85dbd3a <_ZN8PvP_Room15make_state_infoEPc>
 856635d:	e8 45 40 b7 ff       	call   80da3a7 <_Z11G_GameWorldv>
 8566362:	8d 55 a8             	lea    -0x58(%ebp),%edx
 8566365:	89 54 24 04          	mov    %edx,0x4(%esp)
 8566369:	89 04 24             	mov    %eax,(%esp)
 856636c:	e8 a3 28 16 00       	call   86c8c14 <_ZN9GameWorld8send_allER11PacketGuard>
 8566371:	eb 1b                	jmp    856638e <_ZN8fair_pvp10CFairMatch16OnRematchTimeoutEP8PvP_Room+0x3fc>
 8566373:	89 d3                	mov    %edx,%ebx
 8566375:	89 c6                	mov    %eax,%esi
 8566377:	8d 45 a8             	lea    -0x58(%ebp),%eax
 856637a:	89 04 24             	mov    %eax,(%esp)
 856637d:	e8 fe 7a 02 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8566382:	89 f0                	mov    %esi,%eax
 8566384:	89 da                	mov    %ebx,%edx
 8566386:	89 04 24             	mov    %eax,(%esp)
 8566389:	e8 c2 d3 57 00       	call   8ae3750 <_Unwind_Resume>
 856638e:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8566391:	89 04 24             	mov    %eax,(%esp)
 8566394:	e8 e7 7a 02 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8566399:	eb 04                	jmp    856639f <_ZN8fair_pvp10CFairMatch16OnRematchTimeoutEP8PvP_Room+0x40d>
 856639b:	90                   	nop
 856639c:	eb 01                	jmp    856639f <_ZN8fair_pvp10CFairMatch16OnRematchTimeoutEP8PvP_Room+0x40d>
 856639e:	90                   	nop
 856639f:	83 c4 6c             	add    $0x6c,%esp
 85663a2:	5b                   	pop    %ebx
 85663a3:	5e                   	pop    %esi
 85663a4:	5f                   	pop    %edi
 85663a5:	5d                   	pop    %ebp
 85663a6:	c3                   	ret
 85663a7:	90                   	nop

```

```c
// fair_pvp::CFairMatch::OnRematchTimeout @ 0x8565f92

/* fair_pvp::CFairMatch::OnRematchTimeout(PvP_Room*) */

void __thiscall fair_pvp::CFairMatch::OnRematchTimeout(CFairMatch *this,PvP_Room *param_1)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  GameWorld *this_00;
  CFairMatch *pCVar7;
  CFairMatch *pCVar8;
  byte bVar9;
  PacketGuard local_5c [12];
  PacketGuard local_50 [12];
  PacketGuard local_44 [12];
  CSwitchLog local_38 [16];
  int local_28;
  PvP_Room *local_24;
  int local_20;
  
  bVar9 = 0;
  uVar3 = CheckRematch(this,param_1);
  uVar4 = PvP_Room::get_pvp_battle_mode(param_1);
  uVar5 = PvP_Room::get_index(param_1);
  CSwitchLog::CSwitchLog
            (local_38,"virtual void fair_pvp::CFairMatch::OnRematchTimeout(PvP_Room*)",0xfd7,0,0);
  CSwitchLog::operator()(local_38,"pvp@log room(%d),%d,%d",uVar5,uVar4,uVar3 & 0xff);
  cVar2 = CheckRematch(this,param_1);
  if (cVar2 == '\x01') {
    TeamInfoThird::refresh((TeamInfoThird *)(this + 0x1c));
    TeamInfoThird::refresh((TeamInfoThird *)(this + 100));
    PacketGuard::PacketGuard(local_5c);
                    /* try { // try from 085662e8 to 08566370 has its CatchHandler @ 08566373 */
    PvP_Room::battle_reset(param_1);
    for (local_20 = 0; local_20 < 8; local_20 = local_20 + 1) {
      iVar6 = PvP_Room::get_user_seat(param_1,local_20);
      if (iVar6 != 0) {
        CRelayBattleMgr::OnReady((CRelayBattleMgr *)(param_1 + 0x620),local_20,true);
      }
    }
    PvP_Room::start_pvp(param_1);
    PvP_Room::make_state_info(param_1,(char *)local_5c);
    this_00 = (GameWorld *)G_GameWorld();
    GameWorld::send_all(this_00,local_5c);
    PacketGuard::~PacketGuard(local_5c);
  }
  else {
    iVar6 = TeamInfoThird::size((TeamInfoThird *)(this + 100));
    if ((iVar6 == 0) || (*(int *)(this + 0x68) != 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      _PullOutRoomTeam(this,param_1,1);
    }
    iVar6 = *(int *)(this + 0x20);
    if (iVar6 == 0) {
      _PullOutRoomTeam(this,param_1,0);
      iVar6 = TeamInfoThird::size((TeamInfoThird *)(this + 100));
      if (iVar6 != 0) {
        PacketGuard::PacketGuard(local_44);
                    /* try { // try from 085660ed to 08566119 has its CatchHandler @ 08566169 */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_44,0,0x13b);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_44,true);
        TeamInfoThird::SendToTeam((TeamInfoThird *)(this + 100),local_44);
        pCVar7 = this + 100;
        pCVar8 = this + 0x1c;
        for (iVar6 = 0x12; iVar6 != 0; iVar6 = iVar6 + -1) {
          *(undefined4 *)pCVar8 = *(undefined4 *)pCVar7;
          pCVar7 = pCVar7 + (uint)bVar9 * -8 + 4;
          pCVar8 = pCVar8 + (uint)bVar9 * -8 + 4;
        }
        TeamInfoThird::refresh((TeamInfoThird *)(this + 0x1c));
        TeamInfoThird::reset((TeamInfoThird *)(this + 100));
        *(undefined4 *)(this + 0xb0) = 0;
        PacketGuard::~PacketGuard(local_44);
      }
    }
    else if ((-1 < iVar6) && (iVar6 < 3)) {
      local_28 = PvP_Room::get_manager_team(param_1);
      local_24 = (PvP_Room *)_ReturnTeam(this,param_1,local_28,(CUser *)0x0);
      PacketGuard::PacketGuard(local_50);
                    /* try { // try from 085661dd to 08566236 has its CatchHandler @ 085662a0 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_50,0,0x13b);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_50,true);
      if (local_24 != (PvP_Room *)0x0) {
        PvP_Room::send_to_pvp(local_24,local_50);
      }
      TeamInfoThird::SendToTeam((TeamInfoThird *)(this + 0x1c),local_50);
      TeamInfoThird::SendToTeam((TeamInfoThird *)(this + 100),local_50);
      iVar6 = TeamInfoThird::size((TeamInfoThird *)(this + 0x1c));
      if (iVar6 == 0) {
        pCVar7 = this + 100;
        pCVar8 = this + 0x1c;
        for (iVar6 = 0x12; iVar6 != 0; iVar6 = iVar6 + -1) {
          *(undefined4 *)pCVar8 = *(undefined4 *)pCVar7;
          pCVar7 = pCVar7 + (uint)bVar9 * -8 + 4;
          pCVar8 = pCVar8 + (uint)bVar9 * -8 + 4;
        }
      }
      TeamInfoThird::refresh((TeamInfoThird *)(this + 0x1c));
      TeamInfoThird::reset((TeamInfoThird *)(this + 100));
      *(undefined4 *)(this + 0xb0) = 0;
      PacketGuard::~PacketGuard(local_50);
    }
  }
  return;
}

```

---

## OnReward

```asm
// === 08565966 fair_pvp::CFairMatch::OnReward  [0x08565966-0x8565c4d] ===
 8565966:	55                   	push   %ebp
 8565967:	89 e5                	mov    %esp,%ebp
 8565969:	56                   	push   %esi
 856596a:	53                   	push   %ebx
 856596b:	83 ec 40             	sub    $0x40,%esp
 856596e:	8b 45 14             	mov    0x14(%ebp),%eax
 8565971:	88 45 e4             	mov    %al,-0x1c(%ebp)
 8565974:	80 7d e4 00          	cmpb   $0x0,-0x1c(%ebp)
 8565978:	0f 84 b3 00 00 00    	je     8565a31 <_ZN8fair_pvp10CFairMatch8OnRewardEP8PvP_Roomib+0xcb>
 856597e:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8565985:	00 
 8565986:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 856598d:	00 
 856598e:	8b 45 08             	mov    0x8(%ebp),%eax
 8565991:	89 04 24             	mov    %eax,(%esp)
 8565994:	e8 85 d4 ff ff       	call   8562e1e <_ZN8fair_pvp10CFairMatch13_UpdateRatingEi22ENUM_ELO_RATING_SYSTEM>
 8565999:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 85659a0:	00 
 85659a1:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 85659a8:	00 
 85659a9:	8b 45 08             	mov    0x8(%ebp),%eax
 85659ac:	89 04 24             	mov    %eax,(%esp)
 85659af:	e8 6a d4 ff ff       	call   8562e1e <_ZN8fair_pvp10CFairMatch13_UpdateRatingEi22ENUM_ELO_RATING_SYSTEM>
 85659b4:	8b 45 08             	mov    0x8(%ebp),%eax
 85659b7:	83 c0 6c             	add    $0x6c,%eax
 85659ba:	c7 44 24 18 01 00 00 	movl   $0x1,0x18(%esp)
 85659c1:	00 
 85659c2:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 85659c9:	00 
 85659ca:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 85659d1:	00 
 85659d2:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 85659d9:	00 
 85659da:	89 44 24 08          	mov    %eax,0x8(%esp)
 85659de:	8b 45 0c             	mov    0xc(%ebp),%eax
 85659e1:	89 44 24 04          	mov    %eax,0x4(%esp)
 85659e5:	8b 45 08             	mov    0x8(%ebp),%eax
 85659e8:	89 04 24             	mov    %eax,(%esp)
 85659eb:	e8 10 fd ff ff       	call   8565700 <_ZN8fair_pvp10CFairMatch11UpdateScoreEP8PvP_RoomRNS_15PlayerInfoThirdE22ENUM_SCHOOL_MATCH_TEAMiii>
 85659f0:	8b 45 08             	mov    0x8(%ebp),%eax
 85659f3:	83 c0 24             	add    $0x24,%eax
 85659f6:	c7 44 24 18 01 00 00 	movl   $0x1,0x18(%esp)
 85659fd:	00 
 85659fe:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 8565a05:	00 
 8565a06:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 8565a0d:	00 
 8565a0e:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8565a15:	00 
 8565a16:	89 44 24 08          	mov    %eax,0x8(%esp)
 8565a1a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8565a1d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8565a21:	8b 45 08             	mov    0x8(%ebp),%eax
 8565a24:	89 04 24             	mov    %eax,(%esp)
 8565a27:	e8 d4 fc ff ff       	call   8565700 <_ZN8fair_pvp10CFairMatch11UpdateScoreEP8PvP_RoomRNS_15PlayerInfoThirdE22ENUM_SCHOOL_MATCH_TEAMiii>
 8565a2c:	e9 6b 01 00 00       	jmp    8565b9c <_ZN8fair_pvp10CFairMatch8OnRewardEP8PvP_Roomib+0x236>
 8565a31:	83 7d 10 01          	cmpl   $0x1,0x10(%ebp)
 8565a35:	0f 85 b3 00 00 00    	jne    8565aee <_ZN8fair_pvp10CFairMatch8OnRewardEP8PvP_Roomib+0x188>
 8565a3b:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 8565a42:	00 
 8565a43:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8565a4a:	00 
 8565a4b:	8b 45 08             	mov    0x8(%ebp),%eax
 8565a4e:	89 04 24             	mov    %eax,(%esp)
 8565a51:	e8 c8 d3 ff ff       	call   8562e1e <_ZN8fair_pvp10CFairMatch13_UpdateRatingEi22ENUM_ELO_RATING_SYSTEM>
 8565a56:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8565a5d:	00 
 8565a5e:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8565a65:	00 
 8565a66:	8b 45 08             	mov    0x8(%ebp),%eax
 8565a69:	89 04 24             	mov    %eax,(%esp)
 8565a6c:	e8 ad d3 ff ff       	call   8562e1e <_ZN8fair_pvp10CFairMatch13_UpdateRatingEi22ENUM_ELO_RATING_SYSTEM>
 8565a71:	8b 45 08             	mov    0x8(%ebp),%eax
 8565a74:	83 c0 6c             	add    $0x6c,%eax
 8565a77:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 8565a7e:	00 
 8565a7f:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 8565a86:	00 
 8565a87:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 8565a8e:	00 
 8565a8f:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8565a96:	00 
 8565a97:	89 44 24 08          	mov    %eax,0x8(%esp)
 8565a9b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8565a9e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8565aa2:	8b 45 08             	mov    0x8(%ebp),%eax
 8565aa5:	89 04 24             	mov    %eax,(%esp)
 8565aa8:	e8 53 fc ff ff       	call   8565700 <_ZN8fair_pvp10CFairMatch11UpdateScoreEP8PvP_RoomRNS_15PlayerInfoThirdE22ENUM_SCHOOL_MATCH_TEAMiii>
 8565aad:	8b 45 08             	mov    0x8(%ebp),%eax
 8565ab0:	83 c0 24             	add    $0x24,%eax
 8565ab3:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 8565aba:	00 
 8565abb:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 8565ac2:	00 
 8565ac3:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 8565aca:	00 
 8565acb:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8565ad2:	00 
 8565ad3:	89 44 24 08          	mov    %eax,0x8(%esp)
 8565ad7:	8b 45 0c             	mov    0xc(%ebp),%eax
 8565ada:	89 44 24 04          	mov    %eax,0x4(%esp)
 8565ade:	8b 45 08             	mov    0x8(%ebp),%eax
 8565ae1:	89 04 24             	mov    %eax,(%esp)
 8565ae4:	e8 17 fc ff ff       	call   8565700 <_ZN8fair_pvp10CFairMatch11UpdateScoreEP8PvP_RoomRNS_15PlayerInfoThirdE22ENUM_SCHOOL_MATCH_TEAMiii>
 8565ae9:	e9 ae 00 00 00       	jmp    8565b9c <_ZN8fair_pvp10CFairMatch8OnRewardEP8PvP_Roomib+0x236>
 8565aee:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 8565af5:	00 
 8565af6:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8565afd:	00 
 8565afe:	8b 45 08             	mov    0x8(%ebp),%eax
 8565b01:	89 04 24             	mov    %eax,(%esp)
 8565b04:	e8 15 d3 ff ff       	call   8562e1e <_ZN8fair_pvp10CFairMatch13_UpdateRatingEi22ENUM_ELO_RATING_SYSTEM>
 8565b09:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8565b10:	00 
 8565b11:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8565b18:	00 
 8565b19:	8b 45 08             	mov    0x8(%ebp),%eax
 8565b1c:	89 04 24             	mov    %eax,(%esp)
 8565b1f:	e8 fa d2 ff ff       	call   8562e1e <_ZN8fair_pvp10CFairMatch13_UpdateRatingEi22ENUM_ELO_RATING_SYSTEM>
 8565b24:	8b 45 08             	mov    0x8(%ebp),%eax
 8565b27:	83 c0 6c             	add    $0x6c,%eax
 8565b2a:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 8565b31:	00 
 8565b32:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 8565b39:	00 
 8565b3a:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 8565b41:	00 
 8565b42:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8565b49:	00 
 8565b4a:	89 44 24 08          	mov    %eax,0x8(%esp)
 8565b4e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8565b51:	89 44 24 04          	mov    %eax,0x4(%esp)
 8565b55:	8b 45 08             	mov    0x8(%ebp),%eax
 8565b58:	89 04 24             	mov    %eax,(%esp)
 8565b5b:	e8 a0 fb ff ff       	call   8565700 <_ZN8fair_pvp10CFairMatch11UpdateScoreEP8PvP_RoomRNS_15PlayerInfoThirdE22ENUM_SCHOOL_MATCH_TEAMiii>
 8565b60:	8b 45 08             	mov    0x8(%ebp),%eax
 8565b63:	83 c0 24             	add    $0x24,%eax
 8565b66:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 8565b6d:	00 
 8565b6e:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 8565b75:	00 
 8565b76:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 8565b7d:	00 
 8565b7e:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8565b85:	00 
 8565b86:	89 44 24 08          	mov    %eax,0x8(%esp)
 8565b8a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8565b8d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8565b91:	8b 45 08             	mov    0x8(%ebp),%eax
 8565b94:	89 04 24             	mov    %eax,(%esp)
 8565b97:	e8 64 fb ff ff       	call   8565700 <_ZN8fair_pvp10CFairMatch11UpdateScoreEP8PvP_RoomRNS_15PlayerInfoThirdE22ENUM_SCHOOL_MATCH_TEAMiii>
 8565b9c:	8b 45 08             	mov    0x8(%ebp),%eax
 8565b9f:	8b 80 b0 00 00 00    	mov    0xb0(%eax),%eax
 8565ba5:	8d 50 01             	lea    0x1(%eax),%edx
 8565ba8:	8b 45 08             	mov    0x8(%ebp),%eax
 8565bab:	89 90 b0 00 00 00    	mov    %edx,0xb0(%eax)
 8565bb1:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8565bb4:	89 04 24             	mov    %eax,(%esp)
 8565bb7:	e8 90 81 02 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8565bbc:	c7 44 24 08 3c 01 00 	movl   $0x13c,0x8(%esp)
 8565bc3:	00 
 8565bc4:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8565bcb:	00 
 8565bcc:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8565bcf:	89 04 24             	mov    %eax,(%esp)
 8565bd2:	e8 25 5d b6 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8565bd7:	8b 45 08             	mov    0x8(%ebp),%eax
 8565bda:	8b 80 b0 00 00 00    	mov    0xb0(%eax),%eax
 8565be0:	ba 03 00 00 00       	mov    $0x3,%edx
 8565be5:	89 d1                	mov    %edx,%ecx
 8565be7:	29 c1                	sub    %eax,%ecx
 8565be9:	89 c8                	mov    %ecx,%eax
 8565beb:	89 44 24 04          	mov    %eax,0x4(%esp)
 8565bef:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8565bf2:	89 04 24             	mov    %eax,(%esp)
 8565bf5:	e8 42 5d b6 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8565bfa:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8565c01:	00 
 8565c02:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8565c05:	89 04 24             	mov    %eax,(%esp)
 8565c08:	e8 4b 5d b6 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8565c0d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8565c10:	89 44 24 04          	mov    %eax,0x4(%esp)
 8565c14:	8b 45 0c             	mov    0xc(%ebp),%eax
 8565c17:	89 04 24             	mov    %eax,(%esp)
 8565c1a:	e8 f9 61 07 00       	call   85dbe18 <_ZN8PvP_Room11send_to_pvpER11PacketGuard>
 8565c1f:	eb 1b                	jmp    8565c3c <_ZN8fair_pvp10CFairMatch8OnRewardEP8PvP_Roomib+0x2d6>
 8565c21:	89 d3                	mov    %edx,%ebx
 8565c23:	89 c6                	mov    %eax,%esi
 8565c25:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8565c28:	89 04 24             	mov    %eax,(%esp)
 8565c2b:	e8 50 82 02 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8565c30:	89 f0                	mov    %esi,%eax
 8565c32:	89 da                	mov    %ebx,%edx
 8565c34:	89 04 24             	mov    %eax,(%esp)
 8565c37:	e8 14 db 57 00       	call   8ae3750 <_Unwind_Resume>
 8565c3c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8565c3f:	89 04 24             	mov    %eax,(%esp)
 8565c42:	e8 39 82 02 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8565c47:	83 c4 40             	add    $0x40,%esp
 8565c4a:	5b                   	pop    %ebx
 8565c4b:	5e                   	pop    %esi
 8565c4c:	5d                   	pop    %ebp
 8565c4d:	c3                   	ret

```

```c
// fair_pvp::CFairMatch::OnReward @ 0x8565966

/* fair_pvp::CFairMatch::OnReward(PvP_Room*, int, bool) */

void __thiscall
fair_pvp::CFairMatch::OnReward(CFairMatch *this,PvP_Room *param_1,int param_2,bool param_3)

{
  PacketGuard local_18 [12];
  
  if (param_3) {
    _UpdateRating(this,1,1);
    _UpdateRating(this,2,1);
    UpdateScore(this,param_1,this + 0x6c,0,0,0,1);
    UpdateScore(this,param_1,this + 0x24,1,0,0,1);
  }
  else if (param_2 == 1) {
    _UpdateRating(this,1,2);
    _UpdateRating(this,2,0);
    UpdateScore(this,param_1,this + 0x6c,0,1,0,0);
    UpdateScore(this,param_1,this + 0x24,1,0,1,0);
  }
  else {
    _UpdateRating(this,2,2);
    _UpdateRating(this,1,0);
    UpdateScore(this,param_1,this + 0x6c,0,0,1,0);
    UpdateScore(this,param_1,this + 0x24,1,1,0,0);
  }
  *(int *)(this + 0xb0) = *(int *)(this + 0xb0) + 1;
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 08565bd2 to 08565c1e has its CatchHandler @ 08565c21 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x13c);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,3 - *(int *)(this + 0xb0));
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  PvP_Room::send_to_pvp(param_1,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}

```

---

## OnStartFight

```asm
// === 08564952 fair_pvp::CFairMatch::OnStartFight  [0x08564952-0x8564961] ===
 8564952:	55                   	push   %ebp
 8564953:	89 e5                	mov    %esp,%ebp
 8564955:	8b 45 08             	mov    0x8(%ebp),%eax
 8564958:	c7 40 04 05 00 00 00 	movl   $0x5,0x4(%eax)
 856495f:	5d                   	pop    %ebp
 8564960:	c3                   	ret
 8564961:	90                   	nop

```

```c
// fair_pvp::CFairMatch::OnStartFight @ 0x8564952

/* fair_pvp::CFairMatch::OnStartFight() */

void __thiscall fair_pvp::CFairMatch::OnStartFight(CFairMatch *this)

{
  *(undefined4 *)(this + 4) = 5;
  return;
}

```

---

## OnUnregisterMatch

```asm
// === 08563cc6 fair_pvp::CFairMatch::OnUnregisterMatch  [0x08563cc6-0x8563d31] ===
 8563cc6:	55                   	push   %ebp
 8563cc7:	89 e5                	mov    %esp,%ebp
 8563cc9:	83 ec 18             	sub    $0x18,%esp
 8563ccc:	8b 45 08             	mov    0x8(%ebp),%eax
 8563ccf:	8b 40 04             	mov    0x4(%eax),%eax
 8563cd2:	83 f8 01             	cmp    $0x1,%eax
 8563cd5:	74 12                	je     8563ce9 <_ZN8fair_pvp10CFairMatch17OnUnregisterMatchEP5CUserP8PvP_Room+0x23>
 8563cd7:	8b 45 08             	mov    0x8(%ebp),%eax
 8563cda:	8b 40 04             	mov    0x4(%eax),%eax
 8563cdd:	83 f8 02             	cmp    $0x2,%eax
 8563ce0:	74 07                	je     8563ce9 <_ZN8fair_pvp10CFairMatch17OnUnregisterMatchEP5CUserP8PvP_Room+0x23>
 8563ce2:	b8 00 00 00 00       	mov    $0x0,%eax
 8563ce7:	eb 47                	jmp    8563d30 <_ZN8fair_pvp10CFairMatch17OnUnregisterMatchEP5CUserP8PvP_Room+0x6a>
 8563ce9:	8b 45 08             	mov    0x8(%ebp),%eax
 8563cec:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 8563cf3:	a1 48 e1 43 09       	mov    0x943e148,%eax
 8563cf8:	8b 00                	mov    (%eax),%eax
 8563cfa:	83 c0 04             	add    $0x4,%eax
 8563cfd:	8b 08                	mov    (%eax),%ecx
 8563cff:	8b 55 08             	mov    0x8(%ebp),%edx
 8563d02:	a1 48 e1 43 09       	mov    0x943e148,%eax
 8563d07:	89 54 24 04          	mov    %edx,0x4(%esp)
 8563d0b:	89 04 24             	mov    %eax,(%esp)
 8563d0e:	ff d1                	call   *%ecx
 8563d10:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8563d17:	00 
 8563d18:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 8563d1f:	00 
 8563d20:	8b 45 08             	mov    0x8(%ebp),%eax
 8563d23:	89 04 24             	mov    %eax,(%esp)
 8563d26:	e8 7b 14 00 00       	call   85651a6 <_ZN8fair_pvp10CFairMatch21_SendMatchStatePacketEii>
 8563d2b:	b8 01 00 00 00       	mov    $0x1,%eax
 8563d30:	c9                   	leave
 8563d31:	c3                   	ret

```

```c
// fair_pvp::CFairMatch::OnUnregisterMatch @ 0x8563cc6

/* fair_pvp::CFairMatch::OnUnregisterMatch(CUser*, PvP_Room*) */

undefined4 fair_pvp::CFairMatch::OnUnregisterMatch(CUser *param_1,PvP_Room *param_2)

{
  undefined4 uVar1;
  
  if ((*(int *)(param_1 + 4) == 1) || (*(int *)(param_1 + 4) == 2)) {
    *(undefined4 *)(param_1 + 4) = 0;
    (**(code **)(*pWaitingRoomList_ + 4))(pWaitingRoomList_,param_1);
    _SendMatchStatePacket((CFairMatch *)param_1,5,1);
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## OnWaitRematch

```asm
// === 0856649a fair_pvp::CFairMatch::OnWaitRematch  [0x0856649a-0x856649f] ===
 856649a:	55                   	push   %ebp
 856649b:	89 e5                	mov    %esp,%ebp
 856649d:	5d                   	pop    %ebp
 856649e:	c3                   	ret
 856649f:	90                   	nop

```

```c
// fair_pvp::CFairMatch::OnWaitRematch @ 0x856649a

/* fair_pvp::CFairMatch::OnWaitRematch(CUser*, PvP_Room*) */

void fair_pvp::CFairMatch::OnWaitRematch(CUser *param_1,PvP_Room *param_2)

{
  return;
}

```

---

## OnWalkOut

```asm
// === 08564fb2 fair_pvp::CFairMatch::OnWalkOut  [0x08564fb2-0x8565017] ===
 8564fb2:	55                   	push   %ebp
 8564fb3:	89 e5                	mov    %esp,%ebp
 8564fb5:	83 ec 38             	sub    $0x38,%esp
 8564fb8:	8b 45 10             	mov    0x10(%ebp),%eax
 8564fbb:	89 44 24 04          	mov    %eax,0x4(%esp)
 8564fbf:	8b 45 0c             	mov    0xc(%ebp),%eax
 8564fc2:	89 04 24             	mov    %eax,(%esp)
 8564fc5:	e8 a8 42 07 00       	call   85d9272 <_ZN8PvP_Room8get_teamEi>
 8564fca:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8564fcd:	8b 45 10             	mov    0x10(%ebp),%eax
 8564fd0:	89 44 24 04          	mov    %eax,0x4(%esp)
 8564fd4:	8b 45 0c             	mov    0xc(%ebp),%eax
 8564fd7:	89 04 24             	mov    %eax,(%esp)
 8564fda:	e8 3f 42 07 00       	call   85d921e <_ZN8PvP_Room13get_user_seatEi>
 8564fdf:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8564fe2:	8b 45 08             	mov    0x8(%ebp),%eax
 8564fe5:	8b 00                	mov    (%eax),%eax
 8564fe7:	83 c0 2c             	add    $0x2c,%eax
 8564fea:	8b 08                	mov    (%eax),%ecx
 8564fec:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8564fef:	8b 55 10             	mov    0x10(%ebp),%edx
 8564ff2:	89 54 24 10          	mov    %edx,0x10(%esp)
 8564ff6:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8564ffa:	8b 45 0c             	mov    0xc(%ebp),%eax
 8564ffd:	89 44 24 08          	mov    %eax,0x8(%esp)
 8565001:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8565004:	89 44 24 04          	mov    %eax,0x4(%esp)
 8565008:	8b 45 08             	mov    0x8(%ebp),%eax
 856500b:	89 04 24             	mov    %eax,(%esp)
 856500e:	ff d1                	call   *%ecx
 8565010:	b8 01 00 00 00       	mov    $0x1,%eax
 8565015:	c9                   	leave
 8565016:	c3                   	ret
 8565017:	90                   	nop

```

```c
// fair_pvp::CFairMatch::OnWalkOut @ 0x8564fb2

/* fair_pvp::CFairMatch::OnWalkOut(PvP_Room*, int) */

undefined4 __thiscall
fair_pvp::CFairMatch::OnWalkOut(CFairMatch *this,PvP_Room *param_1,int param_2)

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
// === 08562bae fair_pvp::CFairMatch::RequestMap  [0x08562bae-0x8562bdb] ===
 8562bae:	55                   	push   %ebp
 8562baf:	89 e5                	mov    %esp,%ebp
 8562bb1:	83 ec 18             	sub    $0x18,%esp
 8562bb4:	8b 45 0c             	mov    0xc(%ebp),%eax
 8562bb7:	66 c7 00 00 00       	movw   $0x0,(%eax)
 8562bbc:	8b 45 10             	mov    0x10(%ebp),%eax
 8562bbf:	8b 00                	mov    (%eax),%eax
 8562bc1:	83 f8 06             	cmp    $0x6,%eax
 8562bc4:	74 14                	je     8562bda <_ZN8fair_pvp10CFairMatch10RequestMapERsR15PVP_BATTLE_MODE+0x2c>
 8562bc6:	e8 d0 95 b6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8562bcb:	89 04 24             	mov    %eax,(%esp)
 8562bce:	e8 db a8 ee ff       	call   844d4ae <_ZN12CDataManager10GetPvPModeEv>
 8562bd3:	89 c2                	mov    %eax,%edx
 8562bd5:	8b 45 10             	mov    0x10(%ebp),%eax
 8562bd8:	89 10                	mov    %edx,(%eax)
 8562bda:	c9                   	leave
 8562bdb:	c3                   	ret

```

```c
// fair_pvp::CFairMatch::RequestMap @ 0x8562bae

/* fair_pvp::CFairMatch::RequestMap(short&, PVP_BATTLE_MODE&) */

void __thiscall
fair_pvp::CFairMatch::RequestMap(CFairMatch *this,short *param_1,PVP_BATTLE_MODE *param_2)

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
// === 08562b96 fair_pvp::CFairMatch::SetMatchAble  [0x08562b96-0x8562bad] ===
 8562b96:	55                   	push   %ebp
 8562b97:	89 e5                	mov    %esp,%ebp
 8562b99:	83 ec 04             	sub    $0x4,%esp
 8562b9c:	8b 45 08             	mov    0x8(%ebp),%eax
 8562b9f:	88 45 fc             	mov    %al,-0x4(%ebp)
 8562ba2:	0f b6 45 fc          	movzbl -0x4(%ebp),%eax
 8562ba6:	a2 76 bb 3a 09       	mov    %al,0x93abb76
 8562bab:	c9                   	leave
 8562bac:	c3                   	ret
 8562bad:	90                   	nop

```

```c
// fair_pvp::CFairMatch::SetMatchAble @ 0x8562b96

/* fair_pvp::CFairMatch::SetMatchAble(bool) */

void fair_pvp::CFairMatch::SetMatchAble(bool param_1)

{
  bMatchable_ = param_1;
  return;
}

```

---

## SetPlayCountPerOneTeam

```asm
// === 08562b90 fair_pvp::CFairMatch::SetPlayCountPerOneTeam  [0x08562b90-0x8562b95] ===
 8562b90:	55                   	push   %ebp
 8562b91:	89 e5                	mov    %esp,%ebp
 8562b93:	5d                   	pop    %ebp
 8562b94:	c3                   	ret
 8562b95:	90                   	nop

```

```c
// fair_pvp::CFairMatch::SetPlayCountPerOneTeam @ 0x8562b90

/* fair_pvp::CFairMatch::SetPlayCountPerOneTeam(unsigned int) */

void fair_pvp::CFairMatch::SetPlayCountPerOneTeam(uint param_1)

{
  return;
}

```

---

## UpdateScore

```asm
// === 08565700 fair_pvp::CFairMatch::UpdateScore  [0x08565700-0x8565965] ===
 8565700:	55                   	push   %ebp
 8565701:	89 e5                	mov    %esp,%ebp
 8565703:	57                   	push   %edi
 8565704:	56                   	push   %esi
 8565705:	53                   	push   %ebx
 8565706:	83 ec 6c             	sub    $0x6c,%esp
 8565709:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 8565710:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 8565717:	e9 2d 02 00 00       	jmp    8565949 <_ZN8fair_pvp10CFairMatch11UpdateScoreEP8PvP_RoomRNS_15PlayerInfoThirdE22ENUM_SCHOOL_MATCH_TEAMiii+0x249>
 856571c:	8b 55 14             	mov    0x14(%ebp),%edx
 856571f:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8565722:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8565725:	89 c3                	mov    %eax,%ebx
 8565727:	c1 e3 04             	shl    $0x4,%ebx
 856572a:	89 d0                	mov    %edx,%eax
 856572c:	c1 e0 03             	shl    $0x3,%eax
 856572f:	01 d0                	add    %edx,%eax
 8565731:	c1 e0 03             	shl    $0x3,%eax
 8565734:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 8565737:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 856573a:	83 c0 24             	add    $0x24,%eax
 856573d:	8b 00                	mov    (%eax),%eax
 856573f:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8565742:	8b 55 14             	mov    0x14(%ebp),%edx
 8565745:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8565748:	8b 4d 08             	mov    0x8(%ebp),%ecx
 856574b:	89 c3                	mov    %eax,%ebx
 856574d:	c1 e3 04             	shl    $0x4,%ebx
 8565750:	89 d0                	mov    %edx,%eax
 8565752:	c1 e0 03             	shl    $0x3,%eax
 8565755:	01 d0                	add    %edx,%eax
 8565757:	c1 e0 03             	shl    $0x3,%eax
 856575a:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 856575d:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8565760:	83 c0 10             	add    $0x10,%eax
 8565763:	0f b6 40 18          	movzbl 0x18(%eax),%eax
 8565767:	84 c0                	test   %al,%al
 8565769:	0f 84 d6 01 00 00    	je     8565945 <_ZN8fair_pvp10CFairMatch11UpdateScoreEP8PvP_RoomRNS_15PlayerInfoThirdE22ENUM_SCHOOL_MATCH_TEAMiii+0x245>
 856576f:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 8565773:	0f 84 cc 01 00 00    	je     8565945 <_ZN8fair_pvp10CFairMatch11UpdateScoreEP8PvP_RoomRNS_15PlayerInfoThirdE22ENUM_SCHOOL_MATCH_TEAMiii+0x245>
 8565779:	8b 45 dc             	mov    -0x24(%ebp),%eax
 856577c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8565780:	8b 45 0c             	mov    0xc(%ebp),%eax
 8565783:	89 04 24             	mov    %eax,(%esp)
 8565786:	e8 57 3a 07 00       	call   85d91e2 <_ZN8PvP_Room13get_user_seatEP5CUser>
 856578b:	89 45 e0             	mov    %eax,-0x20(%ebp)
 856578e:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 8565792:	0f 88 c2 01 00 00    	js     856595a <_ZN8fair_pvp10CFairMatch11UpdateScoreEP8PvP_RoomRNS_15PlayerInfoThirdE22ENUM_SCHOOL_MATCH_TEAMiii+0x25a>
 8565798:	83 7d e0 07          	cmpl   $0x7,-0x20(%ebp)
 856579c:	0f 8f bb 01 00 00    	jg     856595d <_ZN8fair_pvp10CFairMatch11UpdateScoreEP8PvP_RoomRNS_15PlayerInfoThirdE22ENUM_SCHOOL_MATCH_TEAMiii+0x25d>
 85657a2:	8b 45 0c             	mov    0xc(%ebp),%eax
 85657a5:	89 04 24             	mov    %eax,(%esp)
 85657a8:	e8 1f 82 cc ff       	call   822d9cc <_ZN8PvP_Room19get_pvp_battle_modeEv>
 85657ad:	89 45 b0             	mov    %eax,-0x50(%ebp)
 85657b0:	8b 45 0c             	mov    0xc(%ebp),%eax
 85657b3:	89 04 24             	mov    %eax,(%esp)
 85657b6:	e8 d9 81 cc ff       	call   822d994 <_ZN8PvP_Room9get_indexEv>
 85657bb:	89 c7                	mov    %eax,%edi
 85657bd:	8b 45 dc             	mov    -0x24(%ebp),%eax
 85657c0:	89 04 24             	mov    %eax,(%esp)
 85657c3:	e8 60 b8 b9 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 85657c8:	89 c6                	mov    %eax,%esi
 85657ca:	8b 45 dc             	mov    -0x24(%ebp),%eax
 85657cd:	89 04 24             	mov    %eax,(%esp)
 85657d0:	e8 9d b8 b9 ff       	call   8101072 <_ZNK5CUser12get_acc_nameEv>
 85657d5:	89 c3                	mov    %eax,%ebx
 85657d7:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 85657de:	00 
 85657df:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 85657e6:	00 
 85657e7:	c7 44 24 08 e5 0e 00 	movl   $0xee5,0x8(%esp)
 85657ee:	00 
 85657ef:	c7 44 24 04 20 37 ca 	movl   $0x8ca3720,0x4(%esp)
 85657f6:	08 
 85657f7:	8d 45 c8             	lea    -0x38(%ebp),%eax
 85657fa:	89 04 24             	mov    %eax,(%esp)
 85657fd:	e8 3a a5 fe ff       	call   854fd3c <_ZN10CSwitchLogC1EPKciii>
 8565802:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8565805:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 8565809:	8b 45 18             	mov    0x18(%ebp),%eax
 856580c:	89 44 24 18          	mov    %eax,0x18(%esp)
 8565810:	8b 45 b0             	mov    -0x50(%ebp),%eax
 8565813:	89 44 24 14          	mov    %eax,0x14(%esp)
 8565817:	89 7c 24 10          	mov    %edi,0x10(%esp)
 856581b:	89 74 24 0c          	mov    %esi,0xc(%esp)
 856581f:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8565823:	c7 44 24 04 84 24 ca 	movl   $0x8ca2484,0x4(%esp)
 856582a:	08 
 856582b:	8d 45 c8             	lea    -0x38(%ebp),%eax
 856582e:	89 04 24             	mov    %eax,(%esp)
 8565831:	e8 2e a5 fe ff       	call   854fd64 <_ZN10CSwitchLogclEPKcz>
 8565836:	8b 45 0c             	mov    0xc(%ebp),%eax
 8565839:	8d 90 20 06 00 00    	lea    0x620(%eax),%edx
 856583f:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8565842:	89 44 24 04          	mov    %eax,0x4(%esp)
 8565846:	89 14 24             	mov    %edx,(%esp)
 8565849:	e8 a0 34 00 00       	call   8568cee <_ZN15CRelayBattleMgr12GetKillCountEi>
 856584e:	89 c3                	mov    %eax,%ebx
 8565850:	e8 df cf ff ff       	call   8562834 <_ZN8fair_pvp10CFairMatch22GetPlayCountPerOneTeamEv>
 8565855:	0f b6 f8             	movzbl %al,%edi
 8565858:	8b 45 10             	mov    0x10(%ebp),%eax
 856585b:	0f b6 40 06          	movzbl 0x6(%eax),%eax
 856585f:	0f b6 c0             	movzbl %al,%eax
 8565862:	89 c2                	mov    %eax,%edx
 8565864:	83 e2 0f             	and    $0xf,%edx
 8565867:	89 55 b4             	mov    %edx,-0x4c(%ebp)
 856586a:	8b 45 10             	mov    0x10(%ebp),%eax
 856586d:	0f b6 40 05          	movzbl 0x5(%eax),%eax
 8565871:	0f b6 f0             	movzbl %al,%esi
 8565874:	c7 44 24 04 07 00 00 	movl   $0x7,0x4(%esp)
 856587b:	00 
 856587c:	8b 45 dc             	mov    -0x24(%ebp),%eax
 856587f:	89 04 24             	mov    %eax,(%esp)
 8565882:	e8 fd 7c b7 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 8565887:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 856588b:	8b 55 20             	mov    0x20(%ebp),%edx
 856588e:	89 54 24 18          	mov    %edx,0x18(%esp)
 8565892:	8b 55 1c             	mov    0x1c(%ebp),%edx
 8565895:	89 54 24 14          	mov    %edx,0x14(%esp)
 8565899:	8b 55 18             	mov    0x18(%ebp),%edx
 856589c:	89 54 24 10          	mov    %edx,0x10(%esp)
 85658a0:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 85658a4:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 85658a7:	89 54 24 08          	mov    %edx,0x8(%esp)
 85658ab:	89 74 24 04          	mov    %esi,0x4(%esp)
 85658af:	89 04 24             	mov    %eax,(%esp)
 85658b2:	e8 71 01 f4 ff       	call   84a5a28 <_ZN8fair_pvp13CFairPvPScore11UpdateScoreEiiiiiii>
 85658b7:	c7 44 24 04 08 00 00 	movl   $0x8,0x4(%esp)
 85658be:	00 
 85658bf:	8b 45 dc             	mov    -0x24(%ebp),%eax
 85658c2:	89 04 24             	mov    %eax,(%esp)
 85658c5:	e8 ba 7c b7 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 85658ca:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 85658cd:	e8 62 cf ff ff       	call   8562834 <_ZN8fair_pvp10CFairMatch22GetPlayCountPerOneTeamEv>
 85658d2:	3c 01                	cmp    $0x1,%al
 85658d4:	75 07                	jne    85658dd <_ZN8fair_pvp10CFairMatch11UpdateScoreEP8PvP_RoomRNS_15PlayerInfoThirdE22ENUM_SCHOOL_MATCH_TEAMiii+0x1dd>
 85658d6:	b8 02 00 00 00       	mov    $0x2,%eax
 85658db:	eb 05                	jmp    85658e2 <_ZN8fair_pvp10CFairMatch11UpdateScoreEP8PvP_RoomRNS_15PlayerInfoThirdE22ENUM_SCHOOL_MATCH_TEAMiii+0x1e2>
 85658dd:	b8 03 00 00 00       	mov    $0x3,%eax
 85658e2:	89 44 24 04          	mov    %eax,0x4(%esp)
 85658e6:	8d 45 b9             	lea    -0x47(%ebp),%eax
 85658e9:	89 04 24             	mov    %eax,(%esp)
 85658ec:	e8 53 c1 07 00       	call   85e1a44 <_ZN31MissionClearCondition_ParameterC1E15PVP_BATTLE_MODE>
 85658f1:	8b 45 0c             	mov    0xc(%ebp),%eax
 85658f4:	8d 90 20 06 00 00    	lea    0x620(%eax),%edx
 85658fa:	8b 45 e0             	mov    -0x20(%ebp),%eax
 85658fd:	89 44 24 04          	mov    %eax,0x4(%esp)
 8565901:	89 14 24             	mov    %edx,(%esp)
 8565904:	e8 e5 33 00 00       	call   8568cee <_ZN15CRelayBattleMgr12GetKillCountEi>
 8565909:	89 45 bc             	mov    %eax,-0x44(%ebp)
 856590c:	8d 45 b9             	lea    -0x47(%ebp),%eax
 856590f:	89 44 24 08          	mov    %eax,0x8(%esp)
 8565913:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8565916:	89 44 24 04          	mov    %eax,0x4(%esp)
 856591a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 856591d:	89 04 24             	mov    %eax,(%esp)
 8565920:	e8 25 05 08 00       	call   85e5e4a <_ZN19CMissionList_Charac21Update_GameOver_eventER5CUserRK31MissionClearCondition_Parameter>
 8565925:	83 7d 18 00          	cmpl   $0x0,0x18(%ebp)
 8565929:	0f 95 c0             	setne  %al
 856592c:	0f b6 c0             	movzbl %al,%eax
 856592f:	89 44 24 08          	mov    %eax,0x8(%esp)
 8565933:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8565936:	89 44 24 04          	mov    %eax,0x4(%esp)
 856593a:	8b 45 08             	mov    0x8(%ebp),%eax
 856593d:	89 04 24             	mov    %eax,(%esp)
 8565940:	e8 83 f9 ff ff       	call   85652c8 <_ZN8fair_pvp10CFairMatch16GiveTrainingSealEP5CUserb>
 8565945:	83 45 d8 01          	addl   $0x1,-0x28(%ebp)
 8565949:	83 7d d8 03          	cmpl   $0x3,-0x28(%ebp)
 856594d:	0f 9e c0             	setle  %al
 8565950:	84 c0                	test   %al,%al
 8565952:	0f 85 c4 fd ff ff    	jne    856571c <_ZN8fair_pvp10CFairMatch11UpdateScoreEP8PvP_RoomRNS_15PlayerInfoThirdE22ENUM_SCHOOL_MATCH_TEAMiii+0x1c>
 8565958:	eb 04                	jmp    856595e <_ZN8fair_pvp10CFairMatch11UpdateScoreEP8PvP_RoomRNS_15PlayerInfoThirdE22ENUM_SCHOOL_MATCH_TEAMiii+0x25e>
 856595a:	90                   	nop
 856595b:	eb 01                	jmp    856595e <_ZN8fair_pvp10CFairMatch11UpdateScoreEP8PvP_RoomRNS_15PlayerInfoThirdE22ENUM_SCHOOL_MATCH_TEAMiii+0x25e>
 856595d:	90                   	nop
 856595e:	83 c4 6c             	add    $0x6c,%esp
 8565961:	5b                   	pop    %ebx
 8565962:	5e                   	pop    %esi
 8565963:	5f                   	pop    %edi
 8565964:	5d                   	pop    %ebp
 8565965:	c3                   	ret

```

```c
// fair_pvp::CFairMatch::UpdateScore @ 0x8565700

/* fair_pvp::CFairMatch::UpdateScore(PvP_Room*, fair_pvp::PlayerInfoThird&, ENUM_SCHOOL_MATCH_TEAM,
   int, int, int) */

void __thiscall
fair_pvp::CFairMatch::UpdateScore
          (CFairMatch *this,PvP_Room *param_1,int param_2,int param_4,int param_5,int param_6,
          int param_7)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  CFairPvPScore *this_00;
  MissionClearCondition_Parameter local_4b [3];
  undefined4 local_48;
  CSwitchLog local_3c [16];
  int local_2c;
  CUser *local_28;
  int local_24;
  CMissionList_Charac *local_20;
  
  local_2c = 0;
  do {
    if (3 < local_2c) {
      return;
    }
    local_28 = *(CUser **)(this + local_2c * 0x10 + param_4 * 0x48 + 0x24);
    if ((this[local_2c * 0x10 + param_4 * 0x48 + 0x28] != (CFairMatch)0x0) &&
       (local_28 != (CUser *)0x0)) {
      local_24 = PvP_Room::get_user_seat(param_1,local_28);
      if (local_24 < 0) {
        return;
      }
      if (7 < local_24) {
        return;
      }
      uVar4 = PvP_Room::get_pvp_battle_mode(param_1);
      uVar5 = PvP_Room::get_index(param_1);
      uVar6 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)local_28);
      uVar7 = CUser::get_acc_name(local_28);
      CSwitchLog::CSwitchLog
                (local_3c,
                 "void fair_pvp::CFairMatch::UpdateScore(PvP_Room*, fair_pvp::PlayerInfoThird&, ENUM_SCHOOL_MATCH_TEAM, int, int, int)"
                 ,0xee5,0,0);
      CSwitchLog::operator()
                (local_3c,"pvp@log %s,%s,room(%d),%d,%d,%d",uVar7,uVar6,uVar5,uVar4,param_5,param_6)
      ;
      iVar8 = CRelayBattleMgr::GetKillCount((CRelayBattleMgr *)(param_1 + 0x620),local_24);
      uVar9 = GetPlayCountPerOneTeam();
      bVar1 = *(byte *)(param_2 + 6);
      bVar2 = *(byte *)(param_2 + 5);
      this_00 = (CFairPvPScore *)CUser::GetCharacExpandData(local_28,7);
      CFairPvPScore::UpdateScore
                (this_00,(uint)bVar2,bVar1 & 0xf,uVar9 & 0xff,param_5,param_6,param_7,iVar8);
      local_20 = (CMissionList_Charac *)CUser::GetCharacExpandData(local_28,8);
      cVar3 = GetPlayCountPerOneTeam();
      if (cVar3 == '\x01') {
        uVar4 = 2;
      }
      else {
        uVar4 = 3;
      }
      MissionClearCondition_Parameter::MissionClearCondition_Parameter(local_4b,uVar4);
      local_48 = CRelayBattleMgr::GetKillCount((CRelayBattleMgr *)(param_1 + 0x620),local_24);
      CMissionList_Charac::Update_GameOver_event(local_20,local_28,local_4b);
      GiveTrainingSeal(this,local_28,param_5 != 0);
    }
    local_2c = local_2c + 1;
  } while( true );
}

```

---

## _BackupRoomInfo

```asm
// === 08563674 fair_pvp::CFairMatch::_BackupRoomInfo  [0x08563674-0x8563691] ===
 8563674:	55                   	push   %ebp
 8563675:	89 e5                	mov    %esp,%ebp
 8563677:	83 ec 18             	sub    $0x18,%esp
 856367a:	8b 45 08             	mov    0x8(%ebp),%eax
 856367d:	83 c0 08             	add    $0x8,%eax
 8563680:	89 44 24 04          	mov    %eax,0x4(%esp)
 8563684:	8b 45 0c             	mov    0xc(%ebp),%eax
 8563687:	89 04 24             	mov    %eax,(%esp)
 856368a:	e8 07 5c 07 00       	call   85d9296 <_ZN8PvP_Room13get_room_infoEP13PVP_ROOM_INFO>
 856368f:	c9                   	leave
 8563690:	c3                   	ret
 8563691:	90                   	nop

```

```c
// fair_pvp::CFairMatch::_BackupRoomInfo @ 0x8563674

/* fair_pvp::CFairMatch::_BackupRoomInfo(PvP_Room*) */

void __thiscall fair_pvp::CFairMatch::_BackupRoomInfo(CFairMatch *this,PvP_Room *param_1)

{
  PvP_Room::get_room_info(param_1,(PVP_ROOM_INFO *)(this + 8));
  return;
}

```

---

## _ChangeTeamLeader

```asm
// === 08563272 fair_pvp::CFairMatch::_ChangeTeamLeader  [0x08563272-0x85633cd] ===
 8563272:	55                   	push   %ebp
 8563273:	89 e5                	mov    %esp,%ebp
 8563275:	56                   	push   %esi
 8563276:	53                   	push   %ebx
 8563277:	83 ec 30             	sub    $0x30,%esp
 856327a:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8563281:	8b 55 10             	mov    0x10(%ebp),%edx
 8563284:	8b 45 08             	mov    0x8(%ebp),%eax
 8563287:	83 c2 2c             	add    $0x2c,%edx
 856328a:	8b 44 90 08          	mov    0x8(%eax,%edx,4),%eax
 856328e:	3b 45 14             	cmp    0x14(%ebp),%eax
 8563291:	75 69                	jne    85632fc <_ZN8fair_pvp10CFairMatch17_ChangeTeamLeaderEP8PvP_Room22ENUM_SCHOOL_MATCH_TEAMi+0x8a>
 8563293:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 856329a:	eb 55                	jmp    85632f1 <_ZN8fair_pvp10CFairMatch17_ChangeTeamLeaderEP8PvP_Room22ENUM_SCHOOL_MATCH_TEAMi+0x7f>
 856329c:	8b 55 10             	mov    0x10(%ebp),%edx
 856329f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85632a2:	8b 4d 08             	mov    0x8(%ebp),%ecx
 85632a5:	89 c3                	mov    %eax,%ebx
 85632a7:	c1 e3 04             	shl    $0x4,%ebx
 85632aa:	89 d0                	mov    %edx,%eax
 85632ac:	c1 e0 03             	shl    $0x3,%eax
 85632af:	01 d0                	add    %edx,%eax
 85632b1:	c1 e0 03             	shl    $0x3,%eax
 85632b4:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 85632b7:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 85632ba:	83 c0 10             	add    $0x10,%eax
 85632bd:	0f b6 40 18          	movzbl 0x18(%eax),%eax
 85632c1:	84 c0                	test   %al,%al
 85632c3:	74 28                	je     85632ed <_ZN8fair_pvp10CFairMatch17_ChangeTeamLeaderEP8PvP_Room22ENUM_SCHOOL_MATCH_TEAMi+0x7b>
 85632c5:	8b 55 10             	mov    0x10(%ebp),%edx
 85632c8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85632cb:	8b 4d 08             	mov    0x8(%ebp),%ecx
 85632ce:	89 c3                	mov    %eax,%ebx
 85632d0:	c1 e3 04             	shl    $0x4,%ebx
 85632d3:	89 d0                	mov    %edx,%eax
 85632d5:	c1 e0 03             	shl    $0x3,%eax
 85632d8:	01 d0                	add    %edx,%eax
 85632da:	c1 e0 03             	shl    $0x3,%eax
 85632dd:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 85632e0:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 85632e3:	83 c0 24             	add    $0x24,%eax
 85632e6:	8b 00                	mov    (%eax),%eax
 85632e8:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85632eb:	eb 0f                	jmp    85632fc <_ZN8fair_pvp10CFairMatch17_ChangeTeamLeaderEP8PvP_Room22ENUM_SCHOOL_MATCH_TEAMi+0x8a>
 85632ed:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 85632f1:	83 7d f4 03          	cmpl   $0x3,-0xc(%ebp)
 85632f5:	0f 9e c0             	setle  %al
 85632f8:	84 c0                	test   %al,%al
 85632fa:	75 a0                	jne    856329c <_ZN8fair_pvp10CFairMatch17_ChangeTeamLeaderEP8PvP_Room22ENUM_SCHOOL_MATCH_TEAMi+0x2a>
 85632fc:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8563300:	0f 84 c1 00 00 00    	je     85633c7 <_ZN8fair_pvp10CFairMatch17_ChangeTeamLeaderEP8PvP_Room22ENUM_SCHOOL_MATCH_TEAMi+0x155>
 8563306:	8b 5d 10             	mov    0x10(%ebp),%ebx
 8563309:	8b 45 f0             	mov    -0x10(%ebp),%eax
 856330c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8563310:	8b 45 0c             	mov    0xc(%ebp),%eax
 8563313:	89 04 24             	mov    %eax,(%esp)
 8563316:	e8 c7 5e 07 00       	call   85d91e2 <_ZN8PvP_Room13get_user_seatEP5CUser>
 856331b:	8b 55 08             	mov    0x8(%ebp),%edx
 856331e:	8d 4b 2c             	lea    0x2c(%ebx),%ecx
 8563321:	89 44 8a 08          	mov    %eax,0x8(%edx,%ecx,4)
 8563325:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8563328:	89 04 24             	mov    %eax,(%esp)
 856332b:	e8 1c aa 02 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8563330:	c7 44 24 08 3d 01 00 	movl   $0x13d,0x8(%esp)
 8563337:	00 
 8563338:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 856333f:	00 
 8563340:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8563343:	89 04 24             	mov    %eax,(%esp)
 8563346:	e8 b1 85 b6 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 856334b:	8b 55 10             	mov    0x10(%ebp),%edx
 856334e:	8b 45 08             	mov    0x8(%ebp),%eax
 8563351:	83 c2 2c             	add    $0x2c,%edx
 8563354:	8b 44 90 08          	mov    0x8(%eax,%edx,4),%eax
 8563358:	89 44 24 04          	mov    %eax,0x4(%esp)
 856335c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 856335f:	89 04 24             	mov    %eax,(%esp)
 8563362:	e8 3d 6b b7 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8563367:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 856336e:	00 
 856336f:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8563372:	89 04 24             	mov    %eax,(%esp)
 8563375:	e8 de 85 b6 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 856337a:	8b 55 10             	mov    0x10(%ebp),%edx
 856337d:	89 d0                	mov    %edx,%eax
 856337f:	c1 e0 03             	shl    $0x3,%eax
 8563382:	01 d0                	add    %edx,%eax
 8563384:	c1 e0 03             	shl    $0x3,%eax
 8563387:	83 c0 10             	add    $0x10,%eax
 856338a:	03 45 08             	add    0x8(%ebp),%eax
 856338d:	8d 50 0c             	lea    0xc(%eax),%edx
 8563390:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8563393:	89 44 24 04          	mov    %eax,0x4(%esp)
 8563397:	89 14 24             	mov    %edx,(%esp)
 856339a:	e8 ad f3 ff ff       	call   856274c <_ZN8fair_pvp13TeamInfoThird10SendToTeamER11PacketGuard>
 856339f:	eb 1b                	jmp    85633bc <_ZN8fair_pvp10CFairMatch17_ChangeTeamLeaderEP8PvP_Room22ENUM_SCHOOL_MATCH_TEAMi+0x14a>
 85633a1:	89 d3                	mov    %edx,%ebx
 85633a3:	89 c6                	mov    %eax,%esi
 85633a5:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85633a8:	89 04 24             	mov    %eax,(%esp)
 85633ab:	e8 d0 aa 02 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 85633b0:	89 f0                	mov    %esi,%eax
 85633b2:	89 da                	mov    %ebx,%edx
 85633b4:	89 04 24             	mov    %eax,(%esp)
 85633b7:	e8 94 03 58 00       	call   8ae3750 <_Unwind_Resume>
 85633bc:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85633bf:	89 04 24             	mov    %eax,(%esp)
 85633c2:	e8 b9 aa 02 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 85633c7:	83 c4 30             	add    $0x30,%esp
 85633ca:	5b                   	pop    %ebx
 85633cb:	5e                   	pop    %esi
 85633cc:	5d                   	pop    %ebp
 85633cd:	c3                   	ret

```

```c
// fair_pvp::CFairMatch::_ChangeTeamLeader @ 0x8563272

/* fair_pvp::CFairMatch::_ChangeTeamLeader(PvP_Room*, ENUM_SCHOOL_MATCH_TEAM, int) */

void __thiscall
fair_pvp::CFairMatch::_ChangeTeamLeader(CFairMatch *this,PvP_Room *param_1,int param_3,int param_4)

{
  undefined4 uVar1;
  PacketGuard local_20 [12];
  CUser *local_14;
  int local_10;
  
  local_14 = (CUser *)0x0;
  if (*(int *)(this + (param_3 + 0x2c) * 4 + 8) == param_4) {
    for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
      if (this[local_10 * 0x10 + param_3 * 0x48 + 0x28] != (CFairMatch)0x0) {
        local_14 = *(CUser **)(this + local_10 * 0x10 + param_3 * 0x48 + 0x24);
        break;
      }
    }
  }
  if (local_14 != (CUser *)0x0) {
    uVar1 = PvP_Room::get_user_seat(param_1,local_14);
    *(undefined4 *)(this + (param_3 + 0x2c) * 4 + 8) = uVar1;
    PacketGuard::PacketGuard(local_20);
                    /* try { // try from 08563346 to 0856339e has its CatchHandler @ 085633a1 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0x13d);
    InterfacePacketBuf::put_short
              ((InterfacePacketBuf *)local_20,*(int *)(this + (param_3 + 0x2c) * 4 + 8));
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
    TeamInfoThird::SendToTeam((TeamInfoThird *)(this + param_3 * 0x48 + 0x1c),local_20);
    PacketGuard::~PacketGuard(local_20);
  }
  return;
}

```

---

## _CheckMatchable

```asm
// === 08563a54 fair_pvp::CFairMatch::_CheckMatchable  [0x08563a54-0x8563b15] ===
 8563a54:	55                   	push   %ebp
 8563a55:	89 e5                	mov    %esp,%ebp
 8563a57:	53                   	push   %ebx
 8563a58:	83 ec 24             	sub    $0x24,%esp
 8563a5b:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8563a62:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8563a69:	eb 69                	jmp    8563ad4 <_ZNK8fair_pvp10CFairMatch15_CheckMatchableEP8PvP_Room+0x80>
 8563a6b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8563a6e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8563a72:	8b 45 0c             	mov    0xc(%ebp),%eax
 8563a75:	89 04 24             	mov    %eax,(%esp)
 8563a78:	e8 f5 57 07 00       	call   85d9272 <_ZN8PvP_Room8get_teamEi>
 8563a7d:	83 f8 03             	cmp    $0x3,%eax
 8563a80:	0f 94 c0             	sete   %al
 8563a83:	84 c0                	test   %al,%al
 8563a85:	74 04                	je     8563a8b <_ZNK8fair_pvp10CFairMatch15_CheckMatchableEP8PvP_Room+0x37>
 8563a87:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 8563a8b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8563a8e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8563a92:	8b 45 0c             	mov    0xc(%ebp),%eax
 8563a95:	89 04 24             	mov    %eax,(%esp)
 8563a98:	e8 81 57 07 00       	call   85d921e <_ZN8PvP_Room13get_user_seatEi>
 8563a9d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8563aa0:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8563aa4:	74 2a                	je     8563ad0 <_ZNK8fair_pvp10CFairMatch15_CheckMatchableEP8PvP_Room+0x7c>
 8563aa6:	e8 f0 86 b6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8563aab:	89 04 24             	mov    %eax,(%esp)
 8563aae:	e8 a7 7b cc ff       	call   822b65a <_ZN12CDataManager21GetMaxGradePvPChannelEv>
 8563ab3:	89 c3                	mov    %eax,%ebx
 8563ab5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8563ab8:	89 04 24             	mov    %eax,(%esp)
 8563abb:	e8 8a b3 c3 ff       	call   819ee4a <_ZNK15CUserCharacInfo13get_pvp_gradeEv>
 8563ac0:	39 c3                	cmp    %eax,%ebx
 8563ac2:	0f 9c c0             	setl   %al
 8563ac5:	84 c0                	test   %al,%al
 8563ac7:	74 07                	je     8563ad0 <_ZNK8fair_pvp10CFairMatch15_CheckMatchableEP8PvP_Room+0x7c>
 8563ac9:	b8 0d 00 00 00       	mov    $0xd,%eax
 8563ace:	eb 3f                	jmp    8563b0f <_ZNK8fair_pvp10CFairMatch15_CheckMatchableEP8PvP_Room+0xbb>
 8563ad0:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8563ad4:	83 7d f0 07          	cmpl   $0x7,-0x10(%ebp)
 8563ad8:	0f 9e c0             	setle  %al
 8563adb:	84 c0                	test   %al,%al
 8563add:	75 8c                	jne    8563a6b <_ZNK8fair_pvp10CFairMatch15_CheckMatchableEP8PvP_Room+0x17>
 8563adf:	8b 45 08             	mov    0x8(%ebp),%eax
 8563ae2:	83 c0 1c             	add    $0x1c,%eax
 8563ae5:	89 04 24             	mov    %eax,(%esp)
 8563ae8:	e8 1f ec ff ff       	call   856270c <_ZNK8fair_pvp13TeamInfoThird4sizeEv>
 8563aed:	89 c3                	mov    %eax,%ebx
 8563aef:	2b 5d ec             	sub    -0x14(%ebp),%ebx
 8563af2:	e8 3d ed ff ff       	call   8562834 <_ZN8fair_pvp10CFairMatch22GetPlayCountPerOneTeamEv>
 8563af7:	0f b6 c0             	movzbl %al,%eax
 8563afa:	39 c3                	cmp    %eax,%ebx
 8563afc:	0f 9f c0             	setg   %al
 8563aff:	84 c0                	test   %al,%al
 8563b01:	74 07                	je     8563b0a <_ZNK8fair_pvp10CFairMatch15_CheckMatchableEP8PvP_Room+0xb6>
 8563b03:	b8 16 00 00 00       	mov    $0x16,%eax
 8563b08:	eb 05                	jmp    8563b0f <_ZNK8fair_pvp10CFairMatch15_CheckMatchableEP8PvP_Room+0xbb>
 8563b0a:	b8 00 00 00 00       	mov    $0x0,%eax
 8563b0f:	83 c4 24             	add    $0x24,%esp
 8563b12:	5b                   	pop    %ebx
 8563b13:	5d                   	pop    %ebp
 8563b14:	c3                   	ret
 8563b15:	90                   	nop

```

```c
// fair_pvp::CFairMatch::_CheckMatchable @ 0x8563a54

/* fair_pvp::CFairMatch::_CheckMatchable(PvP_Room*) const */

undefined4 __thiscall fair_pvp::CFairMatch::_CheckMatchable(CFairMatch *this,PvP_Room *param_1)

{
  CUserCharacInfo *this_00;
  CDataManager *this_01;
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int local_18;
  int local_14;
  
  local_18 = 0;
  local_14 = 0;
  do {
    if (7 < local_14) {
      iVar2 = TeamInfoThird::size((TeamInfoThird *)(this + 0x1c));
      uVar3 = GetPlayCountPerOneTeam();
      if ((int)(uVar3 & 0xff) < iVar2 - local_18) {
        uVar4 = 0x16;
      }
      else {
        uVar4 = 0;
      }
      return uVar4;
    }
    iVar2 = PvP_Room::get_team(param_1,local_14);
    if (iVar2 == 3) {
      local_18 = local_18 + 1;
    }
    this_00 = (CUserCharacInfo *)PvP_Room::get_user_seat(param_1,local_14);
    if (this_00 != (CUserCharacInfo *)0x0) {
      this_01 = (CDataManager *)G_CDataManager();
      iVar2 = CDataManager::GetMaxGradePvPChannel(this_01);
      iVar1 = CUserCharacInfo::get_pvp_grade(this_00);
      if (iVar2 < iVar1) {
        return 0xd;
      }
    }
    local_14 = local_14 + 1;
  } while( true );
}

```

---

## _CheckMovableRoom

```asm
// === 08563ed8 fair_pvp::CFairMatch::_CheckMovableRoom  [0x08563ed8-0x8563ff6] ===
 8563ed8:	55                   	push   %ebp
 8563ed9:	89 e5                	mov    %esp,%ebp
 8563edb:	83 ec 48             	sub    $0x48,%esp
 8563ede:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8563ee2:	75 0a                	jne    8563eee <_ZN8fair_pvp10CFairMatch17_CheckMovableRoomEP6IMatchP8PvP_RoomPS4_+0x16>
 8563ee4:	b8 00 00 00 00       	mov    $0x0,%eax
 8563ee9:	e9 07 01 00 00       	jmp    8563ff5 <_ZN8fair_pvp10CFairMatch17_CheckMovableRoomEP6IMatchP8PvP_RoomPS4_+0x11d>
 8563eee:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8563ef5:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8563efc:	eb 2b                	jmp    8563f29 <_ZN8fair_pvp10CFairMatch17_CheckMovableRoomEP6IMatchP8PvP_RoomPS4_+0x51>
 8563efe:	8b 45 0c             	mov    0xc(%ebp),%eax
 8563f01:	8b 00                	mov    (%eax),%eax
 8563f03:	83 c0 10             	add    $0x10,%eax
 8563f06:	8b 10                	mov    (%eax),%edx
 8563f08:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8563f0b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8563f0f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8563f12:	89 04 24             	mov    %eax,(%esp)
 8563f15:	ff d2                	call   *%edx
 8563f17:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8563f1a:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8563f1e:	0f 95 c0             	setne  %al
 8563f21:	84 c0                	test   %al,%al
 8563f23:	75 11                	jne    8563f36 <_ZN8fair_pvp10CFairMatch17_CheckMovableRoomEP6IMatchP8PvP_RoomPS4_+0x5e>
 8563f25:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8563f29:	83 7d f4 03          	cmpl   $0x3,-0xc(%ebp)
 8563f2d:	0f 9e c0             	setle  %al
 8563f30:	84 c0                	test   %al,%al
 8563f32:	75 ca                	jne    8563efe <_ZN8fair_pvp10CFairMatch17_CheckMovableRoomEP6IMatchP8PvP_RoomPS4_+0x26>
 8563f34:	eb 01                	jmp    8563f37 <_ZN8fair_pvp10CFairMatch17_CheckMovableRoomEP6IMatchP8PvP_RoomPS4_+0x5f>
 8563f36:	90                   	nop
 8563f37:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8563f3b:	75 4d                	jne    8563f8a <_ZN8fair_pvp10CFairMatch17_CheckMovableRoomEP6IMatchP8PvP_RoomPS4_+0xb2>
 8563f3d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8563f44:	00 
 8563f45:	c7 44 24 08 5d 0c 00 	movl   $0xc5d,0x8(%esp)
 8563f4c:	00 
 8563f4d:	c7 44 24 04 40 38 ca 	movl   $0x8ca3840,0x4(%esp)
 8563f54:	08 
 8563f55:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8563f58:	89 04 24             	mov    %eax,(%esp)
 8563f5b:	e8 b8 b7 fe ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8563f60:	c7 44 24 0c 5d 0c 00 	movl   $0xc5d,0xc(%esp)
 8563f67:	00 
 8563f68:	c7 44 24 08 62 22 ca 	movl   $0x8ca2262,0x8(%esp)
 8563f6f:	08 
 8563f70:	c7 44 24 04 b1 22 ca 	movl   $0x8ca22b1,0x4(%esp)
 8563f77:	08 
 8563f78:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8563f7b:	89 04 24             	mov    %eax,(%esp)
 8563f7e:	e8 05 b8 fe ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8563f83:	b8 00 00 00 00       	mov    $0x0,%eax
 8563f88:	eb 6b                	jmp    8563ff5 <_ZN8fair_pvp10CFairMatch17_CheckMovableRoomEP6IMatchP8PvP_RoomPS4_+0x11d>
 8563f8a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8563f8d:	89 04 24             	mov    %eax,(%esp)
 8563f90:	e8 f9 11 0f 00       	call   865518e <_ZN5CUser10GetPVPRoomEv>
 8563f95:	8b 55 14             	mov    0x14(%ebp),%edx
 8563f98:	89 02                	mov    %eax,(%edx)
 8563f9a:	8b 45 14             	mov    0x14(%ebp),%eax
 8563f9d:	8b 00                	mov    (%eax),%eax
 8563f9f:	85 c0                	test   %eax,%eax
 8563fa1:	75 4d                	jne    8563ff0 <_ZN8fair_pvp10CFairMatch17_CheckMovableRoomEP6IMatchP8PvP_RoomPS4_+0x118>
 8563fa3:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8563faa:	00 
 8563fab:	c7 44 24 08 64 0c 00 	movl   $0xc64,0x8(%esp)
 8563fb2:	00 
 8563fb3:	c7 44 24 04 40 38 ca 	movl   $0x8ca3840,0x4(%esp)
 8563fba:	08 
 8563fbb:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8563fbe:	89 04 24             	mov    %eax,(%esp)
 8563fc1:	e8 52 b7 fe ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8563fc6:	c7 44 24 0c 64 0c 00 	movl   $0xc64,0xc(%esp)
 8563fcd:	00 
 8563fce:	c7 44 24 08 62 22 ca 	movl   $0x8ca2262,0x8(%esp)
 8563fd5:	08 
 8563fd6:	c7 44 24 04 b1 22 ca 	movl   $0x8ca22b1,0x4(%esp)
 8563fdd:	08 
 8563fde:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8563fe1:	89 04 24             	mov    %eax,(%esp)
 8563fe4:	e8 9f b7 fe ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8563fe9:	b8 00 00 00 00       	mov    $0x0,%eax
 8563fee:	eb 05                	jmp    8563ff5 <_ZN8fair_pvp10CFairMatch17_CheckMovableRoomEP6IMatchP8PvP_RoomPS4_+0x11d>
 8563ff0:	b8 01 00 00 00       	mov    $0x1,%eax
 8563ff5:	c9                   	leave
 8563ff6:	c3                   	ret

```

```c
// fair_pvp::CFairMatch::_CheckMovableRoom @ 0x8563ed8

/* fair_pvp::CFairMatch::_CheckMovableRoom(IMatch*, PvP_Room*, PvP_Room**) */

undefined4 __thiscall
fair_pvp::CFairMatch::_CheckMovableRoom
          (CFairMatch *this,IMatch *param_1,PvP_Room *param_2,PvP_Room **param_3)

{
  undefined4 uVar1;
  PvP_Room *pPVar2;
  cMyTrace local_34 [16];
  cMyTrace local_24 [16];
  CUser *local_14;
  int local_10;
  
  if (param_1 == (IMatch *)0x0) {
    uVar1 = 0;
  }
  else {
    local_14 = (CUser *)0x0;
    local_10 = 0;
    while ((local_10 < 4 &&
           (local_14 = (CUser *)(**(code **)(*(int *)param_1 + 0x10))(param_1,local_10),
           local_14 == (CUser *)0x0))) {
      local_10 = local_10 + 1;
    }
    if (local_14 == (CUser *)0x0) {
      cMyTrace::cMyTrace(local_34,
                         "int fair_pvp::CFairMatch::_CheckMovableRoom(IMatch*, PvP_Room*, PvP_Room**)"
                         ,0xc5d,0);
      cMyTrace::operator()(local_34,"error file(%s) line(%d)","MatchingSystem.cpp",0xc5d);
      uVar1 = 0;
    }
    else {
      pPVar2 = (PvP_Room *)CUser::GetPVPRoom(local_14);
      *param_3 = pPVar2;
      if (*param_3 == (PvP_Room *)0x0) {
        cMyTrace::cMyTrace(local_24,
                           "int fair_pvp::CFairMatch::_CheckMovableRoom(IMatch*, PvP_Room*, PvP_Room**)"
                           ,0xc64,0);
        cMyTrace::operator()(local_24,"error file(%s) line(%d)","MatchingSystem.cpp",0xc64);
        uVar1 = 0;
      }
      else {
        uVar1 = 1;
      }
    }
  }
  return uVar1;
}

```

---

## _CheckObserver

```asm
// === 085629f2 fair_pvp::CFairMatch::_CheckObserver  [0x085629f2-0x8562a6d] ===
 85629f2:	55                   	push   %ebp
 85629f3:	89 e5                	mov    %esp,%ebp
 85629f5:	53                   	push   %ebx
 85629f6:	83 ec 24             	sub    $0x24,%esp
 85629f9:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8562a00:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8562a07:	eb 24                	jmp    8562a2d <_ZN8fair_pvp10CFairMatch14_CheckObserverEP8PvP_RoomP5CUser+0x3b>
 8562a09:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8562a0c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8562a10:	8b 45 0c             	mov    0xc(%ebp),%eax
 8562a13:	89 04 24             	mov    %eax,(%esp)
 8562a16:	e8 57 68 07 00       	call   85d9272 <_ZN8PvP_Room8get_teamEi>
 8562a1b:	83 f8 03             	cmp    $0x3,%eax
 8562a1e:	0f 94 c0             	sete   %al
 8562a21:	84 c0                	test   %al,%al
 8562a23:	74 04                	je     8562a29 <_ZN8fair_pvp10CFairMatch14_CheckObserverEP8PvP_RoomP5CUser+0x37>
 8562a25:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8562a29:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8562a2d:	83 7d f4 07          	cmpl   $0x7,-0xc(%ebp)
 8562a31:	0f 9e c0             	setle  %al
 8562a34:	84 c0                	test   %al,%al
 8562a36:	75 d1                	jne    8562a09 <_ZN8fair_pvp10CFairMatch14_CheckObserverEP8PvP_RoomP5CUser+0x17>
 8562a38:	8b 45 08             	mov    0x8(%ebp),%eax
 8562a3b:	83 c0 1c             	add    $0x1c,%eax
 8562a3e:	89 04 24             	mov    %eax,(%esp)
 8562a41:	e8 c6 fc ff ff       	call   856270c <_ZNK8fair_pvp13TeamInfoThird4sizeEv>
 8562a46:	89 c3                	mov    %eax,%ebx
 8562a48:	2b 5d f0             	sub    -0x10(%ebp),%ebx
 8562a4b:	e8 e4 fd ff ff       	call   8562834 <_ZN8fair_pvp10CFairMatch22GetPlayCountPerOneTeamEv>
 8562a50:	0f b6 c0             	movzbl %al,%eax
 8562a53:	39 c3                	cmp    %eax,%ebx
 8562a55:	0f 9d c0             	setge  %al
 8562a58:	84 c0                	test   %al,%al
 8562a5a:	74 07                	je     8562a63 <_ZN8fair_pvp10CFairMatch14_CheckObserverEP8PvP_RoomP5CUser+0x71>
 8562a5c:	b8 00 00 00 00       	mov    $0x0,%eax
 8562a61:	eb 05                	jmp    8562a68 <_ZN8fair_pvp10CFairMatch14_CheckObserverEP8PvP_RoomP5CUser+0x76>
 8562a63:	b8 01 00 00 00       	mov    $0x1,%eax
 8562a68:	83 c4 24             	add    $0x24,%esp
 8562a6b:	5b                   	pop    %ebx
 8562a6c:	5d                   	pop    %ebp
 8562a6d:	c3                   	ret

```

```c
// fair_pvp::CFairMatch::_CheckObserver @ 0x85629f2

/* fair_pvp::CFairMatch::_CheckObserver(PvP_Room*, CUser*) */

bool fair_pvp::CFairMatch::_CheckObserver(PvP_Room *param_1,CUser *param_2)

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
  iVar1 = TeamInfoThird::size((TeamInfoThird *)(param_1 + 0x1c));
  uVar2 = GetPlayCountPerOneTeam();
  return iVar1 - local_14 < (int)(uVar2 & 0xff);
}

```

---

## _CheckRematchable

```asm
// === 08563b16 fair_pvp::CFairMatch::_CheckRematchable  [0x08563b16-0x8563bb9] ===
 8563b16:	55                   	push   %ebp
 8563b17:	89 e5                	mov    %esp,%ebp
 8563b19:	53                   	push   %ebx
 8563b1a:	83 ec 34             	sub    $0x34,%esp
 8563b1d:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8563b24:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 8563b2b:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8563b32:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8563b39:	eb 33                	jmp    8563b6e <_ZNK8fair_pvp10CFairMatch17_CheckRematchableEP8PvP_Room+0x58>
 8563b3b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8563b3e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8563b42:	8b 45 0c             	mov    0xc(%ebp),%eax
 8563b45:	89 04 24             	mov    %eax,(%esp)
 8563b48:	e8 25 57 07 00       	call   85d9272 <_ZN8PvP_Room8get_teamEi>
 8563b4d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8563b50:	83 7d f4 01          	cmpl   $0x1,-0xc(%ebp)
 8563b54:	74 06                	je     8563b5c <_ZNK8fair_pvp10CFairMatch17_CheckRematchableEP8PvP_Room+0x46>
 8563b56:	83 7d f4 02          	cmpl   $0x2,-0xc(%ebp)
 8563b5a:	75 0e                	jne    8563b6a <_ZNK8fair_pvp10CFairMatch17_CheckRematchableEP8PvP_Room+0x54>
 8563b5c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8563b5f:	8b 54 85 e4          	mov    -0x1c(%ebp,%eax,4),%edx
 8563b63:	83 c2 01             	add    $0x1,%edx
 8563b66:	89 54 85 e4          	mov    %edx,-0x1c(%ebp,%eax,4)
 8563b6a:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8563b6e:	83 7d f0 07          	cmpl   $0x7,-0x10(%ebp)
 8563b72:	0f 9e c0             	setle  %al
 8563b75:	84 c0                	test   %al,%al
 8563b77:	75 c2                	jne    8563b3b <_ZNK8fair_pvp10CFairMatch17_CheckRematchableEP8PvP_Room+0x25>
 8563b79:	8b 5d e8             	mov    -0x18(%ebp),%ebx
 8563b7c:	e8 b3 ec ff ff       	call   8562834 <_ZN8fair_pvp10CFairMatch22GetPlayCountPerOneTeamEv>
 8563b81:	0f b6 c0             	movzbl %al,%eax
 8563b84:	39 c3                	cmp    %eax,%ebx
 8563b86:	0f 95 c0             	setne  %al
 8563b89:	84 c0                	test   %al,%al
 8563b8b:	74 07                	je     8563b94 <_ZNK8fair_pvp10CFairMatch17_CheckRematchableEP8PvP_Room+0x7e>
 8563b8d:	b8 00 00 00 00       	mov    $0x0,%eax
 8563b92:	eb 20                	jmp    8563bb4 <_ZNK8fair_pvp10CFairMatch17_CheckRematchableEP8PvP_Room+0x9e>
 8563b94:	8b 5d ec             	mov    -0x14(%ebp),%ebx
 8563b97:	e8 98 ec ff ff       	call   8562834 <_ZN8fair_pvp10CFairMatch22GetPlayCountPerOneTeamEv>
 8563b9c:	0f b6 c0             	movzbl %al,%eax
 8563b9f:	39 c3                	cmp    %eax,%ebx
 8563ba1:	0f 95 c0             	setne  %al
 8563ba4:	84 c0                	test   %al,%al
 8563ba6:	74 07                	je     8563baf <_ZNK8fair_pvp10CFairMatch17_CheckRematchableEP8PvP_Room+0x99>
 8563ba8:	b8 00 00 00 00       	mov    $0x0,%eax
 8563bad:	eb 05                	jmp    8563bb4 <_ZNK8fair_pvp10CFairMatch17_CheckRematchableEP8PvP_Room+0x9e>
 8563baf:	b8 01 00 00 00       	mov    $0x1,%eax
 8563bb4:	83 c4 34             	add    $0x34,%esp
 8563bb7:	5b                   	pop    %ebx
 8563bb8:	5d                   	pop    %ebp
 8563bb9:	c3                   	ret

```

```c
// fair_pvp::CFairMatch::_CheckRematchable @ 0x8563b16

/* fair_pvp::CFairMatch::_CheckRematchable(PvP_Room*) const */

undefined4 __thiscall fair_pvp::CFairMatch::_CheckRematchable(CFairMatch *this,PvP_Room *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int local_20 [6];
  
  local_20[0] = 0;
  local_20[1] = 0;
  local_20[2] = 0;
  for (local_20[3] = 0; iVar1 = local_20[1], local_20[3] < 8; local_20[3] = local_20[3] + 1) {
    local_20[4] = PvP_Room::get_team(param_1,local_20[3]);
    if ((local_20[4] == 1) || (local_20[4] == 2)) {
      local_20[local_20[4]] = local_20[local_20[4]] + 1;
    }
  }
  uVar3 = GetPlayCountPerOneTeam();
  iVar2 = local_20[2];
  if (iVar1 == (uVar3 & 0xff)) {
    uVar3 = GetPlayCountPerOneTeam();
    if (iVar2 == (uVar3 & 0xff)) {
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

```

---

## _CheckSameTeam

```asm
// === 085629e8 fair_pvp::CFairMatch::_CheckSameTeam  [0x085629e8-0x85629f1] ===
 85629e8:	55                   	push   %ebp
 85629e9:	89 e5                	mov    %esp,%ebp
 85629eb:	b8 01 00 00 00       	mov    $0x1,%eax
 85629f0:	5d                   	pop    %ebp
 85629f1:	c3                   	ret

```

```c
// fair_pvp::CFairMatch::_CheckSameTeam @ 0x85629e8

/* fair_pvp::CFairMatch::_CheckSameTeam(PvP_Room*, CUser*) */

undefined4 fair_pvp::CFairMatch::_CheckSameTeam(PvP_Room *param_1,CUser *param_2)

{
  return 1;
}

```

---

## _FindTeam

```asm
// === 085663a8 fair_pvp::CFairMatch::_FindTeam  [0x085663a8-0x8566475] ===
 85663a8:	55                   	push   %ebp
 85663a9:	89 e5                	mov    %esp,%ebp
 85663ab:	53                   	push   %ebx
 85663ac:	83 ec 10             	sub    $0x10,%esp
 85663af:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 85663b6:	e9 a0 00 00 00       	jmp    856645b <_ZN8fair_pvp10CFairMatch9_FindTeamEP5CUser+0xb3>
 85663bb:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%ebp)
 85663c2:	e9 81 00 00 00       	jmp    8566448 <_ZN8fair_pvp10CFairMatch9_FindTeamEP5CUser+0xa0>
 85663c7:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85663ca:	8b 45 f8             	mov    -0x8(%ebp),%eax
 85663cd:	8b 4d 08             	mov    0x8(%ebp),%ecx
 85663d0:	89 c3                	mov    %eax,%ebx
 85663d2:	c1 e3 04             	shl    $0x4,%ebx
 85663d5:	89 d0                	mov    %edx,%eax
 85663d7:	c1 e0 03             	shl    $0x3,%eax
 85663da:	01 d0                	add    %edx,%eax
 85663dc:	c1 e0 03             	shl    $0x3,%eax
 85663df:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 85663e2:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 85663e5:	83 c0 10             	add    $0x10,%eax
 85663e8:	0f b6 40 18          	movzbl 0x18(%eax),%eax
 85663ec:	84 c0                	test   %al,%al
 85663ee:	74 54                	je     8566444 <_ZN8fair_pvp10CFairMatch9_FindTeamEP5CUser+0x9c>
 85663f0:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85663f3:	8b 45 f8             	mov    -0x8(%ebp),%eax
 85663f6:	8b 4d 08             	mov    0x8(%ebp),%ecx
 85663f9:	89 c3                	mov    %eax,%ebx
 85663fb:	c1 e3 04             	shl    $0x4,%ebx
 85663fe:	89 d0                	mov    %edx,%eax
 8566400:	c1 e0 03             	shl    $0x3,%eax
 8566403:	01 d0                	add    %edx,%eax
 8566405:	c1 e0 03             	shl    $0x3,%eax
 8566408:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 856640b:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 856640e:	83 c0 24             	add    $0x24,%eax
 8566411:	8b 00                	mov    (%eax),%eax
 8566413:	85 c0                	test   %eax,%eax
 8566415:	74 2d                	je     8566444 <_ZN8fair_pvp10CFairMatch9_FindTeamEP5CUser+0x9c>
 8566417:	8b 55 f4             	mov    -0xc(%ebp),%edx
 856641a:	8b 45 f8             	mov    -0x8(%ebp),%eax
 856641d:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8566420:	89 c3                	mov    %eax,%ebx
 8566422:	c1 e3 04             	shl    $0x4,%ebx
 8566425:	89 d0                	mov    %edx,%eax
 8566427:	c1 e0 03             	shl    $0x3,%eax
 856642a:	01 d0                	add    %edx,%eax
 856642c:	c1 e0 03             	shl    $0x3,%eax
 856642f:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 8566432:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8566435:	83 c0 24             	add    $0x24,%eax
 8566438:	8b 00                	mov    (%eax),%eax
 856643a:	3b 45 0c             	cmp    0xc(%ebp),%eax
 856643d:	75 05                	jne    8566444 <_ZN8fair_pvp10CFairMatch9_FindTeamEP5CUser+0x9c>
 856643f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8566442:	eb 2b                	jmp    856646f <_ZN8fair_pvp10CFairMatch9_FindTeamEP5CUser+0xc7>
 8566444:	83 45 f8 01          	addl   $0x1,-0x8(%ebp)
 8566448:	83 7d f8 03          	cmpl   $0x3,-0x8(%ebp)
 856644c:	0f 9e c0             	setle  %al
 856644f:	84 c0                	test   %al,%al
 8566451:	0f 85 70 ff ff ff    	jne    85663c7 <_ZN8fair_pvp10CFairMatch9_FindTeamEP5CUser+0x1f>
 8566457:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 856645b:	83 7d f4 01          	cmpl   $0x1,-0xc(%ebp)
 856645f:	0f 9e c0             	setle  %al
 8566462:	84 c0                	test   %al,%al
 8566464:	0f 85 51 ff ff ff    	jne    85663bb <_ZN8fair_pvp10CFairMatch9_FindTeamEP5CUser+0x13>
 856646a:	b8 02 00 00 00       	mov    $0x2,%eax
 856646f:	83 c4 10             	add    $0x10,%esp
 8566472:	5b                   	pop    %ebx
 8566473:	5d                   	pop    %ebp
 8566474:	c3                   	ret
 8566475:	90                   	nop

```

```c
// fair_pvp::CFairMatch::_FindTeam @ 0x85663a8

/* fair_pvp::CFairMatch::_FindTeam(CUser*) */

int __thiscall fair_pvp::CFairMatch::_FindTeam(CFairMatch *this,CUser *param_1)

{
  int local_10;
  int local_c;
  
  local_10 = 0;
  do {
    if (1 < local_10) {
      return 2;
    }
    for (local_c = 0; local_c < 4; local_c = local_c + 1) {
      if (((this[local_c * 0x10 + local_10 * 0x48 + 0x28] != (CFairMatch)0x0) &&
          (*(int *)(this + local_c * 0x10 + local_10 * 0x48 + 0x24) != 0)) &&
         (*(CUser **)(this + local_c * 0x10 + local_10 * 0x48 + 0x24) == param_1)) {
        return local_10;
      }
    }
    local_10 = local_10 + 1;
  } while( true );
}

```

---

## _GetOppositeTeam

```asm
// === 08564f8c fair_pvp::CFairMatch::_GetOppositeTeam  [0x08564f8c-0x8564fb1] ===
 8564f8c:	55                   	push   %ebp
 8564f8d:	89 e5                	mov    %esp,%ebp
 8564f8f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8564f92:	83 f8 01             	cmp    $0x1,%eax
 8564f95:	74 07                	je     8564f9e <_ZN8fair_pvp10CFairMatch16_GetOppositeTeamEi+0x12>
 8564f97:	83 f8 02             	cmp    $0x2,%eax
 8564f9a:	74 09                	je     8564fa5 <_ZN8fair_pvp10CFairMatch16_GetOppositeTeamEi+0x19>
 8564f9c:	eb 0e                	jmp    8564fac <_ZN8fair_pvp10CFairMatch16_GetOppositeTeamEi+0x20>
 8564f9e:	b8 02 00 00 00       	mov    $0x2,%eax
 8564fa3:	eb 0a                	jmp    8564faf <_ZN8fair_pvp10CFairMatch16_GetOppositeTeamEi+0x23>
 8564fa5:	b8 01 00 00 00       	mov    $0x1,%eax
 8564faa:	eb 03                	jmp    8564faf <_ZN8fair_pvp10CFairMatch16_GetOppositeTeamEi+0x23>
 8564fac:	8b 45 0c             	mov    0xc(%ebp),%eax
 8564faf:	5d                   	pop    %ebp
 8564fb0:	c3                   	ret
 8564fb1:	90                   	nop

```

```c
// fair_pvp::CFairMatch::_GetOppositeTeam @ 0x8564f8c

/* fair_pvp::CFairMatch::_GetOppositeTeam(int) */

int __thiscall fair_pvp::CFairMatch::_GetOppositeTeam(CFairMatch *this,int param_1)

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

## _GetOtherTeam

```asm
// === 08566476 fair_pvp::CFairMatch::_GetOtherTeam  [0x08566476-0x8566499] ===
 8566476:	55                   	push   %ebp
 8566477:	89 e5                	mov    %esp,%ebp
 8566479:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 856647d:	75 07                	jne    8566486 <_ZN8fair_pvp10CFairMatch13_GetOtherTeamE22ENUM_SCHOOL_MATCH_TEAM+0x10>
 856647f:	b8 01 00 00 00       	mov    $0x1,%eax
 8566484:	eb 12                	jmp    8566498 <_ZN8fair_pvp10CFairMatch13_GetOtherTeamE22ENUM_SCHOOL_MATCH_TEAM+0x22>
 8566486:	83 7d 0c 01          	cmpl   $0x1,0xc(%ebp)
 856648a:	75 07                	jne    8566493 <_ZN8fair_pvp10CFairMatch13_GetOtherTeamE22ENUM_SCHOOL_MATCH_TEAM+0x1d>
 856648c:	b8 00 00 00 00       	mov    $0x0,%eax
 8566491:	eb 05                	jmp    8566498 <_ZN8fair_pvp10CFairMatch13_GetOtherTeamE22ENUM_SCHOOL_MATCH_TEAM+0x22>
 8566493:	b8 02 00 00 00       	mov    $0x2,%eax
 8566498:	5d                   	pop    %ebp
 8566499:	c3                   	ret

```

```c
// fair_pvp::CFairMatch::_GetOtherTeam @ 0x8566476

/* fair_pvp::CFairMatch::_GetOtherTeam(ENUM_SCHOOL_MATCH_TEAM) */

undefined4 __thiscall fair_pvp::CFairMatch::_GetOtherTeam(undefined4 this,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 1;
  }
  else if (param_2 == 1) {
    uVar1 = 0;
  }
  else {
    uVar1 = 2;
  }
  return uVar1;
}

```

---

## _MakeRoom

```asm
// === 08563692 fair_pvp::CFairMatch::_MakeRoom  [0x08563692-0x8563a31] ===
 8563692:	55                   	push   %ebp
 8563693:	89 e5                	mov    %esp,%ebp
 8563695:	57                   	push   %edi
 8563696:	56                   	push   %esi
 8563697:	53                   	push   %ebx
 8563698:	83 ec 7c             	sub    $0x7c,%esp
 856369b:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 856369e:	89 04 24             	mov    %eax,(%esp)
 85636a1:	e8 a6 a6 02 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 85636a6:	c7 44 24 08 35 00 00 	movl   $0x35,0x8(%esp)
 85636ad:	00 
 85636ae:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85636b5:	00 
 85636b6:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 85636b9:	89 04 24             	mov    %eax,(%esp)
 85636bc:	e8 3b 82 b6 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 85636c1:	e8 c8 8a b6 ff       	call   80cc18e <_Z14G_CGameManagerv>
 85636c6:	89 04 24             	mov    %eax,(%esp)
 85636c9:	e8 ae 19 d3 ff       	call   829507c <_ZN12CGameManager6GetPvpEv>
 85636ce:	89 45 e0             	mov    %eax,-0x20(%ebp)
 85636d1:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 85636d5:	75 55                	jne    856372c <_ZN8fair_pvp10CFairMatch9_MakeRoomEP5CUser+0x9a>
 85636d7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85636de:	00 
 85636df:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 85636e2:	89 04 24             	mov    %eax,(%esp)
 85636e5:	e8 36 82 b6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85636ea:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 85636f1:	00 
 85636f2:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 85636f5:	89 04 24             	mov    %eax,(%esp)
 85636f8:	e8 23 82 b6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85636fd:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8563704:	00 
 8563705:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8563708:	89 04 24             	mov    %eax,(%esp)
 856370b:	e8 48 82 b6 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8563710:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8563713:	89 44 24 04          	mov    %eax,0x4(%esp)
 8563717:	8b 45 0c             	mov    0xc(%ebp),%eax
 856371a:	89 04 24             	mov    %eax,(%esp)
 856371d:	e8 98 4e 0e 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8563722:	bb 00 00 00 00       	mov    $0x0,%ebx
 8563727:	e9 f0 02 00 00       	jmp    8563a1c <_ZN8fair_pvp10CFairMatch9_MakeRoomEP5CUser+0x38a>
 856372c:	8b 45 08             	mov    0x8(%ebp),%eax
 856372f:	83 c0 14             	add    $0x14,%eax
 8563732:	89 04 24             	mov    %eax,(%esp)
 8563735:	e8 36 2f 1a 00       	call   8706670 <_ZNKSs6lengthEv>
 856373a:	89 45 b0             	mov    %eax,-0x50(%ebp)
 856373d:	8b 45 08             	mov    0x8(%ebp),%eax
 8563740:	83 c0 14             	add    $0x14,%eax
 8563743:	89 04 24             	mov    %eax,(%esp)
 8563746:	e8 a5 2d 1a 00       	call   87064f0 <_ZNKSs5c_strEv>
 856374b:	89 c3                	mov    %eax,%ebx
 856374d:	8b 45 08             	mov    0x8(%ebp),%eax
 8563750:	0f b6 40 10          	movzbl 0x10(%eax),%eax
 8563754:	0f b6 f8             	movzbl %al,%edi
 8563757:	8b 45 08             	mov    0x8(%ebp),%eax
 856375a:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 856375e:	0f bf f0             	movswl %ax,%esi
 8563761:	8b 45 08             	mov    0x8(%ebp),%eax
 8563764:	83 c0 08             	add    $0x8,%eax
 8563767:	89 04 24             	mov    %eax,(%esp)
 856376a:	e8 81 2d 1a 00       	call   87064f0 <_ZNKSs5c_strEv>
 856376f:	8b 55 08             	mov    0x8(%ebp),%edx
 8563772:	0f b6 52 0c          	movzbl 0xc(%edx),%edx
 8563776:	0f be d2             	movsbl %dl,%edx
 8563779:	c7 44 24 20 02 00 00 	movl   $0x2,0x20(%esp)
 8563780:	00 
 8563781:	8b 4d b0             	mov    -0x50(%ebp),%ecx
 8563784:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 8563788:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 856378c:	89 7c 24 14          	mov    %edi,0x14(%esp)
 8563790:	89 74 24 10          	mov    %esi,0x10(%esp)
 8563794:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8563798:	89 54 24 08          	mov    %edx,0x8(%esp)
 856379c:	8b 45 0c             	mov    0xc(%ebp),%eax
 856379f:	89 44 24 04          	mov    %eax,0x4(%esp)
 85637a3:	8b 45 e0             	mov    -0x20(%ebp),%eax
 85637a6:	89 04 24             	mov    %eax,(%esp)
 85637a9:	e8 5a 31 07 00       	call   85d6908 <_ZN8PvP_Room11create_roomEP5CUsercPcsbPKci15PVP_BATTLE_MODE>
 85637ae:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 85637b1:	8b 45 e0             	mov    -0x20(%ebp),%eax
 85637b4:	89 04 24             	mov    %eax,(%esp)
 85637b7:	e8 10 a2 cc ff       	call   822d9cc <_ZN8PvP_Room19get_pvp_battle_modeEv>
 85637bc:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 85637bf:	8b 45 e0             	mov    -0x20(%ebp),%eax
 85637c2:	89 04 24             	mov    %eax,(%esp)
 85637c5:	e8 ca a1 cc ff       	call   822d994 <_ZN8PvP_Room9get_indexEv>
 85637ca:	89 c7                	mov    %eax,%edi
 85637cc:	8b 45 0c             	mov    0xc(%ebp),%eax
 85637cf:	89 04 24             	mov    %eax,(%esp)
 85637d2:	e8 51 d8 b9 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 85637d7:	89 c6                	mov    %eax,%esi
 85637d9:	8b 45 0c             	mov    0xc(%ebp),%eax
 85637dc:	89 04 24             	mov    %eax,(%esp)
 85637df:	e8 8e d8 b9 ff       	call   8101072 <_ZNK5CUser12get_acc_nameEv>
 85637e4:	89 c3                	mov    %eax,%ebx
 85637e6:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 85637ed:	00 
 85637ee:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 85637f5:	00 
 85637f6:	c7 44 24 08 a0 0b 00 	movl   $0xba0,0x8(%esp)
 85637fd:	00 
 85637fe:	c7 44 24 04 a0 38 ca 	movl   $0x8ca38a0,0x4(%esp)
 8563805:	08 
 8563806:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8563809:	89 04 24             	mov    %eax,(%esp)
 856380c:	e8 2b c5 fe ff       	call   854fd3c <_ZN10CSwitchLogC1EPKciii>
 8563811:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8563814:	89 44 24 18          	mov    %eax,0x18(%esp)
 8563818:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 856381b:	89 44 24 14          	mov    %eax,0x14(%esp)
 856381f:	89 7c 24 10          	mov    %edi,0x10(%esp)
 8563823:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8563827:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 856382b:	c7 44 24 04 98 23 ca 	movl   $0x8ca2398,0x4(%esp)
 8563832:	08 
 8563833:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8563836:	89 04 24             	mov    %eax,(%esp)
 8563839:	e8 26 c5 fe ff       	call   854fd64 <_ZN10CSwitchLogclEPKcz>
 856383e:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 8563842:	0f 8e a3 00 00 00    	jle    85638eb <_ZN8fair_pvp10CFairMatch9_MakeRoomEP5CUser+0x259>
 8563848:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 856384f:	00 
 8563850:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8563853:	89 04 24             	mov    %eax,(%esp)
 8563856:	e8 c5 80 b6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 856385b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 856385e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8563862:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8563865:	89 04 24             	mov    %eax,(%esp)
 8563868:	e8 b3 80 b6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 856386d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8563874:	00 
 8563875:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8563878:	89 04 24             	mov    %eax,(%esp)
 856387b:	e8 d8 80 b6 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8563880:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8563883:	89 44 24 04          	mov    %eax,0x4(%esp)
 8563887:	8b 45 0c             	mov    0xc(%ebp),%eax
 856388a:	89 04 24             	mov    %eax,(%esp)
 856388d:	e8 28 4d 0e 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8563892:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8563895:	89 04 24             	mov    %eax,(%esp)
 8563898:	e8 f7 a0 cc ff       	call   822d994 <_ZN8PvP_Room9get_indexEv>
 856389d:	89 44 24 14          	mov    %eax,0x14(%esp)
 85638a1:	c7 44 24 10 3c 22 ca 	movl   $0x8ca223c,0x10(%esp)
 85638a8:	08 
 85638a9:	c7 44 24 0c a9 0b 00 	movl   $0xba9,0xc(%esp)
 85638b0:	00 
 85638b1:	c7 44 24 08 a0 38 ca 	movl   $0x8ca38a0,0x8(%esp)
 85638b8:	08 
 85638b9:	c7 44 24 04 62 22 ca 	movl   $0x8ca2262,0x4(%esp)
 85638c0:	08 
 85638c1:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 85638c8:	e8 3d 03 57 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 85638cd:	e8 bc 88 b6 ff       	call   80cc18e <_Z14G_CGameManagerv>
 85638d2:	8b 55 e0             	mov    -0x20(%ebp),%edx
 85638d5:	89 54 24 04          	mov    %edx,0x4(%esp)
 85638d9:	89 04 24             	mov    %eax,(%esp)
 85638dc:	e8 67 1a d3 ff       	call   8295348 <_ZN12CGameManager6PutPvpEP8PvP_Room>
 85638e1:	bb 00 00 00 00       	mov    $0x0,%ebx
 85638e6:	e9 31 01 00 00       	jmp    8563a1c <_ZN8fair_pvp10CFairMatch9_MakeRoomEP5CUser+0x38a>
 85638eb:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 85638ee:	89 04 24             	mov    %eax,(%esp)
 85638f1:	e8 f0 7f b6 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 85638f6:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 85638fd:	00 
 85638fe:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8563905:	00 
 8563906:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8563909:	89 04 24             	mov    %eax,(%esp)
 856390c:	e8 eb 7f b6 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8563911:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8563918:	00 
 8563919:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 856391c:	89 04 24             	mov    %eax,(%esp)
 856391f:	e8 fc 7f b6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8563924:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 856392b:	00 
 856392c:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 856392f:	89 04 24             	mov    %eax,(%esp)
 8563932:	e8 6d 65 b7 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8563937:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 856393a:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8563941:	00 
 8563942:	89 44 24 04          	mov    %eax,0x4(%esp)
 8563946:	8b 45 0c             	mov    0xc(%ebp),%eax
 8563949:	89 04 24             	mov    %eax,(%esp)
 856394c:	e8 fd 6a 0f 00       	call   865a44e <_ZN5CUser15make_basic_infoEPcc>
 8563951:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8563958:	00 
 8563959:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 856395c:	89 04 24             	mov    %eax,(%esp)
 856395f:	e8 f4 7f b6 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8563964:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8563967:	89 44 24 04          	mov    %eax,0x4(%esp)
 856396b:	8b 45 0c             	mov    0xc(%ebp),%eax
 856396e:	89 04 24             	mov    %eax,(%esp)
 8563971:	e8 44 4c 0e 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8563976:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8563979:	89 04 24             	mov    %eax,(%esp)
 856397c:	e8 65 7f b6 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 8563981:	c7 44 24 08 29 00 00 	movl   $0x29,0x8(%esp)
 8563988:	00 
 8563989:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8563990:	00 
 8563991:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8563994:	89 04 24             	mov    %eax,(%esp)
 8563997:	e8 60 7f b6 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 856399c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85639a3:	00 
 85639a4:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 85639a7:	89 04 24             	mov    %eax,(%esp)
 85639aa:	e8 f5 64 b7 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 85639af:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 85639b2:	89 44 24 04          	mov    %eax,0x4(%esp)
 85639b6:	8b 45 e0             	mov    -0x20(%ebp),%eax
 85639b9:	89 04 24             	mov    %eax,(%esp)
 85639bc:	e8 35 7e 07 00       	call   85db7f6 <_ZN8PvP_Room14make_room_infoEPc>
 85639c1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85639c8:	00 
 85639c9:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 85639cc:	89 04 24             	mov    %eax,(%esp)
 85639cf:	e8 84 7f b6 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 85639d4:	e8 ce 69 b7 ff       	call   80da3a7 <_Z11G_GameWorldv>
 85639d9:	8d 55 c4             	lea    -0x3c(%ebp),%edx
 85639dc:	89 54 24 04          	mov    %edx,0x4(%esp)
 85639e0:	89 04 24             	mov    %eax,(%esp)
 85639e3:	e8 2c 52 16 00       	call   86c8c14 <_ZN9GameWorld8send_allER11PacketGuard>
 85639e8:	e8 ba 69 b7 ff       	call   80da3a7 <_Z11G_GameWorldv>
 85639ed:	8b 55 0c             	mov    0xc(%ebp),%edx
 85639f0:	89 54 24 04          	mov    %edx,0x4(%esp)
 85639f4:	89 04 24             	mov    %eax,(%esp)
 85639f7:	e8 f2 32 16 00       	call   86c6cee <_ZN9GameWorld8goto_pvpEP5CUser>
 85639fc:	8b 5d e0             	mov    -0x20(%ebp),%ebx
 85639ff:	eb 1b                	jmp    8563a1c <_ZN8fair_pvp10CFairMatch9_MakeRoomEP5CUser+0x38a>
 8563a01:	89 d3                	mov    %edx,%ebx
 8563a03:	89 c6                	mov    %eax,%esi
 8563a05:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8563a08:	89 04 24             	mov    %eax,(%esp)
 8563a0b:	e8 70 a4 02 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8563a10:	89 f0                	mov    %esi,%eax
 8563a12:	89 da                	mov    %ebx,%edx
 8563a14:	89 04 24             	mov    %eax,(%esp)
 8563a17:	e8 34 fd 57 00       	call   8ae3750 <_Unwind_Resume>
 8563a1c:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8563a1f:	89 04 24             	mov    %eax,(%esp)
 8563a22:	e8 59 a4 02 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8563a27:	89 d8                	mov    %ebx,%eax
 8563a29:	83 c4 7c             	add    $0x7c,%esp
 8563a2c:	5b                   	pop    %ebx
 8563a2d:	5e                   	pop    %esi
 8563a2e:	5f                   	pop    %edi
 8563a2f:	5d                   	pop    %ebp
 8563a30:	c3                   	ret
 8563a31:	90                   	nop

```

```c
// fair_pvp::CFairMatch::_MakeRoom @ 0x8563692

/* fair_pvp::CFairMatch::_MakeRoom(CUser*) */

PvP_Room * __thiscall fair_pvp::CFairMatch::_MakeRoom(CFairMatch *this,CUser *param_1)

{
  CFairMatch CVar1;
  short sVar2;
  CGameManager *pCVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  GameWorld *pGVar8;
  PvP_Room *pPVar9;
  PacketGuard local_40 [12];
  CSwitchLog local_34 [16];
  PvP_Room *local_24;
  int local_20;
  
  PacketGuard::PacketGuard(local_40);
                    /* try { // try from 085636bc to 085639fb has its CatchHandler @ 08563a01 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_40,1,0x35);
  pCVar3 = (CGameManager *)G_CGameManager();
  local_24 = (PvP_Room *)CGameManager::GetPvp(pCVar3);
  if (local_24 == (PvP_Room *)0x0) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_40,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_40,4);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_40,true);
    CUser::Send(param_1,local_40);
    pPVar9 = (PvP_Room *)0x0;
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
    uVar4 = PvP_Room::get_pvp_battle_mode(local_24);
    uVar5 = PvP_Room::get_index(local_24);
    uVar6 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
    uVar7 = CUser::get_acc_name(param_1);
    CSwitchLog::CSwitchLog(local_34,"PvP_Room* fair_pvp::CFairMatch::_MakeRoom(CUser*)",0xba0,0,0);
    CSwitchLog::operator()(local_34,"pvp@log %s,%s,room(%d),%d,%d",uVar7,uVar6,uVar5,uVar4,local_20)
    ;
    if (local_20 < 1) {
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_40);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_40,0,2);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_40,1);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_40,1);
      CUser::make_basic_info(param_1,(char *)local_40,'\x01');
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_40,true);
      CUser::Send(param_1,local_40);
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_40);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_40,0,0x29);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_40,1);
      PvP_Room::make_room_info(local_24,(char *)local_40);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_40,true);
      pGVar8 = (GameWorld *)G_GameWorld();
      GameWorld::send_all(pGVar8,local_40);
      pGVar8 = (GameWorld *)G_GameWorld();
      GameWorld::goto_pvp(pGVar8,param_1);
      pPVar9 = local_24;
    }
    else {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_40,0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_40,local_20);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_40,true);
      CUser::Send(param_1,local_40);
      uVar4 = PvP_Room::get_index(local_24);
      LogManager::logFormat
                (1,"MatchingSystem.cpp","PvP_Room* fair_pvp::CFairMatch::_MakeRoom(CUser*)",0xba9,
                 &DAT_08ca223c,uVar4);
      pCVar3 = (CGameManager *)G_CGameManager();
      CGameManager::PutPvp(pCVar3,local_24);
      pPVar9 = (PvP_Room *)0x0;
    }
  }
  PacketGuard::~PacketGuard(local_40);
  return pPVar9;
}

```

---

## _MoveRoom

```asm
// === 08563d32 fair_pvp::CFairMatch::_MoveRoom  [0x08563d32-0x8563ed7] ===
 8563d32:	55                   	push   %ebp
 8563d33:	89 e5                	mov    %esp,%ebp
 8563d35:	56                   	push   %esi
 8563d36:	53                   	push   %ebx
 8563d37:	83 ec 50             	sub    $0x50,%esp
 8563d3a:	8b 45 14             	mov    0x14(%ebp),%eax
 8563d3d:	88 45 d4             	mov    %al,-0x2c(%ebp)
 8563d40:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 8563d47:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8563d4e:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8563d55:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8563d5c:	e9 60 01 00 00       	jmp    8563ec1 <_ZN8fair_pvp10CFairMatch9_MoveRoomEP8PvP_RoomS2_b+0x18f>
 8563d61:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8563d64:	89 44 24 04          	mov    %eax,0x4(%esp)
 8563d68:	8b 45 10             	mov    0x10(%ebp),%eax
 8563d6b:	89 04 24             	mov    %eax,(%esp)
 8563d6e:	e8 ab 54 07 00       	call   85d921e <_ZN8PvP_Room13get_user_seatEi>
 8563d73:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8563d76:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 8563d7a:	0f 84 3c 01 00 00    	je     8563ebc <_ZN8fair_pvp10CFairMatch9_MoveRoomEP8PvP_RoomS2_b+0x18a>
 8563d80:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8563d83:	89 44 24 04          	mov    %eax,0x4(%esp)
 8563d87:	8b 45 10             	mov    0x10(%ebp),%eax
 8563d8a:	89 04 24             	mov    %eax,(%esp)
 8563d8d:	e8 e0 54 07 00       	call   85d9272 <_ZN8PvP_Room8get_teamEi>
 8563d92:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8563d95:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8563d98:	89 04 24             	mov    %eax,(%esp)
 8563d9b:	e8 ac 9f 02 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8563da0:	c7 44 24 08 29 00 00 	movl   $0x29,0x8(%esp)
 8563da7:	00 
 8563da8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8563daf:	00 
 8563db0:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8563db3:	89 04 24             	mov    %eax,(%esp)
 8563db6:	e8 41 7b b6 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8563dbb:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8563dc2:	00 
 8563dc3:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8563dc6:	89 04 24             	mov    %eax,(%esp)
 8563dc9:	e8 d6 60 b7 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8563dce:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8563dd1:	89 44 24 04          	mov    %eax,0x4(%esp)
 8563dd5:	8b 45 0c             	mov    0xc(%ebp),%eax
 8563dd8:	89 04 24             	mov    %eax,(%esp)
 8563ddb:	e8 16 7a 07 00       	call   85db7f6 <_ZN8PvP_Room14make_room_infoEPc>
 8563de0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8563de7:	00 
 8563de8:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8563deb:	89 04 24             	mov    %eax,(%esp)
 8563dee:	e8 65 7b b6 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8563df3:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8563df6:	89 44 24 04          	mov    %eax,0x4(%esp)
 8563dfa:	8b 45 10             	mov    0x10(%ebp),%eax
 8563dfd:	89 04 24             	mov    %eax,(%esp)
 8563e00:	e8 13 80 07 00       	call   85dbe18 <_ZN8PvP_Room11send_to_pvpER11PacketGuard>
 8563e05:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8563e08:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8563e0c:	8b 45 10             	mov    0x10(%ebp),%eax
 8563e0f:	89 44 24 08          	mov    %eax,0x8(%esp)
 8563e13:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8563e16:	89 44 24 04          	mov    %eax,0x4(%esp)
 8563e1a:	8b 45 08             	mov    0x8(%ebp),%eax
 8563e1d:	89 04 24             	mov    %eax,(%esp)
 8563e20:	e8 a9 f5 ff ff       	call   85633ce <_ZN8fair_pvp10CFairMatch12_PullOutRoomEP5CUserP8PvP_Roomi>
 8563e25:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8563e28:	89 04 24             	mov    %eax,(%esp)
 8563e2b:	e8 1e 7e b6 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8563e30:	89 44 24 04          	mov    %eax,0x4(%esp)
 8563e34:	8b 45 08             	mov    0x8(%ebp),%eax
 8563e37:	89 04 24             	mov    %eax,(%esp)
 8563e3a:	e8 15 4b 00 00       	call   8568954 <_ZN8fair_pvp10CFairMatch17_SetEnterCharacNoEi>
 8563e3f:	0f b6 45 d4          	movzbl -0x2c(%ebp),%eax
 8563e43:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8563e47:	8b 45 0c             	mov    0xc(%ebp),%eax
 8563e4a:	89 44 24 08          	mov    %eax,0x8(%esp)
 8563e4e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8563e51:	89 44 24 04          	mov    %eax,0x4(%esp)
 8563e55:	8b 45 08             	mov    0x8(%ebp),%eax
 8563e58:	89 04 24             	mov    %eax,(%esp)
 8563e5b:	e8 5c f6 ff ff       	call   85634bc <_ZN8fair_pvp10CFairMatch10_PutInRoomEP5CUserP8PvP_Roomb>
 8563e60:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8563e63:	83 7d e8 03          	cmpl   $0x3,-0x18(%ebp)
 8563e67:	75 46                	jne    8563eaf <_ZN8fair_pvp10CFairMatch9_MoveRoomEP8PvP_RoomS2_b+0x17d>
 8563e69:	c7 44 24 10 02 00 00 	movl   $0x2,0x10(%esp)
 8563e70:	00 
 8563e71:	c7 44 24 0c 03 00 00 	movl   $0x3,0xc(%esp)
 8563e78:	00 
 8563e79:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8563e7c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8563e80:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8563e83:	89 44 24 04          	mov    %eax,0x4(%esp)
 8563e87:	8b 45 0c             	mov    0xc(%ebp),%eax
 8563e8a:	89 04 24             	mov    %eax,(%esp)
 8563e8d:	e8 de 91 07 00       	call   85dd070 <_ZN8PvP_Room17OnSetPVPSeatStateEP5CUseri15ENUM_SEAT_STATE17ENUM_WALKOUT_TYPE>
 8563e92:	eb 1b                	jmp    8563eaf <_ZN8fair_pvp10CFairMatch9_MoveRoomEP8PvP_RoomS2_b+0x17d>
 8563e94:	89 d3                	mov    %edx,%ebx
 8563e96:	89 c6                	mov    %eax,%esi
 8563e98:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8563e9b:	89 04 24             	mov    %eax,(%esp)
 8563e9e:	e8 dd 9f 02 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8563ea3:	89 f0                	mov    %esi,%eax
 8563ea5:	89 da                	mov    %ebx,%edx
 8563ea7:	89 04 24             	mov    %eax,(%esp)
 8563eaa:	e8 a1 f8 57 00       	call   8ae3750 <_Unwind_Resume>
 8563eaf:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8563eb2:	89 04 24             	mov    %eax,(%esp)
 8563eb5:	e8 c6 9f 02 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8563eba:	eb 01                	jmp    8563ebd <_ZN8fair_pvp10CFairMatch9_MoveRoomEP8PvP_RoomS2_b+0x18b>
 8563ebc:	90                   	nop
 8563ebd:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8563ec1:	83 7d f4 07          	cmpl   $0x7,-0xc(%ebp)
 8563ec5:	0f 96 c0             	setbe  %al
 8563ec8:	84 c0                	test   %al,%al
 8563eca:	0f 85 91 fe ff ff    	jne    8563d61 <_ZN8fair_pvp10CFairMatch9_MoveRoomEP8PvP_RoomS2_b+0x2f>
 8563ed0:	83 c4 50             	add    $0x50,%esp
 8563ed3:	5b                   	pop    %ebx
 8563ed4:	5e                   	pop    %esi
 8563ed5:	5d                   	pop    %ebp
 8563ed6:	c3                   	ret
 8563ed7:	90                   	nop

```

```c
// fair_pvp::CFairMatch::_MoveRoom @ 0x8563d32

/* fair_pvp::CFairMatch::_MoveRoom(PvP_Room*, PvP_Room*, bool) */

void __thiscall
fair_pvp::CFairMatch::_MoveRoom(CFairMatch *this,PvP_Room *param_1,PvP_Room *param_2,bool param_3)

{
  int iVar1;
  PacketGuard local_28 [12];
  int local_1c;
  CUser *local_18;
  undefined4 local_14;
  uint local_10;
  
  local_1c = 0;
  local_18 = (CUser *)0x0;
  local_14 = 0;
  for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
    local_18 = (CUser *)PvP_Room::get_user_seat(param_2,local_10);
    if (local_18 != (CUser *)0x0) {
      local_1c = PvP_Room::get_team(param_2,local_10);
      PacketGuard::PacketGuard(local_28);
                    /* try { // try from 08563db6 to 08563e91 has its CatchHandler @ 08563e94 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,0,0x29);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_28,1);
      PvP_Room::make_room_info(param_1,(char *)local_28);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
      PvP_Room::send_to_pvp(param_2,local_28);
      _PullOutRoom(this,local_18,param_2,local_10);
      iVar1 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)local_18);
      _SetEnterCharacNo(this,iVar1);
      local_14 = _PutInRoom(this,local_18,param_1,param_3);
      if (local_1c == 3) {
        PvP_Room::OnSetPVPSeatState(param_1,local_18,local_14,3,2);
      }
      PacketGuard::~PacketGuard(local_28);
    }
  }
  return;
}

```

---

## _PullOutRoom

```asm
// === 085633ce fair_pvp::CFairMatch::_PullOutRoom  [0x085633ce-0x85634bb] ===
 85633ce:	55                   	push   %ebp
 85633cf:	89 e5                	mov    %esp,%ebp
 85633d1:	57                   	push   %edi
 85633d2:	56                   	push   %esi
 85633d3:	53                   	push   %ebx
 85633d4:	83 ec 4c             	sub    $0x4c,%esp
 85633d7:	8b 45 10             	mov    0x10(%ebp),%eax
 85633da:	89 04 24             	mov    %eax,(%esp)
 85633dd:	e8 ea a5 cc ff       	call   822d9cc <_ZN8PvP_Room19get_pvp_battle_modeEv>
 85633e2:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 85633e5:	8b 45 10             	mov    0x10(%ebp),%eax
 85633e8:	89 04 24             	mov    %eax,(%esp)
 85633eb:	e8 a4 a5 cc ff       	call   822d994 <_ZN8PvP_Room9get_indexEv>
 85633f0:	89 c7                	mov    %eax,%edi
 85633f2:	8b 45 0c             	mov    0xc(%ebp),%eax
 85633f5:	89 04 24             	mov    %eax,(%esp)
 85633f8:	e8 2b dc b9 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 85633fd:	89 c6                	mov    %eax,%esi
 85633ff:	8b 45 0c             	mov    0xc(%ebp),%eax
 8563402:	89 04 24             	mov    %eax,(%esp)
 8563405:	e8 68 dc b9 ff       	call   8101072 <_ZNK5CUser12get_acc_nameEv>
 856340a:	89 c3                	mov    %eax,%ebx
 856340c:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 8563413:	00 
 8563414:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 856341b:	00 
 856341c:	c7 44 24 08 5a 0b 00 	movl   $0xb5a,0x8(%esp)
 8563423:	00 
 8563424:	c7 44 24 04 20 39 ca 	movl   $0x8ca3920,0x4(%esp)
 856342b:	08 
 856342c:	8d 45 d8             	lea    -0x28(%ebp),%eax
 856342f:	89 04 24             	mov    %eax,(%esp)
 8563432:	e8 05 c9 fe ff       	call   854fd3c <_ZN10CSwitchLogC1EPKciii>
 8563437:	8b 45 14             	mov    0x14(%ebp),%eax
 856343a:	89 44 24 18          	mov    %eax,0x18(%esp)
 856343e:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8563441:	89 44 24 14          	mov    %eax,0x14(%esp)
 8563445:	89 7c 24 10          	mov    %edi,0x10(%esp)
 8563449:	89 74 24 0c          	mov    %esi,0xc(%esp)
 856344d:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8563451:	c7 44 24 04 98 23 ca 	movl   $0x8ca2398,0x4(%esp)
 8563458:	08 
 8563459:	8d 45 d8             	lea    -0x28(%ebp),%eax
 856345c:	89 04 24             	mov    %eax,(%esp)
 856345f:	e8 00 c9 fe ff       	call   854fd64 <_ZN10CSwitchLogclEPKcz>
 8563464:	c7 44 24 10 02 00 00 	movl   $0x2,0x10(%esp)
 856346b:	00 
 856346c:	c7 44 24 0c fe 00 00 	movl   $0xfe,0xc(%esp)
 8563473:	00 
 8563474:	8b 45 14             	mov    0x14(%ebp),%eax
 8563477:	89 44 24 08          	mov    %eax,0x8(%esp)
 856347b:	8b 45 0c             	mov    0xc(%ebp),%eax
 856347e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8563482:	8b 45 10             	mov    0x10(%ebp),%eax
 8563485:	89 04 24             	mov    %eax,(%esp)
 8563488:	e8 e3 9b 07 00       	call   85dd070 <_ZN8PvP_Room17OnSetPVPSeatStateEP5CUseri15ENUM_SEAT_STATE17ENUM_WALKOUT_TYPE>
 856348d:	83 f0 01             	xor    $0x1,%eax
 8563490:	84 c0                	test   %al,%al
 8563492:	74 1f                	je     85634b3 <_ZN8fair_pvp10CFairMatch12_PullOutRoomEP5CUserP8PvP_Roomi+0xe5>
 8563494:	8b 45 10             	mov    0x10(%ebp),%eax
 8563497:	89 04 24             	mov    %eax,(%esp)
 856349a:	e8 29 2e 07 00       	call   85d62c8 <_ZN8PvP_Room5resetEv>
 856349f:	e8 ea 8c b6 ff       	call   80cc18e <_Z14G_CGameManagerv>
 85634a4:	8b 55 10             	mov    0x10(%ebp),%edx
 85634a7:	89 54 24 04          	mov    %edx,0x4(%esp)
 85634ab:	89 04 24             	mov    %eax,(%esp)
 85634ae:	e8 95 1e d3 ff       	call   8295348 <_ZN12CGameManager6PutPvpEP8PvP_Room>
 85634b3:	83 c4 4c             	add    $0x4c,%esp
 85634b6:	5b                   	pop    %ebx
 85634b7:	5e                   	pop    %esi
 85634b8:	5f                   	pop    %edi
 85634b9:	5d                   	pop    %ebp
 85634ba:	c3                   	ret
 85634bb:	90                   	nop

```

```c
// fair_pvp::CFairMatch::_PullOutRoom @ 0x85633ce

/* fair_pvp::CFairMatch::_PullOutRoom(CUser*, PvP_Room*, int) */

void __thiscall
fair_pvp::CFairMatch::_PullOutRoom(CFairMatch *this,CUser *param_1,PvP_Room *param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  CGameManager *this_00;
  CSwitchLog local_2c [28];
  
  uVar2 = PvP_Room::get_pvp_battle_mode(param_2);
  uVar3 = PvP_Room::get_index(param_2);
  uVar4 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
  uVar5 = CUser::get_acc_name(param_1);
  CSwitchLog::CSwitchLog
            (local_2c,"void fair_pvp::CFairMatch::_PullOutRoom(CUser*, PvP_Room*, int)",0xb5a,0,0);
  CSwitchLog::operator()(local_2c,"pvp@log %s,%s,room(%d),%d,%d",uVar5,uVar4,uVar3,uVar2,param_3);
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

## _PullOutRoomTeam

```asm
// === 08565d86 fair_pvp::CFairMatch::_PullOutRoomTeam  [0x08565d86-0x8565f91] ===
 8565d86:	55                   	push   %ebp
 8565d87:	89 e5                	mov    %esp,%ebp
 8565d89:	57                   	push   %edi
 8565d8a:	56                   	push   %esi
 8565d8b:	53                   	push   %ebx
 8565d8c:	83 ec 5c             	sub    $0x5c,%esp
 8565d8f:	8b 7d 10             	mov    0x10(%ebp),%edi
 8565d92:	8b 45 0c             	mov    0xc(%ebp),%eax
 8565d95:	89 04 24             	mov    %eax,(%esp)
 8565d98:	e8 2f 7c cc ff       	call   822d9cc <_ZN8PvP_Room19get_pvp_battle_modeEv>
 8565d9d:	89 c6                	mov    %eax,%esi
 8565d9f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8565da2:	89 04 24             	mov    %eax,(%esp)
 8565da5:	e8 ea 7b cc ff       	call   822d994 <_ZN8PvP_Room9get_indexEv>
 8565daa:	89 c3                	mov    %eax,%ebx
 8565dac:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 8565db3:	00 
 8565db4:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8565dbb:	00 
 8565dbc:	c7 44 24 08 a7 0f 00 	movl   $0xfa7,0x8(%esp)
 8565dc3:	00 
 8565dc4:	c7 44 24 04 c0 36 ca 	movl   $0x8ca36c0,0x4(%esp)
 8565dcb:	08 
 8565dcc:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8565dcf:	89 04 24             	mov    %eax,(%esp)
 8565dd2:	e8 65 9f fe ff       	call   854fd3c <_ZN10CSwitchLogC1EPKciii>
 8565dd7:	89 7c 24 10          	mov    %edi,0x10(%esp)
 8565ddb:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8565ddf:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8565de3:	c7 44 24 04 a4 24 ca 	movl   $0x8ca24a4,0x4(%esp)
 8565dea:	08 
 8565deb:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8565dee:	89 04 24             	mov    %eax,(%esp)
 8565df1:	e8 6e 9f fe ff       	call   854fd64 <_ZN10CSwitchLogclEPKcz>
 8565df6:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 8565dfd:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 8565e04:	e9 ec 00 00 00       	jmp    8565ef5 <_ZN8fair_pvp10CFairMatch16_PullOutRoomTeamEP8PvP_Room22ENUM_SCHOOL_MATCH_TEAM+0x16f>
 8565e09:	8b 55 10             	mov    0x10(%ebp),%edx
 8565e0c:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8565e0f:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8565e12:	89 c3                	mov    %eax,%ebx
 8565e14:	c1 e3 04             	shl    $0x4,%ebx
 8565e17:	89 d0                	mov    %edx,%eax
 8565e19:	c1 e0 03             	shl    $0x3,%eax
 8565e1c:	01 d0                	add    %edx,%eax
 8565e1e:	c1 e0 03             	shl    $0x3,%eax
 8565e21:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 8565e24:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8565e27:	83 c0 10             	add    $0x10,%eax
 8565e2a:	0f b6 40 18          	movzbl 0x18(%eax),%eax
 8565e2e:	84 c0                	test   %al,%al
 8565e30:	0f 84 bb 00 00 00    	je     8565ef1 <_ZN8fair_pvp10CFairMatch16_PullOutRoomTeamEP8PvP_Room22ENUM_SCHOOL_MATCH_TEAM+0x16b>
 8565e36:	8b 55 10             	mov    0x10(%ebp),%edx
 8565e39:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8565e3c:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8565e3f:	89 c3                	mov    %eax,%ebx
 8565e41:	c1 e3 04             	shl    $0x4,%ebx
 8565e44:	89 d0                	mov    %edx,%eax
 8565e46:	c1 e0 03             	shl    $0x3,%eax
 8565e49:	01 d0                	add    %edx,%eax
 8565e4b:	c1 e0 03             	shl    $0x3,%eax
 8565e4e:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 8565e51:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8565e54:	83 c0 24             	add    $0x24,%eax
 8565e57:	8b 00                	mov    (%eax),%eax
 8565e59:	85 c0                	test   %eax,%eax
 8565e5b:	0f 84 90 00 00 00    	je     8565ef1 <_ZN8fair_pvp10CFairMatch16_PullOutRoomTeamEP8PvP_Room22ENUM_SCHOOL_MATCH_TEAM+0x16b>
 8565e61:	8b 55 10             	mov    0x10(%ebp),%edx
 8565e64:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8565e67:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8565e6a:	89 c3                	mov    %eax,%ebx
 8565e6c:	c1 e3 04             	shl    $0x4,%ebx
 8565e6f:	89 d0                	mov    %edx,%eax
 8565e71:	c1 e0 03             	shl    $0x3,%eax
 8565e74:	01 d0                	add    %edx,%eax
 8565e76:	c1 e0 03             	shl    $0x3,%eax
 8565e79:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 8565e7c:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8565e7f:	83 c0 24             	add    $0x24,%eax
 8565e82:	8b 00                	mov    (%eax),%eax
 8565e84:	89 44 24 04          	mov    %eax,0x4(%esp)
 8565e88:	8b 45 0c             	mov    0xc(%ebp),%eax
 8565e8b:	89 04 24             	mov    %eax,(%esp)
 8565e8e:	e8 4f 33 07 00       	call   85d91e2 <_ZN8PvP_Room13get_user_seatEP5CUser>
 8565e93:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8565e96:	83 7d dc ff          	cmpl   $0xffffffff,-0x24(%ebp)
 8565e9a:	74 55                	je     8565ef1 <_ZN8fair_pvp10CFairMatch16_PullOutRoomTeamEP8PvP_Room22ENUM_SCHOOL_MATCH_TEAM+0x16b>
 8565e9c:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8565e9f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8565ea3:	8b 45 0c             	mov    0xc(%ebp),%eax
 8565ea6:	89 04 24             	mov    %eax,(%esp)
 8565ea9:	e8 c4 33 07 00       	call   85d9272 <_ZN8PvP_Room8get_teamEi>
 8565eae:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8565eb1:	8b 55 10             	mov    0x10(%ebp),%edx
 8565eb4:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8565eb7:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8565eba:	89 c3                	mov    %eax,%ebx
 8565ebc:	c1 e3 04             	shl    $0x4,%ebx
 8565ebf:	89 d0                	mov    %edx,%eax
 8565ec1:	c1 e0 03             	shl    $0x3,%eax
 8565ec4:	01 d0                	add    %edx,%eax
 8565ec6:	c1 e0 03             	shl    $0x3,%eax
 8565ec9:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 8565ecc:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8565ecf:	83 c0 24             	add    $0x24,%eax
 8565ed2:	8b 00                	mov    (%eax),%eax
 8565ed4:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8565ed7:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8565edb:	8b 55 0c             	mov    0xc(%ebp),%edx
 8565ede:	89 54 24 08          	mov    %edx,0x8(%esp)
 8565ee2:	89 44 24 04          	mov    %eax,0x4(%esp)
 8565ee6:	8b 45 08             	mov    0x8(%ebp),%eax
 8565ee9:	89 04 24             	mov    %eax,(%esp)
 8565eec:	e8 dd d4 ff ff       	call   85633ce <_ZN8fair_pvp10CFairMatch12_PullOutRoomEP5CUserP8PvP_Roomi>
 8565ef1:	83 45 d8 01          	addl   $0x1,-0x28(%ebp)
 8565ef5:	83 7d d8 03          	cmpl   $0x3,-0x28(%ebp)
 8565ef9:	0f 9e c0             	setle  %al
 8565efc:	84 c0                	test   %al,%al
 8565efe:	0f 85 05 ff ff ff    	jne    8565e09 <_ZN8fair_pvp10CFairMatch16_PullOutRoomTeamEP8PvP_Room22ENUM_SCHOOL_MATCH_TEAM+0x83>
 8565f04:	83 7d d4 01          	cmpl   $0x1,-0x2c(%ebp)
 8565f08:	75 7b                	jne    8565f85 <_ZN8fair_pvp10CFairMatch16_PullOutRoomTeamEP8PvP_Room22ENUM_SCHOOL_MATCH_TEAM+0x1ff>
 8565f0a:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8565f11:	eb 67                	jmp    8565f7a <_ZN8fair_pvp10CFairMatch16_PullOutRoomTeamEP8PvP_Room22ENUM_SCHOOL_MATCH_TEAM+0x1f4>
 8565f13:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8565f16:	89 44 24 04          	mov    %eax,0x4(%esp)
 8565f1a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8565f1d:	89 04 24             	mov    %eax,(%esp)
 8565f20:	e8 f9 32 07 00       	call   85d921e <_ZN8PvP_Room13get_user_seatEi>
 8565f25:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8565f28:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 8565f2c:	74 47                	je     8565f75 <_ZN8fair_pvp10CFairMatch16_PullOutRoomTeamEP8PvP_Room22ENUM_SCHOOL_MATCH_TEAM+0x1ef>
 8565f2e:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8565f31:	89 44 24 04          	mov    %eax,0x4(%esp)
 8565f35:	8b 45 0c             	mov    0xc(%ebp),%eax
 8565f38:	89 04 24             	mov    %eax,(%esp)
 8565f3b:	e8 32 33 07 00       	call   85d9272 <_ZN8PvP_Room8get_teamEi>
 8565f40:	83 f8 02             	cmp    $0x2,%eax
 8565f43:	0f 94 c0             	sete   %al
 8565f46:	84 c0                	test   %al,%al
 8565f48:	74 2c                	je     8565f76 <_ZN8fair_pvp10CFairMatch16_PullOutRoomTeamEP8PvP_Room22ENUM_SCHOOL_MATCH_TEAM+0x1f0>
 8565f4a:	c7 44 24 10 02 00 00 	movl   $0x2,0x10(%esp)
 8565f51:	00 
 8565f52:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8565f59:	00 
 8565f5a:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8565f5d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8565f61:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8565f64:	89 44 24 04          	mov    %eax,0x4(%esp)
 8565f68:	8b 45 0c             	mov    0xc(%ebp),%eax
 8565f6b:	89 04 24             	mov    %eax,(%esp)
 8565f6e:	e8 fd 70 07 00       	call   85dd070 <_ZN8PvP_Room17OnSetPVPSeatStateEP5CUseri15ENUM_SEAT_STATE17ENUM_WALKOUT_TYPE>
 8565f73:	eb 01                	jmp    8565f76 <_ZN8fair_pvp10CFairMatch16_PullOutRoomTeamEP8PvP_Room22ENUM_SCHOOL_MATCH_TEAM+0x1f0>
 8565f75:	90                   	nop
 8565f76:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 8565f7a:	83 7d e0 07          	cmpl   $0x7,-0x20(%ebp)
 8565f7e:	0f 9e c0             	setle  %al
 8565f81:	84 c0                	test   %al,%al
 8565f83:	75 8e                	jne    8565f13 <_ZN8fair_pvp10CFairMatch16_PullOutRoomTeamEP8PvP_Room22ENUM_SCHOOL_MATCH_TEAM+0x18d>
 8565f85:	b8 01 00 00 00       	mov    $0x1,%eax
 8565f8a:	83 c4 5c             	add    $0x5c,%esp
 8565f8d:	5b                   	pop    %ebx
 8565f8e:	5e                   	pop    %esi
 8565f8f:	5f                   	pop    %edi
 8565f90:	5d                   	pop    %ebp
 8565f91:	c3                   	ret

```

```c
// fair_pvp::CFairMatch::_PullOutRoomTeam @ 0x8565d86

/* fair_pvp::CFairMatch::_PullOutRoomTeam(PvP_Room*, ENUM_SCHOOL_MATCH_TEAM) */

undefined4 __thiscall
fair_pvp::CFairMatch::_PullOutRoomTeam(CFairMatch *this,PvP_Room *param_1,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  CSwitchLog local_40 [16];
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  uVar1 = PvP_Room::get_pvp_battle_mode(param_1);
  uVar2 = PvP_Room::get_index(param_1);
  CSwitchLog::CSwitchLog
            (local_40,
             "bool fair_pvp::CFairMatch::_PullOutRoomTeam(PvP_Room*, ENUM_SCHOOL_MATCH_TEAM)",0xfa7,
             0,0);
  CSwitchLog::operator()(local_40,"pvp@log room(%d),%d,%d",uVar2,uVar1,param_3);
  local_30 = 0;
  for (local_2c = 0; local_2c < 4; local_2c = local_2c + 1) {
    if ((this[local_2c * 0x10 + param_3 * 0x48 + 0x28] != (CFairMatch)0x0) &&
       (*(int *)(this + local_2c * 0x10 + param_3 * 0x48 + 0x24) != 0)) {
      local_28 = PvP_Room::get_user_seat
                           (param_1,*(CUser **)(this + local_2c * 0x10 + param_3 * 0x48 + 0x24));
      if (local_28 != -1) {
        local_30 = PvP_Room::get_team(param_1,local_28);
        _PullOutRoom(this,*(CUser **)(this + local_2c * 0x10 + param_3 * 0x48 + 0x24),param_1,
                     local_28);
      }
    }
  }
  if (local_30 == 1) {
    for (local_24 = 0; local_24 < 8; local_24 = local_24 + 1) {
      local_20 = PvP_Room::get_user_seat(param_1,local_24);
      if (local_20 != 0) {
        iVar3 = PvP_Room::get_team(param_1,local_24);
        if (iVar3 == 2) {
          PvP_Room::OnSetPVPSeatState(param_1,local_20,local_24,1,2);
        }
      }
    }
  }
  return 1;
}

```

---

## _PutInRoom

```asm
// === 085634bc fair_pvp::CFairMatch::_PutInRoom  [0x085634bc-0x8563673] ===
 85634bc:	55                   	push   %ebp
 85634bd:	89 e5                	mov    %esp,%ebp
 85634bf:	57                   	push   %edi
 85634c0:	56                   	push   %esi
 85634c1:	53                   	push   %ebx
 85634c2:	83 ec 6c             	sub    $0x6c,%esp
 85634c5:	8b 45 14             	mov    0x14(%ebp),%eax
 85634c8:	88 45 b4             	mov    %al,-0x4c(%ebp)
 85634cb:	8d 45 c8             	lea    -0x38(%ebp),%eax
 85634ce:	89 04 24             	mov    %eax,(%esp)
 85634d1:	e8 76 a8 02 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 85634d6:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 85634dd:	0f b6 45 b4          	movzbl -0x4c(%ebp),%eax
 85634e1:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85634e5:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 85634e8:	89 44 24 08          	mov    %eax,0x8(%esp)
 85634ec:	8b 45 0c             	mov    0xc(%ebp),%eax
 85634ef:	89 44 24 04          	mov    %eax,0x4(%esp)
 85634f3:	8b 45 10             	mov    0x10(%ebp),%eax
 85634f6:	89 04 24             	mov    %eax,(%esp)
 85634f9:	e8 f4 37 07 00       	call   85d6cf2 <_ZN8PvP_Room9join_roomEP5CUserRib>
 85634fe:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8563501:	8b 45 10             	mov    0x10(%ebp),%eax
 8563504:	89 04 24             	mov    %eax,(%esp)
 8563507:	e8 c0 a4 cc ff       	call   822d9cc <_ZN8PvP_Room19get_pvp_battle_modeEv>
 856350c:	89 45 b0             	mov    %eax,-0x50(%ebp)
 856350f:	8b 45 10             	mov    0x10(%ebp),%eax
 8563512:	89 04 24             	mov    %eax,(%esp)
 8563515:	e8 7a a4 cc ff       	call   822d994 <_ZN8PvP_Room9get_indexEv>
 856351a:	89 c7                	mov    %eax,%edi
 856351c:	8b 45 0c             	mov    0xc(%ebp),%eax
 856351f:	89 04 24             	mov    %eax,(%esp)
 8563522:	e8 01 db b9 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 8563527:	89 c6                	mov    %eax,%esi
 8563529:	8b 45 0c             	mov    0xc(%ebp),%eax
 856352c:	89 04 24             	mov    %eax,(%esp)
 856352f:	e8 3e db b9 ff       	call   8101072 <_ZNK5CUser12get_acc_nameEv>
 8563534:	89 c3                	mov    %eax,%ebx
 8563536:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 856353d:	00 
 856353e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8563545:	00 
 8563546:	c7 44 24 08 6a 0b 00 	movl   $0xb6a,0x8(%esp)
 856354d:	00 
 856354e:	c7 44 24 04 e0 38 ca 	movl   $0x8ca38e0,0x4(%esp)
 8563555:	08 
 8563556:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8563559:	89 04 24             	mov    %eax,(%esp)
 856355c:	e8 db c7 fe ff       	call   854fd3c <_ZN10CSwitchLogC1EPKciii>
 8563561:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8563564:	89 44 24 18          	mov    %eax,0x18(%esp)
 8563568:	8b 45 b0             	mov    -0x50(%ebp),%eax
 856356b:	89 44 24 14          	mov    %eax,0x14(%esp)
 856356f:	89 7c 24 10          	mov    %edi,0x10(%esp)
 8563573:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8563577:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 856357b:	c7 44 24 04 98 23 ca 	movl   $0x8ca2398,0x4(%esp)
 8563582:	08 
 8563583:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8563586:	89 04 24             	mov    %eax,(%esp)
 8563589:	e8 d6 c7 fe ff       	call   854fd64 <_ZN10CSwitchLogclEPKcz>
 856358e:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 8563592:	7e 6a                	jle    85635fe <_ZN8fair_pvp10CFairMatch10_PutInRoomEP5CUserP8PvP_Roomb+0x142>
 8563594:	c7 44 24 08 36 00 00 	movl   $0x36,0x8(%esp)
 856359b:	00 
 856359c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85635a3:	00 
 85635a4:	8d 45 c8             	lea    -0x38(%ebp),%eax
 85635a7:	89 04 24             	mov    %eax,(%esp)
 85635aa:	e8 4d 83 b6 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 85635af:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85635b6:	00 
 85635b7:	8d 45 c8             	lea    -0x38(%ebp),%eax
 85635ba:	89 04 24             	mov    %eax,(%esp)
 85635bd:	e8 5e 83 b6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85635c2:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85635c5:	89 44 24 04          	mov    %eax,0x4(%esp)
 85635c9:	8d 45 c8             	lea    -0x38(%ebp),%eax
 85635cc:	89 04 24             	mov    %eax,(%esp)
 85635cf:	e8 4c 83 b6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85635d4:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85635db:	00 
 85635dc:	8d 45 c8             	lea    -0x38(%ebp),%eax
 85635df:	89 04 24             	mov    %eax,(%esp)
 85635e2:	e8 71 83 b6 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 85635e7:	8d 45 c8             	lea    -0x38(%ebp),%eax
 85635ea:	89 44 24 04          	mov    %eax,0x4(%esp)
 85635ee:	8b 45 0c             	mov    0xc(%ebp),%eax
 85635f1:	89 04 24             	mov    %eax,(%esp)
 85635f4:	e8 c1 4f 0e 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 85635f9:	8b 5d c4             	mov    -0x3c(%ebp),%ebx
 85635fc:	eb 61                	jmp    856365f <_ZN8fair_pvp10CFairMatch10_PutInRoomEP5CUserP8PvP_Roomb+0x1a3>
 85635fe:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 8563601:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8563604:	89 54 24 08          	mov    %edx,0x8(%esp)
 8563608:	89 44 24 04          	mov    %eax,0x4(%esp)
 856360c:	8b 45 10             	mov    0x10(%ebp),%eax
 856360f:	89 04 24             	mov    %eax,(%esp)
 8563612:	e8 cb 83 07 00       	call   85db9e2 <_ZN8PvP_Room14make_seat_infoEPci>
 8563617:	e8 8b 6d b7 ff       	call   80da3a7 <_Z11G_GameWorldv>
 856361c:	8d 55 c8             	lea    -0x38(%ebp),%edx
 856361f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8563623:	89 04 24             	mov    %eax,(%esp)
 8563626:	e8 e9 55 16 00       	call   86c8c14 <_ZN9GameWorld8send_allER11PacketGuard>
 856362b:	e8 77 6d b7 ff       	call   80da3a7 <_Z11G_GameWorldv>
 8563630:	8b 55 0c             	mov    0xc(%ebp),%edx
 8563633:	89 54 24 04          	mov    %edx,0x4(%esp)
 8563637:	89 04 24             	mov    %eax,(%esp)
 856363a:	e8 af 36 16 00       	call   86c6cee <_ZN9GameWorld8goto_pvpEP5CUser>
 856363f:	8b 5d c4             	mov    -0x3c(%ebp),%ebx
 8563642:	eb 1b                	jmp    856365f <_ZN8fair_pvp10CFairMatch10_PutInRoomEP5CUserP8PvP_Roomb+0x1a3>
 8563644:	89 d3                	mov    %edx,%ebx
 8563646:	89 c6                	mov    %eax,%esi
 8563648:	8d 45 c8             	lea    -0x38(%ebp),%eax
 856364b:	89 04 24             	mov    %eax,(%esp)
 856364e:	e8 2d a8 02 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8563653:	89 f0                	mov    %esi,%eax
 8563655:	89 da                	mov    %ebx,%edx
 8563657:	89 04 24             	mov    %eax,(%esp)
 856365a:	e8 f1 00 58 00       	call   8ae3750 <_Unwind_Resume>
 856365f:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8563662:	89 04 24             	mov    %eax,(%esp)
 8563665:	e8 16 a8 02 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 856366a:	89 d8                	mov    %ebx,%eax
 856366c:	83 c4 6c             	add    $0x6c,%esp
 856366f:	5b                   	pop    %ebx
 8563670:	5e                   	pop    %esi
 8563671:	5f                   	pop    %edi
 8563672:	5d                   	pop    %ebp
 8563673:	c3                   	ret

```

```c
// fair_pvp::CFairMatch::_PutInRoom @ 0x85634bc

/* fair_pvp::CFairMatch::_PutInRoom(CUser*, PvP_Room*, bool) */

int __thiscall
fair_pvp::CFairMatch::_PutInRoom(CFairMatch *this,CUser *param_1,PvP_Room *param_2,bool param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  GameWorld *pGVar6;
  int local_40;
  PacketGuard local_3c [12];
  CSwitchLog local_30 [16];
  int local_20;
  
  PacketGuard::PacketGuard(local_3c);
  local_40 = 0;
                    /* try { // try from 085634f9 to 0856363e has its CatchHandler @ 08563644 */
  local_20 = PvP_Room::join_room(param_2,param_1,&local_40,param_3);
  uVar2 = PvP_Room::get_pvp_battle_mode(param_2);
  uVar3 = PvP_Room::get_index(param_2);
  uVar4 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
  uVar5 = CUser::get_acc_name(param_1);
  CSwitchLog::CSwitchLog
            (local_30,"int fair_pvp::CFairMatch::_PutInRoom(CUser*, PvP_Room*, bool)",0xb6a,0,0);
  CSwitchLog::operator()(local_30,"pvp@log %s,%s,room(%d),%d,%d",uVar5,uVar4,uVar3,uVar2,local_20);
  if (local_20 < 1) {
    PvP_Room::make_seat_info(param_2,(char *)local_3c,local_40);
    pGVar6 = (GameWorld *)G_GameWorld();
    GameWorld::send_all(pGVar6,local_3c);
    pGVar6 = (GameWorld *)G_GameWorld();
    GameWorld::goto_pvp(pGVar6,param_1);
  }
  else {
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_3c,1,0x36);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,local_20);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_3c,true);
    CUser::Send(param_1,local_3c);
  }
  iVar1 = local_40;
  PacketGuard::~PacketGuard(local_3c);
  return iVar1;
}

```

---

## _RegisterWaitingRoom

```asm
// === 08563a32 fair_pvp::CFairMatch::_RegisterWaitingRoom  [0x08563a32-0x8563a53] ===
 8563a32:	55                   	push   %ebp
 8563a33:	89 e5                	mov    %esp,%ebp
 8563a35:	83 ec 18             	sub    $0x18,%esp
 8563a38:	a1 48 e1 43 09       	mov    0x943e148,%eax
 8563a3d:	8b 00                	mov    (%eax),%eax
 8563a3f:	8b 08                	mov    (%eax),%ecx
 8563a41:	8b 55 08             	mov    0x8(%ebp),%edx
 8563a44:	a1 48 e1 43 09       	mov    0x943e148,%eax
 8563a49:	89 54 24 04          	mov    %edx,0x4(%esp)
 8563a4d:	89 04 24             	mov    %eax,(%esp)
 8563a50:	ff d1                	call   *%ecx
 8563a52:	c9                   	leave
 8563a53:	c3                   	ret

```

```c
// fair_pvp::CFairMatch::_RegisterWaitingRoom @ 0x8563a32

/* fair_pvp::CFairMatch::_RegisterWaitingRoom(PvP_Room*) */

void fair_pvp::CFairMatch::_RegisterWaitingRoom(PvP_Room *param_1)

{
  (**(code **)*pWaitingRoomList_)(pWaitingRoomList_,param_1);
  return;
}

```

---

## _ReturnTeam

```asm
// === 08564dea fair_pvp::CFairMatch::_ReturnTeam  [0x08564dea-0x8564f8b] ===
 8564dea:	55                   	push   %ebp
 8564deb:	89 e5                	mov    %esp,%ebp
 8564ded:	57                   	push   %edi
 8564dee:	56                   	push   %esi
 8564def:	53                   	push   %ebx
 8564df0:	83 ec 4c             	sub    $0x4c,%esp
 8564df3:	8b 45 0c             	mov    0xc(%ebp),%eax
 8564df6:	89 04 24             	mov    %eax,(%esp)
 8564df9:	e8 64 1a 07 00       	call   85d6862 <_ZNK8PvP_Room16get_waiter_countEv>
 8564dfe:	89 c6                	mov    %eax,%esi
 8564e00:	8b 45 0c             	mov    0xc(%ebp),%eax
 8564e03:	89 04 24             	mov    %eax,(%esp)
 8564e06:	e8 c1 8b cc ff       	call   822d9cc <_ZN8PvP_Room19get_pvp_battle_modeEv>
 8564e0b:	89 c7                	mov    %eax,%edi
 8564e0d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8564e10:	89 04 24             	mov    %eax,(%esp)
 8564e13:	e8 7c 8b cc ff       	call   822d994 <_ZN8PvP_Room9get_indexEv>
 8564e18:	89 c3                	mov    %eax,%ebx
 8564e1a:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 8564e21:	00 
 8564e22:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8564e29:	00 
 8564e2a:	c7 44 24 08 95 0d 00 	movl   $0xd95,0x8(%esp)
 8564e31:	00 
 8564e32:	c7 44 24 04 a0 37 ca 	movl   $0x8ca37a0,0x4(%esp)
 8564e39:	08 
 8564e3a:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8564e3d:	89 04 24             	mov    %eax,(%esp)
 8564e40:	e8 f7 ae fe ff       	call   854fd3c <_ZN10CSwitchLogC1EPKciii>
 8564e45:	89 74 24 10          	mov    %esi,0x10(%esp)
 8564e49:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 8564e4d:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8564e51:	c7 44 24 04 42 24 ca 	movl   $0x8ca2442,0x4(%esp)
 8564e58:	08 
 8564e59:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8564e5c:	89 04 24             	mov    %eax,(%esp)
 8564e5f:	e8 00 af fe ff       	call   854fd64 <_ZN10CSwitchLogclEPKcz>
 8564e64:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 8564e6b:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 8564e72:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8564e79:	e9 ea 00 00 00       	jmp    8564f68 <_ZN8fair_pvp10CFairMatch11_ReturnTeamEP8PvP_RoomiP5CUser+0x17e>
 8564e7e:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8564e81:	89 44 24 04          	mov    %eax,0x4(%esp)
 8564e85:	8b 45 0c             	mov    0xc(%ebp),%eax
 8564e88:	89 04 24             	mov    %eax,(%esp)
 8564e8b:	e8 8e 43 07 00       	call   85d921e <_ZN8PvP_Room13get_user_seatEi>
 8564e90:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8564e93:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 8564e97:	0f 84 c0 00 00 00    	je     8564f5d <_ZN8fair_pvp10CFairMatch11_ReturnTeamEP8PvP_RoomiP5CUser+0x173>
 8564e9d:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8564ea0:	89 44 24 04          	mov    %eax,0x4(%esp)
 8564ea4:	8b 45 0c             	mov    0xc(%ebp),%eax
 8564ea7:	89 04 24             	mov    %eax,(%esp)
 8564eaa:	e8 c3 43 07 00       	call   85d9272 <_ZN8PvP_Room8get_teamEi>
 8564eaf:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8564eb2:	8b 45 10             	mov    0x10(%ebp),%eax
 8564eb5:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 8564eb8:	75 35                	jne    8564eef <_ZN8fair_pvp10CFairMatch11_ReturnTeamEP8PvP_RoomiP5CUser+0x105>
 8564eba:	83 7d 10 02          	cmpl   $0x2,0x10(%ebp)
 8564ebe:	0f 85 9c 00 00 00    	jne    8564f60 <_ZN8fair_pvp10CFairMatch11_ReturnTeamEP8PvP_RoomiP5CUser+0x176>
 8564ec4:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8564ec7:	c7 44 24 10 02 00 00 	movl   $0x2,0x10(%esp)
 8564ece:	00 
 8564ecf:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8564ed6:	00 
 8564ed7:	89 44 24 08          	mov    %eax,0x8(%esp)
 8564edb:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8564ede:	89 44 24 04          	mov    %eax,0x4(%esp)
 8564ee2:	8b 45 0c             	mov    0xc(%ebp),%eax
 8564ee5:	89 04 24             	mov    %eax,(%esp)
 8564ee8:	e8 83 81 07 00       	call   85dd070 <_ZN8PvP_Room17OnSetPVPSeatStateEP5CUseri15ENUM_SEAT_STATE17ENUM_WALKOUT_TYPE>
 8564eed:	eb 75                	jmp    8564f64 <_ZN8fair_pvp10CFairMatch11_ReturnTeamEP8PvP_RoomiP5CUser+0x17a>
 8564eef:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 8564ef3:	74 08                	je     8564efd <_ZN8fair_pvp10CFairMatch11_ReturnTeamEP8PvP_RoomiP5CUser+0x113>
 8564ef5:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8564ef8:	3b 45 14             	cmp    0x14(%ebp),%eax
 8564efb:	74 66                	je     8564f63 <_ZN8fair_pvp10CFairMatch11_ReturnTeamEP8PvP_RoomiP5CUser+0x179>
 8564efd:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8564f00:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8564f04:	8b 45 0c             	mov    0xc(%ebp),%eax
 8564f07:	89 44 24 08          	mov    %eax,0x8(%esp)
 8564f0b:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8564f0e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8564f12:	8b 45 08             	mov    0x8(%ebp),%eax
 8564f15:	89 04 24             	mov    %eax,(%esp)
 8564f18:	e8 b1 e4 ff ff       	call   85633ce <_ZN8fair_pvp10CFairMatch12_PullOutRoomEP5CUserP8PvP_Roomi>
 8564f1d:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 8564f21:	75 17                	jne    8564f3a <_ZN8fair_pvp10CFairMatch11_ReturnTeamEP8PvP_RoomiP5CUser+0x150>
 8564f23:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8564f26:	89 44 24 04          	mov    %eax,0x4(%esp)
 8564f2a:	8b 45 08             	mov    0x8(%ebp),%eax
 8564f2d:	89 04 24             	mov    %eax,(%esp)
 8564f30:	e8 5d e7 ff ff       	call   8563692 <_ZN8fair_pvp10CFairMatch9_MakeRoomEP5CUser>
 8564f35:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8564f38:	eb 2a                	jmp    8564f64 <_ZN8fair_pvp10CFairMatch11_ReturnTeamEP8PvP_RoomiP5CUser+0x17a>
 8564f3a:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8564f41:	00 
 8564f42:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8564f45:	89 44 24 08          	mov    %eax,0x8(%esp)
 8564f49:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8564f4c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8564f50:	8b 45 08             	mov    0x8(%ebp),%eax
 8564f53:	89 04 24             	mov    %eax,(%esp)
 8564f56:	e8 61 e5 ff ff       	call   85634bc <_ZN8fair_pvp10CFairMatch10_PutInRoomEP5CUserP8PvP_Roomb>
 8564f5b:	eb 07                	jmp    8564f64 <_ZN8fair_pvp10CFairMatch11_ReturnTeamEP8PvP_RoomiP5CUser+0x17a>
 8564f5d:	90                   	nop
 8564f5e:	eb 04                	jmp    8564f64 <_ZN8fair_pvp10CFairMatch11_ReturnTeamEP8PvP_RoomiP5CUser+0x17a>
 8564f60:	90                   	nop
 8564f61:	eb 01                	jmp    8564f64 <_ZN8fair_pvp10CFairMatch11_ReturnTeamEP8PvP_RoomiP5CUser+0x17a>
 8564f63:	90                   	nop
 8564f64:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 8564f68:	83 7d e0 07          	cmpl   $0x7,-0x20(%ebp)
 8564f6c:	0f 96 c0             	setbe  %al
 8564f6f:	84 c0                	test   %al,%al
 8564f71:	0f 85 07 ff ff ff    	jne    8564e7e <_ZN8fair_pvp10CFairMatch11_ReturnTeamEP8PvP_RoomiP5CUser+0x94>
 8564f77:	8b 45 08             	mov    0x8(%ebp),%eax
 8564f7a:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 8564f81:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8564f84:	83 c4 4c             	add    $0x4c,%esp
 8564f87:	5b                   	pop    %ebx
 8564f88:	5e                   	pop    %esi
 8564f89:	5f                   	pop    %edi
 8564f8a:	5d                   	pop    %ebp
 8564f8b:	c3                   	ret

```

```c
// fair_pvp::CFairMatch::_ReturnTeam @ 0x8564dea

/* fair_pvp::CFairMatch::_ReturnTeam(PvP_Room*, int, CUser*) */

PvP_Room * __thiscall
fair_pvp::CFairMatch::_ReturnTeam(CFairMatch *this,PvP_Room *param_1,int param_2,CUser *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  CSwitchLog local_3c [16];
  CUser *local_2c;
  PvP_Room *local_28;
  uint local_24;
  int local_20;
  
  uVar1 = PvP_Room::get_waiter_count(param_1);
  uVar2 = PvP_Room::get_pvp_battle_mode(param_1);
  uVar3 = PvP_Room::get_index(param_1);
  CSwitchLog::CSwitchLog
            (local_3c,"PvP_Room* fair_pvp::CFairMatch::_ReturnTeam(PvP_Room*, int, CUser*)",0xd95,0,
             0);
  CSwitchLog::operator()(local_3c,"pvp@log room(%d), %d, %d",uVar3,uVar2,uVar1);
  local_2c = (CUser *)0x0;
  local_28 = (PvP_Room *)0x0;
  for (local_24 = 0; local_24 < 8; local_24 = local_24 + 1) {
    local_2c = (CUser *)PvP_Room::get_user_seat(param_1,local_24);
    if (local_2c != (CUser *)0x0) {
      local_20 = PvP_Room::get_team(param_1,local_24);
      if (param_2 == local_20) {
        if (param_2 == 2) {
          PvP_Room::OnSetPVPSeatState(param_1,local_2c,local_24,1,2);
        }
      }
      else if ((param_3 == (CUser *)0x0) || (local_2c != param_3)) {
        _PullOutRoom(this,local_2c,param_1,local_24);
        if (local_28 == (PvP_Room *)0x0) {
          local_28 = (PvP_Room *)_MakeRoom(this,local_2c);
        }
        else {
          _PutInRoom(this,local_2c,local_28,true);
        }
      }
    }
  }
  *(undefined4 *)(this + 4) = 0;
  return local_28;
}

```

---

## _SendMatchStatePacket

```asm
// === 085651a6 fair_pvp::CFairMatch::_SendMatchStatePacket  [0x085651a6-0x85652c7] ===
 85651a6:	55                   	push   %ebp
 85651a7:	89 e5                	mov    %esp,%ebp
 85651a9:	56                   	push   %esi
 85651aa:	53                   	push   %ebx
 85651ab:	83 ec 30             	sub    $0x30,%esp
 85651ae:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85651b1:	89 04 24             	mov    %eax,(%esp)
 85651b4:	e8 93 8b 02 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 85651b9:	c7 44 24 08 af 00 00 	movl   $0xaf,0x8(%esp)
 85651c0:	00 
 85651c1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85651c8:	00 
 85651c9:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85651cc:	89 04 24             	mov    %eax,(%esp)
 85651cf:	e8 28 67 b6 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 85651d4:	8b 45 0c             	mov    0xc(%ebp),%eax
 85651d7:	89 44 24 04          	mov    %eax,0x4(%esp)
 85651db:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85651de:	89 04 24             	mov    %eax,(%esp)
 85651e1:	e8 3a 67 b6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85651e6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85651ed:	00 
 85651ee:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85651f1:	89 04 24             	mov    %eax,(%esp)
 85651f4:	e8 5f 67 b6 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 85651f9:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8565200:	e9 83 00 00 00       	jmp    8565288 <_ZN8fair_pvp10CFairMatch21_SendMatchStatePacketEii+0xe2>
 8565205:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 856520c:	eb 6b                	jmp    8565279 <_ZN8fair_pvp10CFairMatch21_SendMatchStatePacketEii+0xd3>
 856520e:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8565211:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8565214:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8565217:	89 c3                	mov    %eax,%ebx
 8565219:	c1 e3 04             	shl    $0x4,%ebx
 856521c:	89 d0                	mov    %edx,%eax
 856521e:	c1 e0 03             	shl    $0x3,%eax
 8565221:	01 d0                	add    %edx,%eax
 8565223:	c1 e0 03             	shl    $0x3,%eax
 8565226:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 8565229:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 856522c:	83 c0 24             	add    $0x24,%eax
 856522f:	8b 00                	mov    (%eax),%eax
 8565231:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8565234:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8565237:	8b 45 f0             	mov    -0x10(%ebp),%eax
 856523a:	8b 4d 08             	mov    0x8(%ebp),%ecx
 856523d:	89 c3                	mov    %eax,%ebx
 856523f:	c1 e3 04             	shl    $0x4,%ebx
 8565242:	89 d0                	mov    %edx,%eax
 8565244:	c1 e0 03             	shl    $0x3,%eax
 8565247:	01 d0                	add    %edx,%eax
 8565249:	c1 e0 03             	shl    $0x3,%eax
 856524c:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 856524f:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8565252:	83 c0 10             	add    $0x10,%eax
 8565255:	0f b6 40 18          	movzbl 0x18(%eax),%eax
 8565259:	84 c0                	test   %al,%al
 856525b:	74 18                	je     8565275 <_ZN8fair_pvp10CFairMatch21_SendMatchStatePacketEii+0xcf>
 856525d:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8565261:	74 12                	je     8565275 <_ZN8fair_pvp10CFairMatch21_SendMatchStatePacketEii+0xcf>
 8565263:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8565266:	89 44 24 04          	mov    %eax,0x4(%esp)
 856526a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 856526d:	89 04 24             	mov    %eax,(%esp)
 8565270:	e8 45 33 0e 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8565275:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8565279:	83 7d f0 03          	cmpl   $0x3,-0x10(%ebp)
 856527d:	0f 9e c0             	setle  %al
 8565280:	84 c0                	test   %al,%al
 8565282:	75 8a                	jne    856520e <_ZN8fair_pvp10CFairMatch21_SendMatchStatePacketEii+0x68>
 8565284:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 8565288:	8b 45 ec             	mov    -0x14(%ebp),%eax
 856528b:	3b 45 10             	cmp    0x10(%ebp),%eax
 856528e:	0f 9c c0             	setl   %al
 8565291:	84 c0                	test   %al,%al
 8565293:	0f 85 6c ff ff ff    	jne    8565205 <_ZN8fair_pvp10CFairMatch21_SendMatchStatePacketEii+0x5f>
 8565299:	eb 1b                	jmp    85652b6 <_ZN8fair_pvp10CFairMatch21_SendMatchStatePacketEii+0x110>
 856529b:	89 d3                	mov    %edx,%ebx
 856529d:	89 c6                	mov    %eax,%esi
 856529f:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85652a2:	89 04 24             	mov    %eax,(%esp)
 85652a5:	e8 d6 8b 02 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 85652aa:	89 f0                	mov    %esi,%eax
 85652ac:	89 da                	mov    %ebx,%edx
 85652ae:	89 04 24             	mov    %eax,(%esp)
 85652b1:	e8 9a e4 57 00       	call   8ae3750 <_Unwind_Resume>
 85652b6:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85652b9:	89 04 24             	mov    %eax,(%esp)
 85652bc:	e8 bf 8b 02 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 85652c1:	83 c4 30             	add    $0x30,%esp
 85652c4:	5b                   	pop    %ebx
 85652c5:	5e                   	pop    %esi
 85652c6:	5d                   	pop    %ebp
 85652c7:	c3                   	ret

```

```c
// fair_pvp::CFairMatch::_SendMatchStatePacket @ 0x85651a6

/* fair_pvp::CFairMatch::_SendMatchStatePacket(int, int) */

void __thiscall
fair_pvp::CFairMatch::_SendMatchStatePacket(CFairMatch *this,int param_1,int param_2)

{
  PacketGuard local_24 [12];
  int local_18;
  int local_14;
  CUser *local_10;
  
  PacketGuard::PacketGuard(local_24);
                    /* try { // try from 085651cf to 08565274 has its CatchHandler @ 0856529b */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,0,0xaf);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,param_1);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
  for (local_18 = 0; local_18 < param_2; local_18 = local_18 + 1) {
    for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
      local_10 = *(CUser **)(this + local_14 * 0x10 + local_18 * 0x48 + 0x24);
      if ((this[local_14 * 0x10 + local_18 * 0x48 + 0x28] != (CFairMatch)0x0) &&
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

## _UpdateRating

```asm
// === 08562e1e fair_pvp::CFairMatch::_UpdateRating  [0x08562e1e-0x8562fbb] ===
 8562e1e:	55                   	push   %ebp
 8562e1f:	89 e5                	mov    %esp,%ebp
 8562e21:	83 ec 38             	sub    $0x38,%esp
 8562e24:	b8 00 00 00 00       	mov    $0x0,%eax
 8562e29:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8562e2c:	b8 00 00 00 00       	mov    $0x0,%eax
 8562e31:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8562e34:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8562e3b:	83 7d 0c 01          	cmpl   $0x1,0xc(%ebp)
 8562e3f:	0f 85 c1 00 00 00    	jne    8562f06 <_ZN8fair_pvp10CFairMatch13_UpdateRatingEi22ENUM_ELO_RATING_SYSTEM+0xe8>
 8562e45:	8b 45 08             	mov    0x8(%ebp),%eax
 8562e48:	83 c0 64             	add    $0x64,%eax
 8562e4b:	89 04 24             	mov    %eax,(%esp)
 8562e4e:	e8 5f f9 ff ff       	call   85627b2 <_ZN8fair_pvp13TeamInfoThird13GetTeamRatingEv>
 8562e53:	d9 5d e4             	fstps  -0x1c(%ebp)
 8562e56:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8562e5d:	e9 90 00 00 00       	jmp    8562ef2 <_ZN8fair_pvp10CFairMatch13_UpdateRatingEi22ENUM_ELO_RATING_SYSTEM+0xd4>
 8562e62:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8562e65:	8b 45 08             	mov    0x8(%ebp),%eax
 8562e68:	83 c2 01             	add    $0x1,%edx
 8562e6b:	c1 e2 04             	shl    $0x4,%edx
 8562e6e:	0f b6 44 02 18       	movzbl 0x18(%edx,%eax,1),%eax
 8562e73:	84 c0                	test   %al,%al
 8562e75:	74 77                	je     8562eee <_ZN8fair_pvp10CFairMatch13_UpdateRatingEi22ENUM_ELO_RATING_SYSTEM+0xd0>
 8562e77:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8562e7a:	8b 45 08             	mov    0x8(%ebp),%eax
 8562e7d:	83 c2 01             	add    $0x1,%edx
 8562e80:	c1 e2 04             	shl    $0x4,%edx
 8562e83:	01 d0                	add    %edx,%eax
 8562e85:	83 c0 14             	add    $0x14,%eax
 8562e88:	8b 00                	mov    (%eax),%eax
 8562e8a:	85 c0                	test   %eax,%eax
 8562e8c:	74 60                	je     8562eee <_ZN8fair_pvp10CFairMatch13_UpdateRatingEi22ENUM_ELO_RATING_SYSTEM+0xd0>
 8562e8e:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8562e91:	8b 45 08             	mov    0x8(%ebp),%eax
 8562e94:	83 c2 01             	add    $0x1,%edx
 8562e97:	c1 e2 04             	shl    $0x4,%edx
 8562e9a:	01 d0                	add    %edx,%eax
 8562e9c:	83 c0 14             	add    $0x14,%eax
 8562e9f:	8b 00                	mov    (%eax),%eax
 8562ea1:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8562ea4:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8562ea7:	8b 45 08             	mov    0x8(%ebp),%eax
 8562eaa:	83 c2 01             	add    $0x1,%edx
 8562ead:	c1 e2 04             	shl    $0x4,%edx
 8562eb0:	01 d0                	add    %edx,%eax
 8562eb2:	83 c0 20             	add    $0x20,%eax
 8562eb5:	8b 00                	mov    (%eax),%eax
 8562eb7:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8562eba:	a1 6c bb 3a 09       	mov    0x93abb6c,%eax
 8562ebf:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8562ec3:	8b 45 10             	mov    0x10(%ebp),%eax
 8562ec6:	89 44 24 08          	mov    %eax,0x8(%esp)
 8562eca:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8562ecd:	89 44 24 04          	mov    %eax,0x4(%esp)
 8562ed1:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8562ed4:	89 04 24             	mov    %eax,(%esp)
 8562ed7:	e8 c5 ad ee ff       	call   844dca1 <_ZN10CEloRating4calcERfS0_22ENUM_ELO_RATING_SYSTEMi>
 8562edc:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8562edf:	89 44 24 04          	mov    %eax,0x4(%esp)
 8562ee3:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8562ee6:	89 04 24             	mov    %eax,(%esp)
 8562ee9:	e8 ae 5f 00 00       	call   8568e9c <_ZN5CUser12UpdateRatingEf>
 8562eee:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8562ef2:	83 7d f0 03          	cmpl   $0x3,-0x10(%ebp)
 8562ef6:	0f 9e c0             	setle  %al
 8562ef9:	84 c0                	test   %al,%al
 8562efb:	0f 85 61 ff ff ff    	jne    8562e62 <_ZN8fair_pvp10CFairMatch13_UpdateRatingEi22ENUM_ELO_RATING_SYSTEM+0x44>
 8562f01:	e9 b4 00 00 00       	jmp    8562fba <_ZN8fair_pvp10CFairMatch13_UpdateRatingEi22ENUM_ELO_RATING_SYSTEM+0x19c>
 8562f06:	8b 45 08             	mov    0x8(%ebp),%eax
 8562f09:	83 c0 1c             	add    $0x1c,%eax
 8562f0c:	89 04 24             	mov    %eax,(%esp)
 8562f0f:	e8 9e f8 ff ff       	call   85627b2 <_ZN8fair_pvp13TeamInfoThird13GetTeamRatingEv>
 8562f14:	d9 5d e4             	fstps  -0x1c(%ebp)
 8562f17:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8562f1e:	e9 88 00 00 00       	jmp    8562fab <_ZN8fair_pvp10CFairMatch13_UpdateRatingEi22ENUM_ELO_RATING_SYSTEM+0x18d>
 8562f23:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8562f26:	8b 45 08             	mov    0x8(%ebp),%eax
 8562f29:	c1 e2 04             	shl    $0x4,%edx
 8562f2c:	01 d0                	add    %edx,%eax
 8562f2e:	83 c0 58             	add    $0x58,%eax
 8562f31:	0f b6 40 18          	movzbl 0x18(%eax),%eax
 8562f35:	84 c0                	test   %al,%al
 8562f37:	74 6e                	je     8562fa7 <_ZN8fair_pvp10CFairMatch13_UpdateRatingEi22ENUM_ELO_RATING_SYSTEM+0x189>
 8562f39:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8562f3c:	8b 45 08             	mov    0x8(%ebp),%eax
 8562f3f:	c1 e2 04             	shl    $0x4,%edx
 8562f42:	01 d0                	add    %edx,%eax
 8562f44:	83 c0 6c             	add    $0x6c,%eax
 8562f47:	8b 00                	mov    (%eax),%eax
 8562f49:	85 c0                	test   %eax,%eax
 8562f4b:	74 5a                	je     8562fa7 <_ZN8fair_pvp10CFairMatch13_UpdateRatingEi22ENUM_ELO_RATING_SYSTEM+0x189>
 8562f4d:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8562f50:	8b 45 08             	mov    0x8(%ebp),%eax
 8562f53:	c1 e2 04             	shl    $0x4,%edx
 8562f56:	01 d0                	add    %edx,%eax
 8562f58:	83 c0 6c             	add    $0x6c,%eax
 8562f5b:	8b 00                	mov    (%eax),%eax
 8562f5d:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8562f60:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8562f63:	8b 45 08             	mov    0x8(%ebp),%eax
 8562f66:	c1 e2 04             	shl    $0x4,%edx
 8562f69:	01 d0                	add    %edx,%eax
 8562f6b:	83 c0 78             	add    $0x78,%eax
 8562f6e:	8b 00                	mov    (%eax),%eax
 8562f70:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8562f73:	a1 6c bb 3a 09       	mov    0x93abb6c,%eax
 8562f78:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8562f7c:	8b 45 10             	mov    0x10(%ebp),%eax
 8562f7f:	89 44 24 08          	mov    %eax,0x8(%esp)
 8562f83:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8562f86:	89 44 24 04          	mov    %eax,0x4(%esp)
 8562f8a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8562f8d:	89 04 24             	mov    %eax,(%esp)
 8562f90:	e8 0c ad ee ff       	call   844dca1 <_ZN10CEloRating4calcERfS0_22ENUM_ELO_RATING_SYSTEMi>
 8562f95:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8562f98:	89 44 24 04          	mov    %eax,0x4(%esp)
 8562f9c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8562f9f:	89 04 24             	mov    %eax,(%esp)
 8562fa2:	e8 f5 5e 00 00       	call   8568e9c <_ZN5CUser12UpdateRatingEf>
 8562fa7:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8562fab:	83 7d f4 03          	cmpl   $0x3,-0xc(%ebp)
 8562faf:	0f 9e c0             	setle  %al
 8562fb2:	84 c0                	test   %al,%al
 8562fb4:	0f 85 69 ff ff ff    	jne    8562f23 <_ZN8fair_pvp10CFairMatch13_UpdateRatingEi22ENUM_ELO_RATING_SYSTEM+0x105>
 8562fba:	c9                   	leave
 8562fbb:	c3                   	ret

```

```c
// fair_pvp::CFairMatch::_UpdateRating @ 0x8562e1e

/* fair_pvp::CFairMatch::_UpdateRating(int, ENUM_ELO_RATING_SYSTEM) */

void __thiscall fair_pvp::CFairMatch::_UpdateRating(CFairMatch *this,int param_1,undefined4 param_3)

{
  longdouble lVar1;
  float local_20;
  float local_1c;
  CUser *local_18;
  int local_14;
  int local_10;
  
  local_1c = 0.0;
  local_20 = 0.0;
  local_18 = (CUser *)0x0;
  if (param_1 == 1) {
    lVar1 = (longdouble)TeamInfoThird::GetTeamRating((TeamInfoThird *)(this + 100));
    local_20 = (float)lVar1;
    for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
      if ((this[(local_14 + 1) * 0x10 + 0x18] != (CFairMatch)0x0) &&
         (*(int *)(this + (local_14 + 1) * 0x10 + 0x14) != 0)) {
        local_18 = *(CUser **)(this + (local_14 + 1) * 0x10 + 0x14);
        local_1c = *(float *)(this + (local_14 + 1) * 0x10 + 0x20);
        CEloRating::calc(&local_1c,&local_20,param_3,
                         PvPGlobalEnvironmentVariable::school_match_elo_k_);
        CUser::UpdateRating(local_18,local_1c);
      }
    }
  }
  else {
    lVar1 = (longdouble)TeamInfoThird::GetTeamRating((TeamInfoThird *)(this + 0x1c));
    local_20 = (float)lVar1;
    for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
      if ((this[local_10 * 0x10 + 0x70] != (CFairMatch)0x0) &&
         (*(int *)(this + local_10 * 0x10 + 0x6c) != 0)) {
        local_18 = *(CUser **)(this + local_10 * 0x10 + 0x6c);
        local_1c = *(float *)(this + local_10 * 0x10 + 0x78);
        CEloRating::calc(&local_1c,&local_20,param_3,
                         PvPGlobalEnvironmentVariable::school_match_elo_k_);
        CUser::UpdateRating(local_18,local_1c);
      }
    }
  }
  return;
}

```

---

## ~CFairMatch

```asm
// === 0856292e fair_pvp::CFairMatch::~CFairMatch  [0x0856292e-0x85629c9] ===
 856292e:	55                   	push   %ebp
 856292f:	89 e5                	mov    %esp,%ebp
 8562931:	56                   	push   %esi
 8562932:	53                   	push   %ebx
 8562933:	83 ec 10             	sub    $0x10,%esp
 8562936:	8b 45 08             	mov    0x8(%ebp),%eax
 8562939:	c7 00 e8 3b ca 08    	movl   $0x8ca3be8,(%eax)
 856293f:	a1 4c e1 43 09       	mov    0x943e14c,%eax
 8562944:	83 e8 01             	sub    $0x1,%eax
 8562947:	a3 4c e1 43 09       	mov    %eax,0x943e14c
 856294c:	a1 48 e1 43 09       	mov    0x943e148,%eax
 8562951:	85 c0                	test   %eax,%eax
 8562953:	74 16                	je     856296b <_ZN8fair_pvp10CFairMatchD1Ev+0x3d>
 8562955:	a1 4c e1 43 09       	mov    0x943e14c,%eax
 856295a:	85 c0                	test   %eax,%eax
 856295c:	75 0d                	jne    856296b <_ZN8fair_pvp10CFairMatchD1Ev+0x3d>
 856295e:	a1 48 e1 43 09       	mov    0x943e148,%eax
 8562963:	89 04 24             	mov    %eax,(%esp)
 8562966:	e8 85 1b 1c 00       	call   87244f0 <_ZdlPv>
 856296b:	8b 45 08             	mov    0x8(%ebp),%eax
 856296e:	c7 80 c0 00 00 00 00 	movl   $0x0,0xc0(%eax)
 8562975:	00 00 00 
 8562978:	8b 45 08             	mov    0x8(%ebp),%eax
 856297b:	83 c0 08             	add    $0x8,%eax
 856297e:	89 04 24             	mov    %eax,(%esp)
 8562981:	e8 d6 65 00 00       	call   8568f5c <_ZN13PVP_ROOM_INFOD1Ev>
 8562986:	eb 1b                	jmp    85629a3 <_ZN8fair_pvp10CFairMatchD1Ev+0x75>
 8562988:	89 d3                	mov    %edx,%ebx
 856298a:	89 c6                	mov    %eax,%esi
 856298c:	8b 45 08             	mov    0x8(%ebp),%eax
 856298f:	89 04 24             	mov    %eax,(%esp)
 8562992:	e8 cd 5c 00 00       	call   8568664 <_ZN6IMatchD1Ev>
 8562997:	89 f0                	mov    %esi,%eax
 8562999:	89 da                	mov    %ebx,%edx
 856299b:	89 04 24             	mov    %eax,(%esp)
 856299e:	e8 ad 0d 58 00       	call   8ae3750 <_Unwind_Resume>
 85629a3:	8b 45 08             	mov    0x8(%ebp),%eax
 85629a6:	89 04 24             	mov    %eax,(%esp)
 85629a9:	e8 b6 5c 00 00       	call   8568664 <_ZN6IMatchD1Ev>
 85629ae:	b8 00 00 00 00       	mov    $0x0,%eax
 85629b3:	84 c0                	test   %al,%al
 85629b5:	74 0b                	je     85629c2 <_ZN8fair_pvp10CFairMatchD1Ev+0x94>
 85629b7:	8b 45 08             	mov    0x8(%ebp),%eax
 85629ba:	89 04 24             	mov    %eax,(%esp)
 85629bd:	e8 2e 1b 1c 00       	call   87244f0 <_ZdlPv>
 85629c2:	83 c4 10             	add    $0x10,%esp
 85629c5:	5b                   	pop    %ebx
 85629c6:	5e                   	pop    %esi
 85629c7:	5d                   	pop    %ebp
 85629c8:	c3                   	ret
 85629c9:	90                   	nop

```

```c
// fair_pvp::CFairMatch::~CFairMatch @ 0x856292e

/* WARNING: Removing unreachable block (ram,0x085629b7) */
/* fair_pvp::CFairMatch::~CFairMatch() */

void __thiscall fair_pvp::CFairMatch::~CFairMatch(CFairMatch *this)

{
  *(undefined ***)this = &PTR__CFairMatch_08ca3be8;
  nWaitingRoomListRefCount_ = nWaitingRoomListRefCount_ + -1;
  if ((pWaitingRoomList_ != (void *)0x0) && (nWaitingRoomListRefCount_ == 0)) {
    operator_delete(pWaitingRoomList_);
  }
  *(undefined4 *)(this + 0xc0) = 0;
                    /* try { // try from 08562981 to 08562985 has its CatchHandler @ 08562988 */
  PVP_ROOM_INFO::~PVP_ROOM_INFO((PVP_ROOM_INFO *)(this + 8));
  IMatch::~IMatch((IMatch *)this);
  return;
}

```

---

## ~CFairMatch_085629ca

```asm
// === 085629ca fair_pvp::CFairMatch::~CFairMatch  [0x085629ca-0x85629e7] ===
 85629ca:	55                   	push   %ebp
 85629cb:	89 e5                	mov    %esp,%ebp
 85629cd:	83 ec 18             	sub    $0x18,%esp
 85629d0:	8b 45 08             	mov    0x8(%ebp),%eax
 85629d3:	89 04 24             	mov    %eax,(%esp)
 85629d6:	e8 53 ff ff ff       	call   856292e <_ZN8fair_pvp10CFairMatchD1Ev>
 85629db:	8b 45 08             	mov    0x8(%ebp),%eax
 85629de:	89 04 24             	mov    %eax,(%esp)
 85629e1:	e8 0a 1b 1c 00       	call   87244f0 <_ZdlPv>
 85629e6:	c9                   	leave
 85629e7:	c3                   	ret

```

```c
// fair_pvp::CFairMatch::~CFairMatch @ 0x85629ca

/* fair_pvp::CFairMatch::~CFairMatch() */

void __thiscall fair_pvp::CFairMatch::~CFairMatch(CFairMatch *this)

{
  ~CFairMatch(this);
  operator_delete(this);
  return;
}

```

