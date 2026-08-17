# Dispatcher_Card_Select_Right_State

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 081ff504 Dispatcher_Card_Select_Right_State::dispatch_sig  [0x081ff504-0x81ff7dd] ===
 81ff504:	55                   	push   %ebp
 81ff505:	89 e5                	mov    %esp,%ebp
 81ff507:	56                   	push   %esi
 81ff508:	53                   	push   %ebx
 81ff509:	83 ec 40             	sub    $0x40,%esp
 81ff50c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ff50f:	89 04 24             	mov    %eax,(%esp)
 81ff512:	e8 75 ae ed ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81ff517:	83 f8 05             	cmp    $0x5,%eax
 81ff51a:	0f 95 c0             	setne  %al
 81ff51d:	84 c0                	test   %al,%al
 81ff51f:	74 0a                	je     81ff52b <_ZN34Dispatcher_Card_Select_Right_State12dispatch_sigEP5CUserR9PacketBuf+0x27>
 81ff521:	bb 00 00 00 00       	mov    $0x0,%ebx
 81ff526:	e9 a9 02 00 00       	jmp    81ff7d4 <_ZN34Dispatcher_Card_Select_Right_State12dispatch_sigEP5CUserR9PacketBuf+0x2d0>
 81ff52b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ff52e:	89 04 24             	mov    %eax,(%esp)
 81ff531:	e8 94 19 49 00       	call   8690eca <_ZNK5CUser12getMoveSpaceEv>
 81ff536:	83 f8 01             	cmp    $0x1,%eax
 81ff539:	0f 94 c0             	sete   %al
 81ff53c:	84 c0                	test   %al,%al
 81ff53e:	74 0a                	je     81ff54a <_ZN34Dispatcher_Card_Select_Right_State12dispatch_sigEP5CUserR9PacketBuf+0x46>
 81ff540:	bb 00 00 00 00       	mov    $0x0,%ebx
 81ff545:	e9 8a 02 00 00       	jmp    81ff7d4 <_ZN34Dispatcher_Card_Select_Right_State12dispatch_sigEP5CUserR9PacketBuf+0x2d0>
 81ff54a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ff54d:	89 04 24             	mov    %eax,(%esp)
 81ff550:	e8 f9 08 03 00       	call   822fe4e <_ZN5CUser13GetPartyIndexEv>
 81ff555:	0f bf d8             	movswl %ax,%ebx
 81ff558:	e8 31 cc ec ff       	call   80cc18e <_Z14G_CGameManagerv>
 81ff55d:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81ff561:	89 04 24             	mov    %eax,(%esp)
 81ff564:	e8 c9 59 09 00       	call   8294f32 <_ZN12CGameManager8GetPartyEi>
 81ff569:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81ff56c:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 81ff570:	0f 94 c0             	sete   %al
 81ff573:	84 c0                	test   %al,%al
 81ff575:	74 2b                	je     81ff5a2 <_ZN34Dispatcher_Card_Select_Right_State12dispatch_sigEP5CUserR9PacketBuf+0x9e>
 81ff577:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81ff57e:	00 
 81ff57f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81ff586:	00 
 81ff587:	c7 44 24 04 60 f9 bc 	movl   $0x8bcf960,0x4(%esp)
 81ff58e:	08 
 81ff58f:	c7 04 24 28 93 00 00 	movl   $0x9328,(%esp)
 81ff596:	e8 3c 13 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81ff59b:	89 c3                	mov    %eax,%ebx
 81ff59d:	e9 32 02 00 00       	jmp    81ff7d4 <_ZN34Dispatcher_Card_Select_Right_State12dispatch_sigEP5CUserR9PacketBuf+0x2d0>
 81ff5a2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81ff5a5:	8b 80 ac 0c 00 00    	mov    0xcac(%eax),%eax
 81ff5ab:	85 c0                	test   %eax,%eax
 81ff5ad:	74 1c                	je     81ff5cb <_ZN34Dispatcher_Card_Select_Right_State12dispatch_sigEP5CUserR9PacketBuf+0xc7>
 81ff5af:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81ff5b2:	8b 80 ac 0c 00 00    	mov    0xcac(%eax),%eax
 81ff5b8:	89 04 24             	mov    %eax,(%esp)
 81ff5bb:	e8 3a bf 02 00       	call   822b4fa <_ZNK8CDungeon23isTowerOfDespairDungeonEv>
 81ff5c0:	84 c0                	test   %al,%al
 81ff5c2:	74 07                	je     81ff5cb <_ZN34Dispatcher_Card_Select_Right_State12dispatch_sigEP5CUserR9PacketBuf+0xc7>
 81ff5c4:	b8 01 00 00 00       	mov    $0x1,%eax
 81ff5c9:	eb 05                	jmp    81ff5d0 <_ZN34Dispatcher_Card_Select_Right_State12dispatch_sigEP5CUserR9PacketBuf+0xcc>
 81ff5cb:	b8 00 00 00 00       	mov    $0x0,%eax
 81ff5d0:	84 c0                	test   %al,%al
 81ff5d2:	74 0a                	je     81ff5de <_ZN34Dispatcher_Card_Select_Right_State12dispatch_sigEP5CUserR9PacketBuf+0xda>
 81ff5d4:	bb 00 00 00 00       	mov    $0x0,%ebx
 81ff5d9:	e9 f6 01 00 00       	jmp    81ff7d4 <_ZN34Dispatcher_Card_Select_Right_State12dispatch_sigEP5CUserR9PacketBuf+0x2d0>
 81ff5de:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ff5e1:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ff5e5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81ff5e8:	89 04 24             	mov    %eax,(%esp)
 81ff5eb:	e8 e8 49 3b 00       	call   85b3fd8 <_ZN6CParty22CheckRecvFromAllMemberEP5CUser>
 81ff5f0:	83 f0 01             	xor    $0x1,%eax
 81ff5f3:	84 c0                	test   %al,%al
 81ff5f5:	74 0a                	je     81ff601 <_ZN34Dispatcher_Card_Select_Right_State12dispatch_sigEP5CUserR9PacketBuf+0xfd>
 81ff5f7:	bb 00 00 00 00       	mov    $0x0,%ebx
 81ff5fc:	e9 d3 01 00 00       	jmp    81ff7d4 <_ZN34Dispatcher_Card_Select_Right_State12dispatch_sigEP5CUserR9PacketBuf+0x2d0>
 81ff601:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81ff604:	89 04 24             	mov    %eax,(%esp)
 81ff607:	e8 90 e2 02 00       	call   822d89c <_ZN6CParty23get_dungeon_clear_stateEv>
 81ff60c:	3c 03                	cmp    $0x3,%al
 81ff60e:	0f 9f c0             	setg   %al
 81ff611:	84 c0                	test   %al,%al
 81ff613:	74 44                	je     81ff659 <_ZN34Dispatcher_Card_Select_Right_State12dispatch_sigEP5CUserR9PacketBuf+0x155>
 81ff615:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ff618:	89 04 24             	mov    %eax,(%esp)
 81ff61b:	e8 3a a3 ef ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 81ff620:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81ff627:	00 
 81ff628:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81ff62f:	00 
 81ff630:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81ff637:	00 
 81ff638:	c7 44 24 08 97 01 00 	movl   $0x197,0x8(%esp)
 81ff63f:	00 
 81ff640:	8b 55 0c             	mov    0xc(%ebp),%edx
 81ff643:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ff647:	89 04 24             	mov    %eax,(%esp)
 81ff64a:	e8 2f 96 ef ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 81ff64f:	bb 00 00 00 00       	mov    $0x0,%ebx
 81ff654:	e9 7b 01 00 00       	jmp    81ff7d4 <_ZN34Dispatcher_Card_Select_Right_State12dispatch_sigEP5CUserR9PacketBuf+0x2d0>
 81ff659:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81ff65c:	89 04 24             	mov    %eax,(%esp)
 81ff65f:	e8 e8 e6 38 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81ff664:	c7 44 24 08 49 00 00 	movl   $0x49,0x8(%esp)
 81ff66b:	00 
 81ff66c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81ff673:	00 
 81ff674:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81ff677:	89 04 24             	mov    %eax,(%esp)
 81ff67a:	e8 7d c2 ec ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81ff67f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81ff686:	00 
 81ff687:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81ff68a:	89 04 24             	mov    %eax,(%esp)
 81ff68d:	e8 8e c2 ec ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81ff692:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 81ff699:	e9 9c 00 00 00       	jmp    81ff73a <_ZN34Dispatcher_Card_Select_Right_State12dispatch_sigEP5CUserR9PacketBuf+0x236>
 81ff69e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81ff6a1:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ff6a5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81ff6a8:	89 04 24             	mov    %eax,(%esp)
 81ff6ab:	e8 b4 60 f4 ff       	call   8145764 <_ZN6CParty8get_userEi>
 81ff6b0:	85 c0                	test   %eax,%eax
 81ff6b2:	0f 94 c0             	sete   %al
 81ff6b5:	84 c0                	test   %al,%al
 81ff6b7:	74 15                	je     81ff6ce <_ZN34Dispatcher_Card_Select_Right_State12dispatch_sigEP5CUserR9PacketBuf+0x1ca>
 81ff6b9:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 81ff6c0:	ff 
 81ff6c1:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81ff6c4:	89 04 24             	mov    %eax,(%esp)
 81ff6c7:	e8 d8 a7 ed ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 81ff6cc:	eb 68                	jmp    81ff736 <_ZN34Dispatcher_Card_Select_Right_State12dispatch_sigEP5CUserR9PacketBuf+0x232>
 81ff6ce:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81ff6d1:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ff6d5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81ff6d8:	89 04 24             	mov    %eax,(%esp)
 81ff6db:	e8 84 60 f4 ff       	call   8145764 <_ZN6CParty8get_userEi>
 81ff6e0:	89 04 24             	mov    %eax,(%esp)
 81ff6e3:	e8 7e 80 45 00       	call   8657766 <_ZNK5CUser24getCurCharacTotalFatigueEv>
 81ff6e8:	89 c3                	mov    %eax,%ebx
 81ff6ea:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81ff6ed:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ff6f1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81ff6f4:	89 04 24             	mov    %eax,(%esp)
 81ff6f7:	e8 68 60 f4 ff       	call   8145764 <_ZN6CParty8get_userEi>
 81ff6fc:	89 04 24             	mov    %eax,(%esp)
 81ff6ff:	e8 00 81 45 00       	call   8657804 <_ZNK5CUser27getCurCharacTotalMaxFatigueEv>
 81ff704:	66 39 c3             	cmp    %ax,%bx
 81ff707:	0f 94 c0             	sete   %al
 81ff70a:	84 c0                	test   %al,%al
 81ff70c:	74 15                	je     81ff723 <_ZN34Dispatcher_Card_Select_Right_State12dispatch_sigEP5CUserR9PacketBuf+0x21f>
 81ff70e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81ff715:	00 
 81ff716:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81ff719:	89 04 24             	mov    %eax,(%esp)
 81ff71c:	e8 83 a7 ed ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 81ff721:	eb 13                	jmp    81ff736 <_ZN34Dispatcher_Card_Select_Right_State12dispatch_sigEP5CUserR9PacketBuf+0x232>
 81ff723:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81ff72a:	00 
 81ff72b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81ff72e:	89 04 24             	mov    %eax,(%esp)
 81ff731:	e8 6e a7 ed ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 81ff736:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 81ff73a:	83 7d f4 03          	cmpl   $0x3,-0xc(%ebp)
 81ff73e:	0f 9e c0             	setle  %al
 81ff741:	84 c0                	test   %al,%al
 81ff743:	0f 85 55 ff ff ff    	jne    81ff69e <_ZN34Dispatcher_Card_Select_Right_State12dispatch_sigEP5CUserR9PacketBuf+0x19a>
 81ff749:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81ff750:	00 
 81ff751:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81ff754:	89 04 24             	mov    %eax,(%esp)
 81ff757:	e8 fc c1 ec ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81ff75c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81ff75f:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ff763:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81ff766:	89 04 24             	mov    %eax,(%esp)
 81ff769:	e8 e0 d9 39 00       	call   859d14e <_ZN6CParty13send_to_partyER11PacketGuard>
 81ff76e:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 81ff775:	00 
 81ff776:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81ff779:	89 04 24             	mov    %eax,(%esp)
 81ff77c:	e8 2b e1 02 00       	call   822d8ac <_ZN6CParty23set_dungeon_clear_stateEc>
 81ff781:	c7 44 24 04 1e 00 00 	movl   $0x1e,0x4(%esp)
 81ff788:	00 
 81ff789:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81ff78c:	89 04 24             	mov    %eax,(%esp)
 81ff78f:	e8 f0 2a 3b 00       	call   85b2284 <_ZN6CParty33insert_time_card_select_right_msgEi>
 81ff794:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 81ff79b:	00 
 81ff79c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81ff79f:	89 04 24             	mov    %eax,(%esp)
 81ff7a2:	e8 c3 29 3b 00       	call   85b216a <_ZN6CParty27insert_time_card_select_msgEi>
 81ff7a7:	bb 00 00 00 00       	mov    $0x0,%ebx
 81ff7ac:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81ff7af:	89 04 24             	mov    %eax,(%esp)
 81ff7b2:	e8 c9 e6 38 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81ff7b7:	eb 1b                	jmp    81ff7d4 <_ZN34Dispatcher_Card_Select_Right_State12dispatch_sigEP5CUserR9PacketBuf+0x2d0>
 81ff7b9:	89 d3                	mov    %edx,%ebx
 81ff7bb:	89 c6                	mov    %eax,%esi
 81ff7bd:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81ff7c0:	89 04 24             	mov    %eax,(%esp)
 81ff7c3:	e8 b8 e6 38 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81ff7c8:	89 f0                	mov    %esi,%eax
 81ff7ca:	89 da                	mov    %ebx,%edx
 81ff7cc:	89 04 24             	mov    %eax,(%esp)
 81ff7cf:	e8 7c 3f 8e 00       	call   8ae3750 <_Unwind_Resume>
 81ff7d4:	89 d8                	mov    %ebx,%eax
 81ff7d6:	83 c4 40             	add    $0x40,%esp
 81ff7d9:	5b                   	pop    %ebx
 81ff7da:	5e                   	pop    %esi
 81ff7db:	5d                   	pop    %ebp
 81ff7dc:	c3                   	ret
 81ff7dd:	90                   	nop

