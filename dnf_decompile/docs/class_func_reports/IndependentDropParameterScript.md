# IndependentDropParameterScript

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## ImportIndependentDrop

```asm
// === 0897c398 IndependentDropParameterScript::ImportIndependentDrop  [0x0897c398-0x897cb27] ===
 897c398:	55                   	push   %ebp
 897c399:	89 e5                	mov    %esp,%ebp
 897c39b:	56                   	push   %esi
 897c39c:	53                   	push   %ebx
 897c39d:	81 ec c0 00 00 00    	sub    $0xc0,%esp
 897c3a3:	8b 45 0c             	mov    0xc(%ebp),%eax
 897c3a6:	89 44 24 04          	mov    %eax,0x4(%esp)
 897c3aa:	c7 04 24 e4 4c e1 08 	movl   $0x8e14ce4,(%esp)
 897c3b1:	e8 73 f9 f3 ff       	call   88bbd29 <_Z18loadRDARScriptFilePKcS0_>
 897c3b6:	83 f0 01             	xor    $0x1,%eax
 897c3b9:	84 c0                	test   %al,%al
 897c3bb:	74 0a                	je     897c3c7 <_ZN30IndependentDropParameterScript21ImportIndependentDropEPKc+0x2f>
 897c3bd:	be 66 00 00 00       	mov    $0x66,%esi
 897c3c2:	e9 55 07 00 00       	jmp    897cb1c <_ZN30IndependentDropParameterScript21ImportIndependentDropEPKc+0x784>
 897c3c7:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 897c3ca:	89 04 24             	mov    %eax,(%esp)
 897c3cd:	e8 fe a1 d8 ff       	call   87065d0 <_ZNSsC1Ev>
 897c3d2:	c6 45 c3 00          	movb   $0x0,-0x3d(%ebp)
 897c3d6:	eb 04                	jmp    897c3dc <_ZN30IndependentDropParameterScript21ImportIndependentDropEPKc+0x44>
 897c3d8:	90                   	nop
 897c3d9:	eb 01                	jmp    897c3dc <_ZN30IndependentDropParameterScript21ImportIndependentDropEPKc+0x44>
 897c3db:	90                   	nop
 897c3dc:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 897c3e3:	00 
 897c3e4:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 897c3e7:	89 04 24             	mov    %eax,(%esp)
 897c3ea:	e8 70 04 f4 ff       	call   88bc85f <_Z8ScanTypeRSsb>
 897c3ef:	83 f0 01             	xor    $0x1,%eax
 897c3f2:	84 c0                	test   %al,%al
 897c3f4:	0f 85 f4 06 00 00    	jne    897caee <_ZN30IndependentDropParameterScript21ImportIndependentDropEPKc+0x756>
 897c3fa:	c7 44 24 04 e5 4c e1 	movl   $0x8e14ce5,0x4(%esp)
 897c401:	08 
 897c402:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 897c405:	89 04 24             	mov    %eax,(%esp)
 897c408:	e8 94 45 70 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 897c40d:	84 c0                	test   %al,%al
 897c40f:	0f 84 f5 05 00 00    	je     897ca0a <_ZN30IndependentDropParameterScript21ImportIndependentDropEPKc+0x672>
 897c415:	c7 45 bc 00 00 00 00 	movl   $0x0,-0x44(%ebp)
 897c41c:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 897c422:	89 04 24             	mov    %eax,(%esp)
 897c425:	e8 b0 07 00 00       	call   897cbda <_ZN21stIndependentDropInfoC1Ev>
 897c42a:	8d 45 c3             	lea    -0x3d(%ebp),%eax
 897c42d:	89 04 24             	mov    %eax,(%esp)
 897c430:	e8 46 ff f3 ff       	call   88bc37b <_Z7ScanIntPb>
 897c435:	89 85 64 ff ff ff    	mov    %eax,-0x9c(%ebp)
 897c43b:	0f b6 45 c3          	movzbl -0x3d(%ebp),%eax
 897c43f:	83 f0 01             	xor    $0x1,%eax
 897c442:	84 c0                	test   %al,%al
 897c444:	74 0a                	je     897c450 <_ZN30IndependentDropParameterScript21ImportIndependentDropEPKc+0xb8>
 897c446:	bb 00 00 00 00       	mov    $0x0,%ebx
 897c44b:	e9 9a 05 00 00       	jmp    897c9ea <_ZN30IndependentDropParameterScript21ImportIndependentDropEPKc+0x652>
 897c450:	8d 45 c3             	lea    -0x3d(%ebp),%eax
 897c453:	89 04 24             	mov    %eax,(%esp)
 897c456:	e8 20 ff f3 ff       	call   88bc37b <_Z7ScanIntPb>
 897c45b:	89 85 68 ff ff ff    	mov    %eax,-0x98(%ebp)
 897c461:	0f b6 45 c3          	movzbl -0x3d(%ebp),%eax
 897c465:	83 f0 01             	xor    $0x1,%eax
 897c468:	84 c0                	test   %al,%al
 897c46a:	74 0f                	je     897c47b <_ZN30IndependentDropParameterScript21ImportIndependentDropEPKc+0xe3>
 897c46c:	be 7d 00 00 00       	mov    $0x7d,%esi
 897c471:	bb 01 00 00 00       	mov    $0x1,%ebx
 897c476:	e9 6f 05 00 00       	jmp    897c9ea <_ZN30IndependentDropParameterScript21ImportIndependentDropEPKc+0x652>
 897c47b:	8d 45 c3             	lea    -0x3d(%ebp),%eax
 897c47e:	89 04 24             	mov    %eax,(%esp)
 897c481:	e8 f5 fe f3 ff       	call   88bc37b <_Z7ScanIntPb>
 897c486:	89 85 6c ff ff ff    	mov    %eax,-0x94(%ebp)
 897c48c:	0f b6 45 c3          	movzbl -0x3d(%ebp),%eax
 897c490:	83 f0 01             	xor    $0x1,%eax
 897c493:	84 c0                	test   %al,%al
 897c495:	74 0f                	je     897c4a6 <_ZN30IndependentDropParameterScript21ImportIndependentDropEPKc+0x10e>
 897c497:	be 81 00 00 00       	mov    $0x81,%esi
 897c49c:	bb 01 00 00 00       	mov    $0x1,%ebx
 897c4a1:	e9 44 05 00 00       	jmp    897c9ea <_ZN30IndependentDropParameterScript21ImportIndependentDropEPKc+0x652>
 897c4a6:	8d 45 c3             	lea    -0x3d(%ebp),%eax
 897c4a9:	89 04 24             	mov    %eax,(%esp)
 897c4ac:	e8 ca fe f3 ff       	call   88bc37b <_Z7ScanIntPb>
 897c4b1:	89 85 70 ff ff ff    	mov    %eax,-0x90(%ebp)
 897c4b7:	0f b6 45 c3          	movzbl -0x3d(%ebp),%eax
 897c4bb:	83 f0 01             	xor    $0x1,%eax
 897c4be:	84 c0                	test   %al,%al
 897c4c0:	74 0f                	je     897c4d1 <_ZN30IndependentDropParameterScript21ImportIndependentDropEPKc+0x139>
 897c4c2:	be 89 00 00 00       	mov    $0x89,%esi
 897c4c7:	bb 01 00 00 00       	mov    $0x1,%ebx
 897c4cc:	e9 19 05 00 00       	jmp    897c9ea <_ZN30IndependentDropParameterScript21ImportIndependentDropEPKc+0x652>
 897c4d1:	8d 45 c3             	lea    -0x3d(%ebp),%eax
 897c4d4:	89 04 24             	mov    %eax,(%esp)
 897c4d7:	e8 9f fe f3 ff       	call   88bc37b <_Z7ScanIntPb>
 897c4dc:	89 85 74 ff ff ff    	mov    %eax,-0x8c(%ebp)
 897c4e2:	0f b6 45 c3          	movzbl -0x3d(%ebp),%eax
 897c4e6:	83 f0 01             	xor    $0x1,%eax
 897c4e9:	84 c0                	test   %al,%al
 897c4eb:	74 0f                	je     897c4fc <_ZN30IndependentDropParameterScript21ImportIndependentDropEPKc+0x164>
 897c4ed:	be 91 00 00 00       	mov    $0x91,%esi
 897c4f2:	bb 01 00 00 00       	mov    $0x1,%ebx
 897c4f7:	e9 ee 04 00 00       	jmp    897c9ea <_ZN30IndependentDropParameterScript21ImportIndependentDropEPKc+0x652>
 897c4fc:	8d 45 c3             	lea    -0x3d(%ebp),%eax
 897c4ff:	89 04 24             	mov    %eax,(%esp)
 897c502:	e8 74 fe f3 ff       	call   88bc37b <_Z7ScanIntPb>
 897c507:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
 897c50d:	0f b6 45 c3          	movzbl -0x3d(%ebp),%eax
 897c511:	83 f0 01             	xor    $0x1,%eax
 897c514:	84 c0                	test   %al,%al
 897c516:	74 0f                	je     897c527 <_ZN30IndependentDropParameterScript21ImportIndependentDropEPKc+0x18f>
 897c518:	be 99 00 00 00       	mov    $0x99,%esi
 897c51d:	bb 01 00 00 00       	mov    $0x1,%ebx
 897c522:	e9 c3 04 00 00       	jmp    897c9ea <_ZN30IndependentDropParameterScript21ImportIndependentDropEPKc+0x652>
 897c527:	8d 45 c3             	lea    -0x3d(%ebp),%eax
 897c52a:	89 04 24             	mov    %eax,(%esp)
 897c52d:	e8 49 fe f3 ff       	call   88bc37b <_Z7ScanIntPb>
 897c532:	89 85 7c ff ff ff    	mov    %eax,-0x84(%ebp)
 897c538:	0f b6 45 c3          	movzbl -0x3d(%ebp),%eax
 897c53c:	83 f0 01             	xor    $0x1,%eax
 897c53f:	84 c0                	test   %al,%al
 897c541:	74 0f                	je     897c552 <_ZN30IndependentDropParameterScript21ImportIndependentDropEPKc+0x1ba>
 897c543:	be a1 00 00 00       	mov    $0xa1,%esi
 897c548:	bb 01 00 00 00       	mov    $0x1,%ebx
 897c54d:	e9 98 04 00 00       	jmp    897c9ea <_ZN30IndependentDropParameterScript21ImportIndependentDropEPKc+0x652>
 897c552:	8d 45 c3             	lea    -0x3d(%ebp),%eax
 897c555:	89 04 24             	mov    %eax,(%esp)
 897c558:	e8 1e fe f3 ff       	call   88bc37b <_Z7ScanIntPb>
 897c55d:	89 45 80             	mov    %eax,-0x80(%ebp)
 897c560:	0f b6 45 c3          	movzbl -0x3d(%ebp),%eax
 897c564:	83 f0 01             	xor    $0x1,%eax
 897c567:	84 c0                	test   %al,%al
 897c569:	74 0f                	je     897c57a <_ZN30IndependentDropParameterScript21ImportIndependentDropEPKc+0x1e2>
 897c56b:	be a5 00 00 00       	mov    $0xa5,%esi
 897c570:	bb 01 00 00 00       	mov    $0x1,%ebx
 897c575:	e9 70 04 00 00       	jmp    897c9ea <_ZN30IndependentDropParameterScript21ImportIndependentDropEPKc+0x652>
 897c57a:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 897c581:	eb 36                	jmp    897c5b9 <_ZN30IndependentDropParameterScript21ImportIndependentDropEPKc+0x221>
 897c583:	8b 5d dc             	mov    -0x24(%ebp),%ebx
 897c586:	8d 45 c3             	lea    -0x3d(%ebp),%eax
 897c589:	89 04 24             	mov    %eax,(%esp)
 897c58c:	e8 ea fd f3 ff       	call   88bc37b <_Z7ScanIntPb>
 897c591:	8d 53 04             	lea    0x4(%ebx),%edx
 897c594:	89 84 95 74 ff ff ff 	mov    %eax,-0x8c(%ebp,%edx,4)
 897c59b:	0f b6 45 c3          	movzbl -0x3d(%ebp),%eax
 897c59f:	83 f0 01             	xor    $0x1,%eax
 897c5a2:	84 c0                	test   %al,%al
 897c5a4:	74 0f                	je     897c5b5 <_ZN30IndependentDropParameterScript21ImportIndependentDropEPKc+0x21d>
 897c5a6:	be ab 00 00 00       	mov    $0xab,%esi
 897c5ab:	bb 01 00 00 00       	mov    $0x1,%ebx
 897c5b0:	e9 35 04 00 00       	jmp    897c9ea <_ZN30IndependentDropParameterScript21ImportIndependentDropEPKc+0x652>
 897c5b5:	83 45 dc 01          	addl   $0x1,-0x24(%ebp)
 897c5b9:	83 7d dc 03          	cmpl   $0x3,-0x24(%ebp)
 897c5bd:	0f 9e c0             	setle  %al
 897c5c0:	84 c0                	test   %al,%al
 897c5c2:	75 bf                	jne    897c583 <_ZN30IndependentDropParameterScript21ImportIndependentDropEPKc+0x1eb>
 897c5c4:	8d 45 c3             	lea    -0x3d(%ebp),%eax
 897c5c7:	89 04 24             	mov    %eax,(%esp)
 897c5ca:	e8 ac fd f3 ff       	call   88bc37b <_Z7ScanIntPb>
 897c5cf:	89 45 94             	mov    %eax,-0x6c(%ebp)
 897c5d2:	0f b6 45 c3          	movzbl -0x3d(%ebp),%eax
 897c5d6:	83 f0 01             	xor    $0x1,%eax
 897c5d9:	84 c0                	test   %al,%al
 897c5db:	74 0f                	je     897c5ec <_ZN30IndependentDropParameterScript21ImportIndependentDropEPKc+0x254>
 897c5dd:	be b0 00 00 00       	mov    $0xb0,%esi
 897c5e2:	bb 01 00 00 00       	mov    $0x1,%ebx
 897c5e7:	e9 fe 03 00 00       	jmp    897c9ea <_ZN30IndependentDropParameterScript21ImportIndependentDropEPKc+0x652>
 897c5ec:	c7 45 98 00 00 00 00 	movl   $0x0,-0x68(%ebp)
 897c5f3:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 897c5f9:	83 c0 38             	add    $0x38,%eax
 897c5fc:	89 04 24             	mov    %eax,(%esp)
 897c5ff:	e8 3e dd 7f ff       	call   817a342 <_ZNSt6vectorISt4pairIiiESaIS1_EE5clearEv>
 897c604:	8d 45 c3             	lea    -0x3d(%ebp),%eax
 897c607:	89 04 24             	mov    %eax,(%esp)
 897c60a:	e8 6c fd f3 ff       	call   88bc37b <_Z7ScanIntPb>
 897c60f:	89 45 a8             	mov    %eax,-0x58(%ebp)
 897c612:	0f b6 45 c3          	movzbl -0x3d(%ebp),%eax
 897c616:	83 f0 01             	xor    $0x1,%eax
 897c619:	84 c0                	test   %al,%al
 897c61b:	74 0f                	je     897c62c <_ZN30IndependentDropParameterScript21ImportIndependentDropEPKc+0x294>
 897c61d:	be b7 00 00 00       	mov    $0xb7,%esi
 897c622:	bb 01 00 00 00       	mov    $0x1,%ebx
 897c627:	e9 be 03 00 00       	jmp    897c9ea <_ZN30IndependentDropParameterScript21ImportIndependentDropEPKc+0x652>
 897c62c:	8d 45 c3             	lea    -0x3d(%ebp),%eax
 897c62f:	89 04 24             	mov    %eax,(%esp)
 897c632:	e8 44 fd f3 ff       	call   88bc37b <_Z7ScanIntPb>
 897c637:	89 45 ac             	mov    %eax,-0x54(%ebp)
 897c63a:	0f b6 45 c3          	movzbl -0x3d(%ebp),%eax
 897c63e:	83 f0 01             	xor    $0x1,%eax
 897c641:	84 c0                	test   %al,%al
 897c643:	74 0f                	je     897c654 <_ZN30IndependentDropParameterScript21ImportIndependentDropEPKc+0x2bc>
 897c645:	be bb 00 00 00       	mov    $0xbb,%esi
 897c64a:	bb 01 00 00 00       	mov    $0x1,%ebx
 897c64f:	e9 96 03 00 00       	jmp    897c9ea <_ZN30IndependentDropParameterScript21ImportIndependentDropEPKc+0x652>
 897c654:	8b 55 a8             	mov    -0x58(%ebp),%edx
 897c657:	8b 45 ac             	mov    -0x54(%ebp),%eax
 897c65a:	39 c2                	cmp    %eax,%edx
 897c65c:	7e 0f                	jle    897c66d <_ZN30IndependentDropParameterScript21ImportIndependentDropEPKc+0x2d5>
 897c65e:	be be 00 00 00       	mov    $0xbe,%esi
 897c663:	bb 01 00 00 00       	mov    $0x1,%ebx
 897c668:	e9 7d 03 00 00       	jmp    897c9ea <_ZN30IndependentDropParameterScript21ImportIndependentDropEPKc+0x652>
 897c66d:	8d 45 c3             	lea    -0x3d(%ebp),%eax
 897c670:	89 04 24             	mov    %eax,(%esp)
 897c673:	e8 03 fd f3 ff       	call   88bc37b <_Z7ScanIntPb>
 897c678:	89 45 b0             	mov    %eax,-0x50(%ebp)
 897c67b:	0f b6 45 c3          	movzbl -0x3d(%ebp),%eax
 897c67f:	83 f0 01             	xor    $0x1,%eax
 897c682:	84 c0                	test   %al,%al
 897c684:	74 0f                	je     897c695 <_ZN30IndependentDropParameterScript21ImportIndependentDropEPKc+0x2fd>
 897c686:	be c3 00 00 00       	mov    $0xc3,%esi
 897c68b:	bb 01 00 00 00       	mov    $0x1,%ebx
 897c690:	e9 55 03 00 00       	jmp    897c9ea <_ZN30IndependentDropParameterScript21ImportIndependentDropEPKc+0x652>
 897c695:	8d 45 c3             	lea    -0x3d(%ebp),%eax
 897c698:	89 04 24             	mov    %eax,(%esp)
 897c69b:	e8 db fc f3 ff       	call   88bc37b <_Z7ScanIntPb>
 897c6a0:	89 45 d8             	mov    %eax,-0x28(%ebp)
 897c6a3:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 897c6a7:	74 4e                	je     897c6f7 <_ZN30IndependentDropParameterScript21ImportIndependentDropEPKc+0x35f>
 897c6a9:	83 7d d8 01          	cmpl   $0x1,-0x28(%ebp)
 897c6ad:	74 48                	je     897c6f7 <_ZN30IndependentDropParameterScript21ImportIndependentDropEPKc+0x35f>
 897c6af:	83 7d d8 02          	cmpl   $0x2,-0x28(%ebp)
 897c6b3:	74 42                	je     897c6f7 <_ZN30IndependentDropParameterScript21ImportIndependentDropEPKc+0x35f>
 897c6b5:	8b 45 d8             	mov    -0x28(%ebp),%eax
 897c6b8:	89 44 24 14          	mov    %eax,0x14(%esp)
 897c6bc:	c7 44 24 10 f8 4c e1 	movl   $0x8e14cf8,0x10(%esp)
 897c6c3:	08 
 897c6c4:	c7 44 24 0c ca 00 00 	movl   $0xca,0xc(%esp)
 897c6cb:	00 
 897c6cc:	c7 44 24 08 0c 51 e1 	movl   $0x8e1510c,0x8(%esp)
 897c6d3:	08 
 897c6d4:	c7 44 24 04 bc 4c e1 	movl   $0x8e14cbc,0x4(%esp)
 897c6db:	08 
 897c6dc:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 897c6e3:	e8 22 75 15 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 897c6e8:	be cb 00 00 00       	mov    $0xcb,%esi
 897c6ed:	bb 01 00 00 00       	mov    $0x1,%ebx
 897c6f2:	e9 f3 02 00 00       	jmp    897c9ea <_ZN30IndependentDropParameterScript21ImportIndependentDropEPKc+0x652>
 897c6f7:	0f b6 45 c3          	movzbl -0x3d(%ebp),%eax
 897c6fb:	83 f0 01             	xor    $0x1,%eax
 897c6fe:	84 c0                	test   %al,%al
 897c700:	74 0f                	je     897c711 <_ZN30IndependentDropParameterScript21ImportIndependentDropEPKc+0x379>
 897c702:	be cf 00 00 00       	mov    $0xcf,%esi
 897c707:	bb 01 00 00 00       	mov    $0x1,%ebx
 897c70c:	e9 d9 02 00 00       	jmp    897c9ea <_ZN30IndependentDropParameterScript21ImportIndependentDropEPKc+0x652>
 897c711:	8d 45 b8             	lea    -0x48(%ebp),%eax
 897c714:	89 04 24             	mov    %eax,(%esp)
 897c717:	e8 b4 9e d8 ff       	call   87065d0 <_ZNSsC1Ev>
 897c71c:	83 7d d8 01          	cmpl   $0x1,-0x28(%ebp)
 897c720:	0f 85 c2 00 00 00    	jne    897c7e8 <_ZN30IndependentDropParameterScript21ImportIndependentDropEPKc+0x450>
 897c726:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 897c72d:	00 
 897c72e:	8d 45 b8             	lea    -0x48(%ebp),%eax
 897c731:	89 04 24             	mov    %eax,(%esp)
 897c734:	e8 26 01 f4 ff       	call   88bc85f <_Z8ScanTypeRSsb>
 897c739:	84 c0                	test   %al,%al
 897c73b:	0f 84 36 02 00 00    	je     897c977 <_ZN30IndependentDropParameterScript21ImportIndependentDropEPKc+0x5df>
 897c741:	c7 44 24 04 dd 4c e1 	movl   $0x8e14cdd,0x4(%esp)
 897c748:	08 
 897c749:	8d 45 b8             	lea    -0x48(%ebp),%eax
 897c74c:	89 04 24             	mov    %eax,(%esp)
 897c74f:	e8 4d 42 70 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 897c754:	84 c0                	test   %al,%al
 897c756:	0f 84 1e 02 00 00    	je     897c97a <_ZN30IndependentDropParameterScript21ImportIndependentDropEPKc+0x5e2>
 897c75c:	8d 45 c3             	lea    -0x3d(%ebp),%eax
 897c75f:	89 04 24             	mov    %eax,(%esp)
 897c762:	e8 14 fc f3 ff       	call   88bc37b <_Z7ScanIntPb>
 897c767:	89 45 bc             	mov    %eax,-0x44(%ebp)
 897c76a:	0f b6 45 c3          	movzbl -0x3d(%ebp),%eax
 897c76e:	83 f0 01             	xor    $0x1,%eax
 897c771:	84 c0                	test   %al,%al
 897c773:	74 06                	je     897c77b <_ZN30IndependentDropParameterScript21ImportIndependentDropEPKc+0x3e3>
 897c775:	90                   	nop
 897c776:	e9 03 02 00 00       	jmp    897c97e <_ZN30IndependentDropParameterScript21ImportIndependentDropEPKc+0x5e6>
 897c77b:	8d 45 c3             	lea    -0x3d(%ebp),%eax
 897c77e:	89 04 24             	mov    %eax,(%esp)
 897c781:	e8 f5 fb f3 ff       	call   88bc37b <_Z7ScanIntPb>
 897c786:	89 45 e0             	mov    %eax,-0x20(%ebp)
 897c789:	0f b6 45 c3          	movzbl -0x3d(%ebp),%eax
 897c78d:	83 f0 01             	xor    $0x1,%eax
 897c790:	84 c0                	test   %al,%al
 897c792:	74 0f                	je     897c7a3 <_ZN30IndependentDropParameterScript21ImportIndependentDropEPKc+0x40b>
 897c794:	be e1 00 00 00       	mov    $0xe1,%esi
 897c799:	bb 00 00 00 00       	mov    $0x0,%ebx
 897c79e:	e9 0f 02 00 00       	jmp    897c9b2 <_ZN30IndependentDropParameterScript21ImportIndependentDropEPKc+0x61a>
 897c7a3:	8b 45 98             	mov    -0x68(%ebp),%eax
 897c7a6:	03 45 e0             	add    -0x20(%ebp),%eax
 897c7a9:	89 45 98             	mov    %eax,-0x68(%ebp)
 897c7ac:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 897c7b2:	83 c0 34             	add    $0x34,%eax
 897c7b5:	89 44 24 08          	mov    %eax,0x8(%esp)
 897c7b9:	8d 45 bc             	lea    -0x44(%ebp),%eax
 897c7bc:	89 44 24 04          	mov    %eax,0x4(%esp)
 897c7c0:	8d 45 c8             	lea    -0x38(%ebp),%eax
 897c7c3:	89 04 24             	mov    %eax,(%esp)
 897c7c6:	e8 27 a5 74 ff       	call   80c6cf2 <_ZNSt4pairIiiEC1IRiS2_EEOT_OT0_>
 897c7cb:	8d 45 c8             	lea    -0x38(%ebp),%eax
 897c7ce:	89 44 24 04          	mov    %eax,0x4(%esp)
 897c7d2:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 897c7d8:	83 c0 38             	add    $0x38,%eax
 897c7db:	89 04 24             	mov    %eax,(%esp)
 897c7de:	e8 23 0e 76 ff       	call   80dd606 <_ZNSt6vectorISt4pairIiiESaIS1_EE9push_backEOS1_>
 897c7e3:	e9 74 ff ff ff       	jmp    897c75c <_ZN30IndependentDropParameterScript21ImportIndependentDropEPKc+0x3c4>
 897c7e8:	83 7d d8 02          	cmpl   $0x2,-0x28(%ebp)
 897c7ec:	0f 85 8c 01 00 00    	jne    897c97e <_ZN30IndependentDropParameterScript21ImportIndependentDropEPKc+0x5e6>
 897c7f2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 897c7f9:	00 
 897c7fa:	8d 45 b8             	lea    -0x48(%ebp),%eax
 897c7fd:	89 04 24             	mov    %eax,(%esp)
 897c800:	e8 5a 00 f4 ff       	call   88bc85f <_Z8ScanTypeRSsb>
 897c805:	84 c0                	test   %al,%al
 897c807:	0f 84 71 01 00 00    	je     897c97e <_ZN30IndependentDropParameterScript21ImportIndependentDropEPKc+0x5e6>
 897c80d:	c7 44 24 04 dd 4c e1 	movl   $0x8e14cdd,0x4(%esp)
 897c814:	08 
 897c815:	8d 45 b8             	lea    -0x48(%ebp),%eax
 897c818:	89 04 24             	mov    %eax,(%esp)
 897c81b:	e8 81 41 70 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 897c820:	84 c0                	test   %al,%al
 897c822:	0f 84 56 01 00 00    	je     897c97e <_ZN30IndependentDropParameterScript21ImportIndependentDropEPKc+0x5e6>
 897c828:	c6 45 e7 00          	movb   $0x0,-0x19(%ebp)
 897c82c:	8d 45 c3             	lea    -0x3d(%ebp),%eax
 897c82f:	89 04 24             	mov    %eax,(%esp)
 897c832:	e8 44 fb f3 ff       	call   88bc37b <_Z7ScanIntPb>
 897c837:	89 45 e8             	mov    %eax,-0x18(%ebp)
 897c83a:	0f b6 45 c3          	movzbl -0x3d(%ebp),%eax
 897c83e:	83 f0 01             	xor    $0x1,%eax
 897c841:	84 c0                	test   %al,%al
 897c843:	0f 85 34 01 00 00    	jne    897c97d <_ZN30IndependentDropParameterScript21ImportIndependentDropEPKc+0x5e5>
 897c849:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 897c850:	e9 04 01 00 00       	jmp    897c959 <_ZN30IndependentDropParameterScript21ImportIndependentDropEPKc+0x5c1>
 897c855:	8b 55 ec             	mov    -0x14(%ebp),%edx
 897c858:	8b 45 08             	mov    0x8(%ebp),%eax
 897c85b:	89 54 24 04          	mov    %edx,0x4(%esp)
 897c85f:	89 04 24             	mov    %eax,(%esp)
 897c862:	e8 8f 04 00 00       	call   897ccf6 <_ZNSt6vectorI23IndependentDropListInfoSaIS0_EEixEj>
 897c867:	8b 00                	mov    (%eax),%eax
 897c869:	3b 45 e8             	cmp    -0x18(%ebp),%eax
 897c86c:	0f 94 c0             	sete   %al
 897c86f:	84 c0                	test   %al,%al
 897c871:	0f 84 d2 00 00 00    	je     897c949 <_ZN30IndependentDropParameterScript21ImportIndependentDropEPKc+0x5b1>
 897c877:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 897c87e:	e9 97 00 00 00       	jmp    897c91a <_ZN30IndependentDropParameterScript21ImportIndependentDropEPKc+0x582>
 897c883:	8b 5d f0             	mov    -0x10(%ebp),%ebx
 897c886:	8b 55 ec             	mov    -0x14(%ebp),%edx
 897c889:	8b 45 08             	mov    0x8(%ebp),%eax
 897c88c:	89 54 24 04          	mov    %edx,0x4(%esp)
 897c890:	89 04 24             	mov    %eax,(%esp)
 897c893:	e8 5e 04 00 00       	call   897ccf6 <_ZNSt6vectorI23IndependentDropListInfoSaIS0_EEixEj>
 897c898:	83 c0 04             	add    $0x4,%eax
 897c89b:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 897c89f:	89 04 24             	mov    %eax,(%esp)
 897c8a2:	e8 fd df 76 ff       	call   80ea8a4 <_ZNSt6vectorISt4pairIiiESaIS1_EEixEj>
 897c8a7:	8b 00                	mov    (%eax),%eax
 897c8a9:	89 45 bc             	mov    %eax,-0x44(%ebp)
 897c8ac:	8b 5d f0             	mov    -0x10(%ebp),%ebx
 897c8af:	8b 55 ec             	mov    -0x14(%ebp),%edx
 897c8b2:	8b 45 08             	mov    0x8(%ebp),%eax
 897c8b5:	89 54 24 04          	mov    %edx,0x4(%esp)
 897c8b9:	89 04 24             	mov    %eax,(%esp)
 897c8bc:	e8 35 04 00 00       	call   897ccf6 <_ZNSt6vectorI23IndependentDropListInfoSaIS0_EEixEj>
 897c8c1:	83 c0 04             	add    $0x4,%eax
 897c8c4:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 897c8c8:	89 04 24             	mov    %eax,(%esp)
 897c8cb:	e8 d4 df 76 ff       	call   80ea8a4 <_ZNSt6vectorISt4pairIiiESaIS1_EEixEj>
 897c8d0:	8b 40 04             	mov    0x4(%eax),%eax
 897c8d3:	89 45 f4             	mov    %eax,-0xc(%ebp)
 897c8d6:	8b 45 98             	mov    -0x68(%ebp),%eax
 897c8d9:	03 45 f4             	add    -0xc(%ebp),%eax
 897c8dc:	89 45 98             	mov    %eax,-0x68(%ebp)
 897c8df:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 897c8e5:	83 c0 34             	add    $0x34,%eax
 897c8e8:	89 44 24 08          	mov    %eax,0x8(%esp)
 897c8ec:	8d 45 bc             	lea    -0x44(%ebp),%eax
 897c8ef:	89 44 24 04          	mov    %eax,0x4(%esp)
 897c8f3:	8d 45 d0             	lea    -0x30(%ebp),%eax
 897c8f6:	89 04 24             	mov    %eax,(%esp)
 897c8f9:	e8 f4 a3 74 ff       	call   80c6cf2 <_ZNSt4pairIiiEC1IRiS2_EEOT_OT0_>
 897c8fe:	8d 45 d0             	lea    -0x30(%ebp),%eax
 897c901:	89 44 24 04          	mov    %eax,0x4(%esp)
 897c905:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 897c90b:	83 c0 38             	add    $0x38,%eax
 897c90e:	89 04 24             	mov    %eax,(%esp)
 897c911:	e8 f0 0c 76 ff       	call   80dd606 <_ZNSt6vectorISt4pairIiiESaIS1_EE9push_backEOS1_>
 897c916:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 897c91a:	8b 55 ec             	mov    -0x14(%ebp),%edx
 897c91d:	8b 45 08             	mov    0x8(%ebp),%eax
 897c920:	89 54 24 04          	mov    %edx,0x4(%esp)
 897c924:	89 04 24             	mov    %eax,(%esp)
 897c927:	e8 ca 03 00 00       	call   897ccf6 <_ZNSt6vectorI23IndependentDropListInfoSaIS0_EEixEj>
 897c92c:	83 c0 04             	add    $0x4,%eax
 897c92f:	89 04 24             	mov    %eax,(%esp)
 897c932:	e8 dd 0e 76 ff       	call   80dd814 <_ZNKSt6vectorISt4pairIiiESaIS1_EE4sizeEv>
 897c937:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 897c93a:	0f 9f c0             	setg   %al
 897c93d:	84 c0                	test   %al,%al
 897c93f:	0f 85 3e ff ff ff    	jne    897c883 <_ZN30IndependentDropParameterScript21ImportIndependentDropEPKc+0x4eb>
 897c945:	c6 45 e7 01          	movb   $0x1,-0x19(%ebp)
 897c949:	80 7d e7 00          	cmpb   $0x0,-0x19(%ebp)
 897c94d:	74 06                	je     897c955 <_ZN30IndependentDropParameterScript21ImportIndependentDropEPKc+0x5bd>
 897c94f:	90                   	nop
 897c950:	e9 d3 fe ff ff       	jmp    897c828 <_ZN30IndependentDropParameterScript21ImportIndependentDropEPKc+0x490>
 897c955:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 897c959:	8b 45 08             	mov    0x8(%ebp),%eax
 897c95c:	89 04 24             	mov    %eax,(%esp)
 897c95f:	e8 80 81 83 ff       	call   81b4ae4 <_ZNKSt6vectorI23IndependentDropListInfoSaIS0_EE4sizeEv>
 897c964:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 897c967:	0f 9f c0             	setg   %al
 897c96a:	84 c0                	test   %al,%al
 897c96c:	0f 85 e3 fe ff ff    	jne    897c855 <_ZN30IndependentDropParameterScript21ImportIndependentDropEPKc+0x4bd>
 897c972:	e9 b1 fe ff ff       	jmp    897c828 <_ZN30IndependentDropParameterScript21ImportIndependentDropEPKc+0x490>
 897c977:	90                   	nop
 897c978:	eb 04                	jmp    897c97e <_ZN30IndependentDropParameterScript21ImportIndependentDropEPKc+0x5e6>
 897c97a:	90                   	nop
 897c97b:	eb 01                	jmp    897c97e <_ZN30IndependentDropParameterScript21ImportIndependentDropEPKc+0x5e6>
 897c97d:	90                   	nop
 897c97e:	8b 45 08             	mov    0x8(%ebp),%eax
 897c981:	8d 50 0c             	lea    0xc(%eax),%edx
 897c984:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 897c98a:	89 44 24 04          	mov    %eax,0x4(%esp)
 897c98e:	89 14 24             	mov    %edx,(%esp)
 897c991:	e8 72 03 00 00       	call   897cd08 <_ZNSt6vectorI21stIndependentDropInfoSaIS0_EE9push_backERKS0_>
 897c996:	bb 01 00 00 00       	mov    $0x1,%ebx
 897c99b:	eb 15                	jmp    897c9b2 <_ZN30IndependentDropParameterScript21ImportIndependentDropEPKc+0x61a>
 897c99d:	89 d3                	mov    %edx,%ebx
 897c99f:	89 c6                	mov    %eax,%esi
 897c9a1:	8d 45 b8             	lea    -0x48(%ebp),%eax
 897c9a4:	89 04 24             	mov    %eax,(%esp)
 897c9a7:	e8 34 b2 d8 ff       	call   8707be0 <_ZNSsD1Ev>
 897c9ac:	89 f0                	mov    %esi,%eax
 897c9ae:	89 da                	mov    %ebx,%edx
 897c9b0:	eb 1d                	jmp    897c9cf <_ZN30IndependentDropParameterScript21ImportIndependentDropEPKc+0x637>
 897c9b2:	8d 45 b8             	lea    -0x48(%ebp),%eax
 897c9b5:	89 04 24             	mov    %eax,(%esp)
 897c9b8:	e8 23 b2 d8 ff       	call   8707be0 <_ZNSsD1Ev>
 897c9bd:	85 db                	test   %ebx,%ebx
 897c9bf:	75 07                	jne    897c9c8 <_ZN30IndependentDropParameterScript21ImportIndependentDropEPKc+0x630>
 897c9c1:	bb 01 00 00 00       	mov    $0x1,%ebx
 897c9c6:	eb 22                	jmp    897c9ea <_ZN30IndependentDropParameterScript21ImportIndependentDropEPKc+0x652>
 897c9c8:	bb 02 00 00 00       	mov    $0x2,%ebx
 897c9cd:	eb 1b                	jmp    897c9ea <_ZN30IndependentDropParameterScript21ImportIndependentDropEPKc+0x652>
 897c9cf:	89 d3                	mov    %edx,%ebx
 897c9d1:	89 c6                	mov    %eax,%esi
 897c9d3:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 897c9d9:	89 04 24             	mov    %eax,(%esp)
 897c9dc:	e8 03 0b a6 ff       	call   83dd4e4 <_ZN21stIndependentDropInfoD1Ev>
 897c9e1:	89 f0                	mov    %esi,%eax
 897c9e3:	89 da                	mov    %ebx,%edx
 897c9e5:	e9 0c 01 00 00       	jmp    897caf6 <_ZN30IndependentDropParameterScript21ImportIndependentDropEPKc+0x75e>
 897c9ea:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 897c9f0:	89 04 24             	mov    %eax,(%esp)
 897c9f3:	e8 ec 0a a6 ff       	call   83dd4e4 <_ZN21stIndependentDropInfoD1Ev>
 897c9f8:	85 db                	test   %ebx,%ebx
 897c9fa:	74 0e                	je     897ca0a <_ZN30IndependentDropParameterScript21ImportIndependentDropEPKc+0x672>
 897c9fc:	83 fb 01             	cmp    $0x1,%ebx
 897c9ff:	0f 84 0c 01 00 00    	je     897cb11 <_ZN30IndependentDropParameterScript21ImportIndependentDropEPKc+0x779>
 897ca05:	e9 0b fa ff ff       	jmp    897c415 <_ZN30IndependentDropParameterScript21ImportIndependentDropEPKc+0x7d>
 897ca0a:	c7 44 24 04 0e 4d e1 	movl   $0x8e14d0e,0x4(%esp)
 897ca11:	08 
 897ca12:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 897ca15:	89 04 24             	mov    %eax,(%esp)
 897ca18:	e8 84 3f 70 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 897ca1d:	84 c0                	test   %al,%al
 897ca1f:	0f 84 b3 f9 ff ff    	je     897c3d8 <_ZN30IndependentDropParameterScript21ImportIndependentDropEPKc+0x40>
 897ca25:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 897ca2b:	89 04 24             	mov    %eax,(%esp)
 897ca2e:	e8 bd 01 00 00       	call   897cbf0 <_ZN28stIndependentDropRateControlC1Ev>
 897ca33:	8d 45 c3             	lea    -0x3d(%ebp),%eax
 897ca36:	89 04 24             	mov    %eax,(%esp)
 897ca39:	e8 3d f9 f3 ff       	call   88bc37b <_Z7ScanIntPb>
 897ca3e:	89 85 64 ff ff ff    	mov    %eax,-0x9c(%ebp)
 897ca44:	0f b6 45 c3          	movzbl -0x3d(%ebp),%eax
 897ca48:	83 f0 01             	xor    $0x1,%eax
 897ca4b:	84 c0                	test   %al,%al
 897ca4d:	74 07                	je     897ca56 <_ZN30IndependentDropParameterScript21ImportIndependentDropEPKc+0x6be>
 897ca4f:	bb 00 00 00 00       	mov    $0x0,%ebx
 897ca54:	eb 7d                	jmp    897cad3 <_ZN30IndependentDropParameterScript21ImportIndependentDropEPKc+0x73b>
 897ca56:	8d 45 c3             	lea    -0x3d(%ebp),%eax
 897ca59:	89 04 24             	mov    %eax,(%esp)
 897ca5c:	e8 1a f9 f3 ff       	call   88bc37b <_Z7ScanIntPb>
 897ca61:	89 85 68 ff ff ff    	mov    %eax,-0x98(%ebp)
 897ca67:	0f b6 45 c3          	movzbl -0x3d(%ebp),%eax
 897ca6b:	83 f0 01             	xor    $0x1,%eax
 897ca6e:	84 c0                	test   %al,%al
 897ca70:	74 07                	je     897ca79 <_ZN30IndependentDropParameterScript21ImportIndependentDropEPKc+0x6e1>
 897ca72:	bb 00 00 00 00       	mov    $0x0,%ebx
 897ca77:	eb 5a                	jmp    897cad3 <_ZN30IndependentDropParameterScript21ImportIndependentDropEPKc+0x73b>
 897ca79:	8d 45 c3             	lea    -0x3d(%ebp),%eax
 897ca7c:	89 04 24             	mov    %eax,(%esp)
 897ca7f:	e8 f7 f8 f3 ff       	call   88bc37b <_Z7ScanIntPb>
 897ca84:	89 85 6c ff ff ff    	mov    %eax,-0x94(%ebp)
 897ca8a:	0f b6 45 c3          	movzbl -0x3d(%ebp),%eax
 897ca8e:	83 f0 01             	xor    $0x1,%eax
 897ca91:	84 c0                	test   %al,%al
 897ca93:	74 07                	je     897ca9c <_ZN30IndependentDropParameterScript21ImportIndependentDropEPKc+0x704>
 897ca95:	bb 00 00 00 00       	mov    $0x0,%ebx
 897ca9a:	eb 37                	jmp    897cad3 <_ZN30IndependentDropParameterScript21ImportIndependentDropEPKc+0x73b>
 897ca9c:	8b 45 08             	mov    0x8(%ebp),%eax
 897ca9f:	8d 50 18             	lea    0x18(%eax),%edx
 897caa2:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 897caa8:	89 44 24 04          	mov    %eax,0x4(%esp)
 897caac:	89 14 24             	mov    %edx,(%esp)
 897caaf:	e8 c8 02 00 00       	call   897cd7c <_ZNSt6vectorI28stIndependentDropRateControlSaIS0_EE9push_backERKS0_>
 897cab4:	bb 01 00 00 00       	mov    $0x1,%ebx
 897cab9:	eb 18                	jmp    897cad3 <_ZN30IndependentDropParameterScript21ImportIndependentDropEPKc+0x73b>
 897cabb:	89 d3                	mov    %edx,%ebx
 897cabd:	89 c6                	mov    %eax,%esi
 897cabf:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 897cac5:	89 04 24             	mov    %eax,(%esp)
 897cac8:	e8 47 0a a6 ff       	call   83dd514 <_ZN28stIndependentDropRateControlD1Ev>
 897cacd:	89 f0                	mov    %esi,%eax
 897cacf:	89 da                	mov    %ebx,%edx
 897cad1:	eb 23                	jmp    897caf6 <_ZN30IndependentDropParameterScript21ImportIndependentDropEPKc+0x75e>
 897cad3:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 897cad9:	89 04 24             	mov    %eax,(%esp)
 897cadc:	e8 33 0a a6 ff       	call   83dd514 <_ZN28stIndependentDropRateControlD1Ev>
 897cae1:	85 db                	test   %ebx,%ebx
 897cae3:	0f 84 f2 f8 ff ff    	je     897c3db <_ZN30IndependentDropParameterScript21ImportIndependentDropEPKc+0x43>
 897cae9:	e9 37 ff ff ff       	jmp    897ca25 <_ZN30IndependentDropParameterScript21ImportIndependentDropEPKc+0x68d>
 897caee:	90                   	nop
 897caef:	be 00 00 00 00       	mov    $0x0,%esi
 897caf4:	eb 1b                	jmp    897cb11 <_ZN30IndependentDropParameterScript21ImportIndependentDropEPKc+0x779>
 897caf6:	89 d3                	mov    %edx,%ebx
 897caf8:	89 c6                	mov    %eax,%esi
 897cafa:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 897cafd:	89 04 24             	mov    %eax,(%esp)
 897cb00:	e8 db b0 d8 ff       	call   8707be0 <_ZNSsD1Ev>
 897cb05:	89 f0                	mov    %esi,%eax
 897cb07:	89 da                	mov    %ebx,%edx
 897cb09:	89 04 24             	mov    %eax,(%esp)
 897cb0c:	e8 3f 6c 16 00       	call   8ae3750 <_Unwind_Resume>
 897cb11:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 897cb14:	89 04 24             	mov    %eax,(%esp)
 897cb17:	e8 c4 b0 d8 ff       	call   8707be0 <_ZNSsD1Ev>
 897cb1c:	89 f0                	mov    %esi,%eax
 897cb1e:	81 c4 c0 00 00 00    	add    $0xc0,%esp
 897cb24:	5b                   	pop    %ebx
 897cb25:	5e                   	pop    %esi
 897cb26:	5d                   	pop    %ebp
 897cb27:	c3                   	ret

```

