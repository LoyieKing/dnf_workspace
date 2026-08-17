# DisPatcher_DieCharacInDungeon

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 081c2bc0 DisPatcher_DieCharacInDungeon::check_error  [0x081c2bc0-0x81c2bed] ===
 81c2bc0:	55                   	push   %ebp
 81c2bc1:	89 e5                	mov    %esp,%ebp
 81c2bc3:	83 ec 18             	sub    $0x18,%esp
 81c2bc6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c2bc9:	89 04 24             	mov    %eax,(%esp)
 81c2bcc:	e8 bb 77 f1 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81c2bd1:	89 04 24             	mov    %eax,(%esp)
 81c2bd4:	e8 17 3b f8 ff       	call   81466f0 <_ZN6Global11CGlobalFunc15Get_State_CheckE8ch_state>
 81c2bd9:	83 f0 01             	xor    $0x1,%eax
 81c2bdc:	84 c0                	test   %al,%al
 81c2bde:	74 07                	je     81c2be7 <_ZN29DisPatcher_DieCharacInDungeon11check_errorEP5CUserR8MSG_BASE+0x27>
 81c2be0:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81c2be5:	eb 05                	jmp    81c2bec <_ZN29DisPatcher_DieCharacInDungeon11check_errorEP5CUserR8MSG_BASE+0x2c>
 81c2be7:	b8 00 00 00 00       	mov    $0x0,%eax
 81c2bec:	c9                   	leave
 81c2bed:	c3                   	ret

```

```c
// DisPatcher_DieCharacInDungeon::check_error @ 0x81c2bc0

/* DisPatcher_DieCharacInDungeon::check_error(CUser*, MSG_BASE&) */

