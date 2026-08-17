# CLeagueMatch

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 38

---

## CLeagueMatch

```asm
// === 0855cd74 CLeagueMatch::CLeagueMatch  [0x0855cd74-0x855ce4b] ===
 855cd74:	55                   	push   %ebp
 855cd75:	89 e5                	mov    %esp,%ebp
 855cd77:	57                   	push   %edi
 855cd78:	56                   	push   %esi
 855cd79:	53                   	push   %ebx
 855cd7a:	83 ec 1c             	sub    $0x1c,%esp
 855cd7d:	8b 45 08             	mov    0x8(%ebp),%eax
 855cd80:	89 04 24             	mov    %eax,(%esp)
 855cd83:	e8 10 bc 00 00       	call   8568998 <_ZN6IMatchC1Ev>
 855cd88:	8b 45 08             	mov    0x8(%ebp),%eax
 855cd8b:	c7 00 28 3d ca 08    	movl   $0x8ca3d28,(%eax)
 855cd91:	8b 45 08             	mov    0x8(%ebp),%eax
 855cd94:	83 c0 08             	add    $0x8,%eax
 855cd97:	89 04 24             	mov    %eax,(%esp)
 855cd9a:	e8 77 c1 00 00       	call   8568f16 <_ZN13PVP_ROOM_INFOC1Ev>
 855cd9f:	a1 64 e0 43 09       	mov    0x943e064,%eax
 855cda4:	85 c0                	test   %eax,%eax
 855cda6:	75 5c                	jne    855ce04 <_ZN12CLeagueMatchC1Ev+0x90>
 855cda8:	c7 04 24 1c 00 00 00 	movl   $0x1c,(%esp)
 855cdaf:	e8 9c 76 1c 00       	call   8724450 <_Znwj>
 855cdb4:	89 c3                	mov    %eax,%ebx
 855cdb6:	89 d8                	mov    %ebx,%eax
 855cdb8:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 855cdbe:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 855cdc5:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 855cdcc:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
 855cdd3:	c7 40 14 00 00 00 00 	movl   $0x0,0x14(%eax)
 855cdda:	c7 40 18 00 00 00 00 	movl   $0x0,0x18(%eax)
 855cde1:	89 04 24             	mov    %eax,(%esp)
 855cde4:	e8 c7 c1 00 00       	call   8568fb0 <_ZN20CLeagueMatchRoomListC1Ev>
 855cde9:	eb 12                	jmp    855cdfd <_ZN12CLeagueMatchC1Ev+0x89>
 855cdeb:	89 d6                	mov    %edx,%esi
 855cded:	89 c7                	mov    %eax,%edi
 855cdef:	89 1c 24             	mov    %ebx,(%esp)
 855cdf2:	e8 f9 76 1c 00       	call   87244f0 <_ZdlPv>
 855cdf7:	89 f8                	mov    %edi,%eax
 855cdf9:	89 f2                	mov    %esi,%edx
 855cdfb:	eb 1c                	jmp    855ce19 <_ZN12CLeagueMatchC1Ev+0xa5>
 855cdfd:	89 d8                	mov    %ebx,%eax
 855cdff:	a3 64 e0 43 09       	mov    %eax,0x943e064
 855ce04:	a1 68 e0 43 09       	mov    0x943e068,%eax
 855ce09:	83 c0 01             	add    $0x1,%eax
 855ce0c:	a3 68 e0 43 09       	mov    %eax,0x943e068
 855ce11:	83 c4 1c             	add    $0x1c,%esp
 855ce14:	5b                   	pop    %ebx
 855ce15:	5e                   	pop    %esi
 855ce16:	5f                   	pop    %edi
 855ce17:	5d                   	pop    %ebp
 855ce18:	c3                   	ret
 855ce19:	89 d3                	mov    %edx,%ebx
 855ce1b:	89 c6                	mov    %eax,%esi
 855ce1d:	8b 45 08             	mov    0x8(%ebp),%eax
 855ce20:	83 c0 08             	add    $0x8,%eax
 855ce23:	89 04 24             	mov    %eax,(%esp)
 855ce26:	e8 31 c1 00 00       	call   8568f5c <_ZN13PVP_ROOM_INFOD1Ev>
 855ce2b:	89 f0                	mov    %esi,%eax
 855ce2d:	89 da                	mov    %ebx,%edx
 855ce2f:	eb 00                	jmp    855ce31 <_ZN12CLeagueMatchC1Ev+0xbd>
 855ce31:	89 d3                	mov    %edx,%ebx
 855ce33:	89 c6                	mov    %eax,%esi
 855ce35:	8b 45 08             	mov    0x8(%ebp),%eax
 855ce38:	89 04 24             	mov    %eax,(%esp)
 855ce3b:	e8 24 b8 00 00       	call   8568664 <_ZN6IMatchD1Ev>
 855ce40:	89 f0                	mov    %esi,%eax
 855ce42:	89 da                	mov    %ebx,%edx
 855ce44:	89 04 24             	mov    %eax,(%esp)
 855ce47:	e8 04 69 58 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// CLeagueMatch::CLeagueMatch @ 0x855cd74

/* CLeagueMatch::CLeagueMatch() */

void __thiscall CLeagueMatch::CLeagueMatch(CLeagueMatch *this)

{
  CLeagueMatchRoomList *this_00;
  
  IMatch::IMatch((IMatch *)this);
  *(undefined ***)this = &PTR__CLeagueMatch_08ca3d28;
                    /* try { // try from 0855cd9a to 0855cd9e has its CatchHandler @ 0855ce31 */
  PVP_ROOM_INFO::PVP_ROOM_INFO((PVP_ROOM_INFO *)(this + 8));
  if (pWaitingRoomList_ == (CLeagueMatchRoomList *)0x0) {
                    /* try { // try from 0855cdaf to 0855cdb3 has its CatchHandler @ 0855ce19 */
    this_00 = operator_new(0x1c);
    *(undefined4 *)this_00 = 0;
    *(undefined4 *)(this_00 + 8) = 0;
    *(undefined4 *)(this_00 + 0xc) = 0;
    *(undefined4 *)(this_00 + 0x10) = 0;
    *(undefined4 *)(this_00 + 0x14) = 0;
    *(undefined4 *)(this_00 + 0x18) = 0;
                    /* try { // try from 0855cde4 to 0855cde8 has its CatchHandler @ 0855cdeb */
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
// === 0855cf8c CLeagueMatch::CheckJoinable  [0x0855cf8c-0x855d057] ===
 855cf8c:	55                   	push   %ebp
 855cf8d:	89 e5                	mov    %esp,%ebp
 855cf8f:	53                   	push   %ebx
 855cf90:	83 ec 14             	sub    $0x14,%esp
 855cf93:	8b 45 0c             	mov    0xc(%ebp),%eax
 855cf96:	89 04 24             	mov    %eax,(%esp)
 855cf99:	e8 02 99 07 00       	call   85d68a0 <_ZN8PvP_Room16get_player_countEv>
 855cf9e:	0f b6 15 74 bb 3a 09 	movzbl 0x93abb74,%edx
 855cfa5:	0f b6 d2             	movzbl %dl,%edx
 855cfa8:	01 d2                	add    %edx,%edx
 855cfaa:	39 d0                	cmp    %edx,%eax
 855cfac:	0f 9d c0             	setge  %al
 855cfaf:	84 c0                	test   %al,%al
 855cfb1:	74 0a                	je     855cfbd <_ZN12CLeagueMatch13CheckJoinableEP8PvP_RoomP5CUser+0x31>
 855cfb3:	b8 04 00 00 00       	mov    $0x4,%eax
 855cfb8:	e9 94 00 00 00       	jmp    855d051 <_ZN12CLeagueMatch13CheckJoinableEP8PvP_RoomP5CUser+0xc5>
 855cfbd:	8b 45 08             	mov    0x8(%ebp),%eax
 855cfc0:	83 c0 1c             	add    $0x1c,%eax
 855cfc3:	89 04 24             	mov    %eax,(%esp)
 855cfc6:	e8 5b fd ff ff       	call   855cd26 <_ZNK8TeamInfo4sizeEv>
 855cfcb:	89 c3                	mov    %eax,%ebx
 855cfcd:	8b 45 08             	mov    0x8(%ebp),%eax
 855cfd0:	05 8c 00 00 00       	add    $0x8c,%eax
 855cfd5:	89 04 24             	mov    %eax,(%esp)
 855cfd8:	e8 49 fd ff ff       	call   855cd26 <_ZNK8TeamInfo4sizeEv>
 855cfdd:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 855cfe0:	0f b6 05 74 bb 3a 09 	movzbl 0x93abb74,%eax
 855cfe7:	0f b6 c0             	movzbl %al,%eax
 855cfea:	01 c0                	add    %eax,%eax
 855cfec:	39 c2                	cmp    %eax,%edx
 855cfee:	0f 9f c0             	setg   %al
 855cff1:	84 c0                	test   %al,%al
 855cff3:	74 07                	je     855cffc <_ZN12CLeagueMatch13CheckJoinableEP8PvP_RoomP5CUser+0x70>
 855cff5:	b8 04 00 00 00       	mov    $0x4,%eax
 855cffa:	eb 55                	jmp    855d051 <_ZN12CLeagueMatch13CheckJoinableEP8PvP_RoomP5CUser+0xc5>
 855cffc:	8b 45 08             	mov    0x8(%ebp),%eax
 855cfff:	8b 40 04             	mov    0x4(%eax),%eax
 855d002:	83 f8 05             	cmp    $0x5,%eax
 855d005:	77 45                	ja     855d04c <_ZN12CLeagueMatch13CheckJoinableEP8PvP_RoomP5CUser+0xc0>
 855d007:	8b 04 85 24 22 ca 08 	mov    0x8ca2224(,%eax,4),%eax
 855d00e:	ff e0                	jmp    *%eax
 855d010:	8b 45 10             	mov    0x10(%ebp),%eax
 855d013:	89 44 24 08          	mov    %eax,0x8(%esp)
 855d017:	8b 45 0c             	mov    0xc(%ebp),%eax
 855d01a:	89 44 24 04          	mov    %eax,0x4(%esp)
 855d01e:	8b 45 08             	mov    0x8(%ebp),%eax
 855d021:	89 04 24             	mov    %eax,(%esp)
 855d024:	e8 cf fe ff ff       	call   855cef8 <_ZN12CLeagueMatch12_CheckSchoolEP8PvP_RoomP5CUser>
 855d029:	83 f0 01             	xor    $0x1,%eax
 855d02c:	84 c0                	test   %al,%al
 855d02e:	74 07                	je     855d037 <_ZN12CLeagueMatch13CheckJoinableEP8PvP_RoomP5CUser+0xab>
 855d030:	b8 04 00 00 00       	mov    $0x4,%eax
 855d035:	eb 1a                	jmp    855d051 <_ZN12CLeagueMatch13CheckJoinableEP8PvP_RoomP5CUser+0xc5>
 855d037:	b8 00 00 00 00       	mov    $0x0,%eax
 855d03c:	eb 13                	jmp    855d051 <_ZN12CLeagueMatch13CheckJoinableEP8PvP_RoomP5CUser+0xc5>
 855d03e:	b8 00 00 00 00       	mov    $0x0,%eax
 855d043:	eb 0c                	jmp    855d051 <_ZN12CLeagueMatch13CheckJoinableEP8PvP_RoomP5CUser+0xc5>
 855d045:	b8 04 00 00 00       	mov    $0x4,%eax
 855d04a:	eb 05                	jmp    855d051 <_ZN12CLeagueMatch13CheckJoinableEP8PvP_RoomP5CUser+0xc5>
 855d04c:	b8 04 00 00 00       	mov    $0x4,%eax
 855d051:	83 c4 14             	add    $0x14,%esp
 855d054:	5b                   	pop    %ebx
 855d055:	5d                   	pop    %ebp
 855d056:	c3                   	ret
 855d057:	90                   	nop

```

```c
// CLeagueMatch::CheckJoinable @ 0x855cf8c

/* CLeagueMatch::CheckJoinable(PvP_Room*, CUser*) */

undefined4 __thiscall
CLeagueMatch::CheckJoinable(CLeagueMatch *this,PvP_Room *param_1,CUser *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar2 = PvP_Room::get_player_count(param_1);
  if (iVar2 < (int)((uint)nPlayerCountPerOneTeam_ * 2)) {
    iVar2 = TeamInfo::size((TeamInfo *)(this + 0x1c));
    iVar4 = TeamInfo::size((TeamInfo *)(this + 0x8c));
    if ((int)((uint)nPlayerCountPerOneTeam_ * 2) < iVar2 + iVar4) {
      uVar3 = 4;
    }
    else {
      switch(*(undefined4 *)(this + 4)) {
      case 0:
        cVar1 = _CheckSchool(this,param_1,param_2);
        if (cVar1 == '\x01') {
          uVar3 = 0;
        }
        else {
          uVar3 = 4;
        }
        break;
      case 1:
      case 4:
      case 5:
        uVar3 = 4;
        break;
      default:
        uVar3 = 4;
        break;
      case 3:
        uVar3 = 0;
      }
    }
  }
  else {
    uVar3 = 4;
  }
  return uVar3;
}

```

---

## CheckMatchable

```asm
// === 0855fa14 CLeagueMatch::CheckMatchable  [0x0855fa14-0x855fcf5] ===
 855fa14:	55                   	push   %ebp
 855fa15:	89 e5                	mov    %esp,%ebp
 855fa17:	53                   	push   %ebx
 855fa18:	83 ec 34             	sub    $0x34,%esp
 855fa1b:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 855fa22:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 855fa29:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 855fa30:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 855fa37:	e9 ad 00 00 00       	jmp    855fae9 <_ZN12CLeagueMatch14CheckMatchableEP6IMatch+0xd5>
 855fa3c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 855fa3f:	8b 4d 08             	mov    0x8(%ebp),%ecx
 855fa42:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
 855fa49:	8d 04 d5 00 00 00 00 	lea    0x0(,%edx,8),%eax
 855fa50:	29 d0                	sub    %edx,%eax
 855fa52:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 855fa55:	83 c0 10             	add    $0x10,%eax
 855fa58:	0f b6 40 18          	movzbl 0x18(%eax),%eax
 855fa5c:	84 c0                	test   %al,%al
 855fa5e:	0f 84 81 00 00 00    	je     855fae5 <_ZN12CLeagueMatch14CheckMatchableEP6IMatch+0xd1>
 855fa64:	8b 45 ec             	mov    -0x14(%ebp),%eax
 855fa67:	8b 4d 08             	mov    0x8(%ebp),%ecx
 855fa6a:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
 855fa71:	8d 04 d5 00 00 00 00 	lea    0x0(,%edx,8),%eax
 855fa78:	29 d0                	sub    %edx,%eax
 855fa7a:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 855fa7d:	83 c0 24             	add    $0x24,%eax
 855fa80:	8b 00                	mov    (%eax),%eax
 855fa82:	85 c0                	test   %eax,%eax
 855fa84:	74 5f                	je     855fae5 <_ZN12CLeagueMatch14CheckMatchableEP6IMatch+0xd1>
 855fa86:	8b 45 ec             	mov    -0x14(%ebp),%eax
 855fa89:	8b 4d 08             	mov    0x8(%ebp),%ecx
 855fa8c:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
 855fa93:	8d 04 d5 00 00 00 00 	lea    0x0(,%edx,8),%eax
 855fa9a:	29 d0                	sub    %edx,%eax
 855fa9c:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 855fa9f:	83 c0 24             	add    $0x24,%eax
 855faa2:	8b 00                	mov    (%eax),%eax
 855faa4:	89 04 24             	mov    %eax,(%esp)
 855faa7:	e8 dc d9 fa ff       	call   850d488 <_ZNK15CUserCharacInfo13getPVPResultREv>
 855faac:	8b 40 14             	mov    0x14(%eax),%eax
 855faaf:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 855fab2:	7c 2b                	jl     855fadf <_ZN12CLeagueMatch14CheckMatchableEP6IMatch+0xcb>
 855fab4:	8b 45 ec             	mov    -0x14(%ebp),%eax
 855fab7:	8b 4d 08             	mov    0x8(%ebp),%ecx
 855faba:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
 855fac1:	8d 04 d5 00 00 00 00 	lea    0x0(,%edx,8),%eax
 855fac8:	29 d0                	sub    %edx,%eax
 855faca:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 855facd:	83 c0 24             	add    $0x24,%eax
 855fad0:	8b 00                	mov    (%eax),%eax
 855fad2:	89 04 24             	mov    %eax,(%esp)
 855fad5:	e8 ae d9 fa ff       	call   850d488 <_ZNK15CUserCharacInfo13getPVPResultREv>
 855fada:	8b 40 14             	mov    0x14(%eax),%eax
 855fadd:	eb 03                	jmp    855fae2 <_ZN12CLeagueMatch14CheckMatchableEP6IMatch+0xce>
 855fadf:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 855fae2:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 855fae5:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 855fae9:	83 7d ec 03          	cmpl   $0x3,-0x14(%ebp)
 855faed:	0f 9e c0             	setle  %al
 855faf0:	84 c0                	test   %al,%al
 855faf2:	0f 85 44 ff ff ff    	jne    855fa3c <_ZN12CLeagueMatch14CheckMatchableEP6IMatch+0x28>
 855faf8:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 855faff:	e9 ad 00 00 00       	jmp    855fbb1 <_ZN12CLeagueMatch14CheckMatchableEP6IMatch+0x19d>
 855fb04:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 855fb07:	8b 45 ec             	mov    -0x14(%ebp),%eax
 855fb0a:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
 855fb11:	8d 04 d5 00 00 00 00 	lea    0x0(,%edx,8),%eax
 855fb18:	29 d0                	sub    %edx,%eax
 855fb1a:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 855fb1d:	83 c0 10             	add    $0x10,%eax
 855fb20:	0f b6 40 18          	movzbl 0x18(%eax),%eax
 855fb24:	84 c0                	test   %al,%al
 855fb26:	0f 84 81 00 00 00    	je     855fbad <_ZN12CLeagueMatch14CheckMatchableEP6IMatch+0x199>
 855fb2c:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 855fb2f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 855fb32:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
 855fb39:	8d 04 d5 00 00 00 00 	lea    0x0(,%edx,8),%eax
 855fb40:	29 d0                	sub    %edx,%eax
 855fb42:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 855fb45:	83 c0 24             	add    $0x24,%eax
 855fb48:	8b 00                	mov    (%eax),%eax
 855fb4a:	85 c0                	test   %eax,%eax
 855fb4c:	74 5f                	je     855fbad <_ZN12CLeagueMatch14CheckMatchableEP6IMatch+0x199>
 855fb4e:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 855fb51:	8b 45 ec             	mov    -0x14(%ebp),%eax
 855fb54:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
 855fb5b:	8d 04 d5 00 00 00 00 	lea    0x0(,%edx,8),%eax
 855fb62:	29 d0                	sub    %edx,%eax
 855fb64:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 855fb67:	83 c0 24             	add    $0x24,%eax
 855fb6a:	8b 00                	mov    (%eax),%eax
 855fb6c:	89 04 24             	mov    %eax,(%esp)
 855fb6f:	e8 14 d9 fa ff       	call   850d488 <_ZNK15CUserCharacInfo13getPVPResultREv>
 855fb74:	8b 40 14             	mov    0x14(%eax),%eax
 855fb77:	3b 45 e8             	cmp    -0x18(%ebp),%eax
 855fb7a:	7c 2b                	jl     855fba7 <_ZN12CLeagueMatch14CheckMatchableEP6IMatch+0x193>
 855fb7c:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 855fb7f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 855fb82:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
 855fb89:	8d 04 d5 00 00 00 00 	lea    0x0(,%edx,8),%eax
 855fb90:	29 d0                	sub    %edx,%eax
 855fb92:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 855fb95:	83 c0 24             	add    $0x24,%eax
 855fb98:	8b 00                	mov    (%eax),%eax
 855fb9a:	89 04 24             	mov    %eax,(%esp)
 855fb9d:	e8 e6 d8 fa ff       	call   850d488 <_ZNK15CUserCharacInfo13getPVPResultREv>
 855fba2:	8b 40 14             	mov    0x14(%eax),%eax
 855fba5:	eb 03                	jmp    855fbaa <_ZN12CLeagueMatch14CheckMatchableEP6IMatch+0x196>
 855fba7:	8b 45 e8             	mov    -0x18(%ebp),%eax
 855fbaa:	89 45 e8             	mov    %eax,-0x18(%ebp)
 855fbad:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 855fbb1:	83 7d ec 03          	cmpl   $0x3,-0x14(%ebp)
 855fbb5:	0f 9e c0             	setle  %al
 855fbb8:	84 c0                	test   %al,%al
 855fbba:	0f 85 44 ff ff ff    	jne    855fb04 <_ZN12CLeagueMatch14CheckMatchableEP6IMatch+0xf0>
 855fbc0:	83 7d e4 0b          	cmpl   $0xb,-0x1c(%ebp)
 855fbc4:	7e 16                	jle    855fbdc <_ZN12CLeagueMatch14CheckMatchableEP6IMatch+0x1c8>
 855fbc6:	83 7d e4 0e          	cmpl   $0xe,-0x1c(%ebp)
 855fbca:	7f 10                	jg     855fbdc <_ZN12CLeagueMatch14CheckMatchableEP6IMatch+0x1c8>
 855fbcc:	83 7d e8 0a          	cmpl   $0xa,-0x18(%ebp)
 855fbd0:	7f 0a                	jg     855fbdc <_ZN12CLeagueMatch14CheckMatchableEP6IMatch+0x1c8>
 855fbd2:	b8 00 00 00 00       	mov    $0x0,%eax
 855fbd7:	e9 13 01 00 00       	jmp    855fcef <_ZN12CLeagueMatch14CheckMatchableEP6IMatch+0x2db>
 855fbdc:	83 7d e8 0b          	cmpl   $0xb,-0x18(%ebp)
 855fbe0:	7e 16                	jle    855fbf8 <_ZN12CLeagueMatch14CheckMatchableEP6IMatch+0x1e4>
 855fbe2:	83 7d e8 0e          	cmpl   $0xe,-0x18(%ebp)
 855fbe6:	7f 10                	jg     855fbf8 <_ZN12CLeagueMatch14CheckMatchableEP6IMatch+0x1e4>
 855fbe8:	83 7d e4 0a          	cmpl   $0xa,-0x1c(%ebp)
 855fbec:	7f 0a                	jg     855fbf8 <_ZN12CLeagueMatch14CheckMatchableEP6IMatch+0x1e4>
 855fbee:	b8 00 00 00 00       	mov    $0x0,%eax
 855fbf3:	e9 f7 00 00 00       	jmp    855fcef <_ZN12CLeagueMatch14CheckMatchableEP6IMatch+0x2db>
 855fbf8:	8b 45 e8             	mov    -0x18(%ebp),%eax
 855fbfb:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 855fbfe:	29 c2                	sub    %eax,%edx
 855fc00:	89 d0                	mov    %edx,%eax
 855fc02:	c1 f8 1f             	sar    $0x1f,%eax
 855fc05:	31 c2                	xor    %eax,%edx
 855fc07:	89 55 f0             	mov    %edx,-0x10(%ebp)
 855fc0a:	29 45 f0             	sub    %eax,-0x10(%ebp)
 855fc0d:	83 7d f0 04          	cmpl   $0x4,-0x10(%ebp)
 855fc11:	7e 0a                	jle    855fc1d <_ZN12CLeagueMatch14CheckMatchableEP6IMatch+0x209>
 855fc13:	b8 00 00 00 00       	mov    $0x0,%eax
 855fc18:	e9 d2 00 00 00       	jmp    855fcef <_ZN12CLeagueMatch14CheckMatchableEP6IMatch+0x2db>
 855fc1d:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 855fc24:	e9 b2 00 00 00       	jmp    855fcdb <_ZN12CLeagueMatch14CheckMatchableEP6IMatch+0x2c7>
 855fc29:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 855fc30:	e9 93 00 00 00       	jmp    855fcc8 <_ZN12CLeagueMatch14CheckMatchableEP6IMatch+0x2b4>
 855fc35:	8b 45 ec             	mov    -0x14(%ebp),%eax
 855fc38:	8b 4d 08             	mov    0x8(%ebp),%ecx
 855fc3b:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
 855fc42:	8d 04 d5 00 00 00 00 	lea    0x0(,%edx,8),%eax
 855fc49:	29 d0                	sub    %edx,%eax
 855fc4b:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 855fc4e:	83 c0 10             	add    $0x10,%eax
 855fc51:	0f b6 40 18          	movzbl 0x18(%eax),%eax
 855fc55:	84 c0                	test   %al,%al
 855fc57:	74 6b                	je     855fcc4 <_ZN12CLeagueMatch14CheckMatchableEP6IMatch+0x2b0>
 855fc59:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 855fc5c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 855fc5f:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
 855fc66:	8d 04 d5 00 00 00 00 	lea    0x0(,%edx,8),%eax
 855fc6d:	29 d0                	sub    %edx,%eax
 855fc6f:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 855fc72:	83 c0 10             	add    $0x10,%eax
 855fc75:	0f b6 40 18          	movzbl 0x18(%eax),%eax
 855fc79:	84 c0                	test   %al,%al
 855fc7b:	74 47                	je     855fcc4 <_ZN12CLeagueMatch14CheckMatchableEP6IMatch+0x2b0>
 855fc7d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 855fc80:	8b 4d 08             	mov    0x8(%ebp),%ecx
 855fc83:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
 855fc8a:	8d 04 d5 00 00 00 00 	lea    0x0(,%edx,8),%eax
 855fc91:	29 d0                	sub    %edx,%eax
 855fc93:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 855fc96:	83 c0 2c             	add    $0x2c,%eax
 855fc99:	8b 08                	mov    (%eax),%ecx
 855fc9b:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 855fc9e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 855fca1:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
 855fca8:	8d 04 d5 00 00 00 00 	lea    0x0(,%edx,8),%eax
 855fcaf:	29 d0                	sub    %edx,%eax
 855fcb1:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 855fcb4:	83 c0 2c             	add    $0x2c,%eax
 855fcb7:	8b 00                	mov    (%eax),%eax
 855fcb9:	39 c1                	cmp    %eax,%ecx
 855fcbb:	75 07                	jne    855fcc4 <_ZN12CLeagueMatch14CheckMatchableEP6IMatch+0x2b0>
 855fcbd:	b8 00 00 00 00       	mov    $0x0,%eax
 855fcc2:	eb 2b                	jmp    855fcef <_ZN12CLeagueMatch14CheckMatchableEP6IMatch+0x2db>
 855fcc4:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 855fcc8:	83 7d f4 03          	cmpl   $0x3,-0xc(%ebp)
 855fccc:	0f 9e c0             	setle  %al
 855fccf:	84 c0                	test   %al,%al
 855fcd1:	0f 85 5e ff ff ff    	jne    855fc35 <_ZN12CLeagueMatch14CheckMatchableEP6IMatch+0x221>
 855fcd7:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 855fcdb:	83 7d ec 03          	cmpl   $0x3,-0x14(%ebp)
 855fcdf:	0f 9e c0             	setle  %al
 855fce2:	84 c0                	test   %al,%al
 855fce4:	0f 85 3f ff ff ff    	jne    855fc29 <_ZN12CLeagueMatch14CheckMatchableEP6IMatch+0x215>
 855fcea:	b8 01 00 00 00       	mov    $0x1,%eax
 855fcef:	83 c4 34             	add    $0x34,%esp
 855fcf2:	5b                   	pop    %ebx
 855fcf3:	5d                   	pop    %ebp
 855fcf4:	c3                   	ret
 855fcf5:	90                   	nop

```

```c
// CLeagueMatch::CheckMatchable @ 0x855fa14

/* CLeagueMatch::CheckMatchable(IMatch*) */

undefined4 __thiscall CLeagueMatch::CheckMatchable(CLeagueMatch *this,IMatch *param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int local_20;
  int local_1c;
  int local_18;
  int local_10;
  
  local_20 = 0;
  local_1c = 0;
  for (local_18 = 0; local_18 < 4; local_18 = local_18 + 1) {
    if (((this[local_18 * 0x1c + 0x28] != (CLeagueMatch)0x0) &&
        (*(int *)(this + local_18 * 0x1c + 0x24) != 0)) &&
       (iVar1 = CUserCharacInfo::getPVPResultR(*(CUserCharacInfo **)(this + local_18 * 0x1c + 0x24))
       , local_20 <= *(int *)(iVar1 + 0x14))) {
      iVar1 = CUserCharacInfo::getPVPResultR(*(CUserCharacInfo **)(this + local_18 * 0x1c + 0x24));
      local_20 = *(int *)(iVar1 + 0x14);
    }
  }
  for (local_18 = 0; local_18 < 4; local_18 = local_18 + 1) {
    if (((param_1[local_18 * 0x1c + 0x28] != (IMatch)0x0) &&
        (*(int *)(param_1 + local_18 * 0x1c + 0x24) != 0)) &&
       (iVar1 = CUserCharacInfo::getPVPResultR
                          (*(CUserCharacInfo **)(param_1 + local_18 * 0x1c + 0x24)),
       local_1c <= *(int *)(iVar1 + 0x14))) {
      iVar1 = CUserCharacInfo::getPVPResultR
                        (*(CUserCharacInfo **)(param_1 + local_18 * 0x1c + 0x24));
      local_1c = *(int *)(iVar1 + 0x14);
    }
  }
  if (((local_20 < 0xc) || (0xe < local_20)) || (10 < local_1c)) {
    if (((local_1c < 0xc) || (0xe < local_1c)) || (10 < local_20)) {
      uVar3 = local_20 - local_1c >> 0x1f;
      if ((int)((local_20 - local_1c ^ uVar3) - uVar3) < 5) {
        for (local_18 = 0; local_18 < 4; local_18 = local_18 + 1) {
          for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
            if (((this[local_18 * 0x1c + 0x28] != (CLeagueMatch)0x0) &&
                (param_1[local_10 * 0x1c + 0x28] != (IMatch)0x0)) &&
               (*(int *)(this + local_18 * 0x1c + 0x2c) ==
                *(int *)(param_1 + local_10 * 0x1c + 0x2c))) {
              return 0;
            }
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
// === 0855d058 CLeagueMatch::CheckSeat  [0x0855d058-0x855d06f] ===
 855d058:	55                   	push   %ebp
 855d059:	89 e5                	mov    %esp,%ebp
 855d05b:	83 7d 0c 02          	cmpl   $0x2,0xc(%ebp)
 855d05f:	75 07                	jne    855d068 <_ZN12CLeagueMatch9CheckSeatEi+0x10>
 855d061:	b8 00 00 00 00       	mov    $0x0,%eax
 855d066:	eb 05                	jmp    855d06d <_ZN12CLeagueMatch9CheckSeatEi+0x15>
 855d068:	b8 01 00 00 00       	mov    $0x1,%eax
 855d06d:	5d                   	pop    %ebp
 855d06e:	c3                   	ret
 855d06f:	90                   	nop

```

```c
// CLeagueMatch::CheckSeat @ 0x855d058

/* CLeagueMatch::CheckSeat(int) */

bool __thiscall CLeagueMatch::CheckSeat(CLeagueMatch *this,int param_1)

{
  return param_1 != 2;
}

```

---

## GetExtraWinPoint

```asm
// === 0855d0bc CLeagueMatch::GetExtraWinPoint  [0x0855d0bc-0x855d103] ===
 855d0bc:	55                   	push   %ebp
 855d0bd:	89 e5                	mov    %esp,%ebp
 855d0bf:	83 ec 18             	sub    $0x18,%esp
 855d0c2:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 855d0c9:	e8 d0 eb b6 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 855d0ce:	3d f0 b4 11 49       	cmp    $0x4911b4f0,%eax
 855d0d3:	7e 1a                	jle    855d0ef <_ZN12CLeagueMatch16GetExtraWinPointEi+0x33>
 855d0d5:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 855d0dc:	e8 bd eb b6 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 855d0e1:	3d ef 29 24 49       	cmp    $0x492429ef,%eax
 855d0e6:	7f 07                	jg     855d0ef <_ZN12CLeagueMatch16GetExtraWinPointEi+0x33>
 855d0e8:	b8 01 00 00 00       	mov    $0x1,%eax
 855d0ed:	eb 05                	jmp    855d0f4 <_ZN12CLeagueMatch16GetExtraWinPointEi+0x38>
 855d0ef:	b8 00 00 00 00       	mov    $0x0,%eax
 855d0f4:	84 c0                	test   %al,%al
 855d0f6:	74 05                	je     855d0fd <_ZN12CLeagueMatch16GetExtraWinPointEi+0x41>
 855d0f8:	8b 45 0c             	mov    0xc(%ebp),%eax
 855d0fb:	eb 05                	jmp    855d102 <_ZN12CLeagueMatch16GetExtraWinPointEi+0x46>
 855d0fd:	b8 00 00 00 00       	mov    $0x0,%eax
 855d102:	c9                   	leave
 855d103:	c3                   	ret

```

```c
// CLeagueMatch::GetExtraWinPoint @ 0x855d0bc

/* CLeagueMatch::GetExtraWinPoint(int) */

int __thiscall CLeagueMatch::GetExtraWinPoint(CLeagueMatch *this,int param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  if ((iVar2 < 0x4911b4f1) ||
     (iVar2 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_), 0x492429ef < iVar2))
  {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    param_1 = 0;
  }
  return param_1;
}

```

---

## GetGap

```asm
// === 0855e12a CLeagueMatch::GetGap  [0x0855e12a-0x855e21b] ===
 855e12a:	55                   	push   %ebp
 855e12b:	89 e5                	mov    %esp,%ebp
 855e12d:	83 ec 48             	sub    $0x48,%esp
 855e130:	b8 00 00 00 00       	mov    $0x0,%eax
 855e135:	89 45 e0             	mov    %eax,-0x20(%ebp)
 855e138:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 855e13f:	e9 b5 00 00 00       	jmp    855e1f9 <_ZN12CLeagueMatch6GetGapEP6IMatch+0xcf>
 855e144:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 855e147:	8b 4d 08             	mov    0x8(%ebp),%ecx
 855e14a:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
 855e151:	8d 04 d5 00 00 00 00 	lea    0x0(,%edx,8),%eax
 855e158:	29 d0                	sub    %edx,%eax
 855e15a:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 855e15d:	83 c0 24             	add    $0x24,%eax
 855e160:	8b 00                	mov    (%eax),%eax
 855e162:	89 45 e8             	mov    %eax,-0x18(%ebp)
 855e165:	8b 45 0c             	mov    0xc(%ebp),%eax
 855e168:	8b 00                	mov    (%eax),%eax
 855e16a:	83 c0 10             	add    $0x10,%eax
 855e16d:	8b 10                	mov    (%eax),%edx
 855e16f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 855e172:	89 44 24 04          	mov    %eax,0x4(%esp)
 855e176:	8b 45 0c             	mov    0xc(%ebp),%eax
 855e179:	89 04 24             	mov    %eax,(%esp)
 855e17c:	ff d2                	call   *%edx
 855e17e:	89 45 ec             	mov    %eax,-0x14(%ebp)
 855e181:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 855e184:	8b 4d 08             	mov    0x8(%ebp),%ecx
 855e187:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
 855e18e:	8d 04 d5 00 00 00 00 	lea    0x0(,%edx,8),%eax
 855e195:	29 d0                	sub    %edx,%eax
 855e197:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 855e19a:	83 c0 10             	add    $0x10,%eax
 855e19d:	0f b6 40 18          	movzbl 0x18(%eax),%eax
 855e1a1:	84 c0                	test   %al,%al
 855e1a3:	74 50                	je     855e1f5 <_ZN12CLeagueMatch6GetGapEP6IMatch+0xcb>
 855e1a5:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 855e1a9:	74 4a                	je     855e1f5 <_ZN12CLeagueMatch6GetGapEP6IMatch+0xcb>
 855e1ab:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 855e1af:	74 44                	je     855e1f5 <_ZN12CLeagueMatch6GetGapEP6IMatch+0xcb>
 855e1b1:	8b 45 e8             	mov    -0x18(%ebp),%eax
 855e1b4:	89 04 24             	mov    %eax,(%esp)
 855e1b7:	e8 c8 ac 00 00       	call   8568e84 <_ZN5CUser9GetRatingEv>
 855e1bc:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 855e1bf:	d9 04 85 40 2a ca 08 	flds   0x8ca2a40(,%eax,4)
 855e1c6:	de c9                	fmulp  %st,%st(1)
 855e1c8:	d9 5d f0             	fstps  -0x10(%ebp)
 855e1cb:	8b 45 ec             	mov    -0x14(%ebp),%eax
 855e1ce:	89 04 24             	mov    %eax,(%esp)
 855e1d1:	e8 ae ac 00 00       	call   8568e84 <_ZN5CUser9GetRatingEv>
 855e1d6:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 855e1d9:	d9 04 85 40 2a ca 08 	flds   0x8ca2a40(,%eax,4)
 855e1e0:	de c9                	fmulp  %st,%st(1)
 855e1e2:	d9 5d f4             	fstps  -0xc(%ebp)
 855e1e5:	d9 45 f0             	flds   -0x10(%ebp)
 855e1e8:	d8 65 f4             	fsubs  -0xc(%ebp)
 855e1eb:	d9 e1                	fabs
 855e1ed:	d9 45 e0             	flds   -0x20(%ebp)
 855e1f0:	de c1                	faddp  %st,%st(1)
 855e1f2:	d9 5d e0             	fstps  -0x20(%ebp)
 855e1f5:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 855e1f9:	0f b6 05 74 bb 3a 09 	movzbl 0x93abb74,%eax
 855e200:	0f b6 c0             	movzbl %al,%eax
 855e203:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 855e206:	0f 97 c0             	seta   %al
 855e209:	84 c0                	test   %al,%al
 855e20b:	0f 85 33 ff ff ff    	jne    855e144 <_ZN12CLeagueMatch6GetGapEP6IMatch+0x1a>
 855e211:	8b 45 e0             	mov    -0x20(%ebp),%eax
 855e214:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 855e217:	d9 45 d4             	flds   -0x2c(%ebp)
 855e21a:	c9                   	leave
 855e21b:	c3                   	ret

```

