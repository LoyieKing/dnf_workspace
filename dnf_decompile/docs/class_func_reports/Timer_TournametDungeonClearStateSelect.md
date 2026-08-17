# Timer_TournametDungeonClearStateSelect

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 0863b4ea Timer_TournametDungeonClearStateSelect::dispatch_sig  [0x0863b4ea-0x863b6c3] ===
 863b4ea:	55                   	push   %ebp
 863b4eb:	89 e5                	mov    %esp,%ebp
 863b4ed:	56                   	push   %esi
 863b4ee:	53                   	push   %ebx
 863b4ef:	83 ec 40             	sub    $0x40,%esp
 863b4f2:	e8 97 0c a9 ff       	call   80cc18e <_Z14G_CGameManagerv>
 863b4f7:	8b 55 0c             	mov    0xc(%ebp),%edx
 863b4fa:	89 54 24 04          	mov    %edx,0x4(%esp)
 863b4fe:	89 04 24             	mov    %eax,(%esp)
 863b501:	e8 2c 9a c5 ff       	call   8294f32 <_ZN12CGameManager8GetPartyEi>
 863b506:	89 45 ec             	mov    %eax,-0x14(%ebp)
 863b509:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 863b50d:	75 0a                	jne    863b519 <_ZN38Timer_TournametDungeonClearStateSelect12dispatch_sigEiij+0x2f>
 863b50f:	b8 00 00 00 00       	mov    $0x0,%eax
 863b514:	e9 a4 01 00 00       	jmp    863b6bd <_ZN38Timer_TournametDungeonClearStateSelect12dispatch_sigEiij+0x1d3>
 863b519:	8b 45 10             	mov    0x10(%ebp),%eax
 863b51c:	89 44 24 08          	mov    %eax,0x8(%esp)
 863b520:	c7 44 24 04 2f 00 00 	movl   $0x2f,0x4(%esp)
 863b527:	00 
 863b528:	8b 45 ec             	mov    -0x14(%ebp),%eax
 863b52b:	89 04 24             	mov    %eax,(%esp)
 863b52e:	e8 71 f9 f5 ff       	call   859aea4 <_ZN6CParty15check_timer_keyE13TIMER_MESSAGEi>
 863b533:	83 f0 01             	xor    $0x1,%eax
 863b536:	84 c0                	test   %al,%al
 863b538:	74 0a                	je     863b544 <_ZN38Timer_TournametDungeonClearStateSelect12dispatch_sigEiij+0x5a>
 863b53a:	b8 00 00 00 00       	mov    $0x0,%eax
 863b53f:	e9 79 01 00 00       	jmp    863b6bd <_ZN38Timer_TournametDungeonClearStateSelect12dispatch_sigEiij+0x1d3>
 863b544:	8b 45 ec             	mov    -0x14(%ebp),%eax
 863b547:	89 04 24             	mov    %eax,(%esp)
 863b54a:	e8 5d 21 f8 ff       	call   85bd6ac <_ZN6CParty30GetTournamentDungeonClearStateEv>
 863b54f:	3c 02                	cmp    $0x2,%al
 863b551:	0f 94 c0             	sete   %al
 863b554:	84 c0                	test   %al,%al
 863b556:	0f 84 5c 01 00 00    	je     863b6b8 <_ZN38Timer_TournametDungeonClearStateSelect12dispatch_sigEiij+0x1ce>
 863b55c:	8d 45 e0             	lea    -0x20(%ebp),%eax
 863b55f:	89 04 24             	mov    %eax,(%esp)
 863b562:	e8 e5 27 f5 ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 863b567:	8d 45 e0             	lea    -0x20(%ebp),%eax
 863b56a:	89 04 24             	mov    %eax,(%esp)
 863b56d:	e8 74 03 a9 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 863b572:	c7 44 24 08 cb 01 00 	movl   $0x1cb,0x8(%esp)
 863b579:	00 
 863b57a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 863b581:	00 
 863b582:	8d 45 e0             	lea    -0x20(%ebp),%eax
 863b585:	89 04 24             	mov    %eax,(%esp)
 863b588:	e8 6f 03 a9 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 863b58d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 863b594:	00 
 863b595:	8d 45 e0             	lea    -0x20(%ebp),%eax
 863b598:	89 04 24             	mov    %eax,(%esp)
 863b59b:	e8 80 03 a9 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 863b5a0:	8b 45 ec             	mov    -0x14(%ebp),%eax
 863b5a3:	05 bc 17 00 00       	add    $0x17bc,%eax
 863b5a8:	89 45 f0             	mov    %eax,-0x10(%ebp)
 863b5ab:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 863b5ae:	89 04 24             	mov    %eax,(%esp)
 863b5b1:	e8 f6 2b a5 ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 863b5b6:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 863b5b9:	89 44 24 04          	mov    %eax,0x4(%esp)
 863b5bd:	8b 45 ec             	mov    -0x14(%ebp),%eax
 863b5c0:	89 04 24             	mov    %eax,(%esp)
 863b5c3:	e8 14 1c f8 ff       	call   85bd1dc <_ZN6CParty19GetValidPartyMemberERSt6vectorIiSaIiEE>
 863b5c8:	8b 45 ec             	mov    -0x14(%ebp),%eax
 863b5cb:	89 04 24             	mov    %eax,(%esp)
 863b5ce:	e8 cb 21 f8 ff       	call   85bd79e <_ZN6CParty19isTournamentVictoryEv>
 863b5d3:	88 45 f7             	mov    %al,-0x9(%ebp)
 863b5d6:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 863b5d9:	89 44 24 08          	mov    %eax,0x8(%esp)
 863b5dd:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 863b5e4:	00 
 863b5e5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 863b5e8:	89 04 24             	mov    %eax,(%esp)
 863b5eb:	e8 18 97 c4 ff       	call   8284d08 <_ZN24CTournamentDungeonReward20isCardSelectCompleteE32ENUM_TOURNAMENT_REWARD_CARD_TYPERKSt6vectorIiSaIiEE>
 863b5f0:	83 f0 01             	xor    $0x1,%eax
 863b5f3:	84 c0                	test   %al,%al
 863b5f5:	74 1a                	je     863b611 <_ZN38Timer_TournametDungeonClearStateSelect12dispatch_sigEiij+0x127>
 863b5f7:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 863b5fb:	89 44 24 08          	mov    %eax,0x8(%esp)
 863b5ff:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 863b602:	89 44 24 04          	mov    %eax,0x4(%esp)
 863b606:	8b 45 f0             	mov    -0x10(%ebp),%eax
 863b609:	89 04 24             	mov    %eax,(%esp)
 863b60c:	e8 2b 9c c4 ff       	call   828523c <_ZN24CTournamentDungeonReward15ForceSelectCardERSt6vectorIiSaIiEEb>
 863b611:	8d 45 e0             	lea    -0x20(%ebp),%eax
 863b614:	89 44 24 04          	mov    %eax,0x4(%esp)
 863b618:	8b 45 f0             	mov    -0x10(%ebp),%eax
 863b61b:	89 04 24             	mov    %eax,(%esp)
 863b61e:	e8 81 99 c4 ff       	call   8284fa4 <_ZN24CTournamentDungeonReward16MakeSelectPacketEP11PacketGuard>
 863b623:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 863b62a:	00 
 863b62b:	8d 45 e0             	lea    -0x20(%ebp),%eax
 863b62e:	89 04 24             	mov    %eax,(%esp)
 863b631:	e8 22 03 a9 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 863b636:	8d 45 e0             	lea    -0x20(%ebp),%eax
 863b639:	89 44 24 04          	mov    %eax,0x4(%esp)
 863b63d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 863b640:	89 04 24             	mov    %eax,(%esp)
 863b643:	e8 06 1b f6 ff       	call   859d14e <_ZN6CParty13send_to_partyER11PacketGuard>
 863b648:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 863b64f:	00 
 863b650:	8b 45 ec             	mov    -0x14(%ebp),%eax
 863b653:	89 04 24             	mov    %eax,(%esp)
 863b656:	e8 61 20 f8 ff       	call   85bd6bc <_ZN6CParty30SetTournamentDungeonClearStateEc>
 863b65b:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 863b65f:	89 44 24 04          	mov    %eax,0x4(%esp)
 863b663:	8b 45 ec             	mov    -0x14(%ebp),%eax
 863b666:	89 04 24             	mov    %eax,(%esp)
 863b669:	e8 c8 1b f8 ff       	call   85bd236 <_ZN6CParty22TournamentDungeonClearEb>
 863b66e:	eb 15                	jmp    863b685 <_ZN38Timer_TournametDungeonClearStateSelect12dispatch_sigEiij+0x19b>
 863b670:	89 d3                	mov    %edx,%ebx
 863b672:	89 c6                	mov    %eax,%esi
 863b674:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 863b677:	89 04 24             	mov    %eax,(%esp)
 863b67a:	e8 5b 87 a4 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 863b67f:	89 f0                	mov    %esi,%eax
 863b681:	89 da                	mov    %ebx,%edx
 863b683:	eb 0d                	jmp    863b692 <_ZN38Timer_TournametDungeonClearStateSelect12dispatch_sigEiij+0x1a8>
 863b685:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 863b688:	89 04 24             	mov    %eax,(%esp)
 863b68b:	e8 4a 87 a4 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 863b690:	eb 1b                	jmp    863b6ad <_ZN38Timer_TournametDungeonClearStateSelect12dispatch_sigEiij+0x1c3>
 863b692:	89 d3                	mov    %edx,%ebx
 863b694:	89 c6                	mov    %eax,%esi
 863b696:	8d 45 e0             	lea    -0x20(%ebp),%eax
 863b699:	89 04 24             	mov    %eax,(%esp)
 863b69c:	e8 df 27 f5 ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 863b6a1:	89 f0                	mov    %esi,%eax
 863b6a3:	89 da                	mov    %ebx,%edx
 863b6a5:	89 04 24             	mov    %eax,(%esp)
 863b6a8:	e8 a3 80 4a 00       	call   8ae3750 <_Unwind_Resume>
 863b6ad:	8d 45 e0             	lea    -0x20(%ebp),%eax
 863b6b0:	89 04 24             	mov    %eax,(%esp)
 863b6b3:	e8 c8 27 f5 ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 863b6b8:	b8 01 00 00 00       	mov    $0x1,%eax
 863b6bd:	83 c4 40             	add    $0x40,%esp
 863b6c0:	5b                   	pop    %ebx
 863b6c1:	5e                   	pop    %esi
 863b6c2:	5d                   	pop    %ebp
 863b6c3:	c3                   	ret

