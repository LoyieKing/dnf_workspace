# Timer_TournamentDugeonClearStateNotiReward

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 0863b2fe Timer_TournamentDugeonClearStateNotiReward::dispatch_sig  [0x0863b2fe-0x863b4e9] ===
 863b2fe:	55                   	push   %ebp
 863b2ff:	89 e5                	mov    %esp,%ebp
 863b301:	56                   	push   %esi
 863b302:	53                   	push   %ebx
 863b303:	83 ec 30             	sub    $0x30,%esp
 863b306:	e8 83 0e a9 ff       	call   80cc18e <_Z14G_CGameManagerv>
 863b30b:	8b 55 0c             	mov    0xc(%ebp),%edx
 863b30e:	89 54 24 04          	mov    %edx,0x4(%esp)
 863b312:	89 04 24             	mov    %eax,(%esp)
 863b315:	e8 18 9c c5 ff       	call   8294f32 <_ZN12CGameManager8GetPartyEi>
 863b31a:	89 45 f0             	mov    %eax,-0x10(%ebp)
 863b31d:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 863b321:	75 0a                	jne    863b32d <_ZN42Timer_TournamentDugeonClearStateNotiReward12dispatch_sigEiij+0x2f>
 863b323:	b8 00 00 00 00       	mov    $0x0,%eax
 863b328:	e9 b6 01 00 00       	jmp    863b4e3 <_ZN42Timer_TournamentDugeonClearStateNotiReward12dispatch_sigEiij+0x1e5>
 863b32d:	8b 45 10             	mov    0x10(%ebp),%eax
 863b330:	89 44 24 08          	mov    %eax,0x8(%esp)
 863b334:	c7 44 24 04 2e 00 00 	movl   $0x2e,0x4(%esp)
 863b33b:	00 
 863b33c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 863b33f:	89 04 24             	mov    %eax,(%esp)
 863b342:	e8 5d fb f5 ff       	call   859aea4 <_ZN6CParty15check_timer_keyE13TIMER_MESSAGEi>
 863b347:	83 f0 01             	xor    $0x1,%eax
 863b34a:	84 c0                	test   %al,%al
 863b34c:	74 0a                	je     863b358 <_ZN42Timer_TournamentDugeonClearStateNotiReward12dispatch_sigEiij+0x5a>
 863b34e:	b8 00 00 00 00       	mov    $0x0,%eax
 863b353:	e9 8b 01 00 00       	jmp    863b4e3 <_ZN42Timer_TournamentDugeonClearStateNotiReward12dispatch_sigEiij+0x1e5>
 863b358:	8b 45 f0             	mov    -0x10(%ebp),%eax
 863b35b:	89 04 24             	mov    %eax,(%esp)
 863b35e:	e8 49 23 f8 ff       	call   85bd6ac <_ZN6CParty30GetTournamentDungeonClearStateEv>
 863b363:	3c 01                	cmp    $0x1,%al
 863b365:	0f 94 c0             	sete   %al
 863b368:	84 c0                	test   %al,%al
 863b36a:	0f 84 6e 01 00 00    	je     863b4de <_ZN42Timer_TournamentDugeonClearStateNotiReward12dispatch_sigEiij+0x1e0>
 863b370:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 863b373:	89 04 24             	mov    %eax,(%esp)
 863b376:	e8 d1 29 f5 ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 863b37b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 863b37e:	89 04 24             	mov    %eax,(%esp)
 863b381:	e8 60 05 a9 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 863b386:	c7 44 24 08 ca 01 00 	movl   $0x1ca,0x8(%esp)
 863b38d:	00 
 863b38e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 863b395:	00 
 863b396:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 863b399:	89 04 24             	mov    %eax,(%esp)
 863b39c:	e8 5b 05 a9 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 863b3a1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 863b3a8:	00 
 863b3a9:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 863b3ac:	89 04 24             	mov    %eax,(%esp)
 863b3af:	e8 6c 05 a9 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 863b3b4:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 863b3bb:	e9 9c 00 00 00       	jmp    863b45c <_ZN42Timer_TournamentDugeonClearStateNotiReward12dispatch_sigEiij+0x15e>
 863b3c0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 863b3c3:	89 44 24 04          	mov    %eax,0x4(%esp)
 863b3c7:	8b 45 f0             	mov    -0x10(%ebp),%eax
 863b3ca:	89 04 24             	mov    %eax,(%esp)
 863b3cd:	e8 92 a3 b0 ff       	call   8145764 <_ZN6CParty8get_userEi>
 863b3d2:	85 c0                	test   %eax,%eax
 863b3d4:	0f 94 c0             	sete   %al
 863b3d7:	84 c0                	test   %al,%al
 863b3d9:	74 15                	je     863b3f0 <_ZN42Timer_TournamentDugeonClearStateNotiReward12dispatch_sigEiij+0xf2>
 863b3db:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 863b3e2:	ff 
 863b3e3:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 863b3e6:	89 04 24             	mov    %eax,(%esp)
 863b3e9:	e8 32 05 a9 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 863b3ee:	eb 68                	jmp    863b458 <_ZN42Timer_TournamentDugeonClearStateNotiReward12dispatch_sigEiij+0x15a>
 863b3f0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 863b3f3:	89 44 24 04          	mov    %eax,0x4(%esp)
 863b3f7:	8b 45 f0             	mov    -0x10(%ebp),%eax
 863b3fa:	89 04 24             	mov    %eax,(%esp)
 863b3fd:	e8 62 a3 b0 ff       	call   8145764 <_ZN6CParty8get_userEi>
 863b402:	89 04 24             	mov    %eax,(%esp)
 863b405:	e8 5c c3 01 00       	call   8657766 <_ZNK5CUser24getCurCharacTotalFatigueEv>
 863b40a:	89 c3                	mov    %eax,%ebx
 863b40c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 863b40f:	89 44 24 04          	mov    %eax,0x4(%esp)
 863b413:	8b 45 f0             	mov    -0x10(%ebp),%eax
 863b416:	89 04 24             	mov    %eax,(%esp)
 863b419:	e8 46 a3 b0 ff       	call   8145764 <_ZN6CParty8get_userEi>
 863b41e:	89 04 24             	mov    %eax,(%esp)
 863b421:	e8 de c3 01 00       	call   8657804 <_ZNK5CUser27getCurCharacTotalMaxFatigueEv>
 863b426:	66 39 c3             	cmp    %ax,%bx
 863b429:	0f 94 c0             	sete   %al
 863b42c:	84 c0                	test   %al,%al
 863b42e:	74 15                	je     863b445 <_ZN42Timer_TournamentDugeonClearStateNotiReward12dispatch_sigEiij+0x147>
 863b430:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 863b437:	00 
 863b438:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 863b43b:	89 04 24             	mov    %eax,(%esp)
 863b43e:	e8 dd 04 a9 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 863b443:	eb 13                	jmp    863b458 <_ZN42Timer_TournamentDugeonClearStateNotiReward12dispatch_sigEiij+0x15a>
 863b445:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 863b44c:	00 
 863b44d:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 863b450:	89 04 24             	mov    %eax,(%esp)
 863b453:	e8 c8 04 a9 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 863b458:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 863b45c:	83 7d f4 03          	cmpl   $0x3,-0xc(%ebp)
 863b460:	0f 9e c0             	setle  %al
 863b463:	84 c0                	test   %al,%al
 863b465:	0f 85 55 ff ff ff    	jne    863b3c0 <_ZN42Timer_TournamentDugeonClearStateNotiReward12dispatch_sigEiij+0xc2>
 863b46b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 863b472:	00 
 863b473:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 863b476:	89 04 24             	mov    %eax,(%esp)
 863b479:	e8 da 04 a9 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 863b47e:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 863b481:	89 44 24 04          	mov    %eax,0x4(%esp)
 863b485:	8b 45 f0             	mov    -0x10(%ebp),%eax
 863b488:	89 04 24             	mov    %eax,(%esp)
 863b48b:	e8 be 1c f6 ff       	call   859d14e <_ZN6CParty13send_to_partyER11PacketGuard>
 863b490:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 863b497:	00 
 863b498:	8b 45 f0             	mov    -0x10(%ebp),%eax
 863b49b:	89 04 24             	mov    %eax,(%esp)
 863b49e:	e8 19 22 f8 ff       	call   85bd6bc <_ZN6CParty30SetTournamentDungeonClearStateEc>
 863b4a3:	c7 44 24 04 2f 00 00 	movl   $0x2f,0x4(%esp)
 863b4aa:	00 
 863b4ab:	8b 45 f0             	mov    -0x10(%ebp),%eax
 863b4ae:	89 04 24             	mov    %eax,(%esp)
 863b4b1:	e8 28 22 f8 ff       	call   85bd6de <_ZN6CParty28InsertTournamentDungeonTimerE13TIMER_MESSAGE>
 863b4b6:	eb 1b                	jmp    863b4d3 <_ZN42Timer_TournamentDugeonClearStateNotiReward12dispatch_sigEiij+0x1d5>
 863b4b8:	89 d3                	mov    %edx,%ebx
 863b4ba:	89 c6                	mov    %eax,%esi
 863b4bc:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 863b4bf:	89 04 24             	mov    %eax,(%esp)
 863b4c2:	e8 b9 29 f5 ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 863b4c7:	89 f0                	mov    %esi,%eax
 863b4c9:	89 da                	mov    %ebx,%edx
 863b4cb:	89 04 24             	mov    %eax,(%esp)
 863b4ce:	e8 7d 82 4a 00       	call   8ae3750 <_Unwind_Resume>
 863b4d3:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 863b4d6:	89 04 24             	mov    %eax,(%esp)
 863b4d9:	e8 a2 29 f5 ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 863b4de:	b8 01 00 00 00       	mov    $0x1,%eax
 863b4e3:	83 c4 30             	add    $0x30,%esp
 863b4e6:	5b                   	pop    %ebx
 863b4e7:	5e                   	pop    %esi
 863b4e8:	5d                   	pop    %ebp
 863b4e9:	c3                   	ret