```c
// CLeagueMatch::GetGap @ 0x855e12a

/* CLeagueMatch::GetGap(IMatch*) */

longdouble __thiscall CLeagueMatch::GetGap(CLeagueMatch *this,IMatch *param_1)

{
  float fVar1;
  CUser *this_00;
  CUser *this_01;
  longdouble lVar2;
  longdouble lVar3;
  float local_24;
  uint local_20;
  
  local_24 = 0.0;
  for (local_20 = 0; local_20 < nPlayerCountPerOneTeam_; local_20 = local_20 + 1) {
    this_00 = *(CUser **)(this + local_20 * 0x1c + 0x24);
    this_01 = (CUser *)(**(code **)(*(int *)param_1 + 0x10))(param_1,local_20);
    if (((this[local_20 * 0x1c + 0x28] != (CLeagueMatch)0x0) && (this_00 != (CUser *)0x0)) &&
       (this_01 != (CUser *)0x0)) {
      lVar2 = (longdouble)CUser::GetRating(this_00);
      fVar1 = *(float *)(g_RankingIncr + local_20 * 4);
      lVar3 = (longdouble)CUser::GetRating(this_01);
      local_24 = local_24 +
                 ABS((float)((longdouble)fVar1 * lVar2) -
                     (float)((longdouble)*(float *)(g_RankingIncr + local_20 * 4) * lVar3));
    }
  }
  return (longdouble)local_24;
}

```

---

## GetSchoolNo

```asm
// === 0855f9aa CLeagueMatch::GetSchoolNo  [0x0855f9aa-0x855fa13] ===
 855f9aa:	55                   	push   %ebp
 855f9ab:	89 e5                	mov    %esp,%ebp
 855f9ad:	83 ec 10             	sub    $0x10,%esp
 855f9b0:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 855f9b7:	eb 48                	jmp    855fa01 <_ZN12CLeagueMatch11GetSchoolNoEv+0x57>
 855f9b9:	8b 45 fc             	mov    -0x4(%ebp),%eax
 855f9bc:	8b 4d 08             	mov    0x8(%ebp),%ecx
 855f9bf:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
 855f9c6:	8d 04 d5 00 00 00 00 	lea    0x0(,%edx,8),%eax
 855f9cd:	29 d0                	sub    %edx,%eax
 855f9cf:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 855f9d2:	83 c0 10             	add    $0x10,%eax
 855f9d5:	0f b6 40 18          	movzbl 0x18(%eax),%eax
 855f9d9:	84 c0                	test   %al,%al
 855f9db:	74 20                	je     855f9fd <_ZN12CLeagueMatch11GetSchoolNoEv+0x53>
 855f9dd:	8b 45 fc             	mov    -0x4(%ebp),%eax
 855f9e0:	8b 4d 08             	mov    0x8(%ebp),%ecx
 855f9e3:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
 855f9ea:	8d 04 d5 00 00 00 00 	lea    0x0(,%edx,8),%eax
 855f9f1:	29 d0                	sub    %edx,%eax
 855f9f3:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 855f9f6:	83 c0 2c             	add    $0x2c,%eax
 855f9f9:	8b 00                	mov    (%eax),%eax
 855f9fb:	eb 14                	jmp    855fa11 <_ZN12CLeagueMatch11GetSchoolNoEv+0x67>
 855f9fd:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 855fa01:	83 7d fc 03          	cmpl   $0x3,-0x4(%ebp)
 855fa05:	0f 9e c0             	setle  %al
 855fa08:	84 c0                	test   %al,%al
 855fa0a:	75 ad                	jne    855f9b9 <_ZN12CLeagueMatch11GetSchoolNoEv+0xf>
 855fa0c:	b8 00 00 00 00       	mov    $0x0,%eax
 855fa11:	c9                   	leave
 855fa12:	c3                   	ret
 855fa13:	90                   	nop

```

```c
// CLeagueMatch::GetSchoolNo @ 0x855f9aa

/* CLeagueMatch::GetSchoolNo() */

undefined4 __thiscall CLeagueMatch::GetSchoolNo(CLeagueMatch *this)

{
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (3 < local_8) {
      return 0;
    }
    if (this[local_8 * 0x1c + 0x28] != (CLeagueMatch)0x0) break;
    local_8 = local_8 + 1;
  }
  return *(undefined4 *)(this + local_8 * 0x1c + 0x2c);
}

```

---

## GetUser

```asm
// === 0855e5e4 CLeagueMatch::GetUser  [0x0855e5e4-0x855e641] ===
 855e5e4:	55                   	push   %ebp
 855e5e5:	89 e5                	mov    %esp,%ebp
 855e5e7:	83 7d 0c 03          	cmpl   $0x3,0xc(%ebp)
 855e5eb:	76 07                	jbe    855e5f4 <_ZN12CLeagueMatch7GetUserEj+0x10>
 855e5ed:	b8 00 00 00 00       	mov    $0x0,%eax
 855e5f2:	eb 4c                	jmp    855e640 <_ZN12CLeagueMatch7GetUserEj+0x5c>
 855e5f4:	8b 45 0c             	mov    0xc(%ebp),%eax
 855e5f7:	8b 4d 08             	mov    0x8(%ebp),%ecx
 855e5fa:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
 855e601:	8d 04 d5 00 00 00 00 	lea    0x0(,%edx,8),%eax
 855e608:	29 d0                	sub    %edx,%eax
 855e60a:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 855e60d:	83 c0 10             	add    $0x10,%eax
 855e610:	0f b6 40 18          	movzbl 0x18(%eax),%eax
 855e614:	83 f0 01             	xor    $0x1,%eax
 855e617:	84 c0                	test   %al,%al
 855e619:	74 07                	je     855e622 <_ZN12CLeagueMatch7GetUserEj+0x3e>
 855e61b:	b8 00 00 00 00       	mov    $0x0,%eax
 855e620:	eb 1e                	jmp    855e640 <_ZN12CLeagueMatch7GetUserEj+0x5c>
 855e622:	8b 45 0c             	mov    0xc(%ebp),%eax
 855e625:	8b 4d 08             	mov    0x8(%ebp),%ecx
 855e628:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
 855e62f:	8d 04 d5 00 00 00 00 	lea    0x0(,%edx,8),%eax
 855e636:	29 d0                	sub    %edx,%eax
 855e638:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 855e63b:	83 c0 24             	add    $0x24,%eax
 855e63e:	8b 00                	mov    (%eax),%eax
 855e640:	5d                   	pop    %ebp
 855e641:	c3                   	ret

```

```c
// CLeagueMatch::GetUser @ 0x855e5e4

/* CLeagueMatch::GetUser(unsigned int) */

undefined4 __thiscall CLeagueMatch::GetUser(CLeagueMatch *this,uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 4) {
    if (this[param_1 * 0x1c + 0x28] == (CLeagueMatch)0x1) {
      uVar1 = *(undefined4 *)(this + param_1 * 0x1c + 0x24);
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
// === 0855e642 CLeagueMatch::GetUserList  [0x0855e642-0x855e663] ===
 855e642:	55                   	push   %ebp
 855e643:	89 e5                	mov    %esp,%ebp
 855e645:	57                   	push   %edi
 855e646:	56                   	push   %esi
 855e647:	53                   	push   %ebx
 855e648:	8b 55 0c             	mov    0xc(%ebp),%edx
 855e64b:	8b 45 08             	mov    0x8(%ebp),%eax
 855e64e:	8d 58 1c             	lea    0x1c(%eax),%ebx
 855e651:	b8 1c 00 00 00       	mov    $0x1c,%eax
 855e656:	89 d7                	mov    %edx,%edi
 855e658:	89 de                	mov    %ebx,%esi
 855e65a:	89 c1                	mov    %eax,%ecx
 855e65c:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
 855e65e:	5b                   	pop    %ebx
 855e65f:	5e                   	pop    %esi
 855e660:	5f                   	pop    %edi
 855e661:	5d                   	pop    %ebp
 855e662:	c3                   	ret
 855e663:	90                   	nop

```

```c
// CLeagueMatch::GetUserList @ 0x855e642

/* CLeagueMatch::GetUserList(void*) */

void __thiscall CLeagueMatch::GetUserList(CLeagueMatch *this,void *param_1)

{
  int iVar1;
  CLeagueMatch *pCVar2;
  
  pCVar2 = this + 0x1c;
  for (iVar1 = 0x1c; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)param_1 = *(undefined4 *)pCVar2;
    pCVar2 = pCVar2 + 4;
    param_1 = (undefined4 *)((int)param_1 + 4);
  }
  return;
}

```

---

## OnCompleteLoad

```asm
// === 0855e22c CLeagueMatch::OnCompleteLoad  [0x0855e22c-0x855e377] ===
 855e22c:	55                   	push   %ebp
 855e22d:	89 e5                	mov    %esp,%ebp
 855e22f:	56                   	push   %esi
 855e230:	53                   	push   %ebx
 855e231:	83 ec 30             	sub    $0x30,%esp
 855e234:	8d 45 e0             	lea    -0x20(%ebp),%eax
 855e237:	89 04 24             	mov    %eax,(%esp)
 855e23a:	e8 0d fb 02 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 855e23f:	c7 44 24 08 81 00 00 	movl   $0x81,0x8(%esp)
 855e246:	00 
 855e247:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 855e24e:	00 
 855e24f:	8d 45 e0             	lea    -0x20(%ebp),%eax
 855e252:	89 04 24             	mov    %eax,(%esp)
 855e255:	e8 a2 d6 b6 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 855e25a:	8b 45 0c             	mov    0xc(%ebp),%eax
 855e25d:	89 04 24             	mov    %eax,(%esp)
 855e260:	e8 17 c1 b7 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 855e265:	0f b7 c0             	movzwl %ax,%eax
 855e268:	89 44 24 04          	mov    %eax,0x4(%esp)
 855e26c:	8d 45 e0             	lea    -0x20(%ebp),%eax
 855e26f:	89 04 24             	mov    %eax,(%esp)
 855e272:	e8 2d bc b7 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 855e277:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 855e27e:	00 
 855e27f:	8d 45 e0             	lea    -0x20(%ebp),%eax
 855e282:	89 04 24             	mov    %eax,(%esp)
 855e285:	e8 ce d6 b6 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 855e28a:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 855e291:	e9 a4 00 00 00       	jmp    855e33a <_ZN12CLeagueMatch14OnCompleteLoadEP5CUser+0x10e>
 855e296:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 855e29d:	e9 85 00 00 00       	jmp    855e327 <_ZN12CLeagueMatch14OnCompleteLoadEP5CUser+0xfb>
 855e2a2:	8b 4d ec             	mov    -0x14(%ebp),%ecx
 855e2a5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 855e2a8:	8b 5d 08             	mov    0x8(%ebp),%ebx
 855e2ab:	c1 e0 02             	shl    $0x2,%eax
 855e2ae:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
 855e2b5:	29 c2                	sub    %eax,%edx
 855e2b7:	89 c8                	mov    %ecx,%eax
 855e2b9:	89 c1                	mov    %eax,%ecx
 855e2bb:	c1 e1 04             	shl    $0x4,%ecx
 855e2be:	8d 04 cd 00 00 00 00 	lea    0x0(,%ecx,8),%eax
 855e2c5:	29 c8                	sub    %ecx,%eax
 855e2c7:	8d 04 02             	lea    (%edx,%eax,1),%eax
 855e2ca:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 855e2cd:	83 c0 24             	add    $0x24,%eax
 855e2d0:	8b 00                	mov    (%eax),%eax
 855e2d2:	89 45 f4             	mov    %eax,-0xc(%ebp)
 855e2d5:	8b 4d ec             	mov    -0x14(%ebp),%ecx
 855e2d8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 855e2db:	8b 5d 08             	mov    0x8(%ebp),%ebx
 855e2de:	c1 e0 02             	shl    $0x2,%eax
 855e2e1:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
 855e2e8:	29 c2                	sub    %eax,%edx
 855e2ea:	89 c8                	mov    %ecx,%eax
 855e2ec:	89 c1                	mov    %eax,%ecx
 855e2ee:	c1 e1 04             	shl    $0x4,%ecx
 855e2f1:	8d 04 cd 00 00 00 00 	lea    0x0(,%ecx,8),%eax
 855e2f8:	29 c8                	sub    %ecx,%eax
 855e2fa:	8d 04 02             	lea    (%edx,%eax,1),%eax
 855e2fd:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 855e300:	83 c0 10             	add    $0x10,%eax
 855e303:	0f b6 40 18          	movzbl 0x18(%eax),%eax
 855e307:	84 c0                	test   %al,%al
 855e309:	74 18                	je     855e323 <_ZN12CLeagueMatch14OnCompleteLoadEP5CUser+0xf7>
 855e30b:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 855e30f:	74 12                	je     855e323 <_ZN12CLeagueMatch14OnCompleteLoadEP5CUser+0xf7>
 855e311:	8d 45 e0             	lea    -0x20(%ebp),%eax
 855e314:	89 44 24 04          	mov    %eax,0x4(%esp)
 855e318:	8b 45 f4             	mov    -0xc(%ebp),%eax
 855e31b:	89 04 24             	mov    %eax,(%esp)
 855e31e:	e8 97 a2 0e 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 855e323:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 855e327:	83 7d f0 03          	cmpl   $0x3,-0x10(%ebp)
 855e32b:	0f 9e c0             	setle  %al
 855e32e:	84 c0                	test   %al,%al
 855e330:	0f 85 6c ff ff ff    	jne    855e2a2 <_ZN12CLeagueMatch14OnCompleteLoadEP5CUser+0x76>
 855e336:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 855e33a:	83 7d ec 01          	cmpl   $0x1,-0x14(%ebp)
 855e33e:	0f 9e c0             	setle  %al
 855e341:	84 c0                	test   %al,%al
 855e343:	0f 85 4d ff ff ff    	jne    855e296 <_ZN12CLeagueMatch14OnCompleteLoadEP5CUser+0x6a>
 855e349:	eb 1b                	jmp    855e366 <_ZN12CLeagueMatch14OnCompleteLoadEP5CUser+0x13a>
 855e34b:	89 d3                	mov    %edx,%ebx
 855e34d:	89 c6                	mov    %eax,%esi
 855e34f:	8d 45 e0             	lea    -0x20(%ebp),%eax
 855e352:	89 04 24             	mov    %eax,(%esp)
 855e355:	e8 26 fb 02 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 855e35a:	89 f0                	mov    %esi,%eax
 855e35c:	89 da                	mov    %ebx,%edx
 855e35e:	89 04 24             	mov    %eax,(%esp)
 855e361:	e8 ea 53 58 00       	call   8ae3750 <_Unwind_Resume>
 855e366:	8d 45 e0             	lea    -0x20(%ebp),%eax
 855e369:	89 04 24             	mov    %eax,(%esp)
 855e36c:	e8 0f fb 02 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 855e371:	83 c4 30             	add    $0x30,%esp
 855e374:	5b                   	pop    %ebx
 855e375:	5e                   	pop    %esi
 855e376:	5d                   	pop    %ebp
 855e377:	c3                   	ret

```

```c
// CLeagueMatch::OnCompleteLoad @ 0x855e22c

/* CLeagueMatch::OnCompleteLoad(CUser*) */

void __thiscall CLeagueMatch::OnCompleteLoad(CLeagueMatch *this,CUser *param_1)

{
  uint uVar1;
  PacketGuard local_24 [12];
  int local_18;
  int local_14;
  CUser *local_10;
  
  PacketGuard::PacketGuard(local_24);
                    /* try { // try from 0855e255 to 0855e322 has its CatchHandler @ 0855e34b */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,0,0x81);
  uVar1 = CUser::get_unique_id(param_1);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_24,uVar1 & 0xffff);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
  for (local_18 = 0; local_18 < 2; local_18 = local_18 + 1) {
    for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
      local_10 = *(CUser **)(this + local_14 * 0x1c + local_18 * 0x70 + 0x24);
      if ((this[local_14 * 0x1c + local_18 * 0x70 + 0x28] != (CLeagueMatch)0x0) &&
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

## OnCreateRoom

```asm
// === 0855d104 CLeagueMatch::OnCreateRoom  [0x0855d104-0x855d167] ===
 855d104:	55                   	push   %ebp
 855d105:	89 e5                	mov    %esp,%ebp
 855d107:	83 ec 18             	sub    $0x18,%esp
 855d10a:	a1 6c e0 43 09       	mov    0x943e06c,%eax
 855d10f:	83 c0 01             	add    $0x1,%eax
 855d112:	a3 6c e0 43 09       	mov    %eax,0x943e06c
 855d117:	8b 15 6c e0 43 09    	mov    0x943e06c,%edx
 855d11d:	8b 45 08             	mov    0x8(%ebp),%eax
 855d120:	89 50 18             	mov    %edx,0x18(%eax)
 855d123:	8b 45 08             	mov    0x8(%ebp),%eax
 855d126:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 855d12d:	8b 45 08             	mov    0x8(%ebp),%eax
 855d130:	05 8c 00 00 00       	add    $0x8c,%eax
 855d135:	89 04 24             	mov    %eax,(%esp)
 855d138:	e8 d9 f9 ff ff       	call   855cb16 <_ZN8TeamInfo5resetEv>
 855d13d:	8b 45 08             	mov    0x8(%ebp),%eax
 855d140:	83 c0 1c             	add    $0x1c,%eax
 855d143:	89 04 24             	mov    %eax,(%esp)
 855d146:	e8 cb f9 ff ff       	call   855cb16 <_ZN8TeamInfo5resetEv>
 855d14b:	8b 45 08             	mov    0x8(%ebp),%eax
 855d14e:	8d 50 1c             	lea    0x1c(%eax),%edx
 855d151:	8b 45 0c             	mov    0xc(%ebp),%eax
 855d154:	89 44 24 04          	mov    %eax,0x4(%esp)
 855d158:	89 14 24             	mov    %edx,(%esp)
 855d15b:	e8 f4 f9 ff ff       	call   855cb54 <_ZN8TeamInfo3addEP5CUser>
 855d160:	b8 00 00 00 00       	mov    $0x0,%eax
 855d165:	c9                   	leave
 855d166:	c3                   	ret
 855d167:	90                   	nop

```

```c
// CLeagueMatch::OnCreateRoom @ 0x855d104

/* CLeagueMatch::OnCreateRoom(CUser*) */

undefined4 __thiscall CLeagueMatch::OnCreateRoom(CLeagueMatch *this,CUser *param_1)

{
  nextAuthValue_ = nextAuthValue_ + 1;
  *(int *)(this + 0x18) = nextAuthValue_;
  *(undefined4 *)(this + 4) = 0;
  TeamInfo::reset((TeamInfo *)(this + 0x8c));
  TeamInfo::reset((TeamInfo *)(this + 0x1c));
  TeamInfo::add((TeamInfo *)(this + 0x1c),param_1);
  return 0;
}

```

---

## OnDestroyRoom

```asm
// === 0855d168 CLeagueMatch::OnDestroyRoom  [0x0855d168-0x855d197] ===
 855d168:	55                   	push   %ebp
 855d169:	89 e5                	mov    %esp,%ebp
 855d16b:	83 ec 18             	sub    $0x18,%esp
 855d16e:	8b 45 08             	mov    0x8(%ebp),%eax
 855d171:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 855d178:	a1 64 e0 43 09       	mov    0x943e064,%eax
 855d17d:	8b 00                	mov    (%eax),%eax
 855d17f:	83 c0 04             	add    $0x4,%eax
 855d182:	8b 08                	mov    (%eax),%ecx
 855d184:	8b 55 08             	mov    0x8(%ebp),%edx
 855d187:	a1 64 e0 43 09       	mov    0x943e064,%eax
 855d18c:	89 54 24 04          	mov    %edx,0x4(%esp)
 855d190:	89 04 24             	mov    %eax,(%esp)
 855d193:	ff d1                	call   *%ecx
 855d195:	c9                   	leave
 855d196:	c3                   	ret
 855d197:	90                   	nop

```

```c
// CLeagueMatch::OnDestroyRoom @ 0x855d168

/* CLeagueMatch::OnDestroyRoom(CUser*) */

void CLeagueMatch::OnDestroyRoom(CUser *param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  (**(code **)(*pWaitingRoomList_ + 4))(pWaitingRoomList_,param_1);
  return;
}

```

---

## OnEndFight

```asm
// === 0855e55a CLeagueMatch::OnEndFight  [0x0855e55a-0x855e5e3] ===
 855e55a:	55                   	push   %ebp
 855e55b:	89 e5                	mov    %esp,%ebp
 855e55d:	57                   	push   %edi
 855e55e:	56                   	push   %esi
 855e55f:	53                   	push   %ebx
 855e560:	83 ec 2c             	sub    $0x2c,%esp
 855e563:	8b 45 0c             	mov    0xc(%ebp),%eax
 855e566:	89 04 24             	mov    %eax,(%esp)
 855e569:	e8 d4 ac 07 00       	call   85d9242 <_ZN8PvP_Room16get_manager_teamEv>
 855e56e:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 855e571:	8b 45 08             	mov    0x8(%ebp),%eax
 855e574:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 855e57b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 855e57e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 855e585:	00 
 855e586:	89 44 24 08          	mov    %eax,0x8(%esp)
 855e58a:	8b 45 0c             	mov    0xc(%ebp),%eax
 855e58d:	89 44 24 04          	mov    %eax,0x4(%esp)
 855e591:	8b 45 08             	mov    0x8(%ebp),%eax
 855e594:	89 04 24             	mov    %eax,(%esp)
 855e597:	e8 dc fd ff ff       	call   855e378 <_ZN12CLeagueMatch11_ReturnTeamEP8PvP_RoomiP5CUser>
 855e59c:	83 7d e4 01          	cmpl   $0x1,-0x1c(%ebp)
 855e5a0:	74 1c                	je     855e5be <_ZN12CLeagueMatch10OnEndFightEP8PvP_Room+0x64>
 855e5a2:	8b 55 08             	mov    0x8(%ebp),%edx
 855e5a5:	8b 45 08             	mov    0x8(%ebp),%eax
 855e5a8:	83 c2 1c             	add    $0x1c,%edx
 855e5ab:	8d 98 8c 00 00 00    	lea    0x8c(%eax),%ebx
 855e5b1:	b8 1c 00 00 00       	mov    $0x1c,%eax
 855e5b6:	89 d7                	mov    %edx,%edi
 855e5b8:	89 de                	mov    %ebx,%esi
 855e5ba:	89 c1                	mov    %eax,%ecx
 855e5bc:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
 855e5be:	8b 45 08             	mov    0x8(%ebp),%eax
 855e5c1:	83 c0 1c             	add    $0x1c,%eax
 855e5c4:	89 04 24             	mov    %eax,(%esp)
 855e5c7:	e8 e2 e3 ff ff       	call   855c9ae <_ZN8TeamInfo7refreshEv>
 855e5cc:	8b 45 08             	mov    0x8(%ebp),%eax
 855e5cf:	05 8c 00 00 00       	add    $0x8c,%eax
 855e5d4:	89 04 24             	mov    %eax,(%esp)
 855e5d7:	e8 3a e5 ff ff       	call   855cb16 <_ZN8TeamInfo5resetEv>
 855e5dc:	83 c4 2c             	add    $0x2c,%esp
 855e5df:	5b                   	pop    %ebx
 855e5e0:	5e                   	pop    %esi
 855e5e1:	5f                   	pop    %edi
 855e5e2:	5d                   	pop    %ebp
 855e5e3:	c3                   	ret

```

```c
// CLeagueMatch::OnEndFight @ 0x855e55a

/* CLeagueMatch::OnEndFight(PvP_Room*) */

void __thiscall CLeagueMatch::OnEndFight(CLeagueMatch *this,PvP_Room *param_1)

{
  int iVar1;
  CLeagueMatch *pCVar2;
  CLeagueMatch *pCVar3;
  byte bVar4;
  
  bVar4 = 0;
  iVar1 = PvP_Room::get_manager_team(param_1);
  *(undefined4 *)(this + 4) = 0;
  _ReturnTeam(this,param_1,iVar1,(CUser *)0x0);
  if (iVar1 != 1) {
    pCVar2 = this + 0x8c;
    pCVar3 = this + 0x1c;
    for (iVar1 = 0x1c; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)pCVar3 = *(undefined4 *)pCVar2;
      pCVar2 = pCVar2 + (uint)bVar4 * -8 + 4;
      pCVar3 = pCVar3 + (uint)bVar4 * -8 + 4;
    }
  }
  TeamInfo::refresh((TeamInfo *)(this + 0x1c));
  TeamInfo::reset((TeamInfo *)(this + 0x8c));
  return;
}

```

---

## OnJoinRoom

```asm
// === 0855d198 CLeagueMatch::OnJoinRoom  [0x0855d198-0x855d1bf] ===
 855d198:	55                   	push   %ebp
 855d199:	89 e5                	mov    %esp,%ebp
 855d19b:	83 ec 18             	sub    $0x18,%esp
 855d19e:	8b 45 08             	mov    0x8(%ebp),%eax
 855d1a1:	8b 40 04             	mov    0x4(%eax),%eax
 855d1a4:	83 f8 03             	cmp    $0x3,%eax
 855d1a7:	74 15                	je     855d1be <_ZN12CLeagueMatch10OnJoinRoomEP5CUser+0x26>
 855d1a9:	8b 45 08             	mov    0x8(%ebp),%eax
 855d1ac:	8d 50 1c             	lea    0x1c(%eax),%edx
 855d1af:	8b 45 0c             	mov    0xc(%ebp),%eax
 855d1b2:	89 44 24 04          	mov    %eax,0x4(%esp)
 855d1b6:	89 14 24             	mov    %edx,(%esp)
 855d1b9:	e8 96 f9 ff ff       	call   855cb54 <_ZN8TeamInfo3addEP5CUser>
 855d1be:	c9                   	leave
 855d1bf:	c3                   	ret

```

```c
// CLeagueMatch::OnJoinRoom @ 0x855d198

/* CLeagueMatch::OnJoinRoom(CUser*) */

void __thiscall CLeagueMatch::OnJoinRoom(CLeagueMatch *this,CUser *param_1)

{
  if (*(int *)(this + 4) != 3) {
    TeamInfo::add((TeamInfo *)(this + 0x1c),param_1);
  }
  return;
}

```

---

## OnLeaveRoom

```asm
// === 0855d1c0 CLeagueMatch::OnLeaveRoom  [0x0855d1c0-0x855d3d1] ===
 855d1c0:	55                   	push   %ebp
 855d1c1:	89 e5                	mov    %esp,%ebp
 855d1c3:	83 ec 28             	sub    $0x28,%esp
 855d1c6:	8b 45 08             	mov    0x8(%ebp),%eax
 855d1c9:	8b 40 04             	mov    0x4(%eax),%eax
 855d1cc:	83 f8 04             	cmp    $0x4,%eax
 855d1cf:	75 52                	jne    855d223 <_ZN12CLeagueMatch11OnLeaveRoomEP5CUserP8PvP_Roomii+0x63>
 855d1d1:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 855d1d8:	00 
 855d1d9:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 855d1e0:	00 
 855d1e1:	8b 45 08             	mov    0x8(%ebp),%eax
 855d1e4:	89 04 24             	mov    %eax,(%esp)
 855d1e7:	e8 78 14 00 00       	call   855e664 <_ZN12CLeagueMatch21_SendMatchStatePacketEii>
 855d1ec:	8b 45 08             	mov    0x8(%ebp),%eax
 855d1ef:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 855d1f6:	8b 45 10             	mov    0x10(%ebp),%eax
 855d1f9:	89 04 24             	mov    %eax,(%esp)
 855d1fc:	e8 41 c0 07 00       	call   85d9242 <_ZN8PvP_Room16get_manager_teamEv>
 855d201:	8b 55 0c             	mov    0xc(%ebp),%edx
 855d204:	89 54 24 0c          	mov    %edx,0xc(%esp)
 855d208:	89 44 24 08          	mov    %eax,0x8(%esp)
 855d20c:	8b 45 10             	mov    0x10(%ebp),%eax
 855d20f:	89 44 24 04          	mov    %eax,0x4(%esp)
 855d213:	8b 45 08             	mov    0x8(%ebp),%eax
 855d216:	89 04 24             	mov    %eax,(%esp)
 855d219:	e8 5a 11 00 00       	call   855e378 <_ZN12CLeagueMatch11_ReturnTeamEP8PvP_RoomiP5CUser>
 855d21e:	e9 5a 01 00 00       	jmp    855d37d <_ZN12CLeagueMatch11OnLeaveRoomEP5CUserP8PvP_Roomii+0x1bd>
 855d223:	8b 45 08             	mov    0x8(%ebp),%eax
 855d226:	8b 40 04             	mov    0x4(%eax),%eax
 855d229:	83 f8 05             	cmp    $0x5,%eax
 855d22c:	0f 85 41 01 00 00    	jne    855d373 <_ZN12CLeagueMatch11OnLeaveRoomEP5CUserP8PvP_Roomii+0x1b3>
 855d232:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 855d239:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 855d240:	e9 e2 00 00 00       	jmp    855d327 <_ZN12CLeagueMatch11OnLeaveRoomEP5CUserP8PvP_Roomii+0x167>
 855d245:	83 7d 14 01          	cmpl   $0x1,0x14(%ebp)
 855d249:	75 6d                	jne    855d2b8 <_ZN12CLeagueMatch11OnLeaveRoomEP5CUserP8PvP_Roomii+0xf8>
 855d24b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 855d24e:	8b 4d 08             	mov    0x8(%ebp),%ecx
 855d251:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
 855d258:	8d 04 d5 00 00 00 00 	lea    0x0(,%edx,8),%eax
 855d25f:	29 d0                	sub    %edx,%eax
 855d261:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 855d264:	83 c0 24             	add    $0x24,%eax
 855d267:	8b 00                	mov    (%eax),%eax
 855d269:	3b 45 0c             	cmp    0xc(%ebp),%eax
 855d26c:	0f 85 b1 00 00 00    	jne    855d323 <_ZN12CLeagueMatch11OnLeaveRoomEP5CUserP8PvP_Roomii+0x163>
 855d272:	8b 45 f4             	mov    -0xc(%ebp),%eax
 855d275:	8b 4d 08             	mov    0x8(%ebp),%ecx
 855d278:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
 855d27f:	8d 04 d5 00 00 00 00 	lea    0x0(,%edx,8),%eax
 855d286:	29 d0                	sub    %edx,%eax
 855d288:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 855d28b:	83 c0 20             	add    $0x20,%eax
 855d28e:	8b 00                	mov    (%eax),%eax
 855d290:	89 45 f0             	mov    %eax,-0x10(%ebp)
 855d293:	8b 45 f4             	mov    -0xc(%ebp),%eax
 855d296:	8b 4d 08             	mov    0x8(%ebp),%ecx
 855d299:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
 855d2a0:	8d 04 d5 00 00 00 00 	lea    0x0(,%edx,8),%eax
 855d2a7:	29 d0                	sub    %edx,%eax
 855d2a9:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 855d2ac:	05 90 00 00 00       	add    $0x90,%eax
 855d2b1:	8b 00                	mov    (%eax),%eax
 855d2b3:	89 45 ec             	mov    %eax,-0x14(%ebp)
 855d2b6:	eb 7e                	jmp    855d336 <_ZN12CLeagueMatch11OnLeaveRoomEP5CUserP8PvP_Roomii+0x176>
 855d2b8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 855d2bb:	8b 4d 08             	mov    0x8(%ebp),%ecx
 855d2be:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
 855d2c5:	8d 04 d5 00 00 00 00 	lea    0x0(,%edx,8),%eax
 855d2cc:	29 d0                	sub    %edx,%eax
 855d2ce:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 855d2d1:	05 94 00 00 00       	add    $0x94,%eax
 855d2d6:	8b 00                	mov    (%eax),%eax
 855d2d8:	3b 45 0c             	cmp    0xc(%ebp),%eax
 855d2db:	75 46                	jne    855d323 <_ZN12CLeagueMatch11OnLeaveRoomEP5CUserP8PvP_Roomii+0x163>
 855d2dd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 855d2e0:	8b 4d 08             	mov    0x8(%ebp),%ecx
 855d2e3:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
 855d2ea:	8d 04 d5 00 00 00 00 	lea    0x0(,%edx,8),%eax
 855d2f1:	29 d0                	sub    %edx,%eax
 855d2f3:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 855d2f6:	05 90 00 00 00       	add    $0x90,%eax
 855d2fb:	8b 00                	mov    (%eax),%eax
 855d2fd:	89 45 f0             	mov    %eax,-0x10(%ebp)
 855d300:	8b 45 f4             	mov    -0xc(%ebp),%eax
 855d303:	8b 4d 08             	mov    0x8(%ebp),%ecx
 855d306:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
 855d30d:	8d 04 d5 00 00 00 00 	lea    0x0(,%edx,8),%eax
 855d314:	29 d0                	sub    %edx,%eax
 855d316:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 855d319:	83 c0 20             	add    $0x20,%eax
 855d31c:	8b 00                	mov    (%eax),%eax
 855d31e:	89 45 ec             	mov    %eax,-0x14(%ebp)
 855d321:	eb 13                	jmp    855d336 <_ZN12CLeagueMatch11OnLeaveRoomEP5CUserP8PvP_Roomii+0x176>
 855d323:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 855d327:	83 7d f4 03          	cmpl   $0x3,-0xc(%ebp)
 855d32b:	0f 9e c0             	setle  %al
 855d32e:	84 c0                	test   %al,%al
 855d330:	0f 85 0f ff ff ff    	jne    855d245 <_ZN12CLeagueMatch11OnLeaveRoomEP5CUserP8PvP_Roomii+0x85>
 855d336:	83 7d f4 03          	cmpl   $0x3,-0xc(%ebp)
 855d33a:	7f 41                	jg     855d37d <_ZN12CLeagueMatch11OnLeaveRoomEP5CUserP8PvP_Roomii+0x1bd>
 855d33c:	a1 6c bb 3a 09       	mov    0x93abb6c,%eax
 855d341:	89 44 24 0c          	mov    %eax,0xc(%esp)
 855d345:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 855d34c:	00 
 855d34d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 855d350:	89 44 24 04          	mov    %eax,0x4(%esp)
 855d354:	8d 45 f0             	lea    -0x10(%ebp),%eax
 855d357:	89 04 24             	mov    %eax,(%esp)
 855d35a:	e8 42 09 ef ff       	call   844dca1 <_ZN10CEloRating4calcERfS0_22ENUM_ELO_RATING_SYSTEMi>
 855d35f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 855d362:	89 44 24 04          	mov    %eax,0x4(%esp)
 855d366:	8b 45 0c             	mov    0xc(%ebp),%eax
 855d369:	89 04 24             	mov    %eax,(%esp)
 855d36c:	e8 2b bb 00 00       	call   8568e9c <_ZN5CUser12UpdateRatingEf>
 855d371:	eb 0a                	jmp    855d37d <_ZN12CLeagueMatch11OnLeaveRoomEP5CUserP8PvP_Roomii+0x1bd>
 855d373:	8b 45 08             	mov    0x8(%ebp),%eax
 855d376:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 855d37d:	83 7d 14 01          	cmpl   $0x1,0x14(%ebp)
 855d381:	75 17                	jne    855d39a <_ZN12CLeagueMatch11OnLeaveRoomEP5CUserP8PvP_Roomii+0x1da>
 855d383:	8b 45 08             	mov    0x8(%ebp),%eax
 855d386:	8d 50 1c             	lea    0x1c(%eax),%edx
 855d389:	8b 45 0c             	mov    0xc(%ebp),%eax
 855d38c:	89 44 24 04          	mov    %eax,0x4(%esp)
 855d390:	89 14 24             	mov    %edx,(%esp)
 855d393:	e8 04 f9 ff ff       	call   855cc9c <_ZN8TeamInfo3delEP5CUser>
 855d398:	eb 18                	jmp    855d3b2 <_ZN12CLeagueMatch11OnLeaveRoomEP5CUserP8PvP_Roomii+0x1f2>
 855d39a:	8b 45 08             	mov    0x8(%ebp),%eax
 855d39d:	8d 90 8c 00 00 00    	lea    0x8c(%eax),%edx
 855d3a3:	8b 45 0c             	mov    0xc(%ebp),%eax
 855d3a6:	89 44 24 04          	mov    %eax,0x4(%esp)
 855d3aa:	89 14 24             	mov    %edx,(%esp)
 855d3ad:	e8 ea f8 ff ff       	call   855cc9c <_ZN8TeamInfo3delEP5CUser>
 855d3b2:	a1 64 e0 43 09       	mov    0x943e064,%eax
 855d3b7:	8b 00                	mov    (%eax),%eax
 855d3b9:	83 c0 04             	add    $0x4,%eax
 855d3bc:	8b 08                	mov    (%eax),%ecx
 855d3be:	8b 55 08             	mov    0x8(%ebp),%edx
 855d3c1:	a1 64 e0 43 09       	mov    0x943e064,%eax
 855d3c6:	89 54 24 04          	mov    %edx,0x4(%esp)
 855d3ca:	89 04 24             	mov    %eax,(%esp)
 855d3cd:	ff d1                	call   *%ecx
 855d3cf:	c9                   	leave
 855d3d0:	c3                   	ret
 855d3d1:	90                   	nop

