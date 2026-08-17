# Dispatcher_PartyTeleportConfirm

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 081dc75c Dispatcher_PartyTeleportConfirm::check_error  [0x081dc75c-0x81dc82f] ===
 81dc75c:	55                   	push   %ebp
 81dc75d:	89 e5                	mov    %esp,%ebp
 81dc75f:	83 ec 28             	sub    $0x28,%esp
 81dc762:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81dc766:	75 0a                	jne    81dc772 <_ZN31Dispatcher_PartyTeleportConfirm11check_errorEP5CUserR8MSG_BASE+0x16>
 81dc768:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81dc76d:	e9 bc 00 00 00       	jmp    81dc82e <_ZN31Dispatcher_PartyTeleportConfirm11check_errorEP5CUserR8MSG_BASE+0xd2>
 81dc772:	8b 45 10             	mov    0x10(%ebp),%eax
 81dc775:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81dc778:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dc77b:	89 04 24             	mov    %eax,(%esp)
 81dc77e:	e8 09 dc ef ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81dc783:	83 f8 03             	cmp    $0x3,%eax
 81dc786:	0f 95 c0             	setne  %al
 81dc789:	84 c0                	test   %al,%al
 81dc78b:	74 0a                	je     81dc797 <_ZN31Dispatcher_PartyTeleportConfirm11check_errorEP5CUserR8MSG_BASE+0x3b>
 81dc78d:	b8 13 00 00 00       	mov    $0x13,%eax
 81dc792:	e9 97 00 00 00       	jmp    81dc82e <_ZN31Dispatcher_PartyTeleportConfirm11check_errorEP5CUserR8MSG_BASE+0xd2>
 81dc797:	e8 0b dc ef ff       	call   80da3a7 <_Z11G_GameWorldv>
 81dc79c:	89 04 24             	mov    %eax,(%esp)
 81dc79f:	e8 44 5d f6 ff       	call   81424e8 <_ZNK9GameWorld12IsPVPChannelEv>
 81dc7a4:	84 c0                	test   %al,%al
 81dc7a6:	75 11                	jne    81dc7b9 <_ZN31Dispatcher_PartyTeleportConfirm11check_errorEP5CUserR8MSG_BASE+0x5d>
 81dc7a8:	e8 fa db ef ff       	call   80da3a7 <_Z11G_GameWorldv>
 81dc7ad:	89 04 24             	mov    %eax,(%esp)
 81dc7b0:	e8 69 7c 05 00       	call   823441e <_ZNK9GameWorld20IsPvPSkilTreeChannelEv>
 81dc7b5:	84 c0                	test   %al,%al
 81dc7b7:	74 07                	je     81dc7c0 <_ZN31Dispatcher_PartyTeleportConfirm11check_errorEP5CUserR8MSG_BASE+0x64>
 81dc7b9:	b8 01 00 00 00       	mov    $0x1,%eax
 81dc7be:	eb 05                	jmp    81dc7c5 <_ZN31Dispatcher_PartyTeleportConfirm11check_errorEP5CUserR8MSG_BASE+0x69>
 81dc7c0:	b8 00 00 00 00       	mov    $0x0,%eax
 81dc7c5:	84 c0                	test   %al,%al
 81dc7c7:	74 07                	je     81dc7d0 <_ZN31Dispatcher_PartyTeleportConfirm11check_errorEP5CUserR8MSG_BASE+0x74>
 81dc7c9:	b8 13 00 00 00       	mov    $0x13,%eax
 81dc7ce:	eb 5e                	jmp    81dc82e <_ZN31Dispatcher_PartyTeleportConfirm11check_errorEP5CUserR8MSG_BASE+0xd2>
 81dc7d0:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dc7d3:	89 04 24             	mov    %eax,(%esp)
 81dc7d6:	e8 71 89 47 00       	call   865514c <_ZN5CUser8GetPartyEv>
 81dc7db:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81dc7de:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81dc7e2:	74 45                	je     81dc829 <_ZN31Dispatcher_PartyTeleportConfirm11check_errorEP5CUserR8MSG_BASE+0xcd>
 81dc7e4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81dc7e7:	89 04 24             	mov    %eax,(%esp)
 81dc7ea:	e8 1f 11 05 00       	call   822d90e <_ZN6CParty16GetPartyTelePortEv>
 81dc7ef:	89 04 24             	mov    %eax,(%esp)
 81dc7f2:	e8 f7 0f 05 00       	call   822d7ee <_ZN14CPartyTelePort18get_teleport_stateEv>
 81dc7f7:	3c ff                	cmp    $0xff,%al
 81dc7f9:	7d 1e                	jge    81dc819 <_ZN31Dispatcher_PartyTeleportConfirm11check_errorEP5CUserR8MSG_BASE+0xbd>
 81dc7fb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81dc7fe:	89 04 24             	mov    %eax,(%esp)
 81dc801:	e8 08 11 05 00       	call   822d90e <_ZN6CParty16GetPartyTelePortEv>
 81dc806:	89 04 24             	mov    %eax,(%esp)
 81dc809:	e8 e0 0f 05 00       	call   822d7ee <_ZN14CPartyTelePort18get_teleport_stateEv>
 81dc80e:	3c 03                	cmp    $0x3,%al
 81dc810:	7e 07                	jle    81dc819 <_ZN31Dispatcher_PartyTeleportConfirm11check_errorEP5CUserR8MSG_BASE+0xbd>
 81dc812:	b8 01 00 00 00       	mov    $0x1,%eax
 81dc817:	eb 05                	jmp    81dc81e <_ZN31Dispatcher_PartyTeleportConfirm11check_errorEP5CUserR8MSG_BASE+0xc2>
 81dc819:	b8 00 00 00 00       	mov    $0x0,%eax
 81dc81e:	84 c0                	test   %al,%al
 81dc820:	74 07                	je     81dc829 <_ZN31Dispatcher_PartyTeleportConfirm11check_errorEP5CUserR8MSG_BASE+0xcd>
 81dc822:	b8 13 00 00 00       	mov    $0x13,%eax
 81dc827:	eb 05                	jmp    81dc82e <_ZN31Dispatcher_PartyTeleportConfirm11check_errorEP5CUserR8MSG_BASE+0xd2>
 81dc829:	b8 00 00 00 00       	mov    $0x0,%eax
 81dc82e:	c9                   	leave
 81dc82f:	c3                   	ret

