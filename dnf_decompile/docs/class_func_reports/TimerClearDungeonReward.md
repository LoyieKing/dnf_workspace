# TimerClearDungeonReward

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 0863449c TimerClearDungeonReward::dispatch_sig  [0x0863449c-0x86345d1] ===
 863449c:	55                   	push   %ebp
 863449d:	89 e5                	mov    %esp,%ebp
 863449f:	56                   	push   %esi
 86344a0:	53                   	push   %ebx
 86344a1:	83 ec 20             	sub    $0x20,%esp
 86344a4:	e8 e5 7c a9 ff       	call   80cc18e <_Z14G_CGameManagerv>
 86344a9:	8b 55 0c             	mov    0xc(%ebp),%edx
 86344ac:	89 54 24 04          	mov    %edx,0x4(%esp)
 86344b0:	89 04 24             	mov    %eax,(%esp)
 86344b3:	e8 7a 0a c6 ff       	call   8294f32 <_ZN12CGameManager8GetPartyEi>
 86344b8:	89 45 f4             	mov    %eax,-0xc(%ebp)
 86344bb:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 86344bf:	75 0a                	jne    86344cb <_ZN23TimerClearDungeonReward12dispatch_sigEiij+0x2f>
 86344c1:	b8 00 00 00 00       	mov    $0x0,%eax
 86344c6:	e9 ff 00 00 00       	jmp    86345ca <_ZN23TimerClearDungeonReward12dispatch_sigEiij+0x12e>
 86344cb:	8b 45 10             	mov    0x10(%ebp),%eax
 86344ce:	89 44 24 08          	mov    %eax,0x8(%esp)
 86344d2:	c7 44 24 04 11 00 00 	movl   $0x11,0x4(%esp)
 86344d9:	00 
 86344da:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86344dd:	89 04 24             	mov    %eax,(%esp)
 86344e0:	e8 bf 69 f6 ff       	call   859aea4 <_ZN6CParty15check_timer_keyE13TIMER_MESSAGEi>
 86344e5:	83 f0 01             	xor    $0x1,%eax
 86344e8:	84 c0                	test   %al,%al
 86344ea:	74 0a                	je     86344f6 <_ZN23TimerClearDungeonReward12dispatch_sigEiij+0x5a>
 86344ec:	b8 00 00 00 00       	mov    $0x0,%eax
 86344f1:	e9 d4 00 00 00       	jmp    86345ca <_ZN23TimerClearDungeonReward12dispatch_sigEiij+0x12e>
 86344f6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86344f9:	89 04 24             	mov    %eax,(%esp)
 86344fc:	e8 9b 93 bf ff       	call   822d89c <_ZN6CParty23get_dungeon_clear_stateEv>
 8634501:	3c 02                	cmp    $0x2,%al
 8634503:	0f 94 c0             	sete   %al
 8634506:	84 c0                	test   %al,%al
 8634508:	0f 84 b7 00 00 00    	je     86345c5 <_ZN23TimerClearDungeonReward12dispatch_sigEiij+0x129>
 863450e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8634511:	89 04 24             	mov    %eax,(%esp)
 8634514:	e8 33 98 f5 ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8634519:	8d 45 e8             	lea    -0x18(%ebp),%eax
 863451c:	89 04 24             	mov    %eax,(%esp)
 863451f:	e8 c2 73 a9 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 8634524:	c7 44 24 08 48 00 00 	movl   $0x48,0x8(%esp)
 863452b:	00 
 863452c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8634533:	00 
 8634534:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8634537:	89 04 24             	mov    %eax,(%esp)
 863453a:	e8 bd 73 a9 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 863453f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8634546:	00 
 8634547:	8d 45 e8             	lea    -0x18(%ebp),%eax
 863454a:	89 04 24             	mov    %eax,(%esp)
 863454d:	e8 ce 73 a9 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8634552:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8634559:	00 
 863455a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 863455d:	89 04 24             	mov    %eax,(%esp)
 8634560:	e8 f3 73 a9 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8634565:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8634568:	89 44 24 04          	mov    %eax,0x4(%esp)
 863456c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 863456f:	89 04 24             	mov    %eax,(%esp)
 8634572:	e8 d7 8b f6 ff       	call   859d14e <_ZN6CParty13send_to_partyER11PacketGuard>
 8634577:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 863457e:	00 
 863457f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8634582:	89 04 24             	mov    %eax,(%esp)
 8634585:	e8 22 93 bf ff       	call   822d8ac <_ZN6CParty23set_dungeon_clear_stateEc>
 863458a:	c7 44 24 04 1e 00 00 	movl   $0x1e,0x4(%esp)
 8634591:	00 
 8634592:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8634595:	89 04 24             	mov    %eax,(%esp)
 8634598:	e8 89 dc f7 ff       	call   85b2226 <_ZN6CParty36insert_time_dungeon_score_scroll_msgEi>
 863459d:	eb 1b                	jmp    86345ba <_ZN23TimerClearDungeonReward12dispatch_sigEiij+0x11e>
 863459f:	89 d3                	mov    %edx,%ebx
 86345a1:	89 c6                	mov    %eax,%esi
 86345a3:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86345a6:	89 04 24             	mov    %eax,(%esp)
 86345a9:	e8 d2 98 f5 ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 86345ae:	89 f0                	mov    %esi,%eax
 86345b0:	89 da                	mov    %ebx,%edx
 86345b2:	89 04 24             	mov    %eax,(%esp)
 86345b5:	e8 96 f1 4a 00       	call   8ae3750 <_Unwind_Resume>
 86345ba:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86345bd:	89 04 24             	mov    %eax,(%esp)
 86345c0:	e8 bb 98 f5 ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 86345c5:	b8 01 00 00 00       	mov    $0x1,%eax
 86345ca:	83 c4 20             	add    $0x20,%esp
 86345cd:	5b                   	pop    %ebx
 86345ce:	5e                   	pop    %esi
 86345cf:	5d                   	pop    %ebp
 86345d0:	c3                   	ret
 86345d1:	90                   	nop

```

```c
// TimerClearDungeonReward::dispatch_sig @ 0x863449c

/* TimerClearDungeonReward::dispatch_sig(int, int, unsigned int) */

undefined4 TimerClearDungeonReward::dispatch_sig(int param_1,int param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  PacketGuard local_1c [12];
  CParty *local_10;
  
  iVar2 = G_CGameManager();
  local_10 = (CParty *)CGameManager::GetParty(iVar2);
  if (local_10 == (CParty *)0x0) {
    uVar3 = 0;
  }
  else {
    cVar1 = CParty::check_timer_key(local_10,0x11,param_3);
    if (cVar1 == '\x01') {
      cVar1 = CParty::get_dungeon_clear_state(local_10);
      if (cVar1 == '\x02') {
        PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 0863451f to 0863459c has its CatchHandler @ 0863459f */
        InterfacePacketBuf::clear((InterfacePacketBuf *)local_1c);
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x48);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
        CParty::send_to_party(local_10,local_1c);
        CParty::set_dungeon_clear_state(local_10,'\x03');
        CParty::insert_time_dungeon_score_scroll_msg(local_10,0x1e);
        PacketGuard::~PacketGuard(local_1c);
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

