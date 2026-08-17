# DisPatcher_SetPartyInfo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 081c4708 DisPatcher_SetPartyInfo::check_error  [0x081c4708-0x81c47b9] ===
 81c4708:	55                   	push   %ebp
 81c4709:	89 e5                	mov    %esp,%ebp
 81c470b:	56                   	push   %esi
 81c470c:	53                   	push   %ebx
 81c470d:	83 ec 20             	sub    $0x20,%esp
 81c4710:	8b 45 10             	mov    0x10(%ebp),%eax
 81c4713:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81c4716:	8d 45 f3             	lea    -0xd(%ebp),%eax
 81c4719:	89 04 24             	mov    %eax,(%esp)
 81c471c:	e8 af b9 51 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 81c4721:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c4724:	8d 50 12             	lea    0x12(%eax),%edx
 81c4727:	8d 45 f3             	lea    -0xd(%ebp),%eax
 81c472a:	89 44 24 08          	mov    %eax,0x8(%esp)
 81c472e:	89 54 24 04          	mov    %edx,0x4(%esp)
 81c4732:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81c4735:	89 04 24             	mov    %eax,(%esp)
 81c4738:	e8 f3 2e 54 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 81c473d:	eb 1b                	jmp    81c475a <_ZN23DisPatcher_SetPartyInfo11check_errorEP5CUserR8MSG_BASE+0x52>
 81c473f:	89 d3                	mov    %edx,%ebx
 81c4741:	89 c6                	mov    %eax,%esi
 81c4743:	8d 45 f3             	lea    -0xd(%ebp),%eax
 81c4746:	89 04 24             	mov    %eax,(%esp)
 81c4749:	e8 a2 b9 51 00       	call   86e00f0 <_ZNSaIcED1Ev>
 81c474e:	89 f0                	mov    %esi,%eax
 81c4750:	89 da                	mov    %ebx,%edx
 81c4752:	89 04 24             	mov    %eax,(%esp)
 81c4755:	e8 f6 ef 91 00       	call   8ae3750 <_Unwind_Resume>
 81c475a:	8d 45 f3             	lea    -0xd(%ebp),%eax
 81c475d:	89 04 24             	mov    %eax,(%esp)
 81c4760:	e8 8b b9 51 00       	call   86e00f0 <_ZNSaIcED1Ev>
 81c4765:	e8 97 08 07 00       	call   8235001 <_ZN16CSyncSlangFilter11GetInstanceEv>
 81c476a:	8d 55 ec             	lea    -0x14(%ebp),%edx
 81c476d:	89 54 24 04          	mov    %edx,0x4(%esp)
 81c4771:	89 04 24             	mov    %eax,(%esp)
 81c4774:	e8 a9 9e 46 00       	call   862e622 <_ZN16CSyncSlangFilter8HasSlangERKSs>
 81c4779:	84 c0                	test   %al,%al
 81c477b:	74 07                	je     81c4784 <_ZN23DisPatcher_SetPartyInfo11check_errorEP5CUserR8MSG_BASE+0x7c>
 81c477d:	bb 9f 00 00 00       	mov    $0x9f,%ebx
 81c4782:	eb 22                	jmp    81c47a6 <_ZN23DisPatcher_SetPartyInfo11check_errorEP5CUserR8MSG_BASE+0x9e>
 81c4784:	bb 00 00 00 00       	mov    $0x0,%ebx
 81c4789:	eb 1b                	jmp    81c47a6 <_ZN23DisPatcher_SetPartyInfo11check_errorEP5CUserR8MSG_BASE+0x9e>
 81c478b:	89 d3                	mov    %edx,%ebx
 81c478d:	89 c6                	mov    %eax,%esi
 81c478f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81c4792:	89 04 24             	mov    %eax,(%esp)
 81c4795:	e8 46 34 54 00       	call   8707be0 <_ZNSsD1Ev>
 81c479a:	89 f0                	mov    %esi,%eax
 81c479c:	89 da                	mov    %ebx,%edx
 81c479e:	89 04 24             	mov    %eax,(%esp)
 81c47a1:	e8 aa ef 91 00       	call   8ae3750 <_Unwind_Resume>
 81c47a6:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81c47a9:	89 04 24             	mov    %eax,(%esp)
 81c47ac:	e8 2f 34 54 00       	call   8707be0 <_ZNSsD1Ev>
 81c47b1:	89 d8                	mov    %ebx,%eax
 81c47b3:	83 c4 20             	add    $0x20,%esp
 81c47b6:	5b                   	pop    %ebx
 81c47b7:	5e                   	pop    %esi
 81c47b8:	5d                   	pop    %ebp
 81c47b9:	c3                   	ret

