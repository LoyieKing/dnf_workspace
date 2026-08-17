# Timer_ReturnUserTimeout

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch_sig

```asm
// === 0863a4c8 Timer_ReturnUserTimeout::dispatch_sig  [0x0863a4c8-0x863a705] ===
 863a4c8:	55                   	push   %ebp
 863a4c9:	89 e5                	mov    %esp,%ebp
 863a4cb:	56                   	push   %esi
 863a4cc:	53                   	push   %ebx
 863a4cd:	83 ec 30             	sub    $0x30,%esp
 863a4d0:	e8 b9 1c a9 ff       	call   80cc18e <_Z14G_CGameManagerv>
 863a4d5:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 863a4dc:	00 
 863a4dd:	8b 55 0c             	mov    0xc(%ebp),%edx
 863a4e0:	89 54 24 04          	mov    %edx,0x4(%esp)
 863a4e4:	89 04 24             	mov    %eax,(%esp)
 863a4e7:	e8 b8 a2 c5 ff       	call   82947a4 <_ZN12CGameManager7getUserEii>
 863a4ec:	89 45 f0             	mov    %eax,-0x10(%ebp)
 863a4ef:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 863a4f3:	75 0a                	jne    863a4ff <_ZN23Timer_ReturnUserTimeout12dispatch_sigEiij+0x37>
 863a4f5:	bb 00 00 00 00       	mov    $0x0,%ebx
 863a4fa:	e9 fe 01 00 00       	jmp    863a6fd <_ZN23Timer_ReturnUserTimeout12dispatch_sigEiij+0x235>
 863a4ff:	8b 45 f0             	mov    -0x10(%ebp),%eax
 863a502:	89 04 24             	mov    %eax,(%esp)
 863a505:	e8 72 fe a9 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 863a50a:	0f b7 c0             	movzwl %ax,%eax
 863a50d:	3b 45 10             	cmp    0x10(%ebp),%eax
 863a510:	0f 95 c0             	setne  %al
 863a513:	84 c0                	test   %al,%al
 863a515:	74 0a                	je     863a521 <_ZN23Timer_ReturnUserTimeout12dispatch_sigEiij+0x59>
 863a517:	bb 00 00 00 00       	mov    $0x0,%ebx
 863a51c:	e9 dc 01 00 00       	jmp    863a6fd <_ZN23Timer_ReturnUserTimeout12dispatch_sigEiij+0x235>
 863a521:	8b 45 f0             	mov    -0x10(%ebp),%eax
 863a524:	89 04 24             	mov    %eax,(%esp)
 863a527:	e8 5c 22 eb ff       	call   84ec788 <_ZN5CUser15ResetReturnUserEv>
 863a52c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 863a52f:	89 04 24             	mov    %eax,(%esp)
 863a532:	e8 15 38 f5 ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 863a537:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 863a53a:	89 04 24             	mov    %eax,(%esp)
 863a53d:	e8 a4 13 a9 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 863a542:	c7 44 24 08 2d 01 00 	movl   $0x12d,0x8(%esp)
 863a549:	00 
 863a54a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 863a551:	00 
 863a552:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 863a555:	89 04 24             	mov    %eax,(%esp)
 863a558:	e8 9f 13 a9 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 863a55d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 863a564:	00 
 863a565:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 863a568:	89 04 24             	mov    %eax,(%esp)
 863a56b:	e8 cc 13 a9 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 863a570:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 863a577:	00 
 863a578:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 863a57b:	89 04 24             	mov    %eax,(%esp)
 863a57e:	e8 d5 13 a9 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 863a583:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 863a586:	89 44 24 04          	mov    %eax,0x4(%esp)
 863a58a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 863a58d:	89 04 24             	mov    %eax,(%esp)
 863a590:	e8 25 e0 00 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 863a595:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 863a598:	89 04 24             	mov    %eax,(%esp)
 863a59b:	e8 46 13 a9 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 863a5a0:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 863a5a7:	00 
 863a5a8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 863a5af:	00 
 863a5b0:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 863a5b3:	89 04 24             	mov    %eax,(%esp)
 863a5b6:	e8 41 13 a9 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 863a5bb:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 863a5c2:	00 
 863a5c3:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 863a5c6:	89 04 24             	mov    %eax,(%esp)
 863a5c9:	e8 52 13 a9 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 863a5ce:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 863a5d5:	00 
 863a5d6:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 863a5d9:	89 04 24             	mov    %eax,(%esp)
 863a5dc:	e8 c3 f8 a9 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 863a5e1:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 863a5e4:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 863a5eb:	00 
 863a5ec:	89 44 24 04          	mov    %eax,0x4(%esp)
 863a5f0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 863a5f3:	89 04 24             	mov    %eax,(%esp)
 863a5f6:	e8 53 fe 01 00       	call   865a44e <_ZN5CUser15make_basic_infoEPcc>
 863a5fb:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 863a602:	00 
 863a603:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 863a606:	89 04 24             	mov    %eax,(%esp)
 863a609:	e8 4a 13 a9 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 863a60e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 863a611:	89 04 24             	mov    %eax,(%esp)
 863a614:	e8 33 ab 01 00       	call   865514c <_ZN5CUser8GetPartyEv>
 863a619:	89 45 f4             	mov    %eax,-0xc(%ebp)
 863a61c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 863a61f:	89 04 24             	mov    %eax,(%esp)
 863a622:	e8 65 fd a9 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 863a627:	83 f8 05             	cmp    $0x5,%eax
 863a62a:	0f 94 c0             	sete   %al
 863a62d:	84 c0                	test   %al,%al
 863a62f:	74 2e                	je     863a65f <_ZN23Timer_ReturnUserTimeout12dispatch_sigEiij+0x197>
 863a631:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 863a635:	74 14                	je     863a64b <_ZN23Timer_ReturnUserTimeout12dispatch_sigEiij+0x183>
 863a637:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 863a63a:	89 44 24 04          	mov    %eax,0x4(%esp)
 863a63e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 863a641:	89 04 24             	mov    %eax,(%esp)
 863a644:	e8 05 2b f6 ff       	call   859d14e <_ZN6CParty13send_to_partyER11PacketGuard>
 863a649:	eb 2f                	jmp    863a67a <_ZN23Timer_ReturnUserTimeout12dispatch_sigEiij+0x1b2>
 863a64b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 863a64e:	89 44 24 04          	mov    %eax,0x4(%esp)
 863a652:	8b 45 f0             	mov    -0x10(%ebp),%eax
 863a655:	89 04 24             	mov    %eax,(%esp)
 863a658:	e8 5d df 00 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 863a65d:	eb 1b                	jmp    863a67a <_ZN23Timer_ReturnUserTimeout12dispatch_sigEiij+0x1b2>
 863a65f:	e8 43 fd a9 ff       	call   80da3a7 <_Z11G_GameWorldv>
 863a664:	8b 55 f0             	mov    -0x10(%ebp),%edx
 863a667:	89 54 24 08          	mov    %edx,0x8(%esp)
 863a66b:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 863a66e:	89 54 24 04          	mov    %edx,0x4(%esp)
 863a672:	89 04 24             	mov    %eax,(%esp)
 863a675:	e8 e2 a2 af ff       	call   813495c <_ZN9GameWorld8send_allER11PacketGuardP5CUser>
 863a67a:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 863a67e:	74 50                	je     863a6d0 <_ZN23Timer_ReturnUserTimeout12dispatch_sigEiij+0x208>
 863a680:	8b 45 f4             	mov    -0xc(%ebp),%eax
 863a683:	89 04 24             	mov    %eax,(%esp)
 863a686:	e8 c5 f8 f7 ff       	call   85b9f50 <_ZN6CParty17IsReturnUserPartyEv>
 863a68b:	83 f0 01             	xor    $0x1,%eax
 863a68e:	84 c0                	test   %al,%al
 863a690:	75 12                	jne    863a6a4 <_ZN23Timer_ReturnUserTimeout12dispatch_sigEiij+0x1dc>
 863a692:	8b 45 f4             	mov    -0xc(%ebp),%eax
 863a695:	89 04 24             	mov    %eax,(%esp)
 863a698:	e8 37 f9 f7 ff       	call   85b9fd4 <_ZN6CParty18IsEventCharacPartyEv>
 863a69d:	83 f0 01             	xor    $0x1,%eax
 863a6a0:	84 c0                	test   %al,%al
 863a6a2:	74 07                	je     863a6ab <_ZN23Timer_ReturnUserTimeout12dispatch_sigEiij+0x1e3>
 863a6a4:	b8 01 00 00 00       	mov    $0x1,%eax
 863a6a9:	eb 05                	jmp    863a6b0 <_ZN23Timer_ReturnUserTimeout12dispatch_sigEiij+0x1e8>
 863a6ab:	b8 00 00 00 00       	mov    $0x0,%eax
 863a6b0:	84 c0                	test   %al,%al
 863a6b2:	74 1c                	je     863a6d0 <_ZN23Timer_ReturnUserTimeout12dispatch_sigEiij+0x208>
 863a6b4:	e8 ee fc a9 ff       	call   80da3a7 <_Z11G_GameWorldv>
 863a6b9:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 863a6c0:	00 
 863a6c1:	8b 55 f4             	mov    -0xc(%ebp),%edx
 863a6c4:	89 54 24 04          	mov    %edx,0x4(%esp)
 863a6c8:	89 04 24             	mov    %eax,(%esp)
 863a6cb:	e8 ba e0 08 00       	call   86c878a <_ZN9GameWorld22send_party_info_to_allEP6CPartyi>
 863a6d0:	bb 01 00 00 00       	mov    $0x1,%ebx
 863a6d5:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 863a6d8:	89 04 24             	mov    %eax,(%esp)
 863a6db:	e8 a0 37 f5 ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 863a6e0:	eb 1b                	jmp    863a6fd <_ZN23Timer_ReturnUserTimeout12dispatch_sigEiij+0x235>
 863a6e2:	89 d3                	mov    %edx,%ebx
 863a6e4:	89 c6                	mov    %eax,%esi
 863a6e6:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 863a6e9:	89 04 24             	mov    %eax,(%esp)
 863a6ec:	e8 8f 37 f5 ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 863a6f1:	89 f0                	mov    %esi,%eax
 863a6f3:	89 da                	mov    %ebx,%edx
 863a6f5:	89 04 24             	mov    %eax,(%esp)
 863a6f8:	e8 53 90 4a 00       	call   8ae3750 <_Unwind_Resume>
 863a6fd:	89 d8                	mov    %ebx,%eax
 863a6ff:	83 c4 30             	add    $0x30,%esp
 863a702:	5b                   	pop    %ebx
 863a703:	5e                   	pop    %esi
 863a704:	5d                   	pop    %ebp
 863a705:	c3                   	ret

```

