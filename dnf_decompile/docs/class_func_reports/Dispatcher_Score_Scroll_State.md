# Dispatcher_Score_Scroll_State

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 081ff344 Dispatcher_Score_Scroll_State::dispatch_sig  [0x081ff344-0x81ff503] ===
 81ff344:	55                   	push   %ebp
 81ff345:	89 e5                	mov    %esp,%ebp
 81ff347:	56                   	push   %esi
 81ff348:	53                   	push   %ebx
 81ff349:	83 ec 30             	sub    $0x30,%esp
 81ff34c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ff34f:	89 04 24             	mov    %eax,(%esp)
 81ff352:	e8 35 b0 ed ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81ff357:	83 f8 05             	cmp    $0x5,%eax
 81ff35a:	0f 95 c0             	setne  %al
 81ff35d:	84 c0                	test   %al,%al
 81ff35f:	74 0a                	je     81ff36b <_ZN29Dispatcher_Score_Scroll_State12dispatch_sigEP5CUserR9PacketBuf+0x27>
 81ff361:	bb 00 00 00 00       	mov    $0x0,%ebx
 81ff366:	e9 8f 01 00 00       	jmp    81ff4fa <_ZN29Dispatcher_Score_Scroll_State12dispatch_sigEP5CUserR9PacketBuf+0x1b6>
 81ff36b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ff36e:	89 04 24             	mov    %eax,(%esp)
 81ff371:	e8 d8 0a 03 00       	call   822fe4e <_ZN5CUser13GetPartyIndexEv>
 81ff376:	0f bf d8             	movswl %ax,%ebx
 81ff379:	e8 10 ce ec ff       	call   80cc18e <_Z14G_CGameManagerv>
 81ff37e:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81ff382:	89 04 24             	mov    %eax,(%esp)
 81ff385:	e8 a8 5b 09 00       	call   8294f32 <_ZN12CGameManager8GetPartyEi>
 81ff38a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81ff38d:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81ff391:	0f 94 c0             	sete   %al
 81ff394:	84 c0                	test   %al,%al
 81ff396:	74 2b                	je     81ff3c3 <_ZN29Dispatcher_Score_Scroll_State12dispatch_sigEP5CUserR9PacketBuf+0x7f>
 81ff398:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81ff39f:	00 
 81ff3a0:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81ff3a7:	00 
 81ff3a8:	c7 44 24 04 c0 f9 bc 	movl   $0x8bcf9c0,0x4(%esp)
 81ff3af:	08 
 81ff3b0:	c7 04 24 fa 92 00 00 	movl   $0x92fa,(%esp)
 81ff3b7:	e8 1b 15 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81ff3bc:	89 c3                	mov    %eax,%ebx
 81ff3be:	e9 37 01 00 00       	jmp    81ff4fa <_ZN29Dispatcher_Score_Scroll_State12dispatch_sigEP5CUserR9PacketBuf+0x1b6>
 81ff3c3:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ff3c6:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ff3ca:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81ff3cd:	89 04 24             	mov    %eax,(%esp)
 81ff3d0:	e8 03 4c 3b 00       	call   85b3fd8 <_ZN6CParty22CheckRecvFromAllMemberEP5CUser>
 81ff3d5:	83 f0 01             	xor    $0x1,%eax
 81ff3d8:	84 c0                	test   %al,%al
 81ff3da:	74 0a                	je     81ff3e6 <_ZN29Dispatcher_Score_Scroll_State12dispatch_sigEP5CUserR9PacketBuf+0xa2>
 81ff3dc:	bb 00 00 00 00       	mov    $0x0,%ebx
 81ff3e1:	e9 14 01 00 00       	jmp    81ff4fa <_ZN29Dispatcher_Score_Scroll_State12dispatch_sigEP5CUserR9PacketBuf+0x1b6>
 81ff3e6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81ff3e9:	89 04 24             	mov    %eax,(%esp)
 81ff3ec:	e8 ab e4 02 00       	call   822d89c <_ZN6CParty23get_dungeon_clear_stateEv>
 81ff3f1:	3c 02                	cmp    $0x2,%al
 81ff3f3:	0f 9f c0             	setg   %al
 81ff3f6:	84 c0                	test   %al,%al
 81ff3f8:	74 44                	je     81ff43e <_ZN29Dispatcher_Score_Scroll_State12dispatch_sigEP5CUserR9PacketBuf+0xfa>
 81ff3fa:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ff3fd:	89 04 24             	mov    %eax,(%esp)
 81ff400:	e8 55 a5 ef ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 81ff405:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81ff40c:	00 
 81ff40d:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81ff414:	00 
 81ff415:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81ff41c:	00 
 81ff41d:	c7 44 24 08 97 01 00 	movl   $0x197,0x8(%esp)
 81ff424:	00 
 81ff425:	8b 55 0c             	mov    0xc(%ebp),%edx
 81ff428:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ff42c:	89 04 24             	mov    %eax,(%esp)
 81ff42f:	e8 4a 98 ef ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 81ff434:	bb 00 00 00 00       	mov    $0x0,%ebx
 81ff439:	e9 bc 00 00 00       	jmp    81ff4fa <_ZN29Dispatcher_Score_Scroll_State12dispatch_sigEP5CUserR9PacketBuf+0x1b6>
 81ff43e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81ff441:	89 04 24             	mov    %eax,(%esp)
 81ff444:	e8 03 e9 38 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81ff449:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81ff44c:	89 04 24             	mov    %eax,(%esp)
 81ff44f:	e8 92 c4 ec ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 81ff454:	c7 44 24 08 48 00 00 	movl   $0x48,0x8(%esp)
 81ff45b:	00 
 81ff45c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81ff463:	00 
 81ff464:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81ff467:	89 04 24             	mov    %eax,(%esp)
 81ff46a:	e8 8d c4 ec ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81ff46f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81ff476:	00 
 81ff477:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81ff47a:	89 04 24             	mov    %eax,(%esp)
 81ff47d:	e8 9e c4 ec ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81ff482:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81ff489:	00 
 81ff48a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81ff48d:	89 04 24             	mov    %eax,(%esp)
 81ff490:	e8 c3 c4 ec ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81ff495:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81ff498:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ff49c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81ff49f:	89 04 24             	mov    %eax,(%esp)
 81ff4a2:	e8 a7 dc 39 00       	call   859d14e <_ZN6CParty13send_to_partyER11PacketGuard>
 81ff4a7:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 81ff4ae:	00 
 81ff4af:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81ff4b2:	89 04 24             	mov    %eax,(%esp)
 81ff4b5:	e8 f2 e3 02 00       	call   822d8ac <_ZN6CParty23set_dungeon_clear_stateEc>
 81ff4ba:	c7 44 24 04 1e 00 00 	movl   $0x1e,0x4(%esp)
 81ff4c1:	00 
 81ff4c2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81ff4c5:	89 04 24             	mov    %eax,(%esp)
 81ff4c8:	e8 59 2d 3b 00       	call   85b2226 <_ZN6CParty36insert_time_dungeon_score_scroll_msgEi>
 81ff4cd:	bb 00 00 00 00       	mov    $0x0,%ebx
 81ff4d2:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81ff4d5:	89 04 24             	mov    %eax,(%esp)
 81ff4d8:	e8 a3 e9 38 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81ff4dd:	eb 1b                	jmp    81ff4fa <_ZN29Dispatcher_Score_Scroll_State12dispatch_sigEP5CUserR9PacketBuf+0x1b6>
 81ff4df:	89 d3                	mov    %edx,%ebx
 81ff4e1:	89 c6                	mov    %eax,%esi
 81ff4e3:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81ff4e6:	89 04 24             	mov    %eax,(%esp)
 81ff4e9:	e8 92 e9 38 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81ff4ee:	89 f0                	mov    %esi,%eax
 81ff4f0:	89 da                	mov    %ebx,%edx
 81ff4f2:	89 04 24             	mov    %eax,(%esp)
 81ff4f5:	e8 56 42 8e 00       	call   8ae3750 <_Unwind_Resume>
 81ff4fa:	89 d8                	mov    %ebx,%eax
 81ff4fc:	83 c4 30             	add    $0x30,%esp
 81ff4ff:	5b                   	pop    %ebx
 81ff500:	5e                   	pop    %esi
 81ff501:	5d                   	pop    %ebp
 81ff502:	c3                   	ret
 81ff503:	90                   	nop