```

```c
// Dispatcher_PartyTeleportConfirm::check_error @ 0x81dc75c

/* Dispatcher_PartyTeleportConfirm::check_error(CUser*, MSG_BASE&) */

undefined4 Dispatcher_PartyTeleportConfirm::check_error(CUser *param_1,MSG_BASE *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  GameWorld *pGVar4;
  CParty *this;
  CPartyTelePort *pCVar5;
  
  if (param_2 == (MSG_BASE *)0x0) {
    return 0xffffffff;
  }
  iVar3 = CUser::get_state((CUser *)param_2);
  if (iVar3 != 3) {
    return 0x13;
  }
  pGVar4 = (GameWorld *)G_GameWorld();
  cVar2 = GameWorld::IsPVPChannel(pGVar4);
  if (cVar2 == '\0') {
    pGVar4 = (GameWorld *)G_GameWorld();
    cVar2 = GameWorld::IsPvPSkilTreeChannel(pGVar4);
    if (cVar2 != '\0') goto LAB_081dc7b9;
    bVar1 = false;
  }
  else {
LAB_081dc7b9:
    bVar1 = true;
  }
  if (bVar1) {
    return 0x13;
  }
  this = (CParty *)CUser::GetParty((CUser *)param_2);
  if (this == (CParty *)0x0) {
    return 0;
  }
  pCVar5 = (CPartyTelePort *)CParty::GetPartyTelePort(this);
  cVar2 = CPartyTelePort::get_teleport_state(pCVar5);
  if (cVar2 < -1) {
    pCVar5 = (CPartyTelePort *)CParty::GetPartyTelePort(this);
    cVar2 = CPartyTelePort::get_teleport_state(pCVar5);
    if ('\x03' < cVar2) {
      bVar1 = true;
      goto LAB_081dc81e;
    }
  }
  bVar1 = false;
LAB_081dc81e:
  if (!bVar1) {
    return 0;
  }
  return 0x13;
}

