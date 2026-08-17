# TaoCrypt__DES_EDE3

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## AsmProcess

```asm
// === 087a63e0 TaoCrypt::DES_EDE3::AsmProcess  [0x087a63e0-0x87a7a0f] ===
 87a63e0:	55                   	push   %ebp
 87a63e1:	89 e5                	mov    %esp,%ebp
 87a63e3:	0f 6e df             	movd   %edi,%mm3
 87a63e6:	0f 6e e3             	movd   %ebx,%mm4
 87a63e9:	0f 6e ee             	movd   %esi,%mm5
 87a63ec:	0f 6e f5             	movd   %ebp,%mm6
 87a63ef:	8b 55 08             	mov    0x8(%ebp),%edx
 87a63f2:	8b 75 0c             	mov    0xc(%ebp),%esi
 87a63f5:	8b 6d 14             	mov    0x14(%ebp),%ebp
 87a63f8:	0f 6e d2             	movd   %edx,%mm2
 87a63fb:	83 c2 38             	add    $0x38,%edx
 87a63fe:	8b 06                	mov    (%esi),%eax
 87a6400:	8b 5e 04             	mov    0x4(%esi),%ebx
 87a6403:	0f c8                	bswap  %eax
 87a6405:	0f cb                	bswap  %ebx
 87a6407:	c1 c3 04             	rol    $0x4,%ebx
 87a640a:	89 c1                	mov    %eax,%ecx
 87a640c:	31 d9                	xor    %ebx,%ecx
 87a640e:	81 e1 f0 f0 f0 f0    	and    $0xf0f0f0f0,%ecx
 87a6414:	31 cb                	xor    %ecx,%ebx
 87a6416:	31 c8                	xor    %ecx,%eax
 87a6418:	c1 cb 14             	ror    $0x14,%ebx
 87a641b:	89 c1                	mov    %eax,%ecx
 87a641d:	31 d9                	xor    %ebx,%ecx
 87a641f:	81 e1 00 00 ff ff    	and    $0xffff0000,%ecx
 87a6425:	31 cb                	xor    %ecx,%ebx
 87a6427:	31 c8                	xor    %ecx,%eax
 87a6429:	c1 cb 12             	ror    $0x12,%ebx
 87a642c:	89 c1                	mov    %eax,%ecx
 87a642e:	31 d9                	xor    %ebx,%ecx
 87a6430:	81 e1 33 33 33 33    	and    $0x33333333,%ecx
 87a6436:	31 cb                	xor    %ecx,%ebx
 87a6438:	31 c8                	xor    %ecx,%eax
 87a643a:	c1 cb 06             	ror    $0x6,%ebx
 87a643d:	89 c1                	mov    %eax,%ecx
 87a643f:	31 d9                	xor    %ebx,%ecx
 87a6441:	81 e1 ff 00 ff 00    	and    $0xff00ff,%ecx
 87a6447:	31 cb                	xor    %ecx,%ebx
 87a6449:	31 c8                	xor    %ecx,%eax
 87a644b:	c1 c3 09             	rol    $0x9,%ebx
 87a644e:	89 c1                	mov    %eax,%ecx
 87a6450:	31 d9                	xor    %ebx,%ecx
 87a6452:	81 e1 aa aa aa aa    	and    $0xaaaaaaaa,%ecx
 87a6458:	31 c8                	xor    %ecx,%eax
 87a645a:	d1 c0                	rol    $1,%eax
 87a645c:	31 cb                	xor    %ecx,%ebx
 87a645e:	89 d9                	mov    %ebx,%ecx
 87a6460:	8b 32                	mov    (%edx),%esi
 87a6462:	c1 c9 04             	ror    $0x4,%ecx
 87a6465:	31 f1                	xor    %esi,%ecx
 87a6467:	81 e1 3f 3f 3f 3f    	and    $0x3f3f3f3f,%ecx
 87a646d:	0f b6 f1             	movzbl %cl,%esi
 87a6470:	0f b6 fd             	movzbl %ch,%edi
 87a6473:	33 84 b5 00 06 00 00 	xor    0x600(%ebp,%esi,4),%eax
 87a647a:	c1 e9 10             	shr    $0x10,%ecx
 87a647d:	33 84 bd 00 04 00 00 	xor    0x400(%ebp,%edi,4),%eax
 87a6484:	0f b6 f1             	movzbl %cl,%esi
 87a6487:	0f b6 fd             	movzbl %ch,%edi
 87a648a:	33 84 b5 00 02 00 00 	xor    0x200(%ebp,%esi,4),%eax
 87a6491:	8b 72 04             	mov    0x4(%edx),%esi
 87a6494:	33 44 bd 00          	xor    0x0(%ebp,%edi,4),%eax
 87a6498:	89 d9                	mov    %ebx,%ecx
 87a649a:	31 f1                	xor    %esi,%ecx
 87a649c:	81 e1 3f 3f 3f 3f    	and    $0x3f3f3f3f,%ecx
 87a64a2:	0f b6 f1             	movzbl %cl,%esi
 87a64a5:	0f b6 fd             	movzbl %ch,%edi
 87a64a8:	33 84 b5 00 07 00 00 	xor    0x700(%ebp,%esi,4),%eax
 87a64af:	c1 e9 10             	shr    $0x10,%ecx
 87a64b2:	33 84 bd 00 05 00 00 	xor    0x500(%ebp,%edi,4),%eax
 87a64b9:	0f b6 f1             	movzbl %cl,%esi
 87a64bc:	0f b6 fd             	movzbl %ch,%edi
 87a64bf:	33 84 b5 00 03 00 00 	xor    0x300(%ebp,%esi,4),%eax
 87a64c6:	8b 72 08             	mov    0x8(%edx),%esi
 87a64c9:	33 84 bd 00 01 00 00 	xor    0x100(%ebp,%edi,4),%eax
 87a64d0:	89 c1                	mov    %eax,%ecx
 87a64d2:	c1 c9 04             	ror    $0x4,%ecx
 87a64d5:	31 f1                	xor    %esi,%ecx
 87a64d7:	81 e1 3f 3f 3f 3f    	and    $0x3f3f3f3f,%ecx
 87a64dd:	0f b6 f1             	movzbl %cl,%esi
 87a64e0:	0f b6 fd             	movzbl %ch,%edi
 87a64e3:	33 9c b5 00 06 00 00 	xor    0x600(%ebp,%esi,4),%ebx
 87a64ea:	c1 e9 10             	shr    $0x10,%ecx
 87a64ed:	33 9c bd 00 04 00 00 	xor    0x400(%ebp,%edi,4),%ebx
 87a64f4:	0f b6 f1             	movzbl %cl,%esi
 87a64f7:	0f b6 fd             	movzbl %ch,%edi
 87a64fa:	33 9c b5 00 02 00 00 	xor    0x200(%ebp,%esi,4),%ebx
 87a6501:	8b 72 0c             	mov    0xc(%edx),%esi
 87a6504:	33 5c bd 00          	xor    0x0(%ebp,%edi,4),%ebx
 87a6508:	89 c1                	mov    %eax,%ecx
 87a650a:	31 f1                	xor    %esi,%ecx
 87a650c:	81 e1 3f 3f 3f 3f    	and    $0x3f3f3f3f,%ecx
 87a6512:	0f b6 f1             	movzbl %cl,%esi
 87a6515:	0f b6 fd             	movzbl %ch,%edi
 87a6518:	33 9c b5 00 07 00 00 	xor    0x700(%ebp,%esi,4),%ebx
 87a651f:	c1 e9 10             	shr    $0x10,%ecx
 87a6522:	33 9c bd 00 05 00 00 	xor    0x500(%ebp,%edi,4),%ebx
 87a6529:	0f b6 f1             	movzbl %cl,%esi
 87a652c:	0f b6 fd             	movzbl %ch,%edi
 87a652f:	33 9c b5 00 03 00 00 	xor    0x300(%ebp,%esi,4),%ebx
 87a6536:	83 c2 10             	add    $0x10,%edx
 87a6539:	33 9c bd 00 01 00 00 	xor    0x100(%ebp,%edi,4),%ebx
 87a6540:	89 d9                	mov    %ebx,%ecx
 87a6542:	8b 32                	mov    (%edx),%esi
 87a6544:	c1 c9 04             	ror    $0x4,%ecx
 87a6547:	31 f1                	xor    %esi,%ecx
 87a6549:	81 e1 3f 3f 3f 3f    	and    $0x3f3f3f3f,%ecx
 87a654f:	0f b6 f1             	movzbl %cl,%esi
 87a6552:	0f b6 fd             	movzbl %ch,%edi
 87a6555:	33 84 b5 00 06 00 00 	xor    0x600(%ebp,%esi,4),%eax
 87a655c:	c1 e9 10             	shr    $0x10,%ecx
 87a655f:	33 84 bd 00 04 00 00 	xor    0x400(%ebp,%edi,4),%eax
 87a6566:	0f b6 f1             	movzbl %cl,%esi
 87a6569:	0f b6 fd             	movzbl %ch,%edi
 87a656c:	33 84 b5 00 02 00 00 	xor    0x200(%ebp,%esi,4),%eax
 87a6573:	8b 72 04             	mov    0x4(%edx),%esi
 87a6576:	33 44 bd 00          	xor    0x0(%ebp,%edi,4),%eax
 87a657a:	89 d9                	mov    %ebx,%ecx
 87a657c:	31 f1                	xor    %esi,%ecx
 87a657e:	81 e1 3f 3f 3f 3f    	and    $0x3f3f3f3f,%ecx
 87a6584:	0f b6 f1             	movzbl %cl,%esi
 87a6587:	0f b6 fd             	movzbl %ch,%edi
 87a658a:	33 84 b5 00 07 00 00 	xor    0x700(%ebp,%esi,4),%eax
 87a6591:	c1 e9 10             	shr    $0x10,%ecx
 87a6594:	33 84 bd 00 05 00 00 	xor    0x500(%ebp,%edi,4),%eax
 87a659b:	0f b6 f1             	movzbl %cl,%esi
 87a659e:	0f b6 fd             	movzbl %ch,%edi
 87a65a1:	33 84 b5 00 03 00 00 	xor    0x300(%ebp,%esi,4),%eax
 87a65a8:	8b 72 08             	mov    0x8(%edx),%esi
 87a65ab:	33 84 bd 00 01 00 00 	xor    0x100(%ebp,%edi,4),%eax
 87a65b2:	89 c1                	mov    %eax,%ecx
 87a65b4:	c1 c9 04             	ror    $0x4,%ecx
 87a65b7:	31 f1                	xor    %esi,%ecx
 87a65b9:	81 e1 3f 3f 3f 3f    	and    $0x3f3f3f3f,%ecx
 87a65bf:	0f b6 f1             	movzbl %cl,%esi
 87a65c2:	0f b6 fd             	movzbl %ch,%edi
 87a65c5:	33 9c b5 00 06 00 00 	xor    0x600(%ebp,%esi,4),%ebx
 87a65cc:	c1 e9 10             	shr    $0x10,%ecx
 87a65cf:	33 9c bd 00 04 00 00 	xor    0x400(%ebp,%edi,4),%ebx
 87a65d6:	0f b6 f1             	movzbl %cl,%esi
 87a65d9:	0f b6 fd             	movzbl %ch,%edi
 87a65dc:	33 9c b5 00 02 00 00 	xor    0x200(%ebp,%esi,4),%ebx
 87a65e3:	8b 72 0c             	mov    0xc(%edx),%esi
 87a65e6:	33 5c bd 00          	xor    0x0(%ebp,%edi,4),%ebx
 87a65ea:	89 c1                	mov    %eax,%ecx
 87a65ec:	31 f1                	xor    %esi,%ecx
 87a65ee:	81 e1 3f 3f 3f 3f    	and    $0x3f3f3f3f,%ecx
 87a65f4:	0f b6 f1             	movzbl %cl,%esi
 87a65f7:	0f b6 fd             	movzbl %ch,%edi
 87a65fa:	33 9c b5 00 07 00 00 	xor    0x700(%ebp,%esi,4),%ebx
 87a6601:	c1 e9 10             	shr    $0x10,%ecx
 87a6604:	33 9c bd 00 05 00 00 	xor    0x500(%ebp,%edi,4),%ebx
 87a660b:	0f b6 f1             	movzbl %cl,%esi
 87a660e:	0f b6 fd             	movzbl %ch,%edi
 87a6611:	33 9c b5 00 03 00 00 	xor    0x300(%ebp,%esi,4),%ebx
 87a6618:	83 c2 10             	add    $0x10,%edx
 87a661b:	33 9c bd 00 01 00 00 	xor    0x100(%ebp,%edi,4),%ebx
 87a6622:	89 d9                	mov    %ebx,%ecx
 87a6624:	8b 32                	mov    (%edx),%esi
 87a6626:	c1 c9 04             	ror    $0x4,%ecx
 87a6629:	31 f1                	xor    %esi,%ecx
 87a662b:	81 e1 3f 3f 3f 3f    	and    $0x3f3f3f3f,%ecx
 87a6631:	0f b6 f1             	movzbl %cl,%esi
 87a6634:	0f b6 fd             	movzbl %ch,%edi
 87a6637:	33 84 b5 00 06 00 00 	xor    0x600(%ebp,%esi,4),%eax
 87a663e:	c1 e9 10             	shr    $0x10,%ecx
 87a6641:	33 84 bd 00 04 00 00 	xor    0x400(%ebp,%edi,4),%eax
 87a6648:	0f b6 f1             	movzbl %cl,%esi
 87a664b:	0f b6 fd             	movzbl %ch,%edi
 87a664e:	33 84 b5 00 02 00 00 	xor    0x200(%ebp,%esi,4),%eax
 87a6655:	8b 72 04             	mov    0x4(%edx),%esi
 87a6658:	33 44 bd 00          	xor    0x0(%ebp,%edi,4),%eax
 87a665c:	89 d9                	mov    %ebx,%ecx
 87a665e:	31 f1                	xor    %esi,%ecx
 87a6660:	81 e1 3f 3f 3f 3f    	and    $0x3f3f3f3f,%ecx
 87a6666:	0f b6 f1             	movzbl %cl,%esi
 87a6669:	0f b6 fd             	movzbl %ch,%edi
 87a666c:	33 84 b5 00 07 00 00 	xor    0x700(%ebp,%esi,4),%eax
 87a6673:	c1 e9 10             	shr    $0x10,%ecx
 87a6676:	33 84 bd 00 05 00 00 	xor    0x500(%ebp,%edi,4),%eax
 87a667d:	0f b6 f1             	movzbl %cl,%esi
 87a6680:	0f b6 fd             	movzbl %ch,%edi
 87a6683:	33 84 b5 00 03 00 00 	xor    0x300(%ebp,%esi,4),%eax
 87a668a:	8b 72 08             	mov    0x8(%edx),%esi
 87a668d:	33 84 bd 00 01 00 00 	xor    0x100(%ebp,%edi,4),%eax
 87a6694:	89 c1                	mov    %eax,%ecx
 87a6696:	c1 c9 04             	ror    $0x4,%ecx
 87a6699:	31 f1                	xor    %esi,%ecx
 87a669b:	81 e1 3f 3f 3f 3f    	and    $0x3f3f3f3f,%ecx
 87a66a1:	0f b6 f1             	movzbl %cl,%esi
 87a66a4:	0f b6 fd             	movzbl %ch,%edi
 87a66a7:	33 9c b5 00 06 00 00 	xor    0x600(%ebp,%esi,4),%ebx
 87a66ae:	c1 e9 10             	shr    $0x10,%ecx
 87a66b1:	33 9c bd 00 04 00 00 	xor    0x400(%ebp,%edi,4),%ebx
 87a66b8:	0f b6 f1             	movzbl %cl,%esi
 87a66bb:	0f b6 fd             	movzbl %ch,%edi
 87a66be:	33 9c b5 00 02 00 00 	xor    0x200(%ebp,%esi,4),%ebx
 87a66c5:	8b 72 0c             	mov    0xc(%edx),%esi
 87a66c8:	33 5c bd 00          	xor    0x0(%ebp,%edi,4),%ebx
 87a66cc:	89 c1                	mov    %eax,%ecx
 87a66ce:	31 f1                	xor    %esi,%ecx
 87a66d0:	81 e1 3f 3f 3f 3f    	and    $0x3f3f3f3f,%ecx
 87a66d6:	0f b6 f1             	movzbl %cl,%esi
 87a66d9:	0f b6 fd             	movzbl %ch,%edi
 87a66dc:	33 9c b5 00 07 00 00 	xor    0x700(%ebp,%esi,4),%ebx
 87a66e3:	c1 e9 10             	shr    $0x10,%ecx
 87a66e6:	33 9c bd 00 05 00 00 	xor    0x500(%ebp,%edi,4),%ebx
 87a66ed:	0f b6 f1             	movzbl %cl,%esi
 87a66f0:	0f b6 fd             	movzbl %ch,%edi
 87a66f3:	33 9c b5 00 03 00 00 	xor    0x300(%ebp,%esi,4),%ebx
 87a66fa:	83 c2 10             	add    $0x10,%edx
 87a66fd:	33 9c bd 00 01 00 00 	xor    0x100(%ebp,%edi,4),%ebx
 87a6704:	89 d9                	mov    %ebx,%ecx
 87a6706:	8b 32                	mov    (%edx),%esi
 87a6708:	c1 c9 04             	ror    $0x4,%ecx
 87a670b:	31 f1                	xor    %esi,%ecx
 87a670d:	81 e1 3f 3f 3f 3f    	and    $0x3f3f3f3f,%ecx
 87a6713:	0f b6 f1             	movzbl %cl,%esi
 87a6716:	0f b6 fd             	movzbl %ch,%edi
 87a6719:	33 84 b5 00 06 00 00 	xor    0x600(%ebp,%esi,4),%eax
 87a6720:	c1 e9 10             	shr    $0x10,%ecx
 87a6723:	33 84 bd 00 04 00 00 	xor    0x400(%ebp,%edi,4),%eax
 87a672a:	0f b6 f1             	movzbl %cl,%esi
 87a672d:	0f b6 fd             	movzbl %ch,%edi
 87a6730:	33 84 b5 00 02 00 00 	xor    0x200(%ebp,%esi,4),%eax
 87a6737:	8b 72 04             	mov    0x4(%edx),%esi
 87a673a:	33 44 bd 00          	xor    0x0(%ebp,%edi,4),%eax
 87a673e:	89 d9                	mov    %ebx,%ecx
 87a6740:	31 f1                	xor    %esi,%ecx
 87a6742:	81 e1 3f 3f 3f 3f    	and    $0x3f3f3f3f,%ecx
 87a6748:	0f b6 f1             	movzbl %cl,%esi
 87a674b:	0f b6 fd             	movzbl %ch,%edi
 87a674e:	33 84 b5 00 07 00 00 	xor    0x700(%ebp,%esi,4),%eax
 87a6755:	c1 e9 10             	shr    $0x10,%ecx
 87a6758:	33 84 bd 00 05 00 00 	xor    0x500(%ebp,%edi,4),%eax
 87a675f:	0f b6 f1             	movzbl %cl,%esi
 87a6762:	0f b6 fd             	movzbl %ch,%edi
 87a6765:	33 84 b5 00 03 00 00 	xor    0x300(%ebp,%esi,4),%eax
 87a676c:	8b 72 08             	mov    0x8(%edx),%esi
 87a676f:	33 84 bd 00 01 00 00 	xor    0x100(%ebp,%edi,4),%eax
 87a6776:	89 c1                	mov    %eax,%ecx
 87a6778:	c1 c9 04             	ror    $0x4,%ecx
 87a677b:	31 f1                	xor    %esi,%ecx
 87a677d:	81 e1 3f 3f 3f 3f    	and    $0x3f3f3f3f,%ecx
 87a6783:	0f b6 f1             	movzbl %cl,%esi
 87a6786:	0f b6 fd             	movzbl %ch,%edi
 87a6789:	33 9c b5 00 06 00 00 	xor    0x600(%ebp,%esi,4),%ebx
 87a6790:	c1 e9 10             	shr    $0x10,%ecx
 87a6793:	33 9c bd 00 04 00 00 	xor    0x400(%ebp,%edi,4),%ebx
 87a679a:	0f b6 f1             	movzbl %cl,%esi
 87a679d:	0f b6 fd             	movzbl %ch,%edi
 87a67a0:	33 9c b5 00 02 00 00 	xor    0x200(%ebp,%esi,4),%ebx
 87a67a7:	8b 72 0c             	mov    0xc(%edx),%esi
 87a67aa:	33 5c bd 00          	xor    0x0(%ebp,%edi,4),%ebx
 87a67ae:	89 c1                	mov    %eax,%ecx
 87a67b0:	31 f1                	xor    %esi,%ecx
 87a67b2:	81 e1 3f 3f 3f 3f    	and    $0x3f3f3f3f,%ecx
 87a67b8:	0f b6 f1             	movzbl %cl,%esi
 87a67bb:	0f b6 fd             	movzbl %ch,%edi
 87a67be:	33 9c b5 00 07 00 00 	xor    0x700(%ebp,%esi,4),%ebx
 87a67c5:	c1 e9 10             	shr    $0x10,%ecx
 87a67c8:	33 9c bd 00 05 00 00 	xor    0x500(%ebp,%edi,4),%ebx
 87a67cf:	0f b6 f1             	movzbl %cl,%esi
 87a67d2:	0f b6 fd             	movzbl %ch,%edi
 87a67d5:	33 9c b5 00 03 00 00 	xor    0x300(%ebp,%esi,4),%ebx
 87a67dc:	83 c2 10             	add    $0x10,%edx
 87a67df:	33 9c bd 00 01 00 00 	xor    0x100(%ebp,%edi,4),%ebx
 87a67e6:	89 d9                	mov    %ebx,%ecx
 87a67e8:	8b 32                	mov    (%edx),%esi
 87a67ea:	c1 c9 04             	ror    $0x4,%ecx
 87a67ed:	31 f1                	xor    %esi,%ecx
 87a67ef:	81 e1 3f 3f 3f 3f    	and    $0x3f3f3f3f,%ecx
 87a67f5:	0f b6 f1             	movzbl %cl,%esi
 87a67f8:	0f b6 fd             	movzbl %ch,%edi
 87a67fb:	33 84 b5 00 06 00 00 	xor    0x600(%ebp,%esi,4),%eax
 87a6802:	c1 e9 10             	shr    $0x10,%ecx
 87a6805:	33 84 bd 00 04 00 00 	xor    0x400(%ebp,%edi,4),%eax
 87a680c:	0f b6 f1             	movzbl %cl,%esi
 87a680f:	0f b6 fd             	movzbl %ch,%edi
 87a6812:	33 84 b5 00 02 00 00 	xor    0x200(%ebp,%esi,4),%eax
 87a6819:	8b 72 04             	mov    0x4(%edx),%esi
 87a681c:	33 44 bd 00          	xor    0x0(%ebp,%edi,4),%eax
 87a6820:	89 d9                	mov    %ebx,%ecx
 87a6822:	31 f1                	xor    %esi,%ecx
 87a6824:	81 e1 3f 3f 3f 3f    	and    $0x3f3f3f3f,%ecx
 87a682a:	0f b6 f1             	movzbl %cl,%esi
 87a682d:	0f b6 fd             	movzbl %ch,%edi
 87a6830:	33 84 b5 00 07 00 00 	xor    0x700(%ebp,%esi,4),%eax
 87a6837:	c1 e9 10             	shr    $0x10,%ecx
 87a683a:	33 84 bd 00 05 00 00 	xor    0x500(%ebp,%edi,4),%eax
 87a6841:	0f b6 f1             	movzbl %cl,%esi
 87a6844:	0f b6 fd             	movzbl %ch,%edi
 87a6847:	33 84 b5 00 03 00 00 	xor    0x300(%ebp,%esi,4),%eax
 87a684e:	8b 72 08             	mov    0x8(%edx),%esi
 87a6851:	33 84 bd 00 01 00 00 	xor    0x100(%ebp,%edi,4),%eax
 87a6858:	89 c1                	mov    %eax,%ecx
 87a685a:	c1 c9 04             	ror    $0x4,%ecx
 87a685d:	31 f1                	xor    %esi,%ecx
 87a685f:	81 e1 3f 3f 3f 3f    	and    $0x3f3f3f3f,%ecx
 87a6865:	0f b6 f1             	movzbl %cl,%esi
 87a6868:	0f b6 fd             	movzbl %ch,%edi
 87a686b:	33 9c b5 00 06 00 00 	xor    0x600(%ebp,%esi,4),%ebx
 87a6872:	c1 e9 10             	shr    $0x10,%ecx
 87a6875:	33 9c bd 00 04 00 00 	xor    0x400(%ebp,%edi,4),%ebx
 87a687c:	0f b6 f1             	movzbl %cl,%esi
 87a687f:	0f b6 fd             	movzbl %ch,%edi
 87a6882:	33 9c b5 00 02 00 00 	xor    0x200(%ebp,%esi,4),%ebx
 87a6889:	8b 72 0c             	mov    0xc(%edx),%esi
 87a688c:	33 5c bd 00          	xor    0x0(%ebp,%edi,4),%ebx
 87a6890:	89 c1                	mov    %eax,%ecx
 87a6892:	31 f1                	xor    %esi,%ecx
 87a6894:	81 e1 3f 3f 3f 3f    	and    $0x3f3f3f3f,%ecx
 87a689a:	0f b6 f1             	movzbl %cl,%esi
 87a689d:	0f b6 fd             	movzbl %ch,%edi
 87a68a0:	33 9c b5 00 07 00 00 	xor    0x700(%ebp,%esi,4),%ebx
 87a68a7:	c1 e9 10             	shr    $0x10,%ecx
 87a68aa:	33 9c bd 00 05 00 00 	xor    0x500(%ebp,%edi,4),%ebx
 87a68b1:	0f b6 f1             	movzbl %cl,%esi
 87a68b4:	0f b6 fd             	movzbl %ch,%edi
 87a68b7:	33 9c b5 00 03 00 00 	xor    0x300(%ebp,%esi,4),%ebx
 87a68be:	83 c2 10             	add    $0x10,%edx
 87a68c1:	33 9c bd 00 01 00 00 	xor    0x100(%ebp,%edi,4),%ebx
 87a68c8:	89 d9                	mov    %ebx,%ecx
 87a68ca:	8b 32                	mov    (%edx),%esi
 87a68cc:	c1 c9 04             	ror    $0x4,%ecx
 87a68cf:	31 f1                	xor    %esi,%ecx
 87a68d1:	81 e1 3f 3f 3f 3f    	and    $0x3f3f3f3f,%ecx
 87a68d7:	0f b6 f1             	movzbl %cl,%esi
 87a68da:	0f b6 fd             	movzbl %ch,%edi
 87a68dd:	33 84 b5 00 06 00 00 	xor    0x600(%ebp,%esi,4),%eax
 87a68e4:	c1 e9 10             	shr    $0x10,%ecx
 87a68e7:	33 84 bd 00 04 00 00 	xor    0x400(%ebp,%edi,4),%eax
 87a68ee:	0f b6 f1             	movzbl %cl,%esi
 87a68f1:	0f b6 fd             	movzbl %ch,%edi
 87a68f4:	33 84 b5 00 02 00 00 	xor    0x200(%ebp,%esi,4),%eax
 87a68fb:	8b 72 04             	mov    0x4(%edx),%esi
 87a68fe:	33 44 bd 00          	xor    0x0(%ebp,%edi,4),%eax
 87a6902:	89 d9                	mov    %ebx,%ecx
 87a6904:	31 f1                	xor    %esi,%ecx
 87a6906:	81 e1 3f 3f 3f 3f    	and    $0x3f3f3f3f,%ecx
 87a690c:	0f b6 f1             	movzbl %cl,%esi
 87a690f:	0f b6 fd             	movzbl %ch,%edi
 87a6912:	33 84 b5 00 07 00 00 	xor    0x700(%ebp,%esi,4),%eax
 87a6919:	c1 e9 10             	shr    $0x10,%ecx
 87a691c:	33 84 bd 00 05 00 00 	xor    0x500(%ebp,%edi,4),%eax
 87a6923:	0f b6 f1             	movzbl %cl,%esi
 87a6926:	0f b6 fd             	movzbl %ch,%edi
 87a6929:	33 84 b5 00 03 00 00 	xor    0x300(%ebp,%esi,4),%eax
 87a6930:	8b 72 08             	mov    0x8(%edx),%esi
 87a6933:	33 84 bd 00 01 00 00 	xor    0x100(%ebp,%edi,4),%eax
 87a693a:	89 c1                	mov    %eax,%ecx
 87a693c:	c1 c9 04             	ror    $0x4,%ecx
 87a693f:	31 f1                	xor    %esi,%ecx
 87a6941:	81 e1 3f 3f 3f 3f    	and    $0x3f3f3f3f,%ecx
 87a6947:	0f b6 f1             	movzbl %cl,%esi
 87a694a:	0f b6 fd             	movzbl %ch,%edi
 87a694d:	33 9c b5 00 06 00 00 	xor    0x600(%ebp,%esi,4),%ebx
 87a6954:	c1 e9 10             	shr    $0x10,%ecx
 87a6957:	33 9c bd 00 04 00 00 	xor    0x400(%ebp,%edi,4),%ebx
 87a695e:	0f b6 f1             	movzbl %cl,%esi
 87a6961:	0f b6 fd             	movzbl %ch,%edi
 87a6964:	33 9c b5 00 02 00 00 	xor    0x200(%ebp,%esi,4),%ebx
 87a696b:	8b 72 0c             	mov    0xc(%edx),%esi
 87a696e:	33 5c bd 00          	xor    0x0(%ebp,%edi,4),%ebx
 87a6972:	89 c1                	mov    %eax,%ecx
 87a6974:	31 f1                	xor    %esi,%ecx
 87a6976:	81 e1 3f 3f 3f 3f    	and    $0x3f3f3f3f,%ecx
 87a697c:	0f b6 f1             	movzbl %cl,%esi
 87a697f:	0f b6 fd             	movzbl %ch,%edi
 87a6982:	33 9c b5 00 07 00 00 	xor    0x700(%ebp,%esi,4),%ebx
 87a6989:	c1 e9 10             	shr    $0x10,%ecx
 87a698c:	33 9c bd 00 05 00 00 	xor    0x500(%ebp,%edi,4),%ebx
 87a6993:	0f b6 f1             	movzbl %cl,%esi
 87a6996:	0f b6 fd             	movzbl %ch,%edi
 87a6999:	33 9c b5 00 03 00 00 	xor    0x300(%ebp,%esi,4),%ebx
 87a69a0:	83 c2 10             	add    $0x10,%edx
 87a69a3:	33 9c bd 00 01 00 00 	xor    0x100(%ebp,%edi,4),%ebx
 87a69aa:	89 d9                	mov    %ebx,%ecx
 87a69ac:	8b 32                	mov    (%edx),%esi
 87a69ae:	c1 c9 04             	ror    $0x4,%ecx
 87a69b1:	31 f1                	xor    %esi,%ecx
 87a69b3:	81 e1 3f 3f 3f 3f    	and    $0x3f3f3f3f,%ecx
 87a69b9:	0f b6 f1             	movzbl %cl,%esi
 87a69bc:	0f b6 fd             	movzbl %ch,%edi
 87a69bf:	33 84 b5 00 06 00 00 	xor    0x600(%ebp,%esi,4),%eax
 87a69c6:	c1 e9 10             	shr    $0x10,%ecx
 87a69c9:	33 84 bd 00 04 00 00 	xor    0x400(%ebp,%edi,4),%eax
 87a69d0:	0f b6 f1             	movzbl %cl,%esi
 87a69d3:	0f b6 fd             	movzbl %ch,%edi
 87a69d6:	33 84 b5 00 02 00 00 	xor    0x200(%ebp,%esi,4),%eax
 87a69dd:	8b 72 04             	mov    0x4(%edx),%esi
 87a69e0:	33 44 bd 00          	xor    0x0(%ebp,%edi,4),%eax
 87a69e4:	89 d9                	mov    %ebx,%ecx
 87a69e6:	31 f1                	xor    %esi,%ecx
 87a69e8:	81 e1 3f 3f 3f 3f    	and    $0x3f3f3f3f,%ecx
 87a69ee:	0f b6 f1             	movzbl %cl,%esi
 87a69f1:	0f b6 fd             	movzbl %ch,%edi
 87a69f4:	33 84 b5 00 07 00 00 	xor    0x700(%ebp,%esi,4),%eax
 87a69fb:	c1 e9 10             	shr    $0x10,%ecx
 87a69fe:	33 84 bd 00 05 00 00 	xor    0x500(%ebp,%edi,4),%eax
 87a6a05:	0f b6 f1             	movzbl %cl,%esi
 87a6a08:	0f b6 fd             	movzbl %ch,%edi
 87a6a0b:	33 84 b5 00 03 00 00 	xor    0x300(%ebp,%esi,4),%eax
 87a6a12:	8b 72 08             	mov    0x8(%edx),%esi
 87a6a15:	33 84 bd 00 01 00 00 	xor    0x100(%ebp,%edi,4),%eax
 87a6a1c:	89 c1                	mov    %eax,%ecx
 87a6a1e:	c1 c9 04             	ror    $0x4,%ecx
 87a6a21:	31 f1                	xor    %esi,%ecx
 87a6a23:	81 e1 3f 3f 3f 3f    	and    $0x3f3f3f3f,%ecx
 87a6a29:	0f b6 f1             	movzbl %cl,%esi
 87a6a2c:	0f b6 fd             	movzbl %ch,%edi
 87a6a2f:	33 9c b5 00 06 00 00 	xor    0x600(%ebp,%esi,4),%ebx
 87a6a36:	c1 e9 10             	shr    $0x10,%ecx
 87a6a39:	33 9c bd 00 04 00 00 	xor    0x400(%ebp,%edi,4),%ebx
 87a6a40:	0f b6 f1             	movzbl %cl,%esi
 87a6a43:	0f b6 fd             	movzbl %ch,%edi
 87a6a46:	33 9c b5 00 02 00 00 	xor    0x200(%ebp,%esi,4),%ebx
 87a6a4d:	8b 72 0c             	mov    0xc(%edx),%esi
 87a6a50:	33 5c bd 00          	xor    0x0(%ebp,%edi,4),%ebx
 87a6a54:	89 c1                	mov    %eax,%ecx
 87a6a56:	31 f1                	xor    %esi,%ecx
 87a6a58:	81 e1 3f 3f 3f 3f    	and    $0x3f3f3f3f,%ecx
 87a6a5e:	0f b6 f1             	movzbl %cl,%esi
 87a6a61:	0f b6 fd             	movzbl %ch,%edi
 87a6a64:	33 9c b5 00 07 00 00 	xor    0x700(%ebp,%esi,4),%ebx
 87a6a6b:	c1 e9 10             	shr    $0x10,%ecx
 87a6a6e:	33 9c bd 00 05 00 00 	xor    0x500(%ebp,%edi,4),%ebx
 87a6a75:	0f b6 f1             	movzbl %cl,%esi
 87a6a78:	0f b6 fd             	movzbl %ch,%edi
 87a6a7b:	33 9c b5 00 03 00 00 	xor    0x300(%ebp,%esi,4),%ebx
 87a6a82:	83 c2 10             	add    $0x10,%edx
 87a6a85:	33 9c bd 00 01 00 00 	xor    0x100(%ebp,%edi,4),%ebx
 87a6a8c:	89 d9                	mov    %ebx,%ecx
 87a6a8e:	8b 32                	mov    (%edx),%esi
 87a6a90:	c1 c9 04             	ror    $0x4,%ecx
 87a6a93:	31 f1                	xor    %esi,%ecx
 87a6a95:	81 e1 3f 3f 3f 3f    	and    $0x3f3f3f3f,%ecx
 87a6a9b:	0f b6 f1             	movzbl %cl,%esi
 87a6a9e:	0f b6 fd             	movzbl %ch,%edi
 87a6aa1:	33 84 b5 00 06 00 00 	xor    0x600(%ebp,%esi,4),%eax
 87a6aa8:	c1 e9 10             	shr    $0x10,%ecx
 87a6aab:	33 84 bd 00 04 00 00 	xor    0x400(%ebp,%edi,4),%eax
 87a6ab2:	0f b6 f1             	movzbl %cl,%esi
 87a6ab5:	0f b6 fd             	movzbl %ch,%edi
 87a6ab8:	33 84 b5 00 02 00 00 	xor    0x200(%ebp,%esi,4),%eax
 87a6abf:	8b 72 04             	mov    0x4(%edx),%esi
 87a6ac2:	33 44 bd 00          	xor    0x0(%ebp,%edi,4),%eax
 87a6ac6:	89 d9                	mov    %ebx,%ecx
 87a6ac8:	31 f1                	xor    %esi,%ecx
 87a6aca:	81 e1 3f 3f 3f 3f    	and    $0x3f3f3f3f,%ecx
 87a6ad0:	0f b6 f1             	movzbl %cl,%esi
 87a6ad3:	0f b6 fd             	movzbl %ch,%edi
 87a6ad6:	33 84 b5 00 07 00 00 	xor    0x700(%ebp,%esi,4),%eax
 87a6add:	c1 e9 10             	shr    $0x10,%ecx
 87a6ae0:	33 84 bd 00 05 00 00 	xor    0x500(%ebp,%edi,4),%eax
 87a6ae7:	0f b6 f1             	movzbl %cl,%esi
 87a6aea:	0f b6 fd             	movzbl %ch,%edi
 87a6aed:	33 84 b5 00 03 00 00 	xor    0x300(%ebp,%esi,4),%eax
 87a6af4:	8b 72 08             	mov    0x8(%edx),%esi
 87a6af7:	33 84 bd 00 01 00 00 	xor    0x100(%ebp,%edi,4),%eax
 87a6afe:	89 c1                	mov    %eax,%ecx
 87a6b00:	c1 c9 04             	ror    $0x4,%ecx
 87a6b03:	31 f1                	xor    %esi,%ecx
 87a6b05:	81 e1 3f 3f 3f 3f    	and    $0x3f3f3f3f,%ecx
 87a6b0b:	0f b6 f1             	movzbl %cl,%esi
 87a6b0e:	0f b6 fd             	movzbl %ch,%edi
 87a6b11:	33 9c b5 00 06 00 00 	xor    0x600(%ebp,%esi,4),%ebx
 87a6b18:	c1 e9 10             	shr    $0x10,%ecx
 87a6b1b:	33 9c bd 00 04 00 00 	xor    0x400(%ebp,%edi,4),%ebx
 87a6b22:	0f b6 f1             	movzbl %cl,%esi
 87a6b25:	0f b6 fd             	movzbl %ch,%edi
 87a6b28:	33 9c b5 00 02 00 00 	xor    0x200(%ebp,%esi,4),%ebx
 87a6b2f:	8b 72 0c             	mov    0xc(%edx),%esi
 87a6b32:	33 5c bd 00          	xor    0x0(%ebp,%edi,4),%ebx
 87a6b36:	89 c1                	mov    %eax,%ecx
 87a6b38:	31 f1                	xor    %esi,%ecx
 87a6b3a:	81 e1 3f 3f 3f 3f    	and    $0x3f3f3f3f,%ecx
 87a6b40:	0f b6 f1             	movzbl %cl,%esi
 87a6b43:	0f b6 fd             	movzbl %ch,%edi
 87a6b46:	33 9c b5 00 07 00 00 	xor    0x700(%ebp,%esi,4),%ebx
 87a6b4d:	c1 e9 10             	shr    $0x10,%ecx
 87a6b50:	33 9c bd 00 05 00 00 	xor    0x500(%ebp,%edi,4),%ebx
 87a6b57:	0f b6 f1             	movzbl %cl,%esi
 87a6b5a:	0f b6 fd             	movzbl %ch,%edi
 87a6b5d:	33 9c b5 00 03 00 00 	xor    0x300(%ebp,%esi,4),%ebx
 87a6b64:	83 c2 10             	add    $0x10,%edx
 87a6b67:	33 9c bd 00 01 00 00 	xor    0x100(%ebp,%edi,4),%ebx
 87a6b6e:	93                   	xchg   %eax,%ebx
 87a6b6f:	89 d9                	mov    %ebx,%ecx
 87a6b71:	8b 32                	mov    (%edx),%esi
 87a6b73:	c1 c9 04             	ror    $0x4,%ecx
 87a6b76:	31 f1                	xor    %esi,%ecx
 87a6b78:	81 e1 3f 3f 3f 3f    	and    $0x3f3f3f3f,%ecx
 87a6b7e:	0f b6 f1             	movzbl %cl,%esi
 87a6b81:	0f b6 fd             	movzbl %ch,%edi
 87a6b84:	33 84 b5 00 06 00 00 	xor    0x600(%ebp,%esi,4),%eax
 87a6b8b:	c1 e9 10             	shr    $0x10,%ecx
 87a6b8e:	33 84 bd 00 04 00 00 	xor    0x400(%ebp,%edi,4),%eax
 87a6b95:	0f b6 f1             	movzbl %cl,%esi
 87a6b98:	0f b6 fd             	movzbl %ch,%edi
 87a6b9b:	33 84 b5 00 02 00 00 	xor    0x200(%ebp,%esi,4),%eax
 87a6ba2:	8b 72 04             	mov    0x4(%edx),%esi
 87a6ba5:	33 44 bd 00          	xor    0x0(%ebp,%edi,4),%eax
 87a6ba9:	89 d9                	mov    %ebx,%ecx
 87a6bab:	31 f1                	xor    %esi,%ecx
 87a6bad:	81 e1 3f 3f 3f 3f    	and    $0x3f3f3f3f,%ecx
 87a6bb3:	0f b6 f1             	movzbl %cl,%esi
 87a6bb6:	0f b6 fd             	movzbl %ch,%edi
 87a6bb9:	33 84 b5 00 07 00 00 	xor    0x700(%ebp,%esi,4),%eax
 87a6bc0:	c1 e9 10             	shr    $0x10,%ecx
 87a6bc3:	33 84 bd 00 05 00 00 	xor    0x500(%ebp,%edi,4),%eax
 87a6bca:	0f b6 f1             	movzbl %cl,%esi
 87a6bcd:	0f b6 fd             	movzbl %ch,%edi
 87a6bd0:	33 84 b5 00 03 00 00 	xor    0x300(%ebp,%esi,4),%eax
 87a6bd7:	8b 72 08             	mov    0x8(%edx),%esi
 87a6bda:	33 84 bd 00 01 00 00 	xor    0x100(%ebp,%edi,4),%eax
 87a6be1:	89 c1                	mov    %eax,%ecx
 87a6be3:	c1 c9 04             	ror    $0x4,%ecx
 87a6be6:	31 f1                	xor    %esi,%ecx
 87a6be8:	81 e1 3f 3f 3f 3f    	and    $0x3f3f3f3f,%ecx
 87a6bee:	0f b6 f1             	movzbl %cl,%esi
 87a6bf1:	0f b6 fd             	movzbl %ch,%edi
 87a6bf4:	33 9c b5 00 06 00 00 	xor    0x600(%ebp,%esi,4),%ebx
 87a6bfb:	c1 e9 10             	shr    $0x10,%ecx
 87a6bfe:	33 9c bd 00 04 00 00 	xor    0x400(%ebp,%edi,4),%ebx
 87a6c05:	0f b6 f1             	movzbl %cl,%esi
 87a6c08:	0f b6 fd             	movzbl %ch,%edi
 87a6c0b:	33 9c b5 00 02 00 00 	xor    0x200(%ebp,%esi,4),%ebx
 87a6c12:	8b 72 0c             	mov    0xc(%edx),%esi
 87a6c15:	33 5c bd 00          	xor    0x0(%ebp,%edi,4),%ebx
 87a6c19:	89 c1                	mov    %eax,%ecx
 87a6c1b:	31 f1                	xor    %esi,%ecx
 87a6c1d:	81 e1 3f 3f 3f 3f    	and    $0x3f3f3f3f,%ecx
 87a6c23:	0f b6 f1             	movzbl %cl,%esi
 87a6c26:	0f b6 fd             	movzbl %ch,%edi
 87a6c29:	33 9c b5 00 07 00 00 	xor    0x700(%ebp,%esi,4),%ebx
 87a6c30:	c1 e9 10             	shr    $0x10,%ecx
 87a6c33:	33 9c bd 00 05 00 00 	xor    0x500(%ebp,%edi,4),%ebx
 87a6c3a:	0f b6 f1             	movzbl %cl,%esi
 87a6c3d:	0f b6 fd             	movzbl %ch,%edi
 87a6c40:	33 9c b5 00 03 00 00 	xor    0x300(%ebp,%esi,4),%ebx
 87a6c47:	83 c2 10             	add    $0x10,%edx
 87a6c4a:	33 9c bd 00 01 00 00 	xor    0x100(%ebp,%edi,4),%ebx
 87a6c51:	89 d9                	mov    %ebx,%ecx
 87a6c53:	8b 32                	mov    (%edx),%esi
 87a6c55:	c1 c9 04             	ror    $0x4,%ecx
 87a6c58:	31 f1                	xor    %esi,%ecx
 87a6c5a:	81 e1 3f 3f 3f 3f    	and    $0x3f3f3f3f,%ecx
 87a6c60:	0f b6 f1             	movzbl %cl,%esi
 87a6c63:	0f b6 fd             	movzbl %ch,%edi
 87a6c66:	33 84 b5 00 06 00 00 	xor    0x600(%ebp,%esi,4),%eax
 87a6c6d:	c1 e9 10             	shr    $0x10,%ecx
 87a6c70:	33 84 bd 00 04 00 00 	xor    0x400(%ebp,%edi,4),%eax
 87a6c77:	0f b6 f1             	movzbl %cl,%esi
 87a6c7a:	0f b6 fd             	movzbl %ch,%edi
 87a6c7d:	33 84 b5 00 02 00 00 	xor    0x200(%ebp,%esi,4),%eax
 87a6c84:	8b 72 04             	mov    0x4(%edx),%esi
 87a6c87:	33 44 bd 00          	xor    0x0(%ebp,%edi,4),%eax
 87a6c8b:	89 d9                	mov    %ebx,%ecx
 87a6c8d:	31 f1                	xor    %esi,%ecx
 87a6c8f:	81 e1 3f 3f 3f 3f    	and    $0x3f3f3f3f,%ecx
 87a6c95:	0f b6 f1             	movzbl %cl,%esi
 87a6c98:	0f b6 fd             	movzbl %ch,%edi
 87a6c9b:	33 84 b5 00 07 00 00 	xor    0x700(%ebp,%esi,4),%eax
 87a6ca2:	c1 e9 10             	shr    $0x10,%ecx
 87a6ca5:	33 84 bd 00 05 00 00 	xor    0x500(%ebp,%edi,4),%eax
 87a6cac:	0f b6 f1             	movzbl %cl,%esi
 87a6caf:	0f b6 fd             	movzbl %ch,%edi
 87a6cb2:	33 84 b5 00 03 00 00 	xor    0x300(%ebp,%esi,4),%eax
 87a6cb9:	8b 72 08             	mov    0x8(%edx),%esi
 87a6cbc:	33 84 bd 00 01 00 00 	xor    0x100(%ebp,%edi,4),%eax
 87a6cc3:	89 c1                	mov    %eax,%ecx
 87a6cc5:	c1 c9 04             	ror    $0x4,%ecx
 87a6cc8:	31 f1                	xor    %esi,%ecx
 87a6cca:	81 e1 3f 3f 3f 3f    	and    $0x3f3f3f3f,%ecx
 87a6cd0:	0f b6 f1             	movzbl %cl,%esi
 87a6cd3:	0f b6 fd             	movzbl %ch,%edi
 87a6cd6:	33 9c b5 00 06 00 00 	xor    0x600(%ebp,%esi,4),%ebx
 87a6cdd:	c1 e9 10             	shr    $0x10,%ecx
 87a6ce0:	33 9c bd 00 04 00 00 	xor    0x400(%ebp,%edi,4),%ebx
 87a6ce7:	0f b6 f1             	movzbl %cl,%esi
 87a6cea:	0f b6 fd             	movzbl %ch,%edi
 87a6ced:	33 9c b5 00 02 00 00 	xor    0x200(%ebp,%esi,4),%ebx
 87a6cf4:	8b 72 0c             	mov    0xc(%edx),%esi
 87a6cf7:	33 5c bd 00          	xor    0x0(%ebp,%edi,4),%ebx
 87a6cfb:	89 c1                	mov    %eax,%ecx
 87a6cfd:	31 f1                	xor    %esi,%ecx
 87a6cff:	81 e1 3f 3f 3f 3f    	and    $0x3f3f3f3f,%ecx
 87a6d05:	0f b6 f1             	movzbl %cl,%esi
 87a6d08:	0f b6 fd             	movzbl %ch,%edi
 87a6d0b:	33 9c b5 00 07 00 00 	xor    0x700(%ebp,%esi,4),%ebx
 87a6d12:	c1 e9 10             	shr    $0x10,%ecx
 87a6d15:	33 9c bd 00 05 00 00 	xor    0x500(%ebp,%edi,4),%ebx
 87a6d1c:	0f b6 f1             	movzbl %cl,%esi
 87a6d1f:	0f b6 fd             	movzbl %ch,%edi
 87a6d22:	33 9c b5 00 03 00 00 	xor    0x300(%ebp,%esi,4),%ebx
 87a6d29:	83 c2 10             	add    $0x10,%edx
 87a6d2c:	33 9c bd 00 01 00 00 	xor    0x100(%ebp,%edi,4),%ebx
 87a6d33:	89 d9                	mov    %ebx,%ecx
 87a6d35:	8b 32                	mov    (%edx),%esi
 87a6d37:	c1 c9 04             	ror    $0x4,%ecx
 87a6d3a:	31 f1                	xor    %esi,%ecx
 87a6d3c:	81 e1 3f 3f 3f 3f    	and    $0x3f3f3f3f,%ecx
 87a6d42:	0f b6 f1             	movzbl %cl,%esi
 87a6d45:	0f b6 fd             	movzbl %ch,%edi
 87a6d48:	33 84 b5 00 06 00 00 	xor    0x600(%ebp,%esi,4),%eax
 87a6d4f:	c1 e9 10             	shr    $0x10,%ecx
 87a6d52:	33 84 bd 00 04 00 00 	xor    0x400(%ebp,%edi,4),%eax
 87a6d59:	0f b6 f1             	movzbl %cl,%esi
 87a6d5c:	0f b6 fd             	movzbl %ch,%edi
 87a6d5f:	33 84 b5 00 02 00 00 	xor    0x200(%ebp,%esi,4),%eax
 87a6d66:	8b 72 04             	mov    0x4(%edx),%esi
 87a6d69:	33 44 bd 00          	xor    0x0(%ebp,%edi,4),%eax
 87a6d6d:	89 d9                	mov    %ebx,%ecx
 87a6d6f:	31 f1                	xor    %esi,%ecx
 87a6d71:	81 e1 3f 3f 3f 3f    	and    $0x3f3f3f3f,%ecx
 87a6d77:	0f b6 f1             	movzbl %cl,%esi
 87a6d7a:	0f b6 fd             	movzbl %ch,%edi
 87a6d7d:	33 84 b5 00 07 00 00 	xor    0x700(%ebp,%esi,4),%eax
 87a6d84:	c1 e9 10             	shr    $0x10,%ecx
 87a6d87:	33 84 bd 00 05 00 00 	xor    0x500(%ebp,%edi,4),%eax
 87a6d8e:	0f b6 f1             	movzbl %cl,%esi
 87a6d91:	0f b6 fd             	movzbl %ch,%edi
 87a6d94:	33 84 b5 00 03 00 00 	xor    0x300(%ebp,%esi,4),%eax
 87a6d9b:	8b 72 08             	mov    0x8(%edx),%esi
 87a6d9e:	33 84 bd 00 01 00 00 	xor    0x100(%ebp,%edi,4),%eax
 87a6da5:	89 c1                	mov    %eax,%ecx
 87a6da7:	c1 c9 04             	ror    $0x4,%ecx
 87a6daa:	31 f1                	xor    %esi,%ecx
 87a6dac:	81 e1 3f 3f 3f 3f    	and    $0x3f3f3f3f,%ecx
 87a6db2:	0f b6 f1             	movzbl %cl,%esi
 87a6db5:	0f b6 fd             	movzbl %ch,%edi
 87a6db8:	33 9c b5 00 06 00 00 	xor    0x600(%ebp,%esi,4),%ebx
 87a6dbf:	c1 e9 10             	shr    $0x10,%ecx
 87a6dc2:	33 9c bd 00 04 00 00 	xor    0x400(%ebp,%edi,4),%ebx
 87a6dc9:	0f b6 f1             	movzbl %cl,%esi
 87a6dcc:	0f b6 fd             	movzbl %ch,%edi
 87a6dcf:	33 9c b5 00 02 00 00 	xor    0x200(%ebp,%esi,4),%ebx
 87a6dd6:	8b 72 0c             	mov    0xc(%edx),%esi
 87a6dd9:	33 5c bd 00          	xor    0x0(%ebp,%edi,4),%ebx
 87a6ddd:	89 c1                	mov    %eax,%ecx
 87a6ddf:	31 f1                	xor    %esi,%ecx
 87a6de1:	81 e1 3f 3f 3f 3f    	and    $0x3f3f3f3f,%ecx
 87a6de7:	0f b6 f1             	movzbl %cl,%esi
 87a6dea:	0f b6 fd             	movzbl %ch,%edi
 87a6ded:	33 9c b5 00 07 00 00 	xor    0x700(%ebp,%esi,4),%ebx
 87a6df4:	c1 e9 10             	shr    $0x10,%ecx
 87a6df7:	33 9c bd 00 05 00 00 	xor    0x500(%ebp,%edi,4),%ebx
 87a6dfe:	0f b6 f1             	movzbl %cl,%esi
 87a6e01:	0f b6 fd             	movzbl %ch,%edi
 87a6e04:	33 9c b5 00 03 00 00 	xor    0x300(%ebp,%esi,4),%ebx
 87a6e0b:	83 c2 10             	add    $0x10,%edx
 87a6e0e:	33 9c bd 00 01 00 00 	xor    0x100(%ebp,%edi,4),%ebx
 87a6e15:	89 d9                	mov    %ebx,%ecx
 87a6e17:	8b 32                	mov    (%edx),%esi
 87a6e19:	c1 c9 04             	ror    $0x4,%ecx
 87a6e1c:	31 f1                	xor    %esi,%ecx
 87a6e1e:	81 e1 3f 3f 3f 3f    	and    $0x3f3f3f3f,%ecx
 87a6e24:	0f b6 f1             	movzbl %cl,%esi
 87a6e27:	0f b6 fd             	movzbl %ch,%edi
 87a6e2a:	33 84 b5 00 06 00 00 	xor    0x600(%ebp,%esi,4),%eax
 87a6e31:	c1 e9 10             	shr    $0x10,%ecx
 87a6e34:	33 84 bd 00 04 00 00 	xor    0x400(%ebp,%edi,4),%eax
 87a6e3b:	0f b6 f1             	movzbl %cl,%esi
 87a6e3e:	0f b6 fd             	movzbl %ch,%edi
 87a6e41:	33 84 b5 00 02 00 00 	xor    0x200(%ebp,%esi,4),%eax
 87a6e48:	8b 72 04             	mov    0x4(%edx),%esi
 87a6e4b:	33 44 bd 00          	xor    0x0(%ebp,%edi,4),%eax
 87a6e4f:	89 d9                	mov    %ebx,%ecx
 87a6e51:	31 f1                	xor    %esi,%ecx
 87a6e53:	81 e1 3f 3f 3f 3f    	and    $0x3f3f3f3f,%ecx
 87a6e59:	0f b6 f1             	movzbl %cl,%esi
 87a6e5c:	0f b6 fd             	movzbl %ch,%edi
 87a6e5f:	33 84 b5 00 07 00 00 	xor    0x700(%ebp,%esi,4),%eax
 87a6e66:	c1 e9 10             	shr    $0x10,%ecx
 87a6e69:	33 84 bd 00 05 00 00 	xor    0x500(%ebp,%edi,4),%eax
 87a6e70:	0f b6 f1             	movzbl %cl,%esi
 87a6e73:	0f b6 fd             	movzbl %ch,%edi
 87a6e76:	33 84 b5 00 03 00 00 	xor    0x300(%ebp,%esi,4),%eax
 87a6e7d:	8b 72 08             	mov    0x8(%edx),%esi
 87a6e80:	33 84 bd 00 01 00 00 	xor    0x100(%ebp,%edi,4),%eax
 87a6e87:	89 c1                	mov    %eax,%ecx
 87a6e89:	c1 c9 04             	ror    $0x4,%ecx
 87a6e8c:	31 f1                	xor    %esi,%ecx
 87a6e8e:	81 e1 3f 3f 3f 3f    	and    $0x3f3f3f3f,%ecx
 87a6e94:	0f b6 f1             	movzbl %cl,%esi
 87a6e97:	0f b6 fd             	movzbl %ch,%edi
 87a6e9a:	33 9c b5 00 06 00 00 	xor    0x600(%ebp,%esi,4),%ebx
 87a6ea1:	c1 e9 10             	shr    $0x10,%ecx
 87a6ea4:	33 9c bd 00 04 00 00 	xor    0x400(%ebp,%edi,4),%ebx
 87a6eab:	0f b6 f1             	movzbl %cl,%esi
 87a6eae:	0f b6 fd             	movzbl %ch,%edi
 87a6eb1:	33 9c b5 00 02 00 00 	xor    0x200(%ebp,%esi,4),%ebx
 87a6eb8:	8b 72 0c             	mov    0xc(%edx),%esi
 87a6ebb:	33 5c bd 00          	xor    0x0(%ebp,%edi,4),%ebx
 87a6ebf:	89 c1                	mov    %eax,%ecx
 87a6ec1:	31 f1                	xor    %esi,%ecx
 87a6ec3:	81 e1 3f 3f 3f 3f    	and    $0x3f3f3f3f,%ecx
 87a6ec9:	0f b6 f1             	movzbl %cl,%esi
 87a6ecc:	0f b6 fd             	movzbl %ch,%edi
 87a6ecf:	33 9c b5 00 07 00 00 	xor    0x700(%ebp,%esi,4),%ebx
 87a6ed6:	c1 e9 10             	shr    $0x10,%ecx
 87a6ed9:	33 9c bd 00 05 00 00 	xor    0x500(%ebp,%edi,4),%ebx
 87a6ee0:	0f b6 f1             	movzbl %cl,%esi
 87a6ee3:	0f b6 fd             	movzbl %ch,%edi
 87a6ee6:	33 9c b5 00 03 00 00 	xor    0x300(%ebp,%esi,4),%ebx
 87a6eed:	83 c2 10             	add    $0x10,%edx
 87a6ef0:	33 9c bd 00 01 00 00 	xor    0x100(%ebp,%edi,4),%ebx
 87a6ef7:	89 d9                	mov    %ebx,%ecx
 87a6ef9:	8b 32                	mov    (%edx),%esi
 87a6efb:	c1 c9 04             	ror    $0x4,%ecx
 87a6efe:	31 f1                	xor    %esi,%ecx
 87a6f00:	81 e1 3f 3f 3f 3f    	and    $0x3f3f3f3f,%ecx
 87a6f06:	0f b6 f1             	movzbl %cl,%esi
 87a6f09:	0f b6 fd             	movzbl %ch,%edi
 87a6f0c:	33 84 b5 00 06 00 00 	xor    0x600(%ebp,%esi,4),%eax
 87a6f13:	c1 e9 10             	shr    $0x10,%ecx
 87a6f16:	33 84 bd 00 04 00 00 	xor    0x400(%ebp,%edi,4),%eax
 87a6f1d:	0f b6 f1             	movzbl %cl,%esi
 87a6f20:	0f b6 fd             	movzbl %ch,%edi
 87a6f23:	33 84 b5 00 02 00 00 	xor    0x200(%ebp,%esi,4),%eax
 87a6f2a:	8b 72 04             	mov    0x4(%edx),%esi
 87a6f2d:	33 44 bd 00          	xor    0x0(%ebp,%edi,4),%eax
 87a6f31:	89 d9                	mov    %ebx,%ecx
 87a6f33:	31 f1                	xor    %esi,%ecx
 87a6f35:	81 e1 3f 3f 3f 3f    	and    $0x3f3f3f3f,%ecx
 87a6f3b:	0f b6 f1             	movzbl %cl,%esi
 87a6f3e:	0f b6 fd             	movzbl %ch,%edi
 87a6f41:	33 84 b5 00 07 00 00 	xor    0x700(%ebp,%esi,4),%eax
 87a6f48:	c1 e9 10             	shr    $0x10,%ecx
 87a6f4b:	33 84 bd 00 05 00 00 	xor    0x500(%ebp,%edi,4),%eax
 87a6f52:	0f b6 f1             	movzbl %cl,%esi
 87a6f55:	0f b6 fd             	movzbl %ch,%edi
 87a6f58:	33 84 b5 00 03 00 00 	xor    0x300(%ebp,%esi,4),%eax
 87a6f5f:	8b 72 08             	mov    0x8(%edx),%esi
 87a6f62:	33 84 bd 00 01 00 00 	xor    0x100(%ebp,%edi,4),%eax
 87a6f69:	89 c1                	mov    %eax,%ecx
 87a6f6b:	c1 c9 04             	ror    $0x4,%ecx
 87a6f6e:	31 f1                	xor    %esi,%ecx
 87a6f70:	81 e1 3f 3f 3f 3f    	and    $0x3f3f3f3f,%ecx
 87a6f76:	0f b6 f1             	movzbl %cl,%esi
 87a6f79:	0f b6 fd             	movzbl %ch,%edi
 87a6f7c:	33 9c b5 00 06 00 00 	xor    0x600(%ebp,%esi,4),%ebx
 87a6f83:	c1 e9 10             	shr    $0x10,%ecx
 87a6f86:	33 9c bd 00 04 00 00 	xor    0x400(%ebp,%edi,4),%ebx
 87a6f8d:	0f b6 f1             	movzbl %cl,%esi
 87a6f90:	0f b6 fd             	movzbl %ch,%edi
 87a6f93:	33 9c b5 00 02 00 00 	xor    0x200(%ebp,%esi,4),%ebx
 87a6f9a:	8b 72 0c             	mov    0xc(%edx),%esi
 87a6f9d:	33 5c bd 00          	xor    0x0(%ebp,%edi,4),%ebx
 87a6fa1:	89 c1                	mov    %eax,%ecx
 87a6fa3:	31 f1                	xor    %esi,%ecx
 87a6fa5:	81 e1 3f 3f 3f 3f    	and    $0x3f3f3f3f,%ecx
 87a6fab:	0f b6 f1             	movzbl %cl,%esi
 87a6fae:	0f b6 fd             	movzbl %ch,%edi
 87a6fb1:	33 9c b5 00 07 00 00 	xor    0x700(%ebp,%esi,4),%ebx
 87a6fb8:	c1 e9 10             	shr    $0x10,%ecx
 87a6fbb:	33 9c bd 00 05 00 00 	xor    0x500(%ebp,%edi,4),%ebx
 87a6fc2:	0f b6 f1             	movzbl %cl,%esi
 87a6fc5:	0f b6 fd             	movzbl %ch,%edi
 87a6fc8:	33 9c b5 00 03 00 00 	xor    0x300(%ebp,%esi,4),%ebx
 87a6fcf:	83 c2 10             	add    $0x10,%edx
 87a6fd2:	33 9c bd 00 01 00 00 	xor    0x100(%ebp,%edi,4),%ebx
 87a6fd9:	89 d9                	mov    %ebx,%ecx
 87a6fdb:	8b 32                	mov    (%edx),%esi
 87a6fdd:	c1 c9 04             	ror    $0x4,%ecx
 87a6fe0:	31 f1                	xor    %esi,%ecx
 87a6fe2:	81 e1 3f 3f 3f 3f    	and    $0x3f3f3f3f,%ecx
 87a6fe8:	0f b6 f1             	movzbl %cl,%esi
 87a6feb:	0f b6 fd             	movzbl %ch,%edi
 87a6fee:	33 84 b5 00 06 00 00 	xor    0x600(%ebp,%esi,4),%eax
 87a6ff5:	c1 e9 10             	shr    $0x10,%ecx
 87a6ff8:	33 84 bd 00 04 00 00 	xor    0x400(%ebp,%edi,4),%eax
 87a6fff:	0f b6 f1             	movzbl %cl,%esi
 87a7002:	0f b6 fd             	movzbl %ch,%edi
 87a7005:	33 84 b5 00 02 00 00 	xor    0x200(%ebp,%esi,4),%eax
 87a700c:	8b 72 04             	mov    0x4(%edx),%esi
 87a700f:	33 44 bd 00          	xor    0x0(%ebp,%edi,4),%eax
 87a7013:	89 d9                	mov    %ebx,%ecx
 87a7015:	31 f1                	xor    %esi,%ecx
 87a7017:	81 e1 3f 3f 3f 3f    	and    $0x3f3f3f3f,%ecx
 87a701d:	0f b6 f1             	movzbl %cl,%esi
 87a7020:	0f b6 fd             	movzbl %ch,%edi
 87a7023:	33 84 b5 00 07 00 00 	xor    0x700(%ebp,%esi,4),%eax
 87a702a:	c1 e9 10             	shr    $0x10,%ecx
 87a702d:	33 84 bd 00 05 00 00 	xor    0x500(%ebp,%edi,4),%eax
 87a7034:	0f b6 f1             	movzbl %cl,%esi
 87a7037:	0f b6 fd             	movzbl %ch,%edi
 87a703a:	33 84 b5 00 03 00 00 	xor    0x300(%ebp,%esi,4),%eax
 87a7041:	8b 72 08             	mov    0x8(%edx),%esi
 87a7044:	33 84 bd 00 01 00 00 	xor    0x100(%ebp,%edi,4),%eax
 87a704b:	89 c1                	mov    %eax,%ecx
 87a704d:	c1 c9 04             	ror    $0x4,%ecx
 87a7050:	31 f1                	xor    %esi,%ecx
 87a7052:	81 e1 3f 3f 3f 3f    	and    $0x3f3f3f3f,%ecx
 87a7058:	0f b6 f1             	movzbl %cl,%esi
 87a705b:	0f b6 fd             	movzbl %ch,%edi
 87a705e:	33 9c b5 00 06 00 00 	xor    0x600(%ebp,%esi,4),%ebx
 87a7065:	c1 e9 10             	shr    $0x10,%ecx
 87a7068:	33 9c bd 00 04 00 00 	xor    0x400(%ebp,%edi,4),%ebx
 87a706f:	0f b6 f1             	movzbl %cl,%esi
 87a7072:	0f b6 fd             	movzbl %ch,%edi
 87a7075:	33 9c b5 00 02 00 00 	xor    0x200(%ebp,%esi,4),%ebx
 87a707c:	8b 72 0c             	mov    0xc(%edx),%esi
 87a707f:	33 5c bd 00          	xor    0x0(%ebp,%edi,4),%ebx
 87a7083:	89 c1                	mov    %eax,%ecx
 87a7085:	31 f1                	xor    %esi,%ecx
 87a7087:	81 e1 3f 3f 3f 3f    	and    $0x3f3f3f3f,%ecx
 87a708d:	0f b6 f1             	movzbl %cl,%esi
 87a7090:	0f b6 fd             	movzbl %ch,%edi
 87a7093:	33 9c b5 00 07 00 00 	xor    0x700(%ebp,%esi,4),%ebx
 87a709a:	c1 e9 10             	shr    $0x10,%ecx
 87a709d:	33 9c bd 00 05 00 00 	xor    0x500(%ebp,%edi,4),%ebx
 87a70a4:	0f b6 f1             	movzbl %cl,%esi
 87a70a7:	0f b6 fd             	movzbl %ch,%edi
 87a70aa:	33 9c b5 00 03 00 00 	xor    0x300(%ebp,%esi,4),%ebx
 87a70b1:	83 c2 10             	add    $0x10,%edx
 87a70b4:	33 9c bd 00 01 00 00 	xor    0x100(%ebp,%edi,4),%ebx
 87a70bb:	89 d9                	mov    %ebx,%ecx
 87a70bd:	8b 32                	mov    (%edx),%esi
 87a70bf:	c1 c9 04             	ror    $0x4,%ecx
 87a70c2:	31 f1                	xor    %esi,%ecx
 87a70c4:	81 e1 3f 3f 3f 3f    	and    $0x3f3f3f3f,%ecx
 87a70ca:	0f b6 f1             	movzbl %cl,%esi
 87a70cd:	0f b6 fd             	movzbl %ch,%edi
 87a70d0:	33 84 b5 00 06 00 00 	xor    0x600(%ebp,%esi,4),%eax
 87a70d7:	c1 e9 10             	shr    $0x10,%ecx
 87a70da:	33 84 bd 00 04 00 00 	xor    0x400(%ebp,%edi,4),%eax
 87a70e1:	0f b6 f1             	movzbl %cl,%esi
 87a70e4:	0f b6 fd             	movzbl %ch,%edi
 87a70e7:	33 84 b5 00 02 00 00 	xor    0x200(%ebp,%esi,4),%eax
 87a70ee:	8b 72 04             	mov    0x4(%edx),%esi
 87a70f1:	33 44 bd 00          	xor    0x0(%ebp,%edi,4),%eax
 87a70f5:	89 d9                	mov    %ebx,%ecx
 87a70f7:	31 f1                	xor    %esi,%ecx
 87a70f9:	81 e1 3f 3f 3f 3f    	and    $0x3f3f3f3f,%ecx
 87a70ff:	0f b6 f1             	movzbl %cl,%esi
 87a7102:	0f b6 fd             	movzbl %ch,%edi
 87a7105:	33 84 b5 00 07 00 00 	xor    0x700(%ebp,%esi,4),%eax
 87a710c:	c1 e9 10             	shr    $0x10,%ecx
 87a710f:	33 84 bd 00 05 00 00 	xor    0x500(%ebp,%edi,4),%eax
 87a7116:	0f b6 f1             	movzbl %cl,%esi
 87a7119:	0f b6 fd             	movzbl %ch,%edi
 87a711c:	33 84 b5 00 03 00 00 	xor    0x300(%ebp,%esi,4),%eax
 87a7123:	8b 72 08             	mov    0x8(%edx),%esi
 87a7126:	33 84 bd 00 01 00 00 	xor    0x100(%ebp,%edi,4),%eax
 87a712d:	89 c1                	mov    %eax,%ecx
 87a712f:	c1 c9 04             	ror    $0x4,%ecx
 87a7132:	31 f1                	xor    %esi,%ecx
 87a7134:	81 e1 3f 3f 3f 3f    	and    $0x3f3f3f3f,%ecx
 87a713a:	0f b6 f1             	movzbl %cl,%esi
 87a713d:	0f b6 fd             	movzbl %ch,%edi
 87a7140:	33 9c b5 00 06 00 00 	xor    0x600(%ebp,%esi,4),%ebx
 87a7147:	c1 e9 10             	shr    $0x10,%ecx
 87a714a:	33 9c bd 00 04 00 00 	xor    0x400(%ebp,%edi,4),%ebx
 87a7151:	0f b6 f1             	movzbl %cl,%esi
 87a7154:	0f b6 fd             	movzbl %ch,%edi
 87a7157:	33 9c b5 00 02 00 00 	xor    0x200(%ebp,%esi,4),%ebx
 87a715e:	8b 72 0c             	mov    0xc(%edx),%esi
 87a7161:	33 5c bd 00          	xor    0x0(%ebp,%edi,4),%ebx
 87a7165:	89 c1                	mov    %eax,%ecx
 87a7167:	31 f1                	xor    %esi,%ecx
 87a7169:	81 e1 3f 3f 3f 3f    	and    $0x3f3f3f3f,%ecx
 87a716f:	0f b6 f1             	movzbl %cl,%esi
 87a7172:	0f b6 fd             	movzbl %ch,%edi
 87a7175:	33 9c b5 00 07 00 00 	xor    0x700(%ebp,%esi,4),%ebx
 87a717c:	c1 e9 10             	shr    $0x10,%ecx
 87a717f:	33 9c bd 00 05 00 00 	xor    0x500(%ebp,%edi,4),%ebx
 87a7186:	0f b6 f1             	movzbl %cl,%esi
 87a7189:	0f b6 fd             	movzbl %ch,%edi
 87a718c:	33 9c b5 00 03 00 00 	xor    0x300(%ebp,%esi,4),%ebx
 87a7193:	83 c2 10             	add    $0x10,%edx
 87a7196:	33 9c bd 00 01 00 00 	xor    0x100(%ebp,%edi,4),%ebx
 87a719d:	89 d9                	mov    %ebx,%ecx
 87a719f:	8b 32                	mov    (%edx),%esi
 87a71a1:	c1 c9 04             	ror    $0x4,%ecx
 87a71a4:	31 f1                	xor    %esi,%ecx
 87a71a6:	81 e1 3f 3f 3f 3f    	and    $0x3f3f3f3f,%ecx
 87a71ac:	0f b6 f1             	movzbl %cl,%esi
 87a71af:	0f b6 fd             	movzbl %ch,%edi
 87a71b2:	33 84 b5 00 06 00 00 	xor    0x600(%ebp,%esi,4),%eax
 87a71b9:	c1 e9 10             	shr    $0x10,%ecx
 87a71bc:	33 84 bd 00 04 00 00 	xor    0x400(%ebp,%edi,4),%eax
 87a71c3:	0f b6 f1             	movzbl %cl,%esi
 87a71c6:	0f b6 fd             	movzbl %ch,%edi
 87a71c9:	33 84 b5 00 02 00 00 	xor    0x200(%ebp,%esi,4),%eax
 87a71d0:	8b 72 04             	mov    0x4(%edx),%esi
 87a71d3:	33 44 bd 00          	xor    0x0(%ebp,%edi,4),%eax
 87a71d7:	89 d9                	mov    %ebx,%ecx
 87a71d9:	31 f1                	xor    %esi,%ecx
 87a71db:	81 e1 3f 3f 3f 3f    	and    $0x3f3f3f3f,%ecx
 87a71e1:	0f b6 f1             	movzbl %cl,%esi
 87a71e4:	0f b6 fd             	movzbl %ch,%edi
 87a71e7:	33 84 b5 00 07 00 00 	xor    0x700(%ebp,%esi,4),%eax
 87a71ee:	c1 e9 10             	shr    $0x10,%ecx
 87a71f1:	33 84 bd 00 05 00 00 	xor    0x500(%ebp,%edi,4),%eax
 87a71f8:	0f b6 f1             	movzbl %cl,%esi
 87a71fb:	0f b6 fd             	movzbl %ch,%edi
 87a71fe:	33 84 b5 00 03 00 00 	xor    0x300(%ebp,%esi,4),%eax
 87a7205:	8b 72 08             	mov    0x8(%edx),%esi
 87a7208:	33 84 bd 00 01 00 00 	xor    0x100(%ebp,%edi,4),%eax
 87a720f:	89 c1                	mov    %eax,%ecx
 87a7211:	c1 c9 04             	ror    $0x4,%ecx
 87a7214:	31 f1                	xor    %esi,%ecx
 87a7216:	81 e1 3f 3f 3f 3f    	and    $0x3f3f3f3f,%ecx
 87a721c:	0f b6 f1             	movzbl %cl,%esi
 87a721f:	0f b6 fd             	movzbl %ch,%edi
 87a7222:	33 9c b5 00 06 00 00 	xor    0x600(%ebp,%esi,4),%ebx
 87a7229:	c1 e9 10             	shr    $0x10,%ecx
 87a722c:	33 9c bd 00 04 00 00 	xor    0x400(%ebp,%edi,4),%ebx
 87a7233:	0f b6 f1             	movzbl %cl,%esi
 87a7236:	0f b6 fd             	movzbl %ch,%edi
 87a7239:	33 9c b5 00 02 00 00 	xor    0x200(%ebp,%esi,4),%ebx
 87a7240:	8b 72 0c             	mov    0xc(%edx),%esi
 87a7243:	33 5c bd 00          	xor    0x0(%ebp,%edi,4),%ebx
 87a7247:	89 c1                	mov    %eax,%ecx
 87a7249:	31 f1                	xor    %esi,%ecx
 87a724b:	81 e1 3f 3f 3f 3f    	and    $0x3f3f3f3f,%ecx
 87a7251:	0f b6 f1             	movzbl %cl,%esi
 87a7254:	0f b6 fd             	movzbl %ch,%edi
 87a7257:	33 9c b5 00 07 00 00 	xor    0x700(%ebp,%esi,4),%ebx
 87a725e:	c1 e9 10             	shr    $0x10,%ecx
 87a7261:	33 9c bd 00 05 00 00 	xor    0x500(%ebp,%edi,4),%ebx
 87a7268:	0f b6 f1             	movzbl %cl,%esi
 87a726b:	0f b6 fd             	movzbl %ch,%edi
 87a726e:	33 9c b5 00 03 00 00 	xor    0x300(%ebp,%esi,4),%ebx
 87a7275:	83 c2 10             	add    $0x10,%edx
 87a7278:	33 9c bd 00 01 00 00 	xor    0x100(%ebp,%edi,4),%ebx
 87a727f:	93                   	xchg   %eax,%ebx
 87a7280:	89 d9                	mov    %ebx,%ecx
 87a7282:	8b 32                	mov    (%edx),%esi
 87a7284:	c1 c9 04             	ror    $0x4,%ecx
 87a7287:	31 f1                	xor    %esi,%ecx
 87a7289:	81 e1 3f 3f 3f 3f    	and    $0x3f3f3f3f,%ecx
 87a728f:	0f b6 f1             	movzbl %cl,%esi
 87a7292:	0f b6 fd             	movzbl %ch,%edi
 87a7295:	33 84 b5 00 06 00 00 	xor    0x600(%ebp,%esi,4),%eax
 87a729c:	c1 e9 10             	shr    $0x10,%ecx
 87a729f:	33 84 bd 00 04 00 00 	xor    0x400(%ebp,%edi,4),%eax
 87a72a6:	0f b6 f1             	movzbl %cl,%esi
 87a72a9:	0f b6 fd             	movzbl %ch,%edi
 87a72ac:	33 84 b5 00 02 00 00 	xor    0x200(%ebp,%esi,4),%eax
 87a72b3:	8b 72 04             	mov    0x4(%edx),%esi
 87a72b6:	33 44 bd 00          	xor    0x0(%ebp,%edi,4),%eax
 87a72ba:	89 d9                	mov    %ebx,%ecx
 87a72bc:	31 f1                	xor    %esi,%ecx
 87a72be:	81 e1 3f 3f 3f 3f    	and    $0x3f3f3f3f,%ecx
 87a72c4:	0f b6 f1             	movzbl %cl,%esi
 87a72c7:	0f b6 fd             	movzbl %ch,%edi
 87a72ca:	33 84 b5 00 07 00 00 	xor    0x700(%ebp,%esi,4),%eax
 87a72d1:	c1 e9 10             	shr    $0x10,%ecx
 87a72d4:	33 84 bd 00 05 00 00 	xor    0x500(%ebp,%edi,4),%eax
 87a72db:	0f b6 f1             	movzbl %cl,%esi
 87a72de:	0f b6 fd             	movzbl %ch,%edi
 87a72e1:	33 84 b5 00 03 00 00 	xor    0x300(%ebp,%esi,4),%eax
 87a72e8:	8b 72 08             	mov    0x8(%edx),%esi
 87a72eb:	33 84 bd 00 01 00 00 	xor    0x100(%ebp,%edi,4),%eax
 87a72f2:	89 c1                	mov    %eax,%ecx
 87a72f4:	c1 c9 04             	ror    $0x4,%ecx
 87a72f7:	31 f1                	xor    %esi,%ecx
 87a72f9:	81 e1 3f 3f 3f 3f    	and    $0x3f3f3f3f,%ecx
 87a72ff:	0f b6 f1             	movzbl %cl,%esi
 87a7302:	0f b6 fd             	movzbl %ch,%edi
 87a7305:	33 9c b5 00 06 00 00 	xor    0x600(%ebp,%esi,4),%ebx
 87a730c:	c1 e9 10             	shr    $0x10,%ecx
 87a730f:	33 9c bd 00 04 00 00 	xor    0x400(%ebp,%edi,4),%ebx
 87a7316:	0f b6 f1             	movzbl %cl,%esi
 87a7319:	0f b6 fd             	movzbl %ch,%edi
 87a731c:	33 9c b5 00 02 00 00 	xor    0x200(%ebp,%esi,4),%ebx
 87a7323:	8b 72 0c             	mov    0xc(%edx),%esi
 87a7326:	33 5c bd 00          	xor    0x0(%ebp,%edi,4),%ebx
 87a732a:	89 c1                	mov    %eax,%ecx
 87a732c:	31 f1                	xor    %esi,%ecx
 87a732e:	81 e1 3f 3f 3f 3f    	and    $0x3f3f3f3f,%ecx
 87a7334:	0f b6 f1             	movzbl %cl,%esi
 87a7337:	0f b6 fd             	movzbl %ch,%edi
 87a733a:	33 9c b5 00 07 00 00 	xor    0x700(%ebp,%esi,4),%ebx
 87a7341:	c1 e9 10             	shr    $0x10,%ecx
 87a7344:	33 9c bd 00 05 00 00 	xor    0x500(%ebp,%edi,4),%ebx
 87a734b:	0f b6 f1             	movzbl %cl,%esi
 87a734e:	0f b6 fd             	movzbl %ch,%edi
 87a7351:	33 9c b5 00 03 00 00 	xor    0x300(%ebp,%esi,4),%ebx
 87a7358:	83 c2 10             	add    $0x10,%edx
 87a735b:	33 9c bd 00 01 00 00 	xor    0x100(%ebp,%edi,4),%ebx
 87a7362:	89 d9                	mov    %ebx,%ecx
 87a7364:	8b 32                	mov    (%edx),%esi
 87a7366:	c1 c9 04             	ror    $0x4,%ecx
 87a7369:	31 f1                	xor    %esi,%ecx
 87a736b:	81 e1 3f 3f 3f 3f    	and    $0x3f3f3f3f,%ecx
 87a7371:	0f b6 f1             	movzbl %cl,%esi
 87a7374:	0f b6 fd             	movzbl %ch,%edi
 87a7377:	33 84 b5 00 06 00 00 	xor    0x600(%ebp,%esi,4),%eax
 87a737e:	c1 e9 10             	shr    $0x10,%ecx
 87a7381:	33 84 bd 00 04 00 00 	xor    0x400(%ebp,%edi,4),%eax
 87a7388:	0f b6 f1             	movzbl %cl,%esi
 87a738b:	0f b6 fd             	movzbl %ch,%edi
 87a738e:	33 84 b5 00 02 00 00 	xor    0x200(%ebp,%esi,4),%eax
 87a7395:	8b 72 04             	mov    0x4(%edx),%esi
 87a7398:	33 44 bd 00          	xor    0x0(%ebp,%edi,4),%eax
 87a739c:	89 d9                	mov    %ebx,%ecx
 87a739e:	31 f1                	xor    %esi,%ecx
 87a73a0:	81 e1 3f 3f 3f 3f    	and    $0x3f3f3f3f,%ecx
 87a73a6:	0f b6 f1             	movzbl %cl,%esi
 87a73a9:	0f b6 fd             	movzbl %ch,%edi
 87a73ac:	33 84 b5 00 07 00 00 	xor    0x700(%ebp,%esi,4),%eax
 87a73b3:	c1 e9 10             	shr    $0x10,%ecx
 87a73b6:	33 84 bd 00 05 00 00 	xor    0x500(%ebp,%edi,4),%eax
 87a73bd:	0f b6 f1             	movzbl %cl,%esi
 87a73c0:	0f b6 fd             	movzbl %ch,%edi
 87a73c3:	33 84 b5 00 03 00 00 	xor    0x300(%ebp,%esi,4),%eax
 87a73ca:	8b 72 08             	mov    0x8(%edx),%esi
 87a73cd:	33 84 bd 00 01 00 00 	xor    0x100(%ebp,%edi,4),%eax
 87a73d4:	89 c1                	mov    %eax,%ecx
 87a73d6:	c1 c9 04             	ror    $0x4,%ecx
 87a73d9:	31 f1                	xor    %esi,%ecx
 87a73db:	81 e1 3f 3f 3f 3f    	and    $0x3f3f3f3f,%ecx
 87a73e1:	0f b6 f1             	movzbl %cl,%esi
 87a73e4:	0f b6 fd             	movzbl %ch,%edi
 87a73e7:	33 9c b5 00 06 00 00 	xor    0x600(%ebp,%esi,4),%ebx
 87a73ee:	c1 e9 10             	shr    $0x10,%ecx
 87a73f1:	33 9c bd 00 04 00 00 	xor    0x400(%ebp,%edi,4),%ebx
 87a73f8:	0f b6 f1             	movzbl %cl,%esi
 87a73fb:	0f b6 fd             	movzbl %ch,%edi
 87a73fe:	33 9c b5 00 02 00 00 	xor    0x200(%ebp,%esi,4),%ebx
 87a7405:	8b 72 0c             	mov    0xc(%edx),%esi
 87a7408:	33 5c bd 00          	xor    0x0(%ebp,%edi,4),%ebx
 87a740c:	89 c1                	mov    %eax,%ecx
 87a740e:	31 f1                	xor    %esi,%ecx
 87a7410:	81 e1 3f 3f 3f 3f    	and    $0x3f3f3f3f,%ecx
 87a7416:	0f b6 f1             	movzbl %cl,%esi
 87a7419:	0f b6 fd             	movzbl %ch,%edi
 87a741c:	33 9c b5 00 07 00 00 	xor    0x700(%ebp,%esi,4),%ebx
 87a7423:	c1 e9 10             	shr    $0x10,%ecx
 87a7426:	33 9c bd 00 05 00 00 	xor    0x500(%ebp,%edi,4),%ebx
 87a742d:	0f b6 f1             	movzbl %cl,%esi
 87a7430:	0f b6 fd             	movzbl %ch,%edi
 87a7433:	33 9c b5 00 03 00 00 	xor    0x300(%ebp,%esi,4),%ebx
 87a743a:	83 c2 10             	add    $0x10,%edx
 87a743d:	33 9c bd 00 01 00 00 	xor    0x100(%ebp,%edi,4),%ebx
 87a7444:	89 d9                	mov    %ebx,%ecx
 87a7446:	8b 32                	mov    (%edx),%esi
 87a7448:	c1 c9 04             	ror    $0x4,%ecx
 87a744b:	31 f1                	xor    %esi,%ecx
 87a744d:	81 e1 3f 3f 3f 3f    	and    $0x3f3f3f3f,%ecx
 87a7453:	0f b6 f1             	movzbl %cl,%esi
 87a7456:	0f b6 fd             	movzbl %ch,%edi
 87a7459:	33 84 b5 00 06 00 00 	xor    0x600(%ebp,%esi,4),%eax
 87a7460:	c1 e9 10             	shr    $0x10,%ecx
 87a7463:	33 84 bd 00 04 00 00 	xor    0x400(%ebp,%edi,4),%eax
 87a746a:	0f b6 f1             	movzbl %cl,%esi
 87a746d:	0f b6 fd             	movzbl %ch,%edi
 87a7470:	33 84 b5 00 02 00 00 	xor    0x200(%ebp,%esi,4),%eax
 87a7477:	8b 72 04             	mov    0x4(%edx),%esi
 87a747a:	33 44 bd 00          	xor    0x0(%ebp,%edi,4),%eax
 87a747e:	89 d9                	mov    %ebx,%ecx
 87a7480:	31 f1                	xor    %esi,%ecx
 87a7482:	81 e1 3f 3f 3f 3f    	and    $0x3f3f3f3f,%ecx
 87a7488:	0f b6 f1             	movzbl %cl,%esi
 87a748b:	0f b6 fd             	movzbl %ch,%edi
 87a748e:	33 84 b5 00 07 00 00 	xor    0x700(%ebp,%esi,4),%eax
 87a7495:	c1 e9 10             	shr    $0x10,%ecx
 87a7498:	33 84 bd 00 05 00 00 	xor    0x500(%ebp,%edi,4),%eax
 87a749f:	0f b6 f1             	movzbl %cl,%esi
 87a74a2:	0f b6 fd             	movzbl %ch,%edi
 87a74a5:	33 84 b5 00 03 00 00 	xor    0x300(%ebp,%esi,4),%eax
 87a74ac:	8b 72 08             	mov    0x8(%edx),%esi
 87a74af:	33 84 bd 00 01 00 00 	xor    0x100(%ebp,%edi,4),%eax
 87a74b6:	89 c1                	mov    %eax,%ecx
 87a74b8:	c1 c9 04             	ror    $0x4,%ecx
 87a74bb:	31 f1                	xor    %esi,%ecx
 87a74bd:	81 e1 3f 3f 3f 3f    	and    $0x3f3f3f3f,%ecx
 87a74c3:	0f b6 f1             	movzbl %cl,%esi
 87a74c6:	0f b6 fd             	movzbl %ch,%edi
 87a74c9:	33 9c b5 00 06 00 00 	xor    0x600(%ebp,%esi,4),%ebx
 87a74d0:	c1 e9 10             	shr    $0x10,%ecx
 87a74d3:	33 9c bd 00 04 00 00 	xor    0x400(%ebp,%edi,4),%ebx
 87a74da:	0f b6 f1             	movzbl %cl,%esi
 87a74dd:	0f b6 fd             	movzbl %ch,%edi
 87a74e0:	33 9c b5 00 02 00 00 	xor    0x200(%ebp,%esi,4),%ebx
 87a74e7:	8b 72 0c             	mov    0xc(%edx),%esi
 87a74ea:	33 5c bd 00          	xor    0x0(%ebp,%edi,4),%ebx
 87a74ee:	89 c1                	mov    %eax,%ecx
 87a74f0:	31 f1                	xor    %esi,%ecx
 87a74f2:	81 e1 3f 3f 3f 3f    	and    $0x3f3f3f3f,%ecx
 87a74f8:	0f b6 f1             	movzbl %cl,%esi
 87a74fb:	0f b6 fd             	movzbl %ch,%edi
 87a74fe:	33 9c b5 00 07 00 00 	xor    0x700(%ebp,%esi,4),%ebx
 87a7505:	c1 e9 10             	shr    $0x10,%ecx
 87a7508:	33 9c bd 00 05 00 00 	xor    0x500(%ebp,%edi,4),%ebx
 87a750f:	0f b6 f1             	movzbl %cl,%esi
 87a7512:	0f b6 fd             	movzbl %ch,%edi
 87a7515:	33 9c b5 00 03 00 00 	xor    0x300(%ebp,%esi,4),%ebx
 87a751c:	83 c2 10             	add    $0x10,%edx
 87a751f:	33 9c bd 00 01 00 00 	xor    0x100(%ebp,%edi,4),%ebx
 87a7526:	89 d9                	mov    %ebx,%ecx
 87a7528:	8b 32                	mov    (%edx),%esi
 87a752a:	c1 c9 04             	ror    $0x4,%ecx
 87a752d:	31 f1                	xor    %esi,%ecx
 87a752f:	81 e1 3f 3f 3f 3f    	and    $0x3f3f3f3f,%ecx
 87a7535:	0f b6 f1             	movzbl %cl,%esi
 87a7538:	0f b6 fd             	movzbl %ch,%edi
 87a753b:	33 84 b5 00 06 00 00 	xor    0x600(%ebp,%esi,4),%eax
 87a7542:	c1 e9 10             	shr    $0x10,%ecx
 87a7545:	33 84 bd 00 04 00 00 	xor    0x400(%ebp,%edi,4),%eax
 87a754c:	0f b6 f1             	movzbl %cl,%esi
 87a754f:	0f b6 fd             	movzbl %ch,%edi
 87a7552:	33 84 b5 00 02 00 00 	xor    0x200(%ebp,%esi,4),%eax
 87a7559:	8b 72 04             	mov    0x4(%edx),%esi
 87a755c:	33 44 bd 00          	xor    0x0(%ebp,%edi,4),%eax
 87a7560:	89 d9                	mov    %ebx,%ecx
 87a7562:	31 f1                	xor    %esi,%ecx
 87a7564:	81 e1 3f 3f 3f 3f    	and    $0x3f3f3f3f,%ecx
 87a756a:	0f b6 f1             	movzbl %cl,%esi
 87a756d:	0f b6 fd             	movzbl %ch,%edi
 87a7570:	33 84 b5 00 07 00 00 	xor    0x700(%ebp,%esi,4),%eax
 87a7577:	c1 e9 10             	shr    $0x10,%ecx
 87a757a:	33 84 bd 00 05 00 00 	xor    0x500(%ebp,%edi,4),%eax
 87a7581:	0f b6 f1             	movzbl %cl,%esi
 87a7584:	0f b6 fd             	movzbl %ch,%edi
 87a7587:	33 84 b5 00 03 00 00 	xor    0x300(%ebp,%esi,4),%eax
 87a758e:	8b 72 08             	mov    0x8(%edx),%esi
 87a7591:	33 84 bd 00 01 00 00 	xor    0x100(%ebp,%edi,4),%eax
 87a7598:	89 c1                	mov    %eax,%ecx
 87a759a:	c1 c9 04             	ror    $0x4,%ecx
 87a759d:	31 f1                	xor    %esi,%ecx
 87a759f:	81 e1 3f 3f 3f 3f    	and    $0x3f3f3f3f,%ecx
 87a75a5:	0f b6 f1             	movzbl %cl,%esi
 87a75a8:	0f b6 fd             	movzbl %ch,%edi
 87a75ab:	33 9c b5 00 06 00 00 	xor    0x600(%ebp,%esi,4),%ebx
 87a75b2:	c1 e9 10             	shr    $0x10,%ecx
 87a75b5:	33 9c bd 00 04 00 00 	xor    0x400(%ebp,%edi,4),%ebx
 87a75bc:	0f b6 f1             	movzbl %cl,%esi
 87a75bf:	0f b6 fd             	movzbl %ch,%edi
 87a75c2:	33 9c b5 00 02 00 00 	xor    0x200(%ebp,%esi,4),%ebx
 87a75c9:	8b 72 0c             	mov    0xc(%edx),%esi
 87a75cc:	33 5c bd 00          	xor    0x0(%ebp,%edi,4),%ebx
 87a75d0:	89 c1                	mov    %eax,%ecx
 87a75d2:	31 f1                	xor    %esi,%ecx
 87a75d4:	81 e1 3f 3f 3f 3f    	and    $0x3f3f3f3f,%ecx
 87a75da:	0f b6 f1             	movzbl %cl,%esi
 87a75dd:	0f b6 fd             	movzbl %ch,%edi
 87a75e0:	33 9c b5 00 07 00 00 	xor    0x700(%ebp,%esi,4),%ebx
 87a75e7:	c1 e9 10             	shr    $0x10,%ecx
 87a75ea:	33 9c bd 00 05 00 00 	xor    0x500(%ebp,%edi,4),%ebx
 87a75f1:	0f b6 f1             	movzbl %cl,%esi
 87a75f4:	0f b6 fd             	movzbl %ch,%edi
 87a75f7:	33 9c b5 00 03 00 00 	xor    0x300(%ebp,%esi,4),%ebx
 87a75fe:	83 c2 10             	add    $0x10,%edx
 87a7601:	33 9c bd 00 01 00 00 	xor    0x100(%ebp,%edi,4),%ebx
 87a7608:	89 d9                	mov    %ebx,%ecx
 87a760a:	8b 32                	mov    (%edx),%esi
 87a760c:	c1 c9 04             	ror    $0x4,%ecx
 87a760f:	31 f1                	xor    %esi,%ecx
 87a7611:	81 e1 3f 3f 3f 3f    	and    $0x3f3f3f3f,%ecx
 87a7617:	0f b6 f1             	movzbl %cl,%esi
 87a761a:	0f b6 fd             	movzbl %ch,%edi
 87a761d:	33 84 b5 00 06 00 00 	xor    0x600(%ebp,%esi,4),%eax
 87a7624:	c1 e9 10             	shr    $0x10,%ecx
 87a7627:	33 84 bd 00 04 00 00 	xor    0x400(%ebp,%edi,4),%eax
 87a762e:	0f b6 f1             	movzbl %cl,%esi
 87a7631:	0f b6 fd             	movzbl %ch,%edi
 87a7634:	33 84 b5 00 02 00 00 	xor    0x200(%ebp,%esi,4),%eax
 87a763b:	8b 72 04             	mov    0x4(%edx),%esi
 87a763e:	33 44 bd 00          	xor    0x0(%ebp,%edi,4),%eax
 87a7642:	89 d9                	mov    %ebx,%ecx
 87a7644:	31 f1                	xor    %esi,%ecx
 87a7646:	81 e1 3f 3f 3f 3f    	and    $0x3f3f3f3f,%ecx
 87a764c:	0f b6 f1             	movzbl %cl,%esi
 87a764f:	0f b6 fd             	movzbl %ch,%edi
 87a7652:	33 84 b5 00 07 00 00 	xor    0x700(%ebp,%esi,4),%eax
 87a7659:	c1 e9 10             	shr    $0x10,%ecx
 87a765c:	33 84 bd 00 05 00 00 	xor    0x500(%ebp,%edi,4),%eax
 87a7663:	0f b6 f1             	movzbl %cl,%esi
 87a7666:	0f b6 fd             	movzbl %ch,%edi
 87a7669:	33 84 b5 00 03 00 00 	xor    0x300(%ebp,%esi,4),%eax
 87a7670:	8b 72 08             	mov    0x8(%edx),%esi
 87a7673:	33 84 bd 00 01 00 00 	xor    0x100(%ebp,%edi,4),%eax
 87a767a:	89 c1                	mov    %eax,%ecx
 87a767c:	c1 c9 04             	ror    $0x4,%ecx
 87a767f:	31 f1                	xor    %esi,%ecx
 87a7681:	81 e1 3f 3f 3f 3f    	and    $0x3f3f3f3f,%ecx
 87a7687:	0f b6 f1             	movzbl %cl,%esi
 87a768a:	0f b6 fd             	movzbl %ch,%edi
 87a768d:	33 9c b5 00 06 00 00 	xor    0x600(%ebp,%esi,4),%ebx
 87a7694:	c1 e9 10             	shr    $0x10,%ecx
 87a7697:	33 9c bd 00 04 00 00 	xor    0x400(%ebp,%edi,4),%ebx
 87a769e:	0f b6 f1             	movzbl %cl,%esi
 87a76a1:	0f b6 fd             	movzbl %ch,%edi
 87a76a4:	33 9c b5 00 02 00 00 	xor    0x200(%ebp,%esi,4),%ebx
 87a76ab:	8b 72 0c             	mov    0xc(%edx),%esi
 87a76ae:	33 5c bd 00          	xor    0x0(%ebp,%edi,4),%ebx
 87a76b2:	89 c1                	mov    %eax,%ecx
 87a76b4:	31 f1                	xor    %esi,%ecx
 87a76b6:	81 e1 3f 3f 3f 3f    	and    $0x3f3f3f3f,%ecx
 87a76bc:	0f b6 f1             	movzbl %cl,%esi
 87a76bf:	0f b6 fd             	movzbl %ch,%edi
 87a76c2:	33 9c b5 00 07 00 00 	xor    0x700(%ebp,%esi,4),%ebx
 87a76c9:	c1 e9 10             	shr    $0x10,%ecx
 87a76cc:	33 9c bd 00 05 00 00 	xor    0x500(%ebp,%edi,4),%ebx
 87a76d3:	0f b6 f1             	movzbl %cl,%esi
 87a76d6:	0f b6 fd             	movzbl %ch,%edi
 87a76d9:	33 9c b5 00 03 00 00 	xor    0x300(%ebp,%esi,4),%ebx
 87a76e0:	83 c2 10             	add    $0x10,%edx
 87a76e3:	33 9c bd 00 01 00 00 	xor    0x100(%ebp,%edi,4),%ebx
 87a76ea:	89 d9                	mov    %ebx,%ecx
 87a76ec:	8b 32                	mov    (%edx),%esi
 87a76ee:	c1 c9 04             	ror    $0x4,%ecx
 87a76f1:	31 f1                	xor    %esi,%ecx
 87a76f3:	81 e1 3f 3f 3f 3f    	and    $0x3f3f3f3f,%ecx
 87a76f9:	0f b6 f1             	movzbl %cl,%esi
 87a76fc:	0f b6 fd             	movzbl %ch,%edi
 87a76ff:	33 84 b5 00 06 00 00 	xor    0x600(%ebp,%esi,4),%eax
 87a7706:	c1 e9 10             	shr    $0x10,%ecx
 87a7709:	33 84 bd 00 04 00 00 	xor    0x400(%ebp,%edi,4),%eax
 87a7710:	0f b6 f1             	movzbl %cl,%esi
 87a7713:	0f b6 fd             	movzbl %ch,%edi
 87a7716:	33 84 b5 00 02 00 00 	xor    0x200(%ebp,%esi,4),%eax
 87a771d:	8b 72 04             	mov    0x4(%edx),%esi
 87a7720:	33 44 bd 00          	xor    0x0(%ebp,%edi,4),%eax
 87a7724:	89 d9                	mov    %ebx,%ecx
 87a7726:	31 f1                	xor    %esi,%ecx
 87a7728:	81 e1 3f 3f 3f 3f    	and    $0x3f3f3f3f,%ecx
 87a772e:	0f b6 f1             	movzbl %cl,%esi
 87a7731:	0f b6 fd             	movzbl %ch,%edi
 87a7734:	33 84 b5 00 07 00 00 	xor    0x700(%ebp,%esi,4),%eax
 87a773b:	c1 e9 10             	shr    $0x10,%ecx
 87a773e:	33 84 bd 00 05 00 00 	xor    0x500(%ebp,%edi,4),%eax
 87a7745:	0f b6 f1             	movzbl %cl,%esi
 87a7748:	0f b6 fd             	movzbl %ch,%edi
 87a774b:	33 84 b5 00 03 00 00 	xor    0x300(%ebp,%esi,4),%eax
 87a7752:	8b 72 08             	mov    0x8(%edx),%esi
 87a7755:	33 84 bd 00 01 00 00 	xor    0x100(%ebp,%edi,4),%eax
 87a775c:	89 c1                	mov    %eax,%ecx
 87a775e:	c1 c9 04             	ror    $0x4,%ecx
 87a7761:	31 f1                	xor    %esi,%ecx
 87a7763:	81 e1 3f 3f 3f 3f    	and    $0x3f3f3f3f,%ecx
 87a7769:	0f b6 f1             	movzbl %cl,%esi
 87a776c:	0f b6 fd             	movzbl %ch,%edi
 87a776f:	33 9c b5 00 06 00 00 	xor    0x600(%ebp,%esi,4),%ebx
 87a7776:	c1 e9 10             	shr    $0x10,%ecx
 87a7779:	33 9c bd 00 04 00 00 	xor    0x400(%ebp,%edi,4),%ebx
 87a7780:	0f b6 f1             	movzbl %cl,%esi
 87a7783:	0f b6 fd             	movzbl %ch,%edi
 87a7786:	33 9c b5 00 02 00 00 	xor    0x200(%ebp,%esi,4),%ebx
 87a778d:	8b 72 0c             	mov    0xc(%edx),%esi
 87a7790:	33 5c bd 00          	xor    0x0(%ebp,%edi,4),%ebx
 87a7794:	89 c1                	mov    %eax,%ecx
 87a7796:	31 f1                	xor    %esi,%ecx
 87a7798:	81 e1 3f 3f 3f 3f    	and    $0x3f3f3f3f,%ecx
 87a779e:	0f b6 f1             	movzbl %cl,%esi
 87a77a1:	0f b6 fd             	movzbl %ch,%edi
 87a77a4:	33 9c b5 00 07 00 00 	xor    0x700(%ebp,%esi,4),%ebx
 87a77ab:	c1 e9 10             	shr    $0x10,%ecx
 87a77ae:	33 9c bd 00 05 00 00 	xor    0x500(%ebp,%edi,4),%ebx
 87a77b5:	0f b6 f1             	movzbl %cl,%esi
 87a77b8:	0f b6 fd             	movzbl %ch,%edi
 87a77bb:	33 9c b5 00 03 00 00 	xor    0x300(%ebp,%esi,4),%ebx
 87a77c2:	83 c2 10             	add    $0x10,%edx
 87a77c5:	33 9c bd 00 01 00 00 	xor    0x100(%ebp,%edi,4),%ebx
 87a77cc:	89 d9                	mov    %ebx,%ecx
 87a77ce:	8b 32                	mov    (%edx),%esi
 87a77d0:	c1 c9 04             	ror    $0x4,%ecx
 87a77d3:	31 f1                	xor    %esi,%ecx
 87a77d5:	81 e1 3f 3f 3f 3f    	and    $0x3f3f3f3f,%ecx
 87a77db:	0f b6 f1             	movzbl %cl,%esi
 87a77de:	0f b6 fd             	movzbl %ch,%edi
 87a77e1:	33 84 b5 00 06 00 00 	xor    0x600(%ebp,%esi,4),%eax
 87a77e8:	c1 e9 10             	shr    $0x10,%ecx
 87a77eb:	33 84 bd 00 04 00 00 	xor    0x400(%ebp,%edi,4),%eax
 87a77f2:	0f b6 f1             	movzbl %cl,%esi
 87a77f5:	0f b6 fd             	movzbl %ch,%edi
 87a77f8:	33 84 b5 00 02 00 00 	xor    0x200(%ebp,%esi,4),%eax
 87a77ff:	8b 72 04             	mov    0x4(%edx),%esi
 87a7802:	33 44 bd 00          	xor    0x0(%ebp,%edi,4),%eax
 87a7806:	89 d9                	mov    %ebx,%ecx
 87a7808:	31 f1                	xor    %esi,%ecx
 87a780a:	81 e1 3f 3f 3f 3f    	and    $0x3f3f3f3f,%ecx
 87a7810:	0f b6 f1             	movzbl %cl,%esi
 87a7813:	0f b6 fd             	movzbl %ch,%edi
 87a7816:	33 84 b5 00 07 00 00 	xor    0x700(%ebp,%esi,4),%eax
 87a781d:	c1 e9 10             	shr    $0x10,%ecx
 87a7820:	33 84 bd 00 05 00 00 	xor    0x500(%ebp,%edi,4),%eax
 87a7827:	0f b6 f1             	movzbl %cl,%esi
 87a782a:	0f b6 fd             	movzbl %ch,%edi
 87a782d:	33 84 b5 00 03 00 00 	xor    0x300(%ebp,%esi,4),%eax
 87a7834:	8b 72 08             	mov    0x8(%edx),%esi
 87a7837:	33 84 bd 00 01 00 00 	xor    0x100(%ebp,%edi,4),%eax
 87a783e:	89 c1                	mov    %eax,%ecx
 87a7840:	c1 c9 04             	ror    $0x4,%ecx
 87a7843:	31 f1                	xor    %esi,%ecx
 87a7845:	81 e1 3f 3f 3f 3f    	and    $0x3f3f3f3f,%ecx
 87a784b:	0f b6 f1             	movzbl %cl,%esi
 87a784e:	0f b6 fd             	movzbl %ch,%edi
 87a7851:	33 9c b5 00 06 00 00 	xor    0x600(%ebp,%esi,4),%ebx
 87a7858:	c1 e9 10             	shr    $0x10,%ecx
 87a785b:	33 9c bd 00 04 00 00 	xor    0x400(%ebp,%edi,4),%ebx
 87a7862:	0f b6 f1             	movzbl %cl,%esi
 87a7865:	0f b6 fd             	movzbl %ch,%edi
 87a7868:	33 9c b5 00 02 00 00 	xor    0x200(%ebp,%esi,4),%ebx
 87a786f:	8b 72 0c             	mov    0xc(%edx),%esi
 87a7872:	33 5c bd 00          	xor    0x0(%ebp,%edi,4),%ebx
 87a7876:	89 c1                	mov    %eax,%ecx
 87a7878:	31 f1                	xor    %esi,%ecx
 87a787a:	81 e1 3f 3f 3f 3f    	and    $0x3f3f3f3f,%ecx
 87a7880:	0f b6 f1             	movzbl %cl,%esi
 87a7883:	0f b6 fd             	movzbl %ch,%edi
 87a7886:	33 9c b5 00 07 00 00 	xor    0x700(%ebp,%esi,4),%ebx
 87a788d:	c1 e9 10             	shr    $0x10,%ecx
 87a7890:	33 9c bd 00 05 00 00 	xor    0x500(%ebp,%edi,4),%ebx
 87a7897:	0f b6 f1             	movzbl %cl,%esi
 87a789a:	0f b6 fd             	movzbl %ch,%edi
 87a789d:	33 9c b5 00 03 00 00 	xor    0x300(%ebp,%esi,4),%ebx
 87a78a4:	83 c2 10             	add    $0x10,%edx
 87a78a7:	33 9c bd 00 01 00 00 	xor    0x100(%ebp,%edi,4),%ebx
 87a78ae:	89 d9                	mov    %ebx,%ecx
 87a78b0:	8b 32                	mov    (%edx),%esi
 87a78b2:	c1 c9 04             	ror    $0x4,%ecx
 87a78b5:	31 f1                	xor    %esi,%ecx
 87a78b7:	81 e1 3f 3f 3f 3f    	and    $0x3f3f3f3f,%ecx
 87a78bd:	0f b6 f1             	movzbl %cl,%esi
 87a78c0:	0f b6 fd             	movzbl %ch,%edi
 87a78c3:	33 84 b5 00 06 00 00 	xor    0x600(%ebp,%esi,4),%eax
 87a78ca:	c1 e9 10             	shr    $0x10,%ecx
 87a78cd:	33 84 bd 00 04 00 00 	xor    0x400(%ebp,%edi,4),%eax
 87a78d4:	0f b6 f1             	movzbl %cl,%esi
 87a78d7:	0f b6 fd             	movzbl %ch,%edi
 87a78da:	33 84 b5 00 02 00 00 	xor    0x200(%ebp,%esi,4),%eax
 87a78e1:	8b 72 04             	mov    0x4(%edx),%esi
 87a78e4:	33 44 bd 00          	xor    0x0(%ebp,%edi,4),%eax
 87a78e8:	89 d9                	mov    %ebx,%ecx
 87a78ea:	31 f1                	xor    %esi,%ecx
 87a78ec:	81 e1 3f 3f 3f 3f    	and    $0x3f3f3f3f,%ecx
 87a78f2:	0f b6 f1             	movzbl %cl,%esi
 87a78f5:	0f b6 fd             	movzbl %ch,%edi
 87a78f8:	33 84 b5 00 07 00 00 	xor    0x700(%ebp,%esi,4),%eax
 87a78ff:	c1 e9 10             	shr    $0x10,%ecx
 87a7902:	33 84 bd 00 05 00 00 	xor    0x500(%ebp,%edi,4),%eax
 87a7909:	0f b6 f1             	movzbl %cl,%esi
 87a790c:	0f b6 fd             	movzbl %ch,%edi
 87a790f:	33 84 b5 00 03 00 00 	xor    0x300(%ebp,%esi,4),%eax
 87a7916:	8b 72 08             	mov    0x8(%edx),%esi
 87a7919:	33 84 bd 00 01 00 00 	xor    0x100(%ebp,%edi,4),%eax
 87a7920:	89 c1                	mov    %eax,%ecx
 87a7922:	c1 c9 04             	ror    $0x4,%ecx
 87a7925:	31 f1                	xor    %esi,%ecx
 87a7927:	81 e1 3f 3f 3f 3f    	and    $0x3f3f3f3f,%ecx
 87a792d:	0f b6 f1             	movzbl %cl,%esi
 87a7930:	0f b6 fd             	movzbl %ch,%edi
 87a7933:	33 9c b5 00 06 00 00 	xor    0x600(%ebp,%esi,4),%ebx
 87a793a:	c1 e9 10             	shr    $0x10,%ecx
 87a793d:	33 9c bd 00 04 00 00 	xor    0x400(%ebp,%edi,4),%ebx
 87a7944:	0f b6 f1             	movzbl %cl,%esi
 87a7947:	0f b6 fd             	movzbl %ch,%edi
 87a794a:	33 9c b5 00 02 00 00 	xor    0x200(%ebp,%esi,4),%ebx
 87a7951:	8b 72 0c             	mov    0xc(%edx),%esi
 87a7954:	33 5c bd 00          	xor    0x0(%ebp,%edi,4),%ebx
 87a7958:	89 c1                	mov    %eax,%ecx
 87a795a:	31 f1                	xor    %esi,%ecx
 87a795c:	81 e1 3f 3f 3f 3f    	and    $0x3f3f3f3f,%ecx
 87a7962:	0f b6 f1             	movzbl %cl,%esi
 87a7965:	0f b6 fd             	movzbl %ch,%edi
 87a7968:	33 9c b5 00 07 00 00 	xor    0x700(%ebp,%esi,4),%ebx
 87a796f:	c1 e9 10             	shr    $0x10,%ecx
 87a7972:	33 9c bd 00 05 00 00 	xor    0x500(%ebp,%edi,4),%ebx
 87a7979:	0f b6 f1             	movzbl %cl,%esi
 87a797c:	0f b6 fd             	movzbl %ch,%edi
 87a797f:	33 9c b5 00 03 00 00 	xor    0x300(%ebp,%esi,4),%ebx
 87a7986:	83 c2 10             	add    $0x10,%edx
 87a7989:	33 9c bd 00 01 00 00 	xor    0x100(%ebp,%edi,4),%ebx
 87a7990:	d1 cb                	ror    $1,%ebx
 87a7992:	89 c1                	mov    %eax,%ecx
 87a7994:	31 d9                	xor    %ebx,%ecx
 87a7996:	81 e1 aa aa aa aa    	and    $0xaaaaaaaa,%ecx
 87a799c:	31 c8                	xor    %ecx,%eax
 87a799e:	31 cb                	xor    %ecx,%ebx
 87a79a0:	c1 c8 09             	ror    $0x9,%eax
 87a79a3:	89 d9                	mov    %ebx,%ecx
 87a79a5:	31 c1                	xor    %eax,%ecx
 87a79a7:	81 e1 ff 00 ff 00    	and    $0xff00ff,%ecx
 87a79ad:	31 c8                	xor    %ecx,%eax
 87a79af:	31 cb                	xor    %ecx,%ebx
 87a79b1:	c1 c0 06             	rol    $0x6,%eax
 87a79b4:	89 d9                	mov    %ebx,%ecx
 87a79b6:	31 c1                	xor    %eax,%ecx
 87a79b8:	81 e1 33 33 33 33    	and    $0x33333333,%ecx
 87a79be:	31 c8                	xor    %ecx,%eax
 87a79c0:	31 cb                	xor    %ecx,%ebx
 87a79c2:	c1 c0 12             	rol    $0x12,%eax
 87a79c5:	89 d9                	mov    %ebx,%ecx
 87a79c7:	31 c1                	xor    %eax,%ecx
 87a79c9:	81 e1 00 00 ff ff    	and    $0xffff0000,%ecx
 87a79cf:	31 c8                	xor    %ecx,%eax
 87a79d1:	31 cb                	xor    %ecx,%ebx
 87a79d3:	c1 c0 14             	rol    $0x14,%eax
 87a79d6:	89 d9                	mov    %ebx,%ecx
 87a79d8:	31 c1                	xor    %eax,%ecx
 87a79da:	81 e1 f0 f0 f0 f0    	and    $0xf0f0f0f0,%ecx
 87a79e0:	31 c8                	xor    %ecx,%eax
 87a79e2:	31 cb                	xor    %ecx,%ebx
 87a79e4:	c1 c8 04             	ror    $0x4,%eax
 87a79e7:	0f 7e f5             	movd   %mm6,%ebp
 87a79ea:	0f cb                	bswap  %ebx
 87a79ec:	0f c8                	bswap  %eax
 87a79ee:	8b 75 10             	mov    0x10(%ebp),%esi
 87a79f1:	89 1e                	mov    %ebx,(%esi)
 87a79f3:	89 46 04             	mov    %eax,0x4(%esi)
 87a79f6:	0f 7e df             	movd   %mm3,%edi
 87a79f9:	0f 7e e3             	movd   %mm4,%ebx
 87a79fc:	0f 7e ee             	movd   %mm5,%esi
 87a79ff:	0f 77                	emms
 87a7a01:	5d                   	pop    %ebp
 87a7a02:	c3                   	ret
 87a7a03:	90                   	nop
 87a7a04:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87a7a0a:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// TaoCrypt::DES_EDE3::AsmProcess @ 0x87a63e0

/* TaoCrypt::DES_EDE3::AsmProcess(unsigned char const*, unsigned char*, void*) const */

void __thiscall
TaoCrypt::DES_EDE3::AsmProcess(DES_EDE3 *this,uchar *param_1,uchar *param_2,void *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar1 = *(uint *)param_1;
  uVar2 = *(uint *)(param_1 + 4);
  uVar1 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar6 = (uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18) << 4 |
          (uVar2 << 0x18) >> 0x1c;
  uVar2 = (uVar1 ^ uVar6) & 0xf0f0f0f0;
  uVar6 = uVar6 ^ uVar2;
  uVar1 = uVar1 ^ uVar2;
  uVar6 = uVar6 >> 0x14 | uVar6 << 0xc;
  uVar2 = (uVar1 ^ uVar6) & 0xffff0000;
  uVar6 = uVar6 ^ uVar2;
  uVar1 = uVar1 ^ uVar2;
  uVar6 = uVar6 >> 0x12 | uVar6 << 0xe;
  uVar2 = (uVar1 ^ uVar6) & 0x33333333;
  uVar6 = uVar6 ^ uVar2;
  uVar1 = uVar1 ^ uVar2;
  uVar6 = uVar6 >> 6 | uVar6 << 0x1a;
  uVar2 = (uVar1 ^ uVar6) & 0xff00ff;
  uVar6 = uVar6 ^ uVar2;
  uVar1 = uVar1 ^ uVar2;
  uVar7 = uVar6 << 9 | uVar6 >> 0x17;
  uVar2 = (uVar1 ^ uVar7) & 0xaaaaaaaa;
  uVar1 = uVar1 ^ uVar2;
  uVar7 = uVar7 ^ uVar2;
  uVar2 = (uVar7 >> 4 | uVar7 << 0x1c) ^ *(uint *)(this + 0x38);
  uVar6 = uVar2 & 0x3f3f3f3f;
  uVar3 = (uVar7 ^ *(uint *)(this + 0x3c)) & 0x3f3f3f3f;
  uVar1 = (uVar1 << 1 | (uint)((int)uVar1 < 0)) ^
          *(uint *)((int)param_3 + (uVar2 & 0x3f) * 4 + 0x600) ^
          *(uint *)((int)param_3 + (uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x10 & 0xff) * 4 + 0x200) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x18) * 4) ^
          *(uint *)((int)param_3 + ((uVar7 ^ *(uint *)(this + 0x3c)) & 0x3f) * 4 + 0x700) ^
          *(uint *)((int)param_3 + (uVar3 >> 8 & 0xff) * 4 + 0x500) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x10 & 0xff) * 4 + 0x300) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x18) * 4 + 0x100);
  uVar2 = (uVar1 >> 4 | uVar1 << 0x1c) ^ *(uint *)(this + 0x40);
  uVar6 = uVar2 & 0x3f3f3f3f;
  uVar3 = (uVar1 ^ *(uint *)(this + 0x44)) & 0x3f3f3f3f;
  uVar7 = uVar7 ^ *(uint *)((int)param_3 + (uVar2 & 0x3f) * 4 + 0x600) ^
          *(uint *)((int)param_3 + (uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x10 & 0xff) * 4 + 0x200) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x18) * 4) ^
          *(uint *)((int)param_3 + ((uVar1 ^ *(uint *)(this + 0x44)) & 0x3f) * 4 + 0x700) ^
          *(uint *)((int)param_3 + (uVar3 >> 8 & 0xff) * 4 + 0x500) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x10 & 0xff) * 4 + 0x300) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x18) * 4 + 0x100);
  uVar2 = (uVar7 >> 4 | uVar7 << 0x1c) ^ *(uint *)(this + 0x48);
  uVar6 = uVar2 & 0x3f3f3f3f;
  uVar3 = (uVar7 ^ *(uint *)(this + 0x4c)) & 0x3f3f3f3f;
  uVar1 = uVar1 ^ *(uint *)((int)param_3 + (uVar2 & 0x3f) * 4 + 0x600) ^
          *(uint *)((int)param_3 + (uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x10 & 0xff) * 4 + 0x200) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x18) * 4) ^
          *(uint *)((int)param_3 + ((uVar7 ^ *(uint *)(this + 0x4c)) & 0x3f) * 4 + 0x700) ^
          *(uint *)((int)param_3 + (uVar3 >> 8 & 0xff) * 4 + 0x500) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x10 & 0xff) * 4 + 0x300) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x18) * 4 + 0x100);
  uVar2 = (uVar1 >> 4 | uVar1 << 0x1c) ^ *(uint *)(this + 0x50);
  uVar6 = uVar2 & 0x3f3f3f3f;
  uVar3 = (uVar1 ^ *(uint *)(this + 0x54)) & 0x3f3f3f3f;
  uVar7 = uVar7 ^ *(uint *)((int)param_3 + (uVar2 & 0x3f) * 4 + 0x600) ^
          *(uint *)((int)param_3 + (uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x10 & 0xff) * 4 + 0x200) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x18) * 4) ^
          *(uint *)((int)param_3 + ((uVar1 ^ *(uint *)(this + 0x54)) & 0x3f) * 4 + 0x700) ^
          *(uint *)((int)param_3 + (uVar3 >> 8 & 0xff) * 4 + 0x500) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x10 & 0xff) * 4 + 0x300) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x18) * 4 + 0x100);
  uVar2 = (uVar7 >> 4 | uVar7 << 0x1c) ^ *(uint *)(this + 0x58);
  uVar6 = uVar2 & 0x3f3f3f3f;
  uVar3 = (uVar7 ^ *(uint *)(this + 0x5c)) & 0x3f3f3f3f;
  uVar1 = uVar1 ^ *(uint *)((int)param_3 + (uVar2 & 0x3f) * 4 + 0x600) ^
          *(uint *)((int)param_3 + (uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x10 & 0xff) * 4 + 0x200) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x18) * 4) ^
          *(uint *)((int)param_3 + ((uVar7 ^ *(uint *)(this + 0x5c)) & 0x3f) * 4 + 0x700) ^
          *(uint *)((int)param_3 + (uVar3 >> 8 & 0xff) * 4 + 0x500) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x10 & 0xff) * 4 + 0x300) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x18) * 4 + 0x100);
  uVar2 = (uVar1 >> 4 | uVar1 << 0x1c) ^ *(uint *)(this + 0x60);
  uVar6 = uVar2 & 0x3f3f3f3f;
  uVar3 = (uVar1 ^ *(uint *)(this + 100)) & 0x3f3f3f3f;
  uVar7 = uVar7 ^ *(uint *)((int)param_3 + (uVar2 & 0x3f) * 4 + 0x600) ^
          *(uint *)((int)param_3 + (uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x10 & 0xff) * 4 + 0x200) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x18) * 4) ^
          *(uint *)((int)param_3 + ((uVar1 ^ *(uint *)(this + 100)) & 0x3f) * 4 + 0x700) ^
          *(uint *)((int)param_3 + (uVar3 >> 8 & 0xff) * 4 + 0x500) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x10 & 0xff) * 4 + 0x300) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x18) * 4 + 0x100);
  uVar2 = (uVar7 >> 4 | uVar7 << 0x1c) ^ *(uint *)(this + 0x68);
  uVar6 = uVar2 & 0x3f3f3f3f;
  uVar3 = (uVar7 ^ *(uint *)(this + 0x6c)) & 0x3f3f3f3f;
  uVar1 = uVar1 ^ *(uint *)((int)param_3 + (uVar2 & 0x3f) * 4 + 0x600) ^
          *(uint *)((int)param_3 + (uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x10 & 0xff) * 4 + 0x200) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x18) * 4) ^
          *(uint *)((int)param_3 + ((uVar7 ^ *(uint *)(this + 0x6c)) & 0x3f) * 4 + 0x700) ^
          *(uint *)((int)param_3 + (uVar3 >> 8 & 0xff) * 4 + 0x500) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x10 & 0xff) * 4 + 0x300) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x18) * 4 + 0x100);
  uVar2 = (uVar1 >> 4 | uVar1 << 0x1c) ^ *(uint *)(this + 0x70);
  uVar6 = uVar2 & 0x3f3f3f3f;
  uVar3 = (uVar1 ^ *(uint *)(this + 0x74)) & 0x3f3f3f3f;
  uVar7 = uVar7 ^ *(uint *)((int)param_3 + (uVar2 & 0x3f) * 4 + 0x600) ^
          *(uint *)((int)param_3 + (uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x10 & 0xff) * 4 + 0x200) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x18) * 4) ^
          *(uint *)((int)param_3 + ((uVar1 ^ *(uint *)(this + 0x74)) & 0x3f) * 4 + 0x700) ^
          *(uint *)((int)param_3 + (uVar3 >> 8 & 0xff) * 4 + 0x500) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x10 & 0xff) * 4 + 0x300) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x18) * 4 + 0x100);
  uVar2 = (uVar7 >> 4 | uVar7 << 0x1c) ^ *(uint *)(this + 0x78);
  uVar6 = uVar2 & 0x3f3f3f3f;
  uVar3 = (uVar7 ^ *(uint *)(this + 0x7c)) & 0x3f3f3f3f;
  uVar1 = uVar1 ^ *(uint *)((int)param_3 + (uVar2 & 0x3f) * 4 + 0x600) ^
          *(uint *)((int)param_3 + (uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x10 & 0xff) * 4 + 0x200) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x18) * 4) ^
          *(uint *)((int)param_3 + ((uVar7 ^ *(uint *)(this + 0x7c)) & 0x3f) * 4 + 0x700) ^
          *(uint *)((int)param_3 + (uVar3 >> 8 & 0xff) * 4 + 0x500) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x10 & 0xff) * 4 + 0x300) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x18) * 4 + 0x100);
  uVar2 = (uVar1 >> 4 | uVar1 << 0x1c) ^ *(uint *)(this + 0x80);
  uVar6 = uVar2 & 0x3f3f3f3f;
  uVar3 = (uVar1 ^ *(uint *)(this + 0x84)) & 0x3f3f3f3f;
  uVar7 = uVar7 ^ *(uint *)((int)param_3 + (uVar2 & 0x3f) * 4 + 0x600) ^
          *(uint *)((int)param_3 + (uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x10 & 0xff) * 4 + 0x200) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x18) * 4) ^
          *(uint *)((int)param_3 + ((uVar1 ^ *(uint *)(this + 0x84)) & 0x3f) * 4 + 0x700) ^
          *(uint *)((int)param_3 + (uVar3 >> 8 & 0xff) * 4 + 0x500) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x10 & 0xff) * 4 + 0x300) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x18) * 4 + 0x100);
  uVar2 = (uVar7 >> 4 | uVar7 << 0x1c) ^ *(uint *)(this + 0x88);
  uVar6 = uVar2 & 0x3f3f3f3f;
  uVar3 = (uVar7 ^ *(uint *)(this + 0x8c)) & 0x3f3f3f3f;
  uVar1 = uVar1 ^ *(uint *)((int)param_3 + (uVar2 & 0x3f) * 4 + 0x600) ^
          *(uint *)((int)param_3 + (uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x10 & 0xff) * 4 + 0x200) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x18) * 4) ^
          *(uint *)((int)param_3 + ((uVar7 ^ *(uint *)(this + 0x8c)) & 0x3f) * 4 + 0x700) ^
          *(uint *)((int)param_3 + (uVar3 >> 8 & 0xff) * 4 + 0x500) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x10 & 0xff) * 4 + 0x300) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x18) * 4 + 0x100);
  uVar2 = (uVar1 >> 4 | uVar1 << 0x1c) ^ *(uint *)(this + 0x90);
  uVar6 = uVar2 & 0x3f3f3f3f;
  uVar3 = (uVar1 ^ *(uint *)(this + 0x94)) & 0x3f3f3f3f;
  uVar7 = uVar7 ^ *(uint *)((int)param_3 + (uVar2 & 0x3f) * 4 + 0x600) ^
          *(uint *)((int)param_3 + (uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x10 & 0xff) * 4 + 0x200) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x18) * 4) ^
          *(uint *)((int)param_3 + ((uVar1 ^ *(uint *)(this + 0x94)) & 0x3f) * 4 + 0x700) ^
          *(uint *)((int)param_3 + (uVar3 >> 8 & 0xff) * 4 + 0x500) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x10 & 0xff) * 4 + 0x300) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x18) * 4 + 0x100);
  uVar2 = (uVar7 >> 4 | uVar7 << 0x1c) ^ *(uint *)(this + 0x98);
  uVar6 = uVar2 & 0x3f3f3f3f;
  uVar3 = (uVar7 ^ *(uint *)(this + 0x9c)) & 0x3f3f3f3f;
  uVar1 = uVar1 ^ *(uint *)((int)param_3 + (uVar2 & 0x3f) * 4 + 0x600) ^
          *(uint *)((int)param_3 + (uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x10 & 0xff) * 4 + 0x200) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x18) * 4) ^
          *(uint *)((int)param_3 + ((uVar7 ^ *(uint *)(this + 0x9c)) & 0x3f) * 4 + 0x700) ^
          *(uint *)((int)param_3 + (uVar3 >> 8 & 0xff) * 4 + 0x500) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x10 & 0xff) * 4 + 0x300) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x18) * 4 + 0x100);
  uVar2 = (uVar1 >> 4 | uVar1 << 0x1c) ^ *(uint *)(this + 0xa0);
  uVar6 = uVar2 & 0x3f3f3f3f;
  uVar3 = (uVar1 ^ *(uint *)(this + 0xa4)) & 0x3f3f3f3f;
  uVar8 = uVar7 ^ *(uint *)((int)param_3 + (uVar2 & 0x3f) * 4 + 0x600) ^
          *(uint *)((int)param_3 + (uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x10 & 0xff) * 4 + 0x200) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x18) * 4) ^
          *(uint *)((int)param_3 + ((uVar1 ^ *(uint *)(this + 0xa4)) & 0x3f) * 4 + 0x700) ^
          *(uint *)((int)param_3 + (uVar3 >> 8 & 0xff) * 4 + 0x500) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x10 & 0xff) * 4 + 0x300) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x18) * 4 + 0x100);
  uVar2 = (uVar8 >> 4 | uVar8 << 0x1c) ^ *(uint *)(this + 0xa8);
  uVar6 = uVar2 & 0x3f3f3f3f;
  uVar3 = (uVar8 ^ *(uint *)(this + 0xac)) & 0x3f3f3f3f;
  uVar1 = uVar1 ^ *(uint *)((int)param_3 + (uVar2 & 0x3f) * 4 + 0x600) ^
          *(uint *)((int)param_3 + (uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x10 & 0xff) * 4 + 0x200) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x18) * 4) ^
          *(uint *)((int)param_3 + ((uVar8 ^ *(uint *)(this + 0xac)) & 0x3f) * 4 + 0x700) ^
          *(uint *)((int)param_3 + (uVar3 >> 8 & 0xff) * 4 + 0x500) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x10 & 0xff) * 4 + 0x300) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x18) * 4 + 0x100);
  uVar2 = (uVar1 >> 4 | uVar1 << 0x1c) ^ *(uint *)(this + 0xb0);
  uVar6 = uVar2 & 0x3f3f3f3f;
  uVar3 = (uVar1 ^ *(uint *)(this + 0xb4)) & 0x3f3f3f3f;
  uVar7 = (uVar1 >> 4 | uVar1 << 0x1c) ^ *(uint *)(this + 0xb8);
  uVar4 = uVar7 & 0x3f3f3f3f;
  uVar5 = (uVar1 ^ *(uint *)(this + 0xbc)) & 0x3f3f3f3f;
  uVar2 = uVar8 ^ *(uint *)((int)param_3 + (uVar2 & 0x3f) * 4 + 0x600) ^
          *(uint *)((int)param_3 + (uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x10 & 0xff) * 4 + 0x200) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x18) * 4) ^
          *(uint *)((int)param_3 + ((uVar1 ^ *(uint *)(this + 0xb4)) & 0x3f) * 4 + 0x700) ^
          *(uint *)((int)param_3 + (uVar3 >> 8 & 0xff) * 4 + 0x500) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x10 & 0xff) * 4 + 0x300) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x18) * 4 + 0x100) ^
          *(uint *)((int)param_3 + (uVar7 & 0x3f) * 4 + 0x600) ^
          *(uint *)((int)param_3 + (uVar4 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)((int)param_3 + (uVar4 >> 0x10 & 0xff) * 4 + 0x200) ^
          *(uint *)((int)param_3 + (uVar4 >> 0x18) * 4) ^
          *(uint *)((int)param_3 + ((uVar1 ^ *(uint *)(this + 0xbc)) & 0x3f) * 4 + 0x700) ^
          *(uint *)((int)param_3 + (uVar5 >> 8 & 0xff) * 4 + 0x500) ^
          *(uint *)((int)param_3 + (uVar5 >> 0x10 & 0xff) * 4 + 0x300) ^
          *(uint *)((int)param_3 + (uVar5 >> 0x18) * 4 + 0x100);
  uVar6 = (uVar2 >> 4 | uVar2 << 0x1c) ^ *(uint *)(this + 0xc0);
  uVar3 = uVar6 & 0x3f3f3f3f;
  uVar7 = (uVar2 ^ *(uint *)(this + 0xc4)) & 0x3f3f3f3f;
  uVar7 = uVar1 ^ *(uint *)((int)param_3 + (uVar6 & 0x3f) * 4 + 0x600) ^
          *(uint *)((int)param_3 + (uVar3 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x10 & 0xff) * 4 + 0x200) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x18) * 4) ^
          *(uint *)((int)param_3 + ((uVar2 ^ *(uint *)(this + 0xc4)) & 0x3f) * 4 + 0x700) ^
          *(uint *)((int)param_3 + (uVar7 >> 8 & 0xff) * 4 + 0x500) ^
          *(uint *)((int)param_3 + (uVar7 >> 0x10 & 0xff) * 4 + 0x300) ^
          *(uint *)((int)param_3 + (uVar7 >> 0x18) * 4 + 0x100);
  uVar1 = (uVar7 >> 4 | uVar7 << 0x1c) ^ *(uint *)(this + 200);
  uVar6 = uVar1 & 0x3f3f3f3f;
  uVar3 = (uVar7 ^ *(uint *)(this + 0xcc)) & 0x3f3f3f3f;
  uVar1 = uVar2 ^ *(uint *)((int)param_3 + (uVar1 & 0x3f) * 4 + 0x600) ^
          *(uint *)((int)param_3 + (uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x10 & 0xff) * 4 + 0x200) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x18) * 4) ^
          *(uint *)((int)param_3 + ((uVar7 ^ *(uint *)(this + 0xcc)) & 0x3f) * 4 + 0x700) ^
          *(uint *)((int)param_3 + (uVar3 >> 8 & 0xff) * 4 + 0x500) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x10 & 0xff) * 4 + 0x300) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x18) * 4 + 0x100);
  uVar2 = (uVar1 >> 4 | uVar1 << 0x1c) ^ *(uint *)(this + 0xd0);
  uVar6 = uVar2 & 0x3f3f3f3f;
  uVar3 = (uVar1 ^ *(uint *)(this + 0xd4)) & 0x3f3f3f3f;
  uVar7 = uVar7 ^ *(uint *)((int)param_3 + (uVar2 & 0x3f) * 4 + 0x600) ^
          *(uint *)((int)param_3 + (uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x10 & 0xff) * 4 + 0x200) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x18) * 4) ^
          *(uint *)((int)param_3 + ((uVar1 ^ *(uint *)(this + 0xd4)) & 0x3f) * 4 + 0x700) ^
          *(uint *)((int)param_3 + (uVar3 >> 8 & 0xff) * 4 + 0x500) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x10 & 0xff) * 4 + 0x300) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x18) * 4 + 0x100);
  uVar2 = (uVar7 >> 4 | uVar7 << 0x1c) ^ *(uint *)(this + 0xd8);
  uVar6 = uVar2 & 0x3f3f3f3f;
  uVar3 = (uVar7 ^ *(uint *)(this + 0xdc)) & 0x3f3f3f3f;
  uVar1 = uVar1 ^ *(uint *)((int)param_3 + (uVar2 & 0x3f) * 4 + 0x600) ^
          *(uint *)((int)param_3 + (uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x10 & 0xff) * 4 + 0x200) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x18) * 4) ^
          *(uint *)((int)param_3 + ((uVar7 ^ *(uint *)(this + 0xdc)) & 0x3f) * 4 + 0x700) ^
          *(uint *)((int)param_3 + (uVar3 >> 8 & 0xff) * 4 + 0x500) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x10 & 0xff) * 4 + 0x300) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x18) * 4 + 0x100);
  uVar2 = (uVar1 >> 4 | uVar1 << 0x1c) ^ *(uint *)(this + 0xe0);
  uVar6 = uVar2 & 0x3f3f3f3f;
  uVar3 = (uVar1 ^ *(uint *)(this + 0xe4)) & 0x3f3f3f3f;
  uVar7 = uVar7 ^ *(uint *)((int)param_3 + (uVar2 & 0x3f) * 4 + 0x600) ^
          *(uint *)((int)param_3 + (uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x10 & 0xff) * 4 + 0x200) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x18) * 4) ^
          *(uint *)((int)param_3 + ((uVar1 ^ *(uint *)(this + 0xe4)) & 0x3f) * 4 + 0x700) ^
          *(uint *)((int)param_3 + (uVar3 >> 8 & 0xff) * 4 + 0x500) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x10 & 0xff) * 4 + 0x300) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x18) * 4 + 0x100);
  uVar2 = (uVar7 >> 4 | uVar7 << 0x1c) ^ *(uint *)(this + 0xe8);
  uVar6 = uVar2 & 0x3f3f3f3f;
  uVar3 = (uVar7 ^ *(uint *)(this + 0xec)) & 0x3f3f3f3f;
  uVar1 = uVar1 ^ *(uint *)((int)param_3 + (uVar2 & 0x3f) * 4 + 0x600) ^
          *(uint *)((int)param_3 + (uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x10 & 0xff) * 4 + 0x200) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x18) * 4) ^
          *(uint *)((int)param_3 + ((uVar7 ^ *(uint *)(this + 0xec)) & 0x3f) * 4 + 0x700) ^
          *(uint *)((int)param_3 + (uVar3 >> 8 & 0xff) * 4 + 0x500) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x10 & 0xff) * 4 + 0x300) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x18) * 4 + 0x100);
  uVar2 = (uVar1 >> 4 | uVar1 << 0x1c) ^ *(uint *)(this + 0xf0);
  uVar6 = uVar2 & 0x3f3f3f3f;
  uVar3 = (uVar1 ^ *(uint *)(this + 0xf4)) & 0x3f3f3f3f;
  uVar7 = uVar7 ^ *(uint *)((int)param_3 + (uVar2 & 0x3f) * 4 + 0x600) ^
          *(uint *)((int)param_3 + (uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x10 & 0xff) * 4 + 0x200) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x18) * 4) ^
          *(uint *)((int)param_3 + ((uVar1 ^ *(uint *)(this + 0xf4)) & 0x3f) * 4 + 0x700) ^
          *(uint *)((int)param_3 + (uVar3 >> 8 & 0xff) * 4 + 0x500) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x10 & 0xff) * 4 + 0x300) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x18) * 4 + 0x100);
  uVar2 = (uVar7 >> 4 | uVar7 << 0x1c) ^ *(uint *)(this + 0xf8);
  uVar6 = uVar2 & 0x3f3f3f3f;
  uVar3 = (uVar7 ^ *(uint *)(this + 0xfc)) & 0x3f3f3f3f;
  uVar1 = uVar1 ^ *(uint *)((int)param_3 + (uVar2 & 0x3f) * 4 + 0x600) ^
          *(uint *)((int)param_3 + (uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x10 & 0xff) * 4 + 0x200) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x18) * 4) ^
          *(uint *)((int)param_3 + ((uVar7 ^ *(uint *)(this + 0xfc)) & 0x3f) * 4 + 0x700) ^
          *(uint *)((int)param_3 + (uVar3 >> 8 & 0xff) * 4 + 0x500) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x10 & 0xff) * 4 + 0x300) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x18) * 4 + 0x100);
  uVar2 = (uVar1 >> 4 | uVar1 << 0x1c) ^ *(uint *)(this + 0x100);
  uVar6 = uVar2 & 0x3f3f3f3f;
  uVar3 = (uVar1 ^ *(uint *)(this + 0x104)) & 0x3f3f3f3f;
  uVar7 = uVar7 ^ *(uint *)((int)param_3 + (uVar2 & 0x3f) * 4 + 0x600) ^
          *(uint *)((int)param_3 + (uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x10 & 0xff) * 4 + 0x200) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x18) * 4) ^
          *(uint *)((int)param_3 + ((uVar1 ^ *(uint *)(this + 0x104)) & 0x3f) * 4 + 0x700) ^
          *(uint *)((int)param_3 + (uVar3 >> 8 & 0xff) * 4 + 0x500) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x10 & 0xff) * 4 + 0x300) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x18) * 4 + 0x100);
  uVar2 = (uVar7 >> 4 | uVar7 << 0x1c) ^ *(uint *)(this + 0x108);
  uVar6 = uVar2 & 0x3f3f3f3f;
  uVar3 = (uVar7 ^ *(uint *)(this + 0x10c)) & 0x3f3f3f3f;
  uVar1 = uVar1 ^ *(uint *)((int)param_3 + (uVar2 & 0x3f) * 4 + 0x600) ^
          *(uint *)((int)param_3 + (uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x10 & 0xff) * 4 + 0x200) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x18) * 4) ^
          *(uint *)((int)param_3 + ((uVar7 ^ *(uint *)(this + 0x10c)) & 0x3f) * 4 + 0x700) ^
          *(uint *)((int)param_3 + (uVar3 >> 8 & 0xff) * 4 + 0x500) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x10 & 0xff) * 4 + 0x300) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x18) * 4 + 0x100);
  uVar2 = (uVar1 >> 4 | uVar1 << 0x1c) ^ *(uint *)(this + 0x110);
  uVar6 = uVar2 & 0x3f3f3f3f;
  uVar3 = (uVar1 ^ *(uint *)(this + 0x114)) & 0x3f3f3f3f;
  uVar7 = uVar7 ^ *(uint *)((int)param_3 + (uVar2 & 0x3f) * 4 + 0x600) ^
          *(uint *)((int)param_3 + (uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x10 & 0xff) * 4 + 0x200) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x18) * 4) ^
          *(uint *)((int)param_3 + ((uVar1 ^ *(uint *)(this + 0x114)) & 0x3f) * 4 + 0x700) ^
          *(uint *)((int)param_3 + (uVar3 >> 8 & 0xff) * 4 + 0x500) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x10 & 0xff) * 4 + 0x300) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x18) * 4 + 0x100);
  uVar2 = (uVar7 >> 4 | uVar7 << 0x1c) ^ *(uint *)(this + 0x118);
  uVar6 = uVar2 & 0x3f3f3f3f;
  uVar3 = (uVar7 ^ *(uint *)(this + 0x11c)) & 0x3f3f3f3f;
  uVar1 = uVar1 ^ *(uint *)((int)param_3 + (uVar2 & 0x3f) * 4 + 0x600) ^
          *(uint *)((int)param_3 + (uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x10 & 0xff) * 4 + 0x200) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x18) * 4) ^
          *(uint *)((int)param_3 + ((uVar7 ^ *(uint *)(this + 0x11c)) & 0x3f) * 4 + 0x700) ^
          *(uint *)((int)param_3 + (uVar3 >> 8 & 0xff) * 4 + 0x500) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x10 & 0xff) * 4 + 0x300) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x18) * 4 + 0x100);
  uVar2 = (uVar1 >> 4 | uVar1 << 0x1c) ^ *(uint *)(this + 0x120);
  uVar6 = uVar2 & 0x3f3f3f3f;
  uVar3 = (uVar1 ^ *(uint *)(this + 0x124)) & 0x3f3f3f3f;
  uVar8 = uVar7 ^ *(uint *)((int)param_3 + (uVar2 & 0x3f) * 4 + 0x600) ^
          *(uint *)((int)param_3 + (uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x10 & 0xff) * 4 + 0x200) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x18) * 4) ^
          *(uint *)((int)param_3 + ((uVar1 ^ *(uint *)(this + 0x124)) & 0x3f) * 4 + 0x700) ^
          *(uint *)((int)param_3 + (uVar3 >> 8 & 0xff) * 4 + 0x500) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x10 & 0xff) * 4 + 0x300) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x18) * 4 + 0x100);
  uVar2 = (uVar8 >> 4 | uVar8 << 0x1c) ^ *(uint *)(this + 0x128);
  uVar6 = uVar2 & 0x3f3f3f3f;
  uVar3 = (uVar8 ^ *(uint *)(this + 300)) & 0x3f3f3f3f;
  uVar1 = uVar1 ^ *(uint *)((int)param_3 + (uVar2 & 0x3f) * 4 + 0x600) ^
          *(uint *)((int)param_3 + (uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x10 & 0xff) * 4 + 0x200) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x18) * 4) ^
          *(uint *)((int)param_3 + ((uVar8 ^ *(uint *)(this + 300)) & 0x3f) * 4 + 0x700) ^
          *(uint *)((int)param_3 + (uVar3 >> 8 & 0xff) * 4 + 0x500) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x10 & 0xff) * 4 + 0x300) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x18) * 4 + 0x100);
  uVar2 = (uVar1 >> 4 | uVar1 << 0x1c) ^ *(uint *)(this + 0x130);
  uVar6 = uVar2 & 0x3f3f3f3f;
  uVar3 = (uVar1 ^ *(uint *)(this + 0x134)) & 0x3f3f3f3f;
  uVar7 = (uVar1 >> 4 | uVar1 << 0x1c) ^ *(uint *)(this + 0x138);
  uVar4 = uVar7 & 0x3f3f3f3f;
  uVar5 = (uVar1 ^ *(uint *)(this + 0x13c)) & 0x3f3f3f3f;
  uVar2 = uVar8 ^ *(uint *)((int)param_3 + (uVar2 & 0x3f) * 4 + 0x600) ^
          *(uint *)((int)param_3 + (uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x10 & 0xff) * 4 + 0x200) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x18) * 4) ^
          *(uint *)((int)param_3 + ((uVar1 ^ *(uint *)(this + 0x134)) & 0x3f) * 4 + 0x700) ^
          *(uint *)((int)param_3 + (uVar3 >> 8 & 0xff) * 4 + 0x500) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x10 & 0xff) * 4 + 0x300) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x18) * 4 + 0x100) ^
          *(uint *)((int)param_3 + (uVar7 & 0x3f) * 4 + 0x600) ^
          *(uint *)((int)param_3 + (uVar4 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)((int)param_3 + (uVar4 >> 0x10 & 0xff) * 4 + 0x200) ^
          *(uint *)((int)param_3 + (uVar4 >> 0x18) * 4) ^
          *(uint *)((int)param_3 + ((uVar1 ^ *(uint *)(this + 0x13c)) & 0x3f) * 4 + 0x700) ^
          *(uint *)((int)param_3 + (uVar5 >> 8 & 0xff) * 4 + 0x500) ^
          *(uint *)((int)param_3 + (uVar5 >> 0x10 & 0xff) * 4 + 0x300) ^
          *(uint *)((int)param_3 + (uVar5 >> 0x18) * 4 + 0x100);
  uVar6 = (uVar2 >> 4 | uVar2 << 0x1c) ^ *(uint *)(this + 0x140);
  uVar3 = uVar6 & 0x3f3f3f3f;
  uVar7 = (uVar2 ^ *(uint *)(this + 0x144)) & 0x3f3f3f3f;
  uVar7 = uVar1 ^ *(uint *)((int)param_3 + (uVar6 & 0x3f) * 4 + 0x600) ^
          *(uint *)((int)param_3 + (uVar3 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x10 & 0xff) * 4 + 0x200) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x18) * 4) ^
          *(uint *)((int)param_3 + ((uVar2 ^ *(uint *)(this + 0x144)) & 0x3f) * 4 + 0x700) ^
          *(uint *)((int)param_3 + (uVar7 >> 8 & 0xff) * 4 + 0x500) ^
          *(uint *)((int)param_3 + (uVar7 >> 0x10 & 0xff) * 4 + 0x300) ^
          *(uint *)((int)param_3 + (uVar7 >> 0x18) * 4 + 0x100);
  uVar1 = (uVar7 >> 4 | uVar7 << 0x1c) ^ *(uint *)(this + 0x148);
  uVar6 = uVar1 & 0x3f3f3f3f;
  uVar3 = (uVar7 ^ *(uint *)(this + 0x14c)) & 0x3f3f3f3f;
  uVar1 = uVar2 ^ *(uint *)((int)param_3 + (uVar1 & 0x3f) * 4 + 0x600) ^
          *(uint *)((int)param_3 + (uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x10 & 0xff) * 4 + 0x200) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x18) * 4) ^
          *(uint *)((int)param_3 + ((uVar7 ^ *(uint *)(this + 0x14c)) & 0x3f) * 4 + 0x700) ^
          *(uint *)((int)param_3 + (uVar3 >> 8 & 0xff) * 4 + 0x500) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x10 & 0xff) * 4 + 0x300) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x18) * 4 + 0x100);
  uVar2 = (uVar1 >> 4 | uVar1 << 0x1c) ^ *(uint *)(this + 0x150);
  uVar6 = uVar2 & 0x3f3f3f3f;
  uVar3 = (uVar1 ^ *(uint *)(this + 0x154)) & 0x3f3f3f3f;
  uVar7 = uVar7 ^ *(uint *)((int)param_3 + (uVar2 & 0x3f) * 4 + 0x600) ^
          *(uint *)((int)param_3 + (uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x10 & 0xff) * 4 + 0x200) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x18) * 4) ^
          *(uint *)((int)param_3 + ((uVar1 ^ *(uint *)(this + 0x154)) & 0x3f) * 4 + 0x700) ^
          *(uint *)((int)param_3 + (uVar3 >> 8 & 0xff) * 4 + 0x500) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x10 & 0xff) * 4 + 0x300) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x18) * 4 + 0x100);
  uVar2 = (uVar7 >> 4 | uVar7 << 0x1c) ^ *(uint *)(this + 0x158);
  uVar6 = uVar2 & 0x3f3f3f3f;
  uVar3 = (uVar7 ^ *(uint *)(this + 0x15c)) & 0x3f3f3f3f;
  uVar1 = uVar1 ^ *(uint *)((int)param_3 + (uVar2 & 0x3f) * 4 + 0x600) ^
          *(uint *)((int)param_3 + (uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x10 & 0xff) * 4 + 0x200) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x18) * 4) ^
          *(uint *)((int)param_3 + ((uVar7 ^ *(uint *)(this + 0x15c)) & 0x3f) * 4 + 0x700) ^
          *(uint *)((int)param_3 + (uVar3 >> 8 & 0xff) * 4 + 0x500) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x10 & 0xff) * 4 + 0x300) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x18) * 4 + 0x100);
  uVar2 = (uVar1 >> 4 | uVar1 << 0x1c) ^ *(uint *)(this + 0x160);
  uVar6 = uVar2 & 0x3f3f3f3f;
  uVar3 = (uVar1 ^ *(uint *)(this + 0x164)) & 0x3f3f3f3f;
  uVar7 = uVar7 ^ *(uint *)((int)param_3 + (uVar2 & 0x3f) * 4 + 0x600) ^
          *(uint *)((int)param_3 + (uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x10 & 0xff) * 4 + 0x200) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x18) * 4) ^
          *(uint *)((int)param_3 + ((uVar1 ^ *(uint *)(this + 0x164)) & 0x3f) * 4 + 0x700) ^
          *(uint *)((int)param_3 + (uVar3 >> 8 & 0xff) * 4 + 0x500) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x10 & 0xff) * 4 + 0x300) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x18) * 4 + 0x100);
  uVar2 = (uVar7 >> 4 | uVar7 << 0x1c) ^ *(uint *)(this + 0x168);
  uVar6 = uVar2 & 0x3f3f3f3f;
  uVar3 = (uVar7 ^ *(uint *)(this + 0x16c)) & 0x3f3f3f3f;
  uVar1 = uVar1 ^ *(uint *)((int)param_3 + (uVar2 & 0x3f) * 4 + 0x600) ^
          *(uint *)((int)param_3 + (uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x10 & 0xff) * 4 + 0x200) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x18) * 4) ^
          *(uint *)((int)param_3 + ((uVar7 ^ *(uint *)(this + 0x16c)) & 0x3f) * 4 + 0x700) ^
          *(uint *)((int)param_3 + (uVar3 >> 8 & 0xff) * 4 + 0x500) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x10 & 0xff) * 4 + 0x300) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x18) * 4 + 0x100);
  uVar2 = (uVar1 >> 4 | uVar1 << 0x1c) ^ *(uint *)(this + 0x170);
  uVar6 = uVar2 & 0x3f3f3f3f;
  uVar3 = (uVar1 ^ *(uint *)(this + 0x174)) & 0x3f3f3f3f;
  uVar7 = uVar7 ^ *(uint *)((int)param_3 + (uVar2 & 0x3f) * 4 + 0x600) ^
          *(uint *)((int)param_3 + (uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x10 & 0xff) * 4 + 0x200) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x18) * 4) ^
          *(uint *)((int)param_3 + ((uVar1 ^ *(uint *)(this + 0x174)) & 0x3f) * 4 + 0x700) ^
          *(uint *)((int)param_3 + (uVar3 >> 8 & 0xff) * 4 + 0x500) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x10 & 0xff) * 4 + 0x300) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x18) * 4 + 0x100);
  uVar2 = (uVar7 >> 4 | uVar7 << 0x1c) ^ *(uint *)(this + 0x178);
  uVar6 = uVar2 & 0x3f3f3f3f;
  uVar3 = (uVar7 ^ *(uint *)(this + 0x17c)) & 0x3f3f3f3f;
  uVar1 = uVar1 ^ *(uint *)((int)param_3 + (uVar2 & 0x3f) * 4 + 0x600) ^
          *(uint *)((int)param_3 + (uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x10 & 0xff) * 4 + 0x200) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x18) * 4) ^
          *(uint *)((int)param_3 + ((uVar7 ^ *(uint *)(this + 0x17c)) & 0x3f) * 4 + 0x700) ^
          *(uint *)((int)param_3 + (uVar3 >> 8 & 0xff) * 4 + 0x500) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x10 & 0xff) * 4 + 0x300) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x18) * 4 + 0x100);
  uVar2 = (uVar1 >> 4 | uVar1 << 0x1c) ^ *(uint *)(this + 0x180);
  uVar6 = uVar2 & 0x3f3f3f3f;
  uVar3 = (uVar1 ^ *(uint *)(this + 0x184)) & 0x3f3f3f3f;
  uVar7 = uVar7 ^ *(uint *)((int)param_3 + (uVar2 & 0x3f) * 4 + 0x600) ^
          *(uint *)((int)param_3 + (uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x10 & 0xff) * 4 + 0x200) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x18) * 4) ^
          *(uint *)((int)param_3 + ((uVar1 ^ *(uint *)(this + 0x184)) & 0x3f) * 4 + 0x700) ^
          *(uint *)((int)param_3 + (uVar3 >> 8 & 0xff) * 4 + 0x500) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x10 & 0xff) * 4 + 0x300) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x18) * 4 + 0x100);
  uVar2 = (uVar7 >> 4 | uVar7 << 0x1c) ^ *(uint *)(this + 0x188);
  uVar6 = uVar2 & 0x3f3f3f3f;
  uVar3 = (uVar7 ^ *(uint *)(this + 0x18c)) & 0x3f3f3f3f;
  uVar1 = uVar1 ^ *(uint *)((int)param_3 + (uVar2 & 0x3f) * 4 + 0x600) ^
          *(uint *)((int)param_3 + (uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x10 & 0xff) * 4 + 0x200) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x18) * 4) ^
          *(uint *)((int)param_3 + ((uVar7 ^ *(uint *)(this + 0x18c)) & 0x3f) * 4 + 0x700) ^
          *(uint *)((int)param_3 + (uVar3 >> 8 & 0xff) * 4 + 0x500) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x10 & 0xff) * 4 + 0x300) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x18) * 4 + 0x100);
  uVar2 = (uVar1 >> 4 | uVar1 << 0x1c) ^ *(uint *)(this + 400);
  uVar6 = uVar2 & 0x3f3f3f3f;
  uVar3 = (uVar1 ^ *(uint *)(this + 0x194)) & 0x3f3f3f3f;
  uVar7 = uVar7 ^ *(uint *)((int)param_3 + (uVar2 & 0x3f) * 4 + 0x600) ^
          *(uint *)((int)param_3 + (uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x10 & 0xff) * 4 + 0x200) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x18) * 4) ^
          *(uint *)((int)param_3 + ((uVar1 ^ *(uint *)(this + 0x194)) & 0x3f) * 4 + 0x700) ^
          *(uint *)((int)param_3 + (uVar3 >> 8 & 0xff) * 4 + 0x500) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x10 & 0xff) * 4 + 0x300) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x18) * 4 + 0x100);
  uVar2 = (uVar7 >> 4 | uVar7 << 0x1c) ^ *(uint *)(this + 0x198);
  uVar6 = uVar2 & 0x3f3f3f3f;
  uVar3 = (uVar7 ^ *(uint *)(this + 0x19c)) & 0x3f3f3f3f;
  uVar1 = uVar1 ^ *(uint *)((int)param_3 + (uVar2 & 0x3f) * 4 + 0x600) ^
          *(uint *)((int)param_3 + (uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x10 & 0xff) * 4 + 0x200) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x18) * 4) ^
          *(uint *)((int)param_3 + ((uVar7 ^ *(uint *)(this + 0x19c)) & 0x3f) * 4 + 0x700) ^
          *(uint *)((int)param_3 + (uVar3 >> 8 & 0xff) * 4 + 0x500) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x10 & 0xff) * 4 + 0x300) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x18) * 4 + 0x100);
  uVar2 = (uVar1 >> 4 | uVar1 << 0x1c) ^ *(uint *)(this + 0x1a0);
  uVar6 = uVar2 & 0x3f3f3f3f;
  uVar3 = (uVar1 ^ *(uint *)(this + 0x1a4)) & 0x3f3f3f3f;
  uVar7 = uVar7 ^ *(uint *)((int)param_3 + (uVar2 & 0x3f) * 4 + 0x600) ^
          *(uint *)((int)param_3 + (uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x10 & 0xff) * 4 + 0x200) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x18) * 4) ^
          *(uint *)((int)param_3 + ((uVar1 ^ *(uint *)(this + 0x1a4)) & 0x3f) * 4 + 0x700) ^
          *(uint *)((int)param_3 + (uVar3 >> 8 & 0xff) * 4 + 0x500) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x10 & 0xff) * 4 + 0x300) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x18) * 4 + 0x100);
  uVar2 = (uVar7 >> 4 | uVar7 << 0x1c) ^ *(uint *)(this + 0x1a8);
  uVar6 = uVar2 & 0x3f3f3f3f;
  uVar3 = (uVar7 ^ *(uint *)(this + 0x1ac)) & 0x3f3f3f3f;
  uVar2 = uVar1 ^ *(uint *)((int)param_3 + (uVar2 & 0x3f) * 4 + 0x600) ^
          *(uint *)((int)param_3 + (uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x10 & 0xff) * 4 + 0x200) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x18) * 4) ^
          *(uint *)((int)param_3 + ((uVar7 ^ *(uint *)(this + 0x1ac)) & 0x3f) * 4 + 0x700) ^
          *(uint *)((int)param_3 + (uVar3 >> 8 & 0xff) * 4 + 0x500) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x10 & 0xff) * 4 + 0x300) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x18) * 4 + 0x100);
  uVar1 = (uVar2 >> 4 | uVar2 << 0x1c) ^ *(uint *)(this + 0x1b0);
  uVar6 = uVar1 & 0x3f3f3f3f;
  uVar3 = (uVar2 ^ *(uint *)(this + 0x1b4)) & 0x3f3f3f3f;
  uVar1 = uVar7 ^ *(uint *)((int)param_3 + (uVar1 & 0x3f) * 4 + 0x600) ^
          *(uint *)((int)param_3 + (uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x10 & 0xff) * 4 + 0x200) ^
          *(uint *)((int)param_3 + (uVar6 >> 0x18) * 4) ^
          *(uint *)((int)param_3 + ((uVar2 ^ *(uint *)(this + 0x1b4)) & 0x3f) * 4 + 0x700) ^
          *(uint *)((int)param_3 + (uVar3 >> 8 & 0xff) * 4 + 0x500) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x10 & 0xff) * 4 + 0x300) ^
          *(uint *)((int)param_3 + (uVar3 >> 0x18) * 4 + 0x100);
  uVar3 = uVar1 >> 1 | (uint)((uVar1 & 1) != 0) << 0x1f;
  uVar1 = (uVar2 ^ uVar3) & 0xaaaaaaaa;
  uVar2 = uVar2 ^ uVar1;
  uVar3 = uVar3 ^ uVar1;
  uVar1 = uVar2 << 0x17;
  uVar2 = uVar2 >> 9 | uVar1;
  uVar6 = (uVar3 ^ uVar2) & 0xff00ff;
  uVar3 = uVar3 ^ uVar6;
  uVar2 = (uVar2 ^ uVar6) << 6 | uVar1 >> 0x1a;
  uVar1 = (uVar3 ^ uVar2) & 0x33333333;
  uVar2 = uVar2 ^ uVar1;
  uVar3 = uVar3 ^ uVar1;
  uVar1 = uVar2 >> 0xe;
  uVar2 = uVar2 << 0x12 | uVar1;
  uVar6 = (uVar3 ^ uVar2) & 0xffff0000;
  uVar3 = uVar3 ^ uVar6;
  uVar2 = (uVar2 ^ uVar6) >> 0xc;
  uVar1 = uVar1 << 0x14 | uVar2;
  uVar6 = (uVar3 ^ uVar1) & 0xf0f0f0f0;
  uVar3 = uVar3 ^ uVar6;
  uVar1 = (uVar1 ^ uVar6) >> 4;
  *(uint *)param_2 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18
  ;
  *(uint *)(param_2 + 4) =
       (uVar1 | uVar2 << 0x1c) >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
       uVar1 << 0x18;
  return;
}

```