```

```c
// DisPatcher_SetPartyInfo::check_error @ 0x81c4708

/* DisPatcher_SetPartyInfo::check_error(CUser*, MSG_BASE&) */

undefined4 __thiscall
DisPatcher_SetPartyInfo::check_error(DisPatcher_SetPartyInfo *this,CUser *param_1,MSG_BASE *param_2)

{
  char cVar1;
  CSyncSlangFilter *this_00;
  undefined4 uVar2;
  string local_18;
  allocator<char> local_11;
  MSG_BASE *local_10;
  
  local_10 = param_2;
  std::allocator<char>::allocator();
                    /* try { // try from 081c4738 to 081c473c has its CatchHandler @ 081c473f */
  std::string::string((string *)&local_18,(char *)(local_10 + 0x12),(allocator *)&local_11);
  std::allocator<char>::~allocator(&local_11);
                    /* try { // try from 081c4765 to 081c4778 has its CatchHandler @ 081c478b */
  this_00 = (CSyncSlangFilter *)CSyncSlangFilter::GetInstance();
  cVar1 = CSyncSlangFilter::HasSlang(this_00,&local_18);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x9f;
  }
  std::string::~string((string *)&local_18);
  return uVar2;
}

```

---

## process

```asm
// === 081c4562 DisPatcher_SetPartyInfo::process  [0x081c4562-0x81c46bf] ===
 81c4562:	55                   	push   %ebp
 81c4563:	89 e5                	mov    %esp,%ebp
 81c4565:	83 ec 28             	sub    $0x28,%esp
 81c4568:	8b 45 14             	mov    0x14(%ebp),%eax
 81c456b:	89 45 e8             	mov    %eax,-0x18(%ebp)
 81c456e:	8b 45 10             	mov    0x10(%ebp),%eax
 81c4571:	89 44 24 08          	mov    %eax,0x8(%esp)
 81c4575:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c4578:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c457c:	8b 45 08             	mov    0x8(%ebp),%eax
 81c457f:	89 04 24             	mov    %eax,(%esp)
 81c4582:	e8 81 01 00 00       	call   81c4708 <_ZN23DisPatcher_SetPartyInfo11check_errorEP5CUserR8MSG_BASE>
 81c4587:	89 c2                	mov    %eax,%edx
 81c4589:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81c458c:	89 50 04             	mov    %edx,0x4(%eax)
 81c458f:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81c4592:	8b 40 04             	mov    0x4(%eax),%eax
 81c4595:	85 c0                	test   %eax,%eax
 81c4597:	7e 0a                	jle    81c45a3 <_ZN23DisPatcher_SetPartyInfo7processEP5CUserR8MSG_BASER9ParamBase+0x41>
 81c4599:	b8 00 00 00 00       	mov    $0x0,%eax
 81c459e:	e9 1b 01 00 00       	jmp    81c46be <_ZN23DisPatcher_SetPartyInfo7processEP5CUserR8MSG_BASER9ParamBase+0x15c>
 81c45a3:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81c45a6:	8b 40 04             	mov    0x4(%eax),%eax
 81c45a9:	85 c0                	test   %eax,%eax
 81c45ab:	79 32                	jns    81c45df <_ZN23DisPatcher_SetPartyInfo7processEP5CUserR8MSG_BASER9ParamBase+0x7d>
 81c45ad:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c45b0:	89 04 24             	mov    %eax,(%esp)
 81c45b3:	e8 b6 5d f1 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81c45b8:	8b 55 e8             	mov    -0x18(%ebp),%edx
 81c45bb:	8b 52 04             	mov    0x4(%edx),%edx
 81c45be:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81c45c2:	89 54 24 08          	mov    %edx,0x8(%esp)
 81c45c6:	c7 44 24 04 40 5a bd 	movl   $0x8bd5a40,0x4(%esp)
 81c45cd:	08 
 81c45ce:	c7 04 24 f6 10 00 00 	movl   $0x10f6,(%esp)
 81c45d5:	e8 fd c2 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c45da:	e9 df 00 00 00       	jmp    81c46be <_ZN23DisPatcher_SetPartyInfo7processEP5CUserR8MSG_BASER9ParamBase+0x15c>
 81c45df:	8b 45 10             	mov    0x10(%ebp),%eax
 81c45e2:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81c45e5:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c45e8:	89 04 24             	mov    %eax,(%esp)
 81c45eb:	e8 5c 0b 49 00       	call   865514c <_ZN5CUser8GetPartyEv>
 81c45f0:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81c45f3:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 81c45f7:	75 6c                	jne    81c4665 <_ZN23DisPatcher_SetPartyInfo7processEP5CUserR8MSG_BASER9ParamBase+0x103>
 81c45f9:	e8 90 7b f0 ff       	call   80cc18e <_Z14G_CGameManagerv>
 81c45fe:	89 04 24             	mov    %eax,(%esp)
 81c4601:	e8 0a 08 0d 00       	call   8294e10 <_ZN12CGameManager8GetPartyEv>
 81c4606:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81c4609:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81c460d:	75 14                	jne    81c4623 <_ZN23DisPatcher_SetPartyInfo7processEP5CUserR8MSG_BASER9ParamBase+0xc1>
 81c460f:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81c4612:	c7 40 04 04 00 00 00 	movl   $0x4,0x4(%eax)
 81c4619:	b8 00 00 00 00       	mov    $0x0,%eax
 81c461e:	e9 9b 00 00 00       	jmp    81c46be <_ZN23DisPatcher_SetPartyInfo7processEP5CUserR8MSG_BASER9ParamBase+0x15c>
 81c4623:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c4626:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c462a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c462d:	89 04 24             	mov    %eax,(%esp)
 81c4630:	e8 89 6b 3d 00       	call   859b1be <_ZN6CParty12create_partyEP5CUser>
 81c4635:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81c4638:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c463c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c463f:	89 04 24             	mov    %eax,(%esp)
 81c4642:	e8 ed 6b 3d 00       	call   859b234 <_ZN6CParty14SetPartyInfoUIERK18MSG_PARTY_SET_INFO>
 81c4647:	e8 5b 5d f1 ff       	call   80da3a7 <_Z11G_GameWorldv>
 81c464c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c4653:	00 
 81c4654:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81c4657:	89 54 24 04          	mov    %edx,0x4(%esp)
 81c465b:	89 04 24             	mov    %eax,(%esp)
 81c465e:	e8 27 41 50 00       	call   86c878a <_ZN9GameWorld22send_party_info_to_allEP6CPartyi>
 81c4663:	eb 54                	jmp    81c46b9 <_ZN23DisPatcher_SetPartyInfo7processEP5CUserR8MSG_BASER9ParamBase+0x157>
 81c4665:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81c4668:	89 04 24             	mov    %eax,(%esp)
 81c466b:	e8 10 11 f8 ff       	call   8145780 <_ZN6CParty10getManagerEv>
 81c4670:	3b 45 0c             	cmp    0xc(%ebp),%eax
 81c4673:	0f 95 c0             	setne  %al
 81c4676:	84 c0                	test   %al,%al
 81c4678:	74 11                	je     81c468b <_ZN23DisPatcher_SetPartyInfo7processEP5CUserR8MSG_BASER9ParamBase+0x129>
 81c467a:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81c467d:	c7 40 04 08 00 00 00 	movl   $0x8,0x4(%eax)
 81c4684:	b8 00 00 00 00       	mov    $0x0,%eax
 81c4689:	eb 33                	jmp    81c46be <_ZN23DisPatcher_SetPartyInfo7processEP5CUserR8MSG_BASER9ParamBase+0x15c>
 81c468b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81c468e:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c4692:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81c4695:	89 04 24             	mov    %eax,(%esp)
 81c4698:	e8 97 6b 3d 00       	call   859b234 <_ZN6CParty14SetPartyInfoUIERK18MSG_PARTY_SET_INFO>
 81c469d:	e8 05 5d f1 ff       	call   80da3a7 <_Z11G_GameWorldv>
 81c46a2:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81c46a9:	00 
 81c46aa:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81c46ad:	89 54 24 04          	mov    %edx,0x4(%esp)
 81c46b1:	89 04 24             	mov    %eax,(%esp)
 81c46b4:	e8 d1 40 50 00       	call   86c878a <_ZN9GameWorld22send_party_info_to_allEP6CPartyi>
 81c46b9:	b8 00 00 00 00       	mov    $0x0,%eax
 81c46be:	c9                   	leave
 81c46bf:	c3                   	ret