```

---

## process

```asm
// === 081dc5ee Dispatcher_PartyTeleportConfirm::process  [0x081dc5ee-0x81dc75b] ===
 81dc5ee:	55                   	push   %ebp
 81dc5ef:	89 e5                	mov    %esp,%ebp
 81dc5f1:	83 ec 28             	sub    $0x28,%esp
 81dc5f4:	8b 45 14             	mov    0x14(%ebp),%eax
 81dc5f7:	89 45 e8             	mov    %eax,-0x18(%ebp)
 81dc5fa:	8b 45 10             	mov    0x10(%ebp),%eax
 81dc5fd:	89 44 24 08          	mov    %eax,0x8(%esp)
 81dc601:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dc604:	89 44 24 04          	mov    %eax,0x4(%esp)
 81dc608:	8b 45 08             	mov    0x8(%ebp),%eax
 81dc60b:	89 04 24             	mov    %eax,(%esp)
 81dc60e:	e8 49 01 00 00       	call   81dc75c <_ZN31Dispatcher_PartyTeleportConfirm11check_errorEP5CUserR8MSG_BASE>
 81dc613:	8b 55 e8             	mov    -0x18(%ebp),%edx
 81dc616:	89 42 04             	mov    %eax,0x4(%edx)
 81dc619:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81dc61c:	8b 40 04             	mov    0x4(%eax),%eax
 81dc61f:	85 c0                	test   %eax,%eax
 81dc621:	7e 0a                	jle    81dc62d <_ZN31Dispatcher_PartyTeleportConfirm7processEP5CUserR8MSG_BASER9ParamBase+0x3f>
 81dc623:	b8 00 00 00 00       	mov    $0x0,%eax
 81dc628:	e9 2c 01 00 00       	jmp    81dc759 <_ZN31Dispatcher_PartyTeleportConfirm7processEP5CUserR8MSG_BASER9ParamBase+0x16b>
 81dc62d:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81dc630:	8b 40 04             	mov    0x4(%eax),%eax
 81dc633:	85 c0                	test   %eax,%eax
 81dc635:	79 2b                	jns    81dc662 <_ZN31Dispatcher_PartyTeleportConfirm7processEP5CUserR8MSG_BASER9ParamBase+0x74>
 81dc637:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81dc63a:	8b 40 04             	mov    0x4(%eax),%eax
 81dc63d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81dc644:	00 
 81dc645:	89 44 24 08          	mov    %eax,0x8(%esp)
 81dc649:	c7 44 24 04 00 20 bd 	movl   $0x8bd2000,0x4(%esp)
 81dc650:	08 
 81dc651:	c7 04 24 e5 4b 00 00 	movl   $0x4be5,(%esp)
 81dc658:	e8 7a 42 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81dc65d:	e9 f7 00 00 00       	jmp    81dc759 <_ZN31Dispatcher_PartyTeleportConfirm7processEP5CUserR8MSG_BASER9ParamBase+0x16b>
 81dc662:	8b 45 10             	mov    0x10(%ebp),%eax
 81dc665:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81dc668:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81dc66b:	0f b6 50 0d          	movzbl 0xd(%eax),%edx
 81dc66f:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81dc672:	88 50 08             	mov    %dl,0x8(%eax)
 81dc675:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dc678:	89 04 24             	mov    %eax,(%esp)
 81dc67b:	e8 cc 8a 47 00       	call   865514c <_ZN5CUser8GetPartyEv>
 81dc680:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81dc683:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 81dc687:	0f 84 c7 00 00 00    	je     81dc754 <_ZN31Dispatcher_PartyTeleportConfirm7processEP5CUserR8MSG_BASER9ParamBase+0x166>
 81dc68d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dc690:	89 44 24 04          	mov    %eax,0x4(%esp)
 81dc694:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81dc697:	89 04 24             	mov    %eax,(%esp)
 81dc69a:	e8 dd e5 3b 00       	call   859ac7c <_ZNK6CParty15GetMemberSlotNoEPK5CUser>
 81dc69f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81dc6a2:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81dc6a5:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81dc6a9:	3c 01                	cmp    $0x1,%al
 81dc6ab:	75 37                	jne    81dc6e4 <_ZN31Dispatcher_PartyTeleportConfirm7processEP5CUserR8MSG_BASER9ParamBase+0xf6>
 81dc6ad:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81dc6b0:	89 04 24             	mov    %eax,(%esp)
 81dc6b3:	e8 56 12 05 00       	call   822d90e <_ZN6CParty16GetPartyTelePortEv>
 81dc6b8:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81dc6bf:	00 
 81dc6c0:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81dc6c3:	89 54 24 04          	mov    %edx,0x4(%esp)
 81dc6c7:	89 04 24             	mov    %eax,(%esp)
 81dc6ca:	e8 4d f2 3d 00       	call   85bb91c <_ZN14CPartyTelePort25set_teleport_member_stateEic>
 81dc6cf:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81dc6d2:	89 04 24             	mov    %eax,(%esp)
 81dc6d5:	e8 34 12 05 00       	call   822d90e <_ZN6CParty16GetPartyTelePortEv>
 81dc6da:	89 04 24             	mov    %eax,(%esp)
 81dc6dd:	e8 26 f4 3d 00       	call   85bbb08 <_ZN14CPartyTelePort24check_cur_teleport_stateEv>
 81dc6e2:	eb 70                	jmp    81dc754 <_ZN31Dispatcher_PartyTeleportConfirm7processEP5CUserR8MSG_BASER9ParamBase+0x166>
 81dc6e4:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81dc6e7:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81dc6eb:	84 c0                	test   %al,%al
 81dc6ed:	75 3f                	jne    81dc72e <_ZN31Dispatcher_PartyTeleportConfirm7processEP5CUserR8MSG_BASER9ParamBase+0x140>
 81dc6ef:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81dc6f2:	89 04 24             	mov    %eax,(%esp)
 81dc6f5:	e8 14 12 05 00       	call   822d90e <_ZN6CParty16GetPartyTelePortEv>
 81dc6fa:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81dc701:	00 
 81dc702:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81dc705:	89 54 24 04          	mov    %edx,0x4(%esp)
 81dc709:	89 04 24             	mov    %eax,(%esp)
 81dc70c:	e8 0b f2 3d 00       	call   85bb91c <_ZN14CPartyTelePort25set_teleport_member_stateEic>
 81dc711:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81dc714:	89 04 24             	mov    %eax,(%esp)
 81dc717:	e8 f2 11 05 00       	call   822d90e <_ZN6CParty16GetPartyTelePortEv>
 81dc71c:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 81dc723:	00 
 81dc724:	89 04 24             	mov    %eax,(%esp)
 81dc727:	e8 ce 10 05 00       	call   822d7fa <_ZN14CPartyTelePort18set_teleport_stateEc>
 81dc72c:	eb 26                	jmp    81dc754 <_ZN31Dispatcher_PartyTeleportConfirm7processEP5CUserR8MSG_BASER9ParamBase+0x166>
 81dc72e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81dc731:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81dc735:	3c 03                	cmp    $0x3,%al
 81dc737:	75 1b                	jne    81dc754 <_ZN31Dispatcher_PartyTeleportConfirm7processEP5CUserR8MSG_BASER9ParamBase+0x166>
 81dc739:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81dc73c:	89 04 24             	mov    %eax,(%esp)
 81dc73f:	e8 ca 11 05 00       	call   822d90e <_ZN6CParty16GetPartyTelePortEv>
 81dc744:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 81dc74b:	00 
 81dc74c:	89 04 24             	mov    %eax,(%esp)
 81dc74f:	e8 a6 10 05 00       	call   822d7fa <_ZN14CPartyTelePort18set_teleport_stateEc>
 81dc754:	b8 00 00 00 00       	mov    $0x0,%eax
 81dc759:	c9                   	leave
 81dc75a:	c3                   	ret
 81dc75b:	90                   	nop

