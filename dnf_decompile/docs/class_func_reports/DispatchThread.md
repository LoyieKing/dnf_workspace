# DispatchThread

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## DispatchThread

```asm
// === 0847e268 DispatchThread::DispatchThread  [0x0847e268-0x847e283] ===
 847e268:	55                   	push   %ebp
 847e269:	89 e5                	mov    %esp,%ebp
 847e26b:	83 ec 18             	sub    $0x18,%esp
 847e26e:	8b 45 08             	mov    0x8(%ebp),%eax
 847e271:	89 04 24             	mov    %eax,(%esp)
 847e274:	e8 bf 28 1b 00       	call   8630b38 <_ZN15ThreadInterfaceC1Ev>
 847e279:	8b 45 08             	mov    0x8(%ebp),%eax
 847e27c:	c7 00 a0 1c c7 08    	movl   $0x8c71ca0,(%eax)
 847e282:	c9                   	leave
 847e283:	c3                   	ret

```

```c
// DispatchThread::DispatchThread @ 0x847e268

/* DispatchThread::DispatchThread() */

void __thiscall DispatchThread::DispatchThread(DispatchThread *this)

{
  ThreadInterface::ThreadInterface((ThreadInterface *)this);
  *(undefined ***)this = &PTR_stop_08c71ca0;
  return;
}

```

---

## dispatch

