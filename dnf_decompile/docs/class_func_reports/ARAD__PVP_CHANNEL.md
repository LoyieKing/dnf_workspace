# ARAD__PVP_CHANNEL

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 6

---

## check_Login_server_group

```asm
// === 08197781 ARAD::PVP_CHANNEL::check_Login_server_group  [0x08197781-0x81977b5] ===
 8197781:	55                   	push   %ebp
 8197782:	89 e5                	mov    %esp,%ebp
 8197784:	83 ec 28             	sub    $0x28,%esp
 8197787:	e8 1b 2c f4 ff       	call   80da3a7 <_Z11G_GameWorldv>
 819778c:	89 04 24             	mov    %eax,(%esp)
 819778f:	e8 8c f3 f7 ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 8197794:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8197797:	e8 2b ff ff ff       	call   81976c7 <_ZN4ARAD11PVP_CHANNEL18is_all_pvp_channelEv>
 819779c:	83 f0 01             	xor    $0x1,%eax
 819779f:	84 c0                	test   %al,%al
 81977a1:	74 0c                	je     81977af <_ZN4ARAD11PVP_CHANNEL24check_Login_server_groupEP14SIG_LOGIN_DATA+0x2e>
 81977a3:	8b 45 08             	mov    0x8(%ebp),%eax
 81977a6:	66 c7 80 38 3a 00 00 	movw   $0x0,0x3a38(%eax)
 81977ad:	00 00 
 81977af:	b8 01 00 00 00       	mov    $0x1,%eax
 81977b4:	c9                   	leave
 81977b5:	c3                   	ret

```

```c
// ARAD::PVP_CHANNEL::check_Login_server_group @ 0x8197781

/* ARAD::PVP_CHANNEL::check_Login_server_group(SIG_LOGIN_DATA*) */

undefined4 ARAD::PVP_CHANNEL::check_Login_server_group(SIG_LOGIN_DATA *param_1)

{
  char cVar1;
  GameWorld *this;
  
  this = (GameWorld *)G_GameWorld();
  GameWorld::GetChannelType(this);
  cVar1 = is_all_pvp_channel();
  if (cVar1 != '\x01') {
    *(undefined2 *)(param_1 + 0x3a38) = 0;
  }
  return 1;
}

```

---

## is_all_pvp_channel

```asm
// === 081976c7 ARAD::PVP_CHANNEL::is_all_pvp_channel  [0x081976c7-0x8197709] ===
 81976c7:	55                   	push   %ebp
 81976c8:	89 e5                	mov    %esp,%ebp
 81976ca:	83 ec 28             	sub    $0x28,%esp
 81976cd:	e8 d5 2c f4 ff       	call   80da3a7 <_Z11G_GameWorldv>
 81976d2:	89 04 24             	mov    %eax,(%esp)
 81976d5:	e8 46 f4 f7 ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 81976da:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81976dd:	e8 5a ff ff ff       	call   819763c <_ZN4ARAD11PVP_CHANNEL25is_integrated_pvp_channelEv>
 81976e2:	84 c0                	test   %al,%al
 81976e4:	75 06                	jne    81976ec <_ZN4ARAD11PVP_CHANNEL18is_all_pvp_channelEv+0x25>
 81976e6:	83 7d f4 07          	cmpl   $0x7,-0xc(%ebp)
 81976ea:	75 07                	jne    81976f3 <_ZN4ARAD11PVP_CHANNEL18is_all_pvp_channelEv+0x2c>
 81976ec:	b8 01 00 00 00       	mov    $0x1,%eax
 81976f1:	eb 05                	jmp    81976f8 <_ZN4ARAD11PVP_CHANNEL18is_all_pvp_channelEv+0x31>
 81976f3:	b8 00 00 00 00       	mov    $0x0,%eax
 81976f8:	84 c0                	test   %al,%al
 81976fa:	74 07                	je     8197703 <_ZN4ARAD11PVP_CHANNEL18is_all_pvp_channelEv+0x3c>
 81976fc:	b8 01 00 00 00       	mov    $0x1,%eax
 8197701:	eb 05                	jmp    8197708 <_ZN4ARAD11PVP_CHANNEL18is_all_pvp_channelEv+0x41>
 8197703:	b8 00 00 00 00       	mov    $0x0,%eax
 8197708:	c9                   	leave
 8197709:	c3                   	ret

```

```c
// ARAD::PVP_CHANNEL::is_all_pvp_channel @ 0x81976c7

/* ARAD::PVP_CHANNEL::is_all_pvp_channel() */

undefined1 ARAD::PVP_CHANNEL::is_all_pvp_channel(void)

{
  undefined1 uVar1;
  char cVar2;
  GameWorld *this;
  int iVar3;
  
  this = (GameWorld *)G_GameWorld();
  iVar3 = GameWorld::GetChannelType(this);
  cVar2 = is_integrated_pvp_channel();
  if ((cVar2 == '\0') && (iVar3 != 7)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

```

---

## is_broadcast_channel

