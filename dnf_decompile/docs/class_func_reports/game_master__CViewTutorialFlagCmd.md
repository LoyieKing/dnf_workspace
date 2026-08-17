# game_master__CViewTutorialFlagCmd

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## execute

```asm
// === 084a927e game_master::CViewTutorialFlagCmd::execute  [0x084a927e-0x84a94c5] ===
 84a927e:	55                   	push   %ebp
 84a927f:	89 e5                	mov    %esp,%ebp
 84a9281:	57                   	push   %edi
 84a9282:	56                   	push   %esi
 84a9283:	53                   	push   %ebx
 84a9284:	81 ec 3c 01 00 00    	sub    $0x13c,%esp
 84a928a:	8d 45 e3             	lea    -0x1d(%ebp),%eax
 84a928d:	89 04 24             	mov    %eax,(%esp)
 84a9290:	e8 3b 6e 23 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 84a9295:	8d 45 e3             	lea    -0x1d(%ebp),%eax
 84a9298:	89 44 24 08          	mov    %eax,0x8(%esp)
 84a929c:	c7 44 24 04 c4 fa c7 	movl   $0x8c7fac4,0x4(%esp)
 84a92a3:	08 
 84a92a4:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84a92a7:	89 04 24             	mov    %eax,(%esp)
 84a92aa:	e8 81 e3 25 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 84a92af:	eb 1b                	jmp    84a92cc <_ZN11game_master20CViewTutorialFlagCmd7executeEv+0x4e>
 84a92b1:	89 d3                	mov    %edx,%ebx
 84a92b3:	89 c6                	mov    %eax,%esi
 84a92b5:	8d 45 e3             	lea    -0x1d(%ebp),%eax
 84a92b8:	89 04 24             	mov    %eax,(%esp)
 84a92bb:	e8 30 6e 23 00       	call   86e00f0 <_ZNSaIcED1Ev>
 84a92c0:	89 f0                	mov    %esi,%eax
 84a92c2:	89 da                	mov    %ebx,%edx
 84a92c4:	89 04 24             	mov    %eax,(%esp)
 84a92c7:	e8 84 a4 63 00       	call   8ae3750 <_Unwind_Resume>
 84a92cc:	8d 45 e3             	lea    -0x1d(%ebp),%eax
 84a92cf:	89 04 24             	mov    %eax,(%esp)
 84a92d2:	e8 19 6e 23 00       	call   86e00f0 <_ZNSaIcED1Ev>
 84a92d7:	8d 95 d1 fe ff ff    	lea    -0x12f(%ebp),%edx
 84a92dd:	bb ff 00 00 00       	mov    $0xff,%ebx
 84a92e2:	b8 00 00 00 00       	mov    $0x0,%eax
 84a92e7:	89 d1                	mov    %edx,%ecx
 84a92e9:	83 e1 01             	and    $0x1,%ecx
 84a92ec:	85 c9                	test   %ecx,%ecx
 84a92ee:	74 08                	je     84a92f8 <_ZN11game_master20CViewTutorialFlagCmd7executeEv+0x7a>
 84a92f0:	88 02                	mov    %al,(%edx)
 84a92f2:	83 c2 01             	add    $0x1,%edx
 84a92f5:	83 eb 01             	sub    $0x1,%ebx
 84a92f8:	89 d1                	mov    %edx,%ecx
 84a92fa:	83 e1 02             	and    $0x2,%ecx
 84a92fd:	85 c9                	test   %ecx,%ecx
 84a92ff:	74 09                	je     84a930a <_ZN11game_master20CViewTutorialFlagCmd7executeEv+0x8c>
 84a9301:	66 89 02             	mov    %ax,(%edx)
 84a9304:	83 c2 02             	add    $0x2,%edx
 84a9307:	83 eb 02             	sub    $0x2,%ebx
 84a930a:	89 d9                	mov    %ebx,%ecx
 84a930c:	c1 e9 02             	shr    $0x2,%ecx
 84a930f:	89 d7                	mov    %edx,%edi
 84a9311:	f3 ab                	rep stos %eax,%es:(%edi)
 84a9313:	89 fa                	mov    %edi,%edx
 84a9315:	89 d9                	mov    %ebx,%ecx
 84a9317:	83 e1 02             	and    $0x2,%ecx
 84a931a:	85 c9                	test   %ecx,%ecx
 84a931c:	74 06                	je     84a9324 <_ZN11game_master20CViewTutorialFlagCmd7executeEv+0xa6>
 84a931e:	66 89 02             	mov    %ax,(%edx)
 84a9321:	83 c2 02             	add    $0x2,%edx
 84a9324:	89 d9                	mov    %ebx,%ecx
 84a9326:	83 e1 01             	and    $0x1,%ecx
 84a9329:	85 c9                	test   %ecx,%ecx
 84a932b:	74 05                	je     84a9332 <_ZN11game_master20CViewTutorialFlagCmd7executeEv+0xb4>
 84a932d:	88 02                	mov    %al,(%edx)
 84a932f:	83 c2 01             	add    $0x1,%edx
 84a9332:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 84a9339:	eb 59                	jmp    84a9394 <_ZN11game_master20CViewTutorialFlagCmd7executeEv+0x116>
 84a933b:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
 84a933e:	8b 45 08             	mov    0x8(%ebp),%eax
 84a9341:	89 04 24             	mov    %eax,(%esp)
 84a9344:	e8 71 ac 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84a9349:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84a934d:	89 04 24             	mov    %eax,(%esp)
 84a9350:	e8 c9 e1 19 00       	call   864751e <_ZN15CUserCharacInfo32getCurCharacEscaladeTutorialFlagEj>
 84a9355:	84 c0                	test   %al,%al
 84a9357:	0f 95 c0             	setne  %al
 84a935a:	84 c0                	test   %al,%al
 84a935c:	74 32                	je     84a9390 <_ZN11game_master20CViewTutorialFlagCmd7executeEv+0x112>
 84a935e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84a9361:	89 44 24 08          	mov    %eax,0x8(%esp)
 84a9365:	c7 44 24 04 d5 fa c7 	movl   $0x8c7fad5,0x4(%esp)
 84a936c:	08 
 84a936d:	8d 85 d1 fe ff ff    	lea    -0x12f(%ebp),%eax
 84a9373:	89 04 24             	mov    %eax,(%esp)
 84a9376:	e8 c5 50 bd ff       	call   807e440 <sprintf@plt>
 84a937b:	8d 85 d1 fe ff ff    	lea    -0x12f(%ebp),%eax
 84a9381:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a9385:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84a9388:	89 04 24             	mov    %eax,(%esp)
 84a938b:	e8 a0 ec 25 00       	call   8708030 <_ZNSspLEPKc>
 84a9390:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 84a9394:	83 7d e4 7f          	cmpl   $0x7f,-0x1c(%ebp)
 84a9398:	0f 9e c0             	setle  %al
 84a939b:	84 c0                	test   %al,%al
 84a939d:	75 9c                	jne    84a933b <_ZN11game_master20CViewTutorialFlagCmd7executeEv+0xbd>
 84a939f:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84a93a2:	89 04 24             	mov    %eax,(%esp)
 84a93a5:	e8 a2 49 0e 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84a93aa:	c7 44 24 08 0c 00 00 	movl   $0xc,0x8(%esp)
 84a93b1:	00 
 84a93b2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84a93b9:	00 
 84a93ba:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84a93bd:	89 04 24             	mov    %eax,(%esp)
 84a93c0:	e8 37 25 c2 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84a93c5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84a93cc:	00 
 84a93cd:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84a93d0:	89 04 24             	mov    %eax,(%esp)
 84a93d3:	e8 48 25 c2 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84a93d8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84a93df:	00 
 84a93e0:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84a93e3:	89 04 24             	mov    %eax,(%esp)
 84a93e6:	e8 b9 0a c3 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 84a93eb:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84a93f2:	00 
 84a93f3:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84a93f6:	89 04 24             	mov    %eax,(%esp)
 84a93f9:	e8 22 25 c2 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84a93fe:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84a9401:	89 04 24             	mov    %eax,(%esp)
 84a9404:	e8 57 d2 25 00       	call   8706660 <_ZNKSs4sizeEv>
 84a9409:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a940d:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84a9410:	89 04 24             	mov    %eax,(%esp)
 84a9413:	e8 24 25 c2 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84a9418:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84a941b:	89 04 24             	mov    %eax,(%esp)
 84a941e:	e8 3d d2 25 00       	call   8706660 <_ZNKSs4sizeEv>
 84a9423:	89 c3                	mov    %eax,%ebx
 84a9425:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84a9428:	89 04 24             	mov    %eax,(%esp)
 84a942b:	e8 c0 d0 25 00       	call   87064f0 <_ZNKSs5c_strEv>
 84a9430:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84a9434:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a9438:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84a943b:	89 04 24             	mov    %eax,(%esp)
 84a943e:	e8 2d 23 d8 ff       	call   822b770 <_ZN18InterfacePacketBuf7put_strEPKci>
 84a9443:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84a944a:	00 
 84a944b:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84a944e:	89 04 24             	mov    %eax,(%esp)
 84a9451:	e8 02 25 c2 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84a9456:	8b 45 08             	mov    0x8(%ebp),%eax
 84a9459:	89 04 24             	mov    %eax,(%esp)
 84a945c:	e8 59 ab 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84a9461:	8d 55 d0             	lea    -0x30(%ebp),%edx
 84a9464:	89 54 24 04          	mov    %edx,0x4(%esp)
 84a9468:	89 04 24             	mov    %eax,(%esp)
 84a946b:	e8 4a f1 19 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84a9470:	eb 15                	jmp    84a9487 <_ZN11game_master20CViewTutorialFlagCmd7executeEv+0x209>
 84a9472:	89 d3                	mov    %edx,%ebx
 84a9474:	89 c6                	mov    %eax,%esi
 84a9476:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84a9479:	89 04 24             	mov    %eax,(%esp)
 84a947c:	e8 ff 49 0e 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84a9481:	89 f0                	mov    %esi,%eax
 84a9483:	89 da                	mov    %ebx,%edx
 84a9485:	eb 0d                	jmp    84a9494 <_ZN11game_master20CViewTutorialFlagCmd7executeEv+0x216>
 84a9487:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84a948a:	89 04 24             	mov    %eax,(%esp)
 84a948d:	e8 ee 49 0e 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84a9492:	eb 1b                	jmp    84a94af <_ZN11game_master20CViewTutorialFlagCmd7executeEv+0x231>
 84a9494:	89 d3                	mov    %edx,%ebx
 84a9496:	89 c6                	mov    %eax,%esi
 84a9498:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84a949b:	89 04 24             	mov    %eax,(%esp)
 84a949e:	e8 3d e7 25 00       	call   8707be0 <_ZNSsD1Ev>
 84a94a3:	89 f0                	mov    %esi,%eax
 84a94a5:	89 da                	mov    %ebx,%edx
 84a94a7:	89 04 24             	mov    %eax,(%esp)
 84a94aa:	e8 a1 a2 63 00       	call   8ae3750 <_Unwind_Resume>
 84a94af:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84a94b2:	89 04 24             	mov    %eax,(%esp)
 84a94b5:	e8 26 e7 25 00       	call   8707be0 <_ZNSsD1Ev>
 84a94ba:	81 c4 3c 01 00 00    	add    $0x13c,%esp
 84a94c0:	5b                   	pop    %ebx
 84a94c1:	5e                   	pop    %esi
 84a94c2:	5f                   	pop    %edi
 84a94c3:	5d                   	pop    %ebp
 84a94c4:	c3                   	ret
 84a94c5:	90                   	nop

```