```

```c
// Dispatcher_Card_Select_Right_State::dispatch_sig @ 0x81ff504

/* Dispatcher_Card_Select_Right_State::dispatch_sig(CUser*, PacketBuf&) */

undefined4 Dispatcher_Card_Select_Right_State::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  undefined4 uVar6;
  CHackAnalyzer *pCVar7;
  CUser *pCVar8;
  PacketGuard local_20 [12];
  CParty *local_14;
  int local_10;
  
  iVar5 = CUser::get_state((CUser *)param_2);
  if (iVar5 != 5) {
    return 0;
  }
  iVar5 = CUser::getMoveSpace((CUser *)param_2);
  if (iVar5 == 1) {
    return 0;
  }
  CUser::GetPartyIndex((CUser *)param_2);
  iVar5 = G_CGameManager();
  local_14 = (CParty *)CGameManager::GetParty(iVar5);
  if (local_14 == (CParty *)0x0) {
    uVar6 = LineFunc(0x9328,
                     "virtual int Dispatcher_Card_Select_Right_State::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
    return uVar6;
  }
  if ((*(int *)(local_14 + 0xcac) == 0) ||
     (cVar2 = CDungeon::isTowerOfDespairDungeon(*(CDungeon **)(local_14 + 0xcac)), cVar2 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((!bVar1) &&
     (cVar2 = CParty::CheckRecvFromAllMember(local_14,(CUser *)param_2), cVar2 == '\x01')) {
    cVar2 = CParty::get_dungeon_clear_state(local_14);
    if (cVar2 < '\x04') {
      PacketGuard::PacketGuard(local_20);
                    /* try { // try from 081ff67a to 081ff7a6 has its CatchHandler @ 081ff7b9 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,1,0x49);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,1);
      for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
        iVar5 = CParty::get_user(local_14,local_10);
        if (iVar5 == 0) {
          InterfacePacketBuf::put_short((InterfacePacketBuf *)local_20,-1);
        }
        else {
          pCVar8 = (CUser *)CParty::get_user(local_14,local_10);
          sVar3 = CUser::getCurCharacTotalFatigue(pCVar8);
          pCVar8 = (CUser *)CParty::get_user(local_14,local_10);
          sVar4 = CUser::getCurCharacTotalMaxFatigue(pCVar8);
          if (sVar3 == sVar4) {
            InterfacePacketBuf::put_short((InterfacePacketBuf *)local_20,0);
          }
          else {
            InterfacePacketBuf::put_short((InterfacePacketBuf *)local_20,1);
          }
        }
      }
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
      CParty::send_to_party(local_14,local_20);
      CParty::set_dungeon_clear_state(local_14,'\x04');
      CParty::insert_time_card_select_right_msg(local_14,0x1e);
      CParty::insert_time_card_select_msg(local_14,4);
      PacketGuard::~PacketGuard(local_20);
    }
    else {
      pCVar7 = (CHackAnalyzer *)CUser::getHackAnalyzer((CUser *)param_2);
      WongWork::CHackAnalyzer::addServerHackCnt(pCVar7,param_2,0x197,1,0,0);
    }
  }
  return 0;
}

```