```asm
// === 0847e2d2 DispatchThread::dispatch  [0x0847e2d2-0x847e7ff] ===
 847e2d2:	55                   	push   %ebp
 847e2d3:	89 e5                	mov    %esp,%ebp
 847e2d5:	57                   	push   %edi
 847e2d6:	56                   	push   %esi
 847e2d7:	53                   	push   %ebx
 847e2d8:	81 ec fc 01 00 00    	sub    $0x1fc,%esp
 847e2de:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 847e2e4:	89 04 24             	mov    %eax,(%esp)
 847e2e7:	e8 70 05 00 00       	call   847e85c <_ZN10TimerEntryC1Ev>
 847e2ec:	c6 45 cd 00          	movb   $0x0,-0x33(%ebp)
 847e2f0:	66 c7 45 ce 00 00    	movw   $0x0,-0x32(%ebp)
 847e2f6:	c7 44 24 04 10 27 00 	movl   $0x2710,0x4(%esp)
 847e2fd:	00 
 847e2fe:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 847e304:	89 04 24             	mov    %eax,(%esp)
 847e307:	e8 2a fb fc ff       	call   844de36 <_ZN15message_counter15CMessageCounterC1Ei>
 847e30c:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 847e313:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 847e31a:	e8 7f d9 c4 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 847e31f:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 847e322:	e8 5a de c4 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 847e327:	89 04 24             	mov    %eax,(%esp)
 847e32a:	e8 6b c0 c5 ff       	call   80da39a <_ZN12CEnvironment13get_file_nameEv>
 847e32f:	c7 44 24 08 8f 0f c7 	movl   $0x8c70f8f,0x8(%esp)
 847e336:	08 
 847e337:	89 44 24 04          	mov    %eax,0x4(%esp)
 847e33b:	8d 85 30 fe ff ff    	lea    -0x1d0(%ebp),%eax
 847e341:	89 04 24             	mov    %eax,(%esp)
 847e344:	e8 89 05 00 00       	call   847e8d2 <_ZN15message_counter18CUserPacketCounterC1EPcS1_>
 847e349:	8d 85 30 fe ff ff    	lea    -0x1d0(%ebp),%eax
 847e34f:	a3 18 2d 47 09       	mov    %eax,0x9472d18
 847e354:	e8 1b 16 0f 00       	call   856f974 <_ZN15message_counter13CTimeInterval6CreateEv>
 847e359:	89 45 d8             	mov    %eax,-0x28(%ebp)
 847e35c:	e9 21 04 00 00       	jmp    847e782 <_ZN14DispatchThread8dispatchEPv+0x4b0>
 847e361:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 847e368:	e8 5b 85 e2 ff       	call   82a68c8 <_ZN11CSystemTime6updateEv>
 847e36d:	e8 0a 81 c7 ff       	call   80f647c <_Z12G_TimerQueuev>
 847e372:	8d 95 70 ff ff ff    	lea    -0x90(%ebp),%edx
 847e378:	89 54 24 04          	mov    %edx,0x4(%esp)
 847e37c:	89 04 24             	mov    %eax,(%esp)
 847e37f:	e8 48 2b 1b 00       	call   8630ecc <_ZN10TimerQueue12GetTimerMessER10TimerEntry>
 847e384:	84 c0                	test   %al,%al
 847e386:	74 70                	je     847e3f8 <_ZN14DispatchThread8dispatchEPv+0x126>
 847e388:	8b 45 d8             	mov    -0x28(%ebp),%eax
 847e38b:	8b 00                	mov    (%eax),%eax
 847e38d:	8b 10                	mov    (%eax),%edx
 847e38f:	8b 45 d8             	mov    -0x28(%ebp),%eax
 847e392:	89 04 24             	mov    %eax,(%esp)
 847e395:	ff d2                	call   *%edx
 847e397:	e8 28 05 00 00       	call   847e8c4 <_Z17G_TimerDispatcherv>
 847e39c:	8d 95 70 ff ff ff    	lea    -0x90(%ebp),%edx
 847e3a2:	89 54 24 04          	mov    %edx,0x4(%esp)
 847e3a6:	89 04 24             	mov    %eax,(%esp)
 847e3a9:	e8 6a 46 1b 00       	call   8632a18 <_ZN15TimerDispatcher8dispatchER10TimerEntry>
 847e3ae:	8b 45 d8             	mov    -0x28(%ebp),%eax
 847e3b1:	8b 00                	mov    (%eax),%eax
 847e3b3:	83 c0 04             	add    $0x4,%eax
 847e3b6:	8b 10                	mov    (%eax),%edx
 847e3b8:	8b 45 d8             	mov    -0x28(%ebp),%eax
 847e3bb:	89 04 24             	mov    %eax,(%esp)
 847e3be:	ff d2                	call   *%edx
 847e3c0:	8b 8d 78 ff ff ff    	mov    -0x88(%ebp),%ecx
 847e3c6:	66 81 c1 30 75       	add    $0x7530,%cx
 847e3cb:	0f b7 c9             	movzwl %cx,%ecx
 847e3ce:	89 44 24 10          	mov    %eax,0x10(%esp)
 847e3d2:	89 54 24 14          	mov    %edx,0x14(%esp)
 847e3d6:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 847e3da:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 847e3e1:	00 
 847e3e2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 847e3e9:	00 
 847e3ea:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 847e3f0:	89 04 24             	mov    %eax,(%esp)
 847e3f3:	e8 cc 15 0f 00       	call   856f9c4 <_ZN15message_counter15CMessageCounter15IncreaseMessageEjhtx>
 847e3f8:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 847e3fd:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 847e404:	00 
 847e405:	89 04 24             	mov    %eax,(%esp)
 847e408:	e8 a1 2c 0f 00       	call   85710ae <_ZN11MsgQueueMgr3getENS_9QUEUE_IDXE>
 847e40d:	89 45 dc             	mov    %eax,-0x24(%ebp)
 847e410:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 847e414:	75 11                	jne    847e427 <_ZN14DispatchThread8dispatchEPv+0x155>
 847e416:	c7 04 24 64 00 00 00 	movl   $0x64,(%esp)
 847e41d:	e8 d8 e0 10 00       	call   858c4fa <_ZN6OS_API6uSleepEj>
 847e422:	e9 5b 03 00 00       	jmp    847e782 <_ZN14DispatchThread8dispatchEPv+0x4b0>
 847e427:	8b 45 dc             	mov    -0x24(%ebp),%eax
 847e42a:	89 04 24             	mov    %eax,(%esp)
 847e42d:	e8 a2 d9 19 00       	call   861bdd4 <_ZN6Stream6lengthEv>
 847e432:	89 45 e0             	mov    %eax,-0x20(%ebp)
 847e435:	8b 45 dc             	mov    -0x24(%ebp),%eax
 847e438:	8b 40 20             	mov    0x20(%eax),%eax
 847e43b:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 847e43e:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 847e444:	89 44 24 04          	mov    %eax,0x4(%esp)
 847e448:	8b 45 dc             	mov    -0x24(%ebp),%eax
 847e44b:	89 04 24             	mov    %eax,(%esp)
 847e44e:	e8 71 e1 19 00       	call   861c5c4 <_ZN6StreamrsERi>
 847e453:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 847e459:	89 44 24 04          	mov    %eax,0x4(%esp)
 847e45d:	8b 45 dc             	mov    -0x24(%ebp),%eax
 847e460:	89 04 24             	mov    %eax,(%esp)
 847e463:	e8 5c e1 19 00       	call   861c5c4 <_ZN6StreamrsERi>
 847e468:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 847e46f:	e8 2a d8 c4 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 847e474:	89 45 d0             	mov    %eax,-0x30(%ebp)
 847e477:	8b 45 d8             	mov    -0x28(%ebp),%eax
 847e47a:	8b 00                	mov    (%eax),%eax
 847e47c:	8b 10                	mov    (%eax),%edx
 847e47e:	8b 45 d8             	mov    -0x28(%ebp),%eax
 847e481:	89 04 24             	mov    %eax,(%esp)
 847e484:	ff d2                	call   *%edx
 847e486:	8b 85 6c ff ff ff    	mov    -0x94(%ebp),%eax
 847e48c:	85 c0                	test   %eax,%eax
 847e48e:	75 61                	jne    847e4f1 <_ZN14DispatchThread8dispatchEPv+0x21f>
 847e490:	8b 45 dc             	mov    -0x24(%ebp),%eax
 847e493:	89 04 24             	mov    %eax,(%esp)
 847e496:	e8 15 e4 19 00       	call   861c8b0 <_ZN6Stream10get_bufferEv>
 847e49b:	0f b6 00             	movzbl (%eax),%eax
 847e49e:	88 45 cd             	mov    %al,-0x33(%ebp)
 847e4a1:	8b 45 dc             	mov    -0x24(%ebp),%eax
 847e4a4:	89 04 24             	mov    %eax,(%esp)
 847e4a7:	e8 04 e4 19 00       	call   861c8b0 <_ZN6Stream10get_bufferEv>
 847e4ac:	83 c0 01             	add    $0x1,%eax
 847e4af:	0f b7 00             	movzwl (%eax),%eax
 847e4b2:	66 89 45 ce          	mov    %ax,-0x32(%ebp)
 847e4b6:	8b 45 dc             	mov    -0x24(%ebp),%eax
 847e4b9:	89 04 24             	mov    %eax,(%esp)
 847e4bc:	e8 13 d9 19 00       	call   861bdd4 <_ZN6Stream6lengthEv>
 847e4c1:	89 c6                	mov    %eax,%esi
 847e4c3:	8b 45 dc             	mov    -0x24(%ebp),%eax
 847e4c6:	89 04 24             	mov    %eax,(%esp)
 847e4c9:	e8 e2 e3 19 00       	call   861c8b0 <_ZN6Stream10get_bufferEv>
 847e4ce:	89 c3                	mov    %eax,%ebx
 847e4d0:	8b bd 68 ff ff ff    	mov    -0x98(%ebp),%edi
 847e4d6:	e8 63 60 db ff       	call   823453e <_Z18G_PacketDispatcherv>
 847e4db:	89 74 24 0c          	mov    %esi,0xc(%esp)
 847e4df:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 847e4e3:	89 7c 24 04          	mov    %edi,0x4(%esp)
 847e4e7:	89 04 24             	mov    %eax,(%esp)
 847e4ea:	e8 63 69 11 00       	call   8594e52 <_ZN16PacketDispatcher8dispatchEiPci>
 847e4ef:	eb 59                	jmp    847e54a <_ZN14DispatchThread8dispatchEPv+0x278>
 847e4f1:	c6 45 cd 00          	movb   $0x0,-0x33(%ebp)
 847e4f5:	66 c7 45 ce 00 00    	movw   $0x0,-0x32(%ebp)
 847e4fb:	8b 45 dc             	mov    -0x24(%ebp),%eax
 847e4fe:	89 04 24             	mov    %eax,(%esp)
 847e501:	e8 ce d8 19 00       	call   861bdd4 <_ZN6Stream6lengthEv>
 847e506:	89 c6                	mov    %eax,%esi
 847e508:	8b 45 dc             	mov    -0x24(%ebp),%eax
 847e50b:	89 04 24             	mov    %eax,(%esp)
 847e50e:	e8 9d e3 19 00       	call   861c8b0 <_ZN6Stream10get_bufferEv>
 847e513:	89 c3                	mov    %eax,%ebx
 847e515:	8b 85 68 ff ff ff    	mov    -0x98(%ebp),%eax
 847e51b:	89 85 24 fe ff ff    	mov    %eax,-0x1dc(%ebp)
 847e521:	8b bd 6c ff ff ff    	mov    -0x94(%ebp),%edi
 847e527:	e8 8b 03 00 00       	call   847e8b7 <_Z17G_InterDispatcherv>
 847e52c:	89 74 24 10          	mov    %esi,0x10(%esp)
 847e530:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 847e534:	8b 95 24 fe ff ff    	mov    -0x1dc(%ebp),%edx
 847e53a:	89 54 24 08          	mov    %edx,0x8(%esp)
 847e53e:	89 7c 24 04          	mov    %edi,0x4(%esp)
 847e542:	89 04 24             	mov    %eax,(%esp)
 847e545:	e8 26 04 04 00       	call   84be970 <_ZN15InterDispatcher8dispatchEiiPci>
 847e54a:	8b 45 d8             	mov    -0x28(%ebp),%eax
 847e54d:	8b 00                	mov    (%eax),%eax
 847e54f:	83 c0 04             	add    $0x4,%eax
 847e552:	8b 10                	mov    (%eax),%edx
 847e554:	8b 45 d8             	mov    -0x28(%ebp),%eax
 847e557:	89 04 24             	mov    %eax,(%esp)
 847e55a:	ff d2                	call   *%edx
 847e55c:	0f b7 75 ce          	movzwl -0x32(%ebp),%esi
 847e560:	0f b6 5d cd          	movzbl -0x33(%ebp),%ebx
 847e564:	8b 8d 6c ff ff ff    	mov    -0x94(%ebp),%ecx
 847e56a:	89 44 24 10          	mov    %eax,0x10(%esp)
 847e56e:	89 54 24 14          	mov    %edx,0x14(%esp)
 847e572:	89 74 24 0c          	mov    %esi,0xc(%esp)
 847e576:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 847e57a:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 847e57e:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 847e584:	89 04 24             	mov    %eax,(%esp)
 847e587:	e8 38 14 0f 00       	call   856f9c4 <_ZN15message_counter15CMessageCounter15IncreaseMessageEjhtx>
 847e58c:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 847e58f:	8b 55 d0             	mov    -0x30(%ebp),%edx
 847e592:	89 d1                	mov    %edx,%ecx
 847e594:	29 c1                	sub    %eax,%ecx
 847e596:	89 c8                	mov    %ecx,%eax
 847e598:	3d 58 02 00 00       	cmp    $0x258,%eax
 847e59d:	7e 78                	jle    847e617 <_ZN14DispatchThread8dispatchEPv+0x345>
 847e59f:	8b 45 d0             	mov    -0x30(%ebp),%eax
 847e5a2:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 847e5a5:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 847e5ab:	89 04 24             	mov    %eax,(%esp)
 847e5ae:	e8 fd 15 0f 00       	call   856fbb0 <_ZN15message_counter15CMessageCounter8WriteLogEv>
 847e5b3:	8d 85 30 fe ff ff    	lea    -0x1d0(%ebp),%eax
 847e5b9:	89 04 24             	mov    %eax,(%esp)
 847e5bc:	e8 2f 1a 0f 00       	call   856fff0 <_ZN15message_counter18CUserPacketCounter8WriteLogEv>
 847e5c1:	e8 b6 7e c7 ff       	call   80f647c <_Z12G_TimerQueuev>
 847e5c6:	89 04 24             	mov    %eax,(%esp)
 847e5c9:	e8 d6 02 00 00       	call   847e8a4 <_ZN10TimerQueue12GetQueueSizeEv>
 847e5ce:	89 c3                	mov    %eax,%ebx
 847e5d0:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 847e5d7:	00 
 847e5d8:	c7 44 24 08 8f 00 00 	movl   $0x8f,0x8(%esp)
 847e5df:	00 
 847e5e0:	c7 44 24 04 60 1c c7 	movl   $0x8c71c60,0x4(%esp)
 847e5e7:	08 
 847e5e8:	8d 45 8c             	lea    -0x74(%ebp),%eax
 847e5eb:	89 04 24             	mov    %eax,(%esp)
 847e5ee:	e8 25 11 0d 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 847e5f3:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 847e5f7:	c7 44 24 04 a1 0f c7 	movl   $0x8c70fa1,0x4(%esp)
 847e5fe:	08 
 847e5ff:	8d 45 8c             	lea    -0x74(%ebp),%eax
 847e602:	89 04 24             	mov    %eax,(%esp)
 847e605:	e8 7e 11 0d 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 847e60a:	e8 6d 7e c7 ff       	call   80f647c <_Z12G_TimerQueuev>
 847e60f:	89 04 24             	mov    %eax,(%esp)
 847e612:	e8 07 2a 1b 00       	call   863101e <_ZN10TimerQueue21write_timer_queue_logEv>
 847e617:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 847e61a:	83 f8 01             	cmp    $0x1,%eax
 847e61d:	74 12                	je     847e631 <_ZN14DispatchThread8dispatchEPv+0x35f>
 847e61f:	83 f8 02             	cmp    $0x2,%eax
 847e622:	0f 84 ec 00 00 00    	je     847e714 <_ZN14DispatchThread8dispatchEPv+0x442>
 847e628:	85 c0                	test   %eax,%eax
 847e62a:	74 78                	je     847e6a4 <_ZN14DispatchThread8dispatchEPv+0x3d2>
 847e62c:	e9 51 01 00 00       	jmp    847e782 <_ZN14DispatchThread8dispatchEPv+0x4b0>
 847e631:	81 7d e0 ff 0f 00 00 	cmpl   $0xfff,-0x20(%ebp)
 847e638:	7e 51                	jle    847e68b <_ZN14DispatchThread8dispatchEPv+0x3b9>
 847e63a:	8b b5 68 ff ff ff    	mov    -0x98(%ebp),%esi
 847e640:	8b 9d 6c ff ff ff    	mov    -0x94(%ebp),%ebx
 847e646:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 847e64d:	00 
 847e64e:	c7 44 24 08 9e 00 00 	movl   $0x9e,0x8(%esp)
 847e655:	00 
 847e656:	c7 44 24 04 60 1c c7 	movl   $0x8c71c60,0x4(%esp)
 847e65d:	08 
 847e65e:	8d 45 9c             	lea    -0x64(%ebp),%eax
 847e661:	89 04 24             	mov    %eax,(%esp)
 847e664:	e8 af 10 0d 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 847e669:	8b 45 e0             	mov    -0x20(%ebp),%eax
 847e66c:	89 44 24 10          	mov    %eax,0x10(%esp)
 847e670:	89 74 24 0c          	mov    %esi,0xc(%esp)
 847e674:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 847e678:	c7 44 24 04 b8 0f c7 	movl   $0x8c70fb8,0x4(%esp)
 847e67f:	08 
 847e680:	8d 45 9c             	lea    -0x64(%ebp),%eax
 847e683:	89 04 24             	mov    %eax,(%esp)
 847e686:	e8 fd 10 0d 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 847e68b:	a1 a8 bd 40 09       	mov    0x940bda8,%eax
 847e690:	8b 55 dc             	mov    -0x24(%ebp),%edx
 847e693:	89 54 24 04          	mov    %edx,0x4(%esp)
 847e697:	89 04 24             	mov    %eax,(%esp)
 847e69a:	e8 65 19 e1 ff       	call   8290004 <_ZN15SmallStreamPool4FreeEP6Stream>
 847e69f:	e9 de 00 00 00       	jmp    847e782 <_ZN14DispatchThread8dispatchEPv+0x4b0>
 847e6a4:	81 7d e0 ff 3f 00 00 	cmpl   $0x3fff,-0x20(%ebp)
 847e6ab:	7e 51                	jle    847e6fe <_ZN14DispatchThread8dispatchEPv+0x42c>
 847e6ad:	8b b5 68 ff ff ff    	mov    -0x98(%ebp),%esi
 847e6b3:	8b 9d 6c ff ff ff    	mov    -0x94(%ebp),%ebx
 847e6b9:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 847e6c0:	00 
 847e6c1:	c7 44 24 08 a8 00 00 	movl   $0xa8,0x8(%esp)
 847e6c8:	00 
 847e6c9:	c7 44 24 04 60 1c c7 	movl   $0x8c71c60,0x4(%esp)
 847e6d0:	08 
 847e6d1:	8d 45 ac             	lea    -0x54(%ebp),%eax
 847e6d4:	89 04 24             	mov    %eax,(%esp)
 847e6d7:	e8 3c 10 0d 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 847e6dc:	8b 45 e0             	mov    -0x20(%ebp),%eax
 847e6df:	89 44 24 10          	mov    %eax,0x10(%esp)
 847e6e3:	89 74 24 0c          	mov    %esi,0xc(%esp)
 847e6e7:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 847e6eb:	c7 44 24 04 ec 0f c7 	movl   $0x8c70fec,0x4(%esp)
 847e6f2:	08 
 847e6f3:	8d 45 ac             	lea    -0x54(%ebp),%eax
 847e6f6:	89 04 24             	mov    %eax,(%esp)
 847e6f9:	e8 8a 10 0d 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 847e6fe:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 847e703:	8b 55 dc             	mov    -0x24(%ebp),%edx
 847e706:	89 54 24 04          	mov    %edx,0x4(%esp)
 847e70a:	89 04 24             	mov    %eax,(%esp)
 847e70d:	e8 16 14 e1 ff       	call   828fb28 <_ZN10StreamPool4FreeEP6Stream>
 847e712:	eb 6e                	jmp    847e782 <_ZN14DispatchThread8dispatchEPv+0x4b0>
 847e714:	81 7d e0 ff ff 03 00 	cmpl   $0x3ffff,-0x20(%ebp)
 847e71b:	7e 51                	jle    847e76e <_ZN14DispatchThread8dispatchEPv+0x49c>
 847e71d:	8b b5 68 ff ff ff    	mov    -0x98(%ebp),%esi
 847e723:	8b 9d 6c ff ff ff    	mov    -0x94(%ebp),%ebx
 847e729:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 847e730:	00 
 847e731:	c7 44 24 08 b2 00 00 	movl   $0xb2,0x8(%esp)
 847e738:	00 
 847e739:	c7 44 24 04 60 1c c7 	movl   $0x8c71c60,0x4(%esp)
 847e740:	08 
 847e741:	8d 45 bc             	lea    -0x44(%ebp),%eax
 847e744:	89 04 24             	mov    %eax,(%esp)
 847e747:	e8 cc 0f 0d 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 847e74c:	8b 45 e0             	mov    -0x20(%ebp),%eax
 847e74f:	89 44 24 10          	mov    %eax,0x10(%esp)
 847e753:	89 74 24 0c          	mov    %esi,0xc(%esp)
 847e757:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 847e75b:	c7 44 24 04 24 10 c7 	movl   $0x8c71024,0x4(%esp)
 847e762:	08 
 847e763:	8d 45 bc             	lea    -0x44(%ebp),%eax
 847e766:	89 04 24             	mov    %eax,(%esp)
 847e769:	e8 1a 10 0d 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 847e76e:	a1 a4 bd 40 09       	mov    0x940bda4,%eax
 847e773:	8b 55 dc             	mov    -0x24(%ebp),%edx
 847e776:	89 54 24 04          	mov    %edx,0x4(%esp)
 847e77a:	89 04 24             	mov    %eax,(%esp)
 847e77d:	e8 82 1b e1 ff       	call   8290304 <_ZN13BigStreamPool4FreeEP6Stream>
 847e782:	0f b6 05 64 bd 40 09 	movzbl 0x940bd64,%eax
 847e789:	83 f0 01             	xor    $0x1,%eax
 847e78c:	84 c0                	test   %al,%al
 847e78e:	0f 85 cd fb ff ff    	jne    847e361 <_ZN14DispatchThread8dispatchEPv+0x8f>
 847e794:	8b 45 d8             	mov    -0x28(%ebp),%eax
 847e797:	89 04 24             	mov    %eax,(%esp)
 847e79a:	e8 11 12 0f 00       	call   856f9b0 <_ZN15message_counter13CTimeInterval7DestoryEPS0_>
 847e79f:	eb 18                	jmp    847e7b9 <_ZN14DispatchThread8dispatchEPv+0x4e7>
 847e7a1:	89 d3                	mov    %edx,%ebx
 847e7a3:	89 c6                	mov    %eax,%esi
 847e7a5:	8d 85 30 fe ff ff    	lea    -0x1d0(%ebp),%eax
 847e7ab:	89 04 24             	mov    %eax,(%esp)
 847e7ae:	e8 63 01 00 00       	call   847e916 <_ZN15message_counter18CUserPacketCounterD1Ev>
 847e7b3:	89 f0                	mov    %esi,%eax
 847e7b5:	89 da                	mov    %ebx,%edx
 847e7b7:	eb 10                	jmp    847e7c9 <_ZN14DispatchThread8dispatchEPv+0x4f7>
 847e7b9:	8d 85 30 fe ff ff    	lea    -0x1d0(%ebp),%eax
 847e7bf:	89 04 24             	mov    %eax,(%esp)
 847e7c2:	e8 4f 01 00 00       	call   847e916 <_ZN15message_counter18CUserPacketCounterD1Ev>
 847e7c7:	eb 1e                	jmp    847e7e7 <_ZN14DispatchThread8dispatchEPv+0x515>
 847e7c9:	89 d3                	mov    %edx,%ebx
 847e7cb:	89 c6                	mov    %eax,%esi
 847e7cd:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 847e7d3:	89 04 24             	mov    %eax,(%esp)
 847e7d6:	e8 33 18 fd ff       	call   845000e <_ZN15message_counter15CMessageCounterD1Ev>
 847e7db:	89 f0                	mov    %esi,%eax
 847e7dd:	89 da                	mov    %ebx,%edx
 847e7df:	89 04 24             	mov    %eax,(%esp)
 847e7e2:	e8 69 4f 66 00       	call   8ae3750 <_Unwind_Resume>
 847e7e7:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 847e7ed:	89 04 24             	mov    %eax,(%esp)
 847e7f0:	e8 19 18 fd ff       	call   845000e <_ZN15message_counter15CMessageCounterD1Ev>
 847e7f5:	81 c4 fc 01 00 00    	add    $0x1fc,%esp
 847e7fb:	5b                   	pop    %ebx
 847e7fc:	5e                   	pop    %esi
 847e7fd:	5f                   	pop    %edi
 847e7fe:	5d                   	pop    %ebp
 847e7ff:	c3                   	ret

```