```

```c
// Timer_TournamentDugeonClearStateNotiReward::dispatch_sig @ 0x863b2fe

/* Timer_TournamentDugeonClearStateNotiReward::dispatch_sig(int, int, unsigned int) */

undefined4
Timer_TournamentDugeonClearStateNotiReward::dispatch_sig(int param_1,int param_2,uint param_3)

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
    cVar1 = CParty::check_timer_key(local_14,0x2e,param_3);
    if (cVar1 == '\x01') {
      cVar1 = CParty::GetTournamentDungeonClearState(local_14);
      if (cVar1 == '\x01') {
        PacketGuard::PacketGuard(local_20);
                    /* try { // try from 0863b381 to 0863b4b5 has its CatchHandler @ 0863b4b8 */
        InterfacePacketBuf::clear((InterfacePacketBuf *)local_20);
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,1,0x1ca);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,1);
        for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
          iVar4 = CParty::get_user(local_14,local_10);
          if (iVar4 == 0) {
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,-1);
          }
          else {
            pCVar6 = (CUser *)CParty::get_user(local_14,local_10);
            sVar2 = CUser::getCurCharacTotalFatigue(pCVar6);
            pCVar6 = (CUser *)CParty::get_user(local_14,local_10);
            sVar3 = CUser::getCurCharacTotalMaxFatigue(pCVar6);
            if (sVar2 == sVar3) {
              InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,0);
            }
            else {
              InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,1);
            }
          }
        }
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
        CParty::send_to_party(local_14,local_20);
        CParty::SetTournamentDungeonClearState(local_14,'\x02');
        CParty::InsertTournamentDungeonTimer(local_14,0x2f);
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