```asm
// === 08197684 ARAD::PVP_CHANNEL::is_broadcast_channel  [0x08197684-0x81976c6] ===
 8197684:	55                   	push   %ebp
 8197685:	89 e5                	mov    %esp,%ebp
 8197687:	83 ec 28             	sub    $0x28,%esp
 819768a:	e8 18 2d f4 ff       	call   80da3a7 <_Z11G_GameWorldv>
 819768f:	89 04 24             	mov    %eax,(%esp)
 8197692:	e8 89 f4 f7 ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 8197697:	89 45 f4             	mov    %eax,-0xc(%ebp)
 819769a:	e8 9d ff ff ff       	call   819763c <_ZN4ARAD11PVP_CHANNEL25is_integrated_pvp_channelEv>
 819769f:	84 c0                	test   %al,%al
 81976a1:	75 06                	jne    81976a9 <_ZN4ARAD11PVP_CHANNEL20is_broadcast_channelEv+0x25>
 81976a3:	83 7d f4 07          	cmpl   $0x7,-0xc(%ebp)
 81976a7:	75 07                	jne    81976b0 <_ZN4ARAD11PVP_CHANNEL20is_broadcast_channelEv+0x2c>
 81976a9:	b8 01 00 00 00       	mov    $0x1,%eax
 81976ae:	eb 05                	jmp    81976b5 <_ZN4ARAD11PVP_CHANNEL20is_broadcast_channelEv+0x31>
 81976b0:	b8 00 00 00 00       	mov    $0x0,%eax
 81976b5:	84 c0                	test   %al,%al
 81976b7:	74 07                	je     81976c0 <_ZN4ARAD11PVP_CHANNEL20is_broadcast_channelEv+0x3c>
 81976b9:	b8 01 00 00 00       	mov    $0x1,%eax
 81976be:	eb 05                	jmp    81976c5 <_ZN4ARAD11PVP_CHANNEL20is_broadcast_channelEv+0x41>
 81976c0:	b8 00 00 00 00       	mov    $0x0,%eax
 81976c5:	c9                   	leave
 81976c6:	c3                   	ret

```

```c
// ARAD::PVP_CHANNEL::is_broadcast_channel @ 0x8197684

/* ARAD::PVP_CHANNEL::is_broadcast_channel() */

undefined1 ARAD::PVP_CHANNEL::is_broadcast_channel(void)

{
  undefined1 uVar1;
  char cVar2;
  GameWorld *this;
  int iVar3;
  
  this = (GameWorld *)G_GameWorld();
  iVar3 = GameWorld::GetChannelType(this);
  cVar2 = is_integrated_pvp_channel();
  if ((cVar2 == '\0') && (iVar3 != 7)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

```

---

## is_common_channel

```asm
// === 0819773b ARAD::PVP_CHANNEL::is_common_channel  [0x0819773b-0x8197780] ===
 819773b:	55                   	push   %ebp
 819773c:	89 e5                	mov    %esp,%ebp
 819773e:	83 ec 28             	sub    $0x28,%esp
 8197741:	e8 61 2c f4 ff       	call   80da3a7 <_Z11G_GameWorldv>
 8197746:	89 04 24             	mov    %eax,(%esp)
 8197749:	e8 d2 f3 f7 ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 819774e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8197751:	e8 e6 fe ff ff       	call   819763c <_ZN4ARAD11PVP_CHANNEL25is_integrated_pvp_channelEv>
 8197756:	83 f0 01             	xor    $0x1,%eax
 8197759:	84 c0                	test   %al,%al
 819775b:	74 0d                	je     819776a <_ZN4ARAD11PVP_CHANNEL17is_common_channelEv+0x2f>
 819775d:	83 7d f4 07          	cmpl   $0x7,-0xc(%ebp)
 8197761:	74 07                	je     819776a <_ZN4ARAD11PVP_CHANNEL17is_common_channelEv+0x2f>
 8197763:	b8 01 00 00 00       	mov    $0x1,%eax
 8197768:	eb 05                	jmp    819776f <_ZN4ARAD11PVP_CHANNEL17is_common_channelEv+0x34>
 819776a:	b8 00 00 00 00       	mov    $0x0,%eax
 819776f:	84 c0                	test   %al,%al
 8197771:	74 07                	je     819777a <_ZN4ARAD11PVP_CHANNEL17is_common_channelEv+0x3f>
 8197773:	b8 01 00 00 00       	mov    $0x1,%eax
 8197778:	eb 05                	jmp    819777f <_ZN4ARAD11PVP_CHANNEL17is_common_channelEv+0x44>
 819777a:	b8 00 00 00 00       	mov    $0x0,%eax
 819777f:	c9                   	leave
 8197780:	c3                   	ret

```