```

```c
// CLeagueMatch::OnLeaveRoom @ 0x855d1c0

/* CLeagueMatch::OnLeaveRoom(CUser*, PvP_Room*, int, int) */

void CLeagueMatch::OnLeaveRoom(CUser *param_1,PvP_Room *param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 local_18;
  float local_14;
  int local_10;
  
  if (*(int *)(param_1 + 4) == 4) {
    _SendMatchStatePacket((CLeagueMatch *)param_1,4,2);
    *(undefined4 *)(param_1 + 4) = 0;
    iVar1 = PvP_Room::get_manager_team((PvP_Room *)param_3);
    _ReturnTeam((CLeagueMatch *)param_1,(PvP_Room *)param_3,iVar1,(CUser *)param_2);
  }
  else if (*(int *)(param_1 + 4) == 5) {
    for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
      if (param_4 == 1) {
        if (*(PvP_Room **)(param_1 + local_10 * 0x1c + 0x24) == param_2) {
          local_14 = *(float *)(param_1 + local_10 * 0x1c + 0x20);
          local_18 = *(undefined4 *)(param_1 + local_10 * 0x1c + 0x90);
          break;
        }
      }
      else if (*(PvP_Room **)(param_1 + local_10 * 0x1c + 0x94) == param_2) {
        local_14 = *(float *)(param_1 + local_10 * 0x1c + 0x90);
        local_18 = *(undefined4 *)(param_1 + local_10 * 0x1c + 0x20);
        break;
      }
    }
    if (local_10 < 4) {
      CEloRating::calc(&local_14,&local_18,0,PvPGlobalEnvironmentVariable::school_match_elo_k_);
      CUser::UpdateRating((CUser *)param_2,local_14);
    }
  }
  else {
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (param_4 == 1) {
    TeamInfo::del((TeamInfo *)(param_1 + 0x1c),(CUser *)param_2);
  }
  else {
    TeamInfo::del((TeamInfo *)(param_1 + 0x8c),(CUser *)param_2);
  }
  (**(code **)(*pWaitingRoomList_ + 4))(pWaitingRoomList_,param_1);
  return;
}

```

---

## OnMatchRoom

```asm
// === 0855dc64 CLeagueMatch::OnMatchRoom  [0x0855dc64-0x855e129] ===
 855dc64:	55                   	push   %ebp
 855dc65:	89 e5                	mov    %esp,%ebp
 855dc67:	53                   	push   %ebx
 855dc68:	81 ec 94 00 00 00    	sub    $0x94,%esp
 855dc6e:	8b 45 08             	mov    0x8(%ebp),%eax
 855dc71:	8b 40 18             	mov    0x18(%eax),%eax
 855dc74:	3b 45 10             	cmp    0x10(%ebp),%eax
 855dc77:	74 40                	je     855dcb9 <_ZN12CLeagueMatch11OnMatchRoomEP8PvP_Roomi+0x55>
 855dc79:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 855dc80:	00 
 855dc81:	c7 44 24 08 95 02 00 	movl   $0x295,0x8(%esp)
 855dc88:	00 
 855dc89:	c7 44 24 04 e0 3a ca 	movl   $0x8ca3ae0,0x4(%esp)
 855dc90:	08 
 855dc91:	8d 45 94             	lea    -0x6c(%ebp),%eax
 855dc94:	89 04 24             	mov    %eax,(%esp)
 855dc97:	e8 7c 1a ff ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 855dc9c:	c7 44 24 04 9d 22 ca 	movl   $0x8ca229d,0x4(%esp)
 855dca3:	08 
 855dca4:	8d 45 94             	lea    -0x6c(%ebp),%eax
 855dca7:	89 04 24             	mov    %eax,(%esp)
 855dcaa:	e8 d9 1a ff ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 855dcaf:	b8 00 00 00 00       	mov    $0x0,%eax
 855dcb4:	e9 67 04 00 00       	jmp    855e120 <_ZN12CLeagueMatch11OnMatchRoomEP8PvP_Roomi+0x4bc>
 855dcb9:	8b 45 08             	mov    0x8(%ebp),%eax
 855dcbc:	8b 40 04             	mov    0x4(%eax),%eax
 855dcbf:	83 f8 01             	cmp    $0x1,%eax
 855dcc2:	74 0a                	je     855dcce <_ZN12CLeagueMatch11OnMatchRoomEP8PvP_Roomi+0x6a>
 855dcc4:	b8 00 00 00 00       	mov    $0x0,%eax
 855dcc9:	e9 52 04 00 00       	jmp    855e120 <_ZN12CLeagueMatch11OnMatchRoomEP8PvP_Roomi+0x4bc>
 855dcce:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 855dcd5:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 855dcdc:	c7 45 90 00 00 00 00 	movl   $0x0,-0x70(%ebp)
 855dce3:	a1 64 e0 43 09       	mov    0x943e064,%eax
 855dce8:	8b 00                	mov    (%eax),%eax
 855dcea:	83 c0 08             	add    $0x8,%eax
 855dced:	8b 18                	mov    (%eax),%ebx
 855dcef:	8b 55 08             	mov    0x8(%ebp),%edx
 855dcf2:	a1 64 e0 43 09       	mov    0x943e064,%eax
 855dcf7:	8d 4d 90             	lea    -0x70(%ebp),%ecx
 855dcfa:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 855dcfe:	89 54 24 04          	mov    %edx,0x4(%esp)
 855dd02:	89 04 24             	mov    %eax,(%esp)
 855dd05:	ff d3                	call   *%ebx
 855dd07:	8b 45 90             	mov    -0x70(%ebp),%eax
 855dd0a:	85 c0                	test   %eax,%eax
 855dd0c:	75 2f                	jne    855dd3d <_ZN12CLeagueMatch11OnMatchRoomEP8PvP_Roomi+0xd9>
 855dd0e:	8b 45 08             	mov    0x8(%ebp),%eax
 855dd11:	c7 40 04 02 00 00 00 	movl   $0x2,0x4(%eax)
 855dd18:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 855dd1f:	00 
 855dd20:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 855dd27:	00 
 855dd28:	8b 45 08             	mov    0x8(%ebp),%eax
 855dd2b:	89 04 24             	mov    %eax,(%esp)
 855dd2e:	e8 31 09 00 00       	call   855e664 <_ZN12CLeagueMatch21_SendMatchStatePacketEii>
 855dd33:	b8 00 00 00 00       	mov    $0x0,%eax
 855dd38:	e9 e3 03 00 00       	jmp    855e120 <_ZN12CLeagueMatch11OnMatchRoomEP8PvP_Roomi+0x4bc>
 855dd3d:	8b 45 90             	mov    -0x70(%ebp),%eax
 855dd40:	8b 00                	mov    (%eax),%eax
 855dd42:	83 c0 10             	add    $0x10,%eax
 855dd45:	8b 10                	mov    (%eax),%edx
 855dd47:	8b 45 90             	mov    -0x70(%ebp),%eax
 855dd4a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 855dd51:	00 
 855dd52:	89 04 24             	mov    %eax,(%esp)
 855dd55:	ff d2                	call   *%edx
 855dd57:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 855dd5a:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 855dd5e:	75 75                	jne    855ddd5 <_ZN12CLeagueMatch11OnMatchRoomEP8PvP_Roomi+0x171>
 855dd60:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 855dd67:	00 
 855dd68:	c7 44 24 08 b0 02 00 	movl   $0x2b0,0x8(%esp)
 855dd6f:	00 
 855dd70:	c7 44 24 04 e0 3a ca 	movl   $0x8ca3ae0,0x4(%esp)
 855dd77:	08 
 855dd78:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 855dd7b:	89 04 24             	mov    %eax,(%esp)
 855dd7e:	e8 95 19 ff ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 855dd83:	c7 44 24 0c b0 02 00 	movl   $0x2b0,0xc(%esp)
 855dd8a:	00 
 855dd8b:	c7 44 24 08 62 22 ca 	movl   $0x8ca2262,0x8(%esp)
 855dd92:	08 
 855dd93:	c7 44 24 04 b1 22 ca 	movl   $0x8ca22b1,0x4(%esp)
 855dd9a:	08 
 855dd9b:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 855dd9e:	89 04 24             	mov    %eax,(%esp)
 855dda1:	e8 e2 19 ff ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 855dda6:	8b 45 08             	mov    0x8(%ebp),%eax
 855dda9:	c7 40 04 02 00 00 00 	movl   $0x2,0x4(%eax)
 855ddb0:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 855ddb7:	00 
 855ddb8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 855ddbf:	00 
 855ddc0:	8b 45 08             	mov    0x8(%ebp),%eax
 855ddc3:	89 04 24             	mov    %eax,(%esp)
 855ddc6:	e8 99 08 00 00       	call   855e664 <_ZN12CLeagueMatch21_SendMatchStatePacketEii>
 855ddcb:	b8 00 00 00 00       	mov    $0x0,%eax
 855ddd0:	e9 4b 03 00 00       	jmp    855e120 <_ZN12CLeagueMatch11OnMatchRoomEP8PvP_Roomi+0x4bc>
 855ddd5:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 855ddd8:	89 04 24             	mov    %eax,(%esp)
 855dddb:	e8 ae 73 0f 00       	call   865518e <_ZN5CUser10GetPVPRoomEv>
 855dde0:	89 45 e8             	mov    %eax,-0x18(%ebp)
 855dde3:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 855dde7:	75 75                	jne    855de5e <_ZN12CLeagueMatch11OnMatchRoomEP8PvP_Roomi+0x1fa>
 855dde9:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 855ddf0:	00 
 855ddf1:	c7 44 24 08 b9 02 00 	movl   $0x2b9,0x8(%esp)
 855ddf8:	00 
 855ddf9:	c7 44 24 04 e0 3a ca 	movl   $0x8ca3ae0,0x4(%esp)
 855de00:	08 
 855de01:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 855de04:	89 04 24             	mov    %eax,(%esp)
 855de07:	e8 0c 19 ff ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 855de0c:	c7 44 24 0c b9 02 00 	movl   $0x2b9,0xc(%esp)
 855de13:	00 
 855de14:	c7 44 24 08 62 22 ca 	movl   $0x8ca2262,0x8(%esp)
 855de1b:	08 
 855de1c:	c7 44 24 04 b1 22 ca 	movl   $0x8ca22b1,0x4(%esp)
 855de23:	08 
 855de24:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 855de27:	89 04 24             	mov    %eax,(%esp)
 855de2a:	e8 59 19 ff ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 855de2f:	8b 45 08             	mov    0x8(%ebp),%eax
 855de32:	c7 40 04 02 00 00 00 	movl   $0x2,0x4(%eax)
 855de39:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 855de40:	00 
 855de41:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 855de48:	00 
 855de49:	8b 45 08             	mov    0x8(%ebp),%eax
 855de4c:	89 04 24             	mov    %eax,(%esp)
 855de4f:	e8 10 08 00 00       	call   855e664 <_ZN12CLeagueMatch21_SendMatchStatePacketEii>
 855de54:	b8 00 00 00 00       	mov    $0x0,%eax
 855de59:	e9 c2 02 00 00       	jmp    855e120 <_ZN12CLeagueMatch11OnMatchRoomEP8PvP_Roomi+0x4bc>
 855de5e:	8b 45 0c             	mov    0xc(%ebp),%eax
 855de61:	89 04 24             	mov    %eax,(%esp)
 855de64:	e8 37 8a 07 00       	call   85d68a0 <_ZN8PvP_Room16get_player_countEv>
 855de69:	0f b6 15 74 bb 3a 09 	movzbl 0x93abb74,%edx
 855de70:	0f b6 d2             	movzbl %dl,%edx
 855de73:	39 d0                	cmp    %edx,%eax
 855de75:	0f 9f c0             	setg   %al
 855de78:	84 c0                	test   %al,%al
 855de7a:	74 75                	je     855def1 <_ZN12CLeagueMatch11OnMatchRoomEP8PvP_Roomi+0x28d>
 855de7c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 855de83:	00 
 855de84:	c7 44 24 08 c2 02 00 	movl   $0x2c2,0x8(%esp)
 855de8b:	00 
 855de8c:	c7 44 24 04 e0 3a ca 	movl   $0x8ca3ae0,0x4(%esp)
 855de93:	08 
 855de94:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 855de97:	89 04 24             	mov    %eax,(%esp)
 855de9a:	e8 79 18 ff ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 855de9f:	c7 44 24 0c c2 02 00 	movl   $0x2c2,0xc(%esp)
 855dea6:	00 
 855dea7:	c7 44 24 08 62 22 ca 	movl   $0x8ca2262,0x8(%esp)
 855deae:	08 
 855deaf:	c7 44 24 04 b1 22 ca 	movl   $0x8ca22b1,0x4(%esp)
 855deb6:	08 
 855deb7:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 855deba:	89 04 24             	mov    %eax,(%esp)
 855debd:	e8 c6 18 ff ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 855dec2:	8b 45 08             	mov    0x8(%ebp),%eax
 855dec5:	c7 40 04 02 00 00 00 	movl   $0x2,0x4(%eax)
 855decc:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 855ded3:	00 
 855ded4:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 855dedb:	00 
 855dedc:	8b 45 08             	mov    0x8(%ebp),%eax
 855dedf:	89 04 24             	mov    %eax,(%esp)
 855dee2:	e8 7d 07 00 00       	call   855e664 <_ZN12CLeagueMatch21_SendMatchStatePacketEii>
 855dee7:	b8 00 00 00 00       	mov    $0x0,%eax
 855deec:	e9 2f 02 00 00       	jmp    855e120 <_ZN12CLeagueMatch11OnMatchRoomEP8PvP_Roomi+0x4bc>
 855def1:	8b 45 08             	mov    0x8(%ebp),%eax
 855def4:	83 c0 1c             	add    $0x1c,%eax
 855def7:	89 04 24             	mov    %eax,(%esp)
 855defa:	e8 27 ee ff ff       	call   855cd26 <_ZNK8TeamInfo4sizeEv>
 855deff:	0f b6 15 74 bb 3a 09 	movzbl 0x93abb74,%edx
 855df06:	0f b6 d2             	movzbl %dl,%edx
 855df09:	39 d0                	cmp    %edx,%eax
 855df0b:	7f 19                	jg     855df26 <_ZN12CLeagueMatch11OnMatchRoomEP8PvP_Roomi+0x2c2>
 855df0d:	8b 45 e8             	mov    -0x18(%ebp),%eax
 855df10:	89 04 24             	mov    %eax,(%esp)
 855df13:	e8 88 89 07 00       	call   85d68a0 <_ZN8PvP_Room16get_player_countEv>
 855df18:	0f b6 15 74 bb 3a 09 	movzbl 0x93abb74,%edx
 855df1f:	0f b6 d2             	movzbl %dl,%edx
 855df22:	39 d0                	cmp    %edx,%eax
 855df24:	7e 07                	jle    855df2d <_ZN12CLeagueMatch11OnMatchRoomEP8PvP_Roomi+0x2c9>
 855df26:	b8 01 00 00 00       	mov    $0x1,%eax
 855df2b:	eb 05                	jmp    855df32 <_ZN12CLeagueMatch11OnMatchRoomEP8PvP_Roomi+0x2ce>
 855df2d:	b8 00 00 00 00       	mov    $0x0,%eax
 855df32:	84 c0                	test   %al,%al
 855df34:	74 75                	je     855dfab <_ZN12CLeagueMatch11OnMatchRoomEP8PvP_Roomi+0x347>
 855df36:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 855df3d:	00 
 855df3e:	c7 44 24 08 ca 02 00 	movl   $0x2ca,0x8(%esp)
 855df45:	00 
 855df46:	c7 44 24 04 e0 3a ca 	movl   $0x8ca3ae0,0x4(%esp)
 855df4d:	08 
 855df4e:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 855df51:	89 04 24             	mov    %eax,(%esp)
 855df54:	e8 bf 17 ff ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 855df59:	c7 44 24 0c ca 02 00 	movl   $0x2ca,0xc(%esp)
 855df60:	00 
 855df61:	c7 44 24 08 62 22 ca 	movl   $0x8ca2262,0x8(%esp)
 855df68:	08 
 855df69:	c7 44 24 04 b1 22 ca 	movl   $0x8ca22b1,0x4(%esp)
 855df70:	08 
 855df71:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 855df74:	89 04 24             	mov    %eax,(%esp)
 855df77:	e8 0c 18 ff ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 855df7c:	8b 45 08             	mov    0x8(%ebp),%eax
 855df7f:	c7 40 04 02 00 00 00 	movl   $0x2,0x4(%eax)
 855df86:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 855df8d:	00 
 855df8e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 855df95:	00 
 855df96:	8b 45 08             	mov    0x8(%ebp),%eax
 855df99:	89 04 24             	mov    %eax,(%esp)
 855df9c:	e8 c3 06 00 00       	call   855e664 <_ZN12CLeagueMatch21_SendMatchStatePacketEii>
 855dfa1:	b8 00 00 00 00       	mov    $0x0,%eax
 855dfa6:	e9 75 01 00 00       	jmp    855e120 <_ZN12CLeagueMatch11OnMatchRoomEP8PvP_Roomi+0x4bc>
 855dfab:	8b 45 e8             	mov    -0x18(%ebp),%eax
 855dfae:	89 44 24 04          	mov    %eax,0x4(%esp)
 855dfb2:	8b 45 08             	mov    0x8(%ebp),%eax
 855dfb5:	89 04 24             	mov    %eax,(%esp)
 855dfb8:	e8 97 f5 ff ff       	call   855d554 <_ZN12CLeagueMatch15_BackupRoomInfoEP8PvP_Room>
 855dfbd:	8b 45 08             	mov    0x8(%ebp),%eax
 855dfc0:	05 8c 00 00 00       	add    $0x8c,%eax
 855dfc5:	89 04 24             	mov    %eax,(%esp)
 855dfc8:	e8 49 eb ff ff       	call   855cb16 <_ZN8TeamInfo5resetEv>
 855dfcd:	8b 45 08             	mov    0x8(%ebp),%eax
 855dfd0:	05 8c 00 00 00       	add    $0x8c,%eax
 855dfd5:	89 44 24 04          	mov    %eax,0x4(%esp)
 855dfd9:	8b 45 e8             	mov    -0x18(%ebp),%eax
 855dfdc:	89 04 24             	mov    %eax,(%esp)
 855dfdf:	e8 46 b3 07 00       	call   85d932a <_ZN8PvP_Room13get_user_listEPv>
 855dfe4:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 855dfeb:	00 
 855dfec:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 855dff3:	00 
 855dff4:	8b 45 08             	mov    0x8(%ebp),%eax
 855dff7:	89 04 24             	mov    %eax,(%esp)
 855dffa:	e8 65 06 00 00       	call   855e664 <_ZN12CLeagueMatch21_SendMatchStatePacketEii>
 855dfff:	8b 45 08             	mov    0x8(%ebp),%eax
 855e002:	c7 40 04 03 00 00 00 	movl   $0x3,0x4(%eax)
 855e009:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 855e010:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 855e017:	e9 ae 00 00 00       	jmp    855e0ca <_ZN12CLeagueMatch11OnMatchRoomEP8PvP_Roomi+0x466>
 855e01c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 855e01f:	89 44 24 04          	mov    %eax,0x4(%esp)
 855e023:	8b 45 e8             	mov    -0x18(%ebp),%eax
 855e026:	89 04 24             	mov    %eax,(%esp)
 855e029:	e8 f0 b1 07 00       	call   85d921e <_ZN8PvP_Room13get_user_seatEi>
 855e02e:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 855e031:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 855e035:	0f 84 8a 00 00 00    	je     855e0c5 <_ZN12CLeagueMatch11OnMatchRoomEP8PvP_Roomi+0x461>
 855e03b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 855e03e:	89 44 24 04          	mov    %eax,0x4(%esp)
 855e042:	8b 45 e8             	mov    -0x18(%ebp),%eax
 855e045:	89 04 24             	mov    %eax,(%esp)
 855e048:	e8 25 b2 07 00       	call   85d9272 <_ZN8PvP_Room8get_teamEi>
 855e04d:	89 45 ec             	mov    %eax,-0x14(%ebp)
 855e050:	8b 45 f0             	mov    -0x10(%ebp),%eax
 855e053:	89 44 24 0c          	mov    %eax,0xc(%esp)
 855e057:	8b 45 e8             	mov    -0x18(%ebp),%eax
 855e05a:	89 44 24 08          	mov    %eax,0x8(%esp)
 855e05e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 855e061:	89 44 24 04          	mov    %eax,0x4(%esp)
 855e065:	8b 45 08             	mov    0x8(%ebp),%eax
 855e068:	89 04 24             	mov    %eax,(%esp)
 855e06b:	e8 62 f3 ff ff       	call   855d3d2 <_ZN12CLeagueMatch12_PullOutRoomEP5CUserP8PvP_Roomi>
 855e070:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 855e077:	00 
 855e078:	8b 45 0c             	mov    0xc(%ebp),%eax
 855e07b:	89 44 24 08          	mov    %eax,0x8(%esp)
 855e07f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 855e082:	89 44 24 04          	mov    %eax,0x4(%esp)
 855e086:	8b 45 08             	mov    0x8(%ebp),%eax
 855e089:	89 04 24             	mov    %eax,(%esp)
 855e08c:	e8 99 f3 ff ff       	call   855d42a <_ZN12CLeagueMatch10_PutInRoomEP5CUserP8PvP_Roomb>
 855e091:	89 45 f4             	mov    %eax,-0xc(%ebp)
 855e094:	83 7d ec 03          	cmpl   $0x3,-0x14(%ebp)
 855e098:	75 2c                	jne    855e0c6 <_ZN12CLeagueMatch11OnMatchRoomEP8PvP_Roomi+0x462>
 855e09a:	c7 44 24 10 02 00 00 	movl   $0x2,0x10(%esp)
 855e0a1:	00 
 855e0a2:	c7 44 24 0c 03 00 00 	movl   $0x3,0xc(%esp)
 855e0a9:	00 
 855e0aa:	8b 45 f4             	mov    -0xc(%ebp),%eax
 855e0ad:	89 44 24 08          	mov    %eax,0x8(%esp)
 855e0b1:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 855e0b4:	89 44 24 04          	mov    %eax,0x4(%esp)
 855e0b8:	8b 45 0c             	mov    0xc(%ebp),%eax
 855e0bb:	89 04 24             	mov    %eax,(%esp)
 855e0be:	e8 ad ef 07 00       	call   85dd070 <_ZN8PvP_Room17OnSetPVPSeatStateEP5CUseri15ENUM_SEAT_STATE17ENUM_WALKOUT_TYPE>
 855e0c3:	eb 01                	jmp    855e0c6 <_ZN12CLeagueMatch11OnMatchRoomEP8PvP_Roomi+0x462>
 855e0c5:	90                   	nop
 855e0c6:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 855e0ca:	83 7d f0 07          	cmpl   $0x7,-0x10(%ebp)
 855e0ce:	0f 96 c0             	setbe  %al
 855e0d1:	84 c0                	test   %al,%al
 855e0d3:	0f 85 43 ff ff ff    	jne    855e01c <_ZN12CLeagueMatch11OnMatchRoomEP8PvP_Roomi+0x3b8>
 855e0d9:	a1 64 e0 43 09       	mov    0x943e064,%eax
 855e0de:	8b 00                	mov    (%eax),%eax
 855e0e0:	83 c0 04             	add    $0x4,%eax
 855e0e3:	8b 08                	mov    (%eax),%ecx
 855e0e5:	8b 55 08             	mov    0x8(%ebp),%edx
 855e0e8:	a1 64 e0 43 09       	mov    0x943e064,%eax
 855e0ed:	89 54 24 04          	mov    %edx,0x4(%esp)
 855e0f1:	89 04 24             	mov    %eax,(%esp)
 855e0f4:	ff d1                	call   *%ecx
 855e0f6:	8b 45 08             	mov    0x8(%ebp),%eax
 855e0f9:	c7 40 04 04 00 00 00 	movl   $0x4,0x4(%eax)
 855e100:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 855e107:	00 
 855e108:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 855e10f:	00 
 855e110:	8b 45 08             	mov    0x8(%ebp),%eax
 855e113:	89 04 24             	mov    %eax,(%esp)
 855e116:	e8 49 05 00 00       	call   855e664 <_ZN12CLeagueMatch21_SendMatchStatePacketEii>
 855e11b:	b8 01 00 00 00       	mov    $0x1,%eax
 855e120:	81 c4 94 00 00 00    	add    $0x94,%esp
 855e126:	5b                   	pop    %ebx
 855e127:	5d                   	pop    %ebp
 855e128:	c3                   	ret
 855e129:	90                   	nop

```

```c
// CLeagueMatch::OnMatchRoom @ 0x855dc64

/* CLeagueMatch::OnMatchRoom(PvP_Room*, int) */

undefined4 __thiscall CLeagueMatch::OnMatchRoom(CLeagueMatch *this,PvP_Room *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
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
    cMyTrace::cMyTrace(local_70,"virtual bool CLeagueMatch::OnMatchRoom(PvP_Room*, int)",0x295,0);
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
  if (local_20 != (CUser *)0x0) {
    local_1c = (PvP_Room *)CUser::GetPVPRoom(local_20);
    if (local_1c == (PvP_Room *)0x0) {
      cMyTrace::cMyTrace(local_50,"virtual bool CLeagueMatch::OnMatchRoom(PvP_Room*, int)",0x2b9,0);
      cMyTrace::operator()(local_50,"error file(%s) line(%d)","MatchingSystem.cpp",0x2b9);
      *(undefined4 *)(this + 4) = 2;
      _SendMatchStatePacket(this,1,1);
      return 0;
    }
    iVar2 = PvP_Room::get_player_count(param_1);
    if (iVar2 <= (int)(uint)nPlayerCountPerOneTeam_) {
      iVar2 = TeamInfo::size((TeamInfo *)(this + 0x1c));
      if (((int)(uint)nPlayerCountPerOneTeam_ < iVar2) ||
         (iVar2 = PvP_Room::get_player_count(local_1c), (int)(uint)nPlayerCountPerOneTeam_ < iVar2))
      {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) {
        cMyTrace::cMyTrace(local_30,"virtual bool CLeagueMatch::OnMatchRoom(PvP_Room*, int)",0x2ca,0
                          );
        cMyTrace::operator()(local_30,"error file(%s) line(%d)","MatchingSystem.cpp",0x2ca);
        *(undefined4 *)(this + 4) = 2;
        _SendMatchStatePacket(this,1,1);
        uVar3 = 0;
      }
      else {
        _BackupRoomInfo(this,local_1c);
        TeamInfo::reset((TeamInfo *)(this + 0x8c));
        PvP_Room::get_user_list(local_1c,this + 0x8c);
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
        uVar3 = 1;
      }
      return uVar3;
    }
    cMyTrace::cMyTrace(local_40,"virtual bool CLeagueMatch::OnMatchRoom(PvP_Room*, int)",0x2c2,0);
    cMyTrace::operator()(local_40,"error file(%s) line(%d)","MatchingSystem.cpp",0x2c2);
    *(undefined4 *)(this + 4) = 2;
    _SendMatchStatePacket(this,1,1);
    return 0;
  }
  cMyTrace::cMyTrace(local_60,"virtual bool CLeagueMatch::OnMatchRoom(PvP_Room*, int)",0x2b0,0);
  cMyTrace::operator()(local_60,"error file(%s) line(%d)","MatchingSystem.cpp",0x2b0);
  *(undefined4 *)(this + 4) = 2;
  _SendMatchStatePacket(this,1,1);
  return 0;
}

```

---

## OnReady

```asm
// === 0855e52a CLeagueMatch::OnReady  [0x0855e52a-0x855e559] ===
 855e52a:	55                   	push   %ebp
 855e52b:	89 e5                	mov    %esp,%ebp
 855e52d:	83 ec 04             	sub    $0x4,%esp
 855e530:	8b 45 10             	mov    0x10(%ebp),%eax
 855e533:	88 45 fc             	mov    %al,-0x4(%ebp)
 855e536:	0f b6 45 fc          	movzbl -0x4(%ebp),%eax
 855e53a:	83 f0 01             	xor    $0x1,%eax
 855e53d:	84 c0                	test   %al,%al
 855e53f:	74 12                	je     855e553 <_ZN12CLeagueMatch7OnReadyEP5CUserb+0x29>
 855e541:	8b 45 08             	mov    0x8(%ebp),%eax
 855e544:	8b 40 04             	mov    0x4(%eax),%eax
 855e547:	83 f8 04             	cmp    $0x4,%eax
 855e54a:	75 07                	jne    855e553 <_ZN12CLeagueMatch7OnReadyEP5CUserb+0x29>
 855e54c:	b8 00 00 00 00       	mov    $0x0,%eax
 855e551:	eb 05                	jmp    855e558 <_ZN12CLeagueMatch7OnReadyEP5CUserb+0x2e>
 855e553:	b8 01 00 00 00       	mov    $0x1,%eax
 855e558:	c9                   	leave
 855e559:	c3                   	ret

```

```c
// CLeagueMatch::OnReady @ 0x855e52a

/* CLeagueMatch::OnReady(CUser*, bool) */

undefined4 __thiscall CLeagueMatch::OnReady(CLeagueMatch *this,CUser *param_1,bool param_2)

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
// === 0855db58 CLeagueMatch::OnRegisterMatch  [0x0855db58-0x855dc63] ===
 855db58:	55                   	push   %ebp
 855db59:	89 e5                	mov    %esp,%ebp
 855db5b:	53                   	push   %ebx
 855db5c:	83 ec 24             	sub    $0x24,%esp
 855db5f:	8b 45 08             	mov    0x8(%ebp),%eax
 855db62:	8b 40 04             	mov    0x4(%eax),%eax
 855db65:	83 f8 01             	cmp    $0x1,%eax
 855db68:	75 0a                	jne    855db74 <_ZN12CLeagueMatch15OnRegisterMatchEP5CUserP8PvP_Room+0x1c>
 855db6a:	b8 01 00 00 00       	mov    $0x1,%eax
 855db6f:	e9 ea 00 00 00       	jmp    855dc5e <_ZN12CLeagueMatch15OnRegisterMatchEP5CUserP8PvP_Room+0x106>
 855db74:	0f b6 05 60 e0 43 09 	movzbl 0x943e060,%eax
 855db7b:	83 f0 01             	xor    $0x1,%eax
 855db7e:	84 c0                	test   %al,%al
 855db80:	74 25                	je     855dba7 <_ZN12CLeagueMatch15OnRegisterMatchEP5CUserP8PvP_Room+0x4f>
 855db82:	c7 44 24 08 13 00 00 	movl   $0x13,0x8(%esp)
 855db89:	00 
 855db8a:	c7 44 24 04 c7 00 00 	movl   $0xc7,0x4(%esp)
 855db91:	00 
 855db92:	8b 45 0c             	mov    0xc(%ebp),%eax
 855db95:	89 04 24             	mov    %eax,(%esp)
 855db98:	e8 a5 e3 11 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 855db9d:	b8 00 00 00 00       	mov    $0x0,%eax
 855dba2:	e9 b7 00 00 00       	jmp    855dc5e <_ZN12CLeagueMatch15OnRegisterMatchEP5CUserP8PvP_Room+0x106>
 855dba7:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 855dbae:	8b 45 10             	mov    0x10(%ebp),%eax
 855dbb1:	89 44 24 04          	mov    %eax,0x4(%esp)
 855dbb5:	8b 45 08             	mov    0x8(%ebp),%eax
 855dbb8:	89 04 24             	mov    %eax,(%esp)
 855dbbb:	e8 96 fe ff ff       	call   855da56 <_ZNK12CLeagueMatch15_CheckMatchableEP8PvP_Room>
 855dbc0:	89 45 f4             	mov    %eax,-0xc(%ebp)
 855dbc3:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 855dbc7:	0f 95 c0             	setne  %al
 855dbca:	84 c0                	test   %al,%al
 855dbcc:	74 24                	je     855dbf2 <_ZN12CLeagueMatch15OnRegisterMatchEP5CUserP8PvP_Room+0x9a>
 855dbce:	8b 45 f4             	mov    -0xc(%ebp),%eax
 855dbd1:	0f b6 c0             	movzbl %al,%eax
 855dbd4:	89 44 24 08          	mov    %eax,0x8(%esp)
 855dbd8:	c7 44 24 04 c7 00 00 	movl   $0xc7,0x4(%esp)
 855dbdf:	00 
 855dbe0:	8b 45 0c             	mov    0xc(%ebp),%eax
 855dbe3:	89 04 24             	mov    %eax,(%esp)
 855dbe6:	e8 57 e3 11 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 855dbeb:	b8 00 00 00 00       	mov    $0x0,%eax
 855dbf0:	eb 6c                	jmp    855dc5e <_ZN12CLeagueMatch15OnRegisterMatchEP5CUserP8PvP_Room+0x106>
 855dbf2:	8b 45 08             	mov    0x8(%ebp),%eax
 855dbf5:	8b 40 04             	mov    0x4(%eax),%eax
 855dbf8:	83 f8 02             	cmp    $0x2,%eax
 855dbfb:	74 12                	je     855dc0f <_ZN12CLeagueMatch15OnRegisterMatchEP5CUserP8PvP_Room+0xb7>
 855dbfd:	8b 45 10             	mov    0x10(%ebp),%eax
 855dc00:	89 44 24 04          	mov    %eax,0x4(%esp)
 855dc04:	8b 45 08             	mov    0x8(%ebp),%eax
 855dc07:	89 04 24             	mov    %eax,(%esp)
 855dc0a:	e8 75 fc ff ff       	call   855d884 <_ZN12CLeagueMatch20_RegisterWaitingRoomEP8PvP_Room>
 855dc0f:	8b 45 08             	mov    0x8(%ebp),%eax
 855dc12:	c7 40 04 01 00 00 00 	movl   $0x1,0x4(%eax)
 855dc19:	8b 45 08             	mov    0x8(%ebp),%eax
 855dc1c:	8b 58 18             	mov    0x18(%eax),%ebx
 855dc1f:	8b 45 10             	mov    0x10(%ebp),%eax
 855dc22:	89 04 24             	mov    %eax,(%esp)
 855dc25:	e8 6a fd cc ff       	call   822d994 <_ZN8PvP_Room9get_indexEv>
 855dc2a:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 855dc2e:	89 44 24 04          	mov    %eax,0x4(%esp)
 855dc32:	c7 04 24 0a 00 00 00 	movl   $0xa,(%esp)
 855dc39:	e8 d6 a1 0d 00       	call   8637e14 <_ZN18TimerStartMatching15registNextTimerElii>
 855dc3e:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 855dc45:	00 
 855dc46:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 855dc4d:	00 
 855dc4e:	8b 45 08             	mov    0x8(%ebp),%eax
 855dc51:	89 04 24             	mov    %eax,(%esp)
 855dc54:	e8 0b 0a 00 00       	call   855e664 <_ZN12CLeagueMatch21_SendMatchStatePacketEii>
 855dc59:	b8 01 00 00 00       	mov    $0x1,%eax
 855dc5e:	83 c4 24             	add    $0x24,%esp
 855dc61:	5b                   	pop    %ebx
 855dc62:	5d                   	pop    %ebp
 855dc63:	c3                   	ret

