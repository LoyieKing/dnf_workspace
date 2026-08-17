# TimerClearDungeonScoreScoll

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 086345d2 TimerClearDungeonScoreScoll::dispatch_sig  [0x086345d2-0x86347c5] ===
 86345d2:	55                   	push   %ebp
 86345d3:	89 e5                	mov    %esp,%ebp
 86345d5:	56                   	push   %esi
 86345d6:	53                   	push   %ebx
 86345d7:	83 ec 30             	sub    $0x30,%esp
 86345da:	e8 af 7b a9 ff       	call   80cc18e <_Z14G_CGameManagerv>
 86345df:	8b 55 0c             	mov    0xc(%ebp),%edx
 86345e2:	89 54 24 04          	mov    %edx,0x4(%esp)
 86345e6:	89 04 24             	mov    %eax,(%esp)
 86345e9:	e8 44 09 c6 ff       	call   8294f32 <_ZN12CGameManager8GetPartyEi>
 86345ee:	89 45 f0             	mov    %eax,-0x10(%ebp)
 86345f1:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 86345f5:	75 0a                	jne    8634601 <_ZN27TimerClearDungeonScoreScoll12dispatch_sigEiij+0x2f>
 86345f7:	b8 00 00 00 00       	mov    $0x0,%eax
 86345fc:	e9 be 01 00 00       	jmp    86347bf <_ZN27TimerClearDungeonScoreScoll12dispatch_sigEiij+0x1ed>
 8634601:	8b 45 10             	mov    0x10(%ebp),%eax
 8634604:	89 44 24 08          	mov    %eax,0x8(%esp)
 8634608:	c7 44 24 04 12 00 00 	movl   $0x12,0x4(%esp)
 863460f:	00 
 8634610:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8634613:	89 04 24             	mov    %eax,(%esp)
 8634616:	e8 89 68 f6 ff       	call   859aea4 <_ZN6CParty15check_timer_keyE13TIMER_MESSAGEi>
 863461b:	83 f0 01             	xor    $0x1,%eax
 863461e:	84 c0                	test   %al,%al
 8634620:	74 0a                	je     863462c <_ZN27TimerClearDungeonScoreScoll12dispatch_sigEiij+0x5a>
 8634622:	b8 00 00 00 00       	mov    $0x0,%eax
 8634627:	e9 93 01 00 00       	jmp    86347bf <_ZN27TimerClearDungeonScoreScoll12dispatch_sigEiij+0x1ed>
 863462c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 863462f:	89 04 24             	mov    %eax,(%esp)
 8634632:	e8 65 92 bf ff       	call   822d89c <_ZN6CParty23get_dungeon_clear_stateEv>
 8634637:	3c 03                	cmp    $0x3,%al
 8634639:	0f 94 c0             	sete   %al
 863463c:	84 c0                	test   %al,%al
 863463e:	0f 84 76 01 00 00    	je     86347ba <_ZN27TimerClearDungeonScoreScoll12dispatch_sigEiij+0x1e8>
 8634644:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8634647:	89 04 24             	mov    %eax,(%esp)
 863464a:	e8 fd 96 f5 ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 863464f:	c7 44 24 08 49 00 00 	movl   $0x49,0x8(%esp)
 8634656:	00 
 8634657:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 863465e:	00 
 863465f:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8634662:	89 04 24             	mov    %eax,(%esp)
 8634665:	e8 92 72 a9 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 863466a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8634671:	00 
 8634672:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8634675:	89 04 24             	mov    %eax,(%esp)
 8634678:	e8 a3 72 a9 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 863467d:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8634684:	e9 9c 00 00 00       	jmp    8634725 <_ZN27TimerClearDungeonScoreScoll12dispatch_sigEiij+0x153>
 8634689:	8b 45 f4             	mov    -0xc(%ebp),%eax
 863468c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8634690:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8634693:	89 04 24             	mov    %eax,(%esp)
 8634696:	e8 c9 10 b1 ff       	call   8145764 <_ZN6CParty8get_userEi>
 863469b:	85 c0                	test   %eax,%eax
 863469d:	0f 94 c0             	sete   %al
 86346a0:	84 c0                	test   %al,%al
 86346a2:	74 15                	je     86346b9 <_ZN27TimerClearDungeonScoreScoll12dispatch_sigEiij+0xe7>
 86346a4:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 86346ab:	ff 
 86346ac:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 86346af:	89 04 24             	mov    %eax,(%esp)
 86346b2:	e8 ed 57 aa ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 86346b7:	eb 68                	jmp    8634721 <_ZN27TimerClearDungeonScoreScoll12dispatch_sigEiij+0x14f>
 86346b9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86346bc:	89 44 24 04          	mov    %eax,0x4(%esp)
 86346c0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 86346c3:	89 04 24             	mov    %eax,(%esp)
 86346c6:	e8 99 10 b1 ff       	call   8145764 <_ZN6CParty8get_userEi>
 86346cb:	89 04 24             	mov    %eax,(%esp)
 86346ce:	e8 93 30 02 00       	call   8657766 <_ZNK5CUser24getCurCharacTotalFatigueEv>
 86346d3:	89 c3                	mov    %eax,%ebx
 86346d5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86346d8:	89 44 24 04          	mov    %eax,0x4(%esp)
 86346dc:	8b 45 f0             	mov    -0x10(%ebp),%eax
 86346df:	89 04 24             	mov    %eax,(%esp)
 86346e2:	e8 7d 10 b1 ff       	call   8145764 <_ZN6CParty8get_userEi>
 86346e7:	89 04 24             	mov    %eax,(%esp)
 86346ea:	e8 15 31 02 00       	call   8657804 <_ZNK5CUser27getCurCharacTotalMaxFatigueEv>
 86346ef:	66 39 c3             	cmp    %ax,%bx
 86346f2:	0f 94 c0             	sete   %al
 86346f5:	84 c0                	test   %al,%al
 86346f7:	74 15                	je     863470e <_ZN27TimerClearDungeonScoreScoll12dispatch_sigEiij+0x13c>
 86346f9:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8634700:	00 
 8634701:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8634704:	89 04 24             	mov    %eax,(%esp)
 8634707:	e8 98 57 aa ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 863470c:	eb 13                	jmp    8634721 <_ZN27TimerClearDungeonScoreScoll12dispatch_sigEiij+0x14f>
 863470e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8634715:	00 
 8634716:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8634719:	89 04 24             	mov    %eax,(%esp)
 863471c:	e8 83 57 aa ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8634721:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8634725:	83 7d f4 03          	cmpl   $0x3,-0xc(%ebp)
 8634729:	0f 9e c0             	setle  %al
 863472c:	84 c0                	test   %al,%al
 863472e:	0f 85 55 ff ff ff    	jne    8634689 <_ZN27TimerClearDungeonScoreScoll12dispatch_sigEiij+0xb7>
 8634734:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 863473b:	00 
 863473c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 863473f:	89 04 24             	mov    %eax,(%esp)
 8634742:	e8 11 72 a9 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8634747:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 863474a:	89 44 24 04          	mov    %eax,0x4(%esp)
 863474e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8634751:	89 04 24             	mov    %eax,(%esp)
 8634754:	e8 f5 89 f6 ff       	call   859d14e <_ZN6CParty13send_to_partyER11PacketGuard>
 8634759:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8634760:	00 
 8634761:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8634764:	89 04 24             	mov    %eax,(%esp)
 8634767:	e8 40 91 bf ff       	call   822d8ac <_ZN6CParty23set_dungeon_clear_stateEc>
 863476c:	c7 44 24 04 1e 00 00 	movl   $0x1e,0x4(%esp)
 8634773:	00 
 8634774:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8634777:	89 04 24             	mov    %eax,(%esp)
 863477a:	e8 a7 da f7 ff       	call   85b2226 <_ZN6CParty36insert_time_dungeon_score_scroll_msgEi>
 863477f:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8634786:	00 
 8634787:	8b 45 f0             	mov    -0x10(%ebp),%eax
 863478a:	89 04 24             	mov    %eax,(%esp)
 863478d:	e8 d8 d9 f7 ff       	call   85b216a <_ZN6CParty27insert_time_card_select_msgEi>
 8634792:	eb 1b                	jmp    86347af <_ZN27TimerClearDungeonScoreScoll12dispatch_sigEiij+0x1dd>
 8634794:	89 d3                	mov    %edx,%ebx
 8634796:	89 c6                	mov    %eax,%esi
 8634798:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 863479b:	89 04 24             	mov    %eax,(%esp)
 863479e:	e8 dd 96 f5 ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 86347a3:	89 f0                	mov    %esi,%eax
 86347a5:	89 da                	mov    %ebx,%edx
 86347a7:	89 04 24             	mov    %eax,(%esp)
 86347aa:	e8 a1 ef 4a 00       	call   8ae3750 <_Unwind_Resume>
 86347af:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 86347b2:	89 04 24             	mov    %eax,(%esp)
 86347b5:	e8 c6 96 f5 ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 86347ba:	b8 01 00 00 00       	mov    $0x1,%eax
 86347bf:	83 c4 30             	add    $0x30,%esp
 86347c2:	5b                   	pop    %ebx
 86347c3:	5e                   	pop    %esi
 86347c4:	5d                   	pop    %ebp
 86347c5:	c3                   	ret

