# game_master__CBingoGmTest

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## execute

```asm
// === 084b35fc game_master::CBingoGmTest::execute  [0x084b35fc-0x84b363d] ===
 84b35fc:	55                   	push   %ebp
 84b35fd:	89 e5                	mov    %esp,%ebp
 84b35ff:	83 ec 28             	sub    $0x28,%esp
 84b3602:	8b 45 08             	mov    0x8(%ebp),%eax
 84b3605:	89 04 24             	mov    %eax,(%esp)
 84b3608:	e8 ad 09 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84b360d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84b3610:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 84b3614:	74 24                	je     84b363a <_ZN11game_master12CBingoGmTest7executeEv+0x3e>
 84b3616:	8b 45 08             	mov    0x8(%ebp),%eax
 84b3619:	8b 40 08             	mov    0x8(%eax),%eax
 84b361c:	85 c0                	test   %eax,%eax
 84b361e:	75 0d                	jne    84b362d <_ZN11game_master12CBingoGmTest7executeEv+0x31>
 84b3620:	8b 45 08             	mov    0x8(%ebp),%eax
 84b3623:	89 04 24             	mov    %eax,(%esp)
 84b3626:	e8 13 00 00 00       	call   84b363e <_ZN11game_master12CBingoGmTest9resetDataEv>
 84b362b:	eb 0e                	jmp    84b363b <_ZN11game_master12CBingoGmTest7executeEv+0x3f>
 84b362d:	8b 45 08             	mov    0x8(%ebp),%eax
 84b3630:	89 04 24             	mov    %eax,(%esp)
 84b3633:	e8 52 00 00 00       	call   84b368a <_ZN11game_master12CBingoGmTest8reqValueEv>
 84b3638:	eb 01                	jmp    84b363b <_ZN11game_master12CBingoGmTest7executeEv+0x3f>
 84b363a:	90                   	nop
 84b363b:	c9                   	leave
 84b363c:	c3                   	ret
 84b363d:	90                   	nop

```

```c
// game_master::CBingoGmTest::execute @ 0x84b35fc

/* game_master::CBingoGmTest::execute() */

void __thiscall game_master::CBingoGmTest::execute(CBingoGmTest *this)

{
  int iVar1;
  
  iVar1 = CCommand::GetUser((CCommand *)this);
  if (iVar1 != 0) {
    if (*(int *)(this + 8) == 0) {
      resetData(this);
    }
    else {
      reqValue(this);
    }
  }
  return;
}

```

---

## parse

```asm
// === 084b35c4 game_master::CBingoGmTest::parse  [0x084b35c4-0x84b35fb] ===
 84b35c4:	55                   	push   %ebp
 84b35c5:	89 e5                	mov    %esp,%ebp
 84b35c7:	83 ec 18             	sub    $0x18,%esp
 84b35ca:	8b 45 08             	mov    0x8(%ebp),%eax
 84b35cd:	8b 40 04             	mov    0x4(%eax),%eax
 84b35d0:	83 c0 0c             	add    $0xc,%eax
 84b35d3:	89 04 24             	mov    %eax,(%esp)
 84b35d6:	e8 8d ba de ff       	call   829f068 <_Z4trimRSs>
 84b35db:	8b 45 08             	mov    0x8(%ebp),%eax
 84b35de:	8b 40 04             	mov    0x4(%eax),%eax
 84b35e1:	83 c0 0c             	add    $0xc,%eax
 84b35e4:	89 04 24             	mov    %eax,(%esp)
 84b35e7:	e8 04 2f 25 00       	call   87064f0 <_ZNKSs5c_strEv>
 84b35ec:	89 04 24             	mov    %eax,(%esp)
 84b35ef:	e8 fc b0 bc ff       	call   807e6f0 <atoi@plt>
 84b35f4:	8b 55 08             	mov    0x8(%ebp),%edx
 84b35f7:	89 42 08             	mov    %eax,0x8(%edx)
 84b35fa:	c9                   	leave
 84b35fb:	c3                   	ret

```