```

```c
// Dispatcher_PartyTeleportConfirm::process @ 0x81dc5ee

/* Dispatcher_PartyTeleportConfirm::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_PartyTeleportConfirm::process
          (Dispatcher_PartyTeleportConfirm *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3
          )

{
  undefined4 uVar1;
  CParty *this_00;
  int iVar2;
  CPartyTelePort *pCVar3;
  
  uVar1 = check_error((CUser *)this,(MSG_BASE *)param_1);
  *(undefined4 *)(param_3 + 4) = uVar1;
  if (*(int *)(param_3 + 4) < 1) {
    if (*(int *)(param_3 + 4) < 0) {
      uVar1 = LineFunc(0x4be5,
                       "virtual int Dispatcher_PartyTeleportConfirm::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(param_3 + 4),0);
    }
    else {
      *(MSG_BASE *)(param_3 + 8) = param_2[0xd];
      this_00 = (CParty *)CUser::GetParty(param_1);
      if (this_00 != (CParty *)0x0) {
        iVar2 = CParty::GetMemberSlotNo(this_00,param_1);
        if (param_2[0xd] == (MSG_BASE)0x1) {
          pCVar3 = (CPartyTelePort *)CParty::GetPartyTelePort(this_00);
          CPartyTelePort::set_teleport_member_state(pCVar3,iVar2,'\x01');
          pCVar3 = (CPartyTelePort *)CParty::GetPartyTelePort(this_00);
          CPartyTelePort::check_cur_teleport_state(pCVar3);
        }
        else if (param_2[0xd] == (MSG_BASE)0x0) {
          pCVar3 = (CPartyTelePort *)CParty::GetPartyTelePort(this_00);
          CPartyTelePort::set_teleport_member_state(pCVar3,iVar2,'\0');
          pCVar3 = (CPartyTelePort *)CParty::GetPartyTelePort(this_00);
          CPartyTelePort::set_teleport_state(pCVar3,'\x02');
        }
        else if (param_2[0xd] == (MSG_BASE)0x3) {
          pCVar3 = (CPartyTelePort *)CParty::GetPartyTelePort(this_00);
          CPartyTelePort::set_teleport_state(pCVar3,'\x03');
        }
      }
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

## read

```asm
// === 081dc598 Dispatcher_PartyTeleportConfirm::read  [0x081dc598-0x81dc5ed] ===
 81dc598:	55                   	push   %ebp
 81dc599:	89 e5                	mov    %esp,%ebp
 81dc59b:	83 ec 28             	sub    $0x28,%esp
 81dc59e:	8b 45 10             	mov    0x10(%ebp),%eax
 81dc5a1:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81dc5a4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81dc5a7:	83 c0 0d             	add    $0xd,%eax
 81dc5aa:	89 44 24 04          	mov    %eax,0x4(%esp)
 81dc5ae:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dc5b1:	89 04 24             	mov    %eax,(%esp)
 81dc5b4:	e8 b7 09 3b 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 81dc5b9:	83 f0 01             	xor    $0x1,%eax
 81dc5bc:	84 c0                	test   %al,%al
 81dc5be:	74 26                	je     81dc5e6 <_ZN31Dispatcher_PartyTeleportConfirm4readER9PacketBufR8MSG_BASE+0x4e>
 81dc5c0:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81dc5c7:	00 
 81dc5c8:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81dc5cf:	00 
 81dc5d0:	c7 44 24 04 60 20 bd 	movl   $0x8bd2060,0x4(%esp)
 81dc5d7:	08 
 81dc5d8:	c7 04 24 d7 4b 00 00 	movl   $0x4bd7,(%esp)
 81dc5df:	e8 f3 42 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81dc5e4:	eb 05                	jmp    81dc5eb <_ZN31Dispatcher_PartyTeleportConfirm4readER9PacketBufR8MSG_BASE+0x53>
 81dc5e6:	b8 00 00 00 00       	mov    $0x0,%eax
 81dc5eb:	c9                   	leave
 81dc5ec:	c3                   	ret
 81dc5ed:	90                   	nop

```

```c
// Dispatcher_PartyTeleportConfirm::read @ 0x81dc598

/* Dispatcher_PartyTeleportConfirm::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_PartyTeleportConfirm::read
          (Dispatcher_PartyTeleportConfirm *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_byte(param_1,(uchar *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    uVar2 = 0;
  }
  else {
    uVar2 = LineFunc(0x4bd7,
                     "virtual int Dispatcher_PartyTeleportConfirm::read(PacketBuf&, MSG_BASE&)",0,0)
    ;
  }
  return uVar2;
}

```

---

## send

```asm
// === 081dc830 Dispatcher_PartyTeleportConfirm::send  [0x081dc830-0x81dc8dd] ===
 81dc830:	55                   	push   %ebp
 81dc831:	89 e5                	mov    %esp,%ebp
 81dc833:	83 ec 28             	sub    $0x28,%esp
 81dc836:	8b 45 10             	mov    0x10(%ebp),%eax
 81dc839:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81dc83c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81dc83f:	8b 40 04             	mov    0x4(%eax),%eax
 81dc842:	85 c0                	test   %eax,%eax
 81dc844:	75 75                	jne    81dc8bb <_ZN31Dispatcher_PartyTeleportConfirm4sendEP5CUserR9ParamBase+0x8b>
 81dc846:	c7 44 24 04 b4 01 00 	movl   $0x1b4,0x4(%esp)
 81dc84d:	00 
 81dc84e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dc851:	89 04 24             	mov    %eax,(%esp)
 81dc854:	e8 47 f6 49 00       	call   867bea0 <_ZN5CUser15SendCmdOkPacketE14ENUM_CMDPACKET>
 81dc859:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dc85c:	89 04 24             	mov    %eax,(%esp)
 81dc85f:	e8 e8 88 47 00       	call   865514c <_ZN5CUser8GetPartyEv>
 81dc864:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81dc867:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81dc86b:	74 6e                	je     81dc8db <_ZN31Dispatcher_PartyTeleportConfirm4sendEP5CUserR9ParamBase+0xab>
 81dc86d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81dc870:	89 04 24             	mov    %eax,(%esp)
 81dc873:	e8 96 10 05 00       	call   822d90e <_ZN6CParty16GetPartyTelePortEv>
 81dc878:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81dc87f:	00 
 81dc880:	89 04 24             	mov    %eax,(%esp)
 81dc883:	e8 e6 f0 3d 00       	call   85bb96e <_ZN14CPartyTelePort20send_teleport_statusEh>
 81dc888:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81dc88b:	89 04 24             	mov    %eax,(%esp)
 81dc88e:	e8 7b 10 05 00       	call   822d90e <_ZN6CParty16GetPartyTelePortEv>
 81dc893:	89 04 24             	mov    %eax,(%esp)
 81dc896:	e8 1d f3 3d 00       	call   85bbbb8 <_ZN14CPartyTelePort16process_teleportEv>
 81dc89b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81dc89e:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 81dc8a2:	3c 01                	cmp    $0x1,%al
 81dc8a4:	74 35                	je     81dc8db <_ZN31Dispatcher_PartyTeleportConfirm4sendEP5CUserR9ParamBase+0xab>
 81dc8a6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81dc8a9:	89 04 24             	mov    %eax,(%esp)
 81dc8ac:	e8 5d 10 05 00       	call   822d90e <_ZN6CParty16GetPartyTelePortEv>
 81dc8b1:	89 04 24             	mov    %eax,(%esp)
 81dc8b4:	e8 8b f7 3d 00       	call   85bc044 <_ZN14CPartyTelePort19reset_teleport_dataEv>
 81dc8b9:	eb 20                	jmp    81dc8db <_ZN31Dispatcher_PartyTeleportConfirm4sendEP5CUserR9ParamBase+0xab>
 81dc8bb:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81dc8be:	8b 40 04             	mov    0x4(%eax),%eax
 81dc8c1:	0f b6 c0             	movzbl %al,%eax
 81dc8c4:	89 44 24 08          	mov    %eax,0x8(%esp)
 81dc8c8:	c7 44 24 04 b4 01 00 	movl   $0x1b4,0x4(%esp)
 81dc8cf:	00 
 81dc8d0:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dc8d3:	89 04 24             	mov    %eax,(%esp)
 81dc8d6:	e8 67 f6 49 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81dc8db:	c9                   	leave
 81dc8dc:	c3                   	ret
 81dc8dd:	90                   	nop

```

```c
// Dispatcher_PartyTeleportConfirm::send @ 0x81dc830

/* Dispatcher_PartyTeleportConfirm::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_PartyTeleportConfirm::send
          (Dispatcher_PartyTeleportConfirm *this,CUser *param_1,ParamBase *param_2)

{
  CParty *this_00;
  CPartyTelePort *pCVar1;
  
  if (*(int *)(param_2 + 4) == 0) {
    CUser::SendCmdOkPacket(param_1,0x1b4);
    this_00 = (CParty *)CUser::GetParty(param_1);
    if (this_00 != (CParty *)0x0) {
      pCVar1 = (CPartyTelePort *)CParty::GetPartyTelePort(this_00);
      CPartyTelePort::send_teleport_status(pCVar1,'\0');
      pCVar1 = (CPartyTelePort *)CParty::GetPartyTelePort(this_00);
      CPartyTelePort::process_teleport(pCVar1);
      if (param_2[8] != (ParamBase)0x1) {
        pCVar1 = (CPartyTelePort *)CParty::GetPartyTelePort(this_00);
        CPartyTelePort::reset_teleport_data(pCVar1);
      }
    }
  }
  else {
    CUser::SendCmdErrorPacket(param_1,0x1b4,*(uint *)(param_2 + 4) & 0xff);
  }
  return;
}

```