```

```c
// TimerClearDungeonScoreScoll::dispatch_sig @ 0x86345d2

/* TimerClearDungeonScoreScoll::dispatch_sig(int, int, unsigned int) */

undefined4 TimerClearDungeonScoreScoll::dispatch_sig(int param_1,int param_2,uint param_3)

{
  char cVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  CUser *pCVar6;
  PacketGuard local_20 [12];
  CParty *local_14;
  int local_10;
  
  iVar4 = G_CGameManager();
  local_14 = (CParty *)CGameManager::GetParty(iVar4);
  if (local_14 == (CParty *)0x0) {
    uVar5 = 0;
  }
  else {
    cVar1 = CParty::check_timer_key(local_14,0x12,param_3);
    if (cVar1 == '\x01') {
      cVar1 = CParty::get_dungeon_clear_state(local_14);
      if (cVar1 == '\x03') {
        PacketGuard::PacketGuard(local_20);
                    /* try { // try from 08634665 to 08634791 has its CatchHandler @ 08634794 */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,1,0x49);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,1);
        for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
          iVar4 = CParty::get_user(local_14,local_10);
          if (iVar4 == 0) {
            InterfacePacketBuf::put_short((InterfacePacketBuf *)local_20,-1);
          }
          else {
            pCVar6 = (CUser *)CParty::get_user(local_14,local_10);
            sVar2 = CUser::getCurCharacTotalFatigue(pCVar6);
            pCVar6 = (CUser *)CParty::get_user(local_14,local_10);
            sVar3 = CUser::getCurCharacTotalMaxFatigue(pCVar6);
            if (sVar2 == sVar3) {
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
        CParty::insert_time_dungeon_score_scroll_msg(local_14,0x1e);
        CParty::insert_time_card_select_msg(local_14,4);
        PacketGuard::~PacketGuard(local_20);
      }
      uVar5 = 1;
    }
    else {
      uVar5 = 0;
    }
  }
  return uVar5;
}

```

