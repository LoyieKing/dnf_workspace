# Inter_LoadBreakAwayPreventMessage

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084d92b4 Inter_LoadBreakAwayPreventMessage::dispatch_sig  [0x084d92b4-0x84d94c3] ===
 84d92b4:	55                   	push   %ebp
 84d92b5:	89 e5                	mov    %esp,%ebp
 84d92b7:	56                   	push   %esi
 84d92b8:	53                   	push   %ebx
 84d92b9:	83 ec 40             	sub    $0x40,%esp
 84d92bc:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 84d92c0:	75 0a                	jne    84d92cc <_ZN33Inter_LoadBreakAwayPreventMessage12dispatch_sigEP5CUserPci+0x18>
 84d92c2:	b8 00 00 00 00       	mov    $0x0,%eax
 84d92c7:	e9 f1 01 00 00       	jmp    84d94bd <_ZN33Inter_LoadBreakAwayPreventMessage12dispatch_sigEP5CUserPci+0x209>
 84d92cc:	8b 45 10             	mov    0x10(%ebp),%eax
 84d92cf:	89 45 ec             	mov    %eax,-0x14(%ebp)
 84d92d2:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84d92d5:	8b 40 04             	mov    0x4(%eax),%eax
 84d92d8:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84d92db:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84d92de:	8b 00                	mov    (%eax),%eax
 84d92e0:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84d92e3:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 84d92e7:	74 0a                	je     84d92f3 <_ZN33Inter_LoadBreakAwayPreventMessage12dispatch_sigEP5CUserPci+0x3f>
 84d92e9:	83 7d f0 02          	cmpl   $0x2,-0x10(%ebp)
 84d92ed:	0f 85 40 01 00 00    	jne    84d9433 <_ZN33Inter_LoadBreakAwayPreventMessage12dispatch_sigEP5CUserPci+0x17f>
 84d92f3:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84d92f6:	89 04 24             	mov    %eax,(%esp)
 84d92f9:	e8 4e 4a 0b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84d92fe:	c7 44 24 08 11 01 00 	movl   $0x111,0x8(%esp)
 84d9305:	00 
 84d9306:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84d930d:	00 
 84d930e:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84d9311:	89 04 24             	mov    %eax,(%esp)
 84d9314:	e8 e3 25 bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84d9319:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d931c:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d9320:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84d9323:	89 04 24             	mov    %eax,(%esp)
 84d9326:	e8 f5 25 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d932b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d9332:	00 
 84d9333:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84d9336:	89 04 24             	mov    %eax,(%esp)
 84d9339:	e8 1a 26 bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84d933e:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84d9341:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d9345:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d9348:	89 04 24             	mov    %eax,(%esp)
 84d934b:	e8 6a f2 16 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84d9350:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84d9353:	89 04 24             	mov    %eax,(%esp)
 84d9356:	e8 f1 49 0b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84d935b:	c7 44 24 08 36 01 00 	movl   $0x136,0x8(%esp)
 84d9362:	00 
 84d9363:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84d936a:	00 
 84d936b:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84d936e:	89 04 24             	mov    %eax,(%esp)
 84d9371:	e8 86 25 bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84d9376:	c7 44 24 04 80 51 01 	movl   $0x15180,0x4(%esp)
 84d937d:	00 
 84d937e:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84d9381:	89 04 24             	mov    %eax,(%esp)
 84d9384:	e8 b3 25 bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84d9389:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84d9390:	00 
 84d9391:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84d9394:	89 04 24             	mov    %eax,(%esp)
 84d9397:	e8 84 25 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d939c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d93a3:	00 
 84d93a4:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84d93a7:	89 04 24             	mov    %eax,(%esp)
 84d93aa:	e8 a9 25 bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84d93af:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84d93b2:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d93b6:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d93b9:	89 04 24             	mov    %eax,(%esp)
 84d93bc:	e8 f9 f1 16 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84d93c1:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 84d93c8:	00 
 84d93c9:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d93cc:	89 04 24             	mov    %eax,(%esp)
 84d93cf:	e8 88 68 d5 ff       	call   822fc5c <_ZN5CUser27setBreakAwayDungeonClearCntEi>
 84d93d4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d93d7:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d93db:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d93de:	89 04 24             	mov    %eax,(%esp)
 84d93e1:	e8 96 68 d5 ff       	call   822fc7c <_ZN5CUser21setBreakAwayQuestTimeEj>
 84d93e6:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84d93e9:	89 04 24             	mov    %eax,(%esp)
 84d93ec:	e8 8f 4a 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d93f1:	eb 30                	jmp    84d9423 <_ZN33Inter_LoadBreakAwayPreventMessage12dispatch_sigEP5CUserPci+0x16f>
 84d93f3:	89 d3                	mov    %edx,%ebx
 84d93f5:	89 c6                	mov    %eax,%esi
 84d93f7:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84d93fa:	89 04 24             	mov    %eax,(%esp)
 84d93fd:	e8 7e 4a 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d9402:	89 f0                	mov    %esi,%eax
 84d9404:	89 da                	mov    %ebx,%edx
 84d9406:	eb 00                	jmp    84d9408 <_ZN33Inter_LoadBreakAwayPreventMessage12dispatch_sigEP5CUserPci+0x154>
 84d9408:	89 d3                	mov    %edx,%ebx
 84d940a:	89 c6                	mov    %eax,%esi
 84d940c:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84d940f:	89 04 24             	mov    %eax,(%esp)
 84d9412:	e8 69 4a 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d9417:	89 f0                	mov    %esi,%eax
 84d9419:	89 da                	mov    %ebx,%edx
 84d941b:	89 04 24             	mov    %eax,(%esp)
 84d941e:	e8 2d a3 60 00       	call   8ae3750 <_Unwind_Resume>
 84d9423:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84d9426:	89 04 24             	mov    %eax,(%esp)
 84d9429:	e8 52 4a 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d942e:	e9 85 00 00 00       	jmp    84d94b8 <_ZN33Inter_LoadBreakAwayPreventMessage12dispatch_sigEP5CUserPci+0x204>
 84d9433:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84d9436:	89 04 24             	mov    %eax,(%esp)
 84d9439:	e8 0e 49 0b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84d943e:	c7 44 24 08 11 01 00 	movl   $0x111,0x8(%esp)
 84d9445:	00 
 84d9446:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84d944d:	00 
 84d944e:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84d9451:	89 04 24             	mov    %eax,(%esp)
 84d9454:	e8 a3 24 bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84d9459:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d945c:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d9460:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84d9463:	89 04 24             	mov    %eax,(%esp)
 84d9466:	e8 b5 24 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d946b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d9472:	00 
 84d9473:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84d9476:	89 04 24             	mov    %eax,(%esp)
 84d9479:	e8 da 24 bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84d947e:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84d9481:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d9485:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d9488:	89 04 24             	mov    %eax,(%esp)
 84d948b:	e8 2a f1 16 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84d9490:	eb 1b                	jmp    84d94ad <_ZN33Inter_LoadBreakAwayPreventMessage12dispatch_sigEP5CUserPci+0x1f9>
 84d9492:	89 d3                	mov    %edx,%ebx
 84d9494:	89 c6                	mov    %eax,%esi
 84d9496:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84d9499:	89 04 24             	mov    %eax,(%esp)
 84d949c:	e8 df 49 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d94a1:	89 f0                	mov    %esi,%eax
 84d94a3:	89 da                	mov    %ebx,%edx
 84d94a5:	89 04 24             	mov    %eax,(%esp)
 84d94a8:	e8 a3 a2 60 00       	call   8ae3750 <_Unwind_Resume>
 84d94ad:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84d94b0:	89 04 24             	mov    %eax,(%esp)
 84d94b3:	e8 c8 49 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d94b8:	b8 00 00 00 00       	mov    $0x0,%eax
 84d94bd:	83 c4 40             	add    $0x40,%esp
 84d94c0:	5b                   	pop    %ebx
 84d94c1:	5e                   	pop    %esi
 84d94c2:	5d                   	pop    %ebp
 84d94c3:	c3                   	ret