```c
// game_master::CViewTutorialFlagCmd::execute @ 0x84a927e

/* game_master::CViewTutorialFlagCmd::execute() */

void __thiscall game_master::CViewTutorialFlagCmd::execute(CViewTutorialFlagCmd *this)

{
  char cVar1;
  CUserCharacInfo *this_00;
  int iVar2;
  CUser *this_01;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  bool bVar6;
  byte bVar7;
  char local_133;
  char local_132 [254];
  PacketGuard local_34 [12];
  string local_28 [7];
  allocator<char> local_21;
  uint local_20;
  
  bVar7 = 0;
  std::allocator<char>::allocator();
                    /* try { // try from 084a92aa to 084a92ae has its CatchHandler @ 084a92b1 */
  std::string::string(local_28,"tutorial flag : ",(allocator *)&local_21);
  std::allocator<char>::~allocator(&local_21);
  pcVar4 = &local_133;
  uVar5 = 0xff;
  bVar6 = ((uint)pcVar4 & 1) != 0;
  if (bVar6) {
    local_133 = '\0';
    pcVar4 = local_132;
    uVar5 = 0xfe;
  }
  if (((uint)pcVar4 & 2) != 0) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4 = pcVar4 + 2;
    uVar5 = uVar5 - 2;
  }
  for (uVar3 = uVar5 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    pcVar4[3] = '\0';
    pcVar4 = pcVar4 + ((uint)bVar7 * -2 + 1) * 4;
  }
  if ((uVar5 & 2) != 0) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4 = pcVar4 + 2;
  }
  if (!bVar6) {
    *pcVar4 = '\0';
  }
  for (local_20 = 0; uVar5 = local_20, (int)local_20 < 0x80; local_20 = local_20 + 1) {
    this_00 = (CUserCharacInfo *)CCommand::GetUser((CCommand *)this);
                    /* try { // try from 084a9350 to 084a93a9 has its CatchHandler @ 084a9494 */
    cVar1 = CUserCharacInfo::getCurCharacEscaladeTutorialFlag(this_00,uVar5);
    if (cVar1 != '\0') {
      sprintf(&local_133,"(%d) ",local_20);
      std::string::operator+=(local_28,&local_133);
    }
  }
  PacketGuard::PacketGuard(local_34);
                    /* try { // try from 084a93c0 to 084a946f has its CatchHandler @ 084a9472 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_34,0,0xc);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,0);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_34,0);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,0);
  iVar2 = std::string::size(local_28);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_34,iVar2);
  iVar2 = std::string::size(local_28);
  pcVar4 = (char *)std::string::c_str(local_28);
  InterfacePacketBuf::put_str((InterfacePacketBuf *)local_34,pcVar4,iVar2);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_34,true);
  this_01 = (CUser *)CCommand::GetUser((CCommand *)this);
  CUser::Send(this_01,local_34);
                    /* try { // try from 084a948d to 084a9491 has its CatchHandler @ 084a9494 */
  PacketGuard::~PacketGuard(local_34);
  std::string::~string(local_28);
  return;
}

```

