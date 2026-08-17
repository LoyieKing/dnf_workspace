# CSpecialItemRoutingManager

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 10

---

## ArriveMemberSelection

```asm
// === 0860ab2e CSpecialItemRoutingManager::ArriveMemberSelection  [0x0860ab2e-0x860abdd] ===
 860ab2e:	55                   	push   %ebp
 860ab2f:	89 e5                	mov    %esp,%ebp
 860ab31:	83 ec 38             	sub    $0x38,%esp
 860ab34:	8b 45 14             	mov    0x14(%ebp),%eax
 860ab37:	88 45 e4             	mov    %al,-0x1c(%ebp)
 860ab3a:	8b 45 0c             	mov    0xc(%ebp),%eax
 860ab3d:	89 44 24 04          	mov    %eax,0x4(%esp)
 860ab41:	8b 45 10             	mov    0x10(%ebp),%eax
 860ab44:	89 04 24             	mov    %eax,(%esp)
 860ab47:	e8 04 f6 fa ff       	call   85ba150 <_ZN6CParty21GetMemberRoutingStateEP5CUser>
 860ab4c:	0f be c0             	movsbl %al,%eax
 860ab4f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 860ab52:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 860ab56:	75 44                	jne    860ab9c <_ZN26CSpecialItemRoutingManager21ArriveMemberSelectionEP5CUserP6CPartyc+0x6e>
 860ab58:	80 7d e4 00          	cmpb   $0x0,-0x1c(%ebp)
 860ab5c:	75 1c                	jne    860ab7a <_ZN26CSpecialItemRoutingManager21ArriveMemberSelectionEP5CUserP6CPartyc+0x4c>
 860ab5e:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 860ab65:	00 
 860ab66:	8b 45 0c             	mov    0xc(%ebp),%eax
 860ab69:	89 44 24 04          	mov    %eax,0x4(%esp)
 860ab6d:	8b 45 10             	mov    0x10(%ebp),%eax
 860ab70:	89 04 24             	mov    %eax,(%esp)
 860ab73:	e8 60 f5 fa ff       	call   85ba0d8 <_ZN6CParty21SetMemberRoutingStateEP5CUserc>
 860ab78:	eb 29                	jmp    860aba3 <_ZN26CSpecialItemRoutingManager21ArriveMemberSelectionEP5CUserP6CPartyc+0x75>
 860ab7a:	80 7d e4 01          	cmpb   $0x1,-0x1c(%ebp)
 860ab7e:	75 23                	jne    860aba3 <_ZN26CSpecialItemRoutingManager21ArriveMemberSelectionEP5CUserP6CPartyc+0x75>
 860ab80:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 860ab87:	00 
 860ab88:	8b 45 0c             	mov    0xc(%ebp),%eax
 860ab8b:	89 44 24 04          	mov    %eax,0x4(%esp)
 860ab8f:	8b 45 10             	mov    0x10(%ebp),%eax
 860ab92:	89 04 24             	mov    %eax,(%esp)
 860ab95:	e8 3e f5 fa ff       	call   85ba0d8 <_ZN6CParty21SetMemberRoutingStateEP5CUserc>
 860ab9a:	eb 07                	jmp    860aba3 <_ZN26CSpecialItemRoutingManager21ArriveMemberSelectionEP5CUserP6CPartyc+0x75>
 860ab9c:	b8 00 00 00 00       	mov    $0x0,%eax
 860aba1:	eb 38                	jmp    860abdb <_ZN26CSpecialItemRoutingManager21ArriveMemberSelectionEP5CUserP6CPartyc+0xad>
 860aba3:	8b 45 10             	mov    0x10(%ebp),%eax
 860aba6:	89 04 24             	mov    %eax,(%esp)
 860aba9:	e8 12 f6 fa ff       	call   85ba1c0 <_ZN6CParty21HasAllMemberSelectionEv>
 860abae:	84 c0                	test   %al,%al
 860abb0:	74 24                	je     860abd6 <_ZN26CSpecialItemRoutingManager21ArriveMemberSelectionEP5CUserP6CPartyc+0xa8>
 860abb2:	8b 45 10             	mov    0x10(%ebp),%eax
 860abb5:	89 44 24 04          	mov    %eax,0x4(%esp)
 860abb9:	8b 45 08             	mov    0x8(%ebp),%eax
 860abbc:	89 04 24             	mov    %eax,(%esp)
 860abbf:	e8 fe 08 00 00       	call   860b4c2 <_ZN26CSpecialItemRoutingManager11cancelTimerEP6CParty>
 860abc4:	8b 45 10             	mov    0x10(%ebp),%eax
 860abc7:	89 44 24 04          	mov    %eax,0x4(%esp)
 860abcb:	8b 45 08             	mov    0x8(%ebp),%eax
 860abce:	89 04 24             	mov    %eax,(%esp)
 860abd1:	e8 94 00 00 00       	call   860ac6a <_ZN26CSpecialItemRoutingManager14processRoutingEP6CParty>
 860abd6:	b8 01 00 00 00       	mov    $0x1,%eax
 860abdb:	c9                   	leave
 860abdc:	c3                   	ret
 860abdd:	90                   	nop

```

```c
// CSpecialItemRoutingManager::ArriveMemberSelection @ 0x860ab2e

/* CSpecialItemRoutingManager::ArriveMemberSelection(CUser*, CParty*, char) */

undefined4 __thiscall
CSpecialItemRoutingManager::ArriveMemberSelection
          (CSpecialItemRoutingManager *this,CUser *param_1,CParty *param_2,char param_3)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = CParty::GetMemberRoutingState(param_2,param_1);
  if (cVar1 == '\0') {
    if (param_3 == '\0') {
      CParty::SetMemberRoutingState(param_2,param_1,'\x01');
    }
    else if (param_3 == '\x01') {
      CParty::SetMemberRoutingState(param_2,param_1,'\x02');
    }
    cVar1 = CParty::HasAllMemberSelection(param_2);
    if (cVar1 != '\0') {
      cancelTimer(this,param_2);
      processRouting(this,param_2);
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

## CSpecialItemRoutingManager

```asm
// === 0860a9c8 CSpecialItemRoutingManager::CSpecialItemRoutingManager  [0x0860a9c8-0x860a9cd] ===
 860a9c8:	55                   	push   %ebp
 860a9c9:	89 e5                	mov    %esp,%ebp
 860a9cb:	5d                   	pop    %ebp
 860a9cc:	c3                   	ret
 860a9cd:	90                   	nop

```

```c
// CSpecialItemRoutingManager::CSpecialItemRoutingManager @ 0x860a9c8

/* CSpecialItemRoutingManager::CSpecialItemRoutingManager() */

void __thiscall
CSpecialItemRoutingManager::CSpecialItemRoutingManager(CSpecialItemRoutingManager *this)

{
  return;
}

