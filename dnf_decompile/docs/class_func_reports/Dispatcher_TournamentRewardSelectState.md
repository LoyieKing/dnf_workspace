# Dispatcher_TournamentRewardSelectState

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 081dff32 Dispatcher_TournamentRewardSelectState::check_error  [0x081dff32-0x81dffd9] ===
 81dff32:	55                   	push   %ebp
 81dff33:	89 e5                	mov    %esp,%ebp
 81dff35:	53                   	push   %ebx
 81dff36:	83 ec 24             	sub    $0x24,%esp
 81dff39:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81dff3d:	75 0a                	jne    81dff49 <_ZN38Dispatcher_TournamentRewardSelectState11check_errorEP5CUserR8MSG_BASE+0x17>
 81dff3f:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81dff44:	e9 8b 00 00 00       	jmp    81dffd4 <_ZN38Dispatcher_TournamentRewardSelectState11check_errorEP5CUserR8MSG_BASE+0xa2>
 81dff49:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dff4c:	89 04 24             	mov    %eax,(%esp)
 81dff4f:	e8 38 a4 ef ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81dff54:	83 f8 05             	cmp    $0x5,%eax
 81dff57:	0f 95 c0             	setne  %al
 81dff5a:	84 c0                	test   %al,%al
 81dff5c:	74 07                	je     81dff65 <_ZN38Dispatcher_TournamentRewardSelectState11check_errorEP5CUserR8MSG_BASE+0x33>
 81dff5e:	b8 ff ff ff 7f       	mov    $0x7fffffff,%eax
 81dff63:	eb 6f                	jmp    81dffd4 <_ZN38Dispatcher_TournamentRewardSelectState11check_errorEP5CUserR8MSG_BASE+0xa2>
 81dff65:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dff68:	89 04 24             	mov    %eax,(%esp)
 81dff6b:	e8 de fe 04 00       	call   822fe4e <_ZN5CUser13GetPartyIndexEv>
 81dff70:	0f bf d8             	movswl %ax,%ebx
 81dff73:	e8 16 c2 ee ff       	call   80cc18e <_Z14G_CGameManagerv>
 81dff78:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81dff7c:	89 04 24             	mov    %eax,(%esp)
 81dff7f:	e8 ae 4f 0b 00       	call   8294f32 <_ZN12CGameManager8GetPartyEi>
 81dff84:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81dff87:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81dff8b:	75 07                	jne    81dff94 <_ZN38Dispatcher_TournamentRewardSelectState11check_errorEP5CUserR8MSG_BASE+0x62>
 81dff8d:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81dff92:	eb 40                	jmp    81dffd4 <_ZN38Dispatcher_TournamentRewardSelectState11check_errorEP5CUserR8MSG_BASE+0xa2>
 81dff94:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81dff97:	89 04 24             	mov    %eax,(%esp)
 81dff9a:	e8 0d d7 3d 00       	call   85bd6ac <_ZN6CParty30GetTournamentDungeonClearStateEv>
 81dff9f:	3c 01                	cmp    $0x1,%al
 81dffa1:	0f 95 c0             	setne  %al
 81dffa4:	84 c0                	test   %al,%al
 81dffa6:	74 07                	je     81dffaf <_ZN38Dispatcher_TournamentRewardSelectState11check_errorEP5CUserR8MSG_BASE+0x7d>
 81dffa8:	b8 ff ff ff 7f       	mov    $0x7fffffff,%eax
 81dffad:	eb 25                	jmp    81dffd4 <_ZN38Dispatcher_TournamentRewardSelectState11check_errorEP5CUserR8MSG_BASE+0xa2>
 81dffaf:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dffb2:	89 44 24 04          	mov    %eax,0x4(%esp)
 81dffb6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81dffb9:	89 04 24             	mov    %eax,(%esp)
 81dffbc:	e8 17 40 3d 00       	call   85b3fd8 <_ZN6CParty22CheckRecvFromAllMemberEP5CUser>
 81dffc1:	83 f0 01             	xor    $0x1,%eax
 81dffc4:	84 c0                	test   %al,%al
 81dffc6:	74 07                	je     81dffcf <_ZN38Dispatcher_TournamentRewardSelectState11check_errorEP5CUserR8MSG_BASE+0x9d>
 81dffc8:	b8 ff ff ff 7f       	mov    $0x7fffffff,%eax
 81dffcd:	eb 05                	jmp    81dffd4 <_ZN38Dispatcher_TournamentRewardSelectState11check_errorEP5CUserR8MSG_BASE+0xa2>
 81dffcf:	b8 00 00 00 00       	mov    $0x0,%eax
 81dffd4:	83 c4 24             	add    $0x24,%esp
 81dffd7:	5b                   	pop    %ebx
 81dffd8:	5d                   	pop    %ebp
 81dffd9:	c3                   	ret

