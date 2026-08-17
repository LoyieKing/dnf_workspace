# Inter_PcroomResponse

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## IsShutdonTimeOverLogin

```asm
// === 084db40e Inter_PcroomResponse::IsShutdonTimeOverLogin  [0x084db40e-0x84db451] ===
 84db40e:	55                   	push   %ebp
 84db40f:	89 e5                	mov    %esp,%ebp
 84db411:	83 ec 58             	sub    $0x58,%esp
 84db414:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 84db41b:	e8 7e 08 bf ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 84db420:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84db423:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84db426:	89 44 24 04          	mov    %eax,0x4(%esp)
 84db42a:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84db42d:	89 04 24             	mov    %eax,(%esp)
 84db430:	e8 2b 2f ba ff       	call   807e360 <localtime_r@plt>
 84db435:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84db438:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84db43b:	8b 40 08             	mov    0x8(%eax),%eax
 84db43e:	83 f8 05             	cmp    $0x5,%eax
 84db441:	7f 07                	jg     84db44a <_ZN20Inter_PcroomResponse22IsShutdonTimeOverLoginEv+0x3c>
 84db443:	b8 01 00 00 00       	mov    $0x1,%eax
 84db448:	eb 05                	jmp    84db44f <_ZN20Inter_PcroomResponse22IsShutdonTimeOverLoginEv+0x41>
 84db44a:	b8 00 00 00 00       	mov    $0x0,%eax
 84db44f:	c9                   	leave
 84db450:	c3                   	ret
 84db451:	90                   	nop

```

```c
// Inter_PcroomResponse::IsShutdonTimeOverLogin @ 0x84db40e

/* Inter_PcroomResponse::IsShutdonTimeOverLogin() */

bool Inter_PcroomResponse::IsShutdonTimeOverLogin(void)

{
  tm *ptVar1;
  tm local_40;
  time_t local_14 [4];
  
  local_14[0] = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  ptVar1 = localtime_r(local_14,&local_40);
  return ptVar1->tm_hour < 6;
}

```

---

## dispatch_sig

