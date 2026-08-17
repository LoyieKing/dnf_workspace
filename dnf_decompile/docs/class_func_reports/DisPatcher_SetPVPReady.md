# DisPatcher_SetPVPReady

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 081c9b9c DisPatcher_SetPVPReady::check_error  [0x081c9b9c-0x81c9bc5] ===
 81c9b9c:	55                   	push   %ebp
 81c9b9d:	89 e5                	mov    %esp,%ebp
 81c9b9f:	83 ec 18             	sub    $0x18,%esp
 81c9ba2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c9ba5:	89 04 24             	mov    %eax,(%esp)
 81c9ba8:	e8 df 07 f1 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81c9bad:	83 f8 06             	cmp    $0x6,%eax
 81c9bb0:	0f 95 c0             	setne  %al
 81c9bb3:	84 c0                	test   %al,%al
 81c9bb5:	74 07                	je     81c9bbe <_ZN22DisPatcher_SetPVPReady11check_errorEP5CUserR8MSG_BASE+0x22>
 81c9bb7:	b8 13 00 00 00       	mov    $0x13,%eax
 81c9bbc:	eb 05                	jmp    81c9bc3 <_ZN22DisPatcher_SetPVPReady11check_errorEP5CUserR8MSG_BASE+0x27>
 81c9bbe:	b8 00 00 00 00       	mov    $0x0,%eax
 81c9bc3:	c9                   	leave
 81c9bc4:	c3                   	ret
 81c9bc5:	90                   	nop

```

```c
// DisPatcher_SetPVPReady::check_error @ 0x81c9b9c

/* DisPatcher_SetPVPReady::check_error(CUser*, MSG_BASE&) */

undefined4 DisPatcher_SetPVPReady::check_error(CUser *param_1,MSG_BASE *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (iVar1 == 6) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x13;
  }
  return uVar2;
}