```

```c
// CLeagueMatch::OnRegisterMatch @ 0x855db58

/* CLeagueMatch::OnRegisterMatch(CUser*, PvP_Room*) */

undefined4 __thiscall
CLeagueMatch::OnRegisterMatch(CLeagueMatch *this,CUser *param_1,PvP_Room *param_2)

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
        _RegisterWaitingRoom(this,param_2);
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
// === 0855eb22 CLeagueMatch::OnReward  [0x0855eb22-0x855f9a9] ===
 855eb22:	55                   	push   %ebp
 855eb23:	89 e5                	mov    %esp,%ebp
 855eb25:	57                   	push   %edi
 855eb26:	56                   	push   %esi
 855eb27:	53                   	push   %ebx
 855eb28:	81 ec fc 01 00 00    	sub    $0x1fc,%esp
 855eb2e:	8b 45 14             	mov    0x14(%ebp),%eax
 855eb31:	88 85 24 fe ff ff    	mov    %al,-0x1dc(%ebp)
 855eb37:	8d 85 28 ff ff ff    	lea    -0xd8(%ebp),%eax
 855eb3d:	89 04 24             	mov    %eax,(%esp)
 855eb40:	e8 81 a2 00 00       	call   8568dc6 <_ZN16Packet_PvPResultC1Ev>
 855eb45:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 855eb4c:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 855eb53:	e9 fd 00 00 00       	jmp    855ec55 <_ZN12CLeagueMatch8OnRewardEP8PvP_Roomib+0x133>
 855eb58:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 855eb5f:	e9 d5 00 00 00       	jmp    855ec39 <_ZN12CLeagueMatch8OnRewardEP8PvP_Roomib+0x117>
 855eb64:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 855eb6b:	e9 b6 00 00 00       	jmp    855ec26 <_ZN12CLeagueMatch8OnRewardEP8PvP_Roomib+0x104>
 855eb70:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 855eb73:	89 85 1c fe ff ff    	mov    %eax,-0x1e4(%ebp)
 855eb79:	8b 75 cc             	mov    -0x34(%ebp),%esi
 855eb7c:	8b 7d d0             	mov    -0x30(%ebp),%edi
 855eb7f:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 855eb82:	8b 45 cc             	mov    -0x34(%ebp),%eax
 855eb85:	8b 4d d0             	mov    -0x30(%ebp),%ecx
 855eb88:	89 8d 20 fe ff ff    	mov    %ecx,-0x1e0(%ebp)
 855eb8e:	8b 5d 08             	mov    0x8(%ebp),%ebx
 855eb91:	01 c0                	add    %eax,%eax
 855eb93:	8d 0c c5 00 00 00 00 	lea    0x0(,%eax,8),%ecx
 855eb9a:	29 c1                	sub    %eax,%ecx
 855eb9c:	89 d0                	mov    %edx,%eax
 855eb9e:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
 855eba5:	8d 04 d5 00 00 00 00 	lea    0x0(,%edx,8),%eax
 855ebac:	29 d0                	sub    %edx,%eax
 855ebae:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 855ebb1:	03 85 20 fe ff ff    	add    -0x1e0(%ebp),%eax
 855ebb7:	83 c0 10             	add    $0x10,%eax
 855ebba:	0f b7 44 43 10       	movzwl 0x10(%ebx,%eax,2),%eax
 855ebbf:	89 c3                	mov    %eax,%ebx
 855ebc1:	89 f0                	mov    %esi,%eax
 855ebc3:	01 c0                	add    %eax,%eax
 855ebc5:	01 f0                	add    %esi,%eax
 855ebc7:	8b 95 1c fe ff ff    	mov    -0x1e4(%ebp),%edx
 855ebcd:	8d 0c d5 00 00 00 00 	lea    0x0(,%edx,8),%ecx
 855ebd4:	8d 14 cd 00 00 00 00 	lea    0x0(,%ecx,8),%edx
 855ebdb:	29 ca                	sub    %ecx,%edx
 855ebdd:	01 d0                	add    %edx,%eax
 855ebdf:	8d 55 e8             	lea    -0x18(%ebp),%edx
 855ebe2:	8d 04 02             	lea    (%edx,%eax,1),%eax
 855ebe5:	01 f8                	add    %edi,%eax
 855ebe7:	2d b0 00 00 00       	sub    $0xb0,%eax
 855ebec:	88 18                	mov    %bl,(%eax)
 855ebee:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 855ebf1:	8b 55 cc             	mov    -0x34(%ebp),%edx
 855ebf4:	8b 5d d0             	mov    -0x30(%ebp),%ebx
 855ebf7:	89 d0                	mov    %edx,%eax
 855ebf9:	01 c0                	add    %eax,%eax
 855ebfb:	01 d0                	add    %edx,%eax
 855ebfd:	89 ca                	mov    %ecx,%edx
 855ebff:	8d 0c d5 00 00 00 00 	lea    0x0(,%edx,8),%ecx
 855ec06:	8d 14 cd 00 00 00 00 	lea    0x0(,%ecx,8),%edx
 855ec0d:	29 ca                	sub    %ecx,%edx
 855ec0f:	01 d0                	add    %edx,%eax
 855ec11:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 855ec14:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 855ec17:	01 d8                	add    %ebx,%eax
 855ec19:	2d b0 00 00 00       	sub    $0xb0,%eax
 855ec1e:	c6 40 0c 00          	movb   $0x0,0xc(%eax)
 855ec22:	83 45 d0 01          	addl   $0x1,-0x30(%ebp)
 855ec26:	83 7d d0 02          	cmpl   $0x2,-0x30(%ebp)
 855ec2a:	0f 9e c0             	setle  %al
 855ec2d:	84 c0                	test   %al,%al
 855ec2f:	0f 85 3b ff ff ff    	jne    855eb70 <_ZN12CLeagueMatch8OnRewardEP8PvP_Roomib+0x4e>
 855ec35:	83 45 cc 01          	addl   $0x1,-0x34(%ebp)
 855ec39:	0f b6 05 74 bb 3a 09 	movzbl 0x93abb74,%eax
 855ec40:	0f b6 c0             	movzbl %al,%eax
 855ec43:	3b 45 cc             	cmp    -0x34(%ebp),%eax
 855ec46:	0f 9f c0             	setg   %al
 855ec49:	84 c0                	test   %al,%al
 855ec4b:	0f 85 13 ff ff ff    	jne    855eb64 <_ZN12CLeagueMatch8OnRewardEP8PvP_Roomib+0x42>
 855ec51:	83 45 c4 01          	addl   $0x1,-0x3c(%ebp)
 855ec55:	83 7d c4 01          	cmpl   $0x1,-0x3c(%ebp)
 855ec59:	0f 9e c0             	setle  %al
 855ec5c:	84 c0                	test   %al,%al
 855ec5e:	0f 85 f4 fe ff ff    	jne    855eb58 <_ZN12CLeagueMatch8OnRewardEP8PvP_Roomib+0x36>
 855ec64:	80 bd 24 fe ff ff 00 	cmpb   $0x0,-0x1dc(%ebp)
 855ec6b:	0f 84 10 01 00 00    	je     855ed81 <_ZN12CLeagueMatch8OnRewardEP8PvP_Roomib+0x25f>
 855ec71:	c7 45 c8 01 00 00 00 	movl   $0x1,-0x38(%ebp)
 855ec78:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 855ec7f:	e9 e0 00 00 00       	jmp    855ed64 <_ZN12CLeagueMatch8OnRewardEP8PvP_Roomib+0x242>
 855ec84:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 855ec87:	89 d0                	mov    %edx,%eax
 855ec89:	01 c0                	add    %eax,%eax
 855ec8b:	01 d0                	add    %edx,%eax
 855ec8d:	8d 7d e8             	lea    -0x18(%ebp),%edi
 855ec90:	8d 04 07             	lea    (%edi,%eax,1),%eax
 855ec93:	2d af 00 00 00       	sub    $0xaf,%eax
 855ec98:	c6 40 0c 00          	movb   $0x0,0xc(%eax)
 855ec9c:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 855ec9f:	8d 8d 28 ff ff ff    	lea    -0xd8(%ebp),%ecx
 855eca5:	89 d0                	mov    %edx,%eax
 855eca7:	01 c0                	add    %eax,%eax
 855eca9:	01 d0                	add    %edx,%eax
 855ecab:	83 c0 12             	add    $0x12,%eax
 855ecae:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 855ecb1:	8d 48 0c             	lea    0xc(%eax),%ecx
 855ecb4:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 855ecb7:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
 855ecbe:	8d 04 d5 00 00 00 00 	lea    0x0(,%edx,8),%eax
 855ecc5:	29 d0                	sub    %edx,%eax
 855ecc7:	83 c0 10             	add    $0x10,%eax
 855ecca:	03 45 08             	add    0x8(%ebp),%eax
 855eccd:	83 c0 0c             	add    $0xc,%eax
 855ecd0:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 855ecd7:	00 
 855ecd8:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 855ecdc:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 855ece3:	00 
 855ece4:	89 44 24 04          	mov    %eax,0x4(%esp)
 855ece8:	8b 45 08             	mov    0x8(%ebp),%eax
 855eceb:	89 04 24             	mov    %eax,(%esp)
 855ecee:	e8 fb fa ff ff       	call   855e7ee <_ZN12CLeagueMatch8addBadgeEP10PlayerInfo15ENUM_BADGE_TYPEPhb>
 855ecf3:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 855ecf6:	89 d0                	mov    %edx,%eax
 855ecf8:	01 c0                	add    %eax,%eax
 855ecfa:	01 d0                	add    %edx,%eax
 855ecfc:	8d 55 e8             	lea    -0x18(%ebp),%edx
 855ecff:	8d 04 02             	lea    (%edx,%eax,1),%eax
 855ed02:	83 e8 77             	sub    $0x77,%eax
 855ed05:	c6 40 0c 00          	movb   $0x0,0xc(%eax)
 855ed09:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 855ed0c:	8d 8d 28 ff ff ff    	lea    -0xd8(%ebp),%ecx
 855ed12:	89 d0                	mov    %edx,%eax
 855ed14:	01 c0                	add    %eax,%eax
 855ed16:	01 d0                	add    %edx,%eax
 855ed18:	83 c0 4a             	add    $0x4a,%eax
 855ed1b:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 855ed1e:	8d 48 0c             	lea    0xc(%eax),%ecx
 855ed21:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 855ed24:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
 855ed2b:	8d 04 d5 00 00 00 00 	lea    0x0(,%edx,8),%eax
 855ed32:	29 d0                	sub    %edx,%eax
 855ed34:	83 e8 80             	sub    $0xffffff80,%eax
 855ed37:	03 45 08             	add    0x8(%ebp),%eax
 855ed3a:	83 c0 0c             	add    $0xc,%eax
 855ed3d:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 855ed44:	00 
 855ed45:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 855ed49:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 855ed50:	00 
 855ed51:	89 44 24 04          	mov    %eax,0x4(%esp)
 855ed55:	8b 45 08             	mov    0x8(%ebp),%eax
 855ed58:	89 04 24             	mov    %eax,(%esp)
 855ed5b:	e8 8e fa ff ff       	call   855e7ee <_ZN12CLeagueMatch8addBadgeEP10PlayerInfo15ENUM_BADGE_TYPEPhb>
 855ed60:	83 45 d4 01          	addl   $0x1,-0x2c(%ebp)
 855ed64:	0f b6 05 74 bb 3a 09 	movzbl 0x93abb74,%eax
 855ed6b:	0f b6 c0             	movzbl %al,%eax
 855ed6e:	3b 45 d4             	cmp    -0x2c(%ebp),%eax
 855ed71:	0f 9f c0             	setg   %al
 855ed74:	84 c0                	test   %al,%al
 855ed76:	0f 85 08 ff ff ff    	jne    855ec84 <_ZN12CLeagueMatch8OnRewardEP8PvP_Roomib+0x162>
 855ed7c:	e9 25 02 00 00       	jmp    855efa6 <_ZN12CLeagueMatch8OnRewardEP8PvP_Roomib+0x484>
 855ed81:	83 7d 10 01          	cmpl   $0x1,0x10(%ebp)
 855ed85:	0f 85 10 01 00 00    	jne    855ee9b <_ZN12CLeagueMatch8OnRewardEP8PvP_Roomib+0x379>
 855ed8b:	c7 45 c8 02 00 00 00 	movl   $0x2,-0x38(%ebp)
 855ed92:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 855ed99:	e9 e0 00 00 00       	jmp    855ee7e <_ZN12CLeagueMatch8OnRewardEP8PvP_Roomib+0x35c>
 855ed9e:	8b 55 d8             	mov    -0x28(%ebp),%edx
 855eda1:	8d 8d 28 ff ff ff    	lea    -0xd8(%ebp),%ecx
 855eda7:	89 d0                	mov    %edx,%eax
 855eda9:	01 c0                	add    %eax,%eax
 855edab:	01 d0                	add    %edx,%eax
 855edad:	83 c0 11             	add    $0x11,%eax
 855edb0:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 855edb3:	8d 48 0c             	lea    0xc(%eax),%ecx
 855edb6:	8b 45 d8             	mov    -0x28(%ebp),%eax
 855edb9:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
 855edc0:	8d 04 d5 00 00 00 00 	lea    0x0(,%edx,8),%eax
 855edc7:	29 d0                	sub    %edx,%eax
 855edc9:	83 c0 10             	add    $0x10,%eax
 855edcc:	03 45 08             	add    0x8(%ebp),%eax
 855edcf:	83 c0 0c             	add    $0xc,%eax
 855edd2:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 855edd9:	00 
 855edda:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 855edde:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 855ede5:	00 
 855ede6:	89 44 24 04          	mov    %eax,0x4(%esp)
 855edea:	8b 45 08             	mov    0x8(%ebp),%eax
 855eded:	89 04 24             	mov    %eax,(%esp)
 855edf0:	e8 f9 f9 ff ff       	call   855e7ee <_ZN12CLeagueMatch8addBadgeEP10PlayerInfo15ENUM_BADGE_TYPEPhb>
 855edf5:	8b 55 d8             	mov    -0x28(%ebp),%edx
 855edf8:	89 d0                	mov    %edx,%eax
 855edfa:	01 c0                	add    %eax,%eax
 855edfc:	01 d0                	add    %edx,%eax
 855edfe:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 855ee01:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 855ee04:	2d ae 00 00 00       	sub    $0xae,%eax
 855ee09:	c6 40 0c 00          	movb   $0x0,0xc(%eax)
 855ee0d:	8b 55 d8             	mov    -0x28(%ebp),%edx
 855ee10:	89 d0                	mov    %edx,%eax
 855ee12:	01 c0                	add    %eax,%eax
 855ee14:	01 d0                	add    %edx,%eax
 855ee16:	8d 7d e8             	lea    -0x18(%ebp),%edi
 855ee19:	8d 04 07             	lea    (%edi,%eax,1),%eax
 855ee1c:	83 e8 77             	sub    $0x77,%eax
 855ee1f:	c6 40 0c 00          	movb   $0x0,0xc(%eax)
 855ee23:	8b 55 d8             	mov    -0x28(%ebp),%edx
 855ee26:	8d 8d 28 ff ff ff    	lea    -0xd8(%ebp),%ecx
 855ee2c:	89 d0                	mov    %edx,%eax
 855ee2e:	01 c0                	add    %eax,%eax
 855ee30:	01 d0                	add    %edx,%eax
 855ee32:	83 c0 4a             	add    $0x4a,%eax
 855ee35:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 855ee38:	8d 48 0c             	lea    0xc(%eax),%ecx
 855ee3b:	8b 45 d8             	mov    -0x28(%ebp),%eax
 855ee3e:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
 855ee45:	8d 04 d5 00 00 00 00 	lea    0x0(,%edx,8),%eax
 855ee4c:	29 d0                	sub    %edx,%eax
 855ee4e:	83 e8 80             	sub    $0xffffff80,%eax
 855ee51:	03 45 08             	add    0x8(%ebp),%eax
 855ee54:	83 c0 0c             	add    $0xc,%eax
 855ee57:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 855ee5e:	00 
 855ee5f:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 855ee63:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 855ee6a:	00 
 855ee6b:	89 44 24 04          	mov    %eax,0x4(%esp)
 855ee6f:	8b 45 08             	mov    0x8(%ebp),%eax
 855ee72:	89 04 24             	mov    %eax,(%esp)
 855ee75:	e8 74 f9 ff ff       	call   855e7ee <_ZN12CLeagueMatch8addBadgeEP10PlayerInfo15ENUM_BADGE_TYPEPhb>
 855ee7a:	83 45 d8 01          	addl   $0x1,-0x28(%ebp)
 855ee7e:	0f b6 05 74 bb 3a 09 	movzbl 0x93abb74,%eax
 855ee85:	0f b6 c0             	movzbl %al,%eax
 855ee88:	3b 45 d8             	cmp    -0x28(%ebp),%eax
 855ee8b:	0f 9f c0             	setg   %al
 855ee8e:	84 c0                	test   %al,%al
 855ee90:	0f 85 08 ff ff ff    	jne    855ed9e <_ZN12CLeagueMatch8OnRewardEP8PvP_Roomib+0x27c>
 855ee96:	e9 0b 01 00 00       	jmp    855efa6 <_ZN12CLeagueMatch8OnRewardEP8PvP_Roomib+0x484>
 855ee9b:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
 855eea2:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 855eea9:	e9 e0 00 00 00       	jmp    855ef8e <_ZN12CLeagueMatch8OnRewardEP8PvP_Roomib+0x46c>
 855eeae:	8b 55 dc             	mov    -0x24(%ebp),%edx
 855eeb1:	89 d0                	mov    %edx,%eax
 855eeb3:	01 c0                	add    %eax,%eax
 855eeb5:	01 d0                	add    %edx,%eax
 855eeb7:	8d 55 e8             	lea    -0x18(%ebp),%edx
 855eeba:	8d 04 02             	lea    (%edx,%eax,1),%eax
 855eebd:	2d af 00 00 00       	sub    $0xaf,%eax
 855eec2:	c6 40 0c 00          	movb   $0x0,0xc(%eax)
 855eec6:	8b 55 dc             	mov    -0x24(%ebp),%edx
 855eec9:	8d 8d 28 ff ff ff    	lea    -0xd8(%ebp),%ecx
 855eecf:	89 d0                	mov    %edx,%eax
 855eed1:	01 c0                	add    %eax,%eax
 855eed3:	01 d0                	add    %edx,%eax
 855eed5:	83 c0 12             	add    $0x12,%eax
 855eed8:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 855eedb:	8d 48 0c             	lea    0xc(%eax),%ecx
 855eede:	8b 45 dc             	mov    -0x24(%ebp),%eax
 855eee1:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
 855eee8:	8d 04 d5 00 00 00 00 	lea    0x0(,%edx,8),%eax
 855eeef:	29 d0                	sub    %edx,%eax
 855eef1:	83 c0 10             	add    $0x10,%eax
 855eef4:	03 45 08             	add    0x8(%ebp),%eax
 855eef7:	83 c0 0c             	add    $0xc,%eax
 855eefa:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 855ef01:	00 
 855ef02:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 855ef06:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 855ef0d:	00 
 855ef0e:	89 44 24 04          	mov    %eax,0x4(%esp)
 855ef12:	8b 45 08             	mov    0x8(%ebp),%eax
 855ef15:	89 04 24             	mov    %eax,(%esp)
 855ef18:	e8 d1 f8 ff ff       	call   855e7ee <_ZN12CLeagueMatch8addBadgeEP10PlayerInfo15ENUM_BADGE_TYPEPhb>
 855ef1d:	8b 55 dc             	mov    -0x24(%ebp),%edx
 855ef20:	8d 8d 28 ff ff ff    	lea    -0xd8(%ebp),%ecx
 855ef26:	89 d0                	mov    %edx,%eax
 855ef28:	01 c0                	add    %eax,%eax
 855ef2a:	01 d0                	add    %edx,%eax
 855ef2c:	83 c0 49             	add    $0x49,%eax
 855ef2f:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 855ef32:	8d 48 0c             	lea    0xc(%eax),%ecx
 855ef35:	8b 45 dc             	mov    -0x24(%ebp),%eax
 855ef38:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
 855ef3f:	8d 04 d5 00 00 00 00 	lea    0x0(,%edx,8),%eax
 855ef46:	29 d0                	sub    %edx,%eax
 855ef48:	83 e8 80             	sub    $0xffffff80,%eax
 855ef4b:	03 45 08             	add    0x8(%ebp),%eax
 855ef4e:	83 c0 0c             	add    $0xc,%eax
 855ef51:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 855ef58:	00 
 855ef59:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 855ef5d:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 855ef64:	00 
 855ef65:	89 44 24 04          	mov    %eax,0x4(%esp)
 855ef69:	8b 45 08             	mov    0x8(%ebp),%eax
 855ef6c:	89 04 24             	mov    %eax,(%esp)
 855ef6f:	e8 7a f8 ff ff       	call   855e7ee <_ZN12CLeagueMatch8addBadgeEP10PlayerInfo15ENUM_BADGE_TYPEPhb>
 855ef74:	8b 55 dc             	mov    -0x24(%ebp),%edx
 855ef77:	89 d0                	mov    %edx,%eax
 855ef79:	01 c0                	add    %eax,%eax
 855ef7b:	01 d0                	add    %edx,%eax
 855ef7d:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 855ef80:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 855ef83:	83 e8 76             	sub    $0x76,%eax
 855ef86:	c6 40 0c 00          	movb   $0x0,0xc(%eax)
 855ef8a:	83 45 dc 01          	addl   $0x1,-0x24(%ebp)
 855ef8e:	0f b6 05 74 bb 3a 09 	movzbl 0x93abb74,%eax
 855ef95:	0f b6 c0             	movzbl %al,%eax
 855ef98:	3b 45 dc             	cmp    -0x24(%ebp),%eax
 855ef9b:	0f 9f c0             	setg   %al
 855ef9e:	84 c0                	test   %al,%al
 855efa0:	0f 85 08 ff ff ff    	jne    855eeae <_ZN12CLeagueMatch8OnRewardEP8PvP_Roomib+0x38c>
 855efa6:	a1 70 bb 3a 09       	mov    0x93abb70,%eax
 855efab:	89 85 32 ff ff ff    	mov    %eax,-0xce(%ebp)
 855efb1:	8b 45 c8             	mov    -0x38(%ebp),%eax
 855efb4:	88 85 36 ff ff ff    	mov    %al,-0xca(%ebp)
 855efba:	0f b6 05 74 bb 3a 09 	movzbl 0x93abb74,%eax
 855efc1:	88 85 37 ff ff ff    	mov    %al,-0xc9(%ebp)
 855efc7:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 855efce:	e9 29 07 00 00       	jmp    855f6fc <_ZN12CLeagueMatch8OnRewardEP8PvP_Roomib+0xbda>
 855efd3:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 855efda:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 855efe1:	eb 54                	jmp    855f037 <_ZN12CLeagueMatch8OnRewardEP8PvP_Roomib+0x515>
 855efe3:	8b 75 c4             	mov    -0x3c(%ebp),%esi
 855efe6:	8b 5d e0             	mov    -0x20(%ebp),%ebx
 855efe9:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 855efec:	8b 45 e0             	mov    -0x20(%ebp),%eax
 855efef:	8b 7d 08             	mov    0x8(%ebp),%edi
 855eff2:	c1 e0 02             	shl    $0x2,%eax
 855eff5:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
 855effc:	29 c2                	sub    %eax,%edx
 855effe:	89 c8                	mov    %ecx,%eax
 855f000:	89 c1                	mov    %eax,%ecx
 855f002:	c1 e1 04             	shl    $0x4,%ecx
 855f005:	8d 04 cd 00 00 00 00 	lea    0x0(,%ecx,8),%eax
 855f00c:	29 c8                	sub    %ecx,%eax
 855f00e:	8d 04 02             	lea    (%edx,%eax,1),%eax
 855f011:	8d 04 07             	lea    (%edi,%eax,1),%eax
 855f014:	83 c0 2c             	add    $0x2c,%eax
 855f017:	8b 08                	mov    (%eax),%ecx
 855f019:	89 f0                	mov    %esi,%eax
 855f01b:	8d 14 00             	lea    (%eax,%eax,1),%edx
 855f01e:	8d 04 d5 00 00 00 00 	lea    0x0(,%edx,8),%eax
 855f025:	29 d0                	sub    %edx,%eax
 855f027:	01 d8                	add    %ebx,%eax
 855f029:	83 c0 08             	add    $0x8,%eax
 855f02c:	89 8c 85 30 ff ff ff 	mov    %ecx,-0xd0(%ebp,%eax,4)
 855f033:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 855f037:	0f b6 05 74 bb 3a 09 	movzbl 0x93abb74,%eax
 855f03e:	0f b6 c0             	movzbl %al,%eax
 855f041:	3b 45 e0             	cmp    -0x20(%ebp),%eax
 855f044:	0f 9f c0             	setg   %al
 855f047:	84 c0                	test   %al,%al
 855f049:	75 98                	jne    855efe3 <_ZN12CLeagueMatch8OnRewardEP8PvP_Roomib+0x4c1>
 855f04b:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 855f052:	e9 be 04 00 00       	jmp    855f515 <_ZN12CLeagueMatch8OnRewardEP8PvP_Roomib+0x9f3>
 855f057:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 855f05a:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 855f05d:	8d 14 00             	lea    (%eax,%eax,1),%edx
 855f060:	8d 04 d5 00 00 00 00 	lea    0x0(,%edx,8),%eax
 855f067:	29 d0                	sub    %edx,%eax
 855f069:	01 c8                	add    %ecx,%eax
 855f06b:	83 c0 08             	add    $0x8,%eax
 855f06e:	8b 9c 85 30 ff ff ff 	mov    -0xd0(%ebp,%eax,4),%ebx
 855f075:	0f b6 05 74 bb 3a 09 	movzbl 0x93abb74,%eax
 855f07c:	0f b6 c8             	movzbl %al,%ecx
 855f07f:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 855f082:	8d b5 28 ff ff ff    	lea    -0xd8(%ebp),%esi
 855f088:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
 855f08f:	8d 04 d5 00 00 00 00 	lea    0x0(,%edx,8),%eax
 855f096:	29 d0                	sub    %edx,%eax
 855f098:	83 c0 20             	add    $0x20,%eax
 855f09b:	8d 04 06             	lea    (%esi,%eax,1),%eax
 855f09e:	8d 50 08             	lea    0x8(%eax),%edx
 855f0a1:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 855f0a5:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 855f0a9:	8b 45 e0             	mov    -0x20(%ebp),%eax
 855f0ac:	89 44 24 08          	mov    %eax,0x8(%esp)
 855f0b0:	89 54 24 04          	mov    %edx,0x4(%esp)
 855f0b4:	8b 45 08             	mov    0x8(%ebp),%eax
 855f0b7:	89 04 24             	mov    %eax,(%esp)
 855f0ba:	e8 e9 f6 ff ff       	call   855e7a8 <_ZN12CLeagueMatch14_getSameSchoolEPjiij>
 855f0bf:	84 c0                	test   %al,%al
 855f0c1:	0f 84 75 01 00 00    	je     855f23c <_ZN12CLeagueMatch8OnRewardEP8PvP_Roomib+0x71a>
 855f0c7:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 855f0ca:	8b 55 e0             	mov    -0x20(%ebp),%edx
 855f0cd:	89 d0                	mov    %edx,%eax
 855f0cf:	01 c0                	add    %eax,%eax
 855f0d1:	01 d0                	add    %edx,%eax
 855f0d3:	89 ca                	mov    %ecx,%edx
 855f0d5:	8d 0c d5 00 00 00 00 	lea    0x0(,%edx,8),%ecx
 855f0dc:	8d 14 cd 00 00 00 00 	lea    0x0(,%ecx,8),%edx
 855f0e3:	29 ca                	sub    %ecx,%edx
 855f0e5:	01 d0                	add    %edx,%eax
 855f0e7:	8d 7d e8             	lea    -0x18(%ebp),%edi
 855f0ea:	8d 04 07             	lea    (%edi,%eax,1),%eax
 855f0ed:	2d af 00 00 00       	sub    $0xaf,%eax
 855f0f2:	0f b6 40 0c          	movzbl 0xc(%eax),%eax
 855f0f6:	84 c0                	test   %al,%al
 855f0f8:	75 37                	jne    855f131 <_ZN12CLeagueMatch8OnRewardEP8PvP_Roomib+0x60f>
 855f0fa:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 855f0fd:	8b 55 e0             	mov    -0x20(%ebp),%edx
 855f100:	89 d0                	mov    %edx,%eax
 855f102:	01 c0                	add    %eax,%eax
 855f104:	01 d0                	add    %edx,%eax
 855f106:	89 ca                	mov    %ecx,%edx
 855f108:	8d 0c d5 00 00 00 00 	lea    0x0(,%edx,8),%ecx
 855f10f:	8d 14 cd 00 00 00 00 	lea    0x0(,%ecx,8),%edx
 855f116:	29 ca                	sub    %ecx,%edx
 855f118:	01 d0                	add    %edx,%eax
 855f11a:	8d 55 e8             	lea    -0x18(%ebp),%edx
 855f11d:	8d 04 02             	lea    (%edx,%eax,1),%eax
 855f120:	2d ae 00 00 00       	sub    $0xae,%eax
 855f125:	0f b6 40 0c          	movzbl 0xc(%eax),%eax
 855f129:	84 c0                	test   %al,%al
 855f12b:	0f 84 86 00 00 00    	je     855f1b7 <_ZN12CLeagueMatch8OnRewardEP8PvP_Roomib+0x695>
 855f131:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 855f134:	8b 55 e0             	mov    -0x20(%ebp),%edx
 855f137:	8d 9d 28 ff ff ff    	lea    -0xd8(%ebp),%ebx
 855f13d:	89 d0                	mov    %edx,%eax
 855f13f:	01 c0                	add    %eax,%eax
 855f141:	01 d0                	add    %edx,%eax
 855f143:	89 ca                	mov    %ecx,%edx
 855f145:	8d 0c d5 00 00 00 00 	lea    0x0(,%edx,8),%ecx
 855f14c:	8d 14 cd 00 00 00 00 	lea    0x0(,%ecx,8),%edx
 855f153:	29 ca                	sub    %ecx,%edx
 855f155:	01 d0                	add    %edx,%eax
 855f157:	83 c0 10             	add    $0x10,%eax
 855f15a:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 855f15d:	8d 58 0c             	lea    0xc(%eax),%ebx
 855f160:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 855f163:	8b 45 e0             	mov    -0x20(%ebp),%eax
 855f166:	c1 e0 02             	shl    $0x2,%eax
 855f169:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
 855f170:	29 c2                	sub    %eax,%edx
 855f172:	89 c8                	mov    %ecx,%eax
 855f174:	89 c1                	mov    %eax,%ecx
 855f176:	c1 e1 04             	shl    $0x4,%ecx
 855f179:	8d 04 cd 00 00 00 00 	lea    0x0(,%ecx,8),%eax
 855f180:	29 c8                	sub    %ecx,%eax
 855f182:	8d 04 02             	lea    (%edx,%eax,1),%eax
 855f185:	83 c0 10             	add    $0x10,%eax
 855f188:	03 45 08             	add    0x8(%ebp),%eax
 855f18b:	83 c0 0c             	add    $0xc,%eax
 855f18e:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 855f195:	00 
 855f196:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 855f19a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 855f1a1:	00 
 855f1a2:	89 44 24 04          	mov    %eax,0x4(%esp)
 855f1a6:	8b 45 08             	mov    0x8(%ebp),%eax
 855f1a9:	89 04 24             	mov    %eax,(%esp)
 855f1ac:	e8 3d f6 ff ff       	call   855e7ee <_ZN12CLeagueMatch8addBadgeEP10PlayerInfo15ENUM_BADGE_TYPEPhb>
 855f1b1:	90                   	nop
 855f1b2:	e9 5a 03 00 00       	jmp    855f511 <_ZN12CLeagueMatch8OnRewardEP8PvP_Roomib+0x9ef>
 855f1b7:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 855f1ba:	8b 55 e0             	mov    -0x20(%ebp),%edx
 855f1bd:	8d 9d 28 ff ff ff    	lea    -0xd8(%ebp),%ebx
 855f1c3:	89 d0                	mov    %edx,%eax
 855f1c5:	01 c0                	add    %eax,%eax
 855f1c7:	01 d0                	add    %edx,%eax
 855f1c9:	89 ca                	mov    %ecx,%edx
 855f1cb:	8d 0c d5 00 00 00 00 	lea    0x0(,%edx,8),%ecx
 855f1d2:	8d 14 cd 00 00 00 00 	lea    0x0(,%ecx,8),%edx
 855f1d9:	29 ca                	sub    %ecx,%edx
 855f1db:	01 d0                	add    %edx,%eax
 855f1dd:	83 c0 10             	add    $0x10,%eax
 855f1e0:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 855f1e3:	8d 58 0c             	lea    0xc(%eax),%ebx
 855f1e6:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 855f1e9:	8b 45 e0             	mov    -0x20(%ebp),%eax
 855f1ec:	c1 e0 02             	shl    $0x2,%eax
 855f1ef:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
 855f1f6:	29 c2                	sub    %eax,%edx
 855f1f8:	89 c8                	mov    %ecx,%eax
 855f1fa:	89 c1                	mov    %eax,%ecx
 855f1fc:	c1 e1 04             	shl    $0x4,%ecx
 855f1ff:	8d 04 cd 00 00 00 00 	lea    0x0(,%ecx,8),%eax
 855f206:	29 c8                	sub    %ecx,%eax
 855f208:	8d 04 02             	lea    (%edx,%eax,1),%eax
 855f20b:	83 c0 10             	add    $0x10,%eax
 855f20e:	03 45 08             	add    0x8(%ebp),%eax
 855f211:	83 c0 0c             	add    $0xc,%eax
 855f214:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 855f21b:	00 
 855f21c:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 855f220:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 855f227:	00 
 855f228:	89 44 24 04          	mov    %eax,0x4(%esp)
 855f22c:	8b 45 08             	mov    0x8(%ebp),%eax
 855f22f:	89 04 24             	mov    %eax,(%esp)
 855f232:	e8 b7 f5 ff ff       	call   855e7ee <_ZN12CLeagueMatch8addBadgeEP10PlayerInfo15ENUM_BADGE_TYPEPhb>
 855f237:	e9 d5 02 00 00       	jmp    855f511 <_ZN12CLeagueMatch8OnRewardEP8PvP_Roomib+0x9ef>
 855f23c:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 855f23f:	8b 55 e0             	mov    -0x20(%ebp),%edx
 855f242:	89 d0                	mov    %edx,%eax
 855f244:	01 c0                	add    %eax,%eax
 855f246:	01 d0                	add    %edx,%eax
 855f248:	89 ca                	mov    %ecx,%edx
 855f24a:	8d 0c d5 00 00 00 00 	lea    0x0(,%edx,8),%ecx
 855f251:	8d 14 cd 00 00 00 00 	lea    0x0(,%ecx,8),%edx
 855f258:	29 ca                	sub    %ecx,%edx
 855f25a:	01 d0                	add    %edx,%eax
 855f25c:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 855f25f:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 855f262:	2d b0 00 00 00       	sub    $0xb0,%eax
 855f267:	c6 40 0c 00          	movb   $0x0,0xc(%eax)
 855f26b:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 855f26e:	8b 55 e0             	mov    -0x20(%ebp),%edx
 855f271:	89 d0                	mov    %edx,%eax
 855f273:	01 c0                	add    %eax,%eax
 855f275:	01 d0                	add    %edx,%eax
 855f277:	89 ca                	mov    %ecx,%edx
 855f279:	8d 0c d5 00 00 00 00 	lea    0x0(,%edx,8),%ecx
 855f280:	8d 14 cd 00 00 00 00 	lea    0x0(,%ecx,8),%edx
 855f287:	29 ca                	sub    %ecx,%edx
 855f289:	01 d0                	add    %edx,%eax
 855f28b:	8d 7d e8             	lea    -0x18(%ebp),%edi
 855f28e:	8d 04 07             	lea    (%edi,%eax,1),%eax
 855f291:	2d af 00 00 00       	sub    $0xaf,%eax
 855f296:	0f b6 40 0c          	movzbl 0xc(%eax),%eax
 855f29a:	84 c0                	test   %al,%al
 855f29c:	75 37                	jne    855f2d5 <_ZN12CLeagueMatch8OnRewardEP8PvP_Roomib+0x7b3>
 855f29e:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 855f2a1:	8b 55 e0             	mov    -0x20(%ebp),%edx
 855f2a4:	89 d0                	mov    %edx,%eax
 855f2a6:	01 c0                	add    %eax,%eax
 855f2a8:	01 d0                	add    %edx,%eax
 855f2aa:	89 ca                	mov    %ecx,%edx
 855f2ac:	8d 0c d5 00 00 00 00 	lea    0x0(,%edx,8),%ecx
 855f2b3:	8d 14 cd 00 00 00 00 	lea    0x0(,%ecx,8),%edx
 855f2ba:	29 ca                	sub    %ecx,%edx
 855f2bc:	01 d0                	add    %edx,%eax
 855f2be:	8d 55 e8             	lea    -0x18(%ebp),%edx
 855f2c1:	8d 04 02             	lea    (%edx,%eax,1),%eax
 855f2c4:	2d ae 00 00 00       	sub    $0xae,%eax
 855f2c9:	0f b6 40 0c          	movzbl 0xc(%eax),%eax
 855f2cd:	84 c0                	test   %al,%al
 855f2cf:	0f 84 3c 02 00 00    	je     855f511 <_ZN12CLeagueMatch8OnRewardEP8PvP_Roomib+0x9ef>
 855f2d5:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 855f2d8:	8b 45 e0             	mov    -0x20(%ebp),%eax
 855f2db:	8b 5d 08             	mov    0x8(%ebp),%ebx
 855f2de:	c1 e0 02             	shl    $0x2,%eax
 855f2e1:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
 855f2e8:	29 c2                	sub    %eax,%edx
 855f2ea:	89 c8                	mov    %ecx,%eax
 855f2ec:	89 c1                	mov    %eax,%ecx
 855f2ee:	c1 e1 04             	shl    $0x4,%ecx
 855f2f1:	8d 04 cd 00 00 00 00 	lea    0x0(,%ecx,8),%eax
 855f2f8:	29 c8                	sub    %ecx,%eax
 855f2fa:	8d 04 02             	lea    (%edx,%eax,1),%eax
 855f2fd:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 855f300:	83 c0 10             	add    $0x10,%eax
 855f303:	0f b6 40 18          	movzbl 0x18(%eax),%eax
 855f307:	83 f0 01             	xor    $0x1,%eax
 855f30a:	84 c0                	test   %al,%al
 855f30c:	0f 85 f8 01 00 00    	jne    855f50a <_ZN12CLeagueMatch8OnRewardEP8PvP_Roomib+0x9e8>
 855f312:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 855f315:	8b 45 e0             	mov    -0x20(%ebp),%eax
 855f318:	8b 5d 08             	mov    0x8(%ebp),%ebx
 855f31b:	c1 e0 02             	shl    $0x2,%eax
 855f31e:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
 855f325:	29 c2                	sub    %eax,%edx
 855f327:	89 c8                	mov    %ecx,%eax
 855f329:	89 c1                	mov    %eax,%ecx
 855f32b:	c1 e1 04             	shl    $0x4,%ecx
 855f32e:	8d 04 cd 00 00 00 00 	lea    0x0(,%ecx,8),%eax
 855f335:	29 c8                	sub    %ecx,%eax
 855f337:	8d 04 02             	lea    (%edx,%eax,1),%eax
 855f33a:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 855f33d:	83 c0 24             	add    $0x24,%eax
 855f340:	8b 00                	mov    (%eax),%eax
 855f342:	85 c0                	test   %eax,%eax
 855f344:	0f 84 c3 01 00 00    	je     855f50d <_ZN12CLeagueMatch8OnRewardEP8PvP_Roomib+0x9eb>
 855f34a:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 855f34d:	8b 45 e0             	mov    -0x20(%ebp),%eax
 855f350:	8b 5d 08             	mov    0x8(%ebp),%ebx
 855f353:	c1 e0 02             	shl    $0x2,%eax
 855f356:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
 855f35d:	29 c2                	sub    %eax,%edx
 855f35f:	89 c8                	mov    %ecx,%eax
 855f361:	89 c1                	mov    %eax,%ecx
 855f363:	c1 e1 04             	shl    $0x4,%ecx
 855f366:	8d 04 cd 00 00 00 00 	lea    0x0(,%ecx,8),%eax
 855f36d:	29 c8                	sub    %ecx,%eax
 855f36f:	8d 04 02             	lea    (%edx,%eax,1),%eax
 855f372:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 855f375:	83 c0 24             	add    $0x24,%eax
 855f378:	8b 00                	mov    (%eax),%eax
 855f37a:	89 04 24             	mov    %eax,(%esp)
 855f37d:	e8 b0 10 bc ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 855f382:	85 c0                	test   %eax,%eax
 855f384:	0f 94 c0             	sete   %al
 855f387:	84 c0                	test   %al,%al
 855f389:	0f 85 81 01 00 00    	jne    855f510 <_ZN12CLeagueMatch8OnRewardEP8PvP_Roomib+0x9ee>
 855f38f:	8d 9d 28 fe ff ff    	lea    -0x1d8(%ebp),%ebx
 855f395:	b8 00 00 00 00       	mov    $0x0,%eax
 855f39a:	ba 40 00 00 00       	mov    $0x40,%edx
 855f39f:	89 df                	mov    %ebx,%edi
 855f3a1:	89 d1                	mov    %edx,%ecx
 855f3a3:	f3 ab                	rep stos %eax,%es:(%edi)
 855f3a5:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 855f3ac:	00 
 855f3ad:	c7 44 24 08 f4 22 ca 	movl   $0x8ca22f4,0x8(%esp)
 855f3b4:	08 
 855f3b5:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 855f3bc:	00 
 855f3bd:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 855f3c4:	e8 35 64 54 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 855f3c9:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 855f3d0:	00 
 855f3d1:	89 44 24 08          	mov    %eax,0x8(%esp)
 855f3d5:	c7 44 24 04 ff 00 00 	movl   $0xff,0x4(%esp)
 855f3dc:	00 
 855f3dd:	8d 85 28 fe ff ff    	lea    -0x1d8(%ebp),%eax
 855f3e3:	89 04 24             	mov    %eax,(%esp)
 855f3e6:	e8 31 d4 02 00       	call   858c81c <_ZN6OS_API8snprintfEPcjPKcz>
 855f3eb:	8d 45 b0             	lea    -0x50(%ebp),%eax
 855f3ee:	89 04 24             	mov    %eax,(%esp)
 855f3f1:	e8 56 e9 02 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 855f3f6:	c7 44 24 08 0c 00 00 	movl   $0xc,0x8(%esp)
 855f3fd:	00 
 855f3fe:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 855f405:	00 
 855f406:	8d 45 b0             	lea    -0x50(%ebp),%eax
 855f409:	89 04 24             	mov    %eax,(%esp)
 855f40c:	e8 eb c4 b6 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 855f411:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 855f418:	00 
 855f419:	8d 45 b0             	lea    -0x50(%ebp),%eax
 855f41c:	89 04 24             	mov    %eax,(%esp)
 855f41f:	e8 fc c4 b6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 855f424:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 855f42b:	00 
 855f42c:	8d 45 b0             	lea    -0x50(%ebp),%eax
 855f42f:	89 04 24             	mov    %eax,(%esp)
 855f432:	e8 6d aa b7 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 855f437:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 855f43e:	00 
 855f43f:	8d 45 b0             	lea    -0x50(%ebp),%eax
 855f442:	89 04 24             	mov    %eax,(%esp)
 855f445:	e8 d6 c4 b6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 855f44a:	8d 85 28 fe ff ff    	lea    -0x1d8(%ebp),%eax
 855f450:	89 04 24             	mov    %eax,(%esp)
 855f453:	e8 58 ef b1 ff       	call   807e3b0 <strlen@plt>
 855f458:	89 44 24 04          	mov    %eax,0x4(%esp)
 855f45c:	8d 45 b0             	lea    -0x50(%ebp),%eax
 855f45f:	89 04 24             	mov    %eax,(%esp)
 855f462:	e8 d5 c4 b6 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 855f467:	8d 85 28 fe ff ff    	lea    -0x1d8(%ebp),%eax
 855f46d:	89 04 24             	mov    %eax,(%esp)
 855f470:	e8 3b ef b1 ff       	call   807e3b0 <strlen@plt>
 855f475:	89 44 24 08          	mov    %eax,0x8(%esp)
 855f479:	8d 85 28 fe ff ff    	lea    -0x1d8(%ebp),%eax
 855f47f:	89 44 24 04          	mov    %eax,0x4(%esp)
 855f483:	8d 45 b0             	lea    -0x50(%ebp),%eax
 855f486:	89 04 24             	mov    %eax,(%esp)
 855f489:	e8 56 7f c5 ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 855f48e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 855f495:	00 
 855f496:	8d 45 b0             	lea    -0x50(%ebp),%eax
 855f499:	89 04 24             	mov    %eax,(%esp)
 855f49c:	e8 b7 c4 b6 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 855f4a1:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 855f4a4:	8b 45 e0             	mov    -0x20(%ebp),%eax
 855f4a7:	8b 5d 08             	mov    0x8(%ebp),%ebx
 855f4aa:	c1 e0 02             	shl    $0x2,%eax
 855f4ad:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
 855f4b4:	29 c2                	sub    %eax,%edx
 855f4b6:	89 c8                	mov    %ecx,%eax
 855f4b8:	89 c1                	mov    %eax,%ecx
 855f4ba:	c1 e1 04             	shl    $0x4,%ecx
 855f4bd:	8d 04 cd 00 00 00 00 	lea    0x0(,%ecx,8),%eax
 855f4c4:	29 c8                	sub    %ecx,%eax
 855f4c6:	8d 04 02             	lea    (%edx,%eax,1),%eax
 855f4c9:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 855f4cc:	83 c0 24             	add    $0x24,%eax
 855f4cf:	8b 00                	mov    (%eax),%eax
 855f4d1:	8d 55 b0             	lea    -0x50(%ebp),%edx
 855f4d4:	89 54 24 04          	mov    %edx,0x4(%esp)
 855f4d8:	89 04 24             	mov    %eax,(%esp)
 855f4db:	e8 da 90 0e 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 855f4e0:	eb 1b                	jmp    855f4fd <_ZN12CLeagueMatch8OnRewardEP8PvP_Roomib+0x9db>
 855f4e2:	89 d3                	mov    %edx,%ebx
 855f4e4:	89 c6                	mov    %eax,%esi
 855f4e6:	8d 45 b0             	lea    -0x50(%ebp),%eax
 855f4e9:	89 04 24             	mov    %eax,(%esp)
 855f4ec:	e8 8f e9 02 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 855f4f1:	89 f0                	mov    %esi,%eax
 855f4f3:	89 da                	mov    %ebx,%edx
 855f4f5:	89 04 24             	mov    %eax,(%esp)
 855f4f8:	e8 53 42 58 00       	call   8ae3750 <_Unwind_Resume>
 855f4fd:	8d 45 b0             	lea    -0x50(%ebp),%eax
 855f500:	89 04 24             	mov    %eax,(%esp)
 855f503:	e8 78 e9 02 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 855f508:	eb 07                	jmp    855f511 <_ZN12CLeagueMatch8OnRewardEP8PvP_Roomib+0x9ef>
 855f50a:	90                   	nop
 855f50b:	eb 04                	jmp    855f511 <_ZN12CLeagueMatch8OnRewardEP8PvP_Roomib+0x9ef>
 855f50d:	90                   	nop
 855f50e:	eb 01                	jmp    855f511 <_ZN12CLeagueMatch8OnRewardEP8PvP_Roomib+0x9ef>
 855f510:	90                   	nop
 855f511:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 855f515:	0f b6 05 74 bb 3a 09 	movzbl 0x93abb74,%eax
 855f51c:	0f b6 c0             	movzbl %al,%eax
 855f51f:	3b 45 e0             	cmp    -0x20(%ebp),%eax
 855f522:	0f 9f c0             	setg   %al
 855f525:	84 c0                	test   %al,%al
 855f527:	0f 85 2a fb ff ff    	jne    855f057 <_ZN12CLeagueMatch8OnRewardEP8PvP_Roomib+0x535>
 855f52d:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 855f534:	e9 a7 01 00 00       	jmp    855f6e0 <_ZN12CLeagueMatch8OnRewardEP8PvP_Roomib+0xbbe>
 855f539:	8b 45 e0             	mov    -0x20(%ebp),%eax
 855f53c:	8b 4d 08             	mov    0x8(%ebp),%ecx
 855f53f:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
 855f546:	8d 04 d5 00 00 00 00 	lea    0x0(,%edx,8),%eax
 855f54d:	29 d0                	sub    %edx,%eax
 855f54f:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 855f552:	83 e8 80             	sub    $0xffffff80,%eax
 855f555:	0f b6 40 18          	movzbl 0x18(%eax),%eax
 855f559:	84 c0                	test   %al,%al
 855f55b:	0f 84 7b 01 00 00    	je     855f6dc <_ZN12CLeagueMatch8OnRewardEP8PvP_Roomib+0xbba>
 855f561:	8b 45 e0             	mov    -0x20(%ebp),%eax
 855f564:	8b 4d 08             	mov    0x8(%ebp),%ecx
 855f567:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
 855f56e:	8d 04 d5 00 00 00 00 	lea    0x0(,%edx,8),%eax
 855f575:	29 d0                	sub    %edx,%eax
 855f577:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 855f57a:	05 94 00 00 00       	add    $0x94,%eax
 855f57f:	8b 00                	mov    (%eax),%eax
 855f581:	85 c0                	test   %eax,%eax
 855f583:	0f 84 53 01 00 00    	je     855f6dc <_ZN12CLeagueMatch8OnRewardEP8PvP_Roomib+0xbba>
 855f589:	8b 7d c4             	mov    -0x3c(%ebp),%edi
 855f58c:	8b 5d e0             	mov    -0x20(%ebp),%ebx
 855f58f:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 855f592:	8b 45 e0             	mov    -0x20(%ebp),%eax
 855f595:	8b 75 08             	mov    0x8(%ebp),%esi
 855f598:	c1 e0 02             	shl    $0x2,%eax
 855f59b:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
 855f5a2:	29 c2                	sub    %eax,%edx
 855f5a4:	89 c8                	mov    %ecx,%eax
 855f5a6:	89 c1                	mov    %eax,%ecx
 855f5a8:	c1 e1 04             	shl    $0x4,%ecx
 855f5ab:	8d 04 cd 00 00 00 00 	lea    0x0(,%ecx,8),%eax
 855f5b2:	29 c8                	sub    %ecx,%eax
 855f5b4:	8d 04 02             	lea    (%edx,%eax,1),%eax
 855f5b7:	8d 04 06             	lea    (%esi,%eax,1),%eax
 855f5ba:	83 c0 24             	add    $0x24,%eax
 855f5bd:	8b 00                	mov    (%eax),%eax
 855f5bf:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 855f5c6:	00 
 855f5c7:	89 04 24             	mov    %eax,(%esp)
 855f5ca:	e8 79 98 00 00       	call   8568e48 <_ZN5CUser13GetDailyBadgeE15ENUM_BADGE_TYPE>
 855f5cf:	89 c6                	mov    %eax,%esi
 855f5d1:	89 d8                	mov    %ebx,%eax
 855f5d3:	01 c0                	add    %eax,%eax
 855f5d5:	01 d8                	add    %ebx,%eax
 855f5d7:	89 fa                	mov    %edi,%edx
 855f5d9:	8d 0c d5 00 00 00 00 	lea    0x0(,%edx,8),%ecx
 855f5e0:	8d 14 cd 00 00 00 00 	lea    0x0(,%ecx,8),%edx
 855f5e7:	29 ca                	sub    %ecx,%edx
 855f5e9:	01 d0                	add    %edx,%eax
 855f5eb:	8d 55 e8             	lea    -0x18(%ebp),%edx
 855f5ee:	8d 04 02             	lea    (%edx,%eax,1),%eax
 855f5f1:	2d b0 00 00 00       	sub    $0xb0,%eax
 855f5f6:	89 f1                	mov    %esi,%ecx
 855f5f8:	88 08                	mov    %cl,(%eax)
 855f5fa:	8b 7d c4             	mov    -0x3c(%ebp),%edi
 855f5fd:	8b 5d e0             	mov    -0x20(%ebp),%ebx
 855f600:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 855f603:	8b 45 e0             	mov    -0x20(%ebp),%eax
 855f606:	8b 75 08             	mov    0x8(%ebp),%esi
 855f609:	c1 e0 02             	shl    $0x2,%eax
 855f60c:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
 855f613:	29 c2                	sub    %eax,%edx
 855f615:	89 c8                	mov    %ecx,%eax
 855f617:	89 c1                	mov    %eax,%ecx
 855f619:	c1 e1 04             	shl    $0x4,%ecx
 855f61c:	8d 04 cd 00 00 00 00 	lea    0x0(,%ecx,8),%eax
 855f623:	29 c8                	sub    %ecx,%eax
 855f625:	8d 04 02             	lea    (%edx,%eax,1),%eax
 855f628:	8d 04 06             	lea    (%esi,%eax,1),%eax
 855f62b:	83 c0 24             	add    $0x24,%eax
 855f62e:	8b 00                	mov    (%eax),%eax
 855f630:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 855f637:	00 
 855f638:	89 04 24             	mov    %eax,(%esp)
 855f63b:	e8 08 98 00 00       	call   8568e48 <_ZN5CUser13GetDailyBadgeE15ENUM_BADGE_TYPE>
 855f640:	89 c6                	mov    %eax,%esi
 855f642:	89 d8                	mov    %ebx,%eax
 855f644:	01 c0                	add    %eax,%eax
 855f646:	01 d8                	add    %ebx,%eax
 855f648:	89 fa                	mov    %edi,%edx
 855f64a:	8d 0c d5 00 00 00 00 	lea    0x0(,%edx,8),%ecx
 855f651:	8d 14 cd 00 00 00 00 	lea    0x0(,%ecx,8),%edx
 855f658:	29 ca                	sub    %ecx,%edx
 855f65a:	01 d0                	add    %edx,%eax
 855f65c:	8d 7d e8             	lea    -0x18(%ebp),%edi
 855f65f:	8d 04 07             	lea    (%edi,%eax,1),%eax
 855f662:	2d af 00 00 00       	sub    $0xaf,%eax
 855f667:	89 f2                	mov    %esi,%edx
 855f669:	88 10                	mov    %dl,(%eax)
 855f66b:	8b 7d c4             	mov    -0x3c(%ebp),%edi
 855f66e:	8b 5d e0             	mov    -0x20(%ebp),%ebx
 855f671:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 855f674:	8b 45 e0             	mov    -0x20(%ebp),%eax
 855f677:	8b 75 08             	mov    0x8(%ebp),%esi
 855f67a:	c1 e0 02             	shl    $0x2,%eax
 855f67d:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
 855f684:	29 c2                	sub    %eax,%edx
 855f686:	89 c8                	mov    %ecx,%eax
 855f688:	89 c1                	mov    %eax,%ecx
 855f68a:	c1 e1 04             	shl    $0x4,%ecx
 855f68d:	8d 04 cd 00 00 00 00 	lea    0x0(,%ecx,8),%eax
 855f694:	29 c8                	sub    %ecx,%eax
 855f696:	8d 04 02             	lea    (%edx,%eax,1),%eax
 855f699:	8d 04 06             	lea    (%esi,%eax,1),%eax
 855f69c:	83 c0 24             	add    $0x24,%eax
 855f69f:	8b 00                	mov    (%eax),%eax
 855f6a1:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 855f6a8:	00 
 855f6a9:	89 04 24             	mov    %eax,(%esp)
 855f6ac:	e8 97 97 00 00       	call   8568e48 <_ZN5CUser13GetDailyBadgeE15ENUM_BADGE_TYPE>
 855f6b1:	89 c6                	mov    %eax,%esi
 855f6b3:	89 d8                	mov    %ebx,%eax
 855f6b5:	01 c0                	add    %eax,%eax
 855f6b7:	01 d8                	add    %ebx,%eax
 855f6b9:	89 fa                	mov    %edi,%edx
 855f6bb:	8d 0c d5 00 00 00 00 	lea    0x0(,%edx,8),%ecx
 855f6c2:	8d 14 cd 00 00 00 00 	lea    0x0(,%ecx,8),%edx
 855f6c9:	29 ca                	sub    %ecx,%edx
 855f6cb:	01 d0                	add    %edx,%eax
 855f6cd:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 855f6d0:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 855f6d3:	2d ae 00 00 00       	sub    $0xae,%eax
 855f6d8:	89 f2                	mov    %esi,%edx
 855f6da:	88 10                	mov    %dl,(%eax)
 855f6dc:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 855f6e0:	0f b6 05 74 bb 3a 09 	movzbl 0x93abb74,%eax
 855f6e7:	0f b6 c0             	movzbl %al,%eax
 855f6ea:	3b 45 e0             	cmp    -0x20(%ebp),%eax
 855f6ed:	0f 9f c0             	setg   %al
 855f6f0:	84 c0                	test   %al,%al
 855f6f2:	0f 85 41 fe ff ff    	jne    855f539 <_ZN12CLeagueMatch8OnRewardEP8PvP_Roomib+0xa17>
 855f6f8:	83 45 c4 01          	addl   $0x1,-0x3c(%ebp)
 855f6fc:	83 7d c4 01          	cmpl   $0x1,-0x3c(%ebp)
 855f700:	0f 9e c0             	setle  %al
 855f703:	84 c0                	test   %al,%al
 855f705:	0f 85 c8 f8 ff ff    	jne    855efd3 <_ZN12CLeagueMatch8OnRewardEP8PvP_Roomib+0x4b1>
 855f70b:	c7 45 bc 00 00 00 00 	movl   $0x0,-0x44(%ebp)
 855f712:	c7 45 c0 00 00 00 00 	movl   $0x0,-0x40(%ebp)
 855f719:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 855f720:	e9 60 01 00 00       	jmp    855f885 <_ZN12CLeagueMatch8OnRewardEP8PvP_Roomib+0xd63>
 855f725:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 855f72c:	eb 3b                	jmp    855f769 <_ZN12CLeagueMatch8OnRewardEP8PvP_Roomib+0xc47>
 855f72e:	8b 5d c4             	mov    -0x3c(%ebp),%ebx
 855f731:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 855f734:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 855f737:	8b 75 08             	mov    0x8(%ebp),%esi
 855f73a:	c1 e0 02             	shl    $0x2,%eax
 855f73d:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
 855f744:	29 c2                	sub    %eax,%edx
 855f746:	89 c8                	mov    %ecx,%eax
 855f748:	89 c1                	mov    %eax,%ecx
 855f74a:	c1 e1 04             	shl    $0x4,%ecx
 855f74d:	8d 04 cd 00 00 00 00 	lea    0x0(,%ecx,8),%eax
 855f754:	29 c8                	sub    %ecx,%eax
 855f756:	8d 04 02             	lea    (%edx,%eax,1),%eax
 855f759:	8d 04 06             	lea    (%esi,%eax,1),%eax
 855f75c:	83 c0 20             	add    $0x20,%eax
 855f75f:	8b 00                	mov    (%eax),%eax
 855f761:	89 44 9d bc          	mov    %eax,-0x44(%ebp,%ebx,4)
 855f765:	83 45 c4 01          	addl   $0x1,-0x3c(%ebp)
 855f769:	83 7d c4 01          	cmpl   $0x1,-0x3c(%ebp)
 855f76d:	0f 9e c0             	setle  %al
 855f770:	84 c0                	test   %al,%al
 855f772:	75 ba                	jne    855f72e <_ZN12CLeagueMatch8OnRewardEP8PvP_Roomib+0xc0c>
 855f774:	a1 6c bb 3a 09       	mov    0x93abb6c,%eax
 855f779:	89 44 24 0c          	mov    %eax,0xc(%esp)
 855f77d:	8b 45 c8             	mov    -0x38(%ebp),%eax
 855f780:	89 44 24 08          	mov    %eax,0x8(%esp)
 855f784:	8d 45 bc             	lea    -0x44(%ebp),%eax
 855f787:	83 c0 04             	add    $0x4,%eax
 855f78a:	89 44 24 04          	mov    %eax,0x4(%esp)
 855f78e:	8d 45 bc             	lea    -0x44(%ebp),%eax
 855f791:	89 04 24             	mov    %eax,(%esp)
 855f794:	e8 08 e5 ee ff       	call   844dca1 <_ZN10CEloRating4calcERfS0_22ENUM_ELO_RATING_SYSTEMi>
 855f799:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 855f7a0:	e9 cd 00 00 00       	jmp    855f872 <_ZN12CLeagueMatch8OnRewardEP8PvP_Roomib+0xd50>
 855f7a5:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 855f7a8:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 855f7ab:	8b 5d 08             	mov    0x8(%ebp),%ebx
 855f7ae:	c1 e0 02             	shl    $0x2,%eax
 855f7b1:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
 855f7b8:	29 c2                	sub    %eax,%edx
 855f7ba:	89 c8                	mov    %ecx,%eax
 855f7bc:	89 c1                	mov    %eax,%ecx
 855f7be:	c1 e1 04             	shl    $0x4,%ecx
 855f7c1:	8d 04 cd 00 00 00 00 	lea    0x0(,%ecx,8),%eax
 855f7c8:	29 c8                	sub    %ecx,%eax
 855f7ca:	8d 04 02             	lea    (%edx,%eax,1),%eax
 855f7cd:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 855f7d0:	83 c0 10             	add    $0x10,%eax
 855f7d3:	0f b6 40 18          	movzbl 0x18(%eax),%eax
 855f7d7:	84 c0                	test   %al,%al
 855f7d9:	74 43                	je     855f81e <_ZN12CLeagueMatch8OnRewardEP8PvP_Roomib+0xcfc>
 855f7db:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 855f7de:	8b 5c 85 bc          	mov    -0x44(%ebp,%eax,4),%ebx
 855f7e2:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 855f7e5:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 855f7e8:	8b 75 08             	mov    0x8(%ebp),%esi
 855f7eb:	c1 e0 02             	shl    $0x2,%eax
 855f7ee:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
 855f7f5:	29 c2                	sub    %eax,%edx
 855f7f7:	89 c8                	mov    %ecx,%eax
 855f7f9:	89 c1                	mov    %eax,%ecx
 855f7fb:	c1 e1 04             	shl    $0x4,%ecx
 855f7fe:	8d 04 cd 00 00 00 00 	lea    0x0(,%ecx,8),%eax
 855f805:	29 c8                	sub    %ecx,%eax
 855f807:	8d 04 02             	lea    (%edx,%eax,1),%eax
 855f80a:	8d 04 06             	lea    (%esi,%eax,1),%eax
 855f80d:	83 c0 24             	add    $0x24,%eax
 855f810:	8b 00                	mov    (%eax),%eax
 855f812:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 855f816:	89 04 24             	mov    %eax,(%esp)
 855f819:	e8 7e 96 00 00       	call   8568e9c <_ZN5CUser12UpdateRatingEf>
 855f81e:	8b 75 c4             	mov    -0x3c(%ebp),%esi
 855f821:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
 855f824:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 855f827:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 855f82a:	8b 7d 08             	mov    0x8(%ebp),%edi
 855f82d:	c1 e0 02             	shl    $0x2,%eax
 855f830:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
 855f837:	29 c2                	sub    %eax,%edx
 855f839:	89 c8                	mov    %ecx,%eax
 855f83b:	89 c1                	mov    %eax,%ecx
 855f83d:	c1 e1 04             	shl    $0x4,%ecx
 855f840:	8d 04 cd 00 00 00 00 	lea    0x0(,%ecx,8),%eax
 855f847:	29 c8                	sub    %ecx,%eax
 855f849:	8d 04 02             	lea    (%edx,%eax,1),%eax
 855f84c:	8d 04 07             	lea    (%edi,%eax,1),%eax
 855f84f:	83 c0 1c             	add    $0x1c,%eax
 855f852:	8b 08                	mov    (%eax),%ecx
 855f854:	89 f0                	mov    %esi,%eax
 855f856:	8d 14 00             	lea    (%eax,%eax,1),%edx
 855f859:	8d 04 d5 00 00 00 00 	lea    0x0(,%edx,8),%eax
 855f860:	29 d0                	sub    %edx,%eax
 855f862:	01 d8                	add    %ebx,%eax
 855f864:	83 c0 0c             	add    $0xc,%eax
 855f867:	89 8c 85 30 ff ff ff 	mov    %ecx,-0xd0(%ebp,%eax,4)
 855f86e:	83 45 c4 01          	addl   $0x1,-0x3c(%ebp)
 855f872:	83 7d c4 01          	cmpl   $0x1,-0x3c(%ebp)
 855f876:	0f 9e c0             	setle  %al
 855f879:	84 c0                	test   %al,%al
 855f87b:	0f 85 24 ff ff ff    	jne    855f7a5 <_ZN12CLeagueMatch8OnRewardEP8PvP_Roomib+0xc83>
 855f881:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 855f885:	0f b6 05 74 bb 3a 09 	movzbl 0x93abb74,%eax
 855f88c:	0f b6 c0             	movzbl %al,%eax
 855f88f:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 855f892:	0f 97 c0             	seta   %al
 855f895:	84 c0                	test   %al,%al
 855f897:	0f 85 88 fe ff ff    	jne    855f725 <_ZN12CLeagueMatch8OnRewardEP8PvP_Roomib+0xc03>
 855f89d:	0f b6 05 74 bb 3a 09 	movzbl 0x93abb74,%eax
 855f8a4:	3c 01                	cmp    $0x1,%al
 855f8a6:	74 24                	je     855f8cc <_ZN12CLeagueMatch8OnRewardEP8PvP_Roomib+0xdaa>
 855f8a8:	8d 95 28 ff ff ff    	lea    -0xd8(%ebp),%edx
 855f8ae:	a1 3c be 40 09       	mov    0x940be3c,%eax
 855f8b3:	c7 44 24 08 80 00 00 	movl   $0x80,0x8(%esp)
 855f8ba:	00 
 855f8bb:	89 54 24 04          	mov    %edx,0x4(%esp)
 855f8bf:	89 04 24             	mov    %eax,(%esp)
 855f8c2:	e8 0b 26 f1 ff       	call   8471ed2 <_ZN18CSchoolServerProxy10SendPacketEPci>
 855f8c7:	e9 d3 00 00 00       	jmp    855f99f <_ZN12CLeagueMatch8OnRewardEP8PvP_Roomib+0xe7d>
 855f8cc:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 855f8d1:	c7 44 24 08 a8 04 00 	movl   $0x4a8,0x8(%esp)
 855f8d8:	00 
 855f8d9:	c7 44 24 04 62 22 ca 	movl   $0x8ca2262,0x4(%esp)
 855f8e0:	08 
 855f8e1:	89 04 24             	mov    %eax,(%esp)
 855f8e4:	e8 9d 01 d3 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 855f8e9:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 855f8f0:	00 
 855f8f1:	89 44 24 04          	mov    %eax,0x4(%esp)
 855f8f5:	8d 45 a8             	lea    -0x58(%ebp),%eax
 855f8f8:	89 04 24             	mov    %eax,(%esp)
 855f8fb:	e8 26 93 b6 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 855f900:	8d 45 a8             	lea    -0x58(%ebp),%eax
 855f903:	89 04 24             	mov    %eax,(%esp)
 855f906:	e8 3b 93 b6 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 855f90b:	c7 44 24 04 36 01 00 	movl   $0x136,0x4(%esp)
 855f912:	00 
 855f913:	89 04 24             	mov    %eax,(%esp)
 855f916:	e8 3b 93 b6 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 855f91b:	8d 45 a8             	lea    -0x58(%ebp),%eax
 855f91e:	89 04 24             	mov    %eax,(%esp)
 855f921:	e8 20 93 b6 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 855f926:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 855f92d:	ff 
 855f92e:	89 04 24             	mov    %eax,(%esp)
 855f931:	e8 20 93 b6 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 855f936:	8d 45 a8             	lea    -0x58(%ebp),%eax
 855f939:	89 04 24             	mov    %eax,(%esp)
 855f93c:	e8 0d 93 b6 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 855f941:	c7 44 24 08 80 00 00 	movl   $0x80,0x8(%esp)
 855f948:	00 
 855f949:	8d 95 28 ff ff ff    	lea    -0xd8(%ebp),%edx
 855f94f:	89 54 24 04          	mov    %edx,0x4(%esp)
 855f953:	89 04 24             	mov    %eax,(%esp)
 855f956:	e8 f7 ec b7 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 855f95b:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 855f960:	8d 55 a8             	lea    -0x58(%ebp),%edx
 855f963:	89 54 24 08          	mov    %edx,0x8(%esp)
 855f967:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 855f96e:	00 
 855f96f:	89 04 24             	mov    %eax,(%esp)
 855f972:	e8 67 16 01 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 855f977:	eb 1b                	jmp    855f994 <_ZN12CLeagueMatch8OnRewardEP8PvP_Roomib+0xe72>
 855f979:	89 d3                	mov    %edx,%ebx
 855f97b:	89 c6                	mov    %eax,%esi
 855f97d:	8d 45 a8             	lea    -0x58(%ebp),%eax
 855f980:	89 04 24             	mov    %eax,(%esp)
 855f983:	e8 4a cf 0b 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 855f988:	89 f0                	mov    %esi,%eax
 855f98a:	89 da                	mov    %ebx,%edx
 855f98c:	89 04 24             	mov    %eax,(%esp)
 855f98f:	e8 bc 3d 58 00       	call   8ae3750 <_Unwind_Resume>
 855f994:	8d 45 a8             	lea    -0x58(%ebp),%eax
 855f997:	89 04 24             	mov    %eax,(%esp)
 855f99a:	e8 33 cf 0b 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 855f99f:	81 c4 fc 01 00 00    	add    $0x1fc,%esp
 855f9a5:	5b                   	pop    %ebx
 855f9a6:	5e                   	pop    %esi
 855f9a7:	5f                   	pop    %edi
 855f9a8:	5d                   	pop    %ebp
 855f9a9:	c3                   	ret