```asm
// === 084db452 Inter_PcroomResponse::dispatch_sig  [0x084db452-0x84db877] ===
 84db452:	55                   	push   %ebp
 84db453:	89 e5                	mov    %esp,%ebp
 84db455:	57                   	push   %edi
 84db456:	56                   	push   %esi
 84db457:	53                   	push   %ebx
 84db458:	81 ec 7c 04 00 00    	sub    $0x47c,%esp
 84db45e:	8b 45 10             	mov    0x10(%ebp),%eax
 84db461:	89 45 d0             	mov    %eax,-0x30(%ebp)
 84db464:	8b 45 0c             	mov    0xc(%ebp),%eax
 84db467:	89 04 24             	mov    %eax,(%esp)
 84db46a:	e8 1d ef bf ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84db46f:	85 c0                	test   %eax,%eax
 84db471:	0f 94 c0             	sete   %al
 84db474:	84 c0                	test   %al,%al
 84db476:	74 0a                	je     84db482 <_ZN20Inter_PcroomResponse12dispatch_sigEP5CUserPci+0x30>
 84db478:	b8 04 44 00 00       	mov    $0x4404,%eax
 84db47d:	e9 ea 03 00 00       	jmp    84db86c <_ZN20Inter_PcroomResponse12dispatch_sigEP5CUserPci+0x41a>
 84db482:	8b 45 0c             	mov    0xc(%ebp),%eax
 84db485:	89 04 24             	mov    %eax,(%esp)
 84db488:	e8 a5 4f c4 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 84db48d:	85 c0                	test   %eax,%eax
 84db48f:	0f 95 c0             	setne  %al
 84db492:	84 c0                	test   %al,%al
 84db494:	74 13                	je     84db4a9 <_ZN20Inter_PcroomResponse12dispatch_sigEP5CUserPci+0x57>
 84db496:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84db49d:	00 
 84db49e:	8b 45 0c             	mov    0xc(%ebp),%eax
 84db4a1:	89 04 24             	mov    %eax,(%esp)
 84db4a4:	e8 8b 13 01 00       	call   84ec834 <_ZN5CUser13setPcRoomAuthEb>
 84db4a9:	8b 45 d0             	mov    -0x30(%ebp),%eax
 84db4ac:	8b 40 12             	mov    0x12(%eax),%eax
 84db4af:	89 44 24 04          	mov    %eax,0x4(%esp)
 84db4b3:	8b 45 0c             	mov    0xc(%ebp),%eax
 84db4b6:	89 04 24             	mov    %eax,(%esp)
 84db4b9:	e8 a8 12 01 00       	call   84ec766 <_ZN5CUser11SetPCRoomNoEj>
 84db4be:	c6 45 d5 00          	movb   $0x0,-0x2b(%ebp)
 84db4c2:	8b 45 d0             	mov    -0x30(%ebp),%eax
 84db4c5:	0f b6 40 1c          	movzbl 0x1c(%eax),%eax
 84db4c9:	3c 07                	cmp    $0x7,%al
 84db4cb:	0f 85 95 00 00 00    	jne    84db566 <_ZN20Inter_PcroomResponse12dispatch_sigEP5CUserPci+0x114>
 84db4d1:	8b 45 d0             	mov    -0x30(%ebp),%eax
 84db4d4:	0f b6 40 1a          	movzbl 0x1a(%eax),%eax
 84db4d8:	3c 03                	cmp    $0x3,%al
 84db4da:	0f 84 86 00 00 00    	je     84db566 <_ZN20Inter_PcroomResponse12dispatch_sigEP5CUserPci+0x114>
 84db4e0:	8b 45 d0             	mov    -0x30(%ebp),%eax
 84db4e3:	0f b6 40 1d          	movzbl 0x1d(%eax),%eax
 84db4e7:	3c 01                	cmp    $0x1,%al
 84db4e9:	75 7b                	jne    84db566 <_ZN20Inter_PcroomResponse12dispatch_sigEP5CUserPci+0x114>
 84db4eb:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84db4f2:	00 
 84db4f3:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84db4fa:	00 
 84db4fb:	c7 44 24 04 3c 00 00 	movl   $0x3c,0x4(%esp)
 84db502:	00 
 84db503:	8b 45 0c             	mov    0xc(%ebp),%eax
 84db506:	89 04 24             	mov    %eax,(%esp)
 84db509:	e8 e6 d4 16 00       	call   86489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>
 84db50e:	8b 45 0c             	mov    0xc(%ebp),%eax
 84db511:	89 04 24             	mov    %eax,(%esp)
 84db514:	e8 55 ee bf ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 84db519:	89 c6                	mov    %eax,%esi
 84db51b:	8b 45 0c             	mov    0xc(%ebp),%eax
 84db51e:	89 04 24             	mov    %eax,(%esp)
 84db521:	e8 4c 5b c2 ff       	call   8101072 <_ZNK5CUser12get_acc_nameEv>
 84db526:	89 c3                	mov    %eax,%ebx
 84db528:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84db52f:	00 
 84db530:	c7 44 24 08 79 44 00 	movl   $0x4479,0x8(%esp)
 84db537:	00 
 84db538:	c7 44 24 04 40 be c8 	movl   $0x8c8be40,0x4(%esp)
 84db53f:	08 
 84db540:	8d 45 b0             	lea    -0x50(%ebp),%eax
 84db543:	89 04 24             	mov    %eax,(%esp)
 84db546:	e8 cd 41 07 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84db54b:	89 74 24 0c          	mov    %esi,0xc(%esp)
 84db54f:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84db553:	c7 44 24 04 24 98 c8 	movl   $0x8c89824,0x4(%esp)
 84db55a:	08 
 84db55b:	8d 45 b0             	lea    -0x50(%ebp),%eax
 84db55e:	89 04 24             	mov    %eax,(%esp)
 84db561:	e8 22 42 07 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84db566:	c6 45 d6 00          	movb   $0x0,-0x2a(%ebp)
 84db56a:	c6 45 d7 01          	movb   $0x1,-0x29(%ebp)
 84db56e:	8b 45 d0             	mov    -0x30(%ebp),%eax
 84db571:	0f b6 40 1a          	movzbl 0x1a(%eax),%eax
 84db575:	0f b6 c0             	movzbl %al,%eax
 84db578:	83 f8 01             	cmp    $0x1,%eax
 84db57b:	74 41                	je     84db5be <_ZN20Inter_PcroomResponse12dispatch_sigEP5CUserPci+0x16c>
 84db57d:	83 f8 01             	cmp    $0x1,%eax
 84db580:	7f 06                	jg     84db588 <_ZN20Inter_PcroomResponse12dispatch_sigEP5CUserPci+0x136>
 84db582:	85 c0                	test   %eax,%eax
 84db584:	74 0e                	je     84db594 <_ZN20Inter_PcroomResponse12dispatch_sigEP5CUserPci+0x142>
 84db586:	eb 3d                	jmp    84db5c5 <_ZN20Inter_PcroomResponse12dispatch_sigEP5CUserPci+0x173>
 84db588:	83 f8 02             	cmp    $0x2,%eax
 84db58b:	74 34                	je     84db5c1 <_ZN20Inter_PcroomResponse12dispatch_sigEP5CUserPci+0x16f>
 84db58d:	83 f8 03             	cmp    $0x3,%eax
 84db590:	74 13                	je     84db5a5 <_ZN20Inter_PcroomResponse12dispatch_sigEP5CUserPci+0x153>
 84db592:	eb 31                	jmp    84db5c5 <_ZN20Inter_PcroomResponse12dispatch_sigEP5CUserPci+0x173>
 84db594:	8b 45 d0             	mov    -0x30(%ebp),%eax
 84db597:	0f b6 40 1b          	movzbl 0x1b(%eax),%eax
 84db59b:	3c 02                	cmp    $0x2,%al
 84db59d:	75 25                	jne    84db5c4 <_ZN20Inter_PcroomResponse12dispatch_sigEP5CUserPci+0x172>
 84db59f:	c6 45 d6 01          	movb   $0x1,-0x2a(%ebp)
 84db5a3:	eb 20                	jmp    84db5c5 <_ZN20Inter_PcroomResponse12dispatch_sigEP5CUserPci+0x173>
 84db5a5:	c6 45 d6 01          	movb   $0x1,-0x2a(%ebp)
 84db5a9:	8b 45 d0             	mov    -0x30(%ebp),%eax
 84db5ac:	0f b6 40 1b          	movzbl 0x1b(%eax),%eax
 84db5b0:	0f b6 c0             	movzbl %al,%eax
 84db5b3:	83 f8 01             	cmp    $0x1,%eax
 84db5b6:	75 0d                	jne    84db5c5 <_ZN20Inter_PcroomResponse12dispatch_sigEP5CUserPci+0x173>
 84db5b8:	c6 45 d7 00          	movb   $0x0,-0x29(%ebp)
 84db5bc:	eb 07                	jmp    84db5c5 <_ZN20Inter_PcroomResponse12dispatch_sigEP5CUserPci+0x173>
 84db5be:	90                   	nop
 84db5bf:	eb 04                	jmp    84db5c5 <_ZN20Inter_PcroomResponse12dispatch_sigEP5CUserPci+0x173>
 84db5c1:	90                   	nop
 84db5c2:	eb 01                	jmp    84db5c5 <_ZN20Inter_PcroomResponse12dispatch_sigEP5CUserPci+0x173>
 84db5c4:	90                   	nop
 84db5c5:	80 7d d6 00          	cmpb   $0x0,-0x2a(%ebp)
 84db5c9:	0f 84 41 02 00 00    	je     84db810 <_ZN20Inter_PcroomResponse12dispatch_sigEP5CUserPci+0x3be>
 84db5cf:	8b 45 d0             	mov    -0x30(%ebp),%eax
 84db5d2:	0f b6 40 1b          	movzbl 0x1b(%eax),%eax
 84db5d6:	0f b6 f0             	movzbl %al,%esi
 84db5d9:	8b 45 d0             	mov    -0x30(%ebp),%eax
 84db5dc:	0f b6 40 1a          	movzbl 0x1a(%eax),%eax
 84db5e0:	0f b6 d8             	movzbl %al,%ebx
 84db5e3:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84db5ea:	00 
 84db5eb:	c7 44 24 08 ec 44 00 	movl   $0x44ec,0x8(%esp)
 84db5f2:	00 
 84db5f3:	c7 44 24 04 40 be c8 	movl   $0x8c8be40,0x4(%esp)
 84db5fa:	08 
 84db5fb:	8d 45 c0             	lea    -0x40(%ebp),%eax
 84db5fe:	89 04 24             	mov    %eax,(%esp)
 84db601:	e8 12 41 07 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84db606:	89 74 24 0c          	mov    %esi,0xc(%esp)
 84db60a:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84db60e:	c7 44 24 04 4c 98 c8 	movl   $0x8c8984c,0x4(%esp)
 84db615:	08 
 84db616:	8d 45 c0             	lea    -0x40(%ebp),%eax
 84db619:	89 04 24             	mov    %eax,(%esp)
 84db61c:	e8 67 41 07 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84db621:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 84db624:	89 04 24             	mov    %eax,(%esp)
 84db627:	e8 20 27 0b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84db62c:	c7 44 24 08 e9 00 00 	movl   $0xe9,0x8(%esp)
 84db633:	00 
 84db634:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84db63b:	00 
 84db63c:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 84db63f:	89 04 24             	mov    %eax,(%esp)
 84db642:	e8 b5 02 bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84db647:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84db64e:	00 
 84db64f:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 84db652:	89 04 24             	mov    %eax,(%esp)
 84db655:	e8 c6 02 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84db65a:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 84db661:	00 
 84db662:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 84db665:	89 04 24             	mov    %eax,(%esp)
 84db668:	e8 b3 02 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84db66d:	8b 45 d0             	mov    -0x30(%ebp),%eax
 84db670:	0f b6 40 1b          	movzbl 0x1b(%eax),%eax
 84db674:	0f b6 c0             	movzbl %al,%eax
 84db677:	89 44 24 04          	mov    %eax,0x4(%esp)
 84db67b:	c7 04 24 e4 b8 45 09 	movl   $0x945b8e4,(%esp)
 84db682:	e8 85 4a 0a 00       	call   858010c <_ZN14CNexonMsgTable16GetMessageStringEi>
 84db687:	89 45 d8             	mov    %eax,-0x28(%ebp)
 84db68a:	8d 95 a3 fb ff ff    	lea    -0x45d(%ebp),%edx
 84db690:	bb 01 04 00 00       	mov    $0x401,%ebx
 84db695:	b8 00 00 00 00       	mov    $0x0,%eax
 84db69a:	89 d1                	mov    %edx,%ecx
 84db69c:	83 e1 01             	and    $0x1,%ecx
 84db69f:	85 c9                	test   %ecx,%ecx
 84db6a1:	74 08                	je     84db6ab <_ZN20Inter_PcroomResponse12dispatch_sigEP5CUserPci+0x259>
 84db6a3:	88 02                	mov    %al,(%edx)
 84db6a5:	83 c2 01             	add    $0x1,%edx
 84db6a8:	83 eb 01             	sub    $0x1,%ebx
 84db6ab:	89 d1                	mov    %edx,%ecx
 84db6ad:	83 e1 02             	and    $0x2,%ecx
 84db6b0:	85 c9                	test   %ecx,%ecx
 84db6b2:	74 09                	je     84db6bd <_ZN20Inter_PcroomResponse12dispatch_sigEP5CUserPci+0x26b>
 84db6b4:	66 89 02             	mov    %ax,(%edx)
 84db6b7:	83 c2 02             	add    $0x2,%edx
 84db6ba:	83 eb 02             	sub    $0x2,%ebx
 84db6bd:	89 d9                	mov    %ebx,%ecx
 84db6bf:	c1 e9 02             	shr    $0x2,%ecx
 84db6c2:	89 d7                	mov    %edx,%edi
 84db6c4:	f3 ab                	rep stos %eax,%es:(%edi)
 84db6c6:	89 fa                	mov    %edi,%edx
 84db6c8:	89 d9                	mov    %ebx,%ecx
 84db6ca:	83 e1 02             	and    $0x2,%ecx
 84db6cd:	85 c9                	test   %ecx,%ecx
 84db6cf:	74 06                	je     84db6d7 <_ZN20Inter_PcroomResponse12dispatch_sigEP5CUserPci+0x285>
 84db6d1:	66 89 02             	mov    %ax,(%edx)
 84db6d4:	83 c2 02             	add    $0x2,%edx
 84db6d7:	89 d9                	mov    %ebx,%ecx
 84db6d9:	83 e1 01             	and    $0x1,%ecx
 84db6dc:	85 c9                	test   %ecx,%ecx
 84db6de:	74 05                	je     84db6e5 <_ZN20Inter_PcroomResponse12dispatch_sigEP5CUserPci+0x293>
 84db6e0:	88 02                	mov    %al,(%edx)
 84db6e2:	83 c2 01             	add    $0x1,%edx
 84db6e5:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84db6ec:	00 
 84db6ed:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84db6f0:	89 44 24 08          	mov    %eax,0x8(%esp)
 84db6f4:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 84db6fb:	00 
 84db6fc:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 84db703:	e8 f6 a0 5c 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 84db708:	c7 44 24 08 00 04 00 	movl   $0x400,0x8(%esp)
 84db70f:	00 
 84db710:	89 44 24 04          	mov    %eax,0x4(%esp)
 84db714:	8d 85 a3 fb ff ff    	lea    -0x45d(%ebp),%eax
 84db71a:	89 04 24             	mov    %eax,(%esp)
 84db71d:	e8 ae 21 ba ff       	call   807d8d0 <strncpy@plt>
 84db722:	8d 85 a3 fb ff ff    	lea    -0x45d(%ebp),%eax
 84db728:	89 04 24             	mov    %eax,(%esp)
 84db72b:	e8 80 2c ba ff       	call   807e3b0 <strlen@plt>
 84db730:	89 45 dc             	mov    %eax,-0x24(%ebp)
 84db733:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84db736:	89 44 24 04          	mov    %eax,0x4(%esp)
 84db73a:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 84db73d:	89 04 24             	mov    %eax,(%esp)
 84db740:	e8 f7 01 bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84db745:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84db748:	89 44 24 08          	mov    %eax,0x8(%esp)
 84db74c:	8d 85 a3 fb ff ff    	lea    -0x45d(%ebp),%eax
 84db752:	89 44 24 04          	mov    %eax,0x4(%esp)
 84db756:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 84db759:	89 04 24             	mov    %eax,(%esp)
 84db75c:	e8 83 bc cd ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84db761:	0f b6 45 d7          	movzbl -0x29(%ebp),%eax
 84db765:	89 44 24 04          	mov    %eax,0x4(%esp)
 84db769:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 84db76c:	89 04 24             	mov    %eax,(%esp)
 84db76f:	e8 ac 01 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84db774:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84db77b:	00 
 84db77c:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 84db77f:	89 04 24             	mov    %eax,(%esp)
 84db782:	e8 d1 01 bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84db787:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 84db78a:	89 44 24 04          	mov    %eax,0x4(%esp)
 84db78e:	8b 45 0c             	mov    0xc(%ebp),%eax
 84db791:	89 04 24             	mov    %eax,(%esp)
 84db794:	e8 21 ce 16 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84db799:	8b 45 0c             	mov    0xc(%ebp),%eax
 84db79c:	89 04 24             	mov    %eax,(%esp)
 84db79f:	e8 aa 04 bf ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84db7a4:	89 c6                	mov    %eax,%esi
 84db7a6:	8b 45 0c             	mov    0xc(%ebp),%eax
 84db7a9:	89 04 24             	mov    %eax,(%esp)
 84db7ac:	e8 e5 d4 be ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 84db7b1:	89 c3                	mov    %eax,%ebx
 84db7b3:	e8 c4 ac c1 ff       	call   80f647c <_Z12G_TimerQueuev>
 84db7b8:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 84db7bf:	00 
 84db7c0:	89 74 24 14          	mov    %esi,0x14(%esp)
 84db7c4:	c7 44 24 10 78 00 00 	movl   $0x78,0x10(%esp)
 84db7cb:	00 
 84db7cc:	c7 44 24 0c 84 00 00 	movl   $0x84,0xc(%esp)
 84db7d3:	00 
 84db7d4:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84db7d8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84db7df:	00 
 84db7e0:	89 04 24             	mov    %eax,(%esp)
 84db7e3:	e8 2e 56 15 00       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 84db7e8:	eb 1b                	jmp    84db805 <_ZN20Inter_PcroomResponse12dispatch_sigEP5CUserPci+0x3b3>
 84db7ea:	89 d3                	mov    %edx,%ebx
 84db7ec:	89 c6                	mov    %eax,%esi
 84db7ee:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 84db7f1:	89 04 24             	mov    %eax,(%esp)
 84db7f4:	e8 87 26 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84db7f9:	89 f0                	mov    %esi,%eax
 84db7fb:	89 da                	mov    %ebx,%edx
 84db7fd:	89 04 24             	mov    %eax,(%esp)
 84db800:	e8 4b 7f 60 00       	call   8ae3750 <_Unwind_Resume>
 84db805:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 84db808:	89 04 24             	mov    %eax,(%esp)
 84db80b:	e8 70 26 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84db810:	8b 45 d0             	mov    -0x30(%ebp),%eax
 84db813:	8b 40 12             	mov    0x12(%eax),%eax
 84db816:	85 c0                	test   %eax,%eax
 84db818:	74 31                	je     84db84b <_ZN20Inter_PcroomResponse12dispatch_sigEP5CUserPci+0x3f9>
 84db81a:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 84db821:	e8 78 04 bf ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 84db826:	89 45 e0             	mov    %eax,-0x20(%ebp)
 84db829:	8b 45 d0             	mov    -0x30(%ebp),%eax
 84db82c:	8b 40 16             	mov    0x16(%eax),%eax
 84db82f:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84db832:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84db835:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84db838:	89 54 24 08          	mov    %edx,0x8(%esp)
 84db83c:	89 44 24 04          	mov    %eax,0x4(%esp)
 84db840:	8b 45 0c             	mov    0xc(%ebp),%eax
 84db843:	89 04 24             	mov    %eax,(%esp)
 84db846:	e8 b3 4a 1d 00       	call   86b02fe <_ZN8WongWork14CHandlePremium19handleSetUserPCRoomEP5CUserll>
 84db84b:	e8 4b 09 bf ff       	call   80cc19b <_Z14G_CDataManagerv>
 84db850:	89 04 24             	mov    %eax,(%esp)
 84db853:	e8 0a 53 c3 ff       	call   8110b62 <_ZN12CDataManager20get_event_script_mngEv>
 84db858:	8b 55 0c             	mov    0xc(%ebp),%edx
 84db85b:	89 54 24 04          	mov    %edx,0x4(%esp)
 84db85f:	89 04 24             	mov    %eax,(%esp)
 84db862:	e8 3d 0b c3 ff       	call   810c3a4 <_ZN13EventClassify15CEventScriptMng27send_pc_room_play_init_timeEP5CUser>
 84db867:	b8 00 00 00 00       	mov    $0x0,%eax
 84db86c:	81 c4 7c 04 00 00    	add    $0x47c,%esp
 84db872:	5b                   	pop    %ebx
 84db873:	5e                   	pop    %esi
 84db874:	5f                   	pop    %edi
 84db875:	5d                   	pop    %ebp
 84db876:	c3                   	ret
 84db877:	90                   	nop

```