```

---

## process

```asm
// === 081c9a14 DisPatcher_SetPVPReady::process  [0x081c9a14-0x81c9b9b] ===
 81c9a14:	55                   	push   %ebp
 81c9a15:	89 e5                	mov    %esp,%ebp
 81c9a17:	56                   	push   %esi
 81c9a18:	53                   	push   %ebx
 81c9a19:	83 ec 30             	sub    $0x30,%esp
 81c9a1c:	8b 45 10             	mov    0x10(%ebp),%eax
 81c9a1f:	89 44 24 08          	mov    %eax,0x8(%esp)
 81c9a23:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c9a26:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c9a2a:	8b 45 08             	mov    0x8(%ebp),%eax
 81c9a2d:	89 04 24             	mov    %eax,(%esp)
 81c9a30:	e8 67 01 00 00       	call   81c9b9c <_ZN22DisPatcher_SetPVPReady11check_errorEP5CUserR8MSG_BASE>
 81c9a35:	89 45 e8             	mov    %eax,-0x18(%ebp)
 81c9a38:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 81c9a3c:	7e 0a                	jle    81c9a48 <_ZN22DisPatcher_SetPVPReady7processEP5CUserR8MSG_BASER9ParamBase+0x34>
 81c9a3e:	bb ff ff ff ff       	mov    $0xffffffff,%ebx
 81c9a43:	e9 4a 01 00 00       	jmp    81c9b92 <_ZN22DisPatcher_SetPVPReady7processEP5CUserR8MSG_BASER9ParamBase+0x17e>
 81c9a48:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 81c9a4c:	79 32                	jns    81c9a80 <_ZN22DisPatcher_SetPVPReady7processEP5CUserR8MSG_BASER9ParamBase+0x6c>
 81c9a4e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c9a51:	89 04 24             	mov    %eax,(%esp)
 81c9a54:	e8 15 09 f1 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81c9a59:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81c9a5d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c9a64:	00 
 81c9a65:	c7 44 24 04 20 54 bd 	movl   $0x8bd5420,0x4(%esp)
 81c9a6c:	08 
 81c9a6d:	c7 04 24 e3 1c 00 00 	movl   $0x1ce3,(%esp)
 81c9a74:	e8 5e 6e 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c9a79:	89 c3                	mov    %eax,%ebx
 81c9a7b:	e9 12 01 00 00       	jmp    81c9b92 <_ZN22DisPatcher_SetPVPReady7processEP5CUserR8MSG_BASER9ParamBase+0x17e>
 81c9a80:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c9a83:	89 04 24             	mov    %eax,(%esp)
 81c9a86:	e8 03 b7 48 00       	call   865518e <_ZN5CUser10GetPVPRoomEv>
 81c9a8b:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81c9a8e:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 81c9a92:	75 32                	jne    81c9ac6 <_ZN22DisPatcher_SetPVPReady7processEP5CUserR8MSG_BASER9ParamBase+0xb2>
 81c9a94:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c9a97:	89 04 24             	mov    %eax,(%esp)
 81c9a9a:	e8 cf 08 f1 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81c9a9f:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81c9aa3:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c9aaa:	00 
 81c9aab:	c7 44 24 04 20 54 bd 	movl   $0x8bd5420,0x4(%esp)
 81c9ab2:	08 
 81c9ab3:	c7 04 24 e6 1c 00 00 	movl   $0x1ce6,(%esp)
 81c9aba:	e8 18 6e 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c9abf:	89 c3                	mov    %eax,%ebx
 81c9ac1:	e9 cc 00 00 00       	jmp    81c9b92 <_ZN22DisPatcher_SetPVPReady7processEP5CUserR8MSG_BASER9ParamBase+0x17e>
 81c9ac6:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81c9ac9:	89 04 24             	mov    %eax,(%esp)
 81c9acc:	e8 fb 3e 06 00       	call   822d9cc <_ZN8PvP_Room19get_pvp_battle_modeEv>
 81c9ad1:	83 f8 06             	cmp    $0x6,%eax
 81c9ad4:	0f 94 c0             	sete   %al
 81c9ad7:	84 c0                	test   %al,%al
 81c9ad9:	74 0a                	je     81c9ae5 <_ZN22DisPatcher_SetPVPReady7processEP5CUserR8MSG_BASER9ParamBase+0xd1>
 81c9adb:	bb ff ff ff ff       	mov    $0xffffffff,%ebx
 81c9ae0:	e9 ad 00 00 00       	jmp    81c9b92 <_ZN22DisPatcher_SetPVPReady7processEP5CUserR8MSG_BASER9ParamBase+0x17e>
 81c9ae5:	8b 45 14             	mov    0x14(%ebp),%eax
 81c9ae8:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81c9aeb:	8b 45 10             	mov    0x10(%ebp),%eax
 81c9aee:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81c9af1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c9af4:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81c9af8:	84 c0                	test   %al,%al
 81c9afa:	0f 95 c0             	setne  %al
 81c9afd:	0f b6 c0             	movzbl %al,%eax
 81c9b00:	89 44 24 08          	mov    %eax,0x8(%esp)
 81c9b04:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c9b07:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c9b0b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81c9b0e:	89 04 24             	mov    %eax,(%esp)
 81c9b11:	e8 7a e7 40 00       	call   85d8290 <_ZN8PvP_Room15set_ready_stateEP5CUserb>
 81c9b16:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81c9b19:	89 42 04             	mov    %eax,0x4(%edx)
 81c9b1c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81c9b1f:	8b 40 04             	mov    0x4(%eax),%eax
 81c9b22:	85 c0                	test   %eax,%eax
 81c9b24:	79 69                	jns    81c9b8f <_ZN22DisPatcher_SetPVPReady7processEP5CUserR8MSG_BASER9ParamBase+0x17b>
 81c9b26:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81c9b29:	89 04 24             	mov    %eax,(%esp)
 81c9b2c:	e8 09 f1 40 00       	call   85d8c3a <_ZN8PvP_Room9start_pvpEv>
 81c9b31:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81c9b34:	89 04 24             	mov    %eax,(%esp)
 81c9b37:	e8 10 42 3c 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81c9b3c:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81c9b3f:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c9b43:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81c9b46:	89 04 24             	mov    %eax,(%esp)
 81c9b49:	e8 ec 21 41 00       	call   85dbd3a <_ZN8PvP_Room15make_state_infoEPc>
 81c9b4e:	e8 54 08 f1 ff       	call   80da3a7 <_Z11G_GameWorldv>
 81c9b53:	8d 55 dc             	lea    -0x24(%ebp),%edx
 81c9b56:	89 54 24 04          	mov    %edx,0x4(%esp)
 81c9b5a:	89 04 24             	mov    %eax,(%esp)
 81c9b5d:	e8 b2 f0 4f 00       	call   86c8c14 <_ZN9GameWorld8send_allER11PacketGuard>
 81c9b62:	bb ff ff ff ff       	mov    $0xffffffff,%ebx
 81c9b67:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81c9b6a:	89 04 24             	mov    %eax,(%esp)
 81c9b6d:	e8 0e 43 3c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81c9b72:	eb 1e                	jmp    81c9b92 <_ZN22DisPatcher_SetPVPReady7processEP5CUserR8MSG_BASER9ParamBase+0x17e>
 81c9b74:	89 d3                	mov    %edx,%ebx
 81c9b76:	89 c6                	mov    %eax,%esi
 81c9b78:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81c9b7b:	89 04 24             	mov    %eax,(%esp)
 81c9b7e:	e8 fd 42 3c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81c9b83:	89 f0                	mov    %esi,%eax
 81c9b85:	89 da                	mov    %ebx,%edx
 81c9b87:	89 04 24             	mov    %eax,(%esp)
 81c9b8a:	e8 c1 9b 91 00       	call   8ae3750 <_Unwind_Resume>
 81c9b8f:	8b 5d e8             	mov    -0x18(%ebp),%ebx
 81c9b92:	89 d8                	mov    %ebx,%eax
 81c9b94:	83 c4 30             	add    $0x30,%esp
 81c9b97:	5b                   	pop    %ebx
 81c9b98:	5e                   	pop    %esi
 81c9b99:	5d                   	pop    %ebp
 81c9b9a:	c3                   	ret
 81c9b9b:	90                   	nop

