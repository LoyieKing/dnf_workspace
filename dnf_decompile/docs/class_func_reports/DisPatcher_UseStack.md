# DisPatcher_UseStack

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 081f63c0 DisPatcher_UseStack::dispatch_sig  [0x081f63c0-0x81f793b] ===
 81f63c0:	55                   	push   %ebp
 81f63c1:	89 e5                	mov    %esp,%ebp
 81f63c3:	56                   	push   %esi
 81f63c4:	53                   	push   %ebx
 81f63c5:	81 ec 20 01 00 00    	sub    $0x120,%esp
 81f63cb:	8d 45 89             	lea    -0x77(%ebp),%eax
 81f63ce:	83 c0 0d             	add    $0xd,%eax
 81f63d1:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f63d5:	8b 45 10             	mov    0x10(%ebp),%eax
 81f63d8:	89 04 24             	mov    %eax,(%esp)
 81f63db:	e8 e0 6b 39 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 81f63e0:	83 f0 01             	xor    $0x1,%eax
 81f63e3:	84 c0                	test   %al,%al
 81f63e5:	74 2b                	je     81f6412 <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x52>
 81f63e7:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81f63ee:	00 
 81f63ef:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81f63f6:	00 
 81f63f7:	c7 44 24 04 80 ff bc 	movl   $0x8bcff80,0x4(%esp)
 81f63fe:	08 
 81f63ff:	c7 04 24 15 83 00 00 	movl   $0x8315,(%esp)
 81f6406:	e8 cc a4 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81f640b:	89 c3                	mov    %eax,%ebx
 81f640d:	e9 1e 15 00 00       	jmp    81f7930 <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x1570>
 81f6412:	8d 45 88             	lea    -0x78(%ebp),%eax
 81f6415:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f6419:	8b 45 10             	mov    0x10(%ebp),%eax
 81f641c:	89 04 24             	mov    %eax,(%esp)
 81f641f:	e8 4c 6b 39 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 81f6424:	83 f0 01             	xor    $0x1,%eax
 81f6427:	84 c0                	test   %al,%al
 81f6429:	74 2b                	je     81f6456 <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x96>
 81f642b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81f6432:	00 
 81f6433:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81f643a:	00 
 81f643b:	c7 44 24 04 80 ff bc 	movl   $0x8bcff80,0x4(%esp)
 81f6442:	08 
 81f6443:	c7 04 24 18 83 00 00 	movl   $0x8318,(%esp)
 81f644a:	e8 88 a4 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81f644f:	89 c3                	mov    %eax,%ebx
 81f6451:	e9 da 14 00 00       	jmp    81f7930 <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x1570>
 81f6456:	c7 45 84 00 00 00 00 	movl   $0x0,-0x7c(%ebp)
 81f645d:	c7 45 80 00 00 00 00 	movl   $0x0,-0x80(%ebp)
 81f6464:	8d 45 84             	lea    -0x7c(%ebp),%eax
 81f6467:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f646b:	8b 45 10             	mov    0x10(%ebp),%eax
 81f646e:	89 04 24             	mov    %eax,(%esp)
 81f6471:	e8 7a 6c 39 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81f6476:	83 f0 01             	xor    $0x1,%eax
 81f6479:	84 c0                	test   %al,%al
 81f647b:	74 2b                	je     81f64a8 <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0xe8>
 81f647d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81f6484:	00 
 81f6485:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81f648c:	00 
 81f648d:	c7 44 24 04 80 ff bc 	movl   $0x8bcff80,0x4(%esp)
 81f6494:	08 
 81f6495:	c7 04 24 1d 83 00 00 	movl   $0x831d,(%esp)
 81f649c:	e8 36 a4 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81f64a1:	89 c3                	mov    %eax,%ebx
 81f64a3:	e9 88 14 00 00       	jmp    81f7930 <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x1570>
 81f64a8:	8d 45 80             	lea    -0x80(%ebp),%eax
 81f64ab:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f64af:	8b 45 10             	mov    0x10(%ebp),%eax
 81f64b2:	89 04 24             	mov    %eax,(%esp)
 81f64b5:	e8 36 6c 39 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81f64ba:	83 f0 01             	xor    $0x1,%eax
 81f64bd:	84 c0                	test   %al,%al
 81f64bf:	74 2b                	je     81f64ec <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x12c>
 81f64c1:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81f64c8:	00 
 81f64c9:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81f64d0:	00 
 81f64d1:	c7 44 24 04 80 ff bc 	movl   $0x8bcff80,0x4(%esp)
 81f64d8:	08 
 81f64d9:	c7 04 24 1e 83 00 00 	movl   $0x831e,(%esp)
 81f64e0:	e8 f2 a3 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81f64e5:	89 c3                	mov    %eax,%ebx
 81f64e7:	e9 44 14 00 00       	jmp    81f7930 <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x1570>
 81f64ec:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f64ef:	89 04 24             	mov    %eax,(%esp)
 81f64f2:	e8 95 3e ee ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81f64f7:	83 f8 05             	cmp    $0x5,%eax
 81f64fa:	74 67                	je     81f6563 <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x1a3>
 81f64fc:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f64ff:	89 04 24             	mov    %eax,(%esp)
 81f6502:	e8 85 3e ee ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81f6507:	83 f8 07             	cmp    $0x7,%eax
 81f650a:	74 57                	je     81f6563 <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x1a3>
 81f650c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f650f:	89 04 24             	mov    %eax,(%esp)
 81f6512:	e8 75 3e ee ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81f6517:	83 f8 08             	cmp    $0x8,%eax
 81f651a:	74 47                	je     81f6563 <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x1a3>
 81f651c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f651f:	89 04 24             	mov    %eax,(%esp)
 81f6522:	e8 65 3e ee ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81f6527:	83 f8 03             	cmp    $0x3,%eax
 81f652a:	74 37                	je     81f6563 <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x1a3>
 81f652c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f652f:	89 04 24             	mov    %eax,(%esp)
 81f6532:	e8 55 3e ee ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81f6537:	83 f8 06             	cmp    $0x6,%eax
 81f653a:	74 27                	je     81f6563 <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x1a3>
 81f653c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f653f:	89 04 24             	mov    %eax,(%esp)
 81f6542:	e8 45 3e ee ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81f6547:	83 f8 0a             	cmp    $0xa,%eax
 81f654a:	74 17                	je     81f6563 <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x1a3>
 81f654c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f654f:	89 04 24             	mov    %eax,(%esp)
 81f6552:	e8 35 3e ee ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81f6557:	83 f8 0c             	cmp    $0xc,%eax
 81f655a:	74 07                	je     81f6563 <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x1a3>
 81f655c:	b8 01 00 00 00       	mov    $0x1,%eax
 81f6561:	eb 05                	jmp    81f6568 <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x1a8>
 81f6563:	b8 00 00 00 00       	mov    $0x0,%eax
 81f6568:	84 c0                	test   %al,%al
 81f656a:	0f 84 fc 00 00 00    	je     81f666c <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x2ac>
 81f6570:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 81f6576:	89 04 24             	mov    %eax,(%esp)
 81f6579:	e8 ce 77 39 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81f657e:	c7 44 24 08 2f 00 00 	movl   $0x2f,0x8(%esp)
 81f6585:	00 
 81f6586:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f658d:	00 
 81f658e:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 81f6594:	89 04 24             	mov    %eax,(%esp)
 81f6597:	e8 60 53 ed ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81f659c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81f65a3:	00 
 81f65a4:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 81f65aa:	89 04 24             	mov    %eax,(%esp)
 81f65ad:	e8 6e 53 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f65b2:	c7 44 24 04 13 00 00 	movl   $0x13,0x4(%esp)
 81f65b9:	00 
 81f65ba:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 81f65c0:	89 04 24             	mov    %eax,(%esp)
 81f65c3:	e8 58 53 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f65c8:	0f b6 45 88          	movzbl -0x78(%ebp),%eax
 81f65cc:	0f b6 c0             	movzbl %al,%eax
 81f65cf:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f65d3:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 81f65d9:	89 04 24             	mov    %eax,(%esp)
 81f65dc:	e8 3f 53 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f65e1:	8b 45 84             	mov    -0x7c(%ebp),%eax
 81f65e4:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f65e8:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 81f65ee:	89 04 24             	mov    %eax,(%esp)
 81f65f1:	e8 46 53 ed ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81f65f6:	8b 45 80             	mov    -0x80(%ebp),%eax
 81f65f9:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f65fd:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 81f6603:	89 04 24             	mov    %eax,(%esp)
 81f6606:	e8 31 53 ed ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81f660b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f6612:	00 
 81f6613:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 81f6619:	89 04 24             	mov    %eax,(%esp)
 81f661c:	e8 37 53 ed ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81f6621:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 81f6627:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f662b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f662e:	89 04 24             	mov    %eax,(%esp)
 81f6631:	e8 84 1f 45 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81f6636:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f663b:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 81f6641:	89 04 24             	mov    %eax,(%esp)
 81f6644:	e8 37 78 39 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81f6649:	e9 e2 12 00 00       	jmp    81f7930 <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x1570>
 81f664e:	89 d3                	mov    %edx,%ebx
 81f6650:	89 c6                	mov    %eax,%esi
 81f6652:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 81f6658:	89 04 24             	mov    %eax,(%esp)
 81f665b:	e8 20 78 39 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81f6660:	89 f0                	mov    %esi,%eax
 81f6662:	89 da                	mov    %ebx,%edx
 81f6664:	89 04 24             	mov    %eax,(%esp)
 81f6667:	e8 e4 d0 8e 00       	call   8ae3750 <_Unwind_Resume>
 81f666c:	c7 85 7c ff ff ff 00 	movl   $0x0,-0x84(%ebp)
 81f6673:	00 00 00 
 81f6676:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 81f667c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f6680:	8b 45 10             	mov    0x10(%ebp),%eax
 81f6683:	89 04 24             	mov    %eax,(%esp)
 81f6686:	e8 65 6a 39 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81f668b:	83 f0 01             	xor    $0x1,%eax
 81f668e:	84 c0                	test   %al,%al
 81f6690:	74 2b                	je     81f66bd <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x2fd>
 81f6692:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81f6699:	00 
 81f669a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81f66a1:	00 
 81f66a2:	c7 44 24 04 80 ff bc 	movl   $0x8bcff80,0x4(%esp)
 81f66a9:	08 
 81f66aa:	c7 04 24 38 83 00 00 	movl   $0x8338,(%esp)
 81f66b1:	e8 21 a2 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81f66b6:	89 c3                	mov    %eax,%ebx
 81f66b8:	e9 73 12 00 00       	jmp    81f7930 <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x1570>
 81f66bd:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f66c0:	89 04 24             	mov    %eax,(%esp)
 81f66c3:	e8 ee 79 45 00       	call   864e0b6 <_ZNK5CUser25getCurCharacInvenCheckSumEv>
 81f66c8:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
 81f66ce:	39 d0                	cmp    %edx,%eax
 81f66d0:	0f 95 c0             	setne  %al
 81f66d3:	84 c0                	test   %al,%al
 81f66d5:	74 3a                	je     81f6711 <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x351>
 81f66d7:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f66da:	89 04 24             	mov    %eax,(%esp)
 81f66dd:	e8 78 32 f0 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 81f66e2:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81f66e9:	00 
 81f66ea:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81f66f1:	00 
 81f66f2:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81f66f9:	00 
 81f66fa:	c7 44 24 08 5b 02 00 	movl   $0x25b,0x8(%esp)
 81f6701:	00 
 81f6702:	8b 55 0c             	mov    0xc(%ebp),%edx
 81f6705:	89 54 24 04          	mov    %edx,0x4(%esp)
 81f6709:	89 04 24             	mov    %eax,(%esp)
 81f670c:	e8 6d 25 f0 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 81f6711:	e8 d0 be f6 ff       	call   81625e6 <_ZN4ARAD9SingletonI22ServiceRestrictManagerE3GetEv>
 81f6716:	c7 44 24 0c 0c 00 00 	movl   $0xc,0xc(%esp)
 81f671d:	00 
 81f671e:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81f6725:	00 
 81f6726:	8b 55 0c             	mov    0xc(%ebp),%edx
 81f6729:	89 54 24 04          	mov    %edx,0x4(%esp)
 81f672d:	89 04 24             	mov    %eax,(%esp)
 81f6730:	e8 83 7f f7 ff       	call   816e6b8 <_ZN22ServiceRestrictManager12isRestrictedEP5CUserN16RestrictCategory4EnumEi>
 81f6735:	84 c0                	test   %al,%al
 81f6737:	0f 84 fc 00 00 00    	je     81f6839 <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x479>
 81f673d:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 81f6743:	89 04 24             	mov    %eax,(%esp)
 81f6746:	e8 01 76 39 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81f674b:	c7 44 24 08 2f 00 00 	movl   $0x2f,0x8(%esp)
 81f6752:	00 
 81f6753:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f675a:	00 
 81f675b:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 81f6761:	89 04 24             	mov    %eax,(%esp)
 81f6764:	e8 93 51 ed ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81f6769:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81f6770:	00 
 81f6771:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 81f6777:	89 04 24             	mov    %eax,(%esp)
 81f677a:	e8 a1 51 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f677f:	c7 44 24 04 d1 00 00 	movl   $0xd1,0x4(%esp)
 81f6786:	00 
 81f6787:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 81f678d:	89 04 24             	mov    %eax,(%esp)
 81f6790:	e8 8b 51 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f6795:	0f b6 45 88          	movzbl -0x78(%ebp),%eax
 81f6799:	0f b6 c0             	movzbl %al,%eax
 81f679c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f67a0:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 81f67a6:	89 04 24             	mov    %eax,(%esp)
 81f67a9:	e8 72 51 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f67ae:	8b 45 84             	mov    -0x7c(%ebp),%eax
 81f67b1:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f67b5:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 81f67bb:	89 04 24             	mov    %eax,(%esp)
 81f67be:	e8 79 51 ed ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81f67c3:	8b 45 80             	mov    -0x80(%ebp),%eax
 81f67c6:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f67ca:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 81f67d0:	89 04 24             	mov    %eax,(%esp)
 81f67d3:	e8 64 51 ed ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81f67d8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f67df:	00 
 81f67e0:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 81f67e6:	89 04 24             	mov    %eax,(%esp)
 81f67e9:	e8 6a 51 ed ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81f67ee:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 81f67f4:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f67f8:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f67fb:	89 04 24             	mov    %eax,(%esp)
 81f67fe:	e8 b7 1d 45 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81f6803:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f6808:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 81f680e:	89 04 24             	mov    %eax,(%esp)
 81f6811:	e8 6a 76 39 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81f6816:	e9 15 11 00 00       	jmp    81f7930 <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x1570>
 81f681b:	89 d3                	mov    %edx,%ebx
 81f681d:	89 c6                	mov    %eax,%esi
 81f681f:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 81f6825:	89 04 24             	mov    %eax,(%esp)
 81f6828:	e8 53 76 39 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81f682d:	89 f0                	mov    %esi,%eax
 81f682f:	89 da                	mov    %ebx,%edx
 81f6831:	89 04 24             	mov    %eax,(%esp)
 81f6834:	e8 17 cf 8e 00       	call   8ae3750 <_Unwind_Resume>
 81f6839:	0f b7 45 96          	movzwl -0x6a(%ebp),%eax
 81f683d:	0f bf c8             	movswl %ax,%ecx
 81f6840:	0f b6 45 88          	movzbl -0x78(%ebp),%eax
 81f6844:	0f be d0             	movsbl %al,%edx
 81f6847:	a1 cc f7 41 09       	mov    0x941f7cc,%eax
 81f684c:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 81f6850:	89 54 24 08          	mov    %edx,0x8(%esp)
 81f6854:	8b 55 0c             	mov    0xc(%ebp),%edx
 81f6857:	89 54 24 04          	mov    %edx,0x4(%esp)
 81f685b:	89 04 24             	mov    %eax,(%esp)
 81f685e:	e8 73 1c 09 00       	call   82884d6 <_ZN21CSecu_ProtectionField10GetItemPtrEP5CUsercs>
 81f6863:	89 45 a8             	mov    %eax,-0x58(%ebp)
 81f6866:	83 7d a8 00          	cmpl   $0x0,-0x58(%ebp)
 81f686a:	75 2b                	jne    81f6897 <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x4d7>
 81f686c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81f6873:	00 
 81f6874:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81f687b:	00 
 81f687c:	c7 44 24 04 80 ff bc 	movl   $0x8bcff80,0x4(%esp)
 81f6883:	08 
 81f6884:	c7 04 24 54 83 00 00 	movl   $0x8354,(%esp)
 81f688b:	e8 47 a0 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81f6890:	89 c3                	mov    %eax,%ebx
 81f6892:	e9 99 10 00 00       	jmp    81f7930 <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x1570>
 81f6897:	a1 cc f7 41 09       	mov    0x941f7cc,%eax
 81f689c:	8b 55 a8             	mov    -0x58(%ebp),%edx
 81f689f:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81f68a3:	c7 44 24 08 2a 00 00 	movl   $0x2a,0x8(%esp)
 81f68aa:	00 
 81f68ab:	8b 55 0c             	mov    0xc(%ebp),%edx
 81f68ae:	89 54 24 04          	mov    %edx,0x4(%esp)
 81f68b2:	89 04 24             	mov    %eax,(%esp)
 81f68b5:	e8 cc 1e 09 00       	call   8288786 <_ZN21CSecu_ProtectionField9CheckItemEP5CUser18SECURITY_PROTCTIONPK5CItem>
 81f68ba:	89 45 ac             	mov    %eax,-0x54(%ebp)
 81f68bd:	83 7d ac 00          	cmpl   $0x0,-0x54(%ebp)
 81f68c1:	0f 84 fb 00 00 00    	je     81f69c2 <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x602>
 81f68c7:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 81f68cd:	89 04 24             	mov    %eax,(%esp)
 81f68d0:	e8 77 74 39 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81f68d5:	c7 44 24 08 2f 00 00 	movl   $0x2f,0x8(%esp)
 81f68dc:	00 
 81f68dd:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f68e4:	00 
 81f68e5:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 81f68eb:	89 04 24             	mov    %eax,(%esp)
 81f68ee:	e8 09 50 ed ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81f68f3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81f68fa:	00 
 81f68fb:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 81f6901:	89 04 24             	mov    %eax,(%esp)
 81f6904:	e8 17 50 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f6909:	8b 45 ac             	mov    -0x54(%ebp),%eax
 81f690c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f6910:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 81f6916:	89 04 24             	mov    %eax,(%esp)
 81f6919:	e8 02 50 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f691e:	0f b6 45 88          	movzbl -0x78(%ebp),%eax
 81f6922:	0f b6 c0             	movzbl %al,%eax
 81f6925:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f6929:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 81f692f:	89 04 24             	mov    %eax,(%esp)
 81f6932:	e8 e9 4f ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f6937:	8b 45 84             	mov    -0x7c(%ebp),%eax
 81f693a:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f693e:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 81f6944:	89 04 24             	mov    %eax,(%esp)
 81f6947:	e8 f0 4f ed ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81f694c:	8b 45 80             	mov    -0x80(%ebp),%eax
 81f694f:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f6953:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 81f6959:	89 04 24             	mov    %eax,(%esp)
 81f695c:	e8 db 4f ed ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81f6961:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f6968:	00 
 81f6969:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 81f696f:	89 04 24             	mov    %eax,(%esp)
 81f6972:	e8 e1 4f ed ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81f6977:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 81f697d:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f6981:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f6984:	89 04 24             	mov    %eax,(%esp)
 81f6987:	e8 2e 1c 45 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81f698c:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f6991:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 81f6997:	89 04 24             	mov    %eax,(%esp)
 81f699a:	e8 e1 74 39 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81f699f:	e9 8c 0f 00 00       	jmp    81f7930 <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x1570>
 81f69a4:	89 d3                	mov    %edx,%ebx
 81f69a6:	89 c6                	mov    %eax,%esi
 81f69a8:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 81f69ae:	89 04 24             	mov    %eax,(%esp)
 81f69b1:	e8 ca 74 39 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81f69b6:	89 f0                	mov    %esi,%eax
 81f69b8:	89 da                	mov    %ebx,%edx
 81f69ba:	89 04 24             	mov    %eax,(%esp)
 81f69bd:	e8 8e cd 8e 00       	call   8ae3750 <_Unwind_Resume>
 81f69c2:	8b 45 a8             	mov    -0x58(%ebp),%eax
 81f69c5:	89 04 24             	mov    %eax,(%esp)
 81f69c8:	e8 2d a9 ef ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 81f69cd:	84 c0                	test   %al,%al
 81f69cf:	0f 84 19 01 00 00    	je     81f6aee <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x72e>
 81f69d5:	8b 45 a8             	mov    -0x58(%ebp),%eax
 81f69d8:	8b 55 0c             	mov    0xc(%ebp),%edx
 81f69db:	89 54 24 04          	mov    %edx,0x4(%esp)
 81f69df:	89 04 24             	mov    %eax,(%esp)
 81f69e2:	e8 0d 80 31 00       	call   850e9f4 <_ZN14CStackableItem17verifyUsablePlaceEP5CUser>
 81f69e7:	83 f0 01             	xor    $0x1,%eax
 81f69ea:	84 c0                	test   %al,%al
 81f69ec:	0f 84 fc 00 00 00    	je     81f6aee <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x72e>
 81f69f2:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 81f69f8:	89 04 24             	mov    %eax,(%esp)
 81f69fb:	e8 4c 73 39 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81f6a00:	c7 44 24 08 2f 00 00 	movl   $0x2f,0x8(%esp)
 81f6a07:	00 
 81f6a08:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f6a0f:	00 
 81f6a10:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 81f6a16:	89 04 24             	mov    %eax,(%esp)
 81f6a19:	e8 de 4e ed ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81f6a1e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81f6a25:	00 
 81f6a26:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 81f6a2c:	89 04 24             	mov    %eax,(%esp)
 81f6a2f:	e8 ec 4e ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f6a34:	c7 44 24 04 13 00 00 	movl   $0x13,0x4(%esp)
 81f6a3b:	00 
 81f6a3c:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 81f6a42:	89 04 24             	mov    %eax,(%esp)
 81f6a45:	e8 d6 4e ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f6a4a:	0f b6 45 88          	movzbl -0x78(%ebp),%eax
 81f6a4e:	0f b6 c0             	movzbl %al,%eax
 81f6a51:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f6a55:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 81f6a5b:	89 04 24             	mov    %eax,(%esp)
 81f6a5e:	e8 bd 4e ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f6a63:	8b 45 84             	mov    -0x7c(%ebp),%eax
 81f6a66:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f6a6a:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 81f6a70:	89 04 24             	mov    %eax,(%esp)
 81f6a73:	e8 c4 4e ed ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81f6a78:	8b 45 80             	mov    -0x80(%ebp),%eax
 81f6a7b:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f6a7f:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 81f6a85:	89 04 24             	mov    %eax,(%esp)
 81f6a88:	e8 af 4e ed ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81f6a8d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f6a94:	00 
 81f6a95:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 81f6a9b:	89 04 24             	mov    %eax,(%esp)
 81f6a9e:	e8 b5 4e ed ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81f6aa3:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 81f6aa9:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f6aad:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f6ab0:	89 04 24             	mov    %eax,(%esp)
 81f6ab3:	e8 02 1b 45 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81f6ab8:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f6abd:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 81f6ac3:	89 04 24             	mov    %eax,(%esp)
 81f6ac6:	e8 b5 73 39 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81f6acb:	e9 60 0e 00 00       	jmp    81f7930 <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x1570>
 81f6ad0:	89 d3                	mov    %edx,%ebx
 81f6ad2:	89 c6                	mov    %eax,%esi
 81f6ad4:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 81f6ada:	89 04 24             	mov    %eax,(%esp)
 81f6add:	e8 9e 73 39 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81f6ae2:	89 f0                	mov    %esi,%eax
 81f6ae4:	89 da                	mov    %ebx,%edx
 81f6ae6:	89 04 24             	mov    %eax,(%esp)
 81f6ae9:	e8 62 cc 8e 00       	call   8ae3750 <_Unwind_Resume>
 81f6aee:	c7 45 b0 00 00 00 00 	movl   $0x0,-0x50(%ebp)
 81f6af5:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f6af8:	89 04 24             	mov    %eax,(%esp)
 81f6afb:	e8 d2 8b 03 00       	call   822f6d2 <_ZN15CUserCharacInfo15GetAssaultPlaceEv>
 81f6b00:	85 c0                	test   %eax,%eax
 81f6b02:	75 27                	jne    81f6b2b <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x76b>
 81f6b04:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f6b07:	89 04 24             	mov    %eax,(%esp)
 81f6b0a:	e8 7d 38 ee ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81f6b0f:	83 f8 03             	cmp    $0x3,%eax
 81f6b12:	74 10                	je     81f6b24 <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x764>
 81f6b14:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f6b17:	89 04 24             	mov    %eax,(%esp)
 81f6b1a:	e8 6d 38 ee ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81f6b1f:	83 f8 06             	cmp    $0x6,%eax
 81f6b22:	75 07                	jne    81f6b2b <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x76b>
 81f6b24:	b8 01 00 00 00       	mov    $0x1,%eax
 81f6b29:	eb 05                	jmp    81f6b30 <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x770>
 81f6b2b:	b8 00 00 00 00       	mov    $0x0,%eax
 81f6b30:	84 c0                	test   %al,%al
 81f6b32:	0f 84 0b 05 00 00    	je     81f7043 <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0xc83>
 81f6b38:	0f b7 45 96          	movzwl -0x6a(%ebp),%eax
 81f6b3c:	0f bf f0             	movswl %ax,%esi
 81f6b3f:	0f b6 45 88          	movzbl -0x78(%ebp),%eax
 81f6b43:	0f b6 c0             	movzbl %al,%eax
 81f6b46:	89 04 24             	mov    %eax,(%esp)
 81f6b49:	e8 f7 0c f0 ff       	call   80f7845 <_Z25GetInvenTypeFromItemSpace14ENUM_ITEMSPACE>
 81f6b4e:	89 c3                	mov    %eax,%ebx
 81f6b50:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f6b53:	89 04 24             	mov    %eax,(%esp)
 81f6b56:	e8 23 37 ee ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 81f6b5b:	89 74 24 08          	mov    %esi,0x8(%esp)
 81f6b5f:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81f6b63:	89 04 24             	mov    %eax,(%esp)
 81f6b66:	e8 73 56 30 00       	call   84fc1de <_ZNK10CInventory11GetInvenRefEii>
 81f6b6b:	89 45 bc             	mov    %eax,-0x44(%ebp)
 81f6b6e:	83 7d bc 00          	cmpl   $0x0,-0x44(%ebp)
 81f6b72:	75 2b                	jne    81f6b9f <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x7df>
 81f6b74:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81f6b7b:	00 
 81f6b7c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81f6b83:	00 
 81f6b84:	c7 44 24 04 80 ff bc 	movl   $0x8bcff80,0x4(%esp)
 81f6b8b:	08 
 81f6b8c:	c7 04 24 b7 83 00 00 	movl   $0x83b7,(%esp)
 81f6b93:	e8 3f 9d 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81f6b98:	89 c3                	mov    %eax,%ebx
 81f6b9a:	e9 91 0d 00 00       	jmp    81f7930 <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x1570>
 81f6b9f:	8b 45 bc             	mov    -0x44(%ebp),%eax
 81f6ba2:	8b 40 02             	mov    0x2(%eax),%eax
 81f6ba5:	89 c3                	mov    %eax,%ebx
 81f6ba7:	e8 ef 55 ed ff       	call   80cc19b <_Z14G_CDataManagerv>
 81f6bac:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81f6bb0:	89 04 24             	mov    %eax,(%esp)
 81f6bb3:	e8 7a 8e 16 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 81f6bb8:	89 45 c0             	mov    %eax,-0x40(%ebp)
 81f6bbb:	83 7d c0 00          	cmpl   $0x0,-0x40(%ebp)
 81f6bbf:	75 0a                	jne    81f6bcb <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x80b>
 81f6bc1:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f6bc6:	e9 65 0d 00 00       	jmp    81f7930 <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x1570>
 81f6bcb:	8b 45 c0             	mov    -0x40(%ebp),%eax
 81f6bce:	8b 00                	mov    (%eax),%eax
 81f6bd0:	83 c0 0c             	add    $0xc,%eax
 81f6bd3:	8b 10                	mov    (%eax),%edx
 81f6bd5:	8b 45 c0             	mov    -0x40(%ebp),%eax
 81f6bd8:	89 04 24             	mov    %eax,(%esp)
 81f6bdb:	ff d2                	call   *%edx
 81f6bdd:	83 f8 16             	cmp    $0x16,%eax
 81f6be0:	0f 84 6d 01 00 00    	je     81f6d53 <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x993>
 81f6be6:	83 f8 16             	cmp    $0x16,%eax
 81f6be9:	7f 0b                	jg     81f6bf6 <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x836>
 81f6beb:	83 f8 03             	cmp    $0x3,%eax
 81f6bee:	0f 84 62 01 00 00    	je     81f6d56 <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x996>
 81f6bf4:	eb 12                	jmp    81f6c08 <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x848>
 81f6bf6:	83 f8 18             	cmp    $0x18,%eax
 81f6bf9:	0f 84 5a 01 00 00    	je     81f6d59 <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x999>
 81f6bff:	83 f8 23             	cmp    $0x23,%eax
 81f6c02:	0f 84 54 01 00 00    	je     81f6d5c <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x99c>
 81f6c08:	8b 45 bc             	mov    -0x44(%ebp),%eax
 81f6c0b:	8b 40 02             	mov    0x2(%eax),%eax
 81f6c0e:	83 f8 33             	cmp    $0x33,%eax
 81f6c11:	0f 84 48 01 00 00    	je     81f6d5f <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x99f>
 81f6c17:	83 f8 33             	cmp    $0x33,%eax
 81f6c1a:	77 14                	ja     81f6c30 <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x870>
 81f6c1c:	83 f8 0a             	cmp    $0xa,%eax
 81f6c1f:	0f 84 3d 01 00 00    	je     81f6d62 <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x9a2>
 81f6c25:	83 f8 18             	cmp    $0x18,%eax
 81f6c28:	0f 84 37 01 00 00    	je     81f6d65 <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x9a5>
 81f6c2e:	eb 1d                	jmp    81f6c4d <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x88d>
 81f6c30:	3d 6d 1e 00 00       	cmp    $0x1e6d,%eax
 81f6c35:	72 16                	jb     81f6c4d <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x88d>
 81f6c37:	3d 73 1e 00 00       	cmp    $0x1e73,%eax
 81f6c3c:	0f 86 26 01 00 00    	jbe    81f6d68 <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x9a8>
 81f6c42:	3d 8a 97 28 00       	cmp    $0x28978a,%eax
 81f6c47:	0f 84 1e 01 00 00    	je     81f6d6b <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x9ab>
 81f6c4d:	8d 85 40 ff ff ff    	lea    -0xc0(%ebp),%eax
 81f6c53:	89 04 24             	mov    %eax,(%esp)
 81f6c56:	e8 f1 70 39 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81f6c5b:	c7 44 24 08 2f 00 00 	movl   $0x2f,0x8(%esp)
 81f6c62:	00 
 81f6c63:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f6c6a:	00 
 81f6c6b:	8d 85 40 ff ff ff    	lea    -0xc0(%ebp),%eax
 81f6c71:	89 04 24             	mov    %eax,(%esp)
 81f6c74:	e8 83 4c ed ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81f6c79:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81f6c80:	00 
 81f6c81:	8d 85 40 ff ff ff    	lea    -0xc0(%ebp),%eax
 81f6c87:	89 04 24             	mov    %eax,(%esp)
 81f6c8a:	e8 91 4c ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f6c8f:	c7 44 24 04 13 00 00 	movl   $0x13,0x4(%esp)
 81f6c96:	00 
 81f6c97:	8d 85 40 ff ff ff    	lea    -0xc0(%ebp),%eax
 81f6c9d:	89 04 24             	mov    %eax,(%esp)
 81f6ca0:	e8 7b 4c ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f6ca5:	0f b6 45 88          	movzbl -0x78(%ebp),%eax
 81f6ca9:	0f b6 c0             	movzbl %al,%eax
 81f6cac:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f6cb0:	8d 85 40 ff ff ff    	lea    -0xc0(%ebp),%eax
 81f6cb6:	89 04 24             	mov    %eax,(%esp)
 81f6cb9:	e8 62 4c ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f6cbe:	8b 45 84             	mov    -0x7c(%ebp),%eax
 81f6cc1:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f6cc5:	8d 85 40 ff ff ff    	lea    -0xc0(%ebp),%eax
 81f6ccb:	89 04 24             	mov    %eax,(%esp)
 81f6cce:	e8 69 4c ed ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81f6cd3:	8b 45 80             	mov    -0x80(%ebp),%eax
 81f6cd6:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f6cda:	8d 85 40 ff ff ff    	lea    -0xc0(%ebp),%eax
 81f6ce0:	89 04 24             	mov    %eax,(%esp)
 81f6ce3:	e8 54 4c ed ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81f6ce8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f6cef:	00 
 81f6cf0:	8d 85 40 ff ff ff    	lea    -0xc0(%ebp),%eax
 81f6cf6:	89 04 24             	mov    %eax,(%esp)
 81f6cf9:	e8 5a 4c ed ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81f6cfe:	8d 85 40 ff ff ff    	lea    -0xc0(%ebp),%eax
 81f6d04:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f6d08:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f6d0b:	89 04 24             	mov    %eax,(%esp)
 81f6d0e:	e8 a7 18 45 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81f6d13:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f6d18:	be 00 00 00 00       	mov    $0x0,%esi
 81f6d1d:	8d 85 40 ff ff ff    	lea    -0xc0(%ebp),%eax
 81f6d23:	89 04 24             	mov    %eax,(%esp)
 81f6d26:	e8 55 71 39 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81f6d2b:	85 f6                	test   %esi,%esi
 81f6d2d:	0f 84 fd 0b 00 00    	je     81f7930 <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x1570>
 81f6d33:	eb 37                	jmp    81f6d6c <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x9ac>
 81f6d35:	89 d3                	mov    %edx,%ebx
 81f6d37:	89 c6                	mov    %eax,%esi
 81f6d39:	8d 85 40 ff ff ff    	lea    -0xc0(%ebp),%eax
 81f6d3f:	89 04 24             	mov    %eax,(%esp)
 81f6d42:	e8 39 71 39 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81f6d47:	89 f0                	mov    %esi,%eax
 81f6d49:	89 da                	mov    %ebx,%edx
 81f6d4b:	89 04 24             	mov    %eax,(%esp)
 81f6d4e:	e8 fd c9 8e 00       	call   8ae3750 <_Unwind_Resume>
 81f6d53:	90                   	nop
 81f6d54:	eb 16                	jmp    81f6d6c <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x9ac>
 81f6d56:	90                   	nop
 81f6d57:	eb 13                	jmp    81f6d6c <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x9ac>
 81f6d59:	90                   	nop
 81f6d5a:	eb 10                	jmp    81f6d6c <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x9ac>
 81f6d5c:	90                   	nop
 81f6d5d:	eb 0d                	jmp    81f6d6c <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x9ac>
 81f6d5f:	90                   	nop
 81f6d60:	eb 0a                	jmp    81f6d6c <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x9ac>
 81f6d62:	90                   	nop
 81f6d63:	eb 07                	jmp    81f6d6c <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x9ac>
 81f6d65:	90                   	nop
 81f6d66:	eb 04                	jmp    81f6d6c <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x9ac>
 81f6d68:	90                   	nop
 81f6d69:	eb 01                	jmp    81f6d6c <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x9ac>
 81f6d6b:	90                   	nop
 81f6d6c:	66 c7 45 c4 00 00    	movw   $0x0,-0x3c(%ebp)
 81f6d72:	c6 45 c7 00          	movb   $0x0,-0x39(%ebp)
 81f6d76:	8b 45 bc             	mov    -0x44(%ebp),%eax
 81f6d79:	8b 40 02             	mov    0x2(%eax),%eax
 81f6d7c:	3d 8f 1f 00 00       	cmp    $0x1f8f,%eax
 81f6d81:	74 75                	je     81f6df8 <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0xa38>
 81f6d83:	3d 8f 1f 00 00       	cmp    $0x1f8f,%eax
 81f6d88:	77 23                	ja     81f6dad <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x9ed>
 81f6d8a:	3d 5e 1d 00 00       	cmp    $0x1d5e,%eax
 81f6d8f:	74 4f                	je     81f6de0 <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0xa20>
 81f6d91:	3d 5e 1d 00 00       	cmp    $0x1d5e,%eax
 81f6d96:	77 09                	ja     81f6da1 <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x9e1>
 81f6d98:	3d 20 1d 00 00       	cmp    $0x1d20,%eax
 81f6d9d:	74 35                	je     81f6dd4 <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0xa14>
 81f6d9f:	eb 6d                	jmp    81f6e0e <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0xa4e>
 81f6da1:	2d dc 1d 00 00       	sub    $0x1ddc,%eax
 81f6da6:	83 f8 01             	cmp    $0x1,%eax
 81f6da9:	77 63                	ja     81f6e0e <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0xa4e>
 81f6dab:	eb 3f                	jmp    81f6dec <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0xa2c>
 81f6dad:	3d 5a ac 27 00       	cmp    $0x27ac5a,%eax
 81f6db2:	74 44                	je     81f6df8 <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0xa38>
 81f6db4:	3d 5a ac 27 00       	cmp    $0x27ac5a,%eax
 81f6db9:	77 09                	ja     81f6dc4 <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0xa04>
 81f6dbb:	3d 1d 20 00 00       	cmp    $0x201d,%eax
 81f6dc0:	74 42                	je     81f6e04 <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0xa44>
 81f6dc2:	eb 4a                	jmp    81f6e0e <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0xa4e>
 81f6dc4:	3d dd ad 27 00       	cmp    $0x27addd,%eax
 81f6dc9:	74 2d                	je     81f6df8 <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0xa38>
 81f6dcb:	3d de 90 20 29       	cmp    $0x292090de,%eax
 81f6dd0:	74 26                	je     81f6df8 <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0xa38>
 81f6dd2:	eb 3a                	jmp    81f6e0e <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0xa4e>
 81f6dd4:	c6 45 c7 01          	movb   $0x1,-0x39(%ebp)
 81f6dd8:	66 c7 45 c4 28 00    	movw   $0x28,-0x3c(%ebp)
 81f6dde:	eb 2e                	jmp    81f6e0e <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0xa4e>
 81f6de0:	c6 45 c7 01          	movb   $0x1,-0x39(%ebp)
 81f6de4:	66 c7 45 c4 0a 00    	movw   $0xa,-0x3c(%ebp)
 81f6dea:	eb 22                	jmp    81f6e0e <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0xa4e>
 81f6dec:	c6 45 c7 01          	movb   $0x1,-0x39(%ebp)
 81f6df0:	66 c7 45 c4 06 00    	movw   $0x6,-0x3c(%ebp)
 81f6df6:	eb 16                	jmp    81f6e0e <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0xa4e>
 81f6df8:	66 c7 45 c4 1e 00    	movw   $0x1e,-0x3c(%ebp)
 81f6dfe:	c6 45 c7 01          	movb   $0x1,-0x39(%ebp)
 81f6e02:	eb 0a                	jmp    81f6e0e <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0xa4e>
 81f6e04:	66 c7 45 c4 14 00    	movw   $0x14,-0x3c(%ebp)
 81f6e0a:	c6 45 c7 01          	movb   $0x1,-0x39(%ebp)
 81f6e0e:	80 7d c7 00          	cmpb   $0x0,-0x39(%ebp)
 81f6e12:	0f 84 2b 02 00 00    	je     81f7043 <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0xc83>
 81f6e18:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f6e1b:	89 04 24             	mov    %eax,(%esp)
 81f6e1e:	e8 69 35 ee ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81f6e23:	83 f8 03             	cmp    $0x3,%eax
 81f6e26:	0f 95 c0             	setne  %al
 81f6e29:	84 c0                	test   %al,%al
 81f6e2b:	0f 84 fc 00 00 00    	je     81f6f2d <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0xb6d>
 81f6e31:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 81f6e37:	89 04 24             	mov    %eax,(%esp)
 81f6e3a:	e8 0d 6f 39 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81f6e3f:	c7 44 24 08 2f 00 00 	movl   $0x2f,0x8(%esp)
 81f6e46:	00 
 81f6e47:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f6e4e:	00 
 81f6e4f:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 81f6e55:	89 04 24             	mov    %eax,(%esp)
 81f6e58:	e8 9f 4a ed ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81f6e5d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81f6e64:	00 
 81f6e65:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 81f6e6b:	89 04 24             	mov    %eax,(%esp)
 81f6e6e:	e8 ad 4a ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f6e73:	c7 44 24 04 13 00 00 	movl   $0x13,0x4(%esp)
 81f6e7a:	00 
 81f6e7b:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 81f6e81:	89 04 24             	mov    %eax,(%esp)
 81f6e84:	e8 97 4a ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f6e89:	0f b6 45 88          	movzbl -0x78(%ebp),%eax
 81f6e8d:	0f b6 c0             	movzbl %al,%eax
 81f6e90:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f6e94:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 81f6e9a:	89 04 24             	mov    %eax,(%esp)
 81f6e9d:	e8 7e 4a ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f6ea2:	8b 45 84             	mov    -0x7c(%ebp),%eax
 81f6ea5:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f6ea9:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 81f6eaf:	89 04 24             	mov    %eax,(%esp)
 81f6eb2:	e8 85 4a ed ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81f6eb7:	8b 45 80             	mov    -0x80(%ebp),%eax
 81f6eba:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f6ebe:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 81f6ec4:	89 04 24             	mov    %eax,(%esp)
 81f6ec7:	e8 70 4a ed ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81f6ecc:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f6ed3:	00 
 81f6ed4:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 81f6eda:	89 04 24             	mov    %eax,(%esp)
 81f6edd:	e8 76 4a ed ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81f6ee2:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 81f6ee8:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f6eec:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f6eef:	89 04 24             	mov    %eax,(%esp)
 81f6ef2:	e8 c3 16 45 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81f6ef7:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f6efc:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 81f6f02:	89 04 24             	mov    %eax,(%esp)
 81f6f05:	e8 76 6f 39 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81f6f0a:	e9 21 0a 00 00       	jmp    81f7930 <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x1570>
 81f6f0f:	89 d3                	mov    %edx,%ebx
 81f6f11:	89 c6                	mov    %eax,%esi
 81f6f13:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 81f6f19:	89 04 24             	mov    %eax,(%esp)
 81f6f1c:	e8 5f 6f 39 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81f6f21:	89 f0                	mov    %esi,%eax
 81f6f23:	89 da                	mov    %ebx,%edx
 81f6f25:	89 04 24             	mov    %eax,(%esp)
 81f6f28:	e8 23 c8 8e 00       	call   8ae3750 <_Unwind_Resume>
 81f6f2d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f6f30:	89 04 24             	mov    %eax,(%esp)
 81f6f33:	e8 76 83 03 00       	call   822f2ae <_ZNK15CUserCharacInfo19getCurCharacFatigueEv>
 81f6f38:	66 3b 45 c4          	cmp    -0x3c(%ebp),%ax
 81f6f3c:	0f 92 c0             	setb   %al
 81f6f3f:	84 c0                	test   %al,%al
 81f6f41:	0f 84 fc 00 00 00    	je     81f7043 <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0xc83>
 81f6f47:	8d 85 28 ff ff ff    	lea    -0xd8(%ebp),%eax
 81f6f4d:	89 04 24             	mov    %eax,(%esp)
 81f6f50:	e8 f7 6d 39 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81f6f55:	c7 44 24 08 2f 00 00 	movl   $0x2f,0x8(%esp)
 81f6f5c:	00 
 81f6f5d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f6f64:	00 
 81f6f65:	8d 85 28 ff ff ff    	lea    -0xd8(%ebp),%eax
 81f6f6b:	89 04 24             	mov    %eax,(%esp)
 81f6f6e:	e8 89 49 ed ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81f6f73:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81f6f7a:	00 
 81f6f7b:	8d 85 28 ff ff ff    	lea    -0xd8(%ebp),%eax
 81f6f81:	89 04 24             	mov    %eax,(%esp)
 81f6f84:	e8 97 49 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f6f89:	c7 44 24 04 5f 00 00 	movl   $0x5f,0x4(%esp)
 81f6f90:	00 
 81f6f91:	8d 85 28 ff ff ff    	lea    -0xd8(%ebp),%eax
 81f6f97:	89 04 24             	mov    %eax,(%esp)
 81f6f9a:	e8 81 49 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f6f9f:	0f b6 45 88          	movzbl -0x78(%ebp),%eax
 81f6fa3:	0f b6 c0             	movzbl %al,%eax
 81f6fa6:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f6faa:	8d 85 28 ff ff ff    	lea    -0xd8(%ebp),%eax
 81f6fb0:	89 04 24             	mov    %eax,(%esp)
 81f6fb3:	e8 68 49 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f6fb8:	8b 45 84             	mov    -0x7c(%ebp),%eax
 81f6fbb:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f6fbf:	8d 85 28 ff ff ff    	lea    -0xd8(%ebp),%eax
 81f6fc5:	89 04 24             	mov    %eax,(%esp)
 81f6fc8:	e8 6f 49 ed ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81f6fcd:	8b 45 80             	mov    -0x80(%ebp),%eax
 81f6fd0:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f6fd4:	8d 85 28 ff ff ff    	lea    -0xd8(%ebp),%eax
 81f6fda:	89 04 24             	mov    %eax,(%esp)
 81f6fdd:	e8 5a 49 ed ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81f6fe2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f6fe9:	00 
 81f6fea:	8d 85 28 ff ff ff    	lea    -0xd8(%ebp),%eax
 81f6ff0:	89 04 24             	mov    %eax,(%esp)
 81f6ff3:	e8 60 49 ed ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81f6ff8:	8d 85 28 ff ff ff    	lea    -0xd8(%ebp),%eax
 81f6ffe:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f7002:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f7005:	89 04 24             	mov    %eax,(%esp)
 81f7008:	e8 ad 15 45 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81f700d:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f7012:	8d 85 28 ff ff ff    	lea    -0xd8(%ebp),%eax
 81f7018:	89 04 24             	mov    %eax,(%esp)
 81f701b:	e8 60 6e 39 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81f7020:	e9 0b 09 00 00       	jmp    81f7930 <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x1570>
 81f7025:	89 d3                	mov    %edx,%ebx
 81f7027:	89 c6                	mov    %eax,%esi
 81f7029:	8d 85 28 ff ff ff    	lea    -0xd8(%ebp),%eax
 81f702f:	89 04 24             	mov    %eax,(%esp)
 81f7032:	e8 49 6e 39 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81f7037:	89 f0                	mov    %esi,%eax
 81f7039:	89 da                	mov    %ebx,%edx
 81f703b:	89 04 24             	mov    %eax,(%esp)
 81f703e:	e8 0d c7 8e 00       	call   8ae3750 <_Unwind_Resume>
 81f7043:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f7046:	89 04 24             	mov    %eax,(%esp)
 81f7049:	e8 3e 33 ee ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81f704e:	83 f8 0a             	cmp    $0xa,%eax
 81f7051:	0f 94 c0             	sete   %al
 81f7054:	84 c0                	test   %al,%al
 81f7056:	0f 84 99 00 00 00    	je     81f70f5 <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0xd35>
 81f705c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f705f:	89 04 24             	mov    %eax,(%esp)
 81f7062:	e8 3d e2 45 00       	call   86552a4 <_ZN5CUser13getDeathTowerEv>
 81f7067:	89 45 c8             	mov    %eax,-0x38(%ebp)
 81f706a:	83 7d c8 00          	cmpl   $0x0,-0x38(%ebp)
 81f706e:	75 2b                	jne    81f709b <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0xcdb>
 81f7070:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81f7077:	00 
 81f7078:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81f707f:	00 
 81f7080:	c7 44 24 04 80 ff bc 	movl   $0x8bcff80,0x4(%esp)
 81f7087:	08 
 81f7088:	c7 04 24 56 84 00 00 	movl   $0x8456,(%esp)
 81f708f:	e8 43 98 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81f7094:	89 c3                	mov    %eax,%ebx
 81f7096:	e9 95 08 00 00       	jmp    81f7930 <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x1570>
 81f709b:	0f b7 45 96          	movzwl -0x6a(%ebp),%eax
 81f709f:	0f b7 d0             	movzwl %ax,%edx
 81f70a2:	0f b6 45 88          	movzbl -0x78(%ebp),%eax
 81f70a6:	0f b6 c0             	movzbl %al,%eax
 81f70a9:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81f70ad:	89 44 24 08          	mov    %eax,0x8(%esp)
 81f70b1:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f70b4:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f70b8:	8b 45 c8             	mov    -0x38(%ebp),%eax
 81f70bb:	89 04 24             	mov    %eax,(%esp)
 81f70be:	e8 09 f2 26 00       	call   84662cc <_ZN8WongWork11CDeathTower18handleUseStackableEP5CUser14ENUM_ITEMSPACEt>
 81f70c3:	83 f0 01             	xor    $0x1,%eax
 81f70c6:	84 c0                	test   %al,%al
 81f70c8:	74 2b                	je     81f70f5 <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0xd35>
 81f70ca:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81f70d1:	00 
 81f70d2:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81f70d9:	00 
 81f70da:	c7 44 24 04 80 ff bc 	movl   $0x8bcff80,0x4(%esp)
 81f70e1:	08 
 81f70e2:	c7 04 24 58 84 00 00 	movl   $0x8458,(%esp)
 81f70e9:	e8 e9 97 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81f70ee:	89 c3                	mov    %eax,%ebx
 81f70f0:	e9 3b 08 00 00       	jmp    81f7930 <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x1570>
 81f70f5:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f70f8:	89 04 24             	mov    %eax,(%esp)
 81f70fb:	e8 4c e0 45 00       	call   865514c <_ZN5CUser8GetPartyEv>
 81f7100:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 81f7103:	83 7d b4 00          	cmpl   $0x0,-0x4c(%ebp)
 81f7107:	0f 84 fb 05 00 00    	je     81f7708 <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x1348>
 81f710d:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 81f7114:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f7117:	89 04 24             	mov    %eax,(%esp)
 81f711a:	e8 6d 32 ee ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81f711f:	83 f8 0a             	cmp    $0xa,%eax
 81f7122:	0f 94 c0             	sete   %al
 81f7125:	84 c0                	test   %al,%al
 81f7127:	74 0e                	je     81f7137 <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0xd77>
 81f7129:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f712c:	89 04 24             	mov    %eax,(%esp)
 81f712f:	e8 70 e1 45 00       	call   86552a4 <_ZN5CUser13getDeathTowerEv>
 81f7134:	89 45 cc             	mov    %eax,-0x34(%ebp)
 81f7137:	83 7d cc 00          	cmpl   $0x0,-0x34(%ebp)
 81f713b:	0f 84 40 01 00 00    	je     81f7281 <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0xec1>
 81f7141:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81f7144:	89 04 24             	mov    %eax,(%esp)
 81f7147:	e8 c6 d4 03 00       	call   8234612 <_ZNK8WongWork11CDeathTower14getCDungeonMGrEv>
 81f714c:	89 04 24             	mov    %eax,(%esp)
 81f714f:	e8 9c d4 03 00       	call   82345f0 <_ZNK8WongWork11CDeathTower11CDungeonMgr10getDungeonEv>
 81f7154:	89 04 24             	mov    %eax,(%esp)
 81f7157:	e8 72 43 03 00       	call   822b4ce <_ZNK8CDungeon27limitOfStackableItemInTowerEv>
 81f715c:	83 f0 01             	xor    $0x1,%eax
 81f715f:	84 c0                	test   %al,%al
 81f7161:	74 15                	je     81f7178 <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0xdb8>
 81f7163:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 81f7166:	8b 80 d8 0c 00 00    	mov    0xcd8(%eax),%eax
 81f716c:	83 f8 01             	cmp    $0x1,%eax
 81f716f:	75 07                	jne    81f7178 <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0xdb8>
 81f7171:	b8 01 00 00 00       	mov    $0x1,%eax
 81f7176:	eb 05                	jmp    81f717d <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0xdbd>
 81f7178:	b8 00 00 00 00       	mov    $0x0,%eax
 81f717d:	84 c0                	test   %al,%al
 81f717f:	0f 84 83 05 00 00    	je     81f7708 <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x1348>
 81f7185:	8d 85 1c ff ff ff    	lea    -0xe4(%ebp),%eax
 81f718b:	89 04 24             	mov    %eax,(%esp)
 81f718e:	e8 b9 6b 39 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81f7193:	c7 44 24 08 2f 00 00 	movl   $0x2f,0x8(%esp)
 81f719a:	00 
 81f719b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f71a2:	00 
 81f71a3:	8d 85 1c ff ff ff    	lea    -0xe4(%ebp),%eax
 81f71a9:	89 04 24             	mov    %eax,(%esp)
 81f71ac:	e8 4b 47 ed ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81f71b1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81f71b8:	00 
 81f71b9:	8d 85 1c ff ff ff    	lea    -0xe4(%ebp),%eax
 81f71bf:	89 04 24             	mov    %eax,(%esp)
 81f71c2:	e8 59 47 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f71c7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81f71ce:	00 
 81f71cf:	8d 85 1c ff ff ff    	lea    -0xe4(%ebp),%eax
 81f71d5:	89 04 24             	mov    %eax,(%esp)
 81f71d8:	e8 43 47 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f71dd:	0f b6 45 88          	movzbl -0x78(%ebp),%eax
 81f71e1:	0f b6 c0             	movzbl %al,%eax
 81f71e4:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f71e8:	8d 85 1c ff ff ff    	lea    -0xe4(%ebp),%eax
 81f71ee:	89 04 24             	mov    %eax,(%esp)
 81f71f1:	e8 2a 47 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f71f6:	8b 45 84             	mov    -0x7c(%ebp),%eax
 81f71f9:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f71fd:	8d 85 1c ff ff ff    	lea    -0xe4(%ebp),%eax
 81f7203:	89 04 24             	mov    %eax,(%esp)
 81f7206:	e8 31 47 ed ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81f720b:	8b 45 80             	mov    -0x80(%ebp),%eax
 81f720e:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f7212:	8d 85 1c ff ff ff    	lea    -0xe4(%ebp),%eax
 81f7218:	89 04 24             	mov    %eax,(%esp)
 81f721b:	e8 1c 47 ed ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81f7220:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f7227:	00 
 81f7228:	8d 85 1c ff ff ff    	lea    -0xe4(%ebp),%eax
 81f722e:	89 04 24             	mov    %eax,(%esp)
 81f7231:	e8 22 47 ed ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81f7236:	8d 85 1c ff ff ff    	lea    -0xe4(%ebp),%eax
 81f723c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f7240:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f7243:	89 04 24             	mov    %eax,(%esp)
 81f7246:	e8 6f 13 45 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81f724b:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f7250:	8d 85 1c ff ff ff    	lea    -0xe4(%ebp),%eax
 81f7256:	89 04 24             	mov    %eax,(%esp)
 81f7259:	e8 22 6c 39 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81f725e:	e9 cd 06 00 00       	jmp    81f7930 <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x1570>
 81f7263:	89 d3                	mov    %edx,%ebx
 81f7265:	89 c6                	mov    %eax,%esi
 81f7267:	8d 85 1c ff ff ff    	lea    -0xe4(%ebp),%eax
 81f726d:	89 04 24             	mov    %eax,(%esp)
 81f7270:	e8 0b 6c 39 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81f7275:	89 f0                	mov    %esi,%eax
 81f7277:	89 da                	mov    %ebx,%edx
 81f7279:	89 04 24             	mov    %eax,(%esp)
 81f727c:	e8 cf c4 8e 00       	call   8ae3750 <_Unwind_Resume>
 81f7281:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 81f7284:	8b 80 d8 0c 00 00    	mov    0xcd8(%eax),%eax
 81f728a:	83 f8 01             	cmp    $0x1,%eax
 81f728d:	0f 85 fc 00 00 00    	jne    81f738f <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0xfcf>
 81f7293:	8d 85 10 ff ff ff    	lea    -0xf0(%ebp),%eax
 81f7299:	89 04 24             	mov    %eax,(%esp)
 81f729c:	e8 ab 6a 39 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81f72a1:	c7 44 24 08 2f 00 00 	movl   $0x2f,0x8(%esp)
 81f72a8:	00 
 81f72a9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f72b0:	00 
 81f72b1:	8d 85 10 ff ff ff    	lea    -0xf0(%ebp),%eax
 81f72b7:	89 04 24             	mov    %eax,(%esp)
 81f72ba:	e8 3d 46 ed ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81f72bf:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81f72c6:	00 
 81f72c7:	8d 85 10 ff ff ff    	lea    -0xf0(%ebp),%eax
 81f72cd:	89 04 24             	mov    %eax,(%esp)
 81f72d0:	e8 4b 46 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f72d5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81f72dc:	00 
 81f72dd:	8d 85 10 ff ff ff    	lea    -0xf0(%ebp),%eax
 81f72e3:	89 04 24             	mov    %eax,(%esp)
 81f72e6:	e8 35 46 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f72eb:	0f b6 45 88          	movzbl -0x78(%ebp),%eax
 81f72ef:	0f b6 c0             	movzbl %al,%eax
 81f72f2:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f72f6:	8d 85 10 ff ff ff    	lea    -0xf0(%ebp),%eax
 81f72fc:	89 04 24             	mov    %eax,(%esp)
 81f72ff:	e8 1c 46 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f7304:	8b 45 84             	mov    -0x7c(%ebp),%eax
 81f7307:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f730b:	8d 85 10 ff ff ff    	lea    -0xf0(%ebp),%eax
 81f7311:	89 04 24             	mov    %eax,(%esp)
 81f7314:	e8 23 46 ed ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81f7319:	8b 45 80             	mov    -0x80(%ebp),%eax
 81f731c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f7320:	8d 85 10 ff ff ff    	lea    -0xf0(%ebp),%eax
 81f7326:	89 04 24             	mov    %eax,(%esp)
 81f7329:	e8 0e 46 ed ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81f732e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f7335:	00 
 81f7336:	8d 85 10 ff ff ff    	lea    -0xf0(%ebp),%eax
 81f733c:	89 04 24             	mov    %eax,(%esp)
 81f733f:	e8 14 46 ed ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81f7344:	8d 85 10 ff ff ff    	lea    -0xf0(%ebp),%eax
 81f734a:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f734e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f7351:	89 04 24             	mov    %eax,(%esp)
 81f7354:	e8 61 12 45 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81f7359:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f735e:	8d 85 10 ff ff ff    	lea    -0xf0(%ebp),%eax
 81f7364:	89 04 24             	mov    %eax,(%esp)
 81f7367:	e8 14 6b 39 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81f736c:	e9 bf 05 00 00       	jmp    81f7930 <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x1570>
 81f7371:	89 d3                	mov    %edx,%ebx
 81f7373:	89 c6                	mov    %eax,%esi
 81f7375:	8d 85 10 ff ff ff    	lea    -0xf0(%ebp),%eax
 81f737b:	89 04 24             	mov    %eax,(%esp)
 81f737e:	e8 fd 6a 39 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81f7383:	89 f0                	mov    %esi,%eax
 81f7385:	89 da                	mov    %ebx,%edx
 81f7387:	89 04 24             	mov    %eax,(%esp)
 81f738a:	e8 c1 c3 8e 00       	call   8ae3750 <_Unwind_Resume>
 81f738f:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 81f7392:	8b 80 ac 0c 00 00    	mov    0xcac(%eax),%eax
 81f7398:	85 c0                	test   %eax,%eax
 81f739a:	0f 84 1d 01 00 00    	je     81f74bd <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x10fd>
 81f73a0:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 81f73a3:	8b 80 ac 0c 00 00    	mov    0xcac(%eax),%eax
 81f73a9:	89 04 24             	mov    %eax,(%esp)
 81f73ac:	e8 49 41 03 00       	call   822b4fa <_ZNK8CDungeon23isTowerOfDespairDungeonEv>
 81f73b1:	84 c0                	test   %al,%al
 81f73b3:	0f 84 04 01 00 00    	je     81f74bd <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x10fd>
 81f73b9:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 81f73bc:	8b 80 ac 0c 00 00    	mov    0xcac(%eax),%eax
 81f73c2:	89 04 24             	mov    %eax,(%esp)
 81f73c5:	e8 04 41 03 00       	call   822b4ce <_ZNK8CDungeon27limitOfStackableItemInTowerEv>
 81f73ca:	84 c0                	test   %al,%al
 81f73cc:	0f 84 eb 00 00 00    	je     81f74bd <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x10fd>
 81f73d2:	0f b7 45 96          	movzwl -0x6a(%ebp),%eax
 81f73d6:	0f bf f0             	movswl %ax,%esi
 81f73d9:	0f b6 45 88          	movzbl -0x78(%ebp),%eax
 81f73dd:	0f b6 c0             	movzbl %al,%eax
 81f73e0:	89 04 24             	mov    %eax,(%esp)
 81f73e3:	e8 5d 04 f0 ff       	call   80f7845 <_Z25GetInvenTypeFromItemSpace14ENUM_ITEMSPACE>
 81f73e8:	89 c3                	mov    %eax,%ebx
 81f73ea:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f73ed:	89 04 24             	mov    %eax,(%esp)
 81f73f0:	e8 89 2e ee ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 81f73f5:	89 74 24 08          	mov    %esi,0x8(%esp)
 81f73f9:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81f73fd:	89 04 24             	mov    %eax,(%esp)
 81f7400:	e8 d9 4d 30 00       	call   84fc1de <_ZNK10CInventory11GetInvenRefEii>
 81f7405:	89 45 d0             	mov    %eax,-0x30(%ebp)
 81f7408:	83 7d d0 00          	cmpl   $0x0,-0x30(%ebp)
 81f740c:	75 0a                	jne    81f7418 <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x1058>
 81f740e:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f7413:	e9 18 05 00 00       	jmp    81f7930 <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x1570>
 81f7418:	8b 45 d0             	mov    -0x30(%ebp),%eax
 81f741b:	8b 40 02             	mov    0x2(%eax),%eax
 81f741e:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 81f7421:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81f7424:	83 f8 18             	cmp    $0x18,%eax
 81f7427:	0f 84 86 00 00 00    	je     81f74b3 <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x10f3>
 81f742d:	83 f8 18             	cmp    $0x18,%eax
 81f7430:	77 07                	ja     81f7439 <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x1079>
 81f7432:	83 f8 0a             	cmp    $0xa,%eax
 81f7435:	74 7f                	je     81f74b6 <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x10f6>
 81f7437:	eb 0c                	jmp    81f7445 <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x1085>
 81f7439:	83 f8 33             	cmp    $0x33,%eax
 81f743c:	74 7b                	je     81f74b9 <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x10f9>
 81f743e:	3d 8a 97 28 00       	cmp    $0x28978a,%eax
 81f7443:	74 77                	je     81f74bc <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x10fc>
 81f7445:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 81f7448:	05 24 0b 00 00       	add    $0xb24,%eax
 81f744d:	89 04 24             	mov    %eax,(%esp)
 81f7450:	e8 83 5c 03 00       	call   822d0d8 <_ZN13CBattle_Field17get_dungeon_indexEv>
 81f7455:	89 c6                	mov    %eax,%esi
 81f7457:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f745a:	89 04 24             	mov    %eax,(%esp)
 81f745d:	e8 ec 47 ed ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 81f7462:	89 c3                	mov    %eax,%ebx
 81f7464:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 81f746b:	00 
 81f746c:	c7 44 24 08 a2 84 00 	movl   $0x84a2,0x8(%esp)
 81f7473:	00 
 81f7474:	c7 44 24 04 80 ff bc 	movl   $0x8bcff80,0x4(%esp)
 81f747b:	08 
 81f747c:	8d 45 98             	lea    -0x68(%ebp),%eax
 81f747f:	89 04 24             	mov    %eax,(%esp)
 81f7482:	e8 91 82 35 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81f7487:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81f748a:	89 44 24 10          	mov    %eax,0x10(%esp)
 81f748e:	89 74 24 0c          	mov    %esi,0xc(%esp)
 81f7492:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81f7496:	c7 44 24 04 70 22 bc 	movl   $0x8bc2270,0x4(%esp)
 81f749d:	08 
 81f749e:	8d 45 98             	lea    -0x68(%ebp),%eax
 81f74a1:	89 04 24             	mov    %eax,(%esp)
 81f74a4:	e8 df 82 35 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81f74a9:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f74ae:	e9 7d 04 00 00       	jmp    81f7930 <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x1570>
 81f74b3:	90                   	nop
 81f74b4:	eb 07                	jmp    81f74bd <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x10fd>
 81f74b6:	90                   	nop
 81f74b7:	eb 04                	jmp    81f74bd <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x10fd>
 81f74b9:	90                   	nop
 81f74ba:	eb 01                	jmp    81f74bd <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x10fd>
 81f74bc:	90                   	nop
 81f74bd:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 81f74c0:	8b 80 ac 0c 00 00    	mov    0xcac(%eax),%eax
 81f74c6:	85 c0                	test   %eax,%eax
 81f74c8:	0f 84 3a 02 00 00    	je     81f7708 <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x1348>
 81f74ce:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 81f74d1:	8b 80 ac 0c 00 00    	mov    0xcac(%eax),%eax
 81f74d7:	89 45 d8             	mov    %eax,-0x28(%ebp)
 81f74da:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81f74dd:	89 04 24             	mov    %eax,(%esp)
 81f74e0:	e8 25 dd 16 00       	call   836520a <_ZNK8CDungeon19isTournamentDungeonEv>
 81f74e5:	84 c0                	test   %al,%al
 81f74e7:	0f 84 1b 02 00 00    	je     81f7708 <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x1348>
 81f74ed:	0f b7 45 96          	movzwl -0x6a(%ebp),%eax
 81f74f1:	0f bf f0             	movswl %ax,%esi
 81f74f4:	0f b6 45 88          	movzbl -0x78(%ebp),%eax
 81f74f8:	0f b6 c0             	movzbl %al,%eax
 81f74fb:	89 04 24             	mov    %eax,(%esp)
 81f74fe:	e8 42 03 f0 ff       	call   80f7845 <_Z25GetInvenTypeFromItemSpace14ENUM_ITEMSPACE>
 81f7503:	89 c3                	mov    %eax,%ebx
 81f7505:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f7508:	89 04 24             	mov    %eax,(%esp)
 81f750b:	e8 6e 2d ee ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 81f7510:	89 74 24 08          	mov    %esi,0x8(%esp)
 81f7514:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81f7518:	89 04 24             	mov    %eax,(%esp)
 81f751b:	e8 be 4c 30 00       	call   84fc1de <_ZNK10CInventory11GetInvenRefEii>
 81f7520:	89 45 dc             	mov    %eax,-0x24(%ebp)
 81f7523:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 81f7527:	75 2b                	jne    81f7554 <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x1194>
 81f7529:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81f7530:	00 
 81f7531:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81f7538:	00 
 81f7539:	c7 44 24 04 80 ff bc 	movl   $0x8bcff80,0x4(%esp)
 81f7540:	08 
 81f7541:	c7 04 24 b1 84 00 00 	movl   $0x84b1,(%esp)
 81f7548:	e8 8a 93 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81f754d:	89 c3                	mov    %eax,%ebx
 81f754f:	e9 dc 03 00 00       	jmp    81f7930 <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x1570>
 81f7554:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81f7557:	8b 40 02             	mov    0x2(%eax),%eax
 81f755a:	89 c3                	mov    %eax,%ebx
 81f755c:	e8 3a 4c ed ff       	call   80cc19b <_Z14G_CDataManagerv>
 81f7561:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81f7565:	89 04 24             	mov    %eax,(%esp)
 81f7568:	e8 c5 84 16 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 81f756d:	89 45 e0             	mov    %eax,-0x20(%ebp)
 81f7570:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 81f7574:	75 0a                	jne    81f7580 <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x11c0>
 81f7576:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f757b:	e9 b0 03 00 00       	jmp    81f7930 <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x1570>
 81f7580:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81f7583:	89 04 24             	mov    %eax,(%esp)
 81f7586:	e8 6f 9d ef ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 81f758b:	83 f0 01             	xor    $0x1,%eax
 81f758e:	84 c0                	test   %al,%al
 81f7590:	74 0a                	je     81f759c <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x11dc>
 81f7592:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f7597:	e9 94 03 00 00       	jmp    81f7930 <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x1570>
 81f759c:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81f759f:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81f75a2:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 81f75a9:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81f75ac:	89 04 24             	mov    %eax,(%esp)
 81f75af:	e8 1e 54 03 00       	call   822c9d2 <_ZNK14CStackableItem12get_sub_typeEv>
 81f75b4:	83 f8 02             	cmp    $0x2,%eax
 81f75b7:	0f 94 c0             	sete   %al
 81f75ba:	84 c0                	test   %al,%al
 81f75bc:	74 09                	je     81f75c7 <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x1207>
 81f75be:	c7 45 e8 ff 00 00 00 	movl   $0xff,-0x18(%ebp)
 81f75c5:	eb 3c                	jmp    81f7603 <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x1243>
 81f75c7:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81f75ca:	0f b6 80 64 03 00 00 	movzbl 0x364(%eax),%eax
 81f75d1:	84 c0                	test   %al,%al
 81f75d3:	74 1e                	je     81f75f3 <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x1233>
 81f75d5:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81f75d8:	8b 00                	mov    (%eax),%eax
 81f75da:	83 c0 0c             	add    $0xc,%eax
 81f75dd:	8b 10                	mov    (%eax),%edx
 81f75df:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81f75e2:	89 04 24             	mov    %eax,(%esp)
 81f75e5:	ff d2                	call   *%edx
 81f75e7:	83 f8 12             	cmp    $0x12,%eax
 81f75ea:	74 07                	je     81f75f3 <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x1233>
 81f75ec:	b8 01 00 00 00       	mov    $0x1,%eax
 81f75f1:	eb 05                	jmp    81f75f8 <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x1238>
 81f75f3:	b8 00 00 00 00       	mov    $0x0,%eax
 81f75f8:	84 c0                	test   %al,%al
 81f75fa:	74 07                	je     81f7603 <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x1243>
 81f75fc:	c7 45 e8 ff 00 00 00 	movl   $0xff,-0x18(%ebp)
 81f7603:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 81f7607:	0f 84 fb 00 00 00    	je     81f7708 <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x1348>
 81f760d:	8d 85 04 ff ff ff    	lea    -0xfc(%ebp),%eax
 81f7613:	89 04 24             	mov    %eax,(%esp)
 81f7616:	e8 31 67 39 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81f761b:	c7 44 24 08 2f 00 00 	movl   $0x2f,0x8(%esp)
 81f7622:	00 
 81f7623:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f762a:	00 
 81f762b:	8d 85 04 ff ff ff    	lea    -0xfc(%ebp),%eax
 81f7631:	89 04 24             	mov    %eax,(%esp)
 81f7634:	e8 c3 42 ed ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81f7639:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81f7640:	00 
 81f7641:	8d 85 04 ff ff ff    	lea    -0xfc(%ebp),%eax
 81f7647:	89 04 24             	mov    %eax,(%esp)
 81f764a:	e8 d1 42 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f764f:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81f7652:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f7656:	8d 85 04 ff ff ff    	lea    -0xfc(%ebp),%eax
 81f765c:	89 04 24             	mov    %eax,(%esp)
 81f765f:	e8 bc 42 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f7664:	0f b6 45 88          	movzbl -0x78(%ebp),%eax
 81f7668:	0f b6 c0             	movzbl %al,%eax
 81f766b:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f766f:	8d 85 04 ff ff ff    	lea    -0xfc(%ebp),%eax
 81f7675:	89 04 24             	mov    %eax,(%esp)
 81f7678:	e8 a3 42 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f767d:	8b 45 84             	mov    -0x7c(%ebp),%eax
 81f7680:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f7684:	8d 85 04 ff ff ff    	lea    -0xfc(%ebp),%eax
 81f768a:	89 04 24             	mov    %eax,(%esp)
 81f768d:	e8 aa 42 ed ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81f7692:	8b 45 80             	mov    -0x80(%ebp),%eax
 81f7695:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f7699:	8d 85 04 ff ff ff    	lea    -0xfc(%ebp),%eax
 81f769f:	89 04 24             	mov    %eax,(%esp)
 81f76a2:	e8 95 42 ed ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81f76a7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f76ae:	00 
 81f76af:	8d 85 04 ff ff ff    	lea    -0xfc(%ebp),%eax
 81f76b5:	89 04 24             	mov    %eax,(%esp)
 81f76b8:	e8 9b 42 ed ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81f76bd:	8d 85 04 ff ff ff    	lea    -0xfc(%ebp),%eax
 81f76c3:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f76c7:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f76ca:	89 04 24             	mov    %eax,(%esp)
 81f76cd:	e8 e8 0e 45 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81f76d2:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f76d7:	8d 85 04 ff ff ff    	lea    -0xfc(%ebp),%eax
 81f76dd:	89 04 24             	mov    %eax,(%esp)
 81f76e0:	e8 9b 67 39 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81f76e5:	e9 46 02 00 00       	jmp    81f7930 <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x1570>
 81f76ea:	89 d3                	mov    %edx,%ebx
 81f76ec:	89 c6                	mov    %eax,%esi
 81f76ee:	8d 85 04 ff ff ff    	lea    -0xfc(%ebp),%eax
 81f76f4:	89 04 24             	mov    %eax,(%esp)
 81f76f7:	e8 84 67 39 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81f76fc:	89 f0                	mov    %esi,%eax
 81f76fe:	89 da                	mov    %ebx,%edx
 81f7700:	89 04 24             	mov    %eax,(%esp)
 81f7703:	e8 48 c0 8e 00       	call   8ae3750 <_Unwind_Resume>
 81f7708:	0f b7 45 96          	movzwl -0x6a(%ebp),%eax
 81f770c:	0f bf f0             	movswl %ax,%esi
 81f770f:	0f b6 45 88          	movzbl -0x78(%ebp),%eax
 81f7713:	0f b6 c0             	movzbl %al,%eax
 81f7716:	89 04 24             	mov    %eax,(%esp)
 81f7719:	e8 27 01 f0 ff       	call   80f7845 <_Z25GetInvenTypeFromItemSpace14ENUM_ITEMSPACE>
 81f771e:	89 c3                	mov    %eax,%ebx
 81f7720:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f7723:	89 04 24             	mov    %eax,(%esp)
 81f7726:	e8 53 2b ee ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 81f772b:	89 74 24 08          	mov    %esi,0x8(%esp)
 81f772f:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81f7733:	89 04 24             	mov    %eax,(%esp)
 81f7736:	e8 a3 4a 30 00       	call   84fc1de <_ZNK10CInventory11GetInvenRefEii>
 81f773b:	89 45 b8             	mov    %eax,-0x48(%ebp)
 81f773e:	83 7d b8 00          	cmpl   $0x0,-0x48(%ebp)
 81f7742:	75 0a                	jne    81f774e <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x138e>
 81f7744:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f7749:	e9 e2 01 00 00       	jmp    81f7930 <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x1570>
 81f774e:	8b 45 b8             	mov    -0x48(%ebp),%eax
 81f7751:	8b 40 02             	mov    0x2(%eax),%eax
 81f7754:	3d 4a ac 27 00       	cmp    $0x27ac4a,%eax
 81f7759:	0f 85 70 01 00 00    	jne    81f78cf <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x150f>
 81f775f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f7762:	89 04 24             	mov    %eax,(%esp)
 81f7765:	e8 44 80 03 00       	call   822f7ae <_ZN15CUserCharacInfo25GetCurCharacChaosKillTimeEv>
 81f776a:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81f776d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f7770:	89 04 24             	mov    %eax,(%esp)
 81f7773:	e8 d4 d9 45 00       	call   865514c <_ZN5CUser8GetPartyEv>
 81f7778:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81f777b:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
 81f777f:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 81f7786:	e8 13 45 ed ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 81f778b:	8b 55 ec             	mov    -0x14(%ebp),%edx
 81f778e:	81 c2 58 02 00 00    	add    $0x258,%edx
 81f7794:	39 d0                	cmp    %edx,%eax
 81f7796:	0f 9c c0             	setl   %al
 81f7799:	84 c0                	test   %al,%al
 81f779b:	74 06                	je     81f77a3 <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x13e3>
 81f779d:	c6 45 f7 fa          	movb   $0xfa,-0x9(%ebp)
 81f77a1:	eb 29                	jmp    81f77cc <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x140c>
 81f77a3:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 81f77a7:	74 16                	je     81f77bf <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x13ff>
 81f77a9:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81f77ac:	89 04 24             	mov    %eax,(%esp)
 81f77af:	e8 02 53 3c 00       	call   85bcab6 <_ZN6CParty29CheckMemberLastTryAssaultTimeEv>
 81f77b4:	84 c0                	test   %al,%al
 81f77b6:	74 07                	je     81f77bf <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x13ff>
 81f77b8:	b8 01 00 00 00       	mov    $0x1,%eax
 81f77bd:	eb 05                	jmp    81f77c4 <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x1404>
 81f77bf:	b8 00 00 00 00       	mov    $0x0,%eax
 81f77c4:	84 c0                	test   %al,%al
 81f77c6:	74 04                	je     81f77cc <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x140c>
 81f77c8:	c6 45 f7 fd          	movb   $0xfd,-0x9(%ebp)
 81f77cc:	80 7d f7 00          	cmpb   $0x0,-0x9(%ebp)
 81f77d0:	0f 84 f9 00 00 00    	je     81f78cf <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x150f>
 81f77d6:	8d 85 f8 fe ff ff    	lea    -0x108(%ebp),%eax
 81f77dc:	89 04 24             	mov    %eax,(%esp)
 81f77df:	e8 68 65 39 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81f77e4:	c7 44 24 08 2f 00 00 	movl   $0x2f,0x8(%esp)
 81f77eb:	00 
 81f77ec:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f77f3:	00 
 81f77f4:	8d 85 f8 fe ff ff    	lea    -0x108(%ebp),%eax
 81f77fa:	89 04 24             	mov    %eax,(%esp)
 81f77fd:	e8 fa 40 ed ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81f7802:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81f7809:	00 
 81f780a:	8d 85 f8 fe ff ff    	lea    -0x108(%ebp),%eax
 81f7810:	89 04 24             	mov    %eax,(%esp)
 81f7813:	e8 08 41 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f7818:	0f be 45 f7          	movsbl -0x9(%ebp),%eax
 81f781c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f7820:	8d 85 f8 fe ff ff    	lea    -0x108(%ebp),%eax
 81f7826:	89 04 24             	mov    %eax,(%esp)
 81f7829:	e8 f2 40 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f782e:	0f b6 45 88          	movzbl -0x78(%ebp),%eax
 81f7832:	0f b6 c0             	movzbl %al,%eax
 81f7835:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f7839:	8d 85 f8 fe ff ff    	lea    -0x108(%ebp),%eax
 81f783f:	89 04 24             	mov    %eax,(%esp)
 81f7842:	e8 d9 40 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f7847:	8b 45 84             	mov    -0x7c(%ebp),%eax
 81f784a:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f784e:	8d 85 f8 fe ff ff    	lea    -0x108(%ebp),%eax
 81f7854:	89 04 24             	mov    %eax,(%esp)
 81f7857:	e8 e0 40 ed ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81f785c:	8b 45 80             	mov    -0x80(%ebp),%eax
 81f785f:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f7863:	8d 85 f8 fe ff ff    	lea    -0x108(%ebp),%eax
 81f7869:	89 04 24             	mov    %eax,(%esp)
 81f786c:	e8 cb 40 ed ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81f7871:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f7878:	00 
 81f7879:	8d 85 f8 fe ff ff    	lea    -0x108(%ebp),%eax
 81f787f:	89 04 24             	mov    %eax,(%esp)
 81f7882:	e8 d1 40 ed ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81f7887:	8d 85 f8 fe ff ff    	lea    -0x108(%ebp),%eax
 81f788d:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f7891:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f7894:	89 04 24             	mov    %eax,(%esp)
 81f7897:	e8 1e 0d 45 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81f789c:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f78a1:	8d 85 f8 fe ff ff    	lea    -0x108(%ebp),%eax
 81f78a7:	89 04 24             	mov    %eax,(%esp)
 81f78aa:	e8 d1 65 39 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81f78af:	eb 7f                	jmp    81f7930 <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x1570>
 81f78b1:	89 d3                	mov    %edx,%ebx
 81f78b3:	89 c6                	mov    %eax,%esi
 81f78b5:	8d 85 f8 fe ff ff    	lea    -0x108(%ebp),%eax
 81f78bb:	89 04 24             	mov    %eax,(%esp)
 81f78be:	e8 bd 65 39 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81f78c3:	89 f0                	mov    %esi,%eax
 81f78c5:	89 da                	mov    %ebx,%edx
 81f78c7:	89 04 24             	mov    %eax,(%esp)
 81f78ca:	e8 81 be 8e 00       	call   8ae3750 <_Unwind_Resume>
 81f78cf:	8b 5d 80             	mov    -0x80(%ebp),%ebx
 81f78d2:	8b 4d 84             	mov    -0x7c(%ebp),%ecx
 81f78d5:	0f b6 45 88          	movzbl -0x78(%ebp),%eax
 81f78d9:	0f b6 d0             	movzbl %al,%edx
 81f78dc:	0f b7 45 96          	movzwl -0x6a(%ebp),%eax
 81f78e0:	98                   	cwtl
 81f78e1:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 81f78e5:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 81f78e9:	89 54 24 08          	mov    %edx,0x8(%esp)
 81f78ed:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f78f1:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f78f4:	89 04 24             	mov    %eax,(%esp)
 81f78f7:	e8 b2 67 46 00       	call   865e0ae <_ZN5CUser13use_stackableEsiii>
 81f78fc:	83 f0 01             	xor    $0x1,%eax
 81f78ff:	84 c0                	test   %al,%al
 81f7901:	74 28                	je     81f792b <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x156b>
 81f7903:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81f790a:	00 
 81f790b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81f7912:	00 
 81f7913:	c7 44 24 04 80 ff bc 	movl   $0x8bcff80,0x4(%esp)
 81f791a:	08 
 81f791b:	c7 04 24 08 85 00 00 	movl   $0x8508,(%esp)
 81f7922:	e8 b0 8f 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81f7927:	89 c3                	mov    %eax,%ebx
 81f7929:	eb 05                	jmp    81f7930 <_ZN19DisPatcher_UseStack12dispatch_sigEP5CUserR9PacketBuf+0x1570>
 81f792b:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f7930:	89 d8                	mov    %ebx,%eax
 81f7932:	81 c4 20 01 00 00    	add    $0x120,%esp
 81f7938:	5b                   	pop    %ebx
 81f7939:	5e                   	pop    %esi
 81f793a:	5d                   	pop    %ebp
 81f793b:	c3                   	ret