```c
// Inter_PcroomResponse::dispatch_sig @ 0x84db452

/* Inter_PcroomResponse::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_PcroomResponse::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  TimerQueue *pTVar6;
  CDataManager *this;
  CEventScriptMng *this_00;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  bool bVar10;
  byte bVar11;
  char local_461;
  char local_460 [1024];
  PacketGuard local_60 [12];
  cMyTrace local_54 [16];
  cMyTrace local_44 [16];
  int local_34;
  undefined1 local_2f;
  char local_2e;
  byte local_2d;
  char *local_2c;
  size_t local_28;
  long local_24;
  long local_20;
  
  bVar11 = 0;
  local_34 = param_3;
  iVar3 = CUser::get_state((CUser *)param_2);
  if (iVar3 == 0) {
    uVar4 = 0x4404;
  }
  else {
    iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if (iVar3 != 0) {
      CUser::setPcRoomAuth((CUser *)param_2,true);
    }
    CUser::SetPCRoomNo((CUser *)param_2,*(uint *)(local_34 + 0x12));
    local_2f = 0;
    if (((*(char *)(local_34 + 0x1c) == '\a') && (*(char *)(local_34 + 0x1a) != '\x03')) &&
       (*(char *)(local_34 + 0x1d) == '\x01')) {
      CUser::DisConnSig((CUser *)param_2,0x3c,1,0);
      uVar4 = CUser::get_acc_id((CUser *)param_2);
      uVar5 = CUser::get_acc_name((CUser *)param_2);
      cMyTrace::cMyTrace(local_54,
                         "virtual int Inter_PcroomResponse::dispatch_sig(CUser*, char*, int)",0x4479
                         ,0);
      cMyTrace::operator()(local_54,"SecuritySystem user ban ip login(%s,%u)",uVar5,uVar4);
    }
    local_2e = '\0';
    local_2d = 1;
    bVar1 = *(byte *)(local_34 + 0x1a);
    if (bVar1 != 1) {
      if (bVar1 < 2) {
        if ((bVar1 == 0) && (*(char *)(local_34 + 0x1b) == '\x02')) {
          local_2e = '\x01';
        }
      }
      else if (((bVar1 != 2) && (bVar1 == 3)) &&
              (local_2e = '\x01', *(char *)(local_34 + 0x1b) == '\x01')) {
        local_2d = 0;
      }
    }
    if (local_2e != '\0') {
      bVar1 = *(byte *)(local_34 + 0x1b);
      bVar2 = *(byte *)(local_34 + 0x1a);
      cMyTrace::cMyTrace(local_44,
                         "virtual int Inter_PcroomResponse::dispatch_sig(CUser*, char*, int)",0x44ec
                         ,0);
      cMyTrace::operator()
                (local_44,"Inter_PcroomResponse::dispatch_sig() forbidden ip (%d), %d)",(uint)bVar2,
                 (uint)bVar1);
      PacketGuard::PacketGuard(local_60);
                    /* try { // try from 084db642 to 084db7e7 has its CatchHandler @ 084db7ea */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_60,0,0xe9);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_60,1);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_60,5);
      local_2c = (char *)CNexonMsgTable::GetMessageString(0x945b8e4);
      pcVar8 = &local_461;
      uVar9 = 0x401;
      bVar10 = ((uint)pcVar8 & 1) != 0;
      if (bVar10) {
        local_461 = '\0';
        pcVar8 = local_460;
        uVar9 = 0x400;
      }
      if (((uint)pcVar8 & 2) != 0) {
        pcVar8[0] = '\0';
        pcVar8[1] = '\0';
        pcVar8 = pcVar8 + 2;
        uVar9 = uVar9 - 2;
      }
      for (uVar7 = uVar9 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        pcVar8[0] = '\0';
        pcVar8[1] = '\0';
        pcVar8[2] = '\0';
        pcVar8[3] = '\0';
        pcVar8 = pcVar8 + ((uint)bVar11 * -2 + 1) * 4;
      }
      if ((uVar9 & 2) != 0) {
        pcVar8[0] = '\0';
        pcVar8[1] = '\0';
        pcVar8 = pcVar8 + 2;
      }
      if (!bVar10) {
        *pcVar8 = '\0';
      }
      pcVar8 = (char *)RDARScriptStringManager::findString
                                 ((RDARScriptStringManager *)g_scriptStringManager_,4,local_2c,
                                  (bool *)0x0);
      strncpy(&local_461,pcVar8,0x400);
      local_28 = strlen(&local_461);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_60,local_28);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_60,&local_461,local_28);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_60,(uint)local_2d);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_60,true);
      CUser::Send((CUser *)param_2,local_60);
      uVar4 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
      uVar5 = CUser::GetUID((CUser *)param_2);
      pTVar6 = (TimerQueue *)G_TimerQueue();
      TimerQueue::InsertTimer(pTVar6,0,uVar5,0x84,0x78,uVar4,0);
      PacketGuard::~PacketGuard(local_60);
    }
    if (*(int *)(local_34 + 0x12) != 0) {
      local_24 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      local_20 = *(long *)(local_34 + 0x16);
      WongWork::CHandlePremium::handleSetUserPCRoom((CUser *)param_2,local_24,local_20);
    }
    this = (CDataManager *)G_CDataManager();
    this_00 = (CEventScriptMng *)CDataManager::get_event_script_mng(this);
    EventClassify::CEventScriptMng::send_pc_room_play_init_time(this_00,(CUser *)param_2);
    uVar4 = 0;
  }
  return uVar4;
}

```