```

```c
// CLeagueMatch::OnReward @ 0x855eb22

/* WARNING: Type propagation algorithm not settling */
/* CLeagueMatch::OnReward(PvP_Room*, int, bool) */

void __thiscall
CLeagueMatch::OnReward(CLeagueMatch *this,PvP_Room *param_1,int param_2,bool param_3)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  char *pcVar5;
  size_t sVar6;
  Stream *pSVar7;
  CStreamGuard *pCVar8;
  byte bVar9;
  char local_1dc [256];
  Packet_PvPResult local_dc [8];
  undefined1 auStack_d4 [6];
  undefined1 local_ce;
  byte local_cd;
  undefined1 auStack_cc [12];
  char acStack_c0 [12];
  uint auStack_b4 [11];
  undefined1 auStack_87 [43];
  CStreamGuard local_5c [8];
  PacketGuard local_54 [12];
  float local_48 [2];
  int local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  uint local_20;
  
  bVar9 = 0;
  Packet_PvPResult::Packet_PvPResult(local_dc);
  for (local_40 = 0; local_40 < 2; local_40 = local_40 + 1) {
    for (local_38 = 0; local_38 < (int)(uint)nPlayerCountPerOneTeam_; local_38 = local_38 + 1) {
      for (local_34 = 0; local_34 < 3; local_34 = local_34 + 1) {
        auStack_cc[local_34 + local_38 * 3 + local_40 * 0x38] =
             (char)*(undefined2 *)
                    (this + (local_38 * 0xe + local_40 * 0x38 + local_34 + 0x10) * 2 + 0x10);
        acStack_c0[local_34 + local_38 * 3 + local_40 * 0x38] = '\0';
      }
    }
  }
  if (param_3) {
    local_3c = 1;
    for (local_30 = 0; local_30 < (int)(uint)nPlayerCountPerOneTeam_; local_30 = local_30 + 1) {
      acStack_c0[local_30 * 3 + 1] = '\0';
      addBadge(this,this + local_30 * 0x1c + 0x1c,2,acStack_c0 + local_30 * 3 + 2,0);
      auStack_87[local_30 * 3] = 0;
      addBadge(this,this + local_30 * 0x1c + 0x8c,2,auStack_87 + local_30 * 3 + 1,0);
    }
  }
  else if (param_2 == 1) {
    local_3c = 2;
    for (local_2c = 0; local_2c < (int)(uint)nPlayerCountPerOneTeam_; local_2c = local_2c + 1) {
      addBadge(this,this + local_2c * 0x1c + 0x1c,1,acStack_c0 + local_2c * 3 + 1,0);
      acStack_c0[local_2c * 3 + 2] = '\0';
      auStack_87[local_2c * 3] = 0;
      addBadge(this,this + local_2c * 0x1c + 0x8c,2,auStack_87 + local_2c * 3 + 1,0);
    }
  }
  else {
    local_3c = 0;
    for (local_28 = 0; local_28 < (int)(uint)nPlayerCountPerOneTeam_; local_28 = local_28 + 1) {
      acStack_c0[local_28 * 3 + 1] = '\0';
      addBadge(this,this + local_28 * 0x1c + 0x1c,2,acStack_c0 + local_28 * 3 + 2,0);
      addBadge(this,this + local_28 * 0x1c + 0x8c,1,auStack_87 + local_28 * 3,0);
      auStack_87[local_28 * 3 + 1] = 0;
    }
  }
  auStack_d4._2_4_ = PvPGlobalEnvironmentVariable::school_match_elo_k2_;
  local_ce = (char)local_3c;
  local_cd = nPlayerCountPerOneTeam_;
  for (local_40 = 0; local_40 < 2; local_40 = local_40 + 1) {
    for (local_24 = 0; local_24 < (int)(uint)nPlayerCountPerOneTeam_; local_24 = local_24 + 1) {
      *(undefined4 *)(auStack_d4 + (local_40 * 0xe + local_24 + 8) * 4) =
           *(undefined4 *)(this + local_24 * 0x1c + local_40 * 0x70 + 0x2c);
    }
    for (local_24 = 0; local_24 < (int)(uint)nPlayerCountPerOneTeam_; local_24 = local_24 + 1) {
      cVar2 = _getSameSchool(this,auStack_b4 + local_40 * 0xe,local_24,(uint)nPlayerCountPerOneTeam_
                             ,*(uint *)(auStack_d4 + (local_40 * 0xe + local_24 + 8) * 4));
      if (cVar2 == '\0') {
        acStack_c0[local_24 * 3 + local_40 * 0x38] = '\0';
        if ((((acStack_c0[local_24 * 3 + local_40 * 0x38 + 1] != '\0') ||
             (acStack_c0[local_24 * 3 + local_40 * 0x38 + 2] != '\0')) &&
            (this[local_24 * 0x1c + local_40 * 0x70 + 0x28] == (CLeagueMatch)0x1)) &&
           ((*(int *)(this + local_24 * 0x1c + local_40 * 0x70 + 0x24) != 0 &&
            (iVar4 = CUserCharacInfo::getCurCharacR
                               (*(CUserCharacInfo **)
                                 (this + local_24 * 0x1c + local_40 * 0x70 + 0x24)), iVar4 != 0))))
        {
          pcVar5 = local_1dc;
          for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
            pcVar5[0] = '\0';
            pcVar5[1] = '\0';
            pcVar5[2] = '\0';
            pcVar5[3] = '\0';
            pcVar5 = pcVar5 + ((uint)bVar9 * -2 + 1) * 4;
          }
          pcVar5 = (char *)RDARScriptStringManager::findString
                                     ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                      "school_green_badge_msg",(bool *)0x0);
          OS_API::snprintf(local_1dc,0xff,pcVar5,1);
          PacketGuard::PacketGuard(local_54);
                    /* try { // try from 0855f40c to 0855f4df has its CatchHandler @ 0855f4e2 */
          InterfacePacketBuf::put_header((InterfacePacketBuf *)local_54,0,0xc);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_54,0);
          InterfacePacketBuf::put_short((InterfacePacketBuf *)local_54,0);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_54,0);
          sVar6 = strlen(local_1dc);
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_54,sVar6);
          sVar6 = strlen(local_1dc);
          InterfacePacketBuf::put_str((InterfacePacketBuf *)local_54,local_1dc,sVar6);
          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_54,true);
          CUser::Send(*(CUser **)(this + local_24 * 0x1c + local_40 * 0x70 + 0x24),local_54);
          PacketGuard::~PacketGuard(local_54);
        }
      }
      else if ((acStack_c0[local_24 * 3 + local_40 * 0x38 + 1] == '\0') &&
              (acStack_c0[local_24 * 3 + local_40 * 0x38 + 2] == '\0')) {
        addBadge(this,this + local_24 * 0x1c + local_40 * 0x70 + 0x1c,0,
                 acStack_c0 + local_24 * 3 + local_40 * 0x38,0);
      }
      else {
        addBadge(this,this + local_24 * 0x1c + local_40 * 0x70 + 0x1c,0,
                 acStack_c0 + local_24 * 3 + local_40 * 0x38,1);
      }
    }
    for (local_24 = 0; iVar1 = local_24, iVar4 = local_40,
        local_24 < (int)(uint)nPlayerCountPerOneTeam_; local_24 = local_24 + 1) {
      if ((this[local_24 * 0x1c + 0x98] != (CLeagueMatch)0x0) &&
         (*(int *)(this + local_24 * 0x1c + 0x94) != 0)) {
        uVar3 = CUser::GetDailyBadge(*(CUser **)(this + local_24 * 0x1c + local_40 * 0x70 + 0x24),0)
        ;
        auStack_cc[iVar1 * 3 + iVar4 * 0x38] = uVar3;
        iVar1 = local_24;
        iVar4 = local_40;
        uVar3 = CUser::GetDailyBadge(*(CUser **)(this + local_24 * 0x1c + local_40 * 0x70 + 0x24),1)
        ;
        auStack_cc[iVar1 * 3 + iVar4 * 0x38 + 1] = uVar3;
        iVar1 = local_24;
        iVar4 = local_40;
        uVar3 = CUser::GetDailyBadge(*(CUser **)(this + local_24 * 0x1c + local_40 * 0x70 + 0x24),2)
        ;
        auStack_cc[iVar1 * 3 + iVar4 * 0x38 + 2] = uVar3;
      }
    }
  }
  local_48[0] = 0.0;
  local_48[1] = 0.0;
  for (local_20 = 0; local_20 < nPlayerCountPerOneTeam_; local_20 = local_20 + 1) {
    for (local_40 = 0; local_40 < 2; local_40 = local_40 + 1) {
      local_48[local_40] = *(float *)(this + local_20 * 0x1c + local_40 * 0x70 + 0x20);
    }
    CEloRating::calc(local_48,local_48 + 1,local_3c,
                     PvPGlobalEnvironmentVariable::school_match_elo_k_);
    for (local_40 = 0; local_40 < 2; local_40 = local_40 + 1) {
      if (this[local_20 * 0x1c + local_40 * 0x70 + 0x28] != (CLeagueMatch)0x0) {
        CUser::UpdateRating(*(CUser **)(this + local_20 * 0x1c + local_40 * 0x70 + 0x24),
                            local_48[local_40]);
      }
      *(undefined4 *)(auStack_d4 + (local_40 * 0xe + local_20 + 0xc) * 4) =
           *(undefined4 *)(this + local_20 * 0x1c + local_40 * 0x70 + 0x1c);
    }
  }
  if (nPlayerCountPerOneTeam_ == 1) {
    pSVar7 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"MatchingSystem.cpp",0x4a8);
    CStreamGuard::CStreamGuard(local_5c,pSVar7,true);
    pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_5c);
                    /* try { // try from 0855f916 to 0855f976 has its CatchHandler @ 0855f979 */
    CStreamGuard::operator<<(pCVar8,0x136);
    pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_5c);
    CStreamGuard::operator<<(pCVar8,-1);
    pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_5c);
    CStreamGuard::put_binary(pCVar8,local_dc,0x80);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_5c);
    CStreamGuard::~CStreamGuard(local_5c);
  }
  else {
    CSchoolServerProxy::SendPacket(GlobalData::s_school_proxy,(char *)local_dc,0x80);
  }
  return;
}