```c
// IndependentDropParameterScript::ImportIndependentDrop @ 0x897c398

/* IndependentDropParameterScript::ImportIndependentDrop(char const*) */

undefined4 __thiscall
IndependentDropParameterScript::ImportIndependentDrop
          (IndependentDropParameterScript *this,char *param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined4 unaff_ESI;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90 [8];
  undefined4 local_70;
  int local_6c;
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> avStack_68 [12];
  int local_5c;
  int local_58;
  undefined4 local_54;
  string local_4c;
  int local_48;
  bool local_41;
  string local_40;
  pair<int,int> local_3c [8];
  pair<int,int> local_34 [8];
  int local_2c;
  int local_28;
  int local_24;
  char local_1d;
  int local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  
  cVar2 = loadRDARScriptFile("",param_1);
  if (cVar2 == '\x01') {
    std::string::string((string *)&local_40);
    local_41 = false;
                    /* try { // try from 0897c3ea to 0897c429 has its CatchHandler @ 0897caf6 */
    while (cVar2 = ScanType((string *)&local_40,true), cVar2 == '\x01') {
      bVar3 = std::operator==(&local_40,"[independent drop]");
      if (bVar3) {
        do {
          local_48 = 0;
          stIndependentDropInfo::stIndependentDropInfo((stIndependentDropInfo *)&local_a0);
                    /* try { // try from 0897c430 to 0897c71b has its CatchHandler @ 0897c9cf */
          local_a0 = ScanInt(&local_41);
          if (local_41 == true) {
            local_9c = ScanInt(&local_41);
            if (local_41 == true) {
              local_98 = ScanInt(&local_41);
              if (local_41 == true) {
                local_94 = ScanInt(&local_41);
                if (local_41 == true) {
                  local_90[0] = ScanInt(&local_41);
                  if (local_41 == true) {
                    local_90[1] = ScanInt(&local_41);
                    if (local_41 == true) {
                      local_90[2] = ScanInt(&local_41);
                      if (local_41 == true) {
                        local_90[3] = ScanInt(&local_41);
                        if (local_41 == true) {
                          for (local_28 = 0; iVar6 = local_28, local_28 < 4; local_28 = local_28 + 1
                              ) {
                            uVar4 = ScanInt(&local_41);
                            local_90[iVar6 + 4] = uVar4;
                            if (local_41 != true) {
                              unaff_ESI = 0xab;
                              iVar6 = 1;
                              goto LAB_0897c9ea;
                            }
                          }
                          local_70 = ScanInt(&local_41);
                          if (local_41 == true) {
                            local_6c = 0;
                            std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::
                            clear(avStack_68);
                            local_5c = ScanInt(&local_41);
                            if (local_41 == true) {
                              local_58 = ScanInt(&local_41);
                              if (local_41 == true) {
                                if (local_58 < local_5c) {
                                  unaff_ESI = 0xbe;
                                  iVar6 = 1;
                                }
                                else {
                                  local_54 = ScanInt(&local_41);
                                  if (local_41 == true) {
                                    local_2c = ScanInt(&local_41);
                                    if (((local_2c == 0) || (local_2c == 1)) || (local_2c == 2)) {
                                      if (local_41 == true) {
                                        std::string::string((string *)&local_4c);
                                        if (local_2c == 1) {
                    /* try { // try from 0897c734 to 0897c995 has its CatchHandler @ 0897c99d */
                                          cVar2 = ScanType((string *)&local_4c,true);
                                          if ((cVar2 != '\0') &&
                                             (bVar3 = std::operator==(&local_4c,"[list]"), bVar3)) {
                                            while (local_48 = ScanInt(&local_41), local_41 == true)
                                            {
                                              local_24 = ScanInt(&local_41);
                                              if (local_41 != true) {
                                                unaff_ESI = 0xe1;
                                                bVar3 = false;
                                                goto LAB_0897c9b2;
                                              }
                                              local_6c = local_6c + local_24;
                                              std::pair<int,int>::pair<int&,int&>
                                                        (local_3c,&local_48,&local_6c);
                                              std::
                                              vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                              ::push_back(avStack_68,local_3c);
                                            }
                                          }
                                        }
                                        else if (((local_2c == 2) &&
                                                 (cVar2 = ScanType((string *)&local_4c,true),
                                                 cVar2 != '\0')) &&
                                                (bVar3 = std::operator==(&local_4c,"[list]"), bVar3)
                                                ) {
LAB_0897c828:
                                          local_1d = '\0';
                                          local_1c = ScanInt(&local_41);
                                          if (local_41 == true) {
                                            local_18 = 0;
                                            while (iVar6 = std::
                                                  vector<IndependentDropListInfo,std::allocator<IndependentDropListInfo>>
                                                  ::size((
                                                  vector<IndependentDropListInfo,std::allocator<IndependentDropListInfo>>
                                                  *)this), (int)local_18 < iVar6) {
                                              piVar5 = (int *)std::
                                                  vector<IndependentDropListInfo,std::allocator<IndependentDropListInfo>>
                                                  ::operator[]((
                                                  vector<IndependentDropListInfo,std::allocator<IndependentDropListInfo>>
                                                  *)this,local_18);
                                              if (*piVar5 == local_1c) {
                                                local_14 = 0;
                                                while( true ) {
                                                  iVar6 = std::
                                                  vector<IndependentDropListInfo,std::allocator<IndependentDropListInfo>>
                                                  ::operator[]((
                                                  vector<IndependentDropListInfo,std::allocator<IndependentDropListInfo>>
                                                  *)this,local_18);
                                                  iVar6 = std::
                                                  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                                  ::size((
                                                  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                                  *)(iVar6 + 4));
                                                  uVar1 = local_14;
                                                  if (iVar6 <= (int)local_14) break;
                                                  iVar6 = std::
                                                  vector<IndependentDropListInfo,std::allocator<IndependentDropListInfo>>
                                                  ::operator[]((
                                                  vector<IndependentDropListInfo,std::allocator<IndependentDropListInfo>>
                                                  *)this,local_18);
                                                  piVar5 = (int *)std::
                                                  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                                  ::operator[]((
                                                  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                                  *)(iVar6 + 4),uVar1);
                                                  uVar1 = local_14;
                                                  local_48 = *piVar5;
                                                  iVar6 = std::
                                                  vector<IndependentDropListInfo,std::allocator<IndependentDropListInfo>>
                                                  ::operator[]((
                                                  vector<IndependentDropListInfo,std::allocator<IndependentDropListInfo>>
                                                  *)this,local_18);
                                                  iVar6 = std::
                                                  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                                  ::operator[]((
                                                  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                                  *)(iVar6 + 4),uVar1);
                                                  local_10 = *(int *)(iVar6 + 4);
                                                  local_6c = local_6c + local_10;
                                                  std::pair<int,int>::pair<int&,int&>
                                                            (local_34,&local_48,&local_6c);
                                                  std::
                                                  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                                  ::push_back(avStack_68,local_34);
                                                  local_14 = local_14 + 1;
                                                }
                                                local_1d = '\x01';
                                              }
                                              if (local_1d != '\0') break;
                                              local_18 = local_18 + 1;
                                            }
                                            goto LAB_0897c828;
                                          }
                                        }
                                        std::
                                        vector<stIndependentDropInfo,std::allocator<stIndependentDropInfo>>
                                        ::push_back((
                                                  vector<stIndependentDropInfo,std::allocator<stIndependentDropInfo>>
                                                  *)(this + 0xc),(stIndependentDropInfo *)&local_a0)
                                        ;
                                        bVar3 = true;
LAB_0897c9b2:
                    /* try { // try from 0897c9b8 to 0897c9bc has its CatchHandler @ 0897c9cf */
                                        std::string::~string((string *)&local_4c);
                                        if (bVar3) {
                                          iVar6 = 2;
                                        }
                                        else {
                                          iVar6 = 1;
                                        }
                                      }
                                      else {
                                        unaff_ESI = 0xcf;
                                        iVar6 = 1;
                                      }
                                    }
                                    else {
                                      LogManager::logFormat
                                                (1,"../RDARScriptIndependentDrop.cpp",
                                                 "ImportIndependentDrop",0xca,
                                                 "flag wrong number(%d)",local_2c);
                                      unaff_ESI = 0xcb;
                                      iVar6 = 1;
                                    }
                                  }
                                  else {
                                    unaff_ESI = 0xc3;
                                    iVar6 = 1;
                                  }
                                }
                              }
                              else {
                                unaff_ESI = 0xbb;
                                iVar6 = 1;
                              }
                            }
                            else {
                              unaff_ESI = 0xb7;
                              iVar6 = 1;
                            }
                          }
                          else {
                            unaff_ESI = 0xb0;
                            iVar6 = 1;
                          }
                        }
                        else {
                          unaff_ESI = 0xa5;
                          iVar6 = 1;
                        }
                      }
                      else {
                        unaff_ESI = 0xa1;
                        iVar6 = 1;
                      }
                    }
                    else {
                      unaff_ESI = 0x99;
                      iVar6 = 1;
                    }
                  }
                  else {
                    unaff_ESI = 0x91;
                    iVar6 = 1;
                  }
                }
                else {
                  unaff_ESI = 0x89;
                  iVar6 = 1;
                }
              }
              else {
                unaff_ESI = 0x81;
                iVar6 = 1;
              }
            }
            else {
              unaff_ESI = 0x7d;
              iVar6 = 1;
            }
          }
          else {
            iVar6 = 0;
          }
LAB_0897c9ea:
                    /* try { // try from 0897c9f3 to 0897ca32 has its CatchHandler @ 0897caf6 */
          stIndependentDropInfo::~stIndependentDropInfo((stIndependentDropInfo *)&local_a0);
          if (iVar6 == 0) break;
          if (iVar6 == 1) goto LAB_0897cb11;
        } while( true );
      }
      bVar3 = std::operator==(&local_40,"[dungeon drop rate balance]");
      if (bVar3) {
        do {
          stIndependentDropRateControl::stIndependentDropRateControl
                    ((stIndependentDropRateControl *)&local_a0);
                    /* try { // try from 0897ca39 to 0897cab3 has its CatchHandler @ 0897cabb */
          local_a0 = ScanInt(&local_41);
          if (local_41 == true) {
            local_9c = ScanInt(&local_41);
            if (local_41 == true) {
              local_98 = ScanInt(&local_41);
              if (local_41 == true) {
                std::
                vector<stIndependentDropRateControl,std::allocator<stIndependentDropRateControl>>::
                push_back((vector<stIndependentDropRateControl,std::allocator<stIndependentDropRateControl>>
                           *)(this + 0x18),(stIndependentDropRateControl *)&local_a0);
                bVar3 = true;
              }
              else {
                bVar3 = false;
              }
            }
            else {
              bVar3 = false;
            }
          }
          else {
            bVar3 = false;
          }
                    /* try { // try from 0897cadc to 0897cae0 has its CatchHandler @ 0897caf6 */
          stIndependentDropRateControl::~stIndependentDropRateControl
                    ((stIndependentDropRateControl *)&local_a0);
        } while (bVar3);
      }
    }
    unaff_ESI = 0;
LAB_0897cb11:
    std::string::~string((string *)&local_40);
  }
  else {
    unaff_ESI = 0x66;
  }
  return unaff_ESI;
}

```