```

```c
// Inter_LoadBreakAwayPreventMessage::dispatch_sig @ 0x84d92b4

/* Inter_LoadBreakAwayPreventMessage::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_LoadBreakAwayPreventMessage::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  PacketGuard local_3c [12];
  PacketGuard local_30 [12];
  PacketGuard local_24 [12];
  int local_18;
  int local_14;
  uint local_10;
  
  if (param_2 != (char *)0x0) {
    local_18 = param_3;
    local_14 = *(int *)(param_3 + 4);
    local_10 = *(uint *)param_3;
    if ((local_14 == 0) || (local_14 == 2)) {
      PacketGuard::PacketGuard(local_24);
                    /* try { // try from 084d9314 to 084d935a has its CatchHandler @ 084d9408 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,0,0x111);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,local_14);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
      CUser::Send((CUser *)param_2,local_24);
      PacketGuard::PacketGuard(local_30);
                    /* try { // try from 084d9371 to 084d93c0 has its CatchHandler @ 084d93f3 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,0,0x136);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_30,0x15180);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,0);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
      CUser::Send((CUser *)param_2,local_30);
      CUser::setBreakAwayDungeonClearCnt((CUser *)param_2,3);
      CUser::setBreakAwayQuestTime((CUser *)param_2,local_10);
                    /* try { // try from 084d93ec to 084d93f0 has its CatchHandler @ 084d9408 */
      PacketGuard::~PacketGuard(local_30);
      PacketGuard::~PacketGuard(local_24);
    }
    else {
      PacketGuard::PacketGuard(local_3c);
                    /* try { // try from 084d9454 to 084d948f has its CatchHandler @ 084d9492 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_3c,0,0x111);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,local_14);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_3c,true);
      CUser::Send((CUser *)param_2,local_3c);
      PacketGuard::~PacketGuard(local_3c);
    }
  }
  return 0;
}

```