```c
// DispatchThread::dispatch @ 0x847e2d2

/* DispatchThread::dispatch(void*) */

void DispatchThread::dispatch(void *param_1)

{
  char cVar1;
  CEnvironment *this;
  char *pcVar2;
  TimerQueue *pTVar3;
  TimerDispatcher *this_00;
  undefined4 uVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  PacketDispatcher *this_01;
  int iVar8;
  InterDispatcher *this_02;
  undefined4 uVar9;
  undefined8 uVar10;
  CUserPacketCounter local_1d4 [284];
  CMessageCounter local_b8 [28];
  int local_9c;
  int local_98;
  TimerEntry local_94 [28];
  cMyTrace local_78 [16];
  cMyTrace local_68 [16];
  cMyTrace local_58 [16];
  cMyTrace local_48 [17];
  byte local_37;
  ushort local_36;
  int local_34;
  int local_30;
  CTimeInterval *local_2c;
  Stream *local_28;
  int local_24;
  int local_20;
  
  TimerEntry::TimerEntry(local_94);
  local_37 = 0;
  local_36 = 0;
  message_counter::CMessageCounter::CMessageCounter(local_b8,10000);
  local_34 = 0;
  local_30 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
                    /* try { // try from 0847e322 to 0847e348 has its CatchHandler @ 0847e7c9 */
  this = (CEnvironment *)G_CEnvironment();
  pcVar2 = (char *)CEnvironment::get_file_name(this);
  message_counter::CUserPacketCounter::CUserPacketCounter(local_1d4,pcVar2,"UserPacketCounter");
  PacketDispatcher::pUserPacketCounter_ = local_1d4;
                    /* try { // try from 0847e354 to 0847e79e has its CatchHandler @ 0847e7a1 */
  local_2c = (CTimeInterval *)message_counter::CTimeInterval::Create();
  while (GlobalData::s_server_stop != '\x01') {
    CSystemTime::update((CSystemTime *)GlobalData::s_systemTime_);
    pTVar3 = (TimerQueue *)G_TimerQueue();
    cVar1 = TimerQueue::GetTimerMess(pTVar3,local_94);
    if (cVar1 != '\0') {
      (*(code *)**(undefined4 **)local_2c)(local_2c);
      this_00 = (TimerDispatcher *)G_TimerDispatcher();
      TimerDispatcher::dispatch(this_00,local_94);
      uVar4 = (**(code **)(*(int *)local_2c + 4))(local_2c);
      message_counter::CMessageCounter::IncreaseMessage
                ((uint)local_b8,'\0',0,CONCAT44(uVar4,(uint)(ushort)((short)local_94._8_4_ + 30000))
                );
    }
    local_28 = (Stream *)MsgQueueMgr::get(GlobalData::s_msgq_mgr,1);
    if (local_28 == (Stream *)0x0) {
      OS_API::uSleep(100);
    }
    else {
      local_24 = Stream::length(local_28);
      local_20 = *(int *)(local_28 + 0x20);
      Stream::operator>>(local_28,&local_98);
      Stream::operator>>(local_28,&local_9c);
      local_34 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      (*(code *)**(undefined4 **)local_2c)(local_2c);
      if (local_98 == 0) {
        pbVar5 = (byte *)Stream::get_buffer(local_28);
        local_37 = *pbVar5;
        iVar6 = Stream::get_buffer(local_28);
        local_36 = *(ushort *)(iVar6 + 1);
        iVar7 = Stream::length(local_28);
        pcVar2 = (char *)Stream::get_buffer(local_28);
        iVar6 = local_9c;
        this_01 = (PacketDispatcher *)G_PacketDispatcher();
        PacketDispatcher::dispatch(this_01,iVar6,pcVar2,iVar7);
      }
      else {
        local_37 = 0;
        local_36 = 0;
        iVar8 = Stream::length(local_28);
        pcVar2 = (char *)Stream::get_buffer(local_28);
        iVar7 = local_98;
        iVar6 = local_9c;
        this_02 = (InterDispatcher *)G_InterDispatcher();
        InterDispatcher::dispatch(this_02,iVar7,iVar6,pcVar2,iVar8);
      }
      uVar10 = (**(code **)(*(int *)local_2c + 4))(local_2c);
      uVar4 = (undefined4)((ulonglong)uVar10 >> 0x20);
      message_counter::CMessageCounter::IncreaseMessage
                ((uint)local_b8,(uchar)local_98,(ushort)local_37,
                 CONCAT44((int)uVar10,(uint)local_36));
      if (600 < local_34 - local_30) {
        local_30 = local_34;
        message_counter::CMessageCounter::WriteLog(local_b8);
        message_counter::CUserPacketCounter::WriteLog(local_1d4);
        pTVar3 = (TimerQueue *)G_TimerQueue();
        uVar9 = TimerQueue::GetQueueSize(pTVar3);
        cMyTrace::cMyTrace(local_78,"virtual void DispatchThread::dispatch(void*)",0x8f,5);
        cMyTrace::operator()(local_78,"timer_queue_count(%u)",uVar9);
        G_TimerQueue();
        TimerQueue::write_timer_queue_log();
      }
      iVar7 = local_98;
      iVar6 = local_9c;
      if (local_20 == 1) {
        if (0xfff < local_24) {
          cMyTrace::cMyTrace(local_68,"virtual void DispatchThread::dispatch(void*)",0x9e,5);
          cMyTrace::operator()
                    (local_68,"Small Stream Size over code(%d), idx(%d), size(%u)",iVar7,iVar6,
                     local_24,uVar4);
        }
        SmallStreamPool::Free(GlobalData::s_small_stream_pool,local_28);
      }
      else if (local_20 == 2) {
        if (0x3ffff < local_24) {
          cMyTrace::cMyTrace(local_48,"virtual void DispatchThread::dispatch(void*)",0xb2,5);
          cMyTrace::operator()
                    (local_48,"Big Stream Size over code(%d), idx(%d), size(%u)",iVar7,iVar6,
                     local_24,uVar4);
        }
        BigStreamPool::Free(GlobalData::s_big_stream_pool,local_28);
      }
      else if (local_20 == 0) {
        if (0x3fff < local_24) {
          cMyTrace::cMyTrace(local_58,"virtual void DispatchThread::dispatch(void*)",0xa8,5);
          cMyTrace::operator()
                    (local_58,"Default Stream Size over code(%d), idx(%d), size(%u)",iVar7,iVar6,
                     local_24,uVar4);
        }
        StreamPool::Free(GlobalData::s_stream_pool,local_28);
      }
    }
  }
  message_counter::CTimeInterval::Destory(local_2c);
                    /* try { // try from 0847e7c2 to 0847e7c6 has its CatchHandler @ 0847e7c9 */
  message_counter::CUserPacketCounter::~CUserPacketCounter(local_1d4);
  message_counter::CMessageCounter::~CMessageCounter(local_b8);
  return;
}

```