```c
// Timer_ReturnUserTimeout::dispatch_sig @ 0x863a4c8

/* Timer_ReturnUserTimeout::dispatch_sig(int, int, unsigned int) */

undefined4 Timer_ReturnUserTimeout::dispatch_sig(int param_1,int param_2,uint param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  GameWorld *pGVar5;
  PacketGuard local_20 [12];
  CUser *local_14;
  CParty *local_10;
  
  iVar3 = G_CGameManager();
  local_14 = (CUser *)CGameManager::getUser(iVar3,param_2);
  if (local_14 == (CUser *)0x0) {
    return 0;
  }
  uVar4 = CUser::get_unique_id(local_14);
  if ((uVar4 & 0xffff) == param_3) {
    CUser::ResetReturnUser(local_14);
    PacketGuard::PacketGuard(local_20);
                    /* try { // try from 0863a53d to 0863a6cf has its CatchHandler @ 0863a6e2 */
    InterfacePacketBuf::clear((InterfacePacketBuf *)local_20);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0x12d);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,0);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
    CUser::Send(local_14,local_20);
    InterfacePacketBuf::clear((InterfacePacketBuf *)local_20);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,2);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,0);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_20,1);
    CUser::make_basic_info(local_14,(char *)local_20,'\0');
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
    local_10 = (CParty *)CUser::GetParty(local_14);
    iVar3 = CUser::get_state(local_14);
    if (iVar3 == 5) {
      if (local_10 == (CParty *)0x0) {
        CUser::Send(local_14,local_20);
      }
      else {
        CParty::send_to_party(local_10,local_20);
      }
    }
    else {
      pGVar5 = (GameWorld *)G_GameWorld();
      GameWorld::send_all(pGVar5,local_20,local_14);
    }
    if (local_10 != (CParty *)0x0) {
      cVar2 = CParty::IsReturnUserParty(local_10);
      if ((cVar2 == '\x01') && (cVar2 = CParty::IsEventCharacParty(local_10), cVar2 == '\x01')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        pGVar5 = (GameWorld *)G_GameWorld();
        GameWorld::send_party_info_to_all(pGVar5,local_10,1);
      }
    }
    PacketGuard::~PacketGuard(local_20);
    return 1;
  }
  return 0;
}

```

