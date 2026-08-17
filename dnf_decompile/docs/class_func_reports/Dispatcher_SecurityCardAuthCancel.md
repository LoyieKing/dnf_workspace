# Dispatcher_SecurityCardAuthCancel

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch_sig

```asm
// === 0820a42c Dispatcher_SecurityCardAuthCancel::dispatch_sig  [0x0820a42c-0x820a57f] ===
 820a42c:	55                   	push   %ebp
 820a42d:	89 e5                	mov    %esp,%ebp
 820a42f:	83 ec 18             	sub    $0x18,%esp
 820a432:	8b 45 0c             	mov    0xc(%ebp),%eax
 820a435:	89 04 24             	mov    %eax,(%esp)
 820a438:	e8 4f ff ec ff       	call   80da38c <_ZN5CUser9get_stateEv>
 820a43d:	83 f8 01             	cmp    $0x1,%eax
 820a440:	0f 9e c0             	setle  %al
 820a443:	84 c0                	test   %al,%al
 820a445:	74 29                	je     820a470 <_ZN33Dispatcher_SecurityCardAuthCancel12dispatch_sigEP5CUserR9PacketBuf+0x44>
 820a447:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 820a44e:	00 
 820a44f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 820a456:	00 
 820a457:	c7 44 24 04 00 e4 bc 	movl   $0x8bce400,0x4(%esp)
 820a45e:	08 
 820a45f:	c7 04 24 2d a6 00 00 	movl   $0xa62d,(%esp)
 820a466:	e8 6c 64 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 820a46b:	e9 0d 01 00 00       	jmp    820a57d <_ZN33Dispatcher_SecurityCardAuthCancel12dispatch_sigEP5CUserR9PacketBuf+0x151>
 820a470:	8b 45 0c             	mov    0xc(%ebp),%eax
 820a473:	89 04 24             	mov    %eax,(%esp)
 820a476:	e8 a5 58 02 00       	call   822fd20 <_ZN5CUser15getSecurityCardEv>
 820a47b:	89 04 24             	mov    %eax,(%esp)
 820a47e:	e8 8b 4a 02 00       	call   822ef0e <_ZNK8WongWork13CSecurityCard10isActivateEv>
 820a483:	84 c0                	test   %al,%al
 820a485:	74 5f                	je     820a4e6 <_ZN33Dispatcher_SecurityCardAuthCancel12dispatch_sigEP5CUserR9PacketBuf+0xba>
 820a487:	8b 45 0c             	mov    0xc(%ebp),%eax
 820a48a:	89 04 24             	mov    %eax,(%esp)
 820a48d:	e8 8e 58 02 00       	call   822fd20 <_ZN5CUser15getSecurityCardEv>
 820a492:	89 04 24             	mov    %eax,(%esp)
 820a495:	e8 be 4a 02 00       	call   822ef58 <_ZN8WongWork13CSecurityCard15getRequestStateEv>
 820a49a:	83 f8 01             	cmp    $0x1,%eax
 820a49d:	0f 95 c0             	setne  %al
 820a4a0:	84 c0                	test   %al,%al
 820a4a2:	74 0a                	je     820a4ae <_ZN33Dispatcher_SecurityCardAuthCancel12dispatch_sigEP5CUserR9PacketBuf+0x82>
 820a4a4:	b8 00 00 00 00       	mov    $0x0,%eax
 820a4a9:	e9 cf 00 00 00       	jmp    820a57d <_ZN33Dispatcher_SecurityCardAuthCancel12dispatch_sigEP5CUserR9PacketBuf+0x151>
 820a4ae:	8b 45 0c             	mov    0xc(%ebp),%eax
 820a4b1:	89 04 24             	mov    %eax,(%esp)
 820a4b4:	e8 c7 00 00 00       	call   820a580 <_ZN33Dispatcher_SecurityCardAuthCancel7processEP5CUser>
 820a4b9:	85 c0                	test   %eax,%eax
 820a4bb:	0f 94 c0             	sete   %al
 820a4be:	84 c0                	test   %al,%al
 820a4c0:	0f 84 b2 00 00 00    	je     820a578 <_ZN33Dispatcher_SecurityCardAuthCancel12dispatch_sigEP5CUserR9PacketBuf+0x14c>
 820a4c6:	c7 44 24 08 7d 00 00 	movl   $0x7d,0x8(%esp)
 820a4cd:	00 
 820a4ce:	c7 44 24 04 af 00 00 	movl   $0xaf,0x4(%esp)
 820a4d5:	00 
 820a4d6:	8b 45 0c             	mov    0xc(%ebp),%eax
 820a4d9:	89 04 24             	mov    %eax,(%esp)
 820a4dc:	e8 61 1a 47 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 820a4e1:	e9 92 00 00 00       	jmp    820a578 <_ZN33Dispatcher_SecurityCardAuthCancel12dispatch_sigEP5CUserR9PacketBuf+0x14c>
 820a4e6:	8b 45 0c             	mov    0xc(%ebp),%eax
 820a4e9:	89 04 24             	mov    %eax,(%esp)
 820a4ec:	e8 3d 58 02 00       	call   822fd2e <_ZN5CUser6getPadEv>
 820a4f1:	89 04 24             	mov    %eax,(%esp)
 820a4f4:	e8 e1 4a 02 00       	call   822efda <_ZNK8Sanicova4CPad10isActivateEv>
 820a4f9:	84 c0                	test   %al,%al
 820a4fb:	74 55                	je     820a552 <_ZN33Dispatcher_SecurityCardAuthCancel12dispatch_sigEP5CUserR9PacketBuf+0x126>
 820a4fd:	8b 45 0c             	mov    0xc(%ebp),%eax
 820a500:	89 04 24             	mov    %eax,(%esp)
 820a503:	e8 26 58 02 00       	call   822fd2e <_ZN5CUser6getPadEv>
 820a508:	89 04 24             	mov    %eax,(%esp)
 820a50b:	e8 b0 4a 02 00       	call   822efc0 <_ZNK8Sanicova4CPad15getRequestStateEv>
 820a510:	83 f8 01             	cmp    $0x1,%eax
 820a513:	0f 95 c0             	setne  %al
 820a516:	84 c0                	test   %al,%al
 820a518:	74 07                	je     820a521 <_ZN33Dispatcher_SecurityCardAuthCancel12dispatch_sigEP5CUserR9PacketBuf+0xf5>
 820a51a:	b8 00 00 00 00       	mov    $0x0,%eax
 820a51f:	eb 5c                	jmp    820a57d <_ZN33Dispatcher_SecurityCardAuthCancel12dispatch_sigEP5CUserR9PacketBuf+0x151>
 820a521:	8b 45 0c             	mov    0xc(%ebp),%eax
 820a524:	89 04 24             	mov    %eax,(%esp)
 820a527:	e8 54 00 00 00       	call   820a580 <_ZN33Dispatcher_SecurityCardAuthCancel7processEP5CUser>
 820a52c:	85 c0                	test   %eax,%eax
 820a52e:	0f 94 c0             	sete   %al
 820a531:	84 c0                	test   %al,%al
 820a533:	74 43                	je     820a578 <_ZN33Dispatcher_SecurityCardAuthCancel12dispatch_sigEP5CUserR9PacketBuf+0x14c>
 820a535:	c7 44 24 08 8b 00 00 	movl   $0x8b,0x8(%esp)
 820a53c:	00 
 820a53d:	c7 44 24 04 af 00 00 	movl   $0xaf,0x4(%esp)
 820a544:	00 
 820a545:	8b 45 0c             	mov    0xc(%ebp),%eax
 820a548:	89 04 24             	mov    %eax,(%esp)
 820a54b:	e8 f2 19 47 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 820a550:	eb 26                	jmp    820a578 <_ZN33Dispatcher_SecurityCardAuthCancel12dispatch_sigEP5CUserR9PacketBuf+0x14c>
 820a552:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 820a559:	00 
 820a55a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 820a561:	00 
 820a562:	c7 44 24 04 00 e4 bc 	movl   $0x8bce400,0x4(%esp)
 820a569:	08 
 820a56a:	c7 04 24 50 a6 00 00 	movl   $0xa650,(%esp)
 820a571:	e8 61 63 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 820a576:	eb 05                	jmp    820a57d <_ZN33Dispatcher_SecurityCardAuthCancel12dispatch_sigEP5CUserR9PacketBuf+0x151>
 820a578:	b8 00 00 00 00       	mov    $0x0,%eax
 820a57d:	c9                   	leave
 820a57e:	c3                   	ret
 820a57f:	90                   	nop

```

