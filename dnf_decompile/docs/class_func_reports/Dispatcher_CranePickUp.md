# Dispatcher_CranePickUp

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 0821d508 Dispatcher_CranePickUp::dispatch_sig  [0x0821d508-0x821d7f9] ===
 821d508:	55                   	push   %ebp
 821d509:	89 e5                	mov    %esp,%ebp
 821d50b:	56                   	push   %esi
 821d50c:	53                   	push   %ebx
 821d50d:	83 ec 40             	sub    $0x40,%esp
 821d510:	8b 45 0c             	mov    0xc(%ebp),%eax
 821d513:	89 04 24             	mov    %eax,(%esp)
 821d516:	e8 71 ce eb ff       	call   80da38c <_ZN5CUser9get_stateEv>
 821d51b:	83 f8 03             	cmp    $0x3,%eax
 821d51e:	0f 95 c0             	setne  %al
 821d521:	84 c0                	test   %al,%al
 821d523:	74 25                	je     821d54a <_ZN22Dispatcher_CranePickUp12dispatch_sigEP5CUserR9PacketBuf+0x42>
 821d525:	c7 44 24 08 13 00 00 	movl   $0x13,0x8(%esp)
 821d52c:	00 
 821d52d:	c7 44 24 04 e7 01 00 	movl   $0x1e7,0x4(%esp)
 821d534:	00 
 821d535:	8b 45 0c             	mov    0xc(%ebp),%eax
 821d538:	89 04 24             	mov    %eax,(%esp)
 821d53b:	e8 02 ea 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 821d540:	b8 00 00 00 00       	mov    $0x0,%eax
 821d545:	e9 a9 02 00 00       	jmp    821d7f3 <_ZN22Dispatcher_CranePickUp12dispatch_sigEP5CUserR9PacketBuf+0x2eb>
 821d54a:	8b 45 0c             	mov    0xc(%ebp),%eax
 821d54d:	89 04 24             	mov    %eax,(%esp)
 821d550:	e8 df 07 47 00       	call   868dd34 <_ZNK5CUser15isUseCraneStartEv>
 821d555:	83 f0 01             	xor    $0x1,%eax
 821d558:	84 c0                	test   %al,%al
 821d55a:	74 25                	je     821d581 <_ZN22Dispatcher_CranePickUp12dispatch_sigEP5CUserR9PacketBuf+0x79>
 821d55c:	c7 44 24 08 11 00 00 	movl   $0x11,0x8(%esp)
 821d563:	00 
 821d564:	c7 44 24 04 e7 01 00 	movl   $0x1e7,0x4(%esp)
 821d56b:	00 
 821d56c:	8b 45 0c             	mov    0xc(%ebp),%eax
 821d56f:	89 04 24             	mov    %eax,(%esp)
 821d572:	e8 cb e9 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 821d577:	b8 00 00 00 00       	mov    $0x0,%eax
 821d57c:	e9 72 02 00 00       	jmp    821d7f3 <_ZN22Dispatcher_CranePickUp12dispatch_sigEP5CUserR9PacketBuf+0x2eb>
 821d581:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 821d588:	00 
 821d589:	8b 45 0c             	mov    0xc(%ebp),%eax
 821d58c:	89 04 24             	mov    %eax,(%esp)
 821d58f:	e8 84 07 47 00       	call   868dd18 <_ZN5CUser16setUseCraneStartEb>
 821d594:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 821d59b:	c7 45 dc ff ff ff ff 	movl   $0xffffffff,-0x24(%ebp)
 821d5a2:	66 c7 45 da ff ff    	movw   $0xffff,-0x26(%ebp)
 821d5a8:	8d 45 da             	lea    -0x26(%ebp),%eax
 821d5ab:	89 44 24 04          	mov    %eax,0x4(%esp)
 821d5af:	8b 45 10             	mov    0x10(%ebp),%eax
 821d5b2:	89 04 24             	mov    %eax,(%esp)
 821d5b5:	e8 06 fa 36 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 821d5ba:	83 f0 01             	xor    $0x1,%eax
 821d5bd:	84 c0                	test   %al,%al
 821d5bf:	74 29                	je     821d5ea <_ZN22Dispatcher_CranePickUp12dispatch_sigEP5CUserR9PacketBuf+0xe2>
 821d5c1:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821d5c8:	00 
 821d5c9:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821d5d0:	00 
 821d5d1:	c7 44 24 04 20 d5 bc 	movl   $0x8bcd520,0x4(%esp)
 821d5d8:	08 
 821d5d9:	c7 04 24 22 d1 00 00 	movl   $0xd122,(%esp)
 821d5e0:	e8 f2 32 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821d5e5:	e9 09 02 00 00       	jmp    821d7f3 <_ZN22Dispatcher_CranePickUp12dispatch_sigEP5CUserR9PacketBuf+0x2eb>
 821d5ea:	8d 45 dc             	lea    -0x24(%ebp),%eax
 821d5ed:	89 44 24 04          	mov    %eax,0x4(%esp)
 821d5f1:	8b 45 10             	mov    0x10(%ebp),%eax
 821d5f4:	89 04 24             	mov    %eax,(%esp)
 821d5f7:	e8 f4 fa 36 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 821d5fc:	83 f0 01             	xor    $0x1,%eax
 821d5ff:	84 c0                	test   %al,%al
 821d601:	74 29                	je     821d62c <_ZN22Dispatcher_CranePickUp12dispatch_sigEP5CUserR9PacketBuf+0x124>
 821d603:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821d60a:	00 
 821d60b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821d612:	00 
 821d613:	c7 44 24 04 20 d5 bc 	movl   $0x8bcd520,0x4(%esp)
 821d61a:	08 
 821d61b:	c7 04 24 23 d1 00 00 	movl   $0xd123,(%esp)
 821d622:	e8 b0 32 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821d627:	e9 c7 01 00 00       	jmp    821d7f3 <_ZN22Dispatcher_CranePickUp12dispatch_sigEP5CUserR9PacketBuf+0x2eb>
 821d62c:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
 821d630:	8b 75 dc             	mov    -0x24(%ebp),%esi
 821d633:	0f b7 45 da          	movzwl -0x26(%ebp),%eax
 821d637:	0f bf d8             	movswl %ax,%ebx
 821d63a:	e8 4f eb ea ff       	call   80cc18e <_Z14G_CGameManagerv>
 821d63f:	89 04 24             	mov    %eax,(%esp)
 821d642:	e8 5f ba 07 00       	call   82990a6 <_ZN12CGameManager23GetCraneMinigameManagerEv>
 821d647:	89 74 24 08          	mov    %esi,0x8(%esp)
 821d64b:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 821d64f:	89 04 24             	mov    %eax,(%esp)
 821d652:	e8 89 e6 ec ff       	call   80ebce0 <_ZN20CraneMinigameManager13isPickSuccessEsi>
 821d657:	84 c0                	test   %al,%al
 821d659:	74 36                	je     821d691 <_ZN22Dispatcher_CranePickUp12dispatch_sigEP5CUserR9PacketBuf+0x189>
 821d65b:	0f b7 45 da          	movzwl -0x26(%ebp),%eax
 821d65f:	0f bf d8             	movswl %ax,%ebx
 821d662:	e8 27 eb ea ff       	call   80cc18e <_Z14G_CGameManagerv>
 821d667:	89 04 24             	mov    %eax,(%esp)
 821d66a:	e8 37 ba 07 00       	call   82990a6 <_ZN12CGameManager23GetCraneMinigameManagerEv>
 821d66f:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 821d673:	8b 55 0c             	mov    0xc(%ebp),%edx
 821d676:	89 54 24 04          	mov    %edx,0x4(%esp)
 821d67a:	89 04 24             	mov    %eax,(%esp)
 821d67d:	e8 f8 e6 ec ff       	call   80ebd7a <_ZN20CraneMinigameManager8sendItemEP5CUseri>
 821d682:	89 45 f0             	mov    %eax,-0x10(%ebp)
 821d685:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 821d689:	0f 94 c0             	sete   %al
 821d68c:	88 45 f7             	mov    %al,-0x9(%ebp)
 821d68f:	eb 07                	jmp    821d698 <_ZN22Dispatcher_CranePickUp12dispatch_sigEP5CUserR9PacketBuf+0x190>
 821d691:	c7 45 f0 be 00 00 00 	movl   $0xbe,-0x10(%ebp)
 821d698:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 821d69c:	83 f0 01             	xor    $0x1,%eax
 821d69f:	84 c0                	test   %al,%al
 821d6a1:	0f 84 80 00 00 00    	je     821d727 <_ZN22Dispatcher_CranePickUp12dispatch_sigEP5CUserR9PacketBuf+0x21f>
 821d6a7:	8b 75 f0             	mov    -0x10(%ebp),%esi
 821d6aa:	8b 45 0c             	mov    0xc(%ebp),%eax
 821d6ad:	89 04 24             	mov    %eax,(%esp)
 821d6b0:	e8 b9 cc eb ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 821d6b5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 821d6bc:	00 
 821d6bd:	89 04 24             	mov    %eax,(%esp)
 821d6c0:	e8 86 b9 ee ff       	call   810904b <_Z14NumberToStringji>
 821d6c5:	89 c3                	mov    %eax,%ebx
 821d6c7:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821d6ce:	00 
 821d6cf:	c7 44 24 08 35 d1 00 	movl   $0xd135,0x8(%esp)
 821d6d6:	00 
 821d6d7:	c7 44 24 04 20 d5 bc 	movl   $0x8bcd520,0x4(%esp)
 821d6de:	08 
 821d6df:	8d 45 e0             	lea    -0x20(%ebp),%eax
 821d6e2:	89 04 24             	mov    %eax,(%esp)
 821d6e5:	e8 2e 20 33 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 821d6ea:	89 74 24 0c          	mov    %esi,0xc(%esp)
 821d6ee:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 821d6f2:	c7 44 24 04 e8 33 bc 	movl   $0x8bc33e8,0x4(%esp)
 821d6f9:	08 
 821d6fa:	8d 45 e0             	lea    -0x20(%ebp),%eax
 821d6fd:	89 04 24             	mov    %eax,(%esp)
 821d700:	e8 83 20 33 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 821d705:	8b 45 f0             	mov    -0x10(%ebp),%eax
 821d708:	0f b6 c0             	movzbl %al,%eax
 821d70b:	89 44 24 08          	mov    %eax,0x8(%esp)
 821d70f:	c7 44 24 04 e7 01 00 	movl   $0x1e7,0x4(%esp)
 821d716:	00 
 821d717:	8b 45 0c             	mov    0xc(%ebp),%eax
 821d71a:	89 04 24             	mov    %eax,(%esp)
 821d71d:	e8 20 e8 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 821d722:	e9 c7 00 00 00       	jmp    821d7ee <_ZN22Dispatcher_CranePickUp12dispatch_sigEP5CUserR9PacketBuf+0x2e6>
 821d727:	8d 45 cc             	lea    -0x34(%ebp),%eax
 821d72a:	89 04 24             	mov    %eax,(%esp)
 821d72d:	e8 1a 06 37 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 821d732:	c7 44 24 08 e7 01 00 	movl   $0x1e7,0x8(%esp)
 821d739:	00 
 821d73a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 821d741:	00 
 821d742:	8d 45 cc             	lea    -0x34(%ebp),%eax
 821d745:	89 04 24             	mov    %eax,(%esp)
 821d748:	e8 af e1 ea ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 821d74d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 821d754:	00 
 821d755:	8d 45 cc             	lea    -0x34(%ebp),%eax
 821d758:	89 04 24             	mov    %eax,(%esp)
 821d75b:	e8 c0 e1 ea ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 821d760:	8b 45 dc             	mov    -0x24(%ebp),%eax
 821d763:	89 44 24 04          	mov    %eax,0x4(%esp)
 821d767:	8d 45 cc             	lea    -0x34(%ebp),%eax
 821d76a:	89 04 24             	mov    %eax,(%esp)
 821d76d:	e8 ca e1 ea ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 821d772:	0f b7 45 da          	movzwl -0x26(%ebp),%eax
 821d776:	0f bf d8             	movswl %ax,%ebx
 821d779:	e8 10 ea ea ff       	call   80cc18e <_Z14G_CGameManagerv>
 821d77e:	89 04 24             	mov    %eax,(%esp)
 821d781:	e8 20 b9 07 00       	call   82990a6 <_ZN12CGameManager23GetCraneMinigameManagerEv>
 821d786:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 821d78a:	89 04 24             	mov    %eax,(%esp)
 821d78d:	e8 b2 e5 ec ff       	call   80ebd44 <_ZN20CraneMinigameManager10getItemCntEi>
 821d792:	89 44 24 04          	mov    %eax,0x4(%esp)
 821d796:	8d 45 cc             	lea    -0x34(%ebp),%eax
 821d799:	89 04 24             	mov    %eax,(%esp)
 821d79c:	e8 03 c7 eb ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 821d7a1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 821d7a8:	00 
 821d7a9:	8d 45 cc             	lea    -0x34(%ebp),%eax
 821d7ac:	89 04 24             	mov    %eax,(%esp)
 821d7af:	e8 a4 e1 ea ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 821d7b4:	8d 45 cc             	lea    -0x34(%ebp),%eax
 821d7b7:	89 44 24 04          	mov    %eax,0x4(%esp)
 821d7bb:	8b 45 0c             	mov    0xc(%ebp),%eax
 821d7be:	89 04 24             	mov    %eax,(%esp)
 821d7c1:	e8 f4 ad 42 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 821d7c6:	eb 1b                	jmp    821d7e3 <_ZN22Dispatcher_CranePickUp12dispatch_sigEP5CUserR9PacketBuf+0x2db>
 821d7c8:	89 d3                	mov    %edx,%ebx
 821d7ca:	89 c6                	mov    %eax,%esi
 821d7cc:	8d 45 cc             	lea    -0x34(%ebp),%eax
 821d7cf:	89 04 24             	mov    %eax,(%esp)
 821d7d2:	e8 a9 06 37 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 821d7d7:	89 f0                	mov    %esi,%eax
 821d7d9:	89 da                	mov    %ebx,%edx
 821d7db:	89 04 24             	mov    %eax,(%esp)
 821d7de:	e8 6d 5f 8c 00       	call   8ae3750 <_Unwind_Resume>
 821d7e3:	8d 45 cc             	lea    -0x34(%ebp),%eax
 821d7e6:	89 04 24             	mov    %eax,(%esp)
 821d7e9:	e8 92 06 37 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 821d7ee:	b8 00 00 00 00       	mov    $0x0,%eax
 821d7f3:	83 c4 40             	add    $0x40,%esp
 821d7f6:	5b                   	pop    %ebx
 821d7f7:	5e                   	pop    %esi
 821d7f8:	5d                   	pop    %ebp
 821d7f9:	c3                   	ret

