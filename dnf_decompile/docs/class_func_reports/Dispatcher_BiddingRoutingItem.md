# Dispatcher_BiddingRoutingItem

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 082255ca Dispatcher_BiddingRoutingItem::dispatch_sig  [0x082255ca-0x822577d] ===
 82255ca:	55                   	push   %ebp
 82255cb:	89 e5                	mov    %esp,%ebp
 82255cd:	56                   	push   %esi
 82255ce:	53                   	push   %ebx
 82255cf:	83 ec 30             	sub    $0x30,%esp
 82255d2:	8b 45 0c             	mov    0xc(%ebp),%eax
 82255d5:	89 04 24             	mov    %eax,(%esp)
 82255d8:	e8 af 4d eb ff       	call   80da38c <_ZN5CUser9get_stateEv>
 82255dd:	83 f8 05             	cmp    $0x5,%eax
 82255e0:	74 2a                	je     822560c <_ZN29Dispatcher_BiddingRoutingItem12dispatch_sigEP5CUserR9PacketBuf+0x42>
 82255e2:	83 f8 0c             	cmp    $0xc,%eax
 82255e5:	74 28                	je     822560f <_ZN29Dispatcher_BiddingRoutingItem12dispatch_sigEP5CUserR9PacketBuf+0x45>
 82255e7:	c7 44 24 08 13 00 00 	movl   $0x13,0x8(%esp)
 82255ee:	00 
 82255ef:	c7 44 24 04 2d 01 00 	movl   $0x12d,0x4(%esp)
 82255f6:	00 
 82255f7:	8b 45 0c             	mov    0xc(%ebp),%eax
 82255fa:	89 04 24             	mov    %eax,(%esp)
 82255fd:	e8 40 69 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8225602:	b8 00 00 00 00       	mov    $0x0,%eax
 8225607:	e9 6a 01 00 00       	jmp    8225776 <_ZN29Dispatcher_BiddingRoutingItem12dispatch_sigEP5CUserR9PacketBuf+0x1ac>
 822560c:	90                   	nop
 822560d:	eb 01                	jmp    8225610 <_ZN29Dispatcher_BiddingRoutingItem12dispatch_sigEP5CUserR9PacketBuf+0x46>
 822560f:	90                   	nop
 8225610:	8b 45 0c             	mov    0xc(%ebp),%eax
 8225613:	89 04 24             	mov    %eax,(%esp)
 8225616:	e8 31 fb 42 00       	call   865514c <_ZN5CUser8GetPartyEv>
 822561b:	89 45 f0             	mov    %eax,-0x10(%ebp)
 822561e:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8225622:	75 25                	jne    8225649 <_ZN29Dispatcher_BiddingRoutingItem12dispatch_sigEP5CUserR9PacketBuf+0x7f>
 8225624:	c7 44 24 08 13 00 00 	movl   $0x13,0x8(%esp)
 822562b:	00 
 822562c:	c7 44 24 04 2d 01 00 	movl   $0x12d,0x4(%esp)
 8225633:	00 
 8225634:	8b 45 0c             	mov    0xc(%ebp),%eax
 8225637:	89 04 24             	mov    %eax,(%esp)
 822563a:	e8 03 69 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 822563f:	b8 00 00 00 00       	mov    $0x0,%eax
 8225644:	e9 2d 01 00 00       	jmp    8225776 <_ZN29Dispatcher_BiddingRoutingItem12dispatch_sigEP5CUserR9PacketBuf+0x1ac>
 8225649:	c6 45 ef 00          	movb   $0x0,-0x11(%ebp)
 822564d:	8d 45 ef             	lea    -0x11(%ebp),%eax
 8225650:	89 44 24 04          	mov    %eax,0x4(%esp)
 8225654:	8b 45 10             	mov    0x10(%ebp),%eax
 8225657:	89 04 24             	mov    %eax,(%esp)
 822565a:	e8 c3 78 36 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 822565f:	83 f0 01             	xor    $0x1,%eax
 8225662:	84 c0                	test   %al,%al
 8225664:	74 25                	je     822568b <_ZN29Dispatcher_BiddingRoutingItem12dispatch_sigEP5CUserR9PacketBuf+0xc1>
 8225666:	c7 44 24 08 13 00 00 	movl   $0x13,0x8(%esp)
 822566d:	00 
 822566e:	c7 44 24 04 2d 01 00 	movl   $0x12d,0x4(%esp)
 8225675:	00 
 8225676:	8b 45 0c             	mov    0xc(%ebp),%eax
 8225679:	89 04 24             	mov    %eax,(%esp)
 822567c:	e8 c1 68 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8225681:	b8 00 00 00 00       	mov    $0x0,%eax
 8225686:	e9 eb 00 00 00       	jmp    8225776 <_ZN29Dispatcher_BiddingRoutingItem12dispatch_sigEP5CUserR9PacketBuf+0x1ac>
 822568b:	e8 fe 6a ea ff       	call   80cc18e <_Z14G_CGameManagerv>
 8225690:	89 04 24             	mov    %eax,(%esp)
 8225693:	e8 2c 39 07 00       	call   8298fc4 <_ZN12CGameManager28GetSpecialItemRoutingManagerEv>
 8225698:	89 45 f4             	mov    %eax,-0xc(%ebp)
 822569b:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
 822569f:	0f be c0             	movsbl %al,%eax
 82256a2:	89 44 24 0c          	mov    %eax,0xc(%esp)
 82256a6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82256a9:	89 44 24 08          	mov    %eax,0x8(%esp)
 82256ad:	8b 45 0c             	mov    0xc(%ebp),%eax
 82256b0:	89 44 24 04          	mov    %eax,0x4(%esp)
 82256b4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82256b7:	89 04 24             	mov    %eax,(%esp)
 82256ba:	e8 6f 54 3e 00       	call   860ab2e <_ZN26CSpecialItemRoutingManager21ArriveMemberSelectionEP5CUserP6CPartyc>
 82256bf:	83 f0 01             	xor    $0x1,%eax
 82256c2:	84 c0                	test   %al,%al
 82256c4:	74 25                	je     82256eb <_ZN29Dispatcher_BiddingRoutingItem12dispatch_sigEP5CUserR9PacketBuf+0x121>
 82256c6:	c7 44 24 08 13 00 00 	movl   $0x13,0x8(%esp)
 82256cd:	00 
 82256ce:	c7 44 24 04 2d 01 00 	movl   $0x12d,0x4(%esp)
 82256d5:	00 
 82256d6:	8b 45 0c             	mov    0xc(%ebp),%eax
 82256d9:	89 04 24             	mov    %eax,(%esp)
 82256dc:	e8 61 68 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 82256e1:	b8 00 00 00 00       	mov    $0x0,%eax
 82256e6:	e9 8b 00 00 00       	jmp    8225776 <_ZN29Dispatcher_BiddingRoutingItem12dispatch_sigEP5CUserR9PacketBuf+0x1ac>
 82256eb:	8d 45 e0             	lea    -0x20(%ebp),%eax
 82256ee:	89 04 24             	mov    %eax,(%esp)
 82256f1:	e8 56 86 36 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 82256f6:	c7 44 24 08 2d 01 00 	movl   $0x12d,0x8(%esp)
 82256fd:	00 
 82256fe:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8225705:	00 
 8225706:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8225709:	89 04 24             	mov    %eax,(%esp)
 822570c:	e8 eb 61 ea ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8225711:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8225718:	00 
 8225719:	8d 45 e0             	lea    -0x20(%ebp),%eax
 822571c:	89 04 24             	mov    %eax,(%esp)
 822571f:	e8 fc 61 ea ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8225724:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 822572b:	00 
 822572c:	8d 45 e0             	lea    -0x20(%ebp),%eax
 822572f:	89 04 24             	mov    %eax,(%esp)
 8225732:	e8 21 62 ea ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8225737:	8d 45 e0             	lea    -0x20(%ebp),%eax
 822573a:	89 44 24 04          	mov    %eax,0x4(%esp)
 822573e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8225741:	89 04 24             	mov    %eax,(%esp)
 8225744:	e8 71 2e 42 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8225749:	eb 1b                	jmp    8225766 <_ZN29Dispatcher_BiddingRoutingItem12dispatch_sigEP5CUserR9PacketBuf+0x19c>
 822574b:	89 d3                	mov    %edx,%ebx
 822574d:	89 c6                	mov    %eax,%esi
 822574f:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8225752:	89 04 24             	mov    %eax,(%esp)
 8225755:	e8 26 87 36 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 822575a:	89 f0                	mov    %esi,%eax
 822575c:	89 da                	mov    %ebx,%edx
 822575e:	89 04 24             	mov    %eax,(%esp)
 8225761:	e8 ea df 8b 00       	call   8ae3750 <_Unwind_Resume>
 8225766:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8225769:	89 04 24             	mov    %eax,(%esp)
 822576c:	e8 0f 87 36 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8225771:	b8 00 00 00 00       	mov    $0x0,%eax
 8225776:	83 c4 30             	add    $0x30,%esp
 8225779:	5b                   	pop    %ebx
 822577a:	5e                   	pop    %esi
 822577b:	5d                   	pop    %ebp
 822577c:	c3                   	ret
 822577d:	90                   	nop