```

---

## OnStartFight

```asm
// === 0855e21c CLeagueMatch::OnStartFight  [0x0855e21c-0x855e22b] ===
 855e21c:	55                   	push   %ebp
 855e21d:	89 e5                	mov    %esp,%ebp
 855e21f:	8b 45 08             	mov    0x8(%ebp),%eax
 855e222:	c7 40 04 05 00 00 00 	movl   $0x5,0x4(%eax)
 855e229:	5d                   	pop    %ebp
 855e22a:	c3                   	ret
 855e22b:	90                   	nop

```

```c
// CLeagueMatch::OnStartFight @ 0x855e21c

/* CLeagueMatch::OnStartFight() */

void __thiscall CLeagueMatch::OnStartFight(CLeagueMatch *this)

{
  *(undefined4 *)(this + 4) = 5;
  return;
}

```

---

## OnWalkOut

```asm
// === 0855e4c4 CLeagueMatch::OnWalkOut  [0x0855e4c4-0x855e529] ===
 855e4c4:	55                   	push   %ebp
 855e4c5:	89 e5                	mov    %esp,%ebp
 855e4c7:	83 ec 38             	sub    $0x38,%esp
 855e4ca:	8b 45 10             	mov    0x10(%ebp),%eax
 855e4cd:	89 44 24 04          	mov    %eax,0x4(%esp)
 855e4d1:	8b 45 0c             	mov    0xc(%ebp),%eax
 855e4d4:	89 04 24             	mov    %eax,(%esp)
 855e4d7:	e8 96 ad 07 00       	call   85d9272 <_ZN8PvP_Room8get_teamEi>
 855e4dc:	89 45 f0             	mov    %eax,-0x10(%ebp)
 855e4df:	8b 45 10             	mov    0x10(%ebp),%eax
 855e4e2:	89 44 24 04          	mov    %eax,0x4(%esp)
 855e4e6:	8b 45 0c             	mov    0xc(%ebp),%eax
 855e4e9:	89 04 24             	mov    %eax,(%esp)
 855e4ec:	e8 2d ad 07 00       	call   85d921e <_ZN8PvP_Room13get_user_seatEi>
 855e4f1:	89 45 f4             	mov    %eax,-0xc(%ebp)
 855e4f4:	8b 45 08             	mov    0x8(%ebp),%eax
 855e4f7:	8b 00                	mov    (%eax),%eax
 855e4f9:	83 c0 2c             	add    $0x2c,%eax
 855e4fc:	8b 08                	mov    (%eax),%ecx
 855e4fe:	8b 45 f0             	mov    -0x10(%ebp),%eax
 855e501:	8b 55 10             	mov    0x10(%ebp),%edx
 855e504:	89 54 24 10          	mov    %edx,0x10(%esp)
 855e508:	89 44 24 0c          	mov    %eax,0xc(%esp)
 855e50c:	8b 45 0c             	mov    0xc(%ebp),%eax
 855e50f:	89 44 24 08          	mov    %eax,0x8(%esp)
 855e513:	8b 45 f4             	mov    -0xc(%ebp),%eax
 855e516:	89 44 24 04          	mov    %eax,0x4(%esp)
 855e51a:	8b 45 08             	mov    0x8(%ebp),%eax
 855e51d:	89 04 24             	mov    %eax,(%esp)
 855e520:	ff d1                	call   *%ecx
 855e522:	b8 01 00 00 00       	mov    $0x1,%eax
 855e527:	c9                   	leave
 855e528:	c3                   	ret
 855e529:	90                   	nop

```

```c
// CLeagueMatch::OnWalkOut @ 0x855e4c4

/* CLeagueMatch::OnWalkOut(PvP_Room*, int) */

undefined4 __thiscall CLeagueMatch::OnWalkOut(CLeagueMatch *this,PvP_Room *param_1,int param_2)

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
// === 0855d096 CLeagueMatch::RequestMap  [0x0855d096-0x855d0bb] ===
 855d096:	55                   	push   %ebp
 855d097:	89 e5                	mov    %esp,%ebp
 855d099:	8b 45 0c             	mov    0xc(%ebp),%eax
 855d09c:	66 c7 00 03 00       	movw   $0x3,(%eax)
 855d0a1:	8b 45 10             	mov    0x10(%ebp),%eax
 855d0a4:	8b 00                	mov    (%eax),%eax
 855d0a6:	83 f8 06             	cmp    $0x6,%eax
 855d0a9:	74 0f                	je     855d0ba <_ZN12CLeagueMatch10RequestMapERsR15PVP_BATTLE_MODE+0x24>
 855d0ab:	0f b6 05 75 bb 3a 09 	movzbl 0x93abb75,%eax
 855d0b2:	0f b6 d0             	movzbl %al,%edx
 855d0b5:	8b 45 10             	mov    0x10(%ebp),%eax
 855d0b8:	89 10                	mov    %edx,(%eax)
 855d0ba:	5d                   	pop    %ebp
 855d0bb:	c3                   	ret

```

```c
// CLeagueMatch::RequestMap @ 0x855d096

/* CLeagueMatch::RequestMap(short&, PVP_BATTLE_MODE&) */

void __thiscall CLeagueMatch::RequestMap(CLeagueMatch *this,short *param_1,PVP_BATTLE_MODE *param_2)

{
  *param_1 = 3;
  if (*(int *)param_2 != 6) {
    *(uint *)param_2 = (uint)nBattleMode_;
  }
  return;
}

```

---

## SetMatchAble

```asm
// === 0855d07e CLeagueMatch::SetMatchAble  [0x0855d07e-0x855d095] ===
 855d07e:	55                   	push   %ebp
 855d07f:	89 e5                	mov    %esp,%ebp
 855d081:	83 ec 04             	sub    $0x4,%esp
 855d084:	8b 45 08             	mov    0x8(%ebp),%eax
 855d087:	88 45 fc             	mov    %al,-0x4(%ebp)
 855d08a:	0f b6 45 fc          	movzbl -0x4(%ebp),%eax
 855d08e:	a2 60 e0 43 09       	mov    %al,0x943e060
 855d093:	c9                   	leave
 855d094:	c3                   	ret
 855d095:	90                   	nop

```

```c
// CLeagueMatch::SetMatchAble @ 0x855d07e

/* CLeagueMatch::SetMatchAble(bool) */

void CLeagueMatch::SetMatchAble(bool param_1)

{
  bMatchable_ = param_1;
  return;
}

```

---

## SetPlayCountPerOneTeam

```asm
// === 0855d070 CLeagueMatch::SetPlayCountPerOneTeam  [0x0855d070-0x855d07d] ===
 855d070:	55                   	push   %ebp
 855d071:	89 e5                	mov    %esp,%ebp
 855d073:	8b 45 08             	mov    0x8(%ebp),%eax
 855d076:	a2 74 bb 3a 09       	mov    %al,0x93abb74
 855d07b:	5d                   	pop    %ebp
 855d07c:	c3                   	ret
 855d07d:	90                   	nop

```

```c
// CLeagueMatch::SetPlayCountPerOneTeam @ 0x855d070

/* CLeagueMatch::SetPlayCountPerOneTeam(unsigned int) */

void CLeagueMatch::SetPlayCountPerOneTeam(uint param_1)

{
  nPlayerCountPerOneTeam_ = (char)param_1;
  return;
}

```

---

## _BackupRoomInfo

```asm
// === 0855d554 CLeagueMatch::_BackupRoomInfo  [0x0855d554-0x855d571] ===
 855d554:	55                   	push   %ebp
 855d555:	89 e5                	mov    %esp,%ebp
 855d557:	83 ec 18             	sub    $0x18,%esp
 855d55a:	8b 45 08             	mov    0x8(%ebp),%eax
 855d55d:	83 c0 08             	add    $0x8,%eax
 855d560:	89 44 24 04          	mov    %eax,0x4(%esp)
 855d564:	8b 45 0c             	mov    0xc(%ebp),%eax
 855d567:	89 04 24             	mov    %eax,(%esp)
 855d56a:	e8 27 bd 07 00       	call   85d9296 <_ZN8PvP_Room13get_room_infoEP13PVP_ROOM_INFO>
 855d56f:	c9                   	leave
 855d570:	c3                   	ret
 855d571:	90                   	nop

```

```c
// CLeagueMatch::_BackupRoomInfo @ 0x855d554

/* CLeagueMatch::_BackupRoomInfo(PvP_Room*) */

void __thiscall CLeagueMatch::_BackupRoomInfo(CLeagueMatch *this,PvP_Room *param_1)

{
  PvP_Room::get_room_info(param_1,(PVP_ROOM_INFO *)(this + 8));
  return;
}

```

---

## _CheckMatchable

```asm
// === 0855da56 CLeagueMatch::_CheckMatchable  [0x0855da56-0x855db57] ===
 855da56:	55                   	push   %ebp
 855da57:	89 e5                	mov    %esp,%ebp
 855da59:	83 ec 38             	sub    $0x38,%esp
 855da5c:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 855da63:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 855da6a:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 855da71:	e9 9f 00 00 00       	jmp    855db15 <_ZNK12CLeagueMatch15_CheckMatchableEP8PvP_Room+0xbf>
 855da76:	8b 45 f0             	mov    -0x10(%ebp),%eax
 855da79:	89 44 24 04          	mov    %eax,0x4(%esp)
 855da7d:	8b 45 0c             	mov    0xc(%ebp),%eax
 855da80:	89 04 24             	mov    %eax,(%esp)
 855da83:	e8 ea b7 07 00       	call   85d9272 <_ZN8PvP_Room8get_teamEi>
 855da88:	83 f8 03             	cmp    $0x3,%eax
 855da8b:	0f 94 c0             	sete   %al
 855da8e:	84 c0                	test   %al,%al
 855da90:	74 06                	je     855da98 <_ZNK12CLeagueMatch15_CheckMatchableEP8PvP_Room+0x42>
 855da92:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 855da96:	eb 79                	jmp    855db11 <_ZNK12CLeagueMatch15_CheckMatchableEP8PvP_Room+0xbb>
 855da98:	8b 45 f0             	mov    -0x10(%ebp),%eax
 855da9b:	89 44 24 04          	mov    %eax,0x4(%esp)
 855da9f:	8b 45 0c             	mov    0xc(%ebp),%eax
 855daa2:	89 04 24             	mov    %eax,(%esp)
 855daa5:	e8 74 b7 07 00       	call   85d921e <_ZN8PvP_Room13get_user_seatEi>
 855daaa:	89 45 f4             	mov    %eax,-0xc(%ebp)
 855daad:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 855dab1:	74 5d                	je     855db10 <_ZNK12CLeagueMatch15_CheckMatchableEP8PvP_Room+0xba>
 855dab3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 855dab6:	89 04 24             	mov    %eax,(%esp)
 855dab9:	e8 44 23 cd ff       	call   822fe02 <_ZN5CUser11GetSchoolNoEv>
 855dabe:	85 c0                	test   %eax,%eax
 855dac0:	0f 94 c0             	sete   %al
 855dac3:	84 c0                	test   %al,%al
 855dac5:	74 4a                	je     855db11 <_ZNK12CLeagueMatch15_CheckMatchableEP8PvP_Room+0xbb>
 855dac7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 855daca:	89 04 24             	mov    %eax,(%esp)
 855dacd:	e8 30 23 cd ff       	call   822fe02 <_ZN5CUser11GetSchoolNoEv>
 855dad2:	89 44 24 18          	mov    %eax,0x18(%esp)
 855dad6:	8b 45 ec             	mov    -0x14(%ebp),%eax
 855dad9:	89 44 24 14          	mov    %eax,0x14(%esp)
 855dadd:	c7 44 24 10 78 22 ca 	movl   $0x8ca2278,0x10(%esp)
 855dae4:	08 
 855dae5:	c7 44 24 0c 57 02 00 	movl   $0x257,0xc(%esp)
 855daec:	00 
 855daed:	c7 44 24 08 20 3b ca 	movl   $0x8ca3b20,0x8(%esp)
 855daf4:	08 
 855daf5:	c7 44 24 04 62 22 ca 	movl   $0x8ca2262,0x4(%esp)
 855dafc:	08 
 855dafd:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 855db04:	e8 01 61 57 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 855db09:	b8 16 00 00 00       	mov    $0x16,%eax
 855db0e:	eb 46                	jmp    855db56 <_ZNK12CLeagueMatch15_CheckMatchableEP8PvP_Room+0x100>
 855db10:	90                   	nop
 855db11:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 855db15:	83 7d f0 07          	cmpl   $0x7,-0x10(%ebp)
 855db19:	0f 9e c0             	setle  %al
 855db1c:	84 c0                	test   %al,%al
 855db1e:	0f 85 52 ff ff ff    	jne    855da76 <_ZNK12CLeagueMatch15_CheckMatchableEP8PvP_Room+0x20>
 855db24:	8b 45 08             	mov    0x8(%ebp),%eax
 855db27:	83 c0 1c             	add    $0x1c,%eax
 855db2a:	89 04 24             	mov    %eax,(%esp)
 855db2d:	e8 f4 f1 ff ff       	call   855cd26 <_ZNK8TeamInfo4sizeEv>
 855db32:	89 c2                	mov    %eax,%edx
 855db34:	2b 55 e8             	sub    -0x18(%ebp),%edx
 855db37:	0f b6 05 74 bb 3a 09 	movzbl 0x93abb74,%eax
 855db3e:	0f b6 c0             	movzbl %al,%eax
 855db41:	39 c2                	cmp    %eax,%edx
 855db43:	0f 95 c0             	setne  %al
 855db46:	84 c0                	test   %al,%al
 855db48:	74 07                	je     855db51 <_ZNK12CLeagueMatch15_CheckMatchableEP8PvP_Room+0xfb>
 855db4a:	b8 16 00 00 00       	mov    $0x16,%eax
 855db4f:	eb 05                	jmp    855db56 <_ZNK12CLeagueMatch15_CheckMatchableEP8PvP_Room+0x100>
 855db51:	b8 00 00 00 00       	mov    $0x0,%eax
 855db56:	c9                   	leave
 855db57:	c3                   	ret

```

```c
// CLeagueMatch::_CheckMatchable @ 0x855da56

/* CLeagueMatch::_CheckMatchable(PvP_Room*) const */

undefined4 __thiscall CLeagueMatch::_CheckMatchable(CLeagueMatch *this,PvP_Room *param_1)

{
  CUser *this_00;
  int iVar1;
  undefined4 uVar2;
  int local_1c;
  int local_14;
  
  local_1c = 0;
  local_14 = 0;
  do {
    if (7 < local_14) {
      iVar1 = TeamInfo::size((TeamInfo *)(this + 0x1c));
      if (iVar1 - local_1c == (uint)nPlayerCountPerOneTeam_) {
        uVar2 = 0;
      }
      else {
        uVar2 = 0x16;
      }
      return uVar2;
    }
    iVar1 = PvP_Room::get_team(param_1,local_14);
    if (iVar1 == 3) {
      local_1c = local_1c + 1;
    }
    else {
      this_00 = (CUser *)PvP_Room::get_user_seat(param_1,local_14);
      if ((this_00 != (CUser *)0x0) && (iVar1 = CUser::GetSchoolNo(this_00), iVar1 == 0)) {
        uVar2 = CUser::GetSchoolNo(this_00);
        LogManager::logFormat
                  (1,"MatchingSystem.cpp","int CLeagueMatch::_CheckMatchable(PvP_Room*) const",599,
                   "(%d) found a different school no(%d)",0,uVar2);
        return 0x16;
      }
    }
    local_14 = local_14 + 1;
  } while( true );
}

```

---

## _CheckSchool

```asm
// === 0855cef8 CLeagueMatch::_CheckSchool  [0x0855cef8-0x855cf8b] ===
 855cef8:	55                   	push   %ebp
 855cef9:	89 e5                	mov    %esp,%ebp
 855cefb:	83 ec 28             	sub    $0x28,%esp
 855cefe:	8b 45 10             	mov    0x10(%ebp),%eax
 855cf01:	89 04 24             	mov    %eax,(%esp)
 855cf04:	e8 f9 2e cd ff       	call   822fe02 <_ZN5CUser11GetSchoolNoEv>
 855cf09:	85 c0                	test   %eax,%eax
 855cf0b:	0f 94 c0             	sete   %al
 855cf0e:	84 c0                	test   %al,%al
 855cf10:	74 07                	je     855cf19 <_ZN12CLeagueMatch12_CheckSchoolEP8PvP_RoomP5CUser+0x21>
 855cf12:	b8 00 00 00 00       	mov    $0x0,%eax
 855cf17:	eb 71                	jmp    855cf8a <_ZN12CLeagueMatch12_CheckSchoolEP8PvP_RoomP5CUser+0x92>
 855cf19:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 855cf20:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 855cf27:	eb 24                	jmp    855cf4d <_ZN12CLeagueMatch12_CheckSchoolEP8PvP_RoomP5CUser+0x55>
 855cf29:	8b 45 f4             	mov    -0xc(%ebp),%eax
 855cf2c:	89 44 24 04          	mov    %eax,0x4(%esp)
 855cf30:	8b 45 0c             	mov    0xc(%ebp),%eax
 855cf33:	89 04 24             	mov    %eax,(%esp)
 855cf36:	e8 37 c3 07 00       	call   85d9272 <_ZN8PvP_Room8get_teamEi>
 855cf3b:	83 f8 03             	cmp    $0x3,%eax
 855cf3e:	0f 94 c0             	sete   %al
 855cf41:	84 c0                	test   %al,%al
 855cf43:	74 04                	je     855cf49 <_ZN12CLeagueMatch12_CheckSchoolEP8PvP_RoomP5CUser+0x51>
 855cf45:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 855cf49:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 855cf4d:	83 7d f4 07          	cmpl   $0x7,-0xc(%ebp)
 855cf51:	0f 9e c0             	setle  %al
 855cf54:	84 c0                	test   %al,%al
 855cf56:	75 d1                	jne    855cf29 <_ZN12CLeagueMatch12_CheckSchoolEP8PvP_RoomP5CUser+0x31>
 855cf58:	8b 45 08             	mov    0x8(%ebp),%eax
 855cf5b:	83 c0 1c             	add    $0x1c,%eax
 855cf5e:	89 04 24             	mov    %eax,(%esp)
 855cf61:	e8 c0 fd ff ff       	call   855cd26 <_ZNK8TeamInfo4sizeEv>
 855cf66:	89 c2                	mov    %eax,%edx
 855cf68:	2b 55 f0             	sub    -0x10(%ebp),%edx
 855cf6b:	0f b6 05 74 bb 3a 09 	movzbl 0x93abb74,%eax
 855cf72:	0f b6 c0             	movzbl %al,%eax
 855cf75:	39 c2                	cmp    %eax,%edx
 855cf77:	0f 9d c0             	setge  %al
 855cf7a:	84 c0                	test   %al,%al
 855cf7c:	74 07                	je     855cf85 <_ZN12CLeagueMatch12_CheckSchoolEP8PvP_RoomP5CUser+0x8d>
 855cf7e:	b8 00 00 00 00       	mov    $0x0,%eax
 855cf83:	eb 05                	jmp    855cf8a <_ZN12CLeagueMatch12_CheckSchoolEP8PvP_RoomP5CUser+0x92>
 855cf85:	b8 01 00 00 00       	mov    $0x1,%eax
 855cf8a:	c9                   	leave
 855cf8b:	c3                   	ret

```

```c
// CLeagueMatch::_CheckSchool @ 0x855cef8

/* CLeagueMatch::_CheckSchool(PvP_Room*, CUser*) */