```

```c
// Dispatcher_CranePickUp::dispatch_sig @ 0x821d508

/* Dispatcher_CranePickUp::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_CranePickUp::dispatch_sig(Dispatcher_CranePickUp *this,CUser *param_1,PacketBuf *param_2)

{
  short sVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  CGameManager *pCVar6;
  CraneMinigameManager *pCVar7;
  uint uVar8;
  PacketGuard local_38 [14];
  short local_2a;
  int local_28;
  cMyTrace local_24 [16];
  uint local_14;
  char local_d;
  
  iVar4 = CUser::get_state(param_1);
  if (iVar4 == 3) {
    cVar3 = CUser::isUseCraneStart(param_1);
    if (cVar3 == '\x01') {
      CUser::setUseCraneStart(param_1,false);
      local_14 = 0;
      local_28 = -1;
      local_2a = -1;
      cVar3 = PacketBuf::get_short(param_2,&local_2a);
      if (cVar3 == '\x01') {
        cVar3 = PacketBuf::get_int(param_2,&local_28);
        iVar4 = local_28;
        sVar1 = local_2a;
        if (cVar3 == '\x01') {
          local_d = '\0';
          pCVar6 = (CGameManager *)G_CGameManager();
          pCVar7 = (CraneMinigameManager *)CGameManager::GetCraneMinigameManager(pCVar6);
          cVar3 = CraneMinigameManager::isPickSuccess(pCVar7,sVar1,iVar4);
          if (cVar3 == '\0') {
            local_14 = 0xbe;
          }
          else {
            iVar4 = (int)local_2a;
            pCVar6 = (CGameManager *)G_CGameManager();
            pCVar7 = (CraneMinigameManager *)CGameManager::GetCraneMinigameManager(pCVar6);
            local_14 = CraneMinigameManager::sendItem(pCVar7,param_1,iVar4);
            local_d = local_14 == 0;
          }
          uVar2 = local_14;
          if (local_d == '\x01') {
            PacketGuard::PacketGuard(local_38);
                    /* try { // try from 0821d748 to 0821d7c5 has its CatchHandler @ 0821d7c8 */
            InterfacePacketBuf::put_header((InterfacePacketBuf *)local_38,1,0x1e7);
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_38,1);
            InterfacePacketBuf::put_int((InterfacePacketBuf *)local_38,local_28);
            iVar4 = (int)local_2a;
            pCVar6 = (CGameManager *)G_CGameManager();
            pCVar7 = (CraneMinigameManager *)CGameManager::GetCraneMinigameManager(pCVar6);
            iVar4 = CraneMinigameManager::getItemCnt(pCVar7,iVar4);
            InterfacePacketBuf::put_short((InterfacePacketBuf *)local_38,iVar4);
            InterfacePacketBuf::finalize((InterfacePacketBuf *)local_38,true);
            CUser::Send(param_1,local_38);
            PacketGuard::~PacketGuard(local_38);
          }
          else {
            uVar8 = CUser::get_acc_id(param_1);
            uVar5 = NumberToString(uVar8,0);
            cMyTrace::cMyTrace(local_24,
                               "virtual int Dispatcher_CranePickUp::dispatch_sig(CUser*, PacketBuf&)"
                               ,0xd135,0);
            cMyTrace::operator()
                      (local_24,"ServerMessage : Dispatcher_CranePickUp failed : m_id : %s error %d"
                       ,uVar5,uVar2);
            CUser::SendCmdErrorPacket(param_1,0x1e7,local_14 & 0xff);
          }
          uVar5 = 0;
        }
        else {
          uVar5 = LineFunc(0xd123,
                           "virtual int Dispatcher_CranePickUp::dispatch_sig(CUser*, PacketBuf&)",0,
                           0);
        }
      }
      else {
        uVar5 = LineFunc(0xd122,
                         "virtual int Dispatcher_CranePickUp::dispatch_sig(CUser*, PacketBuf&)",0,0)
        ;
      }
    }
    else {
      CUser::SendCmdErrorPacket(param_1,0x1e7,0x11);
      uVar5 = 0;
    }
  }
  else {
    CUser::SendCmdErrorPacket(param_1,0x1e7,0x13);
    uVar5 = 0;
  }
  return uVar5;
}

```