```c
// ARAD::PVP_CHANNEL::is_common_channel @ 0x819773b

/* ARAD::PVP_CHANNEL::is_common_channel() */

undefined1 ARAD::PVP_CHANNEL::is_common_channel(void)

{
  undefined1 uVar1;
  char cVar2;
  GameWorld *this;
  int iVar3;
  
  this = (GameWorld *)G_GameWorld();
  iVar3 = GameWorld::GetChannelType(this);
  cVar2 = is_integrated_pvp_channel();
  if ((cVar2 == '\x01') || (iVar3 == 7)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

```

---

## is_integrated_pvp_channel

```asm
// === 0819763c ARAD::PVP_CHANNEL::is_integrated_pvp_channel  [0x0819763c-0x8197683] ===
 819763c:	55                   	push   %ebp
 819763d:	89 e5                	mov    %esp,%ebp
 819763f:	53                   	push   %ebx
 8197640:	83 ec 24             	sub    $0x24,%esp
 8197643:	e8 5f 2d f4 ff       	call   80da3a7 <_Z11G_GameWorldv>
 8197648:	89 04 24             	mov    %eax,(%esp)
 819764b:	e8 d0 f4 f7 ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 8197650:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8197653:	83 7d f4 10          	cmpl   $0x10,-0xc(%ebp)
 8197657:	77 20                	ja     8197679 <_ZN4ARAD11PVP_CHANNEL25is_integrated_pvp_channelEv+0x3d>
 8197659:	8b 45 f4             	mov    -0xc(%ebp),%eax
 819765c:	ba 01 00 00 00       	mov    $0x1,%edx
 8197661:	89 d3                	mov    %edx,%ebx
 8197663:	89 c1                	mov    %eax,%ecx
 8197665:	d3 e3                	shl    %cl,%ebx
 8197667:	89 d8                	mov    %ebx,%eax
 8197669:	25 00 e7 01 00       	and    $0x1e700,%eax
 819766e:	85 c0                	test   %eax,%eax
 8197670:	74 07                	je     8197679 <_ZN4ARAD11PVP_CHANNEL25is_integrated_pvp_channelEv+0x3d>
 8197672:	b8 01 00 00 00       	mov    $0x1,%eax
 8197677:	eb 05                	jmp    819767e <_ZN4ARAD11PVP_CHANNEL25is_integrated_pvp_channelEv+0x42>
 8197679:	b8 00 00 00 00       	mov    $0x0,%eax
 819767e:	83 c4 24             	add    $0x24,%esp
 8197681:	5b                   	pop    %ebx
 8197682:	5d                   	pop    %ebp
 8197683:	c3                   	ret

```

```c
// ARAD::PVP_CHANNEL::is_integrated_pvp_channel @ 0x819763c

/* ARAD::PVP_CHANNEL::is_integrated_pvp_channel() */

undefined4 ARAD::PVP_CHANNEL::is_integrated_pvp_channel(void)

{
  GameWorld *this;
  uint uVar1;
  undefined4 uVar2;
  
  this = (GameWorld *)G_GameWorld();
  uVar1 = GameWorld::GetChannelType(this);
  if ((uVar1 < 0x11) && ((1 << ((byte)uVar1 & 0x1f) & 0x1e700U) != 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## is_winpoint_pvp_channel

```asm
// === 0819770a ARAD::PVP_CHANNEL::is_winpoint_pvp_channel  [0x0819770a-0x819773a] ===
 819770a:	55                   	push   %ebp
 819770b:	89 e5                	mov    %esp,%ebp
 819770d:	83 ec 28             	sub    $0x28,%esp
 8197710:	e8 92 2c f4 ff       	call   80da3a7 <_Z11G_GameWorldv>
 8197715:	89 04 24             	mov    %eax,(%esp)
 8197718:	e8 03 f4 f7 ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 819771d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8197720:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8197723:	83 f8 04             	cmp    $0x4,%eax
 8197726:	74 05                	je     819772d <_ZN4ARAD11PVP_CHANNEL23is_winpoint_pvp_channelEv+0x23>
 8197728:	83 f8 08             	cmp    $0x8,%eax
 819772b:	75 07                	jne    8197734 <_ZN4ARAD11PVP_CHANNEL23is_winpoint_pvp_channelEv+0x2a>
 819772d:	b8 01 00 00 00       	mov    $0x1,%eax
 8197732:	eb 05                	jmp    8197739 <_ZN4ARAD11PVP_CHANNEL23is_winpoint_pvp_channelEv+0x2f>
 8197734:	b8 00 00 00 00       	mov    $0x0,%eax
 8197739:	c9                   	leave
 819773a:	c3                   	ret

```

```c
// ARAD::PVP_CHANNEL::is_winpoint_pvp_channel @ 0x819770a

/* ARAD::PVP_CHANNEL::is_winpoint_pvp_channel() */

undefined4 ARAD::PVP_CHANNEL::is_winpoint_pvp_channel(void)

{
  GameWorld *this;
  int iVar1;
  undefined4 uVar2;
  
  this = (GameWorld *)G_GameWorld();
  iVar1 = GameWorld::GetChannelType(this);
  if ((iVar1 == 4) || (iVar1 == 8)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