---

## Process

```asm
// === 087a8370 TaoCrypt::DES_EDE3::Process  [0x087a8370-0x87a877f] ===
 87a8370:	55                   	push   %ebp
 87a8371:	89 e5                	mov    %esp,%ebp
 87a8373:	57                   	push   %edi
 87a8374:	56                   	push   %esi
 87a8375:	53                   	push   %ebx
 87a8376:	e8 7d aa f7 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87a837b:	81 c3 1d 48 bc 00    	add    $0xbc481d,%ebx
 87a8381:	83 ec 5c             	sub    $0x5c,%esp
 87a8384:	8b 75 08             	mov    0x8(%ebp),%esi
 87a8387:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 87a838a:	8b 7d 10             	mov    0x10(%ebp),%edi
 87a838d:	8b 45 14             	mov    0x14(%ebp),%eax
 87a8390:	8b 93 38 fa ff ff    	mov    -0x5c8(%ebx),%edx
 87a8396:	80 3a 00             	cmpb   $0x0,(%edx)
 87a8399:	0f 84 f9 00 00 00    	je     87a8498 <_ZN8TaoCrypt8DES_EDE37ProcessEPhPKhj+0x128>
 87a839f:	c1 e8 03             	shr    $0x3,%eax
 87a83a2:	83 7e 34 01          	cmpl   $0x1,0x34(%esi)
 87a83a6:	89 45 cc             	mov    %eax,-0x34(%ebp)
 87a83a9:	74 5d                	je     87a8408 <_ZN8TaoCrypt8DES_EDE37ProcessEPhPKhj+0x98>
 87a83ab:	8d 83 48 35 9a ff    	lea    -0x65cab8(%ebx),%eax
 87a83b1:	31 d2                	xor    %edx,%edx
 87a83b3:	89 45 d0             	mov    %eax,-0x30(%ebp)
 87a83b6:	8b 45 cc             	mov    -0x34(%ebp),%eax
 87a83b9:	85 c0                	test   %eax,%eax
 87a83bb:	74 3f                	je     87a83fc <_ZN8TaoCrypt8DES_EDE37ProcessEPhPKhj+0x8c>
 87a83bd:	89 7d c4             	mov    %edi,-0x3c(%ebp)
 87a83c0:	8b 7d cc             	mov    -0x34(%ebp),%edi
 87a83c3:	89 75 d4             	mov    %esi,-0x2c(%ebp)
 87a83c6:	89 d6                	mov    %edx,%esi
 87a83c8:	89 4d c8             	mov    %ecx,-0x38(%ebp)
 87a83cb:	90                   	nop
 87a83cc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87a83d0:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 87a83d3:	8b 55 c8             	mov    -0x38(%ebp),%edx
 87a83d6:	8b 4d d0             	mov    -0x30(%ebp),%ecx
 87a83d9:	01 f0                	add    %esi,%eax
 87a83db:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a83df:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 87a83e2:	01 f2                	add    %esi,%edx
 87a83e4:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 87a83e8:	83 c6 08             	add    $0x8,%esi
 87a83eb:	89 54 24 08          	mov    %edx,0x8(%esp)
 87a83ef:	89 04 24             	mov    %eax,(%esp)
 87a83f2:	e8 e9 df ff ff       	call   87a63e0 <_ZNK8TaoCrypt8DES_EDE310AsmProcessEPKhPhPv>
 87a83f7:	83 ef 01             	sub    $0x1,%edi
 87a83fa:	75 d4                	jne    87a83d0 <_ZN8TaoCrypt8DES_EDE37ProcessEPhPKhj+0x60>
 87a83fc:	83 c4 5c             	add    $0x5c,%esp
 87a83ff:	5b                   	pop    %ebx
 87a8400:	5e                   	pop    %esi
 87a8401:	5f                   	pop    %edi
 87a8402:	5d                   	pop    %ebp
 87a8403:	c3                   	ret
 87a8404:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87a8408:	8b 46 30             	mov    0x30(%esi),%eax
 87a840b:	85 c0                	test   %eax,%eax
 87a840d:	0f 85 e5 00 00 00    	jne    87a84f8 <_ZN8TaoCrypt8DES_EDE37ProcessEPhPKhj+0x188>
 87a8413:	8b 45 cc             	mov    -0x34(%ebp),%eax
 87a8416:	85 c0                	test   %eax,%eax
 87a8418:	74 e2                	je     87a83fc <_ZN8TaoCrypt8DES_EDE37ProcessEPhPKhj+0x8c>
 87a841a:	8d 83 48 35 9a ff    	lea    -0x65cab8(%ebx),%eax
 87a8420:	89 45 d0             	mov    %eax,-0x30(%ebp)
 87a8423:	89 f8                	mov    %edi,%eax
 87a8425:	89 f7                	mov    %esi,%edi
 87a8427:	8d 56 10             	lea    0x10(%esi),%edx
 87a842a:	31 f6                	xor    %esi,%esi
 87a842c:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
 87a8433:	89 4d c4             	mov    %ecx,-0x3c(%ebp)
 87a8436:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 87a8439:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87a8440:	8b 4d d4             	mov    -0x2c(%ebp),%ecx
 87a8443:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 87a8446:	89 55 c0             	mov    %edx,-0x40(%ebp)
 87a8449:	8b 0c f1             	mov    (%ecx,%esi,8),%ecx
 87a844c:	31 4f 10             	xor    %ecx,0x10(%edi)
 87a844f:	8b 44 f0 04          	mov    0x4(%eax,%esi,8),%eax
 87a8453:	83 c6 01             	add    $0x1,%esi
 87a8456:	31 47 14             	xor    %eax,0x14(%edi)
 87a8459:	8b 4d d0             	mov    -0x30(%ebp),%ecx
 87a845c:	89 54 24 08          	mov    %edx,0x8(%esp)
 87a8460:	89 54 24 04          	mov    %edx,0x4(%esp)
 87a8464:	89 3c 24             	mov    %edi,(%esp)
 87a8467:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 87a846b:	e8 70 df ff ff       	call   87a63e0 <_ZNK8TaoCrypt8DES_EDE310AsmProcessEPKhPhPv>
 87a8470:	8b 55 c0             	mov    -0x40(%ebp),%edx
 87a8473:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 87a8476:	8b 0a                	mov    (%edx),%ecx
 87a8478:	89 08                	mov    %ecx,(%eax)
 87a847a:	8b 4a 04             	mov    0x4(%edx),%ecx
 87a847d:	89 48 04             	mov    %ecx,0x4(%eax)
 87a8480:	83 c0 08             	add    $0x8,%eax
 87a8483:	39 75 cc             	cmp    %esi,-0x34(%ebp)
 87a8486:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 87a8489:	75 b5                	jne    87a8440 <_ZN8TaoCrypt8DES_EDE37ProcessEPhPKhj+0xd0>
 87a848b:	83 c4 5c             	add    $0x5c,%esp
 87a848e:	5b                   	pop    %ebx
 87a848f:	5e                   	pop    %esi
 87a8490:	5f                   	pop    %edi
 87a8491:	5d                   	pop    %ebp
 87a8492:	c3                   	ret
 87a8493:	90                   	nop
 87a8494:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87a8498:	8b 56 34             	mov    0x34(%esi),%edx
 87a849b:	85 d2                	test   %edx,%edx
 87a849d:	0f 85 c5 00 00 00    	jne    87a8568 <_ZN8TaoCrypt8DES_EDE37ProcessEPhPKhj+0x1f8>
 87a84a3:	31 d2                	xor    %edx,%edx
 87a84a5:	f7 76 04             	divl   0x4(%esi)
 87a84a8:	85 c0                	test   %eax,%eax
 87a84aa:	89 45 d0             	mov    %eax,-0x30(%ebp)
 87a84ad:	0f 84 49 ff ff ff    	je     87a83fc <_ZN8TaoCrypt8DES_EDE37ProcessEPhPKhj+0x8c>
 87a84b3:	89 f8                	mov    %edi,%eax
 87a84b5:	89 f7                	mov    %esi,%edi
 87a84b7:	8b 75 d0             	mov    -0x30(%ebp),%esi
 87a84ba:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87a84c0:	8b 17                	mov    (%edi),%edx
 87a84c2:	89 45 bc             	mov    %eax,-0x44(%ebp)
 87a84c5:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 87a84c9:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a84cd:	89 4d c0             	mov    %ecx,-0x40(%ebp)
 87a84d0:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 87a84d7:	00 
 87a84d8:	89 3c 24             	mov    %edi,(%esp)
 87a84db:	ff 52 0c             	call   *0xc(%edx)
 87a84de:	8b 57 04             	mov    0x4(%edi),%edx
 87a84e1:	8b 4d c0             	mov    -0x40(%ebp),%ecx
 87a84e4:	8b 45 bc             	mov    -0x44(%ebp),%eax
 87a84e7:	01 d1                	add    %edx,%ecx
 87a84e9:	01 d0                	add    %edx,%eax
 87a84eb:	83 ee 01             	sub    $0x1,%esi
 87a84ee:	75 d0                	jne    87a84c0 <_ZN8TaoCrypt8DES_EDE37ProcessEPhPKhj+0x150>
 87a84f0:	e9 07 ff ff ff       	jmp    87a83fc <_ZN8TaoCrypt8DES_EDE37ProcessEPhPKhj+0x8c>
 87a84f5:	8d 76 00             	lea    0x0(%esi),%esi
 87a84f8:	8b 55 cc             	mov    -0x34(%ebp),%edx
 87a84fb:	85 d2                	test   %edx,%edx
 87a84fd:	0f 84 f9 fe ff ff    	je     87a83fc <_ZN8TaoCrypt8DES_EDE37ProcessEPhPKhj+0x8c>
 87a8503:	8d 93 48 35 9a ff    	lea    -0x65cab8(%ebx),%edx
 87a8509:	8d 46 10             	lea    0x10(%esi),%eax
 87a850c:	89 55 d0             	mov    %edx,-0x30(%ebp)
 87a850f:	89 f2                	mov    %esi,%edx
 87a8511:	89 ce                	mov    %ecx,%esi
 87a8513:	90                   	nop
 87a8514:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87a8518:	8b 4d d0             	mov    -0x30(%ebp),%ecx
 87a851b:	89 74 24 08          	mov    %esi,0x8(%esp)
 87a851f:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87a8523:	89 14 24             	mov    %edx,(%esp)
 87a8526:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 87a852a:	89 45 bc             	mov    %eax,-0x44(%ebp)
 87a852d:	89 55 c0             	mov    %edx,-0x40(%ebp)
 87a8530:	e8 ab de ff ff       	call   87a63e0 <_ZNK8TaoCrypt8DES_EDE310AsmProcessEPKhPhPv>
 87a8535:	8b 55 c0             	mov    -0x40(%ebp),%edx
 87a8538:	8b 45 bc             	mov    -0x44(%ebp),%eax
 87a853b:	8b 4a 10             	mov    0x10(%edx),%ecx
 87a853e:	31 0e                	xor    %ecx,(%esi)
 87a8540:	8b 4a 14             	mov    0x14(%edx),%ecx
 87a8543:	31 4e 04             	xor    %ecx,0x4(%esi)
 87a8546:	83 c6 08             	add    $0x8,%esi
 87a8549:	8b 0f                	mov    (%edi),%ecx
 87a854b:	89 08                	mov    %ecx,(%eax)
 87a854d:	8b 4f 04             	mov    0x4(%edi),%ecx
 87a8550:	83 c7 08             	add    $0x8,%edi
 87a8553:	89 48 04             	mov    %ecx,0x4(%eax)
 87a8556:	83 6d cc 01          	subl   $0x1,-0x34(%ebp)
 87a855a:	75 bc                	jne    87a8518 <_ZN8TaoCrypt8DES_EDE37ProcessEPhPKhj+0x1a8>
 87a855c:	83 c4 5c             	add    $0x5c,%esp
 87a855f:	5b                   	pop    %ebx
 87a8560:	5e                   	pop    %esi
 87a8561:	5f                   	pop    %edi
 87a8562:	5d                   	pop    %ebp
 87a8563:	c3                   	ret
 87a8564:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87a8568:	83 fa 01             	cmp    $0x1,%edx
 87a856b:	0f 85 8b fe ff ff    	jne    87a83fc <_ZN8TaoCrypt8DES_EDE37ProcessEPhPKhj+0x8c>
 87a8571:	8b 56 30             	mov    0x30(%esi),%edx
 87a8574:	85 d2                	test   %edx,%edx
 87a8576:	75 74                	jne    87a85ec <_ZN8TaoCrypt8DES_EDE37ProcessEPhPKhj+0x27c>
 87a8578:	31 d2                	xor    %edx,%edx
 87a857a:	f7 76 04             	divl   0x4(%esi)
 87a857d:	85 c0                	test   %eax,%eax
 87a857f:	89 45 d0             	mov    %eax,-0x30(%ebp)
 87a8582:	0f 84 74 fe ff ff    	je     87a83fc <_ZN8TaoCrypt8DES_EDE37ProcessEPhPKhj+0x8c>
 87a8588:	8b 46 04             	mov    0x4(%esi),%eax
 87a858b:	89 fa                	mov    %edi,%edx
 87a858d:	89 cf                	mov    %ecx,%edi
 87a858f:	90                   	nop
 87a8590:	89 54 24 04          	mov    %edx,0x4(%esp)
 87a8594:	89 44 24 08          	mov    %eax,0x8(%esp)
 87a8598:	8b 46 08             	mov    0x8(%esi),%eax
 87a859b:	89 55 c0             	mov    %edx,-0x40(%ebp)
 87a859e:	89 04 24             	mov    %eax,(%esp)
 87a85a1:	e8 6a ee fb ff       	call   8767410 <_ZN8TaoCrypt6xorbufEPhPKhj>
 87a85a6:	8b 46 08             	mov    0x8(%esi),%eax
 87a85a9:	8b 0e                	mov    (%esi),%ecx
 87a85ab:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 87a85b2:	00 
 87a85b3:	89 34 24             	mov    %esi,(%esp)
 87a85b6:	89 44 24 0c          	mov    %eax,0xc(%esp)
 87a85ba:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a85be:	ff 51 0c             	call   *0xc(%ecx)
 87a85c1:	8b 46 08             	mov    0x8(%esi),%eax
 87a85c4:	8b 4e 04             	mov    0x4(%esi),%ecx
 87a85c7:	89 3c 24             	mov    %edi,(%esp)
 87a85ca:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a85ce:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 87a85d2:	e8 c9 52 8d ff       	call   807d8a0 <memcpy@plt>
 87a85d7:	8b 46 04             	mov    0x4(%esi),%eax
 87a85da:	8b 55 c0             	mov    -0x40(%ebp),%edx
 87a85dd:	01 c7                	add    %eax,%edi
 87a85df:	01 c2                	add    %eax,%edx
 87a85e1:	83 6d d0 01          	subl   $0x1,-0x30(%ebp)
 87a85e5:	75 a9                	jne    87a8590 <_ZN8TaoCrypt8DES_EDE37ProcessEPhPKhj+0x220>
 87a85e7:	e9 10 fe ff ff       	jmp    87a83fc <_ZN8TaoCrypt8DES_EDE37ProcessEPhPKhj+0x8c>
 87a85ec:	31 d2                	xor    %edx,%edx
 87a85ee:	f7 76 04             	divl   0x4(%esi)
 87a85f1:	85 c0                	test   %eax,%eax
 87a85f3:	89 45 d0             	mov    %eax,-0x30(%ebp)
 87a85f6:	0f 84 00 fe ff ff    	je     87a83fc <_ZN8TaoCrypt8DES_EDE37ProcessEPhPKhj+0x8c>
 87a85fc:	8b 46 04             	mov    0x4(%esi),%eax
 87a85ff:	8d 55 d8             	lea    -0x28(%ebp),%edx
 87a8602:	89 55 cc             	mov    %edx,-0x34(%ebp)
 87a8605:	89 fa                	mov    %edi,%edx
 87a8607:	89 cf                	mov    %ecx,%edi
 87a8609:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87a8610:	8b 4e 0c             	mov    0xc(%esi),%ecx
 87a8613:	89 55 c0             	mov    %edx,-0x40(%ebp)
 87a8616:	89 54 24 04          	mov    %edx,0x4(%esp)
 87a861a:	89 44 24 08          	mov    %eax,0x8(%esp)
 87a861e:	89 0c 24             	mov    %ecx,(%esp)
 87a8621:	e8 7a 52 8d ff       	call   807d8a0 <memcpy@plt>
 87a8626:	8b 06                	mov    (%esi),%eax
 87a8628:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 87a862c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 87a8633:	00 
 87a8634:	8b 4e 0c             	mov    0xc(%esi),%ecx
 87a8637:	89 34 24             	mov    %esi,(%esp)
 87a863a:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 87a863e:	ff 50 0c             	call   *0xc(%eax)
 87a8641:	8b 46 04             	mov    0x4(%esi),%eax
 87a8644:	89 44 24 08          	mov    %eax,0x8(%esp)
 87a8648:	8b 46 08             	mov    0x8(%esi),%eax
 87a864b:	89 3c 24             	mov    %edi,(%esp)
 87a864e:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a8652:	e8 b9 ed fb ff       	call   8767410 <_ZN8TaoCrypt6xorbufEPhPKhj>
 87a8657:	8b 4e 04             	mov    0x4(%esi),%ecx
 87a865a:	8b 46 08             	mov    0x8(%esi),%eax
 87a865d:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 87a8661:	8b 4d cc             	mov    -0x34(%ebp),%ecx
 87a8664:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a8668:	89 0c 24             	mov    %ecx,(%esp)
 87a866b:	e8 30 52 8d ff       	call   807d8a0 <memcpy@plt>
 87a8670:	8b 46 0c             	mov    0xc(%esi),%eax
 87a8673:	8b 4e 04             	mov    0x4(%esi),%ecx
 87a8676:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a867a:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 87a867e:	8b 46 08             	mov    0x8(%esi),%eax
 87a8681:	89 04 24             	mov    %eax,(%esp)
 87a8684:	e8 17 52 8d ff       	call   807d8a0 <memcpy@plt>
 87a8689:	8b 4e 04             	mov    0x4(%esi),%ecx
 87a868c:	8b 46 0c             	mov    0xc(%esi),%eax
 87a868f:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 87a8693:	8b 4d cc             	mov    -0x34(%ebp),%ecx
 87a8696:	89 04 24             	mov    %eax,(%esp)
 87a8699:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 87a869d:	e8 fe 51 8d ff       	call   807d8a0 <memcpy@plt>
 87a86a2:	8b 46 04             	mov    0x4(%esi),%eax
 87a86a5:	8b 55 c0             	mov    -0x40(%ebp),%edx
 87a86a8:	01 c7                	add    %eax,%edi
 87a86aa:	01 c2                	add    %eax,%edx
 87a86ac:	83 6d d0 01          	subl   $0x1,-0x30(%ebp)
 87a86b0:	0f 85 5a ff ff ff    	jne    87a8610 <_ZN8TaoCrypt8DES_EDE37ProcessEPhPKhj+0x2a0>
 87a86b6:	e9 41 fd ff ff       	jmp    87a83fc <_ZN8TaoCrypt8DES_EDE37ProcessEPhPKhj+0x8c>
 87a86bb:	90                   	nop
 87a86bc:	90                   	nop
 87a86bd:	90                   	nop
 87a86be:	90                   	nop
 87a86bf:	90                   	nop

087a86c0 <_ZN8TaoCrypt8DES_EDE3D1Ev>:
 87a86c0:	e8 ff be f7 ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 87a86c5:	81 c1 d3 44 bc 00    	add    $0xbc44d3,%ecx
 87a86cb:	55                   	push   %ebp
 87a86cc:	89 e5                	mov    %esp,%ebp
 87a86ce:	8b 81 8c fb ff ff    	mov    -0x474(%ecx),%eax
 87a86d4:	8d 50 08             	lea    0x8(%eax),%edx
 87a86d7:	8b 45 08             	mov    0x8(%ebp),%eax
 87a86da:	89 10                	mov    %edx,(%eax)
 87a86dc:	5d                   	pop    %ebp
 87a86dd:	c3                   	ret
 87a86de:	90                   	nop
 87a86df:	90                   	nop

087a86e0 <_ZN8TaoCrypt8DES_EDE3D0Ev>:
 87a86e0:	e8 df be f7 ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 87a86e5:	81 c1 b3 44 bc 00    	add    $0xbc44b3,%ecx
 87a86eb:	55                   	push   %ebp
 87a86ec:	89 e5                	mov    %esp,%ebp
 87a86ee:	8b 81 8c fb ff ff    	mov    -0x474(%ecx),%eax
 87a86f4:	8d 50 08             	lea    0x8(%eax),%edx
 87a86f7:	8b 45 08             	mov    0x8(%ebp),%eax
 87a86fa:	89 10                	mov    %edx,(%eax)
 87a86fc:	5d                   	pop    %ebp
 87a86fd:	c3                   	ret
 87a86fe:	90                   	nop
 87a86ff:	90                   	nop

087a8700 <_ZN8TaoCrypt8DES_EDE2D1Ev>:
 87a8700:	e8 bf be f7 ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 87a8705:	81 c1 93 44 bc 00    	add    $0xbc4493,%ecx
 87a870b:	55                   	push   %ebp
 87a870c:	89 e5                	mov    %esp,%ebp
 87a870e:	8b 81 8c fb ff ff    	mov    -0x474(%ecx),%eax
 87a8714:	8d 50 08             	lea    0x8(%eax),%edx
 87a8717:	8b 45 08             	mov    0x8(%ebp),%eax
 87a871a:	89 10                	mov    %edx,(%eax)
 87a871c:	5d                   	pop    %ebp
 87a871d:	c3                   	ret
 87a871e:	90                   	nop
 87a871f:	90                   	nop

087a8720 <_ZN8TaoCrypt8DES_EDE2D0Ev>:
 87a8720:	e8 9f be f7 ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 87a8725:	81 c1 73 44 bc 00    	add    $0xbc4473,%ecx
 87a872b:	55                   	push   %ebp
 87a872c:	89 e5                	mov    %esp,%ebp
 87a872e:	8b 81 8c fb ff ff    	mov    -0x474(%ecx),%eax
 87a8734:	8d 50 08             	lea    0x8(%eax),%edx
 87a8737:	8b 45 08             	mov    0x8(%ebp),%eax
 87a873a:	89 10                	mov    %edx,(%eax)
 87a873c:	5d                   	pop    %ebp
 87a873d:	c3                   	ret
 87a873e:	90                   	nop
 87a873f:	90                   	nop

087a8740 <_ZN8TaoCrypt3DESD1Ev>:
 87a8740:	e8 7f be f7 ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 87a8745:	81 c1 53 44 bc 00    	add    $0xbc4453,%ecx
 87a874b:	55                   	push   %ebp
 87a874c:	89 e5                	mov    %esp,%ebp
 87a874e:	8b 81 8c fb ff ff    	mov    -0x474(%ecx),%eax
 87a8754:	8d 50 08             	lea    0x8(%eax),%edx
 87a8757:	8b 45 08             	mov    0x8(%ebp),%eax
 87a875a:	89 10                	mov    %edx,(%eax)
 87a875c:	5d                   	pop    %ebp
 87a875d:	c3                   	ret
 87a875e:	90                   	nop
 87a875f:	90                   	nop

087a8760 <_ZN8TaoCrypt3DESD0Ev>:
 87a8760:	e8 5f be f7 ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 87a8765:	81 c1 33 44 bc 00    	add    $0xbc4433,%ecx
 87a876b:	55                   	push   %ebp
 87a876c:	89 e5                	mov    %esp,%ebp
 87a876e:	8b 81 8c fb ff ff    	mov    -0x474(%ecx),%eax
 87a8774:	8d 50 08             	lea    0x8(%eax),%edx
 87a8777:	8b 45 08             	mov    0x8(%ebp),%eax
 87a877a:	89 10                	mov    %edx,(%eax)
 87a877c:	5d                   	pop    %ebp
 87a877d:	c3                   	ret
 87a877e:	90                   	nop
 87a877f:	90                   	nop

```