```c
// game_master::CBingoGmTest::parse @ 0x84b35c4

/* game_master::CBingoGmTest::parse() */

void __thiscall game_master::CBingoGmTest::parse(CBingoGmTest *this)

{
  char *__nptr;
  int iVar1;
  
  trim((string *)(*(int *)(this + 4) + 0xc));
  __nptr = (char *)std::string::c_str((string *)(*(int *)(this + 4) + 0xc));
  iVar1 = atoi(__nptr);
  *(int *)(this + 8) = iVar1;
  return;
}

```

---

## reqValue

```asm
// === 084b368a game_master::CBingoGmTest::reqValue  [0x084b368a-0x84b388b] ===
 84b368a:	55                   	push   %ebp
 84b368b:	89 e5                	mov    %esp,%ebp
 84b368d:	56                   	push   %esi
 84b368e:	53                   	push   %ebx
 84b368f:	83 ec 40             	sub    $0x40,%esp
 84b3692:	8b 45 08             	mov    0x8(%ebp),%eax
 84b3695:	89 04 24             	mov    %eax,(%esp)
 84b3698:	e8 1d 09 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84b369d:	89 45 e0             	mov    %eax,-0x20(%ebp)
 84b36a0:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 84b36a4:	0f 84 d3 01 00 00    	je     84b387d <_ZN11game_master12CBingoGmTest8reqValueEv+0x1f3>
 84b36aa:	a1 30 f7 41 09       	mov    0x941f730,%eax
 84b36af:	c7 44 24 04 6a 00 00 	movl   $0x6a,0x4(%esp)
 84b36b6:	00 
 84b36b7:	89 04 24             	mov    %eax,(%esp)
 84b36ba:	e8 d9 22 c6 ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 84b36bf:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84b36c2:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 84b36c6:	0f 84 b4 01 00 00    	je     84b3880 <_ZN11game_master12CBingoGmTest8reqValueEv+0x1f6>
 84b36cc:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84b36cf:	89 04 24             	mov    %eax,(%esp)
 84b36d2:	e8 d9 db 1d 00       	call   86912b0 <_ZN5CUser12getBingoDataEv>
 84b36d7:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 84b36db:	3c 02                	cmp    $0x2,%al
 84b36dd:	0f 9f c0             	setg   %al
 84b36e0:	84 c0                	test   %al,%al
 84b36e2:	0f 85 9b 01 00 00    	jne    84b3883 <_ZN11game_master12CBingoGmTest8reqValueEv+0x1f9>
 84b36e8:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84b36eb:	89 04 24             	mov    %eax,(%esp)
 84b36ee:	e8 bd db 1d 00       	call   86912b0 <_ZN5CUser12getBingoDataEv>
 84b36f3:	8b 00                	mov    (%eax),%eax
 84b36f5:	89 45 e8             	mov    %eax,-0x18(%ebp)
 84b36f8:	8b 45 08             	mov    0x8(%ebp),%eax
 84b36fb:	8b 70 08             	mov    0x8(%eax),%esi
 84b36fe:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84b3701:	89 04 24             	mov    %eax,(%esp)
 84b3704:	e8 a7 db 1d 00       	call   86912b0 <_ZN5CUser12getBingoDataEv>
 84b3709:	89 c3                	mov    %eax,%ebx
 84b370b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84b370e:	89 04 24             	mov    %eax,(%esp)
 84b3711:	e8 d4 68 c1 ff       	call   80c9fea <_ZN10BingoEvent14getBingoSystemEv>
 84b3716:	89 04 24             	mov    %eax,(%esp)
 84b3719:	e8 48 b0 c1 ff       	call   80ce766 <_ZNK5boost10shared_ptrI6CBingoEptEv>
 84b371e:	89 74 24 08          	mov    %esi,0x8(%esp)
 84b3722:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84b3726:	89 04 24             	mov    %eax,(%esp)
 84b3729:	e8 1e 76 c1 ff       	call   80cad4c <_ZN6CBingo11calNewValueERji>
 84b372e:	89 45 ec             	mov    %eax,-0x14(%ebp)
 84b3731:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84b3734:	89 04 24             	mov    %eax,(%esp)
 84b3737:	e8 74 db 1d 00       	call   86912b0 <_ZN5CUser12getBingoDataEv>
 84b373c:	8b 00                	mov    (%eax),%eax
 84b373e:	3b 45 e8             	cmp    -0x18(%ebp),%eax
 84b3741:	0f 95 c0             	setne  %al
 84b3744:	84 c0                	test   %al,%al
 84b3746:	0f 84 80 00 00 00    	je     84b37cc <_ZN11game_master12CBingoGmTest8reqValueEv+0x142>
 84b374c:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84b374f:	89 04 24             	mov    %eax,(%esp)
 84b3752:	e8 59 db 1d 00       	call   86912b0 <_ZN5CUser12getBingoDataEv>
 84b3757:	c6 40 06 01          	movb   $0x1,0x6(%eax)
 84b375b:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84b375e:	89 04 24             	mov    %eax,(%esp)
 84b3761:	e8 4a db 1d 00       	call   86912b0 <_ZN5CUser12getBingoDataEv>
 84b3766:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 84b376a:	0f be c0             	movsbl %al,%eax
 84b376d:	8b 55 ec             	mov    -0x14(%ebp),%edx
 84b3770:	89 d1                	mov    %edx,%ecx
 84b3772:	29 c1                	sub    %eax,%ecx
 84b3774:	89 c8                	mov    %ecx,%eax
 84b3776:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84b3779:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 84b377d:	7e 4d                	jle    84b37cc <_ZN11game_master12CBingoGmTest8reqValueEv+0x142>
 84b377f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84b3782:	83 f8 03             	cmp    $0x3,%eax
 84b3785:	7e 05                	jle    84b378c <_ZN11game_master12CBingoGmTest8reqValueEv+0x102>
 84b3787:	b8 03 00 00 00       	mov    $0x3,%eax
 84b378c:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84b378f:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84b3792:	89 04 24             	mov    %eax,(%esp)
 84b3795:	e8 16 db 1d 00       	call   86912b0 <_ZN5CUser12getBingoDataEv>
 84b379a:	8b 55 ec             	mov    -0x14(%ebp),%edx
 84b379d:	88 50 04             	mov    %dl,0x4(%eax)
 84b37a0:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 84b37a7:	eb 16                	jmp    84b37bf <_ZN11game_master12CBingoGmTest8reqValueEv+0x135>
 84b37a9:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84b37ac:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b37b0:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84b37b3:	89 04 24             	mov    %eax,(%esp)
 84b37b6:	e8 19 6c c1 ff       	call   80ca3d4 <_ZN10BingoEvent22sendOneMatchLineRewardER5CUser>
 84b37bb:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 84b37bf:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84b37c2:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 84b37c5:	0f 9c c0             	setl   %al
 84b37c8:	84 c0                	test   %al,%al
 84b37ca:	75 dd                	jne    84b37a9 <_ZN11game_master12CBingoGmTest8reqValueEv+0x11f>
 84b37cc:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84b37cf:	89 04 24             	mov    %eax,(%esp)
 84b37d2:	e8 75 a5 0d 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84b37d7:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84b37da:	89 04 24             	mov    %eax,(%esp)
 84b37dd:	e8 04 81 c1 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 84b37e2:	c7 44 24 08 c3 01 00 	movl   $0x1c3,0x8(%esp)
 84b37e9:	00 
 84b37ea:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84b37f1:	00 
 84b37f2:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84b37f5:	89 04 24             	mov    %eax,(%esp)
 84b37f8:	e8 ff 80 c1 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84b37fd:	8b 45 08             	mov    0x8(%ebp),%eax
 84b3800:	8b 40 08             	mov    0x8(%eax),%eax
 84b3803:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b3807:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84b380a:	89 04 24             	mov    %eax,(%esp)
 84b380d:	e8 0e 81 c1 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84b3812:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84b3815:	89 04 24             	mov    %eax,(%esp)
 84b3818:	e8 93 da 1d 00       	call   86912b0 <_ZN5CUser12getBingoDataEv>
 84b381d:	8b 00                	mov    (%eax),%eax
 84b381f:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b3823:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84b3826:	89 04 24             	mov    %eax,(%esp)
 84b3829:	e8 0e 81 c1 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84b382e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84b3835:	00 
 84b3836:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84b3839:	89 04 24             	mov    %eax,(%esp)
 84b383c:	e8 17 81 c1 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84b3841:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84b3844:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b3848:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84b384b:	89 04 24             	mov    %eax,(%esp)
 84b384e:	e8 67 4d 19 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84b3853:	eb 1b                	jmp    84b3870 <_ZN11game_master12CBingoGmTest8reqValueEv+0x1e6>
 84b3855:	89 d3                	mov    %edx,%ebx
 84b3857:	89 c6                	mov    %eax,%esi
 84b3859:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84b385c:	89 04 24             	mov    %eax,(%esp)
 84b385f:	e8 1c a6 0d 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84b3864:	89 f0                	mov    %esi,%eax
 84b3866:	89 da                	mov    %ebx,%edx
 84b3868:	89 04 24             	mov    %eax,(%esp)
 84b386b:	e8 e0 fe 62 00       	call   8ae3750 <_Unwind_Resume>
 84b3870:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84b3873:	89 04 24             	mov    %eax,(%esp)
 84b3876:	e8 05 a6 0d 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84b387b:	eb 07                	jmp    84b3884 <_ZN11game_master12CBingoGmTest8reqValueEv+0x1fa>
 84b387d:	90                   	nop
 84b387e:	eb 04                	jmp    84b3884 <_ZN11game_master12CBingoGmTest8reqValueEv+0x1fa>
 84b3880:	90                   	nop
 84b3881:	eb 01                	jmp    84b3884 <_ZN11game_master12CBingoGmTest8reqValueEv+0x1fa>
 84b3883:	90                   	nop
 84b3884:	83 c4 40             	add    $0x40,%esp
 84b3887:	5b                   	pop    %ebx
 84b3888:	5e                   	pop    %esi
 84b3889:	5d                   	pop    %ebp
 84b388a:	c3                   	ret
 84b388b:	90                   	nop

```

