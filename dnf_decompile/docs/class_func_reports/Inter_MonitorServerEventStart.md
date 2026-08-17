# Inter_MonitorServerEventStart

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## SendEventNotiPacket

```asm
// === 084cf2de Inter_MonitorServerEventStart::SendEventNotiPacket  [0x084cf2de-0x84cf3c9] ===
 84cf2de:	55                   	push   %ebp
 84cf2df:	89 e5                	mov    %esp,%ebp
 84cf2e1:	56                   	push   %esi
 84cf2e2:	53                   	push   %ebx
 84cf2e3:	83 ec 30             	sub    $0x30,%esp
 84cf2e6:	8b 4d 08             	mov    0x8(%ebp),%ecx
 84cf2e9:	8b 55 0c             	mov    0xc(%ebp),%edx
 84cf2ec:	8b 45 10             	mov    0x10(%ebp),%eax
 84cf2ef:	88 4d e4             	mov    %cl,-0x1c(%ebp)
 84cf2f2:	66 89 55 e0          	mov    %dx,-0x20(%ebp)
 84cf2f6:	66 89 45 dc          	mov    %ax,-0x24(%ebp)
 84cf2fa:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84cf2fd:	89 04 24             	mov    %eax,(%esp)
 84cf300:	e8 47 ea 0b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84cf305:	c7 44 24 08 45 00 00 	movl   $0x45,0x8(%esp)
 84cf30c:	00 
 84cf30d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84cf314:	00 
 84cf315:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84cf318:	89 04 24             	mov    %eax,(%esp)
 84cf31b:	e8 dc c5 bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84cf320:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
 84cf324:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cf328:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84cf32b:	89 04 24             	mov    %eax,(%esp)
 84cf32e:	e8 ed c5 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84cf333:	0f bf 45 e0          	movswl -0x20(%ebp),%eax
 84cf337:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cf33b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84cf33e:	89 04 24             	mov    %eax,(%esp)
 84cf341:	e8 5e ab c0 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 84cf346:	0f bf 45 dc          	movswl -0x24(%ebp),%eax
 84cf34a:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cf34e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84cf351:	89 04 24             	mov    %eax,(%esp)
 84cf354:	e8 4b ab c0 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 84cf359:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84cf360:	00 
 84cf361:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84cf364:	89 04 24             	mov    %eax,(%esp)
 84cf367:	e8 ec c5 bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84cf36c:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 84cf370:	75 16                	jne    84cf388 <_ZN29Inter_MonitorServerEventStart19SendEventNotiPacketEbssP5CUser+0xaa>
 84cf372:	e8 30 b0 c0 ff       	call   80da3a7 <_Z11G_GameWorldv>
 84cf377:	8d 55 ec             	lea    -0x14(%ebp),%edx
 84cf37a:	89 54 24 04          	mov    %edx,0x4(%esp)
 84cf37e:	89 04 24             	mov    %eax,(%esp)
 84cf381:	e8 8e 98 1f 00       	call   86c8c14 <_ZN9GameWorld8send_allER11PacketGuard>
 84cf386:	eb 2f                	jmp    84cf3b7 <_ZN29Inter_MonitorServerEventStart19SendEventNotiPacketEbssP5CUser+0xd9>
 84cf388:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84cf38b:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cf38f:	8b 45 14             	mov    0x14(%ebp),%eax
 84cf392:	89 04 24             	mov    %eax,(%esp)
 84cf395:	e8 20 92 17 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84cf39a:	eb 1b                	jmp    84cf3b7 <_ZN29Inter_MonitorServerEventStart19SendEventNotiPacketEbssP5CUser+0xd9>
 84cf39c:	89 d3                	mov    %edx,%ebx
 84cf39e:	89 c6                	mov    %eax,%esi
 84cf3a0:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84cf3a3:	89 04 24             	mov    %eax,(%esp)
 84cf3a6:	e8 d5 ea 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84cf3ab:	89 f0                	mov    %esi,%eax
 84cf3ad:	89 da                	mov    %ebx,%edx
 84cf3af:	89 04 24             	mov    %eax,(%esp)
 84cf3b2:	e8 99 43 61 00       	call   8ae3750 <_Unwind_Resume>
 84cf3b7:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84cf3ba:	89 04 24             	mov    %eax,(%esp)
 84cf3bd:	e8 be ea 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84cf3c2:	83 c4 30             	add    $0x30,%esp
 84cf3c5:	5b                   	pop    %ebx
 84cf3c6:	5e                   	pop    %esi
 84cf3c7:	5d                   	pop    %ebp
 84cf3c8:	c3                   	ret
 84cf3c9:	90                   	nop

```