```

---

## ProcessFailEtc

```asm
// === 0860b332 CSpecialItemRoutingManager::ProcessFailEtc  [0x0860b332-0x860b45b] ===
 860b332:	55                   	push   %ebp
 860b333:	89 e5                	mov    %esp,%ebp
 860b335:	56                   	push   %esi
 860b336:	53                   	push   %ebx
 860b337:	83 ec 20             	sub    $0x20,%esp
 860b33a:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 860b33e:	0f 84 10 01 00 00    	je     860b454 <_ZN26CSpecialItemRoutingManager14ProcessFailEtcEP6CPartyi+0x122>
 860b344:	8b 45 0c             	mov    0xc(%ebp),%eax
 860b347:	89 04 24             	mov    %eax,(%esp)
 860b34a:	e8 f1 a4 b3 ff       	call   8145840 <_ZN6CParty14IsRoutingStateEv>
 860b34f:	84 c0                	test   %al,%al
 860b351:	74 25                	je     860b378 <_ZN26CSpecialItemRoutingManager14ProcessFailEtcEP6CPartyi+0x46>
 860b353:	8b 45 0c             	mov    0xc(%ebp),%eax
 860b356:	89 04 24             	mov    %eax,(%esp)
 860b359:	e8 16 f2 fa ff       	call   85ba574 <_ZN6CParty24GetFirstValidMemberStateEv>
 860b35e:	3c 05                	cmp    $0x5,%al
 860b360:	74 0f                	je     860b371 <_ZN26CSpecialItemRoutingManager14ProcessFailEtcEP6CPartyi+0x3f>
 860b362:	8b 45 0c             	mov    0xc(%ebp),%eax
 860b365:	89 04 24             	mov    %eax,(%esp)
 860b368:	e8 07 f2 fa ff       	call   85ba574 <_ZN6CParty24GetFirstValidMemberStateEv>
 860b36d:	3c 0c                	cmp    $0xc,%al
 860b36f:	75 07                	jne    860b378 <_ZN26CSpecialItemRoutingManager14ProcessFailEtcEP6CPartyi+0x46>
 860b371:	b8 01 00 00 00       	mov    $0x1,%eax
 860b376:	eb 05                	jmp    860b37d <_ZN26CSpecialItemRoutingManager14ProcessFailEtcEP6CPartyi+0x4b>
 860b378:	b8 00 00 00 00       	mov    $0x0,%eax
 860b37d:	84 c0                	test   %al,%al
 860b37f:	0f 84 d0 00 00 00    	je     860b455 <_ZN26CSpecialItemRoutingManager14ProcessFailEtcEP6CPartyi+0x123>
 860b385:	8d 45 ec             	lea    -0x14(%ebp),%eax
 860b388:	89 04 24             	mov    %eax,(%esp)
 860b38b:	e8 bc 29 f8 ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 860b390:	c7 44 24 08 1a 01 00 	movl   $0x11a,0x8(%esp)
 860b397:	00 
 860b398:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 860b39f:	00 
 860b3a0:	8d 45 ec             	lea    -0x14(%ebp),%eax
 860b3a3:	89 04 24             	mov    %eax,(%esp)
 860b3a6:	e8 51 05 ac ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 860b3ab:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 860b3b2:	00 
 860b3b3:	8d 45 ec             	lea    -0x14(%ebp),%eax
 860b3b6:	89 04 24             	mov    %eax,(%esp)
 860b3b9:	e8 62 05 ac ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 860b3be:	8b 45 10             	mov    0x10(%ebp),%eax
 860b3c1:	89 44 24 04          	mov    %eax,0x4(%esp)
 860b3c5:	8d 45 ec             	lea    -0x14(%ebp),%eax
 860b3c8:	89 04 24             	mov    %eax,(%esp)
 860b3cb:	e8 50 05 ac ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 860b3d0:	8b 45 0c             	mov    0xc(%ebp),%eax
 860b3d3:	89 04 24             	mov    %eax,(%esp)
 860b3d6:	e8 3b 02 00 00       	call   860b616 <_ZN6CParty22GetRoutingItemUniqueIDEv>
 860b3db:	89 44 24 04          	mov    %eax,0x4(%esp)
 860b3df:	8d 45 ec             	lea    -0x14(%ebp),%eax
 860b3e2:	89 04 24             	mov    %eax,(%esp)
 860b3e5:	e8 52 05 ac ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 860b3ea:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 860b3f1:	00 
 860b3f2:	8d 45 ec             	lea    -0x14(%ebp),%eax
 860b3f5:	89 04 24             	mov    %eax,(%esp)
 860b3f8:	e8 5b 05 ac ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 860b3fd:	8d 45 ec             	lea    -0x14(%ebp),%eax
 860b400:	89 44 24 04          	mov    %eax,0x4(%esp)
 860b404:	8b 45 0c             	mov    0xc(%ebp),%eax
 860b407:	89 04 24             	mov    %eax,(%esp)
 860b40a:	e8 3f 1d f9 ff       	call   859d14e <_ZN6CParty13send_to_partyER11PacketGuard>
 860b40f:	8b 45 0c             	mov    0xc(%ebp),%eax
 860b412:	89 44 24 04          	mov    %eax,0x4(%esp)
 860b416:	8b 45 08             	mov    0x8(%ebp),%eax
 860b419:	89 04 24             	mov    %eax,(%esp)
 860b41c:	e8 a1 00 00 00       	call   860b4c2 <_ZN26CSpecialItemRoutingManager11cancelTimerEP6CParty>
 860b421:	8b 45 0c             	mov    0xc(%ebp),%eax
 860b424:	89 04 24             	mov    %eax,(%esp)
 860b427:	e8 fe 43 fb ff       	call   85bf82a <_ZN6CParty13SetEndRoutingEv>
 860b42c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 860b42f:	89 04 24             	mov    %eax,(%esp)
 860b432:	e8 49 2a f8 ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 860b437:	eb 1c                	jmp    860b455 <_ZN26CSpecialItemRoutingManager14ProcessFailEtcEP6CPartyi+0x123>
 860b439:	89 d3                	mov    %edx,%ebx
 860b43b:	89 c6                	mov    %eax,%esi
 860b43d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 860b440:	89 04 24             	mov    %eax,(%esp)
 860b443:	e8 38 2a f8 ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 860b448:	89 f0                	mov    %esi,%eax
 860b44a:	89 da                	mov    %ebx,%edx
 860b44c:	89 04 24             	mov    %eax,(%esp)
 860b44f:	e8 fc 82 4d 00       	call   8ae3750 <_Unwind_Resume>
 860b454:	90                   	nop
 860b455:	83 c4 20             	add    $0x20,%esp
 860b458:	5b                   	pop    %ebx
 860b459:	5e                   	pop    %esi
 860b45a:	5d                   	pop    %ebp
 860b45b:	c3                   	ret

```

```c
// CSpecialItemRoutingManager::ProcessFailEtc @ 0x860b332

/* CSpecialItemRoutingManager::ProcessFailEtc(CParty*, int) */