```c
// game_master::CBingoGmTest::reqValue @ 0x84b368a

/* game_master::CBingoGmTest::reqValue() */

void __thiscall game_master::CBingoGmTest::reqValue(CBingoGmTest *this)

{
  int iVar1;
  int *piVar2;
  uint *puVar3;
  shared_ptr<CBingo> *this_00;
  CBingo *this_01;
  PacketGuard local_30 [12];
  CUser *local_24;
  BingoEvent *local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_24 = (CUser *)CCommand::GetUser((CCommand *)this);
  if (((local_24 != (CUser *)0x0) &&
      (local_20 = (BingoEvent *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x6a),
      local_20 != (BingoEvent *)0x0)) &&
     (iVar1 = CUser::getBingoData(local_24), *(char *)(iVar1 + 4) < '\x03')) {
    piVar2 = (int *)CUser::getBingoData(local_24);
    local_1c = *piVar2;
    iVar1 = *(int *)(this + 8);
    puVar3 = (uint *)CUser::getBingoData(local_24);
    this_00 = (shared_ptr<CBingo> *)BingoEvent::getBingoSystem(local_20);
    this_01 = (CBingo *)boost::shared_ptr<CBingo>::operator->(this_00);
    local_18 = CBingo::calNewValue(this_01,puVar3,iVar1);
    piVar2 = (int *)CUser::getBingoData(local_24);
    if (*piVar2 != local_1c) {
      iVar1 = CUser::getBingoData(local_24);
      *(undefined1 *)(iVar1 + 6) = 1;
      iVar1 = CUser::getBingoData(local_24);
      local_14 = local_18 - *(char *)(iVar1 + 4);
      if (0 < local_14) {
        if (3 < local_14) {
          local_14 = 3;
        }
        iVar1 = CUser::getBingoData(local_24);
        *(char *)(iVar1 + 4) = (char)local_18;
        for (local_10 = 0; local_10 < local_14; local_10 = local_10 + 1) {
          BingoEvent::sendOneMatchLineReward(local_20,local_24);
        }
      }
    }
    PacketGuard::PacketGuard(local_30);
                    /* try { // try from 084b37dd to 084b3852 has its CatchHandler @ 084b3855 */
    InterfacePacketBuf::clear((InterfacePacketBuf *)local_30);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,0,0x1c3);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,*(int *)(this + 8));
    piVar2 = (int *)CUser::getBingoData(local_24);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_30,*piVar2);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
    CUser::Send(local_24,local_30);
    PacketGuard::~PacketGuard(local_30);
  }
  return;
}

```