```c
// Inter_MonitorServerEventStart::SendEventNotiPacket @ 0x84cf2de

/* Inter_MonitorServerEventStart::SendEventNotiPacket(bool, short, short, CUser*) */

void Inter_MonitorServerEventStart::SendEventNotiPacket
               (bool param_1,short param_2,short param_3,CUser *param_4)

{
  GameWorld *this;
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 084cf31b to 084cf399 has its CatchHandler @ 084cf39c */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x45);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,(uint)param_1);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,(int)param_2);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,(int)param_3);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  if (param_4 == (CUser *)0x0) {
    this = (GameWorld *)G_GameWorld();
    GameWorld::send_all(this,local_18);
  }
  else {
    CUser::Send(param_4,local_18);
  }
  PacketGuard::~PacketGuard(local_18);
  return;
}

```

---

## dispatch_sig

```asm
// === 084cf3ca Inter_MonitorServerEventStart::dispatch_sig  [0x084cf3ca-0x84cf545] ===
 84cf3ca:	55                   	push   %ebp
 84cf3cb:	89 e5                	mov    %esp,%ebp
 84cf3cd:	57                   	push   %edi
 84cf3ce:	56                   	push   %esi
 84cf3cf:	53                   	push   %ebx
 84cf3d0:	83 ec 5c             	sub    $0x5c,%esp
 84cf3d3:	8b 45 10             	mov    0x10(%ebp),%eax
 84cf3d6:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84cf3d9:	8d 45 b8             	lea    -0x48(%ebp),%eax
 84cf3dc:	89 04 24             	mov    %eax,(%esp)
 84cf3df:	e8 68 e9 0b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84cf3e4:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84cf3e7:	8b 40 0a             	mov    0xa(%eax),%eax
 84cf3ea:	83 f8 01             	cmp    $0x1,%eax
 84cf3ed:	0f 85 de 00 00 00    	jne    84cf4d1 <_ZN29Inter_MonitorServerEventStart12dispatch_sigEP5CUserPci+0x107>
 84cf3f3:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84cf3f6:	0f b7 40 10          	movzwl 0x10(%eax),%eax
 84cf3fa:	0f bf d0             	movswl %ax,%edx
 84cf3fd:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84cf400:	8b 40 0a             	mov    0xa(%eax),%eax
 84cf403:	98                   	cwtl
 84cf404:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84cf40b:	00 
 84cf40c:	89 54 24 08          	mov    %edx,0x8(%esp)
 84cf410:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cf414:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84cf41b:	e8 be fe ff ff       	call   84cf2de <_ZN29Inter_MonitorServerEventStart19SendEventNotiPacketEbssP5CUser>
 84cf420:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84cf423:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 84cf427:	0f b7 c0             	movzwl %ax,%eax
 84cf42a:	89 04 24             	mov    %eax,(%esp)
 84cf42d:	e8 16 9e 01 00       	call   84e9248 <_ZN12CServerEvent10AddExpRateEi>
 84cf432:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84cf435:	0f b7 40 10          	movzwl 0x10(%eax),%eax
 84cf439:	0f b7 d0             	movzwl %ax,%edx
 84cf43c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84cf43f:	8b 40 0a             	mov    0xa(%eax),%eax
 84cf442:	89 54 24 04          	mov    %edx,0x4(%esp)
 84cf446:	89 04 24             	mov    %eax,(%esp)
 84cf449:	e8 11 9e 01 00       	call   84e925f <_ZN12CServerEvent11TurnOnEventEii>
 84cf44e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84cf451:	8b 78 0a             	mov    0xa(%eax),%edi
 84cf454:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84cf457:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 84cf45b:	0f b7 f0             	movzwl %ax,%esi
 84cf45e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84cf461:	0f b7 40 10          	movzwl 0x10(%eax),%eax
 84cf465:	0f b7 d8             	movzwl %ax,%ebx
 84cf468:	e8 0f 70 c2 ff       	call   80f647c <_Z12G_TimerQueuev>
 84cf46d:	89 7c 24 18          	mov    %edi,0x18(%esp)
 84cf471:	89 74 24 14          	mov    %esi,0x14(%esp)
 84cf475:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 84cf479:	c7 44 24 0c 53 00 00 	movl   $0x53,0xc(%esp)
 84cf480:	00 
 84cf481:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84cf488:	00 
 84cf489:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84cf490:	00 
 84cf491:	89 04 24             	mov    %eax,(%esp)
 84cf494:	e8 7d 19 16 00       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 84cf499:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84cf4a0:	00 
 84cf4a1:	c7 44 24 08 48 2c 00 	movl   $0x2c48,0x8(%esp)
 84cf4a8:	00 
 84cf4a9:	c7 44 24 04 e0 ce c8 	movl   $0x8c8cee0,0x4(%esp)
 84cf4b0:	08 
 84cf4b1:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84cf4b4:	89 04 24             	mov    %eax,(%esp)
 84cf4b7:	e8 5c 02 08 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84cf4bc:	c7 44 24 04 ba 8a c8 	movl   $0x8c88aba,0x4(%esp)
 84cf4c3:	08 
 84cf4c4:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84cf4c7:	89 04 24             	mov    %eax,(%esp)
 84cf4ca:	e8 b9 02 08 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84cf4cf:	eb 40                	jmp    84cf511 <_ZN29Inter_MonitorServerEventStart12dispatch_sigEP5CUserPci+0x147>
 84cf4d1:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84cf4d4:	8b 58 0a             	mov    0xa(%eax),%ebx
 84cf4d7:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 84cf4de:	00 
 84cf4df:	c7 44 24 08 4b 2c 00 	movl   $0x2c4b,0x8(%esp)
 84cf4e6:	00 
 84cf4e7:	c7 44 24 04 e0 ce c8 	movl   $0x8c8cee0,0x4(%esp)
 84cf4ee:	08 
 84cf4ef:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84cf4f2:	89 04 24             	mov    %eax,(%esp)
 84cf4f5:	e8 1e 02 08 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84cf4fa:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84cf4fe:	c7 44 24 04 cc 8a c8 	movl   $0x8c88acc,0x4(%esp)
 84cf505:	08 
 84cf506:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84cf509:	89 04 24             	mov    %eax,(%esp)
 84cf50c:	e8 77 02 08 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84cf511:	bb 00 00 00 00       	mov    $0x0,%ebx
 84cf516:	8d 45 b8             	lea    -0x48(%ebp),%eax
 84cf519:	89 04 24             	mov    %eax,(%esp)
 84cf51c:	e8 5f e9 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84cf521:	89 d8                	mov    %ebx,%eax
 84cf523:	83 c4 5c             	add    $0x5c,%esp
 84cf526:	5b                   	pop    %ebx
 84cf527:	5e                   	pop    %esi
 84cf528:	5f                   	pop    %edi
 84cf529:	5d                   	pop    %ebp
 84cf52a:	c3                   	ret
 84cf52b:	89 d3                	mov    %edx,%ebx
 84cf52d:	89 c6                	mov    %eax,%esi
 84cf52f:	8d 45 b8             	lea    -0x48(%ebp),%eax
 84cf532:	89 04 24             	mov    %eax,(%esp)
 84cf535:	e8 46 e9 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84cf53a:	89 f0                	mov    %esi,%eax
 84cf53c:	89 da                	mov    %ebx,%edx
 84cf53e:	89 04 24             	mov    %eax,(%esp)
 84cf541:	e8 0a 42 61 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// Inter_MonitorServerEventStart::dispatch_sig @ 0x84cf3ca

/* Inter_MonitorServerEventStart::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_MonitorServerEventStart::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  TimerQueue *pTVar4;
  PacketGuard local_4c [12];
  cMyTrace local_40 [16];
  cMyTrace local_30 [16];
  int local_20;
  
  local_20 = param_3;
  PacketGuard::PacketGuard(local_4c);
  if (*(int *)(local_20 + 10) == 1) {
                    /* try { // try from 084cf41b to 084cf510 has its CatchHandler @ 084cf52b */
    SendEventNotiPacket(true,(short)*(undefined4 *)(local_20 + 10),*(short *)(local_20 + 0x10),
                        (CUser *)0x0);
    CServerEvent::AddExpRate((uint)*(ushort *)(local_20 + 0xe));
    CServerEvent::TurnOnEvent(*(int *)(local_20 + 10),(uint)*(ushort *)(local_20 + 0x10));
    uVar3 = *(undefined4 *)(local_20 + 10);
    uVar1 = *(undefined2 *)(local_20 + 0xe);
    uVar2 = *(undefined2 *)(local_20 + 0x10);
    pTVar4 = (TimerQueue *)G_TimerQueue();
    TimerQueue::InsertTimer(pTVar4,2,0,0x53,uVar2,uVar1,uVar3);
    cMyTrace::cMyTrace(local_40,
                       "virtual int Inter_MonitorServerEventStart::dispatch_sig(CUser*, char*, int)"
                       ,0x2c48,0);
    cMyTrace::operator()(local_40,"X-Mas Event Start");
  }
  else {
    uVar3 = *(undefined4 *)(local_20 + 10);
    cMyTrace::cMyTrace(local_30,
                       "virtual int Inter_MonitorServerEventStart::dispatch_sig(CUser*, char*, int)"
                       ,0x2c4b,5);
    cMyTrace::operator()(local_30,"Unknown ServerEvent (%d)",uVar3);
  }
  PacketGuard::~PacketGuard(local_4c);
  return 0;
}

```