---

## registNextTimer

```asm
// === 0863a706 Timer_ReturnUserTimeout::registNextTimer  [0x0863a706-0x863a75f] ===
 863a706:	55                   	push   %ebp
 863a707:	89 e5                	mov    %esp,%ebp
 863a709:	83 ec 38             	sub    $0x38,%esp
 863a70c:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 863a713:	e8 86 15 a9 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 863a718:	8b 55 10             	mov    0x10(%ebp),%edx
 863a71b:	89 d1                	mov    %edx,%ecx
 863a71d:	29 c1                	sub    %eax,%ecx
 863a71f:	89 c8                	mov    %ecx,%eax
 863a721:	89 45 f4             	mov    %eax,-0xc(%ebp)
 863a724:	e8 53 bd ab ff       	call   80f647c <_Z12G_TimerQueuev>
 863a729:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 863a730:	00 
 863a731:	8b 55 0c             	mov    0xc(%ebp),%edx
 863a734:	89 54 24 14          	mov    %edx,0x14(%esp)
 863a738:	8b 55 f4             	mov    -0xc(%ebp),%edx
 863a73b:	89 54 24 10          	mov    %edx,0x10(%esp)
 863a73f:	c7 44 24 0c 95 00 00 	movl   $0x95,0xc(%esp)
 863a746:	00 
 863a747:	8b 55 08             	mov    0x8(%ebp),%edx
 863a74a:	89 54 24 08          	mov    %edx,0x8(%esp)
 863a74e:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 863a755:	00 
 863a756:	89 04 24             	mov    %eax,(%esp)
 863a759:	e8 b8 66 ff ff       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 863a75e:	c9                   	leave
 863a75f:	c3                   	ret

```

```c
// Timer_ReturnUserTimeout::registNextTimer @ 0x863a706

/* Timer_ReturnUserTimeout::registNextTimer(int, int, unsigned int) */

void Timer_ReturnUserTimeout::registNextTimer(int param_1,int param_2,uint param_3)

{
  int iVar1;
  TimerQueue *pTVar2;
  
  iVar1 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  pTVar2 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar2,2,param_1,0x95,param_3 - iVar1,param_2,0);
  return;
}

```