---

## resetData

```asm
// === 084b363e game_master::CBingoGmTest::resetData  [0x084b363e-0x84b3689] ===
 84b363e:	55                   	push   %ebp
 84b363f:	89 e5                	mov    %esp,%ebp
 84b3641:	83 ec 28             	sub    $0x28,%esp
 84b3644:	8b 45 08             	mov    0x8(%ebp),%eax
 84b3647:	89 04 24             	mov    %eax,(%esp)
 84b364a:	e8 6b 09 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84b364f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84b3652:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 84b3656:	74 2f                	je     84b3687 <_ZN11game_master12CBingoGmTest9resetDataEv+0x49>
 84b3658:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84b365b:	89 04 24             	mov    %eax,(%esp)
 84b365e:	e8 4d dc 1d 00       	call   86912b0 <_ZN5CUser12getBingoDataEv>
 84b3663:	89 04 24             	mov    %eax,(%esp)
 84b3666:	e8 01 86 c1 ff       	call   80cbc6c <_ZN9BingoData5clearEv>
 84b366b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84b366e:	89 04 24             	mov    %eax,(%esp)
 84b3671:	e8 3a dc 1d 00       	call   86912b0 <_ZN5CUser12getBingoDataEv>
 84b3676:	c6 40 06 01          	movb   $0x1,0x6(%eax)
 84b367a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84b367d:	89 04 24             	mov    %eax,(%esp)
 84b3680:	e8 c9 dc 1d 00       	call   869134e <_ZN5CUser13sendBingoDataEv>
 84b3685:	eb 01                	jmp    84b3688 <_ZN11game_master12CBingoGmTest9resetDataEv+0x4a>
 84b3687:	90                   	nop
 84b3688:	c9                   	leave
 84b3689:	c3                   	ret

```

```c
// game_master::CBingoGmTest::resetData @ 0x84b363e

/* game_master::CBingoGmTest::resetData() */

void __thiscall game_master::CBingoGmTest::resetData(CBingoGmTest *this)

{
  CUser *this_00;
  BingoData *this_01;
  int iVar1;
  
  this_00 = (CUser *)CCommand::GetUser((CCommand *)this);
  if (this_00 != (CUser *)0x0) {
    this_01 = (BingoData *)CUser::getBingoData(this_00);
    BingoData::clear(this_01);
    iVar1 = CUser::getBingoData(this_00);
    *(undefined1 *)(iVar1 + 6) = 1;
    CUser::sendBingoData(this_00);
  }
  return;
}

```