```

```c
// DisPatcher_SetPVPReady::process @ 0x81c9a14

/* DisPatcher_SetPVPReady::process(CUser*, MSG_BASE&, ParamBase&) */

int __thiscall
DisPatcher_SetPVPReady::process
          (DisPatcher_SetPVPReady *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  GameWorld *this_00;
  PacketGuard local_28 [12];
  int local_1c;
  PvP_Room *local_18;
  ParamBase *local_14;
  MSG_BASE *local_10;
  
  local_1c = check_error((CUser *)this,(MSG_BASE *)param_1);
  if (local_1c < 1) {
    if (local_1c < 0) {
      uVar1 = CUser::get_acc_id(param_1);
      local_1c = LineFunc(0x1ce3,
                          "virtual int DisPatcher_SetPVPReady::process(CUser*, MSG_BASE&, ParamBase&)"
                          ,0,uVar1);
    }
    else {
      local_18 = (PvP_Room *)CUser::GetPVPRoom(param_1);
      if (local_18 == (PvP_Room *)0x0) {
        uVar1 = CUser::get_acc_id(param_1);
        local_1c = LineFunc(0x1ce6,
                            "virtual int DisPatcher_SetPVPReady::process(CUser*, MSG_BASE&, ParamBase&)"
                            ,0,uVar1);
      }
      else {
        iVar2 = PvP_Room::get_pvp_battle_mode(local_18);
        if (iVar2 == 6) {
          local_1c = -1;
        }
        else {
          local_14 = param_3;
          local_10 = param_2;
          uVar3 = PvP_Room::set_ready_state(local_18,param_1,param_2[0xd] != (MSG_BASE)0x0);
          *(undefined4 *)(local_14 + 4) = uVar3;
          if (*(int *)(local_14 + 4) < 0) {
            PvP_Room::start_pvp(local_18);
            PacketGuard::PacketGuard(local_28);
                    /* try { // try from 081c9b49 to 081c9b61 has its CatchHandler @ 081c9b74 */
            PvP_Room::make_state_info(local_18,(char *)local_28);
            this_00 = (GameWorld *)G_GameWorld();
            GameWorld::send_all(this_00,local_28);
            PacketGuard::~PacketGuard(local_28);
            local_1c = -1;
          }
        }
      }
    }
  }
  else {
    local_1c = -1;
  }
  return local_1c;
}