---

## importIndependentDropParameterScript

```asm
// === 0897c1c6 IndependentDropParameterScript::importIndependentDropParameterScript  [0x0897c1c6-0x897c397] ===
 897c1c6:	55                   	push   %ebp
 897c1c7:	89 e5                	mov    %esp,%ebp
 897c1c9:	56                   	push   %esi
 897c1ca:	53                   	push   %ebx
 897c1cb:	83 ec 50             	sub    $0x50,%esp
 897c1ce:	8b 45 0c             	mov    0xc(%ebp),%eax
 897c1d1:	89 44 24 04          	mov    %eax,0x4(%esp)
 897c1d5:	c7 04 24 40 78 4f 09 	movl   $0x94f7840,(%esp)
 897c1dc:	e8 48 fb f3 ff       	call   88bbd29 <_Z18loadRDARScriptFilePKcS0_>
 897c1e1:	83 f0 01             	xor    $0x1,%eax
 897c1e4:	84 c0                	test   %al,%al
 897c1e6:	74 0a                	je     897c1f2 <_ZN30IndependentDropParameterScript36importIndependentDropParameterScriptEPKc+0x2c>
 897c1e8:	bb 00 00 00 00       	mov    $0x0,%ebx
 897c1ed:	e9 9a 01 00 00       	jmp    897c38c <_ZN30IndependentDropParameterScript36importIndependentDropParameterScriptEPKc+0x1c6>
 897c1f2:	8d 45 e0             	lea    -0x20(%ebp),%eax
 897c1f5:	89 04 24             	mov    %eax,(%esp)
 897c1f8:	e8 d3 a3 d8 ff       	call   87065d0 <_ZNSsC1Ev>
 897c1fd:	c6 45 df 00          	movb   $0x0,-0x21(%ebp)
 897c201:	8d 45 cc             	lea    -0x34(%ebp),%eax
 897c204:	89 04 24             	mov    %eax,(%esp)
 897c207:	e8 a2 09 00 00       	call   897cbae <_ZN23IndependentDropListInfoC1Ev>
 897c20c:	8b 45 0c             	mov    0xc(%ebp),%eax
 897c20f:	89 44 24 04          	mov    %eax,0x4(%esp)
 897c213:	c7 04 24 40 79 4f 09 	movl   $0x94f7940,(%esp)
 897c21a:	e8 37 ec f3 ff       	call   88bae56 <_ZNK16STScriptFileList19FindIndexByFullScanEPKc>
 897c21f:	89 45 cc             	mov    %eax,-0x34(%ebp)
 897c222:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
 897c229:	eb 01                	jmp    897c22c <_ZN30IndependentDropParameterScript36importIndependentDropParameterScriptEPKc+0x66>
 897c22b:	90                   	nop
 897c22c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 897c233:	00 
 897c234:	8d 45 e0             	lea    -0x20(%ebp),%eax
 897c237:	89 04 24             	mov    %eax,(%esp)
 897c23a:	e8 20 06 f4 ff       	call   88bc85f <_Z8ScanTypeRSsb>
 897c23f:	83 f0 01             	xor    $0x1,%eax
 897c242:	84 c0                	test   %al,%al
 897c244:	0f 85 92 00 00 00    	jne    897c2dc <_ZN30IndependentDropParameterScript36importIndependentDropParameterScriptEPKc+0x116>
 897c24a:	c7 44 24 04 dd 4c e1 	movl   $0x8e14cdd,0x4(%esp)
 897c251:	08 
 897c252:	8d 45 e0             	lea    -0x20(%ebp),%eax
 897c255:	89 04 24             	mov    %eax,(%esp)
 897c258:	e8 44 47 70 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 897c25d:	84 c0                	test   %al,%al
 897c25f:	74 ca                	je     897c22b <_ZN30IndependentDropParameterScript36importIndependentDropParameterScriptEPKc+0x65>
 897c261:	8d 45 df             	lea    -0x21(%ebp),%eax
 897c264:	89 04 24             	mov    %eax,(%esp)
 897c267:	e8 0f 01 f4 ff       	call   88bc37b <_Z7ScanIntPb>
 897c26c:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 897c26f:	0f b6 45 df          	movzbl -0x21(%ebp),%eax
 897c273:	83 f0 01             	xor    $0x1,%eax
 897c276:	84 c0                	test   %al,%al
 897c278:	74 03                	je     897c27d <_ZN30IndependentDropParameterScript36importIndependentDropParameterScriptEPKc+0xb7>
 897c27a:	90                   	nop
 897c27b:	eb af                	jmp    897c22c <_ZN30IndependentDropParameterScript36importIndependentDropParameterScriptEPKc+0x66>
 897c27d:	8d 45 df             	lea    -0x21(%ebp),%eax
 897c280:	89 04 24             	mov    %eax,(%esp)
 897c283:	e8 f3 00 f4 ff       	call   88bc37b <_Z7ScanIntPb>
 897c288:	89 45 c0             	mov    %eax,-0x40(%ebp)
 897c28b:	0f b6 45 df          	movzbl -0x21(%ebp),%eax
 897c28f:	83 f0 01             	xor    $0x1,%eax
 897c292:	84 c0                	test   %al,%al
 897c294:	74 0a                	je     897c2a0 <_ZN30IndependentDropParameterScript36importIndependentDropParameterScriptEPKc+0xda>
 897c296:	bb 00 00 00 00       	mov    $0x0,%ebx
 897c29b:	e9 b9 00 00 00       	jmp    897c359 <_ZN30IndependentDropParameterScript36importIndependentDropParameterScriptEPKc+0x193>
 897c2a0:	8b 55 c8             	mov    -0x38(%ebp),%edx
 897c2a3:	8b 45 c0             	mov    -0x40(%ebp),%eax
 897c2a6:	8d 04 02             	lea    (%edx,%eax,1),%eax
 897c2a9:	89 45 c8             	mov    %eax,-0x38(%ebp)
 897c2ac:	8d 45 c0             	lea    -0x40(%ebp),%eax
 897c2af:	89 44 24 08          	mov    %eax,0x8(%esp)
 897c2b3:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 897c2b6:	89 44 24 04          	mov    %eax,0x4(%esp)
 897c2ba:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 897c2bd:	89 04 24             	mov    %eax,(%esp)
 897c2c0:	e8 2d aa 74 ff       	call   80c6cf2 <_ZNSt4pairIiiEC1IRiS2_EEOT_OT0_>
 897c2c5:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 897c2c8:	89 44 24 04          	mov    %eax,0x4(%esp)
 897c2cc:	8d 45 cc             	lea    -0x34(%ebp),%eax
 897c2cf:	83 c0 04             	add    $0x4,%eax
 897c2d2:	89 04 24             	mov    %eax,(%esp)
 897c2d5:	e8 2c 13 76 ff       	call   80dd606 <_ZNSt6vectorISt4pairIiiESaIS1_EE9push_backEOS1_>
 897c2da:	eb 85                	jmp    897c261 <_ZN30IndependentDropParameterScript36importIndependentDropParameterScriptEPKc+0x9b>
 897c2dc:	90                   	nop
 897c2dd:	8b 45 08             	mov    0x8(%ebp),%eax
 897c2e0:	89 04 24             	mov    %eax,(%esp)
 897c2e3:	e8 fc 87 83 ff       	call   81b4ae4 <_ZNKSt6vectorI23IndependentDropListInfoSaIS0_EE4sizeEv>
 897c2e8:	89 45 f4             	mov    %eax,-0xc(%ebp)
 897c2eb:	8d 45 ec             	lea    -0x14(%ebp),%eax
 897c2ee:	8d 55 c8             	lea    -0x38(%ebp),%edx
 897c2f1:	89 54 24 08          	mov    %edx,0x8(%esp)
 897c2f5:	8d 55 f4             	lea    -0xc(%ebp),%edx
 897c2f8:	89 54 24 04          	mov    %edx,0x4(%esp)
 897c2fc:	89 04 24             	mov    %eax,(%esp)
 897c2ff:	e8 02 09 00 00       	call   897cc06 <_ZSt9make_pairIjRiESt4pairINSt17__decay_and_stripIT_E6__typeENS2_IT0_E6__typeEEOS3_OS6_>
 897c304:	83 ec 04             	sub    $0x4,%esp
 897c307:	8b 45 08             	mov    0x8(%ebp),%eax
 897c30a:	8d 50 24             	lea    0x24(%eax),%edx
 897c30d:	8d 45 cc             	lea    -0x34(%ebp),%eax
 897c310:	89 44 24 04          	mov    %eax,0x4(%esp)
 897c314:	89 14 24             	mov    %edx,(%esp)
 897c317:	e8 12 9a 83 ff       	call   81b5d2e <_ZNSt3mapIiSt4pairIiiESt4lessIiESaIS0_IKiS1_EEEixERS4_>
 897c31c:	8d 55 ec             	lea    -0x14(%ebp),%edx
 897c31f:	89 54 24 04          	mov    %edx,0x4(%esp)
 897c323:	89 04 24             	mov    %eax,(%esp)
 897c326:	e8 21 09 00 00       	call   897cc4c <_ZNSt4pairIiiEaSIjiEERS0_OS_IT_T0_E>
 897c32b:	8b 45 08             	mov    0x8(%ebp),%eax
 897c32e:	8d 55 cc             	lea    -0x34(%ebp),%edx
 897c331:	89 54 24 04          	mov    %edx,0x4(%esp)
 897c335:	89 04 24             	mov    %eax,(%esp)
 897c338:	e8 45 09 00 00       	call   897cc82 <_ZNSt6vectorI23IndependentDropListInfoSaIS0_EE9push_backERKS0_>
 897c33d:	bb 01 00 00 00       	mov    $0x1,%ebx
 897c342:	eb 15                	jmp    897c359 <_ZN30IndependentDropParameterScript36importIndependentDropParameterScriptEPKc+0x193>
 897c344:	89 d3                	mov    %edx,%ebx
 897c346:	89 c6                	mov    %eax,%esi
 897c348:	8d 45 cc             	lea    -0x34(%ebp),%eax
 897c34b:	89 04 24             	mov    %eax,(%esp)
 897c34e:	e8 61 11 a6 ff       	call   83dd4b4 <_ZN23IndependentDropListInfoD1Ev>
 897c353:	89 f0                	mov    %esi,%eax
 897c355:	89 da                	mov    %ebx,%edx
 897c357:	eb 0d                	jmp    897c366 <_ZN30IndependentDropParameterScript36importIndependentDropParameterScriptEPKc+0x1a0>
 897c359:	8d 45 cc             	lea    -0x34(%ebp),%eax
 897c35c:	89 04 24             	mov    %eax,(%esp)
 897c35f:	e8 50 11 a6 ff       	call   83dd4b4 <_ZN23IndependentDropListInfoD1Ev>
 897c364:	eb 1b                	jmp    897c381 <_ZN30IndependentDropParameterScript36importIndependentDropParameterScriptEPKc+0x1bb>
 897c366:	89 d3                	mov    %edx,%ebx
 897c368:	89 c6                	mov    %eax,%esi
 897c36a:	8d 45 e0             	lea    -0x20(%ebp),%eax
 897c36d:	89 04 24             	mov    %eax,(%esp)
 897c370:	e8 6b b8 d8 ff       	call   8707be0 <_ZNSsD1Ev>
 897c375:	89 f0                	mov    %esi,%eax
 897c377:	89 da                	mov    %ebx,%edx
 897c379:	89 04 24             	mov    %eax,(%esp)
 897c37c:	e8 cf 73 16 00       	call   8ae3750 <_Unwind_Resume>
 897c381:	8d 45 e0             	lea    -0x20(%ebp),%eax
 897c384:	89 04 24             	mov    %eax,(%esp)
 897c387:	e8 54 b8 d8 ff       	call   8707be0 <_ZNSsD1Ev>
 897c38c:	89 d8                	mov    %ebx,%eax
 897c38e:	8d 65 f8             	lea    -0x8(%ebp),%esp
 897c391:	83 c4 00             	add    $0x0,%esp
 897c394:	5b                   	pop    %ebx
 897c395:	5e                   	pop    %esi
 897c396:	5d                   	pop    %ebp
 897c397:	c3                   	ret

```