void __thiscall
CSpecialItemRoutingManager::ProcessFailEtc
          (CSpecialItemRoutingManager *this,CParty *param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  PacketGuard local_18 [12];
  
  if (param_1 != (CParty *)0x0) {
    cVar2 = CParty::IsRoutingState(param_1);
    if ((cVar2 == '\0') ||
       ((cVar2 = CParty::GetFirstValidMemberState(param_1), cVar2 != '\x05' &&
        (cVar2 = CParty::GetFirstValidMemberState(param_1), cVar2 != '\f')))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      PacketGuard::PacketGuard(local_18);
                    /* try { // try from 0860b3a6 to 0860b420 has its CatchHandler @ 0860b439 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x11a);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,param_2);
      iVar3 = CParty::GetRoutingItemUniqueID(param_1);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,iVar3);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
      CParty::send_to_party(param_1,local_18);
      cancelTimer(this,param_1);
      CParty::SetEndRouting(param_1);
      PacketGuard::~PacketGuard(local_18);
    }
    return;
  }
  return;
}

```

---

## ProcessGiveUp

```asm
// === 0860b2c2 CSpecialItemRoutingManager::ProcessGiveUp  [0x0860b2c2-0x860b331] ===
 860b2c2:	55                   	push   %ebp
 860b2c3:	89 e5                	mov    %esp,%ebp
 860b2c5:	83 ec 18             	sub    $0x18,%esp
 860b2c8:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 860b2cc:	74 60                	je     860b32e <_ZN26CSpecialItemRoutingManager13ProcessGiveUpEP6CParty+0x6c>
 860b2ce:	8b 45 0c             	mov    0xc(%ebp),%eax
 860b2d1:	89 04 24             	mov    %eax,(%esp)
 860b2d4:	e8 67 a5 b3 ff       	call   8145840 <_ZN6CParty14IsRoutingStateEv>
 860b2d9:	84 c0                	test   %al,%al
 860b2db:	74 34                	je     860b311 <_ZN26CSpecialItemRoutingManager13ProcessGiveUpEP6CParty+0x4f>
 860b2dd:	8b 45 0c             	mov    0xc(%ebp),%eax
 860b2e0:	89 04 24             	mov    %eax,(%esp)
 860b2e3:	e8 d8 ee fa ff       	call   85ba1c0 <_ZN6CParty21HasAllMemberSelectionEv>
 860b2e8:	84 c0                	test   %al,%al
 860b2ea:	74 25                	je     860b311 <_ZN26CSpecialItemRoutingManager13ProcessGiveUpEP6CParty+0x4f>
 860b2ec:	8b 45 0c             	mov    0xc(%ebp),%eax
 860b2ef:	89 04 24             	mov    %eax,(%esp)
 860b2f2:	e8 7d f2 fa ff       	call   85ba574 <_ZN6CParty24GetFirstValidMemberStateEv>
 860b2f7:	3c 05                	cmp    $0x5,%al
 860b2f9:	74 0f                	je     860b30a <_ZN26CSpecialItemRoutingManager13ProcessGiveUpEP6CParty+0x48>
 860b2fb:	8b 45 0c             	mov    0xc(%ebp),%eax
 860b2fe:	89 04 24             	mov    %eax,(%esp)
 860b301:	e8 6e f2 fa ff       	call   85ba574 <_ZN6CParty24GetFirstValidMemberStateEv>
 860b306:	3c 0c                	cmp    $0xc,%al
 860b308:	75 07                	jne    860b311 <_ZN26CSpecialItemRoutingManager13ProcessGiveUpEP6CParty+0x4f>
 860b30a:	b8 01 00 00 00       	mov    $0x1,%eax
 860b30f:	eb 05                	jmp    860b316 <_ZN26CSpecialItemRoutingManager13ProcessGiveUpEP6CParty+0x54>
 860b311:	b8 00 00 00 00       	mov    $0x0,%eax
 860b316:	84 c0                	test   %al,%al
 860b318:	74 15                	je     860b32f <_ZN26CSpecialItemRoutingManager13ProcessGiveUpEP6CParty+0x6d>
 860b31a:	8b 45 0c             	mov    0xc(%ebp),%eax
 860b31d:	89 44 24 04          	mov    %eax,0x4(%esp)
 860b321:	8b 45 08             	mov    0x8(%ebp),%eax
 860b324:	89 04 24             	mov    %eax,(%esp)
 860b327:	e8 3e f9 ff ff       	call   860ac6a <_ZN26CSpecialItemRoutingManager14processRoutingEP6CParty>
 860b32c:	eb 01                	jmp    860b32f <_ZN26CSpecialItemRoutingManager13ProcessGiveUpEP6CParty+0x6d>
 860b32e:	90                   	nop
 860b32f:	c9                   	leave
 860b330:	c3                   	ret
 860b331:	90                   	nop

```

```c
// CSpecialItemRoutingManager::ProcessGiveUp @ 0x860b2c2

/* CSpecialItemRoutingManager::ProcessGiveUp(CParty*) */

void __thiscall
CSpecialItemRoutingManager::ProcessGiveUp(CSpecialItemRoutingManager *this,CParty *param_1)

{
  bool bVar1;
  char cVar2;
  
  if (param_1 != (CParty *)0x0) {
    cVar2 = CParty::IsRoutingState(param_1);
    if (((cVar2 == '\0') || (cVar2 = CParty::HasAllMemberSelection(param_1), cVar2 == '\0')) ||
       ((cVar2 = CParty::GetFirstValidMemberState(param_1), cVar2 != '\x05' &&
        (cVar2 = CParty::GetFirstValidMemberState(param_1), cVar2 != '\f')))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      processRouting(this,param_1);
    }
    return;
  }
  return;
}

```

---

## ProcessTimeOut

```asm
// === 0860abde CSpecialItemRoutingManager::ProcessTimeOut  [0x0860abde-0x860ac69] ===
 860abde:	55                   	push   %ebp
 860abdf:	89 e5                	mov    %esp,%ebp
 860abe1:	83 ec 18             	sub    $0x18,%esp
 860abe4:	8b 45 0c             	mov    0xc(%ebp),%eax
 860abe7:	89 04 24             	mov    %eax,(%esp)
 860abea:	e8 51 ac b3 ff       	call   8145840 <_ZN6CParty14IsRoutingStateEv>
 860abef:	83 f0 01             	xor    $0x1,%eax
 860abf2:	84 c0                	test   %al,%al
 860abf4:	74 12                	je     860ac08 <_ZN26CSpecialItemRoutingManager14ProcessTimeOutEP6CParty+0x2a>
 860abf6:	8b 45 0c             	mov    0xc(%ebp),%eax
 860abf9:	89 04 24             	mov    %eax,(%esp)
 860abfc:	e8 29 4c fb ff       	call   85bf82a <_ZN6CParty13SetEndRoutingEv>
 860ac01:	b8 01 00 00 00       	mov    $0x1,%eax
 860ac06:	eb 5f                	jmp    860ac67 <_ZN26CSpecialItemRoutingManager14ProcessTimeOutEP6CParty+0x89>
 860ac08:	8b 45 0c             	mov    0xc(%ebp),%eax
 860ac0b:	89 04 24             	mov    %eax,(%esp)
 860ac0e:	e8 61 f9 fa ff       	call   85ba574 <_ZN6CParty24GetFirstValidMemberStateEv>
 860ac13:	0f be c0             	movsbl %al,%eax
 860ac16:	83 f8 05             	cmp    $0x5,%eax
 860ac19:	74 17                	je     860ac32 <_ZN26CSpecialItemRoutingManager14ProcessTimeOutEP6CParty+0x54>
 860ac1b:	83 f8 0c             	cmp    $0xc,%eax
 860ac1e:	74 15                	je     860ac35 <_ZN26CSpecialItemRoutingManager14ProcessTimeOutEP6CParty+0x57>
 860ac20:	8b 45 0c             	mov    0xc(%ebp),%eax
 860ac23:	89 04 24             	mov    %eax,(%esp)
 860ac26:	e8 ff 4b fb ff       	call   85bf82a <_ZN6CParty13SetEndRoutingEv>
 860ac2b:	b8 01 00 00 00       	mov    $0x1,%eax
 860ac30:	eb 35                	jmp    860ac67 <_ZN26CSpecialItemRoutingManager14ProcessTimeOutEP6CParty+0x89>
 860ac32:	90                   	nop
 860ac33:	eb 01                	jmp    860ac36 <_ZN26CSpecialItemRoutingManager14ProcessTimeOutEP6CParty+0x58>
 860ac35:	90                   	nop
 860ac36:	8b 45 0c             	mov    0xc(%ebp),%eax
 860ac39:	89 04 24             	mov    %eax,(%esp)
 860ac3c:	e8 e1 f5 fa ff       	call   85ba222 <_ZN6CParty19SetRoutingTimerOverEv>
 860ac41:	8b 45 0c             	mov    0xc(%ebp),%eax
 860ac44:	89 04 24             	mov    %eax,(%esp)
 860ac47:	e8 74 f5 fa ff       	call   85ba1c0 <_ZN6CParty21HasAllMemberSelectionEv>
 860ac4c:	84 c0                	test   %al,%al
 860ac4e:	74 12                	je     860ac62 <_ZN26CSpecialItemRoutingManager14ProcessTimeOutEP6CParty+0x84>
 860ac50:	8b 45 0c             	mov    0xc(%ebp),%eax
 860ac53:	89 44 24 04          	mov    %eax,0x4(%esp)
 860ac57:	8b 45 08             	mov    0x8(%ebp),%eax
 860ac5a:	89 04 24             	mov    %eax,(%esp)
 860ac5d:	e8 08 00 00 00       	call   860ac6a <_ZN26CSpecialItemRoutingManager14processRoutingEP6CParty>
 860ac62:	b8 01 00 00 00       	mov    $0x1,%eax
 860ac67:	c9                   	leave
 860ac68:	c3                   	ret
 860ac69:	90                   	nop

```

```c
// CSpecialItemRoutingManager::ProcessTimeOut @ 0x860abde

/* CSpecialItemRoutingManager::ProcessTimeOut(CParty*) */

undefined4 __thiscall
CSpecialItemRoutingManager::ProcessTimeOut(CSpecialItemRoutingManager *this,CParty *param_1)

{
  char cVar1;
  
  cVar1 = CParty::IsRoutingState(param_1);
  if (cVar1 == '\x01') {
    cVar1 = CParty::GetFirstValidMemberState(param_1);
    if ((cVar1 == '\x05') || (cVar1 == '\f')) {
      CParty::SetRoutingTimerOver(param_1);
      cVar1 = CParty::HasAllMemberSelection(param_1);
      if (cVar1 != '\0') {
        processRouting(this,param_1);
      }
    }
    else {
      CParty::SetEndRouting(param_1);
    }
  }
  else {
    CParty::SetEndRouting(param_1);
  }
  return 1;
}

```

---

## StartRouting

```asm
// === 0860a9d4 CSpecialItemRoutingManager::StartRouting  [0x0860a9d4-0x860ab2d] ===
 860a9d4:	55                   	push   %ebp
 860a9d5:	89 e5                	mov    %esp,%ebp
 860a9d7:	56                   	push   %esi
 860a9d8:	53                   	push   %ebx
 860a9d9:	83 ec 30             	sub    $0x30,%esp
 860a9dc:	8b 45 0c             	mov    0xc(%ebp),%eax
 860a9df:	89 04 24             	mov    %eax,(%esp)
 860a9e2:	e8 a5 f9 ac ff       	call   80da38c <_ZN5CUser9get_stateEv>
 860a9e7:	83 f8 05             	cmp    $0x5,%eax
 860a9ea:	74 0f                	je     860a9fb <_ZN26CSpecialItemRoutingManager12StartRoutingEP5CUserR10Inven_Itemj+0x27>
 860a9ec:	83 f8 0c             	cmp    $0xc,%eax
 860a9ef:	74 0d                	je     860a9fe <_ZN26CSpecialItemRoutingManager12StartRoutingEP5CUserR10Inven_Itemj+0x2a>
 860a9f1:	bb 01 00 00 00       	mov    $0x1,%ebx
 860a9f6:	e9 2a 01 00 00       	jmp    860ab25 <_ZN26CSpecialItemRoutingManager12StartRoutingEP5CUserR10Inven_Itemj+0x151>
 860a9fb:	90                   	nop
 860a9fc:	eb 01                	jmp    860a9ff <_ZN26CSpecialItemRoutingManager12StartRoutingEP5CUserR10Inven_Itemj+0x2b>
 860a9fe:	90                   	nop
 860a9ff:	8b 45 0c             	mov    0xc(%ebp),%eax
 860aa02:	89 04 24             	mov    %eax,(%esp)
 860aa05:	e8 42 a7 04 00       	call   865514c <_ZN5CUser8GetPartyEv>
 860aa0a:	89 45 f0             	mov    %eax,-0x10(%ebp)
 860aa0d:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 860aa11:	75 0a                	jne    860aa1d <_ZN26CSpecialItemRoutingManager12StartRoutingEP5CUserR10Inven_Itemj+0x49>
 860aa13:	bb 01 00 00 00       	mov    $0x1,%ebx
 860aa18:	e9 08 01 00 00       	jmp    860ab25 <_ZN26CSpecialItemRoutingManager12StartRoutingEP5CUserR10Inven_Itemj+0x151>
 860aa1d:	8b 45 10             	mov    0x10(%ebp),%eax
 860aa20:	8b 40 02             	mov    0x2(%eax),%eax
 860aa23:	89 c3                	mov    %eax,%ebx
 860aa25:	e8 71 17 ac ff       	call   80cc19b <_Z14G_CDataManagerv>
 860aa2a:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 860aa2e:	89 04 24             	mov    %eax,(%esp)
 860aa31:	e8 fc 4f d5 ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 860aa36:	89 45 f4             	mov    %eax,-0xc(%ebp)
 860aa39:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 860aa3d:	75 0a                	jne    860aa49 <_ZN26CSpecialItemRoutingManager12StartRoutingEP5CUserR10Inven_Itemj+0x75>
 860aa3f:	bb 01 00 00 00       	mov    $0x1,%ebx
 860aa44:	e9 dc 00 00 00       	jmp    860ab25 <_ZN26CSpecialItemRoutingManager12StartRoutingEP5CUserR10Inven_Itemj+0x151>
 860aa49:	8b 45 f0             	mov    -0x10(%ebp),%eax
 860aa4c:	89 04 24             	mov    %eax,(%esp)
 860aa4f:	e8 ec ad b3 ff       	call   8145840 <_ZN6CParty14IsRoutingStateEv>
 860aa54:	84 c0                	test   %al,%al
 860aa56:	74 0a                	je     860aa62 <_ZN26CSpecialItemRoutingManager12StartRoutingEP5CUserR10Inven_Itemj+0x8e>
 860aa58:	bb 12 00 00 00       	mov    $0x12,%ebx
 860aa5d:	e9 c3 00 00 00       	jmp    860ab25 <_ZN26CSpecialItemRoutingManager12StartRoutingEP5CUserR10Inven_Itemj+0x151>
 860aa62:	8b 45 f0             	mov    -0x10(%ebp),%eax
 860aa65:	89 04 24             	mov    %eax,(%esp)
 860aa68:	e8 2f 0b 00 00       	call   860b59c <_ZN6CParty15SetStartRoutingEv>
 860aa6d:	8b 45 14             	mov    0x14(%ebp),%eax
 860aa70:	89 44 24 08          	mov    %eax,0x8(%esp)
 860aa74:	8b 45 10             	mov    0x10(%ebp),%eax
 860aa77:	89 44 24 04          	mov    %eax,0x4(%esp)
 860aa7b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 860aa7e:	89 04 24             	mov    %eax,(%esp)
 860aa81:	e8 46 0b 00 00       	call   860b5cc <_ZN6CParty14SetRoutingItemER10Inven_Itemj>
 860aa86:	8b 45 f0             	mov    -0x10(%ebp),%eax
 860aa89:	89 44 24 04          	mov    %eax,0x4(%esp)
 860aa8d:	8b 45 08             	mov    0x8(%ebp),%eax
 860aa90:	89 04 24             	mov    %eax,(%esp)
 860aa93:	e8 c4 09 00 00       	call   860b45c <_ZN26CSpecialItemRoutingManager11insertTimerEP6CParty>
 860aa98:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 860aa9b:	89 04 24             	mov    %eax,(%esp)
 860aa9e:	e8 a9 32 f8 ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 860aaa3:	c7 44 24 08 19 01 00 	movl   $0x119,0x8(%esp)
 860aaaa:	00 
 860aaab:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 860aab2:	00 
 860aab3:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 860aab6:	89 04 24             	mov    %eax,(%esp)
 860aab9:	e8 3e 0e ac ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 860aabe:	8b 45 10             	mov    0x10(%ebp),%eax
 860aac1:	8b 40 02             	mov    0x2(%eax),%eax
 860aac4:	89 44 24 04          	mov    %eax,0x4(%esp)
 860aac8:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 860aacb:	89 04 24             	mov    %eax,(%esp)
 860aace:	e8 69 0e ac ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 860aad3:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 860aada:	00 
 860aadb:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 860aade:	89 04 24             	mov    %eax,(%esp)
 860aae1:	e8 72 0e ac ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 860aae6:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 860aae9:	89 44 24 04          	mov    %eax,0x4(%esp)
 860aaed:	8b 45 f0             	mov    -0x10(%ebp),%eax
 860aaf0:	89 04 24             	mov    %eax,(%esp)
 860aaf3:	e8 56 26 f9 ff       	call   859d14e <_ZN6CParty13send_to_partyER11PacketGuard>
 860aaf8:	bb 00 00 00 00       	mov    $0x0,%ebx
 860aafd:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 860ab00:	89 04 24             	mov    %eax,(%esp)
 860ab03:	e8 78 33 f8 ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 860ab08:	eb 1b                	jmp    860ab25 <_ZN26CSpecialItemRoutingManager12StartRoutingEP5CUserR10Inven_Itemj+0x151>
 860ab0a:	89 d3                	mov    %edx,%ebx
 860ab0c:	89 c6                	mov    %eax,%esi
 860ab0e:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 860ab11:	89 04 24             	mov    %eax,(%esp)
 860ab14:	e8 67 33 f8 ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 860ab19:	89 f0                	mov    %esi,%eax
 860ab1b:	89 da                	mov    %ebx,%edx
 860ab1d:	89 04 24             	mov    %eax,(%esp)
 860ab20:	e8 2b 8c 4d 00       	call   8ae3750 <_Unwind_Resume>
 860ab25:	89 d8                	mov    %ebx,%eax
 860ab27:	83 c4 30             	add    $0x30,%esp
 860ab2a:	5b                   	pop    %ebx
 860ab2b:	5e                   	pop    %esi
 860ab2c:	5d                   	pop    %ebp
 860ab2d:	c3                   	ret

```

```c
// CSpecialItemRoutingManager::StartRouting @ 0x860a9d4

/* CSpecialItemRoutingManager::StartRouting(CUser*, Inven_Item&, unsigned int) */

undefined4 __thiscall
CSpecialItemRoutingManager::StartRouting
          (CSpecialItemRoutingManager *this,CUser *param_1,Inven_Item *param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  CDataManager *this_00;
  undefined4 uVar3;
  PacketGuard local_20 [12];
  CParty *local_14;
  int local_10;
  
  iVar2 = CUser::get_state(param_1);
  if ((iVar2 == 5) || (iVar2 == 0xc)) {
    local_14 = (CParty *)CUser::GetParty(param_1);
    if (local_14 == (CParty *)0x0) {
      uVar3 = 1;
    }
    else {
      iVar2 = *(int *)(param_2 + 2);
      this_00 = (CDataManager *)G_CDataManager();
      local_10 = CDataManager::find_item(this_00,iVar2);
      if (local_10 == 0) {
        uVar3 = 1;
      }
      else {
        cVar1 = CParty::IsRoutingState(local_14);
        if (cVar1 == '\0') {
          CParty::SetStartRouting(local_14);
          CParty::SetRoutingItem(local_14,param_2,param_3);
          insertTimer(this,local_14);
          PacketGuard::PacketGuard(local_20);
                    /* try { // try from 0860aab9 to 0860aaf7 has its CatchHandler @ 0860ab0a */
          InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0x119);
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,*(int *)(param_2 + 2));
          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
          CParty::send_to_party(local_14,local_20);
          uVar3 = 0;
          PacketGuard::~PacketGuard(local_20);
        }
        else {
          uVar3 = 0x12;
        }
      }
    }
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}

```

---

## cancelTimer

```asm
// === 0860b4c2 CSpecialItemRoutingManager::cancelTimer  [0x0860b4c2-0x860b4dc] ===
 860b4c2:	55                   	push   %ebp
 860b4c3:	89 e5                	mov    %esp,%ebp
 860b4c5:	83 ec 18             	sub    $0x18,%esp
 860b4c8:	c7 44 24 04 2b 00 00 	movl   $0x2b,0x4(%esp)
 860b4cf:	00 
 860b4d0:	8b 45 0c             	mov    0xc(%ebp),%eax
 860b4d3:	89 04 24             	mov    %eax,(%esp)
 860b4d6:	e8 9b f9 f8 ff       	call   859ae76 <_ZN6CParty13gen_timer_keyE13TIMER_MESSAGE>
 860b4db:	c9                   	leave
 860b4dc:	c3                   	ret

```

```c
// CSpecialItemRoutingManager::cancelTimer @ 0x860b4c2

/* CSpecialItemRoutingManager::cancelTimer(CParty*) */

void __thiscall
CSpecialItemRoutingManager::cancelTimer(CSpecialItemRoutingManager *this,CParty *param_1)

{
  CParty::gen_timer_key(param_1,0x2b);
  return;
}

```

---

## insertTimer

```asm
// === 0860b45c CSpecialItemRoutingManager::insertTimer  [0x0860b45c-0x860b4c1] ===
 860b45c:	55                   	push   %ebp
 860b45d:	89 e5                	mov    %esp,%ebp
 860b45f:	56                   	push   %esi
 860b460:	53                   	push   %ebx
 860b461:	83 ec 20             	sub    $0x20,%esp
 860b464:	c7 44 24 04 2b 00 00 	movl   $0x2b,0x4(%esp)
 860b46b:	00 
 860b46c:	8b 45 0c             	mov    0xc(%ebp),%eax
 860b46f:	89 04 24             	mov    %eax,(%esp)
 860b472:	e8 ff f9 f8 ff       	call   859ae76 <_ZN6CParty13gen_timer_keyE13TIMER_MESSAGE>
 860b477:	89 c6                	mov    %eax,%esi
 860b479:	8b 45 0c             	mov    0xc(%ebp),%eax
 860b47c:	89 04 24             	mov    %eax,(%esp)
 860b47f:	e8 c2 23 c2 ff       	call   822d846 <_ZN6CParty13GetPartyIndexEv>
 860b484:	89 c3                	mov    %eax,%ebx
 860b486:	e8 f1 af ae ff       	call   80f647c <_Z12G_TimerQueuev>
 860b48b:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 860b492:	00 
 860b493:	89 74 24 14          	mov    %esi,0x14(%esp)
 860b497:	c7 44 24 10 23 00 00 	movl   $0x23,0x10(%esp)
 860b49e:	00 
 860b49f:	c7 44 24 0c 2b 00 00 	movl   $0x2b,0xc(%esp)
 860b4a6:	00 
 860b4a7:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 860b4ab:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 860b4b2:	00 
 860b4b3:	89 04 24             	mov    %eax,(%esp)
 860b4b6:	e8 5b 59 02 00       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 860b4bb:	83 c4 20             	add    $0x20,%esp
 860b4be:	5b                   	pop    %ebx
 860b4bf:	5e                   	pop    %esi
 860b4c0:	5d                   	pop    %ebp
 860b4c1:	c3                   	ret

```

```c
// CSpecialItemRoutingManager::insertTimer @ 0x860b45c

/* CSpecialItemRoutingManager::insertTimer(CParty*) */

void __thiscall
CSpecialItemRoutingManager::insertTimer(CSpecialItemRoutingManager *this,CParty *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  TimerQueue *pTVar3;
  
  uVar1 = CParty::gen_timer_key(param_1,0x2b);
  uVar2 = CParty::GetPartyIndex(param_1);
  pTVar3 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar3,1,uVar2,0x2b,0x23,uVar1,0);
  return;
}

```

---

## processRouting

```asm
// === 0860ac6a CSpecialItemRoutingManager::processRouting  [0x0860ac6a-0x860b2c1] ===
 860ac6a:	55                   	push   %ebp
 860ac6b:	89 e5                	mov    %esp,%ebp
 860ac6d:	56                   	push   %esi
 860ac6e:	53                   	push   %ebx
 860ac6f:	81 ec d0 00 00 00    	sub    $0xd0,%esp
 860ac75:	8b 45 0c             	mov    0xc(%ebp),%eax
 860ac78:	89 04 24             	mov    %eax,(%esp)
 860ac7b:	e8 82 09 00 00       	call   860b602 <_ZN6CParty19GetRoutingInvenItemEv>
 860ac80:	89 45 c8             	mov    %eax,-0x38(%ebp)
 860ac83:	8b 45 c8             	mov    -0x38(%ebp),%eax
 860ac86:	8b 40 02             	mov    0x2(%eax),%eax
 860ac89:	85 c0                	test   %eax,%eax
 860ac8b:	75 1f                	jne    860acac <_ZN26CSpecialItemRoutingManager14processRoutingEP6CParty+0x42>
 860ac8d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 860ac94:	00 
 860ac95:	8b 45 0c             	mov    0xc(%ebp),%eax
 860ac98:	89 44 24 04          	mov    %eax,0x4(%esp)
 860ac9c:	8b 45 08             	mov    0x8(%ebp),%eax
 860ac9f:	89 04 24             	mov    %eax,(%esp)
 860aca2:	e8 8b 06 00 00       	call   860b332 <_ZN26CSpecialItemRoutingManager14ProcessFailEtcEP6CPartyi>
 860aca7:	e9 0b 06 00 00       	jmp    860b2b7 <_ZN26CSpecialItemRoutingManager14processRoutingEP6CParty+0x64d>
 860acac:	8b 45 0c             	mov    0xc(%ebp),%eax
 860acaf:	89 04 24             	mov    %eax,(%esp)
 860acb2:	e8 37 09 00 00       	call   860b5ee <_ZN6CParty16GetRoutingItemIDEv>
 860acb7:	89 45 cc             	mov    %eax,-0x34(%ebp)
 860acba:	8b 5d cc             	mov    -0x34(%ebp),%ebx
 860acbd:	e8 d9 14 ac ff       	call   80cc19b <_Z14G_CDataManagerv>
 860acc2:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 860acc6:	89 04 24             	mov    %eax,(%esp)
 860acc9:	e8 64 4d d5 ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 860acce:	89 45 d0             	mov    %eax,-0x30(%ebp)
 860acd1:	83 7d d0 00          	cmpl   $0x0,-0x30(%ebp)
 860acd5:	75 1f                	jne    860acf6 <_ZN26CSpecialItemRoutingManager14processRoutingEP6CParty+0x8c>
 860acd7:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 860acde:	00 
 860acdf:	8b 45 0c             	mov    0xc(%ebp),%eax
 860ace2:	89 44 24 04          	mov    %eax,0x4(%esp)
 860ace6:	8b 45 08             	mov    0x8(%ebp),%eax
 860ace9:	89 04 24             	mov    %eax,(%esp)
 860acec:	e8 41 06 00 00       	call   860b332 <_ZN26CSpecialItemRoutingManager14ProcessFailEtcEP6CPartyi>
 860acf1:	e9 c1 05 00 00       	jmp    860b2b7 <_ZN26CSpecialItemRoutingManager14processRoutingEP6CParty+0x64d>
 860acf6:	8b 45 d0             	mov    -0x30(%ebp),%eax
 860acf9:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 860acfc:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 860acff:	89 04 24             	mov    %eax,(%esp)
 860ad02:	e8 cf 9c b2 ff       	call   81349d6 <_ZNSt6vectorISt4pairIiiESaIS1_EEC1Ev>
 860ad07:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 860ad0a:	89 04 24             	mov    %eax,(%esp)
 860ad0d:	e8 30 f6 b6 ff       	call   817a342 <_ZNSt6vectorISt4pairIiiESaIS1_EE5clearEv>
 860ad12:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 860ad15:	89 44 24 08          	mov    %eax,0x8(%esp)
 860ad19:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 860ad1c:	89 44 24 04          	mov    %eax,0x4(%esp)
 860ad20:	8b 45 0c             	mov    0xc(%ebp),%eax
 860ad23:	89 04 24             	mov    %eax,(%esp)
 860ad26:	e8 69 f5 fa ff       	call   85ba294 <_ZN6CParty24GetRoutingDiceMemberListERSt6vectorISt4pairIiiESaIS2_EEP5CItem>
 860ad2b:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 860ad32:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 860ad39:	8d 45 a8             	lea    -0x58(%ebp),%eax
 860ad3c:	89 04 24             	mov    %eax,(%esp)
 860ad3f:	e8 08 30 f8 ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 860ad44:	c7 44 24 08 1a 01 00 	movl   $0x11a,0x8(%esp)
 860ad4b:	00 
 860ad4c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 860ad53:	00 
 860ad54:	8d 45 a8             	lea    -0x58(%ebp),%eax
 860ad57:	89 04 24             	mov    %eax,(%esp)
 860ad5a:	e8 9d 0b ac ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 860ad5f:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 860ad62:	89 04 24             	mov    %eax,(%esp)
 860ad65:	e8 30 64 b0 ff       	call   811119a <_ZNKSt6vectorISt4pairIiiESaIS1_EE5emptyEv>
 860ad6a:	83 f0 01             	xor    $0x1,%eax
 860ad6d:	84 c0                	test   %al,%al
 860ad6f:	0f 84 0e 01 00 00    	je     860ae83 <_ZN26CSpecialItemRoutingManager14processRoutingEP6CParty+0x219>
 860ad75:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 860ad78:	89 04 24             	mov    %eax,(%esp)
 860ad7b:	e8 94 2a ad ff       	call   80dd814 <_ZNKSt6vectorISt4pairIiiESaIS1_EE4sizeEv>
 860ad80:	83 f8 01             	cmp    $0x1,%eax
 860ad83:	0f 94 c0             	sete   %al
 860ad86:	84 c0                	test   %al,%al
 860ad88:	74 32                	je     860adbc <_ZN26CSpecialItemRoutingManager14processRoutingEP6CParty+0x152>
 860ad8a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 860ad91:	00 
 860ad92:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 860ad95:	89 04 24             	mov    %eax,(%esp)
 860ad98:	e8 07 fb ad ff       	call   80ea8a4 <_ZNSt6vectorISt4pairIiiESaIS1_EEixEj>
 860ad9d:	8b 00                	mov    (%eax),%eax
 860ad9f:	89 45 dc             	mov    %eax,-0x24(%ebp)
 860ada2:	8b 45 dc             	mov    -0x24(%ebp),%eax
 860ada5:	89 44 24 04          	mov    %eax,0x4(%esp)
 860ada9:	8b 45 0c             	mov    0xc(%ebp),%eax
 860adac:	89 04 24             	mov    %eax,(%esp)
 860adaf:	e8 b0 a9 b3 ff       	call   8145764 <_ZN6CParty8get_userEi>
 860adb4:	89 45 d8             	mov    %eax,-0x28(%ebp)
 860adb7:	e9 07 01 00 00       	jmp    860aec3 <_ZN26CSpecialItemRoutingManager14processRoutingEP6CParty+0x259>
 860adbc:	c7 45 e0 ff ff ff ff 	movl   $0xffffffff,-0x20(%ebp)
 860adc3:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 860adc6:	8d 55 b4             	lea    -0x4c(%ebp),%edx
 860adc9:	89 54 24 04          	mov    %edx,0x4(%esp)
 860adcd:	89 04 24             	mov    %eax,(%esp)
 860add0:	e8 dd 27 ad ff       	call   80dd5b2 <_ZNSt6vectorISt4pairIiiESaIS1_EE5beginEv>
 860add5:	83 ec 04             	sub    $0x4,%esp
 860add8:	eb 78                	jmp    860ae52 <_ZN26CSpecialItemRoutingManager14processRoutingEP6CParty+0x1e8>
 860adda:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 860addd:	89 04 24             	mov    %eax,(%esp)
 860ade0:	e8 17 28 ad ff       	call   80dd5fc <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIiiESt6vectorIS2_SaIS2_EEEdeEv>
 860ade5:	8b 50 04             	mov    0x4(%eax),%edx
 860ade8:	8b 00                	mov    (%eax),%eax
 860adea:	89 45 9c             	mov    %eax,-0x64(%ebp)
 860aded:	89 55 a0             	mov    %edx,-0x60(%ebp)
 860adf0:	c7 04 24 64 00 00 00 	movl   $0x64,(%esp)
 860adf7:	e8 8b 6d 0a 00       	call   86b1b87 <_Z12get_rand_inti>
 860adfc:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 860adff:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 860ae02:	3b 45 e0             	cmp    -0x20(%ebp),%eax
 860ae05:	7e 23                	jle    860ae2a <_ZN26CSpecialItemRoutingManager14processRoutingEP6CParty+0x1c0>
 860ae07:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 860ae0a:	89 45 e0             	mov    %eax,-0x20(%ebp)
 860ae0d:	8b 45 9c             	mov    -0x64(%ebp),%eax
 860ae10:	89 45 dc             	mov    %eax,-0x24(%ebp)
 860ae13:	8b 45 dc             	mov    -0x24(%ebp),%eax
 860ae16:	89 44 24 04          	mov    %eax,0x4(%esp)
 860ae1a:	8b 45 0c             	mov    0xc(%ebp),%eax
 860ae1d:	89 04 24             	mov    %eax,(%esp)
 860ae20:	e8 3f a9 b3 ff       	call   8145764 <_ZN6CParty8get_userEi>
 860ae25:	89 45 d8             	mov    %eax,-0x28(%ebp)
 860ae28:	eb 08                	jmp    860ae32 <_ZN26CSpecialItemRoutingManager14processRoutingEP6CParty+0x1c8>
 860ae2a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 860ae2d:	3b 45 e0             	cmp    -0x20(%ebp),%eax
 860ae30:	74 1f                	je     860ae51 <_ZN26CSpecialItemRoutingManager14processRoutingEP6CParty+0x1e7>
 860ae32:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 860ae35:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 860ae3c:	00 
 860ae3d:	8d 55 a4             	lea    -0x5c(%ebp),%edx
 860ae40:	89 54 24 04          	mov    %edx,0x4(%esp)
 860ae44:	89 04 24             	mov    %eax,(%esp)
 860ae47:	e8 50 df d7 ff       	call   8388d9c <_ZN9__gnu_cxx17__normal_iteratorIPSt4pairIiiESt6vectorIS2_SaIS2_EEEppEi>
 860ae4c:	83 ec 04             	sub    $0x4,%esp
 860ae4f:	eb 01                	jmp    860ae52 <_ZN26CSpecialItemRoutingManager14processRoutingEP6CParty+0x1e8>
 860ae51:	90                   	nop
 860ae52:	8d 45 c0             	lea    -0x40(%ebp),%eax
 860ae55:	8d 55 b4             	lea    -0x4c(%ebp),%edx
 860ae58:	89 54 24 04          	mov    %edx,0x4(%esp)
 860ae5c:	89 04 24             	mov    %eax,(%esp)
 860ae5f:	e8 72 27 ad ff       	call   80dd5d6 <_ZNSt6vectorISt4pairIiiESaIS1_EE3endEv>
 860ae64:	83 ec 04             	sub    $0x4,%esp
 860ae67:	8d 45 c0             	lea    -0x40(%ebp),%eax
 860ae6a:	89 44 24 04          	mov    %eax,0x4(%esp)
 860ae6e:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 860ae71:	89 04 24             	mov    %eax,(%esp)
 860ae74:	e8 65 63 b0 ff       	call   81111de <_ZN9__gnu_cxxneIPSt4pairIiiESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 860ae79:	84 c0                	test   %al,%al
 860ae7b:	0f 85 59 ff ff ff    	jne    860adda <_ZN26CSpecialItemRoutingManager14processRoutingEP6CParty+0x170>
 860ae81:	eb 40                	jmp    860aec3 <_ZN26CSpecialItemRoutingManager14processRoutingEP6CParty+0x259>
 860ae83:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 860ae8a:	00 
 860ae8b:	8d 45 a8             	lea    -0x58(%ebp),%eax
 860ae8e:	89 04 24             	mov    %eax,(%esp)
 860ae91:	e8 8a 0a ac ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 860ae96:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 860ae9d:	00 
 860ae9e:	8d 45 a8             	lea    -0x58(%ebp),%eax
 860aea1:	89 04 24             	mov    %eax,(%esp)
 860aea4:	e8 77 0a ac ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 860aea9:	8b 45 0c             	mov    0xc(%ebp),%eax
 860aeac:	89 04 24             	mov    %eax,(%esp)
 860aeaf:	e8 62 07 00 00       	call   860b616 <_ZN6CParty22GetRoutingItemUniqueIDEv>
 860aeb4:	89 44 24 04          	mov    %eax,0x4(%esp)
 860aeb8:	8d 45 a8             	lea    -0x58(%ebp),%eax
 860aebb:	89 04 24             	mov    %eax,(%esp)
 860aebe:	e8 79 0a ac ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 860aec3:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 860aec7:	0f 84 72 03 00 00    	je     860b23f <_ZN26CSpecialItemRoutingManager14processRoutingEP6CParty+0x5d5>
 860aecd:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 860aed4:	8b 45 d0             	mov    -0x30(%ebp),%eax
 860aed7:	89 04 24             	mov    %eax,(%esp)
 860aeda:	e8 1b 64 ae ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 860aedf:	84 c0                	test   %al,%al
 860aee1:	74 25                	je     860af08 <_ZN26CSpecialItemRoutingManager14processRoutingEP6CParty+0x29e>
 860aee3:	8b 45 d0             	mov    -0x30(%ebp),%eax
 860aee6:	8b 00                	mov    (%eax),%eax
 860aee8:	83 c0 0c             	add    $0xc,%eax
 860aeeb:	8b 10                	mov    (%eax),%edx
 860aeed:	8b 45 d0             	mov    -0x30(%ebp),%eax
 860aef0:	89 04 24             	mov    %eax,(%esp)
 860aef3:	ff d2                	call   *%edx
 860aef5:	83 f8 09             	cmp    $0x9,%eax
 860aef8:	0f 94 c0             	sete   %al
 860aefb:	84 c0                	test   %al,%al
 860aefd:	74 4e                	je     860af4d <_ZN26CSpecialItemRoutingManager14processRoutingEP6CParty+0x2e3>
 860aeff:	c7 45 e8 07 00 00 00 	movl   $0x7,-0x18(%ebp)
 860af06:	eb 45                	jmp    860af4d <_ZN26CSpecialItemRoutingManager14processRoutingEP6CParty+0x2e3>
 860af08:	8b 45 d0             	mov    -0x30(%ebp),%eax
 860af0b:	8b 00                	mov    (%eax),%eax
 860af0d:	83 c0 14             	add    $0x14,%eax
 860af10:	8b 10                	mov    (%eax),%edx
 860af12:	8b 45 d0             	mov    -0x30(%ebp),%eax
 860af15:	89 04 24             	mov    %eax,(%esp)
 860af18:	ff d2                	call   *%edx
 860af1a:	84 c0                	test   %al,%al
 860af1c:	74 09                	je     860af27 <_ZN26CSpecialItemRoutingManager14processRoutingEP6CParty+0x2bd>
 860af1e:	c7 45 e8 07 00 00 00 	movl   $0x7,-0x18(%ebp)
 860af25:	eb 26                	jmp    860af4d <_ZN26CSpecialItemRoutingManager14processRoutingEP6CParty+0x2e3>
 860af27:	8b 45 d0             	mov    -0x30(%ebp),%eax
 860af2a:	8b 00                	mov    (%eax),%eax
 860af2c:	83 c0 10             	add    $0x10,%eax
 860af2f:	8b 10                	mov    (%eax),%edx
 860af31:	8b 45 d0             	mov    -0x30(%ebp),%eax
 860af34:	89 04 24             	mov    %eax,(%esp)
 860af37:	ff d2                	call   *%edx
 860af39:	84 c0                	test   %al,%al
 860af3b:	74 09                	je     860af46 <_ZN26CSpecialItemRoutingManager14processRoutingEP6CParty+0x2dc>
 860af3d:	c7 45 e8 01 00 00 00 	movl   $0x1,-0x18(%ebp)
 860af44:	eb 07                	jmp    860af4d <_ZN26CSpecialItemRoutingManager14processRoutingEP6CParty+0x2e3>
 860af46:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 860af4d:	c7 45 ec ff ff ff ff 	movl   $0xffffffff,-0x14(%ebp)
 860af54:	8b 45 d0             	mov    -0x30(%ebp),%eax
 860af57:	8b 00                	mov    (%eax),%eax
 860af59:	83 c0 10             	add    $0x10,%eax
 860af5c:	8b 10                	mov    (%eax),%edx
 860af5e:	8b 45 d0             	mov    -0x30(%ebp),%eax
 860af61:	89 04 24             	mov    %eax,(%esp)
 860af64:	ff d2                	call   *%edx
 860af66:	84 c0                	test   %al,%al
 860af68:	74 64                	je     860afce <_ZN26CSpecialItemRoutingManager14processRoutingEP6CParty+0x364>
 860af6a:	8b 45 d8             	mov    -0x28(%ebp),%eax
 860af6d:	89 04 24             	mov    %eax,(%esp)
 860af70:	e8 d9 0c ac ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 860af75:	8d 55 84             	lea    -0x7c(%ebp),%edx
 860af78:	89 54 24 08          	mov    %edx,0x8(%esp)
 860af7c:	89 44 24 04          	mov    %eax,0x4(%esp)
 860af80:	c7 04 24 05 00 00 00 	movl   $0x5,(%esp)
 860af87:	e8 c4 c7 ea ff       	call   84b7750 <_ZN8WongWork12CGenUniqueNo8genIPGNoENS0_15ENUM_IPGNO_TYPEEjPc>
 860af8c:	8b 45 c8             	mov    -0x38(%ebp),%eax
 860af8f:	0f b7 40 0b          	movzwl 0xb(%eax),%eax
 860af93:	0f be d0             	movsbl %al,%edx
 860af96:	8b 45 c8             	mov    -0x38(%ebp),%eax
 860af99:	8b 40 02             	mov    0x2(%eax),%eax
 860af9c:	c7 44 24 14 0f 00 00 	movl   $0xf,0x14(%esp)
 860afa3:	00 
 860afa4:	8d 4d 84             	lea    -0x7c(%ebp),%ecx
 860afa7:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 860afab:	89 54 24 0c          	mov    %edx,0xc(%esp)
 860afaf:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 860afb6:	00 
 860afb7:	89 44 24 04          	mov    %eax,0x4(%esp)
 860afbb:	8b 45 d8             	mov    -0x28(%ebp),%eax
 860afbe:	89 04 24             	mov    %eax,(%esp)
 860afc1:	e8 5e 62 07 00       	call   8681224 <_ZN5CUser13addAvatarItemEmccPKc20eAvatarItemAddReason>
 860afc6:	89 45 ec             	mov    %eax,-0x14(%ebp)
 860afc9:	e9 a3 00 00 00       	jmp    860b071 <_ZN26CSpecialItemRoutingManager14processRoutingEP6CParty+0x407>
 860afce:	8b 45 d8             	mov    -0x28(%ebp),%eax
 860afd1:	89 04 24             	mov    %eax,(%esp)
 860afd4:	e8 b5 f2 ac ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 860afd9:	89 c2                	mov    %eax,%edx
 860afdb:	c7 44 24 4c 01 00 00 	movl   $0x1,0x4c(%esp)
 860afe2:	00 
 860afe3:	c7 44 24 48 01 00 00 	movl   $0x1,0x48(%esp)
 860afea:	00 
 860afeb:	c7 44 24 44 04 00 00 	movl   $0x4,0x44(%esp)
 860aff2:	00 
 860aff3:	8b 45 c8             	mov    -0x38(%ebp),%eax
 860aff6:	8b 08                	mov    (%eax),%ecx
 860aff8:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 860affc:	8b 48 04             	mov    0x4(%eax),%ecx
 860afff:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 860b003:	8b 48 08             	mov    0x8(%eax),%ecx
 860b006:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 860b00a:	8b 48 0c             	mov    0xc(%eax),%ecx
 860b00d:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 860b011:	8b 48 10             	mov    0x10(%eax),%ecx
 860b014:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 860b018:	8b 48 14             	mov    0x14(%eax),%ecx
 860b01b:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 860b01f:	8b 48 18             	mov    0x18(%eax),%ecx
 860b022:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 860b026:	8b 48 1c             	mov    0x1c(%eax),%ecx
 860b029:	89 4c 24 20          	mov    %ecx,0x20(%esp)
 860b02d:	8b 48 20             	mov    0x20(%eax),%ecx
 860b030:	89 4c 24 24          	mov    %ecx,0x24(%esp)
 860b034:	8b 48 24             	mov    0x24(%eax),%ecx
 860b037:	89 4c 24 28          	mov    %ecx,0x28(%esp)
 860b03b:	8b 48 28             	mov    0x28(%eax),%ecx
 860b03e:	89 4c 24 2c          	mov    %ecx,0x2c(%esp)
 860b042:	8b 48 2c             	mov    0x2c(%eax),%ecx
 860b045:	89 4c 24 30          	mov    %ecx,0x30(%esp)
 860b049:	8b 48 30             	mov    0x30(%eax),%ecx
 860b04c:	89 4c 24 34          	mov    %ecx,0x34(%esp)
 860b050:	8b 48 34             	mov    0x34(%eax),%ecx
 860b053:	89 4c 24 38          	mov    %ecx,0x38(%esp)
 860b057:	8b 48 38             	mov    0x38(%eax),%ecx
 860b05a:	89 4c 24 3c          	mov    %ecx,0x3c(%esp)
 860b05e:	0f b6 40 3c          	movzbl 0x3c(%eax),%eax
 860b062:	88 44 24 40          	mov    %al,0x40(%esp)
 860b066:	89 14 24             	mov    %edx,(%esp)
 860b069:	e8 18 7d ef ff       	call   8502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>
 860b06e:	89 45 ec             	mov    %eax,-0x14(%ebp)
 860b071:	83 7d ec ff          	cmpl   $0xffffffff,-0x14(%ebp)
 860b075:	75 45                	jne    860b0bc <_ZN26CSpecialItemRoutingManager14processRoutingEP6CParty+0x452>
 860b077:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 860b07e:	00 
 860b07f:	8d 45 a8             	lea    -0x58(%ebp),%eax
 860b082:	89 04 24             	mov    %eax,(%esp)
 860b085:	e8 96 08 ac ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 860b08a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 860b091:	00 
 860b092:	8d 45 a8             	lea    -0x58(%ebp),%eax
 860b095:	89 04 24             	mov    %eax,(%esp)
 860b098:	e8 83 08 ac ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 860b09d:	8b 45 0c             	mov    0xc(%ebp),%eax
 860b0a0:	89 04 24             	mov    %eax,(%esp)
 860b0a3:	e8 6e 05 00 00       	call   860b616 <_ZN6CParty22GetRoutingItemUniqueIDEv>
 860b0a8:	89 44 24 04          	mov    %eax,0x4(%esp)
 860b0ac:	8d 45 a8             	lea    -0x58(%ebp),%eax
 860b0af:	89 04 24             	mov    %eax,(%esp)
 860b0b2:	e8 85 08 ac ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 860b0b7:	e9 83 01 00 00       	jmp    860b23f <_ZN26CSpecialItemRoutingManager14processRoutingEP6CParty+0x5d5>
 860b0bc:	8b 45 d0             	mov    -0x30(%ebp),%eax
 860b0bf:	8b 00                	mov    (%eax),%eax
 860b0c1:	83 c0 4c             	add    $0x4c,%eax
 860b0c4:	8b 10                	mov    (%eax),%edx
 860b0c6:	8b 45 d0             	mov    -0x30(%ebp),%eax
 860b0c9:	89 04 24             	mov    %eax,(%esp)
 860b0cc:	ff d2                	call   *%edx
 860b0ce:	84 c0                	test   %al,%al
 860b0d0:	74 4c                	je     860b11e <_ZN26CSpecialItemRoutingManager14processRoutingEP6CParty+0x4b4>
 860b0d2:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 860b0d9:	e8 80 93 c2 ff       	call   823445e <_ZN11CSystemTime10getCurDateEv>
 860b0de:	89 c3                	mov    %eax,%ebx
 860b0e0:	8b 45 d8             	mov    -0x28(%ebp),%eax
 860b0e3:	89 04 24             	mov    %eax,(%esp)
 860b0e6:	e8 b5 42 c2 ff       	call   822f3a0 <_ZNK15CUserCharacInfo27get_charac_10_level_sectionEv>
 860b0eb:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 860b0ef:	89 44 24 14          	mov    %eax,0x14(%esp)
 860b0f3:	c7 44 24 10 6f f5 cd 	movl   $0x8cdf56f,0x10(%esp)
 860b0fa:	08 
 860b0fb:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 860b102:	00 
 860b103:	c7 44 24 08 77 f5 cd 	movl   $0x8cdf577,0x8(%esp)
 860b10a:	08 
 860b10b:	c7 44 24 04 80 f5 cd 	movl   $0x8cdf580,0x4(%esp)
 860b112:	08 
 860b113:	8b 45 d8             	mov    -0x28(%ebp),%eax
 860b116:	89 04 24             	mov    %eax,(%esp)
 860b119:	e8 b4 4c 00 00       	call   860fdd2 <_ZN14statistc_proxy3addEP5CUserPKcS3_jS3_z>
 860b11e:	8b 45 0c             	mov    0xc(%ebp),%eax
 860b121:	89 04 24             	mov    %eax,(%esp)
 860b124:	e8 ed 04 00 00       	call   860b616 <_ZN6CParty22GetRoutingItemUniqueIDEv>
 860b129:	89 45 80             	mov    %eax,-0x80(%ebp)
 860b12c:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 860b133:	8b 45 d8             	mov    -0x28(%ebp),%eax
 860b136:	89 04 24             	mov    %eax,(%esp)
 860b139:	e8 4e f2 ac ff       	call   80da38c <_ZN5CUser9get_stateEv>
 860b13e:	83 f8 05             	cmp    $0x5,%eax
 860b141:	74 33                	je     860b176 <_ZN26CSpecialItemRoutingManager14processRoutingEP6CParty+0x50c>
 860b143:	83 f8 0c             	cmp    $0xc,%eax
 860b146:	75 46                	jne    860b18e <_ZN26CSpecialItemRoutingManager14processRoutingEP6CParty+0x524>
 860b148:	8b 45 d8             	mov    -0x28(%ebp),%eax
 860b14b:	89 04 24             	mov    %eax,(%esp)
 860b14e:	e8 cd a0 04 00       	call   8655220 <_ZN5CUser12getBossTowerEv>
 860b153:	89 45 f4             	mov    %eax,-0xc(%ebp)
 860b156:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 860b15a:	74 31                	je     860b18d <_ZN26CSpecialItemRoutingManager14processRoutingEP6CParty+0x523>
 860b15c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 860b15f:	8d 90 18 0a 00 00    	lea    0xa18(%eax),%edx
 860b165:	8d 45 80             	lea    -0x80(%ebp),%eax
 860b168:	89 44 24 04          	mov    %eax,0x4(%esp)
 860b16c:	89 14 24             	mov    %edx,(%esp)
 860b16f:	e8 a4 7a b4 ff       	call   8152c18 <_ZNSt3mapIi8map_itemSt4lessIiESaISt4pairIKiS0_EEE5eraseERS4_>
 860b174:	eb 18                	jmp    860b18e <_ZN26CSpecialItemRoutingManager14processRoutingEP6CParty+0x524>
 860b176:	8b 45 80             	mov    -0x80(%ebp),%eax
 860b179:	89 44 24 04          	mov    %eax,0x4(%esp)
 860b17d:	8b 45 0c             	mov    0xc(%ebp),%eax
 860b180:	89 04 24             	mov    %eax,(%esp)
 860b183:	e8 a2 04 00 00       	call   860b62a <_ZN6CParty21DeleteDungeonDropItemEi>
 860b188:	89 45 f0             	mov    %eax,-0x10(%ebp)
 860b18b:	eb 01                	jmp    860b18e <_ZN26CSpecialItemRoutingManager14processRoutingEP6CParty+0x524>
 860b18d:	90                   	nop
 860b18e:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 860b192:	7e 2c                	jle    860b1c0 <_ZN26CSpecialItemRoutingManager14processRoutingEP6CParty+0x556>
 860b194:	c7 44 24 10 94 f5 cd 	movl   $0x8cdf594,0x10(%esp)
 860b19b:	08 
 860b19c:	c7 44 24 0c 65 01 00 	movl   $0x165,0xc(%esp)
 860b1a3:	00 
 860b1a4:	c7 44 24 08 e0 01 ce 	movl   $0x8ce01e0,0x8(%esp)
 860b1ab:	08 
 860b1ac:	c7 44 24 04 bc f5 cd 	movl   $0x8cdf5bc,0x4(%esp)
 860b1b3:	08 
 860b1b4:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 860b1bb:	e8 4a 8a 4c 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 860b1c0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 860b1c7:	00 
 860b1c8:	8d 45 a8             	lea    -0x58(%ebp),%eax
 860b1cb:	89 04 24             	mov    %eax,(%esp)
 860b1ce:	e8 4d 07 ac ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 860b1d3:	8b 45 dc             	mov    -0x24(%ebp),%eax
 860b1d6:	89 44 24 04          	mov    %eax,0x4(%esp)
 860b1da:	8d 45 a8             	lea    -0x58(%ebp),%eax
 860b1dd:	89 04 24             	mov    %eax,(%esp)
 860b1e0:	e8 3b 07 ac ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 860b1e5:	8b 45 80             	mov    -0x80(%ebp),%eax
 860b1e8:	89 44 24 04          	mov    %eax,0x4(%esp)
 860b1ec:	8d 45 a8             	lea    -0x58(%ebp),%eax
 860b1ef:	89 04 24             	mov    %eax,(%esp)
 860b1f2:	e8 45 07 ac ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 860b1f7:	8b 45 e8             	mov    -0x18(%ebp),%eax
 860b1fa:	0f be c0             	movsbl %al,%eax
 860b1fd:	89 44 24 04          	mov    %eax,0x4(%esp)
 860b201:	8d 45 a8             	lea    -0x58(%ebp),%eax
 860b204:	89 04 24             	mov    %eax,(%esp)
 860b207:	e8 14 07 ac ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 860b20c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 860b20f:	89 44 24 04          	mov    %eax,0x4(%esp)
 860b213:	8d 45 a8             	lea    -0x58(%ebp),%eax
 860b216:	89 04 24             	mov    %eax,(%esp)
 860b219:	e8 86 ec ac ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 860b21e:	8b 45 e8             	mov    -0x18(%ebp),%eax
 860b221:	8b 55 ec             	mov    -0x14(%ebp),%edx
 860b224:	89 54 24 0c          	mov    %edx,0xc(%esp)
 860b228:	89 44 24 08          	mov    %eax,0x8(%esp)
 860b22c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 860b233:	00 
 860b234:	8b 45 d8             	mov    -0x28(%ebp),%eax
 860b237:	89 04 24             	mov    %eax,(%esp)
 860b23a:	e8 99 10 07 00       	call   867c2d8 <_ZN5CUser14SendUpdateItemENS_11eSendTargetE14ENUM_ITEMSPACEi>
 860b23f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 860b246:	00 
 860b247:	8d 45 a8             	lea    -0x58(%ebp),%eax
 860b24a:	89 04 24             	mov    %eax,(%esp)
 860b24d:	e8 06 07 ac ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 860b252:	8d 45 a8             	lea    -0x58(%ebp),%eax
 860b255:	89 44 24 04          	mov    %eax,0x4(%esp)
 860b259:	8b 45 0c             	mov    0xc(%ebp),%eax
 860b25c:	89 04 24             	mov    %eax,(%esp)
 860b25f:	e8 ea 1e f9 ff       	call   859d14e <_ZN6CParty13send_to_partyER11PacketGuard>
 860b264:	8b 45 0c             	mov    0xc(%ebp),%eax
 860b267:	89 04 24             	mov    %eax,(%esp)
 860b26a:	e8 bb 45 fb ff       	call   85bf82a <_ZN6CParty13SetEndRoutingEv>
 860b26f:	8d 45 a8             	lea    -0x58(%ebp),%eax
 860b272:	89 04 24             	mov    %eax,(%esp)
 860b275:	e8 06 2c f8 ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 860b27a:	eb 30                	jmp    860b2ac <_ZN26CSpecialItemRoutingManager14processRoutingEP6CParty+0x642>
 860b27c:	89 d3                	mov    %edx,%ebx
 860b27e:	89 c6                	mov    %eax,%esi
 860b280:	8d 45 a8             	lea    -0x58(%ebp),%eax
 860b283:	89 04 24             	mov    %eax,(%esp)
 860b286:	e8 f5 2b f8 ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 860b28b:	89 f0                	mov    %esi,%eax
 860b28d:	89 da                	mov    %ebx,%edx
 860b28f:	eb 00                	jmp    860b291 <_ZN26CSpecialItemRoutingManager14processRoutingEP6CParty+0x627>
 860b291:	89 d3                	mov    %edx,%ebx
 860b293:	89 c6                	mov    %eax,%esi
 860b295:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 860b298:	89 04 24             	mov    %eax,(%esp)
 860b29b:	e8 4a 97 b2 ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 860b2a0:	89 f0                	mov    %esi,%eax
 860b2a2:	89 da                	mov    %ebx,%edx
 860b2a4:	89 04 24             	mov    %eax,(%esp)
 860b2a7:	e8 a4 84 4d 00       	call   8ae3750 <_Unwind_Resume>
 860b2ac:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 860b2af:	89 04 24             	mov    %eax,(%esp)
 860b2b2:	e8 33 97 b2 ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 860b2b7:	8d 65 f8             	lea    -0x8(%ebp),%esp
 860b2ba:	83 c4 00             	add    $0x0,%esp
 860b2bd:	5b                   	pop    %ebx
 860b2be:	5e                   	pop    %esi
 860b2bf:	5d                   	pop    %ebp
 860b2c0:	c3                   	ret
 860b2c1:	90                   	nop

```

```c
// CSpecialItemRoutingManager::processRouting @ 0x860ac6a

/* CSpecialItemRoutingManager::processRouting(CParty*) */

void __thiscall
CSpecialItemRoutingManager::processRouting(CSpecialItemRoutingManager *this,CParty *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  CDataManager *this_00;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined1 local_80 [24];
  int local_68;
  int local_64;
  __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_60 [4];
  PacketGuard local_5c [12];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_50 [12];
  __normal_iterator local_44 [4];
  __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_40 [4];
  undefined4 *local_3c;
  int local_38;
  CItem *local_34;
  CItem *local_30;
  CUserCharacInfo *local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_3c = (undefined4 *)CParty::GetRoutingInvenItem(param_1);
  if (*(int *)((int)local_3c + 2) == 0) {
    ProcessFailEtc(this,param_1,0);
  }
  else {
    iVar3 = CParty::GetRoutingItemID(param_1);
    local_38 = iVar3;
    this_00 = (CDataManager *)G_CDataManager();
    local_34 = (CItem *)CDataManager::find_item(this_00,iVar3);
    if (local_34 == (CItem *)0x0) {
      ProcessFailEtc(this,param_1,0);
    }
    else {
      local_30 = local_34;
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_50);
                    /* try { // try from 0860ad0d to 0860ad43 has its CatchHandler @ 0860b291 */
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::clear(local_50);
      CParty::GetRoutingDiceMemberList(param_1,(vector *)local_50,local_30);
      local_2c = (CUserCharacInfo *)0x0;
      local_28 = 0;
      PacketGuard::PacketGuard(local_5c);
                    /* try { // try from 0860ad5a to 0860b263 has its CatchHandler @ 0860b27c */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_5c,0,0x11a);
      cVar1 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::empty();
      if (cVar1 == '\x01') {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_5c,0);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_5c,0);
        iVar3 = CParty::GetRoutingItemUniqueID(param_1);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_5c,iVar3);
      }
      else {
        iVar3 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size(local_50);
        if (iVar3 == 1) {
          piVar4 = (int *)std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::
                          operator[](local_50,0);
          local_28 = *piVar4;
          local_2c = (CUserCharacInfo *)CParty::get_user(param_1,local_28);
        }
        else {
          local_24 = -1;
          std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
LAB_0860ae52:
          std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
          bVar2 = __gnu_cxx::operator!=(local_60,local_44);
          if (bVar2) {
            piVar4 = (int *)__gnu_cxx::
                            __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                            ::operator*(local_60);
            local_64 = piVar4[1];
            local_68 = *piVar4;
            local_20 = get_rand_int(100);
            if (local_20 <= local_24) goto LAB_0860ae2a;
            local_28 = local_68;
            local_24 = local_20;
            local_2c = (CUserCharacInfo *)CParty::get_user(param_1,local_68);
            goto LAB_0860ae32;
          }
        }
      }
      if (local_2c != (CUserCharacInfo *)0x0) {
        local_1c = 0;
        cVar1 = CItem::is_stackable(local_34);
        if (cVar1 == '\0') {
          cVar1 = (**(code **)(*(int *)local_34 + 0x14))(local_34);
          if (cVar1 == '\0') {
            cVar1 = (**(code **)(*(int *)local_34 + 0x10))(local_34);
            if (cVar1 == '\0') {
              local_1c = 0;
            }
            else {
              local_1c = 1;
            }
          }
          else {
            local_1c = 7;
          }
        }
        else {
          iVar3 = (**(code **)(*(int *)local_34 + 0xc))(local_34);
          if (iVar3 == 9) {
            local_1c = 7;
          }
        }
        local_18 = 0xffffffff;
        cVar1 = (**(code **)(*(int *)local_34 + 0x10))(local_34);
        if (cVar1 == '\0') {
          uVar5 = CUserCharacInfo::getCurCharacInvenW(local_2c);
          local_18 = CInventory::insertItemIntoInventory
                               (uVar5,*local_3c,local_3c[1],local_3c[2],local_3c[3],local_3c[4],
                                local_3c[5],local_3c[6],local_3c[7],local_3c[8],local_3c[9],
                                local_3c[10],local_3c[0xb],local_3c[0xc],local_3c[0xd],local_3c[0xe]
                                ,*(undefined1 *)(local_3c + 0xf),4,1,1);
        }
        else {
          uVar5 = CUserCharacInfo::getCurCharacNo(local_2c);
          WongWork::CGenUniqueNo::genIPGNo(5,uVar5,local_80);
          local_18 = CUser::addAvatarItem
                               ((CUser *)local_2c,*(undefined4 *)((int)local_3c + 2),0,
                                (int)(char)*(undefined2 *)((int)local_3c + 0xb),local_80,0xf);
        }
        if (local_18 == -1) {
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_5c,0);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_5c,1);
          iVar3 = CParty::GetRoutingItemUniqueID(param_1);
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_5c,iVar3);
        }
        else {
          cVar1 = (**(code **)(*(int *)local_34 + 0x4c))(local_34);
          if (cVar1 != '\0') {
            uVar5 = CSystemTime::getCurDate((CSystemTime *)GlobalData::s_systemTime_);
            uVar6 = CUserCharacInfo::get_charac_10_level_section(local_2c);
            statistc_proxy::add((CUser *)local_2c,"log_random_option","pick_cnt",1,"%d,\'%s\'",uVar6
                                ,uVar5);
          }
          iVar3 = CParty::GetRoutingItemUniqueID(param_1);
          local_14 = 0;
          iVar7 = CUser::get_state((CUser *)local_2c);
          if (iVar7 == 5) {
            local_14 = CParty::DeleteDungeonDropItem((int)param_1);
          }
          else if ((iVar7 == 0xc) &&
                  (local_10 = CUser::getBossTower((CUser *)local_2c), local_10 != 0)) {
            std::map<int,map_item,std::less<int>,std::allocator<std::pair<int_const,map_item>>>::
            erase((int *)(local_10 + 0xa18));
          }
          if (0 < local_14) {
            LogManager::logFormat
                      (1,"SpecialItemRoutingManager.cpp",
                       "void CSpecialItemRoutingManager::processRouting(CParty*)",0x165,
                       "[EPIC ROUTING] DELETE DUNGEON ITEM FAIL");
          }
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_5c,1);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_5c,local_28);
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_5c,iVar3);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_5c,(int)(char)local_1c);
          InterfacePacketBuf::put_short((InterfacePacketBuf *)local_5c,local_18);
          CUser::SendUpdateItem((CUser *)local_2c,1,local_1c,local_18);
        }
      }
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_5c,true);
      CParty::send_to_party(param_1,local_5c);
      CParty::SetEndRouting(param_1);
                    /* try { // try from 0860b275 to 0860b279 has its CatchHandler @ 0860b291 */
      PacketGuard::~PacketGuard(local_5c);
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_50);
    }
  }
  return;
LAB_0860ae2a:
  if (local_20 != local_24) {
LAB_0860ae32:
    __gnu_cxx::
    __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
    ::operator++(local_40,(int)local_60);
  }
  goto LAB_0860ae52;
}

```

---

## ~CSpecialItemRoutingManager

```asm
// === 0860a9ce CSpecialItemRoutingManager::~CSpecialItemRoutingManager  [0x0860a9ce-0x860a9d3] ===
 860a9ce:	55                   	push   %ebp
 860a9cf:	89 e5                	mov    %esp,%ebp
 860a9d1:	5d                   	pop    %ebp
 860a9d2:	c3                   	ret
 860a9d3:	90                   	nop

```

```c
// CSpecialItemRoutingManager::~CSpecialItemRoutingManager @ 0x860a9ce

/* CSpecialItemRoutingManager::~CSpecialItemRoutingManager() */

void __thiscall
CSpecialItemRoutingManager::~CSpecialItemRoutingManager(CSpecialItemRoutingManager *this)

{
  return;
}

```

