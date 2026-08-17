# Inter_NotifyAuctionMail

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084d55a4 Inter_NotifyAuctionMail::dispatch_sig  [0x084d55a4-0x84d573f] ===
 84d55a4:	55                   	push   %ebp
 84d55a5:	89 e5                	mov    %esp,%ebp
 84d55a7:	56                   	push   %esi
 84d55a8:	53                   	push   %ebx
 84d55a9:	83 ec 20             	sub    $0x20,%esp
 84d55ac:	8b 45 10             	mov    0x10(%ebp),%eax
 84d55af:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84d55b2:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d55b5:	89 04 24             	mov    %eax,(%esp)
 84d55b8:	e8 75 ae c4 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 84d55bd:	85 c0                	test   %eax,%eax
 84d55bf:	74 15                	je     84d55d6 <_ZN23Inter_NotifyAuctionMail12dispatch_sigEP5CUserPci+0x32>
 84d55c1:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d55c4:	89 04 24             	mov    %eax,(%esp)
 84d55c7:	e8 82 66 bf ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84d55cc:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84d55cf:	8b 52 0a             	mov    0xa(%edx),%edx
 84d55d2:	39 d0                	cmp    %edx,%eax
 84d55d4:	74 07                	je     84d55dd <_ZN23Inter_NotifyAuctionMail12dispatch_sigEP5CUserPci+0x39>
 84d55d6:	b8 01 00 00 00       	mov    $0x1,%eax
 84d55db:	eb 05                	jmp    84d55e2 <_ZN23Inter_NotifyAuctionMail12dispatch_sigEP5CUserPci+0x3e>
 84d55dd:	b8 00 00 00 00       	mov    $0x0,%eax
 84d55e2:	84 c0                	test   %al,%al
 84d55e4:	74 0a                	je     84d55f0 <_ZN23Inter_NotifyAuctionMail12dispatch_sigEP5CUserPci+0x4c>
 84d55e6:	bb 48 37 00 00       	mov    $0x3748,%ebx
 84d55eb:	e9 47 01 00 00       	jmp    84d5737 <_ZN23Inter_NotifyAuctionMail12dispatch_sigEP5CUserPci+0x193>
 84d55f0:	e8 b2 4d c0 ff       	call   80da3a7 <_Z11G_GameWorldv>
 84d55f5:	89 04 24             	mov    %eax,(%esp)
 84d55f8:	e8 23 15 c4 ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 84d55fd:	83 f8 07             	cmp    $0x7,%eax
 84d5600:	74 11                	je     84d5613 <_ZN23Inter_NotifyAuctionMail12dispatch_sigEP5CUserPci+0x6f>
 84d5602:	e8 a0 4d c0 ff       	call   80da3a7 <_Z11G_GameWorldv>
 84d5607:	89 04 24             	mov    %eax,(%esp)
 84d560a:	e8 0f bd c1 ff       	call   80f131e <_ZNK9GameWorld26IsIntegratedPvPBaseChannelEv>
 84d560f:	84 c0                	test   %al,%al
 84d5611:	74 07                	je     84d561a <_ZN23Inter_NotifyAuctionMail12dispatch_sigEP5CUserPci+0x76>
 84d5613:	b8 01 00 00 00       	mov    $0x1,%eax
 84d5618:	eb 05                	jmp    84d561f <_ZN23Inter_NotifyAuctionMail12dispatch_sigEP5CUserPci+0x7b>
 84d561a:	b8 00 00 00 00       	mov    $0x0,%eax
 84d561f:	84 c0                	test   %al,%al
 84d5621:	74 0a                	je     84d562d <_ZN23Inter_NotifyAuctionMail12dispatch_sigEP5CUserPci+0x89>
 84d5623:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d5628:	e9 0a 01 00 00       	jmp    84d5737 <_ZN23Inter_NotifyAuctionMail12dispatch_sigEP5CUserPci+0x193>
 84d562d:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d5630:	89 04 24             	mov    %eax,(%esp)
 84d5633:	e8 d4 ab d5 ff       	call   823020c <_ZN5CUser10GetMailBoxEv>
 84d5638:	89 04 24             	mov    %eax,(%esp)
 84d563b:	e8 f0 7c 01 00       	call   84ed330 <_ZN8WongWork8CMailBox21IncNotLoadedMailCountEv>
 84d5640:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d5643:	89 04 24             	mov    %eax,(%esp)
 84d5646:	e8 01 87 0b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84d564b:	c7 44 24 08 a9 00 00 	movl   $0xa9,0x8(%esp)
 84d5652:	00 
 84d5653:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84d565a:	00 
 84d565b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d565e:	89 04 24             	mov    %eax,(%esp)
 84d5661:	e8 96 62 bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84d5666:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d5669:	0f b6 40 17          	movzbl 0x17(%eax),%eax
 84d566d:	0f b6 c0             	movzbl %al,%eax
 84d5670:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d5674:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d5677:	89 04 24             	mov    %eax,(%esp)
 84d567a:	e8 a1 62 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d567f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d5682:	0f b6 40 12          	movzbl 0x12(%eax),%eax
 84d5686:	0f b6 c0             	movzbl %al,%eax
 84d5689:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d568d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d5690:	89 04 24             	mov    %eax,(%esp)
 84d5693:	e8 88 62 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d5698:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d569b:	8b 40 13             	mov    0x13(%eax),%eax
 84d569e:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d56a2:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d56a5:	89 04 24             	mov    %eax,(%esp)
 84d56a8:	e8 8f 62 bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84d56ad:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d56b0:	89 04 24             	mov    %eax,(%esp)
 84d56b3:	e8 54 ab d5 ff       	call   823020c <_ZN5CUser10GetMailBoxEv>
 84d56b8:	89 04 24             	mov    %eax,(%esp)
 84d56bb:	e8 9a ee d5 ff       	call   823455a <_ZN8WongWork8CMailBox21GetNotLoadedMailCountEv>
 84d56c0:	98                   	cwtl
 84d56c1:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d56c5:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d56c8:	89 04 24             	mov    %eax,(%esp)
 84d56cb:	e8 d4 47 c0 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 84d56d0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d56d3:	8d 50 18             	lea    0x18(%eax),%edx
 84d56d6:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d56d9:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d56dd:	89 14 24             	mov    %edx,(%esp)
 84d56e0:	e8 c9 9a c4 ff       	call   811f1ae <_ZNK12RandomOption24put_packet_random_optionI11PacketGuardEEvRT_>
 84d56e5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d56ec:	00 
 84d56ed:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d56f0:	89 04 24             	mov    %eax,(%esp)
 84d56f3:	e8 60 62 bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84d56f8:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d56fb:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d56ff:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d5702:	89 04 24             	mov    %eax,(%esp)
 84d5705:	e8 b0 2e 17 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84d570a:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d570f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d5712:	89 04 24             	mov    %eax,(%esp)
 84d5715:	e8 66 87 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d571a:	eb 1b                	jmp    84d5737 <_ZN23Inter_NotifyAuctionMail12dispatch_sigEP5CUserPci+0x193>
 84d571c:	89 d3                	mov    %edx,%ebx
 84d571e:	89 c6                	mov    %eax,%esi
 84d5720:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d5723:	89 04 24             	mov    %eax,(%esp)
 84d5726:	e8 55 87 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d572b:	89 f0                	mov    %esi,%eax
 84d572d:	89 da                	mov    %ebx,%edx
 84d572f:	89 04 24             	mov    %eax,(%esp)
 84d5732:	e8 19 e0 60 00       	call   8ae3750 <_Unwind_Resume>
 84d5737:	89 d8                	mov    %ebx,%eax
 84d5739:	83 c4 20             	add    $0x20,%esp
 84d573c:	5b                   	pop    %ebx
 84d573d:	5e                   	pop    %esi
 84d573e:	5d                   	pop    %ebp
 84d573f:	c3                   	ret

