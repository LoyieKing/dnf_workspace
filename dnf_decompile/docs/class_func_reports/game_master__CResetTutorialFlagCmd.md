# game_master__CResetTutorialFlagCmd

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## execute

```asm
// === 084a94c6 game_master::CResetTutorialFlagCmd::execute  [0x084a94c6-0x84a971f] ===
 84a94c6:	55                   	push   %ebp
 84a94c7:	89 e5                	mov    %esp,%ebp
 84a94c9:	57                   	push   %edi
 84a94ca:	56                   	push   %esi
 84a94cb:	53                   	push   %ebx
 84a94cc:	81 ec 3c 01 00 00    	sub    $0x13c,%esp
 84a94d2:	8b 45 08             	mov    0x8(%ebp),%eax
 84a94d5:	89 04 24             	mov    %eax,(%esp)
 84a94d8:	e8 dd aa 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84a94dd:	89 04 24             	mov    %eax,(%esp)
 84a94e0:	e8 b5 de 19 00       	call   864739a <_ZN15CUserCharacInfo23resetCharacTutorialFlagEv>
 84a94e5:	8d 45 e3             	lea    -0x1d(%ebp),%eax
 84a94e8:	89 04 24             	mov    %eax,(%esp)
 84a94eb:	e8 e0 6b 23 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 84a94f0:	8d 45 e3             	lea    -0x1d(%ebp),%eax
 84a94f3:	89 44 24 08          	mov    %eax,0x8(%esp)
 84a94f7:	c7 44 24 04 c4 fa c7 	movl   $0x8c7fac4,0x4(%esp)
 84a94fe:	08 
 84a94ff:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84a9502:	89 04 24             	mov    %eax,(%esp)
 84a9505:	e8 26 e1 25 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 84a950a:	eb 1b                	jmp    84a9527 <_ZN11game_master21CResetTutorialFlagCmd7executeEv+0x61>
 84a950c:	89 d3                	mov    %edx,%ebx
 84a950e:	89 c6                	mov    %eax,%esi
 84a9510:	8d 45 e3             	lea    -0x1d(%ebp),%eax
 84a9513:	89 04 24             	mov    %eax,(%esp)
 84a9516:	e8 d5 6b 23 00       	call   86e00f0 <_ZNSaIcED1Ev>
 84a951b:	89 f0                	mov    %esi,%eax
 84a951d:	89 da                	mov    %ebx,%edx
 84a951f:	89 04 24             	mov    %eax,(%esp)
 84a9522:	e8 29 a2 63 00       	call   8ae3750 <_Unwind_Resume>
 84a9527:	8d 45 e3             	lea    -0x1d(%ebp),%eax
 84a952a:	89 04 24             	mov    %eax,(%esp)
 84a952d:	e8 be 6b 23 00       	call   86e00f0 <_ZNSaIcED1Ev>
 84a9532:	8d 95 d1 fe ff ff    	lea    -0x12f(%ebp),%edx
 84a9538:	bb ff 00 00 00       	mov    $0xff,%ebx
 84a953d:	b8 00 00 00 00       	mov    $0x0,%eax
 84a9542:	89 d1                	mov    %edx,%ecx
 84a9544:	83 e1 01             	and    $0x1,%ecx
 84a9547:	85 c9                	test   %ecx,%ecx
 84a9549:	74 08                	je     84a9553 <_ZN11game_master21CResetTutorialFlagCmd7executeEv+0x8d>
 84a954b:	88 02                	mov    %al,(%edx)
 84a954d:	83 c2 01             	add    $0x1,%edx
 84a9550:	83 eb 01             	sub    $0x1,%ebx
 84a9553:	89 d1                	mov    %edx,%ecx
 84a9555:	83 e1 02             	and    $0x2,%ecx
 84a9558:	85 c9                	test   %ecx,%ecx
 84a955a:	74 09                	je     84a9565 <_ZN11game_master21CResetTutorialFlagCmd7executeEv+0x9f>
 84a955c:	66 89 02             	mov    %ax,(%edx)
 84a955f:	83 c2 02             	add    $0x2,%edx
 84a9562:	83 eb 02             	sub    $0x2,%ebx
 84a9565:	89 d9                	mov    %ebx,%ecx
 84a9567:	c1 e9 02             	shr    $0x2,%ecx
 84a956a:	89 d7                	mov    %edx,%edi
 84a956c:	f3 ab                	rep stos %eax,%es:(%edi)
 84a956e:	89 fa                	mov    %edi,%edx
 84a9570:	89 d9                	mov    %ebx,%ecx
 84a9572:	83 e1 02             	and    $0x2,%ecx
 84a9575:	85 c9                	test   %ecx,%ecx
 84a9577:	74 06                	je     84a957f <_ZN11game_master21CResetTutorialFlagCmd7executeEv+0xb9>
 84a9579:	66 89 02             	mov    %ax,(%edx)
 84a957c:	83 c2 02             	add    $0x2,%edx
 84a957f:	89 d9                	mov    %ebx,%ecx
 84a9581:	83 e1 01             	and    $0x1,%ecx
 84a9584:	85 c9                	test   %ecx,%ecx
 84a9586:	74 05                	je     84a958d <_ZN11game_master21CResetTutorialFlagCmd7executeEv+0xc7>
 84a9588:	88 02                	mov    %al,(%edx)
 84a958a:	83 c2 01             	add    $0x1,%edx
 84a958d:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 84a9594:	eb 59                	jmp    84a95ef <_ZN11game_master21CResetTutorialFlagCmd7executeEv+0x129>
 84a9596:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
 84a9599:	8b 45 08             	mov    0x8(%ebp),%eax
 84a959c:	89 04 24             	mov    %eax,(%esp)
 84a959f:	e8 16 aa 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84a95a4:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84a95a8:	89 04 24             	mov    %eax,(%esp)
 84a95ab:	e8 6e df 19 00       	call   864751e <_ZN15CUserCharacInfo32getCurCharacEscaladeTutorialFlagEj>
 84a95b0:	84 c0                	test   %al,%al
 84a95b2:	0f 95 c0             	setne  %al
 84a95b5:	84 c0                	test   %al,%al
 84a95b7:	74 32                	je     84a95eb <_ZN11game_master21CResetTutorialFlagCmd7executeEv+0x125>
 84a95b9:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84a95bc:	89 44 24 08          	mov    %eax,0x8(%esp)
 84a95c0:	c7 44 24 04 d5 fa c7 	movl   $0x8c7fad5,0x4(%esp)
 84a95c7:	08 
 84a95c8:	8d 85 d1 fe ff ff    	lea    -0x12f(%ebp),%eax
 84a95ce:	89 04 24             	mov    %eax,(%esp)
 84a95d1:	e8 6a 4e bd ff       	call   807e440 <sprintf@plt>
 84a95d6:	8d 85 d1 fe ff ff    	lea    -0x12f(%ebp),%eax
 84a95dc:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a95e0:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84a95e3:	89 04 24             	mov    %eax,(%esp)
 84a95e6:	e8 45 ea 25 00       	call   8708030 <_ZNSspLEPKc>
 84a95eb:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 84a95ef:	83 7d e4 7f          	cmpl   $0x7f,-0x1c(%ebp)
 84a95f3:	0f 9e c0             	setle  %al
 84a95f6:	84 c0                	test   %al,%al
 84a95f8:	75 9c                	jne    84a9596 <_ZN11game_master21CResetTutorialFlagCmd7executeEv+0xd0>
 84a95fa:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84a95fd:	89 04 24             	mov    %eax,(%esp)
 84a9600:	e8 47 47 0e 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84a9605:	c7 44 24 08 0c 00 00 	movl   $0xc,0x8(%esp)
 84a960c:	00 
 84a960d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84a9614:	00 
 84a9615:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84a9618:	89 04 24             	mov    %eax,(%esp)
 84a961b:	e8 dc 22 c2 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84a9620:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84a9627:	00 
 84a9628:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84a962b:	89 04 24             	mov    %eax,(%esp)
 84a962e:	e8 ed 22 c2 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84a9633:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84a963a:	00 
 84a963b:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84a963e:	89 04 24             	mov    %eax,(%esp)
 84a9641:	e8 5e 08 c3 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 84a9646:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84a964d:	00 
 84a964e:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84a9651:	89 04 24             	mov    %eax,(%esp)
 84a9654:	e8 c7 22 c2 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84a9659:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84a965c:	89 04 24             	mov    %eax,(%esp)
 84a965f:	e8 fc cf 25 00       	call   8706660 <_ZNKSs4sizeEv>
 84a9664:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a9668:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84a966b:	89 04 24             	mov    %eax,(%esp)
 84a966e:	e8 c9 22 c2 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84a9673:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84a9676:	89 04 24             	mov    %eax,(%esp)
 84a9679:	e8 e2 cf 25 00       	call   8706660 <_ZNKSs4sizeEv>
 84a967e:	89 c3                	mov    %eax,%ebx
 84a9680:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84a9683:	89 04 24             	mov    %eax,(%esp)
 84a9686:	e8 65 ce 25 00       	call   87064f0 <_ZNKSs5c_strEv>
 84a968b:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84a968f:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a9693:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84a9696:	89 04 24             	mov    %eax,(%esp)
 84a9699:	e8 d2 20 d8 ff       	call   822b770 <_ZN18InterfacePacketBuf7put_strEPKci>
 84a969e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84a96a5:	00 
 84a96a6:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84a96a9:	89 04 24             	mov    %eax,(%esp)
 84a96ac:	e8 a7 22 c2 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84a96b1:	8b 45 08             	mov    0x8(%ebp),%eax
 84a96b4:	89 04 24             	mov    %eax,(%esp)
 84a96b7:	e8 fe a8 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84a96bc:	8d 55 d0             	lea    -0x30(%ebp),%edx
 84a96bf:	89 54 24 04          	mov    %edx,0x4(%esp)
 84a96c3:	89 04 24             	mov    %eax,(%esp)
 84a96c6:	e8 ef ee 19 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84a96cb:	eb 15                	jmp    84a96e2 <_ZN11game_master21CResetTutorialFlagCmd7executeEv+0x21c>
 84a96cd:	89 d3                	mov    %edx,%ebx
 84a96cf:	89 c6                	mov    %eax,%esi
 84a96d1:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84a96d4:	89 04 24             	mov    %eax,(%esp)
 84a96d7:	e8 a4 47 0e 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84a96dc:	89 f0                	mov    %esi,%eax
 84a96de:	89 da                	mov    %ebx,%edx
 84a96e0:	eb 0d                	jmp    84a96ef <_ZN11game_master21CResetTutorialFlagCmd7executeEv+0x229>
 84a96e2:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84a96e5:	89 04 24             	mov    %eax,(%esp)
 84a96e8:	e8 93 47 0e 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84a96ed:	eb 1b                	jmp    84a970a <_ZN11game_master21CResetTutorialFlagCmd7executeEv+0x244>
 84a96ef:	89 d3                	mov    %edx,%ebx
 84a96f1:	89 c6                	mov    %eax,%esi
 84a96f3:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84a96f6:	89 04 24             	mov    %eax,(%esp)
 84a96f9:	e8 e2 e4 25 00       	call   8707be0 <_ZNSsD1Ev>
 84a96fe:	89 f0                	mov    %esi,%eax
 84a9700:	89 da                	mov    %ebx,%edx
 84a9702:	89 04 24             	mov    %eax,(%esp)
 84a9705:	e8 46 a0 63 00       	call   8ae3750 <_Unwind_Resume>
 84a970a:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84a970d:	89 04 24             	mov    %eax,(%esp)
 84a9710:	e8 cb e4 25 00       	call   8707be0 <_ZNSsD1Ev>
 84a9715:	81 c4 3c 01 00 00    	add    $0x13c,%esp
 84a971b:	5b                   	pop    %ebx
 84a971c:	5e                   	pop    %esi
 84a971d:	5f                   	pop    %edi
 84a971e:	5d                   	pop    %ebp
 84a971f:	c3                   	ret

```