---

## ~DispatchThread

```asm
// === 0847e284 DispatchThread::~DispatchThread  [0x0847e284-0x847e2b3] ===
 847e284:	55                   	push   %ebp
 847e285:	89 e5                	mov    %esp,%ebp
 847e287:	83 ec 18             	sub    $0x18,%esp
 847e28a:	8b 45 08             	mov    0x8(%ebp),%eax
 847e28d:	c7 00 a0 1c c7 08    	movl   $0x8c71ca0,(%eax)
 847e293:	8b 45 08             	mov    0x8(%ebp),%eax
 847e296:	89 04 24             	mov    %eax,(%esp)
 847e299:	e8 a8 28 1b 00       	call   8630b46 <_ZN15ThreadInterfaceD1Ev>
 847e29e:	b8 00 00 00 00       	mov    $0x0,%eax
 847e2a3:	84 c0                	test   %al,%al
 847e2a5:	74 0b                	je     847e2b2 <_ZN14DispatchThreadD1Ev+0x2e>
 847e2a7:	8b 45 08             	mov    0x8(%ebp),%eax
 847e2aa:	89 04 24             	mov    %eax,(%esp)
 847e2ad:	e8 3e 62 2a 00       	call   87244f0 <_ZdlPv>
 847e2b2:	c9                   	leave
 847e2b3:	c3                   	ret

```

