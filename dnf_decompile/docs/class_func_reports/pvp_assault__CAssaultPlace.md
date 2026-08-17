# pvp_assault__CAssaultPlace

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 90

---

## AbuseUser

```asm
// === 082eb5e2 pvp_assault::CAssaultPlace::AbuseUser  [0x082eb5e2-0x82eb773] ===
 82eb5e2:	55                   	push   %ebp
 82eb5e3:	89 e5                	mov    %esp,%ebp
 82eb5e5:	56                   	push   %esi
 82eb5e6:	53                   	push   %ebx
 82eb5e7:	83 ec 40             	sub    $0x40,%esp
 82eb5ea:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 82eb5f1:	e8 a8 06 de ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 82eb5f6:	8b 55 08             	mov    0x8(%ebp),%edx
 82eb5f9:	8b 92 3c 01 00 00    	mov    0x13c(%edx),%edx
 82eb5ff:	29 d0                	sub    %edx,%eax
 82eb601:	83 f8 13             	cmp    $0x13,%eax
 82eb604:	0f 9e c0             	setle  %al
 82eb607:	84 c0                	test   %al,%al
 82eb609:	74 64                	je     82eb66f <_ZN11pvp_assault13CAssaultPlace9AbuseUserEP5CUser+0x8d>
 82eb60b:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 82eb612:	e8 87 06 de ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 82eb617:	8b 55 08             	mov    0x8(%ebp),%edx
 82eb61a:	8b 92 3c 01 00 00    	mov    0x13c(%edx),%edx
 82eb620:	89 c6                	mov    %eax,%esi
 82eb622:	29 d6                	sub    %edx,%esi
 82eb624:	8b 45 0c             	mov    0xc(%ebp),%eax
 82eb627:	89 04 24             	mov    %eax,(%esp)
 82eb62a:	e8 1f 06 de ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 82eb62f:	89 c3                	mov    %eax,%ebx
 82eb631:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82eb638:	00 
 82eb639:	c7 44 24 08 23 0c 00 	movl   $0xc23,0x8(%esp)
 82eb640:	00 
 82eb641:	c7 44 24 04 e0 cf c1 	movl   $0x8c1cfe0,0x4(%esp)
 82eb648:	08 
 82eb649:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82eb64c:	89 04 24             	mov    %eax,(%esp)
 82eb64f:	e8 c4 40 26 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 82eb654:	89 74 24 0c          	mov    %esi,0xc(%esp)
 82eb658:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 82eb65c:	c7 44 24 04 e4 bd c1 	movl   $0x8c1bde4,0x4(%esp)
 82eb663:	08 
 82eb664:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82eb667:	89 04 24             	mov    %eax,(%esp)
 82eb66a:	e8 19 41 26 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 82eb66f:	8b 45 08             	mov    0x8(%ebp),%eax
 82eb672:	8b 80 0c 01 00 00    	mov    0x10c(%eax),%eax
 82eb678:	83 f8 04             	cmp    $0x4,%eax
 82eb67b:	0f 85 ec 00 00 00    	jne    82eb76d <_ZN11pvp_assault13CAssaultPlace9AbuseUserEP5CUser+0x18b>
 82eb681:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 82eb688:	eb 74                	jmp    82eb6fe <_ZN11pvp_assault13CAssaultPlace9AbuseUserEP5CUser+0x11c>
 82eb68a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82eb68d:	c1 e0 05             	shl    $0x5,%eax
 82eb690:	03 45 08             	add    0x8(%ebp),%eax
 82eb693:	89 04 24             	mov    %eax,(%esp)
 82eb696:	e8 c1 4e 00 00       	call   82f055c <_ZN11pvp_assault10CAssaulter5EmptyEv>
 82eb69b:	84 c0                	test   %al,%al
 82eb69d:	75 5a                	jne    82eb6f9 <_ZN11pvp_assault13CAssaultPlace9AbuseUserEP5CUser+0x117>
 82eb69f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82eb6a2:	c1 e0 05             	shl    $0x5,%eax
 82eb6a5:	03 45 08             	add    0x8(%ebp),%eax
 82eb6a8:	89 04 24             	mov    %eax,(%esp)
 82eb6ab:	e8 92 4e 00 00       	call   82f0542 <_ZN11pvp_assault10CAssaulter7GetUserEv>
 82eb6b0:	89 c3                	mov    %eax,%ebx
 82eb6b2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82eb6b5:	c1 e0 05             	shl    $0x5,%eax
 82eb6b8:	03 45 08             	add    0x8(%ebp),%eax
 82eb6bb:	89 04 24             	mov    %eax,(%esp)
 82eb6be:	e8 7f 4e 00 00       	call   82f0542 <_ZN11pvp_assault10CAssaulter7GetUserEv>
 82eb6c3:	89 04 24             	mov    %eax,(%esp)
 82eb6c6:	e8 8f e2 e0 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 82eb6cb:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 82eb6d2:	00 
 82eb6d3:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 82eb6da:	00 
 82eb6db:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 82eb6e2:	00 
 82eb6e3:	c7 44 24 08 2e 03 00 	movl   $0x32e,0x8(%esp)
 82eb6ea:	00 
 82eb6eb:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 82eb6ef:	89 04 24             	mov    %eax,(%esp)
 82eb6f2:	e8 87 d5 e0 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 82eb6f7:	eb 01                	jmp    82eb6fa <_ZN11pvp_assault13CAssaultPlace9AbuseUserEP5CUser+0x118>
 82eb6f9:	90                   	nop
 82eb6fa:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 82eb6fe:	83 7d f4 07          	cmpl   $0x7,-0xc(%ebp)
 82eb702:	0f 9e c0             	setle  %al
 82eb705:	84 c0                	test   %al,%al
 82eb707:	75 81                	jne    82eb68a <_ZN11pvp_assault13CAssaultPlace9AbuseUserEP5CUser+0xa8>
 82eb709:	8b 45 08             	mov    0x8(%ebp),%eax
 82eb70c:	c7 80 0c 01 00 00 06 	movl   $0x6,0x10c(%eax)
 82eb713:	00 00 00 
 82eb716:	8b 45 08             	mov    0x8(%ebp),%eax
 82eb719:	8b 80 2c 01 00 00    	mov    0x12c(%eax),%eax
 82eb71f:	85 c0                	test   %eax,%eax
 82eb721:	74 19                	je     82eb73c <_ZN11pvp_assault13CAssaultPlace9AbuseUserEP5CUser+0x15a>
 82eb723:	8b 45 08             	mov    0x8(%ebp),%eax
 82eb726:	8b 80 2c 01 00 00    	mov    0x12c(%eax),%eax
 82eb72c:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 82eb733:	00 
 82eb734:	89 04 24             	mov    %eax,(%esp)
 82eb737:	e8 f8 a2 fb ff       	call   82a5a34 <_ZN6CParty15SetAssaultStateEc>
 82eb73c:	8b 45 08             	mov    0x8(%ebp),%eax
 82eb73f:	8b 80 30 01 00 00    	mov    0x130(%eax),%eax
 82eb745:	85 c0                	test   %eax,%eax
 82eb747:	74 19                	je     82eb762 <_ZN11pvp_assault13CAssaultPlace9AbuseUserEP5CUser+0x180>
 82eb749:	8b 45 08             	mov    0x8(%ebp),%eax
 82eb74c:	8b 80 30 01 00 00    	mov    0x130(%eax),%eax
 82eb752:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 82eb759:	00 
 82eb75a:	89 04 24             	mov    %eax,(%esp)
 82eb75d:	e8 d2 a2 fb ff       	call   82a5a34 <_ZN6CParty15SetAssaultStateEc>
 82eb762:	8b 45 08             	mov    0x8(%ebp),%eax
 82eb765:	89 04 24             	mov    %eax,(%esp)
 82eb768:	e8 1b ea ff ff       	call   82ea188 <_ZN11pvp_assault13CAssaultPlace19TimeoutCloseAssaultEv>
 82eb76d:	83 c4 40             	add    $0x40,%esp
 82eb770:	5b                   	pop    %ebx
 82eb771:	5e                   	pop    %esi
 82eb772:	5d                   	pop    %ebp
 82eb773:	c3                   	ret

```

```c
// pvp_assault::CAssaultPlace::AbuseUser @ 0x82eb5e2

/* pvp_assault::CAssaultPlace::AbuseUser(CUser*) */

void __thiscall pvp_assault::CAssaultPlace::AbuseUser(CAssaultPlace *this,CUser *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  CUser *this_00;
  CHackAnalyzer *pCVar5;
  cMyTrace local_20 [16];
  int local_10;
  
  iVar2 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  if (iVar2 - *(int *)(this + 0x13c) < 0x14) {
    iVar3 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    iVar2 = *(int *)(this + 0x13c);
    uVar4 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    cMyTrace::cMyTrace(local_20,"void pvp_assault::CAssaultPlace::AbuseUser(CUser*)",0xc23,0);
    cMyTrace::operator()
              (local_20,"CAssaultPlace::AbuseUser() charac_no(%d), timeout sec(%d)",uVar4,
               iVar3 - iVar2);
  }
  if (*(int *)(this + 0x10c) == 4) {
    for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
      cVar1 = CAssaulter::Empty((CAssaulter *)(this + local_10 * 0x20));
      if (cVar1 == '\0') {
        uVar4 = CAssaulter::GetUser((CAssaulter *)(this + local_10 * 0x20));
        this_00 = (CUser *)CAssaulter::GetUser((CAssaulter *)(this + local_10 * 0x20));
        pCVar5 = (CHackAnalyzer *)CUser::getHackAnalyzer(this_00);
        WongWork::CHackAnalyzer::addServerHackCnt(pCVar5,uVar4,0x32e,1,0,0);
      }
    }
    *(undefined4 *)(this + 0x10c) = 6;
    if (*(int *)(this + 300) != 0) {
      CParty::SetAssaultState(*(CParty **)(this + 300),'\x06');
    }
    if (*(int *)(this + 0x130) != 0) {
      CParty::SetAssaultState(*(CParty **)(this + 0x130),'\x06');
    }
    TimeoutCloseAssault(this);
  }
  return;
}

```

---

## ChangeHp

```asm
// === 082ed752 pvp_assault::CAssaultPlace::ChangeHp  [0x082ed752-0x82ed965] ===
 82ed752:	55                   	push   %ebp
 82ed753:	89 e5                	mov    %esp,%ebp
 82ed755:	56                   	push   %esi
 82ed756:	53                   	push   %ebx
 82ed757:	83 ec 30             	sub    $0x30,%esp
 82ed75a:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 82ed761:	00 
 82ed762:	8b 45 0c             	mov    0xc(%ebp),%eax
 82ed765:	89 44 24 04          	mov    %eax,0x4(%esp)
 82ed769:	8b 45 08             	mov    0x8(%ebp),%eax
 82ed76c:	89 04 24             	mov    %eax,(%esp)
 82ed76f:	e8 26 ad ff ff       	call   82e849a <_ZN11pvp_assault13CAssaultPlace13_GetUserIndexEP5CUserb>
 82ed774:	89 45 e8             	mov    %eax,-0x18(%ebp)
 82ed777:	8b 45 e8             	mov    -0x18(%ebp),%eax
 82ed77a:	c1 e0 05             	shl    $0x5,%eax
 82ed77d:	03 45 08             	add    0x8(%ebp),%eax
 82ed780:	8b 55 10             	mov    0x10(%ebp),%edx
 82ed783:	89 54 24 04          	mov    %edx,0x4(%esp)
 82ed787:	89 04 24             	mov    %eax,(%esp)
 82ed78a:	e8 05 8f ff ff       	call   82e6694 <_ZN11pvp_assault10CAssaulter8ChangeHpEi>
 82ed78f:	84 c0                	test   %al,%al
 82ed791:	0f 84 d1 00 00 00    	je     82ed868 <_ZN11pvp_assault13CAssaultPlace8ChangeHpEP5CUseri+0x116>
 82ed797:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82ed79a:	89 04 24             	mov    %eax,(%esp)
 82ed79d:	e8 aa 05 2a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 82ed7a2:	8b 45 10             	mov    0x10(%ebp),%eax
 82ed7a5:	89 44 24 0c          	mov    %eax,0xc(%esp)
 82ed7a9:	8b 45 e8             	mov    -0x18(%ebp),%eax
 82ed7ac:	89 44 24 08          	mov    %eax,0x8(%esp)
 82ed7b0:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82ed7b3:	89 44 24 04          	mov    %eax,0x4(%esp)
 82ed7b7:	8b 45 08             	mov    0x8(%ebp),%eax
 82ed7ba:	89 04 24             	mov    %eax,(%esp)
 82ed7bd:	e8 de b8 ff ff       	call   82e90a0 <_ZN11pvp_assault13CAssaultPlace13_MakeChangeHpEP11PacketGuardii>
 82ed7c2:	a1 50 be 40 09       	mov    0x940be50,%eax
 82ed7c7:	89 04 24             	mov    %eax,(%esp)
 82ed7ca:	e8 41 21 19 00       	call   847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>
 82ed7cf:	84 c0                	test   %al,%al
 82ed7d1:	74 16                	je     82ed7e9 <_ZN11pvp_assault13CAssaultPlace8ChangeHpEP5CUseri+0x97>
 82ed7d3:	8b 45 0c             	mov    0xc(%ebp),%eax
 82ed7d6:	89 04 24             	mov    %eax,(%esp)
 82ed7d9:	e8 86 7d 35 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 82ed7de:	3c 07                	cmp    $0x7,%al
 82ed7e0:	75 07                	jne    82ed7e9 <_ZN11pvp_assault13CAssaultPlace8ChangeHpEP5CUseri+0x97>
 82ed7e2:	b8 01 00 00 00       	mov    $0x1,%eax
 82ed7e7:	eb 05                	jmp    82ed7ee <_ZN11pvp_assault13CAssaultPlace8ChangeHpEP5CUseri+0x9c>
 82ed7e9:	b8 00 00 00 00       	mov    $0x0,%eax
 82ed7ee:	84 c0                	test   %al,%al
 82ed7f0:	74 3c                	je     82ed82e <_ZN11pvp_assault13CAssaultPlace8ChangeHpEP5CUseri+0xdc>
 82ed7f2:	8b 45 0c             	mov    0xc(%ebp),%eax
 82ed7f5:	89 04 24             	mov    %eax,(%esp)
 82ed7f8:	e8 4f 79 36 00       	call   865514c <_ZN5CUser8GetPartyEv>
 82ed7fd:	89 45 ec             	mov    %eax,-0x14(%ebp)
 82ed800:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 82ed804:	74 14                	je     82ed81a <_ZN11pvp_assault13CAssaultPlace8ChangeHpEP5CUseri+0xc8>
 82ed806:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82ed809:	89 44 24 04          	mov    %eax,0x4(%esp)
 82ed80d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 82ed810:	89 04 24             	mov    %eax,(%esp)
 82ed813:	e8 36 f9 2a 00       	call   859d14e <_ZN6CParty13send_to_partyER11PacketGuard>
 82ed818:	eb 43                	jmp    82ed85d <_ZN11pvp_assault13CAssaultPlace8ChangeHpEP5CUseri+0x10b>
 82ed81a:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82ed81d:	89 44 24 04          	mov    %eax,0x4(%esp)
 82ed821:	8b 45 0c             	mov    0xc(%ebp),%eax
 82ed824:	89 04 24             	mov    %eax,(%esp)
 82ed827:	e8 8e ad 35 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 82ed82c:	eb 2f                	jmp    82ed85d <_ZN11pvp_assault13CAssaultPlace8ChangeHpEP5CUseri+0x10b>
 82ed82e:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82ed831:	89 44 24 04          	mov    %eax,0x4(%esp)
 82ed835:	8b 45 08             	mov    0x8(%ebp),%eax
 82ed838:	89 04 24             	mov    %eax,(%esp)
 82ed83b:	e8 fa 94 ff ff       	call   82e6d3a <_ZN11pvp_assault13CAssaultPlace17_SendPacketToAreaER11PacketGuard>
 82ed840:	eb 1b                	jmp    82ed85d <_ZN11pvp_assault13CAssaultPlace8ChangeHpEP5CUseri+0x10b>
 82ed842:	89 d3                	mov    %edx,%ebx
 82ed844:	89 c6                	mov    %eax,%esi
 82ed846:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82ed849:	89 04 24             	mov    %eax,(%esp)
 82ed84c:	e8 2f 06 2a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82ed851:	89 f0                	mov    %esi,%eax
 82ed853:	89 da                	mov    %ebx,%edx
 82ed855:	89 04 24             	mov    %eax,(%esp)
 82ed858:	e8 f3 5e 7f 00       	call   8ae3750 <_Unwind_Resume>
 82ed85d:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82ed860:	89 04 24             	mov    %eax,(%esp)
 82ed863:	e8 18 06 2a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82ed868:	8b 45 08             	mov    0x8(%ebp),%eax
 82ed86b:	8b 80 0c 01 00 00    	mov    0x10c(%eax),%eax
 82ed871:	83 f8 05             	cmp    $0x5,%eax
 82ed874:	74 12                	je     82ed888 <_ZN11pvp_assault13CAssaultPlace8ChangeHpEP5CUseri+0x136>
 82ed876:	8b 45 08             	mov    0x8(%ebp),%eax
 82ed879:	8b 80 0c 01 00 00    	mov    0x10c(%eax),%eax
 82ed87f:	83 f8 06             	cmp    $0x6,%eax
 82ed882:	0f 85 d6 00 00 00    	jne    82ed95e <_ZN11pvp_assault13CAssaultPlace8ChangeHpEP5CUseri+0x20c>
 82ed888:	8b 45 e8             	mov    -0x18(%ebp),%eax
 82ed88b:	c1 e0 05             	shl    $0x5,%eax
 82ed88e:	03 45 08             	add    0x8(%ebp),%eax
 82ed891:	c7 44 24 04 08 00 00 	movl   $0x8,0x4(%esp)
 82ed898:	00 
 82ed899:	89 04 24             	mov    %eax,(%esp)
 82ed89c:	e8 db 2c 00 00       	call   82f057c <_ZN11pvp_assault10CAssaulter8SetStateENS_18ENUM_ASSAULT_STATEE>
 82ed8a1:	c6 45 f3 01          	movb   $0x1,-0xd(%ebp)
 82ed8a5:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 82ed8ac:	eb 3b                	jmp    82ed8e9 <_ZN11pvp_assault13CAssaultPlace8ChangeHpEP5CUseri+0x197>
 82ed8ae:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82ed8b1:	c1 e0 05             	shl    $0x5,%eax
 82ed8b4:	03 45 08             	add    0x8(%ebp),%eax
 82ed8b7:	89 04 24             	mov    %eax,(%esp)
 82ed8ba:	e8 9d 2c 00 00       	call   82f055c <_ZN11pvp_assault10CAssaulter5EmptyEv>
 82ed8bf:	84 c0                	test   %al,%al
 82ed8c1:	75 21                	jne    82ed8e4 <_ZN11pvp_assault13CAssaultPlace8ChangeHpEP5CUseri+0x192>
 82ed8c3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82ed8c6:	c1 e0 05             	shl    $0x5,%eax
 82ed8c9:	03 45 08             	add    0x8(%ebp),%eax
 82ed8cc:	89 04 24             	mov    %eax,(%esp)
 82ed8cf:	e8 b6 2c 00 00       	call   82f058a <_ZN11pvp_assault10CAssaulter8GetStateEv>
 82ed8d4:	83 f8 08             	cmp    $0x8,%eax
 82ed8d7:	0f 95 c0             	setne  %al
 82ed8da:	84 c0                	test   %al,%al
 82ed8dc:	74 07                	je     82ed8e5 <_ZN11pvp_assault13CAssaultPlace8ChangeHpEP5CUseri+0x193>
 82ed8de:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
 82ed8e2:	eb 01                	jmp    82ed8e5 <_ZN11pvp_assault13CAssaultPlace8ChangeHpEP5CUseri+0x193>
 82ed8e4:	90                   	nop
 82ed8e5:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 82ed8e9:	83 7d f4 07          	cmpl   $0x7,-0xc(%ebp)
 82ed8ed:	0f 9e c0             	setle  %al
 82ed8f0:	84 c0                	test   %al,%al
 82ed8f2:	75 ba                	jne    82ed8ae <_ZN11pvp_assault13CAssaultPlace8ChangeHpEP5CUseri+0x15c>
 82ed8f4:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
 82ed8f8:	74 64                	je     82ed95e <_ZN11pvp_assault13CAssaultPlace8ChangeHpEP5CUseri+0x20c>
 82ed8fa:	8b 45 08             	mov    0x8(%ebp),%eax
 82ed8fd:	8b 80 2c 01 00 00    	mov    0x12c(%eax),%eax
 82ed903:	85 c0                	test   %eax,%eax
 82ed905:	74 19                	je     82ed920 <_ZN11pvp_assault13CAssaultPlace8ChangeHpEP5CUseri+0x1ce>
 82ed907:	8b 45 08             	mov    0x8(%ebp),%eax
 82ed90a:	8b 80 2c 01 00 00    	mov    0x12c(%eax),%eax
 82ed910:	c7 44 24 04 07 00 00 	movl   $0x7,0x4(%esp)
 82ed917:	00 
 82ed918:	89 04 24             	mov    %eax,(%esp)
 82ed91b:	e8 14 81 fb ff       	call   82a5a34 <_ZN6CParty15SetAssaultStateEc>
 82ed920:	8b 45 08             	mov    0x8(%ebp),%eax
 82ed923:	8b 80 30 01 00 00    	mov    0x130(%eax),%eax
 82ed929:	85 c0                	test   %eax,%eax
 82ed92b:	74 19                	je     82ed946 <_ZN11pvp_assault13CAssaultPlace8ChangeHpEP5CUseri+0x1f4>
 82ed92d:	8b 45 08             	mov    0x8(%ebp),%eax
 82ed930:	8b 80 30 01 00 00    	mov    0x130(%eax),%eax
 82ed936:	c7 44 24 04 07 00 00 	movl   $0x7,0x4(%esp)
 82ed93d:	00 
 82ed93e:	89 04 24             	mov    %eax,(%esp)
 82ed941:	e8 ee 80 fb ff       	call   82a5a34 <_ZN6CParty15SetAssaultStateEc>
 82ed946:	8b 45 08             	mov    0x8(%ebp),%eax
 82ed949:	c7 80 0c 01 00 00 07 	movl   $0x7,0x10c(%eax)
 82ed950:	00 00 00 
 82ed953:	8b 45 08             	mov    0x8(%ebp),%eax
 82ed956:	89 04 24             	mov    %eax,(%esp)
 82ed959:	e8 78 c1 ff ff       	call   82e9ad6 <_ZN11pvp_assault13CAssaultPlace12CloseAssaultEv>
 82ed95e:	83 c4 30             	add    $0x30,%esp
 82ed961:	5b                   	pop    %ebx
 82ed962:	5e                   	pop    %esi
 82ed963:	5d                   	pop    %ebp
 82ed964:	c3                   	ret
 82ed965:	90                   	nop

```

```c
// pvp_assault::CAssaultPlace::ChangeHp @ 0x82ed752

/* pvp_assault::CAssaultPlace::ChangeHp(CUser*, int) */

void __thiscall pvp_assault::CAssaultPlace::ChangeHp(CAssaultPlace *this,CUser *param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  PacketGuard local_28 [12];
  int local_1c;
  CParty *local_18;
  char local_11;
  int local_10;
  
  local_1c = _GetUserIndex(this,param_1,true);
  cVar2 = CAssaulter::ChangeHp((CAssaulter *)(this + local_1c * 0x20),param_2);
  if (cVar2 == '\0') goto LAB_082ed868;
  PacketGuard::PacketGuard(local_28);
                    /* try { // try from 082ed7bd to 082ed83f has its CatchHandler @ 082ed842 */
  _MakeChangeHp(this,local_28,local_1c,param_2);
  cVar2 = CPowerManager::IsPowerWarEventOn();
  if (cVar2 == '\0') {
LAB_082ed7e9:
    bVar1 = false;
  }
  else {
    cVar2 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
    if (cVar2 != '\a') goto LAB_082ed7e9;
    bVar1 = true;
  }
  if (bVar1) {
    local_18 = (CParty *)CUser::GetParty(param_1);
    if (local_18 == (CParty *)0x0) {
      CUser::Send(param_1,local_28);
    }
    else {
      CParty::send_to_party(local_18,local_28);
    }
  }
  else {
    _SendPacketToArea(this,local_28);
  }
  PacketGuard::~PacketGuard(local_28);
LAB_082ed868:
  if ((*(int *)(this + 0x10c) == 5) || (*(int *)(this + 0x10c) == 6)) {
    CAssaulter::SetState((CAssaulter *)(this + local_1c * 0x20),8);
    local_11 = '\x01';
    for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
      cVar2 = CAssaulter::Empty((CAssaulter *)(this + local_10 * 0x20));
      if (cVar2 == '\0') {
        iVar3 = CAssaulter::GetState((CAssaulter *)(this + local_10 * 0x20));
        if (iVar3 != 8) {
          local_11 = '\0';
        }
      }
    }
    if (local_11 != '\0') {
      if (*(int *)(this + 300) != 0) {
        CParty::SetAssaultState(*(CParty **)(this + 300),'\a');
      }
      if (*(int *)(this + 0x130) != 0) {
        CParty::SetAssaultState(*(CParty **)(this + 0x130),'\a');
      }
      *(undefined4 *)(this + 0x10c) = 7;
      CloseAssault(this);
    }
  }
  return;
}

```

---

## ClearBadP2PUser

```asm
// === 082e949c pvp_assault::CAssaultPlace::ClearBadP2PUser  [0x082e949c-0x82e9501] ===
 82e949c:	55                   	push   %ebp
 82e949d:	89 e5                	mov    %esp,%ebp
 82e949f:	83 ec 28             	sub    $0x28,%esp
 82e94a2:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 82e94a9:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 82e94b0:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 82e94b7:	eb 39                	jmp    82e94f2 <_ZN11pvp_assault13CAssaultPlace15ClearBadP2PUserEv+0x56>
 82e94b9:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82e94bc:	89 44 24 08          	mov    %eax,0x8(%esp)
 82e94c0:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82e94c3:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e94c7:	8b 45 08             	mov    0x8(%ebp),%eax
 82e94ca:	89 04 24             	mov    %eax,(%esp)
 82e94cd:	e8 40 ff ff ff       	call   82e9412 <_ZN11pvp_assault13CAssaultPlace25_GetConnectP2PMaxMinPointERiS1_>
 82e94d2:	8b 55 f0             	mov    -0x10(%ebp),%edx
 82e94d5:	8b 45 ec             	mov    -0x14(%ebp),%eax
 82e94d8:	39 c2                	cmp    %eax,%edx
 82e94da:	74 23                	je     82e94ff <_ZN11pvp_assault13CAssaultPlace15ClearBadP2PUserEv+0x63>
 82e94dc:	8b 45 ec             	mov    -0x14(%ebp),%eax
 82e94df:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e94e3:	8b 45 08             	mov    0x8(%ebp),%eax
 82e94e6:	89 04 24             	mov    %eax,(%esp)
 82e94e9:	e8 6a fe ff ff       	call   82e9358 <_ZN11pvp_assault13CAssaultPlace24_ClearConnectP2PRelativeEi>
 82e94ee:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 82e94f2:	83 7d f4 07          	cmpl   $0x7,-0xc(%ebp)
 82e94f6:	0f 9e c0             	setle  %al
 82e94f9:	84 c0                	test   %al,%al
 82e94fb:	75 bc                	jne    82e94b9 <_ZN11pvp_assault13CAssaultPlace15ClearBadP2PUserEv+0x1d>
 82e94fd:	eb 01                	jmp    82e9500 <_ZN11pvp_assault13CAssaultPlace15ClearBadP2PUserEv+0x64>
 82e94ff:	90                   	nop
 82e9500:	c9                   	leave
 82e9501:	c3                   	ret

```

```c
// pvp_assault::CAssaultPlace::ClearBadP2PUser @ 0x82e949c

/* pvp_assault::CAssaultPlace::ClearBadP2PUser() */

void __thiscall pvp_assault::CAssaultPlace::ClearBadP2PUser(CAssaultPlace *this)

{
  int local_18;
  int local_14;
  int local_10;
  
  local_14 = 0;
  local_18 = 0;
  local_10 = 0;
  while ((local_10 < 8 &&
         (_GetConnectP2PMaxMinPoint(this,&local_14,&local_18), local_14 != local_18))) {
    _ClearConnectP2PRelative(this,local_18);
    local_10 = local_10 + 1;
  }
  return;
}

```

---

## CloseAssault

```asm
// === 082e9ad6 pvp_assault::CAssaultPlace::CloseAssault  [0x082e9ad6-0x82ea003] ===
 82e9ad6:	55                   	push   %ebp
 82e9ad7:	89 e5                	mov    %esp,%ebp
 82e9ad9:	56                   	push   %esi
 82e9ada:	53                   	push   %ebx
 82e9adb:	83 ec 40             	sub    $0x40,%esp
 82e9ade:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 82e9ae5:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 82e9aec:	8b 45 08             	mov    0x8(%ebp),%eax
 82e9aef:	8b 80 00 01 00 00    	mov    0x100(%eax),%eax
 82e9af5:	85 c0                	test   %eax,%eax
 82e9af7:	0f 8e 6f 03 00 00    	jle    82e9e6c <_ZN11pvp_assault13CAssaultPlace12CloseAssaultEv+0x396>
 82e9afd:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 82e9b04:	e9 49 03 00 00       	jmp    82e9e52 <_ZN11pvp_assault13CAssaultPlace12CloseAssaultEv+0x37c>
 82e9b09:	8b 45 d8             	mov    -0x28(%ebp),%eax
 82e9b0c:	c1 e0 05             	shl    $0x5,%eax
 82e9b0f:	03 45 08             	add    0x8(%ebp),%eax
 82e9b12:	89 04 24             	mov    %eax,(%esp)
 82e9b15:	e8 42 6a 00 00       	call   82f055c <_ZN11pvp_assault10CAssaulter5EmptyEv>
 82e9b1a:	84 c0                	test   %al,%al
 82e9b1c:	0f 85 2b 03 00 00    	jne    82e9e4d <_ZN11pvp_assault13CAssaultPlace12CloseAssaultEv+0x377>
 82e9b22:	8b 45 d8             	mov    -0x28(%ebp),%eax
 82e9b25:	c1 e0 05             	shl    $0x5,%eax
 82e9b28:	03 45 08             	add    0x8(%ebp),%eax
 82e9b2b:	89 04 24             	mov    %eax,(%esp)
 82e9b2e:	e8 0f 6a 00 00       	call   82f0542 <_ZN11pvp_assault10CAssaulter7GetUserEv>
 82e9b33:	89 45 e0             	mov    %eax,-0x20(%ebp)
 82e9b36:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 82e9b3a:	0f 84 17 01 00 00    	je     82e9c57 <_ZN11pvp_assault13CAssaultPlace12CloseAssaultEv+0x181>
 82e9b40:	a1 50 be 40 09       	mov    0x940be50,%eax
 82e9b45:	89 04 24             	mov    %eax,(%esp)
 82e9b48:	e8 c3 5d 19 00       	call   847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>
 82e9b4d:	84 c0                	test   %al,%al
 82e9b4f:	74 16                	je     82e9b67 <_ZN11pvp_assault13CAssaultPlace12CloseAssaultEv+0x91>
 82e9b51:	8b 45 e0             	mov    -0x20(%ebp),%eax
 82e9b54:	89 04 24             	mov    %eax,(%esp)
 82e9b57:	e8 08 ba 35 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 82e9b5c:	3c 07                	cmp    $0x7,%al
 82e9b5e:	75 07                	jne    82e9b67 <_ZN11pvp_assault13CAssaultPlace12CloseAssaultEv+0x91>
 82e9b60:	b8 01 00 00 00       	mov    $0x1,%eax
 82e9b65:	eb 05                	jmp    82e9b6c <_ZN11pvp_assault13CAssaultPlace12CloseAssaultEv+0x96>
 82e9b67:	b8 00 00 00 00       	mov    $0x0,%eax
 82e9b6c:	84 c0                	test   %al,%al
 82e9b6e:	74 4c                	je     82e9bbc <_ZN11pvp_assault13CAssaultPlace12CloseAssaultEv+0xe6>
 82e9b70:	8b 45 d8             	mov    -0x28(%ebp),%eax
 82e9b73:	c1 e0 05             	shl    $0x5,%eax
 82e9b76:	03 45 08             	add    0x8(%ebp),%eax
 82e9b79:	89 04 24             	mov    %eax,(%esp)
 82e9b7c:	e8 2d 6a 00 00       	call   82f05ae <_ZN11pvp_assault10CAssaulter16IsPowerWarWinnerEv>
 82e9b81:	83 f0 01             	xor    $0x1,%eax
 82e9b84:	84 c0                	test   %al,%al
 82e9b86:	74 0b                	je     82e9b93 <_ZN11pvp_assault13CAssaultPlace12CloseAssaultEv+0xbd>
 82e9b88:	8b 45 e0             	mov    -0x20(%ebp),%eax
 82e9b8b:	89 04 24             	mov    %eax,(%esp)
 82e9b8e:	e8 13 3b 00 00       	call   82ed6a6 <_ZN11pvp_assault13CAssaultPlace25ForcedMoveAtPowerWarPlaceEP5CUser>
 82e9b93:	8b 45 e0             	mov    -0x20(%ebp),%eax
 82e9b96:	89 04 24             	mov    %eax,(%esp)
 82e9b99:	e8 50 6e 00 00       	call   82f09ee <_ZN15CUserCharacInfo13getPowerWarHPEv>
 82e9b9e:	0f b7 c0             	movzwl %ax,%eax
 82e9ba1:	89 44 24 08          	mov    %eax,0x8(%esp)
 82e9ba5:	8b 45 e0             	mov    -0x20(%ebp),%eax
 82e9ba8:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e9bac:	8b 45 08             	mov    0x8(%ebp),%eax
 82e9baf:	89 04 24             	mov    %eax,(%esp)
 82e9bb2:	e8 73 df ff ff       	call   82e7b2a <_ZN11pvp_assault13CAssaultPlace17_SendCloseAssaultEP5CUseri>
 82e9bb7:	e9 8a 00 00 00       	jmp    82e9c46 <_ZN11pvp_assault13CAssaultPlace12CloseAssaultEv+0x170>
 82e9bbc:	8b 45 e0             	mov    -0x20(%ebp),%eax
 82e9bbf:	89 04 24             	mov    %eax,(%esp)
 82e9bc2:	e8 6b 68 e3 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 82e9bc7:	85 c0                	test   %eax,%eax
 82e9bc9:	0f 95 c0             	setne  %al
 82e9bcc:	84 c0                	test   %al,%al
 82e9bce:	74 76                	je     82e9c46 <_ZN11pvp_assault13CAssaultPlace12CloseAssaultEv+0x170>
 82e9bd0:	8b 45 e0             	mov    -0x20(%ebp),%eax
 82e9bd3:	89 04 24             	mov    %eax,(%esp)
 82e9bd6:	e8 ff 06 df ff       	call   80da2da <_ZN15CUserCharacInfo16IsCurCharacGhostEv>
 82e9bdb:	84 c0                	test   %al,%al
 82e9bdd:	74 2e                	je     82e9c0d <_ZN11pvp_assault13CAssaultPlace12CloseAssaultEv+0x137>
 82e9bdf:	c7 44 24 08 64 00 00 	movl   $0x64,0x8(%esp)
 82e9be6:	00 
 82e9be7:	8b 45 e0             	mov    -0x20(%ebp),%eax
 82e9bea:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e9bee:	8b 45 08             	mov    0x8(%ebp),%eax
 82e9bf1:	89 04 24             	mov    %eax,(%esp)
 82e9bf4:	e8 31 df ff ff       	call   82e7b2a <_ZN11pvp_assault13CAssaultPlace17_SendCloseAssaultEP5CUseri>
 82e9bf9:	0f b6 d0             	movzbl %al,%edx
 82e9bfc:	8b 45 e0             	mov    -0x20(%ebp),%eax
 82e9bff:	89 54 24 04          	mov    %edx,0x4(%esp)
 82e9c03:	89 04 24             	mov    %eax,(%esp)
 82e9c06:	e8 09 6d 00 00       	call   82f0914 <_ZN15CUserCharacInfo19setCurCharacStaminaEh>
 82e9c0b:	eb 39                	jmp    82e9c46 <_ZN11pvp_assault13CAssaultPlace12CloseAssaultEv+0x170>
 82e9c0d:	8b 45 d8             	mov    -0x28(%ebp),%eax
 82e9c10:	c1 e0 05             	shl    $0x5,%eax
 82e9c13:	03 45 08             	add    0x8(%ebp),%eax
 82e9c16:	89 04 24             	mov    %eax,(%esp)
 82e9c19:	e8 6a ca ff ff       	call   82e6688 <_ZN11pvp_assault10CAssaulter5GetHpEv>
 82e9c1e:	89 44 24 08          	mov    %eax,0x8(%esp)
 82e9c22:	8b 45 e0             	mov    -0x20(%ebp),%eax
 82e9c25:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e9c29:	8b 45 08             	mov    0x8(%ebp),%eax
 82e9c2c:	89 04 24             	mov    %eax,(%esp)
 82e9c2f:	e8 f6 de ff ff       	call   82e7b2a <_ZN11pvp_assault13CAssaultPlace17_SendCloseAssaultEP5CUseri>
 82e9c34:	0f b6 d0             	movzbl %al,%edx
 82e9c37:	8b 45 e0             	mov    -0x20(%ebp),%eax
 82e9c3a:	89 54 24 04          	mov    %edx,0x4(%esp)
 82e9c3e:	89 04 24             	mov    %eax,(%esp)
 82e9c41:	e8 ce 6c 00 00       	call   82f0914 <_ZN15CUserCharacInfo19setCurCharacStaminaEh>
 82e9c46:	8b 45 e0             	mov    -0x20(%ebp),%eax
 82e9c49:	89 04 24             	mov    %eax,(%esp)
 82e9c4c:	e8 13 b9 35 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 82e9c51:	0f be c0             	movsbl %al,%eax
 82e9c54:	89 45 dc             	mov    %eax,-0x24(%ebp)
 82e9c57:	8b 45 d8             	mov    -0x28(%ebp),%eax
 82e9c5a:	c1 e0 05             	shl    $0x5,%eax
 82e9c5d:	03 45 08             	add    0x8(%ebp),%eax
 82e9c60:	89 04 24             	mov    %eax,(%esp)
 82e9c63:	e8 da 68 00 00       	call   82f0542 <_ZN11pvp_assault10CAssaulter7GetUserEv>
 82e9c68:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82e9c6f:	00 
 82e9c70:	89 04 24             	mov    %eax,(%esp)
 82e9c73:	e8 02 6e 00 00       	call   82f0a7a <_ZN15CUserCharacInfo15SetAssaultPlaceEi>
 82e9c78:	8b 45 d8             	mov    -0x28(%ebp),%eax
 82e9c7b:	c1 e0 05             	shl    $0x5,%eax
 82e9c7e:	03 45 08             	add    0x8(%ebp),%eax
 82e9c81:	89 04 24             	mov    %eax,(%esp)
 82e9c84:	e8 25 69 00 00       	call   82f05ae <_ZN11pvp_assault10CAssaulter16IsPowerWarWinnerEv>
 82e9c89:	84 c0                	test   %al,%al
 82e9c8b:	74 29                	je     82e9cb6 <_ZN11pvp_assault13CAssaultPlace12CloseAssaultEv+0x1e0>
 82e9c8d:	8b 45 e0             	mov    -0x20(%ebp),%eax
 82e9c90:	89 04 24             	mov    %eax,(%esp)
 82e9c93:	e8 56 6d 00 00       	call   82f09ee <_ZN15CUserCharacInfo13getPowerWarHPEv>
 82e9c98:	66 83 f8 1d          	cmp    $0x1d,%ax
 82e9c9c:	0f 96 c0             	setbe  %al
 82e9c9f:	84 c0                	test   %al,%al
 82e9ca1:	74 13                	je     82e9cb6 <_ZN11pvp_assault13CAssaultPlace12CloseAssaultEv+0x1e0>
 82e9ca3:	8b 45 e0             	mov    -0x20(%ebp),%eax
 82e9ca6:	c7 44 24 04 1e 00 00 	movl   $0x1e,0x4(%esp)
 82e9cad:	00 
 82e9cae:	89 04 24             	mov    %eax,(%esp)
 82e9cb1:	e8 0e 6d 00 00       	call   82f09c4 <_ZN15CUserCharacInfo13setPowerWarHPEt>
 82e9cb6:	8b 45 d8             	mov    -0x28(%ebp),%eax
 82e9cb9:	c1 e0 05             	shl    $0x5,%eax
 82e9cbc:	03 45 08             	add    0x8(%ebp),%eax
 82e9cbf:	89 04 24             	mov    %eax,(%esp)
 82e9cc2:	e8 a9 68 00 00       	call   82f0570 <_ZN11pvp_assault10CAssaulter7GetTeamEv>
 82e9cc7:	8b 55 08             	mov    0x8(%ebp),%edx
 82e9cca:	8b 92 24 01 00 00    	mov    0x124(%edx),%edx
 82e9cd0:	39 d0                	cmp    %edx,%eax
 82e9cd2:	75 2a                	jne    82e9cfe <_ZN11pvp_assault13CAssaultPlace12CloseAssaultEv+0x228>
 82e9cd4:	a1 50 be 40 09       	mov    0x940be50,%eax
 82e9cd9:	89 04 24             	mov    %eax,(%esp)
 82e9cdc:	e8 2f 5c 19 00       	call   847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>
 82e9ce1:	83 f0 01             	xor    $0x1,%eax
 82e9ce4:	84 c0                	test   %al,%al
 82e9ce6:	74 16                	je     82e9cfe <_ZN11pvp_assault13CAssaultPlace12CloseAssaultEv+0x228>
 82e9ce8:	8b 45 e0             	mov    -0x20(%ebp),%eax
 82e9ceb:	89 04 24             	mov    %eax,(%esp)
 82e9cee:	e8 71 b8 35 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 82e9cf3:	3c 07                	cmp    $0x7,%al
 82e9cf5:	74 07                	je     82e9cfe <_ZN11pvp_assault13CAssaultPlace12CloseAssaultEv+0x228>
 82e9cf7:	b8 01 00 00 00       	mov    $0x1,%eax
 82e9cfc:	eb 05                	jmp    82e9d03 <_ZN11pvp_assault13CAssaultPlace12CloseAssaultEv+0x22d>
 82e9cfe:	b8 00 00 00 00       	mov    $0x0,%eax
 82e9d03:	84 c0                	test   %al,%al
 82e9d05:	74 1b                	je     82e9d22 <_ZN11pvp_assault13CAssaultPlace12CloseAssaultEv+0x24c>
 82e9d07:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 82e9d0e:	e8 8b 1f de ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 82e9d13:	8b 55 e0             	mov    -0x20(%ebp),%edx
 82e9d16:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e9d1a:	89 14 24             	mov    %edx,(%esp)
 82e9d1d:	e8 86 70 00 00       	call   82f0da8 <_ZN15CUserCharacInfo25SetCurCharacChaosKillTimeEi>
 82e9d22:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 82e9d29:	a1 50 be 40 09       	mov    0x940be50,%eax
 82e9d2e:	89 04 24             	mov    %eax,(%esp)
 82e9d31:	e8 da 5b 19 00       	call   847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>
 82e9d36:	84 c0                	test   %al,%al
 82e9d38:	75 0f                	jne    82e9d49 <_ZN11pvp_assault13CAssaultPlace12CloseAssaultEv+0x273>
 82e9d3a:	8b 45 e0             	mov    -0x20(%ebp),%eax
 82e9d3d:	89 04 24             	mov    %eax,(%esp)
 82e9d40:	e8 1f b8 35 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 82e9d45:	3c 07                	cmp    $0x7,%al
 82e9d47:	75 07                	jne    82e9d50 <_ZN11pvp_assault13CAssaultPlace12CloseAssaultEv+0x27a>
 82e9d49:	b8 01 00 00 00       	mov    $0x1,%eax
 82e9d4e:	eb 05                	jmp    82e9d55 <_ZN11pvp_assault13CAssaultPlace12CloseAssaultEv+0x27f>
 82e9d50:	b8 00 00 00 00       	mov    $0x0,%eax
 82e9d55:	84 c0                	test   %al,%al
 82e9d57:	74 37                	je     82e9d90 <_ZN11pvp_assault13CAssaultPlace12CloseAssaultEv+0x2ba>
 82e9d59:	a1 50 be 40 09       	mov    0x940be50,%eax
 82e9d5e:	8b 55 e0             	mov    -0x20(%ebp),%edx
 82e9d61:	89 54 24 04          	mov    %edx,0x4(%esp)
 82e9d65:	89 04 24             	mov    %eax,(%esp)
 82e9d68:	e8 5b 71 19 00       	call   8480ec8 <_ZN13CPowerManager24GetPowerWarResponPenaltyEP5CUser>
 82e9d6d:	d9 5d e8             	fstps  -0x18(%ebp)
 82e9d70:	a1 50 be 40 09       	mov    0x940be50,%eax
 82e9d75:	8b 55 e8             	mov    -0x18(%ebp),%edx
 82e9d78:	89 54 24 08          	mov    %edx,0x8(%esp)
 82e9d7c:	8b 55 e0             	mov    -0x20(%ebp),%edx
 82e9d7f:	89 54 24 04          	mov    %edx,0x4(%esp)
 82e9d83:	89 04 24             	mov    %eax,(%esp)
 82e9d86:	e8 07 71 19 00       	call   8480e92 <_ZN13CPowerManager20GetPowerWarGhostTimeEP5CUserf>
 82e9d8b:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 82e9d8e:	eb 35                	jmp    82e9dc5 <_ZN11pvp_assault13CAssaultPlace12CloseAssaultEv+0x2ef>
 82e9d90:	8b 45 e0             	mov    -0x20(%ebp),%eax
 82e9d93:	89 04 24             	mov    %eax,(%esp)
 82e9d96:	e8 3d 6d 00 00       	call   82f0ad8 <_ZN15CUserCharacInfo22GetCurCharacChaosPointEv>
 82e9d9b:	89 c6                	mov    %eax,%esi
 82e9d9d:	8b 45 e0             	mov    -0x20(%ebp),%eax
 82e9da0:	89 04 24             	mov    %eax,(%esp)
 82e9da3:	e8 10 05 df ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 82e9da8:	89 c3                	mov    %eax,%ebx
 82e9daa:	e8 ec 23 de ff       	call   80cc19b <_Z14G_CDataManagerv>
 82e9daf:	83 c0 68             	add    $0x68,%eax
 82e9db2:	89 74 24 08          	mov    %esi,0x8(%esp)
 82e9db6:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 82e9dba:	89 04 24             	mov    %eax,(%esp)
 82e9dbd:	e8 42 2a 7a 00       	call   8a8c804 <_ZN21ServerParameterScript19getAssaultGhostTimeEii>
 82e9dc2:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 82e9dc5:	8b 45 e0             	mov    -0x20(%ebp),%eax
 82e9dc8:	89 04 24             	mov    %eax,(%esp)
 82e9dcb:	e8 0a 05 df ff       	call   80da2da <_ZN15CUserCharacInfo16IsCurCharacGhostEv>
 82e9dd0:	84 c0                	test   %al,%al
 82e9dd2:	74 0d                	je     82e9de1 <_ZN11pvp_assault13CAssaultPlace12CloseAssaultEv+0x30b>
 82e9dd4:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 82e9dd8:	74 07                	je     82e9de1 <_ZN11pvp_assault13CAssaultPlace12CloseAssaultEv+0x30b>
 82e9dda:	b8 01 00 00 00       	mov    $0x1,%eax
 82e9ddf:	eb 05                	jmp    82e9de6 <_ZN11pvp_assault13CAssaultPlace12CloseAssaultEv+0x310>
 82e9de1:	b8 00 00 00 00       	mov    $0x0,%eax
 82e9de6:	84 c0                	test   %al,%al
 82e9de8:	74 64                	je     82e9e4e <_ZN11pvp_assault13CAssaultPlace12CloseAssaultEv+0x378>
 82e9dea:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 82e9df1:	e8 a8 1e de ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 82e9df6:	89 45 ec             	mov    %eax,-0x14(%ebp)
 82e9df9:	8b 45 e0             	mov    -0x20(%ebp),%eax
 82e9dfc:	8b 55 ec             	mov    -0x14(%ebp),%edx
 82e9dff:	89 54 24 04          	mov    %edx,0x4(%esp)
 82e9e03:	89 04 24             	mov    %eax,(%esp)
 82e9e06:	e8 f9 6d 00 00       	call   82f0c04 <_ZN15CUserCharacInfo24SetCurCharacChaosDieTimeEi>
 82e9e0b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 82e9e0e:	8b 55 ec             	mov    -0x14(%ebp),%edx
 82e9e11:	01 c2                	add    %eax,%edx
 82e9e13:	8b 45 e0             	mov    -0x20(%ebp),%eax
 82e9e16:	89 54 24 04          	mov    %edx,0x4(%esp)
 82e9e1a:	89 04 24             	mov    %eax,(%esp)
 82e9e1d:	e8 d2 50 3a 00       	call   868eef4 <_ZN15CUserCharacInfo27SetCurCharacChaosResponTimeEi>
 82e9e22:	8b 45 e0             	mov    -0x20(%ebp),%eax
 82e9e25:	05 f4 96 07 00       	add    $0x796f4,%eax
 82e9e2a:	89 04 24             	mov    %eax,(%esp)
 82e9e2d:	e8 a8 5d f4 ff       	call   822fbda <_ZN14CCharacterView20enableSaveCharacViewEv>
 82e9e32:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 82e9e35:	89 44 24 08          	mov    %eax,0x8(%esp)
 82e9e39:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 82e9e3c:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e9e40:	8b 45 e0             	mov    -0x20(%ebp),%eax
 82e9e43:	89 04 24             	mov    %eax,(%esp)
 82e9e46:	e8 f7 60 00 00       	call   82eff42 <_ZN11pvp_assault11CAssaultMgr15NotifyGhostTimeEP5CUserii>
 82e9e4b:	eb 01                	jmp    82e9e4e <_ZN11pvp_assault13CAssaultPlace12CloseAssaultEv+0x378>
 82e9e4d:	90                   	nop
 82e9e4e:	83 45 d8 01          	addl   $0x1,-0x28(%ebp)
 82e9e52:	83 7d d8 07          	cmpl   $0x7,-0x28(%ebp)
 82e9e56:	0f 9e c0             	setle  %al
 82e9e59:	84 c0                	test   %al,%al
 82e9e5b:	0f 85 a8 fc ff ff    	jne    82e9b09 <_ZN11pvp_assault13CAssaultPlace12CloseAssaultEv+0x33>
 82e9e61:	8b 45 08             	mov    0x8(%ebp),%eax
 82e9e64:	89 04 24             	mov    %eax,(%esp)
 82e9e67:	e8 8a db ff ff       	call   82e79f6 <_ZN11pvp_assault13CAssaultPlace14_SendUserStateEv>
 82e9e6c:	8d 45 cc             	lea    -0x34(%ebp),%eax
 82e9e6f:	89 04 24             	mov    %eax,(%esp)
 82e9e72:	e8 d5 3e 2a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 82e9e77:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82e9e7e:	00 
 82e9e7f:	8d 45 cc             	lea    -0x34(%ebp),%eax
 82e9e82:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e9e86:	8b 45 08             	mov    0x8(%ebp),%eax
 82e9e89:	89 04 24             	mov    %eax,(%esp)
 82e9e8c:	e8 6b ec ff ff       	call   82e8afc <_ZN11pvp_assault13CAssaultPlace26_MakeViewAssaultIconPlayerEP11PacketGuardb>
 82e9e91:	8d 45 cc             	lea    -0x34(%ebp),%eax
 82e9e94:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e9e98:	8b 45 08             	mov    0x8(%ebp),%eax
 82e9e9b:	89 04 24             	mov    %eax,(%esp)
 82e9e9e:	e8 97 ce ff ff       	call   82e6d3a <_ZN11pvp_assault13CAssaultPlace17_SendPacketToAreaER11PacketGuard>
 82e9ea3:	eb 1b                	jmp    82e9ec0 <_ZN11pvp_assault13CAssaultPlace12CloseAssaultEv+0x3ea>
 82e9ea5:	89 d3                	mov    %edx,%ebx
 82e9ea7:	89 c6                	mov    %eax,%esi
 82e9ea9:	8d 45 cc             	lea    -0x34(%ebp),%eax
 82e9eac:	89 04 24             	mov    %eax,(%esp)
 82e9eaf:	e8 cc 3f 2a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82e9eb4:	89 f0                	mov    %esi,%eax
 82e9eb6:	89 da                	mov    %ebx,%edx
 82e9eb8:	89 04 24             	mov    %eax,(%esp)
 82e9ebb:	e8 90 98 7f 00       	call   8ae3750 <_Unwind_Resume>
 82e9ec0:	8d 45 cc             	lea    -0x34(%ebp),%eax
 82e9ec3:	89 04 24             	mov    %eax,(%esp)
 82e9ec6:	e8 b5 3f 2a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82e9ecb:	a1 50 be 40 09       	mov    0x940be50,%eax
 82e9ed0:	89 04 24             	mov    %eax,(%esp)
 82e9ed3:	e8 38 5a 19 00       	call   847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>
 82e9ed8:	84 c0                	test   %al,%al
 82e9eda:	74 0d                	je     82e9ee9 <_ZN11pvp_assault13CAssaultPlace12CloseAssaultEv+0x413>
 82e9edc:	83 7d dc 07          	cmpl   $0x7,-0x24(%ebp)
 82e9ee0:	75 07                	jne    82e9ee9 <_ZN11pvp_assault13CAssaultPlace12CloseAssaultEv+0x413>
 82e9ee2:	b8 01 00 00 00       	mov    $0x1,%eax
 82e9ee7:	eb 05                	jmp    82e9eee <_ZN11pvp_assault13CAssaultPlace12CloseAssaultEv+0x418>
 82e9ee9:	b8 00 00 00 00       	mov    $0x0,%eax
 82e9eee:	84 c0                	test   %al,%al
 82e9ef0:	0f 84 9a 00 00 00    	je     82e9f90 <_ZN11pvp_assault13CAssaultPlace12CloseAssaultEv+0x4ba>
 82e9ef6:	8b 45 08             	mov    0x8(%ebp),%eax
 82e9ef9:	05 2c 01 00 00       	add    $0x12c,%eax
 82e9efe:	89 04 24             	mov    %eax,(%esp)
 82e9f01:	e8 04 67 00 00       	call   82f060a <_ZN11pvp_assault9PartyInfo3GetEv>
 82e9f06:	89 45 f0             	mov    %eax,-0x10(%ebp)
 82e9f09:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 82e9f0d:	74 34                	je     82e9f43 <_ZN11pvp_assault13CAssaultPlace12CloseAssaultEv+0x46d>
 82e9f0f:	c7 44 24 04 2a 00 00 	movl   $0x2a,0x4(%esp)
 82e9f16:	00 
 82e9f17:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82e9f1a:	89 04 24             	mov    %eax,(%esp)
 82e9f1d:	e8 54 0f 2b 00       	call   859ae76 <_ZN6CParty13gen_timer_keyE13TIMER_MESSAGE>
 82e9f22:	89 c3                	mov    %eax,%ebx
 82e9f24:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82e9f27:	89 04 24             	mov    %eax,(%esp)
 82e9f2a:	e8 17 39 f4 ff       	call   822d846 <_ZN6CParty13GetPartyIndexEv>
 82e9f2f:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 82e9f33:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e9f37:	c7 04 24 3c 00 00 00 	movl   $0x3c,(%esp)
 82e9f3e:	e8 d7 d7 34 00       	call   863771a <_ZN36TimerCompleteLoadAfterAssaultTimeout15registNextTimerElii>
 82e9f43:	8b 45 08             	mov    0x8(%ebp),%eax
 82e9f46:	05 30 01 00 00       	add    $0x130,%eax
 82e9f4b:	89 04 24             	mov    %eax,(%esp)
 82e9f4e:	e8 b7 66 00 00       	call   82f060a <_ZN11pvp_assault9PartyInfo3GetEv>
 82e9f53:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82e9f56:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 82e9f5a:	74 34                	je     82e9f90 <_ZN11pvp_assault13CAssaultPlace12CloseAssaultEv+0x4ba>
 82e9f5c:	c7 44 24 04 2a 00 00 	movl   $0x2a,0x4(%esp)
 82e9f63:	00 
 82e9f64:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82e9f67:	89 04 24             	mov    %eax,(%esp)
 82e9f6a:	e8 07 0f 2b 00       	call   859ae76 <_ZN6CParty13gen_timer_keyE13TIMER_MESSAGE>
 82e9f6f:	89 c3                	mov    %eax,%ebx
 82e9f71:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82e9f74:	89 04 24             	mov    %eax,(%esp)
 82e9f77:	e8 ca 38 f4 ff       	call   822d846 <_ZN6CParty13GetPartyIndexEv>
 82e9f7c:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 82e9f80:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e9f84:	c7 04 24 3c 00 00 00 	movl   $0x3c,(%esp)
 82e9f8b:	e8 8a d7 34 00       	call   863771a <_ZN36TimerCompleteLoadAfterAssaultTimeout15registNextTimerElii>
 82e9f90:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 82e9f97:	eb 36                	jmp    82e9fcf <_ZN11pvp_assault13CAssaultPlace12CloseAssaultEv+0x4f9>
 82e9f99:	8b 45 d8             	mov    -0x28(%ebp),%eax
 82e9f9c:	c1 e0 05             	shl    $0x5,%eax
 82e9f9f:	03 45 08             	add    0x8(%ebp),%eax
 82e9fa2:	89 04 24             	mov    %eax,(%esp)
 82e9fa5:	e8 b2 65 00 00       	call   82f055c <_ZN11pvp_assault10CAssaulter5EmptyEv>
 82e9faa:	84 c0                	test   %al,%al
 82e9fac:	75 1c                	jne    82e9fca <_ZN11pvp_assault13CAssaultPlace12CloseAssaultEv+0x4f4>
 82e9fae:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 82e9fb5:	00 
 82e9fb6:	8b 45 d8             	mov    -0x28(%ebp),%eax
 82e9fb9:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e9fbd:	8b 45 08             	mov    0x8(%ebp),%eax
 82e9fc0:	89 04 24             	mov    %eax,(%esp)
 82e9fc3:	e8 64 ce ff ff       	call   82e6e2c <_ZN11pvp_assault13CAssaultPlace8_DelUserEib>
 82e9fc8:	eb 01                	jmp    82e9fcb <_ZN11pvp_assault13CAssaultPlace12CloseAssaultEv+0x4f5>
 82e9fca:	90                   	nop
 82e9fcb:	83 45 d8 01          	addl   $0x1,-0x28(%ebp)
 82e9fcf:	83 7d d8 07          	cmpl   $0x7,-0x28(%ebp)
 82e9fd3:	0f 9e c0             	setle  %al
 82e9fd6:	84 c0                	test   %al,%al
 82e9fd8:	75 bf                	jne    82e9f99 <_ZN11pvp_assault13CAssaultPlace12CloseAssaultEv+0x4c3>
 82e9fda:	8b 45 08             	mov    0x8(%ebp),%eax
 82e9fdd:	8b 80 04 01 00 00    	mov    0x104(%eax),%eax
 82e9fe3:	89 c3                	mov    %eax,%ebx
 82e9fe5:	e8 b6 b0 f4 ff       	call   82350a0 <_ZN11pvp_assault21GetInstanceAssaultMgrEv>
 82e9fea:	8b 55 08             	mov    0x8(%ebp),%edx
 82e9fed:	89 54 24 08          	mov    %edx,0x8(%esp)
 82e9ff1:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 82e9ff5:	89 04 24             	mov    %eax,(%esp)
 82e9ff8:	e8 6d 3b 00 00       	call   82edb6a <_ZN11pvp_assault11CAssaultMgr16FreeAssaultPlaceEiPNS_13CAssaultPlaceE>
 82e9ffd:	83 c4 40             	add    $0x40,%esp
 82ea000:	5b                   	pop    %ebx
 82ea001:	5e                   	pop    %esi
 82ea002:	5d                   	pop    %ebp
 82ea003:	c3                   	ret

```

```c
// pvp_assault::CAssaultPlace::CloseAssault @ 0x82e9ad6

/* pvp_assault::CAssaultPlace::CloseAssault() */

void __thiscall pvp_assault::CAssaultPlace::CloseAssault(CAssaultPlace *this)

{
  bool bVar1;
  uchar uVar2;
  char cVar3;
  ushort uVar4;
  uint uVar5;
  CUserCharacInfo *this_00;
  int iVar6;
  int iVar7;
  int iVar8;
  CAssaultMgr *this_01;
  longdouble lVar9;
  PacketGuard local_38 [12];
  int local_2c;
  int local_28;
  CUserCharacInfo *local_24;
  int local_20;
  float local_1c;
  int local_18;
  CParty *local_14;
  CParty *local_10;
  
  local_2c = 0;
  local_28 = 0;
  if (0 < *(int *)(this + 0x100)) {
    for (local_2c = 0; local_2c < 8; local_2c = local_2c + 1) {
      cVar3 = CAssaulter::Empty((CAssaulter *)(this + local_2c * 0x20));
      if (cVar3 == '\0') {
        local_24 = (CUserCharacInfo *)CAssaulter::GetUser((CAssaulter *)(this + local_2c * 0x20));
        if (local_24 != (CUserCharacInfo *)0x0) {
          cVar3 = CPowerManager::IsPowerWarEventOn();
          if (cVar3 == '\0') {
LAB_082e9b67:
            bVar1 = false;
          }
          else {
            cVar3 = CUserCharacInfo::getCurCharacVill(local_24);
            if (cVar3 != '\a') goto LAB_082e9b67;
            bVar1 = true;
          }
          if (bVar1) {
            cVar3 = CAssaulter::IsPowerWarWinner((CAssaulter *)(this + local_2c * 0x20));
            if (cVar3 != '\x01') {
              ForcedMoveAtPowerWarPlace((CUser *)local_24);
            }
            uVar5 = CUserCharacInfo::getPowerWarHP(local_24);
            _SendCloseAssault(this,(CUser *)local_24,uVar5 & 0xffff);
          }
          else {
            iVar7 = CUserCharacInfo::getCurCharacR(local_24);
            if (iVar7 != 0) {
              cVar3 = CUserCharacInfo::IsCurCharacGhost(local_24);
              if (cVar3 == '\0') {
                iVar7 = CAssaulter::GetHp((CAssaulter *)(this + local_2c * 0x20));
                uVar2 = _SendCloseAssault(this,(CUser *)local_24,iVar7);
                CUserCharacInfo::setCurCharacStamina(local_24,uVar2);
              }
              else {
                uVar2 = _SendCloseAssault(this,(CUser *)local_24,100);
                CUserCharacInfo::setCurCharacStamina(local_24,uVar2);
              }
            }
          }
          cVar3 = CUserCharacInfo::getCurCharacVill(local_24);
          local_28 = (int)cVar3;
        }
        this_00 = (CUserCharacInfo *)CAssaulter::GetUser((CAssaulter *)(this + local_2c * 0x20));
        CUserCharacInfo::SetAssaultPlace(this_00,0);
        cVar3 = CAssaulter::IsPowerWarWinner((CAssaulter *)(this + local_2c * 0x20));
        if (cVar3 != '\0') {
          uVar4 = CUserCharacInfo::getPowerWarHP(local_24);
          if (uVar4 < 0x1e) {
            CUserCharacInfo::setPowerWarHP(local_24,0x1e);
          }
        }
        iVar7 = CAssaulter::GetTeam((CAssaulter *)(this + local_2c * 0x20));
        if (iVar7 == *(int *)(this + 0x124)) {
          cVar3 = CPowerManager::IsPowerWarEventOn();
          if (cVar3 == '\x01') goto LAB_082e9cfe;
          cVar3 = CUserCharacInfo::getCurCharacVill(local_24);
          if (cVar3 == '\a') goto LAB_082e9cfe;
          bVar1 = true;
        }
        else {
LAB_082e9cfe:
          bVar1 = false;
        }
        if (bVar1) {
          iVar7 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
          CUserCharacInfo::SetCurCharacChaosKillTime(local_24,iVar7);
        }
        local_20 = 0;
        cVar3 = CPowerManager::IsPowerWarEventOn();
        if (cVar3 == '\0') {
          cVar3 = CUserCharacInfo::getCurCharacVill(local_24);
          if (cVar3 == '\a') goto LAB_082e9d49;
          bVar1 = false;
        }
        else {
LAB_082e9d49:
          bVar1 = true;
        }
        if (bVar1) {
          lVar9 = (longdouble)
                  CPowerManager::GetPowerWarResponPenalty
                            (GlobalData::s_power_manager,(CUser *)local_24);
          local_1c = (float)lVar9;
          local_20 = CPowerManager::GetPowerWarGhostTime
                               (GlobalData::s_power_manager,(CUser *)local_24,local_1c);
        }
        else {
          iVar7 = CUserCharacInfo::GetCurCharacChaosPoint(local_24);
          iVar8 = CUserCharacInfo::get_charac_level(local_24);
          iVar6 = G_CDataManager();
          local_20 = ServerParameterScript::getAssaultGhostTime
                               ((ServerParameterScript *)(iVar6 + 0x68),iVar8,iVar7);
        }
        cVar3 = CUserCharacInfo::IsCurCharacGhost(local_24);
        if ((cVar3 == '\0') || (local_20 == 0)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          local_18 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
          CUserCharacInfo::SetCurCharacChaosDieTime(local_24,local_18);
          CUserCharacInfo::SetCurCharacChaosResponTime(local_24,local_18 + local_20);
          CCharacterView::enableSaveCharacView((CCharacterView *)(local_24 + 0x796f4));
          CAssaultMgr::NotifyGhostTime((CUser *)local_24,local_20,local_20);
        }
      }
    }
    _SendUserState(this);
  }
  PacketGuard::PacketGuard(local_38);
                    /* try { // try from 082e9e8c to 082e9ea2 has its CatchHandler @ 082e9ea5 */
  _MakeViewAssaultIconPlayer(this,local_38,false);
  _SendPacketToArea(this,local_38);
  PacketGuard::~PacketGuard(local_38);
  cVar3 = CPowerManager::IsPowerWarEventOn();
  if ((cVar3 == '\0') || (local_28 != 7)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    local_14 = (CParty *)PartyInfo::Get((PartyInfo *)(this + 300));
    if (local_14 != (CParty *)0x0) {
      iVar7 = CParty::gen_timer_key(local_14,0x2a);
      iVar8 = CParty::GetPartyIndex(local_14);
      TimerCompleteLoadAfterAssaultTimeout::registNextTimer(0x3c,iVar8,iVar7);
    }
    local_10 = (CParty *)PartyInfo::Get((PartyInfo *)(this + 0x130));
    if (local_10 != (CParty *)0x0) {
      iVar7 = CParty::gen_timer_key(local_10,0x2a);
      iVar8 = CParty::GetPartyIndex(local_10);
      TimerCompleteLoadAfterAssaultTimeout::registNextTimer(0x3c,iVar8,iVar7);
    }
  }
  for (local_2c = 0; local_2c < 8; local_2c = local_2c + 1) {
    cVar3 = CAssaulter::Empty((CAssaulter *)(this + local_2c * 0x20));
    if (cVar3 == '\0') {
      _DelUser(this,local_2c,true);
    }
  }
  iVar7 = *(int *)(this + 0x104);
  this_01 = (CAssaultMgr *)GetInstanceAssaultMgr();
  CAssaultMgr::FreeAssaultPlace(this_01,iVar7,this);
  return;
}

```

---

## CompleteLoad

```asm
// === 082eb774 pvp_assault::CAssaultPlace::CompleteLoad  [0x082eb774-0x82eb955] ===
 82eb774:	55                   	push   %ebp
 82eb775:	89 e5                	mov    %esp,%ebp
 82eb777:	56                   	push   %esi
 82eb778:	53                   	push   %ebx
 82eb779:	83 ec 30             	sub    $0x30,%esp
 82eb77c:	8b 45 08             	mov    0x8(%ebp),%eax
 82eb77f:	8b 80 0c 01 00 00    	mov    0x10c(%eax),%eax
 82eb785:	83 f8 02             	cmp    $0x2,%eax
 82eb788:	74 2c                	je     82eb7b6 <_ZN11pvp_assault13CAssaultPlace12CompleteLoadEP5CUser+0x42>
 82eb78a:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 82eb791:	e8 6a a0 43 00       	call   8725800 <__cxa_allocate_exception>
 82eb796:	89 c2                	mov    %eax,%edx
 82eb798:	c7 02 13 00 00 00    	movl   $0x13,(%edx)
 82eb79e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82eb7a5:	00 
 82eb7a6:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 82eb7ad:	08 
 82eb7ae:	89 04 24             	mov    %eax,(%esp)
 82eb7b1:	e8 9a 94 43 00       	call   8724c50 <__cxa_throw>
 82eb7b6:	c6 45 f3 01          	movb   $0x1,-0xd(%ebp)
 82eb7ba:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 82eb7c1:	e9 1c 01 00 00       	jmp    82eb8e2 <_ZN11pvp_assault13CAssaultPlace12CompleteLoadEP5CUser+0x16e>
 82eb7c6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82eb7c9:	c1 e0 05             	shl    $0x5,%eax
 82eb7cc:	03 45 08             	add    0x8(%ebp),%eax
 82eb7cf:	89 04 24             	mov    %eax,(%esp)
 82eb7d2:	e8 85 4d 00 00       	call   82f055c <_ZN11pvp_assault10CAssaulter5EmptyEv>
 82eb7d7:	84 c0                	test   %al,%al
 82eb7d9:	0f 85 fe 00 00 00    	jne    82eb8dd <_ZN11pvp_assault13CAssaultPlace12CompleteLoadEP5CUser+0x169>
 82eb7df:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82eb7e2:	c1 e0 05             	shl    $0x5,%eax
 82eb7e5:	03 45 08             	add    0x8(%ebp),%eax
 82eb7e8:	89 04 24             	mov    %eax,(%esp)
 82eb7eb:	e8 52 4d 00 00       	call   82f0542 <_ZN11pvp_assault10CAssaulter7GetUserEv>
 82eb7f0:	3b 45 0c             	cmp    0xc(%ebp),%eax
 82eb7f3:	0f 94 c0             	sete   %al
 82eb7f6:	84 c0                	test   %al,%al
 82eb7f8:	0f 84 be 00 00 00    	je     82eb8bc <_ZN11pvp_assault13CAssaultPlace12CompleteLoadEP5CUser+0x148>
 82eb7fe:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82eb801:	c1 e0 05             	shl    $0x5,%eax
 82eb804:	03 45 08             	add    0x8(%ebp),%eax
 82eb807:	89 04 24             	mov    %eax,(%esp)
 82eb80a:	e8 7b 4d 00 00       	call   82f058a <_ZN11pvp_assault10CAssaulter8GetStateEv>
 82eb80f:	83 f8 01             	cmp    $0x1,%eax
 82eb812:	0f 95 c0             	setne  %al
 82eb815:	84 c0                	test   %al,%al
 82eb817:	74 2c                	je     82eb845 <_ZN11pvp_assault13CAssaultPlace12CompleteLoadEP5CUser+0xd1>
 82eb819:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 82eb820:	e8 db 9f 43 00       	call   8725800 <__cxa_allocate_exception>
 82eb825:	89 c2                	mov    %eax,%edx
 82eb827:	c7 02 12 00 00 00    	movl   $0x12,(%edx)
 82eb82d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82eb834:	00 
 82eb835:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 82eb83c:	08 
 82eb83d:	89 04 24             	mov    %eax,(%esp)
 82eb840:	e8 0b 94 43 00       	call   8724c50 <__cxa_throw>
 82eb845:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82eb848:	c1 e0 05             	shl    $0x5,%eax
 82eb84b:	03 45 08             	add    0x8(%ebp),%eax
 82eb84e:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 82eb855:	00 
 82eb856:	89 04 24             	mov    %eax,(%esp)
 82eb859:	e8 1e 4d 00 00       	call   82f057c <_ZN11pvp_assault10CAssaulter8SetStateENS_18ENUM_ASSAULT_STATEE>
 82eb85e:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82eb861:	89 04 24             	mov    %eax,(%esp)
 82eb864:	e8 e3 24 2a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 82eb869:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82eb86c:	89 44 24 08          	mov    %eax,0x8(%esp)
 82eb870:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82eb873:	89 44 24 04          	mov    %eax,0x4(%esp)
 82eb877:	8b 45 08             	mov    0x8(%ebp),%eax
 82eb87a:	89 04 24             	mov    %eax,(%esp)
 82eb87d:	e8 8e cf ff ff       	call   82e8810 <_ZN11pvp_assault13CAssaultPlace17_MakeCompleteLoadEP11PacketGuardi>
 82eb882:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82eb885:	89 44 24 04          	mov    %eax,0x4(%esp)
 82eb889:	8b 45 08             	mov    0x8(%ebp),%eax
 82eb88c:	89 04 24             	mov    %eax,(%esp)
 82eb88f:	e8 62 b3 ff ff       	call   82e6bf6 <_ZN11pvp_assault13CAssaultPlace10SendPacketER11PacketGuard>
 82eb894:	eb 1b                	jmp    82eb8b1 <_ZN11pvp_assault13CAssaultPlace12CompleteLoadEP5CUser+0x13d>
 82eb896:	89 d3                	mov    %edx,%ebx
 82eb898:	89 c6                	mov    %eax,%esi
 82eb89a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82eb89d:	89 04 24             	mov    %eax,(%esp)
 82eb8a0:	e8 db 25 2a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82eb8a5:	89 f0                	mov    %esi,%eax
 82eb8a7:	89 da                	mov    %ebx,%edx
 82eb8a9:	89 04 24             	mov    %eax,(%esp)
 82eb8ac:	e8 9f 7e 7f 00       	call   8ae3750 <_Unwind_Resume>
 82eb8b1:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82eb8b4:	89 04 24             	mov    %eax,(%esp)
 82eb8b7:	e8 c4 25 2a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82eb8bc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82eb8bf:	c1 e0 05             	shl    $0x5,%eax
 82eb8c2:	03 45 08             	add    0x8(%ebp),%eax
 82eb8c5:	89 04 24             	mov    %eax,(%esp)
 82eb8c8:	e8 bd 4c 00 00       	call   82f058a <_ZN11pvp_assault10CAssaulter8GetStateEv>
 82eb8cd:	83 f8 02             	cmp    $0x2,%eax
 82eb8d0:	0f 95 c0             	setne  %al
 82eb8d3:	84 c0                	test   %al,%al
 82eb8d5:	74 07                	je     82eb8de <_ZN11pvp_assault13CAssaultPlace12CompleteLoadEP5CUser+0x16a>
 82eb8d7:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
 82eb8db:	eb 01                	jmp    82eb8de <_ZN11pvp_assault13CAssaultPlace12CompleteLoadEP5CUser+0x16a>
 82eb8dd:	90                   	nop
 82eb8de:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 82eb8e2:	83 7d f4 07          	cmpl   $0x7,-0xc(%ebp)
 82eb8e6:	0f 9e c0             	setle  %al
 82eb8e9:	84 c0                	test   %al,%al
 82eb8eb:	0f 85 d5 fe ff ff    	jne    82eb7c6 <_ZN11pvp_assault13CAssaultPlace12CompleteLoadEP5CUser+0x52>
 82eb8f1:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
 82eb8f5:	74 57                	je     82eb94e <_ZN11pvp_assault13CAssaultPlace12CompleteLoadEP5CUser+0x1da>
 82eb8f7:	8b 45 08             	mov    0x8(%ebp),%eax
 82eb8fa:	89 04 24             	mov    %eax,(%esp)
 82eb8fd:	e8 f8 d8 ff ff       	call   82e91fa <_ZN11pvp_assault13CAssaultPlace12DoConnectP2PEv>
 82eb902:	8b 45 08             	mov    0x8(%ebp),%eax
 82eb905:	8b 80 2c 01 00 00    	mov    0x12c(%eax),%eax
 82eb90b:	85 c0                	test   %eax,%eax
 82eb90d:	74 19                	je     82eb928 <_ZN11pvp_assault13CAssaultPlace12CompleteLoadEP5CUser+0x1b4>
 82eb90f:	8b 45 08             	mov    0x8(%ebp),%eax
 82eb912:	8b 80 2c 01 00 00    	mov    0x12c(%eax),%eax
 82eb918:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 82eb91f:	00 
 82eb920:	89 04 24             	mov    %eax,(%esp)
 82eb923:	e8 0c a1 fb ff       	call   82a5a34 <_ZN6CParty15SetAssaultStateEc>
 82eb928:	8b 45 08             	mov    0x8(%ebp),%eax
 82eb92b:	8b 80 30 01 00 00    	mov    0x130(%eax),%eax
 82eb931:	85 c0                	test   %eax,%eax
 82eb933:	74 19                	je     82eb94e <_ZN11pvp_assault13CAssaultPlace12CompleteLoadEP5CUser+0x1da>
 82eb935:	8b 45 08             	mov    0x8(%ebp),%eax
 82eb938:	8b 80 30 01 00 00    	mov    0x130(%eax),%eax
 82eb93e:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 82eb945:	00 
 82eb946:	89 04 24             	mov    %eax,(%esp)
 82eb949:	e8 e6 a0 fb ff       	call   82a5a34 <_ZN6CParty15SetAssaultStateEc>
 82eb94e:	83 c4 30             	add    $0x30,%esp
 82eb951:	5b                   	pop    %ebx
 82eb952:	5e                   	pop    %esi
 82eb953:	5d                   	pop    %ebp
 82eb954:	c3                   	ret
 82eb955:	90                   	nop

```

```c
// pvp_assault::CAssaultPlace::CompleteLoad @ 0x82eb774

/* pvp_assault::CAssaultPlace::CompleteLoad(CUser*) */

void __thiscall pvp_assault::CAssaultPlace::CompleteLoad(CAssaultPlace *this,CUser *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  CUser *pCVar3;
  int iVar4;
  PacketGuard local_20 [15];
  char local_11;
  int local_10;
  
  if (*(int *)(this + 0x10c) != 2) {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 0x13;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&ENUM_ERROR::typeinfo,0);
  }
  local_11 = '\x01';
  local_10 = 0;
  do {
    if (7 < local_10) {
      if (local_11 != '\0') {
        DoConnectP2P(this);
        if (*(int *)(this + 300) != 0) {
          CParty::SetAssaultState(*(CParty **)(this + 300),'\x03');
        }
        if (*(int *)(this + 0x130) != 0) {
          CParty::SetAssaultState(*(CParty **)(this + 0x130),'\x03');
        }
      }
      return;
    }
    cVar1 = CAssaulter::Empty((CAssaulter *)(this + local_10 * 0x20));
    if (cVar1 == '\0') {
      pCVar3 = (CUser *)CAssaulter::GetUser((CAssaulter *)(this + local_10 * 0x20));
      if (pCVar3 == param_1) {
        iVar4 = CAssaulter::GetState((CAssaulter *)(this + local_10 * 0x20));
        if (iVar4 != 1) {
          puVar2 = (undefined4 *)__cxa_allocate_exception(4);
          *puVar2 = 0x12;
                    /* WARNING: Subroutine does not return */
          __cxa_throw(puVar2,&ENUM_ERROR::typeinfo,0);
        }
        CAssaulter::SetState((CAssaulter *)(this + local_10 * 0x20),2);
        PacketGuard::PacketGuard(local_20);
                    /* try { // try from 082eb87d to 082eb893 has its CatchHandler @ 082eb896 */
        _MakeCompleteLoad(this,local_20,local_10);
        SendPacket(this,local_20);
        PacketGuard::~PacketGuard(local_20);
      }
      iVar4 = CAssaulter::GetState((CAssaulter *)(this + local_10 * 0x20));
      if (iVar4 != 2) {
        local_11 = '\0';
      }
    }
    local_10 = local_10 + 1;
  } while( true );
}

```

---

## ConnectP2P

```asm
// === 082eb956 pvp_assault::CAssaultPlace::ConnectP2P  [0x082eb956-0x82ebaed] ===
 82eb956:	55                   	push   %ebp
 82eb957:	89 e5                	mov    %esp,%ebp
 82eb959:	83 ec 28             	sub    $0x28,%esp
 82eb95c:	8b 45 08             	mov    0x8(%ebp),%eax
 82eb95f:	8b 80 0c 01 00 00    	mov    0x10c(%eax),%eax
 82eb965:	83 f8 03             	cmp    $0x3,%eax
 82eb968:	74 2c                	je     82eb996 <_ZN11pvp_assault13CAssaultPlace10ConnectP2PEP5CUserPci+0x40>
 82eb96a:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 82eb971:	e8 8a 9e 43 00       	call   8725800 <__cxa_allocate_exception>
 82eb976:	89 c2                	mov    %eax,%edx
 82eb978:	c7 02 13 00 00 00    	movl   $0x13,(%edx)
 82eb97e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82eb985:	00 
 82eb986:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 82eb98d:	08 
 82eb98e:	89 04 24             	mov    %eax,(%esp)
 82eb991:	e8 ba 92 43 00       	call   8724c50 <__cxa_throw>
 82eb996:	c6 45 f3 01          	movb   $0x1,-0xd(%ebp)
 82eb99a:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 82eb9a1:	e9 d9 00 00 00       	jmp    82eba7f <_ZN11pvp_assault13CAssaultPlace10ConnectP2PEP5CUserPci+0x129>
 82eb9a6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82eb9a9:	c1 e0 05             	shl    $0x5,%eax
 82eb9ac:	03 45 08             	add    0x8(%ebp),%eax
 82eb9af:	89 04 24             	mov    %eax,(%esp)
 82eb9b2:	e8 a5 4b 00 00       	call   82f055c <_ZN11pvp_assault10CAssaulter5EmptyEv>
 82eb9b7:	84 c0                	test   %al,%al
 82eb9b9:	0f 85 bb 00 00 00    	jne    82eba7a <_ZN11pvp_assault13CAssaultPlace10ConnectP2PEP5CUserPci+0x124>
 82eb9bf:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82eb9c2:	c1 e0 05             	shl    $0x5,%eax
 82eb9c5:	03 45 08             	add    0x8(%ebp),%eax
 82eb9c8:	89 04 24             	mov    %eax,(%esp)
 82eb9cb:	e8 72 4b 00 00       	call   82f0542 <_ZN11pvp_assault10CAssaulter7GetUserEv>
 82eb9d0:	3b 45 0c             	cmp    0xc(%ebp),%eax
 82eb9d3:	0f 94 c0             	sete   %al
 82eb9d6:	84 c0                	test   %al,%al
 82eb9d8:	74 7f                	je     82eba59 <_ZN11pvp_assault13CAssaultPlace10ConnectP2PEP5CUserPci+0x103>
 82eb9da:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82eb9dd:	c1 e0 05             	shl    $0x5,%eax
 82eb9e0:	03 45 08             	add    0x8(%ebp),%eax
 82eb9e3:	89 04 24             	mov    %eax,(%esp)
 82eb9e6:	e8 9f 4b 00 00       	call   82f058a <_ZN11pvp_assault10CAssaulter8GetStateEv>
 82eb9eb:	83 f8 03             	cmp    $0x3,%eax
 82eb9ee:	0f 95 c0             	setne  %al
 82eb9f1:	84 c0                	test   %al,%al
 82eb9f3:	74 2c                	je     82eba21 <_ZN11pvp_assault13CAssaultPlace10ConnectP2PEP5CUserPci+0xcb>
 82eb9f5:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 82eb9fc:	e8 ff 9d 43 00       	call   8725800 <__cxa_allocate_exception>
 82eba01:	89 c2                	mov    %eax,%edx
 82eba03:	c7 02 12 00 00 00    	movl   $0x12,(%edx)
 82eba09:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82eba10:	00 
 82eba11:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 82eba18:	08 
 82eba19:	89 04 24             	mov    %eax,(%esp)
 82eba1c:	e8 2f 92 43 00       	call   8724c50 <__cxa_throw>
 82eba21:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82eba24:	c1 e0 05             	shl    $0x5,%eax
 82eba27:	03 45 08             	add    0x8(%ebp),%eax
 82eba2a:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 82eba31:	00 
 82eba32:	89 04 24             	mov    %eax,(%esp)
 82eba35:	e8 42 4b 00 00       	call   82f057c <_ZN11pvp_assault10CAssaulter8SetStateENS_18ENUM_ASSAULT_STATEE>
 82eba3a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82eba3d:	c1 e0 05             	shl    $0x5,%eax
 82eba40:	03 45 08             	add    0x8(%ebp),%eax
 82eba43:	8b 55 14             	mov    0x14(%ebp),%edx
 82eba46:	89 54 24 08          	mov    %edx,0x8(%esp)
 82eba4a:	8b 55 10             	mov    0x10(%ebp),%edx
 82eba4d:	89 54 24 04          	mov    %edx,0x4(%esp)
 82eba51:	89 04 24             	mov    %eax,(%esp)
 82eba54:	e8 29 b0 ff ff       	call   82e6a82 <_ZN11pvp_assault10CAssaulter17SetUserConnectP2PEPci>
 82eba59:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82eba5c:	c1 e0 05             	shl    $0x5,%eax
 82eba5f:	03 45 08             	add    0x8(%ebp),%eax
 82eba62:	89 04 24             	mov    %eax,(%esp)
 82eba65:	e8 20 4b 00 00       	call   82f058a <_ZN11pvp_assault10CAssaulter8GetStateEv>
 82eba6a:	83 f8 04             	cmp    $0x4,%eax
 82eba6d:	0f 95 c0             	setne  %al
 82eba70:	84 c0                	test   %al,%al
 82eba72:	74 07                	je     82eba7b <_ZN11pvp_assault13CAssaultPlace10ConnectP2PEP5CUserPci+0x125>
 82eba74:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
 82eba78:	eb 01                	jmp    82eba7b <_ZN11pvp_assault13CAssaultPlace10ConnectP2PEP5CUserPci+0x125>
 82eba7a:	90                   	nop
 82eba7b:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 82eba7f:	83 7d f4 07          	cmpl   $0x7,-0xc(%ebp)
 82eba83:	0f 9e c0             	setle  %al
 82eba86:	84 c0                	test   %al,%al
 82eba88:	0f 85 18 ff ff ff    	jne    82eb9a6 <_ZN11pvp_assault13CAssaultPlace10ConnectP2PEP5CUserPci+0x50>
 82eba8e:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
 82eba92:	74 57                	je     82ebaeb <_ZN11pvp_assault13CAssaultPlace10ConnectP2PEP5CUserPci+0x195>
 82eba94:	8b 45 08             	mov    0x8(%ebp),%eax
 82eba97:	89 04 24             	mov    %eax,(%esp)
 82eba9a:	e8 63 da ff ff       	call   82e9502 <_ZN11pvp_assault13CAssaultPlace12StartAssaultEv>
 82eba9f:	8b 45 08             	mov    0x8(%ebp),%eax
 82ebaa2:	8b 80 2c 01 00 00    	mov    0x12c(%eax),%eax
 82ebaa8:	85 c0                	test   %eax,%eax
 82ebaaa:	74 19                	je     82ebac5 <_ZN11pvp_assault13CAssaultPlace10ConnectP2PEP5CUserPci+0x16f>
 82ebaac:	8b 45 08             	mov    0x8(%ebp),%eax
 82ebaaf:	8b 80 2c 01 00 00    	mov    0x12c(%eax),%eax
 82ebab5:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 82ebabc:	00 
 82ebabd:	89 04 24             	mov    %eax,(%esp)
 82ebac0:	e8 6f 9f fb ff       	call   82a5a34 <_ZN6CParty15SetAssaultStateEc>
 82ebac5:	8b 45 08             	mov    0x8(%ebp),%eax
 82ebac8:	8b 80 30 01 00 00    	mov    0x130(%eax),%eax
 82ebace:	85 c0                	test   %eax,%eax
 82ebad0:	74 19                	je     82ebaeb <_ZN11pvp_assault13CAssaultPlace10ConnectP2PEP5CUserPci+0x195>
 82ebad2:	8b 45 08             	mov    0x8(%ebp),%eax
 82ebad5:	8b 80 30 01 00 00    	mov    0x130(%eax),%eax
 82ebadb:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 82ebae2:	00 
 82ebae3:	89 04 24             	mov    %eax,(%esp)
 82ebae6:	e8 49 9f fb ff       	call   82a5a34 <_ZN6CParty15SetAssaultStateEc>
 82ebaeb:	c9                   	leave
 82ebaec:	c3                   	ret
 82ebaed:	90                   	nop

```

```c
// pvp_assault::CAssaultPlace::ConnectP2P @ 0x82eb956

/* pvp_assault::CAssaultPlace::ConnectP2P(CUser*, char*, int) */

void pvp_assault::CAssaultPlace::ConnectP2P(CUser *param_1,char *param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int iVar5;
  int local_10;
  
  if (*(int *)(param_1 + 0x10c) != 3) {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x13;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&ENUM_ERROR::typeinfo,0);
  }
  bVar1 = true;
  local_10 = 0;
  do {
    if (7 < local_10) {
      if (bVar1) {
        StartAssault((CAssaultPlace *)param_1);
        if (*(int *)(param_1 + 300) != 0) {
          CParty::SetAssaultState(*(CParty **)(param_1 + 300),'\x04');
        }
        if (*(int *)(param_1 + 0x130) != 0) {
          CParty::SetAssaultState(*(CParty **)(param_1 + 0x130),'\x04');
        }
      }
      return;
    }
    cVar2 = CAssaulter::Empty((CAssaulter *)(param_1 + local_10 * 0x20));
    if (cVar2 == '\0') {
      pcVar4 = (char *)CAssaulter::GetUser((CAssaulter *)(param_1 + local_10 * 0x20));
      if (pcVar4 == param_2) {
        iVar5 = CAssaulter::GetState((CAssaulter *)(param_1 + local_10 * 0x20));
        if (iVar5 != 3) {
          puVar3 = (undefined4 *)__cxa_allocate_exception(4);
          *puVar3 = 0x12;
                    /* WARNING: Subroutine does not return */
          __cxa_throw(puVar3,&ENUM_ERROR::typeinfo,0);
        }
        CAssaulter::SetState((CAssaulter *)(param_1 + local_10 * 0x20),4);
        CAssaulter::SetUserConnectP2P((char *)(param_1 + local_10 * 0x20),param_3);
      }
      iVar5 = CAssaulter::GetState((CAssaulter *)(param_1 + local_10 * 0x20));
      if (iVar5 != 4) {
        bVar1 = false;
      }
    }
    local_10 = local_10 + 1;
  } while( true );
}

```

---

## DieUser

```asm
// === 082ebda6 pvp_assault::CAssaultPlace::DieUser  [0x082ebda6-0x82ec557] ===
 82ebda6:	55                   	push   %ebp
 82ebda7:	89 e5                	mov    %esp,%ebp
 82ebda9:	57                   	push   %edi
 82ebdaa:	56                   	push   %esi
 82ebdab:	53                   	push   %ebx
 82ebdac:	81 ec cc 00 00 00    	sub    $0xcc,%esp
 82ebdb2:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 82ebdb9:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 82ebdc0:	8d 45 9f             	lea    -0x61(%ebp),%eax
 82ebdc3:	ba 15 00 00 00       	mov    $0x15,%edx
 82ebdc8:	b9 00 00 00 00       	mov    $0x0,%ecx
 82ebdcd:	89 c3                	mov    %eax,%ebx
 82ebdcf:	83 e3 01             	and    $0x1,%ebx
 82ebdd2:	85 db                	test   %ebx,%ebx
 82ebdd4:	74 08                	je     82ebdde <_ZN11pvp_assault13CAssaultPlace7DieUserEiiR22MSG_DIE_ASSAULT_PLAYER+0x38>
 82ebdd6:	88 08                	mov    %cl,(%eax)
 82ebdd8:	83 c0 01             	add    $0x1,%eax
 82ebddb:	83 ea 01             	sub    $0x1,%edx
 82ebdde:	89 c3                	mov    %eax,%ebx
 82ebde0:	83 e3 02             	and    $0x2,%ebx
 82ebde3:	85 db                	test   %ebx,%ebx
 82ebde5:	74 09                	je     82ebdf0 <_ZN11pvp_assault13CAssaultPlace7DieUserEiiR22MSG_DIE_ASSAULT_PLAYER+0x4a>
 82ebde7:	66 89 08             	mov    %cx,(%eax)
 82ebdea:	83 c0 02             	add    $0x2,%eax
 82ebded:	83 ea 02             	sub    $0x2,%edx
 82ebdf0:	89 d6                	mov    %edx,%esi
 82ebdf2:	83 e6 fc             	and    $0xfffffffc,%esi
 82ebdf5:	bb 00 00 00 00       	mov    $0x0,%ebx
 82ebdfa:	89 0c 18             	mov    %ecx,(%eax,%ebx,1)
 82ebdfd:	83 c3 04             	add    $0x4,%ebx
 82ebe00:	39 f3                	cmp    %esi,%ebx
 82ebe02:	72 f6                	jb     82ebdfa <_ZN11pvp_assault13CAssaultPlace7DieUserEiiR22MSG_DIE_ASSAULT_PLAYER+0x54>
 82ebe04:	01 d8                	add    %ebx,%eax
 82ebe06:	89 d3                	mov    %edx,%ebx
 82ebe08:	83 e3 02             	and    $0x2,%ebx
 82ebe0b:	85 db                	test   %ebx,%ebx
 82ebe0d:	74 06                	je     82ebe15 <_ZN11pvp_assault13CAssaultPlace7DieUserEiiR22MSG_DIE_ASSAULT_PLAYER+0x6f>
 82ebe0f:	66 89 08             	mov    %cx,(%eax)
 82ebe12:	83 c0 02             	add    $0x2,%eax
 82ebe15:	83 e2 01             	and    $0x1,%edx
 82ebe18:	85 d2                	test   %edx,%edx
 82ebe1a:	74 05                	je     82ebe21 <_ZN11pvp_assault13CAssaultPlace7DieUserEiiR22MSG_DIE_ASSAULT_PLAYER+0x7b>
 82ebe1c:	88 08                	mov    %cl,(%eax)
 82ebe1e:	83 c0 01             	add    $0x1,%eax
 82ebe21:	8b 45 08             	mov    0x8(%ebp),%eax
 82ebe24:	8b 80 0c 01 00 00    	mov    0x10c(%eax),%eax
 82ebe2a:	83 f8 04             	cmp    $0x4,%eax
 82ebe2d:	74 2c                	je     82ebe5b <_ZN11pvp_assault13CAssaultPlace7DieUserEiiR22MSG_DIE_ASSAULT_PLAYER+0xb5>
 82ebe2f:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 82ebe36:	e8 c5 99 43 00       	call   8725800 <__cxa_allocate_exception>
 82ebe3b:	89 c2                	mov    %eax,%edx
 82ebe3d:	c7 02 13 00 00 00    	movl   $0x13,(%edx)
 82ebe43:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82ebe4a:	00 
 82ebe4b:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 82ebe52:	08 
 82ebe53:	89 04 24             	mov    %eax,(%esp)
 82ebe56:	e8 f5 8d 43 00       	call   8724c50 <__cxa_throw>
 82ebe5b:	8b 45 0c             	mov    0xc(%ebp),%eax
 82ebe5e:	c1 e0 05             	shl    $0x5,%eax
 82ebe61:	03 45 08             	add    0x8(%ebp),%eax
 82ebe64:	89 04 24             	mov    %eax,(%esp)
 82ebe67:	e8 d6 46 00 00       	call   82f0542 <_ZN11pvp_assault10CAssaulter7GetUserEv>
 82ebe6c:	89 45 d8             	mov    %eax,-0x28(%ebp)
 82ebe6f:	8b 45 0c             	mov    0xc(%ebp),%eax
 82ebe72:	c1 e0 05             	shl    $0x5,%eax
 82ebe75:	03 45 08             	add    0x8(%ebp),%eax
 82ebe78:	89 04 24             	mov    %eax,(%esp)
 82ebe7b:	e8 0a 47 00 00       	call   82f058a <_ZN11pvp_assault10CAssaulter8GetStateEv>
 82ebe80:	83 f8 05             	cmp    $0x5,%eax
 82ebe83:	0f 95 c0             	setne  %al
 82ebe86:	84 c0                	test   %al,%al
 82ebe88:	74 2c                	je     82ebeb6 <_ZN11pvp_assault13CAssaultPlace7DieUserEiiR22MSG_DIE_ASSAULT_PLAYER+0x110>
 82ebe8a:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 82ebe91:	e8 6a 99 43 00       	call   8725800 <__cxa_allocate_exception>
 82ebe96:	89 c2                	mov    %eax,%edx
 82ebe98:	c7 02 12 00 00 00    	movl   $0x12,(%edx)
 82ebe9e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82ebea5:	00 
 82ebea6:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 82ebead:	08 
 82ebeae:	89 04 24             	mov    %eax,(%esp)
 82ebeb1:	e8 9a 8d 43 00       	call   8724c50 <__cxa_throw>
 82ebeb6:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 82ebeba:	0f 88 55 01 00 00    	js     82ec015 <_ZN11pvp_assault13CAssaultPlace7DieUserEiiR22MSG_DIE_ASSAULT_PLAYER+0x26f>
 82ebec0:	83 7d 10 07          	cmpl   $0x7,0x10(%ebp)
 82ebec4:	0f 8f 4b 01 00 00    	jg     82ec015 <_ZN11pvp_assault13CAssaultPlace7DieUserEiiR22MSG_DIE_ASSAULT_PLAYER+0x26f>
 82ebeca:	8b 45 10             	mov    0x10(%ebp),%eax
 82ebecd:	c1 e0 05             	shl    $0x5,%eax
 82ebed0:	03 45 08             	add    0x8(%ebp),%eax
 82ebed3:	89 04 24             	mov    %eax,(%esp)
 82ebed6:	e8 67 46 00 00       	call   82f0542 <_ZN11pvp_assault10CAssaulter7GetUserEv>
 82ebedb:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 82ebede:	8b 45 10             	mov    0x10(%ebp),%eax
 82ebee1:	c1 e0 05             	shl    $0x5,%eax
 82ebee4:	03 45 08             	add    0x8(%ebp),%eax
 82ebee7:	89 04 24             	mov    %eax,(%esp)
 82ebeea:	e8 9b 46 00 00       	call   82f058a <_ZN11pvp_assault10CAssaulter8GetStateEv>
 82ebeef:	83 f8 05             	cmp    $0x5,%eax
 82ebef2:	0f 95 c0             	setne  %al
 82ebef5:	84 c0                	test   %al,%al
 82ebef7:	74 36                	je     82ebf2f <_ZN11pvp_assault13CAssaultPlace7DieUserEiiR22MSG_DIE_ASSAULT_PLAYER+0x189>
 82ebef9:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82ebf00:	00 
 82ebf01:	c7 44 24 08 37 0d 00 	movl   $0xd37,0x8(%esp)
 82ebf08:	00 
 82ebf09:	c7 44 24 04 80 cf c1 	movl   $0x8c1cf80,0x4(%esp)
 82ebf10:	08 
 82ebf11:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 82ebf14:	89 04 24             	mov    %eax,(%esp)
 82ebf17:	e8 fc 37 26 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 82ebf1c:	c7 44 24 04 20 be c1 	movl   $0x8c1be20,0x4(%esp)
 82ebf23:	08 
 82ebf24:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 82ebf27:	89 04 24             	mov    %eax,(%esp)
 82ebf2a:	e8 59 38 26 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 82ebf2f:	8b 45 10             	mov    0x10(%ebp),%eax
 82ebf32:	c1 e0 05             	shl    $0x5,%eax
 82ebf35:	03 45 08             	add    0x8(%ebp),%eax
 82ebf38:	89 04 24             	mov    %eax,(%esp)
 82ebf3b:	e8 fc a6 ff ff       	call   82e663c <_ZNK11pvp_assault10CAssaulter13GetCharacNameEv>
 82ebf40:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 82ebf47:	00 
 82ebf48:	89 44 24 04          	mov    %eax,0x4(%esp)
 82ebf4c:	8d 45 9f             	lea    -0x61(%ebp),%eax
 82ebf4f:	89 04 24             	mov    %eax,(%esp)
 82ebf52:	e8 79 19 d9 ff       	call   807d8d0 <strncpy@plt>
 82ebf57:	83 7d d4 00          	cmpl   $0x0,-0x2c(%ebp)
 82ebf5b:	0f 84 fa 00 00 00    	je     82ec05b <_ZN11pvp_assault13CAssaultPlace7DieUserEiiR22MSG_DIE_ASSAULT_PLAYER+0x2b5>
 82ebf61:	8b 45 14             	mov    0x14(%ebp),%eax
 82ebf64:	8b 00                	mov    (%eax),%eax
 82ebf66:	85 c0                	test   %eax,%eax
 82ebf68:	0f 84 f0 00 00 00    	je     82ec05e <_ZN11pvp_assault13CAssaultPlace7DieUserEiiR22MSG_DIE_ASSAULT_PLAYER+0x2b8>
 82ebf6e:	8b 45 14             	mov    0x14(%ebp),%eax
 82ebf71:	8b 00                	mov    (%eax),%eax
 82ebf73:	83 f8 01             	cmp    $0x1,%eax
 82ebf76:	75 3a                	jne    82ebfb2 <_ZN11pvp_assault13CAssaultPlace7DieUserEiiR22MSG_DIE_ASSAULT_PLAYER+0x20c>
 82ebf78:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 82ebf7b:	89 04 24             	mov    %eax,(%esp)
 82ebf7e:	e8 d7 d9 e0 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 82ebf83:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 82ebf8a:	00 
 82ebf8b:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 82ebf92:	00 
 82ebf93:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 82ebf9a:	00 
 82ebf9b:	c7 44 24 08 7d 00 00 	movl   $0x7d,0x8(%esp)
 82ebfa2:	00 
 82ebfa3:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 82ebfa6:	89 54 24 04          	mov    %edx,0x4(%esp)
 82ebfaa:	89 04 24             	mov    %eax,(%esp)
 82ebfad:	e8 cc cc e0 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 82ebfb2:	8b 45 14             	mov    0x14(%ebp),%eax
 82ebfb5:	8b 40 04             	mov    0x4(%eax),%eax
 82ebfb8:	8b 55 14             	mov    0x14(%ebp),%edx
 82ebfbb:	8b 12                	mov    (%edx),%edx
 82ebfbd:	89 95 64 ff ff ff    	mov    %edx,-0x9c(%ebp)
 82ebfc3:	ba 00 00 00 00       	mov    $0x0,%edx
 82ebfc8:	f7 b5 64 ff ff ff    	divl   -0x9c(%ebp)
 82ebfce:	3d a0 86 01 00       	cmp    $0x186a0,%eax
 82ebfd3:	0f 8e 88 00 00 00    	jle    82ec061 <_ZN11pvp_assault13CAssaultPlace7DieUserEiiR22MSG_DIE_ASSAULT_PLAYER+0x2bb>
 82ebfd9:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 82ebfdc:	89 04 24             	mov    %eax,(%esp)
 82ebfdf:	e8 76 d9 e0 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 82ebfe4:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 82ebfeb:	00 
 82ebfec:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 82ebff3:	00 
 82ebff4:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 82ebffb:	00 
 82ebffc:	c7 44 24 08 7e 00 00 	movl   $0x7e,0x8(%esp)
 82ec003:	00 
 82ec004:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 82ec007:	89 54 24 04          	mov    %edx,0x4(%esp)
 82ec00b:	89 04 24             	mov    %eax,(%esp)
 82ec00e:	e8 6b cc e0 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 82ec013:	eb 4d                	jmp    82ec062 <_ZN11pvp_assault13CAssaultPlace7DieUserEiiR22MSG_DIE_ASSAULT_PLAYER+0x2bc>
 82ec015:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82ec01c:	00 
 82ec01d:	c7 44 24 08 54 0d 00 	movl   $0xd54,0x8(%esp)
 82ec024:	00 
 82ec025:	c7 44 24 04 80 cf c1 	movl   $0x8c1cf80,0x4(%esp)
 82ec02c:	08 
 82ec02d:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 82ec030:	89 04 24             	mov    %eax,(%esp)
 82ec033:	e8 e0 36 26 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 82ec038:	8b 45 10             	mov    0x10(%ebp),%eax
 82ec03b:	89 44 24 0c          	mov    %eax,0xc(%esp)
 82ec03f:	8b 45 0c             	mov    0xc(%ebp),%eax
 82ec042:	89 44 24 08          	mov    %eax,0x8(%esp)
 82ec046:	c7 44 24 04 54 be c1 	movl   $0x8c1be54,0x4(%esp)
 82ec04d:	08 
 82ec04e:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 82ec051:	89 04 24             	mov    %eax,(%esp)
 82ec054:	e8 2f 37 26 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 82ec059:	eb 07                	jmp    82ec062 <_ZN11pvp_assault13CAssaultPlace7DieUserEiiR22MSG_DIE_ASSAULT_PLAYER+0x2bc>
 82ec05b:	90                   	nop
 82ec05c:	eb 04                	jmp    82ec062 <_ZN11pvp_assault13CAssaultPlace7DieUserEiiR22MSG_DIE_ASSAULT_PLAYER+0x2bc>
 82ec05e:	90                   	nop
 82ec05f:	eb 01                	jmp    82ec062 <_ZN11pvp_assault13CAssaultPlace7DieUserEiiR22MSG_DIE_ASSAULT_PLAYER+0x2bc>
 82ec061:	90                   	nop
 82ec062:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 82ec066:	0f 84 34 01 00 00    	je     82ec1a0 <_ZN11pvp_assault13CAssaultPlace7DieUserEiiR22MSG_DIE_ASSAULT_PLAYER+0x3fa>
 82ec06c:	8b 45 d8             	mov    -0x28(%ebp),%eax
 82ec06f:	89 04 24             	mov    %eax,(%esp)
 82ec072:	e8 ed 94 35 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 82ec077:	3c 07                	cmp    $0x7,%al
 82ec079:	75 18                	jne    82ec093 <_ZN11pvp_assault13CAssaultPlace7DieUserEiiR22MSG_DIE_ASSAULT_PLAYER+0x2ed>
 82ec07b:	a1 50 be 40 09       	mov    0x940be50,%eax
 82ec080:	89 04 24             	mov    %eax,(%esp)
 82ec083:	e8 88 38 19 00       	call   847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>
 82ec088:	84 c0                	test   %al,%al
 82ec08a:	74 07                	je     82ec093 <_ZN11pvp_assault13CAssaultPlace7DieUserEiiR22MSG_DIE_ASSAULT_PLAYER+0x2ed>
 82ec08c:	b8 01 00 00 00       	mov    $0x1,%eax
 82ec091:	eb 05                	jmp    82ec098 <_ZN11pvp_assault13CAssaultPlace7DieUserEiiR22MSG_DIE_ASSAULT_PLAYER+0x2f2>
 82ec093:	b8 00 00 00 00       	mov    $0x0,%eax
 82ec098:	84 c0                	test   %al,%al
 82ec09a:	0f 84 81 00 00 00    	je     82ec121 <_ZN11pvp_assault13CAssaultPlace7DieUserEiiR22MSG_DIE_ASSAULT_PLAYER+0x37b>
 82ec0a0:	8b 45 14             	mov    0x14(%ebp),%eax
 82ec0a3:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 82ec0a7:	98                   	cwtl
 82ec0a8:	89 85 68 ff ff ff    	mov    %eax,-0x98(%ebp)
 82ec0ae:	8b 45 14             	mov    0x14(%ebp),%eax
 82ec0b1:	0f b7 40 0c          	movzwl 0xc(%eax),%eax
 82ec0b5:	98                   	cwtl
 82ec0b6:	89 85 6c ff ff ff    	mov    %eax,-0x94(%ebp)
 82ec0bc:	8b 45 14             	mov    0x14(%ebp),%eax
 82ec0bf:	0f b7 40 0a          	movzwl 0xa(%eax),%eax
 82ec0c3:	0f bf f8             	movswl %ax,%edi
 82ec0c6:	8b 45 14             	mov    0x14(%ebp),%eax
 82ec0c9:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 82ec0cd:	0f bf f0             	movswl %ax,%esi
 82ec0d0:	8b 45 14             	mov    0x14(%ebp),%eax
 82ec0d3:	8b 58 04             	mov    0x4(%eax),%ebx
 82ec0d6:	8b 45 14             	mov    0x14(%ebp),%eax
 82ec0d9:	8b 08                	mov    (%eax),%ecx
 82ec0db:	8b 45 d8             	mov    -0x28(%ebp),%eax
 82ec0de:	8d 90 00 97 07 00    	lea    0x79700(%eax),%edx
 82ec0e4:	8d 45 9f             	lea    -0x61(%ebp),%eax
 82ec0e7:	89 44 24 20          	mov    %eax,0x20(%esp)
 82ec0eb:	8b 85 68 ff ff ff    	mov    -0x98(%ebp),%eax
 82ec0f1:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 82ec0f5:	8b 85 6c ff ff ff    	mov    -0x94(%ebp),%eax
 82ec0fb:	89 44 24 18          	mov    %eax,0x18(%esp)
 82ec0ff:	89 7c 24 14          	mov    %edi,0x14(%esp)
 82ec103:	89 74 24 10          	mov    %esi,0x10(%esp)
 82ec107:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 82ec10b:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 82ec10f:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 82ec116:	00 
 82ec117:	89 14 24             	mov    %edx,(%esp)
 82ec11a:	e8 71 a3 39 00       	call   8686490 <_ZN15cUserHistoryLog6DiePvPE23ENUM_PVP_HISTORY_REASONjjiiiiPKc>
 82ec11f:	eb 7f                	jmp    82ec1a0 <_ZN11pvp_assault13CAssaultPlace7DieUserEiiR22MSG_DIE_ASSAULT_PLAYER+0x3fa>
 82ec121:	8b 45 14             	mov    0x14(%ebp),%eax
 82ec124:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 82ec128:	98                   	cwtl
 82ec129:	89 85 70 ff ff ff    	mov    %eax,-0x90(%ebp)
 82ec12f:	8b 45 14             	mov    0x14(%ebp),%eax
 82ec132:	0f b7 40 0c          	movzwl 0xc(%eax),%eax
 82ec136:	98                   	cwtl
 82ec137:	89 85 74 ff ff ff    	mov    %eax,-0x8c(%ebp)
 82ec13d:	8b 45 14             	mov    0x14(%ebp),%eax
 82ec140:	0f b7 40 0a          	movzwl 0xa(%eax),%eax
 82ec144:	0f bf f8             	movswl %ax,%edi
 82ec147:	8b 45 14             	mov    0x14(%ebp),%eax
 82ec14a:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 82ec14e:	0f bf f0             	movswl %ax,%esi
 82ec151:	8b 45 14             	mov    0x14(%ebp),%eax
 82ec154:	8b 58 04             	mov    0x4(%eax),%ebx
 82ec157:	8b 45 14             	mov    0x14(%ebp),%eax
 82ec15a:	8b 08                	mov    (%eax),%ecx
 82ec15c:	8b 45 d8             	mov    -0x28(%ebp),%eax
 82ec15f:	8d 90 00 97 07 00    	lea    0x79700(%eax),%edx
 82ec165:	8d 45 9f             	lea    -0x61(%ebp),%eax
 82ec168:	89 44 24 20          	mov    %eax,0x20(%esp)
 82ec16c:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 82ec172:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 82ec176:	8b 85 74 ff ff ff    	mov    -0x8c(%ebp),%eax
 82ec17c:	89 44 24 18          	mov    %eax,0x18(%esp)
 82ec180:	89 7c 24 14          	mov    %edi,0x14(%esp)
 82ec184:	89 74 24 10          	mov    %esi,0x10(%esp)
 82ec188:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 82ec18c:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 82ec190:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 82ec197:	00 
 82ec198:	89 14 24             	mov    %edx,(%esp)
 82ec19b:	e8 f0 a2 39 00       	call   8686490 <_ZN15cUserHistoryLog6DiePvPE23ENUM_PVP_HISTORY_REASONjjiiiiPKc>
 82ec1a0:	8b 45 08             	mov    0x8(%ebp),%eax
 82ec1a3:	89 04 24             	mov    %eax,(%esp)
 82ec1a6:	e8 43 f9 ff ff       	call   82ebaee <_ZN11pvp_assault13CAssaultPlace17_IsChangeDieStateEv>
 82ec1ab:	84 c0                	test   %al,%al
 82ec1ad:	74 12                	je     82ec1c1 <_ZN11pvp_assault13CAssaultPlace7DieUserEiiR22MSG_DIE_ASSAULT_PLAYER+0x41b>
 82ec1af:	8b 45 0c             	mov    0xc(%ebp),%eax
 82ec1b2:	89 44 24 04          	mov    %eax,0x4(%esp)
 82ec1b6:	8b 45 08             	mov    0x8(%ebp),%eax
 82ec1b9:	89 04 24             	mov    %eax,(%esp)
 82ec1bc:	e8 37 f9 ff ff       	call   82ebaf8 <_ZN11pvp_assault13CAssaultPlace15_ChangeDieStateEi>
 82ec1c1:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 82ec1c5:	74 2a                	je     82ec1f1 <_ZN11pvp_assault13CAssaultPlace7DieUserEiiR22MSG_DIE_ASSAULT_PLAYER+0x44b>
 82ec1c7:	8b 45 d8             	mov    -0x28(%ebp),%eax
 82ec1ca:	89 04 24             	mov    %eax,(%esp)
 82ec1cd:	e8 92 93 35 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 82ec1d2:	3c 07                	cmp    $0x7,%al
 82ec1d4:	75 14                	jne    82ec1ea <_ZN11pvp_assault13CAssaultPlace7DieUserEiiR22MSG_DIE_ASSAULT_PLAYER+0x444>
 82ec1d6:	a1 50 be 40 09       	mov    0x940be50,%eax
 82ec1db:	89 04 24             	mov    %eax,(%esp)
 82ec1de:	e8 2d 37 19 00       	call   847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>
 82ec1e3:	83 f0 01             	xor    $0x1,%eax
 82ec1e6:	84 c0                	test   %al,%al
 82ec1e8:	74 07                	je     82ec1f1 <_ZN11pvp_assault13CAssaultPlace7DieUserEiiR22MSG_DIE_ASSAULT_PLAYER+0x44b>
 82ec1ea:	b8 01 00 00 00       	mov    $0x1,%eax
 82ec1ef:	eb 05                	jmp    82ec1f6 <_ZN11pvp_assault13CAssaultPlace7DieUserEiiR22MSG_DIE_ASSAULT_PLAYER+0x450>
 82ec1f1:	b8 00 00 00 00       	mov    $0x0,%eax
 82ec1f6:	84 c0                	test   %al,%al
 82ec1f8:	74 60                	je     82ec25a <_ZN11pvp_assault13CAssaultPlace7DieUserEiiR22MSG_DIE_ASSAULT_PLAYER+0x4b4>
 82ec1fa:	8d 45 90             	lea    -0x70(%ebp),%eax
 82ec1fd:	89 04 24             	mov    %eax,(%esp)
 82ec200:	e8 47 1b 2a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 82ec205:	8b 45 d8             	mov    -0x28(%ebp),%eax
 82ec208:	89 44 24 08          	mov    %eax,0x8(%esp)
 82ec20c:	8d 45 90             	lea    -0x70(%ebp),%eax
 82ec20f:	89 44 24 04          	mov    %eax,0x4(%esp)
 82ec213:	8b 45 08             	mov    0x8(%ebp),%eax
 82ec216:	89 04 24             	mov    %eax,(%esp)
 82ec219:	e8 42 cb ff ff       	call   82e8d60 <_ZN11pvp_assault13CAssaultPlace14_MakeUserStateEP11PacketGuardP5CUser>
 82ec21e:	e8 84 e1 de ff       	call   80da3a7 <_Z11G_GameWorldv>
 82ec223:	8d 55 90             	lea    -0x70(%ebp),%edx
 82ec226:	89 54 24 04          	mov    %edx,0x4(%esp)
 82ec22a:	89 04 24             	mov    %eax,(%esp)
 82ec22d:	e8 e2 c9 3d 00       	call   86c8c14 <_ZN9GameWorld8send_allER11PacketGuard>
 82ec232:	eb 1b                	jmp    82ec24f <_ZN11pvp_assault13CAssaultPlace7DieUserEiiR22MSG_DIE_ASSAULT_PLAYER+0x4a9>
 82ec234:	89 d3                	mov    %edx,%ebx
 82ec236:	89 c6                	mov    %eax,%esi
 82ec238:	8d 45 90             	lea    -0x70(%ebp),%eax
 82ec23b:	89 04 24             	mov    %eax,(%esp)
 82ec23e:	e8 3d 1c 2a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82ec243:	89 f0                	mov    %esi,%eax
 82ec245:	89 da                	mov    %ebx,%edx
 82ec247:	89 04 24             	mov    %eax,(%esp)
 82ec24a:	e8 01 75 7f 00       	call   8ae3750 <_Unwind_Resume>
 82ec24f:	8d 45 90             	lea    -0x70(%ebp),%eax
 82ec252:	89 04 24             	mov    %eax,(%esp)
 82ec255:	e8 26 1c 2a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82ec25a:	83 7d d4 00          	cmpl   $0x0,-0x2c(%ebp)
 82ec25e:	74 2a                	je     82ec28a <_ZN11pvp_assault13CAssaultPlace7DieUserEiiR22MSG_DIE_ASSAULT_PLAYER+0x4e4>
 82ec260:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 82ec263:	89 04 24             	mov    %eax,(%esp)
 82ec266:	e8 f9 92 35 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 82ec26b:	3c 07                	cmp    $0x7,%al
 82ec26d:	75 14                	jne    82ec283 <_ZN11pvp_assault13CAssaultPlace7DieUserEiiR22MSG_DIE_ASSAULT_PLAYER+0x4dd>
 82ec26f:	a1 50 be 40 09       	mov    0x940be50,%eax
 82ec274:	89 04 24             	mov    %eax,(%esp)
 82ec277:	e8 94 36 19 00       	call   847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>
 82ec27c:	83 f0 01             	xor    $0x1,%eax
 82ec27f:	84 c0                	test   %al,%al
 82ec281:	74 07                	je     82ec28a <_ZN11pvp_assault13CAssaultPlace7DieUserEiiR22MSG_DIE_ASSAULT_PLAYER+0x4e4>
 82ec283:	b8 01 00 00 00       	mov    $0x1,%eax
 82ec288:	eb 05                	jmp    82ec28f <_ZN11pvp_assault13CAssaultPlace7DieUserEiiR22MSG_DIE_ASSAULT_PLAYER+0x4e9>
 82ec28a:	b8 00 00 00 00       	mov    $0x0,%eax
 82ec28f:	84 c0                	test   %al,%al
 82ec291:	74 28                	je     82ec2bb <_ZN11pvp_assault13CAssaultPlace7DieUserEiiR22MSG_DIE_ASSAULT_PLAYER+0x515>
 82ec293:	8b 45 08             	mov    0x8(%ebp),%eax
 82ec296:	89 04 24             	mov    %eax,(%esp)
 82ec299:	e8 c6 fa ff ff       	call   82ebd64 <_ZN11pvp_assault13CAssaultPlace15_IsProcsssChaosEv>
 82ec29e:	84 c0                	test   %al,%al
 82ec2a0:	74 19                	je     82ec2bb <_ZN11pvp_assault13CAssaultPlace7DieUserEiiR22MSG_DIE_ASSAULT_PLAYER+0x515>
 82ec2a2:	8b 45 10             	mov    0x10(%ebp),%eax
 82ec2a5:	89 44 24 08          	mov    %eax,0x8(%esp)
 82ec2a9:	8b 45 0c             	mov    0xc(%ebp),%eax
 82ec2ac:	89 44 24 04          	mov    %eax,0x4(%esp)
 82ec2b0:	8b 45 08             	mov    0x8(%ebp),%eax
 82ec2b3:	89 04 24             	mov    %eax,(%esp)
 82ec2b6:	e8 e1 f8 ff ff       	call   82ebb9c <_ZN11pvp_assault13CAssaultPlace13_ProcessChaosEii>
 82ec2bb:	8b 45 08             	mov    0x8(%ebp),%eax
 82ec2be:	89 04 24             	mov    %eax,(%esp)
 82ec2c1:	e8 d4 ce ff ff       	call   82e919a <_ZN11pvp_assault13CAssaultPlace17_CheckAssaultableEv>
 82ec2c6:	83 f0 01             	xor    $0x1,%eax
 82ec2c9:	84 c0                	test   %al,%al
 82ec2cb:	0f 84 7b 02 00 00    	je     82ec54c <_ZN11pvp_assault13CAssaultPlace7DieUserEiiR22MSG_DIE_ASSAULT_PLAYER+0x7a6>
 82ec2d1:	83 7d d4 00          	cmpl   $0x0,-0x2c(%ebp)
 82ec2d5:	74 2d                	je     82ec304 <_ZN11pvp_assault13CAssaultPlace7DieUserEiiR22MSG_DIE_ASSAULT_PLAYER+0x55e>
 82ec2d7:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 82ec2db:	74 27                	je     82ec304 <_ZN11pvp_assault13CAssaultPlace7DieUserEiiR22MSG_DIE_ASSAULT_PLAYER+0x55e>
 82ec2dd:	8b 45 d8             	mov    -0x28(%ebp),%eax
 82ec2e0:	89 04 24             	mov    %eax,(%esp)
 82ec2e3:	e8 7c 92 35 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 82ec2e8:	3c 07                	cmp    $0x7,%al
 82ec2ea:	75 18                	jne    82ec304 <_ZN11pvp_assault13CAssaultPlace7DieUserEiiR22MSG_DIE_ASSAULT_PLAYER+0x55e>
 82ec2ec:	a1 50 be 40 09       	mov    0x940be50,%eax
 82ec2f1:	89 04 24             	mov    %eax,(%esp)
 82ec2f4:	e8 17 36 19 00       	call   847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>
 82ec2f9:	84 c0                	test   %al,%al
 82ec2fb:	74 07                	je     82ec304 <_ZN11pvp_assault13CAssaultPlace7DieUserEiiR22MSG_DIE_ASSAULT_PLAYER+0x55e>
 82ec2fd:	b8 01 00 00 00       	mov    $0x1,%eax
 82ec302:	eb 05                	jmp    82ec309 <_ZN11pvp_assault13CAssaultPlace7DieUserEiiR22MSG_DIE_ASSAULT_PLAYER+0x563>
 82ec304:	b8 00 00 00 00       	mov    $0x0,%eax
 82ec309:	84 c0                	test   %al,%al
 82ec30b:	0f 84 75 01 00 00    	je     82ec486 <_ZN11pvp_assault13CAssaultPlace7DieUserEiiR22MSG_DIE_ASSAULT_PLAYER+0x6e0>
 82ec311:	c7 45 8c 00 00 00 00 	movl   $0x0,-0x74(%ebp)
 82ec318:	c7 45 88 00 00 00 00 	movl   $0x0,-0x78(%ebp)
 82ec31f:	c7 45 84 00 00 00 00 	movl   $0x0,-0x7c(%ebp)
 82ec326:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 82ec32d:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 82ec334:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 82ec338:	78 20                	js     82ec35a <_ZN11pvp_assault13CAssaultPlace7DieUserEiiR22MSG_DIE_ASSAULT_PLAYER+0x5b4>
 82ec33a:	83 7d 10 07          	cmpl   $0x7,0x10(%ebp)
 82ec33e:	7f 1a                	jg     82ec35a <_ZN11pvp_assault13CAssaultPlace7DieUserEiiR22MSG_DIE_ASSAULT_PLAYER+0x5b4>
 82ec340:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 82ec343:	89 04 24             	mov    %eax,(%esp)
 82ec346:	e8 7b 39 f4 ff       	call   822fcc6 <_ZN5CUser12getPowerSideEv>
 82ec34b:	0f be c0             	movsbl %al,%eax
 82ec34e:	89 45 dc             	mov    %eax,-0x24(%ebp)
 82ec351:	c7 45 e0 01 00 00 00 	movl   $0x1,-0x20(%ebp)
 82ec358:	eb 18                	jmp    82ec372 <_ZN11pvp_assault13CAssaultPlace7DieUserEiiR22MSG_DIE_ASSAULT_PLAYER+0x5cc>
 82ec35a:	8b 45 d8             	mov    -0x28(%ebp),%eax
 82ec35d:	89 04 24             	mov    %eax,(%esp)
 82ec360:	e8 61 39 f4 ff       	call   822fcc6 <_ZN5CUser12getPowerSideEv>
 82ec365:	0f be c0             	movsbl %al,%eax
 82ec368:	89 45 dc             	mov    %eax,-0x24(%ebp)
 82ec36b:	c7 45 e0 02 00 00 00 	movl   $0x2,-0x20(%ebp)
 82ec372:	8d 45 84             	lea    -0x7c(%ebp),%eax
 82ec375:	89 44 24 14          	mov    %eax,0x14(%esp)
 82ec379:	8d 45 88             	lea    -0x78(%ebp),%eax
 82ec37c:	89 44 24 10          	mov    %eax,0x10(%esp)
 82ec380:	8d 45 8c             	lea    -0x74(%ebp),%eax
 82ec383:	89 44 24 0c          	mov    %eax,0xc(%esp)
 82ec387:	8b 45 e0             	mov    -0x20(%ebp),%eax
 82ec38a:	89 44 24 08          	mov    %eax,0x8(%esp)
 82ec38e:	8b 45 dc             	mov    -0x24(%ebp),%eax
 82ec391:	89 44 24 04          	mov    %eax,0x4(%esp)
 82ec395:	8b 45 08             	mov    0x8(%ebp),%eax
 82ec398:	89 04 24             	mov    %eax,(%esp)
 82ec39b:	e8 c2 af ff ff       	call   82e7362 <_ZN11pvp_assault13CAssaultPlace22_CheckPowerWarInPlayerE20ENUM_POWER_SIDE_TYPE30ENUM_POWER_WAR_WINNER_OR_LOSERRiS3_S3_>
 82ec3a0:	84 c0                	test   %al,%al
 82ec3a2:	0f 84 de 00 00 00    	je     82ec486 <_ZN11pvp_assault13CAssaultPlace7DieUserEiiR22MSG_DIE_ASSAULT_PLAYER+0x6e0>
 82ec3a8:	83 7d e0 01          	cmpl   $0x1,-0x20(%ebp)
 82ec3ac:	75 30                	jne    82ec3de <_ZN11pvp_assault13CAssaultPlace7DieUserEiiR22MSG_DIE_ASSAULT_PLAYER+0x638>
 82ec3ae:	8b 4d 84             	mov    -0x7c(%ebp),%ecx
 82ec3b1:	8b 55 88             	mov    -0x78(%ebp),%edx
 82ec3b4:	8b 45 8c             	mov    -0x74(%ebp),%eax
 82ec3b7:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 82ec3bb:	89 54 24 10          	mov    %edx,0x10(%esp)
 82ec3bf:	89 44 24 0c          	mov    %eax,0xc(%esp)
 82ec3c3:	8b 45 e0             	mov    -0x20(%ebp),%eax
 82ec3c6:	89 44 24 08          	mov    %eax,0x8(%esp)
 82ec3ca:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 82ec3cd:	89 44 24 04          	mov    %eax,0x4(%esp)
 82ec3d1:	8b 45 08             	mov    0x8(%ebp),%eax
 82ec3d4:	89 04 24             	mov    %eax,(%esp)
 82ec3d7:	e8 d6 0a 00 00       	call   82eceb2 <_ZN11pvp_assault13CAssaultPlace31_SendPowerWarPointToGuildServerEP5CUser30ENUM_POWER_WAR_WINNER_OR_LOSERiii>
 82ec3dc:	eb 2e                	jmp    82ec40c <_ZN11pvp_assault13CAssaultPlace7DieUserEiiR22MSG_DIE_ASSAULT_PLAYER+0x666>
 82ec3de:	8b 4d 84             	mov    -0x7c(%ebp),%ecx
 82ec3e1:	8b 55 88             	mov    -0x78(%ebp),%edx
 82ec3e4:	8b 45 8c             	mov    -0x74(%ebp),%eax
 82ec3e7:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 82ec3eb:	89 54 24 10          	mov    %edx,0x10(%esp)
 82ec3ef:	89 44 24 0c          	mov    %eax,0xc(%esp)
 82ec3f3:	8b 45 e0             	mov    -0x20(%ebp),%eax
 82ec3f6:	89 44 24 08          	mov    %eax,0x8(%esp)
 82ec3fa:	8b 45 d8             	mov    -0x28(%ebp),%eax
 82ec3fd:	89 44 24 04          	mov    %eax,0x4(%esp)
 82ec401:	8b 45 08             	mov    0x8(%ebp),%eax
 82ec404:	89 04 24             	mov    %eax,(%esp)
 82ec407:	e8 a6 0a 00 00       	call   82eceb2 <_ZN11pvp_assault13CAssaultPlace31_SendPowerWarPointToGuildServerEP5CUser30ENUM_POWER_WAR_WINNER_OR_LOSERiii>
 82ec40c:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 82ec412:	89 04 24             	mov    %eax,(%esp)
 82ec415:	e8 32 19 2a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 82ec41a:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 82ec420:	89 44 24 04          	mov    %eax,0x4(%esp)
 82ec424:	8b 45 08             	mov    0x8(%ebp),%eax
 82ec427:	89 04 24             	mov    %eax,(%esp)
 82ec42a:	e8 2b c8 ff ff       	call   82e8c5a <_ZN11pvp_assault13CAssaultPlace14_MakeUserStateEP11PacketGuard>
 82ec42f:	e8 73 df de ff       	call   80da3a7 <_Z11G_GameWorldv>
 82ec434:	8d 95 78 ff ff ff    	lea    -0x88(%ebp),%edx
 82ec43a:	89 54 24 04          	mov    %edx,0x4(%esp)
 82ec43e:	89 04 24             	mov    %eax,(%esp)
 82ec441:	e8 ce c7 3d 00       	call   86c8c14 <_ZN9GameWorld8send_allER11PacketGuard>
 82ec446:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 82ec449:	89 44 24 04          	mov    %eax,0x4(%esp)
 82ec44d:	8b 45 08             	mov    0x8(%ebp),%eax
 82ec450:	89 04 24             	mov    %eax,(%esp)
 82ec453:	e8 00 01 00 00       	call   82ec558 <_ZN11pvp_assault13CAssaultPlace22_SendStraightVictoriesEP5CUser>
 82ec458:	eb 1e                	jmp    82ec478 <_ZN11pvp_assault13CAssaultPlace7DieUserEiiR22MSG_DIE_ASSAULT_PLAYER+0x6d2>
 82ec45a:	89 d3                	mov    %edx,%ebx
 82ec45c:	89 c6                	mov    %eax,%esi
 82ec45e:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 82ec464:	89 04 24             	mov    %eax,(%esp)
 82ec467:	e8 14 1a 2a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82ec46c:	89 f0                	mov    %esi,%eax
 82ec46e:	89 da                	mov    %ebx,%edx
 82ec470:	89 04 24             	mov    %eax,(%esp)
 82ec473:	e8 d8 72 7f 00       	call   8ae3750 <_Unwind_Resume>
 82ec478:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 82ec47e:	89 04 24             	mov    %eax,(%esp)
 82ec481:	e8 fa 19 2a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82ec486:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 82ec48a:	74 27                	je     82ec4b3 <_ZN11pvp_assault13CAssaultPlace7DieUserEiiR22MSG_DIE_ASSAULT_PLAYER+0x70d>
 82ec48c:	8b 45 d8             	mov    -0x28(%ebp),%eax
 82ec48f:	89 04 24             	mov    %eax,(%esp)
 82ec492:	e8 cd 90 35 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 82ec497:	3c 07                	cmp    $0x7,%al
 82ec499:	75 18                	jne    82ec4b3 <_ZN11pvp_assault13CAssaultPlace7DieUserEiiR22MSG_DIE_ASSAULT_PLAYER+0x70d>
 82ec49b:	a1 50 be 40 09       	mov    0x940be50,%eax
 82ec4a0:	89 04 24             	mov    %eax,(%esp)
 82ec4a3:	e8 68 34 19 00       	call   847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>
 82ec4a8:	84 c0                	test   %al,%al
 82ec4aa:	74 07                	je     82ec4b3 <_ZN11pvp_assault13CAssaultPlace7DieUserEiiR22MSG_DIE_ASSAULT_PLAYER+0x70d>
 82ec4ac:	b8 01 00 00 00       	mov    $0x1,%eax
 82ec4b1:	eb 05                	jmp    82ec4b8 <_ZN11pvp_assault13CAssaultPlace7DieUserEiiR22MSG_DIE_ASSAULT_PLAYER+0x712>
 82ec4b3:	b8 00 00 00 00       	mov    $0x0,%eax
 82ec4b8:	84 c0                	test   %al,%al
 82ec4ba:	74 2c                	je     82ec4e8 <_ZN11pvp_assault13CAssaultPlace7DieUserEiiR22MSG_DIE_ASSAULT_PLAYER+0x742>
 82ec4bc:	8b 45 d8             	mov    -0x28(%ebp),%eax
 82ec4bf:	89 04 24             	mov    %eax,(%esp)
 82ec4c2:	e8 85 8c 36 00       	call   865514c <_ZN5CUser8GetPartyEv>
 82ec4c7:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 82ec4ca:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 82ec4ce:	74 0d                	je     82ec4dd <_ZN11pvp_assault13CAssaultPlace7DieUserEiiR22MSG_DIE_ASSAULT_PLAYER+0x737>
 82ec4d0:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 82ec4d3:	89 04 24             	mov    %eax,(%esp)
 82ec4d6:	e8 3d 43 00 00       	call   82f0818 <_ZN6CParty22resetStraightVictoriesEv>
 82ec4db:	eb 0b                	jmp    82ec4e8 <_ZN11pvp_assault13CAssaultPlace7DieUserEiiR22MSG_DIE_ASSAULT_PLAYER+0x742>
 82ec4dd:	8b 45 d8             	mov    -0x28(%ebp),%eax
 82ec4e0:	89 04 24             	mov    %eax,(%esp)
 82ec4e3:	e8 74 45 00 00       	call   82f0a5c <_ZN15CUserCharacInfo22resetStraightVictoriesEv>
 82ec4e8:	8b 45 08             	mov    0x8(%ebp),%eax
 82ec4eb:	c7 80 0c 01 00 00 05 	movl   $0x5,0x10c(%eax)
 82ec4f2:	00 00 00 
 82ec4f5:	8b 45 08             	mov    0x8(%ebp),%eax
 82ec4f8:	8b 80 2c 01 00 00    	mov    0x12c(%eax),%eax
 82ec4fe:	85 c0                	test   %eax,%eax
 82ec500:	74 19                	je     82ec51b <_ZN11pvp_assault13CAssaultPlace7DieUserEiiR22MSG_DIE_ASSAULT_PLAYER+0x775>
 82ec502:	8b 45 08             	mov    0x8(%ebp),%eax
 82ec505:	8b 80 2c 01 00 00    	mov    0x12c(%eax),%eax
 82ec50b:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 82ec512:	00 
 82ec513:	89 04 24             	mov    %eax,(%esp)
 82ec516:	e8 19 95 fb ff       	call   82a5a34 <_ZN6CParty15SetAssaultStateEc>
 82ec51b:	8b 45 08             	mov    0x8(%ebp),%eax
 82ec51e:	8b 80 30 01 00 00    	mov    0x130(%eax),%eax
 82ec524:	85 c0                	test   %eax,%eax
 82ec526:	74 19                	je     82ec541 <_ZN11pvp_assault13CAssaultPlace7DieUserEiiR22MSG_DIE_ASSAULT_PLAYER+0x79b>
 82ec528:	8b 45 08             	mov    0x8(%ebp),%eax
 82ec52b:	8b 80 30 01 00 00    	mov    0x130(%eax),%eax
 82ec531:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 82ec538:	00 
 82ec539:	89 04 24             	mov    %eax,(%esp)
 82ec53c:	e8 f3 94 fb ff       	call   82a5a34 <_ZN6CParty15SetAssaultStateEc>
 82ec541:	8b 45 08             	mov    0x8(%ebp),%eax
 82ec544:	89 04 24             	mov    %eax,(%esp)
 82ec547:	e8 56 d4 ff ff       	call   82e99a2 <_ZN11pvp_assault13CAssaultPlace10EndAssaultEv>
 82ec54c:	81 c4 cc 00 00 00    	add    $0xcc,%esp
 82ec552:	5b                   	pop    %ebx
 82ec553:	5e                   	pop    %esi
 82ec554:	5f                   	pop    %edi
 82ec555:	5d                   	pop    %ebp
 82ec556:	c3                   	ret
 82ec557:	90                   	nop

```

```c
// pvp_assault::CAssaultPlace::DieUser @ 0x82ebda6

/* pvp_assault::CAssaultPlace::DieUser(int, int, MSG_DIE_ASSAULT_PLAYER&) */

void __thiscall
pvp_assault::CAssaultPlace::DieUser
          (CAssaultPlace *this,int param_1,int param_2,MSG_DIE_ASSAULT_PLAYER *param_3)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  undefined4 *puVar4;
  int iVar5;
  CHackAnalyzer *pCVar6;
  GameWorld *pGVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  PacketGuard local_8c [12];
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  PacketGuard local_74 [15];
  char local_65;
  char local_64 [20];
  cMyTrace local_50 [16];
  cMyTrace local_40 [16];
  CUser *local_30;
  CUserCharacInfo *local_2c;
  int local_28;
  int local_24;
  CParty *local_20;
  
  local_30 = (CUser *)0x0;
  local_2c = (CUserCharacInfo *)0x0;
  pcVar3 = &local_65;
  uVar8 = 0x15;
  bVar10 = ((uint)pcVar3 & 1) != 0;
  if (bVar10) {
    local_65 = '\0';
    pcVar3 = local_64;
    uVar8 = 0x14;
  }
  if (((uint)pcVar3 & 2) != 0) {
    pcVar3[0] = '\0';
    pcVar3[1] = '\0';
    pcVar3 = pcVar3 + 2;
    uVar8 = uVar8 - 2;
  }
  uVar9 = 0;
  do {
    pcVar1 = pcVar3 + uVar9;
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    uVar9 = uVar9 + 4;
  } while (uVar9 < (uVar8 & 0xfffffffc));
  pcVar3 = pcVar3 + uVar9;
  if ((uVar8 & 2) != 0) {
    pcVar3[0] = '\0';
    pcVar3[1] = '\0';
    pcVar3 = pcVar3 + 2;
  }
  if (!bVar10) {
    *pcVar3 = '\0';
  }
  if (*(int *)(this + 0x10c) == 4) {
    local_2c = (CUserCharacInfo *)CAssaulter::GetUser((CAssaulter *)(this + param_1 * 0x20));
    iVar5 = CAssaulter::GetState((CAssaulter *)(this + param_1 * 0x20));
    if (iVar5 == 5) {
      if ((param_2 < 0) || (7 < param_2)) {
        cMyTrace::cMyTrace(local_40,
                           "void pvp_assault::CAssaultPlace::DieUser(int, int, MSG_DIE_ASSAULT_PLAYER&)"
                           ,0xd54,0);
        cMyTrace::operator()
                  (local_40,"CAssaultPlace::DieUser invalid killer index income(%d,%d)",param_1,
                   param_2);
      }
      else {
        local_30 = (CUser *)CAssaulter::GetUser((CAssaulter *)(this + param_2 * 0x20));
        iVar5 = CAssaulter::GetState((CAssaulter *)(this + param_2 * 0x20));
        if (iVar5 != 5) {
          cMyTrace::cMyTrace(local_50,
                             "void pvp_assault::CAssaultPlace::DieUser(int, int, MSG_DIE_ASSAULT_PLAYER&)"
                             ,0xd37,0);
          cMyTrace::operator()(local_50,"CAssaultPlace::DieUser => killer is already died!");
        }
        pcVar3 = (char *)CAssaulter::GetCharacName((CAssaulter *)(this + param_2 * 0x20));
        strncpy(&local_65,pcVar3,0x14);
        if ((local_30 != (CUser *)0x0) && (*(int *)param_3 != 0)) {
          if (*(int *)param_3 == 1) {
            pCVar6 = (CHackAnalyzer *)CUser::getHackAnalyzer(local_30);
            WongWork::CHackAnalyzer::addServerHackCnt(pCVar6,local_30,0x7d,1,0,0);
          }
          if (100000 < (int)(*(uint *)(param_3 + 4) / *(uint *)param_3)) {
            pCVar6 = (CHackAnalyzer *)CUser::getHackAnalyzer(local_30);
            WongWork::CHackAnalyzer::addServerHackCnt(pCVar6,local_30,0x7e,1,0,0);
          }
        }
      }
      if (local_2c != (CUserCharacInfo *)0x0) {
        cVar2 = CUserCharacInfo::getCurCharacVill(local_2c);
        if ((cVar2 == '\a') && (cVar2 = CPowerManager::IsPowerWarEventOn(), cVar2 != '\0')) {
          bVar10 = true;
        }
        else {
          bVar10 = false;
        }
        if (bVar10) {
          cUserHistoryLog::DiePvP
                    ((cUserHistoryLog *)(local_2c + 0x79700),2,*(undefined4 *)param_3,
                     *(undefined4 *)(param_3 + 4),(int)*(short *)(param_3 + 8),
                     (int)*(short *)(param_3 + 10),(int)*(short *)(param_3 + 0xc),
                     (int)*(short *)(param_3 + 0xe),&local_65);
        }
        else {
          cUserHistoryLog::DiePvP
                    ((cUserHistoryLog *)(local_2c + 0x79700),6,*(undefined4 *)param_3,
                     *(undefined4 *)(param_3 + 4),(int)*(short *)(param_3 + 8),
                     (int)*(short *)(param_3 + 10),(int)*(short *)(param_3 + 0xc),
                     (int)*(short *)(param_3 + 0xe),&local_65);
        }
      }
      cVar2 = _IsChangeDieState();
      if (cVar2 != '\0') {
        _ChangeDieState(this,param_1);
      }
      if ((local_2c == (CUserCharacInfo *)0x0) ||
         ((cVar2 = CUserCharacInfo::getCurCharacVill(local_2c), cVar2 == '\a' &&
          (cVar2 = CPowerManager::IsPowerWarEventOn(), cVar2 == '\x01')))) {
        bVar10 = false;
      }
      else {
        bVar10 = true;
      }
      if (bVar10) {
        PacketGuard::PacketGuard(local_74);
                    /* try { // try from 082ec219 to 082ec231 has its CatchHandler @ 082ec234 */
        _MakeUserState(this,local_74,(CUser *)local_2c);
        pGVar7 = (GameWorld *)G_GameWorld();
        GameWorld::send_all(pGVar7,local_74);
        PacketGuard::~PacketGuard(local_74);
      }
      if ((local_30 == (CUser *)0x0) ||
         ((cVar2 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)local_30), cVar2 == '\a' &&
          (cVar2 = CPowerManager::IsPowerWarEventOn(), cVar2 == '\x01')))) {
        bVar10 = false;
      }
      else {
        bVar10 = true;
      }
      if ((bVar10) && (cVar2 = _IsProcsssChaos(), cVar2 != '\0')) {
        _ProcessChaos(this,param_1,param_2);
      }
      cVar2 = _CheckAssaultable(this);
      if (cVar2 != '\x01') {
        if ((((local_30 == (CUser *)0x0) || (local_2c == (CUserCharacInfo *)0x0)) ||
            (cVar2 = CUserCharacInfo::getCurCharacVill(local_2c), cVar2 != '\a')) ||
           (cVar2 = CPowerManager::IsPowerWarEventOn(), cVar2 == '\0')) {
          bVar10 = false;
        }
        else {
          bVar10 = true;
        }
        if (bVar10) {
          local_78 = 0;
          local_7c = 0;
          local_80 = 0;
          local_28 = 0;
          local_24 = 0;
          if ((param_2 < 0) || (7 < param_2)) {
            cVar2 = CUser::getPowerSide((CUser *)local_2c);
            local_24 = 2;
          }
          else {
            cVar2 = CUser::getPowerSide(local_30);
            local_24 = 1;
          }
          local_28 = (int)cVar2;
          cVar2 = _CheckPowerWarInPlayer(this,local_28,local_24,&local_78,&local_7c,&local_80);
          if (cVar2 != '\0') {
            if (local_24 == 1) {
              _SendPowerWarPointToGuildServer(this,local_30,1,local_78,local_7c,local_80);
            }
            else {
              _SendPowerWarPointToGuildServer(this,local_2c,local_24,local_78,local_7c,local_80);
            }
            PacketGuard::PacketGuard(local_8c);
                    /* try { // try from 082ec42a to 082ec457 has its CatchHandler @ 082ec45a */
            _MakeUserState(this,local_8c);
            pGVar7 = (GameWorld *)G_GameWorld();
            GameWorld::send_all(pGVar7,local_8c);
            _SendStraightVictories(this,local_30);
            PacketGuard::~PacketGuard(local_8c);
          }
        }
        if (((local_2c == (CUserCharacInfo *)0x0) ||
            (cVar2 = CUserCharacInfo::getCurCharacVill(local_2c), cVar2 != '\a')) ||
           (cVar2 = CPowerManager::IsPowerWarEventOn(), cVar2 == '\0')) {
          bVar10 = false;
        }
        else {
          bVar10 = true;
        }
        if (bVar10) {
          local_20 = (CParty *)CUser::GetParty((CUser *)local_2c);
          if (local_20 == (CParty *)0x0) {
            CUserCharacInfo::resetStraightVictories(local_2c);
          }
          else {
            CParty::resetStraightVictories(local_20);
          }
        }
        *(undefined4 *)(this + 0x10c) = 5;
        if (*(int *)(this + 300) != 0) {
          CParty::SetAssaultState(*(CParty **)(this + 300),'\x05');
        }
        if (*(int *)(this + 0x130) != 0) {
          CParty::SetAssaultState(*(CParty **)(this + 0x130),'\x05');
        }
        EndAssault(this);
      }
      return;
    }
    puVar4 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar4 = 0x12;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar4,&ENUM_ERROR::typeinfo,0);
  }
  puVar4 = (undefined4 *)__cxa_allocate_exception(4);
  *puVar4 = 0x13;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar4,&ENUM_ERROR::typeinfo,0);
}

```

---

## DieUser_082ed3fe

```asm
// === 082ed3fe pvp_assault::CAssaultPlace::DieUser  [0x082ed3fe-0x82ed43d] ===
 82ed3fe:	55                   	push   %ebp
 82ed3ff:	89 e5                	mov    %esp,%ebp
 82ed401:	83 ec 18             	sub    $0x18,%esp
 82ed404:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 82ed40b:	00 
 82ed40c:	8b 45 0c             	mov    0xc(%ebp),%eax
 82ed40f:	89 44 24 04          	mov    %eax,0x4(%esp)
 82ed413:	8b 45 08             	mov    0x8(%ebp),%eax
 82ed416:	89 04 24             	mov    %eax,(%esp)
 82ed419:	e8 7c b0 ff ff       	call   82e849a <_ZN11pvp_assault13CAssaultPlace13_GetUserIndexEP5CUserb>
 82ed41e:	8b 55 14             	mov    0x14(%ebp),%edx
 82ed421:	89 54 24 0c          	mov    %edx,0xc(%esp)
 82ed425:	8b 55 10             	mov    0x10(%ebp),%edx
 82ed428:	89 54 24 08          	mov    %edx,0x8(%esp)
 82ed42c:	89 44 24 04          	mov    %eax,0x4(%esp)
 82ed430:	8b 45 08             	mov    0x8(%ebp),%eax
 82ed433:	89 04 24             	mov    %eax,(%esp)
 82ed436:	e8 6b e9 ff ff       	call   82ebda6 <_ZN11pvp_assault13CAssaultPlace7DieUserEiiR22MSG_DIE_ASSAULT_PLAYER>
 82ed43b:	c9                   	leave
 82ed43c:	c3                   	ret
 82ed43d:	90                   	nop

```

```c
// pvp_assault::CAssaultPlace::DieUser @ 0x82ed3fe

/* pvp_assault::CAssaultPlace::DieUser(CUser*, int, MSG_DIE_ASSAULT_PLAYER&) */

void __thiscall
pvp_assault::CAssaultPlace::DieUser
          (CAssaultPlace *this,CUser *param_1,int param_2,MSG_DIE_ASSAULT_PLAYER *param_3)

{
  int iVar1;
  
  iVar1 = _GetUserIndex(this,param_1,true);
  DieUser(this,iVar1,param_2,param_3);
  return;
}

```

---

## DoConnectP2P

```asm
// === 082e91fa pvp_assault::CAssaultPlace::DoConnectP2P  [0x082e91fa-0x82e927d] ===
 82e91fa:	55                   	push   %ebp
 82e91fb:	89 e5                	mov    %esp,%ebp
 82e91fd:	83 ec 28             	sub    $0x28,%esp
 82e9200:	8b 45 08             	mov    0x8(%ebp),%eax
 82e9203:	c7 80 0c 01 00 00 03 	movl   $0x3,0x10c(%eax)
 82e920a:	00 00 00 
 82e920d:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 82e9214:	eb 35                	jmp    82e924b <_ZN11pvp_assault13CAssaultPlace12DoConnectP2PEv+0x51>
 82e9216:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82e9219:	c1 e0 05             	shl    $0x5,%eax
 82e921c:	03 45 08             	add    0x8(%ebp),%eax
 82e921f:	89 04 24             	mov    %eax,(%esp)
 82e9222:	e8 35 73 00 00       	call   82f055c <_ZN11pvp_assault10CAssaulter5EmptyEv>
 82e9227:	84 c0                	test   %al,%al
 82e9229:	75 1b                	jne    82e9246 <_ZN11pvp_assault13CAssaultPlace12DoConnectP2PEv+0x4c>
 82e922b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82e922e:	c1 e0 05             	shl    $0x5,%eax
 82e9231:	03 45 08             	add    0x8(%ebp),%eax
 82e9234:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 82e923b:	00 
 82e923c:	89 04 24             	mov    %eax,(%esp)
 82e923f:	e8 38 73 00 00       	call   82f057c <_ZN11pvp_assault10CAssaulter8SetStateENS_18ENUM_ASSAULT_STATEE>
 82e9244:	eb 01                	jmp    82e9247 <_ZN11pvp_assault13CAssaultPlace12DoConnectP2PEv+0x4d>
 82e9246:	90                   	nop
 82e9247:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 82e924b:	83 7d f4 07          	cmpl   $0x7,-0xc(%ebp)
 82e924f:	0f 9e c0             	setle  %al
 82e9252:	84 c0                	test   %al,%al
 82e9254:	75 c0                	jne    82e9216 <_ZN11pvp_assault13CAssaultPlace12DoConnectP2PEv+0x1c>
 82e9256:	8b 45 08             	mov    0x8(%ebp),%eax
 82e9259:	8b 90 08 01 00 00    	mov    0x108(%eax),%edx
 82e925f:	8b 45 08             	mov    0x8(%ebp),%eax
 82e9262:	8b 80 04 01 00 00    	mov    0x104(%eax),%eax
 82e9268:	89 54 24 08          	mov    %edx,0x8(%esp)
 82e926c:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e9270:	c7 04 24 0f 00 00 00 	movl   $0xf,(%esp)
 82e9277:	e8 4e e3 34 00       	call   86375ca <_ZN29TimerConnectP2PAssaultTimeout15registNextTimerElii>
 82e927c:	c9                   	leave
 82e927d:	c3                   	ret

```

```c
// pvp_assault::CAssaultPlace::DoConnectP2P @ 0x82e91fa

/* pvp_assault::CAssaultPlace::DoConnectP2P() */

void __thiscall pvp_assault::CAssaultPlace::DoConnectP2P(CAssaultPlace *this)

{
  char cVar1;
  int local_10;
  
  *(undefined4 *)(this + 0x10c) = 3;
  for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
    cVar1 = CAssaulter::Empty((CAssaulter *)(this + local_10 * 0x20));
    if (cVar1 == '\0') {
      CAssaulter::SetState((CAssaulter *)(this + local_10 * 0x20),3);
    }
  }
  TimerConnectP2PAssaultTimeout::registNextTimer(0xf,*(int *)(this + 0x104),*(int *)(this + 0x108));
  return;
}

```

---

## EndAssault

```asm
// === 082e99a2 pvp_assault::CAssaultPlace::EndAssault  [0x082e99a2-0x82e9ad5] ===
 82e99a2:	55                   	push   %ebp
 82e99a3:	89 e5                	mov    %esp,%ebp
 82e99a5:	56                   	push   %esi
 82e99a6:	53                   	push   %ebx
 82e99a7:	83 ec 30             	sub    $0x30,%esp
 82e99aa:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 82e99b1:	e9 9e 00 00 00       	jmp    82e9a54 <_ZN11pvp_assault13CAssaultPlace10EndAssaultEv+0xb2>
 82e99b6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82e99b9:	c1 e0 05             	shl    $0x5,%eax
 82e99bc:	03 45 08             	add    0x8(%ebp),%eax
 82e99bf:	89 04 24             	mov    %eax,(%esp)
 82e99c2:	e8 95 6b 00 00       	call   82f055c <_ZN11pvp_assault10CAssaulter5EmptyEv>
 82e99c7:	84 c0                	test   %al,%al
 82e99c9:	0f 85 80 00 00 00    	jne    82e9a4f <_ZN11pvp_assault13CAssaultPlace10EndAssaultEv+0xad>
 82e99cf:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82e99d2:	c1 e0 05             	shl    $0x5,%eax
 82e99d5:	03 45 08             	add    0x8(%ebp),%eax
 82e99d8:	c7 44 24 04 07 00 00 	movl   $0x7,0x4(%esp)
 82e99df:	00 
 82e99e0:	89 04 24             	mov    %eax,(%esp)
 82e99e3:	e8 94 6b 00 00       	call   82f057c <_ZN11pvp_assault10CAssaulter8SetStateENS_18ENUM_ASSAULT_STATEE>
 82e99e8:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82e99eb:	89 04 24             	mov    %eax,(%esp)
 82e99ee:	e8 59 43 2a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 82e99f3:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82e99f6:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e99fa:	8b 45 08             	mov    0x8(%ebp),%eax
 82e99fd:	89 04 24             	mov    %eax,(%esp)
 82e9a00:	e8 9b ee ff ff       	call   82e88a0 <_ZN11pvp_assault13CAssaultPlace15_MakeEndAssaultEP11PacketGuard>
 82e9a05:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82e9a08:	c1 e0 05             	shl    $0x5,%eax
 82e9a0b:	03 45 08             	add    0x8(%ebp),%eax
 82e9a0e:	89 04 24             	mov    %eax,(%esp)
 82e9a11:	e8 2c 6b 00 00       	call   82f0542 <_ZN11pvp_assault10CAssaulter7GetUserEv>
 82e9a16:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 82e9a19:	89 54 24 04          	mov    %edx,0x4(%esp)
 82e9a1d:	89 04 24             	mov    %eax,(%esp)
 82e9a20:	e8 95 eb 35 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 82e9a25:	eb 1b                	jmp    82e9a42 <_ZN11pvp_assault13CAssaultPlace10EndAssaultEv+0xa0>
 82e9a27:	89 d3                	mov    %edx,%ebx
 82e9a29:	89 c6                	mov    %eax,%esi
 82e9a2b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82e9a2e:	89 04 24             	mov    %eax,(%esp)
 82e9a31:	e8 4a 44 2a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82e9a36:	89 f0                	mov    %esi,%eax
 82e9a38:	89 da                	mov    %ebx,%edx
 82e9a3a:	89 04 24             	mov    %eax,(%esp)
 82e9a3d:	e8 0e 9d 7f 00       	call   8ae3750 <_Unwind_Resume>
 82e9a42:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82e9a45:	89 04 24             	mov    %eax,(%esp)
 82e9a48:	e8 33 44 2a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82e9a4d:	eb 01                	jmp    82e9a50 <_ZN11pvp_assault13CAssaultPlace10EndAssaultEv+0xae>
 82e9a4f:	90                   	nop
 82e9a50:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 82e9a54:	83 7d f0 07          	cmpl   $0x7,-0x10(%ebp)
 82e9a58:	0f 9e c0             	setle  %al
 82e9a5b:	84 c0                	test   %al,%al
 82e9a5d:	0f 85 53 ff ff ff    	jne    82e99b6 <_ZN11pvp_assault13CAssaultPlace10EndAssaultEv+0x14>
 82e9a63:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 82e9a6a:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 82e9a71:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
 82e9a75:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82e9a78:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e9a7c:	8b 45 08             	mov    0x8(%ebp),%eax
 82e9a7f:	89 04 24             	mov    %eax,(%esp)
 82e9a82:	e8 3d d7 ff ff       	call   82e71c4 <_ZN11pvp_assault13CAssaultPlace22_GetTeamCountAliveUserEPi>
 82e9a87:	8b 45 dc             	mov    -0x24(%ebp),%eax
 82e9a8a:	85 c0                	test   %eax,%eax
 82e9a8c:	75 0a                	jne    82e9a98 <_ZN11pvp_assault13CAssaultPlace10EndAssaultEv+0xf6>
 82e9a8e:	8b 45 08             	mov    0x8(%ebp),%eax
 82e9a91:	c6 80 21 01 00 00 01 	movb   $0x1,0x121(%eax)
 82e9a98:	8b 45 e0             	mov    -0x20(%ebp),%eax
 82e9a9b:	85 c0                	test   %eax,%eax
 82e9a9d:	75 0a                	jne    82e9aa9 <_ZN11pvp_assault13CAssaultPlace10EndAssaultEv+0x107>
 82e9a9f:	8b 45 08             	mov    0x8(%ebp),%eax
 82e9aa2:	c6 80 20 01 00 00 01 	movb   $0x1,0x120(%eax)
 82e9aa9:	8b 45 08             	mov    0x8(%ebp),%eax
 82e9aac:	8b 90 08 01 00 00    	mov    0x108(%eax),%edx
 82e9ab2:	8b 45 08             	mov    0x8(%ebp),%eax
 82e9ab5:	8b 80 04 01 00 00    	mov    0x104(%eax),%eax
 82e9abb:	89 54 24 08          	mov    %edx,0x8(%esp)
 82e9abf:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e9ac3:	c7 04 24 05 00 00 00 	movl   $0x5,(%esp)
 82e9aca:	e8 db db 34 00       	call   86376aa <_ZN17TimerCloseAssault15registNextTimerElii>
 82e9acf:	83 c4 30             	add    $0x30,%esp
 82e9ad2:	5b                   	pop    %ebx
 82e9ad3:	5e                   	pop    %esi
 82e9ad4:	5d                   	pop    %ebp
 82e9ad5:	c3                   	ret

```

```c
// pvp_assault::CAssaultPlace::EndAssault @ 0x82e99a2

/* pvp_assault::CAssaultPlace::EndAssault() */

void __thiscall pvp_assault::CAssaultPlace::EndAssault(CAssaultPlace *this)

{
  char cVar1;
  CUser *this_00;
  int local_28;
  int local_24;
  PacketGuard local_20 [12];
  int local_14;
  undefined1 local_d;
  
  for (local_14 = 0; local_14 < 8; local_14 = local_14 + 1) {
    cVar1 = CAssaulter::Empty((CAssaulter *)(this + local_14 * 0x20));
    if (cVar1 == '\0') {
      CAssaulter::SetState((CAssaulter *)(this + local_14 * 0x20),7);
      PacketGuard::PacketGuard(local_20);
                    /* try { // try from 082e9a00 to 082e9a24 has its CatchHandler @ 082e9a27 */
      _MakeEndAssault(this,local_20);
      this_00 = (CUser *)CAssaulter::GetUser((CAssaulter *)(this + local_14 * 0x20));
      CUser::Send(this_00,local_20);
      PacketGuard::~PacketGuard(local_20);
    }
  }
  local_28 = 0;
  local_24 = 0;
  local_d = 0;
  _GetTeamCountAliveUser(this,&local_28);
  if (local_28 == 0) {
    this[0x121] = (CAssaultPlace)0x1;
  }
  if (local_24 == 0) {
    this[0x120] = (CAssaultPlace)0x1;
  }
  TimerCloseAssault::registNextTimer(5,*(int *)(this + 0x104),*(int *)(this + 0x108));
  return;
}

```

---

## EvadeAssaultPlace

```asm
// === 082eb49c pvp_assault::CAssaultPlace::EvadeAssaultPlace  [0x082eb49c-0x82eb5e1] ===
 82eb49c:	55                   	push   %ebp
 82eb49d:	89 e5                	mov    %esp,%ebp
 82eb49f:	83 ec 28             	sub    $0x28,%esp
 82eb4a2:	8b 45 08             	mov    0x8(%ebp),%eax
 82eb4a5:	8b 80 0c 01 00 00    	mov    0x10c(%eax),%eax
 82eb4ab:	83 e8 02             	sub    $0x2,%eax
 82eb4ae:	83 f8 01             	cmp    $0x1,%eax
 82eb4b1:	76 4d                	jbe    82eb500 <_ZN11pvp_assault13CAssaultPlace17EvadeAssaultPlaceEP5CUser+0x64>
 82eb4b3:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 82eb4ba:	e8 df 07 de ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 82eb4bf:	8b 55 08             	mov    0x8(%ebp),%edx
 82eb4c2:	8b 92 3c 01 00 00    	mov    0x13c(%edx),%edx
 82eb4c8:	29 d0                	sub    %edx,%eax
 82eb4ca:	83 f8 05             	cmp    $0x5,%eax
 82eb4cd:	0f 9f c0             	setg   %al
 82eb4d0:	84 c0                	test   %al,%al
 82eb4d2:	74 2d                	je     82eb501 <_ZN11pvp_assault13CAssaultPlace17EvadeAssaultPlaceEP5CUser+0x65>
 82eb4d4:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 82eb4db:	e8 20 a3 43 00       	call   8725800 <__cxa_allocate_exception>
 82eb4e0:	89 c2                	mov    %eax,%edx
 82eb4e2:	c7 02 13 00 00 00    	movl   $0x13,(%edx)
 82eb4e8:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82eb4ef:	00 
 82eb4f0:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 82eb4f7:	08 
 82eb4f8:	89 04 24             	mov    %eax,(%esp)
 82eb4fb:	e8 50 97 43 00       	call   8724c50 <__cxa_throw>
 82eb500:	90                   	nop
 82eb501:	8b 45 08             	mov    0x8(%ebp),%eax
 82eb504:	8b 80 34 01 00 00    	mov    0x134(%eax),%eax
 82eb50a:	3b 45 0c             	cmp    0xc(%ebp),%eax
 82eb50d:	75 2c                	jne    82eb53b <_ZN11pvp_assault13CAssaultPlace17EvadeAssaultPlaceEP5CUser+0x9f>
 82eb50f:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 82eb516:	e8 e5 a2 43 00       	call   8725800 <__cxa_allocate_exception>
 82eb51b:	89 c2                	mov    %eax,%edx
 82eb51d:	c7 02 13 00 00 00    	movl   $0x13,(%edx)
 82eb523:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82eb52a:	00 
 82eb52b:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 82eb532:	08 
 82eb533:	89 04 24             	mov    %eax,(%esp)
 82eb536:	e8 15 97 43 00       	call   8724c50 <__cxa_throw>
 82eb53b:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 82eb542:	00 
 82eb543:	8b 45 0c             	mov    0xc(%ebp),%eax
 82eb546:	89 44 24 04          	mov    %eax,0x4(%esp)
 82eb54a:	8b 45 08             	mov    0x8(%ebp),%eax
 82eb54d:	89 04 24             	mov    %eax,(%esp)
 82eb550:	e8 45 cf ff ff       	call   82e849a <_ZN11pvp_assault13CAssaultPlace13_GetUserIndexEP5CUserb>
 82eb555:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82eb558:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82eb55b:	c1 e0 05             	shl    $0x5,%eax
 82eb55e:	03 45 08             	add    0x8(%ebp),%eax
 82eb561:	89 04 24             	mov    %eax,(%esp)
 82eb564:	e8 07 50 00 00       	call   82f0570 <_ZN11pvp_assault10CAssaulter7GetTeamEv>
 82eb569:	8b 55 08             	mov    0x8(%ebp),%edx
 82eb56c:	8b 92 24 01 00 00    	mov    0x124(%edx),%edx
 82eb572:	39 d0                	cmp    %edx,%eax
 82eb574:	0f 95 c0             	setne  %al
 82eb577:	84 c0                	test   %al,%al
 82eb579:	74 2c                	je     82eb5a7 <_ZN11pvp_assault13CAssaultPlace17EvadeAssaultPlaceEP5CUser+0x10b>
 82eb57b:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 82eb582:	e8 79 a2 43 00       	call   8725800 <__cxa_allocate_exception>
 82eb587:	89 c2                	mov    %eax,%edx
 82eb589:	c7 02 13 00 00 00    	movl   $0x13,(%edx)
 82eb58f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82eb596:	00 
 82eb597:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 82eb59e:	08 
 82eb59f:	89 04 24             	mov    %eax,(%esp)
 82eb5a2:	e8 a9 96 43 00       	call   8724c50 <__cxa_throw>
 82eb5a7:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 82eb5ae:	00 
 82eb5af:	8b 45 0c             	mov    0xc(%ebp),%eax
 82eb5b2:	89 44 24 04          	mov    %eax,0x4(%esp)
 82eb5b6:	8b 45 08             	mov    0x8(%ebp),%eax
 82eb5b9:	89 04 24             	mov    %eax,(%esp)
 82eb5bc:	e8 d9 ce ff ff       	call   82e849a <_ZN11pvp_assault13CAssaultPlace13_GetUserIndexEP5CUserb>
 82eb5c1:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 82eb5c8:	00 
 82eb5c9:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 82eb5d0:	00 
 82eb5d1:	89 44 24 04          	mov    %eax,0x4(%esp)
 82eb5d5:	8b 45 08             	mov    0x8(%ebp),%eax
 82eb5d8:	89 04 24             	mov    %eax,(%esp)
 82eb5db:	e8 8a f7 ff ff       	call   82ead6a <_ZN11pvp_assault13CAssaultPlace17LeaveAssaultPlaceEibb>
 82eb5e0:	c9                   	leave
 82eb5e1:	c3                   	ret

```

```c
// pvp_assault::CAssaultPlace::EvadeAssaultPlace @ 0x82eb49c

/* pvp_assault::CAssaultPlace::EvadeAssaultPlace(CUser*) */

void __thiscall pvp_assault::CAssaultPlace::EvadeAssaultPlace(CAssaultPlace *this,CUser *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (1 < *(int *)(this + 0x10c) - 2U) {
    iVar1 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    if (5 < iVar1 - *(int *)(this + 0x13c)) {
      puVar2 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar2 = 0x13;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar2,&ENUM_ERROR::typeinfo,0);
    }
  }
  if (*(CUser **)(this + 0x134) == param_1) {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 0x13;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&ENUM_ERROR::typeinfo,0);
  }
  iVar1 = _GetUserIndex(this,param_1,true);
  iVar1 = CAssaulter::GetTeam((CAssaulter *)(this + iVar1 * 0x20));
  if (iVar1 != *(int *)(this + 0x124)) {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 0x13;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&ENUM_ERROR::typeinfo,0);
  }
  iVar1 = _GetUserIndex(this,param_1,true);
  LeaveAssaultPlace(this,iVar1,true,true);
  return;
}

```

---

## ExistUser

```asm
// === 082e8366 pvp_assault::CAssaultPlace::ExistUser  [0x082e8366-0x82e83c3] ===
 82e8366:	55                   	push   %ebp
 82e8367:	89 e5                	mov    %esp,%ebp
 82e8369:	83 ec 28             	sub    $0x28,%esp
 82e836c:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 82e8373:	eb 3c                	jmp    82e83b1 <_ZN11pvp_assault13CAssaultPlace9ExistUserEP5CUser+0x4b>
 82e8375:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82e8378:	c1 e0 05             	shl    $0x5,%eax
 82e837b:	03 45 08             	add    0x8(%ebp),%eax
 82e837e:	89 04 24             	mov    %eax,(%esp)
 82e8381:	e8 d6 81 00 00       	call   82f055c <_ZN11pvp_assault10CAssaulter5EmptyEv>
 82e8386:	84 c0                	test   %al,%al
 82e8388:	75 22                	jne    82e83ac <_ZN11pvp_assault13CAssaultPlace9ExistUserEP5CUser+0x46>
 82e838a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82e838d:	c1 e0 05             	shl    $0x5,%eax
 82e8390:	03 45 08             	add    0x8(%ebp),%eax
 82e8393:	89 04 24             	mov    %eax,(%esp)
 82e8396:	e8 a7 81 00 00       	call   82f0542 <_ZN11pvp_assault10CAssaulter7GetUserEv>
 82e839b:	3b 45 0c             	cmp    0xc(%ebp),%eax
 82e839e:	0f 94 c0             	sete   %al
 82e83a1:	84 c0                	test   %al,%al
 82e83a3:	74 08                	je     82e83ad <_ZN11pvp_assault13CAssaultPlace9ExistUserEP5CUser+0x47>
 82e83a5:	b8 01 00 00 00       	mov    $0x1,%eax
 82e83aa:	eb 15                	jmp    82e83c1 <_ZN11pvp_assault13CAssaultPlace9ExistUserEP5CUser+0x5b>
 82e83ac:	90                   	nop
 82e83ad:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 82e83b1:	83 7d f4 07          	cmpl   $0x7,-0xc(%ebp)
 82e83b5:	0f 9e c0             	setle  %al
 82e83b8:	84 c0                	test   %al,%al
 82e83ba:	75 b9                	jne    82e8375 <_ZN11pvp_assault13CAssaultPlace9ExistUserEP5CUser+0xf>
 82e83bc:	b8 00 00 00 00       	mov    $0x0,%eax
 82e83c1:	c9                   	leave
 82e83c2:	c3                   	ret
 82e83c3:	90                   	nop

```

```c
// pvp_assault::CAssaultPlace::ExistUser @ 0x82e8366

/* pvp_assault::CAssaultPlace::ExistUser(CUser*) */

undefined4 __thiscall pvp_assault::CAssaultPlace::ExistUser(CAssaultPlace *this,CUser *param_1)

{
  char cVar1;
  CUser *pCVar2;
  int local_10;
  
  local_10 = 0;
  while( true ) {
    if (7 < local_10) {
      return 0;
    }
    cVar1 = CAssaulter::Empty((CAssaulter *)(this + local_10 * 0x20));
    if ((cVar1 == '\0') &&
       (pCVar2 = (CUser *)CAssaulter::GetUser((CAssaulter *)(this + local_10 * 0x20)),
       pCVar2 == param_1)) break;
    local_10 = local_10 + 1;
  }
  return 1;
}

```

---

## ForcedMoveAtPowerWarPlace

```asm
// === 082ed6a6 pvp_assault::CAssaultPlace::ForcedMoveAtPowerWarPlace  [0x082ed6a6-0x82ed751] ===
 82ed6a6:	55                   	push   %ebp
 82ed6a7:	89 e5                	mov    %esp,%ebp
 82ed6a9:	83 ec 38             	sub    $0x38,%esp
 82ed6ac:	a1 50 be 40 09       	mov    0x940be50,%eax
 82ed6b1:	89 04 24             	mov    %eax,(%esp)
 82ed6b4:	e8 57 22 19 00       	call   847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>
 82ed6b9:	84 c0                	test   %al,%al
 82ed6bb:	74 16                	je     82ed6d3 <_ZN11pvp_assault13CAssaultPlace25ForcedMoveAtPowerWarPlaceEP5CUser+0x2d>
 82ed6bd:	8b 45 08             	mov    0x8(%ebp),%eax
 82ed6c0:	89 04 24             	mov    %eax,(%esp)
 82ed6c3:	e8 9c 7e 35 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 82ed6c8:	3c 07                	cmp    $0x7,%al
 82ed6ca:	75 07                	jne    82ed6d3 <_ZN11pvp_assault13CAssaultPlace25ForcedMoveAtPowerWarPlaceEP5CUser+0x2d>
 82ed6cc:	b8 01 00 00 00       	mov    $0x1,%eax
 82ed6d1:	eb 05                	jmp    82ed6d8 <_ZN11pvp_assault13CAssaultPlace25ForcedMoveAtPowerWarPlaceEP5CUser+0x32>
 82ed6d3:	b8 00 00 00 00       	mov    $0x0,%eax
 82ed6d8:	84 c0                	test   %al,%al
 82ed6da:	74 73                	je     82ed74f <_ZN11pvp_assault13CAssaultPlace25ForcedMoveAtPowerWarPlaceEP5CUser+0xa9>
 82ed6dc:	8b 45 08             	mov    0x8(%ebp),%eax
 82ed6df:	89 45 e0             	mov    %eax,-0x20(%ebp)
 82ed6e2:	8b 45 08             	mov    0x8(%ebp),%eax
 82ed6e5:	89 04 24             	mov    %eax,(%esp)
 82ed6e8:	e8 d9 25 f4 ff       	call   822fcc6 <_ZN5CUser12getPowerSideEv>
 82ed6ed:	3c 01                	cmp    $0x1,%al
 82ed6ef:	0f 94 c0             	sete   %al
 82ed6f2:	84 c0                	test   %al,%al
 82ed6f4:	74 1e                	je     82ed714 <_ZN11pvp_assault13CAssaultPlace25ForcedMoveAtPowerWarPlaceEP5CUser+0x6e>
 82ed6f6:	c7 45 e4 07 00 00 00 	movl   $0x7,-0x1c(%ebp)
 82ed6fd:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 82ed704:	c7 45 ec 55 02 00 00 	movl   $0x255,-0x14(%ebp)
 82ed70b:	c7 45 f0 2c 01 00 00 	movl   $0x12c,-0x10(%ebp)
 82ed712:	eb 30                	jmp    82ed744 <_ZN11pvp_assault13CAssaultPlace25ForcedMoveAtPowerWarPlaceEP5CUser+0x9e>
 82ed714:	8b 45 08             	mov    0x8(%ebp),%eax
 82ed717:	89 04 24             	mov    %eax,(%esp)
 82ed71a:	e8 a7 25 f4 ff       	call   822fcc6 <_ZN5CUser12getPowerSideEv>
 82ed71f:	3c 02                	cmp    $0x2,%al
 82ed721:	0f 94 c0             	sete   %al
 82ed724:	84 c0                	test   %al,%al
 82ed726:	74 1c                	je     82ed744 <_ZN11pvp_assault13CAssaultPlace25ForcedMoveAtPowerWarPlaceEP5CUser+0x9e>
 82ed728:	c7 45 e4 07 00 00 00 	movl   $0x7,-0x1c(%ebp)
 82ed72f:	c7 45 e8 04 00 00 00 	movl   $0x4,-0x18(%ebp)
 82ed736:	c7 45 ec 39 01 00 00 	movl   $0x139,-0x14(%ebp)
 82ed73d:	c7 45 f0 3a 01 00 00 	movl   $0x13a,-0x10(%ebp)
 82ed744:	8d 45 d8             	lea    -0x28(%ebp),%eax
 82ed747:	89 04 24             	mov    %eax,(%esp)
 82ed74a:	e8 2d 7f ff ff       	call   82e567c <_ZN11pvp_assault20CForcedMoveCharacter10ForcedMoveEv>
 82ed74f:	c9                   	leave
 82ed750:	c3                   	ret
 82ed751:	90                   	nop

```

```c
// pvp_assault::CAssaultPlace::ForcedMoveAtPowerWarPlace @ 0x82ed6a6

/* pvp_assault::CAssaultPlace::ForcedMoveAtPowerWarPlace(CUser*) */

void pvp_assault::CAssaultPlace::ForcedMoveAtPowerWarPlace(CUser *param_1)

{
  bool bVar1;
  char cVar2;
  CForcedMoveCharacter local_2c [8];
  CUser *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  cVar2 = CPowerManager::IsPowerWarEventOn();
  if (cVar2 != '\0') {
    cVar2 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
    if (cVar2 == '\a') {
      bVar1 = true;
      goto LAB_082ed6d8;
    }
  }
  bVar1 = false;
LAB_082ed6d8:
  if (bVar1) {
    local_24 = param_1;
    cVar2 = CUser::getPowerSide(param_1);
    if (cVar2 == '\x01') {
      local_20 = 7;
      local_1c = 0;
      local_18 = 0x255;
      local_14 = 300;
    }
    else {
      cVar2 = CUser::getPowerSide(param_1);
      if (cVar2 == '\x02') {
        local_20 = 7;
        local_1c = 4;
        local_18 = 0x139;
        local_14 = 0x13a;
      }
    }
    CForcedMoveCharacter::ForcedMove(local_2c);
  }
  return;
}

```

---

## GetAnotherTeamCharacName

```asm
// === 082eb3ba pvp_assault::CAssaultPlace::GetAnotherTeamCharacName  [0x082eb3ba-0x82eb44f] ===
 82eb3ba:	55                   	push   %ebp
 82eb3bb:	89 e5                	mov    %esp,%ebp
 82eb3bd:	53                   	push   %ebx
 82eb3be:	83 ec 24             	sub    $0x24,%esp
 82eb3c1:	8b 45 0c             	mov    0xc(%ebp),%eax
 82eb3c4:	c1 e0 05             	shl    $0x5,%eax
 82eb3c7:	03 45 08             	add    0x8(%ebp),%eax
 82eb3ca:	89 04 24             	mov    %eax,(%esp)
 82eb3cd:	e8 8a 51 00 00       	call   82f055c <_ZN11pvp_assault10CAssaulter5EmptyEv>
 82eb3d2:	83 f0 01             	xor    $0x1,%eax
 82eb3d5:	84 c0                	test   %al,%al
 82eb3d7:	74 6c                	je     82eb445 <_ZN11pvp_assault13CAssaultPlace24GetAnotherTeamCharacNameEi+0x8b>
 82eb3d9:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 82eb3e0:	eb 58                	jmp    82eb43a <_ZN11pvp_assault13CAssaultPlace24GetAnotherTeamCharacNameEi+0x80>
 82eb3e2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82eb3e5:	c1 e0 05             	shl    $0x5,%eax
 82eb3e8:	03 45 08             	add    0x8(%ebp),%eax
 82eb3eb:	89 04 24             	mov    %eax,(%esp)
 82eb3ee:	e8 7d 51 00 00       	call   82f0570 <_ZN11pvp_assault10CAssaulter7GetTeamEv>
 82eb3f3:	89 c3                	mov    %eax,%ebx
 82eb3f5:	8b 45 0c             	mov    0xc(%ebp),%eax
 82eb3f8:	c1 e0 05             	shl    $0x5,%eax
 82eb3fb:	03 45 08             	add    0x8(%ebp),%eax
 82eb3fe:	89 04 24             	mov    %eax,(%esp)
 82eb401:	e8 6a 51 00 00       	call   82f0570 <_ZN11pvp_assault10CAssaulter7GetTeamEv>
 82eb406:	39 c3                	cmp    %eax,%ebx
 82eb408:	0f 95 c0             	setne  %al
 82eb40b:	84 c0                	test   %al,%al
 82eb40d:	74 27                	je     82eb436 <_ZN11pvp_assault13CAssaultPlace24GetAnotherTeamCharacNameEi+0x7c>
 82eb40f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82eb412:	c1 e0 05             	shl    $0x5,%eax
 82eb415:	03 45 08             	add    0x8(%ebp),%eax
 82eb418:	89 04 24             	mov    %eax,(%esp)
 82eb41b:	e8 22 51 00 00       	call   82f0542 <_ZN11pvp_assault10CAssaulter7GetUserEv>
 82eb420:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82eb423:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 82eb427:	74 0d                	je     82eb436 <_ZN11pvp_assault13CAssaultPlace24GetAnotherTeamCharacNameEi+0x7c>
 82eb429:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82eb42c:	89 04 24             	mov    %eax,(%esp)
 82eb42f:	e8 f4 5b e1 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 82eb434:	eb 14                	jmp    82eb44a <_ZN11pvp_assault13CAssaultPlace24GetAnotherTeamCharacNameEi+0x90>
 82eb436:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 82eb43a:	83 7d f0 07          	cmpl   $0x7,-0x10(%ebp)
 82eb43e:	0f 9e c0             	setle  %al
 82eb441:	84 c0                	test   %al,%al
 82eb443:	75 9d                	jne    82eb3e2 <_ZN11pvp_assault13CAssaultPlace24GetAnotherTeamCharacNameEi+0x28>
 82eb445:	b8 a0 bc c1 08       	mov    $0x8c1bca0,%eax
 82eb44a:	83 c4 24             	add    $0x24,%esp
 82eb44d:	5b                   	pop    %ebx
 82eb44e:	5d                   	pop    %ebp
 82eb44f:	c3                   	ret

```

```c
// pvp_assault::CAssaultPlace::GetAnotherTeamCharacName @ 0x82eb3ba

/* pvp_assault::CAssaultPlace::GetAnotherTeamCharacName(int) */

undefined * __thiscall
pvp_assault::CAssaultPlace::GetAnotherTeamCharacName(CAssaultPlace *this,int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  CUserCharacInfo *this_00;
  undefined *puVar4;
  int local_14;
  
  cVar1 = CAssaulter::Empty((CAssaulter *)(this + param_1 * 0x20));
  if (cVar1 != '\x01') {
    for (local_14 = 0; local_14 < 8; local_14 = local_14 + 1) {
      iVar2 = CAssaulter::GetTeam((CAssaulter *)(this + local_14 * 0x20));
      iVar3 = CAssaulter::GetTeam((CAssaulter *)(this + param_1 * 0x20));
      if ((iVar2 != iVar3) &&
         (this_00 = (CUserCharacInfo *)CAssaulter::GetUser((CAssaulter *)(this + local_14 * 0x20)),
         this_00 != (CUserCharacInfo *)0x0)) {
        puVar4 = (undefined *)CUserCharacInfo::getCurCharacName(this_00);
        return puVar4;
      }
    }
  }
  return &DAT_08c1bca0;
}

```

---

## GetTeam

```asm
// === 082e6cdc pvp_assault::CAssaultPlace::GetTeam  [0x082e6cdc-0x82e6d39] ===
 82e6cdc:	55                   	push   %ebp
 82e6cdd:	89 e5                	mov    %esp,%ebp
 82e6cdf:	83 ec 28             	sub    $0x28,%esp
 82e6ce2:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 82e6ce9:	eb 3c                	jmp    82e6d27 <_ZN11pvp_assault13CAssaultPlace7GetTeamEP5CUserR17ENUM_ASSAULT_TEAM+0x4b>
 82e6ceb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82e6cee:	c1 e0 05             	shl    $0x5,%eax
 82e6cf1:	03 45 08             	add    0x8(%ebp),%eax
 82e6cf4:	89 04 24             	mov    %eax,(%esp)
 82e6cf7:	e8 46 98 00 00       	call   82f0542 <_ZN11pvp_assault10CAssaulter7GetUserEv>
 82e6cfc:	3b 45 0c             	cmp    0xc(%ebp),%eax
 82e6cff:	0f 94 c0             	sete   %al
 82e6d02:	84 c0                	test   %al,%al
 82e6d04:	74 1d                	je     82e6d23 <_ZN11pvp_assault13CAssaultPlace7GetTeamEP5CUserR17ENUM_ASSAULT_TEAM+0x47>
 82e6d06:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82e6d09:	c1 e0 05             	shl    $0x5,%eax
 82e6d0c:	03 45 08             	add    0x8(%ebp),%eax
 82e6d0f:	89 04 24             	mov    %eax,(%esp)
 82e6d12:	e8 59 98 00 00       	call   82f0570 <_ZN11pvp_assault10CAssaulter7GetTeamEv>
 82e6d17:	8b 55 10             	mov    0x10(%ebp),%edx
 82e6d1a:	89 02                	mov    %eax,(%edx)
 82e6d1c:	b8 01 00 00 00       	mov    $0x1,%eax
 82e6d21:	eb 14                	jmp    82e6d37 <_ZN11pvp_assault13CAssaultPlace7GetTeamEP5CUserR17ENUM_ASSAULT_TEAM+0x5b>
 82e6d23:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 82e6d27:	83 7d f4 07          	cmpl   $0x7,-0xc(%ebp)
 82e6d2b:	0f 9e c0             	setle  %al
 82e6d2e:	84 c0                	test   %al,%al
 82e6d30:	75 b9                	jne    82e6ceb <_ZN11pvp_assault13CAssaultPlace7GetTeamEP5CUserR17ENUM_ASSAULT_TEAM+0xf>
 82e6d32:	b8 00 00 00 00       	mov    $0x0,%eax
 82e6d37:	c9                   	leave
 82e6d38:	c3                   	ret
 82e6d39:	90                   	nop

```

```c
// pvp_assault::CAssaultPlace::GetTeam @ 0x82e6cdc

/* pvp_assault::CAssaultPlace::GetTeam(CUser*, ENUM_ASSAULT_TEAM&) */

undefined4 __thiscall
pvp_assault::CAssaultPlace::GetTeam(CAssaultPlace *this,CUser *param_1,ENUM_ASSAULT_TEAM *param_2)

{
  CUser *pCVar1;
  undefined4 uVar2;
  int local_10;
  
  local_10 = 0;
  while( true ) {
    if (7 < local_10) {
      return 0;
    }
    pCVar1 = (CUser *)CAssaulter::GetUser((CAssaulter *)(this + local_10 * 0x20));
    if (pCVar1 == param_1) break;
    local_10 = local_10 + 1;
  }
  uVar2 = CAssaulter::GetTeam((CAssaulter *)(this + local_10 * 0x20));
  *(undefined4 *)param_2 = uVar2;
  return 1;
}

```

---

## LeaveAssaultPlace

```asm
// === 082ead6a pvp_assault::CAssaultPlace::LeaveAssaultPlace  [0x082ead6a-0x82eb3b9] ===
 82ead6a:	55                   	push   %ebp
 82ead6b:	89 e5                	mov    %esp,%ebp
 82ead6d:	56                   	push   %esi
 82ead6e:	53                   	push   %ebx
 82ead6f:	83 ec 70             	sub    $0x70,%esp
 82ead72:	8b 55 10             	mov    0x10(%ebp),%edx
 82ead75:	8b 45 14             	mov    0x14(%ebp),%eax
 82ead78:	88 55 b4             	mov    %dl,-0x4c(%ebp)
 82ead7b:	88 45 b0             	mov    %al,-0x50(%ebp)
 82ead7e:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 82ead82:	0f 88 27 06 00 00    	js     82eb3af <_ZN11pvp_assault13CAssaultPlace17LeaveAssaultPlaceEibb+0x645>
 82ead88:	83 7d 0c 07          	cmpl   $0x7,0xc(%ebp)
 82ead8c:	0f 8f 20 06 00 00    	jg     82eb3b2 <_ZN11pvp_assault13CAssaultPlace17LeaveAssaultPlaceEibb+0x648>
 82ead92:	8b 45 0c             	mov    0xc(%ebp),%eax
 82ead95:	c1 e0 05             	shl    $0x5,%eax
 82ead98:	03 45 08             	add    0x8(%ebp),%eax
 82ead9b:	89 04 24             	mov    %eax,(%esp)
 82ead9e:	e8 9f 57 00 00       	call   82f0542 <_ZN11pvp_assault10CAssaulter7GetUserEv>
 82eada3:	89 45 e8             	mov    %eax,-0x18(%ebp)
 82eada6:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 82eadaa:	0f 84 ca 02 00 00    	je     82eb07a <_ZN11pvp_assault13CAssaultPlace17LeaveAssaultPlaceEibb+0x310>
 82eadb0:	0f b6 45 b0          	movzbl -0x50(%ebp),%eax
 82eadb4:	89 44 24 04          	mov    %eax,0x4(%esp)
 82eadb8:	8b 45 08             	mov    0x8(%ebp),%eax
 82eadbb:	89 04 24             	mov    %eax,(%esp)
 82eadbe:	e8 31 ff ff ff       	call   82eacf4 <_ZN11pvp_assault13CAssaultPlace16_IsGiveupPanaltyEb>
 82eadc3:	84 c0                	test   %al,%al
 82eadc5:	0f 84 ed 00 00 00    	je     82eaeb8 <_ZN11pvp_assault13CAssaultPlace17LeaveAssaultPlaceEibb+0x14e>
 82eadcb:	8b 45 0c             	mov    0xc(%ebp),%eax
 82eadce:	c1 e0 05             	shl    $0x5,%eax
 82eadd1:	03 45 08             	add    0x8(%ebp),%eax
 82eadd4:	89 04 24             	mov    %eax,(%esp)
 82eadd7:	e8 8c ba ff ff       	call   82e6868 <_ZN11pvp_assault10CAssaulter13GiveupPanaltyEv>
 82eaddc:	8b 45 08             	mov    0x8(%ebp),%eax
 82eaddf:	8b 80 0c 01 00 00    	mov    0x10c(%eax),%eax
 82eade5:	83 f8 01             	cmp    $0x1,%eax
 82eade8:	7e 23                	jle    82eae0d <_ZN11pvp_assault13CAssaultPlace17LeaveAssaultPlaceEibb+0xa3>
 82eadea:	8b 45 08             	mov    0x8(%ebp),%eax
 82eaded:	8b 80 0c 01 00 00    	mov    0x10c(%eax),%eax
 82eadf3:	83 f8 03             	cmp    $0x3,%eax
 82eadf6:	7f 15                	jg     82eae0d <_ZN11pvp_assault13CAssaultPlace17LeaveAssaultPlaceEibb+0xa3>
 82eadf8:	8b 45 e8             	mov    -0x18(%ebp),%eax
 82eadfb:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82eae02:	00 
 82eae03:	89 04 24             	mov    %eax,(%esp)
 82eae06:	e8 75 5f 00 00       	call   82f0d80 <_ZN15CUserCharacInfo24SetCurCharacLeaveTimeoutEb>
 82eae0b:	eb 7c                	jmp    82eae89 <_ZN11pvp_assault13CAssaultPlace17LeaveAssaultPlaceEibb+0x11f>
 82eae0d:	8b 45 08             	mov    0x8(%ebp),%eax
 82eae10:	8b 80 0c 01 00 00    	mov    0x10c(%eax),%eax
 82eae16:	83 f8 03             	cmp    $0x3,%eax
 82eae19:	7e 6e                	jle    82eae89 <_ZN11pvp_assault13CAssaultPlace17LeaveAssaultPlaceEibb+0x11f>
 82eae1b:	8b 45 08             	mov    0x8(%ebp),%eax
 82eae1e:	8b 80 0c 01 00 00    	mov    0x10c(%eax),%eax
 82eae24:	83 f8 06             	cmp    $0x6,%eax
 82eae27:	7f 60                	jg     82eae89 <_ZN11pvp_assault13CAssaultPlace17LeaveAssaultPlaceEibb+0x11f>
 82eae29:	8d 45 d0             	lea    -0x30(%ebp),%eax
 82eae2c:	89 04 24             	mov    %eax,(%esp)
 82eae2f:	e8 18 2f 2a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 82eae34:	8b 45 e8             	mov    -0x18(%ebp),%eax
 82eae37:	89 44 24 08          	mov    %eax,0x8(%esp)
 82eae3b:	8d 45 d0             	lea    -0x30(%ebp),%eax
 82eae3e:	89 44 24 04          	mov    %eax,0x4(%esp)
 82eae42:	8b 45 08             	mov    0x8(%ebp),%eax
 82eae45:	89 04 24             	mov    %eax,(%esp)
 82eae48:	e8 13 df ff ff       	call   82e8d60 <_ZN11pvp_assault13CAssaultPlace14_MakeUserStateEP11PacketGuardP5CUser>
 82eae4d:	e8 55 f5 de ff       	call   80da3a7 <_Z11G_GameWorldv>
 82eae52:	8d 55 d0             	lea    -0x30(%ebp),%edx
 82eae55:	89 54 24 04          	mov    %edx,0x4(%esp)
 82eae59:	89 04 24             	mov    %eax,(%esp)
 82eae5c:	e8 b3 dd 3d 00       	call   86c8c14 <_ZN9GameWorld8send_allER11PacketGuard>
 82eae61:	eb 1b                	jmp    82eae7e <_ZN11pvp_assault13CAssaultPlace17LeaveAssaultPlaceEibb+0x114>
 82eae63:	89 d3                	mov    %edx,%ebx
 82eae65:	89 c6                	mov    %eax,%esi
 82eae67:	8d 45 d0             	lea    -0x30(%ebp),%eax
 82eae6a:	89 04 24             	mov    %eax,(%esp)
 82eae6d:	e8 0e 30 2a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82eae72:	89 f0                	mov    %esi,%eax
 82eae74:	89 da                	mov    %ebx,%edx
 82eae76:	89 04 24             	mov    %eax,(%esp)
 82eae79:	e8 d2 88 7f 00       	call   8ae3750 <_Unwind_Resume>
 82eae7e:	8d 45 d0             	lea    -0x30(%ebp),%eax
 82eae81:	89 04 24             	mov    %eax,(%esp)
 82eae84:	e8 f7 2f 2a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82eae89:	8b 45 e8             	mov    -0x18(%ebp),%eax
 82eae8c:	89 44 24 04          	mov    %eax,0x4(%esp)
 82eae90:	8b 45 08             	mov    0x8(%ebp),%eax
 82eae93:	89 04 24             	mov    %eax,(%esp)
 82eae96:	e8 7f fc ff ff       	call   82eab1a <_ZN11pvp_assault13CAssaultPlace19_IsBroadcastRunawayEP5CUser>
 82eae9b:	84 c0                	test   %al,%al
 82eae9d:	74 19                	je     82eaeb8 <_ZN11pvp_assault13CAssaultPlace17LeaveAssaultPlaceEibb+0x14e>
 82eae9f:	8b 45 0c             	mov    0xc(%ebp),%eax
 82eaea2:	89 44 24 08          	mov    %eax,0x8(%esp)
 82eaea6:	8b 45 e8             	mov    -0x18(%ebp),%eax
 82eaea9:	89 44 24 04          	mov    %eax,0x4(%esp)
 82eaead:	8b 45 08             	mov    0x8(%ebp),%eax
 82eaeb0:	89 04 24             	mov    %eax,(%esp)
 82eaeb3:	e8 c2 fc ff ff       	call   82eab7a <_ZN11pvp_assault13CAssaultPlace17_BroadcastRunawayEP5CUseri>
 82eaeb8:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82eaebb:	89 04 24             	mov    %eax,(%esp)
 82eaebe:	e8 89 2e 2a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 82eaec3:	8b 45 0c             	mov    0xc(%ebp),%eax
 82eaec6:	89 44 24 08          	mov    %eax,0x8(%esp)
 82eaeca:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82eaecd:	89 44 24 04          	mov    %eax,0x4(%esp)
 82eaed1:	8b 45 08             	mov    0x8(%ebp),%eax
 82eaed4:	89 04 24             	mov    %eax,(%esp)
 82eaed7:	e8 6a e1 ff ff       	call   82e9046 <_ZN11pvp_assault13CAssaultPlace14_MakeLeaveUserEP11PacketGuardi>
 82eaedc:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82eaedf:	89 44 24 04          	mov    %eax,0x4(%esp)
 82eaee3:	8b 45 08             	mov    0x8(%ebp),%eax
 82eaee6:	89 04 24             	mov    %eax,(%esp)
 82eaee9:	e8 08 bd ff ff       	call   82e6bf6 <_ZN11pvp_assault13CAssaultPlace10SendPacketER11PacketGuard>
 82eaeee:	a1 50 be 40 09       	mov    0x940be50,%eax
 82eaef3:	89 04 24             	mov    %eax,(%esp)
 82eaef6:	e8 15 4a 19 00       	call   847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>
 82eaefb:	84 c0                	test   %al,%al
 82eaefd:	74 16                	je     82eaf15 <_ZN11pvp_assault13CAssaultPlace17LeaveAssaultPlaceEibb+0x1ab>
 82eaeff:	8b 45 e8             	mov    -0x18(%ebp),%eax
 82eaf02:	89 04 24             	mov    %eax,(%esp)
 82eaf05:	e8 5a a6 35 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 82eaf0a:	3c 07                	cmp    $0x7,%al
 82eaf0c:	75 07                	jne    82eaf15 <_ZN11pvp_assault13CAssaultPlace17LeaveAssaultPlaceEibb+0x1ab>
 82eaf0e:	b8 01 00 00 00       	mov    $0x1,%eax
 82eaf13:	eb 05                	jmp    82eaf1a <_ZN11pvp_assault13CAssaultPlace17LeaveAssaultPlaceEibb+0x1b0>
 82eaf15:	b8 00 00 00 00       	mov    $0x0,%eax
 82eaf1a:	84 c0                	test   %al,%al
 82eaf1c:	74 15                	je     82eaf33 <_ZN11pvp_assault13CAssaultPlace17LeaveAssaultPlaceEibb+0x1c9>
 82eaf1e:	a1 50 be 40 09       	mov    0x940be50,%eax
 82eaf23:	89 04 24             	mov    %eax,(%esp)
 82eaf26:	e8 db 59 00 00       	call   82f0906 <_ZN13CPowerManager14GetPowerWarLogEv>
 82eaf2b:	89 04 24             	mov    %eax,(%esp)
 82eaf2e:	e8 bf 59 00 00       	call   82f08f2 <_ZN12CPowerWarLog24IncTotalLeaveAssaultUserEv>
 82eaf33:	a1 50 be 40 09       	mov    0x940be50,%eax
 82eaf38:	89 04 24             	mov    %eax,(%esp)
 82eaf3b:	e8 d0 49 19 00       	call   847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>
 82eaf40:	84 c0                	test   %al,%al
 82eaf42:	74 16                	je     82eaf5a <_ZN11pvp_assault13CAssaultPlace17LeaveAssaultPlaceEibb+0x1f0>
 82eaf44:	8b 45 e8             	mov    -0x18(%ebp),%eax
 82eaf47:	89 04 24             	mov    %eax,(%esp)
 82eaf4a:	e8 15 a6 35 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 82eaf4f:	3c 07                	cmp    $0x7,%al
 82eaf51:	75 07                	jne    82eaf5a <_ZN11pvp_assault13CAssaultPlace17LeaveAssaultPlaceEibb+0x1f0>
 82eaf53:	b8 01 00 00 00       	mov    $0x1,%eax
 82eaf58:	eb 05                	jmp    82eaf5f <_ZN11pvp_assault13CAssaultPlace17LeaveAssaultPlaceEibb+0x1f5>
 82eaf5a:	b8 00 00 00 00       	mov    $0x0,%eax
 82eaf5f:	84 c0                	test   %al,%al
 82eaf61:	74 26                	je     82eaf89 <_ZN11pvp_assault13CAssaultPlace17LeaveAssaultPlaceEibb+0x21f>
 82eaf63:	8b 45 e8             	mov    -0x18(%ebp),%eax
 82eaf66:	89 04 24             	mov    %eax,(%esp)
 82eaf69:	e8 80 5a 00 00       	call   82f09ee <_ZN15CUserCharacInfo13getPowerWarHPEv>
 82eaf6e:	0f b7 c0             	movzwl %ax,%eax
 82eaf71:	89 44 24 08          	mov    %eax,0x8(%esp)
 82eaf75:	8b 45 e8             	mov    -0x18(%ebp),%eax
 82eaf78:	89 44 24 04          	mov    %eax,0x4(%esp)
 82eaf7c:	8b 45 08             	mov    0x8(%ebp),%eax
 82eaf7f:	89 04 24             	mov    %eax,(%esp)
 82eaf82:	e8 a3 cb ff ff       	call   82e7b2a <_ZN11pvp_assault13CAssaultPlace17_SendCloseAssaultEP5CUseri>
 82eaf87:	eb 27                	jmp    82eafb0 <_ZN11pvp_assault13CAssaultPlace17LeaveAssaultPlaceEibb+0x246>
 82eaf89:	8b 45 0c             	mov    0xc(%ebp),%eax
 82eaf8c:	c1 e0 05             	shl    $0x5,%eax
 82eaf8f:	03 45 08             	add    0x8(%ebp),%eax
 82eaf92:	89 04 24             	mov    %eax,(%esp)
 82eaf95:	e8 ee b6 ff ff       	call   82e6688 <_ZN11pvp_assault10CAssaulter5GetHpEv>
 82eaf9a:	89 44 24 08          	mov    %eax,0x8(%esp)
 82eaf9e:	8b 45 e8             	mov    -0x18(%ebp),%eax
 82eafa1:	89 44 24 04          	mov    %eax,0x4(%esp)
 82eafa5:	8b 45 08             	mov    0x8(%ebp),%eax
 82eafa8:	89 04 24             	mov    %eax,(%esp)
 82eafab:	e8 7a cb ff ff       	call   82e7b2a <_ZN11pvp_assault13CAssaultPlace17_SendCloseAssaultEP5CUseri>
 82eafb0:	8b 45 0c             	mov    0xc(%ebp),%eax
 82eafb3:	c1 e0 05             	shl    $0x5,%eax
 82eafb6:	03 45 08             	add    0x8(%ebp),%eax
 82eafb9:	89 04 24             	mov    %eax,(%esp)
 82eafbc:	e8 9b 55 00 00       	call   82f055c <_ZN11pvp_assault10CAssaulter5EmptyEv>
 82eafc1:	83 f0 01             	xor    $0x1,%eax
 82eafc4:	84 c0                	test   %al,%al
 82eafc6:	0f 84 a3 00 00 00    	je     82eb06f <_ZN11pvp_assault13CAssaultPlace17LeaveAssaultPlaceEibb+0x305>
 82eafcc:	0f b6 45 b4          	movzbl -0x4c(%ebp),%eax
 82eafd0:	89 44 24 08          	mov    %eax,0x8(%esp)
 82eafd4:	8b 45 0c             	mov    0xc(%ebp),%eax
 82eafd7:	89 44 24 04          	mov    %eax,0x4(%esp)
 82eafdb:	8b 45 08             	mov    0x8(%ebp),%eax
 82eafde:	89 04 24             	mov    %eax,(%esp)
 82eafe1:	e8 46 be ff ff       	call   82e6e2c <_ZN11pvp_assault13CAssaultPlace8_DelUserEib>
 82eafe6:	8b 45 e8             	mov    -0x18(%ebp),%eax
 82eafe9:	89 04 24             	mov    %eax,(%esp)
 82eafec:	e8 e9 f2 de ff       	call   80da2da <_ZN15CUserCharacInfo16IsCurCharacGhostEv>
 82eaff1:	83 f0 01             	xor    $0x1,%eax
 82eaff4:	84 c0                	test   %al,%al
 82eaff6:	74 77                	je     82eb06f <_ZN11pvp_assault13CAssaultPlace17LeaveAssaultPlaceEibb+0x305>
 82eaff8:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 82eaffb:	89 04 24             	mov    %eax,(%esp)
 82eaffe:	e8 49 2d 2a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 82eb003:	8b 45 e8             	mov    -0x18(%ebp),%eax
 82eb006:	89 44 24 08          	mov    %eax,0x8(%esp)
 82eb00a:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 82eb00d:	89 44 24 04          	mov    %eax,0x4(%esp)
 82eb011:	8b 45 08             	mov    0x8(%ebp),%eax
 82eb014:	89 04 24             	mov    %eax,(%esp)
 82eb017:	e8 44 dd ff ff       	call   82e8d60 <_ZN11pvp_assault13CAssaultPlace14_MakeUserStateEP11PacketGuardP5CUser>
 82eb01c:	e8 86 f3 de ff       	call   80da3a7 <_Z11G_GameWorldv>
 82eb021:	8d 55 c4             	lea    -0x3c(%ebp),%edx
 82eb024:	89 54 24 04          	mov    %edx,0x4(%esp)
 82eb028:	89 04 24             	mov    %eax,(%esp)
 82eb02b:	e8 e4 db 3d 00       	call   86c8c14 <_ZN9GameWorld8send_allER11PacketGuard>
 82eb030:	eb 15                	jmp    82eb047 <_ZN11pvp_assault13CAssaultPlace17LeaveAssaultPlaceEibb+0x2dd>
 82eb032:	89 d3                	mov    %edx,%ebx
 82eb034:	89 c6                	mov    %eax,%esi
 82eb036:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 82eb039:	89 04 24             	mov    %eax,(%esp)
 82eb03c:	e8 3f 2e 2a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82eb041:	89 f0                	mov    %esi,%eax
 82eb043:	89 da                	mov    %ebx,%edx
 82eb045:	eb 0d                	jmp    82eb054 <_ZN11pvp_assault13CAssaultPlace17LeaveAssaultPlaceEibb+0x2ea>
 82eb047:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 82eb04a:	89 04 24             	mov    %eax,(%esp)
 82eb04d:	e8 2e 2e 2a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82eb052:	eb 1b                	jmp    82eb06f <_ZN11pvp_assault13CAssaultPlace17LeaveAssaultPlaceEibb+0x305>
 82eb054:	89 d3                	mov    %edx,%ebx
 82eb056:	89 c6                	mov    %eax,%esi
 82eb058:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82eb05b:	89 04 24             	mov    %eax,(%esp)
 82eb05e:	e8 1d 2e 2a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82eb063:	89 f0                	mov    %esi,%eax
 82eb065:	89 da                	mov    %ebx,%edx
 82eb067:	89 04 24             	mov    %eax,(%esp)
 82eb06a:	e8 e1 86 7f 00       	call   8ae3750 <_Unwind_Resume>
 82eb06f:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82eb072:	89 04 24             	mov    %eax,(%esp)
 82eb075:	e8 06 2e 2a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82eb07a:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 82eb07e:	74 2a                	je     82eb0aa <_ZN11pvp_assault13CAssaultPlace17LeaveAssaultPlaceEibb+0x340>
 82eb080:	a1 50 be 40 09       	mov    0x940be50,%eax
 82eb085:	89 04 24             	mov    %eax,(%esp)
 82eb088:	e8 83 48 19 00       	call   847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>
 82eb08d:	83 f0 01             	xor    $0x1,%eax
 82eb090:	84 c0                	test   %al,%al
 82eb092:	75 0f                	jne    82eb0a3 <_ZN11pvp_assault13CAssaultPlace17LeaveAssaultPlaceEibb+0x339>
 82eb094:	8b 45 e8             	mov    -0x18(%ebp),%eax
 82eb097:	89 04 24             	mov    %eax,(%esp)
 82eb09a:	e8 c5 a4 35 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 82eb09f:	3c 07                	cmp    $0x7,%al
 82eb0a1:	74 07                	je     82eb0aa <_ZN11pvp_assault13CAssaultPlace17LeaveAssaultPlaceEibb+0x340>
 82eb0a3:	b8 01 00 00 00       	mov    $0x1,%eax
 82eb0a8:	eb 05                	jmp    82eb0af <_ZN11pvp_assault13CAssaultPlace17LeaveAssaultPlaceEibb+0x345>
 82eb0aa:	b8 00 00 00 00       	mov    $0x0,%eax
 82eb0af:	84 c0                	test   %al,%al
 82eb0b1:	0f 84 83 00 00 00    	je     82eb13a <_ZN11pvp_assault13CAssaultPlace17LeaveAssaultPlaceEibb+0x3d0>
 82eb0b7:	8b 45 08             	mov    0x8(%ebp),%eax
 82eb0ba:	8b 80 0c 01 00 00    	mov    0x10c(%eax),%eax
 82eb0c0:	83 f8 03             	cmp    $0x3,%eax
 82eb0c3:	7f 75                	jg     82eb13a <_ZN11pvp_assault13CAssaultPlace17LeaveAssaultPlaceEibb+0x3d0>
 82eb0c5:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 82eb0c9:	74 06                	je     82eb0d1 <_ZN11pvp_assault13CAssaultPlace17LeaveAssaultPlaceEibb+0x367>
 82eb0cb:	83 7d 0c 01          	cmpl   $0x1,0xc(%ebp)
 82eb0cf:	75 69                	jne    82eb13a <_ZN11pvp_assault13CAssaultPlace17LeaveAssaultPlaceEibb+0x3d0>
 82eb0d1:	8b 45 08             	mov    0x8(%ebp),%eax
 82eb0d4:	8b 80 2c 01 00 00    	mov    0x12c(%eax),%eax
 82eb0da:	85 c0                	test   %eax,%eax
 82eb0dc:	74 19                	je     82eb0f7 <_ZN11pvp_assault13CAssaultPlace17LeaveAssaultPlaceEibb+0x38d>
 82eb0de:	8b 45 08             	mov    0x8(%ebp),%eax
 82eb0e1:	8b 80 2c 01 00 00    	mov    0x12c(%eax),%eax
 82eb0e7:	c7 44 24 04 07 00 00 	movl   $0x7,0x4(%esp)
 82eb0ee:	00 
 82eb0ef:	89 04 24             	mov    %eax,(%esp)
 82eb0f2:	e8 3d a9 fb ff       	call   82a5a34 <_ZN6CParty15SetAssaultStateEc>
 82eb0f7:	8b 45 08             	mov    0x8(%ebp),%eax
 82eb0fa:	8b 80 30 01 00 00    	mov    0x130(%eax),%eax
 82eb100:	85 c0                	test   %eax,%eax
 82eb102:	74 19                	je     82eb11d <_ZN11pvp_assault13CAssaultPlace17LeaveAssaultPlaceEibb+0x3b3>
 82eb104:	8b 45 08             	mov    0x8(%ebp),%eax
 82eb107:	8b 80 30 01 00 00    	mov    0x130(%eax),%eax
 82eb10d:	c7 44 24 04 07 00 00 	movl   $0x7,0x4(%esp)
 82eb114:	00 
 82eb115:	89 04 24             	mov    %eax,(%esp)
 82eb118:	e8 17 a9 fb ff       	call   82a5a34 <_ZN6CParty15SetAssaultStateEc>
 82eb11d:	8b 45 08             	mov    0x8(%ebp),%eax
 82eb120:	c7 80 0c 01 00 00 07 	movl   $0x7,0x10c(%eax)
 82eb127:	00 00 00 
 82eb12a:	8b 45 08             	mov    0x8(%ebp),%eax
 82eb12d:	89 04 24             	mov    %eax,(%esp)
 82eb130:	e8 a1 e9 ff ff       	call   82e9ad6 <_ZN11pvp_assault13CAssaultPlace12CloseAssaultEv>
 82eb135:	e9 79 02 00 00       	jmp    82eb3b3 <_ZN11pvp_assault13CAssaultPlace17LeaveAssaultPlaceEibb+0x649>
 82eb13a:	8b 45 08             	mov    0x8(%ebp),%eax
 82eb13d:	8b 80 00 01 00 00    	mov    0x100(%eax),%eax
 82eb143:	85 c0                	test   %eax,%eax
 82eb145:	75 69                	jne    82eb1b0 <_ZN11pvp_assault13CAssaultPlace17LeaveAssaultPlaceEibb+0x446>
 82eb147:	8b 45 08             	mov    0x8(%ebp),%eax
 82eb14a:	8b 80 2c 01 00 00    	mov    0x12c(%eax),%eax
 82eb150:	85 c0                	test   %eax,%eax
 82eb152:	74 19                	je     82eb16d <_ZN11pvp_assault13CAssaultPlace17LeaveAssaultPlaceEibb+0x403>
 82eb154:	8b 45 08             	mov    0x8(%ebp),%eax
 82eb157:	8b 80 2c 01 00 00    	mov    0x12c(%eax),%eax
 82eb15d:	c7 44 24 04 07 00 00 	movl   $0x7,0x4(%esp)
 82eb164:	00 
 82eb165:	89 04 24             	mov    %eax,(%esp)
 82eb168:	e8 c7 a8 fb ff       	call   82a5a34 <_ZN6CParty15SetAssaultStateEc>
 82eb16d:	8b 45 08             	mov    0x8(%ebp),%eax
 82eb170:	8b 80 30 01 00 00    	mov    0x130(%eax),%eax
 82eb176:	85 c0                	test   %eax,%eax
 82eb178:	74 19                	je     82eb193 <_ZN11pvp_assault13CAssaultPlace17LeaveAssaultPlaceEibb+0x429>
 82eb17a:	8b 45 08             	mov    0x8(%ebp),%eax
 82eb17d:	8b 80 30 01 00 00    	mov    0x130(%eax),%eax
 82eb183:	c7 44 24 04 07 00 00 	movl   $0x7,0x4(%esp)
 82eb18a:	00 
 82eb18b:	89 04 24             	mov    %eax,(%esp)
 82eb18e:	e8 a1 a8 fb ff       	call   82a5a34 <_ZN6CParty15SetAssaultStateEc>
 82eb193:	8b 45 08             	mov    0x8(%ebp),%eax
 82eb196:	c7 80 0c 01 00 00 07 	movl   $0x7,0x10c(%eax)
 82eb19d:	00 00 00 
 82eb1a0:	8b 45 08             	mov    0x8(%ebp),%eax
 82eb1a3:	89 04 24             	mov    %eax,(%esp)
 82eb1a6:	e8 2b e9 ff ff       	call   82e9ad6 <_ZN11pvp_assault13CAssaultPlace12CloseAssaultEv>
 82eb1ab:	e9 03 02 00 00       	jmp    82eb3b3 <_ZN11pvp_assault13CAssaultPlace17LeaveAssaultPlaceEibb+0x649>
 82eb1b0:	8b 45 08             	mov    0x8(%ebp),%eax
 82eb1b3:	89 04 24             	mov    %eax,(%esp)
 82eb1b6:	e8 87 df ff ff       	call   82e9142 <_ZN11pvp_assault13CAssaultPlace14_CheckPlayableEv>
 82eb1bb:	83 f0 01             	xor    $0x1,%eax
 82eb1be:	84 c0                	test   %al,%al
 82eb1c0:	0f 84 ed 01 00 00    	je     82eb3b3 <_ZN11pvp_assault13CAssaultPlace17LeaveAssaultPlaceEibb+0x649>
 82eb1c6:	a1 50 be 40 09       	mov    0x940be50,%eax
 82eb1cb:	89 04 24             	mov    %eax,(%esp)
 82eb1ce:	e8 3d 47 19 00       	call   847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>
 82eb1d3:	84 c0                	test   %al,%al
 82eb1d5:	74 1c                	je     82eb1f3 <_ZN11pvp_assault13CAssaultPlace17LeaveAssaultPlaceEibb+0x489>
 82eb1d7:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 82eb1db:	74 16                	je     82eb1f3 <_ZN11pvp_assault13CAssaultPlace17LeaveAssaultPlaceEibb+0x489>
 82eb1dd:	8b 45 e8             	mov    -0x18(%ebp),%eax
 82eb1e0:	89 04 24             	mov    %eax,(%esp)
 82eb1e3:	e8 7c a3 35 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 82eb1e8:	3c 07                	cmp    $0x7,%al
 82eb1ea:	75 07                	jne    82eb1f3 <_ZN11pvp_assault13CAssaultPlace17LeaveAssaultPlaceEibb+0x489>
 82eb1ec:	b8 01 00 00 00       	mov    $0x1,%eax
 82eb1f1:	eb 05                	jmp    82eb1f8 <_ZN11pvp_assault13CAssaultPlace17LeaveAssaultPlaceEibb+0x48e>
 82eb1f3:	b8 00 00 00 00       	mov    $0x0,%eax
 82eb1f8:	84 c0                	test   %al,%al
 82eb1fa:	0f 84 49 01 00 00    	je     82eb349 <_ZN11pvp_assault13CAssaultPlace17LeaveAssaultPlaceEibb+0x5df>
 82eb200:	8b 45 08             	mov    0x8(%ebp),%eax
 82eb203:	8b 80 0c 01 00 00    	mov    0x10c(%eax),%eax
 82eb209:	83 f8 03             	cmp    $0x3,%eax
 82eb20c:	0f 8e 37 01 00 00    	jle    82eb349 <_ZN11pvp_assault13CAssaultPlace17LeaveAssaultPlaceEibb+0x5df>
 82eb212:	8b 45 08             	mov    0x8(%ebp),%eax
 82eb215:	8b 80 0c 01 00 00    	mov    0x10c(%eax),%eax
 82eb21b:	83 f8 04             	cmp    $0x4,%eax
 82eb21e:	0f 8f 25 01 00 00    	jg     82eb349 <_ZN11pvp_assault13CAssaultPlace17LeaveAssaultPlaceEibb+0x5df>
 82eb224:	c7 45 c0 00 00 00 00 	movl   $0x0,-0x40(%ebp)
 82eb22b:	c7 45 bc 00 00 00 00 	movl   $0x0,-0x44(%ebp)
 82eb232:	c7 45 b8 00 00 00 00 	movl   $0x0,-0x48(%ebp)
 82eb239:	8b 45 e8             	mov    -0x18(%ebp),%eax
 82eb23c:	89 04 24             	mov    %eax,(%esp)
 82eb23f:	e8 82 4a f4 ff       	call   822fcc6 <_ZN5CUser12getPowerSideEv>
 82eb244:	0f be c0             	movsbl %al,%eax
 82eb247:	8d 55 b8             	lea    -0x48(%ebp),%edx
 82eb24a:	89 54 24 14          	mov    %edx,0x14(%esp)
 82eb24e:	8d 55 bc             	lea    -0x44(%ebp),%edx
 82eb251:	89 54 24 10          	mov    %edx,0x10(%esp)
 82eb255:	8d 55 c0             	lea    -0x40(%ebp),%edx
 82eb258:	89 54 24 0c          	mov    %edx,0xc(%esp)
 82eb25c:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 82eb263:	00 
 82eb264:	89 44 24 04          	mov    %eax,0x4(%esp)
 82eb268:	8b 45 08             	mov    0x8(%ebp),%eax
 82eb26b:	89 04 24             	mov    %eax,(%esp)
 82eb26e:	e8 ef c0 ff ff       	call   82e7362 <_ZN11pvp_assault13CAssaultPlace22_CheckPowerWarInPlayerE20ENUM_POWER_SIDE_TYPE30ENUM_POWER_WAR_WINNER_OR_LOSERRiS3_S3_>
 82eb273:	84 c0                	test   %al,%al
 82eb275:	74 2f                	je     82eb2a6 <_ZN11pvp_assault13CAssaultPlace17LeaveAssaultPlaceEibb+0x53c>
 82eb277:	8b 4d b8             	mov    -0x48(%ebp),%ecx
 82eb27a:	8b 55 bc             	mov    -0x44(%ebp),%edx
 82eb27d:	8b 45 c0             	mov    -0x40(%ebp),%eax
 82eb280:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 82eb284:	89 54 24 10          	mov    %edx,0x10(%esp)
 82eb288:	89 44 24 0c          	mov    %eax,0xc(%esp)
 82eb28c:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 82eb293:	00 
 82eb294:	8b 45 e8             	mov    -0x18(%ebp),%eax
 82eb297:	89 44 24 04          	mov    %eax,0x4(%esp)
 82eb29b:	8b 45 08             	mov    0x8(%ebp),%eax
 82eb29e:	89 04 24             	mov    %eax,(%esp)
 82eb2a1:	e8 0c 1c 00 00       	call   82eceb2 <_ZN11pvp_assault13CAssaultPlace31_SendPowerWarPointToGuildServerEP5CUser30ENUM_POWER_WAR_WINNER_OR_LOSERiii>
 82eb2a6:	8b 45 e8             	mov    -0x18(%ebp),%eax
 82eb2a9:	89 04 24             	mov    %eax,(%esp)
 82eb2ac:	e8 9b 9e 36 00       	call   865514c <_ZN5CUser8GetPartyEv>
 82eb2b1:	89 45 ec             	mov    %eax,-0x14(%ebp)
 82eb2b4:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 82eb2b8:	74 0d                	je     82eb2c7 <_ZN11pvp_assault13CAssaultPlace17LeaveAssaultPlaceEibb+0x55d>
 82eb2ba:	8b 45 ec             	mov    -0x14(%ebp),%eax
 82eb2bd:	89 04 24             	mov    %eax,(%esp)
 82eb2c0:	e8 53 55 00 00       	call   82f0818 <_ZN6CParty22resetStraightVictoriesEv>
 82eb2c5:	eb 0b                	jmp    82eb2d2 <_ZN11pvp_assault13CAssaultPlace17LeaveAssaultPlaceEibb+0x568>
 82eb2c7:	8b 45 e8             	mov    -0x18(%ebp),%eax
 82eb2ca:	89 04 24             	mov    %eax,(%esp)
 82eb2cd:	e8 8a 57 00 00       	call   82f0a5c <_ZN15CUserCharacInfo22resetStraightVictoriesEv>
 82eb2d2:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 82eb2d9:	eb 63                	jmp    82eb33e <_ZN11pvp_assault13CAssaultPlace17LeaveAssaultPlaceEibb+0x5d4>
 82eb2db:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82eb2de:	c1 e0 05             	shl    $0x5,%eax
 82eb2e1:	03 45 08             	add    0x8(%ebp),%eax
 82eb2e4:	89 04 24             	mov    %eax,(%esp)
 82eb2e7:	e8 70 52 00 00       	call   82f055c <_ZN11pvp_assault10CAssaulter5EmptyEv>
 82eb2ec:	84 c0                	test   %al,%al
 82eb2ee:	75 49                	jne    82eb339 <_ZN11pvp_assault13CAssaultPlace17LeaveAssaultPlaceEibb+0x5cf>
 82eb2f0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82eb2f3:	c1 e0 05             	shl    $0x5,%eax
 82eb2f6:	03 45 08             	add    0x8(%ebp),%eax
 82eb2f9:	89 04 24             	mov    %eax,(%esp)
 82eb2fc:	e8 41 52 00 00       	call   82f0542 <_ZN11pvp_assault10CAssaulter7GetUserEv>
 82eb301:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82eb304:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82eb307:	89 04 24             	mov    %eax,(%esp)
 82eb30a:	e8 b7 49 f4 ff       	call   822fcc6 <_ZN5CUser12getPowerSideEv>
 82eb30f:	89 c3                	mov    %eax,%ebx
 82eb311:	8b 45 e8             	mov    -0x18(%ebp),%eax
 82eb314:	89 04 24             	mov    %eax,(%esp)
 82eb317:	e8 aa 49 f4 ff       	call   822fcc6 <_ZN5CUser12getPowerSideEv>
 82eb31c:	38 c3                	cmp    %al,%bl
 82eb31e:	0f 95 c0             	setne  %al
 82eb321:	84 c0                	test   %al,%al
 82eb323:	74 15                	je     82eb33a <_ZN11pvp_assault13CAssaultPlace17LeaveAssaultPlaceEibb+0x5d0>
 82eb325:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82eb328:	89 44 24 04          	mov    %eax,0x4(%esp)
 82eb32c:	8b 45 08             	mov    0x8(%ebp),%eax
 82eb32f:	89 04 24             	mov    %eax,(%esp)
 82eb332:	e8 21 12 00 00       	call   82ec558 <_ZN11pvp_assault13CAssaultPlace22_SendStraightVictoriesEP5CUser>
 82eb337:	eb 10                	jmp    82eb349 <_ZN11pvp_assault13CAssaultPlace17LeaveAssaultPlaceEibb+0x5df>
 82eb339:	90                   	nop
 82eb33a:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 82eb33e:	83 7d f0 07          	cmpl   $0x7,-0x10(%ebp)
 82eb342:	0f 9e c0             	setle  %al
 82eb345:	84 c0                	test   %al,%al
 82eb347:	75 92                	jne    82eb2db <_ZN11pvp_assault13CAssaultPlace17LeaveAssaultPlaceEibb+0x571>
 82eb349:	8b 45 08             	mov    0x8(%ebp),%eax
 82eb34c:	8b 80 2c 01 00 00    	mov    0x12c(%eax),%eax
 82eb352:	85 c0                	test   %eax,%eax
 82eb354:	74 19                	je     82eb36f <_ZN11pvp_assault13CAssaultPlace17LeaveAssaultPlaceEibb+0x605>
 82eb356:	8b 45 08             	mov    0x8(%ebp),%eax
 82eb359:	8b 80 2c 01 00 00    	mov    0x12c(%eax),%eax
 82eb35f:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 82eb366:	00 
 82eb367:	89 04 24             	mov    %eax,(%esp)
 82eb36a:	e8 c5 a6 fb ff       	call   82a5a34 <_ZN6CParty15SetAssaultStateEc>
 82eb36f:	8b 45 08             	mov    0x8(%ebp),%eax
 82eb372:	8b 80 30 01 00 00    	mov    0x130(%eax),%eax
 82eb378:	85 c0                	test   %eax,%eax
 82eb37a:	74 19                	je     82eb395 <_ZN11pvp_assault13CAssaultPlace17LeaveAssaultPlaceEibb+0x62b>
 82eb37c:	8b 45 08             	mov    0x8(%ebp),%eax
 82eb37f:	8b 80 30 01 00 00    	mov    0x130(%eax),%eax
 82eb385:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 82eb38c:	00 
 82eb38d:	89 04 24             	mov    %eax,(%esp)
 82eb390:	e8 9f a6 fb ff       	call   82a5a34 <_ZN6CParty15SetAssaultStateEc>
 82eb395:	8b 45 08             	mov    0x8(%ebp),%eax
 82eb398:	c7 80 0c 01 00 00 06 	movl   $0x6,0x10c(%eax)
 82eb39f:	00 00 00 
 82eb3a2:	8b 45 08             	mov    0x8(%ebp),%eax
 82eb3a5:	89 04 24             	mov    %eax,(%esp)
 82eb3a8:	e8 f5 e5 ff ff       	call   82e99a2 <_ZN11pvp_assault13CAssaultPlace10EndAssaultEv>
 82eb3ad:	eb 04                	jmp    82eb3b3 <_ZN11pvp_assault13CAssaultPlace17LeaveAssaultPlaceEibb+0x649>
 82eb3af:	90                   	nop
 82eb3b0:	eb 01                	jmp    82eb3b3 <_ZN11pvp_assault13CAssaultPlace17LeaveAssaultPlaceEibb+0x649>
 82eb3b2:	90                   	nop
 82eb3b3:	83 c4 70             	add    $0x70,%esp
 82eb3b6:	5b                   	pop    %ebx
 82eb3b7:	5e                   	pop    %esi
 82eb3b8:	5d                   	pop    %ebp
 82eb3b9:	c3                   	ret

```

```c
// pvp_assault::CAssaultPlace::LeaveAssaultPlace @ 0x82ead6a

/* pvp_assault::CAssaultPlace::LeaveAssaultPlace(int, bool, bool) */

void __thiscall
pvp_assault::CAssaultPlace::LeaveAssaultPlace
          (CAssaultPlace *this,int param_1,bool param_2,bool param_3)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  CPowerWarLog *this_00;
  uint uVar4;
  int iVar5;
  GameWorld *pGVar6;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  PacketGuard local_40 [12];
  PacketGuard local_34 [12];
  PacketGuard local_28 [12];
  CUserCharacInfo *local_1c;
  CParty *local_18;
  int local_14;
  CUser *local_10;
  
  if ((-1 < param_1) && (param_1 < 8)) {
    local_1c = (CUserCharacInfo *)CAssaulter::GetUser((CAssaulter *)(this + param_1 * 0x20));
    if (local_1c != (CUserCharacInfo *)0x0) {
      cVar2 = _IsGiveupPanalty(this,param_3);
      if (cVar2 != '\0') {
        CAssaulter::GiveupPanalty((CAssaulter *)(this + param_1 * 0x20));
        if ((*(int *)(this + 0x10c) < 2) || (3 < *(int *)(this + 0x10c))) {
          if ((3 < *(int *)(this + 0x10c)) && (*(int *)(this + 0x10c) < 7)) {
            PacketGuard::PacketGuard(local_34);
                    /* try { // try from 082eae48 to 082eae60 has its CatchHandler @ 082eae63 */
            _MakeUserState(this,local_34,(CUser *)local_1c);
            pGVar6 = (GameWorld *)G_GameWorld();
            GameWorld::send_all(pGVar6,local_34);
            PacketGuard::~PacketGuard(local_34);
          }
        }
        else {
          CUserCharacInfo::SetCurCharacLeaveTimeout(local_1c,true);
        }
        cVar2 = _IsBroadcastRunaway(this,(CUser *)local_1c);
        if (cVar2 != '\0') {
          _BroadcastRunaway(this,(CUser *)local_1c,param_1);
        }
      }
      PacketGuard::PacketGuard(local_28);
                    /* try { // try from 082eaed7 to 082eb002 has its CatchHandler @ 082eb054 */
      _MakeLeaveUser(this,local_28,param_1);
      SendPacket(this,local_28);
      cVar2 = CPowerManager::IsPowerWarEventOn();
      if ((cVar2 == '\0') || (cVar2 = CUserCharacInfo::getCurCharacVill(local_1c), cVar2 != '\a')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        this_00 = (CPowerWarLog *)CPowerManager::GetPowerWarLog(GlobalData::s_power_manager);
        CPowerWarLog::IncTotalLeaveAssaultUser(this_00);
      }
      cVar2 = CPowerManager::IsPowerWarEventOn();
      if ((cVar2 == '\0') || (cVar2 = CUserCharacInfo::getCurCharacVill(local_1c), cVar2 != '\a')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        uVar4 = CUserCharacInfo::getPowerWarHP(local_1c);
        _SendCloseAssault(this,(CUser *)local_1c,uVar4 & 0xffff);
      }
      else {
        iVar5 = CAssaulter::GetHp((CAssaulter *)(this + param_1 * 0x20));
        _SendCloseAssault(this,(CUser *)local_1c,iVar5);
      }
      cVar2 = CAssaulter::Empty((CAssaulter *)(this + param_1 * 0x20));
      if (cVar2 != '\x01') {
        _DelUser(this,param_1,param_2);
        cVar2 = CUserCharacInfo::IsCurCharacGhost(local_1c);
        if (cVar2 != '\x01') {
          PacketGuard::PacketGuard(local_40);
                    /* try { // try from 082eb017 to 082eb02f has its CatchHandler @ 082eb032 */
          _MakeUserState(this,local_40,(CUser *)local_1c);
          pGVar6 = (GameWorld *)G_GameWorld();
          GameWorld::send_all(pGVar6,local_40);
                    /* try { // try from 082eb04d to 082eb051 has its CatchHandler @ 082eb054 */
          PacketGuard::~PacketGuard(local_40);
        }
      }
      PacketGuard::~PacketGuard(local_28);
    }
    if ((local_1c == (CUserCharacInfo *)0x0) ||
       ((cVar2 = CPowerManager::IsPowerWarEventOn(), cVar2 == '\x01' &&
        (cVar2 = CUserCharacInfo::getCurCharacVill(local_1c), cVar2 == '\a')))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (((bVar1) && (*(int *)(this + 0x10c) < 4)) && ((param_1 == 0 || (param_1 == 1)))) {
      if (*(int *)(this + 300) != 0) {
        CParty::SetAssaultState(*(CParty **)(this + 300),'\a');
      }
      if (*(int *)(this + 0x130) != 0) {
        CParty::SetAssaultState(*(CParty **)(this + 0x130),'\a');
      }
      *(undefined4 *)(this + 0x10c) = 7;
      CloseAssault(this);
    }
    else if (*(int *)(this + 0x100) == 0) {
      if (*(int *)(this + 300) != 0) {
        CParty::SetAssaultState(*(CParty **)(this + 300),'\a');
      }
      if (*(int *)(this + 0x130) != 0) {
        CParty::SetAssaultState(*(CParty **)(this + 0x130),'\a');
      }
      *(undefined4 *)(this + 0x10c) = 7;
      CloseAssault(this);
    }
    else {
      cVar2 = _CheckPlayable(this);
      if (cVar2 != '\x01') {
        cVar2 = CPowerManager::IsPowerWarEventOn();
        if (((cVar2 == '\0') || (local_1c == (CUserCharacInfo *)0x0)) ||
           (cVar2 = CUserCharacInfo::getCurCharacVill(local_1c), cVar2 != '\a')) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (((bVar1) && (3 < *(int *)(this + 0x10c))) && (*(int *)(this + 0x10c) < 5)) {
          local_44 = 0;
          local_48 = 0;
          local_4c = 0;
          cVar2 = CUser::getPowerSide((CUser *)local_1c);
          cVar2 = _CheckPowerWarInPlayer(this,(int)cVar2,2,&local_44,&local_48,&local_4c);
          if (cVar2 != '\0') {
            _SendPowerWarPointToGuildServer(this,local_1c,2,local_44,local_48,local_4c);
          }
          local_18 = (CParty *)CUser::GetParty((CUser *)local_1c);
          if (local_18 == (CParty *)0x0) {
            CUserCharacInfo::resetStraightVictories(local_1c);
          }
          else {
            CParty::resetStraightVictories(local_18);
          }
          for (local_14 = 0; local_14 < 8; local_14 = local_14 + 1) {
            cVar2 = CAssaulter::Empty((CAssaulter *)(this + local_14 * 0x20));
            if (cVar2 == '\0') {
              local_10 = (CUser *)CAssaulter::GetUser((CAssaulter *)(this + local_14 * 0x20));
              cVar2 = CUser::getPowerSide(local_10);
              cVar3 = CUser::getPowerSide((CUser *)local_1c);
              if (cVar2 != cVar3) {
                _SendStraightVictories(this,local_10);
                break;
              }
            }
          }
        }
        if (*(int *)(this + 300) != 0) {
          CParty::SetAssaultState(*(CParty **)(this + 300),'\x06');
        }
        if (*(int *)(this + 0x130) != 0) {
          CParty::SetAssaultState(*(CParty **)(this + 0x130),'\x06');
        }
        *(undefined4 *)(this + 0x10c) = 6;
        EndAssault(this);
      }
    }
  }
  return;
}

```

---

## LeaveAssaultPlace_082eb450

```asm
// === 082eb450 pvp_assault::CAssaultPlace::LeaveAssaultPlace  [0x082eb450-0x82eb49b] ===
 82eb450:	55                   	push   %ebp
 82eb451:	89 e5                	mov    %esp,%ebp
 82eb453:	53                   	push   %ebx
 82eb454:	83 ec 24             	sub    $0x24,%esp
 82eb457:	8b 45 10             	mov    0x10(%ebp),%eax
 82eb45a:	88 45 f4             	mov    %al,-0xc(%ebp)
 82eb45d:	0f b6 5d f4          	movzbl -0xc(%ebp),%ebx
 82eb461:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 82eb468:	00 
 82eb469:	8b 45 0c             	mov    0xc(%ebp),%eax
 82eb46c:	89 44 24 04          	mov    %eax,0x4(%esp)
 82eb470:	8b 45 08             	mov    0x8(%ebp),%eax
 82eb473:	89 04 24             	mov    %eax,(%esp)
 82eb476:	e8 1f d0 ff ff       	call   82e849a <_ZN11pvp_assault13CAssaultPlace13_GetUserIndexEP5CUserb>
 82eb47b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82eb482:	00 
 82eb483:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 82eb487:	89 44 24 04          	mov    %eax,0x4(%esp)
 82eb48b:	8b 45 08             	mov    0x8(%ebp),%eax
 82eb48e:	89 04 24             	mov    %eax,(%esp)
 82eb491:	e8 d4 f8 ff ff       	call   82ead6a <_ZN11pvp_assault13CAssaultPlace17LeaveAssaultPlaceEibb>
 82eb496:	83 c4 24             	add    $0x24,%esp
 82eb499:	5b                   	pop    %ebx
 82eb49a:	5d                   	pop    %ebp
 82eb49b:	c3                   	ret

```

```c
// pvp_assault::CAssaultPlace::LeaveAssaultPlace @ 0x82eb450

/* pvp_assault::CAssaultPlace::LeaveAssaultPlace(CUser*, bool) */

void __thiscall
pvp_assault::CAssaultPlace::LeaveAssaultPlace(CAssaultPlace *this,CUser *param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = _GetUserIndex(this,param_1,true);
  LeaveAssaultPlace(this,iVar1,param_2,false);
  return;
}

```

---

## MakeTeam

```asm
// === 082e7d0a pvp_assault::CAssaultPlace::MakeTeam  [0x082e7d0a-0x82e8049] ===
 82e7d0a:	55                   	push   %ebp
 82e7d0b:	89 e5                	mov    %esp,%ebp
 82e7d0d:	57                   	push   %edi
 82e7d0e:	56                   	push   %esi
 82e7d0f:	53                   	push   %ebx
 82e7d10:	81 ec 8c 00 00 00    	sub    $0x8c,%esp
 82e7d16:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e7d19:	89 04 24             	mov    %eax,(%esp)
 82e7d1c:	e8 43 d8 35 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 82e7d21:	0f be d0             	movsbl %al,%edx
 82e7d24:	8b 45 08             	mov    0x8(%ebp),%eax
 82e7d27:	89 90 18 01 00 00    	mov    %edx,0x118(%eax)
 82e7d2d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82e7d34:	00 
 82e7d35:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e7d38:	89 04 24             	mov    %eax,(%esp)
 82e7d3b:	e8 7e 96 39 00       	call   86813be <_ZN5CUser8get_areaEb>
 82e7d40:	8b 55 08             	mov    0x8(%ebp),%edx
 82e7d43:	89 82 1c 01 00 00    	mov    %eax,0x11c(%edx)
 82e7d49:	8b 45 08             	mov    0x8(%ebp),%eax
 82e7d4c:	8b 80 18 01 00 00    	mov    0x118(%eax),%eax
 82e7d52:	85 c0                	test   %eax,%eax
 82e7d54:	75 39                	jne    82e7d8f <_ZN11pvp_assault13CAssaultPlace8MakeTeamEP5CUserS2_Ri+0x85>
 82e7d56:	8b 45 08             	mov    0x8(%ebp),%eax
 82e7d59:	8b 80 1c 01 00 00    	mov    0x11c(%eax),%eax
 82e7d5f:	85 c0                	test   %eax,%eax
 82e7d61:	75 2c                	jne    82e7d8f <_ZN11pvp_assault13CAssaultPlace8MakeTeamEP5CUserS2_Ri+0x85>
 82e7d63:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 82e7d6a:	e8 91 da 43 00       	call   8725800 <__cxa_allocate_exception>
 82e7d6f:	89 c2                	mov    %eax,%edx
 82e7d71:	c7 02 15 00 00 00    	movl   $0x15,(%edx)
 82e7d77:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82e7d7e:	00 
 82e7d7f:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 82e7d86:	08 
 82e7d87:	89 04 24             	mov    %eax,(%esp)
 82e7d8a:	e8 c1 ce 43 00       	call   8724c50 <__cxa_throw>
 82e7d8f:	8b 45 08             	mov    0x8(%ebp),%eax
 82e7d92:	8b 55 0c             	mov    0xc(%ebp),%edx
 82e7d95:	89 90 34 01 00 00    	mov    %edx,0x134(%eax)
 82e7d9b:	8b 45 08             	mov    0x8(%ebp),%eax
 82e7d9e:	8b 55 10             	mov    0x10(%ebp),%edx
 82e7da1:	89 90 38 01 00 00    	mov    %edx,0x138(%eax)
 82e7da7:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e7daa:	89 04 24             	mov    %eax,(%esp)
 82e7dad:	e8 7a cb e4 ff       	call   813492c <_ZN5CUser8get_posXEv>
 82e7db2:	89 c3                	mov    %eax,%ebx
 82e7db4:	8b 45 10             	mov    0x10(%ebp),%eax
 82e7db7:	89 04 24             	mov    %eax,(%esp)
 82e7dba:	e8 6d cb e4 ff       	call   813492c <_ZN5CUser8get_posXEv>
 82e7dbf:	66 39 c3             	cmp    %ax,%bx
 82e7dc2:	0f 92 c0             	setb   %al
 82e7dc5:	84 c0                	test   %al,%al
 82e7dc7:	74 28                	je     82e7df1 <_ZN11pvp_assault13CAssaultPlace8MakeTeamEP5CUserS2_Ri+0xe7>
 82e7dc9:	8b 45 10             	mov    0x10(%ebp),%eax
 82e7dcc:	89 44 24 08          	mov    %eax,0x8(%esp)
 82e7dd0:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e7dd3:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e7dd7:	8b 45 08             	mov    0x8(%ebp),%eax
 82e7dda:	89 04 24             	mov    %eax,(%esp)
 82e7ddd:	e8 b6 02 00 00       	call   82e8098 <_ZN11pvp_assault13CAssaultPlace13_SeparateTeamEP5CUserS2_>
 82e7de2:	8b 45 08             	mov    0x8(%ebp),%eax
 82e7de5:	c7 80 24 01 00 00 00 	movl   $0x0,0x124(%eax)
 82e7dec:	00 00 00 
 82e7def:	eb 26                	jmp    82e7e17 <_ZN11pvp_assault13CAssaultPlace8MakeTeamEP5CUserS2_Ri+0x10d>
 82e7df1:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e7df4:	89 44 24 08          	mov    %eax,0x8(%esp)
 82e7df8:	8b 45 10             	mov    0x10(%ebp),%eax
 82e7dfb:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e7dff:	8b 45 08             	mov    0x8(%ebp),%eax
 82e7e02:	89 04 24             	mov    %eax,(%esp)
 82e7e05:	e8 8e 02 00 00       	call   82e8098 <_ZN11pvp_assault13CAssaultPlace13_SeparateTeamEP5CUserS2_>
 82e7e0a:	8b 45 08             	mov    0x8(%ebp),%eax
 82e7e0d:	c7 80 24 01 00 00 01 	movl   $0x1,0x124(%eax)
 82e7e14:	00 00 00 
 82e7e17:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 82e7e1e:	e8 7b 3e de ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 82e7e23:	8b 55 08             	mov    0x8(%ebp),%edx
 82e7e26:	89 82 08 01 00 00    	mov    %eax,0x108(%edx)
 82e7e2c:	8b 45 08             	mov    0x8(%ebp),%eax
 82e7e2f:	89 04 24             	mov    %eax,(%esp)
 82e7e32:	e8 6b 04 00 00       	call   82e82a2 <_ZN11pvp_assault13CAssaultPlace14_SetReadyStateEv>
 82e7e37:	8b 45 08             	mov    0x8(%ebp),%eax
 82e7e3a:	8b 80 2c 01 00 00    	mov    0x12c(%eax),%eax
 82e7e40:	85 c0                	test   %eax,%eax
 82e7e42:	74 19                	je     82e7e5d <_ZN11pvp_assault13CAssaultPlace8MakeTeamEP5CUserS2_Ri+0x153>
 82e7e44:	8b 45 08             	mov    0x8(%ebp),%eax
 82e7e47:	8b 80 2c 01 00 00    	mov    0x12c(%eax),%eax
 82e7e4d:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 82e7e54:	00 
 82e7e55:	89 04 24             	mov    %eax,(%esp)
 82e7e58:	e8 d7 db fb ff       	call   82a5a34 <_ZN6CParty15SetAssaultStateEc>
 82e7e5d:	8b 45 08             	mov    0x8(%ebp),%eax
 82e7e60:	8b 80 30 01 00 00    	mov    0x130(%eax),%eax
 82e7e66:	85 c0                	test   %eax,%eax
 82e7e68:	74 19                	je     82e7e83 <_ZN11pvp_assault13CAssaultPlace8MakeTeamEP5CUserS2_Ri+0x179>
 82e7e6a:	8b 45 08             	mov    0x8(%ebp),%eax
 82e7e6d:	8b 80 30 01 00 00    	mov    0x130(%eax),%eax
 82e7e73:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 82e7e7a:	00 
 82e7e7b:	89 04 24             	mov    %eax,(%esp)
 82e7e7e:	e8 b1 db fb ff       	call   82a5a34 <_ZN6CParty15SetAssaultStateEc>
 82e7e83:	c7 45 b4 a0 bc c1 08 	movl   $0x8c1bca0,-0x4c(%ebp)
 82e7e8a:	c7 45 b8 a0 bc c1 08 	movl   $0x8c1bca0,-0x48(%ebp)
 82e7e91:	c7 45 bc a0 bc c1 08 	movl   $0x8c1bca0,-0x44(%ebp)
 82e7e98:	c7 45 c0 a0 bc c1 08 	movl   $0x8c1bca0,-0x40(%ebp)
 82e7e9f:	c7 45 c4 a0 bc c1 08 	movl   $0x8c1bca0,-0x3c(%ebp)
 82e7ea6:	c7 45 c8 a0 bc c1 08 	movl   $0x8c1bca0,-0x38(%ebp)
 82e7ead:	c7 45 cc a0 bc c1 08 	movl   $0x8c1bca0,-0x34(%ebp)
 82e7eb4:	c7 45 d0 a0 bc c1 08 	movl   $0x8c1bca0,-0x30(%ebp)
 82e7ebb:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 82e7ec2:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 82e7ec9:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 82e7ed0:	e9 8e 00 00 00       	jmp    82e7f63 <_ZN11pvp_assault13CAssaultPlace8MakeTeamEP5CUserS2_Ri+0x259>
 82e7ed5:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 82e7ed8:	c1 e0 05             	shl    $0x5,%eax
 82e7edb:	03 45 08             	add    0x8(%ebp),%eax
 82e7ede:	89 04 24             	mov    %eax,(%esp)
 82e7ee1:	e8 76 86 00 00       	call   82f055c <_ZN11pvp_assault10CAssaulter5EmptyEv>
 82e7ee6:	84 c0                	test   %al,%al
 82e7ee8:	75 74                	jne    82e7f5e <_ZN11pvp_assault13CAssaultPlace8MakeTeamEP5CUserS2_Ri+0x254>
 82e7eea:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 82e7eed:	c1 e0 05             	shl    $0x5,%eax
 82e7ef0:	03 45 08             	add    0x8(%ebp),%eax
 82e7ef3:	89 04 24             	mov    %eax,(%esp)
 82e7ef6:	e8 75 86 00 00       	call   82f0570 <_ZN11pvp_assault10CAssaulter7GetTeamEv>
 82e7efb:	85 c0                	test   %eax,%eax
 82e7efd:	0f 94 c0             	sete   %al
 82e7f00:	84 c0                	test   %al,%al
 82e7f02:	74 1e                	je     82e7f22 <_ZN11pvp_assault13CAssaultPlace8MakeTeamEP5CUserS2_Ri+0x218>
 82e7f04:	8b 5d d8             	mov    -0x28(%ebp),%ebx
 82e7f07:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 82e7f0a:	c1 e0 05             	shl    $0x5,%eax
 82e7f0d:	03 45 08             	add    0x8(%ebp),%eax
 82e7f10:	89 04 24             	mov    %eax,(%esp)
 82e7f13:	e8 24 e7 ff ff       	call   82e663c <_ZNK11pvp_assault10CAssaulter13GetCharacNameEv>
 82e7f18:	89 44 9d b4          	mov    %eax,-0x4c(%ebp,%ebx,4)
 82e7f1c:	83 45 d8 01          	addl   $0x1,-0x28(%ebp)
 82e7f20:	eb 3d                	jmp    82e7f5f <_ZN11pvp_assault13CAssaultPlace8MakeTeamEP5CUserS2_Ri+0x255>
 82e7f22:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 82e7f25:	c1 e0 05             	shl    $0x5,%eax
 82e7f28:	03 45 08             	add    0x8(%ebp),%eax
 82e7f2b:	89 04 24             	mov    %eax,(%esp)
 82e7f2e:	e8 3d 86 00 00       	call   82f0570 <_ZN11pvp_assault10CAssaulter7GetTeamEv>
 82e7f33:	83 f8 01             	cmp    $0x1,%eax
 82e7f36:	0f 94 c0             	sete   %al
 82e7f39:	84 c0                	test   %al,%al
 82e7f3b:	74 22                	je     82e7f5f <_ZN11pvp_assault13CAssaultPlace8MakeTeamEP5CUserS2_Ri+0x255>
 82e7f3d:	8b 45 dc             	mov    -0x24(%ebp),%eax
 82e7f40:	8d 58 04             	lea    0x4(%eax),%ebx
 82e7f43:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 82e7f46:	c1 e0 05             	shl    $0x5,%eax
 82e7f49:	03 45 08             	add    0x8(%ebp),%eax
 82e7f4c:	89 04 24             	mov    %eax,(%esp)
 82e7f4f:	e8 e8 e6 ff ff       	call   82e663c <_ZNK11pvp_assault10CAssaulter13GetCharacNameEv>
 82e7f54:	89 44 9d b4          	mov    %eax,-0x4c(%ebp,%ebx,4)
 82e7f58:	83 45 dc 01          	addl   $0x1,-0x24(%ebp)
 82e7f5c:	eb 01                	jmp    82e7f5f <_ZN11pvp_assault13CAssaultPlace8MakeTeamEP5CUserS2_Ri+0x255>
 82e7f5e:	90                   	nop
 82e7f5f:	83 45 d4 01          	addl   $0x1,-0x2c(%ebp)
 82e7f63:	83 7d d4 07          	cmpl   $0x7,-0x2c(%ebp)
 82e7f67:	0f 9e c0             	setle  %al
 82e7f6a:	84 c0                	test   %al,%al
 82e7f6c:	0f 85 63 ff ff ff    	jne    82e7ed5 <_ZN11pvp_assault13CAssaultPlace8MakeTeamEP5CUserS2_Ri+0x1cb>
 82e7f72:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 82e7f79:	e9 b1 00 00 00       	jmp    82e802f <_ZN11pvp_assault13CAssaultPlace8MakeTeamEP5CUserS2_Ri+0x325>
 82e7f7e:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 82e7f81:	c1 e0 05             	shl    $0x5,%eax
 82e7f84:	03 45 08             	add    0x8(%ebp),%eax
 82e7f87:	89 04 24             	mov    %eax,(%esp)
 82e7f8a:	e8 b3 85 00 00       	call   82f0542 <_ZN11pvp_assault10CAssaulter7GetUserEv>
 82e7f8f:	89 45 e0             	mov    %eax,-0x20(%ebp)
 82e7f92:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 82e7f96:	0f 84 8e 00 00 00    	je     82e802a <_ZN11pvp_assault13CAssaultPlace8MakeTeamEP5CUserS2_Ri+0x320>
 82e7f9c:	8b 45 e0             	mov    -0x20(%ebp),%eax
 82e7f9f:	89 04 24             	mov    %eax,(%esp)
 82e7fa2:	e8 bd d5 35 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 82e7fa7:	3c 07                	cmp    $0x7,%al
 82e7fa9:	0f 94 c0             	sete   %al
 82e7fac:	84 c0                	test   %al,%al
 82e7fae:	74 09                	je     82e7fb9 <_ZN11pvp_assault13CAssaultPlace8MakeTeamEP5CUserS2_Ri+0x2af>
 82e7fb0:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 82e7fb7:	eb 07                	jmp    82e7fc0 <_ZN11pvp_assault13CAssaultPlace8MakeTeamEP5CUserS2_Ri+0x2b6>
 82e7fb9:	c7 45 e4 04 00 00 00 	movl   $0x4,-0x1c(%ebp)
 82e7fc0:	8b 4d d0             	mov    -0x30(%ebp),%ecx
 82e7fc3:	8b 75 cc             	mov    -0x34(%ebp),%esi
 82e7fc6:	8b 45 c8             	mov    -0x38(%ebp),%eax
 82e7fc9:	89 45 98             	mov    %eax,-0x68(%ebp)
 82e7fcc:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 82e7fcf:	89 45 9c             	mov    %eax,-0x64(%ebp)
 82e7fd2:	8b 45 c0             	mov    -0x40(%ebp),%eax
 82e7fd5:	89 45 a0             	mov    %eax,-0x60(%ebp)
 82e7fd8:	8b 45 bc             	mov    -0x44(%ebp),%eax
 82e7fdb:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 82e7fde:	8b 7d b8             	mov    -0x48(%ebp),%edi
 82e7fe1:	8b 5d b4             	mov    -0x4c(%ebp),%ebx
 82e7fe4:	8b 45 e0             	mov    -0x20(%ebp),%eax
 82e7fe7:	8d 90 00 97 07 00    	lea    0x79700(%eax),%edx
 82e7fed:	89 4c 24 24          	mov    %ecx,0x24(%esp)
 82e7ff1:	89 74 24 20          	mov    %esi,0x20(%esp)
 82e7ff5:	8b 45 98             	mov    -0x68(%ebp),%eax
 82e7ff8:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 82e7ffc:	8b 45 9c             	mov    -0x64(%ebp),%eax
 82e7fff:	89 44 24 18          	mov    %eax,0x18(%esp)
 82e8003:	8b 45 a0             	mov    -0x60(%ebp),%eax
 82e8006:	89 44 24 14          	mov    %eax,0x14(%esp)
 82e800a:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 82e800d:	89 44 24 10          	mov    %eax,0x10(%esp)
 82e8011:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 82e8015:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 82e8019:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 82e801c:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e8020:	89 14 24             	mov    %edx,(%esp)
 82e8023:	e8 8e e3 39 00       	call   86863b6 <_ZN15cUserHistoryLog8StartPvPE23ENUM_PVP_HISTORY_REASONPKcS2_S2_S2_S2_S2_S2_S2_>
 82e8028:	eb 01                	jmp    82e802b <_ZN11pvp_assault13CAssaultPlace8MakeTeamEP5CUserS2_Ri+0x321>
 82e802a:	90                   	nop
 82e802b:	83 45 d4 01          	addl   $0x1,-0x2c(%ebp)
 82e802f:	83 7d d4 07          	cmpl   $0x7,-0x2c(%ebp)
 82e8033:	0f 9e c0             	setle  %al
 82e8036:	84 c0                	test   %al,%al
 82e8038:	0f 85 40 ff ff ff    	jne    82e7f7e <_ZN11pvp_assault13CAssaultPlace8MakeTeamEP5CUserS2_Ri+0x274>
 82e803e:	81 c4 8c 00 00 00    	add    $0x8c,%esp
 82e8044:	5b                   	pop    %ebx
 82e8045:	5e                   	pop    %esi
 82e8046:	5f                   	pop    %edi
 82e8047:	5d                   	pop    %ebp
 82e8048:	c3                   	ret
 82e8049:	90                   	nop

```

```c
// pvp_assault::CAssaultPlace::MakeTeam @ 0x82e7d0a

/* pvp_assault::CAssaultPlace::MakeTeam(CUser*, CUser*, int&) */

void pvp_assault::CAssaultPlace::MakeTeam(CUser *param_1,CUser *param_2,int *param_3)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined *puVar7;
  int iVar8;
  undefined *local_50 [4];
  undefined *local_40;
  undefined *local_3c;
  undefined *local_38;
  undefined *local_34;
  int local_30;
  int local_2c;
  int local_28;
  CUserCharacInfo *local_24;
  undefined4 local_20;
  
  cVar1 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_2);
  *(int *)(param_1 + 0x118) = (int)cVar1;
  uVar4 = CUser::get_area(param_2,false);
  *(undefined4 *)(param_1 + 0x11c) = uVar4;
  if ((*(int *)(param_1 + 0x118) == 0) && (*(int *)(param_1 + 0x11c) == 0)) {
    puVar5 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar5 = 0x15;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar5,&ENUM_ERROR::typeinfo,0);
  }
  *(CUser **)(param_1 + 0x134) = param_2;
  *(int **)(param_1 + 0x138) = param_3;
  uVar2 = CUser::get_posX(param_2);
  uVar3 = CUser::get_posX((CUser *)param_3);
  if (uVar2 < uVar3) {
    _SeparateTeam((CAssaultPlace *)param_1,param_2,(CUser *)param_3);
    *(undefined4 *)(param_1 + 0x124) = 0;
  }
  else {
    _SeparateTeam((CAssaultPlace *)param_1,(CUser *)param_3,param_2);
    *(undefined4 *)(param_1 + 0x124) = 1;
  }
  uVar4 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  *(undefined4 *)(param_1 + 0x108) = uVar4;
  _SetReadyState((CAssaultPlace *)param_1);
  if (*(int *)(param_1 + 300) != 0) {
    CParty::SetAssaultState(*(CParty **)(param_1 + 300),'\x02');
  }
  if (*(int *)(param_1 + 0x130) != 0) {
    CParty::SetAssaultState(*(CParty **)(param_1 + 0x130),'\x02');
  }
  local_50[0] = &DAT_08c1bca0;
  local_50[1] = &DAT_08c1bca0;
  local_50[2] = &DAT_08c1bca0;
  local_50[3] = &DAT_08c1bca0;
  local_40 = &DAT_08c1bca0;
  local_3c = &DAT_08c1bca0;
  local_38 = &DAT_08c1bca0;
  local_34 = &DAT_08c1bca0;
  local_2c = 0;
  local_28 = 0;
  for (local_30 = 0; local_30 < 8; local_30 = local_30 + 1) {
    cVar1 = CAssaulter::Empty((CAssaulter *)(param_1 + local_30 * 0x20));
    if (cVar1 == '\0') {
      iVar6 = CAssaulter::GetTeam((CAssaulter *)(param_1 + local_30 * 0x20));
      iVar8 = local_2c;
      if (iVar6 == 0) {
        puVar7 = (undefined *)CAssaulter::GetCharacName((CAssaulter *)(param_1 + local_30 * 0x20));
        local_50[iVar8] = puVar7;
        local_2c = local_2c + 1;
      }
      else {
        iVar8 = CAssaulter::GetTeam((CAssaulter *)(param_1 + local_30 * 0x20));
        if (iVar8 == 1) {
          iVar8 = local_28 + 4;
          puVar7 = (undefined *)CAssaulter::GetCharacName((CAssaulter *)(param_1 + local_30 * 0x20))
          ;
          local_50[iVar8] = puVar7;
          local_28 = local_28 + 1;
        }
      }
    }
  }
  for (local_30 = 0; local_30 < 8; local_30 = local_30 + 1) {
    local_24 = (CUserCharacInfo *)CAssaulter::GetUser((CAssaulter *)(param_1 + local_30 * 0x20));
    if (local_24 != (CUserCharacInfo *)0x0) {
      cVar1 = CUserCharacInfo::getCurCharacVill(local_24);
      if (cVar1 == '\a') {
        local_20 = 0;
      }
      else {
        local_20 = 4;
      }
      cUserHistoryLog::StartPvP
                ((cUserHistoryLog *)(local_24 + 0x79700),local_20,local_50[0],local_50[1],
                 local_50[2],local_50[3],local_40,local_3c,local_38,local_34);
    }
  }
  return;
}

```

---

## MakeViewAssaultIconOnePlayer

```asm
// === 082e89c0 pvp_assault::CAssaultPlace::MakeViewAssaultIconOnePlayer  [0x082e89c0-0x82e8afb] ===
 82e89c0:	55                   	push   %ebp
 82e89c1:	89 e5                	mov    %esp,%ebp
 82e89c3:	83 ec 38             	sub    $0x38,%esp
 82e89c6:	8b 45 10             	mov    0x10(%ebp),%eax
 82e89c9:	88 45 e4             	mov    %al,-0x1c(%ebp)
 82e89cc:	8b 45 08             	mov    0x8(%ebp),%eax
 82e89cf:	8b 80 04 01 00 00    	mov    0x104(%eax),%eax
 82e89d5:	89 c2                	mov    %eax,%edx
 82e89d7:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e89da:	89 54 24 04          	mov    %edx,0x4(%esp)
 82e89de:	89 04 24             	mov    %eax,(%esp)
 82e89e1:	e8 56 2f de ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 82e89e6:	0f b6 55 e4          	movzbl -0x1c(%ebp),%edx
 82e89ea:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e89ed:	89 54 24 04          	mov    %edx,0x4(%esp)
 82e89f1:	89 04 24             	mov    %eax,(%esp)
 82e89f4:	e8 27 2f de ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 82e89f9:	80 7d e4 00          	cmpb   $0x0,-0x1c(%ebp)
 82e89fd:	0f 84 f6 00 00 00    	je     82e8af9 <_ZN11pvp_assault13CAssaultPlace28MakeViewAssaultIconOnePlayerEP11PacketGuardb+0x139>
 82e8a03:	8b 45 08             	mov    0x8(%ebp),%eax
 82e8a06:	8b 90 10 01 00 00    	mov    0x110(%eax),%edx
 82e8a0c:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e8a0f:	89 54 24 04          	mov    %edx,0x4(%esp)
 82e8a13:	89 04 24             	mov    %eax,(%esp)
 82e8a16:	e8 89 14 df ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 82e8a1b:	8b 45 08             	mov    0x8(%ebp),%eax
 82e8a1e:	8b 90 14 01 00 00    	mov    0x114(%eax),%edx
 82e8a24:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e8a27:	89 54 24 04          	mov    %edx,0x4(%esp)
 82e8a2b:	89 04 24             	mov    %eax,(%esp)
 82e8a2e:	e8 71 14 df ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 82e8a33:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 82e8a3a:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 82e8a41:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e8a44:	89 04 24             	mov    %eax,(%esp)
 82e8a47:	e8 00 81 e2 ff       	call   8110b4c <_ZN18InterfacePacketBuf9get_indexEv>
 82e8a4c:	89 45 ec             	mov    %eax,-0x14(%ebp)
 82e8a4f:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e8a52:	8b 55 f0             	mov    -0x10(%ebp),%edx
 82e8a55:	89 54 24 04          	mov    %edx,0x4(%esp)
 82e8a59:	89 04 24             	mov    %eax,(%esp)
 82e8a5c:	e8 43 14 df ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 82e8a61:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 82e8a68:	eb 6b                	jmp    82e8ad5 <_ZN11pvp_assault13CAssaultPlace28MakeViewAssaultIconOnePlayerEP11PacketGuardb+0x115>
 82e8a6a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82e8a6d:	c1 e0 05             	shl    $0x5,%eax
 82e8a70:	03 45 08             	add    0x8(%ebp),%eax
 82e8a73:	89 04 24             	mov    %eax,(%esp)
 82e8a76:	e8 e1 7a 00 00       	call   82f055c <_ZN11pvp_assault10CAssaulter5EmptyEv>
 82e8a7b:	84 c0                	test   %al,%al
 82e8a7d:	75 51                	jne    82e8ad0 <_ZN11pvp_assault13CAssaultPlace28MakeViewAssaultIconOnePlayerEP11PacketGuardb+0x110>
 82e8a7f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82e8a82:	c1 e0 05             	shl    $0x5,%eax
 82e8a85:	03 45 08             	add    0x8(%ebp),%eax
 82e8a88:	89 04 24             	mov    %eax,(%esp)
 82e8a8b:	e8 d2 db ff ff       	call   82e6662 <_ZN11pvp_assault10CAssaulter15GetUserUniqueIdEv>
 82e8a90:	0f b7 d0             	movzwl %ax,%edx
 82e8a93:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e8a96:	89 54 24 04          	mov    %edx,0x4(%esp)
 82e8a9a:	89 04 24             	mov    %eax,(%esp)
 82e8a9d:	e8 02 14 df ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 82e8aa2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82e8aa5:	c1 e0 05             	shl    $0x5,%eax
 82e8aa8:	03 45 08             	add    0x8(%ebp),%eax
 82e8aab:	89 04 24             	mov    %eax,(%esp)
 82e8aae:	e8 bd 7a 00 00       	call   82f0570 <_ZN11pvp_assault10CAssaulter7GetTeamEv>
 82e8ab3:	89 04 24             	mov    %eax,(%esp)
 82e8ab6:	e8 91 cb ff ff       	call   82e564c <_ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM>
 82e8abb:	8b 55 0c             	mov    0xc(%ebp),%edx
 82e8abe:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e8ac2:	89 14 24             	mov    %edx,(%esp)
 82e8ac5:	e8 56 2e de ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 82e8aca:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 82e8ace:	eb 01                	jmp    82e8ad1 <_ZN11pvp_assault13CAssaultPlace28MakeViewAssaultIconOnePlayerEP11PacketGuardb+0x111>
 82e8ad0:	90                   	nop
 82e8ad1:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 82e8ad5:	83 7d f4 07          	cmpl   $0x7,-0xc(%ebp)
 82e8ad9:	0f 9e c0             	setle  %al
 82e8adc:	84 c0                	test   %al,%al
 82e8ade:	75 8a                	jne    82e8a6a <_ZN11pvp_assault13CAssaultPlace28MakeViewAssaultIconOnePlayerEP11PacketGuardb+0xaa>
 82e8ae0:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e8ae3:	8b 55 f0             	mov    -0x10(%ebp),%edx
 82e8ae6:	89 54 24 08          	mov    %edx,0x8(%esp)
 82e8aea:	8d 55 ec             	lea    -0x14(%ebp),%edx
 82e8aed:	89 54 24 04          	mov    %edx,0x4(%esp)
 82e8af1:	89 04 24             	mov    %eax,(%esp)
 82e8af4:	e8 0f de e2 ff       	call   8116908 <_ZN18InterfacePacketBuf9put_shortERii>
 82e8af9:	c9                   	leave
 82e8afa:	c3                   	ret
 82e8afb:	90                   	nop

```

```c
// pvp_assault::CAssaultPlace::MakeViewAssaultIconOnePlayer @ 0x82e89c0

/* pvp_assault::CAssaultPlace::MakeViewAssaultIconOnePlayer(PacketGuard*, bool) */

void __thiscall
pvp_assault::CAssaultPlace::MakeViewAssaultIconOnePlayer
          (CAssaultPlace *this,PacketGuard *param_1,bool param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int local_18;
  int local_14;
  int local_10;
  
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,*(int *)(this + 0x104));
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,(uint)param_2);
  if (param_2) {
    InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,*(int *)(this + 0x110));
    InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,*(int *)(this + 0x114));
    local_18 = 0;
    local_14 = 0;
    local_18 = InterfacePacketBuf::get_index((InterfacePacketBuf *)param_1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,local_14);
    for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
      cVar1 = CAssaulter::Empty((CAssaulter *)(this + local_10 * 0x20));
      if (cVar1 == '\0') {
        uVar2 = CAssaulter::GetUserUniqueId((CAssaulter *)(this + local_10 * 0x20));
        InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,uVar2 & 0xffff);
        uVar3 = CAssaulter::GetTeam((CAssaulter *)(this + local_10 * 0x20));
        iVar4 = GetDirectionByTeam(uVar3);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,iVar4);
        local_14 = local_14 + 1;
      }
    }
    InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,&local_18,local_14);
  }
  return;
}

```

---

## Reset

```asm
// === 082e6ab8 pvp_assault::CAssaultPlace::Reset  [0x082e6ab8-0x82e6bf5] ===
 82e6ab8:	55                   	push   %ebp
 82e6ab9:	89 e5                	mov    %esp,%ebp
 82e6abb:	83 ec 28             	sub    $0x28,%esp
 82e6abe:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 82e6ac5:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 82e6acc:	eb 50                	jmp    82e6b1e <_ZN11pvp_assault13CAssaultPlace5ResetEv+0x66>
 82e6ace:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82e6ad1:	c1 e0 05             	shl    $0x5,%eax
 82e6ad4:	03 45 08             	add    0x8(%ebp),%eax
 82e6ad7:	89 04 24             	mov    %eax,(%esp)
 82e6ada:	e8 63 9a 00 00       	call   82f0542 <_ZN11pvp_assault10CAssaulter7GetUserEv>
 82e6adf:	85 c0                	test   %eax,%eax
 82e6ae1:	0f 95 c0             	setne  %al
 82e6ae4:	84 c0                	test   %al,%al
 82e6ae6:	74 21                	je     82e6b09 <_ZN11pvp_assault13CAssaultPlace5ResetEv+0x51>
 82e6ae8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82e6aeb:	c1 e0 05             	shl    $0x5,%eax
 82e6aee:	03 45 08             	add    0x8(%ebp),%eax
 82e6af1:	89 04 24             	mov    %eax,(%esp)
 82e6af4:	e8 49 9a 00 00       	call   82f0542 <_ZN11pvp_assault10CAssaulter7GetUserEv>
 82e6af9:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82e6b00:	00 
 82e6b01:	89 04 24             	mov    %eax,(%esp)
 82e6b04:	e8 71 9f 00 00       	call   82f0a7a <_ZN15CUserCharacInfo15SetAssaultPlaceEi>
 82e6b09:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82e6b0c:	c1 e0 05             	shl    $0x5,%eax
 82e6b0f:	03 45 08             	add    0x8(%ebp),%eax
 82e6b12:	89 04 24             	mov    %eax,(%esp)
 82e6b15:	e8 a0 9a 00 00       	call   82f05ba <_ZN11pvp_assault10CAssaulter5ResetEv>
 82e6b1a:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 82e6b1e:	83 7d f4 07          	cmpl   $0x7,-0xc(%ebp)
 82e6b22:	0f 9e c0             	setle  %al
 82e6b25:	84 c0                	test   %al,%al
 82e6b27:	75 a5                	jne    82e6ace <_ZN11pvp_assault13CAssaultPlace5ResetEv+0x16>
 82e6b29:	8b 45 08             	mov    0x8(%ebp),%eax
 82e6b2c:	c7 80 00 01 00 00 00 	movl   $0x0,0x100(%eax)
 82e6b33:	00 00 00 
 82e6b36:	8b 45 08             	mov    0x8(%ebp),%eax
 82e6b39:	c7 80 04 01 00 00 00 	movl   $0x0,0x104(%eax)
 82e6b40:	00 00 00 
 82e6b43:	8b 45 08             	mov    0x8(%ebp),%eax
 82e6b46:	c7 80 08 01 00 00 00 	movl   $0x0,0x108(%eax)
 82e6b4d:	00 00 00 
 82e6b50:	8b 45 08             	mov    0x8(%ebp),%eax
 82e6b53:	c7 80 0c 01 00 00 00 	movl   $0x0,0x10c(%eax)
 82e6b5a:	00 00 00 
 82e6b5d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82e6b64:	00 
 82e6b65:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82e6b6c:	00 
 82e6b6d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82e6b70:	89 04 24             	mov    %eax,(%esp)
 82e6b73:	e8 f8 98 00 00       	call   82f0470 <_ZN11pvp_assault7Point2dC1Eii>
 82e6b78:	8b 4d 08             	mov    0x8(%ebp),%ecx
 82e6b7b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 82e6b7e:	8b 55 f0             	mov    -0x10(%ebp),%edx
 82e6b81:	89 81 10 01 00 00    	mov    %eax,0x110(%ecx)
 82e6b87:	89 91 14 01 00 00    	mov    %edx,0x114(%ecx)
 82e6b8d:	8b 45 08             	mov    0x8(%ebp),%eax
 82e6b90:	c7 80 18 01 00 00 00 	movl   $0x0,0x118(%eax)
 82e6b97:	00 00 00 
 82e6b9a:	8b 45 08             	mov    0x8(%ebp),%eax
 82e6b9d:	c7 80 1c 01 00 00 00 	movl   $0x0,0x11c(%eax)
 82e6ba4:	00 00 00 
 82e6ba7:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 82e6bae:	eb 12                	jmp    82e6bc2 <_ZN11pvp_assault13CAssaultPlace5ResetEv+0x10a>
 82e6bb0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82e6bb3:	8b 55 08             	mov    0x8(%ebp),%edx
 82e6bb6:	c6 84 02 20 01 00 00 	movb   $0x0,0x120(%edx,%eax,1)
 82e6bbd:	00 
 82e6bbe:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 82e6bc2:	83 7d f4 01          	cmpl   $0x1,-0xc(%ebp)
 82e6bc6:	0f 9e c0             	setle  %al
 82e6bc9:	84 c0                	test   %al,%al
 82e6bcb:	75 e3                	jne    82e6bb0 <_ZN11pvp_assault13CAssaultPlace5ResetEv+0xf8>
 82e6bcd:	8b 45 08             	mov    0x8(%ebp),%eax
 82e6bd0:	c7 80 24 01 00 00 00 	movl   $0x0,0x124(%eax)
 82e6bd7:	00 00 00 
 82e6bda:	8b 45 08             	mov    0x8(%ebp),%eax
 82e6bdd:	c7 80 34 01 00 00 00 	movl   $0x0,0x134(%eax)
 82e6be4:	00 00 00 
 82e6be7:	8b 45 08             	mov    0x8(%ebp),%eax
 82e6bea:	c7 80 3c 01 00 00 00 	movl   $0x0,0x13c(%eax)
 82e6bf1:	00 00 00 
 82e6bf4:	c9                   	leave
 82e6bf5:	c3                   	ret

```

```c
// pvp_assault::CAssaultPlace::Reset @ 0x82e6ab8

/* pvp_assault::CAssaultPlace::Reset() */

void __thiscall pvp_assault::CAssaultPlace::Reset(CAssaultPlace *this)

{
  int iVar1;
  CUserCharacInfo *this_00;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  
  for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
    iVar1 = CAssaulter::GetUser((CAssaulter *)(this + local_10 * 0x20));
    if (iVar1 != 0) {
      this_00 = (CUserCharacInfo *)CAssaulter::GetUser((CAssaulter *)(this + local_10 * 0x20));
      CUserCharacInfo::SetAssaultPlace(this_00,0);
    }
    CAssaulter::Reset((CAssaulter *)(this + local_10 * 0x20));
  }
  *(undefined4 *)(this + 0x100) = 0;
  *(undefined4 *)(this + 0x104) = 0;
  *(undefined4 *)(this + 0x108) = 0;
  *(undefined4 *)(this + 0x10c) = 0;
  Point2d::Point2d((Point2d *)&local_18,0,0);
  *(undefined4 *)(this + 0x110) = local_18;
  *(undefined4 *)(this + 0x114) = local_14;
  *(undefined4 *)(this + 0x118) = 0;
  *(undefined4 *)(this + 0x11c) = 0;
  for (local_10 = 0; local_10 < 2; local_10 = local_10 + 1) {
    this[local_10 + 0x120] = (CAssaultPlace)0x0;
  }
  *(undefined4 *)(this + 0x124) = 0;
  *(undefined4 *)(this + 0x134) = 0;
  *(undefined4 *)(this + 0x13c) = 0;
  return;
}

```

---

## RevivalUser

```asm
// === 082ed43e pvp_assault::CAssaultPlace::RevivalUser  [0x082ed43e-0x82ed5f3] ===
 82ed43e:	55                   	push   %ebp
 82ed43f:	89 e5                	mov    %esp,%ebp
 82ed441:	56                   	push   %esi
 82ed442:	53                   	push   %ebx
 82ed443:	83 ec 30             	sub    $0x30,%esp
 82ed446:	8b 45 08             	mov    0x8(%ebp),%eax
 82ed449:	89 04 24             	mov    %eax,(%esp)
 82ed44c:	e8 89 ce de ff       	call   80da2da <_ZN15CUserCharacInfo16IsCurCharacGhostEv>
 82ed451:	83 f0 01             	xor    $0x1,%eax
 82ed454:	84 c0                	test   %al,%al
 82ed456:	74 2c                	je     82ed484 <_ZN11pvp_assault13CAssaultPlace11RevivalUserEP5CUserRi+0x46>
 82ed458:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 82ed45f:	e8 9c 83 43 00       	call   8725800 <__cxa_allocate_exception>
 82ed464:	89 c2                	mov    %eax,%edx
 82ed466:	c7 02 12 00 00 00    	movl   $0x12,(%edx)
 82ed46c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82ed473:	00 
 82ed474:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 82ed47b:	08 
 82ed47c:	89 04 24             	mov    %eax,(%esp)
 82ed47f:	e8 cc 77 43 00       	call   8724c50 <__cxa_throw>
 82ed484:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 82ed48b:	e8 0e e8 dd ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 82ed490:	89 45 f0             	mov    %eax,-0x10(%ebp)
 82ed493:	a1 50 be 40 09       	mov    0x940be50,%eax
 82ed498:	89 04 24             	mov    %eax,(%esp)
 82ed49b:	e8 70 24 19 00       	call   847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>
 82ed4a0:	84 c0                	test   %al,%al
 82ed4a2:	75 0f                	jne    82ed4b3 <_ZN11pvp_assault13CAssaultPlace11RevivalUserEP5CUserRi+0x75>
 82ed4a4:	8b 45 08             	mov    0x8(%ebp),%eax
 82ed4a7:	89 04 24             	mov    %eax,(%esp)
 82ed4aa:	e8 b5 80 35 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 82ed4af:	3c 07                	cmp    $0x7,%al
 82ed4b1:	75 07                	jne    82ed4ba <_ZN11pvp_assault13CAssaultPlace11RevivalUserEP5CUserRi+0x7c>
 82ed4b3:	b8 01 00 00 00       	mov    $0x1,%eax
 82ed4b8:	eb 05                	jmp    82ed4bf <_ZN11pvp_assault13CAssaultPlace11RevivalUserEP5CUserRi+0x81>
 82ed4ba:	b8 00 00 00 00       	mov    $0x0,%eax
 82ed4bf:	84 c0                	test   %al,%al
 82ed4c1:	74 59                	je     82ed51c <_ZN11pvp_assault13CAssaultPlace11RevivalUserEP5CUserRi+0xde>
 82ed4c3:	8b 55 f0             	mov    -0x10(%ebp),%edx
 82ed4c6:	a1 50 be 40 09       	mov    0x940be50,%eax
 82ed4cb:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 82ed4ce:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 82ed4d2:	89 54 24 08          	mov    %edx,0x8(%esp)
 82ed4d6:	8b 55 08             	mov    0x8(%ebp),%edx
 82ed4d9:	89 54 24 04          	mov    %edx,0x4(%esp)
 82ed4dd:	89 04 24             	mov    %eax,(%esp)
 82ed4e0:	e8 6d 24 19 00       	call   847f952 <_ZN13CPowerManager15IsAbleToRevivalEP5CUserjRi>
 82ed4e5:	83 f0 01             	xor    $0x1,%eax
 82ed4e8:	84 c0                	test   %al,%al
 82ed4ea:	0f 84 87 00 00 00    	je     82ed577 <_ZN11pvp_assault13CAssaultPlace11RevivalUserEP5CUserRi+0x139>
 82ed4f0:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 82ed4f7:	e8 04 83 43 00       	call   8725800 <__cxa_allocate_exception>
 82ed4fc:	89 c2                	mov    %eax,%edx
 82ed4fe:	c7 02 16 00 00 00    	movl   $0x16,(%edx)
 82ed504:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82ed50b:	00 
 82ed50c:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 82ed513:	08 
 82ed514:	89 04 24             	mov    %eax,(%esp)
 82ed517:	e8 34 77 43 00       	call   8724c50 <__cxa_throw>
 82ed51c:	8b 45 08             	mov    0x8(%ebp),%eax
 82ed51f:	89 04 24             	mov    %eax,(%esp)
 82ed522:	e8 61 36 00 00       	call   82f0b88 <_ZN15CUserCharacInfo24GetCurCharacChaosDieTimeEv>
 82ed527:	8b 55 f0             	mov    -0x10(%ebp),%edx
 82ed52a:	89 d1                	mov    %edx,%ecx
 82ed52c:	29 c1                	sub    %eax,%ecx
 82ed52e:	89 c8                	mov    %ecx,%eax
 82ed530:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82ed533:	81 7d f4 57 02 00 00 	cmpl   $0x257,-0xc(%ebp)
 82ed53a:	7f 3b                	jg     82ed577 <_ZN11pvp_assault13CAssaultPlace11RevivalUserEP5CUserRi+0x139>
 82ed53c:	b8 58 02 00 00       	mov    $0x258,%eax
 82ed541:	89 c2                	mov    %eax,%edx
 82ed543:	2b 55 f4             	sub    -0xc(%ebp),%edx
 82ed546:	8b 45 0c             	mov    0xc(%ebp),%eax
 82ed549:	89 10                	mov    %edx,(%eax)
 82ed54b:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 82ed552:	e8 a9 82 43 00       	call   8725800 <__cxa_allocate_exception>
 82ed557:	89 c2                	mov    %eax,%edx
 82ed559:	c7 02 16 00 00 00    	movl   $0x16,(%edx)
 82ed55f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82ed566:	00 
 82ed567:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 82ed56e:	08 
 82ed56f:	89 04 24             	mov    %eax,(%esp)
 82ed572:	e8 d9 76 43 00       	call   8724c50 <__cxa_throw>
 82ed577:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82ed57a:	89 04 24             	mov    %eax,(%esp)
 82ed57d:	e8 ca 07 2a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 82ed582:	8b 45 08             	mov    0x8(%ebp),%eax
 82ed585:	89 04 24             	mov    %eax,(%esp)
 82ed588:	e8 ef cd de ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 82ed58d:	0f b7 c0             	movzwl %ax,%eax
 82ed590:	89 44 24 04          	mov    %eax,0x4(%esp)
 82ed594:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82ed597:	89 04 24             	mov    %eax,(%esp)
 82ed59a:	e8 d9 b3 ff ff       	call   82e8978 <_ZN11pvp_assault13CAssaultPlace25_MakeRevivalAssaultPlayerEP11PacketGuardi>
 82ed59f:	e8 03 ce de ff       	call   80da3a7 <_Z11G_GameWorldv>
 82ed5a4:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 82ed5a7:	89 54 24 04          	mov    %edx,0x4(%esp)
 82ed5ab:	89 04 24             	mov    %eax,(%esp)
 82ed5ae:	e8 61 b6 3d 00       	call   86c8c14 <_ZN9GameWorld8send_allER11PacketGuard>
 82ed5b3:	8b 45 08             	mov    0x8(%ebp),%eax
 82ed5b6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82ed5bd:	00 
 82ed5be:	89 04 24             	mov    %eax,(%esp)
 82ed5c1:	e8 6a 36 00 00       	call   82f0c30 <_ZN15CUserCharacInfo17SetCurCharacGhostEb>
 82ed5c6:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82ed5c9:	89 04 24             	mov    %eax,(%esp)
 82ed5cc:	e8 af 08 2a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82ed5d1:	83 c4 30             	add    $0x30,%esp
 82ed5d4:	5b                   	pop    %ebx
 82ed5d5:	5e                   	pop    %esi
 82ed5d6:	5d                   	pop    %ebp
 82ed5d7:	c3                   	ret
 82ed5d8:	89 d3                	mov    %edx,%ebx
 82ed5da:	89 c6                	mov    %eax,%esi
 82ed5dc:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82ed5df:	89 04 24             	mov    %eax,(%esp)
 82ed5e2:	e8 99 08 2a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82ed5e7:	89 f0                	mov    %esi,%eax
 82ed5e9:	89 da                	mov    %ebx,%edx
 82ed5eb:	89 04 24             	mov    %eax,(%esp)
 82ed5ee:	e8 5d 61 7f 00       	call   8ae3750 <_Unwind_Resume>
 82ed5f3:	90                   	nop

```

```c
// pvp_assault::CAssaultPlace::RevivalUser @ 0x82ed43e

/* pvp_assault::CAssaultPlace::RevivalUser(CUser*, int&) */

void pvp_assault::CAssaultPlace::RevivalUser(CUser *param_1,int *param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 *puVar3;
  uint uVar4;
  GameWorld *this;
  PacketGuard local_20 [12];
  uint local_14;
  int local_10;
  
  cVar2 = CUserCharacInfo::IsCurCharacGhost((CUserCharacInfo *)param_1);
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x12;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&ENUM_ERROR::typeinfo,0);
  }
  local_14 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  cVar2 = CPowerManager::IsPowerWarEventOn();
  if (cVar2 == '\0') {
    cVar2 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
    if (cVar2 != '\a') {
      bVar1 = false;
      goto LAB_082ed4bf;
    }
  }
  bVar1 = true;
LAB_082ed4bf:
  if (bVar1) {
    cVar2 = CPowerManager::IsAbleToRevival(GlobalData::s_power_manager,param_1,local_14,param_2);
    if (cVar2 != '\x01') {
      puVar3 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar3 = 0x16;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar3,&ENUM_ERROR::typeinfo,0);
    }
  }
  else {
    local_10 = CUserCharacInfo::GetCurCharacChaosDieTime((CUserCharacInfo *)param_1);
    local_10 = local_14 - local_10;
    if (local_10 < 600) {
      *param_2 = 600 - local_10;
      puVar3 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar3 = 0x16;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar3,&ENUM_ERROR::typeinfo,0);
    }
  }
  PacketGuard::PacketGuard(local_20);
  uVar4 = CUser::get_unique_id(param_1);
                    /* try { // try from 082ed59a to 082ed5b2 has its CatchHandler @ 082ed5d8 */
  _MakeRevivalAssaultPlayer(local_20,uVar4 & 0xffff);
  this = (GameWorld *)G_GameWorld();
  GameWorld::send_all(this,local_20);
  CUserCharacInfo::SetCurCharacGhost((CUserCharacInfo *)param_1,false);
  PacketGuard::~PacketGuard(local_20);
  return;
}

```

---

## SendPacket

```asm
// === 082e6bf6 pvp_assault::CAssaultPlace::SendPacket  [0x082e6bf6-0x82e6c55] ===
 82e6bf6:	55                   	push   %ebp
 82e6bf7:	89 e5                	mov    %esp,%ebp
 82e6bf9:	83 ec 28             	sub    $0x28,%esp
 82e6bfc:	c6 45 ef 01          	movb   $0x1,-0x11(%ebp)
 82e6c00:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 82e6c07:	eb 3b                	jmp    82e6c44 <_ZN11pvp_assault13CAssaultPlace10SendPacketER11PacketGuard+0x4e>
 82e6c09:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82e6c0c:	c1 e0 05             	shl    $0x5,%eax
 82e6c0f:	03 45 08             	add    0x8(%ebp),%eax
 82e6c12:	89 04 24             	mov    %eax,(%esp)
 82e6c15:	e8 28 99 00 00       	call   82f0542 <_ZN11pvp_assault10CAssaulter7GetUserEv>
 82e6c1a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82e6c1d:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 82e6c21:	74 1d                	je     82e6c40 <_ZN11pvp_assault13CAssaultPlace10SendPacketER11PacketGuard+0x4a>
 82e6c23:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e6c26:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e6c2a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82e6c2d:	89 04 24             	mov    %eax,(%esp)
 82e6c30:	e8 85 19 36 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 82e6c35:	83 f0 01             	xor    $0x1,%eax
 82e6c38:	84 c0                	test   %al,%al
 82e6c3a:	74 04                	je     82e6c40 <_ZN11pvp_assault13CAssaultPlace10SendPacketER11PacketGuard+0x4a>
 82e6c3c:	c6 45 ef 00          	movb   $0x0,-0x11(%ebp)
 82e6c40:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 82e6c44:	83 7d f0 07          	cmpl   $0x7,-0x10(%ebp)
 82e6c48:	0f 9e c0             	setle  %al
 82e6c4b:	84 c0                	test   %al,%al
 82e6c4d:	75 ba                	jne    82e6c09 <_ZN11pvp_assault13CAssaultPlace10SendPacketER11PacketGuard+0x13>
 82e6c4f:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
 82e6c53:	c9                   	leave
 82e6c54:	c3                   	ret
 82e6c55:	90                   	nop

```

```c
// pvp_assault::CAssaultPlace::SendPacket @ 0x82e6bf6

/* pvp_assault::CAssaultPlace::SendPacket(PacketGuard&) */

undefined1 __thiscall
pvp_assault::CAssaultPlace::SendPacket(CAssaultPlace *this,PacketGuard *param_1)

{
  char cVar1;
  CUser *this_00;
  undefined1 local_15;
  int local_14;
  
  local_15 = 1;
  for (local_14 = 0; local_14 < 8; local_14 = local_14 + 1) {
    this_00 = (CUser *)CAssaulter::GetUser((CAssaulter *)(this + local_14 * 0x20));
    if (this_00 != (CUser *)0x0) {
      cVar1 = CUser::Send(this_00,param_1);
      if (cVar1 != '\x01') {
        local_15 = 0;
      }
    }
  }
  return local_15;
}

```

---

## SendPacket_082e6c56

```asm
// === 082e6c56 pvp_assault::CAssaultPlace::SendPacket  [0x082e6c56-0x82e6cdb] ===
 82e6c56:	55                   	push   %ebp
 82e6c57:	89 e5                	mov    %esp,%ebp
 82e6c59:	83 ec 28             	sub    $0x28,%esp
 82e6c5c:	c6 45 ef 01          	movb   $0x1,-0x11(%ebp)
 82e6c60:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 82e6c67:	eb 61                	jmp    82e6cca <_ZN11pvp_assault13CAssaultPlace10SendPacketER11PacketGuard17ENUM_ASSAULT_TEAM+0x74>
 82e6c69:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82e6c6c:	c1 e0 05             	shl    $0x5,%eax
 82e6c6f:	03 45 08             	add    0x8(%ebp),%eax
 82e6c72:	89 04 24             	mov    %eax,(%esp)
 82e6c75:	e8 c8 98 00 00       	call   82f0542 <_ZN11pvp_assault10CAssaulter7GetUserEv>
 82e6c7a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82e6c7d:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 82e6c81:	74 1d                	je     82e6ca0 <_ZN11pvp_assault13CAssaultPlace10SendPacketER11PacketGuard17ENUM_ASSAULT_TEAM+0x4a>
 82e6c83:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82e6c86:	c1 e0 05             	shl    $0x5,%eax
 82e6c89:	03 45 08             	add    0x8(%ebp),%eax
 82e6c8c:	89 04 24             	mov    %eax,(%esp)
 82e6c8f:	e8 dc 98 00 00       	call   82f0570 <_ZN11pvp_assault10CAssaulter7GetTeamEv>
 82e6c94:	3b 45 10             	cmp    0x10(%ebp),%eax
 82e6c97:	75 07                	jne    82e6ca0 <_ZN11pvp_assault13CAssaultPlace10SendPacketER11PacketGuard17ENUM_ASSAULT_TEAM+0x4a>
 82e6c99:	b8 01 00 00 00       	mov    $0x1,%eax
 82e6c9e:	eb 05                	jmp    82e6ca5 <_ZN11pvp_assault13CAssaultPlace10SendPacketER11PacketGuard17ENUM_ASSAULT_TEAM+0x4f>
 82e6ca0:	b8 00 00 00 00       	mov    $0x0,%eax
 82e6ca5:	84 c0                	test   %al,%al
 82e6ca7:	74 1d                	je     82e6cc6 <_ZN11pvp_assault13CAssaultPlace10SendPacketER11PacketGuard17ENUM_ASSAULT_TEAM+0x70>
 82e6ca9:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e6cac:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e6cb0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82e6cb3:	89 04 24             	mov    %eax,(%esp)
 82e6cb6:	e8 ff 18 36 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 82e6cbb:	83 f0 01             	xor    $0x1,%eax
 82e6cbe:	84 c0                	test   %al,%al
 82e6cc0:	74 04                	je     82e6cc6 <_ZN11pvp_assault13CAssaultPlace10SendPacketER11PacketGuard17ENUM_ASSAULT_TEAM+0x70>
 82e6cc2:	c6 45 ef 00          	movb   $0x0,-0x11(%ebp)
 82e6cc6:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 82e6cca:	83 7d f0 07          	cmpl   $0x7,-0x10(%ebp)
 82e6cce:	0f 9e c0             	setle  %al
 82e6cd1:	84 c0                	test   %al,%al
 82e6cd3:	75 94                	jne    82e6c69 <_ZN11pvp_assault13CAssaultPlace10SendPacketER11PacketGuard17ENUM_ASSAULT_TEAM+0x13>
 82e6cd5:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
 82e6cd9:	c9                   	leave
 82e6cda:	c3                   	ret
 82e6cdb:	90                   	nop

```

```c
// pvp_assault::CAssaultPlace::SendPacket @ 0x82e6c56

/* pvp_assault::CAssaultPlace::SendPacket(PacketGuard&, ENUM_ASSAULT_TEAM) */

undefined1 __thiscall
pvp_assault::CAssaultPlace::SendPacket(CAssaultPlace *this,PacketGuard *param_1,int param_3)

{
  bool bVar1;
  char cVar2;
  CUser *this_00;
  int iVar3;
  undefined1 local_15;
  int local_14;
  
  local_15 = 1;
  local_14 = 0;
  do {
    if (7 < local_14) {
      return local_15;
    }
    this_00 = (CUser *)CAssaulter::GetUser((CAssaulter *)(this + local_14 * 0x20));
    if (this_00 == (CUser *)0x0) {
LAB_082e6ca0:
      bVar1 = false;
    }
    else {
      iVar3 = CAssaulter::GetTeam((CAssaulter *)(this + local_14 * 0x20));
      if (iVar3 != param_3) goto LAB_082e6ca0;
      bVar1 = true;
    }
    if (bVar1) {
      cVar2 = CUser::Send(this_00,param_1);
      if (cVar2 != '\x01') {
        local_15 = 0;
      }
    }
    local_14 = local_14 + 1;
  } while( true );
}

```

---

## SendUserState

```asm
// === 082e83c4 pvp_assault::CAssaultPlace::SendUserState  [0x082e83c4-0x82e8499] ===
 82e83c4:	55                   	push   %ebp
 82e83c5:	89 e5                	mov    %esp,%ebp
 82e83c7:	56                   	push   %esi
 82e83c8:	53                   	push   %ebx
 82e83c9:	83 ec 20             	sub    $0x20,%esp
 82e83cc:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82e83cf:	89 04 24             	mov    %eax,(%esp)
 82e83d2:	e8 75 59 2a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 82e83d7:	c7 44 24 08 03 00 00 	movl   $0x3,0x8(%esp)
 82e83de:	00 
 82e83df:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82e83e6:	00 
 82e83e7:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82e83ea:	89 04 24             	mov    %eax,(%esp)
 82e83ed:	e8 0a 35 de ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 82e83f2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82e83f9:	00 
 82e83fa:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82e83fd:	89 04 24             	mov    %eax,(%esp)
 82e8400:	e8 1b 35 de ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 82e8405:	8b 45 08             	mov    0x8(%ebp),%eax
 82e8408:	89 04 24             	mov    %eax,(%esp)
 82e840b:	e8 6c 1f df ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 82e8410:	0f b7 c0             	movzwl %ax,%eax
 82e8413:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e8417:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82e841a:	89 04 24             	mov    %eax,(%esp)
 82e841d:	e8 82 1a df ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 82e8422:	8b 45 08             	mov    0x8(%ebp),%eax
 82e8425:	89 04 24             	mov    %eax,(%esp)
 82e8428:	e8 43 8a 00 00       	call   82f0e70 <_ZN5CUser12GetUserStateEv>
 82e842d:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e8431:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82e8434:	89 04 24             	mov    %eax,(%esp)
 82e8437:	e8 e4 34 de ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 82e843c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82e8443:	00 
 82e8444:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82e8447:	89 04 24             	mov    %eax,(%esp)
 82e844a:	e8 09 35 de ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 82e844f:	e8 53 1f df ff       	call   80da3a7 <_Z11G_GameWorldv>
 82e8454:	8b 55 08             	mov    0x8(%ebp),%edx
 82e8457:	89 54 24 08          	mov    %edx,0x8(%esp)
 82e845b:	8d 55 ec             	lea    -0x14(%ebp),%edx
 82e845e:	89 54 24 04          	mov    %edx,0x4(%esp)
 82e8462:	89 04 24             	mov    %eax,(%esp)
 82e8465:	e8 f2 c4 e4 ff       	call   813495c <_ZN9GameWorld8send_allER11PacketGuardP5CUser>
 82e846a:	eb 1b                	jmp    82e8487 <_ZN11pvp_assault13CAssaultPlace13SendUserStateEP5CUser+0xc3>
 82e846c:	89 d3                	mov    %edx,%ebx
 82e846e:	89 c6                	mov    %eax,%esi
 82e8470:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82e8473:	89 04 24             	mov    %eax,(%esp)
 82e8476:	e8 05 5a 2a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82e847b:	89 f0                	mov    %esi,%eax
 82e847d:	89 da                	mov    %ebx,%edx
 82e847f:	89 04 24             	mov    %eax,(%esp)
 82e8482:	e8 c9 b2 7f 00       	call   8ae3750 <_Unwind_Resume>
 82e8487:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82e848a:	89 04 24             	mov    %eax,(%esp)
 82e848d:	e8 ee 59 2a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82e8492:	83 c4 20             	add    $0x20,%esp
 82e8495:	5b                   	pop    %ebx
 82e8496:	5e                   	pop    %esi
 82e8497:	5d                   	pop    %ebp
 82e8498:	c3                   	ret
 82e8499:	90                   	nop

```

```c
// pvp_assault::CAssaultPlace::SendUserState @ 0x82e83c4

/* pvp_assault::CAssaultPlace::SendUserState(CUser*) */

void pvp_assault::CAssaultPlace::SendUserState(CUser *param_1)

{
  uint uVar1;
  int iVar2;
  GameWorld *this;
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 082e83ed to 082e8469 has its CatchHandler @ 082e846c */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,3);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,1);
  uVar1 = CUser::get_unique_id(param_1);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,uVar1 & 0xffff);
  iVar2 = CUser::GetUserState(param_1);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,iVar2);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  this = (GameWorld *)G_GameWorld();
  GameWorld::send_all(this,local_18,param_1);
  PacketGuard::~PacketGuard(local_18);
  return;
}

```

---

## StartAssault

```asm
// === 082e9502 pvp_assault::CAssaultPlace::StartAssault  [0x082e9502-0x82e99a1] ===
 82e9502:	55                   	push   %ebp
 82e9503:	89 e5                	mov    %esp,%ebp
 82e9505:	56                   	push   %esi
 82e9506:	53                   	push   %ebx
 82e9507:	83 ec 60             	sub    $0x60,%esp
 82e950a:	8b 45 08             	mov    0x8(%ebp),%eax
 82e950d:	89 04 24             	mov    %eax,(%esp)
 82e9510:	e8 87 ff ff ff       	call   82e949c <_ZN11pvp_assault13CAssaultPlace15ClearBadP2PUserEv>
 82e9515:	8b 45 08             	mov    0x8(%ebp),%eax
 82e9518:	8b 80 00 01 00 00    	mov    0x100(%eax),%eax
 82e951e:	85 c0                	test   %eax,%eax
 82e9520:	0f 85 a9 00 00 00    	jne    82e95cf <_ZN11pvp_assault13CAssaultPlace12StartAssaultEv+0xcd>
 82e9526:	8b 45 08             	mov    0x8(%ebp),%eax
 82e9529:	8b 80 2c 01 00 00    	mov    0x12c(%eax),%eax
 82e952f:	85 c0                	test   %eax,%eax
 82e9531:	74 19                	je     82e954c <_ZN11pvp_assault13CAssaultPlace12StartAssaultEv+0x4a>
 82e9533:	8b 45 08             	mov    0x8(%ebp),%eax
 82e9536:	8b 80 2c 01 00 00    	mov    0x12c(%eax),%eax
 82e953c:	c7 44 24 04 07 00 00 	movl   $0x7,0x4(%esp)
 82e9543:	00 
 82e9544:	89 04 24             	mov    %eax,(%esp)
 82e9547:	e8 e8 c4 fb ff       	call   82a5a34 <_ZN6CParty15SetAssaultStateEc>
 82e954c:	8b 45 08             	mov    0x8(%ebp),%eax
 82e954f:	8b 80 30 01 00 00    	mov    0x130(%eax),%eax
 82e9555:	85 c0                	test   %eax,%eax
 82e9557:	74 19                	je     82e9572 <_ZN11pvp_assault13CAssaultPlace12StartAssaultEv+0x70>
 82e9559:	8b 45 08             	mov    0x8(%ebp),%eax
 82e955c:	8b 80 30 01 00 00    	mov    0x130(%eax),%eax
 82e9562:	c7 44 24 04 07 00 00 	movl   $0x7,0x4(%esp)
 82e9569:	00 
 82e956a:	89 04 24             	mov    %eax,(%esp)
 82e956d:	e8 c2 c4 fb ff       	call   82a5a34 <_ZN6CParty15SetAssaultStateEc>
 82e9572:	a1 50 be 40 09       	mov    0x940be50,%eax
 82e9577:	89 04 24             	mov    %eax,(%esp)
 82e957a:	e8 91 63 19 00       	call   847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>
 82e957f:	84 c0                	test   %al,%al
 82e9581:	74 2a                	je     82e95ad <_ZN11pvp_assault13CAssaultPlace12StartAssaultEv+0xab>
 82e9583:	a1 50 be 40 09       	mov    0x940be50,%eax
 82e9588:	89 04 24             	mov    %eax,(%esp)
 82e958b:	e8 76 73 00 00       	call   82f0906 <_ZN13CPowerManager14GetPowerWarLogEv>
 82e9590:	89 04 24             	mov    %eax,(%esp)
 82e9593:	e8 1c 73 00 00       	call   82f08b4 <_ZN12CPowerWarLog20IncStartFailureCountEv>
 82e9598:	a1 50 be 40 09       	mov    0x940be50,%eax
 82e959d:	89 04 24             	mov    %eax,(%esp)
 82e95a0:	e8 61 73 00 00       	call   82f0906 <_ZN13CPowerManager14GetPowerWarLogEv>
 82e95a5:	89 04 24             	mov    %eax,(%esp)
 82e95a8:	e8 df 72 00 00       	call   82f088c <_ZN12CPowerWarLog21IncP2PBadCountFailureEv>
 82e95ad:	8b 45 08             	mov    0x8(%ebp),%eax
 82e95b0:	c7 80 0c 01 00 00 07 	movl   $0x7,0x10c(%eax)
 82e95b7:	00 00 00 
 82e95ba:	8b 45 08             	mov    0x8(%ebp),%eax
 82e95bd:	89 04 24             	mov    %eax,(%esp)
 82e95c0:	e8 11 05 00 00       	call   82e9ad6 <_ZN11pvp_assault13CAssaultPlace12CloseAssaultEv>
 82e95c5:	bb 00 00 00 00       	mov    $0x0,%ebx
 82e95ca:	e9 ca 03 00 00       	jmp    82e9999 <_ZN11pvp_assault13CAssaultPlace12StartAssaultEv+0x497>
 82e95cf:	8b 45 08             	mov    0x8(%ebp),%eax
 82e95d2:	89 04 24             	mov    %eax,(%esp)
 82e95d5:	e8 68 fb ff ff       	call   82e9142 <_ZN11pvp_assault13CAssaultPlace14_CheckPlayableEv>
 82e95da:	83 f0 01             	xor    $0x1,%eax
 82e95dd:	84 c0                	test   %al,%al
 82e95df:	0f 84 a9 00 00 00    	je     82e968e <_ZN11pvp_assault13CAssaultPlace12StartAssaultEv+0x18c>
 82e95e5:	8b 45 08             	mov    0x8(%ebp),%eax
 82e95e8:	c7 80 0c 01 00 00 06 	movl   $0x6,0x10c(%eax)
 82e95ef:	00 00 00 
 82e95f2:	8b 45 08             	mov    0x8(%ebp),%eax
 82e95f5:	8b 80 2c 01 00 00    	mov    0x12c(%eax),%eax
 82e95fb:	85 c0                	test   %eax,%eax
 82e95fd:	74 19                	je     82e9618 <_ZN11pvp_assault13CAssaultPlace12StartAssaultEv+0x116>
 82e95ff:	8b 45 08             	mov    0x8(%ebp),%eax
 82e9602:	8b 80 2c 01 00 00    	mov    0x12c(%eax),%eax
 82e9608:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 82e960f:	00 
 82e9610:	89 04 24             	mov    %eax,(%esp)
 82e9613:	e8 1c c4 fb ff       	call   82a5a34 <_ZN6CParty15SetAssaultStateEc>
 82e9618:	8b 45 08             	mov    0x8(%ebp),%eax
 82e961b:	8b 80 30 01 00 00    	mov    0x130(%eax),%eax
 82e9621:	85 c0                	test   %eax,%eax
 82e9623:	74 19                	je     82e963e <_ZN11pvp_assault13CAssaultPlace12StartAssaultEv+0x13c>
 82e9625:	8b 45 08             	mov    0x8(%ebp),%eax
 82e9628:	8b 80 30 01 00 00    	mov    0x130(%eax),%eax
 82e962e:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 82e9635:	00 
 82e9636:	89 04 24             	mov    %eax,(%esp)
 82e9639:	e8 f6 c3 fb ff       	call   82a5a34 <_ZN6CParty15SetAssaultStateEc>
 82e963e:	a1 50 be 40 09       	mov    0x940be50,%eax
 82e9643:	89 04 24             	mov    %eax,(%esp)
 82e9646:	e8 c5 62 19 00       	call   847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>
 82e964b:	84 c0                	test   %al,%al
 82e964d:	74 2a                	je     82e9679 <_ZN11pvp_assault13CAssaultPlace12StartAssaultEv+0x177>
 82e964f:	a1 50 be 40 09       	mov    0x940be50,%eax
 82e9654:	89 04 24             	mov    %eax,(%esp)
 82e9657:	e8 aa 72 00 00       	call   82f0906 <_ZN13CPowerManager14GetPowerWarLogEv>
 82e965c:	89 04 24             	mov    %eax,(%esp)
 82e965f:	e8 50 72 00 00       	call   82f08b4 <_ZN12CPowerWarLog20IncStartFailureCountEv>
 82e9664:	a1 50 be 40 09       	mov    0x940be50,%eax
 82e9669:	89 04 24             	mov    %eax,(%esp)
 82e966c:	e8 95 72 00 00       	call   82f0906 <_ZN13CPowerManager14GetPowerWarLogEv>
 82e9671:	89 04 24             	mov    %eax,(%esp)
 82e9674:	e8 13 72 00 00       	call   82f088c <_ZN12CPowerWarLog21IncP2PBadCountFailureEv>
 82e9679:	8b 45 08             	mov    0x8(%ebp),%eax
 82e967c:	89 04 24             	mov    %eax,(%esp)
 82e967f:	e8 1e 03 00 00       	call   82e99a2 <_ZN11pvp_assault13CAssaultPlace10EndAssaultEv>
 82e9684:	bb 00 00 00 00       	mov    $0x0,%ebx
 82e9689:	e9 0b 03 00 00       	jmp    82e9999 <_ZN11pvp_assault13CAssaultPlace12StartAssaultEv+0x497>
 82e968e:	8b 45 08             	mov    0x8(%ebp),%eax
 82e9691:	c7 80 0c 01 00 00 04 	movl   $0x4,0x10c(%eax)
 82e9698:	00 00 00 
 82e969b:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 82e96a2:	eb 59                	jmp    82e96fd <_ZN11pvp_assault13CAssaultPlace12StartAssaultEv+0x1fb>
 82e96a4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82e96a7:	c1 e0 05             	shl    $0x5,%eax
 82e96aa:	03 45 08             	add    0x8(%ebp),%eax
 82e96ad:	89 04 24             	mov    %eax,(%esp)
 82e96b0:	e8 a7 6e 00 00       	call   82f055c <_ZN11pvp_assault10CAssaulter5EmptyEv>
 82e96b5:	84 c0                	test   %al,%al
 82e96b7:	75 3f                	jne    82e96f8 <_ZN11pvp_assault13CAssaultPlace12StartAssaultEv+0x1f6>
 82e96b9:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82e96bc:	c1 e0 05             	shl    $0x5,%eax
 82e96bf:	03 45 08             	add    0x8(%ebp),%eax
 82e96c2:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 82e96c9:	00 
 82e96ca:	89 04 24             	mov    %eax,(%esp)
 82e96cd:	e8 aa 6e 00 00       	call   82f057c <_ZN11pvp_assault10CAssaulter8SetStateENS_18ENUM_ASSAULT_STATEE>
 82e96d2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82e96d5:	c1 e0 05             	shl    $0x5,%eax
 82e96d8:	03 45 08             	add    0x8(%ebp),%eax
 82e96db:	89 04 24             	mov    %eax,(%esp)
 82e96de:	e8 5f 6e 00 00       	call   82f0542 <_ZN11pvp_assault10CAssaulter7GetUserEv>
 82e96e3:	89 c3                	mov    %eax,%ebx
 82e96e5:	e8 f5 b1 f4 ff       	call   82348df <_ZN19disconnect_detecter29GetInstanceDisconnectDetecterEv>
 82e96ea:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 82e96ee:	89 04 24             	mov    %eax,(%esp)
 82e96f1:	e8 7c 8b 18 00       	call   8472272 <_ZN19disconnect_detecter19CDisconnectDetecter12RegisterUserEP5CUser>
 82e96f6:	eb 01                	jmp    82e96f9 <_ZN11pvp_assault13CAssaultPlace12StartAssaultEv+0x1f7>
 82e96f8:	90                   	nop
 82e96f9:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 82e96fd:	83 7d f0 07          	cmpl   $0x7,-0x10(%ebp)
 82e9701:	0f 9e c0             	setle  %al
 82e9704:	84 c0                	test   %al,%al
 82e9706:	75 9c                	jne    82e96a4 <_ZN11pvp_assault13CAssaultPlace12StartAssaultEv+0x1a2>
 82e9708:	8b 45 08             	mov    0x8(%ebp),%eax
 82e970b:	8b 80 2c 01 00 00    	mov    0x12c(%eax),%eax
 82e9711:	85 c0                	test   %eax,%eax
 82e9713:	74 19                	je     82e972e <_ZN11pvp_assault13CAssaultPlace12StartAssaultEv+0x22c>
 82e9715:	8b 45 08             	mov    0x8(%ebp),%eax
 82e9718:	8b 80 2c 01 00 00    	mov    0x12c(%eax),%eax
 82e971e:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 82e9725:	00 
 82e9726:	89 04 24             	mov    %eax,(%esp)
 82e9729:	e8 06 c3 fb ff       	call   82a5a34 <_ZN6CParty15SetAssaultStateEc>
 82e972e:	8b 45 08             	mov    0x8(%ebp),%eax
 82e9731:	8b 80 30 01 00 00    	mov    0x130(%eax),%eax
 82e9737:	85 c0                	test   %eax,%eax
 82e9739:	74 19                	je     82e9754 <_ZN11pvp_assault13CAssaultPlace12StartAssaultEv+0x252>
 82e973b:	8b 45 08             	mov    0x8(%ebp),%eax
 82e973e:	8b 80 30 01 00 00    	mov    0x130(%eax),%eax
 82e9744:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 82e974b:	00 
 82e974c:	89 04 24             	mov    %eax,(%esp)
 82e974f:	e8 e0 c2 fb ff       	call   82a5a34 <_ZN6CParty15SetAssaultStateEc>
 82e9754:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 82e9757:	89 04 24             	mov    %eax,(%esp)
 82e975a:	e8 ed 45 2a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 82e975f:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 82e9762:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e9766:	8b 45 08             	mov    0x8(%ebp),%eax
 82e9769:	89 04 24             	mov    %eax,(%esp)
 82e976c:	e8 f9 f0 ff ff       	call   82e886a <_ZN11pvp_assault13CAssaultPlace17_MakeStartAssaultEP11PacketGuard>
 82e9771:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 82e9774:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e9778:	8b 45 08             	mov    0x8(%ebp),%eax
 82e977b:	89 04 24             	mov    %eax,(%esp)
 82e977e:	e8 73 d4 ff ff       	call   82e6bf6 <_ZN11pvp_assault13CAssaultPlace10SendPacketER11PacketGuard>
 82e9783:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 82e9786:	89 04 24             	mov    %eax,(%esp)
 82e9789:	e8 58 21 de ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 82e978e:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 82e9795:	00 
 82e9796:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 82e9799:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e979d:	8b 45 08             	mov    0x8(%ebp),%eax
 82e97a0:	89 04 24             	mov    %eax,(%esp)
 82e97a3:	e8 54 f3 ff ff       	call   82e8afc <_ZN11pvp_assault13CAssaultPlace26_MakeViewAssaultIconPlayerEP11PacketGuardb>
 82e97a8:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 82e97ab:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e97af:	8b 45 08             	mov    0x8(%ebp),%eax
 82e97b2:	89 04 24             	mov    %eax,(%esp)
 82e97b5:	e8 80 d5 ff ff       	call   82e6d3a <_ZN11pvp_assault13CAssaultPlace17_SendPacketToAreaER11PacketGuard>
 82e97ba:	8b 45 08             	mov    0x8(%ebp),%eax
 82e97bd:	89 04 24             	mov    %eax,(%esp)
 82e97c0:	e8 31 e2 ff ff       	call   82e79f6 <_ZN11pvp_assault13CAssaultPlace14_SendUserStateEv>
 82e97c5:	8b 45 08             	mov    0x8(%ebp),%eax
 82e97c8:	8b 90 08 01 00 00    	mov    0x108(%eax),%edx
 82e97ce:	8b 45 08             	mov    0x8(%ebp),%eax
 82e97d1:	8b 80 04 01 00 00    	mov    0x104(%eax),%eax
 82e97d7:	89 54 24 08          	mov    %edx,0x8(%esp)
 82e97db:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e97df:	c7 04 24 b4 00 00 00 	movl   $0xb4,(%esp)
 82e97e6:	e8 4f de 34 00       	call   863763a <_ZN15TimerEndAssault15registNextTimerElii>
 82e97eb:	a1 50 be 40 09       	mov    0x940be50,%eax
 82e97f0:	89 04 24             	mov    %eax,(%esp)
 82e97f3:	e8 18 61 19 00       	call   847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>
 82e97f8:	84 c0                	test   %al,%al
 82e97fa:	0f 84 4c 01 00 00    	je     82e994c <_ZN11pvp_assault13CAssaultPlace12StartAssaultEv+0x44a>
 82e9800:	a1 50 be 40 09       	mov    0x940be50,%eax
 82e9805:	89 04 24             	mov    %eax,(%esp)
 82e9808:	e8 f9 70 00 00       	call   82f0906 <_ZN13CPowerManager14GetPowerWarLogEv>
 82e980d:	89 04 24             	mov    %eax,(%esp)
 82e9810:	e8 b3 70 00 00       	call   82f08c8 <_ZN12CPowerWarLog20IncStartSuccessCountEv>
 82e9815:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82e981c:	00 
 82e981d:	c7 44 24 08 97 08 00 	movl   $0x897,0x8(%esp)
 82e9824:	00 
 82e9825:	c7 44 24 04 20 d1 c1 	movl   $0x8c1d120,0x4(%esp)
 82e982c:	08 
 82e982d:	8d 45 c0             	lea    -0x40(%ebp),%eax
 82e9830:	89 04 24             	mov    %eax,(%esp)
 82e9833:	e8 e0 5e 26 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 82e9838:	c7 44 24 04 00 bd c1 	movl   $0x8c1bd00,0x4(%esp)
 82e983f:	08 
 82e9840:	8d 45 c0             	lea    -0x40(%ebp),%eax
 82e9843:	89 04 24             	mov    %eax,(%esp)
 82e9846:	e8 3d 5f 26 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 82e984b:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 82e9852:	e9 e6 00 00 00       	jmp    82e993d <_ZN11pvp_assault13CAssaultPlace12StartAssaultEv+0x43b>
 82e9857:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82e985a:	c1 e0 05             	shl    $0x5,%eax
 82e985d:	03 45 08             	add    0x8(%ebp),%eax
 82e9860:	89 04 24             	mov    %eax,(%esp)
 82e9863:	e8 f4 6c 00 00       	call   82f055c <_ZN11pvp_assault10CAssaulter5EmptyEv>
 82e9868:	84 c0                	test   %al,%al
 82e986a:	0f 85 c8 00 00 00    	jne    82e9938 <_ZN11pvp_assault13CAssaultPlace12StartAssaultEv+0x436>
 82e9870:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82e9873:	c1 e0 05             	shl    $0x5,%eax
 82e9876:	03 45 08             	add    0x8(%ebp),%eax
 82e9879:	89 04 24             	mov    %eax,(%esp)
 82e987c:	e8 ef 6c 00 00       	call   82f0570 <_ZN11pvp_assault10CAssaulter7GetTeamEv>
 82e9881:	85 c0                	test   %eax,%eax
 82e9883:	0f 94 c0             	sete   %al
 82e9886:	84 c0                	test   %al,%al
 82e9888:	74 57                	je     82e98e1 <_ZN11pvp_assault13CAssaultPlace12StartAssaultEv+0x3df>
 82e988a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82e988d:	c1 e0 05             	shl    $0x5,%eax
 82e9890:	03 45 08             	add    0x8(%ebp),%eax
 82e9893:	89 04 24             	mov    %eax,(%esp)
 82e9896:	e8 a7 6c 00 00       	call   82f0542 <_ZN11pvp_assault10CAssaulter7GetUserEv>
 82e989b:	89 04 24             	mov    %eax,(%esp)
 82e989e:	e8 85 77 e1 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 82e98a3:	89 c3                	mov    %eax,%ebx
 82e98a5:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82e98ac:	00 
 82e98ad:	c7 44 24 08 9f 08 00 	movl   $0x89f,0x8(%esp)
 82e98b4:	00 
 82e98b5:	c7 44 24 04 20 d1 c1 	movl   $0x8c1d120,0x4(%esp)
 82e98bc:	08 
 82e98bd:	8d 45 d0             	lea    -0x30(%ebp),%eax
 82e98c0:	89 04 24             	mov    %eax,(%esp)
 82e98c3:	e8 50 5e 26 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 82e98c8:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 82e98cc:	c7 44 24 04 18 bd c1 	movl   $0x8c1bd18,0x4(%esp)
 82e98d3:	08 
 82e98d4:	8d 45 d0             	lea    -0x30(%ebp),%eax
 82e98d7:	89 04 24             	mov    %eax,(%esp)
 82e98da:	e8 a9 5e 26 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 82e98df:	eb 58                	jmp    82e9939 <_ZN11pvp_assault13CAssaultPlace12StartAssaultEv+0x437>
 82e98e1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82e98e4:	c1 e0 05             	shl    $0x5,%eax
 82e98e7:	03 45 08             	add    0x8(%ebp),%eax
 82e98ea:	89 04 24             	mov    %eax,(%esp)
 82e98ed:	e8 50 6c 00 00       	call   82f0542 <_ZN11pvp_assault10CAssaulter7GetUserEv>
 82e98f2:	89 04 24             	mov    %eax,(%esp)
 82e98f5:	e8 2e 77 e1 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 82e98fa:	89 c3                	mov    %eax,%ebx
 82e98fc:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82e9903:	00 
 82e9904:	c7 44 24 08 a1 08 00 	movl   $0x8a1,0x8(%esp)
 82e990b:	00 
 82e990c:	c7 44 24 04 20 d1 c1 	movl   $0x8c1d120,0x4(%esp)
 82e9913:	08 
 82e9914:	8d 45 e0             	lea    -0x20(%ebp),%eax
 82e9917:	89 04 24             	mov    %eax,(%esp)
 82e991a:	e8 f9 5d 26 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 82e991f:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 82e9923:	c7 44 24 04 27 bd c1 	movl   $0x8c1bd27,0x4(%esp)
 82e992a:	08 
 82e992b:	8d 45 e0             	lea    -0x20(%ebp),%eax
 82e992e:	89 04 24             	mov    %eax,(%esp)
 82e9931:	e8 52 5e 26 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 82e9936:	eb 01                	jmp    82e9939 <_ZN11pvp_assault13CAssaultPlace12StartAssaultEv+0x437>
 82e9938:	90                   	nop
 82e9939:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 82e993d:	83 7d f4 07          	cmpl   $0x7,-0xc(%ebp)
 82e9941:	0f 9e c0             	setle  %al
 82e9944:	84 c0                	test   %al,%al
 82e9946:	0f 85 0b ff ff ff    	jne    82e9857 <_ZN11pvp_assault13CAssaultPlace12StartAssaultEv+0x355>
 82e994c:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 82e9953:	e8 46 23 de ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 82e9958:	8b 55 08             	mov    0x8(%ebp),%edx
 82e995b:	89 82 3c 01 00 00    	mov    %eax,0x13c(%edx)
 82e9961:	8b 45 08             	mov    0x8(%ebp),%eax
 82e9964:	89 04 24             	mov    %eax,(%esp)
 82e9967:	e8 8e d9 ff ff       	call   82e72fa <_ZN11pvp_assault13CAssaultPlace23_PowerWarAssaultCheckInEv>
 82e996c:	bb 01 00 00 00       	mov    $0x1,%ebx
 82e9971:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 82e9974:	89 04 24             	mov    %eax,(%esp)
 82e9977:	e8 04 45 2a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82e997c:	eb 1b                	jmp    82e9999 <_ZN11pvp_assault13CAssaultPlace12StartAssaultEv+0x497>
 82e997e:	89 d3                	mov    %edx,%ebx
 82e9980:	89 c6                	mov    %eax,%esi
 82e9982:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 82e9985:	89 04 24             	mov    %eax,(%esp)
 82e9988:	e8 f3 44 2a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82e998d:	89 f0                	mov    %esi,%eax
 82e998f:	89 da                	mov    %ebx,%edx
 82e9991:	89 04 24             	mov    %eax,(%esp)
 82e9994:	e8 b7 9d 7f 00       	call   8ae3750 <_Unwind_Resume>
 82e9999:	89 d8                	mov    %ebx,%eax
 82e999b:	83 c4 60             	add    $0x60,%esp
 82e999e:	5b                   	pop    %ebx
 82e999f:	5e                   	pop    %esi
 82e99a0:	5d                   	pop    %ebp
 82e99a1:	c3                   	ret

```

```c
// pvp_assault::CAssaultPlace::StartAssault @ 0x82e9502

/* pvp_assault::CAssaultPlace::StartAssault() */

undefined4 __thiscall pvp_assault::CAssaultPlace::StartAssault(CAssaultPlace *this)

{
  char cVar1;
  CPowerWarLog *pCVar2;
  CUser *pCVar3;
  CDisconnectDetecter *this_00;
  int iVar4;
  CUserCharacInfo *pCVar5;
  undefined4 uVar6;
  PacketGuard local_50 [12];
  cMyTrace local_44 [16];
  cMyTrace local_34 [16];
  cMyTrace local_24 [16];
  int local_14;
  int local_10;
  
  ClearBadP2PUser(this);
  if (*(int *)(this + 0x100) == 0) {
    if (*(int *)(this + 300) != 0) {
      CParty::SetAssaultState(*(CParty **)(this + 300),'\a');
    }
    if (*(int *)(this + 0x130) != 0) {
      CParty::SetAssaultState(*(CParty **)(this + 0x130),'\a');
    }
    cVar1 = CPowerManager::IsPowerWarEventOn();
    if (cVar1 != '\0') {
      pCVar2 = (CPowerWarLog *)CPowerManager::GetPowerWarLog(GlobalData::s_power_manager);
      CPowerWarLog::IncStartFailureCount(pCVar2);
      pCVar2 = (CPowerWarLog *)CPowerManager::GetPowerWarLog(GlobalData::s_power_manager);
      CPowerWarLog::IncP2PBadCountFailure(pCVar2);
    }
    *(undefined4 *)(this + 0x10c) = 7;
    CloseAssault(this);
    uVar6 = 0;
  }
  else {
    cVar1 = _CheckPlayable(this);
    if (cVar1 == '\x01') {
      *(undefined4 *)(this + 0x10c) = 4;
      for (local_14 = 0; local_14 < 8; local_14 = local_14 + 1) {
        cVar1 = CAssaulter::Empty((CAssaulter *)(this + local_14 * 0x20));
        if (cVar1 == '\0') {
          CAssaulter::SetState((CAssaulter *)(this + local_14 * 0x20),5);
          pCVar3 = (CUser *)CAssaulter::GetUser((CAssaulter *)(this + local_14 * 0x20));
          this_00 = (CDisconnectDetecter *)disconnect_detecter::GetInstanceDisconnectDetecter();
          disconnect_detecter::CDisconnectDetecter::RegisterUser(this_00,pCVar3);
        }
      }
      if (*(int *)(this + 300) != 0) {
        CParty::SetAssaultState(*(CParty **)(this + 300),'\x04');
      }
      if (*(int *)(this + 0x130) != 0) {
        CParty::SetAssaultState(*(CParty **)(this + 0x130),'\x04');
      }
      PacketGuard::PacketGuard(local_50);
                    /* try { // try from 082e976c to 082e9935 has its CatchHandler @ 082e997e */
      _MakeStartAssault(this,local_50);
      SendPacket(this,local_50);
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_50);
      _MakeViewAssaultIconPlayer(this,local_50,true);
      _SendPacketToArea(this,local_50);
      _SendUserState(this);
      TimerEndAssault::registNextTimer(0xb4,*(int *)(this + 0x104),*(int *)(this + 0x108));
      cVar1 = CPowerManager::IsPowerWarEventOn();
      if (cVar1 != '\0') {
        pCVar2 = (CPowerWarLog *)CPowerManager::GetPowerWarLog(GlobalData::s_power_manager);
        CPowerWarLog::IncStartSuccessCount(pCVar2);
        cMyTrace::cMyTrace(local_44,"bool pvp_assault::CAssaultPlace::StartAssault()",0x897,0);
        cMyTrace::operator()(local_44,"POWER WAR START SUCCESS");
        for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
          cVar1 = CAssaulter::Empty((CAssaulter *)(this + local_10 * 0x20));
          if (cVar1 == '\0') {
            iVar4 = CAssaulter::GetTeam((CAssaulter *)(this + local_10 * 0x20));
            if (iVar4 == 0) {
              pCVar5 = (CUserCharacInfo *)
                       CAssaulter::GetUser((CAssaulter *)(this + local_10 * 0x20));
              uVar6 = CUserCharacInfo::getCurCharacName(pCVar5);
              cMyTrace::cMyTrace(local_34,"bool pvp_assault::CAssaultPlace::StartAssault()",0x89f,0)
              ;
              cMyTrace::operator()(local_34,"BLUE TEAM : %s",uVar6);
            }
            else {
              pCVar5 = (CUserCharacInfo *)
                       CAssaulter::GetUser((CAssaulter *)(this + local_10 * 0x20));
              uVar6 = CUserCharacInfo::getCurCharacName(pCVar5);
              cMyTrace::cMyTrace(local_24,"bool pvp_assault::CAssaultPlace::StartAssault()",0x8a1,0)
              ;
              cMyTrace::operator()(local_24,"RED TEAM : %s",uVar6);
            }
          }
        }
      }
      uVar6 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      *(undefined4 *)(this + 0x13c) = uVar6;
      _PowerWarAssaultCheckIn(this);
      uVar6 = 1;
      PacketGuard::~PacketGuard(local_50);
    }
    else {
      *(undefined4 *)(this + 0x10c) = 6;
      if (*(int *)(this + 300) != 0) {
        CParty::SetAssaultState(*(CParty **)(this + 300),'\x06');
      }
      if (*(int *)(this + 0x130) != 0) {
        CParty::SetAssaultState(*(CParty **)(this + 0x130),'\x06');
      }
      cVar1 = CPowerManager::IsPowerWarEventOn();
      if (cVar1 != '\0') {
        pCVar2 = (CPowerWarLog *)CPowerManager::GetPowerWarLog(GlobalData::s_power_manager);
        CPowerWarLog::IncStartFailureCount(pCVar2);
        pCVar2 = (CPowerWarLog *)CPowerManager::GetPowerWarLog(GlobalData::s_power_manager);
        CPowerWarLog::IncP2PBadCountFailure(pCVar2);
      }
      EndAssault(this);
      uVar6 = 0;
    }
  }
  return uVar6;
}

```

---

## TimeoutCloseAssault

```asm
// === 082ea188 pvp_assault::CAssaultPlace::TimeoutCloseAssault  [0x082ea188-0x82ea319] ===
 82ea188:	55                   	push   %ebp
 82ea189:	89 e5                	mov    %esp,%ebp
 82ea18b:	57                   	push   %edi
 82ea18c:	56                   	push   %esi
 82ea18d:	53                   	push   %ebx
 82ea18e:	83 ec 6c             	sub    $0x6c,%esp
 82ea191:	8b 45 08             	mov    0x8(%ebp),%eax
 82ea194:	05 e0 00 00 00       	add    $0xe0,%eax
 82ea199:	89 04 24             	mov    %eax,(%esp)
 82ea19c:	e8 9b c4 ff ff       	call   82e663c <_ZNK11pvp_assault10CAssaulter13GetCharacNameEv>
 82ea1a1:	89 45 c0             	mov    %eax,-0x40(%ebp)
 82ea1a4:	8b 45 08             	mov    0x8(%ebp),%eax
 82ea1a7:	05 c0 00 00 00       	add    $0xc0,%eax
 82ea1ac:	89 04 24             	mov    %eax,(%esp)
 82ea1af:	e8 88 c4 ff ff       	call   82e663c <_ZNK11pvp_assault10CAssaulter13GetCharacNameEv>
 82ea1b4:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 82ea1b7:	8b 45 08             	mov    0x8(%ebp),%eax
 82ea1ba:	05 a0 00 00 00       	add    $0xa0,%eax
 82ea1bf:	89 04 24             	mov    %eax,(%esp)
 82ea1c2:	e8 75 c4 ff ff       	call   82e663c <_ZNK11pvp_assault10CAssaulter13GetCharacNameEv>
 82ea1c7:	89 45 c8             	mov    %eax,-0x38(%ebp)
 82ea1ca:	8b 45 08             	mov    0x8(%ebp),%eax
 82ea1cd:	83 e8 80             	sub    $0xffffff80,%eax
 82ea1d0:	89 04 24             	mov    %eax,(%esp)
 82ea1d3:	e8 64 c4 ff ff       	call   82e663c <_ZNK11pvp_assault10CAssaulter13GetCharacNameEv>
 82ea1d8:	89 45 cc             	mov    %eax,-0x34(%ebp)
 82ea1db:	8b 45 08             	mov    0x8(%ebp),%eax
 82ea1de:	83 c0 60             	add    $0x60,%eax
 82ea1e1:	89 04 24             	mov    %eax,(%esp)
 82ea1e4:	e8 53 c4 ff ff       	call   82e663c <_ZNK11pvp_assault10CAssaulter13GetCharacNameEv>
 82ea1e9:	89 45 d0             	mov    %eax,-0x30(%ebp)
 82ea1ec:	8b 45 08             	mov    0x8(%ebp),%eax
 82ea1ef:	83 c0 40             	add    $0x40,%eax
 82ea1f2:	89 04 24             	mov    %eax,(%esp)
 82ea1f5:	e8 42 c4 ff ff       	call   82e663c <_ZNK11pvp_assault10CAssaulter13GetCharacNameEv>
 82ea1fa:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 82ea1fd:	8b 45 08             	mov    0x8(%ebp),%eax
 82ea200:	83 c0 20             	add    $0x20,%eax
 82ea203:	89 04 24             	mov    %eax,(%esp)
 82ea206:	e8 31 c4 ff ff       	call   82e663c <_ZNK11pvp_assault10CAssaulter13GetCharacNameEv>
 82ea20b:	89 c7                	mov    %eax,%edi
 82ea20d:	8b 45 08             	mov    0x8(%ebp),%eax
 82ea210:	89 04 24             	mov    %eax,(%esp)
 82ea213:	e8 24 c4 ff ff       	call   82e663c <_ZNK11pvp_assault10CAssaulter13GetCharacNameEv>
 82ea218:	89 c6                	mov    %eax,%esi
 82ea21a:	8b 45 08             	mov    0x8(%ebp),%eax
 82ea21d:	8b 80 0c 01 00 00    	mov    0x10c(%eax),%eax
 82ea223:	89 c3                	mov    %eax,%ebx
 82ea225:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82ea22c:	00 
 82ea22d:	c7 44 24 08 ea 09 00 	movl   $0x9ea,0x8(%esp)
 82ea234:	00 
 82ea235:	c7 44 24 04 a0 d0 c1 	movl   $0x8c1d0a0,0x4(%esp)
 82ea23c:	08 
 82ea23d:	8d 45 d8             	lea    -0x28(%ebp),%eax
 82ea240:	89 04 24             	mov    %eax,(%esp)
 82ea243:	e8 d0 54 26 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 82ea248:	8b 45 c0             	mov    -0x40(%ebp),%eax
 82ea24b:	89 44 24 28          	mov    %eax,0x28(%esp)
 82ea24f:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 82ea252:	89 44 24 24          	mov    %eax,0x24(%esp)
 82ea256:	8b 45 c8             	mov    -0x38(%ebp),%eax
 82ea259:	89 44 24 20          	mov    %eax,0x20(%esp)
 82ea25d:	8b 45 cc             	mov    -0x34(%ebp),%eax
 82ea260:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 82ea264:	8b 45 d0             	mov    -0x30(%ebp),%eax
 82ea267:	89 44 24 18          	mov    %eax,0x18(%esp)
 82ea26b:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 82ea26e:	89 44 24 14          	mov    %eax,0x14(%esp)
 82ea272:	89 7c 24 10          	mov    %edi,0x10(%esp)
 82ea276:	89 74 24 0c          	mov    %esi,0xc(%esp)
 82ea27a:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 82ea27e:	c7 44 24 04 70 bd c1 	movl   $0x8c1bd70,0x4(%esp)
 82ea285:	08 
 82ea286:	8d 45 d8             	lea    -0x28(%ebp),%eax
 82ea289:	89 04 24             	mov    %eax,(%esp)
 82ea28c:	e8 f7 54 26 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 82ea291:	8b 45 08             	mov    0x8(%ebp),%eax
 82ea294:	8b 80 0c 01 00 00    	mov    0x10c(%eax),%eax
 82ea29a:	83 f8 05             	cmp    $0x5,%eax
 82ea29d:	74 0e                	je     82ea2ad <_ZN11pvp_assault13CAssaultPlace19TimeoutCloseAssaultEv+0x125>
 82ea29f:	8b 45 08             	mov    0x8(%ebp),%eax
 82ea2a2:	8b 80 0c 01 00 00    	mov    0x10c(%eax),%eax
 82ea2a8:	83 f8 06             	cmp    $0x6,%eax
 82ea2ab:	75 64                	jne    82ea311 <_ZN11pvp_assault13CAssaultPlace19TimeoutCloseAssaultEv+0x189>
 82ea2ad:	8b 45 08             	mov    0x8(%ebp),%eax
 82ea2b0:	8b 80 2c 01 00 00    	mov    0x12c(%eax),%eax
 82ea2b6:	85 c0                	test   %eax,%eax
 82ea2b8:	74 19                	je     82ea2d3 <_ZN11pvp_assault13CAssaultPlace19TimeoutCloseAssaultEv+0x14b>
 82ea2ba:	8b 45 08             	mov    0x8(%ebp),%eax
 82ea2bd:	8b 80 2c 01 00 00    	mov    0x12c(%eax),%eax
 82ea2c3:	c7 44 24 04 07 00 00 	movl   $0x7,0x4(%esp)
 82ea2ca:	00 
 82ea2cb:	89 04 24             	mov    %eax,(%esp)
 82ea2ce:	e8 61 b7 fb ff       	call   82a5a34 <_ZN6CParty15SetAssaultStateEc>
 82ea2d3:	8b 45 08             	mov    0x8(%ebp),%eax
 82ea2d6:	8b 80 30 01 00 00    	mov    0x130(%eax),%eax
 82ea2dc:	85 c0                	test   %eax,%eax
 82ea2de:	74 19                	je     82ea2f9 <_ZN11pvp_assault13CAssaultPlace19TimeoutCloseAssaultEv+0x171>
 82ea2e0:	8b 45 08             	mov    0x8(%ebp),%eax
 82ea2e3:	8b 80 30 01 00 00    	mov    0x130(%eax),%eax
 82ea2e9:	c7 44 24 04 07 00 00 	movl   $0x7,0x4(%esp)
 82ea2f0:	00 
 82ea2f1:	89 04 24             	mov    %eax,(%esp)
 82ea2f4:	e8 3b b7 fb ff       	call   82a5a34 <_ZN6CParty15SetAssaultStateEc>
 82ea2f9:	8b 45 08             	mov    0x8(%ebp),%eax
 82ea2fc:	c7 80 0c 01 00 00 07 	movl   $0x7,0x10c(%eax)
 82ea303:	00 00 00 
 82ea306:	8b 45 08             	mov    0x8(%ebp),%eax
 82ea309:	89 04 24             	mov    %eax,(%esp)
 82ea30c:	e8 c5 f7 ff ff       	call   82e9ad6 <_ZN11pvp_assault13CAssaultPlace12CloseAssaultEv>
 82ea311:	83 c4 6c             	add    $0x6c,%esp
 82ea314:	5b                   	pop    %ebx
 82ea315:	5e                   	pop    %esi
 82ea316:	5f                   	pop    %edi
 82ea317:	5d                   	pop    %ebp
 82ea318:	c3                   	ret
 82ea319:	90                   	nop

```

```c
// pvp_assault::CAssaultPlace::TimeoutCloseAssault @ 0x82ea188

/* pvp_assault::CAssaultPlace::TimeoutCloseAssault() */

void __thiscall pvp_assault::CAssaultPlace::TimeoutCloseAssault(CAssaultPlace *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  cMyTrace local_2c [28];
  
  uVar2 = CAssaulter::GetCharacName((CAssaulter *)(this + 0xe0));
  uVar3 = CAssaulter::GetCharacName((CAssaulter *)(this + 0xc0));
  uVar4 = CAssaulter::GetCharacName((CAssaulter *)(this + 0xa0));
  uVar5 = CAssaulter::GetCharacName((CAssaulter *)(this + 0x80));
  uVar6 = CAssaulter::GetCharacName((CAssaulter *)(this + 0x60));
  uVar7 = CAssaulter::GetCharacName((CAssaulter *)(this + 0x40));
  uVar8 = CAssaulter::GetCharacName((CAssaulter *)(this + 0x20));
  uVar9 = CAssaulter::GetCharacName((CAssaulter *)this);
  uVar1 = *(undefined4 *)(this + 0x10c);
  cMyTrace::cMyTrace(local_2c,"void pvp_assault::CAssaultPlace::TimeoutCloseAssault()",0x9ea,0);
  cMyTrace::operator()
            (local_2c,"TimeoutCloseAssault() state(%d) %s,%s,%s,%s,%s,%s,%s,%s",uVar1,uVar9,uVar8,
             uVar7,uVar6,uVar5,uVar4,uVar3,uVar2);
  if ((*(int *)(this + 0x10c) == 5) || (*(int *)(this + 0x10c) == 6)) {
    if (*(int *)(this + 300) != 0) {
      CParty::SetAssaultState(*(CParty **)(this + 300),'\a');
    }
    if (*(int *)(this + 0x130) != 0) {
      CParty::SetAssaultState(*(CParty **)(this + 0x130),'\a');
    }
    *(undefined4 *)(this + 0x10c) = 7;
    CloseAssault(this);
  }
  return;
}

```

---

## TimeoutCompleteLoad

```asm
// === 082ea31a pvp_assault::CAssaultPlace::TimeoutCompleteLoad  [0x082ea31a-0x82ea715] ===
 82ea31a:	55                   	push   %ebp
 82ea31b:	89 e5                	mov    %esp,%ebp
 82ea31d:	56                   	push   %esi
 82ea31e:	53                   	push   %ebx
 82ea31f:	83 ec 70             	sub    $0x70,%esp
 82ea322:	8b 45 08             	mov    0x8(%ebp),%eax
 82ea325:	8b 80 0c 01 00 00    	mov    0x10c(%eax),%eax
 82ea32b:	83 f8 02             	cmp    $0x2,%eax
 82ea32e:	74 2c                	je     82ea35c <_ZN11pvp_assault13CAssaultPlace19TimeoutCompleteLoadEv+0x42>
 82ea330:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 82ea337:	e8 c4 b4 43 00       	call   8725800 <__cxa_allocate_exception>
 82ea33c:	89 c2                	mov    %eax,%edx
 82ea33e:	c7 02 13 00 00 00    	movl   $0x13,(%edx)
 82ea344:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82ea34b:	00 
 82ea34c:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 82ea353:	08 
 82ea354:	89 04 24             	mov    %eax,(%esp)
 82ea357:	e8 f4 a8 43 00       	call   8724c50 <__cxa_throw>
 82ea35c:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 82ea363:	e9 bb 02 00 00       	jmp    82ea623 <_ZN11pvp_assault13CAssaultPlace19TimeoutCompleteLoadEv+0x309>
 82ea368:	8b 45 e8             	mov    -0x18(%ebp),%eax
 82ea36b:	c1 e0 05             	shl    $0x5,%eax
 82ea36e:	03 45 08             	add    0x8(%ebp),%eax
 82ea371:	89 04 24             	mov    %eax,(%esp)
 82ea374:	e8 e3 61 00 00       	call   82f055c <_ZN11pvp_assault10CAssaulter5EmptyEv>
 82ea379:	84 c0                	test   %al,%al
 82ea37b:	0f 85 9d 02 00 00    	jne    82ea61e <_ZN11pvp_assault13CAssaultPlace19TimeoutCompleteLoadEv+0x304>
 82ea381:	8b 45 e8             	mov    -0x18(%ebp),%eax
 82ea384:	c1 e0 05             	shl    $0x5,%eax
 82ea387:	03 45 08             	add    0x8(%ebp),%eax
 82ea38a:	89 04 24             	mov    %eax,(%esp)
 82ea38d:	e8 f8 61 00 00       	call   82f058a <_ZN11pvp_assault10CAssaulter8GetStateEv>
 82ea392:	83 f8 02             	cmp    $0x2,%eax
 82ea395:	0f 95 c0             	setne  %al
 82ea398:	84 c0                	test   %al,%al
 82ea39a:	0f 84 7f 02 00 00    	je     82ea61f <_ZN11pvp_assault13CAssaultPlace19TimeoutCompleteLoadEv+0x305>
 82ea3a0:	a1 50 be 40 09       	mov    0x940be50,%eax
 82ea3a5:	89 04 24             	mov    %eax,(%esp)
 82ea3a8:	e8 63 55 19 00       	call   847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>
 82ea3ad:	84 c0                	test   %al,%al
 82ea3af:	0f 84 99 01 00 00    	je     82ea54e <_ZN11pvp_assault13CAssaultPlace19TimeoutCompleteLoadEv+0x234>
 82ea3b5:	a1 50 be 40 09       	mov    0x940be50,%eax
 82ea3ba:	89 04 24             	mov    %eax,(%esp)
 82ea3bd:	e8 44 65 00 00       	call   82f0906 <_ZN13CPowerManager14GetPowerWarLogEv>
 82ea3c2:	89 04 24             	mov    %eax,(%esp)
 82ea3c5:	e8 9a 64 00 00       	call   82f0864 <_ZN12CPowerWarLog28IncLoadingTimeOutCountSecedeEv>
 82ea3ca:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82ea3d1:	00 
 82ea3d2:	c7 44 24 08 18 0a 00 	movl   $0xa18,0x8(%esp)
 82ea3d9:	00 
 82ea3da:	c7 44 24 04 60 d0 c1 	movl   $0x8c1d060,0x4(%esp)
 82ea3e1:	08 
 82ea3e2:	8d 45 a8             	lea    -0x58(%ebp),%eax
 82ea3e5:	89 04 24             	mov    %eax,(%esp)
 82ea3e8:	e8 2b 53 26 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 82ea3ed:	c7 44 24 04 a8 bd c1 	movl   $0x8c1bda8,0x4(%esp)
 82ea3f4:	08 
 82ea3f5:	8d 45 a8             	lea    -0x58(%ebp),%eax
 82ea3f8:	89 04 24             	mov    %eax,(%esp)
 82ea3fb:	e8 88 53 26 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 82ea400:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 82ea407:	e9 e6 00 00 00       	jmp    82ea4f2 <_ZN11pvp_assault13CAssaultPlace19TimeoutCompleteLoadEv+0x1d8>
 82ea40c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82ea40f:	c1 e0 05             	shl    $0x5,%eax
 82ea412:	03 45 08             	add    0x8(%ebp),%eax
 82ea415:	89 04 24             	mov    %eax,(%esp)
 82ea418:	e8 3f 61 00 00       	call   82f055c <_ZN11pvp_assault10CAssaulter5EmptyEv>
 82ea41d:	84 c0                	test   %al,%al
 82ea41f:	0f 85 c8 00 00 00    	jne    82ea4ed <_ZN11pvp_assault13CAssaultPlace19TimeoutCompleteLoadEv+0x1d3>
 82ea425:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82ea428:	c1 e0 05             	shl    $0x5,%eax
 82ea42b:	03 45 08             	add    0x8(%ebp),%eax
 82ea42e:	89 04 24             	mov    %eax,(%esp)
 82ea431:	e8 3a 61 00 00       	call   82f0570 <_ZN11pvp_assault10CAssaulter7GetTeamEv>
 82ea436:	85 c0                	test   %eax,%eax
 82ea438:	0f 94 c0             	sete   %al
 82ea43b:	84 c0                	test   %al,%al
 82ea43d:	74 57                	je     82ea496 <_ZN11pvp_assault13CAssaultPlace19TimeoutCompleteLoadEv+0x17c>
 82ea43f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82ea442:	c1 e0 05             	shl    $0x5,%eax
 82ea445:	03 45 08             	add    0x8(%ebp),%eax
 82ea448:	89 04 24             	mov    %eax,(%esp)
 82ea44b:	e8 f2 60 00 00       	call   82f0542 <_ZN11pvp_assault10CAssaulter7GetUserEv>
 82ea450:	89 04 24             	mov    %eax,(%esp)
 82ea453:	e8 d0 6b e1 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 82ea458:	89 c3                	mov    %eax,%ebx
 82ea45a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82ea461:	00 
 82ea462:	c7 44 24 08 20 0a 00 	movl   $0xa20,0x8(%esp)
 82ea469:	00 
 82ea46a:	c7 44 24 04 60 d0 c1 	movl   $0x8c1d060,0x4(%esp)
 82ea471:	08 
 82ea472:	8d 45 b8             	lea    -0x48(%ebp),%eax
 82ea475:	89 04 24             	mov    %eax,(%esp)
 82ea478:	e8 9b 52 26 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 82ea47d:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 82ea481:	c7 44 24 04 18 bd c1 	movl   $0x8c1bd18,0x4(%esp)
 82ea488:	08 
 82ea489:	8d 45 b8             	lea    -0x48(%ebp),%eax
 82ea48c:	89 04 24             	mov    %eax,(%esp)
 82ea48f:	e8 f4 52 26 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 82ea494:	eb 58                	jmp    82ea4ee <_ZN11pvp_assault13CAssaultPlace19TimeoutCompleteLoadEv+0x1d4>
 82ea496:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82ea499:	c1 e0 05             	shl    $0x5,%eax
 82ea49c:	03 45 08             	add    0x8(%ebp),%eax
 82ea49f:	89 04 24             	mov    %eax,(%esp)
 82ea4a2:	e8 9b 60 00 00       	call   82f0542 <_ZN11pvp_assault10CAssaulter7GetUserEv>
 82ea4a7:	89 04 24             	mov    %eax,(%esp)
 82ea4aa:	e8 79 6b e1 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 82ea4af:	89 c3                	mov    %eax,%ebx
 82ea4b1:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82ea4b8:	00 
 82ea4b9:	c7 44 24 08 22 0a 00 	movl   $0xa22,0x8(%esp)
 82ea4c0:	00 
 82ea4c1:	c7 44 24 04 60 d0 c1 	movl   $0x8c1d060,0x4(%esp)
 82ea4c8:	08 
 82ea4c9:	8d 45 c8             	lea    -0x38(%ebp),%eax
 82ea4cc:	89 04 24             	mov    %eax,(%esp)
 82ea4cf:	e8 44 52 26 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 82ea4d4:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 82ea4d8:	c7 44 24 04 27 bd c1 	movl   $0x8c1bd27,0x4(%esp)
 82ea4df:	08 
 82ea4e0:	8d 45 c8             	lea    -0x38(%ebp),%eax
 82ea4e3:	89 04 24             	mov    %eax,(%esp)
 82ea4e6:	e8 9d 52 26 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 82ea4eb:	eb 01                	jmp    82ea4ee <_ZN11pvp_assault13CAssaultPlace19TimeoutCompleteLoadEv+0x1d4>
 82ea4ed:	90                   	nop
 82ea4ee:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 82ea4f2:	83 7d f0 07          	cmpl   $0x7,-0x10(%ebp)
 82ea4f6:	0f 9e c0             	setle  %al
 82ea4f9:	84 c0                	test   %al,%al
 82ea4fb:	0f 85 0b ff ff ff    	jne    82ea40c <_ZN11pvp_assault13CAssaultPlace19TimeoutCompleteLoadEv+0xf2>
 82ea501:	8b 45 e8             	mov    -0x18(%ebp),%eax
 82ea504:	c1 e0 05             	shl    $0x5,%eax
 82ea507:	03 45 08             	add    0x8(%ebp),%eax
 82ea50a:	89 04 24             	mov    %eax,(%esp)
 82ea50d:	e8 30 60 00 00       	call   82f0542 <_ZN11pvp_assault10CAssaulter7GetUserEv>
 82ea512:	89 c3                	mov    %eax,%ebx
 82ea514:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82ea51b:	00 
 82ea51c:	c7 44 24 08 25 0a 00 	movl   $0xa25,0x8(%esp)
 82ea523:	00 
 82ea524:	c7 44 24 04 60 d0 c1 	movl   $0x8c1d060,0x4(%esp)
 82ea52b:	08 
 82ea52c:	8d 45 d8             	lea    -0x28(%ebp),%eax
 82ea52f:	89 04 24             	mov    %eax,(%esp)
 82ea532:	e8 e1 51 26 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 82ea537:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 82ea53b:	c7 44 24 04 c1 bd c1 	movl   $0x8c1bdc1,0x4(%esp)
 82ea542:	08 
 82ea543:	8d 45 d8             	lea    -0x28(%ebp),%eax
 82ea546:	89 04 24             	mov    %eax,(%esp)
 82ea549:	e8 3a 52 26 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 82ea54e:	8b 45 e8             	mov    -0x18(%ebp),%eax
 82ea551:	c1 e0 05             	shl    $0x5,%eax
 82ea554:	03 45 08             	add    0x8(%ebp),%eax
 82ea557:	89 04 24             	mov    %eax,(%esp)
 82ea55a:	e8 e3 5f 00 00       	call   82f0542 <_ZN11pvp_assault10CAssaulter7GetUserEv>
 82ea55f:	89 45 ec             	mov    %eax,-0x14(%ebp)
 82ea562:	a1 50 be 40 09       	mov    0x940be50,%eax
 82ea567:	89 04 24             	mov    %eax,(%esp)
 82ea56a:	e8 a1 53 19 00       	call   847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>
 82ea56f:	84 c0                	test   %al,%al
 82ea571:	74 16                	je     82ea589 <_ZN11pvp_assault13CAssaultPlace19TimeoutCompleteLoadEv+0x26f>
 82ea573:	8b 45 ec             	mov    -0x14(%ebp),%eax
 82ea576:	89 04 24             	mov    %eax,(%esp)
 82ea579:	e8 e6 af 35 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 82ea57e:	3c 07                	cmp    $0x7,%al
 82ea580:	75 07                	jne    82ea589 <_ZN11pvp_assault13CAssaultPlace19TimeoutCompleteLoadEv+0x26f>
 82ea582:	b8 01 00 00 00       	mov    $0x1,%eax
 82ea587:	eb 05                	jmp    82ea58e <_ZN11pvp_assault13CAssaultPlace19TimeoutCompleteLoadEv+0x274>
 82ea589:	b8 00 00 00 00       	mov    $0x0,%eax
 82ea58e:	84 c0                	test   %al,%al
 82ea590:	0f 84 89 00 00 00    	je     82ea61f <_ZN11pvp_assault13CAssaultPlace19TimeoutCompleteLoadEv+0x305>
 82ea596:	8d 45 9c             	lea    -0x64(%ebp),%eax
 82ea599:	89 04 24             	mov    %eax,(%esp)
 82ea59c:	e8 ab 37 2a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 82ea5a1:	c7 44 24 08 e6 00 00 	movl   $0xe6,0x8(%esp)
 82ea5a8:	00 
 82ea5a9:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82ea5b0:	00 
 82ea5b1:	8d 45 9c             	lea    -0x64(%ebp),%eax
 82ea5b4:	89 04 24             	mov    %eax,(%esp)
 82ea5b7:	e8 40 13 de ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 82ea5bc:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82ea5c3:	00 
 82ea5c4:	8d 45 9c             	lea    -0x64(%ebp),%eax
 82ea5c7:	89 04 24             	mov    %eax,(%esp)
 82ea5ca:	e8 51 13 de ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 82ea5cf:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82ea5d6:	00 
 82ea5d7:	8d 45 9c             	lea    -0x64(%ebp),%eax
 82ea5da:	89 04 24             	mov    %eax,(%esp)
 82ea5dd:	e8 76 13 de ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 82ea5e2:	8d 45 9c             	lea    -0x64(%ebp),%eax
 82ea5e5:	89 44 24 04          	mov    %eax,0x4(%esp)
 82ea5e9:	8b 45 ec             	mov    -0x14(%ebp),%eax
 82ea5ec:	89 04 24             	mov    %eax,(%esp)
 82ea5ef:	e8 c6 df 35 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 82ea5f4:	eb 1b                	jmp    82ea611 <_ZN11pvp_assault13CAssaultPlace19TimeoutCompleteLoadEv+0x2f7>
 82ea5f6:	89 d3                	mov    %edx,%ebx
 82ea5f8:	89 c6                	mov    %eax,%esi
 82ea5fa:	8d 45 9c             	lea    -0x64(%ebp),%eax
 82ea5fd:	89 04 24             	mov    %eax,(%esp)
 82ea600:	e8 7b 38 2a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82ea605:	89 f0                	mov    %esi,%eax
 82ea607:	89 da                	mov    %ebx,%edx
 82ea609:	89 04 24             	mov    %eax,(%esp)
 82ea60c:	e8 3f 91 7f 00       	call   8ae3750 <_Unwind_Resume>
 82ea611:	8d 45 9c             	lea    -0x64(%ebp),%eax
 82ea614:	89 04 24             	mov    %eax,(%esp)
 82ea617:	e8 64 38 2a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82ea61c:	eb 01                	jmp    82ea61f <_ZN11pvp_assault13CAssaultPlace19TimeoutCompleteLoadEv+0x305>
 82ea61e:	90                   	nop
 82ea61f:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 82ea623:	83 7d e8 07          	cmpl   $0x7,-0x18(%ebp)
 82ea627:	0f 9e c0             	setle  %al
 82ea62a:	84 c0                	test   %al,%al
 82ea62c:	0f 85 36 fd ff ff    	jne    82ea368 <_ZN11pvp_assault13CAssaultPlace19TimeoutCompleteLoadEv+0x4e>
 82ea632:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 82ea639:	eb 6c                	jmp    82ea6a7 <_ZN11pvp_assault13CAssaultPlace19TimeoutCompleteLoadEv+0x38d>
 82ea63b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82ea63e:	c1 e0 05             	shl    $0x5,%eax
 82ea641:	03 45 08             	add    0x8(%ebp),%eax
 82ea644:	89 04 24             	mov    %eax,(%esp)
 82ea647:	e8 10 5f 00 00       	call   82f055c <_ZN11pvp_assault10CAssaulter5EmptyEv>
 82ea64c:	84 c0                	test   %al,%al
 82ea64e:	75 52                	jne    82ea6a2 <_ZN11pvp_assault13CAssaultPlace19TimeoutCompleteLoadEv+0x388>
 82ea650:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82ea653:	c1 e0 05             	shl    $0x5,%eax
 82ea656:	03 45 08             	add    0x8(%ebp),%eax
 82ea659:	89 04 24             	mov    %eax,(%esp)
 82ea65c:	e8 29 5f 00 00       	call   82f058a <_ZN11pvp_assault10CAssaulter8GetStateEv>
 82ea661:	83 f8 02             	cmp    $0x2,%eax
 82ea664:	0f 95 c0             	setne  %al
 82ea667:	84 c0                	test   %al,%al
 82ea669:	74 38                	je     82ea6a3 <_ZN11pvp_assault13CAssaultPlace19TimeoutCompleteLoadEv+0x389>
 82ea66b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82ea672:	00 
 82ea673:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 82ea67a:	00 
 82ea67b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82ea67e:	89 44 24 04          	mov    %eax,0x4(%esp)
 82ea682:	8b 45 08             	mov    0x8(%ebp),%eax
 82ea685:	89 04 24             	mov    %eax,(%esp)
 82ea688:	e8 dd 06 00 00       	call   82ead6a <_ZN11pvp_assault13CAssaultPlace17LeaveAssaultPlaceEibb>
 82ea68d:	8b 45 08             	mov    0x8(%ebp),%eax
 82ea690:	8b 80 0c 01 00 00    	mov    0x10c(%eax),%eax
 82ea696:	83 f8 06             	cmp    $0x6,%eax
 82ea699:	75 08                	jne    82ea6a3 <_ZN11pvp_assault13CAssaultPlace19TimeoutCompleteLoadEv+0x389>
 82ea69b:	b8 00 00 00 00       	mov    $0x0,%eax
 82ea6a0:	eb 6c                	jmp    82ea70e <_ZN11pvp_assault13CAssaultPlace19TimeoutCompleteLoadEv+0x3f4>
 82ea6a2:	90                   	nop
 82ea6a3:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 82ea6a7:	83 7d f4 07          	cmpl   $0x7,-0xc(%ebp)
 82ea6ab:	0f 9e c0             	setle  %al
 82ea6ae:	84 c0                	test   %al,%al
 82ea6b0:	75 89                	jne    82ea63b <_ZN11pvp_assault13CAssaultPlace19TimeoutCompleteLoadEv+0x321>
 82ea6b2:	8b 45 08             	mov    0x8(%ebp),%eax
 82ea6b5:	89 04 24             	mov    %eax,(%esp)
 82ea6b8:	e8 3d eb ff ff       	call   82e91fa <_ZN11pvp_assault13CAssaultPlace12DoConnectP2PEv>
 82ea6bd:	8b 45 08             	mov    0x8(%ebp),%eax
 82ea6c0:	8b 80 2c 01 00 00    	mov    0x12c(%eax),%eax
 82ea6c6:	85 c0                	test   %eax,%eax
 82ea6c8:	74 19                	je     82ea6e3 <_ZN11pvp_assault13CAssaultPlace19TimeoutCompleteLoadEv+0x3c9>
 82ea6ca:	8b 45 08             	mov    0x8(%ebp),%eax
 82ea6cd:	8b 80 2c 01 00 00    	mov    0x12c(%eax),%eax
 82ea6d3:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 82ea6da:	00 
 82ea6db:	89 04 24             	mov    %eax,(%esp)
 82ea6de:	e8 51 b3 fb ff       	call   82a5a34 <_ZN6CParty15SetAssaultStateEc>
 82ea6e3:	8b 45 08             	mov    0x8(%ebp),%eax
 82ea6e6:	8b 80 30 01 00 00    	mov    0x130(%eax),%eax
 82ea6ec:	85 c0                	test   %eax,%eax
 82ea6ee:	74 19                	je     82ea709 <_ZN11pvp_assault13CAssaultPlace19TimeoutCompleteLoadEv+0x3ef>
 82ea6f0:	8b 45 08             	mov    0x8(%ebp),%eax
 82ea6f3:	8b 80 30 01 00 00    	mov    0x130(%eax),%eax
 82ea6f9:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 82ea700:	00 
 82ea701:	89 04 24             	mov    %eax,(%esp)
 82ea704:	e8 2b b3 fb ff       	call   82a5a34 <_ZN6CParty15SetAssaultStateEc>
 82ea709:	b8 01 00 00 00       	mov    $0x1,%eax
 82ea70e:	83 c4 70             	add    $0x70,%esp
 82ea711:	5b                   	pop    %ebx
 82ea712:	5e                   	pop    %esi
 82ea713:	5d                   	pop    %ebp
 82ea714:	c3                   	ret
 82ea715:	90                   	nop

```

```c
// pvp_assault::CAssaultPlace::TimeoutCompleteLoad @ 0x82ea31a

/* pvp_assault::CAssaultPlace::TimeoutCompleteLoad() */

undefined4 __thiscall pvp_assault::CAssaultPlace::TimeoutCompleteLoad(CAssaultPlace *this)

{
  bool bVar1;
  char cVar2;
  undefined4 *puVar3;
  CPowerWarLog *this_00;
  CUserCharacInfo *pCVar4;
  undefined4 uVar5;
  int iVar6;
  PacketGuard local_68 [12];
  cMyTrace local_5c [16];
  cMyTrace local_4c [16];
  cMyTrace local_3c [16];
  cMyTrace local_2c [16];
  int local_1c;
  CUserCharacInfo *local_18;
  int local_14;
  int local_10;
  
  if (*(int *)(this + 0x10c) != 2) {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x13;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&ENUM_ERROR::typeinfo,0);
  }
  for (local_1c = 0; local_1c < 8; local_1c = local_1c + 1) {
    cVar2 = CAssaulter::Empty((CAssaulter *)(this + local_1c * 0x20));
    if ((cVar2 == '\0') &&
       (iVar6 = CAssaulter::GetState((CAssaulter *)(this + local_1c * 0x20)), iVar6 != 2)) {
      cVar2 = CPowerManager::IsPowerWarEventOn();
      if (cVar2 != '\0') {
        this_00 = (CPowerWarLog *)CPowerManager::GetPowerWarLog(GlobalData::s_power_manager);
        CPowerWarLog::IncLoadingTimeOutCountSecede(this_00);
        cMyTrace::cMyTrace(local_5c,"bool pvp_assault::CAssaultPlace::TimeoutCompleteLoad()",0xa18,0
                          );
        cMyTrace::operator()(local_5c,"POWER WAR LOADING SECEDE");
        for (local_14 = 0; local_14 < 8; local_14 = local_14 + 1) {
          cVar2 = CAssaulter::Empty((CAssaulter *)(this + local_14 * 0x20));
          if (cVar2 == '\0') {
            iVar6 = CAssaulter::GetTeam((CAssaulter *)(this + local_14 * 0x20));
            if (iVar6 == 0) {
              pCVar4 = (CUserCharacInfo *)
                       CAssaulter::GetUser((CAssaulter *)(this + local_14 * 0x20));
              uVar5 = CUserCharacInfo::getCurCharacName(pCVar4);
              cMyTrace::cMyTrace(local_4c,"bool pvp_assault::CAssaultPlace::TimeoutCompleteLoad()",
                                 0xa20,0);
              cMyTrace::operator()(local_4c,"BLUE TEAM : %s",uVar5);
            }
            else {
              pCVar4 = (CUserCharacInfo *)
                       CAssaulter::GetUser((CAssaulter *)(this + local_14 * 0x20));
              uVar5 = CUserCharacInfo::getCurCharacName(pCVar4);
              cMyTrace::cMyTrace(local_3c,"bool pvp_assault::CAssaultPlace::TimeoutCompleteLoad()",
                                 0xa22,0);
              cMyTrace::operator()(local_3c,"RED TEAM : %s",uVar5);
            }
          }
        }
        uVar5 = CAssaulter::GetUser((CAssaulter *)(this + local_1c * 0x20));
        cMyTrace::cMyTrace(local_2c,"bool pvp_assault::CAssaultPlace::TimeoutCompleteLoad()",0xa25,0
                          );
        cMyTrace::operator()(local_2c,"SECEDE : %s",uVar5);
      }
      local_18 = (CUserCharacInfo *)CAssaulter::GetUser((CAssaulter *)(this + local_1c * 0x20));
      cVar2 = CPowerManager::IsPowerWarEventOn();
      if ((cVar2 == '\0') || (cVar2 = CUserCharacInfo::getCurCharacVill(local_18), cVar2 != '\a')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        PacketGuard::PacketGuard(local_68);
                    /* try { // try from 082ea5b7 to 082ea5f3 has its CatchHandler @ 082ea5f6 */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_68,0,0xe6);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_68,1);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_68,true);
        CUser::Send((CUser *)local_18,local_68);
        PacketGuard::~PacketGuard(local_68);
      }
    }
  }
  local_10 = 0;
  while( true ) {
    if (7 < local_10) {
      DoConnectP2P(this);
      if (*(int *)(this + 300) != 0) {
        CParty::SetAssaultState(*(CParty **)(this + 300),'\x03');
      }
      if (*(int *)(this + 0x130) != 0) {
        CParty::SetAssaultState(*(CParty **)(this + 0x130),'\x03');
      }
      return 1;
    }
    cVar2 = CAssaulter::Empty((CAssaulter *)(this + local_10 * 0x20));
    if (((cVar2 == '\0') &&
        (iVar6 = CAssaulter::GetState((CAssaulter *)(this + local_10 * 0x20)), iVar6 != 2)) &&
       (LeaveAssaultPlace(this,local_10,true,false), *(int *)(this + 0x10c) == 6)) break;
    local_10 = local_10 + 1;
  }
  return 0;
}

```

---

## TimeoutConnectP2P

```asm
// === 082ea716 pvp_assault::CAssaultPlace::TimeoutConnectP2P  [0x082ea716-0x82eab19] ===
 82ea716:	55                   	push   %ebp
 82ea717:	89 e5                	mov    %esp,%ebp
 82ea719:	56                   	push   %esi
 82ea71a:	53                   	push   %ebx
 82ea71b:	83 ec 70             	sub    $0x70,%esp
 82ea71e:	8b 45 08             	mov    0x8(%ebp),%eax
 82ea721:	8b 80 0c 01 00 00    	mov    0x10c(%eax),%eax
 82ea727:	83 f8 03             	cmp    $0x3,%eax
 82ea72a:	74 2c                	je     82ea758 <_ZN11pvp_assault13CAssaultPlace17TimeoutConnectP2PEv+0x42>
 82ea72c:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 82ea733:	e8 c8 b0 43 00       	call   8725800 <__cxa_allocate_exception>
 82ea738:	89 c2                	mov    %eax,%edx
 82ea73a:	c7 02 13 00 00 00    	movl   $0x13,(%edx)
 82ea740:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82ea747:	00 
 82ea748:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 82ea74f:	08 
 82ea750:	89 04 24             	mov    %eax,(%esp)
 82ea753:	e8 f8 a4 43 00       	call   8724c50 <__cxa_throw>
 82ea758:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 82ea75f:	e9 bb 02 00 00       	jmp    82eaa1f <_ZN11pvp_assault13CAssaultPlace17TimeoutConnectP2PEv+0x309>
 82ea764:	8b 45 e8             	mov    -0x18(%ebp),%eax
 82ea767:	c1 e0 05             	shl    $0x5,%eax
 82ea76a:	03 45 08             	add    0x8(%ebp),%eax
 82ea76d:	89 04 24             	mov    %eax,(%esp)
 82ea770:	e8 e7 5d 00 00       	call   82f055c <_ZN11pvp_assault10CAssaulter5EmptyEv>
 82ea775:	84 c0                	test   %al,%al
 82ea777:	0f 85 9d 02 00 00    	jne    82eaa1a <_ZN11pvp_assault13CAssaultPlace17TimeoutConnectP2PEv+0x304>
 82ea77d:	8b 45 e8             	mov    -0x18(%ebp),%eax
 82ea780:	c1 e0 05             	shl    $0x5,%eax
 82ea783:	03 45 08             	add    0x8(%ebp),%eax
 82ea786:	89 04 24             	mov    %eax,(%esp)
 82ea789:	e8 fc 5d 00 00       	call   82f058a <_ZN11pvp_assault10CAssaulter8GetStateEv>
 82ea78e:	83 f8 04             	cmp    $0x4,%eax
 82ea791:	0f 95 c0             	setne  %al
 82ea794:	84 c0                	test   %al,%al
 82ea796:	0f 84 7f 02 00 00    	je     82eaa1b <_ZN11pvp_assault13CAssaultPlace17TimeoutConnectP2PEv+0x305>
 82ea79c:	a1 50 be 40 09       	mov    0x940be50,%eax
 82ea7a1:	89 04 24             	mov    %eax,(%esp)
 82ea7a4:	e8 67 51 19 00       	call   847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>
 82ea7a9:	84 c0                	test   %al,%al
 82ea7ab:	0f 84 99 01 00 00    	je     82ea94a <_ZN11pvp_assault13CAssaultPlace17TimeoutConnectP2PEv+0x234>
 82ea7b1:	a1 50 be 40 09       	mov    0x940be50,%eax
 82ea7b6:	89 04 24             	mov    %eax,(%esp)
 82ea7b9:	e8 48 61 00 00       	call   82f0906 <_ZN13CPowerManager14GetPowerWarLogEv>
 82ea7be:	89 04 24             	mov    %eax,(%esp)
 82ea7c1:	e8 b2 60 00 00       	call   82f0878 <_ZN12CPowerWarLog24IncP2PTimeOutCountSecedeEv>
 82ea7c6:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82ea7cd:	00 
 82ea7ce:	c7 44 24 08 80 0a 00 	movl   $0xa80,0x8(%esp)
 82ea7d5:	00 
 82ea7d6:	c7 44 24 04 20 d0 c1 	movl   $0x8c1d020,0x4(%esp)
 82ea7dd:	08 
 82ea7de:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 82ea7e1:	89 04 24             	mov    %eax,(%esp)
 82ea7e4:	e8 2f 4f 26 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 82ea7e9:	c7 44 24 04 cd bd c1 	movl   $0x8c1bdcd,0x4(%esp)
 82ea7f0:	08 
 82ea7f1:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 82ea7f4:	89 04 24             	mov    %eax,(%esp)
 82ea7f7:	e8 8c 4f 26 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 82ea7fc:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 82ea803:	e9 e6 00 00 00       	jmp    82ea8ee <_ZN11pvp_assault13CAssaultPlace17TimeoutConnectP2PEv+0x1d8>
 82ea808:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82ea80b:	c1 e0 05             	shl    $0x5,%eax
 82ea80e:	03 45 08             	add    0x8(%ebp),%eax
 82ea811:	89 04 24             	mov    %eax,(%esp)
 82ea814:	e8 43 5d 00 00       	call   82f055c <_ZN11pvp_assault10CAssaulter5EmptyEv>
 82ea819:	84 c0                	test   %al,%al
 82ea81b:	0f 85 c8 00 00 00    	jne    82ea8e9 <_ZN11pvp_assault13CAssaultPlace17TimeoutConnectP2PEv+0x1d3>
 82ea821:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82ea824:	c1 e0 05             	shl    $0x5,%eax
 82ea827:	03 45 08             	add    0x8(%ebp),%eax
 82ea82a:	89 04 24             	mov    %eax,(%esp)
 82ea82d:	e8 3e 5d 00 00       	call   82f0570 <_ZN11pvp_assault10CAssaulter7GetTeamEv>
 82ea832:	85 c0                	test   %eax,%eax
 82ea834:	0f 94 c0             	sete   %al
 82ea837:	84 c0                	test   %al,%al
 82ea839:	74 57                	je     82ea892 <_ZN11pvp_assault13CAssaultPlace17TimeoutConnectP2PEv+0x17c>
 82ea83b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82ea83e:	c1 e0 05             	shl    $0x5,%eax
 82ea841:	03 45 08             	add    0x8(%ebp),%eax
 82ea844:	89 04 24             	mov    %eax,(%esp)
 82ea847:	e8 f6 5c 00 00       	call   82f0542 <_ZN11pvp_assault10CAssaulter7GetUserEv>
 82ea84c:	89 04 24             	mov    %eax,(%esp)
 82ea84f:	e8 d4 67 e1 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 82ea854:	89 c3                	mov    %eax,%ebx
 82ea856:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82ea85d:	00 
 82ea85e:	c7 44 24 08 88 0a 00 	movl   $0xa88,0x8(%esp)
 82ea865:	00 
 82ea866:	c7 44 24 04 20 d0 c1 	movl   $0x8c1d020,0x4(%esp)
 82ea86d:	08 
 82ea86e:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 82ea871:	89 04 24             	mov    %eax,(%esp)
 82ea874:	e8 9f 4e 26 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 82ea879:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 82ea87d:	c7 44 24 04 18 bd c1 	movl   $0x8c1bd18,0x4(%esp)
 82ea884:	08 
 82ea885:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 82ea888:	89 04 24             	mov    %eax,(%esp)
 82ea88b:	e8 f8 4e 26 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 82ea890:	eb 58                	jmp    82ea8ea <_ZN11pvp_assault13CAssaultPlace17TimeoutConnectP2PEv+0x1d4>
 82ea892:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82ea895:	c1 e0 05             	shl    $0x5,%eax
 82ea898:	03 45 08             	add    0x8(%ebp),%eax
 82ea89b:	89 04 24             	mov    %eax,(%esp)
 82ea89e:	e8 9f 5c 00 00       	call   82f0542 <_ZN11pvp_assault10CAssaulter7GetUserEv>
 82ea8a3:	89 04 24             	mov    %eax,(%esp)
 82ea8a6:	e8 7d 67 e1 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 82ea8ab:	89 c3                	mov    %eax,%ebx
 82ea8ad:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82ea8b4:	00 
 82ea8b5:	c7 44 24 08 8a 0a 00 	movl   $0xa8a,0x8(%esp)
 82ea8bc:	00 
 82ea8bd:	c7 44 24 04 20 d0 c1 	movl   $0x8c1d020,0x4(%esp)
 82ea8c4:	08 
 82ea8c5:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 82ea8c8:	89 04 24             	mov    %eax,(%esp)
 82ea8cb:	e8 48 4e 26 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 82ea8d0:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 82ea8d4:	c7 44 24 04 27 bd c1 	movl   $0x8c1bd27,0x4(%esp)
 82ea8db:	08 
 82ea8dc:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 82ea8df:	89 04 24             	mov    %eax,(%esp)
 82ea8e2:	e8 a1 4e 26 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 82ea8e7:	eb 01                	jmp    82ea8ea <_ZN11pvp_assault13CAssaultPlace17TimeoutConnectP2PEv+0x1d4>
 82ea8e9:	90                   	nop
 82ea8ea:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 82ea8ee:	83 7d f0 07          	cmpl   $0x7,-0x10(%ebp)
 82ea8f2:	0f 9e c0             	setle  %al
 82ea8f5:	84 c0                	test   %al,%al
 82ea8f7:	0f 85 0b ff ff ff    	jne    82ea808 <_ZN11pvp_assault13CAssaultPlace17TimeoutConnectP2PEv+0xf2>
 82ea8fd:	8b 45 e8             	mov    -0x18(%ebp),%eax
 82ea900:	c1 e0 05             	shl    $0x5,%eax
 82ea903:	03 45 08             	add    0x8(%ebp),%eax
 82ea906:	89 04 24             	mov    %eax,(%esp)
 82ea909:	e8 34 5c 00 00       	call   82f0542 <_ZN11pvp_assault10CAssaulter7GetUserEv>
 82ea90e:	89 c3                	mov    %eax,%ebx
 82ea910:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82ea917:	00 
 82ea918:	c7 44 24 08 8d 0a 00 	movl   $0xa8d,0x8(%esp)
 82ea91f:	00 
 82ea920:	c7 44 24 04 20 d0 c1 	movl   $0x8c1d020,0x4(%esp)
 82ea927:	08 
 82ea928:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 82ea92b:	89 04 24             	mov    %eax,(%esp)
 82ea92e:	e8 e5 4d 26 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 82ea933:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 82ea937:	c7 44 24 04 c1 bd c1 	movl   $0x8c1bdc1,0x4(%esp)
 82ea93e:	08 
 82ea93f:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 82ea942:	89 04 24             	mov    %eax,(%esp)
 82ea945:	e8 3e 4e 26 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 82ea94a:	8b 45 e8             	mov    -0x18(%ebp),%eax
 82ea94d:	c1 e0 05             	shl    $0x5,%eax
 82ea950:	03 45 08             	add    0x8(%ebp),%eax
 82ea953:	89 04 24             	mov    %eax,(%esp)
 82ea956:	e8 e7 5b 00 00       	call   82f0542 <_ZN11pvp_assault10CAssaulter7GetUserEv>
 82ea95b:	89 45 ec             	mov    %eax,-0x14(%ebp)
 82ea95e:	a1 50 be 40 09       	mov    0x940be50,%eax
 82ea963:	89 04 24             	mov    %eax,(%esp)
 82ea966:	e8 a5 4f 19 00       	call   847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>
 82ea96b:	84 c0                	test   %al,%al
 82ea96d:	74 16                	je     82ea985 <_ZN11pvp_assault13CAssaultPlace17TimeoutConnectP2PEv+0x26f>
 82ea96f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 82ea972:	89 04 24             	mov    %eax,(%esp)
 82ea975:	e8 ea ab 35 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 82ea97a:	3c 07                	cmp    $0x7,%al
 82ea97c:	75 07                	jne    82ea985 <_ZN11pvp_assault13CAssaultPlace17TimeoutConnectP2PEv+0x26f>
 82ea97e:	b8 01 00 00 00       	mov    $0x1,%eax
 82ea983:	eb 05                	jmp    82ea98a <_ZN11pvp_assault13CAssaultPlace17TimeoutConnectP2PEv+0x274>
 82ea985:	b8 00 00 00 00       	mov    $0x0,%eax
 82ea98a:	84 c0                	test   %al,%al
 82ea98c:	0f 84 89 00 00 00    	je     82eaa1b <_ZN11pvp_assault13CAssaultPlace17TimeoutConnectP2PEv+0x305>
 82ea992:	8d 45 98             	lea    -0x68(%ebp),%eax
 82ea995:	89 04 24             	mov    %eax,(%esp)
 82ea998:	e8 af 33 2a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 82ea99d:	c7 44 24 08 e6 00 00 	movl   $0xe6,0x8(%esp)
 82ea9a4:	00 
 82ea9a5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82ea9ac:	00 
 82ea9ad:	8d 45 98             	lea    -0x68(%ebp),%eax
 82ea9b0:	89 04 24             	mov    %eax,(%esp)
 82ea9b3:	e8 44 0f de ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 82ea9b8:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 82ea9bf:	00 
 82ea9c0:	8d 45 98             	lea    -0x68(%ebp),%eax
 82ea9c3:	89 04 24             	mov    %eax,(%esp)
 82ea9c6:	e8 55 0f de ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 82ea9cb:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82ea9d2:	00 
 82ea9d3:	8d 45 98             	lea    -0x68(%ebp),%eax
 82ea9d6:	89 04 24             	mov    %eax,(%esp)
 82ea9d9:	e8 7a 0f de ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 82ea9de:	8d 45 98             	lea    -0x68(%ebp),%eax
 82ea9e1:	89 44 24 04          	mov    %eax,0x4(%esp)
 82ea9e5:	8b 45 ec             	mov    -0x14(%ebp),%eax
 82ea9e8:	89 04 24             	mov    %eax,(%esp)
 82ea9eb:	e8 ca db 35 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 82ea9f0:	eb 1b                	jmp    82eaa0d <_ZN11pvp_assault13CAssaultPlace17TimeoutConnectP2PEv+0x2f7>
 82ea9f2:	89 d3                	mov    %edx,%ebx
 82ea9f4:	89 c6                	mov    %eax,%esi
 82ea9f6:	8d 45 98             	lea    -0x68(%ebp),%eax
 82ea9f9:	89 04 24             	mov    %eax,(%esp)
 82ea9fc:	e8 7f 34 2a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82eaa01:	89 f0                	mov    %esi,%eax
 82eaa03:	89 da                	mov    %ebx,%edx
 82eaa05:	89 04 24             	mov    %eax,(%esp)
 82eaa08:	e8 43 8d 7f 00       	call   8ae3750 <_Unwind_Resume>
 82eaa0d:	8d 45 98             	lea    -0x68(%ebp),%eax
 82eaa10:	89 04 24             	mov    %eax,(%esp)
 82eaa13:	e8 68 34 2a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82eaa18:	eb 01                	jmp    82eaa1b <_ZN11pvp_assault13CAssaultPlace17TimeoutConnectP2PEv+0x305>
 82eaa1a:	90                   	nop
 82eaa1b:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 82eaa1f:	83 7d e8 07          	cmpl   $0x7,-0x18(%ebp)
 82eaa23:	0f 9e c0             	setle  %al
 82eaa26:	84 c0                	test   %al,%al
 82eaa28:	0f 85 36 fd ff ff    	jne    82ea764 <_ZN11pvp_assault13CAssaultPlace17TimeoutConnectP2PEv+0x4e>
 82eaa2e:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 82eaa35:	eb 6c                	jmp    82eaaa3 <_ZN11pvp_assault13CAssaultPlace17TimeoutConnectP2PEv+0x38d>
 82eaa37:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82eaa3a:	c1 e0 05             	shl    $0x5,%eax
 82eaa3d:	03 45 08             	add    0x8(%ebp),%eax
 82eaa40:	89 04 24             	mov    %eax,(%esp)
 82eaa43:	e8 14 5b 00 00       	call   82f055c <_ZN11pvp_assault10CAssaulter5EmptyEv>
 82eaa48:	84 c0                	test   %al,%al
 82eaa4a:	75 52                	jne    82eaa9e <_ZN11pvp_assault13CAssaultPlace17TimeoutConnectP2PEv+0x388>
 82eaa4c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82eaa4f:	c1 e0 05             	shl    $0x5,%eax
 82eaa52:	03 45 08             	add    0x8(%ebp),%eax
 82eaa55:	89 04 24             	mov    %eax,(%esp)
 82eaa58:	e8 2d 5b 00 00       	call   82f058a <_ZN11pvp_assault10CAssaulter8GetStateEv>
 82eaa5d:	83 f8 04             	cmp    $0x4,%eax
 82eaa60:	0f 95 c0             	setne  %al
 82eaa63:	84 c0                	test   %al,%al
 82eaa65:	74 38                	je     82eaa9f <_ZN11pvp_assault13CAssaultPlace17TimeoutConnectP2PEv+0x389>
 82eaa67:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82eaa6e:	00 
 82eaa6f:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 82eaa76:	00 
 82eaa77:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82eaa7a:	89 44 24 04          	mov    %eax,0x4(%esp)
 82eaa7e:	8b 45 08             	mov    0x8(%ebp),%eax
 82eaa81:	89 04 24             	mov    %eax,(%esp)
 82eaa84:	e8 e1 02 00 00       	call   82ead6a <_ZN11pvp_assault13CAssaultPlace17LeaveAssaultPlaceEibb>
 82eaa89:	8b 45 08             	mov    0x8(%ebp),%eax
 82eaa8c:	8b 80 0c 01 00 00    	mov    0x10c(%eax),%eax
 82eaa92:	83 f8 06             	cmp    $0x6,%eax
 82eaa95:	75 08                	jne    82eaa9f <_ZN11pvp_assault13CAssaultPlace17TimeoutConnectP2PEv+0x389>
 82eaa97:	b8 00 00 00 00       	mov    $0x0,%eax
 82eaa9c:	eb 74                	jmp    82eab12 <_ZN11pvp_assault13CAssaultPlace17TimeoutConnectP2PEv+0x3fc>
 82eaa9e:	90                   	nop
 82eaa9f:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 82eaaa3:	83 7d f4 07          	cmpl   $0x7,-0xc(%ebp)
 82eaaa7:	0f 9e c0             	setle  %al
 82eaaaa:	84 c0                	test   %al,%al
 82eaaac:	75 89                	jne    82eaa37 <_ZN11pvp_assault13CAssaultPlace17TimeoutConnectP2PEv+0x321>
 82eaaae:	8b 45 08             	mov    0x8(%ebp),%eax
 82eaab1:	89 04 24             	mov    %eax,(%esp)
 82eaab4:	e8 49 ea ff ff       	call   82e9502 <_ZN11pvp_assault13CAssaultPlace12StartAssaultEv>
 82eaab9:	88 45 e7             	mov    %al,-0x19(%ebp)
 82eaabc:	80 7d e7 00          	cmpb   $0x0,-0x19(%ebp)
 82eaac0:	74 4c                	je     82eab0e <_ZN11pvp_assault13CAssaultPlace17TimeoutConnectP2PEv+0x3f8>
 82eaac2:	8b 45 08             	mov    0x8(%ebp),%eax
 82eaac5:	8b 80 2c 01 00 00    	mov    0x12c(%eax),%eax
 82eaacb:	85 c0                	test   %eax,%eax
 82eaacd:	74 19                	je     82eaae8 <_ZN11pvp_assault13CAssaultPlace17TimeoutConnectP2PEv+0x3d2>
 82eaacf:	8b 45 08             	mov    0x8(%ebp),%eax
 82eaad2:	8b 80 2c 01 00 00    	mov    0x12c(%eax),%eax
 82eaad8:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 82eaadf:	00 
 82eaae0:	89 04 24             	mov    %eax,(%esp)
 82eaae3:	e8 4c af fb ff       	call   82a5a34 <_ZN6CParty15SetAssaultStateEc>
 82eaae8:	8b 45 08             	mov    0x8(%ebp),%eax
 82eaaeb:	8b 80 30 01 00 00    	mov    0x130(%eax),%eax
 82eaaf1:	85 c0                	test   %eax,%eax
 82eaaf3:	74 19                	je     82eab0e <_ZN11pvp_assault13CAssaultPlace17TimeoutConnectP2PEv+0x3f8>
 82eaaf5:	8b 45 08             	mov    0x8(%ebp),%eax
 82eaaf8:	8b 80 30 01 00 00    	mov    0x130(%eax),%eax
 82eaafe:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 82eab05:	00 
 82eab06:	89 04 24             	mov    %eax,(%esp)
 82eab09:	e8 26 af fb ff       	call   82a5a34 <_ZN6CParty15SetAssaultStateEc>
 82eab0e:	0f b6 45 e7          	movzbl -0x19(%ebp),%eax
 82eab12:	83 c4 70             	add    $0x70,%esp
 82eab15:	5b                   	pop    %ebx
 82eab16:	5e                   	pop    %esi
 82eab17:	5d                   	pop    %ebp
 82eab18:	c3                   	ret
 82eab19:	90                   	nop

```

```c
// pvp_assault::CAssaultPlace::TimeoutConnectP2P @ 0x82ea716

/* pvp_assault::CAssaultPlace::TimeoutConnectP2P() */

char __thiscall pvp_assault::CAssaultPlace::TimeoutConnectP2P(CAssaultPlace *this)

{
  bool bVar1;
  char cVar2;
  undefined4 *puVar3;
  CPowerWarLog *this_00;
  CUserCharacInfo *pCVar4;
  undefined4 uVar5;
  int iVar6;
  PacketGuard local_6c [12];
  cMyTrace local_60 [16];
  cMyTrace local_50 [16];
  cMyTrace local_40 [16];
  cMyTrace local_30 [19];
  char local_1d;
  int local_1c;
  CUserCharacInfo *local_18;
  int local_14;
  int local_10;
  
  if (*(int *)(this + 0x10c) != 3) {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x13;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&ENUM_ERROR::typeinfo,0);
  }
  for (local_1c = 0; local_1c < 8; local_1c = local_1c + 1) {
    cVar2 = CAssaulter::Empty((CAssaulter *)(this + local_1c * 0x20));
    if ((cVar2 == '\0') &&
       (iVar6 = CAssaulter::GetState((CAssaulter *)(this + local_1c * 0x20)), iVar6 != 4)) {
      cVar2 = CPowerManager::IsPowerWarEventOn();
      if (cVar2 != '\0') {
        this_00 = (CPowerWarLog *)CPowerManager::GetPowerWarLog(GlobalData::s_power_manager);
        CPowerWarLog::IncP2PTimeOutCountSecede(this_00);
        cMyTrace::cMyTrace(local_60,"bool pvp_assault::CAssaultPlace::TimeoutConnectP2P()",0xa80,0);
        cMyTrace::operator()(local_60,"POWER WAR P2P SECEDE");
        for (local_14 = 0; local_14 < 8; local_14 = local_14 + 1) {
          cVar2 = CAssaulter::Empty((CAssaulter *)(this + local_14 * 0x20));
          if (cVar2 == '\0') {
            iVar6 = CAssaulter::GetTeam((CAssaulter *)(this + local_14 * 0x20));
            if (iVar6 == 0) {
              pCVar4 = (CUserCharacInfo *)
                       CAssaulter::GetUser((CAssaulter *)(this + local_14 * 0x20));
              uVar5 = CUserCharacInfo::getCurCharacName(pCVar4);
              cMyTrace::cMyTrace(local_50,"bool pvp_assault::CAssaultPlace::TimeoutConnectP2P()",
                                 0xa88,0);
              cMyTrace::operator()(local_50,"BLUE TEAM : %s",uVar5);
            }
            else {
              pCVar4 = (CUserCharacInfo *)
                       CAssaulter::GetUser((CAssaulter *)(this + local_14 * 0x20));
              uVar5 = CUserCharacInfo::getCurCharacName(pCVar4);
              cMyTrace::cMyTrace(local_40,"bool pvp_assault::CAssaultPlace::TimeoutConnectP2P()",
                                 0xa8a,0);
              cMyTrace::operator()(local_40,"RED TEAM : %s",uVar5);
            }
          }
        }
        uVar5 = CAssaulter::GetUser((CAssaulter *)(this + local_1c * 0x20));
        cMyTrace::cMyTrace(local_30,"bool pvp_assault::CAssaultPlace::TimeoutConnectP2P()",0xa8d,0);
        cMyTrace::operator()(local_30,"SECEDE : %s",uVar5);
      }
      local_18 = (CUserCharacInfo *)CAssaulter::GetUser((CAssaulter *)(this + local_1c * 0x20));
      cVar2 = CPowerManager::IsPowerWarEventOn();
      if ((cVar2 == '\0') || (cVar2 = CUserCharacInfo::getCurCharacVill(local_18), cVar2 != '\a')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        PacketGuard::PacketGuard(local_6c);
                    /* try { // try from 082ea9b3 to 082ea9ef has its CatchHandler @ 082ea9f2 */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_6c,0,0xe6);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_6c,2);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_6c,true);
        CUser::Send((CUser *)local_18,local_6c);
        PacketGuard::~PacketGuard(local_6c);
      }
    }
  }
  local_10 = 0;
  while( true ) {
    if (7 < local_10) {
      local_1d = StartAssault(this);
      if (local_1d != '\0') {
        if (*(int *)(this + 300) != 0) {
          CParty::SetAssaultState(*(CParty **)(this + 300),'\x04');
        }
        if (*(int *)(this + 0x130) != 0) {
          CParty::SetAssaultState(*(CParty **)(this + 0x130),'\x04');
        }
      }
      return local_1d;
    }
    cVar2 = CAssaulter::Empty((CAssaulter *)(this + local_10 * 0x20));
    if (((cVar2 == '\0') &&
        (iVar6 = CAssaulter::GetState((CAssaulter *)(this + local_10 * 0x20)), iVar6 != 4)) &&
       (LeaveAssaultPlace(this,local_10,true,false), *(int *)(this + 0x10c) == 6)) break;
    local_10 = local_10 + 1;
  }
  return '\0';
}

```

---

## TimeoutEndAssault

```asm
// === 082ea004 pvp_assault::CAssaultPlace::TimeoutEndAssault  [0x082ea004-0x82ea187] ===
 82ea004:	55                   	push   %ebp
 82ea005:	89 e5                	mov    %esp,%ebp
 82ea007:	57                   	push   %edi
 82ea008:	56                   	push   %esi
 82ea009:	53                   	push   %ebx
 82ea00a:	83 ec 6c             	sub    $0x6c,%esp
 82ea00d:	8b 45 08             	mov    0x8(%ebp),%eax
 82ea010:	05 e0 00 00 00       	add    $0xe0,%eax
 82ea015:	89 04 24             	mov    %eax,(%esp)
 82ea018:	e8 1f c6 ff ff       	call   82e663c <_ZNK11pvp_assault10CAssaulter13GetCharacNameEv>
 82ea01d:	89 45 c0             	mov    %eax,-0x40(%ebp)
 82ea020:	8b 45 08             	mov    0x8(%ebp),%eax
 82ea023:	05 c0 00 00 00       	add    $0xc0,%eax
 82ea028:	89 04 24             	mov    %eax,(%esp)
 82ea02b:	e8 0c c6 ff ff       	call   82e663c <_ZNK11pvp_assault10CAssaulter13GetCharacNameEv>
 82ea030:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 82ea033:	8b 45 08             	mov    0x8(%ebp),%eax
 82ea036:	05 a0 00 00 00       	add    $0xa0,%eax
 82ea03b:	89 04 24             	mov    %eax,(%esp)
 82ea03e:	e8 f9 c5 ff ff       	call   82e663c <_ZNK11pvp_assault10CAssaulter13GetCharacNameEv>
 82ea043:	89 45 c8             	mov    %eax,-0x38(%ebp)
 82ea046:	8b 45 08             	mov    0x8(%ebp),%eax
 82ea049:	83 e8 80             	sub    $0xffffff80,%eax
 82ea04c:	89 04 24             	mov    %eax,(%esp)
 82ea04f:	e8 e8 c5 ff ff       	call   82e663c <_ZNK11pvp_assault10CAssaulter13GetCharacNameEv>
 82ea054:	89 45 cc             	mov    %eax,-0x34(%ebp)
 82ea057:	8b 45 08             	mov    0x8(%ebp),%eax
 82ea05a:	83 c0 60             	add    $0x60,%eax
 82ea05d:	89 04 24             	mov    %eax,(%esp)
 82ea060:	e8 d7 c5 ff ff       	call   82e663c <_ZNK11pvp_assault10CAssaulter13GetCharacNameEv>
 82ea065:	89 45 d0             	mov    %eax,-0x30(%ebp)
 82ea068:	8b 45 08             	mov    0x8(%ebp),%eax
 82ea06b:	83 c0 40             	add    $0x40,%eax
 82ea06e:	89 04 24             	mov    %eax,(%esp)
 82ea071:	e8 c6 c5 ff ff       	call   82e663c <_ZNK11pvp_assault10CAssaulter13GetCharacNameEv>
 82ea076:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 82ea079:	8b 45 08             	mov    0x8(%ebp),%eax
 82ea07c:	83 c0 20             	add    $0x20,%eax
 82ea07f:	89 04 24             	mov    %eax,(%esp)
 82ea082:	e8 b5 c5 ff ff       	call   82e663c <_ZNK11pvp_assault10CAssaulter13GetCharacNameEv>
 82ea087:	89 c7                	mov    %eax,%edi
 82ea089:	8b 45 08             	mov    0x8(%ebp),%eax
 82ea08c:	89 04 24             	mov    %eax,(%esp)
 82ea08f:	e8 a8 c5 ff ff       	call   82e663c <_ZNK11pvp_assault10CAssaulter13GetCharacNameEv>
 82ea094:	89 c6                	mov    %eax,%esi
 82ea096:	8b 45 08             	mov    0x8(%ebp),%eax
 82ea099:	8b 80 0c 01 00 00    	mov    0x10c(%eax),%eax
 82ea09f:	89 c3                	mov    %eax,%ebx
 82ea0a1:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82ea0a8:	00 
 82ea0a9:	c7 44 24 08 ce 09 00 	movl   $0x9ce,0x8(%esp)
 82ea0b0:	00 
 82ea0b1:	c7 44 24 04 e0 d0 c1 	movl   $0x8c1d0e0,0x4(%esp)
 82ea0b8:	08 
 82ea0b9:	8d 45 d8             	lea    -0x28(%ebp),%eax
 82ea0bc:	89 04 24             	mov    %eax,(%esp)
 82ea0bf:	e8 54 56 26 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 82ea0c4:	8b 45 c0             	mov    -0x40(%ebp),%eax
 82ea0c7:	89 44 24 28          	mov    %eax,0x28(%esp)
 82ea0cb:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 82ea0ce:	89 44 24 24          	mov    %eax,0x24(%esp)
 82ea0d2:	8b 45 c8             	mov    -0x38(%ebp),%eax
 82ea0d5:	89 44 24 20          	mov    %eax,0x20(%esp)
 82ea0d9:	8b 45 cc             	mov    -0x34(%ebp),%eax
 82ea0dc:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 82ea0e0:	8b 45 d0             	mov    -0x30(%ebp),%eax
 82ea0e3:	89 44 24 18          	mov    %eax,0x18(%esp)
 82ea0e7:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 82ea0ea:	89 44 24 14          	mov    %eax,0x14(%esp)
 82ea0ee:	89 7c 24 10          	mov    %edi,0x10(%esp)
 82ea0f2:	89 74 24 0c          	mov    %esi,0xc(%esp)
 82ea0f6:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 82ea0fa:	c7 44 24 04 38 bd c1 	movl   $0x8c1bd38,0x4(%esp)
 82ea101:	08 
 82ea102:	8d 45 d8             	lea    -0x28(%ebp),%eax
 82ea105:	89 04 24             	mov    %eax,(%esp)
 82ea108:	e8 7b 56 26 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 82ea10d:	8b 45 08             	mov    0x8(%ebp),%eax
 82ea110:	8b 80 0c 01 00 00    	mov    0x10c(%eax),%eax
 82ea116:	83 f8 04             	cmp    $0x4,%eax
 82ea119:	75 64                	jne    82ea17f <_ZN11pvp_assault13CAssaultPlace17TimeoutEndAssaultEv+0x17b>
 82ea11b:	8b 45 08             	mov    0x8(%ebp),%eax
 82ea11e:	c7 80 0c 01 00 00 05 	movl   $0x5,0x10c(%eax)
 82ea125:	00 00 00 
 82ea128:	8b 45 08             	mov    0x8(%ebp),%eax
 82ea12b:	8b 80 2c 01 00 00    	mov    0x12c(%eax),%eax
 82ea131:	85 c0                	test   %eax,%eax
 82ea133:	74 19                	je     82ea14e <_ZN11pvp_assault13CAssaultPlace17TimeoutEndAssaultEv+0x14a>
 82ea135:	8b 45 08             	mov    0x8(%ebp),%eax
 82ea138:	8b 80 2c 01 00 00    	mov    0x12c(%eax),%eax
 82ea13e:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 82ea145:	00 
 82ea146:	89 04 24             	mov    %eax,(%esp)
 82ea149:	e8 e6 b8 fb ff       	call   82a5a34 <_ZN6CParty15SetAssaultStateEc>
 82ea14e:	8b 45 08             	mov    0x8(%ebp),%eax
 82ea151:	8b 80 30 01 00 00    	mov    0x130(%eax),%eax
 82ea157:	85 c0                	test   %eax,%eax
 82ea159:	74 19                	je     82ea174 <_ZN11pvp_assault13CAssaultPlace17TimeoutEndAssaultEv+0x170>
 82ea15b:	8b 45 08             	mov    0x8(%ebp),%eax
 82ea15e:	8b 80 30 01 00 00    	mov    0x130(%eax),%eax
 82ea164:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 82ea16b:	00 
 82ea16c:	89 04 24             	mov    %eax,(%esp)
 82ea16f:	e8 c0 b8 fb ff       	call   82a5a34 <_ZN6CParty15SetAssaultStateEc>
 82ea174:	8b 45 08             	mov    0x8(%ebp),%eax
 82ea177:	89 04 24             	mov    %eax,(%esp)
 82ea17a:	e8 23 f8 ff ff       	call   82e99a2 <_ZN11pvp_assault13CAssaultPlace10EndAssaultEv>
 82ea17f:	83 c4 6c             	add    $0x6c,%esp
 82ea182:	5b                   	pop    %ebx
 82ea183:	5e                   	pop    %esi
 82ea184:	5f                   	pop    %edi
 82ea185:	5d                   	pop    %ebp
 82ea186:	c3                   	ret
 82ea187:	90                   	nop

```

```c
// pvp_assault::CAssaultPlace::TimeoutEndAssault @ 0x82ea004

/* pvp_assault::CAssaultPlace::TimeoutEndAssault() */

void __thiscall pvp_assault::CAssaultPlace::TimeoutEndAssault(CAssaultPlace *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  cMyTrace local_2c [28];
  
  uVar2 = CAssaulter::GetCharacName((CAssaulter *)(this + 0xe0));
  uVar3 = CAssaulter::GetCharacName((CAssaulter *)(this + 0xc0));
  uVar4 = CAssaulter::GetCharacName((CAssaulter *)(this + 0xa0));
  uVar5 = CAssaulter::GetCharacName((CAssaulter *)(this + 0x80));
  uVar6 = CAssaulter::GetCharacName((CAssaulter *)(this + 0x60));
  uVar7 = CAssaulter::GetCharacName((CAssaulter *)(this + 0x40));
  uVar8 = CAssaulter::GetCharacName((CAssaulter *)(this + 0x20));
  uVar9 = CAssaulter::GetCharacName((CAssaulter *)this);
  uVar1 = *(undefined4 *)(this + 0x10c);
  cMyTrace::cMyTrace(local_2c,"void pvp_assault::CAssaultPlace::TimeoutEndAssault()",0x9ce,0);
  cMyTrace::operator()
            (local_2c,"TimeoutEndAssault() state(%d) %s,%s,%s,%s,%s,%s,%s,%s",uVar1,uVar9,uVar8,
             uVar7,uVar6,uVar5,uVar4,uVar3,uVar2);
  if (*(int *)(this + 0x10c) == 4) {
    *(undefined4 *)(this + 0x10c) = 5;
    if (*(int *)(this + 300) != 0) {
      CParty::SetAssaultState(*(CParty **)(this + 300),'\x05');
    }
    if (*(int *)(this + 0x130) != 0) {
      CParty::SetAssaultState(*(CParty **)(this + 0x130),'\x05');
    }
    EndAssault(this);
  }
  return;
}

```

---

## _AddTeam

```asm
// === 082e70c8 pvp_assault::CAssaultPlace::_AddTeam  [0x082e70c8-0x82e7161] ===
 82e70c8:	55                   	push   %ebp
 82e70c9:	89 e5                	mov    %esp,%ebp
 82e70cb:	83 ec 28             	sub    $0x28,%esp
 82e70ce:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 82e70d5:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e70d8:	89 04 24             	mov    %eax,(%esp)
 82e70db:	e8 34 32 df ff       	call   80da314 <_ZN5CUser12CheckInPartyEv>
 82e70e0:	84 c0                	test   %al,%al
 82e70e2:	74 0e                	je     82e70f2 <_ZN11pvp_assault13CAssaultPlace8_AddTeamEP5CUser17ENUM_ASSAULT_TEAM+0x2a>
 82e70e4:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e70e7:	89 04 24             	mov    %eax,(%esp)
 82e70ea:	e8 5d e0 36 00       	call   865514c <_ZN5CUser8GetPartyEv>
 82e70ef:	89 45 ec             	mov    %eax,-0x14(%ebp)
 82e70f2:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 82e70f6:	74 4e                	je     82e7146 <_ZN11pvp_assault13CAssaultPlace8_AddTeamEP5CUser17ENUM_ASSAULT_TEAM+0x7e>
 82e70f8:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 82e70ff:	eb 38                	jmp    82e7139 <_ZN11pvp_assault13CAssaultPlace8_AddTeamEP5CUser17ENUM_ASSAULT_TEAM+0x71>
 82e7101:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82e7104:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e7108:	8b 45 ec             	mov    -0x14(%ebp),%eax
 82e710b:	89 04 24             	mov    %eax,(%esp)
 82e710e:	e8 51 e6 e5 ff       	call   8145764 <_ZN6CParty8get_userEi>
 82e7113:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82e7116:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 82e711a:	74 19                	je     82e7135 <_ZN11pvp_assault13CAssaultPlace8_AddTeamEP5CUser17ENUM_ASSAULT_TEAM+0x6d>
 82e711c:	8b 45 10             	mov    0x10(%ebp),%eax
 82e711f:	89 44 24 08          	mov    %eax,0x8(%esp)
 82e7123:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82e7126:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e712a:	8b 45 08             	mov    0x8(%ebp),%eax
 82e712d:	89 04 24             	mov    %eax,(%esp)
 82e7130:	e8 e3 fe ff ff       	call   82e7018 <_ZN11pvp_assault13CAssaultPlace8_AddUserEP5CUser17ENUM_ASSAULT_TEAM>
 82e7135:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 82e7139:	83 7d f0 03          	cmpl   $0x3,-0x10(%ebp)
 82e713d:	0f 9e c0             	setle  %al
 82e7140:	84 c0                	test   %al,%al
 82e7142:	75 bd                	jne    82e7101 <_ZN11pvp_assault13CAssaultPlace8_AddTeamEP5CUser17ENUM_ASSAULT_TEAM+0x39>
 82e7144:	eb 19                	jmp    82e715f <_ZN11pvp_assault13CAssaultPlace8_AddTeamEP5CUser17ENUM_ASSAULT_TEAM+0x97>
 82e7146:	8b 45 10             	mov    0x10(%ebp),%eax
 82e7149:	89 44 24 08          	mov    %eax,0x8(%esp)
 82e714d:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e7150:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e7154:	8b 45 08             	mov    0x8(%ebp),%eax
 82e7157:	89 04 24             	mov    %eax,(%esp)
 82e715a:	e8 b9 fe ff ff       	call   82e7018 <_ZN11pvp_assault13CAssaultPlace8_AddUserEP5CUser17ENUM_ASSAULT_TEAM>
 82e715f:	c9                   	leave
 82e7160:	c3                   	ret
 82e7161:	90                   	nop

```

```c
// pvp_assault::CAssaultPlace::_AddTeam @ 0x82e70c8

/* pvp_assault::CAssaultPlace::_AddTeam(CUser*, ENUM_ASSAULT_TEAM) */

void __thiscall
pvp_assault::CAssaultPlace::_AddTeam(CAssaultPlace *this,CUser *param_1,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = (CParty *)0x0;
  cVar1 = CUser::CheckInParty(param_1);
  if (cVar1 != '\0') {
    local_18 = (CParty *)CUser::GetParty(param_1);
  }
  if (local_18 == (CParty *)0x0) {
    _AddUser(this,param_1,param_3);
  }
  else {
    for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
      iVar2 = CParty::get_user(local_18,local_14);
      if (iVar2 != 0) {
        _AddUser(this,iVar2,param_3);
      }
    }
  }
  return;
}

```

---

## _AddUser

```asm
// === 082e7018 pvp_assault::CAssaultPlace::_AddUser  [0x082e7018-0x82e70c7] ===
 82e7018:	55                   	push   %ebp
 82e7019:	89 e5                	mov    %esp,%ebp
 82e701b:	83 ec 28             	sub    $0x28,%esp
 82e701e:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 82e7025:	eb 6a                	jmp    82e7091 <_ZN11pvp_assault13CAssaultPlace8_AddUserEP5CUser17ENUM_ASSAULT_TEAM+0x79>
 82e7027:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82e702a:	c1 e0 05             	shl    $0x5,%eax
 82e702d:	03 45 08             	add    0x8(%ebp),%eax
 82e7030:	89 04 24             	mov    %eax,(%esp)
 82e7033:	e8 14 95 00 00       	call   82f054c <_ZN11pvp_assault10CAssaulter12IsAttachAbleEv>
 82e7038:	84 c0                	test   %al,%al
 82e703a:	74 51                	je     82e708d <_ZN11pvp_assault13CAssaultPlace8_AddUserEP5CUser17ENUM_ASSAULT_TEAM+0x75>
 82e703c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82e703f:	c1 e0 05             	shl    $0x5,%eax
 82e7042:	03 45 08             	add    0x8(%ebp),%eax
 82e7045:	8b 55 10             	mov    0x10(%ebp),%edx
 82e7048:	89 54 24 08          	mov    %edx,0x8(%esp)
 82e704c:	8b 55 0c             	mov    0xc(%ebp),%edx
 82e704f:	89 54 24 04          	mov    %edx,0x4(%esp)
 82e7053:	89 04 24             	mov    %eax,(%esp)
 82e7056:	e8 8b f7 ff ff       	call   82e67e6 <_ZN11pvp_assault10CAssaulter10AttachUserEP5CUser17ENUM_ASSAULT_TEAM>
 82e705b:	8b 45 08             	mov    0x8(%ebp),%eax
 82e705e:	8b 80 04 01 00 00    	mov    0x104(%eax),%eax
 82e7064:	89 c2                	mov    %eax,%edx
 82e7066:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e7069:	89 54 24 04          	mov    %edx,0x4(%esp)
 82e706d:	89 04 24             	mov    %eax,(%esp)
 82e7070:	e8 05 9a 00 00       	call   82f0a7a <_ZN15CUserCharacInfo15SetAssaultPlaceEi>
 82e7075:	8b 45 08             	mov    0x8(%ebp),%eax
 82e7078:	8b 80 00 01 00 00    	mov    0x100(%eax),%eax
 82e707e:	8d 50 01             	lea    0x1(%eax),%edx
 82e7081:	8b 45 08             	mov    0x8(%ebp),%eax
 82e7084:	89 90 00 01 00 00    	mov    %edx,0x100(%eax)
 82e708a:	90                   	nop
 82e708b:	c9                   	leave
 82e708c:	c3                   	ret
 82e708d:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 82e7091:	83 7d f4 07          	cmpl   $0x7,-0xc(%ebp)
 82e7095:	0f 9e c0             	setle  %al
 82e7098:	84 c0                	test   %al,%al
 82e709a:	75 8b                	jne    82e7027 <_ZN11pvp_assault13CAssaultPlace8_AddUserEP5CUser17ENUM_ASSAULT_TEAM+0xf>
 82e709c:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 82e70a3:	e8 58 e7 43 00       	call   8725800 <__cxa_allocate_exception>
 82e70a8:	89 c2                	mov    %eax,%edx
 82e70aa:	c7 02 04 00 00 00    	movl   $0x4,(%edx)
 82e70b0:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82e70b7:	00 
 82e70b8:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 82e70bf:	08 
 82e70c0:	89 04 24             	mov    %eax,(%esp)
 82e70c3:	e8 88 db 43 00       	call   8724c50 <__cxa_throw>

```

```c
// pvp_assault::CAssaultPlace::_AddUser @ 0x82e7018

/* pvp_assault::CAssaultPlace::_AddUser(CUser*, ENUM_ASSAULT_TEAM) */

void __thiscall
pvp_assault::CAssaultPlace::_AddUser
          (CAssaultPlace *this,CUserCharacInfo *param_1,undefined4 param_3)

{
  char cVar1;
  undefined4 *puVar2;
  int local_10;
  
  local_10 = 0;
  while( true ) {
    if (7 < local_10) {
      puVar2 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar2 = 4;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar2,&ENUM_ERROR::typeinfo,0);
    }
    cVar1 = CAssaulter::IsAttachAble((CAssaulter *)(this + local_10 * 0x20));
    if (cVar1 != '\0') break;
    local_10 = local_10 + 1;
  }
  CAssaulter::AttachUser((CAssaulter *)(this + local_10 * 0x20),param_1,param_3);
  CUserCharacInfo::SetAssaultPlace(param_1,*(int *)(this + 0x104));
  *(int *)(this + 0x100) = *(int *)(this + 0x100) + 1;
  return;
}

```

---

## _AvailableAssault

```asm
// === 082e75ca pvp_assault::CAssaultPlace::_AvailableAssault  [0x082e75ca-0x82e7829] ===
 82e75ca:	55                   	push   %ebp
 82e75cb:	89 e5                	mov    %esp,%ebp
 82e75cd:	83 ec 28             	sub    $0x28,%esp
 82e75d0:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 82e75d7:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e75da:	89 04 24             	mov    %eax,(%esp)
 82e75dd:	e8 32 2d df ff       	call   80da314 <_ZN5CUser12CheckInPartyEv>
 82e75e2:	84 c0                	test   %al,%al
 82e75e4:	74 0e                	je     82e75f4 <_ZN11pvp_assault13CAssaultPlace17_AvailableAssaultEP5CUserRi+0x2a>
 82e75e6:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e75e9:	89 04 24             	mov    %eax,(%esp)
 82e75ec:	e8 5b db 36 00       	call   865514c <_ZN5CUser8GetPartyEv>
 82e75f1:	89 45 ec             	mov    %eax,-0x14(%ebp)
 82e75f4:	c7 45 f0 0f 00 00 00 	movl   $0xf,-0x10(%ebp)
 82e75fb:	a1 50 be 40 09       	mov    0x940be50,%eax
 82e7600:	89 04 24             	mov    %eax,(%esp)
 82e7603:	e8 08 83 19 00       	call   847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>
 82e7608:	84 c0                	test   %al,%al
 82e760a:	74 16                	je     82e7622 <_ZN11pvp_assault13CAssaultPlace17_AvailableAssaultEP5CUserRi+0x58>
 82e760c:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e760f:	89 04 24             	mov    %eax,(%esp)
 82e7612:	e8 4d df 35 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 82e7617:	3c 07                	cmp    $0x7,%al
 82e7619:	75 07                	jne    82e7622 <_ZN11pvp_assault13CAssaultPlace17_AvailableAssaultEP5CUserRi+0x58>
 82e761b:	b8 01 00 00 00       	mov    $0x1,%eax
 82e7620:	eb 05                	jmp    82e7627 <_ZN11pvp_assault13CAssaultPlace17_AvailableAssaultEP5CUserRi+0x5d>
 82e7622:	b8 00 00 00 00       	mov    $0x0,%eax
 82e7627:	84 c0                	test   %al,%al
 82e7629:	74 07                	je     82e7632 <_ZN11pvp_assault13CAssaultPlace17_AvailableAssaultEP5CUserRi+0x68>
 82e762b:	c7 45 f0 0c 00 00 00 	movl   $0xc,-0x10(%ebp)
 82e7632:	8b 45 10             	mov    0x10(%ebp),%eax
 82e7635:	89 44 24 08          	mov    %eax,0x8(%esp)
 82e7639:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82e763c:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e7640:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e7643:	89 04 24             	mov    %eax,(%esp)
 82e7646:	e8 f3 85 36 00       	call   864fc3e <_ZN5CUser19CheckLimitMiniumAgeEiRi>
 82e764b:	83 f0 01             	xor    $0x1,%eax
 82e764e:	84 c0                	test   %al,%al
 82e7650:	74 2c                	je     82e767e <_ZN11pvp_assault13CAssaultPlace17_AvailableAssaultEP5CUserRi+0xb4>
 82e7652:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 82e7659:	e8 a2 e1 43 00       	call   8725800 <__cxa_allocate_exception>
 82e765e:	89 c2                	mov    %eax,%edx
 82e7660:	c7 02 5f 00 00 00    	movl   $0x5f,(%edx)
 82e7666:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82e766d:	00 
 82e766e:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 82e7675:	08 
 82e7676:	89 04 24             	mov    %eax,(%esp)
 82e7679:	e8 d2 d5 43 00       	call   8724c50 <__cxa_throw>
 82e767e:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e7681:	89 04 24             	mov    %eax,(%esp)
 82e7684:	e8 2f 2c df ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 82e7689:	83 f8 1d             	cmp    $0x1d,%eax
 82e768c:	0f 9e c0             	setle  %al
 82e768f:	84 c0                	test   %al,%al
 82e7691:	74 79                	je     82e770c <_ZN11pvp_assault13CAssaultPlace17_AvailableAssaultEP5CUserRi+0x142>
 82e7693:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e7696:	89 04 24             	mov    %eax,(%esp)
 82e7699:	e8 de 2c df ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 82e769e:	0f b7 d0             	movzwl %ax,%edx
 82e76a1:	8b 45 10             	mov    0x10(%ebp),%eax
 82e76a4:	89 10                	mov    %edx,(%eax)
 82e76a6:	8b 45 08             	mov    0x8(%ebp),%eax
 82e76a9:	8b 80 34 01 00 00    	mov    0x134(%eax),%eax
 82e76af:	3b 45 0c             	cmp    0xc(%ebp),%eax
 82e76b2:	75 2c                	jne    82e76e0 <_ZN11pvp_assault13CAssaultPlace17_AvailableAssaultEP5CUserRi+0x116>
 82e76b4:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 82e76bb:	e8 40 e1 43 00       	call   8725800 <__cxa_allocate_exception>
 82e76c0:	89 c2                	mov    %eax,%edx
 82e76c2:	c7 02 0d 00 00 00    	movl   $0xd,(%edx)
 82e76c8:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82e76cf:	00 
 82e76d0:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 82e76d7:	08 
 82e76d8:	89 04 24             	mov    %eax,(%esp)
 82e76db:	e8 70 d5 43 00       	call   8724c50 <__cxa_throw>
 82e76e0:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 82e76e7:	e8 14 e1 43 00       	call   8725800 <__cxa_allocate_exception>
 82e76ec:	89 c2                	mov    %eax,%edx
 82e76ee:	c7 02 0e 00 00 00    	movl   $0xe,(%edx)
 82e76f4:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82e76fb:	00 
 82e76fc:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 82e7703:	08 
 82e7704:	89 04 24             	mov    %eax,(%esp)
 82e7707:	e8 44 d5 43 00       	call   8724c50 <__cxa_throw>
 82e770c:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 82e7710:	0f 84 11 01 00 00    	je     82e7827 <_ZN11pvp_assault13CAssaultPlace17_AvailableAssaultEP5CUserRi+0x25d>
 82e7716:	c7 45 f4 0f 00 00 00 	movl   $0xf,-0xc(%ebp)
 82e771d:	a1 50 be 40 09       	mov    0x940be50,%eax
 82e7722:	89 04 24             	mov    %eax,(%esp)
 82e7725:	e8 e6 81 19 00       	call   847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>
 82e772a:	84 c0                	test   %al,%al
 82e772c:	74 16                	je     82e7744 <_ZN11pvp_assault13CAssaultPlace17_AvailableAssaultEP5CUserRi+0x17a>
 82e772e:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e7731:	89 04 24             	mov    %eax,(%esp)
 82e7734:	e8 2b de 35 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 82e7739:	3c 07                	cmp    $0x7,%al
 82e773b:	75 07                	jne    82e7744 <_ZN11pvp_assault13CAssaultPlace17_AvailableAssaultEP5CUserRi+0x17a>
 82e773d:	b8 01 00 00 00       	mov    $0x1,%eax
 82e7742:	eb 05                	jmp    82e7749 <_ZN11pvp_assault13CAssaultPlace17_AvailableAssaultEP5CUserRi+0x17f>
 82e7744:	b8 00 00 00 00       	mov    $0x0,%eax
 82e7749:	84 c0                	test   %al,%al
 82e774b:	74 07                	je     82e7754 <_ZN11pvp_assault13CAssaultPlace17_AvailableAssaultEP5CUserRi+0x18a>
 82e774d:	c7 45 f4 0c 00 00 00 	movl   $0xc,-0xc(%ebp)
 82e7754:	8b 45 10             	mov    0x10(%ebp),%eax
 82e7757:	89 44 24 08          	mov    %eax,0x8(%esp)
 82e775b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82e775e:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e7762:	8b 45 ec             	mov    -0x14(%ebp),%eax
 82e7765:	89 04 24             	mov    %eax,(%esp)
 82e7768:	e8 a3 2a 2b 00       	call   859a210 <_ZN6CParty20is_limit_minimum_ageEiRi>
 82e776d:	83 f0 01             	xor    $0x1,%eax
 82e7770:	84 c0                	test   %al,%al
 82e7772:	74 2c                	je     82e77a0 <_ZN11pvp_assault13CAssaultPlace17_AvailableAssaultEP5CUserRi+0x1d6>
 82e7774:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 82e777b:	e8 80 e0 43 00       	call   8725800 <__cxa_allocate_exception>
 82e7780:	89 c2                	mov    %eax,%edx
 82e7782:	c7 02 5f 00 00 00    	movl   $0x5f,(%edx)
 82e7788:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82e778f:	00 
 82e7790:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 82e7797:	08 
 82e7798:	89 04 24             	mov    %eax,(%esp)
 82e779b:	e8 b0 d4 43 00       	call   8724c50 <__cxa_throw>
 82e77a0:	8b 45 10             	mov    0x10(%ebp),%eax
 82e77a3:	89 44 24 08          	mov    %eax,0x8(%esp)
 82e77a7:	c7 44 24 04 1e 00 00 	movl   $0x1e,0x4(%esp)
 82e77ae:	00 
 82e77af:	8b 45 ec             	mov    -0x14(%ebp),%eax
 82e77b2:	89 04 24             	mov    %eax,(%esp)
 82e77b5:	e8 cc 2a 2b 00       	call   859a286 <_ZN6CParty22is_limit_minimum_levelEiRi>
 82e77ba:	83 f0 01             	xor    $0x1,%eax
 82e77bd:	84 c0                	test   %al,%al
 82e77bf:	74 66                	je     82e7827 <_ZN11pvp_assault13CAssaultPlace17_AvailableAssaultEP5CUserRi+0x25d>
 82e77c1:	8b 45 08             	mov    0x8(%ebp),%eax
 82e77c4:	8b 80 34 01 00 00    	mov    0x134(%eax),%eax
 82e77ca:	3b 45 0c             	cmp    0xc(%ebp),%eax
 82e77cd:	75 2c                	jne    82e77fb <_ZN11pvp_assault13CAssaultPlace17_AvailableAssaultEP5CUserRi+0x231>
 82e77cf:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 82e77d6:	e8 25 e0 43 00       	call   8725800 <__cxa_allocate_exception>
 82e77db:	89 c2                	mov    %eax,%edx
 82e77dd:	c7 02 fe 00 00 00    	movl   $0xfe,(%edx)
 82e77e3:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82e77ea:	00 
 82e77eb:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 82e77f2:	08 
 82e77f3:	89 04 24             	mov    %eax,(%esp)
 82e77f6:	e8 55 d4 43 00       	call   8724c50 <__cxa_throw>
 82e77fb:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 82e7802:	e8 f9 df 43 00       	call   8725800 <__cxa_allocate_exception>
 82e7807:	89 c2                	mov    %eax,%edx
 82e7809:	c7 02 ff 00 00 00    	movl   $0xff,(%edx)
 82e780f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82e7816:	00 
 82e7817:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 82e781e:	08 
 82e781f:	89 04 24             	mov    %eax,(%esp)
 82e7822:	e8 29 d4 43 00       	call   8724c50 <__cxa_throw>
 82e7827:	c9                   	leave
 82e7828:	c3                   	ret
 82e7829:	90                   	nop

```

```c
// pvp_assault::CAssaultPlace::_AvailableAssault @ 0x82e75ca

/* pvp_assault::CAssaultPlace::_AvailableAssault(CUser*, int&) */

void __thiscall
pvp_assault::CAssaultPlace::_AvailableAssault(CAssaultPlace *this,CUser *param_1,int *param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  CParty *local_18;
  int local_14;
  int local_10;
  
  local_18 = (CParty *)0x0;
  cVar2 = CUser::CheckInParty(param_1);
  if (cVar2 != '\0') {
    local_18 = (CParty *)CUser::GetParty(param_1);
  }
  local_14 = 0xf;
  cVar2 = CPowerManager::IsPowerWarEventOn();
  if ((cVar2 == '\0') ||
     (cVar2 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1), cVar2 != '\a')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    local_14 = 0xc;
  }
  cVar2 = CUser::CheckLimitMiniumAge(param_1,local_14,param_2);
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x5f;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&ENUM_ERROR::typeinfo,0);
  }
  iVar4 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
  if (iVar4 < 0x1e) {
    uVar5 = CUser::get_unique_id(param_1);
    *param_2 = uVar5 & 0xffff;
    if (*(CUser **)(this + 0x134) != param_1) {
      puVar3 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar3 = 0xe;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar3,&ENUM_ERROR::typeinfo,0);
    }
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0xd;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&ENUM_ERROR::typeinfo,0);
  }
  if (local_18 != (CParty *)0x0) {
    local_10 = 0xf;
    cVar2 = CPowerManager::IsPowerWarEventOn();
    if ((cVar2 == '\0') ||
       (cVar2 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1), cVar2 != '\a')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      local_10 = 0xc;
    }
    cVar2 = CParty::is_limit_minimum_age(local_18,local_10,param_2);
    if (cVar2 != '\x01') {
      puVar3 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar3 = 0x5f;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar3,&ENUM_ERROR::typeinfo,0);
    }
    cVar2 = CParty::is_limit_minimum_level(local_18,0x1e,param_2);
    if (cVar2 == '\x01') {
      return;
    }
    if (*(CUser **)(this + 0x134) != param_1) {
      puVar3 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar3 = 0xff;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar3,&ENUM_ERROR::typeinfo,0);
    }
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0xfe;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&ENUM_ERROR::typeinfo,0);
  }
  return;
}

```

---

## _BackupPartyInfo

```asm
// === 082e804a pvp_assault::CAssaultPlace::_BackupPartyInfo  [0x082e804a-0x82e8097] ===
 82e804a:	55                   	push   %ebp
 82e804b:	89 e5                	mov    %esp,%ebp
 82e804d:	83 ec 18             	sub    $0x18,%esp
 82e8050:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 82e8054:	74 20                	je     82e8076 <_ZN11pvp_assault13CAssaultPlace16_BackupPartyInfoEP6CParty17ENUM_ASSAULT_TEAM+0x2c>
 82e8056:	8b 45 10             	mov    0x10(%ebp),%eax
 82e8059:	83 c0 48             	add    $0x48,%eax
 82e805c:	c1 e0 02             	shl    $0x2,%eax
 82e805f:	03 45 08             	add    0x8(%ebp),%eax
 82e8062:	8d 50 0c             	lea    0xc(%eax),%edx
 82e8065:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e8068:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e806c:	89 14 24             	mov    %edx,(%esp)
 82e806f:	e8 88 85 00 00       	call   82f05fc <_ZN11pvp_assault9PartyInfo3SetEP6CParty>
 82e8074:	eb 1f                	jmp    82e8095 <_ZN11pvp_assault13CAssaultPlace16_BackupPartyInfoEP6CParty17ENUM_ASSAULT_TEAM+0x4b>
 82e8076:	8b 45 10             	mov    0x10(%ebp),%eax
 82e8079:	83 c0 48             	add    $0x48,%eax
 82e807c:	c1 e0 02             	shl    $0x2,%eax
 82e807f:	03 45 08             	add    0x8(%ebp),%eax
 82e8082:	83 c0 0c             	add    $0xc,%eax
 82e8085:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82e808c:	00 
 82e808d:	89 04 24             	mov    %eax,(%esp)
 82e8090:	e8 67 85 00 00       	call   82f05fc <_ZN11pvp_assault9PartyInfo3SetEP6CParty>
 82e8095:	c9                   	leave
 82e8096:	c3                   	ret
 82e8097:	90                   	nop

```

```c
// pvp_assault::CAssaultPlace::_BackupPartyInfo @ 0x82e804a

/* pvp_assault::CAssaultPlace::_BackupPartyInfo(CParty*, ENUM_ASSAULT_TEAM) */

void __thiscall
pvp_assault::CAssaultPlace::_BackupPartyInfo(CAssaultPlace *this,CParty *param_1,int param_3)

{
  if (param_1 == (CParty *)0x0) {
    PartyInfo::Set((PartyInfo *)(this + (param_3 + 0x48) * 4 + 0xc),(CParty *)0x0);
  }
  else {
    PartyInfo::Set((PartyInfo *)(this + (param_3 + 0x48) * 4 + 0xc),param_1);
  }
  return;
}

```

---

## _BroadcastRunaway

```asm
// === 082eab7a pvp_assault::CAssaultPlace::_BroadcastRunaway  [0x082eab7a-0x82eacf3] ===
 82eab7a:	55                   	push   %ebp
 82eab7b:	89 e5                	mov    %esp,%ebp
 82eab7d:	57                   	push   %edi
 82eab7e:	56                   	push   %esi
 82eab7f:	53                   	push   %ebx
 82eab80:	81 ec 3c 05 00 00    	sub    $0x53c,%esp
 82eab86:	8d 95 d6 fa ff ff    	lea    -0x52a(%ebp),%edx
 82eab8c:	bb 00 04 00 00       	mov    $0x400,%ebx
 82eab91:	b8 00 00 00 00       	mov    $0x0,%eax
 82eab96:	89 d1                	mov    %edx,%ecx
 82eab98:	83 e1 02             	and    $0x2,%ecx
 82eab9b:	85 c9                	test   %ecx,%ecx
 82eab9d:	74 09                	je     82eaba8 <_ZN11pvp_assault13CAssaultPlace17_BroadcastRunawayEP5CUseri+0x2e>
 82eab9f:	66 89 02             	mov    %ax,(%edx)
 82eaba2:	83 c2 02             	add    $0x2,%edx
 82eaba5:	83 eb 02             	sub    $0x2,%ebx
 82eaba8:	89 d9                	mov    %ebx,%ecx
 82eabaa:	c1 e9 02             	shr    $0x2,%ecx
 82eabad:	89 d7                	mov    %edx,%edi
 82eabaf:	f3 ab                	rep stos %eax,%es:(%edi)
 82eabb1:	89 fa                	mov    %edi,%edx
 82eabb3:	89 d9                	mov    %ebx,%ecx
 82eabb5:	83 e1 02             	and    $0x2,%ecx
 82eabb8:	85 c9                	test   %ecx,%ecx
 82eabba:	74 06                	je     82eabc2 <_ZN11pvp_assault13CAssaultPlace17_BroadcastRunawayEP5CUseri+0x48>
 82eabbc:	66 89 02             	mov    %ax,(%edx)
 82eabbf:	83 c2 02             	add    $0x2,%edx
 82eabc2:	89 d9                	mov    %ebx,%ecx
 82eabc4:	83 e1 01             	and    $0x1,%ecx
 82eabc7:	85 c9                	test   %ecx,%ecx
 82eabc9:	74 05                	je     82eabd0 <_ZN11pvp_assault13CAssaultPlace17_BroadcastRunawayEP5CUseri+0x56>
 82eabcb:	88 02                	mov    %al,(%edx)
 82eabcd:	83 c2 01             	add    $0x1,%edx
 82eabd0:	8b 45 10             	mov    0x10(%ebp),%eax
 82eabd3:	89 44 24 04          	mov    %eax,0x4(%esp)
 82eabd7:	8b 45 08             	mov    0x8(%ebp),%eax
 82eabda:	89 04 24             	mov    %eax,(%esp)
 82eabdd:	e8 d8 07 00 00       	call   82eb3ba <_ZN11pvp_assault13CAssaultPlace24GetAnotherTeamCharacNameEi>
 82eabe2:	89 c6                	mov    %eax,%esi
 82eabe4:	8b 45 0c             	mov    0xc(%ebp),%eax
 82eabe7:	89 04 24             	mov    %eax,(%esp)
 82eabea:	e8 39 64 e1 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 82eabef:	89 c3                	mov    %eax,%ebx
 82eabf1:	e8 a5 15 de ff       	call   80cc19b <_Z14G_CDataManagerv>
 82eabf6:	83 c0 68             	add    $0x68,%eax
 82eabf9:	89 04 24             	mov    %eax,(%esp)
 82eabfc:	e8 f7 57 00 00       	call   82f03f8 <_ZN21ServerParameterScript27getAssaultUserRunawayNoticeEv>
 82eac01:	89 74 24 0c          	mov    %esi,0xc(%esp)
 82eac05:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 82eac09:	89 44 24 04          	mov    %eax,0x4(%esp)
 82eac0d:	8d 85 d6 fa ff ff    	lea    -0x52a(%ebp),%eax
 82eac13:	89 04 24             	mov    %eax,(%esp)
 82eac16:	e8 25 38 d9 ff       	call   807e440 <sprintf@plt>
 82eac1b:	8d 85 d6 fe ff ff    	lea    -0x12a(%ebp),%eax
 82eac21:	89 04 24             	mov    %eax,(%esp)
 82eac24:	e8 57 5b 00 00       	call   82f0780 <_ZN20Packet_Broadcast_MsgC1Ev>
 82eac29:	c7 85 e0 fe ff ff 00 	movl   $0x0,-0x120(%ebp)
 82eac30:	00 00 00 
 82eac33:	8d 85 d6 fa ff ff    	lea    -0x52a(%ebp),%eax
 82eac39:	89 04 24             	mov    %eax,(%esp)
 82eac3c:	e8 6f 37 d9 ff       	call   807e3b0 <strlen@plt>
 82eac41:	88 85 e4 fe ff ff    	mov    %al,-0x11c(%ebp)
 82eac47:	c7 44 24 08 ff 00 00 	movl   $0xff,0x8(%esp)
 82eac4e:	00 
 82eac4f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82eac56:	00 
 82eac57:	8d 85 d6 fe ff ff    	lea    -0x12a(%ebp),%eax
 82eac5d:	83 c0 0f             	add    $0xf,%eax
 82eac60:	89 04 24             	mov    %eax,(%esp)
 82eac63:	e8 58 30 d9 ff       	call   807dcc0 <memset@plt>
 82eac68:	0f b6 85 e4 fe ff ff 	movzbl -0x11c(%ebp),%eax
 82eac6f:	0f b6 c0             	movzbl %al,%eax
 82eac72:	89 44 24 08          	mov    %eax,0x8(%esp)
 82eac76:	8d 85 d6 fa ff ff    	lea    -0x52a(%ebp),%eax
 82eac7c:	89 44 24 04          	mov    %eax,0x4(%esp)
 82eac80:	8d 85 d6 fe ff ff    	lea    -0x12a(%ebp),%eax
 82eac86:	83 c0 0f             	add    $0xf,%eax
 82eac89:	89 04 24             	mov    %eax,(%esp)
 82eac8c:	e8 3f 2c d9 ff       	call   807d8d0 <strncpy@plt>
 82eac91:	0f b6 85 e4 fe ff ff 	movzbl -0x11c(%ebp),%eax
 82eac98:	0f b6 c0             	movzbl %al,%eax
 82eac9b:	83 c0 0f             	add    $0xf,%eax
 82eac9e:	66 89 85 d8 fe ff ff 	mov    %ax,-0x128(%ebp)
 82eaca5:	0f b7 85 d8 fe ff ff 	movzwl -0x128(%ebp),%eax
 82eacac:	0f b7 c0             	movzwl %ax,%eax
 82eacaf:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 82eacb2:	8d 9d d6 fe ff ff    	lea    -0x12a(%ebp),%ebx
 82eacb8:	8b 45 0c             	mov    0xc(%ebp),%eax
 82eacbb:	89 04 24             	mov    %eax,(%esp)
 82eacbe:	e8 cd 0f de ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 82eacc3:	8b 15 28 be 40 09    	mov    0x940be28,%edx
 82eacc9:	89 44 24 04          	mov    %eax,0x4(%esp)
 82eaccd:	89 14 24             	mov    %edx,(%esp)
 82eacd0:	e8 b5 73 e2 ff       	call   811208a <_ZN15CServerProxyMgrI19CMonitorServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 82eacd5:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 82eacd8:	89 54 24 08          	mov    %edx,0x8(%esp)
 82eacdc:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 82eace0:	89 04 24             	mov    %eax,(%esp)
 82eace3:	e8 0c 61 18 00       	call   8470df4 <_ZN19CMonitorServerProxy10SendPacketEPci>
 82eace8:	81 c4 3c 05 00 00    	add    $0x53c,%esp
 82eacee:	5b                   	pop    %ebx
 82eacef:	5e                   	pop    %esi
 82eacf0:	5f                   	pop    %edi
 82eacf1:	5d                   	pop    %ebp
 82eacf2:	c3                   	ret
 82eacf3:	90                   	nop

```

```c
// pvp_assault::CAssaultPlace::_BroadcastRunaway @ 0x82eab7a

/* WARNING: Removing unreachable block (ram,0x082eabcb) */
/* pvp_assault::CAssaultPlace::_BroadcastRunaway(CUser*, int) */

void __thiscall
pvp_assault::CAssaultPlace::_BroadcastRunaway(CAssaultPlace *this,CUser *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  size_t sVar5;
  CMonitorServerProxy *this_00;
  uint uVar6;
  bool bVar7;
  char local_52e [1024];
  Packet_Broadcast_Msg local_12e [2];
  ushort local_12c;
  undefined4 local_124;
  byte local_120;
  char acStack_11f [255];
  uint local_20;
  
  pcVar4 = local_52e;
  uVar6 = 0x400;
  bVar7 = ((uint)pcVar4 & 2) != 0;
  if (bVar7) {
    local_52e[0] = '\0';
    local_52e[1] = '\0';
    pcVar4 = local_52e + 2;
    uVar6 = 0x3fe;
  }
  for (uVar6 = uVar6 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    pcVar4[3] = '\0';
    pcVar4 = pcVar4 + 4;
  }
  if (bVar7) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
  }
  uVar1 = GetAnotherTeamCharacName(this,param_2);
  uVar2 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
  iVar3 = G_CDataManager();
  pcVar4 = (char *)ServerParameterScript::getAssaultUserRunawayNotice
                             ((ServerParameterScript *)(iVar3 + 0x68));
  sprintf(local_52e,pcVar4,uVar2,uVar1);
  Packet_Broadcast_Msg::Packet_Broadcast_Msg(local_12e);
  local_124 = 0;
  sVar5 = strlen(local_52e);
  local_120 = (byte)sVar5;
  memset(acStack_11f,0,0xff);
  strncpy(acStack_11f,local_52e,(uint)local_120);
  local_12c = local_120 + 0xf;
  local_20 = (uint)local_12c;
  uVar1 = CUser::GetServerGroup(param_1);
  this_00 = (CMonitorServerProxy *)
            CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                      (GlobalData::s_monitor_proxy_mgr,uVar1);
  CMonitorServerProxy::SendPacket(this_00,(char *)local_12e,local_20);
  return;
}

```

---

## _ChangeDieState

```asm
// === 082ebaf8 pvp_assault::CAssaultPlace::_ChangeDieState  [0x082ebaf8-0x82ebb9b] ===
 82ebaf8:	55                   	push   %ebp
 82ebaf9:	89 e5                	mov    %esp,%ebp
 82ebafb:	83 ec 18             	sub    $0x18,%esp
 82ebafe:	8b 45 0c             	mov    0xc(%ebp),%eax
 82ebb01:	c1 e0 05             	shl    $0x5,%eax
 82ebb04:	03 45 08             	add    0x8(%ebp),%eax
 82ebb07:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 82ebb0e:	00 
 82ebb0f:	89 04 24             	mov    %eax,(%esp)
 82ebb12:	e8 65 4a 00 00       	call   82f057c <_ZN11pvp_assault10CAssaulter8SetStateENS_18ENUM_ASSAULT_STATEE>
 82ebb17:	a1 30 f7 41 09       	mov    0x941f730,%eax
 82ebb1c:	c7 44 24 04 20 00 00 	movl   $0x20,0x4(%esp)
 82ebb23:	00 
 82ebb24:	89 04 24             	mov    %eax,(%esp)
 82ebb27:	e8 6c 9e e2 ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 82ebb2c:	8b 10                	mov    (%eax),%edx
 82ebb2e:	83 c2 34             	add    $0x34,%edx
 82ebb31:	8b 12                	mov    (%edx),%edx
 82ebb33:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82ebb3a:	00 
 82ebb3b:	89 04 24             	mov    %eax,(%esp)
 82ebb3e:	ff d2                	call   *%edx
 82ebb40:	84 c0                	test   %al,%al
 82ebb42:	75 54                	jne    82ebb98 <_ZN11pvp_assault13CAssaultPlace15_ChangeDieStateEi+0xa0>
 82ebb44:	a1 50 be 40 09       	mov    0x940be50,%eax
 82ebb49:	89 04 24             	mov    %eax,(%esp)
 82ebb4c:	e8 bf 3d 19 00       	call   847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>
 82ebb51:	83 f0 01             	xor    $0x1,%eax
 82ebb54:	84 c0                	test   %al,%al
 82ebb56:	75 1d                	jne    82ebb75 <_ZN11pvp_assault13CAssaultPlace15_ChangeDieStateEi+0x7d>
 82ebb58:	8b 45 0c             	mov    0xc(%ebp),%eax
 82ebb5b:	c1 e0 05             	shl    $0x5,%eax
 82ebb5e:	03 45 08             	add    0x8(%ebp),%eax
 82ebb61:	89 04 24             	mov    %eax,(%esp)
 82ebb64:	e8 d9 49 00 00       	call   82f0542 <_ZN11pvp_assault10CAssaulter7GetUserEv>
 82ebb69:	89 04 24             	mov    %eax,(%esp)
 82ebb6c:	e8 f3 99 35 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 82ebb71:	3c 07                	cmp    $0x7,%al
 82ebb73:	74 07                	je     82ebb7c <_ZN11pvp_assault13CAssaultPlace15_ChangeDieStateEi+0x84>
 82ebb75:	b8 01 00 00 00       	mov    $0x1,%eax
 82ebb7a:	eb 05                	jmp    82ebb81 <_ZN11pvp_assault13CAssaultPlace15_ChangeDieStateEi+0x89>
 82ebb7c:	b8 00 00 00 00       	mov    $0x0,%eax
 82ebb81:	84 c0                	test   %al,%al
 82ebb83:	74 14                	je     82ebb99 <_ZN11pvp_assault13CAssaultPlace15_ChangeDieStateEi+0xa1>
 82ebb85:	8b 45 0c             	mov    0xc(%ebp),%eax
 82ebb88:	c1 e0 05             	shl    $0x5,%eax
 82ebb8b:	03 45 08             	add    0x8(%ebp),%eax
 82ebb8e:	89 04 24             	mov    %eax,(%esp)
 82ebb91:	e8 aa ae ff ff       	call   82e6a40 <_ZN11pvp_assault10CAssaulter7DieUserEv>
 82ebb96:	eb 01                	jmp    82ebb99 <_ZN11pvp_assault13CAssaultPlace15_ChangeDieStateEi+0xa1>
 82ebb98:	90                   	nop
 82ebb99:	c9                   	leave
 82ebb9a:	c3                   	ret
 82ebb9b:	90                   	nop

```

```c
// pvp_assault::CAssaultPlace::_ChangeDieState @ 0x82ebaf8

/* pvp_assault::CAssaultPlace::_ChangeDieState(int) */

void __thiscall pvp_assault::CAssaultPlace::_ChangeDieState(CAssaultPlace *this,int param_1)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  CUserCharacInfo *this_00;
  
  CAssaulter::SetState((CAssaulter *)(this + param_1 * 0x20),6);
  piVar3 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x20);
  cVar2 = (**(code **)(*piVar3 + 0x34))(piVar3,0);
  if (cVar2 != '\0') {
    return;
  }
  cVar2 = CPowerManager::IsPowerWarEventOn();
  if (cVar2 == '\x01') {
    this_00 = (CUserCharacInfo *)CAssaulter::GetUser((CAssaulter *)(this + param_1 * 0x20));
    cVar2 = CUserCharacInfo::getCurCharacVill(this_00);
    if (cVar2 == '\a') {
      bVar1 = false;
      goto LAB_082ebb81;
    }
  }
  bVar1 = true;
LAB_082ebb81:
  if (bVar1) {
    CAssaulter::DieUser((CAssaulter *)(this + param_1 * 0x20));
  }
  return;
}

```

---

## _CheckAssaultable

```asm
// === 082e919a pvp_assault::CAssaultPlace::_CheckAssaultable  [0x082e919a-0x82e91f9] ===
 82e919a:	55                   	push   %ebp
 82e919b:	89 e5                	mov    %esp,%ebp
 82e919d:	83 ec 28             	sub    $0x28,%esp
 82e91a0:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 82e91a7:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 82e91ae:	c7 44 24 08 05 00 00 	movl   $0x5,0x8(%esp)
 82e91b5:	00 
 82e91b6:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82e91b9:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e91bd:	8b 45 08             	mov    0x8(%ebp),%eax
 82e91c0:	89 04 24             	mov    %eax,(%esp)
 82e91c3:	e8 c0 e0 ff ff       	call   82e7288 <_ZN11pvp_assault13CAssaultPlace13_GetTeamCountEPiNS_18ENUM_ASSAULT_STATEE>
 82e91c8:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 82e91cf:	eb 16                	jmp    82e91e7 <_ZN11pvp_assault13CAssaultPlace17_CheckAssaultableEv+0x4d>
 82e91d1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82e91d4:	8b 44 85 ec          	mov    -0x14(%ebp,%eax,4),%eax
 82e91d8:	85 c0                	test   %eax,%eax
 82e91da:	75 07                	jne    82e91e3 <_ZN11pvp_assault13CAssaultPlace17_CheckAssaultableEv+0x49>
 82e91dc:	b8 00 00 00 00       	mov    $0x0,%eax
 82e91e1:	eb 14                	jmp    82e91f7 <_ZN11pvp_assault13CAssaultPlace17_CheckAssaultableEv+0x5d>
 82e91e3:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 82e91e7:	83 7d f4 01          	cmpl   $0x1,-0xc(%ebp)
 82e91eb:	0f 9e c0             	setle  %al
 82e91ee:	84 c0                	test   %al,%al
 82e91f0:	75 df                	jne    82e91d1 <_ZN11pvp_assault13CAssaultPlace17_CheckAssaultableEv+0x37>
 82e91f2:	b8 01 00 00 00       	mov    $0x1,%eax
 82e91f7:	c9                   	leave
 82e91f8:	c3                   	ret
 82e91f9:	90                   	nop

```

```c
// pvp_assault::CAssaultPlace::_CheckAssaultable @ 0x82e919a

/* pvp_assault::CAssaultPlace::_CheckAssaultable() */

undefined4 __thiscall pvp_assault::CAssaultPlace::_CheckAssaultable(CAssaultPlace *this)

{
  int local_18 [5];
  
  local_18[0] = 0;
  local_18[1] = 0;
  _GetTeamCount(this,local_18,5);
  local_18[2] = 0;
  while( true ) {
    if (1 < local_18[2]) {
      return 1;
    }
    if (local_18[local_18[2]] == 0) break;
    local_18[2] = local_18[2] + 1;
  }
  return 0;
}

```

---

## _CheckPlayable

```asm
// === 082e9142 pvp_assault::CAssaultPlace::_CheckPlayable  [0x082e9142-0x82e9199] ===
 82e9142:	55                   	push   %ebp
 82e9143:	89 e5                	mov    %esp,%ebp
 82e9145:	83 ec 28             	sub    $0x28,%esp
 82e9148:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 82e914f:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 82e9156:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82e9159:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e915d:	8b 45 08             	mov    0x8(%ebp),%eax
 82e9160:	89 04 24             	mov    %eax,(%esp)
 82e9163:	e8 ca e0 ff ff       	call   82e7232 <_ZN11pvp_assault13CAssaultPlace13_GetTeamCountEPi>
 82e9168:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 82e916f:	eb 16                	jmp    82e9187 <_ZN11pvp_assault13CAssaultPlace14_CheckPlayableEv+0x45>
 82e9171:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82e9174:	8b 44 85 ec          	mov    -0x14(%ebp,%eax,4),%eax
 82e9178:	85 c0                	test   %eax,%eax
 82e917a:	75 07                	jne    82e9183 <_ZN11pvp_assault13CAssaultPlace14_CheckPlayableEv+0x41>
 82e917c:	b8 00 00 00 00       	mov    $0x0,%eax
 82e9181:	eb 14                	jmp    82e9197 <_ZN11pvp_assault13CAssaultPlace14_CheckPlayableEv+0x55>
 82e9183:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 82e9187:	83 7d f4 01          	cmpl   $0x1,-0xc(%ebp)
 82e918b:	0f 9e c0             	setle  %al
 82e918e:	84 c0                	test   %al,%al
 82e9190:	75 df                	jne    82e9171 <_ZN11pvp_assault13CAssaultPlace14_CheckPlayableEv+0x2f>
 82e9192:	b8 01 00 00 00       	mov    $0x1,%eax
 82e9197:	c9                   	leave
 82e9198:	c3                   	ret
 82e9199:	90                   	nop

```

```c
// pvp_assault::CAssaultPlace::_CheckPlayable @ 0x82e9142

/* pvp_assault::CAssaultPlace::_CheckPlayable() */

undefined4 __thiscall pvp_assault::CAssaultPlace::_CheckPlayable(CAssaultPlace *this)

{
  int local_18 [5];
  
  local_18[0] = 0;
  local_18[1] = 0;
  _GetTeamCount(this,local_18);
  local_18[2] = 0;
  while( true ) {
    if (1 < local_18[2]) {
      return 1;
    }
    if (local_18[local_18[2]] == 0) break;
    local_18[2] = local_18[2] + 1;
  }
  return 0;
}

```

---

## _CheckPowerWarInPlayer

```asm
// === 082e7362 pvp_assault::CAssaultPlace::_CheckPowerWarInPlayer  [0x082e7362-0x82e75c9] ===
 82e7362:	55                   	push   %ebp
 82e7363:	89 e5                	mov    %esp,%ebp
 82e7365:	56                   	push   %esi
 82e7366:	53                   	push   %ebx
 82e7367:	83 ec 30             	sub    $0x30,%esp
 82e736a:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 82e7371:	e9 39 02 00 00       	jmp    82e75af <_ZN11pvp_assault13CAssaultPlace22_CheckPowerWarInPlayerE20ENUM_POWER_SIDE_TYPE30ENUM_POWER_WAR_WINNER_OR_LOSERRiS3_S3_+0x24d>
 82e7376:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82e7379:	c1 e0 05             	shl    $0x5,%eax
 82e737c:	03 45 08             	add    0x8(%ebp),%eax
 82e737f:	89 04 24             	mov    %eax,(%esp)
 82e7382:	e8 d5 91 00 00       	call   82f055c <_ZN11pvp_assault10CAssaulter5EmptyEv>
 82e7387:	84 c0                	test   %al,%al
 82e7389:	0f 85 1b 02 00 00    	jne    82e75aa <_ZN11pvp_assault13CAssaultPlace22_CheckPowerWarInPlayerE20ENUM_POWER_SIDE_TYPE30ENUM_POWER_WAR_WINNER_OR_LOSERRiS3_S3_+0x248>
 82e738f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82e7392:	c1 e0 05             	shl    $0x5,%eax
 82e7395:	03 45 08             	add    0x8(%ebp),%eax
 82e7398:	89 04 24             	mov    %eax,(%esp)
 82e739b:	e8 a2 91 00 00       	call   82f0542 <_ZN11pvp_assault10CAssaulter7GetUserEv>
 82e73a0:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82e73a3:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 82e73a7:	74 16                	je     82e73bf <_ZN11pvp_assault13CAssaultPlace22_CheckPowerWarInPlayerE20ENUM_POWER_SIDE_TYPE30ENUM_POWER_WAR_WINNER_OR_LOSERRiS3_S3_+0x5d>
 82e73a9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82e73ac:	89 04 24             	mov    %eax,(%esp)
 82e73af:	e8 ec 95 00 00       	call   82f09a0 <_ZNK15CUserCharacInfo14isJoinPowerWarEv>
 82e73b4:	84 c0                	test   %al,%al
 82e73b6:	74 07                	je     82e73bf <_ZN11pvp_assault13CAssaultPlace22_CheckPowerWarInPlayerE20ENUM_POWER_SIDE_TYPE30ENUM_POWER_WAR_WINNER_OR_LOSERRiS3_S3_+0x5d>
 82e73b8:	b8 01 00 00 00       	mov    $0x1,%eax
 82e73bd:	eb 05                	jmp    82e73c4 <_ZN11pvp_assault13CAssaultPlace22_CheckPowerWarInPlayerE20ENUM_POWER_SIDE_TYPE30ENUM_POWER_WAR_WINNER_OR_LOSERRiS3_S3_+0x62>
 82e73bf:	b8 00 00 00 00       	mov    $0x0,%eax
 82e73c4:	84 c0                	test   %al,%al
 82e73c6:	0f 84 df 01 00 00    	je     82e75ab <_ZN11pvp_assault13CAssaultPlace22_CheckPowerWarInPlayerE20ENUM_POWER_SIDE_TYPE30ENUM_POWER_WAR_WINNER_OR_LOSERRiS3_S3_+0x249>
 82e73cc:	83 7d 10 01          	cmpl   $0x1,0x10(%ebp)
 82e73d0:	0f 85 b6 00 00 00    	jne    82e748c <_ZN11pvp_assault13CAssaultPlace22_CheckPowerWarInPlayerE20ENUM_POWER_SIDE_TYPE30ENUM_POWER_WAR_WINNER_OR_LOSERRiS3_S3_+0x12a>
 82e73d6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82e73d9:	89 04 24             	mov    %eax,(%esp)
 82e73dc:	e8 e5 88 f4 ff       	call   822fcc6 <_ZN5CUser12getPowerSideEv>
 82e73e1:	0f be d0             	movsbl %al,%edx
 82e73e4:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e73e7:	39 c2                	cmp    %eax,%edx
 82e73e9:	0f 94 c0             	sete   %al
 82e73ec:	84 c0                	test   %al,%al
 82e73ee:	74 66                	je     82e7456 <_ZN11pvp_assault13CAssaultPlace22_CheckPowerWarInPlayerE20ENUM_POWER_SIDE_TYPE30ENUM_POWER_WAR_WINNER_OR_LOSERRiS3_S3_+0xf4>
 82e73f0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82e73f3:	c1 e0 05             	shl    $0x5,%eax
 82e73f6:	03 45 08             	add    0x8(%ebp),%eax
 82e73f9:	89 04 24             	mov    %eax,(%esp)
 82e73fc:	e8 89 91 00 00       	call   82f058a <_ZN11pvp_assault10CAssaulter8GetStateEv>
 82e7401:	83 f8 05             	cmp    $0x5,%eax
 82e7404:	0f 94 c0             	sete   %al
 82e7407:	84 c0                	test   %al,%al
 82e7409:	74 0d                	je     82e7418 <_ZN11pvp_assault13CAssaultPlace22_CheckPowerWarInPlayerE20ENUM_POWER_SIDE_TYPE30ENUM_POWER_WAR_WINNER_OR_LOSERRiS3_S3_+0xb6>
 82e740b:	8b 45 1c             	mov    0x1c(%ebp),%eax
 82e740e:	8b 00                	mov    (%eax),%eax
 82e7410:	8d 50 01             	lea    0x1(%eax),%edx
 82e7413:	8b 45 1c             	mov    0x1c(%ebp),%eax
 82e7416:	89 10                	mov    %edx,(%eax)
 82e7418:	8b 45 14             	mov    0x14(%ebp),%eax
 82e741b:	8b 00                	mov    (%eax),%eax
 82e741d:	8d 50 01             	lea    0x1(%eax),%edx
 82e7420:	8b 45 14             	mov    0x14(%ebp),%eax
 82e7423:	89 10                	mov    %edx,(%eax)
 82e7425:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82e7428:	c1 e0 05             	shl    $0x5,%eax
 82e742b:	03 45 08             	add    0x8(%ebp),%eax
 82e742e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82e7435:	00 
 82e7436:	89 04 24             	mov    %eax,(%esp)
 82e7439:	e8 58 91 00 00       	call   82f0596 <_ZN11pvp_assault10CAssaulter17SetPowerWarWinnerEb>
 82e743e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82e7441:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82e7448:	00 
 82e7449:	89 04 24             	mov    %eax,(%esp)
 82e744c:	e8 0f 97 00 00       	call   82f0b60 <_ZN15CUserCharacInfo22SetCurCharacSuperStateEb>
 82e7451:	e9 e4 00 00 00       	jmp    82e753a <_ZN11pvp_assault13CAssaultPlace22_CheckPowerWarInPlayerE20ENUM_POWER_SIDE_TYPE30ENUM_POWER_WAR_WINNER_OR_LOSERRiS3_S3_+0x1d8>
 82e7456:	8b 45 18             	mov    0x18(%ebp),%eax
 82e7459:	8b 00                	mov    (%eax),%eax
 82e745b:	8d 50 01             	lea    0x1(%eax),%edx
 82e745e:	8b 45 18             	mov    0x18(%ebp),%eax
 82e7461:	89 10                	mov    %edx,(%eax)
 82e7463:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82e7466:	c1 e0 05             	shl    $0x5,%eax
 82e7469:	03 45 08             	add    0x8(%ebp),%eax
 82e746c:	89 04 24             	mov    %eax,(%esp)
 82e746f:	e8 cc f5 ff ff       	call   82e6a40 <_ZN11pvp_assault10CAssaulter7DieUserEv>
 82e7474:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82e7477:	c7 44 24 04 64 00 00 	movl   $0x64,0x4(%esp)
 82e747e:	00 
 82e747f:	89 04 24             	mov    %eax,(%esp)
 82e7482:	e8 3d 95 00 00       	call   82f09c4 <_ZN15CUserCharacInfo13setPowerWarHPEt>
 82e7487:	e9 ae 00 00 00       	jmp    82e753a <_ZN11pvp_assault13CAssaultPlace22_CheckPowerWarInPlayerE20ENUM_POWER_SIDE_TYPE30ENUM_POWER_WAR_WINNER_OR_LOSERRiS3_S3_+0x1d8>
 82e748c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82e748f:	89 04 24             	mov    %eax,(%esp)
 82e7492:	e8 2f 88 f4 ff       	call   822fcc6 <_ZN5CUser12getPowerSideEv>
 82e7497:	0f be d0             	movsbl %al,%edx
 82e749a:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e749d:	39 c2                	cmp    %eax,%edx
 82e749f:	0f 94 c0             	sete   %al
 82e74a2:	84 c0                	test   %al,%al
 82e74a4:	74 33                	je     82e74d9 <_ZN11pvp_assault13CAssaultPlace22_CheckPowerWarInPlayerE20ENUM_POWER_SIDE_TYPE30ENUM_POWER_WAR_WINNER_OR_LOSERRiS3_S3_+0x177>
 82e74a6:	8b 45 18             	mov    0x18(%ebp),%eax
 82e74a9:	8b 00                	mov    (%eax),%eax
 82e74ab:	8d 50 01             	lea    0x1(%eax),%edx
 82e74ae:	8b 45 18             	mov    0x18(%ebp),%eax
 82e74b1:	89 10                	mov    %edx,(%eax)
 82e74b3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82e74b6:	c1 e0 05             	shl    $0x5,%eax
 82e74b9:	03 45 08             	add    0x8(%ebp),%eax
 82e74bc:	89 04 24             	mov    %eax,(%esp)
 82e74bf:	e8 7c f5 ff ff       	call   82e6a40 <_ZN11pvp_assault10CAssaulter7DieUserEv>
 82e74c4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82e74c7:	c7 44 24 04 64 00 00 	movl   $0x64,0x4(%esp)
 82e74ce:	00 
 82e74cf:	89 04 24             	mov    %eax,(%esp)
 82e74d2:	e8 ed 94 00 00       	call   82f09c4 <_ZN15CUserCharacInfo13setPowerWarHPEt>
 82e74d7:	eb 61                	jmp    82e753a <_ZN11pvp_assault13CAssaultPlace22_CheckPowerWarInPlayerE20ENUM_POWER_SIDE_TYPE30ENUM_POWER_WAR_WINNER_OR_LOSERRiS3_S3_+0x1d8>
 82e74d9:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82e74dc:	c1 e0 05             	shl    $0x5,%eax
 82e74df:	03 45 08             	add    0x8(%ebp),%eax
 82e74e2:	89 04 24             	mov    %eax,(%esp)
 82e74e5:	e8 a0 90 00 00       	call   82f058a <_ZN11pvp_assault10CAssaulter8GetStateEv>
 82e74ea:	83 f8 05             	cmp    $0x5,%eax
 82e74ed:	0f 94 c0             	sete   %al
 82e74f0:	84 c0                	test   %al,%al
 82e74f2:	74 0d                	je     82e7501 <_ZN11pvp_assault13CAssaultPlace22_CheckPowerWarInPlayerE20ENUM_POWER_SIDE_TYPE30ENUM_POWER_WAR_WINNER_OR_LOSERRiS3_S3_+0x19f>
 82e74f4:	8b 45 1c             	mov    0x1c(%ebp),%eax
 82e74f7:	8b 00                	mov    (%eax),%eax
 82e74f9:	8d 50 01             	lea    0x1(%eax),%edx
 82e74fc:	8b 45 1c             	mov    0x1c(%ebp),%eax
 82e74ff:	89 10                	mov    %edx,(%eax)
 82e7501:	8b 45 14             	mov    0x14(%ebp),%eax
 82e7504:	8b 00                	mov    (%eax),%eax
 82e7506:	8d 50 01             	lea    0x1(%eax),%edx
 82e7509:	8b 45 14             	mov    0x14(%ebp),%eax
 82e750c:	89 10                	mov    %edx,(%eax)
 82e750e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82e7511:	c1 e0 05             	shl    $0x5,%eax
 82e7514:	03 45 08             	add    0x8(%ebp),%eax
 82e7517:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82e751e:	00 
 82e751f:	89 04 24             	mov    %eax,(%esp)
 82e7522:	e8 6f 90 00 00       	call   82f0596 <_ZN11pvp_assault10CAssaulter17SetPowerWarWinnerEb>
 82e7527:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82e752a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82e7531:	00 
 82e7532:	89 04 24             	mov    %eax,(%esp)
 82e7535:	e8 26 96 00 00       	call   82f0b60 <_ZN15CUserCharacInfo22SetCurCharacSuperStateEb>
 82e753a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82e753d:	89 04 24             	mov    %eax,(%esp)
 82e7540:	e8 07 68 2a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 82e7545:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82e7548:	89 04 24             	mov    %eax,(%esp)
 82e754b:	e8 9e 94 00 00       	call   82f09ee <_ZN15CUserCharacInfo13getPowerWarHPEv>
 82e7550:	0f b7 c0             	movzwl %ax,%eax
 82e7553:	89 44 24 0c          	mov    %eax,0xc(%esp)
 82e7557:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82e755a:	89 44 24 08          	mov    %eax,0x8(%esp)
 82e755e:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82e7561:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e7565:	8b 45 08             	mov    0x8(%ebp),%eax
 82e7568:	89 04 24             	mov    %eax,(%esp)
 82e756b:	e8 30 1b 00 00       	call   82e90a0 <_ZN11pvp_assault13CAssaultPlace13_MakeChangeHpEP11PacketGuardii>
 82e7570:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82e7573:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e7577:	8b 45 08             	mov    0x8(%ebp),%eax
 82e757a:	89 04 24             	mov    %eax,(%esp)
 82e757d:	e8 10 f8 ff ff       	call   82e6d92 <_ZN11pvp_assault13CAssaultPlace17_SendPacketToVillER11PacketGuard>
 82e7582:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82e7585:	89 04 24             	mov    %eax,(%esp)
 82e7588:	e8 f3 68 2a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82e758d:	eb 1c                	jmp    82e75ab <_ZN11pvp_assault13CAssaultPlace22_CheckPowerWarInPlayerE20ENUM_POWER_SIDE_TYPE30ENUM_POWER_WAR_WINNER_OR_LOSERRiS3_S3_+0x249>
 82e758f:	89 d3                	mov    %edx,%ebx
 82e7591:	89 c6                	mov    %eax,%esi
 82e7593:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82e7596:	89 04 24             	mov    %eax,(%esp)
 82e7599:	e8 e2 68 2a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82e759e:	89 f0                	mov    %esi,%eax
 82e75a0:	89 da                	mov    %ebx,%edx
 82e75a2:	89 04 24             	mov    %eax,(%esp)
 82e75a5:	e8 a6 c1 7f 00       	call   8ae3750 <_Unwind_Resume>
 82e75aa:	90                   	nop
 82e75ab:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 82e75af:	83 7d f0 07          	cmpl   $0x7,-0x10(%ebp)
 82e75b3:	0f 9e c0             	setle  %al
 82e75b6:	84 c0                	test   %al,%al
 82e75b8:	0f 85 b8 fd ff ff    	jne    82e7376 <_ZN11pvp_assault13CAssaultPlace22_CheckPowerWarInPlayerE20ENUM_POWER_SIDE_TYPE30ENUM_POWER_WAR_WINNER_OR_LOSERRiS3_S3_+0x14>
 82e75be:	b8 01 00 00 00       	mov    $0x1,%eax
 82e75c3:	83 c4 30             	add    $0x30,%esp
 82e75c6:	5b                   	pop    %ebx
 82e75c7:	5e                   	pop    %esi
 82e75c8:	5d                   	pop    %ebp
 82e75c9:	c3                   	ret

```

```c
// pvp_assault::CAssaultPlace::_CheckPowerWarInPlayer @ 0x82e7362

/* pvp_assault::CAssaultPlace::_CheckPowerWarInPlayer(ENUM_POWER_SIDE_TYPE,
   ENUM_POWER_WAR_WINNER_OR_LOSER, int&, int&, int&) */

undefined4 __thiscall
pvp_assault::CAssaultPlace::_CheckPowerWarInPlayer
          (CAssaultPlace *this,int param_2,int param_3,int *param_4,int *param_5,int *param_6)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  PacketGuard local_20 [12];
  int local_14;
  CUserCharacInfo *local_10;
  
  local_14 = 0;
  do {
    if (7 < local_14) {
      return 1;
    }
    cVar2 = CAssaulter::Empty((CAssaulter *)(this + local_14 * 0x20));
    if (cVar2 == '\0') {
      local_10 = (CUserCharacInfo *)CAssaulter::GetUser((CAssaulter *)(this + local_14 * 0x20));
      if (local_10 == (CUserCharacInfo *)0x0) {
LAB_082e73bf:
        bVar1 = false;
      }
      else {
        cVar2 = CUserCharacInfo::isJoinPowerWar(local_10);
        if (cVar2 == '\0') goto LAB_082e73bf;
        bVar1 = true;
      }
      if (bVar1) {
        if (param_3 == 1) {
          cVar2 = CUser::getPowerSide((CUser *)local_10);
          if (cVar2 == param_2) {
            iVar3 = CAssaulter::GetState((CAssaulter *)(this + local_14 * 0x20));
            if (iVar3 == 5) {
              *param_6 = *param_6 + 1;
            }
            *param_4 = *param_4 + 1;
            CAssaulter::SetPowerWarWinner((CAssaulter *)(this + local_14 * 0x20),true);
            CUserCharacInfo::SetCurCharacSuperState(local_10,true);
          }
          else {
            *param_5 = *param_5 + 1;
            CAssaulter::DieUser((CAssaulter *)(this + local_14 * 0x20));
            CUserCharacInfo::setPowerWarHP(local_10,100);
          }
        }
        else {
          cVar2 = CUser::getPowerSide((CUser *)local_10);
          if (cVar2 == param_2) {
            *param_5 = *param_5 + 1;
            CAssaulter::DieUser((CAssaulter *)(this + local_14 * 0x20));
            CUserCharacInfo::setPowerWarHP(local_10,100);
          }
          else {
            iVar3 = CAssaulter::GetState((CAssaulter *)(this + local_14 * 0x20));
            if (iVar3 == 5) {
              *param_6 = *param_6 + 1;
            }
            *param_4 = *param_4 + 1;
            CAssaulter::SetPowerWarWinner((CAssaulter *)(this + local_14 * 0x20),true);
            CUserCharacInfo::SetCurCharacSuperState(local_10,true);
          }
        }
        PacketGuard::PacketGuard(local_20);
        uVar4 = CUserCharacInfo::getPowerWarHP(local_10);
                    /* try { // try from 082e756b to 082e7581 has its CatchHandler @ 082e758f */
        _MakeChangeHp(this,local_20,local_14,uVar4 & 0xffff);
        _SendPacketToVill(this,local_20);
        PacketGuard::~PacketGuard(local_20);
      }
    }
    local_14 = local_14 + 1;
  } while( true );
}

```

---

## _ClearConnectP2PAbsolute

```asm
// === 082e92c6 pvp_assault::CAssaultPlace::_ClearConnectP2PAbsolute  [0x082e92c6-0x82e9357] ===
 82e92c6:	55                   	push   %ebp
 82e92c7:	89 e5                	mov    %esp,%ebp
 82e92c9:	83 ec 28             	sub    $0x28,%esp
 82e92cc:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 82e92d3:	eb 71                	jmp    82e9346 <_ZN11pvp_assault13CAssaultPlace24_ClearConnectP2PAbsoluteEi+0x80>
 82e92d5:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e92d8:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 82e92db:	74 65                	je     82e9342 <_ZN11pvp_assault13CAssaultPlace24_ClearConnectP2PAbsoluteEi+0x7c>
 82e92dd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82e92e0:	89 44 24 08          	mov    %eax,0x8(%esp)
 82e92e4:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e92e7:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e92eb:	8b 45 08             	mov    0x8(%ebp),%eax
 82e92ee:	89 04 24             	mov    %eax,(%esp)
 82e92f1:	e8 88 ff ff ff       	call   82e927e <_ZN11pvp_assault13CAssaultPlace19_IsCannotConnectP2PEii>
 82e92f6:	84 c0                	test   %al,%al
 82e92f8:	74 48                	je     82e9342 <_ZN11pvp_assault13CAssaultPlace24_ClearConnectP2PAbsoluteEi+0x7c>
 82e92fa:	a1 50 be 40 09       	mov    0x940be50,%eax
 82e92ff:	89 04 24             	mov    %eax,(%esp)
 82e9302:	e8 09 66 19 00       	call   847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>
 82e9307:	84 c0                	test   %al,%al
 82e9309:	74 15                	je     82e9320 <_ZN11pvp_assault13CAssaultPlace24_ClearConnectP2PAbsoluteEi+0x5a>
 82e930b:	a1 50 be 40 09       	mov    0x940be50,%eax
 82e9310:	89 04 24             	mov    %eax,(%esp)
 82e9313:	e8 ee 75 00 00       	call   82f0906 <_ZN13CPowerManager14GetPowerWarLogEv>
 82e9318:	89 04 24             	mov    %eax,(%esp)
 82e931b:	e8 80 75 00 00       	call   82f08a0 <_ZN12CPowerWarLog20IncP2PBadCountSecedeEv>
 82e9320:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82e9327:	00 
 82e9328:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 82e932f:	00 
 82e9330:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82e9333:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e9337:	8b 45 08             	mov    0x8(%ebp),%eax
 82e933a:	89 04 24             	mov    %eax,(%esp)
 82e933d:	e8 28 1a 00 00       	call   82ead6a <_ZN11pvp_assault13CAssaultPlace17LeaveAssaultPlaceEibb>
 82e9342:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 82e9346:	83 7d f4 07          	cmpl   $0x7,-0xc(%ebp)
 82e934a:	0f 9e c0             	setle  %al
 82e934d:	84 c0                	test   %al,%al
 82e934f:	75 84                	jne    82e92d5 <_ZN11pvp_assault13CAssaultPlace24_ClearConnectP2PAbsoluteEi+0xf>
 82e9351:	b8 01 00 00 00       	mov    $0x1,%eax
 82e9356:	c9                   	leave
 82e9357:	c3                   	ret

```

```c
// pvp_assault::CAssaultPlace::_ClearConnectP2PAbsolute @ 0x82e92c6

/* pvp_assault::CAssaultPlace::_ClearConnectP2PAbsolute(int) */

undefined4 __thiscall
pvp_assault::CAssaultPlace::_ClearConnectP2PAbsolute(CAssaultPlace *this,int param_1)

{
  char cVar1;
  CPowerWarLog *this_00;
  undefined4 local_10;
  
  for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
    if (param_1 != local_10) {
      cVar1 = _IsCannotConnectP2P(this,param_1,local_10);
      if (cVar1 != '\0') {
        cVar1 = CPowerManager::IsPowerWarEventOn();
        if (cVar1 != '\0') {
          this_00 = (CPowerWarLog *)CPowerManager::GetPowerWarLog(GlobalData::s_power_manager);
          CPowerWarLog::IncP2PBadCountSecede(this_00);
        }
        LeaveAssaultPlace(this,local_10,true,false);
      }
    }
  }
  return 1;
}

```

---

## _ClearConnectP2PRelative

```asm
// === 082e9358 pvp_assault::CAssaultPlace::_ClearConnectP2PRelative  [0x082e9358-0x82e93bb] ===
 82e9358:	55                   	push   %ebp
 82e9359:	89 e5                	mov    %esp,%ebp
 82e935b:	83 ec 28             	sub    $0x28,%esp
 82e935e:	c7 45 f4 02 00 00 00 	movl   $0x2,-0xc(%ebp)
 82e9365:	eb 42                	jmp    82e93a9 <_ZN11pvp_assault13CAssaultPlace24_ClearConnectP2PRelativeEi+0x51>
 82e9367:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82e936a:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e936e:	8b 45 08             	mov    0x8(%ebp),%eax
 82e9371:	89 04 24             	mov    %eax,(%esp)
 82e9374:	e8 43 00 00 00       	call   82e93bc <_ZN11pvp_assault13CAssaultPlace19_GetConnectP2PPointEi>
 82e9379:	3b 45 0c             	cmp    0xc(%ebp),%eax
 82e937c:	0f 94 c0             	sete   %al
 82e937f:	84 c0                	test   %al,%al
 82e9381:	74 22                	je     82e93a5 <_ZN11pvp_assault13CAssaultPlace24_ClearConnectP2PRelativeEi+0x4d>
 82e9383:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82e938a:	00 
 82e938b:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 82e9392:	00 
 82e9393:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82e9396:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e939a:	8b 45 08             	mov    0x8(%ebp),%eax
 82e939d:	89 04 24             	mov    %eax,(%esp)
 82e93a0:	e8 c5 19 00 00       	call   82ead6a <_ZN11pvp_assault13CAssaultPlace17LeaveAssaultPlaceEibb>
 82e93a5:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 82e93a9:	83 7d f4 07          	cmpl   $0x7,-0xc(%ebp)
 82e93ad:	0f 9e c0             	setle  %al
 82e93b0:	84 c0                	test   %al,%al
 82e93b2:	75 b3                	jne    82e9367 <_ZN11pvp_assault13CAssaultPlace24_ClearConnectP2PRelativeEi+0xf>
 82e93b4:	b8 01 00 00 00       	mov    $0x1,%eax
 82e93b9:	c9                   	leave
 82e93ba:	c3                   	ret
 82e93bb:	90                   	nop

```

```c
// pvp_assault::CAssaultPlace::_ClearConnectP2PRelative @ 0x82e9358

/* pvp_assault::CAssaultPlace::_ClearConnectP2PRelative(int) */

undefined4 __thiscall
pvp_assault::CAssaultPlace::_ClearConnectP2PRelative(CAssaultPlace *this,int param_1)

{
  int iVar1;
  undefined4 local_10;
  
  for (local_10 = 2; local_10 < 8; local_10 = local_10 + 1) {
    iVar1 = _GetConnectP2PPoint(this,local_10);
    if (iVar1 == param_1) {
      LeaveAssaultPlace(this,local_10,true,false);
    }
  }
  return 1;
}

```

---

## _DelUser

```asm
// === 082e6e2c pvp_assault::CAssaultPlace::_DelUser  [0x082e6e2c-0x82e7017] ===
 82e6e2c:	55                   	push   %ebp
 82e6e2d:	89 e5                	mov    %esp,%ebp
 82e6e2f:	53                   	push   %ebx
 82e6e30:	83 ec 34             	sub    $0x34,%esp
 82e6e33:	8b 45 10             	mov    0x10(%ebp),%eax
 82e6e36:	88 45 e4             	mov    %al,-0x1c(%ebp)
 82e6e39:	80 7d e4 00          	cmpb   $0x0,-0x1c(%ebp)
 82e6e3d:	74 3f                	je     82e6e7e <_ZN11pvp_assault13CAssaultPlace8_DelUserEib+0x52>
 82e6e3f:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e6e42:	c1 e0 05             	shl    $0x5,%eax
 82e6e45:	03 45 08             	add    0x8(%ebp),%eax
 82e6e48:	89 04 24             	mov    %eax,(%esp)
 82e6e4b:	e8 3a 97 00 00       	call   82f058a <_ZN11pvp_assault10CAssaulter8GetStateEv>
 82e6e50:	83 f8 04             	cmp    $0x4,%eax
 82e6e53:	0f 9f c0             	setg   %al
 82e6e56:	84 c0                	test   %al,%al
 82e6e58:	74 24                	je     82e6e7e <_ZN11pvp_assault13CAssaultPlace8_DelUserEib+0x52>
 82e6e5a:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e6e5d:	c1 e0 05             	shl    $0x5,%eax
 82e6e60:	03 45 08             	add    0x8(%ebp),%eax
 82e6e63:	89 04 24             	mov    %eax,(%esp)
 82e6e66:	e8 d7 96 00 00       	call   82f0542 <_ZN11pvp_assault10CAssaulter7GetUserEv>
 82e6e6b:	89 c3                	mov    %eax,%ebx
 82e6e6d:	e8 6d da f4 ff       	call   82348df <_ZN19disconnect_detecter29GetInstanceDisconnectDetecterEv>
 82e6e72:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 82e6e76:	89 04 24             	mov    %eax,(%esp)
 82e6e79:	e8 ec b4 18 00       	call   847236a <_ZN19disconnect_detecter19CDisconnectDetecter14UnregisterUserEP5CUser>
 82e6e7e:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e6e81:	c1 e0 05             	shl    $0x5,%eax
 82e6e84:	03 45 08             	add    0x8(%ebp),%eax
 82e6e87:	89 04 24             	mov    %eax,(%esp)
 82e6e8a:	e8 e1 96 00 00       	call   82f0570 <_ZN11pvp_assault10CAssaulter7GetTeamEv>
 82e6e8f:	89 45 e8             	mov    %eax,-0x18(%ebp)
 82e6e92:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e6e95:	c1 e0 05             	shl    $0x5,%eax
 82e6e98:	03 45 08             	add    0x8(%ebp),%eax
 82e6e9b:	89 04 24             	mov    %eax,(%esp)
 82e6e9e:	e8 9f 96 00 00       	call   82f0542 <_ZN11pvp_assault10CAssaulter7GetUserEv>
 82e6ea3:	89 45 ec             	mov    %eax,-0x14(%ebp)
 82e6ea6:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e6ea9:	c1 e0 05             	shl    $0x5,%eax
 82e6eac:	03 45 08             	add    0x8(%ebp),%eax
 82e6eaf:	89 04 24             	mov    %eax,(%esp)
 82e6eb2:	e8 5b f9 ff ff       	call   82e6812 <_ZN11pvp_assault10CAssaulter10DetachUserEv>
 82e6eb7:	8b 45 08             	mov    0x8(%ebp),%eax
 82e6eba:	8b 80 00 01 00 00    	mov    0x100(%eax),%eax
 82e6ec0:	8d 50 ff             	lea    -0x1(%eax),%edx
 82e6ec3:	8b 45 08             	mov    0x8(%ebp),%eax
 82e6ec6:	89 90 00 01 00 00    	mov    %edx,0x100(%eax)
 82e6ecc:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 82e6ed0:	0f 84 3c 01 00 00    	je     82e7012 <_ZN11pvp_assault13CAssaultPlace8_DelUserEib+0x1e6>
 82e6ed6:	8b 45 ec             	mov    -0x14(%ebp),%eax
 82e6ed9:	89 04 24             	mov    %eax,(%esp)
 82e6edc:	e8 51 95 e3 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 82e6ee1:	85 c0                	test   %eax,%eax
 82e6ee3:	0f 95 c0             	setne  %al
 82e6ee6:	84 c0                	test   %al,%al
 82e6ee8:	0f 84 24 01 00 00    	je     82e7012 <_ZN11pvp_assault13CAssaultPlace8_DelUserEib+0x1e6>
 82e6eee:	a1 50 be 40 09       	mov    0x940be50,%eax
 82e6ef3:	89 04 24             	mov    %eax,(%esp)
 82e6ef6:	e8 15 8a 19 00       	call   847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>
 82e6efb:	84 c0                	test   %al,%al
 82e6efd:	74 16                	je     82e6f15 <_ZN11pvp_assault13CAssaultPlace8_DelUserEib+0xe9>
 82e6eff:	8b 45 ec             	mov    -0x14(%ebp),%eax
 82e6f02:	89 04 24             	mov    %eax,(%esp)
 82e6f05:	e8 5a e6 35 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 82e6f0a:	3c 07                	cmp    $0x7,%al
 82e6f0c:	75 07                	jne    82e6f15 <_ZN11pvp_assault13CAssaultPlace8_DelUserEib+0xe9>
 82e6f0e:	b8 01 00 00 00       	mov    $0x1,%eax
 82e6f13:	eb 05                	jmp    82e6f1a <_ZN11pvp_assault13CAssaultPlace8_DelUserEib+0xee>
 82e6f15:	b8 00 00 00 00       	mov    $0x0,%eax
 82e6f1a:	84 c0                	test   %al,%al
 82e6f1c:	75 4b                	jne    82e6f69 <_ZN11pvp_assault13CAssaultPlace8_DelUserEib+0x13d>
 82e6f1e:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 82e6f25:	e8 74 4d de ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 82e6f2a:	8b 55 08             	mov    0x8(%ebp),%edx
 82e6f2d:	8b 92 3c 01 00 00    	mov    0x13c(%edx),%edx
 82e6f33:	29 d0                	sub    %edx,%eax
 82e6f35:	89 c2                	mov    %eax,%edx
 82e6f37:	8b 45 e8             	mov    -0x18(%ebp),%eax
 82e6f3a:	8b 4d 08             	mov    0x8(%ebp),%ecx
 82e6f3d:	0f b6 84 01 20 01 00 	movzbl 0x120(%ecx,%eax,1),%eax
 82e6f44:	00 
 82e6f45:	0f b6 c0             	movzbl %al,%eax
 82e6f48:	8b 4d ec             	mov    -0x14(%ebp),%ecx
 82e6f4b:	81 c1 00 97 07 00    	add    $0x79700,%ecx
 82e6f51:	89 54 24 0c          	mov    %edx,0xc(%esp)
 82e6f55:	89 44 24 08          	mov    %eax,0x8(%esp)
 82e6f59:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 82e6f60:	00 
 82e6f61:	89 0c 24             	mov    %ecx,(%esp)
 82e6f64:	e8 c5 f4 39 00       	call   868642e <_ZN15cUserHistoryLog6EndPvPE23ENUM_PVP_HISTORY_REASONbj>
 82e6f69:	e8 39 34 df ff       	call   80da3a7 <_Z11G_GameWorldv>
 82e6f6e:	8b 55 ec             	mov    -0x14(%ebp),%edx
 82e6f71:	89 54 24 04          	mov    %edx,0x4(%esp)
 82e6f75:	89 04 24             	mov    %eax,(%esp)
 82e6f78:	e8 bb 60 3e 00       	call   86cd038 <_ZN9GameWorld14getUserVillageEP5CUser>
 82e6f7d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 82e6f80:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 82e6f84:	74 51                	je     82e6fd7 <_ZN11pvp_assault13CAssaultPlace8_DelUserEib+0x1ab>
 82e6f86:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82e6f8d:	00 
 82e6f8e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 82e6f91:	89 04 24             	mov    %eax,(%esp)
 82e6f94:	e8 25 a4 39 00       	call   86813be <_ZN5CUser8get_areaEb>
 82e6f99:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e6f9d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82e6fa0:	89 04 24             	mov    %eax,(%esp)
 82e6fa3:	e8 fa cb 3d 00       	call   86c3ba2 <_ZN7Village7getAreaEi>
 82e6fa8:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82e6fab:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 82e6faf:	74 26                	je     82e6fd7 <_ZN11pvp_assault13CAssaultPlace8_DelUserEib+0x1ab>
 82e6fb1:	8b 45 ec             	mov    -0x14(%ebp),%eax
 82e6fb4:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e6fb8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82e6fbb:	89 04 24             	mov    %eax,(%esp)
 82e6fbe:	e8 2f b3 3d 00       	call   86c22f2 <_ZN4Area15send_area_usersEP5CUser>
 82e6fc3:	e8 d8 e0 f4 ff       	call   82350a0 <_ZN11pvp_assault21GetInstanceAssaultMgrEv>
 82e6fc8:	8b 55 ec             	mov    -0x14(%ebp),%edx
 82e6fcb:	89 54 24 04          	mov    %edx,0x4(%esp)
 82e6fcf:	89 04 24             	mov    %eax,(%esp)
 82e6fd2:	e8 39 86 00 00       	call   82ef610 <_ZN11pvp_assault11CAssaultMgr10OnMoveAreaEP5CUser>
 82e6fd7:	a1 74 f7 41 09       	mov    0x941f774,%eax
 82e6fdc:	8b 55 ec             	mov    -0x14(%ebp),%edx
 82e6fdf:	89 54 24 04          	mov    %edx,0x4(%esp)
 82e6fe3:	89 04 24             	mov    %eax,(%esp)
 82e6fe6:	e8 ef 01 3d 00       	call   86b71da <_ZN14village_object17CVillageObjectMgr12on_move_areaEP5CUser>
 82e6feb:	a1 7c f7 41 09       	mov    0x941f77c,%eax
 82e6ff0:	8b 55 ec             	mov    -0x14(%ebp),%edx
 82e6ff3:	89 54 24 04          	mov    %edx,0x4(%esp)
 82e6ff7:	89 04 24             	mov    %eax,(%esp)
 82e6ffa:	e8 bd d5 3c 00       	call   86b45bc <_ZN16village_attacked18CVillageMonsterMgr10OnMoveAreaEP5CUser>
 82e6fff:	8b 45 ec             	mov    -0x14(%ebp),%eax
 82e7002:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82e7009:	00 
 82e700a:	89 04 24             	mov    %eax,(%esp)
 82e700d:	e8 68 9a 00 00       	call   82f0a7a <_ZN15CUserCharacInfo15SetAssaultPlaceEi>
 82e7012:	83 c4 34             	add    $0x34,%esp
 82e7015:	5b                   	pop    %ebx
 82e7016:	5d                   	pop    %ebp
 82e7017:	c3                   	ret

```

```c
// pvp_assault::CAssaultPlace::_DelUser @ 0x82e6e2c

/* pvp_assault::CAssaultPlace::_DelUser(int, bool) */

void __thiscall pvp_assault::CAssaultPlace::_DelUser(CAssaultPlace *this,int param_1,bool param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  CUser *pCVar4;
  CDisconnectDetecter *this_00;
  CUserCharacInfo *this_01;
  int iVar5;
  GameWorld *this_02;
  Village *this_03;
  Area *this_04;
  CAssaultMgr *this_05;
  
  if ((param_2) && (iVar3 = CAssaulter::GetState((CAssaulter *)(this + param_1 * 0x20)), 4 < iVar3))
  {
    pCVar4 = (CUser *)CAssaulter::GetUser((CAssaulter *)(this + param_1 * 0x20));
    this_00 = (CDisconnectDetecter *)disconnect_detecter::GetInstanceDisconnectDetecter();
    disconnect_detecter::CDisconnectDetecter::UnregisterUser(this_00,pCVar4);
  }
  iVar3 = CAssaulter::GetTeam((CAssaulter *)(this + param_1 * 0x20));
  this_01 = (CUserCharacInfo *)CAssaulter::GetUser((CAssaulter *)(this + param_1 * 0x20));
  CAssaulter::DetachUser((CAssaulter *)(this + param_1 * 0x20));
  *(int *)(this + 0x100) = *(int *)(this + 0x100) + -1;
  if (this_01 != (CUserCharacInfo *)0x0) {
    iVar5 = CUserCharacInfo::getCurCharacR(this_01);
    if (iVar5 != 0) {
      cVar2 = CPowerManager::IsPowerWarEventOn();
      if ((cVar2 == '\0') || (cVar2 = CUserCharacInfo::getCurCharacVill(this_01), cVar2 != '\a')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) {
        iVar5 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
        cUserHistoryLog::EndPvP
                  ((cUserHistoryLog *)(this_01 + 0x79700),5,this[iVar3 + 0x120],
                   iVar5 - *(int *)(this + 0x13c));
      }
      this_02 = (GameWorld *)G_GameWorld();
      this_03 = (Village *)GameWorld::getUserVillage(this_02,(CUser *)this_01);
      if (this_03 != (Village *)0x0) {
        iVar3 = CUser::get_area((CUser *)this_01,false);
        this_04 = (Area *)Village::getArea(this_03,iVar3);
        if (this_04 != (Area *)0x0) {
          Area::send_area_users(this_04,(CUser *)this_01);
          this_05 = (CAssaultMgr *)GetInstanceAssaultMgr();
          CAssaultMgr::OnMoveArea(this_05,(CUser *)this_01);
        }
      }
      village_object::CVillageObjectMgr::on_move_area
                (GlobalData::s_villageObjectMgr,(CUser *)this_01);
      village_attacked::CVillageMonsterMgr::OnMoveArea
                (GlobalData::s_villageMonsterMgr,(CUser *)this_01);
      CUserCharacInfo::SetAssaultPlace(this_01,0);
      return;
    }
    return;
  }
  return;
}

```

---

## _DispositionUser

```asm
// === 082e7bbc pvp_assault::CAssaultPlace::_DispositionUser  [0x082e7bbc-0x82e7d09] ===
 82e7bbc:	55                   	push   %ebp
 82e7bbd:	89 e5                	mov    %esp,%ebp
 82e7bbf:	56                   	push   %esi
 82e7bc0:	53                   	push   %ebx
 82e7bc1:	83 ec 50             	sub    $0x50,%esp
 82e7bc4:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 82e7bcb:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 82e7bd2:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82e7bd5:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e7bd9:	8b 45 08             	mov    0x8(%ebp),%eax
 82e7bdc:	89 04 24             	mov    %eax,(%esp)
 82e7bdf:	e8 4e f6 ff ff       	call   82e7232 <_ZN11pvp_assault13CAssaultPlace13_GetTeamCountEPi>
 82e7be4:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82e7be7:	89 44 24 08          	mov    %eax,0x8(%esp)
 82e7beb:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e7bee:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e7bf2:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 82e7bf5:	89 04 24             	mov    %eax,(%esp)
 82e7bf8:	e8 ad e6 ff ff       	call   82e62aa <_ZN11pvp_assault18CStaticDispositionC1EPP5CUserPi>
 82e7bfd:	8b 45 08             	mov    0x8(%ebp),%eax
 82e7c00:	8b b0 1c 01 00 00    	mov    0x11c(%eax),%esi
 82e7c06:	8b 45 08             	mov    0x8(%ebp),%eax
 82e7c09:	8b 98 18 01 00 00    	mov    0x118(%eax),%ebx
 82e7c0f:	e8 93 27 df ff       	call   80da3a7 <_Z11G_GameWorldv>
 82e7c14:	8d 55 c4             	lea    -0x3c(%ebp),%edx
 82e7c17:	89 54 24 0c          	mov    %edx,0xc(%esp)
 82e7c1b:	89 74 24 08          	mov    %esi,0x8(%esp)
 82e7c1f:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 82e7c23:	89 04 24             	mov    %eax,(%esp)
 82e7c26:	e8 8f ca 3d 00       	call   86c46ba <_ZN9GameWorld15get_dispositionEiiPN11pvp_assault12CDispositionE>
 82e7c2b:	83 f0 01             	xor    $0x1,%eax
 82e7c2e:	84 c0                	test   %al,%al
 82e7c30:	74 2c                	je     82e7c5e <_ZN11pvp_assault13CAssaultPlace16_DispositionUserEPP5CUser+0xa2>
 82e7c32:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 82e7c39:	e8 c2 db 43 00       	call   8725800 <__cxa_allocate_exception>
 82e7c3e:	89 c2                	mov    %eax,%edx
 82e7c40:	c7 02 03 00 00 00    	movl   $0x3,(%edx)
 82e7c46:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82e7c4d:	00 
 82e7c4e:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 82e7c55:	08 
 82e7c56:	89 04 24             	mov    %eax,(%esp)
 82e7c59:	e8 f2 cf 43 00       	call   8724c50 <__cxa_throw>
 82e7c5e:	8b 45 08             	mov    0x8(%ebp),%eax
 82e7c61:	8d 90 14 01 00 00    	lea    0x114(%eax),%edx
 82e7c67:	8b 45 08             	mov    0x8(%ebp),%eax
 82e7c6a:	05 10 01 00 00       	add    $0x110,%eax
 82e7c6f:	89 54 24 08          	mov    %edx,0x8(%esp)
 82e7c73:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e7c77:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 82e7c7a:	89 04 24             	mov    %eax,(%esp)
 82e7c7d:	e8 a4 88 00 00       	call   82f0526 <_ZN11pvp_assault18CStaticDisposition12GetFlagPointERiS1_>
 82e7c82:	8b 45 08             	mov    0x8(%ebp),%eax
 82e7c85:	89 04 24             	mov    %eax,(%esp)
 82e7c88:	e8 37 fe ff ff       	call   82e7ac4 <_ZN11pvp_assault13CAssaultPlace14_SendGiveAlarmEv>
 82e7c8d:	8b 45 08             	mov    0x8(%ebp),%eax
 82e7c90:	89 04 24             	mov    %eax,(%esp)
 82e7c93:	e8 80 fc ff ff       	call   82e7918 <_ZN11pvp_assault13CAssaultPlace13_SendUserInfoEv>
 82e7c98:	8b 45 08             	mov    0x8(%ebp),%eax
 82e7c9b:	89 04 24             	mov    %eax,(%esp)
 82e7c9e:	e8 bb fd ff ff       	call   82e7a5e <_ZN11pvp_assault13CAssaultPlace18_SendUserUdpIpPortEv>
 82e7ca3:	8b 45 08             	mov    0x8(%ebp),%eax
 82e7ca6:	8b 90 1c 01 00 00    	mov    0x11c(%eax),%edx
 82e7cac:	8b 45 08             	mov    0x8(%ebp),%eax
 82e7caf:	8b 80 18 01 00 00    	mov    0x118(%eax),%eax
 82e7cb5:	89 54 24 0c          	mov    %edx,0xc(%esp)
 82e7cb9:	89 44 24 08          	mov    %eax,0x8(%esp)
 82e7cbd:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 82e7cc0:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e7cc4:	8b 45 08             	mov    0x8(%ebp),%eax
 82e7cc7:	89 04 24             	mov    %eax,(%esp)
 82e7cca:	e8 5b fb ff ff       	call   82e782a <_ZN11pvp_assault13CAssaultPlace9_MoveUserEPNS_12CDispositionEii>
 82e7ccf:	8b 45 08             	mov    0x8(%ebp),%eax
 82e7cd2:	89 04 24             	mov    %eax,(%esp)
 82e7cd5:	e8 26 06 00 00       	call   82e8300 <_ZN11pvp_assault13CAssaultPlace17_MoveAssaultPlaceEv>
 82e7cda:	eb 1b                	jmp    82e7cf7 <_ZN11pvp_assault13CAssaultPlace16_DispositionUserEPP5CUser+0x13b>
 82e7cdc:	89 d3                	mov    %edx,%ebx
 82e7cde:	89 c6                	mov    %eax,%esi
 82e7ce0:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 82e7ce3:	89 04 24             	mov    %eax,(%esp)
 82e7ce6:	e8 c5 93 00 00       	call   82f10b0 <_ZN11pvp_assault18CStaticDispositionD1Ev>
 82e7ceb:	89 f0                	mov    %esi,%eax
 82e7ced:	89 da                	mov    %ebx,%edx
 82e7cef:	89 04 24             	mov    %eax,(%esp)
 82e7cf2:	e8 59 ba 7f 00       	call   8ae3750 <_Unwind_Resume>
 82e7cf7:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 82e7cfa:	89 04 24             	mov    %eax,(%esp)
 82e7cfd:	e8 ae 93 00 00       	call   82f10b0 <_ZN11pvp_assault18CStaticDispositionD1Ev>
 82e7d02:	83 c4 50             	add    $0x50,%esp
 82e7d05:	5b                   	pop    %ebx
 82e7d06:	5e                   	pop    %esi
 82e7d07:	5d                   	pop    %ebp
 82e7d08:	c3                   	ret
 82e7d09:	90                   	nop

```

```c
// pvp_assault::CAssaultPlace::_DispositionUser @ 0x82e7bbc

/* pvp_assault::CAssaultPlace::_DispositionUser(CUser**) */

void __thiscall pvp_assault::CAssaultPlace::_DispositionUser(CAssaultPlace *this,CUser **param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  GameWorld *this_00;
  undefined4 *puVar4;
  CStaticDisposition local_40 [44];
  int local_14 [2];
  
  local_14[0] = 0;
  local_14[1] = 0;
  _GetTeamCount(this,local_14);
  CStaticDisposition::CStaticDisposition(local_40,param_1,local_14);
  iVar1 = *(int *)(this + 0x11c);
  iVar2 = *(int *)(this + 0x118);
                    /* try { // try from 082e7c0f to 082e7cd9 has its CatchHandler @ 082e7cdc */
  this_00 = (GameWorld *)G_GameWorld();
  cVar3 = GameWorld::get_disposition(this_00,iVar2,iVar1,(CDisposition *)local_40);
  if (cVar3 != '\x01') {
    puVar4 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar4 = 3;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar4,&ENUM_ERROR::typeinfo,0);
  }
  CStaticDisposition::GetFlagPoint(local_40,(int *)(this + 0x110),(int *)(this + 0x114));
  _SendGiveAlarm(this);
  _SendUserInfo(this);
  _SendUserUdpIpPort(this);
  _MoveUser(this,(CDisposition *)local_40,*(int *)(this + 0x118),*(int *)(this + 0x11c));
  _MoveAssaultPlace(this);
  CStaticDisposition::~CStaticDisposition(local_40);
  return;
}

```

---

## _GetConnectP2PMaxMinPoint

```asm
// === 082e9412 pvp_assault::CAssaultPlace::_GetConnectP2PMaxMinPoint  [0x082e9412-0x82e949b] ===
 82e9412:	55                   	push   %ebp
 82e9413:	89 e5                	mov    %esp,%ebp
 82e9415:	83 ec 28             	sub    $0x28,%esp
 82e9418:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e941b:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 82e9421:	8b 45 10             	mov    0x10(%ebp),%eax
 82e9424:	c7 00 08 00 00 00    	movl   $0x8,(%eax)
 82e942a:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 82e9431:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 82e9438:	eb 55                	jmp    82e948f <_ZN11pvp_assault13CAssaultPlace25_GetConnectP2PMaxMinPointERiS1_+0x7d>
 82e943a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82e943d:	c1 e0 05             	shl    $0x5,%eax
 82e9440:	03 45 08             	add    0x8(%ebp),%eax
 82e9443:	89 04 24             	mov    %eax,(%esp)
 82e9446:	e8 11 71 00 00       	call   82f055c <_ZN11pvp_assault10CAssaulter5EmptyEv>
 82e944b:	84 c0                	test   %al,%al
 82e944d:	75 3b                	jne    82e948a <_ZN11pvp_assault13CAssaultPlace25_GetConnectP2PMaxMinPointERiS1_+0x78>
 82e944f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82e9452:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e9456:	8b 45 08             	mov    0x8(%ebp),%eax
 82e9459:	89 04 24             	mov    %eax,(%esp)
 82e945c:	e8 5b ff ff ff       	call   82e93bc <_ZN11pvp_assault13CAssaultPlace19_GetConnectP2PPointEi>
 82e9461:	89 45 f0             	mov    %eax,-0x10(%ebp)
 82e9464:	8b 45 10             	mov    0x10(%ebp),%eax
 82e9467:	8b 00                	mov    (%eax),%eax
 82e9469:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 82e946c:	7e 08                	jle    82e9476 <_ZN11pvp_assault13CAssaultPlace25_GetConnectP2PMaxMinPointERiS1_+0x64>
 82e946e:	8b 45 10             	mov    0x10(%ebp),%eax
 82e9471:	8b 55 f0             	mov    -0x10(%ebp),%edx
 82e9474:	89 10                	mov    %edx,(%eax)
 82e9476:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e9479:	8b 00                	mov    (%eax),%eax
 82e947b:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 82e947e:	7d 0b                	jge    82e948b <_ZN11pvp_assault13CAssaultPlace25_GetConnectP2PMaxMinPointERiS1_+0x79>
 82e9480:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e9483:	8b 55 f0             	mov    -0x10(%ebp),%edx
 82e9486:	89 10                	mov    %edx,(%eax)
 82e9488:	eb 01                	jmp    82e948b <_ZN11pvp_assault13CAssaultPlace25_GetConnectP2PMaxMinPointERiS1_+0x79>
 82e948a:	90                   	nop
 82e948b:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 82e948f:	83 7d f4 07          	cmpl   $0x7,-0xc(%ebp)
 82e9493:	0f 9e c0             	setle  %al
 82e9496:	84 c0                	test   %al,%al
 82e9498:	75 a0                	jne    82e943a <_ZN11pvp_assault13CAssaultPlace25_GetConnectP2PMaxMinPointERiS1_+0x28>
 82e949a:	c9                   	leave
 82e949b:	c3                   	ret

```

```c
// pvp_assault::CAssaultPlace::_GetConnectP2PMaxMinPoint @ 0x82e9412

/* pvp_assault::CAssaultPlace::_GetConnectP2PMaxMinPoint(int&, int&) */

void __thiscall
pvp_assault::CAssaultPlace::_GetConnectP2PMaxMinPoint(CAssaultPlace *this,int *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int local_10;
  
  *param_1 = 0;
  *param_2 = 8;
  for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
    cVar1 = CAssaulter::Empty((CAssaulter *)(this + local_10 * 0x20));
    if (cVar1 == '\0') {
      iVar2 = _GetConnectP2PPoint(this,local_10);
      if (iVar2 < *param_2) {
        *param_2 = iVar2;
      }
      if (*param_1 < iVar2) {
        *param_1 = iVar2;
      }
    }
  }
  return;
}

```

---

## _GetConnectP2PPoint

```asm
// === 082e93bc pvp_assault::CAssaultPlace::_GetConnectP2PPoint  [0x082e93bc-0x82e9411] ===
 82e93bc:	55                   	push   %ebp
 82e93bd:	89 e5                	mov    %esp,%ebp
 82e93bf:	83 ec 28             	sub    $0x28,%esp
 82e93c2:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 82e93c9:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 82e93d0:	eb 30                	jmp    82e9402 <_ZN11pvp_assault13CAssaultPlace19_GetConnectP2PPointEi+0x46>
 82e93d2:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e93d5:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 82e93d8:	74 24                	je     82e93fe <_ZN11pvp_assault13CAssaultPlace19_GetConnectP2PPointEi+0x42>
 82e93da:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82e93dd:	89 44 24 08          	mov    %eax,0x8(%esp)
 82e93e1:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e93e4:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e93e8:	8b 45 08             	mov    0x8(%ebp),%eax
 82e93eb:	89 04 24             	mov    %eax,(%esp)
 82e93ee:	e8 8b fe ff ff       	call   82e927e <_ZN11pvp_assault13CAssaultPlace19_IsCannotConnectP2PEii>
 82e93f3:	83 f0 01             	xor    $0x1,%eax
 82e93f6:	84 c0                	test   %al,%al
 82e93f8:	74 04                	je     82e93fe <_ZN11pvp_assault13CAssaultPlace19_GetConnectP2PPointEi+0x42>
 82e93fa:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 82e93fe:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 82e9402:	83 7d f4 07          	cmpl   $0x7,-0xc(%ebp)
 82e9406:	0f 9e c0             	setle  %al
 82e9409:	84 c0                	test   %al,%al
 82e940b:	75 c5                	jne    82e93d2 <_ZN11pvp_assault13CAssaultPlace19_GetConnectP2PPointEi+0x16>
 82e940d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82e9410:	c9                   	leave
 82e9411:	c3                   	ret

```

```c
// pvp_assault::CAssaultPlace::_GetConnectP2PPoint @ 0x82e93bc

/* pvp_assault::CAssaultPlace::_GetConnectP2PPoint(int) */

int __thiscall pvp_assault::CAssaultPlace::_GetConnectP2PPoint(CAssaultPlace *this,int param_1)

{
  char cVar1;
  undefined4 local_14;
  undefined4 local_10;
  
  local_14 = 0;
  for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
    if (param_1 != local_10) {
      cVar1 = _IsCannotConnectP2P(this,param_1,local_10);
      if (cVar1 != '\x01') {
        local_14 = local_14 + 1;
      }
    }
  }
  return local_14;
}

```

---

## _GetTeamCount

```asm
// === 082e7162 pvp_assault::CAssaultPlace::_GetTeamCount  [0x082e7162-0x82e71c3] ===
 82e7162:	55                   	push   %ebp
 82e7163:	89 e5                	mov    %esp,%ebp
 82e7165:	83 ec 28             	sub    $0x28,%esp
 82e7168:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 82e716f:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 82e7176:	eb 3b                	jmp    82e71b3 <_ZN11pvp_assault13CAssaultPlace13_GetTeamCountE17ENUM_ASSAULT_TEAM+0x51>
 82e7178:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82e717b:	c1 e0 05             	shl    $0x5,%eax
 82e717e:	03 45 08             	add    0x8(%ebp),%eax
 82e7181:	89 04 24             	mov    %eax,(%esp)
 82e7184:	e8 d3 93 00 00       	call   82f055c <_ZN11pvp_assault10CAssaulter5EmptyEv>
 82e7189:	84 c0                	test   %al,%al
 82e718b:	75 21                	jne    82e71ae <_ZN11pvp_assault13CAssaultPlace13_GetTeamCountE17ENUM_ASSAULT_TEAM+0x4c>
 82e718d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82e7190:	c1 e0 05             	shl    $0x5,%eax
 82e7193:	03 45 08             	add    0x8(%ebp),%eax
 82e7196:	89 04 24             	mov    %eax,(%esp)
 82e7199:	e8 d2 93 00 00       	call   82f0570 <_ZN11pvp_assault10CAssaulter7GetTeamEv>
 82e719e:	3b 45 0c             	cmp    0xc(%ebp),%eax
 82e71a1:	0f 94 c0             	sete   %al
 82e71a4:	84 c0                	test   %al,%al
 82e71a6:	74 07                	je     82e71af <_ZN11pvp_assault13CAssaultPlace13_GetTeamCountE17ENUM_ASSAULT_TEAM+0x4d>
 82e71a8:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 82e71ac:	eb 01                	jmp    82e71af <_ZN11pvp_assault13CAssaultPlace13_GetTeamCountE17ENUM_ASSAULT_TEAM+0x4d>
 82e71ae:	90                   	nop
 82e71af:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 82e71b3:	83 7d f4 07          	cmpl   $0x7,-0xc(%ebp)
 82e71b7:	0f 9e c0             	setle  %al
 82e71ba:	84 c0                	test   %al,%al
 82e71bc:	75 ba                	jne    82e7178 <_ZN11pvp_assault13CAssaultPlace13_GetTeamCountE17ENUM_ASSAULT_TEAM+0x16>
 82e71be:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82e71c1:	c9                   	leave
 82e71c2:	c3                   	ret
 82e71c3:	90                   	nop

```

```c
// pvp_assault::CAssaultPlace::_GetTeamCount @ 0x82e7162

/* pvp_assault::CAssaultPlace::_GetTeamCount(ENUM_ASSAULT_TEAM) */

int __thiscall pvp_assault::CAssaultPlace::_GetTeamCount(CAssaultPlace *this,int param_2)

{
  char cVar1;
  int iVar2;
  int local_14;
  int local_10;
  
  local_14 = 0;
  for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
    cVar1 = CAssaulter::Empty((CAssaulter *)(this + local_10 * 0x20));
    if (cVar1 == '\0') {
      iVar2 = CAssaulter::GetTeam((CAssaulter *)(this + local_10 * 0x20));
      if (iVar2 == param_2) {
        local_14 = local_14 + 1;
      }
    }
  }
  return local_14;
}

```

---

## _GetTeamCountAliveUser

```asm
// === 082e71c4 pvp_assault::CAssaultPlace::_GetTeamCountAliveUser  [0x082e71c4-0x82e7231] ===
 82e71c4:	55                   	push   %ebp
 82e71c5:	89 e5                	mov    %esp,%ebp
 82e71c7:	83 ec 28             	sub    $0x28,%esp
 82e71ca:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 82e71d1:	eb 51                	jmp    82e7224 <_ZN11pvp_assault13CAssaultPlace22_GetTeamCountAliveUserEPi+0x60>
 82e71d3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82e71d6:	c1 e0 05             	shl    $0x5,%eax
 82e71d9:	03 45 08             	add    0x8(%ebp),%eax
 82e71dc:	89 04 24             	mov    %eax,(%esp)
 82e71df:	e8 5e 93 00 00       	call   82f0542 <_ZN11pvp_assault10CAssaulter7GetUserEv>
 82e71e4:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82e71e7:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 82e71eb:	74 2f                	je     82e721c <_ZN11pvp_assault13CAssaultPlace22_GetTeamCountAliveUserEPi+0x58>
 82e71ed:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82e71f0:	89 04 24             	mov    %eax,(%esp)
 82e71f3:	e8 e2 30 df ff       	call   80da2da <_ZN15CUserCharacInfo16IsCurCharacGhostEv>
 82e71f8:	84 c0                	test   %al,%al
 82e71fa:	75 23                	jne    82e721f <_ZN11pvp_assault13CAssaultPlace22_GetTeamCountAliveUserEPi+0x5b>
 82e71fc:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82e71ff:	c1 e0 05             	shl    $0x5,%eax
 82e7202:	03 45 08             	add    0x8(%ebp),%eax
 82e7205:	89 04 24             	mov    %eax,(%esp)
 82e7208:	e8 63 93 00 00       	call   82f0570 <_ZN11pvp_assault10CAssaulter7GetTeamEv>
 82e720d:	c1 e0 02             	shl    $0x2,%eax
 82e7210:	03 45 0c             	add    0xc(%ebp),%eax
 82e7213:	8b 10                	mov    (%eax),%edx
 82e7215:	83 c2 01             	add    $0x1,%edx
 82e7218:	89 10                	mov    %edx,(%eax)
 82e721a:	eb 04                	jmp    82e7220 <_ZN11pvp_assault13CAssaultPlace22_GetTeamCountAliveUserEPi+0x5c>
 82e721c:	90                   	nop
 82e721d:	eb 01                	jmp    82e7220 <_ZN11pvp_assault13CAssaultPlace22_GetTeamCountAliveUserEPi+0x5c>
 82e721f:	90                   	nop
 82e7220:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 82e7224:	83 7d f0 07          	cmpl   $0x7,-0x10(%ebp)
 82e7228:	0f 9e c0             	setle  %al
 82e722b:	84 c0                	test   %al,%al
 82e722d:	75 a4                	jne    82e71d3 <_ZN11pvp_assault13CAssaultPlace22_GetTeamCountAliveUserEPi+0xf>
 82e722f:	c9                   	leave
 82e7230:	c3                   	ret
 82e7231:	90                   	nop

```

```c
// pvp_assault::CAssaultPlace::_GetTeamCountAliveUser @ 0x82e71c4

/* pvp_assault::CAssaultPlace::_GetTeamCountAliveUser(int*) */

void __thiscall pvp_assault::CAssaultPlace::_GetTeamCountAliveUser(CAssaultPlace *this,int *param_1)

{
  char cVar1;
  CUserCharacInfo *this_00;
  int iVar2;
  int local_14;
  
  for (local_14 = 0; local_14 < 8; local_14 = local_14 + 1) {
    this_00 = (CUserCharacInfo *)CAssaulter::GetUser((CAssaulter *)(this + local_14 * 0x20));
    if ((this_00 != (CUserCharacInfo *)0x0) &&
       (cVar1 = CUserCharacInfo::IsCurCharacGhost(this_00), cVar1 == '\0')) {
      iVar2 = CAssaulter::GetTeam((CAssaulter *)(this + local_14 * 0x20));
      param_1[iVar2] = param_1[iVar2] + 1;
    }
  }
  return;
}

```

---

## _GetTeamCount_082e7232

```asm
// === 082e7232 pvp_assault::CAssaultPlace::_GetTeamCount  [0x082e7232-0x82e7287] ===
 82e7232:	55                   	push   %ebp
 82e7233:	89 e5                	mov    %esp,%ebp
 82e7235:	83 ec 28             	sub    $0x28,%esp
 82e7238:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 82e723f:	eb 3a                	jmp    82e727b <_ZN11pvp_assault13CAssaultPlace13_GetTeamCountEPi+0x49>
 82e7241:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82e7244:	c1 e0 05             	shl    $0x5,%eax
 82e7247:	03 45 08             	add    0x8(%ebp),%eax
 82e724a:	89 04 24             	mov    %eax,(%esp)
 82e724d:	e8 0a 93 00 00       	call   82f055c <_ZN11pvp_assault10CAssaulter5EmptyEv>
 82e7252:	84 c0                	test   %al,%al
 82e7254:	75 20                	jne    82e7276 <_ZN11pvp_assault13CAssaultPlace13_GetTeamCountEPi+0x44>
 82e7256:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82e7259:	c1 e0 05             	shl    $0x5,%eax
 82e725c:	03 45 08             	add    0x8(%ebp),%eax
 82e725f:	89 04 24             	mov    %eax,(%esp)
 82e7262:	e8 09 93 00 00       	call   82f0570 <_ZN11pvp_assault10CAssaulter7GetTeamEv>
 82e7267:	c1 e0 02             	shl    $0x2,%eax
 82e726a:	03 45 0c             	add    0xc(%ebp),%eax
 82e726d:	8b 10                	mov    (%eax),%edx
 82e726f:	83 c2 01             	add    $0x1,%edx
 82e7272:	89 10                	mov    %edx,(%eax)
 82e7274:	eb 01                	jmp    82e7277 <_ZN11pvp_assault13CAssaultPlace13_GetTeamCountEPi+0x45>
 82e7276:	90                   	nop
 82e7277:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 82e727b:	83 7d f4 07          	cmpl   $0x7,-0xc(%ebp)
 82e727f:	0f 9e c0             	setle  %al
 82e7282:	84 c0                	test   %al,%al
 82e7284:	75 bb                	jne    82e7241 <_ZN11pvp_assault13CAssaultPlace13_GetTeamCountEPi+0xf>
 82e7286:	c9                   	leave
 82e7287:	c3                   	ret

```

```c
// pvp_assault::CAssaultPlace::_GetTeamCount @ 0x82e7232

/* pvp_assault::CAssaultPlace::_GetTeamCount(int*) */

void __thiscall pvp_assault::CAssaultPlace::_GetTeamCount(CAssaultPlace *this,int *param_1)

{
  char cVar1;
  int iVar2;
  int local_10;
  
  for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
    cVar1 = CAssaulter::Empty((CAssaulter *)(this + local_10 * 0x20));
    if (cVar1 == '\0') {
      iVar2 = CAssaulter::GetTeam((CAssaulter *)(this + local_10 * 0x20));
      param_1[iVar2] = param_1[iVar2] + 1;
    }
  }
  return;
}

```

---

## _GetTeamCount_082e7288

```asm
// === 082e7288 pvp_assault::CAssaultPlace::_GetTeamCount  [0x082e7288-0x82e72f9] ===
 82e7288:	55                   	push   %ebp
 82e7289:	89 e5                	mov    %esp,%ebp
 82e728b:	83 ec 28             	sub    $0x28,%esp
 82e728e:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 82e7295:	eb 55                	jmp    82e72ec <_ZN11pvp_assault13CAssaultPlace13_GetTeamCountEPiNS_18ENUM_ASSAULT_STATEE+0x64>
 82e7297:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82e729a:	c1 e0 05             	shl    $0x5,%eax
 82e729d:	03 45 08             	add    0x8(%ebp),%eax
 82e72a0:	89 04 24             	mov    %eax,(%esp)
 82e72a3:	e8 b4 92 00 00       	call   82f055c <_ZN11pvp_assault10CAssaulter5EmptyEv>
 82e72a8:	84 c0                	test   %al,%al
 82e72aa:	75 3b                	jne    82e72e7 <_ZN11pvp_assault13CAssaultPlace13_GetTeamCountEPiNS_18ENUM_ASSAULT_STATEE+0x5f>
 82e72ac:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82e72af:	c1 e0 05             	shl    $0x5,%eax
 82e72b2:	03 45 08             	add    0x8(%ebp),%eax
 82e72b5:	89 04 24             	mov    %eax,(%esp)
 82e72b8:	e8 cd 92 00 00       	call   82f058a <_ZN11pvp_assault10CAssaulter8GetStateEv>
 82e72bd:	3b 45 10             	cmp    0x10(%ebp),%eax
 82e72c0:	0f 94 c0             	sete   %al
 82e72c3:	84 c0                	test   %al,%al
 82e72c5:	74 21                	je     82e72e8 <_ZN11pvp_assault13CAssaultPlace13_GetTeamCountEPiNS_18ENUM_ASSAULT_STATEE+0x60>
 82e72c7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82e72ca:	c1 e0 05             	shl    $0x5,%eax
 82e72cd:	03 45 08             	add    0x8(%ebp),%eax
 82e72d0:	89 04 24             	mov    %eax,(%esp)
 82e72d3:	e8 98 92 00 00       	call   82f0570 <_ZN11pvp_assault10CAssaulter7GetTeamEv>
 82e72d8:	c1 e0 02             	shl    $0x2,%eax
 82e72db:	03 45 0c             	add    0xc(%ebp),%eax
 82e72de:	8b 10                	mov    (%eax),%edx
 82e72e0:	83 c2 01             	add    $0x1,%edx
 82e72e3:	89 10                	mov    %edx,(%eax)
 82e72e5:	eb 01                	jmp    82e72e8 <_ZN11pvp_assault13CAssaultPlace13_GetTeamCountEPiNS_18ENUM_ASSAULT_STATEE+0x60>
 82e72e7:	90                   	nop
 82e72e8:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 82e72ec:	83 7d f4 07          	cmpl   $0x7,-0xc(%ebp)
 82e72f0:	0f 9e c0             	setle  %al
 82e72f3:	84 c0                	test   %al,%al
 82e72f5:	75 a0                	jne    82e7297 <_ZN11pvp_assault13CAssaultPlace13_GetTeamCountEPiNS_18ENUM_ASSAULT_STATEE+0xf>
 82e72f7:	c9                   	leave
 82e72f8:	c3                   	ret
 82e72f9:	90                   	nop

```

```c
// pvp_assault::CAssaultPlace::_GetTeamCount @ 0x82e7288

/* pvp_assault::CAssaultPlace::_GetTeamCount(int*, pvp_assault::ENUM_ASSAULT_STATE) */

void __thiscall
pvp_assault::CAssaultPlace::_GetTeamCount(CAssaultPlace *this,int param_1,int param_3)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int local_10;
  
  for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
    cVar1 = CAssaulter::Empty((CAssaulter *)(this + local_10 * 0x20));
    if (cVar1 == '\0') {
      iVar2 = CAssaulter::GetState((CAssaulter *)(this + local_10 * 0x20));
      if (iVar2 == param_3) {
        iVar2 = CAssaulter::GetTeam((CAssaulter *)(this + local_10 * 0x20));
        piVar3 = (int *)(iVar2 * 4 + param_1);
        *piVar3 = *piVar3 + 1;
      }
    }
  }
  return;
}

```

---

## _GetUserIndex

```asm
// === 082e849a pvp_assault::CAssaultPlace::_GetUserIndex  [0x082e849a-0x82e852d] ===
 82e849a:	55                   	push   %ebp
 82e849b:	89 e5                	mov    %esp,%ebp
 82e849d:	83 ec 38             	sub    $0x38,%esp
 82e84a0:	8b 45 10             	mov    0x10(%ebp),%eax
 82e84a3:	88 45 e4             	mov    %al,-0x1c(%ebp)
 82e84a6:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 82e84ad:	eb 3a                	jmp    82e84e9 <_ZN11pvp_assault13CAssaultPlace13_GetUserIndexEP5CUserb+0x4f>
 82e84af:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82e84b2:	c1 e0 05             	shl    $0x5,%eax
 82e84b5:	03 45 08             	add    0x8(%ebp),%eax
 82e84b8:	89 04 24             	mov    %eax,(%esp)
 82e84bb:	e8 9c 80 00 00       	call   82f055c <_ZN11pvp_assault10CAssaulter5EmptyEv>
 82e84c0:	84 c0                	test   %al,%al
 82e84c2:	75 20                	jne    82e84e4 <_ZN11pvp_assault13CAssaultPlace13_GetUserIndexEP5CUserb+0x4a>
 82e84c4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82e84c7:	c1 e0 05             	shl    $0x5,%eax
 82e84ca:	03 45 08             	add    0x8(%ebp),%eax
 82e84cd:	89 04 24             	mov    %eax,(%esp)
 82e84d0:	e8 6d 80 00 00       	call   82f0542 <_ZN11pvp_assault10CAssaulter7GetUserEv>
 82e84d5:	3b 45 0c             	cmp    0xc(%ebp),%eax
 82e84d8:	0f 94 c0             	sete   %al
 82e84db:	84 c0                	test   %al,%al
 82e84dd:	74 06                	je     82e84e5 <_ZN11pvp_assault13CAssaultPlace13_GetUserIndexEP5CUserb+0x4b>
 82e84df:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82e84e2:	eb 47                	jmp    82e852b <_ZN11pvp_assault13CAssaultPlace13_GetUserIndexEP5CUserb+0x91>
 82e84e4:	90                   	nop
 82e84e5:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 82e84e9:	83 7d f4 07          	cmpl   $0x7,-0xc(%ebp)
 82e84ed:	0f 9e c0             	setle  %al
 82e84f0:	84 c0                	test   %al,%al
 82e84f2:	75 bb                	jne    82e84af <_ZN11pvp_assault13CAssaultPlace13_GetUserIndexEP5CUserb+0x15>
 82e84f4:	80 7d e4 00          	cmpb   $0x0,-0x1c(%ebp)
 82e84f8:	74 2c                	je     82e8526 <_ZN11pvp_assault13CAssaultPlace13_GetUserIndexEP5CUserb+0x8c>
 82e84fa:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 82e8501:	e8 fa d2 43 00       	call   8725800 <__cxa_allocate_exception>
 82e8506:	89 c2                	mov    %eax,%edx
 82e8508:	c7 02 15 00 00 00    	movl   $0x15,(%edx)
 82e850e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82e8515:	00 
 82e8516:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 82e851d:	08 
 82e851e:	89 04 24             	mov    %eax,(%esp)
 82e8521:	e8 2a c7 43 00       	call   8724c50 <__cxa_throw>
 82e8526:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 82e852b:	c9                   	leave
 82e852c:	c3                   	ret
 82e852d:	90                   	nop

```

```c
// pvp_assault::CAssaultPlace::_GetUserIndex @ 0x82e849a

/* pvp_assault::CAssaultPlace::_GetUserIndex(CUser*, bool) */

int __thiscall
pvp_assault::CAssaultPlace::_GetUserIndex(CAssaultPlace *this,CUser *param_1,bool param_2)

{
  char cVar1;
  CUser *pCVar2;
  undefined4 *puVar3;
  int local_10;
  
  local_10 = 0;
  while( true ) {
    if (7 < local_10) {
      if (!param_2) {
        return -1;
      }
      puVar3 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar3 = 0x15;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar3,&ENUM_ERROR::typeinfo,0);
    }
    cVar1 = CAssaulter::Empty((CAssaulter *)(this + local_10 * 0x20));
    if ((cVar1 == '\0') &&
       (pCVar2 = (CUser *)CAssaulter::GetUser((CAssaulter *)(this + local_10 * 0x20)),
       pCVar2 == param_1)) break;
    local_10 = local_10 + 1;
  }
  return local_10;
}

```

---

## _IsBroadcastRunaway

```asm
// === 082eab1a pvp_assault::CAssaultPlace::_IsBroadcastRunaway  [0x082eab1a-0x82eab79] ===
 82eab1a:	55                   	push   %ebp
 82eab1b:	89 e5                	mov    %esp,%ebp
 82eab1d:	83 ec 18             	sub    $0x18,%esp
 82eab20:	a1 50 be 40 09       	mov    0x940be50,%eax
 82eab25:	89 04 24             	mov    %eax,(%esp)
 82eab28:	e8 e3 4d 19 00       	call   847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>
 82eab2d:	84 c0                	test   %al,%al
 82eab2f:	74 16                	je     82eab47 <_ZN11pvp_assault13CAssaultPlace19_IsBroadcastRunawayEP5CUser+0x2d>
 82eab31:	8b 45 0c             	mov    0xc(%ebp),%eax
 82eab34:	89 04 24             	mov    %eax,(%esp)
 82eab37:	e8 28 aa 35 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 82eab3c:	3c 07                	cmp    $0x7,%al
 82eab3e:	75 07                	jne    82eab47 <_ZN11pvp_assault13CAssaultPlace19_IsBroadcastRunawayEP5CUser+0x2d>
 82eab40:	b8 01 00 00 00       	mov    $0x1,%eax
 82eab45:	eb 05                	jmp    82eab4c <_ZN11pvp_assault13CAssaultPlace19_IsBroadcastRunawayEP5CUser+0x32>
 82eab47:	b8 00 00 00 00       	mov    $0x0,%eax
 82eab4c:	84 c0                	test   %al,%al
 82eab4e:	74 07                	je     82eab57 <_ZN11pvp_assault13CAssaultPlace19_IsBroadcastRunawayEP5CUser+0x3d>
 82eab50:	b8 00 00 00 00       	mov    $0x0,%eax
 82eab55:	eb 20                	jmp    82eab77 <_ZN11pvp_assault13CAssaultPlace19_IsBroadcastRunawayEP5CUser+0x5d>
 82eab57:	8b 45 0c             	mov    0xc(%ebp),%eax
 82eab5a:	89 04 24             	mov    %eax,(%esp)
 82eab5d:	e8 d0 58 e3 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 82eab62:	85 c0                	test   %eax,%eax
 82eab64:	0f 95 c0             	setne  %al
 82eab67:	84 c0                	test   %al,%al
 82eab69:	74 07                	je     82eab72 <_ZN11pvp_assault13CAssaultPlace19_IsBroadcastRunawayEP5CUser+0x58>
 82eab6b:	b8 01 00 00 00       	mov    $0x1,%eax
 82eab70:	eb 05                	jmp    82eab77 <_ZN11pvp_assault13CAssaultPlace19_IsBroadcastRunawayEP5CUser+0x5d>
 82eab72:	b8 00 00 00 00       	mov    $0x0,%eax
 82eab77:	c9                   	leave
 82eab78:	c3                   	ret
 82eab79:	90                   	nop

```

```c
// pvp_assault::CAssaultPlace::_IsBroadcastRunaway @ 0x82eab1a

/* pvp_assault::CAssaultPlace::_IsBroadcastRunaway(CUser*) */

undefined4 __thiscall
pvp_assault::CAssaultPlace::_IsBroadcastRunaway(CAssaultPlace *this,CUser *param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  
  cVar2 = CPowerManager::IsPowerWarEventOn();
  if (cVar2 != '\0') {
    cVar2 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
    if (cVar2 == '\a') {
      bVar1 = true;
      goto LAB_082eab4c;
    }
  }
  bVar1 = false;
LAB_082eab4c:
  if (bVar1) {
    uVar3 = 0;
  }
  else {
    iVar4 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
    if (iVar4 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  return uVar3;
}

```

---

## _IsCannotConnectP2P

```asm
// === 082e927e pvp_assault::CAssaultPlace::_IsCannotConnectP2P  [0x082e927e-0x82e92c5] ===
 82e927e:	55                   	push   %ebp
 82e927f:	89 e5                	mov    %esp,%ebp
 82e9281:	83 ec 18             	sub    $0x18,%esp
 82e9284:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 82e9287:	8b 45 10             	mov    0x10(%ebp),%eax
 82e928a:	8b 55 08             	mov    0x8(%ebp),%edx
 82e928d:	c1 e1 05             	shl    $0x5,%ecx
 82e9290:	01 ca                	add    %ecx,%edx
 82e9292:	8d 04 02             	lea    (%edx,%eax,1),%eax
 82e9295:	83 c0 10             	add    $0x10,%eax
 82e9298:	0f b6 40 05          	movzbl 0x5(%eax),%eax
 82e929c:	84 c0                	test   %al,%al
 82e929e:	74 1f                	je     82e92bf <_ZN11pvp_assault13CAssaultPlace19_IsCannotConnectP2PEii+0x41>
 82e92a0:	8b 45 10             	mov    0x10(%ebp),%eax
 82e92a3:	c1 e0 05             	shl    $0x5,%eax
 82e92a6:	03 45 08             	add    0x8(%ebp),%eax
 82e92a9:	89 04 24             	mov    %eax,(%esp)
 82e92ac:	e8 ab 72 00 00       	call   82f055c <_ZN11pvp_assault10CAssaulter5EmptyEv>
 82e92b1:	83 f0 01             	xor    $0x1,%eax
 82e92b4:	84 c0                	test   %al,%al
 82e92b6:	74 07                	je     82e92bf <_ZN11pvp_assault13CAssaultPlace19_IsCannotConnectP2PEii+0x41>
 82e92b8:	b8 00 00 00 00       	mov    $0x0,%eax
 82e92bd:	eb 05                	jmp    82e92c4 <_ZN11pvp_assault13CAssaultPlace19_IsCannotConnectP2PEii+0x46>
 82e92bf:	b8 01 00 00 00       	mov    $0x1,%eax
 82e92c4:	c9                   	leave
 82e92c5:	c3                   	ret

```

```c
// pvp_assault::CAssaultPlace::_IsCannotConnectP2P @ 0x82e927e

/* pvp_assault::CAssaultPlace::_IsCannotConnectP2P(int, int) */

undefined4 __thiscall
pvp_assault::CAssaultPlace::_IsCannotConnectP2P(CAssaultPlace *this,int param_1,int param_2)

{
  char cVar1;
  
  if ((this[param_2 + param_1 * 0x20 + 0x15] != (CAssaultPlace)0x0) &&
     (cVar1 = CAssaulter::Empty((CAssaulter *)(this + param_2 * 0x20)), cVar1 != '\x01')) {
    return 0;
  }
  return 1;
}

```

---

## _IsChangeDieState

```asm
// === 082ebaee pvp_assault::CAssaultPlace::_IsChangeDieState  [0x082ebaee-0x82ebaf7] ===
 82ebaee:	55                   	push   %ebp
 82ebaef:	89 e5                	mov    %esp,%ebp
 82ebaf1:	b8 01 00 00 00       	mov    $0x1,%eax
 82ebaf6:	5d                   	pop    %ebp
 82ebaf7:	c3                   	ret

```

```c
// pvp_assault::CAssaultPlace::_IsChangeDieState @ 0x82ebaee

/* pvp_assault::CAssaultPlace::_IsChangeDieState() */

undefined4 pvp_assault::CAssaultPlace::_IsChangeDieState(void)

{
  return 1;
}

```

---

## _IsGiveupPanalty

```asm
// === 082eacf4 pvp_assault::CAssaultPlace::_IsGiveupPanalty  [0x082eacf4-0x82ead69] ===
 82eacf4:	55                   	push   %ebp
 82eacf5:	89 e5                	mov    %esp,%ebp
 82eacf7:	83 ec 28             	sub    $0x28,%esp
 82eacfa:	8b 45 0c             	mov    0xc(%ebp),%eax
 82eacfd:	88 45 f4             	mov    %al,-0xc(%ebp)
 82ead00:	a1 30 f7 41 09       	mov    0x941f730,%eax
 82ead05:	c7 44 24 04 20 00 00 	movl   $0x20,0x4(%esp)
 82ead0c:	00 
 82ead0d:	89 04 24             	mov    %eax,(%esp)
 82ead10:	e8 83 ac e2 ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 82ead15:	8b 10                	mov    (%eax),%edx
 82ead17:	83 c2 34             	add    $0x34,%edx
 82ead1a:	8b 12                	mov    (%edx),%edx
 82ead1c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82ead23:	00 
 82ead24:	89 04 24             	mov    %eax,(%esp)
 82ead27:	ff d2                	call   *%edx
 82ead29:	84 c0                	test   %al,%al
 82ead2b:	74 07                	je     82ead34 <_ZN11pvp_assault13CAssaultPlace16_IsGiveupPanaltyEb+0x40>
 82ead2d:	b8 00 00 00 00       	mov    $0x0,%eax
 82ead32:	eb 33                	jmp    82ead67 <_ZN11pvp_assault13CAssaultPlace16_IsGiveupPanaltyEb+0x73>
 82ead34:	8b 45 08             	mov    0x8(%ebp),%eax
 82ead37:	8b 80 0c 01 00 00    	mov    0x10c(%eax),%eax
 82ead3d:	83 f8 01             	cmp    $0x1,%eax
 82ead40:	7e 20                	jle    82ead62 <_ZN11pvp_assault13CAssaultPlace16_IsGiveupPanaltyEb+0x6e>
 82ead42:	8b 45 08             	mov    0x8(%ebp),%eax
 82ead45:	8b 80 0c 01 00 00    	mov    0x10c(%eax),%eax
 82ead4b:	83 f8 04             	cmp    $0x4,%eax
 82ead4e:	7f 12                	jg     82ead62 <_ZN11pvp_assault13CAssaultPlace16_IsGiveupPanaltyEb+0x6e>
 82ead50:	0f b6 45 f4          	movzbl -0xc(%ebp),%eax
 82ead54:	83 f0 01             	xor    $0x1,%eax
 82ead57:	84 c0                	test   %al,%al
 82ead59:	74 07                	je     82ead62 <_ZN11pvp_assault13CAssaultPlace16_IsGiveupPanaltyEb+0x6e>
 82ead5b:	b8 01 00 00 00       	mov    $0x1,%eax
 82ead60:	eb 05                	jmp    82ead67 <_ZN11pvp_assault13CAssaultPlace16_IsGiveupPanaltyEb+0x73>
 82ead62:	b8 00 00 00 00       	mov    $0x0,%eax
 82ead67:	c9                   	leave
 82ead68:	c3                   	ret
 82ead69:	90                   	nop

```

```c
// pvp_assault::CAssaultPlace::_IsGiveupPanalty @ 0x82eacf4

/* pvp_assault::CAssaultPlace::_IsGiveupPanalty(bool) */

undefined4 __thiscall pvp_assault::CAssaultPlace::_IsGiveupPanalty(CAssaultPlace *this,bool param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  
  piVar2 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x20);
  cVar1 = (**(code **)(*piVar2 + 0x34))(piVar2,0);
  if (cVar1 == '\0') {
    if (((*(int *)(this + 0x10c) < 2) || (4 < *(int *)(this + 0x10c))) || (param_1)) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

```

---

## _IsProcsssChaos

```asm
// === 082ebd64 pvp_assault::CAssaultPlace::_IsProcsssChaos  [0x082ebd64-0x82ebda5] ===
 82ebd64:	55                   	push   %ebp
 82ebd65:	89 e5                	mov    %esp,%ebp
 82ebd67:	83 ec 18             	sub    $0x18,%esp
 82ebd6a:	a1 30 f7 41 09       	mov    0x941f730,%eax
 82ebd6f:	c7 44 24 04 20 00 00 	movl   $0x20,0x4(%esp)
 82ebd76:	00 
 82ebd77:	89 04 24             	mov    %eax,(%esp)
 82ebd7a:	e8 19 9c e2 ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 82ebd7f:	8b 10                	mov    (%eax),%edx
 82ebd81:	83 c2 34             	add    $0x34,%edx
 82ebd84:	8b 12                	mov    (%edx),%edx
 82ebd86:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82ebd8d:	00 
 82ebd8e:	89 04 24             	mov    %eax,(%esp)
 82ebd91:	ff d2                	call   *%edx
 82ebd93:	84 c0                	test   %al,%al
 82ebd95:	74 07                	je     82ebd9e <_ZN11pvp_assault13CAssaultPlace15_IsProcsssChaosEv+0x3a>
 82ebd97:	b8 00 00 00 00       	mov    $0x0,%eax
 82ebd9c:	eb 05                	jmp    82ebda3 <_ZN11pvp_assault13CAssaultPlace15_IsProcsssChaosEv+0x3f>
 82ebd9e:	b8 01 00 00 00       	mov    $0x1,%eax
 82ebda3:	c9                   	leave
 82ebda4:	c3                   	ret
 82ebda5:	90                   	nop

```

```c
// pvp_assault::CAssaultPlace::_IsProcsssChaos @ 0x82ebd64

/* pvp_assault::CAssaultPlace::_IsProcsssChaos() */

bool pvp_assault::CAssaultPlace::_IsProcsssChaos(void)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x20);
  cVar1 = (**(code **)(*piVar2 + 0x34))(piVar2,0);
  return cVar1 == '\0';
}

```

---

## _MakeChangeHp

```asm
// === 082e90a0 pvp_assault::CAssaultPlace::_MakeChangeHp  [0x082e90a0-0x82e910b] ===
 82e90a0:	55                   	push   %ebp
 82e90a1:	89 e5                	mov    %esp,%ebp
 82e90a3:	83 ec 18             	sub    $0x18,%esp
 82e90a6:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e90a9:	c7 44 24 08 88 00 00 	movl   $0x88,0x8(%esp)
 82e90b0:	00 
 82e90b1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82e90b8:	00 
 82e90b9:	89 04 24             	mov    %eax,(%esp)
 82e90bc:	e8 3b 28 de ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 82e90c1:	8b 45 10             	mov    0x10(%ebp),%eax
 82e90c4:	c1 e0 05             	shl    $0x5,%eax
 82e90c7:	03 45 08             	add    0x8(%ebp),%eax
 82e90ca:	89 04 24             	mov    %eax,(%esp)
 82e90cd:	e8 90 d5 ff ff       	call   82e6662 <_ZN11pvp_assault10CAssaulter15GetUserUniqueIdEv>
 82e90d2:	0f b7 d0             	movzwl %ax,%edx
 82e90d5:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e90d8:	89 54 24 04          	mov    %edx,0x4(%esp)
 82e90dc:	89 04 24             	mov    %eax,(%esp)
 82e90df:	e8 c0 0d df ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 82e90e4:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e90e7:	8b 55 14             	mov    0x14(%ebp),%edx
 82e90ea:	89 54 24 04          	mov    %edx,0x4(%esp)
 82e90ee:	89 04 24             	mov    %eax,(%esp)
 82e90f1:	e8 46 28 de ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 82e90f6:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e90f9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82e9100:	00 
 82e9101:	89 04 24             	mov    %eax,(%esp)
 82e9104:	e8 4f 28 de ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 82e9109:	c9                   	leave
 82e910a:	c3                   	ret
 82e910b:	90                   	nop

```

```c
// pvp_assault::CAssaultPlace::_MakeChangeHp @ 0x82e90a0

/* pvp_assault::CAssaultPlace::_MakeChangeHp(PacketGuard*, int, int) */

void __thiscall
pvp_assault::CAssaultPlace::_MakeChangeHp
          (CAssaultPlace *this,PacketGuard *param_1,int param_2,int param_3)

{
  uint uVar1;
  
  InterfacePacketBuf::put_header((InterfacePacketBuf *)param_1,0,0x88);
  uVar1 = CAssaulter::GetUserUniqueId((CAssaulter *)(this + param_2 * 0x20));
  InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,uVar1 & 0xffff);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,param_3);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)param_1,true);
  return;
}

```

---

## _MakeCloseAssault

```asm
// === 082e88d6 pvp_assault::CAssaultPlace::_MakeCloseAssault  [0x082e88d6-0x82e891d] ===
 82e88d6:	55                   	push   %ebp
 82e88d7:	89 e5                	mov    %esp,%ebp
 82e88d9:	83 ec 18             	sub    $0x18,%esp
 82e88dc:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e88df:	c7 44 24 08 89 00 00 	movl   $0x89,0x8(%esp)
 82e88e6:	00 
 82e88e7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82e88ee:	00 
 82e88ef:	89 04 24             	mov    %eax,(%esp)
 82e88f2:	e8 05 30 de ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 82e88f7:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e88fa:	8b 55 10             	mov    0x10(%ebp),%edx
 82e88fd:	89 54 24 04          	mov    %edx,0x4(%esp)
 82e8901:	89 04 24             	mov    %eax,(%esp)
 82e8904:	e8 17 30 de ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 82e8909:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e890c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82e8913:	00 
 82e8914:	89 04 24             	mov    %eax,(%esp)
 82e8917:	e8 3c 30 de ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 82e891c:	c9                   	leave
 82e891d:	c3                   	ret

```

```c
// pvp_assault::CAssaultPlace::_MakeCloseAssault @ 0x82e88d6

/* pvp_assault::CAssaultPlace::_MakeCloseAssault(PacketGuard*, int) */

void __thiscall
pvp_assault::CAssaultPlace::_MakeCloseAssault(CAssaultPlace *this,PacketGuard *param_1,int param_2)

{
  InterfacePacketBuf::put_header((InterfacePacketBuf *)param_1,0,0x89);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,param_2);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)param_1,true);
  return;
}

```

---

## _MakeCompleteLoad

```asm
// === 082e8810 pvp_assault::CAssaultPlace::_MakeCompleteLoad  [0x082e8810-0x82e8869] ===
 82e8810:	55                   	push   %ebp
 82e8811:	89 e5                	mov    %esp,%ebp
 82e8813:	83 ec 18             	sub    $0x18,%esp
 82e8816:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e8819:	c7 44 24 08 81 00 00 	movl   $0x81,0x8(%esp)
 82e8820:	00 
 82e8821:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82e8828:	00 
 82e8829:	89 04 24             	mov    %eax,(%esp)
 82e882c:	e8 cb 30 de ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 82e8831:	8b 45 10             	mov    0x10(%ebp),%eax
 82e8834:	c1 e0 05             	shl    $0x5,%eax
 82e8837:	03 45 08             	add    0x8(%ebp),%eax
 82e883a:	89 04 24             	mov    %eax,(%esp)
 82e883d:	e8 20 de ff ff       	call   82e6662 <_ZN11pvp_assault10CAssaulter15GetUserUniqueIdEv>
 82e8842:	0f b7 d0             	movzwl %ax,%edx
 82e8845:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e8848:	89 54 24 04          	mov    %edx,0x4(%esp)
 82e884c:	89 04 24             	mov    %eax,(%esp)
 82e884f:	e8 50 16 df ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 82e8854:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e8857:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82e885e:	00 
 82e885f:	89 04 24             	mov    %eax,(%esp)
 82e8862:	e8 f1 30 de ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 82e8867:	c9                   	leave
 82e8868:	c3                   	ret
 82e8869:	90                   	nop

```

```c
// pvp_assault::CAssaultPlace::_MakeCompleteLoad @ 0x82e8810

/* pvp_assault::CAssaultPlace::_MakeCompleteLoad(PacketGuard*, int) */

void __thiscall
pvp_assault::CAssaultPlace::_MakeCompleteLoad(CAssaultPlace *this,PacketGuard *param_1,int param_2)

{
  uint uVar1;
  
  InterfacePacketBuf::put_header((InterfacePacketBuf *)param_1,0,0x81);
  uVar1 = CAssaulter::GetUserUniqueId((CAssaulter *)(this + param_2 * 0x20));
  InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,uVar1 & 0xffff);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)param_1,true);
  return;
}

```

---

## _MakeDieAssaultPlayer

```asm
// === 082e891e pvp_assault::CAssaultPlace::_MakeDieAssaultPlayer  [0x082e891e-0x82e8977] ===
 82e891e:	55                   	push   %ebp
 82e891f:	89 e5                	mov    %esp,%ebp
 82e8921:	83 ec 18             	sub    $0x18,%esp
 82e8924:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e8927:	c7 44 24 08 83 00 00 	movl   $0x83,0x8(%esp)
 82e892e:	00 
 82e892f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82e8936:	00 
 82e8937:	89 04 24             	mov    %eax,(%esp)
 82e893a:	e8 bd 2f de ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 82e893f:	8b 45 10             	mov    0x10(%ebp),%eax
 82e8942:	c1 e0 05             	shl    $0x5,%eax
 82e8945:	03 45 08             	add    0x8(%ebp),%eax
 82e8948:	89 04 24             	mov    %eax,(%esp)
 82e894b:	e8 12 dd ff ff       	call   82e6662 <_ZN11pvp_assault10CAssaulter15GetUserUniqueIdEv>
 82e8950:	0f b7 d0             	movzwl %ax,%edx
 82e8953:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e8956:	89 54 24 04          	mov    %edx,0x4(%esp)
 82e895a:	89 04 24             	mov    %eax,(%esp)
 82e895d:	e8 42 15 df ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 82e8962:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e8965:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82e896c:	00 
 82e896d:	89 04 24             	mov    %eax,(%esp)
 82e8970:	e8 e3 2f de ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 82e8975:	c9                   	leave
 82e8976:	c3                   	ret
 82e8977:	90                   	nop

```

```c
// pvp_assault::CAssaultPlace::_MakeDieAssaultPlayer @ 0x82e891e

/* pvp_assault::CAssaultPlace::_MakeDieAssaultPlayer(PacketGuard*, int) */

void __thiscall
pvp_assault::CAssaultPlace::_MakeDieAssaultPlayer
          (CAssaultPlace *this,PacketGuard *param_1,int param_2)

{
  uint uVar1;
  
  InterfacePacketBuf::put_header((InterfacePacketBuf *)param_1,0,0x83);
  uVar1 = CAssaulter::GetUserUniqueId((CAssaulter *)(this + param_2 * 0x20));
  InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,uVar1 & 0xffff);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)param_1,true);
  return;
}

```

---

## _MakeEndAssault

```asm
// === 082e88a0 pvp_assault::CAssaultPlace::_MakeEndAssault  [0x082e88a0-0x82e88d5] ===
 82e88a0:	55                   	push   %ebp
 82e88a1:	89 e5                	mov    %esp,%ebp
 82e88a3:	83 ec 18             	sub    $0x18,%esp
 82e88a6:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e88a9:	c7 44 24 08 84 00 00 	movl   $0x84,0x8(%esp)
 82e88b0:	00 
 82e88b1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82e88b8:	00 
 82e88b9:	89 04 24             	mov    %eax,(%esp)
 82e88bc:	e8 3b 30 de ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 82e88c1:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e88c4:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82e88cb:	00 
 82e88cc:	89 04 24             	mov    %eax,(%esp)
 82e88cf:	e8 84 30 de ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 82e88d4:	c9                   	leave
 82e88d5:	c3                   	ret

```

```c
// pvp_assault::CAssaultPlace::_MakeEndAssault @ 0x82e88a0

/* pvp_assault::CAssaultPlace::_MakeEndAssault(PacketGuard*) */

void __thiscall
pvp_assault::CAssaultPlace::_MakeEndAssault(CAssaultPlace *this,PacketGuard *param_1)

{
  InterfacePacketBuf::put_header((InterfacePacketBuf *)param_1,0,0x84);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)param_1,true);
  return;
}

```

---

## _MakeGiveAlarm

```asm
// === 082e910c pvp_assault::CAssaultPlace::_MakeGiveAlarm  [0x082e910c-0x82e9141] ===
 82e910c:	55                   	push   %ebp
 82e910d:	89 e5                	mov    %esp,%ebp
 82e910f:	83 ec 18             	sub    $0x18,%esp
 82e9112:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e9115:	c7 44 24 08 8b 00 00 	movl   $0x8b,0x8(%esp)
 82e911c:	00 
 82e911d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82e9124:	00 
 82e9125:	89 04 24             	mov    %eax,(%esp)
 82e9128:	e8 cf 27 de ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 82e912d:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e9130:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82e9137:	00 
 82e9138:	89 04 24             	mov    %eax,(%esp)
 82e913b:	e8 18 28 de ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 82e9140:	c9                   	leave
 82e9141:	c3                   	ret

```

```c
// pvp_assault::CAssaultPlace::_MakeGiveAlarm @ 0x82e910c

/* pvp_assault::CAssaultPlace::_MakeGiveAlarm(PacketGuard*) */

void __thiscall pvp_assault::CAssaultPlace::_MakeGiveAlarm(CAssaultPlace *this,PacketGuard *param_1)

{
  InterfacePacketBuf::put_header((InterfacePacketBuf *)param_1,0,0x8b);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)param_1,true);
  return;
}

```

---

## _MakeLeaveUser

```asm
// === 082e9046 pvp_assault::CAssaultPlace::_MakeLeaveUser  [0x082e9046-0x82e909f] ===
 82e9046:	55                   	push   %ebp
 82e9047:	89 e5                	mov    %esp,%ebp
 82e9049:	83 ec 18             	sub    $0x18,%esp
 82e904c:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e904f:	c7 44 24 08 87 00 00 	movl   $0x87,0x8(%esp)
 82e9056:	00 
 82e9057:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82e905e:	00 
 82e905f:	89 04 24             	mov    %eax,(%esp)
 82e9062:	e8 95 28 de ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 82e9067:	8b 45 10             	mov    0x10(%ebp),%eax
 82e906a:	c1 e0 05             	shl    $0x5,%eax
 82e906d:	03 45 08             	add    0x8(%ebp),%eax
 82e9070:	89 04 24             	mov    %eax,(%esp)
 82e9073:	e8 ea d5 ff ff       	call   82e6662 <_ZN11pvp_assault10CAssaulter15GetUserUniqueIdEv>
 82e9078:	0f b7 d0             	movzwl %ax,%edx
 82e907b:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e907e:	89 54 24 04          	mov    %edx,0x4(%esp)
 82e9082:	89 04 24             	mov    %eax,(%esp)
 82e9085:	e8 1a 0e df ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 82e908a:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e908d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82e9094:	00 
 82e9095:	89 04 24             	mov    %eax,(%esp)
 82e9098:	e8 bb 28 de ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 82e909d:	c9                   	leave
 82e909e:	c3                   	ret
 82e909f:	90                   	nop

```

```c
// pvp_assault::CAssaultPlace::_MakeLeaveUser @ 0x82e9046

/* pvp_assault::CAssaultPlace::_MakeLeaveUser(PacketGuard*, int) */

void __thiscall
pvp_assault::CAssaultPlace::_MakeLeaveUser(CAssaultPlace *this,PacketGuard *param_1,int param_2)

{
  uint uVar1;
  
  InterfacePacketBuf::put_header((InterfacePacketBuf *)param_1,0,0x87);
  uVar1 = CAssaulter::GetUserUniqueId((CAssaulter *)(this + param_2 * 0x20));
  InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,uVar1 & 0xffff);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)param_1,true);
  return;
}

```

---

## _MakeMoveAssaultPlace

```asm
// === 082e852e pvp_assault::CAssaultPlace::_MakeMoveAssaultPlace  [0x082e852e-0x82e880f] ===
 82e852e:	55                   	push   %ebp
 82e852f:	89 e5                	mov    %esp,%ebp
 82e8531:	56                   	push   %esi
 82e8532:	53                   	push   %ebx
 82e8533:	83 ec 30             	sub    $0x30,%esp
 82e8536:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e8539:	c7 44 24 08 80 00 00 	movl   $0x80,0x8(%esp)
 82e8540:	00 
 82e8541:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82e8548:	00 
 82e8549:	89 04 24             	mov    %eax,(%esp)
 82e854c:	e8 ab 33 de ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 82e8551:	8b 45 08             	mov    0x8(%ebp),%eax
 82e8554:	8b 80 04 01 00 00    	mov    0x104(%eax),%eax
 82e855a:	89 c2                	mov    %eax,%edx
 82e855c:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e855f:	89 54 24 04          	mov    %edx,0x4(%esp)
 82e8563:	89 04 24             	mov    %eax,(%esp)
 82e8566:	e8 d1 33 de ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 82e856b:	8b 45 08             	mov    0x8(%ebp),%eax
 82e856e:	8b 90 18 01 00 00    	mov    0x118(%eax),%edx
 82e8574:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e8577:	89 54 24 04          	mov    %edx,0x4(%esp)
 82e857b:	89 04 24             	mov    %eax,(%esp)
 82e857e:	e8 9d 33 de ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 82e8583:	8b 45 08             	mov    0x8(%ebp),%eax
 82e8586:	8b 90 1c 01 00 00    	mov    0x11c(%eax),%edx
 82e858c:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e858f:	89 54 24 04          	mov    %edx,0x4(%esp)
 82e8593:	89 04 24             	mov    %eax,(%esp)
 82e8596:	e8 85 33 de ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 82e859b:	66 c7 45 ec 00 00    	movw   $0x0,-0x14(%ebp)
 82e85a1:	8b 45 08             	mov    0x8(%ebp),%eax
 82e85a4:	8b 80 34 01 00 00    	mov    0x134(%eax),%eax
 82e85aa:	85 c0                	test   %eax,%eax
 82e85ac:	74 15                	je     82e85c3 <_ZN11pvp_assault13CAssaultPlace21_MakeMoveAssaultPlaceEP11PacketGuard+0x95>
 82e85ae:	8b 45 08             	mov    0x8(%ebp),%eax
 82e85b1:	8b 80 34 01 00 00    	mov    0x134(%eax),%eax
 82e85b7:	89 04 24             	mov    %eax,(%esp)
 82e85ba:	e8 bd 1d df ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 82e85bf:	66 89 45 ec          	mov    %ax,-0x14(%ebp)
 82e85c3:	0f b7 55 ec          	movzwl -0x14(%ebp),%edx
 82e85c7:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e85ca:	89 54 24 04          	mov    %edx,0x4(%esp)
 82e85ce:	89 04 24             	mov    %eax,(%esp)
 82e85d1:	e8 ce 18 df ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 82e85d6:	66 c7 45 ee 00 00    	movw   $0x0,-0x12(%ebp)
 82e85dc:	8b 45 08             	mov    0x8(%ebp),%eax
 82e85df:	8b 80 38 01 00 00    	mov    0x138(%eax),%eax
 82e85e5:	85 c0                	test   %eax,%eax
 82e85e7:	74 15                	je     82e85fe <_ZN11pvp_assault13CAssaultPlace21_MakeMoveAssaultPlaceEP11PacketGuard+0xd0>
 82e85e9:	8b 45 08             	mov    0x8(%ebp),%eax
 82e85ec:	8b 80 38 01 00 00    	mov    0x138(%eax),%eax
 82e85f2:	89 04 24             	mov    %eax,(%esp)
 82e85f5:	e8 82 1d df ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 82e85fa:	66 89 45 ee          	mov    %ax,-0x12(%ebp)
 82e85fe:	0f b7 55 ee          	movzwl -0x12(%ebp),%edx
 82e8602:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e8605:	89 54 24 04          	mov    %edx,0x4(%esp)
 82e8609:	89 04 24             	mov    %eax,(%esp)
 82e860c:	e8 93 18 df ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 82e8611:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 82e8618:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 82e861f:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 82e8626:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e8629:	89 04 24             	mov    %eax,(%esp)
 82e862c:	e8 1b 85 e2 ff       	call   8110b4c <_ZN18InterfacePacketBuf9get_indexEv>
 82e8631:	89 45 e8             	mov    %eax,-0x18(%ebp)
 82e8634:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e8637:	8b 55 f4             	mov    -0xc(%ebp),%edx
 82e863a:	89 54 24 04          	mov    %edx,0x4(%esp)
 82e863e:	89 04 24             	mov    %eax,(%esp)
 82e8641:	e8 da 32 de ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 82e8646:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 82e864d:	eb 78                	jmp    82e86c7 <_ZN11pvp_assault13CAssaultPlace21_MakeMoveAssaultPlaceEP11PacketGuard+0x199>
 82e864f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82e8652:	c1 e0 05             	shl    $0x5,%eax
 82e8655:	03 45 08             	add    0x8(%ebp),%eax
 82e8658:	89 04 24             	mov    %eax,(%esp)
 82e865b:	e8 fc 7e 00 00       	call   82f055c <_ZN11pvp_assault10CAssaulter5EmptyEv>
 82e8660:	84 c0                	test   %al,%al
 82e8662:	75 5e                	jne    82e86c2 <_ZN11pvp_assault13CAssaultPlace21_MakeMoveAssaultPlaceEP11PacketGuard+0x194>
 82e8664:	8b 55 f0             	mov    -0x10(%ebp),%edx
 82e8667:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e866a:	89 54 24 04          	mov    %edx,0x4(%esp)
 82e866e:	89 04 24             	mov    %eax,(%esp)
 82e8671:	e8 aa 32 de ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 82e8676:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82e8679:	c1 e0 05             	shl    $0x5,%eax
 82e867c:	03 45 08             	add    0x8(%ebp),%eax
 82e867f:	89 04 24             	mov    %eax,(%esp)
 82e8682:	e8 e9 7e 00 00       	call   82f0570 <_ZN11pvp_assault10CAssaulter7GetTeamEv>
 82e8687:	8d 50 01             	lea    0x1(%eax),%edx
 82e868a:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e868d:	89 54 24 04          	mov    %edx,0x4(%esp)
 82e8691:	89 04 24             	mov    %eax,(%esp)
 82e8694:	e8 87 32 de ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 82e8699:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82e869c:	c1 e0 05             	shl    $0x5,%eax
 82e869f:	03 45 08             	add    0x8(%ebp),%eax
 82e86a2:	89 04 24             	mov    %eax,(%esp)
 82e86a5:	e8 b8 df ff ff       	call   82e6662 <_ZN11pvp_assault10CAssaulter15GetUserUniqueIdEv>
 82e86aa:	0f b7 d0             	movzwl %ax,%edx
 82e86ad:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e86b0:	89 54 24 04          	mov    %edx,0x4(%esp)
 82e86b4:	89 04 24             	mov    %eax,(%esp)
 82e86b7:	e8 e8 17 df ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 82e86bc:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 82e86c0:	eb 01                	jmp    82e86c3 <_ZN11pvp_assault13CAssaultPlace21_MakeMoveAssaultPlaceEP11PacketGuard+0x195>
 82e86c2:	90                   	nop
 82e86c3:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 82e86c7:	83 7d f0 07          	cmpl   $0x7,-0x10(%ebp)
 82e86cb:	0f 96 c0             	setbe  %al
 82e86ce:	84 c0                	test   %al,%al
 82e86d0:	0f 85 79 ff ff ff    	jne    82e864f <_ZN11pvp_assault13CAssaultPlace21_MakeMoveAssaultPlaceEP11PacketGuard+0x121>
 82e86d6:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e86d9:	8b 55 f4             	mov    -0xc(%ebp),%edx
 82e86dc:	89 54 24 08          	mov    %edx,0x8(%esp)
 82e86e0:	8d 55 e8             	lea    -0x18(%ebp),%edx
 82e86e3:	89 54 24 04          	mov    %edx,0x4(%esp)
 82e86e7:	89 04 24             	mov    %eax,(%esp)
 82e86ea:	e8 39 84 e2 ff       	call   8110b28 <_ZN18InterfacePacketBuf8put_byteERii>
 82e86ef:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 82e86f6:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 82e86fd:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e8700:	89 04 24             	mov    %eax,(%esp)
 82e8703:	e8 44 84 e2 ff       	call   8110b4c <_ZN18InterfacePacketBuf9get_indexEv>
 82e8708:	89 45 e8             	mov    %eax,-0x18(%ebp)
 82e870b:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e870e:	8b 55 f4             	mov    -0xc(%ebp),%edx
 82e8711:	89 54 24 04          	mov    %edx,0x4(%esp)
 82e8715:	89 04 24             	mov    %eax,(%esp)
 82e8718:	e8 03 32 de ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 82e871d:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82e8720:	89 04 24             	mov    %eax,(%esp)
 82e8723:	e8 f8 fc e7 ff       	call   8168420 <_ZNSt6vectorItSaItEEC1Ev>
 82e8728:	8b 45 08             	mov    0x8(%ebp),%eax
 82e872b:	8b b0 1c 01 00 00    	mov    0x11c(%eax),%esi
 82e8731:	8b 45 08             	mov    0x8(%ebp),%eax
 82e8734:	8b 98 18 01 00 00    	mov    0x118(%eax),%ebx
 82e873a:	e8 68 1c df ff       	call   80da3a7 <_Z11G_GameWorldv>
 82e873f:	8d 55 dc             	lea    -0x24(%ebp),%edx
 82e8742:	89 54 24 0c          	mov    %edx,0xc(%esp)
 82e8746:	89 74 24 08          	mov    %esi,0x8(%esp)
 82e874a:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 82e874e:	89 04 24             	mov    %eax,(%esp)
 82e8751:	e8 c0 fb 3d 00       	call   86c8316 <_ZN9GameWorld16get_user_id_listEiiRSt6vectorItSaItEE>
 82e8756:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 82e875d:	eb 2f                	jmp    82e878e <_ZN11pvp_assault13CAssaultPlace21_MakeMoveAssaultPlaceEP11PacketGuard+0x260>
 82e875f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82e8762:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e8766:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82e8769:	89 04 24             	mov    %eax,(%esp)
 82e876c:	e8 59 fd e7 ff       	call   81684ca <_ZNSt6vectorItSaItEEixEj>
 82e8771:	0f b7 00             	movzwl (%eax),%eax
 82e8774:	0f b7 d0             	movzwl %ax,%edx
 82e8777:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e877a:	89 54 24 04          	mov    %edx,0x4(%esp)
 82e877e:	89 04 24             	mov    %eax,(%esp)
 82e8781:	e8 1e 17 df ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 82e8786:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 82e878a:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 82e878e:	83 7d f0 09          	cmpl   $0x9,-0x10(%ebp)
 82e8792:	77 17                	ja     82e87ab <_ZN11pvp_assault13CAssaultPlace21_MakeMoveAssaultPlaceEP11PacketGuard+0x27d>
 82e8794:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82e8797:	89 04 24             	mov    %eax,(%esp)
 82e879a:	e8 3d fd e7 ff       	call   81684dc <_ZNKSt6vectorItSaItEE4sizeEv>
 82e879f:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 82e87a2:	76 07                	jbe    82e87ab <_ZN11pvp_assault13CAssaultPlace21_MakeMoveAssaultPlaceEP11PacketGuard+0x27d>
 82e87a4:	b8 01 00 00 00       	mov    $0x1,%eax
 82e87a9:	eb 05                	jmp    82e87b0 <_ZN11pvp_assault13CAssaultPlace21_MakeMoveAssaultPlaceEP11PacketGuard+0x282>
 82e87ab:	b8 00 00 00 00       	mov    $0x0,%eax
 82e87b0:	84 c0                	test   %al,%al
 82e87b2:	75 ab                	jne    82e875f <_ZN11pvp_assault13CAssaultPlace21_MakeMoveAssaultPlaceEP11PacketGuard+0x231>
 82e87b4:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e87b7:	8b 55 f4             	mov    -0xc(%ebp),%edx
 82e87ba:	89 54 24 08          	mov    %edx,0x8(%esp)
 82e87be:	8d 55 e8             	lea    -0x18(%ebp),%edx
 82e87c1:	89 54 24 04          	mov    %edx,0x4(%esp)
 82e87c5:	89 04 24             	mov    %eax,(%esp)
 82e87c8:	e8 5b 83 e2 ff       	call   8110b28 <_ZN18InterfacePacketBuf8put_byteERii>
 82e87cd:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e87d0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82e87d7:	00 
 82e87d8:	89 04 24             	mov    %eax,(%esp)
 82e87db:	e8 78 31 de ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 82e87e0:	eb 1b                	jmp    82e87fd <_ZN11pvp_assault13CAssaultPlace21_MakeMoveAssaultPlaceEP11PacketGuard+0x2cf>
 82e87e2:	89 d3                	mov    %edx,%ebx
 82e87e4:	89 c6                	mov    %eax,%esi
 82e87e6:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82e87e9:	89 04 24             	mov    %eax,(%esp)
 82e87ec:	e8 5f fb e7 ff       	call   8168350 <_ZNSt6vectorItSaItEED1Ev>
 82e87f1:	89 f0                	mov    %esi,%eax
 82e87f3:	89 da                	mov    %ebx,%edx
 82e87f5:	89 04 24             	mov    %eax,(%esp)
 82e87f8:	e8 53 af 7f 00       	call   8ae3750 <_Unwind_Resume>
 82e87fd:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82e8800:	89 04 24             	mov    %eax,(%esp)
 82e8803:	e8 48 fb e7 ff       	call   8168350 <_ZNSt6vectorItSaItEED1Ev>
 82e8808:	83 c4 30             	add    $0x30,%esp
 82e880b:	5b                   	pop    %ebx
 82e880c:	5e                   	pop    %esi
 82e880d:	5d                   	pop    %ebp
 82e880e:	c3                   	ret
 82e880f:	90                   	nop

```

```c
// pvp_assault::CAssaultPlace::_MakeMoveAssaultPlace @ 0x82e852e

/* pvp_assault::CAssaultPlace::_MakeMoveAssaultPlace(PacketGuard*) */

void __thiscall
pvp_assault::CAssaultPlace::_MakeMoveAssaultPlace(CAssaultPlace *this,PacketGuard *param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  GameWorld *this_00;
  ushort *puVar5;
  uint uVar6;
  vector<unsigned_short,std::allocator<unsigned_short>> local_28 [12];
  int local_1c;
  ushort local_18;
  ushort local_16;
  uint local_14;
  int local_10;
  
  InterfacePacketBuf::put_header((InterfacePacketBuf *)param_1,0,0x80);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,*(int *)(this + 0x104));
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,*(int *)(this + 0x118));
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,*(int *)(this + 0x11c));
  local_18 = 0;
  if (*(int *)(this + 0x134) != 0) {
    local_18 = CUser::get_unique_id(*(CUser **)(this + 0x134));
  }
  InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,(uint)local_18);
  local_16 = 0;
  if (*(int *)(this + 0x138) != 0) {
    local_16 = CUser::get_unique_id(*(CUser **)(this + 0x138));
  }
  InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,(uint)local_16);
  local_14 = 0;
  local_10 = 0;
  local_1c = 0;
  local_1c = InterfacePacketBuf::get_index((InterfacePacketBuf *)param_1);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,local_10);
  for (local_14 = 0; local_14 < 8; local_14 = local_14 + 1) {
    cVar3 = CAssaulter::Empty((CAssaulter *)(this + local_14 * 0x20));
    if (cVar3 == '\0') {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,local_14);
      iVar4 = CAssaulter::GetTeam((CAssaulter *)(this + local_14 * 0x20));
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,iVar4 + 1);
      uVar6 = CAssaulter::GetUserUniqueId((CAssaulter *)(this + local_14 * 0x20));
      InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,uVar6 & 0xffff);
      local_10 = local_10 + 1;
    }
  }
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,&local_1c,local_10);
  local_1c = 0;
  local_10 = 0;
  local_1c = InterfacePacketBuf::get_index((InterfacePacketBuf *)param_1);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,local_10);
  std::vector<unsigned_short,std::allocator<unsigned_short>>::vector(local_28);
  iVar4 = *(int *)(this + 0x11c);
  iVar1 = *(int *)(this + 0x118);
                    /* try { // try from 082e873a to 082e87df has its CatchHandler @ 082e87e2 */
  this_00 = (GameWorld *)G_GameWorld();
  GameWorld::get_user_id_list(this_00,iVar1,iVar4,(vector *)local_28);
  local_14 = 0;
  do {
    if (local_14 < 10) {
      uVar6 = std::vector<unsigned_short,std::allocator<unsigned_short>>::size(local_28);
      if (uVar6 <= local_14) goto LAB_082e87ab;
      bVar2 = true;
    }
    else {
LAB_082e87ab:
      bVar2 = false;
    }
    if (!bVar2) {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,&local_1c,local_10);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)param_1,true);
      std::vector<unsigned_short,std::allocator<unsigned_short>>::~vector(local_28);
      return;
    }
    puVar5 = (ushort *)
             std::vector<unsigned_short,std::allocator<unsigned_short>>::operator[]
                       (local_28,local_14);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,(uint)*puVar5);
    local_10 = local_10 + 1;
    local_14 = local_14 + 1;
  } while( true );
}

```

---

## _MakeRevivalAssaultPlayer

```asm
// === 082e8978 pvp_assault::CAssaultPlace::_MakeRevivalAssaultPlayer  [0x082e8978-0x82e89bf] ===
 82e8978:	55                   	push   %ebp
 82e8979:	89 e5                	mov    %esp,%ebp
 82e897b:	83 ec 18             	sub    $0x18,%esp
 82e897e:	8b 45 08             	mov    0x8(%ebp),%eax
 82e8981:	c7 44 24 08 85 00 00 	movl   $0x85,0x8(%esp)
 82e8988:	00 
 82e8989:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82e8990:	00 
 82e8991:	89 04 24             	mov    %eax,(%esp)
 82e8994:	e8 63 2f de ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 82e8999:	8b 45 08             	mov    0x8(%ebp),%eax
 82e899c:	8b 55 0c             	mov    0xc(%ebp),%edx
 82e899f:	89 54 24 04          	mov    %edx,0x4(%esp)
 82e89a3:	89 04 24             	mov    %eax,(%esp)
 82e89a6:	e8 f9 14 df ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 82e89ab:	8b 45 08             	mov    0x8(%ebp),%eax
 82e89ae:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82e89b5:	00 
 82e89b6:	89 04 24             	mov    %eax,(%esp)
 82e89b9:	e8 9a 2f de ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 82e89be:	c9                   	leave
 82e89bf:	c3                   	ret

```

```c
// pvp_assault::CAssaultPlace::_MakeRevivalAssaultPlayer @ 0x82e8978

/* pvp_assault::CAssaultPlace::_MakeRevivalAssaultPlayer(PacketGuard*, int) */

void pvp_assault::CAssaultPlace::_MakeRevivalAssaultPlayer(PacketGuard *param_1,int param_2)

{
  InterfacePacketBuf::put_header((InterfacePacketBuf *)param_1,0,0x85);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,param_2);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)param_1,true);
  return;
}

```

---

## _MakeStartAssault

```asm
// === 082e886a pvp_assault::CAssaultPlace::_MakeStartAssault  [0x082e886a-0x82e889f] ===
 82e886a:	55                   	push   %ebp
 82e886b:	89 e5                	mov    %esp,%ebp
 82e886d:	83 ec 18             	sub    $0x18,%esp
 82e8870:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e8873:	c7 44 24 08 82 00 00 	movl   $0x82,0x8(%esp)
 82e887a:	00 
 82e887b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82e8882:	00 
 82e8883:	89 04 24             	mov    %eax,(%esp)
 82e8886:	e8 71 30 de ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 82e888b:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e888e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82e8895:	00 
 82e8896:	89 04 24             	mov    %eax,(%esp)
 82e8899:	e8 ba 30 de ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 82e889e:	c9                   	leave
 82e889f:	c3                   	ret

```

```c
// pvp_assault::CAssaultPlace::_MakeStartAssault @ 0x82e886a

/* pvp_assault::CAssaultPlace::_MakeStartAssault(PacketGuard*) */

void __thiscall
pvp_assault::CAssaultPlace::_MakeStartAssault(CAssaultPlace *this,PacketGuard *param_1)

{
  InterfacePacketBuf::put_header((InterfacePacketBuf *)param_1,0,0x82);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)param_1,true);
  return;
}

```

---

## _MakeUserInfo

```asm
// === 082e8b66 pvp_assault::CAssaultPlace::_MakeUserInfo  [0x082e8b66-0x82e8c59] ===
 82e8b66:	55                   	push   %ebp
 82e8b67:	89 e5                	mov    %esp,%ebp
 82e8b69:	56                   	push   %esi
 82e8b6a:	53                   	push   %ebx
 82e8b6b:	83 ec 20             	sub    $0x20,%esp
 82e8b6e:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e8b71:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 82e8b78:	00 
 82e8b79:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82e8b80:	00 
 82e8b81:	89 04 24             	mov    %eax,(%esp)
 82e8b84:	e8 73 2d de ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 82e8b89:	8b 55 10             	mov    0x10(%ebp),%edx
 82e8b8c:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e8b8f:	89 54 24 04          	mov    %edx,0x4(%esp)
 82e8b93:	89 04 24             	mov    %eax,(%esp)
 82e8b96:	e8 85 2d de ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 82e8b9b:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 82e8ba2:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 82e8ba9:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e8bac:	89 04 24             	mov    %eax,(%esp)
 82e8baf:	e8 98 7f e2 ff       	call   8110b4c <_ZN18InterfacePacketBuf9get_indexEv>
 82e8bb4:	89 45 ec             	mov    %eax,-0x14(%ebp)
 82e8bb7:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e8bba:	8b 55 f0             	mov    -0x10(%ebp),%edx
 82e8bbd:	89 54 24 04          	mov    %edx,0x4(%esp)
 82e8bc1:	89 04 24             	mov    %eax,(%esp)
 82e8bc4:	e8 db 12 df ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 82e8bc9:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 82e8bd0:	eb 4a                	jmp    82e8c1c <_ZN11pvp_assault13CAssaultPlace13_MakeUserInfoEP11PacketGuard13ENUM_USERINFO+0xb6>
 82e8bd2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82e8bd5:	c1 e0 05             	shl    $0x5,%eax
 82e8bd8:	03 45 08             	add    0x8(%ebp),%eax
 82e8bdb:	89 04 24             	mov    %eax,(%esp)
 82e8bde:	e8 79 79 00 00       	call   82f055c <_ZN11pvp_assault10CAssaulter5EmptyEv>
 82e8be3:	84 c0                	test   %al,%al
 82e8be5:	75 30                	jne    82e8c17 <_ZN11pvp_assault13CAssaultPlace13_MakeUserInfoEP11PacketGuard13ENUM_USERINFO+0xb1>
 82e8be7:	8b 45 10             	mov    0x10(%ebp),%eax
 82e8bea:	0f be f0             	movsbl %al,%esi
 82e8bed:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 82e8bf0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82e8bf3:	c1 e0 05             	shl    $0x5,%eax
 82e8bf6:	03 45 08             	add    0x8(%ebp),%eax
 82e8bf9:	89 04 24             	mov    %eax,(%esp)
 82e8bfc:	e8 41 79 00 00       	call   82f0542 <_ZN11pvp_assault10CAssaulter7GetUserEv>
 82e8c01:	89 74 24 08          	mov    %esi,0x8(%esp)
 82e8c05:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 82e8c09:	89 04 24             	mov    %eax,(%esp)
 82e8c0c:	e8 3d 18 37 00       	call   865a44e <_ZN5CUser15make_basic_infoEPcc>
 82e8c11:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 82e8c15:	eb 01                	jmp    82e8c18 <_ZN11pvp_assault13CAssaultPlace13_MakeUserInfoEP11PacketGuard13ENUM_USERINFO+0xb2>
 82e8c17:	90                   	nop
 82e8c18:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 82e8c1c:	83 7d f4 07          	cmpl   $0x7,-0xc(%ebp)
 82e8c20:	0f 9e c0             	setle  %al
 82e8c23:	84 c0                	test   %al,%al
 82e8c25:	75 ab                	jne    82e8bd2 <_ZN11pvp_assault13CAssaultPlace13_MakeUserInfoEP11PacketGuard13ENUM_USERINFO+0x6c>
 82e8c27:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e8c2a:	8b 55 f0             	mov    -0x10(%ebp),%edx
 82e8c2d:	89 54 24 08          	mov    %edx,0x8(%esp)
 82e8c31:	8d 55 ec             	lea    -0x14(%ebp),%edx
 82e8c34:	89 54 24 04          	mov    %edx,0x4(%esp)
 82e8c38:	89 04 24             	mov    %eax,(%esp)
 82e8c3b:	e8 c8 dc e2 ff       	call   8116908 <_ZN18InterfacePacketBuf9put_shortERii>
 82e8c40:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e8c43:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82e8c4a:	00 
 82e8c4b:	89 04 24             	mov    %eax,(%esp)
 82e8c4e:	e8 05 2d de ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 82e8c53:	83 c4 20             	add    $0x20,%esp
 82e8c56:	5b                   	pop    %ebx
 82e8c57:	5e                   	pop    %esi
 82e8c58:	5d                   	pop    %ebp
 82e8c59:	c3                   	ret

```

```c
// pvp_assault::CAssaultPlace::_MakeUserInfo @ 0x82e8b66

/* pvp_assault::CAssaultPlace::_MakeUserInfo(PacketGuard*, ENUM_USERINFO) */

void __thiscall
pvp_assault::CAssaultPlace::_MakeUserInfo
          (CAssaultPlace *this,InterfacePacketBuf *param_1,int param_3)

{
  char cVar1;
  CUser *this_00;
  int local_18;
  int local_14;
  int local_10;
  
  InterfacePacketBuf::put_header(param_1,0,2);
  InterfacePacketBuf::put_byte(param_1,param_3);
  local_18 = 0;
  local_14 = 0;
  local_18 = InterfacePacketBuf::get_index(param_1);
  InterfacePacketBuf::put_short(param_1,local_14);
  for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
    cVar1 = CAssaulter::Empty((CAssaulter *)(this + local_10 * 0x20));
    if (cVar1 == '\0') {
      this_00 = (CUser *)CAssaulter::GetUser((CAssaulter *)(this + local_10 * 0x20));
      CUser::make_basic_info(this_00,(char *)param_1,(char)param_3);
      local_14 = local_14 + 1;
    }
  }
  InterfacePacketBuf::put_short(param_1,&local_18,local_14);
  InterfacePacketBuf::finalize(param_1,true);
  return;
}

```

---

## _MakeUserState

```asm
// === 082e8c5a pvp_assault::CAssaultPlace::_MakeUserState  [0x082e8c5a-0x82e8d5f] ===
 82e8c5a:	55                   	push   %ebp
 82e8c5b:	89 e5                	mov    %esp,%ebp
 82e8c5d:	83 ec 28             	sub    $0x28,%esp
 82e8c60:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e8c63:	c7 44 24 08 03 00 00 	movl   $0x3,0x8(%esp)
 82e8c6a:	00 
 82e8c6b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82e8c72:	00 
 82e8c73:	89 04 24             	mov    %eax,(%esp)
 82e8c76:	e8 81 2c de ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 82e8c7b:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 82e8c82:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 82e8c89:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e8c8c:	89 04 24             	mov    %eax,(%esp)
 82e8c8f:	e8 b8 7e e2 ff       	call   8110b4c <_ZN18InterfacePacketBuf9get_indexEv>
 82e8c94:	89 45 ec             	mov    %eax,-0x14(%ebp)
 82e8c97:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e8c9a:	8b 55 f0             	mov    -0x10(%ebp),%edx
 82e8c9d:	89 54 24 04          	mov    %edx,0x4(%esp)
 82e8ca1:	89 04 24             	mov    %eax,(%esp)
 82e8ca4:	e8 77 2c de ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 82e8ca9:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 82e8cb0:	eb 75                	jmp    82e8d27 <_ZN11pvp_assault13CAssaultPlace14_MakeUserStateEP11PacketGuard+0xcd>
 82e8cb2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82e8cb5:	c1 e0 05             	shl    $0x5,%eax
 82e8cb8:	03 45 08             	add    0x8(%ebp),%eax
 82e8cbb:	89 04 24             	mov    %eax,(%esp)
 82e8cbe:	e8 99 78 00 00       	call   82f055c <_ZN11pvp_assault10CAssaulter5EmptyEv>
 82e8cc3:	84 c0                	test   %al,%al
 82e8cc5:	75 5b                	jne    82e8d22 <_ZN11pvp_assault13CAssaultPlace14_MakeUserStateEP11PacketGuard+0xc8>
 82e8cc7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82e8cca:	c1 e0 05             	shl    $0x5,%eax
 82e8ccd:	03 45 08             	add    0x8(%ebp),%eax
 82e8cd0:	89 04 24             	mov    %eax,(%esp)
 82e8cd3:	e8 6a 78 00 00       	call   82f0542 <_ZN11pvp_assault10CAssaulter7GetUserEv>
 82e8cd8:	89 04 24             	mov    %eax,(%esp)
 82e8cdb:	e8 9c 16 df ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 82e8ce0:	0f b7 d0             	movzwl %ax,%edx
 82e8ce3:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e8ce6:	89 54 24 04          	mov    %edx,0x4(%esp)
 82e8cea:	89 04 24             	mov    %eax,(%esp)
 82e8ced:	e8 b2 11 df ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 82e8cf2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82e8cf5:	c1 e0 05             	shl    $0x5,%eax
 82e8cf8:	03 45 08             	add    0x8(%ebp),%eax
 82e8cfb:	89 04 24             	mov    %eax,(%esp)
 82e8cfe:	e8 3f 78 00 00       	call   82f0542 <_ZN11pvp_assault10CAssaulter7GetUserEv>
 82e8d03:	89 04 24             	mov    %eax,(%esp)
 82e8d06:	e8 65 81 00 00       	call   82f0e70 <_ZN5CUser12GetUserStateEv>
 82e8d0b:	89 c2                	mov    %eax,%edx
 82e8d0d:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e8d10:	89 54 24 04          	mov    %edx,0x4(%esp)
 82e8d14:	89 04 24             	mov    %eax,(%esp)
 82e8d17:	e8 04 2c de ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 82e8d1c:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 82e8d20:	eb 01                	jmp    82e8d23 <_ZN11pvp_assault13CAssaultPlace14_MakeUserStateEP11PacketGuard+0xc9>
 82e8d22:	90                   	nop
 82e8d23:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 82e8d27:	83 7d f4 07          	cmpl   $0x7,-0xc(%ebp)
 82e8d2b:	0f 9e c0             	setle  %al
 82e8d2e:	84 c0                	test   %al,%al
 82e8d30:	75 80                	jne    82e8cb2 <_ZN11pvp_assault13CAssaultPlace14_MakeUserStateEP11PacketGuard+0x58>
 82e8d32:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e8d35:	8b 55 f0             	mov    -0x10(%ebp),%edx
 82e8d38:	89 54 24 08          	mov    %edx,0x8(%esp)
 82e8d3c:	8d 55 ec             	lea    -0x14(%ebp),%edx
 82e8d3f:	89 54 24 04          	mov    %edx,0x4(%esp)
 82e8d43:	89 04 24             	mov    %eax,(%esp)
 82e8d46:	e8 dd 7d e2 ff       	call   8110b28 <_ZN18InterfacePacketBuf8put_byteERii>
 82e8d4b:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e8d4e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82e8d55:	00 
 82e8d56:	89 04 24             	mov    %eax,(%esp)
 82e8d59:	e8 fa 2b de ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 82e8d5e:	c9                   	leave
 82e8d5f:	c3                   	ret

```

```c
// pvp_assault::CAssaultPlace::_MakeUserState @ 0x82e8c5a

/* pvp_assault::CAssaultPlace::_MakeUserState(PacketGuard*) */

void __thiscall pvp_assault::CAssaultPlace::_MakeUserState(CAssaultPlace *this,PacketGuard *param_1)

{
  char cVar1;
  CUser *pCVar2;
  uint uVar3;
  int iVar4;
  int local_18;
  int local_14;
  int local_10;
  
  InterfacePacketBuf::put_header((InterfacePacketBuf *)param_1,0,3);
  local_18 = 0;
  local_14 = 0;
  local_18 = InterfacePacketBuf::get_index((InterfacePacketBuf *)param_1);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,local_14);
  for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
    cVar1 = CAssaulter::Empty((CAssaulter *)(this + local_10 * 0x20));
    if (cVar1 == '\0') {
      pCVar2 = (CUser *)CAssaulter::GetUser((CAssaulter *)(this + local_10 * 0x20));
      uVar3 = CUser::get_unique_id(pCVar2);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,uVar3 & 0xffff);
      pCVar2 = (CUser *)CAssaulter::GetUser((CAssaulter *)(this + local_10 * 0x20));
      iVar4 = CUser::GetUserState(pCVar2);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,iVar4);
      local_14 = local_14 + 1;
    }
  }
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,&local_18,local_14);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)param_1,true);
  return;
}

```

---

## _MakeUserState_082e8d60

```asm
// === 082e8d60 pvp_assault::CAssaultPlace::_MakeUserState  [0x082e8d60-0x82e8de1] ===
 82e8d60:	55                   	push   %ebp
 82e8d61:	89 e5                	mov    %esp,%ebp
 82e8d63:	83 ec 18             	sub    $0x18,%esp
 82e8d66:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e8d69:	c7 44 24 08 03 00 00 	movl   $0x3,0x8(%esp)
 82e8d70:	00 
 82e8d71:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82e8d78:	00 
 82e8d79:	89 04 24             	mov    %eax,(%esp)
 82e8d7c:	e8 7b 2b de ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 82e8d81:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e8d84:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82e8d8b:	00 
 82e8d8c:	89 04 24             	mov    %eax,(%esp)
 82e8d8f:	e8 8c 2b de ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 82e8d94:	8b 45 10             	mov    0x10(%ebp),%eax
 82e8d97:	89 04 24             	mov    %eax,(%esp)
 82e8d9a:	e8 dd 15 df ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 82e8d9f:	0f b7 d0             	movzwl %ax,%edx
 82e8da2:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e8da5:	89 54 24 04          	mov    %edx,0x4(%esp)
 82e8da9:	89 04 24             	mov    %eax,(%esp)
 82e8dac:	e8 f3 10 df ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 82e8db1:	8b 45 10             	mov    0x10(%ebp),%eax
 82e8db4:	89 04 24             	mov    %eax,(%esp)
 82e8db7:	e8 b4 80 00 00       	call   82f0e70 <_ZN5CUser12GetUserStateEv>
 82e8dbc:	89 c2                	mov    %eax,%edx
 82e8dbe:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e8dc1:	89 54 24 04          	mov    %edx,0x4(%esp)
 82e8dc5:	89 04 24             	mov    %eax,(%esp)
 82e8dc8:	e8 53 2b de ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 82e8dcd:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e8dd0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82e8dd7:	00 
 82e8dd8:	89 04 24             	mov    %eax,(%esp)
 82e8ddb:	e8 78 2b de ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 82e8de0:	c9                   	leave
 82e8de1:	c3                   	ret

```

```c
// pvp_assault::CAssaultPlace::_MakeUserState @ 0x82e8d60

/* pvp_assault::CAssaultPlace::_MakeUserState(PacketGuard*, CUser*) */

void __thiscall
pvp_assault::CAssaultPlace::_MakeUserState(CAssaultPlace *this,PacketGuard *param_1,CUser *param_2)

{
  uint uVar1;
  int iVar2;
  
  InterfacePacketBuf::put_header((InterfacePacketBuf *)param_1,0,3);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,1);
  uVar1 = CUser::get_unique_id(param_2);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,uVar1 & 0xffff);
  iVar2 = CUser::GetUserState(param_2);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,iVar2);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)param_1,true);
  return;
}

```

---

## _MakeUserUdpIpPort

```asm
// === 082e8de2 pvp_assault::CAssaultPlace::_MakeUserUdpIpPort  [0x082e8de2-0x82e9045] ===
 82e8de2:	55                   	push   %ebp
 82e8de3:	89 e5                	mov    %esp,%ebp
 82e8de5:	83 ec 28             	sub    $0x28,%esp
 82e8de8:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e8deb:	c7 44 24 08 0b 00 00 	movl   $0xb,0x8(%esp)
 82e8df2:	00 
 82e8df3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82e8dfa:	00 
 82e8dfb:	89 04 24             	mov    %eax,(%esp)
 82e8dfe:	e8 f9 2a de ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 82e8e03:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 82e8e0a:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 82e8e11:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e8e14:	89 04 24             	mov    %eax,(%esp)
 82e8e17:	e8 30 7d e2 ff       	call   8110b4c <_ZN18InterfacePacketBuf9get_indexEv>
 82e8e1c:	89 45 ec             	mov    %eax,-0x14(%ebp)
 82e8e1f:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e8e22:	8b 55 f0             	mov    -0x10(%ebp),%edx
 82e8e25:	89 54 24 04          	mov    %edx,0x4(%esp)
 82e8e29:	89 04 24             	mov    %eax,(%esp)
 82e8e2c:	e8 ef 2a de ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 82e8e31:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 82e8e38:	e9 cc 01 00 00       	jmp    82e9009 <_ZN11pvp_assault13CAssaultPlace18_MakeUserUdpIpPortEP11PacketGuard+0x227>
 82e8e3d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82e8e40:	c1 e0 05             	shl    $0x5,%eax
 82e8e43:	03 45 08             	add    0x8(%ebp),%eax
 82e8e46:	89 04 24             	mov    %eax,(%esp)
 82e8e49:	e8 0e 77 00 00       	call   82f055c <_ZN11pvp_assault10CAssaulter5EmptyEv>
 82e8e4e:	84 c0                	test   %al,%al
 82e8e50:	0f 85 ae 01 00 00    	jne    82e9004 <_ZN11pvp_assault13CAssaultPlace18_MakeUserUdpIpPortEP11PacketGuard+0x222>
 82e8e56:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82e8e59:	c1 e0 05             	shl    $0x5,%eax
 82e8e5c:	03 45 08             	add    0x8(%ebp),%eax
 82e8e5f:	89 04 24             	mov    %eax,(%esp)
 82e8e62:	e8 db 76 00 00       	call   82f0542 <_ZN11pvp_assault10CAssaulter7GetUserEv>
 82e8e67:	89 04 24             	mov    %eax,(%esp)
 82e8e6a:	e8 0d 15 df ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 82e8e6f:	0f b7 d0             	movzwl %ax,%edx
 82e8e72:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e8e75:	89 54 24 04          	mov    %edx,0x4(%esp)
 82e8e79:	89 04 24             	mov    %eax,(%esp)
 82e8e7c:	e8 23 10 df ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 82e8e81:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82e8e84:	c1 e0 05             	shl    $0x5,%eax
 82e8e87:	03 45 08             	add    0x8(%ebp),%eax
 82e8e8a:	89 04 24             	mov    %eax,(%esp)
 82e8e8d:	e8 b0 76 00 00       	call   82f0542 <_ZN11pvp_assault10CAssaulter7GetUserEv>
 82e8e92:	05 e0 00 00 00       	add    $0xe0,%eax
 82e8e97:	89 04 24             	mov    %eax,(%esp)
 82e8e9a:	e8 39 8d 00 00       	call   82f1bd8 <_ZN8CNetworkILi4096ELi450000EE12get_inner_ipEv>
 82e8e9f:	89 c2                	mov    %eax,%edx
 82e8ea1:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e8ea4:	89 54 24 04          	mov    %edx,0x4(%esp)
 82e8ea8:	89 04 24             	mov    %eax,(%esp)
 82e8eab:	e8 8c 2a de ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 82e8eb0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82e8eb3:	c1 e0 05             	shl    $0x5,%eax
 82e8eb6:	03 45 08             	add    0x8(%ebp),%eax
 82e8eb9:	89 04 24             	mov    %eax,(%esp)
 82e8ebc:	e8 81 76 00 00       	call   82f0542 <_ZN11pvp_assault10CAssaulter7GetUserEv>
 82e8ec1:	05 e0 00 00 00       	add    $0xe0,%eax
 82e8ec6:	89 04 24             	mov    %eax,(%esp)
 82e8ec9:	e8 18 8d 00 00       	call   82f1be6 <_ZN8CNetworkILi4096ELi450000EE6get_ipEv>
 82e8ece:	89 c2                	mov    %eax,%edx
 82e8ed0:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e8ed3:	89 54 24 04          	mov    %edx,0x4(%esp)
 82e8ed7:	89 04 24             	mov    %eax,(%esp)
 82e8eda:	e8 5d 2a de ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 82e8edf:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82e8ee2:	c1 e0 05             	shl    $0x5,%eax
 82e8ee5:	03 45 08             	add    0x8(%ebp),%eax
 82e8ee8:	89 04 24             	mov    %eax,(%esp)
 82e8eeb:	e8 52 76 00 00       	call   82f0542 <_ZN11pvp_assault10CAssaulter7GetUserEv>
 82e8ef0:	05 e0 00 00 00       	add    $0xe0,%eax
 82e8ef5:	89 04 24             	mov    %eax,(%esp)
 82e8ef8:	e8 f7 8c 00 00       	call   82f1bf4 <_ZN8CNetworkILi4096ELi450000EE8get_portEv>
 82e8efd:	0f b7 d0             	movzwl %ax,%edx
 82e8f00:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e8f03:	89 54 24 04          	mov    %edx,0x4(%esp)
 82e8f07:	89 04 24             	mov    %eax,(%esp)
 82e8f0a:	e8 95 0f df ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 82e8f0f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82e8f12:	c1 e0 05             	shl    $0x5,%eax
 82e8f15:	03 45 08             	add    0x8(%ebp),%eax
 82e8f18:	89 04 24             	mov    %eax,(%esp)
 82e8f1b:	e8 22 76 00 00       	call   82f0542 <_ZN11pvp_assault10CAssaulter7GetUserEv>
 82e8f20:	89 04 24             	mov    %eax,(%esp)
 82e8f23:	e8 46 14 df ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 82e8f28:	89 c2                	mov    %eax,%edx
 82e8f2a:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e8f2d:	89 54 24 04          	mov    %edx,0x4(%esp)
 82e8f31:	89 04 24             	mov    %eax,(%esp)
 82e8f34:	e8 03 2a de ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 82e8f39:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82e8f3c:	c1 e0 05             	shl    $0x5,%eax
 82e8f3f:	03 45 08             	add    0x8(%ebp),%eax
 82e8f42:	89 04 24             	mov    %eax,(%esp)
 82e8f45:	e8 f8 75 00 00       	call   82f0542 <_ZN11pvp_assault10CAssaulter7GetUserEv>
 82e8f4a:	05 e0 00 00 00       	add    $0xe0,%eax
 82e8f4f:	89 04 24             	mov    %eax,(%esp)
 82e8f52:	e8 89 de f4 ff       	call   8236de0 <_ZN8CNetworkILi4096ELi450000EE12get_nat_typeEv>
 82e8f57:	0f be d0             	movsbl %al,%edx
 82e8f5a:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e8f5d:	89 54 24 04          	mov    %edx,0x4(%esp)
 82e8f61:	89 04 24             	mov    %eax,(%esp)
 82e8f64:	e8 b7 29 de ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 82e8f69:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82e8f6c:	c1 e0 05             	shl    $0x5,%eax
 82e8f6f:	03 45 08             	add    0x8(%ebp),%eax
 82e8f72:	89 04 24             	mov    %eax,(%esp)
 82e8f75:	e8 c8 75 00 00       	call   82f0542 <_ZN11pvp_assault10CAssaulter7GetUserEv>
 82e8f7a:	05 e0 00 00 00       	add    $0xe0,%eax
 82e8f7f:	89 04 24             	mov    %eax,(%esp)
 82e8f82:	e8 7d 8c 00 00       	call   82f1c04 <_ZN8CNetworkILi4096ELi450000EE7get_mtuEv>
 82e8f87:	89 c2                	mov    %eax,%edx
 82e8f89:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e8f8c:	89 54 24 04          	mov    %edx,0x4(%esp)
 82e8f90:	89 04 24             	mov    %eax,(%esp)
 82e8f93:	e8 a4 29 de ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 82e8f98:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82e8f9b:	c1 e0 05             	shl    $0x5,%eax
 82e8f9e:	03 45 08             	add    0x8(%ebp),%eax
 82e8fa1:	89 04 24             	mov    %eax,(%esp)
 82e8fa4:	e8 99 75 00 00       	call   82f0542 <_ZN11pvp_assault10CAssaulter7GetUserEv>
 82e8fa9:	89 04 24             	mov    %eax,(%esp)
 82e8fac:	e8 81 74 e3 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 82e8fb1:	85 c0                	test   %eax,%eax
 82e8fb3:	0f 95 c0             	setne  %al
 82e8fb6:	84 c0                	test   %al,%al
 82e8fb8:	74 31                	je     82e8feb <_ZN11pvp_assault13CAssaultPlace18_MakeUserUdpIpPortEP11PacketGuard+0x209>
 82e8fba:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82e8fbd:	c1 e0 05             	shl    $0x5,%eax
 82e8fc0:	03 45 08             	add    0x8(%ebp),%eax
 82e8fc3:	89 04 24             	mov    %eax,(%esp)
 82e8fc6:	e8 77 75 00 00       	call   82f0542 <_ZN11pvp_assault10CAssaulter7GetUserEv>
 82e8fcb:	89 04 24             	mov    %eax,(%esp)
 82e8fce:	e8 5f 74 e3 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 82e8fd3:	0f b6 40 75          	movzbl 0x75(%eax),%eax
 82e8fd7:	0f b6 d0             	movzbl %al,%edx
 82e8fda:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e8fdd:	89 54 24 04          	mov    %edx,0x4(%esp)
 82e8fe1:	89 04 24             	mov    %eax,(%esp)
 82e8fe4:	e8 37 29 de ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 82e8fe9:	eb 13                	jmp    82e8ffe <_ZN11pvp_assault13CAssaultPlace18_MakeUserUdpIpPortEP11PacketGuard+0x21c>
 82e8feb:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e8fee:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82e8ff5:	00 
 82e8ff6:	89 04 24             	mov    %eax,(%esp)
 82e8ff9:	e8 22 29 de ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 82e8ffe:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 82e9002:	eb 01                	jmp    82e9005 <_ZN11pvp_assault13CAssaultPlace18_MakeUserUdpIpPortEP11PacketGuard+0x223>
 82e9004:	90                   	nop
 82e9005:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 82e9009:	83 7d f4 07          	cmpl   $0x7,-0xc(%ebp)
 82e900d:	0f 9e c0             	setle  %al
 82e9010:	84 c0                	test   %al,%al
 82e9012:	0f 85 25 fe ff ff    	jne    82e8e3d <_ZN11pvp_assault13CAssaultPlace18_MakeUserUdpIpPortEP11PacketGuard+0x5b>
 82e9018:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e901b:	8b 55 f0             	mov    -0x10(%ebp),%edx
 82e901e:	89 54 24 08          	mov    %edx,0x8(%esp)
 82e9022:	8d 55 ec             	lea    -0x14(%ebp),%edx
 82e9025:	89 54 24 04          	mov    %edx,0x4(%esp)
 82e9029:	89 04 24             	mov    %eax,(%esp)
 82e902c:	e8 f7 7a e2 ff       	call   8110b28 <_ZN18InterfacePacketBuf8put_byteERii>
 82e9031:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e9034:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82e903b:	00 
 82e903c:	89 04 24             	mov    %eax,(%esp)
 82e903f:	e8 14 29 de ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 82e9044:	c9                   	leave
 82e9045:	c3                   	ret

```

```c
// pvp_assault::CAssaultPlace::_MakeUserUdpIpPort @ 0x82e8de2

/* pvp_assault::CAssaultPlace::_MakeUserUdpIpPort(PacketGuard*) */

void __thiscall
pvp_assault::CAssaultPlace::_MakeUserUdpIpPort(CAssaultPlace *this,PacketGuard *param_1)

{
  char cVar1;
  CUser *pCVar2;
  uint uVar3;
  int iVar4;
  CUserCharacInfo *pCVar5;
  int local_18;
  int local_14;
  int local_10;
  
  InterfacePacketBuf::put_header((InterfacePacketBuf *)param_1,0,0xb);
  local_18 = 0;
  local_14 = 0;
  local_18 = InterfacePacketBuf::get_index((InterfacePacketBuf *)param_1);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,local_14);
  for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
    cVar1 = CAssaulter::Empty((CAssaulter *)(this + local_10 * 0x20));
    if (cVar1 == '\0') {
      pCVar2 = (CUser *)CAssaulter::GetUser((CAssaulter *)(this + local_10 * 0x20));
      uVar3 = CUser::get_unique_id(pCVar2);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,uVar3 & 0xffff);
      iVar4 = CAssaulter::GetUser((CAssaulter *)(this + local_10 * 0x20));
      iVar4 = CNetwork<4096,450000>::get_inner_ip((CNetwork<4096,450000> *)(iVar4 + 0xe0));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,iVar4);
      iVar4 = CAssaulter::GetUser((CAssaulter *)(this + local_10 * 0x20));
      iVar4 = CNetwork<4096,450000>::get_ip((CNetwork<4096,450000> *)(iVar4 + 0xe0));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,iVar4);
      iVar4 = CAssaulter::GetUser((CAssaulter *)(this + local_10 * 0x20));
      uVar3 = CNetwork<4096,450000>::get_port((CNetwork<4096,450000> *)(iVar4 + 0xe0));
      InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,uVar3 & 0xffff);
      pCVar2 = (CUser *)CAssaulter::GetUser((CAssaulter *)(this + local_10 * 0x20));
      iVar4 = CUser::get_acc_id(pCVar2);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,iVar4);
      iVar4 = CAssaulter::GetUser((CAssaulter *)(this + local_10 * 0x20));
      cVar1 = CNetwork<4096,450000>::get_nat_type((CNetwork<4096,450000> *)(iVar4 + 0xe0));
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,(int)cVar1);
      iVar4 = CAssaulter::GetUser((CAssaulter *)(this + local_10 * 0x20));
      iVar4 = CNetwork<4096,450000>::get_mtu((CNetwork<4096,450000> *)(iVar4 + 0xe0));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,iVar4);
      pCVar5 = (CUserCharacInfo *)CAssaulter::GetUser((CAssaulter *)(this + local_10 * 0x20));
      iVar4 = CUserCharacInfo::getCurCharacR(pCVar5);
      if (iVar4 == 0) {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,0);
      }
      else {
        pCVar5 = (CUserCharacInfo *)CAssaulter::GetUser((CAssaulter *)(this + local_10 * 0x20));
        iVar4 = CUserCharacInfo::getCurCharacR(pCVar5);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,(uint)*(byte *)(iVar4 + 0x75));
      }
      local_14 = local_14 + 1;
    }
  }
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,&local_18,local_14);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)param_1,true);
  return;
}

```

---

## _MakeViewAssaultIconPlayer

```asm
// === 082e8afc pvp_assault::CAssaultPlace::_MakeViewAssaultIconPlayer  [0x082e8afc-0x82e8b65] ===
 82e8afc:	55                   	push   %ebp
 82e8afd:	89 e5                	mov    %esp,%ebp
 82e8aff:	83 ec 28             	sub    $0x28,%esp
 82e8b02:	8b 45 10             	mov    0x10(%ebp),%eax
 82e8b05:	88 45 f4             	mov    %al,-0xc(%ebp)
 82e8b08:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e8b0b:	c7 44 24 08 86 00 00 	movl   $0x86,0x8(%esp)
 82e8b12:	00 
 82e8b13:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82e8b1a:	00 
 82e8b1b:	89 04 24             	mov    %eax,(%esp)
 82e8b1e:	e8 d9 2d de ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 82e8b23:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e8b26:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82e8b2d:	00 
 82e8b2e:	89 04 24             	mov    %eax,(%esp)
 82e8b31:	e8 6e 13 df ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 82e8b36:	0f b6 45 f4          	movzbl -0xc(%ebp),%eax
 82e8b3a:	89 44 24 08          	mov    %eax,0x8(%esp)
 82e8b3e:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e8b41:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e8b45:	8b 45 08             	mov    0x8(%ebp),%eax
 82e8b48:	89 04 24             	mov    %eax,(%esp)
 82e8b4b:	e8 70 fe ff ff       	call   82e89c0 <_ZN11pvp_assault13CAssaultPlace28MakeViewAssaultIconOnePlayerEP11PacketGuardb>
 82e8b50:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e8b53:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82e8b5a:	00 
 82e8b5b:	89 04 24             	mov    %eax,(%esp)
 82e8b5e:	e8 f5 2d de ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 82e8b63:	c9                   	leave
 82e8b64:	c3                   	ret
 82e8b65:	90                   	nop

```

```c
// pvp_assault::CAssaultPlace::_MakeViewAssaultIconPlayer @ 0x82e8afc

/* pvp_assault::CAssaultPlace::_MakeViewAssaultIconPlayer(PacketGuard*, bool) */

void __thiscall
pvp_assault::CAssaultPlace::_MakeViewAssaultIconPlayer
          (CAssaultPlace *this,PacketGuard *param_1,bool param_2)

{
  InterfacePacketBuf::put_header((InterfacePacketBuf *)param_1,0,0x86);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,1);
  MakeViewAssaultIconOnePlayer(this,param_1,param_2);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)param_1,true);
  return;
}

```

---

## _MoveAssaultPlace

```asm
// === 082e8300 pvp_assault::CAssaultPlace::_MoveAssaultPlace  [0x082e8300-0x82e8365] ===
 82e8300:	55                   	push   %ebp
 82e8301:	89 e5                	mov    %esp,%ebp
 82e8303:	56                   	push   %esi
 82e8304:	53                   	push   %ebx
 82e8305:	83 ec 20             	sub    $0x20,%esp
 82e8308:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82e830b:	89 04 24             	mov    %eax,(%esp)
 82e830e:	e8 39 5a 2a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 82e8313:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82e8316:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e831a:	8b 45 08             	mov    0x8(%ebp),%eax
 82e831d:	89 04 24             	mov    %eax,(%esp)
 82e8320:	e8 09 02 00 00       	call   82e852e <_ZN11pvp_assault13CAssaultPlace21_MakeMoveAssaultPlaceEP11PacketGuard>
 82e8325:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82e8328:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e832c:	8b 45 08             	mov    0x8(%ebp),%eax
 82e832f:	89 04 24             	mov    %eax,(%esp)
 82e8332:	e8 bf e8 ff ff       	call   82e6bf6 <_ZN11pvp_assault13CAssaultPlace10SendPacketER11PacketGuard>
 82e8337:	eb 1b                	jmp    82e8354 <_ZN11pvp_assault13CAssaultPlace17_MoveAssaultPlaceEv+0x54>
 82e8339:	89 d3                	mov    %edx,%ebx
 82e833b:	89 c6                	mov    %eax,%esi
 82e833d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82e8340:	89 04 24             	mov    %eax,(%esp)
 82e8343:	e8 38 5b 2a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82e8348:	89 f0                	mov    %esi,%eax
 82e834a:	89 da                	mov    %ebx,%edx
 82e834c:	89 04 24             	mov    %eax,(%esp)
 82e834f:	e8 fc b3 7f 00       	call   8ae3750 <_Unwind_Resume>
 82e8354:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82e8357:	89 04 24             	mov    %eax,(%esp)
 82e835a:	e8 21 5b 2a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82e835f:	83 c4 20             	add    $0x20,%esp
 82e8362:	5b                   	pop    %ebx
 82e8363:	5e                   	pop    %esi
 82e8364:	5d                   	pop    %ebp
 82e8365:	c3                   	ret

```

```c
// pvp_assault::CAssaultPlace::_MoveAssaultPlace @ 0x82e8300

/* pvp_assault::CAssaultPlace::_MoveAssaultPlace() */

void __thiscall pvp_assault::CAssaultPlace::_MoveAssaultPlace(CAssaultPlace *this)

{
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 082e8320 to 082e8336 has its CatchHandler @ 082e8339 */
  _MakeMoveAssaultPlace(this,local_18);
  SendPacket(this,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}

```

---

## _MoveUser

```asm
// === 082e782a pvp_assault::CAssaultPlace::_MoveUser  [0x082e782a-0x82e7917] ===
 82e782a:	55                   	push   %ebp
 82e782b:	89 e5                	mov    %esp,%ebp
 82e782d:	83 ec 48             	sub    $0x48,%esp
 82e7830:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 82e7837:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 82e783e:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 82e7845:	e9 bd 00 00 00       	jmp    82e7907 <_ZN11pvp_assault13CAssaultPlace9_MoveUserEPNS_12CDispositionEii+0xdd>
 82e784a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82e784d:	c1 e0 05             	shl    $0x5,%eax
 82e7850:	03 45 08             	add    0x8(%ebp),%eax
 82e7853:	89 04 24             	mov    %eax,(%esp)
 82e7856:	e8 01 8d 00 00       	call   82f055c <_ZN11pvp_assault10CAssaulter5EmptyEv>
 82e785b:	84 c0                	test   %al,%al
 82e785d:	0f 85 9f 00 00 00    	jne    82e7902 <_ZN11pvp_assault13CAssaultPlace9_MoveUserEPNS_12CDispositionEii+0xd8>
 82e7863:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82e7866:	c1 e0 05             	shl    $0x5,%eax
 82e7869:	03 45 08             	add    0x8(%ebp),%eax
 82e786c:	89 04 24             	mov    %eax,(%esp)
 82e786f:	e8 fc 8c 00 00       	call   82f0570 <_ZN11pvp_assault10CAssaulter7GetTeamEv>
 82e7874:	89 45 cc             	mov    %eax,-0x34(%ebp)
 82e7877:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82e787a:	c1 e0 05             	shl    $0x5,%eax
 82e787d:	03 45 08             	add    0x8(%ebp),%eax
 82e7880:	89 04 24             	mov    %eax,(%esp)
 82e7883:	e8 e8 8c 00 00       	call   82f0570 <_ZN11pvp_assault10CAssaulter7GetTeamEv>
 82e7888:	8b 44 85 ec          	mov    -0x14(%ebp,%eax,4),%eax
 82e788c:	89 45 d0             	mov    %eax,-0x30(%ebp)
 82e788f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82e7892:	c1 e0 05             	shl    $0x5,%eax
 82e7895:	03 45 08             	add    0x8(%ebp),%eax
 82e7898:	89 04 24             	mov    %eax,(%esp)
 82e789b:	e8 a2 8c 00 00       	call   82f0542 <_ZN11pvp_assault10CAssaulter7GetUserEv>
 82e78a0:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 82e78a3:	8b 45 10             	mov    0x10(%ebp),%eax
 82e78a6:	89 45 d8             	mov    %eax,-0x28(%ebp)
 82e78a9:	8b 45 14             	mov    0x14(%ebp),%eax
 82e78ac:	89 45 dc             	mov    %eax,-0x24(%ebp)
 82e78af:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82e78b2:	c1 e0 05             	shl    $0x5,%eax
 82e78b5:	03 45 08             	add    0x8(%ebp),%eax
 82e78b8:	89 04 24             	mov    %eax,(%esp)
 82e78bb:	e8 b0 8c 00 00       	call   82f0570 <_ZN11pvp_assault10CAssaulter7GetTeamEv>
 82e78c0:	89 04 24             	mov    %eax,(%esp)
 82e78c3:	e8 84 dd ff ff       	call   82e564c <_ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM>
 82e78c8:	89 45 e8             	mov    %eax,-0x18(%ebp)
 82e78cb:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e78ce:	8b 00                	mov    (%eax),%eax
 82e78d0:	83 c0 08             	add    $0x8,%eax
 82e78d3:	8b 10                	mov    (%eax),%edx
 82e78d5:	8d 45 cc             	lea    -0x34(%ebp),%eax
 82e78d8:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e78dc:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e78df:	89 04 24             	mov    %eax,(%esp)
 82e78e2:	ff d2                	call   *%edx
 82e78e4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82e78e7:	c1 e0 05             	shl    $0x5,%eax
 82e78ea:	03 45 08             	add    0x8(%ebp),%eax
 82e78ed:	89 04 24             	mov    %eax,(%esp)
 82e78f0:	e8 7b 8c 00 00       	call   82f0570 <_ZN11pvp_assault10CAssaulter7GetTeamEv>
 82e78f5:	8b 54 85 ec          	mov    -0x14(%ebp,%eax,4),%edx
 82e78f9:	83 c2 01             	add    $0x1,%edx
 82e78fc:	89 54 85 ec          	mov    %edx,-0x14(%ebp,%eax,4)
 82e7900:	eb 01                	jmp    82e7903 <_ZN11pvp_assault13CAssaultPlace9_MoveUserEPNS_12CDispositionEii+0xd9>
 82e7902:	90                   	nop
 82e7903:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 82e7907:	83 7d f4 07          	cmpl   $0x7,-0xc(%ebp)
 82e790b:	0f 9e c0             	setle  %al
 82e790e:	84 c0                	test   %al,%al
 82e7910:	0f 85 34 ff ff ff    	jne    82e784a <_ZN11pvp_assault13CAssaultPlace9_MoveUserEPNS_12CDispositionEii+0x20>
 82e7916:	c9                   	leave
 82e7917:	c3                   	ret

```

```c
// pvp_assault::CAssaultPlace::_MoveUser @ 0x82e782a

/* pvp_assault::CAssaultPlace::_MoveUser(pvp_assault::CDisposition*, int, int) */

void __thiscall
pvp_assault::CAssaultPlace::_MoveUser
          (CAssaultPlace *this,CDisposition *param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  int local_2c;
  int local_28;
  undefined4 local_1c;
  int local_18 [5];
  
  local_18[0] = 0;
  local_18[1] = 0;
  for (local_18[2] = 0; local_18[2] < 8; local_18[2] = local_18[2] + 1) {
    cVar1 = CAssaulter::Empty((CAssaulter *)(this + local_18[2] * 0x20));
    if (cVar1 == '\0') {
      local_38 = CAssaulter::GetTeam((CAssaulter *)(this + local_18[2] * 0x20));
      iVar2 = CAssaulter::GetTeam((CAssaulter *)(this + local_18[2] * 0x20));
      local_34 = local_18[iVar2];
      local_30 = CAssaulter::GetUser((CAssaulter *)(this + local_18[2] * 0x20));
      local_2c = param_2;
      local_28 = param_3;
      uVar3 = CAssaulter::GetTeam((CAssaulter *)(this + local_18[2] * 0x20));
      local_1c = GetDirectionByTeam(uVar3);
      (**(code **)(*(int *)param_1 + 8))(param_1,&local_38);
      iVar2 = CAssaulter::GetTeam((CAssaulter *)(this + local_18[2] * 0x20));
      local_18[iVar2] = local_18[iVar2] + 1;
    }
  }
  return;
}

```

---

## _PowerWarAssaultCheckIn

```asm
// === 082e72fa pvp_assault::CAssaultPlace::_PowerWarAssaultCheckIn  [0x082e72fa-0x82e7361] ===
 82e72fa:	55                   	push   %ebp
 82e72fb:	89 e5                	mov    %esp,%ebp
 82e72fd:	83 ec 28             	sub    $0x28,%esp
 82e7300:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 82e7307:	eb 4b                	jmp    82e7354 <_ZN11pvp_assault13CAssaultPlace23_PowerWarAssaultCheckInEv+0x5a>
 82e7309:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82e730c:	c1 e0 05             	shl    $0x5,%eax
 82e730f:	03 45 08             	add    0x8(%ebp),%eax
 82e7312:	89 04 24             	mov    %eax,(%esp)
 82e7315:	e8 42 92 00 00       	call   82f055c <_ZN11pvp_assault10CAssaulter5EmptyEv>
 82e731a:	84 c0                	test   %al,%al
 82e731c:	75 31                	jne    82e734f <_ZN11pvp_assault13CAssaultPlace23_PowerWarAssaultCheckInEv+0x55>
 82e731e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82e7321:	c1 e0 05             	shl    $0x5,%eax
 82e7324:	03 45 08             	add    0x8(%ebp),%eax
 82e7327:	89 04 24             	mov    %eax,(%esp)
 82e732a:	e8 13 92 00 00       	call   82f0542 <_ZN11pvp_assault10CAssaulter7GetUserEv>
 82e732f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82e7332:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 82e7339:	e8 60 49 de ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 82e733e:	8b 55 f4             	mov    -0xc(%ebp),%edx
 82e7341:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e7345:	89 14 24             	mov    %edx,(%esp)
 82e7348:	e8 35 96 00 00       	call   82f0982 <_ZN15CUserCharacInfo23SetPowerWarLastPlayTimeEl>
 82e734d:	eb 01                	jmp    82e7350 <_ZN11pvp_assault13CAssaultPlace23_PowerWarAssaultCheckInEv+0x56>
 82e734f:	90                   	nop
 82e7350:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 82e7354:	83 7d f0 07          	cmpl   $0x7,-0x10(%ebp)
 82e7358:	0f 9e c0             	setle  %al
 82e735b:	84 c0                	test   %al,%al
 82e735d:	75 aa                	jne    82e7309 <_ZN11pvp_assault13CAssaultPlace23_PowerWarAssaultCheckInEv+0xf>
 82e735f:	c9                   	leave
 82e7360:	c3                   	ret
 82e7361:	90                   	nop

```

```c
// pvp_assault::CAssaultPlace::_PowerWarAssaultCheckIn @ 0x82e72fa

/* pvp_assault::CAssaultPlace::_PowerWarAssaultCheckIn() */

void __thiscall pvp_assault::CAssaultPlace::_PowerWarAssaultCheckIn(CAssaultPlace *this)

{
  char cVar1;
  CUserCharacInfo *this_00;
  long lVar2;
  int local_14;
  
  for (local_14 = 0; local_14 < 8; local_14 = local_14 + 1) {
    cVar1 = CAssaulter::Empty((CAssaulter *)(this + local_14 * 0x20));
    if (cVar1 == '\0') {
      this_00 = (CUserCharacInfo *)CAssaulter::GetUser((CAssaulter *)(this + local_14 * 0x20));
      lVar2 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      CUserCharacInfo::SetPowerWarLastPlayTime(this_00,lVar2);
    }
  }
  return;
}

```

---

## _ProcessChaos

```asm
// === 082ebb9c pvp_assault::CAssaultPlace::_ProcessChaos  [0x082ebb9c-0x82ebd63] ===
 82ebb9c:	55                   	push   %ebp
 82ebb9d:	89 e5                	mov    %esp,%ebp
 82ebb9f:	56                   	push   %esi
 82ebba0:	53                   	push   %ebx
 82ebba1:	83 ec 30             	sub    $0x30,%esp
 82ebba4:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 82ebba8:	0f 88 ae 01 00 00    	js     82ebd5c <_ZN11pvp_assault13CAssaultPlace13_ProcessChaosEii+0x1c0>
 82ebbae:	83 7d 10 07          	cmpl   $0x7,0x10(%ebp)
 82ebbb2:	0f 8f a4 01 00 00    	jg     82ebd5c <_ZN11pvp_assault13CAssaultPlace13_ProcessChaosEii+0x1c0>
 82ebbb8:	8b 45 10             	mov    0x10(%ebp),%eax
 82ebbbb:	c1 e0 05             	shl    $0x5,%eax
 82ebbbe:	03 45 08             	add    0x8(%ebp),%eax
 82ebbc1:	89 04 24             	mov    %eax,(%esp)
 82ebbc4:	e8 a7 49 00 00       	call   82f0570 <_ZN11pvp_assault10CAssaulter7GetTeamEv>
 82ebbc9:	8b 55 08             	mov    0x8(%ebp),%edx
 82ebbcc:	8b 92 24 01 00 00    	mov    0x124(%edx),%edx
 82ebbd2:	39 d0                	cmp    %edx,%eax
 82ebbd4:	0f 94 c0             	sete   %al
 82ebbd7:	84 c0                	test   %al,%al
 82ebbd9:	0f 84 7d 01 00 00    	je     82ebd5c <_ZN11pvp_assault13CAssaultPlace13_ProcessChaosEii+0x1c0>
 82ebbdf:	8b 45 0c             	mov    0xc(%ebp),%eax
 82ebbe2:	c1 e0 05             	shl    $0x5,%eax
 82ebbe5:	03 45 08             	add    0x8(%ebp),%eax
 82ebbe8:	89 04 24             	mov    %eax,(%esp)
 82ebbeb:	e8 52 49 00 00       	call   82f0542 <_ZN11pvp_assault10CAssaulter7GetUserEv>
 82ebbf0:	89 45 f0             	mov    %eax,-0x10(%ebp)
 82ebbf3:	8b 45 10             	mov    0x10(%ebp),%eax
 82ebbf6:	c1 e0 05             	shl    $0x5,%eax
 82ebbf9:	03 45 08             	add    0x8(%ebp),%eax
 82ebbfc:	89 04 24             	mov    %eax,(%esp)
 82ebbff:	e8 3e 49 00 00       	call   82f0542 <_ZN11pvp_assault10CAssaulter7GetUserEv>
 82ebc04:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82ebc07:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 82ebc0b:	0f 84 4b 01 00 00    	je     82ebd5c <_ZN11pvp_assault13CAssaultPlace13_ProcessChaosEii+0x1c0>
 82ebc11:	8b 45 0c             	mov    0xc(%ebp),%eax
 82ebc14:	c1 e0 05             	shl    $0x5,%eax
 82ebc17:	03 45 08             	add    0x8(%ebp),%eax
 82ebc1a:	89 04 24             	mov    %eax,(%esp)
 82ebc1d:	e8 4e 49 00 00       	call   82f0570 <_ZN11pvp_assault10CAssaulter7GetTeamEv>
 82ebc22:	8b 55 08             	mov    0x8(%ebp),%edx
 82ebc25:	0f b6 84 02 28 01 00 	movzbl 0x128(%edx,%eax,1),%eax
 82ebc2c:	00 
 82ebc2d:	83 f0 01             	xor    $0x1,%eax
 82ebc30:	84 c0                	test   %al,%al
 82ebc32:	0f 84 e7 00 00 00    	je     82ebd1f <_ZN11pvp_assault13CAssaultPlace13_ProcessChaosEii+0x183>
 82ebc38:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82ebc3b:	c7 44 24 04 0a 00 00 	movl   $0xa,0x4(%esp)
 82ebc42:	00 
 82ebc43:	89 04 24             	mov    %eax,(%esp)
 82ebc46:	e8 35 a3 35 00       	call   8645f80 <_ZN15CUserCharacInfo22AddCurCharacChaosPointEi>
 82ebc4b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82ebc4e:	89 04 24             	mov    %eax,(%esp)
 82ebc51:	e8 dc 47 e3 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 82ebc56:	85 c0                	test   %eax,%eax
 82ebc58:	0f 95 c0             	setne  %al
 82ebc5b:	84 c0                	test   %al,%al
 82ebc5d:	0f 84 bc 00 00 00    	je     82ebd1f <_ZN11pvp_assault13CAssaultPlace13_ProcessChaosEii+0x183>
 82ebc63:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82ebc66:	89 04 24             	mov    %eax,(%esp)
 82ebc69:	e8 de 20 2a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 82ebc6e:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 82ebc75:	00 
 82ebc76:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82ebc7d:	00 
 82ebc7e:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82ebc81:	89 04 24             	mov    %eax,(%esp)
 82ebc84:	e8 73 fc dd ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 82ebc89:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82ebc90:	00 
 82ebc91:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82ebc94:	89 04 24             	mov    %eax,(%esp)
 82ebc97:	e8 84 fc dd ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 82ebc9c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82ebca3:	00 
 82ebca4:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82ebca7:	89 04 24             	mov    %eax,(%esp)
 82ebcaa:	e8 f5 e1 de ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 82ebcaf:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82ebcb2:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82ebcb9:	00 
 82ebcba:	89 44 24 04          	mov    %eax,0x4(%esp)
 82ebcbe:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82ebcc1:	89 04 24             	mov    %eax,(%esp)
 82ebcc4:	e8 85 e7 36 00       	call   865a44e <_ZN5CUser15make_basic_infoEPcc>
 82ebcc9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82ebcd0:	00 
 82ebcd1:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82ebcd4:	89 04 24             	mov    %eax,(%esp)
 82ebcd7:	e8 7c fc dd ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 82ebcdc:	e8 c6 e6 de ff       	call   80da3a7 <_Z11G_GameWorldv>
 82ebce1:	8b 55 f4             	mov    -0xc(%ebp),%edx
 82ebce4:	89 54 24 08          	mov    %edx,0x8(%esp)
 82ebce8:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 82ebceb:	89 54 24 04          	mov    %edx,0x4(%esp)
 82ebcef:	89 04 24             	mov    %eax,(%esp)
 82ebcf2:	e8 65 8c e4 ff       	call   813495c <_ZN9GameWorld8send_allER11PacketGuardP5CUser>
 82ebcf7:	eb 1b                	jmp    82ebd14 <_ZN11pvp_assault13CAssaultPlace13_ProcessChaosEii+0x178>
 82ebcf9:	89 d3                	mov    %edx,%ebx
 82ebcfb:	89 c6                	mov    %eax,%esi
 82ebcfd:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82ebd00:	89 04 24             	mov    %eax,(%esp)
 82ebd03:	e8 78 21 2a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82ebd08:	89 f0                	mov    %esi,%eax
 82ebd0a:	89 da                	mov    %ebx,%edx
 82ebd0c:	89 04 24             	mov    %eax,(%esp)
 82ebd0f:	e8 3c 7a 7f 00       	call   8ae3750 <_Unwind_Resume>
 82ebd14:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82ebd17:	89 04 24             	mov    %eax,(%esp)
 82ebd1a:	e8 61 21 2a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82ebd1f:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 82ebd23:	74 37                	je     82ebd5c <_ZN11pvp_assault13CAssaultPlace13_ProcessChaosEii+0x1c0>
 82ebd25:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82ebd28:	89 04 24             	mov    %eax,(%esp)
 82ebd2b:	e8 a8 4d 00 00       	call   82f0ad8 <_ZN15CUserCharacInfo22GetCurCharacChaosPointEv>
 82ebd30:	85 c0                	test   %eax,%eax
 82ebd32:	0f 9f c0             	setg   %al
 82ebd35:	84 c0                	test   %al,%al
 82ebd37:	74 0d                	je     82ebd46 <_ZN11pvp_assault13CAssaultPlace13_ProcessChaosEii+0x1aa>
 82ebd39:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82ebd3c:	89 04 24             	mov    %eax,(%esp)
 82ebd3f:	e8 20 4f 00 00       	call   82f0c64 <_ZN15CUserCharacInfo26IncCurCharacChaosModeCountEv>
 82ebd44:	eb 0b                	jmp    82ebd51 <_ZN11pvp_assault13CAssaultPlace13_ProcessChaosEii+0x1b5>
 82ebd46:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82ebd49:	89 04 24             	mov    %eax,(%esp)
 82ebd4c:	e8 43 4f 00 00       	call   82f0c94 <_ZN15CUserCharacInfo26IncCurCharacChaosKillCountEv>
 82ebd51:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82ebd54:	89 04 24             	mov    %eax,(%esp)
 82ebd57:	e8 68 4f 00 00       	call   82f0cc4 <_ZN15CUserCharacInfo25IncCurCharacChaosDieCountEv>
 82ebd5c:	83 c4 30             	add    $0x30,%esp
 82ebd5f:	5b                   	pop    %ebx
 82ebd60:	5e                   	pop    %esi
 82ebd61:	5d                   	pop    %ebp
 82ebd62:	c3                   	ret
 82ebd63:	90                   	nop

```

```c
// pvp_assault::CAssaultPlace::_ProcessChaos @ 0x82ebb9c

/* pvp_assault::CAssaultPlace::_ProcessChaos(int, int) */

void __thiscall
pvp_assault::CAssaultPlace::_ProcessChaos(CAssaultPlace *this,int param_1,int param_2)

{
  int iVar1;
  GameWorld *this_00;
  PacketGuard local_20 [12];
  CUserCharacInfo *local_14;
  CUserCharacInfo *local_10;
  
  if ((-1 < param_2) && (param_2 < 8)) {
    iVar1 = CAssaulter::GetTeam((CAssaulter *)(this + param_2 * 0x20));
    if (iVar1 == *(int *)(this + 0x124)) {
      local_14 = (CUserCharacInfo *)CAssaulter::GetUser((CAssaulter *)(this + param_1 * 0x20));
      local_10 = (CUserCharacInfo *)CAssaulter::GetUser((CAssaulter *)(this + param_2 * 0x20));
      if (local_10 != (CUserCharacInfo *)0x0) {
        iVar1 = CAssaulter::GetTeam((CAssaulter *)(this + param_1 * 0x20));
        if (this[iVar1 + 0x128] != (CAssaultPlace)0x1) {
          CUserCharacInfo::AddCurCharacChaosPoint(local_10,10);
          iVar1 = CUserCharacInfo::getCurCharacR(local_10);
          if (iVar1 != 0) {
            PacketGuard::PacketGuard(local_20);
                    /* try { // try from 082ebc84 to 082ebcf6 has its CatchHandler @ 082ebcf9 */
            InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,2);
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,0);
            InterfacePacketBuf::put_short((InterfacePacketBuf *)local_20,1);
            CUser::make_basic_info((CUser *)local_10,(char *)local_20,'\0');
            InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
            this_00 = (GameWorld *)G_GameWorld();
            GameWorld::send_all(this_00,local_20,(CUser *)local_10);
            PacketGuard::~PacketGuard(local_20);
          }
        }
        if (local_14 != (CUserCharacInfo *)0x0) {
          iVar1 = CUserCharacInfo::GetCurCharacChaosPoint(local_14);
          if (iVar1 < 1) {
            CUserCharacInfo::IncCurCharacChaosKillCount(local_10);
          }
          else {
            CUserCharacInfo::IncCurCharacChaosModeCount(local_10);
          }
          CUserCharacInfo::IncCurCharacChaosDieCount(local_14);
        }
      }
    }
  }
  return;
}

```

---

## _SendCloseAssault

```asm
// === 082e7b2a pvp_assault::CAssaultPlace::_SendCloseAssault  [0x082e7b2a-0x82e7bbb] ===
 82e7b2a:	55                   	push   %ebp
 82e7b2b:	89 e5                	mov    %esp,%ebp
 82e7b2d:	56                   	push   %esi
 82e7b2e:	53                   	push   %ebx
 82e7b2f:	83 ec 20             	sub    $0x20,%esp
 82e7b32:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e7b35:	89 04 24             	mov    %eax,(%esp)
 82e7b38:	e8 f5 88 e3 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 82e7b3d:	85 c0                	test   %eax,%eax
 82e7b3f:	0f 95 c0             	setne  %al
 82e7b42:	84 c0                	test   %al,%al
 82e7b44:	74 6b                	je     82e7bb1 <_ZN11pvp_assault13CAssaultPlace17_SendCloseAssaultEP5CUseri+0x87>
 82e7b46:	83 7d 10 1d          	cmpl   $0x1d,0x10(%ebp)
 82e7b4a:	7f 07                	jg     82e7b53 <_ZN11pvp_assault13CAssaultPlace17_SendCloseAssaultEP5CUseri+0x29>
 82e7b4c:	c7 45 10 1e 00 00 00 	movl   $0x1e,0x10(%ebp)
 82e7b53:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82e7b56:	89 04 24             	mov    %eax,(%esp)
 82e7b59:	e8 ee 61 2a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 82e7b5e:	8b 45 10             	mov    0x10(%ebp),%eax
 82e7b61:	89 44 24 08          	mov    %eax,0x8(%esp)
 82e7b65:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82e7b68:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e7b6c:	8b 45 08             	mov    0x8(%ebp),%eax
 82e7b6f:	89 04 24             	mov    %eax,(%esp)
 82e7b72:	e8 5f 0d 00 00       	call   82e88d6 <_ZN11pvp_assault13CAssaultPlace17_MakeCloseAssaultEP11PacketGuardi>
 82e7b77:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82e7b7a:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e7b7e:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e7b81:	89 04 24             	mov    %eax,(%esp)
 82e7b84:	e8 31 0a 36 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 82e7b89:	eb 1b                	jmp    82e7ba6 <_ZN11pvp_assault13CAssaultPlace17_SendCloseAssaultEP5CUseri+0x7c>
 82e7b8b:	89 d3                	mov    %edx,%ebx
 82e7b8d:	89 c6                	mov    %eax,%esi
 82e7b8f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82e7b92:	89 04 24             	mov    %eax,(%esp)
 82e7b95:	e8 e6 62 2a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82e7b9a:	89 f0                	mov    %esi,%eax
 82e7b9c:	89 da                	mov    %ebx,%edx
 82e7b9e:	89 04 24             	mov    %eax,(%esp)
 82e7ba1:	e8 aa bb 7f 00       	call   8ae3750 <_Unwind_Resume>
 82e7ba6:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82e7ba9:	89 04 24             	mov    %eax,(%esp)
 82e7bac:	e8 cf 62 2a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82e7bb1:	8b 45 10             	mov    0x10(%ebp),%eax
 82e7bb4:	83 c4 20             	add    $0x20,%esp
 82e7bb7:	5b                   	pop    %ebx
 82e7bb8:	5e                   	pop    %esi
 82e7bb9:	5d                   	pop    %ebp
 82e7bba:	c3                   	ret
 82e7bbb:	90                   	nop

```

```c
// pvp_assault::CAssaultPlace::_SendCloseAssault @ 0x82e7b2a

/* pvp_assault::CAssaultPlace::_SendCloseAssault(CUser*, int) */

int __thiscall
pvp_assault::CAssaultPlace::_SendCloseAssault(CAssaultPlace *this,CUser *param_1,int param_2)

{
  int iVar1;
  PacketGuard local_18 [12];
  
  iVar1 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
  if (iVar1 != 0) {
    if (param_2 < 0x1e) {
      param_2 = 0x1e;
    }
    PacketGuard::PacketGuard(local_18);
                    /* try { // try from 082e7b72 to 082e7b88 has its CatchHandler @ 082e7b8b */
    _MakeCloseAssault(this,local_18,param_2);
    CUser::Send(param_1,local_18);
    PacketGuard::~PacketGuard(local_18);
  }
  return param_2;
}

```

---

## _SendGiveAlarm

```asm
// === 082e7ac4 pvp_assault::CAssaultPlace::_SendGiveAlarm  [0x082e7ac4-0x82e7b29] ===
 82e7ac4:	55                   	push   %ebp
 82e7ac5:	89 e5                	mov    %esp,%ebp
 82e7ac7:	56                   	push   %esi
 82e7ac8:	53                   	push   %ebx
 82e7ac9:	83 ec 20             	sub    $0x20,%esp
 82e7acc:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82e7acf:	89 04 24             	mov    %eax,(%esp)
 82e7ad2:	e8 75 62 2a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 82e7ad7:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82e7ada:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e7ade:	8b 45 08             	mov    0x8(%ebp),%eax
 82e7ae1:	89 04 24             	mov    %eax,(%esp)
 82e7ae4:	e8 23 16 00 00       	call   82e910c <_ZN11pvp_assault13CAssaultPlace14_MakeGiveAlarmEP11PacketGuard>
 82e7ae9:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82e7aec:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e7af0:	8b 45 08             	mov    0x8(%ebp),%eax
 82e7af3:	89 04 24             	mov    %eax,(%esp)
 82e7af6:	e8 fb f0 ff ff       	call   82e6bf6 <_ZN11pvp_assault13CAssaultPlace10SendPacketER11PacketGuard>
 82e7afb:	eb 1b                	jmp    82e7b18 <_ZN11pvp_assault13CAssaultPlace14_SendGiveAlarmEv+0x54>
 82e7afd:	89 d3                	mov    %edx,%ebx
 82e7aff:	89 c6                	mov    %eax,%esi
 82e7b01:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82e7b04:	89 04 24             	mov    %eax,(%esp)
 82e7b07:	e8 74 63 2a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82e7b0c:	89 f0                	mov    %esi,%eax
 82e7b0e:	89 da                	mov    %ebx,%edx
 82e7b10:	89 04 24             	mov    %eax,(%esp)
 82e7b13:	e8 38 bc 7f 00       	call   8ae3750 <_Unwind_Resume>
 82e7b18:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82e7b1b:	89 04 24             	mov    %eax,(%esp)
 82e7b1e:	e8 5d 63 2a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82e7b23:	83 c4 20             	add    $0x20,%esp
 82e7b26:	5b                   	pop    %ebx
 82e7b27:	5e                   	pop    %esi
 82e7b28:	5d                   	pop    %ebp
 82e7b29:	c3                   	ret

```

```c
// pvp_assault::CAssaultPlace::_SendGiveAlarm @ 0x82e7ac4

/* pvp_assault::CAssaultPlace::_SendGiveAlarm() */

void __thiscall pvp_assault::CAssaultPlace::_SendGiveAlarm(CAssaultPlace *this)

{
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 082e7ae4 to 082e7afa has its CatchHandler @ 082e7afd */
  _MakeGiveAlarm(this,local_18);
  SendPacket(this,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}

```

---

## _SendHoldVictory

```asm
// === 082ecaee pvp_assault::CAssaultPlace::_SendHoldVictory  [0x082ecaee-0x82ecdbb] ===
 82ecaee:	55                   	push   %ebp
 82ecaef:	89 e5                	mov    %esp,%ebp
 82ecaf1:	56                   	push   %esi
 82ecaf2:	53                   	push   %ebx
 82ecaf3:	83 ec 60             	sub    $0x60,%esp
 82ecaf6:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 82ecaf9:	89 04 24             	mov    %eax,(%esp)
 82ecafc:	e8 4b 12 2a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 82ecb01:	c7 44 24 08 09 01 00 	movl   $0x109,0x8(%esp)
 82ecb08:	00 
 82ecb09:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82ecb10:	00 
 82ecb11:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 82ecb14:	89 04 24             	mov    %eax,(%esp)
 82ecb17:	e8 e0 ed dd ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 82ecb1c:	8b 45 0c             	mov    0xc(%ebp),%eax
 82ecb1f:	89 04 24             	mov    %eax,(%esp)
 82ecb22:	e8 9f 31 f4 ff       	call   822fcc6 <_ZN5CUser12getPowerSideEv>
 82ecb27:	0f be c0             	movsbl %al,%eax
 82ecb2a:	89 44 24 04          	mov    %eax,0x4(%esp)
 82ecb2e:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 82ecb31:	89 04 24             	mov    %eax,(%esp)
 82ecb34:	e8 e7 ed dd ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 82ecb39:	8b 45 14             	mov    0x14(%ebp),%eax
 82ecb3c:	83 c0 01             	add    $0x1,%eax
 82ecb3f:	89 44 24 04          	mov    %eax,0x4(%esp)
 82ecb43:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 82ecb46:	89 04 24             	mov    %eax,(%esp)
 82ecb49:	e8 ee ed dd ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 82ecb4e:	8b 45 0c             	mov    0xc(%ebp),%eax
 82ecb51:	89 04 24             	mov    %eax,(%esp)
 82ecb54:	e8 f3 85 36 00       	call   865514c <_ZN5CUser8GetPartyEv>
 82ecb59:	89 45 c0             	mov    %eax,-0x40(%ebp)
 82ecb5c:	83 7d c0 00          	cmpl   $0x0,-0x40(%ebp)
 82ecb60:	0f 84 96 00 00 00    	je     82ecbfc <_ZN11pvp_assault13CAssaultPlace16_SendHoldVictoryEP5CUserS2_i+0x10e>
 82ecb66:	8b 45 c0             	mov    -0x40(%ebp),%eax
 82ecb69:	89 04 24             	mov    %eax,(%esp)
 82ecb6c:	e8 f9 d5 2a 00       	call   859a16a <_ZN6CParty16get_member_countEv>
 82ecb71:	89 44 24 04          	mov    %eax,0x4(%esp)
 82ecb75:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 82ecb78:	89 04 24             	mov    %eax,(%esp)
 82ecb7b:	e8 a0 ed dd ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 82ecb80:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 82ecb87:	eb 66                	jmp    82ecbef <_ZN11pvp_assault13CAssaultPlace16_SendHoldVictoryEP5CUserS2_i+0x101>
 82ecb89:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 82ecb8c:	89 44 24 04          	mov    %eax,0x4(%esp)
 82ecb90:	8b 45 c0             	mov    -0x40(%ebp),%eax
 82ecb93:	89 04 24             	mov    %eax,(%esp)
 82ecb96:	e8 c9 8b e5 ff       	call   8145764 <_ZN6CParty8get_userEi>
 82ecb9b:	89 45 c8             	mov    %eax,-0x38(%ebp)
 82ecb9e:	83 7d c8 00          	cmpl   $0x0,-0x38(%ebp)
 82ecba2:	74 47                	je     82ecbeb <_ZN11pvp_assault13CAssaultPlace16_SendHoldVictoryEP5CUserS2_i+0xfd>
 82ecba4:	8b 45 c8             	mov    -0x38(%ebp),%eax
 82ecba7:	89 04 24             	mov    %eax,(%esp)
 82ecbaa:	e8 79 44 e1 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 82ecbaf:	89 45 cc             	mov    %eax,-0x34(%ebp)
 82ecbb2:	8b 45 cc             	mov    -0x34(%ebp),%eax
 82ecbb5:	89 04 24             	mov    %eax,(%esp)
 82ecbb8:	e8 f3 17 d9 ff       	call   807e3b0 <strlen@plt>
 82ecbbd:	89 45 d0             	mov    %eax,-0x30(%ebp)
 82ecbc0:	8b 45 d0             	mov    -0x30(%ebp),%eax
 82ecbc3:	89 44 24 04          	mov    %eax,0x4(%esp)
 82ecbc7:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 82ecbca:	89 04 24             	mov    %eax,(%esp)
 82ecbcd:	e8 6a ed dd ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 82ecbd2:	8b 45 d0             	mov    -0x30(%ebp),%eax
 82ecbd5:	89 44 24 08          	mov    %eax,0x8(%esp)
 82ecbd9:	8b 45 cc             	mov    -0x34(%ebp),%eax
 82ecbdc:	89 44 24 04          	mov    %eax,0x4(%esp)
 82ecbe0:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 82ecbe3:	89 04 24             	mov    %eax,(%esp)
 82ecbe6:	e8 85 eb f3 ff       	call   822b770 <_ZN18InterfacePacketBuf7put_strEPKci>
 82ecbeb:	83 45 c4 01          	addl   $0x1,-0x3c(%ebp)
 82ecbef:	83 7d c4 03          	cmpl   $0x3,-0x3c(%ebp)
 82ecbf3:	0f 9e c0             	setle  %al
 82ecbf6:	84 c0                	test   %al,%al
 82ecbf8:	75 8f                	jne    82ecb89 <_ZN11pvp_assault13CAssaultPlace16_SendHoldVictoryEP5CUserS2_i+0x9b>
 82ecbfa:	eb 5a                	jmp    82ecc56 <_ZN11pvp_assault13CAssaultPlace16_SendHoldVictoryEP5CUserS2_i+0x168>
 82ecbfc:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82ecc03:	00 
 82ecc04:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 82ecc07:	89 04 24             	mov    %eax,(%esp)
 82ecc0a:	e8 11 ed dd ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 82ecc0f:	8b 45 0c             	mov    0xc(%ebp),%eax
 82ecc12:	89 04 24             	mov    %eax,(%esp)
 82ecc15:	e8 0e 44 e1 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 82ecc1a:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 82ecc1d:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 82ecc20:	89 04 24             	mov    %eax,(%esp)
 82ecc23:	e8 88 17 d9 ff       	call   807e3b0 <strlen@plt>
 82ecc28:	89 45 d8             	mov    %eax,-0x28(%ebp)
 82ecc2b:	8b 45 d8             	mov    -0x28(%ebp),%eax
 82ecc2e:	89 44 24 04          	mov    %eax,0x4(%esp)
 82ecc32:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 82ecc35:	89 04 24             	mov    %eax,(%esp)
 82ecc38:	e8 ff ec dd ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 82ecc3d:	8b 45 d8             	mov    -0x28(%ebp),%eax
 82ecc40:	89 44 24 08          	mov    %eax,0x8(%esp)
 82ecc44:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 82ecc47:	89 44 24 04          	mov    %eax,0x4(%esp)
 82ecc4b:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 82ecc4e:	89 04 24             	mov    %eax,(%esp)
 82ecc51:	e8 1a eb f3 ff       	call   822b770 <_ZN18InterfacePacketBuf7put_strEPKci>
 82ecc56:	8b 45 10             	mov    0x10(%ebp),%eax
 82ecc59:	89 04 24             	mov    %eax,(%esp)
 82ecc5c:	e8 eb 84 36 00       	call   865514c <_ZN5CUser8GetPartyEv>
 82ecc61:	89 45 dc             	mov    %eax,-0x24(%ebp)
 82ecc64:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 82ecc68:	0f 84 96 00 00 00    	je     82ecd04 <_ZN11pvp_assault13CAssaultPlace16_SendHoldVictoryEP5CUserS2_i+0x216>
 82ecc6e:	8b 45 dc             	mov    -0x24(%ebp),%eax
 82ecc71:	89 04 24             	mov    %eax,(%esp)
 82ecc74:	e8 f1 d4 2a 00       	call   859a16a <_ZN6CParty16get_member_countEv>
 82ecc79:	89 44 24 04          	mov    %eax,0x4(%esp)
 82ecc7d:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 82ecc80:	89 04 24             	mov    %eax,(%esp)
 82ecc83:	e8 98 ec dd ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 82ecc88:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 82ecc8f:	eb 66                	jmp    82eccf7 <_ZN11pvp_assault13CAssaultPlace16_SendHoldVictoryEP5CUserS2_i+0x209>
 82ecc91:	8b 45 e0             	mov    -0x20(%ebp),%eax
 82ecc94:	89 44 24 04          	mov    %eax,0x4(%esp)
 82ecc98:	8b 45 dc             	mov    -0x24(%ebp),%eax
 82ecc9b:	89 04 24             	mov    %eax,(%esp)
 82ecc9e:	e8 c1 8a e5 ff       	call   8145764 <_ZN6CParty8get_userEi>
 82ecca3:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 82ecca6:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 82eccaa:	74 47                	je     82eccf3 <_ZN11pvp_assault13CAssaultPlace16_SendHoldVictoryEP5CUserS2_i+0x205>
 82eccac:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 82eccaf:	89 04 24             	mov    %eax,(%esp)
 82eccb2:	e8 71 43 e1 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 82eccb7:	89 45 e8             	mov    %eax,-0x18(%ebp)
 82eccba:	8b 45 e8             	mov    -0x18(%ebp),%eax
 82eccbd:	89 04 24             	mov    %eax,(%esp)
 82eccc0:	e8 eb 16 d9 ff       	call   807e3b0 <strlen@plt>
 82eccc5:	89 45 ec             	mov    %eax,-0x14(%ebp)
 82eccc8:	8b 45 ec             	mov    -0x14(%ebp),%eax
 82ecccb:	89 44 24 04          	mov    %eax,0x4(%esp)
 82ecccf:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 82eccd2:	89 04 24             	mov    %eax,(%esp)
 82eccd5:	e8 62 ec dd ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 82eccda:	8b 45 ec             	mov    -0x14(%ebp),%eax
 82eccdd:	89 44 24 08          	mov    %eax,0x8(%esp)
 82ecce1:	8b 45 e8             	mov    -0x18(%ebp),%eax
 82ecce4:	89 44 24 04          	mov    %eax,0x4(%esp)
 82ecce8:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 82ecceb:	89 04 24             	mov    %eax,(%esp)
 82eccee:	e8 7d ea f3 ff       	call   822b770 <_ZN18InterfacePacketBuf7put_strEPKci>
 82eccf3:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 82eccf7:	83 7d e0 03          	cmpl   $0x3,-0x20(%ebp)
 82eccfb:	0f 9e c0             	setle  %al
 82eccfe:	84 c0                	test   %al,%al
 82ecd00:	75 8f                	jne    82ecc91 <_ZN11pvp_assault13CAssaultPlace16_SendHoldVictoryEP5CUserS2_i+0x1a3>
 82ecd02:	eb 5a                	jmp    82ecd5e <_ZN11pvp_assault13CAssaultPlace16_SendHoldVictoryEP5CUserS2_i+0x270>
 82ecd04:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82ecd0b:	00 
 82ecd0c:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 82ecd0f:	89 04 24             	mov    %eax,(%esp)
 82ecd12:	e8 09 ec dd ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 82ecd17:	8b 45 10             	mov    0x10(%ebp),%eax
 82ecd1a:	89 04 24             	mov    %eax,(%esp)
 82ecd1d:	e8 06 43 e1 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 82ecd22:	89 45 f0             	mov    %eax,-0x10(%ebp)
 82ecd25:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82ecd28:	89 04 24             	mov    %eax,(%esp)
 82ecd2b:	e8 80 16 d9 ff       	call   807e3b0 <strlen@plt>
 82ecd30:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82ecd33:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82ecd36:	89 44 24 04          	mov    %eax,0x4(%esp)
 82ecd3a:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 82ecd3d:	89 04 24             	mov    %eax,(%esp)
 82ecd40:	e8 f7 eb dd ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 82ecd45:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82ecd48:	89 44 24 08          	mov    %eax,0x8(%esp)
 82ecd4c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82ecd4f:	89 44 24 04          	mov    %eax,0x4(%esp)
 82ecd53:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 82ecd56:	89 04 24             	mov    %eax,(%esp)
 82ecd59:	e8 12 ea f3 ff       	call   822b770 <_ZN18InterfacePacketBuf7put_strEPKci>
 82ecd5e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82ecd65:	00 
 82ecd66:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 82ecd69:	89 04 24             	mov    %eax,(%esp)
 82ecd6c:	e8 e7 eb dd ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 82ecd71:	e8 31 d6 de ff       	call   80da3a7 <_Z11G_GameWorldv>
 82ecd76:	8d 55 b4             	lea    -0x4c(%ebp),%edx
 82ecd79:	89 54 24 08          	mov    %edx,0x8(%esp)
 82ecd7d:	c7 44 24 04 07 00 00 	movl   $0x7,0x4(%esp)
 82ecd84:	00 
 82ecd85:	89 04 24             	mov    %eax,(%esp)
 82ecd88:	e8 bb b1 3d 00       	call   86c7f48 <_ZN9GameWorld12send_to_villEiR11PacketGuard>
 82ecd8d:	eb 1b                	jmp    82ecdaa <_ZN11pvp_assault13CAssaultPlace16_SendHoldVictoryEP5CUserS2_i+0x2bc>
 82ecd8f:	89 d3                	mov    %edx,%ebx
 82ecd91:	89 c6                	mov    %eax,%esi
 82ecd93:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 82ecd96:	89 04 24             	mov    %eax,(%esp)
 82ecd99:	e8 e2 10 2a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82ecd9e:	89 f0                	mov    %esi,%eax
 82ecda0:	89 da                	mov    %ebx,%edx
 82ecda2:	89 04 24             	mov    %eax,(%esp)
 82ecda5:	e8 a6 69 7f 00       	call   8ae3750 <_Unwind_Resume>
 82ecdaa:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 82ecdad:	89 04 24             	mov    %eax,(%esp)
 82ecdb0:	e8 cb 10 2a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82ecdb5:	83 c4 60             	add    $0x60,%esp
 82ecdb8:	5b                   	pop    %ebx
 82ecdb9:	5e                   	pop    %esi
 82ecdba:	5d                   	pop    %ebp
 82ecdbb:	c3                   	ret

```

```c
// pvp_assault::CAssaultPlace::_SendHoldVictory @ 0x82ecaee

/* pvp_assault::CAssaultPlace::_SendHoldVictory(CUser*, CUser*, int) */

void __thiscall
pvp_assault::CAssaultPlace::_SendHoldVictory
          (CAssaultPlace *this,CUser *param_1,CUser *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  GameWorld *this_00;
  PacketGuard local_50 [12];
  CParty *local_44;
  int local_40;
  CUserCharacInfo *local_3c;
  char *local_38;
  size_t local_34;
  char *local_30;
  size_t local_2c;
  CParty *local_28;
  int local_24;
  CUserCharacInfo *local_20;
  char *local_1c;
  size_t local_18;
  char *local_14;
  size_t local_10;
  
  PacketGuard::PacketGuard(local_50);
                    /* try { // try from 082ecb17 to 082ecd8c has its CatchHandler @ 082ecd8f */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_50,0,0x109);
  cVar1 = CUser::getPowerSide(param_1);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,(int)cVar1);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_50,param_3 + 1);
  local_44 = (CParty *)CUser::GetParty(param_1);
  if (local_44 == (CParty *)0x0) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,1);
    local_30 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
    local_2c = strlen(local_30);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_50,local_2c);
    InterfacePacketBuf::put_str((InterfacePacketBuf *)local_50,local_30,local_2c);
  }
  else {
    iVar2 = CParty::get_member_count(local_44);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,iVar2);
    for (local_40 = 0; local_40 < 4; local_40 = local_40 + 1) {
      local_3c = (CUserCharacInfo *)CParty::get_user(local_44,local_40);
      if (local_3c != (CUserCharacInfo *)0x0) {
        local_38 = (char *)CUserCharacInfo::getCurCharacName(local_3c);
        local_34 = strlen(local_38);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_50,local_34);
        InterfacePacketBuf::put_str((InterfacePacketBuf *)local_50,local_38,local_34);
      }
    }
  }
  local_28 = (CParty *)CUser::GetParty(param_2);
  if (local_28 == (CParty *)0x0) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,1);
    local_14 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_2);
    local_10 = strlen(local_14);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_50,local_10);
    InterfacePacketBuf::put_str((InterfacePacketBuf *)local_50,local_14,local_10);
  }
  else {
    iVar2 = CParty::get_member_count(local_28);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,iVar2);
    for (local_24 = 0; local_24 < 4; local_24 = local_24 + 1) {
      local_20 = (CUserCharacInfo *)CParty::get_user(local_28,local_24);
      if (local_20 != (CUserCharacInfo *)0x0) {
        local_1c = (char *)CUserCharacInfo::getCurCharacName(local_20);
        local_18 = strlen(local_1c);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_50,local_18);
        InterfacePacketBuf::put_str((InterfacePacketBuf *)local_50,local_1c,local_18);
      }
    }
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_50,true);
  this_00 = (GameWorld *)G_GameWorld();
  GameWorld::send_to_vill(this_00,7,local_50);
  PacketGuard::~PacketGuard(local_50);
  return;
}

```

---

## _SendPacketToArea

```asm
// === 082e6d3a pvp_assault::CAssaultPlace::_SendPacketToArea  [0x082e6d3a-0x82e6d91] ===
 82e6d3a:	55                   	push   %ebp
 82e6d3b:	89 e5                	mov    %esp,%ebp
 82e6d3d:	56                   	push   %esi
 82e6d3e:	53                   	push   %ebx
 82e6d3f:	83 ec 10             	sub    $0x10,%esp
 82e6d42:	8b 45 08             	mov    0x8(%ebp),%eax
 82e6d45:	8b 80 18 01 00 00    	mov    0x118(%eax),%eax
 82e6d4b:	85 c0                	test   %eax,%eax
 82e6d4d:	75 0d                	jne    82e6d5c <_ZN11pvp_assault13CAssaultPlace17_SendPacketToAreaER11PacketGuard+0x22>
 82e6d4f:	8b 45 08             	mov    0x8(%ebp),%eax
 82e6d52:	8b 80 1c 01 00 00    	mov    0x11c(%eax),%eax
 82e6d58:	85 c0                	test   %eax,%eax
 82e6d5a:	74 2e                	je     82e6d8a <_ZN11pvp_assault13CAssaultPlace17_SendPacketToAreaER11PacketGuard+0x50>
 82e6d5c:	8b 45 08             	mov    0x8(%ebp),%eax
 82e6d5f:	8b b0 1c 01 00 00    	mov    0x11c(%eax),%esi
 82e6d65:	8b 45 08             	mov    0x8(%ebp),%eax
 82e6d68:	8b 98 18 01 00 00    	mov    0x118(%eax),%ebx
 82e6d6e:	e8 34 36 df ff       	call   80da3a7 <_Z11G_GameWorldv>
 82e6d73:	8b 55 0c             	mov    0xc(%ebp),%edx
 82e6d76:	89 54 24 0c          	mov    %edx,0xc(%esp)
 82e6d7a:	89 74 24 08          	mov    %esi,0x8(%esp)
 82e6d7e:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 82e6d82:	89 04 24             	mov    %eax,(%esp)
 82e6d85:	e8 de 13 3e 00       	call   86c8168 <_ZN9GameWorld12send_to_areaEiiR11PacketGuard>
 82e6d8a:	83 c4 10             	add    $0x10,%esp
 82e6d8d:	5b                   	pop    %ebx
 82e6d8e:	5e                   	pop    %esi
 82e6d8f:	5d                   	pop    %ebp
 82e6d90:	c3                   	ret
 82e6d91:	90                   	nop

```

```c
// pvp_assault::CAssaultPlace::_SendPacketToArea @ 0x82e6d3a

/* pvp_assault::CAssaultPlace::_SendPacketToArea(PacketGuard&) */

void __thiscall
pvp_assault::CAssaultPlace::_SendPacketToArea(CAssaultPlace *this,PacketGuard *param_1)

{
  int iVar1;
  int iVar2;
  GameWorld *this_00;
  
  if ((*(int *)(this + 0x118) != 0) || (*(int *)(this + 0x11c) != 0)) {
    iVar1 = *(int *)(this + 0x11c);
    iVar2 = *(int *)(this + 0x118);
    this_00 = (GameWorld *)G_GameWorld();
    GameWorld::send_to_area(this_00,iVar2,iVar1,param_1);
  }
  return;
}

```

---

## _SendPacketToArea_082e6dce

```asm
// === 082e6dce pvp_assault::CAssaultPlace::_SendPacketToArea  [0x082e6dce-0x82e6e2b] ===
 82e6dce:	55                   	push   %ebp
 82e6dcf:	89 e5                	mov    %esp,%ebp
 82e6dd1:	56                   	push   %esi
 82e6dd2:	53                   	push   %ebx
 82e6dd3:	83 ec 20             	sub    $0x20,%esp
 82e6dd6:	8b 45 08             	mov    0x8(%ebp),%eax
 82e6dd9:	8b 80 18 01 00 00    	mov    0x118(%eax),%eax
 82e6ddf:	85 c0                	test   %eax,%eax
 82e6de1:	75 0d                	jne    82e6df0 <_ZN11pvp_assault13CAssaultPlace17_SendPacketToAreaER11PacketGuardRSt6vectorIP5CUserSaIS5_EE+0x22>
 82e6de3:	8b 45 08             	mov    0x8(%ebp),%eax
 82e6de6:	8b 80 1c 01 00 00    	mov    0x11c(%eax),%eax
 82e6dec:	85 c0                	test   %eax,%eax
 82e6dee:	74 35                	je     82e6e25 <_ZN11pvp_assault13CAssaultPlace17_SendPacketToAreaER11PacketGuardRSt6vectorIP5CUserSaIS5_EE+0x57>
 82e6df0:	8b 45 08             	mov    0x8(%ebp),%eax
 82e6df3:	8b b0 1c 01 00 00    	mov    0x11c(%eax),%esi
 82e6df9:	8b 45 08             	mov    0x8(%ebp),%eax
 82e6dfc:	8b 98 18 01 00 00    	mov    0x118(%eax),%ebx
 82e6e02:	e8 a0 35 df ff       	call   80da3a7 <_Z11G_GameWorldv>
 82e6e07:	8b 55 10             	mov    0x10(%ebp),%edx
 82e6e0a:	89 54 24 10          	mov    %edx,0x10(%esp)
 82e6e0e:	8b 55 0c             	mov    0xc(%ebp),%edx
 82e6e11:	89 54 24 0c          	mov    %edx,0xc(%esp)
 82e6e15:	89 74 24 08          	mov    %esi,0x8(%esp)
 82e6e19:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 82e6e1d:	89 04 24             	mov    %eax,(%esp)
 82e6e20:	e8 69 14 3e 00       	call   86c828e <_ZN9GameWorld12send_to_areaEiiR11PacketGuardRSt6vectorIP5CUserSaIS4_EE>
 82e6e25:	83 c4 20             	add    $0x20,%esp
 82e6e28:	5b                   	pop    %ebx
 82e6e29:	5e                   	pop    %esi
 82e6e2a:	5d                   	pop    %ebp
 82e6e2b:	c3                   	ret

```

```c
// pvp_assault::CAssaultPlace::_SendPacketToArea @ 0x82e6dce

/* pvp_assault::CAssaultPlace::_SendPacketToArea(PacketGuard&, std::vector<CUser*,
   std::allocator<CUser*> >&) */

void __thiscall
pvp_assault::CAssaultPlace::_SendPacketToArea
          (CAssaultPlace *this,PacketGuard *param_1,vector *param_2)

{
  int iVar1;
  int iVar2;
  GameWorld *this_00;
  
  if ((*(int *)(this + 0x118) != 0) || (*(int *)(this + 0x11c) != 0)) {
    iVar1 = *(int *)(this + 0x11c);
    iVar2 = *(int *)(this + 0x118);
    this_00 = (GameWorld *)G_GameWorld();
    GameWorld::send_to_area(this_00,iVar2,iVar1,param_1,param_2);
  }
  return;
}

```

---

## _SendPacketToVill

```asm
// === 082e6d92 pvp_assault::CAssaultPlace::_SendPacketToVill  [0x082e6d92-0x82e6dcd] ===
 82e6d92:	55                   	push   %ebp
 82e6d93:	89 e5                	mov    %esp,%ebp
 82e6d95:	53                   	push   %ebx
 82e6d96:	83 ec 14             	sub    $0x14,%esp
 82e6d99:	8b 45 08             	mov    0x8(%ebp),%eax
 82e6d9c:	8b 80 18 01 00 00    	mov    0x118(%eax),%eax
 82e6da2:	85 c0                	test   %eax,%eax
 82e6da4:	74 21                	je     82e6dc7 <_ZN11pvp_assault13CAssaultPlace17_SendPacketToVillER11PacketGuard+0x35>
 82e6da6:	8b 45 08             	mov    0x8(%ebp),%eax
 82e6da9:	8b 98 18 01 00 00    	mov    0x118(%eax),%ebx
 82e6daf:	e8 f3 35 df ff       	call   80da3a7 <_Z11G_GameWorldv>
 82e6db4:	8b 55 0c             	mov    0xc(%ebp),%edx
 82e6db7:	89 54 24 08          	mov    %edx,0x8(%esp)
 82e6dbb:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 82e6dbf:	89 04 24             	mov    %eax,(%esp)
 82e6dc2:	e8 81 11 3e 00       	call   86c7f48 <_ZN9GameWorld12send_to_villEiR11PacketGuard>
 82e6dc7:	83 c4 14             	add    $0x14,%esp
 82e6dca:	5b                   	pop    %ebx
 82e6dcb:	5d                   	pop    %ebp
 82e6dcc:	c3                   	ret
 82e6dcd:	90                   	nop

```

```c
// pvp_assault::CAssaultPlace::_SendPacketToVill @ 0x82e6d92

/* pvp_assault::CAssaultPlace::_SendPacketToVill(PacketGuard&) */

void __thiscall
pvp_assault::CAssaultPlace::_SendPacketToVill(CAssaultPlace *this,PacketGuard *param_1)

{
  int iVar1;
  GameWorld *this_00;
  
  if (*(int *)(this + 0x118) != 0) {
    iVar1 = *(int *)(this + 0x118);
    this_00 = (GameWorld *)G_GameWorld();
    GameWorld::send_to_vill(this_00,iVar1,param_1);
  }
  return;
}

```

---

## _SendPowerWarAssaultResultToUser

```asm
// === 082ec808 pvp_assault::CAssaultPlace::_SendPowerWarAssaultResultToUser  [0x082ec808-0x82ec89b] ===
 82ec808:	55                   	push   %ebp
 82ec809:	89 e5                	mov    %esp,%ebp
 82ec80b:	56                   	push   %esi
 82ec80c:	53                   	push   %ebx
 82ec80d:	83 ec 20             	sub    $0x20,%esp
 82ec810:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82ec813:	89 04 24             	mov    %eax,(%esp)
 82ec816:	e8 31 15 2a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 82ec81b:	c7 44 24 08 c8 00 00 	movl   $0xc8,0x8(%esp)
 82ec822:	00 
 82ec823:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82ec82a:	00 
 82ec82b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82ec82e:	89 04 24             	mov    %eax,(%esp)
 82ec831:	e8 c6 f0 dd ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 82ec836:	8b 45 10             	mov    0x10(%ebp),%eax
 82ec839:	89 44 24 04          	mov    %eax,0x4(%esp)
 82ec83d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82ec840:	89 04 24             	mov    %eax,(%esp)
 82ec843:	e8 d8 f0 dd ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 82ec848:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82ec84f:	00 
 82ec850:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82ec853:	89 04 24             	mov    %eax,(%esp)
 82ec856:	e8 fd f0 dd ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 82ec85b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82ec85e:	89 44 24 04          	mov    %eax,0x4(%esp)
 82ec862:	8b 45 0c             	mov    0xc(%ebp),%eax
 82ec865:	89 04 24             	mov    %eax,(%esp)
 82ec868:	e8 4d bd 35 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 82ec86d:	eb 1b                	jmp    82ec88a <_ZN11pvp_assault13CAssaultPlace32_SendPowerWarAssaultResultToUserEP5CUseri+0x82>
 82ec86f:	89 d3                	mov    %edx,%ebx
 82ec871:	89 c6                	mov    %eax,%esi
 82ec873:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82ec876:	89 04 24             	mov    %eax,(%esp)
 82ec879:	e8 02 16 2a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82ec87e:	89 f0                	mov    %esi,%eax
 82ec880:	89 da                	mov    %ebx,%edx
 82ec882:	89 04 24             	mov    %eax,(%esp)
 82ec885:	e8 c6 6e 7f 00       	call   8ae3750 <_Unwind_Resume>
 82ec88a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82ec88d:	89 04 24             	mov    %eax,(%esp)
 82ec890:	e8 eb 15 2a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82ec895:	83 c4 20             	add    $0x20,%esp
 82ec898:	5b                   	pop    %ebx
 82ec899:	5e                   	pop    %esi
 82ec89a:	5d                   	pop    %ebp
 82ec89b:	c3                   	ret

```

```c
// pvp_assault::CAssaultPlace::_SendPowerWarAssaultResultToUser @ 0x82ec808

/* pvp_assault::CAssaultPlace::_SendPowerWarAssaultResultToUser(CUser*, int) */

void __thiscall
pvp_assault::CAssaultPlace::_SendPowerWarAssaultResultToUser
          (CAssaultPlace *this,CUser *param_1,int param_2)

{
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 082ec831 to 082ec86c has its CatchHandler @ 082ec86f */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,200);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,param_2);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  CUser::Send(param_1,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}

```

---

## _SendPowerWarPointToGuildServer

```asm
// === 082eceb2 pvp_assault::CAssaultPlace::_SendPowerWarPointToGuildServer  [0x082eceb2-0x82ed3fd] ===
 82eceb2:	55                   	push   %ebp
 82eceb3:	89 e5                	mov    %esp,%ebp
 82eceb5:	57                   	push   %edi
 82eceb6:	56                   	push   %esi
 82eceb7:	53                   	push   %ebx
 82eceb8:	81 ec 9c 00 00 00    	sub    $0x9c,%esp
 82ecebe:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 82ecec5:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 82ecec9:	75 4d                	jne    82ecf18 <_ZN11pvp_assault13CAssaultPlace31_SendPowerWarPointToGuildServerEP5CUser30ENUM_POWER_WAR_WINNER_OR_LOSERiii+0x66>
 82ececb:	8b 45 10             	mov    0x10(%ebp),%eax
 82ecece:	8b 55 1c             	mov    0x1c(%ebp),%edx
 82eced1:	89 54 24 20          	mov    %edx,0x20(%esp)
 82eced5:	8b 55 18             	mov    0x18(%ebp),%edx
 82eced8:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 82ecedc:	8b 55 14             	mov    0x14(%ebp),%edx
 82ecedf:	89 54 24 18          	mov    %edx,0x18(%esp)
 82ecee3:	89 44 24 14          	mov    %eax,0x14(%esp)
 82ecee7:	c7 44 24 10 90 be c1 	movl   $0x8c1be90,0x10(%esp)
 82eceee:	08 
 82eceef:	c7 44 24 0c 4c 0f 00 	movl   $0xf4c,0xc(%esp)
 82ecef6:	00 
 82ecef7:	c7 44 24 08 00 cf c1 	movl   $0x8c1cf00,0x8(%esp)
 82ecefe:	08 
 82eceff:	c7 44 24 04 bd be c1 	movl   $0x8c1bebd,0x4(%esp)
 82ecf06:	08 
 82ecf07:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 82ecf0e:	e8 f7 6c 7e 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 82ecf13:	e9 da 04 00 00       	jmp    82ed3f2 <_ZN11pvp_assault13CAssaultPlace31_SendPowerWarPointToGuildServerEP5CUser30ENUM_POWER_WAR_WINNER_OR_LOSERiii+0x540>
 82ecf18:	8d 45 97             	lea    -0x69(%ebp),%eax
 82ecf1b:	89 04 24             	mov    %eax,(%esp)
 82ecf1e:	e8 e9 37 00 00       	call   82f070c <_ZN35Packet_Guild_Change_Power_War_PointC1Ev>
 82ecf23:	83 7d 10 01          	cmpl   $0x1,0x10(%ebp)
 82ecf27:	75 10                	jne    82ecf39 <_ZN11pvp_assault13CAssaultPlace31_SendPowerWarPointToGuildServerEP5CUser30ENUM_POWER_WAR_WINNER_OR_LOSERiii+0x87>
 82ecf29:	8b 45 0c             	mov    0xc(%ebp),%eax
 82ecf2c:	89 04 24             	mov    %eax,(%esp)
 82ecf2f:	e8 92 2d f4 ff       	call   822fcc6 <_ZN5CUser12getPowerSideEv>
 82ecf34:	88 45 a1             	mov    %al,-0x5f(%ebp)
 82ecf37:	eb 1e                	jmp    82ecf57 <_ZN11pvp_assault13CAssaultPlace31_SendPowerWarPointToGuildServerEP5CUser30ENUM_POWER_WAR_WINNER_OR_LOSERiii+0xa5>
 82ecf39:	8b 45 0c             	mov    0xc(%ebp),%eax
 82ecf3c:	89 04 24             	mov    %eax,(%esp)
 82ecf3f:	e8 82 2d f4 ff       	call   822fcc6 <_ZN5CUser12getPowerSideEv>
 82ecf44:	3c 01                	cmp    $0x1,%al
 82ecf46:	75 07                	jne    82ecf4f <_ZN11pvp_assault13CAssaultPlace31_SendPowerWarPointToGuildServerEP5CUser30ENUM_POWER_WAR_WINNER_OR_LOSERiii+0x9d>
 82ecf48:	b8 02 00 00 00       	mov    $0x2,%eax
 82ecf4d:	eb 05                	jmp    82ecf54 <_ZN11pvp_assault13CAssaultPlace31_SendPowerWarPointToGuildServerEP5CUser30ENUM_POWER_WAR_WINNER_OR_LOSERiii+0xa2>
 82ecf4f:	b8 01 00 00 00       	mov    $0x1,%eax
 82ecf54:	88 45 a1             	mov    %al,-0x5f(%ebp)
 82ecf57:	8b 45 1c             	mov    0x1c(%ebp),%eax
 82ecf5a:	8b 55 14             	mov    0x14(%ebp),%edx
 82ecf5d:	89 d1                	mov    %edx,%ecx
 82ecf5f:	29 c1                	sub    %eax,%ecx
 82ecf61:	89 c8                	mov    %ecx,%eax
 82ecf63:	85 c0                	test   %eax,%eax
 82ecf65:	79 40                	jns    82ecfa7 <_ZN11pvp_assault13CAssaultPlace31_SendPowerWarPointToGuildServerEP5CUser30ENUM_POWER_WAR_WINNER_OR_LOSERiii+0xf5>
 82ecf67:	8b 45 1c             	mov    0x1c(%ebp),%eax
 82ecf6a:	89 44 24 18          	mov    %eax,0x18(%esp)
 82ecf6e:	8b 45 14             	mov    0x14(%ebp),%eax
 82ecf71:	89 44 24 14          	mov    %eax,0x14(%esp)
 82ecf75:	c7 44 24 10 cc be c1 	movl   $0x8c1becc,0x10(%esp)
 82ecf7c:	08 
 82ecf7d:	c7 44 24 0c 5c 0f 00 	movl   $0xf5c,0xc(%esp)
 82ecf84:	00 
 82ecf85:	c7 44 24 08 00 cf c1 	movl   $0x8c1cf00,0x8(%esp)
 82ecf8c:	08 
 82ecf8d:	c7 44 24 04 bd be c1 	movl   $0x8c1bebd,0x4(%esp)
 82ecf94:	08 
 82ecf95:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 82ecf9c:	e8 69 6c 7e 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 82ecfa1:	8b 45 14             	mov    0x14(%ebp),%eax
 82ecfa4:	89 45 1c             	mov    %eax,0x1c(%ebp)
 82ecfa7:	e8 ef f1 dd ff       	call   80cc19b <_Z14G_CDataManagerv>
 82ecfac:	8b 80 7c a6 00 00    	mov    0xa67c(%eax),%eax
 82ecfb2:	8b 55 1c             	mov    0x1c(%ebp),%edx
 82ecfb5:	8b 4d 14             	mov    0x14(%ebp),%ecx
 82ecfb8:	89 cb                	mov    %ecx,%ebx
 82ecfba:	29 d3                	sub    %edx,%ebx
 82ecfbc:	89 da                	mov    %ebx,%edx
 82ecfbe:	0f af c2             	imul   %edx,%eax
 82ecfc1:	3d ff 00 00 00       	cmp    $0xff,%eax
 82ecfc6:	0f 9f c0             	setg   %al
 82ecfc9:	84 c0                	test   %al,%al
 82ecfcb:	74 4f                	je     82ed01c <_ZN11pvp_assault13CAssaultPlace31_SendPowerWarPointToGuildServerEP5CUser30ENUM_POWER_WAR_WINNER_OR_LOSERiii+0x16a>
 82ecfcd:	e8 c9 f1 dd ff       	call   80cc19b <_Z14G_CDataManagerv>
 82ecfd2:	8b 80 7c a6 00 00    	mov    0xa67c(%eax),%eax
 82ecfd8:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 82ecfdc:	8b 45 1c             	mov    0x1c(%ebp),%eax
 82ecfdf:	89 44 24 18          	mov    %eax,0x18(%esp)
 82ecfe3:	8b 45 14             	mov    0x14(%ebp),%eax
 82ecfe6:	89 44 24 14          	mov    %eax,0x14(%esp)
 82ecfea:	c7 44 24 10 0c bf c1 	movl   $0x8c1bf0c,0x10(%esp)
 82ecff1:	08 
 82ecff2:	c7 44 24 0c 62 0f 00 	movl   $0xf62,0xc(%esp)
 82ecff9:	00 
 82ecffa:	c7 44 24 08 00 cf c1 	movl   $0x8c1cf00,0x8(%esp)
 82ed001:	08 
 82ed002:	c7 44 24 04 bd be c1 	movl   $0x8c1bebd,0x4(%esp)
 82ed009:	08 
 82ed00a:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 82ed011:	e8 f4 6b 7e 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 82ed016:	c6 45 c3 ff          	movb   $0xff,-0x3d(%ebp)
 82ed01a:	eb 1d                	jmp    82ed039 <_ZN11pvp_assault13CAssaultPlace31_SendPowerWarPointToGuildServerEP5CUser30ENUM_POWER_WAR_WINNER_OR_LOSERiii+0x187>
 82ed01c:	e8 7a f1 dd ff       	call   80cc19b <_Z14G_CDataManagerv>
 82ed021:	8b 80 7c a6 00 00    	mov    0xa67c(%eax),%eax
 82ed027:	8b 55 1c             	mov    0x1c(%ebp),%edx
 82ed02a:	8b 4d 14             	mov    0x14(%ebp),%ecx
 82ed02d:	89 cb                	mov    %ecx,%ebx
 82ed02f:	29 d3                	sub    %edx,%ebx
 82ed031:	89 da                	mov    %ebx,%edx
 82ed033:	0f af c2             	imul   %edx,%eax
 82ed036:	88 45 c3             	mov    %al,-0x3d(%ebp)
 82ed039:	e8 5d f1 dd ff       	call   80cc19b <_Z14G_CDataManagerv>
 82ed03e:	8b 80 7c a6 00 00    	mov    0xa67c(%eax),%eax
 82ed044:	0f af 45 18          	imul   0x18(%ebp),%eax
 82ed048:	3d ff 00 00 00       	cmp    $0xff,%eax
 82ed04d:	0f 9f c0             	setg   %al
 82ed050:	84 c0                	test   %al,%al
 82ed052:	74 4f                	je     82ed0a3 <_ZN11pvp_assault13CAssaultPlace31_SendPowerWarPointToGuildServerEP5CUser30ENUM_POWER_WAR_WINNER_OR_LOSERiii+0x1f1>
 82ed054:	e8 42 f1 dd ff       	call   80cc19b <_Z14G_CDataManagerv>
 82ed059:	8b 80 7c a6 00 00    	mov    0xa67c(%eax),%eax
 82ed05f:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 82ed063:	8b 45 1c             	mov    0x1c(%ebp),%eax
 82ed066:	89 44 24 18          	mov    %eax,0x18(%esp)
 82ed06a:	8b 45 14             	mov    0x14(%ebp),%eax
 82ed06d:	89 44 24 14          	mov    %eax,0x14(%esp)
 82ed071:	c7 44 24 10 60 bf c1 	movl   $0x8c1bf60,0x10(%esp)
 82ed078:	08 
 82ed079:	c7 44 24 0c 6a 0f 00 	movl   $0xf6a,0xc(%esp)
 82ed080:	00 
 82ed081:	c7 44 24 08 00 cf c1 	movl   $0x8c1cf00,0x8(%esp)
 82ed088:	08 
 82ed089:	c7 44 24 04 bd be c1 	movl   $0x8c1bebd,0x4(%esp)
 82ed090:	08 
 82ed091:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 82ed098:	e8 6d 6b 7e 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 82ed09d:	c6 45 c2 ff          	movb   $0xff,-0x3e(%ebp)
 82ed0a1:	eb 14                	jmp    82ed0b7 <_ZN11pvp_assault13CAssaultPlace31_SendPowerWarPointToGuildServerEP5CUser30ENUM_POWER_WAR_WINNER_OR_LOSERiii+0x205>
 82ed0a3:	e8 f3 f0 dd ff       	call   80cc19b <_Z14G_CDataManagerv>
 82ed0a8:	8b 80 7c a6 00 00    	mov    0xa67c(%eax),%eax
 82ed0ae:	8b 55 18             	mov    0x18(%ebp),%edx
 82ed0b1:	0f af c2             	imul   %edx,%eax
 82ed0b4:	88 45 c2             	mov    %al,-0x3e(%ebp)
 82ed0b7:	0f b6 45 a1          	movzbl -0x5f(%ebp),%eax
 82ed0bb:	0f be c0             	movsbl %al,%eax
 82ed0be:	89 44 24 08          	mov    %eax,0x8(%esp)
 82ed0c2:	8b 45 0c             	mov    0xc(%ebp),%eax
 82ed0c5:	89 44 24 04          	mov    %eax,0x4(%esp)
 82ed0c9:	8b 45 08             	mov    0x8(%ebp),%eax
 82ed0cc:	89 04 24             	mov    %eax,(%esp)
 82ed0cf:	e8 c8 f7 ff ff       	call   82ec89c <_ZN11pvp_assault13CAssaultPlace13_VictoryBonusEP5CUserc>
 82ed0d4:	89 45 d8             	mov    %eax,-0x28(%ebp)
 82ed0d7:	0f b6 55 c2          	movzbl -0x3e(%ebp),%edx
 82ed0db:	8b 45 d8             	mov    -0x28(%ebp),%eax
 82ed0de:	8d 04 02             	lea    (%edx,%eax,1),%eax
 82ed0e1:	88 45 c2             	mov    %al,-0x3e(%ebp)
 82ed0e4:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 82ed0eb:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 82ed0f2:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 82ed0f9:	e9 01 02 00 00       	jmp    82ed2ff <_ZN11pvp_assault13CAssaultPlace31_SendPowerWarPointToGuildServerEP5CUser30ENUM_POWER_WAR_WINNER_OR_LOSERiii+0x44d>
 82ed0fe:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 82ed101:	c1 e0 05             	shl    $0x5,%eax
 82ed104:	03 45 08             	add    0x8(%ebp),%eax
 82ed107:	89 04 24             	mov    %eax,(%esp)
 82ed10a:	e8 4d 34 00 00       	call   82f055c <_ZN11pvp_assault10CAssaulter5EmptyEv>
 82ed10f:	84 c0                	test   %al,%al
 82ed111:	0f 85 e0 01 00 00    	jne    82ed2f7 <_ZN11pvp_assault13CAssaultPlace31_SendPowerWarPointToGuildServerEP5CUser30ENUM_POWER_WAR_WINNER_OR_LOSERiii+0x445>
 82ed117:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 82ed11a:	c1 e0 05             	shl    $0x5,%eax
 82ed11d:	03 45 08             	add    0x8(%ebp),%eax
 82ed120:	89 04 24             	mov    %eax,(%esp)
 82ed123:	e8 1a 34 00 00       	call   82f0542 <_ZN11pvp_assault10CAssaulter7GetUserEv>
 82ed128:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 82ed12b:	83 7d d4 00          	cmpl   $0x0,-0x2c(%ebp)
 82ed12f:	0f 84 c5 01 00 00    	je     82ed2fa <_ZN11pvp_assault13CAssaultPlace31_SendPowerWarPointToGuildServerEP5CUser30ENUM_POWER_WAR_WINNER_OR_LOSERiii+0x448>
 82ed135:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 82ed13c:	e8 5d eb dd ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 82ed141:	8b 55 08             	mov    0x8(%ebp),%edx
 82ed144:	8b 92 3c 01 00 00    	mov    0x13c(%edx),%edx
 82ed14a:	29 d0                	sub    %edx,%eax
 82ed14c:	89 c3                	mov    %eax,%ebx
 82ed14e:	0f b6 45 a1          	movzbl -0x5f(%ebp),%eax
 82ed152:	0f b6 f0             	movzbl %al,%esi
 82ed155:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 82ed158:	89 04 24             	mov    %eax,(%esp)
 82ed15b:	e8 66 2b f4 ff       	call   822fcc6 <_ZN5CUser12getPowerSideEv>
 82ed160:	0f be c0             	movsbl %al,%eax
 82ed163:	39 c6                	cmp    %eax,%esi
 82ed165:	0f 94 c0             	sete   %al
 82ed168:	0f b6 c0             	movzbl %al,%eax
 82ed16b:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 82ed16e:	81 c2 00 97 07 00    	add    $0x79700,%edx
 82ed174:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 82ed178:	89 44 24 08          	mov    %eax,0x8(%esp)
 82ed17c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82ed183:	00 
 82ed184:	89 14 24             	mov    %edx,(%esp)
 82ed187:	e8 a2 92 39 00       	call   868642e <_ZN15cUserHistoryLog6EndPvPE23ENUM_PVP_HISTORY_REASONbj>
 82ed18c:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 82ed18f:	89 04 24             	mov    %eax,(%esp)
 82ed192:	e8 2f 3c 00 00       	call   82f0dc6 <_ZN15CUserCharacInfo23IncPowerWarAssaultCountEv>
 82ed197:	0f b6 45 a1          	movzbl -0x5f(%ebp),%eax
 82ed19b:	0f b6 d8             	movzbl %al,%ebx
 82ed19e:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 82ed1a1:	89 04 24             	mov    %eax,(%esp)
 82ed1a4:	e8 1d 2b f4 ff       	call   822fcc6 <_ZN5CUser12getPowerSideEv>
 82ed1a9:	0f be c0             	movsbl %al,%eax
 82ed1ac:	39 c3                	cmp    %eax,%ebx
 82ed1ae:	0f 94 c0             	sete   %al
 82ed1b1:	84 c0                	test   %al,%al
 82ed1b3:	0f 84 a6 00 00 00    	je     82ed25f <_ZN11pvp_assault13CAssaultPlace31_SendPowerWarPointToGuildServerEP5CUser30ENUM_POWER_WAR_WINNER_OR_LOSERiii+0x3ad>
 82ed1b9:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 82ed1bc:	89 04 24             	mov    %eax,(%esp)
 82ed1bf:	e8 34 3c 00 00       	call   82f0df8 <_ZN15CUserCharacInfo30IncPowerWarAssaultVictoryCountEv>
 82ed1c4:	0f b6 45 c2          	movzbl -0x3e(%ebp),%eax
 82ed1c8:	0f b6 d0             	movzbl %al,%edx
 82ed1cb:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 82ed1ce:	89 54 24 04          	mov    %edx,0x4(%esp)
 82ed1d2:	89 04 24             	mov    %eax,(%esp)
 82ed1d5:	e8 22 ad 39 00       	call   8687efc <_ZN15CUserCharacInfo21IncreasePowerWarPointEs>
 82ed1da:	83 7d dc 03          	cmpl   $0x3,-0x24(%ebp)
 82ed1de:	7e 3f                	jle    82ed21f <_ZN11pvp_assault13CAssaultPlace31_SendPowerWarPointToGuildServerEP5CUser30ENUM_POWER_WAR_WINNER_OR_LOSERiii+0x36d>
 82ed1e0:	8b 45 e0             	mov    -0x20(%ebp),%eax
 82ed1e3:	89 44 24 18          	mov    %eax,0x18(%esp)
 82ed1e7:	8b 45 dc             	mov    -0x24(%ebp),%eax
 82ed1ea:	89 44 24 14          	mov    %eax,0x14(%esp)
 82ed1ee:	c7 44 24 10 b4 bf c1 	movl   $0x8c1bfb4,0x10(%esp)
 82ed1f5:	08 
 82ed1f6:	c7 44 24 0c 94 0f 00 	movl   $0xf94,0xc(%esp)
 82ed1fd:	00 
 82ed1fe:	c7 44 24 08 00 cf c1 	movl   $0x8c1cf00,0x8(%esp)
 82ed205:	08 
 82ed206:	c7 44 24 04 bd be c1 	movl   $0x8c1bebd,0x4(%esp)
 82ed20d:	08 
 82ed20e:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 82ed215:	e8 f0 69 7e 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 82ed21a:	e9 dc 00 00 00       	jmp    82ed2fb <_ZN11pvp_assault13CAssaultPlace31_SendPowerWarPointToGuildServerEP5CUser30ENUM_POWER_WAR_WINNER_OR_LOSERiii+0x449>
 82ed21f:	8b 5d dc             	mov    -0x24(%ebp),%ebx
 82ed222:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 82ed229:	ff 
 82ed22a:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 82ed22d:	89 04 24             	mov    %eax,(%esp)
 82ed230:	e8 6b 0d 36 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 82ed235:	89 44 9d a2          	mov    %eax,-0x5e(%ebp,%ebx,4)
 82ed239:	83 45 dc 01          	addl   $0x1,-0x24(%ebp)
 82ed23d:	0f b6 45 c2          	movzbl -0x3e(%ebp),%eax
 82ed241:	0f b6 c0             	movzbl %al,%eax
 82ed244:	89 44 24 08          	mov    %eax,0x8(%esp)
 82ed248:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 82ed24b:	89 44 24 04          	mov    %eax,0x4(%esp)
 82ed24f:	8b 45 08             	mov    0x8(%ebp),%eax
 82ed252:	89 04 24             	mov    %eax,(%esp)
 82ed255:	e8 ae f5 ff ff       	call   82ec808 <_ZN11pvp_assault13CAssaultPlace32_SendPowerWarAssaultResultToUserEP5CUseri>
 82ed25a:	e9 9c 00 00 00       	jmp    82ed2fb <_ZN11pvp_assault13CAssaultPlace31_SendPowerWarPointToGuildServerEP5CUser30ENUM_POWER_WAR_WINNER_OR_LOSERiii+0x449>
 82ed25f:	0f b6 45 c3          	movzbl -0x3d(%ebp),%eax
 82ed263:	0f b6 d0             	movzbl %al,%edx
 82ed266:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 82ed269:	89 54 24 04          	mov    %edx,0x4(%esp)
 82ed26d:	89 04 24             	mov    %eax,(%esp)
 82ed270:	e8 87 ac 39 00       	call   8687efc <_ZN15CUserCharacInfo21IncreasePowerWarPointEs>
 82ed275:	83 7d e0 03          	cmpl   $0x3,-0x20(%ebp)
 82ed279:	7e 3c                	jle    82ed2b7 <_ZN11pvp_assault13CAssaultPlace31_SendPowerWarPointToGuildServerEP5CUser30ENUM_POWER_WAR_WINNER_OR_LOSERiii+0x405>
 82ed27b:	8b 45 e0             	mov    -0x20(%ebp),%eax
 82ed27e:	89 44 24 18          	mov    %eax,0x18(%esp)
 82ed282:	8b 45 dc             	mov    -0x24(%ebp),%eax
 82ed285:	89 44 24 14          	mov    %eax,0x14(%esp)
 82ed289:	c7 44 24 10 b4 bf c1 	movl   $0x8c1bfb4,0x10(%esp)
 82ed290:	08 
 82ed291:	c7 44 24 0c a4 0f 00 	movl   $0xfa4,0xc(%esp)
 82ed298:	00 
 82ed299:	c7 44 24 08 00 cf c1 	movl   $0x8c1cf00,0x8(%esp)
 82ed2a0:	08 
 82ed2a1:	c7 44 24 04 bd be c1 	movl   $0x8c1bebd,0x4(%esp)
 82ed2a8:	08 
 82ed2a9:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 82ed2b0:	e8 55 69 7e 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 82ed2b5:	eb 44                	jmp    82ed2fb <_ZN11pvp_assault13CAssaultPlace31_SendPowerWarPointToGuildServerEP5CUser30ENUM_POWER_WAR_WINNER_OR_LOSERiii+0x449>
 82ed2b7:	8b 5d e0             	mov    -0x20(%ebp),%ebx
 82ed2ba:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 82ed2c1:	ff 
 82ed2c2:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 82ed2c5:	89 04 24             	mov    %eax,(%esp)
 82ed2c8:	e8 d3 0c 36 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 82ed2cd:	8d 53 04             	lea    0x4(%ebx),%edx
 82ed2d0:	89 44 95 a2          	mov    %eax,-0x5e(%ebp,%edx,4)
 82ed2d4:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 82ed2d8:	0f b6 45 c3          	movzbl -0x3d(%ebp),%eax
 82ed2dc:	0f b6 c0             	movzbl %al,%eax
 82ed2df:	89 44 24 08          	mov    %eax,0x8(%esp)
 82ed2e3:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 82ed2e6:	89 44 24 04          	mov    %eax,0x4(%esp)
 82ed2ea:	8b 45 08             	mov    0x8(%ebp),%eax
 82ed2ed:	89 04 24             	mov    %eax,(%esp)
 82ed2f0:	e8 13 f5 ff ff       	call   82ec808 <_ZN11pvp_assault13CAssaultPlace32_SendPowerWarAssaultResultToUserEP5CUseri>
 82ed2f5:	eb 04                	jmp    82ed2fb <_ZN11pvp_assault13CAssaultPlace31_SendPowerWarPointToGuildServerEP5CUser30ENUM_POWER_WAR_WINNER_OR_LOSERiii+0x449>
 82ed2f7:	90                   	nop
 82ed2f8:	eb 01                	jmp    82ed2fb <_ZN11pvp_assault13CAssaultPlace31_SendPowerWarPointToGuildServerEP5CUser30ENUM_POWER_WAR_WINNER_OR_LOSERiii+0x449>
 82ed2fa:	90                   	nop
 82ed2fb:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 82ed2ff:	83 7d e4 07          	cmpl   $0x7,-0x1c(%ebp)
 82ed303:	0f 9e c0             	setle  %al
 82ed306:	84 c0                	test   %al,%al
 82ed308:	0f 85 f0 fd ff ff    	jne    82ed0fe <_ZN11pvp_assault13CAssaultPlace31_SendPowerWarPointToGuildServerEP5CUser30ENUM_POWER_WAR_WINNER_OR_LOSERiii+0x24c>
 82ed30e:	0f b6 45 c3          	movzbl -0x3d(%ebp),%eax
 82ed312:	0f b6 f8             	movzbl %al,%edi
 82ed315:	0f b6 45 c2          	movzbl -0x3e(%ebp),%eax
 82ed319:	0f b6 f0             	movzbl %al,%esi
 82ed31c:	0f b6 45 a1          	movzbl -0x5f(%ebp),%eax
 82ed320:	0f b6 d8             	movzbl %al,%ebx
 82ed323:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82ed32a:	00 
 82ed32b:	c7 44 24 08 ad 0f 00 	movl   $0xfad,0x8(%esp)
 82ed332:	00 
 82ed333:	c7 44 24 04 00 cf c1 	movl   $0x8c1cf00,0x4(%esp)
 82ed33a:	08 
 82ed33b:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 82ed33e:	89 04 24             	mov    %eax,(%esp)
 82ed341:	e8 d2 23 26 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 82ed346:	8b 45 1c             	mov    0x1c(%ebp),%eax
 82ed349:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 82ed34d:	89 7c 24 18          	mov    %edi,0x18(%esp)
 82ed351:	8b 45 18             	mov    0x18(%ebp),%eax
 82ed354:	89 44 24 14          	mov    %eax,0x14(%esp)
 82ed358:	89 74 24 10          	mov    %esi,0x10(%esp)
 82ed35c:	8b 45 14             	mov    0x14(%ebp),%eax
 82ed35f:	89 44 24 0c          	mov    %eax,0xc(%esp)
 82ed363:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 82ed367:	c7 44 24 04 fc bf c1 	movl   $0x8c1bffc,0x4(%esp)
 82ed36e:	08 
 82ed36f:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 82ed372:	89 04 24             	mov    %eax,(%esp)
 82ed375:	e8 0e 24 26 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 82ed37a:	a1 2c be 40 09       	mov    0x940be2c,%eax
 82ed37f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82ed386:	00 
 82ed387:	89 04 24             	mov    %eax,(%esp)
 82ed38a:	e8 29 00 e3 ff       	call   811d3b8 <_ZN15CServerProxyMgrI17CGuildServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 82ed38f:	8d 55 97             	lea    -0x69(%ebp),%edx
 82ed392:	89 54 24 04          	mov    %edx,0x4(%esp)
 82ed396:	89 04 24             	mov    %eax,(%esp)
 82ed399:	e8 c2 10 18 00       	call   846e460 <_ZN17CGuildServerProxy17SendPowerWarPointER35Packet_Guild_Change_Power_War_Point>
 82ed39e:	0f b6 45 c2          	movzbl -0x3e(%ebp),%eax
 82ed3a2:	0f b6 c8             	movzbl %al,%ecx
 82ed3a5:	0f b6 45 a1          	movzbl -0x5f(%ebp),%eax
 82ed3a9:	0f be d0             	movsbl %al,%edx
 82ed3ac:	a1 50 be 40 09       	mov    0x940be50,%eax
 82ed3b1:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 82ed3b5:	89 54 24 04          	mov    %edx,0x4(%esp)
 82ed3b9:	89 04 24             	mov    %eax,(%esp)
 82ed3bc:	e8 e1 2d 19 00       	call   84801a2 <_ZN13CPowerManager29IncreaePowerWarPointInChannelEci>
 82ed3c1:	0f b6 45 c3          	movzbl -0x3d(%ebp),%eax
 82ed3c5:	0f b6 c8             	movzbl %al,%ecx
 82ed3c8:	0f b6 45 a1          	movzbl -0x5f(%ebp),%eax
 82ed3cc:	3c 01                	cmp    $0x1,%al
 82ed3ce:	75 07                	jne    82ed3d7 <_ZN11pvp_assault13CAssaultPlace31_SendPowerWarPointToGuildServerEP5CUser30ENUM_POWER_WAR_WINNER_OR_LOSERiii+0x525>
 82ed3d0:	b8 02 00 00 00       	mov    $0x2,%eax
 82ed3d5:	eb 05                	jmp    82ed3dc <_ZN11pvp_assault13CAssaultPlace31_SendPowerWarPointToGuildServerEP5CUser30ENUM_POWER_WAR_WINNER_OR_LOSERiii+0x52a>
 82ed3d7:	b8 01 00 00 00       	mov    $0x1,%eax
 82ed3dc:	8b 15 50 be 40 09    	mov    0x940be50,%edx
 82ed3e2:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 82ed3e6:	89 44 24 04          	mov    %eax,0x4(%esp)
 82ed3ea:	89 14 24             	mov    %edx,(%esp)
 82ed3ed:	e8 b0 2d 19 00       	call   84801a2 <_ZN13CPowerManager29IncreaePowerWarPointInChannelEci>
 82ed3f2:	81 c4 9c 00 00 00    	add    $0x9c,%esp
 82ed3f8:	5b                   	pop    %ebx
 82ed3f9:	5e                   	pop    %esi
 82ed3fa:	5f                   	pop    %edi
 82ed3fb:	5d                   	pop    %ebp
 82ed3fc:	c3                   	ret
 82ed3fd:	90                   	nop

```

```c
// pvp_assault::CAssaultPlace::_SendPowerWarPointToGuildServer @ 0x82eceb2

/* pvp_assault::CAssaultPlace::_SendPowerWarPointToGuildServer(CUser*,
   ENUM_POWER_WAR_WINNER_OR_LOSER, int, int, int) */

void __thiscall
pvp_assault::CAssaultPlace::_SendPowerWarPointToGuildServer
          (CAssaultPlace *this,CUser *param_1,int param_3,int param_4,int param_5,int param_6)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  CGuildServerProxy *this_00;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  Packet_Guild_Change_Power_War_Point local_6d [10];
  byte local_63;
  undefined4 auStack_62 [8];
  byte local_42;
  byte local_41;
  cMyTrace local_40 [16];
  CUser *local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  local_30 = (CUser *)0x0;
  if (param_1 == (CUser *)0x0) {
    LogManager::logFormat
              (1,"Assault.cpp",
               "void pvp_assault::CAssaultPlace::_SendPowerWarPointToGuildServer(CUser*, ENUM_POWER_WAR_WINNER_OR_LOSER, int, int, int)"
               ,0xf4c,"Invalid User pointer income (%d, %d, %d, %d)",param_3,param_4,param_5,param_6
              );
  }
  else {
    Packet_Guild_Change_Power_War_Point::Packet_Guild_Change_Power_War_Point(local_6d);
    if (param_3 == 1) {
      local_63 = CUser::getPowerSide(param_1);
    }
    else {
      cVar1 = CUser::getPowerSide(param_1);
      if (cVar1 == '\x01') {
        local_63 = 2;
      }
      else {
        local_63 = 1;
      }
    }
    if (param_4 - param_6 < 0) {
      LogManager::logFormat
                (1,"Assault.cpp",
                 "void pvp_assault::CAssaultPlace::_SendPowerWarPointToGuildServer(CUser*, ENUM_POWER_WAR_WINNER_OR_LOSER, int, int, int)"
                 ,0xf5c,"Power War Point Computer Error( winCnt : %d, winAliveCnt : %d )",param_4,
                 param_6);
      param_6 = param_4;
    }
    iVar2 = G_CDataManager();
    if (*(int *)(iVar2 + 0xa67c) * (param_4 - param_6) < 0x100) {
      iVar2 = G_CDataManager();
      local_41 = (char)*(undefined4 *)(iVar2 + 0xa67c) * ((char)param_4 - (char)param_6);
    }
    else {
      iVar2 = G_CDataManager();
      LogManager::logFormat
                (1,"Assault.cpp",
                 "void pvp_assault::CAssaultPlace::_SendPowerWarPointToGuildServer(CUser*, ENUM_POWER_WAR_WINNER_OR_LOSER, int, int, int)"
                 ,0xf62,
                 "Power War Point Computer Error( winCnt : %d, winAliveCnt : %d , multiple n : %d)",
                 param_4,param_6,*(undefined4 *)(iVar2 + 0xa67c));
      local_41 = 0xff;
    }
    iVar2 = G_CDataManager();
    if (*(int *)(iVar2 + 0xa67c) * param_5 < 0x100) {
      iVar2 = G_CDataManager();
      local_42 = (char)*(undefined4 *)(iVar2 + 0xa67c) * (char)param_5;
    }
    else {
      iVar2 = G_CDataManager();
      LogManager::logFormat
                (1,"Assault.cpp",
                 "void pvp_assault::CAssaultPlace::_SendPowerWarPointToGuildServer(CUser*, ENUM_POWER_WAR_WINNER_OR_LOSER, int, int, int)"
                 ,0xf6a,
                 "Power War Point Computer Error( winCnt : %d, winAliveCnt : %d , multiple n : %d )"
                 ,param_4,param_6,*(undefined4 *)(iVar2 + 0xa67c));
      local_42 = -1;
    }
    local_2c = _VictoryBonus(this,param_1,local_63);
    local_42 = local_42 + (char)local_2c;
    local_28 = 0;
    local_24 = 0;
    for (local_20 = 0; local_20 < 8; local_20 = local_20 + 1) {
      cVar1 = CAssaulter::Empty((CAssaulter *)(this + local_20 * 0x20));
      if ((cVar1 == '\0') &&
         (local_30 = (CUser *)CAssaulter::GetUser((CAssaulter *)(this + local_20 * 0x20)),
         local_30 != (CUser *)0x0)) {
        iVar3 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
        iVar2 = *(int *)(this + 0x13c);
        uVar5 = (uint)local_63;
        cVar1 = CUser::getPowerSide(local_30);
        cUserHistoryLog::EndPvP
                  ((cUserHistoryLog *)(local_30 + 0x79700),1,uVar5 == (int)cVar1,iVar3 - iVar2);
        CUserCharacInfo::IncPowerWarAssaultCount((CUserCharacInfo *)local_30);
        uVar5 = (uint)local_63;
        cVar1 = CUser::getPowerSide(local_30);
        if (uVar5 == (int)cVar1) {
          CUserCharacInfo::IncPowerWarAssaultVictoryCount((CUserCharacInfo *)local_30);
          CUserCharacInfo::IncreasePowerWarPoint((CUserCharacInfo *)local_30,(ushort)local_42);
          iVar2 = local_28;
          if (local_28 < 4) {
            uVar4 = CUser::get_charac_no(local_30,-1);
            auStack_62[iVar2] = uVar4;
            local_28 = local_28 + 1;
            _SendPowerWarAssaultResultToUser(this,local_30,(uint)local_42);
          }
          else {
            LogManager::logFormat
                      (1,"Assault.cpp",
                       "void pvp_assault::CAssaultPlace::_SendPowerWarPointToGuildServer(CUser*, ENUM_POWER_WAR_WINNER_OR_LOSER, int, int, int)"
                       ,0xf94,
                       "Power War Point Computer Error( winner index : %d, loser index : %d )",
                       local_28,local_24);
          }
        }
        else {
          CUserCharacInfo::IncreasePowerWarPoint((CUserCharacInfo *)local_30,(ushort)local_41);
          iVar2 = local_24;
          if (local_24 < 4) {
            uVar4 = CUser::get_charac_no(local_30,-1);
            auStack_62[iVar2 + 4] = uVar4;
            local_24 = local_24 + 1;
            _SendPowerWarAssaultResultToUser(this,local_30,(uint)local_41);
          }
          else {
            LogManager::logFormat
                      (1,"Assault.cpp",
                       "void pvp_assault::CAssaultPlace::_SendPowerWarPointToGuildServer(CUser*, ENUM_POWER_WAR_WINNER_OR_LOSER, int, int, int)"
                       ,0xfa4,
                       "Power War Point Computer Error( winner index : %d, loser index : %d )",
                       local_28,local_24);
          }
        }
      }
    }
    uVar7 = (uint)local_41;
    uVar6 = (uint)local_42;
    uVar5 = (uint)local_63;
    cMyTrace::cMyTrace(local_40,
                       "void pvp_assault::CAssaultPlace::_SendPowerWarPointToGuildServer(CUser*, ENUM_POWER_WAR_WINNER_OR_LOSER, int, int, int)"
                       ,0xfad,0);
    cMyTrace::operator()
              (local_40,"win side(%d), win pp(%d, %d), lose pp(%d, %d), winAliveCnt(%d)",uVar5,
               param_4,uVar6,param_5,uVar7,param_6);
    this_00 = (CGuildServerProxy *)
              CServerProxyMgr<CGuildServerProxy>::GetServerProxy(GlobalData::s_guild_proxy_mgr,0);
    CGuildServerProxy::SendPowerWarPoint(this_00,local_6d);
    CPowerManager::IncreaePowerWarPointInChannel
              (GlobalData::s_power_manager,local_63,(uint)local_42);
    if (local_63 == 1) {
      cVar1 = '\x02';
    }
    else {
      cVar1 = '\x01';
    }
    CPowerManager::IncreaePowerWarPointInChannel(GlobalData::s_power_manager,cVar1,(uint)local_41);
  }
  return;
}

```

---

## _SendStraightVictories

```asm
// === 082ec558 pvp_assault::CAssaultPlace::_SendStraightVictories  [0x082ec558-0x82ec807] ===
 82ec558:	55                   	push   %ebp
 82ec559:	89 e5                	mov    %esp,%ebp
 82ec55b:	56                   	push   %esi
 82ec55c:	53                   	push   %ebx
 82ec55d:	83 ec 40             	sub    $0x40,%esp
 82ec560:	8d 45 c8             	lea    -0x38(%ebp),%eax
 82ec563:	89 04 24             	mov    %eax,(%esp)
 82ec566:	e8 e1 17 2a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 82ec56b:	66 c7 45 d6 00 00    	movw   $0x0,-0x2a(%ebp)
 82ec571:	e8 25 fc dd ff       	call   80cc19b <_Z14G_CDataManagerv>
 82ec576:	8b 80 80 a6 00 00    	mov    0xa680(%eax),%eax
 82ec57c:	89 45 d8             	mov    %eax,-0x28(%ebp)
 82ec57f:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 82ec583:	0f 84 6d 02 00 00    	je     82ec7f6 <_ZN11pvp_assault13CAssaultPlace22_SendStraightVictoriesEP5CUser+0x29e>
 82ec589:	8b 45 0c             	mov    0xc(%ebp),%eax
 82ec58c:	89 04 24             	mov    %eax,(%esp)
 82ec58f:	e8 b8 8b 36 00       	call   865514c <_ZN5CUser8GetPartyEv>
 82ec594:	89 45 dc             	mov    %eax,-0x24(%ebp)
 82ec597:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 82ec59b:	0f 84 3d 01 00 00    	je     82ec6de <_ZN11pvp_assault13CAssaultPlace22_SendStraightVictoriesEP5CUser+0x186>
 82ec5a1:	8b 45 dc             	mov    -0x24(%ebp),%eax
 82ec5a4:	89 04 24             	mov    %eax,(%esp)
 82ec5a7:	e8 50 42 00 00       	call   82f07fc <_ZN6CParty20incStraightVictoriesEv>
 82ec5ac:	8b 45 dc             	mov    -0x24(%ebp),%eax
 82ec5af:	89 04 24             	mov    %eax,(%esp)
 82ec5b2:	e8 35 42 00 00       	call   82f07ec <_ZN6CParty20getStraightVictoriesEv>
 82ec5b7:	66 89 45 d6          	mov    %ax,-0x2a(%ebp)
 82ec5bb:	0f b7 45 d6          	movzwl -0x2a(%ebp),%eax
 82ec5bf:	3b 45 d8             	cmp    -0x28(%ebp),%eax
 82ec5c2:	0f 8c 2e 02 00 00    	jl     82ec7f6 <_ZN11pvp_assault13CAssaultPlace22_SendStraightVictoriesEP5CUser+0x29e>
 82ec5c8:	c7 44 24 08 e0 00 00 	movl   $0xe0,0x8(%esp)
 82ec5cf:	00 
 82ec5d0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82ec5d7:	00 
 82ec5d8:	8d 45 c8             	lea    -0x38(%ebp),%eax
 82ec5db:	89 04 24             	mov    %eax,(%esp)
 82ec5de:	e8 19 f3 dd ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 82ec5e3:	8b 45 dc             	mov    -0x24(%ebp),%eax
 82ec5e6:	89 04 24             	mov    %eax,(%esp)
 82ec5e9:	e8 7c db 2a 00       	call   859a16a <_ZN6CParty16get_member_countEv>
 82ec5ee:	89 44 24 04          	mov    %eax,0x4(%esp)
 82ec5f2:	8d 45 c8             	lea    -0x38(%ebp),%eax
 82ec5f5:	89 04 24             	mov    %eax,(%esp)
 82ec5f8:	e8 23 f3 dd ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 82ec5fd:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 82ec604:	eb 69                	jmp    82ec66f <_ZN11pvp_assault13CAssaultPlace22_SendStraightVictoriesEP5CUser+0x117>
 82ec606:	8b 45 e0             	mov    -0x20(%ebp),%eax
 82ec609:	89 44 24 04          	mov    %eax,0x4(%esp)
 82ec60d:	8b 45 dc             	mov    -0x24(%ebp),%eax
 82ec610:	89 04 24             	mov    %eax,(%esp)
 82ec613:	e8 4c 91 e5 ff       	call   8145764 <_ZN6CParty8get_userEi>
 82ec618:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 82ec61b:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 82ec61f:	74 49                	je     82ec66a <_ZN11pvp_assault13CAssaultPlace22_SendStraightVictoriesEP5CUser+0x112>
 82ec621:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 82ec624:	89 04 24             	mov    %eax,(%esp)
 82ec627:	e8 fc 49 e1 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 82ec62c:	89 45 e8             	mov    %eax,-0x18(%ebp)
 82ec62f:	8b 45 e8             	mov    -0x18(%ebp),%eax
 82ec632:	89 04 24             	mov    %eax,(%esp)
 82ec635:	e8 76 1d d9 ff       	call   807e3b0 <strlen@plt>
 82ec63a:	89 45 ec             	mov    %eax,-0x14(%ebp)
 82ec63d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 82ec640:	89 44 24 04          	mov    %eax,0x4(%esp)
 82ec644:	8d 45 c8             	lea    -0x38(%ebp),%eax
 82ec647:	89 04 24             	mov    %eax,(%esp)
 82ec64a:	e8 ed f2 dd ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 82ec64f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 82ec652:	89 44 24 08          	mov    %eax,0x8(%esp)
 82ec656:	8b 45 e8             	mov    -0x18(%ebp),%eax
 82ec659:	89 44 24 04          	mov    %eax,0x4(%esp)
 82ec65d:	8d 45 c8             	lea    -0x38(%ebp),%eax
 82ec660:	89 04 24             	mov    %eax,(%esp)
 82ec663:	e8 08 f1 f3 ff       	call   822b770 <_ZN18InterfacePacketBuf7put_strEPKci>
 82ec668:	eb 01                	jmp    82ec66b <_ZN11pvp_assault13CAssaultPlace22_SendStraightVictoriesEP5CUser+0x113>
 82ec66a:	90                   	nop
 82ec66b:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 82ec66f:	83 7d e0 03          	cmpl   $0x3,-0x20(%ebp)
 82ec673:	0f 9e c0             	setle  %al
 82ec676:	84 c0                	test   %al,%al
 82ec678:	75 8c                	jne    82ec606 <_ZN11pvp_assault13CAssaultPlace22_SendStraightVictoriesEP5CUser+0xae>
 82ec67a:	0f b7 45 d6          	movzwl -0x2a(%ebp),%eax
 82ec67e:	89 44 24 04          	mov    %eax,0x4(%esp)
 82ec682:	8d 45 c8             	lea    -0x38(%ebp),%eax
 82ec685:	89 04 24             	mov    %eax,(%esp)
 82ec688:	e8 af f2 dd ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 82ec68d:	8b 45 0c             	mov    0xc(%ebp),%eax
 82ec690:	89 04 24             	mov    %eax,(%esp)
 82ec693:	e8 2e 36 f4 ff       	call   822fcc6 <_ZN5CUser12getPowerSideEv>
 82ec698:	0f be c0             	movsbl %al,%eax
 82ec69b:	89 44 24 04          	mov    %eax,0x4(%esp)
 82ec69f:	8d 45 c8             	lea    -0x38(%ebp),%eax
 82ec6a2:	89 04 24             	mov    %eax,(%esp)
 82ec6a5:	e8 76 f2 dd ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 82ec6aa:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82ec6b1:	00 
 82ec6b2:	8d 45 c8             	lea    -0x38(%ebp),%eax
 82ec6b5:	89 04 24             	mov    %eax,(%esp)
 82ec6b8:	e8 9b f2 dd ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 82ec6bd:	e8 e5 dc de ff       	call   80da3a7 <_Z11G_GameWorldv>
 82ec6c2:	8d 55 c8             	lea    -0x38(%ebp),%edx
 82ec6c5:	89 54 24 08          	mov    %edx,0x8(%esp)
 82ec6c9:	c7 44 24 04 07 00 00 	movl   $0x7,0x4(%esp)
 82ec6d0:	00 
 82ec6d1:	89 04 24             	mov    %eax,(%esp)
 82ec6d4:	e8 6f b8 3d 00       	call   86c7f48 <_ZN9GameWorld12send_to_villEiR11PacketGuard>
 82ec6d9:	e9 18 01 00 00       	jmp    82ec7f6 <_ZN11pvp_assault13CAssaultPlace22_SendStraightVictoriesEP5CUser+0x29e>
 82ec6de:	8b 45 0c             	mov    0xc(%ebp),%eax
 82ec6e1:	89 04 24             	mov    %eax,(%esp)
 82ec6e4:	e8 4d 43 00 00       	call   82f0a36 <_ZN15CUserCharacInfo20incStraightVictoriesEv>
 82ec6e9:	8b 45 0c             	mov    0xc(%ebp),%eax
 82ec6ec:	89 04 24             	mov    %eax,(%esp)
 82ec6ef:	e8 1e 43 00 00       	call   82f0a12 <_ZNK15CUserCharacInfo20getStraightVictoriesEv>
 82ec6f4:	66 89 45 d6          	mov    %ax,-0x2a(%ebp)
 82ec6f8:	0f b7 45 d6          	movzwl -0x2a(%ebp),%eax
 82ec6fc:	3b 45 d8             	cmp    -0x28(%ebp),%eax
 82ec6ff:	0f 8c f1 00 00 00    	jl     82ec7f6 <_ZN11pvp_assault13CAssaultPlace22_SendStraightVictoriesEP5CUser+0x29e>
 82ec705:	c7 44 24 08 e0 00 00 	movl   $0xe0,0x8(%esp)
 82ec70c:	00 
 82ec70d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82ec714:	00 
 82ec715:	8d 45 c8             	lea    -0x38(%ebp),%eax
 82ec718:	89 04 24             	mov    %eax,(%esp)
 82ec71b:	e8 dc f1 dd ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 82ec720:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82ec727:	00 
 82ec728:	8d 45 c8             	lea    -0x38(%ebp),%eax
 82ec72b:	89 04 24             	mov    %eax,(%esp)
 82ec72e:	e8 ed f1 dd ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 82ec733:	8b 45 0c             	mov    0xc(%ebp),%eax
 82ec736:	89 04 24             	mov    %eax,(%esp)
 82ec739:	e8 ea 48 e1 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 82ec73e:	89 45 f0             	mov    %eax,-0x10(%ebp)
 82ec741:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82ec744:	89 04 24             	mov    %eax,(%esp)
 82ec747:	e8 64 1c d9 ff       	call   807e3b0 <strlen@plt>
 82ec74c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82ec74f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82ec752:	89 44 24 04          	mov    %eax,0x4(%esp)
 82ec756:	8d 45 c8             	lea    -0x38(%ebp),%eax
 82ec759:	89 04 24             	mov    %eax,(%esp)
 82ec75c:	e8 db f1 dd ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 82ec761:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82ec764:	89 44 24 08          	mov    %eax,0x8(%esp)
 82ec768:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82ec76b:	89 44 24 04          	mov    %eax,0x4(%esp)
 82ec76f:	8d 45 c8             	lea    -0x38(%ebp),%eax
 82ec772:	89 04 24             	mov    %eax,(%esp)
 82ec775:	e8 f6 ef f3 ff       	call   822b770 <_ZN18InterfacePacketBuf7put_strEPKci>
 82ec77a:	0f b7 45 d6          	movzwl -0x2a(%ebp),%eax
 82ec77e:	89 44 24 04          	mov    %eax,0x4(%esp)
 82ec782:	8d 45 c8             	lea    -0x38(%ebp),%eax
 82ec785:	89 04 24             	mov    %eax,(%esp)
 82ec788:	e8 af f1 dd ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 82ec78d:	8b 45 0c             	mov    0xc(%ebp),%eax
 82ec790:	89 04 24             	mov    %eax,(%esp)
 82ec793:	e8 2e 35 f4 ff       	call   822fcc6 <_ZN5CUser12getPowerSideEv>
 82ec798:	0f be c0             	movsbl %al,%eax
 82ec79b:	89 44 24 04          	mov    %eax,0x4(%esp)
 82ec79f:	8d 45 c8             	lea    -0x38(%ebp),%eax
 82ec7a2:	89 04 24             	mov    %eax,(%esp)
 82ec7a5:	e8 76 f1 dd ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 82ec7aa:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82ec7b1:	00 
 82ec7b2:	8d 45 c8             	lea    -0x38(%ebp),%eax
 82ec7b5:	89 04 24             	mov    %eax,(%esp)
 82ec7b8:	e8 9b f1 dd ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 82ec7bd:	e8 e5 db de ff       	call   80da3a7 <_Z11G_GameWorldv>
 82ec7c2:	8d 55 c8             	lea    -0x38(%ebp),%edx
 82ec7c5:	89 54 24 08          	mov    %edx,0x8(%esp)
 82ec7c9:	c7 44 24 04 07 00 00 	movl   $0x7,0x4(%esp)
 82ec7d0:	00 
 82ec7d1:	89 04 24             	mov    %eax,(%esp)
 82ec7d4:	e8 6f b7 3d 00       	call   86c7f48 <_ZN9GameWorld12send_to_villEiR11PacketGuard>
 82ec7d9:	eb 1b                	jmp    82ec7f6 <_ZN11pvp_assault13CAssaultPlace22_SendStraightVictoriesEP5CUser+0x29e>
 82ec7db:	89 d3                	mov    %edx,%ebx
 82ec7dd:	89 c6                	mov    %eax,%esi
 82ec7df:	8d 45 c8             	lea    -0x38(%ebp),%eax
 82ec7e2:	89 04 24             	mov    %eax,(%esp)
 82ec7e5:	e8 96 16 2a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82ec7ea:	89 f0                	mov    %esi,%eax
 82ec7ec:	89 da                	mov    %ebx,%edx
 82ec7ee:	89 04 24             	mov    %eax,(%esp)
 82ec7f1:	e8 5a 6f 7f 00       	call   8ae3750 <_Unwind_Resume>
 82ec7f6:	8d 45 c8             	lea    -0x38(%ebp),%eax
 82ec7f9:	89 04 24             	mov    %eax,(%esp)
 82ec7fc:	e8 7f 16 2a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82ec801:	83 c4 40             	add    $0x40,%esp
 82ec804:	5b                   	pop    %ebx
 82ec805:	5e                   	pop    %esi
 82ec806:	5d                   	pop    %ebp
 82ec807:	c3                   	ret

```

```c
// pvp_assault::CAssaultPlace::_SendStraightVictories @ 0x82ec558

/* pvp_assault::CAssaultPlace::_SendStraightVictories(CUser*) */

void __thiscall
pvp_assault::CAssaultPlace::_SendStraightVictories(CAssaultPlace *this,CUser *param_1)

{
  char cVar1;
  int iVar2;
  GameWorld *pGVar3;
  PacketGuard local_3c [14];
  ushort local_2e;
  int local_2c;
  CParty *local_28;
  int local_24;
  CUserCharacInfo *local_20;
  char *local_1c;
  size_t local_18;
  char *local_14;
  size_t local_10;
  
  PacketGuard::PacketGuard(local_3c);
  local_2e = 0;
                    /* try { // try from 082ec571 to 082ec7d8 has its CatchHandler @ 082ec7db */
  iVar2 = G_CDataManager();
  local_2c = *(int *)(iVar2 + 0xa680);
  if (param_1 != (CUser *)0x0) {
    local_28 = (CParty *)CUser::GetParty(param_1);
    if (local_28 == (CParty *)0x0) {
      CUserCharacInfo::incStraightVictories((CUserCharacInfo *)param_1);
      local_2e = CUserCharacInfo::getStraightVictories((CUserCharacInfo *)param_1);
      if (local_2c <= (int)(uint)local_2e) {
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_3c,0,0xe0);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,1);
        local_14 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
        local_10 = strlen(local_14);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_3c,local_10);
        InterfacePacketBuf::put_str((InterfacePacketBuf *)local_3c,local_14,local_10);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_3c,(uint)local_2e);
        cVar1 = CUser::getPowerSide(param_1);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,(int)cVar1);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_3c,true);
        pGVar3 = (GameWorld *)G_GameWorld();
        GameWorld::send_to_vill(pGVar3,7,local_3c);
      }
    }
    else {
      CParty::incStraightVictories(local_28);
      local_2e = CParty::getStraightVictories(local_28);
      if (local_2c <= (int)(uint)local_2e) {
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_3c,0,0xe0);
        iVar2 = CParty::get_member_count(local_28);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,iVar2);
        for (local_24 = 0; local_24 < 4; local_24 = local_24 + 1) {
          local_20 = (CUserCharacInfo *)CParty::get_user(local_28,local_24);
          if (local_20 != (CUserCharacInfo *)0x0) {
            local_1c = (char *)CUserCharacInfo::getCurCharacName(local_20);
            local_18 = strlen(local_1c);
            InterfacePacketBuf::put_int((InterfacePacketBuf *)local_3c,local_18);
            InterfacePacketBuf::put_str((InterfacePacketBuf *)local_3c,local_1c,local_18);
          }
        }
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_3c,(uint)local_2e);
        cVar1 = CUser::getPowerSide(param_1);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,(int)cVar1);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_3c,true);
        pGVar3 = (GameWorld *)G_GameWorld();
        GameWorld::send_to_vill(pGVar3,7,local_3c);
      }
    }
  }
  PacketGuard::~PacketGuard(local_3c);
  return;
}

```

---

## _SendUserInfo

```asm
// === 082e7918 pvp_assault::CAssaultPlace::_SendUserInfo  [0x082e7918-0x82e7985] ===
 82e7918:	55                   	push   %ebp
 82e7919:	89 e5                	mov    %esp,%ebp
 82e791b:	56                   	push   %esi
 82e791c:	53                   	push   %ebx
 82e791d:	83 ec 20             	sub    $0x20,%esp
 82e7920:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82e7923:	89 04 24             	mov    %eax,(%esp)
 82e7926:	e8 21 64 2a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 82e792b:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 82e7932:	00 
 82e7933:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82e7936:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e793a:	8b 45 08             	mov    0x8(%ebp),%eax
 82e793d:	89 04 24             	mov    %eax,(%esp)
 82e7940:	e8 21 12 00 00       	call   82e8b66 <_ZN11pvp_assault13CAssaultPlace13_MakeUserInfoEP11PacketGuard13ENUM_USERINFO>
 82e7945:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82e7948:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e794c:	8b 45 08             	mov    0x8(%ebp),%eax
 82e794f:	89 04 24             	mov    %eax,(%esp)
 82e7952:	e8 9f f2 ff ff       	call   82e6bf6 <_ZN11pvp_assault13CAssaultPlace10SendPacketER11PacketGuard>
 82e7957:	eb 1b                	jmp    82e7974 <_ZN11pvp_assault13CAssaultPlace13_SendUserInfoEv+0x5c>
 82e7959:	89 d3                	mov    %edx,%ebx
 82e795b:	89 c6                	mov    %eax,%esi
 82e795d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82e7960:	89 04 24             	mov    %eax,(%esp)
 82e7963:	e8 18 65 2a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82e7968:	89 f0                	mov    %esi,%eax
 82e796a:	89 da                	mov    %ebx,%edx
 82e796c:	89 04 24             	mov    %eax,(%esp)
 82e796f:	e8 dc bd 7f 00       	call   8ae3750 <_Unwind_Resume>
 82e7974:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82e7977:	89 04 24             	mov    %eax,(%esp)
 82e797a:	e8 01 65 2a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82e797f:	83 c4 20             	add    $0x20,%esp
 82e7982:	5b                   	pop    %ebx
 82e7983:	5e                   	pop    %esi
 82e7984:	5d                   	pop    %ebp
 82e7985:	c3                   	ret

```

```c
// pvp_assault::CAssaultPlace::_SendUserInfo @ 0x82e7918

/* pvp_assault::CAssaultPlace::_SendUserInfo() */

void __thiscall pvp_assault::CAssaultPlace::_SendUserInfo(CAssaultPlace *this)

{
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 082e7940 to 082e7956 has its CatchHandler @ 082e7959 */
  _MakeUserInfo(this,local_18,1);
  SendPacket(this,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}

```

---

## _SendUserMiniInfo

```asm
// === 082e7986 pvp_assault::CAssaultPlace::_SendUserMiniInfo  [0x082e7986-0x82e79f5] ===
 82e7986:	55                   	push   %ebp
 82e7987:	89 e5                	mov    %esp,%ebp
 82e7989:	56                   	push   %esi
 82e798a:	53                   	push   %ebx
 82e798b:	83 ec 20             	sub    $0x20,%esp
 82e798e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82e7991:	89 04 24             	mov    %eax,(%esp)
 82e7994:	e8 b3 63 2a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 82e7999:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82e79a0:	00 
 82e79a1:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82e79a4:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e79a8:	8b 45 08             	mov    0x8(%ebp),%eax
 82e79ab:	89 04 24             	mov    %eax,(%esp)
 82e79ae:	e8 b3 11 00 00       	call   82e8b66 <_ZN11pvp_assault13CAssaultPlace13_MakeUserInfoEP11PacketGuard13ENUM_USERINFO>
 82e79b3:	e8 ef 29 df ff       	call   80da3a7 <_Z11G_GameWorldv>
 82e79b8:	8d 55 ec             	lea    -0x14(%ebp),%edx
 82e79bb:	89 54 24 04          	mov    %edx,0x4(%esp)
 82e79bf:	89 04 24             	mov    %eax,(%esp)
 82e79c2:	e8 4d 12 3e 00       	call   86c8c14 <_ZN9GameWorld8send_allER11PacketGuard>
 82e79c7:	eb 1b                	jmp    82e79e4 <_ZN11pvp_assault13CAssaultPlace17_SendUserMiniInfoEv+0x5e>
 82e79c9:	89 d3                	mov    %edx,%ebx
 82e79cb:	89 c6                	mov    %eax,%esi
 82e79cd:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82e79d0:	89 04 24             	mov    %eax,(%esp)
 82e79d3:	e8 a8 64 2a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82e79d8:	89 f0                	mov    %esi,%eax
 82e79da:	89 da                	mov    %ebx,%edx
 82e79dc:	89 04 24             	mov    %eax,(%esp)
 82e79df:	e8 6c bd 7f 00       	call   8ae3750 <_Unwind_Resume>
 82e79e4:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82e79e7:	89 04 24             	mov    %eax,(%esp)
 82e79ea:	e8 91 64 2a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82e79ef:	83 c4 20             	add    $0x20,%esp
 82e79f2:	5b                   	pop    %ebx
 82e79f3:	5e                   	pop    %esi
 82e79f4:	5d                   	pop    %ebp
 82e79f5:	c3                   	ret

```

```c
// pvp_assault::CAssaultPlace::_SendUserMiniInfo @ 0x82e7986

/* pvp_assault::CAssaultPlace::_SendUserMiniInfo() */

void __thiscall pvp_assault::CAssaultPlace::_SendUserMiniInfo(CAssaultPlace *this)

{
  GameWorld *this_00;
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 082e79ae to 082e79c6 has its CatchHandler @ 082e79c9 */
  _MakeUserInfo(this,local_18,0);
  this_00 = (GameWorld *)G_GameWorld();
  GameWorld::send_all(this_00,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}

```

---

## _SendUserState

```asm
// === 082e79f6 pvp_assault::CAssaultPlace::_SendUserState  [0x082e79f6-0x82e7a5d] ===
 82e79f6:	55                   	push   %ebp
 82e79f7:	89 e5                	mov    %esp,%ebp
 82e79f9:	56                   	push   %esi
 82e79fa:	53                   	push   %ebx
 82e79fb:	83 ec 20             	sub    $0x20,%esp
 82e79fe:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82e7a01:	89 04 24             	mov    %eax,(%esp)
 82e7a04:	e8 43 63 2a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 82e7a09:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82e7a0c:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e7a10:	8b 45 08             	mov    0x8(%ebp),%eax
 82e7a13:	89 04 24             	mov    %eax,(%esp)
 82e7a16:	e8 3f 12 00 00       	call   82e8c5a <_ZN11pvp_assault13CAssaultPlace14_MakeUserStateEP11PacketGuard>
 82e7a1b:	e8 87 29 df ff       	call   80da3a7 <_Z11G_GameWorldv>
 82e7a20:	8d 55 ec             	lea    -0x14(%ebp),%edx
 82e7a23:	89 54 24 04          	mov    %edx,0x4(%esp)
 82e7a27:	89 04 24             	mov    %eax,(%esp)
 82e7a2a:	e8 e5 11 3e 00       	call   86c8c14 <_ZN9GameWorld8send_allER11PacketGuard>
 82e7a2f:	eb 1b                	jmp    82e7a4c <_ZN11pvp_assault13CAssaultPlace14_SendUserStateEv+0x56>
 82e7a31:	89 d3                	mov    %edx,%ebx
 82e7a33:	89 c6                	mov    %eax,%esi
 82e7a35:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82e7a38:	89 04 24             	mov    %eax,(%esp)
 82e7a3b:	e8 40 64 2a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82e7a40:	89 f0                	mov    %esi,%eax
 82e7a42:	89 da                	mov    %ebx,%edx
 82e7a44:	89 04 24             	mov    %eax,(%esp)
 82e7a47:	e8 04 bd 7f 00       	call   8ae3750 <_Unwind_Resume>
 82e7a4c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82e7a4f:	89 04 24             	mov    %eax,(%esp)
 82e7a52:	e8 29 64 2a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82e7a57:	83 c4 20             	add    $0x20,%esp
 82e7a5a:	5b                   	pop    %ebx
 82e7a5b:	5e                   	pop    %esi
 82e7a5c:	5d                   	pop    %ebp
 82e7a5d:	c3                   	ret

```

```c
// pvp_assault::CAssaultPlace::_SendUserState @ 0x82e79f6

/* pvp_assault::CAssaultPlace::_SendUserState() */

void __thiscall pvp_assault::CAssaultPlace::_SendUserState(CAssaultPlace *this)

{
  GameWorld *this_00;
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 082e7a16 to 082e7a2e has its CatchHandler @ 082e7a31 */
  _MakeUserState(this,local_18);
  this_00 = (GameWorld *)G_GameWorld();
  GameWorld::send_all(this_00,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}

```

---

## _SendUserUdpIpPort

```asm
// === 082e7a5e pvp_assault::CAssaultPlace::_SendUserUdpIpPort  [0x082e7a5e-0x82e7ac3] ===
 82e7a5e:	55                   	push   %ebp
 82e7a5f:	89 e5                	mov    %esp,%ebp
 82e7a61:	56                   	push   %esi
 82e7a62:	53                   	push   %ebx
 82e7a63:	83 ec 20             	sub    $0x20,%esp
 82e7a66:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82e7a69:	89 04 24             	mov    %eax,(%esp)
 82e7a6c:	e8 db 62 2a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 82e7a71:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82e7a74:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e7a78:	8b 45 08             	mov    0x8(%ebp),%eax
 82e7a7b:	89 04 24             	mov    %eax,(%esp)
 82e7a7e:	e8 5f 13 00 00       	call   82e8de2 <_ZN11pvp_assault13CAssaultPlace18_MakeUserUdpIpPortEP11PacketGuard>
 82e7a83:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82e7a86:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e7a8a:	8b 45 08             	mov    0x8(%ebp),%eax
 82e7a8d:	89 04 24             	mov    %eax,(%esp)
 82e7a90:	e8 61 f1 ff ff       	call   82e6bf6 <_ZN11pvp_assault13CAssaultPlace10SendPacketER11PacketGuard>
 82e7a95:	eb 1b                	jmp    82e7ab2 <_ZN11pvp_assault13CAssaultPlace18_SendUserUdpIpPortEv+0x54>
 82e7a97:	89 d3                	mov    %edx,%ebx
 82e7a99:	89 c6                	mov    %eax,%esi
 82e7a9b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82e7a9e:	89 04 24             	mov    %eax,(%esp)
 82e7aa1:	e8 da 63 2a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82e7aa6:	89 f0                	mov    %esi,%eax
 82e7aa8:	89 da                	mov    %ebx,%edx
 82e7aaa:	89 04 24             	mov    %eax,(%esp)
 82e7aad:	e8 9e bc 7f 00       	call   8ae3750 <_Unwind_Resume>
 82e7ab2:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82e7ab5:	89 04 24             	mov    %eax,(%esp)
 82e7ab8:	e8 c3 63 2a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82e7abd:	83 c4 20             	add    $0x20,%esp
 82e7ac0:	5b                   	pop    %ebx
 82e7ac1:	5e                   	pop    %esi
 82e7ac2:	5d                   	pop    %ebp
 82e7ac3:	c3                   	ret

```

```c
// pvp_assault::CAssaultPlace::_SendUserUdpIpPort @ 0x82e7a5e

/* pvp_assault::CAssaultPlace::_SendUserUdpIpPort() */

void __thiscall pvp_assault::CAssaultPlace::_SendUserUdpIpPort(CAssaultPlace *this)

{
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 082e7a7e to 082e7a94 has its CatchHandler @ 082e7a97 */
  _MakeUserUdpIpPort(this,local_18);
  SendPacket(this,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}

```

---

## _SendVictoryBonus

```asm
// === 082ecdbc pvp_assault::CAssaultPlace::_SendVictoryBonus  [0x082ecdbc-0x82eceb1] ===
 82ecdbc:	55                   	push   %ebp
 82ecdbd:	89 e5                	mov    %esp,%ebp
 82ecdbf:	56                   	push   %esi
 82ecdc0:	53                   	push   %ebx
 82ecdc1:	83 ec 20             	sub    $0x20,%esp
 82ecdc4:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82ecdc7:	89 04 24             	mov    %eax,(%esp)
 82ecdca:	e8 7d 0f 2a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 82ecdcf:	c7 44 24 08 08 01 00 	movl   $0x108,0x8(%esp)
 82ecdd6:	00 
 82ecdd7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82ecdde:	00 
 82ecddf:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82ecde2:	89 04 24             	mov    %eax,(%esp)
 82ecde5:	e8 12 eb dd ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 82ecdea:	8b 45 10             	mov    0x10(%ebp),%eax
 82ecded:	83 c0 01             	add    $0x1,%eax
 82ecdf0:	89 44 24 04          	mov    %eax,0x4(%esp)
 82ecdf4:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82ecdf7:	89 04 24             	mov    %eax,(%esp)
 82ecdfa:	e8 3d eb dd ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 82ecdff:	8b 45 14             	mov    0x14(%ebp),%eax
 82ece02:	89 44 24 04          	mov    %eax,0x4(%esp)
 82ece06:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82ece09:	89 04 24             	mov    %eax,(%esp)
 82ece0c:	e8 2b eb dd ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 82ece11:	8b 45 18             	mov    0x18(%ebp),%eax
 82ece14:	89 44 24 04          	mov    %eax,0x4(%esp)
 82ece18:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82ece1b:	89 04 24             	mov    %eax,(%esp)
 82ece1e:	e8 19 eb dd ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 82ece23:	8b 45 1c             	mov    0x1c(%ebp),%eax
 82ece26:	89 44 24 04          	mov    %eax,0x4(%esp)
 82ece2a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82ece2d:	89 04 24             	mov    %eax,(%esp)
 82ece30:	e8 07 eb dd ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 82ece35:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82ece3c:	00 
 82ece3d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82ece40:	89 04 24             	mov    %eax,(%esp)
 82ece43:	e8 10 eb dd ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 82ece48:	8b 45 0c             	mov    0xc(%ebp),%eax
 82ece4b:	89 04 24             	mov    %eax,(%esp)
 82ece4e:	e8 f9 82 36 00       	call   865514c <_ZN5CUser8GetPartyEv>
 82ece53:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82ece56:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 82ece5a:	74 14                	je     82ece70 <_ZN11pvp_assault13CAssaultPlace17_SendVictoryBonusEP5CUseriiii+0xb4>
 82ece5c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82ece5f:	89 44 24 04          	mov    %eax,0x4(%esp)
 82ece63:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82ece66:	89 04 24             	mov    %eax,(%esp)
 82ece69:	e8 e0 02 2b 00       	call   859d14e <_ZN6CParty13send_to_partyER11PacketGuard>
 82ece6e:	eb 2f                	jmp    82ece9f <_ZN11pvp_assault13CAssaultPlace17_SendVictoryBonusEP5CUseriiii+0xe3>
 82ece70:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82ece73:	89 44 24 04          	mov    %eax,0x4(%esp)
 82ece77:	8b 45 0c             	mov    0xc(%ebp),%eax
 82ece7a:	89 04 24             	mov    %eax,(%esp)
 82ece7d:	e8 38 b7 35 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 82ece82:	eb 1b                	jmp    82ece9f <_ZN11pvp_assault13CAssaultPlace17_SendVictoryBonusEP5CUseriiii+0xe3>
 82ece84:	89 d3                	mov    %edx,%ebx
 82ece86:	89 c6                	mov    %eax,%esi
 82ece88:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82ece8b:	89 04 24             	mov    %eax,(%esp)
 82ece8e:	e8 ed 0f 2a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82ece93:	89 f0                	mov    %esi,%eax
 82ece95:	89 da                	mov    %ebx,%edx
 82ece97:	89 04 24             	mov    %eax,(%esp)
 82ece9a:	e8 b1 68 7f 00       	call   8ae3750 <_Unwind_Resume>
 82ece9f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82ecea2:	89 04 24             	mov    %eax,(%esp)
 82ecea5:	e8 d6 0f 2a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82eceaa:	83 c4 20             	add    $0x20,%esp
 82ecead:	5b                   	pop    %ebx
 82eceae:	5e                   	pop    %esi
 82eceaf:	5d                   	pop    %ebp
 82eceb0:	c3                   	ret
 82eceb1:	90                   	nop

```

```c
// pvp_assault::CAssaultPlace::_SendVictoryBonus @ 0x82ecdbc

/* pvp_assault::CAssaultPlace::_SendVictoryBonus(CUser*, int, int, int, int) */

void __thiscall
pvp_assault::CAssaultPlace::_SendVictoryBonus
          (CAssaultPlace *this,CUser *param_1,int param_2,int param_3,int param_4,int param_5)

{
  PacketGuard local_1c [12];
  CParty *local_10;
  
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 082ecde5 to 082ece81 has its CatchHandler @ 082ece84 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0x108);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,param_2 + 1);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,param_3);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,param_4);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,param_5);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  local_10 = (CParty *)CUser::GetParty(param_1);
  if (local_10 == (CParty *)0x0) {
    CUser::Send(param_1,local_1c);
  }
  else {
    CParty::send_to_party(local_10,local_1c);
  }
  PacketGuard::~PacketGuard(local_1c);
  return;
}

```

---

## _SeparateTeam

```asm
// === 082e8098 pvp_assault::CAssaultPlace::_SeparateTeam  [0x082e8098-0x82e82a1] ===
 82e8098:	55                   	push   %ebp
 82e8099:	89 e5                	mov    %esp,%ebp
 82e809b:	57                   	push   %edi
 82e809c:	56                   	push   %esi
 82e809d:	53                   	push   %ebx
 82e809e:	83 ec 5c             	sub    $0x5c,%esp
 82e80a1:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 82e80a8:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 82e80af:	8d 5d bc             	lea    -0x44(%ebp),%ebx
 82e80b2:	89 df                	mov    %ebx,%edi
 82e80b4:	be 01 00 00 00       	mov    $0x1,%esi
 82e80b9:	eb 0e                	jmp    82e80c9 <_ZN11pvp_assault13CAssaultPlace13_SeparateTeamEP5CUserS2_+0x31>
 82e80bb:	89 3c 24             	mov    %edi,(%esp)
 82e80be:	e8 5b 9a 00 00       	call   82f1b1e <_ZNSt6vectorIP5CUserSaIS1_EEC1Ev>
 82e80c3:	83 c7 0c             	add    $0xc,%edi
 82e80c6:	83 ee 01             	sub    $0x1,%esi
 82e80c9:	83 fe ff             	cmp    $0xffffffff,%esi
 82e80cc:	0f 95 c0             	setne  %al
 82e80cf:	84 c0                	test   %al,%al
 82e80d1:	75 e8                	jne    82e80bb <_ZN11pvp_assault13CAssaultPlace13_SeparateTeamEP5CUserS2_+0x23>
 82e80d3:	eb 3c                	jmp    82e8111 <_ZN11pvp_assault13CAssaultPlace13_SeparateTeamEP5CUserS2_+0x79>
 82e80d5:	89 d7                	mov    %edx,%edi
 82e80d7:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 82e80da:	85 db                	test   %ebx,%ebx
 82e80dc:	74 26                	je     82e8104 <_ZN11pvp_assault13CAssaultPlace13_SeparateTeamEP5CUserS2_+0x6c>
 82e80de:	b8 01 00 00 00       	mov    $0x1,%eax
 82e80e3:	29 f0                	sub    %esi,%eax
 82e80e5:	89 c2                	mov    %eax,%edx
 82e80e7:	89 d0                	mov    %edx,%eax
 82e80e9:	01 c0                	add    %eax,%eax
 82e80eb:	01 d0                	add    %edx,%eax
 82e80ed:	c1 e0 02             	shl    $0x2,%eax
 82e80f0:	8d 34 03             	lea    (%ebx,%eax,1),%esi
 82e80f3:	39 de                	cmp    %ebx,%esi
 82e80f5:	74 0d                	je     82e8104 <_ZN11pvp_assault13CAssaultPlace13_SeparateTeamEP5CUserS2_+0x6c>
 82e80f7:	83 ee 0c             	sub    $0xc,%esi
 82e80fa:	89 34 24             	mov    %esi,(%esp)
 82e80fd:	e8 30 9a 00 00       	call   82f1b32 <_ZNSt6vectorIP5CUserSaIS1_EED1Ev>
 82e8102:	eb ef                	jmp    82e80f3 <_ZN11pvp_assault13CAssaultPlace13_SeparateTeamEP5CUserS2_+0x5b>
 82e8104:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 82e8107:	89 fa                	mov    %edi,%edx
 82e8109:	89 04 24             	mov    %eax,(%esp)
 82e810c:	e8 3f b6 7f 00       	call   8ae3750 <_Unwind_Resume>
 82e8111:	8d 45 bc             	lea    -0x44(%ebp),%eax
 82e8114:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e8118:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e811b:	89 04 24             	mov    %eax,(%esp)
 82e811e:	e8 47 84 39 00       	call   868056a <_ZN5CUser18GetUserListByPartyERSt6vectorIPS_SaIS1_EE>
 82e8123:	89 45 dc             	mov    %eax,-0x24(%ebp)
 82e8126:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82e812d:	00 
 82e812e:	8b 45 dc             	mov    -0x24(%ebp),%eax
 82e8131:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e8135:	8b 45 08             	mov    0x8(%ebp),%eax
 82e8138:	89 04 24             	mov    %eax,(%esp)
 82e813b:	e8 0a ff ff ff       	call   82e804a <_ZN11pvp_assault13CAssaultPlace16_BackupPartyInfoEP6CParty17ENUM_ASSAULT_TEAM>
 82e8140:	8d 45 bc             	lea    -0x44(%ebp),%eax
 82e8143:	83 c0 0c             	add    $0xc,%eax
 82e8146:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e814a:	8b 45 10             	mov    0x10(%ebp),%eax
 82e814d:	89 04 24             	mov    %eax,(%esp)
 82e8150:	e8 15 84 39 00       	call   868056a <_ZN5CUser18GetUserListByPartyERSt6vectorIPS_SaIS1_EE>
 82e8155:	89 45 dc             	mov    %eax,-0x24(%ebp)
 82e8158:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 82e815f:	00 
 82e8160:	8b 45 dc             	mov    -0x24(%ebp),%eax
 82e8163:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e8167:	8b 45 08             	mov    0x8(%ebp),%eax
 82e816a:	89 04 24             	mov    %eax,(%esp)
 82e816d:	e8 d8 fe ff ff       	call   82e804a <_ZN11pvp_assault13CAssaultPlace16_BackupPartyInfoEP6CParty17ENUM_ASSAULT_TEAM>
 82e8172:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 82e8179:	eb 79                	jmp    82e81f4 <_ZN11pvp_assault13CAssaultPlace13_SeparateTeamEP5CUserS2_+0x15c>
 82e817b:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 82e8182:	eb 61                	jmp    82e81e5 <_ZN11pvp_assault13CAssaultPlace13_SeparateTeamEP5CUserS2_+0x14d>
 82e8184:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 82e8187:	8d 4d bc             	lea    -0x44(%ebp),%ecx
 82e818a:	89 d0                	mov    %edx,%eax
 82e818c:	01 c0                	add    %eax,%eax
 82e818e:	01 d0                	add    %edx,%eax
 82e8190:	c1 e0 02             	shl    $0x2,%eax
 82e8193:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 82e8196:	89 04 24             	mov    %eax,(%esp)
 82e8199:	e8 f2 99 00 00       	call   82f1b90 <_ZNKSt6vectorIP5CUserSaIS1_EE4sizeEv>
 82e819e:	3b 45 e0             	cmp    -0x20(%ebp),%eax
 82e81a1:	0f 97 c0             	seta   %al
 82e81a4:	84 c0                	test   %al,%al
 82e81a6:	74 39                	je     82e81e1 <_ZN11pvp_assault13CAssaultPlace13_SeparateTeamEP5CUserS2_+0x149>
 82e81a8:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
 82e81ab:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 82e81ae:	8d 4d bc             	lea    -0x44(%ebp),%ecx
 82e81b1:	89 d0                	mov    %edx,%eax
 82e81b3:	01 c0                	add    %eax,%eax
 82e81b5:	01 d0                	add    %edx,%eax
 82e81b7:	c1 e0 02             	shl    $0x2,%eax
 82e81ba:	8d 14 01             	lea    (%ecx,%eax,1),%edx
 82e81bd:	8b 45 e0             	mov    -0x20(%ebp),%eax
 82e81c0:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e81c4:	89 14 24             	mov    %edx,(%esp)
 82e81c7:	e8 e0 99 00 00       	call   82f1bac <_ZNSt6vectorIP5CUserSaIS1_EE2atEj>
 82e81cc:	8b 00                	mov    (%eax),%eax
 82e81ce:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 82e81d2:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e81d6:	8b 45 08             	mov    0x8(%ebp),%eax
 82e81d9:	89 04 24             	mov    %eax,(%esp)
 82e81dc:	e8 37 ee ff ff       	call   82e7018 <_ZN11pvp_assault13CAssaultPlace8_AddUserEP5CUser17ENUM_ASSAULT_TEAM>
 82e81e1:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 82e81e5:	83 7d e4 01          	cmpl   $0x1,-0x1c(%ebp)
 82e81e9:	0f 9e c0             	setle  %al
 82e81ec:	84 c0                	test   %al,%al
 82e81ee:	75 94                	jne    82e8184 <_ZN11pvp_assault13CAssaultPlace13_SeparateTeamEP5CUserS2_+0xec>
 82e81f0:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 82e81f4:	83 7d e0 07          	cmpl   $0x7,-0x20(%ebp)
 82e81f8:	0f 96 c0             	setbe  %al
 82e81fb:	84 c0                	test   %al,%al
 82e81fd:	0f 85 78 ff ff ff    	jne    82e817b <_ZN11pvp_assault13CAssaultPlace13_SeparateTeamEP5CUserS2_+0xe3>
 82e8203:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e8206:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 82e8209:	8b 45 10             	mov    0x10(%ebp),%eax
 82e820c:	89 45 d8             	mov    %eax,-0x28(%ebp)
 82e820f:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e8212:	89 04 24             	mov    %eax,(%esp)
 82e8215:	e8 be 88 00 00       	call   82f0ad8 <_ZN15CUserCharacInfo22GetCurCharacChaosPointEv>
 82e821a:	85 c0                	test   %eax,%eax
 82e821c:	0f 9f c2             	setg   %dl
 82e821f:	8b 45 08             	mov    0x8(%ebp),%eax
 82e8222:	88 90 28 01 00 00    	mov    %dl,0x128(%eax)
 82e8228:	8b 45 10             	mov    0x10(%ebp),%eax
 82e822b:	89 04 24             	mov    %eax,(%esp)
 82e822e:	e8 a5 88 00 00       	call   82f0ad8 <_ZN15CUserCharacInfo22GetCurCharacChaosPointEv>
 82e8233:	85 c0                	test   %eax,%eax
 82e8235:	0f 9f c2             	setg   %dl
 82e8238:	8b 45 08             	mov    0x8(%ebp),%eax
 82e823b:	88 90 29 01 00 00    	mov    %dl,0x129(%eax)
 82e8241:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 82e8244:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e8248:	8b 45 08             	mov    0x8(%ebp),%eax
 82e824b:	89 04 24             	mov    %eax,(%esp)
 82e824e:	e8 69 f9 ff ff       	call   82e7bbc <_ZN11pvp_assault13CAssaultPlace16_DispositionUserEPP5CUser>
 82e8253:	eb 2a                	jmp    82e827f <_ZN11pvp_assault13CAssaultPlace13_SeparateTeamEP5CUserS2_+0x1e7>
 82e8255:	89 d6                	mov    %edx,%esi
 82e8257:	89 c7                	mov    %eax,%edi
 82e8259:	8d 45 bc             	lea    -0x44(%ebp),%eax
 82e825c:	8d 58 18             	lea    0x18(%eax),%ebx
 82e825f:	8d 45 bc             	lea    -0x44(%ebp),%eax
 82e8262:	39 c3                	cmp    %eax,%ebx
 82e8264:	74 0d                	je     82e8273 <_ZN11pvp_assault13CAssaultPlace13_SeparateTeamEP5CUserS2_+0x1db>
 82e8266:	83 eb 0c             	sub    $0xc,%ebx
 82e8269:	89 1c 24             	mov    %ebx,(%esp)
 82e826c:	e8 c1 98 00 00       	call   82f1b32 <_ZNSt6vectorIP5CUserSaIS1_EED1Ev>
 82e8271:	eb ec                	jmp    82e825f <_ZN11pvp_assault13CAssaultPlace13_SeparateTeamEP5CUserS2_+0x1c7>
 82e8273:	89 f8                	mov    %edi,%eax
 82e8275:	89 f2                	mov    %esi,%edx
 82e8277:	89 04 24             	mov    %eax,(%esp)
 82e827a:	e8 d1 b4 7f 00       	call   8ae3750 <_Unwind_Resume>
 82e827f:	8d 45 bc             	lea    -0x44(%ebp),%eax
 82e8282:	8d 58 18             	lea    0x18(%eax),%ebx
 82e8285:	8d 45 bc             	lea    -0x44(%ebp),%eax
 82e8288:	39 c3                	cmp    %eax,%ebx
 82e828a:	74 0d                	je     82e8299 <_ZN11pvp_assault13CAssaultPlace13_SeparateTeamEP5CUserS2_+0x201>
 82e828c:	83 eb 0c             	sub    $0xc,%ebx
 82e828f:	89 1c 24             	mov    %ebx,(%esp)
 82e8292:	e8 9b 98 00 00       	call   82f1b32 <_ZNSt6vectorIP5CUserSaIS1_EED1Ev>
 82e8297:	eb ec                	jmp    82e8285 <_ZN11pvp_assault13CAssaultPlace13_SeparateTeamEP5CUserS2_+0x1ed>
 82e8299:	83 c4 5c             	add    $0x5c,%esp
 82e829c:	5b                   	pop    %ebx
 82e829d:	5e                   	pop    %esi
 82e829e:	5f                   	pop    %edi
 82e829f:	5d                   	pop    %ebp
 82e82a0:	c3                   	ret
 82e82a1:	90                   	nop

```

```c
// pvp_assault::CAssaultPlace::_SeparateTeam @ 0x82e8098

/* pvp_assault::CAssaultPlace::_SeparateTeam(CUser*, CUser*) */

void __thiscall
pvp_assault::CAssaultPlace::_SeparateTeam(CAssaultPlace *this,CUser *param_1,CUser *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  vector<CUser*,std::allocator<CUser*>> *pvVar3;
  int iVar4;
  vector<CUser*,std::allocator<CUser*>> local_48 [12];
  vector avStack_3c [12];
  CUser *local_30;
  CUser *local_2c;
  undefined4 local_28;
  uint local_24;
  int local_20;
  
  local_30 = (CUser *)0x0;
  local_2c = (CUser *)0x0;
  pvVar3 = local_48;
  for (iVar4 = 1; iVar4 != -1; iVar4 = iVar4 + -1) {
                    /* try { // try from 082e80be to 082e80c2 has its CatchHandler @ 082e80d5 */
    std::vector<CUser*,std::allocator<CUser*>>::vector(pvVar3);
    pvVar3 = pvVar3 + 0xc;
  }
                    /* try { // try from 082e811e to 082e8252 has its CatchHandler @ 082e8255 */
  local_28 = CUser::GetUserListByParty(param_1,(vector *)local_48);
  _BackupPartyInfo(this,local_28,0);
  local_28 = CUser::GetUserListByParty(param_2,avStack_3c);
  _BackupPartyInfo(this,local_28,1);
  for (local_24 = 0; local_24 < 8; local_24 = local_24 + 1) {
    for (local_20 = 0; local_20 < 2; local_20 = local_20 + 1) {
      uVar1 = std::vector<CUser*,std::allocator<CUser*>>::size(local_48 + local_20 * 0xc);
      iVar4 = local_20;
      if (local_24 < uVar1) {
        puVar2 = (undefined4 *)
                 std::vector<CUser*,std::allocator<CUser*>>::at(local_48 + local_20 * 0xc,local_24);
        _AddUser(this,*puVar2,iVar4);
      }
    }
  }
  local_30 = param_1;
  local_2c = param_2;
  iVar4 = CUserCharacInfo::GetCurCharacChaosPoint((CUserCharacInfo *)param_1);
  this[0x128] = (CAssaultPlace)(0 < iVar4);
  iVar4 = CUserCharacInfo::GetCurCharacChaosPoint((CUserCharacInfo *)param_2);
  this[0x129] = (CAssaultPlace)(0 < iVar4);
  _DispositionUser(this,&local_30);
  pvVar3 = (vector<CUser*,std::allocator<CUser*>> *)&local_30;
  while (pvVar3 != local_48) {
    pvVar3 = pvVar3 + -0xc;
    std::vector<CUser*,std::allocator<CUser*>>::~vector(pvVar3);
  }
  return;
}

```

---

## _SetReadyState

```asm
// === 082e82a2 pvp_assault::CAssaultPlace::_SetReadyState  [0x082e82a2-0x82e82ff] ===
 82e82a2:	55                   	push   %ebp
 82e82a3:	89 e5                	mov    %esp,%ebp
 82e82a5:	83 ec 28             	sub    $0x28,%esp
 82e82a8:	8b 45 08             	mov    0x8(%ebp),%eax
 82e82ab:	c7 80 0c 01 00 00 02 	movl   $0x2,0x10c(%eax)
 82e82b2:	00 00 00 
 82e82b5:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 82e82bc:	eb 35                	jmp    82e82f3 <_ZN11pvp_assault13CAssaultPlace14_SetReadyStateEv+0x51>
 82e82be:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82e82c1:	c1 e0 05             	shl    $0x5,%eax
 82e82c4:	03 45 08             	add    0x8(%ebp),%eax
 82e82c7:	89 04 24             	mov    %eax,(%esp)
 82e82ca:	e8 8d 82 00 00       	call   82f055c <_ZN11pvp_assault10CAssaulter5EmptyEv>
 82e82cf:	84 c0                	test   %al,%al
 82e82d1:	75 1b                	jne    82e82ee <_ZN11pvp_assault13CAssaultPlace14_SetReadyStateEv+0x4c>
 82e82d3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82e82d6:	c1 e0 05             	shl    $0x5,%eax
 82e82d9:	03 45 08             	add    0x8(%ebp),%eax
 82e82dc:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82e82e3:	00 
 82e82e4:	89 04 24             	mov    %eax,(%esp)
 82e82e7:	e8 90 82 00 00       	call   82f057c <_ZN11pvp_assault10CAssaulter8SetStateENS_18ENUM_ASSAULT_STATEE>
 82e82ec:	eb 01                	jmp    82e82ef <_ZN11pvp_assault13CAssaultPlace14_SetReadyStateEv+0x4d>
 82e82ee:	90                   	nop
 82e82ef:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 82e82f3:	83 7d f4 07          	cmpl   $0x7,-0xc(%ebp)
 82e82f7:	0f 9e c0             	setle  %al
 82e82fa:	84 c0                	test   %al,%al
 82e82fc:	75 c0                	jne    82e82be <_ZN11pvp_assault13CAssaultPlace14_SetReadyStateEv+0x1c>
 82e82fe:	c9                   	leave
 82e82ff:	c3                   	ret

```

```c
// pvp_assault::CAssaultPlace::_SetReadyState @ 0x82e82a2

/* pvp_assault::CAssaultPlace::_SetReadyState() */

void __thiscall pvp_assault::CAssaultPlace::_SetReadyState(CAssaultPlace *this)

{
  char cVar1;
  int local_10;
  
  *(undefined4 *)(this + 0x10c) = 2;
  for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
    cVar1 = CAssaulter::Empty((CAssaulter *)(this + local_10 * 0x20));
    if (cVar1 == '\0') {
      CAssaulter::SetState((CAssaulter *)(this + local_10 * 0x20),1);
    }
  }
  return;
}

```

---

## _VictoryBonus

```asm
// === 082ec89c pvp_assault::CAssaultPlace::_VictoryBonus  [0x082ec89c-0x82ecaed] ===
 82ec89c:	55                   	push   %ebp
 82ec89d:	89 e5                	mov    %esp,%ebp
 82ec89f:	53                   	push   %ebx
 82ec8a0:	83 ec 74             	sub    $0x74,%esp
 82ec8a3:	8b 45 10             	mov    0x10(%ebp),%eax
 82ec8a6:	88 45 b4             	mov    %al,-0x4c(%ebp)
 82ec8a9:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 82ec8b0:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 82ec8b7:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 82ec8be:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 82ec8c5:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 82ec8cc:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 82ec8d3:	eb 64                	jmp    82ec939 <_ZN11pvp_assault13CAssaultPlace13_VictoryBonusEP5CUserc+0x9d>
 82ec8d5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82ec8d8:	c1 e0 05             	shl    $0x5,%eax
 82ec8db:	03 45 08             	add    0x8(%ebp),%eax
 82ec8de:	89 04 24             	mov    %eax,(%esp)
 82ec8e1:	e8 5c 3c 00 00       	call   82f0542 <_ZN11pvp_assault10CAssaulter7GetUserEv>
 82ec8e6:	85 c0                	test   %eax,%eax
 82ec8e8:	0f 94 c0             	sete   %al
 82ec8eb:	84 c0                	test   %al,%al
 82ec8ed:	75 45                	jne    82ec934 <_ZN11pvp_assault13CAssaultPlace13_VictoryBonusEP5CUserc+0x98>
 82ec8ef:	8b 45 0c             	mov    0xc(%ebp),%eax
 82ec8f2:	89 04 24             	mov    %eax,(%esp)
 82ec8f5:	e8 cc 33 f4 ff       	call   822fcc6 <_ZN5CUser12getPowerSideEv>
 82ec8fa:	89 c3                	mov    %eax,%ebx
 82ec8fc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82ec8ff:	c1 e0 05             	shl    $0x5,%eax
 82ec902:	03 45 08             	add    0x8(%ebp),%eax
 82ec905:	89 04 24             	mov    %eax,(%esp)
 82ec908:	e8 35 3c 00 00       	call   82f0542 <_ZN11pvp_assault10CAssaulter7GetUserEv>
 82ec90d:	89 04 24             	mov    %eax,(%esp)
 82ec910:	e8 b1 33 f4 ff       	call   822fcc6 <_ZN5CUser12getPowerSideEv>
 82ec915:	38 c3                	cmp    %al,%bl
 82ec917:	0f 95 c0             	setne  %al
 82ec91a:	84 c0                	test   %al,%al
 82ec91c:	74 17                	je     82ec935 <_ZN11pvp_assault13CAssaultPlace13_VictoryBonusEP5CUserc+0x99>
 82ec91e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82ec921:	c1 e0 05             	shl    $0x5,%eax
 82ec924:	03 45 08             	add    0x8(%ebp),%eax
 82ec927:	89 04 24             	mov    %eax,(%esp)
 82ec92a:	e8 13 3c 00 00       	call   82f0542 <_ZN11pvp_assault10CAssaulter7GetUserEv>
 82ec92f:	89 45 f0             	mov    %eax,-0x10(%ebp)
 82ec932:	eb 10                	jmp    82ec944 <_ZN11pvp_assault13CAssaultPlace13_VictoryBonusEP5CUserc+0xa8>
 82ec934:	90                   	nop
 82ec935:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 82ec939:	83 7d f4 07          	cmpl   $0x7,-0xc(%ebp)
 82ec93d:	0f 9e c0             	setle  %al
 82ec940:	84 c0                	test   %al,%al
 82ec942:	75 91                	jne    82ec8d5 <_ZN11pvp_assault13CAssaultPlace13_VictoryBonusEP5CUserc+0x39>
 82ec944:	8b 45 0c             	mov    0xc(%ebp),%eax
 82ec947:	89 04 24             	mov    %eax,(%esp)
 82ec94a:	e8 77 33 f4 ff       	call   822fcc6 <_ZN5CUser12getPowerSideEv>
 82ec94f:	3a 45 b4             	cmp    -0x4c(%ebp),%al
 82ec952:	0f 94 c0             	sete   %al
 82ec955:	84 c0                	test   %al,%al
 82ec957:	0f 84 c2 00 00 00    	je     82eca1f <_ZN11pvp_assault13CAssaultPlace13_VictoryBonusEP5CUserc+0x183>
 82ec95d:	8b 45 0c             	mov    0xc(%ebp),%eax
 82ec960:	89 04 24             	mov    %eax,(%esp)
 82ec963:	e8 04 bc 39 00       	call   868856c <_ZN5CUser23GetPowerWarPartyVictoryEv>
 82ec968:	89 45 e0             	mov    %eax,-0x20(%ebp)
 82ec96b:	e8 2b f8 dd ff       	call   80cc19b <_Z14G_CDataManagerv>
 82ec970:	8d 88 28 a6 00 00    	lea    0xa628(%eax),%ecx
 82ec976:	8d 45 c0             	lea    -0x40(%ebp),%eax
 82ec979:	8b 55 e0             	mov    -0x20(%ebp),%edx
 82ec97c:	89 54 24 08          	mov    %edx,0x8(%esp)
 82ec980:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 82ec984:	89 04 24             	mov    %eax,(%esp)
 82ec987:	e8 e2 d2 76 00       	call   8a59c6e <_ZN20PowerParameterScript10GetPenaltyEi>
 82ec98c:	83 ec 04             	sub    $0x4,%esp
 82ec98f:	8b 45 cc             	mov    -0x34(%ebp),%eax
 82ec992:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 82ec995:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 82ec999:	74 51                	je     82ec9ec <_ZN11pvp_assault13CAssaultPlace13_VictoryBonusEP5CUserc+0x150>
 82ec99b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82ec99e:	89 04 24             	mov    %eax,(%esp)
 82ec9a1:	e8 c6 bb 39 00       	call   868856c <_ZN5CUser23GetPowerWarPartyVictoryEv>
 82ec9a6:	89 45 ec             	mov    %eax,-0x14(%ebp)
 82ec9a9:	83 7d ec 04          	cmpl   $0x4,-0x14(%ebp)
 82ec9ad:	7e 3d                	jle    82ec9ec <_ZN11pvp_assault13CAssaultPlace13_VictoryBonusEP5CUserc+0x150>
 82ec9af:	e8 e7 f7 dd ff       	call   80cc19b <_Z14G_CDataManagerv>
 82ec9b4:	8d 90 28 a6 00 00    	lea    0xa628(%eax),%edx
 82ec9ba:	8b 45 ec             	mov    -0x14(%ebp),%eax
 82ec9bd:	89 44 24 04          	mov    %eax,0x4(%esp)
 82ec9c1:	89 14 24             	mov    %edx,(%esp)
 82ec9c4:	e8 8f d3 76 00       	call   8a59d58 <_ZN20PowerParameterScript13GetBreakBonusEi>
 82ec9c9:	89 45 e8             	mov    %eax,-0x18(%ebp)
 82ec9cc:	8b 45 ec             	mov    -0x14(%ebp),%eax
 82ec9cf:	89 44 24 0c          	mov    %eax,0xc(%esp)
 82ec9d3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82ec9d6:	89 44 24 08          	mov    %eax,0x8(%esp)
 82ec9da:	8b 45 0c             	mov    0xc(%ebp),%eax
 82ec9dd:	89 44 24 04          	mov    %eax,0x4(%esp)
 82ec9e1:	8b 45 08             	mov    0x8(%ebp),%eax
 82ec9e4:	89 04 24             	mov    %eax,(%esp)
 82ec9e7:	e8 02 01 00 00       	call   82ecaee <_ZN11pvp_assault13CAssaultPlace16_SendHoldVictoryEP5CUserS2_i>
 82ec9ec:	8b 45 e8             	mov    -0x18(%ebp),%eax
 82ec9ef:	89 44 24 14          	mov    %eax,0x14(%esp)
 82ec9f3:	8b 45 ec             	mov    -0x14(%ebp),%eax
 82ec9f6:	89 44 24 10          	mov    %eax,0x10(%esp)
 82ec9fa:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 82ec9fd:	89 44 24 0c          	mov    %eax,0xc(%esp)
 82eca01:	8b 45 e0             	mov    -0x20(%ebp),%eax
 82eca04:	89 44 24 08          	mov    %eax,0x8(%esp)
 82eca08:	8b 45 0c             	mov    0xc(%ebp),%eax
 82eca0b:	89 44 24 04          	mov    %eax,0x4(%esp)
 82eca0f:	8b 45 08             	mov    0x8(%ebp),%eax
 82eca12:	89 04 24             	mov    %eax,(%esp)
 82eca15:	e8 a2 03 00 00       	call   82ecdbc <_ZN11pvp_assault13CAssaultPlace17_SendVictoryBonusEP5CUseriiii>
 82eca1a:	e9 c1 00 00 00       	jmp    82ecae0 <_ZN11pvp_assault13CAssaultPlace13_VictoryBonusEP5CUserc+0x244>
 82eca1f:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 82eca23:	0f 84 b7 00 00 00    	je     82ecae0 <_ZN11pvp_assault13CAssaultPlace13_VictoryBonusEP5CUserc+0x244>
 82eca29:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82eca2c:	89 04 24             	mov    %eax,(%esp)
 82eca2f:	e8 38 bb 39 00       	call   868856c <_ZN5CUser23GetPowerWarPartyVictoryEv>
 82eca34:	89 45 e0             	mov    %eax,-0x20(%ebp)
 82eca37:	e8 5f f7 dd ff       	call   80cc19b <_Z14G_CDataManagerv>
 82eca3c:	8d 88 28 a6 00 00    	lea    0xa628(%eax),%ecx
 82eca42:	8d 45 d0             	lea    -0x30(%ebp),%eax
 82eca45:	8b 55 e0             	mov    -0x20(%ebp),%edx
 82eca48:	89 54 24 08          	mov    %edx,0x8(%esp)
 82eca4c:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 82eca50:	89 04 24             	mov    %eax,(%esp)
 82eca53:	e8 16 d2 76 00       	call   8a59c6e <_ZN20PowerParameterScript10GetPenaltyEi>
 82eca58:	83 ec 04             	sub    $0x4,%esp
 82eca5b:	8b 45 dc             	mov    -0x24(%ebp),%eax
 82eca5e:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 82eca61:	8b 45 0c             	mov    0xc(%ebp),%eax
 82eca64:	89 04 24             	mov    %eax,(%esp)
 82eca67:	e8 00 bb 39 00       	call   868856c <_ZN5CUser23GetPowerWarPartyVictoryEv>
 82eca6c:	89 45 ec             	mov    %eax,-0x14(%ebp)
 82eca6f:	83 7d ec 04          	cmpl   $0x4,-0x14(%ebp)
 82eca73:	7e 3d                	jle    82ecab2 <_ZN11pvp_assault13CAssaultPlace13_VictoryBonusEP5CUserc+0x216>
 82eca75:	e8 21 f7 dd ff       	call   80cc19b <_Z14G_CDataManagerv>
 82eca7a:	8d 90 28 a6 00 00    	lea    0xa628(%eax),%edx
 82eca80:	8b 45 ec             	mov    -0x14(%ebp),%eax
 82eca83:	89 44 24 04          	mov    %eax,0x4(%esp)
 82eca87:	89 14 24             	mov    %edx,(%esp)
 82eca8a:	e8 c9 d2 76 00       	call   8a59d58 <_ZN20PowerParameterScript13GetBreakBonusEi>
 82eca8f:	89 45 e8             	mov    %eax,-0x18(%ebp)
 82eca92:	8b 45 ec             	mov    -0x14(%ebp),%eax
 82eca95:	89 44 24 0c          	mov    %eax,0xc(%esp)
 82eca99:	8b 45 0c             	mov    0xc(%ebp),%eax
 82eca9c:	89 44 24 08          	mov    %eax,0x8(%esp)
 82ecaa0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82ecaa3:	89 44 24 04          	mov    %eax,0x4(%esp)
 82ecaa7:	8b 45 08             	mov    0x8(%ebp),%eax
 82ecaaa:	89 04 24             	mov    %eax,(%esp)
 82ecaad:	e8 3c 00 00 00       	call   82ecaee <_ZN11pvp_assault13CAssaultPlace16_SendHoldVictoryEP5CUserS2_i>
 82ecab2:	8b 45 e8             	mov    -0x18(%ebp),%eax
 82ecab5:	89 44 24 14          	mov    %eax,0x14(%esp)
 82ecab9:	8b 45 ec             	mov    -0x14(%ebp),%eax
 82ecabc:	89 44 24 10          	mov    %eax,0x10(%esp)
 82ecac0:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 82ecac3:	89 44 24 0c          	mov    %eax,0xc(%esp)
 82ecac7:	8b 45 e0             	mov    -0x20(%ebp),%eax
 82ecaca:	89 44 24 08          	mov    %eax,0x8(%esp)
 82ecace:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82ecad1:	89 44 24 04          	mov    %eax,0x4(%esp)
 82ecad5:	8b 45 08             	mov    0x8(%ebp),%eax
 82ecad8:	89 04 24             	mov    %eax,(%esp)
 82ecadb:	e8 dc 02 00 00       	call   82ecdbc <_ZN11pvp_assault13CAssaultPlace17_SendVictoryBonusEP5CUseriiii>
 82ecae0:	8b 45 e8             	mov    -0x18(%ebp),%eax
 82ecae3:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 82ecae6:	8d 04 02             	lea    (%edx,%eax,1),%eax
 82ecae9:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 82ecaec:	c9                   	leave
 82ecaed:	c3                   	ret

```

```c
// pvp_assault::CAssaultPlace::_VictoryBonus @ 0x82ec89c

/* pvp_assault::CAssaultPlace::_VictoryBonus(CUser*, char) */

int __thiscall
pvp_assault::CAssaultPlace::_VictoryBonus(CAssaultPlace *this,CUser *param_1,char param_2)

{
  char cVar1;
  char cVar2;
  CUser *this_00;
  int iVar3;
  undefined1 local_44 [12];
  int local_38;
  undefined1 local_34 [12];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  CUser *local_14;
  int local_10;
  
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = (CUser *)0x0;
  local_10 = 0;
  do {
    if (7 < local_10) {
LAB_082ec944:
      cVar2 = CUser::getPowerSide(param_1);
      if (cVar2 == param_2) {
        local_24 = CUser::GetPowerWarPartyVictory(param_1);
        G_CDataManager();
        PowerParameterScript::GetPenalty((int)local_44);
        local_20 = local_38;
        if (local_14 != (CUser *)0x0) {
          local_18 = CUser::GetPowerWarPartyVictory(local_14);
          if (4 < local_18) {
            iVar3 = G_CDataManager();
            local_1c = PowerParameterScript::GetBreakBonus
                                 ((PowerParameterScript *)(iVar3 + 0xa628),local_18);
            _SendHoldVictory(this,param_1,local_14,local_18);
          }
        }
        _SendVictoryBonus(this,param_1,local_24,local_20,local_18,local_1c);
      }
      else if (local_14 != (CUser *)0x0) {
        local_24 = CUser::GetPowerWarPartyVictory(local_14);
        G_CDataManager();
        PowerParameterScript::GetPenalty((int)local_34);
        local_20 = local_28;
        local_18 = CUser::GetPowerWarPartyVictory(param_1);
        if (4 < local_18) {
          iVar3 = G_CDataManager();
          local_1c = PowerParameterScript::GetBreakBonus
                               ((PowerParameterScript *)(iVar3 + 0xa628),local_18);
          _SendHoldVictory(this,local_14,param_1,local_18);
        }
        _SendVictoryBonus(this,local_14,local_24,local_20,local_18,local_1c);
      }
      return local_20 + local_1c;
    }
    iVar3 = CAssaulter::GetUser((CAssaulter *)(this + local_10 * 0x20));
    if (iVar3 != 0) {
      cVar2 = CUser::getPowerSide(param_1);
      this_00 = (CUser *)CAssaulter::GetUser((CAssaulter *)(this + local_10 * 0x20));
      cVar1 = CUser::getPowerSide(this_00);
      if (cVar2 != cVar1) {
        local_14 = (CUser *)CAssaulter::GetUser((CAssaulter *)(this + local_10 * 0x20));
        goto LAB_082ec944;
      }
    }
    local_10 = local_10 + 1;
  } while( true );
}

```