```c
// TaoCrypt::DES_EDE3::Process @ 0x87a8370

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::DES_EDE3::Process(unsigned char*, unsigned char const*, unsigned int) */

void __thiscall
TaoCrypt::DES_EDE3::Process(DES_EDE3 *this,uchar *param_1,uchar *param_2,uint param_3)

{
  DES_EDE3 *pDVar1;
  uchar *puVar2;
  size_t __n;
  uchar *puVar3;
  int iVar4;
  uint uVar5;
  uchar *local_40;
  uint local_38;
  uint local_34;
  undefined1 local_2c [24];
  undefined4 uStack_14;
  
  uStack_14 = 0x87a837b;
  if (*PTR_isMMX_0936c5d0 == '\0') {
    if (*(int *)(this + 0x34) == 0) {
      for (uVar5 = param_3 / *(uint *)(this + 4); uVar5 != 0; uVar5 = uVar5 - 1) {
        (**(code **)(*(int *)this + 0xc))(this,param_2,0,param_1);
        param_1 = param_1 + *(int *)(this + 4);
        param_2 = param_2 + *(int *)(this + 4);
      }
    }
    else if (*(int *)(this + 0x34) == 1) {
      if (*(int *)(this + 0x30) == 0) {
        local_34 = param_3 / *(uint *)(this + 4);
        if (local_34 != 0) {
          uVar5 = *(uint *)(this + 4);
          do {
            xorbuf(*(uchar **)(this + 8),param_2,uVar5);
            (**(code **)(*(int *)this + 0xc))
                      (this,*(undefined4 *)(this + 8),0,*(undefined4 *)(this + 8));
            memcpy(param_1,*(void **)(this + 8),*(size_t *)(this + 4));
            uVar5 = *(uint *)(this + 4);
            param_1 = param_1 + uVar5;
            param_2 = param_2 + uVar5;
            local_34 = local_34 - 1;
          } while (local_34 != 0);
        }
      }
      else {
        local_34 = param_3 / *(uint *)(this + 4);
        if (local_34 != 0) {
          __n = *(size_t *)(this + 4);
          do {
            memcpy(*(void **)(this + 0xc),param_2,__n);
            (**(code **)(*(int *)this + 0xc))(this,*(undefined4 *)(this + 0xc),0,param_1);
            xorbuf(param_1,*(uchar **)(this + 8),*(uint *)(this + 4));
            memcpy(local_2c,*(void **)(this + 8),*(size_t *)(this + 4));
            memcpy(*(void **)(this + 8),*(void **)(this + 0xc),*(size_t *)(this + 4));
            memcpy(*(void **)(this + 0xc),local_2c,*(size_t *)(this + 4));
            __n = *(size_t *)(this + 4);
            param_1 = param_1 + __n;
            param_2 = param_2 + __n;
            local_34 = local_34 - 1;
          } while (local_34 != 0);
        }
      }
    }
  }
  else {
    local_38 = param_3 >> 3;
    if (*(int *)(this + 0x34) == 1) {
      if (*(int *)(this + 0x30) == 0) {
        if (local_38 != 0) {
          pDVar1 = this + 0x10;
          local_40 = param_1;
          uVar5 = 0;
          do {
            *(uint *)(this + 0x10) = *(uint *)(this + 0x10) ^ *(uint *)(param_2 + uVar5 * 8);
            iVar4 = uVar5 * 8;
            uVar5 = uVar5 + 1;
            *(uint *)(this + 0x14) = *(uint *)(this + 0x14) ^ *(uint *)(param_2 + iVar4 + 4);
            AsmProcess(this,(uchar *)pDVar1,(uchar *)pDVar1,Spbox);
            *(undefined4 *)local_40 = *(undefined4 *)pDVar1;
            *(undefined4 *)(local_40 + 4) = *(undefined4 *)(this + 0x14);
            local_40 = local_40 + 8;
          } while (local_38 != uVar5);
          return;
        }
      }
      else if (local_38 != 0) {
        do {
          AsmProcess(this,param_2,param_1,Spbox);
          *(uint *)param_1 = *(uint *)param_1 ^ *(uint *)(this + 0x10);
          *(uint *)((int)param_1 + 4) = *(uint *)((int)param_1 + 4) ^ *(uint *)(this + 0x14);
          param_1 = (uchar *)((int)param_1 + 8);
          *(undefined4 *)(this + 0x10) = *(undefined4 *)param_2;
          puVar2 = param_2 + 4;
          param_2 = param_2 + 8;
          *(undefined4 *)(this + 0x14) = *(undefined4 *)puVar2;
          local_38 = local_38 - 1;
        } while (local_38 != 0);
        return;
      }
    }
    else if (local_38 != 0) {
      iVar4 = 0;
      do {
        puVar2 = param_2 + iVar4;
        puVar3 = param_1 + iVar4;
        iVar4 = iVar4 + 8;
        AsmProcess(this,puVar2,puVar3,Spbox);
        local_38 = local_38 - 1;
      } while (local_38 != 0);
    }
  }
  return;
}

```