```

```c
// DisPatcher_SetPartyInfo::process @ 0x81c4562

/* DisPatcher_SetPartyInfo::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
DisPatcher_SetPartyInfo::process
          (DisPatcher_SetPartyInfo *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  CParty *pCVar3;
  CGameManager *this_00;
  GameWorld *pGVar4;
  CUser *pCVar5;
  
  uVar1 = check_error(this,param_1,param_2);
  *(undefined4 *)(param_3 + 4) = uVar1;
  if (*(int *)(param_3 + 4) < 1) {
    if (*(int *)(param_3 + 4) < 0) {
      uVar2 = CUser::get_acc_id(param_1);
      uVar1 = LineFunc(0x10f6,
                       "virtual int DisPatcher_SetPartyInfo::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(param_3 + 4),uVar2);
    }
    else {
      pCVar3 = (CParty *)CUser::GetParty(param_1);
      if (pCVar3 == (CParty *)0x0) {
        this_00 = (CGameManager *)G_CGameManager();
        pCVar3 = (CParty *)CGameManager::GetParty(this_00);
        if (pCVar3 == (CParty *)0x0) {
          *(undefined4 *)(param_3 + 4) = 4;
          return 0;
        }
        CParty::create_party(pCVar3,param_1);
        CParty::SetPartyInfoUI(pCVar3,(MSG_PARTY_SET_INFO *)param_2);
        pGVar4 = (GameWorld *)G_GameWorld();
        GameWorld::send_party_info_to_all(pGVar4,pCVar3,0);
      }
      else {
        pCVar5 = (CUser *)CParty::getManager(pCVar3);
        if (pCVar5 != param_1) {
          *(undefined4 *)(param_3 + 4) = 8;
          return 0;
        }
        CParty::SetPartyInfoUI(pCVar3,(MSG_PARTY_SET_INFO *)param_2);
        pGVar4 = (GameWorld *)G_GameWorld();
        GameWorld::send_party_info_to_all(pGVar4,pCVar3,1);
      }
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## read

```asm
// === 081c4396 DisPatcher_SetPartyInfo::read  [0x081c4396-0x81c4561] ===
 81c4396:	55                   	push   %ebp
 81c4397:	89 e5                	mov    %esp,%ebp
 81c4399:	83 ec 28             	sub    $0x28,%esp
 81c439c:	8b 45 10             	mov    0x10(%ebp),%eax
 81c439f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81c43a2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c43a5:	83 c0 0d             	add    $0xd,%eax
 81c43a8:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c43ac:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c43af:	89 04 24             	mov    %eax,(%esp)
 81c43b2:	e8 b9 8b 3c 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 81c43b7:	83 f0 01             	xor    $0x1,%eax
 81c43ba:	84 c0                	test   %al,%al
 81c43bc:	74 29                	je     81c43e7 <_ZN23DisPatcher_SetPartyInfo4readER9PacketBufR8MSG_BASE+0x51>
 81c43be:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c43c5:	00 
 81c43c6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c43cd:	00 
 81c43ce:	c7 44 24 04 a0 5a bd 	movl   $0x8bd5aa0,0x4(%esp)
 81c43d5:	08 
 81c43d6:	c7 04 24 d9 10 00 00 	movl   $0x10d9,(%esp)
 81c43dd:	e8 f5 c4 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c43e2:	e9 79 01 00 00       	jmp    81c4560 <_ZN23DisPatcher_SetPartyInfo4readER9PacketBufR8MSG_BASE+0x1ca>
 81c43e7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c43ea:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81c43ee:	84 c0                	test   %al,%al
 81c43f0:	0f 85 9c 00 00 00    	jne    81c4492 <_ZN23DisPatcher_SetPartyInfo4readER9PacketBufR8MSG_BASE+0xfc>
 81c43f6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c43f9:	83 c0 0e             	add    $0xe,%eax
 81c43fc:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c4400:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c4403:	89 04 24             	mov    %eax,(%esp)
 81c4406:	e8 e5 8c 3c 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81c440b:	83 f0 01             	xor    $0x1,%eax
 81c440e:	84 c0                	test   %al,%al
 81c4410:	74 29                	je     81c443b <_ZN23DisPatcher_SetPartyInfo4readER9PacketBufR8MSG_BASE+0xa5>
 81c4412:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c4419:	00 
 81c441a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c4421:	00 
 81c4422:	c7 44 24 04 a0 5a bd 	movl   $0x8bd5aa0,0x4(%esp)
 81c4429:	08 
 81c442a:	c7 04 24 dd 10 00 00 	movl   $0x10dd,(%esp)
 81c4431:	e8 a1 c4 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c4436:	e9 25 01 00 00       	jmp    81c4560 <_ZN23DisPatcher_SetPartyInfo4readER9PacketBufR8MSG_BASE+0x1ca>
 81c443b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c443e:	8b 40 0e             	mov    0xe(%eax),%eax
 81c4441:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81c4444:	83 c2 12             	add    $0x12,%edx
 81c4447:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81c444b:	c7 44 24 08 20 00 00 	movl   $0x20,0x8(%esp)
 81c4452:	00 
 81c4453:	89 54 24 04          	mov    %edx,0x4(%esp)
 81c4457:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c445a:	89 04 24             	mov    %eax,(%esp)
 81c445d:	e8 5a 8e 3c 00       	call   858d2bc <_ZN9PacketBuf7get_strEPcii>
 81c4462:	83 f0 01             	xor    $0x1,%eax
 81c4465:	84 c0                	test   %al,%al
 81c4467:	74 29                	je     81c4492 <_ZN23DisPatcher_SetPartyInfo4readER9PacketBufR8MSG_BASE+0xfc>
 81c4469:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c4470:	00 
 81c4471:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c4478:	00 
 81c4479:	c7 44 24 04 a0 5a bd 	movl   $0x8bd5aa0,0x4(%esp)
 81c4480:	08 
 81c4481:	c7 04 24 e0 10 00 00 	movl   $0x10e0,(%esp)
 81c4488:	e8 4a c4 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c448d:	e9 ce 00 00 00       	jmp    81c4560 <_ZN23DisPatcher_SetPartyInfo4readER9PacketBufR8MSG_BASE+0x1ca>
 81c4492:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c4495:	83 c0 32             	add    $0x32,%eax
 81c4498:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c449c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c449f:	89 04 24             	mov    %eax,(%esp)
 81c44a2:	e8 c9 8a 3c 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 81c44a7:	83 f0 01             	xor    $0x1,%eax
 81c44aa:	84 c0                	test   %al,%al
 81c44ac:	74 29                	je     81c44d7 <_ZN23DisPatcher_SetPartyInfo4readER9PacketBufR8MSG_BASE+0x141>
 81c44ae:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c44b5:	00 
 81c44b6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c44bd:	00 
 81c44be:	c7 44 24 04 a0 5a bd 	movl   $0x8bd5aa0,0x4(%esp)
 81c44c5:	08 
 81c44c6:	c7 04 24 e2 10 00 00 	movl   $0x10e2,(%esp)
 81c44cd:	e8 05 c4 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c44d2:	e9 89 00 00 00       	jmp    81c4560 <_ZN23DisPatcher_SetPartyInfo4readER9PacketBufR8MSG_BASE+0x1ca>
 81c44d7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c44da:	83 c0 33             	add    $0x33,%eax
 81c44dd:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c44e1:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c44e4:	89 04 24             	mov    %eax,(%esp)
 81c44e7:	e8 c4 8b 3c 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 81c44ec:	83 f0 01             	xor    $0x1,%eax
 81c44ef:	84 c0                	test   %al,%al
 81c44f1:	74 26                	je     81c4519 <_ZN23DisPatcher_SetPartyInfo4readER9PacketBufR8MSG_BASE+0x183>
 81c44f3:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c44fa:	00 
 81c44fb:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c4502:	00 
 81c4503:	c7 44 24 04 a0 5a bd 	movl   $0x8bd5aa0,0x4(%esp)
 81c450a:	08 
 81c450b:	c7 04 24 e5 10 00 00 	movl   $0x10e5,(%esp)
 81c4512:	e8 c0 c3 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c4517:	eb 47                	jmp    81c4560 <_ZN23DisPatcher_SetPartyInfo4readER9PacketBufR8MSG_BASE+0x1ca>
 81c4519:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c451c:	83 c0 35             	add    $0x35,%eax
 81c451f:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c4523:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c4526:	89 04 24             	mov    %eax,(%esp)
 81c4529:	e8 42 8a 3c 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 81c452e:	83 f0 01             	xor    $0x1,%eax
 81c4531:	84 c0                	test   %al,%al
 81c4533:	74 26                	je     81c455b <_ZN23DisPatcher_SetPartyInfo4readER9PacketBufR8MSG_BASE+0x1c5>
 81c4535:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c453c:	00 
 81c453d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c4544:	00 
 81c4545:	c7 44 24 04 a0 5a bd 	movl   $0x8bd5aa0,0x4(%esp)
 81c454c:	08 
 81c454d:	c7 04 24 e6 10 00 00 	movl   $0x10e6,(%esp)
 81c4554:	e8 7e c3 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c4559:	eb 05                	jmp    81c4560 <_ZN23DisPatcher_SetPartyInfo4readER9PacketBufR8MSG_BASE+0x1ca>
 81c455b:	b8 00 00 00 00       	mov    $0x0,%eax
 81c4560:	c9                   	leave
 81c4561:	c3                   	ret

```

```c
// DisPatcher_SetPartyInfo::read @ 0x81c4396

/* DisPatcher_SetPartyInfo::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
DisPatcher_SetPartyInfo::read(DisPatcher_SetPartyInfo *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_byte(param_1,(uchar *)(param_2 + 0xd));
  if (cVar1 != '\x01') {
    uVar2 = LineFunc(0x10d9,"virtual int DisPatcher_SetPartyInfo::read(PacketBuf&, MSG_BASE&)",0,0);
    return uVar2;
  }
  if (param_2[0xd] == (MSG_BASE)0x0) {
    cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0xe));
    if (cVar1 != '\x01') {
      uVar2 = LineFunc(0x10dd,"virtual int DisPatcher_SetPartyInfo::read(PacketBuf&, MSG_BASE&)",0,0
                      );
      return uVar2;
    }
    cVar1 = PacketBuf::get_str(param_1,(char *)(param_2 + 0x12),0x20,*(int *)(param_2 + 0xe));
    if (cVar1 != '\x01') {
      uVar2 = LineFunc(0x10e0,"virtual int DisPatcher_SetPartyInfo::read(PacketBuf&, MSG_BASE&)",0,0
                      );
      return uVar2;
    }
  }
  cVar1 = PacketBuf::get_byte(param_1,(uchar *)(param_2 + 0x32));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0x33));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_byte(param_1,(uchar *)(param_2 + 0x35));
      if (cVar1 == '\x01') {
        uVar2 = 0;
      }
      else {
        uVar2 = LineFunc(0x10e6,"virtual int DisPatcher_SetPartyInfo::read(PacketBuf&, MSG_BASE&)",0
                         ,0);
      }
    }
    else {
      uVar2 = LineFunc(0x10e5,"virtual int DisPatcher_SetPartyInfo::read(PacketBuf&, MSG_BASE&)",0,0
                      );
    }
  }
  else {
    uVar2 = LineFunc(0x10e2,"virtual int DisPatcher_SetPartyInfo::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}

```

---

## send

```asm
// === 081c46c0 DisPatcher_SetPartyInfo::send  [0x081c46c0-0x81c4707] ===
 81c46c0:	55                   	push   %ebp
 81c46c1:	89 e5                	mov    %esp,%ebp
 81c46c3:	83 ec 28             	sub    $0x28,%esp
 81c46c6:	8b 45 10             	mov    0x10(%ebp),%eax
 81c46c9:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81c46cc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c46cf:	8b 40 04             	mov    0x4(%eax),%eax
 81c46d2:	3d ff ff ff 7f       	cmp    $0x7fffffff,%eax
 81c46d7:	74 2c                	je     81c4705 <_ZN23DisPatcher_SetPartyInfo4sendEP5CUserR9ParamBase+0x45>
 81c46d9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c46dc:	8b 40 04             	mov    0x4(%eax),%eax
 81c46df:	85 c0                	test   %eax,%eax
 81c46e1:	74 23                	je     81c4706 <_ZN23DisPatcher_SetPartyInfo4sendEP5CUserR9ParamBase+0x46>
 81c46e3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c46e6:	8b 40 04             	mov    0x4(%eax),%eax
 81c46e9:	0f b6 c0             	movzbl %al,%eax
 81c46ec:	89 44 24 08          	mov    %eax,0x8(%esp)
 81c46f0:	c7 44 24 04 0c 00 00 	movl   $0xc,0x4(%esp)
 81c46f7:	00 
 81c46f8:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c46fb:	89 04 24             	mov    %eax,(%esp)
 81c46fe:	e8 3f 78 4b 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81c4703:	eb 01                	jmp    81c4706 <_ZN23DisPatcher_SetPartyInfo4sendEP5CUserR9ParamBase+0x46>
 81c4705:	90                   	nop
 81c4706:	c9                   	leave
 81c4707:	c3                   	ret

```

```c
// DisPatcher_SetPartyInfo::send @ 0x81c46c0

/* DisPatcher_SetPartyInfo::send(CUser*, ParamBase&) */

void __thiscall
DisPatcher_SetPartyInfo::send(DisPatcher_SetPartyInfo *this,CUser *param_1,ParamBase *param_2)

{
  if ((*(int *)(param_2 + 4) != 0x7fffffff) && (*(int *)(param_2 + 4) != 0)) {
    CUser::SendCmdErrorPacket(param_1,0xc,*(uint *)(param_2 + 4) & 0xff);
  }
  return;
}

```