```c
// Dispatcher_SecurityCardAuthCancel::dispatch_sig @ 0x820a42c

/* Dispatcher_SecurityCardAuthCancel::dispatch_sig(CUser*, PacketBuf&) */

undefined4 Dispatcher_SecurityCardAuthCancel::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  CSecurityCard *pCVar4;
  CPad *pCVar5;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (iVar2 < 2) {
    uVar3 = LineFunc(0xa62d,
                     "virtual int Dispatcher_SecurityCardAuthCancel::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
    return uVar3;
  }
  pCVar4 = (CSecurityCard *)CUser::getSecurityCard((CUser *)param_2);
  cVar1 = WongWork::CSecurityCard::isActivate(pCVar4);
  if (cVar1 == '\0') {
    pCVar5 = (CPad *)CUser::getPad((CUser *)param_2);
    cVar1 = Sanicova::CPad::isActivate(pCVar5);
    if (cVar1 == '\0') {
      uVar3 = LineFunc(0xa650,
                       "virtual int Dispatcher_SecurityCardAuthCancel::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
      return uVar3;
    }
    pCVar5 = (CPad *)CUser::getPad((CUser *)param_2);
    iVar2 = Sanicova::CPad::getRequestState(pCVar5);
    if (iVar2 != 1) {
      return 0;
    }
    iVar2 = process((CUser *)param_2);
    if (iVar2 == 0) {
      CUser::SendCmdErrorPacket((CUser *)param_2,0xaf,0x8b);
    }
  }
  else {
    pCVar4 = (CSecurityCard *)CUser::getSecurityCard((CUser *)param_2);
    iVar2 = WongWork::CSecurityCard::getRequestState(pCVar4);
    if (iVar2 != 1) {
      return 0;
    }
    iVar2 = process((CUser *)param_2);
    if (iVar2 == 0) {
      CUser::SendCmdErrorPacket((CUser *)param_2,0xaf,0x7d);
    }
  }
  return 0;
}

```