```c
// IndependentDropParameterScript::importIndependentDropParameterScript @ 0x897c1c6

/* IndependentDropParameterScript::importIndependentDropParameterScript(char const*) */

undefined4 __thiscall
IndependentDropParameterScript::importIndependentDropParameterScript
          (IndependentDropParameterScript *this,char *param_1)

{
  char cVar1;
  bool bVar2;
  pair<int,int> *this_00;
  undefined4 uVar3;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> avStack_34 [15];
  bool local_25;
  string local_24;
  pair<int,int> local_20 [8];
  uint local_18 [2];
  int local_10;
  
  cVar1 = loadRDARScriptFile(g_independentDropScriptBaseDirectory,param_1);
  if (cVar1 == '\x01') {
    std::string::string((string *)&local_24);
    local_25 = false;
                    /* try { // try from 0897c207 to 0897c20b has its CatchHandler @ 0897c366 */
    IndependentDropListInfo::IndependentDropListInfo((IndependentDropListInfo *)&local_38);
                    /* try { // try from 0897c21a to 0897c33c has its CatchHandler @ 0897c344 */
    local_38 = STScriptFileList::FindIndexByFullScan
                         ((STScriptFileList *)g_independentDropScriptFileList,param_1);
    local_3c = 0;
    while (cVar1 = ScanType((string *)&local_24,true), cVar1 == '\x01') {
      bVar2 = std::operator==(&local_24,"[list]");
      if (bVar2) {
        while (local_40 = ScanInt(&local_25), local_25 == true) {
          local_44 = ScanInt(&local_25);
          if (local_25 != true) {
            uVar3 = 0;
            goto LAB_0897c359;
          }
          local_3c = local_3c + local_44;
          std::pair<int,int>::pair<int&,int&>(local_20,&local_40,&local_44);
          std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                    (avStack_34,local_20);
        }
      }
    }
    local_10 = std::vector<IndependentDropListInfo,std::allocator<IndependentDropListInfo>>::size
                         ((vector<IndependentDropListInfo,std::allocator<IndependentDropListInfo>> *
                          )this);
    std::make_pair<unsigned_int,int&>(local_18,&local_10);
    this_00 = (pair<int,int> *)
              std::
              map<int,std::pair<int,int>,std::less<int>,std::allocator<std::pair<int_const,std::pair<int,int>>>>
              ::operator[]((map<int,std::pair<int,int>,std::less<int>,std::allocator<std::pair<int_const,std::pair<int,int>>>>
                            *)(this + 0x24),&local_38);
    std::pair<int,int>::operator=(this_00,(pair *)local_18);
    std::vector<IndependentDropListInfo,std::allocator<IndependentDropListInfo>>::push_back
              ((vector<IndependentDropListInfo,std::allocator<IndependentDropListInfo>> *)this,
               (IndependentDropListInfo *)&local_38);
    uVar3 = 1;
LAB_0897c359:
                    /* try { // try from 0897c35f to 0897c363 has its CatchHandler @ 0897c366 */
    IndependentDropListInfo::~IndependentDropListInfo((IndependentDropListInfo *)&local_38);
    std::string::~string((string *)&local_24);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

```