---

## ProcessAndXorBlock

```asm
// === 087a7fa0 TaoCrypt::DES_EDE3::ProcessAndXorBlock  [0x087a7fa0-0x87a818f] ===
 87a7fa0:	55                   	push   %ebp
 87a7fa1:	89 e5                	mov    %esp,%ebp
 87a7fa3:	57                   	push   %edi
 87a7fa4:	56                   	push   %esi
 87a7fa5:	53                   	push   %ebx
 87a7fa6:	83 ec 3c             	sub    $0x3c,%esp
 87a7fa9:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 87a7fac:	e8 47 ae f7 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87a7fb1:	81 c3 e7 4b bc 00    	add    $0xbc4be7,%ebx
 87a7fb7:	8b 75 10             	mov    0x10(%ebp),%esi
 87a7fba:	8b 7d 14             	mov    0x14(%ebp),%edi
 87a7fbd:	8b 11                	mov    (%ecx),%edx
 87a7fbf:	89 d0                	mov    %edx,%eax
 87a7fc1:	c1 c8 08             	ror    $0x8,%eax
 87a7fc4:	c1 ca 18             	ror    $0x18,%edx
 87a7fc7:	25 00 ff 00 ff       	and    $0xff00ff00,%eax
 87a7fcc:	81 e2 ff 00 ff 00    	and    $0xff00ff,%edx
 87a7fd2:	09 c2                	or     %eax,%edx
 87a7fd4:	8b 41 04             	mov    0x4(%ecx),%eax
 87a7fd7:	89 c1                	mov    %eax,%ecx
 87a7fd9:	c1 c9 08             	ror    $0x8,%ecx
 87a7fdc:	c1 c8 18             	ror    $0x18,%eax
 87a7fdf:	81 e1 00 ff 00 ff    	and    $0xff00ff00,%ecx
 87a7fe5:	25 ff 00 ff 00       	and    $0xff00ff,%eax
 87a7fea:	09 c8                	or     %ecx,%eax
 87a7fec:	c1 c8 1c             	ror    $0x1c,%eax
 87a7fef:	89 c1                	mov    %eax,%ecx
 87a7ff1:	31 d1                	xor    %edx,%ecx
 87a7ff3:	81 e1 f0 f0 f0 f0    	and    $0xf0f0f0f0,%ecx
 87a7ff9:	31 c8                	xor    %ecx,%eax
 87a7ffb:	31 ca                	xor    %ecx,%edx
 87a7ffd:	c1 c8 14             	ror    $0x14,%eax
 87a8000:	89 c1                	mov    %eax,%ecx
 87a8002:	31 d1                	xor    %edx,%ecx
 87a8004:	66 31 c9             	xor    %cx,%cx
 87a8007:	31 c8                	xor    %ecx,%eax
 87a8009:	31 ca                	xor    %ecx,%edx
 87a800b:	c1 c8 12             	ror    $0x12,%eax
 87a800e:	89 c1                	mov    %eax,%ecx
 87a8010:	31 d1                	xor    %edx,%ecx
 87a8012:	81 e1 33 33 33 33    	and    $0x33333333,%ecx
 87a8018:	31 c8                	xor    %ecx,%eax
 87a801a:	31 ca                	xor    %ecx,%edx
 87a801c:	c1 c8 06             	ror    $0x6,%eax
 87a801f:	89 c1                	mov    %eax,%ecx
 87a8021:	31 d1                	xor    %edx,%ecx
 87a8023:	81 e1 ff 00 ff 00    	and    $0xff00ff,%ecx
 87a8029:	31 c8                	xor    %ecx,%eax
 87a802b:	31 ca                	xor    %ecx,%edx
 87a802d:	c1 c8 17             	ror    $0x17,%eax
 87a8030:	89 c1                	mov    %eax,%ecx
 87a8032:	31 d1                	xor    %edx,%ecx
 87a8034:	81 e1 aa aa aa aa    	and    $0xaaaaaaaa,%ecx
 87a803a:	31 c8                	xor    %ecx,%eax
 87a803c:	31 ca                	xor    %ecx,%edx
 87a803e:	8b 4d 08             	mov    0x8(%ebp),%ecx
 87a8041:	c1 ca 1f             	ror    $0x1f,%edx
 87a8044:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 87a8047:	8d 55 e0             	lea    -0x20(%ebp),%edx
 87a804a:	89 45 e0             	mov    %eax,-0x20(%ebp)
 87a804d:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 87a8050:	83 c1 38             	add    $0x38,%ecx
 87a8053:	89 54 24 08          	mov    %edx,0x8(%esp)
 87a8057:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a805b:	89 0c 24             	mov    %ecx,(%esp)
 87a805e:	89 45 d0             	mov    %eax,-0x30(%ebp)
 87a8061:	89 55 d4             	mov    %edx,-0x2c(%ebp)
 87a8064:	e8 37 db ff ff       	call   87a5ba0 <_ZNK8TaoCrypt8BasicDES15RawProcessBlockERjS1_>
 87a8069:	8b 4d 08             	mov    0x8(%ebp),%ecx
 87a806c:	8b 45 d0             	mov    -0x30(%ebp),%eax
 87a806f:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 87a8072:	81 c1 b8 00 00 00    	add    $0xb8,%ecx
 87a8078:	89 0c 24             	mov    %ecx,(%esp)
 87a807b:	89 44 24 08          	mov    %eax,0x8(%esp)
 87a807f:	89 54 24 04          	mov    %edx,0x4(%esp)
 87a8083:	e8 18 db ff ff       	call   87a5ba0 <_ZNK8TaoCrypt8BasicDES15RawProcessBlockERjS1_>
 87a8088:	8b 45 d0             	mov    -0x30(%ebp),%eax
 87a808b:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 87a808e:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a8092:	8b 45 08             	mov    0x8(%ebp),%eax
 87a8095:	89 54 24 08          	mov    %edx,0x8(%esp)
 87a8099:	05 38 01 00 00       	add    $0x138,%eax
 87a809e:	89 04 24             	mov    %eax,(%esp)
 87a80a1:	e8 fa da ff ff       	call   87a5ba0 <_ZNK8TaoCrypt8BasicDES15RawProcessBlockERjS1_>
 87a80a6:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 87a80a9:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 87a80ac:	d1 c9                	ror    $1,%ecx
 87a80ae:	89 c8                	mov    %ecx,%eax
 87a80b0:	31 d0                	xor    %edx,%eax
 87a80b2:	25 aa aa aa aa       	and    $0xaaaaaaaa,%eax
 87a80b7:	31 c2                	xor    %eax,%edx
 87a80b9:	31 c1                	xor    %eax,%ecx
 87a80bb:	c1 ca 09             	ror    $0x9,%edx
 87a80be:	89 d0                	mov    %edx,%eax
 87a80c0:	31 c8                	xor    %ecx,%eax
 87a80c2:	25 ff 00 ff 00       	and    $0xff00ff,%eax
 87a80c7:	31 c2                	xor    %eax,%edx
 87a80c9:	31 c1                	xor    %eax,%ecx
 87a80cb:	c1 ca 1a             	ror    $0x1a,%edx
 87a80ce:	89 d0                	mov    %edx,%eax
 87a80d0:	31 c8                	xor    %ecx,%eax
 87a80d2:	25 33 33 33 33       	and    $0x33333333,%eax
 87a80d7:	31 c2                	xor    %eax,%edx
 87a80d9:	31 c1                	xor    %eax,%ecx
 87a80db:	c1 ca 0e             	ror    $0xe,%edx
 87a80de:	89 d0                	mov    %edx,%eax
 87a80e0:	31 c8                	xor    %ecx,%eax
 87a80e2:	66 31 c0             	xor    %ax,%ax
 87a80e5:	31 c2                	xor    %eax,%edx
 87a80e7:	31 c1                	xor    %eax,%ecx
 87a80e9:	c1 ca 0c             	ror    $0xc,%edx
 87a80ec:	89 d0                	mov    %edx,%eax
 87a80ee:	31 c8                	xor    %ecx,%eax
 87a80f0:	25 f0 f0 f0 f0       	and    $0xf0f0f0f0,%eax
 87a80f5:	31 c2                	xor    %eax,%edx
 87a80f7:	31 c1                	xor    %eax,%ecx
 87a80f9:	c1 ca 04             	ror    $0x4,%edx
 87a80fc:	85 f6                	test   %esi,%esi
 87a80fe:	74 48                	je     87a8148 <_ZNK8TaoCrypt8DES_EDE318ProcessAndXorBlockEPKhS2_Ph+0x1a8>
 87a8100:	89 c8                	mov    %ecx,%eax
 87a8102:	c1 c8 18             	ror    $0x18,%eax
 87a8105:	c1 c9 08             	ror    $0x8,%ecx
 87a8108:	25 ff 00 ff 00       	and    $0xff00ff,%eax
 87a810d:	81 e1 00 ff 00 ff    	and    $0xff00ff00,%ecx
 87a8113:	09 c8                	or     %ecx,%eax
 87a8115:	33 06                	xor    (%esi),%eax
 87a8117:	83 fe fc             	cmp    $0xfffffffc,%esi
 87a811a:	89 07                	mov    %eax,(%edi)
 87a811c:	8d 47 04             	lea    0x4(%edi),%eax
 87a811f:	74 41                	je     87a8162 <_ZNK8TaoCrypt8DES_EDE318ProcessAndXorBlockEPKhS2_Ph+0x1c2>
 87a8121:	89 d0                	mov    %edx,%eax
 87a8123:	c1 c8 18             	ror    $0x18,%eax
 87a8126:	c1 ca 08             	ror    $0x8,%edx
 87a8129:	25 ff 00 ff 00       	and    $0xff00ff,%eax
 87a812e:	81 e2 00 ff 00 ff    	and    $0xff00ff00,%edx
 87a8134:	09 d0                	or     %edx,%eax
 87a8136:	33 46 04             	xor    0x4(%esi),%eax
 87a8139:	89 47 04             	mov    %eax,0x4(%edi)
 87a813c:	83 c4 3c             	add    $0x3c,%esp
 87a813f:	5b                   	pop    %ebx
 87a8140:	5e                   	pop    %esi
 87a8141:	5f                   	pop    %edi
 87a8142:	5d                   	pop    %ebp
 87a8143:	c3                   	ret
 87a8144:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87a8148:	89 c8                	mov    %ecx,%eax
 87a814a:	c1 c8 18             	ror    $0x18,%eax
 87a814d:	c1 c9 08             	ror    $0x8,%ecx
 87a8150:	25 ff 00 ff 00       	and    $0xff00ff,%eax
 87a8155:	81 e1 00 ff 00 ff    	and    $0xff00ff00,%ecx
 87a815b:	09 c8                	or     %ecx,%eax
 87a815d:	89 07                	mov    %eax,(%edi)
 87a815f:	8d 47 04             	lea    0x4(%edi),%eax
 87a8162:	89 d1                	mov    %edx,%ecx
 87a8164:	c1 c9 18             	ror    $0x18,%ecx
 87a8167:	c1 ca 08             	ror    $0x8,%edx
 87a816a:	81 e1 ff 00 ff 00    	and    $0xff00ff,%ecx
 87a8170:	81 e2 00 ff 00 ff    	and    $0xff00ff00,%edx
 87a8176:	09 d1                	or     %edx,%ecx
 87a8178:	89 08                	mov    %ecx,(%eax)
 87a817a:	83 c4 3c             	add    $0x3c,%esp
 87a817d:	5b                   	pop    %ebx
 87a817e:	5e                   	pop    %esi
 87a817f:	5f                   	pop    %edi
 87a8180:	5d                   	pop    %ebp
 87a8181:	c3                   	ret
 87a8182:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87a8189:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TaoCrypt::DES_EDE3::ProcessAndXorBlock @ 0x87a7fa0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::DES_EDE3::ProcessAndXorBlock(unsigned char const*, unsigned char const*, unsigned
   char*) const */

void __thiscall
TaoCrypt::DES_EDE3::ProcessAndXorBlock(DES_EDE3 *this,uchar *param_1,uchar *param_2,uchar *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint local_24;
  uint local_20 [4];
  
  uVar2 = *(uint *)param_1;
  uVar4 = uVar2 >> 0x18 | (uVar2 & 0xff00) << 8 | uVar2 >> 8 & 0xff00ff00 | uVar2 << 0x18;
  uVar2 = *(uint *)(param_1 + 4);
  uVar1 = (uVar2 << 0x18) >> 0x1c |
          (uVar2 >> 0x18 | (uVar2 & 0xff00) << 8 | uVar2 >> 8 & 0xff00ff00 | uVar2 << 0x18) << 4;
  uVar2 = (uVar1 ^ uVar4) & 0xf0f0f0f0;
  uVar1 = uVar1 ^ uVar2;
  uVar4 = uVar4 ^ uVar2;
  uVar2 = uVar1 << 0xc;
  uVar3 = (uint)(ushort)((ushort)(uVar2 >> 0x10) ^ (ushort)(uVar4 >> 0x10)) << 0x10;
  uVar2 = (uVar1 >> 0x14 | uVar2) ^ uVar3;
  uVar4 = uVar4 ^ uVar3;
  uVar2 = uVar2 >> 0x12 | uVar2 << 0xe;
  uVar1 = (uVar2 ^ uVar4) & 0x33333333;
  uVar2 = uVar2 ^ uVar1;
  uVar4 = uVar4 ^ uVar1;
  uVar2 = uVar2 >> 6 | uVar2 << 0x1a;
  uVar1 = (uVar2 ^ uVar4) & 0xff00ff;
  uVar2 = uVar2 ^ uVar1;
  uVar4 = uVar4 ^ uVar1;
  local_24 = uVar2 >> 0x17 | uVar2 << 9;
  uVar2 = (local_24 ^ uVar4) & 0xaaaaaaaa;
  local_24 = local_24 ^ uVar2;
  uVar4 = uVar4 ^ uVar2;
  local_20[0] = uVar4 >> 0x1f | uVar4 << 1;
  BasicDES::RawProcessBlock((BasicDES *)(this + 0x38),local_20,&local_24);
  BasicDES::RawProcessBlock((BasicDES *)(this + 0xb8),&local_24,local_20);
  BasicDES::RawProcessBlock((BasicDES *)(this + 0x138),local_20,&local_24);
  uVar3 = local_24 >> 1 | (uint)((local_24 & 1) != 0) << 0x1f;
  uVar2 = (uVar3 ^ local_20[0]) & 0xaaaaaaaa;
  local_20[0] = local_20[0] ^ uVar2;
  uVar3 = uVar3 ^ uVar2;
  uVar2 = local_20[0] << 0x17;
  uVar4 = local_20[0] >> 9 | uVar2;
  uVar1 = (uVar4 ^ uVar3) & 0xff00ff;
  uVar3 = uVar3 ^ uVar1;
  uVar1 = uVar2 >> 0x1a | (uVar4 ^ uVar1) << 6;
  uVar2 = (uVar1 ^ uVar3) & 0x33333333;
  uVar1 = uVar1 ^ uVar2;
  uVar3 = uVar3 ^ uVar2;
  uVar2 = uVar1 >> 0xe;
  uVar4 = uVar2 | uVar1 << 0x12;
  uVar1 = (uint)(ushort)((ushort)(uVar4 >> 0x10) ^ (ushort)(uVar3 >> 0x10)) << 0x10;
  uVar3 = uVar3 ^ uVar1;
  uVar1 = (uVar4 ^ uVar1) >> 0xc;
  uVar4 = uVar1 | uVar2 << 0x14;
  uVar2 = (uVar4 ^ uVar3) & 0xf0f0f0f0;
  uVar3 = uVar3 ^ uVar2;
  uVar2 = (uVar4 ^ uVar2) >> 4;
  uVar1 = uVar2 | uVar1 << 0x1c;
  if (param_2 == (uchar *)0x0) {
    *(uint *)param_3 =
         uVar3 >> 0x18 | (uVar3 & 0xff00) << 8 | uVar3 >> 8 & 0xff00ff00 | uVar3 << 0x18;
  }
  else {
    *(uint *)param_3 =
         (uVar3 >> 0x18 | (uVar3 & 0xff00) << 8 | uVar3 >> 8 & 0xff00ff00 | uVar3 << 0x18) ^
         *(uint *)param_2;
    if (param_2 != (uchar *)0xfffffffc) {
      *(uint *)(param_3 + 4) =
           (uVar1 >> 0x18 | (uVar2 & 0xff00) << 8 | (uVar2 & 0xff0000) >> 8 | uVar2 << 0x18) ^
           *(uint *)(param_2 + 4);
      return;
    }
  }
  *(uint *)(param_3 + 4) =
       uVar1 >> 0x18 | (uVar2 & 0xff00) << 8 | (uVar2 & 0xff0000) >> 8 | uVar2 << 0x18;
  return;
}

```