```c
// DispatchThread::~DispatchThread @ 0x847e284

/* WARNING: Removing unreachable block (ram,0x0847e2a7) */
/* DispatchThread::~DispatchThread() */

void __thiscall DispatchThread::~DispatchThread(DispatchThread *this)

{
  *(undefined ***)this = &PTR_stop_08c71ca0;
  ThreadInterface::~ThreadInterface((ThreadInterface *)this);
  return;
}

```

---

## ~DispatchThread_0847e2b4

```asm
// === 0847e2b4 DispatchThread::~DispatchThread  [0x0847e2b4-0x847e2d1] ===
 847e2b4:	55                   	push   %ebp
 847e2b5:	89 e5                	mov    %esp,%ebp
 847e2b7:	83 ec 18             	sub    $0x18,%esp
 847e2ba:	8b 45 08             	mov    0x8(%ebp),%eax
 847e2bd:	89 04 24             	mov    %eax,(%esp)
 847e2c0:	e8 bf ff ff ff       	call   847e284 <_ZN14DispatchThreadD1Ev>
 847e2c5:	8b 45 08             	mov    0x8(%ebp),%eax
 847e2c8:	89 04 24             	mov    %eax,(%esp)
 847e2cb:	e8 20 62 2a 00       	call   87244f0 <_ZdlPv>
 847e2d0:	c9                   	leave
 847e2d1:	c3                   	ret

```

```c
// DispatchThread::~DispatchThread @ 0x847e2b4

/* DispatchThread::~DispatchThread() */

void __thiscall DispatchThread::~DispatchThread(DispatchThread *this)

{
  ~DispatchThread(this);
  operator_delete(this);
  return;
}

```