```

---

## read

```asm
// === 081c99be DisPatcher_SetPVPReady::read  [0x081c99be-0x81c9a13] ===
 81c99be:	55                   	push   %ebp
 81c99bf:	89 e5                	mov    %esp,%ebp
 81c99c1:	83 ec 28             	sub    $0x28,%esp
 81c99c4:	8b 45 10             	mov    0x10(%ebp),%eax
 81c99c7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81c99ca:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c99cd:	83 c0 0d             	add    $0xd,%eax
 81c99d0:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c99d4:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c99d7:	89 04 24             	mov    %eax,(%esp)
 81c99da:	e8 43 35 3c 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81c99df:	83 f0 01             	xor    $0x1,%eax
 81c99e2:	84 c0                	test   %al,%al
 81c99e4:	74 26                	je     81c9a0c <_ZN22DisPatcher_SetPVPReady4readER9PacketBufR8MSG_BASE+0x4e>
 81c99e6:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c99ed:	00 
 81c99ee:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c99f5:	00 
 81c99f6:	c7 44 24 04 80 54 bd 	movl   $0x8bd5480,0x4(%esp)
 81c99fd:	08 
 81c99fe:	c7 04 24 d3 1c 00 00 	movl   $0x1cd3,(%esp)
 81c9a05:	e8 cd 6e 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c9a0a:	eb 05                	jmp    81c9a11 <_ZN22DisPatcher_SetPVPReady4readER9PacketBufR8MSG_BASE+0x53>
 81c9a0c:	b8 00 00 00 00       	mov    $0x0,%eax
 81c9a11:	c9                   	leave
 81c9a12:	c3                   	ret
 81c9a13:	90                   	nop

```

```c
// DisPatcher_SetPVPReady::read @ 0x81c99be

/* DisPatcher_SetPVPReady::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
DisPatcher_SetPVPReady::read(DisPatcher_SetPVPReady *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    uVar2 = 0;
  }
  else {
    uVar2 = LineFunc(0x1cd3,"virtual int DisPatcher_SetPVPReady::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}

```

---

## send

```asm
// === 081c9bc6 DisPatcher_SetPVPReady::send  [0x081c9bc6-0x81c9bfd] ===
 81c9bc6:	55                   	push   %ebp
 81c9bc7:	89 e5                	mov    %esp,%ebp
 81c9bc9:	83 ec 28             	sub    $0x28,%esp
 81c9bcc:	8b 45 10             	mov    0x10(%ebp),%eax
 81c9bcf:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81c9bd2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c9bd5:	8b 40 04             	mov    0x4(%eax),%eax
 81c9bd8:	85 c0                	test   %eax,%eax
 81c9bda:	7e 20                	jle    81c9bfc <_ZN22DisPatcher_SetPVPReady4sendEP5CUserR9ParamBase+0x36>
 81c9bdc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c9bdf:	8b 40 04             	mov    0x4(%eax),%eax
 81c9be2:	0f b6 c0             	movzbl %al,%eax
 81c9be5:	89 44 24 08          	mov    %eax,0x8(%esp)
 81c9be9:	c7 44 24 04 38 00 00 	movl   $0x38,0x4(%esp)
 81c9bf0:	00 
 81c9bf1:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c9bf4:	89 04 24             	mov    %eax,(%esp)
 81c9bf7:	e8 46 23 4b 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81c9bfc:	c9                   	leave
 81c9bfd:	c3                   	ret

```

```c
// DisPatcher_SetPVPReady::send @ 0x81c9bc6

/* DisPatcher_SetPVPReady::send(CUser*, ParamBase&) */

void __thiscall
DisPatcher_SetPVPReady::send(DisPatcher_SetPVPReady *this,CUser *param_1,ParamBase *param_2)

{
  if (0 < *(int *)(param_2 + 4)) {
    CUser::SendCmdErrorPacket(param_1,0x38,*(uint *)(param_2 + 4) & 0xff);
  }
  return;
}

```