undefined4 DisPatcher_DieCharacInDungeon::check_error(CUser *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  uVar2 = CUser::get_state((CUser *)param_2);
  cVar1 = Global::CGlobalFunc::Get_State_Check(uVar2);
  if (cVar1 == '\x01') {
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

```

---

## process

```asm
// === 081c2a12 DisPatcher_DieCharacInDungeon::process  [0x081c2a12-0x81c2ba9] ===
 81c2a12:	55                   	push   %ebp
 81c2a13:	89 e5                	mov    %esp,%ebp
 81c2a15:	56                   	push   %esi
 81c2a16:	53                   	push   %ebx
 81c2a17:	83 ec 30             	sub    $0x30,%esp
 81c2a1a:	8b 45 14             	mov    0x14(%ebp),%eax
 81c2a1d:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81c2a20:	8b 45 10             	mov    0x10(%ebp),%eax
 81c2a23:	89 44 24 08          	mov    %eax,0x8(%esp)
 81c2a27:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c2a2a:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c2a2e:	8b 45 08             	mov    0x8(%ebp),%eax
 81c2a31:	89 04 24             	mov    %eax,(%esp)
 81c2a34:	e8 87 01 00 00       	call   81c2bc0 <_ZN29DisPatcher_DieCharacInDungeon11check_errorEP5CUserR8MSG_BASE>
 81c2a39:	89 c2                	mov    %eax,%edx
 81c2a3b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81c2a3e:	89 50 04             	mov    %edx,0x4(%eax)
 81c2a41:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81c2a44:	8b 40 04             	mov    0x4(%eax),%eax
 81c2a47:	85 c0                	test   %eax,%eax
 81c2a49:	7e 0a                	jle    81c2a55 <_ZN29DisPatcher_DieCharacInDungeon7processEP5CUserR8MSG_BASER9ParamBase+0x43>
 81c2a4b:	b8 00 00 00 00       	mov    $0x0,%eax
 81c2a50:	e9 4d 01 00 00       	jmp    81c2ba2 <_ZN29DisPatcher_DieCharacInDungeon7processEP5CUserR8MSG_BASER9ParamBase+0x190>
 81c2a55:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81c2a58:	8b 40 04             	mov    0x4(%eax),%eax
 81c2a5b:	85 c0                	test   %eax,%eax
 81c2a5d:	79 32                	jns    81c2a91 <_ZN29DisPatcher_DieCharacInDungeon7processEP5CUserR8MSG_BASER9ParamBase+0x7f>
 81c2a5f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c2a62:	89 04 24             	mov    %eax,(%esp)
 81c2a65:	e8 04 79 f1 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81c2a6a:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 81c2a6d:	8b 52 04             	mov    0x4(%edx),%edx
 81c2a70:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81c2a74:	89 54 24 08          	mov    %edx,0x8(%esp)
 81c2a78:	c7 44 24 04 00 5e bd 	movl   $0x8bd5e00,0x4(%esp)
 81c2a7f:	08 
 81c2a80:	c7 04 24 bb 0c 00 00 	movl   $0xcbb,(%esp)
 81c2a87:	e8 4b de 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c2a8c:	e9 11 01 00 00       	jmp    81c2ba2 <_ZN29DisPatcher_DieCharacInDungeon7processEP5CUserR8MSG_BASER9ParamBase+0x190>
 81c2a91:	8b 45 10             	mov    0x10(%ebp),%eax
 81c2a94:	89 45 e8             	mov    %eax,-0x18(%ebp)
 81c2a97:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81c2a9a:	0f b7 40 0f          	movzwl 0xf(%eax),%eax
 81c2a9e:	0f b7 f0             	movzwl %ax,%esi
 81c2aa1:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81c2aa4:	0f b7 40 0d          	movzwl 0xd(%eax),%eax
 81c2aa8:	0f b7 d8             	movzwl %ax,%ebx
 81c2aab:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c2aae:	89 04 24             	mov    %eax,(%esp)
 81c2ab1:	e8 72 e5 f3 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 81c2ab6:	8b 55 0c             	mov    0xc(%ebp),%edx
 81c2ab9:	81 c2 00 97 07 00    	add    $0x79700,%edx
 81c2abf:	89 74 24 0c          	mov    %esi,0xc(%esp)
 81c2ac3:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81c2ac7:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c2acb:	89 14 24             	mov    %edx,(%esp)
 81c2ace:	e8 27 23 4c 00       	call   8684dfa <_ZN15cUserHistoryLog9CharacDieEPKctt>
 81c2ad3:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c2ad6:	89 04 24             	mov    %eax,(%esp)
 81c2ad9:	e8 70 d3 06 00       	call   822fe4e <_ZN5CUser13GetPartyIndexEv>
 81c2ade:	0f bf d8             	movswl %ax,%ebx
 81c2ae1:	e8 a8 96 f0 ff       	call   80cc18e <_Z14G_CGameManagerv>
 81c2ae6:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81c2aea:	89 04 24             	mov    %eax,(%esp)
 81c2aed:	e8 40 24 0d 00       	call   8294f32 <_ZN12CGameManager8GetPartyEi>
 81c2af2:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81c2af5:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c2af8:	89 04 24             	mov    %eax,(%esp)
 81c2afb:	e8 24 3d f8 ff       	call   8146824 <_ZN6Global14CBossTowerFunc18DieCharacInDungeonEP5CUser>
 81c2b00:	84 c0                	test   %al,%al
 81c2b02:	74 0a                	je     81c2b0e <_ZN29DisPatcher_DieCharacInDungeon7processEP5CUserR8MSG_BASER9ParamBase+0xfc>
 81c2b04:	b8 00 00 00 00       	mov    $0x0,%eax
 81c2b09:	e9 94 00 00 00       	jmp    81c2ba2 <_ZN29DisPatcher_DieCharacInDungeon7processEP5CUserR8MSG_BASER9ParamBase+0x190>
 81c2b0e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c2b11:	89 04 24             	mov    %eax,(%esp)
 81c2b14:	e8 73 78 f1 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81c2b19:	83 f8 0d             	cmp    $0xd,%eax
 81c2b1c:	0f 94 c0             	sete   %al
 81c2b1f:	84 c0                	test   %al,%al
 81c2b21:	74 0b                	je     81c2b2e <_ZN29DisPatcher_DieCharacInDungeon7processEP5CUserR8MSG_BASER9ParamBase+0x11c>
 81c2b23:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c2b26:	89 04 24             	mov    %eax,(%esp)
 81c2b29:	e8 84 df f6 ff       	call   8130ab2 <_ZN12advancealtar7Manager9dieCharacEP5CUser>
 81c2b2e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c2b31:	89 04 24             	mov    %eax,(%esp)
 81c2b34:	e8 13 26 49 00       	call   865514c <_ZN5CUser8GetPartyEv>
 81c2b39:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81c2b3c:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 81c2b40:	74 43                	je     81c2b85 <_ZN29DisPatcher_DieCharacInDungeon7processEP5CUserR8MSG_BASER9ParamBase+0x173>
 81c2b42:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81c2b45:	8b 80 ac 0c 00 00    	mov    0xcac(%eax),%eax
 81c2b4b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81c2b4e:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81c2b52:	74 31                	je     81c2b85 <_ZN29DisPatcher_DieCharacInDungeon7processEP5CUserR8MSG_BASER9ParamBase+0x173>
 81c2b54:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c2b57:	0f b6 80 9f 08 00 00 	movzbl 0x89f(%eax),%eax
 81c2b5e:	84 c0                	test   %al,%al
 81c2b60:	7e 23                	jle    81c2b85 <_ZN29DisPatcher_DieCharacInDungeon7processEP5CUserR8MSG_BASER9ParamBase+0x173>
 81c2b62:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c2b65:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c2b69:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81c2b6c:	89 04 24             	mov    %eax,(%esp)
 81c2b6f:	e8 e8 62 3f 00       	call   85b8e5c <_ZN6CParty18BloodHandleDieUserEP5CUser>
 81c2b74:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81c2b77:	c7 40 04 ff ff ff 7f 	movl   $0x7fffffff,0x4(%eax)
 81c2b7e:	b8 00 00 00 00       	mov    $0x0,%eax
 81c2b83:	eb 1d                	jmp    81c2ba2 <_ZN29DisPatcher_DieCharacInDungeon7processEP5CUserR8MSG_BASER9ParamBase+0x190>
 81c2b85:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 81c2b89:	74 12                	je     81c2b9d <_ZN29DisPatcher_DieCharacInDungeon7processEP5CUserR8MSG_BASER9ParamBase+0x18b>
 81c2b8b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c2b8e:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c2b92:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81c2b95:	89 04 24             	mov    %eax,(%esp)
 81c2b98:	e8 8b 4c 3e 00       	call   85a7828 <_ZN6CParty8die_userEP5CUser>
 81c2b9d:	b8 00 00 00 00       	mov    $0x0,%eax
 81c2ba2:	83 c4 30             	add    $0x30,%esp
 81c2ba5:	5b                   	pop    %ebx
 81c2ba6:	5e                   	pop    %esi
 81c2ba7:	5d                   	pop    %ebp
 81c2ba8:	c3                   	ret
 81c2ba9:	90                   	nop

```

```c
// DisPatcher_DieCharacInDungeon::process @ 0x81c2a12

/* DisPatcher_DieCharacInDungeon::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
DisPatcher_DieCharacInDungeon::process
          (DisPatcher_DieCharacInDungeon *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  ushort uVar1;
  ushort uVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  CParty *this_00;
  CParty *this_01;
  
  uVar4 = check_error((CUser *)this,(MSG_BASE *)param_1);
  *(undefined4 *)(param_3 + 4) = uVar4;
  if (*(int *)(param_3 + 4) < 1) {
    if (*(int *)(param_3 + 4) < 0) {
      uVar5 = CUser::get_acc_id(param_1);
      uVar4 = LineFunc(0xcbb,
                       "virtual int DisPatcher_DieCharacInDungeon::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(param_3 + 4),uVar5);
    }
    else {
      uVar1 = *(ushort *)(param_2 + 0xf);
      uVar2 = *(ushort *)(param_2 + 0xd);
      pcVar6 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
      cUserHistoryLog::CharacDie((cUserHistoryLog *)(param_1 + 0x79700),pcVar6,uVar2,uVar1);
      CUser::GetPartyIndex(param_1);
      iVar7 = G_CGameManager();
      this_00 = (CParty *)CGameManager::GetParty(iVar7);
      cVar3 = Global::CBossTowerFunc::DieCharacInDungeon(param_1);
      if (cVar3 == '\0') {
        iVar7 = CUser::get_state(param_1);
        if (iVar7 == 0xd) {
          advancealtar::Manager::dieCharac(param_1);
        }
        this_01 = (CParty *)CUser::GetParty(param_1);
        if (((this_01 == (CParty *)0x0) || (*(int *)(this_01 + 0xcac) == 0)) ||
           (*(char *)(*(int *)(this_01 + 0xcac) + 0x89f) < '\x01')) {
          if (this_00 != (CParty *)0x0) {
            CParty::die_user(this_00,param_1);
          }
          uVar4 = 0;
        }
        else {
          CParty::BloodHandleDieUser(this_01,param_1);
          *(undefined4 *)(param_3 + 4) = 0x7fffffff;
          uVar4 = 0;
        }
      }
      else {
        uVar4 = 0;
      }
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

```

---

## read

```asm
// === 081c297a DisPatcher_DieCharacInDungeon::read  [0x081c297a-0x81c2a11] ===
 81c297a:	55                   	push   %ebp
 81c297b:	89 e5                	mov    %esp,%ebp
 81c297d:	83 ec 28             	sub    $0x28,%esp
 81c2980:	8b 45 10             	mov    0x10(%ebp),%eax
 81c2983:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81c2986:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c2989:	83 c0 0d             	add    $0xd,%eax
 81c298c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c2990:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c2993:	89 04 24             	mov    %eax,(%esp)
 81c2996:	e8 15 a7 3c 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 81c299b:	83 f0 01             	xor    $0x1,%eax
 81c299e:	84 c0                	test   %al,%al
 81c29a0:	74 26                	je     81c29c8 <_ZN29DisPatcher_DieCharacInDungeon4readER9PacketBufR8MSG_BASE+0x4e>
 81c29a2:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c29a9:	00 
 81c29aa:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c29b1:	00 
 81c29b2:	c7 44 24 04 60 5e bd 	movl   $0x8bd5e60,0x4(%esp)
 81c29b9:	08 
 81c29ba:	c7 04 24 a9 0c 00 00 	movl   $0xca9,(%esp)
 81c29c1:	e8 11 df 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c29c6:	eb 47                	jmp    81c2a0f <_ZN29DisPatcher_DieCharacInDungeon4readER9PacketBufR8MSG_BASE+0x95>
 81c29c8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c29cb:	83 c0 0f             	add    $0xf,%eax
 81c29ce:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c29d2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c29d5:	89 04 24             	mov    %eax,(%esp)
 81c29d8:	e8 d3 a6 3c 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 81c29dd:	83 f0 01             	xor    $0x1,%eax
 81c29e0:	84 c0                	test   %al,%al
 81c29e2:	74 26                	je     81c2a0a <_ZN29DisPatcher_DieCharacInDungeon4readER9PacketBufR8MSG_BASE+0x90>
 81c29e4:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c29eb:	00 
 81c29ec:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c29f3:	00 
 81c29f4:	c7 44 24 04 60 5e bd 	movl   $0x8bd5e60,0x4(%esp)
 81c29fb:	08 
 81c29fc:	c7 04 24 aa 0c 00 00 	movl   $0xcaa,(%esp)
 81c2a03:	e8 cf de 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c2a08:	eb 05                	jmp    81c2a0f <_ZN29DisPatcher_DieCharacInDungeon4readER9PacketBufR8MSG_BASE+0x95>
 81c2a0a:	b8 00 00 00 00       	mov    $0x0,%eax
 81c2a0f:	c9                   	leave
 81c2a10:	c3                   	ret
 81c2a11:	90                   	nop

```

```c
// DisPatcher_DieCharacInDungeon::read @ 0x81c297a

/* DisPatcher_DieCharacInDungeon::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
DisPatcher_DieCharacInDungeon::read
          (DisPatcher_DieCharacInDungeon *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0xf));
    if (cVar1 == '\x01') {
      uVar2 = 0;
    }
    else {
      uVar2 = LineFunc(0xcaa,
                       "virtual int DisPatcher_DieCharacInDungeon::read(PacketBuf&, MSG_BASE&)",0,0)
      ;
    }
  }
  else {
    uVar2 = LineFunc(0xca9,"virtual int DisPatcher_DieCharacInDungeon::read(PacketBuf&, MSG_BASE&)",
                     0,0);
  }
  return uVar2;
}

```

---

## send

```asm
// === 081c2baa DisPatcher_DieCharacInDungeon::send  [0x081c2baa-0x81c2bbf] ===
 81c2baa:	55                   	push   %ebp
 81c2bab:	89 e5                	mov    %esp,%ebp
 81c2bad:	83 ec 10             	sub    $0x10,%esp
 81c2bb0:	8b 45 10             	mov    0x10(%ebp),%eax
 81c2bb3:	89 45 fc             	mov    %eax,-0x4(%ebp)
 81c2bb6:	8b 45 fc             	mov    -0x4(%ebp),%eax
 81c2bb9:	8b 40 04             	mov    0x4(%eax),%eax
 81c2bbc:	85 c0                	test   %eax,%eax
 81c2bbe:	c9                   	leave
 81c2bbf:	c3                   	ret

```

```c
// DisPatcher_DieCharacInDungeon::send @ 0x81c2baa

/* DisPatcher_DieCharacInDungeon::send(CUser*, ParamBase&) */

undefined4 __thiscall
DisPatcher_DieCharacInDungeon::send
          (DisPatcher_DieCharacInDungeon *this,CUser *param_1,ParamBase *param_2)

{
  return *(undefined4 *)(param_2 + 4);
}

```