```

```c
// Inter_NotifyAuctionMail::dispatch_sig @ 0x84d55a4

/* Inter_NotifyAuctionMail::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_NotifyAuctionMail::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  GameWorld *pGVar5;
  CMailBox *pCVar6;
  PacketGuard local_1c [12];
  int local_10;
  
  local_10 = param_3;
  iVar4 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
  if ((iVar4 == 0) ||
     (iVar4 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2),
     iVar4 != *(int *)(local_10 + 10))) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    return 0x3748;
  }
  pGVar5 = (GameWorld *)G_GameWorld();
  iVar4 = GameWorld::GetChannelType(pGVar5);
  if (iVar4 != 7) {
    pGVar5 = (GameWorld *)G_GameWorld();
    cVar2 = GameWorld::IsIntegratedPvPBaseChannel(pGVar5);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_084d561f;
    }
  }
  bVar1 = true;
LAB_084d561f:
  if (!bVar1) {
    pCVar6 = (CMailBox *)CUser::GetMailBox((CUser *)param_2);
    WongWork::CMailBox::IncNotLoadedMailCount(pCVar6);
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084d5661 to 084d5709 has its CatchHandler @ 084d571c */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0xa9);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(uint)*(byte *)(local_10 + 0x17));
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(uint)*(byte *)(local_10 + 0x12));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0x13));
    pCVar6 = (CMailBox *)CUser::GetMailBox((CUser *)param_2);
    sVar3 = WongWork::CMailBox::GetNotLoadedMailCount(pCVar6);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,(int)sVar3);
    RandomOption::put_packet_random_option<PacketGuard>((RandomOption *)(local_10 + 0x18),local_1c);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send((CUser *)param_2,local_1c);
    PacketGuard::~PacketGuard(local_1c);
  }
  return 0;
}

```