```

```c
// Timer_TournametDungeonClearStateSelect::dispatch_sig @ 0x863b4ea

/* Timer_TournametDungeonClearStateSelect::dispatch_sig(int, int, unsigned int) */

undefined4
Timer_TournametDungeonClearStateSelect::dispatch_sig(int param_1,int param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  vector<int,std::allocator<int>> local_30 [12];
  PacketGuard local_24 [12];
  CParty *local_18;
  CParty *local_14;
  bool local_d;
  
  iVar2 = G_CGameManager();
  local_18 = (CParty *)CGameManager::GetParty(iVar2);
  if (local_18 == (CParty *)0x0) {
    uVar3 = 0;
  }
  else {
    cVar1 = CParty::check_timer_key(local_18,0x2f,param_3);
    if (cVar1 == '\x01') {
      cVar1 = CParty::GetTournamentDungeonClearState(local_18);
      if (cVar1 == '\x02') {
        PacketGuard::PacketGuard(local_24);
                    /* try { // try from 0863b56d to 0863b5b5 has its CatchHandler @ 0863b692 */
        InterfacePacketBuf::clear((InterfacePacketBuf *)local_24);
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,1,0x1cb);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,1);
        local_14 = local_18 + 0x17bc;
        std::vector<int,std::allocator<int>>::vector(local_30);
                    /* try { // try from 0863b5c3 to 0863b66d has its CatchHandler @ 0863b670 */
        CParty::GetValidPartyMember(local_18,(vector *)local_30);
        local_d = (bool)CParty::isTournamentVictory(local_18);
        cVar1 = CTournamentDungeonReward::isCardSelectComplete
                          ((CTournamentDungeonReward *)local_14,2,local_30);
        if (cVar1 != '\x01') {
          CTournamentDungeonReward::ForceSelectCard
                    ((CTournamentDungeonReward *)local_14,(vector *)local_30,local_d);
        }
        CTournamentDungeonReward::MakeSelectPacket((CTournamentDungeonReward *)local_14,local_24);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
        CParty::send_to_party(local_18,local_24);
        CParty::SetTournamentDungeonClearState(local_18,'\x03');
        CParty::TournamentDungeonClear(local_18,local_d);
                    /* try { // try from 0863b68b to 0863b68f has its CatchHandler @ 0863b692 */
        std::vector<int,std::allocator<int>>::~vector(local_30);
        PacketGuard::~PacketGuard(local_24);
      }
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

```