```

```c
// Dispatcher_BiddingRoutingItem::dispatch_sig @ 0x82255ca

/* Dispatcher_BiddingRoutingItem::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_BiddingRoutingItem::dispatch_sig
          (Dispatcher_BiddingRoutingItem *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  CGameManager *this_00;
  PacketGuard local_24 [15];
  char local_15;
  CParty *local_14;
  CSpecialItemRoutingManager *local_10;
  
  iVar2 = CUser::get_state(param_1);
  if ((iVar2 == 5) || (iVar2 == 0xc)) {
    local_14 = (CParty *)CUser::GetParty(param_1);
    if (local_14 == (CParty *)0x0) {
      CUser::SendCmdErrorPacket(param_1,0x12d,0x13);
    }
    else {
      local_15 = '\0';
      cVar1 = PacketBuf::get_byte(param_2,&local_15);
      if (cVar1 == '\x01') {
        this_00 = (CGameManager *)G_CGameManager();
        local_10 = (CSpecialItemRoutingManager *)CGameManager::GetSpecialItemRoutingManager(this_00)
        ;
        cVar1 = CSpecialItemRoutingManager::ArriveMemberSelection
                          (local_10,param_1,local_14,local_15);
        if (cVar1 == '\x01') {
          PacketGuard::PacketGuard(local_24);
                    /* try { // try from 0822570c to 08225748 has its CatchHandler @ 0822574b */
          InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,1,0x12d);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,1);
          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
          CUser::Send(param_1,local_24);
          PacketGuard::~PacketGuard(local_24);
        }
        else {
          CUser::SendCmdErrorPacket(param_1,0x12d,0x13);
        }
      }
      else {
        CUser::SendCmdErrorPacket(param_1,0x12d,0x13);
      }
    }
  }
  else {
    CUser::SendCmdErrorPacket(param_1,0x12d,0x13);
  }
  return 0;
}

```