undefined4 __thiscall
CLeagueMatch::_CheckSchool(CLeagueMatch *this,PvP_Room *param_1,CUser *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int local_14;
  int local_10;
  
  iVar1 = CUser::GetSchoolNo(param_2);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    local_14 = 0;
    for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
      iVar1 = PvP_Room::get_team(param_1,local_10);
      if (iVar1 == 3) {
        local_14 = local_14 + 1;
      }
    }
    iVar1 = TeamInfo::size((TeamInfo *)(this + 0x1c));
    if (iVar1 - local_14 < (int)(uint)nPlayerCountPerOneTeam_) {
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

## _GetOppositeTeam

```asm
// === 0855e49e CLeagueMatch::_GetOppositeTeam  [0x0855e49e-0x855e4c3] ===
 855e49e:	55                   	push   %ebp
 855e49f:	89 e5                	mov    %esp,%ebp
 855e4a1:	8b 45 0c             	mov    0xc(%ebp),%eax
 855e4a4:	83 f8 01             	cmp    $0x1,%eax
 855e4a7:	74 07                	je     855e4b0 <_ZN12CLeagueMatch16_GetOppositeTeamEi+0x12>
 855e4a9:	83 f8 02             	cmp    $0x2,%eax
 855e4ac:	74 09                	je     855e4b7 <_ZN12CLeagueMatch16_GetOppositeTeamEi+0x19>
 855e4ae:	eb 0e                	jmp    855e4be <_ZN12CLeagueMatch16_GetOppositeTeamEi+0x20>
 855e4b0:	b8 02 00 00 00       	mov    $0x2,%eax
 855e4b5:	eb 0a                	jmp    855e4c1 <_ZN12CLeagueMatch16_GetOppositeTeamEi+0x23>
 855e4b7:	b8 01 00 00 00       	mov    $0x1,%eax
 855e4bc:	eb 03                	jmp    855e4c1 <_ZN12CLeagueMatch16_GetOppositeTeamEi+0x23>
 855e4be:	8b 45 0c             	mov    0xc(%ebp),%eax
 855e4c1:	5d                   	pop    %ebp
 855e4c2:	c3                   	ret
 855e4c3:	90                   	nop

```

```c
// CLeagueMatch::_GetOppositeTeam @ 0x855e49e

/* CLeagueMatch::_GetOppositeTeam(int) */

int __thiscall CLeagueMatch::_GetOppositeTeam(CLeagueMatch *this,int param_1)

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

## _MakeRoom

```asm
// === 0855d572 CLeagueMatch::_MakeRoom  [0x0855d572-0x855d883] ===
 855d572:	55                   	push   %ebp
 855d573:	89 e5                	mov    %esp,%ebp
 855d575:	57                   	push   %edi
 855d576:	56                   	push   %esi
 855d577:	53                   	push   %ebx
 855d578:	83 ec 6c             	sub    $0x6c,%esp
 855d57b:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 855d57e:	89 04 24             	mov    %eax,(%esp)
 855d581:	e8 c6 07 03 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 855d586:	c7 44 24 08 35 00 00 	movl   $0x35,0x8(%esp)
 855d58d:	00 
 855d58e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 855d595:	00 
 855d596:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 855d599:	89 04 24             	mov    %eax,(%esp)
 855d59c:	e8 5b e3 b6 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 855d5a1:	e8 e8 eb b6 ff       	call   80cc18e <_Z14G_CGameManagerv>
 855d5a6:	89 04 24             	mov    %eax,(%esp)
 855d5a9:	e8 ce 7a d3 ff       	call   829507c <_ZN12CGameManager6GetPvpEv>
 855d5ae:	89 45 e0             	mov    %eax,-0x20(%ebp)
 855d5b1:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 855d5b5:	75 55                	jne    855d60c <_ZN12CLeagueMatch9_MakeRoomEP5CUser+0x9a>
 855d5b7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 855d5be:	00 
 855d5bf:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 855d5c2:	89 04 24             	mov    %eax,(%esp)
 855d5c5:	e8 56 e3 b6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 855d5ca:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 855d5d1:	00 
 855d5d2:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 855d5d5:	89 04 24             	mov    %eax,(%esp)
 855d5d8:	e8 43 e3 b6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 855d5dd:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 855d5e4:	00 
 855d5e5:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 855d5e8:	89 04 24             	mov    %eax,(%esp)
 855d5eb:	e8 68 e3 b6 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 855d5f0:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 855d5f3:	89 44 24 04          	mov    %eax,0x4(%esp)
 855d5f7:	8b 45 0c             	mov    0xc(%ebp),%eax
 855d5fa:	89 04 24             	mov    %eax,(%esp)
 855d5fd:	e8 b8 af 0e 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 855d602:	bb 00 00 00 00       	mov    $0x0,%ebx
 855d607:	e9 63 02 00 00       	jmp    855d86f <_ZN12CLeagueMatch9_MakeRoomEP5CUser+0x2fd>
 855d60c:	8b 45 08             	mov    0x8(%ebp),%eax
 855d60f:	83 c0 14             	add    $0x14,%eax
 855d612:	89 04 24             	mov    %eax,(%esp)
 855d615:	e8 56 90 1a 00       	call   8706670 <_ZNKSs6lengthEv>
 855d61a:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 855d61d:	8b 45 08             	mov    0x8(%ebp),%eax
 855d620:	83 c0 14             	add    $0x14,%eax
 855d623:	89 04 24             	mov    %eax,(%esp)
 855d626:	e8 c5 8e 1a 00       	call   87064f0 <_ZNKSs5c_strEv>
 855d62b:	89 c3                	mov    %eax,%ebx
 855d62d:	8b 45 08             	mov    0x8(%ebp),%eax
 855d630:	0f b6 40 10          	movzbl 0x10(%eax),%eax
 855d634:	0f b6 f8             	movzbl %al,%edi
 855d637:	8b 45 08             	mov    0x8(%ebp),%eax
 855d63a:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 855d63e:	0f bf f0             	movswl %ax,%esi
 855d641:	8b 45 08             	mov    0x8(%ebp),%eax
 855d644:	83 c0 08             	add    $0x8,%eax
 855d647:	89 04 24             	mov    %eax,(%esp)
 855d64a:	e8 a1 8e 1a 00       	call   87064f0 <_ZNKSs5c_strEv>
 855d64f:	8b 55 08             	mov    0x8(%ebp),%edx
 855d652:	0f b6 52 0c          	movzbl 0xc(%edx),%edx
 855d656:	0f be d2             	movsbl %dl,%edx
 855d659:	c7 44 24 20 02 00 00 	movl   $0x2,0x20(%esp)
 855d660:	00 
 855d661:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 855d664:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 855d668:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 855d66c:	89 7c 24 14          	mov    %edi,0x14(%esp)
 855d670:	89 74 24 10          	mov    %esi,0x10(%esp)
 855d674:	89 44 24 0c          	mov    %eax,0xc(%esp)
 855d678:	89 54 24 08          	mov    %edx,0x8(%esp)
 855d67c:	8b 45 0c             	mov    0xc(%ebp),%eax
 855d67f:	89 44 24 04          	mov    %eax,0x4(%esp)
 855d683:	8b 45 e0             	mov    -0x20(%ebp),%eax
 855d686:	89 04 24             	mov    %eax,(%esp)
 855d689:	e8 7a 92 07 00       	call   85d6908 <_ZN8PvP_Room11create_roomEP5CUsercPcsbPKci15PVP_BATTLE_MODE>
 855d68e:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 855d691:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 855d695:	0f 8e a3 00 00 00    	jle    855d73e <_ZN12CLeagueMatch9_MakeRoomEP5CUser+0x1cc>
 855d69b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 855d6a2:	00 
 855d6a3:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 855d6a6:	89 04 24             	mov    %eax,(%esp)
 855d6a9:	e8 72 e2 b6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 855d6ae:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 855d6b1:	89 44 24 04          	mov    %eax,0x4(%esp)
 855d6b5:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 855d6b8:	89 04 24             	mov    %eax,(%esp)
 855d6bb:	e8 60 e2 b6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 855d6c0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 855d6c7:	00 
 855d6c8:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 855d6cb:	89 04 24             	mov    %eax,(%esp)
 855d6ce:	e8 85 e2 b6 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 855d6d3:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 855d6d6:	89 44 24 04          	mov    %eax,0x4(%esp)
 855d6da:	8b 45 0c             	mov    0xc(%ebp),%eax
 855d6dd:	89 04 24             	mov    %eax,(%esp)
 855d6e0:	e8 d5 ae 0e 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 855d6e5:	8b 45 e0             	mov    -0x20(%ebp),%eax
 855d6e8:	89 04 24             	mov    %eax,(%esp)
 855d6eb:	e8 a4 02 cd ff       	call   822d994 <_ZN8PvP_Room9get_indexEv>
 855d6f0:	89 44 24 14          	mov    %eax,0x14(%esp)
 855d6f4:	c7 44 24 10 3c 22 ca 	movl   $0x8ca223c,0x10(%esp)
 855d6fb:	08 
 855d6fc:	c7 44 24 0c fe 01 00 	movl   $0x1fe,0xc(%esp)
 855d703:	00 
 855d704:	c7 44 24 08 60 3b ca 	movl   $0x8ca3b60,0x8(%esp)
 855d70b:	08 
 855d70c:	c7 44 24 04 62 22 ca 	movl   $0x8ca2262,0x4(%esp)
 855d713:	08 
 855d714:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 855d71b:	e8 ea 64 57 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 855d720:	e8 69 ea b6 ff       	call   80cc18e <_Z14G_CGameManagerv>
 855d725:	8b 55 e0             	mov    -0x20(%ebp),%edx
 855d728:	89 54 24 04          	mov    %edx,0x4(%esp)
 855d72c:	89 04 24             	mov    %eax,(%esp)
 855d72f:	e8 14 7c d3 ff       	call   8295348 <_ZN12CGameManager6PutPvpEP8PvP_Room>
 855d734:	bb 00 00 00 00       	mov    $0x0,%ebx
 855d739:	e9 31 01 00 00       	jmp    855d86f <_ZN12CLeagueMatch9_MakeRoomEP5CUser+0x2fd>
 855d73e:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 855d741:	89 04 24             	mov    %eax,(%esp)
 855d744:	e8 9d e1 b6 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 855d749:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 855d750:	00 
 855d751:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 855d758:	00 
 855d759:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 855d75c:	89 04 24             	mov    %eax,(%esp)
 855d75f:	e8 98 e1 b6 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 855d764:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 855d76b:	00 
 855d76c:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 855d76f:	89 04 24             	mov    %eax,(%esp)
 855d772:	e8 a9 e1 b6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 855d777:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 855d77e:	00 
 855d77f:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 855d782:	89 04 24             	mov    %eax,(%esp)
 855d785:	e8 1a c7 b7 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 855d78a:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 855d78d:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 855d794:	00 
 855d795:	89 44 24 04          	mov    %eax,0x4(%esp)
 855d799:	8b 45 0c             	mov    0xc(%ebp),%eax
 855d79c:	89 04 24             	mov    %eax,(%esp)
 855d79f:	e8 aa cc 0f 00       	call   865a44e <_ZN5CUser15make_basic_infoEPcc>
 855d7a4:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 855d7ab:	00 
 855d7ac:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 855d7af:	89 04 24             	mov    %eax,(%esp)
 855d7b2:	e8 a1 e1 b6 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 855d7b7:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 855d7ba:	89 44 24 04          	mov    %eax,0x4(%esp)
 855d7be:	8b 45 0c             	mov    0xc(%ebp),%eax
 855d7c1:	89 04 24             	mov    %eax,(%esp)
 855d7c4:	e8 f1 ad 0e 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 855d7c9:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 855d7cc:	89 04 24             	mov    %eax,(%esp)
 855d7cf:	e8 12 e1 b6 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 855d7d4:	c7 44 24 08 29 00 00 	movl   $0x29,0x8(%esp)
 855d7db:	00 
 855d7dc:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 855d7e3:	00 
 855d7e4:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 855d7e7:	89 04 24             	mov    %eax,(%esp)
 855d7ea:	e8 0d e1 b6 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 855d7ef:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 855d7f6:	00 
 855d7f7:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 855d7fa:	89 04 24             	mov    %eax,(%esp)
 855d7fd:	e8 a2 c6 b7 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 855d802:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 855d805:	89 44 24 04          	mov    %eax,0x4(%esp)
 855d809:	8b 45 e0             	mov    -0x20(%ebp),%eax
 855d80c:	89 04 24             	mov    %eax,(%esp)
 855d80f:	e8 e2 df 07 00       	call   85db7f6 <_ZN8PvP_Room14make_room_infoEPc>
 855d814:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 855d81b:	00 
 855d81c:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 855d81f:	89 04 24             	mov    %eax,(%esp)
 855d822:	e8 31 e1 b6 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 855d827:	e8 7b cb b7 ff       	call   80da3a7 <_Z11G_GameWorldv>
 855d82c:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 855d82f:	89 54 24 04          	mov    %edx,0x4(%esp)
 855d833:	89 04 24             	mov    %eax,(%esp)
 855d836:	e8 d9 b3 16 00       	call   86c8c14 <_ZN9GameWorld8send_allER11PacketGuard>
 855d83b:	e8 67 cb b7 ff       	call   80da3a7 <_Z11G_GameWorldv>
 855d840:	8b 55 0c             	mov    0xc(%ebp),%edx
 855d843:	89 54 24 04          	mov    %edx,0x4(%esp)
 855d847:	89 04 24             	mov    %eax,(%esp)
 855d84a:	e8 9f 94 16 00       	call   86c6cee <_ZN9GameWorld8goto_pvpEP5CUser>
 855d84f:	8b 5d e0             	mov    -0x20(%ebp),%ebx
 855d852:	eb 1b                	jmp    855d86f <_ZN12CLeagueMatch9_MakeRoomEP5CUser+0x2fd>
 855d854:	89 d3                	mov    %edx,%ebx
 855d856:	89 c6                	mov    %eax,%esi
 855d858:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 855d85b:	89 04 24             	mov    %eax,(%esp)
 855d85e:	e8 1d 06 03 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 855d863:	89 f0                	mov    %esi,%eax
 855d865:	89 da                	mov    %ebx,%edx
 855d867:	89 04 24             	mov    %eax,(%esp)
 855d86a:	e8 e1 5e 58 00       	call   8ae3750 <_Unwind_Resume>
 855d86f:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 855d872:	89 04 24             	mov    %eax,(%esp)
 855d875:	e8 06 06 03 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 855d87a:	89 d8                	mov    %ebx,%eax
 855d87c:	83 c4 6c             	add    $0x6c,%esp
 855d87f:	5b                   	pop    %ebx
 855d880:	5e                   	pop    %esi
 855d881:	5f                   	pop    %edi
 855d882:	5d                   	pop    %ebp
 855d883:	c3                   	ret

```

```c
// CLeagueMatch::_MakeRoom @ 0x855d572

/* CLeagueMatch::_MakeRoom(CUser*) */

PvP_Room * __thiscall CLeagueMatch::_MakeRoom(CLeagueMatch *this,CUser *param_1)

{
  CLeagueMatch CVar1;
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
                    /* try { // try from 0855d59c to 0855d84e has its CatchHandler @ 0855d854 */
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
                (1,"MatchingSystem.cpp","PvP_Room* CLeagueMatch::_MakeRoom(CUser*)",0x1fe,
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
// === 0855d3d2 CLeagueMatch::_PullOutRoom  [0x0855d3d2-0x855d429] ===
 855d3d2:	55                   	push   %ebp
 855d3d3:	89 e5                	mov    %esp,%ebp
 855d3d5:	83 ec 28             	sub    $0x28,%esp
 855d3d8:	c7 44 24 10 02 00 00 	movl   $0x2,0x10(%esp)
 855d3df:	00 
 855d3e0:	c7 44 24 0c fe 00 00 	movl   $0xfe,0xc(%esp)
 855d3e7:	00 
 855d3e8:	8b 45 14             	mov    0x14(%ebp),%eax
 855d3eb:	89 44 24 08          	mov    %eax,0x8(%esp)
 855d3ef:	8b 45 0c             	mov    0xc(%ebp),%eax
 855d3f2:	89 44 24 04          	mov    %eax,0x4(%esp)
 855d3f6:	8b 45 10             	mov    0x10(%ebp),%eax
 855d3f9:	89 04 24             	mov    %eax,(%esp)
 855d3fc:	e8 6f fc 07 00       	call   85dd070 <_ZN8PvP_Room17OnSetPVPSeatStateEP5CUseri15ENUM_SEAT_STATE17ENUM_WALKOUT_TYPE>
 855d401:	83 f0 01             	xor    $0x1,%eax
 855d404:	84 c0                	test   %al,%al
 855d406:	74 1f                	je     855d427 <_ZN12CLeagueMatch12_PullOutRoomEP5CUserP8PvP_Roomi+0x55>
 855d408:	8b 45 10             	mov    0x10(%ebp),%eax
 855d40b:	89 04 24             	mov    %eax,(%esp)
 855d40e:	e8 b5 8e 07 00       	call   85d62c8 <_ZN8PvP_Room5resetEv>
 855d413:	e8 76 ed b6 ff       	call   80cc18e <_Z14G_CGameManagerv>
 855d418:	8b 55 10             	mov    0x10(%ebp),%edx
 855d41b:	89 54 24 04          	mov    %edx,0x4(%esp)
 855d41f:	89 04 24             	mov    %eax,(%esp)
 855d422:	e8 21 7f d3 ff       	call   8295348 <_ZN12CGameManager6PutPvpEP8PvP_Room>
 855d427:	c9                   	leave
 855d428:	c3                   	ret
 855d429:	90                   	nop

```

```c
// CLeagueMatch::_PullOutRoom @ 0x855d3d2

/* CLeagueMatch::_PullOutRoom(CUser*, PvP_Room*, int) */

void __thiscall
CLeagueMatch::_PullOutRoom(CLeagueMatch *this,CUser *param_1,PvP_Room *param_2,int param_3)

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
// === 0855d42a CLeagueMatch::_PutInRoom  [0x0855d42a-0x855d553] ===
 855d42a:	55                   	push   %ebp
 855d42b:	89 e5                	mov    %esp,%ebp
 855d42d:	56                   	push   %esi
 855d42e:	53                   	push   %ebx
 855d42f:	83 ec 40             	sub    $0x40,%esp
 855d432:	8b 45 14             	mov    0x14(%ebp),%eax
 855d435:	88 45 d4             	mov    %al,-0x2c(%ebp)
 855d438:	8d 45 e8             	lea    -0x18(%ebp),%eax
 855d43b:	89 04 24             	mov    %eax,(%esp)
 855d43e:	e8 09 09 03 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 855d443:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 855d44a:	0f b6 45 d4          	movzbl -0x2c(%ebp),%eax
 855d44e:	89 44 24 0c          	mov    %eax,0xc(%esp)
 855d452:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 855d455:	89 44 24 08          	mov    %eax,0x8(%esp)
 855d459:	8b 45 0c             	mov    0xc(%ebp),%eax
 855d45c:	89 44 24 04          	mov    %eax,0x4(%esp)
 855d460:	8b 45 10             	mov    0x10(%ebp),%eax
 855d463:	89 04 24             	mov    %eax,(%esp)
 855d466:	e8 87 98 07 00       	call   85d6cf2 <_ZN8PvP_Room9join_roomEP5CUserRib>
 855d46b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 855d46e:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 855d472:	7e 6a                	jle    855d4de <_ZN12CLeagueMatch10_PutInRoomEP5CUserP8PvP_Roomb+0xb4>
 855d474:	c7 44 24 08 36 00 00 	movl   $0x36,0x8(%esp)
 855d47b:	00 
 855d47c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 855d483:	00 
 855d484:	8d 45 e8             	lea    -0x18(%ebp),%eax
 855d487:	89 04 24             	mov    %eax,(%esp)
 855d48a:	e8 6d e4 b6 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 855d48f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 855d496:	00 
 855d497:	8d 45 e8             	lea    -0x18(%ebp),%eax
 855d49a:	89 04 24             	mov    %eax,(%esp)
 855d49d:	e8 7e e4 b6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 855d4a2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 855d4a5:	89 44 24 04          	mov    %eax,0x4(%esp)
 855d4a9:	8d 45 e8             	lea    -0x18(%ebp),%eax
 855d4ac:	89 04 24             	mov    %eax,(%esp)
 855d4af:	e8 6c e4 b6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 855d4b4:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 855d4bb:	00 
 855d4bc:	8d 45 e8             	lea    -0x18(%ebp),%eax
 855d4bf:	89 04 24             	mov    %eax,(%esp)
 855d4c2:	e8 91 e4 b6 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 855d4c7:	8d 45 e8             	lea    -0x18(%ebp),%eax
 855d4ca:	89 44 24 04          	mov    %eax,0x4(%esp)
 855d4ce:	8b 45 0c             	mov    0xc(%ebp),%eax
 855d4d1:	89 04 24             	mov    %eax,(%esp)
 855d4d4:	e8 e1 b0 0e 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 855d4d9:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
 855d4dc:	eb 61                	jmp    855d53f <_ZN12CLeagueMatch10_PutInRoomEP5CUserP8PvP_Roomb+0x115>
 855d4de:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 855d4e1:	8d 45 e8             	lea    -0x18(%ebp),%eax
 855d4e4:	89 54 24 08          	mov    %edx,0x8(%esp)
 855d4e8:	89 44 24 04          	mov    %eax,0x4(%esp)
 855d4ec:	8b 45 10             	mov    0x10(%ebp),%eax
 855d4ef:	89 04 24             	mov    %eax,(%esp)
 855d4f2:	e8 eb e4 07 00       	call   85db9e2 <_ZN8PvP_Room14make_seat_infoEPci>
 855d4f7:	e8 ab ce b7 ff       	call   80da3a7 <_Z11G_GameWorldv>
 855d4fc:	8d 55 e8             	lea    -0x18(%ebp),%edx
 855d4ff:	89 54 24 04          	mov    %edx,0x4(%esp)
 855d503:	89 04 24             	mov    %eax,(%esp)
 855d506:	e8 09 b7 16 00       	call   86c8c14 <_ZN9GameWorld8send_allER11PacketGuard>
 855d50b:	e8 97 ce b7 ff       	call   80da3a7 <_Z11G_GameWorldv>
 855d510:	8b 55 0c             	mov    0xc(%ebp),%edx
 855d513:	89 54 24 04          	mov    %edx,0x4(%esp)
 855d517:	89 04 24             	mov    %eax,(%esp)
 855d51a:	e8 cf 97 16 00       	call   86c6cee <_ZN9GameWorld8goto_pvpEP5CUser>
 855d51f:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
 855d522:	eb 1b                	jmp    855d53f <_ZN12CLeagueMatch10_PutInRoomEP5CUserP8PvP_Roomb+0x115>
 855d524:	89 d3                	mov    %edx,%ebx
 855d526:	89 c6                	mov    %eax,%esi
 855d528:	8d 45 e8             	lea    -0x18(%ebp),%eax
 855d52b:	89 04 24             	mov    %eax,(%esp)
 855d52e:	e8 4d 09 03 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 855d533:	89 f0                	mov    %esi,%eax
 855d535:	89 da                	mov    %ebx,%edx
 855d537:	89 04 24             	mov    %eax,(%esp)
 855d53a:	e8 11 62 58 00       	call   8ae3750 <_Unwind_Resume>
 855d53f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 855d542:	89 04 24             	mov    %eax,(%esp)
 855d545:	e8 36 09 03 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 855d54a:	89 d8                	mov    %ebx,%eax
 855d54c:	83 c4 40             	add    $0x40,%esp
 855d54f:	5b                   	pop    %ebx
 855d550:	5e                   	pop    %esi
 855d551:	5d                   	pop    %ebp
 855d552:	c3                   	ret
 855d553:	90                   	nop

```

```c
// CLeagueMatch::_PutInRoom @ 0x855d42a

/* CLeagueMatch::_PutInRoom(CUser*, PvP_Room*, bool) */

int __thiscall
CLeagueMatch::_PutInRoom(CLeagueMatch *this,CUser *param_1,PvP_Room *param_2,bool param_3)

{
  int iVar1;
  GameWorld *pGVar2;
  int local_20;
  PacketGuard local_1c [12];
  int local_10;
  
  PacketGuard::PacketGuard(local_1c);
  local_20 = 0;
                    /* try { // try from 0855d466 to 0855d51e has its CatchHandler @ 0855d524 */
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
// === 0855d884 CLeagueMatch::_RegisterWaitingRoom  [0x0855d884-0x855da55] ===
 855d884:	55                   	push   %ebp
 855d885:	89 e5                	mov    %esp,%ebp
 855d887:	83 ec 38             	sub    $0x38,%esp
 855d88a:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 855d891:	b8 00 00 00 00       	mov    $0x0,%eax
 855d896:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 855d899:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 855d8a0:	e9 a6 00 00 00       	jmp    855d94b <_ZN12CLeagueMatch20_RegisterWaitingRoomEP8PvP_Room+0xc7>
 855d8a5:	8b 45 e8             	mov    -0x18(%ebp),%eax
 855d8a8:	8b 4d 08             	mov    0x8(%ebp),%ecx
 855d8ab:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
 855d8b2:	8d 04 d5 00 00 00 00 	lea    0x0(,%edx,8),%eax
 855d8b9:	29 d0                	sub    %edx,%eax
 855d8bb:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 855d8be:	83 c0 10             	add    $0x10,%eax
 855d8c1:	0f b6 40 18          	movzbl 0x18(%eax),%eax
 855d8c5:	84 c0                	test   %al,%al
 855d8c7:	74 7e                	je     855d947 <_ZN12CLeagueMatch20_RegisterWaitingRoomEP8PvP_Room+0xc3>
 855d8c9:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 855d8cd:	75 28                	jne    855d8f7 <_ZN12CLeagueMatch20_RegisterWaitingRoomEP8PvP_Room+0x73>
 855d8cf:	8b 45 e8             	mov    -0x18(%ebp),%eax
 855d8d2:	8b 4d 08             	mov    0x8(%ebp),%ecx
 855d8d5:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
 855d8dc:	8d 04 d5 00 00 00 00 	lea    0x0(,%edx,8),%eax
 855d8e3:	29 d0                	sub    %edx,%eax
 855d8e5:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 855d8e8:	83 c0 20             	add    $0x20,%eax
 855d8eb:	8b 00                	mov    (%eax),%eax
 855d8ed:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 855d8f0:	c7 45 e0 01 00 00 00 	movl   $0x1,-0x20(%ebp)
 855d8f7:	8b 45 e8             	mov    -0x18(%ebp),%eax
 855d8fa:	8b 4d 08             	mov    0x8(%ebp),%ecx
 855d8fd:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
 855d904:	8d 04 d5 00 00 00 00 	lea    0x0(,%edx,8),%eax
 855d90b:	29 d0                	sub    %edx,%eax
 855d90d:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 855d910:	83 c0 20             	add    $0x20,%eax
 855d913:	d9 00                	flds   (%eax)
 855d915:	d9 45 e4             	flds   -0x1c(%ebp)
 855d918:	da e9                	fucompp
 855d91a:	df e0                	fnstsw %ax
 855d91c:	f6 c4 45             	test   $0x45,%ah
 855d91f:	0f 94 c0             	sete   %al
 855d922:	84 c0                	test   %al,%al
 855d924:	74 21                	je     855d947 <_ZN12CLeagueMatch20_RegisterWaitingRoomEP8PvP_Room+0xc3>
 855d926:	8b 45 e8             	mov    -0x18(%ebp),%eax
 855d929:	8b 4d 08             	mov    0x8(%ebp),%ecx
 855d92c:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
 855d933:	8d 04 d5 00 00 00 00 	lea    0x0(,%edx,8),%eax
 855d93a:	29 d0                	sub    %edx,%eax
 855d93c:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 855d93f:	83 c0 20             	add    $0x20,%eax
 855d942:	8b 00                	mov    (%eax),%eax
 855d944:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 855d947:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 855d94b:	83 7d e8 03          	cmpl   $0x3,-0x18(%ebp)
 855d94f:	0f 9e c0             	setle  %al
 855d952:	84 c0                	test   %al,%al
 855d954:	0f 85 4b ff ff ff    	jne    855d8a5 <_ZN12CLeagueMatch20_RegisterWaitingRoomEP8PvP_Room+0x21>
 855d95a:	d9 45 e4             	flds   -0x1c(%ebp)
 855d95d:	d9 e8                	fld1
 855d95f:	de e9                	fsubrp %st,%st(1)
 855d961:	d9 5d e4             	fstps  -0x1c(%ebp)
 855d964:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 855d96b:	e9 97 00 00 00       	jmp    855da07 <_ZN12CLeagueMatch20_RegisterWaitingRoomEP8PvP_Room+0x183>
 855d970:	8b 45 ec             	mov    -0x14(%ebp),%eax
 855d973:	89 44 24 04          	mov    %eax,0x4(%esp)
 855d977:	8b 45 0c             	mov    0xc(%ebp),%eax
 855d97a:	89 04 24             	mov    %eax,(%esp)
 855d97d:	e8 f0 b8 07 00       	call   85d9272 <_ZN8PvP_Room8get_teamEi>
 855d982:	83 f8 03             	cmp    $0x3,%eax
 855d985:	0f 94 c0             	sete   %al
 855d988:	84 c0                	test   %al,%al
 855d98a:	74 77                	je     855da03 <_ZN12CLeagueMatch20_RegisterWaitingRoomEP8PvP_Room+0x17f>
 855d98c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 855d98f:	89 44 24 04          	mov    %eax,0x4(%esp)
 855d993:	8b 45 0c             	mov    0xc(%ebp),%eax
 855d996:	89 04 24             	mov    %eax,(%esp)
 855d999:	e8 80 b8 07 00       	call   85d921e <_ZN8PvP_Room13get_user_seatEi>
 855d99e:	89 45 f0             	mov    %eax,-0x10(%ebp)
 855d9a1:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 855d9a8:	eb 4e                	jmp    855d9f8 <_ZN12CLeagueMatch20_RegisterWaitingRoomEP8PvP_Room+0x174>
 855d9aa:	8b 45 f4             	mov    -0xc(%ebp),%eax
 855d9ad:	8b 4d 08             	mov    0x8(%ebp),%ecx
 855d9b0:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
 855d9b7:	8d 04 d5 00 00 00 00 	lea    0x0(,%edx,8),%eax
 855d9be:	29 d0                	sub    %edx,%eax
 855d9c0:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 855d9c3:	83 c0 24             	add    $0x24,%eax
 855d9c6:	8b 00                	mov    (%eax),%eax
 855d9c8:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 855d9cb:	75 27                	jne    855d9f4 <_ZN12CLeagueMatch20_RegisterWaitingRoomEP8PvP_Room+0x170>
 855d9cd:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 855d9d1:	74 21                	je     855d9f4 <_ZN12CLeagueMatch20_RegisterWaitingRoomEP8PvP_Room+0x170>
 855d9d3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 855d9d6:	8b 4d 08             	mov    0x8(%ebp),%ecx
 855d9d9:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
 855d9e0:	8d 04 d5 00 00 00 00 	lea    0x0(,%edx,8),%eax
 855d9e7:	29 d0                	sub    %edx,%eax
 855d9e9:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 855d9ec:	8d 50 20             	lea    0x20(%eax),%edx
 855d9ef:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 855d9f2:	89 02                	mov    %eax,(%edx)
 855d9f4:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 855d9f8:	83 7d f4 03          	cmpl   $0x3,-0xc(%ebp)
 855d9fc:	0f 9e c0             	setle  %al
 855d9ff:	84 c0                	test   %al,%al
 855da01:	75 a7                	jne    855d9aa <_ZN12CLeagueMatch20_RegisterWaitingRoomEP8PvP_Room+0x126>
 855da03:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 855da07:	83 7d ec 07          	cmpl   $0x7,-0x14(%ebp)
 855da0b:	0f 9e c0             	setle  %al
 855da0e:	84 c0                	test   %al,%al
 855da10:	0f 85 5a ff ff ff    	jne    855d970 <_ZN12CLeagueMatch20_RegisterWaitingRoomEP8PvP_Room+0xec>
 855da16:	8b 45 08             	mov    0x8(%ebp),%eax
 855da19:	05 8c 00 00 00       	add    $0x8c,%eax
 855da1e:	89 c2                	mov    %eax,%edx
 855da20:	8b 45 08             	mov    0x8(%ebp),%eax
 855da23:	83 c0 1c             	add    $0x1c,%eax
 855da26:	c7 44 24 08 52 c9 55 	movl   $0x855c952,0x8(%esp)
 855da2d:	08 
 855da2e:	89 54 24 04          	mov    %edx,0x4(%esp)
 855da32:	89 04 24             	mov    %eax,(%esp)
 855da35:	e8 8b b9 00 00       	call   85693c5 <_ZSt4sortIP10PlayerInfoPFbRKS0_S3_EEvT_S6_T0_>
 855da3a:	a1 64 e0 43 09       	mov    0x943e064,%eax
 855da3f:	8b 00                	mov    (%eax),%eax
 855da41:	8b 08                	mov    (%eax),%ecx
 855da43:	8b 55 08             	mov    0x8(%ebp),%edx
 855da46:	a1 64 e0 43 09       	mov    0x943e064,%eax
 855da4b:	89 54 24 04          	mov    %edx,0x4(%esp)
 855da4f:	89 04 24             	mov    %eax,(%esp)
 855da52:	ff d1                	call   *%ecx
 855da54:	c9                   	leave
 855da55:	c3                   	ret

```

```c
// CLeagueMatch::_RegisterWaitingRoom @ 0x855d884

/* CLeagueMatch::_RegisterWaitingRoom(PvP_Room*) */

void __thiscall CLeagueMatch::_RegisterWaitingRoom(CLeagueMatch *this,PvP_Room *param_1)

{
  bool bVar1;
  int iVar2;
  float local_20;
  int local_1c;
  int local_18;
  int local_10;
  
  bVar1 = false;
  local_20 = 0.0;
  for (local_1c = 0; local_1c < 4; local_1c = local_1c + 1) {
    if (this[local_1c * 0x1c + 0x28] != (CLeagueMatch)0x0) {
      if (!bVar1) {
        local_20 = *(float *)(this + local_1c * 0x1c + 0x20);
        bVar1 = true;
      }
      if (*(float *)(this + local_1c * 0x1c + 0x20) < local_20) {
        local_20 = *(float *)(this + local_1c * 0x1c + 0x20);
      }
    }
  }
  for (local_18 = 0; local_18 < 8; local_18 = local_18 + 1) {
    iVar2 = PvP_Room::get_team(param_1,local_18);
    if (iVar2 == 3) {
      iVar2 = PvP_Room::get_user_seat(param_1,local_18);
      for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
        if ((*(int *)(this + local_10 * 0x1c + 0x24) == iVar2) && (iVar2 != 0)) {
          *(float *)(this + local_10 * 0x1c + 0x20) = local_20 - 1.0;
        }
      }
    }
  }
  std::sort<PlayerInfo*,bool(*)(PlayerInfo_const&,PlayerInfo_const&)>
            ((PlayerInfo *)(this + 0x1c),(PlayerInfo *)(this + 0x8c),CompareRating);
  (**(code **)*pWaitingRoomList_)(pWaitingRoomList_,this);
  return;
}

```

---

## _ReturnTeam

```asm
// === 0855e378 CLeagueMatch::_ReturnTeam  [0x0855e378-0x855e49d] ===
 855e378:	55                   	push   %ebp
 855e379:	89 e5                	mov    %esp,%ebp
 855e37b:	83 ec 38             	sub    $0x38,%esp
 855e37e:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 855e385:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 855e38c:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 855e393:	e9 ea 00 00 00       	jmp    855e482 <_ZN12CLeagueMatch11_ReturnTeamEP8PvP_RoomiP5CUser+0x10a>
 855e398:	8b 45 f0             	mov    -0x10(%ebp),%eax
 855e39b:	89 44 24 04          	mov    %eax,0x4(%esp)
 855e39f:	8b 45 0c             	mov    0xc(%ebp),%eax
 855e3a2:	89 04 24             	mov    %eax,(%esp)
 855e3a5:	e8 74 ae 07 00       	call   85d921e <_ZN8PvP_Room13get_user_seatEi>
 855e3aa:	89 45 e8             	mov    %eax,-0x18(%ebp)
 855e3ad:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 855e3b1:	0f 84 c0 00 00 00    	je     855e477 <_ZN12CLeagueMatch11_ReturnTeamEP8PvP_RoomiP5CUser+0xff>
 855e3b7:	8b 45 f0             	mov    -0x10(%ebp),%eax
 855e3ba:	89 44 24 04          	mov    %eax,0x4(%esp)
 855e3be:	8b 45 0c             	mov    0xc(%ebp),%eax
 855e3c1:	89 04 24             	mov    %eax,(%esp)
 855e3c4:	e8 a9 ae 07 00       	call   85d9272 <_ZN8PvP_Room8get_teamEi>
 855e3c9:	89 45 f4             	mov    %eax,-0xc(%ebp)
 855e3cc:	8b 45 10             	mov    0x10(%ebp),%eax
 855e3cf:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 855e3d2:	75 35                	jne    855e409 <_ZN12CLeagueMatch11_ReturnTeamEP8PvP_RoomiP5CUser+0x91>
 855e3d4:	83 7d 10 02          	cmpl   $0x2,0x10(%ebp)
 855e3d8:	0f 85 9c 00 00 00    	jne    855e47a <_ZN12CLeagueMatch11_ReturnTeamEP8PvP_RoomiP5CUser+0x102>
 855e3de:	8b 45 f0             	mov    -0x10(%ebp),%eax
 855e3e1:	c7 44 24 10 02 00 00 	movl   $0x2,0x10(%esp)
 855e3e8:	00 
 855e3e9:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 855e3f0:	00 
 855e3f1:	89 44 24 08          	mov    %eax,0x8(%esp)
 855e3f5:	8b 45 e8             	mov    -0x18(%ebp),%eax
 855e3f8:	89 44 24 04          	mov    %eax,0x4(%esp)
 855e3fc:	8b 45 0c             	mov    0xc(%ebp),%eax
 855e3ff:	89 04 24             	mov    %eax,(%esp)
 855e402:	e8 69 ec 07 00       	call   85dd070 <_ZN8PvP_Room17OnSetPVPSeatStateEP5CUseri15ENUM_SEAT_STATE17ENUM_WALKOUT_TYPE>
 855e407:	eb 75                	jmp    855e47e <_ZN12CLeagueMatch11_ReturnTeamEP8PvP_RoomiP5CUser+0x106>
 855e409:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 855e40d:	74 08                	je     855e417 <_ZN12CLeagueMatch11_ReturnTeamEP8PvP_RoomiP5CUser+0x9f>
 855e40f:	8b 45 e8             	mov    -0x18(%ebp),%eax
 855e412:	3b 45 14             	cmp    0x14(%ebp),%eax
 855e415:	74 66                	je     855e47d <_ZN12CLeagueMatch11_ReturnTeamEP8PvP_RoomiP5CUser+0x105>
 855e417:	8b 45 f0             	mov    -0x10(%ebp),%eax
 855e41a:	89 44 24 0c          	mov    %eax,0xc(%esp)
 855e41e:	8b 45 0c             	mov    0xc(%ebp),%eax
 855e421:	89 44 24 08          	mov    %eax,0x8(%esp)
 855e425:	8b 45 e8             	mov    -0x18(%ebp),%eax
 855e428:	89 44 24 04          	mov    %eax,0x4(%esp)
 855e42c:	8b 45 08             	mov    0x8(%ebp),%eax
 855e42f:	89 04 24             	mov    %eax,(%esp)
 855e432:	e8 9b ef ff ff       	call   855d3d2 <_ZN12CLeagueMatch12_PullOutRoomEP5CUserP8PvP_Roomi>
 855e437:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 855e43b:	75 17                	jne    855e454 <_ZN12CLeagueMatch11_ReturnTeamEP8PvP_RoomiP5CUser+0xdc>
 855e43d:	8b 45 e8             	mov    -0x18(%ebp),%eax
 855e440:	89 44 24 04          	mov    %eax,0x4(%esp)
 855e444:	8b 45 08             	mov    0x8(%ebp),%eax
 855e447:	89 04 24             	mov    %eax,(%esp)
 855e44a:	e8 23 f1 ff ff       	call   855d572 <_ZN12CLeagueMatch9_MakeRoomEP5CUser>
 855e44f:	89 45 ec             	mov    %eax,-0x14(%ebp)
 855e452:	eb 2a                	jmp    855e47e <_ZN12CLeagueMatch11_ReturnTeamEP8PvP_RoomiP5CUser+0x106>
 855e454:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 855e45b:	00 
 855e45c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 855e45f:	89 44 24 08          	mov    %eax,0x8(%esp)
 855e463:	8b 45 e8             	mov    -0x18(%ebp),%eax
 855e466:	89 44 24 04          	mov    %eax,0x4(%esp)
 855e46a:	8b 45 08             	mov    0x8(%ebp),%eax
 855e46d:	89 04 24             	mov    %eax,(%esp)
 855e470:	e8 b5 ef ff ff       	call   855d42a <_ZN12CLeagueMatch10_PutInRoomEP5CUserP8PvP_Roomb>
 855e475:	eb 07                	jmp    855e47e <_ZN12CLeagueMatch11_ReturnTeamEP8PvP_RoomiP5CUser+0x106>
 855e477:	90                   	nop
 855e478:	eb 04                	jmp    855e47e <_ZN12CLeagueMatch11_ReturnTeamEP8PvP_RoomiP5CUser+0x106>
 855e47a:	90                   	nop
 855e47b:	eb 01                	jmp    855e47e <_ZN12CLeagueMatch11_ReturnTeamEP8PvP_RoomiP5CUser+0x106>
 855e47d:	90                   	nop
 855e47e:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 855e482:	83 7d f0 07          	cmpl   $0x7,-0x10(%ebp)
 855e486:	0f 96 c0             	setbe  %al
 855e489:	84 c0                	test   %al,%al
 855e48b:	0f 85 07 ff ff ff    	jne    855e398 <_ZN12CLeagueMatch11_ReturnTeamEP8PvP_RoomiP5CUser+0x20>
 855e491:	8b 45 08             	mov    0x8(%ebp),%eax
 855e494:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 855e49b:	c9                   	leave
 855e49c:	c3                   	ret
 855e49d:	90                   	nop

```

```c
// CLeagueMatch::_ReturnTeam @ 0x855e378

/* CLeagueMatch::_ReturnTeam(PvP_Room*, int, CUser*) */

void __thiscall
CLeagueMatch::_ReturnTeam(CLeagueMatch *this,PvP_Room *param_1,int param_2,CUser *param_3)

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
// === 0855e664 CLeagueMatch::_SendMatchStatePacket  [0x0855e664-0x855e7a7] ===
 855e664:	55                   	push   %ebp
 855e665:	89 e5                	mov    %esp,%ebp
 855e667:	56                   	push   %esi
 855e668:	53                   	push   %ebx
 855e669:	83 ec 30             	sub    $0x30,%esp
 855e66c:	8d 45 e0             	lea    -0x20(%ebp),%eax
 855e66f:	89 04 24             	mov    %eax,(%esp)
 855e672:	e8 d5 f6 02 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 855e677:	c7 44 24 08 af 00 00 	movl   $0xaf,0x8(%esp)
 855e67e:	00 
 855e67f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 855e686:	00 
 855e687:	8d 45 e0             	lea    -0x20(%ebp),%eax
 855e68a:	89 04 24             	mov    %eax,(%esp)
 855e68d:	e8 6a d2 b6 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 855e692:	8b 45 0c             	mov    0xc(%ebp),%eax
 855e695:	89 44 24 04          	mov    %eax,0x4(%esp)
 855e699:	8d 45 e0             	lea    -0x20(%ebp),%eax
 855e69c:	89 04 24             	mov    %eax,(%esp)
 855e69f:	e8 7c d2 b6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 855e6a4:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 855e6ab:	00 
 855e6ac:	8d 45 e0             	lea    -0x20(%ebp),%eax
 855e6af:	89 04 24             	mov    %eax,(%esp)
 855e6b2:	e8 a1 d2 b6 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 855e6b7:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 855e6be:	e9 a4 00 00 00       	jmp    855e767 <_ZN12CLeagueMatch21_SendMatchStatePacketEii+0x103>
 855e6c3:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 855e6ca:	e9 85 00 00 00       	jmp    855e754 <_ZN12CLeagueMatch21_SendMatchStatePacketEii+0xf0>
 855e6cf:	8b 4d ec             	mov    -0x14(%ebp),%ecx
 855e6d2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 855e6d5:	8b 5d 08             	mov    0x8(%ebp),%ebx
 855e6d8:	c1 e0 02             	shl    $0x2,%eax
 855e6db:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
 855e6e2:	29 c2                	sub    %eax,%edx
 855e6e4:	89 c8                	mov    %ecx,%eax
 855e6e6:	89 c1                	mov    %eax,%ecx
 855e6e8:	c1 e1 04             	shl    $0x4,%ecx
 855e6eb:	8d 04 cd 00 00 00 00 	lea    0x0(,%ecx,8),%eax
 855e6f2:	29 c8                	sub    %ecx,%eax
 855e6f4:	8d 04 02             	lea    (%edx,%eax,1),%eax
 855e6f7:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 855e6fa:	83 c0 24             	add    $0x24,%eax
 855e6fd:	8b 00                	mov    (%eax),%eax
 855e6ff:	89 45 f4             	mov    %eax,-0xc(%ebp)
 855e702:	8b 4d ec             	mov    -0x14(%ebp),%ecx
 855e705:	8b 45 f0             	mov    -0x10(%ebp),%eax
 855e708:	8b 5d 08             	mov    0x8(%ebp),%ebx
 855e70b:	c1 e0 02             	shl    $0x2,%eax
 855e70e:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
 855e715:	29 c2                	sub    %eax,%edx
 855e717:	89 c8                	mov    %ecx,%eax
 855e719:	89 c1                	mov    %eax,%ecx
 855e71b:	c1 e1 04             	shl    $0x4,%ecx
 855e71e:	8d 04 cd 00 00 00 00 	lea    0x0(,%ecx,8),%eax
 855e725:	29 c8                	sub    %ecx,%eax
 855e727:	8d 04 02             	lea    (%edx,%eax,1),%eax
 855e72a:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 855e72d:	83 c0 10             	add    $0x10,%eax
 855e730:	0f b6 40 18          	movzbl 0x18(%eax),%eax
 855e734:	84 c0                	test   %al,%al
 855e736:	74 18                	je     855e750 <_ZN12CLeagueMatch21_SendMatchStatePacketEii+0xec>
 855e738:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 855e73c:	74 12                	je     855e750 <_ZN12CLeagueMatch21_SendMatchStatePacketEii+0xec>
 855e73e:	8d 45 e0             	lea    -0x20(%ebp),%eax
 855e741:	89 44 24 04          	mov    %eax,0x4(%esp)
 855e745:	8b 45 f4             	mov    -0xc(%ebp),%eax
 855e748:	89 04 24             	mov    %eax,(%esp)
 855e74b:	e8 6a 9e 0e 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 855e750:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 855e754:	83 7d f0 03          	cmpl   $0x3,-0x10(%ebp)
 855e758:	0f 9e c0             	setle  %al
 855e75b:	84 c0                	test   %al,%al
 855e75d:	0f 85 6c ff ff ff    	jne    855e6cf <_ZN12CLeagueMatch21_SendMatchStatePacketEii+0x6b>
 855e763:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 855e767:	8b 45 ec             	mov    -0x14(%ebp),%eax
 855e76a:	3b 45 10             	cmp    0x10(%ebp),%eax
 855e76d:	0f 9c c0             	setl   %al
 855e770:	84 c0                	test   %al,%al
 855e772:	0f 85 4b ff ff ff    	jne    855e6c3 <_ZN12CLeagueMatch21_SendMatchStatePacketEii+0x5f>
 855e778:	eb 1b                	jmp    855e795 <_ZN12CLeagueMatch21_SendMatchStatePacketEii+0x131>
 855e77a:	89 d3                	mov    %edx,%ebx
 855e77c:	89 c6                	mov    %eax,%esi
 855e77e:	8d 45 e0             	lea    -0x20(%ebp),%eax
 855e781:	89 04 24             	mov    %eax,(%esp)
 855e784:	e8 f7 f6 02 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 855e789:	89 f0                	mov    %esi,%eax
 855e78b:	89 da                	mov    %ebx,%edx
 855e78d:	89 04 24             	mov    %eax,(%esp)
 855e790:	e8 bb 4f 58 00       	call   8ae3750 <_Unwind_Resume>
 855e795:	8d 45 e0             	lea    -0x20(%ebp),%eax
 855e798:	89 04 24             	mov    %eax,(%esp)
 855e79b:	e8 e0 f6 02 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 855e7a0:	83 c4 30             	add    $0x30,%esp
 855e7a3:	5b                   	pop    %ebx
 855e7a4:	5e                   	pop    %esi
 855e7a5:	5d                   	pop    %ebp
 855e7a6:	c3                   	ret
 855e7a7:	90                   	nop

```

```c
// CLeagueMatch::_SendMatchStatePacket @ 0x855e664

/* CLeagueMatch::_SendMatchStatePacket(int, int) */

void __thiscall CLeagueMatch::_SendMatchStatePacket(CLeagueMatch *this,int param_1,int param_2)

{
  PacketGuard local_24 [12];
  int local_18;
  int local_14;
  CUser *local_10;
  
  PacketGuard::PacketGuard(local_24);
                    /* try { // try from 0855e68d to 0855e74f has its CatchHandler @ 0855e77a */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,0,0xaf);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,param_1);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
  for (local_18 = 0; local_18 < param_2; local_18 = local_18 + 1) {
    for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
      local_10 = *(CUser **)(this + local_14 * 0x1c + local_18 * 0x70 + 0x24);
      if ((this[local_14 * 0x1c + local_18 * 0x70 + 0x28] != (CLeagueMatch)0x0) &&
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

## _getSameSchool

```asm
// === 0855e7a8 CLeagueMatch::_getSameSchool  [0x0855e7a8-0x855e7ed] ===
 855e7a8:	55                   	push   %ebp
 855e7a9:	89 e5                	mov    %esp,%ebp
 855e7ab:	83 ec 10             	sub    $0x10,%esp
 855e7ae:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 855e7b5:	eb 23                	jmp    855e7da <_ZN12CLeagueMatch14_getSameSchoolEPjiij+0x32>
 855e7b7:	8b 45 fc             	mov    -0x4(%ebp),%eax
 855e7ba:	3b 45 10             	cmp    0x10(%ebp),%eax
 855e7bd:	74 17                	je     855e7d6 <_ZN12CLeagueMatch14_getSameSchoolEPjiij+0x2e>
 855e7bf:	8b 45 fc             	mov    -0x4(%ebp),%eax
 855e7c2:	c1 e0 02             	shl    $0x2,%eax
 855e7c5:	03 45 0c             	add    0xc(%ebp),%eax
 855e7c8:	8b 00                	mov    (%eax),%eax
 855e7ca:	3b 45 18             	cmp    0x18(%ebp),%eax
 855e7cd:	75 07                	jne    855e7d6 <_ZN12CLeagueMatch14_getSameSchoolEPjiij+0x2e>
 855e7cf:	b8 01 00 00 00       	mov    $0x1,%eax
 855e7d4:	eb 16                	jmp    855e7ec <_ZN12CLeagueMatch14_getSameSchoolEPjiij+0x44>
 855e7d6:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 855e7da:	8b 45 fc             	mov    -0x4(%ebp),%eax
 855e7dd:	3b 45 14             	cmp    0x14(%ebp),%eax
 855e7e0:	0f 9c c0             	setl   %al
 855e7e3:	84 c0                	test   %al,%al
 855e7e5:	75 d0                	jne    855e7b7 <_ZN12CLeagueMatch14_getSameSchoolEPjiij+0xf>
 855e7e7:	b8 00 00 00 00       	mov    $0x0,%eax
 855e7ec:	c9                   	leave
 855e7ed:	c3                   	ret

```

```c
// CLeagueMatch::_getSameSchool @ 0x855e7a8

/* CLeagueMatch::_getSameSchool(unsigned int*, int, int, unsigned int) */

undefined4 __thiscall
CLeagueMatch::_getSameSchool(CLeagueMatch *this,uint *param_1,int param_2,int param_3,uint param_4)

{
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (param_3 <= local_8) {
      return 0;
    }
    if ((local_8 != param_2) && (param_1[local_8] == param_4)) break;
    local_8 = local_8 + 1;
  }
  return 1;
}

```

---

## addBadge

```asm
// === 0855e7ee CLeagueMatch::addBadge  [0x0855e7ee-0x855eb21] ===
 855e7ee:	55                   	push   %ebp
 855e7ef:	89 e5                	mov    %esp,%ebp
 855e7f1:	57                   	push   %edi
 855e7f2:	56                   	push   %esi
 855e7f3:	53                   	push   %ebx
 855e7f4:	81 ec 3c 01 00 00    	sub    $0x13c,%esp
 855e7fa:	8b 45 18             	mov    0x18(%ebp),%eax
 855e7fd:	88 85 d4 fe ff ff    	mov    %al,-0x12c(%ebp)
 855e803:	8b 45 0c             	mov    0xc(%ebp),%eax
 855e806:	0f b6 40 0c          	movzbl 0xc(%eax),%eax
 855e80a:	83 f0 01             	xor    $0x1,%eax
 855e80d:	84 c0                	test   %al,%al
 855e80f:	74 0a                	je     855e81b <_ZN12CLeagueMatch8addBadgeEP10PlayerInfo15ENUM_BADGE_TYPEPhb+0x2d>
 855e811:	bb 00 00 00 00       	mov    $0x0,%ebx
 855e816:	e9 fa 02 00 00       	jmp    855eb15 <_ZN12CLeagueMatch8addBadgeEP10PlayerInfo15ENUM_BADGE_TYPEPhb+0x327>
 855e81b:	8b 45 0c             	mov    0xc(%ebp),%eax
 855e81e:	8b 40 08             	mov    0x8(%eax),%eax
 855e821:	85 c0                	test   %eax,%eax
 855e823:	75 0a                	jne    855e82f <_ZN12CLeagueMatch8addBadgeEP10PlayerInfo15ENUM_BADGE_TYPEPhb+0x41>
 855e825:	bb 00 00 00 00       	mov    $0x0,%ebx
 855e82a:	e9 e6 02 00 00       	jmp    855eb15 <_ZN12CLeagueMatch8addBadgeEP10PlayerInfo15ENUM_BADGE_TYPEPhb+0x327>
 855e82f:	8b 45 0c             	mov    0xc(%ebp),%eax
 855e832:	8b 40 08             	mov    0x8(%eax),%eax
 855e835:	89 04 24             	mov    %eax,(%esp)
 855e838:	e8 f5 1b bc ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 855e83d:	85 c0                	test   %eax,%eax
 855e83f:	0f 94 c0             	sete   %al
 855e842:	84 c0                	test   %al,%al
 855e844:	74 0a                	je     855e850 <_ZN12CLeagueMatch8addBadgeEP10PlayerInfo15ENUM_BADGE_TYPEPhb+0x62>
 855e846:	bb 00 00 00 00       	mov    $0x0,%ebx
 855e84b:	e9 c5 02 00 00       	jmp    855eb15 <_ZN12CLeagueMatch8addBadgeEP10PlayerInfo15ENUM_BADGE_TYPEPhb+0x327>
 855e850:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 855e854:	75 2a                	jne    855e880 <_ZN12CLeagueMatch8addBadgeEP10PlayerInfo15ENUM_BADGE_TYPEPhb+0x92>
 855e856:	8b 45 0c             	mov    0xc(%ebp),%eax
 855e859:	8b 40 08             	mov    0x8(%eax),%eax
 855e85c:	8b 55 10             	mov    0x10(%ebp),%edx
 855e85f:	89 54 24 04          	mov    %edx,0x4(%esp)
 855e863:	89 04 24             	mov    %eax,(%esp)
 855e866:	e8 dd a5 00 00       	call   8568e48 <_ZN5CUser13GetDailyBadgeE15ENUM_BADGE_TYPE>
 855e86b:	66 83 f8 09          	cmp    $0x9,%ax
 855e86f:	0f 9f c0             	setg   %al
 855e872:	84 c0                	test   %al,%al
 855e874:	74 51                	je     855e8c7 <_ZN12CLeagueMatch8addBadgeEP10PlayerInfo15ENUM_BADGE_TYPEPhb+0xd9>
 855e876:	bb 00 00 00 00       	mov    $0x0,%ebx
 855e87b:	e9 95 02 00 00       	jmp    855eb15 <_ZN12CLeagueMatch8addBadgeEP10PlayerInfo15ENUM_BADGE_TYPEPhb+0x327>
 855e880:	8b 45 0c             	mov    0xc(%ebp),%eax
 855e883:	8b 40 08             	mov    0x8(%eax),%eax
 855e886:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 855e88d:	00 
 855e88e:	89 04 24             	mov    %eax,(%esp)
 855e891:	e8 b2 a5 00 00       	call   8568e48 <_ZN5CUser13GetDailyBadgeE15ENUM_BADGE_TYPE>
 855e896:	0f bf d8             	movswl %ax,%ebx
 855e899:	8b 45 0c             	mov    0xc(%ebp),%eax
 855e89c:	8b 40 08             	mov    0x8(%eax),%eax
 855e89f:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 855e8a6:	00 
 855e8a7:	89 04 24             	mov    %eax,(%esp)
 855e8aa:	e8 99 a5 00 00       	call   8568e48 <_ZN5CUser13GetDailyBadgeE15ENUM_BADGE_TYPE>
 855e8af:	98                   	cwtl
 855e8b0:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 855e8b3:	83 f8 09             	cmp    $0x9,%eax
 855e8b6:	0f 9f c0             	setg   %al
 855e8b9:	84 c0                	test   %al,%al
 855e8bb:	74 0a                	je     855e8c7 <_ZN12CLeagueMatch8addBadgeEP10PlayerInfo15ENUM_BADGE_TYPEPhb+0xd9>
 855e8bd:	bb 00 00 00 00       	mov    $0x0,%ebx
 855e8c2:	e9 4e 02 00 00       	jmp    855eb15 <_ZN12CLeagueMatch8addBadgeEP10PlayerInfo15ENUM_BADGE_TYPEPhb+0x327>
 855e8c7:	8b 45 0c             	mov    0xc(%ebp),%eax
 855e8ca:	8b 40 08             	mov    0x8(%eax),%eax
 855e8cd:	8b 55 10             	mov    0x10(%ebp),%edx
 855e8d0:	89 54 24 04          	mov    %edx,0x4(%esp)
 855e8d4:	89 04 24             	mov    %eax,(%esp)
 855e8d7:	e8 82 a5 00 00       	call   8568e5e <_ZN5CUser13AddDailyBadgeE15ENUM_BADGE_TYPE>
 855e8dc:	8b 45 14             	mov    0x14(%ebp),%eax
 855e8df:	c6 00 01             	movb   $0x1,(%eax)
 855e8e2:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 855e8e9:	80 bd d4 fe ff ff 00 	cmpb   $0x0,-0x12c(%ebp)
 855e8f0:	74 04                	je     855e8f6 <_ZN12CLeagueMatch8addBadgeEP10PlayerInfo15ENUM_BADGE_TYPEPhb+0x108>
 855e8f2:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 855e8f6:	8d 9d d8 fe ff ff    	lea    -0x128(%ebp),%ebx
 855e8fc:	b8 00 00 00 00       	mov    $0x0,%eax
 855e901:	ba 40 00 00 00       	mov    $0x40,%edx
 855e906:	89 df                	mov    %ebx,%edi
 855e908:	89 d1                	mov    %edx,%ecx
 855e90a:	f3 ab                	rep stos %eax,%es:(%edi)
 855e90c:	8b 45 10             	mov    0x10(%ebp),%eax
 855e90f:	83 f8 01             	cmp    $0x1,%eax
 855e912:	74 12                	je     855e926 <_ZN12CLeagueMatch8addBadgeEP10PlayerInfo15ENUM_BADGE_TYPEPhb+0x138>
 855e914:	83 f8 02             	cmp    $0x2,%eax
 855e917:	74 62                	je     855e97b <_ZN12CLeagueMatch8addBadgeEP10PlayerInfo15ENUM_BADGE_TYPEPhb+0x18d>
 855e919:	85 c0                	test   %eax,%eax
 855e91b:	0f 84 ac 00 00 00    	je     855e9cd <_ZN12CLeagueMatch8addBadgeEP10PlayerInfo15ENUM_BADGE_TYPEPhb+0x1df>
 855e921:	e9 f7 00 00 00       	jmp    855ea1d <_ZN12CLeagueMatch8addBadgeEP10PlayerInfo15ENUM_BADGE_TYPEPhb+0x22f>
 855e926:	8b 45 14             	mov    0x14(%ebp),%eax
 855e929:	0f b6 00             	movzbl (%eax),%eax
 855e92c:	0f b6 c0             	movzbl %al,%eax
 855e92f:	89 c3                	mov    %eax,%ebx
 855e931:	03 5d e4             	add    -0x1c(%ebp),%ebx
 855e934:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 855e93b:	00 
 855e93c:	c7 44 24 08 c9 22 ca 	movl   $0x8ca22c9,0x8(%esp)
 855e943:	08 
 855e944:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 855e94b:	00 
 855e94c:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 855e953:	e8 a6 6e 54 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 855e958:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 855e95c:	89 44 24 08          	mov    %eax,0x8(%esp)
 855e960:	c7 44 24 04 ff 00 00 	movl   $0xff,0x4(%esp)
 855e967:	00 
 855e968:	8d 85 d8 fe ff ff    	lea    -0x128(%ebp),%eax
 855e96e:	89 04 24             	mov    %eax,(%esp)
 855e971:	e8 a6 de 02 00       	call   858c81c <_ZN6OS_API8snprintfEPcjPKcz>
 855e976:	e9 a2 00 00 00       	jmp    855ea1d <_ZN12CLeagueMatch8addBadgeEP10PlayerInfo15ENUM_BADGE_TYPEPhb+0x22f>
 855e97b:	8b 45 14             	mov    0x14(%ebp),%eax
 855e97e:	0f b6 00             	movzbl (%eax),%eax
 855e981:	0f b6 c0             	movzbl %al,%eax
 855e984:	89 c3                	mov    %eax,%ebx
 855e986:	03 5d e4             	add    -0x1c(%ebp),%ebx
 855e989:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 855e990:	00 
 855e991:	c7 44 24 08 de 22 ca 	movl   $0x8ca22de,0x8(%esp)
 855e998:	08 
 855e999:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 855e9a0:	00 
 855e9a1:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 855e9a8:	e8 51 6e 54 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 855e9ad:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 855e9b1:	89 44 24 08          	mov    %eax,0x8(%esp)
 855e9b5:	c7 44 24 04 ff 00 00 	movl   $0xff,0x4(%esp)
 855e9bc:	00 
 855e9bd:	8d 85 d8 fe ff ff    	lea    -0x128(%ebp),%eax
 855e9c3:	89 04 24             	mov    %eax,(%esp)
 855e9c6:	e8 51 de 02 00       	call   858c81c <_ZN6OS_API8snprintfEPcjPKcz>
 855e9cb:	eb 50                	jmp    855ea1d <_ZN12CLeagueMatch8addBadgeEP10PlayerInfo15ENUM_BADGE_TYPEPhb+0x22f>
 855e9cd:	8b 45 14             	mov    0x14(%ebp),%eax
 855e9d0:	0f b6 00             	movzbl (%eax),%eax
 855e9d3:	0f b6 c0             	movzbl %al,%eax
 855e9d6:	89 c3                	mov    %eax,%ebx
 855e9d8:	03 5d e4             	add    -0x1c(%ebp),%ebx
 855e9db:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 855e9e2:	00 
 855e9e3:	c7 44 24 08 f4 22 ca 	movl   $0x8ca22f4,0x8(%esp)
 855e9ea:	08 
 855e9eb:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 855e9f2:	00 
 855e9f3:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 855e9fa:	e8 ff 6d 54 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 855e9ff:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 855ea03:	89 44 24 08          	mov    %eax,0x8(%esp)
 855ea07:	c7 44 24 04 ff 00 00 	movl   $0xff,0x4(%esp)
 855ea0e:	00 
 855ea0f:	8d 85 d8 fe ff ff    	lea    -0x128(%ebp),%eax
 855ea15:	89 04 24             	mov    %eax,(%esp)
 855ea18:	e8 ff dd 02 00       	call   858c81c <_ZN6OS_API8snprintfEPcjPKcz>
 855ea1d:	8d 45 d8             	lea    -0x28(%ebp),%eax
 855ea20:	89 04 24             	mov    %eax,(%esp)
 855ea23:	e8 24 f3 02 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 855ea28:	c7 44 24 08 0c 00 00 	movl   $0xc,0x8(%esp)
 855ea2f:	00 
 855ea30:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 855ea37:	00 
 855ea38:	8d 45 d8             	lea    -0x28(%ebp),%eax
 855ea3b:	89 04 24             	mov    %eax,(%esp)
 855ea3e:	e8 b9 ce b6 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 855ea43:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 855ea4a:	00 
 855ea4b:	8d 45 d8             	lea    -0x28(%ebp),%eax
 855ea4e:	89 04 24             	mov    %eax,(%esp)
 855ea51:	e8 ca ce b6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 855ea56:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 855ea5d:	00 
 855ea5e:	8d 45 d8             	lea    -0x28(%ebp),%eax
 855ea61:	89 04 24             	mov    %eax,(%esp)
 855ea64:	e8 3b b4 b7 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 855ea69:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 855ea70:	00 
 855ea71:	8d 45 d8             	lea    -0x28(%ebp),%eax
 855ea74:	89 04 24             	mov    %eax,(%esp)
 855ea77:	e8 a4 ce b6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 855ea7c:	8d 85 d8 fe ff ff    	lea    -0x128(%ebp),%eax
 855ea82:	89 04 24             	mov    %eax,(%esp)
 855ea85:	e8 26 f9 b1 ff       	call   807e3b0 <strlen@plt>
 855ea8a:	89 44 24 04          	mov    %eax,0x4(%esp)
 855ea8e:	8d 45 d8             	lea    -0x28(%ebp),%eax
 855ea91:	89 04 24             	mov    %eax,(%esp)
 855ea94:	e8 a3 ce b6 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 855ea99:	8d 85 d8 fe ff ff    	lea    -0x128(%ebp),%eax
 855ea9f:	89 04 24             	mov    %eax,(%esp)
 855eaa2:	e8 09 f9 b1 ff       	call   807e3b0 <strlen@plt>
 855eaa7:	89 44 24 08          	mov    %eax,0x8(%esp)
 855eaab:	8d 85 d8 fe ff ff    	lea    -0x128(%ebp),%eax
 855eab1:	89 44 24 04          	mov    %eax,0x4(%esp)
 855eab5:	8d 45 d8             	lea    -0x28(%ebp),%eax
 855eab8:	89 04 24             	mov    %eax,(%esp)
 855eabb:	e8 24 89 c5 ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 855eac0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 855eac7:	00 
 855eac8:	8d 45 d8             	lea    -0x28(%ebp),%eax
 855eacb:	89 04 24             	mov    %eax,(%esp)
 855eace:	e8 85 ce b6 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 855ead3:	8b 45 0c             	mov    0xc(%ebp),%eax
 855ead6:	8b 40 08             	mov    0x8(%eax),%eax
 855ead9:	8d 55 d8             	lea    -0x28(%ebp),%edx
 855eadc:	89 54 24 04          	mov    %edx,0x4(%esp)
 855eae0:	89 04 24             	mov    %eax,(%esp)
 855eae3:	e8 d2 9a 0e 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 855eae8:	bb 01 00 00 00       	mov    $0x1,%ebx
 855eaed:	8d 45 d8             	lea    -0x28(%ebp),%eax
 855eaf0:	89 04 24             	mov    %eax,(%esp)
 855eaf3:	e8 88 f3 02 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 855eaf8:	eb 1b                	jmp    855eb15 <_ZN12CLeagueMatch8addBadgeEP10PlayerInfo15ENUM_BADGE_TYPEPhb+0x327>
 855eafa:	89 d3                	mov    %edx,%ebx
 855eafc:	89 c6                	mov    %eax,%esi
 855eafe:	8d 45 d8             	lea    -0x28(%ebp),%eax
 855eb01:	89 04 24             	mov    %eax,(%esp)
 855eb04:	e8 77 f3 02 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 855eb09:	89 f0                	mov    %esi,%eax
 855eb0b:	89 da                	mov    %ebx,%edx
 855eb0d:	89 04 24             	mov    %eax,(%esp)
 855eb10:	e8 3b 4c 58 00       	call   8ae3750 <_Unwind_Resume>
 855eb15:	89 d8                	mov    %ebx,%eax
 855eb17:	81 c4 3c 01 00 00    	add    $0x13c,%esp
 855eb1d:	5b                   	pop    %ebx
 855eb1e:	5e                   	pop    %esi
 855eb1f:	5f                   	pop    %edi
 855eb20:	5d                   	pop    %ebp
 855eb21:	c3                   	ret

```

```c
// CLeagueMatch::addBadge @ 0x855e7ee

/* CLeagueMatch::addBadge(PlayerInfo*, ENUM_BADGE_TYPE, unsigned char*, bool) */

undefined4 __thiscall
CLeagueMatch::addBadge(undefined4 this,int param_1,int param_3,byte *param_4,char param_5)

{
  short sVar1;
  short sVar2;
  int iVar3;
  char *pcVar4;
  size_t sVar5;
  undefined4 uVar6;
  byte bVar7;
  char local_12c [256];
  PacketGuard local_2c [12];
  uint local_20;
  
  bVar7 = 0;
  if (*(char *)(param_1 + 0xc) == '\x01') {
    if (*(int *)(param_1 + 8) == 0) {
      uVar6 = 0;
    }
    else {
      iVar3 = CUserCharacInfo::getCurCharacR(*(CUserCharacInfo **)(param_1 + 8));
      if (iVar3 == 0) {
        uVar6 = 0;
      }
      else {
        if (param_3 == 0) {
          sVar1 = CUser::GetDailyBadge(*(CUser **)(param_1 + 8),0);
          if (9 < sVar1) {
            return 0;
          }
        }
        else {
          sVar1 = CUser::GetDailyBadge(*(CUser **)(param_1 + 8),1);
          sVar2 = CUser::GetDailyBadge(*(CUser **)(param_1 + 8),2);
          if (9 < (int)sVar1 + (int)sVar2) {
            return 0;
          }
        }
        CUser::AddDailyBadge(*(CUser **)(param_1 + 8),param_3);
        *param_4 = 1;
        local_20 = (uint)(param_5 != '\0');
        pcVar4 = local_12c;
        for (iVar3 = 0x40; iVar3 != 0; iVar3 = iVar3 + -1) {
          pcVar4[0] = '\0';
          pcVar4[1] = '\0';
          pcVar4[2] = '\0';
          pcVar4[3] = '\0';
          pcVar4 = pcVar4 + ((uint)bVar7 * -2 + 1) * 4;
        }
        if (param_3 == 1) {
          iVar3 = *param_4 + local_20;
          pcVar4 = (char *)RDARScriptStringManager::findString
                                     ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                      "school_red_badge_msg",(bool *)0x0);
          OS_API::snprintf(local_12c,0xff,pcVar4,iVar3);
        }
        else if (param_3 == 2) {
          iVar3 = *param_4 + local_20;
          pcVar4 = (char *)RDARScriptStringManager::findString
                                     ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                      "school_blue_badge_msg",(bool *)0x0);
          OS_API::snprintf(local_12c,0xff,pcVar4,iVar3);
        }
        else if (param_3 == 0) {
          iVar3 = *param_4 + local_20;
          pcVar4 = (char *)RDARScriptStringManager::findString
                                     ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                      "school_green_badge_msg",(bool *)0x0);
          OS_API::snprintf(local_12c,0xff,pcVar4,iVar3);
        }
        PacketGuard::PacketGuard(local_2c);
                    /* try { // try from 0855ea3e to 0855eae7 has its CatchHandler @ 0855eafa */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_2c,0,0xc);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,0);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_2c,0);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,0);
        sVar5 = strlen(local_12c);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,sVar5);
        sVar5 = strlen(local_12c);
        InterfacePacketBuf::put_str((InterfacePacketBuf *)local_2c,local_12c,sVar5);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_2c,true);
        CUser::Send(*(CUser **)(param_1 + 8),local_2c);
        uVar6 = 1;
        PacketGuard::~PacketGuard(local_2c);
      }
    }
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}

```

---

## ~CLeagueMatch

```asm
// === 0855ce4c CLeagueMatch::~CLeagueMatch  [0x0855ce4c-0x855ced9] ===
 855ce4c:	55                   	push   %ebp
 855ce4d:	89 e5                	mov    %esp,%ebp
 855ce4f:	56                   	push   %esi
 855ce50:	53                   	push   %ebx
 855ce51:	83 ec 10             	sub    $0x10,%esp
 855ce54:	8b 45 08             	mov    0x8(%ebp),%eax
 855ce57:	c7 00 28 3d ca 08    	movl   $0x8ca3d28,(%eax)
 855ce5d:	a1 68 e0 43 09       	mov    0x943e068,%eax
 855ce62:	83 e8 01             	sub    $0x1,%eax
 855ce65:	a3 68 e0 43 09       	mov    %eax,0x943e068
 855ce6a:	a1 64 e0 43 09       	mov    0x943e064,%eax
 855ce6f:	85 c0                	test   %eax,%eax
 855ce71:	74 16                	je     855ce89 <_ZN12CLeagueMatchD1Ev+0x3d>
 855ce73:	a1 68 e0 43 09       	mov    0x943e068,%eax
 855ce78:	85 c0                	test   %eax,%eax
 855ce7a:	75 0d                	jne    855ce89 <_ZN12CLeagueMatchD1Ev+0x3d>
 855ce7c:	a1 64 e0 43 09       	mov    0x943e064,%eax
 855ce81:	89 04 24             	mov    %eax,(%esp)
 855ce84:	e8 67 76 1c 00       	call   87244f0 <_ZdlPv>
 855ce89:	8b 45 08             	mov    0x8(%ebp),%eax
 855ce8c:	83 c0 08             	add    $0x8,%eax
 855ce8f:	89 04 24             	mov    %eax,(%esp)
 855ce92:	e8 c5 c0 00 00       	call   8568f5c <_ZN13PVP_ROOM_INFOD1Ev>
 855ce97:	eb 1b                	jmp    855ceb4 <_ZN12CLeagueMatchD1Ev+0x68>
 855ce99:	89 d3                	mov    %edx,%ebx
 855ce9b:	89 c6                	mov    %eax,%esi
 855ce9d:	8b 45 08             	mov    0x8(%ebp),%eax
 855cea0:	89 04 24             	mov    %eax,(%esp)
 855cea3:	e8 bc b7 00 00       	call   8568664 <_ZN6IMatchD1Ev>
 855cea8:	89 f0                	mov    %esi,%eax
 855ceaa:	89 da                	mov    %ebx,%edx
 855ceac:	89 04 24             	mov    %eax,(%esp)
 855ceaf:	e8 9c 68 58 00       	call   8ae3750 <_Unwind_Resume>
 855ceb4:	8b 45 08             	mov    0x8(%ebp),%eax
 855ceb7:	89 04 24             	mov    %eax,(%esp)
 855ceba:	e8 a5 b7 00 00       	call   8568664 <_ZN6IMatchD1Ev>
 855cebf:	b8 00 00 00 00       	mov    $0x0,%eax
 855cec4:	84 c0                	test   %al,%al
 855cec6:	74 0b                	je     855ced3 <_ZN12CLeagueMatchD1Ev+0x87>
 855cec8:	8b 45 08             	mov    0x8(%ebp),%eax
 855cecb:	89 04 24             	mov    %eax,(%esp)
 855cece:	e8 1d 76 1c 00       	call   87244f0 <_ZdlPv>
 855ced3:	83 c4 10             	add    $0x10,%esp
 855ced6:	5b                   	pop    %ebx
 855ced7:	5e                   	pop    %esi
 855ced8:	5d                   	pop    %ebp
 855ced9:	c3                   	ret

```

```c
// CLeagueMatch::~CLeagueMatch @ 0x855ce4c

/* WARNING: Removing unreachable block (ram,0x0855cec8) */
/* CLeagueMatch::~CLeagueMatch() */

void __thiscall CLeagueMatch::~CLeagueMatch(CLeagueMatch *this)

{
  *(undefined ***)this = &PTR__CLeagueMatch_08ca3d28;
  nWaitingRoomListRefCount_ = nWaitingRoomListRefCount_ + -1;
  if ((pWaitingRoomList_ != (void *)0x0) && (nWaitingRoomListRefCount_ == 0)) {
    operator_delete(pWaitingRoomList_);
  }
                    /* try { // try from 0855ce92 to 0855ce96 has its CatchHandler @ 0855ce99 */
  PVP_ROOM_INFO::~PVP_ROOM_INFO((PVP_ROOM_INFO *)(this + 8));
  IMatch::~IMatch((IMatch *)this);
  return;
}

```

---

## ~CLeagueMatch_0855ceda

```asm
// === 0855ceda CLeagueMatch::~CLeagueMatch  [0x0855ceda-0x855cef7] ===
 855ceda:	55                   	push   %ebp
 855cedb:	89 e5                	mov    %esp,%ebp
 855cedd:	83 ec 18             	sub    $0x18,%esp
 855cee0:	8b 45 08             	mov    0x8(%ebp),%eax
 855cee3:	89 04 24             	mov    %eax,(%esp)
 855cee6:	e8 61 ff ff ff       	call   855ce4c <_ZN12CLeagueMatchD1Ev>
 855ceeb:	8b 45 08             	mov    0x8(%ebp),%eax
 855ceee:	89 04 24             	mov    %eax,(%esp)
 855cef1:	e8 fa 75 1c 00       	call   87244f0 <_ZdlPv>
 855cef6:	c9                   	leave
 855cef7:	c3                   	ret

```

```c
// CLeagueMatch::~CLeagueMatch @ 0x855ceda

/* CLeagueMatch::~CLeagueMatch() */

void __thiscall CLeagueMatch::~CLeagueMatch(CLeagueMatch *this)

{
  ~CLeagueMatch(this);
  operator_delete(this);
  return;
}

```