---

## load_independent_drop_list

```asm
// === 0897c0d8 IndependentDropParameterScript::load_independent_drop_list  [0x0897c0d8-0x897c1c5] ===
 897c0d8:	55                   	push   %ebp
 897c0d9:	89 e5                	mov    %esp,%ebp
 897c0db:	83 ec 48             	sub    $0x48,%esp
 897c0de:	8d 45 ec             	lea    -0x14(%ebp),%eax
 897c0e1:	89 04 24             	mov    %eax,(%esp)
 897c0e4:	e8 ef 7b 93 ff       	call   82b3cd8 <_ZNSt17_Rb_tree_iteratorISt4pairIKiSsEEC1Ev>
 897c0e9:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 897c0ec:	c7 44 24 04 40 79 4f 	movl   $0x94f7940,0x4(%esp)
 897c0f3:	09 
 897c0f4:	89 04 24             	mov    %eax,(%esp)
 897c0f7:	e8 f6 9f 76 ff       	call   80e60f2 <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEE5beginEv>
 897c0fc:	83 ec 04             	sub    $0x4,%esp
 897c0ff:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 897c102:	89 45 ec             	mov    %eax,-0x14(%ebp)
 897c105:	e9 81 00 00 00       	jmp    897c18b <_ZN30IndependentDropParameterScript26load_independent_drop_listEv+0xb3>
 897c10a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 897c10d:	89 04 24             	mov    %eax,(%esp)
 897c110:	e8 a3 a0 76 ff       	call   80e61b8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSsEEptEv>
 897c115:	83 c0 04             	add    $0x4,%eax
 897c118:	89 04 24             	mov    %eax,(%esp)
 897c11b:	e8 d0 a3 d8 ff       	call   87064f0 <_ZNKSs5c_strEv>
 897c120:	89 45 f4             	mov    %eax,-0xc(%ebp)
 897c123:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 897c127:	0f 84 90 00 00 00    	je     897c1bd <_ZN30IndependentDropParameterScript26load_independent_drop_listEv+0xe5>
 897c12d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 897c130:	89 44 24 04          	mov    %eax,0x4(%esp)
 897c134:	8b 45 08             	mov    0x8(%ebp),%eax
 897c137:	89 04 24             	mov    %eax,(%esp)
 897c13a:	e8 87 00 00 00       	call   897c1c6 <_ZN30IndependentDropParameterScript36importIndependentDropParameterScriptEPKc>
 897c13f:	83 f0 01             	xor    $0x1,%eax
 897c142:	84 c0                	test   %al,%al
 897c144:	74 3a                	je     897c180 <_ZN30IndependentDropParameterScript26load_independent_drop_listEv+0xa8>
 897c146:	8b 45 f4             	mov    -0xc(%ebp),%eax
 897c149:	89 44 24 14          	mov    %eax,0x14(%esp)
 897c14d:	c7 44 24 10 84 4c e1 	movl   $0x8e14c84,0x10(%esp)
 897c154:	08 
 897c155:	c7 44 24 0c 30 00 00 	movl   $0x30,0xc(%esp)
 897c15c:	00 
 897c15d:	c7 44 24 08 22 51 e1 	movl   $0x8e15122,0x8(%esp)
 897c164:	08 
 897c165:	c7 44 24 04 bc 4c e1 	movl   $0x8e14cbc,0x4(%esp)
 897c16c:	08 
 897c16d:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 897c174:	e8 91 7a 15 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 897c179:	b8 00 00 00 00       	mov    $0x0,%eax
 897c17e:	eb 43                	jmp    897c1c3 <_ZN30IndependentDropParameterScript26load_independent_drop_listEv+0xeb>
 897c180:	8d 45 ec             	lea    -0x14(%ebp),%eax
 897c183:	89 04 24             	mov    %eax,(%esp)
 897c186:	e8 85 a4 76 ff       	call   80e6610 <_ZNSt17_Rb_tree_iteratorISt4pairIKiSsEEppEv>
 897c18b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 897c18e:	c7 44 24 04 40 79 4f 	movl   $0x94f7940,0x4(%esp)
 897c195:	09 
 897c196:	89 04 24             	mov    %eax,(%esp)
 897c199:	e8 7a 9f 76 ff       	call   80e6118 <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEE3endEv>
 897c19e:	83 ec 04             	sub    $0x4,%esp
 897c1a1:	8d 45 f0             	lea    -0x10(%ebp),%eax
 897c1a4:	89 44 24 04          	mov    %eax,0x4(%esp)
 897c1a8:	8d 45 ec             	lea    -0x14(%ebp),%eax
 897c1ab:	89 04 24             	mov    %eax,(%esp)
 897c1ae:	e8 8b 9f 76 ff       	call   80e613e <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSsEEneERKS3_>
 897c1b3:	84 c0                	test   %al,%al
 897c1b5:	0f 85 4f ff ff ff    	jne    897c10a <_ZN30IndependentDropParameterScript26load_independent_drop_listEv+0x32>
 897c1bb:	eb 01                	jmp    897c1be <_ZN30IndependentDropParameterScript26load_independent_drop_listEv+0xe6>
 897c1bd:	90                   	nop
 897c1be:	b8 01 00 00 00       	mov    $0x1,%eax
 897c1c3:	c9                   	leave
 897c1c4:	c3                   	ret
 897c1c5:	90                   	nop

```