```

```c
// Dispatcher_TournamentRewardSelectState::check_error @ 0x81dff32

/* Dispatcher_TournamentRewardSelectState::check_error(CUser*, MSG_BASE&) */

undefined4 Dispatcher_TournamentRewardSelectState::check_error(CUser *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  CParty *this;
  
  if (param_2 == (MSG_BASE *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar3 = CUser::get_state((CUser *)param_2);
    if (iVar3 == 5) {
      CUser::GetPartyIndex((CUser *)param_2);
      iVar3 = G_CGameManager();
      this = (CParty *)CGameManager::GetParty(iVar3);
      if (this == (CParty *)0x0) {
        uVar2 = 0xffffffff;
      }
      else {
        cVar1 = CParty::GetTournamentDungeonClearState(this);
        if (cVar1 == '\x01') {
          cVar1 = CParty::CheckRecvFromAllMember(this,(CUser *)param_2);
          if (cVar1 == '\x01') {
            uVar2 = 0;
          }
          else {
            uVar2 = 0x7fffffff;
          }
        }
        else {
          uVar2 = 0x7fffffff;
        }
      }
    }
    else {
      uVar2 = 0x7fffffff;
    }
  }
  return uVar2;
}

```

---

## process

```asm
// === 081dfca2 Dispatcher_TournamentRewardSelectState::process  [0x081dfca2-0x81dfd73] ===
 81dfca2:	55                   	push   %ebp
 81dfca3:	89 e5                	mov    %esp,%ebp
 81dfca5:	53                   	push   %ebx
 81dfca6:	83 ec 24             	sub    $0x24,%esp
 81dfca9:	8b 45 14             	mov    0x14(%ebp),%eax
 81dfcac:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81dfcaf:	8b 45 10             	mov    0x10(%ebp),%eax
 81dfcb2:	89 44 24 08          	mov    %eax,0x8(%esp)
 81dfcb6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dfcb9:	89 44 24 04          	mov    %eax,0x4(%esp)
 81dfcbd:	8b 45 08             	mov    0x8(%ebp),%eax
 81dfcc0:	89 04 24             	mov    %eax,(%esp)
 81dfcc3:	e8 6a 02 00 00       	call   81dff32 <_ZN38Dispatcher_TournamentRewardSelectState11check_errorEP5CUserR8MSG_BASE>
 81dfcc8:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81dfccb:	89 42 04             	mov    %eax,0x4(%edx)
 81dfcce:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81dfcd1:	8b 40 04             	mov    0x4(%eax),%eax
 81dfcd4:	85 c0                	test   %eax,%eax
 81dfcd6:	7e 0a                	jle    81dfce2 <_ZN38Dispatcher_TournamentRewardSelectState7processEP5CUserR8MSG_BASER9ParamBase+0x40>
 81dfcd8:	b8 00 00 00 00       	mov    $0x0,%eax
 81dfcdd:	e9 8c 00 00 00       	jmp    81dfd6e <_ZN38Dispatcher_TournamentRewardSelectState7processEP5CUserR8MSG_BASER9ParamBase+0xcc>
 81dfce2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81dfce5:	8b 40 04             	mov    0x4(%eax),%eax
 81dfce8:	85 c0                	test   %eax,%eax
 81dfcea:	79 28                	jns    81dfd14 <_ZN38Dispatcher_TournamentRewardSelectState7processEP5CUserR8MSG_BASER9ParamBase+0x72>
 81dfcec:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81dfcef:	8b 40 04             	mov    0x4(%eax),%eax
 81dfcf2:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81dfcf9:	00 
 81dfcfa:	89 44 24 08          	mov    %eax,0x8(%esp)
 81dfcfe:	c7 44 24 04 20 1b bd 	movl   $0x8bd1b20,0x4(%esp)
 81dfd05:	08 
 81dfd06:	c7 04 24 af 52 00 00 	movl   $0x52af,(%esp)
 81dfd0d:	e8 c5 0b 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81dfd12:	eb 5a                	jmp    81dfd6e <_ZN38Dispatcher_TournamentRewardSelectState7processEP5CUserR8MSG_BASER9ParamBase+0xcc>
 81dfd14:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dfd17:	89 04 24             	mov    %eax,(%esp)
 81dfd1a:	e8 2f 01 05 00       	call   822fe4e <_ZN5CUser13GetPartyIndexEv>
 81dfd1f:	0f bf d8             	movswl %ax,%ebx
 81dfd22:	e8 67 c4 ee ff       	call   80cc18e <_Z14G_CGameManagerv>
 81dfd27:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81dfd2b:	89 04 24             	mov    %eax,(%esp)
 81dfd2e:	e8 ff 51 0b 00       	call   8294f32 <_ZN12CGameManager8GetPartyEi>
 81dfd33:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81dfd36:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81dfd3a:	75 2d                	jne    81dfd69 <_ZN38Dispatcher_TournamentRewardSelectState7processEP5CUserR8MSG_BASER9ParamBase+0xc7>
 81dfd3c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dfd3f:	89 04 24             	mov    %eax,(%esp)
 81dfd42:	e8 27 a6 ef ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81dfd47:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81dfd4b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81dfd52:	00 
 81dfd53:	c7 44 24 04 20 1b bd 	movl   $0x8bd1b20,0x4(%esp)
 81dfd5a:	08 
 81dfd5b:	c7 04 24 b4 52 00 00 	movl   $0x52b4,(%esp)
 81dfd62:	e8 70 0b 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81dfd67:	eb 05                	jmp    81dfd6e <_ZN38Dispatcher_TournamentRewardSelectState7processEP5CUserR8MSG_BASER9ParamBase+0xcc>
 81dfd69:	b8 00 00 00 00       	mov    $0x0,%eax
 81dfd6e:	83 c4 24             	add    $0x24,%esp
 81dfd71:	5b                   	pop    %ebx
 81dfd72:	5d                   	pop    %ebp
 81dfd73:	c3                   	ret

```

```c
// Dispatcher_TournamentRewardSelectState::process @ 0x81dfca2

/* Dispatcher_TournamentRewardSelectState::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_TournamentRewardSelectState::process
          (Dispatcher_TournamentRewardSelectState *this,CUser *param_1,MSG_BASE *param_2,
          ParamBase *param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = check_error((CUser *)this,(MSG_BASE *)param_1);
  *(undefined4 *)(param_3 + 4) = uVar1;
  if (*(int *)(param_3 + 4) < 1) {
    if (*(int *)(param_3 + 4) < 0) {
      uVar1 = LineFunc(0x52af,
                       "virtual int Dispatcher_TournamentRewardSelectState::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(param_3 + 4),0);
    }
    else {
      CUser::GetPartyIndex(param_1);
      iVar2 = G_CGameManager();
      iVar2 = CGameManager::GetParty(iVar2);
      if (iVar2 == 0) {
        uVar3 = CUser::get_acc_id(param_1);
        uVar1 = LineFunc(0x52b4,
                         "virtual int Dispatcher_TournamentRewardSelectState::process(CUser*, MSG_BASE&, ParamBase&)"
                         ,0,uVar3);
      }
      else {
        uVar1 = 0;
      }
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## read

```asm
// === 081dfc98 Dispatcher_TournamentRewardSelectState::read  [0x081dfc98-0x81dfca1] ===
 81dfc98:	55                   	push   %ebp
 81dfc99:	89 e5                	mov    %esp,%ebp
 81dfc9b:	b8 00 00 00 00       	mov    $0x0,%eax
 81dfca0:	5d                   	pop    %ebp
 81dfca1:	c3                   	ret

```

```c
// Dispatcher_TournamentRewardSelectState::read @ 0x81dfc98

/* Dispatcher_TournamentRewardSelectState::read(PacketBuf&, MSG_BASE&) */

undefined4 Dispatcher_TournamentRewardSelectState::read(PacketBuf *param_1,MSG_BASE *param_2)

{
  return 0;
}

```

---

## send

```asm
// === 081dfd74 Dispatcher_TournamentRewardSelectState::send  [0x081dfd74-0x81dff31] ===
 81dfd74:	55                   	push   %ebp
 81dfd75:	89 e5                	mov    %esp,%ebp
 81dfd77:	56                   	push   %esi
 81dfd78:	53                   	push   %ebx
 81dfd79:	83 ec 30             	sub    $0x30,%esp
 81dfd7c:	8b 45 10             	mov    0x10(%ebp),%eax
 81dfd7f:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81dfd82:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81dfd85:	89 04 24             	mov    %eax,(%esp)
 81dfd88:	e8 bf df 3a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81dfd8d:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81dfd90:	89 04 24             	mov    %eax,(%esp)
 81dfd93:	e8 4e bb ee ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 81dfd98:	c7 44 24 08 ca 01 00 	movl   $0x1ca,0x8(%esp)
 81dfd9f:	00 
 81dfda0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81dfda7:	00 
 81dfda8:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81dfdab:	89 04 24             	mov    %eax,(%esp)
 81dfdae:	e8 49 bb ee ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81dfdb3:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81dfdb6:	8b 40 04             	mov    0x4(%eax),%eax
 81dfdb9:	85 c0                	test   %eax,%eax
 81dfdbb:	0f 85 5e 01 00 00    	jne    81dff1f <_ZN38Dispatcher_TournamentRewardSelectState4sendEP5CUserR9ParamBase+0x1ab>
 81dfdc1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81dfdc8:	00 
 81dfdc9:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81dfdcc:	89 04 24             	mov    %eax,(%esp)
 81dfdcf:	e8 4c bb ee ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81dfdd4:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dfdd7:	89 04 24             	mov    %eax,(%esp)
 81dfdda:	e8 6f 00 05 00       	call   822fe4e <_ZN5CUser13GetPartyIndexEv>
 81dfddf:	0f bf d8             	movswl %ax,%ebx
 81dfde2:	e8 a7 c3 ee ff       	call   80cc18e <_Z14G_CGameManagerv>
 81dfde7:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81dfdeb:	89 04 24             	mov    %eax,(%esp)
 81dfdee:	e8 3f 51 0b 00       	call   8294f32 <_ZN12CGameManager8GetPartyEi>
 81dfdf3:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81dfdf6:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 81dfdfa:	0f 84 1f 01 00 00    	je     81dff1f <_ZN38Dispatcher_TournamentRewardSelectState4sendEP5CUserR9ParamBase+0x1ab>
 81dfe00:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 81dfe07:	e9 9c 00 00 00       	jmp    81dfea8 <_ZN38Dispatcher_TournamentRewardSelectState4sendEP5CUserR9ParamBase+0x134>
 81dfe0c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81dfe0f:	89 44 24 04          	mov    %eax,0x4(%esp)
 81dfe13:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81dfe16:	89 04 24             	mov    %eax,(%esp)
 81dfe19:	e8 46 59 f6 ff       	call   8145764 <_ZN6CParty8get_userEi>
 81dfe1e:	85 c0                	test   %eax,%eax
 81dfe20:	0f 94 c0             	sete   %al
 81dfe23:	84 c0                	test   %al,%al
 81dfe25:	74 15                	je     81dfe3c <_ZN38Dispatcher_TournamentRewardSelectState4sendEP5CUserR9ParamBase+0xc8>
 81dfe27:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 81dfe2e:	ff 
 81dfe2f:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81dfe32:	89 04 24             	mov    %eax,(%esp)
 81dfe35:	e8 e6 ba ee ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81dfe3a:	eb 68                	jmp    81dfea4 <_ZN38Dispatcher_TournamentRewardSelectState4sendEP5CUserR9ParamBase+0x130>
 81dfe3c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81dfe3f:	89 44 24 04          	mov    %eax,0x4(%esp)
 81dfe43:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81dfe46:	89 04 24             	mov    %eax,(%esp)
 81dfe49:	e8 16 59 f6 ff       	call   8145764 <_ZN6CParty8get_userEi>
 81dfe4e:	89 04 24             	mov    %eax,(%esp)
 81dfe51:	e8 10 79 47 00       	call   8657766 <_ZNK5CUser24getCurCharacTotalFatigueEv>
 81dfe56:	89 c3                	mov    %eax,%ebx
 81dfe58:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81dfe5b:	89 44 24 04          	mov    %eax,0x4(%esp)
 81dfe5f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81dfe62:	89 04 24             	mov    %eax,(%esp)
 81dfe65:	e8 fa 58 f6 ff       	call   8145764 <_ZN6CParty8get_userEi>
 81dfe6a:	89 04 24             	mov    %eax,(%esp)
 81dfe6d:	e8 92 79 47 00       	call   8657804 <_ZNK5CUser27getCurCharacTotalMaxFatigueEv>
 81dfe72:	66 39 c3             	cmp    %ax,%bx
 81dfe75:	0f 94 c0             	sete   %al
 81dfe78:	84 c0                	test   %al,%al
 81dfe7a:	74 15                	je     81dfe91 <_ZN38Dispatcher_TournamentRewardSelectState4sendEP5CUserR9ParamBase+0x11d>
 81dfe7c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81dfe83:	00 
 81dfe84:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81dfe87:	89 04 24             	mov    %eax,(%esp)
 81dfe8a:	e8 91 ba ee ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81dfe8f:	eb 13                	jmp    81dfea4 <_ZN38Dispatcher_TournamentRewardSelectState4sendEP5CUserR9ParamBase+0x130>
 81dfe91:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81dfe98:	00 
 81dfe99:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81dfe9c:	89 04 24             	mov    %eax,(%esp)
 81dfe9f:	e8 7c ba ee ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81dfea4:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 81dfea8:	83 7d f4 03          	cmpl   $0x3,-0xc(%ebp)
 81dfeac:	0f 9e c0             	setle  %al
 81dfeaf:	84 c0                	test   %al,%al
 81dfeb1:	0f 85 55 ff ff ff    	jne    81dfe0c <_ZN38Dispatcher_TournamentRewardSelectState4sendEP5CUserR9ParamBase+0x98>
 81dfeb7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81dfebe:	00 
 81dfebf:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81dfec2:	89 04 24             	mov    %eax,(%esp)
 81dfec5:	e8 8e ba ee ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81dfeca:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81dfecd:	89 44 24 04          	mov    %eax,0x4(%esp)
 81dfed1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81dfed4:	89 04 24             	mov    %eax,(%esp)
 81dfed7:	e8 72 d2 3b 00       	call   859d14e <_ZN6CParty13send_to_partyER11PacketGuard>
 81dfedc:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 81dfee3:	00 
 81dfee4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81dfee7:	89 04 24             	mov    %eax,(%esp)
 81dfeea:	e8 cd d7 3d 00       	call   85bd6bc <_ZN6CParty30SetTournamentDungeonClearStateEc>
 81dfeef:	c7 44 24 04 2f 00 00 	movl   $0x2f,0x4(%esp)
 81dfef6:	00 
 81dfef7:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81dfefa:	89 04 24             	mov    %eax,(%esp)
 81dfefd:	e8 dc d7 3d 00       	call   85bd6de <_ZN6CParty28InsertTournamentDungeonTimerE13TIMER_MESSAGE>
 81dff02:	eb 1b                	jmp    81dff1f <_ZN38Dispatcher_TournamentRewardSelectState4sendEP5CUserR9ParamBase+0x1ab>
 81dff04:	89 d3                	mov    %edx,%ebx
 81dff06:	89 c6                	mov    %eax,%esi
 81dff08:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81dff0b:	89 04 24             	mov    %eax,(%esp)
 81dff0e:	e8 6d df 3a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81dff13:	89 f0                	mov    %esi,%eax
 81dff15:	89 da                	mov    %ebx,%edx
 81dff17:	89 04 24             	mov    %eax,(%esp)
 81dff1a:	e8 31 38 90 00       	call   8ae3750 <_Unwind_Resume>
 81dff1f:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81dff22:	89 04 24             	mov    %eax,(%esp)
 81dff25:	e8 56 df 3a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81dff2a:	83 c4 30             	add    $0x30,%esp
 81dff2d:	5b                   	pop    %ebx
 81dff2e:	5e                   	pop    %esi
 81dff2f:	5d                   	pop    %ebp
 81dff30:	c3                   	ret
 81dff31:	90                   	nop

```

```c
// Dispatcher_TournamentRewardSelectState::send @ 0x81dfd74

/* Dispatcher_TournamentRewardSelectState::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_TournamentRewardSelectState::send
          (Dispatcher_TournamentRewardSelectState *this,CUser *param_1,ParamBase *param_2)

{
  short sVar1;
  short sVar2;
  int iVar3;
  CUser *pCVar4;
  PacketGuard local_24 [12];
  ParamBase *local_18;
  CParty *local_14;
  int local_10;
  
  local_18 = param_2;
  PacketGuard::PacketGuard(local_24);
                    /* try { // try from 081dfd93 to 081dff01 has its CatchHandler @ 081dff04 */
  InterfacePacketBuf::clear((InterfacePacketBuf *)local_24);
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,1,0x1ca);
  if (*(int *)(local_18 + 4) == 0) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,1);
    CUser::GetPartyIndex(param_1);
    iVar3 = G_CGameManager();
    local_14 = (CParty *)CGameManager::GetParty(iVar3);
    if (local_14 != (CParty *)0x0) {
      for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
        iVar3 = CParty::get_user(local_14,local_10);
        if (iVar3 == 0) {
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,-1);
        }
        else {
          pCVar4 = (CUser *)CParty::get_user(local_14,local_10);
          sVar1 = CUser::getCurCharacTotalFatigue(pCVar4);
          pCVar4 = (CUser *)CParty::get_user(local_14,local_10);
          sVar2 = CUser::getCurCharacTotalMaxFatigue(pCVar4);
          if (sVar1 == sVar2) {
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,0);
          }
          else {
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,1);
          }
        }
      }
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
      CParty::send_to_party(local_14,local_24);
      CParty::SetTournamentDungeonClearState(local_14,'\x02');
      CParty::InsertTournamentDungeonTimer(local_14,0x2f);
    }
  }
  PacketGuard::~PacketGuard(local_24);
  return;
}

```