---

## SetKey

```asm
// === 087a7c70 TaoCrypt::DES_EDE3::SetKey  [0x087a7c70-0x87a7d6f] ===
 87a7c70:	55                   	push   %ebp
 87a7c71:	89 e5                	mov    %esp,%ebp
 87a7c73:	83 ec 38             	sub    $0x38,%esp
 87a7c76:	89 7d fc             	mov    %edi,-0x4(%ebp)
 87a7c79:	8b 7d 14             	mov    0x14(%ebp),%edi
 87a7c7c:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 87a7c7f:	e8 74 b1 f7 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87a7c84:	81 c3 14 4f bc 00    	add    $0xbc4f14,%ebx
 87a7c8a:	89 75 f8             	mov    %esi,-0x8(%ebp)
 87a7c8d:	8b 75 0c             	mov    0xc(%ebp),%esi
 87a7c90:	85 ff                	test   %edi,%edi
 87a7c92:	75 7c                	jne    87a7d10 <_ZN8TaoCrypt8DES_EDE36SetKeyEPKhjNS_9CipherDirE+0xa0>
 87a7c94:	8b 45 10             	mov    0x10(%ebp),%eax
 87a7c97:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 87a7c9e:	00 
 87a7c9f:	89 74 24 04          	mov    %esi,0x4(%esp)
 87a7ca3:	89 44 24 08          	mov    %eax,0x8(%esp)
 87a7ca7:	8b 45 08             	mov    0x8(%ebp),%eax
 87a7caa:	83 c0 38             	add    $0x38,%eax
 87a7cad:	89 04 24             	mov    %eax,(%esp)
 87a7cb0:	e8 5b fd ff ff       	call   87a7a10 <_ZN8TaoCrypt8BasicDES6SetKeyEPKhjNS_9CipherDirE>
 87a7cb5:	8d 46 08             	lea    0x8(%esi),%eax
 87a7cb8:	8b 55 10             	mov    0x10(%ebp),%edx
 87a7cbb:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a7cbf:	8b 45 08             	mov    0x8(%ebp),%eax
 87a7cc2:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 87a7cc9:	00 
 87a7cca:	89 54 24 08          	mov    %edx,0x8(%esp)
 87a7cce:	05 b8 00 00 00       	add    $0xb8,%eax
 87a7cd3:	89 04 24             	mov    %eax,(%esp)
 87a7cd6:	e8 35 fd ff ff       	call   87a7a10 <_ZN8TaoCrypt8BasicDES6SetKeyEPKhjNS_9CipherDirE>
 87a7cdb:	8d 46 10             	lea    0x10(%esi),%eax
 87a7cde:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a7ce2:	8b 45 08             	mov    0x8(%ebp),%eax
 87a7ce5:	8b 55 10             	mov    0x10(%ebp),%edx
 87a7ce8:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 87a7cec:	05 38 01 00 00       	add    $0x138,%eax
 87a7cf1:	89 54 24 08          	mov    %edx,0x8(%esp)
 87a7cf5:	89 04 24             	mov    %eax,(%esp)
 87a7cf8:	e8 13 fd ff ff       	call   87a7a10 <_ZN8TaoCrypt8BasicDES6SetKeyEPKhjNS_9CipherDirE>
 87a7cfd:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 87a7d00:	8b 75 f8             	mov    -0x8(%ebp),%esi
 87a7d03:	8b 7d fc             	mov    -0x4(%ebp),%edi
 87a7d06:	89 ec                	mov    %ebp,%esp
 87a7d08:	5d                   	pop    %ebp
 87a7d09:	c3                   	ret
 87a7d0a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87a7d10:	8b 55 10             	mov    0x10(%ebp),%edx
 87a7d13:	8d 46 10             	lea    0x10(%esi),%eax
 87a7d16:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a7d1a:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 87a7d1d:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 87a7d21:	89 54 24 08          	mov    %edx,0x8(%esp)
 87a7d25:	8b 55 08             	mov    0x8(%ebp),%edx
 87a7d28:	83 c2 38             	add    $0x38,%edx
 87a7d2b:	89 14 24             	mov    %edx,(%esp)
 87a7d2e:	e8 dd fc ff ff       	call   87a7a10 <_ZN8TaoCrypt8BasicDES6SetKeyEPKhjNS_9CipherDirE>
 87a7d33:	8b 55 10             	mov    0x10(%ebp),%edx
 87a7d36:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 87a7d3d:	00 
 87a7d3e:	89 54 24 08          	mov    %edx,0x8(%esp)
 87a7d42:	8d 56 08             	lea    0x8(%esi),%edx
 87a7d45:	89 54 24 04          	mov    %edx,0x4(%esp)
 87a7d49:	8b 55 08             	mov    0x8(%ebp),%edx
 87a7d4c:	81 c2 b8 00 00 00    	add    $0xb8,%edx
 87a7d52:	89 14 24             	mov    %edx,(%esp)
 87a7d55:	e8 b6 fc ff ff       	call   87a7a10 <_ZN8TaoCrypt8BasicDES6SetKeyEPKhjNS_9CipherDirE>
 87a7d5a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 87a7d5d:	83 ff 01             	cmp    $0x1,%edi
 87a7d60:	0f 44 c6             	cmove  %esi,%eax
 87a7d63:	e9 76 ff ff ff       	jmp    87a7cde <_ZN8TaoCrypt8DES_EDE36SetKeyEPKhjNS_9CipherDirE+0x6e>
 87a7d68:	90                   	nop
 87a7d69:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TaoCrypt::DES_EDE3::SetKey @ 0x87a7c70

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::DES_EDE3::SetKey(unsigned char const*, unsigned int, TaoCrypt::CipherDir) */

void __thiscall
TaoCrypt::DES_EDE3::SetKey(DES_EDE3 *this,int param_1,undefined4 param_2,int param_4)

{
  int iVar1;
  
  if (param_4 == 0) {
    BasicDES::SetKey((BasicDES *)(this + 0x38),param_1,param_2,0);
    BasicDES::SetKey((BasicDES *)(this + 0xb8),param_1 + 8,param_2,1);
    iVar1 = param_1 + 0x10;
  }
  else {
    BasicDES::SetKey((BasicDES *)(this + 0x38),param_1 + 0x10,param_2,param_4);
    BasicDES::SetKey((BasicDES *)(this + 0xb8),param_1 + 8,param_2,0);
    iVar1 = param_1 + 0x10;
    if (param_4 == 1) {
      iVar1 = param_1;
    }
  }
  BasicDES::SetKey((BasicDES *)(this + 0x138),iVar1,param_2,param_4);
  return;
}

```