```c
// game_master::CResetTutorialFlagCmd::execute @ 0x84a94c6

/* game_master::CResetTutorialFlagCmd::execute() */

void __thiscall game_master::CResetTutorialFlagCmd::execute(CResetTutorialFlagCmd *this)

{
  char cVar1;
  CUserCharacInfo *pCVar2;
  int iVar3;
  CUser *this_00;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  bool bVar7;
  byte bVar8;
  char local_133;
  char local_132 [254];
  PacketGuard local_34 [12];
  string local_28 [7];
  allocator<char> local_21;
  uint local_20;
  
  bVar8 = 0;
  pCVar2 = (CUserCharacInfo *)CCommand::GetUser((CCommand *)this);
  CUserCharacInfo::resetCharacTutorialFlag(pCVar2);
  std::allocator<char>::allocator();
                    /* try { // try from 084a9505 to 084a9509 has its CatchHandler @ 084a950c */
  std::string::string(local_28,"tutorial flag : ",(allocator *)&local_21);
  std::allocator<char>::~allocator(&local_21);
  pcVar5 = &local_133;
  uVar6 = 0xff;
  bVar7 = ((uint)pcVar5 & 1) != 0;
  if (bVar7) {
    local_133 = '\0';
    pcVar5 = local_132;
    uVar6 = 0xfe;
  }
  if (((uint)pcVar5 & 2) != 0) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5 = pcVar5 + 2;
    uVar6 = uVar6 - 2;
  }
  for (uVar4 = uVar6 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5[2] = '\0';
    pcVar5[3] = '\0';
    pcVar5 = pcVar5 + ((uint)bVar8 * -2 + 1) * 4;
  }
  if ((uVar6 & 2) != 0) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5 = pcVar5 + 2;
  }
  if (!bVar7) {
    *pcVar5 = '\0';
  }
  for (local_20 = 0; uVar6 = local_20, (int)local_20 < 0x80; local_20 = local_20 + 1) {
    pCVar2 = (CUserCharacInfo *)CCommand::GetUser((CCommand *)this);
                    /* try { // try from 084a95ab to 084a9604 has its CatchHandler @ 084a96ef */
    cVar1 = CUserCharacInfo::getCurCharacEscaladeTutorialFlag(pCVar2,uVar6);
    if (cVar1 != '\0') {
      sprintf(&local_133,"(%d) ",local_20);
      std::string::operator+=(local_28,&local_133);
    }
  }
  PacketGuard::PacketGuard(local_34);
                    /* try { // try from 084a961b to 084a96ca has its CatchHandler @ 084a96cd */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_34,0,0xc);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,0);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_34,0);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,0);
  iVar3 = std::string::size(local_28);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_34,iVar3);
  iVar3 = std::string::size(local_28);
  pcVar5 = (char *)std::string::c_str(local_28);
  InterfacePacketBuf::put_str((InterfacePacketBuf *)local_34,pcVar5,iVar3);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_34,true);
  this_00 = (CUser *)CCommand::GetUser((CCommand *)this);
  CUser::Send(this_00,local_34);
                    /* try { // try from 084a96e8 to 084a96ec has its CatchHandler @ 084a96ef */
  PacketGuard::~PacketGuard(local_34);
  std::string::~string(local_28);
  return;
}

```