---

## process

```asm
// === 0820a580 Dispatcher_SecurityCardAuthCancel::process  [0x0820a580-0x820a6bb] ===
 820a580:	55                   	push   %ebp
 820a581:	89 e5                	mov    %esp,%ebp
 820a583:	56                   	push   %esi
 820a584:	53                   	push   %ebx
 820a585:	83 ec 10             	sub    $0x10,%esp
 820a588:	8b 45 08             	mov    0x8(%ebp),%eax
 820a58b:	89 04 24             	mov    %eax,(%esp)
 820a58e:	e8 8d 57 02 00       	call   822fd20 <_ZN5CUser15getSecurityCardEv>
 820a593:	89 04 24             	mov    %eax,(%esp)
 820a596:	e8 73 49 02 00       	call   822ef0e <_ZNK8WongWork13CSecurityCard10isActivateEv>
 820a59b:	84 c0                	test   %al,%al
 820a59d:	74 75                	je     820a614 <_ZN33Dispatcher_SecurityCardAuthCancel7processEP5CUser+0x94>
 820a59f:	8b 45 08             	mov    0x8(%ebp),%eax
 820a5a2:	89 04 24             	mov    %eax,(%esp)
 820a5a5:	e8 76 57 02 00       	call   822fd20 <_ZN5CUser15getSecurityCardEv>
 820a5aa:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820a5b1:	00 
 820a5b2:	89 04 24             	mov    %eax,(%esp)
 820a5b5:	e8 aa 49 02 00       	call   822ef64 <_ZN8WongWork13CSecurityCard15setRequestStateENS0_18ENUM_REQUEST_STATEE>
 820a5ba:	8b 45 08             	mov    0x8(%ebp),%eax
 820a5bd:	89 04 24             	mov    %eax,(%esp)
 820a5c0:	e8 5b 57 02 00       	call   822fd20 <_ZN5CUser15getSecurityCardEv>
 820a5c5:	89 04 24             	mov    %eax,(%esp)
 820a5c8:	e8 65 49 02 00       	call   822ef32 <_ZN8WongWork13CSecurityCard12incCancelCntEv>
 820a5cd:	8b 45 08             	mov    0x8(%ebp),%eax
 820a5d0:	89 04 24             	mov    %eax,(%esp)
 820a5d3:	e8 48 57 02 00       	call   822fd20 <_ZN5CUser15getSecurityCardEv>
 820a5d8:	89 04 24             	mov    %eax,(%esp)
 820a5db:	e8 6c 49 02 00       	call   822ef4c <_ZN8WongWork13CSecurityCard12getCancelCntEv>
 820a5e0:	89 c3                	mov    %eax,%ebx
 820a5e2:	8b 45 08             	mov    0x8(%ebp),%eax
 820a5e5:	89 04 24             	mov    %eax,(%esp)
 820a5e8:	e8 81 fd ec ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 820a5ed:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 820a5f1:	89 04 24             	mov    %eax,(%esp)
 820a5f4:	e8 19 1b 22 00       	call   842c112 <_ZN30DB_SecurityCardUpdateCancelCnt11makeRequestEjj>
 820a5f9:	8b 45 08             	mov    0x8(%ebp),%eax
 820a5fc:	89 04 24             	mov    %eax,(%esp)
 820a5ff:	e8 1c 57 02 00       	call   822fd20 <_ZN5CUser15getSecurityCardEv>
 820a604:	89 04 24             	mov    %eax,(%esp)
 820a607:	e8 40 49 02 00       	call   822ef4c <_ZN8WongWork13CSecurityCard12getCancelCntEv>
 820a60c:	83 f8 09             	cmp    $0x9,%eax
 820a60f:	e9 9c 00 00 00       	jmp    820a6b0 <_ZN33Dispatcher_SecurityCardAuthCancel7processEP5CUser+0x130>
 820a614:	8b 45 08             	mov    0x8(%ebp),%eax
 820a617:	89 04 24             	mov    %eax,(%esp)
 820a61a:	e8 0f 57 02 00       	call   822fd2e <_ZN5CUser6getPadEv>
 820a61f:	89 04 24             	mov    %eax,(%esp)
 820a622:	e8 b3 49 02 00       	call   822efda <_ZNK8Sanicova4CPad10isActivateEv>
 820a627:	84 c0                	test   %al,%al
 820a629:	0f 84 81 00 00 00    	je     820a6b0 <_ZN33Dispatcher_SecurityCardAuthCancel7processEP5CUser+0x130>
 820a62f:	8b 45 08             	mov    0x8(%ebp),%eax
 820a632:	89 04 24             	mov    %eax,(%esp)
 820a635:	e8 f4 56 02 00       	call   822fd2e <_ZN5CUser6getPadEv>
 820a63a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820a641:	00 
 820a642:	89 04 24             	mov    %eax,(%esp)
 820a645:	e8 82 49 02 00       	call   822efcc <_ZN8Sanicova4CPad15setRequestStateENS0_18ENUM_REQUEST_STATEE>
 820a64a:	8b 45 08             	mov    0x8(%ebp),%eax
 820a64d:	89 04 24             	mov    %eax,(%esp)
 820a650:	e8 d9 56 02 00       	call   822fd2e <_ZN5CUser6getPadEv>
 820a655:	89 04 24             	mov    %eax,(%esp)
 820a658:	e8 3d 49 02 00       	call   822ef9a <_ZN8Sanicova4CPad12incCancelCntEv>
 820a65d:	8b 45 08             	mov    0x8(%ebp),%eax
 820a660:	89 04 24             	mov    %eax,(%esp)
 820a663:	e8 aa 56 02 00       	call   822fd12 <_ZN5CUser13getWebAddressEv>
 820a668:	89 c3                	mov    %eax,%ebx
 820a66a:	8b 45 08             	mov    0x8(%ebp),%eax
 820a66d:	89 04 24             	mov    %eax,(%esp)
 820a670:	e8 b9 56 02 00       	call   822fd2e <_ZN5CUser6getPadEv>
 820a675:	89 04 24             	mov    %eax,(%esp)
 820a678:	e8 37 49 02 00       	call   822efb4 <_ZN8Sanicova4CPad12getCancelCntEv>
 820a67d:	89 c6                	mov    %eax,%esi
 820a67f:	8b 45 08             	mov    0x8(%ebp),%eax
 820a682:	89 04 24             	mov    %eax,(%esp)
 820a685:	e8 e4 fc ec ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 820a68a:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 820a68e:	89 74 24 04          	mov    %esi,0x4(%esp)
 820a692:	89 04 24             	mov    %eax,(%esp)
 820a695:	e8 a0 99 21 00       	call   842403a <_ZN25DB_PassPadUpdateCancelCnt11makeRequestEjjPc>
 820a69a:	8b 45 08             	mov    0x8(%ebp),%eax
 820a69d:	89 04 24             	mov    %eax,(%esp)
 820a6a0:	e8 89 56 02 00       	call   822fd2e <_ZN5CUser6getPadEv>
 820a6a5:	89 04 24             	mov    %eax,(%esp)
 820a6a8:	e8 07 49 02 00       	call   822efb4 <_ZN8Sanicova4CPad12getCancelCntEv>
 820a6ad:	83 f8 09             	cmp    $0x9,%eax
 820a6b0:	b8 01 00 00 00       	mov    $0x1,%eax
 820a6b5:	83 c4 10             	add    $0x10,%esp
 820a6b8:	5b                   	pop    %ebx
 820a6b9:	5e                   	pop    %esi
 820a6ba:	5d                   	pop    %ebp
 820a6bb:	c3                   	ret

```