```c
// IndependentDropParameterScript::load_independent_drop_list @ 0x897c0d8

/* IndependentDropParameterScript::load_independent_drop_list() */

undefined4 __thiscall
IndependentDropParameterScript::load_independent_drop_list(IndependentDropParameterScript *this)

{
  char cVar1;
  int iVar2;
  undefined4 local_20 [2];
  undefined4 local_18;
  map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> local_14 [4];
  char *local_10;
  
  std::_Rb_tree_iterator<std::pair<int_const,std::string>>::_Rb_tree_iterator
            ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)&local_18);
  std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::begin
            ((map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> *
             )local_20);
  local_18 = local_20[0];
  while( true ) {
    std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::end
              (local_14);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)&local_18,
                       (_Rb_tree_iterator *)local_14);
    if (cVar1 == '\0') {
      return 1;
    }
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)&local_18);
    local_10 = (char *)std::string::c_str((string *)(iVar2 + 4));
    if (local_10 == (char *)0x0) break;
    cVar1 = importIndependentDropParameterScript(this,local_10);
    if (cVar1 != '\x01') {
      LogManager::logFormat
                (1,"../RDARScriptIndependentDrop.cpp","load_independent_drop_list",0x30,
                 "IndependentDropParameterScript File Script Error: %s\n",local_10);
      return 0;
    }
    std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)&local_18);
  }
  return 1;
}

```