```

```c
// Dispatcher_Score_Scroll_State::dispatch_sig @ 0x81ff344

/* Dispatcher_Score_Scroll_State::dispatch_sig(CUser*, PacketBuf&) */

undefined4 Dispatcher_Score_Scroll_State::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  CHackAnalyzer *pCVar3;
  undefined4 uVar4;
  PacketGuard local_1c [12];
  CParty *local_10;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (iVar2 == 5) {
    CUser::GetPartyIndex((CUser *)param_2);
    iVar2 = G_CGameManager();
    local_10 = (CParty *)CGameManager::GetParty(iVar2);
    if (local_10 == (CParty *)0x0) {
      uVar4 = LineFunc(0x92fa,
                       "virtual int Dispatcher_Score_Scroll_State::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
    }
    else {
      cVar1 = CParty::CheckRecvFromAllMember(local_10,(CUser *)param_2);
      if (cVar1 == '\x01') {
        cVar1 = CParty::get_dungeon_clear_state(local_10);
        if (cVar1 < '\x03') {
          PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 081ff44f to 081ff4cc has its CatchHandler @ 081ff4df */
          InterfacePacketBuf::clear((InterfacePacketBuf *)local_1c);
          InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x48);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
          CParty::send_to_party(local_10,local_1c);
          CParty::set_dungeon_clear_state(local_10,'\x03');
          CParty::insert_time_dungeon_score_scroll_msg(local_10,0x1e);
          uVar4 = 0;
          PacketGuard::~PacketGuard(local_1c);
        }
        else {
          pCVar3 = (CHackAnalyzer *)CUser::getHackAnalyzer((CUser *)param_2);
          WongWork::CHackAnalyzer::addServerHackCnt(pCVar3,param_2,0x197,1,0,0);
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