```

```c
// DisPatcher_UseStack::dispatch_sig @ 0x81f63c0

/* WARNING: Removing unreachable block (ram,0x081f6d33) */
/* DisPatcher_UseStack::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
DisPatcher_UseStack::dispatch_sig(DisPatcher_UseStack *this,CUser *param_1,PacketBuf *param_2)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  ushort uVar4;
  undefined4 uVar5;
  int iVar6;
  CHackAnalyzer *pCVar7;
  ServiceRestrictManager *pSVar8;
  CInventory *pCVar9;
  CDataManager *pCVar10;
  CDungeonMgr *this_00;
  CDungeon *this_01;
  undefined4 uVar11;
  int iVar12;
  PacketGuard local_10c [12];
  PacketGuard local_100 [12];
  PacketGuard local_f4 [12];
  PacketGuard local_e8 [12];
  PacketGuard local_dc [12];
  PacketGuard local_d0 [12];
  PacketGuard local_c4 [12];
  PacketGuard local_b8 [12];
  PacketGuard local_ac [12];
  PacketGuard local_a0 [12];
  PacketGuard local_94 [12];
  int local_88;
  int local_84;
  int local_80;
  byte local_7c [14];
  short local_6e;
  cMyTrace local_6c [16];
  CItem *local_5c;
  int local_58;
  undefined4 local_54;
  int local_50;
  int local_4c;
  int local_48;
  int *local_44;
  ushort local_40;
  char local_3d;
  CDeathTower *local_3c;
  CDeathTower *local_38;
  int local_34;
  uint local_30;
  CDungeon *local_2c;
  int local_28;
  CStackableItem *local_24;
  CStackableItem *local_20;
  int local_1c;
  int local_18;
  CParty *local_14;
  char local_d;
  
  cVar3 = PacketBuf::get_short(param_2,&local_6e);
  if (cVar3 != '\x01') {
    uVar5 = LineFunc(0x8315,"virtual int DisPatcher_UseStack::dispatch_sig(CUser*, PacketBuf&)",0,0)
    ;
    return uVar5;
  }
  cVar3 = PacketBuf::get_byte(param_2,local_7c);
  if (cVar3 != '\x01') {
    uVar5 = LineFunc(0x8318,"virtual int DisPatcher_UseStack::dispatch_sig(CUser*, PacketBuf&)",0,0)
    ;
    return uVar5;
  }
  local_80 = 0;
  local_84 = 0;
  cVar3 = PacketBuf::get_int(param_2,&local_80);
  if (cVar3 != '\x01') {
    uVar5 = LineFunc(0x831d,"virtual int DisPatcher_UseStack::dispatch_sig(CUser*, PacketBuf&)",0,0)
    ;
    return uVar5;
  }
  cVar3 = PacketBuf::get_int(param_2,&local_84);
  if (cVar3 != '\x01') {
    uVar5 = LineFunc(0x831e,"virtual int DisPatcher_UseStack::dispatch_sig(CUser*, PacketBuf&)",0,0)
    ;
    return uVar5;
  }
  iVar6 = CUser::get_state(param_1);
  if (((((iVar6 == 5) || (iVar6 = CUser::get_state(param_1), iVar6 == 7)) ||
       (iVar6 = CUser::get_state(param_1), iVar6 == 8)) ||
      ((iVar6 = CUser::get_state(param_1), iVar6 == 3 ||
       (iVar6 = CUser::get_state(param_1), iVar6 == 6)))) ||
     ((iVar6 = CUser::get_state(param_1), iVar6 == 10 ||
      (iVar6 = CUser::get_state(param_1), iVar6 == 0xc)))) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    PacketGuard::PacketGuard(local_94);
                    /* try { // try from 081f6597 to 081f6635 has its CatchHandler @ 081f664e */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_94,1,0x2f);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_94,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_94,0x13);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_94,(uint)local_7c[0]);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_94,local_80);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_94,local_84);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_94,true);
    CUser::Send(param_1,local_94);
    PacketGuard::~PacketGuard(local_94);
    return 0;
  }
  local_88 = 0;
  cVar3 = PacketBuf::get_int(param_2,&local_88);
  if (cVar3 != '\x01') {
    uVar5 = LineFunc(0x8338,"virtual int DisPatcher_UseStack::dispatch_sig(CUser*, PacketBuf&)",0,0)
    ;
    return uVar5;
  }
  iVar6 = CUser::getCurCharacInvenCheckSum(param_1);
  if (iVar6 != local_88) {
    pCVar7 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
    WongWork::CHackAnalyzer::addServerHackCnt(pCVar7,param_1,0x25b,1,0,0);
  }
  pSVar8 = (ServiceRestrictManager *)ARAD::Singleton<ServiceRestrictManager>::Get();
  cVar3 = ServiceRestrictManager::isRestricted(pSVar8,param_1,1,0xc);
  if (cVar3 != '\0') {
    PacketGuard::PacketGuard(local_a0);
                    /* try { // try from 081f6764 to 081f6802 has its CatchHandler @ 081f681b */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_a0,1,0x2f);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_a0,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_a0,0xd1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_a0,(uint)local_7c[0]);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_a0,local_80);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_a0,local_84);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_a0,true);
    CUser::Send(param_1,local_a0);
    PacketGuard::~PacketGuard(local_a0);
    return 0;
  }
  local_5c = (CItem *)CSecu_ProtectionField::GetItemPtr
                                (GlobalData::s_pSecuProtectionField,param_1,local_7c[0],local_6e);
  if (local_5c == (CItem *)0x0) {
    uVar5 = LineFunc(0x8354,"virtual int DisPatcher_UseStack::dispatch_sig(CUser*, PacketBuf&)",0,0)
    ;
    return uVar5;
  }
  local_58 = CSecu_ProtectionField::CheckItem
                       (GlobalData::s_pSecuProtectionField,param_1,0x2a,local_5c);
  if (local_58 != 0) {
    PacketGuard::PacketGuard(local_ac);
                    /* try { // try from 081f68ee to 081f698b has its CatchHandler @ 081f69a4 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_ac,1,0x2f);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_ac,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_ac,local_58);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_ac,(uint)local_7c[0]);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_ac,local_80);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_ac,local_84);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_ac,true);
    CUser::Send(param_1,local_ac);
    PacketGuard::~PacketGuard(local_ac);
    return 0;
  }
  cVar3 = CItem::is_stackable(local_5c);
  if ((cVar3 != '\0') &&
     (cVar3 = CStackableItem::verifyUsablePlace((CStackableItem *)local_5c,param_1), cVar3 != '\x01'
     )) {
    PacketGuard::PacketGuard(local_b8);
                    /* try { // try from 081f6a19 to 081f6ab7 has its CatchHandler @ 081f6ad0 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_b8,1,0x2f);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b8,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b8,0x13);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b8,(uint)local_7c[0]);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_b8,local_80);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_b8,local_84);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_b8,true);
    CUser::Send(param_1,local_b8);
    PacketGuard::~PacketGuard(local_b8);
    return 0;
  }
  local_54 = 0;
  iVar6 = CUserCharacInfo::GetAssaultPlace((CUserCharacInfo *)param_1);
  if ((iVar6 == 0) &&
     ((iVar6 = CUser::get_state(param_1), iVar6 == 3 ||
      (iVar6 = CUser::get_state(param_1), iVar6 == 6)))) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    iVar12 = (int)local_6e;
    iVar6 = GetInvenTypeFromItemSpace(local_7c[0]);
    pCVar9 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    local_48 = CInventory::GetInvenRef(pCVar9,iVar6,iVar12);
    if (local_48 == 0) {
      uVar5 = LineFunc(0x83b7,"virtual int DisPatcher_UseStack::dispatch_sig(CUser*, PacketBuf&)",0,
                       0);
      return uVar5;
    }
    iVar6 = *(int *)(local_48 + 2);
    pCVar10 = (CDataManager *)G_CDataManager();
    local_44 = (int *)CDataManager::find_item(pCVar10,iVar6);
    if (local_44 == (int *)0x0) {
      return 0;
    }
    iVar6 = (**(code **)(*local_44 + 0xc))(local_44);
    if (iVar6 != 0x16) {
      if (iVar6 < 0x17) {
        if (iVar6 != 3) {
LAB_081f6c08:
          uVar1 = *(uint *)(local_48 + 2);
          if (uVar1 != 0x33) {
            if (uVar1 < 0x34) {
              if ((uVar1 != 10) && (uVar1 != 0x18)) {
LAB_081f6c4d:
                PacketGuard::PacketGuard(local_c4);
                    /* try { // try from 081f6c74 to 081f6d12 has its CatchHandler @ 081f6d35 */
                InterfacePacketBuf::put_header((InterfacePacketBuf *)local_c4,1,0x2f);
                InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_c4,0);
                InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_c4,0x13);
                InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_c4,(uint)local_7c[0]);
                InterfacePacketBuf::put_int((InterfacePacketBuf *)local_c4,local_80);
                InterfacePacketBuf::put_int((InterfacePacketBuf *)local_c4,local_84);
                InterfacePacketBuf::finalize((InterfacePacketBuf *)local_c4,true);
                CUser::Send(param_1,local_c4);
                PacketGuard::~PacketGuard(local_c4);
                return 0;
              }
            }
            else if ((uVar1 < 0x1e6d) || ((0x1e73 < uVar1 && (uVar1 != 0x28978a))))
            goto LAB_081f6c4d;
          }
        }
      }
      else if ((iVar6 != 0x18) && (iVar6 != 0x23)) goto LAB_081f6c08;
    }
    local_40 = 0;
    local_3d = '\0';
    uVar1 = *(uint *)(local_48 + 2);
    if (uVar1 == 0x1f8f) {
LAB_081f6df8:
      local_40 = 0x1e;
      local_3d = '\x01';
    }
    else if (uVar1 < 0x1f90) {
      if (uVar1 == 0x1d5e) {
        local_3d = '\x01';
        local_40 = 10;
      }
      else if (uVar1 < 0x1d5f) {
        if (uVar1 == 0x1d20) {
          local_3d = '\x01';
          local_40 = 0x28;
        }
      }
      else if (uVar1 - 0x1ddc < 2) {
        local_3d = '\x01';
        local_40 = 6;
      }
    }
    else {
      if (uVar1 == 0x27ac5a) goto LAB_081f6df8;
      if (uVar1 < 0x27ac5b) {
        if (uVar1 == 0x201d) {
          local_40 = 0x14;
          local_3d = '\x01';
        }
      }
      else if ((uVar1 == 0x27addd) || (uVar1 == 0x292090de)) goto LAB_081f6df8;
    }
    if (local_3d != '\0') {
      iVar6 = CUser::get_state(param_1);
      if (iVar6 != 3) {
        PacketGuard::PacketGuard(local_d0);
                    /* try { // try from 081f6e58 to 081f6ef6 has its CatchHandler @ 081f6f0f */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_d0,1,0x2f);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_d0,0);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_d0,0x13);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_d0,(uint)local_7c[0]);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_d0,local_80);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_d0,local_84);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_d0,true);
        CUser::Send(param_1,local_d0);
        PacketGuard::~PacketGuard(local_d0);
        return 0;
      }
      uVar4 = CUserCharacInfo::getCurCharacFatigue((CUserCharacInfo *)param_1);
      if (uVar4 < local_40) {
        PacketGuard::PacketGuard(local_dc);
                    /* try { // try from 081f6f6e to 081f700c has its CatchHandler @ 081f7025 */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_dc,1,0x2f);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_dc,0);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_dc,0x5f);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_dc,(uint)local_7c[0]);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_dc,local_80);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_dc,local_84);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_dc,true);
        CUser::Send(param_1,local_dc);
        PacketGuard::~PacketGuard(local_dc);
        return 0;
      }
    }
  }
  iVar6 = CUser::get_state(param_1);
  if (iVar6 == 10) {
    local_3c = (CDeathTower *)CUser::getDeathTower(param_1);
    if (local_3c == (CDeathTower *)0x0) {
      uVar5 = LineFunc(0x8456,"virtual int DisPatcher_UseStack::dispatch_sig(CUser*, PacketBuf&)",0,
                       0);
      return uVar5;
    }
    cVar3 = WongWork::CDeathTower::handleUseStackable(local_3c,param_1,local_7c[0],local_6e);
    if (cVar3 != '\x01') {
      uVar5 = LineFunc(0x8458,"virtual int DisPatcher_UseStack::dispatch_sig(CUser*, PacketBuf&)",0,
                       0);
      return uVar5;
    }
  }
  local_50 = CUser::GetParty(param_1);
  if (local_50 != 0) {
    local_38 = (CDeathTower *)0x0;
    iVar6 = CUser::get_state(param_1);
    if (iVar6 == 10) {
      local_38 = (CDeathTower *)CUser::getDeathTower(param_1);
    }
    if (local_38 == (CDeathTower *)0x0) {
      if (*(int *)(local_50 + 0xcd8) == 1) {
        PacketGuard::PacketGuard(local_f4);
                    /* try { // try from 081f72ba to 081f7358 has its CatchHandler @ 081f7371 */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_f4,1,0x2f);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_f4,0);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_f4,0);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_f4,(uint)local_7c[0]);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_f4,local_80);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_f4,local_84);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_f4,true);
        CUser::Send(param_1,local_f4);
        PacketGuard::~PacketGuard(local_f4);
        return 0;
      }
      if (((*(int *)(local_50 + 0xcac) != 0) &&
          (cVar3 = CDungeon::isTowerOfDespairDungeon(*(CDungeon **)(local_50 + 0xcac)),
          cVar3 != '\0')) &&
         (cVar3 = CDungeon::limitOfStackableItemInTower(*(CDungeon **)(local_50 + 0xcac)),
         cVar3 != '\0')) {
        iVar12 = (int)local_6e;
        iVar6 = GetInvenTypeFromItemSpace(local_7c[0]);
        pCVar9 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
        local_34 = CInventory::GetInvenRef(pCVar9,iVar6,iVar12);
        if (local_34 == 0) {
          return 0;
        }
        local_30 = *(uint *)(local_34 + 2);
        if (local_30 != 0x18) {
          if (local_30 < 0x19) {
            if (local_30 != 10) {
LAB_081f7445:
              uVar5 = CBattle_Field::get_dungeon_index((CBattle_Field *)(local_50 + 0xb24));
              uVar11 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
              cMyTrace::cMyTrace(local_6c,
                                 "virtual int DisPatcher_UseStack::dispatch_sig(CUser*, PacketBuf&)"
                                 ,0x84a2,5);
              cMyTrace::operator()
                        (local_6c,"TOD : charac_no(%u),dungeonIndex(%d),item_id(%lu)",uVar11,uVar5,
                         local_30);
              return 0;
            }
          }
          else if ((local_30 != 0x33) && (local_30 != 0x28978a)) goto LAB_081f7445;
        }
      }
      if (*(int *)(local_50 + 0xcac) != 0) {
        local_2c = *(CDungeon **)(local_50 + 0xcac);
        cVar3 = CDungeon::isTournamentDungeon(local_2c);
        if (cVar3 != '\0') {
          iVar12 = (int)local_6e;
          iVar6 = GetInvenTypeFromItemSpace(local_7c[0]);
          pCVar9 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
          local_28 = CInventory::GetInvenRef(pCVar9,iVar6,iVar12);
          if (local_28 == 0) {
            uVar5 = LineFunc(0x84b1,
                             "virtual int DisPatcher_UseStack::dispatch_sig(CUser*, PacketBuf&)",0,0
                            );
            return uVar5;
          }
          iVar6 = *(int *)(local_28 + 2);
          pCVar10 = (CDataManager *)G_CDataManager();
          local_24 = (CStackableItem *)CDataManager::find_item(pCVar10,iVar6);
          if (local_24 == (CStackableItem *)0x0) {
            return 0;
          }
          cVar3 = CItem::is_stackable((CItem *)local_24);
          if (cVar3 != '\x01') {
            return 0;
          }
          local_20 = local_24;
          local_1c = 0;
          iVar6 = CStackableItem::get_sub_type(local_24);
          if (iVar6 == 2) {
            local_1c = 0xff;
          }
          else {
            if ((local_20[0x364] == (CStackableItem)0x0) ||
               (iVar6 = (**(code **)(*(int *)local_20 + 0xc))(local_20), iVar6 == 0x12)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) {
              local_1c = 0xff;
            }
          }
          if (local_1c != 0) {
            PacketGuard::PacketGuard(local_100);
                    /* try { // try from 081f7634 to 081f76d1 has its CatchHandler @ 081f76ea */
            InterfacePacketBuf::put_header((InterfacePacketBuf *)local_100,1,0x2f);
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_100,0);
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_100,local_1c);
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_100,(uint)local_7c[0]);
            InterfacePacketBuf::put_int((InterfacePacketBuf *)local_100,local_80);
            InterfacePacketBuf::put_int((InterfacePacketBuf *)local_100,local_84);
            InterfacePacketBuf::finalize((InterfacePacketBuf *)local_100,true);
            CUser::Send(param_1,local_100);
            PacketGuard::~PacketGuard(local_100);
            return 0;
          }
        }
      }
    }
    else {
      this_00 = (CDungeonMgr *)WongWork::CDeathTower::getCDungeonMGr(local_38);
      this_01 = (CDungeon *)WongWork::CDeathTower::CDungeonMgr::getDungeon(this_00);
      cVar3 = CDungeon::limitOfStackableItemInTower(this_01);
      if ((cVar3 == '\x01') || (*(int *)(local_50 + 0xcd8) != 1)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        PacketGuard::PacketGuard(local_e8);
                    /* try { // try from 081f71ac to 081f724a has its CatchHandler @ 081f7263 */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_e8,1,0x2f);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_e8,0);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_e8,0);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_e8,(uint)local_7c[0]);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_e8,local_80);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_e8,local_84);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_e8,true);
        CUser::Send(param_1,local_e8);
        PacketGuard::~PacketGuard(local_e8);
        return 0;
      }
    }
  }
  iVar12 = (int)local_6e;
  iVar6 = GetInvenTypeFromItemSpace(local_7c[0]);
  pCVar9 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  local_4c = CInventory::GetInvenRef(pCVar9,iVar6,iVar12);
  if (local_4c == 0) {
    uVar5 = 0;
  }
  else {
    if (*(int *)(local_4c + 2) == 0x27ac4a) {
      local_18 = CUserCharacInfo::GetCurCharacChaosKillTime((CUserCharacInfo *)param_1);
      local_14 = (CParty *)CUser::GetParty(param_1);
      local_d = '\0';
      iVar6 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      if (iVar6 < local_18 + 600) {
        local_d = -6;
      }
      else {
        if ((local_14 == (CParty *)0x0) ||
           (cVar3 = CParty::CheckMemberLastTryAssaultTime(local_14), cVar3 == '\0')) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          local_d = -3;
        }
      }
      if (local_d != '\0') {
        PacketGuard::PacketGuard(local_10c);
                    /* try { // try from 081f77fd to 081f789b has its CatchHandler @ 081f78b1 */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_10c,1,0x2f);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_10c,0);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_10c,(int)local_d);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_10c,(uint)local_7c[0]);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_10c,local_80);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_10c,local_84);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_10c,true);
        CUser::Send(param_1,local_10c);
        PacketGuard::~PacketGuard(local_10c);
        return 0;
      }
    }
    cVar3 = CUser::use_stackable(param_1,local_6e,(uint)local_7c[0],local_80,local_84);
    if (cVar3 == '\x01') {
      uVar5 = 0;
    }
    else {
      uVar5 = LineFunc(0x8508,"virtual int DisPatcher_UseStack::dispatch_sig(CUser*, PacketBuf&)",0,
                       0);
    }
  }
  return uVar5;
}

```