```c
// Dispatcher_SecurityCardAuthCancel::process @ 0x820a580

/* Dispatcher_SecurityCardAuthCancel::process(CUser*) */

undefined4 Dispatcher_SecurityCardAuthCancel::process(CUser *param_1)

{
  char cVar1;
  CSecurityCard *pCVar2;
  uint uVar3;
  uint uVar4;
  CPad *pCVar5;
  char *pcVar6;
  
  pCVar2 = (CSecurityCard *)CUser::getSecurityCard(param_1);
  cVar1 = WongWork::CSecurityCard::isActivate(pCVar2);
  if (cVar1 == '\0') {
    pCVar5 = (CPad *)CUser::getPad(param_1);
    cVar1 = Sanicova::CPad::isActivate(pCVar5);
    if (cVar1 != '\0') {
      pCVar5 = (CPad *)CUser::getPad(param_1);
      Sanicova::CPad::setRequestState(pCVar5,0);
      pCVar5 = (CPad *)CUser::getPad(param_1);
      Sanicova::CPad::incCancelCnt(pCVar5);
      pcVar6 = (char *)CUser::getWebAddress(param_1);
      pCVar5 = (CPad *)CUser::getPad(param_1);
      uVar3 = Sanicova::CPad::getCancelCnt(pCVar5);
      uVar4 = CUser::get_acc_id(param_1);
      DB_PassPadUpdateCancelCnt::makeRequest(uVar4,uVar3,pcVar6);
      pCVar5 = (CPad *)CUser::getPad(param_1);
      Sanicova::CPad::getCancelCnt(pCVar5);
    }
  }
  else {
    pCVar2 = (CSecurityCard *)CUser::getSecurityCard(param_1);
    WongWork::CSecurityCard::setRequestState(pCVar2,0);
    pCVar2 = (CSecurityCard *)CUser::getSecurityCard(param_1);
    WongWork::CSecurityCard::incCancelCnt(pCVar2);
    pCVar2 = (CSecurityCard *)CUser::getSecurityCard(param_1);
    uVar3 = WongWork::CSecurityCard::getCancelCnt(pCVar2);
    uVar4 = CUser::get_acc_id(param_1);
    DB_SecurityCardUpdateCancelCnt::makeRequest(uVar4,uVar3);
    pCVar2 = (CSecurityCard *)CUser::getSecurityCard(param_1);
    WongWork::CSecurityCard::getCancelCnt(pCVar2);
  }
  return 1;
}

```

